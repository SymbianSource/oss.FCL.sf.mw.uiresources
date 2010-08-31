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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004ac78 };

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
0x5cfe,	// (0x00050976) Screen

0x5d0a,	// (0x00050982) application_window

0x5d4a,	// (0x000509c2) area_bottom_pane_ParamLimits

0x5d4a,	// (0x000509c2) area_bottom_pane

0x5d7f,	// (0x000509f7) area_top_pane_ParamLimits

0x5d7f,	// (0x000509f7) area_top_pane

0x271b,	// (0x0004d393) call_video_uplink_pane_ParamLimits

0x271b,	// (0x0004d393) call_video_uplink_pane

0x5e0c,	// (0x00050a84) main_pane_ParamLimits

0x5e0c,	// (0x00050a84) main_pane

0x4eb2,	// (0x0004fb2a) context_pane

0x8edc,	// (0x00053b54) navi_pane

0x8efc,	// (0x00053b74) popup_cale_events_window_ParamLimits

0x8efc,	// (0x00053b74) popup_cale_events_window

0x4ec5,	// (0x0004fb3d) popup_mup_playback_window

0x8f14,	// (0x00053b8c) signal_pane

0x2f80,	// (0x0004dbf8) main_browser_pane

0x3a5f,	// (0x0004e6d7) main_burst_pane

0x8da6,	// (0x00053a1e) main_calc_pane

0x3a5f,	// (0x0004e6d7) main_cale_day_pane

0x2f80,	// (0x0004dbf8) main_cale_month_pane

0x3a5f,	// (0x0004e6d7) main_cale_week_pane

0x3a5f,	// (0x0004e6d7) main_call_pane

0x2c4e,	// (0x0004d8c6) main_call_poc_pane

0x3a5f,	// (0x0004e6d7) main_camera_pane

0x3a5f,	// (0x0004e6d7) main_chi_dic_pane

0x38e4,	// (0x0004e55c) main_clock_pane

0x2c4e,	// (0x0004d8c6) main_fmradio_pane

0x3a5f,	// (0x0004e6d7) main_graph_messa_pane

0x2c4e,	// (0x0004d8c6) main_help_pane

0x2f80,	// (0x0004dbf8) main_im_pane

0x2ea9,	// (0x0004db21) main_image_pane_ParamLimits

0x2ea9,	// (0x0004db21) main_image_pane

0x2c4e,	// (0x0004d8c6) main_location2_pane

0x3a5f,	// (0x0004e6d7) main_location_pane

0x2c4e,	// (0x0004d8c6) main_messa_pane

0x2c4e,	// (0x0004d8c6) main_mp2_pane

0x3a5f,	// (0x0004e6d7) main_mp_pane

0x2c4e,	// (0x0004d8c6) main_msg_pane

0x2c4e,	// (0x0004d8c6) main_mup_eq_pane

0x2c4e,	// (0x0004d8c6) main_mup_pane

0x3a5f,	// (0x0004e6d7) main_notes_pane

0x2c4e,	// (0x0004d8c6) main_pec_pane

0x2c4e,	// (0x0004d8c6) main_phob_pane

0x2c4e,	// (0x0004d8c6) main_pinb_pane

0x2c4e,	// (0x0004d8c6) main_postcard_pane

0x2c4e,	// (0x0004d8c6) main_qdial_pane

0x3a5f,	// (0x0004e6d7) main_skin_pane

0x2c4e,	// (0x0004d8c6) main_smil2_pane

0x3a5f,	// (0x0004e6d7) main_smil_pane

0x3a5f,	// (0x0004e6d7) main_video_pane

0x3a5f,	// (0x0004e6d7) main_video_tele_pane

0x2ea9,	// (0x0004db21) main_viewer_pane_ParamLimits

0x2ea9,	// (0x0004db21) main_viewer_pane

0x3a5f,	// (0x0004e6d7) main_vorec_pane

0x8ddc,	// (0x00053a54) popup_blid_sat_info_window_ParamLimits

0x8ddc,	// (0x00053a54) popup_blid_sat_info_window

0x8df2,	// (0x00053a6a) popup_dyc_status_message_window_ParamLimits

0x8df2,	// (0x00053a6a) popup_dyc_status_message_window

0x8e02,	// (0x00053a7a) popup_grid_large_graphic_window_ParamLimits

0x8e02,	// (0x00053a7a) popup_grid_large_graphic_window

0x8e78,	// (0x00053af0) popup_loc_request_window_ParamLimits

0x8e78,	// (0x00053af0) popup_loc_request_window

0x8eb4,	// (0x00053b2c) popup_wml_address_window_ParamLimits

0x8eb4,	// (0x00053b2c) popup_wml_address_window

0x8c7e,	// (0x000538f6) call_muted_g1

0x8940,	// (0x000535b8) popup_call_audio_conf_window_ParamLimits

0x8940,	// (0x000535b8) popup_call_audio_conf_window

0x8c8e,	// (0x00053906) popup_call_audio_first_window_ParamLimits

0x8c8e,	// (0x00053906) popup_call_audio_first_window

0x8cce,	// (0x00053946) popup_call_audio_in_window_ParamLimits

0x8cce,	// (0x00053946) popup_call_audio_in_window

0x8cf2,	// (0x0005396a) popup_call_audio_out_window_ParamLimits

0x8cf2,	// (0x0005396a) popup_call_audio_out_window

0x8d14,	// (0x0005398c) popup_call_audio_second_window_ParamLimits

0x8d14,	// (0x0005398c) popup_call_audio_second_window

0x8d44,	// (0x000539bc) popup_call_audio_wait_window_ParamLimits

0x8d44,	// (0x000539bc) popup_call_audio_wait_window

0x8d65,	// (0x000539dd) popup_number_entry_window_ParamLimits

0x8d65,	// (0x000539dd) popup_number_entry_window

0x2739,	// (0x0004d3b1) bg_popup_call_pane_cp05_ParamLimits

0x2739,	// (0x0004d3b1) bg_popup_call_pane_cp05

0x285b,	// (0x0004d4d3) popup_number_entry_window_t1

0x286e,	// (0x0004d4e6) popup_number_entry_window_t2

0x2880,	// (0x0004d4f8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00059d64) popup_number_entry_window_t

0x2892,	// (0x0004d50a) text_title_cp2

0x28a5,	// (0x0004d51d) bg_popup_call_pane_cp_ParamLimits

0x28a5,	// (0x0004d51d) bg_popup_call_pane_cp

0x28b3,	// (0x0004d52b) call_thumbnail_pane

0x28bb,	// (0x0004d533) popup_call_audio_in_window_g1_ParamLimits

0x28bb,	// (0x0004d533) popup_call_audio_in_window_g1

0x28c7,	// (0x0004d53f) popup_call_audio_in_window_g2_ParamLimits

0x28c7,	// (0x0004d53f) popup_call_audio_in_window_g2

0x28d3,	// (0x0004d54b) popup_call_audio_in_window_g3_ParamLimits

0x28d3,	// (0x0004d54b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00059d6d) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00059d6d) popup_call_audio_in_window_g

0x28df,	// (0x0004d557) popup_call_audio_in_window_t1_ParamLimits

0x28df,	// (0x0004d557) popup_call_audio_in_window_t1

0x28fb,	// (0x0004d573) popup_call_audio_in_window_t2_ParamLimits

0x28fb,	// (0x0004d573) popup_call_audio_in_window_t2

0x2917,	// (0x0004d58f) popup_call_audio_in_window_t3_ParamLimits

0x2917,	// (0x0004d58f) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00059d74) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00059d74) popup_call_audio_in_window_t

0x28a5,	// (0x0004d51d) bg_popup_call_pane_cp01_ParamLimits

0x28a5,	// (0x0004d51d) bg_popup_call_pane_cp01

0x28b3,	// (0x0004d52b) call_thumbnail_pane_cp02

0x292a,	// (0x0004d5a2) call_type_pane_cp022

0x2932,	// (0x0004d5aa) popup_call_audio_out_window_g1_ParamLimits

0x2932,	// (0x0004d5aa) popup_call_audio_out_window_g1

0x2944,	// (0x0004d5bc) popup_call_audio_out_window_g2_ParamLimits

0x2944,	// (0x0004d5bc) popup_call_audio_out_window_g2

0x2950,	// (0x0004d5c8) popup_call_audio_out_window_g3_ParamLimits

0x2950,	// (0x0004d5c8) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00059d7b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00059d7b) popup_call_audio_out_window_g

0x2962,	// (0x0004d5da) popup_call_audio_out_window_t1_ParamLimits

0x2962,	// (0x0004d5da) popup_call_audio_out_window_t1

0x297a,	// (0x0004d5f2) popup_call_audio_out_window_t2_ParamLimits

0x297a,	// (0x0004d5f2) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00059d82) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00059d82) popup_call_audio_out_window_t

0x298f,	// (0x0004d607) bg_popup_call_pane_ParamLimits

0x298f,	// (0x0004d607) bg_popup_call_pane

0x5ff9,	// (0x00050c71) call_thumbnail_pane_cp_ParamLimits

0x5ff9,	// (0x00050c71) call_thumbnail_pane_cp

0x2a13,	// (0x0004d68b) call_type_pane_cp01_ParamLimits

0x2a13,	// (0x0004d68b) call_type_pane_cp01

0x2a57,	// (0x0004d6cf) popup_call_audio_first_window_g1_ParamLimits

0x2a57,	// (0x0004d6cf) popup_call_audio_first_window_g1

0x2aa3,	// (0x0004d71b) popup_call_audio_first_window_g2_ParamLimits

0x2aa3,	// (0x0004d71b) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00059d87) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00059d87) popup_call_audio_first_window_g

0x2ae7,	// (0x0004d75f) popup_call_audio_first_window_t1_ParamLimits

0x2ae7,	// (0x0004d75f) popup_call_audio_first_window_t1

0x2b93,	// (0x0004d80b) popup_call_audio_first_window_t4_ParamLimits

0x2b93,	// (0x0004d80b) popup_call_audio_first_window_t4

0x2c1f,	// (0x0004d897) popup_call_audio_first_window_t5_ParamLimits

0x2c1f,	// (0x0004d897) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00059d8c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00059d8c) popup_call_audio_first_window_t

0x2c4e,	// (0x0004d8c6) bg_popup_call_pane_cp02

0x2c58,	// (0x0004d8d0) call_type_pane_cp023

0x2c60,	// (0x0004d8d8) popup_call_audio_wait_window_g1

0x2c68,	// (0x0004d8e0) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00059d93) popup_call_audio_wait_window_g

0x2c70,	// (0x0004d8e8) popup_call_audio_wait_window_t3

0x2c7e,	// (0x0004d8f6) bg_popup_call_pane_cp03_ParamLimits

0x2c7e,	// (0x0004d8f6) bg_popup_call_pane_cp03

0x2cde,	// (0x0004d956) call_thumbnail_pane_cp011_ParamLimits

0x2cde,	// (0x0004d956) call_thumbnail_pane_cp011

0x2cea,	// (0x0004d962) call_type_pane_cp034_ParamLimits

0x2cea,	// (0x0004d962) call_type_pane_cp034

0x2d26,	// (0x0004d99e) popup_call_audio_second_window_g1_ParamLimits

0x2d26,	// (0x0004d99e) popup_call_audio_second_window_g1

0x2d62,	// (0x0004d9da) popup_call_audio_second_window_g2_ParamLimits

0x2d62,	// (0x0004d9da) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00059d98) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00059d98) popup_call_audio_second_window_g

0x2d9e,	// (0x0004da16) popup_call_audio_second_window_t1_ParamLimits

0x2d9e,	// (0x0004da16) popup_call_audio_second_window_t1

0x2e1f,	// (0x0004da97) popup_call_audio_second_window_t2_ParamLimits

0x2e1f,	// (0x0004da97) popup_call_audio_second_window_t2

0x2e55,	// (0x0004dacd) popup_call_audio_second_window_t3_ParamLimits

0x2e55,	// (0x0004dacd) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00059d9d) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00059d9d) popup_call_audio_second_window_t

0x2c4e,	// (0x0004d8c6) bg_popup_call_pane_cp04

0x2e8b,	// (0x0004db03) list_conf_pane

0x2e93,	// (0x0004db0b) popup_call_audio_conf_window_t1

0x2ea1,	// (0x0004db19) call_thumbnail_pane_g1

0x2ea9,	// (0x0004db21) bg_pinb_pane_ParamLimits

0x2ea9,	// (0x0004db21) bg_pinb_pane

0x2eb7,	// (0x0004db2f) find_pinb_pane

0x2ec0,	// (0x0004db38) listscroll_pinb_pane_ParamLimits

0x2ec0,	// (0x0004db38) listscroll_pinb_pane

0x2ecf,	// (0x0004db47) pinb_bg_pane_g1

0x601d,	// (0x00050c95) pinb_bg_pane_g2

0x6029,	// (0x00050ca1) pinb_bg_pane_g3

0x6035,	// (0x00050cad) pinb_bg_pane_g4

0x6041,	// (0x00050cb9) pinb_bg_pane_g5

0x604d,	// (0x00050cc5) pinb_bg_pane_g6

0x6058,	// (0x00050cd0) pinb_bg_pane_g7

0x6063,	// (0x00050cdb) pinb_bg_pane_g8

0x606e,	// (0x00050ce6) pinb_bg_pane_g9

0x6078,	// (0x00050cf0) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00059da4) pinb_bg_pane_g

0x6095,	// (0x00050d0d) grid_pinb_pane

0x60a0,	// (0x00050d18) list_pinb_pane

0x60ab,	// (0x00050d23) scroll_pane_cp01_ParamLimits

0x60ab,	// (0x00050d23) scroll_pane_cp01

0x2ed9,	// (0x0004db51) find_pinb_pane_g1_ParamLimits

0x2ed9,	// (0x0004db51) find_pinb_pane_g1

0x2ef1,	// (0x0004db69) find_pinb_pane_t1

0x2f03,	// (0x0004db7b) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00059dbe) find_pinb_pane_t

0x2f18,	// (0x0004db90) input_focus_pane_cp01_ParamLimits

0x2f18,	// (0x0004db90) input_focus_pane_cp01

0x60bd,	// (0x00050d35) cell_pinb_pane_ParamLimits

0x60bd,	// (0x00050d35) cell_pinb_pane

0x60e2,	// (0x00050d5a) cell_pinb_pane_g1_ParamLimits

0x60e2,	// (0x00050d5a) cell_pinb_pane_g1

0x60f7,	// (0x00050d6f) cell_pinb_pane_g2_ParamLimits

0x60f7,	// (0x00050d6f) cell_pinb_pane_g2

0x2f24,	// (0x0004db9c) cell_pinb_pane_g3_ParamLimits

0x2f24,	// (0x0004db9c) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00059dc3) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00059dc3) cell_pinb_pane_g

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp01

0x6103,	// (0x00050d7b) list_pinb_item_pane_ParamLimits

0x6103,	// (0x00050d7b) list_pinb_item_pane

0x2c4e,	// (0x0004d8c6) list_highlight_pane_cp02

0x6123,	// (0x00050d9b) list_pinb_item_pane_g1_ParamLimits

0x6123,	// (0x00050d9b) list_pinb_item_pane_g1

0x2f30,	// (0x0004dba8) list_pinb_item_pane_g2_ParamLimits

0x2f30,	// (0x0004dba8) list_pinb_item_pane_g2

0x6130,	// (0x00050da8) list_pinb_item_pane_g3_ParamLimits

0x6130,	// (0x00050da8) list_pinb_item_pane_g3

0x6141,	// (0x00050db9) list_pinb_item_pane_g4_ParamLimits

0x6141,	// (0x00050db9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00059dca) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00059dca) list_pinb_item_pane_g

0x614d,	// (0x00050dc5) list_pinb_item_pane_t1_ParamLimits

0x614d,	// (0x00050dc5) list_pinb_item_pane_t1

0x617e,	// (0x00050df6) calc_display_pane

0x619c,	// (0x00050e14) calc_paper_pane

0x61b8,	// (0x00050e30) grid_calc_pane

0x2c4e,	// (0x0004d8c6) bg_list_pane_cp01

0x61e2,	// (0x00050e5a) clock_g1

0x61ea,	// (0x00050e62) clock_g2

0x0001,

0xf15b,	// (0x00059dd3) clock_g

0x61f4,	// (0x00050e6c) clock_t1_ParamLimits

0x61f4,	// (0x00050e6c) clock_t1

0x6209,	// (0x00050e81) clock_t2_ParamLimits

0x6209,	// (0x00050e81) clock_t2

0x621b,	// (0x00050e93) clock_t3_ParamLimits

0x621b,	// (0x00050e93) clock_t3

0x622d,	// (0x00050ea5) clock_t4_ParamLimits

0x622d,	// (0x00050ea5) clock_t4

0x623f,	// (0x00050eb7) clock_t5_ParamLimits

0x623f,	// (0x00050eb7) clock_t5

0x6254,	// (0x00050ecc) clock_t6_ParamLimits

0x6254,	// (0x00050ecc) clock_t6

0x6266,	// (0x00050ede) clock_t7_ParamLimits

0x6266,	// (0x00050ede) clock_t7

0x6278,	// (0x00050ef0) clock_t8_ParamLimits

0x6278,	// (0x00050ef0) clock_t8

0x628e,	// (0x00050f06) clock_t9_ParamLimits

0x628e,	// (0x00050f06) clock_t9

0x0008,

0xf160,	// (0x00059dd8) clock_t_ParamLimits

0xf160,	// (0x00059dd8) clock_t

0x2f3c,	// (0x0004dbb4) popup_clock_analogue_window_cp02

0x2f3c,	// (0x0004dbb4) popup_clock_digital_window_cp01

0x2f44,	// (0x0004dbbc) listscroll_help_pane

0x2c4e,	// (0x0004d8c6) phob_pre_status_pane

0x2f4e,	// (0x0004dbc6) grid_qdial_pane

0x2c4e,	// (0x0004d8c6) listscroll_mce_pane

0x2f58,	// (0x0004dbd0) bg_notes_pane

0x2f62,	// (0x0004dbda) list_notes_pane

0x62a4,	// (0x00050f1c) scroll_pane_cp06

0x2f6c,	// (0x0004dbe4) bg_calc_paper_pane

0x62b9,	// (0x00050f31) list_calc_pane

0x2f80,	// (0x0004dbf8) bg_calc_display_pane

0x62d3,	// (0x00050f4b) calc_display_pane_t1

0x62e8,	// (0x00050f60) calc_display_pane_t2

0x62fd,	// (0x00050f75) calc_display_pane_t3

0x0002,

0xf173,	// (0x00059deb) calc_display_pane_t

0x630f,	// (0x00050f87) cell_calc_pane_ParamLimits

0x630f,	// (0x00050f87) cell_calc_pane

0x2f8c,	// (0x0004dc04) bg_calc_paper_pane_g1

0x2fa4,	// (0x0004dc1c) bg_calc_paper_pane_g2

0x2f98,	// (0x0004dc10) bg_calc_paper_pane_g3

0x2fbc,	// (0x0004dc34) bg_calc_paper_pane_g4

0x2fb0,	// (0x0004dc28) bg_calc_paper_pane_g5

0x633c,	// (0x00050fb4) bg_calc_paper_pane_g6

0x634d,	// (0x00050fc5) bg_calc_paper_pane_g7

0x635e,	// (0x00050fd6) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00059df2) bg_calc_paper_pane_g

0x636f,	// (0x00050fe7) calc_bg_paper_pane_g9

0x6380,	// (0x00050ff8) list_calc_item_pane_ParamLimits

0x6380,	// (0x00050ff8) list_calc_item_pane

0x2fc8,	// (0x0004dc40) list_calc_item_pane_g1

0x63af,	// (0x00051027) list_calc_item_pane_t1_ParamLimits

0x63af,	// (0x00051027) list_calc_item_pane_t1

0x63c1,	// (0x00051039) list_calc_item_pane_t2_ParamLimits

0x63c1,	// (0x00051039) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00059e03) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00059e03) list_calc_item_pane_t

0x2fd5,	// (0x0004dc4d) cell_calc_pane_g1

0x2fdf,	// (0x0004dc57) grid_highlight_pane_cp02

0x63f1,	// (0x00051069) bg_calc_display_pane_g1

0x63fa,	// (0x00051072) bg_calc_display_pane_g2

0xde31,	// (0x00058aa9) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00059e0d) bg_calc_display_pane_g

0x6404,	// (0x0005107c) cell_qdial_pane_ParamLimits

0x6404,	// (0x0005107c) cell_qdial_pane

0x6418,	// (0x00051090) cell_qdial_pane_g1_ParamLimits

0x6418,	// (0x00051090) cell_qdial_pane_g1

0x6425,	// (0x0005109d) cell_qdial_pane_g2_ParamLimits

0x6425,	// (0x0005109d) cell_qdial_pane_g2

0x3001,	// (0x0004dc79) cell_qdial_pane_g3_ParamLimits

0x3001,	// (0x0004dc79) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00059e14) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00059e14) cell_qdial_pane_g

0x6443,	// (0x000510bb) cell_qdial_pane_t1_ParamLimits

0x6443,	// (0x000510bb) cell_qdial_pane_t1

0x645b,	// (0x000510d3) cell_qdial_pane_t2_ParamLimits

0x645b,	// (0x000510d3) cell_qdial_pane_t2

0x646e,	// (0x000510e6) cell_qdial_pane_t3_ParamLimits

0x646e,	// (0x000510e6) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00059e1d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00059e1d) cell_qdial_pane_t

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp04

0x300d,	// (0x0004dc85) thumbnail_qdial_pane_ParamLimits

0x300d,	// (0x0004dc85) thumbnail_qdial_pane

0x3069,	// (0x0004dce1) list_help_pane

0x3072,	// (0x0004dcea) scroll_pane_cp02

0x6481,	// (0x000510f9) help_list_pane_t1_ParamLimits

0x6481,	// (0x000510f9) help_list_pane_t1

0x64b4,	// (0x0005112c) bg_notes_pane_g2

0x64bc,	// (0x00051134) bg_notes_pane_g3

0x64c4,	// (0x0005113c) notes_bg_pane_g1

0x64cc,	// (0x00051144) notes_bg_pane_g4

0x64d4,	// (0x0005114c) notes_bg_pane_g5

0x64dc,	// (0x00051154) notes_bg_pane_g6

0x64e4,	// (0x0005115c) notes_bg_pane_g7

0x64ec,	// (0x00051164) notes_bg_pane_g8

0x64f4,	// (0x0005116c) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00059e3b) notes_bg_pane_g

0x64fc,	// (0x00051174) list_notes_text_pane_ParamLimits

0x64fc,	// (0x00051174) list_notes_text_pane

0x307b,	// (0x0004dcf3) list_notes_text_pane_g1

0x6521,	// (0x00051199) list_notes_text_pane_t1

0x2f80,	// (0x0004dbf8) listscroll_cale_week_pane

0x654c,	// (0x000511c4) bg_cale_heading_pane

0x3095,	// (0x0004dd0d) bg_cale_pane_cp01

0x6568,	// (0x000511e0) cale_week_corner_pane

0x657e,	// (0x000511f6) cale_week_day_heading_pane

0x659a,	// (0x00051212) cale_week_scroll_pane_g1

0x65b3,	// (0x0005122b) cale_week_scroll_pane_g2

0x65c4,	// (0x0005123c) cale_week_scroll_pane_g3

0x65d5,	// (0x0005124d) cale_week_scroll_pane_g4

0x65e6,	// (0x0005125e) cale_week_scroll_pane_g5

0x65f7,	// (0x0005126f) cale_week_scroll_pane_g6

0x6608,	// (0x00051280) cale_week_scroll_pane_g7

0x661b,	// (0x00051293) cale_week_scroll_pane_g8

0x662e,	// (0x000512a6) cale_week_scroll_pane_g9

0x663f,	// (0x000512b7) cale_week_scroll_pane_g10

0x6650,	// (0x000512c8) cale_week_scroll_pane_g11

0x6661,	// (0x000512d9) cale_week_scroll_pane_g12

0x6672,	// (0x000512ea) cale_week_scroll_pane_g13

0x668b,	// (0x00051303) cale_week_scroll_pane_g14

0x66a4,	// (0x0005131c) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00059e4a) cale_week_scroll_pane_g

0x66bd,	// (0x00051335) cale_week_time_pane

0x66d0,	// (0x00051348) grid_cale_week_pane

0x66ed,	// (0x00051365) scroll_pane_cp08

0x6707,	// (0x0005137f) cell_cale_week_pane_ParamLimits

0x6707,	// (0x0005137f) cell_cale_week_pane

0x6753,	// (0x000513cb) cale_week_day_heading_pane_t1

0x676c,	// (0x000513e4) cale_week_day_heading_pane_t2

0x6785,	// (0x000513fd) cale_week_day_heading_pane_t3

0x679e,	// (0x00051416) cale_week_day_heading_pane_t4

0x67b7,	// (0x0005142f) cale_week_day_heading_pane_t5

0x67d0,	// (0x00051448) cale_week_day_heading_pane_t6

0x67e9,	// (0x00051461) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00059e69) cale_week_day_heading_pane_t

0x30c0,	// (0x0004dd38) bg_cale_side_pane

0x6802,	// (0x0005147a) cale_week_time_pane_t1

0x681a,	// (0x00051492) cale_week_time_pane_t2

0x6832,	// (0x000514aa) cale_week_time_pane_t3

0x684a,	// (0x000514c2) cale_week_time_pane_t4

0x6862,	// (0x000514da) cale_week_time_pane_t5

0x687a,	// (0x000514f2) cale_week_time_pane_t6

0x6892,	// (0x0005150a) cale_week_time_pane_t7

0x68b2,	// (0x0005152a) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00059e78) cale_week_time_pane_t

0x68d2,	// (0x0005154a) cell_cale_week_pane_g2

0x68e3,	// (0x0005155b) cell_cale_week_pane_g3_ParamLimits

0x68e3,	// (0x0005155b) cell_cale_week_pane_g3

0x30ce,	// (0x0004dd46) grid_highlight_pane_cp07

0x30d6,	// (0x0004dd4e) listscroll_gms_pane

0x30e0,	// (0x0004dd58) grid_gms_pane

0x30e9,	// (0x0004dd61) listscroll_gms_pane_g1

0x30f1,	// (0x0004dd69) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00059e89) listscroll_gms_pane_g

0x68fb,	// (0x00051573) scroll_pane_cp010

0x6906,	// (0x0005157e) cell_gms_pane_ParamLimits

0x6906,	// (0x0005157e) cell_gms_pane

0x6919,	// (0x00051591) cell_gms_pane_g1

0x30f9,	// (0x0004dd71) cell_gms_pane_g2

0x3101,	// (0x0004dd79) cell_gms_pane_g3

0x310a,	// (0x0004dd82) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00059e8e) cell_gms_pane_g

0x3113,	// (0x0004dd8b) grid_highlight_pane_cp09

0x8c26,	// (0x0005389e) phob_pre_status_pane_g1

0x8c2e,	// (0x000538a6) phob_pre_status_pane_g2

0x8c36,	// (0x000538ae) phob_pre_status_pane_g3

0x8c3e,	// (0x000538b6) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0005a27d) phob_pre_status_pane_g

0x8c4e,	// (0x000538c6) phob_pre_status_pane_t1

0x8c5e,	// (0x000538d6) phob_pre_status_pane_t2

0x8c6e,	// (0x000538e6) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0005a288) phob_pre_status_pane_t

0x2c4e,	// (0x0004d8c6) bg_list_pane_cp05

0x6929,	// (0x000515a1) grid_vorec_pane

0x6933,	// (0x000515ab) vorec_t1

0x6941,	// (0x000515b9) vorec_t2

0x694f,	// (0x000515c7) vorec_t3

0x695d,	// (0x000515d5) vorec_t4

0x696b,	// (0x000515e3) vorec_t5

0x6979,	// (0x000515f1) vorec_t6

0x0006,

0xf21f,	// (0x00059e97) vorec_t

0x6995,	// (0x0005160d) wait_bar_pane_cp01

0x699d,	// (0x00051615) cell_vorec_pane_ParamLimits

0x699d,	// (0x00051615) cell_vorec_pane

0x311b,	// (0x0004dd93) cell_vorec_pane_g1

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp05

0x69c0,	// (0x00051638) cams_zoom_pane

0x69cc,	// (0x00051644) image_vga_pane

0x69db,	// (0x00051653) main_camera_pane_g1

0x69e9,	// (0x00051661) main_camera_pane_g2

0x69f5,	// (0x0005166d) main_camera_pane_g3

0x6a01,	// (0x00051679) main_camera_pane_g4

0x6a0d,	// (0x00051685) main_camera_pane_g5

0x6a19,	// (0x00051691) main_camera_pane_g6

0x6a25,	// (0x0005169d) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00059ea6) main_camera_pane_g

0x6a31,	// (0x000516a9) main_camera_pane_t1

0x6a43,	// (0x000516bb) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00059eb7) main_camera_pane_t

0x6a64,	// (0x000516dc) cams_zoom_pane_cp_ParamLimits

0x6a64,	// (0x000516dc) cams_zoom_pane_cp

0x6a88,	// (0x00051700) image_cif_pane_ParamLimits

0x6a88,	// (0x00051700) image_cif_pane

0x6aa6,	// (0x0005171e) image_subqcif_pane

0x6aae,	// (0x00051726) main_video_pane_g1_ParamLimits

0x6aae,	// (0x00051726) main_video_pane_g1

0x6ace,	// (0x00051746) main_video_pane_g2_ParamLimits

0x6ace,	// (0x00051746) main_video_pane_g2

0x6afe,	// (0x00051776) main_video_pane_g3_ParamLimits

0x6afe,	// (0x00051776) main_video_pane_g3

0x6b27,	// (0x0005179f) main_video_pane_g4_ParamLimits

0x6b27,	// (0x0005179f) main_video_pane_g4

0x6b50,	// (0x000517c8) main_video_pane_g5_ParamLimits

0x6b50,	// (0x000517c8) main_video_pane_g5

0x3131,	// (0x0004dda9) main_video_pane_g6_ParamLimits

0x3131,	// (0x0004dda9) main_video_pane_g6

0x0006,

0xf244,	// (0x00059ebc) main_video_pane_g_ParamLimits

0xf244,	// (0x00059ebc) main_video_pane_g

0x6b74,	// (0x000517ec) main_video_pane_t1_ParamLimits

0x6b74,	// (0x000517ec) main_video_pane_t1

0x314b,	// (0x0004ddc3) cams_zoom_pane_g1

0x3154,	// (0x0004ddcc) cams_zoom_pane_g2

0x315d,	// (0x0004ddd5) cams_zoom_pane_g3

0x3166,	// (0x0004ddde) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00059ecb) cams_zoom_pane_g

0x6bbe,	// (0x00051836) grid_cams_pane

0x6bcc,	// (0x00051844) linegrid_cams_pane

0x6bda,	// (0x00051852) cell_cams_pane_ParamLimits

0x6bda,	// (0x00051852) cell_cams_pane

0x316f,	// (0x0004dde7) cams_burst_image_pane

0x3177,	// (0x0004ddef) cell_cams_pane_g1

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp03

0x2fd5,	// (0x0004dc4d) mp_bg_pane_g1

0x2c4e,	// (0x0004d8c6) bg_list_pane_cp03

0x4d8a,	// (0x0004fa02) bg_mp_pane

0x4d92,	// (0x0004fa0a) grid_mp_pane

0x4d9a,	// (0x0004fa12) media_player_g1

0x4da2,	// (0x0004fa1a) media_player_t1

0x4db0,	// (0x0004fa28) media_player_t2

0x4dbe,	// (0x0004fa36) media_player_t3

0x4dcc,	// (0x0004fa44) media_player_t4

0x4dda,	// (0x0004fa52) media_player_t5

0x4de8,	// (0x0004fa60) media_player_t6

0x4df6,	// (0x0004fa6e) media_player_t7

0x0006,

0xf5ef,	// (0x0005a267) media_player_t

0x4e04,	// (0x0004fa7c) wait_bar_pane_cp02

0xf5d4,	// (0x0005a24c) main_usb_pane_t

0x8c1d,	// (0x00053895) cell_mp_pane

0x2fd5,	// (0x0004dc4d) cell_mp_pane_g1

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp06

0x317f,	// (0x0004ddf7) grid_skin_colour_pane

0x3187,	// (0x0004ddff) list_highlight_pane_cp03

0x6c44,	// (0x000518bc) skin_g1

0x318f,	// (0x0004de07) skin_t1

0x319e,	// (0x0004de16) skin_t2

0x0001,

0xf288,	// (0x00059f00) skin_t

0x6c4e,	// (0x000518c6) cell_skin_colour_pane_ParamLimits

0x6c4e,	// (0x000518c6) cell_skin_colour_pane

0x31ac,	// (0x0004de24) cell_skin_colour_pane_g1

0x6cd0,	// (0x00051948) call_video_g1_ParamLimits

0x6cd0,	// (0x00051948) call_video_g1

0x6ce0,	// (0x00051958) call_video_g2_ParamLimits

0x6ce0,	// (0x00051958) call_video_g2

0x0001,

0xf28d,	// (0x00059f05) call_video_g_ParamLimits

0xf28d,	// (0x00059f05) call_video_g

0x6d3a,	// (0x000519b2) call_video_uplink_pane_cp1_ParamLimits

0x6d3a,	// (0x000519b2) call_video_uplink_pane_cp1

0x31be,	// (0x0004de36) call_video_uplink_pane_cp2

0x6e06,	// (0x00051a7e) video_down_crop_pane_ParamLimits

0x6e06,	// (0x00051a7e) video_down_crop_pane

0x6f04,	// (0x00051b7c) video_down_pane_ParamLimits

0x6f04,	// (0x00051b7c) video_down_pane

0x31c6,	// (0x0004de3e) video_down_subqcif_pane_ParamLimits

0x31c6,	// (0x0004de3e) video_down_subqcif_pane

0x31de,	// (0x0004de56) video_down_subqcif_pane_cp_ParamLimits

0x31de,	// (0x0004de56) video_down_subqcif_pane_cp

0x3202,	// (0x0004de7a) im_reading_pane_ParamLimits

0x3202,	// (0x0004de7a) im_reading_pane

0x7026,	// (0x00051c9e) im_writing_pane_ParamLimits

0x7026,	// (0x00051c9e) im_writing_pane

0x7044,	// (0x00051cbc) im_reading_pane_t1

0x321c,	// (0x0004de94) list_im_pane

0x322d,	// (0x0004dea5) scroll_pane_cp07

0x7098,	// (0x00051d10) im_writing_pane_t1_ParamLimits

0x7098,	// (0x00051d10) im_writing_pane_t1

0x3246,	// (0x0004debe) im_writing_pane_t2_ParamLimits

0x3246,	// (0x0004debe) im_writing_pane_t2

0x0001,

0xf297,	// (0x00059f0f) im_writing_pane_t_ParamLimits

0xf297,	// (0x00059f0f) im_writing_pane_t

0x2c4e,	// (0x0004d8c6) input_focus_pane_cp04

0x2c4e,	// (0x0004d8c6) input_focus_pane_cp05

0x70ad,	// (0x00051d25) list_im_single_pane_ParamLimits

0x70ad,	// (0x00051d25) list_im_single_pane

0x70d1,	// (0x00051d49) list_single_im_pane_t1

0x8be1,	// (0x00053859) blid_accuracy_pane

0x8be9,	// (0x00053861) blid_compass_pane

0x8bf3,	// (0x0005386b) main_location_t1

0x8c01,	// (0x00053879) main_location_t2

0x8c0f,	// (0x00053887) main_location_t3

0x0002,

0xf5fe,	// (0x0005a276) main_location_t

0x2c4e,	// (0x0004d8c6) aid_levels_location

0x2fd5,	// (0x0004dc4d) blid_accuracy_pane_g1

0x2fd5,	// (0x0004dc4d) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00059f71) blid_accuracy_pane_g

0x328e,	// (0x0004df06) wml_content_pane

0x32cc,	// (0x0004df44) wml_button_pane_ParamLimits

0x32cc,	// (0x0004df44) wml_button_pane

0x70e0,	// (0x00051d58) wml_list_single_large_pane_ParamLimits

0x70e0,	// (0x00051d58) wml_list_single_large_pane

0x710a,	// (0x00051d82) wml_list_single_medium_pane_ParamLimits

0x710a,	// (0x00051d82) wml_list_single_medium_pane

0x713b,	// (0x00051db3) wml_list_single_small_pane_ParamLimits

0x713b,	// (0x00051db3) wml_list_single_small_pane

0x32e0,	// (0x0004df58) wml_selection_box_pane_ParamLimits

0x32e0,	// (0x0004df58) wml_selection_box_pane

0x32f3,	// (0x0004df6b) wml_list_single_pane_t1

0x3302,	// (0x0004df7a) wml_list_single_medium_pane_t1

0x3311,	// (0x0004df89) wml_list_single_large_pane_t1

0x3320,	// (0x0004df98) input_focus_pane_cp02_ParamLimits

0x3320,	// (0x0004df98) input_focus_pane_cp02

0x3333,	// (0x0004dfab) wml_selection_box_pane_g1

0x333c,	// (0x0004dfb4) wml_selection_box_pane_t1_ParamLimits

0x333c,	// (0x0004dfb4) wml_selection_box_pane_t1

0x2ea9,	// (0x0004db21) bg_wml_button_pane_ParamLimits

0x2ea9,	// (0x0004db21) bg_wml_button_pane

0x3354,	// (0x0004dfcc) wml_button_pane_g1

0x335c,	// (0x0004dfd4) wml_button_pane_t1

0x3354,	// (0x0004dfcc) wml_button_bg_pane_g1

0x336c,	// (0x0004dfe4) wml_button_bg_pane_g2

0x3374,	// (0x0004dfec) wml_button_bg_pane_g3

0x337c,	// (0x0004dff4) wml_button_bg_pane_g4

0x3384,	// (0x0004dffc) wml_button_bg_pane_g5

0x338c,	// (0x0004e004) wml_button_bg_pane_g6

0x3394,	// (0x0004e00c) wml_button_bg_pane_g7

0x339c,	// (0x0004e014) wml_button_bg_pane_g8

0x33a4,	// (0x0004e01c) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00059f14) wml_button_bg_pane_g

0x7175,	// (0x00051ded) bg_list_pane_cp02

0x33ac,	// (0x0004e024) mce_header_pane_ParamLimits

0x33ac,	// (0x0004e024) mce_header_pane

0x33c2,	// (0x0004e03a) mce_icon_pane

0x33c2,	// (0x0004e03a) mce_image_pane

0x33cb,	// (0x0004e043) mce_text_pane_ParamLimits

0x33cb,	// (0x0004e043) mce_text_pane

0x717f,	// (0x00051df7) scroll_pane_cp03

0x32c4,	// (0x0004df3c) scroll_pane_cp04

0x33de,	// (0x0004e056) scroll_pane_cp05_ParamLimits

0x33de,	// (0x0004e056) scroll_pane_cp05

0x7189,	// (0x00051e01) mce_header_field_pane_ParamLimits

0x7189,	// (0x00051e01) mce_header_field_pane

0x71a9,	// (0x00051e21) mce_header_field_pane_2_ParamLimits

0x71a9,	// (0x00051e21) mce_header_field_pane_2

0x71bf,	// (0x00051e37) mce_header_field_pane_3

0x71c7,	// (0x00051e3f) list_single_mce_message_pane_ParamLimits

0x71c7,	// (0x00051e3f) list_single_mce_message_pane

0x71ec,	// (0x00051e64) list_single_mce_smart_pane_ParamLimits

0x71ec,	// (0x00051e64) list_single_mce_smart_pane

0x33ea,	// (0x0004e062) input_focus_pane_cp03

0x33f3,	// (0x0004e06b) list_header_data_pane

0x721c,	// (0x00051e94) mce_header_field_pane_t1

0x722a,	// (0x00051ea2) list_single_mce_header_pane_ParamLimits

0x722a,	// (0x00051ea2) list_single_mce_header_pane

0x33fb,	// (0x0004e073) list_single_mce_header_pane_t1

0x340a,	// (0x0004e082) list_single_mce_message_pane_g1

0x3412,	// (0x0004e08a) list_single_mce_message_pane_t1

0x726e,	// (0x00051ee6) bg_cale_heading_pane_cp01_ParamLimits

0x726e,	// (0x00051ee6) bg_cale_heading_pane_cp01

0x3420,	// (0x0004e098) bg_cale_pane_cp02_ParamLimits

0x3420,	// (0x0004e098) bg_cale_pane_cp02

0x72a1,	// (0x00051f19) cale_month_corner_pane

0x72b7,	// (0x00051f2f) cale_month_day_heading_pane_ParamLimits

0x72b7,	// (0x00051f2f) cale_month_day_heading_pane

0x72fa,	// (0x00051f72) cale_month_pane_g1_ParamLimits

0x72fa,	// (0x00051f72) cale_month_pane_g1

0x7326,	// (0x00051f9e) cale_month_pane_g2_ParamLimits

0x7326,	// (0x00051f9e) cale_month_pane_g2

0x7349,	// (0x00051fc1) cale_month_pane_g3_ParamLimits

0x7349,	// (0x00051fc1) cale_month_pane_g3

0x7385,	// (0x00051ffd) cale_month_pane_g4_ParamLimits

0x7385,	// (0x00051ffd) cale_month_pane_g4

0x73c1,	// (0x00052039) cale_month_pane_g5_ParamLimits

0x73c1,	// (0x00052039) cale_month_pane_g5

0x73fd,	// (0x00052075) cale_month_pane_g6_ParamLimits

0x73fd,	// (0x00052075) cale_month_pane_g6

0x7439,	// (0x000520b1) cale_month_pane_g7_ParamLimits

0x7439,	// (0x000520b1) cale_month_pane_g7

0x7485,	// (0x000520fd) cale_month_pane_g8_ParamLimits

0x7485,	// (0x000520fd) cale_month_pane_g8

0x74d1,	// (0x00052149) cale_month_pane_g9_ParamLimits

0x74d1,	// (0x00052149) cale_month_pane_g9

0x7517,	// (0x0005218f) cale_month_pane_g10_ParamLimits

0x7517,	// (0x0005218f) cale_month_pane_g10

0x7551,	// (0x000521c9) cale_month_pane_g11_ParamLimits

0x7551,	// (0x000521c9) cale_month_pane_g11

0x758f,	// (0x00052207) cale_month_pane_g12_ParamLimits

0x758f,	// (0x00052207) cale_month_pane_g12

0x75cd,	// (0x00052245) cale_month_pane_g13_ParamLimits

0x75cd,	// (0x00052245) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00059f27) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00059f27) cale_month_pane_g

0x760b,	// (0x00052283) cale_month_week_pane

0x761e,	// (0x00052296) grid_cale_month_pane_ParamLimits

0x761e,	// (0x00052296) grid_cale_month_pane

0x765c,	// (0x000522d4) cale_month_day_heading_pane_t1

0x76ba,	// (0x00052332) cale_month_day_heading_pane_t2

0x771f,	// (0x00052397) cale_month_day_heading_pane_t3

0x7784,	// (0x000523fc) cale_month_day_heading_pane_t4

0x77e9,	// (0x00052461) cale_month_day_heading_pane_t5

0x784e,	// (0x000524c6) cale_month_day_heading_pane_t6

0x78b3,	// (0x0005252b) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00059f42) cale_month_day_heading_pane_t

0x30c0,	// (0x0004dd38) bg_cale_side_pane_cp01

0x7928,	// (0x000525a0) cale_month_week_pane_t1

0x793f,	// (0x000525b7) cale_month_week_pane_t2

0x7956,	// (0x000525ce) cale_month_week_pane_t3

0x796d,	// (0x000525e5) cale_month_week_pane_t4

0x7984,	// (0x000525fc) cale_month_week_pane_t5

0x799f,	// (0x00052617) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00059f51) cale_month_week_pane_t

0x79be,	// (0x00052636) cell_cale_month_pane_ParamLimits

0x79be,	// (0x00052636) cell_cale_month_pane

0x7a84,	// (0x000526fc) cell_cale_month_pane_g1

0x7a90,	// (0x00052708) cell_cale_month_pane_t1_ParamLimits

0x7a90,	// (0x00052708) cell_cale_month_pane_t1

0x30ce,	// (0x0004dd46) grid_highlight_pane_cp08

0x2fd5,	// (0x0004dc4d) main_smil_g1

0x7aac,	// (0x00052724) smil_status_pane

0x3455,	// (0x0004e0cd) smil_text_pane

0x4caa,	// (0x0004f922) bg_popup_call3_rect_pane_g8

0x4cb2,	// (0x0004f92a) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005a20a) bg_popup_call3_rect_pane_g

0x4f3f,	// (0x0004fbb7) smil_status_volume_pane_g1

0x345f,	// (0x0004e0d7) smil_status_pane_t1

0x8fc7,	// (0x00053c3f) volume_smil_pane

0x3476,	// (0x0004e0ee) list_smil_text_pane

0x7abf,	// (0x00052737) scroll_pane_cp011

0x7aca,	// (0x00052742) smil_text_list_pane_t1_ParamLimits

0x7aca,	// (0x00052742) smil_text_list_pane_t1

0x7b42,	// (0x000527ba) aid_volume_smil_ParamLimits

0x7b42,	// (0x000527ba) aid_volume_smil

0x2fd5,	// (0x0004dc4d) smil_volume_pane_g1

0x2fd5,	// (0x0004dc4d) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00059f71) smil_volume_pane_g

0x2f80,	// (0x0004dbf8) listscroll_cale_day_pane

0x3480,	// (0x0004e0f8) bg_cale_pane

0x3498,	// (0x0004e110) list_cale_pane

0x34a9,	// (0x0004e121) scroll_pane_cp09

0x34ba,	// (0x0004e132) cale_bg_pane_g1

0x34c2,	// (0x0004e13a) cale_bg_pane_g2

0x34ca,	// (0x0004e142) cale_bg_pane_g3

0x34d2,	// (0x0004e14a) cale_bg_pane_g4

0x34da,	// (0x0004e152) cale_bg_pane_g5

0x34e2,	// (0x0004e15a) cale_bg_pane_g6

0x34ea,	// (0x0004e162) cale_bg_pane_g7

0x34f2,	// (0x0004e16a) cale_bg_pane_g8

0x34fa,	// (0x0004e172) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00059f76) cale_bg_pane_g

0x7b64,	// (0x000527dc) list_cale_time_pane_ParamLimits

0x7b64,	// (0x000527dc) list_cale_time_pane

0x3502,	// (0x0004e17a) list_cale_time_pane_g1_ParamLimits

0x3502,	// (0x0004e17a) list_cale_time_pane_g1

0x350e,	// (0x0004e186) list_cale_time_pane_g2_ParamLimits

0x350e,	// (0x0004e186) list_cale_time_pane_g2

0x7b80,	// (0x000527f8) list_cale_time_pane_g3_ParamLimits

0x7b80,	// (0x000527f8) list_cale_time_pane_g3

0x7b8e,	// (0x00052806) list_cale_time_pane_g4_ParamLimits

0x7b8e,	// (0x00052806) list_cale_time_pane_g4

0x7b9c,	// (0x00052814) list_cale_time_pane_g5_ParamLimits

0x7b9c,	// (0x00052814) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00059f89) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00059f89) list_cale_time_pane_g

0x3528,	// (0x0004e1a0) list_cale_time_pane_t1_ParamLimits

0x3528,	// (0x0004e1a0) list_cale_time_pane_t1

0x3550,	// (0x0004e1c8) list_cale_time_pane_t2_ParamLimits

0x3550,	// (0x0004e1c8) list_cale_time_pane_t2

0x7ecd,	// (0x00052b45) aid_blid_cardinal_pane

0x7f0f,	// (0x00052b87) compass_pane_t4

0x3578,	// (0x0004e1f0) list_cale_time_pane_t4_ParamLimits

0x3578,	// (0x0004e1f0) list_cale_time_pane_t4

0x7f1d,	// (0x00052b95) compass_pane_t5

0x7f2d,	// (0x00052ba5) compass_pane_t6

0x7f3b,	// (0x00052bb3) compass_pane_t7

0x39b1,	// (0x0004e629) navi_pane_cc_t1

0x3b06,	// (0x0004e77e) aid_phob_thumbnail_center_pane

0x86e7,	// (0x0005335f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00059f96) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00059f96) list_cale_time_pane_t

0x28a5,	// (0x0004d51d) bg_popup_window_pane_cp02_ParamLimits

0x28a5,	// (0x0004d51d) bg_popup_window_pane_cp02

0x35a0,	// (0x0004e218) heading_pane_cp01_ParamLimits

0x35a0,	// (0x0004e218) heading_pane_cp01

0x35ac,	// (0x0004e224) loc_req_pane_ParamLimits

0x35ac,	// (0x0004e224) loc_req_pane

0x35bc,	// (0x0004e234) loc_type_pane_ParamLimits

0x35bc,	// (0x0004e234) loc_type_pane

0x35ce,	// (0x0004e246) loc_type_pane_t1_ParamLimits

0x35ce,	// (0x0004e246) loc_type_pane_t1

0x35e0,	// (0x0004e258) loc_type_pane_t2_ParamLimits

0x35e0,	// (0x0004e258) loc_type_pane_t2

0x35f2,	// (0x0004e26a) loc_type_pane_t3_ParamLimits

0x35f2,	// (0x0004e26a) loc_type_pane_t3

0x0002,

0xf325,	// (0x00059f9d) loc_type_pane_t_ParamLimits

0xf325,	// (0x00059f9d) loc_type_pane_t

0x3604,	// (0x0004e27c) list_loc_req_pane

0x360e,	// (0x0004e286) scroll_pane_cp012

0x7baa,	// (0x00052822) list_single_loc_request_popup_menu_pane_ParamLimits

0x7baa,	// (0x00052822) list_single_loc_request_popup_menu_pane

0x3619,	// (0x0004e291) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3619,	// (0x0004e291) list_single_loc_request_popup_menu_pane_g1

0x3625,	// (0x0004e29d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3625,	// (0x0004e29d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00059fa4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00059fa4) list_single_loc_request_popup_menu_pane_g

0x3631,	// (0x0004e2a9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3631,	// (0x0004e2a9) list_single_loc_request_popup_menu_pane_t1

0x7bbc,	// (0x00052834) bg_popup_window_pane_cp03_ParamLimits

0x7bbc,	// (0x00052834) bg_popup_window_pane_cp03

0x7bca,	// (0x00052842) heading_loc_req_pane_ParamLimits

0x7bca,	// (0x00052842) heading_loc_req_pane

0x7bd6,	// (0x0005284e) popup_dyc_status_message_window_g1_ParamLimits

0x7bd6,	// (0x0005284e) popup_dyc_status_message_window_g1

0x7be2,	// (0x0005285a) popup_dyc_status_message_window_t1_ParamLimits

0x7be2,	// (0x0005285a) popup_dyc_status_message_window_t1

0x7bf4,	// (0x0005286c) popup_dyc_status_message_window_t2_ParamLimits

0x7bf4,	// (0x0005286c) popup_dyc_status_message_window_t2

0x7c06,	// (0x0005287e) popup_dyc_status_message_window_t3_ParamLimits

0x7c06,	// (0x0005287e) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00059fa9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00059fa9) popup_dyc_status_message_window_t

0x2c4e,	// (0x0004d8c6) bg_heading_pane_cp01

0x3647,	// (0x0004e2bf) heading_loc_req_pane_g1

0x364f,	// (0x0004e2c7) heading_loc_req_pane_g2

0x3657,	// (0x0004e2cf) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00059fb0) heading_loc_req_pane_g

0x365f,	// (0x0004e2d7) heading_loc_req_pane_t1

0x366e,	// (0x0004e2e6) bg_popup_sub_pane_cp01_ParamLimits

0x366e,	// (0x0004e2e6) bg_popup_sub_pane_cp01

0x367c,	// (0x0004e2f4) popup_cale_events_window_g1_ParamLimits

0x367c,	// (0x0004e2f4) popup_cale_events_window_g1

0x369c,	// (0x0004e314) popup_cale_events_window_g2_ParamLimits

0x369c,	// (0x0004e314) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00059fe4) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00059fe4) popup_cale_events_window_g

0x36bc,	// (0x0004e334) popup_cale_events_window_t1_ParamLimits

0x36bc,	// (0x0004e334) popup_cale_events_window_t1

0x36ce,	// (0x0004e346) popup_cale_events_window_t2_ParamLimits

0x36ce,	// (0x0004e346) popup_cale_events_window_t2

0x370c,	// (0x0004e384) popup_cale_events_window_t3_ParamLimits

0x370c,	// (0x0004e384) popup_cale_events_window_t3

0x3746,	// (0x0004e3be) popup_cale_events_window_t4_ParamLimits

0x3746,	// (0x0004e3be) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00059fe9) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00059fe9) popup_cale_events_window_t

0x7c8a,	// (0x00052902) call_type_pane

0x37ed,	// (0x0004e465) popup_call_status_window_g1

0x7c96,	// (0x0005290e) popup_call_status_window_g2

0x7ca2,	// (0x0005291a) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00059ff2) popup_call_status_window_g

0x377c,	// (0x0004e3f4) call_type_pane_g1

0x3785,	// (0x0004e3fd) call_type_pane_g2

0x0001,

0xf381,	// (0x00059ff9) call_type_pane_g

0x2c4e,	// (0x0004d8c6) bg_popup_sub_pane_cp02

0x378e,	// (0x0004e406) listscroll_popup_wml_pane

0x3796,	// (0x0004e40e) list_wml_pane

0x37a0,	// (0x0004e418) scroll_pane_cp013

0x37ab,	// (0x0004e423) list_single_graphic_popup_wml_pane_ParamLimits

0x37ab,	// (0x0004e423) list_single_graphic_popup_wml_pane

0x2fd5,	// (0x0004dc4d) list_single_graphic_popup_wml_pane_g1

0x37bf,	// (0x0004e437) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00059ffe) list_single_graphic_popup_wml_pane_g

0x37c7,	// (0x0004e43f) list_single_graphic_popup_wml_pane_t1

0x37d5,	// (0x0004e44d) aid_call_pane

0x2ea1,	// (0x0004db19) popup_clock_analogue_window_g1

0x2ea1,	// (0x0004db19) popup_clock_analogue_window_g2

0x7cae,	// (0x00052926) popup_clock_analogue_window_g3

0x7cae,	// (0x00052926) popup_clock_analogue_window_g4

0x2fd5,	// (0x0004dc4d) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005a003) popup_clock_analogue_window_g

0x7cb6,	// (0x0005292e) popup_clock_analogue_window_t1

0x7cc4,	// (0x0005293c) clock_digital_number_pane_ParamLimits

0x7cc4,	// (0x0005293c) clock_digital_number_pane

0x7cd0,	// (0x00052948) clock_digital_number_pane_cp02_ParamLimits

0x7cd0,	// (0x00052948) clock_digital_number_pane_cp02

0x7cdc,	// (0x00052954) clock_digital_number_pane_cp03_ParamLimits

0x7cdc,	// (0x00052954) clock_digital_number_pane_cp03

0x7ce8,	// (0x00052960) clock_digital_number_pane_cp04_ParamLimits

0x7ce8,	// (0x00052960) clock_digital_number_pane_cp04

0x7cf8,	// (0x00052970) clock_digital_separator_pane_ParamLimits

0x7cf8,	// (0x00052970) clock_digital_separator_pane

0x7d04,	// (0x0005297c) popup_clock_digital_window_t1

0x2fd5,	// (0x0004dc4d) clock_digital_number_pane_g1

0x2fd5,	// (0x0004dc4d) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00059f71) clock_digital_number_pane_g

0x2fd5,	// (0x0004dc4d) clock_digital_separator_pane_g1

0x2fd5,	// (0x0004dc4d) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00059f71) clock_digital_separator_pane_g

0x2c4e,	// (0x0004d8c6) bg_popup_window_pane_cp04

0x37e5,	// (0x0004e45d) heading_pane_cp03

0x37fb,	// (0x0004e473) listscroll_popup_gms_pane

0x3803,	// (0x0004e47b) grid_large_graphic_popup_pane

0x380d,	// (0x0004e485) listscroll_popup_gms_pane_g1

0x3815,	// (0x0004e48d) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005a00e) listscroll_popup_gms_pane_g

0x32c4,	// (0x0004df3c) scroll_pane_cp014

0x7d21,	// (0x00052999) cell_large_graphic_popup_pane_ParamLimits

0x7d21,	// (0x00052999) cell_large_graphic_popup_pane

0x7d39,	// (0x000529b1) cell_large_graphic_popup_pane_g1_ParamLimits

0x7d39,	// (0x000529b1) cell_large_graphic_popup_pane_g1

0x381d,	// (0x0004e495) cell_large_graphic_popup_pane_g2_ParamLimits

0x381d,	// (0x0004e495) cell_large_graphic_popup_pane_g2

0x3829,	// (0x0004e4a1) cell_large_graphic_popup_pane_g3_ParamLimits

0x3829,	// (0x0004e4a1) cell_large_graphic_popup_pane_g3

0x3836,	// (0x0004e4ae) cell_large_graphic_popup_pane_g4_ParamLimits

0x3836,	// (0x0004e4ae) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005a013) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005a013) cell_large_graphic_popup_pane_g

0x3846,	// (0x0004e4be) grid_highlight_pane_cp010

0x2fd5,	// (0x0004dc4d) bg_popup_call_pane_g1

0x3850,	// (0x0004e4c8) list_single_graphic_popup_conf_pane_ParamLimits

0x3850,	// (0x0004e4c8) list_single_graphic_popup_conf_pane

0x3863,	// (0x0004e4db) list_highlight_pane_cp01

0x386c,	// (0x0004e4e4) list_single_graphic_popup_conf_pane_g1

0x3874,	// (0x0004e4ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005a01c) list_single_graphic_popup_conf_pane_g

0x387c,	// (0x0004e4f4) list_single_graphic_popup_conf_pane_t1

0x388a,	// (0x0004e502) linegrid_cams_pane_g1

0x7d45,	// (0x000529bd) linegrid_cams_pane_g2

0x3101,	// (0x0004dd79) linegrid_cams_pane_g3

0x3893,	// (0x0004e50b) linegrid_cams_pane_g4

0x7d4e,	// (0x000529c6) linegrid_cams_pane_g5

0x7d57,	// (0x000529cf) linegrid_cams_pane_g6

0x310a,	// (0x0004dd82) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005a021) linegrid_cams_pane_g

0x389c,	// (0x0004e514) popup_clock_analogue_window

0x389c,	// (0x0004e514) popup_clock_digital_window

0x2c4e,	// (0x0004d8c6) popup_phob_thumbnail_window

0x2fd5,	// (0x0004dc4d) call_video_uplink_pane_g1

0x38a5,	// (0x0004e51d) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005a030) call_video_uplink_pane_g

0x38ad,	// (0x0004e525) video_uplink_pane

0x38b5,	// (0x0004e52d) mce_image_pane_g1

0x7d60,	// (0x000529d8) mce_image_pane_g2

0x7d6a,	// (0x000529e2) mce_image_pane_g3

0x7d72,	// (0x000529ea) mce_image_pane_g4

0x7d7a,	// (0x000529f2) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005a035) mce_image_pane_g

0x38bf,	// (0x0004e537) control_top_pane_stacon_cp01_ParamLimits

0x38bf,	// (0x0004e537) control_top_pane_stacon_cp01

0x38d3,	// (0x0004e54b) uni_indicator_pane_stacon_cp01_ParamLimits

0x38d3,	// (0x0004e54b) uni_indicator_pane_stacon_cp01

0x38e4,	// (0x0004e55c) bg_popup_sub_pane_cp03

0x7d82,	// (0x000529fa) chi_dic_find_pane

0x7d8a,	// (0x00052a02) listscroll_chi_dic_pane

0x7d93,	// (0x00052a0b) main_pane_chidic_g1

0x38ee,	// (0x0004e566) chi_dic_find_pane_t1

0x38fc,	// (0x0004e574) find_chidic_pane

0x3905,	// (0x0004e57d) chi_dic_list_pane_ParamLimits

0x3905,	// (0x0004e57d) chi_dic_list_pane

0x3916,	// (0x0004e58e) scroll_pane_cp020

0x391e,	// (0x0004e596) find_chidic_pane_t1

0x2c4e,	// (0x0004d8c6) input_focus_pane_cp06

0x7da6,	// (0x00052a1e) list_chi_dic_pane_ParamLimits

0x7da6,	// (0x00052a1e) list_chi_dic_pane

0x7dc0,	// (0x00052a38) list_chi_dic_pane_t1_ParamLimits

0x7dc0,	// (0x00052a38) list_chi_dic_pane_t1

0x2c4e,	// (0x0004d8c6) list_highlight_pane_cp020

0x392d,	// (0x0004e5a5) bg_cale_heading_pane_g1

0x7dd3,	// (0x00052a4b) bg_cale_heading_pane_g2

0x7ddb,	// (0x00052a53) bg_cale_heading_pane_g3

0x7de3,	// (0x00052a5b) bg_cale_heading_pane_g4

0x7ded,	// (0x00052a65) bg_cale_heading_pane_g5

0x7df7,	// (0x00052a6f) bg_cale_heading_pane_g6

0x7dff,	// (0x00052a77) bg_cale_heading_pane_g7

0x7e07,	// (0x00052a7f) bg_cale_heading_pane_g8

0x7e11,	// (0x00052a89) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005a040) bg_cale_heading_pane_g

0x392d,	// (0x0004e5a5) bg_cale_side_pane_g1

0x7e1b,	// (0x00052a93) bg_cale_side_pane_g2

0x7e25,	// (0x00052a9d) bg_cale_side_pane_g3

0x7e2f,	// (0x00052aa7) bg_cale_side_pane_g4

0x7e39,	// (0x00052ab1) bg_cale_side_pane_g5

0x7e43,	// (0x00052abb) bg_cale_side_pane_g6

0x7e4d,	// (0x00052ac5) bg_cale_side_pane_g7

0x7e57,	// (0x00052acf) bg_cale_side_pane_g8

0x7e5f,	// (0x00052ad7) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005a053) bg_cale_side_pane_g

0x7e67,	// (0x00052adf) popup_call_status_window_ParamLimits

0x7e67,	// (0x00052adf) popup_call_status_window

0x3935,	// (0x0004e5ad) stacon_top_pane

0x393d,	// (0x0004e5b5) status_pane_ParamLimits

0x393d,	// (0x0004e5b5) status_pane

0x3952,	// (0x0004e5ca) status_small_pane

0x395a,	// (0x0004e5d2) control_pane

0x2c4e,	// (0x0004d8c6) stacon_bottom_pane

0x3962,	// (0x0004e5da) list_single_mce_smart_pane_t1_ParamLimits

0x3962,	// (0x0004e5da) list_single_mce_smart_pane_t1

0x3975,	// (0x0004e5ed) list_single_mce_smart_pane_t2_ParamLimits

0x3975,	// (0x0004e5ed) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005a066) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005a066) list_single_mce_smart_pane_t

0x7e73,	// (0x00052aeb) compass_pane

0x7e7f,	// (0x00052af7) main_location2_pane_t1

0x7e93,	// (0x00052b0b) main_location2_pane_t2

0x7ea7,	// (0x00052b1f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005a06b) main_location2_pane_t

0x3994,	// (0x0004e60c) compass_pane_g1_ParamLimits

0x3994,	// (0x0004e60c) compass_pane_g1

0x7ef1,	// (0x00052b69) compass_pane_t1

0x7f00,	// (0x00052b78) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005a074) compass_pane_t

0x7f4b,	// (0x00052bc3) text_secondary_cp61

0x39a8,	// (0x0004e620) navi_pane_cams_g5

0x39cb,	// (0x0004e643) navi_pane_im_t1

0x39d9,	// (0x0004e651) navi_pane_mp_g1_ParamLimits

0x39d9,	// (0x0004e651) navi_pane_mp_g1

0x39ed,	// (0x0004e665) navi_pane_mp_g2_ParamLimits

0x39ed,	// (0x0004e665) navi_pane_mp_g2

0x39f9,	// (0x0004e671) navi_pane_mp_g3_ParamLimits

0x39f9,	// (0x0004e671) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005a088) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005a088) navi_pane_mp_g

0x3a05,	// (0x0004e67d) navi_pane_mp_t1

0x3a13,	// (0x0004e68b) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005a08f) navi_pane_mp_t

0x3a4f,	// (0x0004e6c7) navi_pane_vt_g1

0x3a05,	// (0x0004e67d) navi_pane_vt_t1

0x3a57,	// (0x0004e6cf) navi_slider_pane

0x3a5f,	// (0x0004e6d7) zooming_pane

0x3a67,	// (0x0004e6df) navi_slider_pane_g1

0x8060,	// (0x00052cd8) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005a096) navi_slider_pane_g

0x3a8b,	// (0x0004e703) aid_levels_zoom

0x3a93,	// (0x0004e70b) zooming_pane_g1

0x3a9b,	// (0x0004e713) zooming_pane_g2

0x3a9b,	// (0x0004e713) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005a0a5) zooming_pane_g

0x3aa3,	// (0x0004e71b) level_10_zoom

0x3aac,	// (0x0004e724) level_11_zoom

0x3ab5,	// (0x0004e72d) level_1_zoom

0x3abe,	// (0x0004e736) level_2_zoom

0x3ac7,	// (0x0004e73f) level_3_zoom

0x3ad0,	// (0x0004e748) level_4_zoom

0x3ad9,	// (0x0004e751) level_5_zoom

0x3ae2,	// (0x0004e75a) level_6_zoom

0x3aeb,	// (0x0004e763) level_7_zoom

0x3af4,	// (0x0004e76c) level_8_zoom

0x3afd,	// (0x0004e775) level_9_zoom

0x3b0e,	// (0x0004e786) popup_phob_thumbnail_window_g1

0x3b16,	// (0x0004e78e) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005a0ac) popup_phob_thumbnail_window_g

0x4e0c,	// (0x0004fa84) level_1_location

0x4e14,	// (0x0004fa8c) level_2_location

0x4e1c,	// (0x0004fa94) level_3_location

0x4e24,	// (0x0004fa9c) level_4_location

0x3a5f,	// (0x0004e6d7) level_5_location

0x8072,	// (0x00052cea) mce_icon_pane_g1

0x807a,	// (0x00052cf2) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005a0b1) mce_icon_pane_g

0x8082,	// (0x00052cfa) main_mup_pane_g1_ParamLimits

0x8082,	// (0x00052cfa) main_mup_pane_g1

0x809a,	// (0x00052d12) main_mup_pane_g2_ParamLimits

0x809a,	// (0x00052d12) main_mup_pane_g2

0x80b6,	// (0x00052d2e) main_mup_pane_g3_ParamLimits

0x80b6,	// (0x00052d2e) main_mup_pane_g3

0x80d2,	// (0x00052d4a) main_mup_pane_g4_ParamLimits

0x80d2,	// (0x00052d4a) main_mup_pane_g4

0x80ee,	// (0x00052d66) main_mup_pane_g5_ParamLimits

0x80ee,	// (0x00052d66) main_mup_pane_g5

0x810f,	// (0x00052d87) main_mup_pane_g6_ParamLimits

0x810f,	// (0x00052d87) main_mup_pane_g6

0x812b,	// (0x00052da3) main_mup_pane_g7_ParamLimits

0x812b,	// (0x00052da3) main_mup_pane_g7

0x8147,	// (0x00052dbf) main_mup_pane_g8_ParamLimits

0x8147,	// (0x00052dbf) main_mup_pane_g8

0x8167,	// (0x00052ddf) main_mup_pane_g9_ParamLimits

0x8167,	// (0x00052ddf) main_mup_pane_g9

0x8186,	// (0x00052dfe) main_mup_pane_g10_ParamLimits

0x8186,	// (0x00052dfe) main_mup_pane_g10

0x81a5,	// (0x00052e1d) main_mup_pane_g11_ParamLimits

0x81a5,	// (0x00052e1d) main_mup_pane_g11

0x81bd,	// (0x00052e35) main_mup_pane_g12_ParamLimits

0x81bd,	// (0x00052e35) main_mup_pane_g12

0x81cb,	// (0x00052e43) main_mup_pane_g13_ParamLimits

0x81cb,	// (0x00052e43) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005a0b6) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005a0b6) main_mup_pane_g

0x81e1,	// (0x00052e59) main_mup_pane_t1_ParamLimits

0x81e1,	// (0x00052e59) main_mup_pane_t1

0x81fe,	// (0x00052e76) main_mup_pane_t2_ParamLimits

0x81fe,	// (0x00052e76) main_mup_pane_t2

0x8218,	// (0x00052e90) main_mup_pane_t3_ParamLimits

0x8218,	// (0x00052e90) main_mup_pane_t3

0x8232,	// (0x00052eaa) main_mup_pane_t4_ParamLimits

0x8232,	// (0x00052eaa) main_mup_pane_t4

0x8244,	// (0x00052ebc) main_mup_pane_t5_ParamLimits

0x8244,	// (0x00052ebc) main_mup_pane_t5

0x8256,	// (0x00052ece) main_mup_pane_t6_ParamLimits

0x8256,	// (0x00052ece) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005a0d1) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005a0d1) main_mup_pane_t

0x826c,	// (0x00052ee4) mup_progress_pane_ParamLimits

0x826c,	// (0x00052ee4) mup_progress_pane

0x8278,	// (0x00052ef0) mup_visualizer_pane_ParamLimits

0x8278,	// (0x00052ef0) mup_visualizer_pane

0x82b2,	// (0x00052f2a) mup_volume_pane_ParamLimits

0x82b2,	// (0x00052f2a) mup_volume_pane

0x37ed,	// (0x0004e465) mup_visualizer_pane_g1_ParamLimits

0x37ed,	// (0x0004e465) mup_visualizer_pane_g1

0x37ed,	// (0x0004e465) mup_visualizer_pane_g2_ParamLimits

0x37ed,	// (0x0004e465) mup_visualizer_pane_g2

0x3994,	// (0x0004e60c) mup_visualizer_pane_g3_ParamLimits

0x3994,	// (0x0004e60c) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005a0de) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005a0de) mup_visualizer_pane_g

0x2fd5,	// (0x0004dc4d) mup_volume_pane_g1

0x3b26,	// (0x0004e79e) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005a0e5) mup_volume_pane_g

0x2fd5,	// (0x0004dc4d) mup_progress_pane_g1

0x3b2f,	// (0x0004e7a7) mup_progress_pane_g2

0x3b38,	// (0x0004e7b0) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005a0ea) mup_progress_pane_g

0x2c4e,	// (0x0004d8c6) bg_popup_window_pane_cp05

0x3b41,	// (0x0004e7b9) heading_pane_cp02_ParamLimits

0x3b41,	// (0x0004e7b9) heading_pane_cp02

0x3b5b,	// (0x0004e7d3) list_popup_blid_pane

0x3b63,	// (0x0004e7db) list_blid_sat_info_pane_ParamLimits

0x3b63,	// (0x0004e7db) list_blid_sat_info_pane

0x3b76,	// (0x0004e7ee) list_blid_sat_info_pane_g1

0x3b7e,	// (0x0004e7f6) list_blid_sat_info_pane_t1

0x83bf,	// (0x00053037) mup_equalizer_pane_ParamLimits

0x83bf,	// (0x00053037) mup_equalizer_pane

0x83e0,	// (0x00053058) mup_equalizer_pane_cp1_ParamLimits

0x83e0,	// (0x00053058) mup_equalizer_pane_cp1

0x8401,	// (0x00053079) mup_equalizer_pane_cp2_ParamLimits

0x8401,	// (0x00053079) mup_equalizer_pane_cp2

0x8422,	// (0x0005309a) mup_equalizer_pane_cp3_ParamLimits

0x8422,	// (0x0005309a) mup_equalizer_pane_cp3

0x8443,	// (0x000530bb) mup_equalizer_pane_cp4_ParamLimits

0x8443,	// (0x000530bb) mup_equalizer_pane_cp4

0x8464,	// (0x000530dc) mup_equalizer_pane_cp5

0x847a,	// (0x000530f2) mup_equalizer_pane_cp6

0x8492,	// (0x0005310a) mup_equalizer_pane_cp7

0x4d2a,	// (0x0004f9a2) bg_popup_call_poc_act_pane_g9

0x4d32,	// (0x0004f9aa) bg_popup_call_poc_act_pane_g10

0x4d3a,	// (0x0004f9b2) bg_popup_call_poc_act_pane_g11

0x000a,

0x2ea9,	// (0x0004db21) mup_scale_pane

0x2fd5,	// (0x0004dc4d) mup_scale_pane_g1

0x3b8c,	// (0x0004e804) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005a106) mup_scale_pane_g

0x3bb0,	// (0x0004e828) msg_data_pane

0x3bb8,	// (0x0004e830) scroll_pane_cp017

0x84bc,	// (0x00053134) bg_list_pane_cp04_ParamLimits

0x84bc,	// (0x00053134) bg_list_pane_cp04

0x3bc0,	// (0x0004e838) msg_data_pane_g1

0x84e0,	// (0x00053158) msg_data_pane_g2

0x84ea,	// (0x00053162) msg_data_pane_g3

0x84f2,	// (0x0005316a) msg_data_pane_g4

0x84fa,	// (0x00053172) msg_data_pane_g5

0x8502,	// (0x0005317a) msg_data_pane_g6

0x850a,	// (0x00053182) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005a115) msg_data_pane_g

0x8512,	// (0x0005318a) msg_text_pane_ParamLimits

0x8512,	// (0x0005318a) msg_text_pane

0x8552,	// (0x000531ca) qrid_highlight_pane_cp011_ParamLimits

0x8552,	// (0x000531ca) qrid_highlight_pane_cp011

0x2c4e,	// (0x0004d8c6) msg_body_pane

0x2c4e,	// (0x0004d8c6) msg_header_pane

0x3bd1,	// (0x0004e849) input_focus_pane_cp07

0x8578,	// (0x000531f0) msg_header_pane_t1_ParamLimits

0x8578,	// (0x000531f0) msg_header_pane_t1

0x858a,	// (0x00053202) msg_header_pane_t2_ParamLimits

0x858a,	// (0x00053202) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005a129) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005a129) msg_header_pane_t

0x3be6,	// (0x0004e85e) msg_body_pane_g1

0x859c,	// (0x00053214) msg_body_pane_t1_ParamLimits

0x859c,	// (0x00053214) msg_body_pane_t1

0x85cd,	// (0x00053245) msg_body_pane_t2_ParamLimits

0x85cd,	// (0x00053245) msg_body_pane_t2

0x85df,	// (0x00053257) msg_body_pane_t3_ParamLimits

0x85df,	// (0x00053257) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005a12e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005a12e) msg_body_pane_t

0x8643,	// (0x000532bb) main_viewer_pane_g1_ParamLimits

0x8643,	// (0x000532bb) main_viewer_pane_g1

0x864f,	// (0x000532c7) main_viewer_pane_g2_ParamLimits

0x864f,	// (0x000532c7) main_viewer_pane_g2

0x865b,	// (0x000532d3) main_viewer_pane_g3_ParamLimits

0x865b,	// (0x000532d3) main_viewer_pane_g3

0x866c,	// (0x000532e4) main_viewer_pane_g4_ParamLimits

0x866c,	// (0x000532e4) main_viewer_pane_g4

0x867d,	// (0x000532f5) main_viewer_pane_g5_ParamLimits

0x867d,	// (0x000532f5) main_viewer_pane_g5

0x867d,	// (0x000532f5) main_viewer_pane_g7_ParamLimits

0x867d,	// (0x000532f5) main_viewer_pane_g7

0x3619,	// (0x0004e291) main_viewer_pane_g8_ParamLimits

0x3619,	// (0x0004e291) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005a13e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005a13e) main_viewer_pane_g

0x3bee,	// (0x0004e866) viewer_content_pane_ParamLimits

0x3bee,	// (0x0004e866) viewer_content_pane

0x86bb,	// (0x00053333) main_postcard_pane_g1_ParamLimits

0x86bb,	// (0x00053333) main_postcard_pane_g1

0x86c9,	// (0x00053341) main_postcard_pane_g2_ParamLimits

0x86c9,	// (0x00053341) main_postcard_pane_g2

0x86d7,	// (0x0005334f) main_postcard_pane_g3_ParamLimits

0x86d7,	// (0x0005334f) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005a14f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005a14f) main_postcard_pane_g

0x86e7,	// (0x0005335f) main_postcard_pane_g4

0x4f2c,	// (0x0004fba4) smil_status_volume_pane_g2

0x8713,	// (0x0005338b) postcard_pane_ParamLimits

0x8713,	// (0x0005338b) postcard_pane

0x37ed,	// (0x0004e465) postcard_pane_g1_ParamLimits

0x37ed,	// (0x0004e465) postcard_pane_g1

0x8745,	// (0x000533bd) postcard_pane_g2_ParamLimits

0x8745,	// (0x000533bd) postcard_pane_g2

0x8751,	// (0x000533c9) postcard_pane_g3_ParamLimits

0x8751,	// (0x000533c9) postcard_pane_g3

0x3c0a,	// (0x0004e882) postcard_pane_g4_ParamLimits

0x3c0a,	// (0x0004e882) postcard_pane_g4

0x875d,	// (0x000533d5) postcard_pane_g5_ParamLimits

0x875d,	// (0x000533d5) postcard_pane_g5

0x8769,	// (0x000533e1) postcard_pane_g6_ParamLimits

0x8769,	// (0x000533e1) postcard_pane_g6

0x3bfc,	// (0x0004e874) postcard_pane_g7_ParamLimits

0x3bfc,	// (0x0004e874) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005a15c) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005a15c) postcard_pane_g

0x8775,	// (0x000533ed) main_mp2_pane_g1_ParamLimits

0x8775,	// (0x000533ed) main_mp2_pane_g1

0x8781,	// (0x000533f9) main_mp2_pane_g2_ParamLimits

0x8781,	// (0x000533f9) main_mp2_pane_g2

0x878d,	// (0x00053405) main_mp2_pane_g3_ParamLimits

0x878d,	// (0x00053405) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005a16b) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005a16b) main_mp2_pane_g

0x8799,	// (0x00053411) main_mp2_pane_t1_ParamLimits

0x8799,	// (0x00053411) main_mp2_pane_t1

0x87b0,	// (0x00053428) main_mp2_pane_t2_ParamLimits

0x87b0,	// (0x00053428) main_mp2_pane_t2

0x87c4,	// (0x0005343c) main_mp2_pane_t3_ParamLimits

0x87c4,	// (0x0005343c) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005a172) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005a172) main_mp2_pane_t

0x3c18,	// (0x0004e890) pec_content_pane_ParamLimits

0x3c18,	// (0x0004e890) pec_content_pane

0x32c4,	// (0x0004df3c) scroll_pane_cp015

0x3c2a,	// (0x0004e8a2) pec_attribute_pane_ParamLimits

0x3c2a,	// (0x0004e8a2) pec_attribute_pane

0x87d6,	// (0x0005344e) pec_content_pane_g1_ParamLimits

0x87d6,	// (0x0005344e) pec_content_pane_g1

0x3c3a,	// (0x0004e8b2) pec_content_pane_t1_ParamLimits

0x3c3a,	// (0x0004e8b2) pec_content_pane_t1

0x3c4c,	// (0x0004e8c4) pec_content_pane_t2_ParamLimits

0x3c4c,	// (0x0004e8c4) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005a179) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005a179) pec_content_pane_t

0x87e2,	// (0x0005345a) list_single_graphic_pane_cp01_ParamLimits

0x87e2,	// (0x0005345a) list_single_graphic_pane_cp01

0x2ea9,	// (0x0004db21) bg_popup_sub_pane_cp04

0x3c5e,	// (0x0004e8d6) popup_mup_playback_window_g1

0x3c6a,	// (0x0004e8e2) popup_mup_playback_window_t1

0x3c7f,	// (0x0004e8f7) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005a17e) popup_mup_playback_window_t

0x3cb6,	// (0x0004e92e) main_image_pane_g1_ParamLimits

0x3cb6,	// (0x0004e92e) main_image_pane_g1

0x3cf9,	// (0x0004e971) scroll_pane_cp018_ParamLimits

0x3cf9,	// (0x0004e971) scroll_pane_cp018

0x3d11,	// (0x0004e989) scroll_pane_cp016_ParamLimits

0x3d11,	// (0x0004e989) scroll_pane_cp016

0x887b,	// (0x000534f3) smil2_image_pane_ParamLimits

0x887b,	// (0x000534f3) smil2_image_pane

0x88ab,	// (0x00053523) smil2_root_pane_ParamLimits

0x88ab,	// (0x00053523) smil2_root_pane

0x88d7,	// (0x0005354f) smil2_text_pane_ParamLimits

0x88d7,	// (0x0005354f) smil2_text_pane

0x2c4e,	// (0x0004d8c6) bg_list_pane_cp06

0x3d4d,	// (0x0004e9c5) grid_radio_pane

0x2c4e,	// (0x0004d8c6) bg_popup_window_pane_cp06

0x3d55,	// (0x0004e9cd) main_fmradio_pane_t1

0x37e5,	// (0x0004e45d) heading_pane_cp04

0x3d63,	// (0x0004e9db) main_fmradio_pane_t2

0x4d42,	// (0x0004f9ba) popup_cale_lunar_info_window_g1

0x3d71,	// (0x0004e9e9) main_fmradio_pane_t3

0x4d4a,	// (0x0004f9c2) popup_cale_lunar_info_window_g2

0x3d7f,	// (0x0004e9f7) main_fmradio_pane_t4

0x0001,

0x3d8d,	// (0x0004ea05) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0005a259) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005a193) main_fmradio_pane_t

0x3d9b,	// (0x0004ea13) wait_bar_pane_cp03

0x3da3,	// (0x0004ea1b) cell_fmradio_pane_ParamLimits

0x3da3,	// (0x0004ea1b) cell_fmradio_pane

0x3bfc,	// (0x0004e874) cell_fmradio_pane_g1_ParamLimits

0x3bfc,	// (0x0004e874) cell_fmradio_pane_g1

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp011

0x3db6,	// (0x0004ea2e) poc_content_pane_ParamLimits

0x3db6,	// (0x0004ea2e) poc_content_pane

0x3dc8,	// (0x0004ea40) scroll_pane_cp019

0x8917,	// (0x0005358f) popup_call_poc_act_window_ParamLimits

0x8917,	// (0x0005358f) popup_call_poc_act_window

0x8924,	// (0x0005359c) popup_call_poc_inact_window_ParamLimits

0x8924,	// (0x0005359c) popup_call_poc_inact_window

0xf5b8,	// (0x0005a230) bg_popup_call_poc_act_pane_g

0x4cba,	// (0x0004f932) bg_popup_call_poc_inact_pane_g1

0x4cc2,	// (0x0004f93a) bg_popup_call_poc_inact_pane_g2

0x3dd0,	// (0x0004ea48) popup_call_poc_act_window_g2

0x4cca,	// (0x0004f942) bg_popup_call_poc_inact_pane_g3

0x4cd2,	// (0x0004f94a) bg_popup_call_poc_inact_pane_g4

0x4cda,	// (0x0004f952) bg_popup_call_poc_inact_pane_g5

0x3dd8,	// (0x0004ea50) popup_call_poc_act_window_t1_ParamLimits

0x3dd8,	// (0x0004ea50) popup_call_poc_act_window_t1

0x3e00,	// (0x0004ea78) popup_call_poc_act_window_t2_ParamLimits

0x3e00,	// (0x0004ea78) popup_call_poc_act_window_t2

0x3e28,	// (0x0004eaa0) popup_call_poc_act_window_t3_ParamLimits

0x3e28,	// (0x0004eaa0) popup_call_poc_act_window_t3

0x3e50,	// (0x0004eac8) popup_call_poc_act_window_t4_ParamLimits

0x3e50,	// (0x0004eac8) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005a19e) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005a19e) popup_call_poc_act_window_t

0x4ce2,	// (0x0004f95a) bg_popup_call_poc_inact_pane_g6

0x4cea,	// (0x0004f962) bg_popup_call_poc_inact_pane_g7

0x4cf2,	// (0x0004f96a) bg_popup_call_poc_inact_pane_g8

0x3e62,	// (0x0004eada) popup_call_poc_inact_window_g2

0x4cfa,	// (0x0004f972) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0005a21d) bg_popup_call_poc_inact_pane_g

0x3e6a,	// (0x0004eae2) popup_call_poc_inact_window_t1_ParamLimits

0x3e6a,	// (0x0004eae2) popup_call_poc_inact_window_t1

0x3e7f,	// (0x0004eaf7) popup_call_poc_inact_window_t2_ParamLimits

0x3e7f,	// (0x0004eaf7) popup_call_poc_inact_window_t2

0x3e94,	// (0x0004eb0c) popup_call_poc_inact_window_t3_ParamLimits

0x3e94,	// (0x0004eb0c) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005a1a7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005a1a7) popup_call_poc_inact_window_t

0x4eb2,	// (0x0004fb2a) context_pane_ParamLimits

0x8f14,	// (0x00053b8c) signal_pane_ParamLimits

0x3a5f,	// (0x0004e6d7) main_call2_pane

0x4ea0,	// (0x0004fb18) popup_phob_thumbnail2_window_ParamLimits

0x4ea0,	// (0x0004fb18) popup_phob_thumbnail2_window

0x85f1,	// (0x00053269) aid_hotspot_pointer_arrow_pane

0x85f9,	// (0x00053271) aid_hotspot_pointer_hand_pane

0x8c46,	// (0x000538be) phob_pre_status_pane_g5

0x69c0,	// (0x00051638) cams_zoom_pane_ParamLimits

0x69cc,	// (0x00051644) image_vga_pane_ParamLimits

0x69db,	// (0x00051653) main_camera_pane_g1_ParamLimits

0x69e9,	// (0x00051661) main_camera_pane_g2_ParamLimits

0x69f5,	// (0x0005166d) main_camera_pane_g3_ParamLimits

0x6a01,	// (0x00051679) main_camera_pane_g4_ParamLimits

0x6a0d,	// (0x00051685) main_camera_pane_g5_ParamLimits

0x6a19,	// (0x00051691) main_camera_pane_g6_ParamLimits

0x6a25,	// (0x0005169d) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00059ea6) main_camera_pane_g_ParamLimits

0x6a31,	// (0x000516a9) main_camera_pane_t1_ParamLimits

0x6a43,	// (0x000516bb) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00059eb7) main_camera_pane_t_ParamLimits

0x2ea9,	// (0x0004db21) bg_popup_preview_window_pane_cp01_ParamLimits

0x2ea9,	// (0x0004db21) bg_popup_preview_window_pane_cp01

0x3ea9,	// (0x0004eb21) popup_phob_thumbnail2_window_g1_ParamLimits

0x3ea9,	// (0x0004eb21) popup_phob_thumbnail2_window_g1

0x2c4e,	// (0x0004d8c6) call2_cli_visual_pane

0x8940,	// (0x000535b8) popup_call2_audio_conf_window_ParamLimits

0x8940,	// (0x000535b8) popup_call2_audio_conf_window

0x8955,	// (0x000535cd) popup_call2_audio_first_window_ParamLimits

0x8955,	// (0x000535cd) popup_call2_audio_first_window

0x89f3,	// (0x0005366b) popup_call2_audio_in_window_ParamLimits

0x89f3,	// (0x0005366b) popup_call2_audio_in_window

0x8a35,	// (0x000536ad) popup_call2_audio_out_window_ParamLimits

0x8a35,	// (0x000536ad) popup_call2_audio_out_window

0x8a97,	// (0x0005370f) popup_call2_audio_second_window_ParamLimits

0x8a97,	// (0x0005370f) popup_call2_audio_second_window

0x8af5,	// (0x0005376d) popup_call2_audio_wait_window_ParamLimits

0x8af5,	// (0x0005376d) popup_call2_audio_wait_window

0x2c4e,	// (0x0004d8c6) bg_popup_call2_act_pane_cp03

0x2e8b,	// (0x0004db03) list_conf_pane_cp

0x3eb5,	// (0x0004eb2d) popup_call2_audio_conf_window_t1

0x3850,	// (0x0004e4c8) list_single_graphic_popup_conf2_pane_ParamLimits

0x3850,	// (0x0004e4c8) list_single_graphic_popup_conf2_pane

0x3863,	// (0x0004e4db) list_highlight_pane_cp04

0x3ec3,	// (0x0004eb3b) list_single_graphic_popup_conf2_pane_g1

0x3874,	// (0x0004e4ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005a1ae) list_single_graphic_popup_conf2_pane_g

0x3ecd,	// (0x0004eb45) list_single_graphic_popup_conf2_pane_t1

0x3edb,	// (0x0004eb53) bg_popup_call2_act_pane_cp01_ParamLimits

0x3edb,	// (0x0004eb53) bg_popup_call2_act_pane_cp01

0x3f65,	// (0x0004ebdd) call_type_pane_cp05_ParamLimits

0x3f65,	// (0x0004ebdd) call_type_pane_cp05

0x3fb9,	// (0x0004ec31) popup_call2_audio_second_window_g1_ParamLimits

0x3fb9,	// (0x0004ec31) popup_call2_audio_second_window_g1

0x400d,	// (0x0004ec85) popup_call2_audio_second_window_g2_ParamLimits

0x400d,	// (0x0004ec85) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005a1b3) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005a1b3) popup_call2_audio_second_window_g

0x4072,	// (0x0004ecea) popup_call2_audio_second_window_t1_ParamLimits

0x4072,	// (0x0004ecea) popup_call2_audio_second_window_t1

0x4147,	// (0x0004edbf) popup_call2_audio_second_window_t2_ParamLimits

0x4147,	// (0x0004edbf) popup_call2_audio_second_window_t2

0x419a,	// (0x0004ee12) popup_call2_audio_second_window_t3_ParamLimits

0x419a,	// (0x0004ee12) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005a1ba) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005a1ba) popup_call2_audio_second_window_t

0x2c4e,	// (0x0004d8c6) bg_popup_call2_in_pane_cp02

0x2c58,	// (0x0004d8d0) call_type_pane_cp04

0x2c60,	// (0x0004d8d8) popup_call2_audio_wait_window_g1

0x2c68,	// (0x0004d8e0) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00059d93) popup_call2_audio_wait_window_g

0x2c70,	// (0x0004d8e8) popup_call2_audio_wait_window_t3

0x428d,	// (0x0004ef05) bg_popup_call2_act_pane_ParamLimits

0x428d,	// (0x0004ef05) bg_popup_call2_act_pane

0x434d,	// (0x0004efc5) call_type_pane_cp03_ParamLimits

0x434d,	// (0x0004efc5) call_type_pane_cp03

0x43b1,	// (0x0004f029) popup_call2_audio_first_window_g1_ParamLimits

0x43b1,	// (0x0004f029) popup_call2_audio_first_window_g1

0x4421,	// (0x0004f099) popup_call2_audio_first_window_g2_ParamLimits

0x4421,	// (0x0004f099) popup_call2_audio_first_window_g2

0x37ed,	// (0x0004e465) popup_call2_audio_first_window_g3_ParamLimits

0x37ed,	// (0x0004e465) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005a1c3) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005a1c3) popup_call2_audio_first_window_g

0x44ff,	// (0x0004f177) popup_call2_audio_first_window_t1_ParamLimits

0x44ff,	// (0x0004f177) popup_call2_audio_first_window_t1

0x4602,	// (0x0004f27a) popup_call2_audio_first_window_t4_ParamLimits

0x4602,	// (0x0004f27a) popup_call2_audio_first_window_t4

0x46e5,	// (0x0004f35d) popup_call2_audio_first_window_t5_ParamLimits

0x46e5,	// (0x0004f35d) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005a1ce) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005a1ce) popup_call2_audio_first_window_t

0x2ea1,	// (0x0004db19) bg_popup_call2_act_pane_g1

0x4d52,	// (0x0004f9ca) popup_cale_lunar_info_window_t1

0x4d60,	// (0x0004f9d8) popup_cale_lunar_info_window_t2

0x4d6e,	// (0x0004f9e6) popup_cale_lunar_info_window_t3

0x2c4e,	// (0x0004d8c6) bg_popup_call2_bubble_pane

0x47e6,	// (0x0004f45e) bg_popup_call2_in_pane_cp01_ParamLimits

0x47e6,	// (0x0004f45e) bg_popup_call2_in_pane_cp01

0x292a,	// (0x0004d5a2) call_type_pane_cp02

0x482e,	// (0x0004f4a6) popup_call2_audio_out_window_g1_ParamLimits

0x482e,	// (0x0004f4a6) popup_call2_audio_out_window_g1

0x485a,	// (0x0004f4d2) popup_call2_audio_out_window_g2_ParamLimits

0x485a,	// (0x0004f4d2) popup_call2_audio_out_window_g2

0x4882,	// (0x0004f4fa) popup_call2_audio_out_window_g3_ParamLimits

0x4882,	// (0x0004f4fa) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005a1d7) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005a1d7) popup_call2_audio_out_window_g

0x48bd,	// (0x0004f535) popup_call2_audio_out_window_t1_ParamLimits

0x48bd,	// (0x0004f535) popup_call2_audio_out_window_t1

0x491c,	// (0x0004f594) popup_call2_audio_out_window_t2_ParamLimits

0x491c,	// (0x0004f594) popup_call2_audio_out_window_t2

0x4970,	// (0x0004f5e8) popup_call2_audio_out_window_t3_ParamLimits

0x4970,	// (0x0004f5e8) popup_call2_audio_out_window_t3

0x4986,	// (0x0004f5fe) popup_call2_audio_out_window_t4_ParamLimits

0x4986,	// (0x0004f5fe) popup_call2_audio_out_window_t4

0x499c,	// (0x0004f614) popup_call2_audio_out_window_t5_ParamLimits

0x499c,	// (0x0004f614) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005a1e0) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005a1e0) popup_call2_audio_out_window_t

0x4a00,	// (0x0004f678) bg_popup_call2_in_pane_ParamLimits

0x4a00,	// (0x0004f678) bg_popup_call2_in_pane

0x4a5c,	// (0x0004f6d4) popup_call2_audio_in_window_g1_ParamLimits

0x4a5c,	// (0x0004f6d4) popup_call2_audio_in_window_g1

0x4a94,	// (0x0004f70c) popup_call2_audio_in_window_g2_ParamLimits

0x4a94,	// (0x0004f70c) popup_call2_audio_in_window_g2

0x4acc,	// (0x0004f744) popup_call2_audio_in_window_g3_ParamLimits

0x4acc,	// (0x0004f744) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005a1ed) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005a1ed) popup_call2_audio_in_window_g

0x4b24,	// (0x0004f79c) popup_call2_audio_in_window_t1_ParamLimits

0x4b24,	// (0x0004f79c) popup_call2_audio_in_window_t1

0x4ba4,	// (0x0004f81c) popup_call2_audio_in_window_t2_ParamLimits

0x4ba4,	// (0x0004f81c) popup_call2_audio_in_window_t2

0x4c24,	// (0x0004f89c) popup_call2_audio_in_window_t3_ParamLimits

0x4c24,	// (0x0004f89c) popup_call2_audio_in_window_t3

0x4c3e,	// (0x0004f8b6) popup_call2_audio_in_window_t4_ParamLimits

0x4c3e,	// (0x0004f8b6) popup_call2_audio_in_window_t4

0x4c50,	// (0x0004f8c8) popup_call2_audio_in_window_t5_ParamLimits

0x4c50,	// (0x0004f8c8) popup_call2_audio_in_window_t5

0x4c65,	// (0x0004f8dd) popup_call2_audio_in_window_t6_ParamLimits

0x4c65,	// (0x0004f8dd) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005a1f6) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005a1f6) popup_call2_audio_in_window_t

0x2ea1,	// (0x0004db19) bg_popup_call2_in_pane_g1

0x4d7c,	// (0x0004f9f4) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0005a25e) popup_cale_lunar_info_window_t

0x2ea9,	// (0x0004db21) bg_popup_call2_rect_pane_ParamLimits

0x2ea9,	// (0x0004db21) bg_popup_call2_rect_pane

0x2c4e,	// (0x0004d8c6) call2_cli_visual_graphic_pane

0x2c4e,	// (0x0004d8c6) call2_cli_visual_text_pane

0x8fba,	// (0x00053c32) smil_status_volume_pane_g3

0x0002,

0x2fd5,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g1

0x2fd5,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g2

0x2fd5,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005a203) call2_cli_visual_graphic_pane_g

0x4c7a,	// (0x0004f8f2) bg_popup_call2_rect_pane_g1

0x3061,	// (0x0004dcd9) bg_popup_call2_rect_pane_g2

0x4c82,	// (0x0004f8fa) bg_popup_call2_rect_pane_g3

0x4c8a,	// (0x0004f902) bg_popup_call2_rect_pane_g4

0x4c92,	// (0x0004f90a) bg_popup_call2_rect_pane_g5

0x4c9a,	// (0x0004f912) bg_popup_call2_rect_pane_g6

0x4ca2,	// (0x0004f91a) bg_popup_call2_rect_pane_g7

0x4caa,	// (0x0004f922) bg_popup_call2_rect_pane_g8

0x4cb2,	// (0x0004f92a) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005a20a) bg_popup_call2_rect_pane_g

0x4cba,	// (0x0004f932) bg_popup_call2_bubble_pane_g1

0x4cc2,	// (0x0004f93a) bg_popup_call2_bubble_pane_g2

0x4cca,	// (0x0004f942) bg_popup_call2_bubble_pane_g3

0x4cd2,	// (0x0004f94a) bg_popup_call2_bubble_pane_g4

0x4cda,	// (0x0004f952) bg_popup_call2_bubble_pane_g5

0x4ce2,	// (0x0004f95a) bg_popup_call2_bubble_pane_g6

0x4cea,	// (0x0004f962) bg_popup_call2_bubble_pane_g7

0x4cf2,	// (0x0004f96a) bg_popup_call2_bubble_pane_g8

0x4cfa,	// (0x0004f972) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005a21d) bg_popup_call2_bubble_pane_g

0x6539,	// (0x000511b1) aid_cale_week_size_cell_pane

0x6a55,	// (0x000516cd) aid_cams_cif_uncrop_pane_ParamLimits

0x6a55,	// (0x000516cd) aid_cams_cif_uncrop_pane

0x6bb2,	// (0x0005182a) aid_cams_size_cell_ParamLimits

0x6bb2,	// (0x0005182a) aid_cams_size_cell

0x6bbe,	// (0x00051836) grid_cams_pane_ParamLimits

0x6bcc,	// (0x00051844) linegrid_cams_pane_ParamLimits

0x6cf8,	// (0x00051970) call_video_pane_t1

0x6d19,	// (0x00051991) call_video_pane_t2

0x0001,

0xf292,	// (0x00059f0a) call_video_pane_t

0x7250,	// (0x00051ec8) aid_cale_month_size_cell_pane_ParamLimits

0x7250,	// (0x00051ec8) aid_cale_month_size_cell_pane

0xf62f,	// (0x0005a2a7) smil_status_volume_pane_g

0x8fc7,	// (0x00053c3f) volume_smil_pane_ParamLimits

0x051c,	// (0x0004b194) aid_popup2_width_pane

0x6436,	// (0x000510ae) cell_qdial_pane_g4_ParamLimits

0x6436,	// (0x000510ae) cell_qdial_pane_g4

0x7ecd,	// (0x00052b45) aid_blid_cardinal_pane_ParamLimits

0x7edd,	// (0x00052b55) aid_blid_destination_pane_ParamLimits

0x7edd,	// (0x00052b55) aid_blid_destination_pane

0x2ea9,	// (0x0004db21) bg_popup_call_poc_act_pane_ParamLimits

0x2ea9,	// (0x0004db21) bg_popup_call_poc_act_pane

0x2ea9,	// (0x0004db21) bg_popup_call_poc_inact_pane_ParamLimits

0x2ea9,	// (0x0004db21) bg_popup_call_poc_inact_pane

0x4d02,	// (0x0004f97a) bg_popup_call_poc_act_pane_g1

0x4d0a,	// (0x0004f982) bg_popup_call_poc_act_pane_g2

0x4d12,	// (0x0004f98a) bg_popup_call_poc_act_pane_g3

0x4cd2,	// (0x0004f94a) bg_popup_call_poc_act_pane_g4

0x4cda,	// (0x0004f952) bg_popup_call_poc_act_pane_g5

0x4d1a,	// (0x0004f992) bg_popup_call_poc_act_pane_g6

0x4cea,	// (0x0004f962) bg_popup_call_poc_act_pane_g7

0x4d22,	// (0x0004f99a) bg_popup_call_poc_act_pane_g8

0x2c4e,	// (0x0004d8c6) main_usb_pane

0x4e7b,	// (0x0004faf3) popup_cale_lunar_info_window

0x7044,	// (0x00051cbc) im_reading_pane_t1_ParamLimits

0x321c,	// (0x0004de94) list_im_pane_ParamLimits

0x322d,	// (0x0004dea5) scroll_pane_cp07_ParamLimits

0x2c4e,	// (0x0004d8c6) grid_highlight_pane_cp012

0x2ea9,	// (0x0004db21) mup_scale_pane_ParamLimits

0x37ed,	// (0x0004e465) main_usb_pane_g1_ParamLimits

0x37ed,	// (0x0004e465) main_usb_pane_g1

0x8b69,	// (0x000537e1) main_usb_pane_g2_ParamLimits

0x8b69,	// (0x000537e1) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0005a247) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0005a247) main_usb_pane_g

0x8b75,	// (0x000537ed) main_usb_pane_t1_ParamLimits

0x8b75,	// (0x000537ed) main_usb_pane_t1

0x8b87,	// (0x000537ff) main_usb_pane_t2_ParamLimits

0x8b87,	// (0x000537ff) main_usb_pane_t2

0x8b99,	// (0x00053811) main_usb_pane_t3_ParamLimits

0x8b99,	// (0x00053811) main_usb_pane_t3

0x8bab,	// (0x00053823) main_usb_pane_t4_ParamLimits

0x8bab,	// (0x00053823) main_usb_pane_t4

0x8bbd,	// (0x00053835) main_usb_pane_t5_ParamLimits

0x8bbd,	// (0x00053835) main_usb_pane_t5

0x8bcf,	// (0x00053847) main_usb_pane_t6_ParamLimits

0x8bcf,	// (0x00053847) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0005a24c) main_usb_pane_t_ParamLimits

0x7e73,	// (0x00052aeb) aid_text_placing

0x7e7f,	// (0x00052af7) main_location2_pane_t1_ParamLimits

0x7e93,	// (0x00052b0b) main_location2_pane_t2_ParamLimits

0x7ea7,	// (0x00052b1f) main_location2_pane_t3_ParamLimits

0x7ebb,	// (0x00052b33) main_location2_pane_t4_ParamLimits

0x7ebb,	// (0x00052b33) main_location2_pane_t4

0xf3f3,	// (0x0005a06b) main_location2_pane_t_ParamLimits

0x2ee5,	// (0x0004db5d) find_pinb_pane_g2_ParamLimits

0x2ee5,	// (0x0004db5d) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00059db9) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00059db9) find_pinb_pane_g

0x2ef1,	// (0x0004db69) find_pinb_pane_t1_ParamLimits

0x2f03,	// (0x0004db7b) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00059dbe) find_pinb_pane_t_ParamLimits

0x2c4e,	// (0x0004d8c6) main_call3_pane

0x765c,	// (0x000522d4) cale_month_day_heading_pane_t1_ParamLimits

0x76ba,	// (0x00052332) cale_month_day_heading_pane_t2_ParamLimits

0x771f,	// (0x00052397) cale_month_day_heading_pane_t3_ParamLimits

0x7784,	// (0x000523fc) cale_month_day_heading_pane_t4_ParamLimits

0x77e9,	// (0x00052461) cale_month_day_heading_pane_t5_ParamLimits

0x784e,	// (0x000524c6) cale_month_day_heading_pane_t6_ParamLimits

0x78b3,	// (0x0005252b) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00059f42) cale_month_day_heading_pane_t_ParamLimits

0x346d,	// (0x0004e0e5) smil_status_volume_pane

0x872d,	// (0x000533a5) postcard_address_pane_ParamLimits

0x872d,	// (0x000533a5) postcard_address_pane

0x8739,	// (0x000533b1) postcard_message_pane_ParamLimits

0x8739,	// (0x000533b1) postcard_message_pane

0x8b34,	// (0x000537ac) call2_cli_visual_pane_t1_ParamLimits

0x8b34,	// (0x000537ac) call2_cli_visual_pane_t1

0x911e,	// (0x00053d96) postcard_message_pane_t1_ParamLimits

0x911e,	// (0x00053d96) postcard_message_pane_t1

0x9107,	// (0x00053d7f) postcard_address_pane_t1_ParamLimits

0x9107,	// (0x00053d7f) postcard_address_pane_t1

0x90f8,	// (0x00053d70) popup_call3_audio_in_window_ParamLimits

0x90f8,	// (0x00053d70) popup_call3_audio_in_window

0x8fdc,	// (0x00053c54) bg_popup_call3_in_pane_ParamLimits

0x8fdc,	// (0x00053c54) bg_popup_call3_in_pane

0x903e,	// (0x00053cb6) popup_call3_audio_in_window_g1_ParamLimits

0x903e,	// (0x00053cb6) popup_call3_audio_in_window_g1

0x9056,	// (0x00053cce) popup_call3_audio_in_window_g2_ParamLimits

0x9056,	// (0x00053cce) popup_call3_audio_in_window_g2

0x906e,	// (0x00053ce6) popup_call3_audio_in_window_g3_ParamLimits

0x906e,	// (0x00053ce6) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0005a2ae) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0005a2ae) popup_call3_audio_in_window_g

0x9096,	// (0x00053d0e) popup_call3_audio_in_window_t1_ParamLimits

0x9096,	// (0x00053d0e) popup_call3_audio_in_window_t1

0x90be,	// (0x00053d36) popup_call3_audio_in_window_t2_ParamLimits

0x90be,	// (0x00053d36) popup_call3_audio_in_window_t2

0x90e6,	// (0x00053d5e) popup_call3_audio_in_window_t3_ParamLimits

0x90e6,	// (0x00053d5e) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0005a2b7) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0005a2b7) popup_call3_audio_in_window_t

0x3a5f,	// (0x0004e6d7) bg_popup_call3_rect_pane

0x4c7a,	// (0x0004f8f2) bg_popup_call3_rect_pane_g1

0x3061,	// (0x0004dcd9) bg_popup_call3_rect_pane_g2

0x4c82,	// (0x0004f8fa) bg_popup_call3_rect_pane_g3

0x4c8a,	// (0x0004f902) bg_popup_call3_rect_pane_g4

0x4c92,	// (0x0004f90a) bg_popup_call3_rect_pane_g5

0x4c9a,	// (0x0004f912) bg_popup_call3_rect_pane_g6

0x4ca2,	// (0x0004f91a) bg_popup_call3_rect_pane_g7

0x82cd,	// (0x00052f45) mup_visualizer_osc_pane

0x3b1e,	// (0x0004e796) mup_visualizer_spec_pane

0x8ffc,	// (0x00053c74) call3_video_qcif_pane_ParamLimits

0x8ffc,	// (0x00053c74) call3_video_qcif_pane

0x900e,	// (0x00053c86) call3_video_qcif_uncrop_pane_ParamLimits

0x900e,	// (0x00053c86) call3_video_qcif_uncrop_pane

0x901c,	// (0x00053c94) call3_video_subqcif_pane_ParamLimits

0x901c,	// (0x00053c94) call3_video_subqcif_pane

0x902e,	// (0x00053ca6) call3_video_subqcif_uncrop_pane_ParamLimits

0x902e,	// (0x00053ca6) call3_video_subqcif_uncrop_pane

0x9086,	// (0x00053cfe) popup_call3_audio_in_window_g4_ParamLimits

0x9086,	// (0x00053cfe) popup_call3_audio_in_window_g4

0x8fa9,	// (0x00053c21) mup_spec_half_pane

0x8fb2,	// (0x00053c2a) mup_spec_half_pane_cp

0x4f12,	// (0x0004fb8a) mup_osc_middle_pane

0x4f1b,	// (0x0004fb93) mup_visualizer_osc_pane_g1

0x8f8a,	// (0x00053c02) mup_spec_bar_pane_ParamLimits

0x8f8a,	// (0x00053c02) mup_spec_bar_pane

0x4eff,	// (0x0004fb77) mup_spec_bar_pane_g1

0x4f09,	// (0x0004fb81) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005a2a2) mup_spec_bar_pane_g

0x6539,	// (0x000511b1) aid_cale_week_size_cell_pane_ParamLimits

0x654c,	// (0x000511c4) bg_cale_heading_pane_ParamLimits

0x3095,	// (0x0004dd0d) bg_cale_pane_cp01_ParamLimits

0x6568,	// (0x000511e0) cale_week_corner_pane_ParamLimits

0x657e,	// (0x000511f6) cale_week_day_heading_pane_ParamLimits

0x659a,	// (0x00051212) cale_week_scroll_pane_g1_ParamLimits

0x65b3,	// (0x0005122b) cale_week_scroll_pane_g2_ParamLimits

0x65c4,	// (0x0005123c) cale_week_scroll_pane_g3_ParamLimits

0x65d5,	// (0x0005124d) cale_week_scroll_pane_g4_ParamLimits

0x65e6,	// (0x0005125e) cale_week_scroll_pane_g5_ParamLimits

0x65f7,	// (0x0005126f) cale_week_scroll_pane_g6_ParamLimits

0x6608,	// (0x00051280) cale_week_scroll_pane_g7_ParamLimits

0x661b,	// (0x00051293) cale_week_scroll_pane_g8_ParamLimits

0x662e,	// (0x000512a6) cale_week_scroll_pane_g9_ParamLimits

0x663f,	// (0x000512b7) cale_week_scroll_pane_g10_ParamLimits

0x6650,	// (0x000512c8) cale_week_scroll_pane_g11_ParamLimits

0x6661,	// (0x000512d9) cale_week_scroll_pane_g12_ParamLimits

0x6672,	// (0x000512ea) cale_week_scroll_pane_g13_ParamLimits

0x668b,	// (0x00051303) cale_week_scroll_pane_g14_ParamLimits

0x66a4,	// (0x0005131c) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00059e4a) cale_week_scroll_pane_g_ParamLimits

0x66bd,	// (0x00051335) cale_week_time_pane_ParamLimits

0x66d0,	// (0x00051348) grid_cale_week_pane_ParamLimits

0x30ae,	// (0x0004dd26) listscroll_cale_week_pane_t1

0x66ed,	// (0x00051365) scroll_pane_cp08_ParamLimits

0x72a1,	// (0x00051f19) cale_month_corner_pane_ParamLimits

0x3443,	// (0x0004e0bb) cale_month_pane_t1

0x760b,	// (0x00052283) cale_month_week_pane_ParamLimits

0x37ed,	// (0x0004e465) popup_call_status_window_g1_ParamLimits

0x7c96,	// (0x0005290e) popup_call_status_window_g2_ParamLimits

0x7ca2,	// (0x0005291a) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00059ff2) popup_call_status_window_g_ParamLimits

0x37dd,	// (0x0004e455) aid_call2_pane

0x856c,	// (0x000531e4) msg_header_pane_g1

0x872d,	// (0x000533a5) postcard_address2_pane_ParamLimits

0x872d,	// (0x000533a5) postcard_address2_pane

0x8739,	// (0x000533b1) postcard_message2_pane_ParamLimits

0x8739,	// (0x000533b1) postcard_message2_pane

0x8f22,	// (0x00053b9a) message2_row_pane_ParamLimits

0x8f22,	// (0x00053b9a) message2_row_pane

0x8f3d,	// (0x00053bb5) address2_row_pane_ParamLimits

0x8f3d,	// (0x00053bb5) address2_row_pane

0x4ecd,	// (0x0004fb45) postcard_message2_row_pane_g1

0x4ed5,	// (0x0004fb4d) postcard_message2_row_pane_t1

0x4ecd,	// (0x0004fb45) address2_row_pane_g1

0x4ed5,	// (0x0004fb4d) address2_row_pane_t1

0x6921,	// (0x00051599) aid_size_cell_vorec

0x2c4e,	// (0x0004d8c6) main_rss_pane

0x8f50,	// (0x00053bc8) rss_list_single_pane_ParamLimits

0x8f50,	// (0x00053bc8) rss_list_single_pane

0x4ee3,	// (0x0004fb5b) rss_list_single_pane_t1

0x4ef1,	// (0x0004fb69) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0005a29d) rss_list_single_pane_t

0x2c4e,	// (0x0004d8c6) main_camera2_pane

0x2c4e,	// (0x0004d8c6) main_video2_pane

0x9182,	// (0x00053dfa) cams_zoom_pane_cp2_ParamLimits

0x9182,	// (0x00053dfa) cams_zoom_pane_cp2

0x918e,	// (0x00053e06) image2_vga_pane_ParamLimits

0x918e,	// (0x00053e06) image2_vga_pane

0x919d,	// (0x00053e15) main_camera2_pane_g1_ParamLimits

0x919d,	// (0x00053e15) main_camera2_pane_g1

0x91a9,	// (0x00053e21) main_camera2_pane_g2_ParamLimits

0x91a9,	// (0x00053e21) main_camera2_pane_g2

0x91b5,	// (0x00053e2d) main_camera2_pane_g3_ParamLimits

0x91b5,	// (0x00053e2d) main_camera2_pane_g3

0x91c1,	// (0x00053e39) main_camera2_pane_g4_ParamLimits

0x91c1,	// (0x00053e39) main_camera2_pane_g4

0x91cd,	// (0x00053e45) main_camera2_pane_g5_ParamLimits

0x91cd,	// (0x00053e45) main_camera2_pane_g5

0x91d9,	// (0x00053e51) main_camera2_pane_g6_ParamLimits

0x91d9,	// (0x00053e51) main_camera2_pane_g6

0x91e5,	// (0x00053e5d) main_camera2_pane_g7_ParamLimits

0x91e5,	// (0x00053e5d) main_camera2_pane_g7

0x91f1,	// (0x00053e69) main_camera2_pane_g8_ParamLimits

0x91f1,	// (0x00053e69) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0005a2be) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0005a2be) main_camera2_pane_g

0x9209,	// (0x00053e81) main_camera2_pane_t1_ParamLimits

0x9209,	// (0x00053e81) main_camera2_pane_t1

0x921b,	// (0x00053e93) main_camera2_pane_t2_ParamLimits

0x921b,	// (0x00053e93) main_camera2_pane_t2

0x922d,	// (0x00053ea5) main_camera2_pane_t3_ParamLimits

0x922d,	// (0x00053ea5) main_camera2_pane_t3

0x923f,	// (0x00053eb7) main_camera2_pane_t4_ParamLimits

0x923f,	// (0x00053eb7) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0005a2d1) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0005a2d1) main_camera2_pane_t

0x92a1,	// (0x00053f19) cams_zoom_pane_cp4_ParamLimits

0x92a1,	// (0x00053f19) cams_zoom_pane_cp4

0x92b1,	// (0x00053f29) image2_cif_pane_ParamLimits

0x92b1,	// (0x00053f29) image2_cif_pane

0x92c6,	// (0x00053f3e) image2_subqcif_pane_ParamLimits

0x92c6,	// (0x00053f3e) image2_subqcif_pane

0x92d5,	// (0x00053f4d) main_video2_pane_g1_ParamLimits

0x92d5,	// (0x00053f4d) main_video2_pane_g1

0x92e7,	// (0x00053f5f) main_video2_pane_g2_ParamLimits

0x92e7,	// (0x00053f5f) main_video2_pane_g2

0x92f7,	// (0x00053f6f) main_video2_pane_g3_ParamLimits

0x92f7,	// (0x00053f6f) main_video2_pane_g3

0x9307,	// (0x00053f7f) main_video2_pane_g4_ParamLimits

0x9307,	// (0x00053f7f) main_video2_pane_g4

0x9317,	// (0x00053f8f) main_video2_pane_g5_ParamLimits

0x9317,	// (0x00053f8f) main_video2_pane_g5

0x9327,	// (0x00053f9f) main_video2_pane_g6_ParamLimits

0x9327,	// (0x00053f9f) main_video2_pane_g6

0x0005,

0xf668,	// (0x0005a2e0) main_video2_pane_g_ParamLimits

0xf668,	// (0x0005a2e0) main_video2_pane_g

0x9339,	// (0x00053fb1) main_video2_pane_t1_ParamLimits

0x9339,	// (0x00053fb1) main_video2_pane_t1

0x9353,	// (0x00053fcb) main_video2_pane_t2_ParamLimits

0x9353,	// (0x00053fcb) main_video2_pane_t2

0x9379,	// (0x00053ff1) main_video2_pane_t3_ParamLimits

0x9379,	// (0x00053ff1) main_video2_pane_t3

0x0002,

0xf675,	// (0x0005a2ed) main_video2_pane_t_ParamLimits

0xf675,	// (0x0005a2ed) main_video2_pane_t

0x8c86,	// (0x000538fe) call_muted_g2

0x0001,

0xf617,	// (0x0005a28f) call_muted_g

0x2c4e,	// (0x0004d8c6) main_mup2_pane

0xde3a,	// (0x00058ab2) main_mup2_pane_g1_ParamLimits

0xde3a,	// (0x00058ab2) main_mup2_pane_g1

0x939f,	// (0x00054017) main_mup2_pane_g2_ParamLimits

0x939f,	// (0x00054017) main_mup2_pane_g2

0x9621,	// (0x00054299) main_mup_pane_g13_cp1

0x9629,	// (0x000542a1) mup_volume_pane_cp1

0x93bf,	// (0x00054037) main_mup2_pane_g4_ParamLimits

0x93bf,	// (0x00054037) main_mup2_pane_g4

0x93d4,	// (0x0005404c) main_mup2_pane_g5_ParamLimits

0x93d4,	// (0x0005404c) main_mup2_pane_g5

0x93e9,	// (0x00054061) main_mup2_pane_g6_ParamLimits

0x93e9,	// (0x00054061) main_mup2_pane_g6

0x93fe,	// (0x00054076) main_mup2_pane_g7_ParamLimits

0x93fe,	// (0x00054076) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0005a2f4) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0005a2f4) main_mup2_pane_g

0x941a,	// (0x00054092) main_mup2_pane_t1_ParamLimits

0x941a,	// (0x00054092) main_mup2_pane_t1

0x9431,	// (0x000540a9) main_mup2_pane_t2_ParamLimits

0x9431,	// (0x000540a9) main_mup2_pane_t2

0x9448,	// (0x000540c0) main_mup2_pane_t3_ParamLimits

0x9448,	// (0x000540c0) main_mup2_pane_t3

0x945f,	// (0x000540d7) main_mup2_pane_t4_ParamLimits

0x945f,	// (0x000540d7) main_mup2_pane_t4

0x9479,	// (0x000540f1) main_mup2_pane_t5_ParamLimits

0x9479,	// (0x000540f1) main_mup2_pane_t5

0x9493,	// (0x0005410b) main_mup2_pane_t6_ParamLimits

0x9493,	// (0x0005410b) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0005a303) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0005a303) main_mup2_pane_t

0x94cb,	// (0x00054143) mup2_visualizer_pane_ParamLimits

0x94cb,	// (0x00054143) mup2_visualizer_pane

0x9501,	// (0x00054179) mup_progress_pane_cp_ParamLimits

0x9501,	// (0x00054179) mup_progress_pane_cp

0x960c,	// (0x00054284) mup_volume_pane_cp_ParamLimits

0x960c,	// (0x00054284) mup_volume_pane_cp

0x9518,	// (0x00054190) mup2_visualizer_pane_g1_ParamLimits

0x9518,	// (0x00054190) mup2_visualizer_pane_g1

0xde46,	// (0x00058abe) mup2_visualizer_pane_g2_ParamLimits

0xde46,	// (0x00058abe) mup2_visualizer_pane_g2

0x952d,	// (0x000541a5) mup2_visualizer_pane_g3_ParamLimits

0x952d,	// (0x000541a5) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0005a310) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0005a310) mup2_visualizer_pane_g

0x3d45,	// (0x0004e9bd) aid_size_cell_fmradio

0x8d9c,	// (0x00053a14) aid_height_parent_landcape

0x32ab,	// (0x0004df23) wml_content_pane_cp

0x32b3,	// (0x0004df2b) wml_tabs_pane

0x32bc,	// (0x0004df34) popup_wml_miniature_window

0x32c4,	// (0x0004df3c) scroll_pane_cp021

0x32d8,	// (0x0004df50) wml_content_pane_comp8

0x2c4e,	// (0x0004d8c6) bg_popup_sub_pane_cp05

0xde64,	// (0x00058adc) popup_wml_miniature_window_g1

0xde6c,	// (0x00058ae4) wml_miniature_view_pane

0x953b,	// (0x000541b3) aid_size_wml_view

0x9543,	// (0x000541bb) wml_miniature_view_pane_g1

0x954c,	// (0x000541c4) wml_miniature_view_pane_g2

0x9555,	// (0x000541cd) wml_miniature_view_pane_g3

0x955d,	// (0x000541d5) wml_miniature_view_pane_g4

0x9565,	// (0x000541dd) wml_miniature_view_pane_g5

0x956d,	// (0x000541e5) wml_miniature_view_pane_g6

0x9575,	// (0x000541ed) wml_miniature_view_pane_g7

0x957d,	// (0x000541f5) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0005a317) wml_miniature_view_pane_g

0xde3a,	// (0x00058ab2) background_graphic_ParamLimits

0xde3a,	// (0x00058ab2) background_graphic

0xde74,	// (0x00058aec) wml_tabs_2_pane

0xde7d,	// (0x00058af5) wml_tabs_3_pane_ParamLimits

0xde7d,	// (0x00058af5) wml_tabs_3_pane

0xde8f,	// (0x00058b07) wml_tabs_4_pane_ParamLimits

0xde8f,	// (0x00058b07) wml_tabs_4_pane

0xdea5,	// (0x00058b1d) wml_tabs_5_pane_ParamLimits

0xdea5,	// (0x00058b1d) wml_tabs_5_pane

0xdebf,	// (0x00058b37) wml_tabs_pane_g2_ParamLimits

0xdebf,	// (0x00058b37) wml_tabs_pane_g2

0xded3,	// (0x00058b4b) wml_tabs_pane_g3_ParamLimits

0xded3,	// (0x00058b4b) wml_tabs_pane_g3

0x9585,	// (0x000541fd) wml_tabs_2_active_pane_ParamLimits

0x9585,	// (0x000541fd) wml_tabs_2_active_pane

0x9595,	// (0x0005420d) wml_tabs_2_passive_pane_ParamLimits

0x9595,	// (0x0005420d) wml_tabs_2_passive_pane

0x95a5,	// (0x0005421d) wml_tabs_3_active_pane_cp_ParamLimits

0x95a5,	// (0x0005421d) wml_tabs_3_active_pane_cp

0x95b6,	// (0x0005422e) wml_tabs_3_passive_pane_ParamLimits

0x95b6,	// (0x0005422e) wml_tabs_3_passive_pane

0x95c7,	// (0x0005423f) wml_tabs_3_passive_pane_cp_ParamLimits

0x95c7,	// (0x0005423f) wml_tabs_3_passive_pane_cp

0x95d8,	// (0x00054250) tabs_4_active_pane

0x95e0,	// (0x00054258) tabs_4_passive_pane

0x95e8,	// (0x00054260) tabs_4_passive_pane_cp

0x95f0,	// (0x00054268) tabs_4_passive_pane_cp2

0x8b61,	// (0x000537d9) aid_height_text

0x829a,	// (0x00052f12) mup_volume_cont_pane_ParamLimits

0x829a,	// (0x00052f12) mup_volume_cont_pane

0x6083,	// (0x00050cfb) aid_size_cell_pinb

0x608d,	// (0x00050d05) aid_size_list_pinb

0x94ea,	// (0x00054162) mup2_volume_cont_pane_ParamLimits

0x94ea,	// (0x00054162) mup2_volume_cont_pane

0x95f8,	// (0x00054270) mup2_volume_cont_pane_g1_ParamLimits

0x95f8,	// (0x00054270) mup2_volume_cont_pane_g1

0x5d16,	// (0x0005098e) aid_size_cell_touch_ParamLimits

0x5d16,	// (0x0005098e) aid_size_cell_touch

0x5f69,	// (0x00050be1) touch_pane_ParamLimits

0x5f69,	// (0x00050be1) touch_pane

0x050a,	// (0x0004b182) main_rss2_pane

0xdef0,	// (0x00058b68) listscroll_rss2_pane

0xdef9,	// (0x00058b71) rss2_navigation_pane

0xdf01,	// (0x00058b79) list_rss2_pane

0x3916,	// (0x0004e58e) scroll_pane_cp22

0xdf09,	// (0x00058b81) rss2_navigation_pane_g1

0xdf12,	// (0x00058b8a) rss2_navigation_pane_g2

0xdf1a,	// (0x00058b92) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0005a328) rss2_navigation_pane_g

0xdf22,	// (0x00058b9a) rss2_navigation_pane_t1

0x9631,	// (0x000542a9) rss2_list_single_pane_ParamLimits

0x9631,	// (0x000542a9) rss2_list_single_pane

0xdf30,	// (0x00058ba8) rss2_list_single_pane_t2

0xdf3e,	// (0x00058bb6) rss2_list_single_pane_t3_ParamLimits

0xdf3e,	// (0x00058bb6) rss2_list_single_pane_t3

0xdf5b,	// (0x00058bd3) rss2_list_single_pane_t4

0x7ab7,	// (0x0005272f) smil_status_pane_g1

0x412d,	// (0x0004eda5) main_image2_pane_ParamLimits

0x412d,	// (0x0004eda5) main_image2_pane

0x91fd,	// (0x00053e75) main_camera2_pane_g9_ParamLimits

0x91fd,	// (0x00053e75) main_camera2_pane_g9

0x9251,	// (0x00053ec9) main_camera2_pane_t5_ParamLimits

0x9251,	// (0x00053ec9) main_camera2_pane_t5

0x9263,	// (0x00053edb) main_camera2_pane_t6_ParamLimits

0x9263,	// (0x00053edb) main_camera2_pane_t6

0x9662,	// (0x000542da) main_image2_pane_g1_ParamLimits

0x9662,	// (0x000542da) main_image2_pane_g1

0x8901,	// (0x00053579) smil2_video_pane_ParamLimits

0x8901,	// (0x00053579) smil2_video_pane

0x0538,	// (0x0004b1b0) aid_zoom_text_primary_cp

0x272f,	// (0x0004d3a7) popup_preview_fixed_window

0x3214,	// (0x0004de8c) im_reading_pane_g1

0x9147,	// (0x00053dbf) cams2_bc_adjust_pane_cp_ParamLimits

0x9147,	// (0x00053dbf) cams2_bc_adjust_pane_cp

0x9293,	// (0x00053f0b) cams2_bc_adjust_pane_ParamLimits

0x9293,	// (0x00053f0b) cams2_bc_adjust_pane

0xdf69,	// (0x00058be1) cams2_bc_adjust_pane_g1

0x966e,	// (0x000542e6) cams2_slider_pane

0x9677,	// (0x000542ef) cams2_slider_pane_g1

0x9680,	// (0x000542f8) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0005a32f) cams2_slider_pane_g

0x617e,	// (0x00050df6) calc_display_pane_ParamLimits

0x619c,	// (0x00050e14) calc_paper_pane_ParamLimits

0x61b8,	// (0x00050e30) grid_calc_pane_ParamLimits

0x7d04,	// (0x0005297c) popup_clock_digital_window_t1_ParamLimits

0x3ce2,	// (0x0004e95a) main_image_pane_t1

0x6164,	// (0x00050ddc) aid_size_cell_calc_ParamLimits

0x6164,	// (0x00050ddc) aid_size_cell_calc

0x8dce,	// (0x00053a46) popup_blid_sat_info2_window_ParamLimits

0x8dce,	// (0x00053a46) popup_blid_sat_info2_window

0xdf79,	// (0x00058bf1) aid_size_cell_blid

0xdf81,	// (0x00058bf9) bg_popup_window_pane_cp07

0xdfa4,	// (0x00058c1c) grid_popup_blid_pane

0xdfae,	// (0x00058c26) heading_pane_cp05_ParamLimits

0xdfae,	// (0x00058c26) heading_pane_cp05

0xe078,	// (0x00058cf0) cell_popup_blid_pane_ParamLimits

0xe078,	// (0x00058cf0) cell_popup_blid_pane

0xe09c,	// (0x00058d14) cell_popup_blid_pane_g1

0xe0a4,	// (0x00058d1c) cell_popup_blid_pane_t1

0x94b0,	// (0x00054128) mup2_indicator_pane_ParamLimits

0x94b0,	// (0x00054128) mup2_indicator_pane

0x3a5f,	// (0x0004e6d7) mup2_visualizer_osc_pane

0xde52,	// (0x00058aca) mup2_visualizer_spec_pane_ParamLimits

0xde52,	// (0x00058aca) mup2_visualizer_spec_pane

0x969a,	// (0x00054312) mup2_spec_half_pane

0x96a3,	// (0x0005431b) mup2_spec_half_pane_cp

0x96ad,	// (0x00054325) mup2_spec_bar_pane_ParamLimits

0x96ad,	// (0x00054325) mup2_spec_bar_pane

0x4eff,	// (0x0004fb77) mup2_spec_bar_pane_g1

0x4f09,	// (0x0004fb81) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005a2a2) mup2_spec_bar_pane_g

0x96cc,	// (0x00054344) mup2_osc_middle_pane

0x4f1b,	// (0x0004fb93) mup2_visualizer_osc_pane_g1

0x285b,	// (0x0004d4d3) popup_number_entry_window_t1_ParamLimits

0x286e,	// (0x0004d4e6) popup_number_entry_window_t2_ParamLimits

0x2880,	// (0x0004d4f8) popup_number_entry_window_t3_ParamLimits

0x5fc0,	// (0x00050c38) popup_number_entry_window_t5_ParamLimits

0x5fc0,	// (0x00050c38) popup_number_entry_window_t5

0xf0ec,	// (0x00059d64) popup_number_entry_window_t_ParamLimits

0x2892,	// (0x0004d50a) text_title_cp2_ParamLimits

0x8601,	// (0x00053279) aid_hotspot_pointer_text2_pane

0x868f,	// (0x00053307) main_viewer_pane_g9_ParamLimits

0x868f,	// (0x00053307) main_viewer_pane_g9

0x3443,	// (0x0004e0bb) cale_month_pane_t1_ParamLimits

0x3480,	// (0x0004e0f8) bg_cale_pane_ParamLimits

0x3498,	// (0x0004e110) list_cale_pane_ParamLimits

0x30ae,	// (0x0004dd26) listscroll_cale_day_pane_t1

0x34a9,	// (0x0004e121) scroll_pane_cp09_ParamLimits

0x82d5,	// (0x00052f4d) main_mup_eq_pane_t1_ParamLimits

0x82d5,	// (0x00052f4d) main_mup_eq_pane_t1

0x82ef,	// (0x00052f67) main_mup_eq_pane_t2_ParamLimits

0x82ef,	// (0x00052f67) main_mup_eq_pane_t2

0x8309,	// (0x00052f81) main_mup_eq_pane_t3_ParamLimits

0x8309,	// (0x00052f81) main_mup_eq_pane_t3

0x8321,	// (0x00052f99) main_mup_eq_pane_t4_ParamLimits

0x8321,	// (0x00052f99) main_mup_eq_pane_t4

0x8339,	// (0x00052fb1) main_mup_eq_pane_t5_ParamLimits

0x8339,	// (0x00052fb1) main_mup_eq_pane_t5

0x8351,	// (0x00052fc9) main_mup_eq_pane_t6_ParamLimits

0x8351,	// (0x00052fc9) main_mup_eq_pane_t6

0x8365,	// (0x00052fdd) main_mup_eq_pane_t7_ParamLimits

0x8365,	// (0x00052fdd) main_mup_eq_pane_t7

0x8379,	// (0x00052ff1) main_mup_eq_pane_t8_ParamLimits

0x8379,	// (0x00052ff1) main_mup_eq_pane_t8

0x838f,	// (0x00053007) main_mup_eq_pane_t9_ParamLimits

0x838f,	// (0x00053007) main_mup_eq_pane_t9

0x83a7,	// (0x0005301f) main_mup_eq_pane_t10_ParamLimits

0x83a7,	// (0x0005301f) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005a0f1) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005a0f1) main_mup_eq_pane_t

0x8464,	// (0x000530dc) mup_equalizer_pane_cp5_ParamLimits

0x847a,	// (0x000530f2) mup_equalizer_pane_cp6_ParamLimits

0x8492,	// (0x0005310a) mup_equalizer_pane_cp7_ParamLimits

0x050a,	// (0x0004b182) main_gallery_pane

0x4f24,	// (0x0004fb9c) smil2_volume_pane

0x4f3f,	// (0x0004fbb7) smil_status_volume_pane_g1_ParamLimits

0x4f2c,	// (0x0004fba4) smil_status_volume_pane_g2_ParamLimits

0x8fba,	// (0x00053c32) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0005a2a7) smil_status_volume_pane_g_ParamLimits

0xdf81,	// (0x00058bf9) bg_popup_window_pane_cp07_ParamLimits

0xdf8f,	// (0x00058c07) blid_firmament_pane

0x96d5,	// (0x0005434d) aid_size_cell_gallery_ParamLimits

0x96d5,	// (0x0005434d) aid_size_cell_gallery

0x96e3,	// (0x0005435b) grid_gallery_pane_ParamLimits

0x96e3,	// (0x0005435b) grid_gallery_pane

0x96f3,	// (0x0005436b) cell_gallery_pane_ParamLimits

0x96f3,	// (0x0005436b) cell_gallery_pane

0xe0b2,	// (0x00058d2a) bg_cell_gallery_focus_pane_ParamLimits

0xe0b2,	// (0x00058d2a) bg_cell_gallery_focus_pane

0xe0c4,	// (0x00058d3c) cell_gallery_pane_g1_ParamLimits

0xe0c4,	// (0x00058d3c) cell_gallery_pane_g1

0x9741,	// (0x000543b9) cell_gallery_pane_g2_ParamLimits

0x9741,	// (0x000543b9) cell_gallery_pane_g2

0x974e,	// (0x000543c6) cell_gallery_pane_g3_ParamLimits

0x974e,	// (0x000543c6) cell_gallery_pane_g3

0xe0d0,	// (0x00058d48) cell_gallery_pane_g4_ParamLimits

0xe0d0,	// (0x00058d48) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0005a355) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0005a355) cell_gallery_pane_g

0xe0dc,	// (0x00058d54) bg_cell_gallery_focus_pane_g1

0xe0e4,	// (0x00058d5c) bg_cell_gallery_focus_pane_g2

0xe0ec,	// (0x00058d64) bg_cell_gallery_focus_pane_g3

0xe0f4,	// (0x00058d6c) bg_cell_gallery_focus_pane_g4

0xe0fc,	// (0x00058d74) bg_cell_gallery_focus_pane_g5

0xe104,	// (0x00058d7c) bg_cell_gallery_focus_pane_g6

0xe10c,	// (0x00058d84) bg_cell_gallery_focus_pane_g7

0xe114,	// (0x00058d8c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0005a35e) bg_cell_gallery_focus_pane_g

0xe11c,	// (0x00058d94) aid_firma_cardinal

0xe130,	// (0x00058da8) blid_firmament_pane_t1

0xe147,	// (0x00058dbf) blid_firmament_pane_t2

0xe15e,	// (0x00058dd6) blid_firmament_pane_t3

0xe175,	// (0x00058ded) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0005a36f) blid_firmament_pane_t

0xe18c,	// (0x00058e04) blid_sat_info_pane

0xe19c,	// (0x00058e14) blid_sat_info_pane_g1

0xe19c,	// (0x00058e14) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0005a378) blid_sat_info_pane_g

0xe1a6,	// (0x00058e1e) blid_sat_info_pane_t1

0xe1b4,	// (0x00058e2c) smil2_volume_content_pane

0xe1bd,	// (0x00058e35) smil2_volume_pane_g1

0xde31,	// (0x00058aa9) smil2_volume_content_pane_g1

0xe1c5,	// (0x00058e3d) smil2_volume_content_pane_g2

0xe1ce,	// (0x00058e46) smil2_volume_content_pane_g3

0xe1d7,	// (0x00058e4f) smil2_volume_content_pane_g4

0xe1e0,	// (0x00058e58) smil2_volume_content_pane_g5

0xe1e9,	// (0x00058e61) smil2_volume_content_pane_g6

0xe1f2,	// (0x00058e6a) smil2_volume_content_pane_g7

0xe1fb,	// (0x00058e73) smil2_volume_content_pane_g8

0xe204,	// (0x00058e7c) smil2_volume_content_pane_g9

0xe20d,	// (0x00058e85) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0005a37d) smil2_volume_content_pane_g

0x6753,	// (0x000513cb) cale_week_day_heading_pane_t1_ParamLimits

0x676c,	// (0x000513e4) cale_week_day_heading_pane_t2_ParamLimits

0x6785,	// (0x000513fd) cale_week_day_heading_pane_t3_ParamLimits

0x679e,	// (0x00051416) cale_week_day_heading_pane_t4_ParamLimits

0x67b7,	// (0x0005142f) cale_week_day_heading_pane_t5_ParamLimits

0x67d0,	// (0x00051448) cale_week_day_heading_pane_t6_ParamLimits

0x67e9,	// (0x00051461) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00059e69) cale_week_day_heading_pane_t_ParamLimits

0x30c0,	// (0x0004dd38) bg_cale_side_pane_ParamLimits

0x6802,	// (0x0005147a) cale_week_time_pane_t1_ParamLimits

0x681a,	// (0x00051492) cale_week_time_pane_t2_ParamLimits

0x6832,	// (0x000514aa) cale_week_time_pane_t3_ParamLimits

0x684a,	// (0x000514c2) cale_week_time_pane_t4_ParamLimits

0x6862,	// (0x000514da) cale_week_time_pane_t5_ParamLimits

0x687a,	// (0x000514f2) cale_week_time_pane_t6_ParamLimits

0x6892,	// (0x0005150a) cale_week_time_pane_t7_ParamLimits

0x68b2,	// (0x0005152a) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00059e78) cale_week_time_pane_t_ParamLimits

0x68d2,	// (0x0005154a) cell_cale_week_pane_g2_ParamLimits

0x30c0,	// (0x0004dd38) bg_cale_side_pane_cp01_ParamLimits

0x7928,	// (0x000525a0) cale_month_week_pane_t1_ParamLimits

0x793f,	// (0x000525b7) cale_month_week_pane_t2_ParamLimits

0x7956,	// (0x000525ce) cale_month_week_pane_t3_ParamLimits

0x796d,	// (0x000525e5) cale_month_week_pane_t4_ParamLimits

0x7984,	// (0x000525fc) cale_month_week_pane_t5_ParamLimits

0x799f,	// (0x00052617) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00059f51) cale_month_week_pane_t_ParamLimits

0x7a84,	// (0x000526fc) cell_cale_month_pane_g1_ParamLimits

0x050a,	// (0x0004b182) main_cale_event_viewer_pane

0x050a,	// (0x0004b182) listscroll_cale_event_viewer_pane

0xe216,	// (0x00058e8e) list_cale_ev_pane

0xe21e,	// (0x00058e96) scroll_pane_cp023

0xe22a,	// (0x00058ea2) field_cale_ev_pane_ParamLimits

0xe22a,	// (0x00058ea2) field_cale_ev_pane

0xe248,	// (0x00058ec0) field_cale_ev_content_pane_ParamLimits

0xe248,	// (0x00058ec0) field_cale_ev_content_pane

0xe254,	// (0x00058ecc) field_cale_ev_pane_g1_ParamLimits

0xe254,	// (0x00058ecc) field_cale_ev_pane_g1

0xe260,	// (0x00058ed8) field_cale_ev_pane_g2_ParamLimits

0xe260,	// (0x00058ed8) field_cale_ev_pane_g2

0xe278,	// (0x00058ef0) field_cale_ev_pane_g3_ParamLimits

0xe278,	// (0x00058ef0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0005a392) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0005a392) field_cale_ev_pane_g

0xe290,	// (0x00058f08) field_cale_ev_pane_t1_ParamLimits

0xe290,	// (0x00058f08) field_cale_ev_pane_t1

0xe2a7,	// (0x00058f1f) field_cale_ev_content_pane_t1_ParamLimits

0xe2a7,	// (0x00058f1f) field_cale_ev_content_pane_t1

0x3bc8,	// (0x0004e840) bg_button_pane_cp01

0x2f80,	// (0x0004dbf8) listscroll_cale_week_pane_ParamLimits

0x652f,	// (0x000511a7) popup_toolbar_window_cp01

0x30ae,	// (0x0004dd26) listscroll_cale_week_pane_t1_ParamLimits

0x2f80,	// (0x0004dbf8) listscroll_cale_day_pane_ParamLimits

0x652f,	// (0x000511a7) popup_toolbar_window_cp02

0x30ae,	// (0x0004dd26) listscroll_cale_day_pane_t1_ParamLimits

0x2f80,	// (0x0004dbf8) main_cale_month_pane_ParamLimits

0x8e9e,	// (0x00053b16) popup_toolbar_window_cp03_ParamLimits

0x8e9e,	// (0x00053b16) popup_toolbar_window_cp03

0x8817,	// (0x0005348f) main_image_pane_g2_ParamLimits

0x8817,	// (0x0005348f) main_image_pane_g2

0x8823,	// (0x0005349b) main_image_pane_g3_ParamLimits

0x8823,	// (0x0005349b) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005a183) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005a183) main_image_pane_g

0x3ce2,	// (0x0004e95a) main_image_pane_t1_ParamLimits

0x882f,	// (0x000534a7) main_image_pane_t2_ParamLimits

0x882f,	// (0x000534a7) main_image_pane_t2

0x8841,	// (0x000534b9) main_image_pane_t3_ParamLimits

0x8841,	// (0x000534b9) main_image_pane_t3

0x8853,	// (0x000534cb) main_image_pane_t4_ParamLimits

0x8853,	// (0x000534cb) main_image_pane_t4

0x0003,

0xf512,	// (0x0005a18a) main_image_pane_t_ParamLimits

0xf512,	// (0x0005a18a) main_image_pane_t

0x8865,	// (0x000534dd) popup_image_details_window_cp01

0x886f,	// (0x000534e7) popup_toobar_trans_pane_cp01_ParamLimits

0x886f,	// (0x000534e7) popup_toobar_trans_pane_cp01

0x8e1b,	// (0x00053a93) popup_image_details_window_ParamLimits

0x8e1b,	// (0x00053a93) popup_image_details_window

0x4e85,	// (0x0004fafd) popup_image_focus_window

0x9139,	// (0x00053db1) camera2_autofocus_pane_ParamLimits

0x9139,	// (0x00053db1) camera2_autofocus_pane

0x050a,	// (0x0004b182) bg_popup_sub_pane_cp06

0xe2c5,	// (0x00058f3d) popup_image_focus_window_g1

0xe2cd,	// (0x00058f45) popup_image_focus_window_g2

0xe2d5,	// (0x00058f4d) popup_image_focus_window_g3

0xe2dd,	// (0x00058f55) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0005a399) popup_image_focus_window_g

0xe2e5,	// (0x00058f5d) popup_image_focus_window_t1

0xe2f3,	// (0x00058f6b) popup_image_focus_window_t2

0xe303,	// (0x00058f7b) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0005a3a2) popup_image_focus_window_t

0xe311,	// (0x00058f89) camera2_autofocus_pane_g1

0x412d,	// (0x0004eda5) bg_tb_trans_pane_cp01

0xe31f,	// (0x00058f97) popup_image_details_window_g1

0xe332,	// (0x00058faa) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0005a3b4) popup_image_details_window_g

0xe35b,	// (0x00058fd3) popup_image_details_window_t1

0xe36d,	// (0x00058fe5) popup_image_details_window_t2

0xe386,	// (0x00058ffe) popup_image_details_window_t3

0xe39a,	// (0x00059012) popup_image_details_window_t4

0xe3b5,	// (0x0005902d) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0005a3bb) popup_image_details_window_t

0x2f6c,	// (0x0004dbe4) bg_calc_paper_pane_ParamLimits

0x62af,	// (0x00050f27) grid_highlight_pane_cp013

0x62b9,	// (0x00050f31) list_calc_pane_ParamLimits

0x62cb,	// (0x00050f43) scroll_pane_cp024

0x2f80,	// (0x0004dbf8) bg_calc_display_pane_ParamLimits

0x62d3,	// (0x00050f4b) calc_display_pane_t1_ParamLimits

0x62e8,	// (0x00050f60) calc_display_pane_t2_ParamLimits

0x62fd,	// (0x00050f75) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00059deb) calc_display_pane_t_ParamLimits

0x63d9,	// (0x00051051) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00059e08) cell_calc_pane_g

0x63e2,	// (0x0005105a) cell_calc_pane_t1

0x2fdf,	// (0x0004dc57) grid_highlight_pane_cp02_ParamLimits

0x2ff5,	// (0x0004dc6d) toolbar_button_pane_cp01_ParamLimits

0x2ff5,	// (0x0004dc6d) toolbar_button_pane_cp01

0x3d27,	// (0x0004e99f) temp_image_control_pane_ParamLimits

0x3d27,	// (0x0004e99f) temp_image_control_pane

0x412d,	// (0x0004eda5) main_mp3_pane

0xe3cf,	// (0x00059047) temp_image_control_pane_g1_ParamLimits

0xe3cf,	// (0x00059047) temp_image_control_pane_g1

0xe3dd,	// (0x00059055) temp_image_control_pane_g2_ParamLimits

0xe3dd,	// (0x00059055) temp_image_control_pane_g2

0xe3ef,	// (0x00059067) temp_image_control_pane_g3_ParamLimits

0xe3ef,	// (0x00059067) temp_image_control_pane_g3

0x978b,	// (0x00054403) temp_image_control_pane_g4_ParamLimits

0x978b,	// (0x00054403) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0005a3c6) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0005a3c6) temp_image_control_pane_g

0xe3cf,	// (0x00059047) main_mp3_pane_g1

0x979c,	// (0x00054414) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0005a3cf) main_mp3_pane_g

0xe432,	// (0x000590aa) main_mp3_pane_t1

0x3125,	// (0x0004dd9d) main_camera_pane_g8_ParamLimits

0x3125,	// (0x0004dd9d) main_camera_pane_g8

0x6b68,	// (0x000517e0) main_video_pane_g7_ParamLimits

0x6b68,	// (0x000517e0) main_video_pane_g7

0x9281,	// (0x00053ef9) main_camera2_pane_t7_ParamLimits

0x9281,	// (0x00053ef9) main_camera2_pane_t7

0x326b,	// (0x0004dee3) scroll_pane_cp025_ParamLimits

0x326b,	// (0x0004dee3) scroll_pane_cp025

0x327f,	// (0x0004def7) scroll_pane_cp026_ParamLimits

0x327f,	// (0x0004def7) scroll_pane_cp026

0x328e,	// (0x0004df06) wml_content_pane_ParamLimits

0x050a,	// (0x0004b182) main_touch_calib_pane

0x9840,	// (0x000544b8) main_touch_calib_pane_g1

0x984c,	// (0x000544c4) main_touch_calib_pane_g2

0x9858,	// (0x000544d0) main_touch_calib_pane_g3

0x9864,	// (0x000544dc) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0005a3ed) main_touch_calib_pane_g

0x9870,	// (0x000544e8) main_touch_calib_pane_t1

0x9887,	// (0x000544ff) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005a3f6) main_touch_calib_pane_t

0x39a0,	// (0x0004e618) mup_progress_pane_cp02

0x39bf,	// (0x0004e637) navi_pane_g1

0x3a21,	// (0x0004e699) navi_pane_mp_t3

0x412d,	// (0x0004eda5) main_mp3_pane_ParamLimits

0x8edc,	// (0x00053b54) navi_pane_ParamLimits

0xe3cf,	// (0x00059047) main_mp3_pane_g1_ParamLimits

0x979c,	// (0x00054414) main_mp3_pane_g2_ParamLimits

0x97a8,	// (0x00054420) main_mp3_pane_g3_ParamLimits

0x97a8,	// (0x00054420) main_mp3_pane_g3

0x97b4,	// (0x0005442c) main_mp3_pane_g4_ParamLimits

0x97b4,	// (0x0005442c) main_mp3_pane_g4

0xe3ff,	// (0x00059077) main_mp3_pane_g5_ParamLimits

0xe3ff,	// (0x00059077) main_mp3_pane_g5

0xe40d,	// (0x00059085) main_mp3_pane_g6_ParamLimits

0xe40d,	// (0x00059085) main_mp3_pane_g6

0xe41a,	// (0x00059092) main_mp3_pane_g7_ParamLimits

0xe41a,	// (0x00059092) main_mp3_pane_g7

0xe426,	// (0x0005909e) main_mp3_pane_g8_ParamLimits

0xe426,	// (0x0005909e) main_mp3_pane_g8

0xf757,	// (0x0005a3cf) main_mp3_pane_g_ParamLimits

0x97c0,	// (0x00054438) main_mp3_pane_t2

0x97d0,	// (0x00054448) main_mp3_pane_t3

0xe440,	// (0x000590b8) main_mp3_pane_t4

0xe44e,	// (0x000590c6) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0005a3e0) main_mp3_pane_t

0xe45c,	// (0x000590d4) mup_progress_pane_cp01

0x0538,	// (0x0004b1b0) aid_zoom_text_secondary2

0xe216,	// (0x00058e8e) list_cale_ev2_pane

0xe21e,	// (0x00058e96) scroll_pane_cp023_ParamLimits

0x98dc,	// (0x00054554) field_cale_ev2_pane_ParamLimits

0x98dc,	// (0x00054554) field_cale_ev2_pane

0x094f,	// (0x0004b5c7) field_cale_ev2_pane_g1_ParamLimits

0x094f,	// (0x0004b5c7) field_cale_ev2_pane_g1

0x095b,	// (0x0004b5d3) field_cale_ev2_pane_g2_ParamLimits

0x095b,	// (0x0004b5d3) field_cale_ev2_pane_g2

0x0973,	// (0x0004b5eb) field_cale_ev2_pane_g3_ParamLimits

0x0973,	// (0x0004b5eb) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005a401) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005a401) field_cale_ev2_pane_g

0x9905,	// (0x0005457d) field_cale_ev2_pane_t1_ParamLimits

0x9905,	// (0x0005457d) field_cale_ev2_pane_t1

0x991c,	// (0x00054594) field_cale_ev2_pane_t2_ParamLimits

0x991c,	// (0x00054594) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005a40a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005a40a) field_cale_ev2_pane_t

0x86f7,	// (0x0005336f) main_postcard_pane_g5_ParamLimits

0x86f7,	// (0x0005336f) main_postcard_pane_g5

0x8705,	// (0x0005337d) main_postcard_pane_g6_ParamLimits

0x8705,	// (0x0005337d) main_postcard_pane_g6

0x69b0,	// (0x00051628) camera2_autofocus_pane_cp_ParamLimits

0x69b0,	// (0x00051628) camera2_autofocus_pane_cp

0x412d,	// (0x0004eda5) main_mup3_pane

0x9951,	// (0x000545c9) main_mup3_pane_g1_ParamLimits

0x9951,	// (0x000545c9) main_mup3_pane_g1

0x9972,	// (0x000545ea) main_mup3_pane_g2_ParamLimits

0x9972,	// (0x000545ea) main_mup3_pane_g2

0x99ea,	// (0x00054662) main_mup3_pane_g3_ParamLimits

0x99ea,	// (0x00054662) main_mup3_pane_g3

0x9a29,	// (0x000546a1) main_mup3_pane_g4_ParamLimits

0x9a29,	// (0x000546a1) main_mup3_pane_g4

0x9a68,	// (0x000546e0) main_mup3_pane_g5_ParamLimits

0x9a68,	// (0x000546e0) main_mup3_pane_g5

0x9aa7,	// (0x0005471f) main_mup3_pane_g6_ParamLimits

0x9aa7,	// (0x0005471f) main_mup3_pane_g6

0xe464,	// (0x000590dc) main_mup3_pane_g7_ParamLimits

0xe464,	// (0x000590dc) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005a41a) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005a41a) main_mup3_pane_g

0x9b19,	// (0x00054791) main_mup3_pane_t1_ParamLimits

0x9b19,	// (0x00054791) main_mup3_pane_t1

0x9b84,	// (0x000547fc) main_mup3_pane_t2_ParamLimits

0x9b84,	// (0x000547fc) main_mup3_pane_t2

0x9c49,	// (0x000548c1) main_mup3_pane_t4_ParamLimits

0x9c49,	// (0x000548c1) main_mup3_pane_t4

0x9c97,	// (0x0005490f) main_mup3_pane_t5_ParamLimits

0x9c97,	// (0x0005490f) main_mup3_pane_t5

0x9d3f,	// (0x000549b7) main_mup3_pane_t6_ParamLimits

0x9d3f,	// (0x000549b7) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005a42b) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005a42b) main_mup3_pane_t

0x9de7,	// (0x00054a5f) mup3_progress_pane_ParamLimits

0x9de7,	// (0x00054a5f) mup3_progress_pane

0x9e52,	// (0x00054aca) popup_mup3_control_window_ParamLimits

0x9e52,	// (0x00054aca) popup_mup3_control_window

0xe472,	// (0x000590ea) popup_mup3_text_window

0x9e6b,	// (0x00054ae3) mup3_progress_pane_t1

0x9e82,	// (0x00054afa) mup3_progress_pane_t2

0xe47a,	// (0x000590f2) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005a438) mup3_progress_pane_t

0xe491,	// (0x00059109) mup_progress_pane_cp03

0x050a,	// (0x0004b182) bg_tb_trans_pane_cp04

0x9e99,	// (0x00054b11) mup3_volume_pane

0x9ea1,	// (0x00054b19) popup_mup3_control_window_g1

0x9eaa,	// (0x00054b22) mup3_volume_pane_g1

0x9eb3,	// (0x00054b2b) mup3_volume_pane_g2

0x9ebc,	// (0x00054b34) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005a43f) mup3_volume_pane_g

0x050a,	// (0x0004b182) bg_tb_trans_pane_cp03

0xe4a1,	// (0x00059119) popup_mup3_text_window_g1

0xe4a9,	// (0x00059121) popup_mup3_text_window_t1

0x2fc8,	// (0x0004dc40) list_calc_item_pane_g1_ParamLimits

0xdee7,	// (0x00058b5f) mup_volume_pane_cp_g1

0x989e,	// (0x00054516) main_touch_calib_pane_t3

0x98b2,	// (0x0005452a) main_touch_calib_pane_t4

0x98c6,	// (0x0005453e) main_touch_calib_pane_t5

0x0514,	// (0x0004b18c) aid_cell_size_toolbar2

0x051c,	// (0x0004b194) aid_popup3_width_pane

0x0528,	// (0x0004b1a0) aid_zoom_text_msg_primary

0x6987,	// (0x000515ff) vorec_t7

0x2f8c,	// (0x0004dc04) bg_calc_paper_pane_g1_ParamLimits

0x2fa4,	// (0x0004dc1c) bg_calc_paper_pane_g2_ParamLimits

0x2f98,	// (0x0004dc10) bg_calc_paper_pane_g3_ParamLimits

0x2fbc,	// (0x0004dc34) bg_calc_paper_pane_g4_ParamLimits

0x2fb0,	// (0x0004dc28) bg_calc_paper_pane_g5_ParamLimits

0x633c,	// (0x00050fb4) bg_calc_paper_pane_g6_ParamLimits

0x634d,	// (0x00050fc5) bg_calc_paper_pane_g7_ParamLimits

0x635e,	// (0x00050fd6) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00059df2) bg_calc_paper_pane_g_ParamLimits

0x636f,	// (0x00050fe7) calc_bg_paper_pane_g9_ParamLimits

0x6a97,	// (0x0005170f) image_qvga_pane_ParamLimits

0x6a97,	// (0x0005170f) image_qvga_pane

0x2ea9,	// (0x0004db21) bg_popup_sub_pane_cp04_ParamLimits

0x3c5e,	// (0x0004e8d6) popup_mup_playback_window_g1_ParamLimits

0x3c6a,	// (0x0004e8e2) popup_mup_playback_window_t1_ParamLimits

0x3c7f,	// (0x0004e8f7) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005a17e) popup_mup_playback_window_t_ParamLimits

0x93b0,	// (0x00054028) main_mup2_pane_g3_ParamLimits

0x93b0,	// (0x00054028) main_mup2_pane_g3

0x6da6,	// (0x00051a1e) popup_toolbar_window_cp04

0x4061,	// (0x0004ecd9) popup_call2_audio_second_window_g3_ParamLimits

0x4061,	// (0x0004ecd9) popup_call2_audio_second_window_g3

0x4485,	// (0x0004f0fd) popup_call2_audio_first_window_g4_ParamLimits

0x4485,	// (0x0004f0fd) popup_call2_audio_first_window_g4

0x4b04,	// (0x0004f77c) popup_call2_audio_in_window_g4_ParamLimits

0x4b04,	// (0x0004f77c) popup_call2_audio_in_window_g4

0x880a,	// (0x00053482) aid_area_sk_bg_cut_ParamLimits

0x880a,	// (0x00053482) aid_area_sk_bg_cut

0x3c94,	// (0x0004e90c) aid_area_sk_bg_cut_2_ParamLimits

0x3c94,	// (0x0004e90c) aid_area_sk_bg_cut_2

0x9731,	// (0x000543a9) aid_placing_details_win

0x9739,	// (0x000543b1) aid_placing_details_win_2

0xe311,	// (0x00058f89) camera2_autofocus_pane_g1_ParamLimits

0x5f17,	// (0x00050b8f) popup_fixed_preview_cale_window_ParamLimits

0x5f17,	// (0x00050b8f) popup_fixed_preview_cale_window

0x3a82,	// (0x0004e6fa) navi_slider_pane_g3

0x3a79,	// (0x0004e6f1) navi_slider_pane_g4

0x3a70,	// (0x0004e6e8) navi_slider_pane_g5

0x3a82,	// (0x0004e6fa) navi_slider_pane_g6

0x8069,	// (0x00052ce1) navi_slider_pane_g7

0x3b95,	// (0x0004e80d) mup_scale_pane_g3

0x3b9e,	// (0x0004e816) mup_scale_pane_g4

0x3ba7,	// (0x0004e81f) mup_scale_pane_g5

0x84aa,	// (0x00053122) mup_scale_pane_g6

0x84b3,	// (0x0005312b) mup_scale_pane_g7

0x3a82,	// (0x0004e6fa) cams2_slider_pane_g3

0xdf71,	// (0x00058be9) cams2_slider_pane_g4

0x9689,	// (0x00054301) cams2_slider_pane_g5

0x3a82,	// (0x0004e6fa) cams2_slider_pane_g6

0x9691,	// (0x00054309) cams2_slider_pane_g7

0xe19c,	// (0x00058e14) camera2_autofocus_pane_cp_g1

0xe4b7,	// (0x0005912f) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4b7,	// (0x0005912f) bg_popup_preview_window_pane_cp02

0xe4c3,	// (0x0005913b) list_fp_cale_pane_ParamLimits

0xe4c3,	// (0x0005913b) list_fp_cale_pane

0xe4cf,	// (0x00059147) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4cf,	// (0x00059147) popup_fixed_preview_cale_window_t1

0x9ec5,	// (0x00054b3d) popup_fixed_preview_cale_window_t2_ParamLimits

0x9ec5,	// (0x00054b3d) popup_fixed_preview_cale_window_t2

0x9eda,	// (0x00054b52) popup_fixed_preview_cale_window_t3_ParamLimits

0x9eda,	// (0x00054b52) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005a446) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005a446) popup_fixed_preview_cale_window_t

0x9eef,	// (0x00054b67) list_single_fp_cale_pane_ParamLimits

0x9eef,	// (0x00054b67) list_single_fp_cale_pane

0xe4ed,	// (0x00059165) list_single_fp_cale_pane_g1_ParamLimits

0xe4ed,	// (0x00059165) list_single_fp_cale_pane_g1

0xe4f9,	// (0x00059171) list_single_fp_cale_pane_g2_ParamLimits

0xe4f9,	// (0x00059171) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005a44d) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005a44d) list_single_fp_cale_pane_g

0xe512,	// (0x0005918a) list_single_fp_cale_pane_t1_ParamLimits

0xe512,	// (0x0005918a) list_single_fp_cale_pane_t1

0xe524,	// (0x0005919c) list_single_fp_cale_pane_t2_ParamLimits

0xe524,	// (0x0005919c) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005a454) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005a454) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x050a,	// (0x0004b182) main_dialer_pane

0x9f01,	// (0x00054b79) aid_cell_size_keypad

0x9f0b,	// (0x00054b83) dialer_ne_pane

0x9f15,	// (0x00054b8d) grid_dialer_command_1_pane

0x9f1d,	// (0x00054b95) grid_dialer_command_2_pane

0x9f25,	// (0x00054b9d) grid_dialer_keypad_pane

0x9f37,	// (0x00054baf) bg_popup_call_pane_cp06_ParamLimits

0x9f37,	// (0x00054baf) bg_popup_call_pane_cp06

0x9f43,	// (0x00054bbb) dialer_ne_clear_pane_ParamLimits

0x9f43,	// (0x00054bbb) dialer_ne_clear_pane

0xe557,	// (0x000591cf) dialer_ne_pane_g1

0xe55f,	// (0x000591d7) dialer_ne_pane_t1_ParamLimits

0xe55f,	// (0x000591d7) dialer_ne_pane_t1

0x9f4f,	// (0x00054bc7) dialer_ne_pane_t2_ParamLimits

0x9f4f,	// (0x00054bc7) dialer_ne_pane_t2

0x9f6c,	// (0x00054be4) dialer_ne_pane_t3_ParamLimits

0x9f6c,	// (0x00054be4) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005a459) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005a459) dialer_ne_pane_t

0x9f90,	// (0x00054c08) dialer_ne_pane_t3_copy1_ParamLimits

0x9f90,	// (0x00054c08) dialer_ne_pane_t3_copy1

0x9fb4,	// (0x00054c2c) cell_dialer_keypad_pane_ParamLimits

0x9fb4,	// (0x00054c2c) cell_dialer_keypad_pane

0x9fcb,	// (0x00054c43) cell_dialer_command_1_pane_ParamLimits

0x9fcb,	// (0x00054c43) cell_dialer_command_1_pane

0x9fe1,	// (0x00054c59) cell_dialer_command_2_pane_ParamLimits

0x9fe1,	// (0x00054c59) cell_dialer_command_2_pane

0xe571,	// (0x000591e9) bg_button_pane_cp02_ParamLimits

0xe571,	// (0x000591e9) bg_button_pane_cp02

0x9ff0,	// (0x00054c68) cell_dialer_keypad_pane_g1_ParamLimits

0x9ff0,	// (0x00054c68) cell_dialer_keypad_pane_g1

0xe571,	// (0x000591e9) bg_button_pane_cp03_ParamLimits

0xe571,	// (0x000591e9) bg_button_pane_cp03

0xa005,	// (0x00054c7d) cell_dialer_command_1_pane_g1_ParamLimits

0xa005,	// (0x00054c7d) cell_dialer_command_1_pane_g1

0xe57d,	// (0x000591f5) bg_button_pane_cp04

0xa019,	// (0x00054c91) cell_dialer_command_2_pane_g1

0x3a5f,	// (0x0004e6d7) bg_button_pane_cp06

0xe585,	// (0x000591fd) dialer_ne_clear_pane_g1

0x7fac,	// (0x00052c24) navi_pane_g2

0x7fda,	// (0x00052c52) navi_pane_g3

0x0002,

0xf409,	// (0x0005a081) navi_pane_g

0x8005,	// (0x00052c7d) navi_pane_mv_g2

0x802c,	// (0x00052ca4) navi_pane_mv_g5

0x8034,	// (0x00052cac) navi_pane_mv_t1

0x2f80,	// (0x0004dbf8) main_clock2_pane

0xa048,	// (0x00054cc0) main_clock2_list_pane_ParamLimits

0xa048,	// (0x00054cc0) main_clock2_list_pane

0xa070,	// (0x00054ce8) main_clock2_pane_t1_ParamLimits

0xa070,	// (0x00054ce8) main_clock2_pane_t1

0xa09e,	// (0x00054d16) main_clock2_pane_t2_ParamLimits

0xa09e,	// (0x00054d16) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005a460) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005a460) main_clock2_pane_t

0xa105,	// (0x00054d7d) popup_clock_analogue_window_cp03_ParamLimits

0xa105,	// (0x00054d7d) popup_clock_analogue_window_cp03

0xa123,	// (0x00054d9b) popup_clock_digital_window_cp02_ParamLimits

0xa123,	// (0x00054d9b) popup_clock_digital_window_cp02

0xa190,	// (0x00054e08) main_clock2_list_single_pane_ParamLimits

0xa190,	// (0x00054e08) main_clock2_list_single_pane

0x3a5f,	// (0x0004e6d7) list_highlight_pane_cp05

0xe58d,	// (0x00059205) main_clock2_list_single_pane_t1

0x6da6,	// (0x00051a1e) popup_toolbar_window_cp04_ParamLimits

0x975b,	// (0x000543d3) camera2_autofocus_pane_g2_ParamLimits

0x975b,	// (0x000543d3) camera2_autofocus_pane_g2

0x9767,	// (0x000543df) camera2_autofocus_pane_g3_ParamLimits

0x9767,	// (0x000543df) camera2_autofocus_pane_g3

0x9773,	// (0x000543eb) camera2_autofocus_pane_g4_ParamLimits

0x9773,	// (0x000543eb) camera2_autofocus_pane_g4

0x977f,	// (0x000543f7) camera2_autofocus_pane_g5_ParamLimits

0x977f,	// (0x000543f7) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0005a3a9) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0005a3a9) camera2_autofocus_pane_g

0x9931,	// (0x000545a9) camera2_autofocus_pane_cp_g2

0x9939,	// (0x000545b1) camera2_autofocus_pane_cp_g3

0x9941,	// (0x000545b9) camera2_autofocus_pane_cp_g4

0x9949,	// (0x000545c1) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005a40f) camera2_autofocus_pane_cp_g

0x9f2f,	// (0x00054ba7) popup_dialer_spcha_window

0x050a,	// (0x0004b182) bg_popup_sub_pane_cp07

0xe59b,	// (0x00059213) list_spcha_pane

0xe5a3,	// (0x0005921b) list_single_spcha_pane_ParamLimits

0xe5a3,	// (0x0005921b) list_single_spcha_pane

0x050a,	// (0x0004b182) list_highlight_pane_cp06

0xe5b4,	// (0x0005922c) list_single_spcha_pane_t1

0x48ae,	// (0x0004f526) popup_call2_audio_out_window_g4_ParamLimits

0x48ae,	// (0x0004f526) popup_call2_audio_out_window_g4

0x050a,	// (0x0004b182) main_imed2_pane

0x4e8d,	// (0x0004fb05) popup_imed_adjust2_window

0x8e29,	// (0x00053aa1) popup_imed_trans_window_ParamLimits

0x8e29,	// (0x00053aa1) popup_imed_trans_window

0xdfda,	// (0x00058c52) popup_blid_sat_info2_window_t1

0xdfe8,	// (0x00058c60) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0005a33e) popup_blid_sat_info2_window_t

0xa23a,	// (0x00054eb2) aid_size_cell_colour_35

0xa254,	// (0x00054ecc) aid_size_cell_colour_112

0xa26b,	// (0x00054ee3) aid_size_cell_effect

0x412d,	// (0x0004eda5) bg_tb_trans_pane_cp02

0x413b,	// (0x0004edb3) heading_imed_pane

0xa285,	// (0x00054efd) listscroll_imed_pane

0xe5c2,	// (0x0005923a) heading_imed_pane_g1

0xe5ca,	// (0x00059242) heading_imed_pane_t1

0xe5d8,	// (0x00059250) grid_imed_colour_35_pane_ParamLimits

0xe5d8,	// (0x00059250) grid_imed_colour_35_pane

0xa291,	// (0x00054f09) grid_imed_effect_pane

0xe5ef,	// (0x00059267) list_imed_aspect_pane

0xa2a1,	// (0x00054f19) scroll_pane_cp027_ParamLimits

0xa2a1,	// (0x00054f19) scroll_pane_cp027

0xa2ad,	// (0x00054f25) cell_imed_effect_pane_ParamLimits

0xa2ad,	// (0x00054f25) cell_imed_effect_pane

0xe5f7,	// (0x0005926f) cell_imed_colour_pane_ParamLimits

0xe5f7,	// (0x0005926f) cell_imed_colour_pane

0xe639,	// (0x000592b1) cell_imed_colour_pane_g1_ParamLimits

0xe639,	// (0x000592b1) cell_imed_colour_pane_g1

0xe64a,	// (0x000592c2) hgihlgiht_grid_pane_cp016_ParamLimits

0xe64a,	// (0x000592c2) hgihlgiht_grid_pane_cp016

0xa2c5,	// (0x00054f3d) cell_imed_effect_pane_g1

0xa2cd,	// (0x00054f45) grid_highlight_pane_cp017

0xe65b,	// (0x000592d3) list_imed_single_pane_ParamLimits

0xe65b,	// (0x000592d3) list_imed_single_pane

0x050a,	// (0x0004b182) list_highlight_pane_cp07

0xe670,	// (0x000592e8) list_imed_aspect_pane_comp1_t1

0x4e65,	// (0x0004fadd) bg_tb_trans_pane_cp05

0xe692,	// (0x0005930a) popup_imed_adjust2_window_g1

0xe6b9,	// (0x00059331) popup_imed_adjust2_window_t1

0xe6d1,	// (0x00059349) slider_imed_adjust_pane

0xe6e5,	// (0x0005935d) slider_imed_adjust_pane_g1

0xe6f5,	// (0x0005936d) slider_imed_adjust_pane_g2

0xe705,	// (0x0005937d) slider_imed_adjust_pane_g3

0xe716,	// (0x0005938e) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005a47d) slider_imed_adjust_pane_g

0xa2d6,	// (0x00054f4e) aid_size_cell_clipart2

0xa2e2,	// (0x00054f5a) grid_imed_clipart_pane

0xe727,	// (0x0005939f) scroll_pane_cp031

0xa2ec,	// (0x00054f64) cell_imed_clipart_pane_ParamLimits

0xa2ec,	// (0x00054f64) cell_imed_clipart_pane

0xa30e,	// (0x00054f86) cell_imed_clipart_pane_g1

0x050a,	// (0x0004b182) grid_highlight_pane_cp014

0xa054,	// (0x00054ccc) main_clock2_pane_g1_ParamLimits

0xa054,	// (0x00054ccc) main_clock2_pane_g1

0xa13b,	// (0x00054db3) aid_call2_pane_cp10

0xa14d,	// (0x00054dc5) aid_call_pane_cp10

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g1

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g2

0xa15f,	// (0x00054dd7) popup_clock_analogue_window_cp10_g3

0xa15f,	// (0x00054dd7) popup_clock_analogue_window_cp10_g4

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005a46b) popup_clock_analogue_window_cp10_g

0xa171,	// (0x00054de9) popup_clock_analogue_window_cp10_t1

0xa1a2,	// (0x00054e1a) clock_digital_number_pane_cp10_ParamLimits

0xa1a2,	// (0x00054e1a) clock_digital_number_pane_cp10

0xa1ba,	// (0x00054e32) clock_digital_number_pane_cp11_ParamLimits

0xa1ba,	// (0x00054e32) clock_digital_number_pane_cp11

0xa1d2,	// (0x00054e4a) clock_digital_number_pane_cp12_ParamLimits

0xa1d2,	// (0x00054e4a) clock_digital_number_pane_cp12

0xa1ea,	// (0x00054e62) clock_digital_number_pane_cp13_ParamLimits

0xa1ea,	// (0x00054e62) clock_digital_number_pane_cp13

0xa202,	// (0x00054e7a) clock_digital_separator_pane_cp10_ParamLimits

0xa202,	// (0x00054e7a) clock_digital_separator_pane_cp10

0xa21a,	// (0x00054e92) popup_clock_digital_window_cp02_t1_ParamLimits

0xa21a,	// (0x00054e92) popup_clock_digital_window_cp02_t1

0x2ea1,	// (0x0004db19) clock_digital_number_pane_cp10_g1

0x2ea1,	// (0x0004db19) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005a486) clock_digital_number_pane_cp10_g

0x2ea1,	// (0x0004db19) clock_digital_separator_pane_cp10_g1

0x2ea1,	// (0x0004db19) clock_digital_separator_pane_g2_cp10

0x3a2f,	// (0x0004e6a7) navi_pane_vded_g4

0x3a38,	// (0x0004e6b0) navi_pane_vded_g5

0x3a41,	// (0x0004e6b9) navi_pane_vded_t1

0x050a,	// (0x0004b182) main_vded_pane

0xa317,	// (0x00054f8f) main_vded_pane_g1

0xa323,	// (0x00054f9b) main_vded_pane_g2

0xa32d,	// (0x00054fa5) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005a48b) main_vded_pane_g

0xa337,	// (0x00054faf) main_vded_pane_t1

0xa345,	// (0x00054fbd) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005a492) main_vded_pane_t

0xa353,	// (0x00054fcb) vded_slider_pane

0xa35d,	// (0x00054fd5) vded_video_pane

0xe72f,	// (0x000593a7) vded_video_pane_g1

0xa367,	// (0x00054fdf) vded_video_pane_g2

0xe19c,	// (0x00058e14) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005a497) vded_video_pane_g

0xe739,	// (0x000593b1) vded_slider_pane_g1

0xdee7,	// (0x00058b5f) vded_slider_pane_g2

0xe742,	// (0x000593ba) vded_slider_pane_g3

0xe74b,	// (0x000593c3) vded_slider_pane_g4

0xe754,	// (0x000593cc) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005a49e) vded_slider_pane_g

0x9e44,	// (0x00054abc) mup3_rocker_pane_ParamLimits

0x9e44,	// (0x00054abc) mup3_rocker_pane

0xa370,	// (0x00054fe8) mup3_control_keys_pane_g1

0xa378,	// (0x00054ff0) mup3_control_keys_pane_g2

0xa380,	// (0x00054ff8) mup3_control_keys_pane_g3

0xa388,	// (0x00055000) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005a4a9) mup3_control_keys_pane_g

0x5f35,	// (0x00050bad) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5f35,	// (0x00050bad) popup_toolbar2_fixed_window_cp01

0x9e5e,	// (0x00054ad6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9e5e,	// (0x00054ad6) popup_toolbar2_fixed_window_cp02

0x41ed,	// (0x0004ee65) popup_call2_audio_second_window_t4_ParamLimits

0x41ed,	// (0x0004ee65) popup_call2_audio_second_window_t4

0x471b,	// (0x0004f393) popup_call2_audio_first_window_t6_ParamLimits

0x471b,	// (0x0004f393) popup_call2_audio_first_window_t6

0x49b1,	// (0x0004f629) popup_call2_audio_out_window_t6_ParamLimits

0x49b1,	// (0x0004f629) popup_call2_audio_out_window_t6

0x050a,	// (0x0004b182) main_vitu_pane

0xa398,	// (0x00055010) aid_size_cell_itu_ParamLimits

0xa398,	// (0x00055010) aid_size_cell_itu

0x0c8f,	// (0x0004b907) bg_popup_window_pane_cp08_ParamLimits

0x0c8f,	// (0x0004b907) bg_popup_window_pane_cp08

0xa3a6,	// (0x0005501e) field_vitu_entry_pane_ParamLimits

0xa3a6,	// (0x0005501e) field_vitu_entry_pane

0xa3b5,	// (0x0005502d) grid_vitu_function_pane_ParamLimits

0xa3b5,	// (0x0005502d) grid_vitu_function_pane

0xa3c5,	// (0x0005503d) grid_vitu_itu_pane_ParamLimits

0xa3c5,	// (0x0005503d) grid_vitu_itu_pane

0xa3d5,	// (0x0005504d) cell_vitu_itu_pane_ParamLimits

0xa3d5,	// (0x0005504d) cell_vitu_itu_pane

0xa3ea,	// (0x00055062) cell_vitu_function_pane_ParamLimits

0xa3ea,	// (0x00055062) cell_vitu_function_pane

0x412d,	// (0x0004eda5) bg_popup_sub_pane_cp08_ParamLimits

0x412d,	// (0x0004eda5) bg_popup_sub_pane_cp08

0xa3fc,	// (0x00055074) field_vitu_entry_pane_t1_ParamLimits

0xa3fc,	// (0x00055074) field_vitu_entry_pane_t1

0xe775,	// (0x000593ed) field_vitu_entry_pane_t2_ParamLimits

0xe775,	// (0x000593ed) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005a4b7) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005a4b7) field_vitu_entry_pane_t

0xe792,	// (0x0005940a) bg_button_pane_cp05_ParamLimits

0xe792,	// (0x0005940a) bg_button_pane_cp05

0xa417,	// (0x0005508f) cell_vitu_itu_pane_g1

0xa42f,	// (0x000550a7) cell_vitu_itu_pane_t1_ParamLimits

0xa42f,	// (0x000550a7) cell_vitu_itu_pane_t1

0xa441,	// (0x000550b9) cell_vitu_itu_pane_t2_ParamLimits

0xa441,	// (0x000550b9) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005a4bc) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005a4bc) cell_vitu_itu_pane_t

0xe7a0,	// (0x00059418) bg_button_pane_cp07

0xa476,	// (0x000550ee) cell_vitu_function_pane_g1

0x61da,	// (0x00050e52) main_calc_pane_g1

0x5d3e,	// (0x000509b6) aid_visual_content_pane

0x050a,	// (0x0004b182) main_vradio_pane

0xa47f,	// (0x000550f7) main_vradio_pane_g1_ParamLimits

0xa47f,	// (0x000550f7) main_vradio_pane_g1

0xe7aa,	// (0x00059422) main_vradio_pane_g2_ParamLimits

0xe7aa,	// (0x00059422) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005a4c3) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005a4c3) main_vradio_pane_g

0xa48f,	// (0x00055107) main_vradio_pane_t1_ParamLimits

0xa48f,	// (0x00055107) main_vradio_pane_t1

0xa4a1,	// (0x00055119) main_vradio_pane_t2_ParamLimits

0xa4a1,	// (0x00055119) main_vradio_pane_t2

0xe7b7,	// (0x0005942f) main_vradio_pane_t3_ParamLimits

0xe7b7,	// (0x0005942f) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005a4c8) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005a4c8) main_vradio_pane_t

0xa4b3,	// (0x0005512b) vradio_rocker_control_pane_ParamLimits

0xa4b3,	// (0x0005512b) vradio_rocker_control_pane

0xa4bf,	// (0x00055137) vradio_station_info_pane_ParamLimits

0xa4bf,	// (0x00055137) vradio_station_info_pane

0xe7cb,	// (0x00059443) vradio_frequency_info_pane_ParamLimits

0xe7cb,	// (0x00059443) vradio_frequency_info_pane

0xe19c,	// (0x00058e14) vradio_station_info_pane_g1

0xe7da,	// (0x00059452) vradio_station_info_pane_t1_ParamLimits

0xe7da,	// (0x00059452) vradio_station_info_pane_t1

0xe7fc,	// (0x00059474) vradio_station_info_pane_t2_ParamLimits

0xe7fc,	// (0x00059474) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005a4cf) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005a4cf) vradio_station_info_pane_t

0xe80e,	// (0x00059486) vradio_tuning_pane

0xe816,	// (0x0005948e) vradio_rocker_control_pane_g1

0xe81e,	// (0x00059496) vradio_rocker_control_pane_g2

0xe826,	// (0x0005949e) vradio_rocker_control_pane_g3

0xe82e,	// (0x000594a6) vradio_rocker_control_pane_g4

0xe836,	// (0x000594ae) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005a4d4) vradio_rocker_control_pane_g

0xa4ce,	// (0x00055146) vradio_frequency_info_pane_g1

0xe83e,	// (0x000594b6) vradio_frequency_info_pane_t1_ParamLimits

0xe83e,	// (0x000594b6) vradio_frequency_info_pane_t1

0xa4d8,	// (0x00055150) vradio_tuning_pane_g1

0xa4e1,	// (0x00055159) vradio_tuning_pane_t1

0x0540,	// (0x0004b1b8) area_side_right_pane_ParamLimits

0x0540,	// (0x0004b1b8) area_side_right_pane

0x4e2c,	// (0x0004faa4) status_small_pane_g1

0x4e34,	// (0x0004faac) status_small_pane_g2

0x4e3d,	// (0x0004fab5) status_small_pane_g3

0x4e46,	// (0x0004fabe) status_small_pane_g4

0x0003,

0xf61c,	// (0x0005a294) status_small_pane_g

0x4e4f,	// (0x0004fac7) status_small_pane_t1

0x050a,	// (0x0004b182) main_video3_pane

0xe852,	// (0x000594ca) cams_zoom_vslider_pane

0xe85a,	// (0x000594d2) image3_wide_pane_ParamLimits

0xe85a,	// (0x000594d2) image3_wide_pane

0xe874,	// (0x000594ec) image3_wide_small_pane

0xe880,	// (0x000594f8) main_video3_pane_g1_ParamLimits

0xe880,	// (0x000594f8) main_video3_pane_g1

0xe89c,	// (0x00059514) main_video3_pane_g2_ParamLimits

0xe89c,	// (0x00059514) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005a4df) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005a4df) main_video3_pane_g

0xe8b8,	// (0x00059530) main_video3_pane_t1_ParamLimits

0xe8b8,	// (0x00059530) main_video3_pane_t1

0xe8e3,	// (0x0005955b) main_video3_pane_t2_ParamLimits

0xe8e3,	// (0x0005955b) main_video3_pane_t2

0xe90e,	// (0x00059586) main_video3_pane_t3_ParamLimits

0xe90e,	// (0x00059586) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005a4e4) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005a4e4) main_video3_pane_t

0xe93b,	// (0x000595b3) cams_zoom_vslider_pane_g1

0xe944,	// (0x000595bc) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005a4eb) cams_zoom_vslider_pane_g

0xe94c,	// (0x000595c4) small_slider_vertical_pane

0xe19c,	// (0x00058e14) small_slider_vertical_pane_g1

0xe19c,	// (0x00058e14) small_slider_vertical_pane_g2

0xe954,	// (0x000595cc) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005a4f0) small_slider_vertical_pane_g

0x050a,	// (0x0004b182) main_hwr_training_pane

0xe95d,	// (0x000595d5) hwr_training_instruct_pane_ParamLimits

0xe95d,	// (0x000595d5) hwr_training_instruct_pane

0xa4f0,	// (0x00055168) hwr_training_navi_pane_ParamLimits

0xa4f0,	// (0x00055168) hwr_training_navi_pane

0xa50a,	// (0x00055182) hwr_training_write_pane_ParamLimits

0xa50a,	// (0x00055182) hwr_training_write_pane

0x050a,	// (0x0004b182) bg_frame_shadow_pane

0xe994,	// (0x0005960c) hwr_training_write_pane_g1

0xe99c,	// (0x00059614) hwr_training_write_pane_g2

0xe9a4,	// (0x0005961c) hwr_training_write_pane_g3

0xe9ac,	// (0x00059624) hwr_training_write_pane_g4

0xe9b4,	// (0x0005962c) hwr_training_write_pane_g5

0xe9bc,	// (0x00059634) hwr_training_write_pane_g6

0xe9c4,	// (0x0005963c) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005a4f7) hwr_training_write_pane_g

0xa542,	// (0x000551ba) hwr_training_navi_pane_g1_ParamLimits

0xa542,	// (0x000551ba) hwr_training_navi_pane_g1

0xa554,	// (0x000551cc) hwr_training_navi_pane_g2_ParamLimits

0xa554,	// (0x000551cc) hwr_training_navi_pane_g2

0xa566,	// (0x000551de) hwr_training_navi_pane_g3_ParamLimits

0xa566,	// (0x000551de) hwr_training_navi_pane_g3

0xa576,	// (0x000551ee) hwr_training_navi_pane_g4_ParamLimits

0xa576,	// (0x000551ee) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005a506) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005a506) hwr_training_navi_pane_g

0xa590,	// (0x00055208) hwr_training_navi_pane_t1

0xa59e,	// (0x00055216) list_single_hwr_training_instruct_pane_ParamLimits

0xa59e,	// (0x00055216) list_single_hwr_training_instruct_pane

0xe9cc,	// (0x00059644) list_single_hwr_training_instruct_pane_t1

0xe0dc,	// (0x00058d54) bg_frame_shadow_pane_g1

0xe9db,	// (0x00059653) bg_frame_shadow_pane_g2

0xe9e3,	// (0x0005965b) bg_frame_shadow_pane_g3

0xe9eb,	// (0x00059663) bg_frame_shadow_pane_g4

0xe9f3,	// (0x0005966b) bg_frame_shadow_pane_g5

0xe9fb,	// (0x00059673) bg_frame_shadow_pane_g6

0xea03,	// (0x0005967b) bg_frame_shadow_pane_g7

0x3039,	// (0x0004dcb1) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005a511) bg_frame_shadow_pane_g

0x050a,	// (0x0004b182) main_video_tele_dialer_pane

0xa5c3,	// (0x0005523b) aid_size_cell_video_keypad_ParamLimits

0xa5c3,	// (0x0005523b) aid_size_cell_video_keypad

0xa5d3,	// (0x0005524b) grid_video_dialer_keypad_pane_ParamLimits

0xa5d3,	// (0x0005524b) grid_video_dialer_keypad_pane

0xa605,	// (0x0005527d) video_down_pane_cp_ParamLimits

0xa605,	// (0x0005527d) video_down_pane_cp

0xa611,	// (0x00055289) cell_video_dialer_keypad_pane_ParamLimits

0xa611,	// (0x00055289) cell_video_dialer_keypad_pane

0xea27,	// (0x0005969f) bg_button_pane_cp08_ParamLimits

0xea27,	// (0x0005969f) bg_button_pane_cp08

0xa626,	// (0x0005529e) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa626,	// (0x0005529e) cell_video_dialer_keypad_pane_g1

0x9e38,	// (0x00054ab0) mup3_rocker2_pane_ParamLimits

0x9e38,	// (0x00054ab0) mup3_rocker2_pane

0xe19c,	// (0x00058e14) mup3_rocker2_pane_g1

0x8db3,	// (0x00053a2b) main_dialer2_pane

0x050a,	// (0x0004b182) main_mp4_pane

0xa668,	// (0x000552e0) main_mp4_pane_g1_ParamLimits

0xa668,	// (0x000552e0) main_mp4_pane_g1

0xa676,	// (0x000552ee) main_mp4_pane_g2_ParamLimits

0xa676,	// (0x000552ee) main_mp4_pane_g2

0xa684,	// (0x000552fc) main_mp4_pane_g3_ParamLimits

0xa684,	// (0x000552fc) main_mp4_pane_g3

0xa6c9,	// (0x00055341) main_mp4_pane_g4_ParamLimits

0xa6c9,	// (0x00055341) main_mp4_pane_g4

0xa6f1,	// (0x00055369) main_mp4_pane_g5_ParamLimits

0xa6f1,	// (0x00055369) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005a531) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005a531) main_mp4_pane_g

0xa741,	// (0x000553b9) main_mp4_pane_t1_ParamLimits

0xa741,	// (0x000553b9) main_mp4_pane_t1

0xa79d,	// (0x00055415) main_mp4_pane_t2_ParamLimits

0xa79d,	// (0x00055415) main_mp4_pane_t2

0xea33,	// (0x000596ab) main_mp4_pane_t3_ParamLimits

0xea33,	// (0x000596ab) main_mp4_pane_t3

0xa7ef,	// (0x00055467) main_mp4_pane_t4_ParamLimits

0xa7ef,	// (0x00055467) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005a53e) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005a53e) main_mp4_pane_t

0xa833,	// (0x000554ab) mp4_progress_pane_ParamLimits

0xa833,	// (0x000554ab) mp4_progress_pane

0xa87d,	// (0x000554f5) mp4_rocker_pane_ParamLimits

0xa87d,	// (0x000554f5) mp4_rocker_pane

0xea5b,	// (0x000596d3) mp4_progress_pane_t1

0xea74,	// (0x000596ec) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005a547) mp4_progress_pane_t

0xea8d,	// (0x00059705) mup_progress_pane_cp04

0xea99,	// (0x00059711) mp4_rocker_pane_g1

0xa89d,	// (0x00055515) aid_cell_size_keypad2_ParamLimits

0xa89d,	// (0x00055515) aid_cell_size_keypad2

0xa8ad,	// (0x00055525) dialer2_ne_pane_ParamLimits

0xa8ad,	// (0x00055525) dialer2_ne_pane

0xa8bb,	// (0x00055533) grid_dialer2_keypad_pane_ParamLimits

0xa8bb,	// (0x00055533) grid_dialer2_keypad_pane

0x0f70,	// (0x0004bbe8) bg_popup_call_pane_cp07_ParamLimits

0x0f70,	// (0x0004bbe8) bg_popup_call_pane_cp07

0xa8cb,	// (0x00055543) dialer2_ne_pane_t1_ParamLimits

0xa8cb,	// (0x00055543) dialer2_ne_pane_t1

0xa8f0,	// (0x00055568) cell_dialer2_keypad_pane_ParamLimits

0xa8f0,	// (0x00055568) cell_dialer2_keypad_pane

0xeab5,	// (0x0005972d) bg_button_pane_pane_cp04_ParamLimits

0xeab5,	// (0x0005972d) bg_button_pane_pane_cp04

0xa905,	// (0x0005557d) cell_dialer2_keypad_pane_g1_ParamLimits

0xa905,	// (0x0005557d) cell_dialer2_keypad_pane_g1

0x6c6a,	// (0x000518e2) aid_placing_vt_set_content_ParamLimits

0x6c6a,	// (0x000518e2) aid_placing_vt_set_content

0x6c94,	// (0x0005190c) aid_placing_vt_set_title_ParamLimits

0x6c94,	// (0x0005190c) aid_placing_vt_set_title

0x050a,	// (0x0004b182) main_image3_pane

0xa99f,	// (0x00055617) area_side_right_pane_cp01_ParamLimits

0xa99f,	// (0x00055617) area_side_right_pane_cp01

0xa9cc,	// (0x00055644) main_image3_pane_g1_ParamLimits

0xa9cc,	// (0x00055644) main_image3_pane_g1

0xa9da,	// (0x00055652) main_image3_pane_g2_ParamLimits

0xa9da,	// (0x00055652) main_image3_pane_g2

0xa9f3,	// (0x0005566b) main_image3_pane_g3_ParamLimits

0xa9f3,	// (0x0005566b) main_image3_pane_g3

0xaa0c,	// (0x00055684) main_image3_pane_g4_ParamLimits

0xaa0c,	// (0x00055684) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005a556) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005a556) main_image3_pane_g

0xaa25,	// (0x0005569d) main_image3_pane_t1_ParamLimits

0xaa25,	// (0x0005569d) main_image3_pane_t1

0xaa4a,	// (0x000556c2) main_image3_pane_t2_ParamLimits

0xaa4a,	// (0x000556c2) main_image3_pane_t2

0xaa69,	// (0x000556e1) main_image3_pane_t3_ParamLimits

0xaa69,	// (0x000556e1) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005a55f) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005a55f) main_image3_pane_t

0x0c8f,	// (0x0004b907) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c8f,	// (0x0004b907) grid_sctrl_middle_pane_cp01

0xaaca,	// (0x00055742) cell_sctrl_middle_pane_cp01_ParamLimits

0xaaca,	// (0x00055742) cell_sctrl_middle_pane_cp01

0xaadb,	// (0x00055753) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaadb,	// (0x00055753) cell_sctrl_middle_pane_cp01_g1

0x050a,	// (0x0004b182) main_call4_pane

0xaae8,	// (0x00055760) aid_size_button_call4_ParamLimits

0xaae8,	// (0x00055760) aid_size_button_call4

0xab18,	// (0x00055790) call4_windows_pane_ParamLimits

0xab18,	// (0x00055790) call4_windows_pane

0xab32,	// (0x000557aa) grid_call4_button_pane_ParamLimits

0xab32,	// (0x000557aa) grid_call4_button_pane

0xeac1,	// (0x00059739) call4_windows_conf_pane

0xead8,	// (0x00059750) popup_call4_audio_first_window_ParamLimits

0xead8,	// (0x00059750) popup_call4_audio_first_window

0xeb24,	// (0x0005979c) popup_call4_audio_second_window_ParamLimits

0xeb24,	// (0x0005979c) popup_call4_audio_second_window

0xeb38,	// (0x000597b0) popup_call4_audio_wait_window_ParamLimits

0xeb38,	// (0x000597b0) popup_call4_audio_wait_window

0xab56,	// (0x000557ce) cell_call4_button_pane_ParamLimits

0xab56,	// (0x000557ce) cell_call4_button_pane

0xab7b,	// (0x000557f3) bg_button_pane_cp09_ParamLimits

0xab7b,	// (0x000557f3) bg_button_pane_cp09

0xab87,	// (0x000557ff) cell_call4_button_pane_g1_ParamLimits

0xab87,	// (0x000557ff) cell_call4_button_pane_g1

0xab94,	// (0x0005580c) cell_call4_button_pane_t1_ParamLimits

0xab94,	// (0x0005580c) cell_call4_button_pane_t1

0xeb80,	// (0x000597f8) popup_call4_audio_conf_window_ParamLimits

0xeb80,	// (0x000597f8) popup_call4_audio_conf_window

0x9e6b,	// (0x00054ae3) mup3_progress_pane_t1_ParamLimits

0x9e82,	// (0x00054afa) mup3_progress_pane_t2_ParamLimits

0xe47a,	// (0x000590f2) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005a438) mup3_progress_pane_t_ParamLimits

0xe491,	// (0x00059109) mup_progress_pane_cp03_ParamLimits

0xa390,	// (0x00055008) mup3_control_keys_pane_g4_copy1

0xa861,	// (0x000554d9) mp4_rocker2_pane_ParamLimits

0xa861,	// (0x000554d9) mp4_rocker2_pane

0xeb94,	// (0x0005980c) mp4_rocker2_pane_g1

0xeb9c,	// (0x00059814) mp4_rocker2_pane_g2

0xaba6,	// (0x0005581e) mp4_rocker2_pane_g3

0xabae,	// (0x00055826) mp4_rocker2_pane_g4

0xabb6,	// (0x0005582e) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005a568) mp4_rocker2_pane_g

0x050a,	// (0x0004b182) main_camera4_pane

0x050a,	// (0x0004b182) main_video4_pane

0xa5e1,	// (0x00055259) main_video_tele_dialer_pane_t1_ParamLimits

0xa5e1,	// (0x00055259) main_video_tele_dialer_pane_t1

0xa5f3,	// (0x0005526b) main_video_tele_dialer_pane_t2_ParamLimits

0xa5f3,	// (0x0005526b) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005a522) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005a522) main_video_tele_dialer_pane_t

0xabd6,	// (0x0005584e) cam4_autofocus_pane_ParamLimits

0xabd6,	// (0x0005584e) cam4_autofocus_pane

0xabf0,	// (0x00055868) cam4_image_uncrop_pane_ParamLimits

0xabf0,	// (0x00055868) cam4_image_uncrop_pane

0xac07,	// (0x0005587f) cam4_indicators_pane_ParamLimits

0xac07,	// (0x0005587f) cam4_indicators_pane

0xac23,	// (0x0005589b) main_camera4_pane_g1_ParamLimits

0xac23,	// (0x0005589b) main_camera4_pane_g1

0xac2f,	// (0x000558a7) main_camera4_pane_g2_ParamLimits

0xac2f,	// (0x000558a7) main_camera4_pane_g2

0xac2f,	// (0x000558a7) main_camera4_pane_g3_ParamLimits

0xac2f,	// (0x000558a7) main_camera4_pane_g3

0xac3b,	// (0x000558b3) main_camera4_pane_g4_ParamLimits

0xac3b,	// (0x000558b3) main_camera4_pane_g4

0xac47,	// (0x000558bf) main_camera4_pane_g5_ParamLimits

0xac47,	// (0x000558bf) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005a573) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005a573) main_camera4_pane_g

0xac61,	// (0x000558d9) main_camera4_pane_t1_ParamLimits

0xac61,	// (0x000558d9) main_camera4_pane_t1

0xaca9,	// (0x00055921) bg_tb_trans_pane_cp06

0xacbf,	// (0x00055937) cam4_indicators_pane_g1

0xacd0,	// (0x00055948) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005a58e) cam4_indicators_pane_g

0xacee,	// (0x00055966) cam4_indicators_pane_t1

0xad18,	// (0x00055990) main_video4_pane_g1_ParamLimits

0xad18,	// (0x00055990) main_video4_pane_g1

0xad24,	// (0x0005599c) main_video4_pane_g2_ParamLimits

0xad24,	// (0x0005599c) main_video4_pane_g2

0xad30,	// (0x000559a8) main_video4_pane_g3_ParamLimits

0xad30,	// (0x000559a8) main_video4_pane_g3

0xad3c,	// (0x000559b4) main_video4_pane_g4_ParamLimits

0xad3c,	// (0x000559b4) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005a595) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005a595) main_video4_pane_g

0xad5c,	// (0x000559d4) vid4_indicators_pane_ParamLimits

0xad5c,	// (0x000559d4) vid4_indicators_pane

0xad7a,	// (0x000559f2) video4_image_uncrop_cif_pane_ParamLimits

0xad7a,	// (0x000559f2) video4_image_uncrop_cif_pane

0xad89,	// (0x00055a01) video4_image_uncrop_nhd_pane_ParamLimits

0xad89,	// (0x00055a01) video4_image_uncrop_nhd_pane

0xabf0,	// (0x00055868) video4_image_uncrop_vga_pane_ParamLimits

0xabf0,	// (0x00055868) video4_image_uncrop_vga_pane

0xad96,	// (0x00055a0e) bg_tb_trans_pane_cp07

0xadae,	// (0x00055a26) vid4_indicators_pane_g1

0xadbf,	// (0x00055a37) vid4_indicators_pane_g2

0xadd0,	// (0x00055a48) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005a5a0) vid4_indicators_pane_g

0xadfd,	// (0x00055a75) vid4_indicators_pane_t1

0xae16,	// (0x00055a8e) cam4_autofocus_pane_g1

0xae1e,	// (0x00055a96) cam4_autofocus_pane_g2

0xae26,	// (0x00055a9e) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005a5ab) cam4_autofocus_pane_g

0xae2e,	// (0x00055aa6) cam4_autofocus_pane_g3_copy1

0xea0b,	// (0x00059683) video_down_pane_cp_t1

0xea19,	// (0x00059691) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005a527) video_down_pane_cp_t

0x0c8f,	// (0x0004b907) popup_vitu2_window_ParamLimits

0x0c8f,	// (0x0004b907) popup_vitu2_window

0xae36,	// (0x00055aae) aid_size_cell2_itu2_ParamLimits

0xae36,	// (0x00055aae) aid_size_cell2_itu2

0xae58,	// (0x00055ad0) aid_size_cell_itu2_ParamLimits

0xae58,	// (0x00055ad0) aid_size_cell_itu2

0xae9c,	// (0x00055b14) bg_popup_window_pane_cp09_ParamLimits

0xae9c,	// (0x00055b14) bg_popup_window_pane_cp09

0xaeaa,	// (0x00055b22) field_vitu2_entry_pane_ParamLimits

0xaeaa,	// (0x00055b22) field_vitu2_entry_pane

0xaeca,	// (0x00055b42) grid_vitu2_function_pane_ParamLimits

0xaeca,	// (0x00055b42) grid_vitu2_function_pane

0xaf0e,	// (0x00055b86) grid_vitu2_itu_pane_ParamLimits

0xaf0e,	// (0x00055b86) grid_vitu2_itu_pane

0xaf86,	// (0x00055bfe) cell_vitu2_itu_pane_ParamLimits

0xaf86,	// (0x00055bfe) cell_vitu2_itu_pane

0xaf9b,	// (0x00055c13) cell_vitu2_function_pane_ParamLimits

0xaf9b,	// (0x00055c13) cell_vitu2_function_pane

0xeba4,	// (0x0005981c) bg_popup_call_pane_cp08_ParamLimits

0xeba4,	// (0x0005981c) bg_popup_call_pane_cp08

0xebbd,	// (0x00059835) field_vitu2_entry_pane_g1

0xebc9,	// (0x00059841) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005a5b2) field_vitu2_entry_pane_g

0xafda,	// (0x00055c52) field_vitu2_entry_pane_t1_ParamLimits

0xafda,	// (0x00055c52) field_vitu2_entry_pane_t1

0x0ca7,	// (0x0004b91f) field_vitu2_entry_pane_t2_ParamLimits

0x0ca7,	// (0x0004b91f) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005a5b9) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005a5b9) field_vitu2_entry_pane_t

0xb00a,	// (0x00055c82) bg_button_pane_cp010_ParamLimits

0xb00a,	// (0x00055c82) bg_button_pane_cp010

0xb018,	// (0x00055c90) cell_vitu2_itu_pane_g1

0xb036,	// (0x00055cae) cell_vitu2_itu_pane_t1_ParamLimits

0xb036,	// (0x00055cae) cell_vitu2_itu_pane_t1

0x5c43,	// (0x000508bb) cell_vitu2_itu_pane_t2_ParamLimits

0x5c43,	// (0x000508bb) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005a5c3) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005a5c3) cell_vitu2_itu_pane_t

0xad96,	// (0x00055a0e) bg_button_pane_cp011

0xb088,	// (0x00055d00) cell_vitu2_function_pane_g1

0x050a,	// (0x0004b182) main_myfav_hc_pane

0xaaab,	// (0x00055723) popup_image3_note_pane_ParamLimits

0xaaab,	// (0x00055723) popup_image3_note_pane

0xaab9,	// (0x00055731) popup_image3_tool_bar_pane_ParamLimits

0xaab9,	// (0x00055731) popup_image3_tool_bar_pane

0x5cb1,	// (0x00050929) cell_vitu2_itu_pane_t3_ParamLimits

0x5cb1,	// (0x00050929) cell_vitu2_itu_pane_t3

0x050a,	// (0x0004b182) bg_popup_trans_pane

0xebeb,	// (0x00059863) grid_image3_tool_bar_pane

0xebf5,	// (0x0005986d) bg_popup_trans_pane_g1

0x3374,	// (0x0004dfec) bg_popup_trans_pane_g2

0xebfd,	// (0x00059875) bg_popup_trans_pane_g3

0xec05,	// (0x0005987d) bg_popup_trans_pane_g4

0xec0d,	// (0x00059885) bg_popup_trans_pane_g5

0xec15,	// (0x0005988d) bg_popup_trans_pane_g6

0xec1d,	// (0x00059895) bg_popup_trans_pane_g7

0xec25,	// (0x0005989d) bg_popup_trans_pane_g8

0x3354,	// (0x0004dfcc) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005a5ca) bg_popup_trans_pane_g

0xec2d,	// (0x000598a5) cell_image3_tool_bar_pane_ParamLimits

0xec2d,	// (0x000598a5) cell_image3_tool_bar_pane

0xe19c,	// (0x00058e14) cell_image3_tool_bar_pane_g1

0x050a,	// (0x0004b182) bg_popup_trans_pane_cp1

0xec41,	// (0x000598b9) popup_image3_note_pane_t1

0xec4f,	// (0x000598c7) popup_image3_note_pane_t2

0xec5d,	// (0x000598d5) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005a5dd) popup_image3_note_pane_t

0xec6b,	// (0x000598e3) popup_image3_note_pane_t3_copy1

0xb09c,	// (0x00055d14) bg_myfav_hc_instruction_pane_ParamLimits

0xb09c,	// (0x00055d14) bg_myfav_hc_instruction_pane

0xb0b4,	// (0x00055d2c) cell_myfav_contact_pane_ParamLimits

0xb0b4,	// (0x00055d2c) cell_myfav_contact_pane

0xb0ce,	// (0x00055d46) cell_myfav_contact_pane_cp1_ParamLimits

0xb0ce,	// (0x00055d46) cell_myfav_contact_pane_cp1

0xb0e6,	// (0x00055d5e) cell_myfav_contact_pane_cp2_ParamLimits

0xb0e6,	// (0x00055d5e) cell_myfav_contact_pane_cp2

0xb0fe,	// (0x00055d76) cell_myfav_contact_pane_cp3_ParamLimits

0xb0fe,	// (0x00055d76) cell_myfav_contact_pane_cp3

0xb115,	// (0x00055d8d) cell_myfav_contact_pane_cp4_ParamLimits

0xb115,	// (0x00055d8d) cell_myfav_contact_pane_cp4

0xb12b,	// (0x00055da3) cell_myfav_contact_pane_cp5_ParamLimits

0xb12b,	// (0x00055da3) cell_myfav_contact_pane_cp5

0xb13f,	// (0x00055db7) cell_myfav_contact_pane_cp6_ParamLimits

0xb13f,	// (0x00055db7) cell_myfav_contact_pane_cp6

0xb153,	// (0x00055dcb) cell_myfav_contact_pane_cp7_ParamLimits

0xb153,	// (0x00055dcb) cell_myfav_contact_pane_cp7

0xec79,	// (0x000598f1) listscroll_gen_pane_cp05

0xb16b,	// (0x00055de3) main_myfav_hc_pane_g1_ParamLimits

0xb16b,	// (0x00055de3) main_myfav_hc_pane_g1

0xb181,	// (0x00055df9) main_myfav_hc_pane_g2_ParamLimits

0xb181,	// (0x00055df9) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005a5e4) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005a5e4) main_myfav_hc_pane_g

0xb1af,	// (0x00055e27) main_myfav_hc_pane_t1_ParamLimits

0xb1af,	// (0x00055e27) main_myfav_hc_pane_t1

0xec82,	// (0x000598fa) main_myfav_hc_pane_t2_ParamLimits

0xec82,	// (0x000598fa) main_myfav_hc_pane_t2

0xec94,	// (0x0005990c) main_myfav_hc_pane_t3_ParamLimits

0xec94,	// (0x0005990c) main_myfav_hc_pane_t3

0xb1c6,	// (0x00055e3e) main_myfav_hc_pane_t4_ParamLimits

0xb1c6,	// (0x00055e3e) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005a5eb) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005a5eb) main_myfav_hc_pane_t

0xe19c,	// (0x00058e14) bg_myfav_hc_instruction_pane_g1

0xeca6,	// (0x0005991e) cell_myfav_contact_pane_g1_ParamLimits

0xeca6,	// (0x0005991e) cell_myfav_contact_pane_g1

0xeca6,	// (0x0005991e) cell_myfav_contact_pane_g2_ParamLimits

0xeca6,	// (0x0005991e) cell_myfav_contact_pane_g2

0xecb2,	// (0x0005992a) cell_myfav_contact_pane_g3_ParamLimits

0xecb2,	// (0x0005992a) cell_myfav_contact_pane_g3

0xe464,	// (0x000590dc) cell_myfav_contact_pane_g4_ParamLimits

0xe464,	// (0x000590dc) cell_myfav_contact_pane_g4

0xecbf,	// (0x00059937) cell_myfav_contact_pane_g5_ParamLimits

0xecbf,	// (0x00059937) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005a5f6) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005a5f6) cell_myfav_contact_pane_g

0xb197,	// (0x00055e0f) main_myfav_hc_pane_g3_ParamLimits

0xb197,	// (0x00055e0f) main_myfav_hc_pane_g3

0x5e7a,	// (0x00050af2) popup_adpt_find_window

0xb1f0,	// (0x00055e68) afind_page_pane_ParamLimits

0xb1f0,	// (0x00055e68) afind_page_pane

0xb1fd,	// (0x00055e75) aid_size_cell_afind_ParamLimits

0xb1fd,	// (0x00055e75) aid_size_cell_afind

0xb217,	// (0x00055e8f) bg_popup_sub_pane_cp09_ParamLimits

0xb217,	// (0x00055e8f) bg_popup_sub_pane_cp09

0xb224,	// (0x00055e9c) find_pane_cp01_ParamLimits

0xb224,	// (0x00055e9c) find_pane_cp01

0xeccb,	// (0x00059943) grid_afind_control_pane_ParamLimits

0xeccb,	// (0x00059943) grid_afind_control_pane

0xb231,	// (0x00055ea9) grid_afind_pane_ParamLimits

0xb231,	// (0x00055ea9) grid_afind_pane

0xb24d,	// (0x00055ec5) cell_afind_pane_ParamLimits

0xb24d,	// (0x00055ec5) cell_afind_pane

0xe19c,	// (0x00058e14) afind_page_pane_g1

0xb295,	// (0x00055f0d) afind_page_pane_g2

0xb29e,	// (0x00055f16) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005a601) afind_page_pane_g

0xb2a7,	// (0x00055f1f) afind_page_pane_t1

0xecdf,	// (0x00059957) cell_afind_grid_control_pane_ParamLimits

0xecdf,	// (0x00059957) cell_afind_grid_control_pane

0xeab5,	// (0x0005972d) bg_button_pane_cp69_ParamLimits

0xeab5,	// (0x0005972d) bg_button_pane_cp69

0xb2c7,	// (0x00055f3f) cell_afind_pane_g1_ParamLimits

0xb2c7,	// (0x00055f3f) cell_afind_pane_g1

0xb2d4,	// (0x00055f4c) cell_afind_pane_t1_ParamLimits

0xb2d4,	// (0x00055f4c) cell_afind_pane_t1

0x316f,	// (0x0004dde7) bg_button_pane_cp72

0xecee,	// (0x00059966) cell_afind_grid_control_pane_g1

0x8931,	// (0x000535a9) aid_image_placing_area_ParamLimits

0x8931,	// (0x000535a9) aid_image_placing_area

0xe75d,	// (0x000593d5) field_vitu_entry_pane_g1_ParamLimits

0xe75d,	// (0x000593d5) field_vitu_entry_pane_g1

0xe769,	// (0x000593e1) field_vitu_entry_pane_g2_ParamLimits

0xe769,	// (0x000593e1) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005a4b2) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005a4b2) field_vitu_entry_pane_g

0xa417,	// (0x0005508f) cell_vitu_itu_pane_g1_ParamLimits

0xa459,	// (0x000550d1) cell_vitu_itu_pane_t3_ParamLimits

0xa459,	// (0x000550d1) cell_vitu_itu_pane_t3

0xea5b,	// (0x000596d3) mp4_progress_pane_t1_ParamLimits

0xea74,	// (0x000596ec) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005a547) mp4_progress_pane_t_ParamLimits

0xea8d,	// (0x00059705) mup_progress_pane_cp04_ParamLimits

0xb1da,	// (0x00055e52) main_myfav_hc_pane_t5_ParamLimits

0xb1da,	// (0x00055e52) main_myfav_hc_pane_t5

0x0530,	// (0x0004b1a8) aid_zoom_text_primary

0x5e7a,	// (0x00050af2) popup_adpt_find_window_ParamLimits

0x412d,	// (0x0004eda5) main_cam_set_pane

0xac15,	// (0x0005588d) cam4_zoom_pane_ParamLimits

0xac15,	// (0x0005588d) cam4_zoom_pane

0xb2e6,	// (0x00055f5e) main_cam_set_pane_g1_ParamLimits

0xb2e6,	// (0x00055f5e) main_cam_set_pane_g1

0xb2f4,	// (0x00055f6c) main_cam_set_pane_g2_ParamLimits

0xb2f4,	// (0x00055f6c) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005a608) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005a608) main_cam_set_pane_g

0xb300,	// (0x00055f78) main_cam_set_pane_t1_ParamLimits

0xb300,	// (0x00055f78) main_cam_set_pane_t1

0xb31c,	// (0x00055f94) main_cset_listscroll_pane_ParamLimits

0xb31c,	// (0x00055f94) main_cset_listscroll_pane

0xb347,	// (0x00055fbf) main_cset_slider_pane_ParamLimits

0xb347,	// (0x00055fbf) main_cset_slider_pane

0xecff,	// (0x00059977) main_cset_list_pane_ParamLimits

0xecff,	// (0x00059977) main_cset_list_pane

0xed0f,	// (0x00059987) scroll_pane_cp028

0xb366,	// (0x00055fde) aid_area_touch_slider

0xb382,	// (0x00055ffa) cset_slider_pane

0xb3ac,	// (0x00056024) main_cset_slider_pane_g1

0xb3c1,	// (0x00056039) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005a60d) main_cset_slider_pane_g

0xed48,	// (0x000599c0) main_cset_slider_pane_t1

0xb483,	// (0x000560fb) main_cset_slider_pane_t2

0xb49d,	// (0x00056115) main_cset_slider_pane_t3

0xb4b7,	// (0x0005612f) main_cset_slider_pane_t4

0xb4d1,	// (0x00056149) main_cset_slider_pane_t5

0xb4ef,	// (0x00056167) main_cset_slider_pane_t6

0xb506,	// (0x0005617e) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005a632) main_cset_slider_pane_t

0xb612,	// (0x0005628a) cset_list_set_pane_ParamLimits

0xb612,	// (0x0005628a) cset_list_set_pane

0xb628,	// (0x000562a0) aid_position_infowindow_above

0xb630,	// (0x000562a8) aid_position_infowindow_below

0x0cc4,	// (0x0004b93c) cset_list_set_pane_g1_ParamLimits

0x0cc4,	// (0x0004b93c) cset_list_set_pane_g1

0x0cd0,	// (0x0004b948) cset_list_set_pane_g3_ParamLimits

0x0cd0,	// (0x0004b948) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005a651) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005a651) cset_list_set_pane_g

0xb638,	// (0x000562b0) cset_list_set_pane_t1_ParamLimits

0xb638,	// (0x000562b0) cset_list_set_pane_t1

0x412d,	// (0x0004eda5) list_highlight_pane_cp021_ParamLimits

0x412d,	// (0x0004eda5) list_highlight_pane_cp021

0x3b95,	// (0x0004e80d) cset_slider_pane_g1

0x3ba7,	// (0x0004e81f) cset_slider_pane_g2

0x3b9e,	// (0x0004e816) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005a656) cset_slider_pane_g

0xb64d,	// (0x000562c5) aid_area_touch_cam4_zoom

0xb655,	// (0x000562cd) cam4_zoom_cont_pane

0xb65d,	// (0x000562d5) cam4_zoom_pane_g1

0xb665,	// (0x000562dd) cam4_zoom_pane_g2

0xb66d,	// (0x000562e5) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005a65d) cam4_zoom_pane_g

0xb675,	// (0x000562ed) cam4_zoom_cont_pane_g1

0xb67e,	// (0x000562f6) cam4_zoom_cont_pane_g2

0xb687,	// (0x000562ff) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005a664) cam4_zoom_cont_pane_g

0xab02,	// (0x0005577a) call4_image_pane_ParamLimits

0xab02,	// (0x0005577a) call4_image_pane

0xeac1,	// (0x00059739) call4_windows_conf_pane_ParamLimits

0xeb02,	// (0x0005977a) popup_call4_audio_in_window_ParamLimits

0xeb02,	// (0x0005977a) popup_call4_audio_in_window

0x050a,	// (0x0004b182) bg_popup_call2_act_pane_cp02

0xeb78,	// (0x000597f0) call4_list_conf_pane

0xe19c,	// (0x00058e14) call4_image_pane_g1

0xe19c,	// (0x00058e14) call4_image_pane_g2

0x0001,

0xf700,	// (0x0005a378) call4_image_pane_g

0xede8,	// (0x00059a60) list_single_graphic_popup_conf4_pane_ParamLimits

0xede8,	// (0x00059a60) list_single_graphic_popup_conf4_pane

0x050a,	// (0x0004b182) list_highlight_pane_cp022

0xedfb,	// (0x00059a73) list_single_graphic_popup_conf4_pane_g1

0x3874,	// (0x0004e4ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005a66b) list_single_graphic_popup_conf4_pane_g

0xee03,	// (0x00059a7b) list_single_graphic_popup_conf4_pane_t1

0x6df8,	// (0x00051a70) popup_vtel_slider_window_ParamLimits

0x6df8,	// (0x00051a70) popup_vtel_slider_window

0xeaa3,	// (0x0005971b) dialer2_ne_pane_t2_ParamLimits

0xeaa3,	// (0x0005971b) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005a54c) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005a54c) dialer2_ne_pane_t

0x412d,	// (0x0004eda5) bg_popup_sub_pane_cp010_ParamLimits

0x412d,	// (0x0004eda5) bg_popup_sub_pane_cp010

0xb690,	// (0x00056308) popup_vtel_slider_window_g1_ParamLimits

0xb690,	// (0x00056308) popup_vtel_slider_window_g1

0xb69c,	// (0x00056314) popup_vtel_slider_window_g2_ParamLimits

0xb69c,	// (0x00056314) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005a670) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005a670) popup_vtel_slider_window_g

0xb6e4,	// (0x0005635c) vtel_slider_pane_ParamLimits

0xb6e4,	// (0x0005635c) vtel_slider_pane

0xb6f3,	// (0x0005636b) vtel_slider_pane_g1_ParamLimits

0xb6f3,	// (0x0005636b) vtel_slider_pane_g1

0xb700,	// (0x00056378) vtel_slider_pane_g2_ParamLimits

0xb700,	// (0x00056378) vtel_slider_pane_g2

0xb70d,	// (0x00056385) vtel_slider_pane_g3_ParamLimits

0xb70d,	// (0x00056385) vtel_slider_pane_g3

0xb6f3,	// (0x0005636b) vtel_slider_pane_g4_ParamLimits

0xb6f3,	// (0x0005636b) vtel_slider_pane_g4

0xb71a,	// (0x00056392) vtel_slider_pane_g5_ParamLimits

0xb71a,	// (0x00056392) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005a679) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005a679) vtel_slider_pane_g

0x050a,	// (0x0004b182) main_gallery2_pane

0xae7e,	// (0x00055af6) aid_size_row_itut2_dropdow_list_ParamLimits

0xae7e,	// (0x00055af6) aid_size_row_itut2_dropdow_list

0xaeec,	// (0x00055b64) grid_vitu2_function_top_pane_ParamLimits

0xaeec,	// (0x00055b64) grid_vitu2_function_top_pane

0xaf42,	// (0x00055bba) popup_vitu2_dropdown_list_window_ParamLimits

0xaf42,	// (0x00055bba) popup_vitu2_dropdown_list_window

0xaf62,	// (0x00055bda) popup_vitu2_match_list_window

0xb727,	// (0x0005639f) cell_vitu2_function_top_pane_ParamLimits

0xb727,	// (0x0005639f) cell_vitu2_function_top_pane

0xb747,	// (0x000563bf) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb747,	// (0x000563bf) cell_vitu2_function_top_pane_cp01

0xb765,	// (0x000563dd) cell_vitu2_function_top_wide_pane_ParamLimits

0xb765,	// (0x000563dd) cell_vitu2_function_top_wide_pane

0xad96,	// (0x00055a0e) bg_button_pane_cp012

0xb783,	// (0x000563fb) cell_vitu2_function_top_pane_g1

0xb792,	// (0x0005640a) bg_button_pane_cp013_ParamLimits

0xb792,	// (0x0005640a) bg_button_pane_cp013

0xb7ae,	// (0x00056426) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb7ae,	// (0x00056426) cell_vitu2_function_top_wide_pane_g1

0xb7c6,	// (0x0005643e) bg_popup_sub_pane_cp20

0xb7d4,	// (0x0005644c) list_vitu2_match_list_pane

0xebf5,	// (0x0005986d) bg_popup_sub_pane_cp20_g1

0xebfd,	// (0x00059875) bg_popup_sub_pane_cp20_g2

0x3374,	// (0x0004dfec) bg_popup_sub_pane_cp20_g3

0xec05,	// (0x0005987d) bg_popup_sub_pane_cp20_g4

0x3354,	// (0x0004dfcc) bg_popup_sub_pane_cp20_g5

0xee19,	// (0x00059a91) bg_popup_sub_pane_cp20_g6

0xec15,	// (0x0005988d) bg_popup_sub_pane_cp20_g7

0xec1d,	// (0x00059895) bg_popup_sub_pane_cp20_g8

0xec25,	// (0x0005989d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005a684) bg_popup_sub_pane_cp20_g

0xb7ec,	// (0x00056464) list_vitu2_match_list_item_pane_ParamLimits

0xb7ec,	// (0x00056464) list_vitu2_match_list_item_pane

0xb7fe,	// (0x00056476) list_vitu2_match_list_item_pane_t1

0x62af,	// (0x00050f27) bg_popup_sub_pane_cp21

0xb83b,	// (0x000564b3) grid_vitu2_dropdown_list_pane

0xb843,	// (0x000564bb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb843,	// (0x000564bb) cell_vitu2_dropdown_list_char_pane

0xb864,	// (0x000564dc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb864,	// (0x000564dc) cell_vitu2_dropdown_list_ctrl_pane

0xee21,	// (0x00059a99) cell_vitu2_dropdown_list_char_pane_g1

0xee2a,	// (0x00059aa2) cell_vitu2_dropdown_list_char_pane_g2

0xee33,	// (0x00059aab) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005a6a1) cell_vitu2_dropdown_list_char_pane_g

0xb890,	// (0x00056508) cell_vitu2_dropdown_list_char_pane_t1

0xb89e,	// (0x00056516) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb89e,	// (0x00056516) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb8ae,	// (0x00056526) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb8ae,	// (0x00056526) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8bf,	// (0x00056537) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8bf,	// (0x00056537) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb8cf,	// (0x00056547) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb8cf,	// (0x00056547) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaca9,	// (0x00055921) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaca9,	// (0x00055921) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005a6a8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005a6a8) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8eb,	// (0x00056563) aid_size_cell_gallery2_ParamLimits

0xb8eb,	// (0x00056563) aid_size_cell_gallery2

0xb8f9,	// (0x00056571) grid_gallery2_pane_ParamLimits

0xb8f9,	// (0x00056571) grid_gallery2_pane

0xb908,	// (0x00056580) scroll_pane_cp029_ParamLimits

0xb908,	// (0x00056580) scroll_pane_cp029

0xb914,	// (0x0005658c) cell_gallery2_pane_ParamLimits

0xb914,	// (0x0005658c) cell_gallery2_pane

0xee3c,	// (0x00059ab4) cell_gallery2_pane_g2

0x20a5,	// (0x0004cd1d) cell_gallery2_pane_g3

0xee46,	// (0x00059abe) cell_gallery2_pane_g4

0xee4e,	// (0x00059ac6) cell_gallery2_pane_g5

0x3a5f,	// (0x0004e6d7) grid_highlight_pane_cp10

0xaf62,	// (0x00055bda) popup_vitu2_match_list_window_ParamLimits

0xaf76,	// (0x00055bee) popup_vitu2_query_window_ParamLimits

0xaf76,	// (0x00055bee) popup_vitu2_query_window

0x62af,	// (0x00050f27) bg_vitu2_candi_button_pane

0xee21,	// (0x00059a99) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee2a,	// (0x00059aa2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee33,	// (0x00059aab) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb942,	// (0x000565ba) bg_button_pane_cp015

0xb954,	// (0x000565cc) bg_button_pane_cp016

0xb967,	// (0x000565df) bg_button_pane_cp017

0x4e65,	// (0x0004fadd) bg_popup_sub_pane_cp22

0xee56,	// (0x00059ace) popup_vitu2_query_window_g1

0xb9ac,	// (0x00056624) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005a6b3) popup_vitu2_query_window_g

0xb9c9,	// (0x00056641) popup_vitu2_query_window_t1_ParamLimits

0xb9c9,	// (0x00056641) popup_vitu2_query_window_t1

0xb9fc,	// (0x00056674) popup_vitu2_query_window_t2_ParamLimits

0xb9fc,	// (0x00056674) popup_vitu2_query_window_t2

0xba0e,	// (0x00056686) popup_vitu2_query_window_t3_ParamLimits

0xba0e,	// (0x00056686) popup_vitu2_query_window_t3

0xba36,	// (0x000566ae) popup_vitu2_query_window_t4_ParamLimits

0xba36,	// (0x000566ae) popup_vitu2_query_window_t4

0xba57,	// (0x000566cf) popup_vitu2_query_window_t5_ParamLimits

0xba57,	// (0x000566cf) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005a6ba) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005a6ba) popup_vitu2_query_window_t

0xecf7,	// (0x0005996f) main_cset_text_pane

0xb366,	// (0x00055fde) aid_area_touch_slider_ParamLimits

0xb382,	// (0x00055ffa) cset_slider_pane_ParamLimits

0xb3ac,	// (0x00056024) main_cset_slider_pane_g1_ParamLimits

0xb3c1,	// (0x00056039) main_cset_slider_pane_g2_ParamLimits

0xed18,	// (0x00059990) main_cset_slider_pane_g3_ParamLimits

0xed18,	// (0x00059990) main_cset_slider_pane_g3

0xb3d6,	// (0x0005604e) main_cset_slider_pane_g4_ParamLimits

0xb3d6,	// (0x0005604e) main_cset_slider_pane_g4

0xb3e5,	// (0x0005605d) main_cset_slider_pane_g5_ParamLimits

0xb3e5,	// (0x0005605d) main_cset_slider_pane_g5

0xb3f3,	// (0x0005606b) main_cset_slider_pane_g6_ParamLimits

0xb3f3,	// (0x0005606b) main_cset_slider_pane_g6

0xf995,	// (0x0005a60d) main_cset_slider_pane_g_ParamLimits

0xed48,	// (0x000599c0) main_cset_slider_pane_t1_ParamLimits

0xb483,	// (0x000560fb) main_cset_slider_pane_t2_ParamLimits

0xb49d,	// (0x00056115) main_cset_slider_pane_t3_ParamLimits

0xb4b7,	// (0x0005612f) main_cset_slider_pane_t4_ParamLimits

0xb4d1,	// (0x00056149) main_cset_slider_pane_t5_ParamLimits

0xb4ef,	// (0x00056167) main_cset_slider_pane_t6_ParamLimits

0xb506,	// (0x0005617e) main_cset_slider_pane_t7_ParamLimits

0xb534,	// (0x000561ac) main_cset_slider_pane_t8_ParamLimits

0xb534,	// (0x000561ac) main_cset_slider_pane_t8

0xb55c,	// (0x000561d4) main_cset_slider_pane_t9_ParamLimits

0xb55c,	// (0x000561d4) main_cset_slider_pane_t9

0xb584,	// (0x000561fc) main_cset_slider_pane_t10_ParamLimits

0xb584,	// (0x000561fc) main_cset_slider_pane_t10

0xb5ac,	// (0x00056224) main_cset_slider_pane_t11_ParamLimits

0xb5ac,	// (0x00056224) main_cset_slider_pane_t11

0xb5d6,	// (0x0005624e) main_cset_slider_pane_t12_ParamLimits

0xb5d6,	// (0x0005624e) main_cset_slider_pane_t12

0xb5f3,	// (0x0005626b) main_cset_slider_pane_t13_ParamLimits

0xb5f3,	// (0x0005626b) main_cset_slider_pane_t13

0xf9ba,	// (0x0005a632) main_cset_slider_pane_t_ParamLimits

0x050a,	// (0x0004b182) bg_popup_sub_pane_cp011

0xee62,	// (0x00059ada) main_cset_text_pane_g1

0xee6a,	// (0x00059ae2) main_cset_text_pane_t1

0xee78,	// (0x00059af0) main_cset_text_pane_t2

0xee86,	// (0x00059afe) main_cset_text_pane_t3

0xee94,	// (0x00059b0c) main_cset_text_pane_t4

0xeea2,	// (0x00059b1a) main_cset_text_pane_t5

0xeeb0,	// (0x00059b28) main_cset_text_pane_t6

0xeebe,	// (0x00059b36) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005a6c9) main_cset_text_pane_t

0x050a,	// (0x0004b182) main_cam4_burst_pane

0x050a,	// (0x0004b182) main_cam5_pane

0xb2b5,	// (0x00055f2d) bg_button_pane_cp019

0xb2be,	// (0x00055f36) bg_button_pane_cp020

0xed24,	// (0x0005999c) main_cset_slider_pane_g7_ParamLimits

0xed24,	// (0x0005999c) main_cset_slider_pane_g7

0xed30,	// (0x000599a8) main_cset_slider_pane_g8_ParamLimits

0xed30,	// (0x000599a8) main_cset_slider_pane_g8

0xb407,	// (0x0005607f) main_cset_slider_pane_g9_ParamLimits

0xb407,	// (0x0005607f) main_cset_slider_pane_g9

0xb413,	// (0x0005608b) main_cset_slider_pane_g10_ParamLimits

0xb413,	// (0x0005608b) main_cset_slider_pane_g10

0xb41f,	// (0x00056097) main_cset_slider_pane_g11_ParamLimits

0xb41f,	// (0x00056097) main_cset_slider_pane_g11

0xb42b,	// (0x000560a3) main_cset_slider_pane_g12_ParamLimits

0xb42b,	// (0x000560a3) main_cset_slider_pane_g12

0xb437,	// (0x000560af) main_cset_slider_pane_g13_ParamLimits

0xb437,	// (0x000560af) main_cset_slider_pane_g13

0xb443,	// (0x000560bb) main_cset_slider_pane_g14_ParamLimits

0xb443,	// (0x000560bb) main_cset_slider_pane_g14

0xb44f,	// (0x000560c7) main_cset_slider_pane_g15_ParamLimits

0xb44f,	// (0x000560c7) main_cset_slider_pane_g15

0xed76,	// (0x000599ee) main_cset_slider_pane_t14_ParamLimits

0xed76,	// (0x000599ee) main_cset_slider_pane_t14

0xedaf,	// (0x00059a27) main_cset_slider_pane_t15_ParamLimits

0xedaf,	// (0x00059a27) main_cset_slider_pane_t15

0xbace,	// (0x00056746) aid_cam4_burst_size_cell_ParamLimits

0xbace,	// (0x00056746) aid_cam4_burst_size_cell

0xbaea,	// (0x00056762) grid_cam4_burst_pane_ParamLimits

0xbaea,	// (0x00056762) grid_cam4_burst_pane

0xbb1a,	// (0x00056792) linegrid_cam4_burst_pane_ParamLimits

0xbb1a,	// (0x00056792) linegrid_cam4_burst_pane

0xbb3a,	// (0x000567b2) scroll_pane_cp30_ParamLimits

0xbb3a,	// (0x000567b2) scroll_pane_cp30

0xbb46,	// (0x000567be) cell_cam4_burst_pane_ParamLimits

0xbb46,	// (0x000567be) cell_cam4_burst_pane

0xeecc,	// (0x00059b44) linegrid_cam4_burst_pane_g1_ParamLimits

0xeecc,	// (0x00059b44) linegrid_cam4_burst_pane_g1

0xbb82,	// (0x000567fa) linegrid_cam4_burst_pane_g2_ParamLimits

0xbb82,	// (0x000567fa) linegrid_cam4_burst_pane_g2

0xeed9,	// (0x00059b51) linegrid_cam4_burst_pane_g3_ParamLimits

0xeed9,	// (0x00059b51) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005a6d8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005a6d8) linegrid_cam4_burst_pane_g

0xbb93,	// (0x0005680b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbb93,	// (0x0005680b) linegrid_cam4_burst_pane_g3_copy1

0xeee6,	// (0x00059b5e) linegrid_cam4_burst_pane_g4_ParamLimits

0xeee6,	// (0x00059b5e) linegrid_cam4_burst_pane_g4

0xbbad,	// (0x00056825) linegrid_cam4_burst_pane_g5_ParamLimits

0xbbad,	// (0x00056825) linegrid_cam4_burst_pane_g5

0xbbbe,	// (0x00056836) linegrid_cam4_burst_pane_g6_ParamLimits

0xbbbe,	// (0x00056836) linegrid_cam4_burst_pane_g6

0xeef3,	// (0x00059b6b) linegrid_cam4_burst_pane_g7_ParamLimits

0xeef3,	// (0x00059b6b) linegrid_cam4_burst_pane_g7

0xbbcf,	// (0x00056847) cell_cam4_burst_pane_g1

0xef0c,	// (0x00059b84) main_cam5_pane_t1_ParamLimits

0xef0c,	// (0x00059b84) main_cam5_pane_t1

0xef1e,	// (0x00059b96) main_cam5_pane_t2_ParamLimits

0xef1e,	// (0x00059b96) main_cam5_pane_t2

0xef30,	// (0x00059ba8) main_cam5_pane_t3_ParamLimits

0xef30,	// (0x00059ba8) main_cam5_pane_t3

0xef42,	// (0x00059bba) main_cam5_pane_t4_ParamLimits

0xef42,	// (0x00059bba) main_cam5_pane_t4

0xef5a,	// (0x00059bd2) main_cam5_pane_t5_ParamLimits

0xef5a,	// (0x00059bd2) main_cam5_pane_t5

0xef6e,	// (0x00059be6) main_cam5_pane_t6_ParamLimits

0xef6e,	// (0x00059be6) main_cam5_pane_t6

0xef82,	// (0x00059bfa) main_cam5_pane_t7_ParamLimits

0xef82,	// (0x00059bfa) main_cam5_pane_t7

0xef94,	// (0x00059c0c) main_cam5_pane_t8_ParamLimits

0xef94,	// (0x00059c0c) main_cam5_pane_t8

0xefb0,	// (0x00059c28) main_cam5_pane_t9_ParamLimits

0xefb0,	// (0x00059c28) main_cam5_pane_t9

0xefc2,	// (0x00059c3a) main_cam5_pane_t10_ParamLimits

0xefc2,	// (0x00059c3a) main_cam5_pane_t10

0xefd4,	// (0x00059c4c) main_cam5_pane_t11_ParamLimits

0xefd4,	// (0x00059c4c) main_cam5_pane_t11

0xefe6,	// (0x00059c5e) main_cam5_pane_t12_ParamLimits

0xefe6,	// (0x00059c5e) main_cam5_pane_t12

0xeffb,	// (0x00059c73) main_cam5_pane_t13_ParamLimits

0xeffb,	// (0x00059c73) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005a6e4) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005a6e4) main_cam5_pane_t

0x5f26,	// (0x00050b9e) popup_scut_keymap_window_ParamLimits

0x5f26,	// (0x00050b9e) popup_scut_keymap_window

0xbbe2,	// (0x0005685a) aid_size_cell_brow_shortcut

0x3a5f,	// (0x0004e6d7) bg_popup_window_pane_cp010

0xbbee,	// (0x00056866) grid_scut_pane

0xbbfa,	// (0x00056872) cell_scut_pane_ParamLimits

0xbbfa,	// (0x00056872) cell_scut_pane

0xbc11,	// (0x00056889) cell_scut_pane_g1

0xf018,	// (0x00059c90) cell_scut_pane_t1

0xf027,	// (0x00059c9f) cell_scut_pane_t2

0xbc1a,	// (0x00056892) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005a6ff) cell_scut_pane_t

0x9ab5,	// (0x0005472d) main_mup3_pane_g8_ParamLimits

0x9ab5,	// (0x0005472d) main_mup3_pane_g8

0xae8c,	// (0x00055b04) area_vitu2_query_pane_ParamLimits

0xae8c,	// (0x00055b04) area_vitu2_query_pane

0xb97a,	// (0x000565f2) input_focus_pane_cp08

0xf036,	// (0x00059cae) area_vitu2_query_pane_g1

0xbc28,	// (0x000568a0) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005a706) area_vitu2_query_pane_g

0xbc39,	// (0x000568b1) area_vitu2_query_pane_t1_ParamLimits

0xbc39,	// (0x000568b1) area_vitu2_query_pane_t1

0xbc4d,	// (0x000568c5) area_vitu2_query_pane_t2_ParamLimits

0xbc4d,	// (0x000568c5) area_vitu2_query_pane_t2

0xbc61,	// (0x000568d9) area_vitu2_query_pane_t3_ParamLimits

0xbc61,	// (0x000568d9) area_vitu2_query_pane_t3

0x0d20,	// (0x0004b998) area_vitu2_query_pane_t4_ParamLimits

0x0d20,	// (0x0004b998) area_vitu2_query_pane_t4

0x0d48,	// (0x0004b9c0) area_vitu2_query_pane_t5_ParamLimits

0x0d48,	// (0x0004b9c0) area_vitu2_query_pane_t5

0x0d70,	// (0x0004b9e8) area_vitu2_query_pane_t6_ParamLimits

0x0d70,	// (0x0004b9e8) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005a70b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005a70b) area_vitu2_query_pane_t

0xbc89,	// (0x00056901) bg_button_pane_cp018

0xbc97,	// (0x0005690f) bg_button_pane_cp021

0xbca3,	// (0x0005691b) bg_button_pane_cp022

0xbcb4,	// (0x0005692c) input_focus_pane_cp09

0x7f5a,	// (0x00052bd2) aid_size_touch_mv_arrow_left

0x7f83,	// (0x00052bfb) aid_size_touch_mv_arrow_right

0xb467,	// (0x000560df) main_cset_slider_pane_g16_ParamLimits

0xb467,	// (0x000560df) main_cset_slider_pane_g16

0xb475,	// (0x000560ed) main_cset_slider_pane_g17_ParamLimits

0xb475,	// (0x000560ed) main_cset_slider_pane_g17

0xbbcf,	// (0x00056847) cell_cam4_burst_pane_g1_ParamLimits

0x050a,	// (0x0004b182) compa_mode_pane

0xb6a8,	// (0x00056320) popup_vtel_slider_window_g3_ParamLimits

0xb6a8,	// (0x00056320) popup_vtel_slider_window_g3

0xb6bc,	// (0x00056334) popup_vtel_slider_window_g4_ParamLimits

0xb6bc,	// (0x00056334) popup_vtel_slider_window_g4

0xb6d0,	// (0x00056348) popup_vtel_slider_window_t1_ParamLimits

0xb6d0,	// (0x00056348) popup_vtel_slider_window_t1

0x050a,	// (0x0004b182) main_cl_pane

0x4e8d,	// (0x0004fb05) popup_imed_adjust2_window_ParamLimits

0x4e65,	// (0x0004fadd) bg_tb_trans_pane_cp05_ParamLimits

0xe692,	// (0x0005930a) popup_imed_adjust2_window_g1_ParamLimits

0xe6a1,	// (0x00059319) popup_imed_adjust2_window_g2_ParamLimits

0xe6a1,	// (0x00059319) popup_imed_adjust2_window_g2

0xe6ad,	// (0x00059325) popup_imed_adjust2_window_g3_ParamLimits

0xe6ad,	// (0x00059325) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005a476) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005a476) popup_imed_adjust2_window_g

0xe6b9,	// (0x00059331) popup_imed_adjust2_window_t1_ParamLimits

0xe6d1,	// (0x00059349) slider_imed_adjust_pane_ParamLimits

0xe6e5,	// (0x0005935d) slider_imed_adjust_pane_g1_ParamLimits

0xe6f5,	// (0x0005936d) slider_imed_adjust_pane_g2_ParamLimits

0xe705,	// (0x0005937d) slider_imed_adjust_pane_g3_ParamLimits

0xe716,	// (0x0005938e) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005a47d) slider_imed_adjust_pane_g_ParamLimits

0xabbe,	// (0x00055836) aid_touch_area_cam4_ParamLimits

0xabbe,	// (0x00055836) aid_touch_area_cam4

0xabce,	// (0x00055846) battery_pane_cp01

0xac55,	// (0x000558cd) main_camera4_pane_g6_ParamLimits

0xac55,	// (0x000558cd) main_camera4_pane_g6

0xac73,	// (0x000558eb) main_camera4_pane_t2_ParamLimits

0xac73,	// (0x000558eb) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005a580) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005a580) main_camera4_pane_t

0xad08,	// (0x00055980) aid_touch_area_vid4_ParamLimits

0xad08,	// (0x00055980) aid_touch_area_vid4

0xad48,	// (0x000559c0) main_video4_pane_g5_ParamLimits

0xad48,	// (0x000559c0) main_video4_pane_g5

0xad6a,	// (0x000559e2) vid4_progress_pane_ParamLimits

0xad6a,	// (0x000559e2) vid4_progress_pane

0xed3c,	// (0x000599b4) main_cset_slider_pane_g18_ParamLimits

0xed3c,	// (0x000599b4) main_cset_slider_pane_g18

0xef00,	// (0x00059b78) cell_cam4_burst_pane_g2_ParamLimits

0xef00,	// (0x00059b78) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005a6df) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005a6df) cell_cam4_burst_pane_g

0xbcc5,	// (0x0005693d) bg_cl_pane_ParamLimits

0xbcc5,	// (0x0005693d) bg_cl_pane

0xbcd1,	// (0x00056949) cl_header_pane_ParamLimits

0xbcd1,	// (0x00056949) cl_header_pane

0xbcdd,	// (0x00056955) cl_listscroll_pane_ParamLimits

0xbcdd,	// (0x00056955) cl_listscroll_pane

0xf042,	// (0x00059cba) bg_cl_pane_g1

0xf04a,	// (0x00059cc2) bg_cl_pane_g2

0xf052,	// (0x00059cca) bg_cl_pane_g3

0xf05a,	// (0x00059cd2) bg_cl_pane_g4

0xf062,	// (0x00059cda) bg_cl_pane_g5

0xf06a,	// (0x00059ce2) bg_cl_pane_g6

0xf072,	// (0x00059cea) bg_cl_pane_g7

0xf07a,	// (0x00059cf2) bg_cl_pane_g8

0xf082,	// (0x00059cfa) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005a71a) bg_cl_pane_g

0xbce9,	// (0x00056961) aid_height_cl_leading_ParamLimits

0xbce9,	// (0x00056961) aid_height_cl_leading

0xbcf5,	// (0x0005696d) aid_height_cl_text_ParamLimits

0xbcf5,	// (0x0005696d) aid_height_cl_text

0x0c8f,	// (0x0004b907) bg_cl_header_pane_ParamLimits

0x0c8f,	// (0x0004b907) bg_cl_header_pane

0xbd0d,	// (0x00056985) cl_header_pane_g1_ParamLimits

0xbd0d,	// (0x00056985) cl_header_pane_g1

0xbd1a,	// (0x00056992) cl_header_pane_t1_ParamLimits

0xbd1a,	// (0x00056992) cl_header_pane_t1

0xf08a,	// (0x00059d02) cl_list_pane

0xed0f,	// (0x00059987) hc_scroll_pane_cp01

0x3354,	// (0x0004dfcc) bg_cl_header_pane_g1

0xebf5,	// (0x0005986d) bg_cl_header_pane_g2

0x3374,	// (0x0004dfec) bg_cl_header_pane_g3

0xec05,	// (0x0005987d) bg_cl_header_pane_g4

0xebfd,	// (0x00059875) bg_cl_header_pane_g5

0xee19,	// (0x00059a91) bg_cl_header_pane_g6

0xec1d,	// (0x00059895) bg_cl_header_pane_g7

0xec25,	// (0x0005989d) bg_cl_header_pane_g8

0xec15,	// (0x0005988d) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005a72d) bg_cl_header_pane_g

0xbd2c,	// (0x000569a4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbd2c,	// (0x000569a4) hc_cl_list_double_graphic_heading_pane

0xbd3d,	// (0x000569b5) hc_cl_list_single_graphic_pane_ParamLimits

0xbd3d,	// (0x000569b5) hc_cl_list_single_graphic_pane

0xbd56,	// (0x000569ce) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbd56,	// (0x000569ce) hc_cl_list_single_graphic_pane_g1

0xbd62,	// (0x000569da) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbd62,	// (0x000569da) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005a740) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005a740) hc_cl_list_single_graphic_pane_g

0xbd76,	// (0x000569ee) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbd76,	// (0x000569ee) hc_cl_list_single_graphic_pane_t1

0xbd56,	// (0x000569ce) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbd56,	// (0x000569ce) hc_cl_list_double_graphic_heading_pane_g1

0xbd8b,	// (0x00056a03) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd8b,	// (0x00056a03) hc_cl_list_double_graphic_heading_pane_g2

0xbd9f,	// (0x00056a17) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd9f,	// (0x00056a17) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005a745) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005a745) hc_cl_list_double_graphic_heading_pane_g

0xbdb3,	// (0x00056a2b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbdb3,	// (0x00056a2b) hc_cl_list_double_graphic_heading_pane_t1

0xbdc8,	// (0x00056a40) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbdc8,	// (0x00056a40) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005a74c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005a74c) hc_cl_list_double_graphic_heading_pane_t

0xbde5,	// (0x00056a5d) vid4_progress_pane_g1

0xbdf5,	// (0x00056a6d) vid4_progress_pane_g2

0x3619,	// (0x0004e291) vid4_progress_pane_g3

0xbe05,	// (0x00056a7d) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005a751) vid4_progress_pane_g

0xbe23,	// (0x00056a9b) vid4_progress_pane_t1

0xbe38,	// (0x00056ab0) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005a75c) vid4_progress_pane_t

0xbe63,	// (0x00056adb) wait_bar_pane_cp07

0xdf8f,	// (0x00058c07) blid_firmament_pane_ParamLimits

0xdfd2,	// (0x00058c4a) popup_blid_sat_info2_window_g1

0xdff6,	// (0x00058c6e) popup_blid_sat_info2_window_t3

0xe004,	// (0x00058c7c) popup_blid_sat_info2_window_t4

0xe012,	// (0x00058c8a) popup_blid_sat_info2_window_t5

0xe020,	// (0x00058c98) popup_blid_sat_info2_window_t6

0xe030,	// (0x00058ca8) popup_blid_sat_info2_window_t7

0xe03e,	// (0x00058cb6) popup_blid_sat_info2_window_t8

0xe04c,	// (0x00058cc4) popup_blid_sat_info2_window_t9

0xe05a,	// (0x00058cd2) popup_blid_sat_info2_window_t10

0xe11c,	// (0x00058d94) aid_firma_cardinal_ParamLimits

0xe130,	// (0x00058da8) blid_firmament_pane_t1_ParamLimits

0xe147,	// (0x00058dbf) blid_firmament_pane_t2_ParamLimits

0xe15e,	// (0x00058dd6) blid_firmament_pane_t3_ParamLimits

0xe175,	// (0x00058ded) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0005a36f) blid_firmament_pane_t_ParamLimits

0xe18c,	// (0x00058e04) blid_sat_info_pane_ParamLimits

0x412d,	// (0x0004eda5) main_cam_set_pane_ParamLimits

0xa23a,	// (0x00054eb2) aid_size_cell_colour_35_ParamLimits

0xa254,	// (0x00054ecc) aid_size_cell_colour_112_ParamLimits

0xa26b,	// (0x00054ee3) aid_size_cell_effect_ParamLimits

0x412d,	// (0x0004eda5) bg_tb_trans_pane_cp02_ParamLimits

0x413b,	// (0x0004edb3) heading_imed_pane_ParamLimits

0xa285,	// (0x00054efd) listscroll_imed_pane_ParamLimits

0x4497,	// (0x0004f10f) popup_call2_audio_first_window_g5_ParamLimits

0x4497,	// (0x0004f10f) popup_call2_audio_first_window_g5

0xa96d,	// (0x000555e5) aid_size_touch_image3_arrow_left_ParamLimits

0xa96d,	// (0x000555e5) aid_size_touch_image3_arrow_left

0xa983,	// (0x000555fb) aid_size_touch_image3_arrow_right_ParamLimits

0xa983,	// (0x000555fb) aid_size_touch_image3_arrow_right

0xbe4e,	// (0x00056ac6) vid4_progress_pane_t3

0xa522,	// (0x0005519a) main_hwr_training_symbol_option_pane_ParamLimits

0xa522,	// (0x0005519a) main_hwr_training_symbol_option_pane

0xe97f,	// (0x000595f7) popup_hwr_training_preview_window_ParamLimits

0xe97f,	// (0x000595f7) popup_hwr_training_preview_window

0xa583,	// (0x000551fb) hwr_training_navi_pane_g5_ParamLimits

0xa583,	// (0x000551fb) hwr_training_navi_pane_g5

0xebe3,	// (0x0005985b) popup_char_count_window

0xb7c6,	// (0x0005643e) bg_popup_sub_pane_cp20_ParamLimits

0xb7d4,	// (0x0005644c) list_vitu2_match_list_pane_ParamLimits

0xb7e0,	// (0x00056458) vitu2_page_scroll_pane_ParamLimits

0xb7e0,	// (0x00056458) vitu2_page_scroll_pane

0xf093,	// (0x00059d0b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xf093,	// (0x00059d0b) list_single_hwr_training_symbol_option_pane

0xf0a6,	// (0x00059d1e) list_single_hwr_training_symbol_option_pane_g1

0xf0ae,	// (0x00059d26) list_single_hwr_training_symbol_option_pane_t1

0xf0bc,	// (0x00059d34) bg_button_pane_cp023

0xf0c5,	// (0x00059d3d) bg_button_pane_cp024

0xbe75,	// (0x00056aed) vitu2_page_scroll_pane_g1

0xbe7d,	// (0x00056af5) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005a763) vitu2_page_scroll_pane_g

0xbe85,	// (0x00056afd) vitu2_page_scroll_pane_t1

0x0e40,	// (0x0004bab8) popup_char_count_window_g1

0x0e49,	// (0x0004bac1) popup_char_count_window_g2

0x0e52,	// (0x0004baca) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005a768) popup_char_count_window_g

0x0e5b,	// (0x0004bad3) popup_char_count_window_t1

0x050a,	// (0x0004b182) main_vded2_pane

0xe67e,	// (0x000592f6) aid_size_cell_imed_line

0xe688,	// (0x00059300) grid_imed_line_width_pane

0xade1,	// (0x00055a59) vid4_indicators_pane_g4

0x0e69,	// (0x0004bae1) cell_imed_line_width_pane_ParamLimits

0x0e69,	// (0x0004bae1) cell_imed_line_width_pane

0x0e7d,	// (0x0004baf5) cell_imed_line_width_pane_g1

0xdf69,	// (0x00058be1) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005a76f) cell_imed_line_width_pane_g

0xbe94,	// (0x00056b0c) main_vded2_pane_g1_ParamLimits

0xbe94,	// (0x00056b0c) main_vded2_pane_g1

0xbea1,	// (0x00056b19) main_vded2_pane_g2_ParamLimits

0xbea1,	// (0x00056b19) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005a774) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005a774) main_vded2_pane_g

0xbeaf,	// (0x00056b27) vded2_slider_pane_ParamLimits

0xbeaf,	// (0x00056b27) vded2_slider_pane

0xbebc,	// (0x00056b34) aid_size_touch_vded2_end

0xbec6,	// (0x00056b3e) aid_size_touch_vded2_playhead

0x0e86,	// (0x0004bafe) aid_size_touch_vded2_start

0x0e8e,	// (0x0004bb06) vded2_slider_bg_pane

0x0e97,	// (0x0004bb0f) vded2_slider_pane_g1

0x0ea0,	// (0x0004bb18) vded2_slider_pane_g2

0xbece,	// (0x00056b46) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005a779) vded2_slider_pane_g

0x0ea8,	// (0x0004bb20) vded2_slider_bg_pane_g1

0x0eb1,	// (0x0004bb29) vded2_slider_bg_pane_g2

0x0eba,	// (0x0004bb32) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0005a780) vded2_slider_bg_pane_g

0x869b,	// (0x00053313) aid_postcard_touch_down_pane_ParamLimits

0x869b,	// (0x00053313) aid_postcard_touch_down_pane

0x86ab,	// (0x00053323) aid_postcard_touch_up_pane_ParamLimits

0x86ab,	// (0x00053323) aid_postcard_touch_up_pane

0x050a,	// (0x0004b182) main_blid2_pane

0x4e73,	// (0x0004faeb) popup_blid2_search_window

0x050a,	// (0x0004b182) blid2_gps_pane

0x050a,	// (0x0004b182) blid2_navig_pane

0x050a,	// (0x0004b182) blid2_search_pane

0x050a,	// (0x0004b182) blid2_tripm_pane

0xbed7,	// (0x00056b4f) blid2_search_pane_g1_ParamLimits

0xbed7,	// (0x00056b4f) blid2_search_pane_g1

0xbee7,	// (0x00056b5f) blid2_search_pane_t1_ParamLimits

0xbee7,	// (0x00056b5f) blid2_search_pane_t1

0xbef9,	// (0x00056b71) aid_size_cell_blid2_gps_ParamLimits

0xbef9,	// (0x00056b71) aid_size_cell_blid2_gps

0xbf09,	// (0x00056b81) blid2_gps_pane_g1_ParamLimits

0xbf09,	// (0x00056b81) blid2_gps_pane_g1

0xbf15,	// (0x00056b8d) grid_blid2_satellite_pane_ParamLimits

0xbf15,	// (0x00056b8d) grid_blid2_satellite_pane

0xbf25,	// (0x00056b9d) blid2_navig_pane_g1_ParamLimits

0xbf25,	// (0x00056b9d) blid2_navig_pane_g1

0xbf31,	// (0x00056ba9) blid2_navig_pane_t1_ParamLimits

0xbf31,	// (0x00056ba9) blid2_navig_pane_t1

0xbf43,	// (0x00056bbb) blid2_navig_pane_t2_ParamLimits

0xbf43,	// (0x00056bbb) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0005a787) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0005a787) blid2_navig_pane_t

0xbf55,	// (0x00056bcd) blid2_navig_ring_pane_ParamLimits

0xbf55,	// (0x00056bcd) blid2_navig_ring_pane

0xbf65,	// (0x00056bdd) blid2_speed_pane_ParamLimits

0xbf65,	// (0x00056bdd) blid2_speed_pane

0xbf71,	// (0x00056be9) blid2_tripm_pane_g1_ParamLimits

0xbf71,	// (0x00056be9) blid2_tripm_pane_g1

0xbf81,	// (0x00056bf9) blid2_tripm_pane_g2_ParamLimits

0xbf81,	// (0x00056bf9) blid2_tripm_pane_g2

0xbf8d,	// (0x00056c05) blid2_tripm_pane_g3_ParamLimits

0xbf8d,	// (0x00056c05) blid2_tripm_pane_g3

0xbf99,	// (0x00056c11) blid2_tripm_pane_g4_ParamLimits

0xbf99,	// (0x00056c11) blid2_tripm_pane_g4

0xbfa5,	// (0x00056c1d) blid2_tripm_pane_g5_ParamLimits

0xbfa5,	// (0x00056c1d) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0005a78c) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0005a78c) blid2_tripm_pane_g

0xbfc1,	// (0x00056c39) blid2_tripm_pane_t1_ParamLimits

0xbfc1,	// (0x00056c39) blid2_tripm_pane_t1

0xbfd5,	// (0x00056c4d) blid2_tripm_pane_t2_ParamLimits

0xbfd5,	// (0x00056c4d) blid2_tripm_pane_t2

0xbfe7,	// (0x00056c5f) blid2_tripm_pane_t3_ParamLimits

0xbfe7,	// (0x00056c5f) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0005a799) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0005a799) blid2_tripm_pane_t

0xc019,	// (0x00056c91) cell_blid2_satellite_pane_ParamLimits

0xc019,	// (0x00056c91) cell_blid2_satellite_pane

0xc033,	// (0x00056cab) cell_blid2_satellite_pane_g1

0x0ec3,	// (0x0004bb3b) cell_blid2_satellite_pane_t1

0xe19c,	// (0x00058e14) blid2_speed_pane_g1

0x0ed1,	// (0x0004bb49) blid2_speed_pane_t1

0x0edf,	// (0x0004bb57) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0005a7a2) blid2_speed_pane_t

0xe19c,	// (0x00058e14) blid2_navig_ring_pane_g1

0xc03c,	// (0x00056cb4) blid2_navig_ring_pane_g2

0xc044,	// (0x00056cbc) blid2_navig_ring_pane_g3

0xc04c,	// (0x00056cc4) blid2_navig_ring_pane_g4

0xc054,	// (0x00056ccc) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0005a7a7) blid2_navig_ring_pane_g

0x050a,	// (0x0004b182) bg_popup_window_pane_cp011

0x0eed,	// (0x0004bb65) popup_blid2_search_window_g1

0x0ef5,	// (0x0004bb6d) popup_blid2_search_window_t1

0x0f03,	// (0x0004bb7b) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0005a7b2) popup_blid2_search_window_t

0x3263,	// (0x0004dedb) main_browser_pane_g1

0x2f80,	// (0x0004dbf8) main_browser_pane_ParamLimits

0xad96,	// (0x00055a0e) bg_button_pane_cp011_ParamLimits

0xb088,	// (0x00055d00) cell_vitu2_function_pane_g1_ParamLimits

0x4e65,	// (0x0004fadd) bg_popup_sub_pane_cp22_ParamLimits

0xb97a,	// (0x000565f2) input_focus_pane_cp08_ParamLimits

0xb991,	// (0x00056609) popup_vitu2_query_button_pane_ParamLimits

0xb991,	// (0x00056609) popup_vitu2_query_button_pane

0xb9a2,	// (0x0005661a) popup_vitu2_query_input_button_pane

0xee56,	// (0x00059ace) popup_vitu2_query_window_g1_ParamLimits

0xb9ac,	// (0x00056624) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005a6b3) popup_vitu2_query_window_g_ParamLimits

0x050a,	// (0x0004b182) bg_button_pane_cp026

0xc05c,	// (0x00056cd4) popup_vitu2_query_input_button_pane_g1

0x050a,	// (0x0004b182) bg_button_pane_cp025

0x0f11,	// (0x0004bb89) popup_vitu2_query_button_pane_t1

0x97e0,	// (0x00054458) main_mp3_pane_t6

0x97f0,	// (0x00054468) popup_slider_window_cp01

0xacb7,	// (0x0005592f) cam4_battery_pane

0xada4,	// (0x00055a1c) cam4_battery_pane_cp02

0xbddd,	// (0x00056a55) cam4_battery_pane_cp01

0xbddd,	// (0x00056a55) cam4_battery_pane_cp03

0xea99,	// (0x00059711) cam4_battery_pane_g1

0xe19c,	// (0x00058e14) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0005a7b7) cam4_battery_pane_g

0xe068,	// (0x00058ce0) popup_blid_sat_info2_window_t11

0x7f5a,	// (0x00052bd2) aid_size_touch_mv_arrow_left_ParamLimits

0x7f83,	// (0x00052bfb) aid_size_touch_mv_arrow_right_ParamLimits

0x39bf,	// (0x0004e637) navi_pane_g1_ParamLimits

0x7fac,	// (0x00052c24) navi_pane_g2_ParamLimits

0x7fda,	// (0x00052c52) navi_pane_g3_ParamLimits

0xf409,	// (0x0005a081) navi_pane_g_ParamLimits

0x8034,	// (0x00052cac) navi_pane_mv_t1_ParamLimits

0xa291,	// (0x00054f09) grid_imed_effect_pane_ParamLimits

0x6cb8,	// (0x00051930) aid_placing_vt_slider_lsc

0x31b4,	// (0x0004de2c) aid_placing_vt_slider_prt

0x412d,	// (0x0004eda5) bg_tb_trans_pane_cp01_ParamLimits

0xe31f,	// (0x00058f97) popup_image_details_window_g1_ParamLimits

0xe332,	// (0x00058faa) popup_image_details_window_g2_ParamLimits

0xe347,	// (0x00058fbf) popup_image_details_window_g3_ParamLimits

0xe347,	// (0x00058fbf) popup_image_details_window_g3

0xf73c,	// (0x0005a3b4) popup_image_details_window_g_ParamLimits

0xe35b,	// (0x00058fd3) popup_image_details_window_t1_ParamLimits

0xe36d,	// (0x00058fe5) popup_image_details_window_t2_ParamLimits

0xe386,	// (0x00058ffe) popup_image_details_window_t3_ParamLimits

0xe39a,	// (0x00059012) popup_image_details_window_t4_ParamLimits

0xe3b5,	// (0x0005902d) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0005a3bb) popup_image_details_window_t_ParamLimits

0xbd01,	// (0x00056979) cl_header_name_pane_ParamLimits

0xbd01,	// (0x00056979) cl_header_name_pane

0xc064,	// (0x00056cdc) cl_header_name_pane_t1_ParamLimits

0xc064,	// (0x00056cdc) cl_header_name_pane_t1

0xc07b,	// (0x00056cf3) cl_header_name_pane_t2_ParamLimits

0xc07b,	// (0x00056cf3) cl_header_name_pane_t2

0xc0a5,	// (0x00056d1d) cl_header_name_pane_t3_ParamLimits

0xc0a5,	// (0x00056d1d) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0005a7bc) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0005a7bc) cl_header_name_pane_t

0x8005,	// (0x00052c7d) navi_pane_mv_g2_ParamLimits

0xebbd,	// (0x00059835) field_vitu2_entry_pane_g1_ParamLimits

0xebc9,	// (0x00059841) field_vitu2_entry_pane_g2_ParamLimits

0xebd5,	// (0x0005984d) field_vitu2_entry_pane_g3_ParamLimits

0xebd5,	// (0x0005984d) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005a5b2) field_vitu2_entry_pane_g_ParamLimits

0xb018,	// (0x00055c90) cell_vitu2_itu_pane_g1_ParamLimits

0xb028,	// (0x00055ca0) cell_vitu2_itu_pane_g2_ParamLimits

0xb028,	// (0x00055ca0) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005a5be) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005a5be) cell_vitu2_itu_pane_g

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp05_ParamLimits

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp05

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp03

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp04

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp10_ParamLimits

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp10

0xbca3,	// (0x0005691b) bg_vkb2_func_pane_cp08

0xbc89,	// (0x00056901) bg_vkb2_func_pane_cp06

0xbc97,	// (0x0005690f) bg_vkb2_func_pane_cp07

0x0e16,	// (0x0004ba8e) bg_vkb2_func_pane_cp11_ParamLimits

0x0e16,	// (0x0004ba8e) bg_vkb2_func_pane_cp11

0x0e2b,	// (0x0004baa3) bg_vkb2_func_pane_cp12_ParamLimits

0x0e2b,	// (0x0004baa3) bg_vkb2_func_pane_cp12

0x050a,	// (0x0004b182) bg_vkb2_func_pane_cp09

0xebf5,	// (0x0005986d) bg_vkb2_func_pane_g1

0x3374,	// (0x0004dfec) bg_vkb2_func_pane_g2

0xebfd,	// (0x00059875) bg_vkb2_func_pane_g3

0xec05,	// (0x0005987d) bg_vkb2_func_pane_g4

0xee19,	// (0x00059a91) bg_vkb2_func_pane_g5

0xec1d,	// (0x00059895) bg_vkb2_func_pane_g6

0xec25,	// (0x0005989d) bg_vkb2_func_pane_g7

0xec15,	// (0x0005988d) bg_vkb2_func_pane_g8

0x3354,	// (0x0004dfcc) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0005a7c3) bg_vkb2_func_pane_g

0xbfb3,	// (0x00056c2b) blid2_tripm_pane_g6_ParamLimits

0xbfb3,	// (0x00056c2b) blid2_tripm_pane_g6

0xea53,	// (0x000596cb) mp4_progress_pane_g1

0xc00d,	// (0x00056c85) blid2_tripm_values_pane_ParamLimits

0xc00d,	// (0x00056c85) blid2_tripm_values_pane

0xc0ca,	// (0x00056d42) blid2_tripm_values_pane_t1

0xc0d8,	// (0x00056d50) blid2_tripm_values_pane_t2

0xc0e6,	// (0x00056d5e) blid2_tripm_values_pane_t3

0xc0f4,	// (0x00056d6c) blid2_tripm_values_pane_t4

0xc102,	// (0x00056d7a) blid2_tripm_values_pane_t5

0xc110,	// (0x00056d88) blid2_tripm_values_pane_t6

0xc11e,	// (0x00056d96) blid2_tripm_values_pane_t7

0xc12c,	// (0x00056da4) blid2_tripm_values_pane_t8

0xc13a,	// (0x00056db2) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0005a7d6) blid2_tripm_values_pane_t

0x6cf8,	// (0x00051970) call_video_pane_t1_ParamLimits

0x6d19,	// (0x00051991) call_video_pane_t2_ParamLimits

0xf292,	// (0x00059f0a) call_video_pane_t_ParamLimits

0x856c,	// (0x000531e4) msg_header_pane_g1_ParamLimits

0x3bda,	// (0x0004e852) msg_header_pane_g2_ParamLimits

0x3bda,	// (0x0004e852) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005a124) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005a124) msg_header_pane_g

0x2f80,	// (0x0004dbf8) main_clock2_pane_ParamLimits

0xa021,	// (0x00054c99) grid_clock2_toolbar_pane_ParamLimits

0xa021,	// (0x00054c99) grid_clock2_toolbar_pane

0xa021,	// (0x00054c99) listscroll_clock2_pane_ParamLimits

0xa021,	// (0x00054c99) listscroll_clock2_pane

0xa0ce,	// (0x00054d46) main_clock2_pane_t3_ParamLimits

0xa0ce,	// (0x00054d46) main_clock2_pane_t3

0xa0e0,	// (0x00054d58) main_clock2_pane_t4_ParamLimits

0xa0e0,	// (0x00054d58) main_clock2_pane_t4

0x0f1f,	// (0x0004bb97) cell_clock2_toolbar_pane

0x0f27,	// (0x0004bb9f) cell_clock2_toolbar_pane_cp01

0x0f27,	// (0x0004bb9f) cell_clock2_toolbar_pane_cp02

0x0f2f,	// (0x0004bba7) cell_clock2_toolbar_pane_cp03

0x0f37,	// (0x0004bbaf) list_clock2_pane

0x3916,	// (0x0004e58e) scroll_pane_cp10

0x0f3f,	// (0x0004bbb7) list_single_clock2_pane_ParamLimits

0x0f3f,	// (0x0004bbb7) list_single_clock2_pane

0x3a5f,	// (0x0004e6d7) list_highlight_pane_cp08

0x0f4c,	// (0x0004bbc4) list_single_clock2_pane_t1

0x0f5a,	// (0x0004bbd2) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0005a7e9) list_single_clock2_pane_t

0x050a,	// (0x0004b182) bg_button_pane_cp10

0x0f68,	// (0x0004bbe0) cell_clock2_toolbar_pane_g1

0x8609,	// (0x00053281) aid_main_viewer_pane_g1_ParamLimits

0x8609,	// (0x00053281) aid_main_viewer_pane_g1

0x8615,	// (0x0005328d) aid_main_viewer_pane_g2_ParamLimits

0x8615,	// (0x0005328d) aid_main_viewer_pane_g2

0x8621,	// (0x00053299) aid_main_viewer_pane_g3_ParamLimits

0x8621,	// (0x00053299) aid_main_viewer_pane_g3

0x8632,	// (0x000532aa) aid_main_viewer_pane_g4_ParamLimits

0x8632,	// (0x000532aa) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005a135) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005a135) aid_main_viewer_pane_g

0x8da6,	// (0x00053a1e) main_calc_pane_ParamLimits

0x8db3,	// (0x00053a2b) main_dialer2_pane_ParamLimits

0x050a,	// (0x0004b182) main_cam6_pane

0x050a,	// (0x0004b182) main_vid6_pane

0xa02d,	// (0x00054ca5) listscroll_gen_pane_cp06_ParamLimits

0xa02d,	// (0x00054ca5) listscroll_gen_pane_cp06

0xa0f2,	// (0x00054d6a) main_clock2_pane_t5_ParamLimits

0xa0f2,	// (0x00054d6a) main_clock2_pane_t5

0xa13b,	// (0x00054db3) aid_call2_pane_cp10_ParamLimits

0xa14d,	// (0x00054dc5) aid_call_pane_cp10_ParamLimits

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa15f,	// (0x00054dd7) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa15f,	// (0x00054dd7) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3994,	// (0x0004e60c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005a46b) popup_clock_analogue_window_cp10_g_ParamLimits

0xa171,	// (0x00054de9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa91a,	// (0x00055592) cell_dialer2_keypad_pane_g2_ParamLimits

0xa91a,	// (0x00055592) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005a551) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005a551) cell_dialer2_keypad_pane_g

0xa936,	// (0x000555ae) cell_dialer2_keypad_pane_t1

0xb353,	// (0x00055fcb) main_cset_text2_pane_ParamLimits

0xb353,	// (0x00055fcb) main_cset_text2_pane

0xf036,	// (0x00059cae) area_vitu2_query_pane_g1_ParamLimits

0xbc28,	// (0x000568a0) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005a706) area_vitu2_query_pane_g_ParamLimits

0x0d98,	// (0x0004ba10) area_vitu2_query_pane_t7_ParamLimits

0x0d98,	// (0x0004ba10) area_vitu2_query_pane_t7

0xbc89,	// (0x00056901) bg_button_pane_cp018_ParamLimits

0xbc97,	// (0x0005690f) bg_button_pane_cp021_ParamLimits

0xbca3,	// (0x0005691b) bg_button_pane_cp022_ParamLimits

0xbca3,	// (0x0005691b) bg_vkb2_func_pane_cp08_ParamLimits

0xbc89,	// (0x00056901) bg_vkb2_func_pane_cp06_ParamLimits

0xbc97,	// (0x0005690f) bg_vkb2_func_pane_cp07_ParamLimits

0xbcb4,	// (0x0005692c) input_focus_pane_cp09_ParamLimits

0xc148,	// (0x00056dc0) cam6_autofocus_pane_ParamLimits

0xc148,	// (0x00056dc0) cam6_autofocus_pane

0xc16a,	// (0x00056de2) cam6_image_uncrop_pane_ParamLimits

0xc16a,	// (0x00056de2) cam6_image_uncrop_pane

0xc197,	// (0x00056e0f) cam6_indi_pane_ParamLimits

0xc197,	// (0x00056e0f) cam6_indi_pane

0xc1b1,	// (0x00056e29) cam6_mode_pane_ParamLimits

0xc1b1,	// (0x00056e29) cam6_mode_pane

0xc1c5,	// (0x00056e3d) cam6_timer_pane_ParamLimits

0xc1c5,	// (0x00056e3d) cam6_timer_pane

0xc1d1,	// (0x00056e49) cam6_zoom_pane_ParamLimits

0xc1d1,	// (0x00056e49) cam6_zoom_pane

0xc1e9,	// (0x00056e61) cam6_mode_pane_g1_ParamLimits

0xc1e9,	// (0x00056e61) cam6_mode_pane_g1

0xc1f5,	// (0x00056e6d) cam6_mode_pane_g2_ParamLimits

0xc1f5,	// (0x00056e6d) cam6_mode_pane_g2

0xc201,	// (0x00056e79) cam6_mode_pane_g3_ParamLimits

0xc201,	// (0x00056e79) cam6_mode_pane_g3

0xc20d,	// (0x00056e85) cam6_mode_pane_g4_ParamLimits

0xc20d,	// (0x00056e85) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0005a7ee) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0005a7ee) cam6_mode_pane_g

0x0f70,	// (0x0004bbe8) bg_tb_trans_pane_cp08_ParamLimits

0x0f70,	// (0x0004bbe8) bg_tb_trans_pane_cp08

0x0f7e,	// (0x0004bbf6) cam6_battery_pane_ParamLimits

0x0f7e,	// (0x0004bbf6) cam6_battery_pane

0x0f94,	// (0x0004bc0c) cam6_indi_pane_g1_ParamLimits

0x0f94,	// (0x0004bc0c) cam6_indi_pane_g1

0x0fa6,	// (0x0004bc1e) cam6_indi_pane_g2_ParamLimits

0x0fa6,	// (0x0004bc1e) cam6_indi_pane_g2

0x0fb8,	// (0x0004bc30) cam6_indi_pane_g3_ParamLimits

0x0fb8,	// (0x0004bc30) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0005a7f7) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0005a7f7) cam6_indi_pane_g

0x0fca,	// (0x0004bc42) cam6_indi_pane_t1_ParamLimits

0x0fca,	// (0x0004bc42) cam6_indi_pane_t1

0xae1e,	// (0x00055a96) cam6_autofocus_pane_g1

0xae16,	// (0x00055a8e) cam6_autofocus_pane_g2

0xae2e,	// (0x00055aa6) cam6_autofocus_pane_g3

0xae26,	// (0x00055a9e) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0005a7fe) cam6_autofocus_pane_g

0x0ff0,	// (0x0004bc68) cam6_timer_pane_g1

0x0ff8,	// (0x0004bc70) cam6_timer_pane_t1

0x1006,	// (0x0004bc7e) cam6_zoom_cont_pane

0x100e,	// (0x0004bc86) cam6_zoom_pane_g1

0x1016,	// (0x0004bc8e) cam6_zoom_pane_g2

0xc219,	// (0x00056e91) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0005a807) cam6_zoom_pane_g

0xe19c,	// (0x00058e14) cam6_battery_pane_g1

0xe19c,	// (0x00058e14) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0005a378) cam6_battery_pane_g

0x101e,	// (0x0004bc96) cam6_zoom_cont_pane_g1

0x1027,	// (0x0004bc9f) cam6_zoom_cont_pane_g2

0x1030,	// (0x0004bca8) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0005a80e) cam6_zoom_cont_pane_g

0xc236,	// (0x00056eae) cam6_mode_pane_cp_ParamLimits

0xc236,	// (0x00056eae) cam6_mode_pane_cp

0xc24a,	// (0x00056ec2) cam6_zoom_pane_cp_ParamLimits

0xc24a,	// (0x00056ec2) cam6_zoom_pane_cp

0xc262,	// (0x00056eda) vid6_image_uncrop_cif_pane_ParamLimits

0xc262,	// (0x00056eda) vid6_image_uncrop_cif_pane

0xc28e,	// (0x00056f06) vid6_image_uncrop_nhd_pane_ParamLimits

0xc28e,	// (0x00056f06) vid6_image_uncrop_nhd_pane

0xc2ab,	// (0x00056f23) vid6_image_uncrop_vga_pane_ParamLimits

0xc2ab,	// (0x00056f23) vid6_image_uncrop_vga_pane

0xc2ca,	// (0x00056f42) vid6_image_uncrop_wvga_pane_ParamLimits

0xc2ca,	// (0x00056f42) vid6_image_uncrop_wvga_pane

0xc2e7,	// (0x00056f5f) vid6_indi_pane_ParamLimits

0xc2e7,	// (0x00056f5f) vid6_indi_pane

0x0f70,	// (0x0004bbe8) bg_tb_trans_pane_cp09_ParamLimits

0x0f70,	// (0x0004bbe8) bg_tb_trans_pane_cp09

0x1048,	// (0x0004bcc0) cam6_battery_pane_cp_ParamLimits

0x1048,	// (0x0004bcc0) cam6_battery_pane_cp

0x1054,	// (0x0004bccc) vid6_indi_pane_g1_ParamLimits

0x1054,	// (0x0004bccc) vid6_indi_pane_g1

0x1066,	// (0x0004bcde) vid6_indi_pane_g2_ParamLimits

0x1066,	// (0x0004bcde) vid6_indi_pane_g2

0x1078,	// (0x0004bcf0) vid6_indi_pane_g3_ParamLimits

0x1078,	// (0x0004bcf0) vid6_indi_pane_g3

0x108d,	// (0x0004bd05) vid6_indi_pane_g4_ParamLimits

0x108d,	// (0x0004bd05) vid6_indi_pane_g4

0x10a2,	// (0x0004bd1a) vid6_indi_pane_g5_ParamLimits

0x10a2,	// (0x0004bd1a) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0005a815) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0005a815) vid6_indi_pane_g

0x10bc,	// (0x0004bd34) vid6_indi_pane_t1_ParamLimits

0x10bc,	// (0x0004bd34) vid6_indi_pane_t1

0x10d2,	// (0x0004bd4a) vid6_indi_pane_t2_ParamLimits

0x10d2,	// (0x0004bd4a) vid6_indi_pane_t2

0x10fa,	// (0x0004bd72) vid6_indi_pane_t3_ParamLimits

0x10fa,	// (0x0004bd72) vid6_indi_pane_t3

0x1122,	// (0x0004bd9a) vid6_indi_pane_t4_ParamLimits

0x1122,	// (0x0004bd9a) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0005a820) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0005a820) vid6_indi_pane_t

0x1146,	// (0x0004bdbe) wait_bar_pane_cp08

0xc30c,	// (0x00056f84) main_cset_text2_pane_t1_ParamLimits

0xc30c,	// (0x00056f84) main_cset_text2_pane_t1

0xc221,	// (0x00056e99) listscroll_gen_pane_cp06_t1_ParamLimits

0xc221,	// (0x00056e99) listscroll_gen_pane_cp06_t1

0x050a,	// (0x0004b182) main_cam6_set_pane

0xaca9,	// (0x00055921) bg_tb_trans_pane_cp06_ParamLimits

0xacbf,	// (0x00055937) cam4_indicators_pane_g1_ParamLimits

0xacd0,	// (0x00055948) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005a58e) cam4_indicators_pane_g_ParamLimits

0xacee,	// (0x00055966) cam4_indicators_pane_t1_ParamLimits

0xad96,	// (0x00055a0e) bg_tb_trans_pane_cp07_ParamLimits

0xadae,	// (0x00055a26) vid4_indicators_pane_g1_ParamLimits

0xadbf,	// (0x00055a37) vid4_indicators_pane_g2_ParamLimits

0xadd0,	// (0x00055a48) vid4_indicators_pane_g3_ParamLimits

0xade1,	// (0x00055a59) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005a5a0) vid4_indicators_pane_g_ParamLimits

0xadfd,	// (0x00055a75) vid4_indicators_pane_t1_ParamLimits

0xbde5,	// (0x00056a5d) vid4_progress_pane_g1_ParamLimits

0xbdf5,	// (0x00056a6d) vid4_progress_pane_g2_ParamLimits

0x3619,	// (0x0004e291) vid4_progress_pane_g3_ParamLimits

0xbe05,	// (0x00056a7d) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005a751) vid4_progress_pane_g_ParamLimits

0xbe23,	// (0x00056a9b) vid4_progress_pane_t1_ParamLimits

0xbe38,	// (0x00056ab0) vid4_progress_pane_t2_ParamLimits

0xbe4e,	// (0x00056ac6) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005a75c) vid4_progress_pane_t_ParamLimits

0xbe63,	// (0x00056adb) wait_bar_pane_cp07_ParamLimits

0xc33f,	// (0x00056fb7) main_cam6_set_pane_g2_ParamLimits

0xc33f,	// (0x00056fb7) main_cam6_set_pane_g2

0xc34b,	// (0x00056fc3) main_cset6_listscroll_pane_ParamLimits

0xc34b,	// (0x00056fc3) main_cset6_listscroll_pane

0xc376,	// (0x00056fee) main_cset6_slider_pane_ParamLimits

0xc376,	// (0x00056fee) main_cset6_slider_pane

0xc382,	// (0x00056ffa) main_cset6_text2_pane_ParamLimits

0xc382,	// (0x00056ffa) main_cset6_text2_pane

0x1155,	// (0x0004bdcd) main_cset6_text_pane

0x115d,	// (0x0004bdd5) main_cset_list_pane_copy1_ParamLimits

0x115d,	// (0x0004bdd5) main_cset_list_pane_copy1

0x116d,	// (0x0004bde5) scroll_pane_cp028_copy1

0xc395,	// (0x0005700d) cset_list_set_pane_copy1

0xc3a8,	// (0x00057020) aid_position_infowindow_above_copy1

0xc3b0,	// (0x00057028) aid_position_infowindow_below_copy1

0xc3b8,	// (0x00057030) cset_list_set_pane_g1_copy1

0x0cd0,	// (0x0004b948) cset_list_set_pane_g3_copy1_ParamLimits

0x0cd0,	// (0x0004b948) cset_list_set_pane_g3_copy1

0xb638,	// (0x000562b0) cset_list_set_pane_t1_copy1_ParamLimits

0xb638,	// (0x000562b0) cset_list_set_pane_t1_copy1

0x412d,	// (0x0004eda5) list_highlight_pane_cp021_copy1_ParamLimits

0x412d,	// (0x0004eda5) list_highlight_pane_cp021_copy1

0x1176,	// (0x0004bdee) cset6_slider_pane_ParamLimits

0x1176,	// (0x0004bdee) cset6_slider_pane

0x11a2,	// (0x0004be1a) main_cset6_slider_pane_g1_ParamLimits

0x11a2,	// (0x0004be1a) main_cset6_slider_pane_g1

0xc3c0,	// (0x00057038) main_cset6_slider_pane_g2_ParamLimits

0xc3c0,	// (0x00057038) main_cset6_slider_pane_g2

0x11ca,	// (0x0004be42) main_cset6_slider_pane_g3_ParamLimits

0x11ca,	// (0x0004be42) main_cset6_slider_pane_g3

0xc3e8,	// (0x00057060) main_cset6_slider_pane_g4_ParamLimits

0xc3e8,	// (0x00057060) main_cset6_slider_pane_g4

0xc3f4,	// (0x0005706c) main_cset6_slider_pane_g5_ParamLimits

0xc3f4,	// (0x0005706c) main_cset6_slider_pane_g5

0xed24,	// (0x0005999c) main_cset6_slider_pane_g7_ParamLimits

0xed24,	// (0x0005999c) main_cset6_slider_pane_g7

0xed30,	// (0x000599a8) main_cset6_slider_pane_g8_ParamLimits

0xed30,	// (0x000599a8) main_cset6_slider_pane_g8

0xc402,	// (0x0005707a) main_cset6_slider_pane_g9_ParamLimits

0xc402,	// (0x0005707a) main_cset6_slider_pane_g9

0xc40e,	// (0x00057086) main_cset6_slider_pane_g10_ParamLimits

0xc40e,	// (0x00057086) main_cset6_slider_pane_g10

0xc41a,	// (0x00057092) main_cset6_slider_pane_g11_ParamLimits

0xc41a,	// (0x00057092) main_cset6_slider_pane_g11

0xc426,	// (0x0005709e) main_cset6_slider_pane_g12_ParamLimits

0xc426,	// (0x0005709e) main_cset6_slider_pane_g12

0xc432,	// (0x000570aa) main_cset6_slider_pane_g13_ParamLimits

0xc432,	// (0x000570aa) main_cset6_slider_pane_g13

0xc43e,	// (0x000570b6) main_cset6_slider_pane_g14_ParamLimits

0xc43e,	// (0x000570b6) main_cset6_slider_pane_g14

0xc44a,	// (0x000570c2) main_cset6_slider_pane_g15_ParamLimits

0xc44a,	// (0x000570c2) main_cset6_slider_pane_g15

0xc462,	// (0x000570da) main_cset6_slider_pane_g16_ParamLimits

0xc462,	// (0x000570da) main_cset6_slider_pane_g16

0xc470,	// (0x000570e8) main_cset6_slider_pane_g17_ParamLimits

0xc470,	// (0x000570e8) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0005a829) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0005a829) main_cset6_slider_pane_g

0x11d6,	// (0x0004be4e) main_cset6_slider_pane_t1_ParamLimits

0x11d6,	// (0x0004be4e) main_cset6_slider_pane_t1

0xc496,	// (0x0005710e) main_cset6_slider_pane_t2_ParamLimits

0xc496,	// (0x0005710e) main_cset6_slider_pane_t2

0xc4c1,	// (0x00057139) main_cset6_slider_pane_t3_ParamLimits

0xc4c1,	// (0x00057139) main_cset6_slider_pane_t3

0xc4ec,	// (0x00057164) main_cset6_slider_pane_t4_ParamLimits

0xc4ec,	// (0x00057164) main_cset6_slider_pane_t4

0xc517,	// (0x0005718f) main_cset6_slider_pane_t5_ParamLimits

0xc517,	// (0x0005718f) main_cset6_slider_pane_t5

0x1217,	// (0x0004be8f) main_cset6_slider_pane_t7_ParamLimits

0x1217,	// (0x0004be8f) main_cset6_slider_pane_t7

0xc544,	// (0x000571bc) main_cset6_slider_pane_t8_ParamLimits

0xc544,	// (0x000571bc) main_cset6_slider_pane_t8

0xc568,	// (0x000571e0) main_cset6_slider_pane_t9_ParamLimits

0xc568,	// (0x000571e0) main_cset6_slider_pane_t9

0xc58c,	// (0x00057204) main_cset6_slider_pane_t10_ParamLimits

0xc58c,	// (0x00057204) main_cset6_slider_pane_t10

0xc5b0,	// (0x00057228) main_cset6_slider_pane_t11_ParamLimits

0xc5b0,	// (0x00057228) main_cset6_slider_pane_t11

0x124d,	// (0x0004bec5) main_cset6_slider_pane_t14_ParamLimits

0x124d,	// (0x0004bec5) main_cset6_slider_pane_t14

0x1286,	// (0x0004befe) main_cset6_slider_pane_t15_ParamLimits

0x1286,	// (0x0004befe) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0005a84e) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0005a84e) main_cset6_slider_pane_t

0x0cdf,	// (0x0004b957) cset_slider_pane_g1_copy1

0x0ce8,	// (0x0004b960) cset_slider_pane_g2_copy1

0x0cf1,	// (0x0004b969) cset_slider_pane_g3_copy1

0x050a,	// (0x0004b182) bg_popup_sub_pane_cp011_copy1

0xee62,	// (0x00059ada) main_cset_text_pane_g1_copy1

0xee6a,	// (0x00059ae2) main_cset_text_pane_t1_copy1

0xee78,	// (0x00059af0) main_cset_text_pane_t2_copy1

0xee86,	// (0x00059afe) main_cset_text_pane_t3_copy1

0xee94,	// (0x00059b0c) main_cset_text_pane_t4_copy1

0xeea2,	// (0x00059b1a) main_cset_text_pane_t5_copy1

0xeeb0,	// (0x00059b28) main_cset_text_pane_t6_copy1

0xeebe,	// (0x00059b36) main_cset_text_pane_t7_copy1

0xc5d4,	// (0x0005724c) main_cset_text2_pane_t1_copy1

0x050a,	// (0x0004b182) main_ncimui_pane

0x8df2,	// (0x00053a6a) popup_query_ncimui_window_ParamLimits

0x8df2,	// (0x00053a6a) popup_query_ncimui_window

0x098b,	// (0x0004b603) field_cale_ev2_pane_g4_ParamLimits

0x098b,	// (0x0004b603) field_cale_ev2_pane_g4

0xa63a,	// (0x000552b2) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa63a,	// (0x000552b2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005a52c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005a52c) cell_video_dialer_keypad_pane_g

0xa652,	// (0x000552ca) cell_video_dialer_keypad_pane_t1

0x050a,	// (0x0004b182) bg_popup_window_pane_cp012

0x37e5,	// (0x0004e45d) heading_pane_cp06

0x13ae,	// (0x0004c026) ncim_query_content_pane

0x050a,	// (0x0004b182) bg_popup_heading_pane_cp01

0x13b6,	// (0x0004c02e) ncim_heading_pane_t1

0x13c4,	// (0x0004c03c) ncim_indicator_popup_pane

0x13d6,	// (0x0004c04e) ncim_query_button_pane

0x13ea,	// (0x0004c062) ncim_query_content_pane_t1

0x13fc,	// (0x0004c074) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0005a88d) ncim_query_content_pane_t

0x1436,	// (0x0004c0ae) ncim_query_list_pane

0x1448,	// (0x0004c0c0) ncim_query_popup_pane

0x13c4,	// (0x0004c03c) ncim_indicator_popup_pane_ParamLimits

0xc6f6,	// (0x0005736e) ncim_query_content_pane_g1_ParamLimits

0xc6f6,	// (0x0005736e) ncim_query_content_pane_g1

0x13ea,	// (0x0004c062) ncim_query_content_pane_t1_ParamLimits

0x13fc,	// (0x0004c074) ncim_query_content_pane_t2_ParamLimits

0xc702,	// (0x0005737a) ncim_query_content_pane_t3_ParamLimits

0xc702,	// (0x0005737a) ncim_query_content_pane_t3

0xc71f,	// (0x00057397) ncim_query_content_pane_t4_ParamLimits

0xc71f,	// (0x00057397) ncim_query_content_pane_t4

0xc73c,	// (0x000573b4) ncim_query_content_pane_t5_ParamLimits

0xc73c,	// (0x000573b4) ncim_query_content_pane_t5

0x140e,	// (0x0004c086) ncim_query_content_pane_t6_ParamLimits

0x140e,	// (0x0004c086) ncim_query_content_pane_t6

0xfc15,	// (0x0005a88d) ncim_query_content_pane_t_ParamLimits

0x1436,	// (0x0004c0ae) ncim_query_list_pane_ParamLimits

0x1448,	// (0x0004c0c0) ncim_query_popup_pane_ParamLimits

0x145c,	// (0x0004c0d4) wait_bar_pane_cp04

0x050a,	// (0x0004b182) input_focus_pane_cp011

0x1464,	// (0x0004c0dc) ncim_query_popup_pane_t1

0x1472,	// (0x0004c0ea) ncim_list_query_list_pane_ParamLimits

0x1472,	// (0x0004c0ea) ncim_list_query_list_pane

0x050a,	// (0x0004b182) bg_button_pane_cp027

0x147f,	// (0x0004c0f7) ncim_query_button_pane_g1

0x050a,	// (0x0004b182) list_highlight_pane_cp012

0x1489,	// (0x0004c101) ncim_list_query_list_pane_g1

0x1491,	// (0x0004c109) ncim_list_query_list_pane_t1

0xacdf,	// (0x00055957) cam4_indicators_pane_g3_ParamLimits

0xacdf,	// (0x00055957) cam4_indicators_pane_g3

0xaded,	// (0x00055a65) vid4_indicators_pane_g5_ParamLimits

0xaded,	// (0x00055a65) vid4_indicators_pane_g5

0xbe14,	// (0x00056a8c) vid4_progress_pane_g5_ParamLimits

0xbe14,	// (0x00056a8c) vid4_progress_pane_g5

0xc60f,	// (0x00057287) main_ncimui_pane_g1

0xc665,	// (0x000572dd) ncimui_group_query_pane_ParamLimits

0xc665,	// (0x000572dd) ncimui_group_query_pane

0xc6a1,	// (0x00057319) ncimui_list_pane_ParamLimits

0xc6a1,	// (0x00057319) ncimui_list_pane

0xc6c2,	// (0x0005733a) ncimui_text_pane_ParamLimits

0xc6c2,	// (0x0005733a) ncimui_text_pane

0xc759,	// (0x000573d1) ncimui_text_pane_t1_ParamLimits

0xc759,	// (0x000573d1) ncimui_text_pane_t1

0x149f,	// (0x0004c117) ncimui_list_single_graphic_pane_ParamLimits

0x149f,	// (0x0004c117) ncimui_list_single_graphic_pane

0xc778,	// (0x000573f0) ncimui_query_pane_ParamLimits

0xc778,	// (0x000573f0) ncimui_query_pane

0x050a,	// (0x0004b182) list_highlight_pane_cp013

0x14af,	// (0x0004c127) ncim_list_query_list_pane_t1_copy1

0x1489,	// (0x0004c101) ncim_list_single_graphic_pane_g1

0x14bd,	// (0x0004c135) ncim_query_button_pane_cp01

0x14c9,	// (0x0004c141) ncim_query_entry_pane_ParamLimits

0x14c9,	// (0x0004c141) ncim_query_entry_pane

0x14dc,	// (0x0004c154) ncimui_query_pane_g1

0x14e8,	// (0x0004c160) ncimui_query_pane_t1_ParamLimits

0x14e8,	// (0x0004c160) ncimui_query_pane_t1

0x412d,	// (0x0004eda5) input_focus_pane_cp012

0x1501,	// (0x0004c179) ncim_query_entry_pane_t1

0x2f80,	// (0x0004dbf8) main_im_pane_ParamLimits

0x412d,	// (0x0004eda5) main_mobtv_pane_ParamLimits

0x412d,	// (0x0004eda5) main_mobtv_pane

0xc47e,	// (0x000570f6) main_cset6_slider_pane_g18_ParamLimits

0xc47e,	// (0x000570f6) main_cset6_slider_pane_g18

0xc48a,	// (0x00057102) main_cset6_slider_pane_g19_ParamLimits

0xc48a,	// (0x00057102) main_cset6_slider_pane_g19

0xebd5,	// (0x0005984d) bg_main_mobtv_pane_ParamLimits

0xebd5,	// (0x0005984d) bg_main_mobtv_pane

0xc78b,	// (0x00057403) main_mobtv_info_pane

0xc796,	// (0x0005740e) main_mobtv_loading_pane_ParamLimits

0xc796,	// (0x0005740e) main_mobtv_loading_pane

0x1521,	// (0x0004c199) main_mobtv_pg_channel_list_pane

0x152b,	// (0x0004c1a3) main_mobtv_pg_hdr_pane

0xc7a3,	// (0x0005741b) main_mobtv_programe_curr_pane_ParamLimits

0xc7a3,	// (0x0005741b) main_mobtv_programe_curr_pane

0xc7b0,	// (0x00057428) main_mobtv_programe_next_pane_ParamLimits

0xc7b0,	// (0x00057428) main_mobtv_programe_next_pane

0x1534,	// (0x0004c1ac) popup_mobtv_noti_window

0xe19c,	// (0x00058e14) main_tv_pg_hdr_pane_g1

0x153c,	// (0x0004c1b4) main_tv_pg_hdr_pane_g2

0x1544,	// (0x0004c1bc) main_tv_pg_hdr_pane_g3

0x154c,	// (0x0004c1c4) main_tv_pg_hdr_pane_g4

0x1554,	// (0x0004c1cc) main_tv_pg_hdr_pane_g5

0x155e,	// (0x0004c1d6) main_tv_pg_hdr_pane_g6

0x1568,	// (0x0004c1e0) main_tv_pg_hdr_pane_g7

0x1572,	// (0x0004c1ea) main_tv_pg_hdr_pane_g8

0x157c,	// (0x0004c1f4) main_tv_pg_hdr_pane_g9

0x1586,	// (0x0004c1fe) main_tv_pg_hdr_pane_g10

0x1590,	// (0x0004c208) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0005a89a) main_tv_pg_hdr_pane_g

0x159a,	// (0x0004c212) main_tv_pg_hdr_pane_t1

0x15a8,	// (0x0004c220) main_tv_pg_hdr_pane_t2

0x15b6,	// (0x0004c22e) main_tv_pg_hdr_pane_t3

0x15c6,	// (0x0004c23e) main_tv_pg_hdr_pane_t4

0x15d6,	// (0x0004c24e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0005a8b1) main_tv_pg_hdr_pane_t

0x15e6,	// (0x0004c25e) single_mobtv_pg_channel_pane_ParamLimits

0x15e6,	// (0x0004c25e) single_mobtv_pg_channel_pane

0x15f8,	// (0x0004c270) single_mobtv_pg_channel_table_pane

0x1601,	// (0x0004c279) single_mobtv_pg_channel_thumb_pane

0x160a,	// (0x0004c282) single_tv_pg_channel_pane_g1

0x1613,	// (0x0004c28b) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0005a8bc) single_tv_pg_channel_pane_g

0xe3ff,	// (0x00059077) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe3ff,	// (0x00059077) bg_single_mobtv_pg_channel_thumb_pane

0x161c,	// (0x0004c294) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x161c,	// (0x0004c294) single_mobtv_pg_channel_thumb_pane_g1

0x162a,	// (0x0004c2a2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x162a,	// (0x0004c2a2) single_mobtv_pg_channel_thumb_pane_g2

0x1636,	// (0x0004c2ae) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1636,	// (0x0004c2ae) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0005a8c1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0005a8c1) single_mobtv_pg_channel_thumb_pane_g

0x1642,	// (0x0004c2ba) single_mobtv_pg_channel_thumb_pane_t1

0x1650,	// (0x0004c2c8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0005a8c8) single_mobtv_pg_channel_thumb_pane_t

0xe19c,	// (0x00058e14) bg_single_mobtv_pg_channel_table_pane_g1

0xe19c,	// (0x00058e14) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0005a378) bg_single_mobtv_pg_channel_table_pane_g

0x165e,	// (0x0004c2d6) single_mobtv_pg_channel_table_pane_t1

0x166c,	// (0x0004c2e4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0005a8cd) single_mobtv_pg_channel_table_pane_t

0xc7c5,	// (0x0005743d) main_mobtv_info_pane_g1_ParamLimits

0xc7c5,	// (0x0005743d) main_mobtv_info_pane_g1

0xc7e1,	// (0x00057459) main_mobtv_info_pane_t1_ParamLimits

0xc7e1,	// (0x00057459) main_mobtv_info_pane_t1

0xc859,	// (0x000574d1) main_mobtv_info_pane_t2_ParamLimits

0xc859,	// (0x000574d1) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0005a8d7) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0005a8d7) main_mobtv_info_pane_t

0xc8e8,	// (0x00057560) wait_bar_pane_cp05

0xc8fa,	// (0x00057572) main_mobtv_loading_pane_g1_ParamLimits

0xc8fa,	// (0x00057572) main_mobtv_loading_pane_g1

0xc908,	// (0x00057580) main_mobtv_loading_pane_g2_ParamLimits

0xc908,	// (0x00057580) main_mobtv_loading_pane_g2

0xc914,	// (0x0005758c) main_mobtv_loading_pane_g3_ParamLimits

0xc914,	// (0x0005758c) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0005a8de) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0005a8de) main_mobtv_loading_pane_g

0x167a,	// (0x0004c2f2) main_mobtv_loading_pane_t1_ParamLimits

0x167a,	// (0x0004c2f2) main_mobtv_loading_pane_t1

0x1692,	// (0x0004c30a) main_mobtv_loading_pane_t2_ParamLimits

0x1692,	// (0x0004c30a) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0005a8e5) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0005a8e5) main_mobtv_loading_pane_t

0xc922,	// (0x0005759a) wait_bar_pane_cp06_ParamLimits

0xc922,	// (0x0005759a) wait_bar_pane_cp06

0x16b6,	// (0x0004c32e) main_mobtv_programe_curr_pane_t1

0x16c4,	// (0x0004c33c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0005a8ea) main_mobtv_programe_curr_pane_t

0x16d2,	// (0x0004c34a) main_mobtv_programe_next_pane_t1

0x16e0,	// (0x0004c358) main_mobtv_programe_next_pane_t2

0x16ee,	// (0x0004c366) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0005a8ef) main_mobtv_programe_next_pane_t

0x050a,	// (0x0004b182) bg_popup_mobtv_noti_window_pane

0x16fc,	// (0x0004c374) popup_mobtv_noti_window_g1

0x1704,	// (0x0004c37c) popup_mobtv_noti_window_t1

0x1712,	// (0x0004c38a) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0005a8f6) popup_mobtv_noti_window_t

0xe19c,	// (0x00058e14) bg_popup_mobtv_noti_window_pane_g1

0x050a,	// (0x0004b182) sc_clock_pane

0x050a,	// (0x0004b182) main_fs_bigclock_pane

0xbffb,	// (0x00056c73) blid2_tripm_pane_t4_ParamLimits

0xbffb,	// (0x00056c73) blid2_tripm_pane_t4

0xc92e,	// (0x000575a6) sc_clock_pane_g1_ParamLimits

0xc92e,	// (0x000575a6) sc_clock_pane_g1

0xc93c,	// (0x000575b4) sc_clock_pane_t1_ParamLimits

0xc93c,	// (0x000575b4) sc_clock_pane_t1

0xc94f,	// (0x000575c7) sc_clock_pane_t2_ParamLimits

0xc94f,	// (0x000575c7) sc_clock_pane_t2

0xc961,	// (0x000575d9) sc_clock_pane_t3_ParamLimits

0xc961,	// (0x000575d9) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0005a8fb) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0005a8fb) sc_clock_pane_t

0xd631,	// (0x000582a9) main_fs_bigclock_indicator_pane_ParamLimits

0xd631,	// (0x000582a9) main_fs_bigclock_indicator_pane

0xc9e5,	// (0x0005765d) main_fs_bigclock_pane_g1_ParamLimits

0xc9e5,	// (0x0005765d) main_fs_bigclock_pane_g1

0xd63d,	// (0x000582b5) main_fs_bigclock_pane_t1_ParamLimits

0xd63d,	// (0x000582b5) main_fs_bigclock_pane_t1

0xd64f,	// (0x000582c7) main_fs_bigclock_pane_t2_ParamLimits

0xd64f,	// (0x000582c7) main_fs_bigclock_pane_t2

0xd663,	// (0x000582db) main_fs_bigclock_pane_t3_ParamLimits

0xd663,	// (0x000582db) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005aafa) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005aafa) main_fs_bigclock_pane_t

0x2304,	// (0x0004cf7c) main_fs_bigclock_indicator_pane_g1

0x13de,	// (0x0004c056) ncim_query_content_pane_g2_ParamLimits

0x13de,	// (0x0004c056) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0005a888) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0005a888) ncim_query_content_pane_g

0xc975,	// (0x000575ed) sc_clock_pane_t4_ParamLimits

0xc975,	// (0x000575ed) sc_clock_pane_t4

0x412d,	// (0x0004eda5) main_radioblah_pane

0xeb46,	// (0x000597be) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb46,	// (0x000597be) cell_call4_button_pane_t1_copy1

0xc617,	// (0x0005728f) main_ncimui_pane_t1_ParamLimits

0xc617,	// (0x0005728f) main_ncimui_pane_t1

0xc631,	// (0x000572a9) main_ncimui_pane_t2_ParamLimits

0xc631,	// (0x000572a9) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0005a881) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0005a881) main_ncimui_pane_t

0x1840,	// (0x0004c4b8) main_radioblah_anim_pane_ParamLimits

0x1840,	// (0x0004c4b8) main_radioblah_anim_pane

0x1851,	// (0x0004c4c9) main_radioblah_info_pane_ParamLimits

0x1851,	// (0x0004c4c9) main_radioblah_info_pane

0x1865,	// (0x0004c4dd) main_radioblah_pane_t1_ParamLimits

0x1865,	// (0x0004c4dd) main_radioblah_pane_t1

0x1881,	// (0x0004c4f9) main_radioblah_pane_t2_ParamLimits

0x1881,	// (0x0004c4f9) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0005a91c) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0005a91c) main_radioblah_pane_t

0xca37,	// (0x000576af) main_radioblah_rocker_ctrl_pane_ParamLimits

0xca37,	// (0x000576af) main_radioblah_rocker_ctrl_pane

0x18c9,	// (0x0004c541) main_radioblah_info_pane_t1_ParamLimits

0x18c9,	// (0x0004c541) main_radioblah_info_pane_t1

0xca7c,	// (0x000576f4) main_radioblah_info_pane_t2_ParamLimits

0xca7c,	// (0x000576f4) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0005a925) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0005a925) main_radioblah_info_pane_t

0xe19c,	// (0x00058e14) main_radioblah_rocker_ctrl_pane_g1

0xcb2c,	// (0x000577a4) main_radioblah_rocker_ctrl_pane_g2

0xcb34,	// (0x000577ac) main_radioblah_rocker_ctrl_pane_g3

0xcb3c,	// (0x000577b4) main_radioblah_rocker_ctrl_pane_g4

0xcb44,	// (0x000577bc) main_radioblah_rocker_ctrl_pane_g5

0xcb4c,	// (0x000577c4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0005a92e) main_radioblah_rocker_ctrl_pane_g

0xc5d4,	// (0x0005724c) main_cset_text2_pane_t1_copy1_ParamLimits

0xabff,	// (0x00055877) cam4_image_uncrop_qvga_pane

0xad54,	// (0x000559cc) vid4_image_uncrop_qcif_pane

0xc189,	// (0x00056e01) cam6_image_uncrop_qvga_pane_ParamLimits

0xc189,	// (0x00056e01) cam6_image_uncrop_qvga_pane

0x1038,	// (0x0004bcb0) vid6_image_uncrop_qcif_pane_ParamLimits

0x1038,	// (0x0004bcb0) vid6_image_uncrop_qcif_pane

0x050a,	// (0x0004b182) bg_popup_preview_window_pane_cp03

0x1390,	// (0x0004c008) list_cset_text2_pane

0x1398,	// (0x0004c010) main_cset6_text2_pane_g1

0x13a0,	// (0x0004c018) main_cset6_text2_pane_t1

0xcb54,	// (0x000577cc) list_cset_text2_pane_t1_ParamLimits

0xcb54,	// (0x000577cc) list_cset_text2_pane_t1

0x412d,	// (0x0004eda5) main_radioblah_pane_ParamLimits

0xc8d4,	// (0x0005754c) main_mobtv_info_pane_t3_ParamLimits

0xc8d4,	// (0x0005754c) main_mobtv_info_pane_t3

0xca25,	// (0x0005769d) main_radioblah_pane_g1

0xca50,	// (0x000576c8) main_radioblah_info_pane_g1

0xcad1,	// (0x00057749) main_radioblah_info_pane_t3_ParamLimits

0xcad1,	// (0x00057749) main_radioblah_info_pane_t3

0x7a66,	// (0x000526de) highlight_cell_cale_month_pane_ParamLimits

0x7a66,	// (0x000526de) highlight_cell_cale_month_pane

0x050a,	// (0x0004b182) main_phob_fisheye_pane

0xe4e1,	// (0x00059159) scroll_pane_cp0031_ParamLimits

0xe4e1,	// (0x00059159) scroll_pane_cp0031

0x1146,	// (0x0004bdbe) wait_bar_pane_cp08_ParamLimits

0xc395,	// (0x0005700d) cset_list_set_pane_copy1_ParamLimits

0x1903,	// (0x0004c57b) highlight_cell_cale_month_pane_g1

0xcb71,	// (0x000577e9) highlight_cell_cale_month_pane_t1

0xf08a,	// (0x00059d02) list_gen_pane_cp01

0xed0f,	// (0x00059987) scroll_pane_01

0xcb7f,	// (0x000577f7) list_single_double_fisheye_pane

0xcb88,	// (0x00057800) list_double_fisheye_pane_g1_ParamLimits

0xcb88,	// (0x00057800) list_double_fisheye_pane_g1

0xcb94,	// (0x0005780c) list_double_fisheye_pane_g2_ParamLimits

0xcb94,	// (0x0005780c) list_double_fisheye_pane_g2

0xcba8,	// (0x00057820) list_double_fisheye_pane_g3_ParamLimits

0xcba8,	// (0x00057820) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0005a93b) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0005a93b) list_double_fisheye_pane_g

0xcbd1,	// (0x00057849) list_double_fisheye_pane_t1_ParamLimits

0xcbd1,	// (0x00057849) list_double_fisheye_pane_t1

0xcbec,	// (0x00057864) list_double_fisheye_pane_t2_ParamLimits

0xcbec,	// (0x00057864) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0005a946) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0005a946) list_double_fisheye_pane_t

0x050a,	// (0x0004b182) main_call5_pane

0xc99b,	// (0x00057613) sc_swipe_pane_ParamLimits

0xc99b,	// (0x00057613) sc_swipe_pane

0xcc1a,	// (0x00057892) call5_image_pane_ParamLimits

0xcc1a,	// (0x00057892) call5_image_pane

0xcc2a,	// (0x000578a2) call5_swipe_1_pane_ParamLimits

0xcc2a,	// (0x000578a2) call5_swipe_1_pane

0xcc36,	// (0x000578ae) call5_swipe_2_pane_ParamLimits

0xcc36,	// (0x000578ae) call5_swipe_2_pane

0xcc50,	// (0x000578c8) popup_call5_audio_first_window_ParamLimits

0xcc50,	// (0x000578c8) popup_call5_audio_first_window

0xe3ff,	// (0x00059077) call5_swipe_1_pane_g1_ParamLimits

0xe3ff,	// (0x00059077) call5_swipe_1_pane_g1

0x1914,	// (0x0004c58c) call5_swipe_1_pane_g2_ParamLimits

0x1914,	// (0x0004c58c) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0005a94b) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0005a94b) call5_swipe_1_pane_g

0x1920,	// (0x0004c598) call5_swipe_1_pane_t1_ParamLimits

0x1920,	// (0x0004c598) call5_swipe_1_pane_t1

0xe3ff,	// (0x00059077) call5_swipe_2_pane_g1_ParamLimits

0xe3ff,	// (0x00059077) call5_swipe_2_pane_g1

0x1935,	// (0x0004c5ad) call5_swipe_2_pane_g2_ParamLimits

0x1935,	// (0x0004c5ad) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0005a950) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0005a950) call5_swipe_2_pane_g

0x1941,	// (0x0004c5b9) call5_swipe_2_pane_t1_ParamLimits

0x1941,	// (0x0004c5b9) call5_swipe_2_pane_t1

0x1956,	// (0x0004c5ce) sc_swipe_pane_g1_ParamLimits

0x1956,	// (0x0004c5ce) sc_swipe_pane_g1

0x1963,	// (0x0004c5db) sc_swipe_pane_g2_ParamLimits

0x1963,	// (0x0004c5db) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0005a955) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0005a955) sc_swipe_pane_g

0x196f,	// (0x0004c5e7) sc_swipe_pane_t1_ParamLimits

0x196f,	// (0x0004c5e7) sc_swipe_pane_t1

0x050a,	// (0x0004b182) main_cmail_launcher_pane

0xcc5e,	// (0x000578d6) aid_size_cell_cmail_l_ParamLimits

0xcc5e,	// (0x000578d6) aid_size_cell_cmail_l

0xcc6e,	// (0x000578e6) grid_cmail_l_pane_ParamLimits

0xcc6e,	// (0x000578e6) grid_cmail_l_pane

0xcc7e,	// (0x000578f6) cell_cmail_l_pane_ParamLimits

0xcc7e,	// (0x000578f6) cell_cmail_l_pane

0xcc92,	// (0x0005790a) cell_cmail_l_pane_g1_ParamLimits

0xcc92,	// (0x0005790a) cell_cmail_l_pane_g1

0xcc9e,	// (0x00057916) cell_cmail_l_pane_t1_ParamLimits

0xcc9e,	// (0x00057916) cell_cmail_l_pane_t1

0x1984,	// (0x0004c5fc) cell_cmail_l_pane_t2_ParamLimits

0x1984,	// (0x0004c5fc) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0005a95a) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0005a95a) cell_cmail_l_pane_t

0x412d,	// (0x0004eda5) grid_highlight_pane_cp018_ParamLimits

0x412d,	// (0x0004eda5) grid_highlight_pane_cp018

0x5de3,	// (0x00050a5b) main2_pane_ParamLimits

0x5de3,	// (0x00050a5b) main2_pane

0x3019,	// (0x0004dc91) popup_sp_fs_action_menu_bg_pane_g1

0x3021,	// (0x0004dc99) popup_sp_fs_action_menu_bg_pane_g2

0x3029,	// (0x0004dca1) popup_sp_fs_action_menu_bg_pane_g3

0x3031,	// (0x0004dca9) popup_sp_fs_action_menu_bg_pane_g4

0x3039,	// (0x0004dcb1) popup_sp_fs_action_menu_bg_pane_g5

0x3041,	// (0x0004dcb9) popup_sp_fs_action_menu_bg_pane_g6

0x3049,	// (0x0004dcc1) popup_sp_fs_action_menu_bg_pane_g7

0x3051,	// (0x0004dcc9) popup_sp_fs_action_menu_bg_pane_g8

0x3059,	// (0x0004dcd1) popup_sp_fs_action_menu_bg_pane_g9

0x3061,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g10

0x3061,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00059e24) popup_sp_fs_action_menu_bg_pane_g

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g3_g1

0x0668,	// (0x0004b2e0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_t3_g3_g2

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00059ed4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00059ed4) list_medium_line_x2_t3_g3_g

0x0680,	// (0x0004b2f8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0680,	// (0x0004b2f8) list_medium_line_x2_t3_g3_t1

0x6bed,	// (0x00051865) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6bed,	// (0x00051865) list_medium_line_x2_t3_g3_t2

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00059edb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00059edb) list_medium_line_x2_t3_g3_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g2_g1

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00059ee2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00059ee2) list_medium_line_x2_t3_g2_g

0x06aa,	// (0x0004b322) list_medium_line_x2_t3_g2_t1_ParamLimits

0x06aa,	// (0x0004b322) list_medium_line_x2_t3_g2_t1

0x06c0,	// (0x0004b338) list_medium_line_x2_t3_g2_t2_ParamLimits

0x06c0,	// (0x0004b338) list_medium_line_x2_t3_g2_t2

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00059ee7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00059ee7) list_medium_line_x2_t3_g2_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t4_g4_g1

0x06d2,	// (0x0004b34a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x06d2,	// (0x0004b34a) list_medium_line_x2_t4_g4_g2

0x0668,	// (0x0004b2e0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_t4_g4_g3

0x06de,	// (0x0004b356) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06de,	// (0x0004b356) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00059eee) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00059eee) list_medium_line_x2_t4_g4_g

0x6bff,	// (0x00051877) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6bff,	// (0x00051877) list_medium_line_x2_t4_g4_t1

0x6c19,	// (0x00051891) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6c19,	// (0x00051891) list_medium_line_x2_t4_g4_t2

0x6c2f,	// (0x000518a7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6c2f,	// (0x000518a7) list_medium_line_x2_t4_g4_t3

0x06ea,	// (0x0004b362) list_medium_line_x2_t4_g4_t4_ParamLimits

0x06ea,	// (0x0004b362) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00059ef7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00059ef7) list_medium_line_x2_t4_g4_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g4_g1

0x06d2,	// (0x0004b34a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x06d2,	// (0x0004b34a) list_medium_line_x2_t2_g4_g2

0x0668,	// (0x0004b2e0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_t2_g4_g3

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00059f5e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00059f5e) list_medium_line_x2_t2_g4_g

0x06fc,	// (0x0004b374) list_medium_line_x2_t2_g4_t1_ParamLimits

0x06fc,	// (0x0004b374) list_medium_line_x2_t2_g4_t1

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00059f67) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00059f67) list_medium_line_x2_t2_g4_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g3_g1

0x0668,	// (0x0004b2e0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_t2_g3_g2

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00059ed4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00059ed4) list_medium_line_x2_t2_g3_g

0x0711,	// (0x0004b389) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0711,	// (0x0004b389) list_medium_line_x2_t2_g3_t1

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00059f6c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00059f6c) list_medium_line_x2_t2_g3_t

0x7c18,	// (0x00052890) main_sp_fs_list_pane_ParamLimits

0x7c18,	// (0x00052890) main_sp_fs_list_pane

0x7c24,	// (0x0005289c) sp_fs_scroll_pane_ParamLimits

0x7c24,	// (0x0005289c) sp_fs_scroll_pane

0x7c30,	// (0x000528a8) list_medium_line_x2_t3_t1

0x7c40,	// (0x000528b8) list_medium_line_x2_t3_t2

0x0754,	// (0x0004b3cc) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00059fb7) list_medium_line_x2_t3_t

0x7c4e,	// (0x000528c6) list_medium_line_x3_t4_t1

0x7c5e,	// (0x000528d6) list_medium_line_x3_t4_t2

0x0762,	// (0x0004b3da) list_medium_line_x3_t4_t3

0x0754,	// (0x0004b3cc) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00059fbe) list_medium_line_x3_t4_t

0x7c6c,	// (0x000528e4) list_medium_line_x4_t5_t1

0x7c7c,	// (0x000528f4) list_medium_line_x4_t5_t2

0x0762,	// (0x0004b3da) list_medium_line_x4_t5_t3

0x0770,	// (0x0004b3e8) list_medium_line_x4_t5_t4

0x0754,	// (0x0004b3cc) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00059fc7) list_medium_line_x4_t5_t

0x065c,	// (0x0004b2d4) list_medium_line_t4_g4_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_t4_g4_g1

0x06de,	// (0x0004b356) list_medium_line_t4_g4_g2_ParamLimits

0x06de,	// (0x0004b356) list_medium_line_t4_g4_g2

0x077e,	// (0x0004b3f6) list_medium_line_t4_g4_g3_ParamLimits

0x077e,	// (0x0004b3f6) list_medium_line_t4_g4_g3

0x0674,	// (0x0004b2ec) list_medium_line_t4_g4_g4_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00059fd2) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00059fd2) list_medium_line_t4_g4_g

0x078a,	// (0x0004b402) list_medium_line_t4_g4_t1_ParamLimits

0x078a,	// (0x0004b402) list_medium_line_t4_g4_t1

0x079f,	// (0x0004b417) list_medium_line_t4_g4_t2_ParamLimits

0x079f,	// (0x0004b417) list_medium_line_t4_g4_t2

0x07b4,	// (0x0004b42c) list_medium_line_t4_g4_t3_ParamLimits

0x07b4,	// (0x0004b42c) list_medium_line_t4_g4_t3

0x0695,	// (0x0004b30d) list_medium_line_t4_g4_t4_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00059fdb) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00059fdb) list_medium_line_t4_g4_t

0x7d9b,	// (0x00052a13) chi_dic_find_pane_g1

0x8dc1,	// (0x00053a39) main_tport_pane

0x0cfa,	// (0x0004b972) list_medium_line_plain_t1

0x0d08,	// (0x0004b980) list_medium_line_t2_g2_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t2_g2_g1

0x0d14,	// (0x0004b98c) list_medium_line_t2_g2_g2_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005a697) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005a697) list_medium_line_t2_g2_g

0xb80c,	// (0x00056484) list_medium_line_t2_g2_t1_ParamLimits

0xb80c,	// (0x00056484) list_medium_line_t2_g2_t1

0xb826,	// (0x0005649e) list_medium_line_t2_g2_t2_ParamLimits

0xb826,	// (0x0005649e) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005a69c) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005a69c) list_medium_line_t2_g2_t

0x0dbc,	// (0x0004ba34) aid_sp_fs_list_icon_a_sm

0x0dc4,	// (0x0004ba3c) aid_sp_fs_list_icon_d

0x0dcc,	// (0x0004ba44) aid_sp_fs_text_primary

0x0dd5,	// (0x0004ba4d) aid_sp_fs_text_secondary

0x0dde,	// (0x0004ba56) list_medium_line

0x0dde,	// (0x0004ba56) list_medium_line_g2

0x0dde,	// (0x0004ba56) list_medium_line_g3

0x0dde,	// (0x0004ba56) list_medium_line_plain

0x0dde,	// (0x0004ba56) list_medium_line_plain_t2

0x0dde,	// (0x0004ba56) list_medium_line_plain_t3

0x0dde,	// (0x0004ba56) list_medium_line_right_icon

0x0dde,	// (0x0004ba56) list_medium_line_right_iconx2

0x0dde,	// (0x0004ba56) list_medium_line_t2

0x0dde,	// (0x0004ba56) list_medium_line_t2_g2

0x0dde,	// (0x0004ba56) list_medium_line_t2_g3

0x0dde,	// (0x0004ba56) list_medium_line_t2_right_icon

0x0dde,	// (0x0004ba56) list_medium_line_t2_right_iconx2

0x0dde,	// (0x0004ba56) list_medium_line_t3

0x0dde,	// (0x0004ba56) list_medium_line_t3_g2

0x0dde,	// (0x0004ba56) list_medium_line_t3_g3

0x0dde,	// (0x0004ba56) list_medium_line_t3_right_iconx2

0x0de7,	// (0x0004ba5f) list_medium_line_t4_g4

0x0df0,	// (0x0004ba68) list_medium_line_x2

0x0df0,	// (0x0004ba68) list_medium_line_x2_t2_g2

0x0df0,	// (0x0004ba68) list_medium_line_x2_t2_g3

0x0df0,	// (0x0004ba68) list_medium_line_x2_t2_g4

0x0df0,	// (0x0004ba68) list_medium_line_x2_t3

0x0df0,	// (0x0004ba68) list_medium_line_x2_t3_g2

0x0df0,	// (0x0004ba68) list_medium_line_x2_t3_g3

0x0df0,	// (0x0004ba68) list_medium_line_x2_t3_g4

0x0df0,	// (0x0004ba68) list_medium_line_x2_t4_g2

0x0df0,	// (0x0004ba68) list_medium_line_x2_t4_g4

0x0df9,	// (0x0004ba71) list_medium_line_x3

0x0df9,	// (0x0004ba71) list_medium_line_x3_t4

0x0df9,	// (0x0004ba71) list_medium_line_x3_t4_g4

0x0de7,	// (0x0004ba5f) list_medium_line_x4_t4

0x0de7,	// (0x0004ba5f) list_medium_line_x4_t4_g7

0x0de7,	// (0x0004ba5f) list_medium_line_x4_t5

0x0e02,	// (0x0004ba7a) list_single_fs_dyc_pane_ParamLimits

0x0e02,	// (0x0004ba7a) list_single_fs_dyc_pane

0x065c,	// (0x0004b2d4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x4_t4_g7_g1

0x12bf,	// (0x0004bf37) list_medium_line_x4_t4_g7_g2_ParamLimits

0x12bf,	// (0x0004bf37) list_medium_line_x4_t4_g7_g2

0x12cb,	// (0x0004bf43) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12cb,	// (0x0004bf43) list_medium_line_x4_t4_g7_g3

0x12da,	// (0x0004bf52) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12da,	// (0x0004bf52) list_medium_line_x4_t4_g7_g4

0x12e6,	// (0x0004bf5e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12e6,	// (0x0004bf5e) list_medium_line_x4_t4_g7_g5

0x12f5,	// (0x0004bf6d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12f5,	// (0x0004bf6d) list_medium_line_x4_t4_g7_g6

0x1304,	// (0x0004bf7c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1304,	// (0x0004bf7c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0005a867) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0005a867) list_medium_line_x4_t4_g7_g

0x1310,	// (0x0004bf88) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1310,	// (0x0004bf88) list_medium_line_x4_t4_g7_t1

0x1325,	// (0x0004bf9d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1325,	// (0x0004bf9d) list_medium_line_x4_t4_g7_t2

0x133a,	// (0x0004bfb2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x133a,	// (0x0004bfb2) list_medium_line_x4_t4_g7_t3

0x134f,	// (0x0004bfc7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x134f,	// (0x0004bfc7) list_medium_line_x4_t4_g7_t4

0x1361,	// (0x0004bfd9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1361,	// (0x0004bfd9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0005a876) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0005a876) list_medium_line_x4_t4_g7_t

0x1373,	// (0x0004bfeb) list_single_dyc_row_pane_ParamLimits

0x1373,	// (0x0004bfeb) list_single_dyc_row_pane

0xcc0e,	// (0x00057886) call5_gesture_pane_ParamLimits

0xcc0e,	// (0x00057886) call5_gesture_pane

0xcc42,	// (0x000578ba) call5_windows_pane_ParamLimits

0xcc42,	// (0x000578ba) call5_windows_pane

0xccb4,	// (0x0005792c) call5_swipe_1_pane_cp_ParamLimits

0xccb4,	// (0x0005792c) call5_swipe_1_pane_cp

0xccc0,	// (0x00057938) call5_swipe_2_pane_cp_ParamLimits

0xccc0,	// (0x00057938) call5_swipe_2_pane_cp

0x3a5f,	// (0x0004e6d7) call5_image_pane_cp

0xcccc,	// (0x00057944) popup_call5_audio_first_window_cp_ParamLimits

0xcccc,	// (0x00057944) popup_call5_audio_first_window_cp

0x1956,	// (0x0004c5ce) call5_swipe_1_pane_g1_cp_ParamLimits

0x1956,	// (0x0004c5ce) call5_swipe_1_pane_g1_cp

0x1996,	// (0x0004c60e) call5_swipe_1_pane_g2_cp

0x196f,	// (0x0004c5e7) call5_swipe_1_pane_t1_cp_ParamLimits

0x196f,	// (0x0004c5e7) call5_swipe_1_pane_t1_cp

0x1956,	// (0x0004c5ce) call5_swipe_2_pane_g1_cp_ParamLimits

0x1956,	// (0x0004c5ce) call5_swipe_2_pane_g1_cp

0x199e,	// (0x0004c616) call5_swipe_2_pane_g2_cp

0x19a6,	// (0x0004c61e) call5_swipe_2_pane_t1_cp_ParamLimits

0x19a6,	// (0x0004c61e) call5_swipe_2_pane_t1_cp

0x412d,	// (0x0004eda5) main_sp_fs_email_pane

0x19bb,	// (0x0004c633) main_sp_fs_listscroll_pane_te

0x19c4,	// (0x0004c63c) popup_sp_fs_action_menu_pane_ParamLimits

0x19c4,	// (0x0004c63c) popup_sp_fs_action_menu_pane

0xe19c,	// (0x00058e14) bg_sp_fs_ctrlbar_pane_g1

0x1a08,	// (0x0004c680) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1a11,	// (0x0004c689) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1a1a,	// (0x0004c692) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe19c,	// (0x00058e14) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0005a95f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdf81,	// (0x00058bf9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdf81,	// (0x00058bf9) bg_sp_fs_ctrlbar_ddmenu_pane

0x1a23,	// (0x0004c69b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1a23,	// (0x0004c69b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1a2f,	// (0x0004c6a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1a2f,	// (0x0004c6a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0005a968) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0005a968) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1a3b,	// (0x0004c6b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1a3b,	// (0x0004c6b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1a55,	// (0x0004c6cd) list_medium_line_t2_right_icon_g1

0xccda,	// (0x00057952) list_medium_line_t2_right_icon_t1

0xccea,	// (0x00057962) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0005a96d) list_medium_line_t2_right_icon_t

0x4e65,	// (0x0004fadd) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4e65,	// (0x0004fadd) bg_sp_fs_ctrlbar_pane

0xcd4f,	// (0x000579c7) main_sp_fs_ctrlbar_button_pane_cp01

0xcd57,	// (0x000579cf) main_sp_fs_ctrlbar_ddmenu_pane

0x1a95,	// (0x0004c70d) main_sp_fs_ctrlbar_pane_g1

0x1aa1,	// (0x0004c719) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0005a972) main_sp_fs_ctrlbar_pane_g

0x1aad,	// (0x0004c725) main_sp_fs_ctrlbar_pane_t1

0xcd61,	// (0x000579d9) main_sp_fs_ctrlbar_pane

0xcd7d,	// (0x000579f5) main_sp_fs_listscroll_pane_te_cp01

0xcd8e,	// (0x00057a06) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcd8e,	// (0x00057a06) popup_sp_fs_action_menu_pane_cp01

0x412d,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x412d,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp01

0x1ac2,	// (0x0004c73a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1ac2,	// (0x0004c73a) sp_fs_action_menu_list_gene_pane_g1

0x1ad1,	// (0x0004c749) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1ad1,	// (0x0004c749) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005a977) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005a977) sp_fs_action_menu_list_gene_pane_g

0x1ade,	// (0x0004c756) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1ade,	// (0x0004c756) sp_fs_action_menu_list_gene_pane_t1

0x1af6,	// (0x0004c76e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1af6,	// (0x0004c76e) sp_fs_action_menu_list_gene_pane

0x1b15,	// (0x0004c78d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1b15,	// (0x0004c78d) popup_sp_fs_action_menu_bg_pane

0x1b23,	// (0x0004c79b) sp_fs_action_menu_list_pane_ParamLimits

0x1b23,	// (0x0004c79b) sp_fs_action_menu_list_pane

0x1b43,	// (0x0004c7bb) sp_fs_scroll_pane_cp01_ParamLimits

0x1b43,	// (0x0004c7bb) sp_fs_scroll_pane_cp01

0xcda6,	// (0x00057a1e) list_medium_line_plain_t2_t1

0xcdb6,	// (0x00057a2e) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005a97c) list_medium_line_plain_t2_t

0xcdc4,	// (0x00057a3c) list_medium_line_plain_t3_t1

0xcdd4,	// (0x00057a4c) list_medium_line_plain_t3_t2

0xcde2,	// (0x00057a5a) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005a981) list_medium_line_plain_t3_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t2_g2_g1

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00059ee2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00059ee2) list_medium_line_x2_t2_g2_g

0x078a,	// (0x0004b402) list_medium_line_x2_t2_g2_t1_ParamLimits

0x078a,	// (0x0004b402) list_medium_line_x2_t2_g2_t1

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005a988) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005a988) list_medium_line_x2_t2_g2_t

0x065c,	// (0x0004b2d4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t4_g2_g1

0x1b69,	// (0x0004c7e1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1b69,	// (0x0004c7e1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005a98d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005a98d) list_medium_line_x2_t4_g2_g

0xcdf0,	// (0x00057a68) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcdf0,	// (0x00057a68) list_medium_line_x2_t4_g2_t1

0xce0a,	// (0x00057a82) list_medium_line_x2_t4_g2_t2_ParamLimits

0xce0a,	// (0x00057a82) list_medium_line_x2_t4_g2_t2

0xce1f,	// (0x00057a97) list_medium_line_x2_t4_g2_t3_ParamLimits

0xce1f,	// (0x00057a97) list_medium_line_x2_t4_g2_t3

0x0695,	// (0x0004b30d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005a992) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005a992) list_medium_line_x2_t4_g2_t

0x1b7b,	// (0x0004c7f3) list_medium_line_t3_right_iconx2_g1

0x1a55,	// (0x0004c6cd) list_medium_line_t3_right_iconx2_g2

0xce34,	// (0x00057aac) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005a99b) list_medium_line_t3_right_iconx2_g

0xce3c,	// (0x00057ab4) list_medium_line_t3_right_iconx2_t1

0xce4c,	// (0x00057ac4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005a9a2) list_medium_line_t3_right_iconx2_t

0x065c,	// (0x0004b2d4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x3_t4_g4_g1

0x0668,	// (0x0004b2e0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x3_t4_g4_g2

0x06de,	// (0x0004b356) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06de,	// (0x0004b356) list_medium_line_x3_t4_g4_g3

0x1b83,	// (0x0004c7fb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1b83,	// (0x0004c7fb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005a9a7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005a9a7) list_medium_line_x3_t4_g4_g

0xce5a,	// (0x00057ad2) list_medium_line_x3_t4_g4_t1_ParamLimits

0xce5a,	// (0x00057ad2) list_medium_line_x3_t4_g4_t1

0xce71,	// (0x00057ae9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xce71,	// (0x00057ae9) list_medium_line_x3_t4_g4_t2

0x079f,	// (0x0004b417) list_medium_line_x3_t4_g4_t3_ParamLimits

0x079f,	// (0x0004b417) list_medium_line_x3_t4_g4_t3

0x1b8f,	// (0x0004c807) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1b8f,	// (0x0004c807) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005a9b0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005a9b0) list_medium_line_x3_t4_g4_t

0xce86,	// (0x00057afe) list_single_dyc_row_text_pane_t1_ParamLimits

0xce86,	// (0x00057afe) list_single_dyc_row_text_pane_t1

0xcebd,	// (0x00057b35) list_single_dyc_row_text_pane_t2_ParamLimits

0xcebd,	// (0x00057b35) list_single_dyc_row_text_pane_t2

0x1bac,	// (0x0004c824) list_single_dyc_row_text_pane_t3_ParamLimits

0x1bac,	// (0x0004c824) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005a9b9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005a9b9) list_single_dyc_row_text_pane_t

0x1bbe,	// (0x0004c836) list_single_dyc_row_pane_g1_ParamLimits

0x1bbe,	// (0x0004c836) list_single_dyc_row_pane_g1

0x1bca,	// (0x0004c842) list_single_dyc_row_pane_g2_ParamLimits

0x1bca,	// (0x0004c842) list_single_dyc_row_pane_g2

0x1bd6,	// (0x0004c84e) list_single_dyc_row_pane_g3_ParamLimits

0x1bd6,	// (0x0004c84e) list_single_dyc_row_pane_g3

0x1be2,	// (0x0004c85a) list_single_dyc_row_pane_g4_ParamLimits

0x1be2,	// (0x0004c85a) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005a9c0) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005a9c0) list_single_dyc_row_pane_g

0x1bee,	// (0x0004c866) list_single_dyc_row_text_pane_ParamLimits

0x1bee,	// (0x0004c866) list_single_dyc_row_text_pane

0x050a,	// (0x0004b182) bg_sp_fs_scroll_pane

0x1c0d,	// (0x0004c885) thumb_sp_fs_scroll_pane

0x0d08,	// (0x0004b980) list_medium_line_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_g1

0x1c16,	// (0x0004c88e) list_medium_line_t1_ParamLimits

0x1c16,	// (0x0004c88e) list_medium_line_t1

0x065c,	// (0x0004b2d4) list_medium_line_x2_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_g1

0x0668,	// (0x0004b2e0) list_medium_line_x2_g2_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005a9c9) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005a9c9) list_medium_line_x2_g

0x1c2b,	// (0x0004c8a3) list_medium_line_x2_t1_ParamLimits

0x1c2b,	// (0x0004c8a3) list_medium_line_x2_t1

0x065c,	// (0x0004b2d4) list_medium_line_x3_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x3_g1

0x0668,	// (0x0004b2e0) list_medium_line_x3_g2_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005a9c9) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005a9c9) list_medium_line_x3_g

0x1c2b,	// (0x0004c8a3) list_medium_line_x3_t1_ParamLimits

0x1c2b,	// (0x0004c8a3) list_medium_line_x3_t1

0x1c41,	// (0x0004c8b9) thumb_sp_fs_scroll_pane_g1

0x1c4a,	// (0x0004c8c2) thumb_sp_fs_scroll_pane_g2

0x1c53,	// (0x0004c8cb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005a9ce) thumb_sp_fs_scroll_pane_g

0x1c41,	// (0x0004c8b9) bg_sp_fs_scroll_pane_g1

0x1c4a,	// (0x0004c8c2) bg_sp_fs_scroll_pane_g2

0x1c53,	// (0x0004c8cb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005a9ce) bg_sp_fs_scroll_pane_g

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x065c,	// (0x0004b2d4) list_medium_line_x2_t3_g4_g1

0x06d2,	// (0x0004b34a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x06d2,	// (0x0004b34a) list_medium_line_x2_t3_g4_g2

0x0668,	// (0x0004b2e0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0668,	// (0x0004b2e0) list_medium_line_x2_t3_g4_g3

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0674,	// (0x0004b2ec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00059f5e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00059f5e) list_medium_line_x2_t3_g4_g

0xcf17,	// (0x00057b8f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcf17,	// (0x00057b8f) list_medium_line_x2_t3_g4_t1

0xcf2d,	// (0x00057ba5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcf2d,	// (0x00057ba5) list_medium_line_x2_t3_g4_t2

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0695,	// (0x0004b30d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005a9d5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005a9d5) list_medium_line_x2_t3_g4_t

0x0d08,	// (0x0004b980) list_medium_line_g2_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_g2_g1

0x0d14,	// (0x0004b98c) list_medium_line_g2_g2_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005a697) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005a697) list_medium_line_g2_g

0x1c5c,	// (0x0004c8d4) list_medium_line_g2_t1_ParamLimits

0x1c5c,	// (0x0004c8d4) list_medium_line_g2_t1

0x0d08,	// (0x0004b980) list_medium_line_t3_g2_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t3_g2_g1

0x0d14,	// (0x0004b98c) list_medium_line_t3_g2_g2_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005a697) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005a697) list_medium_line_t3_g2_g

0xcf47,	// (0x00057bbf) list_medium_line_t3_g2_t1_ParamLimits

0xcf47,	// (0x00057bbf) list_medium_line_t3_g2_t1

0xcf5e,	// (0x00057bd6) list_medium_line_t3_g2_t2_ParamLimits

0xcf5e,	// (0x00057bd6) list_medium_line_t3_g2_t2

0xcf73,	// (0x00057beb) list_medium_line_t3_g2_t3_ParamLimits

0xcf73,	// (0x00057beb) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005a9dc) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005a9dc) list_medium_line_t3_g2_t

0x1a55,	// (0x0004c6cd) list_medium_line_right_icon_g1

0x1c71,	// (0x0004c8e9) list_medium_line_right_icon_t1

0x0d08,	// (0x0004b980) list_medium_line_t2_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t2_g1

0xcf88,	// (0x00057c00) list_medium_line_t2_t1_ParamLimits

0xcf88,	// (0x00057c00) list_medium_line_t2_t1

0xcfa2,	// (0x00057c1a) list_medium_line_t2_t2_ParamLimits

0xcfa2,	// (0x00057c1a) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005a9e3) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005a9e3) list_medium_line_t2_t

0x0d08,	// (0x0004b980) list_medium_line_t3_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t3_g1

0xcfb7,	// (0x00057c2f) list_medium_line_t3_t1_ParamLimits

0xcfb7,	// (0x00057c2f) list_medium_line_t3_t1

0xcfce,	// (0x00057c46) list_medium_line_t3_t2_ParamLimits

0xcfce,	// (0x00057c46) list_medium_line_t3_t2

0xcfe3,	// (0x00057c5b) list_medium_line_t3_t3_ParamLimits

0xcfe3,	// (0x00057c5b) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005a9e8) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005a9e8) list_medium_line_t3_t

0x0d08,	// (0x0004b980) list_medium_line_g3_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_g3_g1

0x1c7f,	// (0x0004c8f7) list_medium_line_g3_g2_ParamLimits

0x1c7f,	// (0x0004c8f7) list_medium_line_g3_g2

0x0d14,	// (0x0004b98c) list_medium_line_g3_g3_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005a9ef) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005a9ef) list_medium_line_g3_g

0x1c8b,	// (0x0004c903) list_medium_line_g3_t1_ParamLimits

0x1c8b,	// (0x0004c903) list_medium_line_g3_t1

0x0d08,	// (0x0004b980) list_medium_line_t2_g3_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t2_g3_g1

0x1c7f,	// (0x0004c8f7) list_medium_line_t2_g3_g2_ParamLimits

0x1c7f,	// (0x0004c8f7) list_medium_line_t2_g3_g2

0x0d14,	// (0x0004b98c) list_medium_line_t2_g3_g3_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005a9ef) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005a9ef) list_medium_line_t2_g3_g

0xcff5,	// (0x00057c6d) list_medium_line_t2_g3_t1_ParamLimits

0xcff5,	// (0x00057c6d) list_medium_line_t2_g3_t1

0xd00f,	// (0x00057c87) list_medium_line_t2_g3_t2_ParamLimits

0xd00f,	// (0x00057c87) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005a9f6) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005a9f6) list_medium_line_t2_g3_t

0x0d08,	// (0x0004b980) list_medium_line_t3_g3_g1_ParamLimits

0x0d08,	// (0x0004b980) list_medium_line_t3_g3_g1

0x1c7f,	// (0x0004c8f7) list_medium_line_t3_g3_g2_ParamLimits

0x1c7f,	// (0x0004c8f7) list_medium_line_t3_g3_g2

0x0d14,	// (0x0004b98c) list_medium_line_t3_g3_g3_ParamLimits

0x0d14,	// (0x0004b98c) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005a9ef) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005a9ef) list_medium_line_t3_g3_g

0xd024,	// (0x00057c9c) list_medium_line_t3_g3_t1_ParamLimits

0xd024,	// (0x00057c9c) list_medium_line_t3_g3_t1

0xd038,	// (0x00057cb0) list_medium_line_t3_g3_t2_ParamLimits

0xd038,	// (0x00057cb0) list_medium_line_t3_g3_t2

0xd04a,	// (0x00057cc2) list_medium_line_t3_g3_t3_ParamLimits

0xd04a,	// (0x00057cc2) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005a9fb) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005a9fb) list_medium_line_t3_g3_t

0x1b7b,	// (0x0004c7f3) list_medium_line_right_iconx2_g1

0x1a55,	// (0x0004c6cd) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005aa02) list_medium_line_right_iconx2_g

0x1ca0,	// (0x0004c918) list_medium_line_right_iconx2_t1

0x1b7b,	// (0x0004c7f3) list_medium_line_t2_right_iconx2_g1

0x1a55,	// (0x0004c6cd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005aa02) list_medium_line_t2_right_iconx2_g

0xd05c,	// (0x00057cd4) list_medium_line_t2_right_iconx2_t1

0xd06c,	// (0x00057ce4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005aa07) list_medium_line_t2_right_iconx2_t

0x1cae,	// (0x0004c926) list_medium_line_x4_t4_t1

0xd07a,	// (0x00057cf2) list_medium_line_x4_t4_t2

0xd08a,	// (0x00057d02) list_medium_line_x4_t4_t3

0xd09a,	// (0x00057d12) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005aa0c) list_medium_line_x4_t4_t

0xd0d3,	// (0x00057d4b) tport_appsw_pane_ParamLimits

0xd0d3,	// (0x00057d4b) tport_appsw_pane

0xd0df,	// (0x00057d57) tport_contact_pane_ParamLimits

0xd0df,	// (0x00057d57) tport_contact_pane

0xd0ef,	// (0x00057d67) tport_listscroll_pane_ParamLimits

0xd0ef,	// (0x00057d67) tport_listscroll_pane

0xd0ff,	// (0x00057d77) cell_tport_appsw_pane_ParamLimits

0xd0ff,	// (0x00057d77) cell_tport_appsw_pane

0xe464,	// (0x000590dc) tport_appsw_pane_g1_ParamLimits

0xe464,	// (0x000590dc) tport_appsw_pane_g1

0x1cbc,	// (0x0004c934) tport_contact_pane_g1

0x1464,	// (0x0004c0dc) tport_contact_pane_t1

0x1cc5,	// (0x0004c93d) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005aa15) tport_contact_pane_t

0x1cd3,	// (0x0004c94b) list_tport_pane

0x1cdc,	// (0x0004c954) scroll_pane_cp_030

0x1ced,	// (0x0004c965) cell_tport_appsw_pane_g1

0x1cfd,	// (0x0004c975) cell_tport_appsw_pane_t1

0x050a,	// (0x0004b182) grid_highlight_pane_cp019

0xd12a,	// (0x00057da2) list_tport_double_graphic_pane_ParamLimits

0xd12a,	// (0x00057da2) list_tport_double_graphic_pane

0x412d,	// (0x0004eda5) list_highlight_pane_cp023_ParamLimits

0x412d,	// (0x0004eda5) list_highlight_pane_cp023

0xd13c,	// (0x00057db4) list_tport_double_graphic_pane_g1_ParamLimits

0xd13c,	// (0x00057db4) list_tport_double_graphic_pane_g1

0xd149,	// (0x00057dc1) list_tport_double_graphic_pane_t1_ParamLimits

0xd149,	// (0x00057dc1) list_tport_double_graphic_pane_t1

0xd15e,	// (0x00057dd6) list_tport_double_graphic_pane_t2_ParamLimits

0xd15e,	// (0x00057dd6) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005aa21) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005aa21) list_tport_double_graphic_pane_t

0x050a,	// (0x0004b182) main_cale_note_pane

0xafc0,	// (0x00055c38) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xafc0,	// (0x00055c38) cell_vitu2_function_top_wide_pane_cp01

0xc8e8,	// (0x00057560) wait_bar_pane_cp05_ParamLimits

0x050a,	// (0x0004b182) listscroll_cmail_pane

0x1d13,	// (0x0004c98b) list_cmail_pane

0xd17a,	// (0x00057df2) list_cmail_body_pane

0xd197,	// (0x00057e0f) list_single_cmail_header_caption_pane

0xd1bc,	// (0x00057e34) list_single_cmail_header_detail_pane_ParamLimits

0xd1bc,	// (0x00057e34) list_single_cmail_header_detail_pane

0xd1ef,	// (0x00057e67) list_single_cmail_header_caption_pane_t1

0xd1fd,	// (0x00057e75) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd1fd,	// (0x00057e75) list_single_cmail_header_detail_pane_g1

0x1d34,	// (0x0004c9ac) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1d34,	// (0x0004c9ac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005aa26) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005aa26) list_single_cmail_header_detail_pane_g

0x1d4d,	// (0x0004c9c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1d4d,	// (0x0004c9c5) list_single_cmail_header_detail_pane_t1

0x1d83,	// (0x0004c9fb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1d83,	// (0x0004c9fb) list_single_cmail_header_editor_pane_bg

0x1613,	// (0x0004c28b) list_cmail_body_pane_g1

0x1d95,	// (0x0004ca0d) list_cmail_body_pane_t1

0xebf5,	// (0x0005986d) list_single_cmail_header_editor_pane_bg_g1

0x3374,	// (0x0004dfec) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec05,	// (0x0005987d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xebfd,	// (0x00059875) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee19,	// (0x00059a91) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec25,	// (0x0005989d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec15,	// (0x0005988d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec1d,	// (0x00059895) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3354,	// (0x0004dfcc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd237,	// (0x00057eaf) calenote_gesture_pane_ParamLimits

0xd237,	// (0x00057eaf) calenote_gesture_pane

0xd251,	// (0x00057ec9) calenote_window_pane_ParamLimits

0xd251,	// (0x00057ec9) calenote_window_pane

0x1da3,	// (0x0004ca1b) popup_note_window_cp01

0xd269,	// (0x00057ee1) calenote_swipe_1_pane_ParamLimits

0xd269,	// (0x00057ee1) calenote_swipe_1_pane

0xccc0,	// (0x00057938) calenote_swipe_2_pane_ParamLimits

0xccc0,	// (0x00057938) calenote_swipe_2_pane

0x1956,	// (0x0004c5ce) calenote_swipe_1_pane_g1_ParamLimits

0x1956,	// (0x0004c5ce) calenote_swipe_1_pane_g1

0x1963,	// (0x0004c5db) calenote_swipe_1_pane_g2_ParamLimits

0x1963,	// (0x0004c5db) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0005a955) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0005a955) calenote_swipe_1_pane_g

0x1db5,	// (0x0004ca2d) calenote_swipe_1_pane_t1_ParamLimits

0x1db5,	// (0x0004ca2d) calenote_swipe_1_pane_t1

0x1956,	// (0x0004c5ce) calenote_swipe_2_pane_g1_ParamLimits

0x1956,	// (0x0004c5ce) calenote_swipe_2_pane_g1

0x1dd4,	// (0x0004ca4c) calenote_swipe_2_pane_g2_ParamLimits

0x1dd4,	// (0x0004ca4c) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005aa32) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005aa32) calenote_swipe_2_pane_g

0x1de0,	// (0x0004ca58) calenote_swipe_2_pane_t1_ParamLimits

0x1de0,	// (0x0004ca58) calenote_swipe_2_pane_t1

0x050a,	// (0x0004b182) main_mup_navstr_pane

0x9d51,	// (0x000549c9) main_mup3_pane_t7_ParamLimits

0x9d51,	// (0x000549c9) main_mup3_pane_t7

0xa719,	// (0x00055391) main_mp4_pane_g6_ParamLimits

0xa719,	// (0x00055391) main_mp4_pane_g6

0xaa99,	// (0x00055711) main_image3_pane_t4_ParamLimits

0xaa99,	// (0x00055711) main_image3_pane_t4

0xd27c,	// (0x00057ef4) popup_navstr_preview_pane_ParamLimits

0xd27c,	// (0x00057ef4) popup_navstr_preview_pane

0xd288,	// (0x00057f00) scroll_navstr_pane_ParamLimits

0xd288,	// (0x00057f00) scroll_navstr_pane

0x050a,	// (0x0004b182) bg_popup_preview_window_pane_cp04

0x1e07,	// (0x0004ca7f) popup_navstr_preview_pane_t1

0xd294,	// (0x00057f0c) scroll_navstr_pane_g1_ParamLimits

0xd294,	// (0x00057f0c) scroll_navstr_pane_g1

0xd2a1,	// (0x00057f19) scroll_navstr_pane_t1_ParamLimits

0xd2a1,	// (0x00057f19) scroll_navstr_pane_t1

0x1dac,	// (0x0004ca24) bg_button_pane_cp014

0x1dac,	// (0x0004ca24) bg_button_pane_cp030

0xcbb4,	// (0x0005782c) list_double_fisheye_pane_g4_ParamLimits

0xcbb4,	// (0x0005782c) list_double_fisheye_pane_g4

0xcbc0,	// (0x00057838) list_double_fisheye_pane_g5_ParamLimits

0xcbc0,	// (0x00057838) list_double_fisheye_pane_g5

0x1d1b,	// (0x0004c993) sp_fs_scroll_pane_cp03

0x1a95,	// (0x0004c70d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1aa1,	// (0x0004c719) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0005a972) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x1aad,	// (0x0004c725) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd170,	// (0x00057de8) sp_fs_scroll_pane_cp02

0x3084,	// (0x0004dcfc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3084,	// (0x0004dcfc) popup_sp_fs_calendar_preview_list_single_pane

0x050a,	// (0x0004b182) main_cam6_pano_pane

0x412d,	// (0x0004eda5) main_mup3_pane_ParamLimits

0x050a,	// (0x0004b182) main_phacti_pane

0xc7bd,	// (0x00057435) bg_button_pane_cp11

0xc7d5,	// (0x0005744d) main_mobtv_info_pane_g2_ParamLimits

0xc7d5,	// (0x0005744d) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0005a8d2) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0005a8d2) main_mobtv_info_pane_g

0xc987,	// (0x000575ff) sc_clock_pane_t5_ParamLimits

0xc987,	// (0x000575ff) sc_clock_pane_t5

0xca25,	// (0x0005769d) main_radioblah_pane_g1_ParamLimits

0x1899,	// (0x0004c511) main_radioblah_pane_t3_ParamLimits

0x1899,	// (0x0004c511) main_radioblah_pane_t3

0x18b1,	// (0x0004c529) main_radioblah_pane_t4_ParamLimits

0x18b1,	// (0x0004c529) main_radioblah_pane_t4

0xca43,	// (0x000576bb) main_radioblah_text_pane_ParamLimits

0xca43,	// (0x000576bb) main_radioblah_text_pane

0xca50,	// (0x000576c8) main_radioblah_info_pane_g1_ParamLimits

0xcae5,	// (0x0005775d) main_radioblah_info_pane_t4_ParamLimits

0xcae5,	// (0x0005775d) main_radioblah_info_pane_t4

0x412d,	// (0x0004eda5) main_sp_fs_calendar_pane

0xd2b3,	// (0x00057f2b) main_phacti_pane_g1

0xd2bb,	// (0x00057f33) phacti_note_pane_ParamLimits

0xd2bb,	// (0x00057f33) phacti_note_pane

0x1e1e,	// (0x0004ca96) phacti_term_pane_ParamLimits

0x1e1e,	// (0x0004ca96) phacti_term_pane

0x1e33,	// (0x0004caab) phacti_note_pane_t1_ParamLimits

0x1e33,	// (0x0004caab) phacti_note_pane_t1

0x1e4a,	// (0x0004cac2) phacti_term_pane_g1

0x1e52,	// (0x0004caca) phacti_term_pane_t1_ParamLimits

0x1e52,	// (0x0004caca) phacti_term_pane_t1

0x1e7c,	// (0x0004caf4) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3177,	// (0x0004ddef) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005aa3c) popup_sp_fs_calendar_preview_list_single_pane_g

0x1e84,	// (0x0004cafc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1e84,	// (0x0004cafc) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1e99,	// (0x0004cb11) aid_popup_sp_fs_bg_corner_pane

0xe19c,	// (0x00058e14) popup_sp_fs_calendar_preview_bg_pane_g1

0x050a,	// (0x0004b182) popup_sp_fs_calendar_preview_bg_pane

0x1ea1,	// (0x0004cb19) popup_sp_fs_calendar_preview_list_pane

0x412d,	// (0x0004eda5) bg_main_sp_fs_cale_pane_ParamLimits

0x412d,	// (0x0004eda5) bg_main_sp_fs_cale_pane

0x1ea9,	// (0x0004cb21) listscroll_cale_mrui_pane_ParamLimits

0x1ea9,	// (0x0004cb21) listscroll_cale_mrui_pane

0x1ebd,	// (0x0004cb35) listscroll_sp_fs_schedule_track_pane

0x1ec6,	// (0x0004cb3e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1ec6,	// (0x0004cb3e) main_sp_fs_ctrlbar_pane_cp01

0x1ed7,	// (0x0004cb4f) main_sp_fs_ribbon_pane

0x1edf,	// (0x0004cb57) popup_sp_fs_cale_preview_window

0xd2fa,	// (0x00057f72) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd2fa,	// (0x00057f72) list_single_sp_fs_schedule_track_pane

0x0c8f,	// (0x0004b907) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c8f,	// (0x0004b907) bg_sp_fs_highlight_list_pane_cp03

0xd313,	// (0x00057f8b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd313,	// (0x00057f8b) list_single_sp_fs_schedule_track_pane_g1

0xd31f,	// (0x00057f97) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd31f,	// (0x00057f97) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005aa41) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005aa41) list_single_sp_fs_schedule_track_pane_g

0xd32b,	// (0x00057fa3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd32b,	// (0x00057fa3) list_single_sp_fs_schedule_track_pane_t1

0xd343,	// (0x00057fbb) sp_fs_schedule_track_pane_ParamLimits

0xd343,	// (0x00057fbb) sp_fs_schedule_track_pane

0x1ef1,	// (0x0004cb69) sp_fs_schedule_track_pane_g1

0x1ef9,	// (0x0004cb71) sp_fs_schedule_track_pane_g2

0x1f01,	// (0x0004cb79) sp_fs_schedule_track_pane_g3

0x1f09,	// (0x0004cb81) sp_fs_schedule_track_pane_g4

0x1f11,	// (0x0004cb89) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005aa46) sp_fs_schedule_track_pane_g

0xebf5,	// (0x0005986d) bg_sp_fs_schedule_viewer_highlight_g1

0x3374,	// (0x0004dfec) bg_sp_fs_schedule_viewer_highlight_g2

0xebfd,	// (0x00059875) bg_sp_fs_schedule_viewer_highlight_g3

0xec05,	// (0x0005987d) bg_sp_fs_schedule_viewer_highlight_g4

0xee19,	// (0x00059a91) bg_sp_fs_schedule_viewer_highlight_g5

0xec15,	// (0x0005988d) bg_sp_fs_schedule_viewer_highlight_g6

0xec1d,	// (0x00059895) bg_sp_fs_schedule_viewer_highlight_g7

0xec25,	// (0x0005989d) bg_sp_fs_schedule_viewer_highlight_g8

0x3354,	// (0x0004dfcc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005aa51) bg_sp_fs_schedule_viewer_highlight_g

0x050a,	// (0x0004b182) bg_main_sp_fs_ribbon_pane

0xd353,	// (0x00057fcb) main_sp_fs_ribbon_pane_g1

0x1f19,	// (0x0004cb91) main_sp_fs_ribbon_pane_t1

0xd35c,	// (0x00057fd4) main_sp_fs_ribbon_pane_t2

0x1f28,	// (0x0004cba0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005aa64) main_sp_fs_ribbon_pane_t

0x1f37,	// (0x0004cbaf) main_sp_fs_ribbon_scheduler_pane

0x1f3f,	// (0x0004cbb7) bg_main_sp_fs_ribbon_pane_g1

0x1f48,	// (0x0004cbc0) bg_main_sp_fs_ribbon_pane_g2

0x1f51,	// (0x0004cbc9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005aa6b) bg_main_sp_fs_ribbon_pane_g

0x1f59,	// (0x0004cbd1) main_sp_fs_ribbon_scheduler_pane_g1

0x1f62,	// (0x0004cbda) main_sp_fs_ribbon_scheduler_pane_g2

0x1f6b,	// (0x0004cbe3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005aa72) main_sp_fs_ribbon_scheduler_pane_g

0x1f74,	// (0x0004cbec) list_cale_mrui_pane

0xd36b,	// (0x00057fe3) sp_fs_scroll_pane_cp07_ParamLimits

0xd36b,	// (0x00057fe3) sp_fs_scroll_pane_cp07

0xd381,	// (0x00057ff9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd381,	// (0x00057ff9) bg_sp_fs_schedule_viewer_highlight

0x1f7d,	// (0x0004cbf5) list_single_sp_fs_schedule_track_pane_cp01

0x1f85,	// (0x0004cbfd) list_sp_fs_schedule_track_pane

0x1f8d,	// (0x0004cc05) sp_fs_scroll_pane_cp06_ParamLimits

0x1f8d,	// (0x0004cc05) sp_fs_scroll_pane_cp06

0xe19c,	// (0x00058e14) bgmain_sp_fs_calendar_pane_g1

0xd38e,	// (0x00058006) list_single_cale_mrui_pane_ParamLimits

0xd38e,	// (0x00058006) list_single_cale_mrui_pane

0x1f9f,	// (0x0004cc17) list_single_cale_mrui_row_pane_ParamLimits

0x1f9f,	// (0x0004cc17) list_single_cale_mrui_row_pane

0x1fac,	// (0x0004cc24) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1fac,	// (0x0004cc24) list_single_cale_mrui_row_pane_g1

0x1fe4,	// (0x0004cc5c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1fe4,	// (0x0004cc5c) list_single_cale_mrui_row_pane_t1

0xd3b6,	// (0x0005802e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd3b6,	// (0x0005802e) list_single_cale_mrui_row_pane_t2

0x1ff6,	// (0x0004cc6e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1ff6,	// (0x0004cc6e) list_single_cale_mrui_row_pane_t3

0x2025,	// (0x0004cc9d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2025,	// (0x0004cc9d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0005aa7e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0005aa7e) list_single_cale_mrui_row_pane_t

0xd41c,	// (0x00058094) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd41c,	// (0x00058094) list_single_cmail_header_editor_pane_bg_cp01

0xd43c,	// (0x000580b4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd43c,	// (0x000580b4) list_single_cmail_header_editor_pane_bg_cp02

0xd458,	// (0x000580d0) main_radioblah_text_pane_t1_ParamLimits

0xd458,	// (0x000580d0) main_radioblah_text_pane_t1

0x2054,	// (0x0004cccc) cam6_indi_pane_cp01

0x205c,	// (0x0004ccd4) cam6_mode_pane_cp01

0x2064,	// (0x0004ccdc) cam6_pano_pane

0x206d,	// (0x0004cce5) cam6_zoom_pane_cp01

0x2075,	// (0x0004cced) cam6_pano_image_pane

0x2080,	// (0x0004ccf8) cam6_pano_pane_g1

0x1613,	// (0x0004c28b) cam6_pano_pane_g2

0x2089,	// (0x0004cd01) cam6_pano_pane_g3

0x2092,	// (0x0004cd0a) cam6_pano_pane_g4

0xe72f,	// (0x000593a7) cam6_pano_pane_g5

0x209b,	// (0x0004cd13) cam6_pano_pane_g6

0x20a5,	// (0x0004cd1d) cam6_pano_pane_g7

0x20ad,	// (0x0004cd25) cam6_pano_pane_g8

0x20b6,	// (0x0004cd2e) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0005aa87) cam6_pano_pane_g

0x050a,	// (0x0004b182) main_browser_tag_pane

0x1dff,	// (0x0004ca77) grid_navstr_albumart_pane

0x20c1,	// (0x0004cd39) cell_navstr_albumart_pane_ParamLimits

0x20c1,	// (0x0004cd39) cell_navstr_albumart_pane

0x20e4,	// (0x0004cd5c) cell_navstr_albumart_pane_g1

0x4c82,	// (0x0004f8fa) cell_navstr_albumart_pane_g2

0x4c92,	// (0x0004f90a) cell_navstr_albumart_pane_g3

0x4c8a,	// (0x0004f902) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0005aa9a) cell_navstr_albumart_pane_g

0xd473,	// (0x000580eb) bt_list_pane_ParamLimits

0xd473,	// (0x000580eb) bt_list_pane

0xd493,	// (0x0005810b) bt_list_pane_t1

0xd4a2,	// (0x0005811a) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0005aaa3) bt_list_pane_t

0x050a,	// (0x0004b182) main_cale_prevew_pane

0xd4b1,	// (0x00058129) popup_cale_preview_window_ParamLimits

0xd4b1,	// (0x00058129) popup_cale_preview_window

0x412d,	// (0x0004eda5) bg_popup_preview_window_pane_cp05_ParamLimits

0x412d,	// (0x0004eda5) bg_popup_preview_window_pane_cp05

0x20ec,	// (0x0004cd64) list_cale_preview_pane_ParamLimits

0x20ec,	// (0x0004cd64) list_cale_preview_pane

0x2442,	// (0x0004d0ba) list_double_cale_preview_pane_ParamLimits

0x2442,	// (0x0004d0ba) list_double_cale_preview_pane

0xd4ca,	// (0x00058142) list_single_cale_preview_pane_ParamLimits

0xd4ca,	// (0x00058142) list_single_cale_preview_pane

0xd4e0,	// (0x00058158) list_single_cale_preview_pane_g1

0xd4e8,	// (0x00058160) list_single_cale_preview_pane_t1_ParamLimits

0xd4e8,	// (0x00058160) list_single_cale_preview_pane_t1

0xd4fd,	// (0x00058175) list_double_cale_preview_pane_g1

0xd505,	// (0x0005817d) list_double_cale_preview_pane_t1_ParamLimits

0xd505,	// (0x0005817d) list_double_cale_preview_pane_t1

0xd51a,	// (0x00058192) list_double_cale_preview_pane_t2_ParamLimits

0xd51a,	// (0x00058192) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0005aaa8) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0005aaa8) list_double_cale_preview_pane_t

0x050a,	// (0x0004b182) main_ezdial_pane

0x412d,	// (0x0004eda5) main_sp_fs_email_pane_ParamLimits

0xccf8,	// (0x00057970) cmail_ddmenu_btn01_pane_ParamLimits

0xccf8,	// (0x00057970) cmail_ddmenu_btn01_pane

0xcd15,	// (0x0005798d) cmail_ddmenu_btn02_pane_ParamLimits

0xcd15,	// (0x0005798d) cmail_ddmenu_btn02_pane

0xcd33,	// (0x000579ab) cmail_ddmenu_btn03_pane_ParamLimits

0xcd33,	// (0x000579ab) cmail_ddmenu_btn03_pane

0xcd61,	// (0x000579d9) main_sp_fs_ctrlbar_pane_ParamLimits

0xcd7d,	// (0x000579f5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd17a,	// (0x00057df2) list_cmail_body_pane_ParamLimits

0x1d2b,	// (0x0004c9a3) bg_button_pane_cp12

0x1d40,	// (0x0004c9b8) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1d40,	// (0x0004c9b8) list_single_cmail_header_detail_pane_g3

0xd213,	// (0x00057e8b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd213,	// (0x00057e8b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005aa2d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005aa2d) list_single_cmail_header_detail_pane_t

0x1e67,	// (0x0004cadf) phacti_term_pane_t2_ParamLimits

0x1e67,	// (0x0004cadf) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005aa37) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005aa37) phacti_term_pane_t

0x20f8,	// (0x0004cd70) aid_size_list_single_double

0xd532,	// (0x000581aa) popup_ezdial_listscroll_window

0xd552,	// (0x000581ca) popup_number_entry_window_cp01

0x3a5f,	// (0x0004e6d7) bg_popup_call_pane_cp09

0x2104,	// (0x0004cd7c) ezdial_list_pane

0x210c,	// (0x0004cd84) scroll_pane_cp23

0xdf81,	// (0x00058bf9) bg_button_pane_cp028_ParamLimits

0xdf81,	// (0x00058bf9) bg_button_pane_cp028

0xd560,	// (0x000581d8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd560,	// (0x000581d8) cmail_ddmenu_btn01_pane_g1

0xd570,	// (0x000581e8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd570,	// (0x000581e8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0005aaad) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0005aaad) cmail_ddmenu_btn01_pane_g

0x2114,	// (0x0004cd8c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2114,	// (0x0004cd8c) cmail_ddmenu_btn01_pane_t1

0x4e65,	// (0x0004fadd) bg_button_pane_cp029_ParamLimits

0x4e65,	// (0x0004fadd) bg_button_pane_cp029

0xd570,	// (0x000581e8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd570,	// (0x000581e8) cmail_ddmenu_btn02_pane_g1

0xd588,	// (0x00058200) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd588,	// (0x00058200) cmail_ddmenu_btn02_pane_t1

0x0c8f,	// (0x0004b907) bg_button_pane_cp031_ParamLimits

0x0c8f,	// (0x0004b907) bg_button_pane_cp031

0xd570,	// (0x000581e8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd570,	// (0x000581e8) cmail_ddmenu_btn03_pane_g1

0xd588,	// (0x00058200) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd588,	// (0x00058200) cmail_ddmenu_btn03_pane_t1

0xa936,	// (0x000555ae) cell_dialer2_keypad_pane_t1_ParamLimits

0xa950,	// (0x000555c8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa950,	// (0x000555c8) cell_dialer2_keypad_pane_t1_copy1

0xc65d,	// (0x000572d5) ncimui_group_button_pane

0x412d,	// (0x0004eda5) main_sp_fs_calendar_pane_ParamLimits

0xd197,	// (0x00057e0f) list_single_cmail_header_caption_pane_ParamLimits

0x0dd5,	// (0x0004ba4d) aid_recal_txt_sm_pane

0x050a,	// (0x0004b182) mian_recal_day_pane

0x1edf,	// (0x0004cb57) popup_sp_fs_cale_preview_window_ParamLimits

0x050a,	// (0x0004b182) list_recal_day_pane

0x2142,	// (0x0004cdba) list_single_recal_day_pane_ParamLimits

0x2142,	// (0x0004cdba) list_single_recal_day_pane

0x2154,	// (0x0004cdcc) list_single_recal_day_pane_g1_ParamLimits

0x2154,	// (0x0004cdcc) list_single_recal_day_pane_g1

0x2160,	// (0x0004cdd8) list_single_recal_day_pane_g2_ParamLimits

0x2160,	// (0x0004cdd8) list_single_recal_day_pane_g2

0x216f,	// (0x0004cde7) list_single_recal_day_pane_g3_ParamLimits

0x216f,	// (0x0004cde7) list_single_recal_day_pane_g3

0xd5ac,	// (0x00058224) list_single_recal_day_pane_g4_ParamLimits

0xd5ac,	// (0x00058224) list_single_recal_day_pane_g4

0x217b,	// (0x0004cdf3) list_single_recal_day_pane_g5_ParamLimits

0x217b,	// (0x0004cdf3) list_single_recal_day_pane_g5

0x218a,	// (0x0004ce02) list_single_recal_day_pane_g6_ParamLimits

0x218a,	// (0x0004ce02) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0005aabc) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0005aabc) list_single_recal_day_pane_g

0x2196,	// (0x0004ce0e) list_single_recal_day_pane_t1

0x21a4,	// (0x0004ce1c) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005aac9) list_single_recal_day_pane_t

0xd5bf,	// (0x00058237) ncimui_query_button_pane_ParamLimits

0xd5bf,	// (0x00058237) ncimui_query_button_pane

0xd5cf,	// (0x00058247) ncimui_query_button_pane_t1_ParamLimits

0xd5cf,	// (0x00058247) ncimui_query_button_pane_t1

0x21b2,	// (0x0004ce2a) ncimui_query_button_pane_t2_ParamLimits

0x21b2,	// (0x0004ce2a) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005aace) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005aace) ncimui_query_button_pane_t

0xd5e2,	// (0x0005825a) query_button_pane_ParamLimits

0xd5e2,	// (0x0005825a) query_button_pane

0x050a,	// (0x0004b182) bg_button_pane_cp0028

0x21c5,	// (0x0004ce3d) query_button_pane_t1

0x8dc1,	// (0x00053a39) main_tport_pane_ParamLimits

0xd0aa,	// (0x00057d22) bg_popup_window_pane_cp01_ParamLimits

0xd0aa,	// (0x00057d22) bg_popup_window_pane_cp01

0xd0b7,	// (0x00057d2f) heading_pane_cp08_ParamLimits

0xd0b7,	// (0x00057d2f) heading_pane_cp08

0xd0c5,	// (0x00057d3d) heading_pane_cp07_ParamLimits

0xd0c5,	// (0x00057d3d) heading_pane_cp07

0x1ced,	// (0x0004c965) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005aa1a) cell_tport_appsw_pane_g

0x84d8,	// (0x00053150) input_candi_list_open_g1

0x351b,	// (0x0004e193) list_cale_time_pane_g6_ParamLimits

0x351b,	// (0x0004e193) list_cale_time_pane_g6

0x97fa,	// (0x00054472) aid_size_touch_calib_1_ParamLimits

0x97fa,	// (0x00054472) aid_size_touch_calib_1

0x9806,	// (0x0005447e) aid_size_touch_calib_2_ParamLimits

0x9806,	// (0x0005447e) aid_size_touch_calib_2

0x9814,	// (0x0005448c) aid_size_touch_calib_3_ParamLimits

0x9814,	// (0x0005448c) aid_size_touch_calib_3

0x9824,	// (0x0005449c) aid_size_touch_calib_4_ParamLimits

0x9824,	// (0x0005449c) aid_size_touch_calib_4

0x9832,	// (0x000544aa) main_touch_calib_button_group_pane_ParamLimits

0x9832,	// (0x000544aa) main_touch_calib_button_group_pane

0x9840,	// (0x000544b8) main_touch_calib_pane_g1_ParamLimits

0x984c,	// (0x000544c4) main_touch_calib_pane_g2_ParamLimits

0x9858,	// (0x000544d0) main_touch_calib_pane_g3_ParamLimits

0x9864,	// (0x000544dc) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0005a3ed) main_touch_calib_pane_g_ParamLimits

0x9870,	// (0x000544e8) main_touch_calib_pane_t1_ParamLimits

0x9887,	// (0x000544ff) main_touch_calib_pane_t2_ParamLimits

0x989e,	// (0x00054516) main_touch_calib_pane_t3_ParamLimits

0x98b2,	// (0x0005452a) main_touch_calib_pane_t4_ParamLimits

0x98c6,	// (0x0005453e) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005a3f6) main_touch_calib_pane_t_ParamLimits

0xe505,	// (0x0005917d) list_single_fp_cale_pane_g3_ParamLimits

0xe505,	// (0x0005917d) list_single_fp_cale_pane_g3

0xad96,	// (0x00055a0e) bg_button_pane_cp012_ParamLimits

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp03_ParamLimits

0xb783,	// (0x000563fb) cell_vitu2_function_top_pane_g1_ParamLimits

0xad96,	// (0x00055a0e) bg_vkb2_func_pane_cp04_ParamLimits

0xc5fb,	// (0x00057273) main_ncimui_button_group_pane_ParamLimits

0xc5fb,	// (0x00057273) main_ncimui_button_group_pane

0xc64b,	// (0x000572c3) main_ncimui_pane_t3_ParamLimits

0xc64b,	// (0x000572c3) main_ncimui_pane_t3

0x1e15,	// (0x0004ca8d) phacti_button_group_pane

0x20f8,	// (0x0004cd70) aid_size_list_single_double_ParamLimits

0xd532,	// (0x000581aa) popup_ezdial_listscroll_window_ParamLimits

0xd552,	// (0x000581ca) popup_number_entry_window_cp01_ParamLimits

0xd5ef,	// (0x00058267) phacti_button_pane_ParamLimits

0xd5ef,	// (0x00058267) phacti_button_pane

0x050a,	// (0x0004b182) bg_button_pane_cp14

0x21d3,	// (0x0004ce4b) phacti_button_pane_t1

0xd600,	// (0x00058278) main_touch_calib_button_pane_ParamLimits

0xd600,	// (0x00058278) main_touch_calib_button_pane

0x2f80,	// (0x0004dbf8) bg_button_pane_cp18_ParamLimits

0x2f80,	// (0x0004dbf8) bg_button_pane_cp18

0x21e1,	// (0x0004ce59) main_touch_calib_button_pane_t1_ParamLimits

0x21e1,	// (0x0004ce59) main_touch_calib_button_pane_t1

0x21f7,	// (0x0004ce6f) main_touch_calib_button_pane_t2_ParamLimits

0x21f7,	// (0x0004ce6f) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005aad3) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005aad3) main_touch_calib_button_pane_t

0x050a,	// (0x0004b182) cell_ncimui_button_pane

0x050a,	// (0x0004b182) bg_button_pane_cp032

0x2215,	// (0x0004ce8d) cell_ncimui_button_pane_t1

0xa9ac,	// (0x00055624) image3_infobar_pane_ParamLimits

0xa9ac,	// (0x00055624) image3_infobar_pane

0xc9a9,	// (0x00057621) fs_bigclock_status_pane_ParamLimits

0xc9a9,	// (0x00057621) fs_bigclock_status_pane

0xc9b6,	// (0x0005762e) main_fs_bigclock_clock_pane_ParamLimits

0xc9b6,	// (0x0005762e) main_fs_bigclock_clock_pane

0xc9c6,	// (0x0005763e) main_fs_bigclock_indi_pane_ParamLimits

0xc9c6,	// (0x0005763e) main_fs_bigclock_indi_pane

0xc9f3,	// (0x0005766b) main_fs_bigclock_swipe_pane_ParamLimits

0xc9f3,	// (0x0005766b) main_fs_bigclock_swipe_pane

0x050a,	// (0x0004b182) main_fs_clock_dumped_data

0x1720,	// (0x0004c398) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1720,	// (0x0004c398) list_single_fs_bigclock_indicator_pane_g1

0x173c,	// (0x0004c3b4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x173c,	// (0x0004c3b4) list_single_fs_bigclock_indicator_pane_g2

0x1756,	// (0x0004c3ce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1756,	// (0x0004c3ce) list_single_fs_bigclock_indicator_pane_g3

0x1770,	// (0x0004c3e8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1770,	// (0x0004c3e8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0005a906) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0005a906) list_single_fs_bigclock_indicator_pane_g

0x1796,	// (0x0004c40e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1796,	// (0x0004c40e) list_single_fs_bigclock_indicator_pane_t1

0x17be,	// (0x0004c436) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x17be,	// (0x0004c436) list_single_fs_bigclock_indicator_pane_t2

0x17e6,	// (0x0004c45e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x17e6,	// (0x0004c45e) list_single_fs_bigclock_indicator_pane_t3

0x180e,	// (0x0004c486) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x180e,	// (0x0004c486) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0005a911) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0005a911) list_single_fs_bigclock_indicator_pane_t

0x2223,	// (0x0004ce9b) image3_infobar_fav_pane_ParamLimits

0x2223,	// (0x0004ce9b) image3_infobar_fav_pane

0x2233,	// (0x0004ceab) image3_infobar_loc_pane_ParamLimits

0x2233,	// (0x0004ceab) image3_infobar_loc_pane

0x2247,	// (0x0004cebf) image3_infobar_time_pane_ParamLimits

0x2247,	// (0x0004cebf) image3_infobar_time_pane

0xe19c,	// (0x00058e14) image3_infobar_time_pane_g1

0x2257,	// (0x0004cecf) image3_infobar_time_pane_t1

0xe19c,	// (0x00058e14) image3_infobar_loc_pane_g1

0x2265,	// (0x0004cedd) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005aad8) image3_infobar_loc_pane_g

0x226d,	// (0x0004cee5) image3_infobar_loc_pane_t1

0xe19c,	// (0x00058e14) image3_infobar_fav_pane_g1

0x227b,	// (0x0004cef3) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005aadd) image3_infobar_fav_pane_g

0x2283,	// (0x0004cefb) fs_bigclock_status_battery_pane

0x228c,	// (0x0004cf04) fs_bigclock_status_signal_pane

0x2295,	// (0x0004cf0d) fs_bigclock_status_title_pane

0x229e,	// (0x0004cf16) fs_bigclock_status_signal_pane_g1

0x22a7,	// (0x0004cf1f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005aae2) fs_bigclock_status_signal_pane_g

0x22af,	// (0x0004cf27) fs_bigclock_status_battery_pane_g1

0x22b8,	// (0x0004cf30) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005aae7) fs_bigclock_status_battery_pane_g

0x22c0,	// (0x0004cf38) fs_bigclock_status_title_pane_t1

0xe19c,	// (0x00058e14) main_fs_bigclock_clock_pane_g1

0x22ce,	// (0x0004cf46) main_fs_bigclock_clock_pane_g2

0x22ce,	// (0x0004cf46) main_fs_bigclock_clock_pane_g3

0x22ce,	// (0x0004cf46) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005aaec) main_fs_bigclock_clock_pane_g

0x22d6,	// (0x0004cf4e) main_fs_bigclock_clock_pane_t1

0x22e4,	// (0x0004cf5c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005aaf5) main_fs_bigclock_clock_pane_t

0x22f3,	// (0x0004cf6b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x22f3,	// (0x0004cf6b) list_single_fs_bigclock_indicator_pane

0xd612,	// (0x0005828a) list_single_fs_bigclock_pane_ParamLimits

0xd612,	// (0x0005828a) list_single_fs_bigclock_pane

0x230d,	// (0x0004cf85) main_fs_bigclock_indicator_pane_t1

0x231c,	// (0x0004cf94) list_single_fs_bigclock_pane_g1

0x2324,	// (0x0004cf9c) list_single_fs_bigclock_pane_t1

0xe19c,	// (0x00058e14) main_fs_bigclock_swipe_pane_g1

0x2362,	// (0x0004cfda) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005ab06) main_fs_bigclock_swipe_pane_g

0x236a,	// (0x0004cfe2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x236a,	// (0x0004cfe2) main_fs_bigclock_swipe_pane_t1

0x7c8a,	// (0x00052902) call_type_pane_ParamLimits

0x050a,	// (0x0004b182) main_btmg_pane

0x1fd8,	// (0x0004cc50) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1fd8,	// (0x0004cc50) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0005aa79) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005aa79) list_single_cale_mrui_row_pane_g

0x2132,	// (0x0004cdaa) list_recal_vselct_arw_lo_pane

0x213a,	// (0x0004cdb2) list_recal_vselct_arw_up_pane

0x0dcc,	// (0x0004ba44) list_recal_vselct_pane

0x2387,	// (0x0004cfff) btmg_button_pane

0xd675,	// (0x000582ed) main_btmg_pane_g1

0x050a,	// (0x0004b182) bg_button_pane_cp044

0x2391,	// (0x0004d009) btmg_button_pane_t1

0x4e5d,	// (0x0004fad5) aid_listscroll_gen

0x412d,	// (0x0004eda5) main_cntbar_detail_pane

0x1d0b,	// (0x0004c983) list_cmail_folder_pane

0x1d1b,	// (0x0004c993) sp_fs_scroll_pane_cp03_ParamLimits

0xd67d,	// (0x000582f5) list_single_fs_dyc_pane_cp01_ParamLimits

0xd67d,	// (0x000582f5) list_single_fs_dyc_pane_cp01

0x239f,	// (0x0004d017) aid_size_cmail_indent

0x23a8,	// (0x0004d020) list_single_dyc_row_pane_cp01

0xd6c3,	// (0x0005833b) cntbar_detail_list_pane_ParamLimits

0xd6c3,	// (0x0005833b) cntbar_detail_list_pane

0xd6fd,	// (0x00058375) main_cntbar_detail_cont_pane_ParamLimits

0xd6fd,	// (0x00058375) main_cntbar_detail_cont_pane

0x7c24,	// (0x0005289c) scroll_pane_cp032_ParamLimits

0x7c24,	// (0x0005289c) scroll_pane_cp032

0xd709,	// (0x00058381) cntbar_detail_list_event_pane_ParamLimits

0xd709,	// (0x00058381) cntbar_detail_list_event_pane

0xd6cf,	// (0x00058347) cntbar_detail_list_shct_pane

0x33c2,	// (0x0004e03a) aid_list_gen

0x23b1,	// (0x0004d029) aid_scroll

0x23ba,	// (0x0004d032) aid_size_touch_scroll_bar

0x190b,	// (0x0004c583) aid_list_double

0x23c3,	// (0x0004d03b) aid_list_single

0xd71d,	// (0x00058395) aid_list_single_lg

0x23cc,	// (0x0004d044) aid_list_z_g_a_sm

0x23d4,	// (0x0004d04c) aid_list_z_g_d

0x23dc,	// (0x0004d054) aid_txt_z_prm

0xd726,	// (0x0005839e) aid_txt_z_prm_cp01

0xd734,	// (0x000583ac) aid_txt_z_sec

0xd742,	// (0x000583ba) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd742,	// (0x000583ba) main_cntbar_detail_cont_pane_g1

0xd74f,	// (0x000583c7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd74f,	// (0x000583c7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005ab0b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005ab0b) main_cntbar_detail_cont_pane_g

0x23ea,	// (0x0004d062) main_cntbar_detail_cont_pane_t1

0x23f8,	// (0x0004d070) main_cntbar_detail_cont_pane_t2

0x2406,	// (0x0004d07e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005ab10) main_cntbar_detail_cont_pane_t

0xd75b,	// (0x000583d3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd75b,	// (0x000583d3) cell_cntbar_detail_list_shct_pane

0x2414,	// (0x0004d08c) cntbar_detail_list_shct_pane_g1

0x241d,	// (0x0004d095) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005ab17) cntbar_detail_list_shct_pane_g

0xd76f,	// (0x000583e7) cntbar_detail_list_event_pane_g1_ParamLimits

0xd76f,	// (0x000583e7) cntbar_detail_list_event_pane_g1

0xd77b,	// (0x000583f3) cntbar_detail_list_event_pane_g2_ParamLimits

0xd77b,	// (0x000583f3) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005ab1c) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005ab1c) cntbar_detail_list_event_pane_g

0xd7e7,	// (0x0005845f) cntbar_detail_list_event_pane_t1_ParamLimits

0xd7e7,	// (0x0005845f) cntbar_detail_list_event_pane_t1

0xd7fc,	// (0x00058474) cntbar_detail_list_event_pane_t2_ParamLimits

0xd7fc,	// (0x00058474) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005ab29) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005ab29) cntbar_detail_list_event_pane_t

0xe19c,	// (0x00058e14) cell_cntbar_detail_list_shct_pane_g1

0x8024,	// (0x00052c9c) navi_pane_mv_g3

0x412d,	// (0x0004eda5) main_cntbar_detail_pane_ParamLimits

0x050a,	// (0x0004b182) main_notif_wgt_pane

0xa660,	// (0x000552d8) aid_tch_main_mp4_pane_g4

0xa895,	// (0x0005550d) popup_slider_window_cp02

0x2129,	// (0x0004cda1) list_recal_day_event_pane

0xd6a3,	// (0x0005831b) cntbar_detail_btn_pane_ParamLimits

0xd6a3,	// (0x0005831b) cntbar_detail_btn_pane

0xd6b3,	// (0x0005832b) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6b3,	// (0x0005832b) cntbar_detail_btn_pane_cp01

0xd6cf,	// (0x00058347) cntbar_detail_list_shct_pane_ParamLimits

0xd6db,	// (0x00058353) cntbar_detail_pane_g1_ParamLimits

0xd6db,	// (0x00058353) cntbar_detail_pane_g1

0xd6e7,	// (0x0005835f) cntbar_detail_pane_t1_ParamLimits

0xd6e7,	// (0x0005835f) cntbar_detail_pane_t1

0xd787,	// (0x000583ff) cntbar_detail_list_event_pane_g3_ParamLimits

0xd787,	// (0x000583ff) cntbar_detail_list_event_pane_g3

0xd79f,	// (0x00058417) cntbar_detail_list_event_pane_g4_ParamLimits

0xd79f,	// (0x00058417) cntbar_detail_list_event_pane_g4

0xd7b7,	// (0x0005842f) cntbar_detail_list_event_pane_g5_ParamLimits

0xd7b7,	// (0x0005842f) cntbar_detail_list_event_pane_g5

0xd7cf,	// (0x00058447) cntbar_detail_list_event_pane_g6_ParamLimits

0xd7cf,	// (0x00058447) cntbar_detail_list_event_pane_g6

0xd811,	// (0x00058489) cntbar_detail_list_event_pane_t3_ParamLimits

0xd811,	// (0x00058489) cntbar_detail_list_event_pane_t3

0xd823,	// (0x0005849b) popup_notif_wgt_window_ParamLimits

0xd823,	// (0x0005849b) popup_notif_wgt_window

0xd833,	// (0x000584ab) popup_submenu_window_cp01_ParamLimits

0xd833,	// (0x000584ab) popup_submenu_window_cp01

0x3a5f,	// (0x0004e6d7) bg_popup_window_pane_cp10

0x2426,	// (0x0004d09e) listscroll_notif_wgt_pane

0x2430,	// (0x0004d0a8) list_notif_wgt_window

0x2439,	// (0x0004d0b1) scroll_pane_cp033

0x2442,	// (0x0004d0ba) list_notif_wgt_row_pane_ParamLimits

0x2442,	// (0x0004d0ba) list_notif_wgt_row_pane

0x2454,	// (0x0004d0cc) aid_size_list_notif_wgt_del

0x245d,	// (0x0004d0d5) list_notif_wgt_row_pane_g1

0x2465,	// (0x0004d0dd) list_notif_wgt_row_pane_g2

0x246d,	// (0x0004d0e5) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005ab30) list_notif_wgt_row_pane_g

0x2476,	// (0x0004d0ee) list_notif_wgt_row_pane_t1

0x2484,	// (0x0004d0fc) list_notif_wgt_row_pane_t2

0x2492,	// (0x0004d10a) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005ab37) list_notif_wgt_row_pane_t

0xee33,	// (0x00059aab) list_recal_day_event_pane_g1

0x24a0,	// (0x0004d118) list_recal_day_event_pane_t1

0x050a,	// (0x0004b182) bg_button_pane_cp045

0x24af,	// (0x0004d127) cntbar_detail_btn_pane_t1

0x4e65,	// (0x0004fadd) main_callh_pane_ParamLimits

0x4e65,	// (0x0004fadd) main_callh_pane

0x050a,	// (0x0004b182) main_coverflow0_pane

0x050a,	// (0x0004b182) main_wgtman_pane

0xca0b,	// (0x00057683) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xca0b,	// (0x00057683) main_fs_bigclock_unlock_btn_pane

0x1ce5,	// (0x0004c95d) bg_button_pane_cp16

0x1cf5,	// (0x0004c96d) cell_tport_appsw_pane_g3

0xd841,	// (0x000584b9) cf0_flow_pane_ParamLimits

0xd841,	// (0x000584b9) cf0_flow_pane

0x24bd,	// (0x0004d135) listscroll_cf0_pane

0x24c6,	// (0x0004d13e) main_cf0_pane_g1

0xd850,	// (0x000584c8) main_cf0_pane_t1_ParamLimits

0xd850,	// (0x000584c8) main_cf0_pane_t1

0xd864,	// (0x000584dc) main_cf0_pane_t2_ParamLimits

0xd864,	// (0x000584dc) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005ab3e) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005ab3e) main_cf0_pane_t

0x24d0,	// (0x0004d148) scroll_pane_cp11

0xd878,	// (0x000584f0) cf0_flow_pane_g1

0xd880,	// (0x000584f8) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005ab43) cf0_flow_pane_g

0xd888,	// (0x00058500) cf0_flow_pane_t1

0x050a,	// (0x0004b182) main_call6_pane

0x050a,	// (0x0004b182) main_calllock_pane

0xd896,	// (0x0005850e) call6_btn_grp_pane_ParamLimits

0xd896,	// (0x0005850e) call6_btn_grp_pane

0xd8a5,	// (0x0005851d) call6_pane_g1_ParamLimits

0xd8a5,	// (0x0005851d) call6_pane_g1

0xd8b4,	// (0x0005852c) popup_call6_1st_window_ParamLimits

0xd8b4,	// (0x0005852c) popup_call6_1st_window

0xd8c2,	// (0x0005853a) popup_call6_2nd_window_ParamLimits

0xd8c2,	// (0x0005853a) popup_call6_2nd_window

0xd8d0,	// (0x00058548) cell_call6_btn_pane_ParamLimits

0xd8d0,	// (0x00058548) cell_call6_btn_pane

0x3a5f,	// (0x0004e6d7) bg_popup_call2_in_pane_cp03

0x24db,	// (0x0004d153) popup_call6_1st_window_g1

0x24e3,	// (0x0004d15b) popup_call6_1st_window_g2

0x24eb,	// (0x0004d163) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005ab48) popup_call6_1st_window_g

0x24f3,	// (0x0004d16b) popup_call6_1st_window_t1

0x2502,	// (0x0004d17a) popup_call6_1st_window_t2

0x2512,	// (0x0004d18a) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005ab4f) popup_call6_1st_window_t

0x3a5f,	// (0x0004e6d7) bg_popup_call2_in_pane_cp04

0x24db,	// (0x0004d153) popup_call6_2nd_window_g1

0x24e3,	// (0x0004d15b) popup_call6_2nd_window_g2

0x24eb,	// (0x0004d163) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005ab48) popup_call6_2nd_window_g

0x24f3,	// (0x0004d16b) popup_call6_2nd_window_t1

0x050a,	// (0x0004b182) bg_button_pane_cp15

0x2522,	// (0x0004d19a) cell_call6_btn_pane_g1

0x252b,	// (0x0004d1a3) cell_call6_btn_pane_t1

0xd8df,	// (0x00058557) listscroll_wgtman_pane_ParamLimits

0xd8df,	// (0x00058557) listscroll_wgtman_pane

0xd8fd,	// (0x00058575) wgtman_btn_pane_ParamLimits

0xd8fd,	// (0x00058575) wgtman_btn_pane

0x3916,	// (0x0004e58e) aid_scroll_copy1

0x253a,	// (0x0004d1b2) list_wgtman_pane

0xd932,	// (0x000585aa) wgtman_btn_pane_g1_ParamLimits

0xd932,	// (0x000585aa) wgtman_btn_pane_g1

0xd95a,	// (0x000585d2) wgtman_btn_pane_t1_ParamLimits

0xd95a,	// (0x000585d2) wgtman_btn_pane_t1

0x2544,	// (0x0004d1bc) wgtman_btn_pane_t2_ParamLimits

0x2544,	// (0x0004d1bc) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005ab56) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005ab56) wgtman_btn_pane_t

0xd991,	// (0x00058609) listrow_wgtman_pane_ParamLimits

0xd991,	// (0x00058609) listrow_wgtman_pane

0xd9ac,	// (0x00058624) listrow_wgtman_pane_g1

0xd9b5,	// (0x0005862d) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005ab5b) listrow_wgtman_pane_g

0xd9bf,	// (0x00058637) listrow_wgtman_pane_t1

0xd9cd,	// (0x00058645) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005ab60) listrow_wgtman_pane_t

0xd9db,	// (0x00058653) wait_bar_pane_cp09

0x255b,	// (0x0004d1d3) main_calllock_btn_pane

0x2565,	// (0x0004d1dd) main_calllock_pane_g1

0x050a,	// (0x0004b182) bg_button_pane_cp17

0x2571,	// (0x0004d1e9) main_calllock_btn_pane_g1

0x257a,	// (0x0004d1f2) main_calllock_btn_pane_t1

0x050a,	// (0x0004b182) main_dialer3_pane

0x050a,	// (0x0004b182) main_fmrd2_pane

0xe19c,	// (0x00058e14) main_fs_bigclock_unlock_btn_pane_g1

0x2591,	// (0x0004d209) main_fs_bigclock_unlock_btn_pane_t1

0xd9e3,	// (0x0005865b) area_fmrd2_info_pane_ParamLimits

0xd9e3,	// (0x0005865b) area_fmrd2_info_pane

0xd9f1,	// (0x00058669) area_fmrd2_visual_pane_ParamLimits

0xd9f1,	// (0x00058669) area_fmrd2_visual_pane

0xd9ff,	// (0x00058677) fmrd2_indi_pane_ParamLimits

0xd9ff,	// (0x00058677) fmrd2_indi_pane

0xda0c,	// (0x00058684) area_fmrd2_visual_pane_g1

0xda14,	// (0x0005868c) area_fmrd2_visual_pane_t1

0xda24,	// (0x0005869c) area_fmrd2_visual_pane_t2

0xda34,	// (0x000586ac) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005ab6a) area_fmrd2_visual_pane_t

0xda44,	// (0x000586bc) area_fmrd2_info_pane_g1

0xda4c,	// (0x000586c4) area_fmrd2_info_pane_t1

0xda5c,	// (0x000586d4) area_fmrd2_info_pane_t2

0xda6c,	// (0x000586e4) area_fmrd2_info_pane_t3

0xda7c,	// (0x000586f4) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005ab71) area_fmrd2_info_pane_t

0xda8a,	// (0x00058702) fmrd2_indi_pane_t1

0xda9a,	// (0x00058712) fmrd2_indi_pane_t2

0xdaaa,	// (0x00058722) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005ab7a) fmrd2_indi_pane_t

0x177f,	// (0x0004c3f7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x177f,	// (0x0004c3f7) list_single_fs_bigclock_indicator_pane_g5

0x1823,	// (0x0004c49b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1823,	// (0x0004c49b) list_single_fs_bigclock_indicator_pane_t5

0xd2d1,	// (0x00057f49) aid_cell_bcale_month_pane_ParamLimits

0xd2d1,	// (0x00057f49) aid_cell_bcale_month_pane

0xd2dd,	// (0x00057f55) bcale_month_pane_ParamLimits

0xd2dd,	// (0x00057f55) bcale_month_pane

0xd2eb,	// (0x00057f63) bcale_preview_pane_ParamLimits

0xd2eb,	// (0x00057f63) bcale_preview_pane

0x2324,	// (0x0004cf9c) list_single_fs_bigclock_pane_t1_ParamLimits

0x233e,	// (0x0004cfb6) list_single_fs_bigclock_pane_t2_ParamLimits

0x233e,	// (0x0004cfb6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005ab01) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005ab01) list_single_fs_bigclock_pane_t

0x2589,	// (0x0004d201) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005ab65) main_fs_bigclock_unlock_btn_pane_g

0xdab8,	// (0x00058730) aid_dia3_key_size_ParamLimits

0xdab8,	// (0x00058730) aid_dia3_key_size

0xdac4,	// (0x0005873c) aid_dia3_listrow_size_ParamLimits

0xdac4,	// (0x0005873c) aid_dia3_listrow_size

0xdad4,	// (0x0005874c) dia3_keypad_fun_pane_ParamLimits

0xdad4,	// (0x0005874c) dia3_keypad_fun_pane

0xdae6,	// (0x0005875e) dia3_keypad_num_pane_ParamLimits

0xdae6,	// (0x0005875e) dia3_keypad_num_pane

0xdaf8,	// (0x00058770) dia3_listscroll_pane_ParamLimits

0xdaf8,	// (0x00058770) dia3_listscroll_pane

0xdb06,	// (0x0005877e) dia3_numentry_pane_ParamLimits

0xdb06,	// (0x0005877e) dia3_numentry_pane

0x259f,	// (0x0004d217) dia3_list_pane

0x25aa,	// (0x0004d222) scroll_pane_cp12

0x050a,	// (0x0004b182) bg_dia3_numentry_pane

0xdb14,	// (0x0005878c) dia3_numentry_pane_t1

0xdb23,	// (0x0005879b) cell_dia3_key_num_pane

0xdb2b,	// (0x000587a3) cell_dia3_key0_fun_pane_ParamLimits

0xdb2b,	// (0x000587a3) cell_dia3_key0_fun_pane

0xdb38,	// (0x000587b0) cell_dia3_key1_fun_pane_ParamLimits

0xdb38,	// (0x000587b0) cell_dia3_key1_fun_pane

0xdb45,	// (0x000587bd) dia3_listrow_pane

0x147f,	// (0x0004c0f7) bg_dia3_numentry_pane_g1

0x050a,	// (0x0004b182) bg_button_pane_cp21

0x25b5,	// (0x0004d22d) cell_dia3_key_num_pane_t1

0x25c3,	// (0x0004d23b) cell_dia3_key_num_pane_t2

0x25d2,	// (0x0004d24a) cell_dia3_key_num_pane_t3

0x25e1,	// (0x0004d259) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005ab81) cell_dia3_key_num_pane_t

0x050a,	// (0x0004b182) bg_button_pane_cp19

0xdb52,	// (0x000587ca) cell_dia3_key0_fun_pane_g1

0x050a,	// (0x0004b182) bg_button_pane_cp20

0xdb5a,	// (0x000587d2) cell_dia3_key1_fun_pane_g1

0xdb62,	// (0x000587da) area_left_week_number_pane

0xdb6b,	// (0x000587e3) area_top_day_name_pane

0xdb74,	// (0x000587ec) frame_month_view_pane

0xdb7e,	// (0x000587f6) grid_month_view_pane

0xdb88,	// (0x00058800) cell_top_day_name_pane_ParamLimits

0xdb88,	// (0x00058800) cell_top_day_name_pane

0xdba2,	// (0x0005881a) cell_area_left_week_number_pane_ParamLimits

0xdba2,	// (0x0005881a) cell_area_left_week_number_pane

0xdbb6,	// (0x0005882e) cell_month_view_pane_ParamLimits

0xdbb6,	// (0x0005882e) cell_month_view_pane

0x25f0,	// (0x0004d268) frm_month_g1

0xdbd3,	// (0x0005884b) frm_month_g2

0xdbdd,	// (0x00058855) frm_month_g3

0xdbe7,	// (0x0005885f) frm_month_g4

0xdbf1,	// (0x00058869) frm_month_g5

0xdbfb,	// (0x00058873) frm_month_g6

0xdc05,	// (0x0005887d) frm_month_g7

0x25f9,	// (0x0004d271) frm_month_g8

0xdc0f,	// (0x00058887) frm_month_g9

0xdc18,	// (0x00058890) frm_month_g10

0xdc21,	// (0x00058899) frm_month_g11

0xdc2a,	// (0x000588a2) frm_month_g12

0xdc33,	// (0x000588ab) frm_month_g13

0xdc3c,	// (0x000588b4) frm_month_g14

0xdc45,	// (0x000588bd) frm_month_g15

0xdc50,	// (0x000588c8) frm_month_g16

0x000f,

0xff12,	// (0x0005ab8a) frm_month_g

0xdc5b,	// (0x000588d3) cell_top_day_name_pane_t1

0xdc6a,	// (0x000588e2) cell_area_left_week_number_pane_g1

0xdc5b,	// (0x000588d3) cell_area_left_week_number_pane_t1

0xe19c,	// (0x00058e14) cell_month_view_pane_g1

0xdc72,	// (0x000588ea) cell_month_view_pane_t1

0x050a,	// (0x0004b182) main_fps_pane

0x1a5d,	// (0x0004c6d5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1a5d,	// (0x0004c6d5) cmail_ddmenu_btn02_pane_cp1

0x1a79,	// (0x0004c6f1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1a79,	// (0x0004c6f1) cmail_ddmenu_btn02_pane_cp2

0xd57c,	// (0x000581f4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd57c,	// (0x000581f4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0005aab2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0005aab2) cmail_ddmenu_btn02_pane_g

0xd59a,	// (0x00058212) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd59a,	// (0x00058212) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0005aab7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0005aab7) cmail_ddmenu_btn02_pane_t

0xdc81,	// (0x000588f9) fps_text_pane_ParamLimits

0xdc81,	// (0x000588f9) fps_text_pane

0xdc8e,	// (0x00058906) main_fps_pane_g1_ParamLimits

0xdc8e,	// (0x00058906) main_fps_pane_g1

0xdc9c,	// (0x00058914) wait_bar_pane_cp010_ParamLimits

0xdc9c,	// (0x00058914) wait_bar_pane_cp010

0xdca8,	// (0x00058920) fps_text_pane_t1_ParamLimits

0xdca8,	// (0x00058920) fps_text_pane_t1

0xac85,	// (0x000558fd) cam4_image_uncrop_pane_g1

0xac8e,	// (0x00055906) cam4_image_uncrop_pane_g2

0xac97,	// (0x0005590f) cam4_image_uncrop_pane_g3

0xaca0,	// (0x00055918) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005a585) cam4_image_uncrop_pane_g

0xdb45,	// (0x000587bd) dia3_listrow_pane_ParamLimits

0x050a,	// (0x0004b182) main_phob2_pane

0xd10c,	// (0x00057d84) cell_tport_appsw_pane_cp02_ParamLimits

0xd10c,	// (0x00057d84) cell_tport_appsw_pane_cp02

0xd11b,	// (0x00057d93) cell_tport_appsw_pane_cp03_ParamLimits

0xd11b,	// (0x00057d93) cell_tport_appsw_pane_cp03

0x050a,	// (0x0004b182) phob2_contact_card_pane

0x050a,	// (0x0004b182) phob2_listscroll_pane

0x2602,	// (0x0004d27a) phob2_list_pane

0x260a,	// (0x0004d282) scroll_pane_cp034

0xdcc1,	// (0x00058939) phob2_cc_data_pane_ParamLimits

0xdcc1,	// (0x00058939) phob2_cc_data_pane

0xdcdb,	// (0x00058953) phob2_cc_listscroll_pane_ParamLimits

0xdcdb,	// (0x00058953) phob2_cc_listscroll_pane

0xdcf5,	// (0x0005896d) list_double_large_graphic_phob2_pane_ParamLimits

0xdcf5,	// (0x0005896d) list_double_large_graphic_phob2_pane

0x2612,	// (0x0004d28a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x2612,	// (0x0004d28a) list_double_large_graphic_phob2_pane_g1

0x261f,	// (0x0004d297) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x261f,	// (0x0004d297) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005abab) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005abab) list_double_large_graphic_phob2_pane_g

0x262b,	// (0x0004d2a3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x262b,	// (0x0004d2a3) list_double_large_graphic_phob2_pane_t1

0x2640,	// (0x0004d2b8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2640,	// (0x0004d2b8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005abb0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005abb0) list_double_large_graphic_phob2_pane_t

0x050a,	// (0x0004b182) list_highlight_pane_cp024

0x2652,	// (0x0004d2ca) phob2_cc_button_pane

0xdd13,	// (0x0005898b) phob2_cc_data_pane_g1_ParamLimits

0xdd13,	// (0x0005898b) phob2_cc_data_pane_g1

0xdd1f,	// (0x00058997) phob2_cc_data_pane_g2_ParamLimits

0xdd1f,	// (0x00058997) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005abb5) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005abb5) phob2_cc_data_pane_g

0xdd2b,	// (0x000589a3) phob2_cc_data_pane_t1_ParamLimits

0xdd2b,	// (0x000589a3) phob2_cc_data_pane_t1

0xdd3d,	// (0x000589b5) phob2_cc_data_pane_t2_ParamLimits

0xdd3d,	// (0x000589b5) phob2_cc_data_pane_t2

0xdd4f,	// (0x000589c7) phob2_cc_data_pane_t3_ParamLimits

0xdd4f,	// (0x000589c7) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005abba) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005abba) phob2_cc_data_pane_t

0x265a,	// (0x0004d2d2) phob2_cc_list_pane_ParamLimits

0x265a,	// (0x0004d2d2) phob2_cc_list_pane

0xf0ce,	// (0x00059d46) scroll_pane_cp035_ParamLimits

0xf0ce,	// (0x00059d46) scroll_pane_cp035

0x412d,	// (0x0004eda5) bg_button_pane_cp033

0x2666,	// (0x0004d2de) phob2_cc_button_pane_g1

0x2672,	// (0x0004d2ea) phob2_cc_button_pane_t1

0x2687,	// (0x0004d2ff) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005abc1) phob2_cc_button_pane_t

0xdd61,	// (0x000589d9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdd61,	// (0x000589d9) list_double_large_graphic_phob2_cc_pane

0xdd88,	// (0x00058a00) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd88,	// (0x00058a00) list_double_large_graphic_phob2_cc_pane_g1

0xdd99,	// (0x00058a11) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdd99,	// (0x00058a11) list_double_large_graphic_phob2_cc_pane_g2

0xdda8,	// (0x00058a20) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdda8,	// (0x00058a20) list_double_large_graphic_phob2_cc_pane_g3

0xddb7,	// (0x00058a2f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xddb7,	// (0x00058a2f) list_double_large_graphic_phob2_cc_pane_g4

0xddc8,	// (0x00058a40) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xddc8,	// (0x00058a40) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005abc6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005abc6) list_double_large_graphic_phob2_cc_pane_g

0xddd7,	// (0x00058a4f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xddd7,	// (0x00058a4f) list_double_large_graphic_phob2_cc_pane_t1

0xde00,	// (0x00058a78) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xde00,	// (0x00058a78) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005abd1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005abd1) list_double_large_graphic_phob2_cc_pane_t

0x2699,	// (0x0004d311) list_highlight_pane_cp025_ParamLimits

0x2699,	// (0x0004d311) list_highlight_pane_cp025

0x412d,	// (0x0004eda5) bg_button_pane_cp033_ParamLimits

0x2666,	// (0x0004d2de) phob2_cc_button_pane_g1_ParamLimits

0x2672,	// (0x0004d2ea) phob2_cc_button_pane_t1_ParamLimits

0x2687,	// (0x0004d2ff) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005abc1) phob2_cc_button_pane_t_ParamLimits

0x5f5d,	// (0x00050bd5) popup_wgtman_window

0xed0f,	// (0x00059987) scroll_pane_cp038

0xd91a,	// (0x00058592) wgtman_btn_pane_cp_01_ParamLimits

0xd91a,	// (0x00058592) wgtman_btn_pane_cp_01

0x26a7,	// (0x0004d31f) wgtman_content_pane

0x26b0,	// (0x0004d328) wgtman_heading_pane

0x050a,	// (0x0004b182) bg_heading_pane_cp02

0x26b9,	// (0x0004d331) wgtman_heading_pane_g1

0x26c1,	// (0x0004d339) wgtman_heading_pane_t1

0x26cf,	// (0x0004d347) scroll_pane_cp036

0x26d7,	// (0x0004d34f) wgtman_list_pane

0x26df,	// (0x0004d357) wgtman_list_pane_t1_ParamLimits

0x26df,	// (0x0004d357) wgtman_list_pane_t1

0xabe4,	// (0x0005585c) cam4_grid_pane

0xb942,	// (0x000565ba) bg_button_pane_cp015_ParamLimits

0xb954,	// (0x000565cc) bg_button_pane_cp016_ParamLimits

0xb967,	// (0x000565df) bg_button_pane_cp017_ParamLimits

0xb9bd,	// (0x00056635) popup_vitu2_query_window_g3_ParamLimits

0xb9bd,	// (0x00056635) popup_vitu2_query_window_g3

0xba78,	// (0x000566f0) popup_vitu2_query_window_t6_ParamLimits

0xba78,	// (0x000566f0) popup_vitu2_query_window_t6

0xbaa3,	// (0x0005671b) popup_vitu2_query_window_t7_ParamLimits

0xbaa3,	// (0x0005671b) popup_vitu2_query_window_t7

0xf0da,	// (0x00059d52) cam4_grid_pane_g1

0xf0e3,	// (0x00059d5b) cam4_grid_pane_g2

0x26f9,	// (0x0004d371) cam4_grid_pane_g3

0x2702,	// (0x0004d37a) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005abd6) cam4_grid_pane_g

0x6cb8,	// (0x00051930) aid_placing_vt_slider_lsc_ParamLimits

0x7004,	// (0x00051c7c) vidtel_button_pane_ParamLimits

0x7004,	// (0x00051c7c) vidtel_button_pane

0x050a,	// (0x0004b182) bg_button_pane_cp034

0xde29,	// (0x00058aa1) vidtel_button_pane_g1

0x270d,	// (0x0004d385) vidtel_button_pane_t1

0xee11,	// (0x00059a89) aid_size_vtel_slider_touch

0xf0ce,	// (0x00059d46) scroll_pane_cp039

0x14bd,	// (0x0004c135) ncim_query_button_pane_cp01_ParamLimits

0x14dc,	// (0x0004c154) ncimui_query_pane_g1_ParamLimits

0x412d,	// (0x0004eda5) input_focus_pane_cp012_ParamLimits

0x1501,	// (0x0004c179) ncim_query_entry_pane_t1_ParamLimits

0xf0ce,	// (0x00059d46) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
