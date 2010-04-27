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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003cdfd };

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
0x225b,	// (0x0003f058) Screen

0x2267,	// (0x0003f064) application_window

0x22c3,	// (0x0003f0c0) area_bottom_pane_ParamLimits

0x22c3,	// (0x0003f0c0) area_bottom_pane

0x231c,	// (0x0003f119) area_top_pane_ParamLimits

0x231c,	// (0x0003f119) area_top_pane

0x2380,	// (0x0003f17d) call_video_uplink_pane_ParamLimits

0x2380,	// (0x0003f17d) call_video_uplink_pane

0x23bf,	// (0x0003f1bc) main_pane_ParamLimits

0x23bf,	// (0x0003f1bc) main_pane

0xc876,	// (0x00049673) context_pane

0x56cd,	// (0x000424ca) navi_pane

0x56f3,	// (0x000424f0) popup_cale_events_window_ParamLimits

0x56f3,	// (0x000424f0) popup_cale_events_window

0xc889,	// (0x00049686) popup_mup_playback_window

0x570b,	// (0x00042508) signal_pane

0xa831,	// (0x0004762e) main_browser_pane

0xa9f6,	// (0x000477f3) main_burst_pane

0x5559,	// (0x00042356) main_calc_pane

0xc85c,	// (0x00049659) main_cale_day_pane

0x2afc,	// (0x0003f8f9) main_cale_month_pane

0xc85c,	// (0x00049659) main_cale_week_pane

0xa9f6,	// (0x000477f3) main_call_pane

0xa503,	// (0x00047300) main_call_poc_pane

0xa9f6,	// (0x000477f3) main_camera_pane

0xa9f6,	// (0x000477f3) main_chi_dic_pane

0xb1f5,	// (0x00047ff2) main_clock_pane

0xa503,	// (0x00047300) main_fmradio_pane

0xa9f6,	// (0x000477f3) main_graph_messa_pane

0xa503,	// (0x00047300) main_help_pane

0xa831,	// (0x0004762e) main_im_pane

0xa76c,	// (0x00047569) main_image_pane_ParamLimits

0xa76c,	// (0x00047569) main_image_pane

0xa503,	// (0x00047300) main_location2_pane

0xa9f6,	// (0x000477f3) main_location_pane

0xa76c,	// (0x00047569) main_messa_pane

0xa503,	// (0x00047300) main_mp2_pane

0xa9f6,	// (0x000477f3) main_mp_pane

0xa503,	// (0x00047300) main_msg_pane

0xa503,	// (0x00047300) main_mup_eq_pane

0xa503,	// (0x00047300) main_mup_pane

0xa831,	// (0x0004762e) main_notes_pane

0xa503,	// (0x00047300) main_pec_pane

0xa503,	// (0x00047300) main_phob_pane

0xa503,	// (0x00047300) main_pinb_pane

0xa503,	// (0x00047300) main_postcard_pane

0xa503,	// (0x00047300) main_qdial_pane

0xa9f6,	// (0x000477f3) main_skin_pane

0xa503,	// (0x00047300) main_smil2_pane

0xa9f6,	// (0x000477f3) main_smil_pane

0xa9f6,	// (0x000477f3) main_video_pane

0xa9f6,	// (0x000477f3) main_video_tele_pane

0xa76c,	// (0x00047569) main_viewer_pane_ParamLimits

0xa76c,	// (0x00047569) main_viewer_pane

0xa9f6,	// (0x000477f3) main_vorec_pane

0x5597,	// (0x00042394) popup_blid_sat_info_window_ParamLimits

0x5597,	// (0x00042394) popup_blid_sat_info_window

0x55b7,	// (0x000423b4) popup_dyc_status_message_window_ParamLimits

0x55b7,	// (0x000423b4) popup_dyc_status_message_window

0x55c7,	// (0x000423c4) popup_grid_large_graphic_window_ParamLimits

0x55c7,	// (0x000423c4) popup_grid_large_graphic_window

0x5658,	// (0x00042455) popup_loc_request_window_ParamLimits

0x5658,	// (0x00042455) popup_loc_request_window

0x56a5,	// (0x000424a2) popup_wml_address_window_ParamLimits

0x56a5,	// (0x000424a2) popup_wml_address_window

0x5431,	// (0x0004222e) call_muted_g1

0x50f3,	// (0x00041ef0) popup_call_audio_conf_window_ParamLimits

0x50f3,	// (0x00041ef0) popup_call_audio_conf_window

0x5441,	// (0x0004223e) popup_call_audio_first_window_ParamLimits

0x5441,	// (0x0004223e) popup_call_audio_first_window

0x5481,	// (0x0004227e) popup_call_audio_in_window_ParamLimits

0x5481,	// (0x0004227e) popup_call_audio_in_window

0x54a5,	// (0x000422a2) popup_call_audio_out_window_ParamLimits

0x54a5,	// (0x000422a2) popup_call_audio_out_window

0x54c7,	// (0x000422c4) popup_call_audio_second_window_ParamLimits

0x54c7,	// (0x000422c4) popup_call_audio_second_window

0x54f7,	// (0x000422f4) popup_call_audio_wait_window_ParamLimits

0x54f7,	// (0x000422f4) popup_call_audio_wait_window

0x5518,	// (0x00042315) popup_number_entry_window_ParamLimits

0x5518,	// (0x00042315) popup_number_entry_window

0xa0f0,	// (0x00046eed) bg_popup_call_pane_cp05_ParamLimits

0xa0f0,	// (0x00046eed) bg_popup_call_pane_cp05

0xa110,	// (0x00046f0d) popup_number_entry_window_t1

0xa123,	// (0x00046f20) popup_number_entry_window_t2

0xa135,	// (0x00046f32) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004bec7) popup_number_entry_window_t

0xa147,	// (0x00046f44) text_title_cp2

0xa15a,	// (0x00046f57) bg_popup_call_pane_cp_ParamLimits

0xa15a,	// (0x00046f57) bg_popup_call_pane_cp

0xa168,	// (0x00046f65) call_thumbnail_pane

0xa170,	// (0x00046f6d) popup_call_audio_in_window_g1_ParamLimits

0xa170,	// (0x00046f6d) popup_call_audio_in_window_g1

0xa17c,	// (0x00046f79) popup_call_audio_in_window_g2_ParamLimits

0xa17c,	// (0x00046f79) popup_call_audio_in_window_g2

0xa188,	// (0x00046f85) popup_call_audio_in_window_g3_ParamLimits

0xa188,	// (0x00046f85) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004bed0) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004bed0) popup_call_audio_in_window_g

0xa194,	// (0x00046f91) popup_call_audio_in_window_t1_ParamLimits

0xa194,	// (0x00046f91) popup_call_audio_in_window_t1

0xa1b0,	// (0x00046fad) popup_call_audio_in_window_t2_ParamLimits

0xa1b0,	// (0x00046fad) popup_call_audio_in_window_t2

0xa1cc,	// (0x00046fc9) popup_call_audio_in_window_t3_ParamLimits

0xa1cc,	// (0x00046fc9) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004bed7) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004bed7) popup_call_audio_in_window_t

0xa15a,	// (0x00046f57) bg_popup_call_pane_cp01_ParamLimits

0xa15a,	// (0x00046f57) bg_popup_call_pane_cp01

0xa168,	// (0x00046f65) call_thumbnail_pane_cp02

0xa1df,	// (0x00046fdc) call_type_pane_cp022

0xa1e7,	// (0x00046fe4) popup_call_audio_out_window_g1_ParamLimits

0xa1e7,	// (0x00046fe4) popup_call_audio_out_window_g1

0xa1f9,	// (0x00046ff6) popup_call_audio_out_window_g2_ParamLimits

0xa1f9,	// (0x00046ff6) popup_call_audio_out_window_g2

0xa205,	// (0x00047002) popup_call_audio_out_window_g3_ParamLimits

0xa205,	// (0x00047002) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004bede) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004bede) popup_call_audio_out_window_g

0xa217,	// (0x00047014) popup_call_audio_out_window_t1_ParamLimits

0xa217,	// (0x00047014) popup_call_audio_out_window_t1

0xa22f,	// (0x0004702c) popup_call_audio_out_window_t2_ParamLimits

0xa22f,	// (0x0004702c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004bee5) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004bee5) popup_call_audio_out_window_t

0xa244,	// (0x00047041) bg_popup_call_pane_ParamLimits

0xa244,	// (0x00047041) bg_popup_call_pane

0x25c0,	// (0x0003f3bd) call_thumbnail_pane_cp_ParamLimits

0x25c0,	// (0x0003f3bd) call_thumbnail_pane_cp

0xa2c8,	// (0x000470c5) call_type_pane_cp01_ParamLimits

0xa2c8,	// (0x000470c5) call_type_pane_cp01

0xa30c,	// (0x00047109) popup_call_audio_first_window_g1_ParamLimits

0xa30c,	// (0x00047109) popup_call_audio_first_window_g1

0xa358,	// (0x00047155) popup_call_audio_first_window_g2_ParamLimits

0xa358,	// (0x00047155) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004beea) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004beea) popup_call_audio_first_window_g

0xa39c,	// (0x00047199) popup_call_audio_first_window_t1_ParamLimits

0xa39c,	// (0x00047199) popup_call_audio_first_window_t1

0xa448,	// (0x00047245) popup_call_audio_first_window_t4_ParamLimits

0xa448,	// (0x00047245) popup_call_audio_first_window_t4

0xa4d4,	// (0x000472d1) popup_call_audio_first_window_t5_ParamLimits

0xa4d4,	// (0x000472d1) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004beef) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004beef) popup_call_audio_first_window_t

0xa503,	// (0x00047300) bg_popup_call_pane_cp02

0xa50d,	// (0x0004730a) call_type_pane_cp023

0xa515,	// (0x00047312) popup_call_audio_wait_window_g1

0xa51d,	// (0x0004731a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bef6) popup_call_audio_wait_window_g

0xa525,	// (0x00047322) popup_call_audio_wait_window_t3

0xa533,	// (0x00047330) bg_popup_call_pane_cp03_ParamLimits

0xa533,	// (0x00047330) bg_popup_call_pane_cp03

0xa593,	// (0x00047390) call_thumbnail_pane_cp011_ParamLimits

0xa593,	// (0x00047390) call_thumbnail_pane_cp011

0xa59f,	// (0x0004739c) call_type_pane_cp034_ParamLimits

0xa59f,	// (0x0004739c) call_type_pane_cp034

0xa5db,	// (0x000473d8) popup_call_audio_second_window_g1_ParamLimits

0xa5db,	// (0x000473d8) popup_call_audio_second_window_g1

0xa617,	// (0x00047414) popup_call_audio_second_window_g2_ParamLimits

0xa617,	// (0x00047414) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004befb) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004befb) popup_call_audio_second_window_g

0xa653,	// (0x00047450) popup_call_audio_second_window_t1_ParamLimits

0xa653,	// (0x00047450) popup_call_audio_second_window_t1

0xa6e2,	// (0x000474df) popup_call_audio_second_window_t2_ParamLimits

0xa6e2,	// (0x000474df) popup_call_audio_second_window_t2

0xa718,	// (0x00047515) popup_call_audio_second_window_t3_ParamLimits

0xa718,	// (0x00047515) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004bf00) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004bf00) popup_call_audio_second_window_t

0xa503,	// (0x00047300) bg_popup_call_pane_cp04

0xa74e,	// (0x0004754b) list_conf_pane

0xa756,	// (0x00047553) popup_call_audio_conf_window_t1

0xa764,	// (0x00047561) call_thumbnail_pane_g1

0xa76c,	// (0x00047569) bg_pinb_pane_ParamLimits

0xa76c,	// (0x00047569) bg_pinb_pane

0xa77a,	// (0x00047577) find_pinb_pane

0xa783,	// (0x00047580) listscroll_pinb_pane_ParamLimits

0xa783,	// (0x00047580) listscroll_pinb_pane

0xa792,	// (0x0004758f) pinb_bg_pane_g1

0x25e4,	// (0x0003f3e1) pinb_bg_pane_g2

0x25f0,	// (0x0003f3ed) pinb_bg_pane_g3

0x25fc,	// (0x0003f3f9) pinb_bg_pane_g4

0x2608,	// (0x0003f405) pinb_bg_pane_g5

0x2614,	// (0x0003f411) pinb_bg_pane_g6

0x261f,	// (0x0003f41c) pinb_bg_pane_g7

0x262a,	// (0x0003f427) pinb_bg_pane_g8

0x2635,	// (0x0003f432) pinb_bg_pane_g9

0x263f,	// (0x0003f43c) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004bf07) pinb_bg_pane_g

0x265c,	// (0x0003f459) grid_pinb_pane

0x2667,	// (0x0003f464) list_pinb_pane

0x2672,	// (0x0003f46f) scroll_pane_cp01_ParamLimits

0x2672,	// (0x0003f46f) scroll_pane_cp01

0xa79c,	// (0x00047599) find_pinb_pane_g1_ParamLimits

0xa79c,	// (0x00047599) find_pinb_pane_g1

0xa7b4,	// (0x000475b1) find_pinb_pane_t1

0xa7c6,	// (0x000475c3) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004bf21) find_pinb_pane_t

0xa7db,	// (0x000475d8) input_focus_pane_cp01_ParamLimits

0xa7db,	// (0x000475d8) input_focus_pane_cp01

0x2684,	// (0x0003f481) cell_pinb_pane_ParamLimits

0x2684,	// (0x0003f481) cell_pinb_pane

0x26ac,	// (0x0003f4a9) cell_pinb_pane_g1_ParamLimits

0x26ac,	// (0x0003f4a9) cell_pinb_pane_g1

0x26c1,	// (0x0003f4be) cell_pinb_pane_g2_ParamLimits

0x26c1,	// (0x0003f4be) cell_pinb_pane_g2

0xa7e7,	// (0x000475e4) cell_pinb_pane_g3_ParamLimits

0xa7e7,	// (0x000475e4) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004bf26) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004bf26) cell_pinb_pane_g

0xa503,	// (0x00047300) grid_highlight_pane_cp01

0x26cd,	// (0x0003f4ca) list_pinb_item_pane_ParamLimits

0x26cd,	// (0x0003f4ca) list_pinb_item_pane

0xa503,	// (0x00047300) list_highlight_pane_cp02

0x26f3,	// (0x0003f4f0) list_pinb_item_pane_g1_ParamLimits

0x26f3,	// (0x0003f4f0) list_pinb_item_pane_g1

0x2700,	// (0x0003f4fd) list_pinb_item_pane_g2_ParamLimits

0x2700,	// (0x0003f4fd) list_pinb_item_pane_g2

0x270c,	// (0x0003f509) list_pinb_item_pane_g3_ParamLimits

0x270c,	// (0x0003f509) list_pinb_item_pane_g3

0x271d,	// (0x0003f51a) list_pinb_item_pane_g4_ParamLimits

0x271d,	// (0x0003f51a) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004bf2d) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004bf2d) list_pinb_item_pane_g

0x2729,	// (0x0003f526) list_pinb_item_pane_t1_ParamLimits

0x2729,	// (0x0003f526) list_pinb_item_pane_t1

0x275a,	// (0x0003f557) calc_display_pane

0x2778,	// (0x0003f575) calc_paper_pane

0x2794,	// (0x0003f591) grid_calc_pane

0xa503,	// (0x00047300) bg_list_pane_cp01

0x27c0,	// (0x0003f5bd) clock_g1

0x27c8,	// (0x0003f5c5) clock_g2

0x0001,

0xf139,	// (0x0004bf36) clock_g

0x27d2,	// (0x0003f5cf) clock_t1_ParamLimits

0x27d2,	// (0x0003f5cf) clock_t1

0x27e7,	// (0x0003f5e4) clock_t2_ParamLimits

0x27e7,	// (0x0003f5e4) clock_t2

0x27f9,	// (0x0003f5f6) clock_t3_ParamLimits

0x27f9,	// (0x0003f5f6) clock_t3

0x280b,	// (0x0003f608) clock_t4_ParamLimits

0x280b,	// (0x0003f608) clock_t4

0x281d,	// (0x0003f61a) clock_t5_ParamLimits

0x281d,	// (0x0003f61a) clock_t5

0x2832,	// (0x0003f62f) clock_t6_ParamLimits

0x2832,	// (0x0003f62f) clock_t6

0x2844,	// (0x0003f641) clock_t7_ParamLimits

0x2844,	// (0x0003f641) clock_t7

0x2856,	// (0x0003f653) clock_t8_ParamLimits

0x2856,	// (0x0003f653) clock_t8

0x286c,	// (0x0003f669) clock_t9_ParamLimits

0x286c,	// (0x0003f669) clock_t9

0x0008,

0xf13e,	// (0x0004bf3b) clock_t_ParamLimits

0xf13e,	// (0x0004bf3b) clock_t

0xa7f3,	// (0x000475f0) popup_clock_analogue_window_cp02

0xa7f3,	// (0x000475f0) popup_clock_digital_window_cp01

0xa7fb,	// (0x000475f8) listscroll_help_pane

0xa503,	// (0x00047300) phob_pre_status_pane

0xa805,	// (0x00047602) grid_qdial_pane

0xa76c,	// (0x00047569) listscroll_mce_pane

0xa76c,	// (0x00047569) bg_notes_pane

0xa80f,	// (0x0004760c) list_notes_pane

0x2882,	// (0x0003f67f) scroll_pane_cp06

0xa81d,	// (0x0004761a) bg_calc_paper_pane

0x2891,	// (0x0003f68e) list_calc_pane

0xa831,	// (0x0004762e) bg_calc_display_pane

0x28ab,	// (0x0003f6a8) calc_display_pane_t1

0x28c0,	// (0x0003f6bd) calc_display_pane_t2

0x28d5,	// (0x0003f6d2) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004bf4e) calc_display_pane_t

0x28e7,	// (0x0003f6e4) cell_calc_pane_ParamLimits

0x28e7,	// (0x0003f6e4) cell_calc_pane

0xa83d,	// (0x0004763a) bg_calc_paper_pane_g1

0xa849,	// (0x00047646) bg_calc_paper_pane_g2

0xa855,	// (0x00047652) bg_calc_paper_pane_g3

0xa861,	// (0x0004765e) bg_calc_paper_pane_g4

0xa86d,	// (0x0004766a) bg_calc_paper_pane_g5

0x2914,	// (0x0003f711) bg_calc_paper_pane_g6

0x2925,	// (0x0003f722) bg_calc_paper_pane_g7

0x2936,	// (0x0003f733) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004bf55) bg_calc_paper_pane_g

0x2947,	// (0x0003f744) calc_bg_paper_pane_g9

0x2958,	// (0x0003f755) list_calc_item_pane_ParamLimits

0x2958,	// (0x0003f755) list_calc_item_pane

0xa879,	// (0x00047676) list_calc_item_pane_g1

0x2987,	// (0x0003f784) list_calc_item_pane_t1_ParamLimits

0x2987,	// (0x0003f784) list_calc_item_pane_t1

0x2999,	// (0x0003f796) list_calc_item_pane_t2_ParamLimits

0x2999,	// (0x0003f796) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004bf66) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004bf66) list_calc_item_pane_t

0xa886,	// (0x00047683) cell_calc_pane_g1

0xa890,	// (0x0004768d) grid_highlight_pane_cp02

0xc916,	// (0x00049713) bg_calc_display_pane_g1

0x29c9,	// (0x0003f7c6) bg_calc_display_pane_g2

0x29d3,	// (0x0003f7d0) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004bf70) bg_calc_display_pane_g

0x29dc,	// (0x0003f7d9) cell_qdial_pane_ParamLimits

0x29dc,	// (0x0003f7d9) cell_qdial_pane

0x29f0,	// (0x0003f7ed) cell_qdial_pane_g1_ParamLimits

0x29f0,	// (0x0003f7ed) cell_qdial_pane_g1

0x29fd,	// (0x0003f7fa) cell_qdial_pane_g2_ParamLimits

0x29fd,	// (0x0003f7fa) cell_qdial_pane_g2

0xa8b2,	// (0x000476af) cell_qdial_pane_g3_ParamLimits

0xa8b2,	// (0x000476af) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004bf77) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004bf77) cell_qdial_pane_g

0x2a1b,	// (0x0003f818) cell_qdial_pane_t1_ParamLimits

0x2a1b,	// (0x0003f818) cell_qdial_pane_t1

0x2a33,	// (0x0003f830) cell_qdial_pane_t2_ParamLimits

0x2a33,	// (0x0003f830) cell_qdial_pane_t2

0x2a46,	// (0x0003f843) cell_qdial_pane_t3_ParamLimits

0x2a46,	// (0x0003f843) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004bf80) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004bf80) cell_qdial_pane_t

0xa503,	// (0x00047300) grid_highlight_pane_cp04

0xa8be,	// (0x000476bb) thumbnail_qdial_pane_ParamLimits

0xa8be,	// (0x000476bb) thumbnail_qdial_pane

0xa91a,	// (0x00047717) list_help_pane

0xa923,	// (0x00047720) scroll_pane_cp02

0x2a59,	// (0x0003f856) help_list_pane_t1_ParamLimits

0x2a59,	// (0x0003f856) help_list_pane_t1

0x2a8c,	// (0x0003f889) bg_notes_pane_g2

0x2a94,	// (0x0003f891) bg_notes_pane_g3

0x2a9c,	// (0x0003f899) notes_bg_pane_g1

0x2aa4,	// (0x0003f8a1) notes_bg_pane_g4

0x2aac,	// (0x0003f8a9) notes_bg_pane_g5

0x2ab4,	// (0x0003f8b1) notes_bg_pane_g6

0x2abc,	// (0x0003f8b9) notes_bg_pane_g7

0x2ac4,	// (0x0003f8c1) notes_bg_pane_g8

0x2acc,	// (0x0003f8c9) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004bf9e) notes_bg_pane_g

0x2ad4,	// (0x0003f8d1) list_notes_text_pane_ParamLimits

0x2ad4,	// (0x0003f8d1) list_notes_text_pane

0xa92c,	// (0x00047729) list_notes_text_pane_g1

0x0e96,	// (0x0003dc93) list_notes_text_pane_t1

0x2afc,	// (0x0003f8f9) listscroll_cale_week_pane

0x2b21,	// (0x0003f91e) bg_cale_heading_pane

0xa94f,	// (0x0004774c) bg_cale_pane_cp01

0x2b43,	// (0x0003f940) cale_week_corner_pane

0x2b5d,	// (0x0003f95a) cale_week_day_heading_pane

0x2b7f,	// (0x0003f97c) cale_week_scroll_pane_g1

0x2b9c,	// (0x0003f999) cale_week_scroll_pane_g2

0x2baf,	// (0x0003f9ac) cale_week_scroll_pane_g3

0x2bc2,	// (0x0003f9bf) cale_week_scroll_pane_g4

0x2bd5,	// (0x0003f9d2) cale_week_scroll_pane_g5

0x2be8,	// (0x0003f9e5) cale_week_scroll_pane_g6

0x2bfb,	// (0x0003f9f8) cale_week_scroll_pane_g7

0x2c0e,	// (0x0003fa0b) cale_week_scroll_pane_g8

0x2c23,	// (0x0003fa20) cale_week_scroll_pane_g9

0x2c36,	// (0x0003fa33) cale_week_scroll_pane_g10

0x2c49,	// (0x0003fa46) cale_week_scroll_pane_g11

0x2c5c,	// (0x0003fa59) cale_week_scroll_pane_g12

0x2c73,	// (0x0003fa70) cale_week_scroll_pane_g13

0x2c8e,	// (0x0003fa8b) cale_week_scroll_pane_g14

0x2ca9,	// (0x0003faa6) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004bfad) cale_week_scroll_pane_g

0x2cd9,	// (0x0003fad6) cale_week_time_pane

0x2cee,	// (0x0003faeb) grid_cale_week_pane

0xa97e,	// (0x0004777b) scroll_pane_cp08

0x2d0d,	// (0x0003fb0a) cell_cale_week_pane_ParamLimits

0x2d0d,	// (0x0003fb0a) cell_cale_week_pane

0x2d6f,	// (0x0003fb6c) cale_week_day_heading_pane_t1

0x2daa,	// (0x0003fba7) cale_week_day_heading_pane_t2

0x2de5,	// (0x0003fbe2) cale_week_day_heading_pane_t3

0x2e20,	// (0x0003fc1d) cale_week_day_heading_pane_t4

0x2e5b,	// (0x0003fc58) cale_week_day_heading_pane_t5

0x2e96,	// (0x0003fc93) cale_week_day_heading_pane_t6

0x2ed1,	// (0x0003fcce) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004bfce) cale_week_day_heading_pane_t

0xa99b,	// (0x00047798) bg_cale_side_pane

0x2f0c,	// (0x0003fd09) cale_week_time_pane_t1

0x2f26,	// (0x0003fd23) cale_week_time_pane_t2

0x2f40,	// (0x0003fd3d) cale_week_time_pane_t3

0x2f5a,	// (0x0003fd57) cale_week_time_pane_t4

0x2f74,	// (0x0003fd71) cale_week_time_pane_t5

0x2f8e,	// (0x0003fd8b) cale_week_time_pane_t6

0x2fae,	// (0x0003fdab) cale_week_time_pane_t7

0x2fd0,	// (0x0003fdcd) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004bfdd) cale_week_time_pane_t

0x2ff4,	// (0x0003fdf1) cell_cale_week_pane_g2

0x3018,	// (0x0003fe15) cell_cale_week_pane_g3_ParamLimits

0x3018,	// (0x0003fe15) cell_cale_week_pane_g3

0xa9a9,	// (0x000477a6) grid_highlight_pane_cp07

0xa9b1,	// (0x000477ae) listscroll_gms_pane

0xa9bb,	// (0x000477b8) grid_gms_pane

0xa9c4,	// (0x000477c1) listscroll_gms_pane_g1

0xa9cc,	// (0x000477c9) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004bfee) listscroll_gms_pane_g

0x3030,	// (0x0003fe2d) scroll_pane_cp010

0x303b,	// (0x0003fe38) cell_gms_pane_ParamLimits

0x303b,	// (0x0003fe38) cell_gms_pane

0x304e,	// (0x0003fe4b) cell_gms_pane_g1

0xa9d4,	// (0x000477d1) cell_gms_pane_g2

0xa9dc,	// (0x000477d9) cell_gms_pane_g3

0xa9e5,	// (0x000477e2) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004bff3) cell_gms_pane_g

0xa9ee,	// (0x000477eb) grid_highlight_pane_cp09

0x53d9,	// (0x000421d6) phob_pre_status_pane_g1

0x53e1,	// (0x000421de) phob_pre_status_pane_g2

0x53e9,	// (0x000421e6) phob_pre_status_pane_g3

0x53f1,	// (0x000421ee) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004c3de) phob_pre_status_pane_g

0x5401,	// (0x000421fe) phob_pre_status_pane_t1

0x5411,	// (0x0004220e) phob_pre_status_pane_t2

0x5421,	// (0x0004221e) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004c3e9) phob_pre_status_pane_t

0xa9f6,	// (0x000477f3) bg_list_pane_cp05

0x305e,	// (0x0003fe5b) grid_vorec_pane

0x3068,	// (0x0003fe65) vorec_t1

0x3076,	// (0x0003fe73) vorec_t2

0x3084,	// (0x0003fe81) vorec_t3

0x3092,	// (0x0003fe8f) vorec_t4

0xa0c0,	// (0x00046ebd) vorec_t5

0xa0ce,	// (0x00046ecb) vorec_t6

0x0004,

0xf1ff,	// (0x0004bffc) vorec_t

0xa0dc,	// (0x00046ed9) wait_bar_pane_cp01

0x30ae,	// (0x0003feab) cell_vorec_pane_ParamLimits

0x30ae,	// (0x0003feab) cell_vorec_pane

0x30c1,	// (0x0003febe) cell_vorec_pane_g1

0xa503,	// (0x00047300) grid_highlight_pane_cp05

0x30db,	// (0x0003fed8) cams_zoom_pane

0x30e7,	// (0x0003fee4) image_vga_pane

0x30f6,	// (0x0003fef3) main_camera_pane_g1

0x3104,	// (0x0003ff01) main_camera_pane_g2

0x3110,	// (0x0003ff0d) main_camera_pane_g3

0x311c,	// (0x0003ff19) main_camera_pane_g4

0x3128,	// (0x0003ff25) main_camera_pane_g5

0x3134,	// (0x0003ff31) main_camera_pane_g6

0x3140,	// (0x0003ff3d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c007) main_camera_pane_g

0x314c,	// (0x0003ff49) main_camera_pane_t1

0x315e,	// (0x0003ff5b) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c018) main_camera_pane_t

0x317f,	// (0x0003ff7c) cams_zoom_pane_cp_ParamLimits

0x317f,	// (0x0003ff7c) cams_zoom_pane_cp

0x31a3,	// (0x0003ffa0) image_cif_pane_ParamLimits

0x31a3,	// (0x0003ffa0) image_cif_pane

0x31c1,	// (0x0003ffbe) image_subqcif_pane

0x31c9,	// (0x0003ffc6) main_video_pane_g1_ParamLimits

0x31c9,	// (0x0003ffc6) main_video_pane_g1

0x31e9,	// (0x0003ffe6) main_video_pane_g2_ParamLimits

0x31e9,	// (0x0003ffe6) main_video_pane_g2

0x3219,	// (0x00040016) main_video_pane_g3_ParamLimits

0x3219,	// (0x00040016) main_video_pane_g3

0x3242,	// (0x0004003f) main_video_pane_g4_ParamLimits

0x3242,	// (0x0004003f) main_video_pane_g4

0x326b,	// (0x00040068) main_video_pane_g5_ParamLimits

0x326b,	// (0x00040068) main_video_pane_g5

0xaa0a,	// (0x00047807) main_video_pane_g6_ParamLimits

0xaa0a,	// (0x00047807) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c01d) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c01d) main_video_pane_g

0x328d,	// (0x0004008a) main_video_pane_t1_ParamLimits

0x328d,	// (0x0004008a) main_video_pane_t1

0xaa24,	// (0x00047821) cams_zoom_pane_g1

0xaa2d,	// (0x0004782a) cams_zoom_pane_g2

0xaa36,	// (0x00047833) cams_zoom_pane_g3

0xaa3f,	// (0x0004783c) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c02c) cams_zoom_pane_g

0x32d7,	// (0x000400d4) grid_cams_pane

0x32e5,	// (0x000400e2) linegrid_cams_pane

0x32f3,	// (0x000400f0) cell_cams_pane_ParamLimits

0x32f3,	// (0x000400f0) cell_cams_pane

0xaa48,	// (0x00047845) cams_burst_image_pane

0xaa50,	// (0x0004784d) cell_cams_pane_g1

0xa503,	// (0x00047300) grid_highlight_pane_cp03

0xa886,	// (0x00047683) mp_bg_pane_g1

0xa503,	// (0x00047300) bg_list_pane_cp03

0xc781,	// (0x0004957e) bg_mp_pane

0xc789,	// (0x00049586) grid_mp_pane

0xc791,	// (0x0004958e) media_player_g1

0xc799,	// (0x00049596) media_player_t1

0xc7a7,	// (0x000495a4) media_player_t2

0xc7b5,	// (0x000495b2) media_player_t3

0xc7c3,	// (0x000495c0) media_player_t4

0xc7d1,	// (0x000495ce) media_player_t5

0xc7df,	// (0x000495dc) media_player_t6

0xc7ed,	// (0x000495ea) media_player_t7

0x0006,

0xf5cb,	// (0x0004c3c8) media_player_t

0xc7fb,	// (0x000495f8) wait_bar_pane_cp02

0xf5b0,	// (0x0004c3ad) main_usb_pane_t

0x53d0,	// (0x000421cd) cell_mp_pane

0xa886,	// (0x00047683) cell_mp_pane_g1

0xa503,	// (0x00047300) grid_highlight_pane_cp06

0xaa58,	// (0x00047855) grid_skin_colour_pane

0xaa60,	// (0x0004785d) list_highlight_pane_cp03

0x3306,	// (0x00040103) skin_g1

0xaa68,	// (0x00047865) skin_t1

0xaa77,	// (0x00047874) skin_t2

0x0001,

0xf264,	// (0x0004c061) skin_t

0x3310,	// (0x0004010d) cell_skin_colour_pane_ParamLimits

0x3310,	// (0x0004010d) cell_skin_colour_pane

0xaa85,	// (0x00047882) cell_skin_colour_pane_g1

0x3394,	// (0x00040191) call_video_g1_ParamLimits

0x3394,	// (0x00040191) call_video_g1

0x33a4,	// (0x000401a1) call_video_g2_ParamLimits

0x33a4,	// (0x000401a1) call_video_g2

0x0001,

0xf269,	// (0x0004c066) call_video_g_ParamLimits

0xf269,	// (0x0004c066) call_video_g

0x33fe,	// (0x000401fb) call_video_uplink_pane_cp1_ParamLimits

0x33fe,	// (0x000401fb) call_video_uplink_pane_cp1

0xaa97,	// (0x00047894) call_video_uplink_pane_cp2

0x34ca,	// (0x000402c7) video_down_crop_pane_ParamLimits

0x34ca,	// (0x000402c7) video_down_crop_pane

0x35c8,	// (0x000403c5) video_down_pane_ParamLimits

0x35c8,	// (0x000403c5) video_down_pane

0xaa9f,	// (0x0004789c) video_down_subqcif_pane_ParamLimits

0xaa9f,	// (0x0004789c) video_down_subqcif_pane

0xaab7,	// (0x000478b4) video_down_subqcif_pane_cp_ParamLimits

0xaab7,	// (0x000478b4) video_down_subqcif_pane_cp

0xaadd,	// (0x000478da) im_reading_pane_ParamLimits

0xaadd,	// (0x000478da) im_reading_pane

0x36ea,	// (0x000404e7) im_writing_pane_ParamLimits

0x36ea,	// (0x000404e7) im_writing_pane

0x3708,	// (0x00040505) im_reading_pane_t1

0xaaf7,	// (0x000478f4) list_im_pane

0xab08,	// (0x00047905) scroll_pane_cp07

0x375c,	// (0x00040559) im_writing_pane_t1_ParamLimits

0x375c,	// (0x00040559) im_writing_pane_t1

0xab21,	// (0x0004791e) im_writing_pane_t2_ParamLimits

0xab21,	// (0x0004791e) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c070) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c070) im_writing_pane_t

0xa503,	// (0x00047300) input_focus_pane_cp04

0xa503,	// (0x00047300) input_focus_pane_cp05

0x3771,	// (0x0004056e) list_im_single_pane_ParamLimits

0x3771,	// (0x0004056e) list_im_single_pane

0x3795,	// (0x00040592) list_single_im_pane_t1

0x5394,	// (0x00042191) blid_accuracy_pane

0x539c,	// (0x00042199) blid_compass_pane

0x53a6,	// (0x000421a3) main_location_t1

0x53b4,	// (0x000421b1) main_location_t2

0x53c2,	// (0x000421bf) main_location_t3

0x0002,

0xf5da,	// (0x0004c3d7) main_location_t

0xa503,	// (0x00047300) aid_levels_location

0xa886,	// (0x00047683) blid_accuracy_pane_g1

0xa886,	// (0x00047683) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d2) blid_accuracy_pane_g

0xab69,	// (0x00047966) wml_content_pane

0xaba7,	// (0x000479a4) wml_button_pane_ParamLimits

0xaba7,	// (0x000479a4) wml_button_pane

0x37a4,	// (0x000405a1) wml_list_single_large_pane_ParamLimits

0x37a4,	// (0x000405a1) wml_list_single_large_pane

0x37ce,	// (0x000405cb) wml_list_single_medium_pane_ParamLimits

0x37ce,	// (0x000405cb) wml_list_single_medium_pane

0x37ff,	// (0x000405fc) wml_list_single_small_pane_ParamLimits

0x37ff,	// (0x000405fc) wml_list_single_small_pane

0xabbb,	// (0x000479b8) wml_selection_box_pane_ParamLimits

0xabbb,	// (0x000479b8) wml_selection_box_pane

0xabce,	// (0x000479cb) wml_list_single_pane_t1

0xabdd,	// (0x000479da) wml_list_single_medium_pane_t1

0xabec,	// (0x000479e9) wml_list_single_large_pane_t1

0xabfb,	// (0x000479f8) input_focus_pane_cp02_ParamLimits

0xabfb,	// (0x000479f8) input_focus_pane_cp02

0xac0e,	// (0x00047a0b) wml_selection_box_pane_g1

0xac17,	// (0x00047a14) wml_selection_box_pane_t1_ParamLimits

0xac17,	// (0x00047a14) wml_selection_box_pane_t1

0xa76c,	// (0x00047569) bg_wml_button_pane_ParamLimits

0xa76c,	// (0x00047569) bg_wml_button_pane

0xac2f,	// (0x00047a2c) wml_button_pane_g1

0xac37,	// (0x00047a34) wml_button_pane_t1

0xac2f,	// (0x00047a2c) wml_button_bg_pane_g1

0xac47,	// (0x00047a44) wml_button_bg_pane_g2

0xac4f,	// (0x00047a4c) wml_button_bg_pane_g3

0xac57,	// (0x00047a54) wml_button_bg_pane_g4

0xac5f,	// (0x00047a5c) wml_button_bg_pane_g5

0xac67,	// (0x00047a64) wml_button_bg_pane_g6

0xac6f,	// (0x00047a6c) wml_button_bg_pane_g7

0xac77,	// (0x00047a74) wml_button_bg_pane_g8

0xac7f,	// (0x00047a7c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c075) wml_button_bg_pane_g

0x3839,	// (0x00040636) bg_list_pane_cp02

0xac87,	// (0x00047a84) mce_header_pane_ParamLimits

0xac87,	// (0x00047a84) mce_header_pane

0xac9d,	// (0x00047a9a) mce_icon_pane

0xac9d,	// (0x00047a9a) mce_image_pane

0xaca6,	// (0x00047aa3) mce_text_pane_ParamLimits

0xaca6,	// (0x00047aa3) mce_text_pane

0x3843,	// (0x00040640) scroll_pane_cp03

0xab9f,	// (0x0004799c) scroll_pane_cp04

0xacb9,	// (0x00047ab6) scroll_pane_cp05_ParamLimits

0xacb9,	// (0x00047ab6) scroll_pane_cp05

0x384d,	// (0x0004064a) mce_header_field_pane_ParamLimits

0x384d,	// (0x0004064a) mce_header_field_pane

0x386d,	// (0x0004066a) mce_header_field_pane_2_ParamLimits

0x386d,	// (0x0004066a) mce_header_field_pane_2

0x3883,	// (0x00040680) mce_header_field_pane_3

0x388b,	// (0x00040688) list_single_mce_message_pane_ParamLimits

0x388b,	// (0x00040688) list_single_mce_message_pane

0x38b6,	// (0x000406b3) list_single_mce_smart_pane_ParamLimits

0x38b6,	// (0x000406b3) list_single_mce_smart_pane

0xacc5,	// (0x00047ac2) input_focus_pane_cp03

0xacce,	// (0x00047acb) list_header_data_pane

0x38ec,	// (0x000406e9) mce_header_field_pane_t1

0x38fa,	// (0x000406f7) list_single_mce_header_pane_ParamLimits

0x38fa,	// (0x000406f7) list_single_mce_header_pane

0xacd6,	// (0x00047ad3) list_single_mce_header_pane_t1

0xace5,	// (0x00047ae2) list_single_mce_message_pane_g1

0xaced,	// (0x00047aea) list_single_mce_message_pane_t1

0x394c,	// (0x00040749) bg_cale_heading_pane_cp01_ParamLimits

0x394c,	// (0x00040749) bg_cale_heading_pane_cp01

0xacfb,	// (0x00047af8) bg_cale_pane_cp02_ParamLimits

0xacfb,	// (0x00047af8) bg_cale_pane_cp02

0x398f,	// (0x0004078c) cale_month_corner_pane

0x39a9,	// (0x000407a6) cale_month_day_heading_pane_ParamLimits

0x39a9,	// (0x000407a6) cale_month_day_heading_pane

0x3a04,	// (0x00040801) cale_month_pane_g1_ParamLimits

0x3a04,	// (0x00040801) cale_month_pane_g1

0x3a3c,	// (0x00040839) cale_month_pane_g2_ParamLimits

0x3a3c,	// (0x00040839) cale_month_pane_g2

0x3a65,	// (0x00040862) cale_month_pane_g3_ParamLimits

0x3a65,	// (0x00040862) cale_month_pane_g3

0x3ab1,	// (0x000408ae) cale_month_pane_g4_ParamLimits

0x3ab1,	// (0x000408ae) cale_month_pane_g4

0x3afd,	// (0x000408fa) cale_month_pane_g5_ParamLimits

0x3afd,	// (0x000408fa) cale_month_pane_g5

0x3b49,	// (0x00040946) cale_month_pane_g6_ParamLimits

0x3b49,	// (0x00040946) cale_month_pane_g6

0x3b95,	// (0x00040992) cale_month_pane_g7_ParamLimits

0x3b95,	// (0x00040992) cale_month_pane_g7

0x3bf9,	// (0x000409f6) cale_month_pane_g8_ParamLimits

0x3bf9,	// (0x000409f6) cale_month_pane_g8

0x3c5d,	// (0x00040a5a) cale_month_pane_g9_ParamLimits

0x3c5d,	// (0x00040a5a) cale_month_pane_g9

0x3cbb,	// (0x00040ab8) cale_month_pane_g10_ParamLimits

0x3cbb,	// (0x00040ab8) cale_month_pane_g10

0x3d17,	// (0x00040b14) cale_month_pane_g11_ParamLimits

0x3d17,	// (0x00040b14) cale_month_pane_g11

0x3d6b,	// (0x00040b68) cale_month_pane_g12_ParamLimits

0x3d6b,	// (0x00040b68) cale_month_pane_g12

0x3dc1,	// (0x00040bbe) cale_month_pane_g13_ParamLimits

0x3dc1,	// (0x00040bbe) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c088) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c088) cale_month_pane_g

0x3e17,	// (0x00040c14) cale_month_week_pane

0x3e2c,	// (0x00040c29) grid_cale_month_pane_ParamLimits

0x3e2c,	// (0x00040c29) grid_cale_month_pane

0x3e7a,	// (0x00040c77) cale_month_day_heading_pane_t1

0x3f00,	// (0x00040cfd) cale_month_day_heading_pane_t2

0x3f91,	// (0x00040d8e) cale_month_day_heading_pane_t3

0x4022,	// (0x00040e1f) cale_month_day_heading_pane_t4

0x40b3,	// (0x00040eb0) cale_month_day_heading_pane_t5

0x4144,	// (0x00040f41) cale_month_day_heading_pane_t6

0x41d5,	// (0x00040fd2) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c0a3) cale_month_day_heading_pane_t

0xa99b,	// (0x00047798) bg_cale_side_pane_cp01

0x427e,	// (0x0004107b) cale_month_week_pane_t1

0x4297,	// (0x00041094) cale_month_week_pane_t2

0x42b0,	// (0x000410ad) cale_month_week_pane_t3

0x42c9,	// (0x000410c6) cale_month_week_pane_t4

0x42e2,	// (0x000410df) cale_month_week_pane_t5

0x4303,	// (0x00041100) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c0b2) cale_month_week_pane_t

0x4324,	// (0x00041121) cell_cale_month_pane_ParamLimits

0x4324,	// (0x00041121) cell_cale_month_pane

0x4446,	// (0x00041243) cell_cale_month_pane_g1

0x4452,	// (0x0004124f) cell_cale_month_pane_t1_ParamLimits

0x4452,	// (0x0004124f) cell_cale_month_pane_t1

0xa9a9,	// (0x000477a6) grid_highlight_pane_cp08

0xa886,	// (0x00047683) main_smil_g1

0x4472,	// (0x0004126f) smil_status_pane

0xad3a,	// (0x00047b37) smil_text_pane

0xc6a1,	// (0x0004949e) bg_popup_call3_rect_pane_g8

0xc6a9,	// (0x000494a6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c36b) bg_popup_call3_rect_pane_g

0xc8f0,	// (0x000496ed) smil_status_volume_pane_g1

0xad44,	// (0x00047b41) smil_status_pane_t1

0x57be,	// (0x000425bb) volume_smil_pane

0xad5b,	// (0x00047b58) list_smil_text_pane

0x4485,	// (0x00041282) scroll_pane_cp011

0x4490,	// (0x0004128d) smil_text_list_pane_t1_ParamLimits

0x4490,	// (0x0004128d) smil_text_list_pane_t1

0x4508,	// (0x00041305) aid_volume_smil_ParamLimits

0x4508,	// (0x00041305) aid_volume_smil

0xa886,	// (0x00047683) smil_volume_pane_g1

0xa886,	// (0x00047683) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d2) smil_volume_pane_g

0x2afc,	// (0x0003f8f9) listscroll_cale_day_pane

0xad65,	// (0x00047b62) bg_cale_pane

0xad7d,	// (0x00047b7a) list_cale_pane

0xada0,	// (0x00047b9d) scroll_pane_cp09

0xadb1,	// (0x00047bae) cale_bg_pane_g1

0xadb9,	// (0x00047bb6) cale_bg_pane_g2

0xadc1,	// (0x00047bbe) cale_bg_pane_g3

0xadc9,	// (0x00047bc6) cale_bg_pane_g4

0xadd1,	// (0x00047bce) cale_bg_pane_g5

0xadd9,	// (0x00047bd6) cale_bg_pane_g6

0xade1,	// (0x00047bde) cale_bg_pane_g7

0xade9,	// (0x00047be6) cale_bg_pane_g8

0xadf1,	// (0x00047bee) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c0d7) cale_bg_pane_g

0x4532,	// (0x0004132f) list_cale_time_pane_ParamLimits

0x4532,	// (0x0004132f) list_cale_time_pane

0xadf9,	// (0x00047bf6) list_cale_time_pane_g1_ParamLimits

0xadf9,	// (0x00047bf6) list_cale_time_pane_g1

0xae05,	// (0x00047c02) list_cale_time_pane_g2_ParamLimits

0xae05,	// (0x00047c02) list_cale_time_pane_g2

0x4554,	// (0x00041351) list_cale_time_pane_g3_ParamLimits

0x4554,	// (0x00041351) list_cale_time_pane_g3

0x4562,	// (0x0004135f) list_cale_time_pane_g4_ParamLimits

0x4562,	// (0x0004135f) list_cale_time_pane_g4

0x4570,	// (0x0004136d) list_cale_time_pane_g5_ParamLimits

0x4570,	// (0x0004136d) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c0ea) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c0ea) list_cale_time_pane_g

0xae1f,	// (0x00047c1c) list_cale_time_pane_t1_ParamLimits

0xae1f,	// (0x00047c1c) list_cale_time_pane_t1

0xae47,	// (0x00047c44) list_cale_time_pane_t2_ParamLimits

0xae47,	// (0x00047c44) list_cale_time_pane_t2

0x4837,	// (0x00041634) aid_blid_cardinal_pane

0x4879,	// (0x00041676) compass_pane_t4

0xae6f,	// (0x00047c6c) list_cale_time_pane_t4_ParamLimits

0xae6f,	// (0x00047c6c) list_cale_time_pane_t4

0x4887,	// (0x00041684) compass_pane_t5

0x4897,	// (0x00041694) compass_pane_t6

0x48a5,	// (0x000416a2) compass_pane_t7

0xb33a,	// (0x00048137) navi_pane_cc_t1

0xb517,	// (0x00048314) aid_phob_thumbnail_center_pane

0x4e9a,	// (0x00041c97) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c0f7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c0f7) list_cale_time_pane_t

0xa15a,	// (0x00046f57) bg_popup_window_pane_cp02_ParamLimits

0xa15a,	// (0x00046f57) bg_popup_window_pane_cp02

0xae97,	// (0x00047c94) heading_pane_cp01_ParamLimits

0xae97,	// (0x00047c94) heading_pane_cp01

0xaea3,	// (0x00047ca0) loc_req_pane_ParamLimits

0xaea3,	// (0x00047ca0) loc_req_pane

0xaeb3,	// (0x00047cb0) loc_type_pane_ParamLimits

0xaeb3,	// (0x00047cb0) loc_type_pane

0xaec5,	// (0x00047cc2) loc_type_pane_t1_ParamLimits

0xaec5,	// (0x00047cc2) loc_type_pane_t1

0xaed7,	// (0x00047cd4) loc_type_pane_t2_ParamLimits

0xaed7,	// (0x00047cd4) loc_type_pane_t2

0xaee9,	// (0x00047ce6) loc_type_pane_t3_ParamLimits

0xaee9,	// (0x00047ce6) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c0fe) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c0fe) loc_type_pane_t

0xaefb,	// (0x00047cf8) list_loc_req_pane

0xaf05,	// (0x00047d02) scroll_pane_cp012

0x457e,	// (0x0004137b) list_single_loc_request_popup_menu_pane_ParamLimits

0x457e,	// (0x0004137b) list_single_loc_request_popup_menu_pane

0xaf10,	// (0x00047d0d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf10,	// (0x00047d0d) list_single_loc_request_popup_menu_pane_g1

0xaf1c,	// (0x00047d19) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf1c,	// (0x00047d19) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c105) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c105) list_single_loc_request_popup_menu_pane_g

0xaf28,	// (0x00047d25) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf28,	// (0x00047d25) list_single_loc_request_popup_menu_pane_t1

0x4590,	// (0x0004138d) bg_popup_window_pane_cp03_ParamLimits

0x4590,	// (0x0004138d) bg_popup_window_pane_cp03

0x459e,	// (0x0004139b) heading_loc_req_pane_ParamLimits

0x459e,	// (0x0004139b) heading_loc_req_pane

0x45aa,	// (0x000413a7) popup_dyc_status_message_window_g1_ParamLimits

0x45aa,	// (0x000413a7) popup_dyc_status_message_window_g1

0x45b6,	// (0x000413b3) popup_dyc_status_message_window_t1_ParamLimits

0x45b6,	// (0x000413b3) popup_dyc_status_message_window_t1

0x45c8,	// (0x000413c5) popup_dyc_status_message_window_t2_ParamLimits

0x45c8,	// (0x000413c5) popup_dyc_status_message_window_t2

0x45da,	// (0x000413d7) popup_dyc_status_message_window_t3_ParamLimits

0x45da,	// (0x000413d7) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c10a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c10a) popup_dyc_status_message_window_t

0xa503,	// (0x00047300) bg_heading_pane_cp01

0xaf3e,	// (0x00047d3b) heading_loc_req_pane_g1

0xaf46,	// (0x00047d43) heading_loc_req_pane_g2

0xaf4e,	// (0x00047d4b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c111) heading_loc_req_pane_g

0xaf56,	// (0x00047d53) heading_loc_req_pane_t1

0xaf65,	// (0x00047d62) bg_popup_sub_pane_cp01_ParamLimits

0xaf65,	// (0x00047d62) bg_popup_sub_pane_cp01

0xaf73,	// (0x00047d70) popup_cale_events_window_g1_ParamLimits

0xaf73,	// (0x00047d70) popup_cale_events_window_g1

0xaf93,	// (0x00047d90) popup_cale_events_window_g2_ParamLimits

0xaf93,	// (0x00047d90) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c145) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c145) popup_cale_events_window_g

0xafb3,	// (0x00047db0) popup_cale_events_window_t1_ParamLimits

0xafb3,	// (0x00047db0) popup_cale_events_window_t1

0xafc5,	// (0x00047dc2) popup_cale_events_window_t2_ParamLimits

0xafc5,	// (0x00047dc2) popup_cale_events_window_t2

0xb003,	// (0x00047e00) popup_cale_events_window_t3_ParamLimits

0xb003,	// (0x00047e00) popup_cale_events_window_t3

0xb03d,	// (0x00047e3a) popup_cale_events_window_t4_ParamLimits

0xb03d,	// (0x00047e3a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c14a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c14a) popup_cale_events_window_t

0x4604,	// (0x00041401) call_type_pane

0xb17f,	// (0x00047f7c) popup_call_status_window_g1

0x4610,	// (0x0004140d) popup_call_status_window_g2

0x461c,	// (0x00041419) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c153) popup_call_status_window_g

0xb073,	// (0x00047e70) call_type_pane_g1

0xb07c,	// (0x00047e79) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c15a) call_type_pane_g

0xa503,	// (0x00047300) bg_popup_sub_pane_cp02

0xb085,	// (0x00047e82) listscroll_popup_wml_pane

0xb08d,	// (0x00047e8a) list_wml_pane

0xb097,	// (0x00047e94) scroll_pane_cp013

0xb0a2,	// (0x00047e9f) list_single_graphic_popup_wml_pane_ParamLimits

0xb0a2,	// (0x00047e9f) list_single_graphic_popup_wml_pane

0xa886,	// (0x00047683) list_single_graphic_popup_wml_pane_g1

0xb0b6,	// (0x00047eb3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c15f) list_single_graphic_popup_wml_pane_g

0xb0be,	// (0x00047ebb) list_single_graphic_popup_wml_pane_t1

0xb0d4,	// (0x00047ed1) aid_call_pane

0xa764,	// (0x00047561) popup_clock_analogue_window_g1

0xa764,	// (0x00047561) popup_clock_analogue_window_g2

0x4628,	// (0x00041425) popup_clock_analogue_window_g3

0x4628,	// (0x00041425) popup_clock_analogue_window_g4

0xa886,	// (0x00047683) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c164) popup_clock_analogue_window_g

0x4630,	// (0x0004142d) popup_clock_analogue_window_t1

0x463e,	// (0x0004143b) clock_digital_number_pane_ParamLimits

0x463e,	// (0x0004143b) clock_digital_number_pane

0x464a,	// (0x00041447) clock_digital_number_pane_cp02_ParamLimits

0x464a,	// (0x00041447) clock_digital_number_pane_cp02

0x4656,	// (0x00041453) clock_digital_number_pane_cp03_ParamLimits

0x4656,	// (0x00041453) clock_digital_number_pane_cp03

0x4662,	// (0x0004145f) clock_digital_number_pane_cp04_ParamLimits

0x4662,	// (0x0004145f) clock_digital_number_pane_cp04

0x4672,	// (0x0004146f) clock_digital_separator_pane_ParamLimits

0x4672,	// (0x0004146f) clock_digital_separator_pane

0x467e,	// (0x0004147b) popup_clock_digital_window_t1

0xa886,	// (0x00047683) clock_digital_number_pane_g1

0xa886,	// (0x00047683) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d2) clock_digital_number_pane_g

0xa886,	// (0x00047683) clock_digital_separator_pane_g1

0xa886,	// (0x00047683) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d2) clock_digital_separator_pane_g

0xa503,	// (0x00047300) bg_popup_window_pane_cp04

0xb0dc,	// (0x00047ed9) heading_pane_cp03

0xb0e4,	// (0x00047ee1) listscroll_popup_gms_pane

0xb0ec,	// (0x00047ee9) grid_large_graphic_popup_pane

0xb0f6,	// (0x00047ef3) listscroll_popup_gms_pane_g1

0xb0fe,	// (0x00047efb) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c16f) listscroll_popup_gms_pane_g

0xab9f,	// (0x0004799c) scroll_pane_cp014

0x469b,	// (0x00041498) cell_large_graphic_popup_pane_ParamLimits

0x469b,	// (0x00041498) cell_large_graphic_popup_pane

0x46b3,	// (0x000414b0) cell_large_graphic_popup_pane_g1_ParamLimits

0x46b3,	// (0x000414b0) cell_large_graphic_popup_pane_g1

0xb106,	// (0x00047f03) cell_large_graphic_popup_pane_g2_ParamLimits

0xb106,	// (0x00047f03) cell_large_graphic_popup_pane_g2

0xb112,	// (0x00047f0f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb112,	// (0x00047f0f) cell_large_graphic_popup_pane_g3

0xb11f,	// (0x00047f1c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb11f,	// (0x00047f1c) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c174) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c174) cell_large_graphic_popup_pane_g

0xb12f,	// (0x00047f2c) grid_highlight_pane_cp010

0xa886,	// (0x00047683) bg_popup_call_pane_g1

0xb139,	// (0x00047f36) list_single_graphic_popup_conf_pane_ParamLimits

0xb139,	// (0x00047f36) list_single_graphic_popup_conf_pane

0xb14c,	// (0x00047f49) list_highlight_pane_cp01

0xb155,	// (0x00047f52) list_single_graphic_popup_conf_pane_g1

0xb15d,	// (0x00047f5a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c17d) list_single_graphic_popup_conf_pane_g

0xb18d,	// (0x00047f8a) list_single_graphic_popup_conf_pane_t1

0xb19b,	// (0x00047f98) linegrid_cams_pane_g1

0x46bf,	// (0x000414bc) linegrid_cams_pane_g2

0xa9dc,	// (0x000477d9) linegrid_cams_pane_g3

0xb1a4,	// (0x00047fa1) linegrid_cams_pane_g4

0x46c8,	// (0x000414c5) linegrid_cams_pane_g5

0x46d1,	// (0x000414ce) linegrid_cams_pane_g6

0xa9e5,	// (0x000477e2) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c182) linegrid_cams_pane_g

0xb1ad,	// (0x00047faa) popup_clock_analogue_window

0xb1ad,	// (0x00047faa) popup_clock_digital_window

0xa503,	// (0x00047300) popup_phob_thumbnail_window

0xa886,	// (0x00047683) call_video_uplink_pane_g1

0xb1b6,	// (0x00047fb3) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c191) call_video_uplink_pane_g

0xb1be,	// (0x00047fbb) video_uplink_pane

0xb1c6,	// (0x00047fc3) mce_image_pane_g1

0x46da,	// (0x000414d7) mce_image_pane_g2

0x46e4,	// (0x000414e1) mce_image_pane_g3

0x46ec,	// (0x000414e9) mce_image_pane_g4

0x46f4,	// (0x000414f1) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c196) mce_image_pane_g

0xb1d0,	// (0x00047fcd) control_top_pane_stacon_cp01_ParamLimits

0xb1d0,	// (0x00047fcd) control_top_pane_stacon_cp01

0xb1e4,	// (0x00047fe1) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1e4,	// (0x00047fe1) uni_indicator_pane_stacon_cp01

0xb1f5,	// (0x00047ff2) bg_popup_sub_pane_cp03

0xb1ff,	// (0x00047ffc) chi_dic_find_pane

0x46fc,	// (0x000414f9) listscroll_chi_dic_pane

0xb207,	// (0x00048004) main_pane_chidic_g1

0xb20f,	// (0x0004800c) chi_dic_find_pane_t1

0xb21d,	// (0x0004801a) find_chidic_pane

0xb226,	// (0x00048023) chi_dic_list_pane_ParamLimits

0xb226,	// (0x00048023) chi_dic_list_pane

0xb237,	// (0x00048034) scroll_pane_cp020

0xb23f,	// (0x0004803c) find_chidic_pane_t1

0xa503,	// (0x00047300) input_focus_pane_cp06

0x4710,	// (0x0004150d) list_chi_dic_pane_ParamLimits

0x4710,	// (0x0004150d) list_chi_dic_pane

0x472a,	// (0x00041527) list_chi_dic_pane_t1_ParamLimits

0x472a,	// (0x00041527) list_chi_dic_pane_t1

0xa503,	// (0x00047300) list_highlight_pane_cp020

0xb24e,	// (0x0004804b) bg_cale_heading_pane_g1

0x473d,	// (0x0004153a) bg_cale_heading_pane_g2

0x4745,	// (0x00041542) bg_cale_heading_pane_g3

0x474d,	// (0x0004154a) bg_cale_heading_pane_g4

0x4757,	// (0x00041554) bg_cale_heading_pane_g5

0x4761,	// (0x0004155e) bg_cale_heading_pane_g6

0x4769,	// (0x00041566) bg_cale_heading_pane_g7

0x4771,	// (0x0004156e) bg_cale_heading_pane_g8

0x477b,	// (0x00041578) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c1a1) bg_cale_heading_pane_g

0xb24e,	// (0x0004804b) bg_cale_side_pane_g1

0x4785,	// (0x00041582) bg_cale_side_pane_g2

0x478f,	// (0x0004158c) bg_cale_side_pane_g3

0x4799,	// (0x00041596) bg_cale_side_pane_g4

0x47a3,	// (0x000415a0) bg_cale_side_pane_g5

0x47ad,	// (0x000415aa) bg_cale_side_pane_g6

0x47b7,	// (0x000415b4) bg_cale_side_pane_g7

0x47c1,	// (0x000415be) bg_cale_side_pane_g8

0x47c9,	// (0x000415c6) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c1b4) bg_cale_side_pane_g

0x47d1,	// (0x000415ce) popup_call_status_window_ParamLimits

0x47d1,	// (0x000415ce) popup_call_status_window

0xb256,	// (0x00048053) stacon_top_pane

0xb25e,	// (0x0004805b) status_pane_ParamLimits

0xb25e,	// (0x0004805b) status_pane

0xb273,	// (0x00048070) status_small_pane

0xb27b,	// (0x00048078) control_pane

0xa503,	// (0x00047300) stacon_bottom_pane

0xb283,	// (0x00048080) list_single_mce_smart_pane_t1_ParamLimits

0xb283,	// (0x00048080) list_single_mce_smart_pane_t1

0xb296,	// (0x00048093) list_single_mce_smart_pane_t2_ParamLimits

0xb296,	// (0x00048093) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c1c7) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c1c7) list_single_mce_smart_pane_t

0x47dd,	// (0x000415da) compass_pane

0x47e9,	// (0x000415e6) main_location2_pane_t1

0x47fd,	// (0x000415fa) main_location2_pane_t2

0x4811,	// (0x0004160e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c1cc) main_location2_pane_t

0xb2b5,	// (0x000480b2) compass_pane_g1_ParamLimits

0xb2b5,	// (0x000480b2) compass_pane_g1

0x485b,	// (0x00041658) compass_pane_t1

0x486a,	// (0x00041667) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c1d5) compass_pane_t

0x48b5,	// (0x000416b2) text_secondary_cp61

0xb331,	// (0x0004812e) navi_pane_cams_g5

0xb3ad,	// (0x000481aa) navi_pane_im_t1

0xb3bb,	// (0x000481b8) navi_pane_mp_g1_ParamLimits

0xb3bb,	// (0x000481b8) navi_pane_mp_g1

0xb3cf,	// (0x000481cc) navi_pane_mp_g2_ParamLimits

0xb3cf,	// (0x000481cc) navi_pane_mp_g2

0xb3db,	// (0x000481d8) navi_pane_mp_g3_ParamLimits

0xb3db,	// (0x000481d8) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c1e9) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c1e9) navi_pane_mp_g

0xb3e7,	// (0x000481e4) navi_pane_mp_t1

0xb3f5,	// (0x000481f2) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c1f0) navi_pane_mp_t

0xb460,	// (0x0004825d) navi_pane_vt_g1

0xb3e7,	// (0x000481e4) navi_pane_vt_t1

0xb468,	// (0x00048265) navi_slider_pane

0xa9f6,	// (0x000477f3) zooming_pane

0xb478,	// (0x00048275) navi_slider_pane_g1

0x48f0,	// (0x000416ed) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c1f7) navi_slider_pane_g

0xb49c,	// (0x00048299) aid_levels_zoom

0xb4a4,	// (0x000482a1) zooming_pane_g1

0xb4ac,	// (0x000482a9) zooming_pane_g2

0xb4ac,	// (0x000482a9) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c206) zooming_pane_g

0xb4b4,	// (0x000482b1) level_10_zoom

0xb4bd,	// (0x000482ba) level_11_zoom

0xb4c6,	// (0x000482c3) level_1_zoom

0xb4cf,	// (0x000482cc) level_2_zoom

0xb4d8,	// (0x000482d5) level_3_zoom

0xb4e1,	// (0x000482de) level_4_zoom

0xb4ea,	// (0x000482e7) level_5_zoom

0xb4f3,	// (0x000482f0) level_6_zoom

0xb4fc,	// (0x000482f9) level_7_zoom

0xb505,	// (0x00048302) level_8_zoom

0xb50e,	// (0x0004830b) level_9_zoom

0xb51f,	// (0x0004831c) popup_phob_thumbnail_window_g1

0xb527,	// (0x00048324) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c20d) popup_phob_thumbnail_window_g

0xc803,	// (0x00049600) level_1_location

0xc80b,	// (0x00049608) level_2_location

0xc813,	// (0x00049610) level_3_location

0xc81b,	// (0x00049618) level_4_location

0xa9f6,	// (0x000477f3) level_5_location

0x4902,	// (0x000416ff) mce_icon_pane_g1

0x490a,	// (0x00041707) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c212) mce_icon_pane_g

0x4912,	// (0x0004170f) main_mup_pane_g1_ParamLimits

0x4912,	// (0x0004170f) main_mup_pane_g1

0x492a,	// (0x00041727) main_mup_pane_g2_ParamLimits

0x492a,	// (0x00041727) main_mup_pane_g2

0x4946,	// (0x00041743) main_mup_pane_g3_ParamLimits

0x4946,	// (0x00041743) main_mup_pane_g3

0x4962,	// (0x0004175f) main_mup_pane_g4_ParamLimits

0x4962,	// (0x0004175f) main_mup_pane_g4

0x497e,	// (0x0004177b) main_mup_pane_g5_ParamLimits

0x497e,	// (0x0004177b) main_mup_pane_g5

0x499f,	// (0x0004179c) main_mup_pane_g6_ParamLimits

0x499f,	// (0x0004179c) main_mup_pane_g6

0x49bb,	// (0x000417b8) main_mup_pane_g7_ParamLimits

0x49bb,	// (0x000417b8) main_mup_pane_g7

0x49d7,	// (0x000417d4) main_mup_pane_g8_ParamLimits

0x49d7,	// (0x000417d4) main_mup_pane_g8

0x49f7,	// (0x000417f4) main_mup_pane_g9_ParamLimits

0x49f7,	// (0x000417f4) main_mup_pane_g9

0x4a16,	// (0x00041813) main_mup_pane_g10_ParamLimits

0x4a16,	// (0x00041813) main_mup_pane_g10

0x4a35,	// (0x00041832) main_mup_pane_g11_ParamLimits

0x4a35,	// (0x00041832) main_mup_pane_g11

0x4a4d,	// (0x0004184a) main_mup_pane_g12_ParamLimits

0x4a4d,	// (0x0004184a) main_mup_pane_g12

0x4a5b,	// (0x00041858) main_mup_pane_g13_ParamLimits

0x4a5b,	// (0x00041858) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c217) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c217) main_mup_pane_g

0x4a71,	// (0x0004186e) main_mup_pane_t1_ParamLimits

0x4a71,	// (0x0004186e) main_mup_pane_t1

0x4a8e,	// (0x0004188b) main_mup_pane_t2_ParamLimits

0x4a8e,	// (0x0004188b) main_mup_pane_t2

0x4aa8,	// (0x000418a5) main_mup_pane_t3_ParamLimits

0x4aa8,	// (0x000418a5) main_mup_pane_t3

0x4ac2,	// (0x000418bf) main_mup_pane_t4_ParamLimits

0x4ac2,	// (0x000418bf) main_mup_pane_t4

0x4ad4,	// (0x000418d1) main_mup_pane_t5_ParamLimits

0x4ad4,	// (0x000418d1) main_mup_pane_t5

0x4ae6,	// (0x000418e3) main_mup_pane_t6_ParamLimits

0x4ae6,	// (0x000418e3) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c232) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c232) main_mup_pane_t

0x4afc,	// (0x000418f9) mup_progress_pane_ParamLimits

0x4afc,	// (0x000418f9) mup_progress_pane

0x4b08,	// (0x00041905) mup_visualizer_pane_ParamLimits

0x4b08,	// (0x00041905) mup_visualizer_pane

0x4b42,	// (0x0004193f) mup_volume_pane_ParamLimits

0x4b42,	// (0x0004193f) mup_volume_pane

0xb17f,	// (0x00047f7c) mup_visualizer_pane_g1_ParamLimits

0xb17f,	// (0x00047f7c) mup_visualizer_pane_g1

0xb17f,	// (0x00047f7c) mup_visualizer_pane_g2_ParamLimits

0xb17f,	// (0x00047f7c) mup_visualizer_pane_g2

0xb2b5,	// (0x000480b2) mup_visualizer_pane_g3_ParamLimits

0xb2b5,	// (0x000480b2) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c23f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c23f) mup_visualizer_pane_g

0xa886,	// (0x00047683) mup_volume_pane_g1

0xb537,	// (0x00048334) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c246) mup_volume_pane_g

0xa886,	// (0x00047683) mup_progress_pane_g1

0xb540,	// (0x0004833d) mup_progress_pane_g2

0xb549,	// (0x00048346) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c24b) mup_progress_pane_g

0xa503,	// (0x00047300) bg_popup_window_pane_cp05

0xb552,	// (0x0004834f) heading_pane_cp02_ParamLimits

0xb552,	// (0x0004834f) heading_pane_cp02

0xb56c,	// (0x00048369) list_popup_blid_pane

0xb574,	// (0x00048371) list_blid_sat_info_pane_ParamLimits

0xb574,	// (0x00048371) list_blid_sat_info_pane

0xb587,	// (0x00048384) list_blid_sat_info_pane_g1

0xb58f,	// (0x0004838c) list_blid_sat_info_pane_t1

0x4c4f,	// (0x00041a4c) mup_equalizer_pane_ParamLimits

0x4c4f,	// (0x00041a4c) mup_equalizer_pane

0x4c70,	// (0x00041a6d) mup_equalizer_pane_cp1_ParamLimits

0x4c70,	// (0x00041a6d) mup_equalizer_pane_cp1

0x4c91,	// (0x00041a8e) mup_equalizer_pane_cp2_ParamLimits

0x4c91,	// (0x00041a8e) mup_equalizer_pane_cp2

0x4cb2,	// (0x00041aaf) mup_equalizer_pane_cp3_ParamLimits

0x4cb2,	// (0x00041aaf) mup_equalizer_pane_cp3

0x4cd3,	// (0x00041ad0) mup_equalizer_pane_cp4_ParamLimits

0x4cd3,	// (0x00041ad0) mup_equalizer_pane_cp4

0x4cf4,	// (0x00041af1) mup_equalizer_pane_cp5

0x4d0a,	// (0x00041b07) mup_equalizer_pane_cp6

0x4d22,	// (0x00041b1f) mup_equalizer_pane_cp7

0xc721,	// (0x0004951e) bg_popup_call_poc_act_pane_g9

0xc729,	// (0x00049526) bg_popup_call_poc_act_pane_g10

0xc731,	// (0x0004952e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76c,	// (0x00047569) mup_scale_pane

0xa886,	// (0x00047683) mup_scale_pane_g1

0xb59d,	// (0x0004839a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004c267) mup_scale_pane_g

0xb5c1,	// (0x000483be) msg_data_pane

0xb5c9,	// (0x000483c6) scroll_pane_cp017

0x10aa,	// (0x0003dea7) bg_list_pane_cp04_ParamLimits

0x10aa,	// (0x0003dea7) bg_list_pane_cp04

0xb5d1,	// (0x000483ce) msg_data_pane_g1

0x4d4c,	// (0x00041b49) msg_data_pane_g2

0x4d56,	// (0x00041b53) msg_data_pane_g3

0x4d5e,	// (0x00041b5b) msg_data_pane_g4

0x4d66,	// (0x00041b63) msg_data_pane_g5

0x4d6e,	// (0x00041b6b) msg_data_pane_g6

0x4d76,	// (0x00041b73) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004c276) msg_data_pane_g

0x10ce,	// (0x0003decb) msg_text_pane_ParamLimits

0x10ce,	// (0x0003decb) msg_text_pane

0x4d7e,	// (0x00041b7b) qrid_highlight_pane_cp011_ParamLimits

0x4d7e,	// (0x00041b7b) qrid_highlight_pane_cp011

0xa503,	// (0x00047300) msg_body_pane

0xa503,	// (0x00047300) msg_header_pane

0xb5e2,	// (0x000483df) input_focus_pane_cp07

0x111a,	// (0x0003df17) msg_header_pane_t1_ParamLimits

0x111a,	// (0x0003df17) msg_header_pane_t1

0x112c,	// (0x0003df29) msg_header_pane_t2_ParamLimits

0x112c,	// (0x0003df29) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004c28a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004c28a) msg_header_pane_t

0xb5f7,	// (0x000483f4) msg_body_pane_g1

0x113e,	// (0x0003df3b) msg_body_pane_t1_ParamLimits

0x113e,	// (0x0003df3b) msg_body_pane_t1

0x116f,	// (0x0003df6c) msg_body_pane_t2_ParamLimits

0x116f,	// (0x0003df6c) msg_body_pane_t2

0x1181,	// (0x0003df7e) msg_body_pane_t3_ParamLimits

0x1181,	// (0x0003df7e) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004c28f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004c28f) msg_body_pane_t

0x4dea,	// (0x00041be7) main_viewer_pane_g1_ParamLimits

0x4dea,	// (0x00041be7) main_viewer_pane_g1

0x4df6,	// (0x00041bf3) main_viewer_pane_g2_ParamLimits

0x4df6,	// (0x00041bf3) main_viewer_pane_g2

0x4e02,	// (0x00041bff) main_viewer_pane_g3_ParamLimits

0x4e02,	// (0x00041bff) main_viewer_pane_g3

0x4e13,	// (0x00041c10) main_viewer_pane_g4_ParamLimits

0x4e13,	// (0x00041c10) main_viewer_pane_g4

0x4e24,	// (0x00041c21) main_viewer_pane_g5_ParamLimits

0x4e24,	// (0x00041c21) main_viewer_pane_g5

0x4e24,	// (0x00041c21) main_viewer_pane_g7_ParamLimits

0x4e24,	// (0x00041c21) main_viewer_pane_g7

0x4e36,	// (0x00041c33) main_viewer_pane_g8_ParamLimits

0x4e36,	// (0x00041c33) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004c29f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004c29f) main_viewer_pane_g

0xb5ff,	// (0x000483fc) viewer_content_pane_ParamLimits

0xb5ff,	// (0x000483fc) viewer_content_pane

0x4e6e,	// (0x00041c6b) main_postcard_pane_g1_ParamLimits

0x4e6e,	// (0x00041c6b) main_postcard_pane_g1

0x4e7c,	// (0x00041c79) main_postcard_pane_g2_ParamLimits

0x4e7c,	// (0x00041c79) main_postcard_pane_g2

0x4e8a,	// (0x00041c87) main_postcard_pane_g3_ParamLimits

0x4e8a,	// (0x00041c87) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004c2b0) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004c2b0) main_postcard_pane_g

0x4e9a,	// (0x00041c97) main_postcard_pane_g4

0xc903,	// (0x00049700) smil_status_volume_pane_g2

0x4ec6,	// (0x00041cc3) postcard_pane_ParamLimits

0x4ec6,	// (0x00041cc3) postcard_pane

0xb17f,	// (0x00047f7c) postcard_pane_g1_ParamLimits

0xb17f,	// (0x00047f7c) postcard_pane_g1

0x4ef8,	// (0x00041cf5) postcard_pane_g2_ParamLimits

0x4ef8,	// (0x00041cf5) postcard_pane_g2

0x4f04,	// (0x00041d01) postcard_pane_g3_ParamLimits

0x4f04,	// (0x00041d01) postcard_pane_g3

0xb60d,	// (0x0004840a) postcard_pane_g4_ParamLimits

0xb60d,	// (0x0004840a) postcard_pane_g4

0x4f10,	// (0x00041d0d) postcard_pane_g5_ParamLimits

0x4f10,	// (0x00041d0d) postcard_pane_g5

0x4f1c,	// (0x00041d19) postcard_pane_g6_ParamLimits

0x4f1c,	// (0x00041d19) postcard_pane_g6

0xb61b,	// (0x00048418) postcard_pane_g7_ParamLimits

0xb61b,	// (0x00048418) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004c2bd) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004c2bd) postcard_pane_g

0x4f28,	// (0x00041d25) main_mp2_pane_g1_ParamLimits

0x4f28,	// (0x00041d25) main_mp2_pane_g1

0x4f34,	// (0x00041d31) main_mp2_pane_g2_ParamLimits

0x4f34,	// (0x00041d31) main_mp2_pane_g2

0x4f40,	// (0x00041d3d) main_mp2_pane_g3_ParamLimits

0x4f40,	// (0x00041d3d) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004c2cc) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004c2cc) main_mp2_pane_g

0x4f4c,	// (0x00041d49) main_mp2_pane_t1_ParamLimits

0x4f4c,	// (0x00041d49) main_mp2_pane_t1

0x4f63,	// (0x00041d60) main_mp2_pane_t2_ParamLimits

0x4f63,	// (0x00041d60) main_mp2_pane_t2

0x4f77,	// (0x00041d74) main_mp2_pane_t3_ParamLimits

0x4f77,	// (0x00041d74) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004c2d3) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004c2d3) main_mp2_pane_t

0xb629,	// (0x00048426) pec_content_pane_ParamLimits

0xb629,	// (0x00048426) pec_content_pane

0xab9f,	// (0x0004799c) scroll_pane_cp015

0xb63b,	// (0x00048438) pec_attribute_pane_ParamLimits

0xb63b,	// (0x00048438) pec_attribute_pane

0x4f89,	// (0x00041d86) pec_content_pane_g1_ParamLimits

0x4f89,	// (0x00041d86) pec_content_pane_g1

0xb64b,	// (0x00048448) pec_content_pane_t1_ParamLimits

0xb64b,	// (0x00048448) pec_content_pane_t1

0xb65d,	// (0x0004845a) pec_content_pane_t2_ParamLimits

0xb65d,	// (0x0004845a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004c2da) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004c2da) pec_content_pane_t

0x4f95,	// (0x00041d92) list_single_graphic_pane_cp01_ParamLimits

0x4f95,	// (0x00041d92) list_single_graphic_pane_cp01

0xa76c,	// (0x00047569) bg_popup_sub_pane_cp04

0xb66f,	// (0x0004846c) popup_mup_playback_window_g1

0xb67b,	// (0x00048478) popup_mup_playback_window_t1

0xb690,	// (0x0004848d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004c2df) popup_mup_playback_window_t

0xb6c7,	// (0x000484c4) main_image_pane_g1_ParamLimits

0xb6c7,	// (0x000484c4) main_image_pane_g1

0xb70a,	// (0x00048507) scroll_pane_cp018_ParamLimits

0xb70a,	// (0x00048507) scroll_pane_cp018

0xb722,	// (0x0004851f) scroll_pane_cp016_ParamLimits

0xb722,	// (0x0004851f) scroll_pane_cp016

0x502e,	// (0x00041e2b) smil2_image_pane_ParamLimits

0x502e,	// (0x00041e2b) smil2_image_pane

0x505e,	// (0x00041e5b) smil2_root_pane_ParamLimits

0x505e,	// (0x00041e5b) smil2_root_pane

0x508a,	// (0x00041e87) smil2_text_pane_ParamLimits

0x508a,	// (0x00041e87) smil2_text_pane

0xa503,	// (0x00047300) bg_list_pane_cp06

0xb75e,	// (0x0004855b) grid_radio_pane

0xa503,	// (0x00047300) bg_popup_window_pane_cp06

0xb766,	// (0x00048563) main_fmradio_pane_t1

0xb0dc,	// (0x00047ed9) heading_pane_cp04

0xb774,	// (0x00048571) main_fmradio_pane_t2

0xc739,	// (0x00049536) popup_cale_lunar_info_window_g1

0xb782,	// (0x0004857f) main_fmradio_pane_t3

0xc741,	// (0x0004953e) popup_cale_lunar_info_window_g2

0xb790,	// (0x0004858d) main_fmradio_pane_t4

0x0001,

0xb79e,	// (0x0004859b) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004c3ba) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004c2f4) main_fmradio_pane_t

0xb7ac,	// (0x000485a9) wait_bar_pane_cp03

0xb7b4,	// (0x000485b1) cell_fmradio_pane_ParamLimits

0xb7b4,	// (0x000485b1) cell_fmradio_pane

0xb61b,	// (0x00048418) cell_fmradio_pane_g1_ParamLimits

0xb61b,	// (0x00048418) cell_fmradio_pane_g1

0xa503,	// (0x00047300) grid_highlight_pane_cp011

0xb7c7,	// (0x000485c4) poc_content_pane_ParamLimits

0xb7c7,	// (0x000485c4) poc_content_pane

0xb7d9,	// (0x000485d6) scroll_pane_cp019

0x50ca,	// (0x00041ec7) popup_call_poc_act_window_ParamLimits

0x50ca,	// (0x00041ec7) popup_call_poc_act_window

0x50d7,	// (0x00041ed4) popup_call_poc_inact_window_ParamLimits

0x50d7,	// (0x00041ed4) popup_call_poc_inact_window

0xf594,	// (0x0004c391) bg_popup_call_poc_act_pane_g

0xc6b1,	// (0x000494ae) bg_popup_call_poc_inact_pane_g1

0xc6b9,	// (0x000494b6) bg_popup_call_poc_inact_pane_g2

0xb7e1,	// (0x000485de) popup_call_poc_act_window_g2

0xc6c1,	// (0x000494be) bg_popup_call_poc_inact_pane_g3

0xc6c9,	// (0x000494c6) bg_popup_call_poc_inact_pane_g4

0xc6d1,	// (0x000494ce) bg_popup_call_poc_inact_pane_g5

0xb7e9,	// (0x000485e6) popup_call_poc_act_window_t1_ParamLimits

0xb7e9,	// (0x000485e6) popup_call_poc_act_window_t1

0xb811,	// (0x0004860e) popup_call_poc_act_window_t2_ParamLimits

0xb811,	// (0x0004860e) popup_call_poc_act_window_t2

0xb839,	// (0x00048636) popup_call_poc_act_window_t3_ParamLimits

0xb839,	// (0x00048636) popup_call_poc_act_window_t3

0xb861,	// (0x0004865e) popup_call_poc_act_window_t4_ParamLimits

0xb861,	// (0x0004865e) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004c2ff) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004c2ff) popup_call_poc_act_window_t

0xc6d9,	// (0x000494d6) bg_popup_call_poc_inact_pane_g6

0xc6e1,	// (0x000494de) bg_popup_call_poc_inact_pane_g7

0xc6e9,	// (0x000494e6) bg_popup_call_poc_inact_pane_g8

0xb873,	// (0x00048670) popup_call_poc_inact_window_g2

0xc6f1,	// (0x000494ee) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004c37e) bg_popup_call_poc_inact_pane_g

0xb87b,	// (0x00048678) popup_call_poc_inact_window_t1_ParamLimits

0xb87b,	// (0x00048678) popup_call_poc_inact_window_t1

0xb890,	// (0x0004868d) popup_call_poc_inact_window_t2_ParamLimits

0xb890,	// (0x0004868d) popup_call_poc_inact_window_t2

0xb8a5,	// (0x000486a2) popup_call_poc_inact_window_t3_ParamLimits

0xb8a5,	// (0x000486a2) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004c308) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004c308) popup_call_poc_inact_window_t

0xc876,	// (0x00049673) context_pane_ParamLimits

0x570b,	// (0x00042508) signal_pane_ParamLimits

0xa9f6,	// (0x000477f3) main_call2_pane

0x567e,	// (0x0004247b) popup_phob_thumbnail2_window_ParamLimits

0x567e,	// (0x0004247b) popup_phob_thumbnail2_window

0x4d98,	// (0x00041b95) aid_hotspot_pointer_arrow_pane

0x4da0,	// (0x00041b9d) aid_hotspot_pointer_hand_pane

0x53f9,	// (0x000421f6) phob_pre_status_pane_g5

0x30db,	// (0x0003fed8) cams_zoom_pane_ParamLimits

0x30e7,	// (0x0003fee4) image_vga_pane_ParamLimits

0x30f6,	// (0x0003fef3) main_camera_pane_g1_ParamLimits

0x3104,	// (0x0003ff01) main_camera_pane_g2_ParamLimits

0x3110,	// (0x0003ff0d) main_camera_pane_g3_ParamLimits

0x311c,	// (0x0003ff19) main_camera_pane_g4_ParamLimits

0x3128,	// (0x0003ff25) main_camera_pane_g5_ParamLimits

0x3134,	// (0x0003ff31) main_camera_pane_g6_ParamLimits

0x3140,	// (0x0003ff3d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c007) main_camera_pane_g_ParamLimits

0x314c,	// (0x0003ff49) main_camera_pane_t1_ParamLimits

0x315e,	// (0x0003ff5b) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c018) main_camera_pane_t_ParamLimits

0xa76c,	// (0x00047569) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76c,	// (0x00047569) bg_popup_preview_window_pane_cp01

0xb8ba,	// (0x000486b7) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ba,	// (0x000486b7) popup_phob_thumbnail2_window_g1

0xa503,	// (0x00047300) call2_cli_visual_pane

0x50f3,	// (0x00041ef0) popup_call2_audio_conf_window_ParamLimits

0x50f3,	// (0x00041ef0) popup_call2_audio_conf_window

0x5108,	// (0x00041f05) popup_call2_audio_first_window_ParamLimits

0x5108,	// (0x00041f05) popup_call2_audio_first_window

0x51a6,	// (0x00041fa3) popup_call2_audio_in_window_ParamLimits

0x51a6,	// (0x00041fa3) popup_call2_audio_in_window

0x51e8,	// (0x00041fe5) popup_call2_audio_out_window_ParamLimits

0x51e8,	// (0x00041fe5) popup_call2_audio_out_window

0x524a,	// (0x00042047) popup_call2_audio_second_window_ParamLimits

0x524a,	// (0x00042047) popup_call2_audio_second_window

0x52a8,	// (0x000420a5) popup_call2_audio_wait_window_ParamLimits

0x52a8,	// (0x000420a5) popup_call2_audio_wait_window

0xa503,	// (0x00047300) bg_popup_call2_act_pane_cp03

0xa74e,	// (0x0004754b) list_conf_pane_cp

0xb8c6,	// (0x000486c3) popup_call2_audio_conf_window_t1

0xb139,	// (0x00047f36) list_single_graphic_popup_conf2_pane_ParamLimits

0xb139,	// (0x00047f36) list_single_graphic_popup_conf2_pane

0xb14c,	// (0x00047f49) list_highlight_pane_cp04

0xb8d4,	// (0x000486d1) list_single_graphic_popup_conf2_pane_g1

0xb15d,	// (0x00047f5a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004c30f) list_single_graphic_popup_conf2_pane_g

0xb8de,	// (0x000486db) list_single_graphic_popup_conf2_pane_t1

0xb8ec,	// (0x000486e9) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8ec,	// (0x000486e9) bg_popup_call2_act_pane_cp01

0xb976,	// (0x00048773) call_type_pane_cp05_ParamLimits

0xb976,	// (0x00048773) call_type_pane_cp05

0xb9ca,	// (0x000487c7) popup_call2_audio_second_window_g1_ParamLimits

0xb9ca,	// (0x000487c7) popup_call2_audio_second_window_g1

0xba1e,	// (0x0004881b) popup_call2_audio_second_window_g2_ParamLimits

0xba1e,	// (0x0004881b) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004c314) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004c314) popup_call2_audio_second_window_g

0xba83,	// (0x00048880) popup_call2_audio_second_window_t1_ParamLimits

0xba83,	// (0x00048880) popup_call2_audio_second_window_t1

0xbb3e,	// (0x0004893b) popup_call2_audio_second_window_t2_ParamLimits

0xbb3e,	// (0x0004893b) popup_call2_audio_second_window_t2

0xbb91,	// (0x0004898e) popup_call2_audio_second_window_t3_ParamLimits

0xbb91,	// (0x0004898e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004c31b) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004c31b) popup_call2_audio_second_window_t

0xa503,	// (0x00047300) bg_popup_call2_in_pane_cp02

0xa50d,	// (0x0004730a) call_type_pane_cp04

0xa515,	// (0x00047312) popup_call2_audio_wait_window_g1

0xa51d,	// (0x0004731a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bef6) popup_call2_audio_wait_window_g

0xa525,	// (0x00047322) popup_call2_audio_wait_window_t3

0xbc84,	// (0x00048a81) bg_popup_call2_act_pane_ParamLimits

0xbc84,	// (0x00048a81) bg_popup_call2_act_pane

0xbd44,	// (0x00048b41) call_type_pane_cp03_ParamLimits

0xbd44,	// (0x00048b41) call_type_pane_cp03

0xbda8,	// (0x00048ba5) popup_call2_audio_first_window_g1_ParamLimits

0xbda8,	// (0x00048ba5) popup_call2_audio_first_window_g1

0xbe18,	// (0x00048c15) popup_call2_audio_first_window_g2_ParamLimits

0xbe18,	// (0x00048c15) popup_call2_audio_first_window_g2

0xb17f,	// (0x00047f7c) popup_call2_audio_first_window_g3_ParamLimits

0xb17f,	// (0x00047f7c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004c324) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004c324) popup_call2_audio_first_window_g

0xbef6,	// (0x00048cf3) popup_call2_audio_first_window_t1_ParamLimits

0xbef6,	// (0x00048cf3) popup_call2_audio_first_window_t1

0xbff9,	// (0x00048df6) popup_call2_audio_first_window_t4_ParamLimits

0xbff9,	// (0x00048df6) popup_call2_audio_first_window_t4

0xc0dc,	// (0x00048ed9) popup_call2_audio_first_window_t5_ParamLimits

0xc0dc,	// (0x00048ed9) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004c32f) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004c32f) popup_call2_audio_first_window_t

0xa764,	// (0x00047561) bg_popup_call2_act_pane_g1

0xc749,	// (0x00049546) popup_cale_lunar_info_window_t1

0xc757,	// (0x00049554) popup_cale_lunar_info_window_t2

0xc765,	// (0x00049562) popup_cale_lunar_info_window_t3

0xa503,	// (0x00047300) bg_popup_call2_bubble_pane

0xc1dd,	// (0x00048fda) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1dd,	// (0x00048fda) bg_popup_call2_in_pane_cp01

0xa1df,	// (0x00046fdc) call_type_pane_cp02

0xc225,	// (0x00049022) popup_call2_audio_out_window_g1_ParamLimits

0xc225,	// (0x00049022) popup_call2_audio_out_window_g1

0xc251,	// (0x0004904e) popup_call2_audio_out_window_g2_ParamLimits

0xc251,	// (0x0004904e) popup_call2_audio_out_window_g2

0xc279,	// (0x00049076) popup_call2_audio_out_window_g3_ParamLimits

0xc279,	// (0x00049076) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004c338) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004c338) popup_call2_audio_out_window_g

0xc2b4,	// (0x000490b1) popup_call2_audio_out_window_t1_ParamLimits

0xc2b4,	// (0x000490b1) popup_call2_audio_out_window_t1

0xc313,	// (0x00049110) popup_call2_audio_out_window_t2_ParamLimits

0xc313,	// (0x00049110) popup_call2_audio_out_window_t2

0xc367,	// (0x00049164) popup_call2_audio_out_window_t3_ParamLimits

0xc367,	// (0x00049164) popup_call2_audio_out_window_t3

0xc37d,	// (0x0004917a) popup_call2_audio_out_window_t4_ParamLimits

0xc37d,	// (0x0004917a) popup_call2_audio_out_window_t4

0xc393,	// (0x00049190) popup_call2_audio_out_window_t5_ParamLimits

0xc393,	// (0x00049190) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004c341) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004c341) popup_call2_audio_out_window_t

0xc3f7,	// (0x000491f4) bg_popup_call2_in_pane_ParamLimits

0xc3f7,	// (0x000491f4) bg_popup_call2_in_pane

0xc453,	// (0x00049250) popup_call2_audio_in_window_g1_ParamLimits

0xc453,	// (0x00049250) popup_call2_audio_in_window_g1

0xc48b,	// (0x00049288) popup_call2_audio_in_window_g2_ParamLimits

0xc48b,	// (0x00049288) popup_call2_audio_in_window_g2

0xc4c3,	// (0x000492c0) popup_call2_audio_in_window_g3_ParamLimits

0xc4c3,	// (0x000492c0) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004c34e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004c34e) popup_call2_audio_in_window_g

0xc51b,	// (0x00049318) popup_call2_audio_in_window_t1_ParamLimits

0xc51b,	// (0x00049318) popup_call2_audio_in_window_t1

0xc59b,	// (0x00049398) popup_call2_audio_in_window_t2_ParamLimits

0xc59b,	// (0x00049398) popup_call2_audio_in_window_t2

0xc61b,	// (0x00049418) popup_call2_audio_in_window_t3_ParamLimits

0xc61b,	// (0x00049418) popup_call2_audio_in_window_t3

0xc635,	// (0x00049432) popup_call2_audio_in_window_t4_ParamLimits

0xc635,	// (0x00049432) popup_call2_audio_in_window_t4

0xc647,	// (0x00049444) popup_call2_audio_in_window_t5_ParamLimits

0xc647,	// (0x00049444) popup_call2_audio_in_window_t5

0xc65c,	// (0x00049459) popup_call2_audio_in_window_t6_ParamLimits

0xc65c,	// (0x00049459) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004c357) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004c357) popup_call2_audio_in_window_t

0xa764,	// (0x00047561) bg_popup_call2_in_pane_g1

0xc773,	// (0x00049570) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004c3bf) popup_cale_lunar_info_window_t

0xa76c,	// (0x00047569) bg_popup_call2_rect_pane_ParamLimits

0xa76c,	// (0x00047569) bg_popup_call2_rect_pane

0xa503,	// (0x00047300) call2_cli_visual_graphic_pane

0xa503,	// (0x00047300) call2_cli_visual_text_pane

0x57b1,	// (0x000425ae) smil_status_volume_pane_g3

0x0002,

0xa886,	// (0x00047683) call2_cli_visual_graphic_pane_g1

0xa886,	// (0x00047683) call2_cli_visual_graphic_pane_g2

0xa886,	// (0x00047683) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004c364) call2_cli_visual_graphic_pane_g

0xc671,	// (0x0004946e) bg_popup_call2_rect_pane_g1

0xa912,	// (0x0004770f) bg_popup_call2_rect_pane_g2

0xc679,	// (0x00049476) bg_popup_call2_rect_pane_g3

0xc681,	// (0x0004947e) bg_popup_call2_rect_pane_g4

0xc689,	// (0x00049486) bg_popup_call2_rect_pane_g5

0xc691,	// (0x0004948e) bg_popup_call2_rect_pane_g6

0xc699,	// (0x00049496) bg_popup_call2_rect_pane_g7

0xc6a1,	// (0x0004949e) bg_popup_call2_rect_pane_g8

0xc6a9,	// (0x000494a6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c36b) bg_popup_call2_rect_pane_g

0xc6b1,	// (0x000494ae) bg_popup_call2_bubble_pane_g1

0xc6b9,	// (0x000494b6) bg_popup_call2_bubble_pane_g2

0xc6c1,	// (0x000494be) bg_popup_call2_bubble_pane_g3

0xc6c9,	// (0x000494c6) bg_popup_call2_bubble_pane_g4

0xc6d1,	// (0x000494ce) bg_popup_call2_bubble_pane_g5

0xc6d9,	// (0x000494d6) bg_popup_call2_bubble_pane_g6

0xc6e1,	// (0x000494de) bg_popup_call2_bubble_pane_g7

0xc6e9,	// (0x000494e6) bg_popup_call2_bubble_pane_g8

0xc6f1,	// (0x000494ee) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004c37e) bg_popup_call2_bubble_pane_g

0x2b0c,	// (0x0003f909) aid_cale_week_size_cell_pane

0x3170,	// (0x0003ff6d) aid_cams_cif_uncrop_pane_ParamLimits

0x3170,	// (0x0003ff6d) aid_cams_cif_uncrop_pane

0x32cb,	// (0x000400c8) aid_cams_size_cell_ParamLimits

0x32cb,	// (0x000400c8) aid_cams_size_cell

0x32d7,	// (0x000400d4) grid_cams_pane_ParamLimits

0x32e5,	// (0x000400e2) linegrid_cams_pane_ParamLimits

0x33bc,	// (0x000401b9) call_video_pane_t1

0x33dd,	// (0x000401da) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c06b) call_video_pane_t

0x3926,	// (0x00040723) aid_cale_month_size_cell_pane_ParamLimits

0x3926,	// (0x00040723) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004c408) smil_status_volume_pane_g

0x57be,	// (0x000425bb) volume_smil_pane_ParamLimits

0x227b,	// (0x0003f078) aid_popup2_width_pane

0x2a0e,	// (0x0003f80b) cell_qdial_pane_g4_ParamLimits

0x2a0e,	// (0x0003f80b) cell_qdial_pane_g4

0x4837,	// (0x00041634) aid_blid_cardinal_pane_ParamLimits

0x4847,	// (0x00041644) aid_blid_destination_pane_ParamLimits

0x4847,	// (0x00041644) aid_blid_destination_pane

0xa76c,	// (0x00047569) bg_popup_call_poc_act_pane_ParamLimits

0xa76c,	// (0x00047569) bg_popup_call_poc_act_pane

0xa76c,	// (0x00047569) bg_popup_call_poc_inact_pane_ParamLimits

0xa76c,	// (0x00047569) bg_popup_call_poc_inact_pane

0xc6f9,	// (0x000494f6) bg_popup_call_poc_act_pane_g1

0xc701,	// (0x000494fe) bg_popup_call_poc_act_pane_g2

0xc709,	// (0x00049506) bg_popup_call_poc_act_pane_g3

0xc6c9,	// (0x000494c6) bg_popup_call_poc_act_pane_g4

0xc6d1,	// (0x000494ce) bg_popup_call_poc_act_pane_g5

0xc711,	// (0x0004950e) bg_popup_call_poc_act_pane_g6

0xc6e1,	// (0x000494de) bg_popup_call_poc_act_pane_g7

0xc719,	// (0x00049516) bg_popup_call_poc_act_pane_g8

0xa503,	// (0x00047300) main_usb_pane

0x55ad,	// (0x000423aa) popup_cale_lunar_info_window

0x3708,	// (0x00040505) im_reading_pane_t1_ParamLimits

0xaaf7,	// (0x000478f4) list_im_pane_ParamLimits

0xab08,	// (0x00047905) scroll_pane_cp07_ParamLimits

0xa503,	// (0x00047300) grid_highlight_pane_cp012

0xa76c,	// (0x00047569) mup_scale_pane_ParamLimits

0xb17f,	// (0x00047f7c) main_usb_pane_g1_ParamLimits

0xb17f,	// (0x00047f7c) main_usb_pane_g1

0x531c,	// (0x00042119) main_usb_pane_g2_ParamLimits

0x531c,	// (0x00042119) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004c3a8) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004c3a8) main_usb_pane_g

0x5328,	// (0x00042125) main_usb_pane_t1_ParamLimits

0x5328,	// (0x00042125) main_usb_pane_t1

0x533a,	// (0x00042137) main_usb_pane_t2_ParamLimits

0x533a,	// (0x00042137) main_usb_pane_t2

0x534c,	// (0x00042149) main_usb_pane_t3_ParamLimits

0x534c,	// (0x00042149) main_usb_pane_t3

0x535e,	// (0x0004215b) main_usb_pane_t4_ParamLimits

0x535e,	// (0x0004215b) main_usb_pane_t4

0x5370,	// (0x0004216d) main_usb_pane_t5_ParamLimits

0x5370,	// (0x0004216d) main_usb_pane_t5

0x5382,	// (0x0004217f) main_usb_pane_t6_ParamLimits

0x5382,	// (0x0004217f) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004c3ad) main_usb_pane_t_ParamLimits

0x47dd,	// (0x000415da) aid_text_placing

0x47e9,	// (0x000415e6) main_location2_pane_t1_ParamLimits

0x47fd,	// (0x000415fa) main_location2_pane_t2_ParamLimits

0x4811,	// (0x0004160e) main_location2_pane_t3_ParamLimits

0x4825,	// (0x00041622) main_location2_pane_t4_ParamLimits

0x4825,	// (0x00041622) main_location2_pane_t4

0xf3cf,	// (0x0004c1cc) main_location2_pane_t_ParamLimits

0xa7a8,	// (0x000475a5) find_pinb_pane_g2_ParamLimits

0xa7a8,	// (0x000475a5) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004bf1c) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004bf1c) find_pinb_pane_g

0xa7b4,	// (0x000475b1) find_pinb_pane_t1_ParamLimits

0xa7c6,	// (0x000475c3) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004bf21) find_pinb_pane_t_ParamLimits

0xa503,	// (0x00047300) main_call3_pane

0x3e7a,	// (0x00040c77) cale_month_day_heading_pane_t1_ParamLimits

0x3f00,	// (0x00040cfd) cale_month_day_heading_pane_t2_ParamLimits

0x3f91,	// (0x00040d8e) cale_month_day_heading_pane_t3_ParamLimits

0x4022,	// (0x00040e1f) cale_month_day_heading_pane_t4_ParamLimits

0x40b3,	// (0x00040eb0) cale_month_day_heading_pane_t5_ParamLimits

0x4144,	// (0x00040f41) cale_month_day_heading_pane_t6_ParamLimits

0x41d5,	// (0x00040fd2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c0a3) cale_month_day_heading_pane_t_ParamLimits

0xad52,	// (0x00047b4f) smil_status_volume_pane

0x4ee0,	// (0x00041cdd) postcard_address_pane_ParamLimits

0x4ee0,	// (0x00041cdd) postcard_address_pane

0x4eec,	// (0x00041ce9) postcard_message_pane_ParamLimits

0x4eec,	// (0x00041ce9) postcard_message_pane

0x52e7,	// (0x000420e4) call2_cli_visual_pane_t1_ParamLimits

0x52e7,	// (0x000420e4) call2_cli_visual_pane_t1

0x5915,	// (0x00042712) postcard_message_pane_t1_ParamLimits

0x5915,	// (0x00042712) postcard_message_pane_t1

0x58fe,	// (0x000426fb) postcard_address_pane_t1_ParamLimits

0x58fe,	// (0x000426fb) postcard_address_pane_t1

0x58ef,	// (0x000426ec) popup_call3_audio_in_window_ParamLimits

0x58ef,	// (0x000426ec) popup_call3_audio_in_window

0x57d3,	// (0x000425d0) bg_popup_call3_in_pane_ParamLimits

0x57d3,	// (0x000425d0) bg_popup_call3_in_pane

0x5835,	// (0x00042632) popup_call3_audio_in_window_g1_ParamLimits

0x5835,	// (0x00042632) popup_call3_audio_in_window_g1

0x584d,	// (0x0004264a) popup_call3_audio_in_window_g2_ParamLimits

0x584d,	// (0x0004264a) popup_call3_audio_in_window_g2

0x5865,	// (0x00042662) popup_call3_audio_in_window_g3_ParamLimits

0x5865,	// (0x00042662) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004c40f) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004c40f) popup_call3_audio_in_window_g

0x588d,	// (0x0004268a) popup_call3_audio_in_window_t1_ParamLimits

0x588d,	// (0x0004268a) popup_call3_audio_in_window_t1

0x58b5,	// (0x000426b2) popup_call3_audio_in_window_t2_ParamLimits

0x58b5,	// (0x000426b2) popup_call3_audio_in_window_t2

0x58dd,	// (0x000426da) popup_call3_audio_in_window_t3_ParamLimits

0x58dd,	// (0x000426da) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004c418) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004c418) popup_call3_audio_in_window_t

0xa9f6,	// (0x000477f3) bg_popup_call3_rect_pane

0xc671,	// (0x0004946e) bg_popup_call3_rect_pane_g1

0xa912,	// (0x0004770f) bg_popup_call3_rect_pane_g2

0xc679,	// (0x00049476) bg_popup_call3_rect_pane_g3

0xc681,	// (0x0004947e) bg_popup_call3_rect_pane_g4

0xc689,	// (0x00049486) bg_popup_call3_rect_pane_g5

0xc691,	// (0x0004948e) bg_popup_call3_rect_pane_g6

0xc699,	// (0x00049496) bg_popup_call3_rect_pane_g7

0x4b5d,	// (0x0004195a) mup_visualizer_osc_pane

0xb52f,	// (0x0004832c) mup_visualizer_spec_pane

0x57f3,	// (0x000425f0) call3_video_qcif_pane_ParamLimits

0x57f3,	// (0x000425f0) call3_video_qcif_pane

0x5805,	// (0x00042602) call3_video_qcif_uncrop_pane_ParamLimits

0x5805,	// (0x00042602) call3_video_qcif_uncrop_pane

0x5813,	// (0x00042610) call3_video_subqcif_pane_ParamLimits

0x5813,	// (0x00042610) call3_video_subqcif_pane

0x5825,	// (0x00042622) call3_video_subqcif_uncrop_pane_ParamLimits

0x5825,	// (0x00042622) call3_video_subqcif_uncrop_pane

0x587d,	// (0x0004267a) popup_call3_audio_in_window_g4_ParamLimits

0x587d,	// (0x0004267a) popup_call3_audio_in_window_g4

0x57a0,	// (0x0004259d) mup_spec_half_pane

0x57a9,	// (0x000425a6) mup_spec_half_pane_cp

0xc8d6,	// (0x000496d3) mup_osc_middle_pane

0xc8df,	// (0x000496dc) mup_visualizer_osc_pane_g1

0x5781,	// (0x0004257e) mup_spec_bar_pane_ParamLimits

0x5781,	// (0x0004257e) mup_spec_bar_pane

0xc8c3,	// (0x000496c0) mup_spec_bar_pane_g1

0xc8cd,	// (0x000496ca) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c403) mup_spec_bar_pane_g

0x2b0c,	// (0x0003f909) aid_cale_week_size_cell_pane_ParamLimits

0x2b21,	// (0x0003f91e) bg_cale_heading_pane_ParamLimits

0xa94f,	// (0x0004774c) bg_cale_pane_cp01_ParamLimits

0x2b43,	// (0x0003f940) cale_week_corner_pane_ParamLimits

0x2b5d,	// (0x0003f95a) cale_week_day_heading_pane_ParamLimits

0x2b7f,	// (0x0003f97c) cale_week_scroll_pane_g1_ParamLimits

0x2b9c,	// (0x0003f999) cale_week_scroll_pane_g2_ParamLimits

0x2baf,	// (0x0003f9ac) cale_week_scroll_pane_g3_ParamLimits

0x2bc2,	// (0x0003f9bf) cale_week_scroll_pane_g4_ParamLimits

0x2bd5,	// (0x0003f9d2) cale_week_scroll_pane_g5_ParamLimits

0x2be8,	// (0x0003f9e5) cale_week_scroll_pane_g6_ParamLimits

0x2bfb,	// (0x0003f9f8) cale_week_scroll_pane_g7_ParamLimits

0x2c0e,	// (0x0003fa0b) cale_week_scroll_pane_g8_ParamLimits

0x2c23,	// (0x0003fa20) cale_week_scroll_pane_g9_ParamLimits

0x2c36,	// (0x0003fa33) cale_week_scroll_pane_g10_ParamLimits

0x2c49,	// (0x0003fa46) cale_week_scroll_pane_g11_ParamLimits

0x2c5c,	// (0x0003fa59) cale_week_scroll_pane_g12_ParamLimits

0x2c73,	// (0x0003fa70) cale_week_scroll_pane_g13_ParamLimits

0x2c8e,	// (0x0003fa8b) cale_week_scroll_pane_g14_ParamLimits

0x2ca9,	// (0x0003faa6) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004bfad) cale_week_scroll_pane_g_ParamLimits

0x2cd9,	// (0x0003fad6) cale_week_time_pane_ParamLimits

0x2cee,	// (0x0003faeb) grid_cale_week_pane_ParamLimits

0xa96c,	// (0x00047769) listscroll_cale_week_pane_t1

0xa97e,	// (0x0004777b) scroll_pane_cp08_ParamLimits

0x398f,	// (0x0004078c) cale_month_corner_pane_ParamLimits

0xad28,	// (0x00047b25) cale_month_pane_t1

0x3e17,	// (0x00040c14) cale_month_week_pane_ParamLimits

0xb17f,	// (0x00047f7c) popup_call_status_window_g1_ParamLimits

0x4610,	// (0x0004140d) popup_call_status_window_g2_ParamLimits

0x461c,	// (0x00041419) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c153) popup_call_status_window_g_ParamLimits

0xb0cc,	// (0x00047ec9) aid_call2_pane

0x110e,	// (0x0003df0b) msg_header_pane_g1

0x4ee0,	// (0x00041cdd) postcard_address2_pane_ParamLimits

0x4ee0,	// (0x00041cdd) postcard_address2_pane

0x4eec,	// (0x00041ce9) postcard_message2_pane_ParamLimits

0x4eec,	// (0x00041ce9) postcard_message2_pane

0x5719,	// (0x00042516) message2_row_pane_ParamLimits

0x5719,	// (0x00042516) message2_row_pane

0x5734,	// (0x00042531) address2_row_pane_ParamLimits

0x5734,	// (0x00042531) address2_row_pane

0xc891,	// (0x0004968e) postcard_message2_row_pane_g1

0xc899,	// (0x00049696) postcard_message2_row_pane_t1

0xc891,	// (0x0004968e) address2_row_pane_g1

0xc899,	// (0x00049696) address2_row_pane_t1

0x3056,	// (0x0003fe53) aid_size_cell_vorec

0xa503,	// (0x00047300) main_rss_pane

0x5747,	// (0x00042544) rss_list_single_pane_ParamLimits

0x5747,	// (0x00042544) rss_list_single_pane

0xc8a7,	// (0x000496a4) rss_list_single_pane_t1

0xc8b5,	// (0x000496b2) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004c3fe) rss_list_single_pane_t

0xa503,	// (0x00047300) main_camera2_pane

0xa503,	// (0x00047300) main_video2_pane

0x5979,	// (0x00042776) cams_zoom_pane_cp2_ParamLimits

0x5979,	// (0x00042776) cams_zoom_pane_cp2

0x5985,	// (0x00042782) image2_vga_pane_ParamLimits

0x5985,	// (0x00042782) image2_vga_pane

0x5994,	// (0x00042791) main_camera2_pane_g1_ParamLimits

0x5994,	// (0x00042791) main_camera2_pane_g1

0x59a0,	// (0x0004279d) main_camera2_pane_g2_ParamLimits

0x59a0,	// (0x0004279d) main_camera2_pane_g2

0x59ac,	// (0x000427a9) main_camera2_pane_g3_ParamLimits

0x59ac,	// (0x000427a9) main_camera2_pane_g3

0x59b8,	// (0x000427b5) main_camera2_pane_g4_ParamLimits

0x59b8,	// (0x000427b5) main_camera2_pane_g4

0x59c4,	// (0x000427c1) main_camera2_pane_g5_ParamLimits

0x59c4,	// (0x000427c1) main_camera2_pane_g5

0x59d0,	// (0x000427cd) main_camera2_pane_g6_ParamLimits

0x59d0,	// (0x000427cd) main_camera2_pane_g6

0x59dc,	// (0x000427d9) main_camera2_pane_g7_ParamLimits

0x59dc,	// (0x000427d9) main_camera2_pane_g7

0x59e8,	// (0x000427e5) main_camera2_pane_g8_ParamLimits

0x59e8,	// (0x000427e5) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004c41f) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004c41f) main_camera2_pane_g

0x5a00,	// (0x000427fd) main_camera2_pane_t1_ParamLimits

0x5a00,	// (0x000427fd) main_camera2_pane_t1

0x5a12,	// (0x0004280f) main_camera2_pane_t2_ParamLimits

0x5a12,	// (0x0004280f) main_camera2_pane_t2

0x5a24,	// (0x00042821) main_camera2_pane_t3_ParamLimits

0x5a24,	// (0x00042821) main_camera2_pane_t3

0x5a36,	// (0x00042833) main_camera2_pane_t4_ParamLimits

0x5a36,	// (0x00042833) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004c432) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004c432) main_camera2_pane_t

0x5a98,	// (0x00042895) cams_zoom_pane_cp4_ParamLimits

0x5a98,	// (0x00042895) cams_zoom_pane_cp4

0x5aa8,	// (0x000428a5) image2_cif_pane_ParamLimits

0x5aa8,	// (0x000428a5) image2_cif_pane

0x5abd,	// (0x000428ba) image2_subqcif_pane_ParamLimits

0x5abd,	// (0x000428ba) image2_subqcif_pane

0x5acc,	// (0x000428c9) main_video2_pane_g1_ParamLimits

0x5acc,	// (0x000428c9) main_video2_pane_g1

0x5ade,	// (0x000428db) main_video2_pane_g2_ParamLimits

0x5ade,	// (0x000428db) main_video2_pane_g2

0x5aee,	// (0x000428eb) main_video2_pane_g3_ParamLimits

0x5aee,	// (0x000428eb) main_video2_pane_g3

0x5afe,	// (0x000428fb) main_video2_pane_g4_ParamLimits

0x5afe,	// (0x000428fb) main_video2_pane_g4

0x5b0e,	// (0x0004290b) main_video2_pane_g5_ParamLimits

0x5b0e,	// (0x0004290b) main_video2_pane_g5

0x5b1e,	// (0x0004291b) main_video2_pane_g6_ParamLimits

0x5b1e,	// (0x0004291b) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004c441) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004c441) main_video2_pane_g

0x5b30,	// (0x0004292d) main_video2_pane_t1_ParamLimits

0x5b30,	// (0x0004292d) main_video2_pane_t1

0x5b4a,	// (0x00042947) main_video2_pane_t2_ParamLimits

0x5b4a,	// (0x00042947) main_video2_pane_t2

0x5b70,	// (0x0004296d) main_video2_pane_t3_ParamLimits

0x5b70,	// (0x0004296d) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004c44e) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004c44e) main_video2_pane_t

0x5439,	// (0x00042236) call_muted_g2

0x0001,

0xf5f3,	// (0x0004c3f0) call_muted_g

0xa503,	// (0x00047300) main_mup2_pane

0xc91f,	// (0x0004971c) main_mup2_pane_g1_ParamLimits

0xc91f,	// (0x0004971c) main_mup2_pane_g1

0x5b96,	// (0x00042993) main_mup2_pane_g2_ParamLimits

0x5b96,	// (0x00042993) main_mup2_pane_g2

0x5e18,	// (0x00042c15) main_mup_pane_g13_cp1

0x5e20,	// (0x00042c1d) mup_volume_pane_cp1

0x5bb6,	// (0x000429b3) main_mup2_pane_g4_ParamLimits

0x5bb6,	// (0x000429b3) main_mup2_pane_g4

0x5bcb,	// (0x000429c8) main_mup2_pane_g5_ParamLimits

0x5bcb,	// (0x000429c8) main_mup2_pane_g5

0x5be0,	// (0x000429dd) main_mup2_pane_g6_ParamLimits

0x5be0,	// (0x000429dd) main_mup2_pane_g6

0x5bf5,	// (0x000429f2) main_mup2_pane_g7_ParamLimits

0x5bf5,	// (0x000429f2) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004c455) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004c455) main_mup2_pane_g

0x5c11,	// (0x00042a0e) main_mup2_pane_t1_ParamLimits

0x5c11,	// (0x00042a0e) main_mup2_pane_t1

0x5c28,	// (0x00042a25) main_mup2_pane_t2_ParamLimits

0x5c28,	// (0x00042a25) main_mup2_pane_t2

0x5c3f,	// (0x00042a3c) main_mup2_pane_t3_ParamLimits

0x5c3f,	// (0x00042a3c) main_mup2_pane_t3

0x5c56,	// (0x00042a53) main_mup2_pane_t4_ParamLimits

0x5c56,	// (0x00042a53) main_mup2_pane_t4

0x5c70,	// (0x00042a6d) main_mup2_pane_t5_ParamLimits

0x5c70,	// (0x00042a6d) main_mup2_pane_t5

0x5c8a,	// (0x00042a87) main_mup2_pane_t6_ParamLimits

0x5c8a,	// (0x00042a87) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004c464) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004c464) main_mup2_pane_t

0x5cc2,	// (0x00042abf) mup2_visualizer_pane_ParamLimits

0x5cc2,	// (0x00042abf) mup2_visualizer_pane

0x5cf8,	// (0x00042af5) mup_progress_pane_cp_ParamLimits

0x5cf8,	// (0x00042af5) mup_progress_pane_cp

0x5e03,	// (0x00042c00) mup_volume_pane_cp_ParamLimits

0x5e03,	// (0x00042c00) mup_volume_pane_cp

0x5d0f,	// (0x00042b0c) mup2_visualizer_pane_g1_ParamLimits

0x5d0f,	// (0x00042b0c) mup2_visualizer_pane_g1

0xc92b,	// (0x00049728) mup2_visualizer_pane_g2_ParamLimits

0xc92b,	// (0x00049728) mup2_visualizer_pane_g2

0x5d24,	// (0x00042b21) mup2_visualizer_pane_g3_ParamLimits

0x5d24,	// (0x00042b21) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004c471) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004c471) mup2_visualizer_pane_g

0xb756,	// (0x00048553) aid_size_cell_fmradio

0x554f,	// (0x0004234c) aid_height_parent_landcape

0xab86,	// (0x00047983) wml_content_pane_cp

0xab8e,	// (0x0004798b) wml_tabs_pane

0xab97,	// (0x00047994) popup_wml_miniature_window

0xab9f,	// (0x0004799c) scroll_pane_cp021

0xabb3,	// (0x000479b0) wml_content_pane_comp8

0xa503,	// (0x00047300) bg_popup_sub_pane_cp05

0xc949,	// (0x00049746) popup_wml_miniature_window_g1

0xc951,	// (0x0004974e) wml_miniature_view_pane

0x5d32,	// (0x00042b2f) aid_size_wml_view

0x5d3a,	// (0x00042b37) wml_miniature_view_pane_g1

0x5d43,	// (0x00042b40) wml_miniature_view_pane_g2

0x5d4c,	// (0x00042b49) wml_miniature_view_pane_g3

0x5d54,	// (0x00042b51) wml_miniature_view_pane_g4

0x5d5c,	// (0x00042b59) wml_miniature_view_pane_g5

0x5d64,	// (0x00042b61) wml_miniature_view_pane_g6

0x5d6c,	// (0x00042b69) wml_miniature_view_pane_g7

0x5d74,	// (0x00042b71) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004c478) wml_miniature_view_pane_g

0xc91f,	// (0x0004971c) background_graphic_ParamLimits

0xc91f,	// (0x0004971c) background_graphic

0xc959,	// (0x00049756) wml_tabs_2_pane

0xc962,	// (0x0004975f) wml_tabs_3_pane_ParamLimits

0xc962,	// (0x0004975f) wml_tabs_3_pane

0xc974,	// (0x00049771) wml_tabs_4_pane_ParamLimits

0xc974,	// (0x00049771) wml_tabs_4_pane

0xc98a,	// (0x00049787) wml_tabs_5_pane_ParamLimits

0xc98a,	// (0x00049787) wml_tabs_5_pane

0xc9a4,	// (0x000497a1) wml_tabs_pane_g2_ParamLimits

0xc9a4,	// (0x000497a1) wml_tabs_pane_g2

0xc9b8,	// (0x000497b5) wml_tabs_pane_g3_ParamLimits

0xc9b8,	// (0x000497b5) wml_tabs_pane_g3

0x5d7c,	// (0x00042b79) wml_tabs_2_active_pane_ParamLimits

0x5d7c,	// (0x00042b79) wml_tabs_2_active_pane

0x5d8c,	// (0x00042b89) wml_tabs_2_passive_pane_ParamLimits

0x5d8c,	// (0x00042b89) wml_tabs_2_passive_pane

0x5d9c,	// (0x00042b99) wml_tabs_3_active_pane_cp_ParamLimits

0x5d9c,	// (0x00042b99) wml_tabs_3_active_pane_cp

0x5dad,	// (0x00042baa) wml_tabs_3_passive_pane_ParamLimits

0x5dad,	// (0x00042baa) wml_tabs_3_passive_pane

0x5dbe,	// (0x00042bbb) wml_tabs_3_passive_pane_cp_ParamLimits

0x5dbe,	// (0x00042bbb) wml_tabs_3_passive_pane_cp

0x5dcf,	// (0x00042bcc) tabs_4_active_pane

0x5dd7,	// (0x00042bd4) tabs_4_passive_pane

0x5ddf,	// (0x00042bdc) tabs_4_passive_pane_cp

0x5de7,	// (0x00042be4) tabs_4_passive_pane_cp2

0x5314,	// (0x00042111) aid_height_text

0x4b2a,	// (0x00041927) mup_volume_cont_pane_ParamLimits

0x4b2a,	// (0x00041927) mup_volume_cont_pane

0x264a,	// (0x0003f447) aid_size_cell_pinb

0x2654,	// (0x0003f451) aid_size_list_pinb

0x5ce1,	// (0x00042ade) mup2_volume_cont_pane_ParamLimits

0x5ce1,	// (0x00042ade) mup2_volume_cont_pane

0x5def,	// (0x00042bec) mup2_volume_cont_pane_g1_ParamLimits

0x5def,	// (0x00042bec) mup2_volume_cont_pane_g1

0x2287,	// (0x0003f084) aid_size_cell_touch_ParamLimits

0x2287,	// (0x0003f084) aid_size_cell_touch

0x2530,	// (0x0003f32d) touch_pane_ParamLimits

0x2530,	// (0x0003f32d) touch_pane

0xa0e6,	// (0x00046ee3) main_rss2_pane

0xc9d5,	// (0x000497d2) listscroll_rss2_pane

0xc9de,	// (0x000497db) rss2_navigation_pane

0xc9e6,	// (0x000497e3) list_rss2_pane

0xb237,	// (0x00048034) scroll_pane_cp22

0xc9ee,	// (0x000497eb) rss2_navigation_pane_g1

0xc9f7,	// (0x000497f4) rss2_navigation_pane_g2

0xc9ff,	// (0x000497fc) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004c489) rss2_navigation_pane_g

0xca07,	// (0x00049804) rss2_navigation_pane_t1

0x5e28,	// (0x00042c25) rss2_list_single_pane_ParamLimits

0x5e28,	// (0x00042c25) rss2_list_single_pane

0xca15,	// (0x00049812) rss2_list_single_pane_t2

0xca23,	// (0x00049820) rss2_list_single_pane_t3_ParamLimits

0xca23,	// (0x00049820) rss2_list_single_pane_t3

0xca40,	// (0x0004983d) rss2_list_single_pane_t4

0x447d,	// (0x0004127a) smil_status_pane_g1

0xb165,	// (0x00047f62) main_image2_pane_ParamLimits

0xb165,	// (0x00047f62) main_image2_pane

0x59f4,	// (0x000427f1) main_camera2_pane_g9_ParamLimits

0x59f4,	// (0x000427f1) main_camera2_pane_g9

0x5a48,	// (0x00042845) main_camera2_pane_t5_ParamLimits

0x5a48,	// (0x00042845) main_camera2_pane_t5

0x5a5a,	// (0x00042857) main_camera2_pane_t6_ParamLimits

0x5a5a,	// (0x00042857) main_camera2_pane_t6

0x5e59,	// (0x00042c56) main_image2_pane_g1_ParamLimits

0x5e59,	// (0x00042c56) main_image2_pane_g1

0x50b4,	// (0x00041eb1) smil2_video_pane_ParamLimits

0x50b4,	// (0x00041eb1) smil2_video_pane

0x0e8e,	// (0x0003dc8b) aid_zoom_text_primary_cp

0x24d9,	// (0x0003f2d6) popup_preview_fixed_window

0xaaef,	// (0x000478ec) im_reading_pane_g1

0x593e,	// (0x0004273b) cams2_bc_adjust_pane_cp_ParamLimits

0x593e,	// (0x0004273b) cams2_bc_adjust_pane_cp

0x5a8a,	// (0x00042887) cams2_bc_adjust_pane_ParamLimits

0x5a8a,	// (0x00042887) cams2_bc_adjust_pane

0x5e65,	// (0x00042c62) cams2_bc_adjust_pane_g1

0x5e6d,	// (0x00042c6a) cams2_slider_pane

0x5e76,	// (0x00042c73) cams2_slider_pane_g1

0x5e7f,	// (0x00042c7c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004c490) cams2_slider_pane_g

0x275a,	// (0x0003f557) calc_display_pane_ParamLimits

0x2778,	// (0x0003f575) calc_paper_pane_ParamLimits

0x2794,	// (0x0003f591) grid_calc_pane_ParamLimits

0x467e,	// (0x0004147b) popup_clock_digital_window_t1_ParamLimits

0xb6f3,	// (0x000484f0) main_image_pane_t1

0x2740,	// (0x0003f53d) aid_size_cell_calc_ParamLimits

0x2740,	// (0x0003f53d) aid_size_cell_calc

0x5589,	// (0x00042386) popup_blid_sat_info2_window_ParamLimits

0x5589,	// (0x00042386) popup_blid_sat_info2_window

0xca56,	// (0x00049853) aid_size_cell_blid

0xca5e,	// (0x0004985b) bg_popup_window_pane_cp07

0xca81,	// (0x0004987e) grid_popup_blid_pane

0xca8b,	// (0x00049888) heading_pane_cp05_ParamLimits

0xca8b,	// (0x00049888) heading_pane_cp05

0xcb55,	// (0x00049952) cell_popup_blid_pane_ParamLimits

0xcb55,	// (0x00049952) cell_popup_blid_pane

0xcb79,	// (0x00049976) cell_popup_blid_pane_g1

0xcb81,	// (0x0004997e) cell_popup_blid_pane_t1

0x5ca7,	// (0x00042aa4) mup2_indicator_pane_ParamLimits

0x5ca7,	// (0x00042aa4) mup2_indicator_pane

0xa9f6,	// (0x000477f3) mup2_visualizer_osc_pane

0xc937,	// (0x00049734) mup2_visualizer_spec_pane_ParamLimits

0xc937,	// (0x00049734) mup2_visualizer_spec_pane

0x5e99,	// (0x00042c96) mup2_spec_half_pane

0x5ea2,	// (0x00042c9f) mup2_spec_half_pane_cp

0x5eac,	// (0x00042ca9) mup2_spec_bar_pane_ParamLimits

0x5eac,	// (0x00042ca9) mup2_spec_bar_pane

0xc8c3,	// (0x000496c0) mup2_spec_bar_pane_g1

0xc8cd,	// (0x000496ca) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c403) mup2_spec_bar_pane_g

0x5ecb,	// (0x00042cc8) mup2_osc_middle_pane

0xc8df,	// (0x000496dc) mup2_visualizer_osc_pane_g1

0xa110,	// (0x00046f0d) popup_number_entry_window_t1_ParamLimits

0xa123,	// (0x00046f20) popup_number_entry_window_t2_ParamLimits

0xa135,	// (0x00046f32) popup_number_entry_window_t3_ParamLimits

0x2587,	// (0x0003f384) popup_number_entry_window_t5_ParamLimits

0x2587,	// (0x0003f384) popup_number_entry_window_t5

0xf0ca,	// (0x0004bec7) popup_number_entry_window_t_ParamLimits

0xa147,	// (0x00046f44) text_title_cp2_ParamLimits

0x4da8,	// (0x00041ba5) aid_hotspot_pointer_text2_pane

0x4e42,	// (0x00041c3f) main_viewer_pane_g9_ParamLimits

0x4e42,	// (0x00041c3f) main_viewer_pane_g9

0xad28,	// (0x00047b25) cale_month_pane_t1_ParamLimits

0xad65,	// (0x00047b62) bg_cale_pane_ParamLimits

0xad7d,	// (0x00047b7a) list_cale_pane_ParamLimits

0xad8e,	// (0x00047b8b) listscroll_cale_day_pane_t1

0xada0,	// (0x00047b9d) scroll_pane_cp09_ParamLimits

0x4b65,	// (0x00041962) main_mup_eq_pane_t1_ParamLimits

0x4b65,	// (0x00041962) main_mup_eq_pane_t1

0x4b7f,	// (0x0004197c) main_mup_eq_pane_t2_ParamLimits

0x4b7f,	// (0x0004197c) main_mup_eq_pane_t2

0x4b99,	// (0x00041996) main_mup_eq_pane_t3_ParamLimits

0x4b99,	// (0x00041996) main_mup_eq_pane_t3

0x4bb1,	// (0x000419ae) main_mup_eq_pane_t4_ParamLimits

0x4bb1,	// (0x000419ae) main_mup_eq_pane_t4

0x4bc9,	// (0x000419c6) main_mup_eq_pane_t5_ParamLimits

0x4bc9,	// (0x000419c6) main_mup_eq_pane_t5

0x4be1,	// (0x000419de) main_mup_eq_pane_t6_ParamLimits

0x4be1,	// (0x000419de) main_mup_eq_pane_t6

0x4bf5,	// (0x000419f2) main_mup_eq_pane_t7_ParamLimits

0x4bf5,	// (0x000419f2) main_mup_eq_pane_t7

0x4c09,	// (0x00041a06) main_mup_eq_pane_t8_ParamLimits

0x4c09,	// (0x00041a06) main_mup_eq_pane_t8

0x4c1f,	// (0x00041a1c) main_mup_eq_pane_t9_ParamLimits

0x4c1f,	// (0x00041a1c) main_mup_eq_pane_t9

0x4c37,	// (0x00041a34) main_mup_eq_pane_t10_ParamLimits

0x4c37,	// (0x00041a34) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c252) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c252) main_mup_eq_pane_t

0x4cf4,	// (0x00041af1) mup_equalizer_pane_cp5_ParamLimits

0x4d0a,	// (0x00041b07) mup_equalizer_pane_cp6_ParamLimits

0x4d22,	// (0x00041b1f) mup_equalizer_pane_cp7_ParamLimits

0xa0e6,	// (0x00046ee3) main_gallery_pane

0xc8e8,	// (0x000496e5) smil2_volume_pane

0xc8f0,	// (0x000496ed) smil_status_volume_pane_g1_ParamLimits

0xc903,	// (0x00049700) smil_status_volume_pane_g2_ParamLimits

0x57b1,	// (0x000425ae) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004c408) smil_status_volume_pane_g_ParamLimits

0xca5e,	// (0x0004985b) bg_popup_window_pane_cp07_ParamLimits

0xca6c,	// (0x00049869) blid_firmament_pane

0x5ed4,	// (0x00042cd1) aid_size_cell_gallery_ParamLimits

0x5ed4,	// (0x00042cd1) aid_size_cell_gallery

0x5ee2,	// (0x00042cdf) grid_gallery_pane_ParamLimits

0x5ee2,	// (0x00042cdf) grid_gallery_pane

0x5ef2,	// (0x00042cef) cell_gallery_pane_ParamLimits

0x5ef2,	// (0x00042cef) cell_gallery_pane

0xcb8f,	// (0x0004998c) bg_cell_gallery_focus_pane_ParamLimits

0xcb8f,	// (0x0004998c) bg_cell_gallery_focus_pane

0xcba1,	// (0x0004999e) cell_gallery_pane_g1_ParamLimits

0xcba1,	// (0x0004999e) cell_gallery_pane_g1

0x5f40,	// (0x00042d3d) cell_gallery_pane_g2_ParamLimits

0x5f40,	// (0x00042d3d) cell_gallery_pane_g2

0x5f4d,	// (0x00042d4a) cell_gallery_pane_g3_ParamLimits

0x5f4d,	// (0x00042d4a) cell_gallery_pane_g3

0xcbad,	// (0x000499aa) cell_gallery_pane_g4_ParamLimits

0xcbad,	// (0x000499aa) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004c4b6) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004c4b6) cell_gallery_pane_g

0xcbb9,	// (0x000499b6) bg_cell_gallery_focus_pane_g1

0xcbc1,	// (0x000499be) bg_cell_gallery_focus_pane_g2

0xcbc9,	// (0x000499c6) bg_cell_gallery_focus_pane_g3

0xcbd1,	// (0x000499ce) bg_cell_gallery_focus_pane_g4

0xcbd9,	// (0x000499d6) bg_cell_gallery_focus_pane_g5

0xcbe1,	// (0x000499de) bg_cell_gallery_focus_pane_g6

0xcbe9,	// (0x000499e6) bg_cell_gallery_focus_pane_g7

0xcbf1,	// (0x000499ee) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004c4bf) bg_cell_gallery_focus_pane_g

0xcbf9,	// (0x000499f6) aid_firma_cardinal

0xcc0d,	// (0x00049a0a) blid_firmament_pane_t1

0xcc24,	// (0x00049a21) blid_firmament_pane_t2

0xcc3b,	// (0x00049a38) blid_firmament_pane_t3

0xcc52,	// (0x00049a4f) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004c4d0) blid_firmament_pane_t

0xcc69,	// (0x00049a66) blid_sat_info_pane

0xcc79,	// (0x00049a76) blid_sat_info_pane_g1

0xcc79,	// (0x00049a76) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d9) blid_sat_info_pane_g

0xcc83,	// (0x00049a80) blid_sat_info_pane_t1

0xcc91,	// (0x00049a8e) smil2_volume_content_pane

0xcc9a,	// (0x00049a97) smil2_volume_pane_g1

0xc916,	// (0x00049713) smil2_volume_content_pane_g1

0xcca2,	// (0x00049a9f) smil2_volume_content_pane_g2

0xccab,	// (0x00049aa8) smil2_volume_content_pane_g3

0xccb4,	// (0x00049ab1) smil2_volume_content_pane_g4

0xccbd,	// (0x00049aba) smil2_volume_content_pane_g5

0xccc6,	// (0x00049ac3) smil2_volume_content_pane_g6

0xcccf,	// (0x00049acc) smil2_volume_content_pane_g7

0xccd8,	// (0x00049ad5) smil2_volume_content_pane_g8

0xcce1,	// (0x00049ade) smil2_volume_content_pane_g9

0xccea,	// (0x00049ae7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004c4de) smil2_volume_content_pane_g

0x2d6f,	// (0x0003fb6c) cale_week_day_heading_pane_t1_ParamLimits

0x2daa,	// (0x0003fba7) cale_week_day_heading_pane_t2_ParamLimits

0x2de5,	// (0x0003fbe2) cale_week_day_heading_pane_t3_ParamLimits

0x2e20,	// (0x0003fc1d) cale_week_day_heading_pane_t4_ParamLimits

0x2e5b,	// (0x0003fc58) cale_week_day_heading_pane_t5_ParamLimits

0x2e96,	// (0x0003fc93) cale_week_day_heading_pane_t6_ParamLimits

0x2ed1,	// (0x0003fcce) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004bfce) cale_week_day_heading_pane_t_ParamLimits

0xa99b,	// (0x00047798) bg_cale_side_pane_ParamLimits

0x2f0c,	// (0x0003fd09) cale_week_time_pane_t1_ParamLimits

0x2f26,	// (0x0003fd23) cale_week_time_pane_t2_ParamLimits

0x2f40,	// (0x0003fd3d) cale_week_time_pane_t3_ParamLimits

0x2f5a,	// (0x0003fd57) cale_week_time_pane_t4_ParamLimits

0x2f74,	// (0x0003fd71) cale_week_time_pane_t5_ParamLimits

0x2f8e,	// (0x0003fd8b) cale_week_time_pane_t6_ParamLimits

0x2fae,	// (0x0003fdab) cale_week_time_pane_t7_ParamLimits

0x2fd0,	// (0x0003fdcd) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004bfdd) cale_week_time_pane_t_ParamLimits

0x2ff4,	// (0x0003fdf1) cell_cale_week_pane_g2_ParamLimits

0xa99b,	// (0x00047798) bg_cale_side_pane_cp01_ParamLimits

0x427e,	// (0x0004107b) cale_month_week_pane_t1_ParamLimits

0x4297,	// (0x00041094) cale_month_week_pane_t2_ParamLimits

0x42b0,	// (0x000410ad) cale_month_week_pane_t3_ParamLimits

0x42c9,	// (0x000410c6) cale_month_week_pane_t4_ParamLimits

0x42e2,	// (0x000410df) cale_month_week_pane_t5_ParamLimits

0x4303,	// (0x00041100) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c0b2) cale_month_week_pane_t_ParamLimits

0x4446,	// (0x00041243) cell_cale_month_pane_g1_ParamLimits

0xa0e6,	// (0x00046ee3) main_cale_event_viewer_pane

0xa0e6,	// (0x00046ee3) listscroll_cale_event_viewer_pane

0xccf3,	// (0x00049af0) list_cale_ev_pane

0xccfb,	// (0x00049af8) scroll_pane_cp023

0xcd07,	// (0x00049b04) field_cale_ev_pane_ParamLimits

0xcd07,	// (0x00049b04) field_cale_ev_pane

0xcd25,	// (0x00049b22) field_cale_ev_content_pane_ParamLimits

0xcd25,	// (0x00049b22) field_cale_ev_content_pane

0xcd31,	// (0x00049b2e) field_cale_ev_pane_g1_ParamLimits

0xcd31,	// (0x00049b2e) field_cale_ev_pane_g1

0xcd3d,	// (0x00049b3a) field_cale_ev_pane_g2_ParamLimits

0xcd3d,	// (0x00049b3a) field_cale_ev_pane_g2

0xcd55,	// (0x00049b52) field_cale_ev_pane_g3_ParamLimits

0xcd55,	// (0x00049b52) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004c4f3) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004c4f3) field_cale_ev_pane_g

0xcd6d,	// (0x00049b6a) field_cale_ev_pane_t1_ParamLimits

0xcd6d,	// (0x00049b6a) field_cale_ev_pane_t1

0xcd84,	// (0x00049b81) field_cale_ev_content_pane_t1_ParamLimits

0xcd84,	// (0x00049b81) field_cale_ev_content_pane_t1

0xb5d9,	// (0x000483d6) bg_button_pane_cp01

0x2afc,	// (0x0003f8f9) listscroll_cale_week_pane_ParamLimits

0xa946,	// (0x00047743) popup_toolbar_window_cp01

0xa96c,	// (0x00047769) listscroll_cale_week_pane_t1_ParamLimits

0x2afc,	// (0x0003f8f9) listscroll_cale_day_pane_ParamLimits

0xa946,	// (0x00047743) popup_toolbar_window_cp02

0xad8e,	// (0x00047b8b) listscroll_cale_day_pane_t1_ParamLimits

0x2afc,	// (0x0003f8f9) main_cale_month_pane_ParamLimits

0x5690,	// (0x0004248d) popup_toolbar_window_cp03_ParamLimits

0x5690,	// (0x0004248d) popup_toolbar_window_cp03

0x4fca,	// (0x00041dc7) main_image_pane_g2_ParamLimits

0x4fca,	// (0x00041dc7) main_image_pane_g2

0x4fd6,	// (0x00041dd3) main_image_pane_g3_ParamLimits

0x4fd6,	// (0x00041dd3) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004c2e4) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004c2e4) main_image_pane_g

0xb6f3,	// (0x000484f0) main_image_pane_t1_ParamLimits

0x4fe2,	// (0x00041ddf) main_image_pane_t2_ParamLimits

0x4fe2,	// (0x00041ddf) main_image_pane_t2

0x4ff4,	// (0x00041df1) main_image_pane_t3_ParamLimits

0x4ff4,	// (0x00041df1) main_image_pane_t3

0x5006,	// (0x00041e03) main_image_pane_t4_ParamLimits

0x5006,	// (0x00041e03) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004c2eb) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004c2eb) main_image_pane_t

0x5018,	// (0x00041e15) popup_image_details_window_cp01

0x5022,	// (0x00041e1f) popup_toobar_trans_pane_cp01_ParamLimits

0x5022,	// (0x00041e1f) popup_toobar_trans_pane_cp01

0x55e0,	// (0x000423dd) popup_image_details_window_ParamLimits

0x55e0,	// (0x000423dd) popup_image_details_window

0x55ee,	// (0x000423eb) popup_image_focus_window

0x5930,	// (0x0004272d) camera2_autofocus_pane_ParamLimits

0x5930,	// (0x0004272d) camera2_autofocus_pane

0xa0e6,	// (0x00046ee3) bg_popup_sub_pane_cp06

0xcda2,	// (0x00049b9f) popup_image_focus_window_g1

0xcdaa,	// (0x00049ba7) popup_image_focus_window_g2

0xcdb2,	// (0x00049baf) popup_image_focus_window_g3

0xcdba,	// (0x00049bb7) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004c4fa) popup_image_focus_window_g

0xcdc2,	// (0x00049bbf) popup_image_focus_window_t1

0xcdd0,	// (0x00049bcd) popup_image_focus_window_t2

0xcde0,	// (0x00049bdd) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004c503) popup_image_focus_window_t

0xcdee,	// (0x00049beb) camera2_autofocus_pane_g1

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp01

0xcdfc,	// (0x00049bf9) popup_image_details_window_g1

0xce0f,	// (0x00049c0c) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004c515) popup_image_details_window_g

0xce38,	// (0x00049c35) popup_image_details_window_t1

0xce4a,	// (0x00049c47) popup_image_details_window_t2

0xce63,	// (0x00049c60) popup_image_details_window_t3

0xce77,	// (0x00049c74) popup_image_details_window_t4

0xce92,	// (0x00049c8f) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004c51c) popup_image_details_window_t

0xa81d,	// (0x0004761a) bg_calc_paper_pane_ParamLimits

0xa0e6,	// (0x00046ee3) grid_highlight_pane_cp013

0x2891,	// (0x0003f68e) list_calc_pane_ParamLimits

0x28a3,	// (0x0003f6a0) scroll_pane_cp024

0xa831,	// (0x0004762e) bg_calc_display_pane_ParamLimits

0x28ab,	// (0x0003f6a8) calc_display_pane_t1_ParamLimits

0x28c0,	// (0x0003f6bd) calc_display_pane_t2_ParamLimits

0x28d5,	// (0x0003f6d2) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004bf4e) calc_display_pane_t_ParamLimits

0x29b1,	// (0x0003f7ae) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004bf6b) cell_calc_pane_g

0x29ba,	// (0x0003f7b7) cell_calc_pane_t1

0xa890,	// (0x0004768d) grid_highlight_pane_cp02_ParamLimits

0xa8a6,	// (0x000476a3) toolbar_button_pane_cp01_ParamLimits

0xa8a6,	// (0x000476a3) toolbar_button_pane_cp01

0xb738,	// (0x00048535) temp_image_control_pane_ParamLimits

0xb738,	// (0x00048535) temp_image_control_pane

0xb165,	// (0x00047f62) main_mp3_pane

0xceac,	// (0x00049ca9) temp_image_control_pane_g1_ParamLimits

0xceac,	// (0x00049ca9) temp_image_control_pane_g1

0xceba,	// (0x00049cb7) temp_image_control_pane_g2_ParamLimits

0xceba,	// (0x00049cb7) temp_image_control_pane_g2

0xcecc,	// (0x00049cc9) temp_image_control_pane_g3_ParamLimits

0xcecc,	// (0x00049cc9) temp_image_control_pane_g3

0x5f8a,	// (0x00042d87) temp_image_control_pane_g4_ParamLimits

0x5f8a,	// (0x00042d87) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004c527) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004c527) temp_image_control_pane_g

0xceac,	// (0x00049ca9) main_mp3_pane_g1

0x5f9b,	// (0x00042d98) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004c530) main_mp3_pane_g

0xcf0f,	// (0x00049d0c) main_mp3_pane_t1

0xa9fe,	// (0x000477fb) main_camera_pane_g8_ParamLimits

0xa9fe,	// (0x000477fb) main_camera_pane_g8

0x3281,	// (0x0004007e) main_video_pane_g7_ParamLimits

0x3281,	// (0x0004007e) main_video_pane_g7

0x5a78,	// (0x00042875) main_camera2_pane_t7_ParamLimits

0x5a78,	// (0x00042875) main_camera2_pane_t7

0xab46,	// (0x00047943) scroll_pane_cp025_ParamLimits

0xab46,	// (0x00047943) scroll_pane_cp025

0xab5a,	// (0x00047957) scroll_pane_cp026_ParamLimits

0xab5a,	// (0x00047957) scroll_pane_cp026

0xab69,	// (0x00047966) wml_content_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_touch_calib_pane

0x603f,	// (0x00042e3c) main_touch_calib_pane_g1

0x604b,	// (0x00042e48) main_touch_calib_pane_g2

0x6057,	// (0x00042e54) main_touch_calib_pane_g3

0x6063,	// (0x00042e60) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004c54e) main_touch_calib_pane_g

0x606f,	// (0x00042e6c) main_touch_calib_pane_t1

0x6088,	// (0x00042e85) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004c557) main_touch_calib_pane_t

0xb313,	// (0x00048110) mup_progress_pane_cp02

0xb348,	// (0x00048145) navi_pane_g1

0xb403,	// (0x00048200) navi_pane_mp_t3

0xb165,	// (0x00047f62) main_mp3_pane_ParamLimits

0x56cd,	// (0x000424ca) navi_pane_ParamLimits

0xceac,	// (0x00049ca9) main_mp3_pane_g1_ParamLimits

0x5f9b,	// (0x00042d98) main_mp3_pane_g2_ParamLimits

0x5fa7,	// (0x00042da4) main_mp3_pane_g3_ParamLimits

0x5fa7,	// (0x00042da4) main_mp3_pane_g3

0x5fb3,	// (0x00042db0) main_mp3_pane_g4_ParamLimits

0x5fb3,	// (0x00042db0) main_mp3_pane_g4

0xcedc,	// (0x00049cd9) main_mp3_pane_g5_ParamLimits

0xcedc,	// (0x00049cd9) main_mp3_pane_g5

0xceea,	// (0x00049ce7) main_mp3_pane_g6_ParamLimits

0xceea,	// (0x00049ce7) main_mp3_pane_g6

0xcef7,	// (0x00049cf4) main_mp3_pane_g7_ParamLimits

0xcef7,	// (0x00049cf4) main_mp3_pane_g7

0xcf03,	// (0x00049d00) main_mp3_pane_g8_ParamLimits

0xcf03,	// (0x00049d00) main_mp3_pane_g8

0xf733,	// (0x0004c530) main_mp3_pane_g_ParamLimits

0x5fbf,	// (0x00042dbc) main_mp3_pane_t2

0x5fcf,	// (0x00042dcc) main_mp3_pane_t3

0xcf1d,	// (0x00049d1a) main_mp3_pane_t4

0xcf2b,	// (0x00049d28) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004c541) main_mp3_pane_t

0xcf39,	// (0x00049d36) mup_progress_pane_cp01

0x0e8e,	// (0x0003dc8b) aid_zoom_text_secondary2

0xccf3,	// (0x00049af0) list_cale_ev2_pane

0xccfb,	// (0x00049af8) scroll_pane_cp023_ParamLimits

0x60e3,	// (0x00042ee0) field_cale_ev2_pane_ParamLimits

0x60e3,	// (0x00042ee0) field_cale_ev2_pane

0x1193,	// (0x0003df90) field_cale_ev2_pane_g1_ParamLimits

0x1193,	// (0x0003df90) field_cale_ev2_pane_g1

0x119f,	// (0x0003df9c) field_cale_ev2_pane_g2_ParamLimits

0x119f,	// (0x0003df9c) field_cale_ev2_pane_g2

0x11b7,	// (0x0003dfb4) field_cale_ev2_pane_g3_ParamLimits

0x11b7,	// (0x0003dfb4) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004c562) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004c562) field_cale_ev2_pane_g

0x11db,	// (0x0003dfd8) field_cale_ev2_pane_t1_ParamLimits

0x11db,	// (0x0003dfd8) field_cale_ev2_pane_t1

0x11f2,	// (0x0003dfef) field_cale_ev2_pane_t2_ParamLimits

0x11f2,	// (0x0003dfef) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004c56b) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004c56b) field_cale_ev2_pane_t

0x4eaa,	// (0x00041ca7) main_postcard_pane_g5_ParamLimits

0x4eaa,	// (0x00041ca7) main_postcard_pane_g5

0x4eb8,	// (0x00041cb5) main_postcard_pane_g6_ParamLimits

0x4eb8,	// (0x00041cb5) main_postcard_pane_g6

0x30cb,	// (0x0003fec8) camera2_autofocus_pane_cp_ParamLimits

0x30cb,	// (0x0003fec8) camera2_autofocus_pane_cp

0xb165,	// (0x00047f62) main_mup3_pane

0x610c,	// (0x00042f09) main_mup3_pane_g1_ParamLimits

0x610c,	// (0x00042f09) main_mup3_pane_g1

0x612d,	// (0x00042f2a) main_mup3_pane_g2_ParamLimits

0x612d,	// (0x00042f2a) main_mup3_pane_g2

0x61a5,	// (0x00042fa2) main_mup3_pane_g3_ParamLimits

0x61a5,	// (0x00042fa2) main_mup3_pane_g3

0x61e8,	// (0x00042fe5) main_mup3_pane_g4_ParamLimits

0x61e8,	// (0x00042fe5) main_mup3_pane_g4

0x622b,	// (0x00043028) main_mup3_pane_g5_ParamLimits

0x622b,	// (0x00043028) main_mup3_pane_g5

0x626e,	// (0x0004306b) main_mup3_pane_g6_ParamLimits

0x626e,	// (0x0004306b) main_mup3_pane_g6

0xcf61,	// (0x00049d5e) main_mup3_pane_g7_ParamLimits

0xcf61,	// (0x00049d5e) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004c57b) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004c57b) main_mup3_pane_g

0x62e4,	// (0x000430e1) main_mup3_pane_t1_ParamLimits

0x62e4,	// (0x000430e1) main_mup3_pane_t1

0x6353,	// (0x00043150) main_mup3_pane_t2_ParamLimits

0x6353,	// (0x00043150) main_mup3_pane_t2

0x641c,	// (0x00043219) main_mup3_pane_t4_ParamLimits

0x641c,	// (0x00043219) main_mup3_pane_t4

0x646a,	// (0x00043267) main_mup3_pane_t5_ParamLimits

0x646a,	// (0x00043267) main_mup3_pane_t5

0x651a,	// (0x00043317) main_mup3_pane_t6_ParamLimits

0x651a,	// (0x00043317) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004c58c) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004c58c) main_mup3_pane_t

0x65c6,	// (0x000433c3) mup3_progress_pane_ParamLimits

0x65c6,	// (0x000433c3) mup3_progress_pane

0x6644,	// (0x00043441) popup_mup3_control_window_ParamLimits

0x6644,	// (0x00043441) popup_mup3_control_window

0xcf6f,	// (0x00049d6c) popup_mup3_text_window

0x665d,	// (0x0004345a) mup3_progress_pane_t1

0x667c,	// (0x00043479) mup3_progress_pane_t2

0xcf77,	// (0x00049d74) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004c599) mup3_progress_pane_t

0xcf94,	// (0x00049d91) mup_progress_pane_cp03

0xa0e6,	// (0x00046ee3) bg_tb_trans_pane_cp04

0x669b,	// (0x00043498) mup3_volume_pane

0x66a3,	// (0x000434a0) popup_mup3_control_window_g1

0x66ac,	// (0x000434a9) mup3_volume_pane_g1

0x66b5,	// (0x000434b2) mup3_volume_pane_g2

0x66be,	// (0x000434bb) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004c5a0) mup3_volume_pane_g

0xa0e6,	// (0x00046ee3) bg_tb_trans_pane_cp03

0xcfa4,	// (0x00049da1) popup_mup3_text_window_g1

0xcfac,	// (0x00049da9) popup_mup3_text_window_t1

0xa879,	// (0x00047676) list_calc_item_pane_g1_ParamLimits

0xc9cc,	// (0x000497c9) mup_volume_pane_cp_g1

0x60a1,	// (0x00042e9e) main_touch_calib_pane_t3

0x60b7,	// (0x00042eb4) main_touch_calib_pane_t4

0x60cd,	// (0x00042eca) main_touch_calib_pane_t5

0x2273,	// (0x0003f070) aid_cell_size_toolbar2

0x227b,	// (0x0003f078) aid_popup3_width_pane

0x0e86,	// (0x0003dc83) aid_zoom_text_msg_primary

0x30a0,	// (0x0003fe9d) vorec_t7

0xa83d,	// (0x0004763a) bg_calc_paper_pane_g1_ParamLimits

0xa849,	// (0x00047646) bg_calc_paper_pane_g2_ParamLimits

0xa855,	// (0x00047652) bg_calc_paper_pane_g3_ParamLimits

0xa861,	// (0x0004765e) bg_calc_paper_pane_g4_ParamLimits

0xa86d,	// (0x0004766a) bg_calc_paper_pane_g5_ParamLimits

0x2914,	// (0x0003f711) bg_calc_paper_pane_g6_ParamLimits

0x2925,	// (0x0003f722) bg_calc_paper_pane_g7_ParamLimits

0x2936,	// (0x0003f733) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004bf55) bg_calc_paper_pane_g_ParamLimits

0x2947,	// (0x0003f744) calc_bg_paper_pane_g9_ParamLimits

0x31b2,	// (0x0003ffaf) image_qvga_pane_ParamLimits

0x31b2,	// (0x0003ffaf) image_qvga_pane

0xa76c,	// (0x00047569) bg_popup_sub_pane_cp04_ParamLimits

0xb66f,	// (0x0004846c) popup_mup_playback_window_g1_ParamLimits

0xb67b,	// (0x00048478) popup_mup_playback_window_t1_ParamLimits

0xb690,	// (0x0004848d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004c2df) popup_mup_playback_window_t_ParamLimits

0x5ba7,	// (0x000429a4) main_mup2_pane_g3_ParamLimits

0x5ba7,	// (0x000429a4) main_mup2_pane_g3

0x346a,	// (0x00040267) popup_toolbar_window_cp04

0xba72,	// (0x0004886f) popup_call2_audio_second_window_g3_ParamLimits

0xba72,	// (0x0004886f) popup_call2_audio_second_window_g3

0xbe7c,	// (0x00048c79) popup_call2_audio_first_window_g4_ParamLimits

0xbe7c,	// (0x00048c79) popup_call2_audio_first_window_g4

0xc4fb,	// (0x000492f8) popup_call2_audio_in_window_g4_ParamLimits

0xc4fb,	// (0x000492f8) popup_call2_audio_in_window_g4

0x4fbd,	// (0x00041dba) aid_area_sk_bg_cut_ParamLimits

0x4fbd,	// (0x00041dba) aid_area_sk_bg_cut

0xb6a5,	// (0x000484a2) aid_area_sk_bg_cut_2_ParamLimits

0xb6a5,	// (0x000484a2) aid_area_sk_bg_cut_2

0x5f30,	// (0x00042d2d) aid_placing_details_win

0x5f38,	// (0x00042d35) aid_placing_details_win_2

0xcdee,	// (0x00049beb) camera2_autofocus_pane_g1_ParamLimits

0x24ca,	// (0x0003f2c7) popup_fixed_preview_cale_window_ParamLimits

0x24ca,	// (0x0003f2c7) popup_fixed_preview_cale_window

0xb481,	// (0x0004827e) navi_slider_pane_g3

0xb48a,	// (0x00048287) navi_slider_pane_g4

0xb493,	// (0x00048290) navi_slider_pane_g5

0xb481,	// (0x0004827e) navi_slider_pane_g6

0x48f9,	// (0x000416f6) navi_slider_pane_g7

0xb5a6,	// (0x000483a3) mup_scale_pane_g3

0xb5af,	// (0x000483ac) mup_scale_pane_g4

0xb5b8,	// (0x000483b5) mup_scale_pane_g5

0x4d3a,	// (0x00041b37) mup_scale_pane_g6

0x4d43,	// (0x00041b40) mup_scale_pane_g7

0xb481,	// (0x0004827e) cams2_slider_pane_g3

0xca4e,	// (0x0004984b) cams2_slider_pane_g4

0x5e88,	// (0x00042c85) cams2_slider_pane_g5

0xb481,	// (0x0004827e) cams2_slider_pane_g6

0x5e90,	// (0x00042c8d) cams2_slider_pane_g7

0xcc79,	// (0x00049a76) camera2_autofocus_pane_cp_g1

0xc85c,	// (0x00049659) bg_popup_preview_window_pane_cp02_ParamLimits

0xc85c,	// (0x00049659) bg_popup_preview_window_pane_cp02

0xcfba,	// (0x00049db7) list_fp_cale_pane_ParamLimits

0xcfba,	// (0x00049db7) list_fp_cale_pane

0xcfc6,	// (0x00049dc3) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfc6,	// (0x00049dc3) popup_fixed_preview_cale_window_t1

0x66c7,	// (0x000434c4) popup_fixed_preview_cale_window_t2_ParamLimits

0x66c7,	// (0x000434c4) popup_fixed_preview_cale_window_t2

0x66dc,	// (0x000434d9) popup_fixed_preview_cale_window_t3_ParamLimits

0x66dc,	// (0x000434d9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004c5a7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004c5a7) popup_fixed_preview_cale_window_t

0x66f1,	// (0x000434ee) list_single_fp_cale_pane_ParamLimits

0x66f1,	// (0x000434ee) list_single_fp_cale_pane

0xcfe4,	// (0x00049de1) list_single_fp_cale_pane_g1_ParamLimits

0xcfe4,	// (0x00049de1) list_single_fp_cale_pane_g1

0xcff0,	// (0x00049ded) list_single_fp_cale_pane_g2_ParamLimits

0xcff0,	// (0x00049ded) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004c5ae) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004c5ae) list_single_fp_cale_pane_g

0xd009,	// (0x00049e06) list_single_fp_cale_pane_t1_ParamLimits

0xd009,	// (0x00049e06) list_single_fp_cale_pane_t1

0xd01b,	// (0x00049e18) list_single_fp_cale_pane_t2_ParamLimits

0xd01b,	// (0x00049e18) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004c5b5) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004c5b5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0e6,	// (0x00046ee3) main_dialer_pane

0x6704,	// (0x00043501) aid_cell_size_keypad

0x670e,	// (0x0004350b) dialer_ne_pane

0x6718,	// (0x00043515) grid_dialer_command_1_pane

0x6720,	// (0x0004351d) grid_dialer_command_2_pane

0x6728,	// (0x00043525) grid_dialer_keypad_pane

0x673a,	// (0x00043537) bg_popup_call_pane_cp06_ParamLimits

0x673a,	// (0x00043537) bg_popup_call_pane_cp06

0x6746,	// (0x00043543) dialer_ne_clear_pane_ParamLimits

0x6746,	// (0x00043543) dialer_ne_clear_pane

0xd04e,	// (0x00049e4b) dialer_ne_pane_g1

0xd056,	// (0x00049e53) dialer_ne_pane_t1_ParamLimits

0xd056,	// (0x00049e53) dialer_ne_pane_t1

0x6752,	// (0x0004354f) dialer_ne_pane_t2_ParamLimits

0x6752,	// (0x0004354f) dialer_ne_pane_t2

0x676f,	// (0x0004356c) dialer_ne_pane_t3_ParamLimits

0x676f,	// (0x0004356c) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004c5ba) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004c5ba) dialer_ne_pane_t

0x6793,	// (0x00043590) dialer_ne_pane_t3_copy1_ParamLimits

0x6793,	// (0x00043590) dialer_ne_pane_t3_copy1

0x67b7,	// (0x000435b4) cell_dialer_keypad_pane_ParamLimits

0x67b7,	// (0x000435b4) cell_dialer_keypad_pane

0x67ce,	// (0x000435cb) cell_dialer_command_1_pane_ParamLimits

0x67ce,	// (0x000435cb) cell_dialer_command_1_pane

0x67e4,	// (0x000435e1) cell_dialer_command_2_pane_ParamLimits

0x67e4,	// (0x000435e1) cell_dialer_command_2_pane

0xd068,	// (0x00049e65) bg_button_pane_cp02_ParamLimits

0xd068,	// (0x00049e65) bg_button_pane_cp02

0x67f3,	// (0x000435f0) cell_dialer_keypad_pane_g1_ParamLimits

0x67f3,	// (0x000435f0) cell_dialer_keypad_pane_g1

0xd068,	// (0x00049e65) bg_button_pane_cp03_ParamLimits

0xd068,	// (0x00049e65) bg_button_pane_cp03

0x6808,	// (0x00043605) cell_dialer_command_1_pane_g1_ParamLimits

0x6808,	// (0x00043605) cell_dialer_command_1_pane_g1

0xd074,	// (0x00049e71) bg_button_pane_cp04

0x681c,	// (0x00043619) cell_dialer_command_2_pane_g1

0xa9f6,	// (0x000477f3) bg_button_pane_cp06

0xd07c,	// (0x00049e79) dialer_ne_clear_pane_g1

0xb354,	// (0x00048151) navi_pane_g2

0xb382,	// (0x0004817f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c1e2) navi_pane_g

0xb411,	// (0x0004820e) navi_pane_mv_g2

0xb438,	// (0x00048235) navi_pane_mv_g5

0x48c4,	// (0x000416c1) navi_pane_mv_t1

0xa831,	// (0x0004762e) main_clock2_pane

0x685a,	// (0x00043657) main_clock2_list_pane_ParamLimits

0x685a,	// (0x00043657) main_clock2_list_pane

0x6882,	// (0x0004367f) main_clock2_pane_t1_ParamLimits

0x6882,	// (0x0004367f) main_clock2_pane_t1

0x68a4,	// (0x000436a1) main_clock2_pane_t2_ParamLimits

0x68a4,	// (0x000436a1) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004c5c6) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004c5c6) main_clock2_pane_t

0x68ff,	// (0x000436fc) popup_clock_analogue_window_cp03_ParamLimits

0x68ff,	// (0x000436fc) popup_clock_analogue_window_cp03

0x691d,	// (0x0004371a) popup_clock_digital_window_cp02_ParamLimits

0x691d,	// (0x0004371a) popup_clock_digital_window_cp02

0x698a,	// (0x00043787) main_clock2_list_single_pane_ParamLimits

0x698a,	// (0x00043787) main_clock2_list_single_pane

0xa9f6,	// (0x000477f3) list_highlight_pane_cp05

0xd0ba,	// (0x00049eb7) main_clock2_list_single_pane_t1

0x346a,	// (0x00040267) popup_toolbar_window_cp04_ParamLimits

0x5f5a,	// (0x00042d57) camera2_autofocus_pane_g2_ParamLimits

0x5f5a,	// (0x00042d57) camera2_autofocus_pane_g2

0x5f66,	// (0x00042d63) camera2_autofocus_pane_g3_ParamLimits

0x5f66,	// (0x00042d63) camera2_autofocus_pane_g3

0x5f72,	// (0x00042d6f) camera2_autofocus_pane_g4_ParamLimits

0x5f72,	// (0x00042d6f) camera2_autofocus_pane_g4

0x5f7e,	// (0x00042d7b) camera2_autofocus_pane_g5_ParamLimits

0x5f7e,	// (0x00042d7b) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004c50a) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004c50a) camera2_autofocus_pane_g

0xcf41,	// (0x00049d3e) camera2_autofocus_pane_cp_g2

0xcf49,	// (0x00049d46) camera2_autofocus_pane_cp_g3

0xcf51,	// (0x00049d4e) camera2_autofocus_pane_cp_g4

0xcf59,	// (0x00049d56) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004c570) camera2_autofocus_pane_cp_g

0x6732,	// (0x0004352f) popup_dialer_spcha_window

0xa0e6,	// (0x00046ee3) bg_popup_sub_pane_cp07

0xd0c8,	// (0x00049ec5) list_spcha_pane

0xd0d0,	// (0x00049ecd) list_single_spcha_pane_ParamLimits

0xd0d0,	// (0x00049ecd) list_single_spcha_pane

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp06

0xd0e1,	// (0x00049ede) list_single_spcha_pane_t1

0xc2a5,	// (0x000490a2) popup_call2_audio_out_window_g4_ParamLimits

0xc2a5,	// (0x000490a2) popup_call2_audio_out_window_g4

0xa0e6,	// (0x00046ee3) main_imed2_pane

0x55f6,	// (0x000423f3) popup_imed_adjust2_window

0x5609,	// (0x00042406) popup_imed_trans_window_ParamLimits

0x5609,	// (0x00042406) popup_imed_trans_window

0xcab7,	// (0x000498b4) popup_blid_sat_info2_window_t1

0xcac5,	// (0x000498c2) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004c49f) popup_blid_sat_info2_window_t

0x6a34,	// (0x00043831) aid_size_cell_colour_35

0x6a4e,	// (0x0004384b) aid_size_cell_colour_112

0x6a65,	// (0x00043862) aid_size_cell_effect

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp02

0xb173,	// (0x00047f70) heading_imed_pane

0x6a7f,	// (0x0004387c) listscroll_imed_pane

0xd0ef,	// (0x00049eec) heading_imed_pane_g1

0xd0f7,	// (0x00049ef4) heading_imed_pane_t1

0xd105,	// (0x00049f02) grid_imed_colour_35_pane_ParamLimits

0xd105,	// (0x00049f02) grid_imed_colour_35_pane

0x6a8b,	// (0x00043888) grid_imed_effect_pane

0xd11c,	// (0x00049f19) list_imed_aspect_pane

0x6a9b,	// (0x00043898) scroll_pane_cp027_ParamLimits

0x6a9b,	// (0x00043898) scroll_pane_cp027

0x6aa7,	// (0x000438a4) cell_imed_effect_pane_ParamLimits

0x6aa7,	// (0x000438a4) cell_imed_effect_pane

0xd124,	// (0x00049f21) cell_imed_colour_pane_ParamLimits

0xd124,	// (0x00049f21) cell_imed_colour_pane

0xd166,	// (0x00049f63) cell_imed_colour_pane_g1_ParamLimits

0xd166,	// (0x00049f63) cell_imed_colour_pane_g1

0xd177,	// (0x00049f74) hgihlgiht_grid_pane_cp016_ParamLimits

0xd177,	// (0x00049f74) hgihlgiht_grid_pane_cp016

0x6abf,	// (0x000438bc) cell_imed_effect_pane_g1

0x6ac7,	// (0x000438c4) grid_highlight_pane_cp017

0xd188,	// (0x00049f85) list_imed_single_pane_ParamLimits

0xd188,	// (0x00049f85) list_imed_single_pane

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp07

0xd19d,	// (0x00049f9a) list_imed_aspect_pane_comp1_t1

0xc868,	// (0x00049665) bg_tb_trans_pane_cp05

0xd1bf,	// (0x00049fbc) popup_imed_adjust2_window_g1

0xd1e6,	// (0x00049fe3) popup_imed_adjust2_window_t1

0xd1fe,	// (0x00049ffb) slider_imed_adjust_pane

0xd21e,	// (0x0004a01b) slider_imed_adjust_pane_g1

0xd22e,	// (0x0004a02b) slider_imed_adjust_pane_g2

0xd23e,	// (0x0004a03b) slider_imed_adjust_pane_g3

0xd24f,	// (0x0004a04c) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004c5e3) slider_imed_adjust_pane_g

0x6ad0,	// (0x000438cd) aid_size_cell_clipart2

0x6adc,	// (0x000438d9) grid_imed_clipart_pane

0xd260,	// (0x0004a05d) scroll_pane_cp031

0x6ae6,	// (0x000438e3) cell_imed_clipart_pane_ParamLimits

0x6ae6,	// (0x000438e3) cell_imed_clipart_pane

0x6b08,	// (0x00043905) cell_imed_clipart_pane_g1

0xa0e6,	// (0x00046ee3) grid_highlight_pane_cp014

0x6866,	// (0x00043663) main_clock2_pane_g1_ParamLimits

0x6866,	// (0x00043663) main_clock2_pane_g1

0x6935,	// (0x00043732) aid_call2_pane_cp10

0x6947,	// (0x00043744) aid_call_pane_cp10

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g1

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g2

0x6959,	// (0x00043756) popup_clock_analogue_window_cp10_g3

0x6959,	// (0x00043756) popup_clock_analogue_window_cp10_g4

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004c5d1) popup_clock_analogue_window_cp10_g

0x696b,	// (0x00043768) popup_clock_analogue_window_cp10_t1

0x699c,	// (0x00043799) clock_digital_number_pane_cp10_ParamLimits

0x699c,	// (0x00043799) clock_digital_number_pane_cp10

0x69b4,	// (0x000437b1) clock_digital_number_pane_cp11_ParamLimits

0x69b4,	// (0x000437b1) clock_digital_number_pane_cp11

0x69cc,	// (0x000437c9) clock_digital_number_pane_cp12_ParamLimits

0x69cc,	// (0x000437c9) clock_digital_number_pane_cp12

0x69e4,	// (0x000437e1) clock_digital_number_pane_cp13_ParamLimits

0x69e4,	// (0x000437e1) clock_digital_number_pane_cp13

0x69fc,	// (0x000437f9) clock_digital_separator_pane_cp10_ParamLimits

0x69fc,	// (0x000437f9) clock_digital_separator_pane_cp10

0x6a14,	// (0x00043811) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a14,	// (0x00043811) popup_clock_digital_window_cp02_t1

0xa764,	// (0x00047561) clock_digital_number_pane_cp10_g1

0xa764,	// (0x00047561) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004c5ec) clock_digital_number_pane_cp10_g

0xa764,	// (0x00047561) clock_digital_separator_pane_cp10_g1

0xa764,	// (0x00047561) clock_digital_separator_pane_g2_cp10

0xb440,	// (0x0004823d) navi_pane_vded_g4

0xb449,	// (0x00048246) navi_pane_vded_g5

0xb452,	// (0x0004824f) navi_pane_vded_t1

0xa0e6,	// (0x00046ee3) main_vded_pane

0x6b11,	// (0x0004390e) main_vded_pane_g1

0x6b1d,	// (0x0004391a) main_vded_pane_g2

0x6b27,	// (0x00043924) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004c5f1) main_vded_pane_g

0x6b31,	// (0x0004392e) main_vded_pane_t1

0x6b3f,	// (0x0004393c) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004c5f8) main_vded_pane_t

0x6b4d,	// (0x0004394a) vded_slider_pane

0x6b57,	// (0x00043954) vded_video_pane

0xd268,	// (0x0004a065) vded_video_pane_g1

0x6b61,	// (0x0004395e) vded_video_pane_g2

0xcc79,	// (0x00049a76) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004c5fd) vded_video_pane_g

0xd272,	// (0x0004a06f) vded_slider_pane_g1

0xc9cc,	// (0x000497c9) vded_slider_pane_g2

0xd27b,	// (0x0004a078) vded_slider_pane_g3

0xd284,	// (0x0004a081) vded_slider_pane_g4

0xd28d,	// (0x0004a08a) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004c604) vded_slider_pane_g

0x6636,	// (0x00043433) mup3_rocker_pane_ParamLimits

0x6636,	// (0x00043433) mup3_rocker_pane

0x6b6a,	// (0x00043967) mup3_control_keys_pane_g1

0x6b72,	// (0x0004396f) mup3_control_keys_pane_g2

0x6b7a,	// (0x00043977) mup3_control_keys_pane_g3

0x6b82,	// (0x0004397f) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004c60f) mup3_control_keys_pane_g

0x24f2,	// (0x0003f2ef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x24f2,	// (0x0003f2ef) popup_toolbar2_fixed_window_cp01

0x6650,	// (0x0004344d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6650,	// (0x0004344d) popup_toolbar2_fixed_window_cp02

0xbbe4,	// (0x000489e1) popup_call2_audio_second_window_t4_ParamLimits

0xbbe4,	// (0x000489e1) popup_call2_audio_second_window_t4

0xc112,	// (0x00048f0f) popup_call2_audio_first_window_t6_ParamLimits

0xc112,	// (0x00048f0f) popup_call2_audio_first_window_t6

0xc3a8,	// (0x000491a5) popup_call2_audio_out_window_t6_ParamLimits

0xc3a8,	// (0x000491a5) popup_call2_audio_out_window_t6

0xa0e6,	// (0x00046ee3) main_vitu_pane

0x6b92,	// (0x0004398f) aid_size_cell_itu_ParamLimits

0x6b92,	// (0x0004398f) aid_size_cell_itu

0xdadd,	// (0x0004a8da) bg_popup_window_pane_cp08_ParamLimits

0xdadd,	// (0x0004a8da) bg_popup_window_pane_cp08

0x6ba0,	// (0x0004399d) field_vitu_entry_pane_ParamLimits

0x6ba0,	// (0x0004399d) field_vitu_entry_pane

0x6baf,	// (0x000439ac) grid_vitu_function_pane_ParamLimits

0x6baf,	// (0x000439ac) grid_vitu_function_pane

0x6bbf,	// (0x000439bc) grid_vitu_itu_pane_ParamLimits

0x6bbf,	// (0x000439bc) grid_vitu_itu_pane

0x6bcf,	// (0x000439cc) cell_vitu_itu_pane_ParamLimits

0x6bcf,	// (0x000439cc) cell_vitu_itu_pane

0x6be4,	// (0x000439e1) cell_vitu_function_pane_ParamLimits

0x6be4,	// (0x000439e1) cell_vitu_function_pane

0xb165,	// (0x00047f62) bg_popup_sub_pane_cp08_ParamLimits

0xb165,	// (0x00047f62) bg_popup_sub_pane_cp08

0x6bf6,	// (0x000439f3) field_vitu_entry_pane_t1_ParamLimits

0x6bf6,	// (0x000439f3) field_vitu_entry_pane_t1

0xd2ae,	// (0x0004a0ab) field_vitu_entry_pane_t2_ParamLimits

0xd2ae,	// (0x0004a0ab) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004c61d) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004c61d) field_vitu_entry_pane_t

0xd2cb,	// (0x0004a0c8) bg_button_pane_cp05_ParamLimits

0xd2cb,	// (0x0004a0c8) bg_button_pane_cp05

0x6c12,	// (0x00043a0f) cell_vitu_itu_pane_g1

0x6c2a,	// (0x00043a27) cell_vitu_itu_pane_t1_ParamLimits

0x6c2a,	// (0x00043a27) cell_vitu_itu_pane_t1

0x6c3c,	// (0x00043a39) cell_vitu_itu_pane_t2_ParamLimits

0x6c3c,	// (0x00043a39) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004c622) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004c622) cell_vitu_itu_pane_t

0xd2d9,	// (0x0004a0d6) bg_button_pane_cp07

0x6c71,	// (0x00043a6e) cell_vitu_function_pane_g1

0x27b8,	// (0x0003f5b5) main_calc_pane_g1

0x22af,	// (0x0003f0ac) aid_visual_content_pane

0xa0e6,	// (0x00046ee3) main_vradio_pane

0x6c7a,	// (0x00043a77) main_vradio_pane_g1_ParamLimits

0x6c7a,	// (0x00043a77) main_vradio_pane_g1

0xd2e3,	// (0x0004a0e0) main_vradio_pane_g2_ParamLimits

0xd2e3,	// (0x0004a0e0) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004c629) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004c629) main_vradio_pane_g

0x6c8a,	// (0x00043a87) main_vradio_pane_t1_ParamLimits

0x6c8a,	// (0x00043a87) main_vradio_pane_t1

0x6c9c,	// (0x00043a99) main_vradio_pane_t2_ParamLimits

0x6c9c,	// (0x00043a99) main_vradio_pane_t2

0xd2f0,	// (0x0004a0ed) main_vradio_pane_t3_ParamLimits

0xd2f0,	// (0x0004a0ed) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004c62e) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004c62e) main_vradio_pane_t

0x6cae,	// (0x00043aab) vradio_rocker_control_pane_ParamLimits

0x6cae,	// (0x00043aab) vradio_rocker_control_pane

0x6cba,	// (0x00043ab7) vradio_station_info_pane_ParamLimits

0x6cba,	// (0x00043ab7) vradio_station_info_pane

0xd304,	// (0x0004a101) vradio_frequency_info_pane_ParamLimits

0xd304,	// (0x0004a101) vradio_frequency_info_pane

0xcc79,	// (0x00049a76) vradio_station_info_pane_g1

0xd313,	// (0x0004a110) vradio_station_info_pane_t1_ParamLimits

0xd313,	// (0x0004a110) vradio_station_info_pane_t1

0xd335,	// (0x0004a132) vradio_station_info_pane_t2_ParamLimits

0xd335,	// (0x0004a132) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004c635) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004c635) vradio_station_info_pane_t

0xd347,	// (0x0004a144) vradio_tuning_pane

0xd34f,	// (0x0004a14c) vradio_rocker_control_pane_g1

0xd357,	// (0x0004a154) vradio_rocker_control_pane_g2

0xd35f,	// (0x0004a15c) vradio_rocker_control_pane_g3

0xd367,	// (0x0004a164) vradio_rocker_control_pane_g4

0xd36f,	// (0x0004a16c) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004c63a) vradio_rocker_control_pane_g

0x6cc9,	// (0x00043ac6) vradio_frequency_info_pane_g1

0xd377,	// (0x0004a174) vradio_frequency_info_pane_t1_ParamLimits

0xd377,	// (0x0004a174) vradio_frequency_info_pane_t1

0x6cd3,	// (0x00043ad0) vradio_tuning_pane_g1

0x6cdc,	// (0x00043ad9) vradio_tuning_pane_t1

0x22f8,	// (0x0003f0f5) area_side_right_pane_ParamLimits

0x22f8,	// (0x0003f0f5) area_side_right_pane

0xc823,	// (0x00049620) status_small_pane_g1

0xc82b,	// (0x00049628) status_small_pane_g2

0xc834,	// (0x00049631) status_small_pane_g3

0xc83d,	// (0x0004963a) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004c3f5) status_small_pane_g

0xc846,	// (0x00049643) status_small_pane_t1

0xa0e6,	// (0x00046ee3) main_video3_pane

0xd38b,	// (0x0004a188) cams_zoom_vslider_pane

0xd393,	// (0x0004a190) image3_wide_pane_ParamLimits

0xd393,	// (0x0004a190) image3_wide_pane

0xd3ad,	// (0x0004a1aa) image3_wide_small_pane

0xd3b9,	// (0x0004a1b6) main_video3_pane_g1_ParamLimits

0xd3b9,	// (0x0004a1b6) main_video3_pane_g1

0xd3d5,	// (0x0004a1d2) main_video3_pane_g2_ParamLimits

0xd3d5,	// (0x0004a1d2) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004c645) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004c645) main_video3_pane_g

0xd3f1,	// (0x0004a1ee) main_video3_pane_t1_ParamLimits

0xd3f1,	// (0x0004a1ee) main_video3_pane_t1

0xd41c,	// (0x0004a219) main_video3_pane_t2_ParamLimits

0xd41c,	// (0x0004a219) main_video3_pane_t2

0xd447,	// (0x0004a244) main_video3_pane_t3_ParamLimits

0xd447,	// (0x0004a244) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004c64a) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004c64a) main_video3_pane_t

0xd474,	// (0x0004a271) cams_zoom_vslider_pane_g1

0xd47d,	// (0x0004a27a) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004c651) cams_zoom_vslider_pane_g

0xd485,	// (0x0004a282) small_slider_vertical_pane

0xcc79,	// (0x00049a76) small_slider_vertical_pane_g1

0xcc79,	// (0x00049a76) small_slider_vertical_pane_g2

0xd48d,	// (0x0004a28a) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004c656) small_slider_vertical_pane_g

0xa0e6,	// (0x00046ee3) main_hwr_training_pane

0xd496,	// (0x0004a293) hwr_training_instruct_pane_ParamLimits

0xd496,	// (0x0004a293) hwr_training_instruct_pane

0x6ceb,	// (0x00043ae8) hwr_training_navi_pane_ParamLimits

0x6ceb,	// (0x00043ae8) hwr_training_navi_pane

0x6d05,	// (0x00043b02) hwr_training_write_pane_ParamLimits

0x6d05,	// (0x00043b02) hwr_training_write_pane

0xa0e6,	// (0x00046ee3) bg_frame_shadow_pane

0xd4cd,	// (0x0004a2ca) hwr_training_write_pane_g1

0xd4d5,	// (0x0004a2d2) hwr_training_write_pane_g2

0xd4dd,	// (0x0004a2da) hwr_training_write_pane_g3

0xd4e5,	// (0x0004a2e2) hwr_training_write_pane_g4

0xd4ed,	// (0x0004a2ea) hwr_training_write_pane_g5

0xd4f5,	// (0x0004a2f2) hwr_training_write_pane_g6

0xd4fd,	// (0x0004a2fa) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004c65d) hwr_training_write_pane_g

0x6d3d,	// (0x00043b3a) hwr_training_navi_pane_g1_ParamLimits

0x6d3d,	// (0x00043b3a) hwr_training_navi_pane_g1

0x6d4f,	// (0x00043b4c) hwr_training_navi_pane_g2_ParamLimits

0x6d4f,	// (0x00043b4c) hwr_training_navi_pane_g2

0x6d61,	// (0x00043b5e) hwr_training_navi_pane_g3_ParamLimits

0x6d61,	// (0x00043b5e) hwr_training_navi_pane_g3

0x6d71,	// (0x00043b6e) hwr_training_navi_pane_g4_ParamLimits

0x6d71,	// (0x00043b6e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004c66c) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004c66c) hwr_training_navi_pane_g

0x6d8b,	// (0x00043b88) hwr_training_navi_pane_t1

0x6d99,	// (0x00043b96) list_single_hwr_training_instruct_pane_ParamLimits

0x6d99,	// (0x00043b96) list_single_hwr_training_instruct_pane

0xd505,	// (0x0004a302) list_single_hwr_training_instruct_pane_t1

0xcbb9,	// (0x000499b6) bg_frame_shadow_pane_g1

0xd514,	// (0x0004a311) bg_frame_shadow_pane_g2

0xd51c,	// (0x0004a319) bg_frame_shadow_pane_g3

0xd524,	// (0x0004a321) bg_frame_shadow_pane_g4

0xd52c,	// (0x0004a329) bg_frame_shadow_pane_g5

0xd534,	// (0x0004a331) bg_frame_shadow_pane_g6

0xd53c,	// (0x0004a339) bg_frame_shadow_pane_g7

0xa8ea,	// (0x000476e7) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004c677) bg_frame_shadow_pane_g

0xa0e6,	// (0x00046ee3) main_video_tele_dialer_pane

0x6dbe,	// (0x00043bbb) aid_size_cell_video_keypad_ParamLimits

0x6dbe,	// (0x00043bbb) aid_size_cell_video_keypad

0x6dce,	// (0x00043bcb) grid_video_dialer_keypad_pane_ParamLimits

0x6dce,	// (0x00043bcb) grid_video_dialer_keypad_pane

0x6e02,	// (0x00043bff) video_down_pane_cp_ParamLimits

0x6e02,	// (0x00043bff) video_down_pane_cp

0x6e2c,	// (0x00043c29) cell_video_dialer_keypad_pane_ParamLimits

0x6e2c,	// (0x00043c29) cell_video_dialer_keypad_pane

0xd544,	// (0x0004a341) bg_button_pane_cp08_ParamLimits

0xd544,	// (0x0004a341) bg_button_pane_cp08

0x6e41,	// (0x00043c3e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e41,	// (0x00043c3e) cell_video_dialer_keypad_pane_g1

0x662a,	// (0x00043427) mup3_rocker2_pane_ParamLimits

0x662a,	// (0x00043427) mup3_rocker2_pane

0xcc79,	// (0x00049a76) mup3_rocker2_pane_g1

0x5566,	// (0x00042363) main_dialer2_pane

0xa0e6,	// (0x00046ee3) main_mp4_pane

0x6e80,	// (0x00043c7d) main_mp4_pane_g1_ParamLimits

0x6e80,	// (0x00043c7d) main_mp4_pane_g1

0x6e8e,	// (0x00043c8b) main_mp4_pane_g2_ParamLimits

0x6e8e,	// (0x00043c8b) main_mp4_pane_g2

0x6e9c,	// (0x00043c99) main_mp4_pane_g3_ParamLimits

0x6e9c,	// (0x00043c99) main_mp4_pane_g3

0x6ee1,	// (0x00043cde) main_mp4_pane_g4_ParamLimits

0x6ee1,	// (0x00043cde) main_mp4_pane_g4

0x6f09,	// (0x00043d06) main_mp4_pane_g5_ParamLimits

0x6f09,	// (0x00043d06) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004c697) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004c697) main_mp4_pane_g

0x6f59,	// (0x00043d56) main_mp4_pane_t1_ParamLimits

0x6f59,	// (0x00043d56) main_mp4_pane_t1

0x6fb5,	// (0x00043db2) main_mp4_pane_t2_ParamLimits

0x6fb5,	// (0x00043db2) main_mp4_pane_t2

0xd550,	// (0x0004a34d) main_mp4_pane_t3_ParamLimits

0xd550,	// (0x0004a34d) main_mp4_pane_t3

0x7007,	// (0x00043e04) main_mp4_pane_t4_ParamLimits

0x7007,	// (0x00043e04) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004c6a4) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004c6a4) main_mp4_pane_t

0x704b,	// (0x00043e48) mp4_progress_pane_ParamLimits

0x704b,	// (0x00043e48) mp4_progress_pane

0x7095,	// (0x00043e92) mp4_rocker_pane_ParamLimits

0x7095,	// (0x00043e92) mp4_rocker_pane

0xd578,	// (0x0004a375) mp4_progress_pane_t1

0xd591,	// (0x0004a38e) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004c6ad) mp4_progress_pane_t

0xd5aa,	// (0x0004a3a7) mup_progress_pane_cp04

0xcc79,	// (0x00049a76) mp4_rocker_pane_g1

0x70b5,	// (0x00043eb2) aid_cell_size_keypad2_ParamLimits

0x70b5,	// (0x00043eb2) aid_cell_size_keypad2

0x70c5,	// (0x00043ec2) dialer2_ne_pane_ParamLimits

0x70c5,	// (0x00043ec2) dialer2_ne_pane

0x70d3,	// (0x00043ed0) grid_dialer2_keypad_pane_ParamLimits

0x70d3,	// (0x00043ed0) grid_dialer2_keypad_pane

0xdaeb,	// (0x0004a8e8) bg_popup_call_pane_cp07_ParamLimits

0xdaeb,	// (0x0004a8e8) bg_popup_call_pane_cp07

0x70e3,	// (0x00043ee0) dialer2_ne_pane_t1_ParamLimits

0x70e3,	// (0x00043ee0) dialer2_ne_pane_t1

0x7108,	// (0x00043f05) cell_dialer2_keypad_pane_ParamLimits

0x7108,	// (0x00043f05) cell_dialer2_keypad_pane

0xd5c8,	// (0x0004a3c5) bg_button_pane_pane_cp04_ParamLimits

0xd5c8,	// (0x0004a3c5) bg_button_pane_pane_cp04

0x711d,	// (0x00043f1a) cell_dialer2_keypad_pane_g1_ParamLimits

0x711d,	// (0x00043f1a) cell_dialer2_keypad_pane_g1

0x332c,	// (0x00040129) aid_placing_vt_set_content_ParamLimits

0x332c,	// (0x00040129) aid_placing_vt_set_content

0x3358,	// (0x00040155) aid_placing_vt_set_title_ParamLimits

0x3358,	// (0x00040155) aid_placing_vt_set_title

0xa0e6,	// (0x00046ee3) main_image3_pane

0x71b7,	// (0x00043fb4) area_side_right_pane_cp01_ParamLimits

0x71b7,	// (0x00043fb4) area_side_right_pane_cp01

0xa6d4,	// (0x000474d1) main_image3_pane_g1_ParamLimits

0xa6d4,	// (0x000474d1) main_image3_pane_g1

0x71e4,	// (0x00043fe1) main_image3_pane_g2_ParamLimits

0x71e4,	// (0x00043fe1) main_image3_pane_g2

0x71fd,	// (0x00043ffa) main_image3_pane_g3_ParamLimits

0x71fd,	// (0x00043ffa) main_image3_pane_g3

0x7216,	// (0x00044013) main_image3_pane_g4_ParamLimits

0x7216,	// (0x00044013) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004c6bc) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004c6bc) main_image3_pane_g

0x722f,	// (0x0004402c) main_image3_pane_t1_ParamLimits

0x722f,	// (0x0004402c) main_image3_pane_t1

0x7254,	// (0x00044051) main_image3_pane_t2_ParamLimits

0x7254,	// (0x00044051) main_image3_pane_t2

0x7273,	// (0x00044070) main_image3_pane_t3_ParamLimits

0x7273,	// (0x00044070) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004c6c5) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004c6c5) main_image3_pane_t

0xdadd,	// (0x0004a8da) grid_sctrl_middle_pane_cp01_ParamLimits

0xdadd,	// (0x0004a8da) grid_sctrl_middle_pane_cp01

0x72d4,	// (0x000440d1) cell_sctrl_middle_pane_cp01_ParamLimits

0x72d4,	// (0x000440d1) cell_sctrl_middle_pane_cp01

0x72e5,	// (0x000440e2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72e5,	// (0x000440e2) cell_sctrl_middle_pane_cp01_g1

0xa0e6,	// (0x00046ee3) main_call4_pane

0x72f2,	// (0x000440ef) aid_size_button_call4_ParamLimits

0x72f2,	// (0x000440ef) aid_size_button_call4

0x7322,	// (0x0004411f) call4_windows_pane_ParamLimits

0x7322,	// (0x0004411f) call4_windows_pane

0x733c,	// (0x00044139) grid_call4_button_pane_ParamLimits

0x733c,	// (0x00044139) grid_call4_button_pane

0xd5d4,	// (0x0004a3d1) call4_windows_conf_pane

0xd5eb,	// (0x0004a3e8) popup_call4_audio_first_window_ParamLimits

0xd5eb,	// (0x0004a3e8) popup_call4_audio_first_window

0xd637,	// (0x0004a434) popup_call4_audio_second_window_ParamLimits

0xd637,	// (0x0004a434) popup_call4_audio_second_window

0xd64b,	// (0x0004a448) popup_call4_audio_wait_window_ParamLimits

0xd64b,	// (0x0004a448) popup_call4_audio_wait_window

0x7360,	// (0x0004415d) cell_call4_button_pane_ParamLimits

0x7360,	// (0x0004415d) cell_call4_button_pane

0x7385,	// (0x00044182) bg_button_pane_cp09_ParamLimits

0x7385,	// (0x00044182) bg_button_pane_cp09

0x7391,	// (0x0004418e) cell_call4_button_pane_g1_ParamLimits

0x7391,	// (0x0004418e) cell_call4_button_pane_g1

0x739e,	// (0x0004419b) cell_call4_button_pane_t1_ParamLimits

0x739e,	// (0x0004419b) cell_call4_button_pane_t1

0xd693,	// (0x0004a490) popup_call4_audio_conf_window_ParamLimits

0xd693,	// (0x0004a490) popup_call4_audio_conf_window

0x665d,	// (0x0004345a) mup3_progress_pane_t1_ParamLimits

0x667c,	// (0x00043479) mup3_progress_pane_t2_ParamLimits

0xcf77,	// (0x00049d74) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004c599) mup3_progress_pane_t_ParamLimits

0xcf94,	// (0x00049d91) mup_progress_pane_cp03_ParamLimits

0x6b8a,	// (0x00043987) mup3_control_keys_pane_g4_copy1

0x7079,	// (0x00043e76) mp4_rocker2_pane_ParamLimits

0x7079,	// (0x00043e76) mp4_rocker2_pane

0xd6a7,	// (0x0004a4a4) mp4_rocker2_pane_g1

0xd6af,	// (0x0004a4ac) mp4_rocker2_pane_g2

0x73b0,	// (0x000441ad) mp4_rocker2_pane_g3

0x73b8,	// (0x000441b5) mp4_rocker2_pane_g4

0x73c0,	// (0x000441bd) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004c6ce) mp4_rocker2_pane_g

0xa0e6,	// (0x00046ee3) main_camera4_pane

0xa0e6,	// (0x00046ee3) main_video4_pane

0x6dde,	// (0x00043bdb) main_video_tele_dialer_pane_t1_ParamLimits

0x6dde,	// (0x00043bdb) main_video_tele_dialer_pane_t1

0x6df0,	// (0x00043bed) main_video_tele_dialer_pane_t2_ParamLimits

0x6df0,	// (0x00043bed) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004c688) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004c688) main_video_tele_dialer_pane_t

0x73e0,	// (0x000441dd) cam4_autofocus_pane_ParamLimits

0x73e0,	// (0x000441dd) cam4_autofocus_pane

0x73fa,	// (0x000441f7) cam4_image_uncrop_pane_ParamLimits

0x73fa,	// (0x000441f7) cam4_image_uncrop_pane

0x7411,	// (0x0004420e) cam4_indicators_pane_ParamLimits

0x7411,	// (0x0004420e) cam4_indicators_pane

0x742d,	// (0x0004422a) main_camera4_pane_g1_ParamLimits

0x742d,	// (0x0004422a) main_camera4_pane_g1

0x7439,	// (0x00044236) main_camera4_pane_g2_ParamLimits

0x7439,	// (0x00044236) main_camera4_pane_g2

0x7439,	// (0x00044236) main_camera4_pane_g3_ParamLimits

0x7439,	// (0x00044236) main_camera4_pane_g3

0x7445,	// (0x00044242) main_camera4_pane_g4_ParamLimits

0x7445,	// (0x00044242) main_camera4_pane_g4

0x7451,	// (0x0004424e) main_camera4_pane_g5_ParamLimits

0x7451,	// (0x0004424e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004c6d9) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004c6d9) main_camera4_pane_g

0x746b,	// (0x00044268) main_camera4_pane_t1_ParamLimits

0x746b,	// (0x00044268) main_camera4_pane_t1

0xcedc,	// (0x00049cd9) bg_tb_trans_pane_cp06

0x74bb,	// (0x000442b8) cam4_indicators_pane_g1

0x74cc,	// (0x000442c9) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004c6f4) cam4_indicators_pane_g

0x74ea,	// (0x000442e7) cam4_indicators_pane_t1

0x7514,	// (0x00044311) main_video4_pane_g1_ParamLimits

0x7514,	// (0x00044311) main_video4_pane_g1

0x7520,	// (0x0004431d) main_video4_pane_g2_ParamLimits

0x7520,	// (0x0004431d) main_video4_pane_g2

0x752c,	// (0x00044329) main_video4_pane_g3_ParamLimits

0x752c,	// (0x00044329) main_video4_pane_g3

0x7538,	// (0x00044335) main_video4_pane_g4_ParamLimits

0x7538,	// (0x00044335) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004c6fb) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004c6fb) main_video4_pane_g

0x7558,	// (0x00044355) vid4_indicators_pane_ParamLimits

0x7558,	// (0x00044355) vid4_indicators_pane

0x7577,	// (0x00044374) video4_image_uncrop_cif_pane_ParamLimits

0x7577,	// (0x00044374) video4_image_uncrop_cif_pane

0x7586,	// (0x00044383) video4_image_uncrop_nhd_pane_ParamLimits

0x7586,	// (0x00044383) video4_image_uncrop_nhd_pane

0x73fa,	// (0x000441f7) video4_image_uncrop_vga_pane_ParamLimits

0x73fa,	// (0x000441f7) video4_image_uncrop_vga_pane

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp07

0x759d,	// (0x0004439a) vid4_indicators_pane_g1

0x75b1,	// (0x000443ae) vid4_indicators_pane_g2

0x75c5,	// (0x000443c2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004c706) vid4_indicators_pane_g

0x75f4,	// (0x000443f1) vid4_indicators_pane_t1

0x760b,	// (0x00044408) cam4_autofocus_pane_g1

0x7613,	// (0x00044410) cam4_autofocus_pane_g2

0x761b,	// (0x00044418) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004c711) cam4_autofocus_pane_g

0x7623,	// (0x00044420) cam4_autofocus_pane_g3_copy1

0x6e10,	// (0x00043c0d) video_down_pane_cp_t1

0x6e1e,	// (0x00043c1b) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004c68d) video_down_pane_cp_t

0xdadd,	// (0x0004a8da) popup_vitu2_window_ParamLimits

0xdadd,	// (0x0004a8da) popup_vitu2_window

0x762b,	// (0x00044428) aid_size_cell2_itu2_ParamLimits

0x762b,	// (0x00044428) aid_size_cell2_itu2

0x764d,	// (0x0004444a) aid_size_cell_itu2_ParamLimits

0x764d,	// (0x0004444a) aid_size_cell_itu2

0xdaeb,	// (0x0004a8e8) bg_popup_window_pane_cp09_ParamLimits

0xdaeb,	// (0x0004a8e8) bg_popup_window_pane_cp09

0x7691,	// (0x0004448e) field_vitu2_entry_pane_ParamLimits

0x7691,	// (0x0004448e) field_vitu2_entry_pane

0x76b1,	// (0x000444ae) grid_vitu2_function_pane_ParamLimits

0x76b1,	// (0x000444ae) grid_vitu2_function_pane

0x76f5,	// (0x000444f2) grid_vitu2_itu_pane_ParamLimits

0x76f5,	// (0x000444f2) grid_vitu2_itu_pane

0x7771,	// (0x0004456e) cell_vitu2_itu_pane_ParamLimits

0x7771,	// (0x0004456e) cell_vitu2_itu_pane

0x778a,	// (0x00044587) cell_vitu2_function_pane_ParamLimits

0x778a,	// (0x00044587) cell_vitu2_function_pane

0xd6b7,	// (0x0004a4b4) bg_popup_call_pane_cp08_ParamLimits

0xd6b7,	// (0x0004a4b4) bg_popup_call_pane_cp08

0xd6ce,	// (0x0004a4cb) field_vitu2_entry_pane_g1

0xd6da,	// (0x0004a4d7) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004c718) field_vitu2_entry_pane_g

0x1207,	// (0x0003e004) field_vitu2_entry_pane_t1_ParamLimits

0x1207,	// (0x0003e004) field_vitu2_entry_pane_t1

0x1238,	// (0x0003e035) field_vitu2_entry_pane_t2_ParamLimits

0x1238,	// (0x0003e035) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004c71f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004c71f) field_vitu2_entry_pane_t

0x77cb,	// (0x000445c8) bg_button_pane_cp010_ParamLimits

0x77cb,	// (0x000445c8) bg_button_pane_cp010

0x77d9,	// (0x000445d6) cell_vitu2_itu_pane_g1

0x77f9,	// (0x000445f6) cell_vitu2_itu_pane_t1_ParamLimits

0x77f9,	// (0x000445f6) cell_vitu2_itu_pane_t1

0x1255,	// (0x0003e052) cell_vitu2_itu_pane_t2_ParamLimits

0x1255,	// (0x0003e052) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004c729) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004c729) cell_vitu2_itu_pane_t

0xb165,	// (0x00047f62) bg_button_pane_cp011

0x7845,	// (0x00044642) cell_vitu2_function_pane_g1

0xa0e6,	// (0x00046ee3) main_myfav_hc_pane

0x72b5,	// (0x000440b2) popup_image3_note_pane_ParamLimits

0x72b5,	// (0x000440b2) popup_image3_note_pane

0x72c3,	// (0x000440c0) popup_image3_tool_bar_pane_ParamLimits

0x72c3,	// (0x000440c0) popup_image3_tool_bar_pane

0x12cb,	// (0x0003e0c8) cell_vitu2_itu_pane_t3_ParamLimits

0x12cb,	// (0x0003e0c8) cell_vitu2_itu_pane_t3

0xa0e6,	// (0x00046ee3) bg_popup_trans_pane

0xd6fc,	// (0x0004a4f9) grid_image3_tool_bar_pane

0xd706,	// (0x0004a503) bg_popup_trans_pane_g1

0xac4f,	// (0x00047a4c) bg_popup_trans_pane_g2

0xd70e,	// (0x0004a50b) bg_popup_trans_pane_g3

0xd716,	// (0x0004a513) bg_popup_trans_pane_g4

0xd71e,	// (0x0004a51b) bg_popup_trans_pane_g5

0xd726,	// (0x0004a523) bg_popup_trans_pane_g6

0xd72e,	// (0x0004a52b) bg_popup_trans_pane_g7

0xd736,	// (0x0004a533) bg_popup_trans_pane_g8

0xac2f,	// (0x00047a2c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004c730) bg_popup_trans_pane_g

0xd73e,	// (0x0004a53b) cell_image3_tool_bar_pane_ParamLimits

0xd73e,	// (0x0004a53b) cell_image3_tool_bar_pane

0xcc79,	// (0x00049a76) cell_image3_tool_bar_pane_g1

0xa0e6,	// (0x00046ee3) bg_popup_trans_pane_cp1

0xd752,	// (0x0004a54f) popup_image3_note_pane_t1

0xd760,	// (0x0004a55d) popup_image3_note_pane_t2

0xd76e,	// (0x0004a56b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004c743) popup_image3_note_pane_t

0xd77c,	// (0x0004a579) popup_image3_note_pane_t3_copy1

0x7859,	// (0x00044656) bg_myfav_hc_instruction_pane_ParamLimits

0x7859,	// (0x00044656) bg_myfav_hc_instruction_pane

0x7871,	// (0x0004466e) cell_myfav_contact_pane_ParamLimits

0x7871,	// (0x0004466e) cell_myfav_contact_pane

0x788b,	// (0x00044688) cell_myfav_contact_pane_cp1_ParamLimits

0x788b,	// (0x00044688) cell_myfav_contact_pane_cp1

0x78a3,	// (0x000446a0) cell_myfav_contact_pane_cp2_ParamLimits

0x78a3,	// (0x000446a0) cell_myfav_contact_pane_cp2

0x78bb,	// (0x000446b8) cell_myfav_contact_pane_cp3_ParamLimits

0x78bb,	// (0x000446b8) cell_myfav_contact_pane_cp3

0x78d2,	// (0x000446cf) cell_myfav_contact_pane_cp4_ParamLimits

0x78d2,	// (0x000446cf) cell_myfav_contact_pane_cp4

0x78e8,	// (0x000446e5) cell_myfav_contact_pane_cp5_ParamLimits

0x78e8,	// (0x000446e5) cell_myfav_contact_pane_cp5

0x78fc,	// (0x000446f9) cell_myfav_contact_pane_cp6_ParamLimits

0x78fc,	// (0x000446f9) cell_myfav_contact_pane_cp6

0x7910,	// (0x0004470d) cell_myfav_contact_pane_cp7_ParamLimits

0x7910,	// (0x0004470d) cell_myfav_contact_pane_cp7

0xd78a,	// (0x0004a587) listscroll_gen_pane_cp05

0x7928,	// (0x00044725) main_myfav_hc_pane_g1_ParamLimits

0x7928,	// (0x00044725) main_myfav_hc_pane_g1

0x793e,	// (0x0004473b) main_myfav_hc_pane_g2_ParamLimits

0x793e,	// (0x0004473b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004c74a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004c74a) main_myfav_hc_pane_g

0x796c,	// (0x00044769) main_myfav_hc_pane_t1_ParamLimits

0x796c,	// (0x00044769) main_myfav_hc_pane_t1

0xd793,	// (0x0004a590) main_myfav_hc_pane_t2_ParamLimits

0xd793,	// (0x0004a590) main_myfav_hc_pane_t2

0xd7a5,	// (0x0004a5a2) main_myfav_hc_pane_t3_ParamLimits

0xd7a5,	// (0x0004a5a2) main_myfav_hc_pane_t3

0x7983,	// (0x00044780) main_myfav_hc_pane_t4_ParamLimits

0x7983,	// (0x00044780) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004c751) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004c751) main_myfav_hc_pane_t

0xcc79,	// (0x00049a76) bg_myfav_hc_instruction_pane_g1

0xd7b7,	// (0x0004a5b4) cell_myfav_contact_pane_g1_ParamLimits

0xd7b7,	// (0x0004a5b4) cell_myfav_contact_pane_g1

0xd7b7,	// (0x0004a5b4) cell_myfav_contact_pane_g2_ParamLimits

0xd7b7,	// (0x0004a5b4) cell_myfav_contact_pane_g2

0xd7c3,	// (0x0004a5c0) cell_myfav_contact_pane_g3_ParamLimits

0xd7c3,	// (0x0004a5c0) cell_myfav_contact_pane_g3

0xcf61,	// (0x00049d5e) cell_myfav_contact_pane_g4_ParamLimits

0xcf61,	// (0x00049d5e) cell_myfav_contact_pane_g4

0xd7d0,	// (0x0004a5cd) cell_myfav_contact_pane_g5_ParamLimits

0xd7d0,	// (0x0004a5cd) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004c75c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004c75c) cell_myfav_contact_pane_g

0x7954,	// (0x00044751) main_myfav_hc_pane_g3_ParamLimits

0x7954,	// (0x00044751) main_myfav_hc_pane_g3

0x242d,	// (0x0003f22a) popup_adpt_find_window

0x79ad,	// (0x000447aa) afind_page_pane_ParamLimits

0x79ad,	// (0x000447aa) afind_page_pane

0x79ba,	// (0x000447b7) aid_size_cell_afind_ParamLimits

0x79ba,	// (0x000447b7) aid_size_cell_afind

0x79d4,	// (0x000447d1) bg_popup_sub_pane_cp09_ParamLimits

0x79d4,	// (0x000447d1) bg_popup_sub_pane_cp09

0x79e1,	// (0x000447de) find_pane_cp01_ParamLimits

0x79e1,	// (0x000447de) find_pane_cp01

0xd7dc,	// (0x0004a5d9) grid_afind_control_pane_ParamLimits

0xd7dc,	// (0x0004a5d9) grid_afind_control_pane

0x79ee,	// (0x000447eb) grid_afind_pane_ParamLimits

0x79ee,	// (0x000447eb) grid_afind_pane

0x7a0a,	// (0x00044807) cell_afind_pane_ParamLimits

0x7a0a,	// (0x00044807) cell_afind_pane

0xcc79,	// (0x00049a76) afind_page_pane_g1

0x7a52,	// (0x0004484f) afind_page_pane_g2

0x7a5b,	// (0x00044858) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004c767) afind_page_pane_g

0x7a64,	// (0x00044861) afind_page_pane_t1

0xd7f0,	// (0x0004a5ed) cell_afind_grid_control_pane_ParamLimits

0xd7f0,	// (0x0004a5ed) cell_afind_grid_control_pane

0xd5c8,	// (0x0004a3c5) bg_button_pane_cp69_ParamLimits

0xd5c8,	// (0x0004a3c5) bg_button_pane_cp69

0x7a84,	// (0x00044881) cell_afind_pane_g1_ParamLimits

0x7a84,	// (0x00044881) cell_afind_pane_g1

0x7a91,	// (0x0004488e) cell_afind_pane_t1_ParamLimits

0x7a91,	// (0x0004488e) cell_afind_pane_t1

0xaa48,	// (0x00047845) bg_button_pane_cp72

0xd7ff,	// (0x0004a5fc) cell_afind_grid_control_pane_g1

0x50e4,	// (0x00041ee1) aid_image_placing_area_ParamLimits

0x50e4,	// (0x00041ee1) aid_image_placing_area

0xd296,	// (0x0004a093) field_vitu_entry_pane_g1_ParamLimits

0xd296,	// (0x0004a093) field_vitu_entry_pane_g1

0xd2a2,	// (0x0004a09f) field_vitu_entry_pane_g2_ParamLimits

0xd2a2,	// (0x0004a09f) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004c618) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004c618) field_vitu_entry_pane_g

0x6c12,	// (0x00043a0f) cell_vitu_itu_pane_g1_ParamLimits

0x6c54,	// (0x00043a51) cell_vitu_itu_pane_t3_ParamLimits

0x6c54,	// (0x00043a51) cell_vitu_itu_pane_t3

0xd578,	// (0x0004a375) mp4_progress_pane_t1_ParamLimits

0xd591,	// (0x0004a38e) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004c6ad) mp4_progress_pane_t_ParamLimits

0xd5aa,	// (0x0004a3a7) mup_progress_pane_cp04_ParamLimits

0x7997,	// (0x00044794) main_myfav_hc_pane_t5_ParamLimits

0x7997,	// (0x00044794) main_myfav_hc_pane_t5

0x22bb,	// (0x0003f0b8) aid_zoom_text_primary

0x242d,	// (0x0003f22a) popup_adpt_find_window_ParamLimits

0xb165,	// (0x00047f62) main_cam_set_pane

0x741f,	// (0x0004421c) cam4_zoom_pane_ParamLimits

0x741f,	// (0x0004421c) cam4_zoom_pane

0x7aa3,	// (0x000448a0) main_cam_set_pane_g1_ParamLimits

0x7aa3,	// (0x000448a0) main_cam_set_pane_g1

0x7ab1,	// (0x000448ae) main_cam_set_pane_g2_ParamLimits

0x7ab1,	// (0x000448ae) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004c76e) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004c76e) main_cam_set_pane_g

0x7abd,	// (0x000448ba) main_cam_set_pane_t1_ParamLimits

0x7abd,	// (0x000448ba) main_cam_set_pane_t1

0x7ad9,	// (0x000448d6) main_cset_listscroll_pane_ParamLimits

0x7ad9,	// (0x000448d6) main_cset_listscroll_pane

0x7b04,	// (0x00044901) main_cset_slider_pane_ParamLimits

0x7b04,	// (0x00044901) main_cset_slider_pane

0xd810,	// (0x0004a60d) main_cset_list_pane_ParamLimits

0xd810,	// (0x0004a60d) main_cset_list_pane

0xd820,	// (0x0004a61d) scroll_pane_cp028

0x7b23,	// (0x00044920) aid_area_touch_slider

0x7b3f,	// (0x0004493c) cset_slider_pane

0x7b69,	// (0x00044966) main_cset_slider_pane_g1

0x7b7e,	// (0x0004497b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004c773) main_cset_slider_pane_g

0xd859,	// (0x0004a656) main_cset_slider_pane_t1

0x7c40,	// (0x00044a3d) main_cset_slider_pane_t2

0x7c5a,	// (0x00044a57) main_cset_slider_pane_t3

0x7c74,	// (0x00044a71) main_cset_slider_pane_t4

0x7c8e,	// (0x00044a8b) main_cset_slider_pane_t5

0x7cac,	// (0x00044aa9) main_cset_slider_pane_t6

0x7cc3,	// (0x00044ac0) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004c798) main_cset_slider_pane_t

0x7dcf,	// (0x00044bcc) cset_list_set_pane_ParamLimits

0x7dcf,	// (0x00044bcc) cset_list_set_pane

0x7de5,	// (0x00044be2) aid_position_infowindow_above

0x7ded,	// (0x00044bea) aid_position_infowindow_below

0x131d,	// (0x0003e11a) cset_list_set_pane_g1_ParamLimits

0x131d,	// (0x0003e11a) cset_list_set_pane_g1

0x1329,	// (0x0003e126) cset_list_set_pane_g3_ParamLimits

0x1329,	// (0x0003e126) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004c7b7) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004c7b7) cset_list_set_pane_g

0x1338,	// (0x0003e135) cset_list_set_pane_t1_ParamLimits

0x1338,	// (0x0003e135) cset_list_set_pane_t1

0xb165,	// (0x00047f62) list_highlight_pane_cp021_ParamLimits

0xb165,	// (0x00047f62) list_highlight_pane_cp021

0xb5a6,	// (0x000483a3) cset_slider_pane_g1

0xb5b8,	// (0x000483b5) cset_slider_pane_g2

0xb5af,	// (0x000483ac) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004c7bc) cset_slider_pane_g

0x7df5,	// (0x00044bf2) aid_area_touch_cam4_zoom

0x7dfd,	// (0x00044bfa) cam4_zoom_cont_pane

0x7e05,	// (0x00044c02) cam4_zoom_pane_g1

0x7e0d,	// (0x00044c0a) cam4_zoom_pane_g2

0x7e15,	// (0x00044c12) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004c7c3) cam4_zoom_pane_g

0xdaf9,	// (0x0004a8f6) cam4_zoom_cont_pane_g1

0xdb02,	// (0x0004a8ff) cam4_zoom_cont_pane_g2

0xdb0b,	// (0x0004a908) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004c7ca) cam4_zoom_cont_pane_g

0x730c,	// (0x00044109) call4_image_pane_ParamLimits

0x730c,	// (0x00044109) call4_image_pane

0xd5d4,	// (0x0004a3d1) call4_windows_conf_pane_ParamLimits

0xd615,	// (0x0004a412) popup_call4_audio_in_window_ParamLimits

0xd615,	// (0x0004a412) popup_call4_audio_in_window

0xa0e6,	// (0x00046ee3) bg_popup_call2_act_pane_cp02

0xd68b,	// (0x0004a488) call4_list_conf_pane

0xcc79,	// (0x00049a76) call4_image_pane_g1

0xcc79,	// (0x00049a76) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d9) call4_image_pane_g

0xd8f9,	// (0x0004a6f6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f9,	// (0x0004a6f6) list_single_graphic_popup_conf4_pane

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp022

0xd90c,	// (0x0004a709) list_single_graphic_popup_conf4_pane_g1

0xb15d,	// (0x00047f5a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004c7d1) list_single_graphic_popup_conf4_pane_g

0xd914,	// (0x0004a711) list_single_graphic_popup_conf4_pane_t1

0x34bc,	// (0x000402b9) popup_vtel_slider_window_ParamLimits

0x34bc,	// (0x000402b9) popup_vtel_slider_window

0xd5b6,	// (0x0004a3b3) dialer2_ne_pane_t2_ParamLimits

0xd5b6,	// (0x0004a3b3) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004c6b2) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004c6b2) dialer2_ne_pane_t

0xb165,	// (0x00047f62) bg_popup_sub_pane_cp010_ParamLimits

0xb165,	// (0x00047f62) bg_popup_sub_pane_cp010

0x7e1d,	// (0x00044c1a) popup_vtel_slider_window_g1_ParamLimits

0x7e1d,	// (0x00044c1a) popup_vtel_slider_window_g1

0x7e29,	// (0x00044c26) popup_vtel_slider_window_g2_ParamLimits

0x7e29,	// (0x00044c26) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004c7d6) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004c7d6) popup_vtel_slider_window_g

0x7e71,	// (0x00044c6e) vtel_slider_pane_ParamLimits

0x7e71,	// (0x00044c6e) vtel_slider_pane

0x7e80,	// (0x00044c7d) vtel_slider_pane_g1_ParamLimits

0x7e80,	// (0x00044c7d) vtel_slider_pane_g1

0x7e8d,	// (0x00044c8a) vtel_slider_pane_g2_ParamLimits

0x7e8d,	// (0x00044c8a) vtel_slider_pane_g2

0x7e9a,	// (0x00044c97) vtel_slider_pane_g3_ParamLimits

0x7e9a,	// (0x00044c97) vtel_slider_pane_g3

0x7e80,	// (0x00044c7d) vtel_slider_pane_g4_ParamLimits

0x7e80,	// (0x00044c7d) vtel_slider_pane_g4

0x7ea7,	// (0x00044ca4) vtel_slider_pane_g5_ParamLimits

0x7ea7,	// (0x00044ca4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004c7df) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004c7df) vtel_slider_pane_g

0xb165,	// (0x00047f62) main_gallery2_pane

0x7673,	// (0x00044470) aid_size_row_itut2_dropdow_list_ParamLimits

0x7673,	// (0x00044470) aid_size_row_itut2_dropdow_list

0x76d3,	// (0x000444d0) grid_vitu2_function_top_pane_ParamLimits

0x76d3,	// (0x000444d0) grid_vitu2_function_top_pane

0x772d,	// (0x0004452a) popup_vitu2_dropdown_list_window_ParamLimits

0x772d,	// (0x0004452a) popup_vitu2_dropdown_list_window

0x774d,	// (0x0004454a) popup_vitu2_match_list_window

0x7eb4,	// (0x00044cb1) cell_vitu2_function_top_pane_ParamLimits

0x7eb4,	// (0x00044cb1) cell_vitu2_function_top_pane

0x7ece,	// (0x00044ccb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ece,	// (0x00044ccb) cell_vitu2_function_top_pane_cp01

0x7eea,	// (0x00044ce7) cell_vitu2_function_top_wide_pane_ParamLimits

0x7eea,	// (0x00044ce7) cell_vitu2_function_top_wide_pane

0xb165,	// (0x00047f62) bg_button_pane_cp012

0x7f06,	// (0x00044d03) cell_vitu2_function_top_pane_g1

0x7f1a,	// (0x00044d17) bg_button_pane_cp013_ParamLimits

0x7f1a,	// (0x00044d17) bg_button_pane_cp013

0x7f36,	// (0x00044d33) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f36,	// (0x00044d33) cell_vitu2_function_top_wide_pane_g1

0xdadd,	// (0x0004a8da) bg_popup_sub_pane_cp20

0x7f4e,	// (0x00044d4b) list_vitu2_match_list_pane

0xd706,	// (0x0004a503) bg_popup_sub_pane_cp20_g1

0xd70e,	// (0x0004a50b) bg_popup_sub_pane_cp20_g2

0xac4f,	// (0x00047a4c) bg_popup_sub_pane_cp20_g3

0xd716,	// (0x0004a513) bg_popup_sub_pane_cp20_g4

0xac2f,	// (0x00047a2c) bg_popup_sub_pane_cp20_g5

0xd92a,	// (0x0004a727) bg_popup_sub_pane_cp20_g6

0xd726,	// (0x0004a523) bg_popup_sub_pane_cp20_g7

0xd72e,	// (0x0004a52b) bg_popup_sub_pane_cp20_g8

0xd736,	// (0x0004a533) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004c7ea) bg_popup_sub_pane_cp20_g

0x7f66,	// (0x00044d63) list_vitu2_match_list_item_pane_ParamLimits

0x7f66,	// (0x00044d63) list_vitu2_match_list_item_pane

0x7f78,	// (0x00044d75) list_vitu2_match_list_item_pane_t1

0xa0e6,	// (0x00046ee3) bg_popup_sub_pane_cp21

0xb085,	// (0x00047e82) grid_vitu2_dropdown_list_pane

0x7f86,	// (0x00044d83) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f86,	// (0x00044d83) cell_vitu2_dropdown_list_char_pane

0x7fa7,	// (0x00044da4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fa7,	// (0x00044da4) cell_vitu2_dropdown_list_ctrl_pane

0xd932,	// (0x0004a72f) cell_vitu2_dropdown_list_char_pane_g1

0xd93b,	// (0x0004a738) cell_vitu2_dropdown_list_char_pane_g2

0xd944,	// (0x0004a741) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004c807) cell_vitu2_dropdown_list_char_pane_g

0x7fd3,	// (0x00044dd0) cell_vitu2_dropdown_list_char_pane_t1

0x7fe1,	// (0x00044dde) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7fe1,	// (0x00044dde) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7ff1,	// (0x00044dee) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7ff1,	// (0x00044dee) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8002,	// (0x00044dff) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8002,	// (0x00044dff) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8012,	// (0x00044e0f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8012,	// (0x00044e0f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcedc,	// (0x00049cd9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcedc,	// (0x00049cd9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004c80e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004c80e) cell_vitu2_dropdown_list_ctrl_pane_g

0x802e,	// (0x00044e2b) aid_size_cell_gallery2_ParamLimits

0x802e,	// (0x00044e2b) aid_size_cell_gallery2

0x8048,	// (0x00044e45) grid_gallery2_pane_ParamLimits

0x8048,	// (0x00044e45) grid_gallery2_pane

0x6a9b,	// (0x00043898) scroll_pane_cp029_ParamLimits

0x6a9b,	// (0x00043898) scroll_pane_cp029

0x805f,	// (0x00044e5c) cell_gallery2_pane_ParamLimits

0x805f,	// (0x00044e5c) cell_gallery2_pane

0xd94d,	// (0x0004a74a) cell_gallery2_pane_g2

0xea2f,	// (0x0004b82c) cell_gallery2_pane_g3

0xd955,	// (0x0004a752) cell_gallery2_pane_g4

0xd95d,	// (0x0004a75a) cell_gallery2_pane_g5

0xa9f6,	// (0x000477f3) grid_highlight_pane_cp10

0x774d,	// (0x0004454a) popup_vitu2_match_list_window_ParamLimits

0x7761,	// (0x0004455e) popup_vitu2_query_window_ParamLimits

0x7761,	// (0x0004455e) popup_vitu2_query_window

0xa0e6,	// (0x00046ee3) bg_vitu2_candi_button_pane

0xd932,	// (0x0004a72f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd93b,	// (0x0004a738) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd944,	// (0x0004a741) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x139f,	// (0x0003e19c) bg_button_pane_cp015

0x80b3,	// (0x00044eb0) bg_button_pane_cp016

0x80c6,	// (0x00044ec3) bg_button_pane_cp017

0xc868,	// (0x00049665) bg_popup_sub_pane_cp22

0xd965,	// (0x0004a762) popup_vitu2_query_window_g1

0x13d2,	// (0x0003e1cf) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004c819) popup_vitu2_query_window_g

0x13ef,	// (0x0003e1ec) popup_vitu2_query_window_t1_ParamLimits

0x13ef,	// (0x0003e1ec) popup_vitu2_query_window_t1

0x1422,	// (0x0003e21f) popup_vitu2_query_window_t2_ParamLimits

0x1422,	// (0x0003e21f) popup_vitu2_query_window_t2

0x1434,	// (0x0003e231) popup_vitu2_query_window_t3_ParamLimits

0x1434,	// (0x0003e231) popup_vitu2_query_window_t3

0x80ea,	// (0x00044ee7) popup_vitu2_query_window_t4_ParamLimits

0x80ea,	// (0x00044ee7) popup_vitu2_query_window_t4

0x810b,	// (0x00044f08) popup_vitu2_query_window_t5_ParamLimits

0x810b,	// (0x00044f08) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004c820) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004c820) popup_vitu2_query_window_t

0xd808,	// (0x0004a605) main_cset_text_pane

0x7b23,	// (0x00044920) aid_area_touch_slider_ParamLimits

0x7b3f,	// (0x0004493c) cset_slider_pane_ParamLimits

0x7b69,	// (0x00044966) main_cset_slider_pane_g1_ParamLimits

0x7b7e,	// (0x0004497b) main_cset_slider_pane_g2_ParamLimits

0xd829,	// (0x0004a626) main_cset_slider_pane_g3_ParamLimits

0xd829,	// (0x0004a626) main_cset_slider_pane_g3

0x7b93,	// (0x00044990) main_cset_slider_pane_g4_ParamLimits

0x7b93,	// (0x00044990) main_cset_slider_pane_g4

0x7ba2,	// (0x0004499f) main_cset_slider_pane_g5_ParamLimits

0x7ba2,	// (0x0004499f) main_cset_slider_pane_g5

0x7bb0,	// (0x000449ad) main_cset_slider_pane_g6_ParamLimits

0x7bb0,	// (0x000449ad) main_cset_slider_pane_g6

0xf976,	// (0x0004c773) main_cset_slider_pane_g_ParamLimits

0xd859,	// (0x0004a656) main_cset_slider_pane_t1_ParamLimits

0x7c40,	// (0x00044a3d) main_cset_slider_pane_t2_ParamLimits

0x7c5a,	// (0x00044a57) main_cset_slider_pane_t3_ParamLimits

0x7c74,	// (0x00044a71) main_cset_slider_pane_t4_ParamLimits

0x7c8e,	// (0x00044a8b) main_cset_slider_pane_t5_ParamLimits

0x7cac,	// (0x00044aa9) main_cset_slider_pane_t6_ParamLimits

0x7cc3,	// (0x00044ac0) main_cset_slider_pane_t7_ParamLimits

0x7cf1,	// (0x00044aee) main_cset_slider_pane_t8_ParamLimits

0x7cf1,	// (0x00044aee) main_cset_slider_pane_t8

0x7d19,	// (0x00044b16) main_cset_slider_pane_t9_ParamLimits

0x7d19,	// (0x00044b16) main_cset_slider_pane_t9

0x7d41,	// (0x00044b3e) main_cset_slider_pane_t10_ParamLimits

0x7d41,	// (0x00044b3e) main_cset_slider_pane_t10

0x7d69,	// (0x00044b66) main_cset_slider_pane_t11_ParamLimits

0x7d69,	// (0x00044b66) main_cset_slider_pane_t11

0x7d93,	// (0x00044b90) main_cset_slider_pane_t12_ParamLimits

0x7d93,	// (0x00044b90) main_cset_slider_pane_t12

0x7db0,	// (0x00044bad) main_cset_slider_pane_t13_ParamLimits

0x7db0,	// (0x00044bad) main_cset_slider_pane_t13

0xf99b,	// (0x0004c798) main_cset_slider_pane_t_ParamLimits

0xa0e6,	// (0x00046ee3) bg_popup_sub_pane_cp011

0xd971,	// (0x0004a76e) main_cset_text_pane_g1

0xd979,	// (0x0004a776) main_cset_text_pane_t1

0xd987,	// (0x0004a784) main_cset_text_pane_t2

0xd995,	// (0x0004a792) main_cset_text_pane_t3

0xd9a3,	// (0x0004a7a0) main_cset_text_pane_t4

0xd9b1,	// (0x0004a7ae) main_cset_text_pane_t5

0xd9bf,	// (0x0004a7bc) main_cset_text_pane_t6

0xd9cd,	// (0x0004a7ca) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004c82f) main_cset_text_pane_t

0xa0e6,	// (0x00046ee3) main_cam4_burst_pane

0xa0e6,	// (0x00046ee3) main_cam5_pane

0x7a72,	// (0x0004486f) bg_button_pane_cp019

0x7a7b,	// (0x00044878) bg_button_pane_cp020

0xd835,	// (0x0004a632) main_cset_slider_pane_g7_ParamLimits

0xd835,	// (0x0004a632) main_cset_slider_pane_g7

0xd841,	// (0x0004a63e) main_cset_slider_pane_g8_ParamLimits

0xd841,	// (0x0004a63e) main_cset_slider_pane_g8

0x7bc4,	// (0x000449c1) main_cset_slider_pane_g9_ParamLimits

0x7bc4,	// (0x000449c1) main_cset_slider_pane_g9

0x7bd0,	// (0x000449cd) main_cset_slider_pane_g10_ParamLimits

0x7bd0,	// (0x000449cd) main_cset_slider_pane_g10

0x7bdc,	// (0x000449d9) main_cset_slider_pane_g11_ParamLimits

0x7bdc,	// (0x000449d9) main_cset_slider_pane_g11

0x7be8,	// (0x000449e5) main_cset_slider_pane_g12_ParamLimits

0x7be8,	// (0x000449e5) main_cset_slider_pane_g12

0x7bf4,	// (0x000449f1) main_cset_slider_pane_g13_ParamLimits

0x7bf4,	// (0x000449f1) main_cset_slider_pane_g13

0x7c00,	// (0x000449fd) main_cset_slider_pane_g14_ParamLimits

0x7c00,	// (0x000449fd) main_cset_slider_pane_g14

0x7c0c,	// (0x00044a09) main_cset_slider_pane_g15_ParamLimits

0x7c0c,	// (0x00044a09) main_cset_slider_pane_g15

0xd887,	// (0x0004a684) main_cset_slider_pane_t14_ParamLimits

0xd887,	// (0x0004a684) main_cset_slider_pane_t14

0xd8c0,	// (0x0004a6bd) main_cset_slider_pane_t15_ParamLimits

0xd8c0,	// (0x0004a6bd) main_cset_slider_pane_t15

0x812c,	// (0x00044f29) aid_cam4_burst_size_cell_ParamLimits

0x812c,	// (0x00044f29) aid_cam4_burst_size_cell

0x8148,	// (0x00044f45) grid_cam4_burst_pane_ParamLimits

0x8148,	// (0x00044f45) grid_cam4_burst_pane

0x8178,	// (0x00044f75) linegrid_cam4_burst_pane_ParamLimits

0x8178,	// (0x00044f75) linegrid_cam4_burst_pane

0x8198,	// (0x00044f95) scroll_pane_cp30_ParamLimits

0x8198,	// (0x00044f95) scroll_pane_cp30

0x81a4,	// (0x00044fa1) cell_cam4_burst_pane_ParamLimits

0x81a4,	// (0x00044fa1) cell_cam4_burst_pane

0xd9db,	// (0x0004a7d8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9db,	// (0x0004a7d8) linegrid_cam4_burst_pane_g1

0x81e0,	// (0x00044fdd) linegrid_cam4_burst_pane_g2_ParamLimits

0x81e0,	// (0x00044fdd) linegrid_cam4_burst_pane_g2

0xd9e8,	// (0x0004a7e5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e8,	// (0x0004a7e5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004c83e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004c83e) linegrid_cam4_burst_pane_g

0x81f1,	// (0x00044fee) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x81f1,	// (0x00044fee) linegrid_cam4_burst_pane_g3_copy1

0xd9f5,	// (0x0004a7f2) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9f5,	// (0x0004a7f2) linegrid_cam4_burst_pane_g4

0x820b,	// (0x00045008) linegrid_cam4_burst_pane_g5_ParamLimits

0x820b,	// (0x00045008) linegrid_cam4_burst_pane_g5

0x821c,	// (0x00045019) linegrid_cam4_burst_pane_g6_ParamLimits

0x821c,	// (0x00045019) linegrid_cam4_burst_pane_g6

0xda02,	// (0x0004a7ff) linegrid_cam4_burst_pane_g7_ParamLimits

0xda02,	// (0x0004a7ff) linegrid_cam4_burst_pane_g7

0x822d,	// (0x0004502a) cell_cam4_burst_pane_g1

0xda1b,	// (0x0004a818) main_cam5_pane_t1_ParamLimits

0xda1b,	// (0x0004a818) main_cam5_pane_t1

0xda2d,	// (0x0004a82a) main_cam5_pane_t2_ParamLimits

0xda2d,	// (0x0004a82a) main_cam5_pane_t2

0xda3f,	// (0x0004a83c) main_cam5_pane_t3_ParamLimits

0xda3f,	// (0x0004a83c) main_cam5_pane_t3

0xda51,	// (0x0004a84e) main_cam5_pane_t4_ParamLimits

0xda51,	// (0x0004a84e) main_cam5_pane_t4

0xda69,	// (0x0004a866) main_cam5_pane_t5_ParamLimits

0xda69,	// (0x0004a866) main_cam5_pane_t5

0xda7d,	// (0x0004a87a) main_cam5_pane_t6_ParamLimits

0xda7d,	// (0x0004a87a) main_cam5_pane_t6

0xda91,	// (0x0004a88e) main_cam5_pane_t7_ParamLimits

0xda91,	// (0x0004a88e) main_cam5_pane_t7

0xdaa3,	// (0x0004a8a0) main_cam5_pane_t8_ParamLimits

0xdaa3,	// (0x0004a8a0) main_cam5_pane_t8

0xdabf,	// (0x0004a8bc) main_cam5_pane_t9_ParamLimits

0xdabf,	// (0x0004a8bc) main_cam5_pane_t9

0xdb14,	// (0x0004a911) main_cam5_pane_t10_ParamLimits

0xdb14,	// (0x0004a911) main_cam5_pane_t10

0xdb26,	// (0x0004a923) main_cam5_pane_t11_ParamLimits

0xdb26,	// (0x0004a923) main_cam5_pane_t11

0xdb38,	// (0x0004a935) main_cam5_pane_t12_ParamLimits

0xdb38,	// (0x0004a935) main_cam5_pane_t12

0xdb4d,	// (0x0004a94a) main_cam5_pane_t13_ParamLimits

0xdb4d,	// (0x0004a94a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004c84a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004c84a) main_cam5_pane_t

0x24e3,	// (0x0003f2e0) popup_scut_keymap_window_ParamLimits

0x24e3,	// (0x0003f2e0) popup_scut_keymap_window

0x8240,	// (0x0004503d) aid_size_cell_brow_shortcut

0xa9f6,	// (0x000477f3) bg_popup_window_pane_cp010

0x824c,	// (0x00045049) grid_scut_pane

0x8258,	// (0x00045055) cell_scut_pane_ParamLimits

0x8258,	// (0x00045055) cell_scut_pane

0x826f,	// (0x0004506c) cell_scut_pane_g1

0xdb6a,	// (0x0004a967) cell_scut_pane_t1

0xdb79,	// (0x0004a976) cell_scut_pane_t2

0x8278,	// (0x00045075) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004c865) cell_scut_pane_t

0x627c,	// (0x00043079) main_mup3_pane_g8_ParamLimits

0x627c,	// (0x00043079) main_mup3_pane_g8

0x7681,	// (0x0004447e) area_vitu2_query_pane_ParamLimits

0x7681,	// (0x0004447e) area_vitu2_query_pane

0x13b1,	// (0x0003e1ae) input_focus_pane_cp08

0xdb88,	// (0x0004a985) area_vitu2_query_pane_g1

0x14b2,	// (0x0003e2af) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004c86c) area_vitu2_query_pane_g

0x8286,	// (0x00045083) area_vitu2_query_pane_t1_ParamLimits

0x8286,	// (0x00045083) area_vitu2_query_pane_t1

0x829a,	// (0x00045097) area_vitu2_query_pane_t2_ParamLimits

0x829a,	// (0x00045097) area_vitu2_query_pane_t2

0x14c3,	// (0x0003e2c0) area_vitu2_query_pane_t3_ParamLimits

0x14c3,	// (0x0003e2c0) area_vitu2_query_pane_t3

0x14eb,	// (0x0003e2e8) area_vitu2_query_pane_t4_ParamLimits

0x14eb,	// (0x0003e2e8) area_vitu2_query_pane_t4

0x1513,	// (0x0003e310) area_vitu2_query_pane_t5_ParamLimits

0x1513,	// (0x0003e310) area_vitu2_query_pane_t5

0x153b,	// (0x0003e338) area_vitu2_query_pane_t6_ParamLimits

0x153b,	// (0x0003e338) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004c871) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004c871) area_vitu2_query_pane_t

0x82ae,	// (0x000450ab) bg_button_pane_cp018

0x82bc,	// (0x000450b9) bg_button_pane_cp021

0x1587,	// (0x0003e384) bg_button_pane_cp022

0x1598,	// (0x0003e395) input_focus_pane_cp09

0xb2c1,	// (0x000480be) aid_size_touch_mv_arrow_left

0xb2ea,	// (0x000480e7) aid_size_touch_mv_arrow_right

0x7c24,	// (0x00044a21) main_cset_slider_pane_g16_ParamLimits

0x7c24,	// (0x00044a21) main_cset_slider_pane_g16

0x7c32,	// (0x00044a2f) main_cset_slider_pane_g17_ParamLimits

0x7c32,	// (0x00044a2f) main_cset_slider_pane_g17

0x822d,	// (0x0004502a) cell_cam4_burst_pane_g1_ParamLimits

0xa0e6,	// (0x00046ee3) compa_mode_pane

0x7e35,	// (0x00044c32) popup_vtel_slider_window_g3_ParamLimits

0x7e35,	// (0x00044c32) popup_vtel_slider_window_g3

0x7e49,	// (0x00044c46) popup_vtel_slider_window_g4_ParamLimits

0x7e49,	// (0x00044c46) popup_vtel_slider_window_g4

0x7e5d,	// (0x00044c5a) popup_vtel_slider_window_t1_ParamLimits

0x7e5d,	// (0x00044c5a) popup_vtel_slider_window_t1

0xa0e6,	// (0x00046ee3) main_cl_pane

0x55f6,	// (0x000423f3) popup_imed_adjust2_window_ParamLimits

0xc868,	// (0x00049665) bg_tb_trans_pane_cp05_ParamLimits

0xd1bf,	// (0x00049fbc) popup_imed_adjust2_window_g1_ParamLimits

0xd1ce,	// (0x00049fcb) popup_imed_adjust2_window_g2_ParamLimits

0xd1ce,	// (0x00049fcb) popup_imed_adjust2_window_g2

0xd1da,	// (0x00049fd7) popup_imed_adjust2_window_g3_ParamLimits

0xd1da,	// (0x00049fd7) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004c5dc) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004c5dc) popup_imed_adjust2_window_g

0xd1e6,	// (0x00049fe3) popup_imed_adjust2_window_t1_ParamLimits

0xd1fe,	// (0x00049ffb) slider_imed_adjust_pane_ParamLimits

0xd21e,	// (0x0004a01b) slider_imed_adjust_pane_g1_ParamLimits

0xd22e,	// (0x0004a02b) slider_imed_adjust_pane_g2_ParamLimits

0xd23e,	// (0x0004a03b) slider_imed_adjust_pane_g3_ParamLimits

0xd24f,	// (0x0004a04c) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004c5e3) slider_imed_adjust_pane_g_ParamLimits

0x73c8,	// (0x000441c5) aid_touch_area_cam4_ParamLimits

0x73c8,	// (0x000441c5) aid_touch_area_cam4

0x73d8,	// (0x000441d5) battery_pane_cp01

0x745f,	// (0x0004425c) main_camera4_pane_g6_ParamLimits

0x745f,	// (0x0004425c) main_camera4_pane_g6

0x747d,	// (0x0004427a) main_camera4_pane_t2_ParamLimits

0x747d,	// (0x0004427a) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004c6e6) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004c6e6) main_camera4_pane_t

0x7504,	// (0x00044301) aid_touch_area_vid4_ParamLimits

0x7504,	// (0x00044301) aid_touch_area_vid4

0x7544,	// (0x00044341) main_video4_pane_g5_ParamLimits

0x7544,	// (0x00044341) main_video4_pane_g5

0x7568,	// (0x00044365) vid4_progress_pane_ParamLimits

0x7568,	// (0x00044365) vid4_progress_pane

0xd84d,	// (0x0004a64a) main_cset_slider_pane_g18_ParamLimits

0xd84d,	// (0x0004a64a) main_cset_slider_pane_g18

0xda0f,	// (0x0004a80c) cell_cam4_burst_pane_g2_ParamLimits

0xda0f,	// (0x0004a80c) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004c845) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004c845) cell_cam4_burst_pane_g

0x82c8,	// (0x000450c5) bg_cl_pane_ParamLimits

0x82c8,	// (0x000450c5) bg_cl_pane

0x82d4,	// (0x000450d1) cl_header_pane_ParamLimits

0x82d4,	// (0x000450d1) cl_header_pane

0x82e0,	// (0x000450dd) cl_listscroll_pane_ParamLimits

0x82e0,	// (0x000450dd) cl_listscroll_pane

0xdb94,	// (0x0004a991) bg_cl_pane_g1

0xdb9c,	// (0x0004a999) bg_cl_pane_g2

0xdba4,	// (0x0004a9a1) bg_cl_pane_g3

0xdbac,	// (0x0004a9a9) bg_cl_pane_g4

0xdbb4,	// (0x0004a9b1) bg_cl_pane_g5

0xdbbc,	// (0x0004a9b9) bg_cl_pane_g6

0xdbc4,	// (0x0004a9c1) bg_cl_pane_g7

0xdbcc,	// (0x0004a9c9) bg_cl_pane_g8

0xdbd4,	// (0x0004a9d1) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004c880) bg_cl_pane_g

0x82ec,	// (0x000450e9) aid_height_cl_leading_ParamLimits

0x82ec,	// (0x000450e9) aid_height_cl_leading

0x82f8,	// (0x000450f5) aid_height_cl_text_ParamLimits

0x82f8,	// (0x000450f5) aid_height_cl_text

0xdadd,	// (0x0004a8da) bg_cl_header_pane_ParamLimits

0xdadd,	// (0x0004a8da) bg_cl_header_pane

0x8310,	// (0x0004510d) cl_header_pane_g1_ParamLimits

0x8310,	// (0x0004510d) cl_header_pane_g1

0x831d,	// (0x0004511a) cl_header_pane_t1_ParamLimits

0x831d,	// (0x0004511a) cl_header_pane_t1

0xdbdc,	// (0x0004a9d9) cl_list_pane

0xd820,	// (0x0004a61d) hc_scroll_pane_cp01

0xac2f,	// (0x00047a2c) bg_cl_header_pane_g1

0xd706,	// (0x0004a503) bg_cl_header_pane_g2

0xac4f,	// (0x00047a4c) bg_cl_header_pane_g3

0xd716,	// (0x0004a513) bg_cl_header_pane_g4

0xd70e,	// (0x0004a50b) bg_cl_header_pane_g5

0xd92a,	// (0x0004a727) bg_cl_header_pane_g6

0xd72e,	// (0x0004a52b) bg_cl_header_pane_g7

0xd736,	// (0x0004a533) bg_cl_header_pane_g8

0xd726,	// (0x0004a523) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004c893) bg_cl_header_pane_g

0x832f,	// (0x0004512c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x832f,	// (0x0004512c) hc_cl_list_double_graphic_heading_pane

0x8340,	// (0x0004513d) hc_cl_list_single_graphic_pane_ParamLimits

0x8340,	// (0x0004513d) hc_cl_list_single_graphic_pane

0x8359,	// (0x00045156) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8359,	// (0x00045156) hc_cl_list_single_graphic_pane_g1

0x8365,	// (0x00045162) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8365,	// (0x00045162) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004c8a6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004c8a6) hc_cl_list_single_graphic_pane_g

0x8379,	// (0x00045176) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8379,	// (0x00045176) hc_cl_list_single_graphic_pane_t1

0x8359,	// (0x00045156) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8359,	// (0x00045156) hc_cl_list_double_graphic_heading_pane_g1

0x838e,	// (0x0004518b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x838e,	// (0x0004518b) hc_cl_list_double_graphic_heading_pane_g2

0x83a2,	// (0x0004519f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83a2,	// (0x0004519f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004c8ab) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004c8ab) hc_cl_list_double_graphic_heading_pane_g

0x83b6,	// (0x000451b3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83b6,	// (0x000451b3) hc_cl_list_double_graphic_heading_pane_t1

0x83cb,	// (0x000451c8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83cb,	// (0x000451c8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004c8b2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004c8b2) hc_cl_list_double_graphic_heading_pane_t

0x83e8,	// (0x000451e5) vid4_progress_pane_g1

0x83f8,	// (0x000451f5) vid4_progress_pane_g2

0x8408,	// (0x00045205) vid4_progress_pane_g3

0x841a,	// (0x00045217) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004c8b7) vid4_progress_pane_g

0x8432,	// (0x0004522f) vid4_progress_pane_t1

0x8448,	// (0x00045245) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004c8c2) vid4_progress_pane_t

0x8472,	// (0x0004526f) wait_bar_pane_cp07

0xca6c,	// (0x00049869) blid_firmament_pane_ParamLimits

0xcaaf,	// (0x000498ac) popup_blid_sat_info2_window_g1

0xcad3,	// (0x000498d0) popup_blid_sat_info2_window_t3

0xcae1,	// (0x000498de) popup_blid_sat_info2_window_t4

0xcaef,	// (0x000498ec) popup_blid_sat_info2_window_t5

0xcafd,	// (0x000498fa) popup_blid_sat_info2_window_t6

0xcb0d,	// (0x0004990a) popup_blid_sat_info2_window_t7

0xcb1b,	// (0x00049918) popup_blid_sat_info2_window_t8

0xcb29,	// (0x00049926) popup_blid_sat_info2_window_t9

0xcb37,	// (0x00049934) popup_blid_sat_info2_window_t10

0xcbf9,	// (0x000499f6) aid_firma_cardinal_ParamLimits

0xcc0d,	// (0x00049a0a) blid_firmament_pane_t1_ParamLimits

0xcc24,	// (0x00049a21) blid_firmament_pane_t2_ParamLimits

0xcc3b,	// (0x00049a38) blid_firmament_pane_t3_ParamLimits

0xcc52,	// (0x00049a4f) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004c4d0) blid_firmament_pane_t_ParamLimits

0xcc69,	// (0x00049a66) blid_sat_info_pane_ParamLimits

0xb165,	// (0x00047f62) main_cam_set_pane_ParamLimits

0x6a34,	// (0x00043831) aid_size_cell_colour_35_ParamLimits

0x6a4e,	// (0x0004384b) aid_size_cell_colour_112_ParamLimits

0x6a65,	// (0x00043862) aid_size_cell_effect_ParamLimits

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp02_ParamLimits

0xb173,	// (0x00047f70) heading_imed_pane_ParamLimits

0x6a7f,	// (0x0004387c) listscroll_imed_pane_ParamLimits

0xbe8e,	// (0x00048c8b) popup_call2_audio_first_window_g5_ParamLimits

0xbe8e,	// (0x00048c8b) popup_call2_audio_first_window_g5

0x7185,	// (0x00043f82) aid_size_touch_image3_arrow_left_ParamLimits

0x7185,	// (0x00043f82) aid_size_touch_image3_arrow_left

0x719b,	// (0x00043f98) aid_size_touch_image3_arrow_right_ParamLimits

0x719b,	// (0x00043f98) aid_size_touch_image3_arrow_right

0x845d,	// (0x0004525a) vid4_progress_pane_t3

0x6d1d,	// (0x00043b1a) main_hwr_training_symbol_option_pane_ParamLimits

0x6d1d,	// (0x00043b1a) main_hwr_training_symbol_option_pane

0xd4b8,	// (0x0004a2b5) popup_hwr_training_preview_window_ParamLimits

0xd4b8,	// (0x0004a2b5) popup_hwr_training_preview_window

0x6d7e,	// (0x00043b7b) hwr_training_navi_pane_g5_ParamLimits

0x6d7e,	// (0x00043b7b) hwr_training_navi_pane_g5

0xd6f4,	// (0x0004a4f1) popup_char_count_window

0xdadd,	// (0x0004a8da) bg_popup_sub_pane_cp20_ParamLimits

0x7f4e,	// (0x00044d4b) list_vitu2_match_list_pane_ParamLimits

0x7f5a,	// (0x00044d57) vitu2_page_scroll_pane_ParamLimits

0x7f5a,	// (0x00044d57) vitu2_page_scroll_pane

0xdbe5,	// (0x0004a9e2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbe5,	// (0x0004a9e2) list_single_hwr_training_symbol_option_pane

0xdbf8,	// (0x0004a9f5) list_single_hwr_training_symbol_option_pane_g1

0xdc00,	// (0x0004a9fd) list_single_hwr_training_symbol_option_pane_t1

0xdc0e,	// (0x0004aa0b) bg_button_pane_cp023

0xdc17,	// (0x0004aa14) bg_button_pane_cp024

0x8497,	// (0x00045294) vitu2_page_scroll_pane_g1

0x849f,	// (0x0004529c) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004c8c9) vitu2_page_scroll_pane_g

0x84a7,	// (0x000452a4) vitu2_page_scroll_pane_t1

0xc9cc,	// (0x000497c9) popup_char_count_window_g1

0xdc4a,	// (0x0004aa47) popup_char_count_window_g2

0xdc53,	// (0x0004aa50) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004c8ce) popup_char_count_window_g

0xdc5c,	// (0x0004aa59) popup_char_count_window_t1

0xa0e6,	// (0x00046ee3) main_vded2_pane

0xd1ab,	// (0x00049fa8) aid_size_cell_imed_line

0xd1b5,	// (0x00049fb2) grid_imed_line_width_pane

0x75d6,	// (0x000443d3) vid4_indicators_pane_g4

0xdc6a,	// (0x0004aa67) cell_imed_line_width_pane_ParamLimits

0xdc6a,	// (0x0004aa67) cell_imed_line_width_pane

0xdc7e,	// (0x0004aa7b) cell_imed_line_width_pane_g1

0xdc87,	// (0x0004aa84) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004c8d5) cell_imed_line_width_pane_g

0x84b6,	// (0x000452b3) main_vded2_pane_g1_ParamLimits

0x84b6,	// (0x000452b3) main_vded2_pane_g1

0x84c3,	// (0x000452c0) main_vded2_pane_g2_ParamLimits

0x84c3,	// (0x000452c0) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004c8da) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004c8da) main_vded2_pane_g

0x84d1,	// (0x000452ce) vded2_slider_pane_ParamLimits

0x84d1,	// (0x000452ce) vded2_slider_pane

0x84de,	// (0x000452db) aid_size_touch_vded2_end

0x84e8,	// (0x000452e5) aid_size_touch_vded2_playhead

0xdc8f,	// (0x0004aa8c) aid_size_touch_vded2_start

0xdc97,	// (0x0004aa94) vded2_slider_bg_pane

0xdca0,	// (0x0004aa9d) vded2_slider_pane_g1

0xdca9,	// (0x0004aaa6) vded2_slider_pane_g2

0x84f0,	// (0x000452ed) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004c8df) vded2_slider_pane_g

0xdcb1,	// (0x0004aaae) vded2_slider_bg_pane_g1

0xdcba,	// (0x0004aab7) vded2_slider_bg_pane_g2

0xdcc3,	// (0x0004aac0) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004c8e6) vded2_slider_bg_pane_g

0x4e4e,	// (0x00041c4b) aid_postcard_touch_down_pane_ParamLimits

0x4e4e,	// (0x00041c4b) aid_postcard_touch_down_pane

0x4e5e,	// (0x00041c5b) aid_postcard_touch_up_pane_ParamLimits

0x4e5e,	// (0x00041c5b) aid_postcard_touch_up_pane

0xa0e6,	// (0x00046ee3) main_blid2_pane

0x5581,	// (0x0004237e) popup_blid2_search_window

0xa0e6,	// (0x00046ee3) blid2_gps_pane

0xa0e6,	// (0x00046ee3) blid2_navig_pane

0xa0e6,	// (0x00046ee3) blid2_search_pane

0xa0e6,	// (0x00046ee3) blid2_tripm_pane

0x84f9,	// (0x000452f6) blid2_search_pane_g1_ParamLimits

0x84f9,	// (0x000452f6) blid2_search_pane_g1

0x8509,	// (0x00045306) blid2_search_pane_t1_ParamLimits

0x8509,	// (0x00045306) blid2_search_pane_t1

0x851b,	// (0x00045318) aid_size_cell_blid2_gps_ParamLimits

0x851b,	// (0x00045318) aid_size_cell_blid2_gps

0x852b,	// (0x00045328) blid2_gps_pane_g1_ParamLimits

0x852b,	// (0x00045328) blid2_gps_pane_g1

0x8537,	// (0x00045334) grid_blid2_satellite_pane_ParamLimits

0x8537,	// (0x00045334) grid_blid2_satellite_pane

0x8547,	// (0x00045344) blid2_navig_pane_g1_ParamLimits

0x8547,	// (0x00045344) blid2_navig_pane_g1

0x8553,	// (0x00045350) blid2_navig_pane_t1_ParamLimits

0x8553,	// (0x00045350) blid2_navig_pane_t1

0x8565,	// (0x00045362) blid2_navig_pane_t2_ParamLimits

0x8565,	// (0x00045362) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004c8ed) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004c8ed) blid2_navig_pane_t

0x8577,	// (0x00045374) blid2_navig_ring_pane_ParamLimits

0x8577,	// (0x00045374) blid2_navig_ring_pane

0x8587,	// (0x00045384) blid2_speed_pane_ParamLimits

0x8587,	// (0x00045384) blid2_speed_pane

0x8593,	// (0x00045390) blid2_tripm_pane_g1_ParamLimits

0x8593,	// (0x00045390) blid2_tripm_pane_g1

0x85a3,	// (0x000453a0) blid2_tripm_pane_g2_ParamLimits

0x85a3,	// (0x000453a0) blid2_tripm_pane_g2

0x85af,	// (0x000453ac) blid2_tripm_pane_g3_ParamLimits

0x85af,	// (0x000453ac) blid2_tripm_pane_g3

0x85bb,	// (0x000453b8) blid2_tripm_pane_g4_ParamLimits

0x85bb,	// (0x000453b8) blid2_tripm_pane_g4

0x85c7,	// (0x000453c4) blid2_tripm_pane_g5_ParamLimits

0x85c7,	// (0x000453c4) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004c8f2) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004c8f2) blid2_tripm_pane_g

0x85e3,	// (0x000453e0) blid2_tripm_pane_t1_ParamLimits

0x85e3,	// (0x000453e0) blid2_tripm_pane_t1

0x85f7,	// (0x000453f4) blid2_tripm_pane_t2_ParamLimits

0x85f7,	// (0x000453f4) blid2_tripm_pane_t2

0x8609,	// (0x00045406) blid2_tripm_pane_t3_ParamLimits

0x8609,	// (0x00045406) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004c8ff) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004c8ff) blid2_tripm_pane_t

0x863b,	// (0x00045438) cell_blid2_satellite_pane_ParamLimits

0x863b,	// (0x00045438) cell_blid2_satellite_pane

0x8655,	// (0x00045452) cell_blid2_satellite_pane_g1

0xdccc,	// (0x0004aac9) cell_blid2_satellite_pane_t1

0xcc79,	// (0x00049a76) blid2_speed_pane_g1

0xdcda,	// (0x0004aad7) blid2_speed_pane_t1

0xdce8,	// (0x0004aae5) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004c908) blid2_speed_pane_t

0xcc79,	// (0x00049a76) blid2_navig_ring_pane_g1

0x865e,	// (0x0004545b) blid2_navig_ring_pane_g2

0x8666,	// (0x00045463) blid2_navig_ring_pane_g3

0x866e,	// (0x0004546b) blid2_navig_ring_pane_g4

0x8676,	// (0x00045473) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004c90d) blid2_navig_ring_pane_g

0xa0e6,	// (0x00046ee3) bg_popup_window_pane_cp011

0xdcf6,	// (0x0004aaf3) popup_blid2_search_window_g1

0xdcfe,	// (0x0004aafb) popup_blid2_search_window_t1

0xdd0c,	// (0x0004ab09) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004c918) popup_blid2_search_window_t

0xab3e,	// (0x0004793b) main_browser_pane_g1

0xa831,	// (0x0004762e) main_browser_pane_ParamLimits

0xb165,	// (0x00047f62) bg_button_pane_cp011_ParamLimits

0x7845,	// (0x00044642) cell_vitu2_function_pane_g1_ParamLimits

0xc868,	// (0x00049665) bg_popup_sub_pane_cp22_ParamLimits

0x13b1,	// (0x0003e1ae) input_focus_pane_cp08_ParamLimits

0x80d9,	// (0x00044ed6) popup_vitu2_query_button_pane_ParamLimits

0x80d9,	// (0x00044ed6) popup_vitu2_query_button_pane

0x13c8,	// (0x0003e1c5) popup_vitu2_query_input_button_pane

0xd965,	// (0x0004a762) popup_vitu2_query_window_g1_ParamLimits

0x13d2,	// (0x0003e1cf) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004c819) popup_vitu2_query_window_g_ParamLimits

0xa0e6,	// (0x00046ee3) bg_button_pane_cp026

0x867e,	// (0x0004547b) popup_vitu2_query_input_button_pane_g1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp025

0xdd1a,	// (0x0004ab17) popup_vitu2_query_button_pane_t1

0x5fdf,	// (0x00042ddc) main_mp3_pane_t6

0x5fef,	// (0x00042dec) popup_slider_window_cp01

0x74b3,	// (0x000442b0) cam4_battery_pane

0x7593,	// (0x00044390) cam4_battery_pane_cp02

0x83e0,	// (0x000451dd) cam4_battery_pane_cp01

0x83e0,	// (0x000451dd) cam4_battery_pane_cp03

0xcc79,	// (0x00049a76) cam4_battery_pane_g1

0xdd28,	// (0x0004ab25) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004c91d) cam4_battery_pane_g

0xcb45,	// (0x00049942) popup_blid_sat_info2_window_t11

0xb2c1,	// (0x000480be) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ea,	// (0x000480e7) aid_size_touch_mv_arrow_right_ParamLimits

0xb348,	// (0x00048145) navi_pane_g1_ParamLimits

0xb354,	// (0x00048151) navi_pane_g2_ParamLimits

0xb382,	// (0x0004817f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c1e2) navi_pane_g_ParamLimits

0x48c4,	// (0x000416c1) navi_pane_mv_t1_ParamLimits

0x6a8b,	// (0x00043888) grid_imed_effect_pane_ParamLimits

0x337c,	// (0x00040179) aid_placing_vt_slider_lsc

0xaa8d,	// (0x0004788a) aid_placing_vt_slider_prt

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp01_ParamLimits

0xcdfc,	// (0x00049bf9) popup_image_details_window_g1_ParamLimits

0xce0f,	// (0x00049c0c) popup_image_details_window_g2_ParamLimits

0xce24,	// (0x00049c21) popup_image_details_window_g3_ParamLimits

0xce24,	// (0x00049c21) popup_image_details_window_g3

0xf718,	// (0x0004c515) popup_image_details_window_g_ParamLimits

0xce38,	// (0x00049c35) popup_image_details_window_t1_ParamLimits

0xce4a,	// (0x00049c47) popup_image_details_window_t2_ParamLimits

0xce63,	// (0x00049c60) popup_image_details_window_t3_ParamLimits

0xce77,	// (0x00049c74) popup_image_details_window_t4_ParamLimits

0xce92,	// (0x00049c8f) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004c51c) popup_image_details_window_t_ParamLimits

0x8304,	// (0x00045101) cl_header_name_pane_ParamLimits

0x8304,	// (0x00045101) cl_header_name_pane

0x8686,	// (0x00045483) cl_header_name_pane_t1_ParamLimits

0x8686,	// (0x00045483) cl_header_name_pane_t1

0x869d,	// (0x0004549a) cl_header_name_pane_t2_ParamLimits

0x869d,	// (0x0004549a) cl_header_name_pane_t2

0x86c7,	// (0x000454c4) cl_header_name_pane_t3_ParamLimits

0x86c7,	// (0x000454c4) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004c922) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004c922) cl_header_name_pane_t

0xb411,	// (0x0004820e) navi_pane_mv_g2_ParamLimits

0xd6ce,	// (0x0004a4cb) field_vitu2_entry_pane_g1_ParamLimits

0xd6da,	// (0x0004a4d7) field_vitu2_entry_pane_g2_ParamLimits

0xd6e6,	// (0x0004a4e3) field_vitu2_entry_pane_g3_ParamLimits

0xd6e6,	// (0x0004a4e3) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004c718) field_vitu2_entry_pane_g_ParamLimits

0x77d9,	// (0x000445d6) cell_vitu2_itu_pane_g1_ParamLimits

0x77eb,	// (0x000445e8) cell_vitu2_itu_pane_g2_ParamLimits

0x77eb,	// (0x000445e8) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004c724) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004c724) cell_vitu2_itu_pane_g

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp05_ParamLimits

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp05

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp03

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp04

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp10_ParamLimits

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp10

0x1587,	// (0x0003e384) bg_vkb2_func_pane_cp08

0x82ae,	// (0x000450ab) bg_vkb2_func_pane_cp06

0x82bc,	// (0x000450b9) bg_vkb2_func_pane_cp07

0xdc20,	// (0x0004aa1d) bg_vkb2_func_pane_cp11_ParamLimits

0xdc20,	// (0x0004aa1d) bg_vkb2_func_pane_cp11

0xdc35,	// (0x0004aa32) bg_vkb2_func_pane_cp12_ParamLimits

0xdc35,	// (0x0004aa32) bg_vkb2_func_pane_cp12

0xa0e6,	// (0x00046ee3) bg_vkb2_func_pane_cp09

0xd706,	// (0x0004a503) bg_vkb2_func_pane_g1

0xac4f,	// (0x00047a4c) bg_vkb2_func_pane_g2

0xd70e,	// (0x0004a50b) bg_vkb2_func_pane_g3

0xd716,	// (0x0004a513) bg_vkb2_func_pane_g4

0xd92a,	// (0x0004a727) bg_vkb2_func_pane_g5

0xd72e,	// (0x0004a52b) bg_vkb2_func_pane_g6

0xd736,	// (0x0004a533) bg_vkb2_func_pane_g7

0xd726,	// (0x0004a523) bg_vkb2_func_pane_g8

0xac2f,	// (0x00047a2c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004c929) bg_vkb2_func_pane_g

0x85d5,	// (0x000453d2) blid2_tripm_pane_g6_ParamLimits

0x85d5,	// (0x000453d2) blid2_tripm_pane_g6

0xd570,	// (0x0004a36d) mp4_progress_pane_g1

0x862f,	// (0x0004542c) blid2_tripm_values_pane_ParamLimits

0x862f,	// (0x0004542c) blid2_tripm_values_pane

0x86ec,	// (0x000454e9) blid2_tripm_values_pane_t1

0x86fa,	// (0x000454f7) blid2_tripm_values_pane_t2

0x8708,	// (0x00045505) blid2_tripm_values_pane_t3

0x8716,	// (0x00045513) blid2_tripm_values_pane_t4

0x8724,	// (0x00045521) blid2_tripm_values_pane_t5

0x8732,	// (0x0004552f) blid2_tripm_values_pane_t6

0x8740,	// (0x0004553d) blid2_tripm_values_pane_t7

0x874e,	// (0x0004554b) blid2_tripm_values_pane_t8

0x875c,	// (0x00045559) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004c93c) blid2_tripm_values_pane_t

0x33bc,	// (0x000401b9) call_video_pane_t1_ParamLimits

0x33dd,	// (0x000401da) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c06b) call_video_pane_t_ParamLimits

0x110e,	// (0x0003df0b) msg_header_pane_g1_ParamLimits

0xb5eb,	// (0x000483e8) msg_header_pane_g2_ParamLimits

0xb5eb,	// (0x000483e8) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004c285) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004c285) msg_header_pane_g

0xa831,	// (0x0004762e) main_clock2_pane_ParamLimits

0x6824,	// (0x00043621) grid_clock2_toolbar_pane_ParamLimits

0x6824,	// (0x00043621) grid_clock2_toolbar_pane

0x6824,	// (0x00043621) listscroll_clock2_pane_ParamLimits

0x6824,	// (0x00043621) listscroll_clock2_pane

0x68c8,	// (0x000436c5) main_clock2_pane_t3_ParamLimits

0x68c8,	// (0x000436c5) main_clock2_pane_t3

0x68da,	// (0x000436d7) main_clock2_pane_t4_ParamLimits

0x68da,	// (0x000436d7) main_clock2_pane_t4

0xdd32,	// (0x0004ab2f) cell_clock2_toolbar_pane

0xdd3a,	// (0x0004ab37) cell_clock2_toolbar_pane_cp01

0xdd3a,	// (0x0004ab37) cell_clock2_toolbar_pane_cp02

0xdd42,	// (0x0004ab3f) cell_clock2_toolbar_pane_cp03

0xdd4a,	// (0x0004ab47) list_clock2_pane

0xb237,	// (0x00048034) scroll_pane_cp10

0xdd52,	// (0x0004ab4f) list_single_clock2_pane_ParamLimits

0xdd52,	// (0x0004ab4f) list_single_clock2_pane

0xa9f6,	// (0x000477f3) list_highlight_pane_cp08

0xdd5f,	// (0x0004ab5c) list_single_clock2_pane_t1

0xdd6d,	// (0x0004ab6a) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004c94f) list_single_clock2_pane_t

0xa0e6,	// (0x00046ee3) bg_button_pane_cp10

0xdd7b,	// (0x0004ab78) cell_clock2_toolbar_pane_g1

0x4db0,	// (0x00041bad) aid_main_viewer_pane_g1_ParamLimits

0x4db0,	// (0x00041bad) aid_main_viewer_pane_g1

0x4dbc,	// (0x00041bb9) aid_main_viewer_pane_g2_ParamLimits

0x4dbc,	// (0x00041bb9) aid_main_viewer_pane_g2

0x4dc8,	// (0x00041bc5) aid_main_viewer_pane_g3_ParamLimits

0x4dc8,	// (0x00041bc5) aid_main_viewer_pane_g3

0x4dd9,	// (0x00041bd6) aid_main_viewer_pane_g4_ParamLimits

0x4dd9,	// (0x00041bd6) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004c296) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004c296) aid_main_viewer_pane_g

0x5559,	// (0x00042356) main_calc_pane_ParamLimits

0x5566,	// (0x00042363) main_dialer2_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_cam6_pane

0xa0e6,	// (0x00046ee3) main_vid6_pane

0x6830,	// (0x0004362d) listscroll_gen_pane_cp06_ParamLimits

0x6830,	// (0x0004362d) listscroll_gen_pane_cp06

0x68ec,	// (0x000436e9) main_clock2_pane_t5_ParamLimits

0x68ec,	// (0x000436e9) main_clock2_pane_t5

0x6935,	// (0x00043732) aid_call2_pane_cp10_ParamLimits

0x6947,	// (0x00043744) aid_call_pane_cp10_ParamLimits

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6959,	// (0x00043756) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6959,	// (0x00043756) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b5,	// (0x000480b2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004c5d1) popup_clock_analogue_window_cp10_g_ParamLimits

0x696b,	// (0x00043768) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7132,	// (0x00043f2f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7132,	// (0x00043f2f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004c6b7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004c6b7) cell_dialer2_keypad_pane_g

0x714e,	// (0x00043f4b) cell_dialer2_keypad_pane_t1

0x7b10,	// (0x0004490d) main_cset_text2_pane_ParamLimits

0x7b10,	// (0x0004490d) main_cset_text2_pane

0xdb88,	// (0x0004a985) area_vitu2_query_pane_g1_ParamLimits

0x14b2,	// (0x0003e2af) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004c86c) area_vitu2_query_pane_g_ParamLimits

0x1563,	// (0x0003e360) area_vitu2_query_pane_t7_ParamLimits

0x1563,	// (0x0003e360) area_vitu2_query_pane_t7

0x82ae,	// (0x000450ab) bg_button_pane_cp018_ParamLimits

0x82bc,	// (0x000450b9) bg_button_pane_cp021_ParamLimits

0x1587,	// (0x0003e384) bg_button_pane_cp022_ParamLimits

0x1587,	// (0x0003e384) bg_vkb2_func_pane_cp08_ParamLimits

0x82ae,	// (0x000450ab) bg_vkb2_func_pane_cp06_ParamLimits

0x82bc,	// (0x000450b9) bg_vkb2_func_pane_cp07_ParamLimits

0x1598,	// (0x0003e395) input_focus_pane_cp09_ParamLimits

0x876a,	// (0x00045567) cam6_autofocus_pane_ParamLimits

0x876a,	// (0x00045567) cam6_autofocus_pane

0x878c,	// (0x00045589) cam6_image_uncrop_pane_ParamLimits

0x878c,	// (0x00045589) cam6_image_uncrop_pane

0x87b9,	// (0x000455b6) cam6_indi_pane_ParamLimits

0x87b9,	// (0x000455b6) cam6_indi_pane

0x87d3,	// (0x000455d0) cam6_mode_pane_ParamLimits

0x87d3,	// (0x000455d0) cam6_mode_pane

0x87e7,	// (0x000455e4) cam6_timer_pane_ParamLimits

0x87e7,	// (0x000455e4) cam6_timer_pane

0x87f3,	// (0x000455f0) cam6_zoom_pane_ParamLimits

0x87f3,	// (0x000455f0) cam6_zoom_pane

0x880b,	// (0x00045608) cam6_mode_pane_g1_ParamLimits

0x880b,	// (0x00045608) cam6_mode_pane_g1

0x8817,	// (0x00045614) cam6_mode_pane_g2_ParamLimits

0x8817,	// (0x00045614) cam6_mode_pane_g2

0x8823,	// (0x00045620) cam6_mode_pane_g3_ParamLimits

0x8823,	// (0x00045620) cam6_mode_pane_g3

0x882f,	// (0x0004562c) cam6_mode_pane_g4_ParamLimits

0x882f,	// (0x0004562c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004c954) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004c954) cam6_mode_pane_g

0xdaeb,	// (0x0004a8e8) bg_tb_trans_pane_cp08_ParamLimits

0xdaeb,	// (0x0004a8e8) bg_tb_trans_pane_cp08

0xdd83,	// (0x0004ab80) cam6_battery_pane_ParamLimits

0xdd83,	// (0x0004ab80) cam6_battery_pane

0xdd99,	// (0x0004ab96) cam6_indi_pane_g1_ParamLimits

0xdd99,	// (0x0004ab96) cam6_indi_pane_g1

0xddab,	// (0x0004aba8) cam6_indi_pane_g2_ParamLimits

0xddab,	// (0x0004aba8) cam6_indi_pane_g2

0xddbd,	// (0x0004abba) cam6_indi_pane_g3_ParamLimits

0xddbd,	// (0x0004abba) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004c95d) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004c95d) cam6_indi_pane_g

0xddcf,	// (0x0004abcc) cam6_indi_pane_t1_ParamLimits

0xddcf,	// (0x0004abcc) cam6_indi_pane_t1

0x760b,	// (0x00044408) cam6_autofocus_pane_g1

0x7613,	// (0x00044410) cam6_autofocus_pane_g2

0x761b,	// (0x00044418) cam6_autofocus_pane_g3

0x7623,	// (0x00044420) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004c964) cam6_autofocus_pane_g

0xddf5,	// (0x0004abf2) cam6_timer_pane_g1

0xddfd,	// (0x0004abfa) cam6_timer_pane_t1

0xde0b,	// (0x0004ac08) cam6_zoom_cont_pane

0xde13,	// (0x0004ac10) cam6_zoom_pane_g1

0xde1b,	// (0x0004ac18) cam6_zoom_pane_g2

0x883b,	// (0x00045638) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004c96d) cam6_zoom_pane_g

0xcc79,	// (0x00049a76) cam6_battery_pane_g1

0xcc79,	// (0x00049a76) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d9) cam6_battery_pane_g

0xde23,	// (0x0004ac20) cam6_zoom_cont_pane_g1

0xde2c,	// (0x0004ac29) cam6_zoom_cont_pane_g2

0xde35,	// (0x0004ac32) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004c974) cam6_zoom_cont_pane_g

0x8858,	// (0x00045655) cam6_mode_pane_cp_ParamLimits

0x8858,	// (0x00045655) cam6_mode_pane_cp

0x87f3,	// (0x000455f0) cam6_zoom_pane_cp_ParamLimits

0x87f3,	// (0x000455f0) cam6_zoom_pane_cp

0x886c,	// (0x00045669) vid6_image_uncrop_cif_pane_ParamLimits

0x886c,	// (0x00045669) vid6_image_uncrop_cif_pane

0x8898,	// (0x00045695) vid6_image_uncrop_nhd_pane_ParamLimits

0x8898,	// (0x00045695) vid6_image_uncrop_nhd_pane

0x878c,	// (0x00045589) vid6_image_uncrop_vga_pane_ParamLimits

0x878c,	// (0x00045589) vid6_image_uncrop_vga_pane

0x88b5,	// (0x000456b2) vid6_image_uncrop_wvga_pane_ParamLimits

0x88b5,	// (0x000456b2) vid6_image_uncrop_wvga_pane

0x88d2,	// (0x000456cf) vid6_indi_pane_ParamLimits

0x88d2,	// (0x000456cf) vid6_indi_pane

0xdaeb,	// (0x0004a8e8) bg_tb_trans_pane_cp09_ParamLimits

0xdaeb,	// (0x0004a8e8) bg_tb_trans_pane_cp09

0xde4d,	// (0x0004ac4a) cam6_battery_pane_cp_ParamLimits

0xde4d,	// (0x0004ac4a) cam6_battery_pane_cp

0xde59,	// (0x0004ac56) vid6_indi_pane_g1_ParamLimits

0xde59,	// (0x0004ac56) vid6_indi_pane_g1

0xde6b,	// (0x0004ac68) vid6_indi_pane_g2_ParamLimits

0xde6b,	// (0x0004ac68) vid6_indi_pane_g2

0xde7d,	// (0x0004ac7a) vid6_indi_pane_g3_ParamLimits

0xde7d,	// (0x0004ac7a) vid6_indi_pane_g3

0xde92,	// (0x0004ac8f) vid6_indi_pane_g4_ParamLimits

0xde92,	// (0x0004ac8f) vid6_indi_pane_g4

0xdea7,	// (0x0004aca4) vid6_indi_pane_g5_ParamLimits

0xdea7,	// (0x0004aca4) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004c97b) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004c97b) vid6_indi_pane_g

0xdec1,	// (0x0004acbe) vid6_indi_pane_t1_ParamLimits

0xdec1,	// (0x0004acbe) vid6_indi_pane_t1

0xded7,	// (0x0004acd4) vid6_indi_pane_t2_ParamLimits

0xded7,	// (0x0004acd4) vid6_indi_pane_t2

0xdeff,	// (0x0004acfc) vid6_indi_pane_t3_ParamLimits

0xdeff,	// (0x0004acfc) vid6_indi_pane_t3

0xdf27,	// (0x0004ad24) vid6_indi_pane_t4_ParamLimits

0xdf27,	// (0x0004ad24) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004c986) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004c986) vid6_indi_pane_t

0xdf4b,	// (0x0004ad48) wait_bar_pane_cp08

0x88f7,	// (0x000456f4) main_cset_text2_pane_t1_ParamLimits

0x88f7,	// (0x000456f4) main_cset_text2_pane_t1

0x8843,	// (0x00045640) listscroll_gen_pane_cp06_t1_ParamLimits

0x8843,	// (0x00045640) listscroll_gen_pane_cp06_t1

0xa0e6,	// (0x00046ee3) main_cam6_set_pane

0xcedc,	// (0x00049cd9) bg_tb_trans_pane_cp06_ParamLimits

0x74bb,	// (0x000442b8) cam4_indicators_pane_g1_ParamLimits

0x74cc,	// (0x000442c9) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004c6f4) cam4_indicators_pane_g_ParamLimits

0x74ea,	// (0x000442e7) cam4_indicators_pane_t1_ParamLimits

0xb165,	// (0x00047f62) bg_tb_trans_pane_cp07_ParamLimits

0x759d,	// (0x0004439a) vid4_indicators_pane_g1_ParamLimits

0x75b1,	// (0x000443ae) vid4_indicators_pane_g2_ParamLimits

0x75c5,	// (0x000443c2) vid4_indicators_pane_g3_ParamLimits

0x75d6,	// (0x000443d3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004c706) vid4_indicators_pane_g_ParamLimits

0x75f4,	// (0x000443f1) vid4_indicators_pane_t1_ParamLimits

0x83e8,	// (0x000451e5) vid4_progress_pane_g1_ParamLimits

0x83f8,	// (0x000451f5) vid4_progress_pane_g2_ParamLimits

0x8408,	// (0x00045205) vid4_progress_pane_g3_ParamLimits

0x841a,	// (0x00045217) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004c8b7) vid4_progress_pane_g_ParamLimits

0x8432,	// (0x0004522f) vid4_progress_pane_t1_ParamLimits

0x8448,	// (0x00045245) vid4_progress_pane_t2_ParamLimits

0x845d,	// (0x0004525a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004c8c2) vid4_progress_pane_t_ParamLimits

0x8472,	// (0x0004526f) wait_bar_pane_cp07_ParamLimits

0x892a,	// (0x00045727) main_cam6_set_pane_g2_ParamLimits

0x892a,	// (0x00045727) main_cam6_set_pane_g2

0x8936,	// (0x00045733) main_cset6_listscroll_pane_ParamLimits

0x8936,	// (0x00045733) main_cset6_listscroll_pane

0x8961,	// (0x0004575e) main_cset6_slider_pane_ParamLimits

0x8961,	// (0x0004575e) main_cset6_slider_pane

0x896d,	// (0x0004576a) main_cset6_text2_pane_ParamLimits

0x896d,	// (0x0004576a) main_cset6_text2_pane

0xdf5a,	// (0x0004ad57) main_cset6_text_pane

0xdf62,	// (0x0004ad5f) main_cset_list_pane_copy1_ParamLimits

0xdf62,	// (0x0004ad5f) main_cset_list_pane_copy1

0xdf72,	// (0x0004ad6f) scroll_pane_cp028_copy1

0x8980,	// (0x0004577d) cset_list_set_pane_copy1

0x8993,	// (0x00045790) aid_position_infowindow_above_copy1

0x899b,	// (0x00045798) aid_position_infowindow_below_copy1

0x15f1,	// (0x0003e3ee) cset_list_set_pane_g1_copy1

0x1329,	// (0x0003e126) cset_list_set_pane_g3_copy1_ParamLimits

0x1329,	// (0x0003e126) cset_list_set_pane_g3_copy1

0x1338,	// (0x0003e135) cset_list_set_pane_t1_copy1_ParamLimits

0x1338,	// (0x0003e135) cset_list_set_pane_t1_copy1

0xb165,	// (0x00047f62) list_highlight_pane_cp021_copy1_ParamLimits

0xb165,	// (0x00047f62) list_highlight_pane_cp021_copy1

0xdf7b,	// (0x0004ad78) cset6_slider_pane_ParamLimits

0xdf7b,	// (0x0004ad78) cset6_slider_pane

0xdfa7,	// (0x0004ada4) main_cset6_slider_pane_g1_ParamLimits

0xdfa7,	// (0x0004ada4) main_cset6_slider_pane_g1

0x89a3,	// (0x000457a0) main_cset6_slider_pane_g2_ParamLimits

0x89a3,	// (0x000457a0) main_cset6_slider_pane_g2

0xdfcf,	// (0x0004adcc) main_cset6_slider_pane_g3_ParamLimits

0xdfcf,	// (0x0004adcc) main_cset6_slider_pane_g3

0x89cb,	// (0x000457c8) main_cset6_slider_pane_g4_ParamLimits

0x89cb,	// (0x000457c8) main_cset6_slider_pane_g4

0x89d7,	// (0x000457d4) main_cset6_slider_pane_g5_ParamLimits

0x89d7,	// (0x000457d4) main_cset6_slider_pane_g5

0xd835,	// (0x0004a632) main_cset6_slider_pane_g7_ParamLimits

0xd835,	// (0x0004a632) main_cset6_slider_pane_g7

0xd841,	// (0x0004a63e) main_cset6_slider_pane_g8_ParamLimits

0xd841,	// (0x0004a63e) main_cset6_slider_pane_g8

0x89e5,	// (0x000457e2) main_cset6_slider_pane_g9_ParamLimits

0x89e5,	// (0x000457e2) main_cset6_slider_pane_g9

0x89f1,	// (0x000457ee) main_cset6_slider_pane_g10_ParamLimits

0x89f1,	// (0x000457ee) main_cset6_slider_pane_g10

0x89fd,	// (0x000457fa) main_cset6_slider_pane_g11_ParamLimits

0x89fd,	// (0x000457fa) main_cset6_slider_pane_g11

0x8a09,	// (0x00045806) main_cset6_slider_pane_g12_ParamLimits

0x8a09,	// (0x00045806) main_cset6_slider_pane_g12

0x8a15,	// (0x00045812) main_cset6_slider_pane_g13_ParamLimits

0x8a15,	// (0x00045812) main_cset6_slider_pane_g13

0x8a21,	// (0x0004581e) main_cset6_slider_pane_g14_ParamLimits

0x8a21,	// (0x0004581e) main_cset6_slider_pane_g14

0x8a2d,	// (0x0004582a) main_cset6_slider_pane_g15_ParamLimits

0x8a2d,	// (0x0004582a) main_cset6_slider_pane_g15

0x8a45,	// (0x00045842) main_cset6_slider_pane_g16_ParamLimits

0x8a45,	// (0x00045842) main_cset6_slider_pane_g16

0x8a53,	// (0x00045850) main_cset6_slider_pane_g17_ParamLimits

0x8a53,	// (0x00045850) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004c98f) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004c98f) main_cset6_slider_pane_g

0xdfdb,	// (0x0004add8) main_cset6_slider_pane_t1_ParamLimits

0xdfdb,	// (0x0004add8) main_cset6_slider_pane_t1

0x8a79,	// (0x00045876) main_cset6_slider_pane_t2_ParamLimits

0x8a79,	// (0x00045876) main_cset6_slider_pane_t2

0x8aa4,	// (0x000458a1) main_cset6_slider_pane_t3_ParamLimits

0x8aa4,	// (0x000458a1) main_cset6_slider_pane_t3

0x8acf,	// (0x000458cc) main_cset6_slider_pane_t4_ParamLimits

0x8acf,	// (0x000458cc) main_cset6_slider_pane_t4

0x8afa,	// (0x000458f7) main_cset6_slider_pane_t5_ParamLimits

0x8afa,	// (0x000458f7) main_cset6_slider_pane_t5

0xe01c,	// (0x0004ae19) main_cset6_slider_pane_t7_ParamLimits

0xe01c,	// (0x0004ae19) main_cset6_slider_pane_t7

0x8b27,	// (0x00045924) main_cset6_slider_pane_t8_ParamLimits

0x8b27,	// (0x00045924) main_cset6_slider_pane_t8

0x8b4b,	// (0x00045948) main_cset6_slider_pane_t9_ParamLimits

0x8b4b,	// (0x00045948) main_cset6_slider_pane_t9

0x8b6f,	// (0x0004596c) main_cset6_slider_pane_t10_ParamLimits

0x8b6f,	// (0x0004596c) main_cset6_slider_pane_t10

0x8b93,	// (0x00045990) main_cset6_slider_pane_t11_ParamLimits

0x8b93,	// (0x00045990) main_cset6_slider_pane_t11

0xe052,	// (0x0004ae4f) main_cset6_slider_pane_t14_ParamLimits

0xe052,	// (0x0004ae4f) main_cset6_slider_pane_t14

0xe08b,	// (0x0004ae88) main_cset6_slider_pane_t15_ParamLimits

0xe08b,	// (0x0004ae88) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004c9b4) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004c9b4) main_cset6_slider_pane_t

0xdaf9,	// (0x0004a8f6) cset_slider_pane_g1_copy1

0xdb02,	// (0x0004a8ff) cset_slider_pane_g2_copy1

0xdb0b,	// (0x0004a908) cset_slider_pane_g3_copy1

0xa0e6,	// (0x00046ee3) bg_popup_sub_pane_cp011_copy1

0xe0c4,	// (0x0004aec1) main_cset_text_pane_g1_copy1

0xd979,	// (0x0004a776) main_cset_text_pane_t1_copy1

0xd987,	// (0x0004a784) main_cset_text_pane_t2_copy1

0xd995,	// (0x0004a792) main_cset_text_pane_t3_copy1

0xd9a3,	// (0x0004a7a0) main_cset_text_pane_t4_copy1

0xd9b1,	// (0x0004a7ae) main_cset_text_pane_t5_copy1

0xe0cc,	// (0x0004aec9) main_cset_text_pane_t6_copy1

0xd9cd,	// (0x0004a7ca) main_cset_text_pane_t7_copy1

0x8bb7,	// (0x000459b4) main_cset_text2_pane_t1_copy1

0xb165,	// (0x00047f62) main_ncimui_pane

0x55b7,	// (0x000423b4) popup_query_ncimui_window_ParamLimits

0x55b7,	// (0x000423b4) popup_query_ncimui_window

0x11cf,	// (0x0003dfcc) field_cale_ev2_pane_g4_ParamLimits

0x11cf,	// (0x0003dfcc) field_cale_ev2_pane_g4

0x6e52,	// (0x00043c4f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e52,	// (0x00043c4f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004c692) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004c692) cell_video_dialer_keypad_pane_g

0x6e6a,	// (0x00043c67) cell_video_dialer_keypad_pane_t1

0xa0e6,	// (0x00046ee3) bg_popup_window_pane_cp012

0xb0dc,	// (0x00047ed9) heading_pane_cp06

0xe0f8,	// (0x0004aef5) ncim_query_content_pane

0xa0e6,	// (0x00046ee3) bg_popup_heading_pane_cp01

0xe100,	// (0x0004aefd) ncim_heading_pane_t1

0xe10e,	// (0x0004af0b) ncim_indicator_popup_pane

0xe120,	// (0x0004af1d) ncim_query_button_pane

0xe134,	// (0x0004af31) ncim_query_content_pane_t1

0xe146,	// (0x0004af43) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004c9f8) ncim_query_content_pane_t

0xe180,	// (0x0004af7d) ncim_query_list_pane

0xe192,	// (0x0004af8f) ncim_query_popup_pane

0xe10e,	// (0x0004af0b) ncim_indicator_popup_pane_ParamLimits

0x8d0a,	// (0x00045b07) ncim_query_content_pane_g1_ParamLimits

0x8d0a,	// (0x00045b07) ncim_query_content_pane_g1

0xe134,	// (0x0004af31) ncim_query_content_pane_t1_ParamLimits

0xe146,	// (0x0004af43) ncim_query_content_pane_t2_ParamLimits

0x8d16,	// (0x00045b13) ncim_query_content_pane_t3_ParamLimits

0x8d16,	// (0x00045b13) ncim_query_content_pane_t3

0x8d33,	// (0x00045b30) ncim_query_content_pane_t4_ParamLimits

0x8d33,	// (0x00045b30) ncim_query_content_pane_t4

0x8d50,	// (0x00045b4d) ncim_query_content_pane_t5_ParamLimits

0x8d50,	// (0x00045b4d) ncim_query_content_pane_t5

0xe158,	// (0x0004af55) ncim_query_content_pane_t6_ParamLimits

0xe158,	// (0x0004af55) ncim_query_content_pane_t6

0xfbfb,	// (0x0004c9f8) ncim_query_content_pane_t_ParamLimits

0xe180,	// (0x0004af7d) ncim_query_list_pane_ParamLimits

0xe192,	// (0x0004af8f) ncim_query_popup_pane_ParamLimits

0xe1a6,	// (0x0004afa3) wait_bar_pane_cp04

0xa0e6,	// (0x00046ee3) input_focus_pane_cp011

0xe1ae,	// (0x0004afab) ncim_query_popup_pane_t1

0xe1bc,	// (0x0004afb9) ncim_list_query_list_pane_ParamLimits

0xe1bc,	// (0x0004afb9) ncim_list_query_list_pane

0xa0e6,	// (0x00046ee3) bg_button_pane_cp027

0xe1c9,	// (0x0004afc6) ncim_query_button_pane_g1

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp012

0xe1d3,	// (0x0004afd0) ncim_list_query_list_pane_g1

0xe1db,	// (0x0004afd8) ncim_list_query_list_pane_t1

0x74db,	// (0x000442d8) cam4_indicators_pane_g3_ParamLimits

0x74db,	// (0x000442d8) cam4_indicators_pane_g3

0x75e2,	// (0x000443df) vid4_indicators_pane_g5_ParamLimits

0x75e2,	// (0x000443df) vid4_indicators_pane_g5

0x8426,	// (0x00045223) vid4_progress_pane_g5_ParamLimits

0x8426,	// (0x00045223) vid4_progress_pane_g5

0x8bf6,	// (0x000459f3) main_ncimui_pane_g1

0x8c5e,	// (0x00045a5b) ncimui_group_query_pane_ParamLimits

0x8c5e,	// (0x00045a5b) ncimui_group_query_pane

0x8ca6,	// (0x00045aa3) ncimui_list_pane_ParamLimits

0x8ca6,	// (0x00045aa3) ncimui_list_pane

0x8ccd,	// (0x00045aca) ncimui_text_pane_ParamLimits

0x8ccd,	// (0x00045aca) ncimui_text_pane

0x8d6d,	// (0x00045b6a) ncimui_text_pane_t1_ParamLimits

0x8d6d,	// (0x00045b6a) ncimui_text_pane_t1

0xe1e9,	// (0x0004afe6) ncimui_list_single_graphic_pane_ParamLimits

0xe1e9,	// (0x0004afe6) ncimui_list_single_graphic_pane

0x8d8c,	// (0x00045b89) ncimui_query_pane_ParamLimits

0x8d8c,	// (0x00045b89) ncimui_query_pane

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp013

0xe1f9,	// (0x0004aff6) ncim_list_query_list_pane_t1_copy1

0xe1d3,	// (0x0004afd0) ncim_list_single_graphic_pane_g1

0xe207,	// (0x0004b004) ncim_query_button_pane_cp01

0xe213,	// (0x0004b010) ncim_query_entry_pane_ParamLimits

0xe213,	// (0x0004b010) ncim_query_entry_pane

0xe226,	// (0x0004b023) ncimui_query_pane_g1

0xe232,	// (0x0004b02f) ncimui_query_pane_t1_ParamLimits

0xe232,	// (0x0004b02f) ncimui_query_pane_t1

0xb165,	// (0x00047f62) input_focus_pane_cp012

0xe24b,	// (0x0004b048) ncim_query_entry_pane_t1

0xa831,	// (0x0004762e) main_im_pane_ParamLimits

0xb165,	// (0x00047f62) main_mobtv_pane_ParamLimits

0xb165,	// (0x00047f62) main_mobtv_pane

0x8a61,	// (0x0004585e) main_cset6_slider_pane_g18_ParamLimits

0x8a61,	// (0x0004585e) main_cset6_slider_pane_g18

0x8a6d,	// (0x0004586a) main_cset6_slider_pane_g19_ParamLimits

0x8a6d,	// (0x0004586a) main_cset6_slider_pane_g19

0xd6e6,	// (0x0004a4e3) bg_main_mobtv_pane_ParamLimits

0xd6e6,	// (0x0004a4e3) bg_main_mobtv_pane

0x8d9f,	// (0x00045b9c) main_mobtv_info_pane

0x8daa,	// (0x00045ba7) main_mobtv_loading_pane_ParamLimits

0x8daa,	// (0x00045ba7) main_mobtv_loading_pane

0xe25d,	// (0x0004b05a) main_mobtv_pg_channel_list_pane

0xe267,	// (0x0004b064) main_mobtv_pg_hdr_pane

0x8db7,	// (0x00045bb4) main_mobtv_programe_curr_pane_ParamLimits

0x8db7,	// (0x00045bb4) main_mobtv_programe_curr_pane

0x8dc4,	// (0x00045bc1) main_mobtv_programe_next_pane_ParamLimits

0x8dc4,	// (0x00045bc1) main_mobtv_programe_next_pane

0xe270,	// (0x0004b06d) popup_mobtv_noti_window

0xcc79,	// (0x00049a76) main_tv_pg_hdr_pane_g1

0xe278,	// (0x0004b075) main_tv_pg_hdr_pane_g2

0xe280,	// (0x0004b07d) main_tv_pg_hdr_pane_g3

0xe288,	// (0x0004b085) main_tv_pg_hdr_pane_g4

0xe290,	// (0x0004b08d) main_tv_pg_hdr_pane_g5

0xe29a,	// (0x0004b097) main_tv_pg_hdr_pane_g6

0xe2a4,	// (0x0004b0a1) main_tv_pg_hdr_pane_g7

0xe2ae,	// (0x0004b0ab) main_tv_pg_hdr_pane_g8

0xe2b8,	// (0x0004b0b5) main_tv_pg_hdr_pane_g9

0xe2c2,	// (0x0004b0bf) main_tv_pg_hdr_pane_g10

0xe2cc,	// (0x0004b0c9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004ca05) main_tv_pg_hdr_pane_g

0xe2d6,	// (0x0004b0d3) main_tv_pg_hdr_pane_t1

0xe2e4,	// (0x0004b0e1) main_tv_pg_hdr_pane_t2

0xe2f2,	// (0x0004b0ef) main_tv_pg_hdr_pane_t3

0xe302,	// (0x0004b0ff) main_tv_pg_hdr_pane_t4

0xe312,	// (0x0004b10f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004ca1c) main_tv_pg_hdr_pane_t

0xe322,	// (0x0004b11f) single_mobtv_pg_channel_pane_ParamLimits

0xe322,	// (0x0004b11f) single_mobtv_pg_channel_pane

0xe334,	// (0x0004b131) single_mobtv_pg_channel_table_pane

0xe33d,	// (0x0004b13a) single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x0004b143) single_tv_pg_channel_pane_g1

0xe34f,	// (0x0004b14c) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004ca27) single_tv_pg_channel_pane_g

0xcedc,	// (0x00049cd9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcedc,	// (0x00049cd9) bg_single_mobtv_pg_channel_thumb_pane

0xe358,	// (0x0004b155) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe358,	// (0x0004b155) single_mobtv_pg_channel_thumb_pane_g1

0xe366,	// (0x0004b163) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe366,	// (0x0004b163) single_mobtv_pg_channel_thumb_pane_g2

0xe372,	// (0x0004b16f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe372,	// (0x0004b16f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004ca2c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004ca2c) single_mobtv_pg_channel_thumb_pane_g

0xe37e,	// (0x0004b17b) single_mobtv_pg_channel_thumb_pane_t1

0xe38c,	// (0x0004b189) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004ca33) single_mobtv_pg_channel_thumb_pane_t

0xcc79,	// (0x00049a76) bg_single_mobtv_pg_channel_table_pane_g1

0xcc79,	// (0x00049a76) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d9) bg_single_mobtv_pg_channel_table_pane_g

0xe39a,	// (0x0004b197) single_mobtv_pg_channel_table_pane_t1

0xe3a8,	// (0x0004b1a5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004ca38) single_mobtv_pg_channel_table_pane_t

0x8dd9,	// (0x00045bd6) main_mobtv_info_pane_g1_ParamLimits

0x8dd9,	// (0x00045bd6) main_mobtv_info_pane_g1

0x8df5,	// (0x00045bf2) main_mobtv_info_pane_t1_ParamLimits

0x8df5,	// (0x00045bf2) main_mobtv_info_pane_t1

0x8e6d,	// (0x00045c6a) main_mobtv_info_pane_t2_ParamLimits

0x8e6d,	// (0x00045c6a) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004ca42) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004ca42) main_mobtv_info_pane_t

0x8efc,	// (0x00045cf9) wait_bar_pane_cp05

0x8f0e,	// (0x00045d0b) main_mobtv_loading_pane_g1_ParamLimits

0x8f0e,	// (0x00045d0b) main_mobtv_loading_pane_g1

0x8f1c,	// (0x00045d19) main_mobtv_loading_pane_g2_ParamLimits

0x8f1c,	// (0x00045d19) main_mobtv_loading_pane_g2

0x8f28,	// (0x00045d25) main_mobtv_loading_pane_g3_ParamLimits

0x8f28,	// (0x00045d25) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004ca49) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004ca49) main_mobtv_loading_pane_g

0xe3b6,	// (0x0004b1b3) main_mobtv_loading_pane_t1_ParamLimits

0xe3b6,	// (0x0004b1b3) main_mobtv_loading_pane_t1

0xe3ce,	// (0x0004b1cb) main_mobtv_loading_pane_t2_ParamLimits

0xe3ce,	// (0x0004b1cb) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004ca50) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004ca50) main_mobtv_loading_pane_t

0x8f36,	// (0x00045d33) wait_bar_pane_cp06_ParamLimits

0x8f36,	// (0x00045d33) wait_bar_pane_cp06

0xe3f2,	// (0x0004b1ef) main_mobtv_programe_curr_pane_t1

0xe400,	// (0x0004b1fd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004ca55) main_mobtv_programe_curr_pane_t

0xe40e,	// (0x0004b20b) main_mobtv_programe_next_pane_t1

0xe41c,	// (0x0004b219) main_mobtv_programe_next_pane_t2

0xe42a,	// (0x0004b227) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004ca5a) main_mobtv_programe_next_pane_t

0xa0e6,	// (0x00046ee3) bg_popup_mobtv_noti_window_pane

0xe438,	// (0x0004b235) popup_mobtv_noti_window_g1

0xe440,	// (0x0004b23d) popup_mobtv_noti_window_t1

0xe44e,	// (0x0004b24b) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004ca61) popup_mobtv_noti_window_t

0xcc79,	// (0x00049a76) bg_popup_mobtv_noti_window_pane_g1

0xa0e6,	// (0x00046ee3) sc_clock_pane

0xa0e6,	// (0x00046ee3) main_fs_bigclock_pane

0x861d,	// (0x0004541a) blid2_tripm_pane_t4_ParamLimits

0x861d,	// (0x0004541a) blid2_tripm_pane_t4

0x8f42,	// (0x00045d3f) sc_clock_pane_g1_ParamLimits

0x8f42,	// (0x00045d3f) sc_clock_pane_g1

0x8f50,	// (0x00045d4d) sc_clock_pane_t1_ParamLimits

0x8f50,	// (0x00045d4d) sc_clock_pane_t1

0x8f63,	// (0x00045d60) sc_clock_pane_t2_ParamLimits

0x8f63,	// (0x00045d60) sc_clock_pane_t2

0x8f75,	// (0x00045d72) sc_clock_pane_t3_ParamLimits

0x8f75,	// (0x00045d72) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004ca66) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004ca66) sc_clock_pane_t

0x97df,	// (0x000465dc) main_fs_bigclock_indicator_pane_ParamLimits

0x97df,	// (0x000465dc) main_fs_bigclock_indicator_pane

0x8ffe,	// (0x00045dfb) main_fs_bigclock_pane_g1_ParamLimits

0x8ffe,	// (0x00045dfb) main_fs_bigclock_pane_g1

0x97eb,	// (0x000465e8) main_fs_bigclock_pane_t1_ParamLimits

0x97eb,	// (0x000465e8) main_fs_bigclock_pane_t1

0x97fd,	// (0x000465fa) main_fs_bigclock_pane_t2_ParamLimits

0x97fd,	// (0x000465fa) main_fs_bigclock_pane_t2

0x9811,	// (0x0004660e) main_fs_bigclock_pane_t3_ParamLimits

0x9811,	// (0x0004660e) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004cc70) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004cc70) main_fs_bigclock_pane_t

0xec85,	// (0x0004ba82) main_fs_bigclock_indicator_pane_g1

0xe128,	// (0x0004af25) ncim_query_content_pane_g2_ParamLimits

0xe128,	// (0x0004af25) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004c9f3) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004c9f3) ncim_query_content_pane_g

0x8f89,	// (0x00045d86) sc_clock_pane_t4_ParamLimits

0x8f89,	// (0x00045d86) sc_clock_pane_t4

0xb165,	// (0x00047f62) main_radioblah_pane

0xd659,	// (0x0004a456) cell_call4_button_pane_t1_copy1_ParamLimits

0xd659,	// (0x0004a456) cell_call4_button_pane_t1_copy1

0x8c10,	// (0x00045a0d) main_ncimui_pane_t1_ParamLimits

0x8c10,	// (0x00045a0d) main_ncimui_pane_t1

0x8c2a,	// (0x00045a27) main_ncimui_pane_t2_ParamLimits

0x8c2a,	// (0x00045a27) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004c9ec) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004c9ec) main_ncimui_pane_t

0xe592,	// (0x0004b38f) main_radioblah_anim_pane_ParamLimits

0xe592,	// (0x0004b38f) main_radioblah_anim_pane

0xe5a3,	// (0x0004b3a0) main_radioblah_info_pane_ParamLimits

0xe5a3,	// (0x0004b3a0) main_radioblah_info_pane

0xe5b7,	// (0x0004b3b4) main_radioblah_pane_t1_ParamLimits

0xe5b7,	// (0x0004b3b4) main_radioblah_pane_t1

0xe5d3,	// (0x0004b3d0) main_radioblah_pane_t2_ParamLimits

0xe5d3,	// (0x0004b3d0) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004ca87) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004ca87) main_radioblah_pane_t

0x9050,	// (0x00045e4d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9050,	// (0x00045e4d) main_radioblah_rocker_ctrl_pane

0xe61b,	// (0x0004b418) main_radioblah_info_pane_t1_ParamLimits

0xe61b,	// (0x0004b418) main_radioblah_info_pane_t1

0x9095,	// (0x00045e92) main_radioblah_info_pane_t2_ParamLimits

0x9095,	// (0x00045e92) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004ca90) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004ca90) main_radioblah_info_pane_t

0xcc79,	// (0x00049a76) main_radioblah_rocker_ctrl_pane_g1

0x9145,	// (0x00045f42) main_radioblah_rocker_ctrl_pane_g2

0x914d,	// (0x00045f4a) main_radioblah_rocker_ctrl_pane_g3

0x9155,	// (0x00045f52) main_radioblah_rocker_ctrl_pane_g4

0x915d,	// (0x00045f5a) main_radioblah_rocker_ctrl_pane_g5

0x9165,	// (0x00045f62) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004ca99) main_radioblah_rocker_ctrl_pane_g

0x8bb7,	// (0x000459b4) main_cset_text2_pane_t1_copy1_ParamLimits

0x7409,	// (0x00044206) cam4_image_uncrop_qvga_pane

0x7550,	// (0x0004434d) vid4_image_uncrop_qcif_pane

0x87ab,	// (0x000455a8) cam6_image_uncrop_qvga_pane_ParamLimits

0x87ab,	// (0x000455a8) cam6_image_uncrop_qvga_pane

0xde3d,	// (0x0004ac3a) vid6_image_uncrop_qcif_pane_ParamLimits

0xde3d,	// (0x0004ac3a) vid6_image_uncrop_qcif_pane

0xa0e6,	// (0x00046ee3) bg_popup_preview_window_pane_cp03

0xe0da,	// (0x0004aed7) list_cset_text2_pane

0xe0e2,	// (0x0004aedf) main_cset6_text2_pane_g1

0xe0ea,	// (0x0004aee7) main_cset6_text2_pane_t1

0x916d,	// (0x00045f6a) list_cset_text2_pane_t1_ParamLimits

0x916d,	// (0x00045f6a) list_cset_text2_pane_t1

0xb165,	// (0x00047f62) main_radioblah_pane_ParamLimits

0x8ee8,	// (0x00045ce5) main_mobtv_info_pane_t3_ParamLimits

0x8ee8,	// (0x00045ce5) main_mobtv_info_pane_t3

0x903e,	// (0x00045e3b) main_radioblah_pane_g1

0x9069,	// (0x00045e66) main_radioblah_info_pane_g1

0x90ea,	// (0x00045ee7) main_radioblah_info_pane_t3_ParamLimits

0x90ea,	// (0x00045ee7) main_radioblah_info_pane_t3

0x4420,	// (0x0004121d) highlight_cell_cale_month_pane_ParamLimits

0x4420,	// (0x0004121d) highlight_cell_cale_month_pane

0xa0e6,	// (0x00046ee3) main_phob_fisheye_pane

0xcfd8,	// (0x00049dd5) scroll_pane_cp0031_ParamLimits

0xcfd8,	// (0x00049dd5) scroll_pane_cp0031

0xdf4b,	// (0x0004ad48) wait_bar_pane_cp08_ParamLimits

0x8980,	// (0x0004577d) cset_list_set_pane_copy1_ParamLimits

0xe655,	// (0x0004b452) highlight_cell_cale_month_pane_g1

0x918a,	// (0x00045f87) highlight_cell_cale_month_pane_t1

0xdbdc,	// (0x0004a9d9) list_gen_pane_cp01

0xd820,	// (0x0004a61d) scroll_pane_01

0x9198,	// (0x00045f95) list_single_double_fisheye_pane

0x16ca,	// (0x0003e4c7) list_double_fisheye_pane_g1_ParamLimits

0x16ca,	// (0x0003e4c7) list_double_fisheye_pane_g1

0x16d6,	// (0x0003e4d3) list_double_fisheye_pane_g2_ParamLimits

0x16d6,	// (0x0003e4d3) list_double_fisheye_pane_g2

0x91a1,	// (0x00045f9e) list_double_fisheye_pane_g3_ParamLimits

0x91a1,	// (0x00045f9e) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004caa6) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004caa6) list_double_fisheye_pane_g

0x1707,	// (0x0003e504) list_double_fisheye_pane_t1_ParamLimits

0x1707,	// (0x0003e504) list_double_fisheye_pane_t1

0x1722,	// (0x0003e51f) list_double_fisheye_pane_t2_ParamLimits

0x1722,	// (0x0003e51f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004cab1) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004cab1) list_double_fisheye_pane_t

0xa0e6,	// (0x00046ee3) main_call5_pane

0x8faf,	// (0x00045dac) sc_swipe_pane_ParamLimits

0x8faf,	// (0x00045dac) sc_swipe_pane

0x91b9,	// (0x00045fb6) call5_image_pane_ParamLimits

0x91b9,	// (0x00045fb6) call5_image_pane

0x91c9,	// (0x00045fc6) call5_swipe_1_pane_ParamLimits

0x91c9,	// (0x00045fc6) call5_swipe_1_pane

0x91d5,	// (0x00045fd2) call5_swipe_2_pane_ParamLimits

0x91d5,	// (0x00045fd2) call5_swipe_2_pane

0x91ef,	// (0x00045fec) popup_call5_audio_first_window_ParamLimits

0x91ef,	// (0x00045fec) popup_call5_audio_first_window

0xcedc,	// (0x00049cd9) call5_swipe_1_pane_g1_ParamLimits

0xcedc,	// (0x00049cd9) call5_swipe_1_pane_g1

0xe65d,	// (0x0004b45a) call5_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x0004b45a) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004cab6) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004cab6) call5_swipe_1_pane_g

0xe669,	// (0x0004b466) call5_swipe_1_pane_t1_ParamLimits

0xe669,	// (0x0004b466) call5_swipe_1_pane_t1

0xcedc,	// (0x00049cd9) call5_swipe_2_pane_g1_ParamLimits

0xcedc,	// (0x00049cd9) call5_swipe_2_pane_g1

0xe67e,	// (0x0004b47b) call5_swipe_2_pane_g2_ParamLimits

0xe67e,	// (0x0004b47b) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004cabb) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004cabb) call5_swipe_2_pane_g

0xe68a,	// (0x0004b487) call5_swipe_2_pane_t1_ParamLimits

0xe68a,	// (0x0004b487) call5_swipe_2_pane_t1

0xe69f,	// (0x0004b49c) sc_swipe_pane_g1_ParamLimits

0xe69f,	// (0x0004b49c) sc_swipe_pane_g1

0xe6ac,	// (0x0004b4a9) sc_swipe_pane_g2_ParamLimits

0xe6ac,	// (0x0004b4a9) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004cac0) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004cac0) sc_swipe_pane_g

0xe6b8,	// (0x0004b4b5) sc_swipe_pane_t1_ParamLimits

0xe6b8,	// (0x0004b4b5) sc_swipe_pane_t1

0xa0e6,	// (0x00046ee3) main_cmail_launcher_pane

0x91fd,	// (0x00045ffa) aid_size_cell_cmail_l_ParamLimits

0x91fd,	// (0x00045ffa) aid_size_cell_cmail_l

0x920d,	// (0x0004600a) grid_cmail_l_pane_ParamLimits

0x920d,	// (0x0004600a) grid_cmail_l_pane

0x921d,	// (0x0004601a) cell_cmail_l_pane_ParamLimits

0x921d,	// (0x0004601a) cell_cmail_l_pane

0x9231,	// (0x0004602e) cell_cmail_l_pane_g1_ParamLimits

0x9231,	// (0x0004602e) cell_cmail_l_pane_g1

0x923d,	// (0x0004603a) cell_cmail_l_pane_t1_ParamLimits

0x923d,	// (0x0004603a) cell_cmail_l_pane_t1

0xe6cd,	// (0x0004b4ca) cell_cmail_l_pane_t2_ParamLimits

0xe6cd,	// (0x0004b4ca) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004cac5) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004cac5) cell_cmail_l_pane_t

0xb165,	// (0x00047f62) grid_highlight_pane_cp018_ParamLimits

0xb165,	// (0x00047f62) grid_highlight_pane_cp018

0x2394,	// (0x0003f191) main2_pane_ParamLimits

0x2394,	// (0x0003f191) main2_pane

0xa8ca,	// (0x000476c7) popup_sp_fs_action_menu_bg_pane_g1

0xa8d2,	// (0x000476cf) popup_sp_fs_action_menu_bg_pane_g2

0xa8da,	// (0x000476d7) popup_sp_fs_action_menu_bg_pane_g3

0xa8e2,	// (0x000476df) popup_sp_fs_action_menu_bg_pane_g4

0xa8ea,	// (0x000476e7) popup_sp_fs_action_menu_bg_pane_g5

0xa8f2,	// (0x000476ef) popup_sp_fs_action_menu_bg_pane_g6

0xa8fa,	// (0x000476f7) popup_sp_fs_action_menu_bg_pane_g7

0xa902,	// (0x000476ff) popup_sp_fs_action_menu_bg_pane_g8

0xa90a,	// (0x00047707) popup_sp_fs_action_menu_bg_pane_g9

0xa912,	// (0x0004770f) popup_sp_fs_action_menu_bg_pane_g10

0xa912,	// (0x0004770f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004bf87) popup_sp_fs_action_menu_bg_pane_g

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g3_g1

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t3_g3_g2

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c035) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c035) list_medium_line_x2_t3_g3_g

0x0ec8,	// (0x0003dcc5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ec8,	// (0x0003dcc5) list_medium_line_x2_t3_g3_t1

0x0edd,	// (0x0003dcda) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0edd,	// (0x0003dcda) list_medium_line_x2_t3_g3_t2

0x0eef,	// (0x0003dcec) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c03c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c03c) list_medium_line_x2_t3_g3_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g2_g1

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c043) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c043) list_medium_line_x2_t3_g2_g

0x0f04,	// (0x0003dd01) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f04,	// (0x0003dd01) list_medium_line_x2_t3_g2_t1

0x0f1a,	// (0x0003dd17) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f1a,	// (0x0003dd17) list_medium_line_x2_t3_g2_t2

0x0f2c,	// (0x0003dd29) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f2c,	// (0x0003dd29) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c048) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c048) list_medium_line_x2_t3_g2_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t4_g4_g1

0x0f49,	// (0x0003dd46) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f49,	// (0x0003dd46) list_medium_line_x2_t4_g4_g2

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t4_g4_g3

0x0f55,	// (0x0003dd52) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f55,	// (0x0003dd52) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c04f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c04f) list_medium_line_x2_t4_g4_g

0x0f61,	// (0x0003dd5e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f61,	// (0x0003dd5e) list_medium_line_x2_t4_g4_t1

0x0f78,	// (0x0003dd75) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f78,	// (0x0003dd75) list_medium_line_x2_t4_g4_t2

0x0f8d,	// (0x0003dd8a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f8d,	// (0x0003dd8a) list_medium_line_x2_t4_g4_t3

0x0f9f,	// (0x0003dd9c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f9f,	// (0x0003dd9c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c058) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c058) list_medium_line_x2_t4_g4_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g4_g1

0x0f49,	// (0x0003dd46) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f49,	// (0x0003dd46) list_medium_line_x2_t2_g4_g2

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t2_g4_g3

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c0bf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c0bf) list_medium_line_x2_t2_g4_g

0x0fb1,	// (0x0003ddae) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0fb1,	// (0x0003ddae) list_medium_line_x2_t2_g4_t1

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c0c8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c0c8) list_medium_line_x2_t2_g4_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g3_g1

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t2_g3_g2

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c035) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c035) list_medium_line_x2_t2_g3_g

0x0fc6,	// (0x0003ddc3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0fc6,	// (0x0003ddc3) list_medium_line_x2_t2_g3_t1

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c0cd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c0cd) list_medium_line_x2_t2_g3_t

0x45ec,	// (0x000413e9) main_sp_fs_list_pane_ParamLimits

0x45ec,	// (0x000413e9) main_sp_fs_list_pane

0x45f8,	// (0x000413f5) sp_fs_scroll_pane_ParamLimits

0x45f8,	// (0x000413f5) sp_fs_scroll_pane

0x0fdb,	// (0x0003ddd8) list_medium_line_x2_t3_t1

0x0feb,	// (0x0003dde8) list_medium_line_x2_t3_t2

0x0ff9,	// (0x0003ddf6) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c118) list_medium_line_x2_t3_t

0x1007,	// (0x0003de04) list_medium_line_x3_t4_t1

0x1017,	// (0x0003de14) list_medium_line_x3_t4_t2

0x1025,	// (0x0003de22) list_medium_line_x3_t4_t3

0x0ff9,	// (0x0003ddf6) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c11f) list_medium_line_x3_t4_t

0x1033,	// (0x0003de30) list_medium_line_x4_t5_t1

0x1043,	// (0x0003de40) list_medium_line_x4_t5_t2

0x1025,	// (0x0003de22) list_medium_line_x4_t5_t3

0x1051,	// (0x0003de4e) list_medium_line_x4_t5_t4

0x0ff9,	// (0x0003ddf6) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c128) list_medium_line_x4_t5_t

0x0ea4,	// (0x0003dca1) list_medium_line_t4_g4_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_t4_g4_g1

0x0f55,	// (0x0003dd52) list_medium_line_t4_g4_g2_ParamLimits

0x0f55,	// (0x0003dd52) list_medium_line_t4_g4_g2

0x105f,	// (0x0003de5c) list_medium_line_t4_g4_g3_ParamLimits

0x105f,	// (0x0003de5c) list_medium_line_t4_g4_g3

0x0ebc,	// (0x0003dcb9) list_medium_line_t4_g4_g4_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c133) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c133) list_medium_line_t4_g4_g

0x106b,	// (0x0003de68) list_medium_line_t4_g4_t1_ParamLimits

0x106b,	// (0x0003de68) list_medium_line_t4_g4_t1

0x1080,	// (0x0003de7d) list_medium_line_t4_g4_t2_ParamLimits

0x1080,	// (0x0003de7d) list_medium_line_t4_g4_t2

0x1095,	// (0x0003de92) list_medium_line_t4_g4_t3_ParamLimits

0x1095,	// (0x0003de92) list_medium_line_t4_g4_t3

0x0eef,	// (0x0003dcec) list_medium_line_t4_g4_t4_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c13c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c13c) list_medium_line_t4_g4_t

0x4705,	// (0x00041502) chi_dic_find_pane_g1

0x5574,	// (0x00042371) main_tport_pane

0x134d,	// (0x0003e14a) list_medium_line_plain_t1

0x135b,	// (0x0003e158) list_medium_line_t2_g2_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t2_g2_g1

0x1367,	// (0x0003e164) list_medium_line_t2_g2_g2_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004c7fd) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004c7fd) list_medium_line_t2_g2_g

0x1373,	// (0x0003e170) list_medium_line_t2_g2_t1_ParamLimits

0x1373,	// (0x0003e170) list_medium_line_t2_g2_t1

0x138a,	// (0x0003e187) list_medium_line_t2_g2_t2_ParamLimits

0x138a,	// (0x0003e187) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004c802) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004c802) list_medium_line_t2_g2_t

0x15a9,	// (0x0003e3a6) aid_sp_fs_list_icon_a_sm

0x15b1,	// (0x0003e3ae) aid_sp_fs_list_icon_d

0x15b9,	// (0x0003e3b6) aid_sp_fs_text_primary

0x15c2,	// (0x0003e3bf) aid_sp_fs_text_secondary

0x8485,	// (0x00045282) list_medium_line

0x8485,	// (0x00045282) list_medium_line_g2

0x8485,	// (0x00045282) list_medium_line_g3

0x8485,	// (0x00045282) list_medium_line_plain

0x8485,	// (0x00045282) list_medium_line_plain_t2

0x8485,	// (0x00045282) list_medium_line_plain_t3

0x8485,	// (0x00045282) list_medium_line_right_icon

0x8485,	// (0x00045282) list_medium_line_right_iconx2

0x8485,	// (0x00045282) list_medium_line_t2

0x8485,	// (0x00045282) list_medium_line_t2_g2

0x8485,	// (0x00045282) list_medium_line_t2_g3

0x8485,	// (0x00045282) list_medium_line_t2_right_icon

0x8485,	// (0x00045282) list_medium_line_t2_right_iconx2

0x8485,	// (0x00045282) list_medium_line_t3

0x8485,	// (0x00045282) list_medium_line_t3_g2

0x8485,	// (0x00045282) list_medium_line_t3_g3

0x8485,	// (0x00045282) list_medium_line_t3_right_iconx2

0x15cb,	// (0x0003e3c8) list_medium_line_t4_g4

0x848e,	// (0x0004528b) list_medium_line_x2

0x848e,	// (0x0004528b) list_medium_line_x2_t2_g2

0x848e,	// (0x0004528b) list_medium_line_x2_t2_g3

0x848e,	// (0x0004528b) list_medium_line_x2_t2_g4

0x848e,	// (0x0004528b) list_medium_line_x2_t3

0x848e,	// (0x0004528b) list_medium_line_x2_t3_g2

0x848e,	// (0x0004528b) list_medium_line_x2_t3_g3

0x848e,	// (0x0004528b) list_medium_line_x2_t3_g4

0x848e,	// (0x0004528b) list_medium_line_x2_t4_g2

0x848e,	// (0x0004528b) list_medium_line_x2_t4_g4

0x15d4,	// (0x0003e3d1) list_medium_line_x3

0x15d4,	// (0x0003e3d1) list_medium_line_x3_t4

0x15d4,	// (0x0003e3d1) list_medium_line_x3_t4_g4

0x15cb,	// (0x0003e3c8) list_medium_line_x4_t4

0x15cb,	// (0x0003e3c8) list_medium_line_x4_t4_g7

0x15cb,	// (0x0003e3c8) list_medium_line_x4_t5

0x15dd,	// (0x0003e3da) list_single_fs_dyc_pane_ParamLimits

0x15dd,	// (0x0003e3da) list_single_fs_dyc_pane

0x0ea4,	// (0x0003dca1) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x4_t4_g7_g1

0x15f9,	// (0x0003e3f6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x15f9,	// (0x0003e3f6) list_medium_line_x4_t4_g7_g2

0x1605,	// (0x0003e402) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1605,	// (0x0003e402) list_medium_line_x4_t4_g7_g3

0x1614,	// (0x0003e411) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1614,	// (0x0003e411) list_medium_line_x4_t4_g7_g4

0x1620,	// (0x0003e41d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1620,	// (0x0003e41d) list_medium_line_x4_t4_g7_g5

0x162f,	// (0x0003e42c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x162f,	// (0x0003e42c) list_medium_line_x4_t4_g7_g6

0x163e,	// (0x0003e43b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x163e,	// (0x0003e43b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004c9cd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004c9cd) list_medium_line_x4_t4_g7_g

0x164a,	// (0x0003e447) list_medium_line_x4_t4_g7_t1_ParamLimits

0x164a,	// (0x0003e447) list_medium_line_x4_t4_g7_t1

0x165f,	// (0x0003e45c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x165f,	// (0x0003e45c) list_medium_line_x4_t4_g7_t2

0x1674,	// (0x0003e471) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1674,	// (0x0003e471) list_medium_line_x4_t4_g7_t3

0x1689,	// (0x0003e486) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1689,	// (0x0003e486) list_medium_line_x4_t4_g7_t4

0x169b,	// (0x0003e498) list_medium_line_x4_t4_g7_t5_ParamLimits

0x169b,	// (0x0003e498) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004c9dc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004c9dc) list_medium_line_x4_t4_g7_t

0x16ad,	// (0x0003e4aa) list_single_dyc_row_pane_ParamLimits

0x16ad,	// (0x0003e4aa) list_single_dyc_row_pane

0x91ad,	// (0x00045faa) call5_gesture_pane_ParamLimits

0x91ad,	// (0x00045faa) call5_gesture_pane

0x91e1,	// (0x00045fde) call5_windows_pane_ParamLimits

0x91e1,	// (0x00045fde) call5_windows_pane

0x9253,	// (0x00046050) call5_swipe_1_pane_cp_ParamLimits

0x9253,	// (0x00046050) call5_swipe_1_pane_cp

0x925f,	// (0x0004605c) call5_swipe_2_pane_cp_ParamLimits

0x925f,	// (0x0004605c) call5_swipe_2_pane_cp

0xa9f6,	// (0x000477f3) call5_image_pane_cp

0x926b,	// (0x00046068) popup_call5_audio_first_window_cp_ParamLimits

0x926b,	// (0x00046068) popup_call5_audio_first_window_cp

0xe69f,	// (0x0004b49c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69f,	// (0x0004b49c) call5_swipe_1_pane_g1_cp

0xe6df,	// (0x0004b4dc) call5_swipe_1_pane_g2_cp

0xe6b8,	// (0x0004b4b5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b8,	// (0x0004b4b5) call5_swipe_1_pane_t1_cp

0xe69f,	// (0x0004b49c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69f,	// (0x0004b49c) call5_swipe_2_pane_g1_cp

0xe6e7,	// (0x0004b4e4) call5_swipe_2_pane_g2_cp

0xe6ef,	// (0x0004b4ec) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ef,	// (0x0004b4ec) call5_swipe_2_pane_t1_cp

0xb165,	// (0x00047f62) main_sp_fs_email_pane

0xe704,	// (0x0004b501) main_sp_fs_listscroll_pane_te

0x1744,	// (0x0003e541) popup_sp_fs_action_menu_pane_ParamLimits

0x1744,	// (0x0003e541) popup_sp_fs_action_menu_pane

0xcc79,	// (0x00049a76) bg_sp_fs_ctrlbar_pane_g1

0xd27b,	// (0x0004a078) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd28d,	// (0x0004a08a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd284,	// (0x0004a081) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc79,	// (0x00049a76) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004caca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca5e,	// (0x0004985b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca5e,	// (0x0004985b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe70d,	// (0x0004b50a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe70d,	// (0x0004b50a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe719,	// (0x0004b516) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe719,	// (0x0004b516) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004cad3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004cad3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe725,	// (0x0004b522) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe725,	// (0x0004b522) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1786,	// (0x0003e583) list_medium_line_t2_right_icon_g1

0x178e,	// (0x0003e58b) list_medium_line_t2_right_icon_t1

0x179e,	// (0x0003e59b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004cad8) list_medium_line_t2_right_icon_t

0xc868,	// (0x00049665) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc868,	// (0x00049665) bg_sp_fs_ctrlbar_pane

0x92d0,	// (0x000460cd) main_sp_fs_ctrlbar_button_pane_cp01

0x92d8,	// (0x000460d5) main_sp_fs_ctrlbar_ddmenu_pane

0xe777,	// (0x0004b574) main_sp_fs_ctrlbar_pane_g1

0xe783,	// (0x0004b580) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004cadd) main_sp_fs_ctrlbar_pane_g

0xe78f,	// (0x0004b58c) main_sp_fs_ctrlbar_pane_t1

0x92e2,	// (0x000460df) main_sp_fs_ctrlbar_pane

0x92f8,	// (0x000460f5) main_sp_fs_listscroll_pane_te_cp01

0x17ac,	// (0x0003e5a9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x17ac,	// (0x0003e5a9) popup_sp_fs_action_menu_pane_cp01

0xb165,	// (0x00047f62) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb165,	// (0x00047f62) bg_sp_fs_highlight_list_pane_cp01

0x17d6,	// (0x0003e5d3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x17d6,	// (0x0003e5d3) sp_fs_action_menu_list_gene_pane_g1

0xe7bf,	// (0x0004b5bc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7bf,	// (0x0004b5bc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004cae7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004cae7) sp_fs_action_menu_list_gene_pane_g

0x17e5,	// (0x0003e5e2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x17e5,	// (0x0003e5e2) sp_fs_action_menu_list_gene_pane_t1

0x17fd,	// (0x0003e5fa) sp_fs_action_menu_list_gene_pane_ParamLimits

0x17fd,	// (0x0003e5fa) sp_fs_action_menu_list_gene_pane

0xe7cc,	// (0x0004b5c9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7cc,	// (0x0004b5c9) popup_sp_fs_action_menu_bg_pane

0x181c,	// (0x0003e619) sp_fs_action_menu_list_pane_ParamLimits

0x181c,	// (0x0003e619) sp_fs_action_menu_list_pane

0x183c,	// (0x0003e639) sp_fs_scroll_pane_cp01_ParamLimits

0x183c,	// (0x0003e639) sp_fs_scroll_pane_cp01

0x1862,	// (0x0003e65f) list_medium_line_plain_t2_t1

0x1872,	// (0x0003e66f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004caec) list_medium_line_plain_t2_t

0x1880,	// (0x0003e67d) list_medium_line_plain_t3_t1

0x1890,	// (0x0003e68d) list_medium_line_plain_t3_t2

0x189e,	// (0x0003e69b) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004caf1) list_medium_line_plain_t3_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t2_g2_g1

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c043) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c043) list_medium_line_x2_t2_g2_g

0x106b,	// (0x0003de68) list_medium_line_x2_t2_g2_t1_ParamLimits

0x106b,	// (0x0003de68) list_medium_line_x2_t2_g2_t1

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004caf8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004caf8) list_medium_line_x2_t2_g2_t

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t4_g2_g1

0x18ac,	// (0x0003e6a9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x18ac,	// (0x0003e6a9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004cafd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004cafd) list_medium_line_x2_t4_g2_g

0x18bd,	// (0x0003e6ba) list_medium_line_x2_t4_g2_t1_ParamLimits

0x18bd,	// (0x0003e6ba) list_medium_line_x2_t4_g2_t1

0x18d7,	// (0x0003e6d4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x18d7,	// (0x0003e6d4) list_medium_line_x2_t4_g2_t2

0x18ec,	// (0x0003e6e9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x18ec,	// (0x0003e6e9) list_medium_line_x2_t4_g2_t3

0x0eef,	// (0x0003dcec) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004cb02) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004cb02) list_medium_line_x2_t4_g2_t

0x1901,	// (0x0003e6fe) list_medium_line_t3_right_iconx2_g1

0x1786,	// (0x0003e583) list_medium_line_t3_right_iconx2_g2

0x1909,	// (0x0003e706) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004cb0b) list_medium_line_t3_right_iconx2_g

0x1911,	// (0x0003e70e) list_medium_line_t3_right_iconx2_t1

0x1921,	// (0x0003e71e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004cb12) list_medium_line_t3_right_iconx2_t

0x0ea4,	// (0x0003dca1) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x3_t4_g4_g1

0x0eb0,	// (0x0003dcad) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x3_t4_g4_g2

0x0f55,	// (0x0003dd52) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f55,	// (0x0003dd52) list_medium_line_x3_t4_g4_g3

0x192f,	// (0x0003e72c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x192f,	// (0x0003e72c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004cb17) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004cb17) list_medium_line_x3_t4_g4_g

0x193b,	// (0x0003e738) list_medium_line_x3_t4_g4_t1_ParamLimits

0x193b,	// (0x0003e738) list_medium_line_x3_t4_g4_t1

0x1952,	// (0x0003e74f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1952,	// (0x0003e74f) list_medium_line_x3_t4_g4_t2

0x1080,	// (0x0003de7d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1080,	// (0x0003de7d) list_medium_line_x3_t4_g4_t3

0x1967,	// (0x0003e764) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1967,	// (0x0003e764) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004cb20) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004cb20) list_medium_line_x3_t4_g4_t

0x1984,	// (0x0003e781) list_single_dyc_row_text_pane_t1_ParamLimits

0x1984,	// (0x0003e781) list_single_dyc_row_text_pane_t1

0x19bb,	// (0x0003e7b8) list_single_dyc_row_text_pane_t2_ParamLimits

0x19bb,	// (0x0003e7b8) list_single_dyc_row_text_pane_t2

0x1a31,	// (0x0003e82e) list_single_dyc_row_text_pane_t3_ParamLimits

0x1a31,	// (0x0003e82e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004cb29) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004cb29) list_single_dyc_row_text_pane_t

0x1b02,	// (0x0003e8ff) list_single_dyc_row_pane_g1_ParamLimits

0x1b02,	// (0x0003e8ff) list_single_dyc_row_pane_g1

0x1b0e,	// (0x0003e90b) list_single_dyc_row_pane_g2_ParamLimits

0x1b0e,	// (0x0003e90b) list_single_dyc_row_pane_g2

0x1b1a,	// (0x0003e917) list_single_dyc_row_pane_g3_ParamLimits

0x1b1a,	// (0x0003e917) list_single_dyc_row_pane_g3

0x1b26,	// (0x0003e923) list_single_dyc_row_pane_g4_ParamLimits

0x1b26,	// (0x0003e923) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004cb36) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004cb36) list_single_dyc_row_pane_g

0x1b32,	// (0x0003e92f) list_single_dyc_row_text_pane_ParamLimits

0x1b32,	// (0x0003e92f) list_single_dyc_row_text_pane

0xa0e6,	// (0x00046ee3) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0004b5e9) thumb_sp_fs_scroll_pane

0x135b,	// (0x0003e158) list_medium_line_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_g1

0x1b51,	// (0x0003e94e) list_medium_line_t1_ParamLimits

0x1b51,	// (0x0003e94e) list_medium_line_t1

0x0ea4,	// (0x0003dca1) list_medium_line_x2_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_g1

0x0eb0,	// (0x0003dcad) list_medium_line_x2_g2_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004cb3f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004cb3f) list_medium_line_x2_g

0x1b66,	// (0x0003e963) list_medium_line_x2_t1_ParamLimits

0x1b66,	// (0x0003e963) list_medium_line_x2_t1

0x0ea4,	// (0x0003dca1) list_medium_line_x3_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x3_g1

0x0eb0,	// (0x0003dcad) list_medium_line_x3_g2_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004cb3f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004cb3f) list_medium_line_x3_g

0x1b66,	// (0x0003e963) list_medium_line_x3_t1_ParamLimits

0x1b66,	// (0x0003e963) list_medium_line_x3_t1

0xe7f5,	// (0x0004b5f2) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0004b5fb) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0004b604) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb44) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0004b5f2) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0004b5fb) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0004b604) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb44) bg_sp_fs_scroll_pane_g

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ea4,	// (0x0003dca1) list_medium_line_x2_t3_g4_g1

0x0f49,	// (0x0003dd46) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f49,	// (0x0003dd46) list_medium_line_x2_t3_g4_g2

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0eb0,	// (0x0003dcad) list_medium_line_x2_t3_g4_g3

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ebc,	// (0x0003dcb9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c0bf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c0bf) list_medium_line_x2_t3_g4_g

0x1b7c,	// (0x0003e979) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b7c,	// (0x0003e979) list_medium_line_x2_t3_g4_t1

0x1b92,	// (0x0003e98f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b92,	// (0x0003e98f) list_medium_line_x2_t3_g4_t2

0x0eef,	// (0x0003dcec) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eef,	// (0x0003dcec) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004cb4b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004cb4b) list_medium_line_x2_t3_g4_t

0x135b,	// (0x0003e158) list_medium_line_g2_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_g2_g1

0x1367,	// (0x0003e164) list_medium_line_g2_g2_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004c7fd) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004c7fd) list_medium_line_g2_g

0x1bac,	// (0x0003e9a9) list_medium_line_g2_t1_ParamLimits

0x1bac,	// (0x0003e9a9) list_medium_line_g2_t1

0x135b,	// (0x0003e158) list_medium_line_t3_g2_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t3_g2_g1

0x1367,	// (0x0003e164) list_medium_line_t3_g2_g2_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004c7fd) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004c7fd) list_medium_line_t3_g2_g

0x1bc1,	// (0x0003e9be) list_medium_line_t3_g2_t1_ParamLimits

0x1bc1,	// (0x0003e9be) list_medium_line_t3_g2_t1

0x1bdb,	// (0x0003e9d8) list_medium_line_t3_g2_t2_ParamLimits

0x1bdb,	// (0x0003e9d8) list_medium_line_t3_g2_t2

0x1bf0,	// (0x0003e9ed) list_medium_line_t3_g2_t3_ParamLimits

0x1bf0,	// (0x0003e9ed) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004cb52) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004cb52) list_medium_line_t3_g2_t

0x1786,	// (0x0003e583) list_medium_line_right_icon_g1

0x1c06,	// (0x0003ea03) list_medium_line_right_icon_t1

0x135b,	// (0x0003e158) list_medium_line_t2_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t2_g1

0x1c14,	// (0x0003ea11) list_medium_line_t2_t1_ParamLimits

0x1c14,	// (0x0003ea11) list_medium_line_t2_t1

0x1c2e,	// (0x0003ea2b) list_medium_line_t2_t2_ParamLimits

0x1c2e,	// (0x0003ea2b) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004cb59) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004cb59) list_medium_line_t2_t

0x135b,	// (0x0003e158) list_medium_line_t3_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t3_g1

0x1c43,	// (0x0003ea40) list_medium_line_t3_t1_ParamLimits

0x1c43,	// (0x0003ea40) list_medium_line_t3_t1

0x1c5a,	// (0x0003ea57) list_medium_line_t3_t2_ParamLimits

0x1c5a,	// (0x0003ea57) list_medium_line_t3_t2

0x1c6f,	// (0x0003ea6c) list_medium_line_t3_t3_ParamLimits

0x1c6f,	// (0x0003ea6c) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004cb5e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004cb5e) list_medium_line_t3_t

0x135b,	// (0x0003e158) list_medium_line_g3_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_g3_g1

0x1c81,	// (0x0003ea7e) list_medium_line_g3_g2_ParamLimits

0x1c81,	// (0x0003ea7e) list_medium_line_g3_g2

0x1367,	// (0x0003e164) list_medium_line_g3_g3_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004cb65) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004cb65) list_medium_line_g3_g

0x1c8d,	// (0x0003ea8a) list_medium_line_g3_t1_ParamLimits

0x1c8d,	// (0x0003ea8a) list_medium_line_g3_t1

0x135b,	// (0x0003e158) list_medium_line_t2_g3_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t2_g3_g1

0x1c81,	// (0x0003ea7e) list_medium_line_t2_g3_g2_ParamLimits

0x1c81,	// (0x0003ea7e) list_medium_line_t2_g3_g2

0x1367,	// (0x0003e164) list_medium_line_t2_g3_g3_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004cb65) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004cb65) list_medium_line_t2_g3_g

0x1ca2,	// (0x0003ea9f) list_medium_line_t2_g3_t1_ParamLimits

0x1ca2,	// (0x0003ea9f) list_medium_line_t2_g3_t1

0x1cbc,	// (0x0003eab9) list_medium_line_t2_g3_t2_ParamLimits

0x1cbc,	// (0x0003eab9) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004cb6c) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004cb6c) list_medium_line_t2_g3_t

0x135b,	// (0x0003e158) list_medium_line_t3_g3_g1_ParamLimits

0x135b,	// (0x0003e158) list_medium_line_t3_g3_g1

0x1c81,	// (0x0003ea7e) list_medium_line_t3_g3_g2_ParamLimits

0x1c81,	// (0x0003ea7e) list_medium_line_t3_g3_g2

0x1367,	// (0x0003e164) list_medium_line_t3_g3_g3_ParamLimits

0x1367,	// (0x0003e164) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004cb65) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004cb65) list_medium_line_t3_g3_g

0x1cd1,	// (0x0003eace) list_medium_line_t3_g3_t1_ParamLimits

0x1cd1,	// (0x0003eace) list_medium_line_t3_g3_t1

0x1cea,	// (0x0003eae7) list_medium_line_t3_g3_t2_ParamLimits

0x1cea,	// (0x0003eae7) list_medium_line_t3_g3_t2

0x1d00,	// (0x0003eafd) list_medium_line_t3_g3_t3_ParamLimits

0x1d00,	// (0x0003eafd) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004cb71) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004cb71) list_medium_line_t3_g3_t

0x1901,	// (0x0003e6fe) list_medium_line_right_iconx2_g1

0x1786,	// (0x0003e583) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb78) list_medium_line_right_iconx2_g

0x1d16,	// (0x0003eb13) list_medium_line_right_iconx2_t1

0x1901,	// (0x0003e6fe) list_medium_line_t2_right_iconx2_g1

0x1786,	// (0x0003e583) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb78) list_medium_line_t2_right_iconx2_g

0x1d24,	// (0x0003eb21) list_medium_line_t2_right_iconx2_t1

0x1d34,	// (0x0003eb31) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004cb7d) list_medium_line_t2_right_iconx2_t

0x1d42,	// (0x0003eb3f) list_medium_line_x4_t4_t1

0x1d50,	// (0x0003eb4d) list_medium_line_x4_t4_t2

0x1d60,	// (0x0003eb5d) list_medium_line_x4_t4_t3

0x1d70,	// (0x0003eb6d) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004cb82) list_medium_line_x4_t4_t

0x9333,	// (0x00046130) tport_appsw_pane_ParamLimits

0x9333,	// (0x00046130) tport_appsw_pane

0x9341,	// (0x0004613e) tport_contact_pane_ParamLimits

0x9341,	// (0x0004613e) tport_contact_pane

0x9351,	// (0x0004614e) tport_listscroll_pane_ParamLimits

0x9351,	// (0x0004614e) tport_listscroll_pane

0x9361,	// (0x0004615e) cell_tport_appsw_pane_ParamLimits

0x9361,	// (0x0004615e) cell_tport_appsw_pane

0xcf61,	// (0x00049d5e) tport_appsw_pane_g1_ParamLimits

0xcf61,	// (0x00049d5e) tport_appsw_pane_g1

0xe810,	// (0x0004b60d) tport_contact_pane_g1

0xe1ae,	// (0x0004afab) tport_contact_pane_t1

0xe819,	// (0x0004b616) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004cb8b) tport_contact_pane_t

0xe827,	// (0x0004b624) list_tport_pane

0xe830,	// (0x0004b62d) scroll_pane_cp_030

0x9394,	// (0x00046191) cell_tport_appsw_pane_g1

0x93a4,	// (0x000461a1) cell_tport_appsw_pane_t1

0x93b2,	// (0x000461af) grid_highlight_pane_cp019

0x93ba,	// (0x000461b7) list_tport_double_graphic_pane_ParamLimits

0x93ba,	// (0x000461b7) list_tport_double_graphic_pane

0xb165,	// (0x00047f62) list_highlight_pane_cp023_ParamLimits

0xb165,	// (0x00047f62) list_highlight_pane_cp023

0x93cb,	// (0x000461c8) list_tport_double_graphic_pane_g1_ParamLimits

0x93cb,	// (0x000461c8) list_tport_double_graphic_pane_g1

0x93d8,	// (0x000461d5) list_tport_double_graphic_pane_t1_ParamLimits

0x93d8,	// (0x000461d5) list_tport_double_graphic_pane_t1

0x93ed,	// (0x000461ea) list_tport_double_graphic_pane_t2_ParamLimits

0x93ed,	// (0x000461ea) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004cb97) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004cb97) list_tport_double_graphic_pane_t

0xa0e6,	// (0x00046ee3) main_cale_note_pane

0x77b1,	// (0x000445ae) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77b1,	// (0x000445ae) cell_vitu2_function_top_wide_pane_cp01

0x8efc,	// (0x00045cf9) wait_bar_pane_cp05_ParamLimits

0xb165,	// (0x00047f62) listscroll_cmail_pane

0xe839,	// (0x0004b636) list_cmail_pane

0x93ff,	// (0x000461fc) list_cmail_body_pane

0x941f,	// (0x0004621c) list_single_cmail_header_caption_pane

0x944b,	// (0x00046248) list_single_cmail_header_detail_pane_ParamLimits

0x944b,	// (0x00046248) list_single_cmail_header_detail_pane

0xe849,	// (0x0004b646) list_single_cmail_header_caption_pane_t1

0x1d80,	// (0x0003eb7d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1d80,	// (0x0003eb7d) list_single_cmail_header_detail_pane_g1

0x1d96,	// (0x0003eb93) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1d96,	// (0x0003eb93) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004cb9c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004cb9c) list_single_cmail_header_detail_pane_g

0x1da2,	// (0x0003eb9f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1da2,	// (0x0003eb9f) list_single_cmail_header_detail_pane_t1

0x1e02,	// (0x0003ebff) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1e02,	// (0x0003ebff) list_single_cmail_header_editor_pane_bg

0xe34f,	// (0x0004b14c) list_cmail_body_pane_g1

0xe86d,	// (0x0004b66a) list_cmail_body_pane_t1

0xd706,	// (0x0004a503) list_single_cmail_header_editor_pane_bg_g1

0xac4f,	// (0x00047a4c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd716,	// (0x0004a513) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd70e,	// (0x0004a50b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd92a,	// (0x0004a727) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd736,	// (0x0004a533) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd726,	// (0x0004a523) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd72e,	// (0x0004a52b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac2f,	// (0x00047a2c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9481,	// (0x0004627e) calenote_gesture_pane_ParamLimits

0x9481,	// (0x0004627e) calenote_gesture_pane

0x949b,	// (0x00046298) calenote_window_pane_ParamLimits

0x949b,	// (0x00046298) calenote_window_pane

0xe87b,	// (0x0004b678) popup_note_window_cp01

0x94b3,	// (0x000462b0) calenote_swipe_1_pane_ParamLimits

0x94b3,	// (0x000462b0) calenote_swipe_1_pane

0x925f,	// (0x0004605c) calenote_swipe_2_pane_ParamLimits

0x925f,	// (0x0004605c) calenote_swipe_2_pane

0xe69f,	// (0x0004b49c) calenote_swipe_1_pane_g1_ParamLimits

0xe69f,	// (0x0004b49c) calenote_swipe_1_pane_g1

0xe6ac,	// (0x0004b4a9) calenote_swipe_1_pane_g2_ParamLimits

0xe6ac,	// (0x0004b4a9) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004cac0) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004cac0) calenote_swipe_1_pane_g

0xe88d,	// (0x0004b68a) calenote_swipe_1_pane_t1_ParamLimits

0xe88d,	// (0x0004b68a) calenote_swipe_1_pane_t1

0xe69f,	// (0x0004b49c) calenote_swipe_2_pane_g1_ParamLimits

0xe69f,	// (0x0004b49c) calenote_swipe_2_pane_g1

0xe8ac,	// (0x0004b6a9) calenote_swipe_2_pane_g2_ParamLimits

0xe8ac,	// (0x0004b6a9) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004cba8) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004cba8) calenote_swipe_2_pane_g

0xe8b8,	// (0x0004b6b5) calenote_swipe_2_pane_t1_ParamLimits

0xe8b8,	// (0x0004b6b5) calenote_swipe_2_pane_t1

0xa0e6,	// (0x00046ee3) main_mup_navstr_pane

0x652c,	// (0x00043329) main_mup3_pane_t7_ParamLimits

0x652c,	// (0x00043329) main_mup3_pane_t7

0x6f31,	// (0x00043d2e) main_mp4_pane_g6_ParamLimits

0x6f31,	// (0x00043d2e) main_mp4_pane_g6

0x72a3,	// (0x000440a0) main_image3_pane_t4_ParamLimits

0x72a3,	// (0x000440a0) main_image3_pane_t4

0x94c6,	// (0x000462c3) popup_navstr_preview_pane_ParamLimits

0x94c6,	// (0x000462c3) popup_navstr_preview_pane

0x94d2,	// (0x000462cf) scroll_navstr_pane_ParamLimits

0x94d2,	// (0x000462cf) scroll_navstr_pane

0xa0e6,	// (0x00046ee3) bg_popup_preview_window_pane_cp04

0xe8df,	// (0x0004b6dc) popup_navstr_preview_pane_t1

0x94de,	// (0x000462db) scroll_navstr_pane_g1_ParamLimits

0x94de,	// (0x000462db) scroll_navstr_pane_g1

0x94eb,	// (0x000462e8) scroll_navstr_pane_t1_ParamLimits

0x94eb,	// (0x000462e8) scroll_navstr_pane_t1

0xe884,	// (0x0004b681) bg_button_pane_cp014

0xe884,	// (0x0004b681) bg_button_pane_cp030

0x16ea,	// (0x0003e4e7) list_double_fisheye_pane_g4_ParamLimits

0x16ea,	// (0x0003e4e7) list_double_fisheye_pane_g4

0x16f6,	// (0x0003e4f3) list_double_fisheye_pane_g5_ParamLimits

0x16f6,	// (0x0003e4f3) list_double_fisheye_pane_g5

0xd212,	// (0x0004a00f) sp_fs_scroll_pane_cp03

0xe777,	// (0x0004b574) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe783,	// (0x0004b580) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004cadd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe78f,	// (0x0004b58c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe841,	// (0x0004b63e) sp_fs_scroll_pane_cp02

0xa935,	// (0x00047732) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa935,	// (0x00047732) popup_sp_fs_calendar_preview_list_single_pane

0xa0e6,	// (0x00046ee3) main_cam6_pano_pane

0xb165,	// (0x00047f62) main_mup3_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_phacti_pane

0x8dd1,	// (0x00045bce) bg_button_pane_cp11

0x8de9,	// (0x00045be6) main_mobtv_info_pane_g2_ParamLimits

0x8de9,	// (0x00045be6) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004ca3d) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004ca3d) main_mobtv_info_pane_g

0x8f9b,	// (0x00045d98) sc_clock_pane_t5_ParamLimits

0x8f9b,	// (0x00045d98) sc_clock_pane_t5

0x903e,	// (0x00045e3b) main_radioblah_pane_g1_ParamLimits

0xe5eb,	// (0x0004b3e8) main_radioblah_pane_t3_ParamLimits

0xe5eb,	// (0x0004b3e8) main_radioblah_pane_t3

0xe603,	// (0x0004b400) main_radioblah_pane_t4_ParamLimits

0xe603,	// (0x0004b400) main_radioblah_pane_t4

0x905c,	// (0x00045e59) main_radioblah_text_pane_ParamLimits

0x905c,	// (0x00045e59) main_radioblah_text_pane

0x9069,	// (0x00045e66) main_radioblah_info_pane_g1_ParamLimits

0x90fe,	// (0x00045efb) main_radioblah_info_pane_t4_ParamLimits

0x90fe,	// (0x00045efb) main_radioblah_info_pane_t4

0xb165,	// (0x00047f62) main_sp_fs_calendar_pane

0x94fd,	// (0x000462fa) main_phacti_pane_g1

0x9505,	// (0x00046302) phacti_note_pane_ParamLimits

0x9505,	// (0x00046302) phacti_note_pane

0xe8f6,	// (0x0004b6f3) phacti_term_pane_ParamLimits

0xe8f6,	// (0x0004b6f3) phacti_term_pane

0xe90b,	// (0x0004b708) phacti_note_pane_t1_ParamLimits

0xe90b,	// (0x0004b708) phacti_note_pane_t1

0x1e19,	// (0x0003ec16) phacti_term_pane_g1

0x1e21,	// (0x0003ec1e) phacti_term_pane_t1_ParamLimits

0x1e21,	// (0x0003ec1e) phacti_term_pane_t1

0xe922,	// (0x0004b71f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa50,	// (0x0004784d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004cbb2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92a,	// (0x0004b727) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92a,	// (0x0004b727) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93f,	// (0x0004b73c) aid_popup_sp_fs_bg_corner_pane

0xcc79,	// (0x00049a76) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0e6,	// (0x00046ee3) popup_sp_fs_calendar_preview_bg_pane

0xe947,	// (0x0004b744) popup_sp_fs_calendar_preview_list_pane

0xc868,	// (0x00049665) bg_main_sp_fs_cale_pane_ParamLimits

0xc868,	// (0x00049665) bg_main_sp_fs_cale_pane

0x1e54,	// (0x0003ec51) listscroll_cale_mrui_pane_ParamLimits

0x1e54,	// (0x0003ec51) listscroll_cale_mrui_pane

0x1e69,	// (0x0003ec66) listscroll_sp_fs_schedule_track_pane

0x1e72,	// (0x0003ec6f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1e72,	// (0x0003ec6f) main_sp_fs_ctrlbar_pane_cp01

0xe94f,	// (0x0004b74c) main_sp_fs_ribbon_pane

0x1e85,	// (0x0003ec82) popup_sp_fs_cale_preview_window

0x9568,	// (0x00046365) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9568,	// (0x00046365) list_single_sp_fs_schedule_track_pane

0xdadd,	// (0x0004a8da) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdadd,	// (0x0004a8da) bg_sp_fs_highlight_list_pane_cp03

0x958b,	// (0x00046388) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x958b,	// (0x00046388) list_single_sp_fs_schedule_track_pane_g1

0x9597,	// (0x00046394) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9597,	// (0x00046394) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004cbb7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004cbb7) list_single_sp_fs_schedule_track_pane_g

0x95a3,	// (0x000463a0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x95a3,	// (0x000463a0) list_single_sp_fs_schedule_track_pane_t1

0x95bb,	// (0x000463b8) sp_fs_schedule_track_pane_ParamLimits

0x95bb,	// (0x000463b8) sp_fs_schedule_track_pane

0xe957,	// (0x0004b754) sp_fs_schedule_track_pane_g1

0xe95f,	// (0x0004b75c) sp_fs_schedule_track_pane_g2

0xe967,	// (0x0004b764) sp_fs_schedule_track_pane_g3

0xe96f,	// (0x0004b76c) sp_fs_schedule_track_pane_g4

0xe977,	// (0x0004b774) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004cbbc) sp_fs_schedule_track_pane_g

0xd706,	// (0x0004a503) bg_sp_fs_schedule_viewer_highlight_g1

0xac4f,	// (0x00047a4c) bg_sp_fs_schedule_viewer_highlight_g2

0xd70e,	// (0x0004a50b) bg_sp_fs_schedule_viewer_highlight_g3

0xd716,	// (0x0004a513) bg_sp_fs_schedule_viewer_highlight_g4

0xd92a,	// (0x0004a727) bg_sp_fs_schedule_viewer_highlight_g5

0xd726,	// (0x0004a523) bg_sp_fs_schedule_viewer_highlight_g6

0xd72e,	// (0x0004a52b) bg_sp_fs_schedule_viewer_highlight_g7

0xd736,	// (0x0004a533) bg_sp_fs_schedule_viewer_highlight_g8

0xac2f,	// (0x00047a2c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004cbc7) bg_sp_fs_schedule_viewer_highlight_g

0xa0e6,	// (0x00046ee3) bg_main_sp_fs_ribbon_pane

0x95cb,	// (0x000463c8) main_sp_fs_ribbon_pane_g1

0xe97f,	// (0x0004b77c) main_sp_fs_ribbon_pane_t1

0x95d4,	// (0x000463d1) main_sp_fs_ribbon_pane_t2

0xe98e,	// (0x0004b78b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004cbda) main_sp_fs_ribbon_pane_t

0xe99d,	// (0x0004b79a) main_sp_fs_ribbon_scheduler_pane

0xe9a5,	// (0x0004b7a2) bg_main_sp_fs_ribbon_pane_g1

0xe9ae,	// (0x0004b7ab) bg_main_sp_fs_ribbon_pane_g2

0xe9b7,	// (0x0004b7b4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004cbe1) bg_main_sp_fs_ribbon_pane_g

0xe9bf,	// (0x0004b7bc) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c8,	// (0x0004b7c5) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d1,	// (0x0004b7ce) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004cbe8) main_sp_fs_ribbon_scheduler_pane_g

0xe9da,	// (0x0004b7d7) list_cale_mrui_pane

0x95e3,	// (0x000463e0) sp_fs_scroll_pane_cp07_ParamLimits

0x95e3,	// (0x000463e0) sp_fs_scroll_pane_cp07

0x95ff,	// (0x000463fc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95ff,	// (0x000463fc) bg_sp_fs_schedule_viewer_highlight

0xe9e7,	// (0x0004b7e4) list_single_sp_fs_schedule_track_pane_cp01

0xe9ef,	// (0x0004b7ec) list_sp_fs_schedule_track_pane

0xe9f7,	// (0x0004b7f4) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f7,	// (0x0004b7f4) sp_fs_scroll_pane_cp06

0xcc79,	// (0x00049a76) bgmain_sp_fs_calendar_pane_g1

0x1e97,	// (0x0003ec94) list_single_cale_mrui_pane_ParamLimits

0x1e97,	// (0x0003ec94) list_single_cale_mrui_pane

0x1ec5,	// (0x0003ecc2) list_single_cale_mrui_row_pane_ParamLimits

0x1ec5,	// (0x0003ecc2) list_single_cale_mrui_row_pane

0x1ed2,	// (0x0003eccf) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1ed2,	// (0x0003eccf) list_single_cale_mrui_row_pane_g1

0x1f0a,	// (0x0003ed07) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1f0a,	// (0x0003ed07) list_single_cale_mrui_row_pane_t1

0x1f1c,	// (0x0003ed19) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1f1c,	// (0x0003ed19) list_single_cale_mrui_row_pane_t2

0x1f82,	// (0x0003ed7f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1f82,	// (0x0003ed7f) list_single_cale_mrui_row_pane_t3

0x1fb1,	// (0x0003edae) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1fb1,	// (0x0003edae) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004cbf6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004cbf6) list_single_cale_mrui_row_pane_t

0x1fe0,	// (0x0003eddd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1fe0,	// (0x0003eddd) list_single_cmail_header_editor_pane_bg_cp01

0x2000,	// (0x0003edfd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2000,	// (0x0003edfd) list_single_cmail_header_editor_pane_bg_cp02

0x960c,	// (0x00046409) main_radioblah_text_pane_t1_ParamLimits

0x960c,	// (0x00046409) main_radioblah_text_pane_t1

0xea16,	// (0x0004b813) cam6_indi_pane_cp01

0xea1e,	// (0x0004b81b) cam6_mode_pane_cp01

0xea26,	// (0x0004b823) cam6_pano_pane

0xea37,	// (0x0004b834) cam6_zoom_pane_cp01

0xea3f,	// (0x0004b83c) cam6_pano_image_pane

0xea4a,	// (0x0004b847) cam6_pano_pane_g1

0xe34f,	// (0x0004b14c) cam6_pano_pane_g2

0xea53,	// (0x0004b850) cam6_pano_pane_g3

0xea5c,	// (0x0004b859) cam6_pano_pane_g4

0xd268,	// (0x0004a065) cam6_pano_pane_g5

0xea65,	// (0x0004b862) cam6_pano_pane_g6

0xea2f,	// (0x0004b82c) cam6_pano_pane_g7

0xea6f,	// (0x0004b86c) cam6_pano_pane_g8

0xea78,	// (0x0004b875) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004cbff) cam6_pano_pane_g

0xa0e6,	// (0x00046ee3) main_browser_tag_pane

0xe8d7,	// (0x0004b6d4) grid_navstr_albumart_pane

0xea83,	// (0x0004b880) cell_navstr_albumart_pane_ParamLimits

0xea83,	// (0x0004b880) cell_navstr_albumart_pane

0xeaa3,	// (0x0004b8a0) cell_navstr_albumart_pane_g1

0xc679,	// (0x00049476) cell_navstr_albumart_pane_g2

0xc689,	// (0x00049486) cell_navstr_albumart_pane_g3

0xc681,	// (0x0004947e) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004cc12) cell_navstr_albumart_pane_g

0x9627,	// (0x00046424) bt_list_pane_ParamLimits

0x9627,	// (0x00046424) bt_list_pane

0x9647,	// (0x00046444) bt_list_pane_t1

0x9656,	// (0x00046453) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004cc1b) bt_list_pane_t

0xa0e6,	// (0x00046ee3) main_cale_prevew_pane

0x9665,	// (0x00046462) popup_cale_preview_window_ParamLimits

0x9665,	// (0x00046462) popup_cale_preview_window

0xb165,	// (0x00047f62) bg_popup_preview_window_pane_cp05_ParamLimits

0xb165,	// (0x00047f62) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0004b8a8) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0004b8a8) list_cale_preview_pane

0x967e,	// (0x0004647b) list_double_cale_preview_pane_ParamLimits

0x967e,	// (0x0004647b) list_double_cale_preview_pane

0x9690,	// (0x0004648d) list_single_cale_preview_pane_ParamLimits

0x9690,	// (0x0004648d) list_single_cale_preview_pane

0x96a6,	// (0x000464a3) list_single_cale_preview_pane_g1

0x96ae,	// (0x000464ab) list_single_cale_preview_pane_t1_ParamLimits

0x96ae,	// (0x000464ab) list_single_cale_preview_pane_t1

0x96c3,	// (0x000464c0) list_double_cale_preview_pane_g1

0x96cb,	// (0x000464c8) list_double_cale_preview_pane_t1_ParamLimits

0x96cb,	// (0x000464c8) list_double_cale_preview_pane_t1

0x96e0,	// (0x000464dd) list_double_cale_preview_pane_t2_ParamLimits

0x96e0,	// (0x000464dd) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004cc20) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004cc20) list_double_cale_preview_pane_t

0xa0e6,	// (0x00046ee3) main_ezdial_pane

0xb165,	// (0x00047f62) main_sp_fs_email_pane_ParamLimits

0x9279,	// (0x00046076) cmail_ddmenu_btn01_pane_ParamLimits

0x9279,	// (0x00046076) cmail_ddmenu_btn01_pane

0x9296,	// (0x00046093) cmail_ddmenu_btn02_pane_ParamLimits

0x9296,	// (0x00046093) cmail_ddmenu_btn02_pane

0x92b4,	// (0x000460b1) cmail_ddmenu_btn03_pane_ParamLimits

0x92b4,	// (0x000460b1) cmail_ddmenu_btn03_pane

0x92e2,	// (0x000460df) main_sp_fs_ctrlbar_pane_ParamLimits

0x92f8,	// (0x000460f5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x93ff,	// (0x000461fc) list_cmail_body_pane_ParamLimits

0xe857,	// (0x0004b654) bg_button_pane_cp12

0xe860,	// (0x0004b65d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe860,	// (0x0004b65d) list_single_cmail_header_detail_pane_g3

0x1dde,	// (0x0003ebdb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1dde,	// (0x0003ebdb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004cba3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004cba3) list_single_cmail_header_detail_pane_t

0x1e36,	// (0x0003ec33) phacti_term_pane_t2_ParamLimits

0x1e36,	// (0x0003ec33) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004cbad) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004cbad) phacti_term_pane_t

0xeab7,	// (0x0004b8b4) aid_size_list_single_double

0x96f8,	// (0x000464f5) popup_ezdial_listscroll_window

0x9719,	// (0x00046516) popup_number_entry_window_cp01

0xa9f6,	// (0x000477f3) bg_popup_call_pane_cp09

0xeac3,	// (0x0004b8c0) ezdial_list_pane

0xeacb,	// (0x0004b8c8) scroll_pane_cp23

0xca5e,	// (0x0004985b) bg_button_pane_cp028_ParamLimits

0xca5e,	// (0x0004985b) bg_button_pane_cp028

0x9727,	// (0x00046524) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9727,	// (0x00046524) cmail_ddmenu_btn01_pane_g1

0x9737,	// (0x00046534) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9737,	// (0x00046534) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004cc25) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004cc25) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0004b8d0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0004b8d0) cmail_ddmenu_btn01_pane_t1

0xc868,	// (0x00049665) bg_button_pane_cp029_ParamLimits

0xc868,	// (0x00049665) bg_button_pane_cp029

0x9743,	// (0x00046540) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9743,	// (0x00046540) cmail_ddmenu_btn02_pane_g1

0x975b,	// (0x00046558) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x975b,	// (0x00046558) cmail_ddmenu_btn02_pane_t1

0xdadd,	// (0x0004a8da) bg_button_pane_cp031_ParamLimits

0xdadd,	// (0x0004a8da) bg_button_pane_cp031

0x9743,	// (0x00046540) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9743,	// (0x00046540) cmail_ddmenu_btn03_pane_g1

0x975b,	// (0x00046558) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x975b,	// (0x00046558) cmail_ddmenu_btn03_pane_t1

0x714e,	// (0x00043f4b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7168,	// (0x00043f65) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7168,	// (0x00043f65) cell_dialer2_keypad_pane_t1_copy1

0x8c56,	// (0x00045a53) ncimui_group_button_pane

0xb165,	// (0x00047f62) main_sp_fs_calendar_pane_ParamLimits

0x941f,	// (0x0004621c) list_single_cmail_header_caption_pane_ParamLimits

0x1e4b,	// (0x0003ec48) aid_recal_txt_sm_pane

0xa0e6,	// (0x00046ee3) mian_recal_day_pane

0x1e85,	// (0x0003ec82) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0004b8e6) list_recal_day_pane

0x2037,	// (0x0003ee34) list_single_recal_day_pane_ParamLimits

0x2037,	// (0x0003ee34) list_single_recal_day_pane

0xeb10,	// (0x0004b90d) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0004b90d) list_single_recal_day_pane_g1

0x2049,	// (0x0003ee46) list_single_recal_day_pane_g2_ParamLimits

0x2049,	// (0x0003ee46) list_single_recal_day_pane_g2

0x2059,	// (0x0003ee56) list_single_recal_day_pane_g3_ParamLimits

0x2059,	// (0x0003ee56) list_single_recal_day_pane_g3

0x2065,	// (0x0003ee62) list_single_recal_day_pane_g4_ParamLimits

0x2065,	// (0x0003ee62) list_single_recal_day_pane_g4

0x207b,	// (0x0003ee78) list_single_recal_day_pane_g5_ParamLimits

0x207b,	// (0x0003ee78) list_single_recal_day_pane_g5

0x2095,	// (0x0003ee92) list_single_recal_day_pane_g6_ParamLimits

0x2095,	// (0x0003ee92) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004cc34) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004cc34) list_single_recal_day_pane_g

0x20a9,	// (0x0003eea6) list_single_recal_day_pane_t1

0x20bb,	// (0x0003eeb8) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004cc3f) list_single_recal_day_pane_t

0x977f,	// (0x0004657c) ncimui_query_button_pane_ParamLimits

0x977f,	// (0x0004657c) ncimui_query_button_pane

0x978f,	// (0x0004658c) ncimui_query_button_pane_t1_ParamLimits

0x978f,	// (0x0004658c) ncimui_query_button_pane_t1

0xeb1c,	// (0x0004b919) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0004b919) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004cc44) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004cc44) ncimui_query_button_pane_t

0x97a2,	// (0x0004659f) query_button_pane_ParamLimits

0x97a2,	// (0x0004659f) query_button_pane

0xa0e6,	// (0x00046ee3) bg_button_pane_cp0028

0xeb2f,	// (0x0004b92c) query_button_pane_t1

0x5574,	// (0x00042371) main_tport_pane_ParamLimits

0x9309,	// (0x00046106) bg_popup_window_pane_cp01_ParamLimits

0x9309,	// (0x00046106) bg_popup_window_pane_cp01

0x9317,	// (0x00046114) heading_pane_cp08_ParamLimits

0x9317,	// (0x00046114) heading_pane_cp08

0x9325,	// (0x00046122) heading_pane_cp07_ParamLimits

0x9325,	// (0x00046122) heading_pane_cp07

0x9394,	// (0x00046191) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004cb90) cell_tport_appsw_pane_g

0x10c6,	// (0x0003dec3) input_candi_list_open_g1

0xae12,	// (0x00047c0f) list_cale_time_pane_g6_ParamLimits

0xae12,	// (0x00047c0f) list_cale_time_pane_g6

0x5ff9,	// (0x00042df6) aid_size_touch_calib_1_ParamLimits

0x5ff9,	// (0x00042df6) aid_size_touch_calib_1

0x6005,	// (0x00042e02) aid_size_touch_calib_2_ParamLimits

0x6005,	// (0x00042e02) aid_size_touch_calib_2

0x6013,	// (0x00042e10) aid_size_touch_calib_3_ParamLimits

0x6013,	// (0x00042e10) aid_size_touch_calib_3

0x6023,	// (0x00042e20) aid_size_touch_calib_4_ParamLimits

0x6023,	// (0x00042e20) aid_size_touch_calib_4

0x6031,	// (0x00042e2e) main_touch_calib_button_group_pane_ParamLimits

0x6031,	// (0x00042e2e) main_touch_calib_button_group_pane

0x603f,	// (0x00042e3c) main_touch_calib_pane_g1_ParamLimits

0x604b,	// (0x00042e48) main_touch_calib_pane_g2_ParamLimits

0x6057,	// (0x00042e54) main_touch_calib_pane_g3_ParamLimits

0x6063,	// (0x00042e60) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004c54e) main_touch_calib_pane_g_ParamLimits

0x606f,	// (0x00042e6c) main_touch_calib_pane_t1_ParamLimits

0x6088,	// (0x00042e85) main_touch_calib_pane_t2_ParamLimits

0x60a1,	// (0x00042e9e) main_touch_calib_pane_t3_ParamLimits

0x60b7,	// (0x00042eb4) main_touch_calib_pane_t4_ParamLimits

0x60cd,	// (0x00042eca) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004c557) main_touch_calib_pane_t_ParamLimits

0xcffc,	// (0x00049df9) list_single_fp_cale_pane_g3_ParamLimits

0xcffc,	// (0x00049df9) list_single_fp_cale_pane_g3

0xb165,	// (0x00047f62) bg_button_pane_cp012_ParamLimits

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp03_ParamLimits

0x7f06,	// (0x00044d03) cell_vitu2_function_top_pane_g1_ParamLimits

0xb165,	// (0x00047f62) bg_vkb2_func_pane_cp04_ParamLimits

0x8bde,	// (0x000459db) main_ncimui_button_group_pane_ParamLimits

0x8bde,	// (0x000459db) main_ncimui_button_group_pane

0x8c44,	// (0x00045a41) main_ncimui_pane_t3_ParamLimits

0x8c44,	// (0x00045a41) main_ncimui_pane_t3

0xe8ed,	// (0x0004b6ea) phacti_button_group_pane

0xeab7,	// (0x0004b8b4) aid_size_list_single_double_ParamLimits

0x96f8,	// (0x000464f5) popup_ezdial_listscroll_window_ParamLimits

0x9719,	// (0x00046516) popup_number_entry_window_cp01_ParamLimits

0x97af,	// (0x000465ac) phacti_button_pane_ParamLimits

0x97af,	// (0x000465ac) phacti_button_pane

0xa0e6,	// (0x00046ee3) bg_button_pane_cp14

0xeb3d,	// (0x0004b93a) phacti_button_pane_t1

0x97c0,	// (0x000465bd) main_touch_calib_button_pane_ParamLimits

0x97c0,	// (0x000465bd) main_touch_calib_button_pane

0xa831,	// (0x0004762e) bg_button_pane_cp18_ParamLimits

0xa831,	// (0x0004762e) bg_button_pane_cp18

0xeb4b,	// (0x0004b948) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0004b948) main_touch_calib_button_pane_t1

0xeb61,	// (0x0004b95e) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0004b95e) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004cc49) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004cc49) main_touch_calib_button_pane_t

0xa0e6,	// (0x00046ee3) cell_ncimui_button_pane

0xa0e6,	// (0x00046ee3) bg_button_pane_cp032

0xeb7f,	// (0x0004b97c) cell_ncimui_button_pane_t1

0x71c4,	// (0x00043fc1) image3_infobar_pane_ParamLimits

0x71c4,	// (0x00043fc1) image3_infobar_pane

0x8fbd,	// (0x00045dba) fs_bigclock_status_pane_ParamLimits

0x8fbd,	// (0x00045dba) fs_bigclock_status_pane

0x8fca,	// (0x00045dc7) main_fs_bigclock_clock_pane_ParamLimits

0x8fca,	// (0x00045dc7) main_fs_bigclock_clock_pane

0x8fe4,	// (0x00045de1) main_fs_bigclock_indi_pane_ParamLimits

0x8fe4,	// (0x00045de1) main_fs_bigclock_indi_pane

0x900c,	// (0x00045e09) main_fs_bigclock_swipe_pane_ParamLimits

0x900c,	// (0x00045e09) main_fs_bigclock_swipe_pane

0xa0e6,	// (0x00046ee3) main_fs_clock_dumped_data

0xe45c,	// (0x0004b259) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45c,	// (0x0004b259) list_single_fs_bigclock_indicator_pane_g1

0xe477,	// (0x0004b274) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe477,	// (0x0004b274) list_single_fs_bigclock_indicator_pane_g2

0xe491,	// (0x0004b28e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe491,	// (0x0004b28e) list_single_fs_bigclock_indicator_pane_g3

0xe4ab,	// (0x0004b2a8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4ab,	// (0x0004b2a8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004ca71) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004ca71) list_single_fs_bigclock_indicator_pane_g

0xe4d6,	// (0x0004b2d3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d6,	// (0x0004b2d3) list_single_fs_bigclock_indicator_pane_t1

0xe4fe,	// (0x0004b2fb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fe,	// (0x0004b2fb) list_single_fs_bigclock_indicator_pane_t2

0xe526,	// (0x0004b323) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe526,	// (0x0004b323) list_single_fs_bigclock_indicator_pane_t3

0xe54e,	// (0x0004b34b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54e,	// (0x0004b34b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004ca7c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004ca7c) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0004b98a) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0004b98a) image3_infobar_fav_pane

0xeb9d,	// (0x0004b99a) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0004b99a) image3_infobar_loc_pane

0xebb1,	// (0x0004b9ae) image3_infobar_time_pane_ParamLimits

0xebb1,	// (0x0004b9ae) image3_infobar_time_pane

0xcc79,	// (0x00049a76) image3_infobar_time_pane_g1

0xebc1,	// (0x0004b9be) image3_infobar_time_pane_t1

0xcc79,	// (0x00049a76) image3_infobar_loc_pane_g1

0xebcf,	// (0x0004b9cc) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004cc4e) image3_infobar_loc_pane_g

0xebd7,	// (0x0004b9d4) image3_infobar_loc_pane_t1

0xcc79,	// (0x00049a76) image3_infobar_fav_pane_g1

0xebe5,	// (0x0004b9e2) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004cc53) image3_infobar_fav_pane_g

0xebed,	// (0x0004b9ea) fs_bigclock_status_battery_pane

0xebf6,	// (0x0004b9f3) fs_bigclock_status_signal_pane

0xebff,	// (0x0004b9fc) fs_bigclock_status_title_pane

0xec08,	// (0x0004ba05) fs_bigclock_status_signal_pane_g1

0xec11,	// (0x0004ba0e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004cc58) fs_bigclock_status_signal_pane_g

0xec19,	// (0x0004ba16) fs_bigclock_status_battery_pane_g1

0xec22,	// (0x0004ba1f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004cc5d) fs_bigclock_status_battery_pane_g

0xec2a,	// (0x0004ba27) fs_bigclock_status_title_pane_t1

0xcc79,	// (0x00049a76) main_fs_bigclock_clock_pane_g1

0xec38,	// (0x0004ba35) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0004ba3e) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0004ba3e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004cc62) main_fs_bigclock_clock_pane_g

0xec49,	// (0x0004ba46) main_fs_bigclock_clock_pane_t1

0x97d0,	// (0x000465cd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004cc6b) main_fs_bigclock_clock_pane_t

0xec57,	// (0x0004ba54) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec57,	// (0x0004ba54) list_single_fs_bigclock_indicator_pane

0xec68,	// (0x0004ba65) list_single_fs_bigclock_pane_ParamLimits

0xec68,	// (0x0004ba65) list_single_fs_bigclock_pane

0xec8e,	// (0x0004ba8b) main_fs_bigclock_indicator_pane_t1

0xec9d,	// (0x0004ba9a) list_single_fs_bigclock_pane_g1

0xeca5,	// (0x0004baa2) list_single_fs_bigclock_pane_t1

0xcc79,	// (0x00049a76) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0004bae5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004cc7c) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0004baed) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0004baed) main_fs_bigclock_swipe_pane_t1

0x4604,	// (0x00041401) call_type_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_btmg_pane

0x1efe,	// (0x0003ecfb) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1efe,	// (0x0003ecfb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004cbef) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004cbef) list_single_cale_mrui_row_pane_g

0x2026,	// (0x0003ee23) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0004b905) list_recal_vselct_arw_up_pane

0x202e,	// (0x0003ee2b) list_recal_vselct_pane

0x9823,	// (0x00046620) btmg_button_pane

0x982f,	// (0x0004662c) main_btmg_pane_g1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp044

0xed0d,	// (0x0004bb0a) btmg_button_pane_t1

0xc854,	// (0x00049651) aid_listscroll_gen

0xb165,	// (0x00047f62) main_cntbar_detail_pane

0xe839,	// (0x0004b636) list_cmail_folder_pane

0xd212,	// (0x0004a00f) sp_fs_scroll_pane_cp03_ParamLimits

0x20cd,	// (0x0003eeca) list_single_fs_dyc_pane_cp01_ParamLimits

0x20cd,	// (0x0003eeca) list_single_fs_dyc_pane_cp01

0xed1b,	// (0x0004bb18) aid_size_cmail_indent

0x20fc,	// (0x0003eef9) list_single_dyc_row_pane_cp01

0x9857,	// (0x00046654) cntbar_detail_list_pane_ParamLimits

0x9857,	// (0x00046654) cntbar_detail_list_pane

0x9891,	// (0x0004668e) main_cntbar_detail_cont_pane_ParamLimits

0x9891,	// (0x0004668e) main_cntbar_detail_cont_pane

0x45f8,	// (0x000413f5) scroll_pane_cp032_ParamLimits

0x45f8,	// (0x000413f5) scroll_pane_cp032

0x989d,	// (0x0004669a) cntbar_detail_list_event_pane_ParamLimits

0x989d,	// (0x0004669a) cntbar_detail_list_event_pane

0x9863,	// (0x00046660) cntbar_detail_list_shct_pane

0xac9d,	// (0x00047a9a) aid_list_gen

0xed24,	// (0x0004bb21) aid_scroll

0xed2d,	// (0x0004bb2a) aid_size_touch_scroll_bar

0x848e,	// (0x0004528b) aid_list_double

0x2105,	// (0x0003ef02) aid_list_single

0x8485,	// (0x00045282) aid_list_single_lg

0x210e,	// (0x0003ef0b) aid_list_z_g_a_sm

0x2116,	// (0x0003ef13) aid_list_z_g_d

0x211e,	// (0x0003ef1b) aid_txt_z_prm

0x212c,	// (0x0003ef29) aid_txt_z_prm_cp01

0x213a,	// (0x0003ef37) aid_txt_z_sec

0x98b1,	// (0x000466ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98b1,	// (0x000466ae) main_cntbar_detail_cont_pane_g1

0x98be,	// (0x000466bb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98be,	// (0x000466bb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004cc81) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004cc81) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0004bb33) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0004bb41) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0004bb4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004cc86) main_cntbar_detail_cont_pane_t

0x98ca,	// (0x000466c7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98ca,	// (0x000466c7) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0004bb5d) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0004bb66) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004cc8d) cntbar_detail_list_shct_pane_g

0x98de,	// (0x000466db) cntbar_detail_list_event_pane_g1_ParamLimits

0x98de,	// (0x000466db) cntbar_detail_list_event_pane_g1

0x98ea,	// (0x000466e7) cntbar_detail_list_event_pane_g2_ParamLimits

0x98ea,	// (0x000466e7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004cc92) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004cc92) cntbar_detail_list_event_pane_g

0x9956,	// (0x00046753) cntbar_detail_list_event_pane_t1_ParamLimits

0x9956,	// (0x00046753) cntbar_detail_list_event_pane_t1

0x996b,	// (0x00046768) cntbar_detail_list_event_pane_t2_ParamLimits

0x996b,	// (0x00046768) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004cc9f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004cc9f) cntbar_detail_list_event_pane_t

0xcc79,	// (0x00049a76) cell_cntbar_detail_list_shct_pane_g1

0xb430,	// (0x0004822d) navi_pane_mv_g3

0xb165,	// (0x00047f62) main_cntbar_detail_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_notif_wgt_pane

0x6e78,	// (0x00043c75) aid_tch_main_mp4_pane_g4

0x70ad,	// (0x00043eaa) popup_slider_window_cp02

0x201c,	// (0x0003ee19) list_recal_day_event_pane

0x9837,	// (0x00046634) cntbar_detail_btn_pane_ParamLimits

0x9837,	// (0x00046634) cntbar_detail_btn_pane

0x9847,	// (0x00046644) cntbar_detail_btn_pane_cp01_ParamLimits

0x9847,	// (0x00046644) cntbar_detail_btn_pane_cp01

0x9863,	// (0x00046660) cntbar_detail_list_shct_pane_ParamLimits

0x986f,	// (0x0004666c) cntbar_detail_pane_g1_ParamLimits

0x986f,	// (0x0004666c) cntbar_detail_pane_g1

0x987b,	// (0x00046678) cntbar_detail_pane_t1_ParamLimits

0x987b,	// (0x00046678) cntbar_detail_pane_t1

0x98f6,	// (0x000466f3) cntbar_detail_list_event_pane_g3_ParamLimits

0x98f6,	// (0x000466f3) cntbar_detail_list_event_pane_g3

0x990e,	// (0x0004670b) cntbar_detail_list_event_pane_g4_ParamLimits

0x990e,	// (0x0004670b) cntbar_detail_list_event_pane_g4

0x9926,	// (0x00046723) cntbar_detail_list_event_pane_g5_ParamLimits

0x9926,	// (0x00046723) cntbar_detail_list_event_pane_g5

0x993e,	// (0x0004673b) cntbar_detail_list_event_pane_g6_ParamLimits

0x993e,	// (0x0004673b) cntbar_detail_list_event_pane_g6

0x9980,	// (0x0004677d) cntbar_detail_list_event_pane_t3_ParamLimits

0x9980,	// (0x0004677d) cntbar_detail_list_event_pane_t3

0x9992,	// (0x0004678f) popup_notif_wgt_window_ParamLimits

0x9992,	// (0x0004678f) popup_notif_wgt_window

0x99a2,	// (0x0004679f) popup_submenu_window_cp01_ParamLimits

0x99a2,	// (0x0004679f) popup_submenu_window_cp01

0xa9f6,	// (0x000477f3) bg_popup_window_pane_cp10

0xed72,	// (0x0004bb6f) listscroll_notif_wgt_pane

0xed84,	// (0x0004bb81) list_notif_wgt_window

0xed8d,	// (0x0004bb8a) scroll_pane_cp033

0x99b4,	// (0x000467b1) list_notif_wgt_row_pane_ParamLimits

0x99b4,	// (0x000467b1) list_notif_wgt_row_pane

0xed96,	// (0x0004bb93) aid_size_list_notif_wgt_del

0xeda3,	// (0x0004bba0) list_notif_wgt_row_pane_g1

0xedaf,	// (0x0004bbac) list_notif_wgt_row_pane_g2

0xedc3,	// (0x0004bbc0) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004cca6) list_notif_wgt_row_pane_g

0xedd0,	// (0x0004bbcd) list_notif_wgt_row_pane_t1

0xede6,	// (0x0004bbe3) list_notif_wgt_row_pane_t2

0xedf8,	// (0x0004bbf5) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004ccad) list_notif_wgt_row_pane_t

0xd932,	// (0x0004a72f) list_recal_day_event_pane_g1

0xee0a,	// (0x0004bc07) list_recal_day_event_pane_t1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp045

0x99c6,	// (0x000467c3) cntbar_detail_btn_pane_t1

0xc868,	// (0x00049665) main_callh_pane_ParamLimits

0xc868,	// (0x00049665) main_callh_pane

0xa0e6,	// (0x00046ee3) main_coverflow0_pane

0xa0e6,	// (0x00046ee3) main_wgtman_pane

0x9024,	// (0x00045e21) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9024,	// (0x00045e21) main_fs_bigclock_unlock_btn_pane

0x938c,	// (0x00046189) bg_button_pane_cp16

0x939c,	// (0x00046199) cell_tport_appsw_pane_g3

0x99d4,	// (0x000467d1) cf0_flow_pane_ParamLimits

0x99d4,	// (0x000467d1) cf0_flow_pane

0xee19,	// (0x0004bc16) listscroll_cf0_pane

0xee24,	// (0x0004bc21) main_cf0_pane_g1

0x99e3,	// (0x000467e0) main_cf0_pane_t1_ParamLimits

0x99e3,	// (0x000467e0) main_cf0_pane_t1

0x99f7,	// (0x000467f4) main_cf0_pane_t2_ParamLimits

0x99f7,	// (0x000467f4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004ccb9) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004ccb9) main_cf0_pane_t

0xee36,	// (0x0004bc33) scroll_pane_cp11

0x9a0b,	// (0x00046808) cf0_flow_pane_g1

0x9a13,	// (0x00046810) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004ccbe) cf0_flow_pane_g

0x9a1b,	// (0x00046818) cf0_flow_pane_t1

0xa0e6,	// (0x00046ee3) main_call6_pane

0xa0e6,	// (0x00046ee3) main_calllock_pane

0x9a29,	// (0x00046826) call6_btn_grp_pane_ParamLimits

0x9a29,	// (0x00046826) call6_btn_grp_pane

0x9a38,	// (0x00046835) call6_pane_g1_ParamLimits

0x9a38,	// (0x00046835) call6_pane_g1

0x9a47,	// (0x00046844) popup_call6_1st_window_ParamLimits

0x9a47,	// (0x00046844) popup_call6_1st_window

0x9a55,	// (0x00046852) popup_call6_2nd_window_ParamLimits

0x9a55,	// (0x00046852) popup_call6_2nd_window

0x9a63,	// (0x00046860) cell_call6_btn_pane_ParamLimits

0x9a63,	// (0x00046860) cell_call6_btn_pane

0xa9f6,	// (0x000477f3) bg_popup_call2_in_pane_cp03

0xee41,	// (0x0004bc3e) popup_call6_1st_window_g1

0xee49,	// (0x0004bc46) popup_call6_1st_window_g2

0xee51,	// (0x0004bc4e) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004ccc3) popup_call6_1st_window_g

0xee59,	// (0x0004bc56) popup_call6_1st_window_t1

0xee68,	// (0x0004bc65) popup_call6_1st_window_t2

0xee78,	// (0x0004bc75) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004ccca) popup_call6_1st_window_t

0xa9f6,	// (0x000477f3) bg_popup_call2_in_pane_cp04

0xee41,	// (0x0004bc3e) popup_call6_2nd_window_g1

0xee49,	// (0x0004bc46) popup_call6_2nd_window_g2

0xee51,	// (0x0004bc4e) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004ccc3) popup_call6_2nd_window_g

0xee59,	// (0x0004bc56) popup_call6_2nd_window_t1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp15

0xee88,	// (0x0004bc85) cell_call6_btn_pane_g1

0xee91,	// (0x0004bc8e) cell_call6_btn_pane_t1

0x9a72,	// (0x0004686f) listscroll_wgtman_pane_ParamLimits

0x9a72,	// (0x0004686f) listscroll_wgtman_pane

0x9a8e,	// (0x0004688b) wgtman_btn_pane_ParamLimits

0x9a8e,	// (0x0004688b) wgtman_btn_pane

0xb237,	// (0x00048034) aid_scroll_copy1

0xeea0,	// (0x0004bc9d) list_wgtman_pane

0x9ac3,	// (0x000468c0) wgtman_btn_pane_g1_ParamLimits

0x9ac3,	// (0x000468c0) wgtman_btn_pane_g1

0x9aeb,	// (0x000468e8) wgtman_btn_pane_t1_ParamLimits

0x9aeb,	// (0x000468e8) wgtman_btn_pane_t1

0xeeaa,	// (0x0004bca7) wgtman_btn_pane_t2_ParamLimits

0xeeaa,	// (0x0004bca7) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004ccd1) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004ccd1) wgtman_btn_pane_t

0x9b22,	// (0x0004691f) listrow_wgtman_pane_ParamLimits

0x9b22,	// (0x0004691f) listrow_wgtman_pane

0x9b3d,	// (0x0004693a) listrow_wgtman_pane_g1

0x9b4a,	// (0x00046947) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004ccd6) listrow_wgtman_pane_g

0x2148,	// (0x0003ef45) listrow_wgtman_pane_t1

0x2160,	// (0x0003ef5d) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004ccdb) listrow_wgtman_pane_t

0x2186,	// (0x0003ef83) wait_bar_pane_cp09

0xeec1,	// (0x0004bcbe) main_calllock_btn_pane

0xeecb,	// (0x0004bcc8) main_calllock_pane_g1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp17

0xeed7,	// (0x0004bcd4) main_calllock_btn_pane_g1

0xeee0,	// (0x0004bcdd) main_calllock_btn_pane_t1

0xa0e6,	// (0x00046ee3) main_dialer3_pane

0xa0e6,	// (0x00046ee3) main_fmrd2_pane

0xcc79,	// (0x00049a76) main_fs_bigclock_unlock_btn_pane_g1

0xeef7,	// (0x0004bcf4) main_fs_bigclock_unlock_btn_pane_t1

0x9b68,	// (0x00046965) area_fmrd2_info_pane_ParamLimits

0x9b68,	// (0x00046965) area_fmrd2_info_pane

0x9b76,	// (0x00046973) area_fmrd2_visual_pane_ParamLimits

0x9b76,	// (0x00046973) area_fmrd2_visual_pane

0x9b84,	// (0x00046981) fmrd2_indi_pane_ParamLimits

0x9b84,	// (0x00046981) fmrd2_indi_pane

0x9b91,	// (0x0004698e) area_fmrd2_visual_pane_g1

0x9b99,	// (0x00046996) area_fmrd2_visual_pane_t1

0x9ba9,	// (0x000469a6) area_fmrd2_visual_pane_t2

0x9bb9,	// (0x000469b6) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004cce5) area_fmrd2_visual_pane_t

0x9bc9,	// (0x000469c6) area_fmrd2_info_pane_g1

0x9bd1,	// (0x000469ce) area_fmrd2_info_pane_t1

0x9be1,	// (0x000469de) area_fmrd2_info_pane_t2

0x9bf1,	// (0x000469ee) area_fmrd2_info_pane_t3

0x9c01,	// (0x000469fe) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004ccec) area_fmrd2_info_pane_t

0x9c0f,	// (0x00046a0c) fmrd2_indi_pane_t1

0x9c1f,	// (0x00046a1c) fmrd2_indi_pane_t2

0x9c2f,	// (0x00046a2c) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004ccf5) fmrd2_indi_pane_t

0xe4ba,	// (0x0004b2b7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4ba,	// (0x0004b2b7) list_single_fs_bigclock_indicator_pane_g5

0xe56a,	// (0x0004b367) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe56a,	// (0x0004b367) list_single_fs_bigclock_indicator_pane_t5

0x951b,	// (0x00046318) aid_cell_bcale_month_pane_ParamLimits

0x951b,	// (0x00046318) aid_cell_bcale_month_pane

0x9539,	// (0x00046336) bcale_month_pane_ParamLimits

0x9539,	// (0x00046336) bcale_month_pane

0x9557,	// (0x00046354) bcale_preview_pane_ParamLimits

0x9557,	// (0x00046354) bcale_preview_pane

0xeca5,	// (0x0004baa2) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0004bac1) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0004bac1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004cc77) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004cc77) list_single_fs_bigclock_pane_t

0xeeef,	// (0x0004bcec) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004cce0) main_fs_bigclock_unlock_btn_pane_g

0x9c3d,	// (0x00046a3a) aid_dia3_key_size_ParamLimits

0x9c3d,	// (0x00046a3a) aid_dia3_key_size

0x9c49,	// (0x00046a46) aid_dia3_listrow_size_ParamLimits

0x9c49,	// (0x00046a46) aid_dia3_listrow_size

0x9c59,	// (0x00046a56) dia3_keypad_fun_pane_ParamLimits

0x9c59,	// (0x00046a56) dia3_keypad_fun_pane

0x9c6b,	// (0x00046a68) dia3_keypad_num_pane_ParamLimits

0x9c6b,	// (0x00046a68) dia3_keypad_num_pane

0x9c7d,	// (0x00046a7a) dia3_listscroll_pane_ParamLimits

0x9c7d,	// (0x00046a7a) dia3_listscroll_pane

0x9c8b,	// (0x00046a88) dia3_numentry_pane_ParamLimits

0x9c8b,	// (0x00046a88) dia3_numentry_pane

0xef05,	// (0x0004bd02) dia3_list_pane

0xef10,	// (0x0004bd0d) scroll_pane_cp12

0xa0e6,	// (0x00046ee3) bg_dia3_numentry_pane

0x9c99,	// (0x00046a96) dia3_numentry_pane_t1

0x9ca8,	// (0x00046aa5) cell_dia3_key_num_pane

0x9cb0,	// (0x00046aad) cell_dia3_key0_fun_pane_ParamLimits

0x9cb0,	// (0x00046aad) cell_dia3_key0_fun_pane

0x9cbd,	// (0x00046aba) cell_dia3_key1_fun_pane_ParamLimits

0x9cbd,	// (0x00046aba) cell_dia3_key1_fun_pane

0x9cca,	// (0x00046ac7) dia3_listrow_pane

0xe1c9,	// (0x0004afc6) bg_dia3_numentry_pane_g1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp21

0xef1b,	// (0x0004bd18) cell_dia3_key_num_pane_t1

0xef29,	// (0x0004bd26) cell_dia3_key_num_pane_t2

0xef38,	// (0x0004bd35) cell_dia3_key_num_pane_t3

0xef47,	// (0x0004bd44) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004ccfc) cell_dia3_key_num_pane_t

0xa0e6,	// (0x00046ee3) bg_button_pane_cp19

0x9cd7,	// (0x00046ad4) cell_dia3_key0_fun_pane_g1

0xa0e6,	// (0x00046ee3) bg_button_pane_cp20

0x9cdf,	// (0x00046adc) cell_dia3_key1_fun_pane_g1

0x9ce7,	// (0x00046ae4) area_left_week_number_pane

0x9cfa,	// (0x00046af7) area_top_day_name_pane

0x9d08,	// (0x00046b05) frame_month_view_pane

0xef56,	// (0x0004bd53) grid_month_view_pane

0x9d1d,	// (0x00046b1a) cell_top_day_name_pane_ParamLimits

0x9d1d,	// (0x00046b1a) cell_top_day_name_pane

0x9d37,	// (0x00046b34) cell_area_left_week_number_pane_ParamLimits

0x9d37,	// (0x00046b34) cell_area_left_week_number_pane

0x9d5a,	// (0x00046b57) cell_month_view_pane_ParamLimits

0x9d5a,	// (0x00046b57) cell_month_view_pane

0xef64,	// (0x0004bd61) frm_month_g1

0x9d86,	// (0x00046b83) frm_month_g2

0x9d97,	// (0x00046b94) frm_month_g3

0x9da8,	// (0x00046ba5) frm_month_g4

0x9db9,	// (0x00046bb6) frm_month_g5

0x9dcc,	// (0x00046bc9) frm_month_g6

0x9ddf,	// (0x00046bdc) frm_month_g7

0xef71,	// (0x0004bd6e) frm_month_g8

0x9df2,	// (0x00046bef) frm_month_g9

0x9dff,	// (0x00046bfc) frm_month_g10

0x9e0c,	// (0x00046c09) frm_month_g11

0x9e19,	// (0x00046c16) frm_month_g12

0x9e26,	// (0x00046c23) frm_month_g13

0x9e33,	// (0x00046c30) frm_month_g14

0x9e42,	// (0x00046c3f) frm_month_g15

0x9e51,	// (0x00046c4e) frm_month_g16

0x000f,

0xff08,	// (0x0004cd05) frm_month_g

0xef7e,	// (0x0004bd7b) cell_top_day_name_pane_t1

0x9e60,	// (0x00046c5d) cell_area_left_week_number_pane_g1

0x9e6f,	// (0x00046c6c) cell_area_left_week_number_pane_t1

0xcedc,	// (0x00049cd9) cell_month_view_pane_g1

0x9e85,	// (0x00046c82) cell_month_view_pane_t1

0xa0e6,	// (0x00046ee3) main_fps_pane

0xe73f,	// (0x0004b53c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe73f,	// (0x0004b53c) cmail_ddmenu_btn02_pane_cp1

0xe75b,	// (0x0004b558) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe75b,	// (0x0004b558) cmail_ddmenu_btn02_pane_cp2

0x974f,	// (0x0004654c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x974f,	// (0x0004654c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004cc2a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004cc2a) cmail_ddmenu_btn02_pane_g

0x976d,	// (0x0004656a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x976d,	// (0x0004656a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004cc2f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004cc2f) cmail_ddmenu_btn02_pane_t

0x9e9b,	// (0x00046c98) fps_text_pane_ParamLimits

0x9e9b,	// (0x00046c98) fps_text_pane

0x9ea8,	// (0x00046ca5) main_fps_pane_g1_ParamLimits

0x9ea8,	// (0x00046ca5) main_fps_pane_g1

0x9eb6,	// (0x00046cb3) wait_bar_pane_cp010_ParamLimits

0x9eb6,	// (0x00046cb3) wait_bar_pane_cp010

0x9ec2,	// (0x00046cbf) fps_text_pane_t1_ParamLimits

0x9ec2,	// (0x00046cbf) fps_text_pane_t1

0x748f,	// (0x0004428c) cam4_image_uncrop_pane_g1

0x7498,	// (0x00044295) cam4_image_uncrop_pane_g2

0x74a1,	// (0x0004429e) cam4_image_uncrop_pane_g3

0x74aa,	// (0x000442a7) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004c6eb) cam4_image_uncrop_pane_g

0x9cca,	// (0x00046ac7) dia3_listrow_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_phob2_pane

0x936e,	// (0x0004616b) cell_tport_appsw_pane_cp02_ParamLimits

0x936e,	// (0x0004616b) cell_tport_appsw_pane_cp02

0x937d,	// (0x0004617a) cell_tport_appsw_pane_cp03_ParamLimits

0x937d,	// (0x0004617a) cell_tport_appsw_pane_cp03

0xa0e6,	// (0x00046ee3) phob2_contact_card_pane

0xa0e6,	// (0x00046ee3) phob2_listscroll_pane

0xef91,	// (0x0004bd8e) phob2_list_pane

0xef99,	// (0x0004bd96) scroll_pane_cp034

0x9edb,	// (0x00046cd8) phob2_cc_data_pane_ParamLimits

0x9edb,	// (0x00046cd8) phob2_cc_data_pane

0x9ef5,	// (0x00046cf2) phob2_cc_listscroll_pane_ParamLimits

0x9ef5,	// (0x00046cf2) phob2_cc_listscroll_pane

0x9f0f,	// (0x00046d0c) list_double_large_graphic_phob2_pane_ParamLimits

0x9f0f,	// (0x00046d0c) list_double_large_graphic_phob2_pane

0x9f2d,	// (0x00046d2a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f2d,	// (0x00046d2a) list_double_large_graphic_phob2_pane_g1

0x2198,	// (0x0003ef95) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2198,	// (0x0003ef95) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004cd26) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004cd26) list_double_large_graphic_phob2_pane_g

0x21a4,	// (0x0003efa1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x21a4,	// (0x0003efa1) list_double_large_graphic_phob2_pane_t1

0x21b9,	// (0x0003efb6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x21b9,	// (0x0003efb6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004cd2b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004cd2b) list_double_large_graphic_phob2_pane_t

0xa0e6,	// (0x00046ee3) list_highlight_pane_cp024

0x9f43,	// (0x00046d40) phob2_cc_button_pane

0x9f4b,	// (0x00046d48) phob2_cc_data_pane_g1_ParamLimits

0x9f4b,	// (0x00046d48) phob2_cc_data_pane_g1

0x9f57,	// (0x00046d54) phob2_cc_data_pane_g2_ParamLimits

0x9f57,	// (0x00046d54) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004cd30) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004cd30) phob2_cc_data_pane_g

0x9f63,	// (0x00046d60) phob2_cc_data_pane_t1_ParamLimits

0x9f63,	// (0x00046d60) phob2_cc_data_pane_t1

0x9f75,	// (0x00046d72) phob2_cc_data_pane_t2_ParamLimits

0x9f75,	// (0x00046d72) phob2_cc_data_pane_t2

0x9f87,	// (0x00046d84) phob2_cc_data_pane_t3_ParamLimits

0x9f87,	// (0x00046d84) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004cd35) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004cd35) phob2_cc_data_pane_t

0xefa1,	// (0x0004bd9e) phob2_cc_list_pane_ParamLimits

0xefa1,	// (0x0004bd9e) phob2_cc_list_pane

0xdad1,	// (0x0004a8ce) scroll_pane_cp035_ParamLimits

0xdad1,	// (0x0004a8ce) scroll_pane_cp035

0xb165,	// (0x00047f62) bg_button_pane_cp033

0xefad,	// (0x0004bdaa) phob2_cc_button_pane_g1

0xefb9,	// (0x0004bdb6) phob2_cc_button_pane_t1

0xefce,	// (0x0004bdcb) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004cd3c) phob2_cc_button_pane_t

0x9f99,	// (0x00046d96) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f99,	// (0x00046d96) list_double_large_graphic_phob2_cc_pane

0x9fc0,	// (0x00046dbd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9fc0,	// (0x00046dbd) list_double_large_graphic_phob2_cc_pane_g1

0x21cb,	// (0x0003efc8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x21cb,	// (0x0003efc8) list_double_large_graphic_phob2_cc_pane_g2

0x21d7,	// (0x0003efd4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x21d7,	// (0x0003efd4) list_double_large_graphic_phob2_cc_pane_g3

0x21e3,	// (0x0003efe0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x21e3,	// (0x0003efe0) list_double_large_graphic_phob2_cc_pane_g4

0x21ef,	// (0x0003efec) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x21ef,	// (0x0003efec) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004cd41) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004cd41) list_double_large_graphic_phob2_cc_pane_g

0x21fb,	// (0x0003eff8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x21fb,	// (0x0003eff8) list_double_large_graphic_phob2_cc_pane_t1

0x2224,	// (0x0003f021) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2224,	// (0x0003f021) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004cd4c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004cd4c) list_double_large_graphic_phob2_cc_pane_t

0xefe0,	// (0x0004bddd) list_highlight_pane_cp025_ParamLimits

0xefe0,	// (0x0004bddd) list_highlight_pane_cp025

0xb165,	// (0x00047f62) bg_button_pane_cp033_ParamLimits

0xefad,	// (0x0004bdaa) phob2_cc_button_pane_g1_ParamLimits

0xefb9,	// (0x0004bdb6) phob2_cc_button_pane_t1_ParamLimits

0xefce,	// (0x0004bdcb) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004cd3c) phob2_cc_button_pane_t_ParamLimits

0x2524,	// (0x0003f321) popup_wgtman_window

0xd820,	// (0x0004a61d) scroll_pane_cp038

0x9aab,	// (0x000468a8) wgtman_btn_pane_cp_01_ParamLimits

0x9aab,	// (0x000468a8) wgtman_btn_pane_cp_01

0xefee,	// (0x0004bdeb) wgtman_content_pane

0xeff7,	// (0x0004bdf4) wgtman_heading_pane

0xa0e6,	// (0x00046ee3) bg_heading_pane_cp02

0xf000,	// (0x0004bdfd) wgtman_heading_pane_g1

0xf008,	// (0x0004be05) wgtman_heading_pane_t1

0xf016,	// (0x0004be13) scroll_pane_cp036

0xf01e,	// (0x0004be1b) wgtman_list_pane

0xf026,	// (0x0004be23) wgtman_list_pane_t1_ParamLimits

0xf026,	// (0x0004be23) wgtman_list_pane_t1

0x73ee,	// (0x000441eb) cam4_grid_pane

0x139f,	// (0x0003e19c) bg_button_pane_cp015_ParamLimits

0x80b3,	// (0x00044eb0) bg_button_pane_cp016_ParamLimits

0x80c6,	// (0x00044ec3) bg_button_pane_cp017_ParamLimits

0x13e3,	// (0x0003e1e0) popup_vitu2_query_window_g3_ParamLimits

0x13e3,	// (0x0003e1e0) popup_vitu2_query_window_g3

0x145c,	// (0x0003e259) popup_vitu2_query_window_t6_ParamLimits

0x145c,	// (0x0003e259) popup_vitu2_query_window_t6

0x1487,	// (0x0003e284) popup_vitu2_query_window_t7_ParamLimits

0x1487,	// (0x0003e284) popup_vitu2_query_window_t7

0xe7da,	// (0x0004b5d7) cam4_grid_pane_g1

0xe7e3,	// (0x0004b5e0) cam4_grid_pane_g2

0xf040,	// (0x0004be3d) cam4_grid_pane_g3

0xf049,	// (0x0004be46) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004cd51) cam4_grid_pane_g

0x337c,	// (0x00040179) aid_placing_vt_slider_lsc_ParamLimits

0x36c8,	// (0x000404c5) vidtel_button_pane_ParamLimits

0x36c8,	// (0x000404c5) vidtel_button_pane

0xf054,	// (0x0004be51) bg_button_pane_cp034

0x9fd1,	// (0x00046dce) vidtel_button_pane_g1

0xf05e,	// (0x0004be5b) vidtel_button_pane_t1

0xd922,	// (0x0004a71f) aid_size_vtel_slider_touch

0xdad1,	// (0x0004a8ce) scroll_pane_cp039

0xe207,	// (0x0004b004) ncim_query_button_pane_cp01_ParamLimits

0xe226,	// (0x0004b023) ncimui_query_pane_g1_ParamLimits

0xb165,	// (0x00047f62) input_focus_pane_cp012_ParamLimits

0xe24b,	// (0x0004b048) ncim_query_entry_pane_t1_ParamLimits

0xdad1,	// (0x0004a8ce) scroll_pane_cp039_ParamLimits

0xb31b,	// (0x00048118) navi_pane_bcale_mc_g1

0xb323,	// (0x00048120) navi_pane_bcale_mc_t1

0xe7a4,	// (0x0004b5a1) main_sp_fs_email_pane_g1

0xe7b0,	// (0x0004b5ad) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004cae2) main_sp_fs_email_pane_g

0xea09,	// (0x0004b806) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea09,	// (0x0004b806) list_single_cale_mrui_row_pane_g3

0x208b,	// (0x0003ee88) list_single_recal_day_pane_g5_event_pane

0x20a1,	// (0x0003ee9e) list_single_recal_day_pane_g7

0xf06c,	// (0x0004be69) list_recal_day_event_pane_cp01

0xf075,	// (0x0004be72) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0004be7a) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0004be82) list_recal_vselct_pane_cp01

0xd932,	// (0x0004a72f) list_recal_day_event_pane_cp01_g1

0x224d,	// (0x0003f04a) list_recal_day_event_pane_cp01_t1

0x20a9,	// (0x0003eea6) list_single_recal_day_pane_t1_ParamLimits

0x20bb,	// (0x0003eeb8) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004cc3f) list_single_recal_day_pane_t_ParamLimits

0xa76c,	// (0x00047569) bg_notes_pane_ParamLimits

0xa80f,	// (0x0004760c) list_notes_pane_ParamLimits

0x2882,	// (0x0003f67f) scroll_pane_cp06_ParamLimits

0xa831,	// (0x0004762e) main_notes_pane_ParamLimits

0xa0e6,	// (0x00046ee3) main_welc_pane

0x9fd9,	// (0x00046dd6) main_welc_body_pane_ParamLimits

0x9fd9,	// (0x00046dd6) main_welc_body_pane

0x9ff3,	// (0x00046df0) main_welc_opti_pane_ParamLimits

0x9ff3,	// (0x00046df0) main_welc_opti_pane

0xa026,	// (0x00046e23) main_welc_pane_t1_ParamLimits

0xa026,	// (0x00046e23) main_welc_pane_t1

0xa040,	// (0x00046e3d) main_welc_body_row_pane_ParamLimits

0xa040,	// (0x00046e3d) main_welc_body_row_pane

0xdadd,	// (0x0004a8da) main_welc_opti_row_pane_ParamLimits

0xdadd,	// (0x0004a8da) main_welc_opti_row_pane

0xf08f,	// (0x0004be8c) main_welc_opti_row_pane_g1

0xa065,	// (0x00046e62) main_welc_opti_row_pane_t1

0xf097,	// (0x0004be94) main_welc_body_row_pane_t1

0xed7c,	// (0x0004bb79) popup_notif_wgt_heading_pane

0xed96,	// (0x0004bb93) aid_size_list_notif_wgt_del_ParamLimits

0xeda3,	// (0x0004bba0) list_notif_wgt_row_pane_g1_ParamLimits

0xedaf,	// (0x0004bbac) list_notif_wgt_row_pane_g2_ParamLimits

0xedc3,	// (0x0004bbc0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004cca6) list_notif_wgt_row_pane_g_ParamLimits

0xedd0,	// (0x0004bbcd) list_notif_wgt_row_pane_t1_ParamLimits

0xede6,	// (0x0004bbe3) list_notif_wgt_row_pane_t2_ParamLimits

0xedf8,	// (0x0004bbf5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004ccad) list_notif_wgt_row_pane_t_ParamLimits

0x9b3d,	// (0x0004693a) listrow_wgtman_pane_g1_ParamLimits

0x9b4a,	// (0x00046947) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004ccd6) listrow_wgtman_pane_g_ParamLimits

0x2148,	// (0x0003ef45) listrow_wgtman_pane_t1_ParamLimits

0x2160,	// (0x0003ef5d) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004ccdb) listrow_wgtman_pane_t_ParamLimits

0x2186,	// (0x0003ef83) wait_bar_pane_cp09_ParamLimits

0xa0e6,	// (0x00046ee3) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004bea3) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004beab) popup_notif_wgt_heading_pane_t1

0xa0e6,	// (0x00046ee3) main_vids_pane

0xa0e6,	// (0x00046ee3) vids_listscroll_pane

0xa074,	// (0x00046e71) scroll_pane_cp040

0xa0e6,	// (0x00046ee3) vids_list_pane

0xa07f,	// (0x00046e7c) vids_list_double_pane_ParamLimits

0xa07f,	// (0x00046e7c) vids_list_double_pane

0xa099,	// (0x00046e96) vids_list_double_pane_g1

0xa0a2,	// (0x00046e9f) vids_list_double_pane_t1

0xa0b2,	// (0x00046eaf) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004cd5f) vids_list_double_pane_t

0xb165,	// (0x00047f62) main_ncimui_pane_ParamLimits

0x8bf6,	// (0x000459f3) main_ncimui_pane_g1_ParamLimits

0x8c02,	// (0x000459ff) main_ncimui_pane_g2_ParamLimits

0x8c02,	// (0x000459ff) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004c9e7) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004c9e7) main_ncimui_pane_g

0xa00c,	// (0x00046e09) main_welc_pane_g1_ParamLimits

0xa00c,	// (0x00046e09) main_welc_pane_g1

0xa018,	// (0x00046e15) main_welc_pane_g2_ParamLimits

0xa018,	// (0x00046e15) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004cd5a) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004cd5a) main_welc_pane_g

0xa76c,	// (0x00047569) listscroll_mce_pane_ParamLimits

0xb470,	// (0x0004826d) wait_bar_pane_cp10

0xc85c,	// (0x00049659) main_cale_day_pane_ParamLimits

0xc85c,	// (0x00049659) main_cale_week_pane_ParamLimits

0xa76c,	// (0x00047569) main_messa_pane_ParamLimits

0x684e,	// (0x0004364b) main_clock2_btn_pane_ParamLimits

0x684e,	// (0x0004364b) main_clock2_btn_pane

0xd084,	// (0x00049e81) main_clock2_btn_pane_cp01_ParamLimits

0xd084,	// (0x00049e81) main_clock2_btn_pane_cp01

0xe9da,	// (0x0004b7d7) list_cale_mrui_pane_ParamLimits

0xee2e,	// (0x0004bc2b) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004ccb4) main_cf0_pane_g

0x9ce7,	// (0x00046ae4) area_left_week_number_pane_ParamLimits

0x9cfa,	// (0x00046af7) area_top_day_name_pane_ParamLimits

0x9d08,	// (0x00046b05) frame_month_view_pane_ParamLimits

0xef56,	// (0x0004bd53) grid_month_view_pane_ParamLimits

0xef64,	// (0x0004bd61) frm_month_g1_ParamLimits

0x9d86,	// (0x00046b83) frm_month_g2_ParamLimits

0x9d97,	// (0x00046b94) frm_month_g3_ParamLimits

0x9da8,	// (0x00046ba5) frm_month_g4_ParamLimits

0x9db9,	// (0x00046bb6) frm_month_g5_ParamLimits

0x9dcc,	// (0x00046bc9) frm_month_g6_ParamLimits

0x9ddf,	// (0x00046bdc) frm_month_g7_ParamLimits

0xef71,	// (0x0004bd6e) frm_month_g8_ParamLimits

0x9df2,	// (0x00046bef) frm_month_g9_ParamLimits

0x9dff,	// (0x00046bfc) frm_month_g10_ParamLimits

0x9e0c,	// (0x00046c09) frm_month_g11_ParamLimits

0x9e19,	// (0x00046c16) frm_month_g12_ParamLimits

0x9e26,	// (0x00046c23) frm_month_g13_ParamLimits

0x9e33,	// (0x00046c30) frm_month_g14_ParamLimits

0x9e42,	// (0x00046c3f) frm_month_g15_ParamLimits

0x9e51,	// (0x00046c4e) frm_month_g16_ParamLimits

0xff08,	// (0x0004cd05) frm_month_g_ParamLimits

0xef7e,	// (0x0004bd7b) cell_top_day_name_pane_t1_ParamLimits

0x9e60,	// (0x00046c5d) cell_area_left_week_number_pane_g1_ParamLimits

0x9e6f,	// (0x00046c6c) cell_area_left_week_number_pane_t1_ParamLimits

0xcedc,	// (0x00049cd9) cell_month_view_pane_g1_ParamLimits

0x9e85,	// (0x00046c82) cell_month_view_pane_t1_ParamLimits

0xa764,	// (0x00047561) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004beb9) main_clock2_btn_pane_t1

0xb165,	// (0x00047f62) listscroll_cmail_pane_ParamLimits

0xe7a4,	// (0x0004b5a1) main_sp_fs_email_pane_g1_ParamLimits

0xe7b0,	// (0x0004b5ad) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004cae2) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0004b8e6) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0004b8f7) mian_recal_day_pane_t1

0x1a43,	// (0x0003e840) list_single_dyc_row_text_pane_t4_ParamLimits

0x1a43,	// (0x0003e840) list_single_dyc_row_text_pane_t4

0x1a7a,	// (0x0003e877) list_single_dyc_row_text_pane_t5_ParamLimits

0x1a7a,	// (0x0003e877) list_single_dyc_row_text_pane_t5

0x1af0,	// (0x0003e8ed) list_single_dyc_row_text_pane_t6_ParamLimits

0x1af0,	// (0x0003e8ed) list_single_dyc_row_text_pane_t6

0x452a,	// (0x00041327) aid_mgn_list_cale_time_pane

0xb165,	// (0x00047f62) main_gallery2_pane_ParamLimits

0xd09a,	// (0x00049e97) main_clock2_pane_cp01_t1

0xd0aa,	// (0x00049ea7) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004c5c1) main_clock2_pane_cp01_t

0x2cc4,	// (0x0003fac1) cale_week_scroll_pane_g16_ParamLimits

0x2cc4,	// (0x0003fac1) cale_week_scroll_pane_g16

0xa9f6,	// (0x000477f3) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
