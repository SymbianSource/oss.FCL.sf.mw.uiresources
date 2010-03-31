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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002db5b };

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
0x1952,	// (0x0002f4ad) Screen

0x195e,	// (0x0002f4b9) application_window

0x198e,	// (0x0002f4e9) area_bottom_pane_ParamLimits

0x198e,	// (0x0002f4e9) area_bottom_pane

0x0200,	// (0x0002dd5b) area_top_pane_ParamLimits

0x0200,	// (0x0002dd5b) area_top_pane

0x19eb,	// (0x0002f546) call_video_uplink_pane_ParamLimits

0x19eb,	// (0x0002f546) call_video_uplink_pane

0x028e,	// (0x0002dde9) main_pane_ParamLimits

0x028e,	// (0x0002dde9) main_pane

0xc4b9,	// (0x0003a014) context_pane

0x4af3,	// (0x0003264e) navi_pane

0x4b25,	// (0x00032680) popup_cale_events_window_ParamLimits

0x4b25,	// (0x00032680) popup_cale_events_window

0xc4cc,	// (0x0003a027) popup_mup_playback_window

0x4b3d,	// (0x00032698) signal_pane

0xa331,	// (0x00037e8c) main_browser_pane

0xb02d,	// (0x00038b88) main_burst_pane

0x06ee,	// (0x0002e249) main_calc_pane

0xc49f,	// (0x00039ffa) main_cale_day_pane

0x0702,	// (0x0002e25d) main_cale_month_pane

0xc49f,	// (0x00039ffa) main_cale_week_pane

0xb02d,	// (0x00038b88) main_call_pane

0xa011,	// (0x00037b6c) main_call_poc_pane

0xb02d,	// (0x00038b88) main_camera_pane

0xb02d,	// (0x00038b88) main_chi_dic_pane

0xadaa,	// (0x00038905) main_clock_pane

0xa011,	// (0x00037b6c) main_fmradio_pane

0xb02d,	// (0x00038b88) main_graph_messa_pane

0xa011,	// (0x00037b6c) main_help_pane

0xa331,	// (0x00037e8c) main_im_pane

0xa26c,	// (0x00037dc7) main_image_pane_ParamLimits

0xa26c,	// (0x00037dc7) main_image_pane

0xa011,	// (0x00037b6c) main_location2_pane

0xb02d,	// (0x00038b88) main_location_pane

0xa26c,	// (0x00037dc7) main_messa_pane

0xa011,	// (0x00037b6c) main_mp2_pane

0xb02d,	// (0x00038b88) main_mp_pane

0xa011,	// (0x00037b6c) main_msg_pane

0xa011,	// (0x00037b6c) main_mup_eq_pane

0xa011,	// (0x00037b6c) main_mup_pane

0xa331,	// (0x00037e8c) main_notes_pane

0xa011,	// (0x00037b6c) main_pec_pane

0xa011,	// (0x00037b6c) main_phob_pane

0xa011,	// (0x00037b6c) main_pinb_pane

0xa011,	// (0x00037b6c) main_postcard_pane

0xa011,	// (0x00037b6c) main_qdial_pane

0xb02d,	// (0x00038b88) main_skin_pane

0xa011,	// (0x00037b6c) main_smil2_pane

0xb02d,	// (0x00038b88) main_smil_pane

0xb02d,	// (0x00038b88) main_video_pane

0xb02d,	// (0x00038b88) main_video_tele_pane

0xa26c,	// (0x00037dc7) main_viewer_pane_ParamLimits

0xa26c,	// (0x00037dc7) main_viewer_pane

0xb02d,	// (0x00038b88) main_vorec_pane

0x0754,	// (0x0002e2af) popup_blid_sat_info_window_ParamLimits

0x0754,	// (0x0002e2af) popup_blid_sat_info_window

0x07ac,	// (0x0002e307) popup_dyc_status_message_window_ParamLimits

0x07ac,	// (0x0002e307) popup_dyc_status_message_window

0x07c6,	// (0x0002e321) popup_grid_large_graphic_window_ParamLimits

0x07c6,	// (0x0002e321) popup_grid_large_graphic_window

0x0882,	// (0x0002e3dd) popup_loc_request_window_ParamLimits

0x0882,	// (0x0002e3dd) popup_loc_request_window

0x0978,	// (0x0002e4d3) popup_wml_address_window_ParamLimits

0x0978,	// (0x0002e4d3) popup_wml_address_window

0x48e3,	// (0x0003243e) call_muted_g1

0x4598,	// (0x000320f3) popup_call_audio_conf_window_ParamLimits

0x4598,	// (0x000320f3) popup_call_audio_conf_window

0x48f7,	// (0x00032452) popup_call_audio_first_window_ParamLimits

0x48f7,	// (0x00032452) popup_call_audio_first_window

0x496d,	// (0x000324c8) popup_call_audio_in_window_ParamLimits

0x496d,	// (0x000324c8) popup_call_audio_in_window

0x49a9,	// (0x00032504) popup_call_audio_out_window_ParamLimits

0x49a9,	// (0x00032504) popup_call_audio_out_window

0x49e3,	// (0x0003253e) popup_call_audio_second_window_ParamLimits

0x49e3,	// (0x0003253e) popup_call_audio_second_window

0x4a39,	// (0x00032594) popup_call_audio_wait_window_ParamLimits

0x4a39,	// (0x00032594) popup_call_audio_wait_window

0x4a6e,	// (0x000325c9) popup_number_entry_window_ParamLimits

0x4a6e,	// (0x000325c9) popup_number_entry_window

0x9bfe,	// (0x00037759) bg_popup_call_pane_cp05_ParamLimits

0x9bfe,	// (0x00037759) bg_popup_call_pane_cp05

0x9c1e,	// (0x00037779) popup_number_entry_window_t1

0x9c31,	// (0x0003778c) popup_number_entry_window_t2

0x9c43,	// (0x0003779e) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0003cc28) popup_number_entry_window_t

0x9c55,	// (0x000377b0) text_title_cp2

0x9c68,	// (0x000377c3) bg_popup_call_pane_cp_ParamLimits

0x9c68,	// (0x000377c3) bg_popup_call_pane_cp

0x9c76,	// (0x000377d1) call_thumbnail_pane

0x9c7e,	// (0x000377d9) popup_call_audio_in_window_g1_ParamLimits

0x9c7e,	// (0x000377d9) popup_call_audio_in_window_g1

0x9c8a,	// (0x000377e5) popup_call_audio_in_window_g2_ParamLimits

0x9c8a,	// (0x000377e5) popup_call_audio_in_window_g2

0x9c96,	// (0x000377f1) popup_call_audio_in_window_g3_ParamLimits

0x9c96,	// (0x000377f1) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0003cc31) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0003cc31) popup_call_audio_in_window_g

0x9ca2,	// (0x000377fd) popup_call_audio_in_window_t1_ParamLimits

0x9ca2,	// (0x000377fd) popup_call_audio_in_window_t1

0x9cbe,	// (0x00037819) popup_call_audio_in_window_t2_ParamLimits

0x9cbe,	// (0x00037819) popup_call_audio_in_window_t2

0x9cda,	// (0x00037835) popup_call_audio_in_window_t3_ParamLimits

0x9cda,	// (0x00037835) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0003cc38) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0003cc38) popup_call_audio_in_window_t

0x9c68,	// (0x000377c3) bg_popup_call_pane_cp01_ParamLimits

0x9c68,	// (0x000377c3) bg_popup_call_pane_cp01

0x9c76,	// (0x000377d1) call_thumbnail_pane_cp02

0x9ced,	// (0x00037848) call_type_pane_cp022

0x9cf5,	// (0x00037850) popup_call_audio_out_window_g1_ParamLimits

0x9cf5,	// (0x00037850) popup_call_audio_out_window_g1

0x9d07,	// (0x00037862) popup_call_audio_out_window_g2_ParamLimits

0x9d07,	// (0x00037862) popup_call_audio_out_window_g2

0x9d13,	// (0x0003786e) popup_call_audio_out_window_g3_ParamLimits

0x9d13,	// (0x0003786e) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0003cc3f) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0003cc3f) popup_call_audio_out_window_g

0x9d25,	// (0x00037880) popup_call_audio_out_window_t1_ParamLimits

0x9d25,	// (0x00037880) popup_call_audio_out_window_t1

0x9d3d,	// (0x00037898) popup_call_audio_out_window_t2_ParamLimits

0x9d3d,	// (0x00037898) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0003cc46) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0003cc46) popup_call_audio_out_window_t

0x9d52,	// (0x000378ad) bg_popup_call_pane_ParamLimits

0x9d52,	// (0x000378ad) bg_popup_call_pane

0x1a61,	// (0x0002f5bc) call_thumbnail_pane_cp_ParamLimits

0x1a61,	// (0x0002f5bc) call_thumbnail_pane_cp

0x9dd6,	// (0x00037931) call_type_pane_cp01_ParamLimits

0x9dd6,	// (0x00037931) call_type_pane_cp01

0x9e1a,	// (0x00037975) popup_call_audio_first_window_g1_ParamLimits

0x9e1a,	// (0x00037975) popup_call_audio_first_window_g1

0x9e66,	// (0x000379c1) popup_call_audio_first_window_g2_ParamLimits

0x9e66,	// (0x000379c1) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0003cc4b) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0003cc4b) popup_call_audio_first_window_g

0x9eaa,	// (0x00037a05) popup_call_audio_first_window_t1_ParamLimits

0x9eaa,	// (0x00037a05) popup_call_audio_first_window_t1

0x9f56,	// (0x00037ab1) popup_call_audio_first_window_t4_ParamLimits

0x9f56,	// (0x00037ab1) popup_call_audio_first_window_t4

0x9fe2,	// (0x00037b3d) popup_call_audio_first_window_t5_ParamLimits

0x9fe2,	// (0x00037b3d) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0003cc50) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0003cc50) popup_call_audio_first_window_t

0xa011,	// (0x00037b6c) bg_popup_call_pane_cp02

0xa01b,	// (0x00037b76) call_type_pane_cp023

0xa023,	// (0x00037b7e) popup_call_audio_wait_window_g1

0xa02b,	// (0x00037b86) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003cc57) popup_call_audio_wait_window_g

0xa033,	// (0x00037b8e) popup_call_audio_wait_window_t3

0xa041,	// (0x00037b9c) bg_popup_call_pane_cp03_ParamLimits

0xa041,	// (0x00037b9c) bg_popup_call_pane_cp03

0xa0a1,	// (0x00037bfc) call_thumbnail_pane_cp011_ParamLimits

0xa0a1,	// (0x00037bfc) call_thumbnail_pane_cp011

0xa0ad,	// (0x00037c08) call_type_pane_cp034_ParamLimits

0xa0ad,	// (0x00037c08) call_type_pane_cp034

0xa0e9,	// (0x00037c44) popup_call_audio_second_window_g1_ParamLimits

0xa0e9,	// (0x00037c44) popup_call_audio_second_window_g1

0xa125,	// (0x00037c80) popup_call_audio_second_window_g2_ParamLimits

0xa125,	// (0x00037c80) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0003cc5c) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0003cc5c) popup_call_audio_second_window_g

0xa161,	// (0x00037cbc) popup_call_audio_second_window_t1_ParamLimits

0xa161,	// (0x00037cbc) popup_call_audio_second_window_t1

0xa1e2,	// (0x00037d3d) popup_call_audio_second_window_t2_ParamLimits

0xa1e2,	// (0x00037d3d) popup_call_audio_second_window_t2

0xa218,	// (0x00037d73) popup_call_audio_second_window_t3_ParamLimits

0xa218,	// (0x00037d73) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0003cc61) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0003cc61) popup_call_audio_second_window_t

0xa011,	// (0x00037b6c) bg_popup_call_pane_cp04

0xa24e,	// (0x00037da9) list_conf_pane

0xa256,	// (0x00037db1) popup_call_audio_conf_window_t1

0xa264,	// (0x00037dbf) call_thumbnail_pane_g1

0xa26c,	// (0x00037dc7) bg_pinb_pane_ParamLimits

0xa26c,	// (0x00037dc7) bg_pinb_pane

0xa27a,	// (0x00037dd5) find_pinb_pane

0xa283,	// (0x00037dde) listscroll_pinb_pane_ParamLimits

0xa283,	// (0x00037dde) listscroll_pinb_pane

0xa292,	// (0x00037ded) pinb_bg_pane_g1

0x1a85,	// (0x0002f5e0) pinb_bg_pane_g2

0x1a91,	// (0x0002f5ec) pinb_bg_pane_g3

0x1a9d,	// (0x0002f5f8) pinb_bg_pane_g4

0x1aa9,	// (0x0002f604) pinb_bg_pane_g5

0x1ab5,	// (0x0002f610) pinb_bg_pane_g6

0x1ac0,	// (0x0002f61b) pinb_bg_pane_g7

0x1acb,	// (0x0002f626) pinb_bg_pane_g8

0x1ad6,	// (0x0002f631) pinb_bg_pane_g9

0x1ae0,	// (0x0002f63b) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0003cc68) pinb_bg_pane_g

0x1afd,	// (0x0002f658) grid_pinb_pane

0x1b06,	// (0x0002f661) list_pinb_pane

0x1b0f,	// (0x0002f66a) scroll_pane_cp01_ParamLimits

0x1b0f,	// (0x0002f66a) scroll_pane_cp01

0xa29c,	// (0x00037df7) find_pinb_pane_g1_ParamLimits

0xa29c,	// (0x00037df7) find_pinb_pane_g1

0xa2b4,	// (0x00037e0f) find_pinb_pane_t1

0xa2c6,	// (0x00037e21) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0003cc82) find_pinb_pane_t

0xa2db,	// (0x00037e36) input_focus_pane_cp01_ParamLimits

0xa2db,	// (0x00037e36) input_focus_pane_cp01

0x1b21,	// (0x0002f67c) cell_pinb_pane_ParamLimits

0x1b21,	// (0x0002f67c) cell_pinb_pane

0x1b4a,	// (0x0002f6a5) cell_pinb_pane_g1_ParamLimits

0x1b4a,	// (0x0002f6a5) cell_pinb_pane_g1

0x1b5a,	// (0x0002f6b5) cell_pinb_pane_g2_ParamLimits

0x1b5a,	// (0x0002f6b5) cell_pinb_pane_g2

0xa2e7,	// (0x00037e42) cell_pinb_pane_g3_ParamLimits

0xa2e7,	// (0x00037e42) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0003cc87) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0003cc87) cell_pinb_pane_g

0xa011,	// (0x00037b6c) grid_highlight_pane_cp01

0x1b66,	// (0x0002f6c1) list_pinb_item_pane_ParamLimits

0x1b66,	// (0x0002f6c1) list_pinb_item_pane

0xa011,	// (0x00037b6c) list_highlight_pane_cp02

0x1b78,	// (0x0002f6d3) list_pinb_item_pane_g1_ParamLimits

0x1b78,	// (0x0002f6d3) list_pinb_item_pane_g1

0x1b85,	// (0x0002f6e0) list_pinb_item_pane_g2_ParamLimits

0x1b85,	// (0x0002f6e0) list_pinb_item_pane_g2

0x1b91,	// (0x0002f6ec) list_pinb_item_pane_g3_ParamLimits

0x1b91,	// (0x0002f6ec) list_pinb_item_pane_g3

0x1ba2,	// (0x0002f6fd) list_pinb_item_pane_g4_ParamLimits

0x1ba2,	// (0x0002f6fd) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0003cc8e) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0003cc8e) list_pinb_item_pane_g

0x1bae,	// (0x0002f709) list_pinb_item_pane_t1_ParamLimits

0x1bae,	// (0x0002f709) list_pinb_item_pane_t1

0x0428,	// (0x0002df83) calc_display_pane

0x0450,	// (0x0002dfab) calc_paper_pane

0x0473,	// (0x0002dfce) grid_calc_pane

0xa011,	// (0x00037b6c) bg_list_pane_cp01

0x1bcd,	// (0x0002f728) clock_g1

0x1bd5,	// (0x0002f730) clock_g2

0x0001,

0xf13c,	// (0x0003cc97) clock_g

0x1bdd,	// (0x0002f738) clock_t1_ParamLimits

0x1bdd,	// (0x0002f738) clock_t1

0x1bf2,	// (0x0002f74d) clock_t2_ParamLimits

0x1bf2,	// (0x0002f74d) clock_t2

0x1c04,	// (0x0002f75f) clock_t3_ParamLimits

0x1c04,	// (0x0002f75f) clock_t3

0x1c16,	// (0x0002f771) clock_t4_ParamLimits

0x1c16,	// (0x0002f771) clock_t4

0x1c28,	// (0x0002f783) clock_t5_ParamLimits

0x1c28,	// (0x0002f783) clock_t5

0x1c3d,	// (0x0002f798) clock_t6_ParamLimits

0x1c3d,	// (0x0002f798) clock_t6

0x1c4f,	// (0x0002f7aa) clock_t7_ParamLimits

0x1c4f,	// (0x0002f7aa) clock_t7

0x1c61,	// (0x0002f7bc) clock_t8_ParamLimits

0x1c61,	// (0x0002f7bc) clock_t8

0x1c75,	// (0x0002f7d0) clock_t9_ParamLimits

0x1c75,	// (0x0002f7d0) clock_t9

0x0008,

0xf141,	// (0x0003cc9c) clock_t_ParamLimits

0xf141,	// (0x0003cc9c) clock_t

0xa2f3,	// (0x00037e4e) popup_clock_analogue_window_cp02

0xa2f3,	// (0x00037e4e) popup_clock_digital_window_cp01

0xa2fb,	// (0x00037e56) listscroll_help_pane

0xa011,	// (0x00037b6c) phob_pre_status_pane

0xa305,	// (0x00037e60) grid_qdial_pane

0xa26c,	// (0x00037dc7) listscroll_mce_pane

0xa26c,	// (0x00037dc7) bg_notes_pane

0xa30f,	// (0x00037e6a) list_notes_pane

0x1c89,	// (0x0002f7e4) scroll_pane_cp06

0xa31d,	// (0x00037e78) bg_calc_paper_pane

0x1c9d,	// (0x0002f7f8) list_calc_pane

0xa331,	// (0x00037e8c) bg_calc_display_pane

0x04a1,	// (0x0002dffc) calc_display_pane_t1

0x04b3,	// (0x0002e00e) calc_display_pane_t2

0x1cb7,	// (0x0002f812) calc_display_pane_t3

0x0002,

0xf154,	// (0x0003ccaf) calc_display_pane_t

0x04c5,	// (0x0002e020) cell_calc_pane_ParamLimits

0x04c5,	// (0x0002e020) cell_calc_pane

0xa33d,	// (0x00037e98) bg_calc_paper_pane_g1

0xa349,	// (0x00037ea4) bg_calc_paper_pane_g2

0xa355,	// (0x00037eb0) bg_calc_paper_pane_g3

0xa361,	// (0x00037ebc) bg_calc_paper_pane_g4

0xa36d,	// (0x00037ec8) bg_calc_paper_pane_g5

0x1cc9,	// (0x0002f824) bg_calc_paper_pane_g6

0x1cd8,	// (0x0002f833) bg_calc_paper_pane_g7

0x1ce7,	// (0x0002f842) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0003ccb6) bg_calc_paper_pane_g

0x1cfa,	// (0x0002f855) calc_bg_paper_pane_g9

0x1d0d,	// (0x0002f868) list_calc_item_pane_ParamLimits

0x1d0d,	// (0x0002f868) list_calc_item_pane

0xa379,	// (0x00037ed4) list_calc_item_pane_g1

0x1d22,	// (0x0002f87d) list_calc_item_pane_t1_ParamLimits

0x1d22,	// (0x0002f87d) list_calc_item_pane_t1

0x04fa,	// (0x0002e055) list_calc_item_pane_t2_ParamLimits

0x04fa,	// (0x0002e055) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0003ccc7) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0003ccc7) list_calc_item_pane_t

0xa386,	// (0x00037ee1) cell_calc_pane_g1

0xa390,	// (0x00037eeb) grid_highlight_pane_cp02

0x1d34,	// (0x0002f88f) bg_calc_display_pane_g1

0x052c,	// (0x0002e087) bg_calc_display_pane_g2

0x1d3d,	// (0x0002f898) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0003ccd1) bg_calc_display_pane_g

0x0536,	// (0x0002e091) cell_qdial_pane_ParamLimits

0x0536,	// (0x0002e091) cell_qdial_pane

0x1d46,	// (0x0002f8a1) cell_qdial_pane_g1_ParamLimits

0x1d46,	// (0x0002f8a1) cell_qdial_pane_g1

0x1d5c,	// (0x0002f8b7) cell_qdial_pane_g2_ParamLimits

0x1d5c,	// (0x0002f8b7) cell_qdial_pane_g2

0xa3b2,	// (0x00037f0d) cell_qdial_pane_g3_ParamLimits

0xa3b2,	// (0x00037f0d) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0003ccd8) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0003ccd8) cell_qdial_pane_g

0x1d83,	// (0x0002f8de) cell_qdial_pane_t1_ParamLimits

0x1d83,	// (0x0002f8de) cell_qdial_pane_t1

0x1d9b,	// (0x0002f8f6) cell_qdial_pane_t2_ParamLimits

0x1d9b,	// (0x0002f8f6) cell_qdial_pane_t2

0x1dae,	// (0x0002f909) cell_qdial_pane_t3_ParamLimits

0x1dae,	// (0x0002f909) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0003cce1) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0003cce1) cell_qdial_pane_t

0xa011,	// (0x00037b6c) grid_highlight_pane_cp04

0xa3be,	// (0x00037f19) thumbnail_qdial_pane_ParamLimits

0xa3be,	// (0x00037f19) thumbnail_qdial_pane

0xa41a,	// (0x00037f75) list_help_pane

0xa423,	// (0x00037f7e) scroll_pane_cp02

0x1dc1,	// (0x0002f91c) help_list_pane_t1_ParamLimits

0x1dc1,	// (0x0002f91c) help_list_pane_t1

0x1dde,	// (0x0002f939) bg_notes_pane_g2

0x1de6,	// (0x0002f941) bg_notes_pane_g3

0x1dee,	// (0x0002f949) notes_bg_pane_g1

0x1df6,	// (0x0002f951) notes_bg_pane_g4

0x1dfe,	// (0x0002f959) notes_bg_pane_g5

0x1e06,	// (0x0002f961) notes_bg_pane_g6

0x1e0e,	// (0x0002f969) notes_bg_pane_g7

0x1e16,	// (0x0002f971) notes_bg_pane_g8

0x1e1e,	// (0x0002f979) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0003ccff) notes_bg_pane_g

0x1e26,	// (0x0002f981) list_notes_text_pane_ParamLimits

0x1e26,	// (0x0002f981) list_notes_text_pane

0xa42c,	// (0x00037f87) list_notes_text_pane_g1

0x1e3b,	// (0x0002f996) list_notes_text_pane_t1

0x1e49,	// (0x0002f9a4) listscroll_cale_week_pane

0x1e75,	// (0x0002f9d0) bg_cale_heading_pane

0xa44f,	// (0x00037faa) bg_cale_pane_cp01

0x1e8d,	// (0x0002f9e8) cale_week_corner_pane

0x1eac,	// (0x0002fa07) cale_week_day_heading_pane

0x1ec9,	// (0x0002fa24) cale_week_scroll_pane_g1

0x1edc,	// (0x0002fa37) cale_week_scroll_pane_g2

0x1ef4,	// (0x0002fa4f) cale_week_scroll_pane_g3

0x1f0c,	// (0x0002fa67) cale_week_scroll_pane_g4

0x1f24,	// (0x0002fa7f) cale_week_scroll_pane_g5

0x1f44,	// (0x0002fa9f) cale_week_scroll_pane_g6

0x1f64,	// (0x0002fabf) cale_week_scroll_pane_g7

0x1f84,	// (0x0002fadf) cale_week_scroll_pane_g8

0x1fa8,	// (0x0002fb03) cale_week_scroll_pane_g9

0x1fc0,	// (0x0002fb1b) cale_week_scroll_pane_g10

0x1fd8,	// (0x0002fb33) cale_week_scroll_pane_g11

0x1ff0,	// (0x0002fb4b) cale_week_scroll_pane_g12

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g13

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g14

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0003cd0e) cale_week_scroll_pane_g

0x2020,	// (0x0002fb7b) cale_week_time_pane

0x2044,	// (0x0002fb9f) grid_cale_week_pane

0xa47f,	// (0x00037fda) scroll_pane_cp08

0x206a,	// (0x0002fbc5) cell_cale_week_pane_ParamLimits

0x206a,	// (0x0002fbc5) cell_cale_week_pane

0x20f8,	// (0x0002fc53) cale_week_day_heading_pane_t1

0x213d,	// (0x0002fc98) cale_week_day_heading_pane_t2

0x2187,	// (0x0002fce2) cale_week_day_heading_pane_t3

0x21d1,	// (0x0002fd2c) cale_week_day_heading_pane_t4

0x221b,	// (0x0002fd76) cale_week_day_heading_pane_t5

0x226d,	// (0x0002fdc8) cale_week_day_heading_pane_t6

0x22bf,	// (0x0002fe1a) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0003cd2d) cale_week_day_heading_pane_t

0xa49c,	// (0x00037ff7) bg_cale_side_pane

0x054a,	// (0x0002e0a5) cale_week_time_pane_t1

0x0564,	// (0x0002e0bf) cale_week_time_pane_t2

0x057e,	// (0x0002e0d9) cale_week_time_pane_t3

0x0598,	// (0x0002e0f3) cale_week_time_pane_t4

0x05b2,	// (0x0002e10d) cale_week_time_pane_t5

0x05cc,	// (0x0002e127) cale_week_time_pane_t6

0x05e6,	// (0x0002e141) cale_week_time_pane_t7

0x0600,	// (0x0002e15b) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0003cd3c) cale_week_time_pane_t

0x2304,	// (0x0002fe5f) cell_cale_week_pane_g2

0x2323,	// (0x0002fe7e) cell_cale_week_pane_g3_ParamLimits

0x2323,	// (0x0002fe7e) cell_cale_week_pane_g3

0xa4aa,	// (0x00038005) grid_highlight_pane_cp07

0xa4b2,	// (0x0003800d) listscroll_gms_pane

0xa4bc,	// (0x00038017) grid_gms_pane

0xa4c5,	// (0x00038020) listscroll_gms_pane_g1

0xa4cd,	// (0x00038028) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0003cd4d) listscroll_gms_pane_g

0x233b,	// (0x0002fe96) scroll_pane_cp010

0x2346,	// (0x0002fea1) cell_gms_pane_ParamLimits

0x2346,	// (0x0002fea1) cell_gms_pane

0x2359,	// (0x0002feb4) cell_gms_pane_g1

0xa4d5,	// (0x00038030) cell_gms_pane_g2

0xa4dd,	// (0x00038038) cell_gms_pane_g3

0xa4e6,	// (0x00038041) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0003cd52) cell_gms_pane_g

0xa4ef,	// (0x0003804a) grid_highlight_pane_cp09

0x488d,	// (0x000323e8) phob_pre_status_pane_g1

0x4895,	// (0x000323f0) phob_pre_status_pane_g2

0x489d,	// (0x000323f8) phob_pre_status_pane_g3

0x48a5,	// (0x00032400) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0003d141) phob_pre_status_pane_g

0x48b5,	// (0x00032410) phob_pre_status_pane_t1

0x48c3,	// (0x0003241e) phob_pre_status_pane_t2

0x48d3,	// (0x0003242e) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0003d14c) phob_pre_status_pane_t

0xa011,	// (0x00037b6c) bg_list_pane_cp05

0x0628,	// (0x0002e183) grid_vorec_pane

0x0630,	// (0x0002e18b) vorec_t1

0x063e,	// (0x0002e199) vorec_t2

0x064c,	// (0x0002e1a7) vorec_t3

0x065a,	// (0x0002e1b5) vorec_t4

0x2361,	// (0x0002febc) vorec_t5

0x0668,	// (0x0002e1c3) vorec_t6

0x0006,

0xf200,	// (0x0003cd5b) vorec_t

0x0684,	// (0x0002e1df) wait_bar_pane_cp01

0x236f,	// (0x0002feca) cell_vorec_pane_ParamLimits

0x236f,	// (0x0002feca) cell_vorec_pane

0x2382,	// (0x0002fedd) cell_vorec_pane_g1

0xa011,	// (0x00037b6c) grid_highlight_pane_cp05

0x23a1,	// (0x0002fefc) cams_zoom_pane

0x23b0,	// (0x0002ff0b) image_vga_pane

0x23ca,	// (0x0002ff25) main_camera_pane_g1

0x23dc,	// (0x0002ff37) main_camera_pane_g2

0x23ec,	// (0x0002ff47) main_camera_pane_g3

0x23fc,	// (0x0002ff57) main_camera_pane_g4

0x240c,	// (0x0002ff67) main_camera_pane_g5

0x241c,	// (0x0002ff77) main_camera_pane_g6

0x242e,	// (0x0002ff89) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0003cd6a) main_camera_pane_g

0x243e,	// (0x0002ff99) main_camera_pane_t1

0x2454,	// (0x0002ffaf) main_camera_pane_t2

0x0001,

0xf220,	// (0x0003cd7b) main_camera_pane_t

0x248e,	// (0x0002ffe9) cams_zoom_pane_cp_ParamLimits

0x248e,	// (0x0002ffe9) cams_zoom_pane_cp

0x24b6,	// (0x00030011) image_cif_pane_ParamLimits

0x24b6,	// (0x00030011) image_cif_pane

0x24ec,	// (0x00030047) image_subqcif_pane

0x24f4,	// (0x0003004f) main_video_pane_g1_ParamLimits

0x24f4,	// (0x0003004f) main_video_pane_g1

0x2518,	// (0x00030073) main_video_pane_g2_ParamLimits

0x2518,	// (0x00030073) main_video_pane_g2

0x254c,	// (0x000300a7) main_video_pane_g3_ParamLimits

0x254c,	// (0x000300a7) main_video_pane_g3

0x257a,	// (0x000300d5) main_video_pane_g4_ParamLimits

0x257a,	// (0x000300d5) main_video_pane_g4

0x25a8,	// (0x00030103) main_video_pane_g5_ParamLimits

0x25a8,	// (0x00030103) main_video_pane_g5

0xa503,	// (0x0003805e) main_video_pane_g6_ParamLimits

0xa503,	// (0x0003805e) main_video_pane_g6

0x0006,

0xf225,	// (0x0003cd80) main_video_pane_g_ParamLimits

0xf225,	// (0x0003cd80) main_video_pane_g

0x25d1,	// (0x0003012c) main_video_pane_t1_ParamLimits

0x25d1,	// (0x0003012c) main_video_pane_t1

0xa51d,	// (0x00038078) cams_zoom_pane_g1

0xa526,	// (0x00038081) cams_zoom_pane_g2

0xa52f,	// (0x0003808a) cams_zoom_pane_g3

0xa538,	// (0x00038093) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0003cd8f) cams_zoom_pane_g

0x262e,	// (0x00030189) grid_cams_pane

0x2648,	// (0x000301a3) linegrid_cams_pane

0x265c,	// (0x000301b7) cell_cams_pane_ParamLimits

0x265c,	// (0x000301b7) cell_cams_pane

0xa541,	// (0x0003809c) cams_burst_image_pane

0xa549,	// (0x000380a4) cell_cams_pane_g1

0xa011,	// (0x00037b6c) grid_highlight_pane_cp03

0xa386,	// (0x00037ee1) mp_bg_pane_g1

0xa011,	// (0x00037b6c) bg_list_pane_cp03

0xc3c4,	// (0x00039f1f) bg_mp_pane

0xc3cc,	// (0x00039f27) grid_mp_pane

0xc3d4,	// (0x00039f2f) media_player_g1

0xc3dc,	// (0x00039f37) media_player_t1

0xc3ea,	// (0x00039f45) media_player_t2

0xc3f8,	// (0x00039f53) media_player_t3

0xc406,	// (0x00039f61) media_player_t4

0xc414,	// (0x00039f6f) media_player_t5

0xc422,	// (0x00039f7d) media_player_t6

0xc430,	// (0x00039f8b) media_player_t7

0x0006,

0xf5d0,	// (0x0003d12b) media_player_t

0xc43e,	// (0x00039f99) wait_bar_pane_cp02

0xf5b5,	// (0x0003d110) main_usb_pane_t

0x4884,	// (0x000323df) cell_mp_pane

0xa386,	// (0x00037ee1) cell_mp_pane_g1

0xa011,	// (0x00037b6c) grid_highlight_pane_cp06

0xa551,	// (0x000380ac) grid_skin_colour_pane

0xa559,	// (0x000380b4) list_highlight_pane_cp03

0x2793,	// (0x000302ee) skin_g1

0xa561,	// (0x000380bc) skin_t1

0xa570,	// (0x000380cb) skin_t2

0x0001,

0xf269,	// (0x0003cdc4) skin_t

0x279b,	// (0x000302f6) cell_skin_colour_pane_ParamLimits

0x279b,	// (0x000302f6) cell_skin_colour_pane

0xa57e,	// (0x000380d9) cell_skin_colour_pane_g1

0x2814,	// (0x0003036f) call_video_g1_ParamLimits

0x2814,	// (0x0003036f) call_video_g1

0x2830,	// (0x0003038b) call_video_g2_ParamLimits

0x2830,	// (0x0003038b) call_video_g2

0x0001,

0xf26e,	// (0x0003cdc9) call_video_g_ParamLimits

0xf26e,	// (0x0003cdc9) call_video_g

0x2882,	// (0x000303dd) call_video_uplink_pane_cp1_ParamLimits

0x2882,	// (0x000303dd) call_video_uplink_pane_cp1

0xa590,	// (0x000380eb) call_video_uplink_pane_cp2

0x2921,	// (0x0003047c) video_down_crop_pane_ParamLimits

0x2921,	// (0x0003047c) video_down_crop_pane

0x2a18,	// (0x00030573) video_down_pane_ParamLimits

0x2a18,	// (0x00030573) video_down_pane

0xa598,	// (0x000380f3) video_down_subqcif_pane_ParamLimits

0xa598,	// (0x000380f3) video_down_subqcif_pane

0xa5b0,	// (0x0003810b) video_down_subqcif_pane_cp_ParamLimits

0xa5b0,	// (0x0003810b) video_down_subqcif_pane_cp

0xa5d6,	// (0x00038131) im_reading_pane_ParamLimits

0xa5d6,	// (0x00038131) im_reading_pane

0x2b26,	// (0x00030681) im_writing_pane_ParamLimits

0x2b26,	// (0x00030681) im_writing_pane

0x2b3c,	// (0x00030697) im_reading_pane_t1

0xa5f0,	// (0x0003814b) list_im_pane

0xa601,	// (0x0003815c) scroll_pane_cp07

0x2b75,	// (0x000306d0) im_writing_pane_t1_ParamLimits

0x2b75,	// (0x000306d0) im_writing_pane_t1

0xa61a,	// (0x00038175) im_writing_pane_t2_ParamLimits

0xa61a,	// (0x00038175) im_writing_pane_t2

0x0001,

0xf278,	// (0x0003cdd3) im_writing_pane_t_ParamLimits

0xf278,	// (0x0003cdd3) im_writing_pane_t

0xa011,	// (0x00037b6c) input_focus_pane_cp04

0xa011,	// (0x00037b6c) input_focus_pane_cp05

0x2b8a,	// (0x000306e5) list_im_single_pane_ParamLimits

0x2b8a,	// (0x000306e5) list_im_single_pane

0x2b9e,	// (0x000306f9) list_single_im_pane_t1

0x4844,	// (0x0003239f) blid_accuracy_pane

0x484c,	// (0x000323a7) blid_compass_pane

0x4856,	// (0x000323b1) main_location_t1

0x4866,	// (0x000323c1) main_location_t2

0x4876,	// (0x000323d1) main_location_t3

0x0002,

0xf5df,	// (0x0003d13a) main_location_t

0xa011,	// (0x00037b6c) aid_levels_location

0xa386,	// (0x00037ee1) blid_accuracy_pane_g1

0xa386,	// (0x00037ee1) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0003ce35) blid_accuracy_pane_g

0xa662,	// (0x000381bd) wml_content_pane

0xa6a0,	// (0x000381fb) wml_button_pane_ParamLimits

0xa6a0,	// (0x000381fb) wml_button_pane

0x2bad,	// (0x00030708) wml_list_single_large_pane_ParamLimits

0x2bad,	// (0x00030708) wml_list_single_large_pane

0x2bc2,	// (0x0003071d) wml_list_single_medium_pane_ParamLimits

0x2bc2,	// (0x0003071d) wml_list_single_medium_pane

0x2bd8,	// (0x00030733) wml_list_single_small_pane_ParamLimits

0x2bd8,	// (0x00030733) wml_list_single_small_pane

0xa78c,	// (0x000382e7) wml_selection_box_pane_ParamLimits

0xa78c,	// (0x000382e7) wml_selection_box_pane

0xa79f,	// (0x000382fa) wml_list_single_pane_t1

0xa7ae,	// (0x00038309) wml_list_single_medium_pane_t1

0xa7bd,	// (0x00038318) wml_list_single_large_pane_t1

0xa7cc,	// (0x00038327) input_focus_pane_cp02_ParamLimits

0xa7cc,	// (0x00038327) input_focus_pane_cp02

0xa7df,	// (0x0003833a) wml_selection_box_pane_g1

0xa7e8,	// (0x00038343) wml_selection_box_pane_t1_ParamLimits

0xa7e8,	// (0x00038343) wml_selection_box_pane_t1

0xa26c,	// (0x00037dc7) bg_wml_button_pane_ParamLimits

0xa26c,	// (0x00037dc7) bg_wml_button_pane

0xa800,	// (0x0003835b) wml_button_pane_g1

0xa808,	// (0x00038363) wml_button_pane_t1

0xa800,	// (0x0003835b) wml_button_bg_pane_g1

0xa818,	// (0x00038373) wml_button_bg_pane_g2

0xa820,	// (0x0003837b) wml_button_bg_pane_g3

0xa828,	// (0x00038383) wml_button_bg_pane_g4

0xa830,	// (0x0003838b) wml_button_bg_pane_g5

0xa838,	// (0x00038393) wml_button_bg_pane_g6

0xa840,	// (0x0003839b) wml_button_bg_pane_g7

0xa848,	// (0x000383a3) wml_button_bg_pane_g8

0xa850,	// (0x000383ab) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0003cdd8) wml_button_bg_pane_g

0x2bf0,	// (0x0003074b) bg_list_pane_cp02

0xa858,	// (0x000383b3) mce_header_pane_ParamLimits

0xa858,	// (0x000383b3) mce_header_pane

0xa86e,	// (0x000383c9) mce_icon_pane

0xa86e,	// (0x000383c9) mce_image_pane

0xa877,	// (0x000383d2) mce_text_pane_ParamLimits

0xa877,	// (0x000383d2) mce_text_pane

0x2bf8,	// (0x00030753) scroll_pane_cp03

0xa698,	// (0x000381f3) scroll_pane_cp04

0xa88a,	// (0x000383e5) scroll_pane_cp05_ParamLimits

0xa88a,	// (0x000383e5) scroll_pane_cp05

0x2c02,	// (0x0003075d) mce_header_field_pane_ParamLimits

0x2c02,	// (0x0003075d) mce_header_field_pane

0x2c19,	// (0x00030774) mce_header_field_pane_2_ParamLimits

0x2c19,	// (0x00030774) mce_header_field_pane_2

0x2c2f,	// (0x0003078a) mce_header_field_pane_3

0x2c37,	// (0x00030792) list_single_mce_message_pane_ParamLimits

0x2c37,	// (0x00030792) list_single_mce_message_pane

0x2c4c,	// (0x000307a7) list_single_mce_smart_pane_ParamLimits

0x2c4c,	// (0x000307a7) list_single_mce_smart_pane

0xa896,	// (0x000383f1) input_focus_pane_cp03

0xa89f,	// (0x000383fa) list_header_data_pane

0x2c6c,	// (0x000307c7) mce_header_field_pane_t1

0x2c7c,	// (0x000307d7) list_single_mce_header_pane_ParamLimits

0x2c7c,	// (0x000307d7) list_single_mce_header_pane

0xa8a7,	// (0x00038402) list_single_mce_header_pane_t1

0xa8b6,	// (0x00038411) list_single_mce_message_pane_g1

0xa8be,	// (0x00038419) list_single_mce_message_pane_t1

0x2cb6,	// (0x00030811) bg_cale_heading_pane_cp01_ParamLimits

0x2cb6,	// (0x00030811) bg_cale_heading_pane_cp01

0xa8cc,	// (0x00038427) bg_cale_pane_cp02_ParamLimits

0xa8cc,	// (0x00038427) bg_cale_pane_cp02

0x2ce5,	// (0x00030840) cale_month_corner_pane

0x2d04,	// (0x0003085f) cale_month_day_heading_pane_ParamLimits

0x2d04,	// (0x0003085f) cale_month_day_heading_pane

0x2d4b,	// (0x000308a6) cale_month_pane_g1_ParamLimits

0x2d4b,	// (0x000308a6) cale_month_pane_g1

0x2d6f,	// (0x000308ca) cale_month_pane_g2_ParamLimits

0x2d6f,	// (0x000308ca) cale_month_pane_g2

0x2d9f,	// (0x000308fa) cale_month_pane_g3_ParamLimits

0x2d9f,	// (0x000308fa) cale_month_pane_g3

0x2ddb,	// (0x00030936) cale_month_pane_g4_ParamLimits

0x2ddb,	// (0x00030936) cale_month_pane_g4

0x2e17,	// (0x00030972) cale_month_pane_g5_ParamLimits

0x2e17,	// (0x00030972) cale_month_pane_g5

0x2e5f,	// (0x000309ba) cale_month_pane_g6_ParamLimits

0x2e5f,	// (0x000309ba) cale_month_pane_g6

0x2eab,	// (0x00030a06) cale_month_pane_g7_ParamLimits

0x2eab,	// (0x00030a06) cale_month_pane_g7

0x2eff,	// (0x00030a5a) cale_month_pane_g8_ParamLimits

0x2eff,	// (0x00030a5a) cale_month_pane_g8

0x2f53,	// (0x00030aae) cale_month_pane_g9_ParamLimits

0x2f53,	// (0x00030aae) cale_month_pane_g9

0x2fa5,	// (0x00030b00) cale_month_pane_g10_ParamLimits

0x2fa5,	// (0x00030b00) cale_month_pane_g10

0x2ff7,	// (0x00030b52) cale_month_pane_g11_ParamLimits

0x2ff7,	// (0x00030b52) cale_month_pane_g11

0x3049,	// (0x00030ba4) cale_month_pane_g12_ParamLimits

0x3049,	// (0x00030ba4) cale_month_pane_g12

0x309b,	// (0x00030bf6) cale_month_pane_g13_ParamLimits

0x309b,	// (0x00030bf6) cale_month_pane_g13

0x000c,

0xf290,	// (0x0003cdeb) cale_month_pane_g_ParamLimits

0xf290,	// (0x0003cdeb) cale_month_pane_g

0x30ed,	// (0x00030c48) cale_month_week_pane

0x3111,	// (0x00030c6c) grid_cale_month_pane_ParamLimits

0x3111,	// (0x00030c6c) grid_cale_month_pane

0x314f,	// (0x00030caa) cale_month_day_heading_pane_t1

0x31d5,	// (0x00030d30) cale_month_day_heading_pane_t2

0x3266,	// (0x00030dc1) cale_month_day_heading_pane_t3

0x32f7,	// (0x00030e52) cale_month_day_heading_pane_t4

0x338c,	// (0x00030ee7) cale_month_day_heading_pane_t5

0x342d,	// (0x00030f88) cale_month_day_heading_pane_t6

0x34ce,	// (0x00031029) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0003ce06) cale_month_day_heading_pane_t

0xa49c,	// (0x00037ff7) bg_cale_side_pane_cp01

0x3577,	// (0x000310d2) cale_month_week_pane_t1

0x3590,	// (0x000310eb) cale_month_week_pane_t2

0x35a9,	// (0x00031104) cale_month_week_pane_t3

0x35c2,	// (0x0003111d) cale_month_week_pane_t4

0x35db,	// (0x00031136) cale_month_week_pane_t5

0x35f4,	// (0x0003114f) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0003ce15) cale_month_week_pane_t

0x360d,	// (0x00031168) cell_cale_month_pane_ParamLimits

0x360d,	// (0x00031168) cell_cale_month_pane

0x3761,	// (0x000312bc) cell_cale_month_pane_g1

0x068c,	// (0x0002e1e7) cell_cale_month_pane_t1_ParamLimits

0x068c,	// (0x0002e1e7) cell_cale_month_pane_t1

0xa4aa,	// (0x00038005) grid_highlight_pane_cp08

0xa386,	// (0x00037ee1) main_smil_g1

0x376d,	// (0x000312c8) smil_status_pane

0xa90b,	// (0x00038466) smil_text_pane

0xc2e4,	// (0x00039e3f) bg_popup_call3_rect_pane_g8

0xc2ec,	// (0x00039e47) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0003d0ce) bg_popup_call3_rect_pane_g

0xc533,	// (0x0003a08e) smil_status_volume_pane_g1

0xa915,	// (0x00038470) smil_status_pane_t1

0x4bd7,	// (0x00032732) volume_smil_pane

0xa92c,	// (0x00038487) list_smil_text_pane

0x3780,	// (0x000312db) scroll_pane_cp011

0x378b,	// (0x000312e6) smil_text_list_pane_t1_ParamLimits

0x378b,	// (0x000312e6) smil_text_list_pane_t1

0x37c7,	// (0x00031322) aid_volume_smil_ParamLimits

0x37c7,	// (0x00031322) aid_volume_smil

0xa386,	// (0x00037ee1) smil_volume_pane_g1

0xa386,	// (0x00037ee1) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0003ce35) smil_volume_pane_g

0x1e49,	// (0x0002f9a4) listscroll_cale_day_pane

0xa936,	// (0x00038491) bg_cale_pane

0xa94e,	// (0x000384a9) list_cale_pane

0xa971,	// (0x000384cc) scroll_pane_cp09

0xa982,	// (0x000384dd) cale_bg_pane_g1

0xa98a,	// (0x000384e5) cale_bg_pane_g2

0xa992,	// (0x000384ed) cale_bg_pane_g3

0xa99a,	// (0x000384f5) cale_bg_pane_g4

0xa9a2,	// (0x000384fd) cale_bg_pane_g5

0xa9aa,	// (0x00038505) cale_bg_pane_g6

0xa9b2,	// (0x0003850d) cale_bg_pane_g7

0xa9ba,	// (0x00038515) cale_bg_pane_g8

0xa9c2,	// (0x0003851d) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0003ce3a) cale_bg_pane_g

0x37f1,	// (0x0003134c) list_cale_time_pane_ParamLimits

0x37f1,	// (0x0003134c) list_cale_time_pane

0xa9ca,	// (0x00038525) list_cale_time_pane_g1_ParamLimits

0xa9ca,	// (0x00038525) list_cale_time_pane_g1

0xa9d6,	// (0x00038531) list_cale_time_pane_g2_ParamLimits

0xa9d6,	// (0x00038531) list_cale_time_pane_g2

0x3806,	// (0x00031361) list_cale_time_pane_g3_ParamLimits

0x3806,	// (0x00031361) list_cale_time_pane_g3

0x3814,	// (0x0003136f) list_cale_time_pane_g4_ParamLimits

0x3814,	// (0x0003136f) list_cale_time_pane_g4

0x3822,	// (0x0003137d) list_cale_time_pane_g5_ParamLimits

0x3822,	// (0x0003137d) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0003ce4d) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0003ce4d) list_cale_time_pane_g

0xa9f0,	// (0x0003854b) list_cale_time_pane_t1_ParamLimits

0xa9f0,	// (0x0003854b) list_cale_time_pane_t1

0xaa18,	// (0x00038573) list_cale_time_pane_t2_ParamLimits

0xaa18,	// (0x00038573) list_cale_time_pane_t2

0x3bf8,	// (0x00031753) aid_blid_cardinal_pane

0x3c36,	// (0x00031791) compass_pane_t4

0xaa40,	// (0x0003859b) list_cale_time_pane_t4_ParamLimits

0xaa40,	// (0x0003859b) list_cale_time_pane_t4

0x3c44,	// (0x0003179f) compass_pane_t5

0x3c52,	// (0x000317ad) compass_pane_t6

0x3c60,	// (0x000317bb) compass_pane_t7

0xaeef,	// (0x00038a4a) navi_pane_cc_t1

0xb0d4,	// (0x00038c2f) aid_phob_thumbnail_center_pane

0x425c,	// (0x00031db7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0003ce5a) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0003ce5a) list_cale_time_pane_t

0x9c68,	// (0x000377c3) bg_popup_window_pane_cp02_ParamLimits

0x9c68,	// (0x000377c3) bg_popup_window_pane_cp02

0xaa68,	// (0x000385c3) heading_pane_cp01_ParamLimits

0xaa68,	// (0x000385c3) heading_pane_cp01

0xaa74,	// (0x000385cf) loc_req_pane_ParamLimits

0xaa74,	// (0x000385cf) loc_req_pane

0xaa84,	// (0x000385df) loc_type_pane_ParamLimits

0xaa84,	// (0x000385df) loc_type_pane

0xaa96,	// (0x000385f1) loc_type_pane_t1_ParamLimits

0xaa96,	// (0x000385f1) loc_type_pane_t1

0xaaa8,	// (0x00038603) loc_type_pane_t2_ParamLimits

0xaaa8,	// (0x00038603) loc_type_pane_t2

0xaaba,	// (0x00038615) loc_type_pane_t3_ParamLimits

0xaaba,	// (0x00038615) loc_type_pane_t3

0x0002,

0xf306,	// (0x0003ce61) loc_type_pane_t_ParamLimits

0xf306,	// (0x0003ce61) loc_type_pane_t

0xaacc,	// (0x00038627) list_loc_req_pane

0xaad6,	// (0x00038631) scroll_pane_cp012

0x3830,	// (0x0003138b) list_single_loc_request_popup_menu_pane_ParamLimits

0x3830,	// (0x0003138b) list_single_loc_request_popup_menu_pane

0xaae1,	// (0x0003863c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaae1,	// (0x0003863c) list_single_loc_request_popup_menu_pane_g1

0xaaed,	// (0x00038648) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaaed,	// (0x00038648) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0003ce68) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0003ce68) list_single_loc_request_popup_menu_pane_g

0xaaf9,	// (0x00038654) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaf9,	// (0x00038654) list_single_loc_request_popup_menu_pane_t1

0xa26c,	// (0x00037dc7) bg_popup_window_pane_cp03_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_window_pane_cp03

0xab0f,	// (0x0003866a) heading_loc_req_pane_ParamLimits

0xab0f,	// (0x0003866a) heading_loc_req_pane

0x383d,	// (0x00031398) popup_dyc_status_message_window_g1_ParamLimits

0x383d,	// (0x00031398) popup_dyc_status_message_window_g1

0x3851,	// (0x000313ac) popup_dyc_status_message_window_t1_ParamLimits

0x3851,	// (0x000313ac) popup_dyc_status_message_window_t1

0x3866,	// (0x000313c1) popup_dyc_status_message_window_t2_ParamLimits

0x3866,	// (0x000313c1) popup_dyc_status_message_window_t2

0x387b,	// (0x000313d6) popup_dyc_status_message_window_t3_ParamLimits

0x387b,	// (0x000313d6) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0003ce6d) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0003ce6d) popup_dyc_status_message_window_t

0xa011,	// (0x00037b6c) bg_heading_pane_cp01

0xab1b,	// (0x00038676) heading_loc_req_pane_g1

0xab23,	// (0x0003867e) heading_loc_req_pane_g2

0xab2b,	// (0x00038686) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0003ce74) heading_loc_req_pane_g

0xab33,	// (0x0003868e) heading_loc_req_pane_t1

0xab42,	// (0x0003869d) bg_popup_sub_pane_cp01_ParamLimits

0xab42,	// (0x0003869d) bg_popup_sub_pane_cp01

0xab50,	// (0x000386ab) popup_cale_events_window_g1_ParamLimits

0xab50,	// (0x000386ab) popup_cale_events_window_g1

0xab70,	// (0x000386cb) popup_cale_events_window_g2_ParamLimits

0xab70,	// (0x000386cb) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0003cea8) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0003cea8) popup_cale_events_window_g

0xab90,	// (0x000386eb) popup_cale_events_window_t1_ParamLimits

0xab90,	// (0x000386eb) popup_cale_events_window_t1

0xaba2,	// (0x000386fd) popup_cale_events_window_t2_ParamLimits

0xaba2,	// (0x000386fd) popup_cale_events_window_t2

0xabe0,	// (0x0003873b) popup_cale_events_window_t3_ParamLimits

0xabe0,	// (0x0003873b) popup_cale_events_window_t3

0xac1a,	// (0x00038775) popup_cale_events_window_t4_ParamLimits

0xac1a,	// (0x00038775) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0003cead) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0003cead) popup_cale_events_window_t

0x3980,	// (0x000314db) call_type_pane

0x3990,	// (0x000314eb) popup_call_status_window_g1

0x39a4,	// (0x000314ff) popup_call_status_window_g2

0x39b8,	// (0x00031513) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0003ceb6) popup_call_status_window_g

0xac50,	// (0x000387ab) call_type_pane_g1

0xac59,	// (0x000387b4) call_type_pane_g2

0x0001,

0xf362,	// (0x0003cebd) call_type_pane_g

0xa011,	// (0x00037b6c) bg_popup_sub_pane_cp02

0xac62,	// (0x000387bd) listscroll_popup_wml_pane

0xac6a,	// (0x000387c5) list_wml_pane

0xac74,	// (0x000387cf) scroll_pane_cp013

0xac7f,	// (0x000387da) list_single_graphic_popup_wml_pane_ParamLimits

0xac7f,	// (0x000387da) list_single_graphic_popup_wml_pane

0xa386,	// (0x00037ee1) list_single_graphic_popup_wml_pane_g1

0xac93,	// (0x000387ee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0003cec2) list_single_graphic_popup_wml_pane_g

0xac9b,	// (0x000387f6) list_single_graphic_popup_wml_pane_t1

0xacb1,	// (0x0003880c) aid_call_pane

0xa264,	// (0x00037dbf) popup_clock_analogue_window_g1

0xa264,	// (0x00037dbf) popup_clock_analogue_window_g2

0x39c7,	// (0x00031522) popup_clock_analogue_window_g3

0x39c7,	// (0x00031522) popup_clock_analogue_window_g4

0xa386,	// (0x00037ee1) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0003cec7) popup_clock_analogue_window_g

0x39cf,	// (0x0003152a) popup_clock_analogue_window_t1

0x39dd,	// (0x00031538) clock_digital_number_pane_ParamLimits

0x39dd,	// (0x00031538) clock_digital_number_pane

0x39e9,	// (0x00031544) clock_digital_number_pane_cp02_ParamLimits

0x39e9,	// (0x00031544) clock_digital_number_pane_cp02

0x39f5,	// (0x00031550) clock_digital_number_pane_cp03_ParamLimits

0x39f5,	// (0x00031550) clock_digital_number_pane_cp03

0x3a01,	// (0x0003155c) clock_digital_number_pane_cp04_ParamLimits

0x3a01,	// (0x0003155c) clock_digital_number_pane_cp04

0x3a11,	// (0x0003156c) clock_digital_separator_pane_ParamLimits

0x3a11,	// (0x0003156c) clock_digital_separator_pane

0x3a1d,	// (0x00031578) popup_clock_digital_window_t1

0xa386,	// (0x00037ee1) clock_digital_number_pane_g1

0xa386,	// (0x00037ee1) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0003ce35) clock_digital_number_pane_g

0xa386,	// (0x00037ee1) clock_digital_separator_pane_g1

0xa386,	// (0x00037ee1) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0003ce35) clock_digital_separator_pane_g

0xa011,	// (0x00037b6c) bg_popup_window_pane_cp04

0xacb9,	// (0x00038814) heading_pane_cp03

0xacc1,	// (0x0003881c) listscroll_popup_gms_pane

0xacc9,	// (0x00038824) grid_large_graphic_popup_pane

0xacd3,	// (0x0003882e) listscroll_popup_gms_pane_g1

0xacdb,	// (0x00038836) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0003ced2) listscroll_popup_gms_pane_g

0xa698,	// (0x000381f3) scroll_pane_cp014

0x3a3a,	// (0x00031595) cell_large_graphic_popup_pane_ParamLimits

0x3a3a,	// (0x00031595) cell_large_graphic_popup_pane

0x3a52,	// (0x000315ad) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a52,	// (0x000315ad) cell_large_graphic_popup_pane_g1

0xace3,	// (0x0003883e) cell_large_graphic_popup_pane_g2_ParamLimits

0xace3,	// (0x0003883e) cell_large_graphic_popup_pane_g2

0xacef,	// (0x0003884a) cell_large_graphic_popup_pane_g3_ParamLimits

0xacef,	// (0x0003884a) cell_large_graphic_popup_pane_g3

0xacfc,	// (0x00038857) cell_large_graphic_popup_pane_g4_ParamLimits

0xacfc,	// (0x00038857) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0003ced7) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0003ced7) cell_large_graphic_popup_pane_g

0xad0c,	// (0x00038867) grid_highlight_pane_cp010

0xa386,	// (0x00037ee1) bg_popup_call_pane_g1

0xad16,	// (0x00038871) list_single_graphic_popup_conf_pane_ParamLimits

0xad16,	// (0x00038871) list_single_graphic_popup_conf_pane

0xad29,	// (0x00038884) list_highlight_pane_cp01

0xad32,	// (0x0003888d) list_single_graphic_popup_conf_pane_g1

0xad3a,	// (0x00038895) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0003cee0) list_single_graphic_popup_conf_pane_g

0xad42,	// (0x0003889d) list_single_graphic_popup_conf_pane_t1

0xad50,	// (0x000388ab) linegrid_cams_pane_g1

0x3a5e,	// (0x000315b9) linegrid_cams_pane_g2

0xa4dd,	// (0x00038038) linegrid_cams_pane_g3

0xad59,	// (0x000388b4) linegrid_cams_pane_g4

0x3a67,	// (0x000315c2) linegrid_cams_pane_g5

0x3a70,	// (0x000315cb) linegrid_cams_pane_g6

0xa4e6,	// (0x00038041) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0003cee5) linegrid_cams_pane_g

0xad62,	// (0x000388bd) popup_clock_analogue_window

0xad62,	// (0x000388bd) popup_clock_digital_window

0xa011,	// (0x00037b6c) popup_phob_thumbnail_window

0xa386,	// (0x00037ee1) call_video_uplink_pane_g1

0xad6b,	// (0x000388c6) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0003cef4) call_video_uplink_pane_g

0xad73,	// (0x000388ce) video_uplink_pane

0xad7b,	// (0x000388d6) mce_image_pane_g1

0x3a7b,	// (0x000315d6) mce_image_pane_g2

0x3a85,	// (0x000315e0) mce_image_pane_g3

0x3a8d,	// (0x000315e8) mce_image_pane_g4

0x3a95,	// (0x000315f0) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0003cef9) mce_image_pane_g

0xad85,	// (0x000388e0) control_top_pane_stacon_cp01_ParamLimits

0xad85,	// (0x000388e0) control_top_pane_stacon_cp01

0xad99,	// (0x000388f4) uni_indicator_pane_stacon_cp01_ParamLimits

0xad99,	// (0x000388f4) uni_indicator_pane_stacon_cp01

0xadaa,	// (0x00038905) bg_popup_sub_pane_cp03

0xadb4,	// (0x0003890f) chi_dic_find_pane

0x3a9d,	// (0x000315f8) listscroll_chi_dic_pane

0xadbc,	// (0x00038917) main_pane_chidic_g1

0xadc4,	// (0x0003891f) chi_dic_find_pane_t1

0xadd2,	// (0x0003892d) find_chidic_pane

0xaddb,	// (0x00038936) chi_dic_list_pane_ParamLimits

0xaddb,	// (0x00038936) chi_dic_list_pane

0xadec,	// (0x00038947) scroll_pane_cp020

0xadf4,	// (0x0003894f) find_chidic_pane_t1

0xa011,	// (0x00037b6c) input_focus_pane_cp06

0x3ab1,	// (0x0003160c) list_chi_dic_pane_ParamLimits

0x3ab1,	// (0x0003160c) list_chi_dic_pane

0x3ac3,	// (0x0003161e) list_chi_dic_pane_t1_ParamLimits

0x3ac3,	// (0x0003161e) list_chi_dic_pane_t1

0xa011,	// (0x00037b6c) list_highlight_pane_cp020

0xae03,	// (0x0003895e) bg_cale_heading_pane_g1

0x3ad6,	// (0x00031631) bg_cale_heading_pane_g2

0x3ade,	// (0x00031639) bg_cale_heading_pane_g3

0x3ae6,	// (0x00031641) bg_cale_heading_pane_g4

0x3af0,	// (0x0003164b) bg_cale_heading_pane_g5

0x3afa,	// (0x00031655) bg_cale_heading_pane_g6

0x3b02,	// (0x0003165d) bg_cale_heading_pane_g7

0x3b0a,	// (0x00031665) bg_cale_heading_pane_g8

0x3b14,	// (0x0003166f) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0003cf04) bg_cale_heading_pane_g

0xae03,	// (0x0003895e) bg_cale_side_pane_g1

0x3b1e,	// (0x00031679) bg_cale_side_pane_g2

0x3b26,	// (0x00031681) bg_cale_side_pane_g3

0x3b2e,	// (0x00031689) bg_cale_side_pane_g4

0x3b36,	// (0x00031691) bg_cale_side_pane_g5

0x3b3e,	// (0x00031699) bg_cale_side_pane_g6

0x3b46,	// (0x000316a1) bg_cale_side_pane_g7

0x3b4e,	// (0x000316a9) bg_cale_side_pane_g8

0x3b56,	// (0x000316b1) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0003cf17) bg_cale_side_pane_g

0x3b5e,	// (0x000316b9) popup_call_status_window_ParamLimits

0x3b5e,	// (0x000316b9) popup_call_status_window

0xae0b,	// (0x00038966) stacon_top_pane

0xae13,	// (0x0003896e) status_pane_ParamLimits

0xae13,	// (0x0003896e) status_pane

0xae28,	// (0x00038983) status_small_pane

0xae30,	// (0x0003898b) control_pane

0xa011,	// (0x00037b6c) stacon_bottom_pane

0xae38,	// (0x00038993) list_single_mce_smart_pane_t1_ParamLimits

0xae38,	// (0x00038993) list_single_mce_smart_pane_t1

0xae4b,	// (0x000389a6) list_single_mce_smart_pane_t2_ParamLimits

0xae4b,	// (0x000389a6) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0003cf2a) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0003cf2a) list_single_mce_smart_pane_t

0x3ba7,	// (0x00031702) compass_pane

0x3bb0,	// (0x0003170b) main_location2_pane_t1

0x3bc2,	// (0x0003171d) main_location2_pane_t2

0x3bd4,	// (0x0003172f) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0003cf2f) main_location2_pane_t

0xae6a,	// (0x000389c5) compass_pane_g1_ParamLimits

0xae6a,	// (0x000389c5) compass_pane_g1

0x3c18,	// (0x00031773) compass_pane_t1

0x3c27,	// (0x00031782) compass_pane_t2

0x0005,

0xf3dd,	// (0x0003cf38) compass_pane_t

0x3c6e,	// (0x000317c9) text_secondary_cp61

0xaee6,	// (0x00038a41) navi_pane_cams_g5

0xaf62,	// (0x00038abd) navi_pane_im_t1

0xaf70,	// (0x00038acb) navi_pane_mp_g1_ParamLimits

0xaf70,	// (0x00038acb) navi_pane_mp_g1

0xaf84,	// (0x00038adf) navi_pane_mp_g2_ParamLimits

0xaf84,	// (0x00038adf) navi_pane_mp_g2

0xaf90,	// (0x00038aeb) navi_pane_mp_g3_ParamLimits

0xaf90,	// (0x00038aeb) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0003cf4c) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0003cf4c) navi_pane_mp_g

0xaf9c,	// (0x00038af7) navi_pane_mp_t1

0xafaa,	// (0x00038b05) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0003cf53) navi_pane_mp_t

0xb015,	// (0x00038b70) navi_pane_vt_g1

0xaf9c,	// (0x00038af7) navi_pane_vt_t1

0xb01d,	// (0x00038b78) navi_slider_pane

0xb02d,	// (0x00038b88) zooming_pane

0xb035,	// (0x00038b90) navi_slider_pane_g1

0x3cbf,	// (0x0003181a) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0003cf5a) navi_slider_pane_g

0xb059,	// (0x00038bb4) aid_levels_zoom

0xb061,	// (0x00038bbc) zooming_pane_g1

0xb069,	// (0x00038bc4) zooming_pane_g2

0xb069,	// (0x00038bc4) zooming_pane_g3

0x0002,

0xf40e,	// (0x0003cf69) zooming_pane_g

0xb071,	// (0x00038bcc) level_10_zoom

0xb07a,	// (0x00038bd5) level_11_zoom

0xb083,	// (0x00038bde) level_1_zoom

0xb08c,	// (0x00038be7) level_2_zoom

0xb095,	// (0x00038bf0) level_3_zoom

0xb09e,	// (0x00038bf9) level_4_zoom

0xb0a7,	// (0x00038c02) level_5_zoom

0xb0b0,	// (0x00038c0b) level_6_zoom

0xb0b9,	// (0x00038c14) level_7_zoom

0xb0c2,	// (0x00038c1d) level_8_zoom

0xb0cb,	// (0x00038c26) level_9_zoom

0xb0dc,	// (0x00038c37) popup_phob_thumbnail_window_g1

0xb0e4,	// (0x00038c3f) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0003cf70) popup_phob_thumbnail_window_g

0xc446,	// (0x00039fa1) level_1_location

0xc44e,	// (0x00039fa9) level_2_location

0xc456,	// (0x00039fb1) level_3_location

0xc45e,	// (0x00039fb9) level_4_location

0xb02d,	// (0x00038b88) level_5_location

0x3cd1,	// (0x0003182c) mce_icon_pane_g1

0x3cdb,	// (0x00031836) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0003cf75) mce_icon_pane_g

0x3ce3,	// (0x0003183e) main_mup_pane_g1_ParamLimits

0x3ce3,	// (0x0003183e) main_mup_pane_g1

0x3cf9,	// (0x00031854) main_mup_pane_g2_ParamLimits

0x3cf9,	// (0x00031854) main_mup_pane_g2

0x3d11,	// (0x0003186c) main_mup_pane_g3_ParamLimits

0x3d11,	// (0x0003186c) main_mup_pane_g3

0x3d29,	// (0x00031884) main_mup_pane_g4_ParamLimits

0x3d29,	// (0x00031884) main_mup_pane_g4

0x3d41,	// (0x0003189c) main_mup_pane_g5_ParamLimits

0x3d41,	// (0x0003189c) main_mup_pane_g5

0x3d5d,	// (0x000318b8) main_mup_pane_g6_ParamLimits

0x3d5d,	// (0x000318b8) main_mup_pane_g6

0x3d75,	// (0x000318d0) main_mup_pane_g7_ParamLimits

0x3d75,	// (0x000318d0) main_mup_pane_g7

0x3d8d,	// (0x000318e8) main_mup_pane_g8_ParamLimits

0x3d8d,	// (0x000318e8) main_mup_pane_g8

0x3da7,	// (0x00031902) main_mup_pane_g9_ParamLimits

0x3da7,	// (0x00031902) main_mup_pane_g9

0x3dc1,	// (0x0003191c) main_mup_pane_g10_ParamLimits

0x3dc1,	// (0x0003191c) main_mup_pane_g10

0x3ddb,	// (0x00031936) main_mup_pane_g11_ParamLimits

0x3ddb,	// (0x00031936) main_mup_pane_g11

0x3def,	// (0x0003194a) main_mup_pane_g12_ParamLimits

0x3def,	// (0x0003194a) main_mup_pane_g12

0x3e05,	// (0x00031960) main_mup_pane_g13_ParamLimits

0x3e05,	// (0x00031960) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0003cf7a) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0003cf7a) main_mup_pane_g

0x3e19,	// (0x00031974) main_mup_pane_t1_ParamLimits

0x3e19,	// (0x00031974) main_mup_pane_t1

0x3e33,	// (0x0003198e) main_mup_pane_t2_ParamLimits

0x3e33,	// (0x0003198e) main_mup_pane_t2

0x3e4b,	// (0x000319a6) main_mup_pane_t3_ParamLimits

0x3e4b,	// (0x000319a6) main_mup_pane_t3

0x3e63,	// (0x000319be) main_mup_pane_t4_ParamLimits

0x3e63,	// (0x000319be) main_mup_pane_t4

0x3e81,	// (0x000319dc) main_mup_pane_t5_ParamLimits

0x3e81,	// (0x000319dc) main_mup_pane_t5

0x3e96,	// (0x000319f1) main_mup_pane_t6_ParamLimits

0x3e96,	// (0x000319f1) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0003cf95) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0003cf95) main_mup_pane_t

0x3ea8,	// (0x00031a03) mup_progress_pane_ParamLimits

0x3ea8,	// (0x00031a03) mup_progress_pane

0x3eb4,	// (0x00031a0f) mup_visualizer_pane_ParamLimits

0x3eb4,	// (0x00031a0f) mup_visualizer_pane

0x3ee4,	// (0x00031a3f) mup_volume_pane_ParamLimits

0x3ee4,	// (0x00031a3f) mup_volume_pane

0xb0ec,	// (0x00038c47) mup_visualizer_pane_g1_ParamLimits

0xb0ec,	// (0x00038c47) mup_visualizer_pane_g1

0xb0ec,	// (0x00038c47) mup_visualizer_pane_g2_ParamLimits

0xb0ec,	// (0x00038c47) mup_visualizer_pane_g2

0xae6a,	// (0x000389c5) mup_visualizer_pane_g3_ParamLimits

0xae6a,	// (0x000389c5) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0003cfa2) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0003cfa2) mup_visualizer_pane_g

0xa386,	// (0x00037ee1) mup_volume_pane_g1

0xb102,	// (0x00038c5d) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0003cfa9) mup_volume_pane_g

0xa386,	// (0x00037ee1) mup_progress_pane_g1

0xb10b,	// (0x00038c66) mup_progress_pane_g2

0xb114,	// (0x00038c6f) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0003cfae) mup_progress_pane_g

0xa011,	// (0x00037b6c) bg_popup_window_pane_cp05

0xb11d,	// (0x00038c78) heading_pane_cp02_ParamLimits

0xb11d,	// (0x00038c78) heading_pane_cp02

0xb137,	// (0x00038c92) list_popup_blid_pane

0xb13f,	// (0x00038c9a) list_blid_sat_info_pane_ParamLimits

0xb13f,	// (0x00038c9a) list_blid_sat_info_pane

0xb152,	// (0x00038cad) list_blid_sat_info_pane_g1

0xb15a,	// (0x00038cb5) list_blid_sat_info_pane_t1

0x3ffa,	// (0x00031b55) mup_equalizer_pane_ParamLimits

0x3ffa,	// (0x00031b55) mup_equalizer_pane

0x4013,	// (0x00031b6e) mup_equalizer_pane_cp1_ParamLimits

0x4013,	// (0x00031b6e) mup_equalizer_pane_cp1

0x4030,	// (0x00031b8b) mup_equalizer_pane_cp2_ParamLimits

0x4030,	// (0x00031b8b) mup_equalizer_pane_cp2

0x404d,	// (0x00031ba8) mup_equalizer_pane_cp3_ParamLimits

0x404d,	// (0x00031ba8) mup_equalizer_pane_cp3

0x406e,	// (0x00031bc9) mup_equalizer_pane_cp4_ParamLimits

0x406e,	// (0x00031bc9) mup_equalizer_pane_cp4

0x408f,	// (0x00031bea) mup_equalizer_pane_cp5

0x40a3,	// (0x00031bfe) mup_equalizer_pane_cp6

0x40b7,	// (0x00031c12) mup_equalizer_pane_cp7

0xc364,	// (0x00039ebf) bg_popup_call_poc_act_pane_g9

0xc36c,	// (0x00039ec7) bg_popup_call_poc_act_pane_g10

0xc374,	// (0x00039ecf) bg_popup_call_poc_act_pane_g11

0x000a,

0xa26c,	// (0x00037dc7) mup_scale_pane

0xa386,	// (0x00037ee1) mup_scale_pane_g1

0xb168,	// (0x00038cc3) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0003cfca) mup_scale_pane_g

0xb18c,	// (0x00038ce7) msg_data_pane

0xb194,	// (0x00038cef) scroll_pane_cp017

0x40dd,	// (0x00031c38) bg_list_pane_cp04_ParamLimits

0x40dd,	// (0x00031c38) bg_list_pane_cp04

0xb1a4,	// (0x00038cff) msg_data_pane_g1

0x40f5,	// (0x00031c50) msg_data_pane_g2

0x40ff,	// (0x00031c5a) msg_data_pane_g3

0x4107,	// (0x00031c62) msg_data_pane_g4

0x410f,	// (0x00031c6a) msg_data_pane_g5

0x4117,	// (0x00031c72) msg_data_pane_g6

0x411f,	// (0x00031c7a) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0003cfd9) msg_data_pane_g

0x4127,	// (0x00031c82) msg_text_pane_ParamLimits

0x4127,	// (0x00031c82) msg_text_pane

0x414b,	// (0x00031ca6) qrid_highlight_pane_cp011_ParamLimits

0x414b,	// (0x00031ca6) qrid_highlight_pane_cp011

0xa011,	// (0x00037b6c) msg_body_pane

0xa011,	// (0x00037b6c) msg_header_pane

0xb1ac,	// (0x00038d07) input_focus_pane_cp07

0xb1c1,	// (0x00038d1c) msg_header_pane_t1_ParamLimits

0xb1c1,	// (0x00038d1c) msg_header_pane_t1

0xb1d3,	// (0x00038d2e) msg_header_pane_t2_ParamLimits

0xb1d3,	// (0x00038d2e) msg_header_pane_t2

0x0001,

0xf492,	// (0x0003cfed) msg_header_pane_t_ParamLimits

0xf492,	// (0x0003cfed) msg_header_pane_t

0xb1e5,	// (0x00038d40) msg_body_pane_g1

0xb1ed,	// (0x00038d48) msg_body_pane_t1_ParamLimits

0xb1ed,	// (0x00038d48) msg_body_pane_t1

0xb21e,	// (0x00038d79) msg_body_pane_t2_ParamLimits

0xb21e,	// (0x00038d79) msg_body_pane_t2

0xb230,	// (0x00038d8b) msg_body_pane_t3_ParamLimits

0xb230,	// (0x00038d8b) msg_body_pane_t3

0x0002,

0xf497,	// (0x0003cff2) msg_body_pane_t_ParamLimits

0xf497,	// (0x0003cff2) msg_body_pane_t

0x06c8,	// (0x0002e223) main_viewer_pane_g1_ParamLimits

0x06c8,	// (0x0002e223) main_viewer_pane_g1

0x06d6,	// (0x0002e231) main_viewer_pane_g2_ParamLimits

0x06d6,	// (0x0002e231) main_viewer_pane_g2

0x41b0,	// (0x00031d0b) main_viewer_pane_g3_ParamLimits

0x41b0,	// (0x00031d0b) main_viewer_pane_g3

0x41bf,	// (0x00031d1a) main_viewer_pane_g4_ParamLimits

0x41bf,	// (0x00031d1a) main_viewer_pane_g4

0x41ce,	// (0x00031d29) main_viewer_pane_g5_ParamLimits

0x41ce,	// (0x00031d29) main_viewer_pane_g5

0x41ce,	// (0x00031d29) main_viewer_pane_g7_ParamLimits

0x41ce,	// (0x00031d29) main_viewer_pane_g7

0xaae1,	// (0x0003863c) main_viewer_pane_g8_ParamLimits

0xaae1,	// (0x0003863c) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0003d002) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0003d002) main_viewer_pane_g

0xb242,	// (0x00038d9d) viewer_content_pane_ParamLimits

0xb242,	// (0x00038d9d) viewer_content_pane

0x4219,	// (0x00031d74) main_postcard_pane_g1_ParamLimits

0x4219,	// (0x00031d74) main_postcard_pane_g1

0x422f,	// (0x00031d8a) main_postcard_pane_g2_ParamLimits

0x422f,	// (0x00031d8a) main_postcard_pane_g2

0x4245,	// (0x00031da0) main_postcard_pane_g3_ParamLimits

0x4245,	// (0x00031da0) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0003d013) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0003d013) main_postcard_pane_g

0x425c,	// (0x00031db7) main_postcard_pane_g4

0xc546,	// (0x0003a0a1) smil_status_volume_pane_g2

0x429f,	// (0x00031dfa) postcard_pane_ParamLimits

0x429f,	// (0x00031dfa) postcard_pane

0xb250,	// (0x00038dab) postcard_pane_g1_ParamLimits

0xb250,	// (0x00038dab) postcard_pane_g1

0x42e1,	// (0x00031e3c) postcard_pane_g2_ParamLimits

0x42e1,	// (0x00031e3c) postcard_pane_g2

0x42ed,	// (0x00031e48) postcard_pane_g3_ParamLimits

0x42ed,	// (0x00031e48) postcard_pane_g3

0xb25e,	// (0x00038db9) postcard_pane_g4_ParamLimits

0xb25e,	// (0x00038db9) postcard_pane_g4

0x42f9,	// (0x00031e54) postcard_pane_g5_ParamLimits

0x42f9,	// (0x00031e54) postcard_pane_g5

0x430e,	// (0x00031e69) postcard_pane_g6_ParamLimits

0x430e,	// (0x00031e69) postcard_pane_g6

0xb250,	// (0x00038dab) postcard_pane_g7_ParamLimits

0xb250,	// (0x00038dab) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0003d020) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0003d020) postcard_pane_g

0x4322,	// (0x00031e7d) main_mp2_pane_g1_ParamLimits

0x4322,	// (0x00031e7d) main_mp2_pane_g1

0x432e,	// (0x00031e89) main_mp2_pane_g2_ParamLimits

0x432e,	// (0x00031e89) main_mp2_pane_g2

0x433a,	// (0x00031e95) main_mp2_pane_g3_ParamLimits

0x433a,	// (0x00031e95) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0003d02f) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0003d02f) main_mp2_pane_g

0x4346,	// (0x00031ea1) main_mp2_pane_t1_ParamLimits

0x4346,	// (0x00031ea1) main_mp2_pane_t1

0x435b,	// (0x00031eb6) main_mp2_pane_t2_ParamLimits

0x435b,	// (0x00031eb6) main_mp2_pane_t2

0x436d,	// (0x00031ec8) main_mp2_pane_t3_ParamLimits

0x436d,	// (0x00031ec8) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0003d036) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0003d036) main_mp2_pane_t

0xb26c,	// (0x00038dc7) pec_content_pane_ParamLimits

0xb26c,	// (0x00038dc7) pec_content_pane

0xa698,	// (0x000381f3) scroll_pane_cp015

0xb27e,	// (0x00038dd9) pec_attribute_pane_ParamLimits

0xb27e,	// (0x00038dd9) pec_attribute_pane

0x437f,	// (0x00031eda) pec_content_pane_g1_ParamLimits

0x437f,	// (0x00031eda) pec_content_pane_g1

0xb28e,	// (0x00038de9) pec_content_pane_t1_ParamLimits

0xb28e,	// (0x00038de9) pec_content_pane_t1

0xb2a0,	// (0x00038dfb) pec_content_pane_t2_ParamLimits

0xb2a0,	// (0x00038dfb) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0003d03d) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0003d03d) pec_content_pane_t

0x438b,	// (0x00031ee6) list_single_graphic_pane_cp01_ParamLimits

0x438b,	// (0x00031ee6) list_single_graphic_pane_cp01

0xa26c,	// (0x00037dc7) bg_popup_sub_pane_cp04

0xb2b2,	// (0x00038e0d) popup_mup_playback_window_g1

0xb2be,	// (0x00038e19) popup_mup_playback_window_t1

0xb2d3,	// (0x00038e2e) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0003d042) popup_mup_playback_window_t

0xb30a,	// (0x00038e65) main_image_pane_g1_ParamLimits

0xb30a,	// (0x00038e65) main_image_pane_g1

0xb34d,	// (0x00038ea8) scroll_pane_cp018_ParamLimits

0xb34d,	// (0x00038ea8) scroll_pane_cp018

0xb365,	// (0x00038ec0) scroll_pane_cp016_ParamLimits

0xb365,	// (0x00038ec0) scroll_pane_cp016

0x4458,	// (0x00031fb3) smil2_image_pane_ParamLimits

0x4458,	// (0x00031fb3) smil2_image_pane

0x4488,	// (0x00031fe3) smil2_root_pane_ParamLimits

0x4488,	// (0x00031fe3) smil2_root_pane

0x44c0,	// (0x0003201b) smil2_text_pane_ParamLimits

0x44c0,	// (0x0003201b) smil2_text_pane

0xa011,	// (0x00037b6c) bg_list_pane_cp06

0xb3a1,	// (0x00038efc) grid_radio_pane

0xa011,	// (0x00037b6c) bg_popup_window_pane_cp06

0xb3a9,	// (0x00038f04) main_fmradio_pane_t1

0xacb9,	// (0x00038814) heading_pane_cp04

0xb3b7,	// (0x00038f12) main_fmradio_pane_t2

0xc37c,	// (0x00039ed7) popup_cale_lunar_info_window_g1

0xb3c5,	// (0x00038f20) main_fmradio_pane_t3

0xc384,	// (0x00039edf) popup_cale_lunar_info_window_g2

0xb3d3,	// (0x00038f2e) main_fmradio_pane_t4

0x0001,

0xb3e1,	// (0x00038f3c) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0003d11d) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0003d057) main_fmradio_pane_t

0xb3ef,	// (0x00038f4a) wait_bar_pane_cp03

0xb3f7,	// (0x00038f52) cell_fmradio_pane_ParamLimits

0xb3f7,	// (0x00038f52) cell_fmradio_pane

0xb250,	// (0x00038dab) cell_fmradio_pane_g1_ParamLimits

0xb250,	// (0x00038dab) cell_fmradio_pane_g1

0xa011,	// (0x00037b6c) grid_highlight_pane_cp011

0xb40a,	// (0x00038f65) poc_content_pane_ParamLimits

0xb40a,	// (0x00038f65) poc_content_pane

0xb41c,	// (0x00038f77) scroll_pane_cp019

0x4540,	// (0x0003209b) popup_call_poc_act_window_ParamLimits

0x4540,	// (0x0003209b) popup_call_poc_act_window

0x4564,	// (0x000320bf) popup_call_poc_inact_window_ParamLimits

0x4564,	// (0x000320bf) popup_call_poc_inact_window

0xf599,	// (0x0003d0f4) bg_popup_call_poc_act_pane_g

0xc2f4,	// (0x00039e4f) bg_popup_call_poc_inact_pane_g1

0xc2fc,	// (0x00039e57) bg_popup_call_poc_inact_pane_g2

0xb424,	// (0x00038f7f) popup_call_poc_act_window_g2

0xc304,	// (0x00039e5f) bg_popup_call_poc_inact_pane_g3

0xc30c,	// (0x00039e67) bg_popup_call_poc_inact_pane_g4

0xc314,	// (0x00039e6f) bg_popup_call_poc_inact_pane_g5

0xb42c,	// (0x00038f87) popup_call_poc_act_window_t1_ParamLimits

0xb42c,	// (0x00038f87) popup_call_poc_act_window_t1

0xb454,	// (0x00038faf) popup_call_poc_act_window_t2_ParamLimits

0xb454,	// (0x00038faf) popup_call_poc_act_window_t2

0xb47c,	// (0x00038fd7) popup_call_poc_act_window_t3_ParamLimits

0xb47c,	// (0x00038fd7) popup_call_poc_act_window_t3

0xb4a4,	// (0x00038fff) popup_call_poc_act_window_t4_ParamLimits

0xb4a4,	// (0x00038fff) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0003d062) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0003d062) popup_call_poc_act_window_t

0xc31c,	// (0x00039e77) bg_popup_call_poc_inact_pane_g6

0xc324,	// (0x00039e7f) bg_popup_call_poc_inact_pane_g7

0xc32c,	// (0x00039e87) bg_popup_call_poc_inact_pane_g8

0xb4b6,	// (0x00039011) popup_call_poc_inact_window_g2

0xc334,	// (0x00039e8f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0003d0e1) bg_popup_call_poc_inact_pane_g

0xb4be,	// (0x00039019) popup_call_poc_inact_window_t1_ParamLimits

0xb4be,	// (0x00039019) popup_call_poc_inact_window_t1

0xb4d3,	// (0x0003902e) popup_call_poc_inact_window_t2_ParamLimits

0xb4d3,	// (0x0003902e) popup_call_poc_inact_window_t2

0xb4e8,	// (0x00039043) popup_call_poc_inact_window_t3_ParamLimits

0xb4e8,	// (0x00039043) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0003d06b) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0003d06b) popup_call_poc_inact_window_t

0xc4b9,	// (0x0003a014) context_pane_ParamLimits

0x4b3d,	// (0x00032698) signal_pane_ParamLimits

0xb02d,	// (0x00038b88) main_call2_pane

0x4acc,	// (0x00032627) popup_phob_thumbnail2_window_ParamLimits

0x4acc,	// (0x00032627) popup_phob_thumbnail2_window

0x417a,	// (0x00031cd5) aid_hotspot_pointer_arrow_pane

0x4182,	// (0x00031cdd) aid_hotspot_pointer_hand_pane

0x48ad,	// (0x00032408) phob_pre_status_pane_g5

0x23a1,	// (0x0002fefc) cams_zoom_pane_ParamLimits

0x23b0,	// (0x0002ff0b) image_vga_pane_ParamLimits

0x23ca,	// (0x0002ff25) main_camera_pane_g1_ParamLimits

0x23dc,	// (0x0002ff37) main_camera_pane_g2_ParamLimits

0x23ec,	// (0x0002ff47) main_camera_pane_g3_ParamLimits

0x23fc,	// (0x0002ff57) main_camera_pane_g4_ParamLimits

0x240c,	// (0x0002ff67) main_camera_pane_g5_ParamLimits

0x241c,	// (0x0002ff77) main_camera_pane_g6_ParamLimits

0x242e,	// (0x0002ff89) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0003cd6a) main_camera_pane_g_ParamLimits

0x243e,	// (0x0002ff99) main_camera_pane_t1_ParamLimits

0x2454,	// (0x0002ffaf) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0003cd7b) main_camera_pane_t_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_preview_window_pane_cp01_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_preview_window_pane_cp01

0xb4fd,	// (0x00039058) popup_phob_thumbnail2_window_g1_ParamLimits

0xb4fd,	// (0x00039058) popup_phob_thumbnail2_window_g1

0xa011,	// (0x00037b6c) call2_cli_visual_pane

0x4598,	// (0x000320f3) popup_call2_audio_conf_window_ParamLimits

0x4598,	// (0x000320f3) popup_call2_audio_conf_window

0x45b8,	// (0x00032113) popup_call2_audio_first_window_ParamLimits

0x45b8,	// (0x00032113) popup_call2_audio_first_window

0x464e,	// (0x000321a9) popup_call2_audio_in_window_ParamLimits

0x464e,	// (0x000321a9) popup_call2_audio_in_window

0x4696,	// (0x000321f1) popup_call2_audio_out_window_ParamLimits

0x4696,	// (0x000321f1) popup_call2_audio_out_window

0x4700,	// (0x0003225b) popup_call2_audio_second_window_ParamLimits

0x4700,	// (0x0003225b) popup_call2_audio_second_window

0x4766,	// (0x000322c1) popup_call2_audio_wait_window_ParamLimits

0x4766,	// (0x000322c1) popup_call2_audio_wait_window

0xa011,	// (0x00037b6c) bg_popup_call2_act_pane_cp03

0xa24e,	// (0x00037da9) list_conf_pane_cp

0xb509,	// (0x00039064) popup_call2_audio_conf_window_t1

0xad16,	// (0x00038871) list_single_graphic_popup_conf2_pane_ParamLimits

0xad16,	// (0x00038871) list_single_graphic_popup_conf2_pane

0xad29,	// (0x00038884) list_highlight_pane_cp04

0xb517,	// (0x00039072) list_single_graphic_popup_conf2_pane_g1

0xad3a,	// (0x00038895) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0003d072) list_single_graphic_popup_conf2_pane_g

0xb521,	// (0x0003907c) list_single_graphic_popup_conf2_pane_t1

0xb52f,	// (0x0003908a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb52f,	// (0x0003908a) bg_popup_call2_act_pane_cp01

0xb5b9,	// (0x00039114) call_type_pane_cp05_ParamLimits

0xb5b9,	// (0x00039114) call_type_pane_cp05

0xb60d,	// (0x00039168) popup_call2_audio_second_window_g1_ParamLimits

0xb60d,	// (0x00039168) popup_call2_audio_second_window_g1

0xb661,	// (0x000391bc) popup_call2_audio_second_window_g2_ParamLimits

0xb661,	// (0x000391bc) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0003d077) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0003d077) popup_call2_audio_second_window_g

0xb6c6,	// (0x00039221) popup_call2_audio_second_window_t1_ParamLimits

0xb6c6,	// (0x00039221) popup_call2_audio_second_window_t1

0xb781,	// (0x000392dc) popup_call2_audio_second_window_t2_ParamLimits

0xb781,	// (0x000392dc) popup_call2_audio_second_window_t2

0xb7d4,	// (0x0003932f) popup_call2_audio_second_window_t3_ParamLimits

0xb7d4,	// (0x0003932f) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0003d07e) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0003d07e) popup_call2_audio_second_window_t

0xa011,	// (0x00037b6c) bg_popup_call2_in_pane_cp02

0xa01b,	// (0x00037b76) call_type_pane_cp04

0xa023,	// (0x00037b7e) popup_call2_audio_wait_window_g1

0xa02b,	// (0x00037b86) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003cc57) popup_call2_audio_wait_window_g

0xa033,	// (0x00037b8e) popup_call2_audio_wait_window_t3

0xb8c7,	// (0x00039422) bg_popup_call2_act_pane_ParamLimits

0xb8c7,	// (0x00039422) bg_popup_call2_act_pane

0xb987,	// (0x000394e2) call_type_pane_cp03_ParamLimits

0xb987,	// (0x000394e2) call_type_pane_cp03

0xb9eb,	// (0x00039546) popup_call2_audio_first_window_g1_ParamLimits

0xb9eb,	// (0x00039546) popup_call2_audio_first_window_g1

0xba5b,	// (0x000395b6) popup_call2_audio_first_window_g2_ParamLimits

0xba5b,	// (0x000395b6) popup_call2_audio_first_window_g2

0xb0ec,	// (0x00038c47) popup_call2_audio_first_window_g3_ParamLimits

0xb0ec,	// (0x00038c47) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0003d087) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0003d087) popup_call2_audio_first_window_g

0xbb39,	// (0x00039694) popup_call2_audio_first_window_t1_ParamLimits

0xbb39,	// (0x00039694) popup_call2_audio_first_window_t1

0xbc3c,	// (0x00039797) popup_call2_audio_first_window_t4_ParamLimits

0xbc3c,	// (0x00039797) popup_call2_audio_first_window_t4

0xbd1f,	// (0x0003987a) popup_call2_audio_first_window_t5_ParamLimits

0xbd1f,	// (0x0003987a) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0003d092) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0003d092) popup_call2_audio_first_window_t

0xa264,	// (0x00037dbf) bg_popup_call2_act_pane_g1

0xc38c,	// (0x00039ee7) popup_cale_lunar_info_window_t1

0xc39a,	// (0x00039ef5) popup_cale_lunar_info_window_t2

0xc3a8,	// (0x00039f03) popup_cale_lunar_info_window_t3

0xa011,	// (0x00037b6c) bg_popup_call2_bubble_pane

0xbe20,	// (0x0003997b) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe20,	// (0x0003997b) bg_popup_call2_in_pane_cp01

0x9ced,	// (0x00037848) call_type_pane_cp02

0xbe68,	// (0x000399c3) popup_call2_audio_out_window_g1_ParamLimits

0xbe68,	// (0x000399c3) popup_call2_audio_out_window_g1

0xbe94,	// (0x000399ef) popup_call2_audio_out_window_g2_ParamLimits

0xbe94,	// (0x000399ef) popup_call2_audio_out_window_g2

0xbebc,	// (0x00039a17) popup_call2_audio_out_window_g3_ParamLimits

0xbebc,	// (0x00039a17) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0003d09b) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0003d09b) popup_call2_audio_out_window_g

0xbef7,	// (0x00039a52) popup_call2_audio_out_window_t1_ParamLimits

0xbef7,	// (0x00039a52) popup_call2_audio_out_window_t1

0xbf56,	// (0x00039ab1) popup_call2_audio_out_window_t2_ParamLimits

0xbf56,	// (0x00039ab1) popup_call2_audio_out_window_t2

0xbfaa,	// (0x00039b05) popup_call2_audio_out_window_t3_ParamLimits

0xbfaa,	// (0x00039b05) popup_call2_audio_out_window_t3

0xbfc0,	// (0x00039b1b) popup_call2_audio_out_window_t4_ParamLimits

0xbfc0,	// (0x00039b1b) popup_call2_audio_out_window_t4

0xbfd6,	// (0x00039b31) popup_call2_audio_out_window_t5_ParamLimits

0xbfd6,	// (0x00039b31) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0003d0a4) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0003d0a4) popup_call2_audio_out_window_t

0xc03a,	// (0x00039b95) bg_popup_call2_in_pane_ParamLimits

0xc03a,	// (0x00039b95) bg_popup_call2_in_pane

0xc096,	// (0x00039bf1) popup_call2_audio_in_window_g1_ParamLimits

0xc096,	// (0x00039bf1) popup_call2_audio_in_window_g1

0xc0ce,	// (0x00039c29) popup_call2_audio_in_window_g2_ParamLimits

0xc0ce,	// (0x00039c29) popup_call2_audio_in_window_g2

0xc106,	// (0x00039c61) popup_call2_audio_in_window_g3_ParamLimits

0xc106,	// (0x00039c61) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0003d0b1) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0003d0b1) popup_call2_audio_in_window_g

0xc15e,	// (0x00039cb9) popup_call2_audio_in_window_t1_ParamLimits

0xc15e,	// (0x00039cb9) popup_call2_audio_in_window_t1

0xc1de,	// (0x00039d39) popup_call2_audio_in_window_t2_ParamLimits

0xc1de,	// (0x00039d39) popup_call2_audio_in_window_t2

0xc25e,	// (0x00039db9) popup_call2_audio_in_window_t3_ParamLimits

0xc25e,	// (0x00039db9) popup_call2_audio_in_window_t3

0xc278,	// (0x00039dd3) popup_call2_audio_in_window_t4_ParamLimits

0xc278,	// (0x00039dd3) popup_call2_audio_in_window_t4

0xc28a,	// (0x00039de5) popup_call2_audio_in_window_t5_ParamLimits

0xc28a,	// (0x00039de5) popup_call2_audio_in_window_t5

0xc29f,	// (0x00039dfa) popup_call2_audio_in_window_t6_ParamLimits

0xc29f,	// (0x00039dfa) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0003d0ba) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0003d0ba) popup_call2_audio_in_window_t

0xa264,	// (0x00037dbf) bg_popup_call2_in_pane_g1

0xc3b6,	// (0x00039f11) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0003d122) popup_cale_lunar_info_window_t

0xa26c,	// (0x00037dc7) bg_popup_call2_rect_pane_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_call2_rect_pane

0xa011,	// (0x00037b6c) call2_cli_visual_graphic_pane

0xa011,	// (0x00037b6c) call2_cli_visual_text_pane

0x4bca,	// (0x00032725) smil_status_volume_pane_g3

0x0002,

0xa386,	// (0x00037ee1) call2_cli_visual_graphic_pane_g1

0xa386,	// (0x00037ee1) call2_cli_visual_graphic_pane_g2

0xa386,	// (0x00037ee1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0003d0c7) call2_cli_visual_graphic_pane_g

0xc2b4,	// (0x00039e0f) bg_popup_call2_rect_pane_g1

0xa412,	// (0x00037f6d) bg_popup_call2_rect_pane_g2

0xc2bc,	// (0x00039e17) bg_popup_call2_rect_pane_g3

0xc2c4,	// (0x00039e1f) bg_popup_call2_rect_pane_g4

0xc2cc,	// (0x00039e27) bg_popup_call2_rect_pane_g5

0xc2d4,	// (0x00039e2f) bg_popup_call2_rect_pane_g6

0xc2dc,	// (0x00039e37) bg_popup_call2_rect_pane_g7

0xc2e4,	// (0x00039e3f) bg_popup_call2_rect_pane_g8

0xc2ec,	// (0x00039e47) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0003d0ce) bg_popup_call2_rect_pane_g

0xc2f4,	// (0x00039e4f) bg_popup_call2_bubble_pane_g1

0xc2fc,	// (0x00039e57) bg_popup_call2_bubble_pane_g2

0xc304,	// (0x00039e5f) bg_popup_call2_bubble_pane_g3

0xc30c,	// (0x00039e67) bg_popup_call2_bubble_pane_g4

0xc314,	// (0x00039e6f) bg_popup_call2_bubble_pane_g5

0xc31c,	// (0x00039e77) bg_popup_call2_bubble_pane_g6

0xc324,	// (0x00039e7f) bg_popup_call2_bubble_pane_g7

0xc32c,	// (0x00039e87) bg_popup_call2_bubble_pane_g8

0xc334,	// (0x00039e8f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0003d0e1) bg_popup_call2_bubble_pane_g

0x1e5b,	// (0x0002f9b6) aid_cale_week_size_cell_pane

0x246a,	// (0x0002ffc5) aid_cams_cif_uncrop_pane_ParamLimits

0x246a,	// (0x0002ffc5) aid_cams_cif_uncrop_pane

0x261a,	// (0x00030175) aid_cams_size_cell_ParamLimits

0x261a,	// (0x00030175) aid_cams_size_cell

0x262e,	// (0x00030189) grid_cams_pane_ParamLimits

0x2648,	// (0x000301a3) linegrid_cams_pane_ParamLimits

0x2846,	// (0x000303a1) call_video_pane_t1

0x2864,	// (0x000303bf) call_video_pane_t2

0x0001,

0xf273,	// (0x0003cdce) call_video_pane_t

0x2c90,	// (0x000307eb) aid_cale_month_size_cell_pane_ParamLimits

0x2c90,	// (0x000307eb) aid_cale_month_size_cell_pane

0xf610,	// (0x0003d16b) smil_status_volume_pane_g

0x4bd7,	// (0x00032732) volume_smil_pane_ParamLimits

0x1972,	// (0x0002f4cd) aid_popup2_width_pane

0x1d6d,	// (0x0002f8c8) cell_qdial_pane_g4_ParamLimits

0x1d6d,	// (0x0002f8c8) cell_qdial_pane_g4

0x3bf8,	// (0x00031753) aid_blid_cardinal_pane_ParamLimits

0x3c04,	// (0x0003175f) aid_blid_destination_pane_ParamLimits

0x3c04,	// (0x0003175f) aid_blid_destination_pane

0xa26c,	// (0x00037dc7) bg_popup_call_poc_act_pane_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_call_poc_act_pane

0xa26c,	// (0x00037dc7) bg_popup_call_poc_inact_pane_ParamLimits

0xa26c,	// (0x00037dc7) bg_popup_call_poc_inact_pane

0xc33c,	// (0x00039e97) bg_popup_call_poc_act_pane_g1

0xc344,	// (0x00039e9f) bg_popup_call_poc_act_pane_g2

0xc34c,	// (0x00039ea7) bg_popup_call_poc_act_pane_g3

0xc30c,	// (0x00039e67) bg_popup_call_poc_act_pane_g4

0xc314,	// (0x00039e6f) bg_popup_call_poc_act_pane_g5

0xc354,	// (0x00039eaf) bg_popup_call_poc_act_pane_g6

0xc324,	// (0x00039e7f) bg_popup_call_poc_act_pane_g7

0xc35c,	// (0x00039eb7) bg_popup_call_poc_act_pane_g8

0xa011,	// (0x00037b6c) main_usb_pane

0x4aa7,	// (0x00032602) popup_cale_lunar_info_window

0x2b3c,	// (0x00030697) im_reading_pane_t1_ParamLimits

0xa5f0,	// (0x0003814b) list_im_pane_ParamLimits

0xa601,	// (0x0003815c) scroll_pane_cp07_ParamLimits

0xa011,	// (0x00037b6c) grid_highlight_pane_cp012

0xa26c,	// (0x00037dc7) mup_scale_pane_ParamLimits

0xb250,	// (0x00038dab) main_usb_pane_g1_ParamLimits

0xb250,	// (0x00038dab) main_usb_pane_g1

0x47c2,	// (0x0003231d) main_usb_pane_g2_ParamLimits

0x47c2,	// (0x0003231d) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0003d10b) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0003d10b) main_usb_pane_g

0x47d8,	// (0x00032333) main_usb_pane_t1_ParamLimits

0x47d8,	// (0x00032333) main_usb_pane_t1

0x47ea,	// (0x00032345) main_usb_pane_t2_ParamLimits

0x47ea,	// (0x00032345) main_usb_pane_t2

0x47fc,	// (0x00032357) main_usb_pane_t3_ParamLimits

0x47fc,	// (0x00032357) main_usb_pane_t3

0x480e,	// (0x00032369) main_usb_pane_t4_ParamLimits

0x480e,	// (0x00032369) main_usb_pane_t4

0x4820,	// (0x0003237b) main_usb_pane_t5_ParamLimits

0x4820,	// (0x0003237b) main_usb_pane_t5

0x4832,	// (0x0003238d) main_usb_pane_t6_ParamLimits

0x4832,	// (0x0003238d) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0003d110) main_usb_pane_t_ParamLimits

0x3ba7,	// (0x00031702) aid_text_placing

0x3bb0,	// (0x0003170b) main_location2_pane_t1_ParamLimits

0x3bc2,	// (0x0003171d) main_location2_pane_t2_ParamLimits

0x3bd4,	// (0x0003172f) main_location2_pane_t3_ParamLimits

0x3be6,	// (0x00031741) main_location2_pane_t4_ParamLimits

0x3be6,	// (0x00031741) main_location2_pane_t4

0xf3d4,	// (0x0003cf2f) main_location2_pane_t_ParamLimits

0xa2a8,	// (0x00037e03) find_pinb_pane_g2_ParamLimits

0xa2a8,	// (0x00037e03) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0003cc7d) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0003cc7d) find_pinb_pane_g

0xa2b4,	// (0x00037e0f) find_pinb_pane_t1_ParamLimits

0xa2c6,	// (0x00037e21) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0003cc82) find_pinb_pane_t_ParamLimits

0xa011,	// (0x00037b6c) main_call3_pane

0x314f,	// (0x00030caa) cale_month_day_heading_pane_t1_ParamLimits

0x31d5,	// (0x00030d30) cale_month_day_heading_pane_t2_ParamLimits

0x3266,	// (0x00030dc1) cale_month_day_heading_pane_t3_ParamLimits

0x32f7,	// (0x00030e52) cale_month_day_heading_pane_t4_ParamLimits

0x338c,	// (0x00030ee7) cale_month_day_heading_pane_t5_ParamLimits

0x342d,	// (0x00030f88) cale_month_day_heading_pane_t6_ParamLimits

0x34ce,	// (0x00031029) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0003ce06) cale_month_day_heading_pane_t_ParamLimits

0xa923,	// (0x0003847e) smil_status_volume_pane

0x42bd,	// (0x00031e18) postcard_address_pane_ParamLimits

0x42bd,	// (0x00031e18) postcard_address_pane

0x42cf,	// (0x00031e2a) postcard_message_pane_ParamLimits

0x42cf,	// (0x00031e2a) postcard_message_pane

0x47a0,	// (0x000322fb) call2_cli_visual_pane_t1_ParamLimits

0x47a0,	// (0x000322fb) call2_cli_visual_pane_t1

0x4d8c,	// (0x000328e7) postcard_message_pane_t1_ParamLimits

0x4d8c,	// (0x000328e7) postcard_message_pane_t1

0x4d75,	// (0x000328d0) postcard_address_pane_t1_ParamLimits

0x4d75,	// (0x000328d0) postcard_address_pane_t1

0x4d61,	// (0x000328bc) popup_call3_audio_in_window_ParamLimits

0x4d61,	// (0x000328bc) popup_call3_audio_in_window

0x4bec,	// (0x00032747) bg_popup_call3_in_pane_ParamLimits

0x4bec,	// (0x00032747) bg_popup_call3_in_pane

0x4c62,	// (0x000327bd) popup_call3_audio_in_window_g1_ParamLimits

0x4c62,	// (0x000327bd) popup_call3_audio_in_window_g1

0x4c82,	// (0x000327dd) popup_call3_audio_in_window_g2_ParamLimits

0x4c82,	// (0x000327dd) popup_call3_audio_in_window_g2

0x4ca2,	// (0x000327fd) popup_call3_audio_in_window_g3_ParamLimits

0x4ca2,	// (0x000327fd) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0003d172) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0003d172) popup_call3_audio_in_window_g

0x4cd3,	// (0x0003282e) popup_call3_audio_in_window_t1_ParamLimits

0x4cd3,	// (0x0003282e) popup_call3_audio_in_window_t1

0x4d11,	// (0x0003286c) popup_call3_audio_in_window_t2_ParamLimits

0x4d11,	// (0x0003286c) popup_call3_audio_in_window_t2

0x4d4f,	// (0x000328aa) popup_call3_audio_in_window_t3_ParamLimits

0x4d4f,	// (0x000328aa) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0003d17b) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0003d17b) popup_call3_audio_in_window_t

0xb02d,	// (0x00038b88) bg_popup_call3_rect_pane

0xc2b4,	// (0x00039e0f) bg_popup_call3_rect_pane_g1

0xa412,	// (0x00037f6d) bg_popup_call3_rect_pane_g2

0xc2bc,	// (0x00039e17) bg_popup_call3_rect_pane_g3

0xc2c4,	// (0x00039e1f) bg_popup_call3_rect_pane_g4

0xc2cc,	// (0x00039e27) bg_popup_call3_rect_pane_g5

0xc2d4,	// (0x00039e2f) bg_popup_call3_rect_pane_g6

0xc2dc,	// (0x00039e37) bg_popup_call3_rect_pane_g7

0x3efa,	// (0x00031a55) mup_visualizer_osc_pane

0xb0fa,	// (0x00038c55) mup_visualizer_spec_pane

0x4c1c,	// (0x00032777) call3_video_qcif_pane_ParamLimits

0x4c1c,	// (0x00032777) call3_video_qcif_pane

0x4c2f,	// (0x0003278a) call3_video_qcif_uncrop_pane_ParamLimits

0x4c2f,	// (0x0003278a) call3_video_qcif_uncrop_pane

0x4c3d,	// (0x00032798) call3_video_subqcif_pane_ParamLimits

0x4c3d,	// (0x00032798) call3_video_subqcif_pane

0x4c51,	// (0x000327ac) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c51,	// (0x000327ac) call3_video_subqcif_uncrop_pane

0x4cc2,	// (0x0003281d) popup_call3_audio_in_window_g4_ParamLimits

0x4cc2,	// (0x0003281d) popup_call3_audio_in_window_g4

0x4bb9,	// (0x00032714) mup_spec_half_pane

0x4bc2,	// (0x0003271d) mup_spec_half_pane_cp

0xc519,	// (0x0003a074) mup_osc_middle_pane

0xc522,	// (0x0003a07d) mup_visualizer_osc_pane_g1

0x4b99,	// (0x000326f4) mup_spec_bar_pane_ParamLimits

0x4b99,	// (0x000326f4) mup_spec_bar_pane

0xc506,	// (0x0003a061) mup_spec_bar_pane_g1

0xc510,	// (0x0003a06b) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003d166) mup_spec_bar_pane_g

0x1e5b,	// (0x0002f9b6) aid_cale_week_size_cell_pane_ParamLimits

0x1e75,	// (0x0002f9d0) bg_cale_heading_pane_ParamLimits

0xa44f,	// (0x00037faa) bg_cale_pane_cp01_ParamLimits

0x1e8d,	// (0x0002f9e8) cale_week_corner_pane_ParamLimits

0x1eac,	// (0x0002fa07) cale_week_day_heading_pane_ParamLimits

0x1ec9,	// (0x0002fa24) cale_week_scroll_pane_g1_ParamLimits

0x1edc,	// (0x0002fa37) cale_week_scroll_pane_g2_ParamLimits

0x1ef4,	// (0x0002fa4f) cale_week_scroll_pane_g3_ParamLimits

0x1f0c,	// (0x0002fa67) cale_week_scroll_pane_g4_ParamLimits

0x1f24,	// (0x0002fa7f) cale_week_scroll_pane_g5_ParamLimits

0x1f44,	// (0x0002fa9f) cale_week_scroll_pane_g6_ParamLimits

0x1f64,	// (0x0002fabf) cale_week_scroll_pane_g7_ParamLimits

0x1f84,	// (0x0002fadf) cale_week_scroll_pane_g8_ParamLimits

0x1fa8,	// (0x0002fb03) cale_week_scroll_pane_g9_ParamLimits

0x1fc0,	// (0x0002fb1b) cale_week_scroll_pane_g10_ParamLimits

0x1fd8,	// (0x0002fb33) cale_week_scroll_pane_g11_ParamLimits

0x1ff0,	// (0x0002fb4b) cale_week_scroll_pane_g12_ParamLimits

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g13_ParamLimits

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g14_ParamLimits

0x2008,	// (0x0002fb63) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0003cd0e) cale_week_scroll_pane_g_ParamLimits

0x2020,	// (0x0002fb7b) cale_week_time_pane_ParamLimits

0x2044,	// (0x0002fb9f) grid_cale_week_pane_ParamLimits

0xa46d,	// (0x00037fc8) listscroll_cale_week_pane_t1

0xa47f,	// (0x00037fda) scroll_pane_cp08_ParamLimits

0x2ce5,	// (0x00030840) cale_month_corner_pane_ParamLimits

0xa8f9,	// (0x00038454) cale_month_pane_t1

0x30ed,	// (0x00030c48) cale_month_week_pane_ParamLimits

0x3990,	// (0x000314eb) popup_call_status_window_g1_ParamLimits

0x39a4,	// (0x000314ff) popup_call_status_window_g2_ParamLimits

0x39b8,	// (0x00031513) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0003ceb6) popup_call_status_window_g_ParamLimits

0xaca9,	// (0x00038804) aid_call2_pane

0x416c,	// (0x00031cc7) msg_header_pane_g1

0x42bd,	// (0x00031e18) postcard_address2_pane_ParamLimits

0x42bd,	// (0x00031e18) postcard_address2_pane

0x42cf,	// (0x00031e2a) postcard_message2_pane_ParamLimits

0x42cf,	// (0x00031e2a) postcard_message2_pane

0x4b4b,	// (0x000326a6) message2_row_pane_ParamLimits

0x4b4b,	// (0x000326a6) message2_row_pane

0x4b67,	// (0x000326c2) address2_row_pane_ParamLimits

0x4b67,	// (0x000326c2) address2_row_pane

0xc4d4,	// (0x0003a02f) postcard_message2_row_pane_g1

0xc4dc,	// (0x0003a037) postcard_message2_row_pane_t1

0xc4d4,	// (0x0003a02f) address2_row_pane_g1

0xc4dc,	// (0x0003a037) address2_row_pane_t1

0x0620,	// (0x0002e17b) aid_size_cell_vorec

0xa011,	// (0x00037b6c) main_rss_pane

0x4b7a,	// (0x000326d5) rss_list_single_pane_ParamLimits

0x4b7a,	// (0x000326d5) rss_list_single_pane

0xc4ea,	// (0x0003a045) rss_list_single_pane_t1

0xc4f8,	// (0x0003a053) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0003d161) rss_list_single_pane_t

0xa011,	// (0x00037b6c) main_camera2_pane

0xa011,	// (0x00037b6c) main_video2_pane

0x09fe,	// (0x0002e559) cams_zoom_pane_cp2_ParamLimits

0x09fe,	// (0x0002e559) cams_zoom_pane_cp2

0x0a1e,	// (0x0002e579) image2_vga_pane_ParamLimits

0x0a1e,	// (0x0002e579) image2_vga_pane

0x0a6f,	// (0x0002e5ca) main_camera2_pane_g1_ParamLimits

0x0a6f,	// (0x0002e5ca) main_camera2_pane_g1

0x0a8f,	// (0x0002e5ea) main_camera2_pane_g2_ParamLimits

0x0a8f,	// (0x0002e5ea) main_camera2_pane_g2

0x0aaf,	// (0x0002e60a) main_camera2_pane_g3_ParamLimits

0x0aaf,	// (0x0002e60a) main_camera2_pane_g3

0x0acf,	// (0x0002e62a) main_camera2_pane_g4_ParamLimits

0x0acf,	// (0x0002e62a) main_camera2_pane_g4

0x0aef,	// (0x0002e64a) main_camera2_pane_g5_ParamLimits

0x0aef,	// (0x0002e64a) main_camera2_pane_g5

0x0b0f,	// (0x0002e66a) main_camera2_pane_g6_ParamLimits

0x0b0f,	// (0x0002e66a) main_camera2_pane_g6

0x0b2f,	// (0x0002e68a) main_camera2_pane_g7_ParamLimits

0x0b2f,	// (0x0002e68a) main_camera2_pane_g7

0x0b4f,	// (0x0002e6aa) main_camera2_pane_g8_ParamLimits

0x0b4f,	// (0x0002e6aa) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0003d182) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0003d182) main_camera2_pane_g

0x0b8f,	// (0x0002e6ea) main_camera2_pane_t1_ParamLimits

0x0b8f,	// (0x0002e6ea) main_camera2_pane_t1

0x0bc4,	// (0x0002e71f) main_camera2_pane_t2_ParamLimits

0x0bc4,	// (0x0002e71f) main_camera2_pane_t2

0x0bea,	// (0x0002e745) main_camera2_pane_t3_ParamLimits

0x0bea,	// (0x0002e745) main_camera2_pane_t3

0x0c48,	// (0x0002e7a3) main_camera2_pane_t4_ParamLimits

0x0c48,	// (0x0002e7a3) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0003d195) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0003d195) main_camera2_pane_t

0x0cda,	// (0x0002e835) cams_zoom_pane_cp4_ParamLimits

0x0cda,	// (0x0002e835) cams_zoom_pane_cp4

0x0cf0,	// (0x0002e84b) image2_cif_pane_ParamLimits

0x0cf0,	// (0x0002e84b) image2_cif_pane

0x0d1b,	// (0x0002e876) image2_subqcif_pane_ParamLimits

0x0d1b,	// (0x0002e876) image2_subqcif_pane

0x0d35,	// (0x0002e890) main_video2_pane_g1_ParamLimits

0x0d35,	// (0x0002e890) main_video2_pane_g1

0x0d4f,	// (0x0002e8aa) main_video2_pane_g2_ParamLimits

0x0d4f,	// (0x0002e8aa) main_video2_pane_g2

0x0d65,	// (0x0002e8c0) main_video2_pane_g3_ParamLimits

0x0d65,	// (0x0002e8c0) main_video2_pane_g3

0x0d7b,	// (0x0002e8d6) main_video2_pane_g4_ParamLimits

0x0d7b,	// (0x0002e8d6) main_video2_pane_g4

0x0d91,	// (0x0002e8ec) main_video2_pane_g5_ParamLimits

0x0d91,	// (0x0002e8ec) main_video2_pane_g5

0x0da7,	// (0x0002e902) main_video2_pane_g6_ParamLimits

0x0da7,	// (0x0002e902) main_video2_pane_g6

0x0005,

0xf649,	// (0x0003d1a4) main_video2_pane_g_ParamLimits

0xf649,	// (0x0003d1a4) main_video2_pane_g

0x0dc1,	// (0x0002e91c) main_video2_pane_t1_ParamLimits

0x0dc1,	// (0x0002e91c) main_video2_pane_t1

0x0de5,	// (0x0002e940) main_video2_pane_t2_ParamLimits

0x0de5,	// (0x0002e940) main_video2_pane_t2

0x0e33,	// (0x0002e98e) main_video2_pane_t3_ParamLimits

0x0e33,	// (0x0002e98e) main_video2_pane_t3

0x0002,

0xf656,	// (0x0003d1b1) main_video2_pane_t_ParamLimits

0xf656,	// (0x0003d1b1) main_video2_pane_t

0x48ed,	// (0x00032448) call_muted_g2

0x0001,

0xf5f8,	// (0x0003d153) call_muted_g

0xa011,	// (0x00037b6c) main_mup2_pane

0x4dd7,	// (0x00032932) main_mup2_pane_g1_ParamLimits

0x4dd7,	// (0x00032932) main_mup2_pane_g1

0x4de3,	// (0x0003293e) main_mup2_pane_g2_ParamLimits

0x4de3,	// (0x0003293e) main_mup2_pane_g2

0x5052,	// (0x00032bad) main_mup_pane_g13_cp1

0x505a,	// (0x00032bb5) mup_volume_pane_cp1

0x4dff,	// (0x0003295a) main_mup2_pane_g4_ParamLimits

0x4dff,	// (0x0003295a) main_mup2_pane_g4

0x4e11,	// (0x0003296c) main_mup2_pane_g5_ParamLimits

0x4e11,	// (0x0003296c) main_mup2_pane_g5

0x4e23,	// (0x0003297e) main_mup2_pane_g6_ParamLimits

0x4e23,	// (0x0003297e) main_mup2_pane_g6

0x4e35,	// (0x00032990) main_mup2_pane_g7_ParamLimits

0x4e35,	// (0x00032990) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0003d1b8) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0003d1b8) main_mup2_pane_g

0x4e4d,	// (0x000329a8) main_mup2_pane_t1_ParamLimits

0x4e4d,	// (0x000329a8) main_mup2_pane_t1

0x4e63,	// (0x000329be) main_mup2_pane_t2_ParamLimits

0x4e63,	// (0x000329be) main_mup2_pane_t2

0x4e79,	// (0x000329d4) main_mup2_pane_t3_ParamLimits

0x4e79,	// (0x000329d4) main_mup2_pane_t3

0x4e8f,	// (0x000329ea) main_mup2_pane_t4_ParamLimits

0x4e8f,	// (0x000329ea) main_mup2_pane_t4

0x4ea7,	// (0x00032a02) main_mup2_pane_t5_ParamLimits

0x4ea7,	// (0x00032a02) main_mup2_pane_t5

0x4ebf,	// (0x00032a1a) main_mup2_pane_t6_ParamLimits

0x4ebf,	// (0x00032a1a) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0003d1c7) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0003d1c7) main_mup2_pane_t

0x4eef,	// (0x00032a4a) mup2_visualizer_pane_ParamLimits

0x4eef,	// (0x00032a4a) mup2_visualizer_pane

0x4f1d,	// (0x00032a78) mup_progress_pane_cp_ParamLimits

0x4f1d,	// (0x00032a78) mup_progress_pane_cp

0x503d,	// (0x00032b98) mup_volume_pane_cp_ParamLimits

0x503d,	// (0x00032b98) mup_volume_pane_cp

0x4f31,	// (0x00032a8c) mup2_visualizer_pane_g1_ParamLimits

0x4f31,	// (0x00032a8c) mup2_visualizer_pane_g1

0xc559,	// (0x0003a0b4) mup2_visualizer_pane_g2_ParamLimits

0xc559,	// (0x0003a0b4) mup2_visualizer_pane_g2

0x4f48,	// (0x00032aa3) mup2_visualizer_pane_g3_ParamLimits

0x4f48,	// (0x00032aa3) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0003d1d4) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0003d1d4) mup2_visualizer_pane_g

0xb399,	// (0x00038ef4) aid_size_cell_fmradio

0x06e4,	// (0x0002e23f) aid_height_parent_landcape

0xa67f,	// (0x000381da) wml_content_pane_cp

0xa687,	// (0x000381e2) wml_tabs_pane

0xa690,	// (0x000381eb) popup_wml_miniature_window

0xa698,	// (0x000381f3) scroll_pane_cp021

0xa6ac,	// (0x00038207) wml_content_pane_comp8

0xa011,	// (0x00037b6c) bg_popup_sub_pane_cp05

0xc577,	// (0x0003a0d2) popup_wml_miniature_window_g1

0xc57f,	// (0x0003a0da) wml_miniature_view_pane

0x4f54,	// (0x00032aaf) aid_size_wml_view

0x4f5c,	// (0x00032ab7) wml_miniature_view_pane_g1

0x4f65,	// (0x00032ac0) wml_miniature_view_pane_g2

0x4f6e,	// (0x00032ac9) wml_miniature_view_pane_g3

0x4f76,	// (0x00032ad1) wml_miniature_view_pane_g4

0x4f7e,	// (0x00032ad9) wml_miniature_view_pane_g5

0x4f86,	// (0x00032ae1) wml_miniature_view_pane_g6

0x4f8e,	// (0x00032ae9) wml_miniature_view_pane_g7

0x4f96,	// (0x00032af1) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0003d1db) wml_miniature_view_pane_g

0xc587,	// (0x0003a0e2) background_graphic_ParamLimits

0xc587,	// (0x0003a0e2) background_graphic

0xc593,	// (0x0003a0ee) wml_tabs_2_pane

0xc59c,	// (0x0003a0f7) wml_tabs_3_pane_ParamLimits

0xc59c,	// (0x0003a0f7) wml_tabs_3_pane

0xc5ae,	// (0x0003a109) wml_tabs_4_pane_ParamLimits

0xc5ae,	// (0x0003a109) wml_tabs_4_pane

0xc5c4,	// (0x0003a11f) wml_tabs_5_pane_ParamLimits

0xc5c4,	// (0x0003a11f) wml_tabs_5_pane

0xc5de,	// (0x0003a139) wml_tabs_pane_g2_ParamLimits

0xc5de,	// (0x0003a139) wml_tabs_pane_g2

0xc5f2,	// (0x0003a14d) wml_tabs_pane_g3_ParamLimits

0xc5f2,	// (0x0003a14d) wml_tabs_pane_g3

0x4f9e,	// (0x00032af9) wml_tabs_2_active_pane_ParamLimits

0x4f9e,	// (0x00032af9) wml_tabs_2_active_pane

0x4fb2,	// (0x00032b0d) wml_tabs_2_passive_pane_ParamLimits

0x4fb2,	// (0x00032b0d) wml_tabs_2_passive_pane

0x4fc6,	// (0x00032b21) wml_tabs_3_active_pane_cp_ParamLimits

0x4fc6,	// (0x00032b21) wml_tabs_3_active_pane_cp

0x4fdb,	// (0x00032b36) wml_tabs_3_passive_pane_ParamLimits

0x4fdb,	// (0x00032b36) wml_tabs_3_passive_pane

0x4fee,	// (0x00032b49) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fee,	// (0x00032b49) wml_tabs_3_passive_pane_cp

0x5005,	// (0x00032b60) tabs_4_active_pane

0x500d,	// (0x00032b68) tabs_4_passive_pane

0x5017,	// (0x00032b72) tabs_4_passive_pane_cp

0x501f,	// (0x00032b7a) tabs_4_passive_pane_cp2

0x47ba,	// (0x00032315) aid_height_text

0x3ed0,	// (0x00031a2b) mup_volume_cont_pane_ParamLimits

0x3ed0,	// (0x00031a2b) mup_volume_cont_pane

0x1aeb,	// (0x0002f646) aid_size_cell_pinb

0x1af5,	// (0x0002f650) aid_size_list_pinb

0x4f09,	// (0x00032a64) mup2_volume_cont_pane_ParamLimits

0x4f09,	// (0x00032a64) mup2_volume_cont_pane

0x5029,	// (0x00032b84) mup2_volume_cont_pane_g1_ParamLimits

0x5029,	// (0x00032b84) mup2_volume_cont_pane_g1

0x01d0,	// (0x0002dd2b) aid_size_cell_touch_ParamLimits

0x01d0,	// (0x0002dd2b) aid_size_cell_touch

0x03b8,	// (0x0002df13) touch_pane_ParamLimits

0x03b8,	// (0x0002df13) touch_pane

0x1a23,	// (0x0002f57e) main_rss2_pane

0xc60f,	// (0x0003a16a) listscroll_rss2_pane

0xc618,	// (0x0003a173) rss2_navigation_pane

0xc620,	// (0x0003a17b) list_rss2_pane

0xadec,	// (0x00038947) scroll_pane_cp22

0xc628,	// (0x0003a183) rss2_navigation_pane_g1

0xc631,	// (0x0003a18c) rss2_navigation_pane_g2

0xc639,	// (0x0003a194) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0003d1ec) rss2_navigation_pane_g

0xc641,	// (0x0003a19c) rss2_navigation_pane_t1

0x5062,	// (0x00032bbd) rss2_list_single_pane_ParamLimits

0x5062,	// (0x00032bbd) rss2_list_single_pane

0xc64f,	// (0x0003a1aa) rss2_list_single_pane_t2

0xc65d,	// (0x0003a1b8) rss2_list_single_pane_t3_ParamLimits

0xc65d,	// (0x0003a1b8) rss2_list_single_pane_t3

0xc67a,	// (0x0003a1d5) rss2_list_single_pane_t4

0x3776,	// (0x000312d1) smil_status_pane_g1

0x1a09,	// (0x0002f564) main_image2_pane_ParamLimits

0x1a09,	// (0x0002f564) main_image2_pane

0x0b6f,	// (0x0002e6ca) main_camera2_pane_g9_ParamLimits

0x0b6f,	// (0x0002e6ca) main_camera2_pane_g9

0x0c9d,	// (0x0002e7f8) main_camera2_pane_t5_ParamLimits

0x0c9d,	// (0x0002e7f8) main_camera2_pane_t5

0x4da7,	// (0x00032902) main_camera2_pane_t6_ParamLimits

0x4da7,	// (0x00032902) main_camera2_pane_t6

0x5077,	// (0x00032bd2) main_image2_pane_g1_ParamLimits

0x5077,	// (0x00032bd2) main_image2_pane_g1

0x44f6,	// (0x00032051) smil2_video_pane_ParamLimits

0x44f6,	// (0x00032051) smil2_video_pane

0x197e,	// (0x0002f4d9) aid_zoom_text_primary_cp

0x19ff,	// (0x0002f55a) popup_preview_fixed_window

0xa5e8,	// (0x00038143) im_reading_pane_g1

0x09e6,	// (0x0002e541) cams2_bc_adjust_pane_cp_ParamLimits

0x09e6,	// (0x0002e541) cams2_bc_adjust_pane_cp

0x0ccc,	// (0x0002e827) cams2_bc_adjust_pane_ParamLimits

0x0ccc,	// (0x0002e827) cams2_bc_adjust_pane

0xd626,	// (0x0003b181) cams2_bc_adjust_pane_g1

0x508d,	// (0x00032be8) cams2_slider_pane

0x5096,	// (0x00032bf1) cams2_slider_pane_g1

0x509f,	// (0x00032bfa) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0003d1f3) cams2_slider_pane_g

0x0428,	// (0x0002df83) calc_display_pane_ParamLimits

0x0450,	// (0x0002dfab) calc_paper_pane_ParamLimits

0x0473,	// (0x0002dfce) grid_calc_pane_ParamLimits

0x3a1d,	// (0x00031578) popup_clock_digital_window_t1_ParamLimits

0xb336,	// (0x00038e91) main_image_pane_t1

0x040a,	// (0x0002df65) aid_size_cell_calc_ParamLimits

0x040a,	// (0x0002df65) aid_size_cell_calc

0x073c,	// (0x0002e297) popup_blid_sat_info2_window_ParamLimits

0x073c,	// (0x0002e297) popup_blid_sat_info2_window

0xc690,	// (0x0003a1eb) aid_size_cell_blid

0xc698,	// (0x0003a1f3) bg_popup_window_pane_cp07

0xc6bb,	// (0x0003a216) grid_popup_blid_pane

0xc6c5,	// (0x0003a220) heading_pane_cp05_ParamLimits

0xc6c5,	// (0x0003a220) heading_pane_cp05

0xc78f,	// (0x0003a2ea) cell_popup_blid_pane_ParamLimits

0xc78f,	// (0x0003a2ea) cell_popup_blid_pane

0xc7b3,	// (0x0003a30e) cell_popup_blid_pane_g1

0xc7bb,	// (0x0003a316) cell_popup_blid_pane_t1

0x4ed9,	// (0x00032a34) mup2_indicator_pane_ParamLimits

0x4ed9,	// (0x00032a34) mup2_indicator_pane

0xb02d,	// (0x00038b88) mup2_visualizer_osc_pane

0xc565,	// (0x0003a0c0) mup2_visualizer_spec_pane_ParamLimits

0xc565,	// (0x0003a0c0) mup2_visualizer_spec_pane

0x50b9,	// (0x00032c14) mup2_spec_half_pane

0x50c2,	// (0x00032c1d) mup2_spec_half_pane_cp

0x50ca,	// (0x00032c25) mup2_spec_bar_pane_ParamLimits

0x50ca,	// (0x00032c25) mup2_spec_bar_pane

0xc506,	// (0x0003a061) mup2_spec_bar_pane_g1

0xc510,	// (0x0003a06b) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003d166) mup2_spec_bar_pane_g

0x50ea,	// (0x00032c45) mup2_osc_middle_pane

0xc522,	// (0x0003a07d) mup2_visualizer_osc_pane_g1

0x9c1e,	// (0x00037779) popup_number_entry_window_t1_ParamLimits

0x9c31,	// (0x0003778c) popup_number_entry_window_t2_ParamLimits

0x9c43,	// (0x0003779e) popup_number_entry_window_t3_ParamLimits

0x1a2d,	// (0x0002f588) popup_number_entry_window_t5_ParamLimits

0x1a2d,	// (0x0002f588) popup_number_entry_window_t5

0xf0cd,	// (0x0003cc28) popup_number_entry_window_t_ParamLimits

0x9c55,	// (0x000377b0) text_title_cp2_ParamLimits

0x418a,	// (0x00031ce5) aid_hotspot_pointer_text2_pane

0x41e0,	// (0x00031d3b) main_viewer_pane_g9_ParamLimits

0x41e0,	// (0x00031d3b) main_viewer_pane_g9

0xa8f9,	// (0x00038454) cale_month_pane_t1_ParamLimits

0xa936,	// (0x00038491) bg_cale_pane_ParamLimits

0xa94e,	// (0x000384a9) list_cale_pane_ParamLimits

0xa95f,	// (0x000384ba) listscroll_cale_day_pane_t1

0xa971,	// (0x000384cc) scroll_pane_cp09_ParamLimits

0x3f02,	// (0x00031a5d) main_mup_eq_pane_t1_ParamLimits

0x3f02,	// (0x00031a5d) main_mup_eq_pane_t1

0x3f1c,	// (0x00031a77) main_mup_eq_pane_t2_ParamLimits

0x3f1c,	// (0x00031a77) main_mup_eq_pane_t2

0x3f36,	// (0x00031a91) main_mup_eq_pane_t3_ParamLimits

0x3f36,	// (0x00031a91) main_mup_eq_pane_t3

0x3f52,	// (0x00031aad) main_mup_eq_pane_t4_ParamLimits

0x3f52,	// (0x00031aad) main_mup_eq_pane_t4

0x3f6e,	// (0x00031ac9) main_mup_eq_pane_t5_ParamLimits

0x3f6e,	// (0x00031ac9) main_mup_eq_pane_t5

0x3f8a,	// (0x00031ae5) main_mup_eq_pane_t6_ParamLimits

0x3f8a,	// (0x00031ae5) main_mup_eq_pane_t6

0x3f9e,	// (0x00031af9) main_mup_eq_pane_t7_ParamLimits

0x3f9e,	// (0x00031af9) main_mup_eq_pane_t7

0x3fb2,	// (0x00031b0d) main_mup_eq_pane_t8_ParamLimits

0x3fb2,	// (0x00031b0d) main_mup_eq_pane_t8

0x3fc6,	// (0x00031b21) main_mup_eq_pane_t9_ParamLimits

0x3fc6,	// (0x00031b21) main_mup_eq_pane_t9

0x3fe0,	// (0x00031b3b) main_mup_eq_pane_t10_ParamLimits

0x3fe0,	// (0x00031b3b) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0003cfb5) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0003cfb5) main_mup_eq_pane_t

0x408f,	// (0x00031bea) mup_equalizer_pane_cp5_ParamLimits

0x40a3,	// (0x00031bfe) mup_equalizer_pane_cp6_ParamLimits

0x40b7,	// (0x00031c12) mup_equalizer_pane_cp7_ParamLimits

0x1a23,	// (0x0002f57e) main_gallery_pane

0xc52b,	// (0x0003a086) smil2_volume_pane

0xc533,	// (0x0003a08e) smil_status_volume_pane_g1_ParamLimits

0xc546,	// (0x0003a0a1) smil_status_volume_pane_g2_ParamLimits

0x4bca,	// (0x00032725) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0003d16b) smil_status_volume_pane_g_ParamLimits

0xc698,	// (0x0003a1f3) bg_popup_window_pane_cp07_ParamLimits

0xc6a6,	// (0x0003a201) blid_firmament_pane

0x50f3,	// (0x00032c4e) aid_size_cell_gallery_ParamLimits

0x50f3,	// (0x00032c4e) aid_size_cell_gallery

0x5109,	// (0x00032c64) grid_gallery_pane_ParamLimits

0x5109,	// (0x00032c64) grid_gallery_pane

0x5122,	// (0x00032c7d) cell_gallery_pane_ParamLimits

0x5122,	// (0x00032c7d) cell_gallery_pane

0xc7c9,	// (0x0003a324) bg_cell_gallery_focus_pane_ParamLimits

0xc7c9,	// (0x0003a324) bg_cell_gallery_focus_pane

0xc7db,	// (0x0003a336) cell_gallery_pane_g1_ParamLimits

0xc7db,	// (0x0003a336) cell_gallery_pane_g1

0x516b,	// (0x00032cc6) cell_gallery_pane_g2_ParamLimits

0x516b,	// (0x00032cc6) cell_gallery_pane_g2

0x5178,	// (0x00032cd3) cell_gallery_pane_g3_ParamLimits

0x5178,	// (0x00032cd3) cell_gallery_pane_g3

0xc7e7,	// (0x0003a342) cell_gallery_pane_g4_ParamLimits

0xc7e7,	// (0x0003a342) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0003d219) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0003d219) cell_gallery_pane_g

0xc7f3,	// (0x0003a34e) bg_cell_gallery_focus_pane_g1

0xc7fb,	// (0x0003a356) bg_cell_gallery_focus_pane_g2

0xc803,	// (0x0003a35e) bg_cell_gallery_focus_pane_g3

0xc80b,	// (0x0003a366) bg_cell_gallery_focus_pane_g4

0xc813,	// (0x0003a36e) bg_cell_gallery_focus_pane_g5

0xc81b,	// (0x0003a376) bg_cell_gallery_focus_pane_g6

0xc823,	// (0x0003a37e) bg_cell_gallery_focus_pane_g7

0xc82b,	// (0x0003a386) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0003d222) bg_cell_gallery_focus_pane_g

0xc833,	// (0x0003a38e) aid_firma_cardinal

0xc847,	// (0x0003a3a2) blid_firmament_pane_t1

0xc85e,	// (0x0003a3b9) blid_firmament_pane_t2

0xc875,	// (0x0003a3d0) blid_firmament_pane_t3

0xc88c,	// (0x0003a3e7) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0003d233) blid_firmament_pane_t

0xc8a3,	// (0x0003a3fe) blid_sat_info_pane

0xc8b3,	// (0x0003a40e) blid_sat_info_pane_g1

0xc8b3,	// (0x0003a40e) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0003d23c) blid_sat_info_pane_g

0xc8bd,	// (0x0003a418) blid_sat_info_pane_t1

0xc8cb,	// (0x0003a426) smil2_volume_content_pane

0xc8d4,	// (0x0003a42f) smil2_volume_pane_g1

0xc8dc,	// (0x0003a437) smil2_volume_content_pane_g1

0xc8e5,	// (0x0003a440) smil2_volume_content_pane_g2

0xc8ee,	// (0x0003a449) smil2_volume_content_pane_g3

0xc8f7,	// (0x0003a452) smil2_volume_content_pane_g4

0xc900,	// (0x0003a45b) smil2_volume_content_pane_g5

0xc909,	// (0x0003a464) smil2_volume_content_pane_g6

0xc912,	// (0x0003a46d) smil2_volume_content_pane_g7

0xc91b,	// (0x0003a476) smil2_volume_content_pane_g8

0xc924,	// (0x0003a47f) smil2_volume_content_pane_g9

0xc92d,	// (0x0003a488) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0003d241) smil2_volume_content_pane_g

0x20f8,	// (0x0002fc53) cale_week_day_heading_pane_t1_ParamLimits

0x213d,	// (0x0002fc98) cale_week_day_heading_pane_t2_ParamLimits

0x2187,	// (0x0002fce2) cale_week_day_heading_pane_t3_ParamLimits

0x21d1,	// (0x0002fd2c) cale_week_day_heading_pane_t4_ParamLimits

0x221b,	// (0x0002fd76) cale_week_day_heading_pane_t5_ParamLimits

0x226d,	// (0x0002fdc8) cale_week_day_heading_pane_t6_ParamLimits

0x22bf,	// (0x0002fe1a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0003cd2d) cale_week_day_heading_pane_t_ParamLimits

0xa49c,	// (0x00037ff7) bg_cale_side_pane_ParamLimits

0x054a,	// (0x0002e0a5) cale_week_time_pane_t1_ParamLimits

0x0564,	// (0x0002e0bf) cale_week_time_pane_t2_ParamLimits

0x057e,	// (0x0002e0d9) cale_week_time_pane_t3_ParamLimits

0x0598,	// (0x0002e0f3) cale_week_time_pane_t4_ParamLimits

0x05b2,	// (0x0002e10d) cale_week_time_pane_t5_ParamLimits

0x05cc,	// (0x0002e127) cale_week_time_pane_t6_ParamLimits

0x05e6,	// (0x0002e141) cale_week_time_pane_t7_ParamLimits

0x0600,	// (0x0002e15b) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0003cd3c) cale_week_time_pane_t_ParamLimits

0x2304,	// (0x0002fe5f) cell_cale_week_pane_g2_ParamLimits

0xa49c,	// (0x00037ff7) bg_cale_side_pane_cp01_ParamLimits

0x3577,	// (0x000310d2) cale_month_week_pane_t1_ParamLimits

0x3590,	// (0x000310eb) cale_month_week_pane_t2_ParamLimits

0x35a9,	// (0x00031104) cale_month_week_pane_t3_ParamLimits

0x35c2,	// (0x0003111d) cale_month_week_pane_t4_ParamLimits

0x35db,	// (0x00031136) cale_month_week_pane_t5_ParamLimits

0x35f4,	// (0x0003114f) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0003ce15) cale_month_week_pane_t_ParamLimits

0x3761,	// (0x000312bc) cell_cale_month_pane_g1_ParamLimits

0x1a23,	// (0x0002f57e) main_cale_event_viewer_pane

0x9bf4,	// (0x0003774f) listscroll_cale_event_viewer_pane

0xc936,	// (0x0003a491) list_cale_ev_pane

0xc93e,	// (0x0003a499) scroll_pane_cp023

0xc94a,	// (0x0003a4a5) field_cale_ev_pane_ParamLimits

0xc94a,	// (0x0003a4a5) field_cale_ev_pane

0xc968,	// (0x0003a4c3) field_cale_ev_content_pane_ParamLimits

0xc968,	// (0x0003a4c3) field_cale_ev_content_pane

0xc974,	// (0x0003a4cf) field_cale_ev_pane_g1_ParamLimits

0xc974,	// (0x0003a4cf) field_cale_ev_pane_g1

0xc980,	// (0x0003a4db) field_cale_ev_pane_g2_ParamLimits

0xc980,	// (0x0003a4db) field_cale_ev_pane_g2

0xc998,	// (0x0003a4f3) field_cale_ev_pane_g3_ParamLimits

0xc998,	// (0x0003a4f3) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0003d256) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0003d256) field_cale_ev_pane_g

0xc9b0,	// (0x0003a50b) field_cale_ev_pane_t1_ParamLimits

0xc9b0,	// (0x0003a50b) field_cale_ev_pane_t1

0xc9c7,	// (0x0003a522) field_cale_ev_content_pane_t1_ParamLimits

0xc9c7,	// (0x0003a522) field_cale_ev_content_pane_t1

0x4161,	// (0x00031cbc) bg_button_pane_cp01

0x1e49,	// (0x0002f9a4) listscroll_cale_week_pane_ParamLimits

0xa446,	// (0x00037fa1) popup_toolbar_window_cp01

0xa46d,	// (0x00037fc8) listscroll_cale_week_pane_t1_ParamLimits

0x1e49,	// (0x0002f9a4) listscroll_cale_day_pane_ParamLimits

0xa446,	// (0x00037fa1) popup_toolbar_window_cp02

0xa95f,	// (0x000384ba) listscroll_cale_day_pane_t1_ParamLimits

0x0702,	// (0x0002e25d) main_cale_month_pane_ParamLimits

0x4ade,	// (0x00032639) popup_toolbar_window_cp03_ParamLimits

0x4ade,	// (0x00032639) popup_toolbar_window_cp03

0x43be,	// (0x00031f19) main_image_pane_g2_ParamLimits

0x43be,	// (0x00031f19) main_image_pane_g2

0x43cf,	// (0x00031f2a) main_image_pane_g3_ParamLimits

0x43cf,	// (0x00031f2a) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0003d047) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0003d047) main_image_pane_g

0xb336,	// (0x00038e91) main_image_pane_t1_ParamLimits

0x43e0,	// (0x00031f3b) main_image_pane_t2_ParamLimits

0x43e0,	// (0x00031f3b) main_image_pane_t2

0x43f2,	// (0x00031f4d) main_image_pane_t3_ParamLimits

0x43f2,	// (0x00031f4d) main_image_pane_t3

0x441a,	// (0x00031f75) main_image_pane_t4_ParamLimits

0x441a,	// (0x00031f75) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0003d04e) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0003d04e) main_image_pane_t

0x443a,	// (0x00031f95) popup_image_details_window_cp01

0x4444,	// (0x00031f9f) popup_toobar_trans_pane_cp01_ParamLimits

0x4444,	// (0x00031f9f) popup_toobar_trans_pane_cp01

0x081b,	// (0x0002e376) popup_image_details_window_ParamLimits

0x081b,	// (0x0002e376) popup_image_details_window

0x4ab1,	// (0x0003260c) popup_image_focus_window

0x09a0,	// (0x0002e4fb) camera2_autofocus_pane_ParamLimits

0x09a0,	// (0x0002e4fb) camera2_autofocus_pane

0x9bf4,	// (0x0003774f) bg_popup_sub_pane_cp06

0xc9e5,	// (0x0003a540) popup_image_focus_window_g1

0xc9ed,	// (0x0003a548) popup_image_focus_window_g2

0xc9f5,	// (0x0003a550) popup_image_focus_window_g3

0xc9fd,	// (0x0003a558) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0003d25d) popup_image_focus_window_g

0xca05,	// (0x0003a560) popup_image_focus_window_t1

0xca13,	// (0x0003a56e) popup_image_focus_window_t2

0xca23,	// (0x0003a57e) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0003d266) popup_image_focus_window_t

0xca31,	// (0x0003a58c) camera2_autofocus_pane_g1

0xa6b4,	// (0x0003820f) bg_tb_trans_pane_cp01

0xca3f,	// (0x0003a59a) popup_image_details_window_g1

0xca52,	// (0x0003a5ad) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0003d278) popup_image_details_window_g

0xca7b,	// (0x0003a5d6) popup_image_details_window_t1

0xca99,	// (0x0003a5f4) popup_image_details_window_t2

0xcab2,	// (0x0003a60d) popup_image_details_window_t3

0xcac6,	// (0x0003a621) popup_image_details_window_t4

0xcae1,	// (0x0003a63c) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0003d27f) popup_image_details_window_t

0xa31d,	// (0x00037e78) bg_calc_paper_pane_ParamLimits

0x1a23,	// (0x0002f57e) grid_highlight_pane_cp013

0x1c9d,	// (0x0002f7f8) list_calc_pane_ParamLimits

0x1caf,	// (0x0002f80a) scroll_pane_cp024

0xa331,	// (0x00037e8c) bg_calc_display_pane_ParamLimits

0x04a1,	// (0x0002dffc) calc_display_pane_t1_ParamLimits

0x04b3,	// (0x0002e00e) calc_display_pane_t2_ParamLimits

0x1cb7,	// (0x0002f812) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0003ccaf) calc_display_pane_t_ParamLimits

0x0514,	// (0x0002e06f) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0003cccc) cell_calc_pane_g

0x051d,	// (0x0002e078) cell_calc_pane_t1

0xa390,	// (0x00037eeb) grid_highlight_pane_cp02_ParamLimits

0xa3a6,	// (0x00037f01) toolbar_button_pane_cp01_ParamLimits

0xa3a6,	// (0x00037f01) toolbar_button_pane_cp01

0xb37b,	// (0x00038ed6) temp_image_control_pane_ParamLimits

0xb37b,	// (0x00038ed6) temp_image_control_pane

0x1a09,	// (0x0002f564) main_mp3_pane

0xcafb,	// (0x0003a656) temp_image_control_pane_g1_ParamLimits

0xcafb,	// (0x0003a656) temp_image_control_pane_g1

0xcb09,	// (0x0003a664) temp_image_control_pane_g2_ParamLimits

0xcb09,	// (0x0003a664) temp_image_control_pane_g2

0xcb1b,	// (0x0003a676) temp_image_control_pane_g3_ParamLimits

0xcb1b,	// (0x0003a676) temp_image_control_pane_g3

0x51b5,	// (0x00032d10) temp_image_control_pane_g4_ParamLimits

0x51b5,	// (0x00032d10) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0003d28a) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0003d28a) temp_image_control_pane_g

0xcafb,	// (0x0003a656) main_mp3_pane_g1

0x51c8,	// (0x00032d23) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0003d293) main_mp3_pane_g

0xcb5e,	// (0x0003a6b9) main_mp3_pane_t1

0xa4f7,	// (0x00038052) main_camera_pane_g8_ParamLimits

0xa4f7,	// (0x00038052) main_camera_pane_g8

0x25c0,	// (0x0003011b) main_video_pane_g7_ParamLimits

0x25c0,	// (0x0003011b) main_video_pane_g7

0x4dc5,	// (0x00032920) main_camera2_pane_t7_ParamLimits

0x4dc5,	// (0x00032920) main_camera2_pane_t7

0xa63f,	// (0x0003819a) scroll_pane_cp025_ParamLimits

0xa63f,	// (0x0003819a) scroll_pane_cp025

0xa653,	// (0x000381ae) scroll_pane_cp026_ParamLimits

0xa653,	// (0x000381ae) scroll_pane_cp026

0xa662,	// (0x000381bd) wml_content_pane_ParamLimits

0x1a23,	// (0x0002f57e) main_touch_calib_pane

0x529c,	// (0x00032df7) main_touch_calib_pane_g1

0x52ae,	// (0x00032e09) main_touch_calib_pane_g2

0x52c0,	// (0x00032e1b) main_touch_calib_pane_g3

0x52d2,	// (0x00032e2d) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0003d2b1) main_touch_calib_pane_g

0x52e4,	// (0x00032e3f) main_touch_calib_pane_t1

0x52fe,	// (0x00032e59) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0003d2ba) main_touch_calib_pane_t

0xaec8,	// (0x00038a23) mup_progress_pane_cp02

0xaefd,	// (0x00038a58) navi_pane_g1

0xafb8,	// (0x00038b13) navi_pane_mp_t3

0x1a09,	// (0x0002f564) main_mp3_pane_ParamLimits

0x4af3,	// (0x0003264e) navi_pane_ParamLimits

0xcafb,	// (0x0003a656) main_mp3_pane_g1_ParamLimits

0x51c8,	// (0x00032d23) main_mp3_pane_g2_ParamLimits

0x51d6,	// (0x00032d31) main_mp3_pane_g3_ParamLimits

0x51d6,	// (0x00032d31) main_mp3_pane_g3

0x51e4,	// (0x00032d3f) main_mp3_pane_g4_ParamLimits

0x51e4,	// (0x00032d3f) main_mp3_pane_g4

0xcb2b,	// (0x0003a686) main_mp3_pane_g5_ParamLimits

0xcb2b,	// (0x0003a686) main_mp3_pane_g5

0xcb39,	// (0x0003a694) main_mp3_pane_g6_ParamLimits

0xcb39,	// (0x0003a694) main_mp3_pane_g6

0xcb46,	// (0x0003a6a1) main_mp3_pane_g7_ParamLimits

0xcb46,	// (0x0003a6a1) main_mp3_pane_g7

0xcb52,	// (0x0003a6ad) main_mp3_pane_g8_ParamLimits

0xcb52,	// (0x0003a6ad) main_mp3_pane_g8

0xf738,	// (0x0003d293) main_mp3_pane_g_ParamLimits

0x51f0,	// (0x00032d4b) main_mp3_pane_t2

0x51fe,	// (0x00032d59) main_mp3_pane_t3

0xcb6c,	// (0x0003a6c7) main_mp3_pane_t4

0xcb7a,	// (0x0003a6d5) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0003d2a4) main_mp3_pane_t

0xcb88,	// (0x0003a6e3) mup_progress_pane_cp01

0x197e,	// (0x0002f4d9) aid_zoom_text_secondary2

0xc936,	// (0x0003a491) list_cale_ev2_pane

0xc93e,	// (0x0003a499) scroll_pane_cp023_ParamLimits

0x5354,	// (0x00032eaf) field_cale_ev2_pane_ParamLimits

0x5354,	// (0x00032eaf) field_cale_ev2_pane

0x5374,	// (0x00032ecf) field_cale_ev2_pane_g1_ParamLimits

0x5374,	// (0x00032ecf) field_cale_ev2_pane_g1

0x5380,	// (0x00032edb) field_cale_ev2_pane_g2_ParamLimits

0x5380,	// (0x00032edb) field_cale_ev2_pane_g2

0x5398,	// (0x00032ef3) field_cale_ev2_pane_g3_ParamLimits

0x5398,	// (0x00032ef3) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0003d2c5) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0003d2c5) field_cale_ev2_pane_g

0x53b0,	// (0x00032f0b) field_cale_ev2_pane_t1_ParamLimits

0x53b0,	// (0x00032f0b) field_cale_ev2_pane_t1

0x53c7,	// (0x00032f22) field_cale_ev2_pane_t2_ParamLimits

0x53c7,	// (0x00032f22) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0003d2ce) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0003d2ce) field_cale_ev2_pane_t

0x4273,	// (0x00031dce) main_postcard_pane_g5_ParamLimits

0x4273,	// (0x00031dce) main_postcard_pane_g5

0x4289,	// (0x00031de4) main_postcard_pane_g6_ParamLimits

0x4289,	// (0x00031de4) main_postcard_pane_g6

0x238c,	// (0x0002fee7) camera2_autofocus_pane_cp_ParamLimits

0x238c,	// (0x0002fee7) camera2_autofocus_pane_cp

0x1a09,	// (0x0002f564) main_mup3_pane

0x53dc,	// (0x00032f37) main_mup3_pane_g1_ParamLimits

0x53dc,	// (0x00032f37) main_mup3_pane_g1

0x53fe,	// (0x00032f59) main_mup3_pane_g2_ParamLimits

0x53fe,	// (0x00032f59) main_mup3_pane_g2

0x547c,	// (0x00032fd7) main_mup3_pane_g3_ParamLimits

0x547c,	// (0x00032fd7) main_mup3_pane_g3

0x54c2,	// (0x0003301d) main_mup3_pane_g4_ParamLimits

0x54c2,	// (0x0003301d) main_mup3_pane_g4

0x5508,	// (0x00033063) main_mup3_pane_g5_ParamLimits

0x5508,	// (0x00033063) main_mup3_pane_g5

0x554e,	// (0x000330a9) main_mup3_pane_g6_ParamLimits

0x554e,	// (0x000330a9) main_mup3_pane_g6

0xcbbc,	// (0x0003a717) main_mup3_pane_g7_ParamLimits

0xcbbc,	// (0x0003a717) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0003d2de) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0003d2de) main_mup3_pane_g

0x55cc,	// (0x00033127) main_mup3_pane_t1_ParamLimits

0x55cc,	// (0x00033127) main_mup3_pane_t1

0x5640,	// (0x0003319b) main_mup3_pane_t2_ParamLimits

0x5640,	// (0x0003319b) main_mup3_pane_t2

0x5714,	// (0x0003326f) main_mup3_pane_t4_ParamLimits

0x5714,	// (0x0003326f) main_mup3_pane_t4

0x576a,	// (0x000332c5) main_mup3_pane_t5_ParamLimits

0x576a,	// (0x000332c5) main_mup3_pane_t5

0x5826,	// (0x00033381) main_mup3_pane_t6_ParamLimits

0x5826,	// (0x00033381) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0003d2ef) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0003d2ef) main_mup3_pane_t

0x58de,	// (0x00033439) mup3_progress_pane_ParamLimits

0x58de,	// (0x00033439) mup3_progress_pane

0x5974,	// (0x000334cf) popup_mup3_control_window_ParamLimits

0x5974,	// (0x000334cf) popup_mup3_control_window

0xcbca,	// (0x0003a725) popup_mup3_text_window

0x59a6,	// (0x00033501) mup3_progress_pane_t1

0x59c5,	// (0x00033520) mup3_progress_pane_t2

0xcbd2,	// (0x0003a72d) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0003d2fc) mup3_progress_pane_t

0xcbef,	// (0x0003a74a) mup_progress_pane_cp03

0x9bf4,	// (0x0003774f) bg_tb_trans_pane_cp04

0x59e4,	// (0x0003353f) mup3_volume_pane

0x59ec,	// (0x00033547) popup_mup3_control_window_g1

0x59f5,	// (0x00033550) mup3_volume_pane_g1

0x59fe,	// (0x00033559) mup3_volume_pane_g2

0x5a07,	// (0x00033562) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0003d303) mup3_volume_pane_g

0x9bf4,	// (0x0003774f) bg_tb_trans_pane_cp03

0xcbff,	// (0x0003a75a) popup_mup3_text_window_g1

0xcc07,	// (0x0003a762) popup_mup3_text_window_t1

0xa379,	// (0x00037ed4) list_calc_item_pane_g1_ParamLimits

0xc606,	// (0x0003a161) mup_volume_pane_cp_g1

0x5318,	// (0x00032e73) main_touch_calib_pane_t3

0x532c,	// (0x00032e87) main_touch_calib_pane_t4

0x5340,	// (0x00032e9b) main_touch_calib_pane_t5

0x196a,	// (0x0002f4c5) aid_cell_size_toolbar2

0x1972,	// (0x0002f4cd) aid_popup3_width_pane

0x197e,	// (0x0002f4d9) aid_zoom_text_msg_primary

0x0676,	// (0x0002e1d1) vorec_t7

0xa33d,	// (0x00037e98) bg_calc_paper_pane_g1_ParamLimits

0xa349,	// (0x00037ea4) bg_calc_paper_pane_g2_ParamLimits

0xa355,	// (0x00037eb0) bg_calc_paper_pane_g3_ParamLimits

0xa361,	// (0x00037ebc) bg_calc_paper_pane_g4_ParamLimits

0xa36d,	// (0x00037ec8) bg_calc_paper_pane_g5_ParamLimits

0x1cc9,	// (0x0002f824) bg_calc_paper_pane_g6_ParamLimits

0x1cd8,	// (0x0002f833) bg_calc_paper_pane_g7_ParamLimits

0x1ce7,	// (0x0002f842) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0003ccb6) bg_calc_paper_pane_g_ParamLimits

0x1cfa,	// (0x0002f855) calc_bg_paper_pane_g9_ParamLimits

0x24d7,	// (0x00030032) image_qvga_pane_ParamLimits

0x24d7,	// (0x00030032) image_qvga_pane

0xa26c,	// (0x00037dc7) bg_popup_sub_pane_cp04_ParamLimits

0xb2b2,	// (0x00038e0d) popup_mup_playback_window_g1_ParamLimits

0xb2be,	// (0x00038e19) popup_mup_playback_window_t1_ParamLimits

0xb2d3,	// (0x00038e2e) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0003d042) popup_mup_playback_window_t_ParamLimits

0x4df3,	// (0x0003294e) main_mup2_pane_g3_ParamLimits

0x4df3,	// (0x0003294e) main_mup2_pane_g3

0x28e7,	// (0x00030442) popup_toolbar_window_cp04

0xb6b5,	// (0x00039210) popup_call2_audio_second_window_g3_ParamLimits

0xb6b5,	// (0x00039210) popup_call2_audio_second_window_g3

0xbabf,	// (0x0003961a) popup_call2_audio_first_window_g4_ParamLimits

0xbabf,	// (0x0003961a) popup_call2_audio_first_window_g4

0xc13e,	// (0x00039c99) popup_call2_audio_in_window_g4_ParamLimits

0xc13e,	// (0x00039c99) popup_call2_audio_in_window_g4

0x43a0,	// (0x00031efb) aid_area_sk_bg_cut_ParamLimits

0x43a0,	// (0x00031efb) aid_area_sk_bg_cut

0xb2e8,	// (0x00038e43) aid_area_sk_bg_cut_2_ParamLimits

0xb2e8,	// (0x00038e43) aid_area_sk_bg_cut_2

0x515b,	// (0x00032cb6) aid_placing_details_win

0x5163,	// (0x00032cbe) aid_placing_details_win_2

0xca31,	// (0x0003a58c) camera2_autofocus_pane_g1_ParamLimits

0x035d,	// (0x0002deb8) popup_fixed_preview_cale_window_ParamLimits

0x035d,	// (0x0002deb8) popup_fixed_preview_cale_window

0xb03e,	// (0x00038b99) navi_slider_pane_g3

0xb047,	// (0x00038ba2) navi_slider_pane_g4

0xb050,	// (0x00038bab) navi_slider_pane_g5

0xb03e,	// (0x00038b99) navi_slider_pane_g6

0x3cc8,	// (0x00031823) navi_slider_pane_g7

0xb171,	// (0x00038ccc) mup_scale_pane_g3

0xb17a,	// (0x00038cd5) mup_scale_pane_g4

0xb183,	// (0x00038cde) mup_scale_pane_g5

0x40cb,	// (0x00031c26) mup_scale_pane_g6

0x40d4,	// (0x00031c2f) mup_scale_pane_g7

0xb03e,	// (0x00038b99) cams2_slider_pane_g3

0xc688,	// (0x0003a1e3) cams2_slider_pane_g4

0x50a8,	// (0x00032c03) cams2_slider_pane_g5

0xb03e,	// (0x00038b99) cams2_slider_pane_g6

0x50b0,	// (0x00032c0b) cams2_slider_pane_g7

0xc8b3,	// (0x0003a40e) camera2_autofocus_pane_cp_g1

0xc49f,	// (0x00039ffa) bg_popup_preview_window_pane_cp02_ParamLimits

0xc49f,	// (0x00039ffa) bg_popup_preview_window_pane_cp02

0xcc15,	// (0x0003a770) list_fp_cale_pane_ParamLimits

0xcc15,	// (0x0003a770) list_fp_cale_pane

0xcc21,	// (0x0003a77c) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc21,	// (0x0003a77c) popup_fixed_preview_cale_window_t1

0x5a10,	// (0x0003356b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a10,	// (0x0003356b) popup_fixed_preview_cale_window_t2

0x5a25,	// (0x00033580) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a25,	// (0x00033580) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0003d30a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0003d30a) popup_fixed_preview_cale_window_t

0x5a3a,	// (0x00033595) list_single_fp_cale_pane_ParamLimits

0x5a3a,	// (0x00033595) list_single_fp_cale_pane

0xcc3f,	// (0x0003a79a) list_single_fp_cale_pane_g1_ParamLimits

0xcc3f,	// (0x0003a79a) list_single_fp_cale_pane_g1

0xcc4b,	// (0x0003a7a6) list_single_fp_cale_pane_g2_ParamLimits

0xcc4b,	// (0x0003a7a6) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0003d311) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0003d311) list_single_fp_cale_pane_g

0xcc64,	// (0x0003a7bf) list_single_fp_cale_pane_t1_ParamLimits

0xcc64,	// (0x0003a7bf) list_single_fp_cale_pane_t1

0xcc76,	// (0x0003a7d1) list_single_fp_cale_pane_t2_ParamLimits

0xcc76,	// (0x0003a7d1) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0003d318) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0003d318) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a23,	// (0x0002f57e) main_dialer_pane

0x5a4f,	// (0x000335aa) aid_cell_size_keypad

0x5a59,	// (0x000335b4) dialer_ne_pane

0x5a61,	// (0x000335bc) grid_dialer_command_1_pane

0x5a69,	// (0x000335c4) grid_dialer_command_2_pane

0x5a71,	// (0x000335cc) grid_dialer_keypad_pane

0x5a83,	// (0x000335de) bg_popup_call_pane_cp06_ParamLimits

0x5a83,	// (0x000335de) bg_popup_call_pane_cp06

0x5a8f,	// (0x000335ea) dialer_ne_clear_pane_ParamLimits

0x5a8f,	// (0x000335ea) dialer_ne_clear_pane

0xcca9,	// (0x0003a804) dialer_ne_pane_g1

0xccb1,	// (0x0003a80c) dialer_ne_pane_t1_ParamLimits

0xccb1,	// (0x0003a80c) dialer_ne_pane_t1

0x5a9b,	// (0x000335f6) dialer_ne_pane_t2_ParamLimits

0x5a9b,	// (0x000335f6) dialer_ne_pane_t2

0x5ac5,	// (0x00033620) dialer_ne_pane_t3_ParamLimits

0x5ac5,	// (0x00033620) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0003d31d) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0003d31d) dialer_ne_pane_t

0x5af5,	// (0x00033650) dialer_ne_pane_t3_copy1_ParamLimits

0x5af5,	// (0x00033650) dialer_ne_pane_t3_copy1

0x5b24,	// (0x0003367f) cell_dialer_keypad_pane_ParamLimits

0x5b24,	// (0x0003367f) cell_dialer_keypad_pane

0x5b3b,	// (0x00033696) cell_dialer_command_1_pane_ParamLimits

0x5b3b,	// (0x00033696) cell_dialer_command_1_pane

0x5b51,	// (0x000336ac) cell_dialer_command_2_pane_ParamLimits

0x5b51,	// (0x000336ac) cell_dialer_command_2_pane

0xccc3,	// (0x0003a81e) bg_button_pane_cp02_ParamLimits

0xccc3,	// (0x0003a81e) bg_button_pane_cp02

0x5b60,	// (0x000336bb) cell_dialer_keypad_pane_g1_ParamLimits

0x5b60,	// (0x000336bb) cell_dialer_keypad_pane_g1

0xccc3,	// (0x0003a81e) bg_button_pane_cp03_ParamLimits

0xccc3,	// (0x0003a81e) bg_button_pane_cp03

0x5b74,	// (0x000336cf) cell_dialer_command_1_pane_g1_ParamLimits

0x5b74,	// (0x000336cf) cell_dialer_command_1_pane_g1

0xcccf,	// (0x0003a82a) bg_button_pane_cp04

0x5b88,	// (0x000336e3) cell_dialer_command_2_pane_g1

0xb02d,	// (0x00038b88) bg_button_pane_cp06

0xccd7,	// (0x0003a832) dialer_ne_clear_pane_g1

0xaf09,	// (0x00038a64) navi_pane_g2

0xaf37,	// (0x00038a92) navi_pane_g3

0x0002,

0xf3ea,	// (0x0003cf45) navi_pane_g

0xafc6,	// (0x00038b21) navi_pane_mv_g2

0xafed,	// (0x00038b48) navi_pane_mv_g5

0x3c7d,	// (0x000317d8) navi_pane_mv_t1

0xa331,	// (0x00037e8c) main_clock2_pane

0x5bd3,	// (0x0003372e) main_clock2_list_pane_ParamLimits

0x5bd3,	// (0x0003372e) main_clock2_list_pane

0x5c0b,	// (0x00033766) main_clock2_pane_t1_ParamLimits

0x5c0b,	// (0x00033766) main_clock2_pane_t1

0x5c47,	// (0x000337a2) main_clock2_pane_t2_ParamLimits

0x5c47,	// (0x000337a2) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003d324) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003d324) main_clock2_pane_t

0x5ce5,	// (0x00033840) popup_clock_analogue_window_cp03_ParamLimits

0x5ce5,	// (0x00033840) popup_clock_analogue_window_cp03

0x5d0a,	// (0x00033865) popup_clock_digital_window_cp02_ParamLimits

0x5d0a,	// (0x00033865) popup_clock_digital_window_cp02

0x5d7b,	// (0x000338d6) main_clock2_list_single_pane_ParamLimits

0x5d7b,	// (0x000338d6) main_clock2_list_single_pane

0xb02d,	// (0x00038b88) list_highlight_pane_cp05

0xccf5,	// (0x0003a850) main_clock2_list_single_pane_t1

0x28e7,	// (0x00030442) popup_toolbar_window_cp04_ParamLimits

0x5185,	// (0x00032ce0) camera2_autofocus_pane_g2_ParamLimits

0x5185,	// (0x00032ce0) camera2_autofocus_pane_g2

0x5191,	// (0x00032cec) camera2_autofocus_pane_g3_ParamLimits

0x5191,	// (0x00032cec) camera2_autofocus_pane_g3

0x519d,	// (0x00032cf8) camera2_autofocus_pane_g4_ParamLimits

0x519d,	// (0x00032cf8) camera2_autofocus_pane_g4

0x51a9,	// (0x00032d04) camera2_autofocus_pane_g5_ParamLimits

0x51a9,	// (0x00032d04) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0003d26d) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0003d26d) camera2_autofocus_pane_g

0xcb9c,	// (0x0003a6f7) camera2_autofocus_pane_cp_g2

0xcba4,	// (0x0003a6ff) camera2_autofocus_pane_cp_g3

0xcbac,	// (0x0003a707) camera2_autofocus_pane_cp_g4

0xcbb4,	// (0x0003a70f) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0003d2d3) camera2_autofocus_pane_cp_g

0x5a7b,	// (0x000335d6) popup_dialer_spcha_window

0x9bf4,	// (0x0003774f) bg_popup_sub_pane_cp07

0xcd03,	// (0x0003a85e) list_spcha_pane

0xcd0b,	// (0x0003a866) list_single_spcha_pane_ParamLimits

0xcd0b,	// (0x0003a866) list_single_spcha_pane

0x9bf4,	// (0x0003774f) list_highlight_pane_cp06

0xcd1c,	// (0x0003a877) list_single_spcha_pane_t1

0xbee8,	// (0x00039a43) popup_call2_audio_out_window_g4_ParamLimits

0xbee8,	// (0x00039a43) popup_call2_audio_out_window_g4

0x1a23,	// (0x0002f57e) main_imed2_pane

0x4ab9,	// (0x00032614) popup_imed_adjust2_window

0x0833,	// (0x0002e38e) popup_imed_trans_window_ParamLimits

0x0833,	// (0x0002e38e) popup_imed_trans_window

0xc6f1,	// (0x0003a24c) popup_blid_sat_info2_window_t1

0xc6ff,	// (0x0003a25a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0003d202) popup_blid_sat_info2_window_t

0x5dad,	// (0x00033908) aid_size_cell_colour_35

0x5dcd,	// (0x00033928) aid_size_cell_colour_112

0x5ded,	// (0x00033948) aid_size_cell_effect

0xc4ab,	// (0x0003a006) bg_tb_trans_pane_cp02

0xaa68,	// (0x000385c3) heading_imed_pane

0x5e0d,	// (0x00033968) listscroll_imed_pane

0xcd2a,	// (0x0003a885) heading_imed_pane_g1

0xcd32,	// (0x0003a88d) heading_imed_pane_t1

0xcd40,	// (0x0003a89b) grid_imed_colour_35_pane_ParamLimits

0xcd40,	// (0x0003a89b) grid_imed_colour_35_pane

0x5e19,	// (0x00033974) grid_imed_effect_pane

0xcd57,	// (0x0003a8b2) list_imed_aspect_pane

0x5e2f,	// (0x0003398a) scroll_pane_cp027_ParamLimits

0x5e2f,	// (0x0003398a) scroll_pane_cp027

0x5e40,	// (0x0003399b) cell_imed_effect_pane_ParamLimits

0x5e40,	// (0x0003399b) cell_imed_effect_pane

0xcd5f,	// (0x0003a8ba) cell_imed_colour_pane_ParamLimits

0xcd5f,	// (0x0003a8ba) cell_imed_colour_pane

0xcda1,	// (0x0003a8fc) cell_imed_colour_pane_g1_ParamLimits

0xcda1,	// (0x0003a8fc) cell_imed_colour_pane_g1

0xcdb2,	// (0x0003a90d) hgihlgiht_grid_pane_cp016_ParamLimits

0xcdb2,	// (0x0003a90d) hgihlgiht_grid_pane_cp016

0x5e67,	// (0x000339c2) cell_imed_effect_pane_g1

0x5e6f,	// (0x000339ca) grid_highlight_pane_cp017

0xcdc3,	// (0x0003a91e) list_imed_single_pane_ParamLimits

0xcdc3,	// (0x0003a91e) list_imed_single_pane

0x9bf4,	// (0x0003774f) list_highlight_pane_cp07

0xcdd8,	// (0x0003a933) list_imed_aspect_pane_comp1_t1

0xc4ab,	// (0x0003a006) bg_tb_trans_pane_cp05

0xcdfa,	// (0x0003a955) popup_imed_adjust2_window_g1

0xce21,	// (0x0003a97c) popup_imed_adjust2_window_t1

0xce39,	// (0x0003a994) slider_imed_adjust_pane

0xce4d,	// (0x0003a9a8) slider_imed_adjust_pane_g1

0xce5d,	// (0x0003a9b8) slider_imed_adjust_pane_g2

0xce6d,	// (0x0003a9c8) slider_imed_adjust_pane_g3

0xce7e,	// (0x0003a9d9) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003d341) slider_imed_adjust_pane_g

0x5e78,	// (0x000339d3) aid_size_cell_clipart2

0x5e84,	// (0x000339df) grid_imed_clipart_pane

0xce8f,	// (0x0003a9ea) scroll_pane_cp031

0x5e8e,	// (0x000339e9) cell_imed_clipart_pane_ParamLimits

0x5e8e,	// (0x000339e9) cell_imed_clipart_pane

0x5eb0,	// (0x00033a0b) cell_imed_clipart_pane_g1

0x9bf4,	// (0x0003774f) grid_highlight_pane_cp014

0x5be8,	// (0x00033743) main_clock2_pane_g1_ParamLimits

0x5be8,	// (0x00033743) main_clock2_pane_g1

0x5d26,	// (0x00033881) aid_call2_pane_cp10

0x5d38,	// (0x00033893) aid_call_pane_cp10

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g1

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g2

0x5d4a,	// (0x000338a5) popup_clock_analogue_window_cp10_g3

0x5d4a,	// (0x000338a5) popup_clock_analogue_window_cp10_g4

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003d32f) popup_clock_analogue_window_cp10_g

0x5d5c,	// (0x000338b7) popup_clock_analogue_window_cp10_t1

0x0e77,	// (0x0002e9d2) clock_digital_number_pane_cp10_ParamLimits

0x0e77,	// (0x0002e9d2) clock_digital_number_pane_cp10

0x0e8f,	// (0x0002e9ea) clock_digital_number_pane_cp11_ParamLimits

0x0e8f,	// (0x0002e9ea) clock_digital_number_pane_cp11

0x0ea7,	// (0x0002ea02) clock_digital_number_pane_cp12_ParamLimits

0x0ea7,	// (0x0002ea02) clock_digital_number_pane_cp12

0x0ebf,	// (0x0002ea1a) clock_digital_number_pane_cp13_ParamLimits

0x0ebf,	// (0x0002ea1a) clock_digital_number_pane_cp13

0x0ed7,	// (0x0002ea32) clock_digital_separator_pane_cp10_ParamLimits

0x0ed7,	// (0x0002ea32) clock_digital_separator_pane_cp10

0x5d8d,	// (0x000338e8) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d8d,	// (0x000338e8) popup_clock_digital_window_cp02_t1

0xa264,	// (0x00037dbf) clock_digital_number_pane_cp10_g1

0xa264,	// (0x00037dbf) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003d34a) clock_digital_number_pane_cp10_g

0xa264,	// (0x00037dbf) clock_digital_separator_pane_cp10_g1

0xa264,	// (0x00037dbf) clock_digital_separator_pane_g2_cp10

0xaff5,	// (0x00038b50) navi_pane_vded_g4

0xaffe,	// (0x00038b59) navi_pane_vded_g5

0xb007,	// (0x00038b62) navi_pane_vded_t1

0x1a23,	// (0x0002f57e) main_vded_pane

0x5eb9,	// (0x00033a14) main_vded_pane_g1

0x5ec3,	// (0x00033a1e) main_vded_pane_g2

0x5ecd,	// (0x00033a28) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003d34f) main_vded_pane_g

0x5ed7,	// (0x00033a32) main_vded_pane_t1

0x5ee5,	// (0x00033a40) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003d356) main_vded_pane_t

0x5ef3,	// (0x00033a4e) vded_slider_pane

0x5efb,	// (0x00033a56) vded_video_pane

0xce97,	// (0x0003a9f2) vded_video_pane_g1

0x5f03,	// (0x00033a5e) vded_video_pane_g2

0xc8b3,	// (0x0003a40e) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003d35b) vded_video_pane_g

0xcea1,	// (0x0003a9fc) vded_slider_pane_g1

0xc606,	// (0x0003a161) vded_slider_pane_g2

0xceaa,	// (0x0003aa05) vded_slider_pane_g3

0xceb3,	// (0x0003aa0e) vded_slider_pane_g4

0xcebc,	// (0x0003aa17) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003d362) vded_slider_pane_g

0x595c,	// (0x000334b7) mup3_rocker_pane_ParamLimits

0x595c,	// (0x000334b7) mup3_rocker_pane

0x5f0c,	// (0x00033a67) mup3_control_keys_pane_g1

0x5f14,	// (0x00033a6f) mup3_control_keys_pane_g2

0x5f1c,	// (0x00033a77) mup3_control_keys_pane_g3

0x5f24,	// (0x00033a7f) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003d36d) mup3_control_keys_pane_g

0x0394,	// (0x0002deef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0394,	// (0x0002deef) popup_toolbar2_fixed_window_cp01

0x5990,	// (0x000334eb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5990,	// (0x000334eb) popup_toolbar2_fixed_window_cp02

0xb827,	// (0x00039382) popup_call2_audio_second_window_t4_ParamLimits

0xb827,	// (0x00039382) popup_call2_audio_second_window_t4

0xbd55,	// (0x000398b0) popup_call2_audio_first_window_t6_ParamLimits

0xbd55,	// (0x000398b0) popup_call2_audio_first_window_t6

0xbfeb,	// (0x00039b46) popup_call2_audio_out_window_t6_ParamLimits

0xbfeb,	// (0x00039b46) popup_call2_audio_out_window_t6

0x1a23,	// (0x0002f57e) main_vitu_pane

0x5f34,	// (0x00033a8f) aid_size_cell_itu_ParamLimits

0x5f34,	// (0x00033a8f) aid_size_cell_itu

0xa6b4,	// (0x0003820f) bg_popup_window_pane_cp08_ParamLimits

0xa6b4,	// (0x0003820f) bg_popup_window_pane_cp08

0x5f4a,	// (0x00033aa5) field_vitu_entry_pane_ParamLimits

0x5f4a,	// (0x00033aa5) field_vitu_entry_pane

0x5f61,	// (0x00033abc) grid_vitu_function_pane_ParamLimits

0x5f61,	// (0x00033abc) grid_vitu_function_pane

0x5f7c,	// (0x00033ad7) grid_vitu_itu_pane_ParamLimits

0x5f7c,	// (0x00033ad7) grid_vitu_itu_pane

0x5f9a,	// (0x00033af5) cell_vitu_itu_pane_ParamLimits

0x5f9a,	// (0x00033af5) cell_vitu_itu_pane

0x5fbc,	// (0x00033b17) cell_vitu_function_pane_ParamLimits

0x5fbc,	// (0x00033b17) cell_vitu_function_pane

0xa6b4,	// (0x0003820f) bg_popup_sub_pane_cp08_ParamLimits

0xa6b4,	// (0x0003820f) bg_popup_sub_pane_cp08

0x5fd5,	// (0x00033b30) field_vitu_entry_pane_t1_ParamLimits

0x5fd5,	// (0x00033b30) field_vitu_entry_pane_t1

0xcedd,	// (0x0003aa38) field_vitu_entry_pane_t2_ParamLimits

0xcedd,	// (0x0003aa38) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003d37b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003d37b) field_vitu_entry_pane_t

0xcefa,	// (0x0003aa55) bg_button_pane_cp05_ParamLimits

0xcefa,	// (0x0003aa55) bg_button_pane_cp05

0x5ff3,	// (0x00033b4e) cell_vitu_itu_pane_g1

0x600b,	// (0x00033b66) cell_vitu_itu_pane_t1_ParamLimits

0x600b,	// (0x00033b66) cell_vitu_itu_pane_t1

0x601d,	// (0x00033b78) cell_vitu_itu_pane_t2_ParamLimits

0x601d,	// (0x00033b78) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003d380) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003d380) cell_vitu_itu_pane_t

0xcf08,	// (0x0003aa63) bg_button_pane_cp07

0x6052,	// (0x00033bad) cell_vitu_function_pane_g1

0x1bc5,	// (0x0002f720) main_calc_pane_g1

0x01f4,	// (0x0002dd4f) aid_visual_content_pane

0x1a23,	// (0x0002f57e) main_vradio_pane

0x605b,	// (0x00033bb6) main_vradio_pane_g1_ParamLimits

0x605b,	// (0x00033bb6) main_vradio_pane_g1

0xcf12,	// (0x0003aa6d) main_vradio_pane_g2_ParamLimits

0xcf12,	// (0x0003aa6d) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003d387) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003d387) main_vradio_pane_g

0x6074,	// (0x00033bcf) main_vradio_pane_t1_ParamLimits

0x6074,	// (0x00033bcf) main_vradio_pane_t1

0x6089,	// (0x00033be4) main_vradio_pane_t2_ParamLimits

0x6089,	// (0x00033be4) main_vradio_pane_t2

0xcf1f,	// (0x0003aa7a) main_vradio_pane_t3_ParamLimits

0xcf1f,	// (0x0003aa7a) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003d38c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003d38c) main_vradio_pane_t

0x609e,	// (0x00033bf9) vradio_rocker_control_pane_ParamLimits

0x609e,	// (0x00033bf9) vradio_rocker_control_pane

0x60b0,	// (0x00033c0b) vradio_station_info_pane_ParamLimits

0x60b0,	// (0x00033c0b) vradio_station_info_pane

0xcf33,	// (0x0003aa8e) vradio_frequency_info_pane_ParamLimits

0xcf33,	// (0x0003aa8e) vradio_frequency_info_pane

0xc8b3,	// (0x0003a40e) vradio_station_info_pane_g1

0xcf42,	// (0x0003aa9d) vradio_station_info_pane_t1_ParamLimits

0xcf42,	// (0x0003aa9d) vradio_station_info_pane_t1

0xcf64,	// (0x0003aabf) vradio_station_info_pane_t2_ParamLimits

0xcf64,	// (0x0003aabf) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003d393) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003d393) vradio_station_info_pane_t

0xcf76,	// (0x0003aad1) vradio_tuning_pane

0xcf7e,	// (0x0003aad9) vradio_rocker_control_pane_g1

0xcf86,	// (0x0003aae1) vradio_rocker_control_pane_g2

0xcf8e,	// (0x0003aae9) vradio_rocker_control_pane_g3

0xcf96,	// (0x0003aaf1) vradio_rocker_control_pane_g4

0xcf9e,	// (0x0003aaf9) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003d398) vradio_rocker_control_pane_g

0x60c2,	// (0x00033c1d) vradio_frequency_info_pane_g1

0xcfa6,	// (0x0003ab01) vradio_frequency_info_pane_t1_ParamLimits

0xcfa6,	// (0x0003ab01) vradio_frequency_info_pane_t1

0x60cc,	// (0x00033c27) vradio_tuning_pane_g1

0x60d7,	// (0x00033c32) vradio_tuning_pane_t1

0x19c7,	// (0x0002f522) area_side_right_pane_ParamLimits

0x19c7,	// (0x0002f522) area_side_right_pane

0xc466,	// (0x00039fc1) status_small_pane_g1

0xc46e,	// (0x00039fc9) status_small_pane_g2

0xc477,	// (0x00039fd2) status_small_pane_g3

0xc480,	// (0x00039fdb) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0003d158) status_small_pane_g

0xc489,	// (0x00039fe4) status_small_pane_t1

0x1a23,	// (0x0002f57e) main_video3_pane

0xcfba,	// (0x0003ab15) cams_zoom_vslider_pane

0xcfc2,	// (0x0003ab1d) image3_wide_pane_ParamLimits

0xcfc2,	// (0x0003ab1d) image3_wide_pane

0xcfdc,	// (0x0003ab37) image3_wide_small_pane

0xcfe8,	// (0x0003ab43) main_video3_pane_g1_ParamLimits

0xcfe8,	// (0x0003ab43) main_video3_pane_g1

0xd004,	// (0x0003ab5f) main_video3_pane_g2_ParamLimits

0xd004,	// (0x0003ab5f) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003d3a3) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003d3a3) main_video3_pane_g

0xd020,	// (0x0003ab7b) main_video3_pane_t1_ParamLimits

0xd020,	// (0x0003ab7b) main_video3_pane_t1

0xd04b,	// (0x0003aba6) main_video3_pane_t2_ParamLimits

0xd04b,	// (0x0003aba6) main_video3_pane_t2

0xd076,	// (0x0003abd1) main_video3_pane_t3_ParamLimits

0xd076,	// (0x0003abd1) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003d3a8) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003d3a8) main_video3_pane_t

0xd0a3,	// (0x0003abfe) cams_zoom_vslider_pane_g1

0xd0ac,	// (0x0003ac07) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003d3af) cams_zoom_vslider_pane_g

0xd0b4,	// (0x0003ac0f) small_slider_vertical_pane

0xc8b3,	// (0x0003a40e) small_slider_vertical_pane_g1

0xc8b3,	// (0x0003a40e) small_slider_vertical_pane_g2

0xd0bc,	// (0x0003ac17) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003d3b4) small_slider_vertical_pane_g

0x1a23,	// (0x0002f57e) main_hwr_training_pane

0xd0c5,	// (0x0003ac20) hwr_training_instruct_pane_ParamLimits

0xd0c5,	// (0x0003ac20) hwr_training_instruct_pane

0x60e6,	// (0x00033c41) hwr_training_navi_pane_ParamLimits

0x60e6,	// (0x00033c41) hwr_training_navi_pane

0x6105,	// (0x00033c60) hwr_training_write_pane_ParamLimits

0x6105,	// (0x00033c60) hwr_training_write_pane

0x9bf4,	// (0x0003774f) bg_frame_shadow_pane

0xd0fc,	// (0x0003ac57) hwr_training_write_pane_g1

0xd104,	// (0x0003ac5f) hwr_training_write_pane_g2

0xd10c,	// (0x0003ac67) hwr_training_write_pane_g3

0xd114,	// (0x0003ac6f) hwr_training_write_pane_g4

0xd11c,	// (0x0003ac77) hwr_training_write_pane_g5

0xd124,	// (0x0003ac7f) hwr_training_write_pane_g6

0xd12c,	// (0x0003ac87) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003d3bb) hwr_training_write_pane_g

0x6140,	// (0x00033c9b) hwr_training_navi_pane_g1_ParamLimits

0x6140,	// (0x00033c9b) hwr_training_navi_pane_g1

0x6152,	// (0x00033cad) hwr_training_navi_pane_g2_ParamLimits

0x6152,	// (0x00033cad) hwr_training_navi_pane_g2

0x6164,	// (0x00033cbf) hwr_training_navi_pane_g3_ParamLimits

0x6164,	// (0x00033cbf) hwr_training_navi_pane_g3

0x6174,	// (0x00033ccf) hwr_training_navi_pane_g4_ParamLimits

0x6174,	// (0x00033ccf) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003d3ca) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003d3ca) hwr_training_navi_pane_g

0x6181,	// (0x00033cdc) hwr_training_navi_pane_t1

0x618f,	// (0x00033cea) list_single_hwr_training_instruct_pane_ParamLimits

0x618f,	// (0x00033cea) list_single_hwr_training_instruct_pane

0xd134,	// (0x0003ac8f) list_single_hwr_training_instruct_pane_t1

0xc7f3,	// (0x0003a34e) bg_frame_shadow_pane_g1

0xd143,	// (0x0003ac9e) bg_frame_shadow_pane_g2

0xd14b,	// (0x0003aca6) bg_frame_shadow_pane_g3

0xd153,	// (0x0003acae) bg_frame_shadow_pane_g4

0xd15b,	// (0x0003acb6) bg_frame_shadow_pane_g5

0xd163,	// (0x0003acbe) bg_frame_shadow_pane_g6

0xd16b,	// (0x0003acc6) bg_frame_shadow_pane_g7

0xa3ea,	// (0x00037f45) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003d3d5) bg_frame_shadow_pane_g

0x1a23,	// (0x0002f57e) main_video_tele_dialer_pane

0x0efc,	// (0x0002ea57) aid_size_cell_video_keypad_ParamLimits

0x0efc,	// (0x0002ea57) aid_size_cell_video_keypad

0x0f16,	// (0x0002ea71) grid_video_dialer_keypad_pane_ParamLimits

0x0f16,	// (0x0002ea71) grid_video_dialer_keypad_pane

0x0f62,	// (0x0002eabd) video_down_pane_cp_ParamLimits

0x0f62,	// (0x0002eabd) video_down_pane_cp

0x0f78,	// (0x0002ead3) cell_video_dialer_keypad_pane_ParamLimits

0x0f78,	// (0x0002ead3) cell_video_dialer_keypad_pane

0xd173,	// (0x0003acce) bg_button_pane_cp08_ParamLimits

0xd173,	// (0x0003acce) bg_button_pane_cp08

0x61c0,	// (0x00033d1b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61c0,	// (0x00033d1b) cell_video_dialer_keypad_pane_g1

0x5946,	// (0x000334a1) mup3_rocker2_pane_ParamLimits

0x5946,	// (0x000334a1) mup3_rocker2_pane

0xc8b3,	// (0x0003a40e) mup3_rocker2_pane_g1

0x0714,	// (0x0002e26f) main_dialer2_pane

0x1a23,	// (0x0002f57e) main_mp4_pane

0x61ff,	// (0x00033d5a) main_mp4_pane_g1_ParamLimits

0x61ff,	// (0x00033d5a) main_mp4_pane_g1

0x61ff,	// (0x00033d5a) main_mp4_pane_g2_ParamLimits

0x61ff,	// (0x00033d5a) main_mp4_pane_g2

0x0f9a,	// (0x0002eaf5) main_mp4_pane_g3_ParamLimits

0x0f9a,	// (0x0002eaf5) main_mp4_pane_g3

0x620d,	// (0x00033d68) main_mp4_pane_g4_ParamLimits

0x620d,	// (0x00033d68) main_mp4_pane_g4

0x6235,	// (0x00033d90) main_mp4_pane_g5_ParamLimits

0x6235,	// (0x00033d90) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003d3f5) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003d3f5) main_mp4_pane_g

0x6285,	// (0x00033de0) main_mp4_pane_t1_ParamLimits

0x6285,	// (0x00033de0) main_mp4_pane_t1

0x62e1,	// (0x00033e3c) main_mp4_pane_t2_ParamLimits

0x62e1,	// (0x00033e3c) main_mp4_pane_t2

0xd17f,	// (0x0003acda) main_mp4_pane_t3_ParamLimits

0xd17f,	// (0x0003acda) main_mp4_pane_t3

0x6333,	// (0x00033e8e) main_mp4_pane_t4_ParamLimits

0x6333,	// (0x00033e8e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003d402) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003d402) main_mp4_pane_t

0x6377,	// (0x00033ed2) mp4_progress_pane_ParamLimits

0x6377,	// (0x00033ed2) mp4_progress_pane

0x63c1,	// (0x00033f1c) mp4_rocker_pane_ParamLimits

0x63c1,	// (0x00033f1c) mp4_rocker_pane

0xd1a7,	// (0x0003ad02) mp4_progress_pane_t1

0xd1c0,	// (0x0003ad1b) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003d40b) mp4_progress_pane_t

0xd1d9,	// (0x0003ad34) mup_progress_pane_cp04

0xd62e,	// (0x0003b189) mp4_rocker_pane_g1

0x0fd6,	// (0x0002eb31) aid_cell_size_keypad2_ParamLimits

0x0fd6,	// (0x0002eb31) aid_cell_size_keypad2

0x0fec,	// (0x0002eb47) dialer2_ne_pane_ParamLimits

0x0fec,	// (0x0002eb47) dialer2_ne_pane

0x1006,	// (0x0002eb61) grid_dialer2_keypad_pane_ParamLimits

0x1006,	// (0x0002eb61) grid_dialer2_keypad_pane

0xc698,	// (0x0003a1f3) bg_popup_call_pane_cp07_ParamLimits

0xc698,	// (0x0003a1f3) bg_popup_call_pane_cp07

0x63e1,	// (0x00033f3c) dialer2_ne_pane_t1_ParamLimits

0x63e1,	// (0x00033f3c) dialer2_ne_pane_t1

0x1022,	// (0x0002eb7d) cell_dialer2_keypad_pane_ParamLimits

0x1022,	// (0x0002eb7d) cell_dialer2_keypad_pane

0xd1f7,	// (0x0003ad52) bg_button_pane_pane_cp04_ParamLimits

0xd1f7,	// (0x0003ad52) bg_button_pane_pane_cp04

0x641c,	// (0x00033f77) cell_dialer2_keypad_pane_g1_ParamLimits

0x641c,	// (0x00033f77) cell_dialer2_keypad_pane_g1

0x27bb,	// (0x00030316) aid_placing_vt_set_content_ParamLimits

0x27bb,	// (0x00030316) aid_placing_vt_set_content

0x27e3,	// (0x0003033e) aid_placing_vt_set_title_ParamLimits

0x27e3,	// (0x0003033e) aid_placing_vt_set_title

0x1a23,	// (0x0002f57e) main_image3_pane

0x10a2,	// (0x0002ebfd) area_side_right_pane_cp01_ParamLimits

0x10a2,	// (0x0002ebfd) area_side_right_pane_cp01

0x61ff,	// (0x00033d5a) main_image3_pane_g1_ParamLimits

0x61ff,	// (0x00033d5a) main_image3_pane_g1

0x10b9,	// (0x0002ec14) main_image3_pane_g2_ParamLimits

0x10b9,	// (0x0002ec14) main_image3_pane_g2

0x10e1,	// (0x0002ec3c) main_image3_pane_g3_ParamLimits

0x10e1,	// (0x0002ec3c) main_image3_pane_g3

0x110b,	// (0x0002ec66) main_image3_pane_g4_ParamLimits

0x110b,	// (0x0002ec66) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003d41a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003d41a) main_image3_pane_g

0x1135,	// (0x0002ec90) main_image3_pane_t1_ParamLimits

0x1135,	// (0x0002ec90) main_image3_pane_t1

0x118d,	// (0x0002ece8) main_image3_pane_t2_ParamLimits

0x118d,	// (0x0002ece8) main_image3_pane_t2

0x11df,	// (0x0002ed3a) main_image3_pane_t3_ParamLimits

0x11df,	// (0x0002ed3a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003d423) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003d423) main_image3_pane_t

0xa6b4,	// (0x0003820f) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6b4,	// (0x0003820f) grid_sctrl_middle_pane_cp01

0x64b6,	// (0x00034011) cell_sctrl_middle_pane_cp01_ParamLimits

0x64b6,	// (0x00034011) cell_sctrl_middle_pane_cp01

0x64d3,	// (0x0003402e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64d3,	// (0x0003402e) cell_sctrl_middle_pane_cp01_g1

0x1a23,	// (0x0002f57e) main_call4_pane

0x64e9,	// (0x00034044) aid_size_button_call4_ParamLimits

0x64e9,	// (0x00034044) aid_size_button_call4

0x651a,	// (0x00034075) call4_windows_pane_ParamLimits

0x651a,	// (0x00034075) call4_windows_pane

0x653a,	// (0x00034095) grid_call4_button_pane_ParamLimits

0x653a,	// (0x00034095) grid_call4_button_pane

0xd203,	// (0x0003ad5e) call4_windows_conf_pane

0xd21a,	// (0x0003ad75) popup_call4_audio_first_window_ParamLimits

0xd21a,	// (0x0003ad75) popup_call4_audio_first_window

0xd266,	// (0x0003adc1) popup_call4_audio_second_window_ParamLimits

0xd266,	// (0x0003adc1) popup_call4_audio_second_window

0xd27a,	// (0x0003add5) popup_call4_audio_wait_window_ParamLimits

0xd27a,	// (0x0003add5) popup_call4_audio_wait_window

0x6567,	// (0x000340c2) cell_call4_button_pane_ParamLimits

0x6567,	// (0x000340c2) cell_call4_button_pane

0x6590,	// (0x000340eb) bg_button_pane_cp09_ParamLimits

0x6590,	// (0x000340eb) bg_button_pane_cp09

0x659c,	// (0x000340f7) cell_call4_button_pane_g1_ParamLimits

0x659c,	// (0x000340f7) cell_call4_button_pane_g1

0x65c2,	// (0x0003411d) cell_call4_button_pane_t1_ParamLimits

0x65c2,	// (0x0003411d) cell_call4_button_pane_t1

0xd2c2,	// (0x0003ae1d) popup_call4_audio_conf_window_ParamLimits

0xd2c2,	// (0x0003ae1d) popup_call4_audio_conf_window

0x59a6,	// (0x00033501) mup3_progress_pane_t1_ParamLimits

0x59c5,	// (0x00033520) mup3_progress_pane_t2_ParamLimits

0xcbd2,	// (0x0003a72d) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0003d2fc) mup3_progress_pane_t_ParamLimits

0xcbef,	// (0x0003a74a) mup_progress_pane_cp03_ParamLimits

0x5f2c,	// (0x00033a87) mup3_control_keys_pane_g4_copy1

0x63a5,	// (0x00033f00) mp4_rocker2_pane_ParamLimits

0x63a5,	// (0x00033f00) mp4_rocker2_pane

0xd2d6,	// (0x0003ae31) mp4_rocker2_pane_g1

0xd2de,	// (0x0003ae39) mp4_rocker2_pane_g2

0x65e8,	// (0x00034143) mp4_rocker2_pane_g3

0x65f0,	// (0x0003414b) mp4_rocker2_pane_g4

0x65f8,	// (0x00034153) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003d42c) mp4_rocker2_pane_g

0x1a23,	// (0x0002f57e) main_camera4_pane

0x1a23,	// (0x0002f57e) main_video4_pane

0x0f30,	// (0x0002ea8b) main_video_tele_dialer_pane_t1_ParamLimits

0x0f30,	// (0x0002ea8b) main_video_tele_dialer_pane_t1

0x0f49,	// (0x0002eaa4) main_video_tele_dialer_pane_t2_ParamLimits

0x0f49,	// (0x0002eaa4) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003d3e6) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003d3e6) main_video_tele_dialer_pane_t

0x127f,	// (0x0002edda) cam4_autofocus_pane_ParamLimits

0x127f,	// (0x0002edda) cam4_autofocus_pane

0x1295,	// (0x0002edf0) cam4_image_uncrop_pane_ParamLimits

0x1295,	// (0x0002edf0) cam4_image_uncrop_pane

0x12af,	// (0x0002ee0a) cam4_indicators_pane_ParamLimits

0x12af,	// (0x0002ee0a) cam4_indicators_pane

0x12da,	// (0x0002ee35) main_camera4_pane_g1_ParamLimits

0x12da,	// (0x0002ee35) main_camera4_pane_g1

0x12ec,	// (0x0002ee47) main_camera4_pane_g2_ParamLimits

0x12ec,	// (0x0002ee47) main_camera4_pane_g2

0x12ff,	// (0x0002ee5a) main_camera4_pane_g3_ParamLimits

0x12ff,	// (0x0002ee5a) main_camera4_pane_g3

0x1312,	// (0x0002ee6d) main_camera4_pane_g4_ParamLimits

0x1312,	// (0x0002ee6d) main_camera4_pane_g4

0x1325,	// (0x0002ee80) main_camera4_pane_g5_ParamLimits

0x1325,	// (0x0002ee80) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003d437) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003d437) main_camera4_pane_g

0x1349,	// (0x0002eea4) main_camera4_pane_t1_ParamLimits

0x1349,	// (0x0002eea4) main_camera4_pane_t1

0x6630,	// (0x0003418b) bg_tb_trans_pane_cp06

0x6646,	// (0x000341a1) cam4_indicators_pane_g1

0x6657,	// (0x000341b2) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003d452) cam4_indicators_pane_g

0x6675,	// (0x000341d0) cam4_indicators_pane_t1

0x1399,	// (0x0002eef4) main_video4_pane_g1_ParamLimits

0x1399,	// (0x0002eef4) main_video4_pane_g1

0x13a8,	// (0x0002ef03) main_video4_pane_g2_ParamLimits

0x13a8,	// (0x0002ef03) main_video4_pane_g2

0x13b7,	// (0x0002ef12) main_video4_pane_g3_ParamLimits

0x13b7,	// (0x0002ef12) main_video4_pane_g3

0x13c6,	// (0x0002ef21) main_video4_pane_g4_ParamLimits

0x13c6,	// (0x0002ef21) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003d459) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003d459) main_video4_pane_g

0x13e4,	// (0x0002ef3f) vid4_indicators_pane_ParamLimits

0x13e4,	// (0x0002ef3f) vid4_indicators_pane

0x1412,	// (0x0002ef6d) video4_image_uncrop_cif_pane_ParamLimits

0x1412,	// (0x0002ef6d) video4_image_uncrop_cif_pane

0x142c,	// (0x0002ef87) video4_image_uncrop_nhd_pane_ParamLimits

0x142c,	// (0x0002ef87) video4_image_uncrop_nhd_pane

0x1295,	// (0x0002edf0) video4_image_uncrop_vga_pane_ParamLimits

0x1295,	// (0x0002edf0) video4_image_uncrop_vga_pane

0x1a09,	// (0x0002f564) bg_tb_trans_pane_cp07

0x66a1,	// (0x000341fc) vid4_indicators_pane_g1

0x66b5,	// (0x00034210) vid4_indicators_pane_g2

0x66c9,	// (0x00034224) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003d464) vid4_indicators_pane_g

0x66f8,	// (0x00034253) vid4_indicators_pane_t1

0x670f,	// (0x0003426a) cam4_autofocus_pane_g1

0x6717,	// (0x00034272) cam4_autofocus_pane_g2

0x671f,	// (0x0003427a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003d46f) cam4_autofocus_pane_g

0x6727,	// (0x00034282) cam4_autofocus_pane_g3_copy1

0x61a4,	// (0x00033cff) video_down_pane_cp_t1

0x61b2,	// (0x00033d0d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003d3eb) video_down_pane_cp_t

0x1a09,	// (0x0002f564) popup_vitu2_window_ParamLimits

0x1a09,	// (0x0002f564) popup_vitu2_window

0x1440,	// (0x0002ef9b) aid_size_cell2_itu2_ParamLimits

0x1440,	// (0x0002ef9b) aid_size_cell2_itu2

0x1466,	// (0x0002efc1) aid_size_cell_itu2_ParamLimits

0x1466,	// (0x0002efc1) aid_size_cell_itu2

0x14c2,	// (0x0002f01d) bg_popup_window_pane_cp09_ParamLimits

0x14c2,	// (0x0002f01d) bg_popup_window_pane_cp09

0x14d0,	// (0x0002f02b) field_vitu2_entry_pane_ParamLimits

0x14d0,	// (0x0002f02b) field_vitu2_entry_pane

0x14f6,	// (0x0002f051) grid_vitu2_function_pane_ParamLimits

0x14f6,	// (0x0002f051) grid_vitu2_function_pane

0x1547,	// (0x0002f0a2) grid_vitu2_itu_pane_ParamLimits

0x1547,	// (0x0002f0a2) grid_vitu2_itu_pane

0x15da,	// (0x0002f135) cell_vitu2_itu_pane_ParamLimits

0x15da,	// (0x0002f135) cell_vitu2_itu_pane

0x15fe,	// (0x0002f159) cell_vitu2_function_pane_ParamLimits

0x15fe,	// (0x0002f159) cell_vitu2_function_pane

0xd2e6,	// (0x0003ae41) bg_popup_call_pane_cp08_ParamLimits

0xd2e6,	// (0x0003ae41) bg_popup_call_pane_cp08

0xd2ff,	// (0x0003ae5a) field_vitu2_entry_pane_g1

0xd30b,	// (0x0003ae66) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003d476) field_vitu2_entry_pane_g

0x672f,	// (0x0003428a) field_vitu2_entry_pane_t1_ParamLimits

0x672f,	// (0x0003428a) field_vitu2_entry_pane_t1

0xd325,	// (0x0003ae80) field_vitu2_entry_pane_t2_ParamLimits

0xd325,	// (0x0003ae80) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003d47d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003d47d) field_vitu2_entry_pane_t

0x163d,	// (0x0002f198) bg_button_pane_cp010_ParamLimits

0x163d,	// (0x0002f198) bg_button_pane_cp010

0x164b,	// (0x0002f1a6) cell_vitu2_itu_pane_g1

0x1676,	// (0x0002f1d1) cell_vitu2_itu_pane_t1_ParamLimits

0x1676,	// (0x0002f1d1) cell_vitu2_itu_pane_t1

0x16d4,	// (0x0002f22f) cell_vitu2_itu_pane_t2_ParamLimits

0x16d4,	// (0x0002f22f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003d487) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003d487) cell_vitu2_itu_pane_t

0x1a09,	// (0x0002f564) bg_button_pane_cp011

0x17c0,	// (0x0002f31b) cell_vitu2_function_pane_g1

0x1a23,	// (0x0002f57e) main_myfav_hc_pane

0x122f,	// (0x0002ed8a) popup_image3_note_pane_ParamLimits

0x122f,	// (0x0002ed8a) popup_image3_note_pane

0x124b,	// (0x0002eda6) popup_image3_tool_bar_pane_ParamLimits

0x124b,	// (0x0002eda6) popup_image3_tool_bar_pane

0x1762,	// (0x0002f2bd) cell_vitu2_itu_pane_t3_ParamLimits

0x1762,	// (0x0002f2bd) cell_vitu2_itu_pane_t3

0x9bf4,	// (0x0003774f) bg_popup_trans_pane

0xd34a,	// (0x0003aea5) grid_image3_tool_bar_pane

0xd354,	// (0x0003aeaf) bg_popup_trans_pane_g1

0xa820,	// (0x0003837b) bg_popup_trans_pane_g2

0xd35c,	// (0x0003aeb7) bg_popup_trans_pane_g3

0xd364,	// (0x0003aebf) bg_popup_trans_pane_g4

0xd36c,	// (0x0003aec7) bg_popup_trans_pane_g5

0xd374,	// (0x0003aecf) bg_popup_trans_pane_g6

0xd37c,	// (0x0003aed7) bg_popup_trans_pane_g7

0xd384,	// (0x0003aedf) bg_popup_trans_pane_g8

0xa800,	// (0x0003835b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003d48e) bg_popup_trans_pane_g

0xd38c,	// (0x0003aee7) cell_image3_tool_bar_pane_ParamLimits

0xd38c,	// (0x0003aee7) cell_image3_tool_bar_pane

0xc8b3,	// (0x0003a40e) cell_image3_tool_bar_pane_g1

0x9bf4,	// (0x0003774f) bg_popup_trans_pane_cp1

0xd3a0,	// (0x0003aefb) popup_image3_note_pane_t1

0xd3ae,	// (0x0003af09) popup_image3_note_pane_t2

0xd3bc,	// (0x0003af17) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003d4a1) popup_image3_note_pane_t

0xd3ca,	// (0x0003af25) popup_image3_note_pane_t3_copy1

0x675e,	// (0x000342b9) bg_myfav_hc_instruction_pane_ParamLimits

0x675e,	// (0x000342b9) bg_myfav_hc_instruction_pane

0x6772,	// (0x000342cd) cell_myfav_contact_pane_ParamLimits

0x6772,	// (0x000342cd) cell_myfav_contact_pane

0x6790,	// (0x000342eb) cell_myfav_contact_pane_cp1_ParamLimits

0x6790,	// (0x000342eb) cell_myfav_contact_pane_cp1

0x67a8,	// (0x00034303) cell_myfav_contact_pane_cp2_ParamLimits

0x67a8,	// (0x00034303) cell_myfav_contact_pane_cp2

0x67c0,	// (0x0003431b) cell_myfav_contact_pane_cp3_ParamLimits

0x67c0,	// (0x0003431b) cell_myfav_contact_pane_cp3

0x67d7,	// (0x00034332) cell_myfav_contact_pane_cp4_ParamLimits

0x67d7,	// (0x00034332) cell_myfav_contact_pane_cp4

0x67ef,	// (0x0003434a) cell_myfav_contact_pane_cp5_ParamLimits

0x67ef,	// (0x0003434a) cell_myfav_contact_pane_cp5

0x6803,	// (0x0003435e) cell_myfav_contact_pane_cp6_ParamLimits

0x6803,	// (0x0003435e) cell_myfav_contact_pane_cp6

0x6819,	// (0x00034374) cell_myfav_contact_pane_cp7_ParamLimits

0x6819,	// (0x00034374) cell_myfav_contact_pane_cp7

0xd3d8,	// (0x0003af33) listscroll_gen_pane_cp05

0x6833,	// (0x0003438e) main_myfav_hc_pane_g1_ParamLimits

0x6833,	// (0x0003438e) main_myfav_hc_pane_g1

0x684d,	// (0x000343a8) main_myfav_hc_pane_g2_ParamLimits

0x684d,	// (0x000343a8) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003d4a8) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003d4a8) main_myfav_hc_pane_g

0x687f,	// (0x000343da) main_myfav_hc_pane_t1_ParamLimits

0x687f,	// (0x000343da) main_myfav_hc_pane_t1

0xd3e1,	// (0x0003af3c) main_myfav_hc_pane_t2_ParamLimits

0xd3e1,	// (0x0003af3c) main_myfav_hc_pane_t2

0xd3f3,	// (0x0003af4e) main_myfav_hc_pane_t3_ParamLimits

0xd3f3,	// (0x0003af4e) main_myfav_hc_pane_t3

0x6896,	// (0x000343f1) main_myfav_hc_pane_t4_ParamLimits

0x6896,	// (0x000343f1) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003d4af) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003d4af) main_myfav_hc_pane_t

0xc8b3,	// (0x0003a40e) bg_myfav_hc_instruction_pane_g1

0xd405,	// (0x0003af60) cell_myfav_contact_pane_g1_ParamLimits

0xd405,	// (0x0003af60) cell_myfav_contact_pane_g1

0xd405,	// (0x0003af60) cell_myfav_contact_pane_g2_ParamLimits

0xd405,	// (0x0003af60) cell_myfav_contact_pane_g2

0xd411,	// (0x0003af6c) cell_myfav_contact_pane_g3_ParamLimits

0xd411,	// (0x0003af6c) cell_myfav_contact_pane_g3

0xcbbc,	// (0x0003a717) cell_myfav_contact_pane_g4_ParamLimits

0xcbbc,	// (0x0003a717) cell_myfav_contact_pane_g4

0xd41e,	// (0x0003af79) cell_myfav_contact_pane_g5_ParamLimits

0xd41e,	// (0x0003af79) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003d4ba) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003d4ba) cell_myfav_contact_pane_g

0x6867,	// (0x000343c2) main_myfav_hc_pane_g3_ParamLimits

0x6867,	// (0x000343c2) main_myfav_hc_pane_g3

0x02f6,	// (0x0002de51) popup_adpt_find_window

0x68be,	// (0x00034419) afind_page_pane_ParamLimits

0x68be,	// (0x00034419) afind_page_pane

0x68d3,	// (0x0003442e) aid_size_cell_afind_ParamLimits

0x68d3,	// (0x0003442e) aid_size_cell_afind

0x68f1,	// (0x0003444c) bg_popup_sub_pane_cp09_ParamLimits

0x68f1,	// (0x0003444c) bg_popup_sub_pane_cp09

0x68fe,	// (0x00034459) find_pane_cp01_ParamLimits

0x68fe,	// (0x00034459) find_pane_cp01

0xd42a,	// (0x0003af85) grid_afind_control_pane_ParamLimits

0xd42a,	// (0x0003af85) grid_afind_control_pane

0x690b,	// (0x00034466) grid_afind_pane_ParamLimits

0x690b,	// (0x00034466) grid_afind_pane

0x692d,	// (0x00034488) cell_afind_pane_ParamLimits

0x692d,	// (0x00034488) cell_afind_pane

0xc8b3,	// (0x0003a40e) afind_page_pane_g1

0x698e,	// (0x000344e9) afind_page_pane_g2

0x6997,	// (0x000344f2) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003d4c5) afind_page_pane_g

0x69a0,	// (0x000344fb) afind_page_pane_t1

0xd43e,	// (0x0003af99) cell_afind_grid_control_pane_ParamLimits

0xd43e,	// (0x0003af99) cell_afind_grid_control_pane

0xd1f7,	// (0x0003ad52) bg_button_pane_cp69_ParamLimits

0xd1f7,	// (0x0003ad52) bg_button_pane_cp69

0x69c0,	// (0x0003451b) cell_afind_pane_g1_ParamLimits

0x69c0,	// (0x0003451b) cell_afind_pane_g1

0x69cd,	// (0x00034528) cell_afind_pane_t1_ParamLimits

0x69cd,	// (0x00034528) cell_afind_pane_t1

0xa541,	// (0x0003809c) bg_button_pane_cp72

0xd44d,	// (0x0003afa8) cell_afind_grid_control_pane_g1

0x457d,	// (0x000320d8) aid_image_placing_area_ParamLimits

0x457d,	// (0x000320d8) aid_image_placing_area

0xcec5,	// (0x0003aa20) field_vitu_entry_pane_g1_ParamLimits

0xcec5,	// (0x0003aa20) field_vitu_entry_pane_g1

0xced1,	// (0x0003aa2c) field_vitu_entry_pane_g2_ParamLimits

0xced1,	// (0x0003aa2c) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003d376) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003d376) field_vitu_entry_pane_g

0x5ff3,	// (0x00033b4e) cell_vitu_itu_pane_g1_ParamLimits

0x6035,	// (0x00033b90) cell_vitu_itu_pane_t3_ParamLimits

0x6035,	// (0x00033b90) cell_vitu_itu_pane_t3

0xd1a7,	// (0x0003ad02) mp4_progress_pane_t1_ParamLimits

0xd1c0,	// (0x0003ad1b) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003d40b) mp4_progress_pane_t_ParamLimits

0xd1d9,	// (0x0003ad34) mup_progress_pane_cp04_ParamLimits

0x68aa,	// (0x00034405) main_myfav_hc_pane_t5_ParamLimits

0x68aa,	// (0x00034405) main_myfav_hc_pane_t5

0x1986,	// (0x0002f4e1) aid_zoom_text_primary

0x02f6,	// (0x0002de51) popup_adpt_find_window_ParamLimits

0x1a09,	// (0x0002f564) main_cam_set_pane

0x12c6,	// (0x0002ee21) cam4_zoom_pane_ParamLimits

0x12c6,	// (0x0002ee21) cam4_zoom_pane

0x69df,	// (0x0003453a) main_cam_set_pane_g1_ParamLimits

0x69df,	// (0x0003453a) main_cam_set_pane_g1

0x69ed,	// (0x00034548) main_cam_set_pane_g2_ParamLimits

0x69ed,	// (0x00034548) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003d4cc) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003d4cc) main_cam_set_pane_g

0x6a0e,	// (0x00034569) main_cam_set_pane_t1_ParamLimits

0x6a0e,	// (0x00034569) main_cam_set_pane_t1

0x6a29,	// (0x00034584) main_cset_listscroll_pane_ParamLimits

0x6a29,	// (0x00034584) main_cset_listscroll_pane

0x6a49,	// (0x000345a4) main_cset_slider_pane_ParamLimits

0x6a49,	// (0x000345a4) main_cset_slider_pane

0xd45e,	// (0x0003afb9) main_cset_list_pane_ParamLimits

0xd45e,	// (0x0003afb9) main_cset_list_pane

0xd46e,	// (0x0003afc9) scroll_pane_cp028

0x6a6f,	// (0x000345ca) aid_area_touch_slider

0x6a8b,	// (0x000345e6) cset_slider_pane

0x6ab5,	// (0x00034610) main_cset_slider_pane_g1

0x6aca,	// (0x00034625) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003d4d1) main_cset_slider_pane_g

0xd4a7,	// (0x0003b002) main_cset_slider_pane_t1

0x6b86,	// (0x000346e1) main_cset_slider_pane_t2

0x6ba0,	// (0x000346fb) main_cset_slider_pane_t3

0x6bba,	// (0x00034715) main_cset_slider_pane_t4

0x6bd4,	// (0x0003472f) main_cset_slider_pane_t5

0x6bee,	// (0x00034749) main_cset_slider_pane_t6

0x6c03,	// (0x0003475e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003d4f6) main_cset_slider_pane_t

0x6d07,	// (0x00034862) cset_list_set_pane_ParamLimits

0x6d07,	// (0x00034862) cset_list_set_pane

0x6d19,	// (0x00034874) aid_position_infowindow_above

0x6d21,	// (0x0003487c) aid_position_infowindow_below

0xd547,	// (0x0003b0a2) cset_list_set_pane_g1_ParamLimits

0xd547,	// (0x0003b0a2) cset_list_set_pane_g1

0xd553,	// (0x0003b0ae) cset_list_set_pane_g3_ParamLimits

0xd553,	// (0x0003b0ae) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003d515) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003d515) cset_list_set_pane_g

0xd562,	// (0x0003b0bd) cset_list_set_pane_t1_ParamLimits

0xd562,	// (0x0003b0bd) cset_list_set_pane_t1

0xa6b4,	// (0x0003820f) list_highlight_pane_cp021_ParamLimits

0xa6b4,	// (0x0003820f) list_highlight_pane_cp021

0xb171,	// (0x00038ccc) cset_slider_pane_g1

0xb183,	// (0x00038cde) cset_slider_pane_g2

0xb17a,	// (0x00038cd5) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003d51a) cset_slider_pane_g

0x6d29,	// (0x00034884) aid_area_touch_cam4_zoom

0x6d31,	// (0x0003488c) cam4_zoom_cont_pane

0x6d39,	// (0x00034894) cam4_zoom_pane_g1

0x6d41,	// (0x0003489c) cam4_zoom_pane_g2

0x17d4,	// (0x0002f32f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003d521) cam4_zoom_pane_g

0x6d49,	// (0x000348a4) cam4_zoom_cont_pane_g1

0x6d52,	// (0x000348ad) cam4_zoom_cont_pane_g2

0x6d5b,	// (0x000348b6) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003d528) cam4_zoom_cont_pane_g

0x6507,	// (0x00034062) call4_image_pane_ParamLimits

0x6507,	// (0x00034062) call4_image_pane

0xd203,	// (0x0003ad5e) call4_windows_conf_pane_ParamLimits

0xd244,	// (0x0003ad9f) popup_call4_audio_in_window_ParamLimits

0xd244,	// (0x0003ad9f) popup_call4_audio_in_window

0x9bf4,	// (0x0003774f) bg_popup_call2_act_pane_cp02

0xd2ba,	// (0x0003ae15) call4_list_conf_pane

0xc8b3,	// (0x0003a40e) call4_image_pane_g1

0xc8b3,	// (0x0003a40e) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0003d23c) call4_image_pane_g

0xd577,	// (0x0003b0d2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd577,	// (0x0003b0d2) list_single_graphic_popup_conf4_pane

0x9bf4,	// (0x0003774f) list_highlight_pane_cp022

0xd58a,	// (0x0003b0e5) list_single_graphic_popup_conf4_pane_g1

0xad3a,	// (0x00038895) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003d52f) list_single_graphic_popup_conf4_pane_g

0xd592,	// (0x0003b0ed) list_single_graphic_popup_conf4_pane_t1

0x2907,	// (0x00030462) popup_vtel_slider_window_ParamLimits

0x2907,	// (0x00030462) popup_vtel_slider_window

0xd1e5,	// (0x0003ad40) dialer2_ne_pane_t2_ParamLimits

0xd1e5,	// (0x0003ad40) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003d410) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003d410) dialer2_ne_pane_t

0xc698,	// (0x0003a1f3) bg_popup_sub_pane_cp010_ParamLimits

0xc698,	// (0x0003a1f3) bg_popup_sub_pane_cp010

0x6d64,	// (0x000348bf) popup_vtel_slider_window_g1_ParamLimits

0x6d64,	// (0x000348bf) popup_vtel_slider_window_g1

0x6d77,	// (0x000348d2) popup_vtel_slider_window_g2_ParamLimits

0x6d77,	// (0x000348d2) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003d534) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003d534) popup_vtel_slider_window_g

0x6dcd,	// (0x00034928) vtel_slider_pane_ParamLimits

0x6dcd,	// (0x00034928) vtel_slider_pane

0x6def,	// (0x0003494a) vtel_slider_pane_g1_ParamLimits

0x6def,	// (0x0003494a) vtel_slider_pane_g1

0x6e03,	// (0x0003495e) vtel_slider_pane_g2_ParamLimits

0x6e03,	// (0x0003495e) vtel_slider_pane_g2

0x6e1b,	// (0x00034976) vtel_slider_pane_g3_ParamLimits

0x6e1b,	// (0x00034976) vtel_slider_pane_g3

0x6def,	// (0x0003494a) vtel_slider_pane_g4_ParamLimits

0x6def,	// (0x0003494a) vtel_slider_pane_g4

0x6e31,	// (0x0003498c) vtel_slider_pane_g5_ParamLimits

0x6e31,	// (0x0003498c) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003d53d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003d53d) vtel_slider_pane_g

0x1a09,	// (0x0002f564) main_gallery2_pane

0x1492,	// (0x0002efed) aid_size_row_itut2_dropdow_list_ParamLimits

0x1492,	// (0x0002efed) aid_size_row_itut2_dropdow_list

0x151e,	// (0x0002f079) grid_vitu2_function_top_pane_ParamLimits

0x151e,	// (0x0002f079) grid_vitu2_function_top_pane

0x1583,	// (0x0002f0de) popup_vitu2_dropdown_list_window_ParamLimits

0x1583,	// (0x0002f0de) popup_vitu2_dropdown_list_window

0x15ac,	// (0x0002f107) popup_vitu2_match_list_window

0x17dc,	// (0x0002f337) cell_vitu2_function_top_pane_ParamLimits

0x17dc,	// (0x0002f337) cell_vitu2_function_top_pane

0x17fa,	// (0x0002f355) cell_vitu2_function_top_pane_cp01_ParamLimits

0x17fa,	// (0x0002f355) cell_vitu2_function_top_pane_cp01

0x1818,	// (0x0002f373) cell_vitu2_function_top_wide_pane_ParamLimits

0x1818,	// (0x0002f373) cell_vitu2_function_top_wide_pane

0x1a09,	// (0x0002f564) bg_button_pane_cp012

0x1836,	// (0x0002f391) cell_vitu2_function_top_pane_g1

0xa6c2,	// (0x0003821d) bg_button_pane_cp013_ParamLimits

0xa6c2,	// (0x0003821d) bg_button_pane_cp013

0x6e55,	// (0x000349b0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e55,	// (0x000349b0) cell_vitu2_function_top_wide_pane_g1

0x1a09,	// (0x0002f564) bg_popup_sub_pane_cp20

0x184a,	// (0x0002f3a5) list_vitu2_match_list_pane

0xd354,	// (0x0003aeaf) bg_popup_sub_pane_cp20_g1

0xd35c,	// (0x0003aeb7) bg_popup_sub_pane_cp20_g2

0xa820,	// (0x0003837b) bg_popup_sub_pane_cp20_g3

0xd364,	// (0x0003aebf) bg_popup_sub_pane_cp20_g4

0xa800,	// (0x0003835b) bg_popup_sub_pane_cp20_g5

0xd5a8,	// (0x0003b103) bg_popup_sub_pane_cp20_g6

0xd374,	// (0x0003aecf) bg_popup_sub_pane_cp20_g7

0xd37c,	// (0x0003aed7) bg_popup_sub_pane_cp20_g8

0xd384,	// (0x0003aedf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003d548) bg_popup_sub_pane_cp20_g

0xa6de,	// (0x00038239) list_vitu2_match_list_item_pane_ParamLimits

0xa6de,	// (0x00038239) list_vitu2_match_list_item_pane

0xa6f0,	// (0x0003824b) list_vitu2_match_list_item_pane_t1

0x1a23,	// (0x0002f57e) bg_popup_sub_pane_cp21

0xa6fe,	// (0x00038259) grid_vitu2_dropdown_list_pane

0x1868,	// (0x0002f3c3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1868,	// (0x0002f3c3) cell_vitu2_dropdown_list_char_pane

0x1889,	// (0x0002f3e4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1889,	// (0x0002f3e4) cell_vitu2_dropdown_list_ctrl_pane

0xd5b0,	// (0x0003b10b) cell_vitu2_dropdown_list_char_pane_g1

0xd5b9,	// (0x0003b114) cell_vitu2_dropdown_list_char_pane_g2

0xd5c2,	// (0x0003b11d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003d565) cell_vitu2_dropdown_list_char_pane_g

0x18b5,	// (0x0002f410) cell_vitu2_dropdown_list_char_pane_t1

0x6eb7,	// (0x00034a12) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6eb7,	// (0x00034a12) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ec4,	// (0x00034a1f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ec4,	// (0x00034a1f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ed1,	// (0x00034a2c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ed1,	// (0x00034a2c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x18c3,	// (0x0002f41e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x18c3,	// (0x0002f41e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6630,	// (0x0003418b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6630,	// (0x0003418b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003d56c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003d56c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ede,	// (0x00034a39) aid_size_cell_gallery2_ParamLimits

0x6ede,	// (0x00034a39) aid_size_cell_gallery2

0x6efc,	// (0x00034a57) grid_gallery2_pane_ParamLimits

0x6efc,	// (0x00034a57) grid_gallery2_pane

0x6f16,	// (0x00034a71) scroll_pane_cp029_ParamLimits

0x6f16,	// (0x00034a71) scroll_pane_cp029

0x6f22,	// (0x00034a7d) cell_gallery2_pane_ParamLimits

0x6f22,	// (0x00034a7d) cell_gallery2_pane

0xd5cb,	// (0x0003b126) cell_gallery2_pane_g2

0x6f7d,	// (0x00034ad8) cell_gallery2_pane_g3

0xd5d3,	// (0x0003b12e) cell_gallery2_pane_g4

0xd5db,	// (0x0003b136) cell_gallery2_pane_g5

0xb02d,	// (0x00038b88) grid_highlight_pane_cp10

0x15ac,	// (0x0002f107) popup_vitu2_match_list_window_ParamLimits

0x15c3,	// (0x0002f11e) popup_vitu2_query_window_ParamLimits

0x15c3,	// (0x0002f11e) popup_vitu2_query_window

0x1a23,	// (0x0002f57e) bg_vitu2_candi_button_pane

0xd5b0,	// (0x0003b10b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5b9,	// (0x0003b114) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5c2,	// (0x0003b11d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f85,	// (0x00034ae0) bg_button_pane_cp015

0x6f97,	// (0x00034af2) bg_button_pane_cp016

0x6faa,	// (0x00034b05) bg_button_pane_cp017

0xc4ab,	// (0x0003a006) bg_popup_sub_pane_cp22

0xd5e3,	// (0x0003b13e) popup_vitu2_query_window_g1

0x6fef,	// (0x00034b4a) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003d577) popup_vitu2_query_window_g

0x700e,	// (0x00034b69) popup_vitu2_query_window_t1_ParamLimits

0x700e,	// (0x00034b69) popup_vitu2_query_window_t1

0x7043,	// (0x00034b9e) popup_vitu2_query_window_t2_ParamLimits

0x7043,	// (0x00034b9e) popup_vitu2_query_window_t2

0x7055,	// (0x00034bb0) popup_vitu2_query_window_t3_ParamLimits

0x7055,	// (0x00034bb0) popup_vitu2_query_window_t3

0x707d,	// (0x00034bd8) popup_vitu2_query_window_t4_ParamLimits

0x707d,	// (0x00034bd8) popup_vitu2_query_window_t4

0x709e,	// (0x00034bf9) popup_vitu2_query_window_t5_ParamLimits

0x709e,	// (0x00034bf9) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003d57e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003d57e) popup_vitu2_query_window_t

0xd456,	// (0x0003afb1) main_cset_text_pane

0x6a6f,	// (0x000345ca) aid_area_touch_slider_ParamLimits

0x6a8b,	// (0x000345e6) cset_slider_pane_ParamLimits

0x6ab5,	// (0x00034610) main_cset_slider_pane_g1_ParamLimits

0x6aca,	// (0x00034625) main_cset_slider_pane_g2_ParamLimits

0xd477,	// (0x0003afd2) main_cset_slider_pane_g3_ParamLimits

0xd477,	// (0x0003afd2) main_cset_slider_pane_g3

0x6adf,	// (0x0003463a) main_cset_slider_pane_g4_ParamLimits

0x6adf,	// (0x0003463a) main_cset_slider_pane_g4

0x6aee,	// (0x00034649) main_cset_slider_pane_g5_ParamLimits

0x6aee,	// (0x00034649) main_cset_slider_pane_g5

0x6afa,	// (0x00034655) main_cset_slider_pane_g6_ParamLimits

0x6afa,	// (0x00034655) main_cset_slider_pane_g6

0xf976,	// (0x0003d4d1) main_cset_slider_pane_g_ParamLimits

0xd4a7,	// (0x0003b002) main_cset_slider_pane_t1_ParamLimits

0x6b86,	// (0x000346e1) main_cset_slider_pane_t2_ParamLimits

0x6ba0,	// (0x000346fb) main_cset_slider_pane_t3_ParamLimits

0x6bba,	// (0x00034715) main_cset_slider_pane_t4_ParamLimits

0x6bd4,	// (0x0003472f) main_cset_slider_pane_t5_ParamLimits

0x6bee,	// (0x00034749) main_cset_slider_pane_t6_ParamLimits

0x6c03,	// (0x0003475e) main_cset_slider_pane_t7_ParamLimits

0x6c2d,	// (0x00034788) main_cset_slider_pane_t8_ParamLimits

0x6c2d,	// (0x00034788) main_cset_slider_pane_t8

0x6c55,	// (0x000347b0) main_cset_slider_pane_t9_ParamLimits

0x6c55,	// (0x000347b0) main_cset_slider_pane_t9

0x6c7d,	// (0x000347d8) main_cset_slider_pane_t10_ParamLimits

0x6c7d,	// (0x000347d8) main_cset_slider_pane_t10

0x6ca5,	// (0x00034800) main_cset_slider_pane_t11_ParamLimits

0x6ca5,	// (0x00034800) main_cset_slider_pane_t11

0x6ccd,	// (0x00034828) main_cset_slider_pane_t12_ParamLimits

0x6ccd,	// (0x00034828) main_cset_slider_pane_t12

0x6cea,	// (0x00034845) main_cset_slider_pane_t13_ParamLimits

0x6cea,	// (0x00034845) main_cset_slider_pane_t13

0xf99b,	// (0x0003d4f6) main_cset_slider_pane_t_ParamLimits

0x9bf4,	// (0x0003774f) bg_popup_sub_pane_cp011

0xd638,	// (0x0003b193) main_cset_text_pane_g1

0xd640,	// (0x0003b19b) main_cset_text_pane_t1

0xd64e,	// (0x0003b1a9) main_cset_text_pane_t2

0xd65c,	// (0x0003b1b7) main_cset_text_pane_t3

0xd66a,	// (0x0003b1c5) main_cset_text_pane_t4

0xd678,	// (0x0003b1d3) main_cset_text_pane_t5

0xd686,	// (0x0003b1e1) main_cset_text_pane_t6

0xd694,	// (0x0003b1ef) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003d58d) main_cset_text_pane_t

0x1a23,	// (0x0002f57e) main_cam4_burst_pane

0x1a23,	// (0x0002f57e) main_cam5_pane

0x69ae,	// (0x00034509) bg_button_pane_cp019

0x69b7,	// (0x00034512) bg_button_pane_cp020

0xd483,	// (0x0003afde) main_cset_slider_pane_g7_ParamLimits

0xd483,	// (0x0003afde) main_cset_slider_pane_g7

0xd48f,	// (0x0003afea) main_cset_slider_pane_g8_ParamLimits

0xd48f,	// (0x0003afea) main_cset_slider_pane_g8

0x6b0e,	// (0x00034669) main_cset_slider_pane_g9_ParamLimits

0x6b0e,	// (0x00034669) main_cset_slider_pane_g9

0x6b1a,	// (0x00034675) main_cset_slider_pane_g10_ParamLimits

0x6b1a,	// (0x00034675) main_cset_slider_pane_g10

0x6b26,	// (0x00034681) main_cset_slider_pane_g11_ParamLimits

0x6b26,	// (0x00034681) main_cset_slider_pane_g11

0x6b32,	// (0x0003468d) main_cset_slider_pane_g12_ParamLimits

0x6b32,	// (0x0003468d) main_cset_slider_pane_g12

0x6b3e,	// (0x00034699) main_cset_slider_pane_g13_ParamLimits

0x6b3e,	// (0x00034699) main_cset_slider_pane_g13

0x6b4a,	// (0x000346a5) main_cset_slider_pane_g14_ParamLimits

0x6b4a,	// (0x000346a5) main_cset_slider_pane_g14

0x6b56,	// (0x000346b1) main_cset_slider_pane_g15_ParamLimits

0x6b56,	// (0x000346b1) main_cset_slider_pane_g15

0xd4d5,	// (0x0003b030) main_cset_slider_pane_t14_ParamLimits

0xd4d5,	// (0x0003b030) main_cset_slider_pane_t14

0xd50e,	// (0x0003b069) main_cset_slider_pane_t15_ParamLimits

0xd50e,	// (0x0003b069) main_cset_slider_pane_t15

0x7115,	// (0x00034c70) aid_cam4_burst_size_cell_ParamLimits

0x7115,	// (0x00034c70) aid_cam4_burst_size_cell

0x7135,	// (0x00034c90) grid_cam4_burst_pane_ParamLimits

0x7135,	// (0x00034c90) grid_cam4_burst_pane

0x716d,	// (0x00034cc8) linegrid_cam4_burst_pane_ParamLimits

0x716d,	// (0x00034cc8) linegrid_cam4_burst_pane

0xd6a2,	// (0x0003b1fd) scroll_pane_cp30_ParamLimits

0xd6a2,	// (0x0003b1fd) scroll_pane_cp30

0x7191,	// (0x00034cec) cell_cam4_burst_pane_ParamLimits

0x7191,	// (0x00034cec) cell_cam4_burst_pane

0xd6ae,	// (0x0003b209) linegrid_cam4_burst_pane_g1_ParamLimits

0xd6ae,	// (0x0003b209) linegrid_cam4_burst_pane_g1

0x71de,	// (0x00034d39) linegrid_cam4_burst_pane_g2_ParamLimits

0x71de,	// (0x00034d39) linegrid_cam4_burst_pane_g2

0xd6bb,	// (0x0003b216) linegrid_cam4_burst_pane_g3_ParamLimits

0xd6bb,	// (0x0003b216) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003d59c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003d59c) linegrid_cam4_burst_pane_g

0x71ef,	// (0x00034d4a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71ef,	// (0x00034d4a) linegrid_cam4_burst_pane_g3_copy1

0xd6c8,	// (0x0003b223) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6c8,	// (0x0003b223) linegrid_cam4_burst_pane_g4

0x7209,	// (0x00034d64) linegrid_cam4_burst_pane_g5_ParamLimits

0x7209,	// (0x00034d64) linegrid_cam4_burst_pane_g5

0x721a,	// (0x00034d75) linegrid_cam4_burst_pane_g6_ParamLimits

0x721a,	// (0x00034d75) linegrid_cam4_burst_pane_g6

0xd6d5,	// (0x0003b230) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6d5,	// (0x0003b230) linegrid_cam4_burst_pane_g7

0x7231,	// (0x00034d8c) cell_cam4_burst_pane_g1

0xd6ee,	// (0x0003b249) main_cam5_pane_t1_ParamLimits

0xd6ee,	// (0x0003b249) main_cam5_pane_t1

0xd700,	// (0x0003b25b) main_cam5_pane_t2_ParamLimits

0xd700,	// (0x0003b25b) main_cam5_pane_t2

0xd712,	// (0x0003b26d) main_cam5_pane_t3_ParamLimits

0xd712,	// (0x0003b26d) main_cam5_pane_t3

0xd724,	// (0x0003b27f) main_cam5_pane_t4_ParamLimits

0xd724,	// (0x0003b27f) main_cam5_pane_t4

0xd73c,	// (0x0003b297) main_cam5_pane_t5_ParamLimits

0xd73c,	// (0x0003b297) main_cam5_pane_t5

0xd750,	// (0x0003b2ab) main_cam5_pane_t6_ParamLimits

0xd750,	// (0x0003b2ab) main_cam5_pane_t6

0xd764,	// (0x0003b2bf) main_cam5_pane_t7_ParamLimits

0xd764,	// (0x0003b2bf) main_cam5_pane_t7

0xd776,	// (0x0003b2d1) main_cam5_pane_t8_ParamLimits

0xd776,	// (0x0003b2d1) main_cam5_pane_t8

0xd792,	// (0x0003b2ed) main_cam5_pane_t9_ParamLimits

0xd792,	// (0x0003b2ed) main_cam5_pane_t9

0xd7a4,	// (0x0003b2ff) main_cam5_pane_t10_ParamLimits

0xd7a4,	// (0x0003b2ff) main_cam5_pane_t10

0xd7b6,	// (0x0003b311) main_cam5_pane_t11_ParamLimits

0xd7b6,	// (0x0003b311) main_cam5_pane_t11

0xd7c8,	// (0x0003b323) main_cam5_pane_t12_ParamLimits

0xd7c8,	// (0x0003b323) main_cam5_pane_t12

0xd7dd,	// (0x0003b338) main_cam5_pane_t13_ParamLimits

0xd7dd,	// (0x0003b338) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003d5a8) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003d5a8) main_cam5_pane_t

0x0378,	// (0x0002ded3) popup_scut_keymap_window_ParamLimits

0x0378,	// (0x0002ded3) popup_scut_keymap_window

0x7244,	// (0x00034d9f) aid_size_cell_brow_shortcut

0xb02d,	// (0x00038b88) bg_popup_window_pane_cp010

0x7250,	// (0x00034dab) grid_scut_pane

0x725c,	// (0x00034db7) cell_scut_pane_ParamLimits

0x725c,	// (0x00034db7) cell_scut_pane

0x7273,	// (0x00034dce) cell_scut_pane_g1

0xd7fa,	// (0x0003b355) cell_scut_pane_t1

0xd809,	// (0x0003b364) cell_scut_pane_t2

0x727c,	// (0x00034dd7) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003d5c3) cell_scut_pane_t

0x555f,	// (0x000330ba) main_mup3_pane_g8_ParamLimits

0x555f,	// (0x000330ba) main_mup3_pane_g8

0x14aa,	// (0x0002f005) area_vitu2_query_pane_ParamLimits

0x14aa,	// (0x0002f005) area_vitu2_query_pane

0x6fbd,	// (0x00034b18) input_focus_pane_cp08

0xd818,	// (0x0003b373) area_vitu2_query_pane_g1

0x728a,	// (0x00034de5) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003d5ca) area_vitu2_query_pane_g

0x729b,	// (0x00034df6) area_vitu2_query_pane_t1_ParamLimits

0x729b,	// (0x00034df6) area_vitu2_query_pane_t1

0x72af,	// (0x00034e0a) area_vitu2_query_pane_t2_ParamLimits

0x72af,	// (0x00034e0a) area_vitu2_query_pane_t2

0x72c3,	// (0x00034e1e) area_vitu2_query_pane_t3_ParamLimits

0x72c3,	// (0x00034e1e) area_vitu2_query_pane_t3

0xd824,	// (0x0003b37f) area_vitu2_query_pane_t4_ParamLimits

0xd824,	// (0x0003b37f) area_vitu2_query_pane_t4

0xd84c,	// (0x0003b3a7) area_vitu2_query_pane_t5_ParamLimits

0xd84c,	// (0x0003b3a7) area_vitu2_query_pane_t5

0xd874,	// (0x0003b3cf) area_vitu2_query_pane_t6_ParamLimits

0xd874,	// (0x0003b3cf) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003d5cf) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003d5cf) area_vitu2_query_pane_t

0x72eb,	// (0x00034e46) bg_button_pane_cp018

0x72f9,	// (0x00034e54) bg_button_pane_cp021

0x7305,	// (0x00034e60) bg_button_pane_cp022

0x7314,	// (0x00034e6f) input_focus_pane_cp09

0xae76,	// (0x000389d1) aid_size_touch_mv_arrow_left

0xae9f,	// (0x000389fa) aid_size_touch_mv_arrow_right

0x6b6e,	// (0x000346c9) main_cset_slider_pane_g16_ParamLimits

0x6b6e,	// (0x000346c9) main_cset_slider_pane_g16

0x6b7a,	// (0x000346d5) main_cset_slider_pane_g17_ParamLimits

0x6b7a,	// (0x000346d5) main_cset_slider_pane_g17

0x7231,	// (0x00034d8c) cell_cam4_burst_pane_g1_ParamLimits

0x9bf4,	// (0x0003774f) compa_mode_pane

0x6d87,	// (0x000348e2) popup_vtel_slider_window_g3_ParamLimits

0x6d87,	// (0x000348e2) popup_vtel_slider_window_g3

0x6d9e,	// (0x000348f9) popup_vtel_slider_window_g4_ParamLimits

0x6d9e,	// (0x000348f9) popup_vtel_slider_window_g4

0x6db5,	// (0x00034910) popup_vtel_slider_window_t1_ParamLimits

0x6db5,	// (0x00034910) popup_vtel_slider_window_t1

0x1a23,	// (0x0002f57e) main_cl_pane

0x4ab9,	// (0x00032614) popup_imed_adjust2_window_ParamLimits

0xc4ab,	// (0x0003a006) bg_tb_trans_pane_cp05_ParamLimits

0xcdfa,	// (0x0003a955) popup_imed_adjust2_window_g1_ParamLimits

0xce09,	// (0x0003a964) popup_imed_adjust2_window_g2_ParamLimits

0xce09,	// (0x0003a964) popup_imed_adjust2_window_g2

0xce15,	// (0x0003a970) popup_imed_adjust2_window_g3_ParamLimits

0xce15,	// (0x0003a970) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003d33a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003d33a) popup_imed_adjust2_window_g

0xce21,	// (0x0003a97c) popup_imed_adjust2_window_t1_ParamLimits

0xce39,	// (0x0003a994) slider_imed_adjust_pane_ParamLimits

0xce4d,	// (0x0003a9a8) slider_imed_adjust_pane_g1_ParamLimits

0xce5d,	// (0x0003a9b8) slider_imed_adjust_pane_g2_ParamLimits

0xce6d,	// (0x0003a9c8) slider_imed_adjust_pane_g3_ParamLimits

0xce7e,	// (0x0003a9d9) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003d341) slider_imed_adjust_pane_g_ParamLimits

0x1267,	// (0x0002edc2) aid_touch_area_cam4_ParamLimits

0x1267,	// (0x0002edc2) aid_touch_area_cam4

0x6600,	// (0x0003415b) battery_pane_cp01

0x1336,	// (0x0002ee91) main_camera4_pane_g6_ParamLimits

0x1336,	// (0x0002ee91) main_camera4_pane_g6

0x1360,	// (0x0002eebb) main_camera4_pane_t2_ParamLimits

0x1360,	// (0x0002eebb) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003d444) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003d444) main_camera4_pane_t

0x1381,	// (0x0002eedc) aid_touch_area_vid4_ParamLimits

0x1381,	// (0x0002eedc) aid_touch_area_vid4

0x13d5,	// (0x0002ef30) main_video4_pane_g5_ParamLimits

0x13d5,	// (0x0002ef30) main_video4_pane_g5

0x13fa,	// (0x0002ef55) vid4_progress_pane_ParamLimits

0x13fa,	// (0x0002ef55) vid4_progress_pane

0xd49b,	// (0x0003aff6) main_cset_slider_pane_g18_ParamLimits

0xd49b,	// (0x0003aff6) main_cset_slider_pane_g18

0xd6e2,	// (0x0003b23d) cell_cam4_burst_pane_g2_ParamLimits

0xd6e2,	// (0x0003b23d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003d5a3) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003d5a3) cell_cam4_burst_pane_g

0xa331,	// (0x00037e8c) bg_cl_pane_ParamLimits

0xa331,	// (0x00037e8c) bg_cl_pane

0x7323,	// (0x00034e7e) cl_header_pane_ParamLimits

0x7323,	// (0x00034e7e) cl_header_pane

0x7337,	// (0x00034e92) cl_listscroll_pane_ParamLimits

0x7337,	// (0x00034e92) cl_listscroll_pane

0xd8c0,	// (0x0003b41b) bg_cl_pane_g1

0xd8c8,	// (0x0003b423) bg_cl_pane_g2

0xd8d0,	// (0x0003b42b) bg_cl_pane_g3

0xd8d8,	// (0x0003b433) bg_cl_pane_g4

0xd8e0,	// (0x0003b43b) bg_cl_pane_g5

0xd8e8,	// (0x0003b443) bg_cl_pane_g6

0xd8f0,	// (0x0003b44b) bg_cl_pane_g7

0xd8f8,	// (0x0003b453) bg_cl_pane_g8

0xd900,	// (0x0003b45b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003d5de) bg_cl_pane_g

0x7347,	// (0x00034ea2) aid_height_cl_leading_ParamLimits

0x7347,	// (0x00034ea2) aid_height_cl_leading

0x7353,	// (0x00034eae) aid_height_cl_text_ParamLimits

0x7353,	// (0x00034eae) aid_height_cl_text

0xa6b4,	// (0x0003820f) bg_cl_header_pane_ParamLimits

0xa6b4,	// (0x0003820f) bg_cl_header_pane

0x7372,	// (0x00034ecd) cl_header_pane_g1_ParamLimits

0x7372,	// (0x00034ecd) cl_header_pane_g1

0x7388,	// (0x00034ee3) cl_header_pane_t1_ParamLimits

0x7388,	// (0x00034ee3) cl_header_pane_t1

0xd908,	// (0x0003b463) cl_list_pane

0xd46e,	// (0x0003afc9) hc_scroll_pane_cp01

0xa800,	// (0x0003835b) bg_cl_header_pane_g1

0xd354,	// (0x0003aeaf) bg_cl_header_pane_g2

0xa820,	// (0x0003837b) bg_cl_header_pane_g3

0xd364,	// (0x0003aebf) bg_cl_header_pane_g4

0xd35c,	// (0x0003aeb7) bg_cl_header_pane_g5

0xd5a8,	// (0x0003b103) bg_cl_header_pane_g6

0xd37c,	// (0x0003aed7) bg_cl_header_pane_g7

0xd384,	// (0x0003aedf) bg_cl_header_pane_g8

0xd374,	// (0x0003aecf) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003d5f1) bg_cl_header_pane_g

0x73a1,	// (0x00034efc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73a1,	// (0x00034efc) hc_cl_list_double_graphic_heading_pane

0x73b2,	// (0x00034f0d) hc_cl_list_single_graphic_pane_ParamLimits

0x73b2,	// (0x00034f0d) hc_cl_list_single_graphic_pane

0x73c8,	// (0x00034f23) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73c8,	// (0x00034f23) hc_cl_list_single_graphic_pane_g1

0x73d4,	// (0x00034f2f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73d4,	// (0x00034f2f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003d604) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003d604) hc_cl_list_single_graphic_pane_g

0x73e8,	// (0x00034f43) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73e8,	// (0x00034f43) hc_cl_list_single_graphic_pane_t1

0x73c8,	// (0x00034f23) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73c8,	// (0x00034f23) hc_cl_list_double_graphic_heading_pane_g1

0x73fd,	// (0x00034f58) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73fd,	// (0x00034f58) hc_cl_list_double_graphic_heading_pane_g2

0x7411,	// (0x00034f6c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7411,	// (0x00034f6c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003d609) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003d609) hc_cl_list_double_graphic_heading_pane_g

0x7425,	// (0x00034f80) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7425,	// (0x00034f80) hc_cl_list_double_graphic_heading_pane_t1

0x743a,	// (0x00034f95) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x743a,	// (0x00034f95) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003d610) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003d610) hc_cl_list_double_graphic_heading_pane_t

0x18df,	// (0x0002f43a) vid4_progress_pane_g1

0x18f1,	// (0x0002f44c) vid4_progress_pane_g2

0xaae1,	// (0x0003863c) vid4_progress_pane_g3

0xa70e,	// (0x00038269) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003d615) vid4_progress_pane_g

0xa72c,	// (0x00038287) vid4_progress_pane_t1

0xa741,	// (0x0003829c) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003d620) vid4_progress_pane_t

0xa76c,	// (0x000382c7) wait_bar_pane_cp07

0xc6a6,	// (0x0003a201) blid_firmament_pane_ParamLimits

0xc6e9,	// (0x0003a244) popup_blid_sat_info2_window_g1

0xc70d,	// (0x0003a268) popup_blid_sat_info2_window_t3

0xc71b,	// (0x0003a276) popup_blid_sat_info2_window_t4

0xc729,	// (0x0003a284) popup_blid_sat_info2_window_t5

0xc737,	// (0x0003a292) popup_blid_sat_info2_window_t6

0xc747,	// (0x0003a2a2) popup_blid_sat_info2_window_t7

0xc755,	// (0x0003a2b0) popup_blid_sat_info2_window_t8

0xc763,	// (0x0003a2be) popup_blid_sat_info2_window_t9

0xc771,	// (0x0003a2cc) popup_blid_sat_info2_window_t10

0xc833,	// (0x0003a38e) aid_firma_cardinal_ParamLimits

0xc847,	// (0x0003a3a2) blid_firmament_pane_t1_ParamLimits

0xc85e,	// (0x0003a3b9) blid_firmament_pane_t2_ParamLimits

0xc875,	// (0x0003a3d0) blid_firmament_pane_t3_ParamLimits

0xc88c,	// (0x0003a3e7) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0003d233) blid_firmament_pane_t_ParamLimits

0xc8a3,	// (0x0003a3fe) blid_sat_info_pane_ParamLimits

0x1a09,	// (0x0002f564) main_cam_set_pane_ParamLimits

0x5dad,	// (0x00033908) aid_size_cell_colour_35_ParamLimits

0x5dcd,	// (0x00033928) aid_size_cell_colour_112_ParamLimits

0x5ded,	// (0x00033948) aid_size_cell_effect_ParamLimits

0xc4ab,	// (0x0003a006) bg_tb_trans_pane_cp02_ParamLimits

0xaa68,	// (0x000385c3) heading_imed_pane_ParamLimits

0x5e0d,	// (0x00033968) listscroll_imed_pane_ParamLimits

0xbad1,	// (0x0003962c) popup_call2_audio_first_window_g5_ParamLimits

0xbad1,	// (0x0003962c) popup_call2_audio_first_window_g5

0x1044,	// (0x0002eb9f) aid_size_touch_image3_arrow_left_ParamLimits

0x1044,	// (0x0002eb9f) aid_size_touch_image3_arrow_left

0x1070,	// (0x0002ebcb) aid_size_touch_image3_arrow_right_ParamLimits

0x1070,	// (0x0002ebcb) aid_size_touch_image3_arrow_right

0xa757,	// (0x000382b2) vid4_progress_pane_t3

0x6120,	// (0x00033c7b) main_hwr_training_symbol_option_pane_ParamLimits

0x6120,	// (0x00033c7b) main_hwr_training_symbol_option_pane

0xd0e7,	// (0x0003ac42) popup_hwr_training_preview_window_ParamLimits

0xd0e7,	// (0x0003ac42) popup_hwr_training_preview_window

0x0eef,	// (0x0002ea4a) hwr_training_navi_pane_g5_ParamLimits

0x0eef,	// (0x0002ea4a) hwr_training_navi_pane_g5

0xd342,	// (0x0003ae9d) popup_char_count_window

0x1a09,	// (0x0002f564) bg_popup_sub_pane_cp20_ParamLimits

0x184a,	// (0x0002f3a5) list_vitu2_match_list_pane_ParamLimits

0x1859,	// (0x0002f3b4) vitu2_page_scroll_pane_ParamLimits

0x1859,	// (0x0002f3b4) vitu2_page_scroll_pane

0xd933,	// (0x0003b48e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd933,	// (0x0003b48e) list_single_hwr_training_symbol_option_pane

0xd946,	// (0x0003b4a1) list_single_hwr_training_symbol_option_pane_g1

0xd94e,	// (0x0003b4a9) list_single_hwr_training_symbol_option_pane_t1

0xd95c,	// (0x0003b4b7) bg_button_pane_cp023

0xd965,	// (0x0003b4c0) bg_button_pane_cp024

0x7487,	// (0x00034fe2) vitu2_page_scroll_pane_g1

0x748f,	// (0x00034fea) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003d627) vitu2_page_scroll_pane_g

0x7497,	// (0x00034ff2) vitu2_page_scroll_pane_t1

0xd998,	// (0x0003b4f3) popup_char_count_window_g1

0xd9a1,	// (0x0003b4fc) popup_char_count_window_g2

0xd9aa,	// (0x0003b505) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003d62c) popup_char_count_window_g

0xd9b3,	// (0x0003b50e) popup_char_count_window_t1

0x1a23,	// (0x0002f57e) main_vded2_pane

0xcde6,	// (0x0003a941) aid_size_cell_imed_line

0xcdf0,	// (0x0003a94b) grid_imed_line_width_pane

0x66da,	// (0x00034235) vid4_indicators_pane_g4

0xd9c1,	// (0x0003b51c) cell_imed_line_width_pane_ParamLimits

0xd9c1,	// (0x0003b51c) cell_imed_line_width_pane

0xd9d5,	// (0x0003b530) cell_imed_line_width_pane_g1

0xd626,	// (0x0003b181) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003d633) cell_imed_line_width_pane_g

0x74a6,	// (0x00035001) main_vded2_pane_g1_ParamLimits

0x74a6,	// (0x00035001) main_vded2_pane_g1

0x74bc,	// (0x00035017) main_vded2_pane_g2_ParamLimits

0x74bc,	// (0x00035017) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003d638) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003d638) main_vded2_pane_g

0x74ce,	// (0x00035029) vded2_slider_pane_ParamLimits

0x74ce,	// (0x00035029) vded2_slider_pane

0x74de,	// (0x00035039) aid_size_touch_vded2_end

0x74e8,	// (0x00035043) aid_size_touch_vded2_playhead

0xd9de,	// (0x0003b539) aid_size_touch_vded2_start

0xd9e6,	// (0x0003b541) vded2_slider_bg_pane

0xd9ef,	// (0x0003b54a) vded2_slider_pane_g1

0xd9f8,	// (0x0003b553) vded2_slider_pane_g2

0x74f2,	// (0x0003504d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003d63d) vded2_slider_pane_g

0xda00,	// (0x0003b55b) vded2_slider_bg_pane_g1

0xda09,	// (0x0003b564) vded2_slider_bg_pane_g2

0xda12,	// (0x0003b56d) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003d644) vded2_slider_bg_pane_g

0x41ec,	// (0x00031d47) aid_postcard_touch_down_pane_ParamLimits

0x41ec,	// (0x00031d47) aid_postcard_touch_down_pane

0x4202,	// (0x00031d5d) aid_postcard_touch_up_pane_ParamLimits

0x4202,	// (0x00031d5d) aid_postcard_touch_up_pane

0x1a23,	// (0x0002f57e) main_blid2_pane

0x4a9f,	// (0x000325fa) popup_blid2_search_window

0x9bf4,	// (0x0003774f) blid2_gps_pane

0x9bf4,	// (0x0003774f) blid2_navig_pane

0x9bf4,	// (0x0003774f) blid2_search_pane

0x9bf4,	// (0x0003774f) blid2_tripm_pane

0x74fd,	// (0x00035058) blid2_search_pane_g1_ParamLimits

0x74fd,	// (0x00035058) blid2_search_pane_g1

0x7517,	// (0x00035072) blid2_search_pane_t1_ParamLimits

0x7517,	// (0x00035072) blid2_search_pane_t1

0x7529,	// (0x00035084) aid_size_cell_blid2_gps_ParamLimits

0x7529,	// (0x00035084) aid_size_cell_blid2_gps

0x7541,	// (0x0003509c) blid2_gps_pane_g1_ParamLimits

0x7541,	// (0x0003509c) blid2_gps_pane_g1

0x7555,	// (0x000350b0) grid_blid2_satellite_pane_ParamLimits

0x7555,	// (0x000350b0) grid_blid2_satellite_pane

0x756f,	// (0x000350ca) blid2_navig_pane_g1_ParamLimits

0x756f,	// (0x000350ca) blid2_navig_pane_g1

0x757b,	// (0x000350d6) blid2_navig_pane_t1_ParamLimits

0x757b,	// (0x000350d6) blid2_navig_pane_t1

0x7596,	// (0x000350f1) blid2_navig_pane_t2_ParamLimits

0x7596,	// (0x000350f1) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003d64b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003d64b) blid2_navig_pane_t

0x75b1,	// (0x0003510c) blid2_navig_ring_pane_ParamLimits

0x75b1,	// (0x0003510c) blid2_navig_ring_pane

0x75ca,	// (0x00035125) blid2_speed_pane_ParamLimits

0x75ca,	// (0x00035125) blid2_speed_pane

0x75d6,	// (0x00035131) blid2_tripm_pane_g1_ParamLimits

0x75d6,	// (0x00035131) blid2_tripm_pane_g1

0x75ef,	// (0x0003514a) blid2_tripm_pane_g2_ParamLimits

0x75ef,	// (0x0003514a) blid2_tripm_pane_g2

0x7603,	// (0x0003515e) blid2_tripm_pane_g3_ParamLimits

0x7603,	// (0x0003515e) blid2_tripm_pane_g3

0x7617,	// (0x00035172) blid2_tripm_pane_g4_ParamLimits

0x7617,	// (0x00035172) blid2_tripm_pane_g4

0x762b,	// (0x00035186) blid2_tripm_pane_g5_ParamLimits

0x762b,	// (0x00035186) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003d650) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003d650) blid2_tripm_pane_g

0x7651,	// (0x000351ac) blid2_tripm_pane_t1_ParamLimits

0x7651,	// (0x000351ac) blid2_tripm_pane_t1

0x766c,	// (0x000351c7) blid2_tripm_pane_t2_ParamLimits

0x766c,	// (0x000351c7) blid2_tripm_pane_t2

0x7685,	// (0x000351e0) blid2_tripm_pane_t3_ParamLimits

0x7685,	// (0x000351e0) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003d65d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003d65d) blid2_tripm_pane_t

0x76cc,	// (0x00035227) cell_blid2_satellite_pane_ParamLimits

0x76cc,	// (0x00035227) cell_blid2_satellite_pane

0x76ea,	// (0x00035245) cell_blid2_satellite_pane_g1

0xda1b,	// (0x0003b576) cell_blid2_satellite_pane_t1

0xc8b3,	// (0x0003a40e) blid2_speed_pane_g1

0xda29,	// (0x0003b584) blid2_speed_pane_t1

0xda37,	// (0x0003b592) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003d666) blid2_speed_pane_t

0xc8b3,	// (0x0003a40e) blid2_navig_ring_pane_g1

0x76f3,	// (0x0003524e) blid2_navig_ring_pane_g2

0x76fb,	// (0x00035256) blid2_navig_ring_pane_g3

0x7703,	// (0x0003525e) blid2_navig_ring_pane_g4

0x770b,	// (0x00035266) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003d66b) blid2_navig_ring_pane_g

0x9bf4,	// (0x0003774f) bg_popup_window_pane_cp011

0xda45,	// (0x0003b5a0) popup_blid2_search_window_g1

0xda4d,	// (0x0003b5a8) popup_blid2_search_window_t1

0xda5b,	// (0x0003b5b6) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003d676) popup_blid2_search_window_t

0xa637,	// (0x00038192) main_browser_pane_g1

0xa331,	// (0x00037e8c) main_browser_pane_ParamLimits

0x1a09,	// (0x0002f564) bg_button_pane_cp011_ParamLimits

0x17c0,	// (0x0002f31b) cell_vitu2_function_pane_g1_ParamLimits

0xc4ab,	// (0x0003a006) bg_popup_sub_pane_cp22_ParamLimits

0x6fbd,	// (0x00034b18) input_focus_pane_cp08_ParamLimits

0x6fd4,	// (0x00034b2f) popup_vitu2_query_button_pane_ParamLimits

0x6fd4,	// (0x00034b2f) popup_vitu2_query_button_pane

0x6fe5,	// (0x00034b40) popup_vitu2_query_input_button_pane

0xd5e3,	// (0x0003b13e) popup_vitu2_query_window_g1_ParamLimits

0x6fef,	// (0x00034b4a) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003d577) popup_vitu2_query_window_g_ParamLimits

0x9bf4,	// (0x0003774f) bg_button_pane_cp026

0x7713,	// (0x0003526e) popup_vitu2_query_input_button_pane_g1

0x9bf4,	// (0x0003774f) bg_button_pane_cp025

0xda69,	// (0x0003b5c4) popup_vitu2_query_button_pane_t1

0x520c,	// (0x00032d67) main_mp3_pane_t6

0x521a,	// (0x00032d75) popup_slider_window_cp01

0x663e,	// (0x00034199) cam4_battery_pane

0x6697,	// (0x000341f2) cam4_battery_pane_cp02

0xa706,	// (0x00038261) cam4_battery_pane_cp01

0xa706,	// (0x00038261) cam4_battery_pane_cp03

0xd62e,	// (0x0003b189) cam4_battery_pane_g1

0xc8b3,	// (0x0003a40e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003d67b) cam4_battery_pane_g

0xc77f,	// (0x0003a2da) popup_blid_sat_info2_window_t11

0xae76,	// (0x000389d1) aid_size_touch_mv_arrow_left_ParamLimits

0xae9f,	// (0x000389fa) aid_size_touch_mv_arrow_right_ParamLimits

0xaefd,	// (0x00038a58) navi_pane_g1_ParamLimits

0xaf09,	// (0x00038a64) navi_pane_g2_ParamLimits

0xaf37,	// (0x00038a92) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0003cf45) navi_pane_g_ParamLimits

0x3c7d,	// (0x000317d8) navi_pane_mv_t1_ParamLimits

0x5e19,	// (0x00033974) grid_imed_effect_pane_ParamLimits

0x2804,	// (0x0003035f) aid_placing_vt_slider_lsc

0xa586,	// (0x000380e1) aid_placing_vt_slider_prt

0xa6b4,	// (0x0003820f) bg_tb_trans_pane_cp01_ParamLimits

0xca3f,	// (0x0003a59a) popup_image_details_window_g1_ParamLimits

0xca52,	// (0x0003a5ad) popup_image_details_window_g2_ParamLimits

0xca67,	// (0x0003a5c2) popup_image_details_window_g3_ParamLimits

0xca67,	// (0x0003a5c2) popup_image_details_window_g3

0xf71d,	// (0x0003d278) popup_image_details_window_g_ParamLimits

0xca7b,	// (0x0003a5d6) popup_image_details_window_t1_ParamLimits

0xca99,	// (0x0003a5f4) popup_image_details_window_t2_ParamLimits

0xcab2,	// (0x0003a60d) popup_image_details_window_t3_ParamLimits

0xcac6,	// (0x0003a621) popup_image_details_window_t4_ParamLimits

0xcae1,	// (0x0003a63c) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0003d27f) popup_image_details_window_t_ParamLimits

0x735f,	// (0x00034eba) cl_header_name_pane_ParamLimits

0x735f,	// (0x00034eba) cl_header_name_pane

0x771b,	// (0x00035276) cl_header_name_pane_t1_ParamLimits

0x771b,	// (0x00035276) cl_header_name_pane_t1

0x773c,	// (0x00035297) cl_header_name_pane_t2_ParamLimits

0x773c,	// (0x00035297) cl_header_name_pane_t2

0x777e,	// (0x000352d9) cl_header_name_pane_t3_ParamLimits

0x777e,	// (0x000352d9) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003d680) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003d680) cl_header_name_pane_t

0xafc6,	// (0x00038b21) navi_pane_mv_g2_ParamLimits

0xd2ff,	// (0x0003ae5a) field_vitu2_entry_pane_g1_ParamLimits

0xd30b,	// (0x0003ae66) field_vitu2_entry_pane_g2_ParamLimits

0xd317,	// (0x0003ae72) field_vitu2_entry_pane_g3_ParamLimits

0xd317,	// (0x0003ae72) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003d476) field_vitu2_entry_pane_g_ParamLimits

0x164b,	// (0x0002f1a6) cell_vitu2_itu_pane_g1_ParamLimits

0x165b,	// (0x0002f1b6) cell_vitu2_itu_pane_g2_ParamLimits

0x165b,	// (0x0002f1b6) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003d482) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003d482) cell_vitu2_itu_pane_g

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp05_ParamLimits

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp05

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp03

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp04

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp10_ParamLimits

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp10

0x7305,	// (0x00034e60) bg_vkb2_func_pane_cp08

0x72eb,	// (0x00034e46) bg_vkb2_func_pane_cp06

0x72f9,	// (0x00034e54) bg_vkb2_func_pane_cp07

0xd96e,	// (0x0003b4c9) bg_vkb2_func_pane_cp11_ParamLimits

0xd96e,	// (0x0003b4c9) bg_vkb2_func_pane_cp11

0xd983,	// (0x0003b4de) bg_vkb2_func_pane_cp12_ParamLimits

0xd983,	// (0x0003b4de) bg_vkb2_func_pane_cp12

0x9bf4,	// (0x0003774f) bg_vkb2_func_pane_cp09

0xd354,	// (0x0003aeaf) bg_vkb2_func_pane_g1

0xa820,	// (0x0003837b) bg_vkb2_func_pane_g2

0xd35c,	// (0x0003aeb7) bg_vkb2_func_pane_g3

0xd364,	// (0x0003aebf) bg_vkb2_func_pane_g4

0xd5a8,	// (0x0003b103) bg_vkb2_func_pane_g5

0xd37c,	// (0x0003aed7) bg_vkb2_func_pane_g6

0xd384,	// (0x0003aedf) bg_vkb2_func_pane_g7

0xd374,	// (0x0003aecf) bg_vkb2_func_pane_g8

0xa800,	// (0x0003835b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003d687) bg_vkb2_func_pane_g

0x763f,	// (0x0003519a) blid2_tripm_pane_g6_ParamLimits

0x763f,	// (0x0003519a) blid2_tripm_pane_g6

0xd19f,	// (0x0003acfa) mp4_progress_pane_g1

0x76b8,	// (0x00035213) blid2_tripm_values_pane_ParamLimits

0x76b8,	// (0x00035213) blid2_tripm_values_pane

0x77af,	// (0x0003530a) blid2_tripm_values_pane_t1

0x77bd,	// (0x00035318) blid2_tripm_values_pane_t2

0x77cb,	// (0x00035326) blid2_tripm_values_pane_t3

0x77d9,	// (0x00035334) blid2_tripm_values_pane_t4

0x77e7,	// (0x00035342) blid2_tripm_values_pane_t5

0x77f5,	// (0x00035350) blid2_tripm_values_pane_t6

0x7803,	// (0x0003535e) blid2_tripm_values_pane_t7

0x7811,	// (0x0003536c) blid2_tripm_values_pane_t8

0x781f,	// (0x0003537a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003d69a) blid2_tripm_values_pane_t

0x2846,	// (0x000303a1) call_video_pane_t1_ParamLimits

0x2864,	// (0x000303bf) call_video_pane_t2_ParamLimits

0xf273,	// (0x0003cdce) call_video_pane_t_ParamLimits

0x416c,	// (0x00031cc7) msg_header_pane_g1_ParamLimits

0xb1b5,	// (0x00038d10) msg_header_pane_g2_ParamLimits

0xb1b5,	// (0x00038d10) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0003cfe8) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0003cfe8) msg_header_pane_g

0xa331,	// (0x00037e8c) main_clock2_pane_ParamLimits

0x5b90,	// (0x000336eb) grid_clock2_toolbar_pane_ParamLimits

0x5b90,	// (0x000336eb) grid_clock2_toolbar_pane

0x5b90,	// (0x000336eb) listscroll_clock2_pane_ParamLimits

0x5b90,	// (0x000336eb) listscroll_clock2_pane

0x5c85,	// (0x000337e0) main_clock2_pane_t3_ParamLimits

0x5c85,	// (0x000337e0) main_clock2_pane_t3

0x5ca9,	// (0x00033804) main_clock2_pane_t4_ParamLimits

0x5ca9,	// (0x00033804) main_clock2_pane_t4

0xda77,	// (0x0003b5d2) cell_clock2_toolbar_pane

0xda7f,	// (0x0003b5da) cell_clock2_toolbar_pane_cp01

0xda7f,	// (0x0003b5da) cell_clock2_toolbar_pane_cp02

0xda87,	// (0x0003b5e2) cell_clock2_toolbar_pane_cp03

0xda8f,	// (0x0003b5ea) list_clock2_pane

0xadec,	// (0x00038947) scroll_pane_cp10

0xda97,	// (0x0003b5f2) list_single_clock2_pane_ParamLimits

0xda97,	// (0x0003b5f2) list_single_clock2_pane

0xb02d,	// (0x00038b88) list_highlight_pane_cp08

0xdaa4,	// (0x0003b5ff) list_single_clock2_pane_t1

0xdab2,	// (0x0003b60d) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003d6ad) list_single_clock2_pane_t

0x9bf4,	// (0x0003774f) bg_button_pane_cp10

0xdac0,	// (0x0003b61b) cell_clock2_toolbar_pane_g1

0x06ac,	// (0x0002e207) aid_main_viewer_pane_g1_ParamLimits

0x06ac,	// (0x0002e207) aid_main_viewer_pane_g1

0x06ba,	// (0x0002e215) aid_main_viewer_pane_g2_ParamLimits

0x06ba,	// (0x0002e215) aid_main_viewer_pane_g2

0x4192,	// (0x00031ced) aid_main_viewer_pane_g3_ParamLimits

0x4192,	// (0x00031ced) aid_main_viewer_pane_g3

0x41a1,	// (0x00031cfc) aid_main_viewer_pane_g4_ParamLimits

0x41a1,	// (0x00031cfc) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0003cff9) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003cff9) aid_main_viewer_pane_g

0x06ee,	// (0x0002e249) main_calc_pane_ParamLimits

0x0714,	// (0x0002e26f) main_dialer2_pane_ParamLimits

0x1a23,	// (0x0002f57e) main_cam6_pane

0x1a23,	// (0x0002f57e) main_vid6_pane

0x5b9c,	// (0x000336f7) listscroll_gen_pane_cp06_ParamLimits

0x5b9c,	// (0x000336f7) listscroll_gen_pane_cp06

0x5ccc,	// (0x00033827) main_clock2_pane_t5_ParamLimits

0x5ccc,	// (0x00033827) main_clock2_pane_t5

0x5d26,	// (0x00033881) aid_call2_pane_cp10_ParamLimits

0x5d38,	// (0x00033893) aid_call_pane_cp10_ParamLimits

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d4a,	// (0x000338a5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d4a,	// (0x000338a5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae6a,	// (0x000389c5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003d32f) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d5c,	// (0x000338b7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6431,	// (0x00033f8c) cell_dialer2_keypad_pane_g2_ParamLimits

0x6431,	// (0x00033f8c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003d415) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003d415) cell_dialer2_keypad_pane_g

0x644d,	// (0x00033fa8) cell_dialer2_keypad_pane_t1

0x6a61,	// (0x000345bc) main_cset_text2_pane_ParamLimits

0x6a61,	// (0x000345bc) main_cset_text2_pane

0xd818,	// (0x0003b373) area_vitu2_query_pane_g1_ParamLimits

0x728a,	// (0x00034de5) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003d5ca) area_vitu2_query_pane_g_ParamLimits

0xd89c,	// (0x0003b3f7) area_vitu2_query_pane_t7_ParamLimits

0xd89c,	// (0x0003b3f7) area_vitu2_query_pane_t7

0x72eb,	// (0x00034e46) bg_button_pane_cp018_ParamLimits

0x72f9,	// (0x00034e54) bg_button_pane_cp021_ParamLimits

0x7305,	// (0x00034e60) bg_button_pane_cp022_ParamLimits

0x7305,	// (0x00034e60) bg_vkb2_func_pane_cp08_ParamLimits

0x72eb,	// (0x00034e46) bg_vkb2_func_pane_cp06_ParamLimits

0x72f9,	// (0x00034e54) bg_vkb2_func_pane_cp07_ParamLimits

0x7314,	// (0x00034e6f) input_focus_pane_cp09_ParamLimits

0xa77e,	// (0x000382d9) cam6_autofocus_pane_ParamLimits

0xa77e,	// (0x000382d9) cam6_autofocus_pane

0x1903,	// (0x0002f45e) cam6_image_uncrop_pane_ParamLimits

0x1903,	// (0x0002f45e) cam6_image_uncrop_pane

0x1912,	// (0x0002f46d) cam6_indi_pane_ParamLimits

0x1912,	// (0x0002f46d) cam6_indi_pane

0x1928,	// (0x0002f483) cam6_mode_pane_ParamLimits

0x1928,	// (0x0002f483) cam6_mode_pane

0x193a,	// (0x0002f495) cam6_timer_pane_ParamLimits

0x193a,	// (0x0002f495) cam6_timer_pane

0x1946,	// (0x0002f4a1) cam6_zoom_pane_ParamLimits

0x1946,	// (0x0002f4a1) cam6_zoom_pane

0x782d,	// (0x00035388) cam6_mode_pane_g1_ParamLimits

0x782d,	// (0x00035388) cam6_mode_pane_g1

0x783d,	// (0x00035398) cam6_mode_pane_g2_ParamLimits

0x783d,	// (0x00035398) cam6_mode_pane_g2

0x784d,	// (0x000353a8) cam6_mode_pane_g3_ParamLimits

0x784d,	// (0x000353a8) cam6_mode_pane_g3

0x785d,	// (0x000353b8) cam6_mode_pane_g4_ParamLimits

0x785d,	// (0x000353b8) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003d6b2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003d6b2) cam6_mode_pane_g

0xd5ef,	// (0x0003b14a) bg_tb_trans_pane_cp08_ParamLimits

0xd5ef,	// (0x0003b14a) bg_tb_trans_pane_cp08

0xdac8,	// (0x0003b623) cam6_battery_pane_ParamLimits

0xdac8,	// (0x0003b623) cam6_battery_pane

0xdade,	// (0x0003b639) cam6_indi_pane_g1_ParamLimits

0xdade,	// (0x0003b639) cam6_indi_pane_g1

0xdaf0,	// (0x0003b64b) cam6_indi_pane_g2_ParamLimits

0xdaf0,	// (0x0003b64b) cam6_indi_pane_g2

0xdb02,	// (0x0003b65d) cam6_indi_pane_g3_ParamLimits

0xdb02,	// (0x0003b65d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003d6bb) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003d6bb) cam6_indi_pane_g

0xdb14,	// (0x0003b66f) cam6_indi_pane_t1_ParamLimits

0xdb14,	// (0x0003b66f) cam6_indi_pane_t1

0x786d,	// (0x000353c8) cam6_autofocus_pane_g1

0x7875,	// (0x000353d0) cam6_autofocus_pane_g2

0x787d,	// (0x000353d8) cam6_autofocus_pane_g3

0x7885,	// (0x000353e0) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003d6c2) cam6_autofocus_pane_g

0xdb3a,	// (0x0003b695) cam6_timer_pane_g1

0xdb42,	// (0x0003b69d) cam6_timer_pane_t1

0xdb50,	// (0x0003b6ab) cam6_zoom_cont_pane

0xdb58,	// (0x0003b6b3) cam6_zoom_pane_g1

0xdb60,	// (0x0003b6bb) cam6_zoom_pane_g2

0x788d,	// (0x000353e8) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003d6cb) cam6_zoom_pane_g

0xc8b3,	// (0x0003a40e) cam6_battery_pane_g1

0xc8b3,	// (0x0003a40e) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0003d23c) cam6_battery_pane_g

0xdb68,	// (0x0003b6c3) cam6_zoom_cont_pane_g1

0xdb71,	// (0x0003b6cc) cam6_zoom_cont_pane_g2

0xdb7a,	// (0x0003b6d5) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003d6d2) cam6_zoom_cont_pane_g

0x78aa,	// (0x00035405) cam6_mode_pane_cp_ParamLimits

0x78aa,	// (0x00035405) cam6_mode_pane_cp

0x78bc,	// (0x00035417) cam6_zoom_pane_cp_ParamLimits

0x78bc,	// (0x00035417) cam6_zoom_pane_cp

0x78c8,	// (0x00035423) vid6_image_uncrop_cif_pane_ParamLimits

0x78c8,	// (0x00035423) vid6_image_uncrop_cif_pane

0x78d8,	// (0x00035433) vid6_image_uncrop_nhd_pane_ParamLimits

0x78d8,	// (0x00035433) vid6_image_uncrop_nhd_pane

0x78e7,	// (0x00035442) vid6_image_uncrop_vga_pane_ParamLimits

0x78e7,	// (0x00035442) vid6_image_uncrop_vga_pane

0x78f6,	// (0x00035451) vid6_image_uncrop_wvga_pane_ParamLimits

0x78f6,	// (0x00035451) vid6_image_uncrop_wvga_pane

0x7905,	// (0x00035460) vid6_indi_pane_ParamLimits

0x7905,	// (0x00035460) vid6_indi_pane

0xd5ef,	// (0x0003b14a) bg_tb_trans_pane_cp09_ParamLimits

0xd5ef,	// (0x0003b14a) bg_tb_trans_pane_cp09

0xdb92,	// (0x0003b6ed) cam6_battery_pane_cp_ParamLimits

0xdb92,	// (0x0003b6ed) cam6_battery_pane_cp

0xdb9e,	// (0x0003b6f9) vid6_indi_pane_g1_ParamLimits

0xdb9e,	// (0x0003b6f9) vid6_indi_pane_g1

0xdbb0,	// (0x0003b70b) vid6_indi_pane_g2_ParamLimits

0xdbb0,	// (0x0003b70b) vid6_indi_pane_g2

0xdbc2,	// (0x0003b71d) vid6_indi_pane_g3_ParamLimits

0xdbc2,	// (0x0003b71d) vid6_indi_pane_g3

0xdbd7,	// (0x0003b732) vid6_indi_pane_g4_ParamLimits

0xdbd7,	// (0x0003b732) vid6_indi_pane_g4

0xdbec,	// (0x0003b747) vid6_indi_pane_g5_ParamLimits

0xdbec,	// (0x0003b747) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003d6d9) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003d6d9) vid6_indi_pane_g

0xdc06,	// (0x0003b761) vid6_indi_pane_t1_ParamLimits

0xdc06,	// (0x0003b761) vid6_indi_pane_t1

0xdc1c,	// (0x0003b777) vid6_indi_pane_t2_ParamLimits

0xdc1c,	// (0x0003b777) vid6_indi_pane_t2

0xdc44,	// (0x0003b79f) vid6_indi_pane_t3_ParamLimits

0xdc44,	// (0x0003b79f) vid6_indi_pane_t3

0xdc6c,	// (0x0003b7c7) vid6_indi_pane_t4_ParamLimits

0xdc6c,	// (0x0003b7c7) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003d6e4) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003d6e4) vid6_indi_pane_t

0xdc90,	// (0x0003b7eb) wait_bar_pane_cp08

0x791d,	// (0x00035478) main_cset_text2_pane_t1_ParamLimits

0x791d,	// (0x00035478) main_cset_text2_pane_t1

0x7895,	// (0x000353f0) listscroll_gen_pane_cp06_t1_ParamLimits

0x7895,	// (0x000353f0) listscroll_gen_pane_cp06_t1

0x1a23,	// (0x0002f57e) main_cam6_set_pane

0x6630,	// (0x0003418b) bg_tb_trans_pane_cp06_ParamLimits

0x6646,	// (0x000341a1) cam4_indicators_pane_g1_ParamLimits

0x6657,	// (0x000341b2) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003d452) cam4_indicators_pane_g_ParamLimits

0x6675,	// (0x000341d0) cam4_indicators_pane_t1_ParamLimits

0x1a09,	// (0x0002f564) bg_tb_trans_pane_cp07_ParamLimits

0x66a1,	// (0x000341fc) vid4_indicators_pane_g1_ParamLimits

0x66b5,	// (0x00034210) vid4_indicators_pane_g2_ParamLimits

0x66c9,	// (0x00034224) vid4_indicators_pane_g3_ParamLimits

0x66da,	// (0x00034235) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003d464) vid4_indicators_pane_g_ParamLimits

0x66f8,	// (0x00034253) vid4_indicators_pane_t1_ParamLimits

0x18df,	// (0x0002f43a) vid4_progress_pane_g1_ParamLimits

0x18f1,	// (0x0002f44c) vid4_progress_pane_g2_ParamLimits

0xaae1,	// (0x0003863c) vid4_progress_pane_g3_ParamLimits

0xa70e,	// (0x00038269) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003d615) vid4_progress_pane_g_ParamLimits

0xa72c,	// (0x00038287) vid4_progress_pane_t1_ParamLimits

0xa741,	// (0x0003829c) vid4_progress_pane_t2_ParamLimits

0xa757,	// (0x000382b2) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003d620) vid4_progress_pane_t_ParamLimits

0xa76c,	// (0x000382c7) wait_bar_pane_cp07_ParamLimits

0x793a,	// (0x00035495) main_cam6_set_pane_g2_ParamLimits

0x793a,	// (0x00035495) main_cam6_set_pane_g2

0x795e,	// (0x000354b9) main_cset6_listscroll_pane_ParamLimits

0x795e,	// (0x000354b9) main_cset6_listscroll_pane

0x797e,	// (0x000354d9) main_cset6_slider_pane_ParamLimits

0x797e,	// (0x000354d9) main_cset6_slider_pane

0x7994,	// (0x000354ef) main_cset6_text2_pane_ParamLimits

0x7994,	// (0x000354ef) main_cset6_text2_pane

0xdc9f,	// (0x0003b7fa) main_cset6_text_pane

0xdca7,	// (0x0003b802) main_cset_list_pane_copy1_ParamLimits

0xdca7,	// (0x0003b802) main_cset_list_pane_copy1

0xdcb7,	// (0x0003b812) scroll_pane_cp028_copy1

0x79a2,	// (0x000354fd) cset_list_set_pane_copy1

0x79b3,	// (0x0003550e) aid_position_infowindow_above_copy1

0x79bb,	// (0x00035516) aid_position_infowindow_below_copy1

0x79c3,	// (0x0003551e) cset_list_set_pane_g1_copy1

0x79cb,	// (0x00035526) cset_list_set_pane_g3_copy1_ParamLimits

0x79cb,	// (0x00035526) cset_list_set_pane_g3_copy1

0x79da,	// (0x00035535) cset_list_set_pane_t1_copy1_ParamLimits

0x79da,	// (0x00035535) cset_list_set_pane_t1_copy1

0xa6b4,	// (0x0003820f) list_highlight_pane_cp021_copy1_ParamLimits

0xa6b4,	// (0x0003820f) list_highlight_pane_cp021_copy1

0xdcc0,	// (0x0003b81b) cset6_slider_pane_ParamLimits

0xdcc0,	// (0x0003b81b) cset6_slider_pane

0xdcec,	// (0x0003b847) main_cset6_slider_pane_g1_ParamLimits

0xdcec,	// (0x0003b847) main_cset6_slider_pane_g1

0x79ef,	// (0x0003554a) main_cset6_slider_pane_g2_ParamLimits

0x79ef,	// (0x0003554a) main_cset6_slider_pane_g2

0xdd14,	// (0x0003b86f) main_cset6_slider_pane_g3_ParamLimits

0xdd14,	// (0x0003b86f) main_cset6_slider_pane_g3

0x7a17,	// (0x00035572) main_cset6_slider_pane_g4_ParamLimits

0x7a17,	// (0x00035572) main_cset6_slider_pane_g4

0x7a23,	// (0x0003557e) main_cset6_slider_pane_g5_ParamLimits

0x7a23,	// (0x0003557e) main_cset6_slider_pane_g5

0xd483,	// (0x0003afde) main_cset6_slider_pane_g7_ParamLimits

0xd483,	// (0x0003afde) main_cset6_slider_pane_g7

0xd48f,	// (0x0003afea) main_cset6_slider_pane_g8_ParamLimits

0xd48f,	// (0x0003afea) main_cset6_slider_pane_g8

0x6b0e,	// (0x00034669) main_cset6_slider_pane_g9_ParamLimits

0x6b0e,	// (0x00034669) main_cset6_slider_pane_g9

0x6b1a,	// (0x00034675) main_cset6_slider_pane_g10_ParamLimits

0x6b1a,	// (0x00034675) main_cset6_slider_pane_g10

0x6b26,	// (0x00034681) main_cset6_slider_pane_g11_ParamLimits

0x6b26,	// (0x00034681) main_cset6_slider_pane_g11

0x6b32,	// (0x0003468d) main_cset6_slider_pane_g12_ParamLimits

0x6b32,	// (0x0003468d) main_cset6_slider_pane_g12

0x6b3e,	// (0x00034699) main_cset6_slider_pane_g13_ParamLimits

0x6b3e,	// (0x00034699) main_cset6_slider_pane_g13

0x6b4a,	// (0x000346a5) main_cset6_slider_pane_g14_ParamLimits

0x6b4a,	// (0x000346a5) main_cset6_slider_pane_g14

0x7a2f,	// (0x0003558a) main_cset6_slider_pane_g15_ParamLimits

0x7a2f,	// (0x0003558a) main_cset6_slider_pane_g15

0x6b6e,	// (0x000346c9) main_cset6_slider_pane_g16_ParamLimits

0x6b6e,	// (0x000346c9) main_cset6_slider_pane_g16

0x6b7a,	// (0x000346d5) main_cset6_slider_pane_g17_ParamLimits

0x6b7a,	// (0x000346d5) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003d6ed) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003d6ed) main_cset6_slider_pane_g

0xdd20,	// (0x0003b87b) main_cset6_slider_pane_t1_ParamLimits

0xdd20,	// (0x0003b87b) main_cset6_slider_pane_t1

0x7a5f,	// (0x000355ba) main_cset6_slider_pane_t2_ParamLimits

0x7a5f,	// (0x000355ba) main_cset6_slider_pane_t2

0x7a8a,	// (0x000355e5) main_cset6_slider_pane_t3_ParamLimits

0x7a8a,	// (0x000355e5) main_cset6_slider_pane_t3

0x7ab5,	// (0x00035610) main_cset6_slider_pane_t4_ParamLimits

0x7ab5,	// (0x00035610) main_cset6_slider_pane_t4

0x7ae0,	// (0x0003563b) main_cset6_slider_pane_t5_ParamLimits

0x7ae0,	// (0x0003563b) main_cset6_slider_pane_t5

0xdd61,	// (0x0003b8bc) main_cset6_slider_pane_t7_ParamLimits

0xdd61,	// (0x0003b8bc) main_cset6_slider_pane_t7

0x7b0b,	// (0x00035666) main_cset6_slider_pane_t8_ParamLimits

0x7b0b,	// (0x00035666) main_cset6_slider_pane_t8

0x7b2f,	// (0x0003568a) main_cset6_slider_pane_t9_ParamLimits

0x7b2f,	// (0x0003568a) main_cset6_slider_pane_t9

0x7b53,	// (0x000356ae) main_cset6_slider_pane_t10_ParamLimits

0x7b53,	// (0x000356ae) main_cset6_slider_pane_t10

0x7b77,	// (0x000356d2) main_cset6_slider_pane_t11_ParamLimits

0x7b77,	// (0x000356d2) main_cset6_slider_pane_t11

0xdd97,	// (0x0003b8f2) main_cset6_slider_pane_t14_ParamLimits

0xdd97,	// (0x0003b8f2) main_cset6_slider_pane_t14

0xddd0,	// (0x0003b92b) main_cset6_slider_pane_t15_ParamLimits

0xddd0,	// (0x0003b92b) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003d712) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003d712) main_cset6_slider_pane_t

0xd5fd,	// (0x0003b158) cset_slider_pane_g1_copy1

0xd606,	// (0x0003b161) cset_slider_pane_g2_copy1

0xd60f,	// (0x0003b16a) cset_slider_pane_g3_copy1

0x9bf4,	// (0x0003774f) bg_popup_sub_pane_cp011_copy1

0xde09,	// (0x0003b964) main_cset_text_pane_g1_copy1

0xd640,	// (0x0003b19b) main_cset_text_pane_t1_copy1

0xd64e,	// (0x0003b1a9) main_cset_text_pane_t2_copy1

0xd65c,	// (0x0003b1b7) main_cset_text_pane_t3_copy1

0xd66a,	// (0x0003b1c5) main_cset_text_pane_t4_copy1

0xd678,	// (0x0003b1d3) main_cset_text_pane_t5_copy1

0xde11,	// (0x0003b96c) main_cset_text_pane_t6_copy1

0xd694,	// (0x0003b1ef) main_cset_text_pane_t7_copy1

0x791d,	// (0x00035478) main_cset_text2_pane_t1_copy1

0x1a09,	// (0x0002f564) main_ncimui_pane

0x095e,	// (0x0002e4b9) popup_query_ncimui_window_ParamLimits

0x095e,	// (0x0002e4b9) popup_query_ncimui_window

0xcb90,	// (0x0003a6eb) field_cale_ev2_pane_g4_ParamLimits

0xcb90,	// (0x0003a6eb) field_cale_ev2_pane_g4

0x61d1,	// (0x00033d2c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61d1,	// (0x00033d2c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003d3f0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003d3f0) cell_video_dialer_keypad_pane_g

0x61e9,	// (0x00033d44) cell_video_dialer_keypad_pane_t1

0x9bf4,	// (0x0003774f) bg_popup_window_pane_cp012

0xacb9,	// (0x00038814) heading_pane_cp06

0xde3d,	// (0x0003b998) ncim_query_content_pane

0x9bf4,	// (0x0003774f) bg_popup_heading_pane_cp01

0xde45,	// (0x0003b9a0) ncim_heading_pane_t1

0xde53,	// (0x0003b9ae) ncim_indicator_popup_pane

0xde65,	// (0x0003b9c0) ncim_query_button_pane

0xde79,	// (0x0003b9d4) ncim_query_content_pane_t1

0xde8b,	// (0x0003b9e6) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003d756) ncim_query_content_pane_t

0xdec5,	// (0x0003ba20) ncim_query_list_pane

0xded7,	// (0x0003ba32) ncim_query_popup_pane

0xde53,	// (0x0003b9ae) ncim_indicator_popup_pane_ParamLimits

0x7d92,	// (0x000358ed) ncim_query_content_pane_g1_ParamLimits

0x7d92,	// (0x000358ed) ncim_query_content_pane_g1

0xde79,	// (0x0003b9d4) ncim_query_content_pane_t1_ParamLimits

0xde8b,	// (0x0003b9e6) ncim_query_content_pane_t2_ParamLimits

0x7d9e,	// (0x000358f9) ncim_query_content_pane_t3_ParamLimits

0x7d9e,	// (0x000358f9) ncim_query_content_pane_t3

0x7dc6,	// (0x00035921) ncim_query_content_pane_t4_ParamLimits

0x7dc6,	// (0x00035921) ncim_query_content_pane_t4

0x7dee,	// (0x00035949) ncim_query_content_pane_t5_ParamLimits

0x7dee,	// (0x00035949) ncim_query_content_pane_t5

0xde9d,	// (0x0003b9f8) ncim_query_content_pane_t6_ParamLimits

0xde9d,	// (0x0003b9f8) ncim_query_content_pane_t6

0xfbfb,	// (0x0003d756) ncim_query_content_pane_t_ParamLimits

0xdec5,	// (0x0003ba20) ncim_query_list_pane_ParamLimits

0xded7,	// (0x0003ba32) ncim_query_popup_pane_ParamLimits

0xdeeb,	// (0x0003ba46) wait_bar_pane_cp04

0x9bf4,	// (0x0003774f) input_focus_pane_cp011

0xdef3,	// (0x0003ba4e) ncim_query_popup_pane_t1

0xdf01,	// (0x0003ba5c) ncim_list_query_list_pane_ParamLimits

0xdf01,	// (0x0003ba5c) ncim_list_query_list_pane

0x9bf4,	// (0x0003774f) bg_button_pane_cp027

0xdf0e,	// (0x0003ba69) ncim_query_button_pane_g1

0x9bf4,	// (0x0003774f) list_highlight_pane_cp012

0xdf18,	// (0x0003ba73) ncim_list_query_list_pane_g1

0xdf20,	// (0x0003ba7b) ncim_list_query_list_pane_t1

0x6666,	// (0x000341c1) cam4_indicators_pane_g3_ParamLimits

0x6666,	// (0x000341c1) cam4_indicators_pane_g3

0x66e6,	// (0x00034241) vid4_indicators_pane_g5_ParamLimits

0x66e6,	// (0x00034241) vid4_indicators_pane_g5

0xa71d,	// (0x00038278) vid4_progress_pane_g5_ParamLimits

0xa71d,	// (0x00038278) vid4_progress_pane_g5

0x7c80,	// (0x000357db) main_ncimui_pane_g1

0x7ce6,	// (0x00035841) ncimui_group_query_pane_ParamLimits

0x7ce6,	// (0x00035841) ncimui_group_query_pane

0x7d2e,	// (0x00035889) ncimui_list_pane_ParamLimits

0x7d2e,	// (0x00035889) ncimui_list_pane

0x7d55,	// (0x000358b0) ncimui_text_pane_ParamLimits

0x7d55,	// (0x000358b0) ncimui_text_pane

0x7e16,	// (0x00035971) ncimui_text_pane_t1_ParamLimits

0x7e16,	// (0x00035971) ncimui_text_pane_t1

0xdf2e,	// (0x0003ba89) ncimui_list_single_graphic_pane_ParamLimits

0xdf2e,	// (0x0003ba89) ncimui_list_single_graphic_pane

0x7e34,	// (0x0003598f) ncimui_query_pane_ParamLimits

0x7e34,	// (0x0003598f) ncimui_query_pane

0x9bf4,	// (0x0003774f) list_highlight_pane_cp013

0xdf3e,	// (0x0003ba99) ncim_list_query_list_pane_t1_copy1

0xdf18,	// (0x0003ba73) ncim_list_single_graphic_pane_g1

0xdf4c,	// (0x0003baa7) ncim_query_button_pane_cp01

0xdf58,	// (0x0003bab3) ncim_query_entry_pane_ParamLimits

0xdf58,	// (0x0003bab3) ncim_query_entry_pane

0xdf6b,	// (0x0003bac6) ncimui_query_pane_g1

0xdf77,	// (0x0003bad2) ncimui_query_pane_t1_ParamLimits

0xdf77,	// (0x0003bad2) ncimui_query_pane_t1

0xa6b4,	// (0x0003820f) input_focus_pane_cp012

0xdf90,	// (0x0003baeb) ncim_query_entry_pane_t1

0xa331,	// (0x00037e8c) main_im_pane_ParamLimits

0x1a09,	// (0x0002f564) main_mobtv_pane_ParamLimits

0x1a09,	// (0x0002f564) main_mobtv_pane

0x7a47,	// (0x000355a2) main_cset6_slider_pane_g18_ParamLimits

0x7a47,	// (0x000355a2) main_cset6_slider_pane_g18

0x7a53,	// (0x000355ae) main_cset6_slider_pane_g19_ParamLimits

0x7a53,	// (0x000355ae) main_cset6_slider_pane_g19

0x7e47,	// (0x000359a2) bg_main_mobtv_pane_ParamLimits

0x7e47,	// (0x000359a2) bg_main_mobtv_pane

0x7e55,	// (0x000359b0) main_mobtv_info_pane

0x7e5e,	// (0x000359b9) main_mobtv_loading_pane_ParamLimits

0x7e5e,	// (0x000359b9) main_mobtv_loading_pane

0xdfa2,	// (0x0003bafd) main_mobtv_pg_channel_list_pane

0xdfac,	// (0x0003bb07) main_mobtv_pg_hdr_pane

0x7e6b,	// (0x000359c6) main_mobtv_programe_curr_pane_ParamLimits

0x7e6b,	// (0x000359c6) main_mobtv_programe_curr_pane

0x7e78,	// (0x000359d3) main_mobtv_programe_next_pane_ParamLimits

0x7e78,	// (0x000359d3) main_mobtv_programe_next_pane

0xdfb5,	// (0x0003bb10) popup_mobtv_noti_window

0xc8b3,	// (0x0003a40e) main_tv_pg_hdr_pane_g1

0xdfbd,	// (0x0003bb18) main_tv_pg_hdr_pane_g2

0xdfc5,	// (0x0003bb20) main_tv_pg_hdr_pane_g3

0xdfcd,	// (0x0003bb28) main_tv_pg_hdr_pane_g4

0xdfd5,	// (0x0003bb30) main_tv_pg_hdr_pane_g5

0xdfdf,	// (0x0003bb3a) main_tv_pg_hdr_pane_g6

0xdfe9,	// (0x0003bb44) main_tv_pg_hdr_pane_g7

0xdff3,	// (0x0003bb4e) main_tv_pg_hdr_pane_g8

0xdffd,	// (0x0003bb58) main_tv_pg_hdr_pane_g9

0xe007,	// (0x0003bb62) main_tv_pg_hdr_pane_g10

0xe011,	// (0x0003bb6c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003d763) main_tv_pg_hdr_pane_g

0xe01b,	// (0x0003bb76) main_tv_pg_hdr_pane_t1

0xe029,	// (0x0003bb84) main_tv_pg_hdr_pane_t2

0xe037,	// (0x0003bb92) main_tv_pg_hdr_pane_t3

0xe047,	// (0x0003bba2) main_tv_pg_hdr_pane_t4

0xe057,	// (0x0003bbb2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003d77a) main_tv_pg_hdr_pane_t

0xe067,	// (0x0003bbc2) single_mobtv_pg_channel_pane_ParamLimits

0xe067,	// (0x0003bbc2) single_mobtv_pg_channel_pane

0xe079,	// (0x0003bbd4) single_mobtv_pg_channel_table_pane

0xe082,	// (0x0003bbdd) single_mobtv_pg_channel_thumb_pane

0xe08b,	// (0x0003bbe6) single_tv_pg_channel_pane_g1

0xe094,	// (0x0003bbef) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003d785) single_tv_pg_channel_pane_g

0xcb2b,	// (0x0003a686) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb2b,	// (0x0003a686) bg_single_mobtv_pg_channel_thumb_pane

0xe09d,	// (0x0003bbf8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe09d,	// (0x0003bbf8) single_mobtv_pg_channel_thumb_pane_g1

0xe0ab,	// (0x0003bc06) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0ab,	// (0x0003bc06) single_mobtv_pg_channel_thumb_pane_g2

0xe0b7,	// (0x0003bc12) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0b7,	// (0x0003bc12) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003d78a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003d78a) single_mobtv_pg_channel_thumb_pane_g

0xe0c3,	// (0x0003bc1e) single_mobtv_pg_channel_thumb_pane_t1

0xe0d1,	// (0x0003bc2c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003d791) single_mobtv_pg_channel_thumb_pane_t

0xc8b3,	// (0x0003a40e) bg_single_mobtv_pg_channel_table_pane_g1

0xc8b3,	// (0x0003a40e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0003d23c) bg_single_mobtv_pg_channel_table_pane_g

0xe0df,	// (0x0003bc3a) single_mobtv_pg_channel_table_pane_t1

0xe0ed,	// (0x0003bc48) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003d796) single_mobtv_pg_channel_table_pane_t

0x7e8d,	// (0x000359e8) main_mobtv_info_pane_g1_ParamLimits

0x7e8d,	// (0x000359e8) main_mobtv_info_pane_g1

0x7eab,	// (0x00035a06) main_mobtv_info_pane_t1_ParamLimits

0x7eab,	// (0x00035a06) main_mobtv_info_pane_t1

0x7f23,	// (0x00035a7e) main_mobtv_info_pane_t2_ParamLimits

0x7f23,	// (0x00035a7e) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003d7a0) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003d7a0) main_mobtv_info_pane_t

0x7fb2,	// (0x00035b0d) wait_bar_pane_cp05

0x7fc4,	// (0x00035b1f) main_mobtv_loading_pane_g1_ParamLimits

0x7fc4,	// (0x00035b1f) main_mobtv_loading_pane_g1

0x7fd7,	// (0x00035b32) main_mobtv_loading_pane_g2_ParamLimits

0x7fd7,	// (0x00035b32) main_mobtv_loading_pane_g2

0x7fe3,	// (0x00035b3e) main_mobtv_loading_pane_g3_ParamLimits

0x7fe3,	// (0x00035b3e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003d7a7) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003d7a7) main_mobtv_loading_pane_g

0xe0fb,	// (0x0003bc56) main_mobtv_loading_pane_t1_ParamLimits

0xe0fb,	// (0x0003bc56) main_mobtv_loading_pane_t1

0xe113,	// (0x0003bc6e) main_mobtv_loading_pane_t2_ParamLimits

0xe113,	// (0x0003bc6e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003d7ae) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003d7ae) main_mobtv_loading_pane_t

0x7ff6,	// (0x00035b51) wait_bar_pane_cp06_ParamLimits

0x7ff6,	// (0x00035b51) wait_bar_pane_cp06

0xe137,	// (0x0003bc92) main_mobtv_programe_curr_pane_t1

0xe145,	// (0x0003bca0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003d7b3) main_mobtv_programe_curr_pane_t

0xe153,	// (0x0003bcae) main_mobtv_programe_next_pane_t1

0xe161,	// (0x0003bcbc) main_mobtv_programe_next_pane_t2

0xe16f,	// (0x0003bcca) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003d7b8) main_mobtv_programe_next_pane_t

0x9bf4,	// (0x0003774f) bg_popup_mobtv_noti_window_pane

0xe17d,	// (0x0003bcd8) popup_mobtv_noti_window_g1

0xe185,	// (0x0003bce0) popup_mobtv_noti_window_t1

0xe193,	// (0x0003bcee) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003d7bf) popup_mobtv_noti_window_t

0xc8b3,	// (0x0003a40e) bg_popup_mobtv_noti_window_pane_g1

0x1a23,	// (0x0002f57e) sc_clock_pane

0x1a23,	// (0x0002f57e) main_fs_bigclock_pane

0x76a2,	// (0x000351fd) blid2_tripm_pane_t4_ParamLimits

0x76a2,	// (0x000351fd) blid2_tripm_pane_t4

0x8005,	// (0x00035b60) sc_clock_pane_g1_ParamLimits

0x8005,	// (0x00035b60) sc_clock_pane_g1

0x8017,	// (0x00035b72) sc_clock_pane_t1_ParamLimits

0x8017,	// (0x00035b72) sc_clock_pane_t1

0x8039,	// (0x00035b94) sc_clock_pane_t2_ParamLimits

0x8039,	// (0x00035b94) sc_clock_pane_t2

0x8051,	// (0x00035bac) sc_clock_pane_t3_ParamLimits

0x8051,	// (0x00035bac) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003d7c4) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003d7c4) sc_clock_pane_t

0x90f5,	// (0x00036c50) main_fs_bigclock_indicator_pane_ParamLimits

0x90f5,	// (0x00036c50) main_fs_bigclock_indicator_pane

0xcafb,	// (0x0003a656) main_fs_bigclock_pane_g1_ParamLimits

0xcafb,	// (0x0003a656) main_fs_bigclock_pane_g1

0x9101,	// (0x00036c5c) main_fs_bigclock_pane_t1_ParamLimits

0x9101,	// (0x00036c5c) main_fs_bigclock_pane_t1

0x9113,	// (0x00036c6e) main_fs_bigclock_pane_t2_ParamLimits

0x9113,	// (0x00036c6e) main_fs_bigclock_pane_t2

0x9127,	// (0x00036c82) main_fs_bigclock_pane_t3_ParamLimits

0x9127,	// (0x00036c82) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003d9c9) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003d9c9) main_fs_bigclock_pane_t

0xec5e,	// (0x0003c7b9) main_fs_bigclock_indicator_pane_g1

0xde6d,	// (0x0003b9c8) ncim_query_content_pane_g2_ParamLimits

0xde6d,	// (0x0003b9c8) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003d751) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003d751) ncim_query_content_pane_g

0x806a,	// (0x00035bc5) sc_clock_pane_t4_ParamLimits

0x806a,	// (0x00035bc5) sc_clock_pane_t4

0x1a09,	// (0x0002f564) main_radioblah_pane

0xd288,	// (0x0003ade3) cell_call4_button_pane_t1_copy1_ParamLimits

0xd288,	// (0x0003ade3) cell_call4_button_pane_t1_copy1

0x7c98,	// (0x000357f3) main_ncimui_pane_t1_ParamLimits

0x7c98,	// (0x000357f3) main_ncimui_pane_t1

0x7cb2,	// (0x0003580d) main_ncimui_pane_t2_ParamLimits

0x7cb2,	// (0x0003580d) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003d74a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003d74a) main_ncimui_pane_t

0xe2df,	// (0x0003be3a) main_radioblah_anim_pane_ParamLimits

0xe2df,	// (0x0003be3a) main_radioblah_anim_pane

0xe2f0,	// (0x0003be4b) main_radioblah_info_pane_ParamLimits

0xe2f0,	// (0x0003be4b) main_radioblah_info_pane

0xe304,	// (0x0003be5f) main_radioblah_pane_t1_ParamLimits

0xe304,	// (0x0003be5f) main_radioblah_pane_t1

0xe320,	// (0x0003be7b) main_radioblah_pane_t2_ParamLimits

0xe320,	// (0x0003be7b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003d7e5) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003d7e5) main_radioblah_pane_t

0x8120,	// (0x00035c7b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8120,	// (0x00035c7b) main_radioblah_rocker_ctrl_pane

0xe368,	// (0x0003bec3) main_radioblah_info_pane_t1_ParamLimits

0xe368,	// (0x0003bec3) main_radioblah_info_pane_t1

0x8178,	// (0x00035cd3) main_radioblah_info_pane_t2_ParamLimits

0x8178,	// (0x00035cd3) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003d7ee) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003d7ee) main_radioblah_info_pane_t

0xc8b3,	// (0x0003a40e) main_radioblah_rocker_ctrl_pane_g1

0x8228,	// (0x00035d83) main_radioblah_rocker_ctrl_pane_g2

0x8230,	// (0x00035d8b) main_radioblah_rocker_ctrl_pane_g3

0x8238,	// (0x00035d93) main_radioblah_rocker_ctrl_pane_g4

0x8240,	// (0x00035d9b) main_radioblah_rocker_ctrl_pane_g5

0x8248,	// (0x00035da3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003d7f7) main_radioblah_rocker_ctrl_pane_g

0x791d,	// (0x00035478) main_cset_text2_pane_t1_copy1_ParamLimits

0x6614,	// (0x0003416f) cam4_image_uncrop_qvga_pane

0x668f,	// (0x000341ea) vid4_image_uncrop_qcif_pane

0xa77e,	// (0x000382d9) cam6_image_uncrop_qvga_pane_ParamLimits

0xa77e,	// (0x000382d9) cam6_image_uncrop_qvga_pane

0xdb82,	// (0x0003b6dd) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb82,	// (0x0003b6dd) vid6_image_uncrop_qcif_pane

0x9bf4,	// (0x0003774f) bg_popup_preview_window_pane_cp03

0xde1f,	// (0x0003b97a) list_cset_text2_pane

0xde27,	// (0x0003b982) main_cset6_text2_pane_g1

0xde2f,	// (0x0003b98a) main_cset6_text2_pane_t1

0x8250,	// (0x00035dab) list_cset_text2_pane_t1_ParamLimits

0x8250,	// (0x00035dab) list_cset_text2_pane_t1

0x1a09,	// (0x0002f564) main_radioblah_pane_ParamLimits

0x7f9e,	// (0x00035af9) main_mobtv_info_pane_t3_ParamLimits

0x7f9e,	// (0x00035af9) main_mobtv_info_pane_t3

0x810e,	// (0x00035c69) main_radioblah_pane_g1

0x8148,	// (0x00035ca3) main_radioblah_info_pane_g1

0x81cd,	// (0x00035d28) main_radioblah_info_pane_t3_ParamLimits

0x81cd,	// (0x00035d28) main_radioblah_info_pane_t3

0x3711,	// (0x0003126c) highlight_cell_cale_month_pane_ParamLimits

0x3711,	// (0x0003126c) highlight_cell_cale_month_pane

0x1a23,	// (0x0002f57e) main_phob_fisheye_pane

0xcc33,	// (0x0003a78e) scroll_pane_cp0031_ParamLimits

0xcc33,	// (0x0003a78e) scroll_pane_cp0031

0xdc90,	// (0x0003b7eb) wait_bar_pane_cp08_ParamLimits

0x79a2,	// (0x000354fd) cset_list_set_pane_copy1_ParamLimits

0xe3a2,	// (0x0003befd) highlight_cell_cale_month_pane_g1

0x8269,	// (0x00035dc4) highlight_cell_cale_month_pane_t1

0xd908,	// (0x0003b463) list_gen_pane_cp01

0xd46e,	// (0x0003afc9) scroll_pane_01

0xe3aa,	// (0x0003bf05) list_single_double_fisheye_pane

0x8277,	// (0x00035dd2) list_double_fisheye_pane_g1_ParamLimits

0x8277,	// (0x00035dd2) list_double_fisheye_pane_g1

0x8283,	// (0x00035dde) list_double_fisheye_pane_g2_ParamLimits

0x8283,	// (0x00035dde) list_double_fisheye_pane_g2

0x8297,	// (0x00035df2) list_double_fisheye_pane_g3_ParamLimits

0x8297,	// (0x00035df2) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003d804) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003d804) list_double_fisheye_pane_g

0x82c0,	// (0x00035e1b) list_double_fisheye_pane_t1_ParamLimits

0x82c0,	// (0x00035e1b) list_double_fisheye_pane_t1

0x82db,	// (0x00035e36) list_double_fisheye_pane_t2_ParamLimits

0x82db,	// (0x00035e36) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003d80f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003d80f) list_double_fisheye_pane_t

0x1a23,	// (0x0002f57e) main_call5_pane

0x8095,	// (0x00035bf0) sc_swipe_pane_ParamLimits

0x8095,	// (0x00035bf0) sc_swipe_pane

0x8310,	// (0x00035e6b) call5_image_pane_ParamLimits

0x8310,	// (0x00035e6b) call5_image_pane

0x832d,	// (0x00035e88) call5_swipe_1_pane_ParamLimits

0x832d,	// (0x00035e88) call5_swipe_1_pane

0x8340,	// (0x00035e9b) call5_swipe_2_pane_ParamLimits

0x8340,	// (0x00035e9b) call5_swipe_2_pane

0x836b,	// (0x00035ec6) popup_call5_audio_first_window_ParamLimits

0x836b,	// (0x00035ec6) popup_call5_audio_first_window

0xcb2b,	// (0x0003a686) call5_swipe_1_pane_g1_ParamLimits

0xcb2b,	// (0x0003a686) call5_swipe_1_pane_g1

0xe3b3,	// (0x0003bf0e) call5_swipe_1_pane_g2_ParamLimits

0xe3b3,	// (0x0003bf0e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003d814) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003d814) call5_swipe_1_pane_g

0xe3bf,	// (0x0003bf1a) call5_swipe_1_pane_t1_ParamLimits

0xe3bf,	// (0x0003bf1a) call5_swipe_1_pane_t1

0xcb2b,	// (0x0003a686) call5_swipe_2_pane_g1_ParamLimits

0xcb2b,	// (0x0003a686) call5_swipe_2_pane_g1

0xe3d4,	// (0x0003bf2f) call5_swipe_2_pane_g2_ParamLimits

0xe3d4,	// (0x0003bf2f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003d819) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003d819) call5_swipe_2_pane_g

0xe3e0,	// (0x0003bf3b) call5_swipe_2_pane_t1_ParamLimits

0xe3e0,	// (0x0003bf3b) call5_swipe_2_pane_t1

0xe3f5,	// (0x0003bf50) sc_swipe_pane_g1_ParamLimits

0xe3f5,	// (0x0003bf50) sc_swipe_pane_g1

0xe402,	// (0x0003bf5d) sc_swipe_pane_g2_ParamLimits

0xe402,	// (0x0003bf5d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003d81e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003d81e) sc_swipe_pane_g

0xe40e,	// (0x0003bf69) sc_swipe_pane_t1_ParamLimits

0xe40e,	// (0x0003bf69) sc_swipe_pane_t1

0x1a23,	// (0x0002f57e) main_cmail_launcher_pane

0x837c,	// (0x00035ed7) aid_size_cell_cmail_l_ParamLimits

0x837c,	// (0x00035ed7) aid_size_cell_cmail_l

0x8396,	// (0x00035ef1) grid_cmail_l_pane_ParamLimits

0x8396,	// (0x00035ef1) grid_cmail_l_pane

0x83b1,	// (0x00035f0c) cell_cmail_l_pane_ParamLimits

0x83b1,	// (0x00035f0c) cell_cmail_l_pane

0x83d7,	// (0x00035f32) cell_cmail_l_pane_g1_ParamLimits

0x83d7,	// (0x00035f32) cell_cmail_l_pane_g1

0x83e3,	// (0x00035f3e) cell_cmail_l_pane_t1_ParamLimits

0x83e3,	// (0x00035f3e) cell_cmail_l_pane_t1

0xe423,	// (0x0003bf7e) cell_cmail_l_pane_t2_ParamLimits

0xe423,	// (0x0003bf7e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003d823) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003d823) cell_cmail_l_pane_t

0xa6b4,	// (0x0003820f) grid_highlight_pane_cp018_ParamLimits

0xa6b4,	// (0x0003820f) grid_highlight_pane_cp018

0x025d,	// (0x0002ddb8) main2_pane_ParamLimits

0x025d,	// (0x0002ddb8) main2_pane

0xa3ca,	// (0x00037f25) popup_sp_fs_action_menu_bg_pane_g1

0xa3d2,	// (0x00037f2d) popup_sp_fs_action_menu_bg_pane_g2

0xa3da,	// (0x00037f35) popup_sp_fs_action_menu_bg_pane_g3

0xa3e2,	// (0x00037f3d) popup_sp_fs_action_menu_bg_pane_g4

0xa3ea,	// (0x00037f45) popup_sp_fs_action_menu_bg_pane_g5

0xa3f2,	// (0x00037f4d) popup_sp_fs_action_menu_bg_pane_g6

0xa3fa,	// (0x00037f55) popup_sp_fs_action_menu_bg_pane_g7

0xa402,	// (0x00037f5d) popup_sp_fs_action_menu_bg_pane_g8

0xa40a,	// (0x00037f65) popup_sp_fs_action_menu_bg_pane_g9

0xa412,	// (0x00037f6d) popup_sp_fs_action_menu_bg_pane_g10

0xa412,	// (0x00037f6d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0003cce8) popup_sp_fs_action_menu_bg_pane_g

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g3_g1

0x2688,	// (0x000301e3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_t3_g3_g2

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0003cd98) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0003cd98) list_medium_line_x2_t3_g3_g

0x26a0,	// (0x000301fb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x26a0,	// (0x000301fb) list_medium_line_x2_t3_g3_t1

0x26b5,	// (0x00030210) list_medium_line_x2_t3_g3_t2_ParamLimits

0x26b5,	// (0x00030210) list_medium_line_x2_t3_g3_t2

0x26c9,	// (0x00030224) list_medium_line_x2_t3_g3_t3_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0003cd9f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0003cd9f) list_medium_line_x2_t3_g3_t

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g2_g1

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0003cda6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0003cda6) list_medium_line_x2_t3_g2_g

0x26de,	// (0x00030239) list_medium_line_x2_t3_g2_t1_ParamLimits

0x26de,	// (0x00030239) list_medium_line_x2_t3_g2_t1

0x26f4,	// (0x0003024f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x26f4,	// (0x0003024f) list_medium_line_x2_t3_g2_t2

0x2706,	// (0x00030261) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2706,	// (0x00030261) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0003cdab) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0003cdab) list_medium_line_x2_t3_g2_t

0x267c,	// (0x000301d7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t4_g4_g1

0x2724,	// (0x0003027f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2724,	// (0x0003027f) list_medium_line_x2_t4_g4_g2

0x2688,	// (0x000301e3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_t4_g4_g3

0x2730,	// (0x0003028b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2730,	// (0x0003028b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0003cdb2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0003cdb2) list_medium_line_x2_t4_g4_g

0x273c,	// (0x00030297) list_medium_line_x2_t4_g4_t1_ParamLimits

0x273c,	// (0x00030297) list_medium_line_x2_t4_g4_t1

0x2756,	// (0x000302b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2756,	// (0x000302b1) list_medium_line_x2_t4_g4_t2

0x276c,	// (0x000302c7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x276c,	// (0x000302c7) list_medium_line_x2_t4_g4_t3

0x2781,	// (0x000302dc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2781,	// (0x000302dc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0003cdbb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0003cdbb) list_medium_line_x2_t4_g4_t

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g4_g1

0x2724,	// (0x0003027f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2724,	// (0x0003027f) list_medium_line_x2_t2_g4_g2

0x2688,	// (0x000301e3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_t2_g4_g3

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0003ce22) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0003ce22) list_medium_line_x2_t2_g4_g

0x3737,	// (0x00031292) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3737,	// (0x00031292) list_medium_line_x2_t2_g4_t1

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g4_t2_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0003ce2b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0003ce2b) list_medium_line_x2_t2_g4_t

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g3_g1

0x2688,	// (0x000301e3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_t2_g3_g2

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0003cd98) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0003cd98) list_medium_line_x2_t2_g3_g

0x374c,	// (0x000312a7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x374c,	// (0x000312a7) list_medium_line_x2_t2_g3_t1

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g3_t2_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0003ce30) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0003ce30) list_medium_line_x2_t2_g3_t

0x3897,	// (0x000313f2) main_sp_fs_list_pane_ParamLimits

0x3897,	// (0x000313f2) main_sp_fs_list_pane

0xca8d,	// (0x0003a5e8) sp_fs_scroll_pane_ParamLimits

0xca8d,	// (0x0003a5e8) sp_fs_scroll_pane

0x38a3,	// (0x000313fe) list_medium_line_x2_t3_t1

0x38b3,	// (0x0003140e) list_medium_line_x2_t3_t2

0x38c1,	// (0x0003141c) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0003ce7b) list_medium_line_x2_t3_t

0x38cf,	// (0x0003142a) list_medium_line_x3_t4_t1

0x38df,	// (0x0003143a) list_medium_line_x3_t4_t2

0x38ed,	// (0x00031448) list_medium_line_x3_t4_t3

0x38c1,	// (0x0003141c) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0003ce82) list_medium_line_x3_t4_t

0x38fb,	// (0x00031456) list_medium_line_x4_t5_t1

0x390b,	// (0x00031466) list_medium_line_x4_t5_t2

0x38ed,	// (0x00031448) list_medium_line_x4_t5_t3

0x3919,	// (0x00031474) list_medium_line_x4_t5_t4

0x38c1,	// (0x0003141c) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0003ce8b) list_medium_line_x4_t5_t

0x267c,	// (0x000301d7) list_medium_line_t4_g4_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_t4_g4_g1

0x3927,	// (0x00031482) list_medium_line_t4_g4_g2_ParamLimits

0x3927,	// (0x00031482) list_medium_line_t4_g4_g2

0x3933,	// (0x0003148e) list_medium_line_t4_g4_g3_ParamLimits

0x3933,	// (0x0003148e) list_medium_line_t4_g4_g3

0x2694,	// (0x000301ef) list_medium_line_t4_g4_g4_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0003ce96) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0003ce96) list_medium_line_t4_g4_g

0x393f,	// (0x0003149a) list_medium_line_t4_g4_t1_ParamLimits

0x393f,	// (0x0003149a) list_medium_line_t4_g4_t1

0x3954,	// (0x000314af) list_medium_line_t4_g4_t2_ParamLimits

0x3954,	// (0x000314af) list_medium_line_t4_g4_t2

0x396a,	// (0x000314c5) list_medium_line_t4_g4_t3_ParamLimits

0x396a,	// (0x000314c5) list_medium_line_t4_g4_t3

0x26c9,	// (0x00030224) list_medium_line_t4_g4_t4_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0003ce9f) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0003ce9f) list_medium_line_t4_g4_t

0x3aa6,	// (0x00031601) chi_dic_find_pane_g1

0x0728,	// (0x0002e283) main_tport_pane

0x6e47,	// (0x000349a2) list_medium_line_plain_t1

0x6e6d,	// (0x000349c8) list_medium_line_t2_g2_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t2_g2_g1

0x6e79,	// (0x000349d4) list_medium_line_t2_g2_g2_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003d55b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003d55b) list_medium_line_t2_g2_g

0x6e85,	// (0x000349e0) list_medium_line_t2_g2_t1_ParamLimits

0x6e85,	// (0x000349e0) list_medium_line_t2_g2_t1

0x6e9c,	// (0x000349f7) list_medium_line_t2_g2_t2_ParamLimits

0x6e9c,	// (0x000349f7) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003d560) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003d560) list_medium_line_t2_g2_t

0xd911,	// (0x0003b46c) aid_sp_fs_list_icon_a_sm

0xd919,	// (0x0003b474) aid_sp_fs_list_icon_d

0xd921,	// (0x0003b47c) aid_sp_fs_text_primary

0xd92a,	// (0x0003b485) aid_sp_fs_text_secondary

0x744f,	// (0x00034faa) list_medium_line

0x744f,	// (0x00034faa) list_medium_line_g2

0x744f,	// (0x00034faa) list_medium_line_g3

0x744f,	// (0x00034faa) list_medium_line_plain

0x744f,	// (0x00034faa) list_medium_line_plain_t2

0x744f,	// (0x00034faa) list_medium_line_plain_t3

0x744f,	// (0x00034faa) list_medium_line_right_icon

0x744f,	// (0x00034faa) list_medium_line_right_iconx2

0x744f,	// (0x00034faa) list_medium_line_t2

0x744f,	// (0x00034faa) list_medium_line_t2_g2

0x744f,	// (0x00034faa) list_medium_line_t2_g3

0x744f,	// (0x00034faa) list_medium_line_t2_right_icon

0x744f,	// (0x00034faa) list_medium_line_t2_right_iconx2

0x744f,	// (0x00034faa) list_medium_line_t3

0x744f,	// (0x00034faa) list_medium_line_t3_g2

0x744f,	// (0x00034faa) list_medium_line_t3_g3

0x744f,	// (0x00034faa) list_medium_line_t3_right_iconx2

0x7458,	// (0x00034fb3) list_medium_line_t4_g4

0x7461,	// (0x00034fbc) list_medium_line_x2

0x7461,	// (0x00034fbc) list_medium_line_x2_t2_g2

0x7461,	// (0x00034fbc) list_medium_line_x2_t2_g3

0x7461,	// (0x00034fbc) list_medium_line_x2_t2_g4

0x7461,	// (0x00034fbc) list_medium_line_x2_t3

0x7461,	// (0x00034fbc) list_medium_line_x2_t3_g2

0x7461,	// (0x00034fbc) list_medium_line_x2_t3_g3

0x7461,	// (0x00034fbc) list_medium_line_x2_t3_g4

0x7461,	// (0x00034fbc) list_medium_line_x2_t4_g2

0x7461,	// (0x00034fbc) list_medium_line_x2_t4_g4

0x746a,	// (0x00034fc5) list_medium_line_x3

0x746a,	// (0x00034fc5) list_medium_line_x3_t4

0x746a,	// (0x00034fc5) list_medium_line_x3_t4_g4

0x7458,	// (0x00034fb3) list_medium_line_x4_t4

0x7458,	// (0x00034fb3) list_medium_line_x4_t4_g7

0x7458,	// (0x00034fb3) list_medium_line_x4_t5

0x7473,	// (0x00034fce) list_single_fs_dyc_pane_ParamLimits

0x7473,	// (0x00034fce) list_single_fs_dyc_pane

0x267c,	// (0x000301d7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x4_t4_g7_g1

0x7b9b,	// (0x000356f6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b9b,	// (0x000356f6) list_medium_line_x4_t4_g7_g2

0x7ba7,	// (0x00035702) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ba7,	// (0x00035702) list_medium_line_x4_t4_g7_g3

0x7bb6,	// (0x00035711) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bb6,	// (0x00035711) list_medium_line_x4_t4_g7_g4

0x7bc2,	// (0x0003571d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bc2,	// (0x0003571d) list_medium_line_x4_t4_g7_g5

0x7bd1,	// (0x0003572c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bd1,	// (0x0003572c) list_medium_line_x4_t4_g7_g6

0x7be0,	// (0x0003573b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7be0,	// (0x0003573b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003d72b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003d72b) list_medium_line_x4_t4_g7_g

0x7bec,	// (0x00035747) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bec,	// (0x00035747) list_medium_line_x4_t4_g7_t1

0x7c01,	// (0x0003575c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c01,	// (0x0003575c) list_medium_line_x4_t4_g7_t2

0x7c16,	// (0x00035771) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c16,	// (0x00035771) list_medium_line_x4_t4_g7_t3

0x7c2b,	// (0x00035786) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c2b,	// (0x00035786) list_medium_line_x4_t4_g7_t4

0x7c3d,	// (0x00035798) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c3d,	// (0x00035798) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003d73a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003d73a) list_medium_line_x4_t4_g7_t

0x7c4f,	// (0x000357aa) list_single_dyc_row_pane_ParamLimits

0x7c4f,	// (0x000357aa) list_single_dyc_row_pane

0x82fd,	// (0x00035e58) call5_gesture_pane_ParamLimits

0x82fd,	// (0x00035e58) call5_gesture_pane

0x8353,	// (0x00035eae) call5_windows_pane_ParamLimits

0x8353,	// (0x00035eae) call5_windows_pane

0x83f9,	// (0x00035f54) call5_swipe_1_pane_cp_ParamLimits

0x83f9,	// (0x00035f54) call5_swipe_1_pane_cp

0x8405,	// (0x00035f60) call5_swipe_2_pane_cp_ParamLimits

0x8405,	// (0x00035f60) call5_swipe_2_pane_cp

0xb02d,	// (0x00038b88) call5_image_pane_cp

0x8411,	// (0x00035f6c) popup_call5_audio_first_window_cp_ParamLimits

0x8411,	// (0x00035f6c) popup_call5_audio_first_window_cp

0xe3f5,	// (0x0003bf50) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3f5,	// (0x0003bf50) call5_swipe_1_pane_g1_cp

0xe435,	// (0x0003bf90) call5_swipe_1_pane_g2_cp

0xe40e,	// (0x0003bf69) call5_swipe_1_pane_t1_cp_ParamLimits

0xe40e,	// (0x0003bf69) call5_swipe_1_pane_t1_cp

0xe3f5,	// (0x0003bf50) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3f5,	// (0x0003bf50) call5_swipe_2_pane_g1_cp

0xe43d,	// (0x0003bf98) call5_swipe_2_pane_g2_cp

0xe445,	// (0x0003bfa0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe445,	// (0x0003bfa0) call5_swipe_2_pane_t1_cp

0xa6b4,	// (0x0003820f) main_sp_fs_email_pane

0xe45a,	// (0x0003bfb5) main_sp_fs_listscroll_pane_te

0x841f,	// (0x00035f7a) popup_sp_fs_action_menu_pane_ParamLimits

0x841f,	// (0x00035f7a) popup_sp_fs_action_menu_pane

0xc8b3,	// (0x0003a40e) bg_sp_fs_ctrlbar_pane_g1

0xceaa,	// (0x0003aa05) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcebc,	// (0x0003aa17) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xceb3,	// (0x0003aa0e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8b3,	// (0x0003a40e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003d828) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc698,	// (0x0003a1f3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc698,	// (0x0003a1f3) bg_sp_fs_ctrlbar_ddmenu_pane

0xe463,	// (0x0003bfbe) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe463,	// (0x0003bfbe) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe46f,	// (0x0003bfca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe46f,	// (0x0003bfca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003d831) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003d831) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe47b,	// (0x0003bfd6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe47b,	// (0x0003bfd6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8463,	// (0x00035fbe) list_medium_line_t2_right_icon_g1

0x846b,	// (0x00035fc6) list_medium_line_t2_right_icon_t1

0x847b,	// (0x00035fd6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003d836) list_medium_line_t2_right_icon_t

0xc4ab,	// (0x0003a006) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc4ab,	// (0x0003a006) bg_sp_fs_ctrlbar_pane

0x84d5,	// (0x00036030) main_sp_fs_ctrlbar_button_pane_cp01

0x84df,	// (0x0003603a) main_sp_fs_ctrlbar_ddmenu_pane

0xe4cd,	// (0x0003c028) main_sp_fs_ctrlbar_pane_g1

0xe4d9,	// (0x0003c034) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003d83b) main_sp_fs_ctrlbar_pane_g

0xe4e5,	// (0x0003c040) main_sp_fs_ctrlbar_pane_t1

0x84e9,	// (0x00036044) main_sp_fs_ctrlbar_pane

0x850d,	// (0x00036068) main_sp_fs_listscroll_pane_te_cp01

0x852d,	// (0x00036088) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x852d,	// (0x00036088) popup_sp_fs_action_menu_pane_cp01

0xa6b4,	// (0x0003820f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6b4,	// (0x0003820f) bg_sp_fs_highlight_list_pane_cp01

0xe515,	// (0x0003c070) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe515,	// (0x0003c070) sp_fs_action_menu_list_gene_pane_g1

0xe524,	// (0x0003c07f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe524,	// (0x0003c07f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003d845) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003d845) sp_fs_action_menu_list_gene_pane_g

0xe531,	// (0x0003c08c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe531,	// (0x0003c08c) sp_fs_action_menu_list_gene_pane_t1

0xe549,	// (0x0003c0a4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe549,	// (0x0003c0a4) sp_fs_action_menu_list_gene_pane

0xe568,	// (0x0003c0c3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe568,	// (0x0003c0c3) popup_sp_fs_action_menu_bg_pane

0xe576,	// (0x0003c0d1) sp_fs_action_menu_list_pane_ParamLimits

0xe576,	// (0x0003c0d1) sp_fs_action_menu_list_pane

0x855d,	// (0x000360b8) sp_fs_scroll_pane_cp01_ParamLimits

0x855d,	// (0x000360b8) sp_fs_scroll_pane_cp01

0x8583,	// (0x000360de) list_medium_line_plain_t2_t1

0x8593,	// (0x000360ee) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003d84a) list_medium_line_plain_t2_t

0x85a3,	// (0x000360fe) list_medium_line_plain_t3_t1

0x85b3,	// (0x0003610e) list_medium_line_plain_t3_t2

0x85c1,	// (0x0003611c) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003d84f) list_medium_line_plain_t3_t

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t2_g2_g1

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0003cda6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0003cda6) list_medium_line_x2_t2_g2_g

0x393f,	// (0x0003149a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x393f,	// (0x0003149a) list_medium_line_x2_t2_g2_t1

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g2_t2_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003d856) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003d856) list_medium_line_x2_t2_g2_t

0x267c,	// (0x000301d7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t4_g2_g1

0x2694,	// (0x000301ef) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0003cda6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0003cda6) list_medium_line_x2_t4_g2_g

0x85cf,	// (0x0003612a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85cf,	// (0x0003612a) list_medium_line_x2_t4_g2_t1

0x85e6,	// (0x00036141) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85e6,	// (0x00036141) list_medium_line_x2_t4_g2_t2

0x85fb,	// (0x00036156) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85fb,	// (0x00036156) list_medium_line_x2_t4_g2_t3

0x26c9,	// (0x00030224) list_medium_line_x2_t4_g2_t4_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003d85b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003d85b) list_medium_line_x2_t4_g2_t

0x860d,	// (0x00036168) list_medium_line_t3_right_iconx2_g1

0x8463,	// (0x00035fbe) list_medium_line_t3_right_iconx2_g2

0x8615,	// (0x00036170) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003d864) list_medium_line_t3_right_iconx2_g

0x861f,	// (0x0003617a) list_medium_line_t3_right_iconx2_t1

0x862f,	// (0x0003618a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003d86b) list_medium_line_t3_right_iconx2_t

0x267c,	// (0x000301d7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x3_t4_g4_g1

0x2688,	// (0x000301e3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x3_t4_g4_g2

0x3927,	// (0x00031482) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3927,	// (0x00031482) list_medium_line_x3_t4_g4_g3

0x863d,	// (0x00036198) list_medium_line_x3_t4_g4_g4_ParamLimits

0x863d,	// (0x00036198) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003d870) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003d870) list_medium_line_x3_t4_g4_g

0x8649,	// (0x000361a4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8649,	// (0x000361a4) list_medium_line_x3_t4_g4_t1

0x8660,	// (0x000361bb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8660,	// (0x000361bb) list_medium_line_x3_t4_g4_t2

0x867b,	// (0x000361d6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x867b,	// (0x000361d6) list_medium_line_x3_t4_g4_t3

0x8690,	// (0x000361eb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8690,	// (0x000361eb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003d879) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003d879) list_medium_line_x3_t4_g4_t

0x86ad,	// (0x00036208) list_single_dyc_row_text_pane_t1_ParamLimits

0x86ad,	// (0x00036208) list_single_dyc_row_text_pane_t1

0x86f6,	// (0x00036251) list_single_dyc_row_text_pane_t2_ParamLimits

0x86f6,	// (0x00036251) list_single_dyc_row_text_pane_t2

0xe596,	// (0x0003c0f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe596,	// (0x0003c0f1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003d882) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003d882) list_single_dyc_row_text_pane_t

0xe5ba,	// (0x0003c115) list_single_dyc_row_pane_g1_ParamLimits

0xe5ba,	// (0x0003c115) list_single_dyc_row_pane_g1

0xe5c6,	// (0x0003c121) list_single_dyc_row_pane_g2_ParamLimits

0xe5c6,	// (0x0003c121) list_single_dyc_row_pane_g2

0xe5d2,	// (0x0003c12d) list_single_dyc_row_pane_g3_ParamLimits

0xe5d2,	// (0x0003c12d) list_single_dyc_row_pane_g3

0xe5de,	// (0x0003c139) list_single_dyc_row_pane_g4_ParamLimits

0xe5de,	// (0x0003c139) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003d88f) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003d88f) list_single_dyc_row_pane_g

0xe5ea,	// (0x0003c145) list_single_dyc_row_text_pane_ParamLimits

0xe5ea,	// (0x0003c145) list_single_dyc_row_text_pane

0x9bf4,	// (0x0003774f) bg_sp_fs_scroll_pane

0xe609,	// (0x0003c164) thumb_sp_fs_scroll_pane

0x6e6d,	// (0x000349c8) list_medium_line_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_g1

0x882b,	// (0x00036386) list_medium_line_t1_ParamLimits

0x882b,	// (0x00036386) list_medium_line_t1

0x267c,	// (0x000301d7) list_medium_line_x2_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_g1

0x2688,	// (0x000301e3) list_medium_line_x2_g2_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003d898) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003d898) list_medium_line_x2_g

0xe612,	// (0x0003c16d) list_medium_line_x2_t1_ParamLimits

0xe612,	// (0x0003c16d) list_medium_line_x2_t1

0x267c,	// (0x000301d7) list_medium_line_x3_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x3_g1

0x2688,	// (0x000301e3) list_medium_line_x3_g2_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003d898) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003d898) list_medium_line_x3_g

0xe612,	// (0x0003c16d) list_medium_line_x3_t1_ParamLimits

0xe612,	// (0x0003c16d) list_medium_line_x3_t1

0xe628,	// (0x0003c183) thumb_sp_fs_scroll_pane_g1

0xe631,	// (0x0003c18c) thumb_sp_fs_scroll_pane_g2

0xe63a,	// (0x0003c195) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003d89d) thumb_sp_fs_scroll_pane_g

0xe628,	// (0x0003c183) bg_sp_fs_scroll_pane_g1

0xe631,	// (0x0003c18c) bg_sp_fs_scroll_pane_g2

0xe63a,	// (0x0003c195) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003d89d) bg_sp_fs_scroll_pane_g

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x267c,	// (0x000301d7) list_medium_line_x2_t3_g4_g1

0x2724,	// (0x0003027f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2724,	// (0x0003027f) list_medium_line_x2_t3_g4_g2

0x2688,	// (0x000301e3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2688,	// (0x000301e3) list_medium_line_x2_t3_g4_g3

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2694,	// (0x000301ef) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0003ce22) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0003ce22) list_medium_line_x2_t3_g4_g

0x8840,	// (0x0003639b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8840,	// (0x0003639b) list_medium_line_x2_t3_g4_t1

0x885a,	// (0x000363b5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x885a,	// (0x000363b5) list_medium_line_x2_t3_g4_t2

0x26c9,	// (0x00030224) list_medium_line_x2_t3_g4_t3_ParamLimits

0x26c9,	// (0x00030224) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003d8a4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003d8a4) list_medium_line_x2_t3_g4_t

0x6e6d,	// (0x000349c8) list_medium_line_g2_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_g2_g1

0x6e79,	// (0x000349d4) list_medium_line_g2_g2_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003d55b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003d55b) list_medium_line_g2_g

0x8874,	// (0x000363cf) list_medium_line_g2_t1_ParamLimits

0x8874,	// (0x000363cf) list_medium_line_g2_t1

0x6e6d,	// (0x000349c8) list_medium_line_t3_g2_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t3_g2_g1

0x6e79,	// (0x000349d4) list_medium_line_t3_g2_g2_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003d55b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003d55b) list_medium_line_t3_g2_g

0x8889,	// (0x000363e4) list_medium_line_t3_g2_t1_ParamLimits

0x8889,	// (0x000363e4) list_medium_line_t3_g2_t1

0x88a3,	// (0x000363fe) list_medium_line_t3_g2_t2_ParamLimits

0x88a3,	// (0x000363fe) list_medium_line_t3_g2_t2

0x88b8,	// (0x00036413) list_medium_line_t3_g2_t3_ParamLimits

0x88b8,	// (0x00036413) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003d8ab) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003d8ab) list_medium_line_t3_g2_t

0x8463,	// (0x00035fbe) list_medium_line_right_icon_g1

0x88d2,	// (0x0003642d) list_medium_line_right_icon_t1

0x6e6d,	// (0x000349c8) list_medium_line_t2_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t2_g1

0x88e0,	// (0x0003643b) list_medium_line_t2_t1_ParamLimits

0x88e0,	// (0x0003643b) list_medium_line_t2_t1

0x88fa,	// (0x00036455) list_medium_line_t2_t2_ParamLimits

0x88fa,	// (0x00036455) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003d8b2) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003d8b2) list_medium_line_t2_t

0x6e6d,	// (0x000349c8) list_medium_line_t3_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t3_g1

0x8913,	// (0x0003646e) list_medium_line_t3_t1_ParamLimits

0x8913,	// (0x0003646e) list_medium_line_t3_t1

0x892a,	// (0x00036485) list_medium_line_t3_t2_ParamLimits

0x892a,	// (0x00036485) list_medium_line_t3_t2

0x893f,	// (0x0003649a) list_medium_line_t3_t3_ParamLimits

0x893f,	// (0x0003649a) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003d8b7) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003d8b7) list_medium_line_t3_t

0x6e6d,	// (0x000349c8) list_medium_line_g3_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_g3_g1

0x8951,	// (0x000364ac) list_medium_line_g3_g2_ParamLimits

0x8951,	// (0x000364ac) list_medium_line_g3_g2

0x6e79,	// (0x000349d4) list_medium_line_g3_g3_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003d8be) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003d8be) list_medium_line_g3_g

0x895d,	// (0x000364b8) list_medium_line_g3_t1_ParamLimits

0x895d,	// (0x000364b8) list_medium_line_g3_t1

0x6e6d,	// (0x000349c8) list_medium_line_t2_g3_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t2_g3_g1

0x8951,	// (0x000364ac) list_medium_line_t2_g3_g2_ParamLimits

0x8951,	// (0x000364ac) list_medium_line_t2_g3_g2

0x6e79,	// (0x000349d4) list_medium_line_t2_g3_g3_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003d8be) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003d8be) list_medium_line_t2_g3_g

0x8972,	// (0x000364cd) list_medium_line_t2_g3_t1_ParamLimits

0x8972,	// (0x000364cd) list_medium_line_t2_g3_t1

0x8989,	// (0x000364e4) list_medium_line_t2_g3_t2_ParamLimits

0x8989,	// (0x000364e4) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003d8c5) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003d8c5) list_medium_line_t2_g3_t

0x6e6d,	// (0x000349c8) list_medium_line_t3_g3_g1_ParamLimits

0x6e6d,	// (0x000349c8) list_medium_line_t3_g3_g1

0x8951,	// (0x000364ac) list_medium_line_t3_g3_g2_ParamLimits

0x8951,	// (0x000364ac) list_medium_line_t3_g3_g2

0x6e79,	// (0x000349d4) list_medium_line_t3_g3_g3_ParamLimits

0x6e79,	// (0x000349d4) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003d8be) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003d8be) list_medium_line_t3_g3_g

0x89a4,	// (0x000364ff) list_medium_line_t3_g3_t1_ParamLimits

0x89a4,	// (0x000364ff) list_medium_line_t3_g3_t1

0x89b8,	// (0x00036513) list_medium_line_t3_g3_t2_ParamLimits

0x89b8,	// (0x00036513) list_medium_line_t3_g3_t2

0x89ca,	// (0x00036525) list_medium_line_t3_g3_t3_ParamLimits

0x89ca,	// (0x00036525) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003d8ca) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003d8ca) list_medium_line_t3_g3_t

0x860d,	// (0x00036168) list_medium_line_right_iconx2_g1

0x8463,	// (0x00035fbe) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003d8d1) list_medium_line_right_iconx2_g

0x89de,	// (0x00036539) list_medium_line_right_iconx2_t1

0x860d,	// (0x00036168) list_medium_line_t2_right_iconx2_g1

0x8463,	// (0x00035fbe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003d8d1) list_medium_line_t2_right_iconx2_g

0x89ec,	// (0x00036547) list_medium_line_t2_right_iconx2_t1

0x89fc,	// (0x00036557) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003d8d6) list_medium_line_t2_right_iconx2_t

0x8a0e,	// (0x00036569) list_medium_line_x4_t4_t1

0x8a1c,	// (0x00036577) list_medium_line_x4_t4_t2

0x8a2c,	// (0x00036587) list_medium_line_x4_t4_t3

0x8a3c,	// (0x00036597) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003d8db) list_medium_line_x4_t4_t

0x8a8f,	// (0x000365ea) tport_appsw_pane_ParamLimits

0x8a8f,	// (0x000365ea) tport_appsw_pane

0x8aa7,	// (0x00036602) tport_contact_pane_ParamLimits

0x8aa7,	// (0x00036602) tport_contact_pane

0x8abf,	// (0x0003661a) tport_listscroll_pane_ParamLimits

0x8abf,	// (0x0003661a) tport_listscroll_pane

0x8ad9,	// (0x00036634) cell_tport_appsw_pane_ParamLimits

0x8ad9,	// (0x00036634) cell_tport_appsw_pane

0xd317,	// (0x0003ae72) tport_appsw_pane_g1_ParamLimits

0xd317,	// (0x0003ae72) tport_appsw_pane_g1

0xe643,	// (0x0003c19e) tport_contact_pane_g1

0xdef3,	// (0x0003ba4e) tport_contact_pane_t1

0xe64c,	// (0x0003c1a7) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003d8e4) tport_contact_pane_t

0xe65a,	// (0x0003c1b5) list_tport_pane

0xe663,	// (0x0003c1be) scroll_pane_cp_030

0x8b21,	// (0x0003667c) cell_tport_appsw_pane_g1

0x8b31,	// (0x0003668c) cell_tport_appsw_pane_t1

0x8b3f,	// (0x0003669a) grid_highlight_pane_cp019

0x8b47,	// (0x000366a2) list_tport_double_graphic_pane_ParamLimits

0x8b47,	// (0x000366a2) list_tport_double_graphic_pane

0xa6b4,	// (0x0003820f) list_highlight_pane_cp023_ParamLimits

0xa6b4,	// (0x0003820f) list_highlight_pane_cp023

0x8b54,	// (0x000366af) list_tport_double_graphic_pane_g1_ParamLimits

0x8b54,	// (0x000366af) list_tport_double_graphic_pane_g1

0x8b61,	// (0x000366bc) list_tport_double_graphic_pane_t1_ParamLimits

0x8b61,	// (0x000366bc) list_tport_double_graphic_pane_t1

0x8b76,	// (0x000366d1) list_tport_double_graphic_pane_t2_ParamLimits

0x8b76,	// (0x000366d1) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003d8f0) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003d8f0) list_tport_double_graphic_pane_t

0x9bf4,	// (0x0003774f) main_cale_note_pane

0x1623,	// (0x0002f17e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1623,	// (0x0002f17e) cell_vitu2_function_top_wide_pane_cp01

0x7fb2,	// (0x00035b0d) wait_bar_pane_cp05_ParamLimits

0xa6b4,	// (0x0003820f) listscroll_cmail_pane

0xe66c,	// (0x0003c1c7) list_cmail_pane

0xd38c,	// (0x0003aee7) list_cmail_body_pane

0x8b88,	// (0x000366e3) list_single_cmail_header_caption_pane

0x8b9f,	// (0x000366fa) list_single_cmail_header_detail_pane_ParamLimits

0x8b9f,	// (0x000366fa) list_single_cmail_header_detail_pane

0xe67c,	// (0x0003c1d7) list_single_cmail_header_caption_pane_t1

0x8bd4,	// (0x0003672f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bd4,	// (0x0003672f) list_single_cmail_header_detail_pane_g1

0xe68a,	// (0x0003c1e5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe68a,	// (0x0003c1e5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003d8f5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003d8f5) list_single_cmail_header_detail_pane_g

0x8bec,	// (0x00036747) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8bec,	// (0x00036747) list_single_cmail_header_detail_pane_t1

0x8c2a,	// (0x00036785) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c2a,	// (0x00036785) list_single_cmail_header_editor_pane_bg

0xe094,	// (0x0003bbef) list_cmail_body_pane_g1

0xe6c7,	// (0x0003c222) list_cmail_body_pane_t1

0xd354,	// (0x0003aeaf) list_single_cmail_header_editor_pane_bg_g1

0xa820,	// (0x0003837b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd364,	// (0x0003aebf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd35c,	// (0x0003aeb7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd5a8,	// (0x0003b103) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd384,	// (0x0003aedf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd374,	// (0x0003aecf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd37c,	// (0x0003aed7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa800,	// (0x0003835b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c43,	// (0x0003679e) calenote_gesture_pane_ParamLimits

0x8c43,	// (0x0003679e) calenote_gesture_pane

0x8c63,	// (0x000367be) calenote_window_pane_ParamLimits

0x8c63,	// (0x000367be) calenote_window_pane

0xe6d5,	// (0x0003c230) popup_note_window_cp01

0x8c7f,	// (0x000367da) calenote_swipe_1_pane_ParamLimits

0x8c7f,	// (0x000367da) calenote_swipe_1_pane

0x8405,	// (0x00035f60) calenote_swipe_2_pane_ParamLimits

0x8405,	// (0x00035f60) calenote_swipe_2_pane

0xe3f5,	// (0x0003bf50) calenote_swipe_1_pane_g1_ParamLimits

0xe3f5,	// (0x0003bf50) calenote_swipe_1_pane_g1

0xe402,	// (0x0003bf5d) calenote_swipe_1_pane_g2_ParamLimits

0xe402,	// (0x0003bf5d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003d81e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003d81e) calenote_swipe_1_pane_g

0xe6e7,	// (0x0003c242) calenote_swipe_1_pane_t1_ParamLimits

0xe6e7,	// (0x0003c242) calenote_swipe_1_pane_t1

0xe3f5,	// (0x0003bf50) calenote_swipe_2_pane_g1_ParamLimits

0xe3f5,	// (0x0003bf50) calenote_swipe_2_pane_g1

0xe706,	// (0x0003c261) calenote_swipe_2_pane_g2_ParamLimits

0xe706,	// (0x0003c261) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003d901) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003d901) calenote_swipe_2_pane_g

0xe712,	// (0x0003c26d) calenote_swipe_2_pane_t1_ParamLimits

0xe712,	// (0x0003c26d) calenote_swipe_2_pane_t1

0x9bf4,	// (0x0003774f) main_mup_navstr_pane

0x5838,	// (0x00033393) main_mup3_pane_t7_ParamLimits

0x5838,	// (0x00033393) main_mup3_pane_t7

0x625d,	// (0x00033db8) main_mp4_pane_g6_ParamLimits

0x625d,	// (0x00033db8) main_mp4_pane_g6

0x64a4,	// (0x00033fff) main_image3_pane_t4_ParamLimits

0x64a4,	// (0x00033fff) main_image3_pane_t4

0x8c94,	// (0x000367ef) popup_navstr_preview_pane_ParamLimits

0x8c94,	// (0x000367ef) popup_navstr_preview_pane

0x8ca8,	// (0x00036803) scroll_navstr_pane_ParamLimits

0x8ca8,	// (0x00036803) scroll_navstr_pane

0x9bf4,	// (0x0003774f) bg_popup_preview_window_pane_cp04

0xe739,	// (0x0003c294) popup_navstr_preview_pane_t1

0x8cbc,	// (0x00036817) scroll_navstr_pane_g1_ParamLimits

0x8cbc,	// (0x00036817) scroll_navstr_pane_g1

0x8cd0,	// (0x0003682b) scroll_navstr_pane_t1_ParamLimits

0x8cd0,	// (0x0003682b) scroll_navstr_pane_t1

0xe6de,	// (0x0003c239) bg_button_pane_cp014

0xe6de,	// (0x0003c239) bg_button_pane_cp030

0x82a3,	// (0x00035dfe) list_double_fisheye_pane_g4_ParamLimits

0x82a3,	// (0x00035dfe) list_double_fisheye_pane_g4

0x82af,	// (0x00035e0a) list_double_fisheye_pane_g5_ParamLimits

0x82af,	// (0x00035e0a) list_double_fisheye_pane_g5

0xca8d,	// (0x0003a5e8) sp_fs_scroll_pane_cp03

0xe4cd,	// (0x0003c028) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4d9,	// (0x0003c034) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003d83b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4e5,	// (0x0003c040) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe674,	// (0x0003c1cf) sp_fs_scroll_pane_cp02

0xa435,	// (0x00037f90) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa435,	// (0x00037f90) popup_sp_fs_calendar_preview_list_single_pane

0x9bf4,	// (0x0003774f) main_cam6_pano_pane

0x1a09,	// (0x0002f564) main_mup3_pane_ParamLimits

0x9bf4,	// (0x0003774f) main_phacti_pane

0x7e85,	// (0x000359e0) bg_button_pane_cp11

0x7e9f,	// (0x000359fa) main_mobtv_info_pane_g2_ParamLimits

0x7e9f,	// (0x000359fa) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003d79b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003d79b) main_mobtv_info_pane_g

0x807c,	// (0x00035bd7) sc_clock_pane_t5_ParamLimits

0x807c,	// (0x00035bd7) sc_clock_pane_t5

0x810e,	// (0x00035c69) main_radioblah_pane_g1_ParamLimits

0xe338,	// (0x0003be93) main_radioblah_pane_t3_ParamLimits

0xe338,	// (0x0003be93) main_radioblah_pane_t3

0xe350,	// (0x0003beab) main_radioblah_pane_t4_ParamLimits

0xe350,	// (0x0003beab) main_radioblah_pane_t4

0x8136,	// (0x00035c91) main_radioblah_text_pane_ParamLimits

0x8136,	// (0x00035c91) main_radioblah_text_pane

0x8148,	// (0x00035ca3) main_radioblah_info_pane_g1_ParamLimits

0x81e1,	// (0x00035d3c) main_radioblah_info_pane_t4_ParamLimits

0x81e1,	// (0x00035d3c) main_radioblah_info_pane_t4

0xa6b4,	// (0x0003820f) main_sp_fs_calendar_pane

0x8ce7,	// (0x00036842) main_phacti_pane_g1

0x8cef,	// (0x0003684a) phacti_note_pane_ParamLimits

0x8cef,	// (0x0003684a) phacti_note_pane

0xe750,	// (0x0003c2ab) phacti_term_pane_ParamLimits

0xe750,	// (0x0003c2ab) phacti_term_pane

0xe765,	// (0x0003c2c0) phacti_note_pane_t1_ParamLimits

0xe765,	// (0x0003c2c0) phacti_note_pane_t1

0xe77c,	// (0x0003c2d7) phacti_term_pane_g1

0xe784,	// (0x0003c2df) phacti_term_pane_t1_ParamLimits

0xe784,	// (0x0003c2df) phacti_term_pane_t1

0xe7ae,	// (0x0003c309) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa549,	// (0x000380a4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003d90b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7b6,	// (0x0003c311) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7b6,	// (0x0003c311) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7cb,	// (0x0003c326) aid_popup_sp_fs_bg_corner_pane

0xc8b3,	// (0x0003a40e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bf4,	// (0x0003774f) popup_sp_fs_calendar_preview_bg_pane

0xe7d3,	// (0x0003c32e) popup_sp_fs_calendar_preview_list_pane

0xc4ab,	// (0x0003a006) bg_main_sp_fs_cale_pane_ParamLimits

0xc4ab,	// (0x0003a006) bg_main_sp_fs_cale_pane

0xe7db,	// (0x0003c336) listscroll_cale_mrui_pane_ParamLimits

0xe7db,	// (0x0003c336) listscroll_cale_mrui_pane

0xe7f0,	// (0x0003c34b) listscroll_sp_fs_schedule_track_pane

0xe7f9,	// (0x0003c354) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f9,	// (0x0003c354) main_sp_fs_ctrlbar_pane_cp01

0xe80c,	// (0x0003c367) main_sp_fs_ribbon_pane

0xe814,	// (0x0003c36f) popup_sp_fs_cale_preview_window

0x8d64,	// (0x000368bf) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d64,	// (0x000368bf) list_single_sp_fs_schedule_track_pane

0xa6b4,	// (0x0003820f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6b4,	// (0x0003820f) bg_sp_fs_highlight_list_pane_cp03

0x8d78,	// (0x000368d3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d78,	// (0x000368d3) list_single_sp_fs_schedule_track_pane_g1

0x8d84,	// (0x000368df) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d84,	// (0x000368df) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003d910) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003d910) list_single_sp_fs_schedule_track_pane_g

0x8d90,	// (0x000368eb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d90,	// (0x000368eb) list_single_sp_fs_schedule_track_pane_t1

0x8daa,	// (0x00036905) sp_fs_schedule_track_pane_ParamLimits

0x8daa,	// (0x00036905) sp_fs_schedule_track_pane

0xe826,	// (0x0003c381) sp_fs_schedule_track_pane_g1

0xe82e,	// (0x0003c389) sp_fs_schedule_track_pane_g2

0xe836,	// (0x0003c391) sp_fs_schedule_track_pane_g3

0xe83e,	// (0x0003c399) sp_fs_schedule_track_pane_g4

0xe846,	// (0x0003c3a1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003d915) sp_fs_schedule_track_pane_g

0xd354,	// (0x0003aeaf) bg_sp_fs_schedule_viewer_highlight_g1

0xa820,	// (0x0003837b) bg_sp_fs_schedule_viewer_highlight_g2

0xd35c,	// (0x0003aeb7) bg_sp_fs_schedule_viewer_highlight_g3

0xd364,	// (0x0003aebf) bg_sp_fs_schedule_viewer_highlight_g4

0xd5a8,	// (0x0003b103) bg_sp_fs_schedule_viewer_highlight_g5

0xd374,	// (0x0003aecf) bg_sp_fs_schedule_viewer_highlight_g6

0xd37c,	// (0x0003aed7) bg_sp_fs_schedule_viewer_highlight_g7

0xd384,	// (0x0003aedf) bg_sp_fs_schedule_viewer_highlight_g8

0xa800,	// (0x0003835b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003d920) bg_sp_fs_schedule_viewer_highlight_g

0x9bf4,	// (0x0003774f) bg_main_sp_fs_ribbon_pane

0x8dbb,	// (0x00036916) main_sp_fs_ribbon_pane_g1

0xe84e,	// (0x0003c3a9) main_sp_fs_ribbon_pane_t1

0x8dc4,	// (0x0003691f) main_sp_fs_ribbon_pane_t2

0xe85d,	// (0x0003c3b8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003d933) main_sp_fs_ribbon_pane_t

0xe86c,	// (0x0003c3c7) main_sp_fs_ribbon_scheduler_pane

0xe874,	// (0x0003c3cf) bg_main_sp_fs_ribbon_pane_g1

0xe87d,	// (0x0003c3d8) bg_main_sp_fs_ribbon_pane_g2

0xe886,	// (0x0003c3e1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003d93a) bg_main_sp_fs_ribbon_pane_g

0xe88e,	// (0x0003c3e9) main_sp_fs_ribbon_scheduler_pane_g1

0xe897,	// (0x0003c3f2) main_sp_fs_ribbon_scheduler_pane_g2

0xe8a0,	// (0x0003c3fb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003d941) main_sp_fs_ribbon_scheduler_pane_g

0xe8a9,	// (0x0003c404) list_cale_mrui_pane

0x8dd3,	// (0x0003692e) sp_fs_scroll_pane_cp07_ParamLimits

0x8dd3,	// (0x0003692e) sp_fs_scroll_pane_cp07

0x8def,	// (0x0003694a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8def,	// (0x0003694a) bg_sp_fs_schedule_viewer_highlight

0xe8b6,	// (0x0003c411) list_single_sp_fs_schedule_track_pane_cp01

0xe8be,	// (0x0003c419) list_sp_fs_schedule_track_pane

0xe8c6,	// (0x0003c421) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c6,	// (0x0003c421) sp_fs_scroll_pane_cp06

0xc8b3,	// (0x0003a40e) bgmain_sp_fs_calendar_pane_g1

0x8dff,	// (0x0003695a) list_single_cale_mrui_pane_ParamLimits

0x8dff,	// (0x0003695a) list_single_cale_mrui_pane

0xe8d8,	// (0x0003c433) list_single_cale_mrui_row_pane_ParamLimits

0xe8d8,	// (0x0003c433) list_single_cale_mrui_row_pane

0xe8e5,	// (0x0003c440) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8e5,	// (0x0003c440) list_single_cale_mrui_row_pane_g1

0xe92a,	// (0x0003c485) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe92a,	// (0x0003c485) list_single_cale_mrui_row_pane_t1

0x8e20,	// (0x0003697b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e20,	// (0x0003697b) list_single_cale_mrui_row_pane_t2

0xe93c,	// (0x0003c497) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe93c,	// (0x0003c497) list_single_cale_mrui_row_pane_t3

0xe96b,	// (0x0003c4c6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe96b,	// (0x0003c4c6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003d94f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003d94f) list_single_cale_mrui_row_pane_t

0x8e88,	// (0x000369e3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e88,	// (0x000369e3) list_single_cmail_header_editor_pane_bg_cp01

0x8eae,	// (0x00036a09) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8eae,	// (0x00036a09) list_single_cmail_header_editor_pane_bg_cp02

0x8ece,	// (0x00036a29) main_radioblah_text_pane_t1_ParamLimits

0x8ece,	// (0x00036a29) main_radioblah_text_pane_t1

0xe99a,	// (0x0003c4f5) cam6_indi_pane_cp01

0xe9a2,	// (0x0003c4fd) cam6_mode_pane_cp01

0xe9aa,	// (0x0003c505) cam6_pano_pane

0xe9b3,	// (0x0003c50e) cam6_zoom_pane_cp01

0xe9bb,	// (0x0003c516) cam6_pano_image_pane

0xe9c6,	// (0x0003c521) cam6_pano_pane_g1

0xe094,	// (0x0003bbef) cam6_pano_pane_g2

0xe9cf,	// (0x0003c52a) cam6_pano_pane_g3

0xe9d8,	// (0x0003c533) cam6_pano_pane_g4

0xce97,	// (0x0003a9f2) cam6_pano_pane_g5

0xe9e1,	// (0x0003c53c) cam6_pano_pane_g6

0xe9eb,	// (0x0003c546) cam6_pano_pane_g7

0xe9f3,	// (0x0003c54e) cam6_pano_pane_g8

0xe9fc,	// (0x0003c557) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003d958) cam6_pano_pane_g

0x9bf4,	// (0x0003774f) main_browser_tag_pane

0xe731,	// (0x0003c28c) grid_navstr_albumart_pane

0xea07,	// (0x0003c562) cell_navstr_albumart_pane_ParamLimits

0xea07,	// (0x0003c562) cell_navstr_albumart_pane

0xea27,	// (0x0003c582) cell_navstr_albumart_pane_g1

0xc2bc,	// (0x00039e17) cell_navstr_albumart_pane_g2

0xc2cc,	// (0x00039e27) cell_navstr_albumart_pane_g3

0xc2c4,	// (0x00039e1f) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003d96b) cell_navstr_albumart_pane_g

0x8ee8,	// (0x00036a43) bt_list_pane_ParamLimits

0x8ee8,	// (0x00036a43) bt_list_pane

0x8efc,	// (0x00036a57) bt_list_pane_t1

0x8f0b,	// (0x00036a66) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003d974) bt_list_pane_t

0x9bf4,	// (0x0003774f) main_cale_prevew_pane

0x8f1a,	// (0x00036a75) popup_cale_preview_window_ParamLimits

0x8f1a,	// (0x00036a75) popup_cale_preview_window

0xa6b4,	// (0x0003820f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6b4,	// (0x0003820f) bg_popup_preview_window_pane_cp05

0xea2f,	// (0x0003c58a) list_cale_preview_pane_ParamLimits

0xea2f,	// (0x0003c58a) list_cale_preview_pane

0x8f35,	// (0x00036a90) list_double_cale_preview_pane_ParamLimits

0x8f35,	// (0x00036a90) list_double_cale_preview_pane

0x8f47,	// (0x00036aa2) list_single_cale_preview_pane_ParamLimits

0x8f47,	// (0x00036aa2) list_single_cale_preview_pane

0x8f5d,	// (0x00036ab8) list_single_cale_preview_pane_g1

0x8f65,	// (0x00036ac0) list_single_cale_preview_pane_t1_ParamLimits

0x8f65,	// (0x00036ac0) list_single_cale_preview_pane_t1

0x8f7a,	// (0x00036ad5) list_double_cale_preview_pane_g1

0x8f82,	// (0x00036add) list_double_cale_preview_pane_t1_ParamLimits

0x8f82,	// (0x00036add) list_double_cale_preview_pane_t1

0x8f97,	// (0x00036af2) list_double_cale_preview_pane_t2_ParamLimits

0x8f97,	// (0x00036af2) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003d979) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003d979) list_double_cale_preview_pane_t

0x9bf4,	// (0x0003774f) main_ezdial_pane

0xa6b4,	// (0x0003820f) main_sp_fs_email_pane_ParamLimits

0x848d,	// (0x00035fe8) cmail_ddmenu_btn01_pane_ParamLimits

0x848d,	// (0x00035fe8) cmail_ddmenu_btn01_pane

0x84a0,	// (0x00035ffb) cmail_ddmenu_btn02_pane_ParamLimits

0x84a0,	// (0x00035ffb) cmail_ddmenu_btn02_pane

0x84c3,	// (0x0003601e) cmail_ddmenu_btn03_pane_ParamLimits

0x84c3,	// (0x0003601e) cmail_ddmenu_btn03_pane

0x84e9,	// (0x00036044) main_sp_fs_ctrlbar_pane_ParamLimits

0x850d,	// (0x00036068) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd38c,	// (0x0003aee7) list_cmail_body_pane_ParamLimits

0x8bc9,	// (0x00036724) bg_button_pane_cp12

0xe696,	// (0x0003c1f1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe696,	// (0x0003c1f1) list_single_cmail_header_detail_pane_g3

0xe6a3,	// (0x0003c1fe) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6a3,	// (0x0003c1fe) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003d8fc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003d8fc) list_single_cmail_header_detail_pane_t

0xe799,	// (0x0003c2f4) phacti_term_pane_t2_ParamLimits

0xe799,	// (0x0003c2f4) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003d906) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003d906) phacti_term_pane_t

0xea3b,	// (0x0003c596) aid_size_list_single_double

0x8faf,	// (0x00036b0a) popup_ezdial_listscroll_window

0x8fcb,	// (0x00036b26) popup_number_entry_window_cp01

0xb02d,	// (0x00038b88) bg_popup_call_pane_cp09

0xea47,	// (0x0003c5a2) ezdial_list_pane

0xea4f,	// (0x0003c5aa) scroll_pane_cp23

0xc4ab,	// (0x0003a006) bg_button_pane_cp028_ParamLimits

0xc4ab,	// (0x0003a006) bg_button_pane_cp028

0x8fd9,	// (0x00036b34) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fd9,	// (0x00036b34) cmail_ddmenu_btn01_pane_g1

0x8fe5,	// (0x00036b40) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fe5,	// (0x00036b40) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003d97e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003d97e) cmail_ddmenu_btn01_pane_g

0xea57,	// (0x0003c5b2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea57,	// (0x0003c5b2) cmail_ddmenu_btn01_pane_t1

0xc4ab,	// (0x0003a006) bg_button_pane_cp029_ParamLimits

0xc4ab,	// (0x0003a006) bg_button_pane_cp029

0x8ff9,	// (0x00036b54) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ff9,	// (0x00036b54) cmail_ddmenu_btn02_pane_g1

0x9011,	// (0x00036b6c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9011,	// (0x00036b6c) cmail_ddmenu_btn02_pane_t1

0xa6b4,	// (0x0003820f) bg_button_pane_cp031_ParamLimits

0xa6b4,	// (0x0003820f) bg_button_pane_cp031

0x8ff9,	// (0x00036b54) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ff9,	// (0x00036b54) cmail_ddmenu_btn03_pane_g1

0x9011,	// (0x00036b6c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9011,	// (0x00036b6c) cmail_ddmenu_btn03_pane_t1

0x644d,	// (0x00033fa8) cell_dialer2_keypad_pane_t1_ParamLimits

0x6467,	// (0x00033fc2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6467,	// (0x00033fc2) cell_dialer2_keypad_pane_t1_copy1

0x7cde,	// (0x00035839) ncimui_group_button_pane

0xa6b4,	// (0x0003820f) main_sp_fs_calendar_pane_ParamLimits

0x8b88,	// (0x000366e3) list_single_cmail_header_caption_pane_ParamLimits

0xd92a,	// (0x0003b485) aid_recal_txt_sm_pane

0x9bf4,	// (0x0003774f) mian_recal_day_pane

0xe814,	// (0x0003c36f) popup_sp_fs_cale_preview_window_ParamLimits

0xea6d,	// (0x0003c5c8) list_recal_day_pane

0xeaaf,	// (0x0003c60a) list_single_recal_day_pane_ParamLimits

0xeaaf,	// (0x0003c60a) list_single_recal_day_pane

0xeac1,	// (0x0003c61c) list_single_recal_day_pane_g1_ParamLimits

0xeac1,	// (0x0003c61c) list_single_recal_day_pane_g1

0xeacd,	// (0x0003c628) list_single_recal_day_pane_g2_ParamLimits

0xeacd,	// (0x0003c628) list_single_recal_day_pane_g2

0xeadd,	// (0x0003c638) list_single_recal_day_pane_g3_ParamLimits

0xeadd,	// (0x0003c638) list_single_recal_day_pane_g3

0x9035,	// (0x00036b90) list_single_recal_day_pane_g4_ParamLimits

0x9035,	// (0x00036b90) list_single_recal_day_pane_g4

0xeae9,	// (0x0003c644) list_single_recal_day_pane_g5_ParamLimits

0xeae9,	// (0x0003c644) list_single_recal_day_pane_g5

0xeaf9,	// (0x0003c654) list_single_recal_day_pane_g6_ParamLimits

0xeaf9,	// (0x0003c654) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003d98d) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003d98d) list_single_recal_day_pane_g

0xeb0d,	// (0x0003c668) list_single_recal_day_pane_t1

0xeb1f,	// (0x0003c67a) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003d998) list_single_recal_day_pane_t

0x9055,	// (0x00036bb0) ncimui_query_button_pane_ParamLimits

0x9055,	// (0x00036bb0) ncimui_query_button_pane

0x9065,	// (0x00036bc0) ncimui_query_button_pane_t1_ParamLimits

0x9065,	// (0x00036bc0) ncimui_query_button_pane_t1

0xeb31,	// (0x0003c68c) ncimui_query_button_pane_t2_ParamLimits

0xeb31,	// (0x0003c68c) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003d99d) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003d99d) ncimui_query_button_pane_t

0x9078,	// (0x00036bd3) query_button_pane_ParamLimits

0x9078,	// (0x00036bd3) query_button_pane

0x9bf4,	// (0x0003774f) bg_button_pane_cp0028

0xeb44,	// (0x0003c69f) query_button_pane_t1

0x0728,	// (0x0002e283) main_tport_pane_ParamLimits

0x8a4c,	// (0x000365a7) bg_popup_window_pane_cp01_ParamLimits

0x8a4c,	// (0x000365a7) bg_popup_window_pane_cp01

0x8a67,	// (0x000365c2) heading_pane_cp08_ParamLimits

0x8a67,	// (0x000365c2) heading_pane_cp08

0x8a7a,	// (0x000365d5) heading_pane_cp07_ParamLimits

0x8a7a,	// (0x000365d5) heading_pane_cp07

0x8b21,	// (0x0003667c) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003d8e9) cell_tport_appsw_pane_g

0xb19c,	// (0x00038cf7) input_candi_list_open_g1

0xa9e3,	// (0x0003853e) list_cale_time_pane_g6_ParamLimits

0xa9e3,	// (0x0003853e) list_cale_time_pane_g6

0x5224,	// (0x00032d7f) aid_size_touch_calib_1_ParamLimits

0x5224,	// (0x00032d7f) aid_size_touch_calib_1

0x5236,	// (0x00032d91) aid_size_touch_calib_2_ParamLimits

0x5236,	// (0x00032d91) aid_size_touch_calib_2

0x524e,	// (0x00032da9) aid_size_touch_calib_3_ParamLimits

0x524e,	// (0x00032da9) aid_size_touch_calib_3

0x526c,	// (0x00032dc7) aid_size_touch_calib_4_ParamLimits

0x526c,	// (0x00032dc7) aid_size_touch_calib_4

0x5284,	// (0x00032ddf) main_touch_calib_button_group_pane_ParamLimits

0x5284,	// (0x00032ddf) main_touch_calib_button_group_pane

0x529c,	// (0x00032df7) main_touch_calib_pane_g1_ParamLimits

0x52ae,	// (0x00032e09) main_touch_calib_pane_g2_ParamLimits

0x52c0,	// (0x00032e1b) main_touch_calib_pane_g3_ParamLimits

0x52d2,	// (0x00032e2d) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0003d2b1) main_touch_calib_pane_g_ParamLimits

0x52e4,	// (0x00032e3f) main_touch_calib_pane_t1_ParamLimits

0x52fe,	// (0x00032e59) main_touch_calib_pane_t2_ParamLimits

0x5318,	// (0x00032e73) main_touch_calib_pane_t3_ParamLimits

0x532c,	// (0x00032e87) main_touch_calib_pane_t4_ParamLimits

0x5340,	// (0x00032e9b) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0003d2ba) main_touch_calib_pane_t_ParamLimits

0xcc57,	// (0x0003a7b2) list_single_fp_cale_pane_g3_ParamLimits

0xcc57,	// (0x0003a7b2) list_single_fp_cale_pane_g3

0x1a09,	// (0x0002f564) bg_button_pane_cp012_ParamLimits

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp03_ParamLimits

0x1836,	// (0x0002f391) cell_vitu2_function_top_pane_g1_ParamLimits

0x1a09,	// (0x0002f564) bg_vkb2_func_pane_cp04_ParamLimits

0x7c6c,	// (0x000357c7) main_ncimui_button_group_pane_ParamLimits

0x7c6c,	// (0x000357c7) main_ncimui_button_group_pane

0x7ccc,	// (0x00035827) main_ncimui_pane_t3_ParamLimits

0x7ccc,	// (0x00035827) main_ncimui_pane_t3

0xe747,	// (0x0003c2a2) phacti_button_group_pane

0xea3b,	// (0x0003c596) aid_size_list_single_double_ParamLimits

0x8faf,	// (0x00036b0a) popup_ezdial_listscroll_window_ParamLimits

0x8fcb,	// (0x00036b26) popup_number_entry_window_cp01_ParamLimits

0x908b,	// (0x00036be6) phacti_button_pane_ParamLimits

0x908b,	// (0x00036be6) phacti_button_pane

0x9bf4,	// (0x0003774f) bg_button_pane_cp14

0xeb52,	// (0x0003c6ad) phacti_button_pane_t1

0x909c,	// (0x00036bf7) main_touch_calib_button_pane_ParamLimits

0x909c,	// (0x00036bf7) main_touch_calib_button_pane

0xa331,	// (0x00037e8c) bg_button_pane_cp18_ParamLimits

0xa331,	// (0x00037e8c) bg_button_pane_cp18

0xeb60,	// (0x0003c6bb) main_touch_calib_button_pane_t1_ParamLimits

0xeb60,	// (0x0003c6bb) main_touch_calib_button_pane_t1

0xeb76,	// (0x0003c6d1) main_touch_calib_button_pane_t2_ParamLimits

0xeb76,	// (0x0003c6d1) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003d9a2) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003d9a2) main_touch_calib_button_pane_t

0x9bf4,	// (0x0003774f) cell_ncimui_button_pane

0x9bf4,	// (0x0003774f) bg_button_pane_cp032

0xeb94,	// (0x0003c6ef) cell_ncimui_button_pane_t1

0x6484,	// (0x00033fdf) image3_infobar_pane_ParamLimits

0x6484,	// (0x00033fdf) image3_infobar_pane

0x80a8,	// (0x00035c03) fs_bigclock_status_pane_ParamLimits

0x80a8,	// (0x00035c03) fs_bigclock_status_pane

0x80b5,	// (0x00035c10) main_fs_bigclock_clock_pane_ParamLimits

0x80b5,	// (0x00035c10) main_fs_bigclock_clock_pane

0x80d1,	// (0x00035c2c) main_fs_bigclock_indi_pane_ParamLimits

0x80d1,	// (0x00035c2c) main_fs_bigclock_indi_pane

0x80ea,	// (0x00035c45) main_fs_bigclock_swipe_pane_ParamLimits

0x80ea,	// (0x00035c45) main_fs_bigclock_swipe_pane

0x9bf4,	// (0x0003774f) main_fs_clock_dumped_data

0xe1a1,	// (0x0003bcfc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1a1,	// (0x0003bcfc) list_single_fs_bigclock_indicator_pane_g1

0xe1bb,	// (0x0003bd16) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1bb,	// (0x0003bd16) list_single_fs_bigclock_indicator_pane_g2

0xe1e7,	// (0x0003bd42) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1e7,	// (0x0003bd42) list_single_fs_bigclock_indicator_pane_g3

0xe201,	// (0x0003bd5c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe201,	// (0x0003bd5c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003d7cf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003d7cf) list_single_fs_bigclock_indicator_pane_g

0xe22a,	// (0x0003bd85) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe22a,	// (0x0003bd85) list_single_fs_bigclock_indicator_pane_t1

0xe252,	// (0x0003bdad) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe252,	// (0x0003bdad) list_single_fs_bigclock_indicator_pane_t2

0xe27a,	// (0x0003bdd5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe27a,	// (0x0003bdd5) list_single_fs_bigclock_indicator_pane_t3

0xe2a2,	// (0x0003bdfd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2a2,	// (0x0003bdfd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003d7da) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003d7da) list_single_fs_bigclock_indicator_pane_t

0xeba2,	// (0x0003c6fd) image3_infobar_fav_pane_ParamLimits

0xeba2,	// (0x0003c6fd) image3_infobar_fav_pane

0xebb2,	// (0x0003c70d) image3_infobar_loc_pane_ParamLimits

0xebb2,	// (0x0003c70d) image3_infobar_loc_pane

0xebc6,	// (0x0003c721) image3_infobar_time_pane_ParamLimits

0xebc6,	// (0x0003c721) image3_infobar_time_pane

0xc8b3,	// (0x0003a40e) image3_infobar_time_pane_g1

0xebd6,	// (0x0003c731) image3_infobar_time_pane_t1

0xc8b3,	// (0x0003a40e) image3_infobar_loc_pane_g1

0xebe4,	// (0x0003c73f) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003d9a7) image3_infobar_loc_pane_g

0xebec,	// (0x0003c747) image3_infobar_loc_pane_t1

0xc8b3,	// (0x0003a40e) image3_infobar_fav_pane_g1

0xebfa,	// (0x0003c755) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003d9ac) image3_infobar_fav_pane_g

0xec02,	// (0x0003c75d) fs_bigclock_status_battery_pane

0xec0b,	// (0x0003c766) fs_bigclock_status_signal_pane

0xec14,	// (0x0003c76f) fs_bigclock_status_title_pane

0xec1d,	// (0x0003c778) fs_bigclock_status_signal_pane_g1

0xec26,	// (0x0003c781) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003d9b1) fs_bigclock_status_signal_pane_g

0xec2e,	// (0x0003c789) fs_bigclock_status_battery_pane_g1

0xec37,	// (0x0003c792) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003d9b6) fs_bigclock_status_battery_pane_g

0xec3f,	// (0x0003c79a) fs_bigclock_status_title_pane_t1

0xc8b3,	// (0x0003a40e) main_fs_bigclock_clock_pane_g1

0x90b1,	// (0x00036c0c) main_fs_bigclock_clock_pane_g2

0x90b1,	// (0x00036c0c) main_fs_bigclock_clock_pane_g3

0x90b1,	// (0x00036c0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003d9bb) main_fs_bigclock_clock_pane_g

0x90b9,	// (0x00036c14) main_fs_bigclock_clock_pane_t1

0x90c7,	// (0x00036c22) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003d9c4) main_fs_bigclock_clock_pane_t

0xec4d,	// (0x0003c7a8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec4d,	// (0x0003c7a8) list_single_fs_bigclock_indicator_pane

0x90d6,	// (0x00036c31) list_single_fs_bigclock_pane_ParamLimits

0x90d6,	// (0x00036c31) list_single_fs_bigclock_pane

0xec67,	// (0x0003c7c2) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0003c7d1) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0003c7d9) list_single_fs_bigclock_pane_t1

0xc8b3,	// (0x0003a40e) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0003c81c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003d9d5) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0003c824) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0003c824) main_fs_bigclock_swipe_pane_t1

0x3980,	// (0x000314db) call_type_pane_ParamLimits

0x9bf4,	// (0x0003774f) main_btmg_pane

0xe911,	// (0x0003c46c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe911,	// (0x0003c46c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003d948) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003d948) list_single_cale_mrui_row_pane_g

0xea96,	// (0x0003c5f1) list_recal_vselct_arw_lo_pane

0xea9e,	// (0x0003c5f9) list_recal_vselct_arw_up_pane

0xeaa6,	// (0x0003c601) list_recal_vselct_pane

0x9139,	// (0x00036c94) btmg_button_pane

0x9143,	// (0x00036c9e) main_btmg_pane_g1

0x9bf4,	// (0x0003774f) bg_button_pane_cp044

0xece6,	// (0x0003c841) btmg_button_pane_t1

0xc497,	// (0x00039ff2) aid_listscroll_gen

0xa6b4,	// (0x0003820f) main_cntbar_detail_pane

0xe66c,	// (0x0003c1c7) list_cmail_folder_pane

0xca8d,	// (0x0003a5e8) sp_fs_scroll_pane_cp03_ParamLimits

0x8b88,	// (0x000366e3) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b88,	// (0x000366e3) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0003c84f) aid_size_cmail_indent

0xecfd,	// (0x0003c858) list_single_dyc_row_pane_cp01

0x917f,	// (0x00036cda) cntbar_detail_list_pane_ParamLimits

0x917f,	// (0x00036cda) cntbar_detail_list_pane

0x91cb,	// (0x00036d26) main_cntbar_detail_cont_pane_ParamLimits

0x91cb,	// (0x00036d26) main_cntbar_detail_cont_pane

0xca8d,	// (0x0003a5e8) scroll_pane_cp032_ParamLimits

0xca8d,	// (0x0003a5e8) scroll_pane_cp032

0x91df,	// (0x00036d3a) cntbar_detail_list_event_pane_ParamLimits

0x91df,	// (0x00036d3a) cntbar_detail_list_event_pane

0x918f,	// (0x00036cea) cntbar_detail_list_shct_pane

0xa86e,	// (0x000383c9) aid_list_gen

0xed06,	// (0x0003c861) aid_scroll

0xed0f,	// (0x0003c86a) aid_size_touch_scroll_bar

0x7461,	// (0x00034fbc) aid_list_double

0x744f,	// (0x00034faa) aid_list_single

0x744f,	// (0x00034faa) aid_list_single_lg

0x91ef,	// (0x00036d4a) aid_list_z_g_a_sm

0x91f7,	// (0x00036d52) aid_list_z_g_d

0x91ff,	// (0x00036d5a) aid_txt_z_prm

0x920d,	// (0x00036d68) aid_txt_z_prm_cp01

0x921b,	// (0x00036d76) aid_txt_z_sec

0x9229,	// (0x00036d84) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9229,	// (0x00036d84) main_cntbar_detail_cont_pane_g1

0x923d,	// (0x00036d98) main_cntbar_detail_cont_pane_g2_ParamLimits

0x923d,	// (0x00036d98) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003d9da) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003d9da) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0003c873) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0003c881) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0003c88f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003d9df) main_cntbar_detail_cont_pane_t

0x924d,	// (0x00036da8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x924d,	// (0x00036da8) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0003c89d) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0003c8a6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003d9e6) cntbar_detail_list_shct_pane_g

0x9261,	// (0x00036dbc) cntbar_detail_list_event_pane_g1_ParamLimits

0x9261,	// (0x00036dbc) cntbar_detail_list_event_pane_g1

0x926d,	// (0x00036dc8) cntbar_detail_list_event_pane_g2_ParamLimits

0x926d,	// (0x00036dc8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003d9eb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003d9eb) cntbar_detail_list_event_pane_g

0x92d9,	// (0x00036e34) cntbar_detail_list_event_pane_t1_ParamLimits

0x92d9,	// (0x00036e34) cntbar_detail_list_event_pane_t1

0x92ee,	// (0x00036e49) cntbar_detail_list_event_pane_t2_ParamLimits

0x92ee,	// (0x00036e49) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003d9f8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003d9f8) cntbar_detail_list_event_pane_t

0xc8b3,	// (0x0003a40e) cell_cntbar_detail_list_shct_pane_g1

0xafe5,	// (0x00038b40) navi_pane_mv_g3

0xa6b4,	// (0x0003820f) main_cntbar_detail_pane_ParamLimits

0x9bf4,	// (0x0003774f) main_notif_wgt_pane

0x61f7,	// (0x00033d52) aid_tch_main_mp4_pane_g4

0x63d9,	// (0x00033f34) popup_slider_window_cp02

0xea8c,	// (0x0003c5e7) list_recal_day_event_pane

0x914d,	// (0x00036ca8) cntbar_detail_btn_pane_ParamLimits

0x914d,	// (0x00036ca8) cntbar_detail_btn_pane

0x9166,	// (0x00036cc1) cntbar_detail_btn_pane_cp01_ParamLimits

0x9166,	// (0x00036cc1) cntbar_detail_btn_pane_cp01

0x918f,	// (0x00036cea) cntbar_detail_list_shct_pane_ParamLimits

0x919f,	// (0x00036cfa) cntbar_detail_pane_g1_ParamLimits

0x919f,	// (0x00036cfa) cntbar_detail_pane_g1

0x91af,	// (0x00036d0a) cntbar_detail_pane_t1_ParamLimits

0x91af,	// (0x00036d0a) cntbar_detail_pane_t1

0x9279,	// (0x00036dd4) cntbar_detail_list_event_pane_g3_ParamLimits

0x9279,	// (0x00036dd4) cntbar_detail_list_event_pane_g3

0x9291,	// (0x00036dec) cntbar_detail_list_event_pane_g4_ParamLimits

0x9291,	// (0x00036dec) cntbar_detail_list_event_pane_g4

0x92a9,	// (0x00036e04) cntbar_detail_list_event_pane_g5_ParamLimits

0x92a9,	// (0x00036e04) cntbar_detail_list_event_pane_g5

0x92c1,	// (0x00036e1c) cntbar_detail_list_event_pane_g6_ParamLimits

0x92c1,	// (0x00036e1c) cntbar_detail_list_event_pane_g6

0x9303,	// (0x00036e5e) cntbar_detail_list_event_pane_t3_ParamLimits

0x9303,	// (0x00036e5e) cntbar_detail_list_event_pane_t3

0x9315,	// (0x00036e70) popup_notif_wgt_window_ParamLimits

0x9315,	// (0x00036e70) popup_notif_wgt_window

0x932e,	// (0x00036e89) popup_submenu_window_cp01_ParamLimits

0x932e,	// (0x00036e89) popup_submenu_window_cp01

0xb02d,	// (0x00038b88) bg_popup_window_pane_cp10

0xed54,	// (0x0003c8af) listscroll_notif_wgt_pane

0xed66,	// (0x0003c8c1) list_notif_wgt_window

0xed6f,	// (0x0003c8ca) scroll_pane_cp033

0x9344,	// (0x00036e9f) list_notif_wgt_row_pane_ParamLimits

0x9344,	// (0x00036e9f) list_notif_wgt_row_pane

0xed78,	// (0x0003c8d3) aid_size_list_notif_wgt_del

0xed85,	// (0x0003c8e0) list_notif_wgt_row_pane_g1

0xed91,	// (0x0003c8ec) list_notif_wgt_row_pane_g2

0xed9d,	// (0x0003c8f8) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003d9ff) list_notif_wgt_row_pane_g

0xedaa,	// (0x0003c905) list_notif_wgt_row_pane_t1

0xedbf,	// (0x0003c91a) list_notif_wgt_row_pane_t2

0xedd1,	// (0x0003c92c) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003da06) list_notif_wgt_row_pane_t

0xd5c2,	// (0x0003b11d) list_recal_day_event_pane_g1

0xede3,	// (0x0003c93e) list_recal_day_event_pane_t1

0x9bf4,	// (0x0003774f) bg_button_pane_cp045

0x9354,	// (0x00036eaf) cntbar_detail_btn_pane_t1

0xc4ab,	// (0x0003a006) main_callh_pane_ParamLimits

0xc4ab,	// (0x0003a006) main_callh_pane

0x9bf4,	// (0x0003774f) main_coverflow0_pane

0x9bf4,	// (0x0003774f) main_wgtman_pane

0x80f8,	// (0x00035c53) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80f8,	// (0x00035c53) main_fs_bigclock_unlock_btn_pane

0x8b19,	// (0x00036674) bg_button_pane_cp16

0x8b29,	// (0x00036684) cell_tport_appsw_pane_g3

0x9362,	// (0x00036ebd) cf0_flow_pane_ParamLimits

0x9362,	// (0x00036ebd) cf0_flow_pane

0xedf2,	// (0x0003c94d) listscroll_cf0_pane

0xedfd,	// (0x0003c958) main_cf0_pane_g1

0x9377,	// (0x00036ed2) main_cf0_pane_t1_ParamLimits

0x9377,	// (0x00036ed2) main_cf0_pane_t1

0x938e,	// (0x00036ee9) main_cf0_pane_t2_ParamLimits

0x938e,	// (0x00036ee9) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003da12) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003da12) main_cf0_pane_t

0xee0f,	// (0x0003c96a) scroll_pane_cp11

0x93a5,	// (0x00036f00) cf0_flow_pane_g1

0x93ad,	// (0x00036f08) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003da17) cf0_flow_pane_g

0x93b5,	// (0x00036f10) cf0_flow_pane_t1

0x9bf4,	// (0x0003774f) main_call6_pane

0x9bf4,	// (0x0003774f) main_calllock_pane

0x93c3,	// (0x00036f1e) call6_btn_grp_pane_ParamLimits

0x93c3,	// (0x00036f1e) call6_btn_grp_pane

0x93dd,	// (0x00036f38) call6_pane_g1_ParamLimits

0x93dd,	// (0x00036f38) call6_pane_g1

0x93f2,	// (0x00036f4d) popup_call6_1st_window_ParamLimits

0x93f2,	// (0x00036f4d) popup_call6_1st_window

0x9403,	// (0x00036f5e) popup_call6_2nd_window_ParamLimits

0x9403,	// (0x00036f5e) popup_call6_2nd_window

0x9414,	// (0x00036f6f) cell_call6_btn_pane_ParamLimits

0x9414,	// (0x00036f6f) cell_call6_btn_pane

0xb02d,	// (0x00038b88) bg_popup_call2_in_pane_cp03

0xee1a,	// (0x0003c975) popup_call6_1st_window_g1

0xee22,	// (0x0003c97d) popup_call6_1st_window_g2

0xee2a,	// (0x0003c985) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003da1c) popup_call6_1st_window_g

0xee32,	// (0x0003c98d) popup_call6_1st_window_t1

0xee41,	// (0x0003c99c) popup_call6_1st_window_t2

0xee51,	// (0x0003c9ac) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003da23) popup_call6_1st_window_t

0xb02d,	// (0x00038b88) bg_popup_call2_in_pane_cp04

0xee1a,	// (0x0003c975) popup_call6_2nd_window_g1

0xee22,	// (0x0003c97d) popup_call6_2nd_window_g2

0xee2a,	// (0x0003c985) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003da1c) popup_call6_2nd_window_g

0xee32,	// (0x0003c98d) popup_call6_2nd_window_t1

0x9bf4,	// (0x0003774f) bg_button_pane_cp15

0xee61,	// (0x0003c9bc) cell_call6_btn_pane_g1

0xee6a,	// (0x0003c9c5) cell_call6_btn_pane_t1

0x9428,	// (0x00036f83) listscroll_wgtman_pane_ParamLimits

0x9428,	// (0x00036f83) listscroll_wgtman_pane

0x9449,	// (0x00036fa4) wgtman_btn_pane_ParamLimits

0x9449,	// (0x00036fa4) wgtman_btn_pane

0xadec,	// (0x00038947) aid_scroll_copy1

0xee79,	// (0x0003c9d4) list_wgtman_pane

0x948c,	// (0x00036fe7) wgtman_btn_pane_g1_ParamLimits

0x948c,	// (0x00036fe7) wgtman_btn_pane_g1

0x94b8,	// (0x00037013) wgtman_btn_pane_t1_ParamLimits

0x94b8,	// (0x00037013) wgtman_btn_pane_t1

0xee83,	// (0x0003c9de) wgtman_btn_pane_t2_ParamLimits

0xee83,	// (0x0003c9de) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003da2a) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003da2a) wgtman_btn_pane_t

0x94f5,	// (0x00037050) listrow_wgtman_pane_ParamLimits

0x94f5,	// (0x00037050) listrow_wgtman_pane

0x9507,	// (0x00037062) listrow_wgtman_pane_g1

0x9514,	// (0x0003706f) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003da2f) listrow_wgtman_pane_g

0x9532,	// (0x0003708d) listrow_wgtman_pane_t1

0x954a,	// (0x000370a5) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003da34) listrow_wgtman_pane_t

0x9570,	// (0x000370cb) wait_bar_pane_cp09

0xee9a,	// (0x0003c9f5) main_calllock_btn_pane

0xeea4,	// (0x0003c9ff) main_calllock_pane_g1

0x9bf4,	// (0x0003774f) bg_button_pane_cp17

0xeeb0,	// (0x0003ca0b) main_calllock_btn_pane_g1

0xeeb9,	// (0x0003ca14) main_calllock_btn_pane_t1

0x9bf4,	// (0x0003774f) main_dialer3_pane

0x9bf4,	// (0x0003774f) main_fmrd2_pane

0xc8b3,	// (0x0003a40e) main_fs_bigclock_unlock_btn_pane_g1

0xeed0,	// (0x0003ca2b) main_fs_bigclock_unlock_btn_pane_t1

0x9582,	// (0x000370dd) area_fmrd2_info_pane_ParamLimits

0x9582,	// (0x000370dd) area_fmrd2_info_pane

0x9593,	// (0x000370ee) area_fmrd2_visual_pane_ParamLimits

0x9593,	// (0x000370ee) area_fmrd2_visual_pane

0x95a1,	// (0x000370fc) fmrd2_indi_pane_ParamLimits

0x95a1,	// (0x000370fc) fmrd2_indi_pane

0x95ae,	// (0x00037109) area_fmrd2_visual_pane_g1

0x95b6,	// (0x00037111) area_fmrd2_visual_pane_t1

0x95c6,	// (0x00037121) area_fmrd2_visual_pane_t2

0x95d6,	// (0x00037131) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003da3e) area_fmrd2_visual_pane_t

0x95e6,	// (0x00037141) area_fmrd2_info_pane_g1

0x95ee,	// (0x00037149) area_fmrd2_info_pane_t1

0x95fe,	// (0x00037159) area_fmrd2_info_pane_t2

0x960e,	// (0x00037169) area_fmrd2_info_pane_t3

0x961e,	// (0x00037179) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003da45) area_fmrd2_info_pane_t

0x962c,	// (0x00037187) fmrd2_indi_pane_t1

0x963c,	// (0x00037197) fmrd2_indi_pane_t2

0x964c,	// (0x000371a7) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003da4e) fmrd2_indi_pane_t

0xe210,	// (0x0003bd6b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe210,	// (0x0003bd6b) list_single_fs_bigclock_indicator_pane_g5

0xe2b7,	// (0x0003be12) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2b7,	// (0x0003be12) list_single_fs_bigclock_indicator_pane_t5

0x8d03,	// (0x0003685e) aid_cell_bcale_month_pane_ParamLimits

0x8d03,	// (0x0003685e) aid_cell_bcale_month_pane

0x8d21,	// (0x0003687c) bcale_month_pane_ParamLimits

0x8d21,	// (0x0003687c) bcale_month_pane

0x8d45,	// (0x000368a0) bcale_preview_pane_ParamLimits

0x8d45,	// (0x000368a0) bcale_preview_pane

0xec7e,	// (0x0003c7d9) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0003c7f8) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0003c7f8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003d9d0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003d9d0) list_single_fs_bigclock_pane_t

0xeec8,	// (0x0003ca23) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003da39) main_fs_bigclock_unlock_btn_pane_g

0x965c,	// (0x000371b7) aid_dia3_key_size_ParamLimits

0x965c,	// (0x000371b7) aid_dia3_key_size

0x966b,	// (0x000371c6) aid_dia3_listrow_size_ParamLimits

0x966b,	// (0x000371c6) aid_dia3_listrow_size

0x9680,	// (0x000371db) dia3_keypad_fun_pane_ParamLimits

0x9680,	// (0x000371db) dia3_keypad_fun_pane

0x969c,	// (0x000371f7) dia3_keypad_num_pane_ParamLimits

0x969c,	// (0x000371f7) dia3_keypad_num_pane

0x96b7,	// (0x00037212) dia3_listscroll_pane_ParamLimits

0x96b7,	// (0x00037212) dia3_listscroll_pane

0x96ca,	// (0x00037225) dia3_numentry_pane_ParamLimits

0x96ca,	// (0x00037225) dia3_numentry_pane

0xeede,	// (0x0003ca39) dia3_list_pane

0xeee9,	// (0x0003ca44) scroll_pane_cp12

0x9bf4,	// (0x0003774f) bg_dia3_numentry_pane

0x96de,	// (0x00037239) dia3_numentry_pane_t1

0x96ed,	// (0x00037248) cell_dia3_key_num_pane

0x96f5,	// (0x00037250) cell_dia3_key0_fun_pane_ParamLimits

0x96f5,	// (0x00037250) cell_dia3_key0_fun_pane

0x9709,	// (0x00037264) cell_dia3_key1_fun_pane_ParamLimits

0x9709,	// (0x00037264) cell_dia3_key1_fun_pane

0x9721,	// (0x0003727c) dia3_listrow_pane

0xdf0e,	// (0x0003ba69) bg_dia3_numentry_pane_g1

0x9bf4,	// (0x0003774f) bg_button_pane_cp21

0xeef4,	// (0x0003ca4f) cell_dia3_key_num_pane_t1

0xef02,	// (0x0003ca5d) cell_dia3_key_num_pane_t2

0xef11,	// (0x0003ca6c) cell_dia3_key_num_pane_t3

0xef20,	// (0x0003ca7b) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003da55) cell_dia3_key_num_pane_t

0x9bf4,	// (0x0003774f) bg_button_pane_cp19

0x9733,	// (0x0003728e) cell_dia3_key0_fun_pane_g1

0x9bf4,	// (0x0003774f) bg_button_pane_cp20

0x973b,	// (0x00037296) cell_dia3_key1_fun_pane_g1

0x9743,	// (0x0003729e) area_left_week_number_pane

0x974f,	// (0x000372aa) area_top_day_name_pane

0x9762,	// (0x000372bd) frame_month_view_pane

0xef2f,	// (0x0003ca8a) grid_month_view_pane

0x9775,	// (0x000372d0) cell_top_day_name_pane_ParamLimits

0x9775,	// (0x000372d0) cell_top_day_name_pane

0x97a2,	// (0x000372fd) cell_area_left_week_number_pane_ParamLimits

0x97a2,	// (0x000372fd) cell_area_left_week_number_pane

0x97b6,	// (0x00037311) cell_month_view_pane_ParamLimits

0x97b6,	// (0x00037311) cell_month_view_pane

0xef3d,	// (0x0003ca98) frm_month_g1

0x97e3,	// (0x0003733e) frm_month_g2

0x97f6,	// (0x00037351) frm_month_g3

0x9809,	// (0x00037364) frm_month_g4

0x981c,	// (0x00037377) frm_month_g5

0x982f,	// (0x0003738a) frm_month_g6

0x9842,	// (0x0003739d) frm_month_g7

0xef4a,	// (0x0003caa5) frm_month_g8

0x9855,	// (0x000373b0) frm_month_g9

0x9865,	// (0x000373c0) frm_month_g10

0x9875,	// (0x000373d0) frm_month_g11

0x9885,	// (0x000373e0) frm_month_g12

0x9897,	// (0x000373f2) frm_month_g13

0x98a9,	// (0x00037404) frm_month_g14

0x98bd,	// (0x00037418) frm_month_g15

0x98d1,	// (0x0003742c) frm_month_g16

0x000f,

0xff03,	// (0x0003da5e) frm_month_g

0xef57,	// (0x0003cab2) cell_top_day_name_pane_t1

0x98e5,	// (0x00037440) cell_area_left_week_number_pane_g1

0x98f1,	// (0x0003744c) cell_area_left_week_number_pane_t1

0xcb2b,	// (0x0003a686) cell_month_view_pane_g1

0x9904,	// (0x0003745f) cell_month_view_pane_t1

0x9bf4,	// (0x0003774f) main_fps_pane

0xe495,	// (0x0003bff0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe495,	// (0x0003bff0) cmail_ddmenu_btn02_pane_cp1

0xe4b1,	// (0x0003c00c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4b1,	// (0x0003c00c) cmail_ddmenu_btn02_pane_cp2

0x9005,	// (0x00036b60) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9005,	// (0x00036b60) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003d983) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003d983) cmail_ddmenu_btn02_pane_g

0x9023,	// (0x00036b7e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9023,	// (0x00036b7e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003d988) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003d988) cmail_ddmenu_btn02_pane_t

0x9917,	// (0x00037472) fps_text_pane_ParamLimits

0x9917,	// (0x00037472) fps_text_pane

0x992e,	// (0x00037489) main_fps_pane_g1_ParamLimits

0x992e,	// (0x00037489) main_fps_pane_g1

0x9948,	// (0x000374a3) wait_bar_pane_cp010_ParamLimits

0x9948,	// (0x000374a3) wait_bar_pane_cp010

0x9959,	// (0x000374b4) fps_text_pane_t1_ParamLimits

0x9959,	// (0x000374b4) fps_text_pane_t1

0xe1d5,	// (0x0003bd30) cam4_image_uncrop_pane_g1

0xe1de,	// (0x0003bd39) cam4_image_uncrop_pane_g2

0x661c,	// (0x00034177) cam4_image_uncrop_pane_g3

0x6625,	// (0x00034180) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003d449) cam4_image_uncrop_pane_g

0x9721,	// (0x0003727c) dia3_listrow_pane_ParamLimits

0x9bf4,	// (0x0003774f) main_phob2_pane

0x8aea,	// (0x00036645) cell_tport_appsw_pane_cp02_ParamLimits

0x8aea,	// (0x00036645) cell_tport_appsw_pane_cp02

0x8afe,	// (0x00036659) cell_tport_appsw_pane_cp03_ParamLimits

0x8afe,	// (0x00036659) cell_tport_appsw_pane_cp03

0x9bf4,	// (0x0003774f) phob2_contact_card_pane

0x9bf4,	// (0x0003774f) phob2_listscroll_pane

0xef6a,	// (0x0003cac5) phob2_list_pane

0xef72,	// (0x0003cacd) scroll_pane_cp034

0x9971,	// (0x000374cc) phob2_cc_data_pane_ParamLimits

0x9971,	// (0x000374cc) phob2_cc_data_pane

0x9990,	// (0x000374eb) phob2_cc_listscroll_pane_ParamLimits

0x9990,	// (0x000374eb) phob2_cc_listscroll_pane

0x99ae,	// (0x00037509) list_double_large_graphic_phob2_pane_ParamLimits

0x99ae,	// (0x00037509) list_double_large_graphic_phob2_pane

0x99c0,	// (0x0003751b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99c0,	// (0x0003751b) list_double_large_graphic_phob2_pane_g1

0xef7a,	// (0x0003cad5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef7a,	// (0x0003cad5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003da7f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003da7f) list_double_large_graphic_phob2_pane_g

0x99d6,	// (0x00037531) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99d6,	// (0x00037531) list_double_large_graphic_phob2_pane_t1

0x99eb,	// (0x00037546) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99eb,	// (0x00037546) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003da84) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003da84) list_double_large_graphic_phob2_pane_t

0x9bf4,	// (0x0003774f) list_highlight_pane_cp024

0x99fd,	// (0x00037558) phob2_cc_button_pane

0x9a05,	// (0x00037560) phob2_cc_data_pane_g1_ParamLimits

0x9a05,	// (0x00037560) phob2_cc_data_pane_g1

0x9a1a,	// (0x00037575) phob2_cc_data_pane_g2_ParamLimits

0x9a1a,	// (0x00037575) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003da89) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003da89) phob2_cc_data_pane_g

0x9a2a,	// (0x00037585) phob2_cc_data_pane_t1_ParamLimits

0x9a2a,	// (0x00037585) phob2_cc_data_pane_t1

0x9a42,	// (0x0003759d) phob2_cc_data_pane_t2_ParamLimits

0x9a42,	// (0x0003759d) phob2_cc_data_pane_t2

0x9a5a,	// (0x000375b5) phob2_cc_data_pane_t3_ParamLimits

0x9a5a,	// (0x000375b5) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003da8e) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003da8e) phob2_cc_data_pane_t

0xef86,	// (0x0003cae1) phob2_cc_list_pane_ParamLimits

0xef86,	// (0x0003cae1) phob2_cc_list_pane

0xd6a2,	// (0x0003b1fd) scroll_pane_cp035_ParamLimits

0xd6a2,	// (0x0003b1fd) scroll_pane_cp035

0xa6b4,	// (0x0003820f) bg_button_pane_cp033

0xef92,	// (0x0003caed) phob2_cc_button_pane_g1

0xef9e,	// (0x0003caf9) phob2_cc_button_pane_t1

0xefb3,	// (0x0003cb0e) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003da95) phob2_cc_button_pane_t

0x9a72,	// (0x000375cd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a72,	// (0x000375cd) list_double_large_graphic_phob2_cc_pane

0x9a84,	// (0x000375df) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a84,	// (0x000375df) list_double_large_graphic_phob2_cc_pane_g1

0x9a90,	// (0x000375eb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a90,	// (0x000375eb) list_double_large_graphic_phob2_cc_pane_g2

0x9a9c,	// (0x000375f7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a9c,	// (0x000375f7) list_double_large_graphic_phob2_cc_pane_g3

0x9aa8,	// (0x00037603) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9aa8,	// (0x00037603) list_double_large_graphic_phob2_cc_pane_g4

0x9ab4,	// (0x0003760f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ab4,	// (0x0003760f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003da9a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003da9a) list_double_large_graphic_phob2_cc_pane_g

0x9ac0,	// (0x0003761b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ac0,	// (0x0003761b) list_double_large_graphic_phob2_cc_pane_t1

0x9ae9,	// (0x00037644) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ae9,	// (0x00037644) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003daa5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003daa5) list_double_large_graphic_phob2_cc_pane_t

0xefc5,	// (0x0003cb20) list_highlight_pane_cp025_ParamLimits

0xefc5,	// (0x0003cb20) list_highlight_pane_cp025

0xa6b4,	// (0x0003820f) bg_button_pane_cp033_ParamLimits

0xef92,	// (0x0003caed) phob2_cc_button_pane_g1_ParamLimits

0xef9e,	// (0x0003caf9) phob2_cc_button_pane_t1_ParamLimits

0xefb3,	// (0x0003cb0e) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003da95) phob2_cc_button_pane_t_ParamLimits

0x1a17,	// (0x0002f572) popup_wgtman_window

0xd46e,	// (0x0003afc9) scroll_pane_cp038

0x946e,	// (0x00036fc9) wgtman_btn_pane_cp_01_ParamLimits

0x946e,	// (0x00036fc9) wgtman_btn_pane_cp_01

0xefd3,	// (0x0003cb2e) wgtman_content_pane

0xefdc,	// (0x0003cb37) wgtman_heading_pane

0x9bf4,	// (0x0003774f) bg_heading_pane_cp02

0xefe5,	// (0x0003cb40) wgtman_heading_pane_g1

0xefed,	// (0x0003cb48) wgtman_heading_pane_t1

0xeffb,	// (0x0003cb56) scroll_pane_cp036

0xf003,	// (0x0003cb5e) wgtman_list_pane

0xf00b,	// (0x0003cb66) wgtman_list_pane_t1_ParamLimits

0xf00b,	// (0x0003cb66) wgtman_list_pane_t1

0x6608,	// (0x00034163) cam4_grid_pane

0x6f85,	// (0x00034ae0) bg_button_pane_cp015_ParamLimits

0x6f97,	// (0x00034af2) bg_button_pane_cp016_ParamLimits

0x6faa,	// (0x00034b05) bg_button_pane_cp017_ParamLimits

0x7002,	// (0x00034b5d) popup_vitu2_query_window_g3_ParamLimits

0x7002,	// (0x00034b5d) popup_vitu2_query_window_g3

0x70bf,	// (0x00034c1a) popup_vitu2_query_window_t6_ParamLimits

0x70bf,	// (0x00034c1a) popup_vitu2_query_window_t6

0x70ea,	// (0x00034c45) popup_vitu2_query_window_t7_ParamLimits

0x70ea,	// (0x00034c45) popup_vitu2_query_window_t7

0xe1d5,	// (0x0003bd30) cam4_grid_pane_g1

0xe1de,	// (0x0003bd39) cam4_grid_pane_g2

0xf025,	// (0x0003cb80) cam4_grid_pane_g3

0xf02e,	// (0x0003cb89) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003daaa) cam4_grid_pane_g

0x2804,	// (0x0003035f) aid_placing_vt_slider_lsc_ParamLimits

0x2b0f,	// (0x0003066a) vidtel_button_pane_ParamLimits

0x2b0f,	// (0x0003066a) vidtel_button_pane

0xf039,	// (0x0003cb94) bg_button_pane_cp034

0x9b12,	// (0x0003766d) vidtel_button_pane_g1

0xf043,	// (0x0003cb9e) vidtel_button_pane_t1

0xd5a0,	// (0x0003b0fb) aid_size_vtel_slider_touch

0xd6a2,	// (0x0003b1fd) scroll_pane_cp039

0xdf4c,	// (0x0003baa7) ncim_query_button_pane_cp01_ParamLimits

0xdf6b,	// (0x0003bac6) ncimui_query_pane_g1_ParamLimits

0xa6b4,	// (0x0003820f) input_focus_pane_cp012_ParamLimits

0xdf90,	// (0x0003baeb) ncim_query_entry_pane_t1_ParamLimits

0xd6a2,	// (0x0003b1fd) scroll_pane_cp039_ParamLimits

0xaed0,	// (0x00038a2b) navi_pane_bcale_mc_g1

0xaed8,	// (0x00038a33) navi_pane_bcale_mc_t1

0xe4fa,	// (0x0003c055) main_sp_fs_email_pane_g1

0xe506,	// (0x0003c061) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003d840) main_sp_fs_email_pane_g

0xe91d,	// (0x0003c478) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe91d,	// (0x0003c478) list_single_cale_mrui_row_pane_g3

0x904b,	// (0x00036ba6) list_single_recal_day_pane_g5_event_pane

0xeb05,	// (0x0003c660) list_single_recal_day_pane_g7

0xf051,	// (0x0003cbac) list_recal_day_event_pane_cp01

0xf05a,	// (0x0003cbb5) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0003cbbd) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0003cbc5) list_recal_vselct_pane_cp01

0xd5c2,	// (0x0003b11d) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0003cbcf) list_recal_day_event_pane_cp01_t1

0xeb0d,	// (0x0003c668) list_single_recal_day_pane_t1_ParamLimits

0xeb1f,	// (0x0003c67a) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003d998) list_single_recal_day_pane_t_ParamLimits

0xa26c,	// (0x00037dc7) bg_notes_pane_ParamLimits

0xa30f,	// (0x00037e6a) list_notes_pane_ParamLimits

0x1c89,	// (0x0002f7e4) scroll_pane_cp06_ParamLimits

0xa331,	// (0x00037e8c) main_notes_pane_ParamLimits

0x9bf4,	// (0x0003774f) main_welc_pane

0x9b1a,	// (0x00037675) main_welc_body_pane_ParamLimits

0x9b1a,	// (0x00037675) main_welc_body_pane

0x9b38,	// (0x00037693) main_welc_opti_pane_ParamLimits

0x9b38,	// (0x00037693) main_welc_opti_pane

0x9b7d,	// (0x000376d8) main_welc_pane_t1_ParamLimits

0x9b7d,	// (0x000376d8) main_welc_pane_t1

0x9b9b,	// (0x000376f6) main_welc_body_row_pane_ParamLimits

0x9b9b,	// (0x000376f6) main_welc_body_row_pane

0xd618,	// (0x0003b173) main_welc_opti_row_pane_ParamLimits

0xd618,	// (0x0003b173) main_welc_opti_row_pane

0xf082,	// (0x0003cbdd) main_welc_opti_row_pane_g1

0xf08a,	// (0x0003cbe5) main_welc_opti_row_pane_t1

0xf09a,	// (0x0003cbf5) main_welc_body_row_pane_t1

0xed5e,	// (0x0003c8b9) popup_notif_wgt_heading_pane

0xed78,	// (0x0003c8d3) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0003c8e0) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0003c8ec) list_notif_wgt_row_pane_g2_ParamLimits

0xed9d,	// (0x0003c8f8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003d9ff) list_notif_wgt_row_pane_g_ParamLimits

0xedaa,	// (0x0003c905) list_notif_wgt_row_pane_t1_ParamLimits

0xedbf,	// (0x0003c91a) list_notif_wgt_row_pane_t2_ParamLimits

0xedd1,	// (0x0003c92c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003da06) list_notif_wgt_row_pane_t_ParamLimits

0x9507,	// (0x00037062) listrow_wgtman_pane_g1_ParamLimits

0x9514,	// (0x0003706f) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003da2f) listrow_wgtman_pane_g_ParamLimits

0x9532,	// (0x0003708d) listrow_wgtman_pane_t1_ParamLimits

0x954a,	// (0x000370a5) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003da34) listrow_wgtman_pane_t_ParamLimits

0x9570,	// (0x000370cb) wait_bar_pane_cp09_ParamLimits

0x9bf4,	// (0x0003774f) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0003cc04) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0003cc0c) popup_notif_wgt_heading_pane_t1

0x9bf4,	// (0x0003774f) main_vids_pane

0x9bf4,	// (0x0003774f) vids_listscroll_pane

0x9baf,	// (0x0003770a) scroll_pane_cp040

0x9bf4,	// (0x0003774f) vids_list_pane

0x9bba,	// (0x00037715) vids_list_double_pane_ParamLimits

0x9bba,	// (0x00037715) vids_list_double_pane

0x9bcb,	// (0x00037726) vids_list_double_pane_g1

0x9bd4,	// (0x0003772f) vids_list_double_pane_t1

0x9be4,	// (0x0003773f) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003dab8) vids_list_double_pane_t

0x1a09,	// (0x0002f564) main_ncimui_pane_ParamLimits

0x7c80,	// (0x000357db) main_ncimui_pane_g1_ParamLimits

0x7c8c,	// (0x000357e7) main_ncimui_pane_g2_ParamLimits

0x7c8c,	// (0x000357e7) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003d745) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003d745) main_ncimui_pane_g

0x9b53,	// (0x000376ae) main_welc_pane_g1_ParamLimits

0x9b53,	// (0x000376ae) main_welc_pane_g1

0x9b68,	// (0x000376c3) main_welc_pane_g2_ParamLimits

0x9b68,	// (0x000376c3) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003dab3) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003dab3) main_welc_pane_g

0xa26c,	// (0x00037dc7) listscroll_mce_pane_ParamLimits

0xb025,	// (0x00038b80) wait_bar_pane_cp10

0xc49f,	// (0x00039ffa) main_cale_day_pane_ParamLimits

0xc49f,	// (0x00039ffa) main_cale_week_pane_ParamLimits

0xa26c,	// (0x00037dc7) main_messa_pane_ParamLimits

0x5bc1,	// (0x0003371c) main_clock2_btn_pane_ParamLimits

0x5bc1,	// (0x0003371c) main_clock2_btn_pane

0xccdf,	// (0x0003a83a) main_clock2_btn_pane_cp01_ParamLimits

0xccdf,	// (0x0003a83a) main_clock2_btn_pane_cp01

0xe8a9,	// (0x0003c404) list_cale_mrui_pane_ParamLimits

0xee07,	// (0x0003c962) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003da0d) main_cf0_pane_g

0x9743,	// (0x0003729e) area_left_week_number_pane_ParamLimits

0x974f,	// (0x000372aa) area_top_day_name_pane_ParamLimits

0x9762,	// (0x000372bd) frame_month_view_pane_ParamLimits

0xef2f,	// (0x0003ca8a) grid_month_view_pane_ParamLimits

0xef3d,	// (0x0003ca98) frm_month_g1_ParamLimits

0x97e3,	// (0x0003733e) frm_month_g2_ParamLimits

0x97f6,	// (0x00037351) frm_month_g3_ParamLimits

0x9809,	// (0x00037364) frm_month_g4_ParamLimits

0x981c,	// (0x00037377) frm_month_g5_ParamLimits

0x982f,	// (0x0003738a) frm_month_g6_ParamLimits

0x9842,	// (0x0003739d) frm_month_g7_ParamLimits

0xef4a,	// (0x0003caa5) frm_month_g8_ParamLimits

0x9855,	// (0x000373b0) frm_month_g9_ParamLimits

0x9865,	// (0x000373c0) frm_month_g10_ParamLimits

0x9875,	// (0x000373d0) frm_month_g11_ParamLimits

0x9885,	// (0x000373e0) frm_month_g12_ParamLimits

0x9897,	// (0x000373f2) frm_month_g13_ParamLimits

0x98a9,	// (0x00037404) frm_month_g14_ParamLimits

0x98bd,	// (0x00037418) frm_month_g15_ParamLimits

0x98d1,	// (0x0003742c) frm_month_g16_ParamLimits

0xff03,	// (0x0003da5e) frm_month_g_ParamLimits

0xef57,	// (0x0003cab2) cell_top_day_name_pane_t1_ParamLimits

0x98e5,	// (0x00037440) cell_area_left_week_number_pane_g1_ParamLimits

0x98f1,	// (0x0003744c) cell_area_left_week_number_pane_t1_ParamLimits

0xcb2b,	// (0x0003a686) cell_month_view_pane_g1_ParamLimits

0x9904,	// (0x0003745f) cell_month_view_pane_t1_ParamLimits

0xa264,	// (0x00037dbf) main_clock2_btn_pane_g1

0xf0bf,	// (0x0003cc1a) main_clock2_btn_pane_t1

0xa6b4,	// (0x0003820f) listscroll_cmail_pane_ParamLimits

0xe4fa,	// (0x0003c055) main_sp_fs_email_pane_g1_ParamLimits

0xe506,	// (0x0003c061) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003d840) main_sp_fs_email_pane_g_ParamLimits

0xea6d,	// (0x0003c5c8) list_recal_day_pane_ParamLimits

0xea7e,	// (0x0003c5d9) mian_recal_day_pane_t1

0x876c,	// (0x000362c7) list_single_dyc_row_text_pane_t4_ParamLimits

0x876c,	// (0x000362c7) list_single_dyc_row_text_pane_t4

0x87b5,	// (0x00036310) list_single_dyc_row_text_pane_t5_ParamLimits

0x87b5,	// (0x00036310) list_single_dyc_row_text_pane_t5

0xe5a8,	// (0x0003c103) list_single_dyc_row_text_pane_t6_ParamLimits

0xe5a8,	// (0x0003c103) list_single_dyc_row_text_pane_t6

0x37e9,	// (0x00031344) aid_mgn_list_cale_time_pane

0x1a09,	// (0x0002f564) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
