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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004d21c };

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
0x0f91,	// (0x0004e1ad) Screen

0x0f9d,	// (0x0004e1b9) application_window

0x0fe9,	// (0x0004e205) area_bottom_pane_ParamLimits

0x0fe9,	// (0x0004e205) area_bottom_pane

0x1022,	// (0x0004e23e) area_top_pane_ParamLimits

0x1022,	// (0x0004e23e) area_top_pane

0x97b3,	// (0x000569cf) call_video_uplink_pane_ParamLimits

0x97b3,	// (0x000569cf) call_video_uplink_pane

0x10b0,	// (0x0004e2cc) main_pane_ParamLimits

0x10b0,	// (0x0004e2cc) main_pane

0xc85e,	// (0x00059a7a) context_pane

0x44cd,	// (0x000516e9) navi_pane

0x44ff,	// (0x0005171b) popup_cale_events_window_ParamLimits

0x44ff,	// (0x0005171b) popup_cale_events_window

0xc871,	// (0x00059a8d) popup_mup_playback_window

0x4517,	// (0x00051733) signal_pane

0xa7c1,	// (0x000579dd) main_browser_pane

0xa9b6,	// (0x00057bd2) main_burst_pane

0x4235,	// (0x00051451) main_calc_pane

0xc844,	// (0x00059a60) main_cale_day_pane

0x16c0,	// (0x0004e8dc) main_cale_month_pane

0xc844,	// (0x00059a60) main_cale_week_pane

0xa9b6,	// (0x00057bd2) main_call_pane

0x9be4,	// (0x00056e00) main_call_poc_pane

0xa9b6,	// (0x00057bd2) main_camera_pane

0xa9b6,	// (0x00057bd2) main_chi_dic_pane

0xb18d,	// (0x000583a9) main_clock_pane

0x9be4,	// (0x00056e00) main_fmradio_pane

0xa9b6,	// (0x00057bd2) main_graph_messa_pane

0x9be4,	// (0x00056e00) main_help_pane

0xa7c1,	// (0x000579dd) main_im_pane

0xa6f0,	// (0x0005790c) main_image_pane_ParamLimits

0xa6f0,	// (0x0005790c) main_image_pane

0x9be4,	// (0x00056e00) main_location2_pane

0xa9b6,	// (0x00057bd2) main_location_pane

0xa6f0,	// (0x0005790c) main_messa_pane

0x9be4,	// (0x00056e00) main_mp2_pane

0xa9b6,	// (0x00057bd2) main_mp_pane

0x9be4,	// (0x00056e00) main_msg_pane

0x9be4,	// (0x00056e00) main_mup_eq_pane

0x9be4,	// (0x00056e00) main_mup_pane

0xa7c1,	// (0x000579dd) main_notes_pane

0x9be4,	// (0x00056e00) main_pec_pane

0x9be4,	// (0x00056e00) main_phob_pane

0x9be4,	// (0x00056e00) main_pinb_pane

0x9be4,	// (0x00056e00) main_postcard_pane

0x9be4,	// (0x00056e00) main_qdial_pane

0xa9b6,	// (0x00057bd2) main_skin_pane

0x9be4,	// (0x00056e00) main_smil2_pane

0xa9b6,	// (0x00057bd2) main_smil_pane

0xa9b6,	// (0x00057bd2) main_video_pane

0xa9b6,	// (0x00057bd2) main_video_tele_pane

0xa6f0,	// (0x0005790c) main_viewer_pane_ParamLimits

0xa6f0,	// (0x0005790c) main_viewer_pane

0xa9b6,	// (0x00057bd2) main_vorec_pane

0x4289,	// (0x000514a5) popup_blid_sat_info_window_ParamLimits

0x4289,	// (0x000514a5) popup_blid_sat_info_window

0x42e1,	// (0x000514fd) popup_dyc_status_message_window_ParamLimits

0x42e1,	// (0x000514fd) popup_dyc_status_message_window

0x42f9,	// (0x00051515) popup_grid_large_graphic_window_ParamLimits

0x42f9,	// (0x00051515) popup_grid_large_graphic_window

0x43a9,	// (0x000515c5) popup_loc_request_window_ParamLimits

0x43a9,	// (0x000515c5) popup_loc_request_window

0x44a5,	// (0x000516c1) popup_wml_address_window_ParamLimits

0x44a5,	// (0x000516c1) popup_wml_address_window

0x406f,	// (0x0005128b) call_muted_g1

0x3d23,	// (0x00050f3f) popup_call_audio_conf_window_ParamLimits

0x3d23,	// (0x00050f3f) popup_call_audio_conf_window

0x4083,	// (0x0005129f) popup_call_audio_first_window_ParamLimits

0x4083,	// (0x0005129f) popup_call_audio_first_window

0x40f9,	// (0x00051315) popup_call_audio_in_window_ParamLimits

0x40f9,	// (0x00051315) popup_call_audio_in_window

0x4135,	// (0x00051351) popup_call_audio_out_window_ParamLimits

0x4135,	// (0x00051351) popup_call_audio_out_window

0x416f,	// (0x0005138b) popup_call_audio_second_window_ParamLimits

0x416f,	// (0x0005138b) popup_call_audio_second_window

0x41c5,	// (0x000513e1) popup_call_audio_wait_window_ParamLimits

0x41c5,	// (0x000513e1) popup_call_audio_wait_window

0x41fa,	// (0x00051416) popup_number_entry_window_ParamLimits

0x41fa,	// (0x00051416) popup_number_entry_window

0x97d1,	// (0x000569ed) bg_popup_call_pane_cp05_ParamLimits

0x97d1,	// (0x000569ed) bg_popup_call_pane_cp05

0x97f1,	// (0x00056a0d) popup_number_entry_window_t1

0x9804,	// (0x00056a20) popup_number_entry_window_t2

0x9816,	// (0x00056a32) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005c2e6) popup_number_entry_window_t

0x9828,	// (0x00056a44) text_title_cp2

0x983b,	// (0x00056a57) bg_popup_call_pane_cp_ParamLimits

0x983b,	// (0x00056a57) bg_popup_call_pane_cp

0x9849,	// (0x00056a65) call_thumbnail_pane

0x9851,	// (0x00056a6d) popup_call_audio_in_window_g1_ParamLimits

0x9851,	// (0x00056a6d) popup_call_audio_in_window_g1

0x985d,	// (0x00056a79) popup_call_audio_in_window_g2_ParamLimits

0x985d,	// (0x00056a79) popup_call_audio_in_window_g2

0x9869,	// (0x00056a85) popup_call_audio_in_window_g3_ParamLimits

0x9869,	// (0x00056a85) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005c2ef) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005c2ef) popup_call_audio_in_window_g

0x9875,	// (0x00056a91) popup_call_audio_in_window_t1_ParamLimits

0x9875,	// (0x00056a91) popup_call_audio_in_window_t1

0x9891,	// (0x00056aad) popup_call_audio_in_window_t2_ParamLimits

0x9891,	// (0x00056aad) popup_call_audio_in_window_t2

0x98ad,	// (0x00056ac9) popup_call_audio_in_window_t3_ParamLimits

0x98ad,	// (0x00056ac9) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005c2f6) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005c2f6) popup_call_audio_in_window_t

0x983b,	// (0x00056a57) bg_popup_call_pane_cp01_ParamLimits

0x983b,	// (0x00056a57) bg_popup_call_pane_cp01

0x9849,	// (0x00056a65) call_thumbnail_pane_cp02

0x98c0,	// (0x00056adc) call_type_pane_cp022

0x98c8,	// (0x00056ae4) popup_call_audio_out_window_g1_ParamLimits

0x98c8,	// (0x00056ae4) popup_call_audio_out_window_g1

0x98da,	// (0x00056af6) popup_call_audio_out_window_g2_ParamLimits

0x98da,	// (0x00056af6) popup_call_audio_out_window_g2

0x98e6,	// (0x00056b02) popup_call_audio_out_window_g3_ParamLimits

0x98e6,	// (0x00056b02) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005c2fd) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005c2fd) popup_call_audio_out_window_g

0x98f8,	// (0x00056b14) popup_call_audio_out_window_t1_ParamLimits

0x98f8,	// (0x00056b14) popup_call_audio_out_window_t1

0x9910,	// (0x00056b2c) popup_call_audio_out_window_t2_ParamLimits

0x9910,	// (0x00056b2c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005c304) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005c304) popup_call_audio_out_window_t

0x9925,	// (0x00056b41) bg_popup_call_pane_ParamLimits

0x9925,	// (0x00056b41) bg_popup_call_pane

0x126d,	// (0x0004e489) call_thumbnail_pane_cp_ParamLimits

0x126d,	// (0x0004e489) call_thumbnail_pane_cp

0x99a9,	// (0x00056bc5) call_type_pane_cp01_ParamLimits

0x99a9,	// (0x00056bc5) call_type_pane_cp01

0x99ed,	// (0x00056c09) popup_call_audio_first_window_g1_ParamLimits

0x99ed,	// (0x00056c09) popup_call_audio_first_window_g1

0x9a39,	// (0x00056c55) popup_call_audio_first_window_g2_ParamLimits

0x9a39,	// (0x00056c55) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005c309) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005c309) popup_call_audio_first_window_g

0x9a7d,	// (0x00056c99) popup_call_audio_first_window_t1_ParamLimits

0x9a7d,	// (0x00056c99) popup_call_audio_first_window_t1

0x9b29,	// (0x00056d45) popup_call_audio_first_window_t4_ParamLimits

0x9b29,	// (0x00056d45) popup_call_audio_first_window_t4

0x9bb5,	// (0x00056dd1) popup_call_audio_first_window_t5_ParamLimits

0x9bb5,	// (0x00056dd1) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005c30e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005c30e) popup_call_audio_first_window_t

0x9be4,	// (0x00056e00) bg_popup_call_pane_cp02

0x9bee,	// (0x00056e0a) call_type_pane_cp023

0x9bf6,	// (0x00056e12) popup_call_audio_wait_window_g1

0x9bfe,	// (0x00056e1a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005c315) popup_call_audio_wait_window_g

0x9c06,	// (0x00056e22) popup_call_audio_wait_window_t3

0x9c14,	// (0x00056e30) bg_popup_call_pane_cp03_ParamLimits

0x9c14,	// (0x00056e30) bg_popup_call_pane_cp03

0x9c74,	// (0x00056e90) call_thumbnail_pane_cp011_ParamLimits

0x9c74,	// (0x00056e90) call_thumbnail_pane_cp011

0x9c80,	// (0x00056e9c) call_type_pane_cp034_ParamLimits

0x9c80,	// (0x00056e9c) call_type_pane_cp034

0xa56d,	// (0x00057789) popup_call_audio_second_window_g1_ParamLimits

0xa56d,	// (0x00057789) popup_call_audio_second_window_g1

0xa5a9,	// (0x000577c5) popup_call_audio_second_window_g2_ParamLimits

0xa5a9,	// (0x000577c5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005c31a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005c31a) popup_call_audio_second_window_g

0xa5e5,	// (0x00057801) popup_call_audio_second_window_t1_ParamLimits

0xa5e5,	// (0x00057801) popup_call_audio_second_window_t1

0xa666,	// (0x00057882) popup_call_audio_second_window_t2_ParamLimits

0xa666,	// (0x00057882) popup_call_audio_second_window_t2

0xa69c,	// (0x000578b8) popup_call_audio_second_window_t3_ParamLimits

0xa69c,	// (0x000578b8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005c31f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005c31f) popup_call_audio_second_window_t

0x9be4,	// (0x00056e00) bg_popup_call_pane_cp04

0xa6d2,	// (0x000578ee) list_conf_pane

0xa6da,	// (0x000578f6) popup_call_audio_conf_window_t1

0xa6e8,	// (0x00057904) call_thumbnail_pane_g1

0xa6f0,	// (0x0005790c) bg_pinb_pane_ParamLimits

0xa6f0,	// (0x0005790c) bg_pinb_pane

0xa6fe,	// (0x0005791a) find_pinb_pane

0xa707,	// (0x00057923) listscroll_pinb_pane_ParamLimits

0xa707,	// (0x00057923) listscroll_pinb_pane

0xa716,	// (0x00057932) pinb_bg_pane_g1

0x1291,	// (0x0004e4ad) pinb_bg_pane_g2

0x129d,	// (0x0004e4b9) pinb_bg_pane_g3

0x12a9,	// (0x0004e4c5) pinb_bg_pane_g4

0x12b5,	// (0x0004e4d1) pinb_bg_pane_g5

0x12c1,	// (0x0004e4dd) pinb_bg_pane_g6

0x12cc,	// (0x0004e4e8) pinb_bg_pane_g7

0x12d7,	// (0x0004e4f3) pinb_bg_pane_g8

0x12e2,	// (0x0004e4fe) pinb_bg_pane_g9

0x12ec,	// (0x0004e508) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005c326) pinb_bg_pane_g

0x1309,	// (0x0004e525) grid_pinb_pane

0x1312,	// (0x0004e52e) list_pinb_pane

0x131b,	// (0x0004e537) scroll_pane_cp01_ParamLimits

0x131b,	// (0x0004e537) scroll_pane_cp01

0xa720,	// (0x0005793c) find_pinb_pane_g1_ParamLimits

0xa720,	// (0x0005793c) find_pinb_pane_g1

0xa738,	// (0x00057954) find_pinb_pane_t1

0xa74a,	// (0x00057966) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005c340) find_pinb_pane_t

0xa75f,	// (0x0005797b) input_focus_pane_cp01_ParamLimits

0xa75f,	// (0x0005797b) input_focus_pane_cp01

0x132d,	// (0x0004e549) cell_pinb_pane_ParamLimits

0x132d,	// (0x0004e549) cell_pinb_pane

0x1358,	// (0x0004e574) cell_pinb_pane_g1_ParamLimits

0x1358,	// (0x0004e574) cell_pinb_pane_g1

0xa76b,	// (0x00057987) cell_pinb_pane_g2_ParamLimits

0xa76b,	// (0x00057987) cell_pinb_pane_g2

0xa777,	// (0x00057993) cell_pinb_pane_g3_ParamLimits

0xa777,	// (0x00057993) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005c345) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005c345) cell_pinb_pane_g

0x9be4,	// (0x00056e00) grid_highlight_pane_cp01

0x136b,	// (0x0004e587) list_pinb_item_pane_ParamLimits

0x136b,	// (0x0004e587) list_pinb_item_pane

0x9be4,	// (0x00056e00) list_highlight_pane_cp02

0x137e,	// (0x0004e59a) list_pinb_item_pane_g1_ParamLimits

0x137e,	// (0x0004e59a) list_pinb_item_pane_g1

0x138b,	// (0x0004e5a7) list_pinb_item_pane_g2_ParamLimits

0x138b,	// (0x0004e5a7) list_pinb_item_pane_g2

0x1397,	// (0x0004e5b3) list_pinb_item_pane_g3_ParamLimits

0x1397,	// (0x0004e5b3) list_pinb_item_pane_g3

0x13a8,	// (0x0004e5c4) list_pinb_item_pane_g4_ParamLimits

0x13a8,	// (0x0004e5c4) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005c34c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005c34c) list_pinb_item_pane_g

0x13b4,	// (0x0004e5d0) list_pinb_item_pane_t1_ParamLimits

0x13b4,	// (0x0004e5d0) list_pinb_item_pane_t1

0x13e9,	// (0x0004e605) calc_display_pane

0x1411,	// (0x0004e62d) calc_paper_pane

0x1434,	// (0x0004e650) grid_calc_pane

0x9be4,	// (0x00056e00) bg_list_pane_cp01

0x1462,	// (0x0004e67e) clock_g1

0x146a,	// (0x0004e686) clock_g2

0x0001,

0xf139,	// (0x0005c355) clock_g

0x1472,	// (0x0004e68e) clock_t1_ParamLimits

0x1472,	// (0x0004e68e) clock_t1

0x1487,	// (0x0004e6a3) clock_t2_ParamLimits

0x1487,	// (0x0004e6a3) clock_t2

0x1499,	// (0x0004e6b5) clock_t3_ParamLimits

0x1499,	// (0x0004e6b5) clock_t3

0x14ab,	// (0x0004e6c7) clock_t4_ParamLimits

0x14ab,	// (0x0004e6c7) clock_t4

0x14bd,	// (0x0004e6d9) clock_t5_ParamLimits

0x14bd,	// (0x0004e6d9) clock_t5

0x14d2,	// (0x0004e6ee) clock_t6_ParamLimits

0x14d2,	// (0x0004e6ee) clock_t6

0x14e4,	// (0x0004e700) clock_t7_ParamLimits

0x14e4,	// (0x0004e700) clock_t7

0x14f6,	// (0x0004e712) clock_t8_ParamLimits

0x14f6,	// (0x0004e712) clock_t8

0x150a,	// (0x0004e726) clock_t9_ParamLimits

0x150a,	// (0x0004e726) clock_t9

0x0008,

0xf13e,	// (0x0005c35a) clock_t_ParamLimits

0xf13e,	// (0x0005c35a) clock_t

0xa783,	// (0x0005799f) popup_clock_analogue_window_cp02

0xa783,	// (0x0005799f) popup_clock_digital_window_cp01

0xa78b,	// (0x000579a7) listscroll_help_pane

0x9be4,	// (0x00056e00) phob_pre_status_pane

0xa795,	// (0x000579b1) grid_qdial_pane

0xa6f0,	// (0x0005790c) listscroll_mce_pane

0xa6f0,	// (0x0005790c) bg_notes_pane

0xa79f,	// (0x000579bb) list_notes_pane

0x151e,	// (0x0004e73a) scroll_pane_cp06

0xa7ad,	// (0x000579c9) bg_calc_paper_pane

0x9cc4,	// (0x00056ee0) list_calc_pane

0xa7c1,	// (0x000579dd) bg_calc_display_pane

0x1532,	// (0x0004e74e) calc_display_pane_t1

0x1544,	// (0x0004e760) calc_display_pane_t2

0x9cde,	// (0x00056efa) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005c36d) calc_display_pane_t

0x1556,	// (0x0004e772) cell_calc_pane_ParamLimits

0x1556,	// (0x0004e772) cell_calc_pane

0xa7cd,	// (0x000579e9) bg_calc_paper_pane_g1

0xa7d9,	// (0x000579f5) bg_calc_paper_pane_g2

0xa7e5,	// (0x00057a01) bg_calc_paper_pane_g3

0xa7f1,	// (0x00057a0d) bg_calc_paper_pane_g4

0xa7fd,	// (0x00057a19) bg_calc_paper_pane_g5

0x158d,	// (0x0004e7a9) bg_calc_paper_pane_g6

0x159c,	// (0x0004e7b8) bg_calc_paper_pane_g7

0x15ab,	// (0x0004e7c7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005c374) bg_calc_paper_pane_g

0x15be,	// (0x0004e7da) calc_bg_paper_pane_g9

0x15d1,	// (0x0004e7ed) list_calc_item_pane_ParamLimits

0x15d1,	// (0x0004e7ed) list_calc_item_pane

0xa809,	// (0x00057a25) list_calc_item_pane_g1

0x9cf0,	// (0x00056f0c) list_calc_item_pane_t1_ParamLimits

0x9cf0,	// (0x00056f0c) list_calc_item_pane_t1

0x15ea,	// (0x0004e806) list_calc_item_pane_t2_ParamLimits

0x15ea,	// (0x0004e806) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005c385) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005c385) list_calc_item_pane_t

0xa816,	// (0x00057a32) cell_calc_pane_g1

0xa820,	// (0x00057a3c) grid_highlight_pane_cp02

0xa842,	// (0x00057a5e) bg_calc_display_pane_g1

0x9d02,	// (0x00056f1e) bg_calc_display_pane_g2

0xa84b,	// (0x00057a67) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005c38f) bg_calc_display_pane_g

0x161c,	// (0x0004e838) cell_qdial_pane_ParamLimits

0x161c,	// (0x0004e838) cell_qdial_pane

0x1630,	// (0x0004e84c) cell_qdial_pane_g1_ParamLimits

0x1630,	// (0x0004e84c) cell_qdial_pane_g1

0x1646,	// (0x0004e862) cell_qdial_pane_g2_ParamLimits

0x1646,	// (0x0004e862) cell_qdial_pane_g2

0xa854,	// (0x00057a70) cell_qdial_pane_g3_ParamLimits

0xa854,	// (0x00057a70) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005c396) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005c396) cell_qdial_pane_g

0x166c,	// (0x0004e888) cell_qdial_pane_t1_ParamLimits

0x166c,	// (0x0004e888) cell_qdial_pane_t1

0x1684,	// (0x0004e8a0) cell_qdial_pane_t2_ParamLimits

0x1684,	// (0x0004e8a0) cell_qdial_pane_t2

0x1697,	// (0x0004e8b3) cell_qdial_pane_t3_ParamLimits

0x1697,	// (0x0004e8b3) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005c39f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005c39f) cell_qdial_pane_t

0x9be4,	// (0x00056e00) grid_highlight_pane_cp04

0xa860,	// (0x00057a7c) thumbnail_qdial_pane_ParamLimits

0xa860,	// (0x00057a7c) thumbnail_qdial_pane

0xa8bc,	// (0x00057ad8) list_help_pane

0xa8c5,	// (0x00057ae1) scroll_pane_cp02

0xa8ce,	// (0x00057aea) help_list_pane_t1_ParamLimits

0xa8ce,	// (0x00057aea) help_list_pane_t1

0x9d0c,	// (0x00056f28) bg_notes_pane_g2

0x9d14,	// (0x00056f30) bg_notes_pane_g3

0x9d1c,	// (0x00056f38) notes_bg_pane_g1

0x9d24,	// (0x00056f40) notes_bg_pane_g4

0x9d2c,	// (0x00056f48) notes_bg_pane_g5

0x9d34,	// (0x00056f50) notes_bg_pane_g6

0x9d3c,	// (0x00056f58) notes_bg_pane_g7

0x9d44,	// (0x00056f60) notes_bg_pane_g8

0x9d4c,	// (0x00056f68) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005c3bd) notes_bg_pane_g

0x16aa,	// (0x0004e8c6) list_notes_text_pane_ParamLimits

0x16aa,	// (0x0004e8c6) list_notes_text_pane

0xa8ec,	// (0x00057b08) list_notes_text_pane_g1

0x00eb,	// (0x0004d307) list_notes_text_pane_t1

0x16c0,	// (0x0004e8dc) listscroll_cale_week_pane

0x16ec,	// (0x0004e908) bg_cale_heading_pane

0xa90f,	// (0x00057b2b) bg_cale_pane_cp01

0x1704,	// (0x0004e920) cale_week_corner_pane

0x1723,	// (0x0004e93f) cale_week_day_heading_pane

0x1740,	// (0x0004e95c) cale_week_scroll_pane_g1

0x1753,	// (0x0004e96f) cale_week_scroll_pane_g2

0x176b,	// (0x0004e987) cale_week_scroll_pane_g3

0x1783,	// (0x0004e99f) cale_week_scroll_pane_g4

0x179b,	// (0x0004e9b7) cale_week_scroll_pane_g5

0x17bb,	// (0x0004e9d7) cale_week_scroll_pane_g6

0x17db,	// (0x0004e9f7) cale_week_scroll_pane_g7

0x17fb,	// (0x0004ea17) cale_week_scroll_pane_g8

0x181f,	// (0x0004ea3b) cale_week_scroll_pane_g9

0x1837,	// (0x0004ea53) cale_week_scroll_pane_g10

0x184f,	// (0x0004ea6b) cale_week_scroll_pane_g11

0x1867,	// (0x0004ea83) cale_week_scroll_pane_g12

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g13

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g14

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005c3cc) cale_week_scroll_pane_g

0x18bb,	// (0x0004ead7) cale_week_time_pane

0x18df,	// (0x0004eafb) grid_cale_week_pane

0xa93e,	// (0x00057b5a) scroll_pane_cp08

0x1905,	// (0x0004eb21) cell_cale_week_pane_ParamLimits

0x1905,	// (0x0004eb21) cell_cale_week_pane

0x1993,	// (0x0004ebaf) cale_week_day_heading_pane_t1

0x19dd,	// (0x0004ebf9) cale_week_day_heading_pane_t2

0x1a2c,	// (0x0004ec48) cale_week_day_heading_pane_t3

0x1a7b,	// (0x0004ec97) cale_week_day_heading_pane_t4

0x1aca,	// (0x0004ece6) cale_week_day_heading_pane_t5

0x1b21,	// (0x0004ed3d) cale_week_day_heading_pane_t6

0x1b78,	// (0x0004ed94) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005c3ed) cale_week_day_heading_pane_t

0xa95b,	// (0x00057b77) bg_cale_side_pane

0x1bc2,	// (0x0004edde) cale_week_time_pane_t1

0x1bdc,	// (0x0004edf8) cale_week_time_pane_t2

0x1bf6,	// (0x0004ee12) cale_week_time_pane_t3

0x1c10,	// (0x0004ee2c) cale_week_time_pane_t4

0x1c2a,	// (0x0004ee46) cale_week_time_pane_t5

0x1c44,	// (0x0004ee60) cale_week_time_pane_t6

0x1c5e,	// (0x0004ee7a) cale_week_time_pane_t7

0x1c78,	// (0x0004ee94) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005c3fc) cale_week_time_pane_t

0x1c98,	// (0x0004eeb4) cell_cale_week_pane_g2

0x1cbc,	// (0x0004eed8) cell_cale_week_pane_g3_ParamLimits

0x1cbc,	// (0x0004eed8) cell_cale_week_pane_g3

0xa969,	// (0x00057b85) grid_highlight_pane_cp07

0xa971,	// (0x00057b8d) listscroll_gms_pane

0xa97b,	// (0x00057b97) grid_gms_pane

0xa984,	// (0x00057ba0) listscroll_gms_pane_g1

0xa98c,	// (0x00057ba8) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005c40d) listscroll_gms_pane_g

0x1cd4,	// (0x0004eef0) scroll_pane_cp010

0x1cdf,	// (0x0004eefb) cell_gms_pane_ParamLimits

0x1cdf,	// (0x0004eefb) cell_gms_pane

0x1cf1,	// (0x0004ef0d) cell_gms_pane_g1

0xa994,	// (0x00057bb0) cell_gms_pane_g2

0xa99c,	// (0x00057bb8) cell_gms_pane_g3

0xa9a5,	// (0x00057bc1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005c412) cell_gms_pane_g

0xa9ae,	// (0x00057bca) grid_highlight_pane_cp09

0x4019,	// (0x00051235) phob_pre_status_pane_g1

0x4021,	// (0x0005123d) phob_pre_status_pane_g2

0x4029,	// (0x00051245) phob_pre_status_pane_g3

0x4031,	// (0x0005124d) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0005c810) phob_pre_status_pane_g

0x4041,	// (0x0005125d) phob_pre_status_pane_t1

0x404f,	// (0x0005126b) phob_pre_status_pane_t2

0x405f,	// (0x0005127b) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0005c81b) phob_pre_status_pane_t

0xa9b6,	// (0x00057bd2) bg_list_pane_cp05

0x1d01,	// (0x0004ef1d) grid_vorec_pane

0x1d09,	// (0x0004ef25) vorec_t1

0x1d17,	// (0x0004ef33) vorec_t2

0x1d25,	// (0x0004ef41) vorec_t3

0x1d33,	// (0x0004ef4f) vorec_t4

0x9743,	// (0x0005695f) vorec_t5

0x9751,	// (0x0005696d) vorec_t6

0x0004,

0xf1ff,	// (0x0005c41b) vorec_t

0x975f,	// (0x0005697b) wait_bar_pane_cp01

0x1d4f,	// (0x0004ef6b) cell_vorec_pane_ParamLimits

0x1d4f,	// (0x0004ef6b) cell_vorec_pane

0x9d54,	// (0x00056f70) cell_vorec_pane_g1

0x9be4,	// (0x00056e00) grid_highlight_pane_cp05

0x1d7a,	// (0x0004ef96) cams_zoom_pane

0x1d89,	// (0x0004efa5) image_vga_pane

0x1da3,	// (0x0004efbf) main_camera_pane_g1

0x1db5,	// (0x0004efd1) main_camera_pane_g2

0x1dc5,	// (0x0004efe1) main_camera_pane_g3

0x1dd5,	// (0x0004eff1) main_camera_pane_g4

0x1de5,	// (0x0004f001) main_camera_pane_g5

0x1df5,	// (0x0004f011) main_camera_pane_g6

0x1e05,	// (0x0004f021) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005c426) main_camera_pane_g

0x1e15,	// (0x0004f031) main_camera_pane_t1

0x1e2b,	// (0x0004f047) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005c437) main_camera_pane_t

0x1e65,	// (0x0004f081) cams_zoom_pane_cp_ParamLimits

0x1e65,	// (0x0004f081) cams_zoom_pane_cp

0x1e8d,	// (0x0004f0a9) image_cif_pane_ParamLimits

0x1e8d,	// (0x0004f0a9) image_cif_pane

0x1ec8,	// (0x0004f0e4) image_subqcif_pane

0x1ed0,	// (0x0004f0ec) main_video_pane_g1_ParamLimits

0x1ed0,	// (0x0004f0ec) main_video_pane_g1

0x1ef4,	// (0x0004f110) main_video_pane_g2_ParamLimits

0x1ef4,	// (0x0004f110) main_video_pane_g2

0x1f28,	// (0x0004f144) main_video_pane_g3_ParamLimits

0x1f28,	// (0x0004f144) main_video_pane_g3

0x1f56,	// (0x0004f172) main_video_pane_g4_ParamLimits

0x1f56,	// (0x0004f172) main_video_pane_g4

0x1f84,	// (0x0004f1a0) main_video_pane_g5_ParamLimits

0x1f84,	// (0x0004f1a0) main_video_pane_g5

0xa9ca,	// (0x00057be6) main_video_pane_g6_ParamLimits

0xa9ca,	// (0x00057be6) main_video_pane_g6

0x0006,

0xf220,	// (0x0005c43c) main_video_pane_g_ParamLimits

0xf220,	// (0x0005c43c) main_video_pane_g

0x1fad,	// (0x0004f1c9) main_video_pane_t1_ParamLimits

0x1fad,	// (0x0004f1c9) main_video_pane_t1

0xa9e4,	// (0x00057c00) cams_zoom_pane_g1

0xa9ed,	// (0x00057c09) cams_zoom_pane_g2

0xa9f6,	// (0x00057c12) cams_zoom_pane_g3

0xa9ff,	// (0x00057c1b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005c44b) cams_zoom_pane_g

0x200a,	// (0x0004f226) grid_cams_pane

0x2024,	// (0x0004f240) linegrid_cams_pane

0x2037,	// (0x0004f253) cell_cams_pane_ParamLimits

0x2037,	// (0x0004f253) cell_cams_pane

0xaa08,	// (0x00057c24) cams_burst_image_pane

0xaa10,	// (0x00057c2c) cell_cams_pane_g1

0x9be4,	// (0x00056e00) grid_highlight_pane_cp03

0xa816,	// (0x00057a32) mp_bg_pane_g1

0x9be4,	// (0x00056e00) bg_list_pane_cp03

0xc769,	// (0x00059985) bg_mp_pane

0xc771,	// (0x0005998d) grid_mp_pane

0xc779,	// (0x00059995) media_player_g1

0xc781,	// (0x0005999d) media_player_t1

0xc78f,	// (0x000599ab) media_player_t2

0xc79d,	// (0x000599b9) media_player_t3

0xc7ab,	// (0x000599c7) media_player_t4

0xc7b9,	// (0x000599d5) media_player_t5

0xc7c7,	// (0x000599e3) media_player_t6

0xc7d5,	// (0x000599f1) media_player_t7

0x0006,

0xf5de,	// (0x0005c7fa) media_player_t

0xc7e3,	// (0x000599ff) wait_bar_pane_cp02

0xf5c3,	// (0x0005c7df) main_usb_pane_t

0x4010,	// (0x0005122c) cell_mp_pane

0xa816,	// (0x00057a32) cell_mp_pane_g1

0x9be4,	// (0x00056e00) grid_highlight_pane_cp06

0xaa18,	// (0x00057c34) grid_skin_colour_pane

0xaa20,	// (0x00057c3c) list_highlight_pane_cp03

0x2057,	// (0x0004f273) skin_g1

0xaa28,	// (0x00057c44) skin_t1

0xaa37,	// (0x00057c53) skin_t2

0x0001,

0xf264,	// (0x0005c480) skin_t

0x205f,	// (0x0004f27b) cell_skin_colour_pane_ParamLimits

0x205f,	// (0x0004f27b) cell_skin_colour_pane

0xaa45,	// (0x00057c61) cell_skin_colour_pane_g1

0x20d8,	// (0x0004f2f4) call_video_g1_ParamLimits

0x20d8,	// (0x0004f2f4) call_video_g1

0x20f4,	// (0x0004f310) call_video_g2_ParamLimits

0x20f4,	// (0x0004f310) call_video_g2

0x0001,

0xf269,	// (0x0005c485) call_video_g_ParamLimits

0xf269,	// (0x0005c485) call_video_g

0x2146,	// (0x0004f362) call_video_uplink_pane_cp1_ParamLimits

0x2146,	// (0x0004f362) call_video_uplink_pane_cp1

0xaa57,	// (0x00057c73) call_video_uplink_pane_cp2

0x21e5,	// (0x0004f401) video_down_crop_pane_ParamLimits

0x21e5,	// (0x0004f401) video_down_crop_pane

0x22ce,	// (0x0004f4ea) video_down_pane_ParamLimits

0x22ce,	// (0x0004f4ea) video_down_pane

0xaa5f,	// (0x00057c7b) video_down_subqcif_pane_ParamLimits

0xaa5f,	// (0x00057c7b) video_down_subqcif_pane

0xaa77,	// (0x00057c93) video_down_subqcif_pane_cp_ParamLimits

0xaa77,	// (0x00057c93) video_down_subqcif_pane_cp

0xaa9d,	// (0x00057cb9) im_reading_pane_ParamLimits

0xaa9d,	// (0x00057cb9) im_reading_pane

0x23dc,	// (0x0004f5f8) im_writing_pane_ParamLimits

0x23dc,	// (0x0004f5f8) im_writing_pane

0x23f2,	// (0x0004f60e) im_reading_pane_t1

0xaab7,	// (0x00057cd3) list_im_pane

0xaac8,	// (0x00057ce4) scroll_pane_cp07

0x242c,	// (0x0004f648) im_writing_pane_t1_ParamLimits

0x242c,	// (0x0004f648) im_writing_pane_t1

0xaae1,	// (0x00057cfd) im_writing_pane_t2_ParamLimits

0xaae1,	// (0x00057cfd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005c48f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005c48f) im_writing_pane_t

0x9be4,	// (0x00056e00) input_focus_pane_cp04

0x9be4,	// (0x00056e00) input_focus_pane_cp05

0x2441,	// (0x0004f65d) list_im_single_pane_ParamLimits

0x2441,	// (0x0004f65d) list_im_single_pane

0x2456,	// (0x0004f672) list_single_im_pane_t1

0x3fd0,	// (0x000511ec) blid_accuracy_pane

0x3fd8,	// (0x000511f4) blid_compass_pane

0x3fe2,	// (0x000511fe) main_location_t1

0x3ff2,	// (0x0005120e) main_location_t2

0x4002,	// (0x0005121e) main_location_t3

0x0002,

0xf5ed,	// (0x0005c809) main_location_t

0x9be4,	// (0x00056e00) aid_levels_location

0xa816,	// (0x00057a32) blid_accuracy_pane_g1

0xa816,	// (0x00057a32) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005c4f1) blid_accuracy_pane_g

0xab29,	// (0x00057d45) wml_content_pane

0xab67,	// (0x00057d83) wml_button_pane_ParamLimits

0xab67,	// (0x00057d83) wml_button_pane

0x2465,	// (0x0004f681) wml_list_single_large_pane_ParamLimits

0x2465,	// (0x0004f681) wml_list_single_large_pane

0x247a,	// (0x0004f696) wml_list_single_medium_pane_ParamLimits

0x247a,	// (0x0004f696) wml_list_single_medium_pane

0x2491,	// (0x0004f6ad) wml_list_single_small_pane_ParamLimits

0x2491,	// (0x0004f6ad) wml_list_single_small_pane

0xab7b,	// (0x00057d97) wml_selection_box_pane_ParamLimits

0xab7b,	// (0x00057d97) wml_selection_box_pane

0xab8e,	// (0x00057daa) wml_list_single_pane_t1

0xab9d,	// (0x00057db9) wml_list_single_medium_pane_t1

0xabac,	// (0x00057dc8) wml_list_single_large_pane_t1

0xabbb,	// (0x00057dd7) input_focus_pane_cp02_ParamLimits

0xabbb,	// (0x00057dd7) input_focus_pane_cp02

0xabce,	// (0x00057dea) wml_selection_box_pane_g1

0xabd7,	// (0x00057df3) wml_selection_box_pane_t1_ParamLimits

0xabd7,	// (0x00057df3) wml_selection_box_pane_t1

0xa6f0,	// (0x0005790c) bg_wml_button_pane_ParamLimits

0xa6f0,	// (0x0005790c) bg_wml_button_pane

0xabef,	// (0x00057e0b) wml_button_pane_g1

0xabf7,	// (0x00057e13) wml_button_pane_t1

0xabef,	// (0x00057e0b) wml_button_bg_pane_g1

0xac07,	// (0x00057e23) wml_button_bg_pane_g2

0xac0f,	// (0x00057e2b) wml_button_bg_pane_g3

0xac17,	// (0x00057e33) wml_button_bg_pane_g4

0xac1f,	// (0x00057e3b) wml_button_bg_pane_g5

0xac27,	// (0x00057e43) wml_button_bg_pane_g6

0xac2f,	// (0x00057e4b) wml_button_bg_pane_g7

0xac37,	// (0x00057e53) wml_button_bg_pane_g8

0xac3f,	// (0x00057e5b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005c494) wml_button_bg_pane_g

0x24aa,	// (0x0004f6c6) bg_list_pane_cp02

0xac47,	// (0x00057e63) mce_header_pane_ParamLimits

0xac47,	// (0x00057e63) mce_header_pane

0xac5d,	// (0x00057e79) mce_icon_pane

0xac5d,	// (0x00057e79) mce_image_pane

0xac66,	// (0x00057e82) mce_text_pane_ParamLimits

0xac66,	// (0x00057e82) mce_text_pane

0x24b2,	// (0x0004f6ce) scroll_pane_cp03

0xab5f,	// (0x00057d7b) scroll_pane_cp04

0xac79,	// (0x00057e95) scroll_pane_cp05_ParamLimits

0xac79,	// (0x00057e95) scroll_pane_cp05

0x24bc,	// (0x0004f6d8) mce_header_field_pane_ParamLimits

0x24bc,	// (0x0004f6d8) mce_header_field_pane

0x24d3,	// (0x0004f6ef) mce_header_field_pane_2_ParamLimits

0x24d3,	// (0x0004f6ef) mce_header_field_pane_2

0x24e9,	// (0x0004f705) mce_header_field_pane_3

0x24f1,	// (0x0004f70d) list_single_mce_message_pane_ParamLimits

0x24f1,	// (0x0004f70d) list_single_mce_message_pane

0x2507,	// (0x0004f723) list_single_mce_smart_pane_ParamLimits

0x2507,	// (0x0004f723) list_single_mce_smart_pane

0xac85,	// (0x00057ea1) input_focus_pane_cp03

0xac8e,	// (0x00057eaa) list_header_data_pane

0x2528,	// (0x0004f744) mce_header_field_pane_t1

0x2538,	// (0x0004f754) list_single_mce_header_pane_ParamLimits

0x2538,	// (0x0004f754) list_single_mce_header_pane

0xac96,	// (0x00057eb2) list_single_mce_header_pane_t1

0xaca5,	// (0x00057ec1) list_single_mce_message_pane_g1

0xacad,	// (0x00057ec9) list_single_mce_message_pane_t1

0x2572,	// (0x0004f78e) bg_cale_heading_pane_cp01_ParamLimits

0x2572,	// (0x0004f78e) bg_cale_heading_pane_cp01

0xacbb,	// (0x00057ed7) bg_cale_pane_cp02_ParamLimits

0xacbb,	// (0x00057ed7) bg_cale_pane_cp02

0x25a1,	// (0x0004f7bd) cale_month_corner_pane

0x25c0,	// (0x0004f7dc) cale_month_day_heading_pane_ParamLimits

0x25c0,	// (0x0004f7dc) cale_month_day_heading_pane

0x2607,	// (0x0004f823) cale_month_pane_g1_ParamLimits

0x2607,	// (0x0004f823) cale_month_pane_g1

0x262b,	// (0x0004f847) cale_month_pane_g2_ParamLimits

0x262b,	// (0x0004f847) cale_month_pane_g2

0x265b,	// (0x0004f877) cale_month_pane_g3_ParamLimits

0x265b,	// (0x0004f877) cale_month_pane_g3

0x2697,	// (0x0004f8b3) cale_month_pane_g4_ParamLimits

0x2697,	// (0x0004f8b3) cale_month_pane_g4

0x26d3,	// (0x0004f8ef) cale_month_pane_g5_ParamLimits

0x26d3,	// (0x0004f8ef) cale_month_pane_g5

0x271b,	// (0x0004f937) cale_month_pane_g6_ParamLimits

0x271b,	// (0x0004f937) cale_month_pane_g6

0x2767,	// (0x0004f983) cale_month_pane_g7_ParamLimits

0x2767,	// (0x0004f983) cale_month_pane_g7

0x27b7,	// (0x0004f9d3) cale_month_pane_g8_ParamLimits

0x27b7,	// (0x0004f9d3) cale_month_pane_g8

0x280b,	// (0x0004fa27) cale_month_pane_g9_ParamLimits

0x280b,	// (0x0004fa27) cale_month_pane_g9

0x285d,	// (0x0004fa79) cale_month_pane_g10_ParamLimits

0x285d,	// (0x0004fa79) cale_month_pane_g10

0x28af,	// (0x0004facb) cale_month_pane_g11_ParamLimits

0x28af,	// (0x0004facb) cale_month_pane_g11

0x2901,	// (0x0004fb1d) cale_month_pane_g12_ParamLimits

0x2901,	// (0x0004fb1d) cale_month_pane_g12

0x2953,	// (0x0004fb6f) cale_month_pane_g13_ParamLimits

0x2953,	// (0x0004fb6f) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005c4a7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005c4a7) cale_month_pane_g

0x29a5,	// (0x0004fbc1) cale_month_week_pane

0x29c9,	// (0x0004fbe5) grid_cale_month_pane_ParamLimits

0x29c9,	// (0x0004fbe5) grid_cale_month_pane

0x2a07,	// (0x0004fc23) cale_month_day_heading_pane_t1

0x2a8d,	// (0x0004fca9) cale_month_day_heading_pane_t2

0x2b1e,	// (0x0004fd3a) cale_month_day_heading_pane_t3

0x2baf,	// (0x0004fdcb) cale_month_day_heading_pane_t4

0x2c48,	// (0x0004fe64) cale_month_day_heading_pane_t5

0x2ce9,	// (0x0004ff05) cale_month_day_heading_pane_t6

0x2d8a,	// (0x0004ffa6) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005c4c2) cale_month_day_heading_pane_t

0xa95b,	// (0x00057b77) bg_cale_side_pane_cp01

0x2e33,	// (0x0005004f) cale_month_week_pane_t1

0x2e4c,	// (0x00050068) cale_month_week_pane_t2

0x2e65,	// (0x00050081) cale_month_week_pane_t3

0x2e7e,	// (0x0005009a) cale_month_week_pane_t4

0x2e97,	// (0x000500b3) cale_month_week_pane_t5

0x2eb0,	// (0x000500cc) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005c4d1) cale_month_week_pane_t

0x2ec9,	// (0x000500e5) cell_cale_month_pane_ParamLimits

0x2ec9,	// (0x000500e5) cell_cale_month_pane

0x9d5e,	// (0x00056f7a) cell_cale_month_pane_g1

0x2ff7,	// (0x00050213) cell_cale_month_pane_t1_ParamLimits

0x2ff7,	// (0x00050213) cell_cale_month_pane_t1

0xa969,	// (0x00057b85) grid_highlight_pane_cp08

0xa816,	// (0x00057a32) main_smil_g1

0x3023,	// (0x0005023f) smil_status_pane

0xacfa,	// (0x00057f16) smil_text_pane

0xc649,	// (0x00059865) bg_popup_call3_rect_pane_g8

0xc651,	// (0x0005986d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c78a) bg_popup_call3_rect_pane_g

0xc8d8,	// (0x00059af4) smil_status_volume_pane_g1

0xad04,	// (0x00057f20) smil_status_pane_t1

0x9eca,	// (0x000570e6) volume_smil_pane

0xad1b,	// (0x00057f37) list_smil_text_pane

0x3038,	// (0x00050254) scroll_pane_cp011

0x3043,	// (0x0005025f) smil_text_list_pane_t1_ParamLimits

0x3043,	// (0x0005025f) smil_text_list_pane_t1

0x9d84,	// (0x00056fa0) aid_volume_smil_ParamLimits

0x9d84,	// (0x00056fa0) aid_volume_smil

0xa816,	// (0x00057a32) smil_volume_pane_g1

0xa816,	// (0x00057a32) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005c4f1) smil_volume_pane_g

0x16c0,	// (0x0004e8dc) listscroll_cale_day_pane

0xad25,	// (0x00057f41) bg_cale_pane

0xad3d,	// (0x00057f59) list_cale_pane

0xad60,	// (0x00057f7c) scroll_pane_cp09

0xad71,	// (0x00057f8d) cale_bg_pane_g1

0xad79,	// (0x00057f95) cale_bg_pane_g2

0xad81,	// (0x00057f9d) cale_bg_pane_g3

0xad89,	// (0x00057fa5) cale_bg_pane_g4

0xad91,	// (0x00057fad) cale_bg_pane_g5

0xad99,	// (0x00057fb5) cale_bg_pane_g6

0xada1,	// (0x00057fbd) cale_bg_pane_g7

0xada9,	// (0x00057fc5) cale_bg_pane_g8

0xadb1,	// (0x00057fcd) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005c4f6) cale_bg_pane_g

0x308f,	// (0x000502ab) list_cale_time_pane_ParamLimits

0x308f,	// (0x000502ab) list_cale_time_pane

0xadb9,	// (0x00057fd5) list_cale_time_pane_g1_ParamLimits

0xadb9,	// (0x00057fd5) list_cale_time_pane_g1

0xadc5,	// (0x00057fe1) list_cale_time_pane_g2_ParamLimits

0xadc5,	// (0x00057fe1) list_cale_time_pane_g2

0x30a5,	// (0x000502c1) list_cale_time_pane_g3_ParamLimits

0x30a5,	// (0x000502c1) list_cale_time_pane_g3

0x30b3,	// (0x000502cf) list_cale_time_pane_g4_ParamLimits

0x30b3,	// (0x000502cf) list_cale_time_pane_g4

0x30c1,	// (0x000502dd) list_cale_time_pane_g5_ParamLimits

0x30c1,	// (0x000502dd) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005c509) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005c509) list_cale_time_pane_g

0xaddf,	// (0x00057ffb) list_cale_time_pane_t1_ParamLimits

0xaddf,	// (0x00057ffb) list_cale_time_pane_t1

0xae07,	// (0x00058023) list_cale_time_pane_t2_ParamLimits

0xae07,	// (0x00058023) list_cale_time_pane_t2

0x3372,	// (0x0005058e) aid_blid_cardinal_pane

0x33b0,	// (0x000505cc) compass_pane_t4

0xae2f,	// (0x0005804b) list_cale_time_pane_t4_ParamLimits

0xae2f,	// (0x0005804b) list_cale_time_pane_t4

0x33be,	// (0x000505da) compass_pane_t5

0x33cc,	// (0x000505e8) compass_pane_t6

0x33da,	// (0x000505f6) compass_pane_t7

0xb2a7,	// (0x000584c3) navi_pane_cc_t1

0xb49e,	// (0x000586ba) aid_phob_thumbnail_center_pane

0x39e6,	// (0x00050c02) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005c516) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005c516) list_cale_time_pane_t

0x983b,	// (0x00056a57) bg_popup_window_pane_cp02_ParamLimits

0x983b,	// (0x00056a57) bg_popup_window_pane_cp02

0xae57,	// (0x00058073) heading_pane_cp01_ParamLimits

0xae57,	// (0x00058073) heading_pane_cp01

0xae63,	// (0x0005807f) loc_req_pane_ParamLimits

0xae63,	// (0x0005807f) loc_req_pane

0xae73,	// (0x0005808f) loc_type_pane_ParamLimits

0xae73,	// (0x0005808f) loc_type_pane

0xae85,	// (0x000580a1) loc_type_pane_t1_ParamLimits

0xae85,	// (0x000580a1) loc_type_pane_t1

0xae97,	// (0x000580b3) loc_type_pane_t2_ParamLimits

0xae97,	// (0x000580b3) loc_type_pane_t2

0xaea9,	// (0x000580c5) loc_type_pane_t3_ParamLimits

0xaea9,	// (0x000580c5) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005c51d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005c51d) loc_type_pane_t

0xaebb,	// (0x000580d7) list_loc_req_pane

0xaec5,	// (0x000580e1) scroll_pane_cp012

0x30cf,	// (0x000502eb) list_single_loc_request_popup_menu_pane_ParamLimits

0x30cf,	// (0x000502eb) list_single_loc_request_popup_menu_pane

0xaed0,	// (0x000580ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaed0,	// (0x000580ec) list_single_loc_request_popup_menu_pane_g1

0xaedc,	// (0x000580f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaedc,	// (0x000580f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005c524) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005c524) list_single_loc_request_popup_menu_pane_g

0xaee8,	// (0x00058104) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaee8,	// (0x00058104) list_single_loc_request_popup_menu_pane_t1

0xa6f0,	// (0x0005790c) bg_popup_window_pane_cp03_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_window_pane_cp03

0xb328,	// (0x00058544) heading_loc_req_pane_ParamLimits

0xb328,	// (0x00058544) heading_loc_req_pane

0x30dc,	// (0x000502f8) popup_dyc_status_message_window_g1_ParamLimits

0x30dc,	// (0x000502f8) popup_dyc_status_message_window_g1

0x30f0,	// (0x0005030c) popup_dyc_status_message_window_t1_ParamLimits

0x30f0,	// (0x0005030c) popup_dyc_status_message_window_t1

0x3105,	// (0x00050321) popup_dyc_status_message_window_t2_ParamLimits

0x3105,	// (0x00050321) popup_dyc_status_message_window_t2

0x311a,	// (0x00050336) popup_dyc_status_message_window_t3_ParamLimits

0x311a,	// (0x00050336) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005c529) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005c529) popup_dyc_status_message_window_t

0x9be4,	// (0x00056e00) bg_heading_pane_cp01

0xaefe,	// (0x0005811a) heading_loc_req_pane_g1

0xaf06,	// (0x00058122) heading_loc_req_pane_g2

0xaf0e,	// (0x0005812a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005c530) heading_loc_req_pane_g

0xaf16,	// (0x00058132) heading_loc_req_pane_t1

0xaf25,	// (0x00058141) bg_popup_sub_pane_cp01_ParamLimits

0xaf25,	// (0x00058141) bg_popup_sub_pane_cp01

0xaf33,	// (0x0005814f) popup_cale_events_window_g1_ParamLimits

0xaf33,	// (0x0005814f) popup_cale_events_window_g1

0xaf53,	// (0x0005816f) popup_cale_events_window_g2_ParamLimits

0xaf53,	// (0x0005816f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005c564) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005c564) popup_cale_events_window_g

0xaf73,	// (0x0005818f) popup_cale_events_window_t1_ParamLimits

0xaf73,	// (0x0005818f) popup_cale_events_window_t1

0xaf85,	// (0x000581a1) popup_cale_events_window_t2_ParamLimits

0xaf85,	// (0x000581a1) popup_cale_events_window_t2

0xafc3,	// (0x000581df) popup_cale_events_window_t3_ParamLimits

0xafc3,	// (0x000581df) popup_cale_events_window_t3

0xaffd,	// (0x00058219) popup_cale_events_window_t4_ParamLimits

0xaffd,	// (0x00058219) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005c569) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005c569) popup_cale_events_window_t

0x3142,	// (0x0005035e) call_type_pane

0x3152,	// (0x0005036e) popup_call_status_window_g1

0x3166,	// (0x00050382) popup_call_status_window_g2

0x317a,	// (0x00050396) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005c572) popup_call_status_window_g

0xb033,	// (0x0005824f) call_type_pane_g1

0xb03c,	// (0x00058258) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005c579) call_type_pane_g

0x9be4,	// (0x00056e00) bg_popup_sub_pane_cp02

0xb045,	// (0x00058261) listscroll_popup_wml_pane

0xb04d,	// (0x00058269) list_wml_pane

0xb057,	// (0x00058273) scroll_pane_cp013

0xb062,	// (0x0005827e) list_single_graphic_popup_wml_pane_ParamLimits

0xb062,	// (0x0005827e) list_single_graphic_popup_wml_pane

0xa816,	// (0x00057a32) list_single_graphic_popup_wml_pane_g1

0xb076,	// (0x00058292) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005c57e) list_single_graphic_popup_wml_pane_g

0xb07e,	// (0x0005829a) list_single_graphic_popup_wml_pane_t1

0xb094,	// (0x000582b0) aid_call_pane

0xa6e8,	// (0x00057904) popup_clock_analogue_window_g1

0xa6e8,	// (0x00057904) popup_clock_analogue_window_g2

0x9da6,	// (0x00056fc2) popup_clock_analogue_window_g3

0x9da6,	// (0x00056fc2) popup_clock_analogue_window_g4

0xa816,	// (0x00057a32) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005c583) popup_clock_analogue_window_g

0x9dae,	// (0x00056fca) popup_clock_analogue_window_t1

0x9dbc,	// (0x00056fd8) clock_digital_number_pane_ParamLimits

0x9dbc,	// (0x00056fd8) clock_digital_number_pane

0x9dc8,	// (0x00056fe4) clock_digital_number_pane_cp02_ParamLimits

0x9dc8,	// (0x00056fe4) clock_digital_number_pane_cp02

0x9dd4,	// (0x00056ff0) clock_digital_number_pane_cp03_ParamLimits

0x9dd4,	// (0x00056ff0) clock_digital_number_pane_cp03

0x9de0,	// (0x00056ffc) clock_digital_number_pane_cp04_ParamLimits

0x9de0,	// (0x00056ffc) clock_digital_number_pane_cp04

0x9dec,	// (0x00057008) clock_digital_separator_pane_ParamLimits

0x9dec,	// (0x00057008) clock_digital_separator_pane

0x9df8,	// (0x00057014) popup_clock_digital_window_t1

0xa816,	// (0x00057a32) clock_digital_number_pane_g1

0xa816,	// (0x00057a32) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005c4f1) clock_digital_number_pane_g

0xa816,	// (0x00057a32) clock_digital_separator_pane_g1

0xa816,	// (0x00057a32) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005c4f1) clock_digital_separator_pane_g

0x9be4,	// (0x00056e00) bg_popup_window_pane_cp04

0xb09c,	// (0x000582b8) heading_pane_cp03

0xb0a4,	// (0x000582c0) listscroll_popup_gms_pane

0xb0ac,	// (0x000582c8) grid_large_graphic_popup_pane

0xb0b6,	// (0x000582d2) listscroll_popup_gms_pane_g1

0xb0be,	// (0x000582da) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005c58e) listscroll_popup_gms_pane_g

0xab5f,	// (0x00057d7b) scroll_pane_cp014

0x3189,	// (0x000503a5) cell_large_graphic_popup_pane_ParamLimits

0x3189,	// (0x000503a5) cell_large_graphic_popup_pane

0x31a1,	// (0x000503bd) cell_large_graphic_popup_pane_g1_ParamLimits

0x31a1,	// (0x000503bd) cell_large_graphic_popup_pane_g1

0xb0c6,	// (0x000582e2) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0c6,	// (0x000582e2) cell_large_graphic_popup_pane_g2

0xb0d2,	// (0x000582ee) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0d2,	// (0x000582ee) cell_large_graphic_popup_pane_g3

0xb0df,	// (0x000582fb) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0df,	// (0x000582fb) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005c593) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005c593) cell_large_graphic_popup_pane_g

0xb0ef,	// (0x0005830b) grid_highlight_pane_cp010

0xa816,	// (0x00057a32) bg_popup_call_pane_g1

0xb0f9,	// (0x00058315) list_single_graphic_popup_conf_pane_ParamLimits

0xb0f9,	// (0x00058315) list_single_graphic_popup_conf_pane

0xb10c,	// (0x00058328) list_highlight_pane_cp01

0xb115,	// (0x00058331) list_single_graphic_popup_conf_pane_g1

0xb11d,	// (0x00058339) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005c59c) list_single_graphic_popup_conf_pane_g

0xb125,	// (0x00058341) list_single_graphic_popup_conf_pane_t1

0xb133,	// (0x0005834f) linegrid_cams_pane_g1

0x31ad,	// (0x000503c9) linegrid_cams_pane_g2

0xa99c,	// (0x00057bb8) linegrid_cams_pane_g3

0xb13c,	// (0x00058358) linegrid_cams_pane_g4

0x31b6,	// (0x000503d2) linegrid_cams_pane_g5

0x31bf,	// (0x000503db) linegrid_cams_pane_g6

0xa9a5,	// (0x00057bc1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005c5a1) linegrid_cams_pane_g

0xb145,	// (0x00058361) popup_clock_analogue_window

0xb145,	// (0x00058361) popup_clock_digital_window

0x9be4,	// (0x00056e00) popup_phob_thumbnail_window

0xa816,	// (0x00057a32) call_video_uplink_pane_g1

0xb14e,	// (0x0005836a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005c5b0) call_video_uplink_pane_g

0xb156,	// (0x00058372) video_uplink_pane

0xb15e,	// (0x0005837a) mce_image_pane_g1

0x31ca,	// (0x000503e6) mce_image_pane_g2

0x31d2,	// (0x000503ee) mce_image_pane_g3

0x31da,	// (0x000503f6) mce_image_pane_g4

0x31e4,	// (0x00050400) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005c5b5) mce_image_pane_g

0xb168,	// (0x00058384) control_top_pane_stacon_cp01_ParamLimits

0xb168,	// (0x00058384) control_top_pane_stacon_cp01

0xb17c,	// (0x00058398) uni_indicator_pane_stacon_cp01_ParamLimits

0xb17c,	// (0x00058398) uni_indicator_pane_stacon_cp01

0xb18d,	// (0x000583a9) bg_popup_sub_pane_cp03

0x31ec,	// (0x00050408) chi_dic_find_pane

0x31f4,	// (0x00050410) listscroll_chi_dic_pane

0x31fd,	// (0x00050419) main_pane_chidic_g1

0x3210,	// (0x0005042c) chi_dic_find_pane_t1

0xb197,	// (0x000583b3) find_chidic_pane

0xb1a0,	// (0x000583bc) chi_dic_list_pane_ParamLimits

0xb1a0,	// (0x000583bc) chi_dic_list_pane

0xb1b1,	// (0x000583cd) scroll_pane_cp020

0x321e,	// (0x0005043a) find_chidic_pane_t1

0x9be4,	// (0x00056e00) input_focus_pane_cp06

0x322d,	// (0x00050449) list_chi_dic_pane_ParamLimits

0x322d,	// (0x00050449) list_chi_dic_pane

0x323f,	// (0x0005045b) list_chi_dic_pane_t1_ParamLimits

0x323f,	// (0x0005045b) list_chi_dic_pane_t1

0x9be4,	// (0x00056e00) list_highlight_pane_cp020

0xb1b9,	// (0x000583d5) bg_cale_heading_pane_g1

0x3252,	// (0x0005046e) bg_cale_heading_pane_g2

0x325a,	// (0x00050476) bg_cale_heading_pane_g3

0x3262,	// (0x0005047e) bg_cale_heading_pane_g4

0x326c,	// (0x00050488) bg_cale_heading_pane_g5

0x3276,	// (0x00050492) bg_cale_heading_pane_g6

0x327e,	// (0x0005049a) bg_cale_heading_pane_g7

0x3286,	// (0x000504a2) bg_cale_heading_pane_g8

0x3290,	// (0x000504ac) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005c5c0) bg_cale_heading_pane_g

0xb1b9,	// (0x000583d5) bg_cale_side_pane_g1

0x329a,	// (0x000504b6) bg_cale_side_pane_g2

0x32a2,	// (0x000504be) bg_cale_side_pane_g3

0x32aa,	// (0x000504c6) bg_cale_side_pane_g4

0x32b2,	// (0x000504ce) bg_cale_side_pane_g5

0x32ba,	// (0x000504d6) bg_cale_side_pane_g6

0x32c2,	// (0x000504de) bg_cale_side_pane_g7

0x32ca,	// (0x000504e6) bg_cale_side_pane_g8

0x32d2,	// (0x000504ee) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005c5d3) bg_cale_side_pane_g

0x32da,	// (0x000504f6) popup_call_status_window_ParamLimits

0x32da,	// (0x000504f6) popup_call_status_window

0xb1c1,	// (0x000583dd) stacon_top_pane

0xb1c9,	// (0x000583e5) status_pane_ParamLimits

0xb1c9,	// (0x000583e5) status_pane

0xb1de,	// (0x000583fa) status_small_pane

0xb1e6,	// (0x00058402) control_pane

0x9be4,	// (0x00056e00) stacon_bottom_pane

0xb1ee,	// (0x0005840a) list_single_mce_smart_pane_t1_ParamLimits

0xb1ee,	// (0x0005840a) list_single_mce_smart_pane_t1

0xb201,	// (0x0005841d) list_single_mce_smart_pane_t2_ParamLimits

0xb201,	// (0x0005841d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005c5e6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005c5e6) list_single_mce_smart_pane_t

0x3321,	// (0x0005053d) compass_pane

0x332a,	// (0x00050546) main_location2_pane_t1

0x333c,	// (0x00050558) main_location2_pane_t2

0x334e,	// (0x0005056a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005c5eb) main_location2_pane_t

0xb220,	// (0x0005843c) compass_pane_g1_ParamLimits

0xb220,	// (0x0005843c) compass_pane_g1

0x3392,	// (0x000505ae) compass_pane_t1

0x33a1,	// (0x000505bd) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005c5f4) compass_pane_t

0x33e8,	// (0x00050604) text_secondary_cp61

0xb29e,	// (0x000584ba) navi_pane_cams_g5

0xb334,	// (0x00058550) navi_pane_im_t1

0xb342,	// (0x0005855e) navi_pane_mp_g1_ParamLimits

0xb342,	// (0x0005855e) navi_pane_mp_g1

0xb356,	// (0x00058572) navi_pane_mp_g2_ParamLimits

0xb356,	// (0x00058572) navi_pane_mp_g2

0xb362,	// (0x0005857e) navi_pane_mp_g3_ParamLimits

0xb362,	// (0x0005857e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005c608) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005c608) navi_pane_mp_g

0xb36e,	// (0x0005858a) navi_pane_mp_t1

0xb37c,	// (0x00058598) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005c60f) navi_pane_mp_t

0xb3e7,	// (0x00058603) navi_pane_vt_g1

0xb36e,	// (0x0005858a) navi_pane_vt_t1

0xb3ef,	// (0x0005860b) navi_slider_pane

0xa9b6,	// (0x00057bd2) zooming_pane

0xb3ff,	// (0x0005861b) navi_slider_pane_g1

0x9e15,	// (0x00057031) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005c616) navi_slider_pane_g

0xb423,	// (0x0005863f) aid_levels_zoom

0xb42b,	// (0x00058647) zooming_pane_g1

0xb433,	// (0x0005864f) zooming_pane_g2

0xb433,	// (0x0005864f) zooming_pane_g3

0x0002,

0xf409,	// (0x0005c625) zooming_pane_g

0xb43b,	// (0x00058657) level_10_zoom

0xb444,	// (0x00058660) level_11_zoom

0xb44d,	// (0x00058669) level_1_zoom

0xb456,	// (0x00058672) level_2_zoom

0xb45f,	// (0x0005867b) level_3_zoom

0xb468,	// (0x00058684) level_4_zoom

0xb471,	// (0x0005868d) level_5_zoom

0xb47a,	// (0x00058696) level_6_zoom

0xb483,	// (0x0005869f) level_7_zoom

0xb48c,	// (0x000586a8) level_8_zoom

0xb495,	// (0x000586b1) level_9_zoom

0xb4a6,	// (0x000586c2) popup_phob_thumbnail_window_g1

0xb4ae,	// (0x000586ca) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005c62c) popup_phob_thumbnail_window_g

0xc7eb,	// (0x00059a07) level_1_location

0xc7f3,	// (0x00059a0f) level_2_location

0xc7fb,	// (0x00059a17) level_3_location

0xc803,	// (0x00059a1f) level_4_location

0xa9b6,	// (0x00057bd2) level_5_location

0x3439,	// (0x00050655) mce_icon_pane_g1

0x3443,	// (0x0005065f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005c631) mce_icon_pane_g

0x344b,	// (0x00050667) main_mup_pane_g1_ParamLimits

0x344b,	// (0x00050667) main_mup_pane_g1

0x3461,	// (0x0005067d) main_mup_pane_g2_ParamLimits

0x3461,	// (0x0005067d) main_mup_pane_g2

0x3473,	// (0x0005068f) main_mup_pane_g3_ParamLimits

0x3473,	// (0x0005068f) main_mup_pane_g3

0x3485,	// (0x000506a1) main_mup_pane_g4_ParamLimits

0x3485,	// (0x000506a1) main_mup_pane_g4

0x349d,	// (0x000506b9) main_mup_pane_g5_ParamLimits

0x349d,	// (0x000506b9) main_mup_pane_g5

0x34b9,	// (0x000506d5) main_mup_pane_g6_ParamLimits

0x34b9,	// (0x000506d5) main_mup_pane_g6

0x34d1,	// (0x000506ed) main_mup_pane_g7_ParamLimits

0x34d1,	// (0x000506ed) main_mup_pane_g7

0x34e9,	// (0x00050705) main_mup_pane_g8_ParamLimits

0x34e9,	// (0x00050705) main_mup_pane_g8

0x3501,	// (0x0005071d) main_mup_pane_g9_ParamLimits

0x3501,	// (0x0005071d) main_mup_pane_g9

0x351b,	// (0x00050737) main_mup_pane_g10_ParamLimits

0x351b,	// (0x00050737) main_mup_pane_g10

0x3535,	// (0x00050751) main_mup_pane_g11_ParamLimits

0x3535,	// (0x00050751) main_mup_pane_g11

0x3549,	// (0x00050765) main_mup_pane_g12_ParamLimits

0x3549,	// (0x00050765) main_mup_pane_g12

0x355f,	// (0x0005077b) main_mup_pane_g13_ParamLimits

0x355f,	// (0x0005077b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005c636) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005c636) main_mup_pane_g

0x3573,	// (0x0005078f) main_mup_pane_t1_ParamLimits

0x3573,	// (0x0005078f) main_mup_pane_t1

0x358d,	// (0x000507a9) main_mup_pane_t2_ParamLimits

0x358d,	// (0x000507a9) main_mup_pane_t2

0x35a5,	// (0x000507c1) main_mup_pane_t3_ParamLimits

0x35a5,	// (0x000507c1) main_mup_pane_t3

0x35bd,	// (0x000507d9) main_mup_pane_t4_ParamLimits

0x35bd,	// (0x000507d9) main_mup_pane_t4

0x35db,	// (0x000507f7) main_mup_pane_t5_ParamLimits

0x35db,	// (0x000507f7) main_mup_pane_t5

0x35f0,	// (0x0005080c) main_mup_pane_t6_ParamLimits

0x35f0,	// (0x0005080c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c651) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c651) main_mup_pane_t

0x3602,	// (0x0005081e) mup_progress_pane_ParamLimits

0x3602,	// (0x0005081e) mup_progress_pane

0x360e,	// (0x0005082a) mup_visualizer_pane_ParamLimits

0x360e,	// (0x0005082a) mup_visualizer_pane

0x3642,	// (0x0005085e) mup_volume_pane_ParamLimits

0x3642,	// (0x0005085e) mup_volume_pane

0xb4b6,	// (0x000586d2) mup_visualizer_pane_g1_ParamLimits

0xb4b6,	// (0x000586d2) mup_visualizer_pane_g1

0xb4b6,	// (0x000586d2) mup_visualizer_pane_g2_ParamLimits

0xb4b6,	// (0x000586d2) mup_visualizer_pane_g2

0xb220,	// (0x0005843c) mup_visualizer_pane_g3_ParamLimits

0xb220,	// (0x0005843c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c65e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c65e) mup_visualizer_pane_g

0xa816,	// (0x00057a32) mup_volume_pane_g1

0xb4cc,	// (0x000586e8) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c665) mup_volume_pane_g

0xa816,	// (0x00057a32) mup_progress_pane_g1

0xb4d5,	// (0x000586f1) mup_progress_pane_g2

0xb4de,	// (0x000586fa) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c66a) mup_progress_pane_g

0x9be4,	// (0x00056e00) bg_popup_window_pane_cp05

0xb4e7,	// (0x00058703) heading_pane_cp02_ParamLimits

0xb4e7,	// (0x00058703) heading_pane_cp02

0xb501,	// (0x0005871d) list_popup_blid_pane

0xb509,	// (0x00058725) list_blid_sat_info_pane_ParamLimits

0xb509,	// (0x00058725) list_blid_sat_info_pane

0xb51c,	// (0x00058738) list_blid_sat_info_pane_g1

0xb524,	// (0x00058740) list_blid_sat_info_pane_t1

0x3758,	// (0x00050974) mup_equalizer_pane_ParamLimits

0x3758,	// (0x00050974) mup_equalizer_pane

0x3771,	// (0x0005098d) mup_equalizer_pane_cp1_ParamLimits

0x3771,	// (0x0005098d) mup_equalizer_pane_cp1

0x378e,	// (0x000509aa) mup_equalizer_pane_cp2_ParamLimits

0x378e,	// (0x000509aa) mup_equalizer_pane_cp2

0x37ab,	// (0x000509c7) mup_equalizer_pane_cp3_ParamLimits

0x37ab,	// (0x000509c7) mup_equalizer_pane_cp3

0x37cc,	// (0x000509e8) mup_equalizer_pane_cp4_ParamLimits

0x37cc,	// (0x000509e8) mup_equalizer_pane_cp4

0x37ed,	// (0x00050a09) mup_equalizer_pane_cp5

0x3801,	// (0x00050a1d) mup_equalizer_pane_cp6

0x3815,	// (0x00050a31) mup_equalizer_pane_cp7

0xc6c9,	// (0x000598e5) bg_popup_call_poc_act_pane_g9

0xc6d1,	// (0x000598ed) bg_popup_call_poc_act_pane_g10

0xc6d9,	// (0x000598f5) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6f0,	// (0x0005790c) mup_scale_pane

0xa816,	// (0x00057a32) mup_scale_pane_g1

0xb532,	// (0x0005874e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c686) mup_scale_pane_g

0xb556,	// (0x00058772) msg_data_pane

0xb55e,	// (0x0005877a) scroll_pane_cp017

0x030b,	// (0x0004d527) bg_list_pane_cp04_ParamLimits

0x030b,	// (0x0004d527) bg_list_pane_cp04

0xb566,	// (0x00058782) msg_data_pane_g1

0x3843,	// (0x00050a5f) msg_data_pane_g2

0x384b,	// (0x00050a67) msg_data_pane_g3

0x3853,	// (0x00050a6f) msg_data_pane_g4

0x385b,	// (0x00050a77) msg_data_pane_g5

0x3863,	// (0x00050a7f) msg_data_pane_g6

0x386b,	// (0x00050a87) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c695) msg_data_pane_g

0x0323,	// (0x0004d53f) msg_text_pane_ParamLimits

0x0323,	// (0x0004d53f) msg_text_pane

0x3873,	// (0x00050a8f) qrid_highlight_pane_cp011_ParamLimits

0x3873,	// (0x00050a8f) qrid_highlight_pane_cp011

0x9be4,	// (0x00056e00) msg_body_pane

0x9be4,	// (0x00056e00) msg_header_pane

0xb577,	// (0x00058793) input_focus_pane_cp07

0x3889,	// (0x00050aa5) msg_header_pane_t1_ParamLimits

0x3889,	// (0x00050aa5) msg_header_pane_t1

0x389b,	// (0x00050ab7) msg_header_pane_t2_ParamLimits

0x389b,	// (0x00050ab7) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c6a9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c6a9) msg_header_pane_t

0xb58c,	// (0x000587a8) msg_body_pane_g1

0x38ad,	// (0x00050ac9) msg_body_pane_t1_ParamLimits

0x38ad,	// (0x00050ac9) msg_body_pane_t1

0x38de,	// (0x00050afa) msg_body_pane_t2_ParamLimits

0x38de,	// (0x00050afa) msg_body_pane_t2

0x38f0,	// (0x00050b0c) msg_body_pane_t3_ParamLimits

0x38f0,	// (0x00050b0c) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c6ae) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c6ae) msg_body_pane_t

0x393c,	// (0x00050b58) main_viewer_pane_g1_ParamLimits

0x393c,	// (0x00050b58) main_viewer_pane_g1

0x394a,	// (0x00050b66) main_viewer_pane_g2_ParamLimits

0x394a,	// (0x00050b66) main_viewer_pane_g2

0x3958,	// (0x00050b74) main_viewer_pane_g3_ParamLimits

0x3958,	// (0x00050b74) main_viewer_pane_g3

0x3967,	// (0x00050b83) main_viewer_pane_g4_ParamLimits

0x3967,	// (0x00050b83) main_viewer_pane_g4

0x9e3f,	// (0x0005705b) main_viewer_pane_g5_ParamLimits

0x9e3f,	// (0x0005705b) main_viewer_pane_g5

0x9e3f,	// (0x0005705b) main_viewer_pane_g7_ParamLimits

0x9e3f,	// (0x0005705b) main_viewer_pane_g7

0x9e51,	// (0x0005706d) main_viewer_pane_g8_ParamLimits

0x9e51,	// (0x0005706d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c6be) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c6be) main_viewer_pane_g

0xb594,	// (0x000587b0) viewer_content_pane_ParamLimits

0xb594,	// (0x000587b0) viewer_content_pane

0x39a3,	// (0x00050bbf) main_postcard_pane_g1_ParamLimits

0x39a3,	// (0x00050bbf) main_postcard_pane_g1

0x39b9,	// (0x00050bd5) main_postcard_pane_g2_ParamLimits

0x39b9,	// (0x00050bd5) main_postcard_pane_g2

0x39cf,	// (0x00050beb) main_postcard_pane_g3_ParamLimits

0x39cf,	// (0x00050beb) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c6cf) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c6cf) main_postcard_pane_g

0x39e6,	// (0x00050c02) main_postcard_pane_g4

0xc8eb,	// (0x00059b07) smil_status_volume_pane_g2

0x3a29,	// (0x00050c45) postcard_pane_ParamLimits

0x3a29,	// (0x00050c45) postcard_pane

0xb5a2,	// (0x000587be) postcard_pane_g1_ParamLimits

0xb5a2,	// (0x000587be) postcard_pane_g1

0x3a6b,	// (0x00050c87) postcard_pane_g2_ParamLimits

0x3a6b,	// (0x00050c87) postcard_pane_g2

0x3a77,	// (0x00050c93) postcard_pane_g3_ParamLimits

0x3a77,	// (0x00050c93) postcard_pane_g3

0xb5b0,	// (0x000587cc) postcard_pane_g4_ParamLimits

0xb5b0,	// (0x000587cc) postcard_pane_g4

0x3a83,	// (0x00050c9f) postcard_pane_g5_ParamLimits

0x3a83,	// (0x00050c9f) postcard_pane_g5

0x3a98,	// (0x00050cb4) postcard_pane_g6_ParamLimits

0x3a98,	// (0x00050cb4) postcard_pane_g6

0xb5a2,	// (0x000587be) postcard_pane_g7_ParamLimits

0xb5a2,	// (0x000587be) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c6dc) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c6dc) postcard_pane_g

0x3aac,	// (0x00050cc8) main_mp2_pane_g1_ParamLimits

0x3aac,	// (0x00050cc8) main_mp2_pane_g1

0x3ab8,	// (0x00050cd4) main_mp2_pane_g2_ParamLimits

0x3ab8,	// (0x00050cd4) main_mp2_pane_g2

0x3ac4,	// (0x00050ce0) main_mp2_pane_g3_ParamLimits

0x3ac4,	// (0x00050ce0) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c6eb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c6eb) main_mp2_pane_g

0x3ad0,	// (0x00050cec) main_mp2_pane_t1_ParamLimits

0x3ad0,	// (0x00050cec) main_mp2_pane_t1

0x3ae5,	// (0x00050d01) main_mp2_pane_t2_ParamLimits

0x3ae5,	// (0x00050d01) main_mp2_pane_t2

0x3af7,	// (0x00050d13) main_mp2_pane_t3_ParamLimits

0x3af7,	// (0x00050d13) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c6f2) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c6f2) main_mp2_pane_t

0xb5be,	// (0x000587da) pec_content_pane_ParamLimits

0xb5be,	// (0x000587da) pec_content_pane

0xab5f,	// (0x00057d7b) scroll_pane_cp015

0xb5d0,	// (0x000587ec) pec_attribute_pane_ParamLimits

0xb5d0,	// (0x000587ec) pec_attribute_pane

0x3b09,	// (0x00050d25) pec_content_pane_g1_ParamLimits

0x3b09,	// (0x00050d25) pec_content_pane_g1

0xb5e0,	// (0x000587fc) pec_content_pane_t1_ParamLimits

0xb5e0,	// (0x000587fc) pec_content_pane_t1

0xb5f2,	// (0x0005880e) pec_content_pane_t2_ParamLimits

0xb5f2,	// (0x0005880e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c6f9) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c6f9) pec_content_pane_t

0x3b15,	// (0x00050d31) list_single_graphic_pane_cp01_ParamLimits

0x3b15,	// (0x00050d31) list_single_graphic_pane_cp01

0xa6f0,	// (0x0005790c) bg_popup_sub_pane_cp04

0xb604,	// (0x00058820) popup_mup_playback_window_g1

0xb610,	// (0x0005882c) popup_mup_playback_window_t1

0xb625,	// (0x00058841) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c6fe) popup_mup_playback_window_t

0xb65c,	// (0x00058878) main_image_pane_g1_ParamLimits

0xb65c,	// (0x00058878) main_image_pane_g1

0xb69f,	// (0x000588bb) scroll_pane_cp018_ParamLimits

0xb69f,	// (0x000588bb) scroll_pane_cp018

0xb6b7,	// (0x000588d3) scroll_pane_cp016_ParamLimits

0xb6b7,	// (0x000588d3) scroll_pane_cp016

0x3be3,	// (0x00050dff) smil2_image_pane_ParamLimits

0x3be3,	// (0x00050dff) smil2_image_pane

0x3c13,	// (0x00050e2f) smil2_root_pane_ParamLimits

0x3c13,	// (0x00050e2f) smil2_root_pane

0x3c4b,	// (0x00050e67) smil2_text_pane_ParamLimits

0x3c4b,	// (0x00050e67) smil2_text_pane

0x9be4,	// (0x00056e00) bg_list_pane_cp06

0xb6f3,	// (0x0005890f) grid_radio_pane

0x9be4,	// (0x00056e00) bg_popup_window_pane_cp06

0xb6fb,	// (0x00058917) main_fmradio_pane_t1

0xb09c,	// (0x000582b8) heading_pane_cp04

0xb709,	// (0x00058925) main_fmradio_pane_t2

0xc721,	// (0x0005993d) popup_cale_lunar_info_window_g1

0xb717,	// (0x00058933) main_fmradio_pane_t3

0xc729,	// (0x00059945) popup_cale_lunar_info_window_g2

0xb725,	// (0x00058941) main_fmradio_pane_t4

0x0001,

0xb733,	// (0x0005894f) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0005c7ec) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c713) main_fmradio_pane_t

0xb741,	// (0x0005895d) wait_bar_pane_cp03

0xb749,	// (0x00058965) cell_fmradio_pane_ParamLimits

0xb749,	// (0x00058965) cell_fmradio_pane

0xb5a2,	// (0x000587be) cell_fmradio_pane_g1_ParamLimits

0xb5a2,	// (0x000587be) cell_fmradio_pane_g1

0x9be4,	// (0x00056e00) grid_highlight_pane_cp011

0xb75c,	// (0x00058978) poc_content_pane_ParamLimits

0xb75c,	// (0x00058978) poc_content_pane

0xb76e,	// (0x0005898a) scroll_pane_cp019

0x3ccb,	// (0x00050ee7) popup_call_poc_act_window_ParamLimits

0x3ccb,	// (0x00050ee7) popup_call_poc_act_window

0x3cef,	// (0x00050f0b) popup_call_poc_inact_window_ParamLimits

0x3cef,	// (0x00050f0b) popup_call_poc_inact_window

0xf594,	// (0x0005c7b0) bg_popup_call_poc_act_pane_g

0xc6e1,	// (0x000598fd) bg_popup_call_poc_inact_pane_g1

0xc6e9,	// (0x00059905) bg_popup_call_poc_inact_pane_g2

0xb776,	// (0x00058992) popup_call_poc_act_window_g2

0xc6f1,	// (0x0005990d) bg_popup_call_poc_inact_pane_g3

0xc671,	// (0x0005988d) bg_popup_call_poc_inact_pane_g4

0xc6f9,	// (0x00059915) bg_popup_call_poc_inact_pane_g5

0xb77e,	// (0x0005899a) popup_call_poc_act_window_t1_ParamLimits

0xb77e,	// (0x0005899a) popup_call_poc_act_window_t1

0xb7a6,	// (0x000589c2) popup_call_poc_act_window_t2_ParamLimits

0xb7a6,	// (0x000589c2) popup_call_poc_act_window_t2

0xb7ce,	// (0x000589ea) popup_call_poc_act_window_t3_ParamLimits

0xb7ce,	// (0x000589ea) popup_call_poc_act_window_t3

0xb7f6,	// (0x00058a12) popup_call_poc_act_window_t4_ParamLimits

0xb7f6,	// (0x00058a12) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c71e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c71e) popup_call_poc_act_window_t

0xc701,	// (0x0005991d) bg_popup_call_poc_inact_pane_g6

0xc709,	// (0x00059925) bg_popup_call_poc_inact_pane_g7

0xc711,	// (0x0005992d) bg_popup_call_poc_inact_pane_g8

0xb808,	// (0x00058a24) popup_call_poc_inact_window_g2

0xc719,	// (0x00059935) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0005c7c7) bg_popup_call_poc_inact_pane_g

0xb810,	// (0x00058a2c) popup_call_poc_inact_window_t1_ParamLimits

0xb810,	// (0x00058a2c) popup_call_poc_inact_window_t1

0xb825,	// (0x00058a41) popup_call_poc_inact_window_t2_ParamLimits

0xb825,	// (0x00058a41) popup_call_poc_inact_window_t2

0xb83a,	// (0x00058a56) popup_call_poc_inact_window_t3_ParamLimits

0xb83a,	// (0x00058a56) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c727) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c727) popup_call_poc_inact_window_t

0xc85e,	// (0x00059a7a) context_pane_ParamLimits

0x4517,	// (0x00051733) signal_pane_ParamLimits

0xa9b6,	// (0x00057bd2) main_call2_pane

0x9e96,	// (0x000570b2) popup_phob_thumbnail2_window_ParamLimits

0x9e96,	// (0x000570b2) popup_phob_thumbnail2_window

0x9e27,	// (0x00057043) aid_hotspot_pointer_arrow_pane

0x9e2f,	// (0x0005704b) aid_hotspot_pointer_hand_pane

0x4039,	// (0x00051255) phob_pre_status_pane_g5

0x1d7a,	// (0x0004ef96) cams_zoom_pane_ParamLimits

0x1d89,	// (0x0004efa5) image_vga_pane_ParamLimits

0x1da3,	// (0x0004efbf) main_camera_pane_g1_ParamLimits

0x1db5,	// (0x0004efd1) main_camera_pane_g2_ParamLimits

0x1dc5,	// (0x0004efe1) main_camera_pane_g3_ParamLimits

0x1dd5,	// (0x0004eff1) main_camera_pane_g4_ParamLimits

0x1de5,	// (0x0004f001) main_camera_pane_g5_ParamLimits

0x1df5,	// (0x0004f011) main_camera_pane_g6_ParamLimits

0x1e05,	// (0x0004f021) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005c426) main_camera_pane_g_ParamLimits

0x1e15,	// (0x0004f031) main_camera_pane_t1_ParamLimits

0x1e2b,	// (0x0004f047) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005c437) main_camera_pane_t_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_preview_window_pane_cp01

0xb84f,	// (0x00058a6b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb84f,	// (0x00058a6b) popup_phob_thumbnail2_window_g1

0x9be4,	// (0x00056e00) call2_cli_visual_pane

0x3d23,	// (0x00050f3f) popup_call2_audio_conf_window_ParamLimits

0x3d23,	// (0x00050f3f) popup_call2_audio_conf_window

0x3d43,	// (0x00050f5f) popup_call2_audio_first_window_ParamLimits

0x3d43,	// (0x00050f5f) popup_call2_audio_first_window

0x3dd9,	// (0x00050ff5) popup_call2_audio_in_window_ParamLimits

0x3dd9,	// (0x00050ff5) popup_call2_audio_in_window

0x3e21,	// (0x0005103d) popup_call2_audio_out_window_ParamLimits

0x3e21,	// (0x0005103d) popup_call2_audio_out_window

0x3e8b,	// (0x000510a7) popup_call2_audio_second_window_ParamLimits

0x3e8b,	// (0x000510a7) popup_call2_audio_second_window

0x3ef1,	// (0x0005110d) popup_call2_audio_wait_window_ParamLimits

0x3ef1,	// (0x0005110d) popup_call2_audio_wait_window

0x9be4,	// (0x00056e00) bg_popup_call2_act_pane_cp03

0xa6d2,	// (0x000578ee) list_conf_pane_cp

0xb85b,	// (0x00058a77) popup_call2_audio_conf_window_t1

0xb869,	// (0x00058a85) list_single_graphic_popup_conf2_pane_ParamLimits

0xb869,	// (0x00058a85) list_single_graphic_popup_conf2_pane

0xb10c,	// (0x00058328) list_highlight_pane_cp04

0xb87c,	// (0x00058a98) list_single_graphic_popup_conf2_pane_g1

0xb11d,	// (0x00058339) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c72e) list_single_graphic_popup_conf2_pane_g

0xb886,	// (0x00058aa2) list_single_graphic_popup_conf2_pane_t1

0xb894,	// (0x00058ab0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb894,	// (0x00058ab0) bg_popup_call2_act_pane_cp01

0xb91e,	// (0x00058b3a) call_type_pane_cp05_ParamLimits

0xb91e,	// (0x00058b3a) call_type_pane_cp05

0xb972,	// (0x00058b8e) popup_call2_audio_second_window_g1_ParamLimits

0xb972,	// (0x00058b8e) popup_call2_audio_second_window_g1

0xb9c6,	// (0x00058be2) popup_call2_audio_second_window_g2_ParamLimits

0xb9c6,	// (0x00058be2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c733) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c733) popup_call2_audio_second_window_g

0xba2b,	// (0x00058c47) popup_call2_audio_second_window_t1_ParamLimits

0xba2b,	// (0x00058c47) popup_call2_audio_second_window_t1

0xbae6,	// (0x00058d02) popup_call2_audio_second_window_t2_ParamLimits

0xbae6,	// (0x00058d02) popup_call2_audio_second_window_t2

0xbb39,	// (0x00058d55) popup_call2_audio_second_window_t3_ParamLimits

0xbb39,	// (0x00058d55) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c73a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c73a) popup_call2_audio_second_window_t

0x9be4,	// (0x00056e00) bg_popup_call2_in_pane_cp02

0x9bee,	// (0x00056e0a) call_type_pane_cp04

0x9bf6,	// (0x00056e12) popup_call2_audio_wait_window_g1

0x9bfe,	// (0x00056e1a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005c315) popup_call2_audio_wait_window_g

0x9c06,	// (0x00056e22) popup_call2_audio_wait_window_t3

0xbc2c,	// (0x00058e48) bg_popup_call2_act_pane_ParamLimits

0xbc2c,	// (0x00058e48) bg_popup_call2_act_pane

0xbcec,	// (0x00058f08) call_type_pane_cp03_ParamLimits

0xbcec,	// (0x00058f08) call_type_pane_cp03

0xbd50,	// (0x00058f6c) popup_call2_audio_first_window_g1_ParamLimits

0xbd50,	// (0x00058f6c) popup_call2_audio_first_window_g1

0xbdc0,	// (0x00058fdc) popup_call2_audio_first_window_g2_ParamLimits

0xbdc0,	// (0x00058fdc) popup_call2_audio_first_window_g2

0xb4b6,	// (0x000586d2) popup_call2_audio_first_window_g3_ParamLimits

0xb4b6,	// (0x000586d2) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c743) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c743) popup_call2_audio_first_window_g

0xbe9e,	// (0x000590ba) popup_call2_audio_first_window_t1_ParamLimits

0xbe9e,	// (0x000590ba) popup_call2_audio_first_window_t1

0xbfa1,	// (0x000591bd) popup_call2_audio_first_window_t4_ParamLimits

0xbfa1,	// (0x000591bd) popup_call2_audio_first_window_t4

0xc084,	// (0x000592a0) popup_call2_audio_first_window_t5_ParamLimits

0xc084,	// (0x000592a0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005c74e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005c74e) popup_call2_audio_first_window_t

0xa6e8,	// (0x00057904) bg_popup_call2_act_pane_g1

0xc731,	// (0x0005994d) popup_cale_lunar_info_window_t1

0xc73f,	// (0x0005995b) popup_cale_lunar_info_window_t2

0xc74d,	// (0x00059969) popup_cale_lunar_info_window_t3

0x9be4,	// (0x00056e00) bg_popup_call2_bubble_pane

0xc185,	// (0x000593a1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc185,	// (0x000593a1) bg_popup_call2_in_pane_cp01

0x98c0,	// (0x00056adc) call_type_pane_cp02

0xc1cd,	// (0x000593e9) popup_call2_audio_out_window_g1_ParamLimits

0xc1cd,	// (0x000593e9) popup_call2_audio_out_window_g1

0xc1f9,	// (0x00059415) popup_call2_audio_out_window_g2_ParamLimits

0xc1f9,	// (0x00059415) popup_call2_audio_out_window_g2

0xc221,	// (0x0005943d) popup_call2_audio_out_window_g3_ParamLimits

0xc221,	// (0x0005943d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005c757) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005c757) popup_call2_audio_out_window_g

0xc25c,	// (0x00059478) popup_call2_audio_out_window_t1_ParamLimits

0xc25c,	// (0x00059478) popup_call2_audio_out_window_t1

0xc2bb,	// (0x000594d7) popup_call2_audio_out_window_t2_ParamLimits

0xc2bb,	// (0x000594d7) popup_call2_audio_out_window_t2

0xc30f,	// (0x0005952b) popup_call2_audio_out_window_t3_ParamLimits

0xc30f,	// (0x0005952b) popup_call2_audio_out_window_t3

0xc325,	// (0x00059541) popup_call2_audio_out_window_t4_ParamLimits

0xc325,	// (0x00059541) popup_call2_audio_out_window_t4

0xc33b,	// (0x00059557) popup_call2_audio_out_window_t5_ParamLimits

0xc33b,	// (0x00059557) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005c760) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005c760) popup_call2_audio_out_window_t

0xc39f,	// (0x000595bb) bg_popup_call2_in_pane_ParamLimits

0xc39f,	// (0x000595bb) bg_popup_call2_in_pane

0xc3fb,	// (0x00059617) popup_call2_audio_in_window_g1_ParamLimits

0xc3fb,	// (0x00059617) popup_call2_audio_in_window_g1

0xc433,	// (0x0005964f) popup_call2_audio_in_window_g2_ParamLimits

0xc433,	// (0x0005964f) popup_call2_audio_in_window_g2

0xc46b,	// (0x00059687) popup_call2_audio_in_window_g3_ParamLimits

0xc46b,	// (0x00059687) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005c76d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005c76d) popup_call2_audio_in_window_g

0xc4c3,	// (0x000596df) popup_call2_audio_in_window_t1_ParamLimits

0xc4c3,	// (0x000596df) popup_call2_audio_in_window_t1

0xc543,	// (0x0005975f) popup_call2_audio_in_window_t2_ParamLimits

0xc543,	// (0x0005975f) popup_call2_audio_in_window_t2

0xc5c3,	// (0x000597df) popup_call2_audio_in_window_t3_ParamLimits

0xc5c3,	// (0x000597df) popup_call2_audio_in_window_t3

0xc5dd,	// (0x000597f9) popup_call2_audio_in_window_t4_ParamLimits

0xc5dd,	// (0x000597f9) popup_call2_audio_in_window_t4

0xc5ef,	// (0x0005980b) popup_call2_audio_in_window_t5_ParamLimits

0xc5ef,	// (0x0005980b) popup_call2_audio_in_window_t5

0xc604,	// (0x00059820) popup_call2_audio_in_window_t6_ParamLimits

0xc604,	// (0x00059820) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005c776) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005c776) popup_call2_audio_in_window_t

0xa6e8,	// (0x00057904) bg_popup_call2_in_pane_g1

0xc75b,	// (0x00059977) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0005c7f1) popup_cale_lunar_info_window_t

0xa6f0,	// (0x0005790c) bg_popup_call2_rect_pane_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_call2_rect_pane

0x9be4,	// (0x00056e00) call2_cli_visual_graphic_pane

0x9be4,	// (0x00056e00) call2_cli_visual_text_pane

0x9ebd,	// (0x000570d9) smil_status_volume_pane_g3

0x0002,

0xa816,	// (0x00057a32) call2_cli_visual_graphic_pane_g1

0xa816,	// (0x00057a32) call2_cli_visual_graphic_pane_g2

0xa816,	// (0x00057a32) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005c783) call2_cli_visual_graphic_pane_g

0xc619,	// (0x00059835) bg_popup_call2_rect_pane_g1

0xa8b4,	// (0x00057ad0) bg_popup_call2_rect_pane_g2

0xc621,	// (0x0005983d) bg_popup_call2_rect_pane_g3

0xc629,	// (0x00059845) bg_popup_call2_rect_pane_g4

0xc631,	// (0x0005984d) bg_popup_call2_rect_pane_g5

0xc639,	// (0x00059855) bg_popup_call2_rect_pane_g6

0xc641,	// (0x0005985d) bg_popup_call2_rect_pane_g7

0xc649,	// (0x00059865) bg_popup_call2_rect_pane_g8

0xc651,	// (0x0005986d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c78a) bg_popup_call2_rect_pane_g

0xc659,	// (0x00059875) bg_popup_call2_bubble_pane_g1

0xc661,	// (0x0005987d) bg_popup_call2_bubble_pane_g2

0xc669,	// (0x00059885) bg_popup_call2_bubble_pane_g3

0xc671,	// (0x0005988d) bg_popup_call2_bubble_pane_g4

0xc679,	// (0x00059895) bg_popup_call2_bubble_pane_g5

0xc681,	// (0x0005989d) bg_popup_call2_bubble_pane_g6

0xc689,	// (0x000598a5) bg_popup_call2_bubble_pane_g7

0xc691,	// (0x000598ad) bg_popup_call2_bubble_pane_g8

0xc699,	// (0x000598b5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005c79d) bg_popup_call2_bubble_pane_g

0x16d2,	// (0x0004e8ee) aid_cale_week_size_cell_pane

0x1e41,	// (0x0004f05d) aid_cams_cif_uncrop_pane_ParamLimits

0x1e41,	// (0x0004f05d) aid_cams_cif_uncrop_pane

0x1ff6,	// (0x0004f212) aid_cams_size_cell_ParamLimits

0x1ff6,	// (0x0004f212) aid_cams_size_cell

0x200a,	// (0x0004f226) grid_cams_pane_ParamLimits

0x2024,	// (0x0004f240) linegrid_cams_pane_ParamLimits

0x210a,	// (0x0004f326) call_video_pane_t1

0x2128,	// (0x0004f344) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005c48a) call_video_pane_t

0x254c,	// (0x0004f768) aid_cale_month_size_cell_pane_ParamLimits

0x254c,	// (0x0004f768) aid_cale_month_size_cell_pane

0xf61e,	// (0x0005c83a) smil_status_volume_pane_g

0x9eca,	// (0x000570e6) volume_smil_pane_ParamLimits

0x977b,	// (0x00056997) aid_popup2_width_pane

0x1656,	// (0x0004e872) cell_qdial_pane_g4_ParamLimits

0x1656,	// (0x0004e872) cell_qdial_pane_g4

0x3372,	// (0x0005058e) aid_blid_cardinal_pane_ParamLimits

0x337e,	// (0x0005059a) aid_blid_destination_pane_ParamLimits

0x337e,	// (0x0005059a) aid_blid_destination_pane

0xa6f0,	// (0x0005790c) bg_popup_call_poc_act_pane_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_call_poc_act_pane

0xa6f0,	// (0x0005790c) bg_popup_call_poc_inact_pane_ParamLimits

0xa6f0,	// (0x0005790c) bg_popup_call_poc_inact_pane

0xc6a1,	// (0x000598bd) bg_popup_call_poc_act_pane_g1

0xc6a9,	// (0x000598c5) bg_popup_call_poc_act_pane_g2

0xc6b1,	// (0x000598cd) bg_popup_call_poc_act_pane_g3

0xc671,	// (0x0005988d) bg_popup_call_poc_act_pane_g4

0xc679,	// (0x00059895) bg_popup_call_poc_act_pane_g5

0xc6b9,	// (0x000598d5) bg_popup_call_poc_act_pane_g6

0xc689,	// (0x000598a5) bg_popup_call_poc_act_pane_g7

0xc6c1,	// (0x000598dd) bg_popup_call_poc_act_pane_g8

0x9be4,	// (0x00056e00) main_usb_pane

0x9e71,	// (0x0005708d) popup_cale_lunar_info_window

0x23f2,	// (0x0004f60e) im_reading_pane_t1_ParamLimits

0xaab7,	// (0x00057cd3) list_im_pane_ParamLimits

0xaac8,	// (0x00057ce4) scroll_pane_cp07_ParamLimits

0x9be4,	// (0x00056e00) grid_highlight_pane_cp012

0xa6f0,	// (0x0005790c) mup_scale_pane_ParamLimits

0xb5a2,	// (0x000587be) main_usb_pane_g1_ParamLimits

0xb5a2,	// (0x000587be) main_usb_pane_g1

0x3f4e,	// (0x0005116a) main_usb_pane_g2_ParamLimits

0x3f4e,	// (0x0005116a) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0005c7da) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0005c7da) main_usb_pane_g

0x3f64,	// (0x00051180) main_usb_pane_t1_ParamLimits

0x3f64,	// (0x00051180) main_usb_pane_t1

0x3f76,	// (0x00051192) main_usb_pane_t2_ParamLimits

0x3f76,	// (0x00051192) main_usb_pane_t2

0x3f88,	// (0x000511a4) main_usb_pane_t3_ParamLimits

0x3f88,	// (0x000511a4) main_usb_pane_t3

0x3f9a,	// (0x000511b6) main_usb_pane_t4_ParamLimits

0x3f9a,	// (0x000511b6) main_usb_pane_t4

0x3fac,	// (0x000511c8) main_usb_pane_t5_ParamLimits

0x3fac,	// (0x000511c8) main_usb_pane_t5

0x3fbe,	// (0x000511da) main_usb_pane_t6_ParamLimits

0x3fbe,	// (0x000511da) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0005c7df) main_usb_pane_t_ParamLimits

0x3321,	// (0x0005053d) aid_text_placing

0x332a,	// (0x00050546) main_location2_pane_t1_ParamLimits

0x333c,	// (0x00050558) main_location2_pane_t2_ParamLimits

0x334e,	// (0x0005056a) main_location2_pane_t3_ParamLimits

0x3360,	// (0x0005057c) main_location2_pane_t4_ParamLimits

0x3360,	// (0x0005057c) main_location2_pane_t4

0xf3cf,	// (0x0005c5eb) main_location2_pane_t_ParamLimits

0xa72c,	// (0x00057948) find_pinb_pane_g2_ParamLimits

0xa72c,	// (0x00057948) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005c33b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005c33b) find_pinb_pane_g

0xa738,	// (0x00057954) find_pinb_pane_t1_ParamLimits

0xa74a,	// (0x00057966) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005c340) find_pinb_pane_t_ParamLimits

0x9be4,	// (0x00056e00) main_call3_pane

0x2a07,	// (0x0004fc23) cale_month_day_heading_pane_t1_ParamLimits

0x2a8d,	// (0x0004fca9) cale_month_day_heading_pane_t2_ParamLimits

0x2b1e,	// (0x0004fd3a) cale_month_day_heading_pane_t3_ParamLimits

0x2baf,	// (0x0004fdcb) cale_month_day_heading_pane_t4_ParamLimits

0x2c48,	// (0x0004fe64) cale_month_day_heading_pane_t5_ParamLimits

0x2ce9,	// (0x0004ff05) cale_month_day_heading_pane_t6_ParamLimits

0x2d8a,	// (0x0004ffa6) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005c4c2) cale_month_day_heading_pane_t_ParamLimits

0xad12,	// (0x00057f2e) smil_status_volume_pane

0x3a47,	// (0x00050c63) postcard_address_pane_ParamLimits

0x3a47,	// (0x00050c63) postcard_address_pane

0x3a59,	// (0x00050c75) postcard_message_pane_ParamLimits

0x3a59,	// (0x00050c75) postcard_message_pane

0x3f2b,	// (0x00051147) call2_cli_visual_pane_t1_ParamLimits

0x3f2b,	// (0x00051147) call2_cli_visual_pane_t1

0x4746,	// (0x00051962) postcard_message_pane_t1_ParamLimits

0x4746,	// (0x00051962) postcard_message_pane_t1

0x472f,	// (0x0005194b) postcard_address_pane_t1_ParamLimits

0x472f,	// (0x0005194b) postcard_address_pane_t1

0x471b,	// (0x00051937) popup_call3_audio_in_window_ParamLimits

0x471b,	// (0x00051937) popup_call3_audio_in_window

0x45a6,	// (0x000517c2) bg_popup_call3_in_pane_ParamLimits

0x45a6,	// (0x000517c2) bg_popup_call3_in_pane

0x461c,	// (0x00051838) popup_call3_audio_in_window_g1_ParamLimits

0x461c,	// (0x00051838) popup_call3_audio_in_window_g1

0x463c,	// (0x00051858) popup_call3_audio_in_window_g2_ParamLimits

0x463c,	// (0x00051858) popup_call3_audio_in_window_g2

0x465c,	// (0x00051878) popup_call3_audio_in_window_g3_ParamLimits

0x465c,	// (0x00051878) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0005c841) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0005c841) popup_call3_audio_in_window_g

0x468d,	// (0x000518a9) popup_call3_audio_in_window_t1_ParamLimits

0x468d,	// (0x000518a9) popup_call3_audio_in_window_t1

0x46cb,	// (0x000518e7) popup_call3_audio_in_window_t2_ParamLimits

0x46cb,	// (0x000518e7) popup_call3_audio_in_window_t2

0x4709,	// (0x00051925) popup_call3_audio_in_window_t3_ParamLimits

0x4709,	// (0x00051925) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0005c84a) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0005c84a) popup_call3_audio_in_window_t

0xa9b6,	// (0x00057bd2) bg_popup_call3_rect_pane

0xc619,	// (0x00059835) bg_popup_call3_rect_pane_g1

0xa8b4,	// (0x00057ad0) bg_popup_call3_rect_pane_g2

0xc621,	// (0x0005983d) bg_popup_call3_rect_pane_g3

0xc629,	// (0x00059845) bg_popup_call3_rect_pane_g4

0xc631,	// (0x0005984d) bg_popup_call3_rect_pane_g5

0xc639,	// (0x00059855) bg_popup_call3_rect_pane_g6

0xc641,	// (0x0005985d) bg_popup_call3_rect_pane_g7

0x3658,	// (0x00050874) mup_visualizer_osc_pane

0xb4c4,	// (0x000586e0) mup_visualizer_spec_pane

0x45d6,	// (0x000517f2) call3_video_qcif_pane_ParamLimits

0x45d6,	// (0x000517f2) call3_video_qcif_pane

0x45e9,	// (0x00051805) call3_video_qcif_uncrop_pane_ParamLimits

0x45e9,	// (0x00051805) call3_video_qcif_uncrop_pane

0x45f7,	// (0x00051813) call3_video_subqcif_pane_ParamLimits

0x45f7,	// (0x00051813) call3_video_subqcif_pane

0x460b,	// (0x00051827) call3_video_subqcif_uncrop_pane_ParamLimits

0x460b,	// (0x00051827) call3_video_subqcif_uncrop_pane

0x467c,	// (0x00051898) popup_call3_audio_in_window_g4_ParamLimits

0x467c,	// (0x00051898) popup_call3_audio_in_window_g4

0x4595,	// (0x000517b1) mup_spec_half_pane

0x459e,	// (0x000517ba) mup_spec_half_pane_cp

0xc8be,	// (0x00059ada) mup_osc_middle_pane

0xc8c7,	// (0x00059ae3) mup_visualizer_osc_pane_g1

0x4575,	// (0x00051791) mup_spec_bar_pane_ParamLimits

0x4575,	// (0x00051791) mup_spec_bar_pane

0xc8ab,	// (0x00059ac7) mup_spec_bar_pane_g1

0xc8b5,	// (0x00059ad1) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005c835) mup_spec_bar_pane_g

0x16d2,	// (0x0004e8ee) aid_cale_week_size_cell_pane_ParamLimits

0x16ec,	// (0x0004e908) bg_cale_heading_pane_ParamLimits

0xa90f,	// (0x00057b2b) bg_cale_pane_cp01_ParamLimits

0x1704,	// (0x0004e920) cale_week_corner_pane_ParamLimits

0x1723,	// (0x0004e93f) cale_week_day_heading_pane_ParamLimits

0x1740,	// (0x0004e95c) cale_week_scroll_pane_g1_ParamLimits

0x1753,	// (0x0004e96f) cale_week_scroll_pane_g2_ParamLimits

0x176b,	// (0x0004e987) cale_week_scroll_pane_g3_ParamLimits

0x1783,	// (0x0004e99f) cale_week_scroll_pane_g4_ParamLimits

0x179b,	// (0x0004e9b7) cale_week_scroll_pane_g5_ParamLimits

0x17bb,	// (0x0004e9d7) cale_week_scroll_pane_g6_ParamLimits

0x17db,	// (0x0004e9f7) cale_week_scroll_pane_g7_ParamLimits

0x17fb,	// (0x0004ea17) cale_week_scroll_pane_g8_ParamLimits

0x181f,	// (0x0004ea3b) cale_week_scroll_pane_g9_ParamLimits

0x1837,	// (0x0004ea53) cale_week_scroll_pane_g10_ParamLimits

0x184f,	// (0x0004ea6b) cale_week_scroll_pane_g11_ParamLimits

0x1867,	// (0x0004ea83) cale_week_scroll_pane_g12_ParamLimits

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g13_ParamLimits

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g14_ParamLimits

0x187f,	// (0x0004ea9b) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005c3cc) cale_week_scroll_pane_g_ParamLimits

0x18bb,	// (0x0004ead7) cale_week_time_pane_ParamLimits

0x18df,	// (0x0004eafb) grid_cale_week_pane_ParamLimits

0xa92c,	// (0x00057b48) listscroll_cale_week_pane_t1

0xa93e,	// (0x00057b5a) scroll_pane_cp08_ParamLimits

0x25a1,	// (0x0004f7bd) cale_month_corner_pane_ParamLimits

0xace8,	// (0x00057f04) cale_month_pane_t1

0x29a5,	// (0x0004fbc1) cale_month_week_pane_ParamLimits

0x3152,	// (0x0005036e) popup_call_status_window_g1_ParamLimits

0x3166,	// (0x00050382) popup_call_status_window_g2_ParamLimits

0x317a,	// (0x00050396) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005c572) popup_call_status_window_g_ParamLimits

0xb08c,	// (0x000582a8) aid_call2_pane

0x034a,	// (0x0004d566) msg_header_pane_g1

0x3a47,	// (0x00050c63) postcard_address2_pane_ParamLimits

0x3a47,	// (0x00050c63) postcard_address2_pane

0x3a59,	// (0x00050c75) postcard_message2_pane_ParamLimits

0x3a59,	// (0x00050c75) postcard_message2_pane

0x4525,	// (0x00051741) message2_row_pane_ParamLimits

0x4525,	// (0x00051741) message2_row_pane

0x4542,	// (0x0005175e) address2_row_pane_ParamLimits

0x4542,	// (0x0005175e) address2_row_pane

0xc879,	// (0x00059a95) postcard_message2_row_pane_g1

0xc881,	// (0x00059a9d) postcard_message2_row_pane_t1

0xc879,	// (0x00059a95) address2_row_pane_g1

0xc881,	// (0x00059a9d) address2_row_pane_t1

0x1cf9,	// (0x0004ef15) aid_size_cell_vorec

0x9be4,	// (0x00056e00) main_rss_pane

0x4555,	// (0x00051771) rss_list_single_pane_ParamLimits

0x4555,	// (0x00051771) rss_list_single_pane

0xc88f,	// (0x00059aab) rss_list_single_pane_t1

0xc89d,	// (0x00059ab9) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0005c830) rss_list_single_pane_t

0x9be4,	// (0x00056e00) main_camera2_pane

0x9be4,	// (0x00056e00) main_video2_pane

0x47bf,	// (0x000519db) cams_zoom_pane_cp2_ParamLimits

0x47bf,	// (0x000519db) cams_zoom_pane_cp2

0x47df,	// (0x000519fb) image2_vga_pane_ParamLimits

0x47df,	// (0x000519fb) image2_vga_pane

0x4830,	// (0x00051a4c) main_camera2_pane_g1_ParamLimits

0x4830,	// (0x00051a4c) main_camera2_pane_g1

0x4850,	// (0x00051a6c) main_camera2_pane_g2_ParamLimits

0x4850,	// (0x00051a6c) main_camera2_pane_g2

0x4870,	// (0x00051a8c) main_camera2_pane_g3_ParamLimits

0x4870,	// (0x00051a8c) main_camera2_pane_g3

0x4890,	// (0x00051aac) main_camera2_pane_g4_ParamLimits

0x4890,	// (0x00051aac) main_camera2_pane_g4

0x48b0,	// (0x00051acc) main_camera2_pane_g5_ParamLimits

0x48b0,	// (0x00051acc) main_camera2_pane_g5

0x48d0,	// (0x00051aec) main_camera2_pane_g6_ParamLimits

0x48d0,	// (0x00051aec) main_camera2_pane_g6

0x48f0,	// (0x00051b0c) main_camera2_pane_g7_ParamLimits

0x48f0,	// (0x00051b0c) main_camera2_pane_g7

0x4910,	// (0x00051b2c) main_camera2_pane_g8_ParamLimits

0x4910,	// (0x00051b2c) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0005c851) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0005c851) main_camera2_pane_g

0x4950,	// (0x00051b6c) main_camera2_pane_t1_ParamLimits

0x4950,	// (0x00051b6c) main_camera2_pane_t1

0x4985,	// (0x00051ba1) main_camera2_pane_t2_ParamLimits

0x4985,	// (0x00051ba1) main_camera2_pane_t2

0x49ab,	// (0x00051bc7) main_camera2_pane_t3_ParamLimits

0x49ab,	// (0x00051bc7) main_camera2_pane_t3

0x4a09,	// (0x00051c25) main_camera2_pane_t4_ParamLimits

0x4a09,	// (0x00051c25) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0005c864) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0005c864) main_camera2_pane_t

0x4a9b,	// (0x00051cb7) cams_zoom_pane_cp4_ParamLimits

0x4a9b,	// (0x00051cb7) cams_zoom_pane_cp4

0x4ab1,	// (0x00051ccd) image2_cif_pane_ParamLimits

0x4ab1,	// (0x00051ccd) image2_cif_pane

0x4adc,	// (0x00051cf8) image2_subqcif_pane_ParamLimits

0x4adc,	// (0x00051cf8) image2_subqcif_pane

0x4af6,	// (0x00051d12) main_video2_pane_g1_ParamLimits

0x4af6,	// (0x00051d12) main_video2_pane_g1

0x4b10,	// (0x00051d2c) main_video2_pane_g2_ParamLimits

0x4b10,	// (0x00051d2c) main_video2_pane_g2

0x4b26,	// (0x00051d42) main_video2_pane_g3_ParamLimits

0x4b26,	// (0x00051d42) main_video2_pane_g3

0x4b3c,	// (0x00051d58) main_video2_pane_g4_ParamLimits

0x4b3c,	// (0x00051d58) main_video2_pane_g4

0x4b52,	// (0x00051d6e) main_video2_pane_g5_ParamLimits

0x4b52,	// (0x00051d6e) main_video2_pane_g5

0x4b68,	// (0x00051d84) main_video2_pane_g6_ParamLimits

0x4b68,	// (0x00051d84) main_video2_pane_g6

0x0005,

0xf657,	// (0x0005c873) main_video2_pane_g_ParamLimits

0xf657,	// (0x0005c873) main_video2_pane_g

0x4b82,	// (0x00051d9e) main_video2_pane_t1_ParamLimits

0x4b82,	// (0x00051d9e) main_video2_pane_t1

0x4ba6,	// (0x00051dc2) main_video2_pane_t2_ParamLimits

0x4ba6,	// (0x00051dc2) main_video2_pane_t2

0x4bf4,	// (0x00051e10) main_video2_pane_t3_ParamLimits

0x4bf4,	// (0x00051e10) main_video2_pane_t3

0x0002,

0xf664,	// (0x0005c880) main_video2_pane_t_ParamLimits

0xf664,	// (0x0005c880) main_video2_pane_t

0x4079,	// (0x00051295) call_muted_g2

0x0001,

0xf606,	// (0x0005c822) call_muted_g

0x9be4,	// (0x00056e00) main_mup2_pane

0x4c3c,	// (0x00051e58) main_mup2_pane_g1_ParamLimits

0x4c3c,	// (0x00051e58) main_mup2_pane_g1

0x4c48,	// (0x00051e64) main_mup2_pane_g2_ParamLimits

0x4c48,	// (0x00051e64) main_mup2_pane_g2

0x9f38,	// (0x00057154) main_mup_pane_g13_cp1

0x9f40,	// (0x0005715c) mup_volume_pane_cp1

0x4c64,	// (0x00051e80) main_mup2_pane_g4_ParamLimits

0x4c64,	// (0x00051e80) main_mup2_pane_g4

0x4c76,	// (0x00051e92) main_mup2_pane_g5_ParamLimits

0x4c76,	// (0x00051e92) main_mup2_pane_g5

0x4c88,	// (0x00051ea4) main_mup2_pane_g6_ParamLimits

0x4c88,	// (0x00051ea4) main_mup2_pane_g6

0x4c9a,	// (0x00051eb6) main_mup2_pane_g7_ParamLimits

0x4c9a,	// (0x00051eb6) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0005c887) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0005c887) main_mup2_pane_g

0x4cb2,	// (0x00051ece) main_mup2_pane_t1_ParamLimits

0x4cb2,	// (0x00051ece) main_mup2_pane_t1

0x4cc8,	// (0x00051ee4) main_mup2_pane_t2_ParamLimits

0x4cc8,	// (0x00051ee4) main_mup2_pane_t2

0x4cde,	// (0x00051efa) main_mup2_pane_t3_ParamLimits

0x4cde,	// (0x00051efa) main_mup2_pane_t3

0x4cf4,	// (0x00051f10) main_mup2_pane_t4_ParamLimits

0x4cf4,	// (0x00051f10) main_mup2_pane_t4

0x4d0c,	// (0x00051f28) main_mup2_pane_t5_ParamLimits

0x4d0c,	// (0x00051f28) main_mup2_pane_t5

0x4d24,	// (0x00051f40) main_mup2_pane_t6_ParamLimits

0x4d24,	// (0x00051f40) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0005c896) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0005c896) main_mup2_pane_t

0x4d54,	// (0x00051f70) mup2_visualizer_pane_ParamLimits

0x4d54,	// (0x00051f70) mup2_visualizer_pane

0x4d82,	// (0x00051f9e) mup_progress_pane_cp_ParamLimits

0x4d82,	// (0x00051f9e) mup_progress_pane_cp

0x9f23,	// (0x0005713f) mup_volume_pane_cp_ParamLimits

0x9f23,	// (0x0005713f) mup_volume_pane_cp

0x4d96,	// (0x00051fb2) mup2_visualizer_pane_g1_ParamLimits

0x4d96,	// (0x00051fb2) mup2_visualizer_pane_g1

0xc8fe,	// (0x00059b1a) mup2_visualizer_pane_g2_ParamLimits

0xc8fe,	// (0x00059b1a) mup2_visualizer_pane_g2

0x4dad,	// (0x00051fc9) mup2_visualizer_pane_g3_ParamLimits

0x4dad,	// (0x00051fc9) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0005c8a3) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0005c8a3) mup2_visualizer_pane_g

0xb6eb,	// (0x00058907) aid_size_cell_fmradio

0x422b,	// (0x00051447) aid_height_parent_landcape

0xab46,	// (0x00057d62) wml_content_pane_cp

0xab4e,	// (0x00057d6a) wml_tabs_pane

0xab57,	// (0x00057d73) popup_wml_miniature_window

0xab5f,	// (0x00057d7b) scroll_pane_cp021

0xab73,	// (0x00057d8f) wml_content_pane_comp8

0x9be4,	// (0x00056e00) bg_popup_sub_pane_cp05

0xc91c,	// (0x00059b38) popup_wml_miniature_window_g1

0xc924,	// (0x00059b40) wml_miniature_view_pane

0x4db9,	// (0x00051fd5) aid_size_wml_view

0x4dc1,	// (0x00051fdd) wml_miniature_view_pane_g1

0x4dca,	// (0x00051fe6) wml_miniature_view_pane_g2

0x4dd3,	// (0x00051fef) wml_miniature_view_pane_g3

0x4ddb,	// (0x00051ff7) wml_miniature_view_pane_g4

0x4de3,	// (0x00051fff) wml_miniature_view_pane_g5

0x4deb,	// (0x00052007) wml_miniature_view_pane_g6

0x4df3,	// (0x0005200f) wml_miniature_view_pane_g7

0x4dfb,	// (0x00052017) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0005c8aa) wml_miniature_view_pane_g

0xc92c,	// (0x00059b48) background_graphic_ParamLimits

0xc92c,	// (0x00059b48) background_graphic

0xc938,	// (0x00059b54) wml_tabs_2_pane

0xc941,	// (0x00059b5d) wml_tabs_3_pane_ParamLimits

0xc941,	// (0x00059b5d) wml_tabs_3_pane

0xc953,	// (0x00059b6f) wml_tabs_4_pane_ParamLimits

0xc953,	// (0x00059b6f) wml_tabs_4_pane

0xc969,	// (0x00059b85) wml_tabs_5_pane_ParamLimits

0xc969,	// (0x00059b85) wml_tabs_5_pane

0xc983,	// (0x00059b9f) wml_tabs_pane_g2_ParamLimits

0xc983,	// (0x00059b9f) wml_tabs_pane_g2

0xc997,	// (0x00059bb3) wml_tabs_pane_g3_ParamLimits

0xc997,	// (0x00059bb3) wml_tabs_pane_g3

0x4e03,	// (0x0005201f) wml_tabs_2_active_pane_ParamLimits

0x4e03,	// (0x0005201f) wml_tabs_2_active_pane

0x4e17,	// (0x00052033) wml_tabs_2_passive_pane_ParamLimits

0x4e17,	// (0x00052033) wml_tabs_2_passive_pane

0x4e2b,	// (0x00052047) wml_tabs_3_active_pane_cp_ParamLimits

0x4e2b,	// (0x00052047) wml_tabs_3_active_pane_cp

0x4e40,	// (0x0005205c) wml_tabs_3_passive_pane_ParamLimits

0x4e40,	// (0x0005205c) wml_tabs_3_passive_pane

0x4e53,	// (0x0005206f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e53,	// (0x0005206f) wml_tabs_3_passive_pane_cp

0x4e6a,	// (0x00052086) tabs_4_active_pane

0x4e72,	// (0x0005208e) tabs_4_passive_pane

0x4e7c,	// (0x00052098) tabs_4_passive_pane_cp

0x4e84,	// (0x000520a0) tabs_4_passive_pane_cp2

0x3f46,	// (0x00051162) aid_height_text

0x362a,	// (0x00050846) mup_volume_cont_pane_ParamLimits

0x362a,	// (0x00050846) mup_volume_cont_pane

0x12f7,	// (0x0004e513) aid_size_cell_pinb

0x1301,	// (0x0004e51d) aid_size_list_pinb

0x4d6e,	// (0x00051f8a) mup2_volume_cont_pane_ParamLimits

0x4d6e,	// (0x00051f8a) mup2_volume_cont_pane

0x9f0f,	// (0x0005712b) mup2_volume_cont_pane_g1_ParamLimits

0x9f0f,	// (0x0005712b) mup2_volume_cont_pane_g1

0x0fa9,	// (0x0004e1c5) aid_size_cell_touch_ParamLimits

0x0fa9,	// (0x0004e1c5) aid_size_cell_touch

0x11e6,	// (0x0004e402) touch_pane_ParamLimits

0x11e6,	// (0x0004e402) touch_pane

0x9769,	// (0x00056985) main_rss2_pane

0xc9b4,	// (0x00059bd0) listscroll_rss2_pane

0xc9bd,	// (0x00059bd9) rss2_navigation_pane

0xc9c5,	// (0x00059be1) list_rss2_pane

0xb1b1,	// (0x000583cd) scroll_pane_cp22

0xc9cd,	// (0x00059be9) rss2_navigation_pane_g1

0xc9d6,	// (0x00059bf2) rss2_navigation_pane_g2

0xc9de,	// (0x00059bfa) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0005c8bb) rss2_navigation_pane_g

0xc9e6,	// (0x00059c02) rss2_navigation_pane_t1

0x4e8e,	// (0x000520aa) rss2_list_single_pane_ParamLimits

0x4e8e,	// (0x000520aa) rss2_list_single_pane

0xc9f4,	// (0x00059c10) rss2_list_single_pane_t2

0xca02,	// (0x00059c1e) rss2_list_single_pane_t3_ParamLimits

0xca02,	// (0x00059c1e) rss2_list_single_pane_t3

0xca1f,	// (0x00059c3b) rss2_list_single_pane_t4

0x302e,	// (0x0005024a) smil_status_pane_g1

0xa55f,	// (0x0005777b) main_image2_pane_ParamLimits

0xa55f,	// (0x0005777b) main_image2_pane

0x4930,	// (0x00051b4c) main_camera2_pane_g9_ParamLimits

0x4930,	// (0x00051b4c) main_camera2_pane_g9

0x4a5e,	// (0x00051c7a) main_camera2_pane_t5_ParamLimits

0x4a5e,	// (0x00051c7a) main_camera2_pane_t5

0x9edf,	// (0x000570fb) main_camera2_pane_t6_ParamLimits

0x9edf,	// (0x000570fb) main_camera2_pane_t6

0x4ea4,	// (0x000520c0) main_image2_pane_g1_ParamLimits

0x4ea4,	// (0x000520c0) main_image2_pane_g1

0x3c81,	// (0x00050e9d) smil2_video_pane_ParamLimits

0x3c81,	// (0x00050e9d) smil2_video_pane

0x0fe1,	// (0x0004e1fd) aid_zoom_text_primary_cp

0x97c7,	// (0x000569e3) popup_preview_fixed_window

0xaaaf,	// (0x00057ccb) im_reading_pane_g1

0x47a7,	// (0x000519c3) cams2_bc_adjust_pane_cp_ParamLimits

0x47a7,	// (0x000519c3) cams2_bc_adjust_pane_cp

0x4a8d,	// (0x00051ca9) cams2_bc_adjust_pane_ParamLimits

0x4a8d,	// (0x00051ca9) cams2_bc_adjust_pane

0x9f48,	// (0x00057164) cams2_bc_adjust_pane_g1

0x9f50,	// (0x0005716c) cams2_slider_pane

0x9f59,	// (0x00057175) cams2_slider_pane_g1

0x9f62,	// (0x0005717e) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0005c8c2) cams2_slider_pane_g

0x13e9,	// (0x0004e605) calc_display_pane_ParamLimits

0x1411,	// (0x0004e62d) calc_paper_pane_ParamLimits

0x1434,	// (0x0004e650) grid_calc_pane_ParamLimits

0x9df8,	// (0x00057014) popup_clock_digital_window_t1_ParamLimits

0xb688,	// (0x000588a4) main_image_pane_t1

0x13cb,	// (0x0004e5e7) aid_size_cell_calc_ParamLimits

0x13cb,	// (0x0004e5e7) aid_size_cell_calc

0x4271,	// (0x0005148d) popup_blid_sat_info2_window_ParamLimits

0x4271,	// (0x0005148d) popup_blid_sat_info2_window

0xca35,	// (0x00059c51) aid_size_cell_blid

0xca3d,	// (0x00059c59) bg_popup_window_pane_cp07

0xca60,	// (0x00059c7c) grid_popup_blid_pane

0xca6a,	// (0x00059c86) heading_pane_cp05_ParamLimits

0xca6a,	// (0x00059c86) heading_pane_cp05

0xcb34,	// (0x00059d50) cell_popup_blid_pane_ParamLimits

0xcb34,	// (0x00059d50) cell_popup_blid_pane

0xcb58,	// (0x00059d74) cell_popup_blid_pane_g1

0xcb60,	// (0x00059d7c) cell_popup_blid_pane_t1

0x4d3e,	// (0x00051f5a) mup2_indicator_pane_ParamLimits

0x4d3e,	// (0x00051f5a) mup2_indicator_pane

0xa9b6,	// (0x00057bd2) mup2_visualizer_osc_pane

0xc90a,	// (0x00059b26) mup2_visualizer_spec_pane_ParamLimits

0xc90a,	// (0x00059b26) mup2_visualizer_spec_pane

0x4eba,	// (0x000520d6) mup2_spec_half_pane

0x4ec3,	// (0x000520df) mup2_spec_half_pane_cp

0x4ecb,	// (0x000520e7) mup2_spec_bar_pane_ParamLimits

0x4ecb,	// (0x000520e7) mup2_spec_bar_pane

0xc8ab,	// (0x00059ac7) mup2_spec_bar_pane_g1

0xc8b5,	// (0x00059ad1) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005c835) mup2_spec_bar_pane_g

0x4eeb,	// (0x00052107) mup2_osc_middle_pane

0xc8c7,	// (0x00059ae3) mup2_visualizer_osc_pane_g1

0x97f1,	// (0x00056a0d) popup_number_entry_window_t1_ParamLimits

0x9804,	// (0x00056a20) popup_number_entry_window_t2_ParamLimits

0x9816,	// (0x00056a32) popup_number_entry_window_t3_ParamLimits

0x1238,	// (0x0004e454) popup_number_entry_window_t5_ParamLimits

0x1238,	// (0x0004e454) popup_number_entry_window_t5

0xf0ca,	// (0x0005c2e6) popup_number_entry_window_t_ParamLimits

0x9828,	// (0x00056a44) text_title_cp2_ParamLimits

0x9e37,	// (0x00057053) aid_hotspot_pointer_text2_pane

0x9e5d,	// (0x00057079) main_viewer_pane_g9_ParamLimits

0x9e5d,	// (0x00057079) main_viewer_pane_g9

0xace8,	// (0x00057f04) cale_month_pane_t1_ParamLimits

0xad25,	// (0x00057f41) bg_cale_pane_ParamLimits

0xad3d,	// (0x00057f59) list_cale_pane_ParamLimits

0xad4e,	// (0x00057f6a) listscroll_cale_day_pane_t1

0xad60,	// (0x00057f7c) scroll_pane_cp09_ParamLimits

0x3660,	// (0x0005087c) main_mup_eq_pane_t1_ParamLimits

0x3660,	// (0x0005087c) main_mup_eq_pane_t1

0x367a,	// (0x00050896) main_mup_eq_pane_t2_ParamLimits

0x367a,	// (0x00050896) main_mup_eq_pane_t2

0x3694,	// (0x000508b0) main_mup_eq_pane_t3_ParamLimits

0x3694,	// (0x000508b0) main_mup_eq_pane_t3

0x36b0,	// (0x000508cc) main_mup_eq_pane_t4_ParamLimits

0x36b0,	// (0x000508cc) main_mup_eq_pane_t4

0x36cc,	// (0x000508e8) main_mup_eq_pane_t5_ParamLimits

0x36cc,	// (0x000508e8) main_mup_eq_pane_t5

0x36e8,	// (0x00050904) main_mup_eq_pane_t6_ParamLimits

0x36e8,	// (0x00050904) main_mup_eq_pane_t6

0x36fc,	// (0x00050918) main_mup_eq_pane_t7_ParamLimits

0x36fc,	// (0x00050918) main_mup_eq_pane_t7

0x3710,	// (0x0005092c) main_mup_eq_pane_t8_ParamLimits

0x3710,	// (0x0005092c) main_mup_eq_pane_t8

0x3724,	// (0x00050940) main_mup_eq_pane_t9_ParamLimits

0x3724,	// (0x00050940) main_mup_eq_pane_t9

0x373e,	// (0x0005095a) main_mup_eq_pane_t10_ParamLimits

0x373e,	// (0x0005095a) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c671) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c671) main_mup_eq_pane_t

0x37ed,	// (0x00050a09) mup_equalizer_pane_cp5_ParamLimits

0x3801,	// (0x00050a1d) mup_equalizer_pane_cp6_ParamLimits

0x3815,	// (0x00050a31) mup_equalizer_pane_cp7_ParamLimits

0x9769,	// (0x00056985) main_gallery_pane

0xc8d0,	// (0x00059aec) smil2_volume_pane

0xc8d8,	// (0x00059af4) smil_status_volume_pane_g1_ParamLimits

0xc8eb,	// (0x00059b07) smil_status_volume_pane_g2_ParamLimits

0x9ebd,	// (0x000570d9) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0005c83a) smil_status_volume_pane_g_ParamLimits

0xca3d,	// (0x00059c59) bg_popup_window_pane_cp07_ParamLimits

0xca4b,	// (0x00059c67) blid_firmament_pane

0x4ef4,	// (0x00052110) aid_size_cell_gallery_ParamLimits

0x4ef4,	// (0x00052110) aid_size_cell_gallery

0x4f0a,	// (0x00052126) grid_gallery_pane_ParamLimits

0x4f0a,	// (0x00052126) grid_gallery_pane

0x4f23,	// (0x0005213f) cell_gallery_pane_ParamLimits

0x4f23,	// (0x0005213f) cell_gallery_pane

0xcb6e,	// (0x00059d8a) bg_cell_gallery_focus_pane_ParamLimits

0xcb6e,	// (0x00059d8a) bg_cell_gallery_focus_pane

0xcb80,	// (0x00059d9c) cell_gallery_pane_g1_ParamLimits

0xcb80,	// (0x00059d9c) cell_gallery_pane_g1

0x4f6c,	// (0x00052188) cell_gallery_pane_g2_ParamLimits

0x4f6c,	// (0x00052188) cell_gallery_pane_g2

0x4f79,	// (0x00052195) cell_gallery_pane_g3_ParamLimits

0x4f79,	// (0x00052195) cell_gallery_pane_g3

0xcb8c,	// (0x00059da8) cell_gallery_pane_g4_ParamLimits

0xcb8c,	// (0x00059da8) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0005c8e8) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0005c8e8) cell_gallery_pane_g

0xcb98,	// (0x00059db4) bg_cell_gallery_focus_pane_g1

0xcba0,	// (0x00059dbc) bg_cell_gallery_focus_pane_g2

0xcba8,	// (0x00059dc4) bg_cell_gallery_focus_pane_g3

0xcbb0,	// (0x00059dcc) bg_cell_gallery_focus_pane_g4

0xcbb8,	// (0x00059dd4) bg_cell_gallery_focus_pane_g5

0xcbc0,	// (0x00059ddc) bg_cell_gallery_focus_pane_g6

0xcbc8,	// (0x00059de4) bg_cell_gallery_focus_pane_g7

0xcbd0,	// (0x00059dec) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0005c8f1) bg_cell_gallery_focus_pane_g

0xcbd8,	// (0x00059df4) aid_firma_cardinal

0xcbec,	// (0x00059e08) blid_firmament_pane_t1

0xcc03,	// (0x00059e1f) blid_firmament_pane_t2

0xcc1a,	// (0x00059e36) blid_firmament_pane_t3

0xcc31,	// (0x00059e4d) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0005c902) blid_firmament_pane_t

0xcc48,	// (0x00059e64) blid_sat_info_pane

0xcc58,	// (0x00059e74) blid_sat_info_pane_g1

0xcc58,	// (0x00059e74) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0005c90b) blid_sat_info_pane_g

0xcc62,	// (0x00059e7e) blid_sat_info_pane_t1

0xcc70,	// (0x00059e8c) smil2_volume_content_pane

0xcc79,	// (0x00059e95) smil2_volume_pane_g1

0xcc81,	// (0x00059e9d) smil2_volume_content_pane_g1

0xcc8a,	// (0x00059ea6) smil2_volume_content_pane_g2

0xcc93,	// (0x00059eaf) smil2_volume_content_pane_g3

0xcc9c,	// (0x00059eb8) smil2_volume_content_pane_g4

0xcca5,	// (0x00059ec1) smil2_volume_content_pane_g5

0xccae,	// (0x00059eca) smil2_volume_content_pane_g6

0xccb7,	// (0x00059ed3) smil2_volume_content_pane_g7

0xccc0,	// (0x00059edc) smil2_volume_content_pane_g8

0xccc9,	// (0x00059ee5) smil2_volume_content_pane_g9

0xccd2,	// (0x00059eee) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0005c910) smil2_volume_content_pane_g

0x1993,	// (0x0004ebaf) cale_week_day_heading_pane_t1_ParamLimits

0x19dd,	// (0x0004ebf9) cale_week_day_heading_pane_t2_ParamLimits

0x1a2c,	// (0x0004ec48) cale_week_day_heading_pane_t3_ParamLimits

0x1a7b,	// (0x0004ec97) cale_week_day_heading_pane_t4_ParamLimits

0x1aca,	// (0x0004ece6) cale_week_day_heading_pane_t5_ParamLimits

0x1b21,	// (0x0004ed3d) cale_week_day_heading_pane_t6_ParamLimits

0x1b78,	// (0x0004ed94) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005c3ed) cale_week_day_heading_pane_t_ParamLimits

0xa95b,	// (0x00057b77) bg_cale_side_pane_ParamLimits

0x1bc2,	// (0x0004edde) cale_week_time_pane_t1_ParamLimits

0x1bdc,	// (0x0004edf8) cale_week_time_pane_t2_ParamLimits

0x1bf6,	// (0x0004ee12) cale_week_time_pane_t3_ParamLimits

0x1c10,	// (0x0004ee2c) cale_week_time_pane_t4_ParamLimits

0x1c2a,	// (0x0004ee46) cale_week_time_pane_t5_ParamLimits

0x1c44,	// (0x0004ee60) cale_week_time_pane_t6_ParamLimits

0x1c5e,	// (0x0004ee7a) cale_week_time_pane_t7_ParamLimits

0x1c78,	// (0x0004ee94) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005c3fc) cale_week_time_pane_t_ParamLimits

0x1c98,	// (0x0004eeb4) cell_cale_week_pane_g2_ParamLimits

0xa95b,	// (0x00057b77) bg_cale_side_pane_cp01_ParamLimits

0x2e33,	// (0x0005004f) cale_month_week_pane_t1_ParamLimits

0x2e4c,	// (0x00050068) cale_month_week_pane_t2_ParamLimits

0x2e65,	// (0x00050081) cale_month_week_pane_t3_ParamLimits

0x2e7e,	// (0x0005009a) cale_month_week_pane_t4_ParamLimits

0x2e97,	// (0x000500b3) cale_month_week_pane_t5_ParamLimits

0x2eb0,	// (0x000500cc) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005c4d1) cale_month_week_pane_t_ParamLimits

0x9d5e,	// (0x00056f7a) cell_cale_month_pane_g1_ParamLimits

0x9769,	// (0x00056985) main_cale_event_viewer_pane

0x9769,	// (0x00056985) listscroll_cale_event_viewer_pane

0xccdb,	// (0x00059ef7) list_cale_ev_pane

0xcce3,	// (0x00059eff) scroll_pane_cp023

0xccef,	// (0x00059f0b) field_cale_ev_pane_ParamLimits

0xccef,	// (0x00059f0b) field_cale_ev_pane

0xcd0d,	// (0x00059f29) field_cale_ev_content_pane_ParamLimits

0xcd0d,	// (0x00059f29) field_cale_ev_content_pane

0xcd19,	// (0x00059f35) field_cale_ev_pane_g1_ParamLimits

0xcd19,	// (0x00059f35) field_cale_ev_pane_g1

0xcd25,	// (0x00059f41) field_cale_ev_pane_g2_ParamLimits

0xcd25,	// (0x00059f41) field_cale_ev_pane_g2

0xcd3d,	// (0x00059f59) field_cale_ev_pane_g3_ParamLimits

0xcd3d,	// (0x00059f59) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0005c925) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0005c925) field_cale_ev_pane_g

0xcd55,	// (0x00059f71) field_cale_ev_pane_t1_ParamLimits

0xcd55,	// (0x00059f71) field_cale_ev_pane_t1

0xa8ce,	// (0x00057aea) field_cale_ev_content_pane_t1_ParamLimits

0xa8ce,	// (0x00057aea) field_cale_ev_content_pane_t1

0xb56e,	// (0x0005878a) bg_button_pane_cp01

0x16c0,	// (0x0004e8dc) listscroll_cale_week_pane_ParamLimits

0xa906,	// (0x00057b22) popup_toolbar_window_cp01

0xa92c,	// (0x00057b48) listscroll_cale_week_pane_t1_ParamLimits

0x16c0,	// (0x0004e8dc) listscroll_cale_day_pane_ParamLimits

0xa906,	// (0x00057b22) popup_toolbar_window_cp02

0xad4e,	// (0x00057f6a) listscroll_cale_day_pane_t1_ParamLimits

0x16c0,	// (0x0004e8dc) main_cale_month_pane_ParamLimits

0x9ea8,	// (0x000570c4) popup_toolbar_window_cp03_ParamLimits

0x9ea8,	// (0x000570c4) popup_toolbar_window_cp03

0x3b49,	// (0x00050d65) main_image_pane_g2_ParamLimits

0x3b49,	// (0x00050d65) main_image_pane_g2

0x3b5a,	// (0x00050d76) main_image_pane_g3_ParamLimits

0x3b5a,	// (0x00050d76) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c703) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c703) main_image_pane_g

0xb688,	// (0x000588a4) main_image_pane_t1_ParamLimits

0x3b6b,	// (0x00050d87) main_image_pane_t2_ParamLimits

0x3b6b,	// (0x00050d87) main_image_pane_t2

0x3b7d,	// (0x00050d99) main_image_pane_t3_ParamLimits

0x3b7d,	// (0x00050d99) main_image_pane_t3

0x3ba5,	// (0x00050dc1) main_image_pane_t4_ParamLimits

0x3ba5,	// (0x00050dc1) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c70a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c70a) main_image_pane_t

0x3bc5,	// (0x00050de1) popup_image_details_window_cp01

0x3bcf,	// (0x00050deb) popup_toobar_trans_pane_cp01_ParamLimits

0x3bcf,	// (0x00050deb) popup_toobar_trans_pane_cp01

0x4342,	// (0x0005155e) popup_image_details_window_ParamLimits

0x4342,	// (0x0005155e) popup_image_details_window

0x9e7b,	// (0x00057097) popup_image_focus_window

0x4761,	// (0x0005197d) camera2_autofocus_pane_ParamLimits

0x4761,	// (0x0005197d) camera2_autofocus_pane

0x9769,	// (0x00056985) bg_popup_sub_pane_cp06

0xcd6c,	// (0x00059f88) popup_image_focus_window_g1

0xcd74,	// (0x00059f90) popup_image_focus_window_g2

0xcd7c,	// (0x00059f98) popup_image_focus_window_g3

0xcd84,	// (0x00059fa0) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0005c92c) popup_image_focus_window_g

0xcd8c,	// (0x00059fa8) popup_image_focus_window_t1

0xcd9a,	// (0x00059fb6) popup_image_focus_window_t2

0xcdaa,	// (0x00059fc6) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0005c935) popup_image_focus_window_t

0xcdb8,	// (0x00059fd4) camera2_autofocus_pane_g1

0xa55f,	// (0x0005777b) bg_tb_trans_pane_cp01

0xcdc6,	// (0x00059fe2) popup_image_details_window_g1

0xcdd9,	// (0x00059ff5) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0005c947) popup_image_details_window_g

0xce02,	// (0x0005a01e) popup_image_details_window_t1

0xce14,	// (0x0005a030) popup_image_details_window_t2

0xce2d,	// (0x0005a049) popup_image_details_window_t3

0xce41,	// (0x0005a05d) popup_image_details_window_t4

0xce5c,	// (0x0005a078) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0005c94e) popup_image_details_window_t

0xa7ad,	// (0x000579c9) bg_calc_paper_pane_ParamLimits

0x9769,	// (0x00056985) grid_highlight_pane_cp013

0x9cc4,	// (0x00056ee0) list_calc_pane_ParamLimits

0x9cd6,	// (0x00056ef2) scroll_pane_cp024

0xa7c1,	// (0x000579dd) bg_calc_display_pane_ParamLimits

0x1532,	// (0x0004e74e) calc_display_pane_t1_ParamLimits

0x1544,	// (0x0004e760) calc_display_pane_t2_ParamLimits

0x9cde,	// (0x00056efa) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005c36d) calc_display_pane_t_ParamLimits

0x1604,	// (0x0004e820) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005c38a) cell_calc_pane_g

0x160d,	// (0x0004e829) cell_calc_pane_t1

0xa820,	// (0x00057a3c) grid_highlight_pane_cp02_ParamLimits

0xa836,	// (0x00057a52) toolbar_button_pane_cp01_ParamLimits

0xa836,	// (0x00057a52) toolbar_button_pane_cp01

0xb6cd,	// (0x000588e9) temp_image_control_pane_ParamLimits

0xb6cd,	// (0x000588e9) temp_image_control_pane

0xa55f,	// (0x0005777b) main_mp3_pane

0xce76,	// (0x0005a092) temp_image_control_pane_g1_ParamLimits

0xce76,	// (0x0005a092) temp_image_control_pane_g1

0xce84,	// (0x0005a0a0) temp_image_control_pane_g2_ParamLimits

0xce84,	// (0x0005a0a0) temp_image_control_pane_g2

0xce96,	// (0x0005a0b2) temp_image_control_pane_g3_ParamLimits

0xce96,	// (0x0005a0b2) temp_image_control_pane_g3

0x4fb6,	// (0x000521d2) temp_image_control_pane_g4_ParamLimits

0x4fb6,	// (0x000521d2) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0005c959) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0005c959) temp_image_control_pane_g

0xce76,	// (0x0005a092) main_mp3_pane_g1

0x4fc9,	// (0x000521e5) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0005c962) main_mp3_pane_g

0xced9,	// (0x0005a0f5) main_mp3_pane_t1

0xa9be,	// (0x00057bda) main_camera_pane_g8_ParamLimits

0xa9be,	// (0x00057bda) main_camera_pane_g8

0x1f9c,	// (0x0004f1b8) main_video_pane_g7_ParamLimits

0x1f9c,	// (0x0004f1b8) main_video_pane_g7

0x9efd,	// (0x00057119) main_camera2_pane_t7_ParamLimits

0x9efd,	// (0x00057119) main_camera2_pane_t7

0xab06,	// (0x00057d22) scroll_pane_cp025_ParamLimits

0xab06,	// (0x00057d22) scroll_pane_cp025

0xab1a,	// (0x00057d36) scroll_pane_cp026_ParamLimits

0xab1a,	// (0x00057d36) scroll_pane_cp026

0xab29,	// (0x00057d45) wml_content_pane_ParamLimits

0x9769,	// (0x00056985) main_touch_calib_pane

0x509d,	// (0x000522b9) main_touch_calib_pane_g1

0x50af,	// (0x000522cb) main_touch_calib_pane_g2

0x50c1,	// (0x000522dd) main_touch_calib_pane_g3

0x50d3,	// (0x000522ef) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0005c980) main_touch_calib_pane_g

0x50e5,	// (0x00052301) main_touch_calib_pane_t1

0x50ff,	// (0x0005231b) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0005c989) main_touch_calib_pane_t

0xb280,	// (0x0005849c) mup_progress_pane_cp02

0xb2b5,	// (0x000584d1) navi_pane_g1

0xb38a,	// (0x000585a6) navi_pane_mp_t3

0xa55f,	// (0x0005777b) main_mp3_pane_ParamLimits

0x44cd,	// (0x000516e9) navi_pane_ParamLimits

0xce76,	// (0x0005a092) main_mp3_pane_g1_ParamLimits

0x4fc9,	// (0x000521e5) main_mp3_pane_g2_ParamLimits

0x4fd7,	// (0x000521f3) main_mp3_pane_g3_ParamLimits

0x4fd7,	// (0x000521f3) main_mp3_pane_g3

0x4fe5,	// (0x00052201) main_mp3_pane_g4_ParamLimits

0x4fe5,	// (0x00052201) main_mp3_pane_g4

0xcea6,	// (0x0005a0c2) main_mp3_pane_g5_ParamLimits

0xcea6,	// (0x0005a0c2) main_mp3_pane_g5

0xceb4,	// (0x0005a0d0) main_mp3_pane_g6_ParamLimits

0xceb4,	// (0x0005a0d0) main_mp3_pane_g6

0xcec1,	// (0x0005a0dd) main_mp3_pane_g7_ParamLimits

0xcec1,	// (0x0005a0dd) main_mp3_pane_g7

0xcecd,	// (0x0005a0e9) main_mp3_pane_g8_ParamLimits

0xcecd,	// (0x0005a0e9) main_mp3_pane_g8

0xf746,	// (0x0005c962) main_mp3_pane_g_ParamLimits

0x4ff1,	// (0x0005220d) main_mp3_pane_t2

0x4fff,	// (0x0005221b) main_mp3_pane_t3

0xcee7,	// (0x0005a103) main_mp3_pane_t4

0xcef5,	// (0x0005a111) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0005c973) main_mp3_pane_t

0xcf03,	// (0x0005a11f) mup_progress_pane_cp01

0x0fe1,	// (0x0004e1fd) aid_zoom_text_secondary2

0xccdb,	// (0x00059ef7) list_cale_ev2_pane

0xcce3,	// (0x00059eff) scroll_pane_cp023_ParamLimits

0x5155,	// (0x00052371) field_cale_ev2_pane_ParamLimits

0x5155,	// (0x00052371) field_cale_ev2_pane

0x5176,	// (0x00052392) field_cale_ev2_pane_g1_ParamLimits

0x5176,	// (0x00052392) field_cale_ev2_pane_g1

0x5182,	// (0x0005239e) field_cale_ev2_pane_g2_ParamLimits

0x5182,	// (0x0005239e) field_cale_ev2_pane_g2

0x519a,	// (0x000523b6) field_cale_ev2_pane_g3_ParamLimits

0x519a,	// (0x000523b6) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0005c994) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0005c994) field_cale_ev2_pane_g

0x51be,	// (0x000523da) field_cale_ev2_pane_t1_ParamLimits

0x51be,	// (0x000523da) field_cale_ev2_pane_t1

0x51d5,	// (0x000523f1) field_cale_ev2_pane_t2_ParamLimits

0x51d5,	// (0x000523f1) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0005c99d) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0005c99d) field_cale_ev2_pane_t

0x39fd,	// (0x00050c19) main_postcard_pane_g5_ParamLimits

0x39fd,	// (0x00050c19) main_postcard_pane_g5

0x3a13,	// (0x00050c2f) main_postcard_pane_g6_ParamLimits

0x3a13,	// (0x00050c2f) main_postcard_pane_g6

0x1d62,	// (0x0004ef7e) camera2_autofocus_pane_cp_ParamLimits

0x1d62,	// (0x0004ef7e) camera2_autofocus_pane_cp

0xa55f,	// (0x0005777b) main_mup3_pane

0x520a,	// (0x00052426) main_mup3_pane_g1_ParamLimits

0x520a,	// (0x00052426) main_mup3_pane_g1

0x522c,	// (0x00052448) main_mup3_pane_g2_ParamLimits

0x522c,	// (0x00052448) main_mup3_pane_g2

0x52ac,	// (0x000524c8) main_mup3_pane_g3_ParamLimits

0x52ac,	// (0x000524c8) main_mup3_pane_g3

0x52f2,	// (0x0005250e) main_mup3_pane_g4_ParamLimits

0x52f2,	// (0x0005250e) main_mup3_pane_g4

0x5338,	// (0x00052554) main_mup3_pane_g5_ParamLimits

0x5338,	// (0x00052554) main_mup3_pane_g5

0x537e,	// (0x0005259a) main_mup3_pane_g6_ParamLimits

0x537e,	// (0x0005259a) main_mup3_pane_g6

0xcf0b,	// (0x0005a127) main_mup3_pane_g7_ParamLimits

0xcf0b,	// (0x0005a127) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0005c9ad) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0005c9ad) main_mup3_pane_g

0x53fc,	// (0x00052618) main_mup3_pane_t1_ParamLimits

0x53fc,	// (0x00052618) main_mup3_pane_t1

0x5470,	// (0x0005268c) main_mup3_pane_t2_ParamLimits

0x5470,	// (0x0005268c) main_mup3_pane_t2

0x5544,	// (0x00052760) main_mup3_pane_t4_ParamLimits

0x5544,	// (0x00052760) main_mup3_pane_t4

0x559a,	// (0x000527b6) main_mup3_pane_t5_ParamLimits

0x559a,	// (0x000527b6) main_mup3_pane_t5

0x5656,	// (0x00052872) main_mup3_pane_t6_ParamLimits

0x5656,	// (0x00052872) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0005c9be) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0005c9be) main_mup3_pane_t

0x570e,	// (0x0005292a) mup3_progress_pane_ParamLimits

0x570e,	// (0x0005292a) mup3_progress_pane

0x579a,	// (0x000529b6) popup_mup3_control_window_ParamLimits

0x579a,	// (0x000529b6) popup_mup3_control_window

0xcf19,	// (0x0005a135) popup_mup3_text_window

0x57cc,	// (0x000529e8) mup3_progress_pane_t1

0x57eb,	// (0x00052a07) mup3_progress_pane_t2

0xcf21,	// (0x0005a13d) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0005c9cb) mup3_progress_pane_t

0xcf3e,	// (0x0005a15a) mup_progress_pane_cp03

0x9769,	// (0x00056985) bg_tb_trans_pane_cp04

0x580a,	// (0x00052a26) mup3_volume_pane

0x5812,	// (0x00052a2e) popup_mup3_control_window_g1

0x581b,	// (0x00052a37) mup3_volume_pane_g1

0x5824,	// (0x00052a40) mup3_volume_pane_g2

0x582d,	// (0x00052a49) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0005c9d2) mup3_volume_pane_g

0x9769,	// (0x00056985) bg_tb_trans_pane_cp03

0xcf5a,	// (0x0005a176) popup_mup3_text_window_g1

0xcf62,	// (0x0005a17e) popup_mup3_text_window_t1

0xa809,	// (0x00057a25) list_calc_item_pane_g1_ParamLimits

0xc9ab,	// (0x00059bc7) mup_volume_pane_cp_g1

0x5119,	// (0x00052335) main_touch_calib_pane_t3

0x512d,	// (0x00052349) main_touch_calib_pane_t4

0x5141,	// (0x0005235d) main_touch_calib_pane_t5

0x9773,	// (0x0005698f) aid_cell_size_toolbar2

0x977b,	// (0x00056997) aid_popup3_width_pane

0x0fd9,	// (0x0004e1f5) aid_zoom_text_msg_primary

0x1d41,	// (0x0004ef5d) vorec_t7

0xa7cd,	// (0x000579e9) bg_calc_paper_pane_g1_ParamLimits

0xa7d9,	// (0x000579f5) bg_calc_paper_pane_g2_ParamLimits

0xa7e5,	// (0x00057a01) bg_calc_paper_pane_g3_ParamLimits

0xa7f1,	// (0x00057a0d) bg_calc_paper_pane_g4_ParamLimits

0xa7fd,	// (0x00057a19) bg_calc_paper_pane_g5_ParamLimits

0x158d,	// (0x0004e7a9) bg_calc_paper_pane_g6_ParamLimits

0x159c,	// (0x0004e7b8) bg_calc_paper_pane_g7_ParamLimits

0x15ab,	// (0x0004e7c7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005c374) bg_calc_paper_pane_g_ParamLimits

0x15be,	// (0x0004e7da) calc_bg_paper_pane_g9_ParamLimits

0x1eae,	// (0x0004f0ca) image_qvga_pane_ParamLimits

0x1eae,	// (0x0004f0ca) image_qvga_pane

0xa6f0,	// (0x0005790c) bg_popup_sub_pane_cp04_ParamLimits

0xb604,	// (0x00058820) popup_mup_playback_window_g1_ParamLimits

0xb610,	// (0x0005882c) popup_mup_playback_window_t1_ParamLimits

0xb625,	// (0x00058841) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c6fe) popup_mup_playback_window_t_ParamLimits

0x4c58,	// (0x00051e74) main_mup2_pane_g3_ParamLimits

0x4c58,	// (0x00051e74) main_mup2_pane_g3

0x21ab,	// (0x0004f3c7) popup_toolbar_window_cp04

0xba1a,	// (0x00058c36) popup_call2_audio_second_window_g3_ParamLimits

0xba1a,	// (0x00058c36) popup_call2_audio_second_window_g3

0xbe24,	// (0x00059040) popup_call2_audio_first_window_g4_ParamLimits

0xbe24,	// (0x00059040) popup_call2_audio_first_window_g4

0xc4a3,	// (0x000596bf) popup_call2_audio_in_window_g4_ParamLimits

0xc4a3,	// (0x000596bf) popup_call2_audio_in_window_g4

0x3b2b,	// (0x00050d47) aid_area_sk_bg_cut_ParamLimits

0x3b2b,	// (0x00050d47) aid_area_sk_bg_cut

0xb63a,	// (0x00058856) aid_area_sk_bg_cut_2_ParamLimits

0xb63a,	// (0x00058856) aid_area_sk_bg_cut_2

0x4f5c,	// (0x00052178) aid_placing_details_win

0x4f64,	// (0x00052180) aid_placing_details_win_2

0xcdb8,	// (0x00059fd4) camera2_autofocus_pane_g1_ParamLimits

0x117f,	// (0x0004e39b) popup_fixed_preview_cale_window_ParamLimits

0x117f,	// (0x0004e39b) popup_fixed_preview_cale_window

0xb408,	// (0x00058624) navi_slider_pane_g3

0xb411,	// (0x0005862d) navi_slider_pane_g4

0xb41a,	// (0x00058636) navi_slider_pane_g5

0xb408,	// (0x00058624) navi_slider_pane_g6

0x9e1e,	// (0x0005703a) navi_slider_pane_g7

0xb53b,	// (0x00058757) mup_scale_pane_g3

0xb544,	// (0x00058760) mup_scale_pane_g4

0xb54d,	// (0x00058769) mup_scale_pane_g5

0x3829,	// (0x00050a45) mup_scale_pane_g6

0x3832,	// (0x00050a4e) mup_scale_pane_g7

0xb408,	// (0x00058624) cams2_slider_pane_g3

0xca2d,	// (0x00059c49) cams2_slider_pane_g4

0x9f6b,	// (0x00057187) cams2_slider_pane_g5

0xb408,	// (0x00058624) cams2_slider_pane_g6

0x9f73,	// (0x0005718f) cams2_slider_pane_g7

0xcc58,	// (0x00059e74) camera2_autofocus_pane_cp_g1

0xc844,	// (0x00059a60) bg_popup_preview_window_pane_cp02_ParamLimits

0xc844,	// (0x00059a60) bg_popup_preview_window_pane_cp02

0xcf70,	// (0x0005a18c) list_fp_cale_pane_ParamLimits

0xcf70,	// (0x0005a18c) list_fp_cale_pane

0xcf7c,	// (0x0005a198) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf7c,	// (0x0005a198) popup_fixed_preview_cale_window_t1

0x5836,	// (0x00052a52) popup_fixed_preview_cale_window_t2_ParamLimits

0x5836,	// (0x00052a52) popup_fixed_preview_cale_window_t2

0x584b,	// (0x00052a67) popup_fixed_preview_cale_window_t3_ParamLimits

0x584b,	// (0x00052a67) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0005c9d9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0005c9d9) popup_fixed_preview_cale_window_t

0x5860,	// (0x00052a7c) list_single_fp_cale_pane_ParamLimits

0x5860,	// (0x00052a7c) list_single_fp_cale_pane

0xcf9a,	// (0x0005a1b6) list_single_fp_cale_pane_g1_ParamLimits

0xcf9a,	// (0x0005a1b6) list_single_fp_cale_pane_g1

0xcfa6,	// (0x0005a1c2) list_single_fp_cale_pane_g2_ParamLimits

0xcfa6,	// (0x0005a1c2) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0005c9e0) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0005c9e0) list_single_fp_cale_pane_g

0xcfbf,	// (0x0005a1db) list_single_fp_cale_pane_t1_ParamLimits

0xcfbf,	// (0x0005a1db) list_single_fp_cale_pane_t1

0xcfd1,	// (0x0005a1ed) list_single_fp_cale_pane_t2_ParamLimits

0xcfd1,	// (0x0005a1ed) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0005c9e7) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0005c9e7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9769,	// (0x00056985) main_dialer_pane

0x5876,	// (0x00052a92) aid_cell_size_keypad

0x5880,	// (0x00052a9c) dialer_ne_pane

0x5888,	// (0x00052aa4) grid_dialer_command_1_pane

0x5890,	// (0x00052aac) grid_dialer_command_2_pane

0x5898,	// (0x00052ab4) grid_dialer_keypad_pane

0x58aa,	// (0x00052ac6) bg_popup_call_pane_cp06_ParamLimits

0x58aa,	// (0x00052ac6) bg_popup_call_pane_cp06

0x58b6,	// (0x00052ad2) dialer_ne_clear_pane_ParamLimits

0x58b6,	// (0x00052ad2) dialer_ne_clear_pane

0xd004,	// (0x0005a220) dialer_ne_pane_g1

0xd00c,	// (0x0005a228) dialer_ne_pane_t1_ParamLimits

0xd00c,	// (0x0005a228) dialer_ne_pane_t1

0x58c2,	// (0x00052ade) dialer_ne_pane_t2_ParamLimits

0x58c2,	// (0x00052ade) dialer_ne_pane_t2

0x58ec,	// (0x00052b08) dialer_ne_pane_t3_ParamLimits

0x58ec,	// (0x00052b08) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0005c9ec) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0005c9ec) dialer_ne_pane_t

0x591c,	// (0x00052b38) dialer_ne_pane_t3_copy1_ParamLimits

0x591c,	// (0x00052b38) dialer_ne_pane_t3_copy1

0x594b,	// (0x00052b67) cell_dialer_keypad_pane_ParamLimits

0x594b,	// (0x00052b67) cell_dialer_keypad_pane

0x5962,	// (0x00052b7e) cell_dialer_command_1_pane_ParamLimits

0x5962,	// (0x00052b7e) cell_dialer_command_1_pane

0x5978,	// (0x00052b94) cell_dialer_command_2_pane_ParamLimits

0x5978,	// (0x00052b94) cell_dialer_command_2_pane

0xd01e,	// (0x0005a23a) bg_button_pane_cp02_ParamLimits

0xd01e,	// (0x0005a23a) bg_button_pane_cp02

0x5987,	// (0x00052ba3) cell_dialer_keypad_pane_g1_ParamLimits

0x5987,	// (0x00052ba3) cell_dialer_keypad_pane_g1

0xd01e,	// (0x0005a23a) bg_button_pane_cp03_ParamLimits

0xd01e,	// (0x0005a23a) bg_button_pane_cp03

0x599b,	// (0x00052bb7) cell_dialer_command_1_pane_g1_ParamLimits

0x599b,	// (0x00052bb7) cell_dialer_command_1_pane_g1

0xd02a,	// (0x0005a246) bg_button_pane_cp04

0x59af,	// (0x00052bcb) cell_dialer_command_2_pane_g1

0xa9b6,	// (0x00057bd2) bg_button_pane_cp06

0xd032,	// (0x0005a24e) dialer_ne_clear_pane_g1

0xb2c1,	// (0x000584dd) navi_pane_g2

0xb2ef,	// (0x0005850b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005c601) navi_pane_g

0xb398,	// (0x000585b4) navi_pane_mv_g2

0xb3bf,	// (0x000585db) navi_pane_mv_g5

0x33f7,	// (0x00050613) navi_pane_mv_t1

0xa7c1,	// (0x000579dd) main_clock2_pane

0x59fa,	// (0x00052c16) main_clock2_list_pane_ParamLimits

0x59fa,	// (0x00052c16) main_clock2_list_pane

0x5a32,	// (0x00052c4e) main_clock2_pane_t1_ParamLimits

0x5a32,	// (0x00052c4e) main_clock2_pane_t1

0x5a70,	// (0x00052c8c) main_clock2_pane_t2_ParamLimits

0x5a70,	// (0x00052c8c) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0005c9f8) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0005c9f8) main_clock2_pane_t

0x5b0e,	// (0x00052d2a) popup_clock_analogue_window_cp03_ParamLimits

0x5b0e,	// (0x00052d2a) popup_clock_analogue_window_cp03

0x5b33,	// (0x00052d4f) popup_clock_digital_window_cp02_ParamLimits

0x5b33,	// (0x00052d4f) popup_clock_digital_window_cp02

0x5ba4,	// (0x00052dc0) main_clock2_list_single_pane_ParamLimits

0x5ba4,	// (0x00052dc0) main_clock2_list_single_pane

0xa9b6,	// (0x00057bd2) list_highlight_pane_cp05

0xd06c,	// (0x0005a288) main_clock2_list_single_pane_t1

0x21ab,	// (0x0004f3c7) popup_toolbar_window_cp04_ParamLimits

0x4f86,	// (0x000521a2) camera2_autofocus_pane_g2_ParamLimits

0x4f86,	// (0x000521a2) camera2_autofocus_pane_g2

0x4f92,	// (0x000521ae) camera2_autofocus_pane_g3_ParamLimits

0x4f92,	// (0x000521ae) camera2_autofocus_pane_g3

0x4f9e,	// (0x000521ba) camera2_autofocus_pane_g4_ParamLimits

0x4f9e,	// (0x000521ba) camera2_autofocus_pane_g4

0x4faa,	// (0x000521c6) camera2_autofocus_pane_g5_ParamLimits

0x4faa,	// (0x000521c6) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0005c93c) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0005c93c) camera2_autofocus_pane_g

0x51ea,	// (0x00052406) camera2_autofocus_pane_cp_g2

0x51f2,	// (0x0005240e) camera2_autofocus_pane_cp_g3

0x51fa,	// (0x00052416) camera2_autofocus_pane_cp_g4

0x5202,	// (0x0005241e) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0005c9a2) camera2_autofocus_pane_cp_g

0x58a2,	// (0x00052abe) popup_dialer_spcha_window

0x9769,	// (0x00056985) bg_popup_sub_pane_cp07

0xd07a,	// (0x0005a296) list_spcha_pane

0xd082,	// (0x0005a29e) list_single_spcha_pane_ParamLimits

0xd082,	// (0x0005a29e) list_single_spcha_pane

0x9769,	// (0x00056985) list_highlight_pane_cp06

0xd093,	// (0x0005a2af) list_single_spcha_pane_t1

0xc24d,	// (0x00059469) popup_call2_audio_out_window_g4_ParamLimits

0xc24d,	// (0x00059469) popup_call2_audio_out_window_g4

0x9769,	// (0x00056985) main_imed2_pane

0x9e83,	// (0x0005709f) popup_imed_adjust2_window

0x435a,	// (0x00051576) popup_imed_trans_window_ParamLimits

0x435a,	// (0x00051576) popup_imed_trans_window

0xca96,	// (0x00059cb2) popup_blid_sat_info2_window_t1

0xcaa4,	// (0x00059cc0) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0005c8d1) popup_blid_sat_info2_window_t

0x5c4e,	// (0x00052e6a) aid_size_cell_colour_35

0x5c6e,	// (0x00052e8a) aid_size_cell_colour_112

0x5c8e,	// (0x00052eaa) aid_size_cell_effect

0xc850,	// (0x00059a6c) bg_tb_trans_pane_cp02

0xae57,	// (0x00058073) heading_imed_pane

0x5cae,	// (0x00052eca) listscroll_imed_pane

0xd0a1,	// (0x0005a2bd) heading_imed_pane_g1

0xd0a9,	// (0x0005a2c5) heading_imed_pane_t1

0xd0b7,	// (0x0005a2d3) grid_imed_colour_35_pane_ParamLimits

0xd0b7,	// (0x0005a2d3) grid_imed_colour_35_pane

0x5cba,	// (0x00052ed6) grid_imed_effect_pane

0xd0cf,	// (0x0005a2eb) list_imed_aspect_pane

0x5cd0,	// (0x00052eec) scroll_pane_cp027_ParamLimits

0x5cd0,	// (0x00052eec) scroll_pane_cp027

0x5ce1,	// (0x00052efd) cell_imed_effect_pane_ParamLimits

0x5ce1,	// (0x00052efd) cell_imed_effect_pane

0xd0d7,	// (0x0005a2f3) cell_imed_colour_pane_ParamLimits

0xd0d7,	// (0x0005a2f3) cell_imed_colour_pane

0xd119,	// (0x0005a335) cell_imed_colour_pane_g1_ParamLimits

0xd119,	// (0x0005a335) cell_imed_colour_pane_g1

0xd12a,	// (0x0005a346) hgihlgiht_grid_pane_cp016_ParamLimits

0xd12a,	// (0x0005a346) hgihlgiht_grid_pane_cp016

0x5d08,	// (0x00052f24) cell_imed_effect_pane_g1

0x5d10,	// (0x00052f2c) grid_highlight_pane_cp017

0xd13b,	// (0x0005a357) list_imed_single_pane_ParamLimits

0xd13b,	// (0x0005a357) list_imed_single_pane

0x9769,	// (0x00056985) list_highlight_pane_cp07

0xd150,	// (0x0005a36c) list_imed_aspect_pane_comp1_t1

0xc850,	// (0x00059a6c) bg_tb_trans_pane_cp05

0xd172,	// (0x0005a38e) popup_imed_adjust2_window_g1

0xd199,	// (0x0005a3b5) popup_imed_adjust2_window_t1

0xd1b1,	// (0x0005a3cd) slider_imed_adjust_pane

0xd1c5,	// (0x0005a3e1) slider_imed_adjust_pane_g1

0xd1d5,	// (0x0005a3f1) slider_imed_adjust_pane_g2

0xd1e5,	// (0x0005a401) slider_imed_adjust_pane_g3

0xd1f6,	// (0x0005a412) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0005ca15) slider_imed_adjust_pane_g

0x5d19,	// (0x00052f35) aid_size_cell_clipart2

0x5d25,	// (0x00052f41) grid_imed_clipart_pane

0xd207,	// (0x0005a423) scroll_pane_cp031

0x5d2f,	// (0x00052f4b) cell_imed_clipart_pane_ParamLimits

0x5d2f,	// (0x00052f4b) cell_imed_clipart_pane

0x5d51,	// (0x00052f6d) cell_imed_clipart_pane_g1

0x9769,	// (0x00056985) grid_highlight_pane_cp014

0x5a0f,	// (0x00052c2b) main_clock2_pane_g1_ParamLimits

0x5a0f,	// (0x00052c2b) main_clock2_pane_g1

0x5b4f,	// (0x00052d6b) aid_call2_pane_cp10

0x5b61,	// (0x00052d7d) aid_call_pane_cp10

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g1

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g2

0x5b73,	// (0x00052d8f) popup_clock_analogue_window_cp10_g3

0x5b73,	// (0x00052d8f) popup_clock_analogue_window_cp10_g4

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0005ca03) popup_clock_analogue_window_cp10_g

0x5b85,	// (0x00052da1) popup_clock_analogue_window_cp10_t1

0x5bb6,	// (0x00052dd2) clock_digital_number_pane_cp10_ParamLimits

0x5bb6,	// (0x00052dd2) clock_digital_number_pane_cp10

0x5bce,	// (0x00052dea) clock_digital_number_pane_cp11_ParamLimits

0x5bce,	// (0x00052dea) clock_digital_number_pane_cp11

0x5be6,	// (0x00052e02) clock_digital_number_pane_cp12_ParamLimits

0x5be6,	// (0x00052e02) clock_digital_number_pane_cp12

0x5bfe,	// (0x00052e1a) clock_digital_number_pane_cp13_ParamLimits

0x5bfe,	// (0x00052e1a) clock_digital_number_pane_cp13

0x5c16,	// (0x00052e32) clock_digital_separator_pane_cp10_ParamLimits

0x5c16,	// (0x00052e32) clock_digital_separator_pane_cp10

0x5c2e,	// (0x00052e4a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c2e,	// (0x00052e4a) popup_clock_digital_window_cp02_t1

0xa6e8,	// (0x00057904) clock_digital_number_pane_cp10_g1

0xa6e8,	// (0x00057904) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0005ca1e) clock_digital_number_pane_cp10_g

0xa6e8,	// (0x00057904) clock_digital_separator_pane_cp10_g1

0xa6e8,	// (0x00057904) clock_digital_separator_pane_g2_cp10

0xb3c7,	// (0x000585e3) navi_pane_vded_g4

0xb3d0,	// (0x000585ec) navi_pane_vded_g5

0xb3d9,	// (0x000585f5) navi_pane_vded_t1

0x9769,	// (0x00056985) main_vded_pane

0x5d5a,	// (0x00052f76) main_vded_pane_g1

0x5d64,	// (0x00052f80) main_vded_pane_g2

0x5d6e,	// (0x00052f8a) main_vded_pane_g3

0x0002,

0xf807,	// (0x0005ca23) main_vded_pane_g

0x5d78,	// (0x00052f94) main_vded_pane_t1

0x5d86,	// (0x00052fa2) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0005ca2a) main_vded_pane_t

0x5d94,	// (0x00052fb0) vded_slider_pane

0x5d9c,	// (0x00052fb8) vded_video_pane

0xd20f,	// (0x0005a42b) vded_video_pane_g1

0x5da4,	// (0x00052fc0) vded_video_pane_g2

0xcc58,	// (0x00059e74) vded_video_pane_g3

0x0002,

0xf813,	// (0x0005ca2f) vded_video_pane_g

0xd219,	// (0x0005a435) vded_slider_pane_g1

0xc9ab,	// (0x00059bc7) vded_slider_pane_g2

0xd222,	// (0x0005a43e) vded_slider_pane_g3

0xd22b,	// (0x0005a447) vded_slider_pane_g4

0xd234,	// (0x0005a450) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0005ca36) vded_slider_pane_g

0x5782,	// (0x0005299e) mup3_rocker_pane_ParamLimits

0x5782,	// (0x0005299e) mup3_rocker_pane

0x5dad,	// (0x00052fc9) mup3_control_keys_pane_g1

0x5db5,	// (0x00052fd1) mup3_control_keys_pane_g2

0x5dbd,	// (0x00052fd9) mup3_control_keys_pane_g3

0x5dc5,	// (0x00052fe1) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0005ca41) mup3_control_keys_pane_g

0x11b6,	// (0x0004e3d2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11b6,	// (0x0004e3d2) popup_toolbar2_fixed_window_cp01

0x57b6,	// (0x000529d2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57b6,	// (0x000529d2) popup_toolbar2_fixed_window_cp02

0xbb8c,	// (0x00058da8) popup_call2_audio_second_window_t4_ParamLimits

0xbb8c,	// (0x00058da8) popup_call2_audio_second_window_t4

0xc0ba,	// (0x000592d6) popup_call2_audio_first_window_t6_ParamLimits

0xc0ba,	// (0x000592d6) popup_call2_audio_first_window_t6

0xc350,	// (0x0005956c) popup_call2_audio_out_window_t6_ParamLimits

0xc350,	// (0x0005956c) popup_call2_audio_out_window_t6

0x9769,	// (0x00056985) main_vitu_pane

0x5dd5,	// (0x00052ff1) aid_size_cell_itu_ParamLimits

0x5dd5,	// (0x00052ff1) aid_size_cell_itu

0xa55f,	// (0x0005777b) bg_popup_window_pane_cp08_ParamLimits

0xa55f,	// (0x0005777b) bg_popup_window_pane_cp08

0x5deb,	// (0x00053007) field_vitu_entry_pane_ParamLimits

0x5deb,	// (0x00053007) field_vitu_entry_pane

0x5e03,	// (0x0005301f) grid_vitu_function_pane_ParamLimits

0x5e03,	// (0x0005301f) grid_vitu_function_pane

0x5e1e,	// (0x0005303a) grid_vitu_itu_pane_ParamLimits

0x5e1e,	// (0x0005303a) grid_vitu_itu_pane

0x5e3c,	// (0x00053058) cell_vitu_itu_pane_ParamLimits

0x5e3c,	// (0x00053058) cell_vitu_itu_pane

0x5e5e,	// (0x0005307a) cell_vitu_function_pane_ParamLimits

0x5e5e,	// (0x0005307a) cell_vitu_function_pane

0xa55f,	// (0x0005777b) bg_popup_sub_pane_cp08_ParamLimits

0xa55f,	// (0x0005777b) bg_popup_sub_pane_cp08

0x5e77,	// (0x00053093) field_vitu_entry_pane_t1_ParamLimits

0x5e77,	// (0x00053093) field_vitu_entry_pane_t1

0xd255,	// (0x0005a471) field_vitu_entry_pane_t2_ParamLimits

0xd255,	// (0x0005a471) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0005ca4f) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0005ca4f) field_vitu_entry_pane_t

0xd272,	// (0x0005a48e) bg_button_pane_cp05_ParamLimits

0xd272,	// (0x0005a48e) bg_button_pane_cp05

0x5e96,	// (0x000530b2) cell_vitu_itu_pane_g1

0x5eae,	// (0x000530ca) cell_vitu_itu_pane_t1_ParamLimits

0x5eae,	// (0x000530ca) cell_vitu_itu_pane_t1

0x5ec0,	// (0x000530dc) cell_vitu_itu_pane_t2_ParamLimits

0x5ec0,	// (0x000530dc) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0005ca54) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0005ca54) cell_vitu_itu_pane_t

0xd280,	// (0x0005a49c) bg_button_pane_cp07

0x5ef5,	// (0x00053111) cell_vitu_function_pane_g1

0x9cbc,	// (0x00056ed8) main_calc_pane_g1

0x0fcd,	// (0x0004e1e9) aid_visual_content_pane

0x9769,	// (0x00056985) main_vradio_pane

0x5efe,	// (0x0005311a) main_vradio_pane_g1_ParamLimits

0x5efe,	// (0x0005311a) main_vradio_pane_g1

0xd28a,	// (0x0005a4a6) main_vradio_pane_g2_ParamLimits

0xd28a,	// (0x0005a4a6) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0005ca5b) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0005ca5b) main_vradio_pane_g

0x5f17,	// (0x00053133) main_vradio_pane_t1_ParamLimits

0x5f17,	// (0x00053133) main_vradio_pane_t1

0x5f2c,	// (0x00053148) main_vradio_pane_t2_ParamLimits

0x5f2c,	// (0x00053148) main_vradio_pane_t2

0xd297,	// (0x0005a4b3) main_vradio_pane_t3_ParamLimits

0xd297,	// (0x0005a4b3) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0005ca60) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0005ca60) main_vradio_pane_t

0x5f41,	// (0x0005315d) vradio_rocker_control_pane_ParamLimits

0x5f41,	// (0x0005315d) vradio_rocker_control_pane

0x5f53,	// (0x0005316f) vradio_station_info_pane_ParamLimits

0x5f53,	// (0x0005316f) vradio_station_info_pane

0xd2ab,	// (0x0005a4c7) vradio_frequency_info_pane_ParamLimits

0xd2ab,	// (0x0005a4c7) vradio_frequency_info_pane

0xcc58,	// (0x00059e74) vradio_station_info_pane_g1

0xd2ba,	// (0x0005a4d6) vradio_station_info_pane_t1_ParamLimits

0xd2ba,	// (0x0005a4d6) vradio_station_info_pane_t1

0xd2dc,	// (0x0005a4f8) vradio_station_info_pane_t2_ParamLimits

0xd2dc,	// (0x0005a4f8) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0005ca67) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0005ca67) vradio_station_info_pane_t

0xd2ee,	// (0x0005a50a) vradio_tuning_pane

0xd2f6,	// (0x0005a512) vradio_rocker_control_pane_g1

0xd2fe,	// (0x0005a51a) vradio_rocker_control_pane_g2

0xd306,	// (0x0005a522) vradio_rocker_control_pane_g3

0xd30e,	// (0x0005a52a) vradio_rocker_control_pane_g4

0xd316,	// (0x0005a532) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0005ca6c) vradio_rocker_control_pane_g

0x5f65,	// (0x00053181) vradio_frequency_info_pane_g1

0xd31e,	// (0x0005a53a) vradio_frequency_info_pane_t1_ParamLimits

0xd31e,	// (0x0005a53a) vradio_frequency_info_pane_t1

0x5f6f,	// (0x0005318b) vradio_tuning_pane_g1

0x5f7a,	// (0x00053196) vradio_tuning_pane_t1

0x978f,	// (0x000569ab) area_side_right_pane_ParamLimits

0x978f,	// (0x000569ab) area_side_right_pane

0xc80b,	// (0x00059a27) status_small_pane_g1

0xc813,	// (0x00059a2f) status_small_pane_g2

0xc81c,	// (0x00059a38) status_small_pane_g3

0xc825,	// (0x00059a41) status_small_pane_g4

0x0003,

0xf60b,	// (0x0005c827) status_small_pane_g

0xc82e,	// (0x00059a4a) status_small_pane_t1

0x9769,	// (0x00056985) main_video3_pane

0xd332,	// (0x0005a54e) cams_zoom_vslider_pane

0xd33a,	// (0x0005a556) image3_wide_pane_ParamLimits

0xd33a,	// (0x0005a556) image3_wide_pane

0xd354,	// (0x0005a570) image3_wide_small_pane

0xd360,	// (0x0005a57c) main_video3_pane_g1_ParamLimits

0xd360,	// (0x0005a57c) main_video3_pane_g1

0xd37c,	// (0x0005a598) main_video3_pane_g2_ParamLimits

0xd37c,	// (0x0005a598) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0005ca77) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0005ca77) main_video3_pane_g

0xd398,	// (0x0005a5b4) main_video3_pane_t1_ParamLimits

0xd398,	// (0x0005a5b4) main_video3_pane_t1

0xd3c3,	// (0x0005a5df) main_video3_pane_t2_ParamLimits

0xd3c3,	// (0x0005a5df) main_video3_pane_t2

0xd3ee,	// (0x0005a60a) main_video3_pane_t3_ParamLimits

0xd3ee,	// (0x0005a60a) main_video3_pane_t3

0x0002,

0xf860,	// (0x0005ca7c) main_video3_pane_t_ParamLimits

0xf860,	// (0x0005ca7c) main_video3_pane_t

0xd41b,	// (0x0005a637) cams_zoom_vslider_pane_g1

0xd424,	// (0x0005a640) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0005ca83) cams_zoom_vslider_pane_g

0xd42c,	// (0x0005a648) small_slider_vertical_pane

0xcc58,	// (0x00059e74) small_slider_vertical_pane_g1

0xcc58,	// (0x00059e74) small_slider_vertical_pane_g2

0xd434,	// (0x0005a650) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0005ca88) small_slider_vertical_pane_g

0x9769,	// (0x00056985) main_hwr_training_pane

0xd43d,	// (0x0005a659) hwr_training_instruct_pane_ParamLimits

0xd43d,	// (0x0005a659) hwr_training_instruct_pane

0x5f89,	// (0x000531a5) hwr_training_navi_pane_ParamLimits

0x5f89,	// (0x000531a5) hwr_training_navi_pane

0x5fa8,	// (0x000531c4) hwr_training_write_pane_ParamLimits

0x5fa8,	// (0x000531c4) hwr_training_write_pane

0x9769,	// (0x00056985) bg_frame_shadow_pane

0xd474,	// (0x0005a690) hwr_training_write_pane_g1

0xd47c,	// (0x0005a698) hwr_training_write_pane_g2

0xd484,	// (0x0005a6a0) hwr_training_write_pane_g3

0xd48c,	// (0x0005a6a8) hwr_training_write_pane_g4

0xd494,	// (0x0005a6b0) hwr_training_write_pane_g5

0xd49c,	// (0x0005a6b8) hwr_training_write_pane_g6

0xd4a4,	// (0x0005a6c0) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0005ca8f) hwr_training_write_pane_g

0x9f7c,	// (0x00057198) hwr_training_navi_pane_g1_ParamLimits

0x9f7c,	// (0x00057198) hwr_training_navi_pane_g1

0x9f8e,	// (0x000571aa) hwr_training_navi_pane_g2_ParamLimits

0x9f8e,	// (0x000571aa) hwr_training_navi_pane_g2

0x9fa0,	// (0x000571bc) hwr_training_navi_pane_g3_ParamLimits

0x9fa0,	// (0x000571bc) hwr_training_navi_pane_g3

0x9fb0,	// (0x000571cc) hwr_training_navi_pane_g4_ParamLimits

0x9fb0,	// (0x000571cc) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0005ca9e) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0005ca9e) hwr_training_navi_pane_g

0x9fbd,	// (0x000571d9) hwr_training_navi_pane_t1

0x5ff2,	// (0x0005320e) list_single_hwr_training_instruct_pane_ParamLimits

0x5ff2,	// (0x0005320e) list_single_hwr_training_instruct_pane

0xd4ac,	// (0x0005a6c8) list_single_hwr_training_instruct_pane_t1

0xcb98,	// (0x00059db4) bg_frame_shadow_pane_g1

0xd4bb,	// (0x0005a6d7) bg_frame_shadow_pane_g2

0xd4c3,	// (0x0005a6df) bg_frame_shadow_pane_g3

0xd4cb,	// (0x0005a6e7) bg_frame_shadow_pane_g4

0xd4d3,	// (0x0005a6ef) bg_frame_shadow_pane_g5

0xd4db,	// (0x0005a6f7) bg_frame_shadow_pane_g6

0xd4e3,	// (0x0005a6ff) bg_frame_shadow_pane_g7

0xa88c,	// (0x00057aa8) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0005caa9) bg_frame_shadow_pane_g

0x9769,	// (0x00056985) main_video_tele_dialer_pane

0x6008,	// (0x00053224) aid_size_cell_video_keypad_ParamLimits

0x6008,	// (0x00053224) aid_size_cell_video_keypad

0x6022,	// (0x0005323e) grid_video_dialer_keypad_pane_ParamLimits

0x6022,	// (0x0005323e) grid_video_dialer_keypad_pane

0x6070,	// (0x0005328c) video_down_pane_cp_ParamLimits

0x6070,	// (0x0005328c) video_down_pane_cp

0x60a2,	// (0x000532be) cell_video_dialer_keypad_pane_ParamLimits

0x60a2,	// (0x000532be) cell_video_dialer_keypad_pane

0xd4eb,	// (0x0005a707) bg_button_pane_cp08_ParamLimits

0xd4eb,	// (0x0005a707) bg_button_pane_cp08

0x60c4,	// (0x000532e0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60c4,	// (0x000532e0) cell_video_dialer_keypad_pane_g1

0x576c,	// (0x00052988) mup3_rocker2_pane_ParamLimits

0x576c,	// (0x00052988) mup3_rocker2_pane

0xcc58,	// (0x00059e74) mup3_rocker2_pane_g1

0x4249,	// (0x00051465) main_dialer2_pane

0x9769,	// (0x00056985) main_mp4_pane

0x9fd3,	// (0x000571ef) main_mp4_pane_g1_ParamLimits

0x9fd3,	// (0x000571ef) main_mp4_pane_g1

0x9fd3,	// (0x000571ef) main_mp4_pane_g2_ParamLimits

0x9fd3,	// (0x000571ef) main_mp4_pane_g2

0x60fe,	// (0x0005331a) main_mp4_pane_g3_ParamLimits

0x60fe,	// (0x0005331a) main_mp4_pane_g3

0x9fe1,	// (0x000571fd) main_mp4_pane_g4_ParamLimits

0x9fe1,	// (0x000571fd) main_mp4_pane_g4

0xa009,	// (0x00057225) main_mp4_pane_g5_ParamLimits

0xa009,	// (0x00057225) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0005cac9) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0005cac9) main_mp4_pane_g

0xa059,	// (0x00057275) main_mp4_pane_t1_ParamLimits

0xa059,	// (0x00057275) main_mp4_pane_t1

0xa0b5,	// (0x000572d1) main_mp4_pane_t2_ParamLimits

0xa0b5,	// (0x000572d1) main_mp4_pane_t2

0xd4f7,	// (0x0005a713) main_mp4_pane_t3_ParamLimits

0xd4f7,	// (0x0005a713) main_mp4_pane_t3

0xa107,	// (0x00057323) main_mp4_pane_t4_ParamLimits

0xa107,	// (0x00057323) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0005cad6) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0005cad6) main_mp4_pane_t

0xa14b,	// (0x00057367) mp4_progress_pane_ParamLimits

0xa14b,	// (0x00057367) mp4_progress_pane

0xa195,	// (0x000573b1) mp4_rocker_pane_ParamLimits

0xa195,	// (0x000573b1) mp4_rocker_pane

0xd51f,	// (0x0005a73b) mp4_progress_pane_t1

0xd538,	// (0x0005a754) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0005cadf) mp4_progress_pane_t

0xd551,	// (0x0005a76d) mup_progress_pane_cp04

0xcc58,	// (0x00059e74) mp4_rocker_pane_g1

0x613a,	// (0x00053356) aid_cell_size_keypad2_ParamLimits

0x613a,	// (0x00053356) aid_cell_size_keypad2

0x6150,	// (0x0005336c) dialer2_ne_pane_ParamLimits

0x6150,	// (0x0005336c) dialer2_ne_pane

0x616a,	// (0x00053386) grid_dialer2_keypad_pane_ParamLimits

0x616a,	// (0x00053386) grid_dialer2_keypad_pane

0xca3d,	// (0x00059c59) bg_popup_call_pane_cp07_ParamLimits

0xca3d,	// (0x00059c59) bg_popup_call_pane_cp07

0x6186,	// (0x000533a2) dialer2_ne_pane_t1_ParamLimits

0x6186,	// (0x000533a2) dialer2_ne_pane_t1

0x61c2,	// (0x000533de) cell_dialer2_keypad_pane_ParamLimits

0x61c2,	// (0x000533de) cell_dialer2_keypad_pane

0xd56f,	// (0x0005a78b) bg_button_pane_pane_cp04_ParamLimits

0xd56f,	// (0x0005a78b) bg_button_pane_pane_cp04

0x61e4,	// (0x00053400) cell_dialer2_keypad_pane_g1_ParamLimits

0x61e4,	// (0x00053400) cell_dialer2_keypad_pane_g1

0x207f,	// (0x0004f29b) aid_placing_vt_set_content_ParamLimits

0x207f,	// (0x0004f29b) aid_placing_vt_set_content

0x20a7,	// (0x0004f2c3) aid_placing_vt_set_title_ParamLimits

0x20a7,	// (0x0004f2c3) aid_placing_vt_set_title

0x9769,	// (0x00056985) main_image3_pane

0x62aa,	// (0x000534c6) area_side_right_pane_cp01_ParamLimits

0x62aa,	// (0x000534c6) area_side_right_pane_cp01

0x9fd3,	// (0x000571ef) main_image3_pane_g1_ParamLimits

0x9fd3,	// (0x000571ef) main_image3_pane_g1

0x62c1,	// (0x000534dd) main_image3_pane_g2_ParamLimits

0x62c1,	// (0x000534dd) main_image3_pane_g2

0x62e9,	// (0x00053505) main_image3_pane_g3_ParamLimits

0x62e9,	// (0x00053505) main_image3_pane_g3

0x6313,	// (0x0005352f) main_image3_pane_g4_ParamLimits

0x6313,	// (0x0005352f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0005caee) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0005caee) main_image3_pane_g

0x633d,	// (0x00053559) main_image3_pane_t1_ParamLimits

0x633d,	// (0x00053559) main_image3_pane_t1

0x6395,	// (0x000535b1) main_image3_pane_t2_ParamLimits

0x6395,	// (0x000535b1) main_image3_pane_t2

0x63e7,	// (0x00053603) main_image3_pane_t3_ParamLimits

0x63e7,	// (0x00053603) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0005caf7) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0005caf7) main_image3_pane_t

0xa55f,	// (0x0005777b) grid_sctrl_middle_pane_cp01_ParamLimits

0xa55f,	// (0x0005777b) grid_sctrl_middle_pane_cp01

0x646f,	// (0x0005368b) cell_sctrl_middle_pane_cp01_ParamLimits

0x646f,	// (0x0005368b) cell_sctrl_middle_pane_cp01

0x648c,	// (0x000536a8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x648c,	// (0x000536a8) cell_sctrl_middle_pane_cp01_g1

0x9769,	// (0x00056985) main_call4_pane

0x64a2,	// (0x000536be) aid_size_button_call4_ParamLimits

0x64a2,	// (0x000536be) aid_size_button_call4

0x64d3,	// (0x000536ef) call4_windows_pane_ParamLimits

0x64d3,	// (0x000536ef) call4_windows_pane

0x64f3,	// (0x0005370f) grid_call4_button_pane_ParamLimits

0x64f3,	// (0x0005370f) grid_call4_button_pane

0xd57b,	// (0x0005a797) call4_windows_conf_pane

0xd592,	// (0x0005a7ae) popup_call4_audio_first_window_ParamLimits

0xd592,	// (0x0005a7ae) popup_call4_audio_first_window

0xd5de,	// (0x0005a7fa) popup_call4_audio_second_window_ParamLimits

0xd5de,	// (0x0005a7fa) popup_call4_audio_second_window

0xd5f2,	// (0x0005a80e) popup_call4_audio_wait_window_ParamLimits

0xd5f2,	// (0x0005a80e) popup_call4_audio_wait_window

0x6520,	// (0x0005373c) cell_call4_button_pane_ParamLimits

0x6520,	// (0x0005373c) cell_call4_button_pane

0x6549,	// (0x00053765) bg_button_pane_cp09_ParamLimits

0x6549,	// (0x00053765) bg_button_pane_cp09

0x6555,	// (0x00053771) cell_call4_button_pane_g1_ParamLimits

0x6555,	// (0x00053771) cell_call4_button_pane_g1

0x657b,	// (0x00053797) cell_call4_button_pane_t1_ParamLimits

0x657b,	// (0x00053797) cell_call4_button_pane_t1

0xd63a,	// (0x0005a856) popup_call4_audio_conf_window_ParamLimits

0xd63a,	// (0x0005a856) popup_call4_audio_conf_window

0x57cc,	// (0x000529e8) mup3_progress_pane_t1_ParamLimits

0x57eb,	// (0x00052a07) mup3_progress_pane_t2_ParamLimits

0xcf21,	// (0x0005a13d) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0005c9cb) mup3_progress_pane_t_ParamLimits

0xcf3e,	// (0x0005a15a) mup_progress_pane_cp03_ParamLimits

0x5dcd,	// (0x00052fe9) mup3_control_keys_pane_g4_copy1

0xa179,	// (0x00057395) mp4_rocker2_pane_ParamLimits

0xa179,	// (0x00057395) mp4_rocker2_pane

0xd64e,	// (0x0005a86a) mp4_rocker2_pane_g1

0xd656,	// (0x0005a872) mp4_rocker2_pane_g2

0xa1e7,	// (0x00057403) mp4_rocker2_pane_g3

0xa1ef,	// (0x0005740b) mp4_rocker2_pane_g4

0xa1f7,	// (0x00057413) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005cb00) mp4_rocker2_pane_g

0x9769,	// (0x00056985) main_camera4_pane

0x9769,	// (0x00056985) main_video4_pane

0x603e,	// (0x0005325a) main_video_tele_dialer_pane_t1_ParamLimits

0x603e,	// (0x0005325a) main_video_tele_dialer_pane_t1

0x6057,	// (0x00053273) main_video_tele_dialer_pane_t2_ParamLimits

0x6057,	// (0x00053273) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0005caba) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0005caba) main_video_tele_dialer_pane_t

0x65bd,	// (0x000537d9) cam4_autofocus_pane_ParamLimits

0x65bd,	// (0x000537d9) cam4_autofocus_pane

0x65d3,	// (0x000537ef) cam4_image_uncrop_pane_ParamLimits

0x65d3,	// (0x000537ef) cam4_image_uncrop_pane

0x65ed,	// (0x00053809) cam4_indicators_pane_ParamLimits

0x65ed,	// (0x00053809) cam4_indicators_pane

0x6618,	// (0x00053834) main_camera4_pane_g1_ParamLimits

0x6618,	// (0x00053834) main_camera4_pane_g1

0x662a,	// (0x00053846) main_camera4_pane_g2_ParamLimits

0x662a,	// (0x00053846) main_camera4_pane_g2

0x663d,	// (0x00053859) main_camera4_pane_g3_ParamLimits

0x663d,	// (0x00053859) main_camera4_pane_g3

0x6650,	// (0x0005386c) main_camera4_pane_g4_ParamLimits

0x6650,	// (0x0005386c) main_camera4_pane_g4

0x6663,	// (0x0005387f) main_camera4_pane_g5_ParamLimits

0x6663,	// (0x0005387f) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0005cb0b) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0005cb0b) main_camera4_pane_g

0x6687,	// (0x000538a3) main_camera4_pane_t1_ParamLimits

0x6687,	// (0x000538a3) main_camera4_pane_t1

0xcea6,	// (0x0005a0c2) bg_tb_trans_pane_cp06

0xa223,	// (0x0005743f) cam4_indicators_pane_g1

0xa234,	// (0x00057450) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0005cb26) cam4_indicators_pane_g

0xa24c,	// (0x00057468) cam4_indicators_pane_t1

0x66eb,	// (0x00053907) main_video4_pane_g1_ParamLimits

0x66eb,	// (0x00053907) main_video4_pane_g1

0x66fa,	// (0x00053916) main_video4_pane_g2_ParamLimits

0x66fa,	// (0x00053916) main_video4_pane_g2

0x6709,	// (0x00053925) main_video4_pane_g3_ParamLimits

0x6709,	// (0x00053925) main_video4_pane_g3

0x6718,	// (0x00053934) main_video4_pane_g4_ParamLimits

0x6718,	// (0x00053934) main_video4_pane_g4

0x0004,

0xf911,	// (0x0005cb2d) main_video4_pane_g_ParamLimits

0xf911,	// (0x0005cb2d) main_video4_pane_g

0x6736,	// (0x00053952) vid4_indicators_pane_ParamLimits

0x6736,	// (0x00053952) vid4_indicators_pane

0x6764,	// (0x00053980) video4_image_uncrop_cif_pane_ParamLimits

0x6764,	// (0x00053980) video4_image_uncrop_cif_pane

0x677e,	// (0x0005399a) video4_image_uncrop_nhd_pane_ParamLimits

0x677e,	// (0x0005399a) video4_image_uncrop_nhd_pane

0x65d3,	// (0x000537ef) video4_image_uncrop_vga_pane_ParamLimits

0x65d3,	// (0x000537ef) video4_image_uncrop_vga_pane

0xa55f,	// (0x0005777b) bg_tb_trans_pane_cp07

0xa276,	// (0x00057492) vid4_indicators_pane_g1

0xa28a,	// (0x000574a6) vid4_indicators_pane_g2

0xa29e,	// (0x000574ba) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0005cb38) vid4_indicators_pane_g

0xa2cb,	// (0x000574e7) vid4_indicators_pane_t1

0x6792,	// (0x000539ae) cam4_autofocus_pane_g1

0x679a,	// (0x000539b6) cam4_autofocus_pane_g2

0x67a2,	// (0x000539be) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005cb43) cam4_autofocus_pane_g

0x67aa,	// (0x000539c6) cam4_autofocus_pane_g3_copy1

0x6086,	// (0x000532a2) video_down_pane_cp_t1

0x6094,	// (0x000532b0) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0005cabf) video_down_pane_cp_t

0xa55f,	// (0x0005777b) popup_vitu2_window_ParamLimits

0xa55f,	// (0x0005777b) popup_vitu2_window

0x67b2,	// (0x000539ce) aid_size_cell2_itu2_ParamLimits

0x67b2,	// (0x000539ce) aid_size_cell2_itu2

0x67d8,	// (0x000539f4) aid_size_cell_itu2_ParamLimits

0x67d8,	// (0x000539f4) aid_size_cell_itu2

0x6834,	// (0x00053a50) bg_popup_window_pane_cp09_ParamLimits

0x6834,	// (0x00053a50) bg_popup_window_pane_cp09

0x6842,	// (0x00053a5e) field_vitu2_entry_pane_ParamLimits

0x6842,	// (0x00053a5e) field_vitu2_entry_pane

0x6868,	// (0x00053a84) grid_vitu2_function_pane_ParamLimits

0x6868,	// (0x00053a84) grid_vitu2_function_pane

0x68b9,	// (0x00053ad5) grid_vitu2_itu_pane_ParamLimits

0x68b9,	// (0x00053ad5) grid_vitu2_itu_pane

0x694f,	// (0x00053b6b) cell_vitu2_itu_pane_ParamLimits

0x694f,	// (0x00053b6b) cell_vitu2_itu_pane

0x697b,	// (0x00053b97) cell_vitu2_function_pane_ParamLimits

0x697b,	// (0x00053b97) cell_vitu2_function_pane

0xd65e,	// (0x0005a87a) bg_popup_call_pane_cp08_ParamLimits

0xd65e,	// (0x0005a87a) bg_popup_call_pane_cp08

0xd675,	// (0x0005a891) field_vitu2_entry_pane_g1

0xd681,	// (0x0005a89d) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0005cb4a) field_vitu2_entry_pane_g

0x0358,	// (0x0004d574) field_vitu2_entry_pane_t1_ParamLimits

0x0358,	// (0x0004d574) field_vitu2_entry_pane_t1

0x69ba,	// (0x00053bd6) field_vitu2_entry_pane_t2_ParamLimits

0x69ba,	// (0x00053bd6) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005cb51) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005cb51) field_vitu2_entry_pane_t

0x69d7,	// (0x00053bf3) bg_button_pane_cp010_ParamLimits

0x69d7,	// (0x00053bf3) bg_button_pane_cp010

0xa2e2,	// (0x000574fe) cell_vitu2_itu_pane_g1

0x69f3,	// (0x00053c0f) cell_vitu2_itu_pane_t1_ParamLimits

0x69f3,	// (0x00053c0f) cell_vitu2_itu_pane_t1

0x0388,	// (0x0004d5a4) cell_vitu2_itu_pane_t2_ParamLimits

0x0388,	// (0x0004d5a4) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0005cb5b) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0005cb5b) cell_vitu2_itu_pane_t

0xa55f,	// (0x0005777b) bg_button_pane_cp011

0x6a51,	// (0x00053c6d) cell_vitu2_function_pane_g1

0x9769,	// (0x00056985) main_myfav_hc_pane

0x6437,	// (0x00053653) popup_image3_note_pane_ParamLimits

0x6437,	// (0x00053653) popup_image3_note_pane

0x6453,	// (0x0005366f) popup_image3_tool_bar_pane_ParamLimits

0x6453,	// (0x0005366f) popup_image3_tool_bar_pane

0x0416,	// (0x0004d632) cell_vitu2_itu_pane_t3_ParamLimits

0x0416,	// (0x0004d632) cell_vitu2_itu_pane_t3

0x9769,	// (0x00056985) bg_popup_trans_pane

0xd6a3,	// (0x0005a8bf) grid_image3_tool_bar_pane

0xd6ad,	// (0x0005a8c9) bg_popup_trans_pane_g1

0xac0f,	// (0x00057e2b) bg_popup_trans_pane_g2

0xd6b5,	// (0x0005a8d1) bg_popup_trans_pane_g3

0xd6bd,	// (0x0005a8d9) bg_popup_trans_pane_g4

0xd6c5,	// (0x0005a8e1) bg_popup_trans_pane_g5

0xd6cd,	// (0x0005a8e9) bg_popup_trans_pane_g6

0xd6d5,	// (0x0005a8f1) bg_popup_trans_pane_g7

0xd6dd,	// (0x0005a8f9) bg_popup_trans_pane_g8

0xabef,	// (0x00057e0b) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0005cb62) bg_popup_trans_pane_g

0xd6e5,	// (0x0005a901) cell_image3_tool_bar_pane_ParamLimits

0xd6e5,	// (0x0005a901) cell_image3_tool_bar_pane

0xcc58,	// (0x00059e74) cell_image3_tool_bar_pane_g1

0x9769,	// (0x00056985) bg_popup_trans_pane_cp1

0xd6f9,	// (0x0005a915) popup_image3_note_pane_t1

0xd707,	// (0x0005a923) popup_image3_note_pane_t2

0xd715,	// (0x0005a931) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0005cb75) popup_image3_note_pane_t

0xd723,	// (0x0005a93f) popup_image3_note_pane_t3_copy1

0x6a65,	// (0x00053c81) bg_myfav_hc_instruction_pane_ParamLimits

0x6a65,	// (0x00053c81) bg_myfav_hc_instruction_pane

0x6a79,	// (0x00053c95) cell_myfav_contact_pane_ParamLimits

0x6a79,	// (0x00053c95) cell_myfav_contact_pane

0x6a97,	// (0x00053cb3) cell_myfav_contact_pane_cp1_ParamLimits

0x6a97,	// (0x00053cb3) cell_myfav_contact_pane_cp1

0x6aaf,	// (0x00053ccb) cell_myfav_contact_pane_cp2_ParamLimits

0x6aaf,	// (0x00053ccb) cell_myfav_contact_pane_cp2

0x6ac7,	// (0x00053ce3) cell_myfav_contact_pane_cp3_ParamLimits

0x6ac7,	// (0x00053ce3) cell_myfav_contact_pane_cp3

0x6ade,	// (0x00053cfa) cell_myfav_contact_pane_cp4_ParamLimits

0x6ade,	// (0x00053cfa) cell_myfav_contact_pane_cp4

0x6af6,	// (0x00053d12) cell_myfav_contact_pane_cp5_ParamLimits

0x6af6,	// (0x00053d12) cell_myfav_contact_pane_cp5

0x6b0a,	// (0x00053d26) cell_myfav_contact_pane_cp6_ParamLimits

0x6b0a,	// (0x00053d26) cell_myfav_contact_pane_cp6

0x6b20,	// (0x00053d3c) cell_myfav_contact_pane_cp7_ParamLimits

0x6b20,	// (0x00053d3c) cell_myfav_contact_pane_cp7

0xd731,	// (0x0005a94d) listscroll_gen_pane_cp05

0x6b3a,	// (0x00053d56) main_myfav_hc_pane_g1_ParamLimits

0x6b3a,	// (0x00053d56) main_myfav_hc_pane_g1

0x6b54,	// (0x00053d70) main_myfav_hc_pane_g2_ParamLimits

0x6b54,	// (0x00053d70) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0005cb7c) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0005cb7c) main_myfav_hc_pane_g

0x6b86,	// (0x00053da2) main_myfav_hc_pane_t1_ParamLimits

0x6b86,	// (0x00053da2) main_myfav_hc_pane_t1

0xd73a,	// (0x0005a956) main_myfav_hc_pane_t2_ParamLimits

0xd73a,	// (0x0005a956) main_myfav_hc_pane_t2

0xd74c,	// (0x0005a968) main_myfav_hc_pane_t3_ParamLimits

0xd74c,	// (0x0005a968) main_myfav_hc_pane_t3

0x6b9d,	// (0x00053db9) main_myfav_hc_pane_t4_ParamLimits

0x6b9d,	// (0x00053db9) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0005cb83) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0005cb83) main_myfav_hc_pane_t

0xcc58,	// (0x00059e74) bg_myfav_hc_instruction_pane_g1

0xd75e,	// (0x0005a97a) cell_myfav_contact_pane_g1_ParamLimits

0xd75e,	// (0x0005a97a) cell_myfav_contact_pane_g1

0xd75e,	// (0x0005a97a) cell_myfav_contact_pane_g2_ParamLimits

0xd75e,	// (0x0005a97a) cell_myfav_contact_pane_g2

0xd76a,	// (0x0005a986) cell_myfav_contact_pane_g3_ParamLimits

0xd76a,	// (0x0005a986) cell_myfav_contact_pane_g3

0xcf0b,	// (0x0005a127) cell_myfav_contact_pane_g4_ParamLimits

0xcf0b,	// (0x0005a127) cell_myfav_contact_pane_g4

0xd777,	// (0x0005a993) cell_myfav_contact_pane_g5_ParamLimits

0xd777,	// (0x0005a993) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0005cb8e) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0005cb8e) cell_myfav_contact_pane_g

0x6b6e,	// (0x00053d8a) main_myfav_hc_pane_g3_ParamLimits

0x6b6e,	// (0x00053d8a) main_myfav_hc_pane_g3

0x1118,	// (0x0004e334) popup_adpt_find_window

0x6bc5,	// (0x00053de1) afind_page_pane_ParamLimits

0x6bc5,	// (0x00053de1) afind_page_pane

0x6bda,	// (0x00053df6) aid_size_cell_afind_ParamLimits

0x6bda,	// (0x00053df6) aid_size_cell_afind

0x6bf8,	// (0x00053e14) bg_popup_sub_pane_cp09_ParamLimits

0x6bf8,	// (0x00053e14) bg_popup_sub_pane_cp09

0x6c05,	// (0x00053e21) find_pane_cp01_ParamLimits

0x6c05,	// (0x00053e21) find_pane_cp01

0xd783,	// (0x0005a99f) grid_afind_control_pane_ParamLimits

0xd783,	// (0x0005a99f) grid_afind_control_pane

0x6c12,	// (0x00053e2e) grid_afind_pane_ParamLimits

0x6c12,	// (0x00053e2e) grid_afind_pane

0x6c31,	// (0x00053e4d) cell_afind_pane_ParamLimits

0x6c31,	// (0x00053e4d) cell_afind_pane

0xcc58,	// (0x00059e74) afind_page_pane_g1

0x6c98,	// (0x00053eb4) afind_page_pane_g2

0x6ca1,	// (0x00053ebd) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0005cb99) afind_page_pane_g

0x6caa,	// (0x00053ec6) afind_page_pane_t1

0xd797,	// (0x0005a9b3) cell_afind_grid_control_pane_ParamLimits

0xd797,	// (0x0005a9b3) cell_afind_grid_control_pane

0xd56f,	// (0x0005a78b) bg_button_pane_cp69_ParamLimits

0xd56f,	// (0x0005a78b) bg_button_pane_cp69

0x6cca,	// (0x00053ee6) cell_afind_pane_g1_ParamLimits

0x6cca,	// (0x00053ee6) cell_afind_pane_g1

0x6cd7,	// (0x00053ef3) cell_afind_pane_t1_ParamLimits

0x6cd7,	// (0x00053ef3) cell_afind_pane_t1

0xaa08,	// (0x00057c24) bg_button_pane_cp72

0xd7a6,	// (0x0005a9c2) cell_afind_grid_control_pane_g1

0x3d08,	// (0x00050f24) aid_image_placing_area_ParamLimits

0x3d08,	// (0x00050f24) aid_image_placing_area

0xd23d,	// (0x0005a459) field_vitu_entry_pane_g1_ParamLimits

0xd23d,	// (0x0005a459) field_vitu_entry_pane_g1

0xd249,	// (0x0005a465) field_vitu_entry_pane_g2_ParamLimits

0xd249,	// (0x0005a465) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0005ca4a) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0005ca4a) field_vitu_entry_pane_g

0x5e96,	// (0x000530b2) cell_vitu_itu_pane_g1_ParamLimits

0x5ed8,	// (0x000530f4) cell_vitu_itu_pane_t3_ParamLimits

0x5ed8,	// (0x000530f4) cell_vitu_itu_pane_t3

0xd51f,	// (0x0005a73b) mp4_progress_pane_t1_ParamLimits

0xd538,	// (0x0005a754) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0005cadf) mp4_progress_pane_t_ParamLimits

0xd551,	// (0x0005a76d) mup_progress_pane_cp04_ParamLimits

0x6bb1,	// (0x00053dcd) main_myfav_hc_pane_t5_ParamLimits

0x6bb1,	// (0x00053dcd) main_myfav_hc_pane_t5

0x9787,	// (0x000569a3) aid_zoom_text_primary

0x1118,	// (0x0004e334) popup_adpt_find_window_ParamLimits

0xa55f,	// (0x0005777b) main_cam_set_pane

0x6604,	// (0x00053820) cam4_zoom_pane_ParamLimits

0x6604,	// (0x00053820) cam4_zoom_pane

0x6ce9,	// (0x00053f05) main_cam_set_pane_g1_ParamLimits

0x6ce9,	// (0x00053f05) main_cam_set_pane_g1

0x6cf7,	// (0x00053f13) main_cam_set_pane_g2_ParamLimits

0x6cf7,	// (0x00053f13) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0005cba0) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0005cba0) main_cam_set_pane_g

0x6d18,	// (0x00053f34) main_cam_set_pane_t1_ParamLimits

0x6d18,	// (0x00053f34) main_cam_set_pane_t1

0x6d33,	// (0x00053f4f) main_cset_listscroll_pane_ParamLimits

0x6d33,	// (0x00053f4f) main_cset_listscroll_pane

0x6d53,	// (0x00053f6f) main_cset_slider_pane_ParamLimits

0x6d53,	// (0x00053f6f) main_cset_slider_pane

0xd7b7,	// (0x0005a9d3) main_cset_list_pane_ParamLimits

0xd7b7,	// (0x0005a9d3) main_cset_list_pane

0xd7c7,	// (0x0005a9e3) scroll_pane_cp028

0x6d79,	// (0x00053f95) aid_area_touch_slider

0x6d95,	// (0x00053fb1) cset_slider_pane

0x6dbf,	// (0x00053fdb) main_cset_slider_pane_g1

0x6dd4,	// (0x00053ff0) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0005cba5) main_cset_slider_pane_g

0xd818,	// (0x0005aa34) main_cset_slider_pane_t1

0x6e78,	// (0x00054094) main_cset_slider_pane_t2

0x6e92,	// (0x000540ae) main_cset_slider_pane_t3

0x6eac,	// (0x000540c8) main_cset_slider_pane_t4

0x6ec6,	// (0x000540e2) main_cset_slider_pane_t5

0x6ee0,	// (0x000540fc) main_cset_slider_pane_t6

0x6ef5,	// (0x00054111) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0005cbca) main_cset_slider_pane_t

0x6ff9,	// (0x00054215) cset_list_set_pane_ParamLimits

0x6ff9,	// (0x00054215) cset_list_set_pane

0x700b,	// (0x00054227) aid_position_infowindow_above

0x7013,	// (0x0005422f) aid_position_infowindow_below

0x0474,	// (0x0004d690) cset_list_set_pane_g1_ParamLimits

0x0474,	// (0x0004d690) cset_list_set_pane_g1

0x0480,	// (0x0004d69c) cset_list_set_pane_g3_ParamLimits

0x0480,	// (0x0004d69c) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0005cbe9) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0005cbe9) cset_list_set_pane_g

0x048f,	// (0x0004d6ab) cset_list_set_pane_t1_ParamLimits

0x048f,	// (0x0004d6ab) cset_list_set_pane_t1

0xa55f,	// (0x0005777b) list_highlight_pane_cp021_ParamLimits

0xa55f,	// (0x0005777b) list_highlight_pane_cp021

0xb53b,	// (0x00058757) cset_slider_pane_g1

0xb54d,	// (0x00058769) cset_slider_pane_g2

0xb544,	// (0x00058760) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0005cbee) cset_slider_pane_g

0xa2f4,	// (0x00057510) aid_area_touch_cam4_zoom

0xa2fc,	// (0x00057518) cam4_zoom_cont_pane

0xa304,	// (0x00057520) cam4_zoom_pane_g1

0xa30c,	// (0x00057528) cam4_zoom_pane_g2

0x701b,	// (0x00054237) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005cbf5) cam4_zoom_pane_g

0xd434,	// (0x0005a650) cam4_zoom_cont_pane_g1

0xd8b8,	// (0x0005aad4) cam4_zoom_cont_pane_g2

0xdd2c,	// (0x0005af48) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0005cbfc) cam4_zoom_cont_pane_g

0x64c0,	// (0x000536dc) call4_image_pane_ParamLimits

0x64c0,	// (0x000536dc) call4_image_pane

0xd57b,	// (0x0005a797) call4_windows_conf_pane_ParamLimits

0xd5bc,	// (0x0005a7d8) popup_call4_audio_in_window_ParamLimits

0xd5bc,	// (0x0005a7d8) popup_call4_audio_in_window

0x9769,	// (0x00056985) bg_popup_call2_act_pane_cp02

0xd632,	// (0x0005a84e) call4_list_conf_pane

0xcc58,	// (0x00059e74) call4_image_pane_g1

0xcc58,	// (0x00059e74) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0005c90b) call4_image_pane_g

0xd8c1,	// (0x0005aadd) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8c1,	// (0x0005aadd) list_single_graphic_popup_conf4_pane

0x9769,	// (0x00056985) list_highlight_pane_cp022

0xd8d4,	// (0x0005aaf0) list_single_graphic_popup_conf4_pane_g1

0xb11d,	// (0x00058339) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005cc03) list_single_graphic_popup_conf4_pane_g

0xd8dc,	// (0x0005aaf8) list_single_graphic_popup_conf4_pane_t1

0x21cb,	// (0x0004f3e7) popup_vtel_slider_window_ParamLimits

0x21cb,	// (0x0004f3e7) popup_vtel_slider_window

0xd55d,	// (0x0005a779) dialer2_ne_pane_t2_ParamLimits

0xd55d,	// (0x0005a779) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005cae4) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005cae4) dialer2_ne_pane_t

0xca3d,	// (0x00059c59) bg_popup_sub_pane_cp010_ParamLimits

0xca3d,	// (0x00059c59) bg_popup_sub_pane_cp010

0x7023,	// (0x0005423f) popup_vtel_slider_window_g1_ParamLimits

0x7023,	// (0x0005423f) popup_vtel_slider_window_g1

0x7036,	// (0x00054252) popup_vtel_slider_window_g2_ParamLimits

0x7036,	// (0x00054252) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0005cc08) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0005cc08) popup_vtel_slider_window_g

0x708c,	// (0x000542a8) vtel_slider_pane_ParamLimits

0x708c,	// (0x000542a8) vtel_slider_pane

0x70ae,	// (0x000542ca) vtel_slider_pane_g1_ParamLimits

0x70ae,	// (0x000542ca) vtel_slider_pane_g1

0x70c2,	// (0x000542de) vtel_slider_pane_g2_ParamLimits

0x70c2,	// (0x000542de) vtel_slider_pane_g2

0x70da,	// (0x000542f6) vtel_slider_pane_g3_ParamLimits

0x70da,	// (0x000542f6) vtel_slider_pane_g3

0x70ae,	// (0x000542ca) vtel_slider_pane_g4_ParamLimits

0x70ae,	// (0x000542ca) vtel_slider_pane_g4

0x70f0,	// (0x0005430c) vtel_slider_pane_g5_ParamLimits

0x70f0,	// (0x0005430c) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005cc11) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005cc11) vtel_slider_pane_g

0xa55f,	// (0x0005777b) main_gallery2_pane

0x6804,	// (0x00053a20) aid_size_row_itut2_dropdow_list_ParamLimits

0x6804,	// (0x00053a20) aid_size_row_itut2_dropdow_list

0x6890,	// (0x00053aac) grid_vitu2_function_top_pane_ParamLimits

0x6890,	// (0x00053aac) grid_vitu2_function_top_pane

0x68fa,	// (0x00053b16) popup_vitu2_dropdown_list_window_ParamLimits

0x68fa,	// (0x00053b16) popup_vitu2_dropdown_list_window

0x6923,	// (0x00053b3f) popup_vitu2_match_list_window

0x7106,	// (0x00054322) cell_vitu2_function_top_pane_ParamLimits

0x7106,	// (0x00054322) cell_vitu2_function_top_pane

0x711e,	// (0x0005433a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x711e,	// (0x0005433a) cell_vitu2_function_top_pane_cp01

0x713a,	// (0x00054356) cell_vitu2_function_top_wide_pane_ParamLimits

0x713a,	// (0x00054356) cell_vitu2_function_top_wide_pane

0xa55f,	// (0x0005777b) bg_button_pane_cp012

0x7156,	// (0x00054372) cell_vitu2_function_top_pane_g1

0xa314,	// (0x00057530) bg_button_pane_cp013_ParamLimits

0xa314,	// (0x00057530) bg_button_pane_cp013

0x716a,	// (0x00054386) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x716a,	// (0x00054386) cell_vitu2_function_top_wide_pane_g1

0xa55f,	// (0x0005777b) bg_popup_sub_pane_cp20

0x7182,	// (0x0005439e) list_vitu2_match_list_pane

0xd6ad,	// (0x0005a8c9) bg_popup_sub_pane_cp20_g1

0xd6b5,	// (0x0005a8d1) bg_popup_sub_pane_cp20_g2

0xac0f,	// (0x00057e2b) bg_popup_sub_pane_cp20_g3

0xd6bd,	// (0x0005a8d9) bg_popup_sub_pane_cp20_g4

0xabef,	// (0x00057e0b) bg_popup_sub_pane_cp20_g5

0xd8f2,	// (0x0005ab0e) bg_popup_sub_pane_cp20_g6

0xd6cd,	// (0x0005a8e9) bg_popup_sub_pane_cp20_g7

0xd6d5,	// (0x0005a8f1) bg_popup_sub_pane_cp20_g8

0xd6dd,	// (0x0005a8f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0005cc1c) bg_popup_sub_pane_cp20_g

0xa330,	// (0x0005754c) list_vitu2_match_list_item_pane_ParamLimits

0xa330,	// (0x0005754c) list_vitu2_match_list_item_pane

0xa342,	// (0x0005755e) list_vitu2_match_list_item_pane_t1

0x9769,	// (0x00056985) bg_popup_sub_pane_cp21

0xb045,	// (0x00058261) grid_vitu2_dropdown_list_pane

0x71a0,	// (0x000543bc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71a0,	// (0x000543bc) cell_vitu2_dropdown_list_char_pane

0x71c1,	// (0x000543dd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71c1,	// (0x000543dd) cell_vitu2_dropdown_list_ctrl_pane

0xd8fa,	// (0x0005ab16) cell_vitu2_dropdown_list_char_pane_g1

0xd903,	// (0x0005ab1f) cell_vitu2_dropdown_list_char_pane_g2

0xd90c,	// (0x0005ab28) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0005cc39) cell_vitu2_dropdown_list_char_pane_g

0x71ed,	// (0x00054409) cell_vitu2_dropdown_list_char_pane_t1

0x71fb,	// (0x00054417) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71fb,	// (0x00054417) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7208,	// (0x00054424) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7208,	// (0x00054424) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7215,	// (0x00054431) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7215,	// (0x00054431) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7222,	// (0x0005443e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7222,	// (0x0005443e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcea6,	// (0x0005a0c2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcea6,	// (0x0005a0c2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005cc40) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005cc40) cell_vitu2_dropdown_list_ctrl_pane_g

0x723e,	// (0x0005445a) aid_size_cell_gallery2_ParamLimits

0x723e,	// (0x0005445a) aid_size_cell_gallery2

0x725c,	// (0x00054478) grid_gallery2_pane_ParamLimits

0x725c,	// (0x00054478) grid_gallery2_pane

0x7276,	// (0x00054492) scroll_pane_cp029_ParamLimits

0x7276,	// (0x00054492) scroll_pane_cp029

0x7282,	// (0x0005449e) cell_gallery2_pane_ParamLimits

0x7282,	// (0x0005449e) cell_gallery2_pane

0xd915,	// (0x0005ab31) cell_gallery2_pane_g2

0x72de,	// (0x000544fa) cell_gallery2_pane_g3

0xd91d,	// (0x0005ab39) cell_gallery2_pane_g4

0xd925,	// (0x0005ab41) cell_gallery2_pane_g5

0xa9b6,	// (0x00057bd2) grid_highlight_pane_cp10

0x6923,	// (0x00053b3f) popup_vitu2_match_list_window_ParamLimits

0x6938,	// (0x00053b54) popup_vitu2_query_window_ParamLimits

0x6938,	// (0x00053b54) popup_vitu2_query_window

0x9769,	// (0x00056985) bg_vitu2_candi_button_pane

0xd8fa,	// (0x0005ab16) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd903,	// (0x0005ab1f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd90c,	// (0x0005ab28) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0502,	// (0x0004d71e) bg_button_pane_cp015

0x72e6,	// (0x00054502) bg_button_pane_cp016

0x72f9,	// (0x00054515) bg_button_pane_cp017

0xc850,	// (0x00059a6c) bg_popup_sub_pane_cp22

0xd92d,	// (0x0005ab49) popup_vitu2_query_window_g1

0x0537,	// (0x0004d753) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0005cc4b) popup_vitu2_query_window_g

0x0556,	// (0x0004d772) popup_vitu2_query_window_t1_ParamLimits

0x0556,	// (0x0004d772) popup_vitu2_query_window_t1

0x058b,	// (0x0004d7a7) popup_vitu2_query_window_t2_ParamLimits

0x058b,	// (0x0004d7a7) popup_vitu2_query_window_t2

0x059d,	// (0x0004d7b9) popup_vitu2_query_window_t3_ParamLimits

0x059d,	// (0x0004d7b9) popup_vitu2_query_window_t3

0x731d,	// (0x00054539) popup_vitu2_query_window_t4_ParamLimits

0x731d,	// (0x00054539) popup_vitu2_query_window_t4

0x733e,	// (0x0005455a) popup_vitu2_query_window_t5_ParamLimits

0x733e,	// (0x0005455a) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005cc52) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005cc52) popup_vitu2_query_window_t

0xd7af,	// (0x0005a9cb) main_cset_text_pane

0x6d79,	// (0x00053f95) aid_area_touch_slider_ParamLimits

0x6d95,	// (0x00053fb1) cset_slider_pane_ParamLimits

0x6dbf,	// (0x00053fdb) main_cset_slider_pane_g1_ParamLimits

0x6dd4,	// (0x00053ff0) main_cset_slider_pane_g2_ParamLimits

0xd7d0,	// (0x0005a9ec) main_cset_slider_pane_g3_ParamLimits

0xd7d0,	// (0x0005a9ec) main_cset_slider_pane_g3

0x6de9,	// (0x00054005) main_cset_slider_pane_g4_ParamLimits

0x6de9,	// (0x00054005) main_cset_slider_pane_g4

0x6df8,	// (0x00054014) main_cset_slider_pane_g5_ParamLimits

0x6df8,	// (0x00054014) main_cset_slider_pane_g5

0x6e04,	// (0x00054020) main_cset_slider_pane_g6_ParamLimits

0x6e04,	// (0x00054020) main_cset_slider_pane_g6

0xf989,	// (0x0005cba5) main_cset_slider_pane_g_ParamLimits

0xd818,	// (0x0005aa34) main_cset_slider_pane_t1_ParamLimits

0x6e78,	// (0x00054094) main_cset_slider_pane_t2_ParamLimits

0x6e92,	// (0x000540ae) main_cset_slider_pane_t3_ParamLimits

0x6eac,	// (0x000540c8) main_cset_slider_pane_t4_ParamLimits

0x6ec6,	// (0x000540e2) main_cset_slider_pane_t5_ParamLimits

0x6ee0,	// (0x000540fc) main_cset_slider_pane_t6_ParamLimits

0x6ef5,	// (0x00054111) main_cset_slider_pane_t7_ParamLimits

0x6f1f,	// (0x0005413b) main_cset_slider_pane_t8_ParamLimits

0x6f1f,	// (0x0005413b) main_cset_slider_pane_t8

0x6f47,	// (0x00054163) main_cset_slider_pane_t9_ParamLimits

0x6f47,	// (0x00054163) main_cset_slider_pane_t9

0x6f6f,	// (0x0005418b) main_cset_slider_pane_t10_ParamLimits

0x6f6f,	// (0x0005418b) main_cset_slider_pane_t10

0x6f97,	// (0x000541b3) main_cset_slider_pane_t11_ParamLimits

0x6f97,	// (0x000541b3) main_cset_slider_pane_t11

0x6fbf,	// (0x000541db) main_cset_slider_pane_t12_ParamLimits

0x6fbf,	// (0x000541db) main_cset_slider_pane_t12

0x6fdc,	// (0x000541f8) main_cset_slider_pane_t13_ParamLimits

0x6fdc,	// (0x000541f8) main_cset_slider_pane_t13

0xf9ae,	// (0x0005cbca) main_cset_slider_pane_t_ParamLimits

0x9769,	// (0x00056985) bg_popup_sub_pane_cp011

0xd939,	// (0x0005ab55) main_cset_text_pane_g1

0xd941,	// (0x0005ab5d) main_cset_text_pane_t1

0xd94f,	// (0x0005ab6b) main_cset_text_pane_t2

0xd95d,	// (0x0005ab79) main_cset_text_pane_t3

0xd96b,	// (0x0005ab87) main_cset_text_pane_t4

0xd979,	// (0x0005ab95) main_cset_text_pane_t5

0xd987,	// (0x0005aba3) main_cset_text_pane_t6

0xd995,	// (0x0005abb1) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0005cc61) main_cset_text_pane_t

0x9769,	// (0x00056985) main_cam4_burst_pane

0x9769,	// (0x00056985) main_cam5_pane

0x6cb8,	// (0x00053ed4) bg_button_pane_cp019

0x6cc1,	// (0x00053edd) bg_button_pane_cp020

0xd7dc,	// (0x0005a9f8) main_cset_slider_pane_g7_ParamLimits

0xd7dc,	// (0x0005a9f8) main_cset_slider_pane_g7

0xd7e8,	// (0x0005aa04) main_cset_slider_pane_g8_ParamLimits

0xd7e8,	// (0x0005aa04) main_cset_slider_pane_g8

0x6e18,	// (0x00054034) main_cset_slider_pane_g9_ParamLimits

0x6e18,	// (0x00054034) main_cset_slider_pane_g9

0x6e24,	// (0x00054040) main_cset_slider_pane_g10_ParamLimits

0x6e24,	// (0x00054040) main_cset_slider_pane_g10

0x6e30,	// (0x0005404c) main_cset_slider_pane_g11_ParamLimits

0x6e30,	// (0x0005404c) main_cset_slider_pane_g11

0x6e3c,	// (0x00054058) main_cset_slider_pane_g12_ParamLimits

0x6e3c,	// (0x00054058) main_cset_slider_pane_g12

0x6e48,	// (0x00054064) main_cset_slider_pane_g13_ParamLimits

0x6e48,	// (0x00054064) main_cset_slider_pane_g13

0x6e54,	// (0x00054070) main_cset_slider_pane_g14_ParamLimits

0x6e54,	// (0x00054070) main_cset_slider_pane_g14

0x6e60,	// (0x0005407c) main_cset_slider_pane_g15_ParamLimits

0x6e60,	// (0x0005407c) main_cset_slider_pane_g15

0xd846,	// (0x0005aa62) main_cset_slider_pane_t14_ParamLimits

0xd846,	// (0x0005aa62) main_cset_slider_pane_t14

0xd87f,	// (0x0005aa9b) main_cset_slider_pane_t15_ParamLimits

0xd87f,	// (0x0005aa9b) main_cset_slider_pane_t15

0x735f,	// (0x0005457b) aid_cam4_burst_size_cell_ParamLimits

0x735f,	// (0x0005457b) aid_cam4_burst_size_cell

0x737f,	// (0x0005459b) grid_cam4_burst_pane_ParamLimits

0x737f,	// (0x0005459b) grid_cam4_burst_pane

0x73b7,	// (0x000545d3) linegrid_cam4_burst_pane_ParamLimits

0x73b7,	// (0x000545d3) linegrid_cam4_burst_pane

0xd9a3,	// (0x0005abbf) scroll_pane_cp30_ParamLimits

0xd9a3,	// (0x0005abbf) scroll_pane_cp30

0x73db,	// (0x000545f7) cell_cam4_burst_pane_ParamLimits

0x73db,	// (0x000545f7) cell_cam4_burst_pane

0xd9af,	// (0x0005abcb) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9af,	// (0x0005abcb) linegrid_cam4_burst_pane_g1

0x7428,	// (0x00054644) linegrid_cam4_burst_pane_g2_ParamLimits

0x7428,	// (0x00054644) linegrid_cam4_burst_pane_g2

0xd9bc,	// (0x0005abd8) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9bc,	// (0x0005abd8) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0005cc70) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0005cc70) linegrid_cam4_burst_pane_g

0x7439,	// (0x00054655) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7439,	// (0x00054655) linegrid_cam4_burst_pane_g3_copy1

0xd9c9,	// (0x0005abe5) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9c9,	// (0x0005abe5) linegrid_cam4_burst_pane_g4

0x7453,	// (0x0005466f) linegrid_cam4_burst_pane_g5_ParamLimits

0x7453,	// (0x0005466f) linegrid_cam4_burst_pane_g5

0x7464,	// (0x00054680) linegrid_cam4_burst_pane_g6_ParamLimits

0x7464,	// (0x00054680) linegrid_cam4_burst_pane_g6

0xd9d6,	// (0x0005abf2) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9d6,	// (0x0005abf2) linegrid_cam4_burst_pane_g7

0x747b,	// (0x00054697) cell_cam4_burst_pane_g1

0xd9ef,	// (0x0005ac0b) main_cam5_pane_t1_ParamLimits

0xd9ef,	// (0x0005ac0b) main_cam5_pane_t1

0xda01,	// (0x0005ac1d) main_cam5_pane_t2_ParamLimits

0xda01,	// (0x0005ac1d) main_cam5_pane_t2

0xda13,	// (0x0005ac2f) main_cam5_pane_t3_ParamLimits

0xda13,	// (0x0005ac2f) main_cam5_pane_t3

0xda25,	// (0x0005ac41) main_cam5_pane_t4_ParamLimits

0xda25,	// (0x0005ac41) main_cam5_pane_t4

0xda3d,	// (0x0005ac59) main_cam5_pane_t5_ParamLimits

0xda3d,	// (0x0005ac59) main_cam5_pane_t5

0xda51,	// (0x0005ac6d) main_cam5_pane_t6_ParamLimits

0xda51,	// (0x0005ac6d) main_cam5_pane_t6

0xda65,	// (0x0005ac81) main_cam5_pane_t7_ParamLimits

0xda65,	// (0x0005ac81) main_cam5_pane_t7

0xda77,	// (0x0005ac93) main_cam5_pane_t8_ParamLimits

0xda77,	// (0x0005ac93) main_cam5_pane_t8

0xda93,	// (0x0005acaf) main_cam5_pane_t9_ParamLimits

0xda93,	// (0x0005acaf) main_cam5_pane_t9

0xdaa5,	// (0x0005acc1) main_cam5_pane_t10_ParamLimits

0xdaa5,	// (0x0005acc1) main_cam5_pane_t10

0xdab7,	// (0x0005acd3) main_cam5_pane_t11_ParamLimits

0xdab7,	// (0x0005acd3) main_cam5_pane_t11

0xdac9,	// (0x0005ace5) main_cam5_pane_t12_ParamLimits

0xdac9,	// (0x0005ace5) main_cam5_pane_t12

0xdade,	// (0x0005acfa) main_cam5_pane_t13_ParamLimits

0xdade,	// (0x0005acfa) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0005cc7c) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0005cc7c) main_cam5_pane_t

0x119a,	// (0x0004e3b6) popup_scut_keymap_window_ParamLimits

0x119a,	// (0x0004e3b6) popup_scut_keymap_window

0x748e,	// (0x000546aa) aid_size_cell_brow_shortcut

0xa9b6,	// (0x00057bd2) bg_popup_window_pane_cp010

0x749a,	// (0x000546b6) grid_scut_pane

0x74a6,	// (0x000546c2) cell_scut_pane_ParamLimits

0x74a6,	// (0x000546c2) cell_scut_pane

0x74bd,	// (0x000546d9) cell_scut_pane_g1

0xdafb,	// (0x0005ad17) cell_scut_pane_t1

0xdb0a,	// (0x0005ad26) cell_scut_pane_t2

0x74c6,	// (0x000546e2) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0005cc97) cell_scut_pane_t

0x538f,	// (0x000525ab) main_mup3_pane_g8_ParamLimits

0x538f,	// (0x000525ab) main_mup3_pane_g8

0x681c,	// (0x00053a38) area_vitu2_query_pane_ParamLimits

0x681c,	// (0x00053a38) area_vitu2_query_pane

0x0516,	// (0x0004d732) input_focus_pane_cp08

0xdb19,	// (0x0005ad35) area_vitu2_query_pane_g1

0x061b,	// (0x0004d837) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0005cc9e) area_vitu2_query_pane_g

0x74d4,	// (0x000546f0) area_vitu2_query_pane_t1_ParamLimits

0x74d4,	// (0x000546f0) area_vitu2_query_pane_t1

0x74e8,	// (0x00054704) area_vitu2_query_pane_t2_ParamLimits

0x74e8,	// (0x00054704) area_vitu2_query_pane_t2

0x062c,	// (0x0004d848) area_vitu2_query_pane_t3_ParamLimits

0x062c,	// (0x0004d848) area_vitu2_query_pane_t3

0x74fc,	// (0x00054718) area_vitu2_query_pane_t4_ParamLimits

0x74fc,	// (0x00054718) area_vitu2_query_pane_t4

0x7524,	// (0x00054740) area_vitu2_query_pane_t5_ParamLimits

0x7524,	// (0x00054740) area_vitu2_query_pane_t5

0x754c,	// (0x00054768) area_vitu2_query_pane_t6_ParamLimits

0x754c,	// (0x00054768) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0005cca3) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0005cca3) area_vitu2_query_pane_t

0x7598,	// (0x000547b4) bg_button_pane_cp018

0x75a6,	// (0x000547c2) bg_button_pane_cp021

0x0654,	// (0x0004d870) bg_button_pane_cp022

0x0665,	// (0x0004d881) input_focus_pane_cp09

0xb22c,	// (0x00058448) aid_size_touch_mv_arrow_left

0xb257,	// (0x00058473) aid_size_touch_mv_arrow_right

0xd7f4,	// (0x0005aa10) main_cset_slider_pane_g16_ParamLimits

0xd7f4,	// (0x0005aa10) main_cset_slider_pane_g16

0xd800,	// (0x0005aa1c) main_cset_slider_pane_g17_ParamLimits

0xd800,	// (0x0005aa1c) main_cset_slider_pane_g17

0x747b,	// (0x00054697) cell_cam4_burst_pane_g1_ParamLimits

0x9769,	// (0x00056985) compa_mode_pane

0x7046,	// (0x00054262) popup_vtel_slider_window_g3_ParamLimits

0x7046,	// (0x00054262) popup_vtel_slider_window_g3

0x705d,	// (0x00054279) popup_vtel_slider_window_g4_ParamLimits

0x705d,	// (0x00054279) popup_vtel_slider_window_g4

0x7074,	// (0x00054290) popup_vtel_slider_window_t1_ParamLimits

0x7074,	// (0x00054290) popup_vtel_slider_window_t1

0x9769,	// (0x00056985) main_cl_pane

0x9e83,	// (0x0005709f) popup_imed_adjust2_window_ParamLimits

0xc850,	// (0x00059a6c) bg_tb_trans_pane_cp05_ParamLimits

0xd172,	// (0x0005a38e) popup_imed_adjust2_window_g1_ParamLimits

0xd181,	// (0x0005a39d) popup_imed_adjust2_window_g2_ParamLimits

0xd181,	// (0x0005a39d) popup_imed_adjust2_window_g2

0xd18d,	// (0x0005a3a9) popup_imed_adjust2_window_g3_ParamLimits

0xd18d,	// (0x0005a3a9) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0005ca0e) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0005ca0e) popup_imed_adjust2_window_g

0xd199,	// (0x0005a3b5) popup_imed_adjust2_window_t1_ParamLimits

0xd1b1,	// (0x0005a3cd) slider_imed_adjust_pane_ParamLimits

0xd1c5,	// (0x0005a3e1) slider_imed_adjust_pane_g1_ParamLimits

0xd1d5,	// (0x0005a3f1) slider_imed_adjust_pane_g2_ParamLimits

0xd1e5,	// (0x0005a401) slider_imed_adjust_pane_g3_ParamLimits

0xd1f6,	// (0x0005a412) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0005ca15) slider_imed_adjust_pane_g_ParamLimits

0x65a5,	// (0x000537c1) aid_touch_area_cam4_ParamLimits

0x65a5,	// (0x000537c1) aid_touch_area_cam4

0xa1ff,	// (0x0005741b) battery_pane_cp01

0x6674,	// (0x00053890) main_camera4_pane_g6_ParamLimits

0x6674,	// (0x00053890) main_camera4_pane_g6

0x669e,	// (0x000538ba) main_camera4_pane_t2_ParamLimits

0x669e,	// (0x000538ba) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0005cb18) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0005cb18) main_camera4_pane_t

0x66d3,	// (0x000538ef) aid_touch_area_vid4_ParamLimits

0x66d3,	// (0x000538ef) aid_touch_area_vid4

0x6727,	// (0x00053943) main_video4_pane_g5_ParamLimits

0x6727,	// (0x00053943) main_video4_pane_g5

0x674c,	// (0x00053968) vid4_progress_pane_ParamLimits

0x674c,	// (0x00053968) vid4_progress_pane

0xd80c,	// (0x0005aa28) main_cset_slider_pane_g18_ParamLimits

0xd80c,	// (0x0005aa28) main_cset_slider_pane_g18

0xd9e3,	// (0x0005abff) cell_cam4_burst_pane_g2_ParamLimits

0xd9e3,	// (0x0005abff) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0005cc77) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005cc77) cell_cam4_burst_pane_g

0xa7c1,	// (0x000579dd) bg_cl_pane_ParamLimits

0xa7c1,	// (0x000579dd) bg_cl_pane

0x75b2,	// (0x000547ce) cl_header_pane_ParamLimits

0x75b2,	// (0x000547ce) cl_header_pane

0x75c6,	// (0x000547e2) cl_listscroll_pane_ParamLimits

0x75c6,	// (0x000547e2) cl_listscroll_pane

0xdb25,	// (0x0005ad41) bg_cl_pane_g1

0xdb2d,	// (0x0005ad49) bg_cl_pane_g2

0xdb35,	// (0x0005ad51) bg_cl_pane_g3

0xdb3d,	// (0x0005ad59) bg_cl_pane_g4

0xdb45,	// (0x0005ad61) bg_cl_pane_g5

0xdb4d,	// (0x0005ad69) bg_cl_pane_g6

0xdb55,	// (0x0005ad71) bg_cl_pane_g7

0xdb5d,	// (0x0005ad79) bg_cl_pane_g8

0xdb65,	// (0x0005ad81) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0005ccb2) bg_cl_pane_g

0x75d6,	// (0x000547f2) aid_height_cl_leading_ParamLimits

0x75d6,	// (0x000547f2) aid_height_cl_leading

0x75e2,	// (0x000547fe) aid_height_cl_text_ParamLimits

0x75e2,	// (0x000547fe) aid_height_cl_text

0xa55f,	// (0x0005777b) bg_cl_header_pane_ParamLimits

0xa55f,	// (0x0005777b) bg_cl_header_pane

0x7601,	// (0x0005481d) cl_header_pane_g1_ParamLimits

0x7601,	// (0x0005481d) cl_header_pane_g1

0x7617,	// (0x00054833) cl_header_pane_t1_ParamLimits

0x7617,	// (0x00054833) cl_header_pane_t1

0xdb6d,	// (0x0005ad89) cl_list_pane

0xd7c7,	// (0x0005a9e3) hc_scroll_pane_cp01

0xabef,	// (0x00057e0b) bg_cl_header_pane_g1

0xd6ad,	// (0x0005a8c9) bg_cl_header_pane_g2

0xac0f,	// (0x00057e2b) bg_cl_header_pane_g3

0xd6bd,	// (0x0005a8d9) bg_cl_header_pane_g4

0xd6b5,	// (0x0005a8d1) bg_cl_header_pane_g5

0xd8f2,	// (0x0005ab0e) bg_cl_header_pane_g6

0xd6d5,	// (0x0005a8f1) bg_cl_header_pane_g7

0xd6dd,	// (0x0005a8f9) bg_cl_header_pane_g8

0xd6cd,	// (0x0005a8e9) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0005ccc5) bg_cl_header_pane_g

0x7630,	// (0x0005484c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7630,	// (0x0005484c) hc_cl_list_double_graphic_heading_pane

0x7641,	// (0x0005485d) hc_cl_list_single_graphic_pane_ParamLimits

0x7641,	// (0x0005485d) hc_cl_list_single_graphic_pane

0x765a,	// (0x00054876) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x765a,	// (0x00054876) hc_cl_list_single_graphic_pane_g1

0x7666,	// (0x00054882) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7666,	// (0x00054882) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0005ccd8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0005ccd8) hc_cl_list_single_graphic_pane_g

0x767a,	// (0x00054896) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x767a,	// (0x00054896) hc_cl_list_single_graphic_pane_t1

0x765a,	// (0x00054876) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x765a,	// (0x00054876) hc_cl_list_double_graphic_heading_pane_g1

0x768f,	// (0x000548ab) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x768f,	// (0x000548ab) hc_cl_list_double_graphic_heading_pane_g2

0x76a3,	// (0x000548bf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76a3,	// (0x000548bf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0005ccdd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0005ccdd) hc_cl_list_double_graphic_heading_pane_g

0x76b7,	// (0x000548d3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76b7,	// (0x000548d3) hc_cl_list_double_graphic_heading_pane_t1

0x76cc,	// (0x000548e8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76cc,	// (0x000548e8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0005cce4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0005cce4) hc_cl_list_double_graphic_heading_pane_t

0xa358,	// (0x00057574) vid4_progress_pane_g1

0xa368,	// (0x00057584) vid4_progress_pane_g2

0x76e1,	// (0x000548fd) vid4_progress_pane_g3

0xa378,	// (0x00057594) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0005cce9) vid4_progress_pane_g

0x76f3,	// (0x0005490f) vid4_progress_pane_t1

0xa390,	// (0x000575ac) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0005ccf4) vid4_progress_pane_t

0x7709,	// (0x00054925) wait_bar_pane_cp07

0xca4b,	// (0x00059c67) blid_firmament_pane_ParamLimits

0xca8e,	// (0x00059caa) popup_blid_sat_info2_window_g1

0xcab2,	// (0x00059cce) popup_blid_sat_info2_window_t3

0xcac0,	// (0x00059cdc) popup_blid_sat_info2_window_t4

0xcace,	// (0x00059cea) popup_blid_sat_info2_window_t5

0xcadc,	// (0x00059cf8) popup_blid_sat_info2_window_t6

0xcaec,	// (0x00059d08) popup_blid_sat_info2_window_t7

0xcafa,	// (0x00059d16) popup_blid_sat_info2_window_t8

0xcb08,	// (0x00059d24) popup_blid_sat_info2_window_t9

0xcb16,	// (0x00059d32) popup_blid_sat_info2_window_t10

0xcbd8,	// (0x00059df4) aid_firma_cardinal_ParamLimits

0xcbec,	// (0x00059e08) blid_firmament_pane_t1_ParamLimits

0xcc03,	// (0x00059e1f) blid_firmament_pane_t2_ParamLimits

0xcc1a,	// (0x00059e36) blid_firmament_pane_t3_ParamLimits

0xcc31,	// (0x00059e4d) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0005c902) blid_firmament_pane_t_ParamLimits

0xcc48,	// (0x00059e64) blid_sat_info_pane_ParamLimits

0xa55f,	// (0x0005777b) main_cam_set_pane_ParamLimits

0x5c4e,	// (0x00052e6a) aid_size_cell_colour_35_ParamLimits

0x5c6e,	// (0x00052e8a) aid_size_cell_colour_112_ParamLimits

0x5c8e,	// (0x00052eaa) aid_size_cell_effect_ParamLimits

0xc850,	// (0x00059a6c) bg_tb_trans_pane_cp02_ParamLimits

0xae57,	// (0x00058073) heading_imed_pane_ParamLimits

0x5cae,	// (0x00052eca) listscroll_imed_pane_ParamLimits

0xbe36,	// (0x00059052) popup_call2_audio_first_window_g5_ParamLimits

0xbe36,	// (0x00059052) popup_call2_audio_first_window_g5

0x624c,	// (0x00053468) aid_size_touch_image3_arrow_left_ParamLimits

0x624c,	// (0x00053468) aid_size_touch_image3_arrow_left

0x6278,	// (0x00053494) aid_size_touch_image3_arrow_right_ParamLimits

0x6278,	// (0x00053494) aid_size_touch_image3_arrow_right

0xa3a5,	// (0x000575c1) vid4_progress_pane_t3

0x5fc3,	// (0x000531df) main_hwr_training_symbol_option_pane_ParamLimits

0x5fc3,	// (0x000531df) main_hwr_training_symbol_option_pane

0xd45f,	// (0x0005a67b) popup_hwr_training_preview_window_ParamLimits

0xd45f,	// (0x0005a67b) popup_hwr_training_preview_window

0x5fe3,	// (0x000531ff) hwr_training_navi_pane_g5_ParamLimits

0x5fe3,	// (0x000531ff) hwr_training_navi_pane_g5

0xd69b,	// (0x0005a8b7) popup_char_count_window

0xa55f,	// (0x0005777b) bg_popup_sub_pane_cp20_ParamLimits

0x7182,	// (0x0005439e) list_vitu2_match_list_pane_ParamLimits

0x7191,	// (0x000543ad) vitu2_page_scroll_pane_ParamLimits

0x7191,	// (0x000543ad) vitu2_page_scroll_pane

0xdb76,	// (0x0005ad92) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb76,	// (0x0005ad92) list_single_hwr_training_symbol_option_pane

0xdb89,	// (0x0005ada5) list_single_hwr_training_symbol_option_pane_g1

0xdb91,	// (0x0005adad) list_single_hwr_training_symbol_option_pane_t1

0xdb9f,	// (0x0005adbb) bg_button_pane_cp023

0xdba8,	// (0x0005adc4) bg_button_pane_cp024

0x773c,	// (0x00054958) vitu2_page_scroll_pane_g1

0x7744,	// (0x00054960) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0005ccfb) vitu2_page_scroll_pane_g

0x774c,	// (0x00054968) vitu2_page_scroll_pane_t1

0xcc81,	// (0x00059e9d) popup_char_count_window_g1

0xdbdb,	// (0x0005adf7) popup_char_count_window_g2

0xdbe4,	// (0x0005ae00) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0005cd00) popup_char_count_window_g

0xdbed,	// (0x0005ae09) popup_char_count_window_t1

0x9769,	// (0x00056985) main_vded2_pane

0xd15e,	// (0x0005a37a) aid_size_cell_imed_line

0xd168,	// (0x0005a384) grid_imed_line_width_pane

0xa2af,	// (0x000574cb) vid4_indicators_pane_g4

0xdbfb,	// (0x0005ae17) cell_imed_line_width_pane_ParamLimits

0xdbfb,	// (0x0005ae17) cell_imed_line_width_pane

0xdc0f,	// (0x0005ae2b) cell_imed_line_width_pane_g1

0xdc18,	// (0x0005ae34) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0005cd07) cell_imed_line_width_pane_g

0x775b,	// (0x00054977) main_vded2_pane_g1_ParamLimits

0x775b,	// (0x00054977) main_vded2_pane_g1

0x7771,	// (0x0005498d) main_vded2_pane_g2_ParamLimits

0x7771,	// (0x0005498d) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0005cd0c) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0005cd0c) main_vded2_pane_g

0x7783,	// (0x0005499f) vded2_slider_pane_ParamLimits

0x7783,	// (0x0005499f) vded2_slider_pane

0x7793,	// (0x000549af) aid_size_touch_vded2_end

0x779d,	// (0x000549b9) aid_size_touch_vded2_playhead

0xdc20,	// (0x0005ae3c) aid_size_touch_vded2_start

0xdc28,	// (0x0005ae44) vded2_slider_bg_pane

0xdc31,	// (0x0005ae4d) vded2_slider_pane_g1

0xdc3a,	// (0x0005ae56) vded2_slider_pane_g2

0x77a7,	// (0x000549c3) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0005cd11) vded2_slider_pane_g

0xdc42,	// (0x0005ae5e) vded2_slider_bg_pane_g1

0xdc4b,	// (0x0005ae67) vded2_slider_bg_pane_g2

0xdc54,	// (0x0005ae70) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0005cd18) vded2_slider_bg_pane_g

0x3976,	// (0x00050b92) aid_postcard_touch_down_pane_ParamLimits

0x3976,	// (0x00050b92) aid_postcard_touch_down_pane

0x398c,	// (0x00050ba8) aid_postcard_touch_up_pane_ParamLimits

0x398c,	// (0x00050ba8) aid_postcard_touch_up_pane

0x9769,	// (0x00056985) main_blid2_pane

0x9e69,	// (0x00057085) popup_blid2_search_window

0x9769,	// (0x00056985) blid2_gps_pane

0x9769,	// (0x00056985) blid2_navig_pane

0x9769,	// (0x00056985) blid2_search_pane

0x9769,	// (0x00056985) blid2_tripm_pane

0x77b2,	// (0x000549ce) blid2_search_pane_g1_ParamLimits

0x77b2,	// (0x000549ce) blid2_search_pane_g1

0x77ca,	// (0x000549e6) blid2_search_pane_t1_ParamLimits

0x77ca,	// (0x000549e6) blid2_search_pane_t1

0x77dc,	// (0x000549f8) aid_size_cell_blid2_gps_ParamLimits

0x77dc,	// (0x000549f8) aid_size_cell_blid2_gps

0x77f4,	// (0x00054a10) blid2_gps_pane_g1_ParamLimits

0x77f4,	// (0x00054a10) blid2_gps_pane_g1

0x7808,	// (0x00054a24) grid_blid2_satellite_pane_ParamLimits

0x7808,	// (0x00054a24) grid_blid2_satellite_pane

0x7822,	// (0x00054a3e) blid2_navig_pane_g1_ParamLimits

0x7822,	// (0x00054a3e) blid2_navig_pane_g1

0x782e,	// (0x00054a4a) blid2_navig_pane_t1_ParamLimits

0x782e,	// (0x00054a4a) blid2_navig_pane_t1

0x7849,	// (0x00054a65) blid2_navig_pane_t2_ParamLimits

0x7849,	// (0x00054a65) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005cd1f) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005cd1f) blid2_navig_pane_t

0x7864,	// (0x00054a80) blid2_navig_ring_pane_ParamLimits

0x7864,	// (0x00054a80) blid2_navig_ring_pane

0x787d,	// (0x00054a99) blid2_speed_pane_ParamLimits

0x787d,	// (0x00054a99) blid2_speed_pane

0x7889,	// (0x00054aa5) blid2_tripm_pane_g1_ParamLimits

0x7889,	// (0x00054aa5) blid2_tripm_pane_g1

0x78a4,	// (0x00054ac0) blid2_tripm_pane_g2_ParamLimits

0x78a4,	// (0x00054ac0) blid2_tripm_pane_g2

0x78b8,	// (0x00054ad4) blid2_tripm_pane_g3_ParamLimits

0x78b8,	// (0x00054ad4) blid2_tripm_pane_g3

0x78cc,	// (0x00054ae8) blid2_tripm_pane_g4_ParamLimits

0x78cc,	// (0x00054ae8) blid2_tripm_pane_g4

0x78e0,	// (0x00054afc) blid2_tripm_pane_g5_ParamLimits

0x78e0,	// (0x00054afc) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005cd24) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005cd24) blid2_tripm_pane_g

0x7906,	// (0x00054b22) blid2_tripm_pane_t1_ParamLimits

0x7906,	// (0x00054b22) blid2_tripm_pane_t1

0x7921,	// (0x00054b3d) blid2_tripm_pane_t2_ParamLimits

0x7921,	// (0x00054b3d) blid2_tripm_pane_t2

0x793a,	// (0x00054b56) blid2_tripm_pane_t3_ParamLimits

0x793a,	// (0x00054b56) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005cd31) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005cd31) blid2_tripm_pane_t

0x7981,	// (0x00054b9d) cell_blid2_satellite_pane_ParamLimits

0x7981,	// (0x00054b9d) cell_blid2_satellite_pane

0x799f,	// (0x00054bbb) cell_blid2_satellite_pane_g1

0xdc5d,	// (0x0005ae79) cell_blid2_satellite_pane_t1

0xcc58,	// (0x00059e74) blid2_speed_pane_g1

0xdc6b,	// (0x0005ae87) blid2_speed_pane_t1

0xdc79,	// (0x0005ae95) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005cd3a) blid2_speed_pane_t

0xcc58,	// (0x00059e74) blid2_navig_ring_pane_g1

0x79a8,	// (0x00054bc4) blid2_navig_ring_pane_g2

0x79b0,	// (0x00054bcc) blid2_navig_ring_pane_g3

0x79b8,	// (0x00054bd4) blid2_navig_ring_pane_g4

0x79c0,	// (0x00054bdc) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005cd3f) blid2_navig_ring_pane_g

0x9769,	// (0x00056985) bg_popup_window_pane_cp011

0xdc87,	// (0x0005aea3) popup_blid2_search_window_g1

0xdc8f,	// (0x0005aeab) popup_blid2_search_window_t1

0xdc9d,	// (0x0005aeb9) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005cd4a) popup_blid2_search_window_t

0xaafe,	// (0x00057d1a) main_browser_pane_g1

0xa7c1,	// (0x000579dd) main_browser_pane_ParamLimits

0xa55f,	// (0x0005777b) bg_button_pane_cp011_ParamLimits

0x6a51,	// (0x00053c6d) cell_vitu2_function_pane_g1_ParamLimits

0xc850,	// (0x00059a6c) bg_popup_sub_pane_cp22_ParamLimits

0x0516,	// (0x0004d732) input_focus_pane_cp08_ParamLimits

0x730c,	// (0x00054528) popup_vitu2_query_button_pane_ParamLimits

0x730c,	// (0x00054528) popup_vitu2_query_button_pane

0x052d,	// (0x0004d749) popup_vitu2_query_input_button_pane

0xd92d,	// (0x0005ab49) popup_vitu2_query_window_g1_ParamLimits

0x0537,	// (0x0004d753) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0005cc4b) popup_vitu2_query_window_g_ParamLimits

0x9769,	// (0x00056985) bg_button_pane_cp026

0x79c8,	// (0x00054be4) popup_vitu2_query_input_button_pane_g1

0x9769,	// (0x00056985) bg_button_pane_cp025

0xdcab,	// (0x0005aec7) popup_vitu2_query_button_pane_t1

0x500d,	// (0x00052229) main_mp3_pane_t6

0x501b,	// (0x00052237) popup_slider_window_cp01

0xa21b,	// (0x00057437) cam4_battery_pane

0xa26e,	// (0x0005748a) cam4_battery_pane_cp02

0xa350,	// (0x0005756c) cam4_battery_pane_cp01

0xa350,	// (0x0005756c) cam4_battery_pane_cp03

0xcc58,	// (0x00059e74) cam4_battery_pane_g1

0xdcb9,	// (0x0005aed5) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005cd4f) cam4_battery_pane_g

0xcb24,	// (0x00059d40) popup_blid_sat_info2_window_t11

0xb22c,	// (0x00058448) aid_size_touch_mv_arrow_left_ParamLimits

0xb257,	// (0x00058473) aid_size_touch_mv_arrow_right_ParamLimits

0xb2b5,	// (0x000584d1) navi_pane_g1_ParamLimits

0xb2c1,	// (0x000584dd) navi_pane_g2_ParamLimits

0xb2ef,	// (0x0005850b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005c601) navi_pane_g_ParamLimits

0x33f7,	// (0x00050613) navi_pane_mv_t1_ParamLimits

0x5cba,	// (0x00052ed6) grid_imed_effect_pane_ParamLimits

0x20c8,	// (0x0004f2e4) aid_placing_vt_slider_lsc

0xaa4d,	// (0x00057c69) aid_placing_vt_slider_prt

0xa55f,	// (0x0005777b) bg_tb_trans_pane_cp01_ParamLimits

0xcdc6,	// (0x00059fe2) popup_image_details_window_g1_ParamLimits

0xcdd9,	// (0x00059ff5) popup_image_details_window_g2_ParamLimits

0xcdee,	// (0x0005a00a) popup_image_details_window_g3_ParamLimits

0xcdee,	// (0x0005a00a) popup_image_details_window_g3

0xf72b,	// (0x0005c947) popup_image_details_window_g_ParamLimits

0xce02,	// (0x0005a01e) popup_image_details_window_t1_ParamLimits

0xce14,	// (0x0005a030) popup_image_details_window_t2_ParamLimits

0xce2d,	// (0x0005a049) popup_image_details_window_t3_ParamLimits

0xce41,	// (0x0005a05d) popup_image_details_window_t4_ParamLimits

0xce5c,	// (0x0005a078) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0005c94e) popup_image_details_window_t_ParamLimits

0x75ee,	// (0x0005480a) cl_header_name_pane_ParamLimits

0x75ee,	// (0x0005480a) cl_header_name_pane

0x79d0,	// (0x00054bec) cl_header_name_pane_t1_ParamLimits

0x79d0,	// (0x00054bec) cl_header_name_pane_t1

0x79f1,	// (0x00054c0d) cl_header_name_pane_t2_ParamLimits

0x79f1,	// (0x00054c0d) cl_header_name_pane_t2

0x7a33,	// (0x00054c4f) cl_header_name_pane_t3_ParamLimits

0x7a33,	// (0x00054c4f) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005cd54) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005cd54) cl_header_name_pane_t

0xb398,	// (0x000585b4) navi_pane_mv_g2_ParamLimits

0xd675,	// (0x0005a891) field_vitu2_entry_pane_g1_ParamLimits

0xd681,	// (0x0005a89d) field_vitu2_entry_pane_g2_ParamLimits

0xd68d,	// (0x0005a8a9) field_vitu2_entry_pane_g3_ParamLimits

0xd68d,	// (0x0005a8a9) field_vitu2_entry_pane_g3

0xf92e,	// (0x0005cb4a) field_vitu2_entry_pane_g_ParamLimits

0xa2e2,	// (0x000574fe) cell_vitu2_itu_pane_g1_ParamLimits

0x69e5,	// (0x00053c01) cell_vitu2_itu_pane_g2_ParamLimits

0x69e5,	// (0x00053c01) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0005cb56) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0005cb56) cell_vitu2_itu_pane_g

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp05_ParamLimits

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp05

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp03

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp04

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp10_ParamLimits

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp10

0x0654,	// (0x0004d870) bg_vkb2_func_pane_cp08

0x7598,	// (0x000547b4) bg_vkb2_func_pane_cp06

0x75a6,	// (0x000547c2) bg_vkb2_func_pane_cp07

0xdbb1,	// (0x0005adcd) bg_vkb2_func_pane_cp11_ParamLimits

0xdbb1,	// (0x0005adcd) bg_vkb2_func_pane_cp11

0xdbc6,	// (0x0005ade2) bg_vkb2_func_pane_cp12_ParamLimits

0xdbc6,	// (0x0005ade2) bg_vkb2_func_pane_cp12

0x9769,	// (0x00056985) bg_vkb2_func_pane_cp09

0xd6ad,	// (0x0005a8c9) bg_vkb2_func_pane_g1

0xac0f,	// (0x00057e2b) bg_vkb2_func_pane_g2

0xd6b5,	// (0x0005a8d1) bg_vkb2_func_pane_g3

0xd6bd,	// (0x0005a8d9) bg_vkb2_func_pane_g4

0xd8f2,	// (0x0005ab0e) bg_vkb2_func_pane_g5

0xd6d5,	// (0x0005a8f1) bg_vkb2_func_pane_g6

0xd6dd,	// (0x0005a8f9) bg_vkb2_func_pane_g7

0xd6cd,	// (0x0005a8e9) bg_vkb2_func_pane_g8

0xabef,	// (0x00057e0b) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005cd5b) bg_vkb2_func_pane_g

0x78f4,	// (0x00054b10) blid2_tripm_pane_g6_ParamLimits

0x78f4,	// (0x00054b10) blid2_tripm_pane_g6

0xd517,	// (0x0005a733) mp4_progress_pane_g1

0x796d,	// (0x00054b89) blid2_tripm_values_pane_ParamLimits

0x796d,	// (0x00054b89) blid2_tripm_values_pane

0x7a64,	// (0x00054c80) blid2_tripm_values_pane_t1

0x7a72,	// (0x00054c8e) blid2_tripm_values_pane_t2

0x7a80,	// (0x00054c9c) blid2_tripm_values_pane_t3

0x7a8e,	// (0x00054caa) blid2_tripm_values_pane_t4

0x7a9c,	// (0x00054cb8) blid2_tripm_values_pane_t5

0x7aaa,	// (0x00054cc6) blid2_tripm_values_pane_t6

0x7ab8,	// (0x00054cd4) blid2_tripm_values_pane_t7

0x7ac6,	// (0x00054ce2) blid2_tripm_values_pane_t8

0x7ad4,	// (0x00054cf0) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005cd6e) blid2_tripm_values_pane_t

0x210a,	// (0x0004f326) call_video_pane_t1_ParamLimits

0x2128,	// (0x0004f344) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005c48a) call_video_pane_t_ParamLimits

0x034a,	// (0x0004d566) msg_header_pane_g1_ParamLimits

0xb580,	// (0x0005879c) msg_header_pane_g2_ParamLimits

0xb580,	// (0x0005879c) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c6a4) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c6a4) msg_header_pane_g

0xa7c1,	// (0x000579dd) main_clock2_pane_ParamLimits

0x59b7,	// (0x00052bd3) grid_clock2_toolbar_pane_ParamLimits

0x59b7,	// (0x00052bd3) grid_clock2_toolbar_pane

0x59b7,	// (0x00052bd3) listscroll_clock2_pane_ParamLimits

0x59b7,	// (0x00052bd3) listscroll_clock2_pane

0x5aae,	// (0x00052cca) main_clock2_pane_t3_ParamLimits

0x5aae,	// (0x00052cca) main_clock2_pane_t3

0x5ad2,	// (0x00052cee) main_clock2_pane_t4_ParamLimits

0x5ad2,	// (0x00052cee) main_clock2_pane_t4

0xdcc3,	// (0x0005aedf) cell_clock2_toolbar_pane

0xdccb,	// (0x0005aee7) cell_clock2_toolbar_pane_cp01

0xdccb,	// (0x0005aee7) cell_clock2_toolbar_pane_cp02

0xdcd3,	// (0x0005aeef) cell_clock2_toolbar_pane_cp03

0xdcdb,	// (0x0005aef7) list_clock2_pane

0xb1b1,	// (0x000583cd) scroll_pane_cp10

0xdce3,	// (0x0005aeff) list_single_clock2_pane_ParamLimits

0xdce3,	// (0x0005aeff) list_single_clock2_pane

0xa9b6,	// (0x00057bd2) list_highlight_pane_cp08

0xdcf0,	// (0x0005af0c) list_single_clock2_pane_t1

0xdcfe,	// (0x0005af1a) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005cd81) list_single_clock2_pane_t

0x9769,	// (0x00056985) bg_button_pane_cp10

0xdd3e,	// (0x0005af5a) cell_clock2_toolbar_pane_g1

0x3902,	// (0x00050b1e) aid_main_viewer_pane_g1_ParamLimits

0x3902,	// (0x00050b1e) aid_main_viewer_pane_g1

0x3910,	// (0x00050b2c) aid_main_viewer_pane_g2_ParamLimits

0x3910,	// (0x00050b2c) aid_main_viewer_pane_g2

0x391e,	// (0x00050b3a) aid_main_viewer_pane_g3_ParamLimits

0x391e,	// (0x00050b3a) aid_main_viewer_pane_g3

0x392d,	// (0x00050b49) aid_main_viewer_pane_g4_ParamLimits

0x392d,	// (0x00050b49) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c6b5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c6b5) aid_main_viewer_pane_g

0x4235,	// (0x00051451) main_calc_pane_ParamLimits

0x4249,	// (0x00051465) main_dialer2_pane_ParamLimits

0x9769,	// (0x00056985) main_cam6_pane

0x9769,	// (0x00056985) main_vid6_pane

0x59c3,	// (0x00052bdf) listscroll_gen_pane_cp06_ParamLimits

0x59c3,	// (0x00052bdf) listscroll_gen_pane_cp06

0x5af5,	// (0x00052d11) main_clock2_pane_t5_ParamLimits

0x5af5,	// (0x00052d11) main_clock2_pane_t5

0x5b4f,	// (0x00052d6b) aid_call2_pane_cp10_ParamLimits

0x5b61,	// (0x00052d7d) aid_call_pane_cp10_ParamLimits

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b73,	// (0x00052d8f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b73,	// (0x00052d8f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb220,	// (0x0005843c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0005ca03) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b85,	// (0x00052da1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61f9,	// (0x00053415) cell_dialer2_keypad_pane_g2_ParamLimits

0x61f9,	// (0x00053415) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0005cae9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0005cae9) cell_dialer2_keypad_pane_g

0x6215,	// (0x00053431) cell_dialer2_keypad_pane_t1

0x6d6b,	// (0x00053f87) main_cset_text2_pane_ParamLimits

0x6d6b,	// (0x00053f87) main_cset_text2_pane

0xdb19,	// (0x0005ad35) area_vitu2_query_pane_g1_ParamLimits

0x061b,	// (0x0004d837) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0005cc9e) area_vitu2_query_pane_g_ParamLimits

0x7574,	// (0x00054790) area_vitu2_query_pane_t7_ParamLimits

0x7574,	// (0x00054790) area_vitu2_query_pane_t7

0x7598,	// (0x000547b4) bg_button_pane_cp018_ParamLimits

0x75a6,	// (0x000547c2) bg_button_pane_cp021_ParamLimits

0x0654,	// (0x0004d870) bg_button_pane_cp022_ParamLimits

0x0654,	// (0x0004d870) bg_vkb2_func_pane_cp08_ParamLimits

0x7598,	// (0x000547b4) bg_vkb2_func_pane_cp06_ParamLimits

0x75a6,	// (0x000547c2) bg_vkb2_func_pane_cp07_ParamLimits

0x0665,	// (0x0004d881) input_focus_pane_cp09_ParamLimits

0xa3bb,	// (0x000575d7) cam6_autofocus_pane_ParamLimits

0xa3bb,	// (0x000575d7) cam6_autofocus_pane

0x7ae2,	// (0x00054cfe) cam6_image_uncrop_pane_ParamLimits

0x7ae2,	// (0x00054cfe) cam6_image_uncrop_pane

0x7af1,	// (0x00054d0d) cam6_indi_pane_ParamLimits

0x7af1,	// (0x00054d0d) cam6_indi_pane

0x7b07,	// (0x00054d23) cam6_mode_pane_ParamLimits

0x7b07,	// (0x00054d23) cam6_mode_pane

0x7b19,	// (0x00054d35) cam6_timer_pane_ParamLimits

0x7b19,	// (0x00054d35) cam6_timer_pane

0x7b29,	// (0x00054d45) cam6_zoom_pane_ParamLimits

0x7b29,	// (0x00054d45) cam6_zoom_pane

0x7b35,	// (0x00054d51) cam6_mode_pane_g1_ParamLimits

0x7b35,	// (0x00054d51) cam6_mode_pane_g1

0x7b45,	// (0x00054d61) cam6_mode_pane_g2_ParamLimits

0x7b45,	// (0x00054d61) cam6_mode_pane_g2

0x7b55,	// (0x00054d71) cam6_mode_pane_g3_ParamLimits

0x7b55,	// (0x00054d71) cam6_mode_pane_g3

0x7b65,	// (0x00054d81) cam6_mode_pane_g4_ParamLimits

0x7b65,	// (0x00054d81) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005cd86) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005cd86) cam6_mode_pane_g

0xdd0c,	// (0x0005af28) bg_tb_trans_pane_cp08_ParamLimits

0xdd0c,	// (0x0005af28) bg_tb_trans_pane_cp08

0xdd46,	// (0x0005af62) cam6_battery_pane_ParamLimits

0xdd46,	// (0x0005af62) cam6_battery_pane

0xdd5c,	// (0x0005af78) cam6_indi_pane_g1_ParamLimits

0xdd5c,	// (0x0005af78) cam6_indi_pane_g1

0xdd6e,	// (0x0005af8a) cam6_indi_pane_g2_ParamLimits

0xdd6e,	// (0x0005af8a) cam6_indi_pane_g2

0xdd80,	// (0x0005af9c) cam6_indi_pane_g3_ParamLimits

0xdd80,	// (0x0005af9c) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005cd8f) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005cd8f) cam6_indi_pane_g

0xdd92,	// (0x0005afae) cam6_indi_pane_t1_ParamLimits

0xdd92,	// (0x0005afae) cam6_indi_pane_t1

0x7b75,	// (0x00054d91) cam6_autofocus_pane_g1

0x7b7d,	// (0x00054d99) cam6_autofocus_pane_g2

0x7b85,	// (0x00054da1) cam6_autofocus_pane_g3

0x7b8d,	// (0x00054da9) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005cd96) cam6_autofocus_pane_g

0xddb8,	// (0x0005afd4) cam6_timer_pane_g1

0xddc0,	// (0x0005afdc) cam6_timer_pane_t1

0xddce,	// (0x0005afea) cam6_zoom_cont_pane

0xddd6,	// (0x0005aff2) cam6_zoom_pane_g1

0xddde,	// (0x0005affa) cam6_zoom_pane_g2

0x7b95,	// (0x00054db1) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005cd9f) cam6_zoom_pane_g

0xcc58,	// (0x00059e74) cam6_battery_pane_g1

0xcc58,	// (0x00059e74) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0005c90b) cam6_battery_pane_g

0xdde6,	// (0x0005b002) cam6_zoom_cont_pane_g1

0xddef,	// (0x0005b00b) cam6_zoom_cont_pane_g2

0xddf8,	// (0x0005b014) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005cda6) cam6_zoom_cont_pane_g

0x7bb2,	// (0x00054dce) cam6_mode_pane_cp_ParamLimits

0x7bb2,	// (0x00054dce) cam6_mode_pane_cp

0x7b29,	// (0x00054d45) cam6_zoom_pane_cp_ParamLimits

0x7b29,	// (0x00054d45) cam6_zoom_pane_cp

0x7bc4,	// (0x00054de0) vid6_image_uncrop_cif_pane_ParamLimits

0x7bc4,	// (0x00054de0) vid6_image_uncrop_cif_pane

0x7bd4,	// (0x00054df0) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bd4,	// (0x00054df0) vid6_image_uncrop_nhd_pane

0x7ae2,	// (0x00054cfe) vid6_image_uncrop_vga_pane_ParamLimits

0x7ae2,	// (0x00054cfe) vid6_image_uncrop_vga_pane

0x7be3,	// (0x00054dff) vid6_image_uncrop_wvga_pane_ParamLimits

0x7be3,	// (0x00054dff) vid6_image_uncrop_wvga_pane

0x7bf2,	// (0x00054e0e) vid6_indi_pane_ParamLimits

0x7bf2,	// (0x00054e0e) vid6_indi_pane

0xdd0c,	// (0x0005af28) bg_tb_trans_pane_cp09_ParamLimits

0xdd0c,	// (0x0005af28) bg_tb_trans_pane_cp09

0xde10,	// (0x0005b02c) cam6_battery_pane_cp_ParamLimits

0xde10,	// (0x0005b02c) cam6_battery_pane_cp

0xde1c,	// (0x0005b038) vid6_indi_pane_g1_ParamLimits

0xde1c,	// (0x0005b038) vid6_indi_pane_g1

0xde2e,	// (0x0005b04a) vid6_indi_pane_g2_ParamLimits

0xde2e,	// (0x0005b04a) vid6_indi_pane_g2

0xde40,	// (0x0005b05c) vid6_indi_pane_g3_ParamLimits

0xde40,	// (0x0005b05c) vid6_indi_pane_g3

0xde55,	// (0x0005b071) vid6_indi_pane_g4_ParamLimits

0xde55,	// (0x0005b071) vid6_indi_pane_g4

0xde6a,	// (0x0005b086) vid6_indi_pane_g5_ParamLimits

0xde6a,	// (0x0005b086) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005cdad) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005cdad) vid6_indi_pane_g

0xde84,	// (0x0005b0a0) vid6_indi_pane_t1_ParamLimits

0xde84,	// (0x0005b0a0) vid6_indi_pane_t1

0xde9a,	// (0x0005b0b6) vid6_indi_pane_t2_ParamLimits

0xde9a,	// (0x0005b0b6) vid6_indi_pane_t2

0xdec2,	// (0x0005b0de) vid6_indi_pane_t3_ParamLimits

0xdec2,	// (0x0005b0de) vid6_indi_pane_t3

0xdeea,	// (0x0005b106) vid6_indi_pane_t4_ParamLimits

0xdeea,	// (0x0005b106) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005cdb8) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005cdb8) vid6_indi_pane_t

0xdf0e,	// (0x0005b12a) wait_bar_pane_cp08

0x7c0a,	// (0x00054e26) main_cset_text2_pane_t1_ParamLimits

0x7c0a,	// (0x00054e26) main_cset_text2_pane_t1

0x7b9d,	// (0x00054db9) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b9d,	// (0x00054db9) listscroll_gen_pane_cp06_t1

0x9769,	// (0x00056985) main_cam6_set_pane

0xcea6,	// (0x0005a0c2) bg_tb_trans_pane_cp06_ParamLimits

0xa223,	// (0x0005743f) cam4_indicators_pane_g1_ParamLimits

0xa234,	// (0x00057450) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0005cb26) cam4_indicators_pane_g_ParamLimits

0xa24c,	// (0x00057468) cam4_indicators_pane_t1_ParamLimits

0xa55f,	// (0x0005777b) bg_tb_trans_pane_cp07_ParamLimits

0xa276,	// (0x00057492) vid4_indicators_pane_g1_ParamLimits

0xa28a,	// (0x000574a6) vid4_indicators_pane_g2_ParamLimits

0xa29e,	// (0x000574ba) vid4_indicators_pane_g3_ParamLimits

0xa2af,	// (0x000574cb) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0005cb38) vid4_indicators_pane_g_ParamLimits

0xa2cb,	// (0x000574e7) vid4_indicators_pane_t1_ParamLimits

0xa358,	// (0x00057574) vid4_progress_pane_g1_ParamLimits

0xa368,	// (0x00057584) vid4_progress_pane_g2_ParamLimits

0x76e1,	// (0x000548fd) vid4_progress_pane_g3_ParamLimits

0xa378,	// (0x00057594) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0005cce9) vid4_progress_pane_g_ParamLimits

0x76f3,	// (0x0005490f) vid4_progress_pane_t1_ParamLimits

0xa390,	// (0x000575ac) vid4_progress_pane_t2_ParamLimits

0xa3a5,	// (0x000575c1) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0005ccf4) vid4_progress_pane_t_ParamLimits

0x7709,	// (0x00054925) wait_bar_pane_cp07_ParamLimits

0x7c28,	// (0x00054e44) main_cam6_set_pane_g2_ParamLimits

0x7c28,	// (0x00054e44) main_cam6_set_pane_g2

0x7c4c,	// (0x00054e68) main_cset6_listscroll_pane_ParamLimits

0x7c4c,	// (0x00054e68) main_cset6_listscroll_pane

0x7c68,	// (0x00054e84) main_cset6_slider_pane_ParamLimits

0x7c68,	// (0x00054e84) main_cset6_slider_pane

0x7c7e,	// (0x00054e9a) main_cset6_text2_pane_ParamLimits

0x7c7e,	// (0x00054e9a) main_cset6_text2_pane

0xdf1d,	// (0x0005b139) main_cset6_text_pane

0xdf25,	// (0x0005b141) main_cset_list_pane_copy1_ParamLimits

0xdf25,	// (0x0005b141) main_cset_list_pane_copy1

0xdf35,	// (0x0005b151) scroll_pane_cp028_copy1

0x7c8c,	// (0x00054ea8) cset_list_set_pane_copy1

0x7c9e,	// (0x00054eba) aid_position_infowindow_above_copy1

0x7ca6,	// (0x00054ec2) aid_position_infowindow_below_copy1

0x069c,	// (0x0004d8b8) cset_list_set_pane_g1_copy1

0x06a4,	// (0x0004d8c0) cset_list_set_pane_g3_copy1_ParamLimits

0x06a4,	// (0x0004d8c0) cset_list_set_pane_g3_copy1

0x06b3,	// (0x0004d8cf) cset_list_set_pane_t1_copy1_ParamLimits

0x06b3,	// (0x0004d8cf) cset_list_set_pane_t1_copy1

0xa55f,	// (0x0005777b) list_highlight_pane_cp021_copy1_ParamLimits

0xa55f,	// (0x0005777b) list_highlight_pane_cp021_copy1

0xdf3e,	// (0x0005b15a) cset6_slider_pane_ParamLimits

0xdf3e,	// (0x0005b15a) cset6_slider_pane

0xdf6a,	// (0x0005b186) main_cset6_slider_pane_g1_ParamLimits

0xdf6a,	// (0x0005b186) main_cset6_slider_pane_g1

0x7cae,	// (0x00054eca) main_cset6_slider_pane_g2_ParamLimits

0x7cae,	// (0x00054eca) main_cset6_slider_pane_g2

0xdf92,	// (0x0005b1ae) main_cset6_slider_pane_g3_ParamLimits

0xdf92,	// (0x0005b1ae) main_cset6_slider_pane_g3

0x7cd6,	// (0x00054ef2) main_cset6_slider_pane_g4_ParamLimits

0x7cd6,	// (0x00054ef2) main_cset6_slider_pane_g4

0xdf9e,	// (0x0005b1ba) main_cset6_slider_pane_g5_ParamLimits

0xdf9e,	// (0x0005b1ba) main_cset6_slider_pane_g5

0xd7dc,	// (0x0005a9f8) main_cset6_slider_pane_g7_ParamLimits

0xd7dc,	// (0x0005a9f8) main_cset6_slider_pane_g7

0xd7e8,	// (0x0005aa04) main_cset6_slider_pane_g8_ParamLimits

0xd7e8,	// (0x0005aa04) main_cset6_slider_pane_g8

0x6e18,	// (0x00054034) main_cset6_slider_pane_g9_ParamLimits

0x6e18,	// (0x00054034) main_cset6_slider_pane_g9

0x6e24,	// (0x00054040) main_cset6_slider_pane_g10_ParamLimits

0x6e24,	// (0x00054040) main_cset6_slider_pane_g10

0x6e30,	// (0x0005404c) main_cset6_slider_pane_g11_ParamLimits

0x6e30,	// (0x0005404c) main_cset6_slider_pane_g11

0x6e3c,	// (0x00054058) main_cset6_slider_pane_g12_ParamLimits

0x6e3c,	// (0x00054058) main_cset6_slider_pane_g12

0x6e48,	// (0x00054064) main_cset6_slider_pane_g13_ParamLimits

0x6e48,	// (0x00054064) main_cset6_slider_pane_g13

0x6e54,	// (0x00054070) main_cset6_slider_pane_g14_ParamLimits

0x6e54,	// (0x00054070) main_cset6_slider_pane_g14

0x7ce2,	// (0x00054efe) main_cset6_slider_pane_g15_ParamLimits

0x7ce2,	// (0x00054efe) main_cset6_slider_pane_g15

0xd7f4,	// (0x0005aa10) main_cset6_slider_pane_g16_ParamLimits

0xd7f4,	// (0x0005aa10) main_cset6_slider_pane_g16

0xd800,	// (0x0005aa1c) main_cset6_slider_pane_g17_ParamLimits

0xd800,	// (0x0005aa1c) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005cdc1) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005cdc1) main_cset6_slider_pane_g

0xdfaa,	// (0x0005b1c6) main_cset6_slider_pane_t1_ParamLimits

0xdfaa,	// (0x0005b1c6) main_cset6_slider_pane_t1

0x7d12,	// (0x00054f2e) main_cset6_slider_pane_t2_ParamLimits

0x7d12,	// (0x00054f2e) main_cset6_slider_pane_t2

0x7d3d,	// (0x00054f59) main_cset6_slider_pane_t3_ParamLimits

0x7d3d,	// (0x00054f59) main_cset6_slider_pane_t3

0x7d68,	// (0x00054f84) main_cset6_slider_pane_t4_ParamLimits

0x7d68,	// (0x00054f84) main_cset6_slider_pane_t4

0x7d93,	// (0x00054faf) main_cset6_slider_pane_t5_ParamLimits

0x7d93,	// (0x00054faf) main_cset6_slider_pane_t5

0xdfeb,	// (0x0005b207) main_cset6_slider_pane_t7_ParamLimits

0xdfeb,	// (0x0005b207) main_cset6_slider_pane_t7

0x7dbe,	// (0x00054fda) main_cset6_slider_pane_t8_ParamLimits

0x7dbe,	// (0x00054fda) main_cset6_slider_pane_t8

0x7de2,	// (0x00054ffe) main_cset6_slider_pane_t9_ParamLimits

0x7de2,	// (0x00054ffe) main_cset6_slider_pane_t9

0x7e06,	// (0x00055022) main_cset6_slider_pane_t10_ParamLimits

0x7e06,	// (0x00055022) main_cset6_slider_pane_t10

0x7e2a,	// (0x00055046) main_cset6_slider_pane_t11_ParamLimits

0x7e2a,	// (0x00055046) main_cset6_slider_pane_t11

0xe021,	// (0x0005b23d) main_cset6_slider_pane_t14_ParamLimits

0xe021,	// (0x0005b23d) main_cset6_slider_pane_t14

0xe05a,	// (0x0005b276) main_cset6_slider_pane_t15_ParamLimits

0xe05a,	// (0x0005b276) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005cde6) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005cde6) main_cset6_slider_pane_t

0xd434,	// (0x0005a650) cset_slider_pane_g1_copy1

0xd8b8,	// (0x0005aad4) cset_slider_pane_g2_copy1

0xdd2c,	// (0x0005af48) cset_slider_pane_g3_copy1

0x9769,	// (0x00056985) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x0005b2af) main_cset_text_pane_g1_copy1

0xd941,	// (0x0005ab5d) main_cset_text_pane_t1_copy1

0xd94f,	// (0x0005ab6b) main_cset_text_pane_t2_copy1

0xd95d,	// (0x0005ab79) main_cset_text_pane_t3_copy1

0xd96b,	// (0x0005ab87) main_cset_text_pane_t4_copy1

0xd979,	// (0x0005ab95) main_cset_text_pane_t5_copy1

0xe09b,	// (0x0005b2b7) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x0005b2c5) main_cset_text_pane_t7_copy1

0x7c0a,	// (0x00054e26) main_cset_text2_pane_t1_copy1

0xa55f,	// (0x0005777b) main_ncimui_pane

0x448d,	// (0x000516a9) popup_query_ncimui_window_ParamLimits

0x448d,	// (0x000516a9) popup_query_ncimui_window

0x51b2,	// (0x000523ce) field_cale_ev2_pane_g4_ParamLimits

0x51b2,	// (0x000523ce) field_cale_ev2_pane_g4

0x60d8,	// (0x000532f4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60d8,	// (0x000532f4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0005cac4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0005cac4) cell_video_dialer_keypad_pane_g

0x60f0,	// (0x0005330c) cell_video_dialer_keypad_pane_t1

0x9769,	// (0x00056985) bg_popup_window_pane_cp012

0xb09c,	// (0x000582b8) heading_pane_cp06

0xe0d5,	// (0x0005b2f1) ncim_query_content_pane

0x9769,	// (0x00056985) bg_popup_heading_pane_cp01

0xe0dd,	// (0x0005b2f9) ncim_heading_pane_t1

0xe0eb,	// (0x0005b307) ncim_indicator_popup_pane

0xe0fd,	// (0x0005b319) ncim_query_button_pane

0xe111,	// (0x0005b32d) ncim_query_content_pane_t1

0xe123,	// (0x0005b33f) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005ce2a) ncim_query_content_pane_t

0xe15d,	// (0x0005b379) ncim_query_list_pane

0xe16f,	// (0x0005b38b) ncim_query_popup_pane

0xe0eb,	// (0x0005b307) ncim_indicator_popup_pane_ParamLimits

0x7f74,	// (0x00055190) ncim_query_content_pane_g1_ParamLimits

0x7f74,	// (0x00055190) ncim_query_content_pane_g1

0xe111,	// (0x0005b32d) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x0005b33f) ncim_query_content_pane_t2_ParamLimits

0x7f80,	// (0x0005519c) ncim_query_content_pane_t3_ParamLimits

0x7f80,	// (0x0005519c) ncim_query_content_pane_t3

0x7fa8,	// (0x000551c4) ncim_query_content_pane_t4_ParamLimits

0x7fa8,	// (0x000551c4) ncim_query_content_pane_t4

0x7fd0,	// (0x000551ec) ncim_query_content_pane_t5_ParamLimits

0x7fd0,	// (0x000551ec) ncim_query_content_pane_t5

0xe135,	// (0x0005b351) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x0005b351) ncim_query_content_pane_t6

0xfc0e,	// (0x0005ce2a) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x0005b379) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x0005b38b) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x0005b39f) wait_bar_pane_cp04

0x9769,	// (0x00056985) input_focus_pane_cp011

0xe18b,	// (0x0005b3a7) ncim_query_popup_pane_t1

0xe199,	// (0x0005b3b5) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x0005b3b5) ncim_list_query_list_pane

0x9769,	// (0x00056985) bg_button_pane_cp027

0xe1a6,	// (0x0005b3c2) ncim_query_button_pane_g1

0x9769,	// (0x00056985) list_highlight_pane_cp012

0xe1b0,	// (0x0005b3cc) ncim_list_query_list_pane_g1

0xe1b8,	// (0x0005b3d4) ncim_list_query_list_pane_t1

0xa240,	// (0x0005745c) cam4_indicators_pane_g3_ParamLimits

0xa240,	// (0x0005745c) cam4_indicators_pane_g3

0xa2bb,	// (0x000574d7) vid4_indicators_pane_g5_ParamLimits

0xa2bb,	// (0x000574d7) vid4_indicators_pane_g5

0xa384,	// (0x000575a0) vid4_progress_pane_g5_ParamLimits

0xa384,	// (0x000575a0) vid4_progress_pane_g5

0x7e62,	// (0x0005507e) main_ncimui_pane_g1

0x7ec8,	// (0x000550e4) ncimui_group_query_pane_ParamLimits

0x7ec8,	// (0x000550e4) ncimui_group_query_pane

0x7f10,	// (0x0005512c) ncimui_list_pane_ParamLimits

0x7f10,	// (0x0005512c) ncimui_list_pane

0x7f37,	// (0x00055153) ncimui_text_pane_ParamLimits

0x7f37,	// (0x00055153) ncimui_text_pane

0x7ff8,	// (0x00055214) ncimui_text_pane_t1_ParamLimits

0x7ff8,	// (0x00055214) ncimui_text_pane_t1

0xe1c6,	// (0x0005b3e2) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x0005b3e2) ncimui_list_single_graphic_pane

0x8016,	// (0x00055232) ncimui_query_pane_ParamLimits

0x8016,	// (0x00055232) ncimui_query_pane

0x9769,	// (0x00056985) list_highlight_pane_cp013

0xe1d6,	// (0x0005b3f2) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x0005b400) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x0005b408) ncim_query_button_pane_cp01

0xe1f8,	// (0x0005b414) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x0005b414) ncim_query_entry_pane

0xe20b,	// (0x0005b427) ncimui_query_pane_g1

0xe217,	// (0x0005b433) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x0005b433) ncimui_query_pane_t1

0xa55f,	// (0x0005777b) input_focus_pane_cp012

0xe230,	// (0x0005b44c) ncim_query_entry_pane_t1

0xa7c1,	// (0x000579dd) main_im_pane_ParamLimits

0xa55f,	// (0x0005777b) main_mobtv_pane_ParamLimits

0xa55f,	// (0x0005777b) main_mobtv_pane

0x7cfa,	// (0x00054f16) main_cset6_slider_pane_g18_ParamLimits

0x7cfa,	// (0x00054f16) main_cset6_slider_pane_g18

0x7d06,	// (0x00054f22) main_cset6_slider_pane_g19_ParamLimits

0x7d06,	// (0x00054f22) main_cset6_slider_pane_g19

0xb31a,	// (0x00058536) bg_main_mobtv_pane_ParamLimits

0xb31a,	// (0x00058536) bg_main_mobtv_pane

0x8029,	// (0x00055245) main_mobtv_info_pane

0x8032,	// (0x0005524e) main_mobtv_loading_pane_ParamLimits

0x8032,	// (0x0005524e) main_mobtv_loading_pane

0xe242,	// (0x0005b45e) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x0005b468) main_mobtv_pg_hdr_pane

0x803f,	// (0x0005525b) main_mobtv_programe_curr_pane_ParamLimits

0x803f,	// (0x0005525b) main_mobtv_programe_curr_pane

0x804c,	// (0x00055268) main_mobtv_programe_next_pane_ParamLimits

0x804c,	// (0x00055268) main_mobtv_programe_next_pane

0xe255,	// (0x0005b471) popup_mobtv_noti_window

0xcc58,	// (0x00059e74) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x0005b479) main_tv_pg_hdr_pane_g2

0xe265,	// (0x0005b481) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x0005b489) main_tv_pg_hdr_pane_g4

0xe275,	// (0x0005b491) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x0005b49b) main_tv_pg_hdr_pane_g6

0xe289,	// (0x0005b4a5) main_tv_pg_hdr_pane_g7

0xe293,	// (0x0005b4af) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x0005b4b9) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x0005b4c3) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x0005b4cd) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005ce37) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x0005b4d7) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x0005b4e5) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x0005b4f3) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x0005b503) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x0005b513) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005ce4e) main_tv_pg_hdr_pane_t

0xe307,	// (0x0005b523) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x0005b523) single_mobtv_pg_channel_pane

0xe319,	// (0x0005b535) single_mobtv_pg_channel_table_pane

0xad12,	// (0x00057f2e) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x0005b53e) single_tv_pg_channel_pane_g1

0xe32b,	// (0x0005b547) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005ce59) single_tv_pg_channel_pane_g

0xcea6,	// (0x0005a0c2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea6,	// (0x0005a0c2) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0005b550) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x0005b550) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x0005b55e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x0005b55e) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x0005b56a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x0005b56a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005ce5e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005ce5e) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x0005b576) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x0005b584) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005ce65) single_mobtv_pg_channel_thumb_pane_t

0xcc58,	// (0x00059e74) bg_single_mobtv_pg_channel_table_pane_g1

0xcc58,	// (0x00059e74) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0005c90b) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x0005b592) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x0005b5a0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005ce6a) single_mobtv_pg_channel_table_pane_t

0x8061,	// (0x0005527d) main_mobtv_info_pane_g1_ParamLimits

0x8061,	// (0x0005527d) main_mobtv_info_pane_g1

0x807f,	// (0x0005529b) main_mobtv_info_pane_t1_ParamLimits

0x807f,	// (0x0005529b) main_mobtv_info_pane_t1

0x80f7,	// (0x00055313) main_mobtv_info_pane_t2_ParamLimits

0x80f7,	// (0x00055313) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005ce74) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005ce74) main_mobtv_info_pane_t

0x8186,	// (0x000553a2) wait_bar_pane_cp05

0x8198,	// (0x000553b4) main_mobtv_loading_pane_g1_ParamLimits

0x8198,	// (0x000553b4) main_mobtv_loading_pane_g1

0x81ab,	// (0x000553c7) main_mobtv_loading_pane_g2_ParamLimits

0x81ab,	// (0x000553c7) main_mobtv_loading_pane_g2

0x81b7,	// (0x000553d3) main_mobtv_loading_pane_g3_ParamLimits

0x81b7,	// (0x000553d3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005ce7b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005ce7b) main_mobtv_loading_pane_g

0xe392,	// (0x0005b5ae) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x0005b5ae) main_mobtv_loading_pane_t1

0xe3aa,	// (0x0005b5c6) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x0005b5c6) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005ce82) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005ce82) main_mobtv_loading_pane_t

0x81ca,	// (0x000553e6) wait_bar_pane_cp06_ParamLimits

0x81ca,	// (0x000553e6) wait_bar_pane_cp06

0xe3ce,	// (0x0005b5ea) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x0005b5f8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005ce87) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x0005b606) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x0005b614) main_mobtv_programe_next_pane_t2

0xe406,	// (0x0005b622) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005ce8c) main_mobtv_programe_next_pane_t

0x9769,	// (0x00056985) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x0005b630) popup_mobtv_noti_window_g1

0xe41c,	// (0x0005b638) popup_mobtv_noti_window_t1

0xe42a,	// (0x0005b646) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005ce93) popup_mobtv_noti_window_t

0xcc58,	// (0x00059e74) bg_popup_mobtv_noti_window_pane_g1

0x9769,	// (0x00056985) sc_clock_pane

0x9769,	// (0x00056985) main_fs_bigclock_pane

0x7957,	// (0x00054b73) blid2_tripm_pane_t4_ParamLimits

0x7957,	// (0x00054b73) blid2_tripm_pane_t4

0x81d9,	// (0x000553f5) sc_clock_pane_g1_ParamLimits

0x81d9,	// (0x000553f5) sc_clock_pane_g1

0x81eb,	// (0x00055407) sc_clock_pane_t1_ParamLimits

0x81eb,	// (0x00055407) sc_clock_pane_t1

0x820d,	// (0x00055429) sc_clock_pane_t2_ParamLimits

0x820d,	// (0x00055429) sc_clock_pane_t2

0x8225,	// (0x00055441) sc_clock_pane_t3_ParamLimits

0x8225,	// (0x00055441) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005ce98) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005ce98) sc_clock_pane_t

0x8d7d,	// (0x00055f99) main_fs_bigclock_indicator_pane_ParamLimits

0x8d7d,	// (0x00055f99) main_fs_bigclock_indicator_pane

0x82c5,	// (0x000554e1) main_fs_bigclock_pane_g1_ParamLimits

0x82c5,	// (0x000554e1) main_fs_bigclock_pane_g1

0x8d89,	// (0x00055fa5) main_fs_bigclock_pane_t1_ParamLimits

0x8d89,	// (0x00055fa5) main_fs_bigclock_pane_t1

0x8d9b,	// (0x00055fb7) main_fs_bigclock_pane_t2_ParamLimits

0x8d9b,	// (0x00055fb7) main_fs_bigclock_pane_t2

0x8daf,	// (0x00055fcb) main_fs_bigclock_pane_t3_ParamLimits

0x8daf,	// (0x00055fcb) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0005d0a2) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0005d0a2) main_fs_bigclock_pane_t

0xeca2,	// (0x0005bebe) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x0005b321) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x0005b321) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005ce25) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005ce25) ncim_query_content_pane_g

0x823e,	// (0x0005545a) sc_clock_pane_t4_ParamLimits

0x823e,	// (0x0005545a) sc_clock_pane_t4

0xa55f,	// (0x0005777b) main_radioblah_pane

0xd600,	// (0x0005a81c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd600,	// (0x0005a81c) cell_call4_button_pane_t1_copy1

0x7e7a,	// (0x00055096) main_ncimui_pane_t1_ParamLimits

0x7e7a,	// (0x00055096) main_ncimui_pane_t1

0x7e94,	// (0x000550b0) main_ncimui_pane_t2_ParamLimits

0x7e94,	// (0x000550b0) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005ce1e) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005ce1e) main_ncimui_pane_t

0xe56f,	// (0x0005b78b) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x0005b78b) main_radioblah_anim_pane

0xe580,	// (0x0005b79c) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x0005b79c) main_radioblah_info_pane

0xe594,	// (0x0005b7b0) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x0005b7b0) main_radioblah_pane_t1

0xe5b0,	// (0x0005b7cc) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x0005b7cc) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005ceb9) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005ceb9) main_radioblah_pane_t

0x831d,	// (0x00055539) main_radioblah_rocker_ctrl_pane_ParamLimits

0x831d,	// (0x00055539) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x0005b814) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x0005b814) main_radioblah_info_pane_t1

0x8375,	// (0x00055591) main_radioblah_info_pane_t2_ParamLimits

0x8375,	// (0x00055591) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005cec2) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005cec2) main_radioblah_info_pane_t

0xcc58,	// (0x00059e74) main_radioblah_rocker_ctrl_pane_g1

0x8425,	// (0x00055641) main_radioblah_rocker_ctrl_pane_g2

0x842d,	// (0x00055649) main_radioblah_rocker_ctrl_pane_g3

0x8435,	// (0x00055651) main_radioblah_rocker_ctrl_pane_g4

0x843d,	// (0x00055659) main_radioblah_rocker_ctrl_pane_g5

0x8445,	// (0x00055661) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005cecb) main_radioblah_rocker_ctrl_pane_g

0x7c0a,	// (0x00054e26) main_cset_text2_pane_t1_copy1_ParamLimits

0xa213,	// (0x0005742f) cam4_image_uncrop_qvga_pane

0xa266,	// (0x00057482) vid4_image_uncrop_qcif_pane

0xa3bb,	// (0x000575d7) cam6_image_uncrop_qvga_pane_ParamLimits

0xa3bb,	// (0x000575d7) cam6_image_uncrop_qvga_pane

0xde00,	// (0x0005b01c) vid6_image_uncrop_qcif_pane_ParamLimits

0xde00,	// (0x0005b01c) vid6_image_uncrop_qcif_pane

0x9769,	// (0x00056985) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x0005b2d3) list_cset_text2_pane

0xe0bf,	// (0x0005b2db) main_cset6_text2_pane_g1

0xe0c7,	// (0x0005b2e3) main_cset6_text2_pane_t1

0xe632,	// (0x0005b84e) list_cset_text2_pane_t1_ParamLimits

0xe632,	// (0x0005b84e) list_cset_text2_pane_t1

0xa55f,	// (0x0005777b) main_radioblah_pane_ParamLimits

0x8172,	// (0x0005538e) main_mobtv_info_pane_t3_ParamLimits

0x8172,	// (0x0005538e) main_mobtv_info_pane_t3

0x830b,	// (0x00055527) main_radioblah_pane_g1

0x8345,	// (0x00055561) main_radioblah_info_pane_g1

0x83ca,	// (0x000555e6) main_radioblah_info_pane_t3_ParamLimits

0x83ca,	// (0x000555e6) main_radioblah_info_pane_t3

0x2fd1,	// (0x000501ed) highlight_cell_cale_month_pane_ParamLimits

0x2fd1,	// (0x000501ed) highlight_cell_cale_month_pane

0x9769,	// (0x00056985) main_phob_fisheye_pane

0xcf8e,	// (0x0005a1aa) scroll_pane_cp0031_ParamLimits

0xcf8e,	// (0x0005a1aa) scroll_pane_cp0031

0xdf0e,	// (0x0005b12a) wait_bar_pane_cp08_ParamLimits

0x7c8c,	// (0x00054ea8) cset_list_set_pane_copy1_ParamLimits

0xe64d,	// (0x0005b869) highlight_cell_cale_month_pane_g1

0x844d,	// (0x00055669) highlight_cell_cale_month_pane_t1

0xdb6d,	// (0x0005ad89) list_gen_pane_cp01

0xd7c7,	// (0x0005a9e3) scroll_pane_01

0x845b,	// (0x00055677) list_single_double_fisheye_pane

0x0792,	// (0x0004d9ae) list_double_fisheye_pane_g1_ParamLimits

0x0792,	// (0x0004d9ae) list_double_fisheye_pane_g1

0x079e,	// (0x0004d9ba) list_double_fisheye_pane_g2_ParamLimits

0x079e,	// (0x0004d9ba) list_double_fisheye_pane_g2

0x8464,	// (0x00055680) list_double_fisheye_pane_g3_ParamLimits

0x8464,	// (0x00055680) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005ced8) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005ced8) list_double_fisheye_pane_g

0x07cf,	// (0x0004d9eb) list_double_fisheye_pane_t1_ParamLimits

0x07cf,	// (0x0004d9eb) list_double_fisheye_pane_t1

0x07ea,	// (0x0004da06) list_double_fisheye_pane_t2_ParamLimits

0x07ea,	// (0x0004da06) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005cee3) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005cee3) list_double_fisheye_pane_t

0x9769,	// (0x00056985) main_call5_pane

0x8269,	// (0x00055485) sc_swipe_pane_ParamLimits

0x8269,	// (0x00055485) sc_swipe_pane

0x8483,	// (0x0005569f) call5_image_pane_ParamLimits

0x8483,	// (0x0005569f) call5_image_pane

0x84a0,	// (0x000556bc) call5_swipe_1_pane_ParamLimits

0x84a0,	// (0x000556bc) call5_swipe_1_pane

0x84b3,	// (0x000556cf) call5_swipe_2_pane_ParamLimits

0x84b3,	// (0x000556cf) call5_swipe_2_pane

0x84de,	// (0x000556fa) popup_call5_audio_first_window_ParamLimits

0x84de,	// (0x000556fa) popup_call5_audio_first_window

0xcea6,	// (0x0005a0c2) call5_swipe_1_pane_g1_ParamLimits

0xcea6,	// (0x0005a0c2) call5_swipe_1_pane_g1

0xe655,	// (0x0005b871) call5_swipe_1_pane_g2_ParamLimits

0xe655,	// (0x0005b871) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005cee8) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005cee8) call5_swipe_1_pane_g

0xe661,	// (0x0005b87d) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x0005b87d) call5_swipe_1_pane_t1

0xcea6,	// (0x0005a0c2) call5_swipe_2_pane_g1_ParamLimits

0xcea6,	// (0x0005a0c2) call5_swipe_2_pane_g1

0xe676,	// (0x0005b892) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x0005b892) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0005ceed) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0005ceed) call5_swipe_2_pane_g

0xe682,	// (0x0005b89e) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x0005b89e) call5_swipe_2_pane_t1

0xe697,	// (0x0005b8b3) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x0005b8b3) sc_swipe_pane_g1

0xe6a4,	// (0x0005b8c0) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x0005b8c0) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0005cef2) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0005cef2) sc_swipe_pane_g

0xe6b0,	// (0x0005b8cc) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0005b8cc) sc_swipe_pane_t1

0x9769,	// (0x00056985) main_cmail_launcher_pane

0x84ef,	// (0x0005570b) aid_size_cell_cmail_l_ParamLimits

0x84ef,	// (0x0005570b) aid_size_cell_cmail_l

0x8509,	// (0x00055725) grid_cmail_l_pane_ParamLimits

0x8509,	// (0x00055725) grid_cmail_l_pane

0x8523,	// (0x0005573f) cell_cmail_l_pane_ParamLimits

0x8523,	// (0x0005573f) cell_cmail_l_pane

0x8549,	// (0x00055765) cell_cmail_l_pane_g1_ParamLimits

0x8549,	// (0x00055765) cell_cmail_l_pane_g1

0x855a,	// (0x00055776) cell_cmail_l_pane_t1_ParamLimits

0x855a,	// (0x00055776) cell_cmail_l_pane_t1

0xe6c5,	// (0x0005b8e1) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x0005b8e1) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0005cef7) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0005cef7) cell_cmail_l_pane_t

0xa55f,	// (0x0005777b) grid_highlight_pane_cp018_ParamLimits

0xa55f,	// (0x0005777b) grid_highlight_pane_cp018

0x107f,	// (0x0004e29b) main2_pane_ParamLimits

0x107f,	// (0x0004e29b) main2_pane

0xa86c,	// (0x00057a88) popup_sp_fs_action_menu_bg_pane_g1

0xa874,	// (0x00057a90) popup_sp_fs_action_menu_bg_pane_g2

0xa87c,	// (0x00057a98) popup_sp_fs_action_menu_bg_pane_g3

0xa884,	// (0x00057aa0) popup_sp_fs_action_menu_bg_pane_g4

0xa88c,	// (0x00057aa8) popup_sp_fs_action_menu_bg_pane_g5

0xa894,	// (0x00057ab0) popup_sp_fs_action_menu_bg_pane_g6

0xa89c,	// (0x00057ab8) popup_sp_fs_action_menu_bg_pane_g7

0xa8a4,	// (0x00057ac0) popup_sp_fs_action_menu_bg_pane_g8

0xa8ac,	// (0x00057ac8) popup_sp_fs_action_menu_bg_pane_g9

0xa8b4,	// (0x00057ad0) popup_sp_fs_action_menu_bg_pane_g10

0xa8b4,	// (0x00057ad0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005c3a6) popup_sp_fs_action_menu_bg_pane_g

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g3_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g3_g1

0x0105,	// (0x0004d321) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_t3_g3_g2

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005c454) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005c454) list_medium_line_x2_t3_g3_g

0x011d,	// (0x0004d339) list_medium_line_x2_t3_g3_t1_ParamLimits

0x011d,	// (0x0004d339) list_medium_line_x2_t3_g3_t1

0x0132,	// (0x0004d34e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0132,	// (0x0004d34e) list_medium_line_x2_t3_g3_t2

0x0146,	// (0x0004d362) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005c45b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005c45b) list_medium_line_x2_t3_g3_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g2_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g2_g1

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005c462) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005c462) list_medium_line_x2_t3_g2_g

0x015b,	// (0x0004d377) list_medium_line_x2_t3_g2_t1_ParamLimits

0x015b,	// (0x0004d377) list_medium_line_x2_t3_g2_t1

0x0171,	// (0x0004d38d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0171,	// (0x0004d38d) list_medium_line_x2_t3_g2_t2

0x0183,	// (0x0004d39f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0183,	// (0x0004d39f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005c467) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005c467) list_medium_line_x2_t3_g2_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t4_g4_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t4_g4_g1

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t4_g4_g2

0x0105,	// (0x0004d321) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_t4_g4_g3

0x01ad,	// (0x0004d3c9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x01ad,	// (0x0004d3c9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005c46e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005c46e) list_medium_line_x2_t4_g4_g

0x01b9,	// (0x0004d3d5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x01b9,	// (0x0004d3d5) list_medium_line_x2_t4_g4_t1

0x01d3,	// (0x0004d3ef) list_medium_line_x2_t4_g4_t2_ParamLimits

0x01d3,	// (0x0004d3ef) list_medium_line_x2_t4_g4_t2

0x01e9,	// (0x0004d405) list_medium_line_x2_t4_g4_t3_ParamLimits

0x01e9,	// (0x0004d405) list_medium_line_x2_t4_g4_t3

0x01fe,	// (0x0004d41a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x01fe,	// (0x0004d41a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005c477) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005c477) list_medium_line_x2_t4_g4_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g4_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g4_g1

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t2_g4_g2

0x0105,	// (0x0004d321) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_t2_g4_g3

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005c4de) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005c4de) list_medium_line_x2_t2_g4_g

0x0210,	// (0x0004d42c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0210,	// (0x0004d42c) list_medium_line_x2_t2_g4_t1

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005c4e7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005c4e7) list_medium_line_x2_t2_g4_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g3_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g3_g1

0x0105,	// (0x0004d321) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_t2_g3_g2

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005c454) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005c454) list_medium_line_x2_t2_g3_g

0x0225,	// (0x0004d441) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0225,	// (0x0004d441) list_medium_line_x2_t2_g3_t1

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005c4ec) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005c4ec) list_medium_line_x2_t2_g3_t

0x3136,	// (0x00050352) main_sp_fs_list_pane_ParamLimits

0x3136,	// (0x00050352) main_sp_fs_list_pane

0xcf4e,	// (0x0005a16a) sp_fs_scroll_pane_ParamLimits

0xcf4e,	// (0x0005a16a) sp_fs_scroll_pane

0x023a,	// (0x0004d456) list_medium_line_x2_t3_t1

0x024a,	// (0x0004d466) list_medium_line_x2_t3_t2

0x0258,	// (0x0004d474) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005c537) list_medium_line_x2_t3_t

0x0266,	// (0x0004d482) list_medium_line_x3_t4_t1

0x0276,	// (0x0004d492) list_medium_line_x3_t4_t2

0x0284,	// (0x0004d4a0) list_medium_line_x3_t4_t3

0x0258,	// (0x0004d474) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005c53e) list_medium_line_x3_t4_t

0x0292,	// (0x0004d4ae) list_medium_line_x4_t5_t1

0x02a2,	// (0x0004d4be) list_medium_line_x4_t5_t2

0x0284,	// (0x0004d4a0) list_medium_line_x4_t5_t3

0x02b0,	// (0x0004d4cc) list_medium_line_x4_t5_t4

0x0258,	// (0x0004d474) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005c547) list_medium_line_x4_t5_t

0x00f9,	// (0x0004d315) list_medium_line_t4_g4_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_t4_g4_g1

0x01ad,	// (0x0004d3c9) list_medium_line_t4_g4_g2_ParamLimits

0x01ad,	// (0x0004d3c9) list_medium_line_t4_g4_g2

0x02be,	// (0x0004d4da) list_medium_line_t4_g4_g3_ParamLimits

0x02be,	// (0x0004d4da) list_medium_line_t4_g4_g3

0x0111,	// (0x0004d32d) list_medium_line_t4_g4_g4_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005c552) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005c552) list_medium_line_t4_g4_g

0x02ca,	// (0x0004d4e6) list_medium_line_t4_g4_t1_ParamLimits

0x02ca,	// (0x0004d4e6) list_medium_line_t4_g4_t1

0x02df,	// (0x0004d4fb) list_medium_line_t4_g4_t2_ParamLimits

0x02df,	// (0x0004d4fb) list_medium_line_t4_g4_t2

0x02f5,	// (0x0004d511) list_medium_line_t4_g4_t3_ParamLimits

0x02f5,	// (0x0004d511) list_medium_line_t4_g4_t3

0x0146,	// (0x0004d362) list_medium_line_t4_g4_t4_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005c55b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005c55b) list_medium_line_t4_g4_t

0x3205,	// (0x00050421) chi_dic_find_pane_g1

0x425d,	// (0x00051479) main_tport_pane

0x04a4,	// (0x0004d6c0) list_medium_line_plain_t1

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g2_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g2_g1

0x04be,	// (0x0004d6da) list_medium_line_t2_g2_g2_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0005cc2f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0005cc2f) list_medium_line_t2_g2_g

0x04ca,	// (0x0004d6e6) list_medium_line_t2_g2_t1_ParamLimits

0x04ca,	// (0x0004d6e6) list_medium_line_t2_g2_t1

0x04e4,	// (0x0004d700) list_medium_line_t2_g2_t2_ParamLimits

0x04e4,	// (0x0004d700) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005cc34) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005cc34) list_medium_line_t2_g2_t

0x771a,	// (0x00054936) aid_sp_fs_list_icon_a_sm

0x7722,	// (0x0005493e) aid_sp_fs_list_icon_d

0x772a,	// (0x00054946) aid_sp_fs_text_primary

0xdd35,	// (0x0005af51) aid_sp_fs_text_secondary

0x7733,	// (0x0005494f) list_medium_line

0x7733,	// (0x0005494f) list_medium_line_g2

0x7733,	// (0x0005494f) list_medium_line_g3

0x7733,	// (0x0005494f) list_medium_line_plain

0x7733,	// (0x0005494f) list_medium_line_plain_t2

0x7733,	// (0x0005494f) list_medium_line_plain_t3

0x7733,	// (0x0005494f) list_medium_line_right_icon

0x7733,	// (0x0005494f) list_medium_line_right_iconx2

0x7733,	// (0x0005494f) list_medium_line_t2

0x7733,	// (0x0005494f) list_medium_line_t2_g2

0x7733,	// (0x0005494f) list_medium_line_t2_g3

0x7733,	// (0x0005494f) list_medium_line_t2_right_icon

0x7733,	// (0x0005494f) list_medium_line_t2_right_iconx2

0x7733,	// (0x0005494f) list_medium_line_t3

0x7733,	// (0x0005494f) list_medium_line_t3_g2

0x7733,	// (0x0005494f) list_medium_line_t3_g3

0x7733,	// (0x0005494f) list_medium_line_t3_right_iconx2

0x0676,	// (0x0004d892) list_medium_line_t4_g4

0x7733,	// (0x0005494f) list_medium_line_x2

0x7733,	// (0x0005494f) list_medium_line_x2_t2_g2

0x7733,	// (0x0005494f) list_medium_line_x2_t2_g3

0x7733,	// (0x0005494f) list_medium_line_x2_t2_g4

0x7733,	// (0x0005494f) list_medium_line_x2_t3

0x7733,	// (0x0005494f) list_medium_line_x2_t3_g2

0x7733,	// (0x0005494f) list_medium_line_x2_t3_g3

0x7733,	// (0x0005494f) list_medium_line_x2_t3_g4

0x7733,	// (0x0005494f) list_medium_line_x2_t4_g2

0x7733,	// (0x0005494f) list_medium_line_x2_t4_g4

0x067f,	// (0x0004d89b) list_medium_line_x3

0x067f,	// (0x0004d89b) list_medium_line_x3_t4

0x067f,	// (0x0004d89b) list_medium_line_x3_t4_g4

0x0676,	// (0x0004d892) list_medium_line_x4_t4

0x0676,	// (0x0004d892) list_medium_line_x4_t4_g7

0x0676,	// (0x0004d892) list_medium_line_x4_t5

0x0688,	// (0x0004d8a4) list_single_fs_dyc_pane_ParamLimits

0x0688,	// (0x0004d8a4) list_single_fs_dyc_pane

0x00f9,	// (0x0004d315) list_medium_line_x4_t4_g7_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x4_t4_g7_g1

0x06c8,	// (0x0004d8e4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x06c8,	// (0x0004d8e4) list_medium_line_x4_t4_g7_g2

0x06d4,	// (0x0004d8f0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x06d4,	// (0x0004d8f0) list_medium_line_x4_t4_g7_g3

0x06e3,	// (0x0004d8ff) list_medium_line_x4_t4_g7_g4_ParamLimits

0x06e3,	// (0x0004d8ff) list_medium_line_x4_t4_g7_g4

0x06ef,	// (0x0004d90b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x06ef,	// (0x0004d90b) list_medium_line_x4_t4_g7_g5

0x06fe,	// (0x0004d91a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x06fe,	// (0x0004d91a) list_medium_line_x4_t4_g7_g6

0x070d,	// (0x0004d929) list_medium_line_x4_t4_g7_g7_ParamLimits

0x070d,	// (0x0004d929) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005cdff) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005cdff) list_medium_line_x4_t4_g7_g

0x0719,	// (0x0004d935) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0719,	// (0x0004d935) list_medium_line_x4_t4_g7_t1

0x072e,	// (0x0004d94a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x072e,	// (0x0004d94a) list_medium_line_x4_t4_g7_t2

0x0743,	// (0x0004d95f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0743,	// (0x0004d95f) list_medium_line_x4_t4_g7_t3

0x0758,	// (0x0004d974) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0758,	// (0x0004d974) list_medium_line_x4_t4_g7_t4

0x076a,	// (0x0004d986) list_medium_line_x4_t4_g7_t5_ParamLimits

0x076a,	// (0x0004d986) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005ce0e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005ce0e) list_medium_line_x4_t4_g7_t

0x077c,	// (0x0004d998) list_single_dyc_row_pane_ParamLimits

0x077c,	// (0x0004d998) list_single_dyc_row_pane

0x8470,	// (0x0005568c) call5_gesture_pane_ParamLimits

0x8470,	// (0x0005568c) call5_gesture_pane

0x84c6,	// (0x000556e2) call5_windows_pane_ParamLimits

0x84c6,	// (0x000556e2) call5_windows_pane

0x8570,	// (0x0005578c) call5_swipe_1_pane_cp_ParamLimits

0x8570,	// (0x0005578c) call5_swipe_1_pane_cp

0x857c,	// (0x00055798) call5_swipe_2_pane_cp_ParamLimits

0x857c,	// (0x00055798) call5_swipe_2_pane_cp

0xa9b6,	// (0x00057bd2) call5_image_pane_cp

0x8588,	// (0x000557a4) popup_call5_audio_first_window_cp_ParamLimits

0x8588,	// (0x000557a4) popup_call5_audio_first_window_cp

0xe697,	// (0x0005b8b3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x0005b8b3) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0005b8f3) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0005b8cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0005b8cc) call5_swipe_1_pane_t1_cp

0xe697,	// (0x0005b8b3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x0005b8b3) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0005b8fb) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0005b903) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0005b903) call5_swipe_2_pane_t1_cp

0xa55f,	// (0x0005777b) main_sp_fs_email_pane

0xe6fc,	// (0x0005b918) main_sp_fs_listscroll_pane_te

0x8596,	// (0x000557b2) popup_sp_fs_action_menu_pane_ParamLimits

0x8596,	// (0x000557b2) popup_sp_fs_action_menu_pane

0xcc58,	// (0x00059e74) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x0005b921) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x0005b92a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x0005b933) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc58,	// (0x00059e74) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0005cefc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca3d,	// (0x00059c59) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca3d,	// (0x00059c59) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x0005b93c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x0005b93c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x0005b948) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x0005b948) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0005cf05) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0005cf05) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x0005b954) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x0005b954) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x080c,	// (0x0004da28) list_medium_line_t2_right_icon_g1

0x0814,	// (0x0004da30) list_medium_line_t2_right_icon_t1

0x0824,	// (0x0004da40) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0005cf0a) list_medium_line_t2_right_icon_t

0xc850,	// (0x00059a6c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc850,	// (0x00059a6c) bg_sp_fs_ctrlbar_pane

0x8620,	// (0x0005583c) main_sp_fs_ctrlbar_button_pane_cp01

0x862a,	// (0x00055846) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x0005b9a6) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x0005b9b2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0005cf0f) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x0005b9be) main_sp_fs_ctrlbar_pane_t1

0x8634,	// (0x00055850) main_sp_fs_ctrlbar_pane

0x8658,	// (0x00055874) main_sp_fs_listscroll_pane_te_cp01

0x0836,	// (0x0004da52) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0836,	// (0x0004da52) popup_sp_fs_action_menu_pane_cp01

0xa55f,	// (0x0005777b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa55f,	// (0x0005777b) bg_sp_fs_highlight_list_pane_cp01

0x8678,	// (0x00055894) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8678,	// (0x00055894) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x0005b9ee) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x0005b9ee) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0005cf19) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0005cf19) sp_fs_action_menu_list_gene_pane_g

0x8687,	// (0x000558a3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8687,	// (0x000558a3) sp_fs_action_menu_list_gene_pane_t1

0x869f,	// (0x000558bb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x869f,	// (0x000558bb) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x0005b9fb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x0005b9fb) popup_sp_fs_action_menu_bg_pane

0x86be,	// (0x000558da) sp_fs_action_menu_list_pane_ParamLimits

0x86be,	// (0x000558da) sp_fs_action_menu_list_pane

0x86de,	// (0x000558fa) sp_fs_scroll_pane_cp01_ParamLimits

0x86de,	// (0x000558fa) sp_fs_scroll_pane_cp01

0x0866,	// (0x0004da82) list_medium_line_plain_t2_t1

0x0876,	// (0x0004da92) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0005cf1e) list_medium_line_plain_t2_t

0x0886,	// (0x0004daa2) list_medium_line_plain_t3_t1

0x0896,	// (0x0004dab2) list_medium_line_plain_t3_t2

0x08a4,	// (0x0004dac0) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0005cf23) list_medium_line_plain_t3_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g2_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t2_g2_g1

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005c462) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005c462) list_medium_line_x2_t2_g2_g

0x02ca,	// (0x0004d4e6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x02ca,	// (0x0004d4e6) list_medium_line_x2_t2_g2_t1

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0005cf2a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0005cf2a) list_medium_line_x2_t2_g2_t

0x00f9,	// (0x0004d315) list_medium_line_x2_t4_g2_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t4_g2_g1

0x08b2,	// (0x0004dace) list_medium_line_x2_t4_g2_g2_ParamLimits

0x08b2,	// (0x0004dace) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0005cf2f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0005cf2f) list_medium_line_x2_t4_g2_g

0x08c4,	// (0x0004dae0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x08c4,	// (0x0004dae0) list_medium_line_x2_t4_g2_t1

0x08db,	// (0x0004daf7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x08db,	// (0x0004daf7) list_medium_line_x2_t4_g2_t2

0x08f0,	// (0x0004db0c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x08f0,	// (0x0004db0c) list_medium_line_x2_t4_g2_t3

0x0146,	// (0x0004d362) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0005cf34) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0005cf34) list_medium_line_x2_t4_g2_t

0x0902,	// (0x0004db1e) list_medium_line_t3_right_iconx2_g1

0x080c,	// (0x0004da28) list_medium_line_t3_right_iconx2_g2

0x090a,	// (0x0004db26) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0005cf3d) list_medium_line_t3_right_iconx2_g

0x0914,	// (0x0004db30) list_medium_line_t3_right_iconx2_t1

0x0924,	// (0x0004db40) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0005cf44) list_medium_line_t3_right_iconx2_t

0x00f9,	// (0x0004d315) list_medium_line_x3_t4_g4_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x3_t4_g4_g1

0x0105,	// (0x0004d321) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x3_t4_g4_g2

0x01ad,	// (0x0004d3c9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x01ad,	// (0x0004d3c9) list_medium_line_x3_t4_g4_g3

0x0932,	// (0x0004db4e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0932,	// (0x0004db4e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0005cf49) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0005cf49) list_medium_line_x3_t4_g4_g

0x093e,	// (0x0004db5a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x093e,	// (0x0004db5a) list_medium_line_x3_t4_g4_t1

0x0955,	// (0x0004db71) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0955,	// (0x0004db71) list_medium_line_x3_t4_g4_t2

0x0970,	// (0x0004db8c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0970,	// (0x0004db8c) list_medium_line_x3_t4_g4_t3

0x0985,	// (0x0004dba1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0985,	// (0x0004dba1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0005cf52) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0005cf52) list_medium_line_x3_t4_g4_t

0x09a2,	// (0x0004dbbe) list_single_dyc_row_text_pane_t1_ParamLimits

0x09a2,	// (0x0004dbbe) list_single_dyc_row_text_pane_t1

0x09eb,	// (0x0004dc07) list_single_dyc_row_text_pane_t2_ParamLimits

0x09eb,	// (0x0004dc07) list_single_dyc_row_text_pane_t2

0x8704,	// (0x00055920) list_single_dyc_row_text_pane_t3_ParamLimits

0x8704,	// (0x00055920) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0005cf5b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0005cf5b) list_single_dyc_row_text_pane_t

0x8728,	// (0x00055944) list_single_dyc_row_pane_g1_ParamLimits

0x8728,	// (0x00055944) list_single_dyc_row_pane_g1

0x8734,	// (0x00055950) list_single_dyc_row_pane_g2_ParamLimits

0x8734,	// (0x00055950) list_single_dyc_row_pane_g2

0x8740,	// (0x0005595c) list_single_dyc_row_pane_g3_ParamLimits

0x8740,	// (0x0005595c) list_single_dyc_row_pane_g3

0x874c,	// (0x00055968) list_single_dyc_row_pane_g4_ParamLimits

0x874c,	// (0x00055968) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0005cf68) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0005cf68) list_single_dyc_row_pane_g

0x8758,	// (0x00055974) list_single_dyc_row_text_pane_ParamLimits

0x8758,	// (0x00055974) list_single_dyc_row_text_pane

0x9769,	// (0x00056985) bg_sp_fs_scroll_pane

0xe7ed,	// (0x0005ba09) thumb_sp_fs_scroll_pane

0x04b2,	// (0x0004d6ce) list_medium_line_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_g1

0x0b20,	// (0x0004dd3c) list_medium_line_t1_ParamLimits

0x0b20,	// (0x0004dd3c) list_medium_line_t1

0x00f9,	// (0x0004d315) list_medium_line_x2_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_g1

0x0105,	// (0x0004d321) list_medium_line_x2_g2_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0005cf71) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0005cf71) list_medium_line_x2_g

0x8777,	// (0x00055993) list_medium_line_x2_t1_ParamLimits

0x8777,	// (0x00055993) list_medium_line_x2_t1

0x00f9,	// (0x0004d315) list_medium_line_x3_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x3_g1

0x0105,	// (0x0004d321) list_medium_line_x3_g2_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0005cf71) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0005cf71) list_medium_line_x3_g

0x8777,	// (0x00055993) list_medium_line_x3_t1_ParamLimits

0x8777,	// (0x00055993) list_medium_line_x3_t1

0xe7f6,	// (0x0005ba12) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0005ba1b) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x0005ba24) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0005cf76) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x0005ba12) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0005ba1b) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x0005ba24) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0005cf76) bg_sp_fs_scroll_pane_g

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g4_g1_ParamLimits

0x00f9,	// (0x0004d315) list_medium_line_x2_t3_g4_g1

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x01a1,	// (0x0004d3bd) list_medium_line_x2_t3_g4_g2

0x0105,	// (0x0004d321) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0105,	// (0x0004d321) list_medium_line_x2_t3_g4_g3

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0111,	// (0x0004d32d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005c4de) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005c4de) list_medium_line_x2_t3_g4_g

0x0b35,	// (0x0004dd51) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0b35,	// (0x0004dd51) list_medium_line_x2_t3_g4_t1

0x0b4f,	// (0x0004dd6b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0b4f,	// (0x0004dd6b) list_medium_line_x2_t3_g4_t2

0x0146,	// (0x0004d362) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0146,	// (0x0004d362) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0005cf7d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0005cf7d) list_medium_line_x2_t3_g4_t

0x04b2,	// (0x0004d6ce) list_medium_line_g2_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_g2_g1

0x04be,	// (0x0004d6da) list_medium_line_g2_g2_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0005cc2f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0005cc2f) list_medium_line_g2_g

0x0b68,	// (0x0004dd84) list_medium_line_g2_t1_ParamLimits

0x0b68,	// (0x0004dd84) list_medium_line_g2_t1

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g2_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g2_g1

0x04be,	// (0x0004d6da) list_medium_line_t3_g2_g2_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0005cc2f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0005cc2f) list_medium_line_t3_g2_g

0x0b7d,	// (0x0004dd99) list_medium_line_t3_g2_t1_ParamLimits

0x0b7d,	// (0x0004dd99) list_medium_line_t3_g2_t1

0x0b97,	// (0x0004ddb3) list_medium_line_t3_g2_t2_ParamLimits

0x0b97,	// (0x0004ddb3) list_medium_line_t3_g2_t2

0x0bad,	// (0x0004ddc9) list_medium_line_t3_g2_t3_ParamLimits

0x0bad,	// (0x0004ddc9) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0005cf84) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0005cf84) list_medium_line_t3_g2_t

0x080c,	// (0x0004da28) list_medium_line_right_icon_g1

0x0bc4,	// (0x0004dde0) list_medium_line_right_icon_t1

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g1

0x0bd2,	// (0x0004ddee) list_medium_line_t2_t1_ParamLimits

0x0bd2,	// (0x0004ddee) list_medium_line_t2_t1

0x0bec,	// (0x0004de08) list_medium_line_t2_t2_ParamLimits

0x0bec,	// (0x0004de08) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0005cf8b) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0005cf8b) list_medium_line_t2_t

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g1

0x0c05,	// (0x0004de21) list_medium_line_t3_t1_ParamLimits

0x0c05,	// (0x0004de21) list_medium_line_t3_t1

0x0c1c,	// (0x0004de38) list_medium_line_t3_t2_ParamLimits

0x0c1c,	// (0x0004de38) list_medium_line_t3_t2

0x0c31,	// (0x0004de4d) list_medium_line_t3_t3_ParamLimits

0x0c31,	// (0x0004de4d) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0005cf90) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0005cf90) list_medium_line_t3_t

0x04b2,	// (0x0004d6ce) list_medium_line_g3_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_g3_g1

0x0c43,	// (0x0004de5f) list_medium_line_g3_g2_ParamLimits

0x0c43,	// (0x0004de5f) list_medium_line_g3_g2

0x04be,	// (0x0004d6da) list_medium_line_g3_g3_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0005cf97) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0005cf97) list_medium_line_g3_g

0x0c4f,	// (0x0004de6b) list_medium_line_g3_t1_ParamLimits

0x0c4f,	// (0x0004de6b) list_medium_line_g3_t1

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g3_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t2_g3_g1

0x0c43,	// (0x0004de5f) list_medium_line_t2_g3_g2_ParamLimits

0x0c43,	// (0x0004de5f) list_medium_line_t2_g3_g2

0x04be,	// (0x0004d6da) list_medium_line_t2_g3_g3_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0005cf97) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0005cf97) list_medium_line_t2_g3_g

0x0c64,	// (0x0004de80) list_medium_line_t2_g3_t1_ParamLimits

0x0c64,	// (0x0004de80) list_medium_line_t2_g3_t1

0x0c7b,	// (0x0004de97) list_medium_line_t2_g3_t2_ParamLimits

0x0c7b,	// (0x0004de97) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0005cf9e) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0005cf9e) list_medium_line_t2_g3_t

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g3_g1_ParamLimits

0x04b2,	// (0x0004d6ce) list_medium_line_t3_g3_g1

0x0c43,	// (0x0004de5f) list_medium_line_t3_g3_g2_ParamLimits

0x0c43,	// (0x0004de5f) list_medium_line_t3_g3_g2

0x04be,	// (0x0004d6da) list_medium_line_t3_g3_g3_ParamLimits

0x04be,	// (0x0004d6da) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0005cf97) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0005cf97) list_medium_line_t3_g3_g

0x0c96,	// (0x0004deb2) list_medium_line_t3_g3_t1_ParamLimits

0x0c96,	// (0x0004deb2) list_medium_line_t3_g3_t1

0x0caf,	// (0x0004decb) list_medium_line_t3_g3_t2_ParamLimits

0x0caf,	// (0x0004decb) list_medium_line_t3_g3_t2

0x0cc5,	// (0x0004dee1) list_medium_line_t3_g3_t3_ParamLimits

0x0cc5,	// (0x0004dee1) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0005cfa3) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0005cfa3) list_medium_line_t3_g3_t

0x0902,	// (0x0004db1e) list_medium_line_right_iconx2_g1

0x080c,	// (0x0004da28) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0005cfaa) list_medium_line_right_iconx2_g

0x0cdf,	// (0x0004defb) list_medium_line_right_iconx2_t1

0x0902,	// (0x0004db1e) list_medium_line_t2_right_iconx2_g1

0x080c,	// (0x0004da28) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0005cfaa) list_medium_line_t2_right_iconx2_g

0x0ced,	// (0x0004df09) list_medium_line_t2_right_iconx2_t1

0x0cfd,	// (0x0004df19) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0005cfaf) list_medium_line_t2_right_iconx2_t

0x0d0f,	// (0x0004df2b) list_medium_line_x4_t4_t1

0x0d1d,	// (0x0004df39) list_medium_line_x4_t4_t2

0x0d2d,	// (0x0004df49) list_medium_line_x4_t4_t3

0x0d3d,	// (0x0004df59) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0005cfb4) list_medium_line_x4_t4_t

0x87d0,	// (0x000559ec) tport_appsw_pane_ParamLimits

0x87d0,	// (0x000559ec) tport_appsw_pane

0x87e8,	// (0x00055a04) tport_contact_pane_ParamLimits

0x87e8,	// (0x00055a04) tport_contact_pane

0x8800,	// (0x00055a1c) tport_listscroll_pane_ParamLimits

0x8800,	// (0x00055a1c) tport_listscroll_pane

0x881a,	// (0x00055a36) cell_tport_appsw_pane_ParamLimits

0x881a,	// (0x00055a36) cell_tport_appsw_pane

0xd68d,	// (0x0005a8a9) tport_appsw_pane_g1_ParamLimits

0xd68d,	// (0x0005a8a9) tport_appsw_pane_g1

0xe811,	// (0x0005ba2d) tport_contact_pane_g1

0xe81a,	// (0x0005ba36) tport_contact_pane_t1

0xe828,	// (0x0005ba44) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0005cfbd) tport_contact_pane_t

0xe836,	// (0x0005ba52) list_tport_pane

0xe83f,	// (0x0005ba5b) scroll_pane_cp_030

0x8862,	// (0x00055a7e) cell_tport_appsw_pane_g1

0x8872,	// (0x00055a8e) cell_tport_appsw_pane_t1

0x8880,	// (0x00055a9c) grid_highlight_pane_cp019

0x8888,	// (0x00055aa4) list_tport_double_graphic_pane_ParamLimits

0x8888,	// (0x00055aa4) list_tport_double_graphic_pane

0xa55f,	// (0x0005777b) list_highlight_pane_cp023_ParamLimits

0xa55f,	// (0x0005777b) list_highlight_pane_cp023

0x8895,	// (0x00055ab1) list_tport_double_graphic_pane_g1_ParamLimits

0x8895,	// (0x00055ab1) list_tport_double_graphic_pane_g1

0x88a2,	// (0x00055abe) list_tport_double_graphic_pane_t1_ParamLimits

0x88a2,	// (0x00055abe) list_tport_double_graphic_pane_t1

0x88b7,	// (0x00055ad3) list_tport_double_graphic_pane_t2_ParamLimits

0x88b7,	// (0x00055ad3) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0005cfc9) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0005cfc9) list_tport_double_graphic_pane_t

0x9769,	// (0x00056985) main_cale_note_pane

0x69a0,	// (0x00053bbc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69a0,	// (0x00053bbc) cell_vitu2_function_top_wide_pane_cp01

0x8186,	// (0x000553a2) wait_bar_pane_cp05_ParamLimits

0xa55f,	// (0x0005777b) listscroll_cmail_pane

0xe848,	// (0x0005ba64) list_cmail_pane

0x88c9,	// (0x00055ae5) list_cmail_body_pane

0x88dd,	// (0x00055af9) list_single_cmail_header_caption_pane

0x88f4,	// (0x00055b10) list_single_cmail_header_detail_pane_ParamLimits

0x88f4,	// (0x00055b10) list_single_cmail_header_detail_pane

0xe858,	// (0x0005ba74) list_single_cmail_header_caption_pane_t1

0x0d4d,	// (0x0004df69) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0d4d,	// (0x0004df69) list_single_cmail_header_detail_pane_g1

0x891e,	// (0x00055b3a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x891e,	// (0x00055b3a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0005cfce) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0005cfce) list_single_cmail_header_detail_pane_g

0x892a,	// (0x00055b46) list_single_cmail_header_detail_pane_t1_ParamLimits

0x892a,	// (0x00055b46) list_single_cmail_header_detail_pane_t1

0x898a,	// (0x00055ba6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x898a,	// (0x00055ba6) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x0005b547) list_cmail_body_pane_g1

0xe87c,	// (0x0005ba98) list_cmail_body_pane_t1

0xd6ad,	// (0x0005a8c9) list_single_cmail_header_editor_pane_bg_g1

0xac0f,	// (0x00057e2b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6bd,	// (0x0005a8d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b5,	// (0x0005a8d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8f2,	// (0x0005ab0e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6dd,	// (0x0005a8f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6cd,	// (0x0005a8e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d5,	// (0x0005a8f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabef,	// (0x00057e0b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89a1,	// (0x00055bbd) calenote_gesture_pane_ParamLimits

0x89a1,	// (0x00055bbd) calenote_gesture_pane

0x89c1,	// (0x00055bdd) calenote_window_pane_ParamLimits

0x89c1,	// (0x00055bdd) calenote_window_pane

0xe88a,	// (0x0005baa6) popup_note_window_cp01

0x89dd,	// (0x00055bf9) calenote_swipe_1_pane_ParamLimits

0x89dd,	// (0x00055bf9) calenote_swipe_1_pane

0x857c,	// (0x00055798) calenote_swipe_2_pane_ParamLimits

0x857c,	// (0x00055798) calenote_swipe_2_pane

0xe697,	// (0x0005b8b3) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x0005b8b3) calenote_swipe_1_pane_g1

0xe6a4,	// (0x0005b8c0) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x0005b8c0) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0005cef2) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0005cef2) calenote_swipe_1_pane_g

0xe89c,	// (0x0005bab8) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x0005bab8) calenote_swipe_1_pane_t1

0xe697,	// (0x0005b8b3) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x0005b8b3) calenote_swipe_2_pane_g1

0xe8bb,	// (0x0005bad7) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x0005bad7) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0005cfda) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0005cfda) calenote_swipe_2_pane_g

0xe8c7,	// (0x0005bae3) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x0005bae3) calenote_swipe_2_pane_t1

0x9769,	// (0x00056985) main_mup_navstr_pane

0x5668,	// (0x00052884) main_mup3_pane_t7_ParamLimits

0x5668,	// (0x00052884) main_mup3_pane_t7

0xa031,	// (0x0005724d) main_mp4_pane_g6_ParamLimits

0xa031,	// (0x0005724d) main_mp4_pane_g6

0xa1d5,	// (0x000573f1) main_image3_pane_t4_ParamLimits

0xa1d5,	// (0x000573f1) main_image3_pane_t4

0x89f2,	// (0x00055c0e) popup_navstr_preview_pane_ParamLimits

0x89f2,	// (0x00055c0e) popup_navstr_preview_pane

0x8a06,	// (0x00055c22) scroll_navstr_pane_ParamLimits

0x8a06,	// (0x00055c22) scroll_navstr_pane

0x9769,	// (0x00056985) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x0005bb0a) popup_navstr_preview_pane_t1

0x8a1a,	// (0x00055c36) scroll_navstr_pane_g1_ParamLimits

0x8a1a,	// (0x00055c36) scroll_navstr_pane_g1

0x8a2e,	// (0x00055c4a) scroll_navstr_pane_t1_ParamLimits

0x8a2e,	// (0x00055c4a) scroll_navstr_pane_t1

0xe893,	// (0x0005baaf) bg_button_pane_cp014

0xe893,	// (0x0005baaf) bg_button_pane_cp030

0x07b2,	// (0x0004d9ce) list_double_fisheye_pane_g4_ParamLimits

0x07b2,	// (0x0004d9ce) list_double_fisheye_pane_g4

0x07be,	// (0x0004d9da) list_double_fisheye_pane_g5_ParamLimits

0x07be,	// (0x0004d9da) list_double_fisheye_pane_g5

0xcf4e,	// (0x0005a16a) sp_fs_scroll_pane_cp03

0xe78a,	// (0x0005b9a6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x0005b9b2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0005cf0f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x0005b9be) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x0005ba6c) sp_fs_scroll_pane_cp02

0xa8f5,	// (0x00057b11) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8f5,	// (0x00057b11) popup_sp_fs_calendar_preview_list_single_pane

0x9769,	// (0x00056985) main_cam6_pano_pane

0xa55f,	// (0x0005777b) main_mup3_pane_ParamLimits

0x9769,	// (0x00056985) main_phacti_pane

0x8059,	// (0x00055275) bg_button_pane_cp11

0x8073,	// (0x0005528f) main_mobtv_info_pane_g2_ParamLimits

0x8073,	// (0x0005528f) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005ce6f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005ce6f) main_mobtv_info_pane_g

0x8250,	// (0x0005546c) sc_clock_pane_t5_ParamLimits

0x8250,	// (0x0005546c) sc_clock_pane_t5

0x830b,	// (0x00055527) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x0005b7e4) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x0005b7e4) main_radioblah_pane_t3

0xe5e0,	// (0x0005b7fc) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x0005b7fc) main_radioblah_pane_t4

0x8333,	// (0x0005554f) main_radioblah_text_pane_ParamLimits

0x8333,	// (0x0005554f) main_radioblah_text_pane

0x8345,	// (0x00055561) main_radioblah_info_pane_g1_ParamLimits

0x83de,	// (0x000555fa) main_radioblah_info_pane_t4_ParamLimits

0x83de,	// (0x000555fa) main_radioblah_info_pane_t4

0xa55f,	// (0x0005777b) main_sp_fs_calendar_pane

0x8a45,	// (0x00055c61) main_phacti_pane_g1

0x8a4d,	// (0x00055c69) phacti_note_pane_ParamLimits

0x8a4d,	// (0x00055c69) phacti_note_pane

0xe905,	// (0x0005bb21) phacti_term_pane_ParamLimits

0xe905,	// (0x0005bb21) phacti_term_pane

0xe91a,	// (0x0005bb36) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x0005bb36) phacti_note_pane_t1

0x8a61,	// (0x00055c7d) phacti_term_pane_g1

0x8a69,	// (0x00055c85) phacti_term_pane_t1_ParamLimits

0x8a69,	// (0x00055c85) phacti_term_pane_t1

0xe931,	// (0x0005bb4d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x0005bb55) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0005cfe4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x0005bb5d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x0005bb5d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x0005bb73) aid_popup_sp_fs_bg_corner_pane

0xcc58,	// (0x00059e74) popup_sp_fs_calendar_preview_bg_pane_g1

0x9769,	// (0x00056985) popup_sp_fs_calendar_preview_bg_pane

0x1ee0,	// (0x0004f0fc) popup_sp_fs_calendar_preview_list_pane

0xc850,	// (0x00059a6c) bg_main_sp_fs_cale_pane_ParamLimits

0xc850,	// (0x00059a6c) bg_main_sp_fs_cale_pane

0x8afd,	// (0x00055d19) listscroll_cale_mrui_pane_ParamLimits

0x8afd,	// (0x00055d19) listscroll_cale_mrui_pane

0x8b12,	// (0x00055d2e) listscroll_sp_fs_schedule_track_pane

0x8b1b,	// (0x00055d37) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b1b,	// (0x00055d37) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x0005bb7b) main_sp_fs_ribbon_pane

0xa3c9,	// (0x000575e5) popup_sp_fs_cale_preview_window

0x8b2e,	// (0x00055d4a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b2e,	// (0x00055d4a) list_single_sp_fs_schedule_track_pane

0xa55f,	// (0x0005777b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa55f,	// (0x0005777b) bg_sp_fs_highlight_list_pane_cp03

0x8b42,	// (0x00055d5e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b42,	// (0x00055d5e) list_single_sp_fs_schedule_track_pane_g1

0x8b4e,	// (0x00055d6a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b4e,	// (0x00055d6a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0005cfe9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0005cfe9) list_single_sp_fs_schedule_track_pane_g

0x8b5a,	// (0x00055d76) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b5a,	// (0x00055d76) list_single_sp_fs_schedule_track_pane_t1

0x8b74,	// (0x00055d90) sp_fs_schedule_track_pane_ParamLimits

0x8b74,	// (0x00055d90) sp_fs_schedule_track_pane

0xe967,	// (0x0005bb83) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x0005bb8b) sp_fs_schedule_track_pane_g2

0xe977,	// (0x0005bb93) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x0005bb9b) sp_fs_schedule_track_pane_g4

0xe987,	// (0x0005bba3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0005cfee) sp_fs_schedule_track_pane_g

0xd6ad,	// (0x0005a8c9) bg_sp_fs_schedule_viewer_highlight_g1

0xac0f,	// (0x00057e2b) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b5,	// (0x0005a8d1) bg_sp_fs_schedule_viewer_highlight_g3

0xd6bd,	// (0x0005a8d9) bg_sp_fs_schedule_viewer_highlight_g4

0xd8f2,	// (0x0005ab0e) bg_sp_fs_schedule_viewer_highlight_g5

0xd6cd,	// (0x0005a8e9) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d5,	// (0x0005a8f1) bg_sp_fs_schedule_viewer_highlight_g7

0xd6dd,	// (0x0005a8f9) bg_sp_fs_schedule_viewer_highlight_g8

0xabef,	// (0x00057e0b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0005cff9) bg_sp_fs_schedule_viewer_highlight_g

0x9769,	// (0x00056985) bg_main_sp_fs_ribbon_pane

0x8b85,	// (0x00055da1) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x0005bbab) main_sp_fs_ribbon_pane_t1

0x8b8e,	// (0x00055daa) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x0005bbba) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0005d00c) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x0005bbc9) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x0005bbd1) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x0005bbda) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x0005bbe3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0005d013) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x0005bbeb) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x0005bbf4) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x0005bbfd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0005d01a) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x0005bc06) list_cale_mrui_pane

0x8b9d,	// (0x00055db9) sp_fs_scroll_pane_cp07_ParamLimits

0x8b9d,	// (0x00055db9) sp_fs_scroll_pane_cp07

0x8bb9,	// (0x00055dd5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8bb9,	// (0x00055dd5) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x0005bc13) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x0005bc1b) list_sp_fs_schedule_track_pane

0xea07,	// (0x0005bc23) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x0005bc23) sp_fs_scroll_pane_cp06

0xcc58,	// (0x00059e74) bgmain_sp_fs_calendar_pane_g1

0x0d65,	// (0x0004df81) list_single_cale_mrui_pane_ParamLimits

0x0d65,	// (0x0004df81) list_single_cale_mrui_pane

0xa3db,	// (0x000575f7) list_single_cale_mrui_row_pane_ParamLimits

0xa3db,	// (0x000575f7) list_single_cale_mrui_row_pane

0xa3e8,	// (0x00057604) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3e8,	// (0x00057604) list_single_cale_mrui_row_pane_g1

0xa420,	// (0x0005763c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa420,	// (0x0005763c) list_single_cale_mrui_row_pane_t1

0x0d87,	// (0x0004dfa3) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0d87,	// (0x0004dfa3) list_single_cale_mrui_row_pane_t2

0xa432,	// (0x0005764e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa432,	// (0x0005764e) list_single_cale_mrui_row_pane_t3

0xa461,	// (0x0005767d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa461,	// (0x0005767d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0005d028) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0005d028) list_single_cale_mrui_row_pane_t

0x0def,	// (0x0004e00b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0def,	// (0x0004e00b) list_single_cmail_header_editor_pane_bg_cp01

0x0e15,	// (0x0004e031) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e15,	// (0x0004e031) list_single_cmail_header_editor_pane_bg_cp02

0x8bc9,	// (0x00055de5) main_radioblah_text_pane_t1_ParamLimits

0x8bc9,	// (0x00055de5) main_radioblah_text_pane_t1

0xea26,	// (0x0005bc42) cam6_indi_pane_cp01

0xea2e,	// (0x0005bc4a) cam6_mode_pane_cp01

0xea36,	// (0x0005bc52) cam6_pano_pane

0xea3f,	// (0x0005bc5b) cam6_zoom_pane_cp01

0xea47,	// (0x0005bc63) cam6_pano_image_pane

0xea52,	// (0x0005bc6e) cam6_pano_pane_g1

0xe32b,	// (0x0005b547) cam6_pano_pane_g2

0xea5b,	// (0x0005bc77) cam6_pano_pane_g3

0xea64,	// (0x0005bc80) cam6_pano_pane_g4

0xd20f,	// (0x0005a42b) cam6_pano_pane_g5

0xea6d,	// (0x0005bc89) cam6_pano_pane_g6

0xea77,	// (0x0005bc93) cam6_pano_pane_g7

0xea7f,	// (0x0005bc9b) cam6_pano_pane_g8

0xea88,	// (0x0005bca4) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0005d031) cam6_pano_pane_g

0x9769,	// (0x00056985) main_browser_tag_pane

0xe8e6,	// (0x0005bb02) grid_navstr_albumart_pane

0xea93,	// (0x0005bcaf) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x0005bcaf) cell_navstr_albumart_pane

0xeab3,	// (0x0005bccf) cell_navstr_albumart_pane_g1

0xc621,	// (0x0005983d) cell_navstr_albumart_pane_g2

0xc631,	// (0x0005984d) cell_navstr_albumart_pane_g3

0xc629,	// (0x00059845) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0005d044) cell_navstr_albumart_pane_g

0x8be4,	// (0x00055e00) bt_list_pane_ParamLimits

0x8be4,	// (0x00055e00) bt_list_pane

0x8bf8,	// (0x00055e14) bt_list_pane_t1

0x8c07,	// (0x00055e23) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0005d04d) bt_list_pane_t

0x9769,	// (0x00056985) main_cale_prevew_pane

0x8c16,	// (0x00055e32) popup_cale_preview_window_ParamLimits

0x8c16,	// (0x00055e32) popup_cale_preview_window

0xa55f,	// (0x0005777b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa55f,	// (0x0005777b) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x0005bcd7) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x0005bcd7) list_cale_preview_pane

0x8c2f,	// (0x00055e4b) list_double_cale_preview_pane_ParamLimits

0x8c2f,	// (0x00055e4b) list_double_cale_preview_pane

0xd6e5,	// (0x0005a901) list_single_cale_preview_pane_ParamLimits

0xd6e5,	// (0x0005a901) list_single_cale_preview_pane

0x8c41,	// (0x00055e5d) list_single_cale_preview_pane_g1

0x8c49,	// (0x00055e65) list_single_cale_preview_pane_t1_ParamLimits

0x8c49,	// (0x00055e65) list_single_cale_preview_pane_t1

0x8c5e,	// (0x00055e7a) list_double_cale_preview_pane_g1

0x8c66,	// (0x00055e82) list_double_cale_preview_pane_t1_ParamLimits

0x8c66,	// (0x00055e82) list_double_cale_preview_pane_t1

0x8c7b,	// (0x00055e97) list_double_cale_preview_pane_t2_ParamLimits

0x8c7b,	// (0x00055e97) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0005d052) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0005d052) list_double_cale_preview_pane_t

0x9769,	// (0x00056985) main_ezdial_pane

0xa55f,	// (0x0005777b) main_sp_fs_email_pane_ParamLimits

0x85d8,	// (0x000557f4) cmail_ddmenu_btn01_pane_ParamLimits

0x85d8,	// (0x000557f4) cmail_ddmenu_btn01_pane

0x85eb,	// (0x00055807) cmail_ddmenu_btn02_pane_ParamLimits

0x85eb,	// (0x00055807) cmail_ddmenu_btn02_pane

0x860e,	// (0x0005582a) cmail_ddmenu_btn03_pane_ParamLimits

0x860e,	// (0x0005582a) cmail_ddmenu_btn03_pane

0x8634,	// (0x00055850) main_sp_fs_ctrlbar_pane_ParamLimits

0x8658,	// (0x00055874) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88c9,	// (0x00055ae5) list_cmail_body_pane_ParamLimits

0xe866,	// (0x0005ba82) bg_button_pane_cp12

0xe86f,	// (0x0005ba8b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x0005ba8b) list_single_cmail_header_detail_pane_g3

0x8966,	// (0x00055b82) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8966,	// (0x00055b82) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0005cfd5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0005cfd5) list_single_cmail_header_detail_pane_t

0x8a7e,	// (0x00055c9a) phacti_term_pane_t2_ParamLimits

0x8a7e,	// (0x00055c9a) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0005cfdf) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0005cfdf) phacti_term_pane_t

0xeac7,	// (0x0005bce3) aid_size_list_single_double

0x8c93,	// (0x00055eaf) popup_ezdial_listscroll_window

0x8caf,	// (0x00055ecb) popup_number_entry_window_cp01

0xa9b6,	// (0x00057bd2) bg_popup_call_pane_cp09

0xeae1,	// (0x0005bcfd) ezdial_list_pane

0xeae9,	// (0x0005bd05) scroll_pane_cp23

0xc850,	// (0x00059a6c) bg_button_pane_cp028_ParamLimits

0xc850,	// (0x00059a6c) bg_button_pane_cp028

0x8cbd,	// (0x00055ed9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cbd,	// (0x00055ed9) cmail_ddmenu_btn01_pane_g1

0x8cc9,	// (0x00055ee5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8cc9,	// (0x00055ee5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0005d057) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0005d057) cmail_ddmenu_btn01_pane_g

0xeaf1,	// (0x0005bd0d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf1,	// (0x0005bd0d) cmail_ddmenu_btn01_pane_t1

0xc850,	// (0x00059a6c) bg_button_pane_cp029_ParamLimits

0xc850,	// (0x00059a6c) bg_button_pane_cp029

0x8cd5,	// (0x00055ef1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cd5,	// (0x00055ef1) cmail_ddmenu_btn02_pane_g1

0x8cee,	// (0x00055f0a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cee,	// (0x00055f0a) cmail_ddmenu_btn02_pane_t1

0xa55f,	// (0x0005777b) bg_button_pane_cp031_ParamLimits

0xa55f,	// (0x0005777b) bg_button_pane_cp031

0x8cd5,	// (0x00055ef1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cd5,	// (0x00055ef1) cmail_ddmenu_btn03_pane_g1

0x8cee,	// (0x00055f0a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cee,	// (0x00055f0a) cmail_ddmenu_btn03_pane_t1

0x6215,	// (0x00053431) cell_dialer2_keypad_pane_t1_ParamLimits

0x622f,	// (0x0005344b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x622f,	// (0x0005344b) cell_dialer2_keypad_pane_t1_copy1

0x7ec0,	// (0x000550dc) ncimui_group_button_pane

0xa55f,	// (0x0005777b) main_sp_fs_calendar_pane_ParamLimits

0x88dd,	// (0x00055af9) list_single_cmail_header_caption_pane_ParamLimits

0x8ab1,	// (0x00055ccd) aid_recal_txt_sm_pane

0x9769,	// (0x00056985) mian_recal_day_pane

0xa3c9,	// (0x000575e5) popup_sp_fs_cale_preview_window_ParamLimits

0xeb06,	// (0x0005bd22) list_recal_day_pane

0xa4ab,	// (0x000576c7) list_single_recal_day_pane_ParamLimits

0xa4ab,	// (0x000576c7) list_single_recal_day_pane

0xeb2d,	// (0x0005bd49) list_single_recal_day_pane_g1_ParamLimits

0xeb2d,	// (0x0005bd49) list_single_recal_day_pane_g1

0xa4bd,	// (0x000576d9) list_single_recal_day_pane_g2_ParamLimits

0xa4bd,	// (0x000576d9) list_single_recal_day_pane_g2

0xa4cd,	// (0x000576e9) list_single_recal_day_pane_g3_ParamLimits

0xa4cd,	// (0x000576e9) list_single_recal_day_pane_g3

0x0e35,	// (0x0004e051) list_single_recal_day_pane_g4_ParamLimits

0x0e35,	// (0x0004e051) list_single_recal_day_pane_g4

0xa4d9,	// (0x000576f5) list_single_recal_day_pane_g5_ParamLimits

0xa4d9,	// (0x000576f5) list_single_recal_day_pane_g5

0xa4e9,	// (0x00057705) list_single_recal_day_pane_g6_ParamLimits

0xa4e9,	// (0x00057705) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0005d066) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0005d066) list_single_recal_day_pane_g

0xa4fd,	// (0x00057719) list_single_recal_day_pane_t1

0xa50f,	// (0x0005772b) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0005d071) list_single_recal_day_pane_t

0x8d12,	// (0x00055f2e) ncimui_query_button_pane_ParamLimits

0x8d12,	// (0x00055f2e) ncimui_query_button_pane

0x8d22,	// (0x00055f3e) ncimui_query_button_pane_t1_ParamLimits

0x8d22,	// (0x00055f3e) ncimui_query_button_pane_t1

0xeb39,	// (0x0005bd55) ncimui_query_button_pane_t2_ParamLimits

0xeb39,	// (0x0005bd55) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0005d076) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0005d076) ncimui_query_button_pane_t

0x8d35,	// (0x00055f51) query_button_pane_ParamLimits

0x8d35,	// (0x00055f51) query_button_pane

0x9769,	// (0x00056985) bg_button_pane_cp0028

0xeb4c,	// (0x0005bd68) query_button_pane_t1

0x425d,	// (0x00051479) main_tport_pane_ParamLimits

0x878d,	// (0x000559a9) bg_popup_window_pane_cp01_ParamLimits

0x878d,	// (0x000559a9) bg_popup_window_pane_cp01

0x87a8,	// (0x000559c4) heading_pane_cp08_ParamLimits

0x87a8,	// (0x000559c4) heading_pane_cp08

0x87bb,	// (0x000559d7) heading_pane_cp07_ParamLimits

0x87bb,	// (0x000559d7) heading_pane_cp07

0x8862,	// (0x00055a7e) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0005cfc2) cell_tport_appsw_pane_g

0x383b,	// (0x00050a57) input_candi_list_open_g1

0xadd2,	// (0x00057fee) list_cale_time_pane_g6_ParamLimits

0xadd2,	// (0x00057fee) list_cale_time_pane_g6

0x5025,	// (0x00052241) aid_size_touch_calib_1_ParamLimits

0x5025,	// (0x00052241) aid_size_touch_calib_1

0x5037,	// (0x00052253) aid_size_touch_calib_2_ParamLimits

0x5037,	// (0x00052253) aid_size_touch_calib_2

0x504f,	// (0x0005226b) aid_size_touch_calib_3_ParamLimits

0x504f,	// (0x0005226b) aid_size_touch_calib_3

0x506d,	// (0x00052289) aid_size_touch_calib_4_ParamLimits

0x506d,	// (0x00052289) aid_size_touch_calib_4

0x5085,	// (0x000522a1) main_touch_calib_button_group_pane_ParamLimits

0x5085,	// (0x000522a1) main_touch_calib_button_group_pane

0x509d,	// (0x000522b9) main_touch_calib_pane_g1_ParamLimits

0x50af,	// (0x000522cb) main_touch_calib_pane_g2_ParamLimits

0x50c1,	// (0x000522dd) main_touch_calib_pane_g3_ParamLimits

0x50d3,	// (0x000522ef) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0005c980) main_touch_calib_pane_g_ParamLimits

0x50e5,	// (0x00052301) main_touch_calib_pane_t1_ParamLimits

0x50ff,	// (0x0005231b) main_touch_calib_pane_t2_ParamLimits

0x5119,	// (0x00052335) main_touch_calib_pane_t3_ParamLimits

0x512d,	// (0x00052349) main_touch_calib_pane_t4_ParamLimits

0x5141,	// (0x0005235d) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0005c989) main_touch_calib_pane_t_ParamLimits

0xcfb2,	// (0x0005a1ce) list_single_fp_cale_pane_g3_ParamLimits

0xcfb2,	// (0x0005a1ce) list_single_fp_cale_pane_g3

0xa55f,	// (0x0005777b) bg_button_pane_cp012_ParamLimits

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp03_ParamLimits

0x7156,	// (0x00054372) cell_vitu2_function_top_pane_g1_ParamLimits

0xa55f,	// (0x0005777b) bg_vkb2_func_pane_cp04_ParamLimits

0x7e4e,	// (0x0005506a) main_ncimui_button_group_pane_ParamLimits

0x7e4e,	// (0x0005506a) main_ncimui_button_group_pane

0x7eae,	// (0x000550ca) main_ncimui_pane_t3_ParamLimits

0x7eae,	// (0x000550ca) main_ncimui_pane_t3

0xe8fc,	// (0x0005bb18) phacti_button_group_pane

0xeac7,	// (0x0005bce3) aid_size_list_single_double_ParamLimits

0x8c93,	// (0x00055eaf) popup_ezdial_listscroll_window_ParamLimits

0x8caf,	// (0x00055ecb) popup_number_entry_window_cp01_ParamLimits

0x8d48,	// (0x00055f64) phacti_button_pane_ParamLimits

0x8d48,	// (0x00055f64) phacti_button_pane

0x9769,	// (0x00056985) bg_button_pane_cp14

0xeb5a,	// (0x0005bd76) phacti_button_pane_t1

0x8d59,	// (0x00055f75) main_touch_calib_button_pane_ParamLimits

0x8d59,	// (0x00055f75) main_touch_calib_button_pane

0xa7c1,	// (0x000579dd) bg_button_pane_cp18_ParamLimits

0xa7c1,	// (0x000579dd) bg_button_pane_cp18

0xeb68,	// (0x0005bd84) main_touch_calib_button_pane_t1_ParamLimits

0xeb68,	// (0x0005bd84) main_touch_calib_button_pane_t1

0xeb7e,	// (0x0005bd9a) main_touch_calib_button_pane_t2_ParamLimits

0xeb7e,	// (0x0005bd9a) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0005d07b) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0005d07b) main_touch_calib_button_pane_t

0x9769,	// (0x00056985) cell_ncimui_button_pane

0x9769,	// (0x00056985) bg_button_pane_cp032

0xeb9c,	// (0x0005bdb8) cell_ncimui_button_pane_t1

0xa1b5,	// (0x000573d1) image3_infobar_pane_ParamLimits

0xa1b5,	// (0x000573d1) image3_infobar_pane

0x827c,	// (0x00055498) fs_bigclock_status_pane_ParamLimits

0x827c,	// (0x00055498) fs_bigclock_status_pane

0x8289,	// (0x000554a5) main_fs_bigclock_clock_pane_ParamLimits

0x8289,	// (0x000554a5) main_fs_bigclock_clock_pane

0x82a9,	// (0x000554c5) main_fs_bigclock_indi_pane_ParamLimits

0x82a9,	// (0x000554c5) main_fs_bigclock_indi_pane

0x82d3,	// (0x000554ef) main_fs_bigclock_swipe_pane_ParamLimits

0x82d3,	// (0x000554ef) main_fs_bigclock_swipe_pane

0x9769,	// (0x00056985) main_fs_clock_dumped_data

0xe438,	// (0x0005b654) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x0005b654) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x0005b670) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x0005b670) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x0005b68a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x0005b68a) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x0005b6a4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x0005b6a4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005cea3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005cea3) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x0005b6cf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x0005b6cf) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x0005b6f7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x0005b6f7) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x0005b71f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x0005b71f) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x0005b747) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x0005b747) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005ceae) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005ceae) list_single_fs_bigclock_indicator_pane_t

0xebaa,	// (0x0005bdc6) image3_infobar_fav_pane_ParamLimits

0xebaa,	// (0x0005bdc6) image3_infobar_fav_pane

0xebba,	// (0x0005bdd6) image3_infobar_loc_pane_ParamLimits

0xebba,	// (0x0005bdd6) image3_infobar_loc_pane

0xebce,	// (0x0005bdea) image3_infobar_time_pane_ParamLimits

0xebce,	// (0x0005bdea) image3_infobar_time_pane

0xcc58,	// (0x00059e74) image3_infobar_time_pane_g1

0xebde,	// (0x0005bdfa) image3_infobar_time_pane_t1

0xcc58,	// (0x00059e74) image3_infobar_loc_pane_g1

0xebec,	// (0x0005be08) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0005d080) image3_infobar_loc_pane_g

0xebf4,	// (0x0005be10) image3_infobar_loc_pane_t1

0xcc58,	// (0x00059e74) image3_infobar_fav_pane_g1

0xec02,	// (0x0005be1e) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0005d085) image3_infobar_fav_pane_g

0xec0a,	// (0x0005be26) fs_bigclock_status_battery_pane

0xec13,	// (0x0005be2f) fs_bigclock_status_signal_pane

0xec1c,	// (0x0005be38) fs_bigclock_status_title_pane

0xec25,	// (0x0005be41) fs_bigclock_status_signal_pane_g1

0xec2e,	// (0x0005be4a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0005d08a) fs_bigclock_status_signal_pane_g

0xec36,	// (0x0005be52) fs_bigclock_status_battery_pane_g1

0xec3f,	// (0x0005be5b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0005d08f) fs_bigclock_status_battery_pane_g

0xec47,	// (0x0005be63) fs_bigclock_status_title_pane_t1

0xcc58,	// (0x00059e74) main_fs_bigclock_clock_pane_g1

0xec55,	// (0x0005be71) main_fs_bigclock_clock_pane_g2

0xec5e,	// (0x0005be7a) main_fs_bigclock_clock_pane_g3

0xec5e,	// (0x0005be7a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0005d094) main_fs_bigclock_clock_pane_g

0xec66,	// (0x0005be82) main_fs_bigclock_clock_pane_t1

0x8d6e,	// (0x00055f8a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0005d09d) main_fs_bigclock_clock_pane_t

0xec74,	// (0x0005be90) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec74,	// (0x0005be90) list_single_fs_bigclock_indicator_pane

0xec85,	// (0x0005bea1) list_single_fs_bigclock_pane_ParamLimits

0xec85,	// (0x0005bea1) list_single_fs_bigclock_pane

0xecab,	// (0x0005bec7) main_fs_bigclock_indicator_pane_t1

0xecba,	// (0x0005bed6) list_single_fs_bigclock_pane_g1

0xecc2,	// (0x0005bede) list_single_fs_bigclock_pane_t1

0xcc58,	// (0x00059e74) main_fs_bigclock_swipe_pane_g1

0xed05,	// (0x0005bf21) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0003,	// (0x0004d21f) main_fs_bigclock_swipe_pane_g

0xed0d,	// (0x0005bf29) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed0d,	// (0x0005bf29) main_fs_bigclock_swipe_pane_t1

0x3142,	// (0x0005035e) call_type_pane_ParamLimits

0x9769,	// (0x00056985) main_btmg_pane

0xa414,	// (0x00057630) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa414,	// (0x00057630) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0005d021) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0005d021) list_single_cale_mrui_row_pane_g

0xa49a,	// (0x000576b6) list_recal_vselct_arw_lo_pane

0xeb25,	// (0x0005bd41) list_recal_vselct_arw_up_pane

0xa4a2,	// (0x000576be) list_recal_vselct_pane

0x8dc1,	// (0x00055fdd) btmg_button_pane

0x8dcb,	// (0x00055fe7) main_btmg_pane_g1

0x9769,	// (0x00056985) bg_button_pane_cp044

0xed2a,	// (0x0005bf46) btmg_button_pane_t1

0xc83c,	// (0x00059a58) aid_listscroll_gen

0xa55f,	// (0x0005777b) main_cntbar_detail_pane

0xe848,	// (0x0005ba64) list_cmail_folder_pane

0xcf4e,	// (0x0005a16a) sp_fs_scroll_pane_cp03_ParamLimits

0x0e55,	// (0x0004e071) list_single_fs_dyc_pane_cp01_ParamLimits

0x0e55,	// (0x0004e071) list_single_fs_dyc_pane_cp01

0xed38,	// (0x0005bf54) aid_size_cmail_indent

0xa521,	// (0x0005773d) list_single_dyc_row_pane_cp01

0x8e07,	// (0x00056023) cntbar_detail_list_pane_ParamLimits

0x8e07,	// (0x00056023) cntbar_detail_list_pane

0x8e53,	// (0x0005606f) main_cntbar_detail_cont_pane_ParamLimits

0x8e53,	// (0x0005606f) main_cntbar_detail_cont_pane

0xcf4e,	// (0x0005a16a) scroll_pane_cp032_ParamLimits

0xcf4e,	// (0x0005a16a) scroll_pane_cp032

0x8e67,	// (0x00056083) cntbar_detail_list_event_pane_ParamLimits

0x8e67,	// (0x00056083) cntbar_detail_list_event_pane

0x8e17,	// (0x00056033) cntbar_detail_list_shct_pane

0xac5d,	// (0x00057e79) aid_list_gen

0xed41,	// (0x0005bf5d) aid_scroll

0xed4a,	// (0x0005bf66) aid_size_touch_scroll_bar

0x7733,	// (0x0005494f) aid_list_double

0xa52a,	// (0x00057746) aid_list_single

0x7733,	// (0x0005494f) aid_list_single_lg

0xa533,	// (0x0005774f) aid_list_z_g_a_sm

0xa53b,	// (0x00057757) aid_list_z_g_d

0xa543,	// (0x0005775f) aid_txt_z_prm

0x0e6c,	// (0x0004e088) aid_txt_z_prm_cp01

0x0e7a,	// (0x0004e096) aid_txt_z_sec

0x8e77,	// (0x00056093) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e77,	// (0x00056093) main_cntbar_detail_cont_pane_g1

0x8e8b,	// (0x000560a7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e8b,	// (0x000560a7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0005d0ae) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0005d0ae) main_cntbar_detail_cont_pane_g

0xed53,	// (0x0005bf6f) main_cntbar_detail_cont_pane_t1

0xed61,	// (0x0005bf7d) main_cntbar_detail_cont_pane_t2

0xed6f,	// (0x0005bf8b) main_cntbar_detail_cont_pane_t3

0x0002,

0x000d,	// (0x0004d229) main_cntbar_detail_cont_pane_t

0x8e9b,	// (0x000560b7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e9b,	// (0x000560b7) cell_cntbar_detail_list_shct_pane

0xed7d,	// (0x0005bf99) cntbar_detail_list_shct_pane_g1

0xed86,	// (0x0005bfa2) cntbar_detail_list_shct_pane_g2

0x0001,

0x0014,	// (0x0004d230) cntbar_detail_list_shct_pane_g

0x8eaf,	// (0x000560cb) cntbar_detail_list_event_pane_g1_ParamLimits

0x8eaf,	// (0x000560cb) cntbar_detail_list_event_pane_g1

0x8ebb,	// (0x000560d7) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ebb,	// (0x000560d7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe97,	// (0x0005d0b3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe97,	// (0x0005d0b3) cntbar_detail_list_event_pane_g

0x8f27,	// (0x00056143) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f27,	// (0x00056143) cntbar_detail_list_event_pane_t1

0x8f3c,	// (0x00056158) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f3c,	// (0x00056158) cntbar_detail_list_event_pane_t2

0x0002,

0xfea4,	// (0x0005d0c0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea4,	// (0x0005d0c0) cntbar_detail_list_event_pane_t

0xcc58,	// (0x00059e74) cell_cntbar_detail_list_shct_pane_g1

0xb3b7,	// (0x000585d3) navi_pane_mv_g3

0xa55f,	// (0x0005777b) main_cntbar_detail_pane_ParamLimits

0x9769,	// (0x00056985) main_notif_wgt_pane

0x9fcb,	// (0x000571e7) aid_tch_main_mp4_pane_g4

0xa1ad,	// (0x000573c9) popup_slider_window_cp02

0xa490,	// (0x000576ac) list_recal_day_event_pane

0x8dd5,	// (0x00055ff1) cntbar_detail_btn_pane_ParamLimits

0x8dd5,	// (0x00055ff1) cntbar_detail_btn_pane

0x8dee,	// (0x0005600a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8dee,	// (0x0005600a) cntbar_detail_btn_pane_cp01

0x8e17,	// (0x00056033) cntbar_detail_list_shct_pane_ParamLimits

0x8e27,	// (0x00056043) cntbar_detail_pane_g1_ParamLimits

0x8e27,	// (0x00056043) cntbar_detail_pane_g1

0x8e37,	// (0x00056053) cntbar_detail_pane_t1_ParamLimits

0x8e37,	// (0x00056053) cntbar_detail_pane_t1

0x8ec7,	// (0x000560e3) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ec7,	// (0x000560e3) cntbar_detail_list_event_pane_g3

0x8edf,	// (0x000560fb) cntbar_detail_list_event_pane_g4_ParamLimits

0x8edf,	// (0x000560fb) cntbar_detail_list_event_pane_g4

0x8ef7,	// (0x00056113) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ef7,	// (0x00056113) cntbar_detail_list_event_pane_g5

0x8f0f,	// (0x0005612b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f0f,	// (0x0005612b) cntbar_detail_list_event_pane_g6

0x8f51,	// (0x0005616d) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f51,	// (0x0005616d) cntbar_detail_list_event_pane_t3

0x8f63,	// (0x0005617f) popup_notif_wgt_window_ParamLimits

0x8f63,	// (0x0005617f) popup_notif_wgt_window

0x8f7c,	// (0x00056198) popup_submenu_window_cp01_ParamLimits

0x8f7c,	// (0x00056198) popup_submenu_window_cp01

0xa9b6,	// (0x00057bd2) bg_popup_window_pane_cp10

0xed8f,	// (0x0005bfab) listscroll_notif_wgt_pane

0xeda1,	// (0x0005bfbd) list_notif_wgt_window

0xedaa,	// (0x0005bfc6) scroll_pane_cp033

0x8f8e,	// (0x000561aa) list_notif_wgt_row_pane_ParamLimits

0x8f8e,	// (0x000561aa) list_notif_wgt_row_pane

0xedb3,	// (0x0005bfcf) aid_size_list_notif_wgt_del

0xedc0,	// (0x0005bfdc) list_notif_wgt_row_pane_g1

0xedcc,	// (0x0005bfe8) list_notif_wgt_row_pane_g2

0xede0,	// (0x0005bffc) list_notif_wgt_row_pane_g3

0x0002,

0x002d,	// (0x0004d249) list_notif_wgt_row_pane_g

0xeded,	// (0x0005c009) list_notif_wgt_row_pane_t1

0xee03,	// (0x0005c01f) list_notif_wgt_row_pane_t2

0xee15,	// (0x0005c031) list_notif_wgt_row_pane_t3

0x0002,

0x0034,	// (0x0004d250) list_notif_wgt_row_pane_t

0xd8fa,	// (0x0005ab16) list_recal_day_event_pane_g1

0xee27,	// (0x0005c043) list_recal_day_event_pane_t1

0x9769,	// (0x00056985) bg_button_pane_cp045

0x8f9e,	// (0x000561ba) cntbar_detail_btn_pane_t1

0xc850,	// (0x00059a6c) main_callh_pane_ParamLimits

0xc850,	// (0x00059a6c) main_callh_pane

0x9769,	// (0x00056985) main_coverflow0_pane

0x9769,	// (0x00056985) main_wgtman_pane

0x82eb,	// (0x00055507) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82eb,	// (0x00055507) main_fs_bigclock_unlock_btn_pane

0x885a,	// (0x00055a76) bg_button_pane_cp16

0x886a,	// (0x00055a86) cell_tport_appsw_pane_g3

0x8fac,	// (0x000561c8) cf0_flow_pane_ParamLimits

0x8fac,	// (0x000561c8) cf0_flow_pane

0xee36,	// (0x0005c052) listscroll_cf0_pane

0xee41,	// (0x0005c05d) main_cf0_pane_g1

0x8fc1,	// (0x000561dd) main_cf0_pane_t1_ParamLimits

0x8fc1,	// (0x000561dd) main_cf0_pane_t1

0x8fd8,	// (0x000561f4) main_cf0_pane_t2_ParamLimits

0x8fd8,	// (0x000561f4) main_cf0_pane_t2

0x0001,

0xfeab,	// (0x0005d0c7) main_cf0_pane_t_ParamLimits

0xfeab,	// (0x0005d0c7) main_cf0_pane_t

0xee53,	// (0x0005c06f) scroll_pane_cp11

0x8fef,	// (0x0005620b) cf0_flow_pane_g1

0x8ff7,	// (0x00056213) cf0_flow_pane_g2

0x0001,

0xfeb0,	// (0x0005d0cc) cf0_flow_pane_g

0x8fff,	// (0x0005621b) cf0_flow_pane_t1

0x9769,	// (0x00056985) main_call6_pane

0x9769,	// (0x00056985) main_calllock_pane

0x900d,	// (0x00056229) call6_btn_grp_pane_ParamLimits

0x900d,	// (0x00056229) call6_btn_grp_pane

0x9027,	// (0x00056243) call6_pane_g1_ParamLimits

0x9027,	// (0x00056243) call6_pane_g1

0x903c,	// (0x00056258) popup_call6_1st_window_ParamLimits

0x903c,	// (0x00056258) popup_call6_1st_window

0x904d,	// (0x00056269) popup_call6_2nd_window_ParamLimits

0x904d,	// (0x00056269) popup_call6_2nd_window

0x905e,	// (0x0005627a) cell_call6_btn_pane_ParamLimits

0x905e,	// (0x0005627a) cell_call6_btn_pane

0xa9b6,	// (0x00057bd2) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0005c07a) popup_call6_1st_window_g1

0xee66,	// (0x0005c082) popup_call6_1st_window_g2

0xee6e,	// (0x0005c08a) popup_call6_1st_window_g3

0x0002,

0x004a,	// (0x0004d266) popup_call6_1st_window_g

0xee76,	// (0x0005c092) popup_call6_1st_window_t1

0xee85,	// (0x0005c0a1) popup_call6_1st_window_t2

0xee95,	// (0x0005c0b1) popup_call6_1st_window_t3

0x0002,

0x0051,	// (0x0004d26d) popup_call6_1st_window_t

0xa9b6,	// (0x00057bd2) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0005c07a) popup_call6_2nd_window_g1

0xee66,	// (0x0005c082) popup_call6_2nd_window_g2

0xee6e,	// (0x0005c08a) popup_call6_2nd_window_g3

0x0002,

0x004a,	// (0x0004d266) popup_call6_2nd_window_g

0xee76,	// (0x0005c092) popup_call6_2nd_window_t1

0x9769,	// (0x00056985) bg_button_pane_cp15

0xeea5,	// (0x0005c0c1) cell_call6_btn_pane_g1

0xeeae,	// (0x0005c0ca) cell_call6_btn_pane_t1

0x9072,	// (0x0005628e) listscroll_wgtman_pane_ParamLimits

0x9072,	// (0x0005628e) listscroll_wgtman_pane

0x9093,	// (0x000562af) wgtman_btn_pane_ParamLimits

0x9093,	// (0x000562af) wgtman_btn_pane

0xb1b1,	// (0x000583cd) aid_scroll_copy1

0xeebd,	// (0x0005c0d9) list_wgtman_pane

0x90d6,	// (0x000562f2) wgtman_btn_pane_g1_ParamLimits

0x90d6,	// (0x000562f2) wgtman_btn_pane_g1

0x9102,	// (0x0005631e) wgtman_btn_pane_t1_ParamLimits

0x9102,	// (0x0005631e) wgtman_btn_pane_t1

0xeec7,	// (0x0005c0e3) wgtman_btn_pane_t2_ParamLimits

0xeec7,	// (0x0005c0e3) wgtman_btn_pane_t2

0x0001,

0xfeb5,	// (0x0005d0d1) wgtman_btn_pane_t_ParamLimits

0xfeb5,	// (0x0005d0d1) wgtman_btn_pane_t

0x913f,	// (0x0005635b) listrow_wgtman_pane_ParamLimits

0x913f,	// (0x0005635b) listrow_wgtman_pane

0x9151,	// (0x0005636d) listrow_wgtman_pane_g1

0x915e,	// (0x0005637a) listrow_wgtman_pane_g2

0x0001,

0xfeba,	// (0x0005d0d6) listrow_wgtman_pane_g

0x0e88,	// (0x0004e0a4) listrow_wgtman_pane_t1

0x0ea0,	// (0x0004e0bc) listrow_wgtman_pane_t2

0x0001,

0xfebf,	// (0x0005d0db) listrow_wgtman_pane_t

0x0ec6,	// (0x0004e0e2) wait_bar_pane_cp09

0xeede,	// (0x0005c0fa) main_calllock_btn_pane

0xeee8,	// (0x0005c104) main_calllock_pane_g1

0x9769,	// (0x00056985) bg_button_pane_cp17

0xeef3,	// (0x0005c10f) main_calllock_btn_pane_g1

0xeefc,	// (0x0005c118) main_calllock_btn_pane_t1

0x9769,	// (0x00056985) main_dialer3_pane

0x9769,	// (0x00056985) main_fmrd2_pane

0xcc58,	// (0x00059e74) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x0005c12f) main_fs_bigclock_unlock_btn_pane_t1

0x917c,	// (0x00056398) area_fmrd2_info_pane_ParamLimits

0x917c,	// (0x00056398) area_fmrd2_info_pane

0x918d,	// (0x000563a9) area_fmrd2_visual_pane_ParamLimits

0x918d,	// (0x000563a9) area_fmrd2_visual_pane

0x919b,	// (0x000563b7) fmrd2_indi_pane_ParamLimits

0x919b,	// (0x000563b7) fmrd2_indi_pane

0x91a8,	// (0x000563c4) area_fmrd2_visual_pane_g1

0x91b0,	// (0x000563cc) area_fmrd2_visual_pane_t1

0x91c0,	// (0x000563dc) area_fmrd2_visual_pane_t2

0x91d0,	// (0x000563ec) area_fmrd2_visual_pane_t3

0x0002,

0xfec4,	// (0x0005d0e0) area_fmrd2_visual_pane_t

0x91e0,	// (0x000563fc) area_fmrd2_info_pane_g1

0x91e8,	// (0x00056404) area_fmrd2_info_pane_t1

0x91f8,	// (0x00056414) area_fmrd2_info_pane_t2

0x9208,	// (0x00056424) area_fmrd2_info_pane_t3

0x9218,	// (0x00056434) area_fmrd2_info_pane_t4

0x0003,

0xfecb,	// (0x0005d0e7) area_fmrd2_info_pane_t

0x9226,	// (0x00056442) fmrd2_indi_pane_t1

0x9236,	// (0x00056452) fmrd2_indi_pane_t2

0x9246,	// (0x00056462) fmrd2_indi_pane_t3

0x0002,

0xfed4,	// (0x0005d0f0) fmrd2_indi_pane_t

0xe497,	// (0x0005b6b3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x0005b6b3) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x0005b763) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x0005b763) list_single_fs_bigclock_indicator_pane_t5

0x8a93,	// (0x00055caf) aid_cell_bcale_month_pane_ParamLimits

0x8a93,	// (0x00055caf) aid_cell_bcale_month_pane

0x8aba,	// (0x00055cd6) bcale_month_pane_ParamLimits

0x8aba,	// (0x00055cd6) bcale_month_pane

0x8ade,	// (0x00055cfa) bcale_preview_pane_ParamLimits

0x8ade,	// (0x00055cfa) bcale_preview_pane

0xecc2,	// (0x0005bede) list_single_fs_bigclock_pane_t1_ParamLimits

0xece1,	// (0x0005befd) list_single_fs_bigclock_pane_t2_ParamLimits

0xece1,	// (0x0005befd) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0005d0a9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0005d0a9) list_single_fs_bigclock_pane_t

0xef0b,	// (0x0005c127) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0067,	// (0x0004d283) main_fs_bigclock_unlock_btn_pane_g

0x9256,	// (0x00056472) aid_dia3_key_size_ParamLimits

0x9256,	// (0x00056472) aid_dia3_key_size

0x9265,	// (0x00056481) aid_dia3_listrow_size_ParamLimits

0x9265,	// (0x00056481) aid_dia3_listrow_size

0x927a,	// (0x00056496) dia3_keypad_fun_pane_ParamLimits

0x927a,	// (0x00056496) dia3_keypad_fun_pane

0x9296,	// (0x000564b2) dia3_keypad_num_pane_ParamLimits

0x9296,	// (0x000564b2) dia3_keypad_num_pane

0x92b1,	// (0x000564cd) dia3_listscroll_pane_ParamLimits

0x92b1,	// (0x000564cd) dia3_listscroll_pane

0x92c4,	// (0x000564e0) dia3_numentry_pane_ParamLimits

0x92c4,	// (0x000564e0) dia3_numentry_pane

0xef21,	// (0x0005c13d) dia3_list_pane

0xef2c,	// (0x0005c148) scroll_pane_cp12

0x9769,	// (0x00056985) bg_dia3_numentry_pane

0x92d8,	// (0x000564f4) dia3_numentry_pane_t1

0x92e7,	// (0x00056503) cell_dia3_key_num_pane

0x92ef,	// (0x0005650b) cell_dia3_key0_fun_pane_ParamLimits

0x92ef,	// (0x0005650b) cell_dia3_key0_fun_pane

0x9303,	// (0x0005651f) cell_dia3_key1_fun_pane_ParamLimits

0x9303,	// (0x0005651f) cell_dia3_key1_fun_pane

0x931b,	// (0x00056537) dia3_listrow_pane

0xe1a6,	// (0x0005b3c2) bg_dia3_numentry_pane_g1

0x9769,	// (0x00056985) bg_button_pane_cp21

0xef37,	// (0x0005c153) cell_dia3_key_num_pane_t1

0xef45,	// (0x0005c161) cell_dia3_key_num_pane_t2

0xef54,	// (0x0005c170) cell_dia3_key_num_pane_t3

0xef63,	// (0x0005c17f) cell_dia3_key_num_pane_t4

0x0003,

0x0083,	// (0x0004d29f) cell_dia3_key_num_pane_t

0x9769,	// (0x00056985) bg_button_pane_cp19

0x932d,	// (0x00056549) cell_dia3_key0_fun_pane_g1

0x9769,	// (0x00056985) bg_button_pane_cp20

0x9335,	// (0x00056551) cell_dia3_key1_fun_pane_g1

0x933d,	// (0x00056559) area_left_week_number_pane

0x9349,	// (0x00056565) area_top_day_name_pane

0x935c,	// (0x00056578) frame_month_view_pane

0xef72,	// (0x0005c18e) grid_month_view_pane

0x936f,	// (0x0005658b) cell_top_day_name_pane_ParamLimits

0x936f,	// (0x0005658b) cell_top_day_name_pane

0x939c,	// (0x000565b8) cell_area_left_week_number_pane_ParamLimits

0x939c,	// (0x000565b8) cell_area_left_week_number_pane

0x93b0,	// (0x000565cc) cell_month_view_pane_ParamLimits

0x93b0,	// (0x000565cc) cell_month_view_pane

0xef80,	// (0x0005c19c) frm_month_g1

0x93dd,	// (0x000565f9) frm_month_g2

0x93f0,	// (0x0005660c) frm_month_g3

0x9403,	// (0x0005661f) frm_month_g4

0x9416,	// (0x00056632) frm_month_g5

0x9429,	// (0x00056645) frm_month_g6

0x943c,	// (0x00056658) frm_month_g7

0xef8d,	// (0x0005c1a9) frm_month_g8

0x944f,	// (0x0005666b) frm_month_g9

0x945f,	// (0x0005667b) frm_month_g10

0x946f,	// (0x0005668b) frm_month_g11

0x947f,	// (0x0005669b) frm_month_g12

0x9491,	// (0x000566ad) frm_month_g13

0x94a3,	// (0x000566bf) frm_month_g14

0x94b7,	// (0x000566d3) frm_month_g15

0x94cb,	// (0x000566e7) frm_month_g16

0x000f,

0xfedb,	// (0x0005d0f7) frm_month_g

0xef9a,	// (0x0005c1b6) cell_top_day_name_pane_t1

0x94df,	// (0x000566fb) cell_area_left_week_number_pane_g1

0x94eb,	// (0x00056707) cell_area_left_week_number_pane_t1

0xcea6,	// (0x0005a0c2) cell_month_view_pane_g1

0x94fe,	// (0x0005671a) cell_month_view_pane_t1

0x9769,	// (0x00056985) main_fps_pane

0xe752,	// (0x0005b96e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x0005b96e) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x0005b98a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x0005b98a) cmail_ddmenu_btn02_pane_cp2

0x8ce1,	// (0x00055efd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ce1,	// (0x00055efd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0005d05c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0005d05c) cmail_ddmenu_btn02_pane_g

0x8d00,	// (0x00055f1c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d00,	// (0x00055f1c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0005d061) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0005d061) cmail_ddmenu_btn02_pane_t

0x9511,	// (0x0005672d) fps_text_pane_ParamLimits

0x9511,	// (0x0005672d) fps_text_pane

0x9528,	// (0x00056744) main_fps_pane_g1_ParamLimits

0x9528,	// (0x00056744) main_fps_pane_g1

0x9542,	// (0x0005675e) wait_bar_pane_cp010_ParamLimits

0x9542,	// (0x0005675e) wait_bar_pane_cp010

0x9553,	// (0x0005676f) fps_text_pane_t1_ParamLimits

0x9553,	// (0x0005676f) fps_text_pane_t1

0xdd1a,	// (0x0005af36) cam4_image_uncrop_pane_g1

0xdd23,	// (0x0005af3f) cam4_image_uncrop_pane_g2

0x66bf,	// (0x000538db) cam4_image_uncrop_pane_g3

0x66c8,	// (0x000538e4) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0005cb1d) cam4_image_uncrop_pane_g

0x931b,	// (0x00056537) dia3_listrow_pane_ParamLimits

0x9769,	// (0x00056985) main_phob2_pane

0x882b,	// (0x00055a47) cell_tport_appsw_pane_cp02_ParamLimits

0x882b,	// (0x00055a47) cell_tport_appsw_pane_cp02

0x883f,	// (0x00055a5b) cell_tport_appsw_pane_cp03_ParamLimits

0x883f,	// (0x00055a5b) cell_tport_appsw_pane_cp03

0x9769,	// (0x00056985) phob2_contact_card_pane

0x9769,	// (0x00056985) phob2_listscroll_pane

0xefad,	// (0x0005c1c9) phob2_list_pane

0xefb5,	// (0x0005c1d1) scroll_pane_cp034

0x956b,	// (0x00056787) phob2_cc_data_pane_ParamLimits

0x956b,	// (0x00056787) phob2_cc_data_pane

0x958a,	// (0x000567a6) phob2_cc_listscroll_pane_ParamLimits

0x958a,	// (0x000567a6) phob2_cc_listscroll_pane

0x913f,	// (0x0005635b) list_double_large_graphic_phob2_pane_ParamLimits

0x913f,	// (0x0005635b) list_double_large_graphic_phob2_pane

0x95a8,	// (0x000567c4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95a8,	// (0x000567c4) list_double_large_graphic_phob2_pane_g1

0x0ed8,	// (0x0004e0f4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0ed8,	// (0x0004e0f4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefc,	// (0x0005d118) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefc,	// (0x0005d118) list_double_large_graphic_phob2_pane_g

0x0ee4,	// (0x0004e100) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0ee4,	// (0x0004e100) list_double_large_graphic_phob2_pane_t1

0x0efa,	// (0x0004e116) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0efa,	// (0x0004e116) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff01,	// (0x0005d11d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff01,	// (0x0005d11d) list_double_large_graphic_phob2_pane_t

0x9769,	// (0x00056985) list_highlight_pane_cp024

0x95be,	// (0x000567da) phob2_cc_button_pane

0x95c6,	// (0x000567e2) phob2_cc_data_pane_g1_ParamLimits

0x95c6,	// (0x000567e2) phob2_cc_data_pane_g1

0x95db,	// (0x000567f7) phob2_cc_data_pane_g2_ParamLimits

0x95db,	// (0x000567f7) phob2_cc_data_pane_g2

0x0001,

0xff06,	// (0x0005d122) phob2_cc_data_pane_g_ParamLimits

0xff06,	// (0x0005d122) phob2_cc_data_pane_g

0x95eb,	// (0x00056807) phob2_cc_data_pane_t1_ParamLimits

0x95eb,	// (0x00056807) phob2_cc_data_pane_t1

0x9603,	// (0x0005681f) phob2_cc_data_pane_t2_ParamLimits

0x9603,	// (0x0005681f) phob2_cc_data_pane_t2

0x961b,	// (0x00056837) phob2_cc_data_pane_t3_ParamLimits

0x961b,	// (0x00056837) phob2_cc_data_pane_t3

0x0002,

0xff0b,	// (0x0005d127) phob2_cc_data_pane_t_ParamLimits

0xff0b,	// (0x0005d127) phob2_cc_data_pane_t

0xefbd,	// (0x0005c1d9) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0005c1d9) phob2_cc_list_pane

0xd9a3,	// (0x0005abbf) scroll_pane_cp035_ParamLimits

0xd9a3,	// (0x0005abbf) scroll_pane_cp035

0xa55f,	// (0x0005777b) bg_button_pane_cp033

0xefc9,	// (0x0005c1e5) phob2_cc_button_pane_g1

0xefd5,	// (0x0005c1f1) phob2_cc_button_pane_t1

0xefea,	// (0x0005c206) phob2_cc_button_pane_t2

0x0001,

0x00c3,	// (0x0004d2df) phob2_cc_button_pane_t

0x9633,	// (0x0005684f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9633,	// (0x0005684f) list_double_large_graphic_phob2_cc_pane

0x9646,	// (0x00056862) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9646,	// (0x00056862) list_double_large_graphic_phob2_cc_pane_g1

0x0f0f,	// (0x0004e12b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0f0f,	// (0x0004e12b) list_double_large_graphic_phob2_cc_pane_g2

0x0f1b,	// (0x0004e137) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0f1b,	// (0x0004e137) list_double_large_graphic_phob2_cc_pane_g3

0x0f27,	// (0x0004e143) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0f27,	// (0x0004e143) list_double_large_graphic_phob2_cc_pane_g4

0x0f33,	// (0x0004e14f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0f33,	// (0x0004e14f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff12,	// (0x0005d12e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff12,	// (0x0005d12e) list_double_large_graphic_phob2_cc_pane_g

0x0f3f,	// (0x0004e15b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0f3f,	// (0x0004e15b) list_double_large_graphic_phob2_cc_pane_t1

0x0f68,	// (0x0004e184) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0f68,	// (0x0004e184) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff1d,	// (0x0005d139) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff1d,	// (0x0005d139) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0005c218) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0005c218) list_highlight_pane_cp025

0xa55f,	// (0x0005777b) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0005c1e5) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0005c1f1) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0005c206) phob2_cc_button_pane_t2_ParamLimits

0x00c3,	// (0x0004d2df) phob2_cc_button_pane_t_ParamLimits

0x11da,	// (0x0004e3f6) popup_wgtman_window

0xd7c7,	// (0x0005a9e3) scroll_pane_cp038

0x90b8,	// (0x000562d4) wgtman_btn_pane_cp_01_ParamLimits

0x90b8,	// (0x000562d4) wgtman_btn_pane_cp_01

0xf00a,	// (0x0005c226) wgtman_content_pane

0xf013,	// (0x0005c22f) wgtman_heading_pane

0x9769,	// (0x00056985) bg_heading_pane_cp02

0xf01c,	// (0x0005c238) wgtman_heading_pane_g1

0xf024,	// (0x0005c240) wgtman_heading_pane_t1

0xf032,	// (0x0005c24e) scroll_pane_cp036

0xf03a,	// (0x0005c256) wgtman_list_pane

0xe632,	// (0x0005b84e) wgtman_list_pane_t1_ParamLimits

0xe632,	// (0x0005b84e) wgtman_list_pane_t1

0xa207,	// (0x00057423) cam4_grid_pane

0x0502,	// (0x0004d71e) bg_button_pane_cp015_ParamLimits

0x72e6,	// (0x00054502) bg_button_pane_cp016_ParamLimits

0x72f9,	// (0x00054515) bg_button_pane_cp017_ParamLimits

0x054a,	// (0x0004d766) popup_vitu2_query_window_g3_ParamLimits

0x054a,	// (0x0004d766) popup_vitu2_query_window_g3

0x05c5,	// (0x0004d7e1) popup_vitu2_query_window_t6_ParamLimits

0x05c5,	// (0x0004d7e1) popup_vitu2_query_window_t6

0x05f0,	// (0x0004d80c) popup_vitu2_query_window_t7_ParamLimits

0x05f0,	// (0x0004d80c) popup_vitu2_query_window_t7

0xdd1a,	// (0x0005af36) cam4_grid_pane_g1

0xdd23,	// (0x0005af3f) cam4_grid_pane_g2

0xf042,	// (0x0005c25e) cam4_grid_pane_g3

0xf04b,	// (0x0005c267) cam4_grid_pane_g4

0x0003,

0xff22,	// (0x0005d13e) cam4_grid_pane_g

0x20c8,	// (0x0004f2e4) aid_placing_vt_slider_lsc_ParamLimits

0x23c5,	// (0x0004f5e1) vidtel_button_pane_ParamLimits

0x23c5,	// (0x0004f5e1) vidtel_button_pane

0x9769,	// (0x00056985) bg_button_pane_cp034

0x9652,	// (0x0005686e) vidtel_button_pane_g1

0xf056,	// (0x0005c272) vidtel_button_pane_t1

0xd8ea,	// (0x0005ab06) aid_size_vtel_slider_touch

0xd9a3,	// (0x0005abbf) scroll_pane_cp039

0xe1ec,	// (0x0005b408) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x0005b427) ncimui_query_pane_g1_ParamLimits

0xa55f,	// (0x0005777b) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x0005b44c) ncim_query_entry_pane_t1_ParamLimits

0xd9a3,	// (0x0005abbf) scroll_pane_cp039_ParamLimits

0xb288,	// (0x000584a4) navi_pane_bcale_mc_g1

0xb290,	// (0x000584ac) navi_pane_bcale_mc_t1

0xe7b7,	// (0x0005b9d3) main_sp_fs_email_pane_g1

0xe7c3,	// (0x0005b9df) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0005cf14) main_sp_fs_email_pane_g

0xea19,	// (0x0005bc35) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x0005bc35) list_single_cale_mrui_row_pane_g3

0x0e4b,	// (0x0004e067) list_single_recal_day_pane_g5_event_pane

0xa4f5,	// (0x00057711) list_single_recal_day_pane_g7

0xf06c,	// (0x0005c288) list_recal_day_event_pane_cp01

0xf075,	// (0x0005c291) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005c299) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005c2a1) list_recal_vselct_pane_cp01

0xd8fa,	// (0x0005ab16) list_recal_day_event_pane_cp01_g1

0xa551,	// (0x0005776d) list_recal_day_event_pane_cp01_t1

0xa4fd,	// (0x00057719) list_single_recal_day_pane_t1_ParamLimits

0xa50f,	// (0x0005772b) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0005d071) list_single_recal_day_pane_t_ParamLimits

0xa6f0,	// (0x0005790c) bg_notes_pane_ParamLimits

0xa79f,	// (0x000579bb) list_notes_pane_ParamLimits

0x151e,	// (0x0004e73a) scroll_pane_cp06_ParamLimits

0xa7c1,	// (0x000579dd) main_notes_pane_ParamLimits

0x9769,	// (0x00056985) main_welc_pane

0x965a,	// (0x00056876) main_welc_body_pane_ParamLimits

0x965a,	// (0x00056876) main_welc_body_pane

0x9677,	// (0x00056893) main_welc_opti_pane_ParamLimits

0x9677,	// (0x00056893) main_welc_opti_pane

0x96bc,	// (0x000568d8) main_welc_pane_t1_ParamLimits

0x96bc,	// (0x000568d8) main_welc_pane_t1

0x96da,	// (0x000568f6) main_welc_body_row_pane_ParamLimits

0x96da,	// (0x000568f6) main_welc_body_row_pane

0xead3,	// (0x0005bcef) main_welc_opti_row_pane_ParamLimits

0xead3,	// (0x0005bcef) main_welc_opti_row_pane

0xf08f,	// (0x0005c2ab) main_welc_opti_row_pane_g1

0x96ef,	// (0x0005690b) main_welc_opti_row_pane_t1

0xf097,	// (0x0005c2b3) main_welc_body_row_pane_t1

0xed99,	// (0x0005bfb5) popup_notif_wgt_heading_pane

0xedb3,	// (0x0005bfcf) aid_size_list_notif_wgt_del_ParamLimits

0xedc0,	// (0x0005bfdc) list_notif_wgt_row_pane_g1_ParamLimits

0xedcc,	// (0x0005bfe8) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0005bffc) list_notif_wgt_row_pane_g3_ParamLimits

0x002d,	// (0x0004d249) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0005c009) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0005c01f) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0005c031) list_notif_wgt_row_pane_t3_ParamLimits

0x0034,	// (0x0004d250) list_notif_wgt_row_pane_t_ParamLimits

0x9151,	// (0x0005636d) listrow_wgtman_pane_g1_ParamLimits

0x915e,	// (0x0005637a) listrow_wgtman_pane_g2_ParamLimits

0xfeba,	// (0x0005d0d6) listrow_wgtman_pane_g_ParamLimits

0x0e88,	// (0x0004e0a4) listrow_wgtman_pane_t1_ParamLimits

0x0ea0,	// (0x0004e0bc) listrow_wgtman_pane_t2_ParamLimits

0xfebf,	// (0x0005d0db) listrow_wgtman_pane_t_ParamLimits

0x0ec6,	// (0x0004e0e2) wait_bar_pane_cp09_ParamLimits

0x9769,	// (0x00056985) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005c2c2) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005c2ca) popup_notif_wgt_heading_pane_t1

0x9769,	// (0x00056985) main_vids_pane

0x9769,	// (0x00056985) vids_listscroll_pane

0x96fe,	// (0x0005691a) scroll_pane_cp040

0x9769,	// (0x00056985) vids_list_pane

0x9709,	// (0x00056925) vids_list_double_pane_ParamLimits

0x9709,	// (0x00056925) vids_list_double_pane

0x971a,	// (0x00056936) vids_list_double_pane_g1

0x9723,	// (0x0005693f) vids_list_double_pane_t1

0x9733,	// (0x0005694f) vids_list_double_pane_t2

0x0001,

0xff30,	// (0x0005d14c) vids_list_double_pane_t

0xa55f,	// (0x0005777b) main_ncimui_pane_ParamLimits

0x7e62,	// (0x0005507e) main_ncimui_pane_g1_ParamLimits

0x7e6e,	// (0x0005508a) main_ncimui_pane_g2_ParamLimits

0x7e6e,	// (0x0005508a) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0005ce19) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0005ce19) main_ncimui_pane_g

0x9692,	// (0x000568ae) main_welc_pane_g1_ParamLimits

0x9692,	// (0x000568ae) main_welc_pane_g1

0x96a7,	// (0x000568c3) main_welc_pane_g2_ParamLimits

0x96a7,	// (0x000568c3) main_welc_pane_g2

0x0001,

0xff2b,	// (0x0005d147) main_welc_pane_g_ParamLimits

0xff2b,	// (0x0005d147) main_welc_pane_g

0xa6f0,	// (0x0005790c) listscroll_mce_pane_ParamLimits

0xb3f7,	// (0x00058613) wait_bar_pane_cp10

0xc844,	// (0x00059a60) main_cale_day_pane_ParamLimits

0xc844,	// (0x00059a60) main_cale_week_pane_ParamLimits

0xa6f0,	// (0x0005790c) main_messa_pane_ParamLimits

0x59e8,	// (0x00052c04) main_clock2_btn_pane_ParamLimits

0x59e8,	// (0x00052c04) main_clock2_btn_pane

0xd03a,	// (0x0005a256) main_clock2_btn_pane_cp01_ParamLimits

0xd03a,	// (0x0005a256) main_clock2_btn_pane_cp01

0xe9ea,	// (0x0005bc06) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0005c067) main_cf0_pane_g2

0x0001,

0x003b,	// (0x0004d257) main_cf0_pane_g

0x933d,	// (0x00056559) area_left_week_number_pane_ParamLimits

0x9349,	// (0x00056565) area_top_day_name_pane_ParamLimits

0x935c,	// (0x00056578) frame_month_view_pane_ParamLimits

0xef72,	// (0x0005c18e) grid_month_view_pane_ParamLimits

0xef80,	// (0x0005c19c) frm_month_g1_ParamLimits

0x93dd,	// (0x000565f9) frm_month_g2_ParamLimits

0x93f0,	// (0x0005660c) frm_month_g3_ParamLimits

0x9403,	// (0x0005661f) frm_month_g4_ParamLimits

0x9416,	// (0x00056632) frm_month_g5_ParamLimits

0x9429,	// (0x00056645) frm_month_g6_ParamLimits

0x943c,	// (0x00056658) frm_month_g7_ParamLimits

0xef8d,	// (0x0005c1a9) frm_month_g8_ParamLimits

0x944f,	// (0x0005666b) frm_month_g9_ParamLimits

0x945f,	// (0x0005667b) frm_month_g10_ParamLimits

0x946f,	// (0x0005668b) frm_month_g11_ParamLimits

0x947f,	// (0x0005669b) frm_month_g12_ParamLimits

0x9491,	// (0x000566ad) frm_month_g13_ParamLimits

0x94a3,	// (0x000566bf) frm_month_g14_ParamLimits

0x94b7,	// (0x000566d3) frm_month_g15_ParamLimits

0x94cb,	// (0x000566e7) frm_month_g16_ParamLimits

0xfedb,	// (0x0005d0f7) frm_month_g_ParamLimits

0xef9a,	// (0x0005c1b6) cell_top_day_name_pane_t1_ParamLimits

0x94df,	// (0x000566fb) cell_area_left_week_number_pane_g1_ParamLimits

0x94eb,	// (0x00056707) cell_area_left_week_number_pane_t1_ParamLimits

0xcea6,	// (0x0005a0c2) cell_month_view_pane_g1_ParamLimits

0x94fe,	// (0x0005671a) cell_month_view_pane_t1_ParamLimits

0xa6e8,	// (0x00057904) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005c2d8) main_clock2_btn_pane_t1

0xa55f,	// (0x0005777b) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x0005b9d3) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x0005b9df) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0005cf14) main_sp_fs_email_pane_g_ParamLimits

0xeb06,	// (0x0005bd22) list_recal_day_pane_ParamLimits

0xeb17,	// (0x0005bd33) mian_recal_day_pane_t1

0x0a61,	// (0x0004dc7d) list_single_dyc_row_text_pane_t4_ParamLimits

0x0a61,	// (0x0004dc7d) list_single_dyc_row_text_pane_t4

0x0aaa,	// (0x0004dcc6) list_single_dyc_row_text_pane_t5_ParamLimits

0x0aaa,	// (0x0004dcc6) list_single_dyc_row_text_pane_t5

0x8716,	// (0x00055932) list_single_dyc_row_text_pane_t6_ParamLimits

0x8716,	// (0x00055932) list_single_dyc_row_text_pane_t6

0x3087,	// (0x000502a3) aid_mgn_list_cale_time_pane

0xa55f,	// (0x0005777b) main_gallery2_pane_ParamLimits

0xd050,	// (0x0005a26c) main_clock2_pane_cp01_t1

0xd05e,	// (0x0005a27a) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0005c9f3) main_clock2_pane_cp01_t

0x1897,	// (0x0004eab3) cale_week_scroll_pane_g16_ParamLimits

0x1897,	// (0x0004eab3) cale_week_scroll_pane_g16

0xa9b6,	// (0x00057bd2) vorec_slider_pane

0xf056,	// (0x0005c272) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
