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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008e47a };

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
0x087d,	// (0x0008ecf7) Screen

0x0889,	// (0x0008ed03) application_window

0x08dd,	// (0x0008ed57) area_bottom_pane_ParamLimits

0x08dd,	// (0x0008ed57) area_bottom_pane

0x0916,	// (0x0008ed90) area_top_pane_ParamLimits

0x0916,	// (0x0008ed90) area_top_pane

0x9a0d,	// (0x00097e87) call_video_uplink_pane_ParamLimits

0x9a0d,	// (0x00097e87) call_video_uplink_pane

0x09a4,	// (0x0008ee1e) main_pane_ParamLimits

0x09a4,	// (0x0008ee1e) main_pane

0xc97c,	// (0x0009adf6) context_pane

0x3feb,	// (0x00092465) navi_pane

0x401f,	// (0x00092499) popup_cale_events_window_ParamLimits

0x401f,	// (0x00092499) popup_cale_events_window

0xc98f,	// (0x0009ae09) popup_mup_playback_window

0x4037,	// (0x000924b1) signal_pane

0xa1b5,	// (0x0009862f) main_browser_pane

0xa3d2,	// (0x0009884c) main_burst_pane

0x3d03,	// (0x0009217d) main_calc_pane

0xc962,	// (0x0009addc) main_cale_day_pane

0x0fc3,	// (0x0008f43d) main_cale_month_pane

0xc962,	// (0x0009addc) main_cale_week_pane

0xa3d2,	// (0x0009884c) main_call_pane

0x9e73,	// (0x000982ed) main_call_poc_pane

0xa3d2,	// (0x0009884c) main_camera_pane

0xa3d2,	// (0x0009884c) main_chi_dic_pane

0xb2eb,	// (0x00099765) main_clock_pane

0x9e73,	// (0x000982ed) main_fmradio_pane

0xa3d2,	// (0x0009884c) main_graph_messa_pane

0x9e73,	// (0x000982ed) main_help_pane

0xa1b5,	// (0x0009862f) main_im_pane

0xa0ce,	// (0x00098548) main_image_pane_ParamLimits

0xa0ce,	// (0x00098548) main_image_pane

0x9e73,	// (0x000982ed) main_location2_pane

0xa3d2,	// (0x0009884c) main_location_pane

0xa0ce,	// (0x00098548) main_messa_pane

0x9e73,	// (0x000982ed) main_mp2_pane

0xa3d2,	// (0x0009884c) main_mp_pane

0x9e73,	// (0x000982ed) main_msg_pane

0x9e73,	// (0x000982ed) main_mup_eq_pane

0x9e73,	// (0x000982ed) main_mup_pane

0xa1b5,	// (0x0009862f) main_notes_pane

0x9e73,	// (0x000982ed) main_pec_pane

0x9e73,	// (0x000982ed) main_phob_pane

0x9e73,	// (0x000982ed) main_pinb_pane

0x9e73,	// (0x000982ed) main_postcard_pane

0x9e73,	// (0x000982ed) main_qdial_pane

0xa3d2,	// (0x0009884c) main_skin_pane

0x9e73,	// (0x000982ed) main_smil2_pane

0xa3d2,	// (0x0009884c) main_smil_pane

0xa3d2,	// (0x0009884c) main_video_pane

0xa3d2,	// (0x0009884c) main_video_tele_pane

0xa0ce,	// (0x00098548) main_viewer_pane_ParamLimits

0xa0ce,	// (0x00098548) main_viewer_pane

0xa3d2,	// (0x0009884c) main_vorec_pane

0x3d59,	// (0x000921d3) popup_blid_sat_info_window_ParamLimits

0x3d59,	// (0x000921d3) popup_blid_sat_info_window

0x3dbd,	// (0x00092237) popup_dyc_status_message_window_ParamLimits

0x3dbd,	// (0x00092237) popup_dyc_status_message_window

0x3dd7,	// (0x00092251) popup_grid_large_graphic_window_ParamLimits

0x3dd7,	// (0x00092251) popup_grid_large_graphic_window

0x3e99,	// (0x00092313) popup_loc_request_window_ParamLimits

0x3e99,	// (0x00092313) popup_loc_request_window

0x3fbf,	// (0x00092439) popup_wml_address_window_ParamLimits

0x3fbf,	// (0x00092439) popup_wml_address_window

0x3b41,	// (0x00091fbb) call_muted_g1

0x37d2,	// (0x00091c4c) popup_call_audio_conf_window_ParamLimits

0x37d2,	// (0x00091c4c) popup_call_audio_conf_window

0x3b51,	// (0x00091fcb) popup_call_audio_first_window_ParamLimits

0x3b51,	// (0x00091fcb) popup_call_audio_first_window

0x3bc7,	// (0x00092041) popup_call_audio_in_window_ParamLimits

0x3bc7,	// (0x00092041) popup_call_audio_in_window

0x3c03,	// (0x0009207d) popup_call_audio_out_window_ParamLimits

0x3c03,	// (0x0009207d) popup_call_audio_out_window

0x3c3d,	// (0x000920b7) popup_call_audio_second_window_ParamLimits

0x3c3d,	// (0x000920b7) popup_call_audio_second_window

0x3c93,	// (0x0009210d) popup_call_audio_wait_window_ParamLimits

0x3c93,	// (0x0009210d) popup_call_audio_wait_window

0x3cc8,	// (0x00092142) popup_number_entry_window_ParamLimits

0x3cc8,	// (0x00092142) popup_number_entry_window

0x9a2b,	// (0x00097ea5) bg_popup_call_pane_cp05_ParamLimits

0x9a2b,	// (0x00097ea5) bg_popup_call_pane_cp05

0x9a4b,	// (0x00097ec5) popup_number_entry_window_t1

0x9a5e,	// (0x00097ed8) popup_number_entry_window_t2

0x9a70,	// (0x00097eea) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0009d529) popup_number_entry_window_t

0x9ab7,	// (0x00097f31) text_title_cp2

0x9aca,	// (0x00097f44) bg_popup_call_pane_cp_ParamLimits

0x9aca,	// (0x00097f44) bg_popup_call_pane_cp

0x9ad8,	// (0x00097f52) call_thumbnail_pane

0x9ae0,	// (0x00097f5a) popup_call_audio_in_window_g1_ParamLimits

0x9ae0,	// (0x00097f5a) popup_call_audio_in_window_g1

0x9aec,	// (0x00097f66) popup_call_audio_in_window_g2_ParamLimits

0x9aec,	// (0x00097f66) popup_call_audio_in_window_g2

0x9af8,	// (0x00097f72) popup_call_audio_in_window_g3_ParamLimits

0x9af8,	// (0x00097f72) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0009d532) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0009d532) popup_call_audio_in_window_g

0x9b04,	// (0x00097f7e) popup_call_audio_in_window_t1_ParamLimits

0x9b04,	// (0x00097f7e) popup_call_audio_in_window_t1

0x9b20,	// (0x00097f9a) popup_call_audio_in_window_t2_ParamLimits

0x9b20,	// (0x00097f9a) popup_call_audio_in_window_t2

0x9b3c,	// (0x00097fb6) popup_call_audio_in_window_t3_ParamLimits

0x9b3c,	// (0x00097fb6) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0009d539) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0009d539) popup_call_audio_in_window_t

0x9aca,	// (0x00097f44) bg_popup_call_pane_cp01_ParamLimits

0x9aca,	// (0x00097f44) bg_popup_call_pane_cp01

0x9ad8,	// (0x00097f52) call_thumbnail_pane_cp02

0x9b4f,	// (0x00097fc9) call_type_pane_cp022

0x9b57,	// (0x00097fd1) popup_call_audio_out_window_g1_ParamLimits

0x9b57,	// (0x00097fd1) popup_call_audio_out_window_g1

0x9b69,	// (0x00097fe3) popup_call_audio_out_window_g2_ParamLimits

0x9b69,	// (0x00097fe3) popup_call_audio_out_window_g2

0x9b75,	// (0x00097fef) popup_call_audio_out_window_g3_ParamLimits

0x9b75,	// (0x00097fef) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0009d540) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0009d540) popup_call_audio_out_window_g

0x9b87,	// (0x00098001) popup_call_audio_out_window_t1_ParamLimits

0x9b87,	// (0x00098001) popup_call_audio_out_window_t1

0x9b9f,	// (0x00098019) popup_call_audio_out_window_t2_ParamLimits

0x9b9f,	// (0x00098019) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0009d547) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0009d547) popup_call_audio_out_window_t

0x9bb4,	// (0x0009802e) bg_popup_call_pane_ParamLimits

0x9bb4,	// (0x0009802e) bg_popup_call_pane

0x0b2d,	// (0x0008efa7) call_thumbnail_pane_cp_ParamLimits

0x0b2d,	// (0x0008efa7) call_thumbnail_pane_cp

0x9c38,	// (0x000980b2) call_type_pane_cp01_ParamLimits

0x9c38,	// (0x000980b2) call_type_pane_cp01

0x9c7c,	// (0x000980f6) popup_call_audio_first_window_g1_ParamLimits

0x9c7c,	// (0x000980f6) popup_call_audio_first_window_g1

0x9cc8,	// (0x00098142) popup_call_audio_first_window_g2_ParamLimits

0x9cc8,	// (0x00098142) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0009d54c) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0009d54c) popup_call_audio_first_window_g

0x9d0c,	// (0x00098186) popup_call_audio_first_window_t1_ParamLimits

0x9d0c,	// (0x00098186) popup_call_audio_first_window_t1

0x9db8,	// (0x00098232) popup_call_audio_first_window_t4_ParamLimits

0x9db8,	// (0x00098232) popup_call_audio_first_window_t4

0x9e44,	// (0x000982be) popup_call_audio_first_window_t5_ParamLimits

0x9e44,	// (0x000982be) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0009d551) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0009d551) popup_call_audio_first_window_t

0x9e73,	// (0x000982ed) bg_popup_call_pane_cp02

0x9e7d,	// (0x000982f7) call_type_pane_cp023

0x9e85,	// (0x000982ff) popup_call_audio_wait_window_g1

0x9e8d,	// (0x00098307) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009d558) popup_call_audio_wait_window_g

0x9e95,	// (0x0009830f) popup_call_audio_wait_window_t3

0x9ea3,	// (0x0009831d) bg_popup_call_pane_cp03_ParamLimits

0x9ea3,	// (0x0009831d) bg_popup_call_pane_cp03

0x9f03,	// (0x0009837d) call_thumbnail_pane_cp011_ParamLimits

0x9f03,	// (0x0009837d) call_thumbnail_pane_cp011

0x9f0f,	// (0x00098389) call_type_pane_cp034_ParamLimits

0x9f0f,	// (0x00098389) call_type_pane_cp034

0x9f4b,	// (0x000983c5) popup_call_audio_second_window_g1_ParamLimits

0x9f4b,	// (0x000983c5) popup_call_audio_second_window_g1

0x9f87,	// (0x00098401) popup_call_audio_second_window_g2_ParamLimits

0x9f87,	// (0x00098401) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0009d55d) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0009d55d) popup_call_audio_second_window_g

0x9fc3,	// (0x0009843d) popup_call_audio_second_window_t1_ParamLimits

0x9fc3,	// (0x0009843d) popup_call_audio_second_window_t1

0xa044,	// (0x000984be) popup_call_audio_second_window_t2_ParamLimits

0xa044,	// (0x000984be) popup_call_audio_second_window_t2

0xa07a,	// (0x000984f4) popup_call_audio_second_window_t3_ParamLimits

0xa07a,	// (0x000984f4) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0009d562) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0009d562) popup_call_audio_second_window_t

0x9e73,	// (0x000982ed) bg_popup_call_pane_cp04

0xa0b0,	// (0x0009852a) list_conf_pane

0xa0b8,	// (0x00098532) popup_call_audio_conf_window_t1

0xa0c6,	// (0x00098540) call_thumbnail_pane_g1

0xa0ce,	// (0x00098548) bg_pinb_pane_ParamLimits

0xa0ce,	// (0x00098548) bg_pinb_pane

0xa0dc,	// (0x00098556) find_pinb_pane

0xa0e5,	// (0x0009855f) listscroll_pinb_pane_ParamLimits

0xa0e5,	// (0x0009855f) listscroll_pinb_pane

0xa0f4,	// (0x0009856e) pinb_bg_pane_g1

0x0b51,	// (0x0008efcb) pinb_bg_pane_g2

0x0b5d,	// (0x0008efd7) pinb_bg_pane_g3

0x0b69,	// (0x0008efe3) pinb_bg_pane_g4

0x0b75,	// (0x0008efef) pinb_bg_pane_g5

0x0b81,	// (0x0008effb) pinb_bg_pane_g6

0x0b8c,	// (0x0008f006) pinb_bg_pane_g7

0x0b97,	// (0x0008f011) pinb_bg_pane_g8

0x0ba2,	// (0x0008f01c) pinb_bg_pane_g9

0x0bac,	// (0x0008f026) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0009d569) pinb_bg_pane_g

0x0bc9,	// (0x0008f043) grid_pinb_pane

0x0bd4,	// (0x0008f04e) list_pinb_pane

0x0bdf,	// (0x0008f059) scroll_pane_cp01_ParamLimits

0x0bdf,	// (0x0008f059) scroll_pane_cp01

0xa0fe,	// (0x00098578) find_pinb_pane_g1_ParamLimits

0xa0fe,	// (0x00098578) find_pinb_pane_g1

0xa116,	// (0x00098590) find_pinb_pane_t1

0xa128,	// (0x000985a2) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0009d583) find_pinb_pane_t

0xa13d,	// (0x000985b7) input_focus_pane_cp01_ParamLimits

0xa13d,	// (0x000985b7) input_focus_pane_cp01

0x0bf1,	// (0x0008f06b) cell_pinb_pane_ParamLimits

0x0bf1,	// (0x0008f06b) cell_pinb_pane

0x0c13,	// (0x0008f08d) cell_pinb_pane_g1_ParamLimits

0x0c13,	// (0x0008f08d) cell_pinb_pane_g1

0x0c27,	// (0x0008f0a1) cell_pinb_pane_g2_ParamLimits

0x0c27,	// (0x0008f0a1) cell_pinb_pane_g2

0xa149,	// (0x000985c3) cell_pinb_pane_g3_ParamLimits

0xa149,	// (0x000985c3) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0009d588) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0009d588) cell_pinb_pane_g

0x9e73,	// (0x000982ed) grid_highlight_pane_cp01

0x0c33,	// (0x0008f0ad) list_pinb_item_pane_ParamLimits

0x0c33,	// (0x0008f0ad) list_pinb_item_pane

0x9e73,	// (0x000982ed) list_highlight_pane_cp02

0x0c46,	// (0x0008f0c0) list_pinb_item_pane_g1_ParamLimits

0x0c46,	// (0x0008f0c0) list_pinb_item_pane_g1

0x0c53,	// (0x0008f0cd) list_pinb_item_pane_g2_ParamLimits

0x0c53,	// (0x0008f0cd) list_pinb_item_pane_g2

0x0c5f,	// (0x0008f0d9) list_pinb_item_pane_g3_ParamLimits

0x0c5f,	// (0x0008f0d9) list_pinb_item_pane_g3

0x0c70,	// (0x0008f0ea) list_pinb_item_pane_g4_ParamLimits

0x0c70,	// (0x0008f0ea) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0009d58f) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0009d58f) list_pinb_item_pane_g

0x0c7c,	// (0x0008f0f6) list_pinb_item_pane_t1_ParamLimits

0x0c7c,	// (0x0008f0f6) list_pinb_item_pane_t1

0x0cb3,	// (0x0008f12d) calc_display_pane

0x0cd8,	// (0x0008f152) calc_paper_pane

0x0cfb,	// (0x0008f175) grid_calc_pane

0x9e73,	// (0x000982ed) bg_list_pane_cp01

0x0d29,	// (0x0008f1a3) clock_g1

0x0d31,	// (0x0008f1ab) clock_g2

0x0001,

0xf11e,	// (0x0009d598) clock_g

0x0d39,	// (0x0008f1b3) clock_t1_ParamLimits

0x0d39,	// (0x0008f1b3) clock_t1

0x0d4e,	// (0x0008f1c8) clock_t2_ParamLimits

0x0d4e,	// (0x0008f1c8) clock_t2

0x0d60,	// (0x0008f1da) clock_t3_ParamLimits

0x0d60,	// (0x0008f1da) clock_t3

0x0d72,	// (0x0008f1ec) clock_t4_ParamLimits

0x0d72,	// (0x0008f1ec) clock_t4

0x0d84,	// (0x0008f1fe) clock_t5_ParamLimits

0x0d84,	// (0x0008f1fe) clock_t5

0x0d99,	// (0x0008f213) clock_t6_ParamLimits

0x0d99,	// (0x0008f213) clock_t6

0x0dab,	// (0x0008f225) clock_t7_ParamLimits

0x0dab,	// (0x0008f225) clock_t7

0x0dbd,	// (0x0008f237) clock_t8_ParamLimits

0x0dbd,	// (0x0008f237) clock_t8

0x0dd1,	// (0x0008f24b) clock_t9_ParamLimits

0x0dd1,	// (0x0008f24b) clock_t9

0x0008,

0xf123,	// (0x0009d59d) clock_t_ParamLimits

0xf123,	// (0x0009d59d) clock_t

0xa15d,	// (0x000985d7) popup_clock_analogue_window_cp02

0xa15d,	// (0x000985d7) popup_clock_digital_window_cp01

0xa165,	// (0x000985df) listscroll_help_pane

0x9e73,	// (0x000982ed) phob_pre_status_pane

0xa16f,	// (0x000985e9) grid_qdial_pane

0xa0ce,	// (0x00098548) listscroll_mce_pane

0xa0ce,	// (0x00098548) bg_notes_pane

0xa179,	// (0x000985f3) list_notes_pane

0x0de7,	// (0x0008f261) scroll_pane_cp06

0xa187,	// (0x00098601) bg_calc_paper_pane

0xa19b,	// (0x00098615) list_calc_pane

0xa1b5,	// (0x0009862f) bg_calc_display_pane

0x0dfb,	// (0x0008f275) calc_display_pane_t1

0x0e0d,	// (0x0008f287) calc_display_pane_t2

0xa1c1,	// (0x0009863b) calc_display_pane_t3

0x0002,

0xf136,	// (0x0009d5b0) calc_display_pane_t

0x0e1f,	// (0x0008f299) cell_calc_pane_ParamLimits

0x0e1f,	// (0x0008f299) cell_calc_pane

0xa1d3,	// (0x0009864d) bg_calc_paper_pane_g1

0xa1df,	// (0x00098659) bg_calc_paper_pane_g2

0xa1eb,	// (0x00098665) bg_calc_paper_pane_g3

0xa1f7,	// (0x00098671) bg_calc_paper_pane_g4

0xa203,	// (0x0009867d) bg_calc_paper_pane_g5

0x0e5a,	// (0x0008f2d4) bg_calc_paper_pane_g6

0x0e68,	// (0x0008f2e2) bg_calc_paper_pane_g7

0x0e76,	// (0x0008f2f0) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0009d5b7) bg_calc_paper_pane_g

0x0e89,	// (0x0008f303) calc_bg_paper_pane_g9

0x0e9c,	// (0x0008f316) list_calc_item_pane_ParamLimits

0x0e9c,	// (0x0008f316) list_calc_item_pane

0xa20f,	// (0x00098689) list_calc_item_pane_g1

0xa21c,	// (0x00098696) list_calc_item_pane_t1_ParamLimits

0xa21c,	// (0x00098696) list_calc_item_pane_t1

0x0eb4,	// (0x0008f32e) list_calc_item_pane_t2_ParamLimits

0x0eb4,	// (0x0008f32e) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0009d5c8) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0009d5c8) list_calc_item_pane_t

0xa22e,	// (0x000986a8) cell_calc_pane_g1

0xa238,	// (0x000986b2) grid_highlight_pane_cp02

0xa25a,	// (0x000986d4) bg_calc_display_pane_g1

0x0ee6,	// (0x0008f360) bg_calc_display_pane_g2

0x0ef0,	// (0x0008f36a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0009d5d2) bg_calc_display_pane_g

0x0ef9,	// (0x0008f373) cell_qdial_pane_ParamLimits

0x0ef9,	// (0x0008f373) cell_qdial_pane

0x0f0d,	// (0x0008f387) cell_qdial_pane_g1_ParamLimits

0x0f0d,	// (0x0008f387) cell_qdial_pane_g1

0x0f23,	// (0x0008f39d) cell_qdial_pane_g2_ParamLimits

0x0f23,	// (0x0008f39d) cell_qdial_pane_g2

0xa263,	// (0x000986dd) cell_qdial_pane_g3_ParamLimits

0xa263,	// (0x000986dd) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0009d5d9) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0009d5d9) cell_qdial_pane_g

0x0f4a,	// (0x0008f3c4) cell_qdial_pane_t1_ParamLimits

0x0f4a,	// (0x0008f3c4) cell_qdial_pane_t1

0x0f62,	// (0x0008f3dc) cell_qdial_pane_t2_ParamLimits

0x0f62,	// (0x0008f3dc) cell_qdial_pane_t2

0x0f75,	// (0x0008f3ef) cell_qdial_pane_t3_ParamLimits

0x0f75,	// (0x0008f3ef) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0009d5e2) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0009d5e2) cell_qdial_pane_t

0x9e73,	// (0x000982ed) grid_highlight_pane_cp04

0xa26f,	// (0x000986e9) thumbnail_qdial_pane_ParamLimits

0xa26f,	// (0x000986e9) thumbnail_qdial_pane

0xa2cb,	// (0x00098745) list_help_pane

0xa2d4,	// (0x0009874e) scroll_pane_cp02

0x0f88,	// (0x0008f402) help_list_pane_t1_ParamLimits

0x0f88,	// (0x0008f402) help_list_pane_t1

0xa2dd,	// (0x00098757) bg_notes_pane_g2

0xa2e5,	// (0x0009875f) bg_notes_pane_g3

0xa2ed,	// (0x00098767) notes_bg_pane_g1

0xa2f5,	// (0x0009876f) notes_bg_pane_g4

0xa2fd,	// (0x00098777) notes_bg_pane_g5

0xa305,	// (0x0009877f) notes_bg_pane_g6

0xa30d,	// (0x00098787) notes_bg_pane_g7

0xa315,	// (0x0009878f) notes_bg_pane_g8

0xa31d,	// (0x00098797) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0009d600) notes_bg_pane_g

0x0fac,	// (0x0008f426) list_notes_text_pane_ParamLimits

0x0fac,	// (0x0008f426) list_notes_text_pane

0xa325,	// (0x0009879f) list_notes_text_pane_g1

0xfa29,	// (0x0008dea3) list_notes_text_pane_t1

0x0fc3,	// (0x0008f43d) listscroll_cale_week_pane

0x0fed,	// (0x0008f467) bg_cale_heading_pane

0x1011,	// (0x0008f48b) bg_cale_pane_cp01

0x102e,	// (0x0008f4a8) cale_week_corner_pane

0x104d,	// (0x0008f4c7) cale_week_day_heading_pane

0x1076,	// (0x0008f4f0) cale_week_scroll_pane_g1

0x1095,	// (0x0008f50f) cale_week_scroll_pane_g2

0x10ad,	// (0x0008f527) cale_week_scroll_pane_g3

0x10c5,	// (0x0008f53f) cale_week_scroll_pane_g4

0x10dd,	// (0x0008f557) cale_week_scroll_pane_g5

0x10fd,	// (0x0008f577) cale_week_scroll_pane_g6

0x111d,	// (0x0008f597) cale_week_scroll_pane_g7

0x1141,	// (0x0008f5bb) cale_week_scroll_pane_g8

0x1165,	// (0x0008f5df) cale_week_scroll_pane_g9

0x117d,	// (0x0008f5f7) cale_week_scroll_pane_g10

0x1195,	// (0x0008f60f) cale_week_scroll_pane_g11

0x11ad,	// (0x0008f627) cale_week_scroll_pane_g12

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g13

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g14

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0009d60f) cale_week_scroll_pane_g

0x1219,	// (0x0008f693) cale_week_time_pane

0x123d,	// (0x0008f6b7) grid_cale_week_pane

0xa35a,	// (0x000987d4) scroll_pane_cp08

0x126f,	// (0x0008f6e9) cell_cale_week_pane_ParamLimits

0x126f,	// (0x0008f6e9) cell_cale_week_pane

0x130b,	// (0x0008f785) cale_week_day_heading_pane_t1

0x1335,	// (0x0008f7af) cale_week_day_heading_pane_t2

0x1364,	// (0x0008f7de) cale_week_day_heading_pane_t3

0x1393,	// (0x0008f80d) cale_week_day_heading_pane_t4

0x13c2,	// (0x0008f83c) cale_week_day_heading_pane_t5

0x13f5,	// (0x0008f86f) cale_week_day_heading_pane_t6

0x142c,	// (0x0008f8a6) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0009d630) cale_week_day_heading_pane_t

0xa377,	// (0x000987f1) bg_cale_side_pane

0x1456,	// (0x0008f8d0) cale_week_time_pane_t1

0x1470,	// (0x0008f8ea) cale_week_time_pane_t2

0x148a,	// (0x0008f904) cale_week_time_pane_t3

0x14a4,	// (0x0008f91e) cale_week_time_pane_t4

0x14be,	// (0x0008f938) cale_week_time_pane_t5

0x14d8,	// (0x0008f952) cale_week_time_pane_t6

0x14f8,	// (0x0008f972) cale_week_time_pane_t7

0x151e,	// (0x0008f998) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0009d63f) cale_week_time_pane_t

0x1544,	// (0x0008f9be) cell_cale_week_pane_g2

0x1568,	// (0x0008f9e2) cell_cale_week_pane_g3_ParamLimits

0x1568,	// (0x0008f9e2) cell_cale_week_pane_g3

0xa385,	// (0x000987ff) grid_highlight_pane_cp07

0xa38d,	// (0x00098807) listscroll_gms_pane

0xa397,	// (0x00098811) grid_gms_pane

0xa3a0,	// (0x0009881a) listscroll_gms_pane_g1

0xa3a8,	// (0x00098822) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0009d650) listscroll_gms_pane_g

0x1580,	// (0x0008f9fa) scroll_pane_cp010

0x158b,	// (0x0008fa05) cell_gms_pane_ParamLimits

0x158b,	// (0x0008fa05) cell_gms_pane

0x15a2,	// (0x0008fa1c) cell_gms_pane_g1

0xa3b0,	// (0x0009882a) cell_gms_pane_g2

0xa3b8,	// (0x00098832) cell_gms_pane_g3

0xa3c1,	// (0x0009883b) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0009d655) cell_gms_pane_g

0xa3ca,	// (0x00098844) grid_highlight_pane_cp09

0x3ae9,	// (0x00091f63) phob_pre_status_pane_g1

0x3af1,	// (0x00091f6b) phob_pre_status_pane_g2

0x3af9,	// (0x00091f73) phob_pre_status_pane_g3

0x3b01,	// (0x00091f7b) phob_pre_status_pane_g4

0x0004,

0xf5cd,	// (0x0009da47) phob_pre_status_pane_g

0x3b11,	// (0x00091f8b) phob_pre_status_pane_t1

0x3b21,	// (0x00091f9b) phob_pre_status_pane_t2

0x3b31,	// (0x00091fab) phob_pre_status_pane_t3

0x0002,

0xf5d8,	// (0x0009da52) phob_pre_status_pane_t

0xa3d2,	// (0x0009884c) bg_list_pane_cp05

0x15b2,	// (0x0008fa2c) grid_vorec_pane

0x15bc,	// (0x0008fa36) vorec_t1

0x15ca,	// (0x0008fa44) vorec_t2

0x15d8,	// (0x0008fa52) vorec_t3

0x15e6,	// (0x0008fa60) vorec_t4

0x997d,	// (0x00097df7) vorec_t5

0x998b,	// (0x00097e05) vorec_t6

0x0004,

0xf1e4,	// (0x0009d65e) vorec_t

0x9999,	// (0x00097e13) wait_bar_pane_cp01

0xadc7,	// (0x00099241) cell_vorec_pane_ParamLimits

0xadc7,	// (0x00099241) cell_vorec_pane

0xa3da,	// (0x00098854) cell_vorec_pane_g1

0x9e73,	// (0x000982ed) grid_highlight_pane_cp05

0x1618,	// (0x0008fa92) cams_zoom_pane

0x1627,	// (0x0008faa1) image_vga_pane

0x1641,	// (0x0008fabb) main_camera_pane_g1

0x1653,	// (0x0008facd) main_camera_pane_g2

0x1663,	// (0x0008fadd) main_camera_pane_g3

0x1677,	// (0x0008faf1) main_camera_pane_g4

0x168b,	// (0x0008fb05) main_camera_pane_g5

0x169f,	// (0x0008fb19) main_camera_pane_g6

0x16b3,	// (0x0008fb2d) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0009d669) main_camera_pane_g

0x16c7,	// (0x0008fb41) main_camera_pane_t1

0x16dd,	// (0x0008fb57) main_camera_pane_t2

0x0001,

0xf200,	// (0x0009d67a) main_camera_pane_t

0x171b,	// (0x0008fb95) cams_zoom_pane_cp_ParamLimits

0x171b,	// (0x0008fb95) cams_zoom_pane_cp

0x1743,	// (0x0008fbbd) image_cif_pane_ParamLimits

0x1743,	// (0x0008fbbd) image_cif_pane

0x177e,	// (0x0008fbf8) image_subqcif_pane

0x1788,	// (0x0008fc02) main_video_pane_g1_ParamLimits

0x1788,	// (0x0008fc02) main_video_pane_g1

0x17ac,	// (0x0008fc26) main_video_pane_g2_ParamLimits

0x17ac,	// (0x0008fc26) main_video_pane_g2

0x17e2,	// (0x0008fc5c) main_video_pane_g3_ParamLimits

0x17e2,	// (0x0008fc5c) main_video_pane_g3

0x1810,	// (0x0008fc8a) main_video_pane_g4_ParamLimits

0x1810,	// (0x0008fc8a) main_video_pane_g4

0x183e,	// (0x0008fcb8) main_video_pane_g5_ParamLimits

0x183e,	// (0x0008fcb8) main_video_pane_g5

0xa3f0,	// (0x0009886a) main_video_pane_g6_ParamLimits

0xa3f0,	// (0x0009886a) main_video_pane_g6

0x0006,

0xf205,	// (0x0009d67f) main_video_pane_g_ParamLimits

0xf205,	// (0x0009d67f) main_video_pane_g

0x1867,	// (0x0008fce1) main_video_pane_t1_ParamLimits

0x1867,	// (0x0008fce1) main_video_pane_t1

0xa40a,	// (0x00098884) cams_zoom_pane_g1

0xa413,	// (0x0009888d) cams_zoom_pane_g2

0xa41c,	// (0x00098896) cams_zoom_pane_g3

0xa425,	// (0x0009889f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0009d68e) cams_zoom_pane_g

0x18c4,	// (0x0008fd3e) grid_cams_pane

0x18de,	// (0x0008fd58) linegrid_cams_pane

0x18f0,	// (0x0008fd6a) cell_cams_pane_ParamLimits

0x18f0,	// (0x0008fd6a) cell_cams_pane

0xa42e,	// (0x000988a8) cams_burst_image_pane

0xa436,	// (0x000988b0) cell_cams_pane_g1

0x9e73,	// (0x000982ed) grid_highlight_pane_cp03

0xa22e,	// (0x000986a8) mp_bg_pane_g1

0x9e73,	// (0x000982ed) bg_list_pane_cp03

0xc885,	// (0x0009acff) bg_mp_pane

0xc88d,	// (0x0009ad07) grid_mp_pane

0xc895,	// (0x0009ad0f) media_player_g1

0xc89f,	// (0x0009ad19) media_player_t1

0xc8ad,	// (0x0009ad27) media_player_t2

0xc8bb,	// (0x0009ad35) media_player_t3

0xc8c9,	// (0x0009ad43) media_player_t4

0xc8d7,	// (0x0009ad51) media_player_t5

0xc8e5,	// (0x0009ad5f) media_player_t6

0xc8f3,	// (0x0009ad6d) media_player_t7

0x0006,

0xf5b7,	// (0x0009da31) media_player_t

0xc901,	// (0x0009ad7b) wait_bar_pane_cp02

0xf59c,	// (0x0009da16) main_usb_pane_t

0x3ae0,	// (0x00091f5a) cell_mp_pane

0xa22e,	// (0x000986a8) cell_mp_pane_g1

0x9e73,	// (0x000982ed) grid_highlight_pane_cp06

0xa43e,	// (0x000988b8) grid_skin_colour_pane

0xa446,	// (0x000988c0) list_highlight_pane_cp03

0x192a,	// (0x0008fda4) skin_g1

0xa44e,	// (0x000988c8) skin_t1

0xa45d,	// (0x000988d7) skin_t2

0x0001,

0xf249,	// (0x0009d6c3) skin_t

0x1934,	// (0x0008fdae) cell_skin_colour_pane_ParamLimits

0x1934,	// (0x0008fdae) cell_skin_colour_pane

0xa46b,	// (0x000988e5) cell_skin_colour_pane_g1

0x19a7,	// (0x0008fe21) call_video_g1_ParamLimits

0x19a7,	// (0x0008fe21) call_video_g1

0x19c3,	// (0x0008fe3d) call_video_g2_ParamLimits

0x19c3,	// (0x0008fe3d) call_video_g2

0x0001,

0xf24e,	// (0x0009d6c8) call_video_g_ParamLimits

0xf24e,	// (0x0009d6c8) call_video_g

0x1a08,	// (0x0008fe82) call_video_uplink_pane_cp1_ParamLimits

0x1a08,	// (0x0008fe82) call_video_uplink_pane_cp1

0xa47d,	// (0x000988f7) call_video_uplink_pane_cp2

0x1aa9,	// (0x0008ff23) video_down_crop_pane_ParamLimits

0x1aa9,	// (0x0008ff23) video_down_crop_pane

0x1b92,	// (0x0009000c) video_down_pane_ParamLimits

0x1b92,	// (0x0009000c) video_down_pane

0xa485,	// (0x000988ff) video_down_subqcif_pane_ParamLimits

0xa485,	// (0x000988ff) video_down_subqcif_pane

0xa49f,	// (0x00098919) video_down_subqcif_pane_cp_ParamLimits

0xa49f,	// (0x00098919) video_down_subqcif_pane_cp

0xa4c7,	// (0x00098941) im_reading_pane_ParamLimits

0xa4c7,	// (0x00098941) im_reading_pane

0x1c9d,	// (0x00090117) im_writing_pane_ParamLimits

0x1c9d,	// (0x00090117) im_writing_pane

0x1cbb,	// (0x00090135) im_reading_pane_t1

0xa4e1,	// (0x0009895b) list_im_pane

0xa4f2,	// (0x0009896c) scroll_pane_cp07

0x1cfa,	// (0x00090174) im_writing_pane_t1_ParamLimits

0x1cfa,	// (0x00090174) im_writing_pane_t1

0xa50b,	// (0x00098985) im_writing_pane_t2_ParamLimits

0xa50b,	// (0x00098985) im_writing_pane_t2

0x0001,

0xf258,	// (0x0009d6d2) im_writing_pane_t_ParamLimits

0xf258,	// (0x0009d6d2) im_writing_pane_t

0x9e73,	// (0x000982ed) input_focus_pane_cp04

0x9e73,	// (0x000982ed) input_focus_pane_cp05

0x1d0f,	// (0x00090189) list_im_single_pane_ParamLimits

0x1d0f,	// (0x00090189) list_im_single_pane

0x1d28,	// (0x000901a2) list_single_im_pane_t1

0x3aa0,	// (0x00091f1a) blid_accuracy_pane

0x3aa8,	// (0x00091f22) blid_compass_pane

0x3ab2,	// (0x00091f2c) main_location_t1

0x3ac2,	// (0x00091f3c) main_location_t2

0x3ad2,	// (0x00091f4c) main_location_t3

0x0002,

0xf5c6,	// (0x0009da40) main_location_t

0x9e73,	// (0x000982ed) aid_levels_location

0xa22e,	// (0x000986a8) blid_accuracy_pane_g1

0xa22e,	// (0x000986a8) blid_accuracy_pane_g2

0x0001,

0xf2c1,	// (0x0009d73b) blid_accuracy_pane_g

0xa553,	// (0x000989cd) wml_content_pane

0xa591,	// (0x00098a0b) wml_button_pane_ParamLimits

0xa591,	// (0x00098a0b) wml_button_pane

0x1d37,	// (0x000901b1) wml_list_single_large_pane_ParamLimits

0x1d37,	// (0x000901b1) wml_list_single_large_pane

0x1d50,	// (0x000901ca) wml_list_single_medium_pane_ParamLimits

0x1d50,	// (0x000901ca) wml_list_single_medium_pane

0x1d6a,	// (0x000901e4) wml_list_single_small_pane_ParamLimits

0x1d6a,	// (0x000901e4) wml_list_single_small_pane

0xa5a5,	// (0x00098a1f) wml_selection_box_pane_ParamLimits

0xa5a5,	// (0x00098a1f) wml_selection_box_pane

0xa5b8,	// (0x00098a32) wml_list_single_pane_t1

0xa5c7,	// (0x00098a41) wml_list_single_medium_pane_t1

0xa5d6,	// (0x00098a50) wml_list_single_large_pane_t1

0xa5e5,	// (0x00098a5f) input_focus_pane_cp02_ParamLimits

0xa5e5,	// (0x00098a5f) input_focus_pane_cp02

0xa5f8,	// (0x00098a72) wml_selection_box_pane_g1

0xa601,	// (0x00098a7b) wml_selection_box_pane_t1_ParamLimits

0xa601,	// (0x00098a7b) wml_selection_box_pane_t1

0xa0ce,	// (0x00098548) bg_wml_button_pane_ParamLimits

0xa0ce,	// (0x00098548) bg_wml_button_pane

0xa619,	// (0x00098a93) wml_button_pane_g1

0xa621,	// (0x00098a9b) wml_button_pane_t1

0xa619,	// (0x00098a93) wml_button_bg_pane_g1

0xa631,	// (0x00098aab) wml_button_bg_pane_g2

0xa639,	// (0x00098ab3) wml_button_bg_pane_g3

0xa641,	// (0x00098abb) wml_button_bg_pane_g4

0xa649,	// (0x00098ac3) wml_button_bg_pane_g5

0xa651,	// (0x00098acb) wml_button_bg_pane_g6

0xa659,	// (0x00098ad3) wml_button_bg_pane_g7

0xa661,	// (0x00098adb) wml_button_bg_pane_g8

0xa669,	// (0x00098ae3) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0009d6d7) wml_button_bg_pane_g

0x1d89,	// (0x00090203) bg_list_pane_cp02

0xa671,	// (0x00098aeb) mce_header_pane_ParamLimits

0xa671,	// (0x00098aeb) mce_header_pane

0xa687,	// (0x00098b01) mce_icon_pane

0xa687,	// (0x00098b01) mce_image_pane

0xa690,	// (0x00098b0a) mce_text_pane_ParamLimits

0xa690,	// (0x00098b0a) mce_text_pane

0x1d93,	// (0x0009020d) scroll_pane_cp03

0xa589,	// (0x00098a03) scroll_pane_cp04

0xa6a3,	// (0x00098b1d) scroll_pane_cp05_ParamLimits

0xa6a3,	// (0x00098b1d) scroll_pane_cp05

0x1d9d,	// (0x00090217) mce_header_field_pane_ParamLimits

0x1d9d,	// (0x00090217) mce_header_field_pane

0x1db6,	// (0x00090230) mce_header_field_pane_2_ParamLimits

0x1db6,	// (0x00090230) mce_header_field_pane_2

0x1dcc,	// (0x00090246) mce_header_field_pane_3

0x1dd4,	// (0x0009024e) list_single_mce_message_pane_ParamLimits

0x1dd4,	// (0x0009024e) list_single_mce_message_pane

0x1df0,	// (0x0009026a) list_single_mce_smart_pane_ParamLimits

0x1df0,	// (0x0009026a) list_single_mce_smart_pane

0xa6af,	// (0x00098b29) input_focus_pane_cp03

0xa6b8,	// (0x00098b32) list_header_data_pane

0x1e17,	// (0x00090291) mce_header_field_pane_t1

0x1e27,	// (0x000902a1) list_single_mce_header_pane_ParamLimits

0x1e27,	// (0x000902a1) list_single_mce_header_pane

0xaddc,	// (0x00099256) list_single_mce_header_pane_t1

0xadeb,	// (0x00099265) list_single_mce_message_pane_g1

0xadf3,	// (0x0009926d) list_single_mce_message_pane_t1

0x1e61,	// (0x000902db) bg_cale_heading_pane_cp01_ParamLimits

0x1e61,	// (0x000902db) bg_cale_heading_pane_cp01

0xae01,	// (0x0009927b) bg_cale_pane_cp02_ParamLimits

0xae01,	// (0x0009927b) bg_cale_pane_cp02

0x1eb3,	// (0x0009032d) cale_month_corner_pane

0x1ed2,	// (0x0009034c) cale_month_day_heading_pane_ParamLimits

0x1ed2,	// (0x0009034c) cale_month_day_heading_pane

0x1f3c,	// (0x000903b6) cale_month_pane_g1_ParamLimits

0x1f3c,	// (0x000903b6) cale_month_pane_g1

0x1f83,	// (0x000903fd) cale_month_pane_g2_ParamLimits

0x1f83,	// (0x000903fd) cale_month_pane_g2

0x1fbf,	// (0x00090439) cale_month_pane_g3_ParamLimits

0x1fbf,	// (0x00090439) cale_month_pane_g3

0x2013,	// (0x0009048d) cale_month_pane_g4_ParamLimits

0x2013,	// (0x0009048d) cale_month_pane_g4

0x2067,	// (0x000904e1) cale_month_pane_g5_ParamLimits

0x2067,	// (0x000904e1) cale_month_pane_g5

0x20c3,	// (0x0009053d) cale_month_pane_g6_ParamLimits

0x20c3,	// (0x0009053d) cale_month_pane_g6

0x212b,	// (0x000905a5) cale_month_pane_g7_ParamLimits

0x212b,	// (0x000905a5) cale_month_pane_g7

0x2197,	// (0x00090611) cale_month_pane_g8_ParamLimits

0x2197,	// (0x00090611) cale_month_pane_g8

0x2203,	// (0x0009067d) cale_month_pane_g9_ParamLimits

0x2203,	// (0x0009067d) cale_month_pane_g9

0x2267,	// (0x000906e1) cale_month_pane_g10_ParamLimits

0x2267,	// (0x000906e1) cale_month_pane_g10

0x22b9,	// (0x00090733) cale_month_pane_g11_ParamLimits

0x22b9,	// (0x00090733) cale_month_pane_g11

0x230b,	// (0x00090785) cale_month_pane_g12_ParamLimits

0x230b,	// (0x00090785) cale_month_pane_g12

0x2363,	// (0x000907dd) cale_month_pane_g13_ParamLimits

0x2363,	// (0x000907dd) cale_month_pane_g13

0x000c,

0xf270,	// (0x0009d6ea) cale_month_pane_g_ParamLimits

0xf270,	// (0x0009d6ea) cale_month_pane_g

0x23bb,	// (0x00090835) cale_month_week_pane

0x23df,	// (0x00090859) grid_cale_month_pane_ParamLimits

0x23df,	// (0x00090859) grid_cale_month_pane

0x2440,	// (0x000908ba) cale_month_day_heading_pane_t1

0x24c6,	// (0x00090940) cale_month_day_heading_pane_t2

0x253f,	// (0x000909b9) cale_month_day_heading_pane_t3

0x25b8,	// (0x00090a32) cale_month_day_heading_pane_t4

0x2639,	// (0x00090ab3) cale_month_day_heading_pane_t5

0x26c2,	// (0x00090b3c) cale_month_day_heading_pane_t6

0x2753,	// (0x00090bcd) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0009d705) cale_month_day_heading_pane_t

0xa377,	// (0x000987f1) bg_cale_side_pane_cp01

0x27e4,	// (0x00090c5e) cale_month_week_pane_t1

0x27fd,	// (0x00090c77) cale_month_week_pane_t2

0x2816,	// (0x00090c90) cale_month_week_pane_t3

0x282f,	// (0x00090ca9) cale_month_week_pane_t4

0x2848,	// (0x00090cc2) cale_month_week_pane_t5

0x2861,	// (0x00090cdb) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0009d714) cale_month_week_pane_t

0x2886,	// (0x00090d00) cell_cale_month_pane_ParamLimits

0x2886,	// (0x00090d00) cell_cale_month_pane

0xa6c0,	// (0x00098b3a) cell_cale_month_pane_g1

0x29d0,	// (0x00090e4a) cell_cale_month_pane_t1_ParamLimits

0x29d0,	// (0x00090e4a) cell_cale_month_pane_t1

0xa385,	// (0x000987ff) grid_highlight_pane_cp08

0xa22e,	// (0x000986a8) main_smil_g1

0x29fc,	// (0x00090e76) smil_status_pane

0xae40,	// (0x000992ba) smil_text_pane

0xc7a3,	// (0x0009ac1d) bg_popup_call3_rect_pane_g8

0xc7ab,	// (0x0009ac25) bg_popup_call3_rect_pane_g9

0x0008,

0xf55a,	// (0x0009d9d4) bg_popup_call3_rect_pane_g

0xca09,	// (0x0009ae83) smil_status_volume_pane_g1

0xae4a,	// (0x000992c4) smil_status_pane_t1

0xa816,	// (0x00098c90) volume_smil_pane

0xae61,	// (0x000992db) list_smil_text_pane

0x2a11,	// (0x00090e8b) scroll_pane_cp011

0x2a1c,	// (0x00090e96) smil_text_list_pane_t1_ParamLimits

0x2a1c,	// (0x00090e96) smil_text_list_pane_t1

0xa6cc,	// (0x00098b46) aid_volume_smil_ParamLimits

0xa6cc,	// (0x00098b46) aid_volume_smil

0xa22e,	// (0x000986a8) smil_volume_pane_g1

0xa22e,	// (0x000986a8) smil_volume_pane_g2

0x0001,

0xf2c1,	// (0x0009d73b) smil_volume_pane_g

0x0fc3,	// (0x0008f43d) listscroll_cale_day_pane

0xae6b,	// (0x000992e5) bg_cale_pane

0xae83,	// (0x000992fd) list_cale_pane

0xaea6,	// (0x00099320) scroll_pane_cp09

0xaeb7,	// (0x00099331) cale_bg_pane_g1

0xaebf,	// (0x00099339) cale_bg_pane_g2

0xaec7,	// (0x00099341) cale_bg_pane_g3

0xaecf,	// (0x00099349) cale_bg_pane_g4

0xaed7,	// (0x00099351) cale_bg_pane_g5

0xaedf,	// (0x00099359) cale_bg_pane_g6

0xaee7,	// (0x00099361) cale_bg_pane_g7

0xaeef,	// (0x00099369) cale_bg_pane_g8

0xaef7,	// (0x00099371) cale_bg_pane_g9

0x0008,

0xf2c6,	// (0x0009d740) cale_bg_pane_g

0x2a6f,	// (0x00090ee9) list_cale_time_pane_ParamLimits

0x2a6f,	// (0x00090ee9) list_cale_time_pane

0xaeff,	// (0x00099379) list_cale_time_pane_g1_ParamLimits

0xaeff,	// (0x00099379) list_cale_time_pane_g1

0xaf0b,	// (0x00099385) list_cale_time_pane_g2_ParamLimits

0xaf0b,	// (0x00099385) list_cale_time_pane_g2

0x2a89,	// (0x00090f03) list_cale_time_pane_g3_ParamLimits

0x2a89,	// (0x00090f03) list_cale_time_pane_g3

0x2a97,	// (0x00090f11) list_cale_time_pane_g4_ParamLimits

0x2a97,	// (0x00090f11) list_cale_time_pane_g4

0x2aa5,	// (0x00090f1f) list_cale_time_pane_g5_ParamLimits

0x2aa5,	// (0x00090f1f) list_cale_time_pane_g5

0x0005,

0xf2d9,	// (0x0009d753) list_cale_time_pane_g_ParamLimits

0xf2d9,	// (0x0009d753) list_cale_time_pane_g

0xaf25,	// (0x0009939f) list_cale_time_pane_t1_ParamLimits

0xaf25,	// (0x0009939f) list_cale_time_pane_t1

0xaf4d,	// (0x000993c7) list_cale_time_pane_t2_ParamLimits

0xaf4d,	// (0x000993c7) list_cale_time_pane_t2

0x2d7b,	// (0x000911f5) aid_blid_cardinal_pane

0x2dbd,	// (0x00091237) compass_pane_t4

0xaf75,	// (0x000993ef) list_cale_time_pane_t4_ParamLimits

0xaf75,	// (0x000993ef) list_cale_time_pane_t4

0x2dcb,	// (0x00091245) compass_pane_t5

0x2ddb,	// (0x00091255) compass_pane_t6

0x2de9,	// (0x00091263) compass_pane_t7

0xb405,	// (0x0009987f) navi_pane_cc_t1

0xb5e4,	// (0x00099a5e) aid_phob_thumbnail_center_pane

0x3463,	// (0x000918dd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2e6,	// (0x0009d760) list_cale_time_pane_t_ParamLimits

0xf2e6,	// (0x0009d760) list_cale_time_pane_t

0x9aca,	// (0x00097f44) bg_popup_window_pane_cp02_ParamLimits

0x9aca,	// (0x00097f44) bg_popup_window_pane_cp02

0xaf9d,	// (0x00099417) heading_pane_cp01_ParamLimits

0xaf9d,	// (0x00099417) heading_pane_cp01

0xafa9,	// (0x00099423) loc_req_pane_ParamLimits

0xafa9,	// (0x00099423) loc_req_pane

0xafb9,	// (0x00099433) loc_type_pane_ParamLimits

0xafb9,	// (0x00099433) loc_type_pane

0xafcb,	// (0x00099445) loc_type_pane_t1_ParamLimits

0xafcb,	// (0x00099445) loc_type_pane_t1

0xafdd,	// (0x00099457) loc_type_pane_t2_ParamLimits

0xafdd,	// (0x00099457) loc_type_pane_t2

0xafef,	// (0x00099469) loc_type_pane_t3_ParamLimits

0xafef,	// (0x00099469) loc_type_pane_t3

0x0002,

0xf2ed,	// (0x0009d767) loc_type_pane_t_ParamLimits

0xf2ed,	// (0x0009d767) loc_type_pane_t

0xb001,	// (0x0009947b) list_loc_req_pane

0xb00b,	// (0x00099485) scroll_pane_cp012

0x2ab3,	// (0x00090f2d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ab3,	// (0x00090f2d) list_single_loc_request_popup_menu_pane

0xb016,	// (0x00099490) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb016,	// (0x00099490) list_single_loc_request_popup_menu_pane_g1

0xb022,	// (0x0009949c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb022,	// (0x0009949c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2f4,	// (0x0009d76e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2f4,	// (0x0009d76e) list_single_loc_request_popup_menu_pane_g

0xb02e,	// (0x000994a8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb02e,	// (0x000994a8) list_single_loc_request_popup_menu_pane_t1

0xa0ce,	// (0x00098548) bg_popup_window_pane_cp03_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_window_pane_cp03

0xb044,	// (0x000994be) heading_loc_req_pane_ParamLimits

0xb044,	// (0x000994be) heading_loc_req_pane

0x2ac0,	// (0x00090f3a) popup_dyc_status_message_window_g1_ParamLimits

0x2ac0,	// (0x00090f3a) popup_dyc_status_message_window_g1

0x2ad4,	// (0x00090f4e) popup_dyc_status_message_window_t1_ParamLimits

0x2ad4,	// (0x00090f4e) popup_dyc_status_message_window_t1

0x2ae9,	// (0x00090f63) popup_dyc_status_message_window_t2_ParamLimits

0x2ae9,	// (0x00090f63) popup_dyc_status_message_window_t2

0x2afe,	// (0x00090f78) popup_dyc_status_message_window_t3_ParamLimits

0x2afe,	// (0x00090f78) popup_dyc_status_message_window_t3

0x0002,

0xf2f9,	// (0x0009d773) popup_dyc_status_message_window_t_ParamLimits

0xf2f9,	// (0x0009d773) popup_dyc_status_message_window_t

0x9e73,	// (0x000982ed) bg_heading_pane_cp01

0xb050,	// (0x000994ca) heading_loc_req_pane_g1

0xb058,	// (0x000994d2) heading_loc_req_pane_g2

0xb060,	// (0x000994da) heading_loc_req_pane_g3

0x0002,

0xf300,	// (0x0009d77a) heading_loc_req_pane_g

0xb068,	// (0x000994e2) heading_loc_req_pane_t1

0xb084,	// (0x000994fe) bg_popup_sub_pane_cp01_ParamLimits

0xb084,	// (0x000994fe) bg_popup_sub_pane_cp01

0xb092,	// (0x0009950c) popup_cale_events_window_g1_ParamLimits

0xb092,	// (0x0009950c) popup_cale_events_window_g1

0xb0b2,	// (0x0009952c) popup_cale_events_window_g2_ParamLimits

0xb0b2,	// (0x0009952c) popup_cale_events_window_g2

0x0001,

0xf334,	// (0x0009d7ae) popup_cale_events_window_g_ParamLimits

0xf334,	// (0x0009d7ae) popup_cale_events_window_g

0xb0d2,	// (0x0009954c) popup_cale_events_window_t1_ParamLimits

0xb0d2,	// (0x0009954c) popup_cale_events_window_t1

0xb0e4,	// (0x0009955e) popup_cale_events_window_t2_ParamLimits

0xb0e4,	// (0x0009955e) popup_cale_events_window_t2

0xb122,	// (0x0009959c) popup_cale_events_window_t3_ParamLimits

0xb122,	// (0x0009959c) popup_cale_events_window_t3

0xb15c,	// (0x000995d6) popup_cale_events_window_t4_ParamLimits

0xb15c,	// (0x000995d6) popup_cale_events_window_t4

0x0003,

0xf339,	// (0x0009d7b3) popup_cale_events_window_t_ParamLimits

0xf339,	// (0x0009d7b3) popup_cale_events_window_t

0x2b26,	// (0x00090fa0) call_type_pane

0x2b36,	// (0x00090fb0) popup_call_status_window_g1

0x2b4a,	// (0x00090fc4) popup_call_status_window_g2

0x2b5e,	// (0x00090fd8) popup_call_status_window_g3

0x0002,

0xf342,	// (0x0009d7bc) popup_call_status_window_g

0xb192,	// (0x0009960c) call_type_pane_g1

0xb19b,	// (0x00099615) call_type_pane_g2

0x0001,

0xf349,	// (0x0009d7c3) call_type_pane_g

0x9e73,	// (0x000982ed) bg_popup_sub_pane_cp02

0xb1a4,	// (0x0009961e) listscroll_popup_wml_pane

0xb1ac,	// (0x00099626) list_wml_pane

0xb1b6,	// (0x00099630) scroll_pane_cp013

0xb1c1,	// (0x0009963b) list_single_graphic_popup_wml_pane_ParamLimits

0xb1c1,	// (0x0009963b) list_single_graphic_popup_wml_pane

0xa22e,	// (0x000986a8) list_single_graphic_popup_wml_pane_g1

0xb1d5,	// (0x0009964f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf34e,	// (0x0009d7c8) list_single_graphic_popup_wml_pane_g

0xb1dd,	// (0x00099657) list_single_graphic_popup_wml_pane_t1

0xb1f3,	// (0x0009966d) aid_call_pane

0xa0c6,	// (0x00098540) popup_clock_analogue_window_g1

0xa0c6,	// (0x00098540) popup_clock_analogue_window_g2

0xa6ee,	// (0x00098b68) popup_clock_analogue_window_g3

0xa6ee,	// (0x00098b68) popup_clock_analogue_window_g4

0xa22e,	// (0x000986a8) popup_clock_analogue_window_g5

0x0004,

0xf353,	// (0x0009d7cd) popup_clock_analogue_window_g

0xa6f6,	// (0x00098b70) popup_clock_analogue_window_t1

0xa704,	// (0x00098b7e) clock_digital_number_pane_ParamLimits

0xa704,	// (0x00098b7e) clock_digital_number_pane

0xa710,	// (0x00098b8a) clock_digital_number_pane_cp02_ParamLimits

0xa710,	// (0x00098b8a) clock_digital_number_pane_cp02

0xa71c,	// (0x00098b96) clock_digital_number_pane_cp03_ParamLimits

0xa71c,	// (0x00098b96) clock_digital_number_pane_cp03

0xa728,	// (0x00098ba2) clock_digital_number_pane_cp04_ParamLimits

0xa728,	// (0x00098ba2) clock_digital_number_pane_cp04

0xa734,	// (0x00098bae) clock_digital_separator_pane_ParamLimits

0xa734,	// (0x00098bae) clock_digital_separator_pane

0xa740,	// (0x00098bba) popup_clock_digital_window_t1

0xa22e,	// (0x000986a8) clock_digital_number_pane_g1

0xa22e,	// (0x000986a8) clock_digital_number_pane_g2

0x0001,

0xf2c1,	// (0x0009d73b) clock_digital_number_pane_g

0xa22e,	// (0x000986a8) clock_digital_separator_pane_g1

0xa22e,	// (0x000986a8) clock_digital_separator_pane_g2

0x0001,

0xf2c1,	// (0x0009d73b) clock_digital_separator_pane_g

0x9e73,	// (0x000982ed) bg_popup_window_pane_cp04

0xb1fb,	// (0x00099675) heading_pane_cp03

0xb203,	// (0x0009967d) listscroll_popup_gms_pane

0xb20b,	// (0x00099685) grid_large_graphic_popup_pane

0xb215,	// (0x0009968f) listscroll_popup_gms_pane_g1

0xb21d,	// (0x00099697) listscroll_popup_gms_pane_g2

0x0001,

0xf35e,	// (0x0009d7d8) listscroll_popup_gms_pane_g

0xa589,	// (0x00098a03) scroll_pane_cp014

0x2b6e,	// (0x00090fe8) cell_large_graphic_popup_pane_ParamLimits

0x2b6e,	// (0x00090fe8) cell_large_graphic_popup_pane

0x2b86,	// (0x00091000) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b86,	// (0x00091000) cell_large_graphic_popup_pane_g1

0xb225,	// (0x0009969f) cell_large_graphic_popup_pane_g2_ParamLimits

0xb225,	// (0x0009969f) cell_large_graphic_popup_pane_g2

0xb231,	// (0x000996ab) cell_large_graphic_popup_pane_g3_ParamLimits

0xb231,	// (0x000996ab) cell_large_graphic_popup_pane_g3

0xb23e,	// (0x000996b8) cell_large_graphic_popup_pane_g4_ParamLimits

0xb23e,	// (0x000996b8) cell_large_graphic_popup_pane_g4

0x0003,

0xf363,	// (0x0009d7dd) cell_large_graphic_popup_pane_g_ParamLimits

0xf363,	// (0x0009d7dd) cell_large_graphic_popup_pane_g

0xb24e,	// (0x000996c8) grid_highlight_pane_cp010

0xa22e,	// (0x000986a8) bg_popup_call_pane_g1

0xb258,	// (0x000996d2) list_single_graphic_popup_conf_pane_ParamLimits

0xb258,	// (0x000996d2) list_single_graphic_popup_conf_pane

0xb26a,	// (0x000996e4) list_highlight_pane_cp01

0xb273,	// (0x000996ed) list_single_graphic_popup_conf_pane_g1

0xb27b,	// (0x000996f5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf36c,	// (0x0009d7e6) list_single_graphic_popup_conf_pane_g

0xb283,	// (0x000996fd) list_single_graphic_popup_conf_pane_t1

0xb291,	// (0x0009970b) linegrid_cams_pane_g1

0x2b92,	// (0x0009100c) linegrid_cams_pane_g2

0xa3b8,	// (0x00098832) linegrid_cams_pane_g3

0xb29a,	// (0x00099714) linegrid_cams_pane_g4

0x2b9b,	// (0x00091015) linegrid_cams_pane_g5

0x2ba4,	// (0x0009101e) linegrid_cams_pane_g6

0xa3c1,	// (0x0009883b) linegrid_cams_pane_g7

0x0006,

0xf371,	// (0x0009d7eb) linegrid_cams_pane_g

0xb2a3,	// (0x0009971d) popup_clock_analogue_window

0xb2a3,	// (0x0009971d) popup_clock_digital_window

0x9e73,	// (0x000982ed) popup_phob_thumbnail_window

0xa22e,	// (0x000986a8) call_video_uplink_pane_g1

0xb2ac,	// (0x00099726) call_video_uplink_pane_g2

0x0001,

0xf380,	// (0x0009d7fa) call_video_uplink_pane_g

0xb2b4,	// (0x0009972e) video_uplink_pane

0xb2bc,	// (0x00099736) mce_image_pane_g1

0x2baf,	// (0x00091029) mce_image_pane_g2

0x2bb9,	// (0x00091033) mce_image_pane_g3

0x2bc3,	// (0x0009103d) mce_image_pane_g4

0x2bcb,	// (0x00091045) mce_image_pane_g5

0x0004,

0xf385,	// (0x0009d7ff) mce_image_pane_g

0xb2c6,	// (0x00099740) control_top_pane_stacon_cp01_ParamLimits

0xb2c6,	// (0x00099740) control_top_pane_stacon_cp01

0xb2da,	// (0x00099754) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2da,	// (0x00099754) uni_indicator_pane_stacon_cp01

0xb2eb,	// (0x00099765) bg_popup_sub_pane_cp03

0x2bd3,	// (0x0009104d) chi_dic_find_pane

0x2bdb,	// (0x00091055) listscroll_chi_dic_pane

0x2be4,	// (0x0009105e) main_pane_chidic_g1

0x2bf7,	// (0x00091071) chi_dic_find_pane_t1

0xb2f5,	// (0x0009976f) find_chidic_pane

0xb2fe,	// (0x00099778) chi_dic_list_pane_ParamLimits

0xb2fe,	// (0x00099778) chi_dic_list_pane

0xb30f,	// (0x00099789) scroll_pane_cp020

0x2c05,	// (0x0009107f) find_chidic_pane_t1

0x9e73,	// (0x000982ed) input_focus_pane_cp06

0x2c14,	// (0x0009108e) list_chi_dic_pane_ParamLimits

0x2c14,	// (0x0009108e) list_chi_dic_pane

0x2c26,	// (0x000910a0) list_chi_dic_pane_t1_ParamLimits

0x2c26,	// (0x000910a0) list_chi_dic_pane_t1

0x9e73,	// (0x000982ed) list_highlight_pane_cp020

0xb317,	// (0x00099791) bg_cale_heading_pane_g1

0x2c39,	// (0x000910b3) bg_cale_heading_pane_g2

0x2c41,	// (0x000910bb) bg_cale_heading_pane_g3

0x2c49,	// (0x000910c3) bg_cale_heading_pane_g4

0x2c53,	// (0x000910cd) bg_cale_heading_pane_g5

0x2c5d,	// (0x000910d7) bg_cale_heading_pane_g6

0x2c65,	// (0x000910df) bg_cale_heading_pane_g7

0x2c6d,	// (0x000910e7) bg_cale_heading_pane_g8

0x2c77,	// (0x000910f1) bg_cale_heading_pane_g9

0x0008,

0xf390,	// (0x0009d80a) bg_cale_heading_pane_g

0xb317,	// (0x00099791) bg_cale_side_pane_g1

0x2c81,	// (0x000910fb) bg_cale_side_pane_g2

0x2c8b,	// (0x00091105) bg_cale_side_pane_g3

0x2c95,	// (0x0009110f) bg_cale_side_pane_g4

0x2c9f,	// (0x00091119) bg_cale_side_pane_g5

0x2ca9,	// (0x00091123) bg_cale_side_pane_g6

0x2cb3,	// (0x0009112d) bg_cale_side_pane_g7

0x2cbd,	// (0x00091137) bg_cale_side_pane_g8

0x2cc5,	// (0x0009113f) bg_cale_side_pane_g9

0x0008,

0xf3a3,	// (0x0009d81d) bg_cale_side_pane_g

0x2ccd,	// (0x00091147) popup_call_status_window_ParamLimits

0x2ccd,	// (0x00091147) popup_call_status_window

0xb31f,	// (0x00099799) stacon_top_pane

0xb327,	// (0x000997a1) status_pane_ParamLimits

0xb327,	// (0x000997a1) status_pane

0xb33c,	// (0x000997b6) status_small_pane

0xb344,	// (0x000997be) control_pane

0x9e73,	// (0x000982ed) stacon_bottom_pane

0xb34c,	// (0x000997c6) list_single_mce_smart_pane_t1_ParamLimits

0xb34c,	// (0x000997c6) list_single_mce_smart_pane_t1

0xb35f,	// (0x000997d9) list_single_mce_smart_pane_t2_ParamLimits

0xb35f,	// (0x000997d9) list_single_mce_smart_pane_t2

0x0001,

0xf3b6,	// (0x0009d830) list_single_mce_smart_pane_t_ParamLimits

0xf3b6,	// (0x0009d830) list_single_mce_smart_pane_t

0x2d1a,	// (0x00091194) compass_pane

0x2d25,	// (0x0009119f) main_location2_pane_t1

0x2d3b,	// (0x000911b5) main_location2_pane_t2

0x2d51,	// (0x000911cb) main_location2_pane_t3

0x0003,

0xf3bb,	// (0x0009d835) main_location2_pane_t

0xb37e,	// (0x000997f8) compass_pane_g1_ParamLimits

0xb37e,	// (0x000997f8) compass_pane_g1

0x2d9f,	// (0x00091219) compass_pane_t1

0x2dae,	// (0x00091228) compass_pane_t2

0x0005,

0xf3c4,	// (0x0009d83e) compass_pane_t

0x2df9,	// (0x00091273) text_secondary_cp61

0xb3fc,	// (0x00099876) navi_pane_cams_g5

0xb478,	// (0x000998f2) navi_pane_im_t1

0xb486,	// (0x00099900) navi_pane_mp_g1_ParamLimits

0xb486,	// (0x00099900) navi_pane_mp_g1

0xb49a,	// (0x00099914) navi_pane_mp_g2_ParamLimits

0xb49a,	// (0x00099914) navi_pane_mp_g2

0xb4a6,	// (0x00099920) navi_pane_mp_g3_ParamLimits

0xb4a6,	// (0x00099920) navi_pane_mp_g3

0x0002,

0xf3d8,	// (0x0009d852) navi_pane_mp_g_ParamLimits

0xf3d8,	// (0x0009d852) navi_pane_mp_g

0xb4b2,	// (0x0009992c) navi_pane_mp_t1

0xb4c0,	// (0x0009993a) navi_pane_mp_t2

0x0002,

0xf3df,	// (0x0009d859) navi_pane_mp_t

0xb52d,	// (0x000999a7) navi_pane_vt_g1

0xb4b2,	// (0x0009992c) navi_pane_vt_t1

0xb535,	// (0x000999af) navi_slider_pane

0xa3d2,	// (0x0009884c) zooming_pane

0xb545,	// (0x000999bf) navi_slider_pane_g1

0xa75d,	// (0x00098bd7) navi_slider_pane_g2

0x0006,

0xf3e6,	// (0x0009d860) navi_slider_pane_g

0xb569,	// (0x000999e3) aid_levels_zoom

0xb571,	// (0x000999eb) zooming_pane_g1

0xb579,	// (0x000999f3) zooming_pane_g2

0xb579,	// (0x000999f3) zooming_pane_g3

0x0002,

0xf3f5,	// (0x0009d86f) zooming_pane_g

0xb581,	// (0x000999fb) level_10_zoom

0xb58a,	// (0x00099a04) level_11_zoom

0xb593,	// (0x00099a0d) level_1_zoom

0xb59c,	// (0x00099a16) level_2_zoom

0xb5a5,	// (0x00099a1f) level_3_zoom

0xb5ae,	// (0x00099a28) level_4_zoom

0xb5b7,	// (0x00099a31) level_5_zoom

0xb5c0,	// (0x00099a3a) level_6_zoom

0xb5c9,	// (0x00099a43) level_7_zoom

0xb5d2,	// (0x00099a4c) level_8_zoom

0xb5db,	// (0x00099a55) level_9_zoom

0xb5ec,	// (0x00099a66) popup_phob_thumbnail_window_g1

0xb5f4,	// (0x00099a6e) popup_phob_thumbnail_window_g2

0x0001,

0xf3fc,	// (0x0009d876) popup_phob_thumbnail_window_g

0xc909,	// (0x0009ad83) level_1_location

0xc911,	// (0x0009ad8b) level_2_location

0xc919,	// (0x0009ad93) level_3_location

0xc921,	// (0x0009ad9b) level_4_location

0xa3d2,	// (0x0009884c) level_5_location

0x2e4a,	// (0x000912c4) mce_icon_pane_g1

0x2e54,	// (0x000912ce) mce_icon_pane_g2

0x0001,

0xf401,	// (0x0009d87b) mce_icon_pane_g

0x2e5c,	// (0x000912d6) main_mup_pane_g1_ParamLimits

0x2e5c,	// (0x000912d6) main_mup_pane_g1

0x2e72,	// (0x000912ec) main_mup_pane_g2_ParamLimits

0x2e72,	// (0x000912ec) main_mup_pane_g2

0x2e8a,	// (0x00091304) main_mup_pane_g3_ParamLimits

0x2e8a,	// (0x00091304) main_mup_pane_g3

0x2ea2,	// (0x0009131c) main_mup_pane_g4_ParamLimits

0x2ea2,	// (0x0009131c) main_mup_pane_g4

0x2eb4,	// (0x0009132e) main_mup_pane_g5_ParamLimits

0x2eb4,	// (0x0009132e) main_mup_pane_g5

0x2ed0,	// (0x0009134a) main_mup_pane_g6_ParamLimits

0x2ed0,	// (0x0009134a) main_mup_pane_g6

0x2eea,	// (0x00091364) main_mup_pane_g7_ParamLimits

0x2eea,	// (0x00091364) main_mup_pane_g7

0x2f08,	// (0x00091382) main_mup_pane_g8_ParamLimits

0x2f08,	// (0x00091382) main_mup_pane_g8

0x2f26,	// (0x000913a0) main_mup_pane_g9_ParamLimits

0x2f26,	// (0x000913a0) main_mup_pane_g9

0x2f42,	// (0x000913bc) main_mup_pane_g10_ParamLimits

0x2f42,	// (0x000913bc) main_mup_pane_g10

0x2f60,	// (0x000913da) main_mup_pane_g11_ParamLimits

0x2f60,	// (0x000913da) main_mup_pane_g11

0x2f7a,	// (0x000913f4) main_mup_pane_g12_ParamLimits

0x2f7a,	// (0x000913f4) main_mup_pane_g12

0x2f90,	// (0x0009140a) main_mup_pane_g13_ParamLimits

0x2f90,	// (0x0009140a) main_mup_pane_g13

0x000c,

0xf406,	// (0x0009d880) main_mup_pane_g_ParamLimits

0xf406,	// (0x0009d880) main_mup_pane_g

0x2fa4,	// (0x0009141e) main_mup_pane_t1_ParamLimits

0x2fa4,	// (0x0009141e) main_mup_pane_t1

0x2fc0,	// (0x0009143a) main_mup_pane_t2_ParamLimits

0x2fc0,	// (0x0009143a) main_mup_pane_t2

0x2fd8,	// (0x00091452) main_mup_pane_t3_ParamLimits

0x2fd8,	// (0x00091452) main_mup_pane_t3

0x2ff0,	// (0x0009146a) main_mup_pane_t4_ParamLimits

0x2ff0,	// (0x0009146a) main_mup_pane_t4

0x300e,	// (0x00091488) main_mup_pane_t5_ParamLimits

0x300e,	// (0x00091488) main_mup_pane_t5

0x3023,	// (0x0009149d) main_mup_pane_t6_ParamLimits

0x3023,	// (0x0009149d) main_mup_pane_t6

0x0005,

0xf421,	// (0x0009d89b) main_mup_pane_t_ParamLimits

0xf421,	// (0x0009d89b) main_mup_pane_t

0x3035,	// (0x000914af) mup_progress_pane_ParamLimits

0x3035,	// (0x000914af) mup_progress_pane

0x3041,	// (0x000914bb) mup_visualizer_pane_ParamLimits

0x3041,	// (0x000914bb) mup_visualizer_pane

0x3075,	// (0x000914ef) mup_volume_pane_ParamLimits

0x3075,	// (0x000914ef) mup_volume_pane

0xb5fc,	// (0x00099a76) mup_visualizer_pane_g1_ParamLimits

0xb5fc,	// (0x00099a76) mup_visualizer_pane_g1

0xb5fc,	// (0x00099a76) mup_visualizer_pane_g2_ParamLimits

0xb5fc,	// (0x00099a76) mup_visualizer_pane_g2

0xb37e,	// (0x000997f8) mup_visualizer_pane_g3_ParamLimits

0xb37e,	// (0x000997f8) mup_visualizer_pane_g3

0x0002,

0xf42e,	// (0x0009d8a8) mup_visualizer_pane_g_ParamLimits

0xf42e,	// (0x0009d8a8) mup_visualizer_pane_g

0xa22e,	// (0x000986a8) mup_volume_pane_g1

0xb612,	// (0x00099a8c) mup_volume_pane_g2

0x0001,

0xf435,	// (0x0009d8af) mup_volume_pane_g

0xa22e,	// (0x000986a8) mup_progress_pane_g1

0xb61b,	// (0x00099a95) mup_progress_pane_g2

0xb624,	// (0x00099a9e) mup_progress_pane_g3

0x0002,

0xf43a,	// (0x0009d8b4) mup_progress_pane_g

0x9e73,	// (0x000982ed) bg_popup_window_pane_cp05

0xb62d,	// (0x00099aa7) heading_pane_cp02_ParamLimits

0xb62d,	// (0x00099aa7) heading_pane_cp02

0xb649,	// (0x00099ac3) list_popup_blid_pane

0xb651,	// (0x00099acb) list_blid_sat_info_pane_ParamLimits

0xb651,	// (0x00099acb) list_blid_sat_info_pane

0xb664,	// (0x00099ade) list_blid_sat_info_pane_g1

0xb66c,	// (0x00099ae6) list_blid_sat_info_pane_t1

0x319f,	// (0x00091619) mup_equalizer_pane_ParamLimits

0x319f,	// (0x00091619) mup_equalizer_pane

0x31c0,	// (0x0009163a) mup_equalizer_pane_cp1_ParamLimits

0x31c0,	// (0x0009163a) mup_equalizer_pane_cp1

0x31e1,	// (0x0009165b) mup_equalizer_pane_cp2_ParamLimits

0x31e1,	// (0x0009165b) mup_equalizer_pane_cp2

0x3206,	// (0x00091680) mup_equalizer_pane_cp3_ParamLimits

0x3206,	// (0x00091680) mup_equalizer_pane_cp3

0x322f,	// (0x000916a9) mup_equalizer_pane_cp4_ParamLimits

0x322f,	// (0x000916a9) mup_equalizer_pane_cp4

0x3258,	// (0x000916d2) mup_equalizer_pane_cp5

0x3270,	// (0x000916ea) mup_equalizer_pane_cp6

0x3288,	// (0x00091702) mup_equalizer_pane_cp7

0xc823,	// (0x0009ac9d) bg_popup_call_poc_act_pane_g9

0xc82b,	// (0x0009aca5) bg_popup_call_poc_act_pane_g10

0xc833,	// (0x0009acad) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0ce,	// (0x00098548) mup_scale_pane

0xa22e,	// (0x000986a8) mup_scale_pane_g1

0xb67a,	// (0x00099af4) mup_scale_pane_g2

0x0006,

0xf456,	// (0x0009d8d0) mup_scale_pane_g

0xb69e,	// (0x00099b18) msg_data_pane

0xb6a6,	// (0x00099b20) scroll_pane_cp017

0xfc1d,	// (0x0008e097) bg_list_pane_cp04_ParamLimits

0xfc1d,	// (0x0008e097) bg_list_pane_cp04

0xb6ae,	// (0x00099b28) msg_data_pane_g1

0x32ba,	// (0x00091734) msg_data_pane_g2

0x32c4,	// (0x0009173e) msg_data_pane_g3

0x32ce,	// (0x00091748) msg_data_pane_g4

0x32d6,	// (0x00091750) msg_data_pane_g5

0x32de,	// (0x00091758) msg_data_pane_g6

0x32e6,	// (0x00091760) msg_data_pane_g7

0x0006,

0xf465,	// (0x0009d8df) msg_data_pane_g

0xfc3d,	// (0x0008e0b7) msg_text_pane_ParamLimits

0xfc3d,	// (0x0008e0b7) msg_text_pane

0x32ee,	// (0x00091768) qrid_highlight_pane_cp011_ParamLimits

0x32ee,	// (0x00091768) qrid_highlight_pane_cp011

0x9e73,	// (0x000982ed) msg_body_pane

0x9e73,	// (0x000982ed) msg_header_pane

0xb6bf,	// (0x00099b39) input_focus_pane_cp07

0x3304,	// (0x0009177e) msg_header_pane_t1_ParamLimits

0x3304,	// (0x0009177e) msg_header_pane_t1

0x3316,	// (0x00091790) msg_header_pane_t2_ParamLimits

0x3316,	// (0x00091790) msg_header_pane_t2

0x0001,

0xf479,	// (0x0009d8f3) msg_header_pane_t_ParamLimits

0xf479,	// (0x0009d8f3) msg_header_pane_t

0xb6d4,	// (0x00099b4e) msg_body_pane_g1

0x3328,	// (0x000917a2) msg_body_pane_t1_ParamLimits

0x3328,	// (0x000917a2) msg_body_pane_t1

0x3359,	// (0x000917d3) msg_body_pane_t2_ParamLimits

0x3359,	// (0x000917d3) msg_body_pane_t2

0x336b,	// (0x000917e5) msg_body_pane_t3_ParamLimits

0x336b,	// (0x000917e5) msg_body_pane_t3

0x0002,

0xf47e,	// (0x0009d8f8) msg_body_pane_t_ParamLimits

0xf47e,	// (0x0009d8f8) msg_body_pane_t

0x33b7,	// (0x00091831) main_viewer_pane_g1_ParamLimits

0x33b7,	// (0x00091831) main_viewer_pane_g1

0x33c5,	// (0x0009183f) main_viewer_pane_g2_ParamLimits

0x33c5,	// (0x0009183f) main_viewer_pane_g2

0x33d3,	// (0x0009184d) main_viewer_pane_g3_ParamLimits

0x33d3,	// (0x0009184d) main_viewer_pane_g3

0x33e2,	// (0x0009185c) main_viewer_pane_g4_ParamLimits

0x33e2,	// (0x0009185c) main_viewer_pane_g4

0xa787,	// (0x00098c01) main_viewer_pane_g5_ParamLimits

0xa787,	// (0x00098c01) main_viewer_pane_g5

0xa787,	// (0x00098c01) main_viewer_pane_g7_ParamLimits

0xa787,	// (0x00098c01) main_viewer_pane_g7

0xa799,	// (0x00098c13) main_viewer_pane_g8_ParamLimits

0xa799,	// (0x00098c13) main_viewer_pane_g8

0x0007,

0xf48e,	// (0x0009d908) main_viewer_pane_g_ParamLimits

0xf48e,	// (0x0009d908) main_viewer_pane_g

0xb6dc,	// (0x00099b56) viewer_content_pane_ParamLimits

0xb6dc,	// (0x00099b56) viewer_content_pane

0x3420,	// (0x0009189a) main_postcard_pane_g1_ParamLimits

0x3420,	// (0x0009189a) main_postcard_pane_g1

0x3436,	// (0x000918b0) main_postcard_pane_g2_ParamLimits

0x3436,	// (0x000918b0) main_postcard_pane_g2

0x344c,	// (0x000918c6) main_postcard_pane_g3_ParamLimits

0x344c,	// (0x000918c6) main_postcard_pane_g3

0x0005,

0xf49f,	// (0x0009d919) main_postcard_pane_g_ParamLimits

0xf49f,	// (0x0009d919) main_postcard_pane_g

0x3463,	// (0x000918dd) main_postcard_pane_g4

0xca1c,	// (0x0009ae96) smil_status_volume_pane_g2

0x34a6,	// (0x00091920) postcard_pane_ParamLimits

0x34a6,	// (0x00091920) postcard_pane

0xb6ea,	// (0x00099b64) postcard_pane_g1_ParamLimits

0xb6ea,	// (0x00099b64) postcard_pane_g1

0x34f6,	// (0x00091970) postcard_pane_g2_ParamLimits

0x34f6,	// (0x00091970) postcard_pane_g2

0x3502,	// (0x0009197c) postcard_pane_g3_ParamLimits

0x3502,	// (0x0009197c) postcard_pane_g3

0xb6f8,	// (0x00099b72) postcard_pane_g4_ParamLimits

0xb6f8,	// (0x00099b72) postcard_pane_g4

0x350e,	// (0x00091988) postcard_pane_g5_ParamLimits

0x350e,	// (0x00091988) postcard_pane_g5

0x3523,	// (0x0009199d) postcard_pane_g6_ParamLimits

0x3523,	// (0x0009199d) postcard_pane_g6

0xb6ea,	// (0x00099b64) postcard_pane_g7_ParamLimits

0xb6ea,	// (0x00099b64) postcard_pane_g7

0x0006,

0xf4ac,	// (0x0009d926) postcard_pane_g_ParamLimits

0xf4ac,	// (0x0009d926) postcard_pane_g

0x353b,	// (0x000919b5) main_mp2_pane_g1_ParamLimits

0x353b,	// (0x000919b5) main_mp2_pane_g1

0x3549,	// (0x000919c3) main_mp2_pane_g2_ParamLimits

0x3549,	// (0x000919c3) main_mp2_pane_g2

0x3555,	// (0x000919cf) main_mp2_pane_g3_ParamLimits

0x3555,	// (0x000919cf) main_mp2_pane_g3

0x0002,

0xf4bb,	// (0x0009d935) main_mp2_pane_g_ParamLimits

0xf4bb,	// (0x0009d935) main_mp2_pane_g

0x3561,	// (0x000919db) main_mp2_pane_t1_ParamLimits

0x3561,	// (0x000919db) main_mp2_pane_t1

0x3578,	// (0x000919f2) main_mp2_pane_t2_ParamLimits

0x3578,	// (0x000919f2) main_mp2_pane_t2

0x358c,	// (0x00091a06) main_mp2_pane_t3_ParamLimits

0x358c,	// (0x00091a06) main_mp2_pane_t3

0x0002,

0xf4c2,	// (0x0009d93c) main_mp2_pane_t_ParamLimits

0xf4c2,	// (0x0009d93c) main_mp2_pane_t

0xb706,	// (0x00099b80) pec_content_pane_ParamLimits

0xb706,	// (0x00099b80) pec_content_pane

0xa589,	// (0x00098a03) scroll_pane_cp015

0xb718,	// (0x00099b92) pec_attribute_pane_ParamLimits

0xb718,	// (0x00099b92) pec_attribute_pane

0x359e,	// (0x00091a18) pec_content_pane_g1_ParamLimits

0x359e,	// (0x00091a18) pec_content_pane_g1

0xb728,	// (0x00099ba2) pec_content_pane_t1_ParamLimits

0xb728,	// (0x00099ba2) pec_content_pane_t1

0xb73a,	// (0x00099bb4) pec_content_pane_t2_ParamLimits

0xb73a,	// (0x00099bb4) pec_content_pane_t2

0x0001,

0xf4c9,	// (0x0009d943) pec_content_pane_t_ParamLimits

0xf4c9,	// (0x0009d943) pec_content_pane_t

0x35aa,	// (0x00091a24) list_single_graphic_pane_cp01_ParamLimits

0x35aa,	// (0x00091a24) list_single_graphic_pane_cp01

0xa0ce,	// (0x00098548) bg_popup_sub_pane_cp04

0xb74c,	// (0x00099bc6) popup_mup_playback_window_g1

0xb758,	// (0x00099bd2) popup_mup_playback_window_t1

0xb76d,	// (0x00099be7) popup_mup_playback_window_t2

0x0001,

0xf4ce,	// (0x0009d948) popup_mup_playback_window_t

0xb7a4,	// (0x00099c1e) main_image_pane_g1_ParamLimits

0xb7a4,	// (0x00099c1e) main_image_pane_g1

0xb7e7,	// (0x00099c61) scroll_pane_cp018_ParamLimits

0xb7e7,	// (0x00099c61) scroll_pane_cp018

0xb7ff,	// (0x00099c79) scroll_pane_cp016_ParamLimits

0xb7ff,	// (0x00099c79) scroll_pane_cp016

0x367c,	// (0x00091af6) smil2_image_pane_ParamLimits

0x367c,	// (0x00091af6) smil2_image_pane

0x36b2,	// (0x00091b2c) smil2_root_pane_ParamLimits

0x36b2,	// (0x00091b2c) smil2_root_pane

0x36ea,	// (0x00091b64) smil2_text_pane_ParamLimits

0x36ea,	// (0x00091b64) smil2_text_pane

0x9e73,	// (0x000982ed) bg_list_pane_cp06

0xb83b,	// (0x00099cb5) grid_radio_pane

0x9e73,	// (0x000982ed) bg_popup_window_pane_cp06

0xb845,	// (0x00099cbf) main_fmradio_pane_t1

0xb1fb,	// (0x00099675) heading_pane_cp04

0xb853,	// (0x00099ccd) main_fmradio_pane_t2

0xc83b,	// (0x0009acb5) popup_cale_lunar_info_window_g1

0xb861,	// (0x00099cdb) main_fmradio_pane_t3

0xc843,	// (0x0009acbd) popup_cale_lunar_info_window_g2

0xb871,	// (0x00099ceb) main_fmradio_pane_t4

0x0001,

0xb87f,	// (0x00099cf9) main_fmradio_pane_t5

0x0004,

0xf5a9,	// (0x0009da23) popup_cale_lunar_info_window_g

0xf4e3,	// (0x0009d95d) main_fmradio_pane_t

0xb88d,	// (0x00099d07) wait_bar_pane_cp03

0xb895,	// (0x00099d0f) cell_fmradio_pane_ParamLimits

0xb895,	// (0x00099d0f) cell_fmradio_pane

0xb6ea,	// (0x00099b64) cell_fmradio_pane_g1_ParamLimits

0xb6ea,	// (0x00099b64) cell_fmradio_pane_g1

0x9e73,	// (0x000982ed) grid_highlight_pane_cp011

0xb8aa,	// (0x00099d24) poc_content_pane_ParamLimits

0xb8aa,	// (0x00099d24) poc_content_pane

0xb8bc,	// (0x00099d36) scroll_pane_cp019

0x377a,	// (0x00091bf4) popup_call_poc_act_window_ParamLimits

0x377a,	// (0x00091bf4) popup_call_poc_act_window

0x379e,	// (0x00091c18) popup_call_poc_inact_window_ParamLimits

0x379e,	// (0x00091c18) popup_call_poc_inact_window

0xf580,	// (0x0009d9fa) bg_popup_call_poc_act_pane_g

0xc7b3,	// (0x0009ac2d) bg_popup_call_poc_inact_pane_g1

0xc7bb,	// (0x0009ac35) bg_popup_call_poc_inact_pane_g2

0xb8c4,	// (0x00099d3e) popup_call_poc_act_window_g2

0xc7c3,	// (0x0009ac3d) bg_popup_call_poc_inact_pane_g3

0xc7cb,	// (0x0009ac45) bg_popup_call_poc_inact_pane_g4

0xc7d3,	// (0x0009ac4d) bg_popup_call_poc_inact_pane_g5

0xb8cc,	// (0x00099d46) popup_call_poc_act_window_t1_ParamLimits

0xb8cc,	// (0x00099d46) popup_call_poc_act_window_t1

0xb8f4,	// (0x00099d6e) popup_call_poc_act_window_t2_ParamLimits

0xb8f4,	// (0x00099d6e) popup_call_poc_act_window_t2

0xb91c,	// (0x00099d96) popup_call_poc_act_window_t3_ParamLimits

0xb91c,	// (0x00099d96) popup_call_poc_act_window_t3

0xb944,	// (0x00099dbe) popup_call_poc_act_window_t4_ParamLimits

0xb944,	// (0x00099dbe) popup_call_poc_act_window_t4

0x0003,

0xf4ee,	// (0x0009d968) popup_call_poc_act_window_t_ParamLimits

0xf4ee,	// (0x0009d968) popup_call_poc_act_window_t

0xc7db,	// (0x0009ac55) bg_popup_call_poc_inact_pane_g6

0xc7e3,	// (0x0009ac5d) bg_popup_call_poc_inact_pane_g7

0xc7eb,	// (0x0009ac65) bg_popup_call_poc_inact_pane_g8

0xb956,	// (0x00099dd0) popup_call_poc_inact_window_g2

0xc7f3,	// (0x0009ac6d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf56d,	// (0x0009d9e7) bg_popup_call_poc_inact_pane_g

0xb95e,	// (0x00099dd8) popup_call_poc_inact_window_t1_ParamLimits

0xb95e,	// (0x00099dd8) popup_call_poc_inact_window_t1

0xb973,	// (0x00099ded) popup_call_poc_inact_window_t2_ParamLimits

0xb973,	// (0x00099ded) popup_call_poc_inact_window_t2

0xb988,	// (0x00099e02) popup_call_poc_inact_window_t3_ParamLimits

0xb988,	// (0x00099e02) popup_call_poc_inact_window_t3

0x0002,

0xf4f7,	// (0x0009d971) popup_call_poc_inact_window_t_ParamLimits

0xf4f7,	// (0x0009d971) popup_call_poc_inact_window_t

0xc97c,	// (0x0009adf6) context_pane_ParamLimits

0x4037,	// (0x000924b1) signal_pane_ParamLimits

0xa3d2,	// (0x0009884c) main_call2_pane

0xa7e2,	// (0x00098c5c) popup_phob_thumbnail2_window_ParamLimits

0xa7e2,	// (0x00098c5c) popup_phob_thumbnail2_window

0xa76f,	// (0x00098be9) aid_hotspot_pointer_arrow_pane

0xa777,	// (0x00098bf1) aid_hotspot_pointer_hand_pane

0x3b09,	// (0x00091f83) phob_pre_status_pane_g5

0x1618,	// (0x0008fa92) cams_zoom_pane_ParamLimits

0x1627,	// (0x0008faa1) image_vga_pane_ParamLimits

0x1641,	// (0x0008fabb) main_camera_pane_g1_ParamLimits

0x1653,	// (0x0008facd) main_camera_pane_g2_ParamLimits

0x1663,	// (0x0008fadd) main_camera_pane_g3_ParamLimits

0x1677,	// (0x0008faf1) main_camera_pane_g4_ParamLimits

0x168b,	// (0x0008fb05) main_camera_pane_g5_ParamLimits

0x169f,	// (0x0008fb19) main_camera_pane_g6_ParamLimits

0x16b3,	// (0x0008fb2d) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0009d669) main_camera_pane_g_ParamLimits

0x16c7,	// (0x0008fb41) main_camera_pane_t1_ParamLimits

0x16dd,	// (0x0008fb57) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0009d67a) main_camera_pane_t_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_preview_window_pane_cp01

0xb99d,	// (0x00099e17) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99d,	// (0x00099e17) popup_phob_thumbnail2_window_g1

0x9e73,	// (0x000982ed) call2_cli_visual_pane

0x37d2,	// (0x00091c4c) popup_call2_audio_conf_window_ParamLimits

0x37d2,	// (0x00091c4c) popup_call2_audio_conf_window

0x37fa,	// (0x00091c74) popup_call2_audio_first_window_ParamLimits

0x37fa,	// (0x00091c74) popup_call2_audio_first_window

0x3890,	// (0x00091d0a) popup_call2_audio_in_window_ParamLimits

0x3890,	// (0x00091d0a) popup_call2_audio_in_window

0x38dc,	// (0x00091d56) popup_call2_audio_out_window_ParamLimits

0x38dc,	// (0x00091d56) popup_call2_audio_out_window

0x394e,	// (0x00091dc8) popup_call2_audio_second_window_ParamLimits

0x394e,	// (0x00091dc8) popup_call2_audio_second_window

0x39b4,	// (0x00091e2e) popup_call2_audio_wait_window_ParamLimits

0x39b4,	// (0x00091e2e) popup_call2_audio_wait_window

0x9e73,	// (0x000982ed) bg_popup_call2_act_pane_cp03

0xa0b0,	// (0x0009852a) list_conf_pane_cp

0xb9a9,	// (0x00099e23) popup_call2_audio_conf_window_t1

0xb9b7,	// (0x00099e31) list_single_graphic_popup_conf2_pane_ParamLimits

0xb9b7,	// (0x00099e31) list_single_graphic_popup_conf2_pane

0xb26a,	// (0x000996e4) list_highlight_pane_cp04

0xb9ca,	// (0x00099e44) list_single_graphic_popup_conf2_pane_g1

0xb27b,	// (0x000996f5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4fe,	// (0x0009d978) list_single_graphic_popup_conf2_pane_g

0xb9d4,	// (0x00099e4e) list_single_graphic_popup_conf2_pane_t1

0xb9e2,	// (0x00099e5c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9e2,	// (0x00099e5c) bg_popup_call2_act_pane_cp01

0xba6c,	// (0x00099ee6) call_type_pane_cp05_ParamLimits

0xba6c,	// (0x00099ee6) call_type_pane_cp05

0xbac0,	// (0x00099f3a) popup_call2_audio_second_window_g1_ParamLimits

0xbac0,	// (0x00099f3a) popup_call2_audio_second_window_g1

0xbb14,	// (0x00099f8e) popup_call2_audio_second_window_g2_ParamLimits

0xbb14,	// (0x00099f8e) popup_call2_audio_second_window_g2

0x0002,

0xf503,	// (0x0009d97d) popup_call2_audio_second_window_g_ParamLimits

0xf503,	// (0x0009d97d) popup_call2_audio_second_window_g

0xbb79,	// (0x00099ff3) popup_call2_audio_second_window_t1_ParamLimits

0xbb79,	// (0x00099ff3) popup_call2_audio_second_window_t1

0xbc34,	// (0x0009a0ae) popup_call2_audio_second_window_t2_ParamLimits

0xbc34,	// (0x0009a0ae) popup_call2_audio_second_window_t2

0xbc87,	// (0x0009a101) popup_call2_audio_second_window_t3_ParamLimits

0xbc87,	// (0x0009a101) popup_call2_audio_second_window_t3

0x0003,

0xf50a,	// (0x0009d984) popup_call2_audio_second_window_t_ParamLimits

0xf50a,	// (0x0009d984) popup_call2_audio_second_window_t

0x9e73,	// (0x000982ed) bg_popup_call2_in_pane_cp02

0x9e7d,	// (0x000982f7) call_type_pane_cp04

0x9e85,	// (0x000982ff) popup_call2_audio_wait_window_g1

0x9e8d,	// (0x00098307) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009d558) popup_call2_audio_wait_window_g

0x9e95,	// (0x0009830f) popup_call2_audio_wait_window_t3

0xbd7a,	// (0x0009a1f4) bg_popup_call2_act_pane_ParamLimits

0xbd7a,	// (0x0009a1f4) bg_popup_call2_act_pane

0xbe3a,	// (0x0009a2b4) call_type_pane_cp03_ParamLimits

0xbe3a,	// (0x0009a2b4) call_type_pane_cp03

0xbe9e,	// (0x0009a318) popup_call2_audio_first_window_g1_ParamLimits

0xbe9e,	// (0x0009a318) popup_call2_audio_first_window_g1

0xbf0e,	// (0x0009a388) popup_call2_audio_first_window_g2_ParamLimits

0xbf0e,	// (0x0009a388) popup_call2_audio_first_window_g2

0xb5fc,	// (0x00099a76) popup_call2_audio_first_window_g3_ParamLimits

0xb5fc,	// (0x00099a76) popup_call2_audio_first_window_g3

0x0004,

0xf513,	// (0x0009d98d) popup_call2_audio_first_window_g_ParamLimits

0xf513,	// (0x0009d98d) popup_call2_audio_first_window_g

0xbfec,	// (0x0009a466) popup_call2_audio_first_window_t1_ParamLimits

0xbfec,	// (0x0009a466) popup_call2_audio_first_window_t1

0xc0ef,	// (0x0009a569) popup_call2_audio_first_window_t4_ParamLimits

0xc0ef,	// (0x0009a569) popup_call2_audio_first_window_t4

0xc1e4,	// (0x0009a65e) popup_call2_audio_first_window_t5_ParamLimits

0xc1e4,	// (0x0009a65e) popup_call2_audio_first_window_t5

0x0003,

0xf51e,	// (0x0009d998) popup_call2_audio_first_window_t_ParamLimits

0xf51e,	// (0x0009d998) popup_call2_audio_first_window_t

0xa0c6,	// (0x00098540) bg_popup_call2_act_pane_g1

0xc84d,	// (0x0009acc7) popup_cale_lunar_info_window_t1

0xc85b,	// (0x0009acd5) popup_cale_lunar_info_window_t2

0xc869,	// (0x0009ace3) popup_cale_lunar_info_window_t3

0x9e73,	// (0x000982ed) bg_popup_call2_bubble_pane

0xc2e5,	// (0x0009a75f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2e5,	// (0x0009a75f) bg_popup_call2_in_pane_cp01

0x9b4f,	// (0x00097fc9) call_type_pane_cp02

0xc32d,	// (0x0009a7a7) popup_call2_audio_out_window_g1_ParamLimits

0xc32d,	// (0x0009a7a7) popup_call2_audio_out_window_g1

0xc359,	// (0x0009a7d3) popup_call2_audio_out_window_g2_ParamLimits

0xc359,	// (0x0009a7d3) popup_call2_audio_out_window_g2

0xc381,	// (0x0009a7fb) popup_call2_audio_out_window_g3_ParamLimits

0xc381,	// (0x0009a7fb) popup_call2_audio_out_window_g3

0x0003,

0xf527,	// (0x0009d9a1) popup_call2_audio_out_window_g_ParamLimits

0xf527,	// (0x0009d9a1) popup_call2_audio_out_window_g

0xc3bc,	// (0x0009a836) popup_call2_audio_out_window_t1_ParamLimits

0xc3bc,	// (0x0009a836) popup_call2_audio_out_window_t1

0xc41b,	// (0x0009a895) popup_call2_audio_out_window_t2_ParamLimits

0xc41b,	// (0x0009a895) popup_call2_audio_out_window_t2

0xc46f,	// (0x0009a8e9) popup_call2_audio_out_window_t3_ParamLimits

0xc46f,	// (0x0009a8e9) popup_call2_audio_out_window_t3

0xc485,	// (0x0009a8ff) popup_call2_audio_out_window_t4_ParamLimits

0xc485,	// (0x0009a8ff) popup_call2_audio_out_window_t4

0xc49b,	// (0x0009a915) popup_call2_audio_out_window_t5_ParamLimits

0xc49b,	// (0x0009a915) popup_call2_audio_out_window_t5

0x0005,

0xf530,	// (0x0009d9aa) popup_call2_audio_out_window_t_ParamLimits

0xf530,	// (0x0009d9aa) popup_call2_audio_out_window_t

0xc4ff,	// (0x0009a979) bg_popup_call2_in_pane_ParamLimits

0xc4ff,	// (0x0009a979) bg_popup_call2_in_pane

0xc55b,	// (0x0009a9d5) popup_call2_audio_in_window_g1_ParamLimits

0xc55b,	// (0x0009a9d5) popup_call2_audio_in_window_g1

0xc593,	// (0x0009aa0d) popup_call2_audio_in_window_g2_ParamLimits

0xc593,	// (0x0009aa0d) popup_call2_audio_in_window_g2

0xc5cb,	// (0x0009aa45) popup_call2_audio_in_window_g3_ParamLimits

0xc5cb,	// (0x0009aa45) popup_call2_audio_in_window_g3

0x0003,

0xf53d,	// (0x0009d9b7) popup_call2_audio_in_window_g_ParamLimits

0xf53d,	// (0x0009d9b7) popup_call2_audio_in_window_g

0xc623,	// (0x0009aa9d) popup_call2_audio_in_window_t1_ParamLimits

0xc623,	// (0x0009aa9d) popup_call2_audio_in_window_t1

0xc6a3,	// (0x0009ab1d) popup_call2_audio_in_window_t2_ParamLimits

0xc6a3,	// (0x0009ab1d) popup_call2_audio_in_window_t2

0xc723,	// (0x0009ab9d) popup_call2_audio_in_window_t3_ParamLimits

0xc723,	// (0x0009ab9d) popup_call2_audio_in_window_t3

0xc73d,	// (0x0009abb7) popup_call2_audio_in_window_t4_ParamLimits

0xc73d,	// (0x0009abb7) popup_call2_audio_in_window_t4

0xc74f,	// (0x0009abc9) popup_call2_audio_in_window_t5_ParamLimits

0xc74f,	// (0x0009abc9) popup_call2_audio_in_window_t5

0xc761,	// (0x0009abdb) popup_call2_audio_in_window_t6_ParamLimits

0xc761,	// (0x0009abdb) popup_call2_audio_in_window_t6

0x0005,

0xf546,	// (0x0009d9c0) popup_call2_audio_in_window_t_ParamLimits

0xf546,	// (0x0009d9c0) popup_call2_audio_in_window_t

0xa0c6,	// (0x00098540) bg_popup_call2_in_pane_g1

0xc877,	// (0x0009acf1) popup_cale_lunar_info_window_t4

0x0003,

0xf5ae,	// (0x0009da28) popup_cale_lunar_info_window_t

0xa0ce,	// (0x00098548) bg_popup_call2_rect_pane_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_call2_rect_pane

0x9e73,	// (0x000982ed) call2_cli_visual_graphic_pane

0x9e73,	// (0x000982ed) call2_cli_visual_text_pane

0xa809,	// (0x00098c83) smil_status_volume_pane_g3

0x0002,

0xa22e,	// (0x000986a8) call2_cli_visual_graphic_pane_g1

0xa22e,	// (0x000986a8) call2_cli_visual_graphic_pane_g2

0xa22e,	// (0x000986a8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf553,	// (0x0009d9cd) call2_cli_visual_graphic_pane_g

0xc773,	// (0x0009abed) bg_popup_call2_rect_pane_g1

0xa2c3,	// (0x0009873d) bg_popup_call2_rect_pane_g2

0xc77b,	// (0x0009abf5) bg_popup_call2_rect_pane_g3

0xc783,	// (0x0009abfd) bg_popup_call2_rect_pane_g4

0xc78b,	// (0x0009ac05) bg_popup_call2_rect_pane_g5

0xc793,	// (0x0009ac0d) bg_popup_call2_rect_pane_g6

0xc79b,	// (0x0009ac15) bg_popup_call2_rect_pane_g7

0xc7a3,	// (0x0009ac1d) bg_popup_call2_rect_pane_g8

0xc7ab,	// (0x0009ac25) bg_popup_call2_rect_pane_g9

0x0008,

0xf55a,	// (0x0009d9d4) bg_popup_call2_rect_pane_g

0xc7b3,	// (0x0009ac2d) bg_popup_call2_bubble_pane_g1

0xc7bb,	// (0x0009ac35) bg_popup_call2_bubble_pane_g2

0xc7c3,	// (0x0009ac3d) bg_popup_call2_bubble_pane_g3

0xc7cb,	// (0x0009ac45) bg_popup_call2_bubble_pane_g4

0xc7d3,	// (0x0009ac4d) bg_popup_call2_bubble_pane_g5

0xc7db,	// (0x0009ac55) bg_popup_call2_bubble_pane_g6

0xc7e3,	// (0x0009ac5d) bg_popup_call2_bubble_pane_g7

0xc7eb,	// (0x0009ac65) bg_popup_call2_bubble_pane_g8

0xc7f3,	// (0x0009ac6d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf56d,	// (0x0009d9e7) bg_popup_call2_bubble_pane_g

0x0fd3,	// (0x0008f44d) aid_cale_week_size_cell_pane

0x16f7,	// (0x0008fb71) aid_cams_cif_uncrop_pane_ParamLimits

0x16f7,	// (0x0008fb71) aid_cams_cif_uncrop_pane

0x18b0,	// (0x0008fd2a) aid_cams_size_cell_ParamLimits

0x18b0,	// (0x0008fd2a) aid_cams_size_cell

0x18c4,	// (0x0008fd3e) grid_cams_pane_ParamLimits

0x18de,	// (0x0008fd58) linegrid_cams_pane_ParamLimits

0x19d4,	// (0x0008fe4e) call_video_pane_t1

0x19ee,	// (0x0008fe68) call_video_pane_t2

0x0001,

0xf253,	// (0x0009d6cd) call_video_pane_t

0x1e3b,	// (0x000902b5) aid_cale_month_size_cell_pane_ParamLimits

0x1e3b,	// (0x000902b5) aid_cale_month_size_cell_pane

0xf5f7,	// (0x0009da71) smil_status_volume_pane_g

0xa816,	// (0x00098c90) volume_smil_pane_ParamLimits

0x99d8,	// (0x00097e52) aid_popup2_width_pane

0x0f34,	// (0x0008f3ae) cell_qdial_pane_g4_ParamLimits

0x0f34,	// (0x0008f3ae) cell_qdial_pane_g4

0x2d7b,	// (0x000911f5) aid_blid_cardinal_pane_ParamLimits

0x2d8b,	// (0x00091205) aid_blid_destination_pane_ParamLimits

0x2d8b,	// (0x00091205) aid_blid_destination_pane

0xa0ce,	// (0x00098548) bg_popup_call_poc_act_pane_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_call_poc_act_pane

0xa0ce,	// (0x00098548) bg_popup_call_poc_inact_pane_ParamLimits

0xa0ce,	// (0x00098548) bg_popup_call_poc_inact_pane

0xc7fb,	// (0x0009ac75) bg_popup_call_poc_act_pane_g1

0xc803,	// (0x0009ac7d) bg_popup_call_poc_act_pane_g2

0xc80b,	// (0x0009ac85) bg_popup_call_poc_act_pane_g3

0xc7cb,	// (0x0009ac45) bg_popup_call_poc_act_pane_g4

0xc7d3,	// (0x0009ac4d) bg_popup_call_poc_act_pane_g5

0xc813,	// (0x0009ac8d) bg_popup_call_poc_act_pane_g6

0xc7e3,	// (0x0009ac5d) bg_popup_call_poc_act_pane_g7

0xc81b,	// (0x0009ac95) bg_popup_call_poc_act_pane_g8

0x9e73,	// (0x000982ed) main_usb_pane

0xa7b9,	// (0x00098c33) popup_cale_lunar_info_window

0x1cbb,	// (0x00090135) im_reading_pane_t1_ParamLimits

0xa4e1,	// (0x0009895b) list_im_pane_ParamLimits

0xa4f2,	// (0x0009896c) scroll_pane_cp07_ParamLimits

0x9e73,	// (0x000982ed) grid_highlight_pane_cp012

0xa0ce,	// (0x00098548) mup_scale_pane_ParamLimits

0xb6ea,	// (0x00099b64) main_usb_pane_g1_ParamLimits

0xb6ea,	// (0x00099b64) main_usb_pane_g1

0x3a15,	// (0x00091e8f) main_usb_pane_g2_ParamLimits

0x3a15,	// (0x00091e8f) main_usb_pane_g2

0x0001,

0xf597,	// (0x0009da11) main_usb_pane_g_ParamLimits

0xf597,	// (0x0009da11) main_usb_pane_g

0x3a2b,	// (0x00091ea5) main_usb_pane_t1_ParamLimits

0x3a2b,	// (0x00091ea5) main_usb_pane_t1

0x3a3d,	// (0x00091eb7) main_usb_pane_t2_ParamLimits

0x3a3d,	// (0x00091eb7) main_usb_pane_t2

0x3a4f,	// (0x00091ec9) main_usb_pane_t3_ParamLimits

0x3a4f,	// (0x00091ec9) main_usb_pane_t3

0x3a61,	// (0x00091edb) main_usb_pane_t4_ParamLimits

0x3a61,	// (0x00091edb) main_usb_pane_t4

0x3a76,	// (0x00091ef0) main_usb_pane_t5_ParamLimits

0x3a76,	// (0x00091ef0) main_usb_pane_t5

0x3a8b,	// (0x00091f05) main_usb_pane_t6_ParamLimits

0x3a8b,	// (0x00091f05) main_usb_pane_t6

0x0005,

0xf59c,	// (0x0009da16) main_usb_pane_t_ParamLimits

0x2d1a,	// (0x00091194) aid_text_placing

0x2d25,	// (0x0009119f) main_location2_pane_t1_ParamLimits

0x2d3b,	// (0x000911b5) main_location2_pane_t2_ParamLimits

0x2d51,	// (0x000911cb) main_location2_pane_t3_ParamLimits

0x2d67,	// (0x000911e1) main_location2_pane_t4_ParamLimits

0x2d67,	// (0x000911e1) main_location2_pane_t4

0xf3bb,	// (0x0009d835) main_location2_pane_t_ParamLimits

0xa10a,	// (0x00098584) find_pinb_pane_g2_ParamLimits

0xa10a,	// (0x00098584) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0009d57e) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0009d57e) find_pinb_pane_g

0xa116,	// (0x00098590) find_pinb_pane_t1_ParamLimits

0xa128,	// (0x000985a2) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0009d583) find_pinb_pane_t_ParamLimits

0x9e73,	// (0x000982ed) main_call3_pane

0x2440,	// (0x000908ba) cale_month_day_heading_pane_t1_ParamLimits

0x24c6,	// (0x00090940) cale_month_day_heading_pane_t2_ParamLimits

0x253f,	// (0x000909b9) cale_month_day_heading_pane_t3_ParamLimits

0x25b8,	// (0x00090a32) cale_month_day_heading_pane_t4_ParamLimits

0x2639,	// (0x00090ab3) cale_month_day_heading_pane_t5_ParamLimits

0x26c2,	// (0x00090b3c) cale_month_day_heading_pane_t6_ParamLimits

0x2753,	// (0x00090bcd) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0009d705) cale_month_day_heading_pane_t_ParamLimits

0xae58,	// (0x000992d2) smil_status_volume_pane

0x34ca,	// (0x00091944) postcard_address_pane_ParamLimits

0x34ca,	// (0x00091944) postcard_address_pane

0x34e0,	// (0x0009195a) postcard_message_pane_ParamLimits

0x34e0,	// (0x0009195a) postcard_message_pane

0x39ee,	// (0x00091e68) call2_cli_visual_pane_t1_ParamLimits

0x39ee,	// (0x00091e68) call2_cli_visual_pane_t1

0x4248,	// (0x000926c2) postcard_message_pane_t1_ParamLimits

0x4248,	// (0x000926c2) postcard_message_pane_t1

0xca2f,	// (0x0009aea9) postcard_address_pane_t1_ParamLimits

0xca2f,	// (0x0009aea9) postcard_address_pane_t1

0x4234,	// (0x000926ae) popup_call3_audio_in_window_ParamLimits

0x4234,	// (0x000926ae) popup_call3_audio_in_window

0x40b9,	// (0x00092533) bg_popup_call3_in_pane_ParamLimits

0x40b9,	// (0x00092533) bg_popup_call3_in_pane

0x4135,	// (0x000925af) popup_call3_audio_in_window_g1_ParamLimits

0x4135,	// (0x000925af) popup_call3_audio_in_window_g1

0x4155,	// (0x000925cf) popup_call3_audio_in_window_g2_ParamLimits

0x4155,	// (0x000925cf) popup_call3_audio_in_window_g2

0x4175,	// (0x000925ef) popup_call3_audio_in_window_g3_ParamLimits

0x4175,	// (0x000925ef) popup_call3_audio_in_window_g3

0x0003,

0xf5fe,	// (0x0009da78) popup_call3_audio_in_window_g_ParamLimits

0xf5fe,	// (0x0009da78) popup_call3_audio_in_window_g

0x41a6,	// (0x00092620) popup_call3_audio_in_window_t1_ParamLimits

0x41a6,	// (0x00092620) popup_call3_audio_in_window_t1

0x41e4,	// (0x0009265e) popup_call3_audio_in_window_t2_ParamLimits

0x41e4,	// (0x0009265e) popup_call3_audio_in_window_t2

0x4222,	// (0x0009269c) popup_call3_audio_in_window_t3_ParamLimits

0x4222,	// (0x0009269c) popup_call3_audio_in_window_t3

0x0002,

0xf607,	// (0x0009da81) popup_call3_audio_in_window_t_ParamLimits

0xf607,	// (0x0009da81) popup_call3_audio_in_window_t

0xa3d2,	// (0x0009884c) bg_popup_call3_rect_pane

0xc773,	// (0x0009abed) bg_popup_call3_rect_pane_g1

0xa2c3,	// (0x0009873d) bg_popup_call3_rect_pane_g2

0xc77b,	// (0x0009abf5) bg_popup_call3_rect_pane_g3

0xc783,	// (0x0009abfd) bg_popup_call3_rect_pane_g4

0xc78b,	// (0x0009ac05) bg_popup_call3_rect_pane_g5

0xc793,	// (0x0009ac0d) bg_popup_call3_rect_pane_g6

0xc79b,	// (0x0009ac15) bg_popup_call3_rect_pane_g7

0x308b,	// (0x00091505) mup_visualizer_osc_pane

0xb60a,	// (0x00099a84) mup_visualizer_spec_pane

0x40e9,	// (0x00092563) call3_video_qcif_pane_ParamLimits

0x40e9,	// (0x00092563) call3_video_qcif_pane

0x40fc,	// (0x00092576) call3_video_qcif_uncrop_pane_ParamLimits

0x40fc,	// (0x00092576) call3_video_qcif_uncrop_pane

0x410c,	// (0x00092586) call3_video_subqcif_pane_ParamLimits

0x410c,	// (0x00092586) call3_video_subqcif_pane

0x4122,	// (0x0009259c) call3_video_subqcif_uncrop_pane_ParamLimits

0x4122,	// (0x0009259c) call3_video_subqcif_uncrop_pane

0x4195,	// (0x0009260f) popup_call3_audio_in_window_g4_ParamLimits

0x4195,	// (0x0009260f) popup_call3_audio_in_window_g4

0x40a8,	// (0x00092522) mup_spec_half_pane

0x40b1,	// (0x0009252b) mup_spec_half_pane_cp

0xc9ef,	// (0x0009ae69) mup_osc_middle_pane

0xc9f8,	// (0x0009ae72) mup_visualizer_osc_pane_g1

0x4088,	// (0x00092502) mup_spec_bar_pane_ParamLimits

0x4088,	// (0x00092502) mup_spec_bar_pane

0xc9dc,	// (0x0009ae56) mup_spec_bar_pane_g1

0xc9e6,	// (0x0009ae60) mup_spec_bar_pane_g2

0x0001,

0xf5f2,	// (0x0009da6c) mup_spec_bar_pane_g

0x0fd3,	// (0x0008f44d) aid_cale_week_size_cell_pane_ParamLimits

0x0fed,	// (0x0008f467) bg_cale_heading_pane_ParamLimits

0x1011,	// (0x0008f48b) bg_cale_pane_cp01_ParamLimits

0x102e,	// (0x0008f4a8) cale_week_corner_pane_ParamLimits

0x104d,	// (0x0008f4c7) cale_week_day_heading_pane_ParamLimits

0x1076,	// (0x0008f4f0) cale_week_scroll_pane_g1_ParamLimits

0x1095,	// (0x0008f50f) cale_week_scroll_pane_g2_ParamLimits

0x10ad,	// (0x0008f527) cale_week_scroll_pane_g3_ParamLimits

0x10c5,	// (0x0008f53f) cale_week_scroll_pane_g4_ParamLimits

0x10dd,	// (0x0008f557) cale_week_scroll_pane_g5_ParamLimits

0x10fd,	// (0x0008f577) cale_week_scroll_pane_g6_ParamLimits

0x111d,	// (0x0008f597) cale_week_scroll_pane_g7_ParamLimits

0x1141,	// (0x0008f5bb) cale_week_scroll_pane_g8_ParamLimits

0x1165,	// (0x0008f5df) cale_week_scroll_pane_g9_ParamLimits

0x117d,	// (0x0008f5f7) cale_week_scroll_pane_g10_ParamLimits

0x1195,	// (0x0008f60f) cale_week_scroll_pane_g11_ParamLimits

0x11ad,	// (0x0008f627) cale_week_scroll_pane_g12_ParamLimits

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g13_ParamLimits

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g14_ParamLimits

0x11d1,	// (0x0008f64b) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0009d60f) cale_week_scroll_pane_g_ParamLimits

0x1219,	// (0x0008f693) cale_week_time_pane_ParamLimits

0x123d,	// (0x0008f6b7) grid_cale_week_pane_ParamLimits

0xa348,	// (0x000987c2) listscroll_cale_week_pane_t1

0xa35a,	// (0x000987d4) scroll_pane_cp08_ParamLimits

0x1eb3,	// (0x0009032d) cale_month_corner_pane_ParamLimits

0xae2e,	// (0x000992a8) cale_month_pane_t1

0x23bb,	// (0x00090835) cale_month_week_pane_ParamLimits

0x2b36,	// (0x00090fb0) popup_call_status_window_g1_ParamLimits

0x2b4a,	// (0x00090fc4) popup_call_status_window_g2_ParamLimits

0x2b5e,	// (0x00090fd8) popup_call_status_window_g3_ParamLimits

0xf342,	// (0x0009d7bc) popup_call_status_window_g_ParamLimits

0xb1eb,	// (0x00099665) aid_call2_pane

0xfc72,	// (0x0008e0ec) msg_header_pane_g1

0x34ca,	// (0x00091944) postcard_address2_pane_ParamLimits

0x34ca,	// (0x00091944) postcard_address2_pane

0x34e0,	// (0x0009195a) postcard_message2_pane_ParamLimits

0x34e0,	// (0x0009195a) postcard_message2_pane

0x4045,	// (0x000924bf) message2_row_pane_ParamLimits

0x4045,	// (0x000924bf) message2_row_pane

0xc997,	// (0x0009ae11) address2_row_pane_ParamLimits

0xc997,	// (0x0009ae11) address2_row_pane

0xc9aa,	// (0x0009ae24) postcard_message2_row_pane_g1

0xc9b2,	// (0x0009ae2c) postcard_message2_row_pane_t1

0xc9aa,	// (0x0009ae24) address2_row_pane_g1

0xc9b2,	// (0x0009ae2c) address2_row_pane_t1

0x15aa,	// (0x0008fa24) aid_size_cell_vorec

0x9e73,	// (0x000982ed) main_rss_pane

0x4068,	// (0x000924e2) rss_list_single_pane_ParamLimits

0x4068,	// (0x000924e2) rss_list_single_pane

0xc9c0,	// (0x0009ae3a) rss_list_single_pane_t1

0xc9ce,	// (0x0009ae48) rss_list_single_pane_t2

0x0001,

0xf5ed,	// (0x0009da67) rss_list_single_pane_t

0x9e73,	// (0x000982ed) main_camera2_pane

0x9e73,	// (0x000982ed) main_video2_pane

0x42b7,	// (0x00092731) cams_zoom_pane_cp2_ParamLimits

0x42b7,	// (0x00092731) cams_zoom_pane_cp2

0x42ce,	// (0x00092748) image2_vga_pane_ParamLimits

0x42ce,	// (0x00092748) image2_vga_pane

0x4316,	// (0x00092790) main_camera2_pane_g1_ParamLimits

0x4316,	// (0x00092790) main_camera2_pane_g1

0x4336,	// (0x000927b0) main_camera2_pane_g2_ParamLimits

0x4336,	// (0x000927b0) main_camera2_pane_g2

0x434d,	// (0x000927c7) main_camera2_pane_g3_ParamLimits

0x434d,	// (0x000927c7) main_camera2_pane_g3

0x4364,	// (0x000927de) main_camera2_pane_g4_ParamLimits

0x4364,	// (0x000927de) main_camera2_pane_g4

0x437b,	// (0x000927f5) main_camera2_pane_g5_ParamLimits

0x437b,	// (0x000927f5) main_camera2_pane_g5

0x4392,	// (0x0009280c) main_camera2_pane_g6_ParamLimits

0x4392,	// (0x0009280c) main_camera2_pane_g6

0x43a9,	// (0x00092823) main_camera2_pane_g7_ParamLimits

0x43a9,	// (0x00092823) main_camera2_pane_g7

0x43c0,	// (0x0009283a) main_camera2_pane_g8_ParamLimits

0x43c0,	// (0x0009283a) main_camera2_pane_g8

0x0008,

0xf60e,	// (0x0009da88) main_camera2_pane_g_ParamLimits

0xf60e,	// (0x0009da88) main_camera2_pane_g

0x43ee,	// (0x00092868) main_camera2_pane_t1_ParamLimits

0x43ee,	// (0x00092868) main_camera2_pane_t1

0x4423,	// (0x0009289d) main_camera2_pane_t2_ParamLimits

0x4423,	// (0x0009289d) main_camera2_pane_t2

0x4440,	// (0x000928ba) main_camera2_pane_t3_ParamLimits

0x4440,	// (0x000928ba) main_camera2_pane_t3

0x449e,	// (0x00092918) main_camera2_pane_t4_ParamLimits

0x449e,	// (0x00092918) main_camera2_pane_t4

0x0006,

0xf621,	// (0x0009da9b) main_camera2_pane_t_ParamLimits

0xf621,	// (0x0009da9b) main_camera2_pane_t

0x4527,	// (0x000929a1) cams_zoom_pane_cp4_ParamLimits

0x4527,	// (0x000929a1) cams_zoom_pane_cp4

0x453d,	// (0x000929b7) image2_cif_pane_ParamLimits

0x453d,	// (0x000929b7) image2_cif_pane

0x4568,	// (0x000929e2) image2_subqcif_pane_ParamLimits

0x4568,	// (0x000929e2) image2_subqcif_pane

0x4583,	// (0x000929fd) main_video2_pane_g1_ParamLimits

0x4583,	// (0x000929fd) main_video2_pane_g1

0x459d,	// (0x00092a17) main_video2_pane_g2_ParamLimits

0x459d,	// (0x00092a17) main_video2_pane_g2

0x45b3,	// (0x00092a2d) main_video2_pane_g3_ParamLimits

0x45b3,	// (0x00092a2d) main_video2_pane_g3

0x45c9,	// (0x00092a43) main_video2_pane_g4_ParamLimits

0x45c9,	// (0x00092a43) main_video2_pane_g4

0x45df,	// (0x00092a59) main_video2_pane_g5_ParamLimits

0x45df,	// (0x00092a59) main_video2_pane_g5

0x45f5,	// (0x00092a6f) main_video2_pane_g6_ParamLimits

0x45f5,	// (0x00092a6f) main_video2_pane_g6

0x0005,

0xf630,	// (0x0009daaa) main_video2_pane_g_ParamLimits

0xf630,	// (0x0009daaa) main_video2_pane_g

0x460f,	// (0x00092a89) main_video2_pane_t1_ParamLimits

0x460f,	// (0x00092a89) main_video2_pane_t1

0x4633,	// (0x00092aad) main_video2_pane_t2_ParamLimits

0x4633,	// (0x00092aad) main_video2_pane_t2

0x4683,	// (0x00092afd) main_video2_pane_t3_ParamLimits

0x4683,	// (0x00092afd) main_video2_pane_t3

0x0002,

0xf63d,	// (0x0009dab7) main_video2_pane_t_ParamLimits

0xf63d,	// (0x0009dab7) main_video2_pane_t

0x3b49,	// (0x00091fc3) call_muted_g2

0x0001,

0xf5df,	// (0x0009da59) call_muted_g

0x9e73,	// (0x000982ed) main_mup2_pane

0x46cb,	// (0x00092b45) main_mup2_pane_g1_ParamLimits

0x46cb,	// (0x00092b45) main_mup2_pane_g1

0x46d7,	// (0x00092b51) main_mup2_pane_g2_ParamLimits

0x46d7,	// (0x00092b51) main_mup2_pane_g2

0xa87f,	// (0x00098cf9) main_mup_pane_g13_cp1

0xa887,	// (0x00098d01) mup_volume_pane_cp1

0x46f5,	// (0x00092b6f) main_mup2_pane_g4_ParamLimits

0x46f5,	// (0x00092b6f) main_mup2_pane_g4

0x4707,	// (0x00092b81) main_mup2_pane_g5_ParamLimits

0x4707,	// (0x00092b81) main_mup2_pane_g5

0x4719,	// (0x00092b93) main_mup2_pane_g6_ParamLimits

0x4719,	// (0x00092b93) main_mup2_pane_g6

0x472b,	// (0x00092ba5) main_mup2_pane_g7_ParamLimits

0x472b,	// (0x00092ba5) main_mup2_pane_g7

0x0006,

0xf644,	// (0x0009dabe) main_mup2_pane_g_ParamLimits

0xf644,	// (0x0009dabe) main_mup2_pane_g

0x4743,	// (0x00092bbd) main_mup2_pane_t1_ParamLimits

0x4743,	// (0x00092bbd) main_mup2_pane_t1

0x4759,	// (0x00092bd3) main_mup2_pane_t2_ParamLimits

0x4759,	// (0x00092bd3) main_mup2_pane_t2

0x476f,	// (0x00092be9) main_mup2_pane_t3_ParamLimits

0x476f,	// (0x00092be9) main_mup2_pane_t3

0x4785,	// (0x00092bff) main_mup2_pane_t4_ParamLimits

0x4785,	// (0x00092bff) main_mup2_pane_t4

0x479d,	// (0x00092c17) main_mup2_pane_t5_ParamLimits

0x479d,	// (0x00092c17) main_mup2_pane_t5

0x47b5,	// (0x00092c2f) main_mup2_pane_t6_ParamLimits

0x47b5,	// (0x00092c2f) main_mup2_pane_t6

0x0005,

0xf653,	// (0x0009dacd) main_mup2_pane_t_ParamLimits

0xf653,	// (0x0009dacd) main_mup2_pane_t

0x47e5,	// (0x00092c5f) mup2_visualizer_pane_ParamLimits

0x47e5,	// (0x00092c5f) mup2_visualizer_pane

0x4813,	// (0x00092c8d) mup_progress_pane_cp_ParamLimits

0x4813,	// (0x00092c8d) mup_progress_pane_cp

0xa86a,	// (0x00098ce4) mup_volume_pane_cp_ParamLimits

0xa86a,	// (0x00098ce4) mup_volume_pane_cp

0x4829,	// (0x00092ca3) mup2_visualizer_pane_g1_ParamLimits

0x4829,	// (0x00092ca3) mup2_visualizer_pane_g1

0xca46,	// (0x0009aec0) mup2_visualizer_pane_g2_ParamLimits

0xca46,	// (0x0009aec0) mup2_visualizer_pane_g2

0x483e,	// (0x00092cb8) mup2_visualizer_pane_g3_ParamLimits

0x483e,	// (0x00092cb8) mup2_visualizer_pane_g3

0x0002,

0xf660,	// (0x0009dada) mup2_visualizer_pane_g_ParamLimits

0xf660,	// (0x0009dada) mup2_visualizer_pane_g

0xb833,	// (0x00099cad) aid_size_cell_fmradio

0x3cf9,	// (0x00092173) aid_height_parent_landcape

0xa570,	// (0x000989ea) wml_content_pane_cp

0xa578,	// (0x000989f2) wml_tabs_pane

0xa581,	// (0x000989fb) popup_wml_miniature_window

0xa589,	// (0x00098a03) scroll_pane_cp021

0xa59d,	// (0x00098a17) wml_content_pane_comp8

0x9e73,	// (0x000982ed) bg_popup_sub_pane_cp05

0xca64,	// (0x0009aede) popup_wml_miniature_window_g1

0xca6c,	// (0x0009aee6) wml_miniature_view_pane

0x484a,	// (0x00092cc4) aid_size_wml_view

0x4852,	// (0x00092ccc) wml_miniature_view_pane_g1

0x485b,	// (0x00092cd5) wml_miniature_view_pane_g2

0x4864,	// (0x00092cde) wml_miniature_view_pane_g3

0x486c,	// (0x00092ce6) wml_miniature_view_pane_g4

0x4874,	// (0x00092cee) wml_miniature_view_pane_g5

0x487c,	// (0x00092cf6) wml_miniature_view_pane_g6

0x4884,	// (0x00092cfe) wml_miniature_view_pane_g7

0x488c,	// (0x00092d06) wml_miniature_view_pane_g8

0x0007,

0xf667,	// (0x0009dae1) wml_miniature_view_pane_g

0xca74,	// (0x0009aeee) background_graphic_ParamLimits

0xca74,	// (0x0009aeee) background_graphic

0xca80,	// (0x0009aefa) wml_tabs_2_pane

0xca89,	// (0x0009af03) wml_tabs_3_pane_ParamLimits

0xca89,	// (0x0009af03) wml_tabs_3_pane

0xca9b,	// (0x0009af15) wml_tabs_4_pane_ParamLimits

0xca9b,	// (0x0009af15) wml_tabs_4_pane

0xcab1,	// (0x0009af2b) wml_tabs_5_pane_ParamLimits

0xcab1,	// (0x0009af2b) wml_tabs_5_pane

0xcacb,	// (0x0009af45) wml_tabs_pane_g2_ParamLimits

0xcacb,	// (0x0009af45) wml_tabs_pane_g2

0xcadf,	// (0x0009af59) wml_tabs_pane_g3_ParamLimits

0xcadf,	// (0x0009af59) wml_tabs_pane_g3

0x4894,	// (0x00092d0e) wml_tabs_2_active_pane_ParamLimits

0x4894,	// (0x00092d0e) wml_tabs_2_active_pane

0x48a8,	// (0x00092d22) wml_tabs_2_passive_pane_ParamLimits

0x48a8,	// (0x00092d22) wml_tabs_2_passive_pane

0x48bc,	// (0x00092d36) wml_tabs_3_active_pane_cp_ParamLimits

0x48bc,	// (0x00092d36) wml_tabs_3_active_pane_cp

0x48d1,	// (0x00092d4b) wml_tabs_3_passive_pane_ParamLimits

0x48d1,	// (0x00092d4b) wml_tabs_3_passive_pane

0x48e4,	// (0x00092d5e) wml_tabs_3_passive_pane_cp_ParamLimits

0x48e4,	// (0x00092d5e) wml_tabs_3_passive_pane_cp

0x48fb,	// (0x00092d75) tabs_4_active_pane

0x4903,	// (0x00092d7d) tabs_4_passive_pane

0x490d,	// (0x00092d87) tabs_4_passive_pane_cp

0x4915,	// (0x00092d8f) tabs_4_passive_pane_cp2

0x3a0d,	// (0x00091e87) aid_height_text

0x305d,	// (0x000914d7) mup_volume_cont_pane_ParamLimits

0x305d,	// (0x000914d7) mup_volume_cont_pane

0x0bb7,	// (0x0008f031) aid_size_cell_pinb

0x0bc1,	// (0x0008f03b) aid_size_list_pinb

0x47ff,	// (0x00092c79) mup2_volume_cont_pane_ParamLimits

0x47ff,	// (0x00092c79) mup2_volume_cont_pane

0xa856,	// (0x00098cd0) mup2_volume_cont_pane_g1_ParamLimits

0xa856,	// (0x00098cd0) mup2_volume_cont_pane_g1

0x0895,	// (0x0008ed0f) aid_size_cell_touch_ParamLimits

0x0895,	// (0x0008ed0f) aid_size_cell_touch

0x0adb,	// (0x0008ef55) touch_pane_ParamLimits

0x0adb,	// (0x0008ef55) touch_pane

0x99c6,	// (0x00097e40) main_rss2_pane

0xcafc,	// (0x0009af76) listscroll_rss2_pane

0xcb05,	// (0x0009af7f) rss2_navigation_pane

0xcb0d,	// (0x0009af87) list_rss2_pane

0xb30f,	// (0x00099789) scroll_pane_cp22

0xcb15,	// (0x0009af8f) rss2_navigation_pane_g1

0xcb1e,	// (0x0009af98) rss2_navigation_pane_g2

0xcb26,	// (0x0009afa0) rss2_navigation_pane_g3

0x0002,

0xf678,	// (0x0009daf2) rss2_navigation_pane_g

0xcb2e,	// (0x0009afa8) rss2_navigation_pane_t1

0x491f,	// (0x00092d99) rss2_list_single_pane_ParamLimits

0x491f,	// (0x00092d99) rss2_list_single_pane

0xcb3c,	// (0x0009afb6) rss2_list_single_pane_t2

0xcb4a,	// (0x0009afc4) rss2_list_single_pane_t3_ParamLimits

0xcb4a,	// (0x0009afc4) rss2_list_single_pane_t3

0xcb67,	// (0x0009afe1) rss2_list_single_pane_t4

0x2a07,	// (0x00090e81) smil_status_pane_g1

0xadb9,	// (0x00099233) main_image2_pane_ParamLimits

0xadb9,	// (0x00099233) main_image2_pane

0x43d7,	// (0x00092851) main_camera2_pane_g9_ParamLimits

0x43d7,	// (0x00092851) main_camera2_pane_g9

0x44f3,	// (0x0009296d) main_camera2_pane_t5_ParamLimits

0x44f3,	// (0x0009296d) main_camera2_pane_t5

0xa82b,	// (0x00098ca5) main_camera2_pane_t6_ParamLimits

0xa82b,	// (0x00098ca5) main_camera2_pane_t6

0x4939,	// (0x00092db3) main_image2_pane_g1_ParamLimits

0x4939,	// (0x00092db3) main_image2_pane_g1

0x3724,	// (0x00091b9e) smil2_video_pane_ParamLimits

0x3724,	// (0x00091b9e) smil2_video_pane

0x08d5,	// (0x0008ed4f) aid_zoom_text_primary_cp

0x9a21,	// (0x00097e9b) popup_preview_fixed_window

0xa4d9,	// (0x00098953) im_reading_pane_g1

0x42a9,	// (0x00092723) cams2_bc_adjust_pane_cp_ParamLimits

0x42a9,	// (0x00092723) cams2_bc_adjust_pane_cp

0x4519,	// (0x00092993) cams2_bc_adjust_pane_ParamLimits

0x4519,	// (0x00092993) cams2_bc_adjust_pane

0xa88f,	// (0x00098d09) cams2_bc_adjust_pane_g1

0xa897,	// (0x00098d11) cams2_slider_pane

0xa8a0,	// (0x00098d1a) cams2_slider_pane_g1

0xa8a9,	// (0x00098d23) cams2_slider_pane_g2

0x0006,

0xf67f,	// (0x0009daf9) cams2_slider_pane_g

0x0cb3,	// (0x0008f12d) calc_display_pane_ParamLimits

0x0cd8,	// (0x0008f152) calc_paper_pane_ParamLimits

0x0cfb,	// (0x0008f175) grid_calc_pane_ParamLimits

0xa740,	// (0x00098bba) popup_clock_digital_window_t1_ParamLimits

0xb7d0,	// (0x00099c4a) main_image_pane_t1

0x0c93,	// (0x0008f10d) aid_size_cell_calc_ParamLimits

0x0c93,	// (0x0008f10d) aid_size_cell_calc

0x3d3f,	// (0x000921b9) popup_blid_sat_info2_window_ParamLimits

0x3d3f,	// (0x000921b9) popup_blid_sat_info2_window

0xcb7d,	// (0x0009aff7) aid_size_cell_blid

0xcb85,	// (0x0009afff) bg_popup_window_pane_cp07

0xcba8,	// (0x0009b022) grid_popup_blid_pane

0xcbb2,	// (0x0009b02c) heading_pane_cp05_ParamLimits

0xcbb2,	// (0x0009b02c) heading_pane_cp05

0xcc7c,	// (0x0009b0f6) cell_popup_blid_pane_ParamLimits

0xcc7c,	// (0x0009b0f6) cell_popup_blid_pane

0xcca6,	// (0x0009b120) cell_popup_blid_pane_g1

0xccae,	// (0x0009b128) cell_popup_blid_pane_t1

0x47cf,	// (0x00092c49) mup2_indicator_pane_ParamLimits

0x47cf,	// (0x00092c49) mup2_indicator_pane

0xa3d2,	// (0x0009884c) mup2_visualizer_osc_pane

0xca52,	// (0x0009aecc) mup2_visualizer_spec_pane_ParamLimits

0xca52,	// (0x0009aecc) mup2_visualizer_spec_pane

0x494f,	// (0x00092dc9) mup2_spec_half_pane

0x4958,	// (0x00092dd2) mup2_spec_half_pane_cp

0x4960,	// (0x00092dda) mup2_spec_bar_pane_ParamLimits

0x4960,	// (0x00092dda) mup2_spec_bar_pane

0xc9dc,	// (0x0009ae56) mup2_spec_bar_pane_g1

0xc9e6,	// (0x0009ae60) mup2_spec_bar_pane_g2

0x0001,

0xf5f2,	// (0x0009da6c) mup2_spec_bar_pane_g

0x4980,	// (0x00092dfa) mup2_osc_middle_pane

0xc9f8,	// (0x0009ae72) mup2_visualizer_osc_pane_g1

0x9a4b,	// (0x00097ec5) popup_number_entry_window_t1_ParamLimits

0x9a5e,	// (0x00097ed8) popup_number_entry_window_t2_ParamLimits

0x9a70,	// (0x00097eea) popup_number_entry_window_t3_ParamLimits

0x9a82,	// (0x00097efc) popup_number_entry_window_t5_ParamLimits

0x9a82,	// (0x00097efc) popup_number_entry_window_t5

0xf0af,	// (0x0009d529) popup_number_entry_window_t_ParamLimits

0x9ab7,	// (0x00097f31) text_title_cp2_ParamLimits

0xa77f,	// (0x00098bf9) aid_hotspot_pointer_text2_pane

0xa7a5,	// (0x00098c1f) main_viewer_pane_g9_ParamLimits

0xa7a5,	// (0x00098c1f) main_viewer_pane_g9

0xae2e,	// (0x000992a8) cale_month_pane_t1_ParamLimits

0xae6b,	// (0x000992e5) bg_cale_pane_ParamLimits

0xae83,	// (0x000992fd) list_cale_pane_ParamLimits

0xae94,	// (0x0009930e) listscroll_cale_day_pane_t1

0xaea6,	// (0x00099320) scroll_pane_cp09_ParamLimits

0x3093,	// (0x0009150d) main_mup_eq_pane_t1_ParamLimits

0x3093,	// (0x0009150d) main_mup_eq_pane_t1

0x30af,	// (0x00091529) main_mup_eq_pane_t2_ParamLimits

0x30af,	// (0x00091529) main_mup_eq_pane_t2

0x30cb,	// (0x00091545) main_mup_eq_pane_t3_ParamLimits

0x30cb,	// (0x00091545) main_mup_eq_pane_t3

0x30e9,	// (0x00091563) main_mup_eq_pane_t4_ParamLimits

0x30e9,	// (0x00091563) main_mup_eq_pane_t4

0x3107,	// (0x00091581) main_mup_eq_pane_t5_ParamLimits

0x3107,	// (0x00091581) main_mup_eq_pane_t5

0x3125,	// (0x0009159f) main_mup_eq_pane_t6_ParamLimits

0x3125,	// (0x0009159f) main_mup_eq_pane_t6

0x313b,	// (0x000915b5) main_mup_eq_pane_t7_ParamLimits

0x313b,	// (0x000915b5) main_mup_eq_pane_t7

0x3151,	// (0x000915cb) main_mup_eq_pane_t8_ParamLimits

0x3151,	// (0x000915cb) main_mup_eq_pane_t8

0x3167,	// (0x000915e1) main_mup_eq_pane_t9_ParamLimits

0x3167,	// (0x000915e1) main_mup_eq_pane_t9

0x3183,	// (0x000915fd) main_mup_eq_pane_t10_ParamLimits

0x3183,	// (0x000915fd) main_mup_eq_pane_t10

0x0009,

0xf441,	// (0x0009d8bb) main_mup_eq_pane_t_ParamLimits

0xf441,	// (0x0009d8bb) main_mup_eq_pane_t

0x3258,	// (0x000916d2) mup_equalizer_pane_cp5_ParamLimits

0x3270,	// (0x000916ea) mup_equalizer_pane_cp6_ParamLimits

0x3288,	// (0x00091702) mup_equalizer_pane_cp7_ParamLimits

0x99c6,	// (0x00097e40) main_gallery_pane

0xca01,	// (0x0009ae7b) smil2_volume_pane

0xca09,	// (0x0009ae83) smil_status_volume_pane_g1_ParamLimits

0xca1c,	// (0x0009ae96) smil_status_volume_pane_g2_ParamLimits

0xa809,	// (0x00098c83) smil_status_volume_pane_g3_ParamLimits

0xf5f7,	// (0x0009da71) smil_status_volume_pane_g_ParamLimits

0xcb85,	// (0x0009afff) bg_popup_window_pane_cp07_ParamLimits

0xcb93,	// (0x0009b00d) blid_firmament_pane

0x4989,	// (0x00092e03) aid_size_cell_gallery_ParamLimits

0x4989,	// (0x00092e03) aid_size_cell_gallery

0x499f,	// (0x00092e19) grid_gallery_pane_ParamLimits

0x499f,	// (0x00092e19) grid_gallery_pane

0x49ba,	// (0x00092e34) cell_gallery_pane_ParamLimits

0x49ba,	// (0x00092e34) cell_gallery_pane

0xccbc,	// (0x0009b136) bg_cell_gallery_focus_pane_ParamLimits

0xccbc,	// (0x0009b136) bg_cell_gallery_focus_pane

0xccce,	// (0x0009b148) cell_gallery_pane_g1_ParamLimits

0xccce,	// (0x0009b148) cell_gallery_pane_g1

0x4a0b,	// (0x00092e85) cell_gallery_pane_g2_ParamLimits

0x4a0b,	// (0x00092e85) cell_gallery_pane_g2

0x4a18,	// (0x00092e92) cell_gallery_pane_g3_ParamLimits

0x4a18,	// (0x00092e92) cell_gallery_pane_g3

0xccda,	// (0x0009b154) cell_gallery_pane_g4_ParamLimits

0xccda,	// (0x0009b154) cell_gallery_pane_g4

0x0003,

0xf6a5,	// (0x0009db1f) cell_gallery_pane_g_ParamLimits

0xf6a5,	// (0x0009db1f) cell_gallery_pane_g

0xcce6,	// (0x0009b160) bg_cell_gallery_focus_pane_g1

0xccee,	// (0x0009b168) bg_cell_gallery_focus_pane_g2

0xccf6,	// (0x0009b170) bg_cell_gallery_focus_pane_g3

0xccfe,	// (0x0009b178) bg_cell_gallery_focus_pane_g4

0xcd06,	// (0x0009b180) bg_cell_gallery_focus_pane_g5

0xcd0e,	// (0x0009b188) bg_cell_gallery_focus_pane_g6

0xcd16,	// (0x0009b190) bg_cell_gallery_focus_pane_g7

0xcd1e,	// (0x0009b198) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ae,	// (0x0009db28) bg_cell_gallery_focus_pane_g

0xcd26,	// (0x0009b1a0) aid_firma_cardinal

0xcd3a,	// (0x0009b1b4) blid_firmament_pane_t1

0xcd51,	// (0x0009b1cb) blid_firmament_pane_t2

0xcd68,	// (0x0009b1e2) blid_firmament_pane_t3

0xcd7f,	// (0x0009b1f9) blid_firmament_pane_t4

0x0003,

0xf6bf,	// (0x0009db39) blid_firmament_pane_t

0xcd96,	// (0x0009b210) blid_sat_info_pane

0xcda6,	// (0x0009b220) blid_sat_info_pane_g1

0xcda6,	// (0x0009b220) blid_sat_info_pane_g2

0x0001,

0xf6c8,	// (0x0009db42) blid_sat_info_pane_g

0xcdb0,	// (0x0009b22a) blid_sat_info_pane_t1

0xcdbe,	// (0x0009b238) smil2_volume_content_pane

0xcdc7,	// (0x0009b241) smil2_volume_pane_g1

0xa25a,	// (0x000986d4) smil2_volume_content_pane_g1

0xcdcf,	// (0x0009b249) smil2_volume_content_pane_g2

0xcdd8,	// (0x0009b252) smil2_volume_content_pane_g3

0xcde1,	// (0x0009b25b) smil2_volume_content_pane_g4

0xcdea,	// (0x0009b264) smil2_volume_content_pane_g5

0xcdf3,	// (0x0009b26d) smil2_volume_content_pane_g6

0xcdfc,	// (0x0009b276) smil2_volume_content_pane_g7

0xce05,	// (0x0009b27f) smil2_volume_content_pane_g8

0xce0e,	// (0x0009b288) smil2_volume_content_pane_g9

0xce17,	// (0x0009b291) smil2_volume_content_pane_g10

0x0009,

0xf6cd,	// (0x0009db47) smil2_volume_content_pane_g

0x130b,	// (0x0008f785) cale_week_day_heading_pane_t1_ParamLimits

0x1335,	// (0x0008f7af) cale_week_day_heading_pane_t2_ParamLimits

0x1364,	// (0x0008f7de) cale_week_day_heading_pane_t3_ParamLimits

0x1393,	// (0x0008f80d) cale_week_day_heading_pane_t4_ParamLimits

0x13c2,	// (0x0008f83c) cale_week_day_heading_pane_t5_ParamLimits

0x13f5,	// (0x0008f86f) cale_week_day_heading_pane_t6_ParamLimits

0x142c,	// (0x0008f8a6) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0009d630) cale_week_day_heading_pane_t_ParamLimits

0xa377,	// (0x000987f1) bg_cale_side_pane_ParamLimits

0x1456,	// (0x0008f8d0) cale_week_time_pane_t1_ParamLimits

0x1470,	// (0x0008f8ea) cale_week_time_pane_t2_ParamLimits

0x148a,	// (0x0008f904) cale_week_time_pane_t3_ParamLimits

0x14a4,	// (0x0008f91e) cale_week_time_pane_t4_ParamLimits

0x14be,	// (0x0008f938) cale_week_time_pane_t5_ParamLimits

0x14d8,	// (0x0008f952) cale_week_time_pane_t6_ParamLimits

0x14f8,	// (0x0008f972) cale_week_time_pane_t7_ParamLimits

0x151e,	// (0x0008f998) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0009d63f) cale_week_time_pane_t_ParamLimits

0x1544,	// (0x0008f9be) cell_cale_week_pane_g2_ParamLimits

0xa377,	// (0x000987f1) bg_cale_side_pane_cp01_ParamLimits

0x27e4,	// (0x00090c5e) cale_month_week_pane_t1_ParamLimits

0x27fd,	// (0x00090c77) cale_month_week_pane_t2_ParamLimits

0x2816,	// (0x00090c90) cale_month_week_pane_t3_ParamLimits

0x282f,	// (0x00090ca9) cale_month_week_pane_t4_ParamLimits

0x2848,	// (0x00090cc2) cale_month_week_pane_t5_ParamLimits

0x2861,	// (0x00090cdb) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0009d714) cale_month_week_pane_t_ParamLimits

0xa6c0,	// (0x00098b3a) cell_cale_month_pane_g1_ParamLimits

0x99c6,	// (0x00097e40) main_cale_event_viewer_pane

0x99c6,	// (0x00097e40) listscroll_cale_event_viewer_pane

0xce20,	// (0x0009b29a) list_cale_ev_pane

0xce28,	// (0x0009b2a2) scroll_pane_cp023

0x4a25,	// (0x00092e9f) field_cale_ev_pane_ParamLimits

0x4a25,	// (0x00092e9f) field_cale_ev_pane

0xce34,	// (0x0009b2ae) field_cale_ev_content_pane_ParamLimits

0xce34,	// (0x0009b2ae) field_cale_ev_content_pane

0xce40,	// (0x0009b2ba) field_cale_ev_pane_g1_ParamLimits

0xce40,	// (0x0009b2ba) field_cale_ev_pane_g1

0xce4c,	// (0x0009b2c6) field_cale_ev_pane_g2_ParamLimits

0xce4c,	// (0x0009b2c6) field_cale_ev_pane_g2

0xce64,	// (0x0009b2de) field_cale_ev_pane_g3_ParamLimits

0xce64,	// (0x0009b2de) field_cale_ev_pane_g3

0x0002,

0xf6e2,	// (0x0009db5c) field_cale_ev_pane_g_ParamLimits

0xf6e2,	// (0x0009db5c) field_cale_ev_pane_g

0xce7c,	// (0x0009b2f6) field_cale_ev_pane_t1_ParamLimits

0xce7c,	// (0x0009b2f6) field_cale_ev_pane_t1

0x4a49,	// (0x00092ec3) field_cale_ev_content_pane_t1_ParamLimits

0x4a49,	// (0x00092ec3) field_cale_ev_content_pane_t1

0xb6b6,	// (0x00099b30) bg_button_pane_cp01

0x0fc3,	// (0x0008f43d) listscroll_cale_week_pane_ParamLimits

0xa33f,	// (0x000987b9) popup_toolbar_window_cp01

0xa348,	// (0x000987c2) listscroll_cale_week_pane_t1_ParamLimits

0x0fc3,	// (0x0008f43d) listscroll_cale_day_pane_ParamLimits

0xa33f,	// (0x000987b9) popup_toolbar_window_cp02

0xae94,	// (0x0009930e) listscroll_cale_day_pane_t1_ParamLimits

0x0fc3,	// (0x0008f43d) main_cale_month_pane_ParamLimits

0xa7f4,	// (0x00098c6e) popup_toolbar_window_cp03_ParamLimits

0xa7f4,	// (0x00098c6e) popup_toolbar_window_cp03

0x35e2,	// (0x00091a5c) main_image_pane_g2_ParamLimits

0x35e2,	// (0x00091a5c) main_image_pane_g2

0x35f3,	// (0x00091a6d) main_image_pane_g3_ParamLimits

0x35f3,	// (0x00091a6d) main_image_pane_g3

0x0002,

0xf4d3,	// (0x0009d94d) main_image_pane_g_ParamLimits

0xf4d3,	// (0x0009d94d) main_image_pane_g

0xb7d0,	// (0x00099c4a) main_image_pane_t1_ParamLimits

0x3604,	// (0x00091a7e) main_image_pane_t2_ParamLimits

0x3604,	// (0x00091a7e) main_image_pane_t2

0x3616,	// (0x00091a90) main_image_pane_t3_ParamLimits

0x3616,	// (0x00091a90) main_image_pane_t3

0x363e,	// (0x00091ab8) main_image_pane_t4_ParamLimits

0x363e,	// (0x00091ab8) main_image_pane_t4

0x0003,

0xf4da,	// (0x0009d954) main_image_pane_t_ParamLimits

0xf4da,	// (0x0009d954) main_image_pane_t

0x365e,	// (0x00091ad8) popup_image_details_window_cp01

0x3668,	// (0x00091ae2) popup_toobar_trans_pane_cp01_ParamLimits

0x3668,	// (0x00091ae2) popup_toobar_trans_pane_cp01

0x3e32,	// (0x000922ac) popup_image_details_window_ParamLimits

0x3e32,	// (0x000922ac) popup_image_details_window

0xa7c5,	// (0x00098c3f) popup_image_focus_window

0x4263,	// (0x000926dd) camera2_autofocus_pane_ParamLimits

0x4263,	// (0x000926dd) camera2_autofocus_pane

0x99c6,	// (0x00097e40) bg_popup_sub_pane_cp06

0xce93,	// (0x0009b30d) popup_image_focus_window_g1

0xce9b,	// (0x0009b315) popup_image_focus_window_g2

0xcea3,	// (0x0009b31d) popup_image_focus_window_g3

0xceab,	// (0x0009b325) popup_image_focus_window_g4

0x0003,

0xf6e9,	// (0x0009db63) popup_image_focus_window_g

0xceb3,	// (0x0009b32d) popup_image_focus_window_t1

0xcec1,	// (0x0009b33b) popup_image_focus_window_t2

0xced1,	// (0x0009b34b) popup_image_focus_window_t3

0x0002,

0xf6f2,	// (0x0009db6c) popup_image_focus_window_t

0xcedf,	// (0x0009b359) camera2_autofocus_pane_g1

0xadb9,	// (0x00099233) bg_tb_trans_pane_cp01

0xceed,	// (0x0009b367) popup_image_details_window_g1

0xcf00,	// (0x0009b37a) popup_image_details_window_g2

0x0002,

0xf704,	// (0x0009db7e) popup_image_details_window_g

0xcf29,	// (0x0009b3a3) popup_image_details_window_t1

0xcf3b,	// (0x0009b3b5) popup_image_details_window_t2

0xcf54,	// (0x0009b3ce) popup_image_details_window_t3

0xcf68,	// (0x0009b3e2) popup_image_details_window_t4

0xcf83,	// (0x0009b3fd) popup_image_details_window_t5

0x0004,

0xf70b,	// (0x0009db85) popup_image_details_window_t

0xa187,	// (0x00098601) bg_calc_paper_pane_ParamLimits

0x99c6,	// (0x00097e40) grid_highlight_pane_cp013

0xa19b,	// (0x00098615) list_calc_pane_ParamLimits

0xa1ad,	// (0x00098627) scroll_pane_cp024

0xa1b5,	// (0x0009862f) bg_calc_display_pane_ParamLimits

0x0dfb,	// (0x0008f275) calc_display_pane_t1_ParamLimits

0x0e0d,	// (0x0008f287) calc_display_pane_t2_ParamLimits

0xa1c1,	// (0x0009863b) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0009d5b0) calc_display_pane_t_ParamLimits

0x0ece,	// (0x0008f348) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0009d5cd) cell_calc_pane_g

0x0ed7,	// (0x0008f351) cell_calc_pane_t1

0xa238,	// (0x000986b2) grid_highlight_pane_cp02_ParamLimits

0xa24e,	// (0x000986c8) toolbar_button_pane_cp01_ParamLimits

0xa24e,	// (0x000986c8) toolbar_button_pane_cp01

0xb815,	// (0x00099c8f) temp_image_control_pane_ParamLimits

0xb815,	// (0x00099c8f) temp_image_control_pane

0xadb9,	// (0x00099233) main_mp3_pane

0xcf9d,	// (0x0009b417) temp_image_control_pane_g1_ParamLimits

0xcf9d,	// (0x0009b417) temp_image_control_pane_g1

0xcfab,	// (0x0009b425) temp_image_control_pane_g2_ParamLimits

0xcfab,	// (0x0009b425) temp_image_control_pane_g2

0xcfbd,	// (0x0009b437) temp_image_control_pane_g3_ParamLimits

0xcfbd,	// (0x0009b437) temp_image_control_pane_g3

0x4a9a,	// (0x00092f14) temp_image_control_pane_g4_ParamLimits

0x4a9a,	// (0x00092f14) temp_image_control_pane_g4

0x0003,

0xf716,	// (0x0009db90) temp_image_control_pane_g_ParamLimits

0xf716,	// (0x0009db90) temp_image_control_pane_g

0xcf9d,	// (0x0009b417) main_mp3_pane_g1

0x4aad,	// (0x00092f27) main_mp3_pane_g2

0x0007,

0xf71f,	// (0x0009db99) main_mp3_pane_g

0xd000,	// (0x0009b47a) main_mp3_pane_t1

0xa3e4,	// (0x0009885e) main_camera_pane_g8_ParamLimits

0xa3e4,	// (0x0009885e) main_camera_pane_g8

0x1856,	// (0x0008fcd0) main_video_pane_g7_ParamLimits

0x1856,	// (0x0008fcd0) main_video_pane_g7

0xa844,	// (0x00098cbe) main_camera2_pane_t7_ParamLimits

0xa844,	// (0x00098cbe) main_camera2_pane_t7

0xa530,	// (0x000989aa) scroll_pane_cp025_ParamLimits

0xa530,	// (0x000989aa) scroll_pane_cp025

0xa544,	// (0x000989be) scroll_pane_cp026_ParamLimits

0xa544,	// (0x000989be) scroll_pane_cp026

0xa553,	// (0x000989cd) wml_content_pane_ParamLimits

0x99c6,	// (0x00097e40) main_touch_calib_pane

0x4b7f,	// (0x00092ff9) main_touch_calib_pane_g1

0x4b91,	// (0x0009300b) main_touch_calib_pane_g2

0x4ba3,	// (0x0009301d) main_touch_calib_pane_g3

0x4bb5,	// (0x0009302f) main_touch_calib_pane_g4

0x0003,

0xf73d,	// (0x0009dbb7) main_touch_calib_pane_g

0x4bc7,	// (0x00093041) main_touch_calib_pane_t1

0x4be1,	// (0x0009305b) main_touch_calib_pane_t2

0x0004,

0xf746,	// (0x0009dbc0) main_touch_calib_pane_t

0xb3de,	// (0x00099858) mup_progress_pane_cp02

0xb413,	// (0x0009988d) navi_pane_g1

0xb4ce,	// (0x00099948) navi_pane_mp_t3

0xadb9,	// (0x00099233) main_mp3_pane_ParamLimits

0x3feb,	// (0x00092465) navi_pane_ParamLimits

0xcf9d,	// (0x0009b417) main_mp3_pane_g1_ParamLimits

0x4aad,	// (0x00092f27) main_mp3_pane_g2_ParamLimits

0x4ab9,	// (0x00092f33) main_mp3_pane_g3_ParamLimits

0x4ab9,	// (0x00092f33) main_mp3_pane_g3

0x4ac7,	// (0x00092f41) main_mp3_pane_g4_ParamLimits

0x4ac7,	// (0x00092f41) main_mp3_pane_g4

0xcfcd,	// (0x0009b447) main_mp3_pane_g5_ParamLimits

0xcfcd,	// (0x0009b447) main_mp3_pane_g5

0xcfdb,	// (0x0009b455) main_mp3_pane_g6_ParamLimits

0xcfdb,	// (0x0009b455) main_mp3_pane_g6

0xcfe8,	// (0x0009b462) main_mp3_pane_g7_ParamLimits

0xcfe8,	// (0x0009b462) main_mp3_pane_g7

0xcff4,	// (0x0009b46e) main_mp3_pane_g8_ParamLimits

0xcff4,	// (0x0009b46e) main_mp3_pane_g8

0xf71f,	// (0x0009db99) main_mp3_pane_g_ParamLimits

0x4ad3,	// (0x00092f4d) main_mp3_pane_t2

0x4ae1,	// (0x00092f5b) main_mp3_pane_t3

0xd00e,	// (0x0009b488) main_mp3_pane_t4

0xd01c,	// (0x0009b496) main_mp3_pane_t5

0x0005,

0xf730,	// (0x0009dbaa) main_mp3_pane_t

0xd02a,	// (0x0009b4a4) mup_progress_pane_cp01

0x08d5,	// (0x0008ed4f) aid_zoom_text_secondary2

0xce20,	// (0x0009b29a) list_cale_ev2_pane

0xce28,	// (0x0009b2a2) scroll_pane_cp023_ParamLimits

0x4c3b,	// (0x000930b5) field_cale_ev2_pane_ParamLimits

0x4c3b,	// (0x000930b5) field_cale_ev2_pane

0x4c5f,	// (0x000930d9) field_cale_ev2_pane_g1_ParamLimits

0x4c5f,	// (0x000930d9) field_cale_ev2_pane_g1

0x4c6b,	// (0x000930e5) field_cale_ev2_pane_g2_ParamLimits

0x4c6b,	// (0x000930e5) field_cale_ev2_pane_g2

0x4c83,	// (0x000930fd) field_cale_ev2_pane_g3_ParamLimits

0x4c83,	// (0x000930fd) field_cale_ev2_pane_g3

0x0003,

0xf751,	// (0x0009dbcb) field_cale_ev2_pane_g_ParamLimits

0xf751,	// (0x0009dbcb) field_cale_ev2_pane_g

0xfc80,	// (0x0008e0fa) field_cale_ev2_pane_t1_ParamLimits

0xfc80,	// (0x0008e0fa) field_cale_ev2_pane_t1

0xfc97,	// (0x0008e111) field_cale_ev2_pane_t2_ParamLimits

0xfc97,	// (0x0008e111) field_cale_ev2_pane_t2

0x0001,

0xf75a,	// (0x0009dbd4) field_cale_ev2_pane_t_ParamLimits

0xf75a,	// (0x0009dbd4) field_cale_ev2_pane_t

0x347a,	// (0x000918f4) main_postcard_pane_g5_ParamLimits

0x347a,	// (0x000918f4) main_postcard_pane_g5

0x3490,	// (0x0009190a) main_postcard_pane_g6_ParamLimits

0x3490,	// (0x0009190a) main_postcard_pane_g6

0x1602,	// (0x0008fa7c) camera2_autofocus_pane_cp_ParamLimits

0x1602,	// (0x0008fa7c) camera2_autofocus_pane_cp

0xadb9,	// (0x00099233) main_mup3_pane

0x4ce5,	// (0x0009315f) main_mup3_pane_g1_ParamLimits

0x4ce5,	// (0x0009315f) main_mup3_pane_g1

0x4d07,	// (0x00093181) main_mup3_pane_g2_ParamLimits

0x4d07,	// (0x00093181) main_mup3_pane_g2

0x4d82,	// (0x000931fc) main_mup3_pane_g3_ParamLimits

0x4d82,	// (0x000931fc) main_mup3_pane_g3

0x4dec,	// (0x00093266) main_mup3_pane_g4_ParamLimits

0x4dec,	// (0x00093266) main_mup3_pane_g4

0x4e56,	// (0x000932d0) main_mup3_pane_g5_ParamLimits

0x4e56,	// (0x000932d0) main_mup3_pane_g5

0x4ec0,	// (0x0009333a) main_mup3_pane_g6_ParamLimits

0x4ec0,	// (0x0009333a) main_mup3_pane_g6

0xd032,	// (0x0009b4ac) main_mup3_pane_g7_ParamLimits

0xd032,	// (0x0009b4ac) main_mup3_pane_g7

0x0007,

0xf76a,	// (0x0009dbe4) main_mup3_pane_g_ParamLimits

0xf76a,	// (0x0009dbe4) main_mup3_pane_g

0x4f40,	// (0x000933ba) main_mup3_pane_t1_ParamLimits

0x4f40,	// (0x000933ba) main_mup3_pane_t1

0x4fb2,	// (0x0009342c) main_mup3_pane_t2_ParamLimits

0x4fb2,	// (0x0009342c) main_mup3_pane_t2

0x5084,	// (0x000934fe) main_mup3_pane_t4_ParamLimits

0x5084,	// (0x000934fe) main_mup3_pane_t4

0x50e2,	// (0x0009355c) main_mup3_pane_t5_ParamLimits

0x50e2,	// (0x0009355c) main_mup3_pane_t5

0x519e,	// (0x00093618) main_mup3_pane_t6_ParamLimits

0x519e,	// (0x00093618) main_mup3_pane_t6

0x0005,

0xf77b,	// (0x0009dbf5) main_mup3_pane_t_ParamLimits

0xf77b,	// (0x0009dbf5) main_mup3_pane_t

0x5256,	// (0x000936d0) mup3_progress_pane_ParamLimits

0x5256,	// (0x000936d0) mup3_progress_pane

0x52ee,	// (0x00093768) popup_mup3_control_window_ParamLimits

0x52ee,	// (0x00093768) popup_mup3_control_window

0xd040,	// (0x0009b4ba) popup_mup3_text_window

0x5324,	// (0x0009379e) mup3_progress_pane_t1

0x5343,	// (0x000937bd) mup3_progress_pane_t2

0xd048,	// (0x0009b4c2) mup3_progress_pane_t3

0x0002,

0xf788,	// (0x0009dc02) mup3_progress_pane_t

0xd065,	// (0x0009b4df) mup_progress_pane_cp03

0x99c6,	// (0x00097e40) bg_tb_trans_pane_cp04

0x5362,	// (0x000937dc) mup3_volume_pane

0x536a,	// (0x000937e4) popup_mup3_control_window_g1

0x5373,	// (0x000937ed) mup3_volume_pane_g1

0x537c,	// (0x000937f6) mup3_volume_pane_g2

0x5385,	// (0x000937ff) mup3_volume_pane_g3

0x0002,

0xf78f,	// (0x0009dc09) mup3_volume_pane_g

0x99c6,	// (0x00097e40) bg_tb_trans_pane_cp03

0xd075,	// (0x0009b4ef) popup_mup3_text_window_g1

0xd07d,	// (0x0009b4f7) popup_mup3_text_window_t1

0xa20f,	// (0x00098689) list_calc_item_pane_g1_ParamLimits

0xcaf3,	// (0x0009af6d) mup_volume_pane_cp_g1

0x4bfb,	// (0x00093075) main_touch_calib_pane_t3

0x4c0f,	// (0x00093089) main_touch_calib_pane_t4

0x4c25,	// (0x0009309f) main_touch_calib_pane_t5

0x99d0,	// (0x00097e4a) aid_cell_size_toolbar2

0x99d8,	// (0x00097e52) aid_popup3_width_pane

0x08c5,	// (0x0008ed3f) aid_zoom_text_msg_primary

0x15f4,	// (0x0008fa6e) vorec_t7

0xa1d3,	// (0x0009864d) bg_calc_paper_pane_g1_ParamLimits

0xa1df,	// (0x00098659) bg_calc_paper_pane_g2_ParamLimits

0xa1eb,	// (0x00098665) bg_calc_paper_pane_g3_ParamLimits

0xa1f7,	// (0x00098671) bg_calc_paper_pane_g4_ParamLimits

0xa203,	// (0x0009867d) bg_calc_paper_pane_g5_ParamLimits

0x0e5a,	// (0x0008f2d4) bg_calc_paper_pane_g6_ParamLimits

0x0e68,	// (0x0008f2e2) bg_calc_paper_pane_g7_ParamLimits

0x0e76,	// (0x0008f2f0) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0009d5b7) bg_calc_paper_pane_g_ParamLimits

0x0e89,	// (0x0008f303) calc_bg_paper_pane_g9_ParamLimits

0x1764,	// (0x0008fbde) image_qvga_pane_ParamLimits

0x1764,	// (0x0008fbde) image_qvga_pane

0xa0ce,	// (0x00098548) bg_popup_sub_pane_cp04_ParamLimits

0xb74c,	// (0x00099bc6) popup_mup_playback_window_g1_ParamLimits

0xb758,	// (0x00099bd2) popup_mup_playback_window_t1_ParamLimits

0xb76d,	// (0x00099be7) popup_mup_playback_window_t2_ParamLimits

0xf4ce,	// (0x0009d948) popup_mup_playback_window_t_ParamLimits

0x46e7,	// (0x00092b61) main_mup2_pane_g3_ParamLimits

0x46e7,	// (0x00092b61) main_mup2_pane_g3

0x1a6d,	// (0x0008fee7) popup_toolbar_window_cp04

0xbb68,	// (0x00099fe2) popup_call2_audio_second_window_g3_ParamLimits

0xbb68,	// (0x00099fe2) popup_call2_audio_second_window_g3

0xbf72,	// (0x0009a3ec) popup_call2_audio_first_window_g4_ParamLimits

0xbf72,	// (0x0009a3ec) popup_call2_audio_first_window_g4

0xc603,	// (0x0009aa7d) popup_call2_audio_in_window_g4_ParamLimits

0xc603,	// (0x0009aa7d) popup_call2_audio_in_window_g4

0x35c4,	// (0x00091a3e) aid_area_sk_bg_cut_ParamLimits

0x35c4,	// (0x00091a3e) aid_area_sk_bg_cut

0xb782,	// (0x00099bfc) aid_area_sk_bg_cut_2_ParamLimits

0xb782,	// (0x00099bfc) aid_area_sk_bg_cut_2

0x49fb,	// (0x00092e75) aid_placing_details_win

0x4a03,	// (0x00092e7d) aid_placing_details_win_2

0xcedf,	// (0x0009b359) camera2_autofocus_pane_g1_ParamLimits

0x0a76,	// (0x0008eef0) popup_fixed_preview_cale_window_ParamLimits

0x0a76,	// (0x0008eef0) popup_fixed_preview_cale_window

0xb54e,	// (0x000999c8) navi_slider_pane_g3

0xb557,	// (0x000999d1) navi_slider_pane_g4

0xb560,	// (0x000999da) navi_slider_pane_g5

0xb54e,	// (0x000999c8) navi_slider_pane_g6

0xa766,	// (0x00098be0) navi_slider_pane_g7

0xb683,	// (0x00099afd) mup_scale_pane_g3

0xb68c,	// (0x00099b06) mup_scale_pane_g4

0xb695,	// (0x00099b0f) mup_scale_pane_g5

0x32a0,	// (0x0009171a) mup_scale_pane_g6

0x32a9,	// (0x00091723) mup_scale_pane_g7

0xb54e,	// (0x000999c8) cams2_slider_pane_g3

0xcb75,	// (0x0009afef) cams2_slider_pane_g4

0xa8b2,	// (0x00098d2c) cams2_slider_pane_g5

0xb54e,	// (0x000999c8) cams2_slider_pane_g6

0xa8ba,	// (0x00098d34) cams2_slider_pane_g7

0xcda6,	// (0x0009b220) camera2_autofocus_pane_cp_g1

0xc962,	// (0x0009addc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc962,	// (0x0009addc) bg_popup_preview_window_pane_cp02

0xd08b,	// (0x0009b505) list_fp_cale_pane_ParamLimits

0xd08b,	// (0x0009b505) list_fp_cale_pane

0xd097,	// (0x0009b511) popup_fixed_preview_cale_window_t1_ParamLimits

0xd097,	// (0x0009b511) popup_fixed_preview_cale_window_t1

0x538e,	// (0x00093808) popup_fixed_preview_cale_window_t2_ParamLimits

0x538e,	// (0x00093808) popup_fixed_preview_cale_window_t2

0x53a3,	// (0x0009381d) popup_fixed_preview_cale_window_t3_ParamLimits

0x53a3,	// (0x0009381d) popup_fixed_preview_cale_window_t3

0x0002,

0xf796,	// (0x0009dc10) popup_fixed_preview_cale_window_t_ParamLimits

0xf796,	// (0x0009dc10) popup_fixed_preview_cale_window_t

0x53ba,	// (0x00093834) list_single_fp_cale_pane_ParamLimits

0x53ba,	// (0x00093834) list_single_fp_cale_pane

0xd0b5,	// (0x0009b52f) list_single_fp_cale_pane_g1_ParamLimits

0xd0b5,	// (0x0009b52f) list_single_fp_cale_pane_g1

0xd0c1,	// (0x0009b53b) list_single_fp_cale_pane_g2_ParamLimits

0xd0c1,	// (0x0009b53b) list_single_fp_cale_pane_g2

0x0002,

0xf79d,	// (0x0009dc17) list_single_fp_cale_pane_g_ParamLimits

0xf79d,	// (0x0009dc17) list_single_fp_cale_pane_g

0xd0da,	// (0x0009b554) list_single_fp_cale_pane_t1_ParamLimits

0xd0da,	// (0x0009b554) list_single_fp_cale_pane_t1

0xd0ec,	// (0x0009b566) list_single_fp_cale_pane_t2_ParamLimits

0xd0ec,	// (0x0009b566) list_single_fp_cale_pane_t2

0x0001,

0xf7a4,	// (0x0009dc1e) list_single_fp_cale_pane_t_ParamLimits

0xf7a4,	// (0x0009dc1e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99c6,	// (0x00097e40) main_dialer_pane

0x53d2,	// (0x0009384c) aid_cell_size_keypad

0x53dc,	// (0x00093856) dialer_ne_pane

0x53e6,	// (0x00093860) grid_dialer_command_1_pane

0x53ee,	// (0x00093868) grid_dialer_command_2_pane

0x53f6,	// (0x00093870) grid_dialer_keypad_pane

0x540a,	// (0x00093884) bg_popup_call_pane_cp06_ParamLimits

0x540a,	// (0x00093884) bg_popup_call_pane_cp06

0x5416,	// (0x00093890) dialer_ne_clear_pane_ParamLimits

0x5416,	// (0x00093890) dialer_ne_clear_pane

0xd11f,	// (0x0009b599) dialer_ne_pane_g1

0xd127,	// (0x0009b5a1) dialer_ne_pane_t1_ParamLimits

0xd127,	// (0x0009b5a1) dialer_ne_pane_t1

0x5422,	// (0x0009389c) dialer_ne_pane_t2_ParamLimits

0x5422,	// (0x0009389c) dialer_ne_pane_t2

0x544c,	// (0x000938c6) dialer_ne_pane_t3_ParamLimits

0x544c,	// (0x000938c6) dialer_ne_pane_t3

0x0002,

0xf7a9,	// (0x0009dc23) dialer_ne_pane_t_ParamLimits

0xf7a9,	// (0x0009dc23) dialer_ne_pane_t

0x547c,	// (0x000938f6) dialer_ne_pane_t3_copy1_ParamLimits

0x547c,	// (0x000938f6) dialer_ne_pane_t3_copy1

0x54ab,	// (0x00093925) cell_dialer_keypad_pane_ParamLimits

0x54ab,	// (0x00093925) cell_dialer_keypad_pane

0x54c2,	// (0x0009393c) cell_dialer_command_1_pane_ParamLimits

0x54c2,	// (0x0009393c) cell_dialer_command_1_pane

0x54d8,	// (0x00093952) cell_dialer_command_2_pane_ParamLimits

0x54d8,	// (0x00093952) cell_dialer_command_2_pane

0xd139,	// (0x0009b5b3) bg_button_pane_cp02_ParamLimits

0xd139,	// (0x0009b5b3) bg_button_pane_cp02

0x54e7,	// (0x00093961) cell_dialer_keypad_pane_g1_ParamLimits

0x54e7,	// (0x00093961) cell_dialer_keypad_pane_g1

0xd139,	// (0x0009b5b3) bg_button_pane_cp03_ParamLimits

0xd139,	// (0x0009b5b3) bg_button_pane_cp03

0x54f8,	// (0x00093972) cell_dialer_command_1_pane_g1_ParamLimits

0x54f8,	// (0x00093972) cell_dialer_command_1_pane_g1

0xd145,	// (0x0009b5bf) bg_button_pane_cp04

0x550c,	// (0x00093986) cell_dialer_command_2_pane_g1

0xa3d2,	// (0x0009884c) bg_button_pane_cp06

0xd14d,	// (0x0009b5c7) dialer_ne_clear_pane_g1

0xb41f,	// (0x00099899) navi_pane_g2

0xb44d,	// (0x000998c7) navi_pane_g3

0x0002,

0xf3d1,	// (0x0009d84b) navi_pane_g

0xb4dc,	// (0x00099956) navi_pane_mv_g2

0xb505,	// (0x0009997f) navi_pane_mv_g5

0x2e08,	// (0x00091282) navi_pane_mv_t1

0xa1b5,	// (0x0009862f) main_clock2_pane

0xadb9,	// (0x00099233) main_clock2_list_pane_ParamLimits

0xadb9,	// (0x00099233) main_clock2_list_pane

0x5578,	// (0x000939f2) main_clock2_pane_t1_ParamLimits

0x5578,	// (0x000939f2) main_clock2_pane_t1

0x55b3,	// (0x00093a2d) main_clock2_pane_t2_ParamLimits

0x55b3,	// (0x00093a2d) main_clock2_pane_t2

0x0004,

0xf7b5,	// (0x0009dc2f) main_clock2_pane_t_ParamLimits

0xf7b5,	// (0x0009dc2f) main_clock2_pane_t

0x5652,	// (0x00093acc) popup_clock_analogue_window_cp03_ParamLimits

0x5652,	// (0x00093acc) popup_clock_analogue_window_cp03

0x5677,	// (0x00093af1) popup_clock_digital_window_cp02_ParamLimits

0x5677,	// (0x00093af1) popup_clock_digital_window_cp02

0x56f0,	// (0x00093b6a) main_clock2_list_single_pane_ParamLimits

0x56f0,	// (0x00093b6a) main_clock2_list_single_pane

0xa3d2,	// (0x0009884c) list_highlight_pane_cp05

0xd185,	// (0x0009b5ff) main_clock2_list_single_pane_t1

0x1a6d,	// (0x0008fee7) popup_toolbar_window_cp04_ParamLimits

0x4a6a,	// (0x00092ee4) camera2_autofocus_pane_g2_ParamLimits

0x4a6a,	// (0x00092ee4) camera2_autofocus_pane_g2

0x4a76,	// (0x00092ef0) camera2_autofocus_pane_g3_ParamLimits

0x4a76,	// (0x00092ef0) camera2_autofocus_pane_g3

0x4a82,	// (0x00092efc) camera2_autofocus_pane_g4_ParamLimits

0x4a82,	// (0x00092efc) camera2_autofocus_pane_g4

0x4a8e,	// (0x00092f08) camera2_autofocus_pane_g5_ParamLimits

0x4a8e,	// (0x00092f08) camera2_autofocus_pane_g5

0x0004,

0xf6f9,	// (0x0009db73) camera2_autofocus_pane_g_ParamLimits

0xf6f9,	// (0x0009db73) camera2_autofocus_pane_g

0x4c9b,	// (0x00093115) camera2_autofocus_pane_cp_g2

0x4ca3,	// (0x0009311d) camera2_autofocus_pane_cp_g3

0x4cab,	// (0x00093125) camera2_autofocus_pane_cp_g4

0x4cb3,	// (0x0009312d) camera2_autofocus_pane_cp_g5

0x0004,

0xf75f,	// (0x0009dbd9) camera2_autofocus_pane_cp_g

0x5402,	// (0x0009387c) popup_dialer_spcha_window

0x99c6,	// (0x00097e40) bg_popup_sub_pane_cp07

0xd193,	// (0x0009b60d) list_spcha_pane

0xd19b,	// (0x0009b615) list_single_spcha_pane_ParamLimits

0xd19b,	// (0x0009b615) list_single_spcha_pane

0x99c6,	// (0x00097e40) list_highlight_pane_cp06

0xd1ac,	// (0x0009b626) list_single_spcha_pane_t1

0xc3ad,	// (0x0009a827) popup_call2_audio_out_window_g4_ParamLimits

0xc3ad,	// (0x0009a827) popup_call2_audio_out_window_g4

0x99c6,	// (0x00097e40) main_imed2_pane

0xa7cf,	// (0x00098c49) popup_imed_adjust2_window

0x3e4a,	// (0x000922c4) popup_imed_trans_window_ParamLimits

0x3e4a,	// (0x000922c4) popup_imed_trans_window

0xcbde,	// (0x0009b058) popup_blid_sat_info2_window_t1

0xcbec,	// (0x0009b066) popup_blid_sat_info2_window_t2

0x000a,

0xf68e,	// (0x0009db08) popup_blid_sat_info2_window_t

0x57ab,	// (0x00093c25) aid_size_cell_colour_35

0x57cb,	// (0x00093c45) aid_size_cell_colour_112

0x57eb,	// (0x00093c65) aid_size_cell_effect

0xc96e,	// (0x0009ade8) bg_tb_trans_pane_cp02

0xaf9d,	// (0x00099417) heading_imed_pane

0x580b,	// (0x00093c85) listscroll_imed_pane

0xd1ba,	// (0x0009b634) heading_imed_pane_g1

0xd1c2,	// (0x0009b63c) heading_imed_pane_t1

0xd1d0,	// (0x0009b64a) grid_imed_colour_35_pane_ParamLimits

0xd1d0,	// (0x0009b64a) grid_imed_colour_35_pane

0x5817,	// (0x00093c91) grid_imed_effect_pane

0xd1ec,	// (0x0009b666) list_imed_aspect_pane

0x582e,	// (0x00093ca8) scroll_pane_cp027_ParamLimits

0x582e,	// (0x00093ca8) scroll_pane_cp027

0x583f,	// (0x00093cb9) cell_imed_effect_pane_ParamLimits

0x583f,	// (0x00093cb9) cell_imed_effect_pane

0xd1f4,	// (0x0009b66e) cell_imed_colour_pane_ParamLimits

0xd1f4,	// (0x0009b66e) cell_imed_colour_pane

0xd23e,	// (0x0009b6b8) cell_imed_colour_pane_g1_ParamLimits

0xd23e,	// (0x0009b6b8) cell_imed_colour_pane_g1

0xd24f,	// (0x0009b6c9) hgihlgiht_grid_pane_cp016_ParamLimits

0xd24f,	// (0x0009b6c9) hgihlgiht_grid_pane_cp016

0x586a,	// (0x00093ce4) cell_imed_effect_pane_g1

0x5872,	// (0x00093cec) grid_highlight_pane_cp017

0xd260,	// (0x0009b6da) list_imed_single_pane_ParamLimits

0xd260,	// (0x0009b6da) list_imed_single_pane

0x99c6,	// (0x00097e40) list_highlight_pane_cp07

0xd274,	// (0x0009b6ee) list_imed_aspect_pane_comp1_t1

0xc96e,	// (0x0009ade8) bg_tb_trans_pane_cp05

0xd296,	// (0x0009b710) popup_imed_adjust2_window_g1

0xd2bd,	// (0x0009b737) popup_imed_adjust2_window_t1

0xd2d5,	// (0x0009b74f) slider_imed_adjust_pane

0xd2e9,	// (0x0009b763) slider_imed_adjust_pane_g1

0xd2f9,	// (0x0009b773) slider_imed_adjust_pane_g2

0xd309,	// (0x0009b783) slider_imed_adjust_pane_g3

0xd31a,	// (0x0009b794) slider_imed_adjust_pane_g4

0x0003,

0xf7d2,	// (0x0009dc4c) slider_imed_adjust_pane_g

0x587b,	// (0x00093cf5) aid_size_cell_clipart2

0xd32b,	// (0x0009b7a5) grid_imed_clipart_pane

0xd335,	// (0x0009b7af) scroll_pane_cp031

0x5887,	// (0x00093d01) cell_imed_clipart_pane_ParamLimits

0x5887,	// (0x00093d01) cell_imed_clipart_pane

0x58a4,	// (0x00093d1e) cell_imed_clipart_pane_g1

0x99c6,	// (0x00097e40) grid_highlight_pane_cp014

0x5556,	// (0x000939d0) main_clock2_pane_g1_ParamLimits

0x5556,	// (0x000939d0) main_clock2_pane_g1

0x5697,	// (0x00093b11) aid_call2_pane_cp10

0x56a9,	// (0x00093b23) aid_call_pane_cp10

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g1

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g2

0x56bb,	// (0x00093b35) popup_clock_analogue_window_cp10_g3

0x56bb,	// (0x00093b35) popup_clock_analogue_window_cp10_g4

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c0,	// (0x0009dc3a) popup_clock_analogue_window_cp10_g

0x56d1,	// (0x00093b4b) popup_clock_analogue_window_cp10_t1

0x5702,	// (0x00093b7c) clock_digital_number_pane_cp10_ParamLimits

0x5702,	// (0x00093b7c) clock_digital_number_pane_cp10

0x571c,	// (0x00093b96) clock_digital_number_pane_cp11_ParamLimits

0x571c,	// (0x00093b96) clock_digital_number_pane_cp11

0x5736,	// (0x00093bb0) clock_digital_number_pane_cp12_ParamLimits

0x5736,	// (0x00093bb0) clock_digital_number_pane_cp12

0x5752,	// (0x00093bcc) clock_digital_number_pane_cp13_ParamLimits

0x5752,	// (0x00093bcc) clock_digital_number_pane_cp13

0x576e,	// (0x00093be8) clock_digital_separator_pane_cp10_ParamLimits

0x576e,	// (0x00093be8) clock_digital_separator_pane_cp10

0x578a,	// (0x00093c04) popup_clock_digital_window_cp02_t1_ParamLimits

0x578a,	// (0x00093c04) popup_clock_digital_window_cp02_t1

0xa0c6,	// (0x00098540) clock_digital_number_pane_cp10_g1

0xa0c6,	// (0x00098540) clock_digital_number_pane_cp10_g2

0x0001,

0xf7db,	// (0x0009dc55) clock_digital_number_pane_cp10_g

0xa0c6,	// (0x00098540) clock_digital_separator_pane_cp10_g1

0xa0c6,	// (0x00098540) clock_digital_separator_pane_g2_cp10

0xb50d,	// (0x00099987) navi_pane_vded_g4

0xb516,	// (0x00099990) navi_pane_vded_g5

0xb51f,	// (0x00099999) navi_pane_vded_t1

0x99c6,	// (0x00097e40) main_vded_pane

0x58ad,	// (0x00093d27) main_vded_pane_g1

0x58b9,	// (0x00093d33) main_vded_pane_g2

0x58c5,	// (0x00093d3f) main_vded_pane_g3

0x0002,

0xf7e0,	// (0x0009dc5a) main_vded_pane_g

0x58d1,	// (0x00093d4b) main_vded_pane_t1

0x58df,	// (0x00093d59) main_vded_pane_t2

0x0001,

0xf7e7,	// (0x0009dc61) main_vded_pane_t

0x58ed,	// (0x00093d67) vded_slider_pane

0x58f7,	// (0x00093d71) vded_video_pane

0xd33d,	// (0x0009b7b7) vded_video_pane_g1

0x5903,	// (0x00093d7d) vded_video_pane_g2

0xcda6,	// (0x0009b220) vded_video_pane_g3

0x0002,

0xf7ec,	// (0x0009dc66) vded_video_pane_g

0xd347,	// (0x0009b7c1) vded_slider_pane_g1

0xcaf3,	// (0x0009af6d) vded_slider_pane_g2

0xd350,	// (0x0009b7ca) vded_slider_pane_g3

0xd359,	// (0x0009b7d3) vded_slider_pane_g4

0xd362,	// (0x0009b7dc) vded_slider_pane_g5

0x0004,

0xf7f3,	// (0x0009dc6d) vded_slider_pane_g

0x52d8,	// (0x00093752) mup3_rocker_pane_ParamLimits

0x52d8,	// (0x00093752) mup3_rocker_pane

0x590c,	// (0x00093d86) mup3_control_keys_pane_g1

0x5914,	// (0x00093d8e) mup3_control_keys_pane_g2

0x591c,	// (0x00093d96) mup3_control_keys_pane_g3

0x5924,	// (0x00093d9e) mup3_control_keys_pane_g4

0x0003,

0xf7fe,	// (0x0009dc78) mup3_control_keys_pane_g

0x0aab,	// (0x0008ef25) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0aab,	// (0x0008ef25) popup_toolbar2_fixed_window_cp01

0x530e,	// (0x00093788) popup_toolbar2_fixed_window_cp02_ParamLimits

0x530e,	// (0x00093788) popup_toolbar2_fixed_window_cp02

0xbcda,	// (0x0009a154) popup_call2_audio_second_window_t4_ParamLimits

0xbcda,	// (0x0009a154) popup_call2_audio_second_window_t4

0xc21a,	// (0x0009a694) popup_call2_audio_first_window_t6_ParamLimits

0xc21a,	// (0x0009a694) popup_call2_audio_first_window_t6

0xc4b0,	// (0x0009a92a) popup_call2_audio_out_window_t6_ParamLimits

0xc4b0,	// (0x0009a92a) popup_call2_audio_out_window_t6

0x99c6,	// (0x00097e40) main_vitu_pane

0x5934,	// (0x00093dae) aid_size_cell_itu_ParamLimits

0x5934,	// (0x00093dae) aid_size_cell_itu

0xadb9,	// (0x00099233) bg_popup_window_pane_cp08_ParamLimits

0xadb9,	// (0x00099233) bg_popup_window_pane_cp08

0x594a,	// (0x00093dc4) field_vitu_entry_pane_ParamLimits

0x594a,	// (0x00093dc4) field_vitu_entry_pane

0x5961,	// (0x00093ddb) grid_vitu_function_pane_ParamLimits

0x5961,	// (0x00093ddb) grid_vitu_function_pane

0x597c,	// (0x00093df6) grid_vitu_itu_pane_ParamLimits

0x597c,	// (0x00093df6) grid_vitu_itu_pane

0x599a,	// (0x00093e14) cell_vitu_itu_pane_ParamLimits

0x599a,	// (0x00093e14) cell_vitu_itu_pane

0x59c0,	// (0x00093e3a) cell_vitu_function_pane_ParamLimits

0x59c0,	// (0x00093e3a) cell_vitu_function_pane

0xadb9,	// (0x00099233) bg_popup_sub_pane_cp08_ParamLimits

0xadb9,	// (0x00099233) bg_popup_sub_pane_cp08

0x59db,	// (0x00093e55) field_vitu_entry_pane_t1_ParamLimits

0x59db,	// (0x00093e55) field_vitu_entry_pane_t1

0xd383,	// (0x0009b7fd) field_vitu_entry_pane_t2_ParamLimits

0xd383,	// (0x0009b7fd) field_vitu_entry_pane_t2

0x0001,

0xf80c,	// (0x0009dc86) field_vitu_entry_pane_t_ParamLimits

0xf80c,	// (0x0009dc86) field_vitu_entry_pane_t

0xd3a0,	// (0x0009b81a) bg_button_pane_cp05_ParamLimits

0xd3a0,	// (0x0009b81a) bg_button_pane_cp05

0x59fb,	// (0x00093e75) cell_vitu_itu_pane_g1

0x5a13,	// (0x00093e8d) cell_vitu_itu_pane_t1_ParamLimits

0x5a13,	// (0x00093e8d) cell_vitu_itu_pane_t1

0x5a25,	// (0x00093e9f) cell_vitu_itu_pane_t2_ParamLimits

0x5a25,	// (0x00093e9f) cell_vitu_itu_pane_t2

0x0002,

0xf811,	// (0x0009dc8b) cell_vitu_itu_pane_t_ParamLimits

0xf811,	// (0x0009dc8b) cell_vitu_itu_pane_t

0xd3ae,	// (0x0009b828) bg_button_pane_cp07

0x5a5a,	// (0x00093ed4) cell_vitu_function_pane_g1

0xa155,	// (0x000985cf) main_calc_pane_g1

0x08b9,	// (0x0008ed33) aid_visual_content_pane

0x99c6,	// (0x00097e40) main_vradio_pane

0x5a63,	// (0x00093edd) main_vradio_pane_g1_ParamLimits

0x5a63,	// (0x00093edd) main_vradio_pane_g1

0xd3b8,	// (0x0009b832) main_vradio_pane_g2_ParamLimits

0xd3b8,	// (0x0009b832) main_vradio_pane_g2

0x0001,

0xf818,	// (0x0009dc92) main_vradio_pane_g_ParamLimits

0xf818,	// (0x0009dc92) main_vradio_pane_g

0x5a7a,	// (0x00093ef4) main_vradio_pane_t1_ParamLimits

0x5a7a,	// (0x00093ef4) main_vradio_pane_t1

0x5a8f,	// (0x00093f09) main_vradio_pane_t2_ParamLimits

0x5a8f,	// (0x00093f09) main_vradio_pane_t2

0xd3c5,	// (0x0009b83f) main_vradio_pane_t3_ParamLimits

0xd3c5,	// (0x0009b83f) main_vradio_pane_t3

0x0002,

0xf81d,	// (0x0009dc97) main_vradio_pane_t_ParamLimits

0xf81d,	// (0x0009dc97) main_vradio_pane_t

0x5aa4,	// (0x00093f1e) vradio_rocker_control_pane_ParamLimits

0x5aa4,	// (0x00093f1e) vradio_rocker_control_pane

0x5ab6,	// (0x00093f30) vradio_station_info_pane_ParamLimits

0x5ab6,	// (0x00093f30) vradio_station_info_pane

0xd3d9,	// (0x0009b853) vradio_frequency_info_pane_ParamLimits

0xd3d9,	// (0x0009b853) vradio_frequency_info_pane

0xcda6,	// (0x0009b220) vradio_station_info_pane_g1

0xd3e8,	// (0x0009b862) vradio_station_info_pane_t1_ParamLimits

0xd3e8,	// (0x0009b862) vradio_station_info_pane_t1

0xd40a,	// (0x0009b884) vradio_station_info_pane_t2_ParamLimits

0xd40a,	// (0x0009b884) vradio_station_info_pane_t2

0x0001,

0xf824,	// (0x0009dc9e) vradio_station_info_pane_t_ParamLimits

0xf824,	// (0x0009dc9e) vradio_station_info_pane_t

0xd41c,	// (0x0009b896) vradio_tuning_pane

0xd424,	// (0x0009b89e) vradio_rocker_control_pane_g1

0xd42c,	// (0x0009b8a6) vradio_rocker_control_pane_g2

0xd434,	// (0x0009b8ae) vradio_rocker_control_pane_g3

0xd43c,	// (0x0009b8b6) vradio_rocker_control_pane_g4

0xd444,	// (0x0009b8be) vradio_rocker_control_pane_g5

0x0004,

0xf829,	// (0x0009dca3) vradio_rocker_control_pane_g

0x5ac6,	// (0x00093f40) vradio_frequency_info_pane_g1

0xd44c,	// (0x0009b8c6) vradio_frequency_info_pane_t1_ParamLimits

0xd44c,	// (0x0009b8c6) vradio_frequency_info_pane_t1

0x5ad0,	// (0x00093f4a) vradio_tuning_pane_g1

0x5adb,	// (0x00093f55) vradio_tuning_pane_t1

0x99e4,	// (0x00097e5e) area_side_right_pane_ParamLimits

0x99e4,	// (0x00097e5e) area_side_right_pane

0xc929,	// (0x0009ada3) status_small_pane_g1

0xc931,	// (0x0009adab) status_small_pane_g2

0xc93a,	// (0x0009adb4) status_small_pane_g3

0xc943,	// (0x0009adbd) status_small_pane_g4

0x0003,

0xf5e4,	// (0x0009da5e) status_small_pane_g

0xc94c,	// (0x0009adc6) status_small_pane_t1

0x99c6,	// (0x00097e40) main_video3_pane

0xd460,	// (0x0009b8da) cams_zoom_vslider_pane

0xd468,	// (0x0009b8e2) image3_wide_pane_ParamLimits

0xd468,	// (0x0009b8e2) image3_wide_pane

0xd482,	// (0x0009b8fc) image3_wide_small_pane

0xd48e,	// (0x0009b908) main_video3_pane_g1_ParamLimits

0xd48e,	// (0x0009b908) main_video3_pane_g1

0xd4aa,	// (0x0009b924) main_video3_pane_g2_ParamLimits

0xd4aa,	// (0x0009b924) main_video3_pane_g2

0x0001,

0xf834,	// (0x0009dcae) main_video3_pane_g_ParamLimits

0xf834,	// (0x0009dcae) main_video3_pane_g

0xd4c6,	// (0x0009b940) main_video3_pane_t1_ParamLimits

0xd4c6,	// (0x0009b940) main_video3_pane_t1

0xd4f1,	// (0x0009b96b) main_video3_pane_t2_ParamLimits

0xd4f1,	// (0x0009b96b) main_video3_pane_t2

0xd51e,	// (0x0009b998) main_video3_pane_t3_ParamLimits

0xd51e,	// (0x0009b998) main_video3_pane_t3

0x0002,

0xf839,	// (0x0009dcb3) main_video3_pane_t_ParamLimits

0xf839,	// (0x0009dcb3) main_video3_pane_t

0xd54b,	// (0x0009b9c5) cams_zoom_vslider_pane_g1

0xd554,	// (0x0009b9ce) cams_zoom_vslider_pane_g2

0x0001,

0xf840,	// (0x0009dcba) cams_zoom_vslider_pane_g

0xd55c,	// (0x0009b9d6) small_slider_vertical_pane

0xcda6,	// (0x0009b220) small_slider_vertical_pane_g1

0xcda6,	// (0x0009b220) small_slider_vertical_pane_g2

0xd564,	// (0x0009b9de) small_slider_vertical_pane_g3

0x0002,

0xf845,	// (0x0009dcbf) small_slider_vertical_pane_g

0x99c6,	// (0x00097e40) main_hwr_training_pane

0xd56d,	// (0x0009b9e7) hwr_training_instruct_pane_ParamLimits

0xd56d,	// (0x0009b9e7) hwr_training_instruct_pane

0x5aea,	// (0x00093f64) hwr_training_navi_pane_ParamLimits

0x5aea,	// (0x00093f64) hwr_training_navi_pane

0x5b09,	// (0x00093f83) hwr_training_write_pane_ParamLimits

0x5b09,	// (0x00093f83) hwr_training_write_pane

0x99c6,	// (0x00097e40) bg_frame_shadow_pane

0xd5e7,	// (0x0009ba61) hwr_training_write_pane_g1

0xd5ef,	// (0x0009ba69) hwr_training_write_pane_g2

0xd5f7,	// (0x0009ba71) hwr_training_write_pane_g3

0xd5ff,	// (0x0009ba79) hwr_training_write_pane_g4

0xd607,	// (0x0009ba81) hwr_training_write_pane_g5

0xd60f,	// (0x0009ba89) hwr_training_write_pane_g6

0xd617,	// (0x0009ba91) hwr_training_write_pane_g7

0x0006,

0xf84c,	// (0x0009dcc6) hwr_training_write_pane_g

0xa8cf,	// (0x00098d49) hwr_training_navi_pane_g1_ParamLimits

0xa8cf,	// (0x00098d49) hwr_training_navi_pane_g1

0xa8e1,	// (0x00098d5b) hwr_training_navi_pane_g2_ParamLimits

0xa8e1,	// (0x00098d5b) hwr_training_navi_pane_g2

0xa8f3,	// (0x00098d6d) hwr_training_navi_pane_g3_ParamLimits

0xa8f3,	// (0x00098d6d) hwr_training_navi_pane_g3

0xa903,	// (0x00098d7d) hwr_training_navi_pane_g4_ParamLimits

0xa903,	// (0x00098d7d) hwr_training_navi_pane_g4

0x0004,

0xf85b,	// (0x0009dcd5) hwr_training_navi_pane_g_ParamLimits

0xf85b,	// (0x0009dcd5) hwr_training_navi_pane_g

0xa910,	// (0x00098d8a) hwr_training_navi_pane_t1

0x5b51,	// (0x00093fcb) list_single_hwr_training_instruct_pane_ParamLimits

0x5b51,	// (0x00093fcb) list_single_hwr_training_instruct_pane

0xd61f,	// (0x0009ba99) list_single_hwr_training_instruct_pane_t1

0xcce6,	// (0x0009b160) bg_frame_shadow_pane_g1

0xd62e,	// (0x0009baa8) bg_frame_shadow_pane_g2

0xd636,	// (0x0009bab0) bg_frame_shadow_pane_g3

0xd63e,	// (0x0009bab8) bg_frame_shadow_pane_g4

0xd646,	// (0x0009bac0) bg_frame_shadow_pane_g5

0xd64e,	// (0x0009bac8) bg_frame_shadow_pane_g6

0xd656,	// (0x0009bad0) bg_frame_shadow_pane_g7

0xa29b,	// (0x00098715) bg_frame_shadow_pane_g8

0x0007,

0xf866,	// (0x0009dce0) bg_frame_shadow_pane_g

0x99c6,	// (0x00097e40) main_video_tele_dialer_pane

0x5b6d,	// (0x00093fe7) aid_size_cell_video_keypad_ParamLimits

0x5b6d,	// (0x00093fe7) aid_size_cell_video_keypad

0x5b87,	// (0x00094001) grid_video_dialer_keypad_pane_ParamLimits

0x5b87,	// (0x00094001) grid_video_dialer_keypad_pane

0x5bd3,	// (0x0009404d) video_down_pane_cp_ParamLimits

0x5bd3,	// (0x0009404d) video_down_pane_cp

0x5c05,	// (0x0009407f) cell_video_dialer_keypad_pane_ParamLimits

0x5c05,	// (0x0009407f) cell_video_dialer_keypad_pane

0xd65e,	// (0x0009bad8) bg_button_pane_cp08_ParamLimits

0xd65e,	// (0x0009bad8) bg_button_pane_cp08

0x5c2b,	// (0x000940a5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c2b,	// (0x000940a5) cell_video_dialer_keypad_pane_g1

0x52c2,	// (0x0009373c) mup3_rocker2_pane_ParamLimits

0x52c2,	// (0x0009373c) mup3_rocker2_pane

0xcda6,	// (0x0009b220) mup3_rocker2_pane_g1

0x3d17,	// (0x00092191) main_dialer2_pane

0x99c6,	// (0x00097e40) main_mp4_pane

0xa93c,	// (0x00098db6) main_mp4_pane_g1_ParamLimits

0xa93c,	// (0x00098db6) main_mp4_pane_g1

0xa93c,	// (0x00098db6) main_mp4_pane_g2_ParamLimits

0xa93c,	// (0x00098db6) main_mp4_pane_g2

0x5c66,	// (0x000940e0) main_mp4_pane_g3_ParamLimits

0x5c66,	// (0x000940e0) main_mp4_pane_g3

0xa94a,	// (0x00098dc4) main_mp4_pane_g4_ParamLimits

0xa94a,	// (0x00098dc4) main_mp4_pane_g4

0xa978,	// (0x00098df2) main_mp4_pane_g5_ParamLimits

0xa978,	// (0x00098df2) main_mp4_pane_g5

0x0007,

0xf886,	// (0x0009dd00) main_mp4_pane_g_ParamLimits

0xf886,	// (0x0009dd00) main_mp4_pane_g

0xa9ec,	// (0x00098e66) main_mp4_pane_t1_ParamLimits

0xa9ec,	// (0x00098e66) main_mp4_pane_t1

0xaa48,	// (0x00098ec2) main_mp4_pane_t2_ParamLimits

0xaa48,	// (0x00098ec2) main_mp4_pane_t2

0xd66a,	// (0x0009bae4) main_mp4_pane_t3_ParamLimits

0xd66a,	// (0x0009bae4) main_mp4_pane_t3

0xaa9a,	// (0x00098f14) main_mp4_pane_t4_ParamLimits

0xaa9a,	// (0x00098f14) main_mp4_pane_t4

0x0003,

0xf897,	// (0x0009dd11) main_mp4_pane_t_ParamLimits

0xf897,	// (0x0009dd11) main_mp4_pane_t

0xaada,	// (0x00098f54) mp4_progress_pane_ParamLimits

0xaada,	// (0x00098f54) mp4_progress_pane

0xab24,	// (0x00098f9e) mp4_rocker_pane_ParamLimits

0xab24,	// (0x00098f9e) mp4_rocker_pane

0xd698,	// (0x0009bb12) mp4_progress_pane_t1

0xd6b1,	// (0x0009bb2b) mp4_progress_pane_t2

0x0001,

0xf8a0,	// (0x0009dd1a) mp4_progress_pane_t

0xd6ca,	// (0x0009bb44) mup_progress_pane_cp04

0xcda6,	// (0x0009b220) mp4_rocker_pane_g1

0x5cb0,	// (0x0009412a) aid_cell_size_keypad2_ParamLimits

0x5cb0,	// (0x0009412a) aid_cell_size_keypad2

0x5cc6,	// (0x00094140) dialer2_ne_pane_ParamLimits

0x5cc6,	// (0x00094140) dialer2_ne_pane

0x5cde,	// (0x00094158) grid_dialer2_keypad_pane_ParamLimits

0x5cde,	// (0x00094158) grid_dialer2_keypad_pane

0xcb85,	// (0x0009afff) bg_popup_call_pane_cp07_ParamLimits

0xcb85,	// (0x0009afff) bg_popup_call_pane_cp07

0x5cfa,	// (0x00094174) dialer2_ne_pane_t1_ParamLimits

0x5cfa,	// (0x00094174) dialer2_ne_pane_t1

0x5d3a,	// (0x000941b4) cell_dialer2_keypad_pane_ParamLimits

0x5d3a,	// (0x000941b4) cell_dialer2_keypad_pane

0xd6ef,	// (0x0009bb69) bg_button_pane_pane_cp04_ParamLimits

0xd6ef,	// (0x0009bb69) bg_button_pane_pane_cp04

0x5d60,	// (0x000941da) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d60,	// (0x000941da) cell_dialer2_keypad_pane_g1

0x1954,	// (0x0008fdce) aid_placing_vt_set_content_ParamLimits

0x1954,	// (0x0008fdce) aid_placing_vt_set_content

0x1978,	// (0x0008fdf2) aid_placing_vt_set_title_ParamLimits

0x1978,	// (0x0008fdf2) aid_placing_vt_set_title

0x99c6,	// (0x00097e40) main_image3_pane

0x5e26,	// (0x000942a0) area_side_right_pane_cp01_ParamLimits

0x5e26,	// (0x000942a0) area_side_right_pane_cp01

0xa93c,	// (0x00098db6) main_image3_pane_g1_ParamLimits

0xa93c,	// (0x00098db6) main_image3_pane_g1

0x5e3f,	// (0x000942b9) main_image3_pane_g2_ParamLimits

0x5e3f,	// (0x000942b9) main_image3_pane_g2

0x5e67,	// (0x000942e1) main_image3_pane_g3_ParamLimits

0x5e67,	// (0x000942e1) main_image3_pane_g3

0x5e91,	// (0x0009430b) main_image3_pane_g4_ParamLimits

0x5e91,	// (0x0009430b) main_image3_pane_g4

0x0003,

0xf8af,	// (0x0009dd29) main_image3_pane_g_ParamLimits

0xf8af,	// (0x0009dd29) main_image3_pane_g

0x5ebb,	// (0x00094335) main_image3_pane_t1_ParamLimits

0x5ebb,	// (0x00094335) main_image3_pane_t1

0x5f13,	// (0x0009438d) main_image3_pane_t2_ParamLimits

0x5f13,	// (0x0009438d) main_image3_pane_t2

0x5f65,	// (0x000943df) main_image3_pane_t3_ParamLimits

0x5f65,	// (0x000943df) main_image3_pane_t3

0x0003,

0xf8b8,	// (0x0009dd32) main_image3_pane_t_ParamLimits

0xf8b8,	// (0x0009dd32) main_image3_pane_t

0xadb9,	// (0x00099233) grid_sctrl_middle_pane_cp01_ParamLimits

0xadb9,	// (0x00099233) grid_sctrl_middle_pane_cp01

0x5fed,	// (0x00094467) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fed,	// (0x00094467) cell_sctrl_middle_pane_cp01

0x600a,	// (0x00094484) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x600a,	// (0x00094484) cell_sctrl_middle_pane_cp01_g1

0x99c6,	// (0x00097e40) main_call4_pane

0x601f,	// (0x00094499) aid_size_button_call4_ParamLimits

0x601f,	// (0x00094499) aid_size_button_call4

0x6052,	// (0x000944cc) call4_windows_pane_ParamLimits

0x6052,	// (0x000944cc) call4_windows_pane

0x6071,	// (0x000944eb) grid_call4_button_pane_ParamLimits

0x6071,	// (0x000944eb) grid_call4_button_pane

0x60a8,	// (0x00094522) call4_windows_conf_pane

0x60c3,	// (0x0009453d) popup_call4_audio_first_window_ParamLimits

0x60c3,	// (0x0009453d) popup_call4_audio_first_window

0x6115,	// (0x0009458f) popup_call4_audio_second_window_ParamLimits

0x6115,	// (0x0009458f) popup_call4_audio_second_window

0x612e,	// (0x000945a8) popup_call4_audio_wait_window_ParamLimits

0x612e,	// (0x000945a8) popup_call4_audio_wait_window

0x613c,	// (0x000945b6) cell_call4_button_pane_ParamLimits

0x613c,	// (0x000945b6) cell_call4_button_pane

0x6163,	// (0x000945dd) bg_button_pane_cp09_ParamLimits

0x6163,	// (0x000945dd) bg_button_pane_cp09

0x616f,	// (0x000945e9) cell_call4_button_pane_g1_ParamLimits

0x616f,	// (0x000945e9) cell_call4_button_pane_g1

0x6195,	// (0x0009460f) cell_call4_button_pane_t1_ParamLimits

0x6195,	// (0x0009460f) cell_call4_button_pane_t1

0xd703,	// (0x0009bb7d) popup_call4_audio_conf_window_ParamLimits

0xd703,	// (0x0009bb7d) popup_call4_audio_conf_window

0x5324,	// (0x0009379e) mup3_progress_pane_t1_ParamLimits

0x5343,	// (0x000937bd) mup3_progress_pane_t2_ParamLimits

0xd048,	// (0x0009b4c2) mup3_progress_pane_t3_ParamLimits

0xf788,	// (0x0009dc02) mup3_progress_pane_t_ParamLimits

0xd065,	// (0x0009b4df) mup_progress_pane_cp03_ParamLimits

0x592c,	// (0x00093da6) mup3_control_keys_pane_g4_copy1

0xab08,	// (0x00098f82) mp4_rocker2_pane_ParamLimits

0xab08,	// (0x00098f82) mp4_rocker2_pane

0xd71d,	// (0x0009bb97) mp4_rocker2_pane_g1

0xd725,	// (0x0009bb9f) mp4_rocker2_pane_g2

0xabaa,	// (0x00099024) mp4_rocker2_pane_g3

0xabb2,	// (0x0009902c) mp4_rocker2_pane_g4

0xabba,	// (0x00099034) mp4_rocker2_pane_g5

0x0004,

0xf8c1,	// (0x0009dd3b) mp4_rocker2_pane_g

0x99c6,	// (0x00097e40) main_camera4_pane

0x99c6,	// (0x00097e40) main_video4_pane

0x5ba1,	// (0x0009401b) main_video_tele_dialer_pane_t1_ParamLimits

0x5ba1,	// (0x0009401b) main_video_tele_dialer_pane_t1

0x5bba,	// (0x00094034) main_video_tele_dialer_pane_t2_ParamLimits

0x5bba,	// (0x00094034) main_video_tele_dialer_pane_t2

0x0001,

0xf877,	// (0x0009dcf1) main_video_tele_dialer_pane_t_ParamLimits

0xf877,	// (0x0009dcf1) main_video_tele_dialer_pane_t

0x61d3,	// (0x0009464d) cam4_autofocus_pane_ParamLimits

0x61d3,	// (0x0009464d) cam4_autofocus_pane

0x61e9,	// (0x00094663) cam4_image_uncrop_pane_ParamLimits

0x61e9,	// (0x00094663) cam4_image_uncrop_pane

0x6202,	// (0x0009467c) cam4_indicators_pane_ParamLimits

0x6202,	// (0x0009467c) cam4_indicators_pane

0x6232,	// (0x000946ac) main_camera4_pane_g1_ParamLimits

0x6232,	// (0x000946ac) main_camera4_pane_g1

0x6244,	// (0x000946be) main_camera4_pane_g2_ParamLimits

0x6244,	// (0x000946be) main_camera4_pane_g2

0x6257,	// (0x000946d1) main_camera4_pane_g3_ParamLimits

0x6257,	// (0x000946d1) main_camera4_pane_g3

0x626a,	// (0x000946e4) main_camera4_pane_g4_ParamLimits

0x626a,	// (0x000946e4) main_camera4_pane_g4

0x627d,	// (0x000946f7) main_camera4_pane_g5_ParamLimits

0x627d,	// (0x000946f7) main_camera4_pane_g5

0x0005,

0xf8cc,	// (0x0009dd46) main_camera4_pane_g_ParamLimits

0xf8cc,	// (0x0009dd46) main_camera4_pane_g

0x62a1,	// (0x0009471b) main_camera4_pane_t1_ParamLimits

0x62a1,	// (0x0009471b) main_camera4_pane_t1

0xcfcd,	// (0x0009b447) bg_tb_trans_pane_cp06

0xabe8,	// (0x00099062) cam4_indicators_pane_g1

0xabf9,	// (0x00099073) cam4_indicators_pane_g2

0x0002,

0xf8e7,	// (0x0009dd61) cam4_indicators_pane_g

0xac11,	// (0x0009908b) cam4_indicators_pane_t1

0x6305,	// (0x0009477f) main_video4_pane_g1_ParamLimits

0x6305,	// (0x0009477f) main_video4_pane_g1

0x6314,	// (0x0009478e) main_video4_pane_g2_ParamLimits

0x6314,	// (0x0009478e) main_video4_pane_g2

0x6323,	// (0x0009479d) main_video4_pane_g3_ParamLimits

0x6323,	// (0x0009479d) main_video4_pane_g3

0x6332,	// (0x000947ac) main_video4_pane_g4_ParamLimits

0x6332,	// (0x000947ac) main_video4_pane_g4

0x0004,

0xf8ee,	// (0x0009dd68) main_video4_pane_g_ParamLimits

0xf8ee,	// (0x0009dd68) main_video4_pane_g

0x6350,	// (0x000947ca) vid4_indicators_pane_ParamLimits

0x6350,	// (0x000947ca) vid4_indicators_pane

0x637e,	// (0x000947f8) video4_image_uncrop_cif_pane_ParamLimits

0x637e,	// (0x000947f8) video4_image_uncrop_cif_pane

0x6398,	// (0x00094812) video4_image_uncrop_nhd_pane_ParamLimits

0x6398,	// (0x00094812) video4_image_uncrop_nhd_pane

0x61e9,	// (0x00094663) video4_image_uncrop_vga_pane_ParamLimits

0x61e9,	// (0x00094663) video4_image_uncrop_vga_pane

0xadb9,	// (0x00099233) bg_tb_trans_pane_cp07

0xac3f,	// (0x000990b9) vid4_indicators_pane_g1

0xac55,	// (0x000990cf) vid4_indicators_pane_g2

0xac69,	// (0x000990e3) vid4_indicators_pane_g3

0x0004,

0xf8f9,	// (0x0009dd73) vid4_indicators_pane_g

0xac9a,	// (0x00099114) vid4_indicators_pane_t1

0x63ae,	// (0x00094828) cam4_autofocus_pane_g1

0x63b6,	// (0x00094830) cam4_autofocus_pane_g2

0x63be,	// (0x00094838) cam4_autofocus_pane_g3

0x0002,

0xf904,	// (0x0009dd7e) cam4_autofocus_pane_g

0x63c6,	// (0x00094840) cam4_autofocus_pane_g3_copy1

0x5be9,	// (0x00094063) video_down_pane_cp_t1

0x5bf7,	// (0x00094071) video_down_pane_cp_t2

0x0001,

0xf87c,	// (0x0009dcf6) video_down_pane_cp_t

0xadb9,	// (0x00099233) popup_vitu2_window_ParamLimits

0xadb9,	// (0x00099233) popup_vitu2_window

0x63ce,	// (0x00094848) aid_size_cell2_itu2_ParamLimits

0x63ce,	// (0x00094848) aid_size_cell2_itu2

0x63f4,	// (0x0009486e) aid_size_cell_itu2_ParamLimits

0x63f4,	// (0x0009486e) aid_size_cell_itu2

0x6454,	// (0x000948ce) bg_popup_window_pane_cp09_ParamLimits

0x6454,	// (0x000948ce) bg_popup_window_pane_cp09

0x6462,	// (0x000948dc) field_vitu2_entry_pane_ParamLimits

0x6462,	// (0x000948dc) field_vitu2_entry_pane

0x648a,	// (0x00094904) grid_vitu2_function_pane_ParamLimits

0x648a,	// (0x00094904) grid_vitu2_function_pane

0x64db,	// (0x00094955) grid_vitu2_itu_pane_ParamLimits

0x64db,	// (0x00094955) grid_vitu2_itu_pane

0x656b,	// (0x000949e5) cell_vitu2_itu_pane_ParamLimits

0x656b,	// (0x000949e5) cell_vitu2_itu_pane

0x6598,	// (0x00094a12) cell_vitu2_function_pane_ParamLimits

0x6598,	// (0x00094a12) cell_vitu2_function_pane

0xd741,	// (0x0009bbbb) bg_popup_call_pane_cp08_ParamLimits

0xd741,	// (0x0009bbbb) bg_popup_call_pane_cp08

0xd758,	// (0x0009bbd2) field_vitu2_entry_pane_g1

0xd764,	// (0x0009bbde) field_vitu2_entry_pane_g2

0x0002,

0xf90b,	// (0x0009dd85) field_vitu2_entry_pane_g

0xfcac,	// (0x0008e126) field_vitu2_entry_pane_t1_ParamLimits

0xfcac,	// (0x0008e126) field_vitu2_entry_pane_t1

0x65dc,	// (0x00094a56) field_vitu2_entry_pane_t2_ParamLimits

0x65dc,	// (0x00094a56) field_vitu2_entry_pane_t2

0x0001,

0xf912,	// (0x0009dd8c) field_vitu2_entry_pane_t_ParamLimits

0xf912,	// (0x0009dd8c) field_vitu2_entry_pane_t

0x65f9,	// (0x00094a73) bg_button_pane_cp010_ParamLimits

0x65f9,	// (0x00094a73) bg_button_pane_cp010

0xacb1,	// (0x0009912b) cell_vitu2_itu_pane_g1

0x6615,	// (0x00094a8f) cell_vitu2_itu_pane_t1_ParamLimits

0x6615,	// (0x00094a8f) cell_vitu2_itu_pane_t1

0xfcda,	// (0x0008e154) cell_vitu2_itu_pane_t2_ParamLimits

0xfcda,	// (0x0008e154) cell_vitu2_itu_pane_t2

0x0002,

0xf91c,	// (0x0009dd96) cell_vitu2_itu_pane_t_ParamLimits

0xf91c,	// (0x0009dd96) cell_vitu2_itu_pane_t

0xadb9,	// (0x00099233) bg_button_pane_cp011

0x6673,	// (0x00094aed) cell_vitu2_function_pane_g1

0x99c6,	// (0x00097e40) main_myfav_hc_pane

0x5fb5,	// (0x0009442f) popup_image3_note_pane_ParamLimits

0x5fb5,	// (0x0009442f) popup_image3_note_pane

0x5fd1,	// (0x0009444b) popup_image3_tool_bar_pane_ParamLimits

0x5fd1,	// (0x0009444b) popup_image3_tool_bar_pane

0xfd68,	// (0x0008e1e2) cell_vitu2_itu_pane_t3_ParamLimits

0xfd68,	// (0x0008e1e2) cell_vitu2_itu_pane_t3

0x99c6,	// (0x00097e40) bg_popup_trans_pane

0xd786,	// (0x0009bc00) grid_image3_tool_bar_pane

0xd790,	// (0x0009bc0a) bg_popup_trans_pane_g1

0xa639,	// (0x00098ab3) bg_popup_trans_pane_g2

0xd798,	// (0x0009bc12) bg_popup_trans_pane_g3

0xd7a0,	// (0x0009bc1a) bg_popup_trans_pane_g4

0xd7a8,	// (0x0009bc22) bg_popup_trans_pane_g5

0xd7b0,	// (0x0009bc2a) bg_popup_trans_pane_g6

0xd7b8,	// (0x0009bc32) bg_popup_trans_pane_g7

0xd7c0,	// (0x0009bc3a) bg_popup_trans_pane_g8

0xa619,	// (0x00098a93) bg_popup_trans_pane_g9

0x0008,

0xf923,	// (0x0009dd9d) bg_popup_trans_pane_g

0xd7c8,	// (0x0009bc42) cell_image3_tool_bar_pane_ParamLimits

0xd7c8,	// (0x0009bc42) cell_image3_tool_bar_pane

0xcda6,	// (0x0009b220) cell_image3_tool_bar_pane_g1

0x99c6,	// (0x00097e40) bg_popup_trans_pane_cp1

0xd7de,	// (0x0009bc58) popup_image3_note_pane_t1

0xd7ec,	// (0x0009bc66) popup_image3_note_pane_t2

0xd7fa,	// (0x0009bc74) popup_image3_note_pane_t3

0x0002,

0xf936,	// (0x0009ddb0) popup_image3_note_pane_t

0xd80a,	// (0x0009bc84) popup_image3_note_pane_t3_copy1

0x6687,	// (0x00094b01) bg_myfav_hc_instruction_pane_ParamLimits

0x6687,	// (0x00094b01) bg_myfav_hc_instruction_pane

0x669f,	// (0x00094b19) cell_myfav_contact_pane_ParamLimits

0x669f,	// (0x00094b19) cell_myfav_contact_pane

0x66bb,	// (0x00094b35) cell_myfav_contact_pane_cp1_ParamLimits

0x66bb,	// (0x00094b35) cell_myfav_contact_pane_cp1

0x66d3,	// (0x00094b4d) cell_myfav_contact_pane_cp2_ParamLimits

0x66d3,	// (0x00094b4d) cell_myfav_contact_pane_cp2

0x66eb,	// (0x00094b65) cell_myfav_contact_pane_cp3_ParamLimits

0x66eb,	// (0x00094b65) cell_myfav_contact_pane_cp3

0x6702,	// (0x00094b7c) cell_myfav_contact_pane_cp4_ParamLimits

0x6702,	// (0x00094b7c) cell_myfav_contact_pane_cp4

0x671a,	// (0x00094b94) cell_myfav_contact_pane_cp5_ParamLimits

0x671a,	// (0x00094b94) cell_myfav_contact_pane_cp5

0x672e,	// (0x00094ba8) cell_myfav_contact_pane_cp6_ParamLimits

0x672e,	// (0x00094ba8) cell_myfav_contact_pane_cp6

0x6744,	// (0x00094bbe) cell_myfav_contact_pane_cp7_ParamLimits

0x6744,	// (0x00094bbe) cell_myfav_contact_pane_cp7

0xd818,	// (0x0009bc92) listscroll_gen_pane_cp05

0x675c,	// (0x00094bd6) main_myfav_hc_pane_g1_ParamLimits

0x675c,	// (0x00094bd6) main_myfav_hc_pane_g1

0x6776,	// (0x00094bf0) main_myfav_hc_pane_g2_ParamLimits

0x6776,	// (0x00094bf0) main_myfav_hc_pane_g2

0x0002,

0xf93d,	// (0x0009ddb7) main_myfav_hc_pane_g_ParamLimits

0xf93d,	// (0x0009ddb7) main_myfav_hc_pane_g

0x67aa,	// (0x00094c24) main_myfav_hc_pane_t1_ParamLimits

0x67aa,	// (0x00094c24) main_myfav_hc_pane_t1

0xd821,	// (0x0009bc9b) main_myfav_hc_pane_t2_ParamLimits

0xd821,	// (0x0009bc9b) main_myfav_hc_pane_t2

0xd833,	// (0x0009bcad) main_myfav_hc_pane_t3_ParamLimits

0xd833,	// (0x0009bcad) main_myfav_hc_pane_t3

0x67c1,	// (0x00094c3b) main_myfav_hc_pane_t4_ParamLimits

0x67c1,	// (0x00094c3b) main_myfav_hc_pane_t4

0x0004,

0xf944,	// (0x0009ddbe) main_myfav_hc_pane_t_ParamLimits

0xf944,	// (0x0009ddbe) main_myfav_hc_pane_t

0xcda6,	// (0x0009b220) bg_myfav_hc_instruction_pane_g1

0xd845,	// (0x0009bcbf) cell_myfav_contact_pane_g1_ParamLimits

0xd845,	// (0x0009bcbf) cell_myfav_contact_pane_g1

0xd845,	// (0x0009bcbf) cell_myfav_contact_pane_g2_ParamLimits

0xd845,	// (0x0009bcbf) cell_myfav_contact_pane_g2

0xd851,	// (0x0009bccb) cell_myfav_contact_pane_g3_ParamLimits

0xd851,	// (0x0009bccb) cell_myfav_contact_pane_g3

0xd032,	// (0x0009b4ac) cell_myfav_contact_pane_g4_ParamLimits

0xd032,	// (0x0009b4ac) cell_myfav_contact_pane_g4

0xd85e,	// (0x0009bcd8) cell_myfav_contact_pane_g5_ParamLimits

0xd85e,	// (0x0009bcd8) cell_myfav_contact_pane_g5

0x0004,

0xf94f,	// (0x0009ddc9) cell_myfav_contact_pane_g_ParamLimits

0xf94f,	// (0x0009ddc9) cell_myfav_contact_pane_g

0x6790,	// (0x00094c0a) main_myfav_hc_pane_g3_ParamLimits

0x6790,	// (0x00094c0a) main_myfav_hc_pane_g3

0x0a0e,	// (0x0008ee88) popup_adpt_find_window

0x67eb,	// (0x00094c65) afind_page_pane_ParamLimits

0x67eb,	// (0x00094c65) afind_page_pane

0x6800,	// (0x00094c7a) aid_size_cell_afind_ParamLimits

0x6800,	// (0x00094c7a) aid_size_cell_afind

0x681e,	// (0x00094c98) bg_popup_sub_pane_cp09_ParamLimits

0x681e,	// (0x00094c98) bg_popup_sub_pane_cp09

0x682b,	// (0x00094ca5) find_pane_cp01_ParamLimits

0x682b,	// (0x00094ca5) find_pane_cp01

0xd86a,	// (0x0009bce4) grid_afind_control_pane_ParamLimits

0xd86a,	// (0x0009bce4) grid_afind_control_pane

0x6838,	// (0x00094cb2) grid_afind_pane_ParamLimits

0x6838,	// (0x00094cb2) grid_afind_pane

0x685a,	// (0x00094cd4) cell_afind_pane_ParamLimits

0x685a,	// (0x00094cd4) cell_afind_pane

0xcda6,	// (0x0009b220) afind_page_pane_g1

0x68c7,	// (0x00094d41) afind_page_pane_g2

0x68d0,	// (0x00094d4a) afind_page_pane_g3

0x0002,

0xf95a,	// (0x0009ddd4) afind_page_pane_g

0x68d9,	// (0x00094d53) afind_page_pane_t1

0xd87e,	// (0x0009bcf8) cell_afind_grid_control_pane_ParamLimits

0xd87e,	// (0x0009bcf8) cell_afind_grid_control_pane

0xd6ef,	// (0x0009bb69) bg_button_pane_cp69_ParamLimits

0xd6ef,	// (0x0009bb69) bg_button_pane_cp69

0x68f9,	// (0x00094d73) cell_afind_pane_g1_ParamLimits

0x68f9,	// (0x00094d73) cell_afind_pane_g1

0x6906,	// (0x00094d80) cell_afind_pane_t1_ParamLimits

0x6906,	// (0x00094d80) cell_afind_pane_t1

0xa42e,	// (0x000988a8) bg_button_pane_cp72

0xd88d,	// (0x0009bd07) cell_afind_grid_control_pane_g1

0x37b7,	// (0x00091c31) aid_image_placing_area_ParamLimits

0x37b7,	// (0x00091c31) aid_image_placing_area

0xd36b,	// (0x0009b7e5) field_vitu_entry_pane_g1_ParamLimits

0xd36b,	// (0x0009b7e5) field_vitu_entry_pane_g1

0xd377,	// (0x0009b7f1) field_vitu_entry_pane_g2_ParamLimits

0xd377,	// (0x0009b7f1) field_vitu_entry_pane_g2

0x0001,

0xf807,	// (0x0009dc81) field_vitu_entry_pane_g_ParamLimits

0xf807,	// (0x0009dc81) field_vitu_entry_pane_g

0x59fb,	// (0x00093e75) cell_vitu_itu_pane_g1_ParamLimits

0x5a3d,	// (0x00093eb7) cell_vitu_itu_pane_t3_ParamLimits

0x5a3d,	// (0x00093eb7) cell_vitu_itu_pane_t3

0xd698,	// (0x0009bb12) mp4_progress_pane_t1_ParamLimits

0xd6b1,	// (0x0009bb2b) mp4_progress_pane_t2_ParamLimits

0xf8a0,	// (0x0009dd1a) mp4_progress_pane_t_ParamLimits

0xd6ca,	// (0x0009bb44) mup_progress_pane_cp04_ParamLimits

0x67d5,	// (0x00094c4f) main_myfav_hc_pane_t5_ParamLimits

0x67d5,	// (0x00094c4f) main_myfav_hc_pane_t5

0x08cd,	// (0x0008ed47) aid_zoom_text_primary

0x0a0e,	// (0x0008ee88) popup_adpt_find_window_ParamLimits

0xadb9,	// (0x00099233) main_cam_set_pane

0x621b,	// (0x00094695) cam4_zoom_pane_ParamLimits

0x621b,	// (0x00094695) cam4_zoom_pane

0x6918,	// (0x00094d92) main_cam_set_pane_g1_ParamLimits

0x6918,	// (0x00094d92) main_cam_set_pane_g1

0x6926,	// (0x00094da0) main_cam_set_pane_g2_ParamLimits

0x6926,	// (0x00094da0) main_cam_set_pane_g2

0x0001,

0xf961,	// (0x0009dddb) main_cam_set_pane_g_ParamLimits

0xf961,	// (0x0009dddb) main_cam_set_pane_g

0x6947,	// (0x00094dc1) main_cam_set_pane_t1_ParamLimits

0x6947,	// (0x00094dc1) main_cam_set_pane_t1

0x6962,	// (0x00094ddc) main_cset_listscroll_pane_ParamLimits

0x6962,	// (0x00094ddc) main_cset_listscroll_pane

0x6986,	// (0x00094e00) main_cset_slider_pane_ParamLimits

0x6986,	// (0x00094e00) main_cset_slider_pane

0xd89e,	// (0x0009bd18) main_cset_list_pane_ParamLimits

0xd89e,	// (0x0009bd18) main_cset_list_pane

0xd8ae,	// (0x0009bd28) scroll_pane_cp028

0x69b0,	// (0x00094e2a) aid_area_touch_slider

0x69cc,	// (0x00094e46) cset_slider_pane

0x69f6,	// (0x00094e70) main_cset_slider_pane_g1

0x6a0b,	// (0x00094e85) main_cset_slider_pane_g2

0x0011,

0xf966,	// (0x0009dde0) main_cset_slider_pane_g

0xd8e7,	// (0x0009bd61) main_cset_slider_pane_t1

0x6acd,	// (0x00094f47) main_cset_slider_pane_t2

0x6ae7,	// (0x00094f61) main_cset_slider_pane_t3

0x6b01,	// (0x00094f7b) main_cset_slider_pane_t4

0x6b1b,	// (0x00094f95) main_cset_slider_pane_t5

0x6b39,	// (0x00094fb3) main_cset_slider_pane_t6

0x6b50,	// (0x00094fca) main_cset_slider_pane_t7

0x000e,

0xf98b,	// (0x0009de05) main_cset_slider_pane_t

0x6c5c,	// (0x000950d6) cset_list_set_pane_ParamLimits

0x6c5c,	// (0x000950d6) cset_list_set_pane

0x6c70,	// (0x000950ea) aid_position_infowindow_above

0x6c78,	// (0x000950f2) aid_position_infowindow_below

0x6c80,	// (0x000950fa) cset_list_set_pane_g1_ParamLimits

0x6c80,	// (0x000950fa) cset_list_set_pane_g1

0xfdc6,	// (0x0008e240) cset_list_set_pane_g3_ParamLimits

0xfdc6,	// (0x0008e240) cset_list_set_pane_g3

0x0001,

0xf9aa,	// (0x0009de24) cset_list_set_pane_g_ParamLimits

0xf9aa,	// (0x0009de24) cset_list_set_pane_g

0xfdd5,	// (0x0008e24f) cset_list_set_pane_t1_ParamLimits

0xfdd5,	// (0x0008e24f) cset_list_set_pane_t1

0xadb9,	// (0x00099233) list_highlight_pane_cp021_ParamLimits

0xadb9,	// (0x00099233) list_highlight_pane_cp021

0xb683,	// (0x00099afd) cset_slider_pane_g1

0xb695,	// (0x00099b0f) cset_slider_pane_g2

0xb68c,	// (0x00099b06) cset_slider_pane_g3

0x0002,

0xf9af,	// (0x0009de29) cset_slider_pane_g

0xd987,	// (0x0009be01) aid_area_touch_cam4_zoom

0x6c8c,	// (0x00095106) cam4_zoom_cont_pane

0x6c94,	// (0x0009510e) cam4_zoom_pane_g1

0x6c9c,	// (0x00095116) cam4_zoom_pane_g2

0x6ca4,	// (0x0009511e) cam4_zoom_pane_g3

0x0002,

0xf9b6,	// (0x0009de30) cam4_zoom_pane_g

0xacc3,	// (0x0009913d) cam4_zoom_cont_pane_g1

0xaccc,	// (0x00099146) cam4_zoom_cont_pane_g2

0xacd5,	// (0x0009914f) cam4_zoom_cont_pane_g3

0x0002,

0xf9bd,	// (0x0009de37) cam4_zoom_cont_pane_g

0x603d,	// (0x000944b7) call4_image_pane_ParamLimits

0x603d,	// (0x000944b7) call4_image_pane

0x60a8,	// (0x00094522) call4_windows_conf_pane_ParamLimits

0x60f3,	// (0x0009456d) popup_call4_audio_in_window_ParamLimits

0x60f3,	// (0x0009456d) popup_call4_audio_in_window

0x99c6,	// (0x00097e40) bg_popup_call2_act_pane_cp02

0xd6fb,	// (0x0009bb75) call4_list_conf_pane

0xcda6,	// (0x0009b220) call4_image_pane_g1

0xcda6,	// (0x0009b220) call4_image_pane_g2

0x0001,

0xf6c8,	// (0x0009db42) call4_image_pane_g

0xd990,	// (0x0009be0a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd990,	// (0x0009be0a) list_single_graphic_popup_conf4_pane

0x99c6,	// (0x00097e40) list_highlight_pane_cp022

0xd9a5,	// (0x0009be1f) list_single_graphic_popup_conf4_pane_g1

0xb27b,	// (0x000996f5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c4,	// (0x0009de3e) list_single_graphic_popup_conf4_pane_g

0xd9ad,	// (0x0009be27) list_single_graphic_popup_conf4_pane_t1

0x1a8f,	// (0x0008ff09) popup_vtel_slider_window_ParamLimits

0x1a8f,	// (0x0008ff09) popup_vtel_slider_window

0xd6dd,	// (0x0009bb57) dialer2_ne_pane_t2_ParamLimits

0xd6dd,	// (0x0009bb57) dialer2_ne_pane_t2

0x0001,

0xf8a5,	// (0x0009dd1f) dialer2_ne_pane_t_ParamLimits

0xf8a5,	// (0x0009dd1f) dialer2_ne_pane_t

0xcb85,	// (0x0009afff) bg_popup_sub_pane_cp010_ParamLimits

0xcb85,	// (0x0009afff) bg_popup_sub_pane_cp010

0x6cad,	// (0x00095127) popup_vtel_slider_window_g1_ParamLimits

0x6cad,	// (0x00095127) popup_vtel_slider_window_g1

0x6cc0,	// (0x0009513a) popup_vtel_slider_window_g2_ParamLimits

0x6cc0,	// (0x0009513a) popup_vtel_slider_window_g2

0x0003,

0xf9c9,	// (0x0009de43) popup_vtel_slider_window_g_ParamLimits

0xf9c9,	// (0x0009de43) popup_vtel_slider_window_g

0x6d16,	// (0x00095190) vtel_slider_pane_ParamLimits

0x6d16,	// (0x00095190) vtel_slider_pane

0x6d38,	// (0x000951b2) vtel_slider_pane_g1_ParamLimits

0x6d38,	// (0x000951b2) vtel_slider_pane_g1

0x6d4c,	// (0x000951c6) vtel_slider_pane_g2_ParamLimits

0x6d4c,	// (0x000951c6) vtel_slider_pane_g2

0x6d64,	// (0x000951de) vtel_slider_pane_g3_ParamLimits

0x6d64,	// (0x000951de) vtel_slider_pane_g3

0x6d38,	// (0x000951b2) vtel_slider_pane_g4_ParamLimits

0x6d38,	// (0x000951b2) vtel_slider_pane_g4

0x6d7a,	// (0x000951f4) vtel_slider_pane_g5_ParamLimits

0x6d7a,	// (0x000951f4) vtel_slider_pane_g5

0x0004,

0xf9d2,	// (0x0009de4c) vtel_slider_pane_g_ParamLimits

0xf9d2,	// (0x0009de4c) vtel_slider_pane_g

0xadb9,	// (0x00099233) main_gallery2_pane

0x6420,	// (0x0009489a) aid_size_row_itut2_dropdow_list_ParamLimits

0x6420,	// (0x0009489a) aid_size_row_itut2_dropdow_list

0x64b2,	// (0x0009492c) grid_vitu2_function_top_pane_ParamLimits

0x64b2,	// (0x0009492c) grid_vitu2_function_top_pane

0x6516,	// (0x00094990) popup_vitu2_dropdown_list_window_ParamLimits

0x6516,	// (0x00094990) popup_vitu2_dropdown_list_window

0x653f,	// (0x000949b9) popup_vitu2_match_list_window

0x6d90,	// (0x0009520a) cell_vitu2_function_top_pane_ParamLimits

0x6d90,	// (0x0009520a) cell_vitu2_function_top_pane

0x6db2,	// (0x0009522c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6db2,	// (0x0009522c) cell_vitu2_function_top_pane_cp01

0x6dce,	// (0x00095248) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dce,	// (0x00095248) cell_vitu2_function_top_wide_pane

0xadb9,	// (0x00099233) bg_button_pane_cp012

0x6dea,	// (0x00095264) cell_vitu2_function_top_pane_g1

0xacde,	// (0x00099158) bg_button_pane_cp013_ParamLimits

0xacde,	// (0x00099158) bg_button_pane_cp013

0x6dfe,	// (0x00095278) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dfe,	// (0x00095278) cell_vitu2_function_top_wide_pane_g1

0xadb9,	// (0x00099233) bg_popup_sub_pane_cp20

0x6e16,	// (0x00095290) list_vitu2_match_list_pane

0xd790,	// (0x0009bc0a) bg_popup_sub_pane_cp20_g1

0xd798,	// (0x0009bc12) bg_popup_sub_pane_cp20_g2

0xa639,	// (0x00098ab3) bg_popup_sub_pane_cp20_g3

0xd7a0,	// (0x0009bc1a) bg_popup_sub_pane_cp20_g4

0xa619,	// (0x00098a93) bg_popup_sub_pane_cp20_g5

0xd9c3,	// (0x0009be3d) bg_popup_sub_pane_cp20_g6

0xd7b0,	// (0x0009bc2a) bg_popup_sub_pane_cp20_g7

0xd7b8,	// (0x0009bc32) bg_popup_sub_pane_cp20_g8

0xd7c0,	// (0x0009bc3a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9dd,	// (0x0009de57) bg_popup_sub_pane_cp20_g

0xacfa,	// (0x00099174) list_vitu2_match_list_item_pane_ParamLimits

0xacfa,	// (0x00099174) list_vitu2_match_list_item_pane

0xad0c,	// (0x00099186) list_vitu2_match_list_item_pane_t1

0x99c6,	// (0x00097e40) bg_popup_sub_pane_cp21

0xb1a4,	// (0x0009961e) grid_vitu2_dropdown_list_pane

0x6e40,	// (0x000952ba) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e40,	// (0x000952ba) cell_vitu2_dropdown_list_char_pane

0x6e63,	// (0x000952dd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e63,	// (0x000952dd) cell_vitu2_dropdown_list_ctrl_pane

0xd9cb,	// (0x0009be45) cell_vitu2_dropdown_list_char_pane_g1

0xd9d4,	// (0x0009be4e) cell_vitu2_dropdown_list_char_pane_g2

0xd9dd,	// (0x0009be57) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9fa,	// (0x0009de74) cell_vitu2_dropdown_list_char_pane_g

0x6e91,	// (0x0009530b) cell_vitu2_dropdown_list_char_pane_t1

0x6e9f,	// (0x00095319) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e9f,	// (0x00095319) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6eaf,	// (0x00095329) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6eaf,	// (0x00095329) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ec0,	// (0x0009533a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ec0,	// (0x0009533a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6ed0,	// (0x0009534a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6ed0,	// (0x0009534a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfcd,	// (0x0009b447) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfcd,	// (0x0009b447) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa01,	// (0x0009de7b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa01,	// (0x0009de7b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6eec,	// (0x00095366) aid_size_cell_gallery2_ParamLimits

0x6eec,	// (0x00095366) aid_size_cell_gallery2

0x6f0a,	// (0x00095384) grid_gallery2_pane_ParamLimits

0x6f0a,	// (0x00095384) grid_gallery2_pane

0x6f24,	// (0x0009539e) scroll_pane_cp029_ParamLimits

0x6f24,	// (0x0009539e) scroll_pane_cp029

0x6f35,	// (0x000953af) cell_gallery2_pane_ParamLimits

0x6f35,	// (0x000953af) cell_gallery2_pane

0xd9e6,	// (0x0009be60) cell_gallery2_pane_g2

0x6f99,	// (0x00095413) cell_gallery2_pane_g3

0xd9ee,	// (0x0009be68) cell_gallery2_pane_g4

0xd9f6,	// (0x0009be70) cell_gallery2_pane_g5

0xa3d2,	// (0x0009884c) grid_highlight_pane_cp10

0x653f,	// (0x000949b9) popup_vitu2_match_list_window_ParamLimits

0x6556,	// (0x000949d0) popup_vitu2_query_window_ParamLimits

0x6556,	// (0x000949d0) popup_vitu2_query_window

0x99c6,	// (0x00097e40) bg_vitu2_candi_button_pane

0xd9cb,	// (0x0009be45) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9d4,	// (0x0009be4e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd9dd,	// (0x0009be57) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xfe38,	// (0x0008e2b2) bg_button_pane_cp015

0x6fa1,	// (0x0009541b) bg_button_pane_cp016

0x6fb4,	// (0x0009542e) bg_button_pane_cp017

0xc96e,	// (0x0009ade8) bg_popup_sub_pane_cp22

0xd9fe,	// (0x0009be78) popup_vitu2_query_window_g1

0xfe6d,	// (0x0008e2e7) popup_vitu2_query_window_g2

0x0002,

0xfa0c,	// (0x0009de86) popup_vitu2_query_window_g

0xfe8c,	// (0x0008e306) popup_vitu2_query_window_t1_ParamLimits

0xfe8c,	// (0x0008e306) popup_vitu2_query_window_t1

0xfec1,	// (0x0008e33b) popup_vitu2_query_window_t2_ParamLimits

0xfec1,	// (0x0008e33b) popup_vitu2_query_window_t2

0xfed3,	// (0x0008e34d) popup_vitu2_query_window_t3_ParamLimits

0xfed3,	// (0x0008e34d) popup_vitu2_query_window_t3

0x6fd8,	// (0x00095452) popup_vitu2_query_window_t4_ParamLimits

0x6fd8,	// (0x00095452) popup_vitu2_query_window_t4

0x6ff9,	// (0x00095473) popup_vitu2_query_window_t5_ParamLimits

0x6ff9,	// (0x00095473) popup_vitu2_query_window_t5

0x0006,

0xfa13,	// (0x0009de8d) popup_vitu2_query_window_t_ParamLimits

0xfa13,	// (0x0009de8d) popup_vitu2_query_window_t

0xd896,	// (0x0009bd10) main_cset_text_pane

0x69b0,	// (0x00094e2a) aid_area_touch_slider_ParamLimits

0x69cc,	// (0x00094e46) cset_slider_pane_ParamLimits

0x69f6,	// (0x00094e70) main_cset_slider_pane_g1_ParamLimits

0x6a0b,	// (0x00094e85) main_cset_slider_pane_g2_ParamLimits

0xd8b7,	// (0x0009bd31) main_cset_slider_pane_g3_ParamLimits

0xd8b7,	// (0x0009bd31) main_cset_slider_pane_g3

0x6a20,	// (0x00094e9a) main_cset_slider_pane_g4_ParamLimits

0x6a20,	// (0x00094e9a) main_cset_slider_pane_g4

0x6a2f,	// (0x00094ea9) main_cset_slider_pane_g5_ParamLimits

0x6a2f,	// (0x00094ea9) main_cset_slider_pane_g5

0x6a3d,	// (0x00094eb7) main_cset_slider_pane_g6_ParamLimits

0x6a3d,	// (0x00094eb7) main_cset_slider_pane_g6

0xf966,	// (0x0009dde0) main_cset_slider_pane_g_ParamLimits

0xd8e7,	// (0x0009bd61) main_cset_slider_pane_t1_ParamLimits

0x6acd,	// (0x00094f47) main_cset_slider_pane_t2_ParamLimits

0x6ae7,	// (0x00094f61) main_cset_slider_pane_t3_ParamLimits

0x6b01,	// (0x00094f7b) main_cset_slider_pane_t4_ParamLimits

0x6b1b,	// (0x00094f95) main_cset_slider_pane_t5_ParamLimits

0x6b39,	// (0x00094fb3) main_cset_slider_pane_t6_ParamLimits

0x6b50,	// (0x00094fca) main_cset_slider_pane_t7_ParamLimits

0x6b7e,	// (0x00094ff8) main_cset_slider_pane_t8_ParamLimits

0x6b7e,	// (0x00094ff8) main_cset_slider_pane_t8

0x6ba6,	// (0x00095020) main_cset_slider_pane_t9_ParamLimits

0x6ba6,	// (0x00095020) main_cset_slider_pane_t9

0x6bce,	// (0x00095048) main_cset_slider_pane_t10_ParamLimits

0x6bce,	// (0x00095048) main_cset_slider_pane_t10

0x6bf6,	// (0x00095070) main_cset_slider_pane_t11_ParamLimits

0x6bf6,	// (0x00095070) main_cset_slider_pane_t11

0x6c20,	// (0x0009509a) main_cset_slider_pane_t12_ParamLimits

0x6c20,	// (0x0009509a) main_cset_slider_pane_t12

0x6c3d,	// (0x000950b7) main_cset_slider_pane_t13_ParamLimits

0x6c3d,	// (0x000950b7) main_cset_slider_pane_t13

0xf98b,	// (0x0009de05) main_cset_slider_pane_t_ParamLimits

0x99c6,	// (0x00097e40) bg_popup_sub_pane_cp011

0xda0a,	// (0x0009be84) main_cset_text_pane_g1

0xda12,	// (0x0009be8c) main_cset_text_pane_t1

0xda20,	// (0x0009be9a) main_cset_text_pane_t2

0xda2e,	// (0x0009bea8) main_cset_text_pane_t3

0xda3c,	// (0x0009beb6) main_cset_text_pane_t4

0xda4a,	// (0x0009bec4) main_cset_text_pane_t5

0xda58,	// (0x0009bed2) main_cset_text_pane_t6

0xda66,	// (0x0009bee0) main_cset_text_pane_t7

0x0006,

0xfa22,	// (0x0009de9c) main_cset_text_pane_t

0x99c6,	// (0x00097e40) main_cam4_burst_pane

0x99c6,	// (0x00097e40) main_cam5_pane

0x68e7,	// (0x00094d61) bg_button_pane_cp019

0x68f0,	// (0x00094d6a) bg_button_pane_cp020

0xd8c3,	// (0x0009bd3d) main_cset_slider_pane_g7_ParamLimits

0xd8c3,	// (0x0009bd3d) main_cset_slider_pane_g7

0xd8cf,	// (0x0009bd49) main_cset_slider_pane_g8_ParamLimits

0xd8cf,	// (0x0009bd49) main_cset_slider_pane_g8

0x6a51,	// (0x00094ecb) main_cset_slider_pane_g9_ParamLimits

0x6a51,	// (0x00094ecb) main_cset_slider_pane_g9

0x6a5d,	// (0x00094ed7) main_cset_slider_pane_g10_ParamLimits

0x6a5d,	// (0x00094ed7) main_cset_slider_pane_g10

0x6a69,	// (0x00094ee3) main_cset_slider_pane_g11_ParamLimits

0x6a69,	// (0x00094ee3) main_cset_slider_pane_g11

0x6a75,	// (0x00094eef) main_cset_slider_pane_g12_ParamLimits

0x6a75,	// (0x00094eef) main_cset_slider_pane_g12

0x6a81,	// (0x00094efb) main_cset_slider_pane_g13_ParamLimits

0x6a81,	// (0x00094efb) main_cset_slider_pane_g13

0x6a8d,	// (0x00094f07) main_cset_slider_pane_g14_ParamLimits

0x6a8d,	// (0x00094f07) main_cset_slider_pane_g14

0x6a99,	// (0x00094f13) main_cset_slider_pane_g15_ParamLimits

0x6a99,	// (0x00094f13) main_cset_slider_pane_g15

0xd915,	// (0x0009bd8f) main_cset_slider_pane_t14_ParamLimits

0xd915,	// (0x0009bd8f) main_cset_slider_pane_t14

0xd94e,	// (0x0009bdc8) main_cset_slider_pane_t15_ParamLimits

0xd94e,	// (0x0009bdc8) main_cset_slider_pane_t15

0x701a,	// (0x00095494) aid_cam4_burst_size_cell_ParamLimits

0x701a,	// (0x00095494) aid_cam4_burst_size_cell

0x703a,	// (0x000954b4) grid_cam4_burst_pane_ParamLimits

0x703a,	// (0x000954b4) grid_cam4_burst_pane

0x7074,	// (0x000954ee) linegrid_cam4_burst_pane_ParamLimits

0x7074,	// (0x000954ee) linegrid_cam4_burst_pane

0xda74,	// (0x0009beee) scroll_pane_cp30_ParamLimits

0xda74,	// (0x0009beee) scroll_pane_cp30

0x7096,	// (0x00095510) cell_cam4_burst_pane_ParamLimits

0x7096,	// (0x00095510) cell_cam4_burst_pane

0xda80,	// (0x0009befa) linegrid_cam4_burst_pane_g1_ParamLimits

0xda80,	// (0x0009befa) linegrid_cam4_burst_pane_g1

0x70eb,	// (0x00095565) linegrid_cam4_burst_pane_g2_ParamLimits

0x70eb,	// (0x00095565) linegrid_cam4_burst_pane_g2

0xda8d,	// (0x0009bf07) linegrid_cam4_burst_pane_g3_ParamLimits

0xda8d,	// (0x0009bf07) linegrid_cam4_burst_pane_g3

0x0002,

0xfa31,	// (0x0009deab) linegrid_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0009deab) linegrid_cam4_burst_pane_g

0x70fc,	// (0x00095576) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x70fc,	// (0x00095576) linegrid_cam4_burst_pane_g3_copy1

0xda9a,	// (0x0009bf14) linegrid_cam4_burst_pane_g4_ParamLimits

0xda9a,	// (0x0009bf14) linegrid_cam4_burst_pane_g4

0x711a,	// (0x00095594) linegrid_cam4_burst_pane_g5_ParamLimits

0x711a,	// (0x00095594) linegrid_cam4_burst_pane_g5

0x712b,	// (0x000955a5) linegrid_cam4_burst_pane_g6_ParamLimits

0x712b,	// (0x000955a5) linegrid_cam4_burst_pane_g6

0xdaa7,	// (0x0009bf21) linegrid_cam4_burst_pane_g7_ParamLimits

0xdaa7,	// (0x0009bf21) linegrid_cam4_burst_pane_g7

0x7142,	// (0x000955bc) cell_cam4_burst_pane_g1

0xdac0,	// (0x0009bf3a) main_cam5_pane_t1_ParamLimits

0xdac0,	// (0x0009bf3a) main_cam5_pane_t1

0xdad2,	// (0x0009bf4c) main_cam5_pane_t2_ParamLimits

0xdad2,	// (0x0009bf4c) main_cam5_pane_t2

0xdae4,	// (0x0009bf5e) main_cam5_pane_t3_ParamLimits

0xdae4,	// (0x0009bf5e) main_cam5_pane_t3

0xdaf6,	// (0x0009bf70) main_cam5_pane_t4_ParamLimits

0xdaf6,	// (0x0009bf70) main_cam5_pane_t4

0xdb0e,	// (0x0009bf88) main_cam5_pane_t5_ParamLimits

0xdb0e,	// (0x0009bf88) main_cam5_pane_t5

0xdb22,	// (0x0009bf9c) main_cam5_pane_t6_ParamLimits

0xdb22,	// (0x0009bf9c) main_cam5_pane_t6

0xdb36,	// (0x0009bfb0) main_cam5_pane_t7_ParamLimits

0xdb36,	// (0x0009bfb0) main_cam5_pane_t7

0xdb48,	// (0x0009bfc2) main_cam5_pane_t8_ParamLimits

0xdb48,	// (0x0009bfc2) main_cam5_pane_t8

0xdb66,	// (0x0009bfe0) main_cam5_pane_t9_ParamLimits

0xdb66,	// (0x0009bfe0) main_cam5_pane_t9

0xdb78,	// (0x0009bff2) main_cam5_pane_t10_ParamLimits

0xdb78,	// (0x0009bff2) main_cam5_pane_t10

0xdb8a,	// (0x0009c004) main_cam5_pane_t11_ParamLimits

0xdb8a,	// (0x0009c004) main_cam5_pane_t11

0xdb9e,	// (0x0009c018) main_cam5_pane_t12_ParamLimits

0xdb9e,	// (0x0009c018) main_cam5_pane_t12

0xdbb5,	// (0x0009c02f) main_cam5_pane_t13_ParamLimits

0xdbb5,	// (0x0009c02f) main_cam5_pane_t13

0x000c,

0xfa3d,	// (0x0009deb7) main_cam5_pane_t_ParamLimits

0xfa3d,	// (0x0009deb7) main_cam5_pane_t

0x0a8f,	// (0x0008ef09) popup_scut_keymap_window_ParamLimits

0x0a8f,	// (0x0008ef09) popup_scut_keymap_window

0x7155,	// (0x000955cf) aid_size_cell_brow_shortcut

0xa3d2,	// (0x0009884c) bg_popup_window_pane_cp010

0x7161,	// (0x000955db) grid_scut_pane

0x716d,	// (0x000955e7) cell_scut_pane_ParamLimits

0x716d,	// (0x000955e7) cell_scut_pane

0x7186,	// (0x00095600) cell_scut_pane_g1

0xdbd8,	// (0x0009c052) cell_scut_pane_t1

0xdbe7,	// (0x0009c061) cell_scut_pane_t2

0x718f,	// (0x00095609) cell_scut_pane_t3

0x0002,

0xfa58,	// (0x0009ded2) cell_scut_pane_t

0x4ed3,	// (0x0009334d) main_mup3_pane_g8_ParamLimits

0x4ed3,	// (0x0009334d) main_mup3_pane_g8

0x643c,	// (0x000948b6) area_vitu2_query_pane_ParamLimits

0x643c,	// (0x000948b6) area_vitu2_query_pane

0xfe4c,	// (0x0008e2c6) input_focus_pane_cp08

0xdbf6,	// (0x0009c070) area_vitu2_query_pane_g1

0xff51,	// (0x0008e3cb) area_vitu2_query_pane_g2

0x0001,

0xfa5f,	// (0x0009ded9) area_vitu2_query_pane_g

0x719d,	// (0x00095617) area_vitu2_query_pane_t1_ParamLimits

0x719d,	// (0x00095617) area_vitu2_query_pane_t1

0x71b1,	// (0x0009562b) area_vitu2_query_pane_t2_ParamLimits

0x71b1,	// (0x0009562b) area_vitu2_query_pane_t2

0xff64,	// (0x0008e3de) area_vitu2_query_pane_t3_ParamLimits

0xff64,	// (0x0008e3de) area_vitu2_query_pane_t3

0x71c5,	// (0x0009563f) area_vitu2_query_pane_t4_ParamLimits

0x71c5,	// (0x0009563f) area_vitu2_query_pane_t4

0x71ed,	// (0x00095667) area_vitu2_query_pane_t5_ParamLimits

0x71ed,	// (0x00095667) area_vitu2_query_pane_t5

0x7215,	// (0x0009568f) area_vitu2_query_pane_t6_ParamLimits

0x7215,	// (0x0009568f) area_vitu2_query_pane_t6

0x0006,

0xfa64,	// (0x0009dede) area_vitu2_query_pane_t_ParamLimits

0xfa64,	// (0x0009dede) area_vitu2_query_pane_t

0x7261,	// (0x000956db) bg_button_pane_cp018

0x726f,	// (0x000956e9) bg_button_pane_cp021

0xff8c,	// (0x0008e406) bg_button_pane_cp022

0xff9d,	// (0x0008e417) input_focus_pane_cp09

0xb38a,	// (0x00099804) aid_size_touch_mv_arrow_left

0xb3b5,	// (0x0009982f) aid_size_touch_mv_arrow_right

0x6ab1,	// (0x00094f2b) main_cset_slider_pane_g16_ParamLimits

0x6ab1,	// (0x00094f2b) main_cset_slider_pane_g16

0x6abf,	// (0x00094f39) main_cset_slider_pane_g17_ParamLimits

0x6abf,	// (0x00094f39) main_cset_slider_pane_g17

0x7142,	// (0x000955bc) cell_cam4_burst_pane_g1_ParamLimits

0x99c6,	// (0x00097e40) compa_mode_pane

0x6cd0,	// (0x0009514a) popup_vtel_slider_window_g3_ParamLimits

0x6cd0,	// (0x0009514a) popup_vtel_slider_window_g3

0x6ce7,	// (0x00095161) popup_vtel_slider_window_g4_ParamLimits

0x6ce7,	// (0x00095161) popup_vtel_slider_window_g4

0x6cfe,	// (0x00095178) popup_vtel_slider_window_t1_ParamLimits

0x6cfe,	// (0x00095178) popup_vtel_slider_window_t1

0x99c6,	// (0x00097e40) main_cl_pane

0xa7cf,	// (0x00098c49) popup_imed_adjust2_window_ParamLimits

0xc96e,	// (0x0009ade8) bg_tb_trans_pane_cp05_ParamLimits

0xd296,	// (0x0009b710) popup_imed_adjust2_window_g1_ParamLimits

0xd2a5,	// (0x0009b71f) popup_imed_adjust2_window_g2_ParamLimits

0xd2a5,	// (0x0009b71f) popup_imed_adjust2_window_g2

0xd2b1,	// (0x0009b72b) popup_imed_adjust2_window_g3_ParamLimits

0xd2b1,	// (0x0009b72b) popup_imed_adjust2_window_g3

0x0002,

0xf7cb,	// (0x0009dc45) popup_imed_adjust2_window_g_ParamLimits

0xf7cb,	// (0x0009dc45) popup_imed_adjust2_window_g

0xd2bd,	// (0x0009b737) popup_imed_adjust2_window_t1_ParamLimits

0xd2d5,	// (0x0009b74f) slider_imed_adjust_pane_ParamLimits

0xd2e9,	// (0x0009b763) slider_imed_adjust_pane_g1_ParamLimits

0xd2f9,	// (0x0009b773) slider_imed_adjust_pane_g2_ParamLimits

0xd309,	// (0x0009b783) slider_imed_adjust_pane_g3_ParamLimits

0xd31a,	// (0x0009b794) slider_imed_adjust_pane_g4_ParamLimits

0xf7d2,	// (0x0009dc4c) slider_imed_adjust_pane_g_ParamLimits

0x61bb,	// (0x00094635) aid_touch_area_cam4_ParamLimits

0x61bb,	// (0x00094635) aid_touch_area_cam4

0xabc2,	// (0x0009903c) battery_pane_cp01

0x628e,	// (0x00094708) main_camera4_pane_g6_ParamLimits

0x628e,	// (0x00094708) main_camera4_pane_g6

0x62b8,	// (0x00094732) main_camera4_pane_t2_ParamLimits

0x62b8,	// (0x00094732) main_camera4_pane_t2

0x0001,

0xf8d9,	// (0x0009dd53) main_camera4_pane_t_ParamLimits

0xf8d9,	// (0x0009dd53) main_camera4_pane_t

0x62ed,	// (0x00094767) aid_touch_area_vid4_ParamLimits

0x62ed,	// (0x00094767) aid_touch_area_vid4

0x6341,	// (0x000947bb) main_video4_pane_g5_ParamLimits

0x6341,	// (0x000947bb) main_video4_pane_g5

0x6366,	// (0x000947e0) vid4_progress_pane_ParamLimits

0x6366,	// (0x000947e0) vid4_progress_pane

0xd8db,	// (0x0009bd55) main_cset_slider_pane_g18_ParamLimits

0xd8db,	// (0x0009bd55) main_cset_slider_pane_g18

0xdab4,	// (0x0009bf2e) cell_cam4_burst_pane_g2_ParamLimits

0xdab4,	// (0x0009bf2e) cell_cam4_burst_pane_g2

0x0001,

0xfa38,	// (0x0009deb2) cell_cam4_burst_pane_g_ParamLimits

0xfa38,	// (0x0009deb2) cell_cam4_burst_pane_g

0xa1b5,	// (0x0009862f) bg_cl_pane_ParamLimits

0xa1b5,	// (0x0009862f) bg_cl_pane

0x727b,	// (0x000956f5) cl_header_pane_ParamLimits

0x727b,	// (0x000956f5) cl_header_pane

0x728f,	// (0x00095709) cl_listscroll_pane_ParamLimits

0x728f,	// (0x00095709) cl_listscroll_pane

0xdc02,	// (0x0009c07c) bg_cl_pane_g1

0xdc0a,	// (0x0009c084) bg_cl_pane_g2

0xdc12,	// (0x0009c08c) bg_cl_pane_g3

0xdc1a,	// (0x0009c094) bg_cl_pane_g4

0xdc22,	// (0x0009c09c) bg_cl_pane_g5

0xdc2a,	// (0x0009c0a4) bg_cl_pane_g6

0xdc32,	// (0x0009c0ac) bg_cl_pane_g7

0xdc3a,	// (0x0009c0b4) bg_cl_pane_g8

0xdc42,	// (0x0009c0bc) bg_cl_pane_g9

0x0008,

0xfa73,	// (0x0009deed) bg_cl_pane_g

0x729f,	// (0x00095719) aid_height_cl_leading_ParamLimits

0x729f,	// (0x00095719) aid_height_cl_leading

0x72ab,	// (0x00095725) aid_height_cl_text_ParamLimits

0x72ab,	// (0x00095725) aid_height_cl_text

0xadb9,	// (0x00099233) bg_cl_header_pane_ParamLimits

0xadb9,	// (0x00099233) bg_cl_header_pane

0x72ca,	// (0x00095744) cl_header_pane_g1_ParamLimits

0x72ca,	// (0x00095744) cl_header_pane_g1

0x72e0,	// (0x0009575a) cl_header_pane_t1_ParamLimits

0x72e0,	// (0x0009575a) cl_header_pane_t1

0xdc4a,	// (0x0009c0c4) cl_list_pane

0xd8ae,	// (0x0009bd28) hc_scroll_pane_cp01

0xa619,	// (0x00098a93) bg_cl_header_pane_g1

0xd790,	// (0x0009bc0a) bg_cl_header_pane_g2

0xa639,	// (0x00098ab3) bg_cl_header_pane_g3

0xd7a0,	// (0x0009bc1a) bg_cl_header_pane_g4

0xd798,	// (0x0009bc12) bg_cl_header_pane_g5

0xd9c3,	// (0x0009be3d) bg_cl_header_pane_g6

0xd7b8,	// (0x0009bc32) bg_cl_header_pane_g7

0xd7c0,	// (0x0009bc3a) bg_cl_header_pane_g8

0xd7b0,	// (0x0009bc2a) bg_cl_header_pane_g9

0x0008,

0xfa86,	// (0x0009df00) bg_cl_header_pane_g

0x72f9,	// (0x00095773) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x72f9,	// (0x00095773) hc_cl_list_double_graphic_heading_pane

0x730c,	// (0x00095786) hc_cl_list_single_graphic_pane_ParamLimits

0x730c,	// (0x00095786) hc_cl_list_single_graphic_pane

0x7324,	// (0x0009579e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7324,	// (0x0009579e) hc_cl_list_single_graphic_pane_g1

0x7330,	// (0x000957aa) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7330,	// (0x000957aa) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa99,	// (0x0009df13) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa99,	// (0x0009df13) hc_cl_list_single_graphic_pane_g

0x7344,	// (0x000957be) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7344,	// (0x000957be) hc_cl_list_single_graphic_pane_t1

0x7324,	// (0x0009579e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7324,	// (0x0009579e) hc_cl_list_double_graphic_heading_pane_g1

0x7359,	// (0x000957d3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7359,	// (0x000957d3) hc_cl_list_double_graphic_heading_pane_g2

0x736d,	// (0x000957e7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x736d,	// (0x000957e7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9e,	// (0x0009df18) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9e,	// (0x0009df18) hc_cl_list_double_graphic_heading_pane_g

0x7381,	// (0x000957fb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7381,	// (0x000957fb) hc_cl_list_double_graphic_heading_pane_t1

0x7396,	// (0x00095810) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7396,	// (0x00095810) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa5,	// (0x0009df1f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa5,	// (0x0009df1f) hc_cl_list_double_graphic_heading_pane_t

0xad22,	// (0x0009919c) vid4_progress_pane_g1

0xad32,	// (0x000991ac) vid4_progress_pane_g2

0x73ab,	// (0x00095825) vid4_progress_pane_g3

0xabf9,	// (0x00099073) vid4_progress_pane_g4

0x0004,

0xfaaa,	// (0x0009df24) vid4_progress_pane_g

0x73bd,	// (0x00095837) vid4_progress_pane_t1

0xad42,	// (0x000991bc) vid4_progress_pane_t2

0x0002,

0xfab5,	// (0x0009df2f) vid4_progress_pane_t

0x73d5,	// (0x0009584f) wait_bar_pane_cp07

0xcb93,	// (0x0009b00d) blid_firmament_pane_ParamLimits

0xcbd6,	// (0x0009b050) popup_blid_sat_info2_window_g1

0xcbfa,	// (0x0009b074) popup_blid_sat_info2_window_t3

0xcc08,	// (0x0009b082) popup_blid_sat_info2_window_t4

0xcc16,	// (0x0009b090) popup_blid_sat_info2_window_t5

0xcc24,	// (0x0009b09e) popup_blid_sat_info2_window_t6

0xcc34,	// (0x0009b0ae) popup_blid_sat_info2_window_t7

0xcc42,	// (0x0009b0bc) popup_blid_sat_info2_window_t8

0xcc50,	// (0x0009b0ca) popup_blid_sat_info2_window_t9

0xcc5e,	// (0x0009b0d8) popup_blid_sat_info2_window_t10

0xcd26,	// (0x0009b1a0) aid_firma_cardinal_ParamLimits

0xcd3a,	// (0x0009b1b4) blid_firmament_pane_t1_ParamLimits

0xcd51,	// (0x0009b1cb) blid_firmament_pane_t2_ParamLimits

0xcd68,	// (0x0009b1e2) blid_firmament_pane_t3_ParamLimits

0xcd7f,	// (0x0009b1f9) blid_firmament_pane_t4_ParamLimits

0xf6bf,	// (0x0009db39) blid_firmament_pane_t_ParamLimits

0xcd96,	// (0x0009b210) blid_sat_info_pane_ParamLimits

0xadb9,	// (0x00099233) main_cam_set_pane_ParamLimits

0x57ab,	// (0x00093c25) aid_size_cell_colour_35_ParamLimits

0x57cb,	// (0x00093c45) aid_size_cell_colour_112_ParamLimits

0x57eb,	// (0x00093c65) aid_size_cell_effect_ParamLimits

0xc96e,	// (0x0009ade8) bg_tb_trans_pane_cp02_ParamLimits

0xaf9d,	// (0x00099417) heading_imed_pane_ParamLimits

0x580b,	// (0x00093c85) listscroll_imed_pane_ParamLimits

0xbf84,	// (0x0009a3fe) popup_call2_audio_first_window_g5_ParamLimits

0xbf84,	// (0x0009a3fe) popup_call2_audio_first_window_g5

0x5dc8,	// (0x00094242) aid_size_touch_image3_arrow_left_ParamLimits

0x5dc8,	// (0x00094242) aid_size_touch_image3_arrow_left

0x5df4,	// (0x0009426e) aid_size_touch_image3_arrow_right_ParamLimits

0x5df4,	// (0x0009426e) aid_size_touch_image3_arrow_right

0xad57,	// (0x000991d1) vid4_progress_pane_t3

0x5b24,	// (0x00093f9e) main_hwr_training_symbol_option_pane_ParamLimits

0x5b24,	// (0x00093f9e) main_hwr_training_symbol_option_pane

0xd5d2,	// (0x0009ba4c) popup_hwr_training_preview_window_ParamLimits

0xd5d2,	// (0x0009ba4c) popup_hwr_training_preview_window

0x5b44,	// (0x00093fbe) hwr_training_navi_pane_g5_ParamLimits

0x5b44,	// (0x00093fbe) hwr_training_navi_pane_g5

0xd77e,	// (0x0009bbf8) popup_char_count_window

0xadb9,	// (0x00099233) bg_popup_sub_pane_cp20_ParamLimits

0x6e16,	// (0x00095290) list_vitu2_match_list_pane_ParamLimits

0x6e25,	// (0x0009529f) vitu2_page_scroll_pane_ParamLimits

0x6e25,	// (0x0009529f) vitu2_page_scroll_pane

0xdc53,	// (0x0009c0cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc53,	// (0x0009c0cd) list_single_hwr_training_symbol_option_pane

0xdc66,	// (0x0009c0e0) list_single_hwr_training_symbol_option_pane_g1

0xdc6e,	// (0x0009c0e8) list_single_hwr_training_symbol_option_pane_t1

0xdc7c,	// (0x0009c0f6) bg_button_pane_cp023

0xdc85,	// (0x0009c0ff) bg_button_pane_cp024

0x7414,	// (0x0009588e) vitu2_page_scroll_pane_g1

0x741c,	// (0x00095896) vitu2_page_scroll_pane_g2

0x0001,

0xfabc,	// (0x0009df36) vitu2_page_scroll_pane_g

0x7426,	// (0x000958a0) vitu2_page_scroll_pane_t1

0xd58f,	// (0x0009ba09) popup_char_count_window_g1

0xdcb8,	// (0x0009c132) popup_char_count_window_g2

0xd598,	// (0x0009ba12) popup_char_count_window_g3

0x0002,

0xfac1,	// (0x0009df3b) popup_char_count_window_g

0xdcc1,	// (0x0009c13b) popup_char_count_window_t1

0x99c6,	// (0x00097e40) main_vded2_pane

0xd282,	// (0x0009b6fc) aid_size_cell_imed_line

0xd28c,	// (0x0009b706) grid_imed_line_width_pane

0xac7c,	// (0x000990f6) vid4_indicators_pane_g4

0xdccf,	// (0x0009c149) cell_imed_line_width_pane_ParamLimits

0xdccf,	// (0x0009c149) cell_imed_line_width_pane

0xdce5,	// (0x0009c15f) cell_imed_line_width_pane_g1

0xd5a1,	// (0x0009ba1b) cell_imed_line_width_pane_g2

0x0001,

0xfac8,	// (0x0009df42) cell_imed_line_width_pane_g

0x7435,	// (0x000958af) main_vded2_pane_g1_ParamLimits

0x7435,	// (0x000958af) main_vded2_pane_g1

0x7450,	// (0x000958ca) main_vded2_pane_g2_ParamLimits

0x7450,	// (0x000958ca) main_vded2_pane_g2

0x0001,

0xfacd,	// (0x0009df47) main_vded2_pane_g_ParamLimits

0xfacd,	// (0x0009df47) main_vded2_pane_g

0x7462,	// (0x000958dc) vded2_slider_pane_ParamLimits

0x7462,	// (0x000958dc) vded2_slider_pane

0x7472,	// (0x000958ec) aid_size_touch_vded2_end

0x747c,	// (0x000958f6) aid_size_touch_vded2_playhead

0xdcee,	// (0x0009c168) aid_size_touch_vded2_start

0xdcf6,	// (0x0009c170) vded2_slider_bg_pane

0xdcff,	// (0x0009c179) vded2_slider_pane_g1

0xdd08,	// (0x0009c182) vded2_slider_pane_g2

0x7486,	// (0x00095900) vded2_slider_pane_g3

0x0002,

0xfad2,	// (0x0009df4c) vded2_slider_pane_g

0xd5a9,	// (0x0009ba23) vded2_slider_bg_pane_g1

0xd5b2,	// (0x0009ba2c) vded2_slider_bg_pane_g2

0xd5bb,	// (0x0009ba35) vded2_slider_bg_pane_g3

0x0002,

0xfad9,	// (0x0009df53) vded2_slider_bg_pane_g

0x33f1,	// (0x0009186b) aid_postcard_touch_down_pane_ParamLimits

0x33f1,	// (0x0009186b) aid_postcard_touch_down_pane

0x3409,	// (0x00091883) aid_postcard_touch_up_pane_ParamLimits

0x3409,	// (0x00091883) aid_postcard_touch_up_pane

0x99c6,	// (0x00097e40) main_blid2_pane

0xa7b1,	// (0x00098c2b) popup_blid2_search_window

0x99c6,	// (0x00097e40) blid2_gps_pane

0x99c6,	// (0x00097e40) blid2_navig_pane

0x99c6,	// (0x00097e40) blid2_search_pane

0x99c6,	// (0x00097e40) blid2_tripm_pane

0x7491,	// (0x0009590b) blid2_search_pane_g1_ParamLimits

0x7491,	// (0x0009590b) blid2_search_pane_g1

0x74a4,	// (0x0009591e) blid2_search_pane_t1_ParamLimits

0x74a4,	// (0x0009591e) blid2_search_pane_t1

0x74b6,	// (0x00095930) aid_size_cell_blid2_gps_ParamLimits

0x74b6,	// (0x00095930) aid_size_cell_blid2_gps

0x74ce,	// (0x00095948) blid2_gps_pane_g1_ParamLimits

0x74ce,	// (0x00095948) blid2_gps_pane_g1

0x74e2,	// (0x0009595c) grid_blid2_satellite_pane_ParamLimits

0x74e2,	// (0x0009595c) grid_blid2_satellite_pane

0x74fa,	// (0x00095974) blid2_navig_pane_g1_ParamLimits

0x74fa,	// (0x00095974) blid2_navig_pane_g1

0x7506,	// (0x00095980) blid2_navig_pane_t1_ParamLimits

0x7506,	// (0x00095980) blid2_navig_pane_t1

0x7521,	// (0x0009599b) blid2_navig_pane_t2_ParamLimits

0x7521,	// (0x0009599b) blid2_navig_pane_t2

0x0001,

0xfae0,	// (0x0009df5a) blid2_navig_pane_t_ParamLimits

0xfae0,	// (0x0009df5a) blid2_navig_pane_t

0x753c,	// (0x000959b6) blid2_navig_ring_pane_ParamLimits

0x753c,	// (0x000959b6) blid2_navig_ring_pane

0x7557,	// (0x000959d1) blid2_speed_pane_ParamLimits

0x7557,	// (0x000959d1) blid2_speed_pane

0x7563,	// (0x000959dd) blid2_tripm_pane_g1_ParamLimits

0x7563,	// (0x000959dd) blid2_tripm_pane_g1

0x757e,	// (0x000959f8) blid2_tripm_pane_g2_ParamLimits

0x757e,	// (0x000959f8) blid2_tripm_pane_g2

0x7592,	// (0x00095a0c) blid2_tripm_pane_g3_ParamLimits

0x7592,	// (0x00095a0c) blid2_tripm_pane_g3

0x75a6,	// (0x00095a20) blid2_tripm_pane_g4_ParamLimits

0x75a6,	// (0x00095a20) blid2_tripm_pane_g4

0x75ba,	// (0x00095a34) blid2_tripm_pane_g5_ParamLimits

0x75ba,	// (0x00095a34) blid2_tripm_pane_g5

0x0005,

0xfae5,	// (0x0009df5f) blid2_tripm_pane_g_ParamLimits

0xfae5,	// (0x0009df5f) blid2_tripm_pane_g

0x75e0,	// (0x00095a5a) blid2_tripm_pane_t1_ParamLimits

0x75e0,	// (0x00095a5a) blid2_tripm_pane_t1

0x75f9,	// (0x00095a73) blid2_tripm_pane_t2_ParamLimits

0x75f9,	// (0x00095a73) blid2_tripm_pane_t2

0x7612,	// (0x00095a8c) blid2_tripm_pane_t3_ParamLimits

0x7612,	// (0x00095a8c) blid2_tripm_pane_t3

0x0003,

0xfaf2,	// (0x0009df6c) blid2_tripm_pane_t_ParamLimits

0xfaf2,	// (0x0009df6c) blid2_tripm_pane_t

0x7659,	// (0x00095ad3) cell_blid2_satellite_pane_ParamLimits

0x7659,	// (0x00095ad3) cell_blid2_satellite_pane

0x7675,	// (0x00095aef) cell_blid2_satellite_pane_g1

0xdd10,	// (0x0009c18a) cell_blid2_satellite_pane_t1

0xcda6,	// (0x0009b220) blid2_speed_pane_g1

0xdd1e,	// (0x0009c198) blid2_speed_pane_t1

0xdd2c,	// (0x0009c1a6) blid2_speed_pane_t2

0x0001,

0xfafb,	// (0x0009df75) blid2_speed_pane_t

0xcda6,	// (0x0009b220) blid2_navig_ring_pane_g1

0x767e,	// (0x00095af8) blid2_navig_ring_pane_g2

0x7686,	// (0x00095b00) blid2_navig_ring_pane_g3

0x768e,	// (0x00095b08) blid2_navig_ring_pane_g4

0x7696,	// (0x00095b10) blid2_navig_ring_pane_g5

0x0004,

0xfb00,	// (0x0009df7a) blid2_navig_ring_pane_g

0x99c6,	// (0x00097e40) bg_popup_window_pane_cp011

0xdd3a,	// (0x0009c1b4) popup_blid2_search_window_g1

0xdd42,	// (0x0009c1bc) popup_blid2_search_window_t1

0xdd50,	// (0x0009c1ca) popup_blid2_search_window_t2

0x0001,

0xfb0b,	// (0x0009df85) popup_blid2_search_window_t

0xa528,	// (0x000989a2) main_browser_pane_g1

0xa1b5,	// (0x0009862f) main_browser_pane_ParamLimits

0xadb9,	// (0x00099233) bg_button_pane_cp011_ParamLimits

0x6673,	// (0x00094aed) cell_vitu2_function_pane_g1_ParamLimits

0xc96e,	// (0x0009ade8) bg_popup_sub_pane_cp22_ParamLimits

0xfe4c,	// (0x0008e2c6) input_focus_pane_cp08_ParamLimits

0x6fc7,	// (0x00095441) popup_vitu2_query_button_pane_ParamLimits

0x6fc7,	// (0x00095441) popup_vitu2_query_button_pane

0xfe63,	// (0x0008e2dd) popup_vitu2_query_input_button_pane

0xd9fe,	// (0x0009be78) popup_vitu2_query_window_g1_ParamLimits

0xfe6d,	// (0x0008e2e7) popup_vitu2_query_window_g2_ParamLimits

0xfa0c,	// (0x0009de86) popup_vitu2_query_window_g_ParamLimits

0x99c6,	// (0x00097e40) bg_button_pane_cp026

0x769e,	// (0x00095b18) popup_vitu2_query_input_button_pane_g1

0x99c6,	// (0x00097e40) bg_button_pane_cp025

0xdd5e,	// (0x0009c1d8) popup_vitu2_query_button_pane_t1

0x4aef,	// (0x00092f69) main_mp3_pane_t6

0x4afd,	// (0x00092f77) popup_slider_window_cp01

0xabe0,	// (0x0009905a) cam4_battery_pane

0xac35,	// (0x000990af) cam4_battery_pane_cp02

0xad1a,	// (0x00099194) cam4_battery_pane_cp01

0xad1a,	// (0x00099194) cam4_battery_pane_cp03

0xcda6,	// (0x0009b220) cam4_battery_pane_g1

0xdd6c,	// (0x0009c1e6) cam4_battery_pane_g2

0x0001,

0xfb10,	// (0x0009df8a) cam4_battery_pane_g

0xcc6c,	// (0x0009b0e6) popup_blid_sat_info2_window_t11

0xb38a,	// (0x00099804) aid_size_touch_mv_arrow_left_ParamLimits

0xb3b5,	// (0x0009982f) aid_size_touch_mv_arrow_right_ParamLimits

0xb413,	// (0x0009988d) navi_pane_g1_ParamLimits

0xb41f,	// (0x00099899) navi_pane_g2_ParamLimits

0xb44d,	// (0x000998c7) navi_pane_g3_ParamLimits

0xf3d1,	// (0x0009d84b) navi_pane_g_ParamLimits

0x2e08,	// (0x00091282) navi_pane_mv_t1_ParamLimits

0x5817,	// (0x00093c91) grid_imed_effect_pane_ParamLimits

0x1997,	// (0x0008fe11) aid_placing_vt_slider_lsc

0xa473,	// (0x000988ed) aid_placing_vt_slider_prt

0xadb9,	// (0x00099233) bg_tb_trans_pane_cp01_ParamLimits

0xceed,	// (0x0009b367) popup_image_details_window_g1_ParamLimits

0xcf00,	// (0x0009b37a) popup_image_details_window_g2_ParamLimits

0xcf15,	// (0x0009b38f) popup_image_details_window_g3_ParamLimits

0xcf15,	// (0x0009b38f) popup_image_details_window_g3

0xf704,	// (0x0009db7e) popup_image_details_window_g_ParamLimits

0xcf29,	// (0x0009b3a3) popup_image_details_window_t1_ParamLimits

0xcf3b,	// (0x0009b3b5) popup_image_details_window_t2_ParamLimits

0xcf54,	// (0x0009b3ce) popup_image_details_window_t3_ParamLimits

0xcf68,	// (0x0009b3e2) popup_image_details_window_t4_ParamLimits

0xcf83,	// (0x0009b3fd) popup_image_details_window_t5_ParamLimits

0xf70b,	// (0x0009db85) popup_image_details_window_t_ParamLimits

0x72b7,	// (0x00095731) cl_header_name_pane_ParamLimits

0x72b7,	// (0x00095731) cl_header_name_pane

0x76a6,	// (0x00095b20) cl_header_name_pane_t1_ParamLimits

0x76a6,	// (0x00095b20) cl_header_name_pane_t1

0x76c7,	// (0x00095b41) cl_header_name_pane_t2_ParamLimits

0x76c7,	// (0x00095b41) cl_header_name_pane_t2

0x7709,	// (0x00095b83) cl_header_name_pane_t3_ParamLimits

0x7709,	// (0x00095b83) cl_header_name_pane_t3

0x0002,

0xfb15,	// (0x0009df8f) cl_header_name_pane_t_ParamLimits

0xfb15,	// (0x0009df8f) cl_header_name_pane_t

0xb4dc,	// (0x00099956) navi_pane_mv_g2_ParamLimits

0xd758,	// (0x0009bbd2) field_vitu2_entry_pane_g1_ParamLimits

0xd764,	// (0x0009bbde) field_vitu2_entry_pane_g2_ParamLimits

0xd770,	// (0x0009bbea) field_vitu2_entry_pane_g3_ParamLimits

0xd770,	// (0x0009bbea) field_vitu2_entry_pane_g3

0xf90b,	// (0x0009dd85) field_vitu2_entry_pane_g_ParamLimits

0xacb1,	// (0x0009912b) cell_vitu2_itu_pane_g1_ParamLimits

0x6607,	// (0x00094a81) cell_vitu2_itu_pane_g2_ParamLimits

0x6607,	// (0x00094a81) cell_vitu2_itu_pane_g2

0x0001,

0xf917,	// (0x0009dd91) cell_vitu2_itu_pane_g_ParamLimits

0xf917,	// (0x0009dd91) cell_vitu2_itu_pane_g

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp05_ParamLimits

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp05

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp03

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp04

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp10_ParamLimits

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp10

0xf09e,	// (0x0009d518) bg_vkb2_func_pane_cp08

0x7261,	// (0x000956db) bg_vkb2_func_pane_cp06

0x726f,	// (0x000956e9) bg_vkb2_func_pane_cp07

0xdc8e,	// (0x0009c108) bg_vkb2_func_pane_cp11_ParamLimits

0xdc8e,	// (0x0009c108) bg_vkb2_func_pane_cp11

0xdca3,	// (0x0009c11d) bg_vkb2_func_pane_cp12_ParamLimits

0xdca3,	// (0x0009c11d) bg_vkb2_func_pane_cp12

0x99c6,	// (0x00097e40) bg_vkb2_func_pane_cp09

0xd790,	// (0x0009bc0a) bg_vkb2_func_pane_g1

0xa639,	// (0x00098ab3) bg_vkb2_func_pane_g2

0xd798,	// (0x0009bc12) bg_vkb2_func_pane_g3

0xd7a0,	// (0x0009bc1a) bg_vkb2_func_pane_g4

0xd9c3,	// (0x0009be3d) bg_vkb2_func_pane_g5

0xd7b8,	// (0x0009bc32) bg_vkb2_func_pane_g6

0xd7c0,	// (0x0009bc3a) bg_vkb2_func_pane_g7

0xd7b0,	// (0x0009bc2a) bg_vkb2_func_pane_g8

0xa619,	// (0x00098a93) bg_vkb2_func_pane_g9

0x0008,

0xfb1c,	// (0x0009df96) bg_vkb2_func_pane_g

0x75ce,	// (0x00095a48) blid2_tripm_pane_g6_ParamLimits

0x75ce,	// (0x00095a48) blid2_tripm_pane_g6

0xd690,	// (0x0009bb0a) mp4_progress_pane_g1

0x7645,	// (0x00095abf) blid2_tripm_values_pane_ParamLimits

0x7645,	// (0x00095abf) blid2_tripm_values_pane

0x773a,	// (0x00095bb4) blid2_tripm_values_pane_t1

0x7748,	// (0x00095bc2) blid2_tripm_values_pane_t2

0x7756,	// (0x00095bd0) blid2_tripm_values_pane_t3

0x7764,	// (0x00095bde) blid2_tripm_values_pane_t4

0x7772,	// (0x00095bec) blid2_tripm_values_pane_t5

0x7780,	// (0x00095bfa) blid2_tripm_values_pane_t6

0x778e,	// (0x00095c08) blid2_tripm_values_pane_t7

0x779c,	// (0x00095c16) blid2_tripm_values_pane_t8

0x77aa,	// (0x00095c24) blid2_tripm_values_pane_t9

0x0008,

0xfb2f,	// (0x0009dfa9) blid2_tripm_values_pane_t

0x19d4,	// (0x0008fe4e) call_video_pane_t1_ParamLimits

0x19ee,	// (0x0008fe68) call_video_pane_t2_ParamLimits

0xf253,	// (0x0009d6cd) call_video_pane_t_ParamLimits

0xfc72,	// (0x0008e0ec) msg_header_pane_g1_ParamLimits

0xb6c8,	// (0x00099b42) msg_header_pane_g2_ParamLimits

0xb6c8,	// (0x00099b42) msg_header_pane_g2

0x0001,

0xf474,	// (0x0009d8ee) msg_header_pane_g_ParamLimits

0xf474,	// (0x0009d8ee) msg_header_pane_g

0xa1b5,	// (0x0009862f) main_clock2_pane_ParamLimits

0x5514,	// (0x0009398e) grid_clock2_toolbar_pane_ParamLimits

0x5514,	// (0x0009398e) grid_clock2_toolbar_pane

0x5514,	// (0x0009398e) listscroll_clock2_pane_ParamLimits

0x5514,	// (0x0009398e) listscroll_clock2_pane

0x55f3,	// (0x00093a6d) main_clock2_pane_t3_ParamLimits

0x55f3,	// (0x00093a6d) main_clock2_pane_t3

0x5616,	// (0x00093a90) main_clock2_pane_t4_ParamLimits

0x5616,	// (0x00093a90) main_clock2_pane_t4

0xdd76,	// (0x0009c1f0) cell_clock2_toolbar_pane

0xdd7e,	// (0x0009c1f8) cell_clock2_toolbar_pane_cp01

0xdd7e,	// (0x0009c1f8) cell_clock2_toolbar_pane_cp02

0xdd86,	// (0x0009c200) cell_clock2_toolbar_pane_cp03

0xdd8e,	// (0x0009c208) list_clock2_pane

0xb30f,	// (0x00099789) scroll_pane_cp10

0xdd96,	// (0x0009c210) list_single_clock2_pane_ParamLimits

0xdd96,	// (0x0009c210) list_single_clock2_pane

0xa3d2,	// (0x0009884c) list_highlight_pane_cp08

0xdda3,	// (0x0009c21d) list_single_clock2_pane_t1

0xddb1,	// (0x0009c22b) list_single_clock2_pane_t2

0x0001,

0xfb42,	// (0x0009dfbc) list_single_clock2_pane_t

0x99c6,	// (0x00097e40) bg_button_pane_cp10

0xddbf,	// (0x0009c239) cell_clock2_toolbar_pane_g1

0x337d,	// (0x000917f7) aid_main_viewer_pane_g1_ParamLimits

0x337d,	// (0x000917f7) aid_main_viewer_pane_g1

0x338b,	// (0x00091805) aid_main_viewer_pane_g2_ParamLimits

0x338b,	// (0x00091805) aid_main_viewer_pane_g2

0x3399,	// (0x00091813) aid_main_viewer_pane_g3_ParamLimits

0x3399,	// (0x00091813) aid_main_viewer_pane_g3

0x33a8,	// (0x00091822) aid_main_viewer_pane_g4_ParamLimits

0x33a8,	// (0x00091822) aid_main_viewer_pane_g4

0x0003,

0xf485,	// (0x0009d8ff) aid_main_viewer_pane_g_ParamLimits

0xf485,	// (0x0009d8ff) aid_main_viewer_pane_g

0x3d03,	// (0x0009217d) main_calc_pane_ParamLimits

0x3d17,	// (0x00092191) main_dialer2_pane_ParamLimits

0x99c6,	// (0x00097e40) main_cam6_pane

0x99c6,	// (0x00097e40) main_vid6_pane

0x5520,	// (0x0009399a) listscroll_gen_pane_cp06_ParamLimits

0x5520,	// (0x0009399a) listscroll_gen_pane_cp06

0x5639,	// (0x00093ab3) main_clock2_pane_t5_ParamLimits

0x5639,	// (0x00093ab3) main_clock2_pane_t5

0x5697,	// (0x00093b11) aid_call2_pane_cp10_ParamLimits

0x56a9,	// (0x00093b23) aid_call_pane_cp10_ParamLimits

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56bb,	// (0x00093b35) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56bb,	// (0x00093b35) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb37e,	// (0x000997f8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c0,	// (0x0009dc3a) popup_clock_analogue_window_cp10_g_ParamLimits

0x56d1,	// (0x00093b4b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d75,	// (0x000941ef) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d75,	// (0x000941ef) cell_dialer2_keypad_pane_g2

0x0001,

0xf8aa,	// (0x0009dd24) cell_dialer2_keypad_pane_g_ParamLimits

0xf8aa,	// (0x0009dd24) cell_dialer2_keypad_pane_g

0x5d91,	// (0x0009420b) cell_dialer2_keypad_pane_t1

0x69a2,	// (0x00094e1c) main_cset_text2_pane_ParamLimits

0x69a2,	// (0x00094e1c) main_cset_text2_pane

0xdbf6,	// (0x0009c070) area_vitu2_query_pane_g1_ParamLimits

0xff51,	// (0x0008e3cb) area_vitu2_query_pane_g2_ParamLimits

0xfa5f,	// (0x0009ded9) area_vitu2_query_pane_g_ParamLimits

0x723d,	// (0x000956b7) area_vitu2_query_pane_t7_ParamLimits

0x723d,	// (0x000956b7) area_vitu2_query_pane_t7

0x7261,	// (0x000956db) bg_button_pane_cp018_ParamLimits

0x726f,	// (0x000956e9) bg_button_pane_cp021_ParamLimits

0xff8c,	// (0x0008e406) bg_button_pane_cp022_ParamLimits

0xf09e,	// (0x0009d518) bg_vkb2_func_pane_cp08_ParamLimits

0x7261,	// (0x000956db) bg_vkb2_func_pane_cp06_ParamLimits

0x726f,	// (0x000956e9) bg_vkb2_func_pane_cp07_ParamLimits

0xff9d,	// (0x0008e417) input_focus_pane_cp09_ParamLimits

0xad74,	// (0x000991ee) cam6_autofocus_pane_ParamLimits

0xad74,	// (0x000991ee) cam6_autofocus_pane

0x77b8,	// (0x00095c32) cam6_image_uncrop_pane_ParamLimits

0x77b8,	// (0x00095c32) cam6_image_uncrop_pane

0x77c7,	// (0x00095c41) cam6_indi_pane_ParamLimits

0x77c7,	// (0x00095c41) cam6_indi_pane

0x77dd,	// (0x00095c57) cam6_mode_pane_ParamLimits

0x77dd,	// (0x00095c57) cam6_mode_pane

0x77ef,	// (0x00095c69) cam6_timer_pane_ParamLimits

0x77ef,	// (0x00095c69) cam6_timer_pane

0x77fb,	// (0x00095c75) cam6_zoom_pane_ParamLimits

0x77fb,	// (0x00095c75) cam6_zoom_pane

0x7809,	// (0x00095c83) cam6_mode_pane_g1_ParamLimits

0x7809,	// (0x00095c83) cam6_mode_pane_g1

0x7819,	// (0x00095c93) cam6_mode_pane_g2_ParamLimits

0x7819,	// (0x00095c93) cam6_mode_pane_g2

0x7829,	// (0x00095ca3) cam6_mode_pane_g3_ParamLimits

0x7829,	// (0x00095ca3) cam6_mode_pane_g3

0x7839,	// (0x00095cb3) cam6_mode_pane_g4_ParamLimits

0x7839,	// (0x00095cb3) cam6_mode_pane_g4

0x0003,

0xfb47,	// (0x0009dfc1) cam6_mode_pane_g_ParamLimits

0xfb47,	// (0x0009dfc1) cam6_mode_pane_g

0xddc7,	// (0x0009c241) bg_tb_trans_pane_cp08_ParamLimits

0xddc7,	// (0x0009c241) bg_tb_trans_pane_cp08

0xddd5,	// (0x0009c24f) cam6_battery_pane_ParamLimits

0xddd5,	// (0x0009c24f) cam6_battery_pane

0xddeb,	// (0x0009c265) cam6_indi_pane_g1_ParamLimits

0xddeb,	// (0x0009c265) cam6_indi_pane_g1

0xddfd,	// (0x0009c277) cam6_indi_pane_g2_ParamLimits

0xddfd,	// (0x0009c277) cam6_indi_pane_g2

0xde0f,	// (0x0009c289) cam6_indi_pane_g3_ParamLimits

0xde0f,	// (0x0009c289) cam6_indi_pane_g3

0x0002,

0xfb50,	// (0x0009dfca) cam6_indi_pane_g_ParamLimits

0xfb50,	// (0x0009dfca) cam6_indi_pane_g

0xde21,	// (0x0009c29b) cam6_indi_pane_t1_ParamLimits

0xde21,	// (0x0009c29b) cam6_indi_pane_t1

0x63ae,	// (0x00094828) cam6_autofocus_pane_g1

0x63b6,	// (0x00094830) cam6_autofocus_pane_g2

0x63be,	// (0x00094838) cam6_autofocus_pane_g3

0x63c6,	// (0x00094840) cam6_autofocus_pane_g4

0x0003,

0xfb57,	// (0x0009dfd1) cam6_autofocus_pane_g

0xde47,	// (0x0009c2c1) cam6_timer_pane_g1

0xde4f,	// (0x0009c2c9) cam6_timer_pane_t1

0xde5d,	// (0x0009c2d7) cam6_zoom_cont_pane

0xde65,	// (0x0009c2df) cam6_zoom_pane_g1

0xde6d,	// (0x0009c2e7) cam6_zoom_pane_g2

0x7849,	// (0x00095cc3) cam6_zoom_pane_g3

0x0002,

0xfb60,	// (0x0009dfda) cam6_zoom_pane_g

0xcda6,	// (0x0009b220) cam6_battery_pane_g1

0xcda6,	// (0x0009b220) cam6_battery_pane_g2

0x0001,

0xf6c8,	// (0x0009db42) cam6_battery_pane_g

0xde75,	// (0x0009c2ef) cam6_zoom_cont_pane_g1

0xde7e,	// (0x0009c2f8) cam6_zoom_cont_pane_g2

0xde87,	// (0x0009c301) cam6_zoom_cont_pane_g3

0x0002,

0xfb67,	// (0x0009dfe1) cam6_zoom_cont_pane_g

0x7866,	// (0x00095ce0) cam6_mode_pane_cp_ParamLimits

0x7866,	// (0x00095ce0) cam6_mode_pane_cp

0x77fb,	// (0x00095c75) cam6_zoom_pane_cp_ParamLimits

0x77fb,	// (0x00095c75) cam6_zoom_pane_cp

0x7878,	// (0x00095cf2) vid6_image_uncrop_cif_pane_ParamLimits

0x7878,	// (0x00095cf2) vid6_image_uncrop_cif_pane

0x7888,	// (0x00095d02) vid6_image_uncrop_nhd_pane_ParamLimits

0x7888,	// (0x00095d02) vid6_image_uncrop_nhd_pane

0x77b8,	// (0x00095c32) vid6_image_uncrop_vga_pane_ParamLimits

0x77b8,	// (0x00095c32) vid6_image_uncrop_vga_pane

0x7897,	// (0x00095d11) vid6_image_uncrop_wvga_pane_ParamLimits

0x7897,	// (0x00095d11) vid6_image_uncrop_wvga_pane

0x78a6,	// (0x00095d20) vid6_indi_pane_ParamLimits

0x78a6,	// (0x00095d20) vid6_indi_pane

0xddc7,	// (0x0009c241) bg_tb_trans_pane_cp09_ParamLimits

0xddc7,	// (0x0009c241) bg_tb_trans_pane_cp09

0xde9f,	// (0x0009c319) cam6_battery_pane_cp_ParamLimits

0xde9f,	// (0x0009c319) cam6_battery_pane_cp

0xdeab,	// (0x0009c325) vid6_indi_pane_g1_ParamLimits

0xdeab,	// (0x0009c325) vid6_indi_pane_g1

0xdebd,	// (0x0009c337) vid6_indi_pane_g2_ParamLimits

0xdebd,	// (0x0009c337) vid6_indi_pane_g2

0xdecf,	// (0x0009c349) vid6_indi_pane_g3_ParamLimits

0xdecf,	// (0x0009c349) vid6_indi_pane_g3

0xdee6,	// (0x0009c360) vid6_indi_pane_g4_ParamLimits

0xdee6,	// (0x0009c360) vid6_indi_pane_g4

0xdefd,	// (0x0009c377) vid6_indi_pane_g5_ParamLimits

0xdefd,	// (0x0009c377) vid6_indi_pane_g5

0x0004,

0xfb6e,	// (0x0009dfe8) vid6_indi_pane_g_ParamLimits

0xfb6e,	// (0x0009dfe8) vid6_indi_pane_g

0xdf17,	// (0x0009c391) vid6_indi_pane_t1_ParamLimits

0xdf17,	// (0x0009c391) vid6_indi_pane_t1

0xdf2d,	// (0x0009c3a7) vid6_indi_pane_t2_ParamLimits

0xdf2d,	// (0x0009c3a7) vid6_indi_pane_t2

0xdf55,	// (0x0009c3cf) vid6_indi_pane_t3_ParamLimits

0xdf55,	// (0x0009c3cf) vid6_indi_pane_t3

0xdf7d,	// (0x0009c3f7) vid6_indi_pane_t4_ParamLimits

0xdf7d,	// (0x0009c3f7) vid6_indi_pane_t4

0x0003,

0xfb79,	// (0x0009dff3) vid6_indi_pane_t_ParamLimits

0xfb79,	// (0x0009dff3) vid6_indi_pane_t

0xdfa1,	// (0x0009c41b) wait_bar_pane_cp08

0x78be,	// (0x00095d38) main_cset_text2_pane_t1_ParamLimits

0x78be,	// (0x00095d38) main_cset_text2_pane_t1

0x7851,	// (0x00095ccb) listscroll_gen_pane_cp06_t1_ParamLimits

0x7851,	// (0x00095ccb) listscroll_gen_pane_cp06_t1

0x99c6,	// (0x00097e40) main_cam6_set_pane

0xcfcd,	// (0x0009b447) bg_tb_trans_pane_cp06_ParamLimits

0xabe8,	// (0x00099062) cam4_indicators_pane_g1_ParamLimits

0xabf9,	// (0x00099073) cam4_indicators_pane_g2_ParamLimits

0xf8e7,	// (0x0009dd61) cam4_indicators_pane_g_ParamLimits

0xac11,	// (0x0009908b) cam4_indicators_pane_t1_ParamLimits

0xadb9,	// (0x00099233) bg_tb_trans_pane_cp07_ParamLimits

0xac3f,	// (0x000990b9) vid4_indicators_pane_g1_ParamLimits

0xac55,	// (0x000990cf) vid4_indicators_pane_g2_ParamLimits

0xac69,	// (0x000990e3) vid4_indicators_pane_g3_ParamLimits

0xac7c,	// (0x000990f6) vid4_indicators_pane_g4_ParamLimits

0xf8f9,	// (0x0009dd73) vid4_indicators_pane_g_ParamLimits

0xac9a,	// (0x00099114) vid4_indicators_pane_t1_ParamLimits

0xad22,	// (0x0009919c) vid4_progress_pane_g1_ParamLimits

0xad32,	// (0x000991ac) vid4_progress_pane_g2_ParamLimits

0x73ab,	// (0x00095825) vid4_progress_pane_g3_ParamLimits

0xabf9,	// (0x00099073) vid4_progress_pane_g4_ParamLimits

0xfaaa,	// (0x0009df24) vid4_progress_pane_g_ParamLimits

0x73bd,	// (0x00095837) vid4_progress_pane_t1_ParamLimits

0xad42,	// (0x000991bc) vid4_progress_pane_t2_ParamLimits

0xad57,	// (0x000991d1) vid4_progress_pane_t3_ParamLimits

0xfab5,	// (0x0009df2f) vid4_progress_pane_t_ParamLimits

0x73d5,	// (0x0009584f) wait_bar_pane_cp07_ParamLimits

0x78df,	// (0x00095d59) main_cam6_set_pane_g2_ParamLimits

0x78df,	// (0x00095d59) main_cam6_set_pane_g2

0x7905,	// (0x00095d7f) main_cset6_listscroll_pane_ParamLimits

0x7905,	// (0x00095d7f) main_cset6_listscroll_pane

0x7923,	// (0x00095d9d) main_cset6_slider_pane_ParamLimits

0x7923,	// (0x00095d9d) main_cset6_slider_pane

0x7939,	// (0x00095db3) main_cset6_text2_pane_ParamLimits

0x7939,	// (0x00095db3) main_cset6_text2_pane

0xdfb0,	// (0x0009c42a) main_cset6_text_pane

0xdfb8,	// (0x0009c432) main_cset_list_pane_copy1_ParamLimits

0xdfb8,	// (0x0009c432) main_cset_list_pane_copy1

0xdfc8,	// (0x0009c442) scroll_pane_cp028_copy1

0x7947,	// (0x00095dc1) cset_list_set_pane_copy1

0x795b,	// (0x00095dd5) aid_position_infowindow_above_copy1

0x7963,	// (0x00095ddd) aid_position_infowindow_below_copy1

0x796b,	// (0x00095de5) cset_list_set_pane_g1_copy1

0xffc2,	// (0x0008e43c) cset_list_set_pane_g3_copy1_ParamLimits

0xffc2,	// (0x0008e43c) cset_list_set_pane_g3_copy1

0xffd1,	// (0x0008e44b) cset_list_set_pane_t1_copy1_ParamLimits

0xffd1,	// (0x0008e44b) cset_list_set_pane_t1_copy1

0xadb9,	// (0x00099233) list_highlight_pane_cp021_copy1_ParamLimits

0xadb9,	// (0x00099233) list_highlight_pane_cp021_copy1

0xdfd1,	// (0x0009c44b) cset6_slider_pane_ParamLimits

0xdfd1,	// (0x0009c44b) cset6_slider_pane

0xdffd,	// (0x0009c477) main_cset6_slider_pane_g1_ParamLimits

0xdffd,	// (0x0009c477) main_cset6_slider_pane_g1

0x7973,	// (0x00095ded) main_cset6_slider_pane_g2_ParamLimits

0x7973,	// (0x00095ded) main_cset6_slider_pane_g2

0xe025,	// (0x0009c49f) main_cset6_slider_pane_g3_ParamLimits

0xe025,	// (0x0009c49f) main_cset6_slider_pane_g3

0x799b,	// (0x00095e15) main_cset6_slider_pane_g4_ParamLimits

0x799b,	// (0x00095e15) main_cset6_slider_pane_g4

0x79a7,	// (0x00095e21) main_cset6_slider_pane_g5_ParamLimits

0x79a7,	// (0x00095e21) main_cset6_slider_pane_g5

0xd8c3,	// (0x0009bd3d) main_cset6_slider_pane_g7_ParamLimits

0xd8c3,	// (0x0009bd3d) main_cset6_slider_pane_g7

0xd8cf,	// (0x0009bd49) main_cset6_slider_pane_g8_ParamLimits

0xd8cf,	// (0x0009bd49) main_cset6_slider_pane_g8

0x6a51,	// (0x00094ecb) main_cset6_slider_pane_g9_ParamLimits

0x6a51,	// (0x00094ecb) main_cset6_slider_pane_g9

0x6a5d,	// (0x00094ed7) main_cset6_slider_pane_g10_ParamLimits

0x6a5d,	// (0x00094ed7) main_cset6_slider_pane_g10

0x6a69,	// (0x00094ee3) main_cset6_slider_pane_g11_ParamLimits

0x6a69,	// (0x00094ee3) main_cset6_slider_pane_g11

0x6a75,	// (0x00094eef) main_cset6_slider_pane_g12_ParamLimits

0x6a75,	// (0x00094eef) main_cset6_slider_pane_g12

0x6a81,	// (0x00094efb) main_cset6_slider_pane_g13_ParamLimits

0x6a81,	// (0x00094efb) main_cset6_slider_pane_g13

0x6a8d,	// (0x00094f07) main_cset6_slider_pane_g14_ParamLimits

0x6a8d,	// (0x00094f07) main_cset6_slider_pane_g14

0x79b5,	// (0x00095e2f) main_cset6_slider_pane_g15_ParamLimits

0x79b5,	// (0x00095e2f) main_cset6_slider_pane_g15

0x6ab1,	// (0x00094f2b) main_cset6_slider_pane_g16_ParamLimits

0x6ab1,	// (0x00094f2b) main_cset6_slider_pane_g16

0x6abf,	// (0x00094f39) main_cset6_slider_pane_g17_ParamLimits

0x6abf,	// (0x00094f39) main_cset6_slider_pane_g17

0x0011,

0xfb82,	// (0x0009dffc) main_cset6_slider_pane_g_ParamLimits

0xfb82,	// (0x0009dffc) main_cset6_slider_pane_g

0xe031,	// (0x0009c4ab) main_cset6_slider_pane_t1_ParamLimits

0xe031,	// (0x0009c4ab) main_cset6_slider_pane_t1

0x79e5,	// (0x00095e5f) main_cset6_slider_pane_t2_ParamLimits

0x79e5,	// (0x00095e5f) main_cset6_slider_pane_t2

0x7a10,	// (0x00095e8a) main_cset6_slider_pane_t3_ParamLimits

0x7a10,	// (0x00095e8a) main_cset6_slider_pane_t3

0x7a3b,	// (0x00095eb5) main_cset6_slider_pane_t4_ParamLimits

0x7a3b,	// (0x00095eb5) main_cset6_slider_pane_t4

0x7a68,	// (0x00095ee2) main_cset6_slider_pane_t5_ParamLimits

0x7a68,	// (0x00095ee2) main_cset6_slider_pane_t5

0xe072,	// (0x0009c4ec) main_cset6_slider_pane_t7_ParamLimits

0xe072,	// (0x0009c4ec) main_cset6_slider_pane_t7

0x7a95,	// (0x00095f0f) main_cset6_slider_pane_t8_ParamLimits

0x7a95,	// (0x00095f0f) main_cset6_slider_pane_t8

0x7ab9,	// (0x00095f33) main_cset6_slider_pane_t9_ParamLimits

0x7ab9,	// (0x00095f33) main_cset6_slider_pane_t9

0x7add,	// (0x00095f57) main_cset6_slider_pane_t10_ParamLimits

0x7add,	// (0x00095f57) main_cset6_slider_pane_t10

0x7b01,	// (0x00095f7b) main_cset6_slider_pane_t11_ParamLimits

0x7b01,	// (0x00095f7b) main_cset6_slider_pane_t11

0xe0a8,	// (0x0009c522) main_cset6_slider_pane_t14_ParamLimits

0xe0a8,	// (0x0009c522) main_cset6_slider_pane_t14

0xe0e1,	// (0x0009c55b) main_cset6_slider_pane_t15_ParamLimits

0xe0e1,	// (0x0009c55b) main_cset6_slider_pane_t15

0x000b,

0xfba7,	// (0x0009e021) main_cset6_slider_pane_t_ParamLimits

0xfba7,	// (0x0009e021) main_cset6_slider_pane_t

0xe11a,	// (0x0009c594) cset_slider_pane_g1_copy1

0xe123,	// (0x0009c59d) cset_slider_pane_g2_copy1

0xe12c,	// (0x0009c5a6) cset_slider_pane_g3_copy1

0x99c6,	// (0x00097e40) bg_popup_sub_pane_cp011_copy1

0xe135,	// (0x0009c5af) main_cset_text_pane_g1_copy1

0xda12,	// (0x0009be8c) main_cset_text_pane_t1_copy1

0xda20,	// (0x0009be9a) main_cset_text_pane_t2_copy1

0xda2e,	// (0x0009bea8) main_cset_text_pane_t3_copy1

0xda3c,	// (0x0009beb6) main_cset_text_pane_t4_copy1

0xda4a,	// (0x0009bec4) main_cset_text_pane_t5_copy1

0xe13d,	// (0x0009c5b7) main_cset_text_pane_t6_copy1

0xe14b,	// (0x0009c5c5) main_cset_text_pane_t7_copy1

0x78be,	// (0x00095d38) main_cset_text2_pane_t1_copy1

0xadb9,	// (0x00099233) main_ncimui_pane

0x3fa5,	// (0x0009241f) popup_query_ncimui_window_ParamLimits

0x3fa5,	// (0x0009241f) popup_query_ncimui_window

0xa8c3,	// (0x00098d3d) field_cale_ev2_pane_g4_ParamLimits

0xa8c3,	// (0x00098d3d) field_cale_ev2_pane_g4

0x5c40,	// (0x000940ba) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c40,	// (0x000940ba) cell_video_dialer_keypad_pane_g2

0x0001,

0xf881,	// (0x0009dcfb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf881,	// (0x0009dcfb) cell_video_dialer_keypad_pane_g

0x5c58,	// (0x000940d2) cell_video_dialer_keypad_pane_t1

0x99c6,	// (0x00097e40) bg_popup_window_pane_cp012

0xb1fb,	// (0x00099675) heading_pane_cp06

0xe177,	// (0x0009c5f1) ncim_query_content_pane

0x99c6,	// (0x00097e40) bg_popup_heading_pane_cp01

0xe17f,	// (0x0009c5f9) ncim_heading_pane_t1

0xe18d,	// (0x0009c607) ncim_indicator_popup_pane

0xe19f,	// (0x0009c619) ncim_query_button_pane

0xe1b5,	// (0x0009c62f) ncim_query_content_pane_t1

0xe1c7,	// (0x0009c641) ncim_query_content_pane_t2

0x0005,

0xfbeb,	// (0x0009e065) ncim_query_content_pane_t

0xe201,	// (0x0009c67b) ncim_query_list_pane

0xe213,	// (0x0009c68d) ncim_query_popup_pane

0xe18d,	// (0x0009c607) ncim_indicator_popup_pane_ParamLimits

0x7c6b,	// (0x000960e5) ncim_query_content_pane_g1_ParamLimits

0x7c6b,	// (0x000960e5) ncim_query_content_pane_g1

0xe1b5,	// (0x0009c62f) ncim_query_content_pane_t1_ParamLimits

0xe1c7,	// (0x0009c641) ncim_query_content_pane_t2_ParamLimits

0x7c77,	// (0x000960f1) ncim_query_content_pane_t3_ParamLimits

0x7c77,	// (0x000960f1) ncim_query_content_pane_t3

0x7c9f,	// (0x00096119) ncim_query_content_pane_t4_ParamLimits

0x7c9f,	// (0x00096119) ncim_query_content_pane_t4

0x7cc7,	// (0x00096141) ncim_query_content_pane_t5_ParamLimits

0x7cc7,	// (0x00096141) ncim_query_content_pane_t5

0xe1d9,	// (0x0009c653) ncim_query_content_pane_t6_ParamLimits

0xe1d9,	// (0x0009c653) ncim_query_content_pane_t6

0xfbeb,	// (0x0009e065) ncim_query_content_pane_t_ParamLimits

0xe201,	// (0x0009c67b) ncim_query_list_pane_ParamLimits

0xe213,	// (0x0009c68d) ncim_query_popup_pane_ParamLimits

0xe227,	// (0x0009c6a1) wait_bar_pane_cp04

0x99c6,	// (0x00097e40) input_focus_pane_cp011

0xe22f,	// (0x0009c6a9) ncim_query_popup_pane_t1

0xe23d,	// (0x0009c6b7) ncim_list_query_list_pane_ParamLimits

0xe23d,	// (0x0009c6b7) ncim_list_query_list_pane

0x99c6,	// (0x00097e40) bg_button_pane_cp027

0xe250,	// (0x0009c6ca) ncim_query_button_pane_g1

0x99c6,	// (0x00097e40) list_highlight_pane_cp012

0xe25a,	// (0x0009c6d4) ncim_list_query_list_pane_g1

0xe262,	// (0x0009c6dc) ncim_list_query_list_pane_t1

0xac05,	// (0x0009907f) cam4_indicators_pane_g3_ParamLimits

0xac05,	// (0x0009907f) cam4_indicators_pane_g3

0xac88,	// (0x00099102) vid4_indicators_pane_g5_ParamLimits

0xac88,	// (0x00099102) vid4_indicators_pane_g5

0xac05,	// (0x0009907f) vid4_progress_pane_g5_ParamLimits

0xac05,	// (0x0009907f) vid4_progress_pane_g5

0x7b56,	// (0x00095fd0) main_ncimui_pane_g1

0x7bbf,	// (0x00096039) ncimui_group_query_pane_ParamLimits

0x7bbf,	// (0x00096039) ncimui_group_query_pane

0x7c07,	// (0x00096081) ncimui_list_pane_ParamLimits

0x7c07,	// (0x00096081) ncimui_list_pane

0x7c2e,	// (0x000960a8) ncimui_text_pane_ParamLimits

0x7c2e,	// (0x000960a8) ncimui_text_pane

0x7cef,	// (0x00096169) ncimui_text_pane_t1_ParamLimits

0x7cef,	// (0x00096169) ncimui_text_pane_t1

0xe270,	// (0x0009c6ea) ncimui_list_single_graphic_pane_ParamLimits

0xe270,	// (0x0009c6ea) ncimui_list_single_graphic_pane

0x7d0d,	// (0x00096187) ncimui_query_pane_ParamLimits

0x7d0d,	// (0x00096187) ncimui_query_pane

0x99c6,	// (0x00097e40) list_highlight_pane_cp013

0xe280,	// (0x0009c6fa) ncim_list_query_list_pane_t1_copy1

0xe25a,	// (0x0009c6d4) ncim_list_single_graphic_pane_g1

0x7d20,	// (0x0009619a) ncim_query_button_pane_cp01

0x7d2c,	// (0x000961a6) ncim_query_entry_pane_ParamLimits

0x7d2c,	// (0x000961a6) ncim_query_entry_pane

0x7d3f,	// (0x000961b9) ncimui_query_pane_g1

0x7d4b,	// (0x000961c5) ncimui_query_pane_t1_ParamLimits

0x7d4b,	// (0x000961c5) ncimui_query_pane_t1

0xadb9,	// (0x00099233) input_focus_pane_cp012

0xe28e,	// (0x0009c708) ncim_query_entry_pane_t1

0xa1b5,	// (0x0009862f) main_im_pane_ParamLimits

0xadb9,	// (0x00099233) main_mobtv_pane_ParamLimits

0xadb9,	// (0x00099233) main_mobtv_pane

0x79cd,	// (0x00095e47) main_cset6_slider_pane_g18_ParamLimits

0x79cd,	// (0x00095e47) main_cset6_slider_pane_g18

0x79d9,	// (0x00095e53) main_cset6_slider_pane_g19_ParamLimits

0x79d9,	// (0x00095e53) main_cset6_slider_pane_g19

0xad82,	// (0x000991fc) bg_main_mobtv_pane_ParamLimits

0xad82,	// (0x000991fc) bg_main_mobtv_pane

0x7d64,	// (0x000961de) main_mobtv_info_pane

0x7d6f,	// (0x000961e9) main_mobtv_loading_pane_ParamLimits

0x7d6f,	// (0x000961e9) main_mobtv_loading_pane

0xe2a0,	// (0x0009c71a) main_mobtv_pg_channel_list_pane

0xe2aa,	// (0x0009c724) main_mobtv_pg_hdr_pane

0x7d7c,	// (0x000961f6) main_mobtv_programe_curr_pane_ParamLimits

0x7d7c,	// (0x000961f6) main_mobtv_programe_curr_pane

0x7d89,	// (0x00096203) main_mobtv_programe_next_pane_ParamLimits

0x7d89,	// (0x00096203) main_mobtv_programe_next_pane

0xe2b3,	// (0x0009c72d) popup_mobtv_noti_window

0xcda6,	// (0x0009b220) main_tv_pg_hdr_pane_g1

0xe2bd,	// (0x0009c737) main_tv_pg_hdr_pane_g2

0xe2c5,	// (0x0009c73f) main_tv_pg_hdr_pane_g3

0xe2cd,	// (0x0009c747) main_tv_pg_hdr_pane_g4

0xe2d5,	// (0x0009c74f) main_tv_pg_hdr_pane_g5

0xe2df,	// (0x0009c759) main_tv_pg_hdr_pane_g6

0xe2e9,	// (0x0009c763) main_tv_pg_hdr_pane_g7

0xe2f3,	// (0x0009c76d) main_tv_pg_hdr_pane_g8

0xe2fd,	// (0x0009c777) main_tv_pg_hdr_pane_g9

0xe307,	// (0x0009c781) main_tv_pg_hdr_pane_g10

0xe311,	// (0x0009c78b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf8,	// (0x0009e072) main_tv_pg_hdr_pane_g

0xe31b,	// (0x0009c795) main_tv_pg_hdr_pane_t1

0xe329,	// (0x0009c7a3) main_tv_pg_hdr_pane_t2

0xe337,	// (0x0009c7b1) main_tv_pg_hdr_pane_t3

0xe347,	// (0x0009c7c1) main_tv_pg_hdr_pane_t4

0xe357,	// (0x0009c7d1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc0f,	// (0x0009e089) main_tv_pg_hdr_pane_t

0xe367,	// (0x0009c7e1) single_mobtv_pg_channel_pane_ParamLimits

0xe367,	// (0x0009c7e1) single_mobtv_pg_channel_pane

0xe379,	// (0x0009c7f3) single_mobtv_pg_channel_table_pane

0xe382,	// (0x0009c7fc) single_mobtv_pg_channel_thumb_pane

0xe38b,	// (0x0009c805) single_tv_pg_channel_pane_g1

0xe394,	// (0x0009c80e) single_tv_pg_channel_pane_g2

0x0001,

0xfc1a,	// (0x0009e094) single_tv_pg_channel_pane_g

0xcfcd,	// (0x0009b447) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfcd,	// (0x0009b447) bg_single_mobtv_pg_channel_thumb_pane

0xe39d,	// (0x0009c817) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe39d,	// (0x0009c817) single_mobtv_pg_channel_thumb_pane_g1

0xe3ab,	// (0x0009c825) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe3ab,	// (0x0009c825) single_mobtv_pg_channel_thumb_pane_g2

0xe3b7,	// (0x0009c831) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe3b7,	// (0x0009c831) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc1f,	// (0x0009e099) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc1f,	// (0x0009e099) single_mobtv_pg_channel_thumb_pane_g

0xe3c3,	// (0x0009c83d) single_mobtv_pg_channel_thumb_pane_t1

0xe3d1,	// (0x0009c84b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc26,	// (0x0009e0a0) single_mobtv_pg_channel_thumb_pane_t

0xcda6,	// (0x0009b220) bg_single_mobtv_pg_channel_table_pane_g1

0xcda6,	// (0x0009b220) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c8,	// (0x0009db42) bg_single_mobtv_pg_channel_table_pane_g

0xe3df,	// (0x0009c859) single_mobtv_pg_channel_table_pane_t1

0xe3ed,	// (0x0009c867) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc2b,	// (0x0009e0a5) single_mobtv_pg_channel_table_pane_t

0x7d9e,	// (0x00096218) main_mobtv_info_pane_g1_ParamLimits

0x7d9e,	// (0x00096218) main_mobtv_info_pane_g1

0x7dbc,	// (0x00096236) main_mobtv_info_pane_t1_ParamLimits

0x7dbc,	// (0x00096236) main_mobtv_info_pane_t1

0x7e34,	// (0x000962ae) main_mobtv_info_pane_t2_ParamLimits

0x7e34,	// (0x000962ae) main_mobtv_info_pane_t2

0x0002,

0xfc35,	// (0x0009e0af) main_mobtv_info_pane_t_ParamLimits

0xfc35,	// (0x0009e0af) main_mobtv_info_pane_t

0x7ec5,	// (0x0009633f) wait_bar_pane_cp05

0x7ed7,	// (0x00096351) main_mobtv_loading_pane_g1_ParamLimits

0x7ed7,	// (0x00096351) main_mobtv_loading_pane_g1

0x7ee8,	// (0x00096362) main_mobtv_loading_pane_g2_ParamLimits

0x7ee8,	// (0x00096362) main_mobtv_loading_pane_g2

0x7ef4,	// (0x0009636e) main_mobtv_loading_pane_g3_ParamLimits

0x7ef4,	// (0x0009636e) main_mobtv_loading_pane_g3

0x0002,

0xfc3c,	// (0x0009e0b6) main_mobtv_loading_pane_g_ParamLimits

0xfc3c,	// (0x0009e0b6) main_mobtv_loading_pane_g

0xe3fb,	// (0x0009c875) main_mobtv_loading_pane_t1_ParamLimits

0xe3fb,	// (0x0009c875) main_mobtv_loading_pane_t1

0xe413,	// (0x0009c88d) main_mobtv_loading_pane_t2_ParamLimits

0xe413,	// (0x0009c88d) main_mobtv_loading_pane_t2

0x0001,

0xfc43,	// (0x0009e0bd) main_mobtv_loading_pane_t_ParamLimits

0xfc43,	// (0x0009e0bd) main_mobtv_loading_pane_t

0x7f07,	// (0x00096381) wait_bar_pane_cp06_ParamLimits

0x7f07,	// (0x00096381) wait_bar_pane_cp06

0xe437,	// (0x0009c8b1) main_mobtv_programe_curr_pane_t1

0xe445,	// (0x0009c8bf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc48,	// (0x0009e0c2) main_mobtv_programe_curr_pane_t

0xe453,	// (0x0009c8cd) main_mobtv_programe_next_pane_t1

0xe461,	// (0x0009c8db) main_mobtv_programe_next_pane_t2

0xe46f,	// (0x0009c8e9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc4d,	// (0x0009e0c7) main_mobtv_programe_next_pane_t

0x99c6,	// (0x00097e40) bg_popup_mobtv_noti_window_pane

0xe47d,	// (0x0009c8f7) popup_mobtv_noti_window_g1

0xe485,	// (0x0009c8ff) popup_mobtv_noti_window_t1

0xe493,	// (0x0009c90d) popup_mobtv_noti_window_t2

0x0001,

0xfc54,	// (0x0009e0ce) popup_mobtv_noti_window_t

0xcda6,	// (0x0009b220) bg_popup_mobtv_noti_window_pane_g1

0x99c6,	// (0x00097e40) sc_clock_pane

0x99c6,	// (0x00097e40) main_fs_bigclock_pane

0x762f,	// (0x00095aa9) blid2_tripm_pane_t4_ParamLimits

0x762f,	// (0x00095aa9) blid2_tripm_pane_t4

0x7f16,	// (0x00096390) sc_clock_pane_g1_ParamLimits

0x7f16,	// (0x00096390) sc_clock_pane_g1

0x7f28,	// (0x000963a2) sc_clock_pane_t1_ParamLimits

0x7f28,	// (0x000963a2) sc_clock_pane_t1

0x7f4c,	// (0x000963c6) sc_clock_pane_t2_ParamLimits

0x7f4c,	// (0x000963c6) sc_clock_pane_t2

0x7f64,	// (0x000963de) sc_clock_pane_t3_ParamLimits

0x7f64,	// (0x000963de) sc_clock_pane_t3

0x0004,

0xfc59,	// (0x0009e0d3) sc_clock_pane_t_ParamLimits

0xfc59,	// (0x0009e0d3) sc_clock_pane_t

0x8e31,	// (0x000972ab) main_fs_bigclock_indicator_pane_ParamLimits

0x8e31,	// (0x000972ab) main_fs_bigclock_indicator_pane

0x802a,	// (0x000964a4) main_fs_bigclock_pane_g1_ParamLimits

0x802a,	// (0x000964a4) main_fs_bigclock_pane_g1

0x8e3d,	// (0x000972b7) main_fs_bigclock_pane_t1_ParamLimits

0x8e3d,	// (0x000972b7) main_fs_bigclock_pane_t1

0x8e4f,	// (0x000972c9) main_fs_bigclock_pane_t2_ParamLimits

0x8e4f,	// (0x000972c9) main_fs_bigclock_pane_t2

0x8e63,	// (0x000972dd) main_fs_bigclock_pane_t3_ParamLimits

0x8e63,	// (0x000972dd) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0009e2e6) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0009e2e6) main_fs_bigclock_pane_t

0xebed,	// (0x0009d067) main_fs_bigclock_indicator_pane_g1

0xe1a7,	// (0x0009c621) ncim_query_content_pane_g2_ParamLimits

0xe1a7,	// (0x0009c621) ncim_query_content_pane_g2

0x0001,

0xfbe6,	// (0x0009e060) ncim_query_content_pane_g_ParamLimits

0xfbe6,	// (0x0009e060) ncim_query_content_pane_g

0x7f7b,	// (0x000963f5) sc_clock_pane_t4_ParamLimits

0x7f7b,	// (0x000963f5) sc_clock_pane_t4

0xadb9,	// (0x00099233) main_radioblah_pane

0xab78,	// (0x00098ff2) cell_call4_button_pane_t1_copy1_ParamLimits

0xab78,	// (0x00098ff2) cell_call4_button_pane_t1_copy1

0x7b6e,	// (0x00095fe8) main_ncimui_pane_t1_ParamLimits

0x7b6e,	// (0x00095fe8) main_ncimui_pane_t1

0x7b88,	// (0x00096002) main_ncimui_pane_t2_ParamLimits

0x7b88,	// (0x00096002) main_ncimui_pane_t2

0x0002,

0xfbdf,	// (0x0009e059) main_ncimui_pane_t_ParamLimits

0xfbdf,	// (0x0009e059) main_ncimui_pane_t

0xe4a1,	// (0x0009c91b) main_radioblah_anim_pane_ParamLimits

0xe4a1,	// (0x0009c91b) main_radioblah_anim_pane

0xe4b2,	// (0x0009c92c) main_radioblah_info_pane_ParamLimits

0xe4b2,	// (0x0009c92c) main_radioblah_info_pane

0xe4c6,	// (0x0009c940) main_radioblah_pane_t1_ParamLimits

0xe4c6,	// (0x0009c940) main_radioblah_pane_t1

0xe4e2,	// (0x0009c95c) main_radioblah_pane_t2_ParamLimits

0xe4e2,	// (0x0009c95c) main_radioblah_pane_t2

0x0003,

0xfc7a,	// (0x0009e0f4) main_radioblah_pane_t_ParamLimits

0xfc7a,	// (0x0009e0f4) main_radioblah_pane_t

0x81d3,	// (0x0009664d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81d3,	// (0x0009664d) main_radioblah_rocker_ctrl_pane

0xe52a,	// (0x0009c9a4) main_radioblah_info_pane_t1_ParamLimits

0xe52a,	// (0x0009c9a4) main_radioblah_info_pane_t1

0x822b,	// (0x000966a5) main_radioblah_info_pane_t2_ParamLimits

0x822b,	// (0x000966a5) main_radioblah_info_pane_t2

0x0003,

0xfc83,	// (0x0009e0fd) main_radioblah_info_pane_t_ParamLimits

0xfc83,	// (0x0009e0fd) main_radioblah_info_pane_t

0xcda6,	// (0x0009b220) main_radioblah_rocker_ctrl_pane_g1

0x82db,	// (0x00096755) main_radioblah_rocker_ctrl_pane_g2

0x82e3,	// (0x0009675d) main_radioblah_rocker_ctrl_pane_g3

0x82eb,	// (0x00096765) main_radioblah_rocker_ctrl_pane_g4

0x82f3,	// (0x0009676d) main_radioblah_rocker_ctrl_pane_g5

0x82fb,	// (0x00096775) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc8c,	// (0x0009e106) main_radioblah_rocker_ctrl_pane_g

0x78be,	// (0x00095d38) main_cset_text2_pane_t1_copy1_ParamLimits

0xabd6,	// (0x00099050) cam4_image_uncrop_qvga_pane

0xac2b,	// (0x000990a5) vid4_image_uncrop_qcif_pane

0xad74,	// (0x000991ee) cam6_image_uncrop_qvga_pane_ParamLimits

0xad74,	// (0x000991ee) cam6_image_uncrop_qvga_pane

0xde8f,	// (0x0009c309) vid6_image_uncrop_qcif_pane_ParamLimits

0xde8f,	// (0x0009c309) vid6_image_uncrop_qcif_pane

0x99c6,	// (0x00097e40) bg_popup_preview_window_pane_cp03

0xe159,	// (0x0009c5d3) list_cset_text2_pane

0xe161,	// (0x0009c5db) main_cset6_text2_pane_g1

0xe169,	// (0x0009c5e3) main_cset6_text2_pane_t1

0xe564,	// (0x0009c9de) list_cset_text2_pane_t1_ParamLimits

0xe564,	// (0x0009c9de) list_cset_text2_pane_t1

0xadb9,	// (0x00099233) main_radioblah_pane_ParamLimits

0x7eb1,	// (0x0009632b) main_mobtv_info_pane_t3_ParamLimits

0x7eb1,	// (0x0009632b) main_mobtv_info_pane_t3

0x81c1,	// (0x0009663b) main_radioblah_pane_g1

0x81fb,	// (0x00096675) main_radioblah_info_pane_g1

0x8280,	// (0x000966fa) main_radioblah_info_pane_t3_ParamLimits

0x8280,	// (0x000966fa) main_radioblah_info_pane_t3

0x29aa,	// (0x00090e24) highlight_cell_cale_month_pane_ParamLimits

0x29aa,	// (0x00090e24) highlight_cell_cale_month_pane

0x99c6,	// (0x00097e40) main_phob_fisheye_pane

0xd0a9,	// (0x0009b523) scroll_pane_cp0031_ParamLimits

0xd0a9,	// (0x0009b523) scroll_pane_cp0031

0xdfa1,	// (0x0009c41b) wait_bar_pane_cp08_ParamLimits

0x7947,	// (0x00095dc1) cset_list_set_pane_copy1_ParamLimits

0xe57e,	// (0x0009c9f8) highlight_cell_cale_month_pane_g1

0x8303,	// (0x0009677d) highlight_cell_cale_month_pane_t1

0xdc4a,	// (0x0009c0c4) list_gen_pane_cp01

0xd8ae,	// (0x0009bd28) scroll_pane_01

0x8311,	// (0x0009678b) list_single_double_fisheye_pane

0x00a1,	// (0x0008e51b) list_double_fisheye_pane_g1_ParamLimits

0x00a1,	// (0x0008e51b) list_double_fisheye_pane_g1

0x00ad,	// (0x0008e527) list_double_fisheye_pane_g2_ParamLimits

0x00ad,	// (0x0008e527) list_double_fisheye_pane_g2

0x831a,	// (0x00096794) list_double_fisheye_pane_g3_ParamLimits

0x831a,	// (0x00096794) list_double_fisheye_pane_g3

0x0004,

0xfc99,	// (0x0009e113) list_double_fisheye_pane_g_ParamLimits

0xfc99,	// (0x0009e113) list_double_fisheye_pane_g

0x00de,	// (0x0008e558) list_double_fisheye_pane_t1_ParamLimits

0x00de,	// (0x0008e558) list_double_fisheye_pane_t1

0x00f9,	// (0x0008e573) list_double_fisheye_pane_t2_ParamLimits

0x00f9,	// (0x0008e573) list_double_fisheye_pane_t2

0x0001,

0xfca4,	// (0x0009e11e) list_double_fisheye_pane_t_ParamLimits

0xfca4,	// (0x0009e11e) list_double_fisheye_pane_t

0x99c6,	// (0x00097e40) main_call5_pane

0x7fa6,	// (0x00096420) sc_swipe_pane_ParamLimits

0x7fa6,	// (0x00096420) sc_swipe_pane

0x8339,	// (0x000967b3) call5_image_pane_ParamLimits

0x8339,	// (0x000967b3) call5_image_pane

0x8356,	// (0x000967d0) call5_swipe_1_pane_ParamLimits

0x8356,	// (0x000967d0) call5_swipe_1_pane

0x8369,	// (0x000967e3) call5_swipe_2_pane_ParamLimits

0x8369,	// (0x000967e3) call5_swipe_2_pane

0x8394,	// (0x0009680e) popup_call5_audio_first_window_ParamLimits

0x8394,	// (0x0009680e) popup_call5_audio_first_window

0xcfcd,	// (0x0009b447) call5_swipe_1_pane_g1_ParamLimits

0xcfcd,	// (0x0009b447) call5_swipe_1_pane_g1

0xe586,	// (0x0009ca00) call5_swipe_1_pane_g2_ParamLimits

0xe586,	// (0x0009ca00) call5_swipe_1_pane_g2

0x0001,

0xfca9,	// (0x0009e123) call5_swipe_1_pane_g_ParamLimits

0xfca9,	// (0x0009e123) call5_swipe_1_pane_g

0xe592,	// (0x0009ca0c) call5_swipe_1_pane_t1_ParamLimits

0xe592,	// (0x0009ca0c) call5_swipe_1_pane_t1

0xcfcd,	// (0x0009b447) call5_swipe_2_pane_g1_ParamLimits

0xcfcd,	// (0x0009b447) call5_swipe_2_pane_g1

0xe5a7,	// (0x0009ca21) call5_swipe_2_pane_g2_ParamLimits

0xe5a7,	// (0x0009ca21) call5_swipe_2_pane_g2

0x0001,

0xfcae,	// (0x0009e128) call5_swipe_2_pane_g_ParamLimits

0xfcae,	// (0x0009e128) call5_swipe_2_pane_g

0xe5b3,	// (0x0009ca2d) call5_swipe_2_pane_t1_ParamLimits

0xe5b3,	// (0x0009ca2d) call5_swipe_2_pane_t1

0xe5c8,	// (0x0009ca42) sc_swipe_pane_g1_ParamLimits

0xe5c8,	// (0x0009ca42) sc_swipe_pane_g1

0xe5d5,	// (0x0009ca4f) sc_swipe_pane_g2_ParamLimits

0xe5d5,	// (0x0009ca4f) sc_swipe_pane_g2

0x0001,

0xfcb3,	// (0x0009e12d) sc_swipe_pane_g_ParamLimits

0xfcb3,	// (0x0009e12d) sc_swipe_pane_g

0xe5e1,	// (0x0009ca5b) sc_swipe_pane_t1_ParamLimits

0xe5e1,	// (0x0009ca5b) sc_swipe_pane_t1

0x99c6,	// (0x00097e40) main_cmail_launcher_pane

0x83a9,	// (0x00096823) aid_size_cell_cmail_l_ParamLimits

0x83a9,	// (0x00096823) aid_size_cell_cmail_l

0x83b7,	// (0x00096831) grid_cmail_l_pane_ParamLimits

0x83b7,	// (0x00096831) grid_cmail_l_pane

0x83d0,	// (0x0009684a) cell_cmail_l_pane_ParamLimits

0x83d0,	// (0x0009684a) cell_cmail_l_pane

0xe5f6,	// (0x0009ca70) cell_cmail_l_pane_g1_ParamLimits

0xe5f6,	// (0x0009ca70) cell_cmail_l_pane_g1

0xe602,	// (0x0009ca7c) cell_cmail_l_pane_t1_ParamLimits

0xe602,	// (0x0009ca7c) cell_cmail_l_pane_t1

0xe618,	// (0x0009ca92) cell_cmail_l_pane_t2_ParamLimits

0xe618,	// (0x0009ca92) cell_cmail_l_pane_t2

0x0001,

0xfcb8,	// (0x0009e132) cell_cmail_l_pane_t_ParamLimits

0xfcb8,	// (0x0009e132) cell_cmail_l_pane_t

0xadb9,	// (0x00099233) grid_highlight_pane_cp018_ParamLimits

0xadb9,	// (0x00099233) grid_highlight_pane_cp018

0x0973,	// (0x0008eded) main2_pane_ParamLimits

0x0973,	// (0x0008eded) main2_pane

0xa27b,	// (0x000986f5) popup_sp_fs_action_menu_bg_pane_g1

0xa283,	// (0x000986fd) popup_sp_fs_action_menu_bg_pane_g2

0xa28b,	// (0x00098705) popup_sp_fs_action_menu_bg_pane_g3

0xa293,	// (0x0009870d) popup_sp_fs_action_menu_bg_pane_g4

0xa29b,	// (0x00098715) popup_sp_fs_action_menu_bg_pane_g5

0xa2a3,	// (0x0009871d) popup_sp_fs_action_menu_bg_pane_g6

0xa2ab,	// (0x00098725) popup_sp_fs_action_menu_bg_pane_g7

0xa2b3,	// (0x0009872d) popup_sp_fs_action_menu_bg_pane_g8

0xa2bb,	// (0x00098735) popup_sp_fs_action_menu_bg_pane_g9

0xa2c3,	// (0x0009873d) popup_sp_fs_action_menu_bg_pane_g10

0xa2c3,	// (0x0009873d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0009d5e9) popup_sp_fs_action_menu_bg_pane_g

0xfa37,	// (0x0008deb1) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfa37,	// (0x0008deb1) list_medium_line_x2_t3_g3_g1

0x1912,	// (0x0008fd8c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_t3_g3_g2

0xfa43,	// (0x0008debd) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfa43,	// (0x0008debd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0009d697) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0009d697) list_medium_line_x2_t3_g3_g

0xfa4f,	// (0x0008dec9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfa4f,	// (0x0008dec9) list_medium_line_x2_t3_g3_t1

0xfa64,	// (0x0008dede) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfa64,	// (0x0008dede) list_medium_line_x2_t3_g3_t2

0xfa78,	// (0x0008def2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfa78,	// (0x0008def2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0009d69e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0009d69e) list_medium_line_x2_t3_g3_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t3_g2_g1

0xf01f,	// (0x0009d499) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0009d6a5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0009d6a5) list_medium_line_x2_t3_g2_g

0xfa8d,	// (0x0008df07) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfa8d,	// (0x0008df07) list_medium_line_x2_t3_g2_t1

0xfaa3,	// (0x0008df1d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfaa3,	// (0x0008df1d) list_medium_line_x2_t3_g2_t2

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t3_g2_t3_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0009d6aa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0009d6aa) list_medium_line_x2_t3_g2_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t4_g4_g1

0x191e,	// (0x0008fd98) list_medium_line_x2_t4_g4_g2_ParamLimits

0x191e,	// (0x0008fd98) list_medium_line_x2_t4_g4_g2

0x1912,	// (0x0008fd8c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_t4_g4_g3

0xfab5,	// (0x0008df2f) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfab5,	// (0x0008df2f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0009d6b1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0009d6b1) list_medium_line_x2_t4_g4_g

0xfac1,	// (0x0008df3b) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfac1,	// (0x0008df3b) list_medium_line_x2_t4_g4_t1

0xfadb,	// (0x0008df55) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfadb,	// (0x0008df55) list_medium_line_x2_t4_g4_t2

0xfaf1,	// (0x0008df6b) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfaf1,	// (0x0008df6b) list_medium_line_x2_t4_g4_t3

0xfb06,	// (0x0008df80) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfb06,	// (0x0008df80) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0009d6ba) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0009d6ba) list_medium_line_x2_t4_g4_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g4_g1

0x191e,	// (0x0008fd98) list_medium_line_x2_t2_g4_g2_ParamLimits

0x191e,	// (0x0008fd98) list_medium_line_x2_t2_g4_g2

0x1912,	// (0x0008fd8c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_t2_g4_g3

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0009d721) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0009d721) list_medium_line_x2_t2_g4_g

0xfb18,	// (0x0008df92) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfb18,	// (0x0008df92) list_medium_line_x2_t2_g4_t1

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0009d72a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0009d72a) list_medium_line_x2_t2_g4_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g3_g1

0x1912,	// (0x0008fd8c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_t2_g3_g2

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2b5,	// (0x0009d72f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2b5,	// (0x0009d72f) list_medium_line_x2_t2_g3_g

0xfb2d,	// (0x0008dfa7) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfb2d,	// (0x0008dfa7) list_medium_line_x2_t2_g3_t1

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2bc,	// (0x0009d736) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2bc,	// (0x0009d736) list_medium_line_x2_t2_g3_t

0x2b1a,	// (0x00090f94) main_sp_fs_list_pane_ParamLimits

0x2b1a,	// (0x00090f94) main_sp_fs_list_pane

0xb078,	// (0x000994f2) sp_fs_scroll_pane_ParamLimits

0xb078,	// (0x000994f2) sp_fs_scroll_pane

0xfb42,	// (0x0008dfbc) list_medium_line_x2_t3_t1

0xfb52,	// (0x0008dfcc) list_medium_line_x2_t3_t2

0xfb60,	// (0x0008dfda) list_medium_line_x2_t3_t3

0x0002,

0xf307,	// (0x0009d781) list_medium_line_x2_t3_t

0xfb6e,	// (0x0008dfe8) list_medium_line_x3_t4_t1

0xfb7e,	// (0x0008dff8) list_medium_line_x3_t4_t2

0xfb8c,	// (0x0008e006) list_medium_line_x3_t4_t3

0xf040,	// (0x0009d4ba) list_medium_line_x3_t4_t4

0x0003,

0xf30e,	// (0x0009d788) list_medium_line_x3_t4_t

0xfb9a,	// (0x0008e014) list_medium_line_x4_t5_t1

0xfbaa,	// (0x0008e024) list_medium_line_x4_t5_t2

0xf04e,	// (0x0009d4c8) list_medium_line_x4_t5_t3

0xfbb8,	// (0x0008e032) list_medium_line_x4_t5_t4

0xf040,	// (0x0009d4ba) list_medium_line_x4_t5_t5

0x0004,

0xf317,	// (0x0009d791) list_medium_line_x4_t5_t

0xf013,	// (0x0009d48d) list_medium_line_t4_g4_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_t4_g4_g1

0xfbc6,	// (0x0008e040) list_medium_line_t4_g4_g2_ParamLimits

0xfbc6,	// (0x0008e040) list_medium_line_t4_g4_g2

0xfbd2,	// (0x0008e04c) list_medium_line_t4_g4_g3_ParamLimits

0xfbd2,	// (0x0008e04c) list_medium_line_t4_g4_g3

0xf01f,	// (0x0009d499) list_medium_line_t4_g4_g4_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_t4_g4_g4

0x0003,

0xf322,	// (0x0009d79c) list_medium_line_t4_g4_g_ParamLimits

0xf322,	// (0x0009d79c) list_medium_line_t4_g4_g

0xfbde,	// (0x0008e058) list_medium_line_t4_g4_t1_ParamLimits

0xfbde,	// (0x0008e058) list_medium_line_t4_g4_t1

0xfbf3,	// (0x0008e06d) list_medium_line_t4_g4_t2_ParamLimits

0xfbf3,	// (0x0008e06d) list_medium_line_t4_g4_t2

0xfc08,	// (0x0008e082) list_medium_line_t4_g4_t3_ParamLimits

0xfc08,	// (0x0008e082) list_medium_line_t4_g4_t3

0xf02b,	// (0x0009d4a5) list_medium_line_t4_g4_t4_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_t4_g4_t4

0x0003,

0xf32b,	// (0x0009d7a5) list_medium_line_t4_g4_t_ParamLimits

0xf32b,	// (0x0009d7a5) list_medium_line_t4_g4_t

0x2bec,	// (0x00091066) chi_dic_find_pane_g1

0x3d2b,	// (0x000921a5) main_tport_pane

0xfdea,	// (0x0008e264) list_medium_line_plain_t1

0xfdf8,	// (0x0008e272) list_medium_line_t2_g2_g1_ParamLimits

0xfdf8,	// (0x0008e272) list_medium_line_t2_g2_g1

0x6e34,	// (0x000952ae) list_medium_line_t2_g2_g2_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_t2_g2_g2

0x0001,

0xf9f0,	// (0x0009de6a) list_medium_line_t2_g2_g_ParamLimits

0xf9f0,	// (0x0009de6a) list_medium_line_t2_g2_g

0xfe04,	// (0x0008e27e) list_medium_line_t2_g2_t1_ParamLimits

0xfe04,	// (0x0008e27e) list_medium_line_t2_g2_t1

0xfe1e,	// (0x0008e298) list_medium_line_t2_g2_t2_ParamLimits

0xfe1e,	// (0x0008e298) list_medium_line_t2_g2_t2

0x0001,

0xf9f5,	// (0x0009de6f) list_medium_line_t2_g2_t_ParamLimits

0xf9f5,	// (0x0009de6f) list_medium_line_t2_g2_t

0x73e8,	// (0x00095862) aid_sp_fs_list_icon_a_sm

0xad6c,	// (0x000991e6) aid_sp_fs_list_icon_d

0xc1d2,	// (0x0009a64c) aid_sp_fs_text_primary

0xc1db,	// (0x0009a655) aid_sp_fs_text_secondary

0x73f0,	// (0x0009586a) list_medium_line

0x73f0,	// (0x0009586a) list_medium_line_g2

0x73f0,	// (0x0009586a) list_medium_line_g3

0x73f0,	// (0x0009586a) list_medium_line_plain

0x73f0,	// (0x0009586a) list_medium_line_plain_t2

0x73f0,	// (0x0009586a) list_medium_line_plain_t3

0x73f0,	// (0x0009586a) list_medium_line_right_icon

0x73f0,	// (0x0009586a) list_medium_line_right_iconx2

0x73f0,	// (0x0009586a) list_medium_line_t2

0x73f0,	// (0x0009586a) list_medium_line_t2_g2

0x73f0,	// (0x0009586a) list_medium_line_t2_g3

0x73f0,	// (0x0009586a) list_medium_line_t2_right_icon

0x73f0,	// (0x0009586a) list_medium_line_t2_right_iconx2

0x73f0,	// (0x0009586a) list_medium_line_t3

0x73f0,	// (0x0009586a) list_medium_line_t3_g2

0x73f0,	// (0x0009586a) list_medium_line_t3_g3

0x73f0,	// (0x0009586a) list_medium_line_t3_right_iconx2

0x73f9,	// (0x00095873) list_medium_line_t4_g4

0x7402,	// (0x0009587c) list_medium_line_x2

0x7402,	// (0x0009587c) list_medium_line_x2_t2_g2

0x7402,	// (0x0009587c) list_medium_line_x2_t2_g3

0x7402,	// (0x0009587c) list_medium_line_x2_t2_g4

0x7402,	// (0x0009587c) list_medium_line_x2_t3

0x7402,	// (0x0009587c) list_medium_line_x2_t3_g2

0x7402,	// (0x0009587c) list_medium_line_x2_t3_g3

0x7402,	// (0x0009587c) list_medium_line_x2_t3_g4

0x7402,	// (0x0009587c) list_medium_line_x2_t4_g2

0x7402,	// (0x0009587c) list_medium_line_x2_t4_g4

0x740b,	// (0x00095885) list_medium_line_x3

0x740b,	// (0x00095885) list_medium_line_x3_t4

0x740b,	// (0x00095885) list_medium_line_x3_t4_g4

0x73f9,	// (0x00095873) list_medium_line_x4_t4

0x73f9,	// (0x00095873) list_medium_line_x4_t4_g7

0x73f9,	// (0x00095873) list_medium_line_x4_t5

0xffae,	// (0x0008e428) list_single_fs_dyc_pane_ParamLimits

0xffae,	// (0x0008e428) list_single_fs_dyc_pane

0xf013,	// (0x0009d48d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x4_t4_g7_g1

0xffe6,	// (0x0008e460) list_medium_line_x4_t4_g7_g2_ParamLimits

0xffe6,	// (0x0008e460) list_medium_line_x4_t4_g7_g2

0x7b27,	// (0x00095fa1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b27,	// (0x00095fa1) list_medium_line_x4_t4_g7_g3

0x7b36,	// (0x00095fb0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b36,	// (0x00095fb0) list_medium_line_x4_t4_g7_g4

0xfff2,	// (0x0008e46c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xfff2,	// (0x0008e46c) list_medium_line_x4_t4_g7_g5

0x0001,	// (0x0008e47b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0001,	// (0x0008e47b) list_medium_line_x4_t4_g7_g6

0x0010,	// (0x0008e48a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0010,	// (0x0008e48a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc0,	// (0x0009e03a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc0,	// (0x0009e03a) list_medium_line_x4_t4_g7_g

0x001c,	// (0x0008e496) list_medium_line_x4_t4_g7_t1_ParamLimits

0x001c,	// (0x0008e496) list_medium_line_x4_t4_g7_t1

0x0031,	// (0x0008e4ab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0031,	// (0x0008e4ab) list_medium_line_x4_t4_g7_t2

0x0046,	// (0x0008e4c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0046,	// (0x0008e4c0) list_medium_line_x4_t4_g7_t3

0x005b,	// (0x0008e4d5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x005b,	// (0x0008e4d5) list_medium_line_x4_t4_g7_t4

0x006d,	// (0x0008e4e7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x006d,	// (0x0008e4e7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbcf,	// (0x0009e049) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbcf,	// (0x0009e049) list_medium_line_x4_t4_g7_t

0x007f,	// (0x0008e4f9) list_single_dyc_row_pane_ParamLimits

0x007f,	// (0x0008e4f9) list_single_dyc_row_pane

0x8326,	// (0x000967a0) call5_gesture_pane_ParamLimits

0x8326,	// (0x000967a0) call5_gesture_pane

0x837c,	// (0x000967f6) call5_windows_pane_ParamLimits

0x837c,	// (0x000967f6) call5_windows_pane

0x83e2,	// (0x0009685c) call5_swipe_1_pane_cp_ParamLimits

0x83e2,	// (0x0009685c) call5_swipe_1_pane_cp

0x83ee,	// (0x00096868) call5_swipe_2_pane_cp_ParamLimits

0x83ee,	// (0x00096868) call5_swipe_2_pane_cp

0xa3d2,	// (0x0009884c) call5_image_pane_cp

0x83fa,	// (0x00096874) popup_call5_audio_first_window_cp_ParamLimits

0x83fa,	// (0x00096874) popup_call5_audio_first_window_cp

0xe5c8,	// (0x0009ca42) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5c8,	// (0x0009ca42) call5_swipe_1_pane_g1_cp

0xe635,	// (0x0009caaf) call5_swipe_1_pane_g2_cp

0xe5e1,	// (0x0009ca5b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5e1,	// (0x0009ca5b) call5_swipe_1_pane_t1_cp

0xe5c8,	// (0x0009ca42) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5c8,	// (0x0009ca42) call5_swipe_2_pane_g1_cp

0xe63d,	// (0x0009cab7) call5_swipe_2_pane_g2_cp

0xe645,	// (0x0009cabf) call5_swipe_2_pane_t1_cp_ParamLimits

0xe645,	// (0x0009cabf) call5_swipe_2_pane_t1_cp

0xadb9,	// (0x00099233) main_sp_fs_email_pane

0xd987,	// (0x0009be01) main_sp_fs_listscroll_pane_te

0x8408,	// (0x00096882) popup_sp_fs_action_menu_pane_ParamLimits

0x8408,	// (0x00096882) popup_sp_fs_action_menu_pane

0xcda6,	// (0x0009b220) bg_sp_fs_ctrlbar_pane_g1

0xe65a,	// (0x0009cad4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe663,	// (0x0009cadd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe66c,	// (0x0009cae6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcda6,	// (0x0009b220) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcbd,	// (0x0009e137) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb85,	// (0x0009afff) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb85,	// (0x0009afff) bg_sp_fs_ctrlbar_ddmenu_pane

0xe675,	// (0x0009caef) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe675,	// (0x0009caef) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe681,	// (0x0009cafb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe681,	// (0x0009cafb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc6,	// (0x0009e140) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc6,	// (0x0009e140) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe68d,	// (0x0009cb07) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe68d,	// (0x0009cb07) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x844e,	// (0x000968c8) list_medium_line_t2_right_icon_g1

0x011b,	// (0x0008e595) list_medium_line_t2_right_icon_t1

0x012b,	// (0x0008e5a5) list_medium_line_t2_right_icon_t2

0x0001,

0xfccb,	// (0x0009e145) list_medium_line_t2_right_icon_t

0xc96e,	// (0x0009ade8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc96e,	// (0x0009ade8) bg_sp_fs_ctrlbar_pane

0x84a3,	// (0x0009691d) main_sp_fs_ctrlbar_button_pane_cp01

0x84ad,	// (0x00096927) main_sp_fs_ctrlbar_ddmenu_pane

0xe6e1,	// (0x0009cb5b) main_sp_fs_ctrlbar_pane_g1

0xe6ed,	// (0x0009cb67) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcd0,	// (0x0009e14a) main_sp_fs_ctrlbar_pane_g

0x84eb,	// (0x00096965) main_sp_fs_ctrlbar_pane_t1

0x852a,	// (0x000969a4) main_sp_fs_ctrlbar_pane

0x854e,	// (0x000969c8) main_sp_fs_listscroll_pane_te_cp01

0x013d,	// (0x0008e5b7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x013d,	// (0x0008e5b7) popup_sp_fs_action_menu_pane_cp01

0xadb9,	// (0x00099233) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xadb9,	// (0x00099233) bg_sp_fs_highlight_list_pane_cp01

0x856e,	// (0x000969e8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x856e,	// (0x000969e8) sp_fs_action_menu_list_gene_pane_g1

0xe714,	// (0x0009cb8e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe714,	// (0x0009cb8e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcde,	// (0x0009e158) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcde,	// (0x0009e158) sp_fs_action_menu_list_gene_pane_g

0x857d,	// (0x000969f7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x857d,	// (0x000969f7) sp_fs_action_menu_list_gene_pane_t1

0x8595,	// (0x00096a0f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8595,	// (0x00096a0f) sp_fs_action_menu_list_gene_pane

0xe721,	// (0x0009cb9b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe721,	// (0x0009cb9b) popup_sp_fs_action_menu_bg_pane

0x85b8,	// (0x00096a32) sp_fs_action_menu_list_pane_ParamLimits

0x85b8,	// (0x00096a32) sp_fs_action_menu_list_pane

0x0173,	// (0x0008e5ed) sp_fs_scroll_pane_cp01_ParamLimits

0x0173,	// (0x0008e5ed) sp_fs_scroll_pane_cp01

0x0199,	// (0x0008e613) list_medium_line_plain_t2_t1

0x01a9,	// (0x0008e623) list_medium_line_plain_t2_t2

0x0001,

0xfce3,	// (0x0009e15d) list_medium_line_plain_t2_t

0x01b9,	// (0x0008e633) list_medium_line_plain_t3_t1

0x01c9,	// (0x0008e643) list_medium_line_plain_t3_t2

0x01d7,	// (0x0008e651) list_medium_line_plain_t3_t3

0x0002,

0xfce8,	// (0x0009e162) list_medium_line_plain_t3_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t2_g2_g1

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0009d6a5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0009d6a5) list_medium_line_x2_t2_g2_g

0xf05c,	// (0x0009d4d6) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf05c,	// (0x0009d4d6) list_medium_line_x2_t2_g2_t1

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcef,	// (0x0009e169) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcef,	// (0x0009e169) list_medium_line_x2_t2_g2_t

0xf013,	// (0x0009d48d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t4_g2_g1

0x01e5,	// (0x0008e65f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x01e5,	// (0x0008e65f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf4,	// (0x0009e16e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf4,	// (0x0009e16e) list_medium_line_x2_t4_g2_g

0x01f7,	// (0x0008e671) list_medium_line_x2_t4_g2_t1_ParamLimits

0x01f7,	// (0x0008e671) list_medium_line_x2_t4_g2_t1

0x0211,	// (0x0008e68b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0211,	// (0x0008e68b) list_medium_line_x2_t4_g2_t2

0x0227,	// (0x0008e6a1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0227,	// (0x0008e6a1) list_medium_line_x2_t4_g2_t3

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0009e173) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0009e173) list_medium_line_x2_t4_g2_t

0x85dc,	// (0x00096a56) list_medium_line_t3_right_iconx2_g1

0x844e,	// (0x000968c8) list_medium_line_t3_right_iconx2_g2

0x023c,	// (0x0008e6b6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0009e17c) list_medium_line_t3_right_iconx2_g

0x0246,	// (0x0008e6c0) list_medium_line_t3_right_iconx2_t1

0x0256,	// (0x0008e6d0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0009e183) list_medium_line_t3_right_iconx2_t

0xf013,	// (0x0009d48d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x3_t4_g4_g1

0x1912,	// (0x0008fd8c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x3_t4_g4_g2

0xf071,	// (0x0009d4eb) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf071,	// (0x0009d4eb) list_medium_line_x3_t4_g4_g3

0x85e4,	// (0x00096a5e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x85e4,	// (0x00096a5e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0009e188) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0009e188) list_medium_line_x3_t4_g4_g

0x0264,	// (0x0008e6de) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0264,	// (0x0008e6de) list_medium_line_x3_t4_g4_t1

0x027b,	// (0x0008e6f5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x027b,	// (0x0008e6f5) list_medium_line_x3_t4_g4_t2

0xf07d,	// (0x0009d4f7) list_medium_line_x3_t4_g4_t3_ParamLimits

0xf07d,	// (0x0009d4f7) list_medium_line_x3_t4_g4_t3

0x0294,	// (0x0008e70e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0294,	// (0x0008e70e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0009e191) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0009e191) list_medium_line_x3_t4_g4_t

0x02b1,	// (0x0008e72b) list_single_dyc_row_text_pane_t1_ParamLimits

0x02b1,	// (0x0008e72b) list_single_dyc_row_text_pane_t1

0x02fa,	// (0x0008e774) list_single_dyc_row_text_pane_t2_ParamLimits

0x02fa,	// (0x0008e774) list_single_dyc_row_text_pane_t2

0x85f0,	// (0x00096a6a) list_single_dyc_row_text_pane_t3_ParamLimits

0x85f0,	// (0x00096a6a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0009e19a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0009e19a) list_single_dyc_row_text_pane_t

0x8614,	// (0x00096a8e) list_single_dyc_row_pane_g1_ParamLimits

0x8614,	// (0x00096a8e) list_single_dyc_row_pane_g1

0x8620,	// (0x00096a9a) list_single_dyc_row_pane_g2_ParamLimits

0x8620,	// (0x00096a9a) list_single_dyc_row_pane_g2

0x862c,	// (0x00096aa6) list_single_dyc_row_pane_g3_ParamLimits

0x862c,	// (0x00096aa6) list_single_dyc_row_pane_g3

0x8638,	// (0x00096ab2) list_single_dyc_row_pane_g4_ParamLimits

0x8638,	// (0x00096ab2) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0009e1a7) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0009e1a7) list_single_dyc_row_pane_g

0x8644,	// (0x00096abe) list_single_dyc_row_text_pane_ParamLimits

0x8644,	// (0x00096abe) list_single_dyc_row_text_pane

0x99c6,	// (0x00097e40) bg_sp_fs_scroll_pane

0xe72f,	// (0x0009cba9) thumb_sp_fs_scroll_pane

0xf092,	// (0x0009d50c) list_medium_line_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_g1

0x042f,	// (0x0008e8a9) list_medium_line_t1_ParamLimits

0x042f,	// (0x0008e8a9) list_medium_line_t1

0xf013,	// (0x0009d48d) list_medium_line_x2_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_g1

0x1912,	// (0x0008fd8c) list_medium_line_x2_g2_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0009e1b0) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0009e1b0) list_medium_line_x2_g

0x8663,	// (0x00096add) list_medium_line_x2_t1_ParamLimits

0x8663,	// (0x00096add) list_medium_line_x2_t1

0xf013,	// (0x0009d48d) list_medium_line_x3_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x3_g1

0x1912,	// (0x0008fd8c) list_medium_line_x3_g2_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0009e1b0) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0009e1b0) list_medium_line_x3_g

0x8663,	// (0x00096add) list_medium_line_x3_t1_ParamLimits

0x8663,	// (0x00096add) list_medium_line_x3_t1

0xe738,	// (0x0009cbb2) thumb_sp_fs_scroll_pane_g1

0xe741,	// (0x0009cbbb) thumb_sp_fs_scroll_pane_g2

0xe74a,	// (0x0009cbc4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0009e1b5) thumb_sp_fs_scroll_pane_g

0xe738,	// (0x0009cbb2) bg_sp_fs_scroll_pane_g1

0xe741,	// (0x0009cbbb) bg_sp_fs_scroll_pane_g2

0xe74a,	// (0x0009cbc4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0009e1b5) bg_sp_fs_scroll_pane_g

0xf013,	// (0x0009d48d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf013,	// (0x0009d48d) list_medium_line_x2_t3_g4_g1

0x191e,	// (0x0008fd98) list_medium_line_x2_t3_g4_g2_ParamLimits

0x191e,	// (0x0008fd98) list_medium_line_x2_t3_g4_g2

0x1912,	// (0x0008fd8c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1912,	// (0x0008fd8c) list_medium_line_x2_t3_g4_g3

0xf01f,	// (0x0009d499) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf01f,	// (0x0009d499) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0009d721) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0009d721) list_medium_line_x2_t3_g4_g

0x0444,	// (0x0008e8be) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0444,	// (0x0008e8be) list_medium_line_x2_t3_g4_t1

0x045a,	// (0x0008e8d4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x045a,	// (0x0008e8d4) list_medium_line_x2_t3_g4_t2

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf02b,	// (0x0009d4a5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0009e1bc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0009e1bc) list_medium_line_x2_t3_g4_t

0xf092,	// (0x0009d50c) list_medium_line_g2_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_g2_g1

0x6e34,	// (0x000952ae) list_medium_line_g2_g2_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_g2_g2

0x0001,

0xfd49,	// (0x0009e1c3) list_medium_line_g2_g_ParamLimits

0xfd49,	// (0x0009e1c3) list_medium_line_g2_g

0x0474,	// (0x0008e8ee) list_medium_line_g2_t1_ParamLimits

0x0474,	// (0x0008e8ee) list_medium_line_g2_t1

0xf092,	// (0x0009d50c) list_medium_line_t3_g2_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_t3_g2_g1

0x6e34,	// (0x000952ae) list_medium_line_t3_g2_g2_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_t3_g2_g2

0x0001,

0xfd49,	// (0x0009e1c3) list_medium_line_t3_g2_g_ParamLimits

0xfd49,	// (0x0009e1c3) list_medium_line_t3_g2_g

0x0489,	// (0x0008e903) list_medium_line_t3_g2_t1_ParamLimits

0x0489,	// (0x0008e903) list_medium_line_t3_g2_t1

0x04a3,	// (0x0008e91d) list_medium_line_t3_g2_t2_ParamLimits

0x04a3,	// (0x0008e91d) list_medium_line_t3_g2_t2

0x04b9,	// (0x0008e933) list_medium_line_t3_g2_t3_ParamLimits

0x04b9,	// (0x0008e933) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0009e1c8) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0009e1c8) list_medium_line_t3_g2_t

0x844e,	// (0x000968c8) list_medium_line_right_icon_g1

0x04d3,	// (0x0008e94d) list_medium_line_right_icon_t1

0xf092,	// (0x0009d50c) list_medium_line_t2_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_t2_g1

0x04e1,	// (0x0008e95b) list_medium_line_t2_t1_ParamLimits

0x04e1,	// (0x0008e95b) list_medium_line_t2_t1

0x04fb,	// (0x0008e975) list_medium_line_t2_t2_ParamLimits

0x04fb,	// (0x0008e975) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0009e1cf) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0009e1cf) list_medium_line_t2_t

0xf092,	// (0x0009d50c) list_medium_line_t3_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_t3_g1

0x0514,	// (0x0008e98e) list_medium_line_t3_t1_ParamLimits

0x0514,	// (0x0008e98e) list_medium_line_t3_t1

0x052e,	// (0x0008e9a8) list_medium_line_t3_t2_ParamLimits

0x052e,	// (0x0008e9a8) list_medium_line_t3_t2

0x0544,	// (0x0008e9be) list_medium_line_t3_t3_ParamLimits

0x0544,	// (0x0008e9be) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0009e1d4) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0009e1d4) list_medium_line_t3_t

0xf092,	// (0x0009d50c) list_medium_line_g3_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_g3_g1

0x8679,	// (0x00096af3) list_medium_line_g3_g2_ParamLimits

0x8679,	// (0x00096af3) list_medium_line_g3_g2

0x6e34,	// (0x000952ae) list_medium_line_g3_g3_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0009e1db) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0009e1db) list_medium_line_g3_g

0x0559,	// (0x0008e9d3) list_medium_line_g3_t1_ParamLimits

0x0559,	// (0x0008e9d3) list_medium_line_g3_t1

0xf092,	// (0x0009d50c) list_medium_line_t2_g3_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_t2_g3_g1

0x8679,	// (0x00096af3) list_medium_line_t2_g3_g2_ParamLimits

0x8679,	// (0x00096af3) list_medium_line_t2_g3_g2

0x6e34,	// (0x000952ae) list_medium_line_t2_g3_g3_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0009e1db) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0009e1db) list_medium_line_t2_g3_g

0x056e,	// (0x0008e9e8) list_medium_line_t2_g3_t1_ParamLimits

0x056e,	// (0x0008e9e8) list_medium_line_t2_g3_t1

0x0588,	// (0x0008ea02) list_medium_line_t2_g3_t2_ParamLimits

0x0588,	// (0x0008ea02) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0009e1e2) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0009e1e2) list_medium_line_t2_g3_t

0xf092,	// (0x0009d50c) list_medium_line_t3_g3_g1_ParamLimits

0xf092,	// (0x0009d50c) list_medium_line_t3_g3_g1

0x8679,	// (0x00096af3) list_medium_line_t3_g3_g2_ParamLimits

0x8679,	// (0x00096af3) list_medium_line_t3_g3_g2

0x6e34,	// (0x000952ae) list_medium_line_t3_g3_g3_ParamLimits

0x6e34,	// (0x000952ae) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0009e1db) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0009e1db) list_medium_line_t3_g3_g

0x05a2,	// (0x0008ea1c) list_medium_line_t3_g3_t1_ParamLimits

0x05a2,	// (0x0008ea1c) list_medium_line_t3_g3_t1

0x05bb,	// (0x0008ea35) list_medium_line_t3_g3_t2_ParamLimits

0x05bb,	// (0x0008ea35) list_medium_line_t3_g3_t2

0x05d1,	// (0x0008ea4b) list_medium_line_t3_g3_t3_ParamLimits

0x05d1,	// (0x0008ea4b) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0009e1e7) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0009e1e7) list_medium_line_t3_g3_t

0x85dc,	// (0x00096a56) list_medium_line_right_iconx2_g1

0x844e,	// (0x000968c8) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0009e1ee) list_medium_line_right_iconx2_g

0x8685,	// (0x00096aff) list_medium_line_right_iconx2_t1

0x85dc,	// (0x00096a56) list_medium_line_t2_right_iconx2_g1

0x844e,	// (0x000968c8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0009e1ee) list_medium_line_t2_right_iconx2_g

0x05eb,	// (0x0008ea65) list_medium_line_t2_right_iconx2_t1

0x05fb,	// (0x0008ea75) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0009e1f3) list_medium_line_t2_right_iconx2_t

0x060b,	// (0x0008ea85) list_medium_line_x4_t4_t1

0x0619,	// (0x0008ea93) list_medium_line_x4_t4_t2

0x0629,	// (0x0008eaa3) list_medium_line_x4_t4_t3

0x0639,	// (0x0008eab3) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0009e1f8) list_medium_line_x4_t4_t

0x86d4,	// (0x00096b4e) tport_appsw_pane_ParamLimits

0x86d4,	// (0x00096b4e) tport_appsw_pane

0x86eb,	// (0x00096b65) tport_contact_pane_ParamLimits

0x86eb,	// (0x00096b65) tport_contact_pane

0x8703,	// (0x00096b7d) tport_listscroll_pane_ParamLimits

0x8703,	// (0x00096b7d) tport_listscroll_pane

0x8717,	// (0x00096b91) cell_tport_appsw_pane_ParamLimits

0x8717,	// (0x00096b91) cell_tport_appsw_pane

0xd770,	// (0x0009bbea) tport_appsw_pane_g1_ParamLimits

0xd770,	// (0x0009bbea) tport_appsw_pane_g1

0xe753,	// (0x0009cbcd) tport_contact_pane_g1

0xe75c,	// (0x0009cbd6) tport_contact_pane_t1

0xe76a,	// (0x0009cbe4) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0009e201) tport_contact_pane_t

0xe778,	// (0x0009cbf2) list_tport_pane

0xe781,	// (0x0009cbfb) scroll_pane_cp_030

0x8761,	// (0x00096bdb) cell_tport_appsw_pane_g1

0x8771,	// (0x00096beb) cell_tport_appsw_pane_t1

0x877f,	// (0x00096bf9) grid_highlight_pane_cp019

0x8787,	// (0x00096c01) list_tport_double_graphic_pane_ParamLimits

0x8787,	// (0x00096c01) list_tport_double_graphic_pane

0xadb9,	// (0x00099233) list_highlight_pane_cp023_ParamLimits

0xadb9,	// (0x00099233) list_highlight_pane_cp023

0x879e,	// (0x00096c18) list_tport_double_graphic_pane_g1_ParamLimits

0x879e,	// (0x00096c18) list_tport_double_graphic_pane_g1

0x87ab,	// (0x00096c25) list_tport_double_graphic_pane_t1_ParamLimits

0x87ab,	// (0x00096c25) list_tport_double_graphic_pane_t1

0x87c0,	// (0x00096c3a) list_tport_double_graphic_pane_t2_ParamLimits

0x87c0,	// (0x00096c3a) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0009e20d) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0009e20d) list_tport_double_graphic_pane_t

0x99c6,	// (0x00097e40) main_cale_note_pane

0x65c1,	// (0x00094a3b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65c1,	// (0x00094a3b) cell_vitu2_function_top_wide_pane_cp01

0x7ec5,	// (0x0009633f) wait_bar_pane_cp05_ParamLimits

0xadb9,	// (0x00099233) listscroll_cmail_pane

0xe78a,	// (0x0009cc04) list_cmail_pane

0x87d2,	// (0x00096c4c) list_cmail_body_pane

0x87e9,	// (0x00096c63) list_single_cmail_header_caption_pane

0xe79a,	// (0x0009cc14) list_single_cmail_header_detail_pane_ParamLimits

0xe79a,	// (0x0009cc14) list_single_cmail_header_detail_pane

0xe7cc,	// (0x0009cc46) list_single_cmail_header_caption_pane_t1

0x0649,	// (0x0008eac3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0649,	// (0x0008eac3) list_single_cmail_header_detail_pane_g1

0xad90,	// (0x0009920a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xad90,	// (0x0009920a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0009e212) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0009e212) list_single_cmail_header_detail_pane_g

0x8806,	// (0x00096c80) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8806,	// (0x00096c80) list_single_cmail_header_detail_pane_t1

0x8866,	// (0x00096ce0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8866,	// (0x00096ce0) list_single_cmail_header_editor_pane_bg

0xe394,	// (0x0009c80e) list_cmail_body_pane_g1

0xe7f0,	// (0x0009cc6a) list_cmail_body_pane_t1

0xd790,	// (0x0009bc0a) list_single_cmail_header_editor_pane_bg_g1

0xa639,	// (0x00098ab3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd7a0,	// (0x0009bc1a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd798,	// (0x0009bc12) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd9c3,	// (0x0009be3d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd7c0,	// (0x0009bc3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd7b0,	// (0x0009bc2a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd7b8,	// (0x0009bc32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa619,	// (0x00098a93) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x887d,	// (0x00096cf7) calenote_gesture_pane_ParamLimits

0x887d,	// (0x00096cf7) calenote_gesture_pane

0x889d,	// (0x00096d17) calenote_window_pane_ParamLimits

0x889d,	// (0x00096d17) calenote_window_pane

0xe7fe,	// (0x0009cc78) popup_note_window_cp01

0x88b9,	// (0x00096d33) calenote_swipe_1_pane_ParamLimits

0x88b9,	// (0x00096d33) calenote_swipe_1_pane

0x83ee,	// (0x00096868) calenote_swipe_2_pane_ParamLimits

0x83ee,	// (0x00096868) calenote_swipe_2_pane

0xe5c8,	// (0x0009ca42) calenote_swipe_1_pane_g1_ParamLimits

0xe5c8,	// (0x0009ca42) calenote_swipe_1_pane_g1

0xe5d5,	// (0x0009ca4f) calenote_swipe_1_pane_g2_ParamLimits

0xe5d5,	// (0x0009ca4f) calenote_swipe_1_pane_g2

0x0001,

0xfcb3,	// (0x0009e12d) calenote_swipe_1_pane_g_ParamLimits

0xfcb3,	// (0x0009e12d) calenote_swipe_1_pane_g

0xe810,	// (0x0009cc8a) calenote_swipe_1_pane_t1_ParamLimits

0xe810,	// (0x0009cc8a) calenote_swipe_1_pane_t1

0xe5c8,	// (0x0009ca42) calenote_swipe_2_pane_g1_ParamLimits

0xe5c8,	// (0x0009ca42) calenote_swipe_2_pane_g1

0xe82f,	// (0x0009cca9) calenote_swipe_2_pane_g2_ParamLimits

0xe82f,	// (0x0009cca9) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0009e21e) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0009e21e) calenote_swipe_2_pane_g

0xe83b,	// (0x0009ccb5) calenote_swipe_2_pane_t1_ParamLimits

0xe83b,	// (0x0009ccb5) calenote_swipe_2_pane_t1

0x99c6,	// (0x00097e40) main_mup_navstr_pane

0x51b0,	// (0x0009362a) main_mup3_pane_t7_ParamLimits

0x51b0,	// (0x0009362a) main_mup3_pane_t7

0xa9a6,	// (0x00098e20) main_mp4_pane_g6_ParamLimits

0xa9a6,	// (0x00098e20) main_mp4_pane_g6

0xab66,	// (0x00098fe0) main_image3_pane_t4_ParamLimits

0xab66,	// (0x00098fe0) main_image3_pane_t4

0x88ce,	// (0x00096d48) popup_navstr_preview_pane_ParamLimits

0x88ce,	// (0x00096d48) popup_navstr_preview_pane

0x88de,	// (0x00096d58) scroll_navstr_pane_ParamLimits

0x88de,	// (0x00096d58) scroll_navstr_pane

0x99c6,	// (0x00097e40) bg_popup_preview_window_pane_cp04

0xe862,	// (0x0009ccdc) popup_navstr_preview_pane_t1

0x88f2,	// (0x00096d6c) scroll_navstr_pane_g1_ParamLimits

0x88f2,	// (0x00096d6c) scroll_navstr_pane_g1

0x8906,	// (0x00096d80) scroll_navstr_pane_t1_ParamLimits

0x8906,	// (0x00096d80) scroll_navstr_pane_t1

0xe807,	// (0x0009cc81) bg_button_pane_cp014

0xe807,	// (0x0009cc81) bg_button_pane_cp030

0x00c1,	// (0x0008e53b) list_double_fisheye_pane_g4_ParamLimits

0x00c1,	// (0x0008e53b) list_double_fisheye_pane_g4

0x00cd,	// (0x0008e547) list_double_fisheye_pane_g5_ParamLimits

0x00cd,	// (0x0008e547) list_double_fisheye_pane_g5

0xb078,	// (0x000994f2) sp_fs_scroll_pane_cp03

0xe6e1,	// (0x0009cb5b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6ed,	// (0x0009cb67) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd0,	// (0x0009e14a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x84eb,	// (0x00096965) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe792,	// (0x0009cc0c) sp_fs_scroll_pane_cp02

0xa32e,	// (0x000987a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa32e,	// (0x000987a8) popup_sp_fs_calendar_preview_list_single_pane

0x99c6,	// (0x00097e40) main_cam6_pano_pane

0xadb9,	// (0x00099233) main_mup3_pane_ParamLimits

0x99c6,	// (0x00097e40) main_phacti_pane

0x7d96,	// (0x00096210) bg_button_pane_cp11

0x7db0,	// (0x0009622a) main_mobtv_info_pane_g2_ParamLimits

0x7db0,	// (0x0009622a) main_mobtv_info_pane_g2

0x0001,

0xfc30,	// (0x0009e0aa) main_mobtv_info_pane_g_ParamLimits

0xfc30,	// (0x0009e0aa) main_mobtv_info_pane_g

0x7f8d,	// (0x00096407) sc_clock_pane_t5_ParamLimits

0x7f8d,	// (0x00096407) sc_clock_pane_t5

0x81c1,	// (0x0009663b) main_radioblah_pane_g1_ParamLimits

0xe4fa,	// (0x0009c974) main_radioblah_pane_t3_ParamLimits

0xe4fa,	// (0x0009c974) main_radioblah_pane_t3

0xe512,	// (0x0009c98c) main_radioblah_pane_t4_ParamLimits

0xe512,	// (0x0009c98c) main_radioblah_pane_t4

0x81e9,	// (0x00096663) main_radioblah_text_pane_ParamLimits

0x81e9,	// (0x00096663) main_radioblah_text_pane

0x81fb,	// (0x00096675) main_radioblah_info_pane_g1_ParamLimits

0x8294,	// (0x0009670e) main_radioblah_info_pane_t4_ParamLimits

0x8294,	// (0x0009670e) main_radioblah_info_pane_t4

0xadb9,	// (0x00099233) main_sp_fs_calendar_pane

0x891d,	// (0x00096d97) main_phacti_pane_g1

0x8925,	// (0x00096d9f) phacti_note_pane_ParamLimits

0x8925,	// (0x00096d9f) phacti_note_pane

0xe879,	// (0x0009ccf3) phacti_term_pane_ParamLimits

0xe879,	// (0x0009ccf3) phacti_term_pane

0xe88e,	// (0x0009cd08) phacti_note_pane_t1_ParamLimits

0xe88e,	// (0x0009cd08) phacti_note_pane_t1

0x8939,	// (0x00096db3) phacti_term_pane_g1

0x8941,	// (0x00096dbb) phacti_term_pane_t1_ParamLimits

0x8941,	// (0x00096dbb) phacti_term_pane_t1

0xe8a5,	// (0x0009cd1f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ad,	// (0x0009cd27) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0009e228) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b5,	// (0x0009cd2f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b5,	// (0x0009cd2f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cb,	// (0x0009cd45) aid_popup_sp_fs_bg_corner_pane

0xcda6,	// (0x0009b220) popup_sp_fs_calendar_preview_bg_pane_g1

0x99c6,	// (0x00097e40) popup_sp_fs_calendar_preview_bg_pane

0xe8d3,	// (0x0009cd4d) popup_sp_fs_calendar_preview_list_pane

0xc96e,	// (0x0009ade8) bg_main_sp_fs_cale_pane_ParamLimits

0xc96e,	// (0x0009ade8) bg_main_sp_fs_cale_pane

0x89d5,	// (0x00096e4f) listscroll_cale_mrui_pane_ParamLimits

0x89d5,	// (0x00096e4f) listscroll_cale_mrui_pane

0x89ea,	// (0x00096e64) listscroll_sp_fs_schedule_track_pane

0x89f3,	// (0x00096e6d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x89f3,	// (0x00096e6d) main_sp_fs_ctrlbar_pane_cp01

0xe8db,	// (0x0009cd55) main_sp_fs_ribbon_pane

0x8a06,	// (0x00096e80) popup_sp_fs_cale_preview_window

0x8a18,	// (0x00096e92) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a18,	// (0x00096e92) list_single_sp_fs_schedule_track_pane

0xadb9,	// (0x00099233) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xadb9,	// (0x00099233) bg_sp_fs_highlight_list_pane_cp03

0x8a2c,	// (0x00096ea6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a2c,	// (0x00096ea6) list_single_sp_fs_schedule_track_pane_g1

0x8a38,	// (0x00096eb2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a38,	// (0x00096eb2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0009e22d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0009e22d) list_single_sp_fs_schedule_track_pane_g

0x8a44,	// (0x00096ebe) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a44,	// (0x00096ebe) list_single_sp_fs_schedule_track_pane_t1

0x8a66,	// (0x00096ee0) sp_fs_schedule_track_pane_ParamLimits

0x8a66,	// (0x00096ee0) sp_fs_schedule_track_pane

0xe8e3,	// (0x0009cd5d) sp_fs_schedule_track_pane_g1

0xe8eb,	// (0x0009cd65) sp_fs_schedule_track_pane_g2

0xe8f3,	// (0x0009cd6d) sp_fs_schedule_track_pane_g3

0xe8fb,	// (0x0009cd75) sp_fs_schedule_track_pane_g4

0xe903,	// (0x0009cd7d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0009e232) sp_fs_schedule_track_pane_g

0xd790,	// (0x0009bc0a) bg_sp_fs_schedule_viewer_highlight_g1

0xa639,	// (0x00098ab3) bg_sp_fs_schedule_viewer_highlight_g2

0xd798,	// (0x0009bc12) bg_sp_fs_schedule_viewer_highlight_g3

0xd7a0,	// (0x0009bc1a) bg_sp_fs_schedule_viewer_highlight_g4

0xd9c3,	// (0x0009be3d) bg_sp_fs_schedule_viewer_highlight_g5

0xd7b0,	// (0x0009bc2a) bg_sp_fs_schedule_viewer_highlight_g6

0xd7b8,	// (0x0009bc32) bg_sp_fs_schedule_viewer_highlight_g7

0xd7c0,	// (0x0009bc3a) bg_sp_fs_schedule_viewer_highlight_g8

0xa619,	// (0x00098a93) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0009e23d) bg_sp_fs_schedule_viewer_highlight_g

0x99c6,	// (0x00097e40) bg_main_sp_fs_ribbon_pane

0x8a7b,	// (0x00096ef5) main_sp_fs_ribbon_pane_g1

0xe90b,	// (0x0009cd85) main_sp_fs_ribbon_pane_t1

0x8a84,	// (0x00096efe) main_sp_fs_ribbon_pane_t2

0xe91a,	// (0x0009cd94) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0009e250) main_sp_fs_ribbon_pane_t

0xe929,	// (0x0009cda3) main_sp_fs_ribbon_scheduler_pane

0xe931,	// (0x0009cdab) bg_main_sp_fs_ribbon_pane_g1

0xe93a,	// (0x0009cdb4) bg_main_sp_fs_ribbon_pane_g2

0xe943,	// (0x0009cdbd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0009e257) bg_main_sp_fs_ribbon_pane_g

0xe94b,	// (0x0009cdc5) main_sp_fs_ribbon_scheduler_pane_g1

0xe954,	// (0x0009cdce) main_sp_fs_ribbon_scheduler_pane_g2

0xe95d,	// (0x0009cdd7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0009e25e) main_sp_fs_ribbon_scheduler_pane_g

0xe966,	// (0x0009cde0) list_cale_mrui_pane

0x8a93,	// (0x00096f0d) sp_fs_scroll_pane_cp07_ParamLimits

0x8a93,	// (0x00096f0d) sp_fs_scroll_pane_cp07

0x8aaf,	// (0x00096f29) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8aaf,	// (0x00096f29) bg_sp_fs_schedule_viewer_highlight

0xe973,	// (0x0009cded) list_single_sp_fs_schedule_track_pane_cp01

0xe97b,	// (0x0009cdf5) list_sp_fs_schedule_track_pane

0xe983,	// (0x0009cdfd) sp_fs_scroll_pane_cp06_ParamLimits

0xe983,	// (0x0009cdfd) sp_fs_scroll_pane_cp06

0xcda6,	// (0x0009b220) bgmain_sp_fs_calendar_pane_g1

0x0661,	// (0x0008eadb) list_single_cale_mrui_pane_ParamLimits

0x0661,	// (0x0008eadb) list_single_cale_mrui_pane

0x8ac1,	// (0x00096f3b) list_single_cale_mrui_row_pane_ParamLimits

0x8ac1,	// (0x00096f3b) list_single_cale_mrui_row_pane

0x8ace,	// (0x00096f48) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8ace,	// (0x00096f48) list_single_cale_mrui_row_pane_g1

0x8b06,	// (0x00096f80) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b06,	// (0x00096f80) list_single_cale_mrui_row_pane_t1

0x0684,	// (0x0008eafe) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0684,	// (0x0008eafe) list_single_cale_mrui_row_pane_t2

0x8b18,	// (0x00096f92) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b18,	// (0x00096f92) list_single_cale_mrui_row_pane_t3

0x8b47,	// (0x00096fc1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8b47,	// (0x00096fc1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0009e26c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0009e26c) list_single_cale_mrui_row_pane_t

0x06ea,	// (0x0008eb64) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x06ea,	// (0x0008eb64) list_single_cmail_header_editor_pane_bg_cp01

0x070e,	// (0x0008eb88) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x070e,	// (0x0008eb88) list_single_cmail_header_editor_pane_bg_cp02

0x8b78,	// (0x00096ff2) main_radioblah_text_pane_t1_ParamLimits

0x8b78,	// (0x00096ff2) main_radioblah_text_pane_t1

0xe9a2,	// (0x0009ce1c) cam6_indi_pane_cp01

0xe9aa,	// (0x0009ce24) cam6_mode_pane_cp01

0xe9b2,	// (0x0009ce2c) cam6_pano_pane

0xe9bb,	// (0x0009ce35) cam6_zoom_pane_cp01

0xe9c5,	// (0x0009ce3f) cam6_pano_image_pane

0xe9ce,	// (0x0009ce48) cam6_pano_pane_g1

0xe394,	// (0x0009c80e) cam6_pano_pane_g2

0xe9d7,	// (0x0009ce51) cam6_pano_pane_g3

0xe9e0,	// (0x0009ce5a) cam6_pano_pane_g4

0xd33d,	// (0x0009b7b7) cam6_pano_pane_g5

0xe9e9,	// (0x0009ce63) cam6_pano_pane_g6

0xe9f1,	// (0x0009ce6b) cam6_pano_pane_g7

0xe9f9,	// (0x0009ce73) cam6_pano_pane_g8

0xea02,	// (0x0009ce7c) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0009e275) cam6_pano_pane_g

0x99c6,	// (0x00097e40) main_browser_tag_pane

0xe85a,	// (0x0009ccd4) grid_navstr_albumart_pane

0xea0d,	// (0x0009ce87) cell_navstr_albumart_pane_ParamLimits

0xea0d,	// (0x0009ce87) cell_navstr_albumart_pane

0xea29,	// (0x0009cea3) cell_navstr_albumart_pane_g1

0xc77b,	// (0x0009abf5) cell_navstr_albumart_pane_g2

0xc78b,	// (0x0009ac05) cell_navstr_albumart_pane_g3

0xc783,	// (0x0009abfd) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0009e288) cell_navstr_albumart_pane_g

0x8b93,	// (0x0009700d) bt_list_pane_ParamLimits

0x8b93,	// (0x0009700d) bt_list_pane

0x8ba9,	// (0x00097023) bt_list_pane_t1

0x8bb8,	// (0x00097032) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0009e291) bt_list_pane_t

0x99c6,	// (0x00097e40) main_cale_prevew_pane

0x8bc7,	// (0x00097041) popup_cale_preview_window_ParamLimits

0x8bc7,	// (0x00097041) popup_cale_preview_window

0xadb9,	// (0x00099233) bg_popup_preview_window_pane_cp05_ParamLimits

0xadb9,	// (0x00099233) bg_popup_preview_window_pane_cp05

0xea31,	// (0x0009ceab) list_cale_preview_pane_ParamLimits

0xea31,	// (0x0009ceab) list_cale_preview_pane

0x8be4,	// (0x0009705e) list_double_cale_preview_pane_ParamLimits

0x8be4,	// (0x0009705e) list_double_cale_preview_pane

0x8bf8,	// (0x00097072) list_single_cale_preview_pane_ParamLimits

0x8bf8,	// (0x00097072) list_single_cale_preview_pane

0x8c10,	// (0x0009708a) list_single_cale_preview_pane_g1

0x8c18,	// (0x00097092) list_single_cale_preview_pane_t1_ParamLimits

0x8c18,	// (0x00097092) list_single_cale_preview_pane_t1

0x8c2d,	// (0x000970a7) list_double_cale_preview_pane_g1

0x8c35,	// (0x000970af) list_double_cale_preview_pane_t1_ParamLimits

0x8c35,	// (0x000970af) list_double_cale_preview_pane_t1

0x8c4a,	// (0x000970c4) list_double_cale_preview_pane_t2_ParamLimits

0x8c4a,	// (0x000970c4) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0009e296) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0009e296) list_double_cale_preview_pane_t

0x99c6,	// (0x00097e40) main_ezdial_pane

0xadb9,	// (0x00099233) main_sp_fs_email_pane_ParamLimits

0x8456,	// (0x000968d0) cmail_ddmenu_btn01_pane_ParamLimits

0x8456,	// (0x000968d0) cmail_ddmenu_btn01_pane

0x8469,	// (0x000968e3) cmail_ddmenu_btn02_pane_ParamLimits

0x8469,	// (0x000968e3) cmail_ddmenu_btn02_pane

0x848c,	// (0x00096906) cmail_ddmenu_btn03_pane_ParamLimits

0x848c,	// (0x00096906) cmail_ddmenu_btn03_pane

0x852a,	// (0x000969a4) main_sp_fs_ctrlbar_pane_ParamLimits

0x854e,	// (0x000969c8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x87d2,	// (0x00096c4c) list_cmail_body_pane_ParamLimits

0xe7da,	// (0x0009cc54) bg_button_pane_cp12

0xe7e3,	// (0x0009cc5d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e3,	// (0x0009cc5d) list_single_cmail_header_detail_pane_g3

0x8842,	// (0x00096cbc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8842,	// (0x00096cbc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0009e219) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0009e219) list_single_cmail_header_detail_pane_t

0x8956,	// (0x00096dd0) phacti_term_pane_t2_ParamLimits

0x8956,	// (0x00096dd0) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0009e223) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0009e223) phacti_term_pane_t

0xea3d,	// (0x0009ceb7) aid_size_list_single_double

0x8c62,	// (0x000970dc) popup_ezdial_listscroll_window

0x8c7e,	// (0x000970f8) popup_number_entry_window_cp01

0xa3d2,	// (0x0009884c) bg_popup_call_pane_cp09

0xea49,	// (0x0009cec3) ezdial_list_pane

0xea51,	// (0x0009cecb) scroll_pane_cp23

0xc96e,	// (0x0009ade8) bg_button_pane_cp028_ParamLimits

0xc96e,	// (0x0009ade8) bg_button_pane_cp028

0x8c8c,	// (0x00097106) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c8c,	// (0x00097106) cmail_ddmenu_btn01_pane_g1

0x8c9b,	// (0x00097115) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c9b,	// (0x00097115) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0009e29b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0009e29b) cmail_ddmenu_btn01_pane_g

0xea59,	// (0x0009ced3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea59,	// (0x0009ced3) cmail_ddmenu_btn01_pane_t1

0xc96e,	// (0x0009ade8) bg_button_pane_cp029_ParamLimits

0xc96e,	// (0x0009ade8) bg_button_pane_cp029

0x8cab,	// (0x00097125) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cab,	// (0x00097125) cmail_ddmenu_btn02_pane_g1

0x8cc6,	// (0x00097140) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cc6,	// (0x00097140) cmail_ddmenu_btn02_pane_t1

0xadb9,	// (0x00099233) bg_button_pane_cp031_ParamLimits

0xadb9,	// (0x00099233) bg_button_pane_cp031

0x8cab,	// (0x00097125) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cab,	// (0x00097125) cmail_ddmenu_btn03_pane_g1

0x8cc6,	// (0x00097140) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cc6,	// (0x00097140) cmail_ddmenu_btn03_pane_t1

0x5d91,	// (0x0009420b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5dab,	// (0x00094225) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5dab,	// (0x00094225) cell_dialer2_keypad_pane_t1_copy1

0x7bb7,	// (0x00096031) ncimui_group_button_pane

0xadb9,	// (0x00099233) main_sp_fs_calendar_pane_ParamLimits

0x87e9,	// (0x00096c63) list_single_cmail_header_caption_pane_ParamLimits

0x8989,	// (0x00096e03) aid_recal_txt_sm_pane

0x99c6,	// (0x00097e40) mian_recal_day_pane

0x8a06,	// (0x00096e80) popup_sp_fs_cale_preview_window_ParamLimits

0xea6e,	// (0x0009cee8) list_recal_day_pane

0x8d09,	// (0x00097183) list_single_recal_day_pane_ParamLimits

0x8d09,	// (0x00097183) list_single_recal_day_pane

0xea95,	// (0x0009cf0f) list_single_recal_day_pane_g1_ParamLimits

0xea95,	// (0x0009cf0f) list_single_recal_day_pane_g1

0x8d1b,	// (0x00097195) list_single_recal_day_pane_g2_ParamLimits

0x8d1b,	// (0x00097195) list_single_recal_day_pane_g2

0x8d27,	// (0x000971a1) list_single_recal_day_pane_g3_ParamLimits

0x8d27,	// (0x000971a1) list_single_recal_day_pane_g3

0x072e,	// (0x0008eba8) list_single_recal_day_pane_g4_ParamLimits

0x072e,	// (0x0008eba8) list_single_recal_day_pane_g4

0x8d33,	// (0x000971ad) list_single_recal_day_pane_g5_ParamLimits

0x8d33,	// (0x000971ad) list_single_recal_day_pane_g5

0x8d3f,	// (0x000971b9) list_single_recal_day_pane_g6_ParamLimits

0x8d3f,	// (0x000971b9) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0009e2aa) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0009e2aa) list_single_recal_day_pane_g

0x8d53,	// (0x000971cd) list_single_recal_day_pane_t1

0x8d65,	// (0x000971df) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0009e2b5) list_single_recal_day_pane_t

0x8d77,	// (0x000971f1) ncimui_query_button_pane_ParamLimits

0x8d77,	// (0x000971f1) ncimui_query_button_pane

0x8d87,	// (0x00097201) ncimui_query_button_pane_t1_ParamLimits

0x8d87,	// (0x00097201) ncimui_query_button_pane_t1

0xeaa1,	// (0x0009cf1b) ncimui_query_button_pane_t2_ParamLimits

0xeaa1,	// (0x0009cf1b) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0009e2ba) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0009e2ba) ncimui_query_button_pane_t

0x8d9a,	// (0x00097214) query_button_pane_ParamLimits

0x8d9a,	// (0x00097214) query_button_pane

0x99c6,	// (0x00097e40) bg_button_pane_cp0028

0xeab4,	// (0x0009cf2e) query_button_pane_t1

0x3d2b,	// (0x000921a5) main_tport_pane_ParamLimits

0x8693,	// (0x00096b0d) bg_popup_window_pane_cp01_ParamLimits

0x8693,	// (0x00096b0d) bg_popup_window_pane_cp01

0x86ac,	// (0x00096b26) heading_pane_cp08_ParamLimits

0x86ac,	// (0x00096b26) heading_pane_cp08

0x86bf,	// (0x00096b39) heading_pane_cp07_ParamLimits

0x86bf,	// (0x00096b39) heading_pane_cp07

0x8761,	// (0x00096bdb) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0009e206) cell_tport_appsw_pane_g

0x32b2,	// (0x0009172c) input_candi_list_open_g1

0xaf18,	// (0x00099392) list_cale_time_pane_g6_ParamLimits

0xaf18,	// (0x00099392) list_cale_time_pane_g6

0x4b07,	// (0x00092f81) aid_size_touch_calib_1_ParamLimits

0x4b07,	// (0x00092f81) aid_size_touch_calib_1

0x4b19,	// (0x00092f93) aid_size_touch_calib_2_ParamLimits

0x4b19,	// (0x00092f93) aid_size_touch_calib_2

0x4b31,	// (0x00092fab) aid_size_touch_calib_3_ParamLimits

0x4b31,	// (0x00092fab) aid_size_touch_calib_3

0x4b4f,	// (0x00092fc9) aid_size_touch_calib_4_ParamLimits

0x4b4f,	// (0x00092fc9) aid_size_touch_calib_4

0x4b67,	// (0x00092fe1) main_touch_calib_button_group_pane_ParamLimits

0x4b67,	// (0x00092fe1) main_touch_calib_button_group_pane

0x4b7f,	// (0x00092ff9) main_touch_calib_pane_g1_ParamLimits

0x4b91,	// (0x0009300b) main_touch_calib_pane_g2_ParamLimits

0x4ba3,	// (0x0009301d) main_touch_calib_pane_g3_ParamLimits

0x4bb5,	// (0x0009302f) main_touch_calib_pane_g4_ParamLimits

0xf73d,	// (0x0009dbb7) main_touch_calib_pane_g_ParamLimits

0x4bc7,	// (0x00093041) main_touch_calib_pane_t1_ParamLimits

0x4be1,	// (0x0009305b) main_touch_calib_pane_t2_ParamLimits

0x4bfb,	// (0x00093075) main_touch_calib_pane_t3_ParamLimits

0x4c0f,	// (0x00093089) main_touch_calib_pane_t4_ParamLimits

0x4c25,	// (0x0009309f) main_touch_calib_pane_t5_ParamLimits

0xf746,	// (0x0009dbc0) main_touch_calib_pane_t_ParamLimits

0xd0cd,	// (0x0009b547) list_single_fp_cale_pane_g3_ParamLimits

0xd0cd,	// (0x0009b547) list_single_fp_cale_pane_g3

0xadb9,	// (0x00099233) bg_button_pane_cp012_ParamLimits

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp03_ParamLimits

0x6dea,	// (0x00095264) cell_vitu2_function_top_pane_g1_ParamLimits

0xadb9,	// (0x00099233) bg_vkb2_func_pane_cp04_ParamLimits

0x7b42,	// (0x00095fbc) main_ncimui_button_group_pane_ParamLimits

0x7b42,	// (0x00095fbc) main_ncimui_button_group_pane

0x7ba2,	// (0x0009601c) main_ncimui_pane_t3_ParamLimits

0x7ba2,	// (0x0009601c) main_ncimui_pane_t3

0xe870,	// (0x0009ccea) phacti_button_group_pane

0xea3d,	// (0x0009ceb7) aid_size_list_single_double_ParamLimits

0x8c62,	// (0x000970dc) popup_ezdial_listscroll_window_ParamLimits

0x8c7e,	// (0x000970f8) popup_number_entry_window_cp01_ParamLimits

0x8dad,	// (0x00097227) phacti_button_pane_ParamLimits

0x8dad,	// (0x00097227) phacti_button_pane

0x99c6,	// (0x00097e40) bg_button_pane_cp14

0xeac2,	// (0x0009cf3c) phacti_button_pane_t1

0x8dbe,	// (0x00097238) main_touch_calib_button_pane_ParamLimits

0x8dbe,	// (0x00097238) main_touch_calib_button_pane

0xa1b5,	// (0x0009862f) bg_button_pane_cp18_ParamLimits

0xa1b5,	// (0x0009862f) bg_button_pane_cp18

0xead0,	// (0x0009cf4a) main_touch_calib_button_pane_t1_ParamLimits

0xead0,	// (0x0009cf4a) main_touch_calib_button_pane_t1

0xeae6,	// (0x0009cf60) main_touch_calib_button_pane_t2_ParamLimits

0xeae6,	// (0x0009cf60) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0009e2bf) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0009e2bf) main_touch_calib_button_pane_t

0x99c6,	// (0x00097e40) cell_ncimui_button_pane

0x99c6,	// (0x00097e40) bg_button_pane_cp032

0xeb04,	// (0x0009cf7e) cell_ncimui_button_pane_t1

0xab44,	// (0x00098fbe) image3_infobar_pane_ParamLimits

0xab44,	// (0x00098fbe) image3_infobar_pane

0x7fb9,	// (0x00096433) fs_bigclock_status_pane_ParamLimits

0x7fb9,	// (0x00096433) fs_bigclock_status_pane

0x7fc6,	// (0x00096440) main_fs_bigclock_clock_pane_ParamLimits

0x7fc6,	// (0x00096440) main_fs_bigclock_clock_pane

0x7ff8,	// (0x00096472) main_fs_bigclock_indi_pane_ParamLimits

0x7ff8,	// (0x00096472) main_fs_bigclock_indi_pane

0x8038,	// (0x000964b2) main_fs_bigclock_swipe_pane_ParamLimits

0x8038,	// (0x000964b2) main_fs_bigclock_swipe_pane

0x99c6,	// (0x00097e40) main_fs_clock_dumped_data

0x8084,	// (0x000964fe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8084,	// (0x000964fe) list_single_fs_bigclock_indicator_pane_g1

0x809d,	// (0x00096517) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x809d,	// (0x00096517) list_single_fs_bigclock_indicator_pane_g2

0x80b7,	// (0x00096531) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x80b7,	// (0x00096531) list_single_fs_bigclock_indicator_pane_g3

0x80d1,	// (0x0009654b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x80d1,	// (0x0009654b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc64,	// (0x0009e0de) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc64,	// (0x0009e0de) list_single_fs_bigclock_indicator_pane_g

0x8100,	// (0x0009657a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8100,	// (0x0009657a) list_single_fs_bigclock_indicator_pane_t1

0x8128,	// (0x000965a2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8128,	// (0x000965a2) list_single_fs_bigclock_indicator_pane_t2

0x8150,	// (0x000965ca) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8150,	// (0x000965ca) list_single_fs_bigclock_indicator_pane_t3

0x8178,	// (0x000965f2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8178,	// (0x000965f2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc6f,	// (0x0009e0e9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc6f,	// (0x0009e0e9) list_single_fs_bigclock_indicator_pane_t

0xeb12,	// (0x0009cf8c) image3_infobar_fav_pane_ParamLimits

0xeb12,	// (0x0009cf8c) image3_infobar_fav_pane

0xeb22,	// (0x0009cf9c) image3_infobar_loc_pane_ParamLimits

0xeb22,	// (0x0009cf9c) image3_infobar_loc_pane

0xeb38,	// (0x0009cfb2) image3_infobar_time_pane_ParamLimits

0xeb38,	// (0x0009cfb2) image3_infobar_time_pane

0xcda6,	// (0x0009b220) image3_infobar_time_pane_g1

0xeb48,	// (0x0009cfc2) image3_infobar_time_pane_t1

0xcda6,	// (0x0009b220) image3_infobar_loc_pane_g1

0xeb56,	// (0x0009cfd0) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0009e2c4) image3_infobar_loc_pane_g

0xeb5e,	// (0x0009cfd8) image3_infobar_loc_pane_t1

0xcda6,	// (0x0009b220) image3_infobar_fav_pane_g1

0xeb6c,	// (0x0009cfe6) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0009e2c9) image3_infobar_fav_pane_g

0xeb74,	// (0x0009cfee) fs_bigclock_status_battery_pane

0xeb7d,	// (0x0009cff7) fs_bigclock_status_signal_pane

0xeb86,	// (0x0009d000) fs_bigclock_status_title_pane

0xeb8f,	// (0x0009d009) fs_bigclock_status_signal_pane_g1

0xeb98,	// (0x0009d012) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0009e2ce) fs_bigclock_status_signal_pane_g

0xeba0,	// (0x0009d01a) fs_bigclock_status_battery_pane_g1

0xeba9,	// (0x0009d023) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0009e2d3) fs_bigclock_status_battery_pane_g

0xebb1,	// (0x0009d02b) fs_bigclock_status_title_pane_t1

0x8dd3,	// (0x0009724d) main_fs_bigclock_clock_pane_g1

0x8dd3,	// (0x0009724d) main_fs_bigclock_clock_pane_g2

0x8de6,	// (0x00097260) main_fs_bigclock_clock_pane_g3

0x8de6,	// (0x00097260) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0009e2d8) main_fs_bigclock_clock_pane_g

0x8dfd,	// (0x00097277) main_fs_bigclock_clock_pane_t1

0x8e13,	// (0x0009728d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0009e2e1) main_fs_bigclock_clock_pane_t

0xebbf,	// (0x0009d039) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebbf,	// (0x0009d039) list_single_fs_bigclock_indicator_pane

0xebd0,	// (0x0009d04a) list_single_fs_bigclock_pane_ParamLimits

0xebd0,	// (0x0009d04a) list_single_fs_bigclock_pane

0xebf6,	// (0x0009d070) main_fs_bigclock_indicator_pane_t1

0xec05,	// (0x0009d07f) list_single_fs_bigclock_pane_g1

0xec0d,	// (0x0009d087) list_single_fs_bigclock_pane_t1

0xcda6,	// (0x0009b220) main_fs_bigclock_swipe_pane_g1

0xec50,	// (0x0009d0ca) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0009e2f2) main_fs_bigclock_swipe_pane_g

0xec58,	// (0x0009d0d2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec58,	// (0x0009d0d2) main_fs_bigclock_swipe_pane_t1

0x2b26,	// (0x00090fa0) call_type_pane_ParamLimits

0x99c6,	// (0x00097e40) main_btmg_pane

0x8afa,	// (0x00096f74) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8afa,	// (0x00096f74) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0009e265) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0009e265) list_single_cale_mrui_row_pane_g

0x8cf7,	// (0x00097171) list_recal_vselct_arw_lo_pane

0xea8d,	// (0x0009cf07) list_recal_vselct_arw_up_pane

0x8cff,	// (0x00097179) list_recal_vselct_pane

0x8e75,	// (0x000972ef) btmg_button_pane

0x8e7f,	// (0x000972f9) main_btmg_pane_g1

0x99c6,	// (0x00097e40) bg_button_pane_cp044

0xec75,	// (0x0009d0ef) btmg_button_pane_t1

0xc95a,	// (0x0009add4) aid_listscroll_gen

0xadb9,	// (0x00099233) main_cntbar_detail_pane

0xe78a,	// (0x0009cc04) list_cmail_folder_pane

0xb078,	// (0x000994f2) sp_fs_scroll_pane_cp03_ParamLimits

0x8e89,	// (0x00097303) list_single_fs_dyc_pane_cp01_ParamLimits

0x8e89,	// (0x00097303) list_single_fs_dyc_pane_cp01

0xec83,	// (0x0009d0fd) aid_size_cmail_indent

0x8ea3,	// (0x0009731d) list_single_dyc_row_pane_cp01

0x8ee0,	// (0x0009735a) cntbar_detail_list_pane_ParamLimits

0x8ee0,	// (0x0009735a) cntbar_detail_list_pane

0x8f32,	// (0x000973ac) main_cntbar_detail_cont_pane_ParamLimits

0x8f32,	// (0x000973ac) main_cntbar_detail_cont_pane

0xb078,	// (0x000994f2) scroll_pane_cp032_ParamLimits

0xb078,	// (0x000994f2) scroll_pane_cp032

0x8f46,	// (0x000973c0) cntbar_detail_list_event_pane_ParamLimits

0x8f46,	// (0x000973c0) cntbar_detail_list_event_pane

0x8ef2,	// (0x0009736c) cntbar_detail_list_shct_pane

0xa687,	// (0x00098b01) aid_list_gen

0xec8c,	// (0x0009d106) aid_scroll

0xec95,	// (0x0009d10f) aid_size_touch_scroll_bar

0x7402,	// (0x0009587c) aid_list_double

0x73f0,	// (0x0009586a) aid_list_single

0x73f0,	// (0x0009586a) aid_list_single_lg

0x0746,	// (0x0008ebc0) aid_list_z_g_a_sm

0x8f56,	// (0x000973d0) aid_list_z_g_d

0x074e,	// (0x0008ebc8) aid_txt_z_prm

0x075c,	// (0x0008ebd6) aid_txt_z_prm_cp01

0x076a,	// (0x0008ebe4) aid_txt_z_sec

0x8f5e,	// (0x000973d8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8f5e,	// (0x000973d8) main_cntbar_detail_cont_pane_g1

0x8f72,	// (0x000973ec) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8f72,	// (0x000973ec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0009e2f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0009e2f7) main_cntbar_detail_cont_pane_g

0xec9e,	// (0x0009d118) main_cntbar_detail_cont_pane_t1

0xecac,	// (0x0009d126) main_cntbar_detail_cont_pane_t2

0xecba,	// (0x0009d134) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0009e2fc) main_cntbar_detail_cont_pane_t

0x8f82,	// (0x000973fc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8f82,	// (0x000973fc) cell_cntbar_detail_list_shct_pane

0xecc8,	// (0x0009d142) cntbar_detail_list_shct_pane_g1

0xecd1,	// (0x0009d14b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0009e303) cntbar_detail_list_shct_pane_g

0x8f94,	// (0x0009740e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f94,	// (0x0009740e) cntbar_detail_list_event_pane_g1

0x8fa0,	// (0x0009741a) cntbar_detail_list_event_pane_g2_ParamLimits

0x8fa0,	// (0x0009741a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0009e308) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0009e308) cntbar_detail_list_event_pane_g

0x900e,	// (0x00097488) cntbar_detail_list_event_pane_t1_ParamLimits

0x900e,	// (0x00097488) cntbar_detail_list_event_pane_t1

0x9023,	// (0x0009749d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9023,	// (0x0009749d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0009e315) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0009e315) cntbar_detail_list_event_pane_t

0xcda6,	// (0x0009b220) cell_cntbar_detail_list_shct_pane_g1

0xb4fd,	// (0x00099977) navi_pane_mv_g3

0xadb9,	// (0x00099233) main_cntbar_detail_pane_ParamLimits

0x99c6,	// (0x00097e40) main_notif_wgt_pane

0xa934,	// (0x00098dae) aid_tch_main_mp4_pane_g4

0xab3c,	// (0x00098fb6) popup_slider_window_cp02

0x8ced,	// (0x00097167) list_recal_day_event_pane

0x8eac,	// (0x00097326) cntbar_detail_btn_pane_ParamLimits

0x8eac,	// (0x00097326) cntbar_detail_btn_pane

0x8ec5,	// (0x0009733f) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ec5,	// (0x0009733f) cntbar_detail_btn_pane_cp01

0x8ef2,	// (0x0009736c) cntbar_detail_list_shct_pane_ParamLimits

0x8f02,	// (0x0009737c) cntbar_detail_pane_g1_ParamLimits

0x8f02,	// (0x0009737c) cntbar_detail_pane_g1

0x8f16,	// (0x00097390) cntbar_detail_pane_t1_ParamLimits

0x8f16,	// (0x00097390) cntbar_detail_pane_t1

0x8fac,	// (0x00097426) cntbar_detail_list_event_pane_g3_ParamLimits

0x8fac,	// (0x00097426) cntbar_detail_list_event_pane_g3

0x8fc4,	// (0x0009743e) cntbar_detail_list_event_pane_g4_ParamLimits

0x8fc4,	// (0x0009743e) cntbar_detail_list_event_pane_g4

0x8fdc,	// (0x00097456) cntbar_detail_list_event_pane_g5_ParamLimits

0x8fdc,	// (0x00097456) cntbar_detail_list_event_pane_g5

0x8ff4,	// (0x0009746e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ff4,	// (0x0009746e) cntbar_detail_list_event_pane_g6

0x9038,	// (0x000974b2) cntbar_detail_list_event_pane_t3_ParamLimits

0x9038,	// (0x000974b2) cntbar_detail_list_event_pane_t3

0x904a,	// (0x000974c4) popup_notif_wgt_window_ParamLimits

0x904a,	// (0x000974c4) popup_notif_wgt_window

0x9063,	// (0x000974dd) popup_submenu_window_cp01_ParamLimits

0x9063,	// (0x000974dd) popup_submenu_window_cp01

0xa3d2,	// (0x0009884c) bg_popup_window_pane_cp10

0xecda,	// (0x0009d154) listscroll_notif_wgt_pane

0xecec,	// (0x0009d166) list_notif_wgt_window

0xecf5,	// (0x0009d16f) scroll_pane_cp033

0x9077,	// (0x000974f1) list_notif_wgt_row_pane_ParamLimits

0x9077,	// (0x000974f1) list_notif_wgt_row_pane

0xecfe,	// (0x0009d178) aid_size_list_notif_wgt_del

0xed0b,	// (0x0009d185) list_notif_wgt_row_pane_g1

0xed17,	// (0x0009d191) list_notif_wgt_row_pane_g2

0xed26,	// (0x0009d1a0) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0009e31c) list_notif_wgt_row_pane_g

0xed33,	// (0x0009d1ad) list_notif_wgt_row_pane_t1

0xed49,	// (0x0009d1c3) list_notif_wgt_row_pane_t2

0xed5b,	// (0x0009d1d5) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0009e323) list_notif_wgt_row_pane_t

0xd9cb,	// (0x0009be45) list_recal_day_event_pane_g1

0xed6d,	// (0x0009d1e7) list_recal_day_event_pane_t1

0x99c6,	// (0x00097e40) bg_button_pane_cp045

0x9087,	// (0x00097501) cntbar_detail_btn_pane_t1

0xc96e,	// (0x0009ade8) main_callh_pane_ParamLimits

0xc96e,	// (0x0009ade8) main_callh_pane

0x99c6,	// (0x00097e40) main_coverflow0_pane

0x99c6,	// (0x00097e40) main_wgtman_pane

0x8059,	// (0x000964d3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8059,	// (0x000964d3) main_fs_bigclock_unlock_btn_pane

0x8759,	// (0x00096bd3) bg_button_pane_cp16

0x8769,	// (0x00096be3) cell_tport_appsw_pane_g3

0x9095,	// (0x0009750f) cf0_flow_pane_ParamLimits

0x9095,	// (0x0009750f) cf0_flow_pane

0xed7c,	// (0x0009d1f6) listscroll_cf0_pane

0xed87,	// (0x0009d201) main_cf0_pane_g1

0x90aa,	// (0x00097524) main_cf0_pane_t1_ParamLimits

0x90aa,	// (0x00097524) main_cf0_pane_t1

0x90c1,	// (0x0009753b) main_cf0_pane_t2_ParamLimits

0x90c1,	// (0x0009753b) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0009e32f) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0009e32f) main_cf0_pane_t

0xed99,	// (0x0009d213) scroll_pane_cp11

0x90d8,	// (0x00097552) cf0_flow_pane_g1

0x90e4,	// (0x0009755e) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0009e334) cf0_flow_pane_g

0x90f0,	// (0x0009756a) cf0_flow_pane_t1

0x99c6,	// (0x00097e40) main_call6_pane

0x99c6,	// (0x00097e40) main_calllock_pane

0x9102,	// (0x0009757c) call6_btn_grp_pane_ParamLimits

0x9102,	// (0x0009757c) call6_btn_grp_pane

0x911c,	// (0x00097596) call6_pane_g1_ParamLimits

0x911c,	// (0x00097596) call6_pane_g1

0x9135,	// (0x000975af) popup_call6_1st_window_ParamLimits

0x9135,	// (0x000975af) popup_call6_1st_window

0x9149,	// (0x000975c3) popup_call6_2nd_window_ParamLimits

0x9149,	// (0x000975c3) popup_call6_2nd_window

0x915d,	// (0x000975d7) cell_call6_btn_pane_ParamLimits

0x915d,	// (0x000975d7) cell_call6_btn_pane

0xa3d2,	// (0x0009884c) bg_popup_call2_in_pane_cp03

0xeda4,	// (0x0009d21e) popup_call6_1st_window_g1

0xedac,	// (0x0009d226) popup_call6_1st_window_g2

0xedb4,	// (0x0009d22e) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0009e339) popup_call6_1st_window_g

0xedbc,	// (0x0009d236) popup_call6_1st_window_t1

0xedcb,	// (0x0009d245) popup_call6_1st_window_t2

0xeddb,	// (0x0009d255) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0009e340) popup_call6_1st_window_t

0xa3d2,	// (0x0009884c) bg_popup_call2_in_pane_cp04

0xeda4,	// (0x0009d21e) popup_call6_2nd_window_g1

0xedac,	// (0x0009d226) popup_call6_2nd_window_g2

0xedb4,	// (0x0009d22e) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0009e339) popup_call6_2nd_window_g

0xedbc,	// (0x0009d236) popup_call6_2nd_window_t1

0x99c6,	// (0x00097e40) bg_button_pane_cp15

0xedeb,	// (0x0009d265) cell_call6_btn_pane_g1

0xad9c,	// (0x00099216) cell_call6_btn_pane_t1

0x9171,	// (0x000975eb) listscroll_wgtman_pane_ParamLimits

0x9171,	// (0x000975eb) listscroll_wgtman_pane

0x9192,	// (0x0009760c) wgtman_btn_pane_ParamLimits

0x9192,	// (0x0009760c) wgtman_btn_pane

0xb30f,	// (0x00099789) aid_scroll_copy1

0xedf4,	// (0x0009d26e) list_wgtman_pane

0x91d5,	// (0x0009764f) wgtman_btn_pane_g1_ParamLimits

0x91d5,	// (0x0009764f) wgtman_btn_pane_g1

0x9201,	// (0x0009767b) wgtman_btn_pane_t1_ParamLimits

0x9201,	// (0x0009767b) wgtman_btn_pane_t1

0xedfe,	// (0x0009d278) wgtman_btn_pane_t2_ParamLimits

0xedfe,	// (0x0009d278) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0009e347) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0009e347) wgtman_btn_pane_t

0x923e,	// (0x000976b8) listrow_wgtman_pane_ParamLimits

0x923e,	// (0x000976b8) listrow_wgtman_pane

0x9252,	// (0x000976cc) listrow_wgtman_pane_g1

0x925f,	// (0x000976d9) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0009e34c) listrow_wgtman_pane_g

0x0778,	// (0x0008ebf2) listrow_wgtman_pane_t1

0x0790,	// (0x0008ec0a) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0009e351) listrow_wgtman_pane_t

0x07b6,	// (0x0008ec30) wait_bar_pane_cp09

0xee15,	// (0x0009d28f) main_calllock_btn_pane

0xee1f,	// (0x0009d299) main_calllock_pane_g1

0x99c6,	// (0x00097e40) bg_button_pane_cp17

0xedeb,	// (0x0009d265) main_calllock_btn_pane_g1

0xee2b,	// (0x0009d2a5) main_calllock_btn_pane_t1

0x99c6,	// (0x00097e40) main_dialer3_pane

0x99c6,	// (0x00097e40) main_fmrd2_pane

0xcda6,	// (0x0009b220) main_fs_bigclock_unlock_btn_pane_g1

0x9285,	// (0x000976ff) main_fs_bigclock_unlock_btn_pane_t1

0x9293,	// (0x0009770d) area_fmrd2_info_pane_ParamLimits

0x9293,	// (0x0009770d) area_fmrd2_info_pane

0x92a4,	// (0x0009771e) area_fmrd2_visual_pane_ParamLimits

0x92a4,	// (0x0009771e) area_fmrd2_visual_pane

0x92b2,	// (0x0009772c) fmrd2_indi_pane_ParamLimits

0x92b2,	// (0x0009772c) fmrd2_indi_pane

0x92bf,	// (0x00097739) area_fmrd2_visual_pane_g1

0x92c7,	// (0x00097741) area_fmrd2_visual_pane_t1

0x92d7,	// (0x00097751) area_fmrd2_visual_pane_t2

0x92e7,	// (0x00097761) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0009e35b) area_fmrd2_visual_pane_t

0x92f7,	// (0x00097771) area_fmrd2_info_pane_g1

0x92ff,	// (0x00097779) area_fmrd2_info_pane_t1

0x930f,	// (0x00097789) area_fmrd2_info_pane_t2

0x931f,	// (0x00097799) area_fmrd2_info_pane_t3

0x932f,	// (0x000977a9) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0009e362) area_fmrd2_info_pane_t

0x933f,	// (0x000977b9) fmrd2_indi_pane_t1

0x934f,	// (0x000977c9) fmrd2_indi_pane_t2

0x935f,	// (0x000977d9) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0009e36b) fmrd2_indi_pane_t

0x80e2,	// (0x0009655c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x80e2,	// (0x0009655c) list_single_fs_bigclock_indicator_pane_g5

0x8197,	// (0x00096611) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8197,	// (0x00096611) list_single_fs_bigclock_indicator_pane_t5

0x896b,	// (0x00096de5) aid_cell_bcale_month_pane_ParamLimits

0x896b,	// (0x00096de5) aid_cell_bcale_month_pane

0x8992,	// (0x00096e0c) bcale_month_pane_ParamLimits

0x8992,	// (0x00096e0c) bcale_month_pane

0x89b6,	// (0x00096e30) bcale_preview_pane_ParamLimits

0x89b6,	// (0x00096e30) bcale_preview_pane

0xec0d,	// (0x0009d087) list_single_fs_bigclock_pane_t1_ParamLimits

0xec2c,	// (0x0009d0a6) list_single_fs_bigclock_pane_t2_ParamLimits

0xec2c,	// (0x0009d0a6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0009e2ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009e2ed) list_single_fs_bigclock_pane_t

0x927d,	// (0x000976f7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0009e356) main_fs_bigclock_unlock_btn_pane_g

0x936f,	// (0x000977e9) aid_dia3_key_size_ParamLimits

0x936f,	// (0x000977e9) aid_dia3_key_size

0x9383,	// (0x000977fd) aid_dia3_listrow_size_ParamLimits

0x9383,	// (0x000977fd) aid_dia3_listrow_size

0x939d,	// (0x00097817) dia3_keypad_fun_pane_ParamLimits

0x939d,	// (0x00097817) dia3_keypad_fun_pane

0x93b9,	// (0x00097833) dia3_keypad_num_pane_ParamLimits

0x93b9,	// (0x00097833) dia3_keypad_num_pane

0x93d5,	// (0x0009784f) dia3_listscroll_pane_ParamLimits

0x93d5,	// (0x0009784f) dia3_listscroll_pane

0x93eb,	// (0x00097865) dia3_numentry_pane_ParamLimits

0x93eb,	// (0x00097865) dia3_numentry_pane

0xee3a,	// (0x0009d2b4) dia3_list_pane

0x9404,	// (0x0009787e) scroll_pane_cp12

0x99c6,	// (0x00097e40) bg_dia3_numentry_pane

0x940f,	// (0x00097889) dia3_numentry_pane_t1

0x941e,	// (0x00097898) cell_dia3_key_num_pane

0x9426,	// (0x000978a0) cell_dia3_key0_fun_pane_ParamLimits

0x9426,	// (0x000978a0) cell_dia3_key0_fun_pane

0x943a,	// (0x000978b4) cell_dia3_key1_fun_pane_ParamLimits

0x943a,	// (0x000978b4) cell_dia3_key1_fun_pane

0x9451,	// (0x000978cb) dia3_listrow_pane

0xe250,	// (0x0009c6ca) bg_dia3_numentry_pane_g1

0x99c6,	// (0x00097e40) bg_button_pane_cp21

0x9463,	// (0x000978dd) cell_dia3_key_num_pane_t1

0x9471,	// (0x000978eb) cell_dia3_key_num_pane_t2

0x9480,	// (0x000978fa) cell_dia3_key_num_pane_t3

0x948f,	// (0x00097909) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0009e372) cell_dia3_key_num_pane_t

0x99c6,	// (0x00097e40) bg_button_pane_cp19

0x949e,	// (0x00097918) cell_dia3_key0_fun_pane_g1

0x99c6,	// (0x00097e40) bg_button_pane_cp20

0x949e,	// (0x00097918) cell_dia3_key1_fun_pane_g1

0x94a6,	// (0x00097920) area_left_week_number_pane

0x94b4,	// (0x0009792e) area_top_day_name_pane

0x94c7,	// (0x00097941) frame_month_view_pane

0xee45,	// (0x0009d2bf) grid_month_view_pane

0x94dc,	// (0x00097956) cell_top_day_name_pane_ParamLimits

0x94dc,	// (0x00097956) cell_top_day_name_pane

0x950b,	// (0x00097985) cell_area_left_week_number_pane_ParamLimits

0x950b,	// (0x00097985) cell_area_left_week_number_pane

0x9521,	// (0x0009799b) cell_month_view_pane_ParamLimits

0x9521,	// (0x0009799b) cell_month_view_pane

0xee53,	// (0x0009d2cd) frm_month_g1

0x9552,	// (0x000979cc) frm_month_g2

0x9565,	// (0x000979df) frm_month_g3

0x9578,	// (0x000979f2) frm_month_g4

0x958b,	// (0x00097a05) frm_month_g5

0x959e,	// (0x00097a18) frm_month_g6

0x95b3,	// (0x00097a2d) frm_month_g7

0xee60,	// (0x0009d2da) frm_month_g8

0x95c8,	// (0x00097a42) frm_month_g9

0x95d8,	// (0x00097a52) frm_month_g10

0x95e8,	// (0x00097a62) frm_month_g11

0x95f8,	// (0x00097a72) frm_month_g12

0x960a,	// (0x00097a84) frm_month_g13

0x961e,	// (0x00097a98) frm_month_g14

0x9632,	// (0x00097aac) frm_month_g15

0x9646,	// (0x00097ac0) frm_month_g16

0x000f,

0xff01,	// (0x0009e37b) frm_month_g

0xee6d,	// (0x0009d2e7) cell_top_day_name_pane_t1

0x965a,	// (0x00097ad4) cell_area_left_week_number_pane_g1

0x9666,	// (0x00097ae0) cell_area_left_week_number_pane_t1

0xcfcd,	// (0x0009b447) cell_month_view_pane_g1

0x9679,	// (0x00097af3) cell_month_view_pane_t1

0x99c6,	// (0x00097e40) main_fps_pane

0xe6a7,	// (0x0009cb21) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6a7,	// (0x0009cb21) cmail_ddmenu_btn02_pane_cp1

0xe6c3,	// (0x0009cb3d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c3,	// (0x0009cb3d) cmail_ddmenu_btn02_pane_cp2

0x8cba,	// (0x00097134) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8cba,	// (0x00097134) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0009e2a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0009e2a0) cmail_ddmenu_btn02_pane_g

0x8cdb,	// (0x00097155) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8cdb,	// (0x00097155) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0009e2a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0009e2a5) cmail_ddmenu_btn02_pane_t

0x968c,	// (0x00097b06) fps_text_pane_ParamLimits

0x968c,	// (0x00097b06) fps_text_pane

0x96a3,	// (0x00097b1d) main_fps_pane_g1_ParamLimits

0x96a3,	// (0x00097b1d) main_fps_pane_g1

0x96bb,	// (0x00097b35) wait_bar_pane_cp010_ParamLimits

0x96bb,	// (0x00097b35) wait_bar_pane_cp010

0x96ce,	// (0x00097b48) fps_text_pane_t1_ParamLimits

0x96ce,	// (0x00097b48) fps_text_pane_t1

0xd72d,	// (0x0009bba7) cam4_image_uncrop_pane_g1

0xd736,	// (0x0009bbb0) cam4_image_uncrop_pane_g2

0x62d9,	// (0x00094753) cam4_image_uncrop_pane_g3

0x62e2,	// (0x0009475c) cam4_image_uncrop_pane_g4

0x0003,

0xf8de,	// (0x0009dd58) cam4_image_uncrop_pane_g

0x9451,	// (0x000978cb) dia3_listrow_pane_ParamLimits

0x99c6,	// (0x00097e40) main_phob2_pane

0x872c,	// (0x00096ba6) cell_tport_appsw_pane_cp02_ParamLimits

0x872c,	// (0x00096ba6) cell_tport_appsw_pane_cp02

0x8740,	// (0x00096bba) cell_tport_appsw_pane_cp03_ParamLimits

0x8740,	// (0x00096bba) cell_tport_appsw_pane_cp03

0x99c6,	// (0x00097e40) phob2_contact_card_pane

0x99c6,	// (0x00097e40) phob2_listscroll_pane

0xee80,	// (0x0009d2fa) phob2_list_pane

0xee88,	// (0x0009d302) scroll_pane_cp034

0x96e6,	// (0x00097b60) phob2_cc_data_pane_ParamLimits

0x96e6,	// (0x00097b60) phob2_cc_data_pane

0x96ff,	// (0x00097b79) phob2_cc_listscroll_pane_ParamLimits

0x96ff,	// (0x00097b79) phob2_cc_listscroll_pane

0x923e,	// (0x000976b8) list_double_large_graphic_phob2_pane_ParamLimits

0x923e,	// (0x000976b8) list_double_large_graphic_phob2_pane

0x9721,	// (0x00097b9b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9721,	// (0x00097b9b) list_double_large_graphic_phob2_pane_g1

0x07c8,	// (0x0008ec42) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x07c8,	// (0x0008ec42) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0009e39c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0009e39c) list_double_large_graphic_phob2_pane_g

0x07d4,	// (0x0008ec4e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x07d4,	// (0x0008ec4e) list_double_large_graphic_phob2_pane_t1

0x07e9,	// (0x0008ec63) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x07e9,	// (0x0008ec63) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0009e3a1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0009e3a1) list_double_large_graphic_phob2_pane_t

0x99c6,	// (0x00097e40) list_highlight_pane_cp024

0x9737,	// (0x00097bb1) phob2_cc_button_pane

0x9741,	// (0x00097bbb) phob2_cc_data_pane_g1_ParamLimits

0x9741,	// (0x00097bbb) phob2_cc_data_pane_g1

0x9759,	// (0x00097bd3) phob2_cc_data_pane_g2_ParamLimits

0x9759,	// (0x00097bd3) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0009e3a6) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0009e3a6) phob2_cc_data_pane_g

0x9769,	// (0x00097be3) phob2_cc_data_pane_t1_ParamLimits

0x9769,	// (0x00097be3) phob2_cc_data_pane_t1

0x978b,	// (0x00097c05) phob2_cc_data_pane_t2_ParamLimits

0x978b,	// (0x00097c05) phob2_cc_data_pane_t2

0x97ad,	// (0x00097c27) phob2_cc_data_pane_t3_ParamLimits

0x97ad,	// (0x00097c27) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0009e3ab) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0009e3ab) phob2_cc_data_pane_t

0xee90,	// (0x0009d30a) phob2_cc_list_pane_ParamLimits

0xee90,	// (0x0009d30a) phob2_cc_list_pane

0xda74,	// (0x0009beee) scroll_pane_cp035_ParamLimits

0xda74,	// (0x0009beee) scroll_pane_cp035

0xadb9,	// (0x00099233) bg_button_pane_cp033

0xee9c,	// (0x0009d316) phob2_cc_button_pane_g1

0xeea8,	// (0x0009d322) phob2_cc_button_pane_t1

0xeebd,	// (0x0009d337) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0009e3b2) phob2_cc_button_pane_t

0x97cf,	// (0x00097c49) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x97cf,	// (0x00097c49) list_double_large_graphic_phob2_cc_pane

0x980d,	// (0x00097c87) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x980d,	// (0x00097c87) list_double_large_graphic_phob2_cc_pane_g1

0x07fb,	// (0x0008ec75) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x07fb,	// (0x0008ec75) list_double_large_graphic_phob2_cc_pane_g2

0x0807,	// (0x0008ec81) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0807,	// (0x0008ec81) list_double_large_graphic_phob2_cc_pane_g3

0x0813,	// (0x0008ec8d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0813,	// (0x0008ec8d) list_double_large_graphic_phob2_cc_pane_g4

0x081f,	// (0x0008ec99) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x081f,	// (0x0008ec99) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0009e3b7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0009e3b7) list_double_large_graphic_phob2_cc_pane_g

0x082b,	// (0x0008eca5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x082b,	// (0x0008eca5) list_double_large_graphic_phob2_cc_pane_t1

0x0854,	// (0x0008ecce) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0854,	// (0x0008ecce) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0009e3c2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0009e3c2) list_double_large_graphic_phob2_cc_pane_t

0xeecf,	// (0x0009d349) list_highlight_pane_cp025_ParamLimits

0xeecf,	// (0x0009d349) list_highlight_pane_cp025

0xadb9,	// (0x00099233) bg_button_pane_cp033_ParamLimits

0xee9c,	// (0x0009d316) phob2_cc_button_pane_g1_ParamLimits

0xeea8,	// (0x0009d322) phob2_cc_button_pane_t1_ParamLimits

0xeebd,	// (0x0009d337) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0009e3b2) phob2_cc_button_pane_t_ParamLimits

0x0acf,	// (0x0008ef49) popup_wgtman_window

0xd8ae,	// (0x0009bd28) scroll_pane_cp038

0x91b7,	// (0x00097631) wgtman_btn_pane_cp_01_ParamLimits

0x91b7,	// (0x00097631) wgtman_btn_pane_cp_01

0xeedd,	// (0x0009d357) wgtman_content_pane

0xeee6,	// (0x0009d360) wgtman_heading_pane

0x99c6,	// (0x00097e40) bg_heading_pane_cp02

0xeeef,	// (0x0009d369) wgtman_heading_pane_g1

0xeef7,	// (0x0009d371) wgtman_heading_pane_t1

0xef05,	// (0x0009d37f) scroll_pane_cp036

0xef0d,	// (0x0009d387) wgtman_list_pane

0xe564,	// (0x0009c9de) wgtman_list_pane_t1_ParamLimits

0xe564,	// (0x0009c9de) wgtman_list_pane_t1

0xabca,	// (0x00099044) cam4_grid_pane

0xfe38,	// (0x0008e2b2) bg_button_pane_cp015_ParamLimits

0x6fa1,	// (0x0009541b) bg_button_pane_cp016_ParamLimits

0x6fb4,	// (0x0009542e) bg_button_pane_cp017_ParamLimits

0xfe80,	// (0x0008e2fa) popup_vitu2_query_window_g3_ParamLimits

0xfe80,	// (0x0008e2fa) popup_vitu2_query_window_g3

0xfefb,	// (0x0008e375) popup_vitu2_query_window_t6_ParamLimits

0xfefb,	// (0x0008e375) popup_vitu2_query_window_t6

0xff26,	// (0x0008e3a0) popup_vitu2_query_window_t7_ParamLimits

0xff26,	// (0x0008e3a0) popup_vitu2_query_window_t7

0xd72d,	// (0x0009bba7) cam4_grid_pane_g1

0xd736,	// (0x0009bbb0) cam4_grid_pane_g2

0xef15,	// (0x0009d38f) cam4_grid_pane_g3

0xef1e,	// (0x0009d398) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0009e3c7) cam4_grid_pane_g

0x1997,	// (0x0008fe11) aid_placing_vt_slider_lsc_ParamLimits

0x1c84,	// (0x000900fe) vidtel_button_pane_ParamLimits

0x1c84,	// (0x000900fe) vidtel_button_pane

0x99c6,	// (0x00097e40) bg_button_pane_cp034

0xef29,	// (0x0009d3a3) vidtel_button_pane_g1

0xef31,	// (0x0009d3ab) vidtel_button_pane_t1

0xd9bb,	// (0x0009be35) aid_size_vtel_slider_touch

0xda74,	// (0x0009beee) scroll_pane_cp039

0x7d20,	// (0x0009619a) ncim_query_button_pane_cp01_ParamLimits

0x7d3f,	// (0x000961b9) ncimui_query_pane_g1_ParamLimits

0xadb9,	// (0x00099233) input_focus_pane_cp012_ParamLimits

0xe28e,	// (0x0009c708) ncim_query_entry_pane_t1_ParamLimits

0xda74,	// (0x0009beee) scroll_pane_cp039_ParamLimits

0xb3e6,	// (0x00099860) navi_pane_bcale_mc_g1

0xb3ee,	// (0x00099868) navi_pane_bcale_mc_t1

0xe6f9,	// (0x0009cb73) main_sp_fs_email_pane_g1

0xe705,	// (0x0009cb7f) main_sp_fs_email_pane_g2

0x0001,

0xfcd9,	// (0x0009e153) main_sp_fs_email_pane_g

0xe995,	// (0x0009ce0f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe995,	// (0x0009ce0f) list_single_cale_mrui_row_pane_g3

0x073c,	// (0x0008ebb6) list_single_recal_day_pane_g5_event_pane

0x8d4b,	// (0x000971c5) list_single_recal_day_pane_g7

0xef47,	// (0x0009d3c1) list_recal_day_event_pane_cp01

0xef50,	// (0x0009d3ca) list_recal_vselct_arw_lo_pane_cp01

0xef58,	// (0x0009d3d2) list_recal_vselct_arw_up_pane_cp01

0xef60,	// (0x0009d3da) list_recal_vselct_pane_cp01

0xd9cb,	// (0x0009be45) list_recal_day_event_pane_cp01_g1

0xadab,	// (0x00099225) list_recal_day_event_pane_cp01_t1

0x8d53,	// (0x000971cd) list_single_recal_day_pane_t1_ParamLimits

0x8d65,	// (0x000971df) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0009e2b5) list_single_recal_day_pane_t_ParamLimits

0xa0ce,	// (0x00098548) bg_notes_pane_ParamLimits

0xa179,	// (0x000985f3) list_notes_pane_ParamLimits

0x0de7,	// (0x0008f261) scroll_pane_cp06_ParamLimits

0xa1b5,	// (0x0009862f) main_notes_pane_ParamLimits

0xadb9,	// (0x00099233) main_welc_pane

0x9830,	// (0x00097caa) main_welc_body_pane_ParamLimits

0x9830,	// (0x00097caa) main_welc_body_pane

0x984f,	// (0x00097cc9) main_welc_opti_pane_ParamLimits

0x984f,	// (0x00097cc9) main_welc_opti_pane

0x98a7,	// (0x00097d21) main_welc_pane_t1_ParamLimits

0x98a7,	// (0x00097d21) main_welc_pane_t1

0xef6a,	// (0x0009d3e4) main_welc_body_row_pane_ParamLimits

0xef6a,	// (0x0009d3e4) main_welc_body_row_pane

0xd5c4,	// (0x0009ba3e) main_welc_opti_row_pane_ParamLimits

0xd5c4,	// (0x0009ba3e) main_welc_opti_row_pane

0xef81,	// (0x0009d3fb) main_welc_opti_row_pane_g1

0x9929,	// (0x00097da3) main_welc_opti_row_pane_t1

0xef89,	// (0x0009d403) main_welc_body_row_pane_t1

0xece4,	// (0x0009d15e) popup_notif_wgt_heading_pane

0xecfe,	// (0x0009d178) aid_size_list_notif_wgt_del_ParamLimits

0xed0b,	// (0x0009d185) list_notif_wgt_row_pane_g1_ParamLimits

0xed17,	// (0x0009d191) list_notif_wgt_row_pane_g2_ParamLimits

0xed26,	// (0x0009d1a0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0009e31c) list_notif_wgt_row_pane_g_ParamLimits

0xed33,	// (0x0009d1ad) list_notif_wgt_row_pane_t1_ParamLimits

0xed49,	// (0x0009d1c3) list_notif_wgt_row_pane_t2_ParamLimits

0xed5b,	// (0x0009d1d5) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0009e323) list_notif_wgt_row_pane_t_ParamLimits

0x9252,	// (0x000976cc) listrow_wgtman_pane_g1_ParamLimits

0x925f,	// (0x000976d9) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0009e34c) listrow_wgtman_pane_g_ParamLimits

0x0778,	// (0x0008ebf2) listrow_wgtman_pane_t1_ParamLimits

0x0790,	// (0x0008ec0a) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0009e351) listrow_wgtman_pane_t_ParamLimits

0x07b6,	// (0x0008ec30) wait_bar_pane_cp09_ParamLimits

0x99c6,	// (0x00097e40) bg_popup_heading_pane_cp02

0xef98,	// (0x0009d412) popup_notif_wgt_heading_pane_g1

0xefa0,	// (0x0009d41a) popup_notif_wgt_heading_pane_t1

0x99c6,	// (0x00097e40) main_vids_pane

0x99c6,	// (0x00097e40) vids_listscroll_pane

0x9938,	// (0x00097db2) scroll_pane_cp040

0x99c6,	// (0x00097e40) vids_list_pane

0x9943,	// (0x00097dbd) vids_list_double_pane_ParamLimits

0x9943,	// (0x00097dbd) vids_list_double_pane

0x9954,	// (0x00097dce) vids_list_double_pane_g1

0x995d,	// (0x00097dd7) vids_list_double_pane_t1

0x996d,	// (0x00097de7) vids_list_double_pane_t2

0x0001,

0xff64,	// (0x0009e3de) vids_list_double_pane_t

0xadb9,	// (0x00099233) main_ncimui_pane_ParamLimits

0x7b56,	// (0x00095fd0) main_ncimui_pane_g1_ParamLimits

0x7b62,	// (0x00095fdc) main_ncimui_pane_g2_ParamLimits

0x7b62,	// (0x00095fdc) main_ncimui_pane_g2

0x0001,

0xfbda,	// (0x0009e054) main_ncimui_pane_g_ParamLimits

0xfbda,	// (0x0009e054) main_ncimui_pane_g

0x986e,	// (0x00097ce8) main_welc_pane_g1_ParamLimits

0x986e,	// (0x00097ce8) main_welc_pane_g1

0x9883,	// (0x00097cfd) main_welc_pane_g2_ParamLimits

0x9883,	// (0x00097cfd) main_welc_pane_g2

0x0002,

0xff56,	// (0x0009e3d0) main_welc_pane_g_ParamLimits

0xff56,	// (0x0009e3d0) main_welc_pane_g

0xa0ce,	// (0x00098548) listscroll_mce_pane_ParamLimits

0xb53d,	// (0x000999b7) wait_bar_pane_cp10

0xc962,	// (0x0009addc) main_cale_day_pane_ParamLimits

0xc962,	// (0x0009addc) main_cale_week_pane_ParamLimits

0xa0ce,	// (0x00098548) main_messa_pane_ParamLimits

0x5544,	// (0x000939be) main_clock2_btn_pane_ParamLimits

0x5544,	// (0x000939be) main_clock2_btn_pane

0xd155,	// (0x0009b5cf) main_clock2_btn_pane_cp01_ParamLimits

0xd155,	// (0x0009b5cf) main_clock2_btn_pane_cp01

0xe966,	// (0x0009cde0) list_cale_mrui_pane_ParamLimits

0xed91,	// (0x0009d20b) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0009e32a) main_cf0_pane_g

0x94a6,	// (0x00097920) area_left_week_number_pane_ParamLimits

0x94b4,	// (0x0009792e) area_top_day_name_pane_ParamLimits

0x94c7,	// (0x00097941) frame_month_view_pane_ParamLimits

0xee45,	// (0x0009d2bf) grid_month_view_pane_ParamLimits

0xee53,	// (0x0009d2cd) frm_month_g1_ParamLimits

0x9552,	// (0x000979cc) frm_month_g2_ParamLimits

0x9565,	// (0x000979df) frm_month_g3_ParamLimits

0x9578,	// (0x000979f2) frm_month_g4_ParamLimits

0x958b,	// (0x00097a05) frm_month_g5_ParamLimits

0x959e,	// (0x00097a18) frm_month_g6_ParamLimits

0x95b3,	// (0x00097a2d) frm_month_g7_ParamLimits

0xee60,	// (0x0009d2da) frm_month_g8_ParamLimits

0x95c8,	// (0x00097a42) frm_month_g9_ParamLimits

0x95d8,	// (0x00097a52) frm_month_g10_ParamLimits

0x95e8,	// (0x00097a62) frm_month_g11_ParamLimits

0x95f8,	// (0x00097a72) frm_month_g12_ParamLimits

0x960a,	// (0x00097a84) frm_month_g13_ParamLimits

0x961e,	// (0x00097a98) frm_month_g14_ParamLimits

0x9632,	// (0x00097aac) frm_month_g15_ParamLimits

0x9646,	// (0x00097ac0) frm_month_g16_ParamLimits

0xff01,	// (0x0009e37b) frm_month_g_ParamLimits

0xee6d,	// (0x0009d2e7) cell_top_day_name_pane_t1_ParamLimits

0x965a,	// (0x00097ad4) cell_area_left_week_number_pane_g1_ParamLimits

0x9666,	// (0x00097ae0) cell_area_left_week_number_pane_t1_ParamLimits

0xcfcd,	// (0x0009b447) cell_month_view_pane_g1_ParamLimits

0x9679,	// (0x00097af3) cell_month_view_pane_t1_ParamLimits

0xa0c6,	// (0x00098540) main_clock2_btn_pane_g1

0xefae,	// (0x0009d428) main_clock2_btn_pane_t1

0xadb9,	// (0x00099233) listscroll_cmail_pane_ParamLimits

0xe6f9,	// (0x0009cb73) main_sp_fs_email_pane_g1_ParamLimits

0xe705,	// (0x0009cb7f) main_sp_fs_email_pane_g2_ParamLimits

0xfcd9,	// (0x0009e153) main_sp_fs_email_pane_g_ParamLimits

0xea6e,	// (0x0009cee8) list_recal_day_pane_ParamLimits

0xea7f,	// (0x0009cef9) mian_recal_day_pane_t1

0x0370,	// (0x0008e7ea) list_single_dyc_row_text_pane_t4_ParamLimits

0x0370,	// (0x0008e7ea) list_single_dyc_row_text_pane_t4

0x03b9,	// (0x0008e833) list_single_dyc_row_text_pane_t5_ParamLimits

0x03b9,	// (0x0008e833) list_single_dyc_row_text_pane_t5

0x8602,	// (0x00096a7c) list_single_dyc_row_text_pane_t6_ParamLimits

0x8602,	// (0x00096a7c) list_single_dyc_row_text_pane_t6

0x2a67,	// (0x00090ee1) aid_mgn_list_cale_time_pane

0xadb9,	// (0x00099233) main_gallery2_pane_ParamLimits

0xd169,	// (0x0009b5e3) main_clock2_pane_cp01_t1

0xd177,	// (0x0009b5f1) main_clock2_pane_cp01_t3

0x0001,

0xf7b0,	// (0x0009dc2a) main_clock2_pane_cp01_t

0x11f5,	// (0x0008f66f) cale_week_scroll_pane_g16_ParamLimits

0x11f5,	// (0x0008f66f) cale_week_scroll_pane_g16

0xa3d2,	// (0x0009884c) vorec_slider_pane

0xef31,	// (0x0009d3ab) vidtel_button_pane_t1_ParamLimits

0x8dd3,	// (0x0009724d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8dd3,	// (0x0009724d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8de6,	// (0x00097260) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8de6,	// (0x00097260) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0009e2d8) main_fs_bigclock_clock_pane_g_ParamLimits

0x8dfd,	// (0x00097277) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8e13,	// (0x0009728d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0009e2e1) main_fs_bigclock_clock_pane_t_ParamLimits

0x4cbb,	// (0x00093135) main_mup3_lyrics_pane_ParamLimits

0x4cbb,	// (0x00093135) main_mup3_lyrics_pane

0x99a3,	// (0x00097e1d) main_mup3_lyrics_pane_t1_ParamLimits

0x99a3,	// (0x00097e1d) main_mup3_lyrics_pane_t1

0xa91e,	// (0x00098d98) aid_main_mp4_pane_t1_area

0xa928,	// (0x00098da2) aid_main_mp4_pane_t2_area

0xa9d4,	// (0x00098e4e) main_mp4_pane_g7_ParamLimits

0xa9d4,	// (0x00098e4e) main_mp4_pane_g7

0xa9e0,	// (0x00098e5a) main_mp4_pane_g8_ParamLimits

0xa9e0,	// (0x00098e5a) main_mp4_pane_g8

0x609c,	// (0x00094516) aid_call6_pane_g1_size

0x97fd,	// (0x00097c77) list_double_large_graphic_phob2_other_pane_ParamLimits

0x97fd,	// (0x00097c77) list_double_large_graphic_phob2_other_pane

0x99be,	// (0x00097e38) list_double_large_graphic_phob2_other_pane_g1

0x99c6,	// (0x00097e40) list_highlight_pane_cp026

0xadb9,	// (0x00099233) main_welc_pane_ParamLimits

0x84b7,	// (0x00096931) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84b7,	// (0x00096931) main_sp_fs_ctrlbar_pane_g3

0x84d1,	// (0x0009694b) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84d1,	// (0x0009694b) main_sp_fs_ctrlbar_pane_g4

0x8505,	// (0x0009697f) toolbar2_fixed_button_pane_cp01

0x8510,	// (0x0009698a) toolbar2_fixed_button_pane_cp02

0x851d,	// (0x00096997) toolbar2_fixed_button_pane_cp03

0x9819,	// (0x00097c93) list_welc_entry_pane_ParamLimits

0x9819,	// (0x00097c93) list_welc_entry_pane

0x9898,	// (0x00097d12) main_welc_pane_g3_ParamLimits

0x9898,	// (0x00097d12) main_welc_pane_g3

0x98c9,	// (0x00097d43) main_welc_pane_t2_ParamLimits

0x98c9,	// (0x00097d43) main_welc_pane_t2

0x98e4,	// (0x00097d5e) main_welc_pane_t3_ParamLimits

0x98e4,	// (0x00097d5e) main_welc_pane_t3

0x0002,

0xff5d,	// (0x0009e3d7) main_welc_pane_t_ParamLimits

0xff5d,	// (0x0009e3d7) main_welc_pane_t

0x98fe,	// (0x00097d78) welc_button_pane_ParamLimits

0x98fe,	// (0x00097d78) welc_button_pane

0x9915,	// (0x00097d8f) welc_service_logo_pane_ParamLimits

0x9915,	// (0x00097d8f) welc_service_logo_pane

0xefbc,	// (0x0009d436) list_single_welc_entry_pane_ParamLimits

0xefbc,	// (0x0009d436) list_single_welc_entry_pane

0xefcf,	// (0x0009d449) list_single_welc_entry_pane_g1

0xefd7,	// (0x0009d451) list_single_welc_entry_pane_t1

0xefe5,	// (0x0009d45f) list_single_welc_entry_pane_t2

0x0001,

0xff69,	// (0x0009e3e3) list_single_welc_entry_pane_t

0x99c6,	// (0x00097e40) bg_button_pane_cp035

0xeff3,	// (0x0009d46d) welc_button_pane_t1

0xf001,	// (0x0009d47b) welc_service_logo_pane_g1

0xf00a,	// (0x0009d484) welc_service_logo_pane_g2

0x0001,

0xff6e,	// (0x0009e3e8) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
