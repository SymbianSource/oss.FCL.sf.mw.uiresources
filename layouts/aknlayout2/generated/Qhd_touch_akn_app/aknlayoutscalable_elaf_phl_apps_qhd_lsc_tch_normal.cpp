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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000def6 };

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
0x0a15,	// (0x0000e90b) Screen

0x0a21,	// (0x0000e917) application_window

0x0a5d,	// (0x0000e953) area_bottom_pane_ParamLimits

0x0a5d,	// (0x0000e953) area_bottom_pane

0x0a96,	// (0x0000e98c) area_top_pane_ParamLimits

0x0a96,	// (0x0000e98c) area_top_pane

0x92a7,	// (0x0001719d) call_video_uplink_pane_ParamLimits

0x92a7,	// (0x0001719d) call_video_uplink_pane

0x0b0b,	// (0x0000ea01) main_pane_ParamLimits

0x0b0b,	// (0x0000ea01) main_pane

0xbc79,	// (0x00019b6f) context_pane

0x3be3,	// (0x00011ad9) navi_pane

0x3c0b,	// (0x00011b01) popup_cale_events_window_ParamLimits

0x3c0b,	// (0x00011b01) popup_cale_events_window

0xbc8c,	// (0x00019b82) popup_mup_playback_window

0x3c23,	// (0x00011b19) signal_pane

0x9a36,	// (0x0001792c) main_browser_pane

0xa76f,	// (0x00018665) main_burst_pane

0x3935,	// (0x0001182b) main_calc_pane

0xa76f,	// (0x00018665) main_cale_day_pane

0x9a36,	// (0x0001792c) main_cale_month_pane

0xa76f,	// (0x00018665) main_cale_week_pane

0xa76f,	// (0x00018665) main_call_pane

0x96e6,	// (0x000175dc) main_call_poc_pane

0xa76f,	// (0x00018665) main_camera_pane

0xa76f,	// (0x00018665) main_chi_dic_pane

0xa5f4,	// (0x000184ea) main_clock_pane

0x96e6,	// (0x000175dc) main_fmradio_pane

0xa76f,	// (0x00018665) main_graph_messa_pane

0x96e6,	// (0x000175dc) main_help_pane

0x9a36,	// (0x0001792c) main_im_pane

0x9941,	// (0x00017837) main_image_pane_ParamLimits

0x9941,	// (0x00017837) main_image_pane

0x96e6,	// (0x000175dc) main_location2_pane

0xa76f,	// (0x00018665) main_location_pane

0x96e6,	// (0x000175dc) main_messa_pane

0x96e6,	// (0x000175dc) main_mp2_pane

0xa76f,	// (0x00018665) main_mp_pane

0x96e6,	// (0x000175dc) main_msg_pane

0x96e6,	// (0x000175dc) main_mup_eq_pane

0x96e6,	// (0x000175dc) main_mup_pane

0x9a36,	// (0x0001792c) main_notes_pane

0x96e6,	// (0x000175dc) main_pec_pane

0x96e6,	// (0x000175dc) main_phob_pane

0x96e6,	// (0x000175dc) main_pinb_pane

0x96e6,	// (0x000175dc) main_postcard_pane

0x96e6,	// (0x000175dc) main_qdial_pane

0xa76f,	// (0x00018665) main_skin_pane

0x96e6,	// (0x000175dc) main_smil2_pane

0xa76f,	// (0x00018665) main_smil_pane

0xa76f,	// (0x00018665) main_video_pane

0xa76f,	// (0x00018665) main_video_tele_pane

0x9941,	// (0x00017837) main_viewer_pane_ParamLimits

0x9941,	// (0x00017837) main_viewer_pane

0xa76f,	// (0x00018665) main_vorec_pane

0x3989,	// (0x0001187f) popup_blid_sat_info_window_ParamLimits

0x3989,	// (0x0001187f) popup_blid_sat_info_window

0x39e1,	// (0x000118d7) popup_dyc_status_message_window_ParamLimits

0x39e1,	// (0x000118d7) popup_dyc_status_message_window

0x39fb,	// (0x000118f1) popup_grid_large_graphic_window_ParamLimits

0x39fb,	// (0x000118f1) popup_grid_large_graphic_window

0x3ab7,	// (0x000119ad) popup_loc_request_window_ParamLimits

0x3ab7,	// (0x000119ad) popup_loc_request_window

0x3bbb,	// (0x00011ab1) popup_wml_address_window_ParamLimits

0x3bbb,	// (0x00011ab1) popup_wml_address_window

0x376f,	// (0x00011665) call_muted_g1

0x3424,	// (0x0001131a) popup_call_audio_conf_window_ParamLimits

0x3424,	// (0x0001131a) popup_call_audio_conf_window

0x3783,	// (0x00011679) popup_call_audio_first_window_ParamLimits

0x3783,	// (0x00011679) popup_call_audio_first_window

0x37f9,	// (0x000116ef) popup_call_audio_in_window_ParamLimits

0x37f9,	// (0x000116ef) popup_call_audio_in_window

0x3835,	// (0x0001172b) popup_call_audio_out_window_ParamLimits

0x3835,	// (0x0001172b) popup_call_audio_out_window

0x386f,	// (0x00011765) popup_call_audio_second_window_ParamLimits

0x386f,	// (0x00011765) popup_call_audio_second_window

0x38c5,	// (0x000117bb) popup_call_audio_wait_window_ParamLimits

0x38c5,	// (0x000117bb) popup_call_audio_wait_window

0x38fa,	// (0x000117f0) popup_number_entry_window_ParamLimits

0x38fa,	// (0x000117f0) popup_number_entry_window

0x92d3,	// (0x000171c9) bg_popup_call_pane_cp05_ParamLimits

0x92d3,	// (0x000171c9) bg_popup_call_pane_cp05

0x92f3,	// (0x000171e9) popup_number_entry_window_t1

0x9306,	// (0x000171fc) popup_number_entry_window_t2

0x9318,	// (0x0001720e) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0001cfce) popup_number_entry_window_t

0x932a,	// (0x00017220) text_title_cp2

0x933d,	// (0x00017233) bg_popup_call_pane_cp_ParamLimits

0x933d,	// (0x00017233) bg_popup_call_pane_cp

0x934b,	// (0x00017241) call_thumbnail_pane

0x9353,	// (0x00017249) popup_call_audio_in_window_g1_ParamLimits

0x9353,	// (0x00017249) popup_call_audio_in_window_g1

0x935f,	// (0x00017255) popup_call_audio_in_window_g2_ParamLimits

0x935f,	// (0x00017255) popup_call_audio_in_window_g2

0x936b,	// (0x00017261) popup_call_audio_in_window_g3_ParamLimits

0x936b,	// (0x00017261) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0001cfd7) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0001cfd7) popup_call_audio_in_window_g

0x9377,	// (0x0001726d) popup_call_audio_in_window_t1_ParamLimits

0x9377,	// (0x0001726d) popup_call_audio_in_window_t1

0x9393,	// (0x00017289) popup_call_audio_in_window_t2_ParamLimits

0x9393,	// (0x00017289) popup_call_audio_in_window_t2

0x93af,	// (0x000172a5) popup_call_audio_in_window_t3_ParamLimits

0x93af,	// (0x000172a5) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0001cfde) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0001cfde) popup_call_audio_in_window_t

0x933d,	// (0x00017233) bg_popup_call_pane_cp01_ParamLimits

0x933d,	// (0x00017233) bg_popup_call_pane_cp01

0x934b,	// (0x00017241) call_thumbnail_pane_cp02

0x93c2,	// (0x000172b8) call_type_pane_cp022

0x93ca,	// (0x000172c0) popup_call_audio_out_window_g1_ParamLimits

0x93ca,	// (0x000172c0) popup_call_audio_out_window_g1

0x93dc,	// (0x000172d2) popup_call_audio_out_window_g2_ParamLimits

0x93dc,	// (0x000172d2) popup_call_audio_out_window_g2

0x93e8,	// (0x000172de) popup_call_audio_out_window_g3_ParamLimits

0x93e8,	// (0x000172de) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0001cfe5) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0001cfe5) popup_call_audio_out_window_g

0x93fa,	// (0x000172f0) popup_call_audio_out_window_t1_ParamLimits

0x93fa,	// (0x000172f0) popup_call_audio_out_window_t1

0x9412,	// (0x00017308) popup_call_audio_out_window_t2_ParamLimits

0x9412,	// (0x00017308) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0001cfec) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0001cfec) popup_call_audio_out_window_t

0x9427,	// (0x0001731d) bg_popup_call_pane_ParamLimits

0x9427,	// (0x0001731d) bg_popup_call_pane

0x0cc1,	// (0x0000ebb7) call_thumbnail_pane_cp_ParamLimits

0x0cc1,	// (0x0000ebb7) call_thumbnail_pane_cp

0x94ab,	// (0x000173a1) call_type_pane_cp01_ParamLimits

0x94ab,	// (0x000173a1) call_type_pane_cp01

0x94ef,	// (0x000173e5) popup_call_audio_first_window_g1_ParamLimits

0x94ef,	// (0x000173e5) popup_call_audio_first_window_g1

0x953b,	// (0x00017431) popup_call_audio_first_window_g2_ParamLimits

0x953b,	// (0x00017431) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0001cff1) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0001cff1) popup_call_audio_first_window_g

0x957f,	// (0x00017475) popup_call_audio_first_window_t1_ParamLimits

0x957f,	// (0x00017475) popup_call_audio_first_window_t1

0x962b,	// (0x00017521) popup_call_audio_first_window_t4_ParamLimits

0x962b,	// (0x00017521) popup_call_audio_first_window_t4

0x96b7,	// (0x000175ad) popup_call_audio_first_window_t5_ParamLimits

0x96b7,	// (0x000175ad) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0001cff6) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0001cff6) popup_call_audio_first_window_t

0x96e6,	// (0x000175dc) bg_popup_call_pane_cp02

0x96f0,	// (0x000175e6) call_type_pane_cp023

0x96f8,	// (0x000175ee) popup_call_audio_wait_window_g1

0x9700,	// (0x000175f6) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001cffd) popup_call_audio_wait_window_g

0x9708,	// (0x000175fe) popup_call_audio_wait_window_t3

0x9716,	// (0x0001760c) bg_popup_call_pane_cp03_ParamLimits

0x9716,	// (0x0001760c) bg_popup_call_pane_cp03

0x9776,	// (0x0001766c) call_thumbnail_pane_cp011_ParamLimits

0x9776,	// (0x0001766c) call_thumbnail_pane_cp011

0x9782,	// (0x00017678) call_type_pane_cp034_ParamLimits

0x9782,	// (0x00017678) call_type_pane_cp034

0x97be,	// (0x000176b4) popup_call_audio_second_window_g1_ParamLimits

0x97be,	// (0x000176b4) popup_call_audio_second_window_g1

0x97fa,	// (0x000176f0) popup_call_audio_second_window_g2_ParamLimits

0x97fa,	// (0x000176f0) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0001d002) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0001d002) popup_call_audio_second_window_g

0x9836,	// (0x0001772c) popup_call_audio_second_window_t1_ParamLimits

0x9836,	// (0x0001772c) popup_call_audio_second_window_t1

0x98b7,	// (0x000177ad) popup_call_audio_second_window_t2_ParamLimits

0x98b7,	// (0x000177ad) popup_call_audio_second_window_t2

0x98ed,	// (0x000177e3) popup_call_audio_second_window_t3_ParamLimits

0x98ed,	// (0x000177e3) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0001d007) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0001d007) popup_call_audio_second_window_t

0x96e6,	// (0x000175dc) bg_popup_call_pane_cp04

0x9923,	// (0x00017819) list_conf_pane

0x992b,	// (0x00017821) popup_call_audio_conf_window_t1

0x9939,	// (0x0001782f) call_thumbnail_pane_g1

0x9941,	// (0x00017837) bg_pinb_pane_ParamLimits

0x9941,	// (0x00017837) bg_pinb_pane

0x994f,	// (0x00017845) find_pinb_pane

0x9958,	// (0x0001784e) listscroll_pinb_pane_ParamLimits

0x9958,	// (0x0001784e) listscroll_pinb_pane

0x9967,	// (0x0001785d) pinb_bg_pane_g1

0x0ce5,	// (0x0000ebdb) pinb_bg_pane_g2

0x0cf1,	// (0x0000ebe7) pinb_bg_pane_g3

0x0cfd,	// (0x0000ebf3) pinb_bg_pane_g4

0x0d09,	// (0x0000ebff) pinb_bg_pane_g5

0x0d15,	// (0x0000ec0b) pinb_bg_pane_g6

0x0d20,	// (0x0000ec16) pinb_bg_pane_g7

0x0d2b,	// (0x0000ec21) pinb_bg_pane_g8

0x0d36,	// (0x0000ec2c) pinb_bg_pane_g9

0x0d40,	// (0x0000ec36) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0001d00e) pinb_bg_pane_g

0x0d5d,	// (0x0000ec53) grid_pinb_pane

0x0d66,	// (0x0000ec5c) list_pinb_pane

0x0d6f,	// (0x0000ec65) scroll_pane_cp01_ParamLimits

0x0d6f,	// (0x0000ec65) scroll_pane_cp01

0x9971,	// (0x00017867) find_pinb_pane_g1_ParamLimits

0x9971,	// (0x00017867) find_pinb_pane_g1

0x9989,	// (0x0001787f) find_pinb_pane_t1

0x999b,	// (0x00017891) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0001d028) find_pinb_pane_t

0x99b0,	// (0x000178a6) input_focus_pane_cp01_ParamLimits

0x99b0,	// (0x000178a6) input_focus_pane_cp01

0x0d81,	// (0x0000ec77) cell_pinb_pane_ParamLimits

0x0d81,	// (0x0000ec77) cell_pinb_pane

0x0daa,	// (0x0000eca0) cell_pinb_pane_g1_ParamLimits

0x0daa,	// (0x0000eca0) cell_pinb_pane_g1

0x0dba,	// (0x0000ecb0) cell_pinb_pane_g2_ParamLimits

0x0dba,	// (0x0000ecb0) cell_pinb_pane_g2

0x99bc,	// (0x000178b2) cell_pinb_pane_g3_ParamLimits

0x99bc,	// (0x000178b2) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0001d02d) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0001d02d) cell_pinb_pane_g

0x96e6,	// (0x000175dc) grid_highlight_pane_cp01

0x0dc6,	// (0x0000ecbc) list_pinb_item_pane_ParamLimits

0x0dc6,	// (0x0000ecbc) list_pinb_item_pane

0x96e6,	// (0x000175dc) list_highlight_pane_cp02

0x0dd8,	// (0x0000ecce) list_pinb_item_pane_g1_ParamLimits

0x0dd8,	// (0x0000ecce) list_pinb_item_pane_g1

0x0de5,	// (0x0000ecdb) list_pinb_item_pane_g2_ParamLimits

0x0de5,	// (0x0000ecdb) list_pinb_item_pane_g2

0x0df1,	// (0x0000ece7) list_pinb_item_pane_g3_ParamLimits

0x0df1,	// (0x0000ece7) list_pinb_item_pane_g3

0x0e02,	// (0x0000ecf8) list_pinb_item_pane_g4_ParamLimits

0x0e02,	// (0x0000ecf8) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0001d034) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0001d034) list_pinb_item_pane_g

0x0e0e,	// (0x0000ed04) list_pinb_item_pane_t1_ParamLimits

0x0e0e,	// (0x0000ed04) list_pinb_item_pane_t1

0x0e43,	// (0x0000ed39) calc_display_pane

0x0e6b,	// (0x0000ed61) calc_paper_pane

0x0e8e,	// (0x0000ed84) grid_calc_pane

0x96e6,	// (0x000175dc) bg_list_pane_cp01

0x0ebc,	// (0x0000edb2) clock_g1

0x0ec4,	// (0x0000edba) clock_g2

0x0001,

0xf147,	// (0x0001d03d) clock_g

0x0ecc,	// (0x0000edc2) clock_t1_ParamLimits

0x0ecc,	// (0x0000edc2) clock_t1

0x0ee1,	// (0x0000edd7) clock_t2_ParamLimits

0x0ee1,	// (0x0000edd7) clock_t2

0x0ef3,	// (0x0000ede9) clock_t3_ParamLimits

0x0ef3,	// (0x0000ede9) clock_t3

0x0f05,	// (0x0000edfb) clock_t4_ParamLimits

0x0f05,	// (0x0000edfb) clock_t4

0x0f17,	// (0x0000ee0d) clock_t5_ParamLimits

0x0f17,	// (0x0000ee0d) clock_t5

0x0f2c,	// (0x0000ee22) clock_t6_ParamLimits

0x0f2c,	// (0x0000ee22) clock_t6

0x0f3e,	// (0x0000ee34) clock_t7_ParamLimits

0x0f3e,	// (0x0000ee34) clock_t7

0x0f50,	// (0x0000ee46) clock_t8_ParamLimits

0x0f50,	// (0x0000ee46) clock_t8

0x0f64,	// (0x0000ee5a) clock_t9_ParamLimits

0x0f64,	// (0x0000ee5a) clock_t9

0x0008,

0xf14c,	// (0x0001d042) clock_t_ParamLimits

0xf14c,	// (0x0001d042) clock_t

0x99d0,	// (0x000178c6) popup_clock_analogue_window_cp02

0x99d0,	// (0x000178c6) popup_clock_digital_window_cp01

0x99d8,	// (0x000178ce) listscroll_help_pane

0x96e6,	// (0x000175dc) phob_pre_status_pane

0x99e2,	// (0x000178d8) grid_qdial_pane

0x96e6,	// (0x000175dc) listscroll_mce_pane

0x99ec,	// (0x000178e2) bg_notes_pane

0x99fa,	// (0x000178f0) list_notes_pane

0x0f78,	// (0x0000ee6e) scroll_pane_cp06

0x9a08,	// (0x000178fe) bg_calc_paper_pane

0x9a1c,	// (0x00017912) list_calc_pane

0x9a36,	// (0x0001792c) bg_calc_display_pane

0x0f8c,	// (0x0000ee82) calc_display_pane_t1

0x0f9e,	// (0x0000ee94) calc_display_pane_t2

0x9a42,	// (0x00017938) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0001d055) calc_display_pane_t

0x0fb0,	// (0x0000eea6) cell_calc_pane_ParamLimits

0x0fb0,	// (0x0000eea6) cell_calc_pane

0x9a54,	// (0x0001794a) bg_calc_paper_pane_g1

0x9a60,	// (0x00017956) bg_calc_paper_pane_g2

0x9a6c,	// (0x00017962) bg_calc_paper_pane_g3

0x9a78,	// (0x0001796e) bg_calc_paper_pane_g4

0x9a84,	// (0x0001797a) bg_calc_paper_pane_g5

0x0fe5,	// (0x0000eedb) bg_calc_paper_pane_g6

0x0ff4,	// (0x0000eeea) bg_calc_paper_pane_g7

0x1003,	// (0x0000eef9) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0001d05c) bg_calc_paper_pane_g

0x1016,	// (0x0000ef0c) calc_bg_paper_pane_g9

0x1029,	// (0x0000ef1f) list_calc_item_pane_ParamLimits

0x1029,	// (0x0000ef1f) list_calc_item_pane

0x9a90,	// (0x00017986) list_calc_item_pane_g1

0x9a9d,	// (0x00017993) list_calc_item_pane_t1_ParamLimits

0x9a9d,	// (0x00017993) list_calc_item_pane_t1

0x1041,	// (0x0000ef37) list_calc_item_pane_t2_ParamLimits

0x1041,	// (0x0000ef37) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0001d06d) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0001d06d) list_calc_item_pane_t

0x9aaf,	// (0x000179a5) cell_calc_pane_g1

0x9ab9,	// (0x000179af) grid_highlight_pane_cp02

0x1073,	// (0x0000ef69) bg_calc_display_pane_g1

0x107c,	// (0x0000ef72) bg_calc_display_pane_g2

0x1086,	// (0x0000ef7c) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0001d077) bg_calc_display_pane_g

0x108f,	// (0x0000ef85) cell_qdial_pane_ParamLimits

0x108f,	// (0x0000ef85) cell_qdial_pane

0x10a3,	// (0x0000ef99) cell_qdial_pane_g1_ParamLimits

0x10a3,	// (0x0000ef99) cell_qdial_pane_g1

0x10b9,	// (0x0000efaf) cell_qdial_pane_g2_ParamLimits

0x10b9,	// (0x0000efaf) cell_qdial_pane_g2

0x9adb,	// (0x000179d1) cell_qdial_pane_g3_ParamLimits

0x9adb,	// (0x000179d1) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0001d07e) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0001d07e) cell_qdial_pane_g

0x10e0,	// (0x0000efd6) cell_qdial_pane_t1_ParamLimits

0x10e0,	// (0x0000efd6) cell_qdial_pane_t1

0x10f8,	// (0x0000efee) cell_qdial_pane_t2_ParamLimits

0x10f8,	// (0x0000efee) cell_qdial_pane_t2

0x110b,	// (0x0000f001) cell_qdial_pane_t3_ParamLimits

0x110b,	// (0x0000f001) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0001d087) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0001d087) cell_qdial_pane_t

0x96e6,	// (0x000175dc) grid_highlight_pane_cp04

0x9ae7,	// (0x000179dd) thumbnail_qdial_pane_ParamLimits

0x9ae7,	// (0x000179dd) thumbnail_qdial_pane

0x9b43,	// (0x00017a39) list_help_pane

0x9b4c,	// (0x00017a42) scroll_pane_cp02

0x111e,	// (0x0000f014) help_list_pane_t1_ParamLimits

0x111e,	// (0x0000f014) help_list_pane_t1

0x9b55,	// (0x00017a4b) bg_notes_pane_g2

0x9b5d,	// (0x00017a53) bg_notes_pane_g3

0x9b65,	// (0x00017a5b) notes_bg_pane_g1

0x9b6d,	// (0x00017a63) notes_bg_pane_g4

0x9b75,	// (0x00017a6b) notes_bg_pane_g5

0x9b7d,	// (0x00017a73) notes_bg_pane_g6

0x9b85,	// (0x00017a7b) notes_bg_pane_g7

0x9b8d,	// (0x00017a83) notes_bg_pane_g8

0x9b95,	// (0x00017a8b) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0001d0a5) notes_bg_pane_g

0x113b,	// (0x0000f031) list_notes_text_pane_ParamLimits

0x113b,	// (0x0000f031) list_notes_text_pane

0x9b9d,	// (0x00017a93) list_notes_text_pane_g1

0x1150,	// (0x0000f046) list_notes_text_pane_t1

0x9a36,	// (0x0001792c) listscroll_cale_week_pane

0x117b,	// (0x0000f071) bg_cale_heading_pane

0x9bb7,	// (0x00017aad) bg_cale_pane_cp01

0x118f,	// (0x0000f085) cale_week_corner_pane

0x11a5,	// (0x0000f09b) cale_week_day_heading_pane

0x11b9,	// (0x0000f0af) cale_week_scroll_pane_g1

0x11ca,	// (0x0000f0c0) cale_week_scroll_pane_g2

0x11db,	// (0x0000f0d1) cale_week_scroll_pane_g3

0x11ec,	// (0x0000f0e2) cale_week_scroll_pane_g4

0x11fd,	// (0x0000f0f3) cale_week_scroll_pane_g5

0x1210,	// (0x0000f106) cale_week_scroll_pane_g6

0x1223,	// (0x0000f119) cale_week_scroll_pane_g7

0x1236,	// (0x0000f12c) cale_week_scroll_pane_g8

0x1249,	// (0x0000f13f) cale_week_scroll_pane_g9

0x125a,	// (0x0000f150) cale_week_scroll_pane_g10

0x126b,	// (0x0000f161) cale_week_scroll_pane_g11

0x127c,	// (0x0000f172) cale_week_scroll_pane_g12

0x128d,	// (0x0000f183) cale_week_scroll_pane_g13

0x129e,	// (0x0000f194) cale_week_scroll_pane_g14

0x12af,	// (0x0000f1a5) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0001d0b4) cale_week_scroll_pane_g

0x12c0,	// (0x0000f1b6) cale_week_time_pane

0x12d3,	// (0x0000f1c9) grid_cale_week_pane

0x12e8,	// (0x0000f1de) scroll_pane_cp08

0x1302,	// (0x0000f1f8) cell_cale_week_pane_ParamLimits

0x1302,	// (0x0000f1f8) cell_cale_week_pane

0x1342,	// (0x0000f238) cale_week_day_heading_pane_t1

0x136c,	// (0x0000f262) cale_week_day_heading_pane_t2

0x1396,	// (0x0000f28c) cale_week_day_heading_pane_t3

0x13c0,	// (0x0000f2b6) cale_week_day_heading_pane_t4

0x13ea,	// (0x0000f2e0) cale_week_day_heading_pane_t5

0x1414,	// (0x0000f30a) cale_week_day_heading_pane_t6

0x1440,	// (0x0000f336) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0001d0d3) cale_week_day_heading_pane_t

0x9be2,	// (0x00017ad8) bg_cale_side_pane

0x146a,	// (0x0000f360) cale_week_time_pane_t1

0x1482,	// (0x0000f378) cale_week_time_pane_t2

0x149a,	// (0x0000f390) cale_week_time_pane_t3

0x14b2,	// (0x0000f3a8) cale_week_time_pane_t4

0x14ca,	// (0x0000f3c0) cale_week_time_pane_t5

0x14e2,	// (0x0000f3d8) cale_week_time_pane_t6

0x14fa,	// (0x0000f3f0) cale_week_time_pane_t7

0x1512,	// (0x0000f408) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0001d0e2) cale_week_time_pane_t

0x152a,	// (0x0000f420) cell_cale_week_pane_g2

0x1543,	// (0x0000f439) cell_cale_week_pane_g3_ParamLimits

0x1543,	// (0x0000f439) cell_cale_week_pane_g3

0x9bf0,	// (0x00017ae6) grid_highlight_pane_cp07

0x9bf8,	// (0x00017aee) listscroll_gms_pane

0x9c02,	// (0x00017af8) grid_gms_pane

0x9c0b,	// (0x00017b01) listscroll_gms_pane_g1

0x9c13,	// (0x00017b09) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0001d0f3) listscroll_gms_pane_g

0x155b,	// (0x0000f451) scroll_pane_cp010

0x1566,	// (0x0000f45c) cell_gms_pane_ParamLimits

0x1566,	// (0x0000f45c) cell_gms_pane

0x1578,	// (0x0000f46e) cell_gms_pane_g1

0x9c1b,	// (0x00017b11) cell_gms_pane_g2

0x9c23,	// (0x00017b19) cell_gms_pane_g3

0x9c2c,	// (0x00017b22) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0001d0f8) cell_gms_pane_g

0x9c35,	// (0x00017b2b) grid_highlight_pane_cp09

0x3719,	// (0x0001160f) phob_pre_status_pane_g1

0x3721,	// (0x00011617) phob_pre_status_pane_g2

0x3729,	// (0x0001161f) phob_pre_status_pane_g3

0x3731,	// (0x00011627) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0001d4e7) phob_pre_status_pane_g

0x3741,	// (0x00011637) phob_pre_status_pane_t1

0x374f,	// (0x00011645) phob_pre_status_pane_t2

0x375f,	// (0x00011655) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0001d4f2) phob_pre_status_pane_t

0x96e6,	// (0x000175dc) bg_list_pane_cp05

0x1588,	// (0x0000f47e) grid_vorec_pane

0x1592,	// (0x0000f488) vorec_t1

0x15a0,	// (0x0000f496) vorec_t2

0x15ae,	// (0x0000f4a4) vorec_t3

0x15bc,	// (0x0000f4b2) vorec_t4

0x15ca,	// (0x0000f4c0) vorec_t5

0x9c3d,	// (0x00017b33) vorec_t6

0x0006,

0xf20b,	// (0x0001d101) vorec_t

0x15e6,	// (0x0000f4dc) wait_bar_pane_cp01

0x15ee,	// (0x0000f4e4) cell_vorec_pane_ParamLimits

0x15ee,	// (0x0000f4e4) cell_vorec_pane

0x9c4b,	// (0x00017b41) cell_vorec_pane_g1

0x96e6,	// (0x000175dc) grid_highlight_pane_cp05

0x1619,	// (0x0000f50f) cams_zoom_pane

0x1628,	// (0x0000f51e) image_vga_pane

0x1642,	// (0x0000f538) main_camera_pane_g1

0x1654,	// (0x0000f54a) main_camera_pane_g2

0x1664,	// (0x0000f55a) main_camera_pane_g3

0x1674,	// (0x0000f56a) main_camera_pane_g4

0x1684,	// (0x0000f57a) main_camera_pane_g5

0x1694,	// (0x0000f58a) main_camera_pane_g6

0x16a6,	// (0x0000f59c) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0001d110) main_camera_pane_g

0x16b6,	// (0x0000f5ac) main_camera_pane_t1

0x16cc,	// (0x0000f5c2) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0001d121) main_camera_pane_t

0x1706,	// (0x0000f5fc) cams_zoom_pane_cp_ParamLimits

0x1706,	// (0x0000f5fc) cams_zoom_pane_cp

0x172e,	// (0x0000f624) image_cif_pane_ParamLimits

0x172e,	// (0x0000f624) image_cif_pane

0x1769,	// (0x0000f65f) image_subqcif_pane

0x1771,	// (0x0000f667) main_video_pane_g1_ParamLimits

0x1771,	// (0x0000f667) main_video_pane_g1

0x1795,	// (0x0000f68b) main_video_pane_g2_ParamLimits

0x1795,	// (0x0000f68b) main_video_pane_g2

0x17c9,	// (0x0000f6bf) main_video_pane_g3_ParamLimits

0x17c9,	// (0x0000f6bf) main_video_pane_g3

0x17f7,	// (0x0000f6ed) main_video_pane_g4_ParamLimits

0x17f7,	// (0x0000f6ed) main_video_pane_g4

0x1825,	// (0x0000f71b) main_video_pane_g5_ParamLimits

0x1825,	// (0x0000f71b) main_video_pane_g5

0x9c61,	// (0x00017b57) main_video_pane_g6_ParamLimits

0x9c61,	// (0x00017b57) main_video_pane_g6

0x0006,

0xf230,	// (0x0001d126) main_video_pane_g_ParamLimits

0xf230,	// (0x0001d126) main_video_pane_g

0x184e,	// (0x0000f744) main_video_pane_t1_ParamLimits

0x184e,	// (0x0000f744) main_video_pane_t1

0x9c7b,	// (0x00017b71) cams_zoom_pane_g1

0x9c84,	// (0x00017b7a) cams_zoom_pane_g2

0x9c8d,	// (0x00017b83) cams_zoom_pane_g3

0x9c96,	// (0x00017b8c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0001d135) cams_zoom_pane_g

0x18ab,	// (0x0000f7a1) grid_cams_pane

0x18c5,	// (0x0000f7bb) linegrid_cams_pane

0x18d9,	// (0x0000f7cf) cell_cams_pane_ParamLimits

0x18d9,	// (0x0000f7cf) cell_cams_pane

0x9c9f,	// (0x00017b95) cams_burst_image_pane

0x9ca7,	// (0x00017b9d) cell_cams_pane_g1

0x96e6,	// (0x000175dc) grid_highlight_pane_cp03

0x9aaf,	// (0x000179a5) mp_bg_pane_g1

0x96e6,	// (0x000175dc) bg_list_pane_cp03

0xbb51,	// (0x00019a47) bg_mp_pane

0xbb59,	// (0x00019a4f) grid_mp_pane

0xbb61,	// (0x00019a57) media_player_g1

0xbb69,	// (0x00019a5f) media_player_t1

0xbb77,	// (0x00019a6d) media_player_t2

0xbb85,	// (0x00019a7b) media_player_t3

0xbb93,	// (0x00019a89) media_player_t4

0xbba1,	// (0x00019a97) media_player_t5

0xbbaf,	// (0x00019aa5) media_player_t6

0xbbbd,	// (0x00019ab3) media_player_t7

0x0006,

0xf5db,	// (0x0001d4d1) media_player_t

0xbbcb,	// (0x00019ac1) wait_bar_pane_cp02

0xf5c0,	// (0x0001d4b6) main_usb_pane_t

0x3710,	// (0x00011606) cell_mp_pane

0x9aaf,	// (0x000179a5) cell_mp_pane_g1

0x96e6,	// (0x000175dc) grid_highlight_pane_cp06

0x9d4f,	// (0x00017c45) grid_skin_colour_pane

0x9d57,	// (0x00017c4d) list_highlight_pane_cp03

0x194b,	// (0x0000f841) skin_g1

0x9d5f,	// (0x00017c55) skin_t1

0x9d6e,	// (0x00017c64) skin_t2

0x0001,

0xf274,	// (0x0001d16a) skin_t

0x1953,	// (0x0000f849) cell_skin_colour_pane_ParamLimits

0x1953,	// (0x0000f849) cell_skin_colour_pane

0x9d7c,	// (0x00017c72) cell_skin_colour_pane_g1

0x19cc,	// (0x0000f8c2) call_video_g1_ParamLimits

0x19cc,	// (0x0000f8c2) call_video_g1

0x19e8,	// (0x0000f8de) call_video_g2_ParamLimits

0x19e8,	// (0x0000f8de) call_video_g2

0x0001,

0xf279,	// (0x0001d16f) call_video_g_ParamLimits

0xf279,	// (0x0001d16f) call_video_g

0x1a3a,	// (0x0000f930) call_video_uplink_pane_cp1_ParamLimits

0x1a3a,	// (0x0000f930) call_video_uplink_pane_cp1

0x9d8e,	// (0x00017c84) call_video_uplink_pane_cp2

0x1ad9,	// (0x0000f9cf) video_down_crop_pane_ParamLimits

0x1ad9,	// (0x0000f9cf) video_down_crop_pane

0x1bd0,	// (0x0000fac6) video_down_pane_ParamLimits

0x1bd0,	// (0x0000fac6) video_down_pane

0x9d96,	// (0x00017c8c) video_down_subqcif_pane_ParamLimits

0x9d96,	// (0x00017c8c) video_down_subqcif_pane

0x9dae,	// (0x00017ca4) video_down_subqcif_pane_cp_ParamLimits

0x9dae,	// (0x00017ca4) video_down_subqcif_pane_cp

0x9dd4,	// (0x00017cca) im_reading_pane_ParamLimits

0x9dd4,	// (0x00017cca) im_reading_pane

0x1cde,	// (0x0000fbd4) im_writing_pane_ParamLimits

0x1cde,	// (0x0000fbd4) im_writing_pane

0x1cf4,	// (0x0000fbea) im_reading_pane_t1

0x9dee,	// (0x00017ce4) list_im_pane

0x9dff,	// (0x00017cf5) scroll_pane_cp07

0x1d2d,	// (0x0000fc23) im_writing_pane_t1_ParamLimits

0x1d2d,	// (0x0000fc23) im_writing_pane_t1

0x9e18,	// (0x00017d0e) im_writing_pane_t2_ParamLimits

0x9e18,	// (0x00017d0e) im_writing_pane_t2

0x0001,

0xf283,	// (0x0001d179) im_writing_pane_t_ParamLimits

0xf283,	// (0x0001d179) im_writing_pane_t

0x96e6,	// (0x000175dc) input_focus_pane_cp04

0x96e6,	// (0x000175dc) input_focus_pane_cp05

0x1d42,	// (0x0000fc38) list_im_single_pane_ParamLimits

0x1d42,	// (0x0000fc38) list_im_single_pane

0x1d56,	// (0x0000fc4c) list_single_im_pane_t1

0x36d0,	// (0x000115c6) blid_accuracy_pane

0x36d8,	// (0x000115ce) blid_compass_pane

0x36e2,	// (0x000115d8) main_location_t1

0x36f2,	// (0x000115e8) main_location_t2

0x3702,	// (0x000115f8) main_location_t3

0x0002,

0xf5ea,	// (0x0001d4e0) main_location_t

0x96e6,	// (0x000175dc) aid_levels_location

0x9aaf,	// (0x000179a5) blid_accuracy_pane_g1

0x9aaf,	// (0x000179a5) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0001d1db) blid_accuracy_pane_g

0x9e60,	// (0x00017d56) wml_content_pane

0x9e9e,	// (0x00017d94) wml_button_pane_ParamLimits

0x9e9e,	// (0x00017d94) wml_button_pane

0x1d65,	// (0x0000fc5b) wml_list_single_large_pane_ParamLimits

0x1d65,	// (0x0000fc5b) wml_list_single_large_pane

0x1d7a,	// (0x0000fc70) wml_list_single_medium_pane_ParamLimits

0x1d7a,	// (0x0000fc70) wml_list_single_medium_pane

0x1d90,	// (0x0000fc86) wml_list_single_small_pane_ParamLimits

0x1d90,	// (0x0000fc86) wml_list_single_small_pane

0x9eb2,	// (0x00017da8) wml_selection_box_pane_ParamLimits

0x9eb2,	// (0x00017da8) wml_selection_box_pane

0x9ec5,	// (0x00017dbb) wml_list_single_pane_t1

0x9ed4,	// (0x00017dca) wml_list_single_medium_pane_t1

0x9ee3,	// (0x00017dd9) wml_list_single_large_pane_t1

0x9ef2,	// (0x00017de8) input_focus_pane_cp02_ParamLimits

0x9ef2,	// (0x00017de8) input_focus_pane_cp02

0x9f05,	// (0x00017dfb) wml_selection_box_pane_g1

0x9f0e,	// (0x00017e04) wml_selection_box_pane_t1_ParamLimits

0x9f0e,	// (0x00017e04) wml_selection_box_pane_t1

0x9941,	// (0x00017837) bg_wml_button_pane_ParamLimits

0x9941,	// (0x00017837) bg_wml_button_pane

0x9f26,	// (0x00017e1c) wml_button_pane_g1

0x9f2e,	// (0x00017e24) wml_button_pane_t1

0x9f26,	// (0x00017e1c) wml_button_bg_pane_g1

0x9f3e,	// (0x00017e34) wml_button_bg_pane_g2

0x9f46,	// (0x00017e3c) wml_button_bg_pane_g3

0x9f4e,	// (0x00017e44) wml_button_bg_pane_g4

0x9f56,	// (0x00017e4c) wml_button_bg_pane_g5

0x9f5e,	// (0x00017e54) wml_button_bg_pane_g6

0x9f66,	// (0x00017e5c) wml_button_bg_pane_g7

0x9f6e,	// (0x00017e64) wml_button_bg_pane_g8

0x9f76,	// (0x00017e6c) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0001d17e) wml_button_bg_pane_g

0x1da8,	// (0x0000fc9e) bg_list_pane_cp02

0x9f7e,	// (0x00017e74) mce_header_pane_ParamLimits

0x9f7e,	// (0x00017e74) mce_header_pane

0x9f94,	// (0x00017e8a) mce_icon_pane

0x9f94,	// (0x00017e8a) mce_image_pane

0x9f9d,	// (0x00017e93) mce_text_pane_ParamLimits

0x9f9d,	// (0x00017e93) mce_text_pane

0x1db0,	// (0x0000fca6) scroll_pane_cp03

0x9e96,	// (0x00017d8c) scroll_pane_cp04

0x9fb0,	// (0x00017ea6) scroll_pane_cp05_ParamLimits

0x9fb0,	// (0x00017ea6) scroll_pane_cp05

0x1dba,	// (0x0000fcb0) mce_header_field_pane_ParamLimits

0x1dba,	// (0x0000fcb0) mce_header_field_pane

0x1dd1,	// (0x0000fcc7) mce_header_field_pane_2_ParamLimits

0x1dd1,	// (0x0000fcc7) mce_header_field_pane_2

0x1de7,	// (0x0000fcdd) mce_header_field_pane_3

0x1def,	// (0x0000fce5) list_single_mce_message_pane_ParamLimits

0x1def,	// (0x0000fce5) list_single_mce_message_pane

0x1e04,	// (0x0000fcfa) list_single_mce_smart_pane_ParamLimits

0x1e04,	// (0x0000fcfa) list_single_mce_smart_pane

0x9fbc,	// (0x00017eb2) input_focus_pane_cp03

0x9fc5,	// (0x00017ebb) list_header_data_pane

0x1e24,	// (0x0000fd1a) mce_header_field_pane_t1

0x1e34,	// (0x0000fd2a) list_single_mce_header_pane_ParamLimits

0x1e34,	// (0x0000fd2a) list_single_mce_header_pane

0x9fcd,	// (0x00017ec3) list_single_mce_header_pane_t1

0x9fdc,	// (0x00017ed2) list_single_mce_message_pane_g1

0x9fe4,	// (0x00017eda) list_single_mce_message_pane_t1

0x1e66,	// (0x0000fd5c) bg_cale_heading_pane_cp01_ParamLimits

0x1e66,	// (0x0000fd5c) bg_cale_heading_pane_cp01

0x9ff2,	// (0x00017ee8) bg_cale_pane_cp02_ParamLimits

0x9ff2,	// (0x00017ee8) bg_cale_pane_cp02

0x1e89,	// (0x0000fd7f) cale_month_corner_pane

0x1e9f,	// (0x0000fd95) cale_month_day_heading_pane_ParamLimits

0x1e9f,	// (0x0000fd95) cale_month_day_heading_pane

0x1ed2,	// (0x0000fdc8) cale_month_pane_g1_ParamLimits

0x1ed2,	// (0x0000fdc8) cale_month_pane_g1

0x1eee,	// (0x0000fde4) cale_month_pane_g2_ParamLimits

0x1eee,	// (0x0000fde4) cale_month_pane_g2

0x1f09,	// (0x0000fdff) cale_month_pane_g3_ParamLimits

0x1f09,	// (0x0000fdff) cale_month_pane_g3

0x1f35,	// (0x0000fe2b) cale_month_pane_g4_ParamLimits

0x1f35,	// (0x0000fe2b) cale_month_pane_g4

0x1f61,	// (0x0000fe57) cale_month_pane_g5_ParamLimits

0x1f61,	// (0x0000fe57) cale_month_pane_g5

0x1f95,	// (0x0000fe8b) cale_month_pane_g6_ParamLimits

0x1f95,	// (0x0000fe8b) cale_month_pane_g6

0x1fd1,	// (0x0000fec7) cale_month_pane_g7_ParamLimits

0x1fd1,	// (0x0000fec7) cale_month_pane_g7

0x200d,	// (0x0000ff03) cale_month_pane_g8_ParamLimits

0x200d,	// (0x0000ff03) cale_month_pane_g8

0x2049,	// (0x0000ff3f) cale_month_pane_g9_ParamLimits

0x2049,	// (0x0000ff3f) cale_month_pane_g9

0x2083,	// (0x0000ff79) cale_month_pane_g10_ParamLimits

0x2083,	// (0x0000ff79) cale_month_pane_g10

0x20bd,	// (0x0000ffb3) cale_month_pane_g11_ParamLimits

0x20bd,	// (0x0000ffb3) cale_month_pane_g11

0x20f7,	// (0x0000ffed) cale_month_pane_g12_ParamLimits

0x20f7,	// (0x0000ffed) cale_month_pane_g12

0x2131,	// (0x00010027) cale_month_pane_g13_ParamLimits

0x2131,	// (0x00010027) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0001d191) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0001d191) cale_month_pane_g

0x216b,	// (0x00010061) cale_month_week_pane

0x217e,	// (0x00010074) grid_cale_month_pane_ParamLimits

0x217e,	// (0x00010074) grid_cale_month_pane

0x21ac,	// (0x000100a2) cale_month_day_heading_pane_t1

0x220a,	// (0x00010100) cale_month_day_heading_pane_t2

0x226f,	// (0x00010165) cale_month_day_heading_pane_t3

0x22d4,	// (0x000101ca) cale_month_day_heading_pane_t4

0x2339,	// (0x0001022f) cale_month_day_heading_pane_t5

0x23ae,	// (0x000102a4) cale_month_day_heading_pane_t6

0x2423,	// (0x00010319) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0001d1ac) cale_month_day_heading_pane_t

0x9be2,	// (0x00017ad8) bg_cale_side_pane_cp01

0x2498,	// (0x0001038e) cale_month_week_pane_t1

0x24af,	// (0x000103a5) cale_month_week_pane_t2

0x24c6,	// (0x000103bc) cale_month_week_pane_t3

0x24dd,	// (0x000103d3) cale_month_week_pane_t4

0x24f4,	// (0x000103ea) cale_month_week_pane_t5

0x250b,	// (0x00010401) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0001d1bb) cale_month_week_pane_t

0x2522,	// (0x00010418) cell_cale_month_pane_ParamLimits

0x2522,	// (0x00010418) cell_cale_month_pane

0xa051,	// (0x00017f47) cell_cale_month_pane_g1

0x25f8,	// (0x000104ee) cell_cale_month_pane_t1_ParamLimits

0x25f8,	// (0x000104ee) cell_cale_month_pane_t1

0x9bf0,	// (0x00017ae6) grid_highlight_pane_cp08

0x9aaf,	// (0x000179a5) main_smil_g1

0x2614,	// (0x0001050a) smil_status_pane

0xa05d,	// (0x00017f53) smil_text_pane

0xba71,	// (0x00019967) bg_popup_call3_rect_pane_g8

0xba79,	// (0x0001996f) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d474) bg_popup_call3_rect_pane_g

0xbcf3,	// (0x00019be9) smil_status_volume_pane_g1

0xa067,	// (0x00017f5d) smil_status_pane_t1

0xbd26,	// (0x00019c1c) volume_smil_pane

0xa07e,	// (0x00017f74) list_smil_text_pane

0x2627,	// (0x0001051d) scroll_pane_cp011

0x2632,	// (0x00010528) smil_text_list_pane_t1_ParamLimits

0x2632,	// (0x00010528) smil_text_list_pane_t1

0xa088,	// (0x00017f7e) aid_volume_smil_ParamLimits

0xa088,	// (0x00017f7e) aid_volume_smil

0x9aaf,	// (0x000179a5) smil_volume_pane_g1

0x9aaf,	// (0x000179a5) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0001d1db) smil_volume_pane_g

0x9a36,	// (0x0001792c) listscroll_cale_day_pane

0xa0aa,	// (0x00017fa0) bg_cale_pane

0xa0c2,	// (0x00017fb8) list_cale_pane

0xa0d3,	// (0x00017fc9) scroll_pane_cp09

0xa0e4,	// (0x00017fda) cale_bg_pane_g1

0xa0ec,	// (0x00017fe2) cale_bg_pane_g2

0xa0f4,	// (0x00017fea) cale_bg_pane_g3

0xa0fc,	// (0x00017ff2) cale_bg_pane_g4

0xa104,	// (0x00017ffa) cale_bg_pane_g5

0xa10c,	// (0x00018002) cale_bg_pane_g6

0xa114,	// (0x0001800a) cale_bg_pane_g7

0xa11c,	// (0x00018012) cale_bg_pane_g8

0xa124,	// (0x0001801a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0001d1e0) cale_bg_pane_g

0x2678,	// (0x0001056e) list_cale_time_pane_ParamLimits

0x2678,	// (0x0001056e) list_cale_time_pane

0xa12c,	// (0x00018022) list_cale_time_pane_g1_ParamLimits

0xa12c,	// (0x00018022) list_cale_time_pane_g1

0xa138,	// (0x0001802e) list_cale_time_pane_g2_ParamLimits

0xa138,	// (0x0001802e) list_cale_time_pane_g2

0x268b,	// (0x00010581) list_cale_time_pane_g3_ParamLimits

0x268b,	// (0x00010581) list_cale_time_pane_g3

0x2699,	// (0x0001058f) list_cale_time_pane_g4_ParamLimits

0x2699,	// (0x0001058f) list_cale_time_pane_g4

0x26a7,	// (0x0001059d) list_cale_time_pane_g5_ParamLimits

0x26a7,	// (0x0001059d) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0001d1f3) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0001d1f3) list_cale_time_pane_g

0xa152,	// (0x00018048) list_cale_time_pane_t1_ParamLimits

0xa152,	// (0x00018048) list_cale_time_pane_t1

0xa17a,	// (0x00018070) list_cale_time_pane_t2_ParamLimits

0xa17a,	// (0x00018070) list_cale_time_pane_t2

0x29a3,	// (0x00010899) aid_blid_cardinal_pane

0x29e1,	// (0x000108d7) compass_pane_t4

0xa1a2,	// (0x00018098) list_cale_time_pane_t4_ParamLimits

0xa1a2,	// (0x00018098) list_cale_time_pane_t4

0x29ef,	// (0x000108e5) compass_pane_t5

0x29fd,	// (0x000108f3) compass_pane_t6

0x2a0b,	// (0x00010901) compass_pane_t7

0xa6c1,	// (0x000185b7) navi_pane_cc_t1

0xa828,	// (0x0001871e) aid_phob_thumbnail_center_pane

0x30e8,	// (0x00010fde) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0001d200) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0001d200) list_cale_time_pane_t

0x933d,	// (0x00017233) bg_popup_window_pane_cp02_ParamLimits

0x933d,	// (0x00017233) bg_popup_window_pane_cp02

0xa1ca,	// (0x000180c0) heading_pane_cp01_ParamLimits

0xa1ca,	// (0x000180c0) heading_pane_cp01

0xa1d6,	// (0x000180cc) loc_req_pane_ParamLimits

0xa1d6,	// (0x000180cc) loc_req_pane

0xa1e6,	// (0x000180dc) loc_type_pane_ParamLimits

0xa1e6,	// (0x000180dc) loc_type_pane

0xa1f8,	// (0x000180ee) loc_type_pane_t1_ParamLimits

0xa1f8,	// (0x000180ee) loc_type_pane_t1

0xa20a,	// (0x00018100) loc_type_pane_t2_ParamLimits

0xa20a,	// (0x00018100) loc_type_pane_t2

0xa21c,	// (0x00018112) loc_type_pane_t3_ParamLimits

0xa21c,	// (0x00018112) loc_type_pane_t3

0x0002,

0xf311,	// (0x0001d207) loc_type_pane_t_ParamLimits

0xf311,	// (0x0001d207) loc_type_pane_t

0xa22e,	// (0x00018124) list_loc_req_pane

0xa238,	// (0x0001812e) scroll_pane_cp012

0x26b5,	// (0x000105ab) list_single_loc_request_popup_menu_pane_ParamLimits

0x26b5,	// (0x000105ab) list_single_loc_request_popup_menu_pane

0xa243,	// (0x00018139) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa243,	// (0x00018139) list_single_loc_request_popup_menu_pane_g1

0xa24f,	// (0x00018145) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa24f,	// (0x00018145) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0001d20e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0001d20e) list_single_loc_request_popup_menu_pane_g

0xa25b,	// (0x00018151) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa25b,	// (0x00018151) list_single_loc_request_popup_menu_pane_t1

0x9941,	// (0x00017837) bg_popup_window_pane_cp03_ParamLimits

0x9941,	// (0x00017837) bg_popup_window_pane_cp03

0xa271,	// (0x00018167) heading_loc_req_pane_ParamLimits

0xa271,	// (0x00018167) heading_loc_req_pane

0x26c2,	// (0x000105b8) popup_dyc_status_message_window_g1_ParamLimits

0x26c2,	// (0x000105b8) popup_dyc_status_message_window_g1

0x26d6,	// (0x000105cc) popup_dyc_status_message_window_t1_ParamLimits

0x26d6,	// (0x000105cc) popup_dyc_status_message_window_t1

0x26eb,	// (0x000105e1) popup_dyc_status_message_window_t2_ParamLimits

0x26eb,	// (0x000105e1) popup_dyc_status_message_window_t2

0x2700,	// (0x000105f6) popup_dyc_status_message_window_t3_ParamLimits

0x2700,	// (0x000105f6) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0001d213) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0001d213) popup_dyc_status_message_window_t

0x96e6,	// (0x000175dc) bg_heading_pane_cp01

0xa27d,	// (0x00018173) heading_loc_req_pane_g1

0xa285,	// (0x0001817b) heading_loc_req_pane_g2

0xa28d,	// (0x00018183) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0001d21a) heading_loc_req_pane_g

0xa295,	// (0x0001818b) heading_loc_req_pane_t1

0xa319,	// (0x0001820f) bg_popup_sub_pane_cp01_ParamLimits

0xa319,	// (0x0001820f) bg_popup_sub_pane_cp01

0xa327,	// (0x0001821d) popup_cale_events_window_g1_ParamLimits

0xa327,	// (0x0001821d) popup_cale_events_window_g1

0xa347,	// (0x0001823d) popup_cale_events_window_g2_ParamLimits

0xa347,	// (0x0001823d) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0001d24e) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0001d24e) popup_cale_events_window_g

0xa367,	// (0x0001825d) popup_cale_events_window_t1_ParamLimits

0xa367,	// (0x0001825d) popup_cale_events_window_t1

0xa379,	// (0x0001826f) popup_cale_events_window_t2_ParamLimits

0xa379,	// (0x0001826f) popup_cale_events_window_t2

0xa3b7,	// (0x000182ad) popup_cale_events_window_t3_ParamLimits

0xa3b7,	// (0x000182ad) popup_cale_events_window_t3

0xa3f1,	// (0x000182e7) popup_cale_events_window_t4_ParamLimits

0xa3f1,	// (0x000182e7) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0001d253) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0001d253) popup_cale_events_window_t

0x278e,	// (0x00010684) call_type_pane

0x279e,	// (0x00010694) popup_call_status_window_g1

0x27b2,	// (0x000106a8) popup_call_status_window_g2

0x27c6,	// (0x000106bc) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0001d25c) popup_call_status_window_g

0xa427,	// (0x0001831d) call_type_pane_g1

0xa430,	// (0x00018326) call_type_pane_g2

0x0001,

0xf36d,	// (0x0001d263) call_type_pane_g

0x96e6,	// (0x000175dc) bg_popup_sub_pane_cp02

0xa439,	// (0x0001832f) listscroll_popup_wml_pane

0xa441,	// (0x00018337) list_wml_pane

0xa44b,	// (0x00018341) scroll_pane_cp013

0xa456,	// (0x0001834c) list_single_graphic_popup_wml_pane_ParamLimits

0xa456,	// (0x0001834c) list_single_graphic_popup_wml_pane

0x9aaf,	// (0x000179a5) list_single_graphic_popup_wml_pane_g1

0xa46a,	// (0x00018360) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0001d268) list_single_graphic_popup_wml_pane_g

0xa472,	// (0x00018368) list_single_graphic_popup_wml_pane_t1

0xa488,	// (0x0001837e) aid_call_pane

0x9939,	// (0x0001782f) popup_clock_analogue_window_g1

0x9939,	// (0x0001782f) popup_clock_analogue_window_g2

0xa490,	// (0x00018386) popup_clock_analogue_window_g3

0xa490,	// (0x00018386) popup_clock_analogue_window_g4

0x9aaf,	// (0x000179a5) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0001d26d) popup_clock_analogue_window_g

0xa498,	// (0x0001838e) popup_clock_analogue_window_t1

0xa4a6,	// (0x0001839c) clock_digital_number_pane_ParamLimits

0xa4a6,	// (0x0001839c) clock_digital_number_pane

0xa4b2,	// (0x000183a8) clock_digital_number_pane_cp02_ParamLimits

0xa4b2,	// (0x000183a8) clock_digital_number_pane_cp02

0xa4be,	// (0x000183b4) clock_digital_number_pane_cp03_ParamLimits

0xa4be,	// (0x000183b4) clock_digital_number_pane_cp03

0xa4ca,	// (0x000183c0) clock_digital_number_pane_cp04_ParamLimits

0xa4ca,	// (0x000183c0) clock_digital_number_pane_cp04

0xa4da,	// (0x000183d0) clock_digital_separator_pane_ParamLimits

0xa4da,	// (0x000183d0) clock_digital_separator_pane

0xa4e6,	// (0x000183dc) popup_clock_digital_window_t1

0x9aaf,	// (0x000179a5) clock_digital_number_pane_g1

0x9aaf,	// (0x000179a5) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0001d1db) clock_digital_number_pane_g

0x9aaf,	// (0x000179a5) clock_digital_separator_pane_g1

0x9aaf,	// (0x000179a5) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0001d1db) clock_digital_separator_pane_g

0x96e6,	// (0x000175dc) bg_popup_window_pane_cp04

0xa503,	// (0x000183f9) heading_pane_cp03

0xa50b,	// (0x00018401) listscroll_popup_gms_pane

0xa513,	// (0x00018409) grid_large_graphic_popup_pane

0xa51d,	// (0x00018413) listscroll_popup_gms_pane_g1

0xa525,	// (0x0001841b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0001d278) listscroll_popup_gms_pane_g

0x9e96,	// (0x00017d8c) scroll_pane_cp014

0x27d5,	// (0x000106cb) cell_large_graphic_popup_pane_ParamLimits

0x27d5,	// (0x000106cb) cell_large_graphic_popup_pane

0x27ed,	// (0x000106e3) cell_large_graphic_popup_pane_g1_ParamLimits

0x27ed,	// (0x000106e3) cell_large_graphic_popup_pane_g1

0xa52d,	// (0x00018423) cell_large_graphic_popup_pane_g2_ParamLimits

0xa52d,	// (0x00018423) cell_large_graphic_popup_pane_g2

0xa539,	// (0x0001842f) cell_large_graphic_popup_pane_g3_ParamLimits

0xa539,	// (0x0001842f) cell_large_graphic_popup_pane_g3

0xa546,	// (0x0001843c) cell_large_graphic_popup_pane_g4_ParamLimits

0xa546,	// (0x0001843c) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0001d27d) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0001d27d) cell_large_graphic_popup_pane_g

0xa556,	// (0x0001844c) grid_highlight_pane_cp010

0x9aaf,	// (0x000179a5) bg_popup_call_pane_g1

0xa560,	// (0x00018456) list_single_graphic_popup_conf_pane_ParamLimits

0xa560,	// (0x00018456) list_single_graphic_popup_conf_pane

0xa573,	// (0x00018469) list_highlight_pane_cp01

0xa57c,	// (0x00018472) list_single_graphic_popup_conf_pane_g1

0xa584,	// (0x0001847a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0001d286) list_single_graphic_popup_conf_pane_g

0xa58c,	// (0x00018482) list_single_graphic_popup_conf_pane_t1

0xa59a,	// (0x00018490) linegrid_cams_pane_g1

0x27f9,	// (0x000106ef) linegrid_cams_pane_g2

0x9c23,	// (0x00017b19) linegrid_cams_pane_g3

0xa5a3,	// (0x00018499) linegrid_cams_pane_g4

0x2802,	// (0x000106f8) linegrid_cams_pane_g5

0x280b,	// (0x00010701) linegrid_cams_pane_g6

0x9c2c,	// (0x00017b22) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0001d28b) linegrid_cams_pane_g

0xa5ac,	// (0x000184a2) popup_clock_analogue_window

0xa5ac,	// (0x000184a2) popup_clock_digital_window

0x96e6,	// (0x000175dc) popup_phob_thumbnail_window

0x9aaf,	// (0x000179a5) call_video_uplink_pane_g1

0xa5b5,	// (0x000184ab) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0001d29a) call_video_uplink_pane_g

0xa5bd,	// (0x000184b3) video_uplink_pane

0xa5c5,	// (0x000184bb) mce_image_pane_g1

0x2816,	// (0x0001070c) mce_image_pane_g2

0x2820,	// (0x00010716) mce_image_pane_g3

0x2828,	// (0x0001071e) mce_image_pane_g4

0x2830,	// (0x00010726) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0001d29f) mce_image_pane_g

0xa5cf,	// (0x000184c5) control_top_pane_stacon_cp01_ParamLimits

0xa5cf,	// (0x000184c5) control_top_pane_stacon_cp01

0xa5e3,	// (0x000184d9) uni_indicator_pane_stacon_cp01_ParamLimits

0xa5e3,	// (0x000184d9) uni_indicator_pane_stacon_cp01

0xa5f4,	// (0x000184ea) bg_popup_sub_pane_cp03

0x2838,	// (0x0001072e) chi_dic_find_pane

0x2840,	// (0x00010736) listscroll_chi_dic_pane

0x2849,	// (0x0001073f) main_pane_chidic_g1

0xa5fe,	// (0x000184f4) chi_dic_find_pane_t1

0xa60c,	// (0x00018502) find_chidic_pane

0xa615,	// (0x0001850b) chi_dic_list_pane_ParamLimits

0xa615,	// (0x0001850b) chi_dic_list_pane

0xa626,	// (0x0001851c) scroll_pane_cp020

0xa62e,	// (0x00018524) find_chidic_pane_t1

0x96e6,	// (0x000175dc) input_focus_pane_cp06

0x285c,	// (0x00010752) list_chi_dic_pane_ParamLimits

0x285c,	// (0x00010752) list_chi_dic_pane

0x286e,	// (0x00010764) list_chi_dic_pane_t1_ParamLimits

0x286e,	// (0x00010764) list_chi_dic_pane_t1

0x96e6,	// (0x000175dc) list_highlight_pane_cp020

0xa63d,	// (0x00018533) bg_cale_heading_pane_g1

0x2881,	// (0x00010777) bg_cale_heading_pane_g2

0x2889,	// (0x0001077f) bg_cale_heading_pane_g3

0x2891,	// (0x00010787) bg_cale_heading_pane_g4

0x289b,	// (0x00010791) bg_cale_heading_pane_g5

0x28a5,	// (0x0001079b) bg_cale_heading_pane_g6

0x28ad,	// (0x000107a3) bg_cale_heading_pane_g7

0x28b5,	// (0x000107ab) bg_cale_heading_pane_g8

0x28bf,	// (0x000107b5) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0001d2aa) bg_cale_heading_pane_g

0xa63d,	// (0x00018533) bg_cale_side_pane_g1

0x28c9,	// (0x000107bf) bg_cale_side_pane_g2

0x28d1,	// (0x000107c7) bg_cale_side_pane_g3

0x28d9,	// (0x000107cf) bg_cale_side_pane_g4

0x28e1,	// (0x000107d7) bg_cale_side_pane_g5

0x28e9,	// (0x000107df) bg_cale_side_pane_g6

0x28f1,	// (0x000107e7) bg_cale_side_pane_g7

0x28f9,	// (0x000107ef) bg_cale_side_pane_g8

0x2901,	// (0x000107f7) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0001d2bd) bg_cale_side_pane_g

0x2909,	// (0x000107ff) popup_call_status_window_ParamLimits

0x2909,	// (0x000107ff) popup_call_status_window

0xa645,	// (0x0001853b) stacon_top_pane

0xa64d,	// (0x00018543) status_pane_ParamLimits

0xa64d,	// (0x00018543) status_pane

0xa662,	// (0x00018558) status_small_pane

0xa66a,	// (0x00018560) control_pane

0x96e6,	// (0x000175dc) stacon_bottom_pane

0xa672,	// (0x00018568) list_single_mce_smart_pane_t1_ParamLimits

0xa672,	// (0x00018568) list_single_mce_smart_pane_t1

0xa685,	// (0x0001857b) list_single_mce_smart_pane_t2_ParamLimits

0xa685,	// (0x0001857b) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0001d2d0) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0001d2d0) list_single_mce_smart_pane_t

0x2952,	// (0x00010848) compass_pane

0x295b,	// (0x00010851) main_location2_pane_t1

0x296d,	// (0x00010863) main_location2_pane_t2

0x297f,	// (0x00010875) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0001d2d5) main_location2_pane_t

0xa6a4,	// (0x0001859a) compass_pane_g1_ParamLimits

0xa6a4,	// (0x0001859a) compass_pane_g1

0x29c3,	// (0x000108b9) compass_pane_t1

0x29d2,	// (0x000108c8) compass_pane_t2

0x0005,

0xf3e8,	// (0x0001d2de) compass_pane_t

0x2a19,	// (0x0001090f) text_secondary_cp61

0xa6b8,	// (0x000185ae) navi_pane_cams_g5

0xa6db,	// (0x000185d1) navi_pane_im_t1

0xa6e9,	// (0x000185df) navi_pane_mp_g1_ParamLimits

0xa6e9,	// (0x000185df) navi_pane_mp_g1

0xa6fd,	// (0x000185f3) navi_pane_mp_g2_ParamLimits

0xa6fd,	// (0x000185f3) navi_pane_mp_g2

0xa709,	// (0x000185ff) navi_pane_mp_g3_ParamLimits

0xa709,	// (0x000185ff) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0001d2f2) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0001d2f2) navi_pane_mp_g

0xa715,	// (0x0001860b) navi_pane_mp_t1

0xa723,	// (0x00018619) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0001d2f9) navi_pane_mp_t

0xa75f,	// (0x00018655) navi_pane_vt_g1

0xa715,	// (0x0001860b) navi_pane_vt_t1

0xa767,	// (0x0001865d) navi_slider_pane

0xa76f,	// (0x00018665) zooming_pane

0xa777,	// (0x0001866d) navi_slider_pane_g1

0xa780,	// (0x00018676) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0001d300) navi_slider_pane_g

0xa7ad,	// (0x000186a3) aid_levels_zoom

0xa7b5,	// (0x000186ab) zooming_pane_g1

0xa7bd,	// (0x000186b3) zooming_pane_g2

0xa7bd,	// (0x000186b3) zooming_pane_g3

0x0002,

0xf419,	// (0x0001d30f) zooming_pane_g

0xa7c5,	// (0x000186bb) level_10_zoom

0xa7ce,	// (0x000186c4) level_11_zoom

0xa7d7,	// (0x000186cd) level_1_zoom

0xa7e0,	// (0x000186d6) level_2_zoom

0xa7e9,	// (0x000186df) level_3_zoom

0xa7f2,	// (0x000186e8) level_4_zoom

0xa7fb,	// (0x000186f1) level_5_zoom

0xa804,	// (0x000186fa) level_6_zoom

0xa80d,	// (0x00018703) level_7_zoom

0xa816,	// (0x0001870c) level_8_zoom

0xa81f,	// (0x00018715) level_9_zoom

0xa830,	// (0x00018726) popup_phob_thumbnail_window_g1

0xa838,	// (0x0001872e) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0001d316) popup_phob_thumbnail_window_g

0xbbd3,	// (0x00019ac9) level_1_location

0xbbdb,	// (0x00019ad1) level_2_location

0xbbe3,	// (0x00019ad9) level_3_location

0xbbeb,	// (0x00019ae1) level_4_location

0xa76f,	// (0x00018665) level_5_location

0x2b54,	// (0x00010a4a) mce_icon_pane_g1

0x2b5c,	// (0x00010a52) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0001d31b) mce_icon_pane_g

0x2b64,	// (0x00010a5a) main_mup_pane_g1_ParamLimits

0x2b64,	// (0x00010a5a) main_mup_pane_g1

0x2b7a,	// (0x00010a70) main_mup_pane_g2_ParamLimits

0x2b7a,	// (0x00010a70) main_mup_pane_g2

0x2b92,	// (0x00010a88) main_mup_pane_g3_ParamLimits

0x2b92,	// (0x00010a88) main_mup_pane_g3

0x2baa,	// (0x00010aa0) main_mup_pane_g4_ParamLimits

0x2baa,	// (0x00010aa0) main_mup_pane_g4

0x2bc2,	// (0x00010ab8) main_mup_pane_g5_ParamLimits

0x2bc2,	// (0x00010ab8) main_mup_pane_g5

0x2bde,	// (0x00010ad4) main_mup_pane_g6_ParamLimits

0x2bde,	// (0x00010ad4) main_mup_pane_g6

0x2bf6,	// (0x00010aec) main_mup_pane_g7_ParamLimits

0x2bf6,	// (0x00010aec) main_mup_pane_g7

0x2c0e,	// (0x00010b04) main_mup_pane_g8_ParamLimits

0x2c0e,	// (0x00010b04) main_mup_pane_g8

0x2c28,	// (0x00010b1e) main_mup_pane_g9_ParamLimits

0x2c28,	// (0x00010b1e) main_mup_pane_g9

0x2c42,	// (0x00010b38) main_mup_pane_g10_ParamLimits

0x2c42,	// (0x00010b38) main_mup_pane_g10

0x2c5c,	// (0x00010b52) main_mup_pane_g11_ParamLimits

0x2c5c,	// (0x00010b52) main_mup_pane_g11

0x2c70,	// (0x00010b66) main_mup_pane_g12_ParamLimits

0x2c70,	// (0x00010b66) main_mup_pane_g12

0x2c86,	// (0x00010b7c) main_mup_pane_g13_ParamLimits

0x2c86,	// (0x00010b7c) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0001d320) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0001d320) main_mup_pane_g

0x2c9a,	// (0x00010b90) main_mup_pane_t1_ParamLimits

0x2c9a,	// (0x00010b90) main_mup_pane_t1

0x2cb4,	// (0x00010baa) main_mup_pane_t2_ParamLimits

0x2cb4,	// (0x00010baa) main_mup_pane_t2

0x2ccc,	// (0x00010bc2) main_mup_pane_t3_ParamLimits

0x2ccc,	// (0x00010bc2) main_mup_pane_t3

0x2ce4,	// (0x00010bda) main_mup_pane_t4_ParamLimits

0x2ce4,	// (0x00010bda) main_mup_pane_t4

0x2d02,	// (0x00010bf8) main_mup_pane_t5_ParamLimits

0x2d02,	// (0x00010bf8) main_mup_pane_t5

0x2d17,	// (0x00010c0d) main_mup_pane_t6_ParamLimits

0x2d17,	// (0x00010c0d) main_mup_pane_t6

0x0005,

0xf445,	// (0x0001d33b) main_mup_pane_t_ParamLimits

0xf445,	// (0x0001d33b) main_mup_pane_t

0x2d29,	// (0x00010c1f) mup_progress_pane_ParamLimits

0x2d29,	// (0x00010c1f) mup_progress_pane

0x2d35,	// (0x00010c2b) mup_visualizer_pane_ParamLimits

0x2d35,	// (0x00010c2b) mup_visualizer_pane

0x2d65,	// (0x00010c5b) mup_volume_pane_ParamLimits

0x2d65,	// (0x00010c5b) mup_volume_pane

0xa840,	// (0x00018736) mup_visualizer_pane_g1_ParamLimits

0xa840,	// (0x00018736) mup_visualizer_pane_g1

0xa840,	// (0x00018736) mup_visualizer_pane_g2_ParamLimits

0xa840,	// (0x00018736) mup_visualizer_pane_g2

0xa6a4,	// (0x0001859a) mup_visualizer_pane_g3_ParamLimits

0xa6a4,	// (0x0001859a) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0001d348) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0001d348) mup_visualizer_pane_g

0x9aaf,	// (0x000179a5) mup_volume_pane_g1

0xa856,	// (0x0001874c) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0001d34f) mup_volume_pane_g

0x9aaf,	// (0x000179a5) mup_progress_pane_g1

0xa85f,	// (0x00018755) mup_progress_pane_g2

0xa868,	// (0x0001875e) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0001d354) mup_progress_pane_g

0x96e6,	// (0x000175dc) bg_popup_window_pane_cp05

0xa871,	// (0x00018767) heading_pane_cp02_ParamLimits

0xa871,	// (0x00018767) heading_pane_cp02

0xa88b,	// (0x00018781) list_popup_blid_pane

0xa893,	// (0x00018789) list_blid_sat_info_pane_ParamLimits

0xa893,	// (0x00018789) list_blid_sat_info_pane

0xa8a6,	// (0x0001879c) list_blid_sat_info_pane_g1

0xa8ae,	// (0x000187a4) list_blid_sat_info_pane_t1

0x2e7b,	// (0x00010d71) mup_equalizer_pane_ParamLimits

0x2e7b,	// (0x00010d71) mup_equalizer_pane

0x2e94,	// (0x00010d8a) mup_equalizer_pane_cp1_ParamLimits

0x2e94,	// (0x00010d8a) mup_equalizer_pane_cp1

0x2eb1,	// (0x00010da7) mup_equalizer_pane_cp2_ParamLimits

0x2eb1,	// (0x00010da7) mup_equalizer_pane_cp2

0x2ece,	// (0x00010dc4) mup_equalizer_pane_cp3_ParamLimits

0x2ece,	// (0x00010dc4) mup_equalizer_pane_cp3

0x2eef,	// (0x00010de5) mup_equalizer_pane_cp4_ParamLimits

0x2eef,	// (0x00010de5) mup_equalizer_pane_cp4

0x2f10,	// (0x00010e06) mup_equalizer_pane_cp5

0x2f24,	// (0x00010e1a) mup_equalizer_pane_cp6

0x2f38,	// (0x00010e2e) mup_equalizer_pane_cp7

0xbaf1,	// (0x000199e7) bg_popup_call_poc_act_pane_g9

0xbaf9,	// (0x000199ef) bg_popup_call_poc_act_pane_g10

0xbb01,	// (0x000199f7) bg_popup_call_poc_act_pane_g11

0x000a,

0x9941,	// (0x00017837) mup_scale_pane

0x9aaf,	// (0x000179a5) mup_scale_pane_g1

0xa8bc,	// (0x000187b2) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0001d370) mup_scale_pane_g

0xa8e0,	// (0x000187d6) msg_data_pane

0xa8e8,	// (0x000187de) scroll_pane_cp017

0x2f5e,	// (0x00010e54) bg_list_pane_cp04_ParamLimits

0x2f5e,	// (0x00010e54) bg_list_pane_cp04

0xa8f8,	// (0x000187ee) msg_data_pane_g1

0x2f76,	// (0x00010e6c) msg_data_pane_g2

0x2f80,	// (0x00010e76) msg_data_pane_g3

0x2f88,	// (0x00010e7e) msg_data_pane_g4

0x2f90,	// (0x00010e86) msg_data_pane_g5

0x2f98,	// (0x00010e8e) msg_data_pane_g6

0x2fa0,	// (0x00010e96) msg_data_pane_g7

0x0006,

0xf489,	// (0x0001d37f) msg_data_pane_g

0x2fa8,	// (0x00010e9e) msg_text_pane_ParamLimits

0x2fa8,	// (0x00010e9e) msg_text_pane

0x2fcc,	// (0x00010ec2) qrid_highlight_pane_cp011_ParamLimits

0x2fcc,	// (0x00010ec2) qrid_highlight_pane_cp011

0x96e6,	// (0x000175dc) msg_body_pane

0x96e6,	// (0x000175dc) msg_header_pane

0xa909,	// (0x000187ff) input_focus_pane_cp07

0x2ff0,	// (0x00010ee6) msg_header_pane_t1_ParamLimits

0x2ff0,	// (0x00010ee6) msg_header_pane_t1

0xa91e,	// (0x00018814) msg_header_pane_t2_ParamLimits

0xa91e,	// (0x00018814) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0001d393) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0001d393) msg_header_pane_t

0xa930,	// (0x00018826) msg_body_pane_g1

0xa938,	// (0x0001882e) msg_body_pane_t1_ParamLimits

0xa938,	// (0x0001882e) msg_body_pane_t1

0xa969,	// (0x0001885f) msg_body_pane_t2_ParamLimits

0xa969,	// (0x0001885f) msg_body_pane_t2

0xa97b,	// (0x00018871) msg_body_pane_t3_ParamLimits

0xa97b,	// (0x00018871) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0001d398) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0001d398) msg_body_pane_t

0x303e,	// (0x00010f34) main_viewer_pane_g1_ParamLimits

0x303e,	// (0x00010f34) main_viewer_pane_g1

0x304c,	// (0x00010f42) main_viewer_pane_g2_ParamLimits

0x304c,	// (0x00010f42) main_viewer_pane_g2

0x305a,	// (0x00010f50) main_viewer_pane_g3_ParamLimits

0x305a,	// (0x00010f50) main_viewer_pane_g3

0x3069,	// (0x00010f5f) main_viewer_pane_g4_ParamLimits

0x3069,	// (0x00010f5f) main_viewer_pane_g4

0xa9a5,	// (0x0001889b) main_viewer_pane_g5_ParamLimits

0xa9a5,	// (0x0001889b) main_viewer_pane_g5

0xa9a5,	// (0x0001889b) main_viewer_pane_g7_ParamLimits

0xa9a5,	// (0x0001889b) main_viewer_pane_g7

0xa9b7,	// (0x000188ad) main_viewer_pane_g8_ParamLimits

0xa9b7,	// (0x000188ad) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0001d3a8) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0001d3a8) main_viewer_pane_g

0xa9cf,	// (0x000188c5) viewer_content_pane_ParamLimits

0xa9cf,	// (0x000188c5) viewer_content_pane

0x30a5,	// (0x00010f9b) main_postcard_pane_g1_ParamLimits

0x30a5,	// (0x00010f9b) main_postcard_pane_g1

0x30bb,	// (0x00010fb1) main_postcard_pane_g2_ParamLimits

0x30bb,	// (0x00010fb1) main_postcard_pane_g2

0x30d1,	// (0x00010fc7) main_postcard_pane_g3_ParamLimits

0x30d1,	// (0x00010fc7) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0001d3b9) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0001d3b9) main_postcard_pane_g

0x30e8,	// (0x00010fde) main_postcard_pane_g4

0xbd06,	// (0x00019bfc) smil_status_volume_pane_g2

0x312b,	// (0x00011021) postcard_pane_ParamLimits

0x312b,	// (0x00011021) postcard_pane

0xa9dd,	// (0x000188d3) postcard_pane_g1_ParamLimits

0xa9dd,	// (0x000188d3) postcard_pane_g1

0x316d,	// (0x00011063) postcard_pane_g2_ParamLimits

0x316d,	// (0x00011063) postcard_pane_g2

0x3179,	// (0x0001106f) postcard_pane_g3_ParamLimits

0x3179,	// (0x0001106f) postcard_pane_g3

0xa9eb,	// (0x000188e1) postcard_pane_g4_ParamLimits

0xa9eb,	// (0x000188e1) postcard_pane_g4

0x3185,	// (0x0001107b) postcard_pane_g5_ParamLimits

0x3185,	// (0x0001107b) postcard_pane_g5

0x319a,	// (0x00011090) postcard_pane_g6_ParamLimits

0x319a,	// (0x00011090) postcard_pane_g6

0xa9dd,	// (0x000188d3) postcard_pane_g7_ParamLimits

0xa9dd,	// (0x000188d3) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0001d3c6) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0001d3c6) postcard_pane_g

0x31ae,	// (0x000110a4) main_mp2_pane_g1_ParamLimits

0x31ae,	// (0x000110a4) main_mp2_pane_g1

0x31ba,	// (0x000110b0) main_mp2_pane_g2_ParamLimits

0x31ba,	// (0x000110b0) main_mp2_pane_g2

0x31c6,	// (0x000110bc) main_mp2_pane_g3_ParamLimits

0x31c6,	// (0x000110bc) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0001d3d5) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0001d3d5) main_mp2_pane_g

0x31d2,	// (0x000110c8) main_mp2_pane_t1_ParamLimits

0x31d2,	// (0x000110c8) main_mp2_pane_t1

0x31e7,	// (0x000110dd) main_mp2_pane_t2_ParamLimits

0x31e7,	// (0x000110dd) main_mp2_pane_t2

0x31f9,	// (0x000110ef) main_mp2_pane_t3_ParamLimits

0x31f9,	// (0x000110ef) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0001d3dc) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0001d3dc) main_mp2_pane_t

0xa9f9,	// (0x000188ef) pec_content_pane_ParamLimits

0xa9f9,	// (0x000188ef) pec_content_pane

0x9e96,	// (0x00017d8c) scroll_pane_cp015

0xaa0b,	// (0x00018901) pec_attribute_pane_ParamLimits

0xaa0b,	// (0x00018901) pec_attribute_pane

0x320b,	// (0x00011101) pec_content_pane_g1_ParamLimits

0x320b,	// (0x00011101) pec_content_pane_g1

0xaa1b,	// (0x00018911) pec_content_pane_t1_ParamLimits

0xaa1b,	// (0x00018911) pec_content_pane_t1

0xaa2d,	// (0x00018923) pec_content_pane_t2_ParamLimits

0xaa2d,	// (0x00018923) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0001d3e3) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0001d3e3) pec_content_pane_t

0x3217,	// (0x0001110d) list_single_graphic_pane_cp01_ParamLimits

0x3217,	// (0x0001110d) list_single_graphic_pane_cp01

0x9941,	// (0x00017837) bg_popup_sub_pane_cp04

0xaa3f,	// (0x00018935) popup_mup_playback_window_g1

0xaa4b,	// (0x00018941) popup_mup_playback_window_t1

0xaa60,	// (0x00018956) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0001d3e8) popup_mup_playback_window_t

0xaa97,	// (0x0001898d) main_image_pane_g1_ParamLimits

0xaa97,	// (0x0001898d) main_image_pane_g1

0xaada,	// (0x000189d0) scroll_pane_cp018_ParamLimits

0xaada,	// (0x000189d0) scroll_pane_cp018

0xaaf2,	// (0x000189e8) scroll_pane_cp016_ParamLimits

0xaaf2,	// (0x000189e8) scroll_pane_cp016

0x32e4,	// (0x000111da) smil2_image_pane_ParamLimits

0x32e4,	// (0x000111da) smil2_image_pane

0x3314,	// (0x0001120a) smil2_root_pane_ParamLimits

0x3314,	// (0x0001120a) smil2_root_pane

0x334c,	// (0x00011242) smil2_text_pane_ParamLimits

0x334c,	// (0x00011242) smil2_text_pane

0x96e6,	// (0x000175dc) bg_list_pane_cp06

0xab2e,	// (0x00018a24) grid_radio_pane

0x96e6,	// (0x000175dc) bg_popup_window_pane_cp06

0xab36,	// (0x00018a2c) main_fmradio_pane_t1

0xa503,	// (0x000183f9) heading_pane_cp04

0xab44,	// (0x00018a3a) main_fmradio_pane_t2

0xbb09,	// (0x000199ff) popup_cale_lunar_info_window_g1

0xab52,	// (0x00018a48) main_fmradio_pane_t3

0xbb11,	// (0x00019a07) popup_cale_lunar_info_window_g2

0xab60,	// (0x00018a56) main_fmradio_pane_t4

0x0001,

0xab6e,	// (0x00018a64) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0001d4c3) popup_cale_lunar_info_window_g

0xf507,	// (0x0001d3fd) main_fmradio_pane_t

0xab7c,	// (0x00018a72) wait_bar_pane_cp03

0xab84,	// (0x00018a7a) cell_fmradio_pane_ParamLimits

0xab84,	// (0x00018a7a) cell_fmradio_pane

0xa9dd,	// (0x000188d3) cell_fmradio_pane_g1_ParamLimits

0xa9dd,	// (0x000188d3) cell_fmradio_pane_g1

0x96e6,	// (0x000175dc) grid_highlight_pane_cp011

0xab97,	// (0x00018a8d) poc_content_pane_ParamLimits

0xab97,	// (0x00018a8d) poc_content_pane

0xaba9,	// (0x00018a9f) scroll_pane_cp019

0x33cc,	// (0x000112c2) popup_call_poc_act_window_ParamLimits

0x33cc,	// (0x000112c2) popup_call_poc_act_window

0x33f0,	// (0x000112e6) popup_call_poc_inact_window_ParamLimits

0x33f0,	// (0x000112e6) popup_call_poc_inact_window

0xf5a4,	// (0x0001d49a) bg_popup_call_poc_act_pane_g

0xba81,	// (0x00019977) bg_popup_call_poc_inact_pane_g1

0xba89,	// (0x0001997f) bg_popup_call_poc_inact_pane_g2

0xabb1,	// (0x00018aa7) popup_call_poc_act_window_g2

0xba91,	// (0x00019987) bg_popup_call_poc_inact_pane_g3

0xba99,	// (0x0001998f) bg_popup_call_poc_inact_pane_g4

0xbaa1,	// (0x00019997) bg_popup_call_poc_inact_pane_g5

0xabb9,	// (0x00018aaf) popup_call_poc_act_window_t1_ParamLimits

0xabb9,	// (0x00018aaf) popup_call_poc_act_window_t1

0xabe1,	// (0x00018ad7) popup_call_poc_act_window_t2_ParamLimits

0xabe1,	// (0x00018ad7) popup_call_poc_act_window_t2

0xac09,	// (0x00018aff) popup_call_poc_act_window_t3_ParamLimits

0xac09,	// (0x00018aff) popup_call_poc_act_window_t3

0xac31,	// (0x00018b27) popup_call_poc_act_window_t4_ParamLimits

0xac31,	// (0x00018b27) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0001d408) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0001d408) popup_call_poc_act_window_t

0xbaa9,	// (0x0001999f) bg_popup_call_poc_inact_pane_g6

0xbab1,	// (0x000199a7) bg_popup_call_poc_inact_pane_g7

0xbab9,	// (0x000199af) bg_popup_call_poc_inact_pane_g8

0xac43,	// (0x00018b39) popup_call_poc_inact_window_g2

0xbac1,	// (0x000199b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0001d487) bg_popup_call_poc_inact_pane_g

0xac4b,	// (0x00018b41) popup_call_poc_inact_window_t1_ParamLimits

0xac4b,	// (0x00018b41) popup_call_poc_inact_window_t1

0xac60,	// (0x00018b56) popup_call_poc_inact_window_t2_ParamLimits

0xac60,	// (0x00018b56) popup_call_poc_inact_window_t2

0xac75,	// (0x00018b6b) popup_call_poc_inact_window_t3_ParamLimits

0xac75,	// (0x00018b6b) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0001d411) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0001d411) popup_call_poc_inact_window_t

0xbc79,	// (0x00019b6f) context_pane_ParamLimits

0x3c23,	// (0x00011b19) signal_pane_ParamLimits

0xa76f,	// (0x00018665) main_call2_pane

0xbc67,	// (0x00019b5d) popup_phob_thumbnail2_window_ParamLimits

0xbc67,	// (0x00019b5d) popup_phob_thumbnail2_window

0xa98d,	// (0x00018883) aid_hotspot_pointer_arrow_pane

0xa995,	// (0x0001888b) aid_hotspot_pointer_hand_pane

0x3739,	// (0x0001162f) phob_pre_status_pane_g5

0x1619,	// (0x0000f50f) cams_zoom_pane_ParamLimits

0x1628,	// (0x0000f51e) image_vga_pane_ParamLimits

0x1642,	// (0x0000f538) main_camera_pane_g1_ParamLimits

0x1654,	// (0x0000f54a) main_camera_pane_g2_ParamLimits

0x1664,	// (0x0000f55a) main_camera_pane_g3_ParamLimits

0x1674,	// (0x0000f56a) main_camera_pane_g4_ParamLimits

0x1684,	// (0x0000f57a) main_camera_pane_g5_ParamLimits

0x1694,	// (0x0000f58a) main_camera_pane_g6_ParamLimits

0x16a6,	// (0x0000f59c) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0001d110) main_camera_pane_g_ParamLimits

0x16b6,	// (0x0000f5ac) main_camera_pane_t1_ParamLimits

0x16cc,	// (0x0000f5c2) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0001d121) main_camera_pane_t_ParamLimits

0x9941,	// (0x00017837) bg_popup_preview_window_pane_cp01_ParamLimits

0x9941,	// (0x00017837) bg_popup_preview_window_pane_cp01

0xac8a,	// (0x00018b80) popup_phob_thumbnail2_window_g1_ParamLimits

0xac8a,	// (0x00018b80) popup_phob_thumbnail2_window_g1

0x96e6,	// (0x000175dc) call2_cli_visual_pane

0x3424,	// (0x0001131a) popup_call2_audio_conf_window_ParamLimits

0x3424,	// (0x0001131a) popup_call2_audio_conf_window

0x3444,	// (0x0001133a) popup_call2_audio_first_window_ParamLimits

0x3444,	// (0x0001133a) popup_call2_audio_first_window

0x34da,	// (0x000113d0) popup_call2_audio_in_window_ParamLimits

0x34da,	// (0x000113d0) popup_call2_audio_in_window

0x3522,	// (0x00011418) popup_call2_audio_out_window_ParamLimits

0x3522,	// (0x00011418) popup_call2_audio_out_window

0x358c,	// (0x00011482) popup_call2_audio_second_window_ParamLimits

0x358c,	// (0x00011482) popup_call2_audio_second_window

0x35f2,	// (0x000114e8) popup_call2_audio_wait_window_ParamLimits

0x35f2,	// (0x000114e8) popup_call2_audio_wait_window

0x96e6,	// (0x000175dc) bg_popup_call2_act_pane_cp03

0x9923,	// (0x00017819) list_conf_pane_cp

0xac96,	// (0x00018b8c) popup_call2_audio_conf_window_t1

0xa560,	// (0x00018456) list_single_graphic_popup_conf2_pane_ParamLimits

0xa560,	// (0x00018456) list_single_graphic_popup_conf2_pane

0xa573,	// (0x00018469) list_highlight_pane_cp04

0xaca4,	// (0x00018b9a) list_single_graphic_popup_conf2_pane_g1

0xa584,	// (0x0001847a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0001d418) list_single_graphic_popup_conf2_pane_g

0xacae,	// (0x00018ba4) list_single_graphic_popup_conf2_pane_t1

0xacbc,	// (0x00018bb2) bg_popup_call2_act_pane_cp01_ParamLimits

0xacbc,	// (0x00018bb2) bg_popup_call2_act_pane_cp01

0xad46,	// (0x00018c3c) call_type_pane_cp05_ParamLimits

0xad46,	// (0x00018c3c) call_type_pane_cp05

0xad9a,	// (0x00018c90) popup_call2_audio_second_window_g1_ParamLimits

0xad9a,	// (0x00018c90) popup_call2_audio_second_window_g1

0xadee,	// (0x00018ce4) popup_call2_audio_second_window_g2_ParamLimits

0xadee,	// (0x00018ce4) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0001d41d) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0001d41d) popup_call2_audio_second_window_g

0xae53,	// (0x00018d49) popup_call2_audio_second_window_t1_ParamLimits

0xae53,	// (0x00018d49) popup_call2_audio_second_window_t1

0xaf0e,	// (0x00018e04) popup_call2_audio_second_window_t2_ParamLimits

0xaf0e,	// (0x00018e04) popup_call2_audio_second_window_t2

0xaf61,	// (0x00018e57) popup_call2_audio_second_window_t3_ParamLimits

0xaf61,	// (0x00018e57) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0001d424) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0001d424) popup_call2_audio_second_window_t

0x96e6,	// (0x000175dc) bg_popup_call2_in_pane_cp02

0x96f0,	// (0x000175e6) call_type_pane_cp04

0x96f8,	// (0x000175ee) popup_call2_audio_wait_window_g1

0x9700,	// (0x000175f6) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001cffd) popup_call2_audio_wait_window_g

0x9708,	// (0x000175fe) popup_call2_audio_wait_window_t3

0xb054,	// (0x00018f4a) bg_popup_call2_act_pane_ParamLimits

0xb054,	// (0x00018f4a) bg_popup_call2_act_pane

0xb114,	// (0x0001900a) call_type_pane_cp03_ParamLimits

0xb114,	// (0x0001900a) call_type_pane_cp03

0xb178,	// (0x0001906e) popup_call2_audio_first_window_g1_ParamLimits

0xb178,	// (0x0001906e) popup_call2_audio_first_window_g1

0xb1e8,	// (0x000190de) popup_call2_audio_first_window_g2_ParamLimits

0xb1e8,	// (0x000190de) popup_call2_audio_first_window_g2

0xa840,	// (0x00018736) popup_call2_audio_first_window_g3_ParamLimits

0xa840,	// (0x00018736) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0001d42d) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0001d42d) popup_call2_audio_first_window_g

0xb2c6,	// (0x000191bc) popup_call2_audio_first_window_t1_ParamLimits

0xb2c6,	// (0x000191bc) popup_call2_audio_first_window_t1

0xb3c9,	// (0x000192bf) popup_call2_audio_first_window_t4_ParamLimits

0xb3c9,	// (0x000192bf) popup_call2_audio_first_window_t4

0xb4ac,	// (0x000193a2) popup_call2_audio_first_window_t5_ParamLimits

0xb4ac,	// (0x000193a2) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0001d438) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0001d438) popup_call2_audio_first_window_t

0x9939,	// (0x0001782f) bg_popup_call2_act_pane_g1

0xbb19,	// (0x00019a0f) popup_cale_lunar_info_window_t1

0xbb27,	// (0x00019a1d) popup_cale_lunar_info_window_t2

0xbb35,	// (0x00019a2b) popup_cale_lunar_info_window_t3

0x96e6,	// (0x000175dc) bg_popup_call2_bubble_pane

0xb5ad,	// (0x000194a3) bg_popup_call2_in_pane_cp01_ParamLimits

0xb5ad,	// (0x000194a3) bg_popup_call2_in_pane_cp01

0x93c2,	// (0x000172b8) call_type_pane_cp02

0xb5f5,	// (0x000194eb) popup_call2_audio_out_window_g1_ParamLimits

0xb5f5,	// (0x000194eb) popup_call2_audio_out_window_g1

0xb621,	// (0x00019517) popup_call2_audio_out_window_g2_ParamLimits

0xb621,	// (0x00019517) popup_call2_audio_out_window_g2

0xb649,	// (0x0001953f) popup_call2_audio_out_window_g3_ParamLimits

0xb649,	// (0x0001953f) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0001d441) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0001d441) popup_call2_audio_out_window_g

0xb684,	// (0x0001957a) popup_call2_audio_out_window_t1_ParamLimits

0xb684,	// (0x0001957a) popup_call2_audio_out_window_t1

0xb6e3,	// (0x000195d9) popup_call2_audio_out_window_t2_ParamLimits

0xb6e3,	// (0x000195d9) popup_call2_audio_out_window_t2

0xb737,	// (0x0001962d) popup_call2_audio_out_window_t3_ParamLimits

0xb737,	// (0x0001962d) popup_call2_audio_out_window_t3

0xb74d,	// (0x00019643) popup_call2_audio_out_window_t4_ParamLimits

0xb74d,	// (0x00019643) popup_call2_audio_out_window_t4

0xb763,	// (0x00019659) popup_call2_audio_out_window_t5_ParamLimits

0xb763,	// (0x00019659) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0001d44a) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0001d44a) popup_call2_audio_out_window_t

0xb7c7,	// (0x000196bd) bg_popup_call2_in_pane_ParamLimits

0xb7c7,	// (0x000196bd) bg_popup_call2_in_pane

0xb823,	// (0x00019719) popup_call2_audio_in_window_g1_ParamLimits

0xb823,	// (0x00019719) popup_call2_audio_in_window_g1

0xb85b,	// (0x00019751) popup_call2_audio_in_window_g2_ParamLimits

0xb85b,	// (0x00019751) popup_call2_audio_in_window_g2

0xb893,	// (0x00019789) popup_call2_audio_in_window_g3_ParamLimits

0xb893,	// (0x00019789) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0001d457) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0001d457) popup_call2_audio_in_window_g

0xb8eb,	// (0x000197e1) popup_call2_audio_in_window_t1_ParamLimits

0xb8eb,	// (0x000197e1) popup_call2_audio_in_window_t1

0xb96b,	// (0x00019861) popup_call2_audio_in_window_t2_ParamLimits

0xb96b,	// (0x00019861) popup_call2_audio_in_window_t2

0xb9eb,	// (0x000198e1) popup_call2_audio_in_window_t3_ParamLimits

0xb9eb,	// (0x000198e1) popup_call2_audio_in_window_t3

0xba05,	// (0x000198fb) popup_call2_audio_in_window_t4_ParamLimits

0xba05,	// (0x000198fb) popup_call2_audio_in_window_t4

0xba17,	// (0x0001990d) popup_call2_audio_in_window_t5_ParamLimits

0xba17,	// (0x0001990d) popup_call2_audio_in_window_t5

0xba2c,	// (0x00019922) popup_call2_audio_in_window_t6_ParamLimits

0xba2c,	// (0x00019922) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0001d460) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0001d460) popup_call2_audio_in_window_t

0x9939,	// (0x0001782f) bg_popup_call2_in_pane_g1

0xbb43,	// (0x00019a39) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0001d4c8) popup_cale_lunar_info_window_t

0x9941,	// (0x00017837) bg_popup_call2_rect_pane_ParamLimits

0x9941,	// (0x00017837) bg_popup_call2_rect_pane

0x96e6,	// (0x000175dc) call2_cli_visual_graphic_pane

0x96e6,	// (0x000175dc) call2_cli_visual_text_pane

0xbd19,	// (0x00019c0f) smil_status_volume_pane_g3

0x0002,

0x9aaf,	// (0x000179a5) call2_cli_visual_graphic_pane_g1

0x9aaf,	// (0x000179a5) call2_cli_visual_graphic_pane_g2

0x9aaf,	// (0x000179a5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0001d46d) call2_cli_visual_graphic_pane_g

0xba41,	// (0x00019937) bg_popup_call2_rect_pane_g1

0x9b3b,	// (0x00017a31) bg_popup_call2_rect_pane_g2

0xba49,	// (0x0001993f) bg_popup_call2_rect_pane_g3

0xba51,	// (0x00019947) bg_popup_call2_rect_pane_g4

0xba59,	// (0x0001994f) bg_popup_call2_rect_pane_g5

0xba61,	// (0x00019957) bg_popup_call2_rect_pane_g6

0xba69,	// (0x0001995f) bg_popup_call2_rect_pane_g7

0xba71,	// (0x00019967) bg_popup_call2_rect_pane_g8

0xba79,	// (0x0001996f) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d474) bg_popup_call2_rect_pane_g

0xba81,	// (0x00019977) bg_popup_call2_bubble_pane_g1

0xba89,	// (0x0001997f) bg_popup_call2_bubble_pane_g2

0xba91,	// (0x00019987) bg_popup_call2_bubble_pane_g3

0xba99,	// (0x0001998f) bg_popup_call2_bubble_pane_g4

0xbaa1,	// (0x00019997) bg_popup_call2_bubble_pane_g5

0xbaa9,	// (0x0001999f) bg_popup_call2_bubble_pane_g6

0xbab1,	// (0x000199a7) bg_popup_call2_bubble_pane_g7

0xbab9,	// (0x000199af) bg_popup_call2_bubble_pane_g8

0xbac1,	// (0x000199b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0001d487) bg_popup_call2_bubble_pane_g

0x1168,	// (0x0000f05e) aid_cale_week_size_cell_pane

0x16e2,	// (0x0000f5d8) aid_cams_cif_uncrop_pane_ParamLimits

0x16e2,	// (0x0000f5d8) aid_cams_cif_uncrop_pane

0x1897,	// (0x0000f78d) aid_cams_size_cell_ParamLimits

0x1897,	// (0x0000f78d) aid_cams_size_cell

0x18ab,	// (0x0000f7a1) grid_cams_pane_ParamLimits

0x18c5,	// (0x0000f7bb) linegrid_cams_pane_ParamLimits

0x19fe,	// (0x0000f8f4) call_video_pane_t1

0x1a1c,	// (0x0000f912) call_video_pane_t2

0x0001,

0xf27e,	// (0x0001d174) call_video_pane_t

0x1e48,	// (0x0000fd3e) aid_cale_month_size_cell_pane_ParamLimits

0x1e48,	// (0x0000fd3e) aid_cale_month_size_cell_pane

0xf61b,	// (0x0001d511) smil_status_volume_pane_g

0xbd26,	// (0x00019c1c) volume_smil_pane_ParamLimits

0x9267,	// (0x0001715d) aid_popup2_width_pane

0x10ca,	// (0x0000efc0) cell_qdial_pane_g4_ParamLimits

0x10ca,	// (0x0000efc0) cell_qdial_pane_g4

0x29a3,	// (0x00010899) aid_blid_cardinal_pane_ParamLimits

0x29af,	// (0x000108a5) aid_blid_destination_pane_ParamLimits

0x29af,	// (0x000108a5) aid_blid_destination_pane

0x9941,	// (0x00017837) bg_popup_call_poc_act_pane_ParamLimits

0x9941,	// (0x00017837) bg_popup_call_poc_act_pane

0x9941,	// (0x00017837) bg_popup_call_poc_inact_pane_ParamLimits

0x9941,	// (0x00017837) bg_popup_call_poc_inact_pane

0xbac9,	// (0x000199bf) bg_popup_call_poc_act_pane_g1

0xbad1,	// (0x000199c7) bg_popup_call_poc_act_pane_g2

0xbad9,	// (0x000199cf) bg_popup_call_poc_act_pane_g3

0xba99,	// (0x0001998f) bg_popup_call_poc_act_pane_g4

0xbaa1,	// (0x00019997) bg_popup_call_poc_act_pane_g5

0xbae1,	// (0x000199d7) bg_popup_call_poc_act_pane_g6

0xbab1,	// (0x000199a7) bg_popup_call_poc_act_pane_g7

0xbae9,	// (0x000199df) bg_popup_call_poc_act_pane_g8

0x96e6,	// (0x000175dc) main_usb_pane

0xbc42,	// (0x00019b38) popup_cale_lunar_info_window

0x1cf4,	// (0x0000fbea) im_reading_pane_t1_ParamLimits

0x9dee,	// (0x00017ce4) list_im_pane_ParamLimits

0x9dff,	// (0x00017cf5) scroll_pane_cp07_ParamLimits

0x96e6,	// (0x000175dc) grid_highlight_pane_cp012

0x9941,	// (0x00017837) mup_scale_pane_ParamLimits

0xa9dd,	// (0x000188d3) main_usb_pane_g1_ParamLimits

0xa9dd,	// (0x000188d3) main_usb_pane_g1

0x364e,	// (0x00011544) main_usb_pane_g2_ParamLimits

0x364e,	// (0x00011544) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0001d4b1) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0001d4b1) main_usb_pane_g

0x3664,	// (0x0001155a) main_usb_pane_t1_ParamLimits

0x3664,	// (0x0001155a) main_usb_pane_t1

0x3676,	// (0x0001156c) main_usb_pane_t2_ParamLimits

0x3676,	// (0x0001156c) main_usb_pane_t2

0x3688,	// (0x0001157e) main_usb_pane_t3_ParamLimits

0x3688,	// (0x0001157e) main_usb_pane_t3

0x369a,	// (0x00011590) main_usb_pane_t4_ParamLimits

0x369a,	// (0x00011590) main_usb_pane_t4

0x36ac,	// (0x000115a2) main_usb_pane_t5_ParamLimits

0x36ac,	// (0x000115a2) main_usb_pane_t5

0x36be,	// (0x000115b4) main_usb_pane_t6_ParamLimits

0x36be,	// (0x000115b4) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0001d4b6) main_usb_pane_t_ParamLimits

0x2952,	// (0x00010848) aid_text_placing

0x295b,	// (0x00010851) main_location2_pane_t1_ParamLimits

0x296d,	// (0x00010863) main_location2_pane_t2_ParamLimits

0x297f,	// (0x00010875) main_location2_pane_t3_ParamLimits

0x2991,	// (0x00010887) main_location2_pane_t4_ParamLimits

0x2991,	// (0x00010887) main_location2_pane_t4

0xf3df,	// (0x0001d2d5) main_location2_pane_t_ParamLimits

0x997d,	// (0x00017873) find_pinb_pane_g2_ParamLimits

0x997d,	// (0x00017873) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0001d023) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0001d023) find_pinb_pane_g

0x9989,	// (0x0001787f) find_pinb_pane_t1_ParamLimits

0x999b,	// (0x00017891) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0001d028) find_pinb_pane_t_ParamLimits

0x96e6,	// (0x000175dc) main_call3_pane

0x21ac,	// (0x000100a2) cale_month_day_heading_pane_t1_ParamLimits

0x220a,	// (0x00010100) cale_month_day_heading_pane_t2_ParamLimits

0x226f,	// (0x00010165) cale_month_day_heading_pane_t3_ParamLimits

0x22d4,	// (0x000101ca) cale_month_day_heading_pane_t4_ParamLimits

0x2339,	// (0x0001022f) cale_month_day_heading_pane_t5_ParamLimits

0x23ae,	// (0x000102a4) cale_month_day_heading_pane_t6_ParamLimits

0x2423,	// (0x00010319) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0001d1ac) cale_month_day_heading_pane_t_ParamLimits

0xa075,	// (0x00017f6b) smil_status_volume_pane

0x3149,	// (0x0001103f) postcard_address_pane_ParamLimits

0x3149,	// (0x0001103f) postcard_address_pane

0x315b,	// (0x00011051) postcard_message_pane_ParamLimits

0x315b,	// (0x00011051) postcard_message_pane

0x362c,	// (0x00011522) call2_cli_visual_pane_t1_ParamLimits

0x362c,	// (0x00011522) call2_cli_visual_pane_t1

0x3e50,	// (0x00011d46) postcard_message_pane_t1_ParamLimits

0x3e50,	// (0x00011d46) postcard_message_pane_t1

0x3e39,	// (0x00011d2f) postcard_address_pane_t1_ParamLimits

0x3e39,	// (0x00011d2f) postcard_address_pane_t1

0x3e25,	// (0x00011d1b) popup_call3_audio_in_window_ParamLimits

0x3e25,	// (0x00011d1b) popup_call3_audio_in_window

0x3cb0,	// (0x00011ba6) bg_popup_call3_in_pane_ParamLimits

0x3cb0,	// (0x00011ba6) bg_popup_call3_in_pane

0x3d26,	// (0x00011c1c) popup_call3_audio_in_window_g1_ParamLimits

0x3d26,	// (0x00011c1c) popup_call3_audio_in_window_g1

0x3d46,	// (0x00011c3c) popup_call3_audio_in_window_g2_ParamLimits

0x3d46,	// (0x00011c3c) popup_call3_audio_in_window_g2

0x3d66,	// (0x00011c5c) popup_call3_audio_in_window_g3_ParamLimits

0x3d66,	// (0x00011c5c) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0001d518) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0001d518) popup_call3_audio_in_window_g

0x3d97,	// (0x00011c8d) popup_call3_audio_in_window_t1_ParamLimits

0x3d97,	// (0x00011c8d) popup_call3_audio_in_window_t1

0x3dd5,	// (0x00011ccb) popup_call3_audio_in_window_t2_ParamLimits

0x3dd5,	// (0x00011ccb) popup_call3_audio_in_window_t2

0x3e13,	// (0x00011d09) popup_call3_audio_in_window_t3_ParamLimits

0x3e13,	// (0x00011d09) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0001d521) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0001d521) popup_call3_audio_in_window_t

0xa76f,	// (0x00018665) bg_popup_call3_rect_pane

0xba41,	// (0x00019937) bg_popup_call3_rect_pane_g1

0x9b3b,	// (0x00017a31) bg_popup_call3_rect_pane_g2

0xba49,	// (0x0001993f) bg_popup_call3_rect_pane_g3

0xba51,	// (0x00019947) bg_popup_call3_rect_pane_g4

0xba59,	// (0x0001994f) bg_popup_call3_rect_pane_g5

0xba61,	// (0x00019957) bg_popup_call3_rect_pane_g6

0xba69,	// (0x0001995f) bg_popup_call3_rect_pane_g7

0x2d7b,	// (0x00010c71) mup_visualizer_osc_pane

0xa84e,	// (0x00018744) mup_visualizer_spec_pane

0x3ce0,	// (0x00011bd6) call3_video_qcif_pane_ParamLimits

0x3ce0,	// (0x00011bd6) call3_video_qcif_pane

0x3cf3,	// (0x00011be9) call3_video_qcif_uncrop_pane_ParamLimits

0x3cf3,	// (0x00011be9) call3_video_qcif_uncrop_pane

0x3d01,	// (0x00011bf7) call3_video_subqcif_pane_ParamLimits

0x3d01,	// (0x00011bf7) call3_video_subqcif_pane

0x3d15,	// (0x00011c0b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3d15,	// (0x00011c0b) call3_video_subqcif_uncrop_pane

0x3d86,	// (0x00011c7c) popup_call3_audio_in_window_g4_ParamLimits

0x3d86,	// (0x00011c7c) popup_call3_audio_in_window_g4

0x3c9f,	// (0x00011b95) mup_spec_half_pane

0x3ca8,	// (0x00011b9e) mup_spec_half_pane_cp

0xbcd9,	// (0x00019bcf) mup_osc_middle_pane

0xbce2,	// (0x00019bd8) mup_visualizer_osc_pane_g1

0x3c7f,	// (0x00011b75) mup_spec_bar_pane_ParamLimits

0x3c7f,	// (0x00011b75) mup_spec_bar_pane

0xbcc6,	// (0x00019bbc) mup_spec_bar_pane_g1

0xbcd0,	// (0x00019bc6) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d50c) mup_spec_bar_pane_g

0x1168,	// (0x0000f05e) aid_cale_week_size_cell_pane_ParamLimits

0x117b,	// (0x0000f071) bg_cale_heading_pane_ParamLimits

0x9bb7,	// (0x00017aad) bg_cale_pane_cp01_ParamLimits

0x118f,	// (0x0000f085) cale_week_corner_pane_ParamLimits

0x11a5,	// (0x0000f09b) cale_week_day_heading_pane_ParamLimits

0x11b9,	// (0x0000f0af) cale_week_scroll_pane_g1_ParamLimits

0x11ca,	// (0x0000f0c0) cale_week_scroll_pane_g2_ParamLimits

0x11db,	// (0x0000f0d1) cale_week_scroll_pane_g3_ParamLimits

0x11ec,	// (0x0000f0e2) cale_week_scroll_pane_g4_ParamLimits

0x11fd,	// (0x0000f0f3) cale_week_scroll_pane_g5_ParamLimits

0x1210,	// (0x0000f106) cale_week_scroll_pane_g6_ParamLimits

0x1223,	// (0x0000f119) cale_week_scroll_pane_g7_ParamLimits

0x1236,	// (0x0000f12c) cale_week_scroll_pane_g8_ParamLimits

0x1249,	// (0x0000f13f) cale_week_scroll_pane_g9_ParamLimits

0x125a,	// (0x0000f150) cale_week_scroll_pane_g10_ParamLimits

0x126b,	// (0x0000f161) cale_week_scroll_pane_g11_ParamLimits

0x127c,	// (0x0000f172) cale_week_scroll_pane_g12_ParamLimits

0x128d,	// (0x0000f183) cale_week_scroll_pane_g13_ParamLimits

0x129e,	// (0x0000f194) cale_week_scroll_pane_g14_ParamLimits

0x12af,	// (0x0000f1a5) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0001d0b4) cale_week_scroll_pane_g_ParamLimits

0x12c0,	// (0x0000f1b6) cale_week_time_pane_ParamLimits

0x12d3,	// (0x0000f1c9) grid_cale_week_pane_ParamLimits

0x9bd0,	// (0x00017ac6) listscroll_cale_week_pane_t1

0x12e8,	// (0x0000f1de) scroll_pane_cp08_ParamLimits

0x1e89,	// (0x0000fd7f) cale_month_corner_pane_ParamLimits

0xa015,	// (0x00017f0b) cale_month_pane_t1

0x216b,	// (0x00010061) cale_month_week_pane_ParamLimits

0x279e,	// (0x00010694) popup_call_status_window_g1_ParamLimits

0x27b2,	// (0x000106a8) popup_call_status_window_g2_ParamLimits

0x27c6,	// (0x000106bc) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0001d25c) popup_call_status_window_g_ParamLimits

0xa480,	// (0x00018376) aid_call2_pane

0x2fe2,	// (0x00010ed8) msg_header_pane_g1

0x3149,	// (0x0001103f) postcard_address2_pane_ParamLimits

0x3149,	// (0x0001103f) postcard_address2_pane

0x315b,	// (0x00011051) postcard_message2_pane_ParamLimits

0x315b,	// (0x00011051) postcard_message2_pane

0x3c31,	// (0x00011b27) message2_row_pane_ParamLimits

0x3c31,	// (0x00011b27) message2_row_pane

0x3c4d,	// (0x00011b43) address2_row_pane_ParamLimits

0x3c4d,	// (0x00011b43) address2_row_pane

0xbc94,	// (0x00019b8a) postcard_message2_row_pane_g1

0xbc9c,	// (0x00019b92) postcard_message2_row_pane_t1

0xbc94,	// (0x00019b8a) address2_row_pane_g1

0xbc9c,	// (0x00019b92) address2_row_pane_t1

0x1580,	// (0x0000f476) aid_size_cell_vorec

0x96e6,	// (0x000175dc) main_rss_pane

0x3c60,	// (0x00011b56) rss_list_single_pane_ParamLimits

0x3c60,	// (0x00011b56) rss_list_single_pane

0xbcaa,	// (0x00019ba0) rss_list_single_pane_t1

0xbcb8,	// (0x00019bae) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0001d507) rss_list_single_pane_t

0x96e6,	// (0x000175dc) main_camera2_pane

0x96e6,	// (0x000175dc) main_video2_pane

0x3ec9,	// (0x00011dbf) cams_zoom_pane_cp2_ParamLimits

0x3ec9,	// (0x00011dbf) cams_zoom_pane_cp2

0x3ee9,	// (0x00011ddf) image2_vga_pane_ParamLimits

0x3ee9,	// (0x00011ddf) image2_vga_pane

0x3f3a,	// (0x00011e30) main_camera2_pane_g1_ParamLimits

0x3f3a,	// (0x00011e30) main_camera2_pane_g1

0x3f5a,	// (0x00011e50) main_camera2_pane_g2_ParamLimits

0x3f5a,	// (0x00011e50) main_camera2_pane_g2

0x3f7a,	// (0x00011e70) main_camera2_pane_g3_ParamLimits

0x3f7a,	// (0x00011e70) main_camera2_pane_g3

0x3f9a,	// (0x00011e90) main_camera2_pane_g4_ParamLimits

0x3f9a,	// (0x00011e90) main_camera2_pane_g4

0x3fba,	// (0x00011eb0) main_camera2_pane_g5_ParamLimits

0x3fba,	// (0x00011eb0) main_camera2_pane_g5

0x3fda,	// (0x00011ed0) main_camera2_pane_g6_ParamLimits

0x3fda,	// (0x00011ed0) main_camera2_pane_g6

0x3ffa,	// (0x00011ef0) main_camera2_pane_g7_ParamLimits

0x3ffa,	// (0x00011ef0) main_camera2_pane_g7

0x401a,	// (0x00011f10) main_camera2_pane_g8_ParamLimits

0x401a,	// (0x00011f10) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0001d528) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0001d528) main_camera2_pane_g

0x405a,	// (0x00011f50) main_camera2_pane_t1_ParamLimits

0x405a,	// (0x00011f50) main_camera2_pane_t1

0x408f,	// (0x00011f85) main_camera2_pane_t2_ParamLimits

0x408f,	// (0x00011f85) main_camera2_pane_t2

0x40b5,	// (0x00011fab) main_camera2_pane_t3_ParamLimits

0x40b5,	// (0x00011fab) main_camera2_pane_t3

0x4113,	// (0x00012009) main_camera2_pane_t4_ParamLimits

0x4113,	// (0x00012009) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0001d53b) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0001d53b) main_camera2_pane_t

0x41a5,	// (0x0001209b) cams_zoom_pane_cp4_ParamLimits

0x41a5,	// (0x0001209b) cams_zoom_pane_cp4

0x41bb,	// (0x000120b1) image2_cif_pane_ParamLimits

0x41bb,	// (0x000120b1) image2_cif_pane

0x41e6,	// (0x000120dc) image2_subqcif_pane_ParamLimits

0x41e6,	// (0x000120dc) image2_subqcif_pane

0x4200,	// (0x000120f6) main_video2_pane_g1_ParamLimits

0x4200,	// (0x000120f6) main_video2_pane_g1

0x421a,	// (0x00012110) main_video2_pane_g2_ParamLimits

0x421a,	// (0x00012110) main_video2_pane_g2

0x4230,	// (0x00012126) main_video2_pane_g3_ParamLimits

0x4230,	// (0x00012126) main_video2_pane_g3

0x4246,	// (0x0001213c) main_video2_pane_g4_ParamLimits

0x4246,	// (0x0001213c) main_video2_pane_g4

0x425c,	// (0x00012152) main_video2_pane_g5_ParamLimits

0x425c,	// (0x00012152) main_video2_pane_g5

0x4272,	// (0x00012168) main_video2_pane_g6_ParamLimits

0x4272,	// (0x00012168) main_video2_pane_g6

0x0005,

0xf654,	// (0x0001d54a) main_video2_pane_g_ParamLimits

0xf654,	// (0x0001d54a) main_video2_pane_g

0x428c,	// (0x00012182) main_video2_pane_t1_ParamLimits

0x428c,	// (0x00012182) main_video2_pane_t1

0x42b0,	// (0x000121a6) main_video2_pane_t2_ParamLimits

0x42b0,	// (0x000121a6) main_video2_pane_t2

0x42fe,	// (0x000121f4) main_video2_pane_t3_ParamLimits

0x42fe,	// (0x000121f4) main_video2_pane_t3

0x0002,

0xf661,	// (0x0001d557) main_video2_pane_t_ParamLimits

0xf661,	// (0x0001d557) main_video2_pane_t

0x3779,	// (0x0001166f) call_muted_g2

0x0001,

0xf603,	// (0x0001d4f9) call_muted_g

0x96e6,	// (0x000175dc) main_mup2_pane

0x4342,	// (0x00012238) main_mup2_pane_g1_ParamLimits

0x4342,	// (0x00012238) main_mup2_pane_g1

0x434e,	// (0x00012244) main_mup2_pane_g2_ParamLimits

0x434e,	// (0x00012244) main_mup2_pane_g2

0xbe4a,	// (0x00019d40) main_mup_pane_g13_cp1

0xbe52,	// (0x00019d48) mup_volume_pane_cp1

0x436a,	// (0x00012260) main_mup2_pane_g4_ParamLimits

0x436a,	// (0x00012260) main_mup2_pane_g4

0x437c,	// (0x00012272) main_mup2_pane_g5_ParamLimits

0x437c,	// (0x00012272) main_mup2_pane_g5

0x438e,	// (0x00012284) main_mup2_pane_g6_ParamLimits

0x438e,	// (0x00012284) main_mup2_pane_g6

0x43a0,	// (0x00012296) main_mup2_pane_g7_ParamLimits

0x43a0,	// (0x00012296) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0001d55e) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0001d55e) main_mup2_pane_g

0x43b8,	// (0x000122ae) main_mup2_pane_t1_ParamLimits

0x43b8,	// (0x000122ae) main_mup2_pane_t1

0x43ce,	// (0x000122c4) main_mup2_pane_t2_ParamLimits

0x43ce,	// (0x000122c4) main_mup2_pane_t2

0x43e4,	// (0x000122da) main_mup2_pane_t3_ParamLimits

0x43e4,	// (0x000122da) main_mup2_pane_t3

0x43fa,	// (0x000122f0) main_mup2_pane_t4_ParamLimits

0x43fa,	// (0x000122f0) main_mup2_pane_t4

0x4412,	// (0x00012308) main_mup2_pane_t5_ParamLimits

0x4412,	// (0x00012308) main_mup2_pane_t5

0x442a,	// (0x00012320) main_mup2_pane_t6_ParamLimits

0x442a,	// (0x00012320) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0001d56d) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0001d56d) main_mup2_pane_t

0x445a,	// (0x00012350) mup2_visualizer_pane_ParamLimits

0x445a,	// (0x00012350) mup2_visualizer_pane

0x4488,	// (0x0001237e) mup_progress_pane_cp_ParamLimits

0x4488,	// (0x0001237e) mup_progress_pane_cp

0xbe2c,	// (0x00019d22) mup_volume_pane_cp_ParamLimits

0xbe2c,	// (0x00019d22) mup_volume_pane_cp

0x449c,	// (0x00012392) mup2_visualizer_pane_g1_ParamLimits

0x449c,	// (0x00012392) mup2_visualizer_pane_g1

0xbd6b,	// (0x00019c61) mup2_visualizer_pane_g2_ParamLimits

0xbd6b,	// (0x00019c61) mup2_visualizer_pane_g2

0x44b3,	// (0x000123a9) mup2_visualizer_pane_g3_ParamLimits

0x44b3,	// (0x000123a9) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0001d57a) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0001d57a) mup2_visualizer_pane_g

0xab26,	// (0x00018a1c) aid_size_cell_fmradio

0x392b,	// (0x00011821) aid_height_parent_landcape

0x9e7d,	// (0x00017d73) wml_content_pane_cp

0x9e85,	// (0x00017d7b) wml_tabs_pane

0x9e8e,	// (0x00017d84) popup_wml_miniature_window

0x9e96,	// (0x00017d8c) scroll_pane_cp021

0x9eaa,	// (0x00017da0) wml_content_pane_comp8

0x96e6,	// (0x000175dc) bg_popup_sub_pane_cp05

0xbd89,	// (0x00019c7f) popup_wml_miniature_window_g1

0xbd91,	// (0x00019c87) wml_miniature_view_pane

0x44bf,	// (0x000123b5) aid_size_wml_view

0x44c7,	// (0x000123bd) wml_miniature_view_pane_g1

0x44d0,	// (0x000123c6) wml_miniature_view_pane_g2

0x44d9,	// (0x000123cf) wml_miniature_view_pane_g3

0x44e1,	// (0x000123d7) wml_miniature_view_pane_g4

0x44e9,	// (0x000123df) wml_miniature_view_pane_g5

0x44f1,	// (0x000123e7) wml_miniature_view_pane_g6

0x44f9,	// (0x000123ef) wml_miniature_view_pane_g7

0x4501,	// (0x000123f7) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0001d581) wml_miniature_view_pane_g

0xbd99,	// (0x00019c8f) background_graphic_ParamLimits

0xbd99,	// (0x00019c8f) background_graphic

0xbda5,	// (0x00019c9b) wml_tabs_2_pane

0xbdae,	// (0x00019ca4) wml_tabs_3_pane_ParamLimits

0xbdae,	// (0x00019ca4) wml_tabs_3_pane

0xbdc0,	// (0x00019cb6) wml_tabs_4_pane_ParamLimits

0xbdc0,	// (0x00019cb6) wml_tabs_4_pane

0xbdd6,	// (0x00019ccc) wml_tabs_5_pane_ParamLimits

0xbdd6,	// (0x00019ccc) wml_tabs_5_pane

0xbdf0,	// (0x00019ce6) wml_tabs_pane_g2_ParamLimits

0xbdf0,	// (0x00019ce6) wml_tabs_pane_g2

0xbe04,	// (0x00019cfa) wml_tabs_pane_g3_ParamLimits

0xbe04,	// (0x00019cfa) wml_tabs_pane_g3

0x4509,	// (0x000123ff) wml_tabs_2_active_pane_ParamLimits

0x4509,	// (0x000123ff) wml_tabs_2_active_pane

0x451d,	// (0x00012413) wml_tabs_2_passive_pane_ParamLimits

0x451d,	// (0x00012413) wml_tabs_2_passive_pane

0x4531,	// (0x00012427) wml_tabs_3_active_pane_cp_ParamLimits

0x4531,	// (0x00012427) wml_tabs_3_active_pane_cp

0x4546,	// (0x0001243c) wml_tabs_3_passive_pane_ParamLimits

0x4546,	// (0x0001243c) wml_tabs_3_passive_pane

0x4559,	// (0x0001244f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4559,	// (0x0001244f) wml_tabs_3_passive_pane_cp

0x4570,	// (0x00012466) tabs_4_active_pane

0x4578,	// (0x0001246e) tabs_4_passive_pane

0x4582,	// (0x00012478) tabs_4_passive_pane_cp

0x458a,	// (0x00012480) tabs_4_passive_pane_cp2

0x3646,	// (0x0001153c) aid_height_text

0x2d51,	// (0x00010c47) mup_volume_cont_pane_ParamLimits

0x2d51,	// (0x00010c47) mup_volume_cont_pane

0x0d4b,	// (0x0000ec41) aid_size_cell_pinb

0x0d55,	// (0x0000ec4b) aid_size_list_pinb

0x4474,	// (0x0001236a) mup2_volume_cont_pane_ParamLimits

0x4474,	// (0x0001236a) mup2_volume_cont_pane

0xbe18,	// (0x00019d0e) mup2_volume_cont_pane_g1_ParamLimits

0xbe18,	// (0x00019d0e) mup2_volume_cont_pane_g1

0x0a2d,	// (0x0000e923) aid_size_cell_touch_ParamLimits

0x0a2d,	// (0x0000e923) aid_size_cell_touch

0x0c3b,	// (0x0000eb31) touch_pane_ParamLimits

0x0c3b,	// (0x0000eb31) touch_pane

0x9255,	// (0x0001714b) main_rss2_pane

0xbe5a,	// (0x00019d50) listscroll_rss2_pane

0xbe63,	// (0x00019d59) rss2_navigation_pane

0xbe6b,	// (0x00019d61) list_rss2_pane

0xa626,	// (0x0001851c) scroll_pane_cp22

0xbe73,	// (0x00019d69) rss2_navigation_pane_g1

0xbe7c,	// (0x00019d72) rss2_navigation_pane_g2

0xbe84,	// (0x00019d7a) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0001d592) rss2_navigation_pane_g

0xbe8c,	// (0x00019d82) rss2_navigation_pane_t1

0x4594,	// (0x0001248a) rss2_list_single_pane_ParamLimits

0x4594,	// (0x0001248a) rss2_list_single_pane

0xbe9a,	// (0x00019d90) rss2_list_single_pane_t2

0xbea8,	// (0x00019d9e) rss2_list_single_pane_t3_ParamLimits

0xbea8,	// (0x00019d9e) rss2_list_single_pane_t3

0xbec5,	// (0x00019dbb) rss2_list_single_pane_t4

0x261d,	// (0x00010513) smil_status_pane_g1

0x92c5,	// (0x000171bb) main_image2_pane_ParamLimits

0x92c5,	// (0x000171bb) main_image2_pane

0x403a,	// (0x00011f30) main_camera2_pane_g9_ParamLimits

0x403a,	// (0x00011f30) main_camera2_pane_g9

0x4168,	// (0x0001205e) main_camera2_pane_t5_ParamLimits

0x4168,	// (0x0001205e) main_camera2_pane_t5

0xbd3b,	// (0x00019c31) main_camera2_pane_t6_ParamLimits

0xbd3b,	// (0x00019c31) main_camera2_pane_t6

0x45a9,	// (0x0001249f) main_image2_pane_g1_ParamLimits

0x45a9,	// (0x0001249f) main_image2_pane_g1

0x3382,	// (0x00011278) smil2_video_pane_ParamLimits

0x3382,	// (0x00011278) smil2_video_pane

0x9273,	// (0x00017169) aid_zoom_text_primary_cp

0x92bb,	// (0x000171b1) popup_preview_fixed_window

0x9de6,	// (0x00017cdc) im_reading_pane_g1

0x3eb1,	// (0x00011da7) cams2_bc_adjust_pane_cp_ParamLimits

0x3eb1,	// (0x00011da7) cams2_bc_adjust_pane_cp

0x4197,	// (0x0001208d) cams2_bc_adjust_pane_ParamLimits

0x4197,	// (0x0001208d) cams2_bc_adjust_pane

0xbed3,	// (0x00019dc9) cams2_bc_adjust_pane_g1

0xbedb,	// (0x00019dd1) cams2_slider_pane

0xbee4,	// (0x00019dda) cams2_slider_pane_g1

0xbeed,	// (0x00019de3) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0001d599) cams2_slider_pane_g

0x0e43,	// (0x0000ed39) calc_display_pane_ParamLimits

0x0e6b,	// (0x0000ed61) calc_paper_pane_ParamLimits

0x0e8e,	// (0x0000ed84) grid_calc_pane_ParamLimits

0xa4e6,	// (0x000183dc) popup_clock_digital_window_t1_ParamLimits

0xaac3,	// (0x000189b9) main_image_pane_t1

0x0e25,	// (0x0000ed1b) aid_size_cell_calc_ParamLimits

0x0e25,	// (0x0000ed1b) aid_size_cell_calc

0x3971,	// (0x00011867) popup_blid_sat_info2_window_ParamLimits

0x3971,	// (0x00011867) popup_blid_sat_info2_window

0xbf0f,	// (0x00019e05) aid_size_cell_blid

0xbf17,	// (0x00019e0d) bg_popup_window_pane_cp07

0xbf3a,	// (0x00019e30) grid_popup_blid_pane

0xbf44,	// (0x00019e3a) heading_pane_cp05_ParamLimits

0xbf44,	// (0x00019e3a) heading_pane_cp05

0xc00e,	// (0x00019f04) cell_popup_blid_pane_ParamLimits

0xc00e,	// (0x00019f04) cell_popup_blid_pane

0xc032,	// (0x00019f28) cell_popup_blid_pane_g1

0xc03a,	// (0x00019f30) cell_popup_blid_pane_t1

0x4444,	// (0x0001233a) mup2_indicator_pane_ParamLimits

0x4444,	// (0x0001233a) mup2_indicator_pane

0xa76f,	// (0x00018665) mup2_visualizer_osc_pane

0xbd77,	// (0x00019c6d) mup2_visualizer_spec_pane_ParamLimits

0xbd77,	// (0x00019c6d) mup2_visualizer_spec_pane

0x45bf,	// (0x000124b5) mup2_spec_half_pane

0x45c8,	// (0x000124be) mup2_spec_half_pane_cp

0x45d0,	// (0x000124c6) mup2_spec_bar_pane_ParamLimits

0x45d0,	// (0x000124c6) mup2_spec_bar_pane

0xbcc6,	// (0x00019bbc) mup2_spec_bar_pane_g1

0xbcd0,	// (0x00019bc6) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d50c) mup2_spec_bar_pane_g

0x45f0,	// (0x000124e6) mup2_osc_middle_pane

0xbce2,	// (0x00019bd8) mup2_visualizer_osc_pane_g1

0x92f3,	// (0x000171e9) popup_number_entry_window_t1_ParamLimits

0x9306,	// (0x000171fc) popup_number_entry_window_t2_ParamLimits

0x9318,	// (0x0001720e) popup_number_entry_window_t3_ParamLimits

0x0c8d,	// (0x0000eb83) popup_number_entry_window_t5_ParamLimits

0x0c8d,	// (0x0000eb83) popup_number_entry_window_t5

0xf0d8,	// (0x0001cfce) popup_number_entry_window_t_ParamLimits

0x932a,	// (0x00017220) text_title_cp2_ParamLimits

0xa99d,	// (0x00018893) aid_hotspot_pointer_text2_pane

0xa9c3,	// (0x000188b9) main_viewer_pane_g9_ParamLimits

0xa9c3,	// (0x000188b9) main_viewer_pane_g9

0xa015,	// (0x00017f0b) cale_month_pane_t1_ParamLimits

0xa0aa,	// (0x00017fa0) bg_cale_pane_ParamLimits

0xa0c2,	// (0x00017fb8) list_cale_pane_ParamLimits

0x9bd0,	// (0x00017ac6) listscroll_cale_day_pane_t1

0xa0d3,	// (0x00017fc9) scroll_pane_cp09_ParamLimits

0x2d83,	// (0x00010c79) main_mup_eq_pane_t1_ParamLimits

0x2d83,	// (0x00010c79) main_mup_eq_pane_t1

0x2d9d,	// (0x00010c93) main_mup_eq_pane_t2_ParamLimits

0x2d9d,	// (0x00010c93) main_mup_eq_pane_t2

0x2db7,	// (0x00010cad) main_mup_eq_pane_t3_ParamLimits

0x2db7,	// (0x00010cad) main_mup_eq_pane_t3

0x2dd3,	// (0x00010cc9) main_mup_eq_pane_t4_ParamLimits

0x2dd3,	// (0x00010cc9) main_mup_eq_pane_t4

0x2def,	// (0x00010ce5) main_mup_eq_pane_t5_ParamLimits

0x2def,	// (0x00010ce5) main_mup_eq_pane_t5

0x2e0b,	// (0x00010d01) main_mup_eq_pane_t6_ParamLimits

0x2e0b,	// (0x00010d01) main_mup_eq_pane_t6

0x2e1f,	// (0x00010d15) main_mup_eq_pane_t7_ParamLimits

0x2e1f,	// (0x00010d15) main_mup_eq_pane_t7

0x2e33,	// (0x00010d29) main_mup_eq_pane_t8_ParamLimits

0x2e33,	// (0x00010d29) main_mup_eq_pane_t8

0x2e47,	// (0x00010d3d) main_mup_eq_pane_t9_ParamLimits

0x2e47,	// (0x00010d3d) main_mup_eq_pane_t9

0x2e61,	// (0x00010d57) main_mup_eq_pane_t10_ParamLimits

0x2e61,	// (0x00010d57) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0001d35b) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0001d35b) main_mup_eq_pane_t

0x2f10,	// (0x00010e06) mup_equalizer_pane_cp5_ParamLimits

0x2f24,	// (0x00010e1a) mup_equalizer_pane_cp6_ParamLimits

0x2f38,	// (0x00010e2e) mup_equalizer_pane_cp7_ParamLimits

0x9255,	// (0x0001714b) main_gallery_pane

0xbceb,	// (0x00019be1) smil2_volume_pane

0xbcf3,	// (0x00019be9) smil_status_volume_pane_g1_ParamLimits

0xbd06,	// (0x00019bfc) smil_status_volume_pane_g2_ParamLimits

0xbd19,	// (0x00019c0f) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0001d511) smil_status_volume_pane_g_ParamLimits

0xbf17,	// (0x00019e0d) bg_popup_window_pane_cp07_ParamLimits

0xbf25,	// (0x00019e1b) blid_firmament_pane

0x45f9,	// (0x000124ef) aid_size_cell_gallery_ParamLimits

0x45f9,	// (0x000124ef) aid_size_cell_gallery

0x460f,	// (0x00012505) grid_gallery_pane_ParamLimits

0x460f,	// (0x00012505) grid_gallery_pane

0x4628,	// (0x0001251e) cell_gallery_pane_ParamLimits

0x4628,	// (0x0001251e) cell_gallery_pane

0xc048,	// (0x00019f3e) bg_cell_gallery_focus_pane_ParamLimits

0xc048,	// (0x00019f3e) bg_cell_gallery_focus_pane

0xc05a,	// (0x00019f50) cell_gallery_pane_g1_ParamLimits

0xc05a,	// (0x00019f50) cell_gallery_pane_g1

0x4671,	// (0x00012567) cell_gallery_pane_g2_ParamLimits

0x4671,	// (0x00012567) cell_gallery_pane_g2

0x467e,	// (0x00012574) cell_gallery_pane_g3_ParamLimits

0x467e,	// (0x00012574) cell_gallery_pane_g3

0xc066,	// (0x00019f5c) cell_gallery_pane_g4_ParamLimits

0xc066,	// (0x00019f5c) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0001d5bf) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0001d5bf) cell_gallery_pane_g

0xc072,	// (0x00019f68) bg_cell_gallery_focus_pane_g1

0xc07a,	// (0x00019f70) bg_cell_gallery_focus_pane_g2

0xc082,	// (0x00019f78) bg_cell_gallery_focus_pane_g3

0xc08a,	// (0x00019f80) bg_cell_gallery_focus_pane_g4

0xc092,	// (0x00019f88) bg_cell_gallery_focus_pane_g5

0xc09a,	// (0x00019f90) bg_cell_gallery_focus_pane_g6

0xc0a2,	// (0x00019f98) bg_cell_gallery_focus_pane_g7

0xc0aa,	// (0x00019fa0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0001d5c8) bg_cell_gallery_focus_pane_g

0xc0b2,	// (0x00019fa8) aid_firma_cardinal

0xc0c6,	// (0x00019fbc) blid_firmament_pane_t1

0xc0dd,	// (0x00019fd3) blid_firmament_pane_t2

0xc0f4,	// (0x00019fea) blid_firmament_pane_t3

0xc10b,	// (0x0001a001) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0001d5d9) blid_firmament_pane_t

0xc122,	// (0x0001a018) blid_sat_info_pane

0xc132,	// (0x0001a028) blid_sat_info_pane_g1

0xc132,	// (0x0001a028) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0001d5e2) blid_sat_info_pane_g

0xc13c,	// (0x0001a032) blid_sat_info_pane_t1

0xc14a,	// (0x0001a040) smil2_volume_content_pane

0xc153,	// (0x0001a049) smil2_volume_pane_g1

0xc15b,	// (0x0001a051) smil2_volume_content_pane_g1

0xc164,	// (0x0001a05a) smil2_volume_content_pane_g2

0xc16d,	// (0x0001a063) smil2_volume_content_pane_g3

0xc176,	// (0x0001a06c) smil2_volume_content_pane_g4

0xc17f,	// (0x0001a075) smil2_volume_content_pane_g5

0xc188,	// (0x0001a07e) smil2_volume_content_pane_g6

0xc191,	// (0x0001a087) smil2_volume_content_pane_g7

0xc19a,	// (0x0001a090) smil2_volume_content_pane_g8

0xc1a3,	// (0x0001a099) smil2_volume_content_pane_g9

0xc1ac,	// (0x0001a0a2) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0001d5e7) smil2_volume_content_pane_g

0x1342,	// (0x0000f238) cale_week_day_heading_pane_t1_ParamLimits

0x136c,	// (0x0000f262) cale_week_day_heading_pane_t2_ParamLimits

0x1396,	// (0x0000f28c) cale_week_day_heading_pane_t3_ParamLimits

0x13c0,	// (0x0000f2b6) cale_week_day_heading_pane_t4_ParamLimits

0x13ea,	// (0x0000f2e0) cale_week_day_heading_pane_t5_ParamLimits

0x1414,	// (0x0000f30a) cale_week_day_heading_pane_t6_ParamLimits

0x1440,	// (0x0000f336) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0001d0d3) cale_week_day_heading_pane_t_ParamLimits

0x9be2,	// (0x00017ad8) bg_cale_side_pane_ParamLimits

0x146a,	// (0x0000f360) cale_week_time_pane_t1_ParamLimits

0x1482,	// (0x0000f378) cale_week_time_pane_t2_ParamLimits

0x149a,	// (0x0000f390) cale_week_time_pane_t3_ParamLimits

0x14b2,	// (0x0000f3a8) cale_week_time_pane_t4_ParamLimits

0x14ca,	// (0x0000f3c0) cale_week_time_pane_t5_ParamLimits

0x14e2,	// (0x0000f3d8) cale_week_time_pane_t6_ParamLimits

0x14fa,	// (0x0000f3f0) cale_week_time_pane_t7_ParamLimits

0x1512,	// (0x0000f408) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0001d0e2) cale_week_time_pane_t_ParamLimits

0x152a,	// (0x0000f420) cell_cale_week_pane_g2_ParamLimits

0x9be2,	// (0x00017ad8) bg_cale_side_pane_cp01_ParamLimits

0x2498,	// (0x0001038e) cale_month_week_pane_t1_ParamLimits

0x24af,	// (0x000103a5) cale_month_week_pane_t2_ParamLimits

0x24c6,	// (0x000103bc) cale_month_week_pane_t3_ParamLimits

0x24dd,	// (0x000103d3) cale_month_week_pane_t4_ParamLimits

0x24f4,	// (0x000103ea) cale_month_week_pane_t5_ParamLimits

0x250b,	// (0x00010401) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0001d1bb) cale_month_week_pane_t_ParamLimits

0xa051,	// (0x00017f47) cell_cale_month_pane_g1_ParamLimits

0x9255,	// (0x0001714b) main_cale_event_viewer_pane

0x9255,	// (0x0001714b) listscroll_cale_event_viewer_pane

0xc1b5,	// (0x0001a0ab) list_cale_ev_pane

0xc1bd,	// (0x0001a0b3) scroll_pane_cp023

0xc1c9,	// (0x0001a0bf) field_cale_ev_pane_ParamLimits

0xc1c9,	// (0x0001a0bf) field_cale_ev_pane

0xc1e7,	// (0x0001a0dd) field_cale_ev_content_pane_ParamLimits

0xc1e7,	// (0x0001a0dd) field_cale_ev_content_pane

0xc1f3,	// (0x0001a0e9) field_cale_ev_pane_g1_ParamLimits

0xc1f3,	// (0x0001a0e9) field_cale_ev_pane_g1

0xc1ff,	// (0x0001a0f5) field_cale_ev_pane_g2_ParamLimits

0xc1ff,	// (0x0001a0f5) field_cale_ev_pane_g2

0xc217,	// (0x0001a10d) field_cale_ev_pane_g3_ParamLimits

0xc217,	// (0x0001a10d) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0001d5fc) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0001d5fc) field_cale_ev_pane_g

0xc22f,	// (0x0001a125) field_cale_ev_pane_t1_ParamLimits

0xc22f,	// (0x0001a125) field_cale_ev_pane_t1

0xc246,	// (0x0001a13c) field_cale_ev_content_pane_t1_ParamLimits

0xc246,	// (0x0001a13c) field_cale_ev_content_pane_t1

0xa900,	// (0x000187f6) bg_button_pane_cp01

0x9a36,	// (0x0001792c) listscroll_cale_week_pane_ParamLimits

0x115e,	// (0x0000f054) popup_toolbar_window_cp01

0x9bd0,	// (0x00017ac6) listscroll_cale_week_pane_t1_ParamLimits

0x9a36,	// (0x0001792c) listscroll_cale_day_pane_ParamLimits

0x266e,	// (0x00010564) popup_toolbar_window_cp02

0x9bd0,	// (0x00017ac6) listscroll_cale_day_pane_t1_ParamLimits

0x9a36,	// (0x0001792c) main_cale_month_pane_ParamLimits

0x3ba5,	// (0x00011a9b) popup_toolbar_window_cp03_ParamLimits

0x3ba5,	// (0x00011a9b) popup_toolbar_window_cp03

0x324a,	// (0x00011140) main_image_pane_g2_ParamLimits

0x324a,	// (0x00011140) main_image_pane_g2

0x325b,	// (0x00011151) main_image_pane_g3_ParamLimits

0x325b,	// (0x00011151) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0001d3ed) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0001d3ed) main_image_pane_g

0xaac3,	// (0x000189b9) main_image_pane_t1_ParamLimits

0x326c,	// (0x00011162) main_image_pane_t2_ParamLimits

0x326c,	// (0x00011162) main_image_pane_t2

0x327e,	// (0x00011174) main_image_pane_t3_ParamLimits

0x327e,	// (0x00011174) main_image_pane_t3

0x32a6,	// (0x0001119c) main_image_pane_t4_ParamLimits

0x32a6,	// (0x0001119c) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0001d3f4) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0001d3f4) main_image_pane_t

0x32c6,	// (0x000111bc) popup_image_details_window_cp01

0x32d0,	// (0x000111c6) popup_toobar_trans_pane_cp01_ParamLimits

0x32d0,	// (0x000111c6) popup_toobar_trans_pane_cp01

0x3a50,	// (0x00011946) popup_image_details_window_ParamLimits

0x3a50,	// (0x00011946) popup_image_details_window

0xbc4c,	// (0x00019b42) popup_image_focus_window

0x3e6b,	// (0x00011d61) camera2_autofocus_pane_ParamLimits

0x3e6b,	// (0x00011d61) camera2_autofocus_pane

0x9255,	// (0x0001714b) bg_popup_sub_pane_cp06

0xc264,	// (0x0001a15a) popup_image_focus_window_g1

0xc26c,	// (0x0001a162) popup_image_focus_window_g2

0xc274,	// (0x0001a16a) popup_image_focus_window_g3

0xc27c,	// (0x0001a172) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0001d603) popup_image_focus_window_g

0xc284,	// (0x0001a17a) popup_image_focus_window_t1

0xc292,	// (0x0001a188) popup_image_focus_window_t2

0xc2a2,	// (0x0001a198) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0001d60c) popup_image_focus_window_t

0xc2b0,	// (0x0001a1a6) camera2_autofocus_pane_g1

0x92c5,	// (0x000171bb) bg_tb_trans_pane_cp01

0xc2be,	// (0x0001a1b4) popup_image_details_window_g1

0xc2d1,	// (0x0001a1c7) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0001d61e) popup_image_details_window_g

0xc2fa,	// (0x0001a1f0) popup_image_details_window_t1

0xc30c,	// (0x0001a202) popup_image_details_window_t2

0xc325,	// (0x0001a21b) popup_image_details_window_t3

0xc339,	// (0x0001a22f) popup_image_details_window_t4

0xc354,	// (0x0001a24a) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0001d625) popup_image_details_window_t

0x9a08,	// (0x000178fe) bg_calc_paper_pane_ParamLimits

0x9255,	// (0x0001714b) grid_highlight_pane_cp013

0x9a1c,	// (0x00017912) list_calc_pane_ParamLimits

0x9a2e,	// (0x00017924) scroll_pane_cp024

0x9a36,	// (0x0001792c) bg_calc_display_pane_ParamLimits

0x0f8c,	// (0x0000ee82) calc_display_pane_t1_ParamLimits

0x0f9e,	// (0x0000ee94) calc_display_pane_t2_ParamLimits

0x9a42,	// (0x00017938) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0001d055) calc_display_pane_t_ParamLimits

0x105b,	// (0x0000ef51) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0001d072) cell_calc_pane_g

0x1064,	// (0x0000ef5a) cell_calc_pane_t1

0x9ab9,	// (0x000179af) grid_highlight_pane_cp02_ParamLimits

0x9acf,	// (0x000179c5) toolbar_button_pane_cp01_ParamLimits

0x9acf,	// (0x000179c5) toolbar_button_pane_cp01

0xab08,	// (0x000189fe) temp_image_control_pane_ParamLimits

0xab08,	// (0x000189fe) temp_image_control_pane

0x92c5,	// (0x000171bb) main_mp3_pane

0xc36e,	// (0x0001a264) temp_image_control_pane_g1_ParamLimits

0xc36e,	// (0x0001a264) temp_image_control_pane_g1

0xc37c,	// (0x0001a272) temp_image_control_pane_g2_ParamLimits

0xc37c,	// (0x0001a272) temp_image_control_pane_g2

0xc38e,	// (0x0001a284) temp_image_control_pane_g3_ParamLimits

0xc38e,	// (0x0001a284) temp_image_control_pane_g3

0x46bb,	// (0x000125b1) temp_image_control_pane_g4_ParamLimits

0x46bb,	// (0x000125b1) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0001d630) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0001d630) temp_image_control_pane_g

0xc36e,	// (0x0001a264) main_mp3_pane_g1

0x46ce,	// (0x000125c4) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0001d639) main_mp3_pane_g

0xc3d1,	// (0x0001a2c7) main_mp3_pane_t1

0x9c55,	// (0x00017b4b) main_camera_pane_g8_ParamLimits

0x9c55,	// (0x00017b4b) main_camera_pane_g8

0x183d,	// (0x0000f733) main_video_pane_g7_ParamLimits

0x183d,	// (0x0000f733) main_video_pane_g7

0xbd59,	// (0x00019c4f) main_camera2_pane_t7_ParamLimits

0xbd59,	// (0x00019c4f) main_camera2_pane_t7

0x9e3d,	// (0x00017d33) scroll_pane_cp025_ParamLimits

0x9e3d,	// (0x00017d33) scroll_pane_cp025

0x9e51,	// (0x00017d47) scroll_pane_cp026_ParamLimits

0x9e51,	// (0x00017d47) scroll_pane_cp026

0x9e60,	// (0x00017d56) wml_content_pane_ParamLimits

0x9255,	// (0x0001714b) main_touch_calib_pane

0x4798,	// (0x0001268e) main_touch_calib_pane_g1

0x47a4,	// (0x0001269a) main_touch_calib_pane_g2

0x47b0,	// (0x000126a6) main_touch_calib_pane_g3

0x47bc,	// (0x000126b2) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0001d657) main_touch_calib_pane_g

0x47c8,	// (0x000126be) main_touch_calib_pane_t1

0x47e2,	// (0x000126d8) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0001d660) main_touch_calib_pane_t

0xa6b0,	// (0x000185a6) mup_progress_pane_cp02

0xa6cf,	// (0x000185c5) navi_pane_g1

0xa731,	// (0x00018627) navi_pane_mp_t3

0x92c5,	// (0x000171bb) main_mp3_pane_ParamLimits

0x3be3,	// (0x00011ad9) navi_pane_ParamLimits

0xc36e,	// (0x0001a264) main_mp3_pane_g1_ParamLimits

0x46ce,	// (0x000125c4) main_mp3_pane_g2_ParamLimits

0x46dc,	// (0x000125d2) main_mp3_pane_g3_ParamLimits

0x46dc,	// (0x000125d2) main_mp3_pane_g3

0x46ea,	// (0x000125e0) main_mp3_pane_g4_ParamLimits

0x46ea,	// (0x000125e0) main_mp3_pane_g4

0xc39e,	// (0x0001a294) main_mp3_pane_g5_ParamLimits

0xc39e,	// (0x0001a294) main_mp3_pane_g5

0xc3ac,	// (0x0001a2a2) main_mp3_pane_g6_ParamLimits

0xc3ac,	// (0x0001a2a2) main_mp3_pane_g6

0xc3b9,	// (0x0001a2af) main_mp3_pane_g7_ParamLimits

0xc3b9,	// (0x0001a2af) main_mp3_pane_g7

0xc3c5,	// (0x0001a2bb) main_mp3_pane_g8_ParamLimits

0xc3c5,	// (0x0001a2bb) main_mp3_pane_g8

0xf743,	// (0x0001d639) main_mp3_pane_g_ParamLimits

0x46f6,	// (0x000125ec) main_mp3_pane_t2

0x4704,	// (0x000125fa) main_mp3_pane_t3

0xc3df,	// (0x0001a2d5) main_mp3_pane_t4

0xc3ed,	// (0x0001a2e3) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0001d64a) main_mp3_pane_t

0xc3fb,	// (0x0001a2f1) mup_progress_pane_cp01

0x9273,	// (0x00017169) aid_zoom_text_secondary2

0xc1b5,	// (0x0001a0ab) list_cale_ev2_pane

0xc1bd,	// (0x0001a0b3) scroll_pane_cp023_ParamLimits

0x4838,	// (0x0001272e) field_cale_ev2_pane_ParamLimits

0x4838,	// (0x0001272e) field_cale_ev2_pane

0x4858,	// (0x0001274e) field_cale_ev2_pane_g1_ParamLimits

0x4858,	// (0x0001274e) field_cale_ev2_pane_g1

0x4864,	// (0x0001275a) field_cale_ev2_pane_g2_ParamLimits

0x4864,	// (0x0001275a) field_cale_ev2_pane_g2

0x487c,	// (0x00012772) field_cale_ev2_pane_g3_ParamLimits

0x487c,	// (0x00012772) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0001d66b) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0001d66b) field_cale_ev2_pane_g

0x4894,	// (0x0001278a) field_cale_ev2_pane_t1_ParamLimits

0x4894,	// (0x0001278a) field_cale_ev2_pane_t1

0x48ab,	// (0x000127a1) field_cale_ev2_pane_t2_ParamLimits

0x48ab,	// (0x000127a1) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0001d674) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0001d674) field_cale_ev2_pane_t

0x30ff,	// (0x00010ff5) main_postcard_pane_g5_ParamLimits

0x30ff,	// (0x00010ff5) main_postcard_pane_g5

0x3115,	// (0x0001100b) main_postcard_pane_g6_ParamLimits

0x3115,	// (0x0001100b) main_postcard_pane_g6

0x1601,	// (0x0000f4f7) camera2_autofocus_pane_cp_ParamLimits

0x1601,	// (0x0000f4f7) camera2_autofocus_pane_cp

0x92c5,	// (0x000171bb) main_mup3_pane

0x48e0,	// (0x000127d6) main_mup3_pane_g1_ParamLimits

0x48e0,	// (0x000127d6) main_mup3_pane_g1

0x4902,	// (0x000127f8) main_mup3_pane_g2_ParamLimits

0x4902,	// (0x000127f8) main_mup3_pane_g2

0x4980,	// (0x00012876) main_mup3_pane_g3_ParamLimits

0x4980,	// (0x00012876) main_mup3_pane_g3

0x49c6,	// (0x000128bc) main_mup3_pane_g4_ParamLimits

0x49c6,	// (0x000128bc) main_mup3_pane_g4

0x4a0c,	// (0x00012902) main_mup3_pane_g5_ParamLimits

0x4a0c,	// (0x00012902) main_mup3_pane_g5

0x4a52,	// (0x00012948) main_mup3_pane_g6_ParamLimits

0x4a52,	// (0x00012948) main_mup3_pane_g6

0xc40f,	// (0x0001a305) main_mup3_pane_g7_ParamLimits

0xc40f,	// (0x0001a305) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0001d684) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0001d684) main_mup3_pane_g

0x4ad0,	// (0x000129c6) main_mup3_pane_t1_ParamLimits

0x4ad0,	// (0x000129c6) main_mup3_pane_t1

0x4b44,	// (0x00012a3a) main_mup3_pane_t2_ParamLimits

0x4b44,	// (0x00012a3a) main_mup3_pane_t2

0x4c18,	// (0x00012b0e) main_mup3_pane_t4_ParamLimits

0x4c18,	// (0x00012b0e) main_mup3_pane_t4

0x4c6e,	// (0x00012b64) main_mup3_pane_t5_ParamLimits

0x4c6e,	// (0x00012b64) main_mup3_pane_t5

0x4d2a,	// (0x00012c20) main_mup3_pane_t6_ParamLimits

0x4d2a,	// (0x00012c20) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0001d695) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0001d695) main_mup3_pane_t

0x4de2,	// (0x00012cd8) mup3_progress_pane_ParamLimits

0x4de2,	// (0x00012cd8) mup3_progress_pane

0x4e78,	// (0x00012d6e) popup_mup3_control_window_ParamLimits

0x4e78,	// (0x00012d6e) popup_mup3_control_window

0xc41d,	// (0x0001a313) popup_mup3_text_window

0x4eaa,	// (0x00012da0) mup3_progress_pane_t1

0x4ec9,	// (0x00012dbf) mup3_progress_pane_t2

0xc425,	// (0x0001a31b) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0001d6a2) mup3_progress_pane_t

0xc442,	// (0x0001a338) mup_progress_pane_cp03

0x9255,	// (0x0001714b) bg_tb_trans_pane_cp04

0x4ee8,	// (0x00012dde) mup3_volume_pane

0x4ef0,	// (0x00012de6) popup_mup3_control_window_g1

0x4ef9,	// (0x00012def) mup3_volume_pane_g1

0x4f02,	// (0x00012df8) mup3_volume_pane_g2

0x4f0b,	// (0x00012e01) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0001d6a9) mup3_volume_pane_g

0x9255,	// (0x0001714b) bg_tb_trans_pane_cp03

0xc452,	// (0x0001a348) popup_mup3_text_window_g1

0xc45a,	// (0x0001a350) popup_mup3_text_window_t1

0x9a90,	// (0x00017986) list_calc_item_pane_g1_ParamLimits

0xbe41,	// (0x00019d37) mup_volume_pane_cp_g1

0x47fc,	// (0x000126f2) main_touch_calib_pane_t3

0x4810,	// (0x00012706) main_touch_calib_pane_t4

0x4824,	// (0x0001271a) main_touch_calib_pane_t5

0x925f,	// (0x00017155) aid_cell_size_toolbar2

0x9267,	// (0x0001715d) aid_popup3_width_pane

0x9273,	// (0x00017169) aid_zoom_text_msg_primary

0x15d8,	// (0x0000f4ce) vorec_t7

0x9a54,	// (0x0001794a) bg_calc_paper_pane_g1_ParamLimits

0x9a60,	// (0x00017956) bg_calc_paper_pane_g2_ParamLimits

0x9a6c,	// (0x00017962) bg_calc_paper_pane_g3_ParamLimits

0x9a78,	// (0x0001796e) bg_calc_paper_pane_g4_ParamLimits

0x9a84,	// (0x0001797a) bg_calc_paper_pane_g5_ParamLimits

0x0fe5,	// (0x0000eedb) bg_calc_paper_pane_g6_ParamLimits

0x0ff4,	// (0x0000eeea) bg_calc_paper_pane_g7_ParamLimits

0x1003,	// (0x0000eef9) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0001d05c) bg_calc_paper_pane_g_ParamLimits

0x1016,	// (0x0000ef0c) calc_bg_paper_pane_g9_ParamLimits

0x174f,	// (0x0000f645) image_qvga_pane_ParamLimits

0x174f,	// (0x0000f645) image_qvga_pane

0x9941,	// (0x00017837) bg_popup_sub_pane_cp04_ParamLimits

0xaa3f,	// (0x00018935) popup_mup_playback_window_g1_ParamLimits

0xaa4b,	// (0x00018941) popup_mup_playback_window_t1_ParamLimits

0xaa60,	// (0x00018956) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0001d3e8) popup_mup_playback_window_t_ParamLimits

0x435e,	// (0x00012254) main_mup2_pane_g3_ParamLimits

0x435e,	// (0x00012254) main_mup2_pane_g3

0x1a9f,	// (0x0000f995) popup_toolbar_window_cp04

0xae42,	// (0x00018d38) popup_call2_audio_second_window_g3_ParamLimits

0xae42,	// (0x00018d38) popup_call2_audio_second_window_g3

0xb24c,	// (0x00019142) popup_call2_audio_first_window_g4_ParamLimits

0xb24c,	// (0x00019142) popup_call2_audio_first_window_g4

0xb8cb,	// (0x000197c1) popup_call2_audio_in_window_g4_ParamLimits

0xb8cb,	// (0x000197c1) popup_call2_audio_in_window_g4

0x322c,	// (0x00011122) aid_area_sk_bg_cut_ParamLimits

0x322c,	// (0x00011122) aid_area_sk_bg_cut

0xaa75,	// (0x0001896b) aid_area_sk_bg_cut_2_ParamLimits

0xaa75,	// (0x0001896b) aid_area_sk_bg_cut_2

0x4661,	// (0x00012557) aid_placing_details_win

0x4669,	// (0x0001255f) aid_placing_details_win_2

0xc2b0,	// (0x0001a1a6) camera2_autofocus_pane_g1_ParamLimits

0x0bda,	// (0x0000ead0) popup_fixed_preview_cale_window_ParamLimits

0x0bda,	// (0x0000ead0) popup_fixed_preview_cale_window

0xa789,	// (0x0001867f) navi_slider_pane_g3

0xa792,	// (0x00018688) navi_slider_pane_g4

0xa79b,	// (0x00018691) navi_slider_pane_g5

0xa789,	// (0x0001867f) navi_slider_pane_g6

0xa7a4,	// (0x0001869a) navi_slider_pane_g7

0xa8c5,	// (0x000187bb) mup_scale_pane_g3

0xa8ce,	// (0x000187c4) mup_scale_pane_g4

0xa8d7,	// (0x000187cd) mup_scale_pane_g5

0x2f4c,	// (0x00010e42) mup_scale_pane_g6

0x2f55,	// (0x00010e4b) mup_scale_pane_g7

0xa789,	// (0x0001867f) cams2_slider_pane_g3

0xbef6,	// (0x00019dec) cams2_slider_pane_g4

0xbefe,	// (0x00019df4) cams2_slider_pane_g5

0xa789,	// (0x0001867f) cams2_slider_pane_g6

0xbf06,	// (0x00019dfc) cams2_slider_pane_g7

0xc132,	// (0x0001a028) camera2_autofocus_pane_cp_g1

0xc468,	// (0x0001a35e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc468,	// (0x0001a35e) bg_popup_preview_window_pane_cp02

0xc474,	// (0x0001a36a) list_fp_cale_pane_ParamLimits

0xc474,	// (0x0001a36a) list_fp_cale_pane

0xc480,	// (0x0001a376) popup_fixed_preview_cale_window_t1_ParamLimits

0xc480,	// (0x0001a376) popup_fixed_preview_cale_window_t1

0x4f14,	// (0x00012e0a) popup_fixed_preview_cale_window_t2_ParamLimits

0x4f14,	// (0x00012e0a) popup_fixed_preview_cale_window_t2

0x4f29,	// (0x00012e1f) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f29,	// (0x00012e1f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0001d6b0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0001d6b0) popup_fixed_preview_cale_window_t

0x4f3e,	// (0x00012e34) list_single_fp_cale_pane_ParamLimits

0x4f3e,	// (0x00012e34) list_single_fp_cale_pane

0xc49e,	// (0x0001a394) list_single_fp_cale_pane_g1_ParamLimits

0xc49e,	// (0x0001a394) list_single_fp_cale_pane_g1

0xc4aa,	// (0x0001a3a0) list_single_fp_cale_pane_g2_ParamLimits

0xc4aa,	// (0x0001a3a0) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0001d6b7) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0001d6b7) list_single_fp_cale_pane_g

0xc4c3,	// (0x0001a3b9) list_single_fp_cale_pane_t1_ParamLimits

0xc4c3,	// (0x0001a3b9) list_single_fp_cale_pane_t1

0xc4d5,	// (0x0001a3cb) list_single_fp_cale_pane_t2_ParamLimits

0xc4d5,	// (0x0001a3cb) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0001d6be) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0001d6be) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9255,	// (0x0001714b) main_dialer_pane

0x4f53,	// (0x00012e49) aid_cell_size_keypad

0x4f5d,	// (0x00012e53) dialer_ne_pane

0x4f65,	// (0x00012e5b) grid_dialer_command_1_pane

0x4f6d,	// (0x00012e63) grid_dialer_command_2_pane

0x4f75,	// (0x00012e6b) grid_dialer_keypad_pane

0x4f87,	// (0x00012e7d) bg_popup_call_pane_cp06_ParamLimits

0x4f87,	// (0x00012e7d) bg_popup_call_pane_cp06

0x4f93,	// (0x00012e89) dialer_ne_clear_pane_ParamLimits

0x4f93,	// (0x00012e89) dialer_ne_clear_pane

0xc508,	// (0x0001a3fe) dialer_ne_pane_g1

0xc510,	// (0x0001a406) dialer_ne_pane_t1_ParamLimits

0xc510,	// (0x0001a406) dialer_ne_pane_t1

0x4f9f,	// (0x00012e95) dialer_ne_pane_t2_ParamLimits

0x4f9f,	// (0x00012e95) dialer_ne_pane_t2

0x4fc9,	// (0x00012ebf) dialer_ne_pane_t3_ParamLimits

0x4fc9,	// (0x00012ebf) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0001d6c3) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0001d6c3) dialer_ne_pane_t

0x4ff9,	// (0x00012eef) dialer_ne_pane_t3_copy1_ParamLimits

0x4ff9,	// (0x00012eef) dialer_ne_pane_t3_copy1

0x5028,	// (0x00012f1e) cell_dialer_keypad_pane_ParamLimits

0x5028,	// (0x00012f1e) cell_dialer_keypad_pane

0x503f,	// (0x00012f35) cell_dialer_command_1_pane_ParamLimits

0x503f,	// (0x00012f35) cell_dialer_command_1_pane

0x5055,	// (0x00012f4b) cell_dialer_command_2_pane_ParamLimits

0x5055,	// (0x00012f4b) cell_dialer_command_2_pane

0xc522,	// (0x0001a418) bg_button_pane_cp02_ParamLimits

0xc522,	// (0x0001a418) bg_button_pane_cp02

0x5064,	// (0x00012f5a) cell_dialer_keypad_pane_g1_ParamLimits

0x5064,	// (0x00012f5a) cell_dialer_keypad_pane_g1

0xc522,	// (0x0001a418) bg_button_pane_cp03_ParamLimits

0xc522,	// (0x0001a418) bg_button_pane_cp03

0x5078,	// (0x00012f6e) cell_dialer_command_1_pane_g1_ParamLimits

0x5078,	// (0x00012f6e) cell_dialer_command_1_pane_g1

0xc52e,	// (0x0001a424) bg_button_pane_cp04

0x508c,	// (0x00012f82) cell_dialer_command_2_pane_g1

0xa76f,	// (0x00018665) bg_button_pane_cp06

0xc536,	// (0x0001a42c) dialer_ne_clear_pane_g1

0x2a90,	// (0x00010986) navi_pane_g2

0x2abe,	// (0x000109b4) navi_pane_g3

0x0002,

0xf3f5,	// (0x0001d2eb) navi_pane_g

0x2ae7,	// (0x000109dd) navi_pane_mv_g2

0x2b0e,	// (0x00010a04) navi_pane_mv_g5

0x2b16,	// (0x00010a0c) navi_pane_mv_t1

0x9a36,	// (0x0001792c) main_clock2_pane

0x50c4,	// (0x00012fba) main_clock2_list_pane_ParamLimits

0x50c4,	// (0x00012fba) main_clock2_list_pane

0x50fc,	// (0x00012ff2) main_clock2_pane_t1_ParamLimits

0x50fc,	// (0x00012ff2) main_clock2_pane_t1

0x5138,	// (0x0001302e) main_clock2_pane_t2_ParamLimits

0x5138,	// (0x0001302e) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0001d6ca) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0001d6ca) main_clock2_pane_t

0x51d5,	// (0x000130cb) popup_clock_analogue_window_cp03_ParamLimits

0x51d5,	// (0x000130cb) popup_clock_analogue_window_cp03

0x51fa,	// (0x000130f0) popup_clock_digital_window_cp02_ParamLimits

0x51fa,	// (0x000130f0) popup_clock_digital_window_cp02

0x526b,	// (0x00013161) main_clock2_list_single_pane_ParamLimits

0x526b,	// (0x00013161) main_clock2_list_single_pane

0xa76f,	// (0x00018665) list_highlight_pane_cp05

0xc53e,	// (0x0001a434) main_clock2_list_single_pane_t1

0x1a9f,	// (0x0000f995) popup_toolbar_window_cp04_ParamLimits

0x468b,	// (0x00012581) camera2_autofocus_pane_g2_ParamLimits

0x468b,	// (0x00012581) camera2_autofocus_pane_g2

0x4697,	// (0x0001258d) camera2_autofocus_pane_g3_ParamLimits

0x4697,	// (0x0001258d) camera2_autofocus_pane_g3

0x46a3,	// (0x00012599) camera2_autofocus_pane_g4_ParamLimits

0x46a3,	// (0x00012599) camera2_autofocus_pane_g4

0x46af,	// (0x000125a5) camera2_autofocus_pane_g5_ParamLimits

0x46af,	// (0x000125a5) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0001d613) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0001d613) camera2_autofocus_pane_g

0x48c0,	// (0x000127b6) camera2_autofocus_pane_cp_g2

0x48c8,	// (0x000127be) camera2_autofocus_pane_cp_g3

0x48d0,	// (0x000127c6) camera2_autofocus_pane_cp_g4

0x48d8,	// (0x000127ce) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0001d679) camera2_autofocus_pane_cp_g

0x4f7f,	// (0x00012e75) popup_dialer_spcha_window

0x9255,	// (0x0001714b) bg_popup_sub_pane_cp07

0xc54c,	// (0x0001a442) list_spcha_pane

0xc554,	// (0x0001a44a) list_single_spcha_pane_ParamLimits

0xc554,	// (0x0001a44a) list_single_spcha_pane

0x9255,	// (0x0001714b) list_highlight_pane_cp06

0xc565,	// (0x0001a45b) list_single_spcha_pane_t1

0xb675,	// (0x0001956b) popup_call2_audio_out_window_g4_ParamLimits

0xb675,	// (0x0001956b) popup_call2_audio_out_window_g4

0x9255,	// (0x0001714b) main_imed2_pane

0xbc54,	// (0x00019b4a) popup_imed_adjust2_window

0x3a68,	// (0x0001195e) popup_imed_trans_window_ParamLimits

0x3a68,	// (0x0001195e) popup_imed_trans_window

0xbf70,	// (0x00019e66) popup_blid_sat_info2_window_t1

0xbf7e,	// (0x00019e74) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0001d5a8) popup_blid_sat_info2_window_t

0x5315,	// (0x0001320b) aid_size_cell_colour_35

0x5335,	// (0x0001322b) aid_size_cell_colour_112

0x5355,	// (0x0001324b) aid_size_cell_effect

0xbc2c,	// (0x00019b22) bg_tb_trans_pane_cp02

0xa1ca,	// (0x000180c0) heading_imed_pane

0x5375,	// (0x0001326b) listscroll_imed_pane

0xc573,	// (0x0001a469) heading_imed_pane_g1

0xc57b,	// (0x0001a471) heading_imed_pane_t1

0xc589,	// (0x0001a47f) grid_imed_colour_35_pane_ParamLimits

0xc589,	// (0x0001a47f) grid_imed_colour_35_pane

0x5381,	// (0x00013277) grid_imed_effect_pane

0xc5a0,	// (0x0001a496) list_imed_aspect_pane

0x5397,	// (0x0001328d) scroll_pane_cp027_ParamLimits

0x5397,	// (0x0001328d) scroll_pane_cp027

0x53a8,	// (0x0001329e) cell_imed_effect_pane_ParamLimits

0x53a8,	// (0x0001329e) cell_imed_effect_pane

0xc5a8,	// (0x0001a49e) cell_imed_colour_pane_ParamLimits

0xc5a8,	// (0x0001a49e) cell_imed_colour_pane

0xc5ea,	// (0x0001a4e0) cell_imed_colour_pane_g1_ParamLimits

0xc5ea,	// (0x0001a4e0) cell_imed_colour_pane_g1

0xc5fb,	// (0x0001a4f1) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5fb,	// (0x0001a4f1) hgihlgiht_grid_pane_cp016

0x53cf,	// (0x000132c5) cell_imed_effect_pane_g1

0x53d7,	// (0x000132cd) grid_highlight_pane_cp017

0xc60c,	// (0x0001a502) list_imed_single_pane_ParamLimits

0xc60c,	// (0x0001a502) list_imed_single_pane

0x9255,	// (0x0001714b) list_highlight_pane_cp07

0xc621,	// (0x0001a517) list_imed_aspect_pane_comp1_t1

0xbc2c,	// (0x00019b22) bg_tb_trans_pane_cp05

0xc643,	// (0x0001a539) popup_imed_adjust2_window_g1

0xc66a,	// (0x0001a560) popup_imed_adjust2_window_t1

0xc682,	// (0x0001a578) slider_imed_adjust_pane

0xc696,	// (0x0001a58c) slider_imed_adjust_pane_g1

0xc6a6,	// (0x0001a59c) slider_imed_adjust_pane_g2

0xc6b6,	// (0x0001a5ac) slider_imed_adjust_pane_g3

0xc6c7,	// (0x0001a5bd) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0001d6e7) slider_imed_adjust_pane_g

0x53e0,	// (0x000132d6) aid_size_cell_clipart2

0x53ec,	// (0x000132e2) grid_imed_clipart_pane

0xc6d8,	// (0x0001a5ce) scroll_pane_cp031

0x53f6,	// (0x000132ec) cell_imed_clipart_pane_ParamLimits

0x53f6,	// (0x000132ec) cell_imed_clipart_pane

0x5418,	// (0x0001330e) cell_imed_clipart_pane_g1

0x9255,	// (0x0001714b) grid_highlight_pane_cp014

0x50d9,	// (0x00012fcf) main_clock2_pane_g1_ParamLimits

0x50d9,	// (0x00012fcf) main_clock2_pane_g1

0x5216,	// (0x0001310c) aid_call2_pane_cp10

0x5228,	// (0x0001311e) aid_call_pane_cp10

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g1

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g2

0x523a,	// (0x00013130) popup_clock_analogue_window_cp10_g3

0x523a,	// (0x00013130) popup_clock_analogue_window_cp10_g4

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0001d6d5) popup_clock_analogue_window_cp10_g

0x524c,	// (0x00013142) popup_clock_analogue_window_cp10_t1

0x527d,	// (0x00013173) clock_digital_number_pane_cp10_ParamLimits

0x527d,	// (0x00013173) clock_digital_number_pane_cp10

0x5295,	// (0x0001318b) clock_digital_number_pane_cp11_ParamLimits

0x5295,	// (0x0001318b) clock_digital_number_pane_cp11

0x52ad,	// (0x000131a3) clock_digital_number_pane_cp12_ParamLimits

0x52ad,	// (0x000131a3) clock_digital_number_pane_cp12

0x52c5,	// (0x000131bb) clock_digital_number_pane_cp13_ParamLimits

0x52c5,	// (0x000131bb) clock_digital_number_pane_cp13

0x52dd,	// (0x000131d3) clock_digital_separator_pane_cp10_ParamLimits

0x52dd,	// (0x000131d3) clock_digital_separator_pane_cp10

0x52f5,	// (0x000131eb) popup_clock_digital_window_cp02_t1_ParamLimits

0x52f5,	// (0x000131eb) popup_clock_digital_window_cp02_t1

0x9939,	// (0x0001782f) clock_digital_number_pane_cp10_g1

0x9939,	// (0x0001782f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0001d6f0) clock_digital_number_pane_cp10_g

0x9939,	// (0x0001782f) clock_digital_separator_pane_cp10_g1

0x9939,	// (0x0001782f) clock_digital_separator_pane_g2_cp10

0xa73f,	// (0x00018635) navi_pane_vded_g4

0xa748,	// (0x0001863e) navi_pane_vded_g5

0xa751,	// (0x00018647) navi_pane_vded_t1

0x9255,	// (0x0001714b) main_vded_pane

0x5421,	// (0x00013317) main_vded_pane_g1

0x542b,	// (0x00013321) main_vded_pane_g2

0x5435,	// (0x0001332b) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0001d6f5) main_vded_pane_g

0x543f,	// (0x00013335) main_vded_pane_t1

0x544d,	// (0x00013343) main_vded_pane_t2

0x0001,

0xf806,	// (0x0001d6fc) main_vded_pane_t

0x545b,	// (0x00013351) vded_slider_pane

0x5463,	// (0x00013359) vded_video_pane

0xc6e0,	// (0x0001a5d6) vded_video_pane_g1

0x546b,	// (0x00013361) vded_video_pane_g2

0xc132,	// (0x0001a028) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0001d701) vded_video_pane_g

0xc6ea,	// (0x0001a5e0) vded_slider_pane_g1

0xbe41,	// (0x00019d37) vded_slider_pane_g2

0xc6f3,	// (0x0001a5e9) vded_slider_pane_g3

0xc6fc,	// (0x0001a5f2) vded_slider_pane_g4

0xc705,	// (0x0001a5fb) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0001d708) vded_slider_pane_g

0x4e60,	// (0x00012d56) mup3_rocker_pane_ParamLimits

0x4e60,	// (0x00012d56) mup3_rocker_pane

0x5474,	// (0x0001336a) mup3_control_keys_pane_g1

0x547c,	// (0x00013372) mup3_control_keys_pane_g2

0x5484,	// (0x0001337a) mup3_control_keys_pane_g3

0x548c,	// (0x00013382) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0001d713) mup3_control_keys_pane_g

0x0c11,	// (0x0000eb07) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c11,	// (0x0000eb07) popup_toolbar2_fixed_window_cp01

0x4e94,	// (0x00012d8a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e94,	// (0x00012d8a) popup_toolbar2_fixed_window_cp02

0xafb4,	// (0x00018eaa) popup_call2_audio_second_window_t4_ParamLimits

0xafb4,	// (0x00018eaa) popup_call2_audio_second_window_t4

0xb4e2,	// (0x000193d8) popup_call2_audio_first_window_t6_ParamLimits

0xb4e2,	// (0x000193d8) popup_call2_audio_first_window_t6

0xb778,	// (0x0001966e) popup_call2_audio_out_window_t6_ParamLimits

0xb778,	// (0x0001966e) popup_call2_audio_out_window_t6

0x9255,	// (0x0001714b) main_vitu_pane

0x549c,	// (0x00013392) aid_size_cell_itu_ParamLimits

0x549c,	// (0x00013392) aid_size_cell_itu

0x92c5,	// (0x000171bb) bg_popup_window_pane_cp08_ParamLimits

0x92c5,	// (0x000171bb) bg_popup_window_pane_cp08

0x54b2,	// (0x000133a8) field_vitu_entry_pane_ParamLimits

0x54b2,	// (0x000133a8) field_vitu_entry_pane

0x54c9,	// (0x000133bf) grid_vitu_function_pane_ParamLimits

0x54c9,	// (0x000133bf) grid_vitu_function_pane

0x54e4,	// (0x000133da) grid_vitu_itu_pane_ParamLimits

0x54e4,	// (0x000133da) grid_vitu_itu_pane

0x5502,	// (0x000133f8) cell_vitu_itu_pane_ParamLimits

0x5502,	// (0x000133f8) cell_vitu_itu_pane

0x5524,	// (0x0001341a) cell_vitu_function_pane_ParamLimits

0x5524,	// (0x0001341a) cell_vitu_function_pane

0x92c5,	// (0x000171bb) bg_popup_sub_pane_cp08_ParamLimits

0x92c5,	// (0x000171bb) bg_popup_sub_pane_cp08

0x553d,	// (0x00013433) field_vitu_entry_pane_t1_ParamLimits

0x553d,	// (0x00013433) field_vitu_entry_pane_t1

0xc726,	// (0x0001a61c) field_vitu_entry_pane_t2_ParamLimits

0xc726,	// (0x0001a61c) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0001d721) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0001d721) field_vitu_entry_pane_t

0xc743,	// (0x0001a639) bg_button_pane_cp05_ParamLimits

0xc743,	// (0x0001a639) bg_button_pane_cp05

0x555b,	// (0x00013451) cell_vitu_itu_pane_g1

0x5573,	// (0x00013469) cell_vitu_itu_pane_t1_ParamLimits

0x5573,	// (0x00013469) cell_vitu_itu_pane_t1

0x5585,	// (0x0001347b) cell_vitu_itu_pane_t2_ParamLimits

0x5585,	// (0x0001347b) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0001d726) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0001d726) cell_vitu_itu_pane_t

0xc751,	// (0x0001a647) bg_button_pane_cp07

0x55ba,	// (0x000134b0) cell_vitu_function_pane_g1

0x99c8,	// (0x000178be) main_calc_pane_g1

0x0a51,	// (0x0000e947) aid_visual_content_pane

0x9255,	// (0x0001714b) main_vradio_pane

0x55c3,	// (0x000134b9) main_vradio_pane_g1_ParamLimits

0x55c3,	// (0x000134b9) main_vradio_pane_g1

0xc75b,	// (0x0001a651) main_vradio_pane_g2_ParamLimits

0xc75b,	// (0x0001a651) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0001d72d) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0001d72d) main_vradio_pane_g

0x55dc,	// (0x000134d2) main_vradio_pane_t1_ParamLimits

0x55dc,	// (0x000134d2) main_vradio_pane_t1

0x55f1,	// (0x000134e7) main_vradio_pane_t2_ParamLimits

0x55f1,	// (0x000134e7) main_vradio_pane_t2

0xc768,	// (0x0001a65e) main_vradio_pane_t3_ParamLimits

0xc768,	// (0x0001a65e) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0001d732) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0001d732) main_vradio_pane_t

0x5606,	// (0x000134fc) vradio_rocker_control_pane_ParamLimits

0x5606,	// (0x000134fc) vradio_rocker_control_pane

0x5618,	// (0x0001350e) vradio_station_info_pane_ParamLimits

0x5618,	// (0x0001350e) vradio_station_info_pane

0xc77c,	// (0x0001a672) vradio_frequency_info_pane_ParamLimits

0xc77c,	// (0x0001a672) vradio_frequency_info_pane

0xc132,	// (0x0001a028) vradio_station_info_pane_g1

0xc78b,	// (0x0001a681) vradio_station_info_pane_t1_ParamLimits

0xc78b,	// (0x0001a681) vradio_station_info_pane_t1

0xc7ad,	// (0x0001a6a3) vradio_station_info_pane_t2_ParamLimits

0xc7ad,	// (0x0001a6a3) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0001d739) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0001d739) vradio_station_info_pane_t

0xc7bf,	// (0x0001a6b5) vradio_tuning_pane

0xc7c7,	// (0x0001a6bd) vradio_rocker_control_pane_g1

0xc7cf,	// (0x0001a6c5) vradio_rocker_control_pane_g2

0xc7d7,	// (0x0001a6cd) vradio_rocker_control_pane_g3

0xc7df,	// (0x0001a6d5) vradio_rocker_control_pane_g4

0xc7e7,	// (0x0001a6dd) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0001d73e) vradio_rocker_control_pane_g

0x562a,	// (0x00013520) vradio_frequency_info_pane_g1

0xc7ef,	// (0x0001a6e5) vradio_frequency_info_pane_t1_ParamLimits

0xc7ef,	// (0x0001a6e5) vradio_frequency_info_pane_t1

0x5634,	// (0x0001352a) vradio_tuning_pane_g1

0x563f,	// (0x00013535) vradio_tuning_pane_t1

0x9283,	// (0x00017179) area_side_right_pane_ParamLimits

0x9283,	// (0x00017179) area_side_right_pane

0xbbf3,	// (0x00019ae9) status_small_pane_g1

0xbbfb,	// (0x00019af1) status_small_pane_g2

0xbc04,	// (0x00019afa) status_small_pane_g3

0xbc0d,	// (0x00019b03) status_small_pane_g4

0x0003,

0xf608,	// (0x0001d4fe) status_small_pane_g

0xbc16,	// (0x00019b0c) status_small_pane_t1

0x9255,	// (0x0001714b) main_video3_pane

0xc803,	// (0x0001a6f9) cams_zoom_vslider_pane

0xc80b,	// (0x0001a701) image3_wide_pane_ParamLimits

0xc80b,	// (0x0001a701) image3_wide_pane

0xc825,	// (0x0001a71b) image3_wide_small_pane

0xc831,	// (0x0001a727) main_video3_pane_g1_ParamLimits

0xc831,	// (0x0001a727) main_video3_pane_g1

0xc84d,	// (0x0001a743) main_video3_pane_g2_ParamLimits

0xc84d,	// (0x0001a743) main_video3_pane_g2

0x0001,

0xf853,	// (0x0001d749) main_video3_pane_g_ParamLimits

0xf853,	// (0x0001d749) main_video3_pane_g

0xc869,	// (0x0001a75f) main_video3_pane_t1_ParamLimits

0xc869,	// (0x0001a75f) main_video3_pane_t1

0xc894,	// (0x0001a78a) main_video3_pane_t2_ParamLimits

0xc894,	// (0x0001a78a) main_video3_pane_t2

0xc8bf,	// (0x0001a7b5) main_video3_pane_t3_ParamLimits

0xc8bf,	// (0x0001a7b5) main_video3_pane_t3

0x0002,

0xf858,	// (0x0001d74e) main_video3_pane_t_ParamLimits

0xf858,	// (0x0001d74e) main_video3_pane_t

0xc8ec,	// (0x0001a7e2) cams_zoom_vslider_pane_g1

0xc8f5,	// (0x0001a7eb) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0001d755) cams_zoom_vslider_pane_g

0xc8fd,	// (0x0001a7f3) small_slider_vertical_pane

0xc132,	// (0x0001a028) small_slider_vertical_pane_g1

0xc132,	// (0x0001a028) small_slider_vertical_pane_g2

0xc905,	// (0x0001a7fb) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0001d75a) small_slider_vertical_pane_g

0x9255,	// (0x0001714b) main_hwr_training_pane

0xc90e,	// (0x0001a804) hwr_training_instruct_pane_ParamLimits

0xc90e,	// (0x0001a804) hwr_training_instruct_pane

0x564e,	// (0x00013544) hwr_training_navi_pane_ParamLimits

0x564e,	// (0x00013544) hwr_training_navi_pane

0x566d,	// (0x00013563) hwr_training_write_pane_ParamLimits

0x566d,	// (0x00013563) hwr_training_write_pane

0x9255,	// (0x0001714b) bg_frame_shadow_pane

0xc945,	// (0x0001a83b) hwr_training_write_pane_g1

0xc94d,	// (0x0001a843) hwr_training_write_pane_g2

0xc955,	// (0x0001a84b) hwr_training_write_pane_g3

0xc95d,	// (0x0001a853) hwr_training_write_pane_g4

0xc965,	// (0x0001a85b) hwr_training_write_pane_g5

0xc96d,	// (0x0001a863) hwr_training_write_pane_g6

0xc975,	// (0x0001a86b) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0001d761) hwr_training_write_pane_g

0xc97d,	// (0x0001a873) hwr_training_navi_pane_g1_ParamLimits

0xc97d,	// (0x0001a873) hwr_training_navi_pane_g1

0xc98f,	// (0x0001a885) hwr_training_navi_pane_g2_ParamLimits

0xc98f,	// (0x0001a885) hwr_training_navi_pane_g2

0xc9a1,	// (0x0001a897) hwr_training_navi_pane_g3_ParamLimits

0xc9a1,	// (0x0001a897) hwr_training_navi_pane_g3

0xc9b1,	// (0x0001a8a7) hwr_training_navi_pane_g4_ParamLimits

0xc9b1,	// (0x0001a8a7) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0001d770) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0001d770) hwr_training_navi_pane_g

0xc9be,	// (0x0001a8b4) hwr_training_navi_pane_t1

0x56b5,	// (0x000135ab) list_single_hwr_training_instruct_pane_ParamLimits

0x56b5,	// (0x000135ab) list_single_hwr_training_instruct_pane

0xc9cc,	// (0x0001a8c2) list_single_hwr_training_instruct_pane_t1

0xc072,	// (0x00019f68) bg_frame_shadow_pane_g1

0xc9db,	// (0x0001a8d1) bg_frame_shadow_pane_g2

0xc9e3,	// (0x0001a8d9) bg_frame_shadow_pane_g3

0xc9eb,	// (0x0001a8e1) bg_frame_shadow_pane_g4

0xc9f3,	// (0x0001a8e9) bg_frame_shadow_pane_g5

0xc9fb,	// (0x0001a8f1) bg_frame_shadow_pane_g6

0xca03,	// (0x0001a8f9) bg_frame_shadow_pane_g7

0x9b13,	// (0x00017a09) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0001d77b) bg_frame_shadow_pane_g

0x9255,	// (0x0001714b) main_video_tele_dialer_pane

0x56ca,	// (0x000135c0) aid_size_cell_video_keypad_ParamLimits

0x56ca,	// (0x000135c0) aid_size_cell_video_keypad

0x56e4,	// (0x000135da) grid_video_dialer_keypad_pane_ParamLimits

0x56e4,	// (0x000135da) grid_video_dialer_keypad_pane

0x572e,	// (0x00013624) video_down_pane_cp_ParamLimits

0x572e,	// (0x00013624) video_down_pane_cp

0x573e,	// (0x00013634) cell_video_dialer_keypad_pane_ParamLimits

0x573e,	// (0x00013634) cell_video_dialer_keypad_pane

0xca27,	// (0x0001a91d) bg_button_pane_cp08_ParamLimits

0xca27,	// (0x0001a91d) bg_button_pane_cp08

0x5760,	// (0x00013656) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5760,	// (0x00013656) cell_video_dialer_keypad_pane_g1

0x4e4a,	// (0x00012d40) mup3_rocker2_pane_ParamLimits

0x4e4a,	// (0x00012d40) mup3_rocker2_pane

0xc132,	// (0x0001a028) mup3_rocker2_pane_g1

0x3949,	// (0x0001183f) main_dialer2_pane

0x9255,	// (0x0001714b) main_mp4_pane

0xca3b,	// (0x0001a931) main_mp4_pane_g1_ParamLimits

0xca3b,	// (0x0001a931) main_mp4_pane_g1

0xca3b,	// (0x0001a931) main_mp4_pane_g2_ParamLimits

0xca3b,	// (0x0001a931) main_mp4_pane_g2

0x579a,	// (0x00013690) main_mp4_pane_g3_ParamLimits

0x579a,	// (0x00013690) main_mp4_pane_g3

0xca49,	// (0x0001a93f) main_mp4_pane_g4_ParamLimits

0xca49,	// (0x0001a93f) main_mp4_pane_g4

0xca71,	// (0x0001a967) main_mp4_pane_g5_ParamLimits

0xca71,	// (0x0001a967) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0001d79b) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0001d79b) main_mp4_pane_g

0xcac1,	// (0x0001a9b7) main_mp4_pane_t1_ParamLimits

0xcac1,	// (0x0001a9b7) main_mp4_pane_t1

0xcb1d,	// (0x0001aa13) main_mp4_pane_t2_ParamLimits

0xcb1d,	// (0x0001aa13) main_mp4_pane_t2

0xcb6f,	// (0x0001aa65) main_mp4_pane_t3_ParamLimits

0xcb6f,	// (0x0001aa65) main_mp4_pane_t3

0xcb8f,	// (0x0001aa85) main_mp4_pane_t4_ParamLimits

0xcb8f,	// (0x0001aa85) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0001d7a8) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0001d7a8) main_mp4_pane_t

0xcbd3,	// (0x0001aac9) mp4_progress_pane_ParamLimits

0xcbd3,	// (0x0001aac9) mp4_progress_pane

0xcc1d,	// (0x0001ab13) mp4_rocker_pane_ParamLimits

0xcc1d,	// (0x0001ab13) mp4_rocker_pane

0xcc45,	// (0x0001ab3b) mp4_progress_pane_t1

0xcc5e,	// (0x0001ab54) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0001d7b1) mp4_progress_pane_t

0xcc77,	// (0x0001ab6d) mup_progress_pane_cp04

0xc132,	// (0x0001a028) mp4_rocker_pane_g1

0x57d6,	// (0x000136cc) aid_cell_size_keypad2_ParamLimits

0x57d6,	// (0x000136cc) aid_cell_size_keypad2

0x57ec,	// (0x000136e2) dialer2_ne_pane_ParamLimits

0x57ec,	// (0x000136e2) dialer2_ne_pane

0x5806,	// (0x000136fc) grid_dialer2_keypad_pane_ParamLimits

0x5806,	// (0x000136fc) grid_dialer2_keypad_pane

0xbf17,	// (0x00019e0d) bg_popup_call_pane_cp07_ParamLimits

0xbf17,	// (0x00019e0d) bg_popup_call_pane_cp07

0x5822,	// (0x00013718) dialer2_ne_pane_t1_ParamLimits

0x5822,	// (0x00013718) dialer2_ne_pane_t1

0x585d,	// (0x00013753) cell_dialer2_keypad_pane_ParamLimits

0x585d,	// (0x00013753) cell_dialer2_keypad_pane

0xcc95,	// (0x0001ab8b) bg_button_pane_pane_cp04_ParamLimits

0xcc95,	// (0x0001ab8b) bg_button_pane_pane_cp04

0x587f,	// (0x00013775) cell_dialer2_keypad_pane_g1_ParamLimits

0x587f,	// (0x00013775) cell_dialer2_keypad_pane_g1

0x1973,	// (0x0000f869) aid_placing_vt_set_content_ParamLimits

0x1973,	// (0x0000f869) aid_placing_vt_set_content

0x199b,	// (0x0000f891) aid_placing_vt_set_title_ParamLimits

0x199b,	// (0x0000f891) aid_placing_vt_set_title

0x9255,	// (0x0001714b) main_image3_pane

0x5945,	// (0x0001383b) area_side_right_pane_cp01_ParamLimits

0x5945,	// (0x0001383b) area_side_right_pane_cp01

0xca3b,	// (0x0001a931) main_image3_pane_g1_ParamLimits

0xca3b,	// (0x0001a931) main_image3_pane_g1

0x595c,	// (0x00013852) main_image3_pane_g2_ParamLimits

0x595c,	// (0x00013852) main_image3_pane_g2

0x5984,	// (0x0001387a) main_image3_pane_g3_ParamLimits

0x5984,	// (0x0001387a) main_image3_pane_g3

0x59ae,	// (0x000138a4) main_image3_pane_g4_ParamLimits

0x59ae,	// (0x000138a4) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0001d7c0) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0001d7c0) main_image3_pane_g

0x59d8,	// (0x000138ce) main_image3_pane_t1_ParamLimits

0x59d8,	// (0x000138ce) main_image3_pane_t1

0x5a30,	// (0x00013926) main_image3_pane_t2_ParamLimits

0x5a30,	// (0x00013926) main_image3_pane_t2

0x5a82,	// (0x00013978) main_image3_pane_t3_ParamLimits

0x5a82,	// (0x00013978) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0001d7c9) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0001d7c9) main_image3_pane_t

0x92c5,	// (0x000171bb) grid_sctrl_middle_pane_cp01_ParamLimits

0x92c5,	// (0x000171bb) grid_sctrl_middle_pane_cp01

0x5b0a,	// (0x00013a00) cell_sctrl_middle_pane_cp01_ParamLimits

0x5b0a,	// (0x00013a00) cell_sctrl_middle_pane_cp01

0x5b27,	// (0x00013a1d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5b27,	// (0x00013a1d) cell_sctrl_middle_pane_cp01_g1

0x9255,	// (0x0001714b) main_call4_pane

0x5b3d,	// (0x00013a33) aid_size_button_call4_ParamLimits

0x5b3d,	// (0x00013a33) aid_size_button_call4

0x5b6e,	// (0x00013a64) call4_windows_pane_ParamLimits

0x5b6e,	// (0x00013a64) call4_windows_pane

0x5b8e,	// (0x00013a84) grid_call4_button_pane_ParamLimits

0x5b8e,	// (0x00013a84) grid_call4_button_pane

0xccd3,	// (0x0001abc9) call4_windows_conf_pane

0xccea,	// (0x0001abe0) popup_call4_audio_first_window_ParamLimits

0xccea,	// (0x0001abe0) popup_call4_audio_first_window

0xcd36,	// (0x0001ac2c) popup_call4_audio_second_window_ParamLimits

0xcd36,	// (0x0001ac2c) popup_call4_audio_second_window

0xcd4a,	// (0x0001ac40) popup_call4_audio_wait_window_ParamLimits

0xcd4a,	// (0x0001ac40) popup_call4_audio_wait_window

0x5bbb,	// (0x00013ab1) cell_call4_button_pane_ParamLimits

0x5bbb,	// (0x00013ab1) cell_call4_button_pane

0x5be4,	// (0x00013ada) bg_button_pane_cp09_ParamLimits

0x5be4,	// (0x00013ada) bg_button_pane_cp09

0x5bf0,	// (0x00013ae6) cell_call4_button_pane_g1_ParamLimits

0x5bf0,	// (0x00013ae6) cell_call4_button_pane_g1

0x5c16,	// (0x00013b0c) cell_call4_button_pane_t1_ParamLimits

0x5c16,	// (0x00013b0c) cell_call4_button_pane_t1

0xcd92,	// (0x0001ac88) popup_call4_audio_conf_window_ParamLimits

0xcd92,	// (0x0001ac88) popup_call4_audio_conf_window

0x4eaa,	// (0x00012da0) mup3_progress_pane_t1_ParamLimits

0x4ec9,	// (0x00012dbf) mup3_progress_pane_t2_ParamLimits

0xc425,	// (0x0001a31b) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0001d6a2) mup3_progress_pane_t_ParamLimits

0xc442,	// (0x0001a338) mup_progress_pane_cp03_ParamLimits

0x5494,	// (0x0001338a) mup3_control_keys_pane_g4_copy1

0xcc01,	// (0x0001aaf7) mp4_rocker2_pane_ParamLimits

0xcc01,	// (0x0001aaf7) mp4_rocker2_pane

0xcda6,	// (0x0001ac9c) mp4_rocker2_pane_g1

0xcdae,	// (0x0001aca4) mp4_rocker2_pane_g2

0xcdb6,	// (0x0001acac) mp4_rocker2_pane_g3

0xcdbe,	// (0x0001acb4) mp4_rocker2_pane_g4

0xcdc6,	// (0x0001acbc) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0001d7d2) mp4_rocker2_pane_g

0x9255,	// (0x0001714b) main_camera4_pane

0x9255,	// (0x0001714b) main_video4_pane

0x56fc,	// (0x000135f2) main_video_tele_dialer_pane_t1_ParamLimits

0x56fc,	// (0x000135f2) main_video_tele_dialer_pane_t1

0x5715,	// (0x0001360b) main_video_tele_dialer_pane_t2_ParamLimits

0x5715,	// (0x0001360b) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0001d78c) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0001d78c) main_video_tele_dialer_pane_t

0x5c54,	// (0x00013b4a) cam4_autofocus_pane_ParamLimits

0x5c54,	// (0x00013b4a) cam4_autofocus_pane

0x5c6a,	// (0x00013b60) cam4_image_uncrop_pane_ParamLimits

0x5c6a,	// (0x00013b60) cam4_image_uncrop_pane

0x5c84,	// (0x00013b7a) cam4_indicators_pane_ParamLimits

0x5c84,	// (0x00013b7a) cam4_indicators_pane

0x5caf,	// (0x00013ba5) main_camera4_pane_g1_ParamLimits

0x5caf,	// (0x00013ba5) main_camera4_pane_g1

0x5cc1,	// (0x00013bb7) main_camera4_pane_g2_ParamLimits

0x5cc1,	// (0x00013bb7) main_camera4_pane_g2

0x5cd4,	// (0x00013bca) main_camera4_pane_g3_ParamLimits

0x5cd4,	// (0x00013bca) main_camera4_pane_g3

0x5ce7,	// (0x00013bdd) main_camera4_pane_g4_ParamLimits

0x5ce7,	// (0x00013bdd) main_camera4_pane_g4

0x5cfa,	// (0x00013bf0) main_camera4_pane_g5_ParamLimits

0x5cfa,	// (0x00013bf0) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0001d7dd) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0001d7dd) main_camera4_pane_g

0x5d1e,	// (0x00013c14) main_camera4_pane_t1_ParamLimits

0x5d1e,	// (0x00013c14) main_camera4_pane_t1

0xc39e,	// (0x0001a294) bg_tb_trans_pane_cp06

0xcdf2,	// (0x0001ace8) cam4_indicators_pane_g1

0xce03,	// (0x0001acf9) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0001d7f8) cam4_indicators_pane_g

0xce21,	// (0x0001ad17) cam4_indicators_pane_t1

0x5d82,	// (0x00013c78) main_video4_pane_g1_ParamLimits

0x5d82,	// (0x00013c78) main_video4_pane_g1

0x5d91,	// (0x00013c87) main_video4_pane_g2_ParamLimits

0x5d91,	// (0x00013c87) main_video4_pane_g2

0x5da0,	// (0x00013c96) main_video4_pane_g3_ParamLimits

0x5da0,	// (0x00013c96) main_video4_pane_g3

0x5daf,	// (0x00013ca5) main_video4_pane_g4_ParamLimits

0x5daf,	// (0x00013ca5) main_video4_pane_g4

0x0004,

0xf909,	// (0x0001d7ff) main_video4_pane_g_ParamLimits

0xf909,	// (0x0001d7ff) main_video4_pane_g

0x5dcd,	// (0x00013cc3) vid4_indicators_pane_ParamLimits

0x5dcd,	// (0x00013cc3) vid4_indicators_pane

0x5dfb,	// (0x00013cf1) video4_image_uncrop_cif_pane_ParamLimits

0x5dfb,	// (0x00013cf1) video4_image_uncrop_cif_pane

0x5e15,	// (0x00013d0b) video4_image_uncrop_nhd_pane_ParamLimits

0x5e15,	// (0x00013d0b) video4_image_uncrop_nhd_pane

0x5c6a,	// (0x00013b60) video4_image_uncrop_vga_pane_ParamLimits

0x5c6a,	// (0x00013b60) video4_image_uncrop_vga_pane

0x92c5,	// (0x000171bb) bg_tb_trans_pane_cp07

0xce4d,	// (0x0001ad43) vid4_indicators_pane_g1

0xce61,	// (0x0001ad57) vid4_indicators_pane_g2

0xce75,	// (0x0001ad6b) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0001d80a) vid4_indicators_pane_g

0xcea4,	// (0x0001ad9a) vid4_indicators_pane_t1

0x5e29,	// (0x00013d1f) cam4_autofocus_pane_g1

0x5e31,	// (0x00013d27) cam4_autofocus_pane_g2

0x5e39,	// (0x00013d2f) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0001d815) cam4_autofocus_pane_g

0x5e41,	// (0x00013d37) cam4_autofocus_pane_g3_copy1

0xca0b,	// (0x0001a901) video_down_pane_cp_t1

0xca19,	// (0x0001a90f) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0001d791) video_down_pane_cp_t

0x92c5,	// (0x000171bb) popup_vitu2_window_ParamLimits

0x92c5,	// (0x000171bb) popup_vitu2_window

0x5e49,	// (0x00013d3f) aid_size_cell2_itu2_ParamLimits

0x5e49,	// (0x00013d3f) aid_size_cell2_itu2

0x5e6f,	// (0x00013d65) aid_size_cell_itu2_ParamLimits

0x5e6f,	// (0x00013d65) aid_size_cell_itu2

0x5ecb,	// (0x00013dc1) bg_popup_window_pane_cp09_ParamLimits

0x5ecb,	// (0x00013dc1) bg_popup_window_pane_cp09

0x5ed9,	// (0x00013dcf) field_vitu2_entry_pane_ParamLimits

0x5ed9,	// (0x00013dcf) field_vitu2_entry_pane

0x5eff,	// (0x00013df5) grid_vitu2_function_pane_ParamLimits

0x5eff,	// (0x00013df5) grid_vitu2_function_pane

0x5f50,	// (0x00013e46) grid_vitu2_itu_pane_ParamLimits

0x5f50,	// (0x00013e46) grid_vitu2_itu_pane

0x5fe3,	// (0x00013ed9) cell_vitu2_itu_pane_ParamLimits

0x5fe3,	// (0x00013ed9) cell_vitu2_itu_pane

0x6007,	// (0x00013efd) cell_vitu2_function_pane_ParamLimits

0x6007,	// (0x00013efd) cell_vitu2_function_pane

0xcebb,	// (0x0001adb1) bg_popup_call_pane_cp08_ParamLimits

0xcebb,	// (0x0001adb1) bg_popup_call_pane_cp08

0xced4,	// (0x0001adca) field_vitu2_entry_pane_g1

0xcee0,	// (0x0001add6) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0001d81c) field_vitu2_entry_pane_g

0xcefa,	// (0x0001adf0) field_vitu2_entry_pane_t1_ParamLimits

0xcefa,	// (0x0001adf0) field_vitu2_entry_pane_t1

0xcf29,	// (0x0001ae1f) field_vitu2_entry_pane_t2_ParamLimits

0xcf29,	// (0x0001ae1f) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0001d823) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0001d823) field_vitu2_entry_pane_t

0x6046,	// (0x00013f3c) bg_button_pane_cp010_ParamLimits

0x6046,	// (0x00013f3c) bg_button_pane_cp010

0x6054,	// (0x00013f4a) cell_vitu2_itu_pane_g1

0x6072,	// (0x00013f68) cell_vitu2_itu_pane_t1_ParamLimits

0x6072,	// (0x00013f68) cell_vitu2_itu_pane_t1

0x60d8,	// (0x00013fce) cell_vitu2_itu_pane_t2_ParamLimits

0x60d8,	// (0x00013fce) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0001d82d) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0001d82d) cell_vitu2_itu_pane_t

0x92c5,	// (0x000171bb) bg_button_pane_cp011

0x61b4,	// (0x000140aa) cell_vitu2_function_pane_g1

0x9255,	// (0x0001714b) main_myfav_hc_pane

0x5ad2,	// (0x000139c8) popup_image3_note_pane_ParamLimits

0x5ad2,	// (0x000139c8) popup_image3_note_pane

0x5aee,	// (0x000139e4) popup_image3_tool_bar_pane_ParamLimits

0x5aee,	// (0x000139e4) popup_image3_tool_bar_pane

0x615c,	// (0x00014052) cell_vitu2_itu_pane_t3_ParamLimits

0x615c,	// (0x00014052) cell_vitu2_itu_pane_t3

0x9255,	// (0x0001714b) bg_popup_trans_pane

0xcf4e,	// (0x0001ae44) grid_image3_tool_bar_pane

0xcf58,	// (0x0001ae4e) bg_popup_trans_pane_g1

0x9f46,	// (0x00017e3c) bg_popup_trans_pane_g2

0xcf60,	// (0x0001ae56) bg_popup_trans_pane_g3

0xcf68,	// (0x0001ae5e) bg_popup_trans_pane_g4

0xcf70,	// (0x0001ae66) bg_popup_trans_pane_g5

0xcf78,	// (0x0001ae6e) bg_popup_trans_pane_g6

0xcf80,	// (0x0001ae76) bg_popup_trans_pane_g7

0xcf88,	// (0x0001ae7e) bg_popup_trans_pane_g8

0x9f26,	// (0x00017e1c) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0001d834) bg_popup_trans_pane_g

0xcf90,	// (0x0001ae86) cell_image3_tool_bar_pane_ParamLimits

0xcf90,	// (0x0001ae86) cell_image3_tool_bar_pane

0xc132,	// (0x0001a028) cell_image3_tool_bar_pane_g1

0x9255,	// (0x0001714b) bg_popup_trans_pane_cp1

0xcfa4,	// (0x0001ae9a) popup_image3_note_pane_t1

0xcfb2,	// (0x0001aea8) popup_image3_note_pane_t2

0xcfc0,	// (0x0001aeb6) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0001d847) popup_image3_note_pane_t

0xcfce,	// (0x0001aec4) popup_image3_note_pane_t3_copy1

0x61c8,	// (0x000140be) bg_myfav_hc_instruction_pane_ParamLimits

0x61c8,	// (0x000140be) bg_myfav_hc_instruction_pane

0x61dc,	// (0x000140d2) cell_myfav_contact_pane_ParamLimits

0x61dc,	// (0x000140d2) cell_myfav_contact_pane

0x61fa,	// (0x000140f0) cell_myfav_contact_pane_cp1_ParamLimits

0x61fa,	// (0x000140f0) cell_myfav_contact_pane_cp1

0x6212,	// (0x00014108) cell_myfav_contact_pane_cp2_ParamLimits

0x6212,	// (0x00014108) cell_myfav_contact_pane_cp2

0x622a,	// (0x00014120) cell_myfav_contact_pane_cp3_ParamLimits

0x622a,	// (0x00014120) cell_myfav_contact_pane_cp3

0x6241,	// (0x00014137) cell_myfav_contact_pane_cp4_ParamLimits

0x6241,	// (0x00014137) cell_myfav_contact_pane_cp4

0x6259,	// (0x0001414f) cell_myfav_contact_pane_cp5_ParamLimits

0x6259,	// (0x0001414f) cell_myfav_contact_pane_cp5

0x626d,	// (0x00014163) cell_myfav_contact_pane_cp6_ParamLimits

0x626d,	// (0x00014163) cell_myfav_contact_pane_cp6

0x6283,	// (0x00014179) cell_myfav_contact_pane_cp7_ParamLimits

0x6283,	// (0x00014179) cell_myfav_contact_pane_cp7

0xcfdc,	// (0x0001aed2) listscroll_gen_pane_cp05

0x629d,	// (0x00014193) main_myfav_hc_pane_g1_ParamLimits

0x629d,	// (0x00014193) main_myfav_hc_pane_g1

0x62b7,	// (0x000141ad) main_myfav_hc_pane_g2_ParamLimits

0x62b7,	// (0x000141ad) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0001d84e) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0001d84e) main_myfav_hc_pane_g

0x62e9,	// (0x000141df) main_myfav_hc_pane_t1_ParamLimits

0x62e9,	// (0x000141df) main_myfav_hc_pane_t1

0xcfe5,	// (0x0001aedb) main_myfav_hc_pane_t2_ParamLimits

0xcfe5,	// (0x0001aedb) main_myfav_hc_pane_t2

0xcff7,	// (0x0001aeed) main_myfav_hc_pane_t3_ParamLimits

0xcff7,	// (0x0001aeed) main_myfav_hc_pane_t3

0x6300,	// (0x000141f6) main_myfav_hc_pane_t4_ParamLimits

0x6300,	// (0x000141f6) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0001d855) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0001d855) main_myfav_hc_pane_t

0xc132,	// (0x0001a028) bg_myfav_hc_instruction_pane_g1

0xd009,	// (0x0001aeff) cell_myfav_contact_pane_g1_ParamLimits

0xd009,	// (0x0001aeff) cell_myfav_contact_pane_g1

0xd009,	// (0x0001aeff) cell_myfav_contact_pane_g2_ParamLimits

0xd009,	// (0x0001aeff) cell_myfav_contact_pane_g2

0xd015,	// (0x0001af0b) cell_myfav_contact_pane_g3_ParamLimits

0xd015,	// (0x0001af0b) cell_myfav_contact_pane_g3

0xc40f,	// (0x0001a305) cell_myfav_contact_pane_g4_ParamLimits

0xc40f,	// (0x0001a305) cell_myfav_contact_pane_g4

0xd022,	// (0x0001af18) cell_myfav_contact_pane_g5_ParamLimits

0xd022,	// (0x0001af18) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0001d860) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0001d860) cell_myfav_contact_pane_g

0x62d1,	// (0x000141c7) main_myfav_hc_pane_g3_ParamLimits

0x62d1,	// (0x000141c7) main_myfav_hc_pane_g3

0x0b73,	// (0x0000ea69) popup_adpt_find_window

0x6328,	// (0x0001421e) afind_page_pane_ParamLimits

0x6328,	// (0x0001421e) afind_page_pane

0x633d,	// (0x00014233) aid_size_cell_afind_ParamLimits

0x633d,	// (0x00014233) aid_size_cell_afind

0x635b,	// (0x00014251) bg_popup_sub_pane_cp09_ParamLimits

0x635b,	// (0x00014251) bg_popup_sub_pane_cp09

0x6368,	// (0x0001425e) find_pane_cp01_ParamLimits

0x6368,	// (0x0001425e) find_pane_cp01

0xd02e,	// (0x0001af24) grid_afind_control_pane_ParamLimits

0xd02e,	// (0x0001af24) grid_afind_control_pane

0x6375,	// (0x0001426b) grid_afind_pane_ParamLimits

0x6375,	// (0x0001426b) grid_afind_pane

0x6397,	// (0x0001428d) cell_afind_pane_ParamLimits

0x6397,	// (0x0001428d) cell_afind_pane

0xc132,	// (0x0001a028) afind_page_pane_g1

0x63f8,	// (0x000142ee) afind_page_pane_g2

0x6401,	// (0x000142f7) afind_page_pane_g3

0x0002,

0xf975,	// (0x0001d86b) afind_page_pane_g

0x640a,	// (0x00014300) afind_page_pane_t1

0xd042,	// (0x0001af38) cell_afind_grid_control_pane_ParamLimits

0xd042,	// (0x0001af38) cell_afind_grid_control_pane

0xcc95,	// (0x0001ab8b) bg_button_pane_cp69_ParamLimits

0xcc95,	// (0x0001ab8b) bg_button_pane_cp69

0x642a,	// (0x00014320) cell_afind_pane_g1_ParamLimits

0x642a,	// (0x00014320) cell_afind_pane_g1

0x6437,	// (0x0001432d) cell_afind_pane_t1_ParamLimits

0x6437,	// (0x0001432d) cell_afind_pane_t1

0x9c9f,	// (0x00017b95) bg_button_pane_cp72

0xd051,	// (0x0001af47) cell_afind_grid_control_pane_g1

0x3409,	// (0x000112ff) aid_image_placing_area_ParamLimits

0x3409,	// (0x000112ff) aid_image_placing_area

0xc70e,	// (0x0001a604) field_vitu_entry_pane_g1_ParamLimits

0xc70e,	// (0x0001a604) field_vitu_entry_pane_g1

0xc71a,	// (0x0001a610) field_vitu_entry_pane_g2_ParamLimits

0xc71a,	// (0x0001a610) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0001d71c) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0001d71c) field_vitu_entry_pane_g

0x555b,	// (0x00013451) cell_vitu_itu_pane_g1_ParamLimits

0x559d,	// (0x00013493) cell_vitu_itu_pane_t3_ParamLimits

0x559d,	// (0x00013493) cell_vitu_itu_pane_t3

0xcc45,	// (0x0001ab3b) mp4_progress_pane_t1_ParamLimits

0xcc5e,	// (0x0001ab54) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0001d7b1) mp4_progress_pane_t_ParamLimits

0xcc77,	// (0x0001ab6d) mup_progress_pane_cp04_ParamLimits

0x6314,	// (0x0001420a) main_myfav_hc_pane_t5_ParamLimits

0x6314,	// (0x0001420a) main_myfav_hc_pane_t5

0x927b,	// (0x00017171) aid_zoom_text_primary

0x0b73,	// (0x0000ea69) popup_adpt_find_window_ParamLimits

0x92c5,	// (0x000171bb) main_cam_set_pane

0x5c9b,	// (0x00013b91) cam4_zoom_pane_ParamLimits

0x5c9b,	// (0x00013b91) cam4_zoom_pane

0x6449,	// (0x0001433f) main_cam_set_pane_g1_ParamLimits

0x6449,	// (0x0001433f) main_cam_set_pane_g1

0x6457,	// (0x0001434d) main_cam_set_pane_g2_ParamLimits

0x6457,	// (0x0001434d) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0001d872) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0001d872) main_cam_set_pane_g

0x6478,	// (0x0001436e) main_cam_set_pane_t1_ParamLimits

0x6478,	// (0x0001436e) main_cam_set_pane_t1

0x6493,	// (0x00014389) main_cset_listscroll_pane_ParamLimits

0x6493,	// (0x00014389) main_cset_listscroll_pane

0x64b3,	// (0x000143a9) main_cset_slider_pane_ParamLimits

0x64b3,	// (0x000143a9) main_cset_slider_pane

0xd062,	// (0x0001af58) main_cset_list_pane_ParamLimits

0xd062,	// (0x0001af58) main_cset_list_pane

0xd072,	// (0x0001af68) scroll_pane_cp028

0x64d9,	// (0x000143cf) aid_area_touch_slider

0x64f5,	// (0x000143eb) cset_slider_pane

0x651f,	// (0x00014415) main_cset_slider_pane_g1

0x6534,	// (0x0001442a) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0001d877) main_cset_slider_pane_g

0xd0ab,	// (0x0001afa1) main_cset_slider_pane_t1

0x65f0,	// (0x000144e6) main_cset_slider_pane_t2

0x660a,	// (0x00014500) main_cset_slider_pane_t3

0x6624,	// (0x0001451a) main_cset_slider_pane_t4

0x663e,	// (0x00014534) main_cset_slider_pane_t5

0x6658,	// (0x0001454e) main_cset_slider_pane_t6

0x666d,	// (0x00014563) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0001d89c) main_cset_slider_pane_t

0x6771,	// (0x00014667) cset_list_set_pane_ParamLimits

0x6771,	// (0x00014667) cset_list_set_pane

0x6783,	// (0x00014679) aid_position_infowindow_above

0x678b,	// (0x00014681) aid_position_infowindow_below

0xd14b,	// (0x0001b041) cset_list_set_pane_g1_ParamLimits

0xd14b,	// (0x0001b041) cset_list_set_pane_g1

0xd157,	// (0x0001b04d) cset_list_set_pane_g3_ParamLimits

0xd157,	// (0x0001b04d) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0001d8bb) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0001d8bb) cset_list_set_pane_g

0xd166,	// (0x0001b05c) cset_list_set_pane_t1_ParamLimits

0xd166,	// (0x0001b05c) cset_list_set_pane_t1

0x92c5,	// (0x000171bb) list_highlight_pane_cp021_ParamLimits

0x92c5,	// (0x000171bb) list_highlight_pane_cp021

0xa8c5,	// (0x000187bb) cset_slider_pane_g1

0xa8d7,	// (0x000187cd) cset_slider_pane_g2

0xa8ce,	// (0x000187c4) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0001d8c0) cset_slider_pane_g

0xd17b,	// (0x0001b071) aid_area_touch_cam4_zoom

0xd183,	// (0x0001b079) cam4_zoom_cont_pane

0xd18b,	// (0x0001b081) cam4_zoom_pane_g1

0xd193,	// (0x0001b089) cam4_zoom_pane_g2

0x6793,	// (0x00014689) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0001d8c7) cam4_zoom_pane_g

0xd19b,	// (0x0001b091) cam4_zoom_cont_pane_g1

0xd1a4,	// (0x0001b09a) cam4_zoom_cont_pane_g2

0xd1ad,	// (0x0001b0a3) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0001d8ce) cam4_zoom_cont_pane_g

0x5b5b,	// (0x00013a51) call4_image_pane_ParamLimits

0x5b5b,	// (0x00013a51) call4_image_pane

0xccd3,	// (0x0001abc9) call4_windows_conf_pane_ParamLimits

0xcd14,	// (0x0001ac0a) popup_call4_audio_in_window_ParamLimits

0xcd14,	// (0x0001ac0a) popup_call4_audio_in_window

0x9255,	// (0x0001714b) bg_popup_call2_act_pane_cp02

0xcd8a,	// (0x0001ac80) call4_list_conf_pane

0xc132,	// (0x0001a028) call4_image_pane_g1

0xc132,	// (0x0001a028) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0001d5e2) call4_image_pane_g

0xd1b6,	// (0x0001b0ac) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1b6,	// (0x0001b0ac) list_single_graphic_popup_conf4_pane

0x9255,	// (0x0001714b) list_highlight_pane_cp022

0xd1c9,	// (0x0001b0bf) list_single_graphic_popup_conf4_pane_g1

0xa584,	// (0x0001847a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0001d8d5) list_single_graphic_popup_conf4_pane_g

0xd1d1,	// (0x0001b0c7) list_single_graphic_popup_conf4_pane_t1

0x1abf,	// (0x0000f9b5) popup_vtel_slider_window_ParamLimits

0x1abf,	// (0x0000f9b5) popup_vtel_slider_window

0xcc83,	// (0x0001ab79) dialer2_ne_pane_t2_ParamLimits

0xcc83,	// (0x0001ab79) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0001d7b6) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0001d7b6) dialer2_ne_pane_t

0xbf17,	// (0x00019e0d) bg_popup_sub_pane_cp010_ParamLimits

0xbf17,	// (0x00019e0d) bg_popup_sub_pane_cp010

0x679b,	// (0x00014691) popup_vtel_slider_window_g1_ParamLimits

0x679b,	// (0x00014691) popup_vtel_slider_window_g1

0x67ae,	// (0x000146a4) popup_vtel_slider_window_g2_ParamLimits

0x67ae,	// (0x000146a4) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0001d8da) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0001d8da) popup_vtel_slider_window_g

0x6804,	// (0x000146fa) vtel_slider_pane_ParamLimits

0x6804,	// (0x000146fa) vtel_slider_pane

0x6826,	// (0x0001471c) vtel_slider_pane_g1_ParamLimits

0x6826,	// (0x0001471c) vtel_slider_pane_g1

0x683a,	// (0x00014730) vtel_slider_pane_g2_ParamLimits

0x683a,	// (0x00014730) vtel_slider_pane_g2

0x6852,	// (0x00014748) vtel_slider_pane_g3_ParamLimits

0x6852,	// (0x00014748) vtel_slider_pane_g3

0x6826,	// (0x0001471c) vtel_slider_pane_g4_ParamLimits

0x6826,	// (0x0001471c) vtel_slider_pane_g4

0x6868,	// (0x0001475e) vtel_slider_pane_g5_ParamLimits

0x6868,	// (0x0001475e) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0001d8e3) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0001d8e3) vtel_slider_pane_g

0x9255,	// (0x0001714b) main_gallery2_pane

0x5e9b,	// (0x00013d91) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e9b,	// (0x00013d91) aid_size_row_itut2_dropdow_list

0x5f27,	// (0x00013e1d) grid_vitu2_function_top_pane_ParamLimits

0x5f27,	// (0x00013e1d) grid_vitu2_function_top_pane

0x5f8c,	// (0x00013e82) popup_vitu2_dropdown_list_window_ParamLimits

0x5f8c,	// (0x00013e82) popup_vitu2_dropdown_list_window

0x5fb5,	// (0x00013eab) popup_vitu2_match_list_window

0x687e,	// (0x00014774) cell_vitu2_function_top_pane_ParamLimits

0x687e,	// (0x00014774) cell_vitu2_function_top_pane

0x689c,	// (0x00014792) cell_vitu2_function_top_pane_cp01_ParamLimits

0x689c,	// (0x00014792) cell_vitu2_function_top_pane_cp01

0x68ba,	// (0x000147b0) cell_vitu2_function_top_wide_pane_ParamLimits

0x68ba,	// (0x000147b0) cell_vitu2_function_top_wide_pane

0x92c5,	// (0x000171bb) bg_button_pane_cp012

0x68d8,	// (0x000147ce) cell_vitu2_function_top_pane_g1

0xd1f5,	// (0x0001b0eb) bg_button_pane_cp013_ParamLimits

0xd1f5,	// (0x0001b0eb) bg_button_pane_cp013

0x68ec,	// (0x000147e2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68ec,	// (0x000147e2) cell_vitu2_function_top_wide_pane_g1

0x92c5,	// (0x000171bb) bg_popup_sub_pane_cp20

0x6904,	// (0x000147fa) list_vitu2_match_list_pane

0xcf58,	// (0x0001ae4e) bg_popup_sub_pane_cp20_g1

0xcf60,	// (0x0001ae56) bg_popup_sub_pane_cp20_g2

0x9f46,	// (0x00017e3c) bg_popup_sub_pane_cp20_g3

0xcf68,	// (0x0001ae5e) bg_popup_sub_pane_cp20_g4

0x9f26,	// (0x00017e1c) bg_popup_sub_pane_cp20_g5

0xd211,	// (0x0001b107) bg_popup_sub_pane_cp20_g6

0xcf78,	// (0x0001ae6e) bg_popup_sub_pane_cp20_g7

0xcf80,	// (0x0001ae76) bg_popup_sub_pane_cp20_g8

0xcf88,	// (0x0001ae7e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0001d8ee) bg_popup_sub_pane_cp20_g

0xd219,	// (0x0001b10f) list_vitu2_match_list_item_pane_ParamLimits

0xd219,	// (0x0001b10f) list_vitu2_match_list_item_pane

0xd22b,	// (0x0001b121) list_vitu2_match_list_item_pane_t1

0x9255,	// (0x0001714b) bg_popup_sub_pane_cp21

0xa439,	// (0x0001832f) grid_vitu2_dropdown_list_pane

0x6957,	// (0x0001484d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6957,	// (0x0001484d) cell_vitu2_dropdown_list_char_pane

0x6978,	// (0x0001486e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6978,	// (0x0001486e) cell_vitu2_dropdown_list_ctrl_pane

0xd251,	// (0x0001b147) cell_vitu2_dropdown_list_char_pane_g1

0xd25a,	// (0x0001b150) cell_vitu2_dropdown_list_char_pane_g2

0xd263,	// (0x0001b159) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0001d90b) cell_vitu2_dropdown_list_char_pane_g

0x69a4,	// (0x0001489a) cell_vitu2_dropdown_list_char_pane_t1

0x69b2,	// (0x000148a8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x69b2,	// (0x000148a8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x69bf,	// (0x000148b5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x69bf,	// (0x000148b5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x69cc,	// (0x000148c2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x69cc,	// (0x000148c2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69d9,	// (0x000148cf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69d9,	// (0x000148cf) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc39e,	// (0x0001a294) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc39e,	// (0x0001a294) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0001d912) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0001d912) cell_vitu2_dropdown_list_ctrl_pane_g

0x69f5,	// (0x000148eb) aid_size_cell_gallery2_ParamLimits

0x69f5,	// (0x000148eb) aid_size_cell_gallery2

0x6a0b,	// (0x00014901) grid_gallery2_pane_ParamLimits

0x6a0b,	// (0x00014901) grid_gallery2_pane

0x6a1f,	// (0x00014915) scroll_pane_cp029_ParamLimits

0x6a1f,	// (0x00014915) scroll_pane_cp029

0x6a2b,	// (0x00014921) cell_gallery2_pane_ParamLimits

0x6a2b,	// (0x00014921) cell_gallery2_pane

0xd26c,	// (0x0001b162) cell_gallery2_pane_g2

0x6a61,	// (0x00014957) cell_gallery2_pane_g3

0xd276,	// (0x0001b16c) cell_gallery2_pane_g4

0xd27e,	// (0x0001b174) cell_gallery2_pane_g5

0xa76f,	// (0x00018665) grid_highlight_pane_cp10

0x5fb5,	// (0x00013eab) popup_vitu2_match_list_window_ParamLimits

0x5fcc,	// (0x00013ec2) popup_vitu2_query_window_ParamLimits

0x5fcc,	// (0x00013ec2) popup_vitu2_query_window

0x9255,	// (0x0001714b) bg_vitu2_candi_button_pane

0xd251,	// (0x0001b147) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd25a,	// (0x0001b150) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd263,	// (0x0001b159) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a69,	// (0x0001495f) bg_button_pane_cp015

0x6a7b,	// (0x00014971) bg_button_pane_cp016

0x6a8e,	// (0x00014984) bg_button_pane_cp017

0xbc2c,	// (0x00019b22) bg_popup_sub_pane_cp22

0xd286,	// (0x0001b17c) popup_vitu2_query_window_g1

0x6ad3,	// (0x000149c9) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0001d91d) popup_vitu2_query_window_g

0x6af2,	// (0x000149e8) popup_vitu2_query_window_t1_ParamLimits

0x6af2,	// (0x000149e8) popup_vitu2_query_window_t1

0x6b27,	// (0x00014a1d) popup_vitu2_query_window_t2_ParamLimits

0x6b27,	// (0x00014a1d) popup_vitu2_query_window_t2

0x6b39,	// (0x00014a2f) popup_vitu2_query_window_t3_ParamLimits

0x6b39,	// (0x00014a2f) popup_vitu2_query_window_t3

0x6b61,	// (0x00014a57) popup_vitu2_query_window_t4_ParamLimits

0x6b61,	// (0x00014a57) popup_vitu2_query_window_t4

0x6b82,	// (0x00014a78) popup_vitu2_query_window_t5_ParamLimits

0x6b82,	// (0x00014a78) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0001d924) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0001d924) popup_vitu2_query_window_t

0xd05a,	// (0x0001af50) main_cset_text_pane

0x64d9,	// (0x000143cf) aid_area_touch_slider_ParamLimits

0x64f5,	// (0x000143eb) cset_slider_pane_ParamLimits

0x651f,	// (0x00014415) main_cset_slider_pane_g1_ParamLimits

0x6534,	// (0x0001442a) main_cset_slider_pane_g2_ParamLimits

0xd07b,	// (0x0001af71) main_cset_slider_pane_g3_ParamLimits

0xd07b,	// (0x0001af71) main_cset_slider_pane_g3

0x6549,	// (0x0001443f) main_cset_slider_pane_g4_ParamLimits

0x6549,	// (0x0001443f) main_cset_slider_pane_g4

0x6558,	// (0x0001444e) main_cset_slider_pane_g5_ParamLimits

0x6558,	// (0x0001444e) main_cset_slider_pane_g5

0x6564,	// (0x0001445a) main_cset_slider_pane_g6_ParamLimits

0x6564,	// (0x0001445a) main_cset_slider_pane_g6

0xf981,	// (0x0001d877) main_cset_slider_pane_g_ParamLimits

0xd0ab,	// (0x0001afa1) main_cset_slider_pane_t1_ParamLimits

0x65f0,	// (0x000144e6) main_cset_slider_pane_t2_ParamLimits

0x660a,	// (0x00014500) main_cset_slider_pane_t3_ParamLimits

0x6624,	// (0x0001451a) main_cset_slider_pane_t4_ParamLimits

0x663e,	// (0x00014534) main_cset_slider_pane_t5_ParamLimits

0x6658,	// (0x0001454e) main_cset_slider_pane_t6_ParamLimits

0x666d,	// (0x00014563) main_cset_slider_pane_t7_ParamLimits

0x6697,	// (0x0001458d) main_cset_slider_pane_t8_ParamLimits

0x6697,	// (0x0001458d) main_cset_slider_pane_t8

0x66bf,	// (0x000145b5) main_cset_slider_pane_t9_ParamLimits

0x66bf,	// (0x000145b5) main_cset_slider_pane_t9

0x66e7,	// (0x000145dd) main_cset_slider_pane_t10_ParamLimits

0x66e7,	// (0x000145dd) main_cset_slider_pane_t10

0x670f,	// (0x00014605) main_cset_slider_pane_t11_ParamLimits

0x670f,	// (0x00014605) main_cset_slider_pane_t11

0x6737,	// (0x0001462d) main_cset_slider_pane_t12_ParamLimits

0x6737,	// (0x0001462d) main_cset_slider_pane_t12

0x6754,	// (0x0001464a) main_cset_slider_pane_t13_ParamLimits

0x6754,	// (0x0001464a) main_cset_slider_pane_t13

0xf9a6,	// (0x0001d89c) main_cset_slider_pane_t_ParamLimits

0x9255,	// (0x0001714b) bg_popup_sub_pane_cp011

0xd292,	// (0x0001b188) main_cset_text_pane_g1

0xd29a,	// (0x0001b190) main_cset_text_pane_t1

0xd2a8,	// (0x0001b19e) main_cset_text_pane_t2

0xd2b6,	// (0x0001b1ac) main_cset_text_pane_t3

0xd2c4,	// (0x0001b1ba) main_cset_text_pane_t4

0xd2d2,	// (0x0001b1c8) main_cset_text_pane_t5

0xd2e0,	// (0x0001b1d6) main_cset_text_pane_t6

0xd2ee,	// (0x0001b1e4) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0001d933) main_cset_text_pane_t

0x9255,	// (0x0001714b) main_cam4_burst_pane

0x9255,	// (0x0001714b) main_cam5_pane

0x6418,	// (0x0001430e) bg_button_pane_cp019

0x6421,	// (0x00014317) bg_button_pane_cp020

0xd087,	// (0x0001af7d) main_cset_slider_pane_g7_ParamLimits

0xd087,	// (0x0001af7d) main_cset_slider_pane_g7

0xd093,	// (0x0001af89) main_cset_slider_pane_g8_ParamLimits

0xd093,	// (0x0001af89) main_cset_slider_pane_g8

0x6578,	// (0x0001446e) main_cset_slider_pane_g9_ParamLimits

0x6578,	// (0x0001446e) main_cset_slider_pane_g9

0x6584,	// (0x0001447a) main_cset_slider_pane_g10_ParamLimits

0x6584,	// (0x0001447a) main_cset_slider_pane_g10

0x6590,	// (0x00014486) main_cset_slider_pane_g11_ParamLimits

0x6590,	// (0x00014486) main_cset_slider_pane_g11

0x659c,	// (0x00014492) main_cset_slider_pane_g12_ParamLimits

0x659c,	// (0x00014492) main_cset_slider_pane_g12

0x65a8,	// (0x0001449e) main_cset_slider_pane_g13_ParamLimits

0x65a8,	// (0x0001449e) main_cset_slider_pane_g13

0x65b4,	// (0x000144aa) main_cset_slider_pane_g14_ParamLimits

0x65b4,	// (0x000144aa) main_cset_slider_pane_g14

0x65c0,	// (0x000144b6) main_cset_slider_pane_g15_ParamLimits

0x65c0,	// (0x000144b6) main_cset_slider_pane_g15

0xd0d9,	// (0x0001afcf) main_cset_slider_pane_t14_ParamLimits

0xd0d9,	// (0x0001afcf) main_cset_slider_pane_t14

0xd112,	// (0x0001b008) main_cset_slider_pane_t15_ParamLimits

0xd112,	// (0x0001b008) main_cset_slider_pane_t15

0x6bf9,	// (0x00014aef) aid_cam4_burst_size_cell_ParamLimits

0x6bf9,	// (0x00014aef) aid_cam4_burst_size_cell

0x6c19,	// (0x00014b0f) grid_cam4_burst_pane_ParamLimits

0x6c19,	// (0x00014b0f) grid_cam4_burst_pane

0x6c51,	// (0x00014b47) linegrid_cam4_burst_pane_ParamLimits

0x6c51,	// (0x00014b47) linegrid_cam4_burst_pane

0xd2fc,	// (0x0001b1f2) scroll_pane_cp30_ParamLimits

0xd2fc,	// (0x0001b1f2) scroll_pane_cp30

0x6c75,	// (0x00014b6b) cell_cam4_burst_pane_ParamLimits

0x6c75,	// (0x00014b6b) cell_cam4_burst_pane

0xd308,	// (0x0001b1fe) linegrid_cam4_burst_pane_g1_ParamLimits

0xd308,	// (0x0001b1fe) linegrid_cam4_burst_pane_g1

0x6cc2,	// (0x00014bb8) linegrid_cam4_burst_pane_g2_ParamLimits

0x6cc2,	// (0x00014bb8) linegrid_cam4_burst_pane_g2

0xd315,	// (0x0001b20b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd315,	// (0x0001b20b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0001d942) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0001d942) linegrid_cam4_burst_pane_g

0x6cd3,	// (0x00014bc9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6cd3,	// (0x00014bc9) linegrid_cam4_burst_pane_g3_copy1

0xd322,	// (0x0001b218) linegrid_cam4_burst_pane_g4_ParamLimits

0xd322,	// (0x0001b218) linegrid_cam4_burst_pane_g4

0x6ced,	// (0x00014be3) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ced,	// (0x00014be3) linegrid_cam4_burst_pane_g5

0x6cfe,	// (0x00014bf4) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cfe,	// (0x00014bf4) linegrid_cam4_burst_pane_g6

0xd32f,	// (0x0001b225) linegrid_cam4_burst_pane_g7_ParamLimits

0xd32f,	// (0x0001b225) linegrid_cam4_burst_pane_g7

0x6d15,	// (0x00014c0b) cell_cam4_burst_pane_g1

0xd348,	// (0x0001b23e) main_cam5_pane_t1_ParamLimits

0xd348,	// (0x0001b23e) main_cam5_pane_t1

0xd35a,	// (0x0001b250) main_cam5_pane_t2_ParamLimits

0xd35a,	// (0x0001b250) main_cam5_pane_t2

0xd36c,	// (0x0001b262) main_cam5_pane_t3_ParamLimits

0xd36c,	// (0x0001b262) main_cam5_pane_t3

0xd37e,	// (0x0001b274) main_cam5_pane_t4_ParamLimits

0xd37e,	// (0x0001b274) main_cam5_pane_t4

0xd396,	// (0x0001b28c) main_cam5_pane_t5_ParamLimits

0xd396,	// (0x0001b28c) main_cam5_pane_t5

0xd3aa,	// (0x0001b2a0) main_cam5_pane_t6_ParamLimits

0xd3aa,	// (0x0001b2a0) main_cam5_pane_t6

0xd3be,	// (0x0001b2b4) main_cam5_pane_t7_ParamLimits

0xd3be,	// (0x0001b2b4) main_cam5_pane_t7

0xd3d0,	// (0x0001b2c6) main_cam5_pane_t8_ParamLimits

0xd3d0,	// (0x0001b2c6) main_cam5_pane_t8

0xd3ec,	// (0x0001b2e2) main_cam5_pane_t9_ParamLimits

0xd3ec,	// (0x0001b2e2) main_cam5_pane_t9

0xd3fe,	// (0x0001b2f4) main_cam5_pane_t10_ParamLimits

0xd3fe,	// (0x0001b2f4) main_cam5_pane_t10

0xd410,	// (0x0001b306) main_cam5_pane_t11_ParamLimits

0xd410,	// (0x0001b306) main_cam5_pane_t11

0xd422,	// (0x0001b318) main_cam5_pane_t12_ParamLimits

0xd422,	// (0x0001b318) main_cam5_pane_t12

0xd437,	// (0x0001b32d) main_cam5_pane_t13_ParamLimits

0xd437,	// (0x0001b32d) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0001d94e) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0001d94e) main_cam5_pane_t

0x0bf5,	// (0x0000eaeb) popup_scut_keymap_window_ParamLimits

0x0bf5,	// (0x0000eaeb) popup_scut_keymap_window

0x6d28,	// (0x00014c1e) aid_size_cell_brow_shortcut

0xa76f,	// (0x00018665) bg_popup_window_pane_cp010

0x6d34,	// (0x00014c2a) grid_scut_pane

0x6d40,	// (0x00014c36) cell_scut_pane_ParamLimits

0x6d40,	// (0x00014c36) cell_scut_pane

0x6d57,	// (0x00014c4d) cell_scut_pane_g1

0xd454,	// (0x0001b34a) cell_scut_pane_t1

0xd463,	// (0x0001b359) cell_scut_pane_t2

0x6d60,	// (0x00014c56) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0001d969) cell_scut_pane_t

0x4a63,	// (0x00012959) main_mup3_pane_g8_ParamLimits

0x4a63,	// (0x00012959) main_mup3_pane_g8

0x5eb3,	// (0x00013da9) area_vitu2_query_pane_ParamLimits

0x5eb3,	// (0x00013da9) area_vitu2_query_pane

0x6aa1,	// (0x00014997) input_focus_pane_cp08

0xd472,	// (0x0001b368) area_vitu2_query_pane_g1

0x6d6e,	// (0x00014c64) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0001d970) area_vitu2_query_pane_g

0x6d7f,	// (0x00014c75) area_vitu2_query_pane_t1_ParamLimits

0x6d7f,	// (0x00014c75) area_vitu2_query_pane_t1

0x6d93,	// (0x00014c89) area_vitu2_query_pane_t2_ParamLimits

0x6d93,	// (0x00014c89) area_vitu2_query_pane_t2

0x6da7,	// (0x00014c9d) area_vitu2_query_pane_t3_ParamLimits

0x6da7,	// (0x00014c9d) area_vitu2_query_pane_t3

0xd47e,	// (0x0001b374) area_vitu2_query_pane_t4_ParamLimits

0xd47e,	// (0x0001b374) area_vitu2_query_pane_t4

0xd4a6,	// (0x0001b39c) area_vitu2_query_pane_t5_ParamLimits

0xd4a6,	// (0x0001b39c) area_vitu2_query_pane_t5

0xd4ce,	// (0x0001b3c4) area_vitu2_query_pane_t6_ParamLimits

0xd4ce,	// (0x0001b3c4) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0001d975) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0001d975) area_vitu2_query_pane_t

0x6dcf,	// (0x00014cc5) bg_button_pane_cp018

0x6ddd,	// (0x00014cd3) bg_button_pane_cp021

0x6de9,	// (0x00014cdf) bg_button_pane_cp022

0x6df8,	// (0x00014cee) input_focus_pane_cp09

0x2a28,	// (0x0001091e) aid_size_touch_mv_arrow_left

0x2a51,	// (0x00010947) aid_size_touch_mv_arrow_right

0x65d8,	// (0x000144ce) main_cset_slider_pane_g16_ParamLimits

0x65d8,	// (0x000144ce) main_cset_slider_pane_g16

0x65e4,	// (0x000144da) main_cset_slider_pane_g17_ParamLimits

0x65e4,	// (0x000144da) main_cset_slider_pane_g17

0x6d15,	// (0x00014c0b) cell_cam4_burst_pane_g1_ParamLimits

0x9255,	// (0x0001714b) compa_mode_pane

0x67be,	// (0x000146b4) popup_vtel_slider_window_g3_ParamLimits

0x67be,	// (0x000146b4) popup_vtel_slider_window_g3

0x67d5,	// (0x000146cb) popup_vtel_slider_window_g4_ParamLimits

0x67d5,	// (0x000146cb) popup_vtel_slider_window_g4

0x67ec,	// (0x000146e2) popup_vtel_slider_window_t1_ParamLimits

0x67ec,	// (0x000146e2) popup_vtel_slider_window_t1

0x9255,	// (0x0001714b) main_cl_pane

0xbc54,	// (0x00019b4a) popup_imed_adjust2_window_ParamLimits

0xbc2c,	// (0x00019b22) bg_tb_trans_pane_cp05_ParamLimits

0xc643,	// (0x0001a539) popup_imed_adjust2_window_g1_ParamLimits

0xc652,	// (0x0001a548) popup_imed_adjust2_window_g2_ParamLimits

0xc652,	// (0x0001a548) popup_imed_adjust2_window_g2

0xc65e,	// (0x0001a554) popup_imed_adjust2_window_g3_ParamLimits

0xc65e,	// (0x0001a554) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0001d6e0) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0001d6e0) popup_imed_adjust2_window_g

0xc66a,	// (0x0001a560) popup_imed_adjust2_window_t1_ParamLimits

0xc682,	// (0x0001a578) slider_imed_adjust_pane_ParamLimits

0xc696,	// (0x0001a58c) slider_imed_adjust_pane_g1_ParamLimits

0xc6a6,	// (0x0001a59c) slider_imed_adjust_pane_g2_ParamLimits

0xc6b6,	// (0x0001a5ac) slider_imed_adjust_pane_g3_ParamLimits

0xc6c7,	// (0x0001a5bd) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0001d6e7) slider_imed_adjust_pane_g_ParamLimits

0x5c3c,	// (0x00013b32) aid_touch_area_cam4_ParamLimits

0x5c3c,	// (0x00013b32) aid_touch_area_cam4

0xcdce,	// (0x0001acc4) battery_pane_cp01

0x5d0b,	// (0x00013c01) main_camera4_pane_g6_ParamLimits

0x5d0b,	// (0x00013c01) main_camera4_pane_g6

0x5d35,	// (0x00013c2b) main_camera4_pane_t2_ParamLimits

0x5d35,	// (0x00013c2b) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0001d7ea) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0001d7ea) main_camera4_pane_t

0x5d6a,	// (0x00013c60) aid_touch_area_vid4_ParamLimits

0x5d6a,	// (0x00013c60) aid_touch_area_vid4

0x5dbe,	// (0x00013cb4) main_video4_pane_g5_ParamLimits

0x5dbe,	// (0x00013cb4) main_video4_pane_g5

0x5de3,	// (0x00013cd9) vid4_progress_pane_ParamLimits

0x5de3,	// (0x00013cd9) vid4_progress_pane

0xd09f,	// (0x0001af95) main_cset_slider_pane_g18_ParamLimits

0xd09f,	// (0x0001af95) main_cset_slider_pane_g18

0xd33c,	// (0x0001b232) cell_cam4_burst_pane_g2_ParamLimits

0xd33c,	// (0x0001b232) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0001d949) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0001d949) cell_cam4_burst_pane_g

0x9a36,	// (0x0001792c) bg_cl_pane_ParamLimits

0x9a36,	// (0x0001792c) bg_cl_pane

0x6e07,	// (0x00014cfd) cl_header_pane_ParamLimits

0x6e07,	// (0x00014cfd) cl_header_pane

0x6e1b,	// (0x00014d11) cl_listscroll_pane_ParamLimits

0x6e1b,	// (0x00014d11) cl_listscroll_pane

0xd51a,	// (0x0001b410) bg_cl_pane_g1

0xd522,	// (0x0001b418) bg_cl_pane_g2

0xd52a,	// (0x0001b420) bg_cl_pane_g3

0xd532,	// (0x0001b428) bg_cl_pane_g4

0xd53a,	// (0x0001b430) bg_cl_pane_g5

0xd542,	// (0x0001b438) bg_cl_pane_g6

0xd54a,	// (0x0001b440) bg_cl_pane_g7

0xd552,	// (0x0001b448) bg_cl_pane_g8

0xd55a,	// (0x0001b450) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0001d984) bg_cl_pane_g

0x6e2b,	// (0x00014d21) aid_height_cl_leading_ParamLimits

0x6e2b,	// (0x00014d21) aid_height_cl_leading

0x6e37,	// (0x00014d2d) aid_height_cl_text_ParamLimits

0x6e37,	// (0x00014d2d) aid_height_cl_text

0x92c5,	// (0x000171bb) bg_cl_header_pane_ParamLimits

0x92c5,	// (0x000171bb) bg_cl_header_pane

0x6e56,	// (0x00014d4c) cl_header_pane_g1_ParamLimits

0x6e56,	// (0x00014d4c) cl_header_pane_g1

0x6e6c,	// (0x00014d62) cl_header_pane_t1_ParamLimits

0x6e6c,	// (0x00014d62) cl_header_pane_t1

0xd562,	// (0x0001b458) cl_list_pane

0xd072,	// (0x0001af68) hc_scroll_pane_cp01

0x9f26,	// (0x00017e1c) bg_cl_header_pane_g1

0xcf58,	// (0x0001ae4e) bg_cl_header_pane_g2

0x9f46,	// (0x00017e3c) bg_cl_header_pane_g3

0xcf68,	// (0x0001ae5e) bg_cl_header_pane_g4

0xcf60,	// (0x0001ae56) bg_cl_header_pane_g5

0xd211,	// (0x0001b107) bg_cl_header_pane_g6

0xcf80,	// (0x0001ae76) bg_cl_header_pane_g7

0xcf88,	// (0x0001ae7e) bg_cl_header_pane_g8

0xcf78,	// (0x0001ae6e) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0001d997) bg_cl_header_pane_g

0x6e85,	// (0x00014d7b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e85,	// (0x00014d7b) hc_cl_list_double_graphic_heading_pane

0x6e96,	// (0x00014d8c) hc_cl_list_single_graphic_pane_ParamLimits

0x6e96,	// (0x00014d8c) hc_cl_list_single_graphic_pane

0x6eac,	// (0x00014da2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6eac,	// (0x00014da2) hc_cl_list_single_graphic_pane_g1

0x6eb8,	// (0x00014dae) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6eb8,	// (0x00014dae) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0001d9aa) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0001d9aa) hc_cl_list_single_graphic_pane_g

0x6ecc,	// (0x00014dc2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ecc,	// (0x00014dc2) hc_cl_list_single_graphic_pane_t1

0x6eac,	// (0x00014da2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6eac,	// (0x00014da2) hc_cl_list_double_graphic_heading_pane_g1

0x6ee1,	// (0x00014dd7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ee1,	// (0x00014dd7) hc_cl_list_double_graphic_heading_pane_g2

0x6ef5,	// (0x00014deb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ef5,	// (0x00014deb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0001d9af) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0001d9af) hc_cl_list_double_graphic_heading_pane_g

0x6f09,	// (0x00014dff) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6f09,	// (0x00014dff) hc_cl_list_double_graphic_heading_pane_t1

0x6f1e,	// (0x00014e14) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f1e,	// (0x00014e14) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0001d9b6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0001d9b6) hc_cl_list_double_graphic_heading_pane_t

0x6f33,	// (0x00014e29) vid4_progress_pane_g1

0x6f45,	// (0x00014e3b) vid4_progress_pane_g2

0xa9b7,	// (0x000188ad) vid4_progress_pane_g3

0xd573,	// (0x0001b469) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0001d9bb) vid4_progress_pane_g

0xd591,	// (0x0001b487) vid4_progress_pane_t1

0xd5a6,	// (0x0001b49c) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0001d9c6) vid4_progress_pane_t

0xd5d1,	// (0x0001b4c7) wait_bar_pane_cp07

0xbf25,	// (0x00019e1b) blid_firmament_pane_ParamLimits

0xbf68,	// (0x00019e5e) popup_blid_sat_info2_window_g1

0xbf8c,	// (0x00019e82) popup_blid_sat_info2_window_t3

0xbf9a,	// (0x00019e90) popup_blid_sat_info2_window_t4

0xbfa8,	// (0x00019e9e) popup_blid_sat_info2_window_t5

0xbfb6,	// (0x00019eac) popup_blid_sat_info2_window_t6

0xbfc6,	// (0x00019ebc) popup_blid_sat_info2_window_t7

0xbfd4,	// (0x00019eca) popup_blid_sat_info2_window_t8

0xbfe2,	// (0x00019ed8) popup_blid_sat_info2_window_t9

0xbff0,	// (0x00019ee6) popup_blid_sat_info2_window_t10

0xc0b2,	// (0x00019fa8) aid_firma_cardinal_ParamLimits

0xc0c6,	// (0x00019fbc) blid_firmament_pane_t1_ParamLimits

0xc0dd,	// (0x00019fd3) blid_firmament_pane_t2_ParamLimits

0xc0f4,	// (0x00019fea) blid_firmament_pane_t3_ParamLimits

0xc10b,	// (0x0001a001) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0001d5d9) blid_firmament_pane_t_ParamLimits

0xc122,	// (0x0001a018) blid_sat_info_pane_ParamLimits

0x92c5,	// (0x000171bb) main_cam_set_pane_ParamLimits

0x5315,	// (0x0001320b) aid_size_cell_colour_35_ParamLimits

0x5335,	// (0x0001322b) aid_size_cell_colour_112_ParamLimits

0x5355,	// (0x0001324b) aid_size_cell_effect_ParamLimits

0xbc2c,	// (0x00019b22) bg_tb_trans_pane_cp02_ParamLimits

0xa1ca,	// (0x000180c0) heading_imed_pane_ParamLimits

0x5375,	// (0x0001326b) listscroll_imed_pane_ParamLimits

0xb25e,	// (0x00019154) popup_call2_audio_first_window_g5_ParamLimits

0xb25e,	// (0x00019154) popup_call2_audio_first_window_g5

0x58e7,	// (0x000137dd) aid_size_touch_image3_arrow_left_ParamLimits

0x58e7,	// (0x000137dd) aid_size_touch_image3_arrow_left

0x5913,	// (0x00013809) aid_size_touch_image3_arrow_right_ParamLimits

0x5913,	// (0x00013809) aid_size_touch_image3_arrow_right

0xd5bc,	// (0x0001b4b2) vid4_progress_pane_t3

0x5688,	// (0x0001357e) main_hwr_training_symbol_option_pane_ParamLimits

0x5688,	// (0x0001357e) main_hwr_training_symbol_option_pane

0xc930,	// (0x0001a826) popup_hwr_training_preview_window_ParamLimits

0xc930,	// (0x0001a826) popup_hwr_training_preview_window

0x56a8,	// (0x0001359e) hwr_training_navi_pane_g5_ParamLimits

0x56a8,	// (0x0001359e) hwr_training_navi_pane_g5

0xcf46,	// (0x0001ae3c) popup_char_count_window

0x92c5,	// (0x000171bb) bg_popup_sub_pane_cp20_ParamLimits

0x6904,	// (0x000147fa) list_vitu2_match_list_pane_ParamLimits

0x6913,	// (0x00014809) vitu2_page_scroll_pane_ParamLimits

0x6913,	// (0x00014809) vitu2_page_scroll_pane

0xd63d,	// (0x0001b533) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd63d,	// (0x0001b533) list_single_hwr_training_symbol_option_pane

0xd650,	// (0x0001b546) list_single_hwr_training_symbol_option_pane_g1

0xd658,	// (0x0001b54e) list_single_hwr_training_symbol_option_pane_t1

0xd666,	// (0x0001b55c) bg_button_pane_cp023

0xd66f,	// (0x0001b565) bg_button_pane_cp024

0x6f57,	// (0x00014e4d) vitu2_page_scroll_pane_g1

0x6f5f,	// (0x00014e55) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0001d9cd) vitu2_page_scroll_pane_g

0x6f67,	// (0x00014e5d) vitu2_page_scroll_pane_t1

0xd6a2,	// (0x0001b598) popup_char_count_window_g1

0xd6ab,	// (0x0001b5a1) popup_char_count_window_g2

0xd6b4,	// (0x0001b5aa) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0001d9d2) popup_char_count_window_g

0xd6bd,	// (0x0001b5b3) popup_char_count_window_t1

0x9255,	// (0x0001714b) main_vded2_pane

0xc62f,	// (0x0001a525) aid_size_cell_imed_line

0xc639,	// (0x0001a52f) grid_imed_line_width_pane

0xce86,	// (0x0001ad7c) vid4_indicators_pane_g4

0xd6cb,	// (0x0001b5c1) cell_imed_line_width_pane_ParamLimits

0xd6cb,	// (0x0001b5c1) cell_imed_line_width_pane

0xd6df,	// (0x0001b5d5) cell_imed_line_width_pane_g1

0xd6e8,	// (0x0001b5de) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0001d9d9) cell_imed_line_width_pane_g

0x6f76,	// (0x00014e6c) main_vded2_pane_g1_ParamLimits

0x6f76,	// (0x00014e6c) main_vded2_pane_g1

0x6f8c,	// (0x00014e82) main_vded2_pane_g2_ParamLimits

0x6f8c,	// (0x00014e82) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0001d9de) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0001d9de) main_vded2_pane_g

0x6f9e,	// (0x00014e94) vded2_slider_pane_ParamLimits

0x6f9e,	// (0x00014e94) vded2_slider_pane

0x6fae,	// (0x00014ea4) aid_size_touch_vded2_end

0x6fb8,	// (0x00014eae) aid_size_touch_vded2_playhead

0xd6f0,	// (0x0001b5e6) aid_size_touch_vded2_start

0xd6f8,	// (0x0001b5ee) vded2_slider_bg_pane

0xd701,	// (0x0001b5f7) vded2_slider_pane_g1

0xd70a,	// (0x0001b600) vded2_slider_pane_g2

0x6fc2,	// (0x00014eb8) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0001d9e3) vded2_slider_pane_g

0xd712,	// (0x0001b608) vded2_slider_bg_pane_g1

0xd71b,	// (0x0001b611) vded2_slider_bg_pane_g2

0xd724,	// (0x0001b61a) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0001d9ea) vded2_slider_bg_pane_g

0x3078,	// (0x00010f6e) aid_postcard_touch_down_pane_ParamLimits

0x3078,	// (0x00010f6e) aid_postcard_touch_down_pane

0x308e,	// (0x00010f84) aid_postcard_touch_up_pane_ParamLimits

0x308e,	// (0x00010f84) aid_postcard_touch_up_pane

0x9255,	// (0x0001714b) main_blid2_pane

0xbc3a,	// (0x00019b30) popup_blid2_search_window

0x9255,	// (0x0001714b) blid2_gps_pane

0x9255,	// (0x0001714b) blid2_navig_pane

0x9255,	// (0x0001714b) blid2_search_pane

0x9255,	// (0x0001714b) blid2_tripm_pane

0x6fcd,	// (0x00014ec3) blid2_search_pane_g1_ParamLimits

0x6fcd,	// (0x00014ec3) blid2_search_pane_g1

0x6fe7,	// (0x00014edd) blid2_search_pane_t1_ParamLimits

0x6fe7,	// (0x00014edd) blid2_search_pane_t1

0x6ff9,	// (0x00014eef) aid_size_cell_blid2_gps_ParamLimits

0x6ff9,	// (0x00014eef) aid_size_cell_blid2_gps

0x7011,	// (0x00014f07) blid2_gps_pane_g1_ParamLimits

0x7011,	// (0x00014f07) blid2_gps_pane_g1

0x7025,	// (0x00014f1b) grid_blid2_satellite_pane_ParamLimits

0x7025,	// (0x00014f1b) grid_blid2_satellite_pane

0x703f,	// (0x00014f35) blid2_navig_pane_g1_ParamLimits

0x703f,	// (0x00014f35) blid2_navig_pane_g1

0x704b,	// (0x00014f41) blid2_navig_pane_t1_ParamLimits

0x704b,	// (0x00014f41) blid2_navig_pane_t1

0x7066,	// (0x00014f5c) blid2_navig_pane_t2_ParamLimits

0x7066,	// (0x00014f5c) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0001d9f1) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0001d9f1) blid2_navig_pane_t

0x7081,	// (0x00014f77) blid2_navig_ring_pane_ParamLimits

0x7081,	// (0x00014f77) blid2_navig_ring_pane

0x709a,	// (0x00014f90) blid2_speed_pane_ParamLimits

0x709a,	// (0x00014f90) blid2_speed_pane

0x70a6,	// (0x00014f9c) blid2_tripm_pane_g1_ParamLimits

0x70a6,	// (0x00014f9c) blid2_tripm_pane_g1

0x70bf,	// (0x00014fb5) blid2_tripm_pane_g2_ParamLimits

0x70bf,	// (0x00014fb5) blid2_tripm_pane_g2

0x70d3,	// (0x00014fc9) blid2_tripm_pane_g3_ParamLimits

0x70d3,	// (0x00014fc9) blid2_tripm_pane_g3

0x70e7,	// (0x00014fdd) blid2_tripm_pane_g4_ParamLimits

0x70e7,	// (0x00014fdd) blid2_tripm_pane_g4

0x70fb,	// (0x00014ff1) blid2_tripm_pane_g5_ParamLimits

0x70fb,	// (0x00014ff1) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0001d9f6) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0001d9f6) blid2_tripm_pane_g

0x7121,	// (0x00015017) blid2_tripm_pane_t1_ParamLimits

0x7121,	// (0x00015017) blid2_tripm_pane_t1

0x713c,	// (0x00015032) blid2_tripm_pane_t2_ParamLimits

0x713c,	// (0x00015032) blid2_tripm_pane_t2

0x7155,	// (0x0001504b) blid2_tripm_pane_t3_ParamLimits

0x7155,	// (0x0001504b) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0001da03) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0001da03) blid2_tripm_pane_t

0x719c,	// (0x00015092) cell_blid2_satellite_pane_ParamLimits

0x719c,	// (0x00015092) cell_blid2_satellite_pane

0x71ba,	// (0x000150b0) cell_blid2_satellite_pane_g1

0xd72d,	// (0x0001b623) cell_blid2_satellite_pane_t1

0xc132,	// (0x0001a028) blid2_speed_pane_g1

0xd73b,	// (0x0001b631) blid2_speed_pane_t1

0xd749,	// (0x0001b63f) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0001da0c) blid2_speed_pane_t

0xc132,	// (0x0001a028) blid2_navig_ring_pane_g1

0x71c3,	// (0x000150b9) blid2_navig_ring_pane_g2

0x71cb,	// (0x000150c1) blid2_navig_ring_pane_g3

0x71d3,	// (0x000150c9) blid2_navig_ring_pane_g4

0x71db,	// (0x000150d1) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0001da11) blid2_navig_ring_pane_g

0x9255,	// (0x0001714b) bg_popup_window_pane_cp011

0xd757,	// (0x0001b64d) popup_blid2_search_window_g1

0xd75f,	// (0x0001b655) popup_blid2_search_window_t1

0xd76d,	// (0x0001b663) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0001da1c) popup_blid2_search_window_t

0x9e35,	// (0x00017d2b) main_browser_pane_g1

0x9a36,	// (0x0001792c) main_browser_pane_ParamLimits

0x92c5,	// (0x000171bb) bg_button_pane_cp011_ParamLimits

0x61b4,	// (0x000140aa) cell_vitu2_function_pane_g1_ParamLimits

0xbc2c,	// (0x00019b22) bg_popup_sub_pane_cp22_ParamLimits

0x6aa1,	// (0x00014997) input_focus_pane_cp08_ParamLimits

0x6ab8,	// (0x000149ae) popup_vitu2_query_button_pane_ParamLimits

0x6ab8,	// (0x000149ae) popup_vitu2_query_button_pane

0x6ac9,	// (0x000149bf) popup_vitu2_query_input_button_pane

0xd286,	// (0x0001b17c) popup_vitu2_query_window_g1_ParamLimits

0x6ad3,	// (0x000149c9) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0001d91d) popup_vitu2_query_window_g_ParamLimits

0x9255,	// (0x0001714b) bg_button_pane_cp026

0x71e3,	// (0x000150d9) popup_vitu2_query_input_button_pane_g1

0x9255,	// (0x0001714b) bg_button_pane_cp025

0xd77b,	// (0x0001b671) popup_vitu2_query_button_pane_t1

0x4712,	// (0x00012608) main_mp3_pane_t6

0x4720,	// (0x00012616) popup_slider_window_cp01

0xcdea,	// (0x0001ace0) cam4_battery_pane

0xce43,	// (0x0001ad39) cam4_battery_pane_cp02

0xd56b,	// (0x0001b461) cam4_battery_pane_cp01

0xd56b,	// (0x0001b461) cam4_battery_pane_cp03

0xc132,	// (0x0001a028) cam4_battery_pane_g1

0xd789,	// (0x0001b67f) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0001da21) cam4_battery_pane_g

0xbffe,	// (0x00019ef4) popup_blid_sat_info2_window_t11

0x2a28,	// (0x0001091e) aid_size_touch_mv_arrow_left_ParamLimits

0x2a51,	// (0x00010947) aid_size_touch_mv_arrow_right_ParamLimits

0xa6cf,	// (0x000185c5) navi_pane_g1_ParamLimits

0x2a90,	// (0x00010986) navi_pane_g2_ParamLimits

0x2abe,	// (0x000109b4) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0001d2eb) navi_pane_g_ParamLimits

0x2b16,	// (0x00010a0c) navi_pane_mv_t1_ParamLimits

0x5381,	// (0x00013277) grid_imed_effect_pane_ParamLimits

0x19bc,	// (0x0000f8b2) aid_placing_vt_slider_lsc

0x9d84,	// (0x00017c7a) aid_placing_vt_slider_prt

0x92c5,	// (0x000171bb) bg_tb_trans_pane_cp01_ParamLimits

0xc2be,	// (0x0001a1b4) popup_image_details_window_g1_ParamLimits

0xc2d1,	// (0x0001a1c7) popup_image_details_window_g2_ParamLimits

0xc2e6,	// (0x0001a1dc) popup_image_details_window_g3_ParamLimits

0xc2e6,	// (0x0001a1dc) popup_image_details_window_g3

0xf728,	// (0x0001d61e) popup_image_details_window_g_ParamLimits

0xc2fa,	// (0x0001a1f0) popup_image_details_window_t1_ParamLimits

0xc30c,	// (0x0001a202) popup_image_details_window_t2_ParamLimits

0xc325,	// (0x0001a21b) popup_image_details_window_t3_ParamLimits

0xc339,	// (0x0001a22f) popup_image_details_window_t4_ParamLimits

0xc354,	// (0x0001a24a) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0001d625) popup_image_details_window_t_ParamLimits

0x6e43,	// (0x00014d39) cl_header_name_pane_ParamLimits

0x6e43,	// (0x00014d39) cl_header_name_pane

0x71eb,	// (0x000150e1) cl_header_name_pane_t1_ParamLimits

0x71eb,	// (0x000150e1) cl_header_name_pane_t1

0x720c,	// (0x00015102) cl_header_name_pane_t2_ParamLimits

0x720c,	// (0x00015102) cl_header_name_pane_t2

0x724e,	// (0x00015144) cl_header_name_pane_t3_ParamLimits

0x724e,	// (0x00015144) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0001da26) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0001da26) cl_header_name_pane_t

0x2ae7,	// (0x000109dd) navi_pane_mv_g2_ParamLimits

0xced4,	// (0x0001adca) field_vitu2_entry_pane_g1_ParamLimits

0xcee0,	// (0x0001add6) field_vitu2_entry_pane_g2_ParamLimits

0xceec,	// (0x0001ade2) field_vitu2_entry_pane_g3_ParamLimits

0xceec,	// (0x0001ade2) field_vitu2_entry_pane_g3

0xf926,	// (0x0001d81c) field_vitu2_entry_pane_g_ParamLimits

0x6054,	// (0x00013f4a) cell_vitu2_itu_pane_g1_ParamLimits

0x6064,	// (0x00013f5a) cell_vitu2_itu_pane_g2_ParamLimits

0x6064,	// (0x00013f5a) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0001d828) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0001d828) cell_vitu2_itu_pane_g

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp05_ParamLimits

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp05

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp03

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp04

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp10_ParamLimits

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp10

0x6de9,	// (0x00014cdf) bg_vkb2_func_pane_cp08

0x6dcf,	// (0x00014cc5) bg_vkb2_func_pane_cp06

0x6ddd,	// (0x00014cd3) bg_vkb2_func_pane_cp07

0xd678,	// (0x0001b56e) bg_vkb2_func_pane_cp11_ParamLimits

0xd678,	// (0x0001b56e) bg_vkb2_func_pane_cp11

0xd68d,	// (0x0001b583) bg_vkb2_func_pane_cp12_ParamLimits

0xd68d,	// (0x0001b583) bg_vkb2_func_pane_cp12

0x9255,	// (0x0001714b) bg_vkb2_func_pane_cp09

0xcf58,	// (0x0001ae4e) bg_vkb2_func_pane_g1

0x9f46,	// (0x00017e3c) bg_vkb2_func_pane_g2

0xcf60,	// (0x0001ae56) bg_vkb2_func_pane_g3

0xcf68,	// (0x0001ae5e) bg_vkb2_func_pane_g4

0xd211,	// (0x0001b107) bg_vkb2_func_pane_g5

0xcf80,	// (0x0001ae76) bg_vkb2_func_pane_g6

0xcf88,	// (0x0001ae7e) bg_vkb2_func_pane_g7

0xcf78,	// (0x0001ae6e) bg_vkb2_func_pane_g8

0x9f26,	// (0x00017e1c) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0001da2d) bg_vkb2_func_pane_g

0x710f,	// (0x00015005) blid2_tripm_pane_g6_ParamLimits

0x710f,	// (0x00015005) blid2_tripm_pane_g6

0xcc3d,	// (0x0001ab33) mp4_progress_pane_g1

0x7188,	// (0x0001507e) blid2_tripm_values_pane_ParamLimits

0x7188,	// (0x0001507e) blid2_tripm_values_pane

0x727f,	// (0x00015175) blid2_tripm_values_pane_t1

0x728d,	// (0x00015183) blid2_tripm_values_pane_t2

0x729b,	// (0x00015191) blid2_tripm_values_pane_t3

0x72a9,	// (0x0001519f) blid2_tripm_values_pane_t4

0x72b7,	// (0x000151ad) blid2_tripm_values_pane_t5

0x72c5,	// (0x000151bb) blid2_tripm_values_pane_t6

0x72d3,	// (0x000151c9) blid2_tripm_values_pane_t7

0x72e1,	// (0x000151d7) blid2_tripm_values_pane_t8

0x72ef,	// (0x000151e5) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0001da40) blid2_tripm_values_pane_t

0x19fe,	// (0x0000f8f4) call_video_pane_t1_ParamLimits

0x1a1c,	// (0x0000f912) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0001d174) call_video_pane_t_ParamLimits

0x2fe2,	// (0x00010ed8) msg_header_pane_g1_ParamLimits

0xa912,	// (0x00018808) msg_header_pane_g2_ParamLimits

0xa912,	// (0x00018808) msg_header_pane_g2

0x0001,

0xf498,	// (0x0001d38e) msg_header_pane_g_ParamLimits

0xf498,	// (0x0001d38e) msg_header_pane_g

0x9a36,	// (0x0001792c) main_clock2_pane_ParamLimits

0x5094,	// (0x00012f8a) grid_clock2_toolbar_pane_ParamLimits

0x5094,	// (0x00012f8a) grid_clock2_toolbar_pane

0x5094,	// (0x00012f8a) listscroll_clock2_pane_ParamLimits

0x5094,	// (0x00012f8a) listscroll_clock2_pane

0x5176,	// (0x0001306c) main_clock2_pane_t3_ParamLimits

0x5176,	// (0x0001306c) main_clock2_pane_t3

0x5199,	// (0x0001308f) main_clock2_pane_t4_ParamLimits

0x5199,	// (0x0001308f) main_clock2_pane_t4

0xd793,	// (0x0001b689) cell_clock2_toolbar_pane

0xd79b,	// (0x0001b691) cell_clock2_toolbar_pane_cp01

0xd79b,	// (0x0001b691) cell_clock2_toolbar_pane_cp02

0xd7a3,	// (0x0001b699) cell_clock2_toolbar_pane_cp03

0xd7ab,	// (0x0001b6a1) list_clock2_pane

0xa626,	// (0x0001851c) scroll_pane_cp10

0xd7b3,	// (0x0001b6a9) list_single_clock2_pane_ParamLimits

0xd7b3,	// (0x0001b6a9) list_single_clock2_pane

0xa76f,	// (0x00018665) list_highlight_pane_cp08

0xd7c0,	// (0x0001b6b6) list_single_clock2_pane_t1

0xd7ce,	// (0x0001b6c4) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0001da53) list_single_clock2_pane_t

0x9255,	// (0x0001714b) bg_button_pane_cp10

0xd7dc,	// (0x0001b6d2) cell_clock2_toolbar_pane_g1

0x3004,	// (0x00010efa) aid_main_viewer_pane_g1_ParamLimits

0x3004,	// (0x00010efa) aid_main_viewer_pane_g1

0x3012,	// (0x00010f08) aid_main_viewer_pane_g2_ParamLimits

0x3012,	// (0x00010f08) aid_main_viewer_pane_g2

0x3020,	// (0x00010f16) aid_main_viewer_pane_g3_ParamLimits

0x3020,	// (0x00010f16) aid_main_viewer_pane_g3

0x302f,	// (0x00010f25) aid_main_viewer_pane_g4_ParamLimits

0x302f,	// (0x00010f25) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0001d39f) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0001d39f) aid_main_viewer_pane_g

0x3935,	// (0x0001182b) main_calc_pane_ParamLimits

0x3949,	// (0x0001183f) main_dialer2_pane_ParamLimits

0x9255,	// (0x0001714b) main_cam6_pane

0x9255,	// (0x0001714b) main_vid6_pane

0x50a0,	// (0x00012f96) listscroll_gen_pane_cp06_ParamLimits

0x50a0,	// (0x00012f96) listscroll_gen_pane_cp06

0x51bc,	// (0x000130b2) main_clock2_pane_t5_ParamLimits

0x51bc,	// (0x000130b2) main_clock2_pane_t5

0x5216,	// (0x0001310c) aid_call2_pane_cp10_ParamLimits

0x5228,	// (0x0001311e) aid_call_pane_cp10_ParamLimits

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x523a,	// (0x00013130) popup_clock_analogue_window_cp10_g3_ParamLimits

0x523a,	// (0x00013130) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6a4,	// (0x0001859a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0001d6d5) popup_clock_analogue_window_cp10_g_ParamLimits

0x524c,	// (0x00013142) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5894,	// (0x0001378a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5894,	// (0x0001378a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0001d7bb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0001d7bb) cell_dialer2_keypad_pane_g

0x58b0,	// (0x000137a6) cell_dialer2_keypad_pane_t1

0x64cb,	// (0x000143c1) main_cset_text2_pane_ParamLimits

0x64cb,	// (0x000143c1) main_cset_text2_pane

0xd472,	// (0x0001b368) area_vitu2_query_pane_g1_ParamLimits

0x6d6e,	// (0x00014c64) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0001d970) area_vitu2_query_pane_g_ParamLimits

0xd4f6,	// (0x0001b3ec) area_vitu2_query_pane_t7_ParamLimits

0xd4f6,	// (0x0001b3ec) area_vitu2_query_pane_t7

0x6dcf,	// (0x00014cc5) bg_button_pane_cp018_ParamLimits

0x6ddd,	// (0x00014cd3) bg_button_pane_cp021_ParamLimits

0x6de9,	// (0x00014cdf) bg_button_pane_cp022_ParamLimits

0x6de9,	// (0x00014cdf) bg_vkb2_func_pane_cp08_ParamLimits

0x6dcf,	// (0x00014cc5) bg_vkb2_func_pane_cp06_ParamLimits

0x6ddd,	// (0x00014cd3) bg_vkb2_func_pane_cp07_ParamLimits

0x6df8,	// (0x00014cee) input_focus_pane_cp09_ParamLimits

0xd7e4,	// (0x0001b6da) cam6_autofocus_pane_ParamLimits

0xd7e4,	// (0x0001b6da) cam6_autofocus_pane

0x72fd,	// (0x000151f3) cam6_image_uncrop_pane_ParamLimits

0x72fd,	// (0x000151f3) cam6_image_uncrop_pane

0x730c,	// (0x00015202) cam6_indi_pane_ParamLimits

0x730c,	// (0x00015202) cam6_indi_pane

0x7322,	// (0x00015218) cam6_mode_pane_ParamLimits

0x7322,	// (0x00015218) cam6_mode_pane

0x7334,	// (0x0001522a) cam6_timer_pane_ParamLimits

0x7334,	// (0x0001522a) cam6_timer_pane

0x7340,	// (0x00015236) cam6_zoom_pane_ParamLimits

0x7340,	// (0x00015236) cam6_zoom_pane

0x734c,	// (0x00015242) cam6_mode_pane_g1_ParamLimits

0x734c,	// (0x00015242) cam6_mode_pane_g1

0x735c,	// (0x00015252) cam6_mode_pane_g2_ParamLimits

0x735c,	// (0x00015252) cam6_mode_pane_g2

0x736c,	// (0x00015262) cam6_mode_pane_g3_ParamLimits

0x736c,	// (0x00015262) cam6_mode_pane_g3

0x737c,	// (0x00015272) cam6_mode_pane_g4_ParamLimits

0x737c,	// (0x00015272) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0001da58) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0001da58) cam6_mode_pane_g

0xd7f2,	// (0x0001b6e8) bg_tb_trans_pane_cp08_ParamLimits

0xd7f2,	// (0x0001b6e8) bg_tb_trans_pane_cp08

0xd800,	// (0x0001b6f6) cam6_battery_pane_ParamLimits

0xd800,	// (0x0001b6f6) cam6_battery_pane

0xd816,	// (0x0001b70c) cam6_indi_pane_g1_ParamLimits

0xd816,	// (0x0001b70c) cam6_indi_pane_g1

0xd828,	// (0x0001b71e) cam6_indi_pane_g2_ParamLimits

0xd828,	// (0x0001b71e) cam6_indi_pane_g2

0xd83a,	// (0x0001b730) cam6_indi_pane_g3_ParamLimits

0xd83a,	// (0x0001b730) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0001da61) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0001da61) cam6_indi_pane_g

0xd84c,	// (0x0001b742) cam6_indi_pane_t1_ParamLimits

0xd84c,	// (0x0001b742) cam6_indi_pane_t1

0x738c,	// (0x00015282) cam6_autofocus_pane_g1

0x7394,	// (0x0001528a) cam6_autofocus_pane_g2

0x739c,	// (0x00015292) cam6_autofocus_pane_g3

0x73a4,	// (0x0001529a) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0001da68) cam6_autofocus_pane_g

0xd872,	// (0x0001b768) cam6_timer_pane_g1

0xd87a,	// (0x0001b770) cam6_timer_pane_t1

0xd888,	// (0x0001b77e) cam6_zoom_cont_pane

0xd890,	// (0x0001b786) cam6_zoom_pane_g1

0xd898,	// (0x0001b78e) cam6_zoom_pane_g2

0x73ac,	// (0x000152a2) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0001da71) cam6_zoom_pane_g

0xc132,	// (0x0001a028) cam6_battery_pane_g1

0xc132,	// (0x0001a028) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0001d5e2) cam6_battery_pane_g

0xd8a0,	// (0x0001b796) cam6_zoom_cont_pane_g1

0xd8a9,	// (0x0001b79f) cam6_zoom_cont_pane_g2

0xd8b2,	// (0x0001b7a8) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0001da78) cam6_zoom_cont_pane_g

0x73c9,	// (0x000152bf) cam6_mode_pane_cp_ParamLimits

0x73c9,	// (0x000152bf) cam6_mode_pane_cp

0x7340,	// (0x00015236) cam6_zoom_pane_cp_ParamLimits

0x7340,	// (0x00015236) cam6_zoom_pane_cp

0x73db,	// (0x000152d1) vid6_image_uncrop_cif_pane_ParamLimits

0x73db,	// (0x000152d1) vid6_image_uncrop_cif_pane

0x73eb,	// (0x000152e1) vid6_image_uncrop_nhd_pane_ParamLimits

0x73eb,	// (0x000152e1) vid6_image_uncrop_nhd_pane

0x72fd,	// (0x000151f3) vid6_image_uncrop_vga_pane_ParamLimits

0x72fd,	// (0x000151f3) vid6_image_uncrop_vga_pane

0x73fa,	// (0x000152f0) vid6_image_uncrop_wvga_pane_ParamLimits

0x73fa,	// (0x000152f0) vid6_image_uncrop_wvga_pane

0x7409,	// (0x000152ff) vid6_indi_pane_ParamLimits

0x7409,	// (0x000152ff) vid6_indi_pane

0xd7f2,	// (0x0001b6e8) bg_tb_trans_pane_cp09_ParamLimits

0xd7f2,	// (0x0001b6e8) bg_tb_trans_pane_cp09

0xd8ca,	// (0x0001b7c0) cam6_battery_pane_cp_ParamLimits

0xd8ca,	// (0x0001b7c0) cam6_battery_pane_cp

0xd8d6,	// (0x0001b7cc) vid6_indi_pane_g1_ParamLimits

0xd8d6,	// (0x0001b7cc) vid6_indi_pane_g1

0xd8e8,	// (0x0001b7de) vid6_indi_pane_g2_ParamLimits

0xd8e8,	// (0x0001b7de) vid6_indi_pane_g2

0xd8fa,	// (0x0001b7f0) vid6_indi_pane_g3_ParamLimits

0xd8fa,	// (0x0001b7f0) vid6_indi_pane_g3

0xd90f,	// (0x0001b805) vid6_indi_pane_g4_ParamLimits

0xd90f,	// (0x0001b805) vid6_indi_pane_g4

0xd924,	// (0x0001b81a) vid6_indi_pane_g5_ParamLimits

0xd924,	// (0x0001b81a) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0001da7f) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0001da7f) vid6_indi_pane_g

0xd93e,	// (0x0001b834) vid6_indi_pane_t1_ParamLimits

0xd93e,	// (0x0001b834) vid6_indi_pane_t1

0xd954,	// (0x0001b84a) vid6_indi_pane_t2_ParamLimits

0xd954,	// (0x0001b84a) vid6_indi_pane_t2

0xd97c,	// (0x0001b872) vid6_indi_pane_t3_ParamLimits

0xd97c,	// (0x0001b872) vid6_indi_pane_t3

0xd9a4,	// (0x0001b89a) vid6_indi_pane_t4_ParamLimits

0xd9a4,	// (0x0001b89a) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0001da8a) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0001da8a) vid6_indi_pane_t

0xd9c8,	// (0x0001b8be) wait_bar_pane_cp08

0x7421,	// (0x00015317) main_cset_text2_pane_t1_ParamLimits

0x7421,	// (0x00015317) main_cset_text2_pane_t1

0x73b4,	// (0x000152aa) listscroll_gen_pane_cp06_t1_ParamLimits

0x73b4,	// (0x000152aa) listscroll_gen_pane_cp06_t1

0x9255,	// (0x0001714b) main_cam6_set_pane

0xc39e,	// (0x0001a294) bg_tb_trans_pane_cp06_ParamLimits

0xcdf2,	// (0x0001ace8) cam4_indicators_pane_g1_ParamLimits

0xce03,	// (0x0001acf9) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0001d7f8) cam4_indicators_pane_g_ParamLimits

0xce21,	// (0x0001ad17) cam4_indicators_pane_t1_ParamLimits

0x92c5,	// (0x000171bb) bg_tb_trans_pane_cp07_ParamLimits

0xce4d,	// (0x0001ad43) vid4_indicators_pane_g1_ParamLimits

0xce61,	// (0x0001ad57) vid4_indicators_pane_g2_ParamLimits

0xce75,	// (0x0001ad6b) vid4_indicators_pane_g3_ParamLimits

0xce86,	// (0x0001ad7c) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0001d80a) vid4_indicators_pane_g_ParamLimits

0xcea4,	// (0x0001ad9a) vid4_indicators_pane_t1_ParamLimits

0x6f33,	// (0x00014e29) vid4_progress_pane_g1_ParamLimits

0x6f45,	// (0x00014e3b) vid4_progress_pane_g2_ParamLimits

0xa9b7,	// (0x000188ad) vid4_progress_pane_g3_ParamLimits

0xd573,	// (0x0001b469) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0001d9bb) vid4_progress_pane_g_ParamLimits

0xd591,	// (0x0001b487) vid4_progress_pane_t1_ParamLimits

0xd5a6,	// (0x0001b49c) vid4_progress_pane_t2_ParamLimits

0xd5bc,	// (0x0001b4b2) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0001d9c6) vid4_progress_pane_t_ParamLimits

0xd5d1,	// (0x0001b4c7) wait_bar_pane_cp07_ParamLimits

0x743e,	// (0x00015334) main_cam6_set_pane_g2_ParamLimits

0x743e,	// (0x00015334) main_cam6_set_pane_g2

0x7462,	// (0x00015358) main_cset6_listscroll_pane_ParamLimits

0x7462,	// (0x00015358) main_cset6_listscroll_pane

0x7482,	// (0x00015378) main_cset6_slider_pane_ParamLimits

0x7482,	// (0x00015378) main_cset6_slider_pane

0x7498,	// (0x0001538e) main_cset6_text2_pane_ParamLimits

0x7498,	// (0x0001538e) main_cset6_text2_pane

0xd9d7,	// (0x0001b8cd) main_cset6_text_pane

0xd9df,	// (0x0001b8d5) main_cset_list_pane_copy1_ParamLimits

0xd9df,	// (0x0001b8d5) main_cset_list_pane_copy1

0xd9ef,	// (0x0001b8e5) scroll_pane_cp028_copy1

0x74a6,	// (0x0001539c) cset_list_set_pane_copy1

0x74b7,	// (0x000153ad) aid_position_infowindow_above_copy1

0x74bf,	// (0x000153b5) aid_position_infowindow_below_copy1

0x74c7,	// (0x000153bd) cset_list_set_pane_g1_copy1

0x74cf,	// (0x000153c5) cset_list_set_pane_g3_copy1_ParamLimits

0x74cf,	// (0x000153c5) cset_list_set_pane_g3_copy1

0x74de,	// (0x000153d4) cset_list_set_pane_t1_copy1_ParamLimits

0x74de,	// (0x000153d4) cset_list_set_pane_t1_copy1

0x92c5,	// (0x000171bb) list_highlight_pane_cp021_copy1_ParamLimits

0x92c5,	// (0x000171bb) list_highlight_pane_cp021_copy1

0xd9f8,	// (0x0001b8ee) cset6_slider_pane_ParamLimits

0xd9f8,	// (0x0001b8ee) cset6_slider_pane

0xda24,	// (0x0001b91a) main_cset6_slider_pane_g1_ParamLimits

0xda24,	// (0x0001b91a) main_cset6_slider_pane_g1

0x74f3,	// (0x000153e9) main_cset6_slider_pane_g2_ParamLimits

0x74f3,	// (0x000153e9) main_cset6_slider_pane_g2

0xda4c,	// (0x0001b942) main_cset6_slider_pane_g3_ParamLimits

0xda4c,	// (0x0001b942) main_cset6_slider_pane_g3

0x751b,	// (0x00015411) main_cset6_slider_pane_g4_ParamLimits

0x751b,	// (0x00015411) main_cset6_slider_pane_g4

0x7527,	// (0x0001541d) main_cset6_slider_pane_g5_ParamLimits

0x7527,	// (0x0001541d) main_cset6_slider_pane_g5

0xd087,	// (0x0001af7d) main_cset6_slider_pane_g7_ParamLimits

0xd087,	// (0x0001af7d) main_cset6_slider_pane_g7

0xd093,	// (0x0001af89) main_cset6_slider_pane_g8_ParamLimits

0xd093,	// (0x0001af89) main_cset6_slider_pane_g8

0x6578,	// (0x0001446e) main_cset6_slider_pane_g9_ParamLimits

0x6578,	// (0x0001446e) main_cset6_slider_pane_g9

0x6584,	// (0x0001447a) main_cset6_slider_pane_g10_ParamLimits

0x6584,	// (0x0001447a) main_cset6_slider_pane_g10

0x6590,	// (0x00014486) main_cset6_slider_pane_g11_ParamLimits

0x6590,	// (0x00014486) main_cset6_slider_pane_g11

0x659c,	// (0x00014492) main_cset6_slider_pane_g12_ParamLimits

0x659c,	// (0x00014492) main_cset6_slider_pane_g12

0x65a8,	// (0x0001449e) main_cset6_slider_pane_g13_ParamLimits

0x65a8,	// (0x0001449e) main_cset6_slider_pane_g13

0x65b4,	// (0x000144aa) main_cset6_slider_pane_g14_ParamLimits

0x65b4,	// (0x000144aa) main_cset6_slider_pane_g14

0x7533,	// (0x00015429) main_cset6_slider_pane_g15_ParamLimits

0x7533,	// (0x00015429) main_cset6_slider_pane_g15

0x65d8,	// (0x000144ce) main_cset6_slider_pane_g16_ParamLimits

0x65d8,	// (0x000144ce) main_cset6_slider_pane_g16

0x65e4,	// (0x000144da) main_cset6_slider_pane_g17_ParamLimits

0x65e4,	// (0x000144da) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0001da93) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0001da93) main_cset6_slider_pane_g

0xda58,	// (0x0001b94e) main_cset6_slider_pane_t1_ParamLimits

0xda58,	// (0x0001b94e) main_cset6_slider_pane_t1

0x7563,	// (0x00015459) main_cset6_slider_pane_t2_ParamLimits

0x7563,	// (0x00015459) main_cset6_slider_pane_t2

0x758e,	// (0x00015484) main_cset6_slider_pane_t3_ParamLimits

0x758e,	// (0x00015484) main_cset6_slider_pane_t3

0x75b9,	// (0x000154af) main_cset6_slider_pane_t4_ParamLimits

0x75b9,	// (0x000154af) main_cset6_slider_pane_t4

0x75e4,	// (0x000154da) main_cset6_slider_pane_t5_ParamLimits

0x75e4,	// (0x000154da) main_cset6_slider_pane_t5

0xda99,	// (0x0001b98f) main_cset6_slider_pane_t7_ParamLimits

0xda99,	// (0x0001b98f) main_cset6_slider_pane_t7

0x760f,	// (0x00015505) main_cset6_slider_pane_t8_ParamLimits

0x760f,	// (0x00015505) main_cset6_slider_pane_t8

0x7633,	// (0x00015529) main_cset6_slider_pane_t9_ParamLimits

0x7633,	// (0x00015529) main_cset6_slider_pane_t9

0x7657,	// (0x0001554d) main_cset6_slider_pane_t10_ParamLimits

0x7657,	// (0x0001554d) main_cset6_slider_pane_t10

0x767b,	// (0x00015571) main_cset6_slider_pane_t11_ParamLimits

0x767b,	// (0x00015571) main_cset6_slider_pane_t11

0xdacf,	// (0x0001b9c5) main_cset6_slider_pane_t14_ParamLimits

0xdacf,	// (0x0001b9c5) main_cset6_slider_pane_t14

0xdb08,	// (0x0001b9fe) main_cset6_slider_pane_t15_ParamLimits

0xdb08,	// (0x0001b9fe) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0001dab8) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0001dab8) main_cset6_slider_pane_t

0xd19b,	// (0x0001b091) cset_slider_pane_g1_copy1

0xd1a4,	// (0x0001b09a) cset_slider_pane_g2_copy1

0xd1ad,	// (0x0001b0a3) cset_slider_pane_g3_copy1

0x9255,	// (0x0001714b) bg_popup_sub_pane_cp011_copy1

0xdc12,	// (0x0001bb08) main_cset_text_pane_g1_copy1

0xd29a,	// (0x0001b190) main_cset_text_pane_t1_copy1

0xd2a8,	// (0x0001b19e) main_cset_text_pane_t2_copy1

0xd2b6,	// (0x0001b1ac) main_cset_text_pane_t3_copy1

0xd2c4,	// (0x0001b1ba) main_cset_text_pane_t4_copy1

0xd2d2,	// (0x0001b1c8) main_cset_text_pane_t5_copy1

0xdc1a,	// (0x0001bb10) main_cset_text_pane_t6_copy1

0xdc28,	// (0x0001bb1e) main_cset_text_pane_t7_copy1

0x7421,	// (0x00015317) main_cset_text2_pane_t1_copy1

0x92c5,	// (0x000171bb) main_ncimui_pane

0x3b8b,	// (0x00011a81) popup_query_ncimui_window_ParamLimits

0x3b8b,	// (0x00011a81) popup_query_ncimui_window

0xc403,	// (0x0001a2f9) field_cale_ev2_pane_g4_ParamLimits

0xc403,	// (0x0001a2f9) field_cale_ev2_pane_g4

0x5774,	// (0x0001366a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5774,	// (0x0001366a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0001d796) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0001d796) cell_video_dialer_keypad_pane_g

0x578c,	// (0x00013682) cell_video_dialer_keypad_pane_t1

0x9255,	// (0x0001714b) bg_popup_window_pane_cp012

0xa503,	// (0x000183f9) heading_pane_cp06

0xdc54,	// (0x0001bb4a) ncim_query_content_pane

0x9255,	// (0x0001714b) bg_popup_heading_pane_cp01

0xdc5c,	// (0x0001bb52) ncim_heading_pane_t1

0xdc6a,	// (0x0001bb60) ncim_indicator_popup_pane

0xdc7c,	// (0x0001bb72) ncim_query_button_pane

0xdc90,	// (0x0001bb86) ncim_query_content_pane_t1

0xdca2,	// (0x0001bb98) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0001dafc) ncim_query_content_pane_t

0xdcdc,	// (0x0001bbd2) ncim_query_list_pane

0xdcee,	// (0x0001bbe4) ncim_query_popup_pane

0xdc6a,	// (0x0001bb60) ncim_indicator_popup_pane_ParamLimits

0x77c5,	// (0x000156bb) ncim_query_content_pane_g1_ParamLimits

0x77c5,	// (0x000156bb) ncim_query_content_pane_g1

0xdc90,	// (0x0001bb86) ncim_query_content_pane_t1_ParamLimits

0xdca2,	// (0x0001bb98) ncim_query_content_pane_t2_ParamLimits

0x77d1,	// (0x000156c7) ncim_query_content_pane_t3_ParamLimits

0x77d1,	// (0x000156c7) ncim_query_content_pane_t3

0x77f9,	// (0x000156ef) ncim_query_content_pane_t4_ParamLimits

0x77f9,	// (0x000156ef) ncim_query_content_pane_t4

0x7821,	// (0x00015717) ncim_query_content_pane_t5_ParamLimits

0x7821,	// (0x00015717) ncim_query_content_pane_t5

0xdcb4,	// (0x0001bbaa) ncim_query_content_pane_t6_ParamLimits

0xdcb4,	// (0x0001bbaa) ncim_query_content_pane_t6

0xfc06,	// (0x0001dafc) ncim_query_content_pane_t_ParamLimits

0xdcdc,	// (0x0001bbd2) ncim_query_list_pane_ParamLimits

0xdcee,	// (0x0001bbe4) ncim_query_popup_pane_ParamLimits

0xdd02,	// (0x0001bbf8) wait_bar_pane_cp04

0x9255,	// (0x0001714b) input_focus_pane_cp011

0xdd0a,	// (0x0001bc00) ncim_query_popup_pane_t1

0xdd18,	// (0x0001bc0e) ncim_list_query_list_pane_ParamLimits

0xdd18,	// (0x0001bc0e) ncim_list_query_list_pane

0x9255,	// (0x0001714b) bg_button_pane_cp027

0xdd25,	// (0x0001bc1b) ncim_query_button_pane_g1

0x9255,	// (0x0001714b) list_highlight_pane_cp012

0xdd2f,	// (0x0001bc25) ncim_list_query_list_pane_g1

0xdd37,	// (0x0001bc2d) ncim_list_query_list_pane_t1

0xce12,	// (0x0001ad08) cam4_indicators_pane_g3_ParamLimits

0xce12,	// (0x0001ad08) cam4_indicators_pane_g3

0xce92,	// (0x0001ad88) vid4_indicators_pane_g5_ParamLimits

0xce92,	// (0x0001ad88) vid4_indicators_pane_g5

0xd582,	// (0x0001b478) vid4_progress_pane_g5_ParamLimits

0xd582,	// (0x0001b478) vid4_progress_pane_g5

0x76b3,	// (0x000155a9) main_ncimui_pane_g1

0x7719,	// (0x0001560f) ncimui_group_query_pane_ParamLimits

0x7719,	// (0x0001560f) ncimui_group_query_pane

0x7761,	// (0x00015657) ncimui_list_pane_ParamLimits

0x7761,	// (0x00015657) ncimui_list_pane

0x7788,	// (0x0001567e) ncimui_text_pane_ParamLimits

0x7788,	// (0x0001567e) ncimui_text_pane

0x7849,	// (0x0001573f) ncimui_text_pane_t1_ParamLimits

0x7849,	// (0x0001573f) ncimui_text_pane_t1

0xdd45,	// (0x0001bc3b) ncimui_list_single_graphic_pane_ParamLimits

0xdd45,	// (0x0001bc3b) ncimui_list_single_graphic_pane

0x7867,	// (0x0001575d) ncimui_query_pane_ParamLimits

0x7867,	// (0x0001575d) ncimui_query_pane

0x9255,	// (0x0001714b) list_highlight_pane_cp013

0xdd55,	// (0x0001bc4b) ncim_list_query_list_pane_t1_copy1

0xdd2f,	// (0x0001bc25) ncim_list_single_graphic_pane_g1

0xdd63,	// (0x0001bc59) ncim_query_button_pane_cp01

0xdd6f,	// (0x0001bc65) ncim_query_entry_pane_ParamLimits

0xdd6f,	// (0x0001bc65) ncim_query_entry_pane

0xdd82,	// (0x0001bc78) ncimui_query_pane_g1

0xdd8e,	// (0x0001bc84) ncimui_query_pane_t1_ParamLimits

0xdd8e,	// (0x0001bc84) ncimui_query_pane_t1

0x92c5,	// (0x000171bb) input_focus_pane_cp012

0xdda7,	// (0x0001bc9d) ncim_query_entry_pane_t1

0x9a36,	// (0x0001792c) main_im_pane_ParamLimits

0x92c5,	// (0x000171bb) main_mobtv_pane_ParamLimits

0x92c5,	// (0x000171bb) main_mobtv_pane

0x754b,	// (0x00015441) main_cset6_slider_pane_g18_ParamLimits

0x754b,	// (0x00015441) main_cset6_slider_pane_g18

0x7557,	// (0x0001544d) main_cset6_slider_pane_g19_ParamLimits

0x7557,	// (0x0001544d) main_cset6_slider_pane_g19

0xddb9,	// (0x0001bcaf) bg_main_mobtv_pane_ParamLimits

0xddb9,	// (0x0001bcaf) bg_main_mobtv_pane

0x787a,	// (0x00015770) main_mobtv_info_pane

0x7883,	// (0x00015779) main_mobtv_loading_pane_ParamLimits

0x7883,	// (0x00015779) main_mobtv_loading_pane

0xddc7,	// (0x0001bcbd) main_mobtv_pg_channel_list_pane

0xddd1,	// (0x0001bcc7) main_mobtv_pg_hdr_pane

0x7890,	// (0x00015786) main_mobtv_programe_curr_pane_ParamLimits

0x7890,	// (0x00015786) main_mobtv_programe_curr_pane

0x789d,	// (0x00015793) main_mobtv_programe_next_pane_ParamLimits

0x789d,	// (0x00015793) main_mobtv_programe_next_pane

0xddda,	// (0x0001bcd0) popup_mobtv_noti_window

0xc132,	// (0x0001a028) main_tv_pg_hdr_pane_g1

0xdde2,	// (0x0001bcd8) main_tv_pg_hdr_pane_g2

0xddea,	// (0x0001bce0) main_tv_pg_hdr_pane_g3

0xddf2,	// (0x0001bce8) main_tv_pg_hdr_pane_g4

0xddfa,	// (0x0001bcf0) main_tv_pg_hdr_pane_g5

0xde04,	// (0x0001bcfa) main_tv_pg_hdr_pane_g6

0xde0e,	// (0x0001bd04) main_tv_pg_hdr_pane_g7

0xde18,	// (0x0001bd0e) main_tv_pg_hdr_pane_g8

0xde22,	// (0x0001bd18) main_tv_pg_hdr_pane_g9

0xde2c,	// (0x0001bd22) main_tv_pg_hdr_pane_g10

0xde36,	// (0x0001bd2c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0001db09) main_tv_pg_hdr_pane_g

0xde40,	// (0x0001bd36) main_tv_pg_hdr_pane_t1

0xde4e,	// (0x0001bd44) main_tv_pg_hdr_pane_t2

0xde5c,	// (0x0001bd52) main_tv_pg_hdr_pane_t3

0xde6c,	// (0x0001bd62) main_tv_pg_hdr_pane_t4

0xde7c,	// (0x0001bd72) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0001db20) main_tv_pg_hdr_pane_t

0xde8c,	// (0x0001bd82) single_mobtv_pg_channel_pane_ParamLimits

0xde8c,	// (0x0001bd82) single_mobtv_pg_channel_pane

0xde9e,	// (0x0001bd94) single_mobtv_pg_channel_table_pane

0xdea7,	// (0x0001bd9d) single_mobtv_pg_channel_thumb_pane

0xdeb0,	// (0x0001bda6) single_tv_pg_channel_pane_g1

0xdeb9,	// (0x0001bdaf) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0001db2b) single_tv_pg_channel_pane_g

0xc39e,	// (0x0001a294) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc39e,	// (0x0001a294) bg_single_mobtv_pg_channel_thumb_pane

0xdec2,	// (0x0001bdb8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdec2,	// (0x0001bdb8) single_mobtv_pg_channel_thumb_pane_g1

0xded0,	// (0x0001bdc6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xded0,	// (0x0001bdc6) single_mobtv_pg_channel_thumb_pane_g2

0xdedc,	// (0x0001bdd2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdedc,	// (0x0001bdd2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0001db30) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0001db30) single_mobtv_pg_channel_thumb_pane_g

0xdee8,	// (0x0001bdde) single_mobtv_pg_channel_thumb_pane_t1

0xdef6,	// (0x0001bdec) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0001db37) single_mobtv_pg_channel_thumb_pane_t

0xc132,	// (0x0001a028) bg_single_mobtv_pg_channel_table_pane_g1

0xc132,	// (0x0001a028) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0001d5e2) bg_single_mobtv_pg_channel_table_pane_g

0xdf04,	// (0x0001bdfa) single_mobtv_pg_channel_table_pane_t1

0xdf12,	// (0x0001be08) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0001db3c) single_mobtv_pg_channel_table_pane_t

0x78b2,	// (0x000157a8) main_mobtv_info_pane_g1_ParamLimits

0x78b2,	// (0x000157a8) main_mobtv_info_pane_g1

0x78d0,	// (0x000157c6) main_mobtv_info_pane_t1_ParamLimits

0x78d0,	// (0x000157c6) main_mobtv_info_pane_t1

0x7948,	// (0x0001583e) main_mobtv_info_pane_t2_ParamLimits

0x7948,	// (0x0001583e) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0001db46) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0001db46) main_mobtv_info_pane_t

0x79d7,	// (0x000158cd) wait_bar_pane_cp05

0x79e9,	// (0x000158df) main_mobtv_loading_pane_g1_ParamLimits

0x79e9,	// (0x000158df) main_mobtv_loading_pane_g1

0x79fc,	// (0x000158f2) main_mobtv_loading_pane_g2_ParamLimits

0x79fc,	// (0x000158f2) main_mobtv_loading_pane_g2

0x7a08,	// (0x000158fe) main_mobtv_loading_pane_g3_ParamLimits

0x7a08,	// (0x000158fe) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0001db4d) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0001db4d) main_mobtv_loading_pane_g

0xdf20,	// (0x0001be16) main_mobtv_loading_pane_t1_ParamLimits

0xdf20,	// (0x0001be16) main_mobtv_loading_pane_t1

0xdf38,	// (0x0001be2e) main_mobtv_loading_pane_t2_ParamLimits

0xdf38,	// (0x0001be2e) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0001db54) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0001db54) main_mobtv_loading_pane_t

0x7a1b,	// (0x00015911) wait_bar_pane_cp06_ParamLimits

0x7a1b,	// (0x00015911) wait_bar_pane_cp06

0xdf5c,	// (0x0001be52) main_mobtv_programe_curr_pane_t1

0xdf6a,	// (0x0001be60) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0001db59) main_mobtv_programe_curr_pane_t

0xdf78,	// (0x0001be6e) main_mobtv_programe_next_pane_t1

0xdf86,	// (0x0001be7c) main_mobtv_programe_next_pane_t2

0xdf94,	// (0x0001be8a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0001db5e) main_mobtv_programe_next_pane_t

0x9255,	// (0x0001714b) bg_popup_mobtv_noti_window_pane

0xdfa2,	// (0x0001be98) popup_mobtv_noti_window_g1

0xdfaa,	// (0x0001bea0) popup_mobtv_noti_window_t1

0xdfb8,	// (0x0001beae) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0001db65) popup_mobtv_noti_window_t

0xc132,	// (0x0001a028) bg_popup_mobtv_noti_window_pane_g1

0x9255,	// (0x0001714b) sc_clock_pane

0x9255,	// (0x0001714b) main_fs_bigclock_pane

0x7172,	// (0x00015068) blid2_tripm_pane_t4_ParamLimits

0x7172,	// (0x00015068) blid2_tripm_pane_t4

0x7a2a,	// (0x00015920) sc_clock_pane_g1_ParamLimits

0x7a2a,	// (0x00015920) sc_clock_pane_g1

0x7a3c,	// (0x00015932) sc_clock_pane_t1_ParamLimits

0x7a3c,	// (0x00015932) sc_clock_pane_t1

0x7a5e,	// (0x00015954) sc_clock_pane_t2_ParamLimits

0x7a5e,	// (0x00015954) sc_clock_pane_t2

0x7a76,	// (0x0001596c) sc_clock_pane_t3_ParamLimits

0x7a76,	// (0x0001596c) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0001db6a) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0001db6a) sc_clock_pane_t

0x8898,	// (0x0001678e) main_fs_bigclock_indicator_pane_ParamLimits

0x8898,	// (0x0001678e) main_fs_bigclock_indicator_pane

0xc36e,	// (0x0001a264) main_fs_bigclock_pane_g1_ParamLimits

0xc36e,	// (0x0001a264) main_fs_bigclock_pane_g1

0x88a4,	// (0x0001679a) main_fs_bigclock_pane_t1_ParamLimits

0x88a4,	// (0x0001679a) main_fs_bigclock_pane_t1

0x88b6,	// (0x000167ac) main_fs_bigclock_pane_t2_ParamLimits

0x88b6,	// (0x000167ac) main_fs_bigclock_pane_t2

0x88ca,	// (0x000167c0) main_fs_bigclock_pane_t3_ParamLimits

0x88ca,	// (0x000167c0) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0001dd69) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0001dd69) main_fs_bigclock_pane_t

0xebf3,	// (0x0001cae9) main_fs_bigclock_indicator_pane_g1

0xdc84,	// (0x0001bb7a) ncim_query_content_pane_g2_ParamLimits

0xdc84,	// (0x0001bb7a) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0001daf7) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0001daf7) ncim_query_content_pane_g

0x7a8f,	// (0x00015985) sc_clock_pane_t4_ParamLimits

0x7a8f,	// (0x00015985) sc_clock_pane_t4

0x92c5,	// (0x000171bb) main_radioblah_pane

0xcd58,	// (0x0001ac4e) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd58,	// (0x0001ac4e) cell_call4_button_pane_t1_copy1

0x76cb,	// (0x000155c1) main_ncimui_pane_t1_ParamLimits

0x76cb,	// (0x000155c1) main_ncimui_pane_t1

0x76e5,	// (0x000155db) main_ncimui_pane_t2_ParamLimits

0x76e5,	// (0x000155db) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0001daf0) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0001daf0) main_ncimui_pane_t

0xe0fe,	// (0x0001bff4) main_radioblah_anim_pane_ParamLimits

0xe0fe,	// (0x0001bff4) main_radioblah_anim_pane

0xe10f,	// (0x0001c005) main_radioblah_info_pane_ParamLimits

0xe10f,	// (0x0001c005) main_radioblah_info_pane

0xe123,	// (0x0001c019) main_radioblah_pane_t1_ParamLimits

0xe123,	// (0x0001c019) main_radioblah_pane_t1

0xe13f,	// (0x0001c035) main_radioblah_pane_t2_ParamLimits

0xe13f,	// (0x0001c035) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0001db8b) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0001db8b) main_radioblah_pane_t

0x7b3d,	// (0x00015a33) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b3d,	// (0x00015a33) main_radioblah_rocker_ctrl_pane

0xe187,	// (0x0001c07d) main_radioblah_info_pane_t1_ParamLimits

0xe187,	// (0x0001c07d) main_radioblah_info_pane_t1

0x7b95,	// (0x00015a8b) main_radioblah_info_pane_t2_ParamLimits

0x7b95,	// (0x00015a8b) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0001db94) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0001db94) main_radioblah_info_pane_t

0xc132,	// (0x0001a028) main_radioblah_rocker_ctrl_pane_g1

0x7c45,	// (0x00015b3b) main_radioblah_rocker_ctrl_pane_g2

0x7c4d,	// (0x00015b43) main_radioblah_rocker_ctrl_pane_g3

0x7c55,	// (0x00015b4b) main_radioblah_rocker_ctrl_pane_g4

0x7c5d,	// (0x00015b53) main_radioblah_rocker_ctrl_pane_g5

0x7c65,	// (0x00015b5b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0001db9d) main_radioblah_rocker_ctrl_pane_g

0x7421,	// (0x00015317) main_cset_text2_pane_t1_copy1_ParamLimits

0xcde2,	// (0x0001acd8) cam4_image_uncrop_qvga_pane

0xce3b,	// (0x0001ad31) vid4_image_uncrop_qcif_pane

0xd7e4,	// (0x0001b6da) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7e4,	// (0x0001b6da) cam6_image_uncrop_qvga_pane

0xd8ba,	// (0x0001b7b0) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8ba,	// (0x0001b7b0) vid6_image_uncrop_qcif_pane

0x9255,	// (0x0001714b) bg_popup_preview_window_pane_cp03

0xdc36,	// (0x0001bb2c) list_cset_text2_pane

0xdc3e,	// (0x0001bb34) main_cset6_text2_pane_g1

0xdc46,	// (0x0001bb3c) main_cset6_text2_pane_t1

0x7c6d,	// (0x00015b63) list_cset_text2_pane_t1_ParamLimits

0x7c6d,	// (0x00015b63) list_cset_text2_pane_t1

0x92c5,	// (0x000171bb) main_radioblah_pane_ParamLimits

0x79c3,	// (0x000158b9) main_mobtv_info_pane_t3_ParamLimits

0x79c3,	// (0x000158b9) main_mobtv_info_pane_t3

0x7b2b,	// (0x00015a21) main_radioblah_pane_g1

0x7b65,	// (0x00015a5b) main_radioblah_info_pane_g1

0x7bea,	// (0x00015ae0) main_radioblah_info_pane_t3_ParamLimits

0x7bea,	// (0x00015ae0) main_radioblah_info_pane_t3

0x25da,	// (0x000104d0) highlight_cell_cale_month_pane_ParamLimits

0x25da,	// (0x000104d0) highlight_cell_cale_month_pane

0x9255,	// (0x0001714b) main_phob_fisheye_pane

0xc492,	// (0x0001a388) scroll_pane_cp0031_ParamLimits

0xc492,	// (0x0001a388) scroll_pane_cp0031

0xd9c8,	// (0x0001b8be) wait_bar_pane_cp08_ParamLimits

0x74a6,	// (0x0001539c) cset_list_set_pane_copy1_ParamLimits

0xe1c1,	// (0x0001c0b7) highlight_cell_cale_month_pane_g1

0x7c86,	// (0x00015b7c) highlight_cell_cale_month_pane_t1

0xd562,	// (0x0001b458) list_gen_pane_cp01

0xd072,	// (0x0001af68) scroll_pane_01

0x7c94,	// (0x00015b8a) list_single_double_fisheye_pane

0x7c9d,	// (0x00015b93) list_double_fisheye_pane_g1_ParamLimits

0x7c9d,	// (0x00015b93) list_double_fisheye_pane_g1

0x7ca9,	// (0x00015b9f) list_double_fisheye_pane_g2_ParamLimits

0x7ca9,	// (0x00015b9f) list_double_fisheye_pane_g2

0x7cbd,	// (0x00015bb3) list_double_fisheye_pane_g3_ParamLimits

0x7cbd,	// (0x00015bb3) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0001dbaa) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0001dbaa) list_double_fisheye_pane_g

0x7ce6,	// (0x00015bdc) list_double_fisheye_pane_t1_ParamLimits

0x7ce6,	// (0x00015bdc) list_double_fisheye_pane_t1

0x7d01,	// (0x00015bf7) list_double_fisheye_pane_t2_ParamLimits

0x7d01,	// (0x00015bf7) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0001dbb5) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0001dbb5) list_double_fisheye_pane_t

0x9255,	// (0x0001714b) main_call5_pane

0x7aba,	// (0x000159b0) sc_swipe_pane_ParamLimits

0x7aba,	// (0x000159b0) sc_swipe_pane

0x7d36,	// (0x00015c2c) call5_image_pane_ParamLimits

0x7d36,	// (0x00015c2c) call5_image_pane

0x7d53,	// (0x00015c49) call5_swipe_1_pane_ParamLimits

0x7d53,	// (0x00015c49) call5_swipe_1_pane

0x7d66,	// (0x00015c5c) call5_swipe_2_pane_ParamLimits

0x7d66,	// (0x00015c5c) call5_swipe_2_pane

0x7d91,	// (0x00015c87) popup_call5_audio_first_window_ParamLimits

0x7d91,	// (0x00015c87) popup_call5_audio_first_window

0xc39e,	// (0x0001a294) call5_swipe_1_pane_g1_ParamLimits

0xc39e,	// (0x0001a294) call5_swipe_1_pane_g1

0xe1c9,	// (0x0001c0bf) call5_swipe_1_pane_g2_ParamLimits

0xe1c9,	// (0x0001c0bf) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0001dbba) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0001dbba) call5_swipe_1_pane_g

0xe1d5,	// (0x0001c0cb) call5_swipe_1_pane_t1_ParamLimits

0xe1d5,	// (0x0001c0cb) call5_swipe_1_pane_t1

0xc39e,	// (0x0001a294) call5_swipe_2_pane_g1_ParamLimits

0xc39e,	// (0x0001a294) call5_swipe_2_pane_g1

0xe1ea,	// (0x0001c0e0) call5_swipe_2_pane_g2_ParamLimits

0xe1ea,	// (0x0001c0e0) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0001dbbf) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0001dbbf) call5_swipe_2_pane_g

0xe1f6,	// (0x0001c0ec) call5_swipe_2_pane_t1_ParamLimits

0xe1f6,	// (0x0001c0ec) call5_swipe_2_pane_t1

0xe20b,	// (0x0001c101) sc_swipe_pane_g1_ParamLimits

0xe20b,	// (0x0001c101) sc_swipe_pane_g1

0xe218,	// (0x0001c10e) sc_swipe_pane_g2_ParamLimits

0xe218,	// (0x0001c10e) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0001dbc4) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0001dbc4) sc_swipe_pane_g

0xe224,	// (0x0001c11a) sc_swipe_pane_t1_ParamLimits

0xe224,	// (0x0001c11a) sc_swipe_pane_t1

0x9255,	// (0x0001714b) main_cmail_launcher_pane

0x7da2,	// (0x00015c98) aid_size_cell_cmail_l_ParamLimits

0x7da2,	// (0x00015c98) aid_size_cell_cmail_l

0x7dbc,	// (0x00015cb2) grid_cmail_l_pane_ParamLimits

0x7dbc,	// (0x00015cb2) grid_cmail_l_pane

0x7dd7,	// (0x00015ccd) cell_cmail_l_pane_ParamLimits

0x7dd7,	// (0x00015ccd) cell_cmail_l_pane

0x7dfd,	// (0x00015cf3) cell_cmail_l_pane_g1_ParamLimits

0x7dfd,	// (0x00015cf3) cell_cmail_l_pane_g1

0x7e09,	// (0x00015cff) cell_cmail_l_pane_t1_ParamLimits

0x7e09,	// (0x00015cff) cell_cmail_l_pane_t1

0xe239,	// (0x0001c12f) cell_cmail_l_pane_t2_ParamLimits

0xe239,	// (0x0001c12f) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0001dbc9) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0001dbc9) cell_cmail_l_pane_t

0x92c5,	// (0x000171bb) grid_highlight_pane_cp018_ParamLimits

0x92c5,	// (0x000171bb) grid_highlight_pane_cp018

0x0af3,	// (0x0000e9e9) main2_pane_ParamLimits

0x0af3,	// (0x0000e9e9) main2_pane

0x9af3,	// (0x000179e9) popup_sp_fs_action_menu_bg_pane_g1

0x9afb,	// (0x000179f1) popup_sp_fs_action_menu_bg_pane_g2

0x9b03,	// (0x000179f9) popup_sp_fs_action_menu_bg_pane_g3

0x9b0b,	// (0x00017a01) popup_sp_fs_action_menu_bg_pane_g4

0x9b13,	// (0x00017a09) popup_sp_fs_action_menu_bg_pane_g5

0x9b1b,	// (0x00017a11) popup_sp_fs_action_menu_bg_pane_g6

0x9b23,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g7

0x9b2b,	// (0x00017a21) popup_sp_fs_action_menu_bg_pane_g8

0x9b33,	// (0x00017a29) popup_sp_fs_action_menu_bg_pane_g9

0x9b3b,	// (0x00017a31) popup_sp_fs_action_menu_bg_pane_g10

0x9b3b,	// (0x00017a31) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0001d08e) popup_sp_fs_action_menu_bg_pane_g

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g3_g1

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t3_g3_g2

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0001d13e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0001d13e) list_medium_line_x2_t3_g3_g

0x9cd3,	// (0x00017bc9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9cd3,	// (0x00017bc9) list_medium_line_x2_t3_g3_t1

0x18f9,	// (0x0000f7ef) list_medium_line_x2_t3_g3_t2_ParamLimits

0x18f9,	// (0x0000f7ef) list_medium_line_x2_t3_g3_t2

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0001d145) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0001d145) list_medium_line_x2_t3_g3_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g2_g1

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0001d14c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0001d14c) list_medium_line_x2_t3_g2_g

0x9cfd,	// (0x00017bf3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9cfd,	// (0x00017bf3) list_medium_line_x2_t3_g2_t1

0x9d13,	// (0x00017c09) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9d13,	// (0x00017c09) list_medium_line_x2_t3_g2_t2

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0001d151) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0001d151) list_medium_line_x2_t3_g2_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t4_g4_g1

0x9d25,	// (0x00017c1b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9d25,	// (0x00017c1b) list_medium_line_x2_t4_g4_g2

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t4_g4_g3

0x9d31,	// (0x00017c27) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d31,	// (0x00017c27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0001d158) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0001d158) list_medium_line_x2_t4_g4_g

0x190d,	// (0x0000f803) list_medium_line_x2_t4_g4_t1_ParamLimits

0x190d,	// (0x0000f803) list_medium_line_x2_t4_g4_t1

0x1924,	// (0x0000f81a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1924,	// (0x0000f81a) list_medium_line_x2_t4_g4_t2

0x1939,	// (0x0000f82f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1939,	// (0x0000f82f) list_medium_line_x2_t4_g4_t3

0x9d3d,	// (0x00017c33) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d3d,	// (0x00017c33) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0001d161) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0001d161) list_medium_line_x2_t4_g4_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g4_g1

0x9d25,	// (0x00017c1b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9d25,	// (0x00017c1b) list_medium_line_x2_t2_g4_g2

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t2_g4_g3

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0001d1c8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0001d1c8) list_medium_line_x2_t2_g4_g

0xa027,	// (0x00017f1d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa027,	// (0x00017f1d) list_medium_line_x2_t2_g4_t1

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0001d1d1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0001d1d1) list_medium_line_x2_t2_g4_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g3_g1

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t2_g3_g2

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0001d13e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0001d13e) list_medium_line_x2_t2_g3_g

0xa03c,	// (0x00017f32) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa03c,	// (0x00017f32) list_medium_line_x2_t2_g3_t1

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0001d1d6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0001d1d6) list_medium_line_x2_t2_g3_t

0x271c,	// (0x00010612) main_sp_fs_list_pane_ParamLimits

0x271c,	// (0x00010612) main_sp_fs_list_pane

0x2728,	// (0x0001061e) sp_fs_scroll_pane_ParamLimits

0x2728,	// (0x0001061e) sp_fs_scroll_pane

0x2734,	// (0x0001062a) list_medium_line_x2_t3_t1

0x2744,	// (0x0001063a) list_medium_line_x2_t3_t2

0xa2a4,	// (0x0001819a) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0001d221) list_medium_line_x2_t3_t

0x2752,	// (0x00010648) list_medium_line_x3_t4_t1

0x2762,	// (0x00010658) list_medium_line_x3_t4_t2

0xa2b2,	// (0x000181a8) list_medium_line_x3_t4_t3

0xa2a4,	// (0x0001819a) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0001d228) list_medium_line_x3_t4_t

0x2770,	// (0x00010666) list_medium_line_x4_t5_t1

0x2780,	// (0x00010676) list_medium_line_x4_t5_t2

0xa2b2,	// (0x000181a8) list_medium_line_x4_t5_t3

0xa2c0,	// (0x000181b6) list_medium_line_x4_t5_t4

0xa2a4,	// (0x0001819a) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0001d231) list_medium_line_x4_t5_t

0x9caf,	// (0x00017ba5) list_medium_line_t4_g4_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_t4_g4_g1

0x9d31,	// (0x00017c27) list_medium_line_t4_g4_g2_ParamLimits

0x9d31,	// (0x00017c27) list_medium_line_t4_g4_g2

0xa2ce,	// (0x000181c4) list_medium_line_t4_g4_g3_ParamLimits

0xa2ce,	// (0x000181c4) list_medium_line_t4_g4_g3

0x9cc7,	// (0x00017bbd) list_medium_line_t4_g4_g4_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0001d23c) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0001d23c) list_medium_line_t4_g4_g

0xa2da,	// (0x000181d0) list_medium_line_t4_g4_t1_ParamLimits

0xa2da,	// (0x000181d0) list_medium_line_t4_g4_t1

0xa2ef,	// (0x000181e5) list_medium_line_t4_g4_t2_ParamLimits

0xa2ef,	// (0x000181e5) list_medium_line_t4_g4_t2

0xa304,	// (0x000181fa) list_medium_line_t4_g4_t3_ParamLimits

0xa304,	// (0x000181fa) list_medium_line_t4_g4_t3

0x9ce8,	// (0x00017bde) list_medium_line_t4_g4_t4_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0001d245) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0001d245) list_medium_line_t4_g4_t

0x2851,	// (0x00010747) chi_dic_find_pane_g1

0x395d,	// (0x00011853) main_tport_pane

0xd1e7,	// (0x0001b0dd) list_medium_line_plain_t1

0xd239,	// (0x0001b12f) list_medium_line_t2_g2_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t2_g2_g1

0xd245,	// (0x0001b13b) list_medium_line_t2_g2_g2_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0001d901) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0001d901) list_medium_line_t2_g2_g

0x6922,	// (0x00014818) list_medium_line_t2_g2_t1_ParamLimits

0x6922,	// (0x00014818) list_medium_line_t2_g2_t1

0x693c,	// (0x00014832) list_medium_line_t2_g2_t2_ParamLimits

0x693c,	// (0x00014832) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0001d906) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0001d906) list_medium_line_t2_g2_t

0xd5e3,	// (0x0001b4d9) aid_sp_fs_list_icon_a_sm

0xd5eb,	// (0x0001b4e1) aid_sp_fs_list_icon_d

0xd5f3,	// (0x0001b4e9) aid_sp_fs_text_primary

0xd5fc,	// (0x0001b4f2) aid_sp_fs_text_secondary

0xd605,	// (0x0001b4fb) list_medium_line

0xd605,	// (0x0001b4fb) list_medium_line_g2

0xd605,	// (0x0001b4fb) list_medium_line_g3

0xd605,	// (0x0001b4fb) list_medium_line_plain

0xd605,	// (0x0001b4fb) list_medium_line_plain_t2

0xd605,	// (0x0001b4fb) list_medium_line_plain_t3

0xd605,	// (0x0001b4fb) list_medium_line_right_icon

0xd605,	// (0x0001b4fb) list_medium_line_right_iconx2

0xd605,	// (0x0001b4fb) list_medium_line_t2

0xd605,	// (0x0001b4fb) list_medium_line_t2_g2

0xd605,	// (0x0001b4fb) list_medium_line_t2_g3

0xd605,	// (0x0001b4fb) list_medium_line_t2_right_icon

0xd605,	// (0x0001b4fb) list_medium_line_t2_right_iconx2

0xd605,	// (0x0001b4fb) list_medium_line_t3

0xd605,	// (0x0001b4fb) list_medium_line_t3_g2

0xd605,	// (0x0001b4fb) list_medium_line_t3_g3

0xd605,	// (0x0001b4fb) list_medium_line_t3_right_iconx2

0xd60e,	// (0x0001b504) list_medium_line_t4_g4

0xd617,	// (0x0001b50d) list_medium_line_x2

0xd617,	// (0x0001b50d) list_medium_line_x2_t2_g2

0xd617,	// (0x0001b50d) list_medium_line_x2_t2_g3

0xd617,	// (0x0001b50d) list_medium_line_x2_t2_g4

0xd617,	// (0x0001b50d) list_medium_line_x2_t3

0xd617,	// (0x0001b50d) list_medium_line_x2_t3_g2

0xd617,	// (0x0001b50d) list_medium_line_x2_t3_g3

0xd617,	// (0x0001b50d) list_medium_line_x2_t3_g4

0xd617,	// (0x0001b50d) list_medium_line_x2_t4_g2

0xd617,	// (0x0001b50d) list_medium_line_x2_t4_g4

0xd620,	// (0x0001b516) list_medium_line_x3

0xd620,	// (0x0001b516) list_medium_line_x3_t4

0xd620,	// (0x0001b516) list_medium_line_x3_t4_g4

0xd60e,	// (0x0001b504) list_medium_line_x4_t4

0xd60e,	// (0x0001b504) list_medium_line_x4_t4_g7

0xd60e,	// (0x0001b504) list_medium_line_x4_t5

0xd629,	// (0x0001b51f) list_single_fs_dyc_pane_ParamLimits

0xd629,	// (0x0001b51f) list_single_fs_dyc_pane

0x9caf,	// (0x00017ba5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x4_t4_g7_g1

0xdb41,	// (0x0001ba37) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb41,	// (0x0001ba37) list_medium_line_x4_t4_g7_g2

0xdb4d,	// (0x0001ba43) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb4d,	// (0x0001ba43) list_medium_line_x4_t4_g7_g3

0xdb5c,	// (0x0001ba52) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb5c,	// (0x0001ba52) list_medium_line_x4_t4_g7_g4

0xdb68,	// (0x0001ba5e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb68,	// (0x0001ba5e) list_medium_line_x4_t4_g7_g5

0xdb77,	// (0x0001ba6d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb77,	// (0x0001ba6d) list_medium_line_x4_t4_g7_g6

0xdb86,	// (0x0001ba7c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb86,	// (0x0001ba7c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0001dad1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0001dad1) list_medium_line_x4_t4_g7_g

0xdb92,	// (0x0001ba88) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb92,	// (0x0001ba88) list_medium_line_x4_t4_g7_t1

0xdba7,	// (0x0001ba9d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdba7,	// (0x0001ba9d) list_medium_line_x4_t4_g7_t2

0xdbbc,	// (0x0001bab2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdbbc,	// (0x0001bab2) list_medium_line_x4_t4_g7_t3

0xdbd1,	// (0x0001bac7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdbd1,	// (0x0001bac7) list_medium_line_x4_t4_g7_t4

0xdbe3,	// (0x0001bad9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdbe3,	// (0x0001bad9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0001dae0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0001dae0) list_medium_line_x4_t4_g7_t

0xdbf5,	// (0x0001baeb) list_single_dyc_row_pane_ParamLimits

0xdbf5,	// (0x0001baeb) list_single_dyc_row_pane

0x7d23,	// (0x00015c19) call5_gesture_pane_ParamLimits

0x7d23,	// (0x00015c19) call5_gesture_pane

0x7d79,	// (0x00015c6f) call5_windows_pane_ParamLimits

0x7d79,	// (0x00015c6f) call5_windows_pane

0x7e1f,	// (0x00015d15) call5_swipe_1_pane_cp_ParamLimits

0x7e1f,	// (0x00015d15) call5_swipe_1_pane_cp

0x7e2b,	// (0x00015d21) call5_swipe_2_pane_cp_ParamLimits

0x7e2b,	// (0x00015d21) call5_swipe_2_pane_cp

0xa76f,	// (0x00018665) call5_image_pane_cp

0x7e37,	// (0x00015d2d) popup_call5_audio_first_window_cp_ParamLimits

0x7e37,	// (0x00015d2d) popup_call5_audio_first_window_cp

0xe20b,	// (0x0001c101) call5_swipe_1_pane_g1_cp_ParamLimits

0xe20b,	// (0x0001c101) call5_swipe_1_pane_g1_cp

0xe253,	// (0x0001c149) call5_swipe_1_pane_g2_cp

0xe224,	// (0x0001c11a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe224,	// (0x0001c11a) call5_swipe_1_pane_t1_cp

0xe20b,	// (0x0001c101) call5_swipe_2_pane_g1_cp_ParamLimits

0xe20b,	// (0x0001c101) call5_swipe_2_pane_g1_cp

0xe25b,	// (0x0001c151) call5_swipe_2_pane_g2_cp

0xe263,	// (0x0001c159) call5_swipe_2_pane_t1_cp_ParamLimits

0xe263,	// (0x0001c159) call5_swipe_2_pane_t1_cp

0x92c5,	// (0x000171bb) main_sp_fs_email_pane

0xe278,	// (0x0001c16e) main_sp_fs_listscroll_pane_te

0xe281,	// (0x0001c177) popup_sp_fs_action_menu_pane_ParamLimits

0xe281,	// (0x0001c177) popup_sp_fs_action_menu_pane

0xc132,	// (0x0001a028) bg_sp_fs_ctrlbar_pane_g1

0xe2c5,	// (0x0001c1bb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2ce,	// (0x0001c1c4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2d7,	// (0x0001c1cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc132,	// (0x0001a028) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0001dbce) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf17,	// (0x00019e0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf17,	// (0x00019e0d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2e0,	// (0x0001c1d6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2e0,	// (0x0001c1d6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2ec,	// (0x0001c1e2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2ec,	// (0x0001c1e2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0001dbd7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0001dbd7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2f8,	// (0x0001c1ee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2f8,	// (0x0001c1ee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe312,	// (0x0001c208) list_medium_line_t2_right_icon_g1

0x7e45,	// (0x00015d3b) list_medium_line_t2_right_icon_t1

0x7e55,	// (0x00015d4b) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0001dbdc) list_medium_line_t2_right_icon_t

0xbc2c,	// (0x00019b22) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc2c,	// (0x00019b22) bg_sp_fs_ctrlbar_pane

0x7eb2,	// (0x00015da8) main_sp_fs_ctrlbar_button_pane_cp01

0x7ebc,	// (0x00015db2) main_sp_fs_ctrlbar_ddmenu_pane

0xe352,	// (0x0001c248) main_sp_fs_ctrlbar_pane_g1

0xe35e,	// (0x0001c254) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0001dbe1) main_sp_fs_ctrlbar_pane_g

0xe36a,	// (0x0001c260) main_sp_fs_ctrlbar_pane_t1

0x7ec6,	// (0x00015dbc) main_sp_fs_ctrlbar_pane

0x7eea,	// (0x00015de0) main_sp_fs_listscroll_pane_te_cp01

0x7f0a,	// (0x00015e00) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7f0a,	// (0x00015e00) popup_sp_fs_action_menu_pane_cp01

0x92c5,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x92c5,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp01

0xe38f,	// (0x0001c285) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe38f,	// (0x0001c285) sp_fs_action_menu_list_gene_pane_g1

0xe39e,	// (0x0001c294) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe39e,	// (0x0001c294) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0001dbeb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0001dbeb) sp_fs_action_menu_list_gene_pane_g

0xe3ab,	// (0x0001c2a1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ab,	// (0x0001c2a1) sp_fs_action_menu_list_gene_pane_t1

0xe3c3,	// (0x0001c2b9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3c3,	// (0x0001c2b9) sp_fs_action_menu_list_gene_pane

0xe3e4,	// (0x0001c2da) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3e4,	// (0x0001c2da) popup_sp_fs_action_menu_bg_pane

0xe3f2,	// (0x0001c2e8) sp_fs_action_menu_list_pane_ParamLimits

0xe3f2,	// (0x0001c2e8) sp_fs_action_menu_list_pane

0xe414,	// (0x0001c30a) sp_fs_scroll_pane_cp01_ParamLimits

0xe414,	// (0x0001c30a) sp_fs_scroll_pane_cp01

0x7f3a,	// (0x00015e30) list_medium_line_plain_t2_t1

0x7f4a,	// (0x00015e40) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0001dbf0) list_medium_line_plain_t2_t

0x7f5a,	// (0x00015e50) list_medium_line_plain_t3_t1

0x7f6a,	// (0x00015e60) list_medium_line_plain_t3_t2

0x7f78,	// (0x00015e6e) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0001dbf5) list_medium_line_plain_t3_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t2_g2_g1

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0001d14c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0001d14c) list_medium_line_x2_t2_g2_g

0xa2da,	// (0x000181d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa2da,	// (0x000181d0) list_medium_line_x2_t2_g2_t1

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0001dbfc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0001dbfc) list_medium_line_x2_t2_g2_t

0x9caf,	// (0x00017ba5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t4_g2_g1

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x0001d14c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x0001d14c) list_medium_line_x2_t4_g2_g

0x7f86,	// (0x00015e7c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f86,	// (0x00015e7c) list_medium_line_x2_t4_g2_t1

0x7fa0,	// (0x00015e96) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7fa0,	// (0x00015e96) list_medium_line_x2_t4_g2_t2

0x7fb5,	// (0x00015eab) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7fb5,	// (0x00015eab) list_medium_line_x2_t4_g2_t3

0x9ce8,	// (0x00017bde) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0001dc01) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0001dc01) list_medium_line_x2_t4_g2_t

0xe43a,	// (0x0001c330) list_medium_line_t3_right_iconx2_g1

0xe312,	// (0x0001c208) list_medium_line_t3_right_iconx2_g2

0x7fca,	// (0x00015ec0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0001dc0a) list_medium_line_t3_right_iconx2_g

0x7fd4,	// (0x00015eca) list_medium_line_t3_right_iconx2_t1

0x7fe4,	// (0x00015eda) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0001dc11) list_medium_line_t3_right_iconx2_t

0x9caf,	// (0x00017ba5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x3_t4_g4_g1

0x9cbb,	// (0x00017bb1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x3_t4_g4_g2

0x9d31,	// (0x00017c27) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d31,	// (0x00017c27) list_medium_line_x3_t4_g4_g3

0xe442,	// (0x0001c338) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe442,	// (0x0001c338) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0001dc16) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0001dc16) list_medium_line_x3_t4_g4_g

0x7ff2,	// (0x00015ee8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ff2,	// (0x00015ee8) list_medium_line_x3_t4_g4_t1

0x8009,	// (0x00015eff) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8009,	// (0x00015eff) list_medium_line_x3_t4_g4_t2

0xa2ef,	// (0x000181e5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa2ef,	// (0x000181e5) list_medium_line_x3_t4_g4_t3

0xe44e,	// (0x0001c344) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe44e,	// (0x0001c344) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0001dc1f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0001dc1f) list_medium_line_x3_t4_g4_t

0x8024,	// (0x00015f1a) list_single_dyc_row_text_pane_t1_ParamLimits

0x8024,	// (0x00015f1a) list_single_dyc_row_text_pane_t1

0x806d,	// (0x00015f63) list_single_dyc_row_text_pane_t2_ParamLimits

0x806d,	// (0x00015f63) list_single_dyc_row_text_pane_t2

0xe46b,	// (0x0001c361) list_single_dyc_row_text_pane_t3_ParamLimits

0xe46b,	// (0x0001c361) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0001dc28) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0001dc28) list_single_dyc_row_text_pane_t

0xe47d,	// (0x0001c373) list_single_dyc_row_pane_g1_ParamLimits

0xe47d,	// (0x0001c373) list_single_dyc_row_pane_g1

0xe489,	// (0x0001c37f) list_single_dyc_row_pane_g2_ParamLimits

0xe489,	// (0x0001c37f) list_single_dyc_row_pane_g2

0xe495,	// (0x0001c38b) list_single_dyc_row_pane_g3_ParamLimits

0xe495,	// (0x0001c38b) list_single_dyc_row_pane_g3

0xe4a1,	// (0x0001c397) list_single_dyc_row_pane_g4_ParamLimits

0xe4a1,	// (0x0001c397) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0001dc2f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0001dc2f) list_single_dyc_row_pane_g

0xe4ad,	// (0x0001c3a3) list_single_dyc_row_text_pane_ParamLimits

0xe4ad,	// (0x0001c3a3) list_single_dyc_row_text_pane

0x9255,	// (0x0001714b) bg_sp_fs_scroll_pane

0xe4cc,	// (0x0001c3c2) thumb_sp_fs_scroll_pane

0xd239,	// (0x0001b12f) list_medium_line_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_g1

0xe4d5,	// (0x0001c3cb) list_medium_line_t1_ParamLimits

0xe4d5,	// (0x0001c3cb) list_medium_line_t1

0x9caf,	// (0x00017ba5) list_medium_line_x2_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_g1

0x9cbb,	// (0x00017bb1) list_medium_line_x2_g2_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0001dc38) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0001dc38) list_medium_line_x2_g

0xe4ea,	// (0x0001c3e0) list_medium_line_x2_t1_ParamLimits

0xe4ea,	// (0x0001c3e0) list_medium_line_x2_t1

0x9caf,	// (0x00017ba5) list_medium_line_x3_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x3_g1

0x9cbb,	// (0x00017bb1) list_medium_line_x3_g2_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0001dc38) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0001dc38) list_medium_line_x3_g

0xe4ea,	// (0x0001c3e0) list_medium_line_x3_t1_ParamLimits

0xe4ea,	// (0x0001c3e0) list_medium_line_x3_t1

0xe500,	// (0x0001c3f6) thumb_sp_fs_scroll_pane_g1

0xe509,	// (0x0001c3ff) thumb_sp_fs_scroll_pane_g2

0xe512,	// (0x0001c408) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001dc3d) thumb_sp_fs_scroll_pane_g

0xe500,	// (0x0001c3f6) bg_sp_fs_scroll_pane_g1

0xe509,	// (0x0001c3ff) bg_sp_fs_scroll_pane_g2

0xe512,	// (0x0001c408) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001dc3d) bg_sp_fs_scroll_pane_g

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9caf,	// (0x00017ba5) list_medium_line_x2_t3_g4_g1

0x9d25,	// (0x00017c1b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9d25,	// (0x00017c1b) list_medium_line_x2_t3_g4_g2

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9cbb,	// (0x00017bb1) list_medium_line_x2_t3_g4_g3

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9cc7,	// (0x00017bbd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0001d1c8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0001d1c8) list_medium_line_x2_t3_g4_g

0x80c7,	// (0x00015fbd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80c7,	// (0x00015fbd) list_medium_line_x2_t3_g4_t1

0x80e1,	// (0x00015fd7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80e1,	// (0x00015fd7) list_medium_line_x2_t3_g4_t2

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9ce8,	// (0x00017bde) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0001dc44) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0001dc44) list_medium_line_x2_t3_g4_t

0xd239,	// (0x0001b12f) list_medium_line_g2_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_g2_g1

0xd245,	// (0x0001b13b) list_medium_line_g2_g2_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0001d901) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0001d901) list_medium_line_g2_g

0xe51b,	// (0x0001c411) list_medium_line_g2_t1_ParamLimits

0xe51b,	// (0x0001c411) list_medium_line_g2_t1

0xd239,	// (0x0001b12f) list_medium_line_t3_g2_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t3_g2_g1

0xd245,	// (0x0001b13b) list_medium_line_t3_g2_g2_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0001d901) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0001d901) list_medium_line_t3_g2_g

0x80fb,	// (0x00015ff1) list_medium_line_t3_g2_t1_ParamLimits

0x80fb,	// (0x00015ff1) list_medium_line_t3_g2_t1

0x8115,	// (0x0001600b) list_medium_line_t3_g2_t2_ParamLimits

0x8115,	// (0x0001600b) list_medium_line_t3_g2_t2

0x812a,	// (0x00016020) list_medium_line_t3_g2_t3_ParamLimits

0x812a,	// (0x00016020) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0001dc4b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0001dc4b) list_medium_line_t3_g2_t

0xe312,	// (0x0001c208) list_medium_line_right_icon_g1

0xe530,	// (0x0001c426) list_medium_line_right_icon_t1

0xd239,	// (0x0001b12f) list_medium_line_t2_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t2_g1

0x8144,	// (0x0001603a) list_medium_line_t2_t1_ParamLimits

0x8144,	// (0x0001603a) list_medium_line_t2_t1

0x815e,	// (0x00016054) list_medium_line_t2_t2_ParamLimits

0x815e,	// (0x00016054) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0001dc52) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0001dc52) list_medium_line_t2_t

0xd239,	// (0x0001b12f) list_medium_line_t3_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t3_g1

0x8177,	// (0x0001606d) list_medium_line_t3_t1_ParamLimits

0x8177,	// (0x0001606d) list_medium_line_t3_t1

0x818e,	// (0x00016084) list_medium_line_t3_t2_ParamLimits

0x818e,	// (0x00016084) list_medium_line_t3_t2

0x81a3,	// (0x00016099) list_medium_line_t3_t3_ParamLimits

0x81a3,	// (0x00016099) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0001dc57) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0001dc57) list_medium_line_t3_t

0xd239,	// (0x0001b12f) list_medium_line_g3_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_g3_g1

0xe53e,	// (0x0001c434) list_medium_line_g3_g2_ParamLimits

0xe53e,	// (0x0001c434) list_medium_line_g3_g2

0xd245,	// (0x0001b13b) list_medium_line_g3_g3_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0001dc5e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0001dc5e) list_medium_line_g3_g

0xe54a,	// (0x0001c440) list_medium_line_g3_t1_ParamLimits

0xe54a,	// (0x0001c440) list_medium_line_g3_t1

0xd239,	// (0x0001b12f) list_medium_line_t2_g3_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t2_g3_g1

0xe53e,	// (0x0001c434) list_medium_line_t2_g3_g2_ParamLimits

0xe53e,	// (0x0001c434) list_medium_line_t2_g3_g2

0xd245,	// (0x0001b13b) list_medium_line_t2_g3_g3_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0001dc5e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0001dc5e) list_medium_line_t2_g3_g

0x81b5,	// (0x000160ab) list_medium_line_t2_g3_t1_ParamLimits

0x81b5,	// (0x000160ab) list_medium_line_t2_g3_t1

0x81cf,	// (0x000160c5) list_medium_line_t2_g3_t2_ParamLimits

0x81cf,	// (0x000160c5) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0001dc65) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0001dc65) list_medium_line_t2_g3_t

0xd239,	// (0x0001b12f) list_medium_line_t3_g3_g1_ParamLimits

0xd239,	// (0x0001b12f) list_medium_line_t3_g3_g1

0xe53e,	// (0x0001c434) list_medium_line_t3_g3_g2_ParamLimits

0xe53e,	// (0x0001c434) list_medium_line_t3_g3_g2

0xd245,	// (0x0001b13b) list_medium_line_t3_g3_g3_ParamLimits

0xd245,	// (0x0001b13b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0001dc5e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0001dc5e) list_medium_line_t3_g3_g

0x81ea,	// (0x000160e0) list_medium_line_t3_g3_t1_ParamLimits

0x81ea,	// (0x000160e0) list_medium_line_t3_g3_t1

0x8203,	// (0x000160f9) list_medium_line_t3_g3_t2_ParamLimits

0x8203,	// (0x000160f9) list_medium_line_t3_g3_t2

0x8219,	// (0x0001610f) list_medium_line_t3_g3_t3_ParamLimits

0x8219,	// (0x0001610f) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0001dc6a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0001dc6a) list_medium_line_t3_g3_t

0xe43a,	// (0x0001c330) list_medium_line_right_iconx2_g1

0xe312,	// (0x0001c208) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001dc71) list_medium_line_right_iconx2_g

0xe55f,	// (0x0001c455) list_medium_line_right_iconx2_t1

0xe43a,	// (0x0001c330) list_medium_line_t2_right_iconx2_g1

0xe312,	// (0x0001c208) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001dc71) list_medium_line_t2_right_iconx2_g

0x8233,	// (0x00016129) list_medium_line_t2_right_iconx2_t1

0x8243,	// (0x00016139) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0001dc76) list_medium_line_t2_right_iconx2_t

0xe56d,	// (0x0001c463) list_medium_line_x4_t4_t1

0x8255,	// (0x0001614b) list_medium_line_x4_t4_t2

0x8265,	// (0x0001615b) list_medium_line_x4_t4_t3

0x8275,	// (0x0001616b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0001dc7b) list_medium_line_x4_t4_t

0x82c8,	// (0x000161be) tport_appsw_pane_ParamLimits

0x82c8,	// (0x000161be) tport_appsw_pane

0x82d9,	// (0x000161cf) tport_contact_pane_ParamLimits

0x82d9,	// (0x000161cf) tport_contact_pane

0x82f2,	// (0x000161e8) tport_listscroll_pane_ParamLimits

0x82f2,	// (0x000161e8) tport_listscroll_pane

0x830d,	// (0x00016203) cell_tport_appsw_pane_ParamLimits

0x830d,	// (0x00016203) cell_tport_appsw_pane

0xceec,	// (0x0001ade2) tport_appsw_pane_g1_ParamLimits

0xceec,	// (0x0001ade2) tport_appsw_pane_g1

0xe57b,	// (0x0001c471) tport_contact_pane_g1

0xdd0a,	// (0x0001bc00) tport_contact_pane_t1

0xe584,	// (0x0001c47a) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0001dc84) tport_contact_pane_t

0xe592,	// (0x0001c488) list_tport_pane

0xe59b,	// (0x0001c491) scroll_pane_cp_030

0xe5ac,	// (0x0001c4a2) cell_tport_appsw_pane_g1

0xe5bc,	// (0x0001c4b2) cell_tport_appsw_pane_t1

0x9255,	// (0x0001714b) grid_highlight_pane_cp019

0x834d,	// (0x00016243) list_tport_double_graphic_pane_ParamLimits

0x834d,	// (0x00016243) list_tport_double_graphic_pane

0x92c5,	// (0x000171bb) list_highlight_pane_cp023_ParamLimits

0x92c5,	// (0x000171bb) list_highlight_pane_cp023

0x835a,	// (0x00016250) list_tport_double_graphic_pane_g1_ParamLimits

0x835a,	// (0x00016250) list_tport_double_graphic_pane_g1

0x8367,	// (0x0001625d) list_tport_double_graphic_pane_t1_ParamLimits

0x8367,	// (0x0001625d) list_tport_double_graphic_pane_t1

0x837c,	// (0x00016272) list_tport_double_graphic_pane_t2_ParamLimits

0x837c,	// (0x00016272) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0001dc90) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0001dc90) list_tport_double_graphic_pane_t

0x9255,	// (0x0001714b) main_cale_note_pane

0x602c,	// (0x00013f22) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x602c,	// (0x00013f22) cell_vitu2_function_top_wide_pane_cp01

0x79d7,	// (0x000158cd) wait_bar_pane_cp05_ParamLimits

0x9255,	// (0x0001714b) listscroll_cmail_pane

0xe5d2,	// (0x0001c4c8) list_cmail_pane

0xd1b6,	// (0x0001b0ac) list_cmail_body_pane

0x8398,	// (0x0001628e) list_single_cmail_header_caption_pane

0x83ae,	// (0x000162a4) list_single_cmail_header_detail_pane_ParamLimits

0x83ae,	// (0x000162a4) list_single_cmail_header_detail_pane

0x83d7,	// (0x000162cd) list_single_cmail_header_caption_pane_t1

0x83e7,	// (0x000162dd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83e7,	// (0x000162dd) list_single_cmail_header_detail_pane_g1

0xe5f3,	// (0x0001c4e9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5f3,	// (0x0001c4e9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0001dc95) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0001dc95) list_single_cmail_header_detail_pane_g

0xe60c,	// (0x0001c502) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe60c,	// (0x0001c502) list_single_cmail_header_detail_pane_t1

0xe642,	// (0x0001c538) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe642,	// (0x0001c538) list_single_cmail_header_editor_pane_bg

0xdeb9,	// (0x0001bdaf) list_cmail_body_pane_g1

0xe654,	// (0x0001c54a) list_cmail_body_pane_t1

0xcf58,	// (0x0001ae4e) list_single_cmail_header_editor_pane_bg_g1

0x9f46,	// (0x00017e3c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf68,	// (0x0001ae5e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf60,	// (0x0001ae56) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd211,	// (0x0001b107) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf88,	// (0x0001ae7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf78,	// (0x0001ae6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf80,	// (0x0001ae76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9f26,	// (0x00017e1c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8425,	// (0x0001631b) calenote_gesture_pane_ParamLimits

0x8425,	// (0x0001631b) calenote_gesture_pane

0x8445,	// (0x0001633b) calenote_window_pane_ParamLimits

0x8445,	// (0x0001633b) calenote_window_pane

0xe662,	// (0x0001c558) popup_note_window_cp01

0x8461,	// (0x00016357) calenote_swipe_1_pane_ParamLimits

0x8461,	// (0x00016357) calenote_swipe_1_pane

0x7e2b,	// (0x00015d21) calenote_swipe_2_pane_ParamLimits

0x7e2b,	// (0x00015d21) calenote_swipe_2_pane

0xe20b,	// (0x0001c101) calenote_swipe_1_pane_g1_ParamLimits

0xe20b,	// (0x0001c101) calenote_swipe_1_pane_g1

0xe218,	// (0x0001c10e) calenote_swipe_1_pane_g2_ParamLimits

0xe218,	// (0x0001c10e) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001dbc4) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001dbc4) calenote_swipe_1_pane_g

0xe674,	// (0x0001c56a) calenote_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x0001c56a) calenote_swipe_1_pane_t1

0xe20b,	// (0x0001c101) calenote_swipe_2_pane_g1_ParamLimits

0xe20b,	// (0x0001c101) calenote_swipe_2_pane_g1

0xe693,	// (0x0001c589) calenote_swipe_2_pane_g2_ParamLimits

0xe693,	// (0x0001c589) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0001dca1) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0001dca1) calenote_swipe_2_pane_g

0xe69f,	// (0x0001c595) calenote_swipe_2_pane_t1_ParamLimits

0xe69f,	// (0x0001c595) calenote_swipe_2_pane_t1

0x9255,	// (0x0001714b) main_mup_navstr_pane

0x4d3c,	// (0x00012c32) main_mup3_pane_t7_ParamLimits

0x4d3c,	// (0x00012c32) main_mup3_pane_t7

0xca99,	// (0x0001a98f) main_mp4_pane_g6_ParamLimits

0xca99,	// (0x0001a98f) main_mp4_pane_g6

0xccc1,	// (0x0001abb7) main_image3_pane_t4_ParamLimits

0xccc1,	// (0x0001abb7) main_image3_pane_t4

0x8476,	// (0x0001636c) popup_navstr_preview_pane_ParamLimits

0x8476,	// (0x0001636c) popup_navstr_preview_pane

0x848a,	// (0x00016380) scroll_navstr_pane_ParamLimits

0x848a,	// (0x00016380) scroll_navstr_pane

0x9255,	// (0x0001714b) bg_popup_preview_window_pane_cp04

0xe6c6,	// (0x0001c5bc) popup_navstr_preview_pane_t1

0x849e,	// (0x00016394) scroll_navstr_pane_g1_ParamLimits

0x849e,	// (0x00016394) scroll_navstr_pane_g1

0x84b2,	// (0x000163a8) scroll_navstr_pane_t1_ParamLimits

0x84b2,	// (0x000163a8) scroll_navstr_pane_t1

0xe66b,	// (0x0001c561) bg_button_pane_cp014

0xe66b,	// (0x0001c561) bg_button_pane_cp030

0x7cc9,	// (0x00015bbf) list_double_fisheye_pane_g4_ParamLimits

0x7cc9,	// (0x00015bbf) list_double_fisheye_pane_g4

0x7cd5,	// (0x00015bcb) list_double_fisheye_pane_g5_ParamLimits

0x7cd5,	// (0x00015bcb) list_double_fisheye_pane_g5

0xe5da,	// (0x0001c4d0) sp_fs_scroll_pane_cp03

0xe352,	// (0x0001c248) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe35e,	// (0x0001c254) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0001dbe1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe36a,	// (0x0001c260) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x838e,	// (0x00016284) sp_fs_scroll_pane_cp02

0x9ba6,	// (0x00017a9c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ba6,	// (0x00017a9c) popup_sp_fs_calendar_preview_list_single_pane

0x9255,	// (0x0001714b) main_cam6_pano_pane

0x92c5,	// (0x000171bb) main_mup3_pane_ParamLimits

0x9255,	// (0x0001714b) main_phacti_pane

0x78aa,	// (0x000157a0) bg_button_pane_cp11

0x78c4,	// (0x000157ba) main_mobtv_info_pane_g2_ParamLimits

0x78c4,	// (0x000157ba) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0001db41) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0001db41) main_mobtv_info_pane_g

0x7aa1,	// (0x00015997) sc_clock_pane_t5_ParamLimits

0x7aa1,	// (0x00015997) sc_clock_pane_t5

0x7b2b,	// (0x00015a21) main_radioblah_pane_g1_ParamLimits

0xe157,	// (0x0001c04d) main_radioblah_pane_t3_ParamLimits

0xe157,	// (0x0001c04d) main_radioblah_pane_t3

0xe16f,	// (0x0001c065) main_radioblah_pane_t4_ParamLimits

0xe16f,	// (0x0001c065) main_radioblah_pane_t4

0x7b53,	// (0x00015a49) main_radioblah_text_pane_ParamLimits

0x7b53,	// (0x00015a49) main_radioblah_text_pane

0x7b65,	// (0x00015a5b) main_radioblah_info_pane_g1_ParamLimits

0x7bfe,	// (0x00015af4) main_radioblah_info_pane_t4_ParamLimits

0x7bfe,	// (0x00015af4) main_radioblah_info_pane_t4

0x92c5,	// (0x000171bb) main_sp_fs_calendar_pane

0x84c9,	// (0x000163bf) main_phacti_pane_g1

0x84d1,	// (0x000163c7) phacti_note_pane_ParamLimits

0x84d1,	// (0x000163c7) phacti_note_pane

0xe6dd,	// (0x0001c5d3) phacti_term_pane_ParamLimits

0xe6dd,	// (0x0001c5d3) phacti_term_pane

0xe6f2,	// (0x0001c5e8) phacti_note_pane_t1_ParamLimits

0xe6f2,	// (0x0001c5e8) phacti_note_pane_t1

0xe709,	// (0x0001c5ff) phacti_term_pane_g1

0xe711,	// (0x0001c607) phacti_term_pane_t1_ParamLimits

0xe711,	// (0x0001c607) phacti_term_pane_t1

0xe73b,	// (0x0001c631) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9ca7,	// (0x00017b9d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0001dcab) popup_sp_fs_calendar_preview_list_single_pane_g

0xe743,	// (0x0001c639) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe743,	// (0x0001c639) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe758,	// (0x0001c64e) aid_popup_sp_fs_bg_corner_pane

0xc132,	// (0x0001a028) popup_sp_fs_calendar_preview_bg_pane_g1

0x9255,	// (0x0001714b) popup_sp_fs_calendar_preview_bg_pane

0xe760,	// (0x0001c656) popup_sp_fs_calendar_preview_list_pane

0x92c5,	// (0x000171bb) bg_main_sp_fs_cale_pane_ParamLimits

0x92c5,	// (0x000171bb) bg_main_sp_fs_cale_pane

0xe771,	// (0x0001c667) listscroll_cale_mrui_pane_ParamLimits

0xe771,	// (0x0001c667) listscroll_cale_mrui_pane

0xe785,	// (0x0001c67b) listscroll_sp_fs_schedule_track_pane

0xe78e,	// (0x0001c684) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe78e,	// (0x0001c684) main_sp_fs_ctrlbar_pane_cp01

0xe79f,	// (0x0001c695) main_sp_fs_ribbon_pane

0xe7a7,	// (0x0001c69d) popup_sp_fs_cale_preview_window

0x8532,	// (0x00016428) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8532,	// (0x00016428) list_single_sp_fs_schedule_track_pane

0x92c5,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x92c5,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp03

0x8544,	// (0x0001643a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8544,	// (0x0001643a) list_single_sp_fs_schedule_track_pane_g1

0x8550,	// (0x00016446) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8550,	// (0x00016446) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0001dcb0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0001dcb0) list_single_sp_fs_schedule_track_pane_g

0x855c,	// (0x00016452) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x855c,	// (0x00016452) list_single_sp_fs_schedule_track_pane_t1

0x8576,	// (0x0001646c) sp_fs_schedule_track_pane_ParamLimits

0x8576,	// (0x0001646c) sp_fs_schedule_track_pane

0xe7b9,	// (0x0001c6af) sp_fs_schedule_track_pane_g1

0xe7c1,	// (0x0001c6b7) sp_fs_schedule_track_pane_g2

0xe7c9,	// (0x0001c6bf) sp_fs_schedule_track_pane_g3

0xe7d1,	// (0x0001c6c7) sp_fs_schedule_track_pane_g4

0xe7d9,	// (0x0001c6cf) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0001dcb5) sp_fs_schedule_track_pane_g

0xcf58,	// (0x0001ae4e) bg_sp_fs_schedule_viewer_highlight_g1

0x9f46,	// (0x00017e3c) bg_sp_fs_schedule_viewer_highlight_g2

0xcf60,	// (0x0001ae56) bg_sp_fs_schedule_viewer_highlight_g3

0xcf68,	// (0x0001ae5e) bg_sp_fs_schedule_viewer_highlight_g4

0xd211,	// (0x0001b107) bg_sp_fs_schedule_viewer_highlight_g5

0xcf78,	// (0x0001ae6e) bg_sp_fs_schedule_viewer_highlight_g6

0xcf80,	// (0x0001ae76) bg_sp_fs_schedule_viewer_highlight_g7

0xcf88,	// (0x0001ae7e) bg_sp_fs_schedule_viewer_highlight_g8

0x9f26,	// (0x00017e1c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0001dcc0) bg_sp_fs_schedule_viewer_highlight_g

0x9255,	// (0x0001714b) bg_main_sp_fs_ribbon_pane

0x8587,	// (0x0001647d) main_sp_fs_ribbon_pane_g1

0xe7e1,	// (0x0001c6d7) main_sp_fs_ribbon_pane_t1

0x8590,	// (0x00016486) main_sp_fs_ribbon_pane_t2

0xe7f0,	// (0x0001c6e6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0001dcd3) main_sp_fs_ribbon_pane_t

0xe7ff,	// (0x0001c6f5) main_sp_fs_ribbon_scheduler_pane

0xe807,	// (0x0001c6fd) bg_main_sp_fs_ribbon_pane_g1

0xe810,	// (0x0001c706) bg_main_sp_fs_ribbon_pane_g2

0xe819,	// (0x0001c70f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0001dcda) bg_main_sp_fs_ribbon_pane_g

0xe821,	// (0x0001c717) main_sp_fs_ribbon_scheduler_pane_g1

0xe82a,	// (0x0001c720) main_sp_fs_ribbon_scheduler_pane_g2

0xe833,	// (0x0001c729) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0001dce1) main_sp_fs_ribbon_scheduler_pane_g

0xe83c,	// (0x0001c732) list_cale_mrui_pane

0x859f,	// (0x00016495) sp_fs_scroll_pane_cp07_ParamLimits

0x859f,	// (0x00016495) sp_fs_scroll_pane_cp07

0x85b3,	// (0x000164a9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85b3,	// (0x000164a9) bg_sp_fs_schedule_viewer_highlight

0xe845,	// (0x0001c73b) list_single_sp_fs_schedule_track_pane_cp01

0xe84d,	// (0x0001c743) list_sp_fs_schedule_track_pane

0xe855,	// (0x0001c74b) sp_fs_scroll_pane_cp06_ParamLimits

0xe855,	// (0x0001c74b) sp_fs_scroll_pane_cp06

0xc132,	// (0x0001a028) bgmain_sp_fs_calendar_pane_g1

0x85c3,	// (0x000164b9) list_single_cale_mrui_pane_ParamLimits

0x85c3,	// (0x000164b9) list_single_cale_mrui_pane

0xe867,	// (0x0001c75d) list_single_cale_mrui_row_pane_ParamLimits

0xe867,	// (0x0001c75d) list_single_cale_mrui_row_pane

0xe874,	// (0x0001c76a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe874,	// (0x0001c76a) list_single_cale_mrui_row_pane_g1

0xe8b9,	// (0x0001c7af) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8b9,	// (0x0001c7af) list_single_cale_mrui_row_pane_t1

0x85e3,	// (0x000164d9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85e3,	// (0x000164d9) list_single_cale_mrui_row_pane_t2

0xe8cb,	// (0x0001c7c1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8cb,	// (0x0001c7c1) list_single_cale_mrui_row_pane_t3

0xe8fa,	// (0x0001c7f0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8fa,	// (0x0001c7f0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0001dcef) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0001dcef) list_single_cale_mrui_row_pane_t

0x864b,	// (0x00016541) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x864b,	// (0x00016541) list_single_cmail_header_editor_pane_bg_cp01

0x8671,	// (0x00016567) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8671,	// (0x00016567) list_single_cmail_header_editor_pane_bg_cp02

0x8691,	// (0x00016587) main_radioblah_text_pane_t1_ParamLimits

0x8691,	// (0x00016587) main_radioblah_text_pane_t1

0xe929,	// (0x0001c81f) cam6_indi_pane_cp01

0xe931,	// (0x0001c827) cam6_mode_pane_cp01

0xe939,	// (0x0001c82f) cam6_pano_pane

0xe942,	// (0x0001c838) cam6_zoom_pane_cp01

0xe94a,	// (0x0001c840) cam6_pano_image_pane

0xe955,	// (0x0001c84b) cam6_pano_pane_g1

0xdeb9,	// (0x0001bdaf) cam6_pano_pane_g2

0xe95e,	// (0x0001c854) cam6_pano_pane_g3

0xe967,	// (0x0001c85d) cam6_pano_pane_g4

0xc6e0,	// (0x0001a5d6) cam6_pano_pane_g5

0xe970,	// (0x0001c866) cam6_pano_pane_g6

0xe24b,	// (0x0001c141) cam6_pano_pane_g7

0xe97a,	// (0x0001c870) cam6_pano_pane_g8

0xe983,	// (0x0001c879) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0001dcf8) cam6_pano_pane_g

0x9255,	// (0x0001714b) main_browser_tag_pane

0xe6be,	// (0x0001c5b4) grid_navstr_albumart_pane

0xe98e,	// (0x0001c884) cell_navstr_albumart_pane_ParamLimits

0xe98e,	// (0x0001c884) cell_navstr_albumart_pane

0xe9b1,	// (0x0001c8a7) cell_navstr_albumart_pane_g1

0xba49,	// (0x0001993f) cell_navstr_albumart_pane_g2

0xba59,	// (0x0001994f) cell_navstr_albumart_pane_g3

0xba51,	// (0x00019947) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0001dd0b) cell_navstr_albumart_pane_g

0x86ab,	// (0x000165a1) bt_list_pane_ParamLimits

0x86ab,	// (0x000165a1) bt_list_pane

0x86bf,	// (0x000165b5) bt_list_pane_t1

0x86ce,	// (0x000165c4) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0001dd14) bt_list_pane_t

0x9255,	// (0x0001714b) main_cale_prevew_pane

0x86dd,	// (0x000165d3) popup_cale_preview_window_ParamLimits

0x86dd,	// (0x000165d3) popup_cale_preview_window

0x92c5,	// (0x000171bb) bg_popup_preview_window_pane_cp05_ParamLimits

0x92c5,	// (0x000171bb) bg_popup_preview_window_pane_cp05

0xe9b9,	// (0x0001c8af) list_cale_preview_pane_ParamLimits

0xe9b9,	// (0x0001c8af) list_cale_preview_pane

0x86f8,	// (0x000165ee) list_double_cale_preview_pane_ParamLimits

0x86f8,	// (0x000165ee) list_double_cale_preview_pane

0x870a,	// (0x00016600) list_single_cale_preview_pane_ParamLimits

0x870a,	// (0x00016600) list_single_cale_preview_pane

0x8720,	// (0x00016616) list_single_cale_preview_pane_g1

0x8728,	// (0x0001661e) list_single_cale_preview_pane_t1_ParamLimits

0x8728,	// (0x0001661e) list_single_cale_preview_pane_t1

0x873d,	// (0x00016633) list_double_cale_preview_pane_g1

0x8745,	// (0x0001663b) list_double_cale_preview_pane_t1_ParamLimits

0x8745,	// (0x0001663b) list_double_cale_preview_pane_t1

0x875a,	// (0x00016650) list_double_cale_preview_pane_t2_ParamLimits

0x875a,	// (0x00016650) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0001dd19) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0001dd19) list_double_cale_preview_pane_t

0x9255,	// (0x0001714b) main_ezdial_pane

0x92c5,	// (0x000171bb) main_sp_fs_email_pane_ParamLimits

0x7e67,	// (0x00015d5d) cmail_ddmenu_btn01_pane_ParamLimits

0x7e67,	// (0x00015d5d) cmail_ddmenu_btn01_pane

0x7e7a,	// (0x00015d70) cmail_ddmenu_btn02_pane_ParamLimits

0x7e7a,	// (0x00015d70) cmail_ddmenu_btn02_pane

0x7e9d,	// (0x00015d93) cmail_ddmenu_btn03_pane_ParamLimits

0x7e9d,	// (0x00015d93) cmail_ddmenu_btn03_pane

0x7ec6,	// (0x00015dbc) main_sp_fs_ctrlbar_pane_ParamLimits

0x7eea,	// (0x00015de0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd1b6,	// (0x0001b0ac) list_cmail_body_pane_ParamLimits

0xe5ea,	// (0x0001c4e0) bg_button_pane_cp12

0xe5ff,	// (0x0001c4f5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5ff,	// (0x0001c4f5) list_single_cmail_header_detail_pane_g3

0x83ff,	// (0x000162f5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x83ff,	// (0x000162f5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0001dc9c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0001dc9c) list_single_cmail_header_detail_pane_t

0xe726,	// (0x0001c61c) phacti_term_pane_t2_ParamLimits

0xe726,	// (0x0001c61c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0001dca6) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0001dca6) phacti_term_pane_t

0xe9c5,	// (0x0001c8bb) aid_size_list_single_double

0x8772,	// (0x00016668) popup_ezdial_listscroll_window

0x878e,	// (0x00016684) popup_number_entry_window_cp01

0xa76f,	// (0x00018665) bg_popup_call_pane_cp09

0xe9d1,	// (0x0001c8c7) ezdial_list_pane

0xe9d9,	// (0x0001c8cf) scroll_pane_cp23

0xbc2c,	// (0x00019b22) bg_button_pane_cp028_ParamLimits

0xbc2c,	// (0x00019b22) bg_button_pane_cp028

0x879c,	// (0x00016692) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x879c,	// (0x00016692) cmail_ddmenu_btn01_pane_g1

0x87ab,	// (0x000166a1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87ab,	// (0x000166a1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0001dd1e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0001dd1e) cmail_ddmenu_btn01_pane_g

0xe9e1,	// (0x0001c8d7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e1,	// (0x0001c8d7) cmail_ddmenu_btn01_pane_t1

0xbc2c,	// (0x00019b22) bg_button_pane_cp029_ParamLimits

0xbc2c,	// (0x00019b22) bg_button_pane_cp029

0x87bb,	// (0x000166b1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87bb,	// (0x000166b1) cmail_ddmenu_btn02_pane_g1

0x87d6,	// (0x000166cc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87d6,	// (0x000166cc) cmail_ddmenu_btn02_pane_t1

0x92c5,	// (0x000171bb) bg_button_pane_cp031_ParamLimits

0x92c5,	// (0x000171bb) bg_button_pane_cp031

0x87bb,	// (0x000166b1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87bb,	// (0x000166b1) cmail_ddmenu_btn03_pane_g1

0x87d6,	// (0x000166cc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87d6,	// (0x000166cc) cmail_ddmenu_btn03_pane_t1

0x58b0,	// (0x000137a6) cell_dialer2_keypad_pane_t1_ParamLimits

0x58ca,	// (0x000137c0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x58ca,	// (0x000137c0) cell_dialer2_keypad_pane_t1_copy1

0x7711,	// (0x00015607) ncimui_group_button_pane

0x92c5,	// (0x000171bb) main_sp_fs_calendar_pane_ParamLimits

0x8398,	// (0x0001628e) list_single_cmail_header_caption_pane_ParamLimits

0xe768,	// (0x0001c65e) aid_recal_txt_sm_pane

0x9255,	// (0x0001714b) mian_recal_day_pane

0xe7a7,	// (0x0001c69d) popup_sp_fs_cale_preview_window_ParamLimits

0x9255,	// (0x0001714b) list_recal_day_pane

0xea19,	// (0x0001c90f) list_single_recal_day_pane_ParamLimits

0xea19,	// (0x0001c90f) list_single_recal_day_pane

0xea2b,	// (0x0001c921) list_single_recal_day_pane_g1_ParamLimits

0xea2b,	// (0x0001c921) list_single_recal_day_pane_g1

0xea37,	// (0x0001c92d) list_single_recal_day_pane_g2_ParamLimits

0xea37,	// (0x0001c92d) list_single_recal_day_pane_g2

0xea47,	// (0x0001c93d) list_single_recal_day_pane_g3_ParamLimits

0xea47,	// (0x0001c93d) list_single_recal_day_pane_g3

0x87fd,	// (0x000166f3) list_single_recal_day_pane_g4_ParamLimits

0x87fd,	// (0x000166f3) list_single_recal_day_pane_g4

0xea53,	// (0x0001c949) list_single_recal_day_pane_g5_ParamLimits

0xea53,	// (0x0001c949) list_single_recal_day_pane_g5

0xea63,	// (0x0001c959) list_single_recal_day_pane_g6_ParamLimits

0xea63,	// (0x0001c959) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0001dd2d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0001dd2d) list_single_recal_day_pane_g

0xea7a,	// (0x0001c970) list_single_recal_day_pane_t1

0xea8c,	// (0x0001c982) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0001dd38) list_single_recal_day_pane_t

0x881d,	// (0x00016713) ncimui_query_button_pane_ParamLimits

0x881d,	// (0x00016713) ncimui_query_button_pane

0x882d,	// (0x00016723) ncimui_query_button_pane_t1_ParamLimits

0x882d,	// (0x00016723) ncimui_query_button_pane_t1

0xeaa1,	// (0x0001c997) ncimui_query_button_pane_t2_ParamLimits

0xeaa1,	// (0x0001c997) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0001dd3d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0001dd3d) ncimui_query_button_pane_t

0x8840,	// (0x00016736) query_button_pane_ParamLimits

0x8840,	// (0x00016736) query_button_pane

0x9255,	// (0x0001714b) bg_button_pane_cp0028

0xeab4,	// (0x0001c9aa) query_button_pane_t1

0x395d,	// (0x00011853) main_tport_pane_ParamLimits

0x8285,	// (0x0001617b) bg_popup_window_pane_cp01_ParamLimits

0x8285,	// (0x0001617b) bg_popup_window_pane_cp01

0x829f,	// (0x00016195) heading_pane_cp08_ParamLimits

0x829f,	// (0x00016195) heading_pane_cp08

0x82b3,	// (0x000161a9) heading_pane_cp07_ParamLimits

0x82b3,	// (0x000161a9) heading_pane_cp07

0xe5ac,	// (0x0001c4a2) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0001dc89) cell_tport_appsw_pane_g

0xa8f0,	// (0x000187e6) input_candi_list_open_g1

0xa145,	// (0x0001803b) list_cale_time_pane_g6_ParamLimits

0xa145,	// (0x0001803b) list_cale_time_pane_g6

0x472a,	// (0x00012620) aid_size_touch_calib_1_ParamLimits

0x472a,	// (0x00012620) aid_size_touch_calib_1

0x4736,	// (0x0001262c) aid_size_touch_calib_2_ParamLimits

0x4736,	// (0x0001262c) aid_size_touch_calib_2

0x474c,	// (0x00012642) aid_size_touch_calib_3_ParamLimits

0x474c,	// (0x00012642) aid_size_touch_calib_3

0x476a,	// (0x00012660) aid_size_touch_calib_4_ParamLimits

0x476a,	// (0x00012660) aid_size_touch_calib_4

0x4780,	// (0x00012676) main_touch_calib_button_group_pane_ParamLimits

0x4780,	// (0x00012676) main_touch_calib_button_group_pane

0x4798,	// (0x0001268e) main_touch_calib_pane_g1_ParamLimits

0x47a4,	// (0x0001269a) main_touch_calib_pane_g2_ParamLimits

0x47b0,	// (0x000126a6) main_touch_calib_pane_g3_ParamLimits

0x47bc,	// (0x000126b2) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0001d657) main_touch_calib_pane_g_ParamLimits

0x47c8,	// (0x000126be) main_touch_calib_pane_t1_ParamLimits

0x47e2,	// (0x000126d8) main_touch_calib_pane_t2_ParamLimits

0x47fc,	// (0x000126f2) main_touch_calib_pane_t3_ParamLimits

0x4810,	// (0x00012706) main_touch_calib_pane_t4_ParamLimits

0x4824,	// (0x0001271a) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0001d660) main_touch_calib_pane_t_ParamLimits

0xc4b6,	// (0x0001a3ac) list_single_fp_cale_pane_g3_ParamLimits

0xc4b6,	// (0x0001a3ac) list_single_fp_cale_pane_g3

0x92c5,	// (0x000171bb) bg_button_pane_cp012_ParamLimits

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp03_ParamLimits

0x68d8,	// (0x000147ce) cell_vitu2_function_top_pane_g1_ParamLimits

0x92c5,	// (0x000171bb) bg_vkb2_func_pane_cp04_ParamLimits

0x769f,	// (0x00015595) main_ncimui_button_group_pane_ParamLimits

0x769f,	// (0x00015595) main_ncimui_button_group_pane

0x76ff,	// (0x000155f5) main_ncimui_pane_t3_ParamLimits

0x76ff,	// (0x000155f5) main_ncimui_pane_t3

0xe6d4,	// (0x0001c5ca) phacti_button_group_pane

0xe9c5,	// (0x0001c8bb) aid_size_list_single_double_ParamLimits

0x8772,	// (0x00016668) popup_ezdial_listscroll_window_ParamLimits

0x878e,	// (0x00016684) popup_number_entry_window_cp01_ParamLimits

0x8853,	// (0x00016749) phacti_button_pane_ParamLimits

0x8853,	// (0x00016749) phacti_button_pane

0x9255,	// (0x0001714b) bg_button_pane_cp14

0xeac2,	// (0x0001c9b8) phacti_button_pane_t1

0x8864,	// (0x0001675a) main_touch_calib_button_pane_ParamLimits

0x8864,	// (0x0001675a) main_touch_calib_button_pane

0x9a36,	// (0x0001792c) bg_button_pane_cp18_ParamLimits

0x9a36,	// (0x0001792c) bg_button_pane_cp18

0xead0,	// (0x0001c9c6) main_touch_calib_button_pane_t1_ParamLimits

0xead0,	// (0x0001c9c6) main_touch_calib_button_pane_t1

0xeae6,	// (0x0001c9dc) main_touch_calib_button_pane_t2_ParamLimits

0xeae6,	// (0x0001c9dc) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0001dd42) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0001dd42) main_touch_calib_button_pane_t

0x9255,	// (0x0001714b) cell_ncimui_button_pane

0x9255,	// (0x0001714b) bg_button_pane_cp032

0xeb04,	// (0x0001c9fa) cell_ncimui_button_pane_t1

0xcca1,	// (0x0001ab97) image3_infobar_pane_ParamLimits

0xcca1,	// (0x0001ab97) image3_infobar_pane

0x7acd,	// (0x000159c3) fs_bigclock_status_pane_ParamLimits

0x7acd,	// (0x000159c3) fs_bigclock_status_pane

0x7ada,	// (0x000159d0) main_fs_bigclock_clock_pane_ParamLimits

0x7ada,	// (0x000159d0) main_fs_bigclock_clock_pane

0x7aee,	// (0x000159e4) main_fs_bigclock_indi_pane_ParamLimits

0x7aee,	// (0x000159e4) main_fs_bigclock_indi_pane

0x7b07,	// (0x000159fd) main_fs_bigclock_swipe_pane_ParamLimits

0x7b07,	// (0x000159fd) main_fs_bigclock_swipe_pane

0x9255,	// (0x0001714b) main_fs_clock_dumped_data

0xdfc6,	// (0x0001bebc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfc6,	// (0x0001bebc) list_single_fs_bigclock_indicator_pane_g1

0xdfec,	// (0x0001bee2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfec,	// (0x0001bee2) list_single_fs_bigclock_indicator_pane_g2

0xe006,	// (0x0001befc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe006,	// (0x0001befc) list_single_fs_bigclock_indicator_pane_g3

0xe020,	// (0x0001bf16) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe020,	// (0x0001bf16) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0001db75) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0001db75) list_single_fs_bigclock_indicator_pane_g

0xe049,	// (0x0001bf3f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe049,	// (0x0001bf3f) list_single_fs_bigclock_indicator_pane_t1

0xe071,	// (0x0001bf67) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe071,	// (0x0001bf67) list_single_fs_bigclock_indicator_pane_t2

0xe099,	// (0x0001bf8f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe099,	// (0x0001bf8f) list_single_fs_bigclock_indicator_pane_t3

0xe0c1,	// (0x0001bfb7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0c1,	// (0x0001bfb7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0001db80) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0001db80) list_single_fs_bigclock_indicator_pane_t

0xeb12,	// (0x0001ca08) image3_infobar_fav_pane_ParamLimits

0xeb12,	// (0x0001ca08) image3_infobar_fav_pane

0xeb22,	// (0x0001ca18) image3_infobar_loc_pane_ParamLimits

0xeb22,	// (0x0001ca18) image3_infobar_loc_pane

0xeb36,	// (0x0001ca2c) image3_infobar_time_pane_ParamLimits

0xeb36,	// (0x0001ca2c) image3_infobar_time_pane

0xc132,	// (0x0001a028) image3_infobar_time_pane_g1

0xeb46,	// (0x0001ca3c) image3_infobar_time_pane_t1

0xc132,	// (0x0001a028) image3_infobar_loc_pane_g1

0xeb54,	// (0x0001ca4a) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0001dd47) image3_infobar_loc_pane_g

0xeb5c,	// (0x0001ca52) image3_infobar_loc_pane_t1

0xc132,	// (0x0001a028) image3_infobar_fav_pane_g1

0xeb6a,	// (0x0001ca60) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0001dd4c) image3_infobar_fav_pane_g

0xeb72,	// (0x0001ca68) fs_bigclock_status_battery_pane

0xeb7b,	// (0x0001ca71) fs_bigclock_status_signal_pane

0xeb84,	// (0x0001ca7a) fs_bigclock_status_title_pane

0xeb8d,	// (0x0001ca83) fs_bigclock_status_signal_pane_g1

0xeb96,	// (0x0001ca8c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0001dd51) fs_bigclock_status_signal_pane_g

0xeb9e,	// (0x0001ca94) fs_bigclock_status_battery_pane_g1

0xeba7,	// (0x0001ca9d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0001dd56) fs_bigclock_status_battery_pane_g

0xebaf,	// (0x0001caa5) fs_bigclock_status_title_pane_t1

0xc132,	// (0x0001a028) main_fs_bigclock_clock_pane_g1

0xebbd,	// (0x0001cab3) main_fs_bigclock_clock_pane_g2

0xebbd,	// (0x0001cab3) main_fs_bigclock_clock_pane_g3

0xebbd,	// (0x0001cab3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0001dd5b) main_fs_bigclock_clock_pane_g

0xebc5,	// (0x0001cabb) main_fs_bigclock_clock_pane_t1

0xebd3,	// (0x0001cac9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0001dd64) main_fs_bigclock_clock_pane_t

0xebe2,	// (0x0001cad8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebe2,	// (0x0001cad8) list_single_fs_bigclock_indicator_pane

0x8879,	// (0x0001676f) list_single_fs_bigclock_pane_ParamLimits

0x8879,	// (0x0001676f) list_single_fs_bigclock_pane

0xebfc,	// (0x0001caf2) main_fs_bigclock_indicator_pane_t1

0xec0b,	// (0x0001cb01) list_single_fs_bigclock_pane_g1

0xec13,	// (0x0001cb09) list_single_fs_bigclock_pane_t1

0xc132,	// (0x0001a028) main_fs_bigclock_swipe_pane_g1

0xec56,	// (0x0001cb4c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0001dd75) main_fs_bigclock_swipe_pane_g

0xec5e,	// (0x0001cb54) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec5e,	// (0x0001cb54) main_fs_bigclock_swipe_pane_t1

0x278e,	// (0x00010684) call_type_pane_ParamLimits

0x9255,	// (0x0001714b) main_btmg_pane

0xe8a0,	// (0x0001c796) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a0,	// (0x0001c796) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0001dce8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0001dce8) list_single_cale_mrui_row_pane_g

0xea00,	// (0x0001c8f6) list_recal_vselct_arw_lo_pane

0xea08,	// (0x0001c8fe) list_recal_vselct_arw_up_pane

0xea10,	// (0x0001c906) list_recal_vselct_pane

0x88dc,	// (0x000167d2) btmg_button_pane

0x88e6,	// (0x000167dc) main_btmg_pane_g1

0x9255,	// (0x0001714b) bg_button_pane_cp044

0xec7b,	// (0x0001cb71) btmg_button_pane_t1

0xbc24,	// (0x00019b1a) aid_listscroll_gen

0x92c5,	// (0x000171bb) main_cntbar_detail_pane

0xe5ca,	// (0x0001c4c0) list_cmail_folder_pane

0xe5da,	// (0x0001c4d0) sp_fs_scroll_pane_cp03_ParamLimits

0x8398,	// (0x0001628e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8398,	// (0x0001628e) list_single_fs_dyc_pane_cp01

0xec89,	// (0x0001cb7f) aid_size_cmail_indent

0xec92,	// (0x0001cb88) list_single_dyc_row_pane_cp01

0x891c,	// (0x00016812) cntbar_detail_list_pane_ParamLimits

0x891c,	// (0x00016812) cntbar_detail_list_pane

0x8968,	// (0x0001685e) main_cntbar_detail_cont_pane_ParamLimits

0x8968,	// (0x0001685e) main_cntbar_detail_cont_pane

0x2728,	// (0x0001061e) scroll_pane_cp032_ParamLimits

0x2728,	// (0x0001061e) scroll_pane_cp032

0x897c,	// (0x00016872) cntbar_detail_list_event_pane_ParamLimits

0x897c,	// (0x00016872) cntbar_detail_list_event_pane

0x892c,	// (0x00016822) cntbar_detail_list_shct_pane

0x9f94,	// (0x00017e8a) aid_list_gen

0xec9b,	// (0x0001cb91) aid_scroll

0xeca4,	// (0x0001cb9a) aid_size_touch_scroll_bar

0x898c,	// (0x00016882) aid_list_double

0xecad,	// (0x0001cba3) aid_list_single

0x898c,	// (0x00016882) aid_list_single_lg

0xecb6,	// (0x0001cbac) aid_list_z_g_a_sm

0xecbe,	// (0x0001cbb4) aid_list_z_g_d

0xecc6,	// (0x0001cbbc) aid_txt_z_prm

0x8995,	// (0x0001688b) aid_txt_z_prm_cp01

0x89a3,	// (0x00016899) aid_txt_z_sec

0x89b1,	// (0x000168a7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89b1,	// (0x000168a7) main_cntbar_detail_cont_pane_g1

0x89c5,	// (0x000168bb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89c5,	// (0x000168bb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0001dd7a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0001dd7a) main_cntbar_detail_cont_pane_g

0xecd4,	// (0x0001cbca) main_cntbar_detail_cont_pane_t1

0xece2,	// (0x0001cbd8) main_cntbar_detail_cont_pane_t2

0xecf0,	// (0x0001cbe6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0001dd7f) main_cntbar_detail_cont_pane_t

0x89d5,	// (0x000168cb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89d5,	// (0x000168cb) cell_cntbar_detail_list_shct_pane

0xecfe,	// (0x0001cbf4) cntbar_detail_list_shct_pane_g1

0xed07,	// (0x0001cbfd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0001dd86) cntbar_detail_list_shct_pane_g

0x89e9,	// (0x000168df) cntbar_detail_list_event_pane_g1_ParamLimits

0x89e9,	// (0x000168df) cntbar_detail_list_event_pane_g1

0x89f5,	// (0x000168eb) cntbar_detail_list_event_pane_g2_ParamLimits

0x89f5,	// (0x000168eb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0001dd8b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0001dd8b) cntbar_detail_list_event_pane_g

0x8a61,	// (0x00016957) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a61,	// (0x00016957) cntbar_detail_list_event_pane_t1

0x8a76,	// (0x0001696c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a76,	// (0x0001696c) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0001dd98) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0001dd98) cntbar_detail_list_event_pane_t

0xc132,	// (0x0001a028) cell_cntbar_detail_list_shct_pane_g1

0x2b06,	// (0x000109fc) navi_pane_mv_g3

0x92c5,	// (0x000171bb) main_cntbar_detail_pane_ParamLimits

0x9255,	// (0x0001714b) main_notif_wgt_pane

0xca33,	// (0x0001a929) aid_tch_main_mp4_pane_g4

0xcc35,	// (0x0001ab2b) popup_slider_window_cp02

0xe9f6,	// (0x0001c8ec) list_recal_day_event_pane

0x88f0,	// (0x000167e6) cntbar_detail_btn_pane_ParamLimits

0x88f0,	// (0x000167e6) cntbar_detail_btn_pane

0x8906,	// (0x000167fc) cntbar_detail_btn_pane_cp01_ParamLimits

0x8906,	// (0x000167fc) cntbar_detail_btn_pane_cp01

0x892c,	// (0x00016822) cntbar_detail_list_shct_pane_ParamLimits

0x893c,	// (0x00016832) cntbar_detail_pane_g1_ParamLimits

0x893c,	// (0x00016832) cntbar_detail_pane_g1

0x894c,	// (0x00016842) cntbar_detail_pane_t1_ParamLimits

0x894c,	// (0x00016842) cntbar_detail_pane_t1

0x8a01,	// (0x000168f7) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a01,	// (0x000168f7) cntbar_detail_list_event_pane_g3

0x8a19,	// (0x0001690f) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a19,	// (0x0001690f) cntbar_detail_list_event_pane_g4

0x8a31,	// (0x00016927) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a31,	// (0x00016927) cntbar_detail_list_event_pane_g5

0x8a49,	// (0x0001693f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a49,	// (0x0001693f) cntbar_detail_list_event_pane_g6

0x8a8b,	// (0x00016981) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a8b,	// (0x00016981) cntbar_detail_list_event_pane_t3

0x8a9d,	// (0x00016993) popup_notif_wgt_window_ParamLimits

0x8a9d,	// (0x00016993) popup_notif_wgt_window

0x8ab6,	// (0x000169ac) popup_submenu_window_cp01_ParamLimits

0x8ab6,	// (0x000169ac) popup_submenu_window_cp01

0xa76f,	// (0x00018665) bg_popup_window_pane_cp10

0xed10,	// (0x0001cc06) listscroll_notif_wgt_pane

0xed21,	// (0x0001cc17) list_notif_wgt_window

0xed2a,	// (0x0001cc20) scroll_pane_cp033

0x881d,	// (0x00016713) list_notif_wgt_row_pane_ParamLimits

0x881d,	// (0x00016713) list_notif_wgt_row_pane

0xed33,	// (0x0001cc29) aid_size_list_notif_wgt_del

0xed40,	// (0x0001cc36) list_notif_wgt_row_pane_g1

0xed4c,	// (0x0001cc42) list_notif_wgt_row_pane_g2

0xed58,	// (0x0001cc4e) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0001dd9f) list_notif_wgt_row_pane_g

0xed65,	// (0x0001cc5b) list_notif_wgt_row_pane_t1

0xed7a,	// (0x0001cc70) list_notif_wgt_row_pane_t2

0xed8c,	// (0x0001cc82) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0001dda6) list_notif_wgt_row_pane_t

0xd251,	// (0x0001b147) list_recal_day_event_pane_g1

0xedb0,	// (0x0001cca6) list_recal_day_event_pane_t1

0x9255,	// (0x0001714b) bg_button_pane_cp045

0xedbf,	// (0x0001ccb5) cntbar_detail_btn_pane_t1

0xbc2c,	// (0x00019b22) main_callh_pane_ParamLimits

0xbc2c,	// (0x00019b22) main_callh_pane

0x9255,	// (0x0001714b) main_coverflow0_pane

0x9255,	// (0x0001714b) main_wgtman_pane

0x7b15,	// (0x00015a0b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7b15,	// (0x00015a0b) main_fs_bigclock_unlock_btn_pane

0xe5a4,	// (0x0001c49a) bg_button_pane_cp16

0xe5b4,	// (0x0001c4aa) cell_tport_appsw_pane_g3

0x8ac8,	// (0x000169be) cf0_flow_pane_ParamLimits

0x8ac8,	// (0x000169be) cf0_flow_pane

0xedcd,	// (0x0001ccc3) listscroll_cf0_pane

0xedd8,	// (0x0001ccce) main_cf0_pane_g1

0x8add,	// (0x000169d3) main_cf0_pane_t1_ParamLimits

0x8add,	// (0x000169d3) main_cf0_pane_t1

0x8af4,	// (0x000169ea) main_cf0_pane_t2_ParamLimits

0x8af4,	// (0x000169ea) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001ddad) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001ddad) main_cf0_pane_t

0xede2,	// (0x0001ccd8) scroll_pane_cp11

0x8b0b,	// (0x00016a01) cf0_flow_pane_g1

0x8b13,	// (0x00016a09) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001ddb2) cf0_flow_pane_g

0x8b1b,	// (0x00016a11) cf0_flow_pane_t1

0x9255,	// (0x0001714b) main_call6_pane

0x9255,	// (0x0001714b) main_calllock_pane

0x8b29,	// (0x00016a1f) call6_btn_grp_pane_ParamLimits

0x8b29,	// (0x00016a1f) call6_btn_grp_pane

0x8b43,	// (0x00016a39) call6_pane_g1_ParamLimits

0x8b43,	// (0x00016a39) call6_pane_g1

0x8b58,	// (0x00016a4e) popup_call6_1st_window_ParamLimits

0x8b58,	// (0x00016a4e) popup_call6_1st_window

0x8b69,	// (0x00016a5f) popup_call6_2nd_window_ParamLimits

0x8b69,	// (0x00016a5f) popup_call6_2nd_window

0x8b7a,	// (0x00016a70) cell_call6_btn_pane_ParamLimits

0x8b7a,	// (0x00016a70) cell_call6_btn_pane

0xa76f,	// (0x00018665) bg_popup_call2_in_pane_cp03

0xeded,	// (0x0001cce3) popup_call6_1st_window_g1

0xedf5,	// (0x0001cceb) popup_call6_1st_window_g2

0xedfd,	// (0x0001ccf3) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ddb7) popup_call6_1st_window_g

0xee05,	// (0x0001ccfb) popup_call6_1st_window_t1

0xee14,	// (0x0001cd0a) popup_call6_1st_window_t2

0xee24,	// (0x0001cd1a) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ddbe) popup_call6_1st_window_t

0xa76f,	// (0x00018665) bg_popup_call2_in_pane_cp04

0xeded,	// (0x0001cce3) popup_call6_2nd_window_g1

0xedf5,	// (0x0001cceb) popup_call6_2nd_window_g2

0xedfd,	// (0x0001ccf3) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ddb7) popup_call6_2nd_window_g

0xee05,	// (0x0001ccfb) popup_call6_2nd_window_t1

0x9255,	// (0x0001714b) bg_button_pane_cp15

0xee34,	// (0x0001cd2a) cell_call6_btn_pane_g1

0xee3d,	// (0x0001cd33) cell_call6_btn_pane_t1

0x8b8e,	// (0x00016a84) listscroll_wgtman_pane_ParamLimits

0x8b8e,	// (0x00016a84) listscroll_wgtman_pane

0x8bb1,	// (0x00016aa7) wgtman_btn_pane_ParamLimits

0x8bb1,	// (0x00016aa7) wgtman_btn_pane

0xa626,	// (0x0001851c) aid_scroll_copy1

0xee4c,	// (0x0001cd42) list_wgtman_pane

0x8bf4,	// (0x00016aea) wgtman_btn_pane_g1_ParamLimits

0x8bf4,	// (0x00016aea) wgtman_btn_pane_g1

0x8c20,	// (0x00016b16) wgtman_btn_pane_t1_ParamLimits

0x8c20,	// (0x00016b16) wgtman_btn_pane_t1

0xee56,	// (0x0001cd4c) wgtman_btn_pane_t2_ParamLimits

0xee56,	// (0x0001cd4c) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001ddc5) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001ddc5) wgtman_btn_pane_t

0x8c5d,	// (0x00016b53) listrow_wgtman_pane_ParamLimits

0x8c5d,	// (0x00016b53) listrow_wgtman_pane

0x8c6f,	// (0x00016b65) listrow_wgtman_pane_g1

0x8c7c,	// (0x00016b72) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ddca) listrow_wgtman_pane_g

0x8c9a,	// (0x00016b90) listrow_wgtman_pane_t1

0x8cb2,	// (0x00016ba8) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ddcf) listrow_wgtman_pane_t

0x8cd8,	// (0x00016bce) wait_bar_pane_cp09

0xee6d,	// (0x0001cd63) main_calllock_btn_pane

0xee77,	// (0x0001cd6d) main_calllock_pane_g1

0x9255,	// (0x0001714b) bg_button_pane_cp17

0xee83,	// (0x0001cd79) main_calllock_btn_pane_g1

0xee8c,	// (0x0001cd82) main_calllock_btn_pane_t1

0x9255,	// (0x0001714b) main_dialer3_pane

0x9255,	// (0x0001714b) main_fmrd2_pane

0xc132,	// (0x0001a028) main_fs_bigclock_unlock_btn_pane_g1

0xeea3,	// (0x0001cd99) main_fs_bigclock_unlock_btn_pane_t1

0x8cea,	// (0x00016be0) area_fmrd2_info_pane_ParamLimits

0x8cea,	// (0x00016be0) area_fmrd2_info_pane

0x8cfb,	// (0x00016bf1) area_fmrd2_visual_pane_ParamLimits

0x8cfb,	// (0x00016bf1) area_fmrd2_visual_pane

0x8d09,	// (0x00016bff) fmrd2_indi_pane_ParamLimits

0x8d09,	// (0x00016bff) fmrd2_indi_pane

0x8d16,	// (0x00016c0c) area_fmrd2_visual_pane_g1

0x8d1e,	// (0x00016c14) area_fmrd2_visual_pane_t1

0x8d2e,	// (0x00016c24) area_fmrd2_visual_pane_t2

0x8d3e,	// (0x00016c34) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ddd9) area_fmrd2_visual_pane_t

0x8d4e,	// (0x00016c44) area_fmrd2_info_pane_g1

0x8d56,	// (0x00016c4c) area_fmrd2_info_pane_t1

0x8d66,	// (0x00016c5c) area_fmrd2_info_pane_t2

0x8d76,	// (0x00016c6c) area_fmrd2_info_pane_t3

0x8d86,	// (0x00016c7c) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001dde0) area_fmrd2_info_pane_t

0x8d94,	// (0x00016c8a) fmrd2_indi_pane_t1

0x8da4,	// (0x00016c9a) fmrd2_indi_pane_t2

0x8db4,	// (0x00016caa) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001dde9) fmrd2_indi_pane_t

0xe02f,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe02f,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g5

0xe0d6,	// (0x0001bfcc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0d6,	// (0x0001bfcc) list_single_fs_bigclock_indicator_pane_t5

0x84e5,	// (0x000163db) aid_cell_bcale_month_pane_ParamLimits

0x84e5,	// (0x000163db) aid_cell_bcale_month_pane

0x84fd,	// (0x000163f3) bcale_month_pane_ParamLimits

0x84fd,	// (0x000163f3) bcale_month_pane

0x8514,	// (0x0001640a) bcale_preview_pane_ParamLimits

0x8514,	// (0x0001640a) bcale_preview_pane

0xec13,	// (0x0001cb09) list_single_fs_bigclock_pane_t1_ParamLimits

0xec32,	// (0x0001cb28) list_single_fs_bigclock_pane_t2_ParamLimits

0xec32,	// (0x0001cb28) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0001dd70) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0001dd70) list_single_fs_bigclock_pane_t

0xee9b,	// (0x0001cd91) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ddd4) main_fs_bigclock_unlock_btn_pane_g

0x8dc4,	// (0x00016cba) aid_dia3_key_size_ParamLimits

0x8dc4,	// (0x00016cba) aid_dia3_key_size

0x8dd3,	// (0x00016cc9) aid_dia3_listrow_size_ParamLimits

0x8dd3,	// (0x00016cc9) aid_dia3_listrow_size

0x8de8,	// (0x00016cde) dia3_keypad_fun_pane_ParamLimits

0x8de8,	// (0x00016cde) dia3_keypad_fun_pane

0x8e04,	// (0x00016cfa) dia3_keypad_num_pane_ParamLimits

0x8e04,	// (0x00016cfa) dia3_keypad_num_pane

0x8e1f,	// (0x00016d15) dia3_listscroll_pane_ParamLimits

0x8e1f,	// (0x00016d15) dia3_listscroll_pane

0x8e32,	// (0x00016d28) dia3_numentry_pane_ParamLimits

0x8e32,	// (0x00016d28) dia3_numentry_pane

0xeeb1,	// (0x0001cda7) dia3_list_pane

0xeebc,	// (0x0001cdb2) scroll_pane_cp12

0x9255,	// (0x0001714b) bg_dia3_numentry_pane

0x8e46,	// (0x00016d3c) dia3_numentry_pane_t1

0x8e55,	// (0x00016d4b) cell_dia3_key_num_pane

0x8e5d,	// (0x00016d53) cell_dia3_key0_fun_pane_ParamLimits

0x8e5d,	// (0x00016d53) cell_dia3_key0_fun_pane

0x8e71,	// (0x00016d67) cell_dia3_key1_fun_pane_ParamLimits

0x8e71,	// (0x00016d67) cell_dia3_key1_fun_pane

0x8e89,	// (0x00016d7f) dia3_listrow_pane

0xdd25,	// (0x0001bc1b) bg_dia3_numentry_pane_g1

0x9255,	// (0x0001714b) bg_button_pane_cp21

0xeec7,	// (0x0001cdbd) cell_dia3_key_num_pane_t1

0xeed5,	// (0x0001cdcb) cell_dia3_key_num_pane_t2

0xeee4,	// (0x0001cdda) cell_dia3_key_num_pane_t3

0xeef3,	// (0x0001cde9) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ddf0) cell_dia3_key_num_pane_t

0x9255,	// (0x0001714b) bg_button_pane_cp19

0x8e9b,	// (0x00016d91) cell_dia3_key0_fun_pane_g1

0x9255,	// (0x0001714b) bg_button_pane_cp20

0x8ea3,	// (0x00016d99) cell_dia3_key1_fun_pane_g1

0x8eab,	// (0x00016da1) area_left_week_number_pane

0x8eb5,	// (0x00016dab) area_top_day_name_pane

0x8ec1,	// (0x00016db7) frame_month_view_pane

0x8ecb,	// (0x00016dc1) grid_month_view_pane

0xef02,	// (0x0001cdf8) cell_top_day_name_pane_ParamLimits

0xef02,	// (0x0001cdf8) cell_top_day_name_pane

0x8ed5,	// (0x00016dcb) cell_area_left_week_number_pane_ParamLimits

0x8ed5,	// (0x00016dcb) cell_area_left_week_number_pane

0x8ee9,	// (0x00016ddf) cell_month_view_pane_ParamLimits

0x8ee9,	// (0x00016ddf) cell_month_view_pane

0xef1c,	// (0x0001ce12) frm_month_g1

0x8f06,	// (0x00016dfc) frm_month_g2

0x8f10,	// (0x00016e06) frm_month_g3

0x8f1a,	// (0x00016e10) frm_month_g4

0x8f24,	// (0x00016e1a) frm_month_g5

0x8f2e,	// (0x00016e24) frm_month_g6

0x8f38,	// (0x00016e2e) frm_month_g7

0xef25,	// (0x0001ce1b) frm_month_g8

0xef2e,	// (0x0001ce24) frm_month_g9

0xef37,	// (0x0001ce2d) frm_month_g10

0xef40,	// (0x0001ce36) frm_month_g11

0xef49,	// (0x0001ce3f) frm_month_g12

0xef52,	// (0x0001ce48) frm_month_g13

0xef5b,	// (0x0001ce51) frm_month_g14

0xef66,	// (0x0001ce5c) frm_month_g15

0xef71,	// (0x0001ce67) frm_month_g16

0x000f,

0xff03,	// (0x0001ddf9) frm_month_g

0x8f42,	// (0x00016e38) cell_top_day_name_pane_t1

0x8f51,	// (0x00016e47) cell_area_left_week_number_pane_g1

0x8f59,	// (0x00016e4f) cell_area_left_week_number_pane_t1

0xc132,	// (0x0001a028) cell_month_view_pane_g1

0x8f68,	// (0x00016e5e) cell_month_view_pane_t1

0x9255,	// (0x0001714b) main_fps_pane

0xe31a,	// (0x0001c210) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe31a,	// (0x0001c210) cmail_ddmenu_btn02_pane_cp1

0xe336,	// (0x0001c22c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe336,	// (0x0001c22c) cmail_ddmenu_btn02_pane_cp2

0x87ca,	// (0x000166c0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87ca,	// (0x000166c0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0001dd23) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0001dd23) cmail_ddmenu_btn02_pane_g

0x87eb,	// (0x000166e1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87eb,	// (0x000166e1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0001dd28) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0001dd28) cmail_ddmenu_btn02_pane_t

0x8f77,	// (0x00016e6d) fps_text_pane_ParamLimits

0x8f77,	// (0x00016e6d) fps_text_pane

0x8f8e,	// (0x00016e84) main_fps_pane_g1_ParamLimits

0x8f8e,	// (0x00016e84) main_fps_pane_g1

0x8fa8,	// (0x00016e9e) wait_bar_pane_cp010_ParamLimits

0x8fa8,	// (0x00016e9e) wait_bar_pane_cp010

0x8fb9,	// (0x00016eaf) fps_text_pane_t1_ParamLimits

0x8fb9,	// (0x00016eaf) fps_text_pane_t1

0xed9e,	// (0x0001cc94) cam4_image_uncrop_pane_g1

0xeda7,	// (0x0001cc9d) cam4_image_uncrop_pane_g2

0x5d56,	// (0x00013c4c) cam4_image_uncrop_pane_g3

0x5d5f,	// (0x00013c55) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0001d7ef) cam4_image_uncrop_pane_g

0x8e89,	// (0x00016d7f) dia3_listrow_pane_ParamLimits

0x9255,	// (0x0001714b) main_phob2_pane

0x831e,	// (0x00016214) cell_tport_appsw_pane_cp02_ParamLimits

0x831e,	// (0x00016214) cell_tport_appsw_pane_cp02

0x8332,	// (0x00016228) cell_tport_appsw_pane_cp03_ParamLimits

0x8332,	// (0x00016228) cell_tport_appsw_pane_cp03

0x9255,	// (0x0001714b) phob2_contact_card_pane

0x9255,	// (0x0001714b) phob2_listscroll_pane

0xef7c,	// (0x0001ce72) phob2_list_pane

0xef84,	// (0x0001ce7a) scroll_pane_cp034

0x8fd1,	// (0x00016ec7) phob2_cc_data_pane_ParamLimits

0x8fd1,	// (0x00016ec7) phob2_cc_data_pane

0x8ff0,	// (0x00016ee6) phob2_cc_listscroll_pane_ParamLimits

0x8ff0,	// (0x00016ee6) phob2_cc_listscroll_pane

0x900e,	// (0x00016f04) list_double_large_graphic_phob2_pane_ParamLimits

0x900e,	// (0x00016f04) list_double_large_graphic_phob2_pane

0x9020,	// (0x00016f16) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9020,	// (0x00016f16) list_double_large_graphic_phob2_pane_g1

0xef8c,	// (0x0001ce82) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef8c,	// (0x0001ce82) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001de1a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001de1a) list_double_large_graphic_phob2_pane_g

0x902d,	// (0x00016f23) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x902d,	// (0x00016f23) list_double_large_graphic_phob2_pane_t1

0x9042,	// (0x00016f38) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9042,	// (0x00016f38) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001de1f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001de1f) list_double_large_graphic_phob2_pane_t

0x9255,	// (0x0001714b) list_highlight_pane_cp024

0xef98,	// (0x0001ce8e) phob2_cc_button_pane

0x9054,	// (0x00016f4a) phob2_cc_data_pane_g1_ParamLimits

0x9054,	// (0x00016f4a) phob2_cc_data_pane_g1

0x9069,	// (0x00016f5f) phob2_cc_data_pane_g2_ParamLimits

0x9069,	// (0x00016f5f) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001de24) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001de24) phob2_cc_data_pane_g

0x907b,	// (0x00016f71) phob2_cc_data_pane_t1_ParamLimits

0x907b,	// (0x00016f71) phob2_cc_data_pane_t1

0x9093,	// (0x00016f89) phob2_cc_data_pane_t2_ParamLimits

0x9093,	// (0x00016f89) phob2_cc_data_pane_t2

0x90ab,	// (0x00016fa1) phob2_cc_data_pane_t3_ParamLimits

0x90ab,	// (0x00016fa1) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001de29) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001de29) phob2_cc_data_pane_t

0xefa0,	// (0x0001ce96) phob2_cc_list_pane_ParamLimits

0xefa0,	// (0x0001ce96) phob2_cc_list_pane

0xd2fc,	// (0x0001b1f2) scroll_pane_cp035_ParamLimits

0xd2fc,	// (0x0001b1f2) scroll_pane_cp035

0x92c5,	// (0x000171bb) bg_button_pane_cp033

0xefac,	// (0x0001cea2) phob2_cc_button_pane_g1

0xefb8,	// (0x0001ceae) phob2_cc_button_pane_t1

0xefcd,	// (0x0001cec3) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001de30) phob2_cc_button_pane_t

0x90c3,	// (0x00016fb9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x90c3,	// (0x00016fb9) list_double_large_graphic_phob2_cc_pane

0x90d5,	// (0x00016fcb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x90d5,	// (0x00016fcb) list_double_large_graphic_phob2_cc_pane_g1

0x90e1,	// (0x00016fd7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x90e1,	// (0x00016fd7) list_double_large_graphic_phob2_cc_pane_g2

0x90ed,	// (0x00016fe3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x90ed,	// (0x00016fe3) list_double_large_graphic_phob2_cc_pane_g3

0x90f9,	// (0x00016fef) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x90f9,	// (0x00016fef) list_double_large_graphic_phob2_cc_pane_g4

0x9105,	// (0x00016ffb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9105,	// (0x00016ffb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001de35) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001de35) list_double_large_graphic_phob2_cc_pane_g

0x9111,	// (0x00017007) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9111,	// (0x00017007) list_double_large_graphic_phob2_cc_pane_t1

0x913a,	// (0x00017030) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x913a,	// (0x00017030) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001de40) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001de40) list_double_large_graphic_phob2_cc_pane_t

0xefdf,	// (0x0001ced5) list_highlight_pane_cp025_ParamLimits

0xefdf,	// (0x0001ced5) list_highlight_pane_cp025

0x92c5,	// (0x000171bb) bg_button_pane_cp033_ParamLimits

0xefac,	// (0x0001cea2) phob2_cc_button_pane_g1_ParamLimits

0xefb8,	// (0x0001ceae) phob2_cc_button_pane_t1_ParamLimits

0xefcd,	// (0x0001cec3) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001de30) phob2_cc_button_pane_t_ParamLimits

0x0c2f,	// (0x0000eb25) popup_wgtman_window

0xd072,	// (0x0001af68) scroll_pane_cp038

0x8bd6,	// (0x00016acc) wgtman_btn_pane_cp_01_ParamLimits

0x8bd6,	// (0x00016acc) wgtman_btn_pane_cp_01

0xefed,	// (0x0001cee3) wgtman_content_pane

0xeff6,	// (0x0001ceec) wgtman_heading_pane

0x9255,	// (0x0001714b) bg_heading_pane_cp02

0xefff,	// (0x0001cef5) wgtman_heading_pane_g1

0xf007,	// (0x0001cefd) wgtman_heading_pane_t1

0xf015,	// (0x0001cf0b) scroll_pane_cp036

0xf01d,	// (0x0001cf13) wgtman_list_pane

0xf025,	// (0x0001cf1b) wgtman_list_pane_t1_ParamLimits

0xf025,	// (0x0001cf1b) wgtman_list_pane_t1

0xcdd6,	// (0x0001accc) cam4_grid_pane

0x6a69,	// (0x0001495f) bg_button_pane_cp015_ParamLimits

0x6a7b,	// (0x00014971) bg_button_pane_cp016_ParamLimits

0x6a8e,	// (0x00014984) bg_button_pane_cp017_ParamLimits

0x6ae6,	// (0x000149dc) popup_vitu2_query_window_g3_ParamLimits

0x6ae6,	// (0x000149dc) popup_vitu2_query_window_g3

0x6ba3,	// (0x00014a99) popup_vitu2_query_window_t6_ParamLimits

0x6ba3,	// (0x00014a99) popup_vitu2_query_window_t6

0x6bce,	// (0x00014ac4) popup_vitu2_query_window_t7_ParamLimits

0x6bce,	// (0x00014ac4) popup_vitu2_query_window_t7

0xed9e,	// (0x0001cc94) cam4_grid_pane_g1

0xeda7,	// (0x0001cc9d) cam4_grid_pane_g2

0xf03f,	// (0x0001cf35) cam4_grid_pane_g3

0xf048,	// (0x0001cf3e) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001de45) cam4_grid_pane_g

0x19bc,	// (0x0000f8b2) aid_placing_vt_slider_lsc_ParamLimits

0x1cc7,	// (0x0000fbbd) vidtel_button_pane_ParamLimits

0x1cc7,	// (0x0000fbbd) vidtel_button_pane

0xf053,	// (0x0001cf49) bg_button_pane_cp034

0x9163,	// (0x00017059) vidtel_button_pane_g1

0xf05d,	// (0x0001cf53) vidtel_button_pane_t1

0xd1df,	// (0x0001b0d5) aid_size_vtel_slider_touch

0xd2fc,	// (0x0001b1f2) scroll_pane_cp039

0xdd63,	// (0x0001bc59) ncim_query_button_pane_cp01_ParamLimits

0xdd82,	// (0x0001bc78) ncimui_query_pane_g1_ParamLimits

0x92c5,	// (0x000171bb) input_focus_pane_cp012_ParamLimits

0xdda7,	// (0x0001bc9d) ncim_query_entry_pane_t1_ParamLimits

0xd2fc,	// (0x0001b1f2) scroll_pane_cp039_ParamLimits

0x2a7a,	// (0x00010970) navi_pane_bcale_mc_g1

0x2a82,	// (0x00010978) navi_pane_bcale_mc_t1

0xe37f,	// (0x0001c275) main_sp_fs_email_pane_g1

0xe387,	// (0x0001c27d) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0001dbe6) main_sp_fs_email_pane_g

0xe8ac,	// (0x0001c7a2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ac,	// (0x0001c7a2) list_single_cale_mrui_row_pane_g3

0x8813,	// (0x00016709) list_single_recal_day_pane_g5_event_pane

0xea72,	// (0x0001c968) list_single_recal_day_pane_g7

0xf06b,	// (0x0001cf61) list_recal_day_event_pane_cp01

0xf074,	// (0x0001cf6a) list_recal_vselct_arw_lo_pane_cp01

0xf07c,	// (0x0001cf72) list_recal_vselct_arw_up_pane_cp01

0xf084,	// (0x0001cf7a) list_recal_vselct_pane_cp01

0xd251,	// (0x0001b147) list_recal_day_event_pane_cp01_g1

0xf08e,	// (0x0001cf84) list_recal_day_event_pane_cp01_t1

0xea7a,	// (0x0001c970) list_single_recal_day_pane_t1_ParamLimits

0xea8c,	// (0x0001c982) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0001dd38) list_single_recal_day_pane_t_ParamLimits

0x99ec,	// (0x000178e2) bg_notes_pane_ParamLimits

0x99fa,	// (0x000178f0) list_notes_pane_ParamLimits

0x0f78,	// (0x0000ee6e) scroll_pane_cp06_ParamLimits

0x9a36,	// (0x0001792c) main_notes_pane_ParamLimits

0x9255,	// (0x0001714b) main_welc_pane

0x916b,	// (0x00017061) main_welc_body_pane_ParamLimits

0x916b,	// (0x00017061) main_welc_body_pane

0x9189,	// (0x0001707f) main_welc_opti_pane_ParamLimits

0x9189,	// (0x0001707f) main_welc_opti_pane

0x91ce,	// (0x000170c4) main_welc_pane_t1_ParamLimits

0x91ce,	// (0x000170c4) main_welc_pane_t1

0x91ec,	// (0x000170e2) main_welc_body_row_pane_ParamLimits

0x91ec,	// (0x000170e2) main_welc_body_row_pane

0x9200,	// (0x000170f6) main_welc_opti_row_pane_ParamLimits

0x9200,	// (0x000170f6) main_welc_opti_row_pane

0xf09c,	// (0x0001cf92) main_welc_opti_row_pane_g1

0xf0a4,	// (0x0001cf9a) main_welc_opti_row_pane_t1

0xf0b3,	// (0x0001cfa9) main_welc_body_row_pane_t1

0xed19,	// (0x0001cc0f) popup_notif_wgt_heading_pane

0xed33,	// (0x0001cc29) aid_size_list_notif_wgt_del_ParamLimits

0xed40,	// (0x0001cc36) list_notif_wgt_row_pane_g1_ParamLimits

0xed4c,	// (0x0001cc42) list_notif_wgt_row_pane_g2_ParamLimits

0xed58,	// (0x0001cc4e) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0001dd9f) list_notif_wgt_row_pane_g_ParamLimits

0xed65,	// (0x0001cc5b) list_notif_wgt_row_pane_t1_ParamLimits

0xed7a,	// (0x0001cc70) list_notif_wgt_row_pane_t2_ParamLimits

0xed8c,	// (0x0001cc82) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0001dda6) list_notif_wgt_row_pane_t_ParamLimits

0x8c6f,	// (0x00016b65) listrow_wgtman_pane_g1_ParamLimits

0x8c7c,	// (0x00016b72) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ddca) listrow_wgtman_pane_g_ParamLimits

0x8c9a,	// (0x00016b90) listrow_wgtman_pane_t1_ParamLimits

0x8cb2,	// (0x00016ba8) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ddcf) listrow_wgtman_pane_t_ParamLimits

0x8cd8,	// (0x00016bce) wait_bar_pane_cp09_ParamLimits

0x9255,	// (0x0001714b) bg_popup_heading_pane_cp02

0xf0c2,	// (0x0001cfb8) popup_notif_wgt_heading_pane_g1

0xf0ca,	// (0x0001cfc0) popup_notif_wgt_heading_pane_t1

0x9255,	// (0x0001714b) main_vids_pane

0x9255,	// (0x0001714b) vids_listscroll_pane

0x9210,	// (0x00017106) scroll_pane_cp040

0x9255,	// (0x0001714b) vids_list_pane

0x921b,	// (0x00017111) vids_list_double_pane_ParamLimits

0x921b,	// (0x00017111) vids_list_double_pane

0x922c,	// (0x00017122) vids_list_double_pane_g1

0x9235,	// (0x0001712b) vids_list_double_pane_t1

0x9245,	// (0x0001713b) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001de53) vids_list_double_pane_t

0x92c5,	// (0x000171bb) main_ncimui_pane_ParamLimits

0x76b3,	// (0x000155a9) main_ncimui_pane_g1_ParamLimits

0x76bf,	// (0x000155b5) main_ncimui_pane_g2_ParamLimits

0x76bf,	// (0x000155b5) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0001daeb) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0001daeb) main_ncimui_pane_g

0x91a4,	// (0x0001709a) main_welc_pane_g1_ParamLimits

0x91a4,	// (0x0001709a) main_welc_pane_g1

0x91b9,	// (0x000170af) main_welc_pane_g2_ParamLimits

0x91b9,	// (0x000170af) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001de4e) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001de4e) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
