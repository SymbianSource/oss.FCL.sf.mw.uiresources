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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00062e20 };

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
0x75ba,	// (0x0006a3da) Screen

0x75c6,	// (0x0006a3e6) application_window

0x7624,	// (0x0006a444) area_bottom_pane_ParamLimits

0x7624,	// (0x0006a444) area_bottom_pane

0x767e,	// (0x0006a49e) area_top_pane_ParamLimits

0x767e,	// (0x0006a49e) area_top_pane

0x76e2,	// (0x0006a502) call_video_uplink_pane_ParamLimits

0x76e2,	// (0x0006a502) call_video_uplink_pane

0x7720,	// (0x0006a540) main_pane_ParamLimits

0x7720,	// (0x0006a540) main_pane

0x4e56,	// (0x00067c76) context_pane

0xa6b1,	// (0x0006d4d1) navi_pane

0xa6d5,	// (0x0006d4f5) popup_cale_events_window_ParamLimits

0xa6d5,	// (0x0006d4f5) popup_cale_events_window

0x4e69,	// (0x00067c89) popup_mup_playback_window

0xa6ed,	// (0x0006d50d) signal_pane

0x077e,	// (0x0006359e) main_browser_pane

0x1355,	// (0x00064175) main_burst_pane

0xa563,	// (0x0006d383) main_calc_pane

0x1355,	// (0x00064175) main_cale_day_pane

0x077e,	// (0x0006359e) main_cale_month_pane

0x1355,	// (0x00064175) main_cale_week_pane

0x1355,	// (0x00064175) main_call_pane

0x042c,	// (0x0006324c) main_call_poc_pane

0x1355,	// (0x00064175) main_camera_pane

0x1355,	// (0x00064175) main_chi_dic_pane

0x11f7,	// (0x00064017) main_clock_pane

0x042c,	// (0x0006324c) main_fmradio_pane

0x1355,	// (0x00064175) main_graph_messa_pane

0x042c,	// (0x0006324c) main_help_pane

0x077e,	// (0x0006359e) main_im_pane

0x0687,	// (0x000634a7) main_image_pane_ParamLimits

0x0687,	// (0x000634a7) main_image_pane

0x042c,	// (0x0006324c) main_location2_pane

0x1355,	// (0x00064175) main_location_pane

0x042c,	// (0x0006324c) main_messa_pane

0x042c,	// (0x0006324c) main_mp2_pane

0x1355,	// (0x00064175) main_mp_pane

0x042c,	// (0x0006324c) main_msg_pane

0x042c,	// (0x0006324c) main_mup_eq_pane

0x042c,	// (0x0006324c) main_mup_pane

0x1355,	// (0x00064175) main_notes_pane

0x042c,	// (0x0006324c) main_pec_pane

0x042c,	// (0x0006324c) main_phob_pane

0x042c,	// (0x0006324c) main_pinb_pane

0x042c,	// (0x0006324c) main_postcard_pane

0x042c,	// (0x0006324c) main_qdial_pane

0x1355,	// (0x00064175) main_skin_pane

0x042c,	// (0x0006324c) main_smil2_pane

0x1355,	// (0x00064175) main_smil_pane

0x1355,	// (0x00064175) main_video_pane

0x1355,	// (0x00064175) main_video_tele_pane

0x0687,	// (0x000634a7) main_viewer_pane_ParamLimits

0x0687,	// (0x000634a7) main_viewer_pane

0x1355,	// (0x00064175) main_vorec_pane

0xa59b,	// (0x0006d3bb) popup_blid_sat_info_window_ParamLimits

0xa59b,	// (0x0006d3bb) popup_blid_sat_info_window

0xa5b5,	// (0x0006d3d5) popup_dyc_status_message_window_ParamLimits

0xa5b5,	// (0x0006d3d5) popup_dyc_status_message_window

0xa5c5,	// (0x0006d3e5) popup_grid_large_graphic_window_ParamLimits

0xa5c5,	// (0x0006d3e5) popup_grid_large_graphic_window

0xa63d,	// (0x0006d45d) popup_loc_request_window_ParamLimits

0xa63d,	// (0x0006d45d) popup_loc_request_window

0xa685,	// (0x0006d4a5) popup_wml_address_window_ParamLimits

0xa685,	// (0x0006d4a5) popup_wml_address_window

0xa43b,	// (0x0006d25b) call_muted_g1

0xa0f7,	// (0x0006cf17) popup_call_audio_conf_window_ParamLimits

0xa0f7,	// (0x0006cf17) popup_call_audio_conf_window

0xa44b,	// (0x0006d26b) popup_call_audio_first_window_ParamLimits

0xa44b,	// (0x0006d26b) popup_call_audio_first_window

0xa48b,	// (0x0006d2ab) popup_call_audio_in_window_ParamLimits

0xa48b,	// (0x0006d2ab) popup_call_audio_in_window

0xa4af,	// (0x0006d2cf) popup_call_audio_out_window_ParamLimits

0xa4af,	// (0x0006d2cf) popup_call_audio_out_window

0xa4d1,	// (0x0006d2f1) popup_call_audio_second_window_ParamLimits

0xa4d1,	// (0x0006d2f1) popup_call_audio_second_window

0xa501,	// (0x0006d321) popup_call_audio_wait_window_ParamLimits

0xa501,	// (0x0006d321) popup_call_audio_wait_window

0xa522,	// (0x0006d342) popup_number_entry_window_ParamLimits

0xa522,	// (0x0006d342) popup_number_entry_window

0x0019,	// (0x00062e39) bg_popup_call_pane_cp05_ParamLimits

0x0019,	// (0x00062e39) bg_popup_call_pane_cp05

0x0039,	// (0x00062e59) popup_number_entry_window_t1

0x004c,	// (0x00062e6c) popup_number_entry_window_t2

0x005e,	// (0x00062e7e) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00071f1b) popup_number_entry_window_t

0x0070,	// (0x00062e90) text_title_cp2

0x0083,	// (0x00062ea3) bg_popup_call_pane_cp_ParamLimits

0x0083,	// (0x00062ea3) bg_popup_call_pane_cp

0x0091,	// (0x00062eb1) call_thumbnail_pane

0x0099,	// (0x00062eb9) popup_call_audio_in_window_g1_ParamLimits

0x0099,	// (0x00062eb9) popup_call_audio_in_window_g1

0x00a5,	// (0x00062ec5) popup_call_audio_in_window_g2_ParamLimits

0x00a5,	// (0x00062ec5) popup_call_audio_in_window_g2

0x00b1,	// (0x00062ed1) popup_call_audio_in_window_g3_ParamLimits

0x00b1,	// (0x00062ed1) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00071f24) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00071f24) popup_call_audio_in_window_g

0x00bd,	// (0x00062edd) popup_call_audio_in_window_t1_ParamLimits

0x00bd,	// (0x00062edd) popup_call_audio_in_window_t1

0x00d9,	// (0x00062ef9) popup_call_audio_in_window_t2_ParamLimits

0x00d9,	// (0x00062ef9) popup_call_audio_in_window_t2

0x00f5,	// (0x00062f15) popup_call_audio_in_window_t3_ParamLimits

0x00f5,	// (0x00062f15) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00071f2b) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00071f2b) popup_call_audio_in_window_t

0x0083,	// (0x00062ea3) bg_popup_call_pane_cp01_ParamLimits

0x0083,	// (0x00062ea3) bg_popup_call_pane_cp01

0x0091,	// (0x00062eb1) call_thumbnail_pane_cp02

0x0108,	// (0x00062f28) call_type_pane_cp022

0x0110,	// (0x00062f30) popup_call_audio_out_window_g1_ParamLimits

0x0110,	// (0x00062f30) popup_call_audio_out_window_g1

0x0122,	// (0x00062f42) popup_call_audio_out_window_g2_ParamLimits

0x0122,	// (0x00062f42) popup_call_audio_out_window_g2

0x012e,	// (0x00062f4e) popup_call_audio_out_window_g3_ParamLimits

0x012e,	// (0x00062f4e) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00071f32) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00071f32) popup_call_audio_out_window_g

0x0140,	// (0x00062f60) popup_call_audio_out_window_t1_ParamLimits

0x0140,	// (0x00062f60) popup_call_audio_out_window_t1

0x0158,	// (0x00062f78) popup_call_audio_out_window_t2_ParamLimits

0x0158,	// (0x00062f78) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00071f39) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00071f39) popup_call_audio_out_window_t

0x016d,	// (0x00062f8d) bg_popup_call_pane_ParamLimits

0x016d,	// (0x00062f8d) bg_popup_call_pane

0x7922,	// (0x0006a742) call_thumbnail_pane_cp_ParamLimits

0x7922,	// (0x0006a742) call_thumbnail_pane_cp

0x01f1,	// (0x00063011) call_type_pane_cp01_ParamLimits

0x01f1,	// (0x00063011) call_type_pane_cp01

0x0235,	// (0x00063055) popup_call_audio_first_window_g1_ParamLimits

0x0235,	// (0x00063055) popup_call_audio_first_window_g1

0x0281,	// (0x000630a1) popup_call_audio_first_window_g2_ParamLimits

0x0281,	// (0x000630a1) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00071f3e) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00071f3e) popup_call_audio_first_window_g

0x02c5,	// (0x000630e5) popup_call_audio_first_window_t1_ParamLimits

0x02c5,	// (0x000630e5) popup_call_audio_first_window_t1

0x0371,	// (0x00063191) popup_call_audio_first_window_t4_ParamLimits

0x0371,	// (0x00063191) popup_call_audio_first_window_t4

0x03fd,	// (0x0006321d) popup_call_audio_first_window_t5_ParamLimits

0x03fd,	// (0x0006321d) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00071f43) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00071f43) popup_call_audio_first_window_t

0x042c,	// (0x0006324c) bg_popup_call_pane_cp02

0x0436,	// (0x00063256) call_type_pane_cp023

0x043e,	// (0x0006325e) popup_call_audio_wait_window_g1

0x0446,	// (0x00063266) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00071f4a) popup_call_audio_wait_window_g

0x044e,	// (0x0006326e) popup_call_audio_wait_window_t3

0x045c,	// (0x0006327c) bg_popup_call_pane_cp03_ParamLimits

0x045c,	// (0x0006327c) bg_popup_call_pane_cp03

0x04bc,	// (0x000632dc) call_thumbnail_pane_cp011_ParamLimits

0x04bc,	// (0x000632dc) call_thumbnail_pane_cp011

0x04c8,	// (0x000632e8) call_type_pane_cp034_ParamLimits

0x04c8,	// (0x000632e8) call_type_pane_cp034

0x0504,	// (0x00063324) popup_call_audio_second_window_g1_ParamLimits

0x0504,	// (0x00063324) popup_call_audio_second_window_g1

0x0540,	// (0x00063360) popup_call_audio_second_window_g2_ParamLimits

0x0540,	// (0x00063360) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00071f4f) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00071f4f) popup_call_audio_second_window_g

0x057c,	// (0x0006339c) popup_call_audio_second_window_t1_ParamLimits

0x057c,	// (0x0006339c) popup_call_audio_second_window_t1

0x05fd,	// (0x0006341d) popup_call_audio_second_window_t2_ParamLimits

0x05fd,	// (0x0006341d) popup_call_audio_second_window_t2

0x0633,	// (0x00063453) popup_call_audio_second_window_t3_ParamLimits

0x0633,	// (0x00063453) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00071f54) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00071f54) popup_call_audio_second_window_t

0x042c,	// (0x0006324c) bg_popup_call_pane_cp04

0x0669,	// (0x00063489) list_conf_pane

0x0671,	// (0x00063491) popup_call_audio_conf_window_t1

0x067f,	// (0x0006349f) call_thumbnail_pane_g1

0x0687,	// (0x000634a7) bg_pinb_pane_ParamLimits

0x0687,	// (0x000634a7) bg_pinb_pane

0x0695,	// (0x000634b5) find_pinb_pane

0x069e,	// (0x000634be) listscroll_pinb_pane_ParamLimits

0x069e,	// (0x000634be) listscroll_pinb_pane

0x06ad,	// (0x000634cd) pinb_bg_pane_g1

0x7946,	// (0x0006a766) pinb_bg_pane_g2

0x7952,	// (0x0006a772) pinb_bg_pane_g3

0x795e,	// (0x0006a77e) pinb_bg_pane_g4

0x796a,	// (0x0006a78a) pinb_bg_pane_g5

0x7976,	// (0x0006a796) pinb_bg_pane_g6

0x7981,	// (0x0006a7a1) pinb_bg_pane_g7

0x798c,	// (0x0006a7ac) pinb_bg_pane_g8

0x7997,	// (0x0006a7b7) pinb_bg_pane_g9

0x79a1,	// (0x0006a7c1) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00071f5b) pinb_bg_pane_g

0x79be,	// (0x0006a7de) grid_pinb_pane

0x79c9,	// (0x0006a7e9) list_pinb_pane

0x79d4,	// (0x0006a7f4) scroll_pane_cp01_ParamLimits

0x79d4,	// (0x0006a7f4) scroll_pane_cp01

0x06b7,	// (0x000634d7) find_pinb_pane_g1_ParamLimits

0x06b7,	// (0x000634d7) find_pinb_pane_g1

0x06cf,	// (0x000634ef) find_pinb_pane_t1

0x06e1,	// (0x00063501) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00071f75) find_pinb_pane_t

0x06f6,	// (0x00063516) input_focus_pane_cp01_ParamLimits

0x06f6,	// (0x00063516) input_focus_pane_cp01

0x79e6,	// (0x0006a806) cell_pinb_pane_ParamLimits

0x79e6,	// (0x0006a806) cell_pinb_pane

0x7a06,	// (0x0006a826) cell_pinb_pane_g1_ParamLimits

0x7a06,	// (0x0006a826) cell_pinb_pane_g1

0x7a1b,	// (0x0006a83b) cell_pinb_pane_g2_ParamLimits

0x7a1b,	// (0x0006a83b) cell_pinb_pane_g2

0x0702,	// (0x00063522) cell_pinb_pane_g3_ParamLimits

0x0702,	// (0x00063522) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00071f7a) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00071f7a) cell_pinb_pane_g

0x042c,	// (0x0006324c) grid_highlight_pane_cp01

0x7a27,	// (0x0006a847) list_pinb_item_pane_ParamLimits

0x7a27,	// (0x0006a847) list_pinb_item_pane

0x042c,	// (0x0006324c) list_highlight_pane_cp02

0x7a42,	// (0x0006a862) list_pinb_item_pane_g1_ParamLimits

0x7a42,	// (0x0006a862) list_pinb_item_pane_g1

0x7a4f,	// (0x0006a86f) list_pinb_item_pane_g2_ParamLimits

0x7a4f,	// (0x0006a86f) list_pinb_item_pane_g2

0x7a5b,	// (0x0006a87b) list_pinb_item_pane_g3_ParamLimits

0x7a5b,	// (0x0006a87b) list_pinb_item_pane_g3

0x7a6c,	// (0x0006a88c) list_pinb_item_pane_g4_ParamLimits

0x7a6c,	// (0x0006a88c) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00071f81) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00071f81) list_pinb_item_pane_g

0x7a78,	// (0x0006a898) list_pinb_item_pane_t1_ParamLimits

0x7a78,	// (0x0006a898) list_pinb_item_pane_t1

0x7aa9,	// (0x0006a8c9) calc_display_pane

0x7ac7,	// (0x0006a8e7) calc_paper_pane

0x7ae3,	// (0x0006a903) grid_calc_pane

0x042c,	// (0x0006324c) bg_list_pane_cp01

0x7b0f,	// (0x0006a92f) clock_g1

0x7b17,	// (0x0006a937) clock_g2

0x0001,

0xf16a,	// (0x00071f8a) clock_g

0x7b21,	// (0x0006a941) clock_t1_ParamLimits

0x7b21,	// (0x0006a941) clock_t1

0x7b36,	// (0x0006a956) clock_t2_ParamLimits

0x7b36,	// (0x0006a956) clock_t2

0x7b48,	// (0x0006a968) clock_t3_ParamLimits

0x7b48,	// (0x0006a968) clock_t3

0x7b5a,	// (0x0006a97a) clock_t4_ParamLimits

0x7b5a,	// (0x0006a97a) clock_t4

0x7b6c,	// (0x0006a98c) clock_t5_ParamLimits

0x7b6c,	// (0x0006a98c) clock_t5

0x7b81,	// (0x0006a9a1) clock_t6_ParamLimits

0x7b81,	// (0x0006a9a1) clock_t6

0x7b93,	// (0x0006a9b3) clock_t7_ParamLimits

0x7b93,	// (0x0006a9b3) clock_t7

0x7ba5,	// (0x0006a9c5) clock_t8_ParamLimits

0x7ba5,	// (0x0006a9c5) clock_t8

0x7bbb,	// (0x0006a9db) clock_t9_ParamLimits

0x7bbb,	// (0x0006a9db) clock_t9

0x0008,

0xf16f,	// (0x00071f8f) clock_t_ParamLimits

0xf16f,	// (0x00071f8f) clock_t

0x0716,	// (0x00063536) popup_clock_analogue_window_cp02

0x0716,	// (0x00063536) popup_clock_digital_window_cp01

0x071e,	// (0x0006353e) listscroll_help_pane

0x042c,	// (0x0006324c) phob_pre_status_pane

0x0728,	// (0x00063548) grid_qdial_pane

0x042c,	// (0x0006324c) listscroll_mce_pane

0x0732,	// (0x00063552) bg_notes_pane

0x073c,	// (0x0006355c) list_notes_pane

0x7bd1,	// (0x0006a9f1) scroll_pane_cp06

0x0746,	// (0x00063566) bg_calc_paper_pane

0x7bdc,	// (0x0006a9fc) list_calc_pane

0x077e,	// (0x0006359e) bg_calc_display_pane

0x7bf6,	// (0x0006aa16) calc_display_pane_t1

0x7c0b,	// (0x0006aa2b) calc_display_pane_t2

0x7c20,	// (0x0006aa40) calc_display_pane_t3

0x0002,

0xf182,	// (0x00071fa2) calc_display_pane_t

0x7c32,	// (0x0006aa52) cell_calc_pane_ParamLimits

0x7c32,	// (0x0006aa52) cell_calc_pane

0x079c,	// (0x000635bc) bg_calc_paper_pane_g1

0x07b4,	// (0x000635d4) bg_calc_paper_pane_g2

0x07a8,	// (0x000635c8) bg_calc_paper_pane_g3

0x07cc,	// (0x000635ec) bg_calc_paper_pane_g4

0x07c0,	// (0x000635e0) bg_calc_paper_pane_g5

0x7c61,	// (0x0006aa81) bg_calc_paper_pane_g6

0x7c72,	// (0x0006aa92) bg_calc_paper_pane_g7

0x7c83,	// (0x0006aaa3) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00071fa9) bg_calc_paper_pane_g

0x7c94,	// (0x0006aab4) calc_bg_paper_pane_g9

0x7ca5,	// (0x0006aac5) list_calc_item_pane_ParamLimits

0x7ca5,	// (0x0006aac5) list_calc_item_pane

0x07d8,	// (0x000635f8) list_calc_item_pane_g1

0x7cc9,	// (0x0006aae9) list_calc_item_pane_t1_ParamLimits

0x7cc9,	// (0x0006aae9) list_calc_item_pane_t1

0x7cdb,	// (0x0006aafb) list_calc_item_pane_t2_ParamLimits

0x7cdb,	// (0x0006aafb) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00071fba) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00071fba) list_calc_item_pane_t

0x07f7,	// (0x00063617) cell_calc_pane_g1

0x0801,	// (0x00063621) grid_highlight_pane_cp02

0x0836,	// (0x00063656) bg_calc_display_pane_g1

0x7d0b,	// (0x0006ab2b) bg_calc_display_pane_g2

0x0823,	// (0x00063643) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00071fc4) bg_calc_display_pane_g

0x7d15,	// (0x0006ab35) cell_qdial_pane_ParamLimits

0x7d15,	// (0x0006ab35) cell_qdial_pane

0x7d2b,	// (0x0006ab4b) cell_qdial_pane_g1_ParamLimits

0x7d2b,	// (0x0006ab4b) cell_qdial_pane_g1

0x7d38,	// (0x0006ab58) cell_qdial_pane_g2_ParamLimits

0x7d38,	// (0x0006ab58) cell_qdial_pane_g2

0x083f,	// (0x0006365f) cell_qdial_pane_g3_ParamLimits

0x083f,	// (0x0006365f) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00071fcb) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00071fcb) cell_qdial_pane_g

0x7d56,	// (0x0006ab76) cell_qdial_pane_t1_ParamLimits

0x7d56,	// (0x0006ab76) cell_qdial_pane_t1

0x7d6e,	// (0x0006ab8e) cell_qdial_pane_t2_ParamLimits

0x7d6e,	// (0x0006ab8e) cell_qdial_pane_t2

0x7d81,	// (0x0006aba1) cell_qdial_pane_t3_ParamLimits

0x7d81,	// (0x0006aba1) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00071fd4) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00071fd4) cell_qdial_pane_t

0x042c,	// (0x0006324c) grid_highlight_pane_cp04

0x084b,	// (0x0006366b) thumbnail_qdial_pane_ParamLimits

0x084b,	// (0x0006366b) thumbnail_qdial_pane

0x08a7,	// (0x000636c7) list_help_pane

0x08b0,	// (0x000636d0) scroll_pane_cp02

0x7d94,	// (0x0006abb4) help_list_pane_t1_ParamLimits

0x7d94,	// (0x0006abb4) help_list_pane_t1

0x7dbe,	// (0x0006abde) bg_notes_pane_g2

0x7dc6,	// (0x0006abe6) bg_notes_pane_g3

0x7dce,	// (0x0006abee) notes_bg_pane_g1

0x7dd6,	// (0x0006abf6) notes_bg_pane_g4

0x7dde,	// (0x0006abfe) notes_bg_pane_g5

0x7de6,	// (0x0006ac06) notes_bg_pane_g6

0x7dee,	// (0x0006ac0e) notes_bg_pane_g7

0x7df6,	// (0x0006ac16) notes_bg_pane_g8

0x7dfe,	// (0x0006ac1e) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00071ff2) notes_bg_pane_g

0x7e06,	// (0x0006ac26) list_notes_text_pane_ParamLimits

0x7e06,	// (0x0006ac26) list_notes_text_pane

0x0901,	// (0x00063721) list_notes_text_pane_g1

0x6504,	// (0x00069324) list_notes_text_pane_t1

0x077e,	// (0x0006359e) listscroll_cale_week_pane

0x7e40,	// (0x0006ac60) bg_cale_heading_pane

0x091b,	// (0x0006373b) bg_cale_pane_cp01

0x7e54,	// (0x0006ac74) cale_week_corner_pane

0x7e6a,	// (0x0006ac8a) cale_week_day_heading_pane

0x7e7e,	// (0x0006ac9e) cale_week_scroll_pane_g1

0x7e8f,	// (0x0006acaf) cale_week_scroll_pane_g2

0x7ea0,	// (0x0006acc0) cale_week_scroll_pane_g3

0x7eb1,	// (0x0006acd1) cale_week_scroll_pane_g4

0x7ec2,	// (0x0006ace2) cale_week_scroll_pane_g5

0x7ed3,	// (0x0006acf3) cale_week_scroll_pane_g6

0x7ee6,	// (0x0006ad06) cale_week_scroll_pane_g7

0x7ef9,	// (0x0006ad19) cale_week_scroll_pane_g8

0x7f0c,	// (0x0006ad2c) cale_week_scroll_pane_g9

0x7f1d,	// (0x0006ad3d) cale_week_scroll_pane_g10

0x7f2e,	// (0x0006ad4e) cale_week_scroll_pane_g11

0x7f3f,	// (0x0006ad5f) cale_week_scroll_pane_g12

0x7f50,	// (0x0006ad70) cale_week_scroll_pane_g13

0x7f61,	// (0x0006ad81) cale_week_scroll_pane_g14

0x7f72,	// (0x0006ad92) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00072001) cale_week_scroll_pane_g

0x7f83,	// (0x0006ada3) cale_week_time_pane

0x7f96,	// (0x0006adb6) grid_cale_week_pane

0x7fab,	// (0x0006adcb) scroll_pane_cp08

0x7fc5,	// (0x0006ade5) cell_cale_week_pane_ParamLimits

0x7fc5,	// (0x0006ade5) cell_cale_week_pane

0x8003,	// (0x0006ae23) cale_week_day_heading_pane_t1

0x8030,	// (0x0006ae50) cale_week_day_heading_pane_t2

0x805d,	// (0x0006ae7d) cale_week_day_heading_pane_t3

0x808a,	// (0x0006aeaa) cale_week_day_heading_pane_t4

0x80b7,	// (0x0006aed7) cale_week_day_heading_pane_t5

0x80e4,	// (0x0006af04) cale_week_day_heading_pane_t6

0x8111,	// (0x0006af31) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00072020) cale_week_day_heading_pane_t

0x0946,	// (0x00063766) bg_cale_side_pane

0x813e,	// (0x0006af5e) cale_week_time_pane_t1

0x816a,	// (0x0006af8a) cale_week_time_pane_t2

0x8196,	// (0x0006afb6) cale_week_time_pane_t3

0x81c2,	// (0x0006afe2) cale_week_time_pane_t4

0x81ee,	// (0x0006b00e) cale_week_time_pane_t5

0x821a,	// (0x0006b03a) cale_week_time_pane_t6

0x8246,	// (0x0006b066) cale_week_time_pane_t7

0x8272,	// (0x0006b092) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0007202f) cale_week_time_pane_t

0x829e,	// (0x0006b0be) cell_cale_week_pane_g2

0x82b7,	// (0x0006b0d7) cell_cale_week_pane_g3_ParamLimits

0x82b7,	// (0x0006b0d7) cell_cale_week_pane_g3

0x0954,	// (0x00063774) grid_highlight_pane_cp07

0x095c,	// (0x0006377c) listscroll_gms_pane

0x0966,	// (0x00063786) grid_gms_pane

0x096f,	// (0x0006378f) listscroll_gms_pane_g1

0x0977,	// (0x00063797) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00072040) listscroll_gms_pane_g

0x82cf,	// (0x0006b0ef) scroll_pane_cp010

0x82da,	// (0x0006b0fa) cell_gms_pane_ParamLimits

0x82da,	// (0x0006b0fa) cell_gms_pane

0x82ed,	// (0x0006b10d) cell_gms_pane_g1

0x097f,	// (0x0006379f) cell_gms_pane_g2

0x0987,	// (0x000637a7) cell_gms_pane_g3

0x0990,	// (0x000637b0) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00072045) cell_gms_pane_g

0x0999,	// (0x000637b9) grid_highlight_pane_cp09

0xa3e3,	// (0x0006d203) phob_pre_status_pane_g1

0xa3eb,	// (0x0006d20b) phob_pre_status_pane_g2

0xa3f3,	// (0x0006d213) phob_pre_status_pane_g3

0xa3fb,	// (0x0006d21b) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00072434) phob_pre_status_pane_g

0xa40b,	// (0x0006d22b) phob_pre_status_pane_t1

0xa41b,	// (0x0006d23b) phob_pre_status_pane_t2

0xa42b,	// (0x0006d24b) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0007243f) phob_pre_status_pane_t

0x042c,	// (0x0006324c) bg_list_pane_cp05

0x82fd,	// (0x0006b11d) grid_vorec_pane

0x8307,	// (0x0006b127) vorec_t1

0x8315,	// (0x0006b135) vorec_t2

0x8323,	// (0x0006b143) vorec_t3

0x8331,	// (0x0006b151) vorec_t4

0x833f,	// (0x0006b15f) vorec_t5

0x834d,	// (0x0006b16d) vorec_t6

0x0006,

0xf22e,	// (0x0007204e) vorec_t

0x8369,	// (0x0006b189) wait_bar_pane_cp01

0x8371,	// (0x0006b191) cell_vorec_pane_ParamLimits

0x8371,	// (0x0006b191) cell_vorec_pane

0x0a0b,	// (0x0006382b) cell_vorec_pane_g1

0x042c,	// (0x0006324c) grid_highlight_pane_cp05

0x8396,	// (0x0006b1b6) cams_zoom_pane

0x83a2,	// (0x0006b1c2) image_vga_pane

0x83b1,	// (0x0006b1d1) main_camera_pane_g1

0x83bf,	// (0x0006b1df) main_camera_pane_g2

0x83cb,	// (0x0006b1eb) main_camera_pane_g3

0x83d9,	// (0x0006b1f9) main_camera_pane_g4

0x83e7,	// (0x0006b207) main_camera_pane_g5

0x83f5,	// (0x0006b215) main_camera_pane_g6

0x8403,	// (0x0006b223) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0007205d) main_camera_pane_g

0x8411,	// (0x0006b231) main_camera_pane_t1

0x8423,	// (0x0006b243) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007206e) main_camera_pane_t

0x8446,	// (0x0006b266) cams_zoom_pane_cp_ParamLimits

0x8446,	// (0x0006b266) cams_zoom_pane_cp

0x846a,	// (0x0006b28a) image_cif_pane_ParamLimits

0x846a,	// (0x0006b28a) image_cif_pane

0x8488,	// (0x0006b2a8) image_subqcif_pane

0x8492,	// (0x0006b2b2) main_video_pane_g1_ParamLimits

0x8492,	// (0x0006b2b2) main_video_pane_g1

0x84b2,	// (0x0006b2d2) main_video_pane_g2_ParamLimits

0x84b2,	// (0x0006b2d2) main_video_pane_g2

0x84e2,	// (0x0006b302) main_video_pane_g3_ParamLimits

0x84e2,	// (0x0006b302) main_video_pane_g3

0x850b,	// (0x0006b32b) main_video_pane_g4_ParamLimits

0x850b,	// (0x0006b32b) main_video_pane_g4

0x8534,	// (0x0006b354) main_video_pane_g5_ParamLimits

0x8534,	// (0x0006b354) main_video_pane_g5

0x0a21,	// (0x00063841) main_video_pane_g6_ParamLimits

0x0a21,	// (0x00063841) main_video_pane_g6

0x0006,

0xf253,	// (0x00072073) main_video_pane_g_ParamLimits

0xf253,	// (0x00072073) main_video_pane_g

0x8556,	// (0x0006b376) main_video_pane_t1_ParamLimits

0x8556,	// (0x0006b376) main_video_pane_t1

0x0a3b,	// (0x0006385b) cams_zoom_pane_g1

0x0a44,	// (0x00063864) cams_zoom_pane_g2

0x0a4d,	// (0x0006386d) cams_zoom_pane_g3

0x0a56,	// (0x00063876) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00072082) cams_zoom_pane_g

0x85a0,	// (0x0006b3c0) grid_cams_pane

0x85ae,	// (0x0006b3ce) linegrid_cams_pane

0x85bc,	// (0x0006b3dc) cell_cams_pane_ParamLimits

0x85bc,	// (0x0006b3dc) cell_cams_pane

0x0a5f,	// (0x0006387f) cams_burst_image_pane

0x0a67,	// (0x00063887) cell_cams_pane_g1

0x042c,	// (0x0006324c) grid_highlight_pane_cp03

0x07f7,	// (0x00063617) mp_bg_pane_g1

0x042c,	// (0x0006324c) bg_list_pane_cp03

0x4d28,	// (0x00067b48) bg_mp_pane

0x4d30,	// (0x00067b50) grid_mp_pane

0x4d38,	// (0x00067b58) media_player_g1

0x4d42,	// (0x00067b62) media_player_t1

0x4d50,	// (0x00067b70) media_player_t2

0x4d5e,	// (0x00067b7e) media_player_t3

0x4d6c,	// (0x00067b8c) media_player_t4

0x4d7a,	// (0x00067b9a) media_player_t5

0x4d88,	// (0x00067ba8) media_player_t6

0x4d96,	// (0x00067bb6) media_player_t7

0x0006,

0xf5fe,	// (0x0007241e) media_player_t

0x4da4,	// (0x00067bc4) wait_bar_pane_cp02

0xf5e3,	// (0x00072403) main_usb_pane_t

0xa3da,	// (0x0006d1fa) cell_mp_pane

0x07f7,	// (0x00063617) cell_mp_pane_g1

0x042c,	// (0x0006324c) grid_highlight_pane_cp06

0x0a6f,	// (0x0006388f) grid_skin_colour_pane

0x0a77,	// (0x00063897) list_highlight_pane_cp03

0x85d1,	// (0x0006b3f1) skin_g1

0x0a7f,	// (0x0006389f) skin_t1

0x0a8e,	// (0x000638ae) skin_t2

0x0001,

0xf297,	// (0x000720b7) skin_t

0x85db,	// (0x0006b3fb) cell_skin_colour_pane_ParamLimits

0x85db,	// (0x0006b3fb) cell_skin_colour_pane

0x0a9c,	// (0x000638bc) cell_skin_colour_pane_g1

0x862a,	// (0x0006b44a) call_video_g1_ParamLimits

0x862a,	// (0x0006b44a) call_video_g1

0x863a,	// (0x0006b45a) call_video_g2_ParamLimits

0x863a,	// (0x0006b45a) call_video_g2

0x0001,

0xf29c,	// (0x000720bc) call_video_g_ParamLimits

0xf29c,	// (0x000720bc) call_video_g

0x8672,	// (0x0006b492) call_video_uplink_pane_cp1_ParamLimits

0x8672,	// (0x0006b492) call_video_uplink_pane_cp1

0x0ab6,	// (0x000638d6) call_video_uplink_pane_cp2

0x8720,	// (0x0006b540) video_down_crop_pane_ParamLimits

0x8720,	// (0x0006b540) video_down_crop_pane

0x87f8,	// (0x0006b618) video_down_pane_ParamLimits

0x87f8,	// (0x0006b618) video_down_pane

0x0abe,	// (0x000638de) video_down_subqcif_pane_ParamLimits

0x0abe,	// (0x000638de) video_down_subqcif_pane

0x0ad8,	// (0x000638f8) video_down_subqcif_pane_cp_ParamLimits

0x0ad8,	// (0x000638f8) video_down_subqcif_pane_cp

0x0afe,	// (0x0006391e) im_reading_pane_ParamLimits

0x0afe,	// (0x0006391e) im_reading_pane

0x88d5,	// (0x0006b6f5) im_writing_pane_ParamLimits

0x88d5,	// (0x0006b6f5) im_writing_pane

0x88f3,	// (0x0006b713) im_reading_pane_t1

0x0b18,	// (0x00063938) list_im_pane

0x0b29,	// (0x00063949) scroll_pane_cp07

0x893b,	// (0x0006b75b) im_writing_pane_t1_ParamLimits

0x893b,	// (0x0006b75b) im_writing_pane_t1

0x0b42,	// (0x00063962) im_writing_pane_t2_ParamLimits

0x0b42,	// (0x00063962) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x000720c6) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x000720c6) im_writing_pane_t

0x042c,	// (0x0006324c) input_focus_pane_cp04

0x042c,	// (0x0006324c) input_focus_pane_cp05

0x894d,	// (0x0006b76d) list_im_single_pane_ParamLimits

0x894d,	// (0x0006b76d) list_im_single_pane

0x8969,	// (0x0006b789) list_single_im_pane_t1

0xa39e,	// (0x0006d1be) blid_accuracy_pane

0xa3a6,	// (0x0006d1c6) blid_compass_pane

0xa3b0,	// (0x0006d1d0) main_location_t1

0xa3be,	// (0x0006d1de) main_location_t2

0xa3cc,	// (0x0006d1ec) main_location_t3

0x0002,

0xf60d,	// (0x0007242d) main_location_t

0x042c,	// (0x0006324c) aid_levels_location

0x07f7,	// (0x00063617) blid_accuracy_pane_g1

0x07f7,	// (0x00063617) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00072128) blid_accuracy_pane_g

0x0b8a,	// (0x000639aa) wml_content_pane

0x0bc8,	// (0x000639e8) wml_button_pane_ParamLimits

0x0bc8,	// (0x000639e8) wml_button_pane

0x8978,	// (0x0006b798) wml_list_single_large_pane_ParamLimits

0x8978,	// (0x0006b798) wml_list_single_large_pane

0x899a,	// (0x0006b7ba) wml_list_single_medium_pane_ParamLimits

0x899a,	// (0x0006b7ba) wml_list_single_medium_pane

0x89c0,	// (0x0006b7e0) wml_list_single_small_pane_ParamLimits

0x89c0,	// (0x0006b7e0) wml_list_single_small_pane

0x0bdc,	// (0x000639fc) wml_selection_box_pane_ParamLimits

0x0bdc,	// (0x000639fc) wml_selection_box_pane

0x0bef,	// (0x00063a0f) wml_list_single_pane_t1

0x0bfe,	// (0x00063a1e) wml_list_single_medium_pane_t1

0x0c0d,	// (0x00063a2d) wml_list_single_large_pane_t1

0x0c1c,	// (0x00063a3c) input_focus_pane_cp02_ParamLimits

0x0c1c,	// (0x00063a3c) input_focus_pane_cp02

0x0c2f,	// (0x00063a4f) wml_selection_box_pane_g1

0x0c38,	// (0x00063a58) wml_selection_box_pane_t1_ParamLimits

0x0c38,	// (0x00063a58) wml_selection_box_pane_t1

0x0687,	// (0x000634a7) bg_wml_button_pane_ParamLimits

0x0687,	// (0x000634a7) bg_wml_button_pane

0x0c50,	// (0x00063a70) wml_button_pane_g1

0x0c58,	// (0x00063a78) wml_button_pane_t1

0x0c50,	// (0x00063a70) wml_button_bg_pane_g1

0x0c68,	// (0x00063a88) wml_button_bg_pane_g2

0x0c70,	// (0x00063a90) wml_button_bg_pane_g3

0x0c78,	// (0x00063a98) wml_button_bg_pane_g4

0x0c80,	// (0x00063aa0) wml_button_bg_pane_g5

0x0c88,	// (0x00063aa8) wml_button_bg_pane_g6

0x0c90,	// (0x00063ab0) wml_button_bg_pane_g7

0x0c98,	// (0x00063ab8) wml_button_bg_pane_g8

0x0ca0,	// (0x00063ac0) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x000720cb) wml_button_bg_pane_g

0x89eb,	// (0x0006b80b) bg_list_pane_cp02

0x0ca8,	// (0x00063ac8) mce_header_pane_ParamLimits

0x0ca8,	// (0x00063ac8) mce_header_pane

0x0cbe,	// (0x00063ade) mce_icon_pane

0x0cbe,	// (0x00063ade) mce_image_pane

0x0cc7,	// (0x00063ae7) mce_text_pane_ParamLimits

0x0cc7,	// (0x00063ae7) mce_text_pane

0x89f5,	// (0x0006b815) scroll_pane_cp03

0x0bc0,	// (0x000639e0) scroll_pane_cp04

0x0cda,	// (0x00063afa) scroll_pane_cp05_ParamLimits

0x0cda,	// (0x00063afa) scroll_pane_cp05

0x89ff,	// (0x0006b81f) mce_header_field_pane_ParamLimits

0x89ff,	// (0x0006b81f) mce_header_field_pane

0x8a21,	// (0x0006b841) mce_header_field_pane_2_ParamLimits

0x8a21,	// (0x0006b841) mce_header_field_pane_2

0x8a37,	// (0x0006b857) mce_header_field_pane_3

0x8a3f,	// (0x0006b85f) list_single_mce_message_pane_ParamLimits

0x8a3f,	// (0x0006b85f) list_single_mce_message_pane

0x8a5e,	// (0x0006b87e) list_single_mce_smart_pane_ParamLimits

0x8a5e,	// (0x0006b87e) list_single_mce_smart_pane

0x0ce6,	// (0x00063b06) input_focus_pane_cp03

0x0cef,	// (0x00063b0f) list_header_data_pane

0x8a88,	// (0x0006b8a8) mce_header_field_pane_t1

0x8a98,	// (0x0006b8b8) list_single_mce_header_pane_ParamLimits

0x8a98,	// (0x0006b8b8) list_single_mce_header_pane

0x0cf7,	// (0x00063b17) list_single_mce_header_pane_t1

0x0d06,	// (0x00063b26) list_single_mce_message_pane_g1

0x0d0e,	// (0x00063b2e) list_single_mce_message_pane_t1

0x8ad4,	// (0x0006b8f4) bg_cale_heading_pane_cp01_ParamLimits

0x8ad4,	// (0x0006b8f4) bg_cale_heading_pane_cp01

0x0d1c,	// (0x00063b3c) bg_cale_pane_cp02_ParamLimits

0x0d1c,	// (0x00063b3c) bg_cale_pane_cp02

0x8af7,	// (0x0006b917) cale_month_corner_pane

0x8b0d,	// (0x0006b92d) cale_month_day_heading_pane_ParamLimits

0x8b0d,	// (0x0006b92d) cale_month_day_heading_pane

0x8b40,	// (0x0006b960) cale_month_pane_g1_ParamLimits

0x8b40,	// (0x0006b960) cale_month_pane_g1

0x8b5c,	// (0x0006b97c) cale_month_pane_g2_ParamLimits

0x8b5c,	// (0x0006b97c) cale_month_pane_g2

0x8b77,	// (0x0006b997) cale_month_pane_g3_ParamLimits

0x8b77,	// (0x0006b997) cale_month_pane_g3

0x8ba3,	// (0x0006b9c3) cale_month_pane_g4_ParamLimits

0x8ba3,	// (0x0006b9c3) cale_month_pane_g4

0x8bcf,	// (0x0006b9ef) cale_month_pane_g5_ParamLimits

0x8bcf,	// (0x0006b9ef) cale_month_pane_g5

0x8bfb,	// (0x0006ba1b) cale_month_pane_g6_ParamLimits

0x8bfb,	// (0x0006ba1b) cale_month_pane_g6

0x8c37,	// (0x0006ba57) cale_month_pane_g7_ParamLimits

0x8c37,	// (0x0006ba57) cale_month_pane_g7

0x8c73,	// (0x0006ba93) cale_month_pane_g8_ParamLimits

0x8c73,	// (0x0006ba93) cale_month_pane_g8

0x8caf,	// (0x0006bacf) cale_month_pane_g9_ParamLimits

0x8caf,	// (0x0006bacf) cale_month_pane_g9

0x8ce9,	// (0x0006bb09) cale_month_pane_g10_ParamLimits

0x8ce9,	// (0x0006bb09) cale_month_pane_g10

0x8d23,	// (0x0006bb43) cale_month_pane_g11_ParamLimits

0x8d23,	// (0x0006bb43) cale_month_pane_g11

0x8d5d,	// (0x0006bb7d) cale_month_pane_g12_ParamLimits

0x8d5d,	// (0x0006bb7d) cale_month_pane_g12

0x8d97,	// (0x0006bbb7) cale_month_pane_g13_ParamLimits

0x8d97,	// (0x0006bbb7) cale_month_pane_g13

0x000c,

0xf2be,	// (0x000720de) cale_month_pane_g_ParamLimits

0xf2be,	// (0x000720de) cale_month_pane_g

0x8dd1,	// (0x0006bbf1) cale_month_week_pane

0x8de4,	// (0x0006bc04) grid_cale_month_pane_ParamLimits

0x8de4,	// (0x0006bc04) grid_cale_month_pane

0x8e12,	// (0x0006bc32) cale_month_day_heading_pane_t1

0x8e70,	// (0x0006bc90) cale_month_day_heading_pane_t2

0x8ed5,	// (0x0006bcf5) cale_month_day_heading_pane_t3

0x8f3a,	// (0x0006bd5a) cale_month_day_heading_pane_t4

0x8f9f,	// (0x0006bdbf) cale_month_day_heading_pane_t5

0x900c,	// (0x0006be2c) cale_month_day_heading_pane_t6

0x9081,	// (0x0006bea1) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000720f9) cale_month_day_heading_pane_t

0x0946,	// (0x00063766) bg_cale_side_pane_cp01

0x90f6,	// (0x0006bf16) cale_month_week_pane_t1

0x9121,	// (0x0006bf41) cale_month_week_pane_t2

0x914c,	// (0x0006bf6c) cale_month_week_pane_t3

0x9177,	// (0x0006bf97) cale_month_week_pane_t4

0x91a2,	// (0x0006bfc2) cale_month_week_pane_t5

0x91cd,	// (0x0006bfed) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00072108) cale_month_week_pane_t

0x91f8,	// (0x0006c018) cell_cale_month_pane_ParamLimits

0x91f8,	// (0x0006c018) cell_cale_month_pane

0x92c6,	// (0x0006c0e6) cell_cale_month_pane_g1

0x92d2,	// (0x0006c0f2) cell_cale_month_pane_t1_ParamLimits

0x92d2,	// (0x0006c0f2) cell_cale_month_pane_t1

0x0954,	// (0x00063774) grid_highlight_pane_cp08

0x07f7,	// (0x00063617) main_smil_g1

0x92ee,	// (0x0006c10e) smil_status_pane

0x0d5d,	// (0x00063b7d) smil_text_pane

0x4c46,	// (0x00067a66) bg_popup_call3_rect_pane_g8

0x4c4e,	// (0x00067a6e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000723c1) bg_popup_call3_rect_pane_g

0x4ef6,	// (0x00067d16) smil_status_volume_pane_g1

0x0d67,	// (0x00063b87) smil_status_pane_t1

0xa77f,	// (0x0006d59f) volume_smil_pane

0x0d7e,	// (0x00063b9e) list_smil_text_pane

0x9301,	// (0x0006c121) scroll_pane_cp011

0x930c,	// (0x0006c12c) smil_text_list_pane_t1_ParamLimits

0x930c,	// (0x0006c12c) smil_text_list_pane_t1

0x9370,	// (0x0006c190) aid_volume_smil_ParamLimits

0x9370,	// (0x0006c190) aid_volume_smil

0x07f7,	// (0x00063617) smil_volume_pane_g1

0x07f7,	// (0x00063617) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00072128) smil_volume_pane_g

0x077e,	// (0x0006359e) listscroll_cale_day_pane

0x0daa,	// (0x00063bca) bg_cale_pane

0x0dc2,	// (0x00063be2) list_cale_pane

0x0dd3,	// (0x00063bf3) scroll_pane_cp09

0x0de4,	// (0x00063c04) cale_bg_pane_g1

0x0dec,	// (0x00063c0c) cale_bg_pane_g2

0x0df4,	// (0x00063c14) cale_bg_pane_g3

0x0dfc,	// (0x00063c1c) cale_bg_pane_g4

0x0e04,	// (0x00063c24) cale_bg_pane_g5

0x0e0c,	// (0x00063c2c) cale_bg_pane_g6

0x0e14,	// (0x00063c34) cale_bg_pane_g7

0x0e1c,	// (0x00063c3c) cale_bg_pane_g8

0x0e24,	// (0x00063c44) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0007212d) cale_bg_pane_g

0x9392,	// (0x0006c1b2) list_cale_time_pane_ParamLimits

0x9392,	// (0x0006c1b2) list_cale_time_pane

0x93aa,	// (0x0006c1ca) list_cale_time_pane_g1_ParamLimits

0x93aa,	// (0x0006c1ca) list_cale_time_pane_g1

0x0e2c,	// (0x00063c4c) list_cale_time_pane_g2_ParamLimits

0x0e2c,	// (0x00063c4c) list_cale_time_pane_g2

0x93b6,	// (0x0006c1d6) list_cale_time_pane_g3_ParamLimits

0x93b6,	// (0x0006c1d6) list_cale_time_pane_g3

0x93c4,	// (0x0006c1e4) list_cale_time_pane_g4_ParamLimits

0x93c4,	// (0x0006c1e4) list_cale_time_pane_g4

0x93d2,	// (0x0006c1f2) list_cale_time_pane_g5_ParamLimits

0x93d2,	// (0x0006c1f2) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00072140) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00072140) list_cale_time_pane_g

0x93e0,	// (0x0006c200) list_cale_time_pane_t1_ParamLimits

0x93e0,	// (0x0006c200) list_cale_time_pane_t1

0x9408,	// (0x0006c228) list_cale_time_pane_t2_ParamLimits

0x9408,	// (0x0006c228) list_cale_time_pane_t2

0x971d,	// (0x0006c53d) aid_blid_cardinal_pane

0x975f,	// (0x0006c57f) compass_pane_t4

0x9430,	// (0x0006c250) list_cale_time_pane_t4_ParamLimits

0x9430,	// (0x0006c250) list_cale_time_pane_t4

0x976d,	// (0x0006c58d) compass_pane_t5

0x977d,	// (0x0006c59d) compass_pane_t6

0x978b,	// (0x0006c5ab) compass_pane_t7

0x12a7,	// (0x000640c7) navi_pane_cc_t1

0x140e,	// (0x0006422e) aid_phob_thumbnail_center_pane

0x9e94,	// (0x0006ccb4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0007214d) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0007214d) list_cale_time_pane_t

0x0083,	// (0x00062ea3) bg_popup_window_pane_cp02_ParamLimits

0x0083,	// (0x00062ea3) bg_popup_window_pane_cp02

0x0e46,	// (0x00063c66) heading_pane_cp01_ParamLimits

0x0e46,	// (0x00063c66) heading_pane_cp01

0x0e52,	// (0x00063c72) loc_req_pane_ParamLimits

0x0e52,	// (0x00063c72) loc_req_pane

0x0e62,	// (0x00063c82) loc_type_pane_ParamLimits

0x0e62,	// (0x00063c82) loc_type_pane

0x0e74,	// (0x00063c94) loc_type_pane_t1_ParamLimits

0x0e74,	// (0x00063c94) loc_type_pane_t1

0x0e86,	// (0x00063ca6) loc_type_pane_t2_ParamLimits

0x0e86,	// (0x00063ca6) loc_type_pane_t2

0x0e98,	// (0x00063cb8) loc_type_pane_t3_ParamLimits

0x0e98,	// (0x00063cb8) loc_type_pane_t3

0x0002,

0xf334,	// (0x00072154) loc_type_pane_t_ParamLimits

0xf334,	// (0x00072154) loc_type_pane_t

0x0eaa,	// (0x00063cca) list_loc_req_pane

0x0eb4,	// (0x00063cd4) scroll_pane_cp012

0x9458,	// (0x0006c278) list_single_loc_request_popup_menu_pane_ParamLimits

0x9458,	// (0x0006c278) list_single_loc_request_popup_menu_pane

0x0ebf,	// (0x00063cdf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0ebf,	// (0x00063cdf) list_single_loc_request_popup_menu_pane_g1

0x0ecb,	// (0x00063ceb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0ecb,	// (0x00063ceb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0007215b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0007215b) list_single_loc_request_popup_menu_pane_g

0x0ed7,	// (0x00063cf7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0ed7,	// (0x00063cf7) list_single_loc_request_popup_menu_pane_t1

0x946a,	// (0x0006c28a) bg_popup_window_pane_cp03_ParamLimits

0x946a,	// (0x0006c28a) bg_popup_window_pane_cp03

0x9478,	// (0x0006c298) heading_loc_req_pane_ParamLimits

0x9478,	// (0x0006c298) heading_loc_req_pane

0x9484,	// (0x0006c2a4) popup_dyc_status_message_window_g1_ParamLimits

0x9484,	// (0x0006c2a4) popup_dyc_status_message_window_g1

0x9490,	// (0x0006c2b0) popup_dyc_status_message_window_t1_ParamLimits

0x9490,	// (0x0006c2b0) popup_dyc_status_message_window_t1

0x94a2,	// (0x0006c2c2) popup_dyc_status_message_window_t2_ParamLimits

0x94a2,	// (0x0006c2c2) popup_dyc_status_message_window_t2

0x94b4,	// (0x0006c2d4) popup_dyc_status_message_window_t3_ParamLimits

0x94b4,	// (0x0006c2d4) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00072160) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00072160) popup_dyc_status_message_window_t

0x042c,	// (0x0006324c) bg_heading_pane_cp01

0x0ef9,	// (0x00063d19) heading_loc_req_pane_g1

0x0f01,	// (0x00063d21) heading_loc_req_pane_g2

0x0f09,	// (0x00063d29) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00072167) heading_loc_req_pane_g

0x0f11,	// (0x00063d31) heading_loc_req_pane_t1

0x0f21,	// (0x00063d41) bg_popup_sub_pane_cp01_ParamLimits

0x0f21,	// (0x00063d41) bg_popup_sub_pane_cp01

0x0f2f,	// (0x00063d4f) popup_cale_events_window_g1_ParamLimits

0x0f2f,	// (0x00063d4f) popup_cale_events_window_g1

0x0f4f,	// (0x00063d6f) popup_cale_events_window_g2_ParamLimits

0x0f4f,	// (0x00063d6f) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007219b) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007219b) popup_cale_events_window_g

0x0f6f,	// (0x00063d8f) popup_cale_events_window_t1_ParamLimits

0x0f6f,	// (0x00063d8f) popup_cale_events_window_t1

0x0f81,	// (0x00063da1) popup_cale_events_window_t2_ParamLimits

0x0f81,	// (0x00063da1) popup_cale_events_window_t2

0x0fbf,	// (0x00063ddf) popup_cale_events_window_t3_ParamLimits

0x0fbf,	// (0x00063ddf) popup_cale_events_window_t3

0x0ff9,	// (0x00063e19) popup_cale_events_window_t4_ParamLimits

0x0ff9,	// (0x00063e19) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x000721a0) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x000721a0) popup_cale_events_window_t

0x94de,	// (0x0006c2fe) call_type_pane

0x1426,	// (0x00064246) popup_call_status_window_g1

0x94ea,	// (0x0006c30a) popup_call_status_window_g2

0x94f6,	// (0x0006c316) popup_call_status_window_g3

0x0002,

0xf389,	// (0x000721a9) popup_call_status_window_g

0x102f,	// (0x00063e4f) call_type_pane_g1

0x1038,	// (0x00063e58) call_type_pane_g2

0x0001,

0xf390,	// (0x000721b0) call_type_pane_g

0x042c,	// (0x0006324c) bg_popup_sub_pane_cp02

0x1041,	// (0x00063e61) listscroll_popup_wml_pane

0x1049,	// (0x00063e69) list_wml_pane

0x1053,	// (0x00063e73) scroll_pane_cp013

0x105e,	// (0x00063e7e) list_single_graphic_popup_wml_pane_ParamLimits

0x105e,	// (0x00063e7e) list_single_graphic_popup_wml_pane

0x07f7,	// (0x00063617) list_single_graphic_popup_wml_pane_g1

0x1072,	// (0x00063e92) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x000721b5) list_single_graphic_popup_wml_pane_g

0x107a,	// (0x00063e9a) list_single_graphic_popup_wml_pane_t1

0x1088,	// (0x00063ea8) aid_call_pane

0x067f,	// (0x0006349f) popup_clock_analogue_window_g1

0x067f,	// (0x0006349f) popup_clock_analogue_window_g2

0x9502,	// (0x0006c322) popup_clock_analogue_window_g3

0x9502,	// (0x0006c322) popup_clock_analogue_window_g4

0x07f7,	// (0x00063617) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x000721ba) popup_clock_analogue_window_g

0x950a,	// (0x0006c32a) popup_clock_analogue_window_t1

0x9518,	// (0x0006c338) clock_digital_number_pane_ParamLimits

0x9518,	// (0x0006c338) clock_digital_number_pane

0x9524,	// (0x0006c344) clock_digital_number_pane_cp02_ParamLimits

0x9524,	// (0x0006c344) clock_digital_number_pane_cp02

0x9530,	// (0x0006c350) clock_digital_number_pane_cp03_ParamLimits

0x9530,	// (0x0006c350) clock_digital_number_pane_cp03

0x953c,	// (0x0006c35c) clock_digital_number_pane_cp04_ParamLimits

0x953c,	// (0x0006c35c) clock_digital_number_pane_cp04

0x9548,	// (0x0006c368) clock_digital_separator_pane_ParamLimits

0x9548,	// (0x0006c368) clock_digital_separator_pane

0x9554,	// (0x0006c374) popup_clock_digital_window_t1

0x07f7,	// (0x00063617) clock_digital_number_pane_g1

0x07f7,	// (0x00063617) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00072128) clock_digital_number_pane_g

0x07f7,	// (0x00063617) clock_digital_separator_pane_g1

0x07f7,	// (0x00063617) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00072128) clock_digital_separator_pane_g

0x042c,	// (0x0006324c) bg_popup_window_pane_cp04

0x1107,	// (0x00063f27) heading_pane_cp03

0x110f,	// (0x00063f2f) listscroll_popup_gms_pane

0x1117,	// (0x00063f37) grid_large_graphic_popup_pane

0x1121,	// (0x00063f41) listscroll_popup_gms_pane_g1

0x1129,	// (0x00063f49) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000721c5) listscroll_popup_gms_pane_g

0x0bc0,	// (0x000639e0) scroll_pane_cp014

0x9571,	// (0x0006c391) cell_large_graphic_popup_pane_ParamLimits

0x9571,	// (0x0006c391) cell_large_graphic_popup_pane

0x958b,	// (0x0006c3ab) cell_large_graphic_popup_pane_g1_ParamLimits

0x958b,	// (0x0006c3ab) cell_large_graphic_popup_pane_g1

0x1131,	// (0x00063f51) cell_large_graphic_popup_pane_g2_ParamLimits

0x1131,	// (0x00063f51) cell_large_graphic_popup_pane_g2

0x113d,	// (0x00063f5d) cell_large_graphic_popup_pane_g3_ParamLimits

0x113d,	// (0x00063f5d) cell_large_graphic_popup_pane_g3

0x114a,	// (0x00063f6a) cell_large_graphic_popup_pane_g4_ParamLimits

0x114a,	// (0x00063f6a) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x000721ca) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x000721ca) cell_large_graphic_popup_pane_g

0x115a,	// (0x00063f7a) grid_highlight_pane_cp010

0x07f7,	// (0x00063617) bg_popup_call_pane_g1

0x1164,	// (0x00063f84) list_single_graphic_popup_conf_pane_ParamLimits

0x1164,	// (0x00063f84) list_single_graphic_popup_conf_pane

0x1176,	// (0x00063f96) list_highlight_pane_cp01

0x117f,	// (0x00063f9f) list_single_graphic_popup_conf_pane_g1

0x1187,	// (0x00063fa7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000721d3) list_single_graphic_popup_conf_pane_g

0x118f,	// (0x00063faf) list_single_graphic_popup_conf_pane_t1

0x119d,	// (0x00063fbd) linegrid_cams_pane_g1

0x9597,	// (0x0006c3b7) linegrid_cams_pane_g2

0x0987,	// (0x000637a7) linegrid_cams_pane_g3

0x11a6,	// (0x00063fc6) linegrid_cams_pane_g4

0x95a0,	// (0x0006c3c0) linegrid_cams_pane_g5

0x95a9,	// (0x0006c3c9) linegrid_cams_pane_g6

0x0990,	// (0x000637b0) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x000721d8) linegrid_cams_pane_g

0x11af,	// (0x00063fcf) popup_clock_analogue_window

0x11af,	// (0x00063fcf) popup_clock_digital_window

0x042c,	// (0x0006324c) popup_phob_thumbnail_window

0x07f7,	// (0x00063617) call_video_uplink_pane_g1

0x11b8,	// (0x00063fd8) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000721e7) call_video_uplink_pane_g

0x11c0,	// (0x00063fe0) video_uplink_pane

0x11c8,	// (0x00063fe8) mce_image_pane_g1

0x95b4,	// (0x0006c3d4) mce_image_pane_g2

0x95be,	// (0x0006c3de) mce_image_pane_g3

0x95c8,	// (0x0006c3e8) mce_image_pane_g4

0x95d0,	// (0x0006c3f0) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000721ec) mce_image_pane_g

0x11d2,	// (0x00063ff2) control_top_pane_stacon_cp01_ParamLimits

0x11d2,	// (0x00063ff2) control_top_pane_stacon_cp01

0x11e6,	// (0x00064006) uni_indicator_pane_stacon_cp01_ParamLimits

0x11e6,	// (0x00064006) uni_indicator_pane_stacon_cp01

0x11f7,	// (0x00064017) bg_popup_sub_pane_cp03

0x95d8,	// (0x0006c3f8) chi_dic_find_pane

0x95e0,	// (0x0006c400) listscroll_chi_dic_pane

0x95e9,	// (0x0006c409) main_pane_chidic_g1

0x95fc,	// (0x0006c41c) chi_dic_find_pane_t1

0x1201,	// (0x00064021) find_chidic_pane

0x120a,	// (0x0006402a) chi_dic_list_pane_ParamLimits

0x120a,	// (0x0006402a) chi_dic_list_pane

0x121b,	// (0x0006403b) scroll_pane_cp020

0x960a,	// (0x0006c42a) find_chidic_pane_t1

0x042c,	// (0x0006324c) input_focus_pane_cp06

0x9619,	// (0x0006c439) list_chi_dic_pane_ParamLimits

0x9619,	// (0x0006c439) list_chi_dic_pane

0x9631,	// (0x0006c451) list_chi_dic_pane_t1_ParamLimits

0x9631,	// (0x0006c451) list_chi_dic_pane_t1

0x042c,	// (0x0006324c) list_highlight_pane_cp020

0x1223,	// (0x00064043) bg_cale_heading_pane_g1

0x9644,	// (0x0006c464) bg_cale_heading_pane_g2

0x964c,	// (0x0006c46c) bg_cale_heading_pane_g3

0x9654,	// (0x0006c474) bg_cale_heading_pane_g4

0x965e,	// (0x0006c47e) bg_cale_heading_pane_g5

0x9668,	// (0x0006c488) bg_cale_heading_pane_g6

0x9670,	// (0x0006c490) bg_cale_heading_pane_g7

0x9678,	// (0x0006c498) bg_cale_heading_pane_g8

0x9682,	// (0x0006c4a2) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000721f7) bg_cale_heading_pane_g

0x1223,	// (0x00064043) bg_cale_side_pane_g1

0x968c,	// (0x0006c4ac) bg_cale_side_pane_g2

0x9694,	// (0x0006c4b4) bg_cale_side_pane_g3

0x969c,	// (0x0006c4bc) bg_cale_side_pane_g4

0x96a4,	// (0x0006c4c4) bg_cale_side_pane_g5

0x96ac,	// (0x0006c4cc) bg_cale_side_pane_g6

0x96b4,	// (0x0006c4d4) bg_cale_side_pane_g7

0x96bc,	// (0x0006c4dc) bg_cale_side_pane_g8

0x96c4,	// (0x0006c4e4) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0007220a) bg_cale_side_pane_g

0x96cc,	// (0x0006c4ec) popup_call_status_window_ParamLimits

0x96cc,	// (0x0006c4ec) popup_call_status_window

0x122b,	// (0x0006404b) stacon_top_pane

0x1233,	// (0x00064053) status_pane_ParamLimits

0x1233,	// (0x00064053) status_pane

0x1248,	// (0x00064068) status_small_pane

0x1250,	// (0x00064070) control_pane

0x042c,	// (0x0006324c) stacon_bottom_pane

0x1258,	// (0x00064078) list_single_mce_smart_pane_t1_ParamLimits

0x1258,	// (0x00064078) list_single_mce_smart_pane_t1

0x126b,	// (0x0006408b) list_single_mce_smart_pane_t2_ParamLimits

0x126b,	// (0x0006408b) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0007221d) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0007221d) list_single_mce_smart_pane_t

0x96d8,	// (0x0006c4f8) compass_pane

0x96e3,	// (0x0006c503) main_location2_pane_t1

0x96f7,	// (0x0006c517) main_location2_pane_t2

0x96f7,	// (0x0006c517) main_location2_pane_t3

0x0003,

0xf402,	// (0x00072222) main_location2_pane_t

0x128a,	// (0x000640aa) compass_pane_g1_ParamLimits

0x128a,	// (0x000640aa) compass_pane_g1

0x9741,	// (0x0006c561) compass_pane_t1

0x9750,	// (0x0006c570) compass_pane_t2

0x0005,

0xf40b,	// (0x0007222b) compass_pane_t

0x979b,	// (0x0006c5bb) text_secondary_cp61

0x129e,	// (0x000640be) navi_pane_cams_g5

0x12c1,	// (0x000640e1) navi_pane_im_t1

0x12cf,	// (0x000640ef) navi_pane_mp_g1_ParamLimits

0x12cf,	// (0x000640ef) navi_pane_mp_g1

0x12e3,	// (0x00064103) navi_pane_mp_g2_ParamLimits

0x12e3,	// (0x00064103) navi_pane_mp_g2

0x12ef,	// (0x0006410f) navi_pane_mp_g3_ParamLimits

0x12ef,	// (0x0006410f) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0007223f) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0007223f) navi_pane_mp_g

0x12fb,	// (0x0006411b) navi_pane_mp_t1

0x1309,	// (0x00064129) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00072246) navi_pane_mp_t

0x1345,	// (0x00064165) navi_pane_vt_g1

0x12fb,	// (0x0006411b) navi_pane_vt_t1

0x134d,	// (0x0006416d) navi_slider_pane

0x1355,	// (0x00064175) zooming_pane

0x135d,	// (0x0006417d) navi_slider_pane_g1

0x98b2,	// (0x0006c6d2) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0007224d) navi_slider_pane_g

0x1393,	// (0x000641b3) aid_levels_zoom

0x139b,	// (0x000641bb) zooming_pane_g1

0x13a3,	// (0x000641c3) zooming_pane_g2

0x13a3,	// (0x000641c3) zooming_pane_g3

0x0002,

0xf43c,	// (0x0007225c) zooming_pane_g

0x13ab,	// (0x000641cb) level_10_zoom

0x13b4,	// (0x000641d4) level_11_zoom

0x13bd,	// (0x000641dd) level_1_zoom

0x13c6,	// (0x000641e6) level_2_zoom

0x13cf,	// (0x000641ef) level_3_zoom

0x13d8,	// (0x000641f8) level_4_zoom

0x13e1,	// (0x00064201) level_5_zoom

0x13ea,	// (0x0006420a) level_6_zoom

0x13f3,	// (0x00064213) level_7_zoom

0x13fc,	// (0x0006421c) level_8_zoom

0x1405,	// (0x00064225) level_9_zoom

0x1416,	// (0x00064236) popup_phob_thumbnail_window_g1

0x141e,	// (0x0006423e) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00072263) popup_phob_thumbnail_window_g

0x4dac,	// (0x00067bcc) level_1_location

0x4db4,	// (0x00067bd4) level_2_location

0x4dbc,	// (0x00067bdc) level_3_location

0x4dc4,	// (0x00067be4) level_4_location

0x1355,	// (0x00064175) level_5_location

0x98c4,	// (0x0006c6e4) mce_icon_pane_g1

0x98cc,	// (0x0006c6ec) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00072268) mce_icon_pane_g

0x98d4,	// (0x0006c6f4) main_mup_pane_g1_ParamLimits

0x98d4,	// (0x0006c6f4) main_mup_pane_g1

0x98ec,	// (0x0006c70c) main_mup_pane_g2_ParamLimits

0x98ec,	// (0x0006c70c) main_mup_pane_g2

0x9908,	// (0x0006c728) main_mup_pane_g3_ParamLimits

0x9908,	// (0x0006c728) main_mup_pane_g3

0x9924,	// (0x0006c744) main_mup_pane_g4_ParamLimits

0x9924,	// (0x0006c744) main_mup_pane_g4

0x9938,	// (0x0006c758) main_mup_pane_g5_ParamLimits

0x9938,	// (0x0006c758) main_mup_pane_g5

0x9959,	// (0x0006c779) main_mup_pane_g6_ParamLimits

0x9959,	// (0x0006c779) main_mup_pane_g6

0x9979,	// (0x0006c799) main_mup_pane_g7_ParamLimits

0x9979,	// (0x0006c799) main_mup_pane_g7

0x999d,	// (0x0006c7bd) main_mup_pane_g8_ParamLimits

0x999d,	// (0x0006c7bd) main_mup_pane_g8

0x99c1,	// (0x0006c7e1) main_mup_pane_g9_ParamLimits

0x99c1,	// (0x0006c7e1) main_mup_pane_g9

0x99e4,	// (0x0006c804) main_mup_pane_g10_ParamLimits

0x99e4,	// (0x0006c804) main_mup_pane_g10

0x9a07,	// (0x0006c827) main_mup_pane_g11_ParamLimits

0x9a07,	// (0x0006c827) main_mup_pane_g11

0x9a27,	// (0x0006c847) main_mup_pane_g12_ParamLimits

0x9a27,	// (0x0006c847) main_mup_pane_g12

0x9a35,	// (0x0006c855) main_mup_pane_g13_ParamLimits

0x9a35,	// (0x0006c855) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0007226d) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0007226d) main_mup_pane_g

0x9a4b,	// (0x0006c86b) main_mup_pane_t1_ParamLimits

0x9a4b,	// (0x0006c86b) main_mup_pane_t1

0x9a6a,	// (0x0006c88a) main_mup_pane_t2_ParamLimits

0x9a6a,	// (0x0006c88a) main_mup_pane_t2

0x9a84,	// (0x0006c8a4) main_mup_pane_t3_ParamLimits

0x9a84,	// (0x0006c8a4) main_mup_pane_t3

0x9a9e,	// (0x0006c8be) main_mup_pane_t4_ParamLimits

0x9a9e,	// (0x0006c8be) main_mup_pane_t4

0x9ab0,	// (0x0006c8d0) main_mup_pane_t5_ParamLimits

0x9ab0,	// (0x0006c8d0) main_mup_pane_t5

0x9ac2,	// (0x0006c8e2) main_mup_pane_t6_ParamLimits

0x9ac2,	// (0x0006c8e2) main_mup_pane_t6

0x0005,

0xf468,	// (0x00072288) main_mup_pane_t_ParamLimits

0xf468,	// (0x00072288) main_mup_pane_t

0x9ad8,	// (0x0006c8f8) mup_progress_pane_ParamLimits

0x9ad8,	// (0x0006c8f8) mup_progress_pane

0x9ae4,	// (0x0006c904) mup_visualizer_pane_ParamLimits

0x9ae4,	// (0x0006c904) mup_visualizer_pane

0x9b22,	// (0x0006c942) mup_volume_pane_ParamLimits

0x9b22,	// (0x0006c942) mup_volume_pane

0x1426,	// (0x00064246) mup_visualizer_pane_g1_ParamLimits

0x1426,	// (0x00064246) mup_visualizer_pane_g1

0x1426,	// (0x00064246) mup_visualizer_pane_g2_ParamLimits

0x1426,	// (0x00064246) mup_visualizer_pane_g2

0x128a,	// (0x000640aa) mup_visualizer_pane_g3_ParamLimits

0x128a,	// (0x000640aa) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00072295) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00072295) mup_visualizer_pane_g

0x07f7,	// (0x00063617) mup_volume_pane_g1

0x143c,	// (0x0006425c) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0007229c) mup_volume_pane_g

0x07f7,	// (0x00063617) mup_progress_pane_g1

0x1445,	// (0x00064265) mup_progress_pane_g2

0x144e,	// (0x0006426e) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000722a1) mup_progress_pane_g

0x042c,	// (0x0006324c) bg_popup_window_pane_cp05

0x1457,	// (0x00064277) heading_pane_cp02_ParamLimits

0x1457,	// (0x00064277) heading_pane_cp02

0x1473,	// (0x00064293) list_popup_blid_pane

0x147b,	// (0x0006429b) list_blid_sat_info_pane_ParamLimits

0x147b,	// (0x0006429b) list_blid_sat_info_pane

0x148e,	// (0x000642ae) list_blid_sat_info_pane_g1

0x1496,	// (0x000642b6) list_blid_sat_info_pane_t1

0x9c41,	// (0x0006ca61) mup_equalizer_pane_ParamLimits

0x9c41,	// (0x0006ca61) mup_equalizer_pane

0x9c62,	// (0x0006ca82) mup_equalizer_pane_cp1_ParamLimits

0x9c62,	// (0x0006ca82) mup_equalizer_pane_cp1

0x9c83,	// (0x0006caa3) mup_equalizer_pane_cp2_ParamLimits

0x9c83,	// (0x0006caa3) mup_equalizer_pane_cp2

0x9ca4,	// (0x0006cac4) mup_equalizer_pane_cp3_ParamLimits

0x9ca4,	// (0x0006cac4) mup_equalizer_pane_cp3

0x9cc9,	// (0x0006cae9) mup_equalizer_pane_cp4_ParamLimits

0x9cc9,	// (0x0006cae9) mup_equalizer_pane_cp4

0x9cee,	// (0x0006cb0e) mup_equalizer_pane_cp5

0x9d06,	// (0x0006cb26) mup_equalizer_pane_cp6

0x9d1e,	// (0x0006cb3e) mup_equalizer_pane_cp7

0x4cc6,	// (0x00067ae6) bg_popup_call_poc_act_pane_g9

0x4cce,	// (0x00067aee) bg_popup_call_poc_act_pane_g10

0x4cd6,	// (0x00067af6) bg_popup_call_poc_act_pane_g11

0x000a,

0x0687,	// (0x000634a7) mup_scale_pane

0x07f7,	// (0x00063617) mup_scale_pane_g1

0x14a4,	// (0x000642c4) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x000722bd) mup_scale_pane_g

0x14c8,	// (0x000642e8) msg_data_pane

0x14d0,	// (0x000642f0) scroll_pane_cp017

0x6722,	// (0x00069542) bg_list_pane_cp04_ParamLimits

0x6722,	// (0x00069542) bg_list_pane_cp04

0x14d8,	// (0x000642f8) msg_data_pane_g1

0x9d48,	// (0x0006cb68) msg_data_pane_g2

0x9d52,	// (0x0006cb72) msg_data_pane_g3

0x9d5c,	// (0x0006cb7c) msg_data_pane_g4

0x9d64,	// (0x0006cb84) msg_data_pane_g5

0x9d6c,	// (0x0006cb8c) msg_data_pane_g6

0x9d74,	// (0x0006cb94) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x000722cc) msg_data_pane_g

0x674a,	// (0x0006956a) msg_text_pane_ParamLimits

0x674a,	// (0x0006956a) msg_text_pane

0x9d7c,	// (0x0006cb9c) qrid_highlight_pane_cp011_ParamLimits

0x9d7c,	// (0x0006cb9c) qrid_highlight_pane_cp011

0x042c,	// (0x0006324c) msg_body_pane

0x042c,	// (0x0006324c) msg_header_pane

0x14e9,	// (0x00064309) input_focus_pane_cp07

0x6784,	// (0x000695a4) msg_header_pane_t1_ParamLimits

0x6784,	// (0x000695a4) msg_header_pane_t1

0x6798,	// (0x000695b8) msg_header_pane_t2_ParamLimits

0x6798,	// (0x000695b8) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000722e0) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000722e0) msg_header_pane_t

0x14fe,	// (0x0006431e) msg_body_pane_g1

0x67aa,	// (0x000695ca) msg_body_pane_t1_ParamLimits

0x67aa,	// (0x000695ca) msg_body_pane_t1

0x67db,	// (0x000695fb) msg_body_pane_t2_ParamLimits

0x67db,	// (0x000695fb) msg_body_pane_t2

0x67ed,	// (0x0006960d) msg_body_pane_t3_ParamLimits

0x67ed,	// (0x0006960d) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000722e5) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000722e5) msg_body_pane_t

0x9de4,	// (0x0006cc04) main_viewer_pane_g1_ParamLimits

0x9de4,	// (0x0006cc04) main_viewer_pane_g1

0x9df0,	// (0x0006cc10) main_viewer_pane_g2_ParamLimits

0x9df0,	// (0x0006cc10) main_viewer_pane_g2

0x9dfc,	// (0x0006cc1c) main_viewer_pane_g3_ParamLimits

0x9dfc,	// (0x0006cc1c) main_viewer_pane_g3

0x9e0d,	// (0x0006cc2d) main_viewer_pane_g4_ParamLimits

0x9e0d,	// (0x0006cc2d) main_viewer_pane_g4

0x9e1e,	// (0x0006cc3e) main_viewer_pane_g5_ParamLimits

0x9e1e,	// (0x0006cc3e) main_viewer_pane_g5

0x9e1e,	// (0x0006cc3e) main_viewer_pane_g7_ParamLimits

0x9e1e,	// (0x0006cc3e) main_viewer_pane_g7

0x9e30,	// (0x0006cc50) main_viewer_pane_g8_ParamLimits

0x9e30,	// (0x0006cc50) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000722f5) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000722f5) main_viewer_pane_g

0x1548,	// (0x00064368) viewer_content_pane_ParamLimits

0x1548,	// (0x00064368) viewer_content_pane

0x9e68,	// (0x0006cc88) main_postcard_pane_g1_ParamLimits

0x9e68,	// (0x0006cc88) main_postcard_pane_g1

0x9e76,	// (0x0006cc96) main_postcard_pane_g2_ParamLimits

0x9e76,	// (0x0006cc96) main_postcard_pane_g2

0x9e84,	// (0x0006cca4) main_postcard_pane_g3_ParamLimits

0x9e84,	// (0x0006cca4) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00072306) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00072306) main_postcard_pane_g

0x9e94,	// (0x0006ccb4) main_postcard_pane_g4

0x4ee3,	// (0x00067d03) smil_status_volume_pane_g2

0x9ec0,	// (0x0006cce0) postcard_pane_ParamLimits

0x9ec0,	// (0x0006cce0) postcard_pane

0x1426,	// (0x00064246) postcard_pane_g1_ParamLimits

0x1426,	// (0x00064246) postcard_pane_g1

0x9efa,	// (0x0006cd1a) postcard_pane_g2_ParamLimits

0x9efa,	// (0x0006cd1a) postcard_pane_g2

0x9f06,	// (0x0006cd26) postcard_pane_g3_ParamLimits

0x9f06,	// (0x0006cd26) postcard_pane_g3

0x1564,	// (0x00064384) postcard_pane_g4_ParamLimits

0x1564,	// (0x00064384) postcard_pane_g4

0x9f12,	// (0x0006cd32) postcard_pane_g5_ParamLimits

0x9f12,	// (0x0006cd32) postcard_pane_g5

0x9f1e,	// (0x0006cd3e) postcard_pane_g6_ParamLimits

0x9f1e,	// (0x0006cd3e) postcard_pane_g6

0x1556,	// (0x00064376) postcard_pane_g7_ParamLimits

0x1556,	// (0x00064376) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00072313) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00072313) postcard_pane_g

0x9f2c,	// (0x0006cd4c) main_mp2_pane_g1_ParamLimits

0x9f2c,	// (0x0006cd4c) main_mp2_pane_g1

0x9f3a,	// (0x0006cd5a) main_mp2_pane_g2_ParamLimits

0x9f3a,	// (0x0006cd5a) main_mp2_pane_g2

0x9f46,	// (0x0006cd66) main_mp2_pane_g3_ParamLimits

0x9f46,	// (0x0006cd66) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00072322) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00072322) main_mp2_pane_g

0x9f52,	// (0x0006cd72) main_mp2_pane_t1_ParamLimits

0x9f52,	// (0x0006cd72) main_mp2_pane_t1

0x9f69,	// (0x0006cd89) main_mp2_pane_t2_ParamLimits

0x9f69,	// (0x0006cd89) main_mp2_pane_t2

0x9f7d,	// (0x0006cd9d) main_mp2_pane_t3_ParamLimits

0x9f7d,	// (0x0006cd9d) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00072329) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00072329) main_mp2_pane_t

0x1572,	// (0x00064392) pec_content_pane_ParamLimits

0x1572,	// (0x00064392) pec_content_pane

0x0bc0,	// (0x000639e0) scroll_pane_cp015

0x1584,	// (0x000643a4) pec_attribute_pane_ParamLimits

0x1584,	// (0x000643a4) pec_attribute_pane

0x9f8f,	// (0x0006cdaf) pec_content_pane_g1_ParamLimits

0x9f8f,	// (0x0006cdaf) pec_content_pane_g1

0x1594,	// (0x000643b4) pec_content_pane_t1_ParamLimits

0x1594,	// (0x000643b4) pec_content_pane_t1

0x15a6,	// (0x000643c6) pec_content_pane_t2_ParamLimits

0x15a6,	// (0x000643c6) pec_content_pane_t2

0x0001,

0xf510,	// (0x00072330) pec_content_pane_t_ParamLimits

0xf510,	// (0x00072330) pec_content_pane_t

0x9f9b,	// (0x0006cdbb) list_single_graphic_pane_cp01_ParamLimits

0x9f9b,	// (0x0006cdbb) list_single_graphic_pane_cp01

0x0687,	// (0x000634a7) bg_popup_sub_pane_cp04

0x15b8,	// (0x000643d8) popup_mup_playback_window_g1

0x15c4,	// (0x000643e4) popup_mup_playback_window_t1

0x15d9,	// (0x000643f9) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00072335) popup_mup_playback_window_t

0x1610,	// (0x00064430) main_image_pane_g1_ParamLimits

0x1610,	// (0x00064430) main_image_pane_g1

0x1653,	// (0x00064473) scroll_pane_cp018_ParamLimits

0x1653,	// (0x00064473) scroll_pane_cp018

0x166b,	// (0x0006448b) scroll_pane_cp016_ParamLimits

0x166b,	// (0x0006448b) scroll_pane_cp016

0xa02c,	// (0x0006ce4c) smil2_image_pane_ParamLimits

0xa02c,	// (0x0006ce4c) smil2_image_pane

0xa062,	// (0x0006ce82) smil2_root_pane_ParamLimits

0xa062,	// (0x0006ce82) smil2_root_pane

0xa08e,	// (0x0006ceae) smil2_text_pane_ParamLimits

0xa08e,	// (0x0006ceae) smil2_text_pane

0x042c,	// (0x0006324c) bg_list_pane_cp06

0x16a7,	// (0x000644c7) grid_radio_pane

0x042c,	// (0x0006324c) bg_popup_window_pane_cp06

0x16b1,	// (0x000644d1) main_fmradio_pane_t1

0x1107,	// (0x00063f27) heading_pane_cp04

0x16bf,	// (0x000644df) main_fmradio_pane_t2

0x4cde,	// (0x00067afe) popup_cale_lunar_info_window_g1

0x16cd,	// (0x000644ed) main_fmradio_pane_t3

0x4ce6,	// (0x00067b06) popup_cale_lunar_info_window_g2

0x16dd,	// (0x000644fd) main_fmradio_pane_t4

0x0001,

0x16eb,	// (0x0006450b) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00072410) popup_cale_lunar_info_window_g

0xf52a,	// (0x0007234a) main_fmradio_pane_t

0x16f9,	// (0x00064519) wait_bar_pane_cp03

0x1701,	// (0x00064521) cell_fmradio_pane_ParamLimits

0x1701,	// (0x00064521) cell_fmradio_pane

0x1556,	// (0x00064376) cell_fmradio_pane_g1_ParamLimits

0x1556,	// (0x00064376) cell_fmradio_pane_g1

0x042c,	// (0x0006324c) grid_highlight_pane_cp011

0x1716,	// (0x00064536) poc_content_pane_ParamLimits

0x1716,	// (0x00064536) poc_content_pane

0x1728,	// (0x00064548) scroll_pane_cp019

0xa0ce,	// (0x0006ceee) popup_call_poc_act_window_ParamLimits

0xa0ce,	// (0x0006ceee) popup_call_poc_act_window

0xa0db,	// (0x0006cefb) popup_call_poc_inact_window_ParamLimits

0xa0db,	// (0x0006cefb) popup_call_poc_inact_window

0xf5c7,	// (0x000723e7) bg_popup_call_poc_act_pane_g

0x4c56,	// (0x00067a76) bg_popup_call_poc_inact_pane_g1

0x4c5e,	// (0x00067a7e) bg_popup_call_poc_inact_pane_g2

0x1730,	// (0x00064550) popup_call_poc_act_window_g2

0x4c66,	// (0x00067a86) bg_popup_call_poc_inact_pane_g3

0x4c6e,	// (0x00067a8e) bg_popup_call_poc_inact_pane_g4

0x4c76,	// (0x00067a96) bg_popup_call_poc_inact_pane_g5

0x1738,	// (0x00064558) popup_call_poc_act_window_t1_ParamLimits

0x1738,	// (0x00064558) popup_call_poc_act_window_t1

0x1760,	// (0x00064580) popup_call_poc_act_window_t2_ParamLimits

0x1760,	// (0x00064580) popup_call_poc_act_window_t2

0x1788,	// (0x000645a8) popup_call_poc_act_window_t3_ParamLimits

0x1788,	// (0x000645a8) popup_call_poc_act_window_t3

0x17b0,	// (0x000645d0) popup_call_poc_act_window_t4_ParamLimits

0x17b0,	// (0x000645d0) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00072355) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00072355) popup_call_poc_act_window_t

0x4c7e,	// (0x00067a9e) bg_popup_call_poc_inact_pane_g6

0x4c86,	// (0x00067aa6) bg_popup_call_poc_inact_pane_g7

0x4c8e,	// (0x00067aae) bg_popup_call_poc_inact_pane_g8

0x17c2,	// (0x000645e2) popup_call_poc_inact_window_g2

0x4c96,	// (0x00067ab6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000723d4) bg_popup_call_poc_inact_pane_g

0x17ca,	// (0x000645ea) popup_call_poc_inact_window_t1_ParamLimits

0x17ca,	// (0x000645ea) popup_call_poc_inact_window_t1

0x17df,	// (0x000645ff) popup_call_poc_inact_window_t2_ParamLimits

0x17df,	// (0x000645ff) popup_call_poc_inact_window_t2

0x17f4,	// (0x00064614) popup_call_poc_inact_window_t3_ParamLimits

0x17f4,	// (0x00064614) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0007235e) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0007235e) popup_call_poc_inact_window_t

0x4e56,	// (0x00067c76) context_pane_ParamLimits

0xa6ed,	// (0x0006d50d) signal_pane_ParamLimits

0x1355,	// (0x00064175) main_call2_pane

0x4e44,	// (0x00067c64) popup_phob_thumbnail2_window_ParamLimits

0x4e44,	// (0x00067c64) popup_phob_thumbnail2_window

0x9d92,	// (0x0006cbb2) aid_hotspot_pointer_arrow_pane

0x9d9a,	// (0x0006cbba) aid_hotspot_pointer_hand_pane

0xa403,	// (0x0006d223) phob_pre_status_pane_g5

0x8396,	// (0x0006b1b6) cams_zoom_pane_ParamLimits

0x83a2,	// (0x0006b1c2) image_vga_pane_ParamLimits

0x83b1,	// (0x0006b1d1) main_camera_pane_g1_ParamLimits

0x83bf,	// (0x0006b1df) main_camera_pane_g2_ParamLimits

0x83cb,	// (0x0006b1eb) main_camera_pane_g3_ParamLimits

0x83d9,	// (0x0006b1f9) main_camera_pane_g4_ParamLimits

0x83e7,	// (0x0006b207) main_camera_pane_g5_ParamLimits

0x83f5,	// (0x0006b215) main_camera_pane_g6_ParamLimits

0x8403,	// (0x0006b223) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0007205d) main_camera_pane_g_ParamLimits

0x8411,	// (0x0006b231) main_camera_pane_t1_ParamLimits

0x8423,	// (0x0006b243) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007206e) main_camera_pane_t_ParamLimits

0x0687,	// (0x000634a7) bg_popup_preview_window_pane_cp01_ParamLimits

0x0687,	// (0x000634a7) bg_popup_preview_window_pane_cp01

0x1809,	// (0x00064629) popup_phob_thumbnail2_window_g1_ParamLimits

0x1809,	// (0x00064629) popup_phob_thumbnail2_window_g1

0x042c,	// (0x0006324c) call2_cli_visual_pane

0xa0f7,	// (0x0006cf17) popup_call2_audio_conf_window_ParamLimits

0xa0f7,	// (0x0006cf17) popup_call2_audio_conf_window

0xa110,	// (0x0006cf30) popup_call2_audio_first_window_ParamLimits

0xa110,	// (0x0006cf30) popup_call2_audio_first_window

0xa1ae,	// (0x0006cfce) popup_call2_audio_in_window_ParamLimits

0xa1ae,	// (0x0006cfce) popup_call2_audio_in_window

0xa1f2,	// (0x0006d012) popup_call2_audio_out_window_ParamLimits

0xa1f2,	// (0x0006d012) popup_call2_audio_out_window

0xa25c,	// (0x0006d07c) popup_call2_audio_second_window_ParamLimits

0xa25c,	// (0x0006d07c) popup_call2_audio_second_window

0xa2ba,	// (0x0006d0da) popup_call2_audio_wait_window_ParamLimits

0xa2ba,	// (0x0006d0da) popup_call2_audio_wait_window

0x042c,	// (0x0006324c) bg_popup_call2_act_pane_cp03

0x0669,	// (0x00063489) list_conf_pane_cp

0x1815,	// (0x00064635) popup_call2_audio_conf_window_t1

0x1823,	// (0x00064643) list_single_graphic_popup_conf2_pane_ParamLimits

0x1823,	// (0x00064643) list_single_graphic_popup_conf2_pane

0x1176,	// (0x00063f96) list_highlight_pane_cp04

0x1836,	// (0x00064656) list_single_graphic_popup_conf2_pane_g1

0x1187,	// (0x00063fa7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00072365) list_single_graphic_popup_conf2_pane_g

0x1840,	// (0x00064660) list_single_graphic_popup_conf2_pane_t1

0x184e,	// (0x0006466e) bg_popup_call2_act_pane_cp01_ParamLimits

0x184e,	// (0x0006466e) bg_popup_call2_act_pane_cp01

0x18d8,	// (0x000646f8) call_type_pane_cp05_ParamLimits

0x18d8,	// (0x000646f8) call_type_pane_cp05

0x192c,	// (0x0006474c) popup_call2_audio_second_window_g1_ParamLimits

0x192c,	// (0x0006474c) popup_call2_audio_second_window_g1

0x1980,	// (0x000647a0) popup_call2_audio_second_window_g2_ParamLimits

0x1980,	// (0x000647a0) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0007236a) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0007236a) popup_call2_audio_second_window_g

0x19e5,	// (0x00064805) popup_call2_audio_second_window_t1_ParamLimits

0x19e5,	// (0x00064805) popup_call2_audio_second_window_t1

0x40e3,	// (0x00066f03) popup_call2_audio_second_window_t2_ParamLimits

0x40e3,	// (0x00066f03) popup_call2_audio_second_window_t2

0x4136,	// (0x00066f56) popup_call2_audio_second_window_t3_ParamLimits

0x4136,	// (0x00066f56) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00072371) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00072371) popup_call2_audio_second_window_t

0x042c,	// (0x0006324c) bg_popup_call2_in_pane_cp02

0x0436,	// (0x00063256) call_type_pane_cp04

0x043e,	// (0x0006325e) popup_call2_audio_wait_window_g1

0x0446,	// (0x00063266) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00071f4a) popup_call2_audio_wait_window_g

0x044e,	// (0x0006326e) popup_call2_audio_wait_window_t3

0x4229,	// (0x00067049) bg_popup_call2_act_pane_ParamLimits

0x4229,	// (0x00067049) bg_popup_call2_act_pane

0x42e9,	// (0x00067109) call_type_pane_cp03_ParamLimits

0x42e9,	// (0x00067109) call_type_pane_cp03

0x434d,	// (0x0006716d) popup_call2_audio_first_window_g1_ParamLimits

0x434d,	// (0x0006716d) popup_call2_audio_first_window_g1

0x43bd,	// (0x000671dd) popup_call2_audio_first_window_g2_ParamLimits

0x43bd,	// (0x000671dd) popup_call2_audio_first_window_g2

0x1426,	// (0x00064246) popup_call2_audio_first_window_g3_ParamLimits

0x1426,	// (0x00064246) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0007237a) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0007237a) popup_call2_audio_first_window_g

0x449b,	// (0x000672bb) popup_call2_audio_first_window_t1_ParamLimits

0x449b,	// (0x000672bb) popup_call2_audio_first_window_t1

0x459e,	// (0x000673be) popup_call2_audio_first_window_t4_ParamLimits

0x459e,	// (0x000673be) popup_call2_audio_first_window_t4

0x4681,	// (0x000674a1) popup_call2_audio_first_window_t5_ParamLimits

0x4681,	// (0x000674a1) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00072385) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00072385) popup_call2_audio_first_window_t

0x067f,	// (0x0006349f) bg_popup_call2_act_pane_g1

0x4cf0,	// (0x00067b10) popup_cale_lunar_info_window_t1

0x4cfe,	// (0x00067b1e) popup_cale_lunar_info_window_t2

0x4d0c,	// (0x00067b2c) popup_cale_lunar_info_window_t3

0x042c,	// (0x0006324c) bg_popup_call2_bubble_pane

0x4782,	// (0x000675a2) bg_popup_call2_in_pane_cp01_ParamLimits

0x4782,	// (0x000675a2) bg_popup_call2_in_pane_cp01

0x0108,	// (0x00062f28) call_type_pane_cp02

0x47ca,	// (0x000675ea) popup_call2_audio_out_window_g1_ParamLimits

0x47ca,	// (0x000675ea) popup_call2_audio_out_window_g1

0x47f6,	// (0x00067616) popup_call2_audio_out_window_g2_ParamLimits

0x47f6,	// (0x00067616) popup_call2_audio_out_window_g2

0x481e,	// (0x0006763e) popup_call2_audio_out_window_g3_ParamLimits

0x481e,	// (0x0006763e) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0007238e) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0007238e) popup_call2_audio_out_window_g

0x4859,	// (0x00067679) popup_call2_audio_out_window_t1_ParamLimits

0x4859,	// (0x00067679) popup_call2_audio_out_window_t1

0x48b8,	// (0x000676d8) popup_call2_audio_out_window_t2_ParamLimits

0x48b8,	// (0x000676d8) popup_call2_audio_out_window_t2

0x490c,	// (0x0006772c) popup_call2_audio_out_window_t3_ParamLimits

0x490c,	// (0x0006772c) popup_call2_audio_out_window_t3

0x4922,	// (0x00067742) popup_call2_audio_out_window_t4_ParamLimits

0x4922,	// (0x00067742) popup_call2_audio_out_window_t4

0x4938,	// (0x00067758) popup_call2_audio_out_window_t5_ParamLimits

0x4938,	// (0x00067758) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00072397) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00072397) popup_call2_audio_out_window_t

0x499c,	// (0x000677bc) bg_popup_call2_in_pane_ParamLimits

0x499c,	// (0x000677bc) bg_popup_call2_in_pane

0x49f8,	// (0x00067818) popup_call2_audio_in_window_g1_ParamLimits

0x49f8,	// (0x00067818) popup_call2_audio_in_window_g1

0x4a30,	// (0x00067850) popup_call2_audio_in_window_g2_ParamLimits

0x4a30,	// (0x00067850) popup_call2_audio_in_window_g2

0x4a68,	// (0x00067888) popup_call2_audio_in_window_g3_ParamLimits

0x4a68,	// (0x00067888) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000723a4) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000723a4) popup_call2_audio_in_window_g

0x4ac0,	// (0x000678e0) popup_call2_audio_in_window_t1_ParamLimits

0x4ac0,	// (0x000678e0) popup_call2_audio_in_window_t1

0x4b40,	// (0x00067960) popup_call2_audio_in_window_t2_ParamLimits

0x4b40,	// (0x00067960) popup_call2_audio_in_window_t2

0x4bc0,	// (0x000679e0) popup_call2_audio_in_window_t3_ParamLimits

0x4bc0,	// (0x000679e0) popup_call2_audio_in_window_t3

0x4bda,	// (0x000679fa) popup_call2_audio_in_window_t4_ParamLimits

0x4bda,	// (0x000679fa) popup_call2_audio_in_window_t4

0x4bec,	// (0x00067a0c) popup_call2_audio_in_window_t5_ParamLimits

0x4bec,	// (0x00067a0c) popup_call2_audio_in_window_t5

0x4c01,	// (0x00067a21) popup_call2_audio_in_window_t6_ParamLimits

0x4c01,	// (0x00067a21) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000723ad) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000723ad) popup_call2_audio_in_window_t

0x067f,	// (0x0006349f) bg_popup_call2_in_pane_g1

0x4d1a,	// (0x00067b3a) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00072415) popup_cale_lunar_info_window_t

0x0687,	// (0x000634a7) bg_popup_call2_rect_pane_ParamLimits

0x0687,	// (0x000634a7) bg_popup_call2_rect_pane

0x042c,	// (0x0006324c) call2_cli_visual_graphic_pane

0x042c,	// (0x0006324c) call2_cli_visual_text_pane

0xa772,	// (0x0006d592) smil_status_volume_pane_g3

0x0002,

0x07f7,	// (0x00063617) call2_cli_visual_graphic_pane_g1

0x07f7,	// (0x00063617) call2_cli_visual_graphic_pane_g2

0x07f7,	// (0x00063617) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000723ba) call2_cli_visual_graphic_pane_g

0x4c16,	// (0x00067a36) bg_popup_call2_rect_pane_g1

0x089f,	// (0x000636bf) bg_popup_call2_rect_pane_g2

0x4c1e,	// (0x00067a3e) bg_popup_call2_rect_pane_g3

0x4c26,	// (0x00067a46) bg_popup_call2_rect_pane_g4

0x4c2e,	// (0x00067a4e) bg_popup_call2_rect_pane_g5

0x4c36,	// (0x00067a56) bg_popup_call2_rect_pane_g6

0x4c3e,	// (0x00067a5e) bg_popup_call2_rect_pane_g7

0x4c46,	// (0x00067a66) bg_popup_call2_rect_pane_g8

0x4c4e,	// (0x00067a6e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000723c1) bg_popup_call2_rect_pane_g

0x4c56,	// (0x00067a76) bg_popup_call2_bubble_pane_g1

0x4c5e,	// (0x00067a7e) bg_popup_call2_bubble_pane_g2

0x4c66,	// (0x00067a86) bg_popup_call2_bubble_pane_g3

0x4c6e,	// (0x00067a8e) bg_popup_call2_bubble_pane_g4

0x4c76,	// (0x00067a96) bg_popup_call2_bubble_pane_g5

0x4c7e,	// (0x00067a9e) bg_popup_call2_bubble_pane_g6

0x4c86,	// (0x00067aa6) bg_popup_call2_bubble_pane_g7

0x4c8e,	// (0x00067aae) bg_popup_call2_bubble_pane_g8

0x4c96,	// (0x00067ab6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000723d4) bg_popup_call2_bubble_pane_g

0x7e2d,	// (0x0006ac4d) aid_cale_week_size_cell_pane

0x8437,	// (0x0006b257) aid_cams_cif_uncrop_pane_ParamLimits

0x8437,	// (0x0006b257) aid_cams_cif_uncrop_pane

0x8594,	// (0x0006b3b4) aid_cams_size_cell_ParamLimits

0x8594,	// (0x0006b3b4) aid_cams_size_cell

0x85a0,	// (0x0006b3c0) grid_cams_pane_ParamLimits

0x85ae,	// (0x0006b3ce) linegrid_cams_pane_ParamLimits

0x8646,	// (0x0006b466) call_video_pane_t1

0x865c,	// (0x0006b47c) call_video_pane_t2

0x0001,

0xf2a1,	// (0x000720c1) call_video_pane_t

0x8ab6,	// (0x0006b8d6) aid_cale_month_size_cell_pane_ParamLimits

0x8ab6,	// (0x0006b8d6) aid_cale_month_size_cell_pane

0xf63e,	// (0x0007245e) smil_status_volume_pane_g

0xa77f,	// (0x0006d59f) volume_smil_pane_ParamLimits

0x75e4,	// (0x0006a404) aid_popup2_width_pane

0x7d49,	// (0x0006ab69) cell_qdial_pane_g4_ParamLimits

0x7d49,	// (0x0006ab69) cell_qdial_pane_g4

0x971d,	// (0x0006c53d) aid_blid_cardinal_pane_ParamLimits

0x972d,	// (0x0006c54d) aid_blid_destination_pane_ParamLimits

0x972d,	// (0x0006c54d) aid_blid_destination_pane

0x0687,	// (0x000634a7) bg_popup_call_poc_act_pane_ParamLimits

0x0687,	// (0x000634a7) bg_popup_call_poc_act_pane

0x0687,	// (0x000634a7) bg_popup_call_poc_inact_pane_ParamLimits

0x0687,	// (0x000634a7) bg_popup_call_poc_inact_pane

0x4c9e,	// (0x00067abe) bg_popup_call_poc_act_pane_g1

0x4ca6,	// (0x00067ac6) bg_popup_call_poc_act_pane_g2

0x4cae,	// (0x00067ace) bg_popup_call_poc_act_pane_g3

0x4c6e,	// (0x00067a8e) bg_popup_call_poc_act_pane_g4

0x4c76,	// (0x00067a96) bg_popup_call_poc_act_pane_g5

0x4cb6,	// (0x00067ad6) bg_popup_call_poc_act_pane_g6

0x4c86,	// (0x00067aa6) bg_popup_call_poc_act_pane_g7

0x4cbe,	// (0x00067ade) bg_popup_call_poc_act_pane_g8

0x042c,	// (0x0006324c) main_usb_pane

0x4e1b,	// (0x00067c3b) popup_cale_lunar_info_window

0x88f3,	// (0x0006b713) im_reading_pane_t1_ParamLimits

0x0b18,	// (0x00063938) list_im_pane_ParamLimits

0x0b29,	// (0x00063949) scroll_pane_cp07_ParamLimits

0x042c,	// (0x0006324c) grid_highlight_pane_cp012

0x0687,	// (0x000634a7) mup_scale_pane_ParamLimits

0x1426,	// (0x00064246) main_usb_pane_g1_ParamLimits

0x1426,	// (0x00064246) main_usb_pane_g1

0xa326,	// (0x0006d146) main_usb_pane_g2_ParamLimits

0xa326,	// (0x0006d146) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000723fe) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000723fe) main_usb_pane_g

0xa332,	// (0x0006d152) main_usb_pane_t1_ParamLimits

0xa332,	// (0x0006d152) main_usb_pane_t1

0xa344,	// (0x0006d164) main_usb_pane_t2_ParamLimits

0xa344,	// (0x0006d164) main_usb_pane_t2

0xa356,	// (0x0006d176) main_usb_pane_t3_ParamLimits

0xa356,	// (0x0006d176) main_usb_pane_t3

0xa368,	// (0x0006d188) main_usb_pane_t4_ParamLimits

0xa368,	// (0x0006d188) main_usb_pane_t4

0xa37a,	// (0x0006d19a) main_usb_pane_t5_ParamLimits

0xa37a,	// (0x0006d19a) main_usb_pane_t5

0xa38c,	// (0x0006d1ac) main_usb_pane_t6_ParamLimits

0xa38c,	// (0x0006d1ac) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00072403) main_usb_pane_t_ParamLimits

0x96d8,	// (0x0006c4f8) aid_text_placing

0x96e3,	// (0x0006c503) main_location2_pane_t1_ParamLimits

0x96f7,	// (0x0006c517) main_location2_pane_t2_ParamLimits

0x96f7,	// (0x0006c517) main_location2_pane_t3_ParamLimits

0x970b,	// (0x0006c52b) main_location2_pane_t4_ParamLimits

0x970b,	// (0x0006c52b) main_location2_pane_t4

0xf402,	// (0x00072222) main_location2_pane_t_ParamLimits

0x06c3,	// (0x000634e3) find_pinb_pane_g2_ParamLimits

0x06c3,	// (0x000634e3) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00071f70) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00071f70) find_pinb_pane_g

0x06cf,	// (0x000634ef) find_pinb_pane_t1_ParamLimits

0x06e1,	// (0x00063501) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00071f75) find_pinb_pane_t_ParamLimits

0x042c,	// (0x0006324c) main_call3_pane

0x8e12,	// (0x0006bc32) cale_month_day_heading_pane_t1_ParamLimits

0x8e70,	// (0x0006bc90) cale_month_day_heading_pane_t2_ParamLimits

0x8ed5,	// (0x0006bcf5) cale_month_day_heading_pane_t3_ParamLimits

0x8f3a,	// (0x0006bd5a) cale_month_day_heading_pane_t4_ParamLimits

0x8f9f,	// (0x0006bdbf) cale_month_day_heading_pane_t5_ParamLimits

0x900c,	// (0x0006be2c) cale_month_day_heading_pane_t6_ParamLimits

0x9081,	// (0x0006bea1) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000720f9) cale_month_day_heading_pane_t_ParamLimits

0x0d75,	// (0x00063b95) smil_status_volume_pane

0x9ede,	// (0x0006ccfe) postcard_address_pane_ParamLimits

0x9ede,	// (0x0006ccfe) postcard_address_pane

0x9eec,	// (0x0006cd0c) postcard_message_pane_ParamLimits

0x9eec,	// (0x0006cd0c) postcard_message_pane

0xa2f9,	// (0x0006d119) call2_cli_visual_pane_t1_ParamLimits

0xa2f9,	// (0x0006d119) call2_cli_visual_pane_t1

0xa8c5,	// (0x0006d6e5) postcard_message_pane_t1_ParamLimits

0xa8c5,	// (0x0006d6e5) postcard_message_pane_t1

0x4f09,	// (0x00067d29) postcard_address_pane_t1_ParamLimits

0x4f09,	// (0x00067d29) postcard_address_pane_t1

0xa8b6,	// (0x0006d6d6) popup_call3_audio_in_window_ParamLimits

0xa8b6,	// (0x0006d6d6) popup_call3_audio_in_window

0xa794,	// (0x0006d5b4) bg_popup_call3_in_pane_ParamLimits

0xa794,	// (0x0006d5b4) bg_popup_call3_in_pane

0xa7fc,	// (0x0006d61c) popup_call3_audio_in_window_g1_ParamLimits

0xa7fc,	// (0x0006d61c) popup_call3_audio_in_window_g1

0xa814,	// (0x0006d634) popup_call3_audio_in_window_g2_ParamLimits

0xa814,	// (0x0006d634) popup_call3_audio_in_window_g2

0xa82c,	// (0x0006d64c) popup_call3_audio_in_window_g3_ParamLimits

0xa82c,	// (0x0006d64c) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00072465) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00072465) popup_call3_audio_in_window_g

0xa854,	// (0x0006d674) popup_call3_audio_in_window_t1_ParamLimits

0xa854,	// (0x0006d674) popup_call3_audio_in_window_t1

0xa87c,	// (0x0006d69c) popup_call3_audio_in_window_t2_ParamLimits

0xa87c,	// (0x0006d69c) popup_call3_audio_in_window_t2

0xa8a4,	// (0x0006d6c4) popup_call3_audio_in_window_t3_ParamLimits

0xa8a4,	// (0x0006d6c4) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0007246e) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0007246e) popup_call3_audio_in_window_t

0x1355,	// (0x00064175) bg_popup_call3_rect_pane

0x4c16,	// (0x00067a36) bg_popup_call3_rect_pane_g1

0x089f,	// (0x000636bf) bg_popup_call3_rect_pane_g2

0x4c1e,	// (0x00067a3e) bg_popup_call3_rect_pane_g3

0x4c26,	// (0x00067a46) bg_popup_call3_rect_pane_g4

0x4c2e,	// (0x00067a4e) bg_popup_call3_rect_pane_g5

0x4c36,	// (0x00067a56) bg_popup_call3_rect_pane_g6

0x4c3e,	// (0x00067a5e) bg_popup_call3_rect_pane_g7

0x9b3d,	// (0x0006c95d) mup_visualizer_osc_pane

0x1434,	// (0x00064254) mup_visualizer_spec_pane

0xa7b4,	// (0x0006d5d4) call3_video_qcif_pane_ParamLimits

0xa7b4,	// (0x0006d5d4) call3_video_qcif_pane

0xa7c6,	// (0x0006d5e6) call3_video_qcif_uncrop_pane_ParamLimits

0xa7c6,	// (0x0006d5e6) call3_video_qcif_uncrop_pane

0xa7d6,	// (0x0006d5f6) call3_video_subqcif_pane_ParamLimits

0xa7d6,	// (0x0006d5f6) call3_video_subqcif_pane

0xa7ea,	// (0x0006d60a) call3_video_subqcif_uncrop_pane_ParamLimits

0xa7ea,	// (0x0006d60a) call3_video_subqcif_uncrop_pane

0xa844,	// (0x0006d664) popup_call3_audio_in_window_g4_ParamLimits

0xa844,	// (0x0006d664) popup_call3_audio_in_window_g4

0xa761,	// (0x0006d581) mup_spec_half_pane

0xa76a,	// (0x0006d58a) mup_spec_half_pane_cp

0x4ec9,	// (0x00067ce9) mup_osc_middle_pane

0x4ed2,	// (0x00067cf2) mup_visualizer_osc_pane_g1

0xa741,	// (0x0006d561) mup_spec_bar_pane_ParamLimits

0xa741,	// (0x0006d561) mup_spec_bar_pane

0x4eb6,	// (0x00067cd6) mup_spec_bar_pane_g1

0x4ec0,	// (0x00067ce0) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00072459) mup_spec_bar_pane_g

0x7e2d,	// (0x0006ac4d) aid_cale_week_size_cell_pane_ParamLimits

0x7e40,	// (0x0006ac60) bg_cale_heading_pane_ParamLimits

0x091b,	// (0x0006373b) bg_cale_pane_cp01_ParamLimits

0x7e54,	// (0x0006ac74) cale_week_corner_pane_ParamLimits

0x7e6a,	// (0x0006ac8a) cale_week_day_heading_pane_ParamLimits

0x7e7e,	// (0x0006ac9e) cale_week_scroll_pane_g1_ParamLimits

0x7e8f,	// (0x0006acaf) cale_week_scroll_pane_g2_ParamLimits

0x7ea0,	// (0x0006acc0) cale_week_scroll_pane_g3_ParamLimits

0x7eb1,	// (0x0006acd1) cale_week_scroll_pane_g4_ParamLimits

0x7ec2,	// (0x0006ace2) cale_week_scroll_pane_g5_ParamLimits

0x7ed3,	// (0x0006acf3) cale_week_scroll_pane_g6_ParamLimits

0x7ee6,	// (0x0006ad06) cale_week_scroll_pane_g7_ParamLimits

0x7ef9,	// (0x0006ad19) cale_week_scroll_pane_g8_ParamLimits

0x7f0c,	// (0x0006ad2c) cale_week_scroll_pane_g9_ParamLimits

0x7f1d,	// (0x0006ad3d) cale_week_scroll_pane_g10_ParamLimits

0x7f2e,	// (0x0006ad4e) cale_week_scroll_pane_g11_ParamLimits

0x7f3f,	// (0x0006ad5f) cale_week_scroll_pane_g12_ParamLimits

0x7f50,	// (0x0006ad70) cale_week_scroll_pane_g13_ParamLimits

0x7f61,	// (0x0006ad81) cale_week_scroll_pane_g14_ParamLimits

0x7f72,	// (0x0006ad92) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00072001) cale_week_scroll_pane_g_ParamLimits

0x7f83,	// (0x0006ada3) cale_week_time_pane_ParamLimits

0x7f96,	// (0x0006adb6) grid_cale_week_pane_ParamLimits

0x0934,	// (0x00063754) listscroll_cale_week_pane_t1

0x7fab,	// (0x0006adcb) scroll_pane_cp08_ParamLimits

0x8af7,	// (0x0006b917) cale_month_corner_pane_ParamLimits

0x0d3f,	// (0x00063b5f) cale_month_pane_t1

0x8dd1,	// (0x0006bbf1) cale_month_week_pane_ParamLimits

0x1426,	// (0x00064246) popup_call_status_window_g1_ParamLimits

0x94ea,	// (0x0006c30a) popup_call_status_window_g2_ParamLimits

0x94f6,	// (0x0006c316) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x000721a9) popup_call_status_window_g_ParamLimits

0x1090,	// (0x00063eb0) aid_call2_pane

0x6776,	// (0x00069596) msg_header_pane_g1

0x9ede,	// (0x0006ccfe) postcard_address2_pane_ParamLimits

0x9ede,	// (0x0006ccfe) postcard_address2_pane

0x9eec,	// (0x0006cd0c) postcard_message2_pane_ParamLimits

0x9eec,	// (0x0006cd0c) postcard_message2_pane

0xa6fb,	// (0x0006d51b) message2_row_pane_ParamLimits

0xa6fb,	// (0x0006d51b) message2_row_pane

0x4e71,	// (0x00067c91) address2_row_pane_ParamLimits

0x4e71,	// (0x00067c91) address2_row_pane

0x4e84,	// (0x00067ca4) postcard_message2_row_pane_g1

0x4e8c,	// (0x00067cac) postcard_message2_row_pane_t1

0x4e84,	// (0x00067ca4) address2_row_pane_g1

0x4e8c,	// (0x00067cac) address2_row_pane_t1

0x82f5,	// (0x0006b115) aid_size_cell_vorec

0x042c,	// (0x0006324c) main_rss_pane

0xa715,	// (0x0006d535) rss_list_single_pane_ParamLimits

0xa715,	// (0x0006d535) rss_list_single_pane

0x4e9a,	// (0x00067cba) rss_list_single_pane_t1

0x4ea8,	// (0x00067cc8) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00072454) rss_list_single_pane_t

0x042c,	// (0x0006324c) main_camera2_pane

0x042c,	// (0x0006324c) main_video2_pane

0xa929,	// (0x0006d749) cams_zoom_pane_cp2_ParamLimits

0xa929,	// (0x0006d749) cams_zoom_pane_cp2

0xa935,	// (0x0006d755) image2_vga_pane_ParamLimits

0xa935,	// (0x0006d755) image2_vga_pane

0xa944,	// (0x0006d764) main_camera2_pane_g1_ParamLimits

0xa944,	// (0x0006d764) main_camera2_pane_g1

0xa950,	// (0x0006d770) main_camera2_pane_g2_ParamLimits

0xa950,	// (0x0006d770) main_camera2_pane_g2

0xa95c,	// (0x0006d77c) main_camera2_pane_g3_ParamLimits

0xa95c,	// (0x0006d77c) main_camera2_pane_g3

0xa968,	// (0x0006d788) main_camera2_pane_g4_ParamLimits

0xa968,	// (0x0006d788) main_camera2_pane_g4

0xa974,	// (0x0006d794) main_camera2_pane_g5_ParamLimits

0xa974,	// (0x0006d794) main_camera2_pane_g5

0xa980,	// (0x0006d7a0) main_camera2_pane_g6_ParamLimits

0xa980,	// (0x0006d7a0) main_camera2_pane_g6

0xa98c,	// (0x0006d7ac) main_camera2_pane_g7_ParamLimits

0xa98c,	// (0x0006d7ac) main_camera2_pane_g7

0xa998,	// (0x0006d7b8) main_camera2_pane_g8_ParamLimits

0xa998,	// (0x0006d7b8) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00072475) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00072475) main_camera2_pane_g

0xa9b0,	// (0x0006d7d0) main_camera2_pane_t1_ParamLimits

0xa9b0,	// (0x0006d7d0) main_camera2_pane_t1

0xa9c2,	// (0x0006d7e2) main_camera2_pane_t2_ParamLimits

0xa9c2,	// (0x0006d7e2) main_camera2_pane_t2

0xa9d4,	// (0x0006d7f4) main_camera2_pane_t3_ParamLimits

0xa9d4,	// (0x0006d7f4) main_camera2_pane_t3

0xa9e6,	// (0x0006d806) main_camera2_pane_t4_ParamLimits

0xa9e6,	// (0x0006d806) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00072488) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00072488) main_camera2_pane_t

0xaa43,	// (0x0006d863) cams_zoom_pane_cp4_ParamLimits

0xaa43,	// (0x0006d863) cams_zoom_pane_cp4

0xaa53,	// (0x0006d873) image2_cif_pane_ParamLimits

0xaa53,	// (0x0006d873) image2_cif_pane

0xaa68,	// (0x0006d888) image2_subqcif_pane_ParamLimits

0xaa68,	// (0x0006d888) image2_subqcif_pane

0xaa77,	// (0x0006d897) main_video2_pane_g1_ParamLimits

0xaa77,	// (0x0006d897) main_video2_pane_g1

0xaa89,	// (0x0006d8a9) main_video2_pane_g2_ParamLimits

0xaa89,	// (0x0006d8a9) main_video2_pane_g2

0xaa99,	// (0x0006d8b9) main_video2_pane_g3_ParamLimits

0xaa99,	// (0x0006d8b9) main_video2_pane_g3

0xaaa9,	// (0x0006d8c9) main_video2_pane_g4_ParamLimits

0xaaa9,	// (0x0006d8c9) main_video2_pane_g4

0xaab9,	// (0x0006d8d9) main_video2_pane_g5_ParamLimits

0xaab9,	// (0x0006d8d9) main_video2_pane_g5

0xaac9,	// (0x0006d8e9) main_video2_pane_g6_ParamLimits

0xaac9,	// (0x0006d8e9) main_video2_pane_g6

0x0005,

0xf677,	// (0x00072497) main_video2_pane_g_ParamLimits

0xf677,	// (0x00072497) main_video2_pane_g

0xaadb,	// (0x0006d8fb) main_video2_pane_t1_ParamLimits

0xaadb,	// (0x0006d8fb) main_video2_pane_t1

0xaaf5,	// (0x0006d915) main_video2_pane_t2_ParamLimits

0xaaf5,	// (0x0006d915) main_video2_pane_t2

0xab1b,	// (0x0006d93b) main_video2_pane_t3_ParamLimits

0xab1b,	// (0x0006d93b) main_video2_pane_t3

0x0002,

0xf684,	// (0x000724a4) main_video2_pane_t_ParamLimits

0xf684,	// (0x000724a4) main_video2_pane_t

0xa443,	// (0x0006d263) call_muted_g2

0x0001,

0xf626,	// (0x00072446) call_muted_g

0x042c,	// (0x0006324c) main_mup2_pane

0x4f4e,	// (0x00067d6e) main_mup2_pane_g1_ParamLimits

0x4f4e,	// (0x00067d6e) main_mup2_pane_g1

0xab41,	// (0x0006d961) main_mup2_pane_g2_ParamLimits

0xab41,	// (0x0006d961) main_mup2_pane_g2

0xadd3,	// (0x0006dbf3) main_mup_pane_g13_cp1

0xaddb,	// (0x0006dbfb) mup_volume_pane_cp1

0xab63,	// (0x0006d983) main_mup2_pane_g4_ParamLimits

0xab63,	// (0x0006d983) main_mup2_pane_g4

0xab78,	// (0x0006d998) main_mup2_pane_g5_ParamLimits

0xab78,	// (0x0006d998) main_mup2_pane_g5

0xab8d,	// (0x0006d9ad) main_mup2_pane_g6_ParamLimits

0xab8d,	// (0x0006d9ad) main_mup2_pane_g6

0xaba2,	// (0x0006d9c2) main_mup2_pane_g7_ParamLimits

0xaba2,	// (0x0006d9c2) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000724ab) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000724ab) main_mup2_pane_g

0xabbe,	// (0x0006d9de) main_mup2_pane_t1_ParamLimits

0xabbe,	// (0x0006d9de) main_mup2_pane_t1

0xabd5,	// (0x0006d9f5) main_mup2_pane_t2_ParamLimits

0xabd5,	// (0x0006d9f5) main_mup2_pane_t2

0xabec,	// (0x0006da0c) main_mup2_pane_t3_ParamLimits

0xabec,	// (0x0006da0c) main_mup2_pane_t3

0xac03,	// (0x0006da23) main_mup2_pane_t4_ParamLimits

0xac03,	// (0x0006da23) main_mup2_pane_t4

0xac1d,	// (0x0006da3d) main_mup2_pane_t5_ParamLimits

0xac1d,	// (0x0006da3d) main_mup2_pane_t5

0xac37,	// (0x0006da57) main_mup2_pane_t6_ParamLimits

0xac37,	// (0x0006da57) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000724ba) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000724ba) main_mup2_pane_t

0xac6f,	// (0x0006da8f) mup2_visualizer_pane_ParamLimits

0xac6f,	// (0x0006da8f) mup2_visualizer_pane

0xaca5,	// (0x0006dac5) mup_progress_pane_cp_ParamLimits

0xaca5,	// (0x0006dac5) mup_progress_pane_cp

0xadbe,	// (0x0006dbde) mup_volume_pane_cp_ParamLimits

0xadbe,	// (0x0006dbde) mup_volume_pane_cp

0xacbe,	// (0x0006dade) mup2_visualizer_pane_g1_ParamLimits

0xacbe,	// (0x0006dade) mup2_visualizer_pane_g1

0x4f20,	// (0x00067d40) mup2_visualizer_pane_g2_ParamLimits

0x4f20,	// (0x00067d40) mup2_visualizer_pane_g2

0xacd3,	// (0x0006daf3) mup2_visualizer_pane_g3_ParamLimits

0xacd3,	// (0x0006daf3) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000724c7) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000724c7) mup2_visualizer_pane_g

0x169f,	// (0x000644bf) aid_size_cell_fmradio

0xa559,	// (0x0006d379) aid_height_parent_landcape

0x0ba7,	// (0x000639c7) wml_content_pane_cp

0x0baf,	// (0x000639cf) wml_tabs_pane

0x0bb8,	// (0x000639d8) popup_wml_miniature_window

0x0bc0,	// (0x000639e0) scroll_pane_cp021

0x0bd4,	// (0x000639f4) wml_content_pane_comp8

0x042c,	// (0x0006324c) bg_popup_sub_pane_cp05

0x4f3e,	// (0x00067d5e) popup_wml_miniature_window_g1

0x4f46,	// (0x00067d66) wml_miniature_view_pane

0xace1,	// (0x0006db01) aid_size_wml_view

0xace9,	// (0x0006db09) wml_miniature_view_pane_g1

0xacf2,	// (0x0006db12) wml_miniature_view_pane_g2

0xacfb,	// (0x0006db1b) wml_miniature_view_pane_g3

0xad03,	// (0x0006db23) wml_miniature_view_pane_g4

0xad0b,	// (0x0006db2b) wml_miniature_view_pane_g5

0xad13,	// (0x0006db33) wml_miniature_view_pane_g6

0xad1b,	// (0x0006db3b) wml_miniature_view_pane_g7

0xad23,	// (0x0006db43) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000724ce) wml_miniature_view_pane_g

0x4f4e,	// (0x00067d6e) background_graphic_ParamLimits

0x4f4e,	// (0x00067d6e) background_graphic

0x4f5a,	// (0x00067d7a) wml_tabs_2_pane

0x4f63,	// (0x00067d83) wml_tabs_3_pane_ParamLimits

0x4f63,	// (0x00067d83) wml_tabs_3_pane

0x4f75,	// (0x00067d95) wml_tabs_4_pane_ParamLimits

0x4f75,	// (0x00067d95) wml_tabs_4_pane

0x4f8b,	// (0x00067dab) wml_tabs_5_pane_ParamLimits

0x4f8b,	// (0x00067dab) wml_tabs_5_pane

0x4fa5,	// (0x00067dc5) wml_tabs_pane_g2_ParamLimits

0x4fa5,	// (0x00067dc5) wml_tabs_pane_g2

0x4fb9,	// (0x00067dd9) wml_tabs_pane_g3_ParamLimits

0x4fb9,	// (0x00067dd9) wml_tabs_pane_g3

0xad2b,	// (0x0006db4b) wml_tabs_2_active_pane_ParamLimits

0xad2b,	// (0x0006db4b) wml_tabs_2_active_pane

0xad3d,	// (0x0006db5d) wml_tabs_2_passive_pane_ParamLimits

0xad3d,	// (0x0006db5d) wml_tabs_2_passive_pane

0xad4f,	// (0x0006db6f) wml_tabs_3_active_pane_cp_ParamLimits

0xad4f,	// (0x0006db6f) wml_tabs_3_active_pane_cp

0xad62,	// (0x0006db82) wml_tabs_3_passive_pane_ParamLimits

0xad62,	// (0x0006db82) wml_tabs_3_passive_pane

0xad73,	// (0x0006db93) wml_tabs_3_passive_pane_cp_ParamLimits

0xad73,	// (0x0006db93) wml_tabs_3_passive_pane_cp

0xad88,	// (0x0006dba8) tabs_4_active_pane

0xad90,	// (0x0006dbb0) tabs_4_passive_pane

0xad98,	// (0x0006dbb8) tabs_4_passive_pane_cp

0xada0,	// (0x0006dbc0) tabs_4_passive_pane_cp2

0xa31e,	// (0x0006d13e) aid_height_text

0x9b06,	// (0x0006c926) mup_volume_cont_pane_ParamLimits

0x9b06,	// (0x0006c926) mup_volume_cont_pane

0x79ac,	// (0x0006a7cc) aid_size_cell_pinb

0x79b6,	// (0x0006a7d6) aid_size_list_pinb

0xac8e,	// (0x0006daae) mup2_volume_cont_pane_ParamLimits

0xac8e,	// (0x0006daae) mup2_volume_cont_pane

0xadaa,	// (0x0006dbca) mup2_volume_cont_pane_g1_ParamLimits

0xadaa,	// (0x0006dbca) mup2_volume_cont_pane_g1

0x75f0,	// (0x0006a410) aid_size_cell_touch_ParamLimits

0x75f0,	// (0x0006a410) aid_size_cell_touch

0x7893,	// (0x0006a6b3) touch_pane_ParamLimits

0x7893,	// (0x0006a6b3) touch_pane

0x75d2,	// (0x0006a3f2) main_rss2_pane

0x4fd6,	// (0x00067df6) listscroll_rss2_pane

0x4fdf,	// (0x00067dff) rss2_navigation_pane

0x4fe7,	// (0x00067e07) list_rss2_pane

0x121b,	// (0x0006403b) scroll_pane_cp22

0x4fef,	// (0x00067e0f) rss2_navigation_pane_g1

0x4ff8,	// (0x00067e18) rss2_navigation_pane_g2

0x5000,	// (0x00067e20) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000724df) rss2_navigation_pane_g

0x5008,	// (0x00067e28) rss2_navigation_pane_t1

0xade3,	// (0x0006dc03) rss2_list_single_pane_ParamLimits

0xade3,	// (0x0006dc03) rss2_list_single_pane

0x5016,	// (0x00067e36) rss2_list_single_pane_t2

0x5024,	// (0x00067e44) rss2_list_single_pane_t3_ParamLimits

0x5024,	// (0x00067e44) rss2_list_single_pane_t3

0x5041,	// (0x00067e61) rss2_list_single_pane_t4

0x92f9,	// (0x0006c119) smil_status_pane_g1

0x000b,	// (0x00062e2b) main_image2_pane_ParamLimits

0x000b,	// (0x00062e2b) main_image2_pane

0xa9a4,	// (0x0006d7c4) main_camera2_pane_g9_ParamLimits

0xa9a4,	// (0x0006d7c4) main_camera2_pane_g9

0xa9f8,	// (0x0006d818) main_camera2_pane_t5_ParamLimits

0xa9f8,	// (0x0006d818) main_camera2_pane_t5

0xaa0a,	// (0x0006d82a) main_camera2_pane_t6_ParamLimits

0xaa0a,	// (0x0006d82a) main_camera2_pane_t6

0xae09,	// (0x0006dc29) main_image2_pane_g1_ParamLimits

0xae09,	// (0x0006dc29) main_image2_pane_g1

0xa0b8,	// (0x0006ced8) smil2_video_pane_ParamLimits

0xa0b8,	// (0x0006ced8) smil2_video_pane

0x64fc,	// (0x0006931c) aid_zoom_text_primary_cp

0x0001,	// (0x00062e21) popup_preview_fixed_window

0x0b10,	// (0x00063930) im_reading_pane_g1

0xa8ee,	// (0x0006d70e) cams2_bc_adjust_pane_cp_ParamLimits

0xa8ee,	// (0x0006d70e) cams2_bc_adjust_pane_cp

0xaa35,	// (0x0006d855) cams2_bc_adjust_pane_ParamLimits

0xaa35,	// (0x0006d855) cams2_bc_adjust_pane

0xae15,	// (0x0006dc35) cams2_bc_adjust_pane_g1

0xae1d,	// (0x0006dc3d) cams2_slider_pane

0xae26,	// (0x0006dc46) cams2_slider_pane_g1

0xae2f,	// (0x0006dc4f) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000724e6) cams2_slider_pane_g

0x7aa9,	// (0x0006a8c9) calc_display_pane_ParamLimits

0x7ac7,	// (0x0006a8e7) calc_paper_pane_ParamLimits

0x7ae3,	// (0x0006a903) grid_calc_pane_ParamLimits

0x9554,	// (0x0006c374) popup_clock_digital_window_t1_ParamLimits

0x163c,	// (0x0006445c) main_image_pane_t1

0x7a8f,	// (0x0006a8af) aid_size_cell_calc_ParamLimits

0x7a8f,	// (0x0006a8af) aid_size_cell_calc

0xa58b,	// (0x0006d3ab) popup_blid_sat_info2_window_ParamLimits

0xa58b,	// (0x0006d3ab) popup_blid_sat_info2_window

0x5057,	// (0x00067e77) aid_size_cell_blid

0x505f,	// (0x00067e7f) bg_popup_window_pane_cp07

0x5082,	// (0x00067ea2) grid_popup_blid_pane

0x508c,	// (0x00067eac) heading_pane_cp05_ParamLimits

0x508c,	// (0x00067eac) heading_pane_cp05

0x5156,	// (0x00067f76) cell_popup_blid_pane_ParamLimits

0x5156,	// (0x00067f76) cell_popup_blid_pane

0x5180,	// (0x00067fa0) cell_popup_blid_pane_g1

0x5188,	// (0x00067fa8) cell_popup_blid_pane_t1

0xac54,	// (0x0006da74) mup2_indicator_pane_ParamLimits

0xac54,	// (0x0006da74) mup2_indicator_pane

0x1355,	// (0x00064175) mup2_visualizer_osc_pane

0x4f2c,	// (0x00067d4c) mup2_visualizer_spec_pane_ParamLimits

0x4f2c,	// (0x00067d4c) mup2_visualizer_spec_pane

0xae49,	// (0x0006dc69) mup2_spec_half_pane

0xae52,	// (0x0006dc72) mup2_spec_half_pane_cp

0xae5c,	// (0x0006dc7c) mup2_spec_bar_pane_ParamLimits

0xae5c,	// (0x0006dc7c) mup2_spec_bar_pane

0x4eb6,	// (0x00067cd6) mup2_spec_bar_pane_g1

0x4ec0,	// (0x00067ce0) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00072459) mup2_spec_bar_pane_g

0xae7b,	// (0x0006dc9b) mup2_osc_middle_pane

0x4ed2,	// (0x00067cf2) mup2_visualizer_osc_pane_g1

0x0039,	// (0x00062e59) popup_number_entry_window_t1_ParamLimits

0x004c,	// (0x00062e6c) popup_number_entry_window_t2_ParamLimits

0x005e,	// (0x00062e7e) popup_number_entry_window_t3_ParamLimits

0x78ea,	// (0x0006a70a) popup_number_entry_window_t5_ParamLimits

0x78ea,	// (0x0006a70a) popup_number_entry_window_t5

0xf0fb,	// (0x00071f1b) popup_number_entry_window_t_ParamLimits

0x0070,	// (0x00062e90) text_title_cp2_ParamLimits

0x9da2,	// (0x0006cbc2) aid_hotspot_pointer_text2_pane

0x9e3c,	// (0x0006cc5c) main_viewer_pane_g9_ParamLimits

0x9e3c,	// (0x0006cc5c) main_viewer_pane_g9

0x0d3f,	// (0x00063b5f) cale_month_pane_t1_ParamLimits

0x0daa,	// (0x00063bca) bg_cale_pane_ParamLimits

0x0dc2,	// (0x00063be2) list_cale_pane_ParamLimits

0x0934,	// (0x00063754) listscroll_cale_day_pane_t1

0x0dd3,	// (0x00063bf3) scroll_pane_cp09_ParamLimits

0x9b45,	// (0x0006c965) main_mup_eq_pane_t1_ParamLimits

0x9b45,	// (0x0006c965) main_mup_eq_pane_t1

0x9b61,	// (0x0006c981) main_mup_eq_pane_t2_ParamLimits

0x9b61,	// (0x0006c981) main_mup_eq_pane_t2

0x9b7d,	// (0x0006c99d) main_mup_eq_pane_t3_ParamLimits

0x9b7d,	// (0x0006c99d) main_mup_eq_pane_t3

0x9b97,	// (0x0006c9b7) main_mup_eq_pane_t4_ParamLimits

0x9b97,	// (0x0006c9b7) main_mup_eq_pane_t4

0x9bb1,	// (0x0006c9d1) main_mup_eq_pane_t5_ParamLimits

0x9bb1,	// (0x0006c9d1) main_mup_eq_pane_t5

0x9bcb,	// (0x0006c9eb) main_mup_eq_pane_t6_ParamLimits

0x9bcb,	// (0x0006c9eb) main_mup_eq_pane_t6

0x9be1,	// (0x0006ca01) main_mup_eq_pane_t7_ParamLimits

0x9be1,	// (0x0006ca01) main_mup_eq_pane_t7

0x9bf7,	// (0x0006ca17) main_mup_eq_pane_t8_ParamLimits

0x9bf7,	// (0x0006ca17) main_mup_eq_pane_t8

0x9c0d,	// (0x0006ca2d) main_mup_eq_pane_t9_ParamLimits

0x9c0d,	// (0x0006ca2d) main_mup_eq_pane_t9

0x9c29,	// (0x0006ca49) main_mup_eq_pane_t10_ParamLimits

0x9c29,	// (0x0006ca49) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000722a8) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000722a8) main_mup_eq_pane_t

0x9cee,	// (0x0006cb0e) mup_equalizer_pane_cp5_ParamLimits

0x9d06,	// (0x0006cb26) mup_equalizer_pane_cp6_ParamLimits

0x9d1e,	// (0x0006cb3e) mup_equalizer_pane_cp7_ParamLimits

0x75d2,	// (0x0006a3f2) main_gallery_pane

0x4edb,	// (0x00067cfb) smil2_volume_pane

0x4ef6,	// (0x00067d16) smil_status_volume_pane_g1_ParamLimits

0x4ee3,	// (0x00067d03) smil_status_volume_pane_g2_ParamLimits

0xa772,	// (0x0006d592) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0007245e) smil_status_volume_pane_g_ParamLimits

0x505f,	// (0x00067e7f) bg_popup_window_pane_cp07_ParamLimits

0x506d,	// (0x00067e8d) blid_firmament_pane

0xae84,	// (0x0006dca4) aid_size_cell_gallery_ParamLimits

0xae84,	// (0x0006dca4) aid_size_cell_gallery

0xae92,	// (0x0006dcb2) grid_gallery_pane_ParamLimits

0xae92,	// (0x0006dcb2) grid_gallery_pane

0xaea2,	// (0x0006dcc2) cell_gallery_pane_ParamLimits

0xaea2,	// (0x0006dcc2) cell_gallery_pane

0x5196,	// (0x00067fb6) bg_cell_gallery_focus_pane_ParamLimits

0x5196,	// (0x00067fb6) bg_cell_gallery_focus_pane

0x51a8,	// (0x00067fc8) cell_gallery_pane_g1_ParamLimits

0x51a8,	// (0x00067fc8) cell_gallery_pane_g1

0xaef0,	// (0x0006dd10) cell_gallery_pane_g2_ParamLimits

0xaef0,	// (0x0006dd10) cell_gallery_pane_g2

0xaefd,	// (0x0006dd1d) cell_gallery_pane_g3_ParamLimits

0xaefd,	// (0x0006dd1d) cell_gallery_pane_g3

0x51b4,	// (0x00067fd4) cell_gallery_pane_g4_ParamLimits

0x51b4,	// (0x00067fd4) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0007250c) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0007250c) cell_gallery_pane_g

0x51c0,	// (0x00067fe0) bg_cell_gallery_focus_pane_g1

0x51c8,	// (0x00067fe8) bg_cell_gallery_focus_pane_g2

0x51d0,	// (0x00067ff0) bg_cell_gallery_focus_pane_g3

0x51d8,	// (0x00067ff8) bg_cell_gallery_focus_pane_g4

0x51e0,	// (0x00068000) bg_cell_gallery_focus_pane_g5

0x51e8,	// (0x00068008) bg_cell_gallery_focus_pane_g6

0x51f0,	// (0x00068010) bg_cell_gallery_focus_pane_g7

0x51f8,	// (0x00068018) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00072515) bg_cell_gallery_focus_pane_g

0x5200,	// (0x00068020) aid_firma_cardinal

0x5214,	// (0x00068034) blid_firmament_pane_t1

0x522b,	// (0x0006804b) blid_firmament_pane_t2

0x5242,	// (0x00068062) blid_firmament_pane_t3

0x5259,	// (0x00068079) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00072526) blid_firmament_pane_t

0x5270,	// (0x00068090) blid_sat_info_pane

0x5280,	// (0x000680a0) blid_sat_info_pane_g1

0x5280,	// (0x000680a0) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0007252f) blid_sat_info_pane_g

0x528a,	// (0x000680aa) blid_sat_info_pane_t1

0x5298,	// (0x000680b8) smil2_volume_content_pane

0x52a1,	// (0x000680c1) smil2_volume_pane_g1

0x52a9,	// (0x000680c9) smil2_volume_content_pane_g1

0x52b2,	// (0x000680d2) smil2_volume_content_pane_g2

0x52bb,	// (0x000680db) smil2_volume_content_pane_g3

0x52c4,	// (0x000680e4) smil2_volume_content_pane_g4

0x52cd,	// (0x000680ed) smil2_volume_content_pane_g5

0x52d6,	// (0x000680f6) smil2_volume_content_pane_g6

0x52df,	// (0x000680ff) smil2_volume_content_pane_g7

0x52e8,	// (0x00068108) smil2_volume_content_pane_g8

0x52f1,	// (0x00068111) smil2_volume_content_pane_g9

0x52fa,	// (0x0006811a) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00072534) smil2_volume_content_pane_g

0x8003,	// (0x0006ae23) cale_week_day_heading_pane_t1_ParamLimits

0x8030,	// (0x0006ae50) cale_week_day_heading_pane_t2_ParamLimits

0x805d,	// (0x0006ae7d) cale_week_day_heading_pane_t3_ParamLimits

0x808a,	// (0x0006aeaa) cale_week_day_heading_pane_t4_ParamLimits

0x80b7,	// (0x0006aed7) cale_week_day_heading_pane_t5_ParamLimits

0x80e4,	// (0x0006af04) cale_week_day_heading_pane_t6_ParamLimits

0x8111,	// (0x0006af31) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00072020) cale_week_day_heading_pane_t_ParamLimits

0x0946,	// (0x00063766) bg_cale_side_pane_ParamLimits

0x813e,	// (0x0006af5e) cale_week_time_pane_t1_ParamLimits

0x816a,	// (0x0006af8a) cale_week_time_pane_t2_ParamLimits

0x8196,	// (0x0006afb6) cale_week_time_pane_t3_ParamLimits

0x81c2,	// (0x0006afe2) cale_week_time_pane_t4_ParamLimits

0x81ee,	// (0x0006b00e) cale_week_time_pane_t5_ParamLimits

0x821a,	// (0x0006b03a) cale_week_time_pane_t6_ParamLimits

0x8246,	// (0x0006b066) cale_week_time_pane_t7_ParamLimits

0x8272,	// (0x0006b092) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0007202f) cale_week_time_pane_t_ParamLimits

0x829e,	// (0x0006b0be) cell_cale_week_pane_g2_ParamLimits

0x0946,	// (0x00063766) bg_cale_side_pane_cp01_ParamLimits

0x90f6,	// (0x0006bf16) cale_month_week_pane_t1_ParamLimits

0x9121,	// (0x0006bf41) cale_month_week_pane_t2_ParamLimits

0x914c,	// (0x0006bf6c) cale_month_week_pane_t3_ParamLimits

0x9177,	// (0x0006bf97) cale_month_week_pane_t4_ParamLimits

0x91a2,	// (0x0006bfc2) cale_month_week_pane_t5_ParamLimits

0x91cd,	// (0x0006bfed) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00072108) cale_month_week_pane_t_ParamLimits

0x92c6,	// (0x0006c0e6) cell_cale_month_pane_g1_ParamLimits

0x75d2,	// (0x0006a3f2) main_cale_event_viewer_pane

0x75d2,	// (0x0006a3f2) listscroll_cale_event_viewer_pane

0x5303,	// (0x00068123) list_cale_ev_pane

0x530b,	// (0x0006812b) scroll_pane_cp023

0xaf0a,	// (0x0006dd2a) field_cale_ev_pane_ParamLimits

0xaf0a,	// (0x0006dd2a) field_cale_ev_pane

0x5317,	// (0x00068137) field_cale_ev_content_pane_ParamLimits

0x5317,	// (0x00068137) field_cale_ev_content_pane

0x5323,	// (0x00068143) field_cale_ev_pane_g1_ParamLimits

0x5323,	// (0x00068143) field_cale_ev_pane_g1

0x532f,	// (0x0006814f) field_cale_ev_pane_g2_ParamLimits

0x532f,	// (0x0006814f) field_cale_ev_pane_g2

0x5347,	// (0x00068167) field_cale_ev_pane_g3_ParamLimits

0x5347,	// (0x00068167) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00072549) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00072549) field_cale_ev_pane_g

0x535f,	// (0x0006817f) field_cale_ev_pane_t1_ParamLimits

0x535f,	// (0x0006817f) field_cale_ev_pane_t1

0xaf2e,	// (0x0006dd4e) field_cale_ev_content_pane_t1_ParamLimits

0xaf2e,	// (0x0006dd4e) field_cale_ev_content_pane_t1

0x14e0,	// (0x00064300) bg_button_pane_cp01

0x077e,	// (0x0006359e) listscroll_cale_week_pane_ParamLimits

0x7e23,	// (0x0006ac43) popup_toolbar_window_cp01

0x0934,	// (0x00063754) listscroll_cale_week_pane_t1_ParamLimits

0x077e,	// (0x0006359e) listscroll_cale_day_pane_ParamLimits

0x7e23,	// (0x0006ac43) popup_toolbar_window_cp02

0x0934,	// (0x00063754) listscroll_cale_day_pane_t1_ParamLimits

0x077e,	// (0x0006359e) main_cale_month_pane_ParamLimits

0xa66f,	// (0x0006d48f) popup_toolbar_window_cp03_ParamLimits

0xa66f,	// (0x0006d48f) popup_toolbar_window_cp03

0x9fc8,	// (0x0006cde8) main_image_pane_g2_ParamLimits

0x9fc8,	// (0x0006cde8) main_image_pane_g2

0x9fd4,	// (0x0006cdf4) main_image_pane_g3_ParamLimits

0x9fd4,	// (0x0006cdf4) main_image_pane_g3

0x0002,

0xf51a,	// (0x0007233a) main_image_pane_g_ParamLimits

0xf51a,	// (0x0007233a) main_image_pane_g

0x163c,	// (0x0006445c) main_image_pane_t1_ParamLimits

0x9fe0,	// (0x0006ce00) main_image_pane_t2_ParamLimits

0x9fe0,	// (0x0006ce00) main_image_pane_t2

0x9ff2,	// (0x0006ce12) main_image_pane_t3_ParamLimits

0x9ff2,	// (0x0006ce12) main_image_pane_t3

0xa004,	// (0x0006ce24) main_image_pane_t4_ParamLimits

0xa004,	// (0x0006ce24) main_image_pane_t4

0x0003,

0xf521,	// (0x00072341) main_image_pane_t_ParamLimits

0xf521,	// (0x00072341) main_image_pane_t

0xa016,	// (0x0006ce36) popup_image_details_window_cp01

0xa020,	// (0x0006ce40) popup_toobar_trans_pane_cp01_ParamLimits

0xa020,	// (0x0006ce40) popup_toobar_trans_pane_cp01

0xa5e0,	// (0x0006d400) popup_image_details_window_ParamLimits

0xa5e0,	// (0x0006d400) popup_image_details_window

0x4e27,	// (0x00067c47) popup_image_focus_window

0xa8e0,	// (0x0006d700) camera2_autofocus_pane_ParamLimits

0xa8e0,	// (0x0006d700) camera2_autofocus_pane

0x75d2,	// (0x0006a3f2) bg_popup_sub_pane_cp06

0x5376,	// (0x00068196) popup_image_focus_window_g1

0x537e,	// (0x0006819e) popup_image_focus_window_g2

0x5386,	// (0x000681a6) popup_image_focus_window_g3

0x538e,	// (0x000681ae) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00072550) popup_image_focus_window_g

0x5396,	// (0x000681b6) popup_image_focus_window_t1

0x53a4,	// (0x000681c4) popup_image_focus_window_t2

0x53b4,	// (0x000681d4) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00072559) popup_image_focus_window_t

0x53c2,	// (0x000681e2) camera2_autofocus_pane_g1

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp01

0x53d0,	// (0x000681f0) popup_image_details_window_g1

0x53e3,	// (0x00068203) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0007256b) popup_image_details_window_g

0x540c,	// (0x0006822c) popup_image_details_window_t1

0x541e,	// (0x0006823e) popup_image_details_window_t2

0x5437,	// (0x00068257) popup_image_details_window_t3

0x544b,	// (0x0006826b) popup_image_details_window_t4

0x5466,	// (0x00068286) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00072572) popup_image_details_window_t

0x0746,	// (0x00063566) bg_calc_paper_pane_ParamLimits

0x75d2,	// (0x0006a3f2) grid_highlight_pane_cp013

0x7bdc,	// (0x0006a9fc) list_calc_pane_ParamLimits

0x7bee,	// (0x0006aa0e) scroll_pane_cp024

0x077e,	// (0x0006359e) bg_calc_display_pane_ParamLimits

0x7bf6,	// (0x0006aa16) calc_display_pane_t1_ParamLimits

0x7c0b,	// (0x0006aa2b) calc_display_pane_t2_ParamLimits

0x7c20,	// (0x0006aa40) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00071fa2) calc_display_pane_t_ParamLimits

0x7cf3,	// (0x0006ab13) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00071fbf) cell_calc_pane_g

0x7cfc,	// (0x0006ab1c) cell_calc_pane_t1

0x0801,	// (0x00063621) grid_highlight_pane_cp02_ParamLimits

0x0817,	// (0x00063637) toolbar_button_pane_cp01_ParamLimits

0x0817,	// (0x00063637) toolbar_button_pane_cp01

0x1681,	// (0x000644a1) temp_image_control_pane_ParamLimits

0x1681,	// (0x000644a1) temp_image_control_pane

0x000b,	// (0x00062e2b) main_mp3_pane

0x5480,	// (0x000682a0) temp_image_control_pane_g1_ParamLimits

0x5480,	// (0x000682a0) temp_image_control_pane_g1

0x548e,	// (0x000682ae) temp_image_control_pane_g2_ParamLimits

0x548e,	// (0x000682ae) temp_image_control_pane_g2

0x54a0,	// (0x000682c0) temp_image_control_pane_g3_ParamLimits

0x54a0,	// (0x000682c0) temp_image_control_pane_g3

0xaf7c,	// (0x0006dd9c) temp_image_control_pane_g4_ParamLimits

0xaf7c,	// (0x0006dd9c) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0007257d) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0007257d) temp_image_control_pane_g

0x5480,	// (0x000682a0) main_mp3_pane_g1

0xaf8d,	// (0x0006ddad) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00072586) main_mp3_pane_g

0x54e3,	// (0x00068303) main_mp3_pane_t1

0x0a15,	// (0x00063835) main_camera_pane_g8_ParamLimits

0x0a15,	// (0x00063835) main_camera_pane_g8

0x854a,	// (0x0006b36a) main_video_pane_g7_ParamLimits

0x854a,	// (0x0006b36a) main_video_pane_g7

0xaa23,	// (0x0006d843) main_camera2_pane_t7_ParamLimits

0xaa23,	// (0x0006d843) main_camera2_pane_t7

0x0b67,	// (0x00063987) scroll_pane_cp025_ParamLimits

0x0b67,	// (0x00063987) scroll_pane_cp025

0x0b7b,	// (0x0006399b) scroll_pane_cp026_ParamLimits

0x0b7b,	// (0x0006399b) scroll_pane_cp026

0x0b8a,	// (0x000639aa) wml_content_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_touch_calib_pane

0xb031,	// (0x0006de51) main_touch_calib_pane_g1

0xb03d,	// (0x0006de5d) main_touch_calib_pane_g2

0xb049,	// (0x0006de69) main_touch_calib_pane_g3

0xb055,	// (0x0006de75) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000725a4) main_touch_calib_pane_g

0xb061,	// (0x0006de81) main_touch_calib_pane_t1

0xb078,	// (0x0006de98) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000725ad) main_touch_calib_pane_t

0x1296,	// (0x000640b6) mup_progress_pane_cp02

0x12b5,	// (0x000640d5) navi_pane_g1

0x1317,	// (0x00064137) navi_pane_mp_t3

0x000b,	// (0x00062e2b) main_mp3_pane_ParamLimits

0xa6b1,	// (0x0006d4d1) navi_pane_ParamLimits

0x5480,	// (0x000682a0) main_mp3_pane_g1_ParamLimits

0xaf8d,	// (0x0006ddad) main_mp3_pane_g2_ParamLimits

0xaf99,	// (0x0006ddb9) main_mp3_pane_g3_ParamLimits

0xaf99,	// (0x0006ddb9) main_mp3_pane_g3

0xafa5,	// (0x0006ddc5) main_mp3_pane_g4_ParamLimits

0xafa5,	// (0x0006ddc5) main_mp3_pane_g4

0x54b0,	// (0x000682d0) main_mp3_pane_g5_ParamLimits

0x54b0,	// (0x000682d0) main_mp3_pane_g5

0x54be,	// (0x000682de) main_mp3_pane_g6_ParamLimits

0x54be,	// (0x000682de) main_mp3_pane_g6

0x54cb,	// (0x000682eb) main_mp3_pane_g7_ParamLimits

0x54cb,	// (0x000682eb) main_mp3_pane_g7

0x54d7,	// (0x000682f7) main_mp3_pane_g8_ParamLimits

0x54d7,	// (0x000682f7) main_mp3_pane_g8

0xf766,	// (0x00072586) main_mp3_pane_g_ParamLimits

0xafb1,	// (0x0006ddd1) main_mp3_pane_t2

0xafc1,	// (0x0006dde1) main_mp3_pane_t3

0x54f1,	// (0x00068311) main_mp3_pane_t4

0x54ff,	// (0x0006831f) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00072597) main_mp3_pane_t

0x550d,	// (0x0006832d) mup_progress_pane_cp01

0x64fc,	// (0x0006931c) aid_zoom_text_secondary2

0x5303,	// (0x00068123) list_cale_ev2_pane

0x530b,	// (0x0006812b) scroll_pane_cp023_ParamLimits

0xb0cf,	// (0x0006deef) field_cale_ev2_pane_ParamLimits

0xb0cf,	// (0x0006deef) field_cale_ev2_pane

0xb0ed,	// (0x0006df0d) field_cale_ev2_pane_g1_ParamLimits

0xb0ed,	// (0x0006df0d) field_cale_ev2_pane_g1

0xb0f9,	// (0x0006df19) field_cale_ev2_pane_g2_ParamLimits

0xb0f9,	// (0x0006df19) field_cale_ev2_pane_g2

0xb111,	// (0x0006df31) field_cale_ev2_pane_g3_ParamLimits

0xb111,	// (0x0006df31) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000725b8) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000725b8) field_cale_ev2_pane_g

0x67ff,	// (0x0006961f) field_cale_ev2_pane_t1_ParamLimits

0x67ff,	// (0x0006961f) field_cale_ev2_pane_t1

0x6816,	// (0x00069636) field_cale_ev2_pane_t2_ParamLimits

0x6816,	// (0x00069636) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000725c1) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000725c1) field_cale_ev2_pane_t

0x9ea4,	// (0x0006ccc4) main_postcard_pane_g5_ParamLimits

0x9ea4,	// (0x0006ccc4) main_postcard_pane_g5

0x9eb2,	// (0x0006ccd2) main_postcard_pane_g6_ParamLimits

0x9eb2,	// (0x0006ccd2) main_postcard_pane_g6

0x8388,	// (0x0006b1a8) camera2_autofocus_pane_cp_ParamLimits

0x8388,	// (0x0006b1a8) camera2_autofocus_pane_cp

0x000b,	// (0x00062e2b) main_mup3_pane

0xb155,	// (0x0006df75) main_mup3_pane_g1_ParamLimits

0xb155,	// (0x0006df75) main_mup3_pane_g1

0xb176,	// (0x0006df96) main_mup3_pane_g2_ParamLimits

0xb176,	// (0x0006df96) main_mup3_pane_g2

0xb1f2,	// (0x0006e012) main_mup3_pane_g3_ParamLimits

0xb1f2,	// (0x0006e012) main_mup3_pane_g3

0xb233,	// (0x0006e053) main_mup3_pane_g4_ParamLimits

0xb233,	// (0x0006e053) main_mup3_pane_g4

0xb274,	// (0x0006e094) main_mup3_pane_g5_ParamLimits

0xb274,	// (0x0006e094) main_mup3_pane_g5

0xb2b5,	// (0x0006e0d5) main_mup3_pane_g6_ParamLimits

0xb2b5,	// (0x0006e0d5) main_mup3_pane_g6

0x5515,	// (0x00068335) main_mup3_pane_g7_ParamLimits

0x5515,	// (0x00068335) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000725d1) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000725d1) main_mup3_pane_g

0xb327,	// (0x0006e147) main_mup3_pane_t1_ParamLimits

0xb327,	// (0x0006e147) main_mup3_pane_t1

0xb39a,	// (0x0006e1ba) main_mup3_pane_t2_ParamLimits

0xb39a,	// (0x0006e1ba) main_mup3_pane_t2

0xb467,	// (0x0006e287) main_mup3_pane_t4_ParamLimits

0xb467,	// (0x0006e287) main_mup3_pane_t4

0xb4bb,	// (0x0006e2db) main_mup3_pane_t5_ParamLimits

0xb4bb,	// (0x0006e2db) main_mup3_pane_t5

0xb567,	// (0x0006e387) main_mup3_pane_t6_ParamLimits

0xb567,	// (0x0006e387) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000725e2) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000725e2) main_mup3_pane_t

0xb60f,	// (0x0006e42f) mup3_progress_pane_ParamLimits

0xb60f,	// (0x0006e42f) mup3_progress_pane

0xb67a,	// (0x0006e49a) popup_mup3_control_window_ParamLimits

0xb67a,	// (0x0006e49a) popup_mup3_control_window

0x5523,	// (0x00068343) popup_mup3_text_window

0xb697,	// (0x0006e4b7) mup3_progress_pane_t1

0xb6ae,	// (0x0006e4ce) mup3_progress_pane_t2

0x552b,	// (0x0006834b) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000725ef) mup3_progress_pane_t

0x5542,	// (0x00068362) mup_progress_pane_cp03

0x75d2,	// (0x0006a3f2) bg_tb_trans_pane_cp04

0xb6c5,	// (0x0006e4e5) mup3_volume_pane

0xb6cd,	// (0x0006e4ed) popup_mup3_control_window_g1

0x240b,	// (0x0006522b) mup3_volume_pane_g1

0x2414,	// (0x00065234) mup3_volume_pane_g2

0x241d,	// (0x0006523d) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000725f6) mup3_volume_pane_g

0x75d2,	// (0x0006a3f2) bg_tb_trans_pane_cp03

0x5552,	// (0x00068372) popup_mup3_text_window_g1

0x555a,	// (0x0006837a) popup_mup3_text_window_t1

0x07d8,	// (0x000635f8) list_calc_item_pane_g1_ParamLimits

0x4fcd,	// (0x00067ded) mup_volume_pane_cp_g1

0xb08f,	// (0x0006deaf) main_touch_calib_pane_t3

0xb0a3,	// (0x0006dec3) main_touch_calib_pane_t4

0xb0b9,	// (0x0006ded9) main_touch_calib_pane_t5

0x75dc,	// (0x0006a3fc) aid_cell_size_toolbar2

0x75e4,	// (0x0006a404) aid_popup3_width_pane

0x64ec,	// (0x0006930c) aid_zoom_text_msg_primary

0x835b,	// (0x0006b17b) vorec_t7

0x079c,	// (0x000635bc) bg_calc_paper_pane_g1_ParamLimits

0x07b4,	// (0x000635d4) bg_calc_paper_pane_g2_ParamLimits

0x07a8,	// (0x000635c8) bg_calc_paper_pane_g3_ParamLimits

0x07cc,	// (0x000635ec) bg_calc_paper_pane_g4_ParamLimits

0x07c0,	// (0x000635e0) bg_calc_paper_pane_g5_ParamLimits

0x7c61,	// (0x0006aa81) bg_calc_paper_pane_g6_ParamLimits

0x7c72,	// (0x0006aa92) bg_calc_paper_pane_g7_ParamLimits

0x7c83,	// (0x0006aaa3) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00071fa9) bg_calc_paper_pane_g_ParamLimits

0x7c94,	// (0x0006aab4) calc_bg_paper_pane_g9_ParamLimits

0x8479,	// (0x0006b299) image_qvga_pane_ParamLimits

0x8479,	// (0x0006b299) image_qvga_pane

0x0687,	// (0x000634a7) bg_popup_sub_pane_cp04_ParamLimits

0x15b8,	// (0x000643d8) popup_mup_playback_window_g1_ParamLimits

0x15c4,	// (0x000643e4) popup_mup_playback_window_t1_ParamLimits

0x15d9,	// (0x000643f9) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00072335) popup_mup_playback_window_t_ParamLimits

0xab52,	// (0x0006d972) main_mup2_pane_g3_ParamLimits

0xab52,	// (0x0006d972) main_mup2_pane_g3

0x86be,	// (0x0006b4de) popup_toolbar_window_cp04

0x19d4,	// (0x000647f4) popup_call2_audio_second_window_g3_ParamLimits

0x19d4,	// (0x000647f4) popup_call2_audio_second_window_g3

0x4421,	// (0x00067241) popup_call2_audio_first_window_g4_ParamLimits

0x4421,	// (0x00067241) popup_call2_audio_first_window_g4

0x4aa0,	// (0x000678c0) popup_call2_audio_in_window_g4_ParamLimits

0x4aa0,	// (0x000678c0) popup_call2_audio_in_window_g4

0x9fbb,	// (0x0006cddb) aid_area_sk_bg_cut_ParamLimits

0x9fbb,	// (0x0006cddb) aid_area_sk_bg_cut

0x15ee,	// (0x0006440e) aid_area_sk_bg_cut_2_ParamLimits

0x15ee,	// (0x0006440e) aid_area_sk_bg_cut_2

0xaee0,	// (0x0006dd00) aid_placing_details_win

0xaee8,	// (0x0006dd08) aid_placing_details_win_2

0x53c2,	// (0x000681e2) camera2_autofocus_pane_g1_ParamLimits

0x7833,	// (0x0006a653) popup_fixed_preview_cale_window_ParamLimits

0x7833,	// (0x0006a653) popup_fixed_preview_cale_window

0x1381,	// (0x000641a1) navi_slider_pane_g3

0x1378,	// (0x00064198) navi_slider_pane_g4

0x136f,	// (0x0006418f) navi_slider_pane_g5

0x1381,	// (0x000641a1) navi_slider_pane_g6

0x98bb,	// (0x0006c6db) navi_slider_pane_g7

0x14ad,	// (0x000642cd) mup_scale_pane_g3

0x14b6,	// (0x000642d6) mup_scale_pane_g4

0x14bf,	// (0x000642df) mup_scale_pane_g5

0x9d36,	// (0x0006cb56) mup_scale_pane_g6

0x9d3f,	// (0x0006cb5f) mup_scale_pane_g7

0x1381,	// (0x000641a1) cams2_slider_pane_g3

0x504f,	// (0x00067e6f) cams2_slider_pane_g4

0xae38,	// (0x0006dc58) cams2_slider_pane_g5

0x1381,	// (0x000641a1) cams2_slider_pane_g6

0xae40,	// (0x0006dc60) cams2_slider_pane_g7

0x5280,	// (0x000680a0) camera2_autofocus_pane_cp_g1

0x5568,	// (0x00068388) bg_popup_preview_window_pane_cp02_ParamLimits

0x5568,	// (0x00068388) bg_popup_preview_window_pane_cp02

0x5574,	// (0x00068394) list_fp_cale_pane_ParamLimits

0x5574,	// (0x00068394) list_fp_cale_pane

0x5580,	// (0x000683a0) popup_fixed_preview_cale_window_t1_ParamLimits

0x5580,	// (0x000683a0) popup_fixed_preview_cale_window_t1

0xb6d6,	// (0x0006e4f6) popup_fixed_preview_cale_window_t2_ParamLimits

0xb6d6,	// (0x0006e4f6) popup_fixed_preview_cale_window_t2

0xb6eb,	// (0x0006e50b) popup_fixed_preview_cale_window_t3_ParamLimits

0xb6eb,	// (0x0006e50b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000725fd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000725fd) popup_fixed_preview_cale_window_t

0xb700,	// (0x0006e520) list_single_fp_cale_pane_ParamLimits

0xb700,	// (0x0006e520) list_single_fp_cale_pane

0x559e,	// (0x000683be) list_single_fp_cale_pane_g1_ParamLimits

0x559e,	// (0x000683be) list_single_fp_cale_pane_g1

0x55aa,	// (0x000683ca) list_single_fp_cale_pane_g2_ParamLimits

0x55aa,	// (0x000683ca) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00072604) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00072604) list_single_fp_cale_pane_g

0x55c3,	// (0x000683e3) list_single_fp_cale_pane_t1_ParamLimits

0x55c3,	// (0x000683e3) list_single_fp_cale_pane_t1

0x55d5,	// (0x000683f5) list_single_fp_cale_pane_t2_ParamLimits

0x55d5,	// (0x000683f5) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0007260b) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0007260b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x75d2,	// (0x0006a3f2) main_dialer_pane

0xb710,	// (0x0006e530) aid_cell_size_keypad

0xb71a,	// (0x0006e53a) dialer_ne_pane

0xb724,	// (0x0006e544) grid_dialer_command_1_pane

0xb72c,	// (0x0006e54c) grid_dialer_command_2_pane

0xb734,	// (0x0006e554) grid_dialer_keypad_pane

0xb748,	// (0x0006e568) bg_popup_call_pane_cp06_ParamLimits

0xb748,	// (0x0006e568) bg_popup_call_pane_cp06

0xb754,	// (0x0006e574) dialer_ne_clear_pane_ParamLimits

0xb754,	// (0x0006e574) dialer_ne_clear_pane

0x5608,	// (0x00068428) dialer_ne_pane_g1

0x5610,	// (0x00068430) dialer_ne_pane_t1_ParamLimits

0x5610,	// (0x00068430) dialer_ne_pane_t1

0xb760,	// (0x0006e580) dialer_ne_pane_t2_ParamLimits

0xb760,	// (0x0006e580) dialer_ne_pane_t2

0xb77d,	// (0x0006e59d) dialer_ne_pane_t3_ParamLimits

0xb77d,	// (0x0006e59d) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00072610) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00072610) dialer_ne_pane_t

0xb7a1,	// (0x0006e5c1) dialer_ne_pane_t3_copy1_ParamLimits

0xb7a1,	// (0x0006e5c1) dialer_ne_pane_t3_copy1

0xb7c5,	// (0x0006e5e5) cell_dialer_keypad_pane_ParamLimits

0xb7c5,	// (0x0006e5e5) cell_dialer_keypad_pane

0xb7dc,	// (0x0006e5fc) cell_dialer_command_1_pane_ParamLimits

0xb7dc,	// (0x0006e5fc) cell_dialer_command_1_pane

0xb7f2,	// (0x0006e612) cell_dialer_command_2_pane_ParamLimits

0xb7f2,	// (0x0006e612) cell_dialer_command_2_pane

0x5622,	// (0x00068442) bg_button_pane_cp02_ParamLimits

0x5622,	// (0x00068442) bg_button_pane_cp02

0xb801,	// (0x0006e621) cell_dialer_keypad_pane_g1_ParamLimits

0xb801,	// (0x0006e621) cell_dialer_keypad_pane_g1

0x5622,	// (0x00068442) bg_button_pane_cp03_ParamLimits

0x5622,	// (0x00068442) bg_button_pane_cp03

0xb815,	// (0x0006e635) cell_dialer_command_1_pane_g1_ParamLimits

0xb815,	// (0x0006e635) cell_dialer_command_1_pane_g1

0x562e,	// (0x0006844e) bg_button_pane_cp04

0xb829,	// (0x0006e649) cell_dialer_command_2_pane_g1

0x1355,	// (0x00064175) bg_button_pane_cp06

0x5636,	// (0x00068456) dialer_ne_clear_pane_g1

0x97fe,	// (0x0006c61e) navi_pane_g2

0x982c,	// (0x0006c64c) navi_pane_g3

0x0002,

0xf418,	// (0x00072238) navi_pane_g

0x9857,	// (0x0006c677) navi_pane_mv_g2

0x987e,	// (0x0006c69e) navi_pane_mv_g5

0x9886,	// (0x0006c6a6) navi_pane_mv_t1

0x077e,	// (0x0006359e) main_clock2_pane

0xb85b,	// (0x0006e67b) main_clock2_list_pane_ParamLimits

0xb85b,	// (0x0006e67b) main_clock2_list_pane

0xb885,	// (0x0006e6a5) main_clock2_pane_t1_ParamLimits

0xb885,	// (0x0006e6a5) main_clock2_pane_t1

0xb8b3,	// (0x0006e6d3) main_clock2_pane_t2_ParamLimits

0xb8b3,	// (0x0006e6d3) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00072617) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00072617) main_clock2_pane_t

0xb91c,	// (0x0006e73c) popup_clock_analogue_window_cp03_ParamLimits

0xb91c,	// (0x0006e73c) popup_clock_analogue_window_cp03

0xb93c,	// (0x0006e75c) popup_clock_digital_window_cp02_ParamLimits

0xb93c,	// (0x0006e75c) popup_clock_digital_window_cp02

0xb9ad,	// (0x0006e7cd) main_clock2_list_single_pane_ParamLimits

0xb9ad,	// (0x0006e7cd) main_clock2_list_single_pane

0x1355,	// (0x00064175) list_highlight_pane_cp05

0x563e,	// (0x0006845e) main_clock2_list_single_pane_t1

0x86be,	// (0x0006b4de) popup_toolbar_window_cp04_ParamLimits

0xaf4c,	// (0x0006dd6c) camera2_autofocus_pane_g2_ParamLimits

0xaf4c,	// (0x0006dd6c) camera2_autofocus_pane_g2

0xaf58,	// (0x0006dd78) camera2_autofocus_pane_g3_ParamLimits

0xaf58,	// (0x0006dd78) camera2_autofocus_pane_g3

0xaf64,	// (0x0006dd84) camera2_autofocus_pane_g4_ParamLimits

0xaf64,	// (0x0006dd84) camera2_autofocus_pane_g4

0xaf70,	// (0x0006dd90) camera2_autofocus_pane_g5_ParamLimits

0xaf70,	// (0x0006dd90) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00072560) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00072560) camera2_autofocus_pane_g

0xb135,	// (0x0006df55) camera2_autofocus_pane_cp_g2

0xb13d,	// (0x0006df5d) camera2_autofocus_pane_cp_g3

0xb145,	// (0x0006df65) camera2_autofocus_pane_cp_g4

0xb14d,	// (0x0006df6d) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000725c6) camera2_autofocus_pane_cp_g

0xb740,	// (0x0006e560) popup_dialer_spcha_window

0x75d2,	// (0x0006a3f2) bg_popup_sub_pane_cp07

0x564c,	// (0x0006846c) list_spcha_pane

0x5654,	// (0x00068474) list_single_spcha_pane_ParamLimits

0x5654,	// (0x00068474) list_single_spcha_pane

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp06

0x5665,	// (0x00068485) list_single_spcha_pane_t1

0x484a,	// (0x0006766a) popup_call2_audio_out_window_g4_ParamLimits

0x484a,	// (0x0006766a) popup_call2_audio_out_window_g4

0x75d2,	// (0x0006a3f2) main_imed2_pane

0x4e31,	// (0x00067c51) popup_imed_adjust2_window

0xa5ee,	// (0x0006d40e) popup_imed_trans_window_ParamLimits

0xa5ee,	// (0x0006d40e) popup_imed_trans_window

0x50b8,	// (0x00067ed8) popup_blid_sat_info2_window_t1

0x50c6,	// (0x00067ee6) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000724f5) popup_blid_sat_info2_window_t

0xba57,	// (0x0006e877) aid_size_cell_colour_35

0xba71,	// (0x0006e891) aid_size_cell_colour_112

0xba88,	// (0x0006e8a8) aid_size_cell_effect

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp02

0x0eed,	// (0x00063d0d) heading_imed_pane

0xbaa2,	// (0x0006e8c2) listscroll_imed_pane

0x5673,	// (0x00068493) heading_imed_pane_g1

0x567b,	// (0x0006849b) heading_imed_pane_t1

0x5689,	// (0x000684a9) grid_imed_colour_35_pane_ParamLimits

0x5689,	// (0x000684a9) grid_imed_colour_35_pane

0xbaae,	// (0x0006e8ce) grid_imed_effect_pane

0x56a5,	// (0x000684c5) list_imed_aspect_pane

0xbabe,	// (0x0006e8de) scroll_pane_cp027_ParamLimits

0xbabe,	// (0x0006e8de) scroll_pane_cp027

0xbaca,	// (0x0006e8ea) cell_imed_effect_pane_ParamLimits

0xbaca,	// (0x0006e8ea) cell_imed_effect_pane

0x56ad,	// (0x000684cd) cell_imed_colour_pane_ParamLimits

0x56ad,	// (0x000684cd) cell_imed_colour_pane

0x56f7,	// (0x00068517) cell_imed_colour_pane_g1_ParamLimits

0x56f7,	// (0x00068517) cell_imed_colour_pane_g1

0x5708,	// (0x00068528) hgihlgiht_grid_pane_cp016_ParamLimits

0x5708,	// (0x00068528) hgihlgiht_grid_pane_cp016

0xbae6,	// (0x0006e906) cell_imed_effect_pane_g1

0xbaee,	// (0x0006e90e) grid_highlight_pane_cp017

0x5719,	// (0x00068539) list_imed_single_pane_ParamLimits

0x5719,	// (0x00068539) list_imed_single_pane

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp07

0x5735,	// (0x00068555) list_imed_aspect_pane_comp1_t1

0x4e05,	// (0x00067c25) bg_tb_trans_pane_cp05

0x5757,	// (0x00068577) popup_imed_adjust2_window_g1

0x577e,	// (0x0006859e) popup_imed_adjust2_window_t1

0xed93,	// (0x00071bb3) slider_imed_adjust_pane

0xeda7,	// (0x00071bc7) slider_imed_adjust_pane_g1

0xedb7,	// (0x00071bd7) slider_imed_adjust_pane_g2

0xedc7,	// (0x00071be7) slider_imed_adjust_pane_g3

0xedd8,	// (0x00071bf8) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00072634) slider_imed_adjust_pane_g

0xbaf7,	// (0x0006e917) aid_size_cell_clipart2

0xbb03,	// (0x0006e923) grid_imed_clipart_pane

0xede9,	// (0x00071c09) scroll_pane_cp031

0xbb0d,	// (0x0006e92d) cell_imed_clipart_pane_ParamLimits

0xbb0d,	// (0x0006e92d) cell_imed_clipart_pane

0xbb2b,	// (0x0006e94b) cell_imed_clipart_pane_g1

0x75d2,	// (0x0006a3f2) grid_highlight_pane_cp014

0xb867,	// (0x0006e687) main_clock2_pane_g1_ParamLimits

0xb867,	// (0x0006e687) main_clock2_pane_g1

0xb958,	// (0x0006e778) aid_call2_pane_cp10

0xb96a,	// (0x0006e78a) aid_call_pane_cp10

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g1

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g2

0xb97c,	// (0x0006e79c) popup_clock_analogue_window_cp10_g3

0xb97c,	// (0x0006e79c) popup_clock_analogue_window_cp10_g4

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00072622) popup_clock_analogue_window_cp10_g

0xb98e,	// (0x0006e7ae) popup_clock_analogue_window_cp10_t1

0xb9bf,	// (0x0006e7df) clock_digital_number_pane_cp10_ParamLimits

0xb9bf,	// (0x0006e7df) clock_digital_number_pane_cp10

0xb9d7,	// (0x0006e7f7) clock_digital_number_pane_cp11_ParamLimits

0xb9d7,	// (0x0006e7f7) clock_digital_number_pane_cp11

0xb9ef,	// (0x0006e80f) clock_digital_number_pane_cp12_ParamLimits

0xb9ef,	// (0x0006e80f) clock_digital_number_pane_cp12

0xba07,	// (0x0006e827) clock_digital_number_pane_cp13_ParamLimits

0xba07,	// (0x0006e827) clock_digital_number_pane_cp13

0xba1f,	// (0x0006e83f) clock_digital_separator_pane_cp10_ParamLimits

0xba1f,	// (0x0006e83f) clock_digital_separator_pane_cp10

0xba37,	// (0x0006e857) popup_clock_digital_window_cp02_t1_ParamLimits

0xba37,	// (0x0006e857) popup_clock_digital_window_cp02_t1

0x067f,	// (0x0006349f) clock_digital_number_pane_cp10_g1

0x067f,	// (0x0006349f) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0007263d) clock_digital_number_pane_cp10_g

0x067f,	// (0x0006349f) clock_digital_separator_pane_cp10_g1

0x067f,	// (0x0006349f) clock_digital_separator_pane_g2_cp10

0x1325,	// (0x00064145) navi_pane_vded_g4

0x132e,	// (0x0006414e) navi_pane_vded_g5

0x1337,	// (0x00064157) navi_pane_vded_t1

0x75d2,	// (0x0006a3f2) main_vded_pane

0xbb34,	// (0x0006e954) main_vded_pane_g1

0xbb40,	// (0x0006e960) main_vded_pane_g2

0xbb4a,	// (0x0006e96a) main_vded_pane_g3

0x0002,

0xf822,	// (0x00072642) main_vded_pane_g

0xbb54,	// (0x0006e974) main_vded_pane_t1

0xbb62,	// (0x0006e982) main_vded_pane_t2

0x0001,

0xf829,	// (0x00072649) main_vded_pane_t

0xbb70,	// (0x0006e990) vded_slider_pane

0xbb7a,	// (0x0006e99a) vded_video_pane

0xedf1,	// (0x00071c11) vded_video_pane_g1

0xbb86,	// (0x0006e9a6) vded_video_pane_g2

0x5280,	// (0x000680a0) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0007264e) vded_video_pane_g

0xedfb,	// (0x00071c1b) vded_slider_pane_g1

0x4fcd,	// (0x00067ded) vded_slider_pane_g2

0xee04,	// (0x00071c24) vded_slider_pane_g3

0xee0d,	// (0x00071c2d) vded_slider_pane_g4

0xee16,	// (0x00071c36) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00072655) vded_slider_pane_g

0xb66e,	// (0x0006e48e) mup3_rocker_pane_ParamLimits

0xb66e,	// (0x0006e48e) mup3_rocker_pane

0xbb8f,	// (0x0006e9af) mup3_control_keys_pane_g1

0xbb97,	// (0x0006e9b7) mup3_control_keys_pane_g2

0xbb9f,	// (0x0006e9bf) mup3_control_keys_pane_g3

0xbba7,	// (0x0006e9c7) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00072660) mup3_control_keys_pane_g

0x7851,	// (0x0006a671) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7851,	// (0x0006a671) popup_toolbar2_fixed_window_cp01

0xb68a,	// (0x0006e4aa) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb68a,	// (0x0006e4aa) popup_toolbar2_fixed_window_cp02

0x4189,	// (0x00066fa9) popup_call2_audio_second_window_t4_ParamLimits

0x4189,	// (0x00066fa9) popup_call2_audio_second_window_t4

0x46b7,	// (0x000674d7) popup_call2_audio_first_window_t6_ParamLimits

0x46b7,	// (0x000674d7) popup_call2_audio_first_window_t6

0x494d,	// (0x0006776d) popup_call2_audio_out_window_t6_ParamLimits

0x494d,	// (0x0006776d) popup_call2_audio_out_window_t6

0x75d2,	// (0x0006a3f2) main_vitu_pane

0xbbb7,	// (0x0006e9d7) aid_size_cell_itu_ParamLimits

0xbbb7,	// (0x0006e9d7) aid_size_cell_itu

0x7879,	// (0x0006a699) bg_popup_window_pane_cp08_ParamLimits

0x7879,	// (0x0006a699) bg_popup_window_pane_cp08

0xbbc5,	// (0x0006e9e5) field_vitu_entry_pane_ParamLimits

0xbbc5,	// (0x0006e9e5) field_vitu_entry_pane

0xbbd4,	// (0x0006e9f4) grid_vitu_function_pane_ParamLimits

0xbbd4,	// (0x0006e9f4) grid_vitu_function_pane

0xbbe4,	// (0x0006ea04) grid_vitu_itu_pane_ParamLimits

0xbbe4,	// (0x0006ea04) grid_vitu_itu_pane

0xbbf4,	// (0x0006ea14) cell_vitu_itu_pane_ParamLimits

0xbbf4,	// (0x0006ea14) cell_vitu_itu_pane

0xbc0b,	// (0x0006ea2b) cell_vitu_function_pane_ParamLimits

0xbc0b,	// (0x0006ea2b) cell_vitu_function_pane

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp08_ParamLimits

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp08

0xbc1f,	// (0x0006ea3f) field_vitu_entry_pane_t1_ParamLimits

0xbc1f,	// (0x0006ea3f) field_vitu_entry_pane_t1

0xee37,	// (0x00071c57) field_vitu_entry_pane_t2_ParamLimits

0xee37,	// (0x00071c57) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0007266e) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0007266e) field_vitu_entry_pane_t

0xee54,	// (0x00071c74) bg_button_pane_cp05_ParamLimits

0xee54,	// (0x00071c74) bg_button_pane_cp05

0xbc39,	// (0x0006ea59) cell_vitu_itu_pane_g1

0xbc51,	// (0x0006ea71) cell_vitu_itu_pane_t1_ParamLimits

0xbc51,	// (0x0006ea71) cell_vitu_itu_pane_t1

0xbc63,	// (0x0006ea83) cell_vitu_itu_pane_t2_ParamLimits

0xbc63,	// (0x0006ea83) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00072673) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00072673) cell_vitu_itu_pane_t

0xee62,	// (0x00071c82) bg_button_pane_cp07

0xbc98,	// (0x0006eab8) cell_vitu_function_pane_g1

0x7b07,	// (0x0006a927) main_calc_pane_g1

0x7618,	// (0x0006a438) aid_visual_content_pane

0x75d2,	// (0x0006a3f2) main_vradio_pane

0xbca1,	// (0x0006eac1) main_vradio_pane_g1_ParamLimits

0xbca1,	// (0x0006eac1) main_vradio_pane_g1

0xee6c,	// (0x00071c8c) main_vradio_pane_g2_ParamLimits

0xee6c,	// (0x00071c8c) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0007267a) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0007267a) main_vradio_pane_g

0xbcaf,	// (0x0006eacf) main_vradio_pane_t1_ParamLimits

0xbcaf,	// (0x0006eacf) main_vradio_pane_t1

0xbcc1,	// (0x0006eae1) main_vradio_pane_t2_ParamLimits

0xbcc1,	// (0x0006eae1) main_vradio_pane_t2

0xee79,	// (0x00071c99) main_vradio_pane_t3_ParamLimits

0xee79,	// (0x00071c99) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0007267f) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0007267f) main_vradio_pane_t

0xbcd3,	// (0x0006eaf3) vradio_rocker_control_pane_ParamLimits

0xbcd3,	// (0x0006eaf3) vradio_rocker_control_pane

0xbcdf,	// (0x0006eaff) vradio_station_info_pane_ParamLimits

0xbcdf,	// (0x0006eaff) vradio_station_info_pane

0xee8d,	// (0x00071cad) vradio_frequency_info_pane_ParamLimits

0xee8d,	// (0x00071cad) vradio_frequency_info_pane

0x5280,	// (0x000680a0) vradio_station_info_pane_g1

0xee9c,	// (0x00071cbc) vradio_station_info_pane_t1_ParamLimits

0xee9c,	// (0x00071cbc) vradio_station_info_pane_t1

0xeebe,	// (0x00071cde) vradio_station_info_pane_t2_ParamLimits

0xeebe,	// (0x00071cde) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00072686) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00072686) vradio_station_info_pane_t

0xeed0,	// (0x00071cf0) vradio_tuning_pane

0xeed8,	// (0x00071cf8) vradio_rocker_control_pane_g1

0xeee0,	// (0x00071d00) vradio_rocker_control_pane_g2

0xeee8,	// (0x00071d08) vradio_rocker_control_pane_g3

0xeef0,	// (0x00071d10) vradio_rocker_control_pane_g4

0xeef8,	// (0x00071d18) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0007268b) vradio_rocker_control_pane_g

0xbcec,	// (0x0006eb0c) vradio_frequency_info_pane_g1

0xef00,	// (0x00071d20) vradio_frequency_info_pane_t1_ParamLimits

0xef00,	// (0x00071d20) vradio_frequency_info_pane_t1

0xbcf6,	// (0x0006eb16) vradio_tuning_pane_g1

0xbd01,	// (0x0006eb21) vradio_tuning_pane_t1

0x7659,	// (0x0006a479) area_side_right_pane_ParamLimits

0x7659,	// (0x0006a479) area_side_right_pane

0x4dcc,	// (0x00067bec) status_small_pane_g1

0x4dd4,	// (0x00067bf4) status_small_pane_g2

0x4ddd,	// (0x00067bfd) status_small_pane_g3

0x4de6,	// (0x00067c06) status_small_pane_g4

0x0003,

0xf62b,	// (0x0007244b) status_small_pane_g

0x4def,	// (0x00067c0f) status_small_pane_t1

0x75d2,	// (0x0006a3f2) main_video3_pane

0xef14,	// (0x00071d34) cams_zoom_vslider_pane

0xef1c,	// (0x00071d3c) image3_wide_pane_ParamLimits

0xef1c,	// (0x00071d3c) image3_wide_pane

0xef36,	// (0x00071d56) image3_wide_small_pane

0xef42,	// (0x00071d62) main_video3_pane_g1_ParamLimits

0xef42,	// (0x00071d62) main_video3_pane_g1

0xef5e,	// (0x00071d7e) main_video3_pane_g2_ParamLimits

0xef5e,	// (0x00071d7e) main_video3_pane_g2

0x0001,

0xf876,	// (0x00072696) main_video3_pane_g_ParamLimits

0xf876,	// (0x00072696) main_video3_pane_g

0xef7a,	// (0x00071d9a) main_video3_pane_t1_ParamLimits

0xef7a,	// (0x00071d9a) main_video3_pane_t1

0xefa5,	// (0x00071dc5) main_video3_pane_t2_ParamLimits

0xefa5,	// (0x00071dc5) main_video3_pane_t2

0xefd2,	// (0x00071df2) main_video3_pane_t3_ParamLimits

0xefd2,	// (0x00071df2) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0007269b) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0007269b) main_video3_pane_t

0xefff,	// (0x00071e1f) cams_zoom_vslider_pane_g1

0xf008,	// (0x00071e28) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000726a2) cams_zoom_vslider_pane_g

0xf010,	// (0x00071e30) small_slider_vertical_pane

0x5280,	// (0x000680a0) small_slider_vertical_pane_g1

0x5280,	// (0x000680a0) small_slider_vertical_pane_g2

0xf018,	// (0x00071e38) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000726a7) small_slider_vertical_pane_g

0x75d2,	// (0x0006a3f2) main_hwr_training_pane

0xf021,	// (0x00071e41) hwr_training_instruct_pane_ParamLimits

0xf021,	// (0x00071e41) hwr_training_instruct_pane

0xbd10,	// (0x0006eb30) hwr_training_navi_pane_ParamLimits

0xbd10,	// (0x0006eb30) hwr_training_navi_pane

0xbd2a,	// (0x0006eb4a) hwr_training_write_pane_ParamLimits

0xbd2a,	// (0x0006eb4a) hwr_training_write_pane

0x75d2,	// (0x0006a3f2) bg_frame_shadow_pane

0xf058,	// (0x00071e78) hwr_training_write_pane_g1

0xf060,	// (0x00071e80) hwr_training_write_pane_g2

0xf068,	// (0x00071e88) hwr_training_write_pane_g3

0xf070,	// (0x00071e90) hwr_training_write_pane_g4

0xf078,	// (0x00071e98) hwr_training_write_pane_g5

0xf080,	// (0x00071ea0) hwr_training_write_pane_g6

0xf088,	// (0x00071ea8) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000726ae) hwr_training_write_pane_g

0xbd62,	// (0x0006eb82) hwr_training_navi_pane_g1_ParamLimits

0xbd62,	// (0x0006eb82) hwr_training_navi_pane_g1

0xbd74,	// (0x0006eb94) hwr_training_navi_pane_g2_ParamLimits

0xbd74,	// (0x0006eb94) hwr_training_navi_pane_g2

0xbd86,	// (0x0006eba6) hwr_training_navi_pane_g3_ParamLimits

0xbd86,	// (0x0006eba6) hwr_training_navi_pane_g3

0xbd96,	// (0x0006ebb6) hwr_training_navi_pane_g4_ParamLimits

0xbd96,	// (0x0006ebb6) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000726bd) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000726bd) hwr_training_navi_pane_g

0xbdb0,	// (0x0006ebd0) hwr_training_navi_pane_t1

0xbdbe,	// (0x0006ebde) list_single_hwr_training_instruct_pane_ParamLimits

0xbdbe,	// (0x0006ebde) list_single_hwr_training_instruct_pane

0xf090,	// (0x00071eb0) list_single_hwr_training_instruct_pane_t1

0x51c0,	// (0x00067fe0) bg_frame_shadow_pane_g1

0xf09f,	// (0x00071ebf) bg_frame_shadow_pane_g2

0xf0a7,	// (0x00071ec7) bg_frame_shadow_pane_g3

0xf0af,	// (0x00071ecf) bg_frame_shadow_pane_g4

0xf0b7,	// (0x00071ed7) bg_frame_shadow_pane_g5

0xf0bf,	// (0x00071edf) bg_frame_shadow_pane_g6

0xf0c7,	// (0x00071ee7) bg_frame_shadow_pane_g7

0x0877,	// (0x00063697) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000726c8) bg_frame_shadow_pane_g

0x75d2,	// (0x0006a3f2) main_video_tele_dialer_pane

0xbddd,	// (0x0006ebfd) aid_size_cell_video_keypad_ParamLimits

0xbddd,	// (0x0006ebfd) aid_size_cell_video_keypad

0xbded,	// (0x0006ec0d) grid_video_dialer_keypad_pane_ParamLimits

0xbded,	// (0x0006ec0d) grid_video_dialer_keypad_pane

0xbe21,	// (0x0006ec41) video_down_pane_cp_ParamLimits

0xbe21,	// (0x0006ec41) video_down_pane_cp

0xbe4b,	// (0x0006ec6b) cell_video_dialer_keypad_pane_ParamLimits

0xbe4b,	// (0x0006ec6b) cell_video_dialer_keypad_pane

0xf0cf,	// (0x00071eef) bg_button_pane_cp08_ParamLimits

0xf0cf,	// (0x00071eef) bg_button_pane_cp08

0xbe62,	// (0x0006ec82) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbe62,	// (0x0006ec82) cell_video_dialer_keypad_pane_g1

0xb662,	// (0x0006e482) mup3_rocker2_pane_ParamLimits

0xb662,	// (0x0006e482) mup3_rocker2_pane

0x5280,	// (0x000680a0) mup3_rocker2_pane_g1

0xa570,	// (0x0006d390) main_dialer2_pane

0x75d2,	// (0x0006a3f2) main_mp4_pane

0xbea5,	// (0x0006ecc5) main_mp4_pane_g1_ParamLimits

0xbea5,	// (0x0006ecc5) main_mp4_pane_g1

0xbeb3,	// (0x0006ecd3) main_mp4_pane_g2_ParamLimits

0xbeb3,	// (0x0006ecd3) main_mp4_pane_g2

0xbec1,	// (0x0006ece1) main_mp4_pane_g3_ParamLimits

0xbec1,	// (0x0006ece1) main_mp4_pane_g3

0xbf14,	// (0x0006ed34) main_mp4_pane_g4_ParamLimits

0xbf14,	// (0x0006ed34) main_mp4_pane_g4

0xbf2e,	// (0x0006ed4e) main_mp4_pane_g5_ParamLimits

0xbf2e,	// (0x0006ed4e) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000726e8) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000726e8) main_mp4_pane_g

0xbf62,	// (0x0006ed82) main_mp4_pane_t1_ParamLimits

0xbf62,	// (0x0006ed82) main_mp4_pane_t1

0xbfbe,	// (0x0006edde) main_mp4_pane_t2_ParamLimits

0xbfbe,	// (0x0006edde) main_mp4_pane_t2

0xf0db,	// (0x00071efb) main_mp4_pane_t3_ParamLimits

0xf0db,	// (0x00071efb) main_mp4_pane_t3

0xc010,	// (0x0006ee30) main_mp4_pane_t4_ParamLimits

0xc010,	// (0x0006ee30) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000726f5) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000726f5) main_mp4_pane_t

0xc050,	// (0x0006ee70) mp4_progress_pane_ParamLimits

0xc050,	// (0x0006ee70) mp4_progress_pane

0xc09a,	// (0x0006eeba) mp4_rocker_pane_ParamLimits

0xc09a,	// (0x0006eeba) mp4_rocker_pane

0x1b72,	// (0x00064992) mp4_progress_pane_t1

0x1b8b,	// (0x000649ab) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000726fe) mp4_progress_pane_t

0x1ba4,	// (0x000649c4) mup_progress_pane_cp04

0x5280,	// (0x000680a0) mp4_rocker_pane_g1

0xc0bc,	// (0x0006eedc) aid_cell_size_keypad2_ParamLimits

0xc0bc,	// (0x0006eedc) aid_cell_size_keypad2

0xc0cc,	// (0x0006eeec) dialer2_ne_pane_ParamLimits

0xc0cc,	// (0x0006eeec) dialer2_ne_pane

0xc0d8,	// (0x0006eef8) grid_dialer2_keypad_pane_ParamLimits

0xc0d8,	// (0x0006eef8) grid_dialer2_keypad_pane

0x24d3,	// (0x000652f3) bg_popup_call_pane_cp07_ParamLimits

0x24d3,	// (0x000652f3) bg_popup_call_pane_cp07

0xc0e6,	// (0x0006ef06) dialer2_ne_pane_t1_ParamLimits

0xc0e6,	// (0x0006ef06) dialer2_ne_pane_t1

0xc10b,	// (0x0006ef2b) cell_dialer2_keypad_pane_ParamLimits

0xc10b,	// (0x0006ef2b) cell_dialer2_keypad_pane

0x1bcc,	// (0x000649ec) bg_button_pane_pane_cp04_ParamLimits

0x1bcc,	// (0x000649ec) bg_button_pane_pane_cp04

0xc122,	// (0x0006ef42) cell_dialer2_keypad_pane_g1_ParamLimits

0xc122,	// (0x0006ef42) cell_dialer2_keypad_pane_g1

0x85f9,	// (0x0006b419) aid_placing_vt_set_content_ParamLimits

0x85f9,	// (0x0006b419) aid_placing_vt_set_content

0x8613,	// (0x0006b433) aid_placing_vt_set_title_ParamLimits

0x8613,	// (0x0006b433) aid_placing_vt_set_title

0x75d2,	// (0x0006a3f2) main_image3_pane

0xc1bc,	// (0x0006efdc) area_side_right_pane_cp01_ParamLimits

0xc1bc,	// (0x0006efdc) area_side_right_pane_cp01

0x2a8c,	// (0x000658ac) main_image3_pane_g1_ParamLimits

0x2a8c,	// (0x000658ac) main_image3_pane_g1

0xc1eb,	// (0x0006f00b) main_image3_pane_g2_ParamLimits

0xc1eb,	// (0x0006f00b) main_image3_pane_g2

0xc204,	// (0x0006f024) main_image3_pane_g3_ParamLimits

0xc204,	// (0x0006f024) main_image3_pane_g3

0xc21d,	// (0x0006f03d) main_image3_pane_g4_ParamLimits

0xc21d,	// (0x0006f03d) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0007270d) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0007270d) main_image3_pane_g

0xc236,	// (0x0006f056) main_image3_pane_t1_ParamLimits

0xc236,	// (0x0006f056) main_image3_pane_t1

0xc25b,	// (0x0006f07b) main_image3_pane_t2_ParamLimits

0xc25b,	// (0x0006f07b) main_image3_pane_t2

0xc27a,	// (0x0006f09a) main_image3_pane_t3_ParamLimits

0xc27a,	// (0x0006f09a) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00072716) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00072716) main_image3_pane_t

0x7879,	// (0x0006a699) grid_sctrl_middle_pane_cp01_ParamLimits

0x7879,	// (0x0006a699) grid_sctrl_middle_pane_cp01

0xc2db,	// (0x0006f0fb) cell_sctrl_middle_pane_cp01_ParamLimits

0xc2db,	// (0x0006f0fb) cell_sctrl_middle_pane_cp01

0xc2ec,	// (0x0006f10c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc2ec,	// (0x0006f10c) cell_sctrl_middle_pane_cp01_g1

0x75d2,	// (0x0006a3f2) main_call4_pane

0xc2f9,	// (0x0006f119) aid_size_button_call4_ParamLimits

0xc2f9,	// (0x0006f119) aid_size_button_call4

0xc32b,	// (0x0006f14b) call4_windows_pane_ParamLimits

0xc32b,	// (0x0006f14b) call4_windows_pane

0xc347,	// (0x0006f167) grid_call4_button_pane_ParamLimits

0xc347,	// (0x0006f167) grid_call4_button_pane

0x1bd8,	// (0x000649f8) call4_windows_conf_pane

0x1bf3,	// (0x00064a13) popup_call4_audio_first_window_ParamLimits

0x1bf3,	// (0x00064a13) popup_call4_audio_first_window

0x1c41,	// (0x00064a61) popup_call4_audio_second_window_ParamLimits

0x1c41,	// (0x00064a61) popup_call4_audio_second_window

0x1c57,	// (0x00064a77) popup_call4_audio_wait_window_ParamLimits

0x1c57,	// (0x00064a77) popup_call4_audio_wait_window

0xc36b,	// (0x0006f18b) cell_call4_button_pane_ParamLimits

0xc36b,	// (0x0006f18b) cell_call4_button_pane

0xc38e,	// (0x0006f1ae) bg_button_pane_cp09_ParamLimits

0xc38e,	// (0x0006f1ae) bg_button_pane_cp09

0xc39a,	// (0x0006f1ba) cell_call4_button_pane_g1_ParamLimits

0xc39a,	// (0x0006f1ba) cell_call4_button_pane_g1

0xc3a7,	// (0x0006f1c7) cell_call4_button_pane_t1_ParamLimits

0xc3a7,	// (0x0006f1c7) cell_call4_button_pane_t1

0x1c9f,	// (0x00064abf) popup_call4_audio_conf_window_ParamLimits

0x1c9f,	// (0x00064abf) popup_call4_audio_conf_window

0xb697,	// (0x0006e4b7) mup3_progress_pane_t1_ParamLimits

0xb6ae,	// (0x0006e4ce) mup3_progress_pane_t2_ParamLimits

0x552b,	// (0x0006834b) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000725ef) mup3_progress_pane_t_ParamLimits

0x5542,	// (0x00068362) mup_progress_pane_cp03_ParamLimits

0xbbaf,	// (0x0006e9cf) mup3_control_keys_pane_g4_copy1

0xc07e,	// (0x0006ee9e) mp4_rocker2_pane_ParamLimits

0xc07e,	// (0x0006ee9e) mp4_rocker2_pane

0x1cc1,	// (0x00064ae1) mp4_rocker2_pane_g1

0x1cb9,	// (0x00064ad9) mp4_rocker2_pane_g2

0xc3b9,	// (0x0006f1d9) mp4_rocker2_pane_g3

0xc3c1,	// (0x0006f1e1) mp4_rocker2_pane_g4

0xc3c9,	// (0x0006f1e9) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0007271f) mp4_rocker2_pane_g

0x75d2,	// (0x0006a3f2) main_camera4_pane

0x75d2,	// (0x0006a3f2) main_video4_pane

0xbdfd,	// (0x0006ec1d) main_video_tele_dialer_pane_t1_ParamLimits

0xbdfd,	// (0x0006ec1d) main_video_tele_dialer_pane_t1

0xbe0f,	// (0x0006ec2f) main_video_tele_dialer_pane_t2_ParamLimits

0xbe0f,	// (0x0006ec2f) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000726d9) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000726d9) main_video_tele_dialer_pane_t

0xc3e9,	// (0x0006f209) cam4_autofocus_pane_ParamLimits

0xc3e9,	// (0x0006f209) cam4_autofocus_pane

0xc3f5,	// (0x0006f215) cam4_image_uncrop_pane_ParamLimits

0xc3f5,	// (0x0006f215) cam4_image_uncrop_pane

0xc40e,	// (0x0006f22e) cam4_indicators_pane_ParamLimits

0xc40e,	// (0x0006f22e) cam4_indicators_pane

0xc42a,	// (0x0006f24a) main_camera4_pane_g1_ParamLimits

0xc42a,	// (0x0006f24a) main_camera4_pane_g1

0xc436,	// (0x0006f256) main_camera4_pane_g2_ParamLimits

0xc436,	// (0x0006f256) main_camera4_pane_g2

0xc436,	// (0x0006f256) main_camera4_pane_g3_ParamLimits

0xc436,	// (0x0006f256) main_camera4_pane_g3

0xc442,	// (0x0006f262) main_camera4_pane_g4_ParamLimits

0xc442,	// (0x0006f262) main_camera4_pane_g4

0xc44e,	// (0x0006f26e) main_camera4_pane_g5_ParamLimits

0xc44e,	// (0x0006f26e) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0007272a) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0007272a) main_camera4_pane_g

0xc468,	// (0x0006f288) main_camera4_pane_t1_ParamLimits

0xc468,	// (0x0006f288) main_camera4_pane_t1

0x54b0,	// (0x000682d0) bg_tb_trans_pane_cp06

0xc4ba,	// (0x0006f2da) cam4_indicators_pane_g1

0xc4c7,	// (0x0006f2e7) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00072745) cam4_indicators_pane_g

0xc4e7,	// (0x0006f307) cam4_indicators_pane_t1

0xc511,	// (0x0006f331) main_video4_pane_g1_ParamLimits

0xc511,	// (0x0006f331) main_video4_pane_g1

0xc51d,	// (0x0006f33d) main_video4_pane_g2_ParamLimits

0xc51d,	// (0x0006f33d) main_video4_pane_g2

0xc529,	// (0x0006f349) main_video4_pane_g3_ParamLimits

0xc529,	// (0x0006f349) main_video4_pane_g3

0xc535,	// (0x0006f355) main_video4_pane_g4_ParamLimits

0xc535,	// (0x0006f355) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0007274c) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0007274c) main_video4_pane_g

0xc557,	// (0x0006f377) vid4_indicators_pane_ParamLimits

0xc557,	// (0x0006f377) vid4_indicators_pane

0xc575,	// (0x0006f395) video4_image_uncrop_cif_pane_ParamLimits

0xc575,	// (0x0006f395) video4_image_uncrop_cif_pane

0xc584,	// (0x0006f3a4) video4_image_uncrop_nhd_pane_ParamLimits

0xc584,	// (0x0006f3a4) video4_image_uncrop_nhd_pane

0xc3f5,	// (0x0006f215) video4_image_uncrop_vga_pane_ParamLimits

0xc3f5,	// (0x0006f215) video4_image_uncrop_vga_pane

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp07

0xc4ba,	// (0x0006f2da) vid4_indicators_pane_g1

0xc59d,	// (0x0006f3bd) vid4_indicators_pane_g2

0xc5aa,	// (0x0006f3ca) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00072757) vid4_indicators_pane_g

0xc5d7,	// (0x0006f3f7) vid4_indicators_pane_t1

0xc5f1,	// (0x0006f411) cam4_autofocus_pane_g1

0xc5f9,	// (0x0006f419) cam4_autofocus_pane_g2

0xc601,	// (0x0006f421) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00072762) cam4_autofocus_pane_g

0xc609,	// (0x0006f429) cam4_autofocus_pane_g3_copy1

0xbe2f,	// (0x0006ec4f) video_down_pane_cp_t1

0xbe3d,	// (0x0006ec5d) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000726de) video_down_pane_cp_t

0x7879,	// (0x0006a699) popup_vitu2_window_ParamLimits

0x7879,	// (0x0006a699) popup_vitu2_window

0xc611,	// (0x0006f431) aid_size_cell2_itu2_ParamLimits

0xc611,	// (0x0006f431) aid_size_cell2_itu2

0xc633,	// (0x0006f453) aid_size_cell_itu2_ParamLimits

0xc633,	// (0x0006f453) aid_size_cell_itu2

0x24d3,	// (0x000652f3) bg_popup_window_pane_cp09_ParamLimits

0x24d3,	// (0x000652f3) bg_popup_window_pane_cp09

0xc677,	// (0x0006f497) field_vitu2_entry_pane_ParamLimits

0xc677,	// (0x0006f497) field_vitu2_entry_pane

0xc697,	// (0x0006f4b7) grid_vitu2_function_pane_ParamLimits

0xc697,	// (0x0006f4b7) grid_vitu2_function_pane

0xc6db,	// (0x0006f4fb) grid_vitu2_itu_pane_ParamLimits

0xc6db,	// (0x0006f4fb) grid_vitu2_itu_pane

0xc74f,	// (0x0006f56f) cell_vitu2_itu_pane_ParamLimits

0xc74f,	// (0x0006f56f) cell_vitu2_itu_pane

0xc766,	// (0x0006f586) cell_vitu2_function_pane_ParamLimits

0xc766,	// (0x0006f586) cell_vitu2_function_pane

0x1cc9,	// (0x00064ae9) bg_popup_call_pane_cp08_ParamLimits

0x1cc9,	// (0x00064ae9) bg_popup_call_pane_cp08

0x1ce2,	// (0x00064b02) field_vitu2_entry_pane_g1

0x1cee,	// (0x00064b0e) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00072769) field_vitu2_entry_pane_g

0x682b,	// (0x0006964b) field_vitu2_entry_pane_t1_ParamLimits

0x682b,	// (0x0006964b) field_vitu2_entry_pane_t1

0x6846,	// (0x00069666) field_vitu2_entry_pane_t2_ParamLimits

0x6846,	// (0x00069666) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00072770) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00072770) field_vitu2_entry_pane_t

0xc7aa,	// (0x0006f5ca) bg_button_pane_cp010_ParamLimits

0xc7aa,	// (0x0006f5ca) bg_button_pane_cp010

0xc7b8,	// (0x0006f5d8) cell_vitu2_itu_pane_g1

0xc7d6,	// (0x0006f5f6) cell_vitu2_itu_pane_t1_ParamLimits

0xc7d6,	// (0x0006f5f6) cell_vitu2_itu_pane_t1

0x6863,	// (0x00069683) cell_vitu2_itu_pane_t2_ParamLimits

0x6863,	// (0x00069683) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0007277a) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0007277a) cell_vitu2_itu_pane_t

0x000b,	// (0x00062e2b) bg_button_pane_cp011

0xc828,	// (0x0006f648) cell_vitu2_function_pane_g1

0x75d2,	// (0x0006a3f2) main_myfav_hc_pane

0xc2bc,	// (0x0006f0dc) popup_image3_note_pane_ParamLimits

0xc2bc,	// (0x0006f0dc) popup_image3_note_pane

0xc2ca,	// (0x0006f0ea) popup_image3_tool_bar_pane_ParamLimits

0xc2ca,	// (0x0006f0ea) popup_image3_tool_bar_pane

0x68d1,	// (0x000696f1) cell_vitu2_itu_pane_t3_ParamLimits

0x68d1,	// (0x000696f1) cell_vitu2_itu_pane_t3

0x75d2,	// (0x0006a3f2) bg_popup_trans_pane

0x1d4a,	// (0x00064b6a) grid_image3_tool_bar_pane

0x1d54,	// (0x00064b74) bg_popup_trans_pane_g1

0x0c70,	// (0x00063a90) bg_popup_trans_pane_g2

0x1d5c,	// (0x00064b7c) bg_popup_trans_pane_g3

0x1d64,	// (0x00064b84) bg_popup_trans_pane_g4

0x1d6c,	// (0x00064b8c) bg_popup_trans_pane_g5

0x1d74,	// (0x00064b94) bg_popup_trans_pane_g6

0x1d7c,	// (0x00064b9c) bg_popup_trans_pane_g7

0x1d84,	// (0x00064ba4) bg_popup_trans_pane_g8

0x0c50,	// (0x00063a70) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00072781) bg_popup_trans_pane_g

0x1d8c,	// (0x00064bac) cell_image3_tool_bar_pane_ParamLimits

0x1d8c,	// (0x00064bac) cell_image3_tool_bar_pane

0x5280,	// (0x000680a0) cell_image3_tool_bar_pane_g1

0x75d2,	// (0x0006a3f2) bg_popup_trans_pane_cp1

0x1da2,	// (0x00064bc2) popup_image3_note_pane_t1

0x1db0,	// (0x00064bd0) popup_image3_note_pane_t2

0x1dbe,	// (0x00064bde) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00072794) popup_image3_note_pane_t

0x1dce,	// (0x00064bee) popup_image3_note_pane_t3_copy1

0xc83c,	// (0x0006f65c) bg_myfav_hc_instruction_pane_ParamLimits

0xc83c,	// (0x0006f65c) bg_myfav_hc_instruction_pane

0xc854,	// (0x0006f674) cell_myfav_contact_pane_ParamLimits

0xc854,	// (0x0006f674) cell_myfav_contact_pane

0xc86e,	// (0x0006f68e) cell_myfav_contact_pane_cp1_ParamLimits

0xc86e,	// (0x0006f68e) cell_myfav_contact_pane_cp1

0xc886,	// (0x0006f6a6) cell_myfav_contact_pane_cp2_ParamLimits

0xc886,	// (0x0006f6a6) cell_myfav_contact_pane_cp2

0xc89e,	// (0x0006f6be) cell_myfav_contact_pane_cp3_ParamLimits

0xc89e,	// (0x0006f6be) cell_myfav_contact_pane_cp3

0xc8b5,	// (0x0006f6d5) cell_myfav_contact_pane_cp4_ParamLimits

0xc8b5,	// (0x0006f6d5) cell_myfav_contact_pane_cp4

0xc8cb,	// (0x0006f6eb) cell_myfav_contact_pane_cp5_ParamLimits

0xc8cb,	// (0x0006f6eb) cell_myfav_contact_pane_cp5

0xc8df,	// (0x0006f6ff) cell_myfav_contact_pane_cp6_ParamLimits

0xc8df,	// (0x0006f6ff) cell_myfav_contact_pane_cp6

0xc8f3,	// (0x0006f713) cell_myfav_contact_pane_cp7_ParamLimits

0xc8f3,	// (0x0006f713) cell_myfav_contact_pane_cp7

0x1ddc,	// (0x00064bfc) listscroll_gen_pane_cp05

0xc90b,	// (0x0006f72b) main_myfav_hc_pane_g1_ParamLimits

0xc90b,	// (0x0006f72b) main_myfav_hc_pane_g1

0xc925,	// (0x0006f745) main_myfav_hc_pane_g2_ParamLimits

0xc925,	// (0x0006f745) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0007279b) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0007279b) main_myfav_hc_pane_g

0xc957,	// (0x0006f777) main_myfav_hc_pane_t1_ParamLimits

0xc957,	// (0x0006f777) main_myfav_hc_pane_t1

0x1de5,	// (0x00064c05) main_myfav_hc_pane_t2_ParamLimits

0x1de5,	// (0x00064c05) main_myfav_hc_pane_t2

0x1df7,	// (0x00064c17) main_myfav_hc_pane_t3_ParamLimits

0x1df7,	// (0x00064c17) main_myfav_hc_pane_t3

0xc96e,	// (0x0006f78e) main_myfav_hc_pane_t4_ParamLimits

0xc96e,	// (0x0006f78e) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000727a2) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000727a2) main_myfav_hc_pane_t

0x5280,	// (0x000680a0) bg_myfav_hc_instruction_pane_g1

0x1e09,	// (0x00064c29) cell_myfav_contact_pane_g1_ParamLimits

0x1e09,	// (0x00064c29) cell_myfav_contact_pane_g1

0x1e09,	// (0x00064c29) cell_myfav_contact_pane_g2_ParamLimits

0x1e09,	// (0x00064c29) cell_myfav_contact_pane_g2

0x1e15,	// (0x00064c35) cell_myfav_contact_pane_g3_ParamLimits

0x1e15,	// (0x00064c35) cell_myfav_contact_pane_g3

0x5515,	// (0x00068335) cell_myfav_contact_pane_g4_ParamLimits

0x5515,	// (0x00068335) cell_myfav_contact_pane_g4

0x1e22,	// (0x00064c42) cell_myfav_contact_pane_g5_ParamLimits

0x1e22,	// (0x00064c42) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000727ad) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000727ad) cell_myfav_contact_pane_g

0xc93f,	// (0x0006f75f) main_myfav_hc_pane_g3_ParamLimits

0xc93f,	// (0x0006f75f) main_myfav_hc_pane_g3

0x7794,	// (0x0006a5b4) popup_adpt_find_window

0xc998,	// (0x0006f7b8) afind_page_pane_ParamLimits

0xc998,	// (0x0006f7b8) afind_page_pane

0xc9a5,	// (0x0006f7c5) aid_size_cell_afind_ParamLimits

0xc9a5,	// (0x0006f7c5) aid_size_cell_afind

0xc9bf,	// (0x0006f7df) bg_popup_sub_pane_cp09_ParamLimits

0xc9bf,	// (0x0006f7df) bg_popup_sub_pane_cp09

0xc9cc,	// (0x0006f7ec) find_pane_cp01_ParamLimits

0xc9cc,	// (0x0006f7ec) find_pane_cp01

0x1e2e,	// (0x00064c4e) grid_afind_control_pane_ParamLimits

0x1e2e,	// (0x00064c4e) grid_afind_control_pane

0xc9d9,	// (0x0006f7f9) grid_afind_pane_ParamLimits

0xc9d9,	// (0x0006f7f9) grid_afind_pane

0xc9f5,	// (0x0006f815) cell_afind_pane_ParamLimits

0xc9f5,	// (0x0006f815) cell_afind_pane

0x5280,	// (0x000680a0) afind_page_pane_g1

0xca41,	// (0x0006f861) afind_page_pane_g2

0xca4a,	// (0x0006f86a) afind_page_pane_g3

0x0002,

0xf998,	// (0x000727b8) afind_page_pane_g

0xca53,	// (0x0006f873) afind_page_pane_t1

0x1e42,	// (0x00064c62) cell_afind_grid_control_pane_ParamLimits

0x1e42,	// (0x00064c62) cell_afind_grid_control_pane

0x1bcc,	// (0x000649ec) bg_button_pane_cp69_ParamLimits

0x1bcc,	// (0x000649ec) bg_button_pane_cp69

0xca73,	// (0x0006f893) cell_afind_pane_g1_ParamLimits

0xca73,	// (0x0006f893) cell_afind_pane_g1

0xca80,	// (0x0006f8a0) cell_afind_pane_t1_ParamLimits

0xca80,	// (0x0006f8a0) cell_afind_pane_t1

0x0a5f,	// (0x0006387f) bg_button_pane_cp72

0x1e51,	// (0x00064c71) cell_afind_grid_control_pane_g1

0xa0e8,	// (0x0006cf08) aid_image_placing_area_ParamLimits

0xa0e8,	// (0x0006cf08) aid_image_placing_area

0xee1f,	// (0x00071c3f) field_vitu_entry_pane_g1_ParamLimits

0xee1f,	// (0x00071c3f) field_vitu_entry_pane_g1

0xee2b,	// (0x00071c4b) field_vitu_entry_pane_g2_ParamLimits

0xee2b,	// (0x00071c4b) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00072669) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00072669) field_vitu_entry_pane_g

0xbc39,	// (0x0006ea59) cell_vitu_itu_pane_g1_ParamLimits

0xbc7b,	// (0x0006ea9b) cell_vitu_itu_pane_t3_ParamLimits

0xbc7b,	// (0x0006ea9b) cell_vitu_itu_pane_t3

0x1b72,	// (0x00064992) mp4_progress_pane_t1_ParamLimits

0x1b8b,	// (0x000649ab) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000726fe) mp4_progress_pane_t_ParamLimits

0x1ba4,	// (0x000649c4) mup_progress_pane_cp04_ParamLimits

0xc982,	// (0x0006f7a2) main_myfav_hc_pane_t5_ParamLimits

0xc982,	// (0x0006f7a2) main_myfav_hc_pane_t5

0x64f4,	// (0x00069314) aid_zoom_text_primary

0x7794,	// (0x0006a5b4) popup_adpt_find_window_ParamLimits

0x000b,	// (0x00062e2b) main_cam_set_pane

0xc41c,	// (0x0006f23c) cam4_zoom_pane_ParamLimits

0xc41c,	// (0x0006f23c) cam4_zoom_pane

0xca92,	// (0x0006f8b2) main_cam_set_pane_g1_ParamLimits

0xca92,	// (0x0006f8b2) main_cam_set_pane_g1

0xcaa0,	// (0x0006f8c0) main_cam_set_pane_g2_ParamLimits

0xcaa0,	// (0x0006f8c0) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000727bf) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000727bf) main_cam_set_pane_g

0xcaac,	// (0x0006f8cc) main_cam_set_pane_t1_ParamLimits

0xcaac,	// (0x0006f8cc) main_cam_set_pane_t1

0xcac8,	// (0x0006f8e8) main_cset_listscroll_pane_ParamLimits

0xcac8,	// (0x0006f8e8) main_cset_listscroll_pane

0xcaf7,	// (0x0006f917) main_cset_slider_pane_ParamLimits

0xcaf7,	// (0x0006f917) main_cset_slider_pane

0x1e62,	// (0x00064c82) main_cset_list_pane_ParamLimits

0x1e62,	// (0x00064c82) main_cset_list_pane

0x1e72,	// (0x00064c92) scroll_pane_cp028

0xcb18,	// (0x0006f938) aid_area_touch_slider

0xcb34,	// (0x0006f954) cset_slider_pane

0xcb5e,	// (0x0006f97e) main_cset_slider_pane_g1

0xcb73,	// (0x0006f993) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000727c4) main_cset_slider_pane_g

0x1eab,	// (0x00064ccb) main_cset_slider_pane_t1

0xcc2f,	// (0x0006fa4f) main_cset_slider_pane_t2

0xcc49,	// (0x0006fa69) main_cset_slider_pane_t3

0xcc63,	// (0x0006fa83) main_cset_slider_pane_t4

0xcc7d,	// (0x0006fa9d) main_cset_slider_pane_t5

0xcc99,	// (0x0006fab9) main_cset_slider_pane_t6

0xccae,	// (0x0006face) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000727e9) main_cset_slider_pane_t

0xcdb2,	// (0x0006fbd2) cset_list_set_pane_ParamLimits

0xcdb2,	// (0x0006fbd2) cset_list_set_pane

0xcdc3,	// (0x0006fbe3) aid_position_infowindow_above

0xcdcb,	// (0x0006fbeb) aid_position_infowindow_below

0xcdd3,	// (0x0006fbf3) cset_list_set_pane_g1_ParamLimits

0xcdd3,	// (0x0006fbf3) cset_list_set_pane_g1

0x691e,	// (0x0006973e) cset_list_set_pane_g3_ParamLimits

0x691e,	// (0x0006973e) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00072808) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00072808) cset_list_set_pane_g

0x692d,	// (0x0006974d) cset_list_set_pane_t1_ParamLimits

0x692d,	// (0x0006974d) cset_list_set_pane_t1

0x000b,	// (0x00062e2b) list_highlight_pane_cp021_ParamLimits

0x000b,	// (0x00062e2b) list_highlight_pane_cp021

0x14ad,	// (0x000642cd) cset_slider_pane_g1

0x14bf,	// (0x000642df) cset_slider_pane_g2

0x14b6,	// (0x000642d6) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0007280d) cset_slider_pane_g

0xcddf,	// (0x0006fbff) aid_area_touch_cam4_zoom

0xcde7,	// (0x0006fc07) cam4_zoom_cont_pane

0xcdef,	// (0x0006fc0f) cam4_zoom_pane_g1

0xcdf7,	// (0x0006fc17) cam4_zoom_pane_g2

0xcdff,	// (0x0006fc1f) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00072814) cam4_zoom_pane_g

0x2835,	// (0x00065655) cam4_zoom_cont_pane_g1

0x283e,	// (0x0006565e) cam4_zoom_cont_pane_g2

0x2847,	// (0x00065667) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0007281b) cam4_zoom_cont_pane_g

0xc313,	// (0x0006f133) call4_image_pane_ParamLimits

0xc313,	// (0x0006f133) call4_image_pane

0x1bd8,	// (0x000649f8) call4_windows_conf_pane_ParamLimits

0x1c1f,	// (0x00064a3f) popup_call4_audio_in_window_ParamLimits

0x1c1f,	// (0x00064a3f) popup_call4_audio_in_window

0x75d2,	// (0x0006a3f2) bg_popup_call2_act_pane_cp02

0x1c97,	// (0x00064ab7) call4_list_conf_pane

0x5280,	// (0x000680a0) call4_image_pane_g1

0x5280,	// (0x000680a0) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0007252f) call4_image_pane_g

0x1f6c,	// (0x00064d8c) list_single_graphic_popup_conf4_pane_ParamLimits

0x1f6c,	// (0x00064d8c) list_single_graphic_popup_conf4_pane

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp022

0x1f81,	// (0x00064da1) list_single_graphic_popup_conf4_pane_g1

0x1187,	// (0x00063fa7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00072822) list_single_graphic_popup_conf4_pane_g

0x1f89,	// (0x00064da9) list_single_graphic_popup_conf4_pane_t1

0x8712,	// (0x0006b532) popup_vtel_slider_window_ParamLimits

0x8712,	// (0x0006b532) popup_vtel_slider_window

0x1bba,	// (0x000649da) dialer2_ne_pane_t2_ParamLimits

0x1bba,	// (0x000649da) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00072703) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00072703) dialer2_ne_pane_t

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp010_ParamLimits

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp010

0xce07,	// (0x0006fc27) popup_vtel_slider_window_g1_ParamLimits

0xce07,	// (0x0006fc27) popup_vtel_slider_window_g1

0xce13,	// (0x0006fc33) popup_vtel_slider_window_g2_ParamLimits

0xce13,	// (0x0006fc33) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00072827) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00072827) popup_vtel_slider_window_g

0xce5b,	// (0x0006fc7b) vtel_slider_pane_ParamLimits

0xce5b,	// (0x0006fc7b) vtel_slider_pane

0xce6a,	// (0x0006fc8a) vtel_slider_pane_g1_ParamLimits

0xce6a,	// (0x0006fc8a) vtel_slider_pane_g1

0xce77,	// (0x0006fc97) vtel_slider_pane_g2_ParamLimits

0xce77,	// (0x0006fc97) vtel_slider_pane_g2

0xce84,	// (0x0006fca4) vtel_slider_pane_g3_ParamLimits

0xce84,	// (0x0006fca4) vtel_slider_pane_g3

0xce6a,	// (0x0006fc8a) vtel_slider_pane_g4_ParamLimits

0xce6a,	// (0x0006fc8a) vtel_slider_pane_g4

0xce91,	// (0x0006fcb1) vtel_slider_pane_g5_ParamLimits

0xce91,	// (0x0006fcb1) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00072830) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00072830) vtel_slider_pane_g

0x75d2,	// (0x0006a3f2) main_gallery2_pane

0xc659,	// (0x0006f479) aid_size_row_itut2_dropdow_list_ParamLimits

0xc659,	// (0x0006f479) aid_size_row_itut2_dropdow_list

0xc6b9,	// (0x0006f4d9) grid_vitu2_function_top_pane_ParamLimits

0xc6b9,	// (0x0006f4d9) grid_vitu2_function_top_pane

0xc70b,	// (0x0006f52b) popup_vitu2_dropdown_list_window_ParamLimits

0xc70b,	// (0x0006f52b) popup_vitu2_dropdown_list_window

0xc72b,	// (0x0006f54b) popup_vitu2_match_list_window

0xce9e,	// (0x0006fcbe) cell_vitu2_function_top_pane_ParamLimits

0xce9e,	// (0x0006fcbe) cell_vitu2_function_top_pane

0xcebe,	// (0x0006fcde) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcebe,	// (0x0006fcde) cell_vitu2_function_top_pane_cp01

0xcedc,	// (0x0006fcfc) cell_vitu2_function_top_wide_pane_ParamLimits

0xcedc,	// (0x0006fcfc) cell_vitu2_function_top_wide_pane

0x000b,	// (0x00062e2b) bg_button_pane_cp012

0xcefa,	// (0x0006fd1a) cell_vitu2_function_top_pane_g1

0xcf09,	// (0x0006fd29) bg_button_pane_cp013_ParamLimits

0xcf09,	// (0x0006fd29) bg_button_pane_cp013

0xcf25,	// (0x0006fd45) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcf25,	// (0x0006fd45) cell_vitu2_function_top_wide_pane_g1

0x7879,	// (0x0006a699) bg_popup_sub_pane_cp20

0xcf3d,	// (0x0006fd5d) list_vitu2_match_list_pane

0x1d54,	// (0x00064b74) bg_popup_sub_pane_cp20_g1

0x1d5c,	// (0x00064b7c) bg_popup_sub_pane_cp20_g2

0x0c70,	// (0x00063a90) bg_popup_sub_pane_cp20_g3

0x1d64,	// (0x00064b84) bg_popup_sub_pane_cp20_g4

0x0c50,	// (0x00063a70) bg_popup_sub_pane_cp20_g5

0x1fa5,	// (0x00064dc5) bg_popup_sub_pane_cp20_g6

0x1d74,	// (0x00064b94) bg_popup_sub_pane_cp20_g7

0x1d7c,	// (0x00064b9c) bg_popup_sub_pane_cp20_g8

0x1d84,	// (0x00064ba4) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0007283b) bg_popup_sub_pane_cp20_g

0xcf55,	// (0x0006fd75) list_vitu2_match_list_item_pane_ParamLimits

0xcf55,	// (0x0006fd75) list_vitu2_match_list_item_pane

0xcf67,	// (0x0006fd87) list_vitu2_match_list_item_pane_t1

0x75d2,	// (0x0006a3f2) bg_popup_sub_pane_cp21

0x1041,	// (0x00063e61) grid_vitu2_dropdown_list_pane

0xcf75,	// (0x0006fd95) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcf75,	// (0x0006fd95) cell_vitu2_dropdown_list_char_pane

0xcf9a,	// (0x0006fdba) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcf9a,	// (0x0006fdba) cell_vitu2_dropdown_list_ctrl_pane

0x1fd7,	// (0x00064df7) cell_vitu2_dropdown_list_char_pane_g1

0x1fce,	// (0x00064dee) cell_vitu2_dropdown_list_char_pane_g2

0x1fc5,	// (0x00064de5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00072858) cell_vitu2_dropdown_list_char_pane_g

0xcfc8,	// (0x0006fde8) cell_vitu2_dropdown_list_char_pane_t1

0xcfd6,	// (0x0006fdf6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcfd6,	// (0x0006fdf6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcfe6,	// (0x0006fe06) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcfe6,	// (0x0006fe06) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcff7,	// (0x0006fe17) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcff7,	// (0x0006fe17) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd007,	// (0x0006fe27) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd007,	// (0x0006fe27) cell_vitu2_dropdown_list_ctrl_pane_g4

0x54b0,	// (0x000682d0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x54b0,	// (0x000682d0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0007285f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0007285f) cell_vitu2_dropdown_list_ctrl_pane_g

0xd020,	// (0x0006fe40) aid_size_cell_gallery2_ParamLimits

0xd020,	// (0x0006fe40) aid_size_cell_gallery2

0xd02e,	// (0x0006fe4e) grid_gallery2_pane_ParamLimits

0xd02e,	// (0x0006fe4e) grid_gallery2_pane

0xd03d,	// (0x0006fe5d) scroll_pane_cp029_ParamLimits

0xd03d,	// (0x0006fe5d) scroll_pane_cp029

0xd049,	// (0x0006fe69) cell_gallery2_pane_ParamLimits

0xd049,	// (0x0006fe69) cell_gallery2_pane

0x1fe0,	// (0x00064e00) cell_gallery2_pane_g2

0xd073,	// (0x0006fe93) cell_gallery2_pane_g3

0x1fea,	// (0x00064e0a) cell_gallery2_pane_g4

0x1ff2,	// (0x00064e12) cell_gallery2_pane_g5

0x1355,	// (0x00064175) grid_highlight_pane_cp10

0xc72b,	// (0x0006f54b) popup_vitu2_match_list_window_ParamLimits

0xc73f,	// (0x0006f55f) popup_vitu2_query_window_ParamLimits

0xc73f,	// (0x0006f55f) popup_vitu2_query_window

0x75d2,	// (0x0006a3f2) bg_vitu2_candi_button_pane

0x1fd7,	// (0x00064df7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1fce,	// (0x00064dee) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1fc5,	// (0x00064de5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6994,	// (0x000697b4) bg_button_pane_cp015

0xd07b,	// (0x0006fe9b) bg_button_pane_cp016

0xd085,	// (0x0006fea5) bg_button_pane_cp017

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp22

0x1ffa,	// (0x00064e1a) popup_vitu2_query_window_g1

0xd0a0,	// (0x0006fec0) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0007286a) popup_vitu2_query_window_g

0x69ab,	// (0x000697cb) popup_vitu2_query_window_t1_ParamLimits

0x69ab,	// (0x000697cb) popup_vitu2_query_window_t1

0x69d3,	// (0x000697f3) popup_vitu2_query_window_t2_ParamLimits

0x69d3,	// (0x000697f3) popup_vitu2_query_window_t2

0x69e5,	// (0x00069805) popup_vitu2_query_window_t3_ParamLimits

0x69e5,	// (0x00069805) popup_vitu2_query_window_t3

0xd0ae,	// (0x0006fece) popup_vitu2_query_window_t4_ParamLimits

0xd0ae,	// (0x0006fece) popup_vitu2_query_window_t4

0xd0c4,	// (0x0006fee4) popup_vitu2_query_window_t5_ParamLimits

0xd0c4,	// (0x0006fee4) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0007286f) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0007286f) popup_vitu2_query_window_t

0x1e5a,	// (0x00064c7a) main_cset_text_pane

0xcb18,	// (0x0006f938) aid_area_touch_slider_ParamLimits

0xcb34,	// (0x0006f954) cset_slider_pane_ParamLimits

0xcb5e,	// (0x0006f97e) main_cset_slider_pane_g1_ParamLimits

0xcb73,	// (0x0006f993) main_cset_slider_pane_g2_ParamLimits

0x1e7b,	// (0x00064c9b) main_cset_slider_pane_g3_ParamLimits

0x1e7b,	// (0x00064c9b) main_cset_slider_pane_g3

0xcb88,	// (0x0006f9a8) main_cset_slider_pane_g4_ParamLimits

0xcb88,	// (0x0006f9a8) main_cset_slider_pane_g4

0xcb97,	// (0x0006f9b7) main_cset_slider_pane_g5_ParamLimits

0xcb97,	// (0x0006f9b7) main_cset_slider_pane_g5

0xcba3,	// (0x0006f9c3) main_cset_slider_pane_g6_ParamLimits

0xcba3,	// (0x0006f9c3) main_cset_slider_pane_g6

0xf9a4,	// (0x000727c4) main_cset_slider_pane_g_ParamLimits

0x1eab,	// (0x00064ccb) main_cset_slider_pane_t1_ParamLimits

0xcc2f,	// (0x0006fa4f) main_cset_slider_pane_t2_ParamLimits

0xcc49,	// (0x0006fa69) main_cset_slider_pane_t3_ParamLimits

0xcc63,	// (0x0006fa83) main_cset_slider_pane_t4_ParamLimits

0xcc7d,	// (0x0006fa9d) main_cset_slider_pane_t5_ParamLimits

0xcc99,	// (0x0006fab9) main_cset_slider_pane_t6_ParamLimits

0xccae,	// (0x0006face) main_cset_slider_pane_t7_ParamLimits

0xccd8,	// (0x0006faf8) main_cset_slider_pane_t8_ParamLimits

0xccd8,	// (0x0006faf8) main_cset_slider_pane_t8

0xcd00,	// (0x0006fb20) main_cset_slider_pane_t9_ParamLimits

0xcd00,	// (0x0006fb20) main_cset_slider_pane_t9

0xcd28,	// (0x0006fb48) main_cset_slider_pane_t10_ParamLimits

0xcd28,	// (0x0006fb48) main_cset_slider_pane_t10

0xcd50,	// (0x0006fb70) main_cset_slider_pane_t11_ParamLimits

0xcd50,	// (0x0006fb70) main_cset_slider_pane_t11

0xcd78,	// (0x0006fb98) main_cset_slider_pane_t12_ParamLimits

0xcd78,	// (0x0006fb98) main_cset_slider_pane_t12

0xcd95,	// (0x0006fbb5) main_cset_slider_pane_t13_ParamLimits

0xcd95,	// (0x0006fbb5) main_cset_slider_pane_t13

0xf9c9,	// (0x000727e9) main_cset_slider_pane_t_ParamLimits

0x75d2,	// (0x0006a3f2) bg_popup_sub_pane_cp011

0x2006,	// (0x00064e26) main_cset_text_pane_g1

0x200e,	// (0x00064e2e) main_cset_text_pane_t1

0x201c,	// (0x00064e3c) main_cset_text_pane_t2

0x202a,	// (0x00064e4a) main_cset_text_pane_t3

0x2038,	// (0x00064e58) main_cset_text_pane_t4

0x2046,	// (0x00064e66) main_cset_text_pane_t5

0x2054,	// (0x00064e74) main_cset_text_pane_t6

0x2062,	// (0x00064e82) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0007287a) main_cset_text_pane_t

0x75d2,	// (0x0006a3f2) main_cam4_burst_pane

0x75d2,	// (0x0006a3f2) main_cam5_pane

0xca61,	// (0x0006f881) bg_button_pane_cp019

0xca6a,	// (0x0006f88a) bg_button_pane_cp020

0x1e87,	// (0x00064ca7) main_cset_slider_pane_g7_ParamLimits

0x1e87,	// (0x00064ca7) main_cset_slider_pane_g7

0x1e93,	// (0x00064cb3) main_cset_slider_pane_g8_ParamLimits

0x1e93,	// (0x00064cb3) main_cset_slider_pane_g8

0xcbb7,	// (0x0006f9d7) main_cset_slider_pane_g9_ParamLimits

0xcbb7,	// (0x0006f9d7) main_cset_slider_pane_g9

0xcbc3,	// (0x0006f9e3) main_cset_slider_pane_g10_ParamLimits

0xcbc3,	// (0x0006f9e3) main_cset_slider_pane_g10

0xcbcf,	// (0x0006f9ef) main_cset_slider_pane_g11_ParamLimits

0xcbcf,	// (0x0006f9ef) main_cset_slider_pane_g11

0xcbdb,	// (0x0006f9fb) main_cset_slider_pane_g12_ParamLimits

0xcbdb,	// (0x0006f9fb) main_cset_slider_pane_g12

0xcbe7,	// (0x0006fa07) main_cset_slider_pane_g13_ParamLimits

0xcbe7,	// (0x0006fa07) main_cset_slider_pane_g13

0xcbf3,	// (0x0006fa13) main_cset_slider_pane_g14_ParamLimits

0xcbf3,	// (0x0006fa13) main_cset_slider_pane_g14

0xcbff,	// (0x0006fa1f) main_cset_slider_pane_g15_ParamLimits

0xcbff,	// (0x0006fa1f) main_cset_slider_pane_g15

0x1ed9,	// (0x00064cf9) main_cset_slider_pane_t14_ParamLimits

0x1ed9,	// (0x00064cf9) main_cset_slider_pane_t14

0x1f12,	// (0x00064d32) main_cset_slider_pane_t15_ParamLimits

0x1f12,	// (0x00064d32) main_cset_slider_pane_t15

0xd0da,	// (0x0006fefa) aid_cam4_burst_size_cell_ParamLimits

0xd0da,	// (0x0006fefa) aid_cam4_burst_size_cell

0xd0f6,	// (0x0006ff16) grid_cam4_burst_pane_ParamLimits

0xd0f6,	// (0x0006ff16) grid_cam4_burst_pane

0xd128,	// (0x0006ff48) linegrid_cam4_burst_pane_ParamLimits

0xd128,	// (0x0006ff48) linegrid_cam4_burst_pane

0xd148,	// (0x0006ff68) scroll_pane_cp30_ParamLimits

0xd148,	// (0x0006ff68) scroll_pane_cp30

0xd154,	// (0x0006ff74) cell_cam4_burst_pane_ParamLimits

0xd154,	// (0x0006ff74) cell_cam4_burst_pane

0x207c,	// (0x00064e9c) linegrid_cam4_burst_pane_g1_ParamLimits

0x207c,	// (0x00064e9c) linegrid_cam4_burst_pane_g1

0xd194,	// (0x0006ffb4) linegrid_cam4_burst_pane_g2_ParamLimits

0xd194,	// (0x0006ffb4) linegrid_cam4_burst_pane_g2

0x2089,	// (0x00064ea9) linegrid_cam4_burst_pane_g3_ParamLimits

0x2089,	// (0x00064ea9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00072889) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00072889) linegrid_cam4_burst_pane_g

0xd1a5,	// (0x0006ffc5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd1a5,	// (0x0006ffc5) linegrid_cam4_burst_pane_g3_copy1

0x2096,	// (0x00064eb6) linegrid_cam4_burst_pane_g4_ParamLimits

0x2096,	// (0x00064eb6) linegrid_cam4_burst_pane_g4

0xd1bf,	// (0x0006ffdf) linegrid_cam4_burst_pane_g5_ParamLimits

0xd1bf,	// (0x0006ffdf) linegrid_cam4_burst_pane_g5

0xd1d0,	// (0x0006fff0) linegrid_cam4_burst_pane_g6_ParamLimits

0xd1d0,	// (0x0006fff0) linegrid_cam4_burst_pane_g6

0x20a3,	// (0x00064ec3) linegrid_cam4_burst_pane_g7_ParamLimits

0x20a3,	// (0x00064ec3) linegrid_cam4_burst_pane_g7

0xd1e7,	// (0x00070007) cell_cam4_burst_pane_g1

0x20bc,	// (0x00064edc) main_cam5_pane_t1_ParamLimits

0x20bc,	// (0x00064edc) main_cam5_pane_t1

0x20ce,	// (0x00064eee) main_cam5_pane_t2_ParamLimits

0x20ce,	// (0x00064eee) main_cam5_pane_t2

0x20e0,	// (0x00064f00) main_cam5_pane_t3_ParamLimits

0x20e0,	// (0x00064f00) main_cam5_pane_t3

0x20f2,	// (0x00064f12) main_cam5_pane_t4_ParamLimits

0x20f2,	// (0x00064f12) main_cam5_pane_t4

0x210a,	// (0x00064f2a) main_cam5_pane_t5_ParamLimits

0x210a,	// (0x00064f2a) main_cam5_pane_t5

0x211e,	// (0x00064f3e) main_cam5_pane_t6_ParamLimits

0x211e,	// (0x00064f3e) main_cam5_pane_t6

0x2132,	// (0x00064f52) main_cam5_pane_t7_ParamLimits

0x2132,	// (0x00064f52) main_cam5_pane_t7

0x2144,	// (0x00064f64) main_cam5_pane_t8_ParamLimits

0x2144,	// (0x00064f64) main_cam5_pane_t8

0x2162,	// (0x00064f82) main_cam5_pane_t9_ParamLimits

0x2162,	// (0x00064f82) main_cam5_pane_t9

0x2174,	// (0x00064f94) main_cam5_pane_t10_ParamLimits

0x2174,	// (0x00064f94) main_cam5_pane_t10

0x2186,	// (0x00064fa6) main_cam5_pane_t11_ParamLimits

0x2186,	// (0x00064fa6) main_cam5_pane_t11

0x219a,	// (0x00064fba) main_cam5_pane_t12_ParamLimits

0x219a,	// (0x00064fba) main_cam5_pane_t12

0x21b1,	// (0x00064fd1) main_cam5_pane_t13_ParamLimits

0x21b1,	// (0x00064fd1) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00072895) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00072895) main_cam5_pane_t

0x7842,	// (0x0006a662) popup_scut_keymap_window_ParamLimits

0x7842,	// (0x0006a662) popup_scut_keymap_window

0xd1fa,	// (0x0007001a) aid_size_cell_brow_shortcut

0x1355,	// (0x00064175) bg_popup_window_pane_cp010

0xd206,	// (0x00070026) grid_scut_pane

0xd212,	// (0x00070032) cell_scut_pane_ParamLimits

0xd212,	// (0x00070032) cell_scut_pane

0xd22d,	// (0x0007004d) cell_scut_pane_g1

0x21d4,	// (0x00064ff4) cell_scut_pane_t1

0x21e3,	// (0x00065003) cell_scut_pane_t2

0xd236,	// (0x00070056) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x000728b0) cell_scut_pane_t

0xb2c3,	// (0x0006e0e3) main_mup3_pane_g8_ParamLimits

0xb2c3,	// (0x0006e0e3) main_mup3_pane_g8

0xc667,	// (0x0006f487) area_vitu2_query_pane_ParamLimits

0xc667,	// (0x0006f487) area_vitu2_query_pane

0x699e,	// (0x000697be) input_focus_pane_cp08

0x21f2,	// (0x00065012) area_vitu2_query_pane_g1

0x6a0d,	// (0x0006982d) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000728b7) area_vitu2_query_pane_g

0xd244,	// (0x00070064) area_vitu2_query_pane_t1_ParamLimits

0xd244,	// (0x00070064) area_vitu2_query_pane_t1

0xd258,	// (0x00070078) area_vitu2_query_pane_t2_ParamLimits

0xd258,	// (0x00070078) area_vitu2_query_pane_t2

0x6a1e,	// (0x0006983e) area_vitu2_query_pane_t3_ParamLimits

0x6a1e,	// (0x0006983e) area_vitu2_query_pane_t3

0x6a46,	// (0x00069866) area_vitu2_query_pane_t4_ParamLimits

0x6a46,	// (0x00069866) area_vitu2_query_pane_t4

0x6a6e,	// (0x0006988e) area_vitu2_query_pane_t5_ParamLimits

0x6a6e,	// (0x0006988e) area_vitu2_query_pane_t5

0x6a96,	// (0x000698b6) area_vitu2_query_pane_t6_ParamLimits

0x6a96,	// (0x000698b6) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000728bc) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000728bc) area_vitu2_query_pane_t

0xd26c,	// (0x0007008c) bg_button_pane_cp018

0xd27a,	// (0x0007009a) bg_button_pane_cp021

0x6ae2,	// (0x00069902) bg_button_pane_cp022

0x6af3,	// (0x00069913) input_focus_pane_cp09

0x97aa,	// (0x0006c5ca) aid_size_touch_mv_arrow_left

0x97d5,	// (0x0006c5f5) aid_size_touch_mv_arrow_right

0xcc17,	// (0x0006fa37) main_cset_slider_pane_g16_ParamLimits

0xcc17,	// (0x0006fa37) main_cset_slider_pane_g16

0xcc23,	// (0x0006fa43) main_cset_slider_pane_g17_ParamLimits

0xcc23,	// (0x0006fa43) main_cset_slider_pane_g17

0xd1e7,	// (0x00070007) cell_cam4_burst_pane_g1_ParamLimits

0x75d2,	// (0x0006a3f2) compa_mode_pane

0xce1f,	// (0x0006fc3f) popup_vtel_slider_window_g3_ParamLimits

0xce1f,	// (0x0006fc3f) popup_vtel_slider_window_g3

0xce33,	// (0x0006fc53) popup_vtel_slider_window_g4_ParamLimits

0xce33,	// (0x0006fc53) popup_vtel_slider_window_g4

0xce47,	// (0x0006fc67) popup_vtel_slider_window_t1_ParamLimits

0xce47,	// (0x0006fc67) popup_vtel_slider_window_t1

0x75d2,	// (0x0006a3f2) main_cl_pane

0x4e31,	// (0x00067c51) popup_imed_adjust2_window_ParamLimits

0x4e05,	// (0x00067c25) bg_tb_trans_pane_cp05_ParamLimits

0x5757,	// (0x00068577) popup_imed_adjust2_window_g1_ParamLimits

0x5766,	// (0x00068586) popup_imed_adjust2_window_g2_ParamLimits

0x5766,	// (0x00068586) popup_imed_adjust2_window_g2

0x5772,	// (0x00068592) popup_imed_adjust2_window_g3_ParamLimits

0x5772,	// (0x00068592) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0007262d) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0007262d) popup_imed_adjust2_window_g

0x577e,	// (0x0006859e) popup_imed_adjust2_window_t1_ParamLimits

0xed93,	// (0x00071bb3) slider_imed_adjust_pane_ParamLimits

0xeda7,	// (0x00071bc7) slider_imed_adjust_pane_g1_ParamLimits

0xedb7,	// (0x00071bd7) slider_imed_adjust_pane_g2_ParamLimits

0xedc7,	// (0x00071be7) slider_imed_adjust_pane_g3_ParamLimits

0xedd8,	// (0x00071bf8) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00072634) slider_imed_adjust_pane_g_ParamLimits

0xc3d1,	// (0x0006f1f1) aid_touch_area_cam4_ParamLimits

0xc3d1,	// (0x0006f1f1) aid_touch_area_cam4

0xc3e1,	// (0x0006f201) battery_pane_cp01

0xc45c,	// (0x0006f27c) main_camera4_pane_g6_ParamLimits

0xc45c,	// (0x0006f27c) main_camera4_pane_g6

0xc47a,	// (0x0006f29a) main_camera4_pane_t2_ParamLimits

0xc47a,	// (0x0006f29a) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00072737) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00072737) main_camera4_pane_t

0xc501,	// (0x0006f321) aid_touch_area_vid4_ParamLimits

0xc501,	// (0x0006f321) aid_touch_area_vid4

0xc541,	// (0x0006f361) main_video4_pane_g5_ParamLimits

0xc541,	// (0x0006f361) main_video4_pane_g5

0xc565,	// (0x0006f385) vid4_progress_pane_ParamLimits

0xc565,	// (0x0006f385) vid4_progress_pane

0x1e9f,	// (0x00064cbf) main_cset_slider_pane_g18_ParamLimits

0x1e9f,	// (0x00064cbf) main_cset_slider_pane_g18

0x20b0,	// (0x00064ed0) cell_cam4_burst_pane_g2_ParamLimits

0x20b0,	// (0x00064ed0) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00072890) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00072890) cell_cam4_burst_pane_g

0xd286,	// (0x000700a6) bg_cl_pane_ParamLimits

0xd286,	// (0x000700a6) bg_cl_pane

0xd292,	// (0x000700b2) cl_header_pane_ParamLimits

0xd292,	// (0x000700b2) cl_header_pane

0xd29e,	// (0x000700be) cl_listscroll_pane_ParamLimits

0xd29e,	// (0x000700be) cl_listscroll_pane

0x229a,	// (0x000650ba) bg_cl_pane_g1

0x22a2,	// (0x000650c2) bg_cl_pane_g2

0x22aa,	// (0x000650ca) bg_cl_pane_g3

0x22b2,	// (0x000650d2) bg_cl_pane_g4

0x22ba,	// (0x000650da) bg_cl_pane_g5

0x22c2,	// (0x000650e2) bg_cl_pane_g6

0x22ca,	// (0x000650ea) bg_cl_pane_g7

0x22d2,	// (0x000650f2) bg_cl_pane_g8

0x22da,	// (0x000650fa) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x000728cb) bg_cl_pane_g

0xd2aa,	// (0x000700ca) aid_height_cl_leading_ParamLimits

0xd2aa,	// (0x000700ca) aid_height_cl_leading

0xd2b6,	// (0x000700d6) aid_height_cl_text_ParamLimits

0xd2b6,	// (0x000700d6) aid_height_cl_text

0x7879,	// (0x0006a699) bg_cl_header_pane_ParamLimits

0x7879,	// (0x0006a699) bg_cl_header_pane

0xd2ce,	// (0x000700ee) cl_header_pane_g1_ParamLimits

0xd2ce,	// (0x000700ee) cl_header_pane_g1

0xd2db,	// (0x000700fb) cl_header_pane_t1_ParamLimits

0xd2db,	// (0x000700fb) cl_header_pane_t1

0x22e2,	// (0x00065102) cl_list_pane

0x1e72,	// (0x00064c92) hc_scroll_pane_cp01

0x0c50,	// (0x00063a70) bg_cl_header_pane_g1

0x1d54,	// (0x00064b74) bg_cl_header_pane_g2

0x0c70,	// (0x00063a90) bg_cl_header_pane_g3

0x1d64,	// (0x00064b84) bg_cl_header_pane_g4

0x1d5c,	// (0x00064b7c) bg_cl_header_pane_g5

0x1fa5,	// (0x00064dc5) bg_cl_header_pane_g6

0x1d7c,	// (0x00064b9c) bg_cl_header_pane_g7

0x1d84,	// (0x00064ba4) bg_cl_header_pane_g8

0x1d74,	// (0x00064b94) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x000728de) bg_cl_header_pane_g

0xd2ed,	// (0x0007010d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd2ed,	// (0x0007010d) hc_cl_list_double_graphic_heading_pane

0xcf55,	// (0x0006fd75) hc_cl_list_single_graphic_pane_ParamLimits

0xcf55,	// (0x0006fd75) hc_cl_list_single_graphic_pane

0xd2fd,	// (0x0007011d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd2fd,	// (0x0007011d) hc_cl_list_single_graphic_pane_g1

0xd309,	// (0x00070129) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd309,	// (0x00070129) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x000728f1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x000728f1) hc_cl_list_single_graphic_pane_g

0xd31d,	// (0x0007013d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd31d,	// (0x0007013d) hc_cl_list_single_graphic_pane_t1

0xd2fd,	// (0x0007011d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd2fd,	// (0x0007011d) hc_cl_list_double_graphic_heading_pane_g1

0xd332,	// (0x00070152) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd332,	// (0x00070152) hc_cl_list_double_graphic_heading_pane_g2

0xd346,	// (0x00070166) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd346,	// (0x00070166) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x000728f6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x000728f6) hc_cl_list_double_graphic_heading_pane_g

0xd35a,	// (0x0007017a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd35a,	// (0x0007017a) hc_cl_list_double_graphic_heading_pane_t1

0xd36f,	// (0x0007018f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd36f,	// (0x0007018f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x000728fd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x000728fd) hc_cl_list_double_graphic_heading_pane_t

0xd396,	// (0x000701b6) vid4_progress_pane_g1

0xd3a2,	// (0x000701c2) vid4_progress_pane_g2

0xd3ae,	// (0x000701ce) vid4_progress_pane_g3

0xd3bd,	// (0x000701dd) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00072902) vid4_progress_pane_g

0xd3db,	// (0x000701fb) vid4_progress_pane_t1

0xd3f1,	// (0x00070211) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0007290d) vid4_progress_pane_t

0xd41c,	// (0x0007023c) wait_bar_pane_cp07

0x506d,	// (0x00067e8d) blid_firmament_pane_ParamLimits

0x50b0,	// (0x00067ed0) popup_blid_sat_info2_window_g1

0x50d4,	// (0x00067ef4) popup_blid_sat_info2_window_t3

0x50e2,	// (0x00067f02) popup_blid_sat_info2_window_t4

0x50f0,	// (0x00067f10) popup_blid_sat_info2_window_t5

0x50fe,	// (0x00067f1e) popup_blid_sat_info2_window_t6

0x510e,	// (0x00067f2e) popup_blid_sat_info2_window_t7

0x511c,	// (0x00067f3c) popup_blid_sat_info2_window_t8

0x512a,	// (0x00067f4a) popup_blid_sat_info2_window_t9

0x5138,	// (0x00067f58) popup_blid_sat_info2_window_t10

0x5200,	// (0x00068020) aid_firma_cardinal_ParamLimits

0x5214,	// (0x00068034) blid_firmament_pane_t1_ParamLimits

0x522b,	// (0x0006804b) blid_firmament_pane_t2_ParamLimits

0x5242,	// (0x00068062) blid_firmament_pane_t3_ParamLimits

0x5259,	// (0x00068079) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00072526) blid_firmament_pane_t_ParamLimits

0x5270,	// (0x00068090) blid_sat_info_pane_ParamLimits

0x000b,	// (0x00062e2b) main_cam_set_pane_ParamLimits

0xba57,	// (0x0006e877) aid_size_cell_colour_35_ParamLimits

0xba71,	// (0x0006e891) aid_size_cell_colour_112_ParamLimits

0xba88,	// (0x0006e8a8) aid_size_cell_effect_ParamLimits

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp02_ParamLimits

0x0eed,	// (0x00063d0d) heading_imed_pane_ParamLimits

0xbaa2,	// (0x0006e8c2) listscroll_imed_pane_ParamLimits

0x4433,	// (0x00067253) popup_call2_audio_first_window_g5_ParamLimits

0x4433,	// (0x00067253) popup_call2_audio_first_window_g5

0xc18a,	// (0x0006efaa) aid_size_touch_image3_arrow_left_ParamLimits

0xc18a,	// (0x0006efaa) aid_size_touch_image3_arrow_left

0xc1a0,	// (0x0006efc0) aid_size_touch_image3_arrow_right_ParamLimits

0xc1a0,	// (0x0006efc0) aid_size_touch_image3_arrow_right

0xd407,	// (0x00070227) vid4_progress_pane_t3

0xbd42,	// (0x0006eb62) main_hwr_training_symbol_option_pane_ParamLimits

0xbd42,	// (0x0006eb62) main_hwr_training_symbol_option_pane

0xf043,	// (0x00071e63) popup_hwr_training_preview_window_ParamLimits

0xf043,	// (0x00071e63) popup_hwr_training_preview_window

0xbda3,	// (0x0006ebc3) hwr_training_navi_pane_g5_ParamLimits

0xbda3,	// (0x0006ebc3) hwr_training_navi_pane_g5

0x1d42,	// (0x00064b62) popup_char_count_window

0x7879,	// (0x0006a699) bg_popup_sub_pane_cp20_ParamLimits

0xcf3d,	// (0x0006fd5d) list_vitu2_match_list_pane_ParamLimits

0xcf49,	// (0x0006fd69) vitu2_page_scroll_pane_ParamLimits

0xcf49,	// (0x0006fd69) vitu2_page_scroll_pane

0x2345,	// (0x00065165) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2345,	// (0x00065165) list_single_hwr_training_symbol_option_pane

0x2358,	// (0x00065178) list_single_hwr_training_symbol_option_pane_g1

0x2360,	// (0x00065180) list_single_hwr_training_symbol_option_pane_t1

0x236e,	// (0x0006518e) bg_button_pane_cp023

0x2377,	// (0x00065197) bg_button_pane_cp024

0xd436,	// (0x00070256) vitu2_page_scroll_pane_g1

0xd43e,	// (0x0007025e) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00072914) vitu2_page_scroll_pane_g

0xd448,	// (0x00070268) vitu2_page_scroll_pane_t1

0x4fcd,	// (0x00067ded) popup_char_count_window_g1

0x23aa,	// (0x000651ca) popup_char_count_window_g2

0x23b3,	// (0x000651d3) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00072919) popup_char_count_window_g

0x23bc,	// (0x000651dc) popup_char_count_window_t1

0x75d2,	// (0x0006a3f2) main_vded2_pane

0x5743,	// (0x00068563) aid_size_cell_imed_line

0x574d,	// (0x0006856d) grid_imed_line_width_pane

0xc5bb,	// (0x0006f3db) vid4_indicators_pane_g4

0x23ca,	// (0x000651ea) cell_imed_line_width_pane_ParamLimits

0x23ca,	// (0x000651ea) cell_imed_line_width_pane

0x23e0,	// (0x00065200) cell_imed_line_width_pane_g1

0x572d,	// (0x0006854d) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00072920) cell_imed_line_width_pane_g

0xd457,	// (0x00070277) main_vded2_pane_g1_ParamLimits

0xd457,	// (0x00070277) main_vded2_pane_g1

0xd466,	// (0x00070286) main_vded2_pane_g2_ParamLimits

0xd466,	// (0x00070286) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00072925) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00072925) main_vded2_pane_g

0xd474,	// (0x00070294) vded2_slider_pane_ParamLimits

0xd474,	// (0x00070294) vded2_slider_pane

0xd481,	// (0x000702a1) aid_size_touch_vded2_end

0xd48b,	// (0x000702ab) aid_size_touch_vded2_playhead

0x23e9,	// (0x00065209) aid_size_touch_vded2_start

0x23f1,	// (0x00065211) vded2_slider_bg_pane

0x23fa,	// (0x0006521a) vded2_slider_pane_g1

0x2403,	// (0x00065223) vded2_slider_pane_g2

0xd493,	// (0x000702b3) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0007292a) vded2_slider_pane_g

0x240b,	// (0x0006522b) vded2_slider_bg_pane_g1

0x2414,	// (0x00065234) vded2_slider_bg_pane_g2

0x241d,	// (0x0006523d) vded2_slider_bg_pane_g3

0x0002,

0xf7d6,	// (0x000725f6) vded2_slider_bg_pane_g

0x9e48,	// (0x0006cc68) aid_postcard_touch_down_pane_ParamLimits

0x9e48,	// (0x0006cc68) aid_postcard_touch_down_pane

0x9e58,	// (0x0006cc78) aid_postcard_touch_up_pane_ParamLimits

0x9e58,	// (0x0006cc78) aid_postcard_touch_up_pane

0x75d2,	// (0x0006a3f2) main_blid2_pane

0x4e13,	// (0x00067c33) popup_blid2_search_window

0x75d2,	// (0x0006a3f2) blid2_gps_pane

0x75d2,	// (0x0006a3f2) blid2_navig_pane

0x75d2,	// (0x0006a3f2) blid2_search_pane

0x75d2,	// (0x0006a3f2) blid2_tripm_pane

0xd49c,	// (0x000702bc) blid2_search_pane_g1_ParamLimits

0xd49c,	// (0x000702bc) blid2_search_pane_g1

0xd4ac,	// (0x000702cc) blid2_search_pane_t1_ParamLimits

0xd4ac,	// (0x000702cc) blid2_search_pane_t1

0xd4be,	// (0x000702de) aid_size_cell_blid2_gps_ParamLimits

0xd4be,	// (0x000702de) aid_size_cell_blid2_gps

0xd4ce,	// (0x000702ee) blid2_gps_pane_g1_ParamLimits

0xd4ce,	// (0x000702ee) blid2_gps_pane_g1

0xd4da,	// (0x000702fa) grid_blid2_satellite_pane_ParamLimits

0xd4da,	// (0x000702fa) grid_blid2_satellite_pane

0xd4e8,	// (0x00070308) blid2_navig_pane_g1_ParamLimits

0xd4e8,	// (0x00070308) blid2_navig_pane_g1

0xd4f4,	// (0x00070314) blid2_navig_pane_t1_ParamLimits

0xd4f4,	// (0x00070314) blid2_navig_pane_t1

0xd506,	// (0x00070326) blid2_navig_pane_t2_ParamLimits

0xd506,	// (0x00070326) blid2_navig_pane_t2

0x0001,

0xfb11,	// (0x00072931) blid2_navig_pane_t_ParamLimits

0xfb11,	// (0x00072931) blid2_navig_pane_t

0xd518,	// (0x00070338) blid2_navig_ring_pane_ParamLimits

0xd518,	// (0x00070338) blid2_navig_ring_pane

0xd528,	// (0x00070348) blid2_speed_pane_ParamLimits

0xd528,	// (0x00070348) blid2_speed_pane

0xd534,	// (0x00070354) blid2_tripm_pane_g1_ParamLimits

0xd534,	// (0x00070354) blid2_tripm_pane_g1

0xd544,	// (0x00070364) blid2_tripm_pane_g2_ParamLimits

0xd544,	// (0x00070364) blid2_tripm_pane_g2

0xd550,	// (0x00070370) blid2_tripm_pane_g3_ParamLimits

0xd550,	// (0x00070370) blid2_tripm_pane_g3

0xd55c,	// (0x0007037c) blid2_tripm_pane_g4_ParamLimits

0xd55c,	// (0x0007037c) blid2_tripm_pane_g4

0xd568,	// (0x00070388) blid2_tripm_pane_g5_ParamLimits

0xd568,	// (0x00070388) blid2_tripm_pane_g5

0x0005,

0xfb16,	// (0x00072936) blid2_tripm_pane_g_ParamLimits

0xfb16,	// (0x00072936) blid2_tripm_pane_g

0xd584,	// (0x000703a4) blid2_tripm_pane_t1_ParamLimits

0xd584,	// (0x000703a4) blid2_tripm_pane_t1

0xd598,	// (0x000703b8) blid2_tripm_pane_t2_ParamLimits

0xd598,	// (0x000703b8) blid2_tripm_pane_t2

0xd5aa,	// (0x000703ca) blid2_tripm_pane_t3_ParamLimits

0xd5aa,	// (0x000703ca) blid2_tripm_pane_t3

0x0003,

0xfb23,	// (0x00072943) blid2_tripm_pane_t_ParamLimits

0xfb23,	// (0x00072943) blid2_tripm_pane_t

0xd5dc,	// (0x000703fc) cell_blid2_satellite_pane_ParamLimits

0xd5dc,	// (0x000703fc) cell_blid2_satellite_pane

0xd5fa,	// (0x0007041a) cell_blid2_satellite_pane_g1

0x2426,	// (0x00065246) cell_blid2_satellite_pane_t1

0x5280,	// (0x000680a0) blid2_speed_pane_g1

0x2434,	// (0x00065254) blid2_speed_pane_t1

0x2442,	// (0x00065262) blid2_speed_pane_t2

0x0001,

0xfb2c,	// (0x0007294c) blid2_speed_pane_t

0x5280,	// (0x000680a0) blid2_navig_ring_pane_g1

0xd603,	// (0x00070423) blid2_navig_ring_pane_g2

0xd60b,	// (0x0007042b) blid2_navig_ring_pane_g3

0xd613,	// (0x00070433) blid2_navig_ring_pane_g4

0xd61b,	// (0x0007043b) blid2_navig_ring_pane_g5

0x0004,

0xfb31,	// (0x00072951) blid2_navig_ring_pane_g

0x75d2,	// (0x0006a3f2) bg_popup_window_pane_cp011

0x2450,	// (0x00065270) popup_blid2_search_window_g1

0x2458,	// (0x00065278) popup_blid2_search_window_t1

0x2466,	// (0x00065286) popup_blid2_search_window_t2

0x0001,

0xfb3c,	// (0x0007295c) popup_blid2_search_window_t

0x0b5f,	// (0x0006397f) main_browser_pane_g1

0x077e,	// (0x0006359e) main_browser_pane_ParamLimits

0x000b,	// (0x00062e2b) bg_button_pane_cp011_ParamLimits

0xc828,	// (0x0006f648) cell_vitu2_function_pane_g1_ParamLimits

0x000b,	// (0x00062e2b) bg_popup_sub_pane_cp22_ParamLimits

0x699e,	// (0x000697be) input_focus_pane_cp08_ParamLimits

0xd08f,	// (0x0006feaf) popup_vitu2_query_button_pane_ParamLimits

0xd08f,	// (0x0006feaf) popup_vitu2_query_button_pane

0x6994,	// (0x000697b4) popup_vitu2_query_input_button_pane

0x1ffa,	// (0x00064e1a) popup_vitu2_query_window_g1_ParamLimits

0xd0a0,	// (0x0006fec0) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0007286a) popup_vitu2_query_window_g_ParamLimits

0x75d2,	// (0x0006a3f2) bg_button_pane_cp026

0xd623,	// (0x00070443) popup_vitu2_query_input_button_pane_g1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp025

0x2474,	// (0x00065294) popup_vitu2_query_button_pane_t1

0xafd1,	// (0x0006ddf1) main_mp3_pane_t6

0xafe1,	// (0x0006de01) popup_slider_window_cp01

0xc4b2,	// (0x0006f2d2) cam4_battery_pane

0xc593,	// (0x0006f3b3) cam4_battery_pane_cp02

0xd384,	// (0x000701a4) cam4_battery_pane_cp01

0xd38e,	// (0x000701ae) cam4_battery_pane_cp03

0x5280,	// (0x000680a0) cam4_battery_pane_g1

0x1bb0,	// (0x000649d0) cam4_battery_pane_g2

0x0001,

0xfb41,	// (0x00072961) cam4_battery_pane_g

0x5146,	// (0x00067f66) popup_blid_sat_info2_window_t11

0x97aa,	// (0x0006c5ca) aid_size_touch_mv_arrow_left_ParamLimits

0x97d5,	// (0x0006c5f5) aid_size_touch_mv_arrow_right_ParamLimits

0x12b5,	// (0x000640d5) navi_pane_g1_ParamLimits

0x97fe,	// (0x0006c61e) navi_pane_g2_ParamLimits

0x982c,	// (0x0006c64c) navi_pane_g3_ParamLimits

0xf418,	// (0x00072238) navi_pane_g_ParamLimits

0x9886,	// (0x0006c6a6) navi_pane_mv_t1_ParamLimits

0xbaae,	// (0x0006e8ce) grid_imed_effect_pane_ParamLimits

0x0aa4,	// (0x000638c4) aid_placing_vt_slider_lsc

0x0aac,	// (0x000638cc) aid_placing_vt_slider_prt

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp01_ParamLimits

0x53d0,	// (0x000681f0) popup_image_details_window_g1_ParamLimits

0x53e3,	// (0x00068203) popup_image_details_window_g2_ParamLimits

0x53f8,	// (0x00068218) popup_image_details_window_g3_ParamLimits

0x53f8,	// (0x00068218) popup_image_details_window_g3

0xf74b,	// (0x0007256b) popup_image_details_window_g_ParamLimits

0x540c,	// (0x0006822c) popup_image_details_window_t1_ParamLimits

0x541e,	// (0x0006823e) popup_image_details_window_t2_ParamLimits

0x5437,	// (0x00068257) popup_image_details_window_t3_ParamLimits

0x544b,	// (0x0006826b) popup_image_details_window_t4_ParamLimits

0x5466,	// (0x00068286) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00072572) popup_image_details_window_t_ParamLimits

0xd2c2,	// (0x000700e2) cl_header_name_pane_ParamLimits

0xd2c2,	// (0x000700e2) cl_header_name_pane

0xd62b,	// (0x0007044b) cl_header_name_pane_t1_ParamLimits

0xd62b,	// (0x0007044b) cl_header_name_pane_t1

0xd642,	// (0x00070462) cl_header_name_pane_t2_ParamLimits

0xd642,	// (0x00070462) cl_header_name_pane_t2

0xd66c,	// (0x0007048c) cl_header_name_pane_t3_ParamLimits

0xd66c,	// (0x0007048c) cl_header_name_pane_t3

0x0002,

0xfb46,	// (0x00072966) cl_header_name_pane_t_ParamLimits

0xfb46,	// (0x00072966) cl_header_name_pane_t

0x9857,	// (0x0006c677) navi_pane_mv_g2_ParamLimits

0x1ce2,	// (0x00064b02) field_vitu2_entry_pane_g1_ParamLimits

0x1cee,	// (0x00064b0e) field_vitu2_entry_pane_g2_ParamLimits

0x1cfa,	// (0x00064b1a) field_vitu2_entry_pane_g3_ParamLimits

0x1cfa,	// (0x00064b1a) field_vitu2_entry_pane_g3

0xf949,	// (0x00072769) field_vitu2_entry_pane_g_ParamLimits

0xc7b8,	// (0x0006f5d8) cell_vitu2_itu_pane_g1_ParamLimits

0xc7c8,	// (0x0006f5e8) cell_vitu2_itu_pane_g2_ParamLimits

0xc7c8,	// (0x0006f5e8) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00072775) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00072775) cell_vitu2_itu_pane_g

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp05_ParamLimits

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp05

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp03

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp04

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp10_ParamLimits

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp10

0x6ae2,	// (0x00069902) bg_vkb2_func_pane_cp08

0xd26c,	// (0x0007008c) bg_vkb2_func_pane_cp06

0xd27a,	// (0x0007009a) bg_vkb2_func_pane_cp07

0x2380,	// (0x000651a0) bg_vkb2_func_pane_cp11_ParamLimits

0x2380,	// (0x000651a0) bg_vkb2_func_pane_cp11

0x2395,	// (0x000651b5) bg_vkb2_func_pane_cp12_ParamLimits

0x2395,	// (0x000651b5) bg_vkb2_func_pane_cp12

0x75d2,	// (0x0006a3f2) bg_vkb2_func_pane_cp09

0x1d54,	// (0x00064b74) bg_vkb2_func_pane_g1

0x0c70,	// (0x00063a90) bg_vkb2_func_pane_g2

0x1d5c,	// (0x00064b7c) bg_vkb2_func_pane_g3

0x1d64,	// (0x00064b84) bg_vkb2_func_pane_g4

0x1fa5,	// (0x00064dc5) bg_vkb2_func_pane_g5

0x1d7c,	// (0x00064b9c) bg_vkb2_func_pane_g6

0x1d84,	// (0x00064ba4) bg_vkb2_func_pane_g7

0x1d74,	// (0x00064b94) bg_vkb2_func_pane_g8

0x0c50,	// (0x00063a70) bg_vkb2_func_pane_g9

0x0008,

0xfb4d,	// (0x0007296d) bg_vkb2_func_pane_g

0xd576,	// (0x00070396) blid2_tripm_pane_g6_ParamLimits

0xd576,	// (0x00070396) blid2_tripm_pane_g6

0x1b6a,	// (0x0006498a) mp4_progress_pane_g1

0xd5d0,	// (0x000703f0) blid2_tripm_values_pane_ParamLimits

0xd5d0,	// (0x000703f0) blid2_tripm_values_pane

0xd691,	// (0x000704b1) blid2_tripm_values_pane_t1

0xd69f,	// (0x000704bf) blid2_tripm_values_pane_t2

0xd6ad,	// (0x000704cd) blid2_tripm_values_pane_t3

0xd6bb,	// (0x000704db) blid2_tripm_values_pane_t4

0xd6c9,	// (0x000704e9) blid2_tripm_values_pane_t5

0xd6d7,	// (0x000704f7) blid2_tripm_values_pane_t6

0xd6e5,	// (0x00070505) blid2_tripm_values_pane_t7

0xd6f3,	// (0x00070513) blid2_tripm_values_pane_t8

0xd701,	// (0x00070521) blid2_tripm_values_pane_t9

0x0008,

0xfb60,	// (0x00072980) blid2_tripm_values_pane_t

0x8646,	// (0x0006b466) call_video_pane_t1_ParamLimits

0x865c,	// (0x0006b47c) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x000720c1) call_video_pane_t_ParamLimits

0x6776,	// (0x00069596) msg_header_pane_g1_ParamLimits

0x14f2,	// (0x00064312) msg_header_pane_g2_ParamLimits

0x14f2,	// (0x00064312) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000722db) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000722db) msg_header_pane_g

0x077e,	// (0x0006359e) main_clock2_pane_ParamLimits

0xb831,	// (0x0006e651) grid_clock2_toolbar_pane_ParamLimits

0xb831,	// (0x0006e651) grid_clock2_toolbar_pane

0xb831,	// (0x0006e651) listscroll_clock2_pane_ParamLimits

0xb831,	// (0x0006e651) listscroll_clock2_pane

0xb8e5,	// (0x0006e705) main_clock2_pane_t3_ParamLimits

0xb8e5,	// (0x0006e705) main_clock2_pane_t3

0xb8f7,	// (0x0006e717) main_clock2_pane_t4_ParamLimits

0xb8f7,	// (0x0006e717) main_clock2_pane_t4

0x2482,	// (0x000652a2) cell_clock2_toolbar_pane

0x248a,	// (0x000652aa) cell_clock2_toolbar_pane_cp01

0x248a,	// (0x000652aa) cell_clock2_toolbar_pane_cp02

0x2492,	// (0x000652b2) cell_clock2_toolbar_pane_cp03

0x249a,	// (0x000652ba) list_clock2_pane

0x121b,	// (0x0006403b) scroll_pane_cp10

0x24a2,	// (0x000652c2) list_single_clock2_pane_ParamLimits

0x24a2,	// (0x000652c2) list_single_clock2_pane

0x1355,	// (0x00064175) list_highlight_pane_cp08

0x24af,	// (0x000652cf) list_single_clock2_pane_t1

0x24bd,	// (0x000652dd) list_single_clock2_pane_t2

0x0001,

0xfb73,	// (0x00072993) list_single_clock2_pane_t

0x75d2,	// (0x0006a3f2) bg_button_pane_cp10

0x24cb,	// (0x000652eb) cell_clock2_toolbar_pane_g1

0x9daa,	// (0x0006cbca) aid_main_viewer_pane_g1_ParamLimits

0x9daa,	// (0x0006cbca) aid_main_viewer_pane_g1

0x9db6,	// (0x0006cbd6) aid_main_viewer_pane_g2_ParamLimits

0x9db6,	// (0x0006cbd6) aid_main_viewer_pane_g2

0x9dc2,	// (0x0006cbe2) aid_main_viewer_pane_g3_ParamLimits

0x9dc2,	// (0x0006cbe2) aid_main_viewer_pane_g3

0x9dd3,	// (0x0006cbf3) aid_main_viewer_pane_g4_ParamLimits

0x9dd3,	// (0x0006cbf3) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000722ec) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000722ec) aid_main_viewer_pane_g

0xa563,	// (0x0006d383) main_calc_pane_ParamLimits

0xa570,	// (0x0006d390) main_dialer2_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_cam6_pane

0x75d2,	// (0x0006a3f2) main_vid6_pane

0xb83d,	// (0x0006e65d) listscroll_gen_pane_cp06_ParamLimits

0xb83d,	// (0x0006e65d) listscroll_gen_pane_cp06

0xb909,	// (0x0006e729) main_clock2_pane_t5_ParamLimits

0xb909,	// (0x0006e729) main_clock2_pane_t5

0xb958,	// (0x0006e778) aid_call2_pane_cp10_ParamLimits

0xb96a,	// (0x0006e78a) aid_call_pane_cp10_ParamLimits

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g1_ParamLimits

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb97c,	// (0x0006e79c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb97c,	// (0x0006e79c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x128a,	// (0x000640aa) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00072622) popup_clock_analogue_window_cp10_g_ParamLimits

0xb98e,	// (0x0006e7ae) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc137,	// (0x0006ef57) cell_dialer2_keypad_pane_g2_ParamLimits

0xc137,	// (0x0006ef57) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00072708) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00072708) cell_dialer2_keypad_pane_g

0xc153,	// (0x0006ef73) cell_dialer2_keypad_pane_t1

0xcb05,	// (0x0006f925) main_cset_text2_pane_ParamLimits

0xcb05,	// (0x0006f925) main_cset_text2_pane

0x21f2,	// (0x00065012) area_vitu2_query_pane_g1_ParamLimits

0x6a0d,	// (0x0006982d) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000728b7) area_vitu2_query_pane_g_ParamLimits

0x6abe,	// (0x000698de) area_vitu2_query_pane_t7_ParamLimits

0x6abe,	// (0x000698de) area_vitu2_query_pane_t7

0xd26c,	// (0x0007008c) bg_button_pane_cp018_ParamLimits

0xd27a,	// (0x0007009a) bg_button_pane_cp021_ParamLimits

0x6ae2,	// (0x00069902) bg_button_pane_cp022_ParamLimits

0x6ae2,	// (0x00069902) bg_vkb2_func_pane_cp08_ParamLimits

0xd26c,	// (0x0007008c) bg_vkb2_func_pane_cp06_ParamLimits

0xd27a,	// (0x0007009a) bg_vkb2_func_pane_cp07_ParamLimits

0x6af3,	// (0x00069913) input_focus_pane_cp09_ParamLimits

0xd70f,	// (0x0007052f) cam6_autofocus_pane_ParamLimits

0xd70f,	// (0x0007052f) cam6_autofocus_pane

0xd731,	// (0x00070551) cam6_image_uncrop_pane_ParamLimits

0xd731,	// (0x00070551) cam6_image_uncrop_pane

0xd75e,	// (0x0007057e) cam6_indi_pane_ParamLimits

0xd75e,	// (0x0007057e) cam6_indi_pane

0xd778,	// (0x00070598) cam6_mode_pane_ParamLimits

0xd778,	// (0x00070598) cam6_mode_pane

0xd78c,	// (0x000705ac) cam6_timer_pane_ParamLimits

0xd78c,	// (0x000705ac) cam6_timer_pane

0xd798,	// (0x000705b8) cam6_zoom_pane_ParamLimits

0xd798,	// (0x000705b8) cam6_zoom_pane

0xc511,	// (0x0006f331) cam6_mode_pane_g1_ParamLimits

0xc511,	// (0x0006f331) cam6_mode_pane_g1

0xc529,	// (0x0006f349) cam6_mode_pane_g2_ParamLimits

0xc529,	// (0x0006f349) cam6_mode_pane_g2

0xc535,	// (0x0006f355) cam6_mode_pane_g3_ParamLimits

0xc535,	// (0x0006f355) cam6_mode_pane_g3

0xc541,	// (0x0006f361) cam6_mode_pane_g4_ParamLimits

0xc541,	// (0x0006f361) cam6_mode_pane_g4

0x0003,

0xfb78,	// (0x00072998) cam6_mode_pane_g_ParamLimits

0xfb78,	// (0x00072998) cam6_mode_pane_g

0x24d3,	// (0x000652f3) bg_tb_trans_pane_cp08_ParamLimits

0x24d3,	// (0x000652f3) bg_tb_trans_pane_cp08

0x24e1,	// (0x00065301) cam6_battery_pane_ParamLimits

0x24e1,	// (0x00065301) cam6_battery_pane

0x24f7,	// (0x00065317) cam6_indi_pane_g1_ParamLimits

0x24f7,	// (0x00065317) cam6_indi_pane_g1

0x2509,	// (0x00065329) cam6_indi_pane_g2_ParamLimits

0x2509,	// (0x00065329) cam6_indi_pane_g2

0x251b,	// (0x0006533b) cam6_indi_pane_g3_ParamLimits

0x251b,	// (0x0006533b) cam6_indi_pane_g3

0x0002,

0xfb81,	// (0x000729a1) cam6_indi_pane_g_ParamLimits

0xfb81,	// (0x000729a1) cam6_indi_pane_g

0x252d,	// (0x0006534d) cam6_indi_pane_t1_ParamLimits

0x252d,	// (0x0006534d) cam6_indi_pane_t1

0xc5f1,	// (0x0006f411) cam6_autofocus_pane_g1

0xc5f9,	// (0x0006f419) cam6_autofocus_pane_g2

0xc601,	// (0x0006f421) cam6_autofocus_pane_g3

0xc609,	// (0x0006f429) cam6_autofocus_pane_g4

0x0003,

0xfb88,	// (0x000729a8) cam6_autofocus_pane_g

0x2553,	// (0x00065373) cam6_timer_pane_g1

0x255b,	// (0x0006537b) cam6_timer_pane_t1

0x2569,	// (0x00065389) cam6_zoom_cont_pane

0x2571,	// (0x00065391) cam6_zoom_pane_g1

0x2579,	// (0x00065399) cam6_zoom_pane_g2

0xd7b6,	// (0x000705d6) cam6_zoom_pane_g3

0x0002,

0xfb91,	// (0x000729b1) cam6_zoom_pane_g

0x5280,	// (0x000680a0) cam6_battery_pane_g1

0x5280,	// (0x000680a0) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0007252f) cam6_battery_pane_g

0x2581,	// (0x000653a1) cam6_zoom_cont_pane_g1

0x258a,	// (0x000653aa) cam6_zoom_cont_pane_g2

0x2593,	// (0x000653b3) cam6_zoom_cont_pane_g3

0x0002,

0xfb98,	// (0x000729b8) cam6_zoom_cont_pane_g

0xd7d3,	// (0x000705f3) cam6_mode_pane_cp_ParamLimits

0xd7d3,	// (0x000705f3) cam6_mode_pane_cp

0xd798,	// (0x000705b8) cam6_zoom_pane_cp_ParamLimits

0xd798,	// (0x000705b8) cam6_zoom_pane_cp

0xd7e7,	// (0x00070607) vid6_image_uncrop_cif_pane_ParamLimits

0xd7e7,	// (0x00070607) vid6_image_uncrop_cif_pane

0xd813,	// (0x00070633) vid6_image_uncrop_nhd_pane_ParamLimits

0xd813,	// (0x00070633) vid6_image_uncrop_nhd_pane

0xd731,	// (0x00070551) vid6_image_uncrop_vga_pane_ParamLimits

0xd731,	// (0x00070551) vid6_image_uncrop_vga_pane

0xd832,	// (0x00070652) vid6_image_uncrop_wvga_pane_ParamLimits

0xd832,	// (0x00070652) vid6_image_uncrop_wvga_pane

0xd851,	// (0x00070671) vid6_indi_pane_ParamLimits

0xd851,	// (0x00070671) vid6_indi_pane

0x24d3,	// (0x000652f3) bg_tb_trans_pane_cp09_ParamLimits

0x24d3,	// (0x000652f3) bg_tb_trans_pane_cp09

0x25ab,	// (0x000653cb) cam6_battery_pane_cp_ParamLimits

0x25ab,	// (0x000653cb) cam6_battery_pane_cp

0x25b7,	// (0x000653d7) vid6_indi_pane_g1_ParamLimits

0x25b7,	// (0x000653d7) vid6_indi_pane_g1

0x25c9,	// (0x000653e9) vid6_indi_pane_g2_ParamLimits

0x25c9,	// (0x000653e9) vid6_indi_pane_g2

0x25db,	// (0x000653fb) vid6_indi_pane_g3_ParamLimits

0x25db,	// (0x000653fb) vid6_indi_pane_g3

0x25f2,	// (0x00065412) vid6_indi_pane_g4_ParamLimits

0x25f2,	// (0x00065412) vid6_indi_pane_g4

0x2609,	// (0x00065429) vid6_indi_pane_g5_ParamLimits

0x2609,	// (0x00065429) vid6_indi_pane_g5

0x0004,

0xfb9f,	// (0x000729bf) vid6_indi_pane_g_ParamLimits

0xfb9f,	// (0x000729bf) vid6_indi_pane_g

0x2623,	// (0x00065443) vid6_indi_pane_t1_ParamLimits

0x2623,	// (0x00065443) vid6_indi_pane_t1

0x2639,	// (0x00065459) vid6_indi_pane_t2_ParamLimits

0x2639,	// (0x00065459) vid6_indi_pane_t2

0x2661,	// (0x00065481) vid6_indi_pane_t3_ParamLimits

0x2661,	// (0x00065481) vid6_indi_pane_t3

0x2689,	// (0x000654a9) vid6_indi_pane_t4_ParamLimits

0x2689,	// (0x000654a9) vid6_indi_pane_t4

0x0003,

0xfbaa,	// (0x000729ca) vid6_indi_pane_t_ParamLimits

0xfbaa,	// (0x000729ca) vid6_indi_pane_t

0x26ad,	// (0x000654cd) wait_bar_pane_cp08

0xd876,	// (0x00070696) main_cset_text2_pane_t1_ParamLimits

0xd876,	// (0x00070696) main_cset_text2_pane_t1

0xd7be,	// (0x000705de) listscroll_gen_pane_cp06_t1_ParamLimits

0xd7be,	// (0x000705de) listscroll_gen_pane_cp06_t1

0x75d2,	// (0x0006a3f2) main_cam6_set_pane

0x54b0,	// (0x000682d0) bg_tb_trans_pane_cp06_ParamLimits

0xc4ba,	// (0x0006f2da) cam4_indicators_pane_g1_ParamLimits

0xc4c7,	// (0x0006f2e7) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00072745) cam4_indicators_pane_g_ParamLimits

0xc4e7,	// (0x0006f307) cam4_indicators_pane_t1_ParamLimits

0x000b,	// (0x00062e2b) bg_tb_trans_pane_cp07_ParamLimits

0xc4ba,	// (0x0006f2da) vid4_indicators_pane_g1_ParamLimits

0xc59d,	// (0x0006f3bd) vid4_indicators_pane_g2_ParamLimits

0xc5aa,	// (0x0006f3ca) vid4_indicators_pane_g3_ParamLimits

0xc5bb,	// (0x0006f3db) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00072757) vid4_indicators_pane_g_ParamLimits

0xc5d7,	// (0x0006f3f7) vid4_indicators_pane_t1_ParamLimits

0xd396,	// (0x000701b6) vid4_progress_pane_g1_ParamLimits

0xd3a2,	// (0x000701c2) vid4_progress_pane_g2_ParamLimits

0xd3ae,	// (0x000701ce) vid4_progress_pane_g3_ParamLimits

0xd3bd,	// (0x000701dd) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00072902) vid4_progress_pane_g_ParamLimits

0xd3db,	// (0x000701fb) vid4_progress_pane_t1_ParamLimits

0xd3f1,	// (0x00070211) vid4_progress_pane_t2_ParamLimits

0xd407,	// (0x00070227) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0007290d) vid4_progress_pane_t_ParamLimits

0xd41c,	// (0x0007023c) wait_bar_pane_cp07_ParamLimits

0xd89d,	// (0x000706bd) main_cam6_set_pane_g2_ParamLimits

0xd89d,	// (0x000706bd) main_cam6_set_pane_g2

0xd8a9,	// (0x000706c9) main_cset6_listscroll_pane_ParamLimits

0xd8a9,	// (0x000706c9) main_cset6_listscroll_pane

0xd8d6,	// (0x000706f6) main_cset6_slider_pane_ParamLimits

0xd8d6,	// (0x000706f6) main_cset6_slider_pane

0xd8e2,	// (0x00070702) main_cset6_text2_pane_ParamLimits

0xd8e2,	// (0x00070702) main_cset6_text2_pane

0x26bc,	// (0x000654dc) main_cset6_text_pane

0x26c4,	// (0x000654e4) main_cset_list_pane_copy1_ParamLimits

0x26c4,	// (0x000654e4) main_cset_list_pane_copy1

0x26d4,	// (0x000654f4) scroll_pane_cp028_copy1

0xd8f5,	// (0x00070715) cset_list_set_pane_copy1

0xd905,	// (0x00070725) aid_position_infowindow_above_copy1

0xd90d,	// (0x0007072d) aid_position_infowindow_below_copy1

0xd915,	// (0x00070735) cset_list_set_pane_g1_copy1

0x6b44,	// (0x00069964) cset_list_set_pane_g3_copy1_ParamLimits

0x6b44,	// (0x00069964) cset_list_set_pane_g3_copy1

0x6b53,	// (0x00069973) cset_list_set_pane_t1_copy1_ParamLimits

0x6b53,	// (0x00069973) cset_list_set_pane_t1_copy1

0x000b,	// (0x00062e2b) list_highlight_pane_cp021_copy1_ParamLimits

0x000b,	// (0x00062e2b) list_highlight_pane_cp021_copy1

0x26ec,	// (0x0006550c) cset6_slider_pane_ParamLimits

0x26ec,	// (0x0006550c) cset6_slider_pane

0x2718,	// (0x00065538) main_cset6_slider_pane_g1_ParamLimits

0x2718,	// (0x00065538) main_cset6_slider_pane_g1

0xd91d,	// (0x0007073d) main_cset6_slider_pane_g2_ParamLimits

0xd91d,	// (0x0007073d) main_cset6_slider_pane_g2

0x2740,	// (0x00065560) main_cset6_slider_pane_g3_ParamLimits

0x2740,	// (0x00065560) main_cset6_slider_pane_g3

0xd945,	// (0x00070765) main_cset6_slider_pane_g4_ParamLimits

0xd945,	// (0x00070765) main_cset6_slider_pane_g4

0xd951,	// (0x00070771) main_cset6_slider_pane_g5_ParamLimits

0xd951,	// (0x00070771) main_cset6_slider_pane_g5

0x1e87,	// (0x00064ca7) main_cset6_slider_pane_g7_ParamLimits

0x1e87,	// (0x00064ca7) main_cset6_slider_pane_g7

0x1e93,	// (0x00064cb3) main_cset6_slider_pane_g8_ParamLimits

0x1e93,	// (0x00064cb3) main_cset6_slider_pane_g8

0xd95d,	// (0x0007077d) main_cset6_slider_pane_g9_ParamLimits

0xd95d,	// (0x0007077d) main_cset6_slider_pane_g9

0xd969,	// (0x00070789) main_cset6_slider_pane_g10_ParamLimits

0xd969,	// (0x00070789) main_cset6_slider_pane_g10

0xd975,	// (0x00070795) main_cset6_slider_pane_g11_ParamLimits

0xd975,	// (0x00070795) main_cset6_slider_pane_g11

0xd981,	// (0x000707a1) main_cset6_slider_pane_g12_ParamLimits

0xd981,	// (0x000707a1) main_cset6_slider_pane_g12

0xd98d,	// (0x000707ad) main_cset6_slider_pane_g13_ParamLimits

0xd98d,	// (0x000707ad) main_cset6_slider_pane_g13

0xd999,	// (0x000707b9) main_cset6_slider_pane_g14_ParamLimits

0xd999,	// (0x000707b9) main_cset6_slider_pane_g14

0xd9a5,	// (0x000707c5) main_cset6_slider_pane_g15_ParamLimits

0xd9a5,	// (0x000707c5) main_cset6_slider_pane_g15

0xd9bd,	// (0x000707dd) main_cset6_slider_pane_g16_ParamLimits

0xd9bd,	// (0x000707dd) main_cset6_slider_pane_g16

0xd9c9,	// (0x000707e9) main_cset6_slider_pane_g17_ParamLimits

0xd9c9,	// (0x000707e9) main_cset6_slider_pane_g17

0x0011,

0xfbb3,	// (0x000729d3) main_cset6_slider_pane_g_ParamLimits

0xfbb3,	// (0x000729d3) main_cset6_slider_pane_g

0x274c,	// (0x0006556c) main_cset6_slider_pane_t1_ParamLimits

0x274c,	// (0x0006556c) main_cset6_slider_pane_t1

0xd9ed,	// (0x0007080d) main_cset6_slider_pane_t2_ParamLimits

0xd9ed,	// (0x0007080d) main_cset6_slider_pane_t2

0xda18,	// (0x00070838) main_cset6_slider_pane_t3_ParamLimits

0xda18,	// (0x00070838) main_cset6_slider_pane_t3

0xda43,	// (0x00070863) main_cset6_slider_pane_t4_ParamLimits

0xda43,	// (0x00070863) main_cset6_slider_pane_t4

0xda6e,	// (0x0007088e) main_cset6_slider_pane_t5_ParamLimits

0xda6e,	// (0x0007088e) main_cset6_slider_pane_t5

0x278d,	// (0x000655ad) main_cset6_slider_pane_t7_ParamLimits

0x278d,	// (0x000655ad) main_cset6_slider_pane_t7

0xda99,	// (0x000708b9) main_cset6_slider_pane_t8_ParamLimits

0xda99,	// (0x000708b9) main_cset6_slider_pane_t8

0xdabd,	// (0x000708dd) main_cset6_slider_pane_t9_ParamLimits

0xdabd,	// (0x000708dd) main_cset6_slider_pane_t9

0xdae1,	// (0x00070901) main_cset6_slider_pane_t10_ParamLimits

0xdae1,	// (0x00070901) main_cset6_slider_pane_t10

0xdb05,	// (0x00070925) main_cset6_slider_pane_t11_ParamLimits

0xdb05,	// (0x00070925) main_cset6_slider_pane_t11

0x27c3,	// (0x000655e3) main_cset6_slider_pane_t14_ParamLimits

0x27c3,	// (0x000655e3) main_cset6_slider_pane_t14

0x27fc,	// (0x0006561c) main_cset6_slider_pane_t15_ParamLimits

0x27fc,	// (0x0006561c) main_cset6_slider_pane_t15

0x000b,

0xfbd8,	// (0x000729f8) main_cset6_slider_pane_t_ParamLimits

0xfbd8,	// (0x000729f8) main_cset6_slider_pane_t

0x2835,	// (0x00065655) cset_slider_pane_g1_copy1

0x283e,	// (0x0006565e) cset_slider_pane_g2_copy1

0x2847,	// (0x00065667) cset_slider_pane_g3_copy1

0x75d2,	// (0x0006a3f2) bg_popup_sub_pane_cp011_copy1

0x2006,	// (0x00064e26) main_cset_text_pane_g1_copy1

0x200e,	// (0x00064e2e) main_cset_text_pane_t1_copy1

0x201c,	// (0x00064e3c) main_cset_text_pane_t2_copy1

0x202a,	// (0x00064e4a) main_cset_text_pane_t3_copy1

0x2038,	// (0x00064e58) main_cset_text_pane_t4_copy1

0x2046,	// (0x00064e66) main_cset_text_pane_t5_copy1

0x2054,	// (0x00064e74) main_cset_text_pane_t6_copy1

0x2062,	// (0x00064e82) main_cset_text_pane_t7_copy1

0xdb29,	// (0x00070949) main_cset_text2_pane_t1_copy1

0x75d2,	// (0x0006a3f2) main_ncimui_pane

0xa5b5,	// (0x0006d3d5) popup_query_ncimui_window_ParamLimits

0xa5b5,	// (0x0006d3d5) popup_query_ncimui_window

0xb129,	// (0x0006df49) field_cale_ev2_pane_g4_ParamLimits

0xb129,	// (0x0006df49) field_cale_ev2_pane_g4

0xbe77,	// (0x0006ec97) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbe77,	// (0x0006ec97) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000726e3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000726e3) cell_video_dialer_keypad_pane_g

0xbe8f,	// (0x0006ecaf) cell_video_dialer_keypad_pane_t1

0x75d2,	// (0x0006a3f2) bg_popup_window_pane_cp012

0x1107,	// (0x00063f27) heading_pane_cp06

0x293f,	// (0x0006575f) ncim_query_content_pane

0x75d2,	// (0x0006a3f2) bg_popup_heading_pane_cp01

0x2947,	// (0x00065767) ncim_heading_pane_t1

0x2955,	// (0x00065775) ncim_indicator_popup_pane

0x2967,	// (0x00065787) ncim_query_button_pane

0x297d,	// (0x0006579d) ncim_query_content_pane_t1

0x298f,	// (0x000657af) ncim_query_content_pane_t2

0x0005,

0xfc17,	// (0x00072a37) ncim_query_content_pane_t

0x29c9,	// (0x000657e9) ncim_query_list_pane

0x29db,	// (0x000657fb) ncim_query_popup_pane

0x2955,	// (0x00065775) ncim_indicator_popup_pane_ParamLimits

0xdc1e,	// (0x00070a3e) ncim_query_content_pane_g1_ParamLimits

0xdc1e,	// (0x00070a3e) ncim_query_content_pane_g1

0x297d,	// (0x0006579d) ncim_query_content_pane_t1_ParamLimits

0x298f,	// (0x000657af) ncim_query_content_pane_t2_ParamLimits

0xdc2a,	// (0x00070a4a) ncim_query_content_pane_t3_ParamLimits

0xdc2a,	// (0x00070a4a) ncim_query_content_pane_t3

0xdc47,	// (0x00070a67) ncim_query_content_pane_t4_ParamLimits

0xdc47,	// (0x00070a67) ncim_query_content_pane_t4

0xdc64,	// (0x00070a84) ncim_query_content_pane_t5_ParamLimits

0xdc64,	// (0x00070a84) ncim_query_content_pane_t5

0x29a1,	// (0x000657c1) ncim_query_content_pane_t6_ParamLimits

0x29a1,	// (0x000657c1) ncim_query_content_pane_t6

0xfc17,	// (0x00072a37) ncim_query_content_pane_t_ParamLimits

0x29c9,	// (0x000657e9) ncim_query_list_pane_ParamLimits

0x29db,	// (0x000657fb) ncim_query_popup_pane_ParamLimits

0x29ef,	// (0x0006580f) wait_bar_pane_cp04

0x75d2,	// (0x0006a3f2) input_focus_pane_cp011

0x29f7,	// (0x00065817) ncim_query_popup_pane_t1

0x2a05,	// (0x00065825) ncim_list_query_list_pane_ParamLimits

0x2a05,	// (0x00065825) ncim_list_query_list_pane

0x75d2,	// (0x0006a3f2) bg_button_pane_cp027

0x2a18,	// (0x00065838) ncim_query_button_pane_g1

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp012

0x2a22,	// (0x00065842) ncim_list_query_list_pane_g1

0x2a2a,	// (0x0006584a) ncim_list_query_list_pane_t1

0xc4d7,	// (0x0006f2f7) cam4_indicators_pane_g3_ParamLimits

0xc4d7,	// (0x0006f2f7) cam4_indicators_pane_g3

0xc5c7,	// (0x0006f3e7) vid4_indicators_pane_g5_ParamLimits

0xc5c7,	// (0x0006f3e7) vid4_indicators_pane_g5

0xd3cc,	// (0x000701ec) vid4_progress_pane_g5_ParamLimits

0xd3cc,	// (0x000701ec) vid4_progress_pane_g5

0xdb58,	// (0x00070978) main_ncimui_pane_g1

0xdba2,	// (0x000709c2) ncimui_group_query_pane_ParamLimits

0xdba2,	// (0x000709c2) ncimui_group_query_pane

0xdbe0,	// (0x00070a00) ncimui_list_pane_ParamLimits

0xdbe0,	// (0x00070a00) ncimui_list_pane

0xdbfa,	// (0x00070a1a) ncimui_text_pane_ParamLimits

0xdbfa,	// (0x00070a1a) ncimui_text_pane

0xdc81,	// (0x00070aa1) ncimui_text_pane_t1_ParamLimits

0xdc81,	// (0x00070aa1) ncimui_text_pane_t1

0x2a38,	// (0x00065858) ncimui_list_single_graphic_pane_ParamLimits

0x2a38,	// (0x00065858) ncimui_list_single_graphic_pane

0xdca0,	// (0x00070ac0) ncimui_query_pane_ParamLimits

0xdca0,	// (0x00070ac0) ncimui_query_pane

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp013

0x2a48,	// (0x00065868) ncim_list_query_list_pane_t1_copy1

0x2a22,	// (0x00065842) ncim_list_single_graphic_pane_g1

0x2a56,	// (0x00065876) ncim_query_button_pane_cp01

0x2a5e,	// (0x0006587e) ncim_query_entry_pane_ParamLimits

0x2a5e,	// (0x0006587e) ncim_query_entry_pane

0x2a6e,	// (0x0006588e) ncimui_query_pane_g1

0x2a76,	// (0x00065896) ncimui_query_pane_t1_ParamLimits

0x2a76,	// (0x00065896) ncimui_query_pane_t1

0x75d2,	// (0x0006a3f2) input_focus_pane_cp012

0x29f7,	// (0x00065817) ncim_query_entry_pane_t1

0x077e,	// (0x0006359e) main_im_pane_ParamLimits

0x000b,	// (0x00062e2b) main_mobtv_pane_ParamLimits

0x000b,	// (0x00062e2b) main_mobtv_pane

0xd9d5,	// (0x000707f5) main_cset6_slider_pane_g18_ParamLimits

0xd9d5,	// (0x000707f5) main_cset6_slider_pane_g18

0xd9e1,	// (0x00070801) main_cset6_slider_pane_g19_ParamLimits

0xd9e1,	// (0x00070801) main_cset6_slider_pane_g19

0x1cfa,	// (0x00064b1a) bg_main_mobtv_pane_ParamLimits

0x1cfa,	// (0x00064b1a) bg_main_mobtv_pane

0xdcb0,	// (0x00070ad0) main_mobtv_info_pane

0xdcbb,	// (0x00070adb) main_mobtv_loading_pane_ParamLimits

0xdcbb,	// (0x00070adb) main_mobtv_loading_pane

0x2a9a,	// (0x000658ba) main_mobtv_pg_channel_list_pane

0x2aa4,	// (0x000658c4) main_mobtv_pg_hdr_pane

0xdcc8,	// (0x00070ae8) main_mobtv_programe_curr_pane_ParamLimits

0xdcc8,	// (0x00070ae8) main_mobtv_programe_curr_pane

0xdcd5,	// (0x00070af5) main_mobtv_programe_next_pane_ParamLimits

0xdcd5,	// (0x00070af5) main_mobtv_programe_next_pane

0x2aad,	// (0x000658cd) popup_mobtv_noti_window

0x5280,	// (0x000680a0) main_tv_pg_hdr_pane_g1

0x2ab7,	// (0x000658d7) main_tv_pg_hdr_pane_g2

0x2abf,	// (0x000658df) main_tv_pg_hdr_pane_g3

0x2ac7,	// (0x000658e7) main_tv_pg_hdr_pane_g4

0x2acf,	// (0x000658ef) main_tv_pg_hdr_pane_g5

0x2ad9,	// (0x000658f9) main_tv_pg_hdr_pane_g6

0x2ae3,	// (0x00065903) main_tv_pg_hdr_pane_g7

0x2aed,	// (0x0006590d) main_tv_pg_hdr_pane_g8

0x2af7,	// (0x00065917) main_tv_pg_hdr_pane_g9

0x2b01,	// (0x00065921) main_tv_pg_hdr_pane_g10

0x2b0b,	// (0x0006592b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc24,	// (0x00072a44) main_tv_pg_hdr_pane_g

0x2b15,	// (0x00065935) main_tv_pg_hdr_pane_t1

0x2b23,	// (0x00065943) main_tv_pg_hdr_pane_t2

0x2b31,	// (0x00065951) main_tv_pg_hdr_pane_t3

0x2b41,	// (0x00065961) main_tv_pg_hdr_pane_t4

0x2b51,	// (0x00065971) main_tv_pg_hdr_pane_t5

0x0004,

0xfc3b,	// (0x00072a5b) main_tv_pg_hdr_pane_t

0x2b61,	// (0x00065981) single_mobtv_pg_channel_pane_ParamLimits

0x2b61,	// (0x00065981) single_mobtv_pg_channel_pane

0x2b73,	// (0x00065993) single_mobtv_pg_channel_table_pane

0x2b7c,	// (0x0006599c) single_mobtv_pg_channel_thumb_pane

0x2b85,	// (0x000659a5) single_tv_pg_channel_pane_g1

0x2b8e,	// (0x000659ae) single_tv_pg_channel_pane_g2

0x0001,

0xfc46,	// (0x00072a66) single_tv_pg_channel_pane_g

0x54b0,	// (0x000682d0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x54b0,	// (0x000682d0) bg_single_mobtv_pg_channel_thumb_pane

0x2b97,	// (0x000659b7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2b97,	// (0x000659b7) single_mobtv_pg_channel_thumb_pane_g1

0x2ba5,	// (0x000659c5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2ba5,	// (0x000659c5) single_mobtv_pg_channel_thumb_pane_g2

0x2bb1,	// (0x000659d1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2bb1,	// (0x000659d1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc4b,	// (0x00072a6b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc4b,	// (0x00072a6b) single_mobtv_pg_channel_thumb_pane_g

0x2bbd,	// (0x000659dd) single_mobtv_pg_channel_thumb_pane_t1

0x2bcb,	// (0x000659eb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc52,	// (0x00072a72) single_mobtv_pg_channel_thumb_pane_t

0x5280,	// (0x000680a0) bg_single_mobtv_pg_channel_table_pane_g1

0x5280,	// (0x000680a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0007252f) bg_single_mobtv_pg_channel_table_pane_g

0x2bd9,	// (0x000659f9) single_mobtv_pg_channel_table_pane_t1

0x2be7,	// (0x00065a07) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc57,	// (0x00072a77) single_mobtv_pg_channel_table_pane_t

0xdcea,	// (0x00070b0a) main_mobtv_info_pane_g1_ParamLimits

0xdcea,	// (0x00070b0a) main_mobtv_info_pane_g1

0xdd06,	// (0x00070b26) main_mobtv_info_pane_t1_ParamLimits

0xdd06,	// (0x00070b26) main_mobtv_info_pane_t1

0xdd7e,	// (0x00070b9e) main_mobtv_info_pane_t2_ParamLimits

0xdd7e,	// (0x00070b9e) main_mobtv_info_pane_t2

0x0002,

0xfc61,	// (0x00072a81) main_mobtv_info_pane_t_ParamLimits

0xfc61,	// (0x00072a81) main_mobtv_info_pane_t

0xde11,	// (0x00070c31) wait_bar_pane_cp05

0xde23,	// (0x00070c43) main_mobtv_loading_pane_g1_ParamLimits

0xde23,	// (0x00070c43) main_mobtv_loading_pane_g1

0xde2f,	// (0x00070c4f) main_mobtv_loading_pane_g2_ParamLimits

0xde2f,	// (0x00070c4f) main_mobtv_loading_pane_g2

0xde3b,	// (0x00070c5b) main_mobtv_loading_pane_g3_ParamLimits

0xde3b,	// (0x00070c5b) main_mobtv_loading_pane_g3

0x0002,

0xfc68,	// (0x00072a88) main_mobtv_loading_pane_g_ParamLimits

0xfc68,	// (0x00072a88) main_mobtv_loading_pane_g

0x2bf5,	// (0x00065a15) main_mobtv_loading_pane_t1_ParamLimits

0x2bf5,	// (0x00065a15) main_mobtv_loading_pane_t1

0x2c0d,	// (0x00065a2d) main_mobtv_loading_pane_t2_ParamLimits

0x2c0d,	// (0x00065a2d) main_mobtv_loading_pane_t2

0x0001,

0xfc6f,	// (0x00072a8f) main_mobtv_loading_pane_t_ParamLimits

0xfc6f,	// (0x00072a8f) main_mobtv_loading_pane_t

0xde49,	// (0x00070c69) wait_bar_pane_cp06_ParamLimits

0xde49,	// (0x00070c69) wait_bar_pane_cp06

0x2c31,	// (0x00065a51) main_mobtv_programe_curr_pane_t1

0x2c3f,	// (0x00065a5f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc74,	// (0x00072a94) main_mobtv_programe_curr_pane_t

0x2c4d,	// (0x00065a6d) main_mobtv_programe_next_pane_t1

0x2c5b,	// (0x00065a7b) main_mobtv_programe_next_pane_t2

0x2c69,	// (0x00065a89) main_mobtv_programe_next_pane_t3

0x0002,

0xfc79,	// (0x00072a99) main_mobtv_programe_next_pane_t

0x75d2,	// (0x0006a3f2) bg_popup_mobtv_noti_window_pane

0x2c77,	// (0x00065a97) popup_mobtv_noti_window_g1

0x2c7f,	// (0x00065a9f) popup_mobtv_noti_window_t1

0x2c8d,	// (0x00065aad) popup_mobtv_noti_window_t2

0x0001,

0xfc80,	// (0x00072aa0) popup_mobtv_noti_window_t

0x5280,	// (0x000680a0) bg_popup_mobtv_noti_window_pane_g1

0x75d2,	// (0x0006a3f2) sc_clock_pane

0x75d2,	// (0x0006a3f2) main_fs_bigclock_pane

0xd5be,	// (0x000703de) blid2_tripm_pane_t4_ParamLimits

0xd5be,	// (0x000703de) blid2_tripm_pane_t4

0xde55,	// (0x00070c75) sc_clock_pane_g1_ParamLimits

0xde55,	// (0x00070c75) sc_clock_pane_g1

0xde63,	// (0x00070c83) sc_clock_pane_t1_ParamLimits

0xde63,	// (0x00070c83) sc_clock_pane_t1

0xde78,	// (0x00070c98) sc_clock_pane_t2_ParamLimits

0xde78,	// (0x00070c98) sc_clock_pane_t2

0xde8a,	// (0x00070caa) sc_clock_pane_t3_ParamLimits

0xde8a,	// (0x00070caa) sc_clock_pane_t3

0x0004,

0xfc85,	// (0x00072aa5) sc_clock_pane_t_ParamLimits

0xfc85,	// (0x00072aa5) sc_clock_pane_t

0xe693,	// (0x000714b3) main_fs_bigclock_indicator_pane_ParamLimits

0xe693,	// (0x000714b3) main_fs_bigclock_indicator_pane

0xdf11,	// (0x00070d31) main_fs_bigclock_pane_g1_ParamLimits

0xdf11,	// (0x00070d31) main_fs_bigclock_pane_g1

0xe69f,	// (0x000714bf) main_fs_bigclock_pane_t1_ParamLimits

0xe69f,	// (0x000714bf) main_fs_bigclock_pane_t1

0xe6b1,	// (0x000714d1) main_fs_bigclock_pane_t2_ParamLimits

0xe6b1,	// (0x000714d1) main_fs_bigclock_pane_t2

0xe6c5,	// (0x000714e5) main_fs_bigclock_pane_t3_ParamLimits

0xe6c5,	// (0x000714e5) main_fs_bigclock_pane_t3

0x0002,

0xfe84,	// (0x00072ca4) main_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00072ca4) main_fs_bigclock_pane_t

0x38c8,	// (0x000666e8) main_fs_bigclock_indicator_pane_g1

0x296f,	// (0x0006578f) ncim_query_content_pane_g2_ParamLimits

0x296f,	// (0x0006578f) ncim_query_content_pane_g2

0x0001,

0xfc12,	// (0x00072a32) ncim_query_content_pane_g_ParamLimits

0xfc12,	// (0x00072a32) ncim_query_content_pane_g

0xde9c,	// (0x00070cbc) sc_clock_pane_t4_ParamLimits

0xde9c,	// (0x00070cbc) sc_clock_pane_t4

0x000b,	// (0x00062e2b) main_radioblah_pane

0x1c65,	// (0x00064a85) cell_call4_button_pane_t1_copy1_ParamLimits

0x1c65,	// (0x00064a85) cell_call4_button_pane_t1_copy1

0xdb62,	// (0x00070982) main_ncimui_pane_t1_ParamLimits

0xdb62,	// (0x00070982) main_ncimui_pane_t1

0xdb74,	// (0x00070994) main_ncimui_pane_t2_ParamLimits

0xdb74,	// (0x00070994) main_ncimui_pane_t2

0x0002,

0xfc0b,	// (0x00072a2b) main_ncimui_pane_t_ParamLimits

0xfc0b,	// (0x00072a2b) main_ncimui_pane_t

0x2dc5,	// (0x00065be5) main_radioblah_anim_pane_ParamLimits

0x2dc5,	// (0x00065be5) main_radioblah_anim_pane

0x2dd6,	// (0x00065bf6) main_radioblah_info_pane_ParamLimits

0x2dd6,	// (0x00065bf6) main_radioblah_info_pane

0x2dea,	// (0x00065c0a) main_radioblah_pane_t1_ParamLimits

0x2dea,	// (0x00065c0a) main_radioblah_pane_t1

0x2e06,	// (0x00065c26) main_radioblah_pane_t2_ParamLimits

0x2e06,	// (0x00065c26) main_radioblah_pane_t2

0x0003,

0xfca6,	// (0x00072ac6) main_radioblah_pane_t_ParamLimits

0xfca6,	// (0x00072ac6) main_radioblah_pane_t

0xdf65,	// (0x00070d85) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdf65,	// (0x00070d85) main_radioblah_rocker_ctrl_pane

0x2e4e,	// (0x00065c6e) main_radioblah_info_pane_t1_ParamLimits

0x2e4e,	// (0x00065c6e) main_radioblah_info_pane_t1

0xdfae,	// (0x00070dce) main_radioblah_info_pane_t2_ParamLimits

0xdfae,	// (0x00070dce) main_radioblah_info_pane_t2

0x0003,

0xfcaf,	// (0x00072acf) main_radioblah_info_pane_t_ParamLimits

0xfcaf,	// (0x00072acf) main_radioblah_info_pane_t

0x5280,	// (0x000680a0) main_radioblah_rocker_ctrl_pane_g1

0xe05e,	// (0x00070e7e) main_radioblah_rocker_ctrl_pane_g2

0xe066,	// (0x00070e86) main_radioblah_rocker_ctrl_pane_g3

0xe06e,	// (0x00070e8e) main_radioblah_rocker_ctrl_pane_g4

0xe076,	// (0x00070e96) main_radioblah_rocker_ctrl_pane_g5

0xe07e,	// (0x00070e9e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb8,	// (0x00072ad8) main_radioblah_rocker_ctrl_pane_g

0xdb29,	// (0x00070949) main_cset_text2_pane_t1_copy1_ParamLimits

0xc404,	// (0x0006f224) cam4_image_uncrop_qvga_pane

0xc54d,	// (0x0006f36d) vid4_image_uncrop_qcif_pane

0xd750,	// (0x00070570) cam6_image_uncrop_qvga_pane_ParamLimits

0xd750,	// (0x00070570) cam6_image_uncrop_qvga_pane

0x259b,	// (0x000653bb) vid6_image_uncrop_qcif_pane_ParamLimits

0x259b,	// (0x000653bb) vid6_image_uncrop_qcif_pane

0x75d2,	// (0x0006a3f2) bg_popup_preview_window_pane_cp03

0x2921,	// (0x00065741) list_cset_text2_pane

0x2929,	// (0x00065749) main_cset6_text2_pane_g1

0x2931,	// (0x00065751) main_cset6_text2_pane_t1

0xe086,	// (0x00070ea6) list_cset_text2_pane_t1_ParamLimits

0xe086,	// (0x00070ea6) list_cset_text2_pane_t1

0x000b,	// (0x00062e2b) main_radioblah_pane_ParamLimits

0xddfd,	// (0x00070c1d) main_mobtv_info_pane_t3_ParamLimits

0xddfd,	// (0x00070c1d) main_mobtv_info_pane_t3

0xdf53,	// (0x00070d73) main_radioblah_pane_g1

0xdf7e,	// (0x00070d9e) main_radioblah_info_pane_g1

0xe003,	// (0x00070e23) main_radioblah_info_pane_t3_ParamLimits

0xe003,	// (0x00070e23) main_radioblah_info_pane_t3

0x92a8,	// (0x0006c0c8) highlight_cell_cale_month_pane_ParamLimits

0x92a8,	// (0x0006c0c8) highlight_cell_cale_month_pane

0x75d2,	// (0x0006a3f2) main_phob_fisheye_pane

0x5592,	// (0x000683b2) scroll_pane_cp0031_ParamLimits

0x5592,	// (0x000683b2) scroll_pane_cp0031

0x26ad,	// (0x000654cd) wait_bar_pane_cp08_ParamLimits

0xd8f5,	// (0x00070715) cset_list_set_pane_copy1_ParamLimits

0x2ea2,	// (0x00065cc2) highlight_cell_cale_month_pane_g1

0xe09f,	// (0x00070ebf) highlight_cell_cale_month_pane_t1

0x22e2,	// (0x00065102) list_gen_pane_cp01

0x1e72,	// (0x00064c92) scroll_pane_01

0xe0ad,	// (0x00070ecd) list_single_double_fisheye_pane

0x6c39,	// (0x00069a59) list_double_fisheye_pane_g1_ParamLimits

0x6c39,	// (0x00069a59) list_double_fisheye_pane_g1

0x6c45,	// (0x00069a65) list_double_fisheye_pane_g2_ParamLimits

0x6c45,	// (0x00069a65) list_double_fisheye_pane_g2

0xe0b6,	// (0x00070ed6) list_double_fisheye_pane_g3_ParamLimits

0xe0b6,	// (0x00070ed6) list_double_fisheye_pane_g3

0x0004,

0xfcc5,	// (0x00072ae5) list_double_fisheye_pane_g_ParamLimits

0xfcc5,	// (0x00072ae5) list_double_fisheye_pane_g

0x6c76,	// (0x00069a96) list_double_fisheye_pane_t1_ParamLimits

0x6c76,	// (0x00069a96) list_double_fisheye_pane_t1

0x6c91,	// (0x00069ab1) list_double_fisheye_pane_t2_ParamLimits

0x6c91,	// (0x00069ab1) list_double_fisheye_pane_t2

0x0001,

0xfcd0,	// (0x00072af0) list_double_fisheye_pane_t_ParamLimits

0xfcd0,	// (0x00072af0) list_double_fisheye_pane_t

0x75d2,	// (0x0006a3f2) main_call5_pane

0xdec2,	// (0x00070ce2) sc_swipe_pane_ParamLimits

0xdec2,	// (0x00070ce2) sc_swipe_pane

0xe0ce,	// (0x00070eee) call5_image_pane_ParamLimits

0xe0ce,	// (0x00070eee) call5_image_pane

0xe0e0,	// (0x00070f00) call5_swipe_1_pane_ParamLimits

0xe0e0,	// (0x00070f00) call5_swipe_1_pane

0xe0ec,	// (0x00070f0c) call5_swipe_2_pane_ParamLimits

0xe0ec,	// (0x00070f0c) call5_swipe_2_pane

0xe108,	// (0x00070f28) popup_call5_audio_first_window_ParamLimits

0xe108,	// (0x00070f28) popup_call5_audio_first_window

0x54b0,	// (0x000682d0) call5_swipe_1_pane_g1_ParamLimits

0x54b0,	// (0x000682d0) call5_swipe_1_pane_g1

0x2eaa,	// (0x00065cca) call5_swipe_1_pane_g2_ParamLimits

0x2eaa,	// (0x00065cca) call5_swipe_1_pane_g2

0x0001,

0xfcd5,	// (0x00072af5) call5_swipe_1_pane_g_ParamLimits

0xfcd5,	// (0x00072af5) call5_swipe_1_pane_g

0x2eb6,	// (0x00065cd6) call5_swipe_1_pane_t1_ParamLimits

0x2eb6,	// (0x00065cd6) call5_swipe_1_pane_t1

0x54b0,	// (0x000682d0) call5_swipe_2_pane_g1_ParamLimits

0x54b0,	// (0x000682d0) call5_swipe_2_pane_g1

0x2ecb,	// (0x00065ceb) call5_swipe_2_pane_g2_ParamLimits

0x2ecb,	// (0x00065ceb) call5_swipe_2_pane_g2

0x0001,

0xfcda,	// (0x00072afa) call5_swipe_2_pane_g_ParamLimits

0xfcda,	// (0x00072afa) call5_swipe_2_pane_g

0x2ed7,	// (0x00065cf7) call5_swipe_2_pane_t1_ParamLimits

0x2ed7,	// (0x00065cf7) call5_swipe_2_pane_t1

0x2eec,	// (0x00065d0c) sc_swipe_pane_g1_ParamLimits

0x2eec,	// (0x00065d0c) sc_swipe_pane_g1

0x2ef9,	// (0x00065d19) sc_swipe_pane_g2_ParamLimits

0x2ef9,	// (0x00065d19) sc_swipe_pane_g2

0x0001,

0xfcdf,	// (0x00072aff) sc_swipe_pane_g_ParamLimits

0xfcdf,	// (0x00072aff) sc_swipe_pane_g

0x2f05,	// (0x00065d25) sc_swipe_pane_t1_ParamLimits

0x2f05,	// (0x00065d25) sc_swipe_pane_t1

0x75d2,	// (0x0006a3f2) main_cmail_launcher_pane

0xe118,	// (0x00070f38) aid_size_cell_cmail_l_ParamLimits

0xe118,	// (0x00070f38) aid_size_cell_cmail_l

0xe128,	// (0x00070f48) grid_cmail_l_pane_ParamLimits

0xe128,	// (0x00070f48) grid_cmail_l_pane

0xe138,	// (0x00070f58) cell_cmail_l_pane_ParamLimits

0xe138,	// (0x00070f58) cell_cmail_l_pane

0xe14e,	// (0x00070f6e) cell_cmail_l_pane_g1_ParamLimits

0xe14e,	// (0x00070f6e) cell_cmail_l_pane_g1

0xe15a,	// (0x00070f7a) cell_cmail_l_pane_t1_ParamLimits

0xe15a,	// (0x00070f7a) cell_cmail_l_pane_t1

0x2f1a,	// (0x00065d3a) cell_cmail_l_pane_t2_ParamLimits

0x2f1a,	// (0x00065d3a) cell_cmail_l_pane_t2

0x0001,

0xfce4,	// (0x00072b04) cell_cmail_l_pane_t_ParamLimits

0xfce4,	// (0x00072b04) cell_cmail_l_pane_t

0x000b,	// (0x00062e2b) grid_highlight_pane_cp018_ParamLimits

0x000b,	// (0x00062e2b) grid_highlight_pane_cp018

0x76f6,	// (0x0006a516) main2_pane_ParamLimits

0x76f6,	// (0x0006a516) main2_pane

0x0857,	// (0x00063677) popup_sp_fs_action_menu_bg_pane_g1

0x085f,	// (0x0006367f) popup_sp_fs_action_menu_bg_pane_g2

0x0867,	// (0x00063687) popup_sp_fs_action_menu_bg_pane_g3

0x086f,	// (0x0006368f) popup_sp_fs_action_menu_bg_pane_g4

0x0877,	// (0x00063697) popup_sp_fs_action_menu_bg_pane_g5

0x087f,	// (0x0006369f) popup_sp_fs_action_menu_bg_pane_g6

0x0887,	// (0x000636a7) popup_sp_fs_action_menu_bg_pane_g7

0x088f,	// (0x000636af) popup_sp_fs_action_menu_bg_pane_g8

0x0897,	// (0x000636b7) popup_sp_fs_action_menu_bg_pane_g9

0x089f,	// (0x000636bf) popup_sp_fs_action_menu_bg_pane_g10

0x089f,	// (0x000636bf) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00071fdb) popup_sp_fs_action_menu_bg_pane_g

0x6512,	// (0x00069332) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t3_g3_g1

0x651e,	// (0x0006933e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_t3_g3_g2

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0007208b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0007208b) list_medium_line_x2_t3_g3_g

0x6536,	// (0x00069356) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6536,	// (0x00069356) list_medium_line_x2_t3_g3_t1

0x654b,	// (0x0006936b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x654b,	// (0x0006936b) list_medium_line_x2_t3_g3_t2

0x655d,	// (0x0006937d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00072092) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00072092) list_medium_line_x2_t3_g3_t

0x6512,	// (0x00069332) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t3_g2_g1

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00072099) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00072099) list_medium_line_x2_t3_g2_g

0x6572,	// (0x00069392) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6572,	// (0x00069392) list_medium_line_x2_t3_g2_t1

0x6588,	// (0x000693a8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6588,	// (0x000693a8) list_medium_line_x2_t3_g2_t2

0x659a,	// (0x000693ba) list_medium_line_x2_t3_g2_t3_ParamLimits

0x659a,	// (0x000693ba) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0007209e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0007209e) list_medium_line_x2_t3_g2_t

0x6512,	// (0x00069332) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t4_g4_g1

0x65b8,	// (0x000693d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x65b8,	// (0x000693d8) list_medium_line_x2_t4_g4_g2

0x651e,	// (0x0006933e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_t4_g4_g3

0x65c4,	// (0x000693e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x65c4,	// (0x000693e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x000720a5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x000720a5) list_medium_line_x2_t4_g4_g

0x65d0,	// (0x000693f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65d0,	// (0x000693f0) list_medium_line_x2_t4_g4_t1

0x65ea,	// (0x0006940a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x65ea,	// (0x0006940a) list_medium_line_x2_t4_g4_t2

0x6600,	// (0x00069420) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6600,	// (0x00069420) list_medium_line_x2_t4_g4_t3

0x6615,	// (0x00069435) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6615,	// (0x00069435) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x000720ae) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x000720ae) list_medium_line_x2_t4_g4_t

0x6512,	// (0x00069332) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t2_g4_g1

0x65b8,	// (0x000693d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x65b8,	// (0x000693d8) list_medium_line_x2_t2_g4_g2

0x651e,	// (0x0006933e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_t2_g4_g3

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00072115) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00072115) list_medium_line_x2_t2_g4_g

0x6627,	// (0x00069447) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6627,	// (0x00069447) list_medium_line_x2_t2_g4_t1

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0007211e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0007211e) list_medium_line_x2_t2_g4_t

0x6512,	// (0x00069332) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t2_g3_g1

0x651e,	// (0x0006933e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_t2_g3_g2

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0007208b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0007208b) list_medium_line_x2_t2_g3_g

0x663c,	// (0x0006945c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x663c,	// (0x0006945c) list_medium_line_x2_t2_g3_t1

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00072123) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00072123) list_medium_line_x2_t2_g3_t

0x94c6,	// (0x0006c2e6) main_sp_fs_list_pane_ParamLimits

0x94c6,	// (0x0006c2e6) main_sp_fs_list_pane

0x94d2,	// (0x0006c2f2) sp_fs_scroll_pane_ParamLimits

0x94d2,	// (0x0006c2f2) sp_fs_scroll_pane

0x6651,	// (0x00069471) list_medium_line_x2_t3_t1

0x6661,	// (0x00069481) list_medium_line_x2_t3_t2

0x666f,	// (0x0006948f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007216e) list_medium_line_x2_t3_t

0x667d,	// (0x0006949d) list_medium_line_x3_t4_t1

0x668d,	// (0x000694ad) list_medium_line_x3_t4_t2

0x669b,	// (0x000694bb) list_medium_line_x3_t4_t3

0x666f,	// (0x0006948f) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00072175) list_medium_line_x3_t4_t

0x66a9,	// (0x000694c9) list_medium_line_x4_t5_t1

0x66b9,	// (0x000694d9) list_medium_line_x4_t5_t2

0x669b,	// (0x000694bb) list_medium_line_x4_t5_t3

0x66c7,	// (0x000694e7) list_medium_line_x4_t5_t4

0x666f,	// (0x0006948f) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0007217e) list_medium_line_x4_t5_t

0x6512,	// (0x00069332) list_medium_line_t4_g4_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_t4_g4_g1

0x65c4,	// (0x000693e4) list_medium_line_t4_g4_g2_ParamLimits

0x65c4,	// (0x000693e4) list_medium_line_t4_g4_g2

0x66d5,	// (0x000694f5) list_medium_line_t4_g4_g3_ParamLimits

0x66d5,	// (0x000694f5) list_medium_line_t4_g4_g3

0x652a,	// (0x0006934a) list_medium_line_t4_g4_g4_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00072189) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00072189) list_medium_line_t4_g4_g

0x66e1,	// (0x00069501) list_medium_line_t4_g4_t1_ParamLimits

0x66e1,	// (0x00069501) list_medium_line_t4_g4_t1

0x66f6,	// (0x00069516) list_medium_line_t4_g4_t2_ParamLimits

0x66f6,	// (0x00069516) list_medium_line_t4_g4_t2

0x670c,	// (0x0006952c) list_medium_line_t4_g4_t3_ParamLimits

0x670c,	// (0x0006952c) list_medium_line_t4_g4_t3

0x655d,	// (0x0006937d) list_medium_line_t4_g4_t4_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00072192) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00072192) list_medium_line_t4_g4_t

0x95f1,	// (0x0006c411) chi_dic_find_pane_g1

0xa57e,	// (0x0006d39e) main_tport_pane

0x6942,	// (0x00069762) list_medium_line_plain_t1

0x6950,	// (0x00069770) list_medium_line_t2_g2_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t2_g2_g1

0x695c,	// (0x0006977c) list_medium_line_t2_g2_g2_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0007284e) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0007284e) list_medium_line_t2_g2_g

0x6968,	// (0x00069788) list_medium_line_t2_g2_t1_ParamLimits

0x6968,	// (0x00069788) list_medium_line_t2_g2_t1

0x697f,	// (0x0006979f) list_medium_line_t2_g2_t2_ParamLimits

0x697f,	// (0x0006979f) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00072853) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00072853) list_medium_line_t2_g2_t

0x6b04,	// (0x00069924) aid_sp_fs_list_icon_a_sm

0xd42e,	// (0x0007024e) aid_sp_fs_list_icon_d

0x396c,	// (0x0006678c) aid_sp_fs_text_primary

0x22fb,	// (0x0006511b) aid_sp_fs_text_secondary

0x6b0c,	// (0x0006992c) list_medium_line

0x6b0c,	// (0x0006992c) list_medium_line_g2

0x6b0c,	// (0x0006992c) list_medium_line_g3

0x6b0c,	// (0x0006992c) list_medium_line_plain

0x6b0c,	// (0x0006992c) list_medium_line_plain_t2

0x6b0c,	// (0x0006992c) list_medium_line_plain_t3

0x6b0c,	// (0x0006992c) list_medium_line_right_icon

0x6b0c,	// (0x0006992c) list_medium_line_right_iconx2

0x6b0c,	// (0x0006992c) list_medium_line_t2

0x6b0c,	// (0x0006992c) list_medium_line_t2_g2

0x6b0c,	// (0x0006992c) list_medium_line_t2_g3

0x6b0c,	// (0x0006992c) list_medium_line_t2_right_icon

0x6b0c,	// (0x0006992c) list_medium_line_t2_right_iconx2

0x6b0c,	// (0x0006992c) list_medium_line_t3

0x6b0c,	// (0x0006992c) list_medium_line_t3_g2

0x6b0c,	// (0x0006992c) list_medium_line_t3_g3

0x6b0c,	// (0x0006992c) list_medium_line_t3_right_iconx2

0x6b15,	// (0x00069935) list_medium_line_t4_g4

0x6b1e,	// (0x0006993e) list_medium_line_x2

0x6b1e,	// (0x0006993e) list_medium_line_x2_t2_g2

0x6b1e,	// (0x0006993e) list_medium_line_x2_t2_g3

0x6b1e,	// (0x0006993e) list_medium_line_x2_t2_g4

0x6b1e,	// (0x0006993e) list_medium_line_x2_t3

0x6b1e,	// (0x0006993e) list_medium_line_x2_t3_g2

0x6b1e,	// (0x0006993e) list_medium_line_x2_t3_g3

0x6b1e,	// (0x0006993e) list_medium_line_x2_t3_g4

0x6b1e,	// (0x0006993e) list_medium_line_x2_t4_g2

0x6b1e,	// (0x0006993e) list_medium_line_x2_t4_g4

0x6b27,	// (0x00069947) list_medium_line_x3

0x6b27,	// (0x00069947) list_medium_line_x3_t4

0x6b27,	// (0x00069947) list_medium_line_x3_t4_g4

0x6b15,	// (0x00069935) list_medium_line_x4_t4

0x6b15,	// (0x00069935) list_medium_line_x4_t4_g7

0x6b15,	// (0x00069935) list_medium_line_x4_t5

0x6b30,	// (0x00069950) list_single_fs_dyc_pane_ParamLimits

0x6b30,	// (0x00069950) list_single_fs_dyc_pane

0x6512,	// (0x00069332) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x4_t4_g7_g1

0x6b68,	// (0x00069988) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6b68,	// (0x00069988) list_medium_line_x4_t4_g7_g2

0x6b74,	// (0x00069994) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6b74,	// (0x00069994) list_medium_line_x4_t4_g7_g3

0x6b83,	// (0x000699a3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6b83,	// (0x000699a3) list_medium_line_x4_t4_g7_g4

0x6b8f,	// (0x000699af) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6b8f,	// (0x000699af) list_medium_line_x4_t4_g7_g5

0x6b9e,	// (0x000699be) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6b9e,	// (0x000699be) list_medium_line_x4_t4_g7_g6

0x6bad,	// (0x000699cd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6bad,	// (0x000699cd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf1,	// (0x00072a11) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf1,	// (0x00072a11) list_medium_line_x4_t4_g7_g

0x6bb9,	// (0x000699d9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6bb9,	// (0x000699d9) list_medium_line_x4_t4_g7_t1

0x6bce,	// (0x000699ee) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6bce,	// (0x000699ee) list_medium_line_x4_t4_g7_t2

0x6be3,	// (0x00069a03) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6be3,	// (0x00069a03) list_medium_line_x4_t4_g7_t3

0x6bf8,	// (0x00069a18) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6bf8,	// (0x00069a18) list_medium_line_x4_t4_g7_t4

0x6c0a,	// (0x00069a2a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6c0a,	// (0x00069a2a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc00,	// (0x00072a20) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc00,	// (0x00072a20) list_medium_line_x4_t4_g7_t

0x6c1c,	// (0x00069a3c) list_single_dyc_row_pane_ParamLimits

0x6c1c,	// (0x00069a3c) list_single_dyc_row_pane

0xe0c2,	// (0x00070ee2) call5_gesture_pane_ParamLimits

0xe0c2,	// (0x00070ee2) call5_gesture_pane

0xe0f8,	// (0x00070f18) call5_windows_pane_ParamLimits

0xe0f8,	// (0x00070f18) call5_windows_pane

0xe170,	// (0x00070f90) call5_swipe_1_pane_cp_ParamLimits

0xe170,	// (0x00070f90) call5_swipe_1_pane_cp

0xe17c,	// (0x00070f9c) call5_swipe_2_pane_cp_ParamLimits

0xe17c,	// (0x00070f9c) call5_swipe_2_pane_cp

0x1355,	// (0x00064175) call5_image_pane_cp

0xe188,	// (0x00070fa8) popup_call5_audio_first_window_cp_ParamLimits

0xe188,	// (0x00070fa8) popup_call5_audio_first_window_cp

0x2eec,	// (0x00065d0c) call5_swipe_1_pane_g1_cp_ParamLimits

0x2eec,	// (0x00065d0c) call5_swipe_1_pane_g1_cp

0x2f2c,	// (0x00065d4c) call5_swipe_1_pane_g2_cp

0x2f05,	// (0x00065d25) call5_swipe_1_pane_t1_cp_ParamLimits

0x2f05,	// (0x00065d25) call5_swipe_1_pane_t1_cp

0x2eec,	// (0x00065d0c) call5_swipe_2_pane_g1_cp_ParamLimits

0x2eec,	// (0x00065d0c) call5_swipe_2_pane_g1_cp

0x2f34,	// (0x00065d54) call5_swipe_2_pane_g2_cp

0x2f3c,	// (0x00065d5c) call5_swipe_2_pane_t1_cp_ParamLimits

0x2f3c,	// (0x00065d5c) call5_swipe_2_pane_t1_cp

0x000b,	// (0x00062e2b) main_sp_fs_email_pane

0x2f51,	// (0x00065d71) main_sp_fs_listscroll_pane_te

0x6cb3,	// (0x00069ad3) popup_sp_fs_action_menu_pane_ParamLimits

0x6cb3,	// (0x00069ad3) popup_sp_fs_action_menu_pane

0x5280,	// (0x000680a0) bg_sp_fs_ctrlbar_pane_g1

0x2fa0,	// (0x00065dc0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2fa9,	// (0x00065dc9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2fb2,	// (0x00065dd2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5280,	// (0x000680a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce9,	// (0x00072b09) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x505f,	// (0x00067e7f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x505f,	// (0x00067e7f) bg_sp_fs_ctrlbar_ddmenu_pane

0x2fbb,	// (0x00065ddb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2fbb,	// (0x00065ddb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2fc7,	// (0x00065de7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2fc7,	// (0x00065de7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf2,	// (0x00072b12) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf2,	// (0x00072b12) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2fd3,	// (0x00065df3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2fd3,	// (0x00065df3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6cf9,	// (0x00069b19) list_medium_line_t2_right_icon_g1

0x6d01,	// (0x00069b21) list_medium_line_t2_right_icon_t1

0x6d11,	// (0x00069b31) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf7,	// (0x00072b17) list_medium_line_t2_right_icon_t

0x4e05,	// (0x00067c25) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4e05,	// (0x00067c25) bg_sp_fs_ctrlbar_pane

0xe1ed,	// (0x0007100d) main_sp_fs_ctrlbar_button_pane_cp01

0xe1f5,	// (0x00071015) main_sp_fs_ctrlbar_ddmenu_pane

0x302f,	// (0x00065e4f) main_sp_fs_ctrlbar_pane_g1

0x303b,	// (0x00065e5b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfc,	// (0x00072b1c) main_sp_fs_ctrlbar_pane_g

0x3047,	// (0x00065e67) main_sp_fs_ctrlbar_pane_t1

0x6d1f,	// (0x00069b3f) main_sp_fs_ctrlbar_pane

0x6d3b,	// (0x00069b5b) main_sp_fs_listscroll_pane_te_cp01

0x6d4c,	// (0x00069b6c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6d4c,	// (0x00069b6c) popup_sp_fs_action_menu_pane_cp01

0x000b,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x000b,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp01

0x6d66,	// (0x00069b86) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6d66,	// (0x00069b86) sp_fs_action_menu_list_gene_pane_g1

0x306b,	// (0x00065e8b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x306b,	// (0x00065e8b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd01,	// (0x00072b21) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd01,	// (0x00072b21) sp_fs_action_menu_list_gene_pane_g

0x6d75,	// (0x00069b95) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6d75,	// (0x00069b95) sp_fs_action_menu_list_gene_pane_t1

0x6d8d,	// (0x00069bad) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6d8d,	// (0x00069bad) sp_fs_action_menu_list_gene_pane

0x30b3,	// (0x00065ed3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x30b3,	// (0x00065ed3) popup_sp_fs_action_menu_bg_pane

0x6db0,	// (0x00069bd0) sp_fs_action_menu_list_pane_ParamLimits

0x6db0,	// (0x00069bd0) sp_fs_action_menu_list_pane

0x30e5,	// (0x00065f05) sp_fs_scroll_pane_cp01_ParamLimits

0x30e5,	// (0x00065f05) sp_fs_scroll_pane_cp01

0x6dd4,	// (0x00069bf4) list_medium_line_plain_t2_t1

0x6de4,	// (0x00069c04) list_medium_line_plain_t2_t2

0x0001,

0xfd06,	// (0x00072b26) list_medium_line_plain_t2_t

0x6df2,	// (0x00069c12) list_medium_line_plain_t3_t1

0x6e02,	// (0x00069c22) list_medium_line_plain_t3_t2

0x6e10,	// (0x00069c30) list_medium_line_plain_t3_t3

0x0002,

0xfd0b,	// (0x00072b2b) list_medium_line_plain_t3_t

0x6512,	// (0x00069332) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t2_g2_g1

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00072099) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00072099) list_medium_line_x2_t2_g2_g

0x66e1,	// (0x00069501) list_medium_line_x2_t2_g2_t1_ParamLimits

0x66e1,	// (0x00069501) list_medium_line_x2_t2_g2_t1

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd12,	// (0x00072b32) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd12,	// (0x00072b32) list_medium_line_x2_t2_g2_t

0x6512,	// (0x00069332) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t4_g2_g1

0x6e1e,	// (0x00069c3e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6e1e,	// (0x00069c3e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd17,	// (0x00072b37) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd17,	// (0x00072b37) list_medium_line_x2_t4_g2_g

0x6e30,	// (0x00069c50) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6e30,	// (0x00069c50) list_medium_line_x2_t4_g2_t1

0x6e4a,	// (0x00069c6a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6e4a,	// (0x00069c6a) list_medium_line_x2_t4_g2_t2

0x6e60,	// (0x00069c80) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6e60,	// (0x00069c80) list_medium_line_x2_t4_g2_t3

0x655d,	// (0x0006937d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1c,	// (0x00072b3c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1c,	// (0x00072b3c) list_medium_line_x2_t4_g2_t

0x6e75,	// (0x00069c95) list_medium_line_t3_right_iconx2_g1

0x6cf9,	// (0x00069b19) list_medium_line_t3_right_iconx2_g2

0x6e7d,	// (0x00069c9d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd25,	// (0x00072b45) list_medium_line_t3_right_iconx2_g

0x6e85,	// (0x00069ca5) list_medium_line_t3_right_iconx2_t1

0x6e95,	// (0x00069cb5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2c,	// (0x00072b4c) list_medium_line_t3_right_iconx2_t

0x6512,	// (0x00069332) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x3_t4_g4_g1

0x651e,	// (0x0006933e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x3_t4_g4_g2

0x65c4,	// (0x000693e4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x65c4,	// (0x000693e4) list_medium_line_x3_t4_g4_g3

0x6ea3,	// (0x00069cc3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6ea3,	// (0x00069cc3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd31,	// (0x00072b51) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd31,	// (0x00072b51) list_medium_line_x3_t4_g4_g

0x6eaf,	// (0x00069ccf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6eaf,	// (0x00069ccf) list_medium_line_x3_t4_g4_t1

0x6ec6,	// (0x00069ce6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6ec6,	// (0x00069ce6) list_medium_line_x3_t4_g4_t2

0x6edb,	// (0x00069cfb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6edb,	// (0x00069cfb) list_medium_line_x3_t4_g4_t3

0x6ef0,	// (0x00069d10) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6ef0,	// (0x00069d10) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3a,	// (0x00072b5a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3a,	// (0x00072b5a) list_medium_line_x3_t4_g4_t

0x6f0d,	// (0x00069d2d) list_single_dyc_row_text_pane_t1_ParamLimits

0x6f0d,	// (0x00069d2d) list_single_dyc_row_text_pane_t1

0x6f50,	// (0x00069d70) list_single_dyc_row_text_pane_t2_ParamLimits

0x6f50,	// (0x00069d70) list_single_dyc_row_text_pane_t2

0x6faa,	// (0x00069dca) list_single_dyc_row_text_pane_t3_ParamLimits

0x6faa,	// (0x00069dca) list_single_dyc_row_text_pane_t3

0x0002,

0xfd43,	// (0x00072b63) list_single_dyc_row_text_pane_t_ParamLimits

0xfd43,	// (0x00072b63) list_single_dyc_row_text_pane_t

0x6fbc,	// (0x00069ddc) list_single_dyc_row_pane_g1_ParamLimits

0x6fbc,	// (0x00069ddc) list_single_dyc_row_pane_g1

0x6fc8,	// (0x00069de8) list_single_dyc_row_pane_g2_ParamLimits

0x6fc8,	// (0x00069de8) list_single_dyc_row_pane_g2

0x6fd4,	// (0x00069df4) list_single_dyc_row_pane_g3_ParamLimits

0x6fd4,	// (0x00069df4) list_single_dyc_row_pane_g3

0x6fe0,	// (0x00069e00) list_single_dyc_row_pane_g4_ParamLimits

0x6fe0,	// (0x00069e00) list_single_dyc_row_pane_g4

0x0003,

0xfd4a,	// (0x00072b6a) list_single_dyc_row_pane_g_ParamLimits

0xfd4a,	// (0x00072b6a) list_single_dyc_row_pane_g

0x6fec,	// (0x00069e0c) list_single_dyc_row_text_pane_ParamLimits

0x6fec,	// (0x00069e0c) list_single_dyc_row_text_pane

0x75d2,	// (0x0006a3f2) bg_sp_fs_scroll_pane

0x31c4,	// (0x00065fe4) thumb_sp_fs_scroll_pane

0x6950,	// (0x00069770) list_medium_line_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_g1

0x700b,	// (0x00069e2b) list_medium_line_t1_ParamLimits

0x700b,	// (0x00069e2b) list_medium_line_t1

0x6512,	// (0x00069332) list_medium_line_x2_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_g1

0x651e,	// (0x0006933e) list_medium_line_x2_g2_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_g2

0x0001,

0xfd53,	// (0x00072b73) list_medium_line_x2_g_ParamLimits

0xfd53,	// (0x00072b73) list_medium_line_x2_g

0x7020,	// (0x00069e40) list_medium_line_x2_t1_ParamLimits

0x7020,	// (0x00069e40) list_medium_line_x2_t1

0x6512,	// (0x00069332) list_medium_line_x3_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x3_g1

0x651e,	// (0x0006933e) list_medium_line_x3_g2_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x3_g2

0x0001,

0xfd53,	// (0x00072b73) list_medium_line_x3_g_ParamLimits

0xfd53,	// (0x00072b73) list_medium_line_x3_g

0x7020,	// (0x00069e40) list_medium_line_x3_t1_ParamLimits

0x7020,	// (0x00069e40) list_medium_line_x3_t1

0x31f8,	// (0x00066018) thumb_sp_fs_scroll_pane_g1

0x3201,	// (0x00066021) thumb_sp_fs_scroll_pane_g2

0x320a,	// (0x0006602a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00072b78) thumb_sp_fs_scroll_pane_g

0x31f8,	// (0x00066018) bg_sp_fs_scroll_pane_g1

0x3201,	// (0x00066021) bg_sp_fs_scroll_pane_g2

0x320a,	// (0x0006602a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00072b78) bg_sp_fs_scroll_pane_g

0x6512,	// (0x00069332) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6512,	// (0x00069332) list_medium_line_x2_t3_g4_g1

0x65b8,	// (0x000693d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x65b8,	// (0x000693d8) list_medium_line_x2_t3_g4_g2

0x651e,	// (0x0006933e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x651e,	// (0x0006933e) list_medium_line_x2_t3_g4_g3

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x652a,	// (0x0006934a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00072115) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00072115) list_medium_line_x2_t3_g4_g

0x7036,	// (0x00069e56) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7036,	// (0x00069e56) list_medium_line_x2_t3_g4_t1

0x704c,	// (0x00069e6c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x704c,	// (0x00069e6c) list_medium_line_x2_t3_g4_t2

0x655d,	// (0x0006937d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x655d,	// (0x0006937d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5f,	// (0x00072b7f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5f,	// (0x00072b7f) list_medium_line_x2_t3_g4_t

0x6950,	// (0x00069770) list_medium_line_g2_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_g2_g1

0x695c,	// (0x0006977c) list_medium_line_g2_g2_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0007284e) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0007284e) list_medium_line_g2_g

0x7065,	// (0x00069e85) list_medium_line_g2_t1_ParamLimits

0x7065,	// (0x00069e85) list_medium_line_g2_t1

0x6950,	// (0x00069770) list_medium_line_t3_g2_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t3_g2_g1

0x695c,	// (0x0006977c) list_medium_line_t3_g2_g2_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0007284e) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0007284e) list_medium_line_t3_g2_g

0x707a,	// (0x00069e9a) list_medium_line_t3_g2_t1_ParamLimits

0x707a,	// (0x00069e9a) list_medium_line_t3_g2_t1

0x7094,	// (0x00069eb4) list_medium_line_t3_g2_t2_ParamLimits

0x7094,	// (0x00069eb4) list_medium_line_t3_g2_t2

0x70aa,	// (0x00069eca) list_medium_line_t3_g2_t3_ParamLimits

0x70aa,	// (0x00069eca) list_medium_line_t3_g2_t3

0x0002,

0xfd66,	// (0x00072b86) list_medium_line_t3_g2_t_ParamLimits

0xfd66,	// (0x00072b86) list_medium_line_t3_g2_t

0x6cf9,	// (0x00069b19) list_medium_line_right_icon_g1

0x70c1,	// (0x00069ee1) list_medium_line_right_icon_t1

0x6950,	// (0x00069770) list_medium_line_t2_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t2_g1

0x70cf,	// (0x00069eef) list_medium_line_t2_t1_ParamLimits

0x70cf,	// (0x00069eef) list_medium_line_t2_t1

0x70e9,	// (0x00069f09) list_medium_line_t2_t2_ParamLimits

0x70e9,	// (0x00069f09) list_medium_line_t2_t2

0x0001,

0xfd6d,	// (0x00072b8d) list_medium_line_t2_t_ParamLimits

0xfd6d,	// (0x00072b8d) list_medium_line_t2_t

0x6950,	// (0x00069770) list_medium_line_t3_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t3_g1

0x70fe,	// (0x00069f1e) list_medium_line_t3_t1_ParamLimits

0x70fe,	// (0x00069f1e) list_medium_line_t3_t1

0x7115,	// (0x00069f35) list_medium_line_t3_t2_ParamLimits

0x7115,	// (0x00069f35) list_medium_line_t3_t2

0x712a,	// (0x00069f4a) list_medium_line_t3_t3_ParamLimits

0x712a,	// (0x00069f4a) list_medium_line_t3_t3

0x0002,

0xfd72,	// (0x00072b92) list_medium_line_t3_t_ParamLimits

0xfd72,	// (0x00072b92) list_medium_line_t3_t

0x6950,	// (0x00069770) list_medium_line_g3_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_g3_g1

0x713c,	// (0x00069f5c) list_medium_line_g3_g2_ParamLimits

0x713c,	// (0x00069f5c) list_medium_line_g3_g2

0x695c,	// (0x0006977c) list_medium_line_g3_g3_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_g3_g3

0x0002,

0xfd79,	// (0x00072b99) list_medium_line_g3_g_ParamLimits

0xfd79,	// (0x00072b99) list_medium_line_g3_g

0x7148,	// (0x00069f68) list_medium_line_g3_t1_ParamLimits

0x7148,	// (0x00069f68) list_medium_line_g3_t1

0x6950,	// (0x00069770) list_medium_line_t2_g3_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t2_g3_g1

0x713c,	// (0x00069f5c) list_medium_line_t2_g3_g2_ParamLimits

0x713c,	// (0x00069f5c) list_medium_line_t2_g3_g2

0x695c,	// (0x0006977c) list_medium_line_t2_g3_g3_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_t2_g3_g3

0x0002,

0xfd79,	// (0x00072b99) list_medium_line_t2_g3_g_ParamLimits

0xfd79,	// (0x00072b99) list_medium_line_t2_g3_g

0x715d,	// (0x00069f7d) list_medium_line_t2_g3_t1_ParamLimits

0x715d,	// (0x00069f7d) list_medium_line_t2_g3_t1

0x7174,	// (0x00069f94) list_medium_line_t2_g3_t2_ParamLimits

0x7174,	// (0x00069f94) list_medium_line_t2_g3_t2

0x0001,

0xfd80,	// (0x00072ba0) list_medium_line_t2_g3_t_ParamLimits

0xfd80,	// (0x00072ba0) list_medium_line_t2_g3_t

0x6950,	// (0x00069770) list_medium_line_t3_g3_g1_ParamLimits

0x6950,	// (0x00069770) list_medium_line_t3_g3_g1

0x713c,	// (0x00069f5c) list_medium_line_t3_g3_g2_ParamLimits

0x713c,	// (0x00069f5c) list_medium_line_t3_g3_g2

0x695c,	// (0x0006977c) list_medium_line_t3_g3_g3_ParamLimits

0x695c,	// (0x0006977c) list_medium_line_t3_g3_g3

0x0002,

0xfd79,	// (0x00072b99) list_medium_line_t3_g3_g_ParamLimits

0xfd79,	// (0x00072b99) list_medium_line_t3_g3_g

0x7189,	// (0x00069fa9) list_medium_line_t3_g3_t1_ParamLimits

0x7189,	// (0x00069fa9) list_medium_line_t3_g3_t1

0x719d,	// (0x00069fbd) list_medium_line_t3_g3_t2_ParamLimits

0x719d,	// (0x00069fbd) list_medium_line_t3_g3_t2

0x71af,	// (0x00069fcf) list_medium_line_t3_g3_t3_ParamLimits

0x71af,	// (0x00069fcf) list_medium_line_t3_g3_t3

0x0002,

0xfd85,	// (0x00072ba5) list_medium_line_t3_g3_t_ParamLimits

0xfd85,	// (0x00072ba5) list_medium_line_t3_g3_t

0x6e75,	// (0x00069c95) list_medium_line_right_iconx2_g1

0x6cf9,	// (0x00069b19) list_medium_line_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00072bac) list_medium_line_right_iconx2_g

0x71c3,	// (0x00069fe3) list_medium_line_right_iconx2_t1

0x6e75,	// (0x00069c95) list_medium_line_t2_right_iconx2_g1

0x6cf9,	// (0x00069b19) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00072bac) list_medium_line_t2_right_iconx2_g

0x71d1,	// (0x00069ff1) list_medium_line_t2_right_iconx2_t1

0x71e1,	// (0x0006a001) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd91,	// (0x00072bb1) list_medium_line_t2_right_iconx2_t

0x71ef,	// (0x0006a00f) list_medium_line_x4_t4_t1

0x71fd,	// (0x0006a01d) list_medium_line_x4_t4_t2

0x720d,	// (0x0006a02d) list_medium_line_x4_t4_t3

0x721d,	// (0x0006a03d) list_medium_line_x4_t4_t4

0x0003,

0xfd96,	// (0x00072bb6) list_medium_line_x4_t4_t

0xe228,	// (0x00071048) tport_appsw_pane_ParamLimits

0xe228,	// (0x00071048) tport_appsw_pane

0xe236,	// (0x00071056) tport_contact_pane_ParamLimits

0xe236,	// (0x00071056) tport_contact_pane

0xe244,	// (0x00071064) tport_listscroll_pane_ParamLimits

0xe244,	// (0x00071064) tport_listscroll_pane

0xe252,	// (0x00071072) cell_tport_appsw_pane_ParamLimits

0xe252,	// (0x00071072) cell_tport_appsw_pane

0x5515,	// (0x00068335) tport_appsw_pane_g1_ParamLimits

0x5515,	// (0x00068335) tport_appsw_pane_g1

0x3273,	// (0x00066093) tport_contact_pane_g1

0x327c,	// (0x0006609c) tport_contact_pane_t1

0x328a,	// (0x000660aa) tport_contact_pane_t2

0x0001,

0xfd9f,	// (0x00072bbf) tport_contact_pane_t

0x3298,	// (0x000660b8) list_tport_pane

0x32a1,	// (0x000660c1) scroll_pane_cp_030

0xe27d,	// (0x0007109d) cell_tport_appsw_pane_g1

0x32ba,	// (0x000660da) cell_tport_appsw_pane_t1

0x75d2,	// (0x0006a3f2) grid_highlight_pane_cp019

0xe28d,	// (0x000710ad) list_tport_double_graphic_pane_ParamLimits

0xe28d,	// (0x000710ad) list_tport_double_graphic_pane

0x000b,	// (0x00062e2b) list_highlight_pane_cp023_ParamLimits

0x000b,	// (0x00062e2b) list_highlight_pane_cp023

0xe29e,	// (0x000710be) list_tport_double_graphic_pane_g1_ParamLimits

0xe29e,	// (0x000710be) list_tport_double_graphic_pane_g1

0xe2ab,	// (0x000710cb) list_tport_double_graphic_pane_t1_ParamLimits

0xe2ab,	// (0x000710cb) list_tport_double_graphic_pane_t1

0xe2c0,	// (0x000710e0) list_tport_double_graphic_pane_t2_ParamLimits

0xe2c0,	// (0x000710e0) list_tport_double_graphic_pane_t2

0x0001,

0xfdab,	// (0x00072bcb) list_tport_double_graphic_pane_t_ParamLimits

0xfdab,	// (0x00072bcb) list_tport_double_graphic_pane_t

0x75d2,	// (0x0006a3f2) main_cale_note_pane

0xc78f,	// (0x0006f5af) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc78f,	// (0x0006f5af) cell_vitu2_function_top_wide_pane_cp01

0xde11,	// (0x00070c31) wait_bar_pane_cp05_ParamLimits

0x75d2,	// (0x0006a3f2) listscroll_cmail_pane

0x32d0,	// (0x000660f0) list_cmail_pane

0xe2dc,	// (0x000710fc) list_cmail_body_pane

0xe2f1,	// (0x00071111) list_single_cmail_header_caption_pane

0xe30b,	// (0x0007112b) list_single_cmail_header_detail_pane_ParamLimits

0xe30b,	// (0x0007112b) list_single_cmail_header_detail_pane

0xe33a,	// (0x0007115a) list_single_cmail_header_caption_pane_t1

0x722d,	// (0x0006a04d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x722d,	// (0x0006a04d) list_single_cmail_header_detail_pane_g1

0xe34a,	// (0x0007116a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe34a,	// (0x0007116a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb0,	// (0x00072bd0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb0,	// (0x00072bd0) list_single_cmail_header_detail_pane_g

0x7245,	// (0x0006a065) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7245,	// (0x0006a065) list_single_cmail_header_detail_pane_t1

0x72a9,	// (0x0006a0c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x72a9,	// (0x0006a0c9) list_single_cmail_header_editor_pane_bg

0x2b8e,	// (0x000659ae) list_cmail_body_pane_g1

0x3359,	// (0x00066179) list_cmail_body_pane_t1

0x1d54,	// (0x00064b74) list_single_cmail_header_editor_pane_bg_g1

0x0c70,	// (0x00063a90) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1d64,	// (0x00064b84) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1d5c,	// (0x00064b7c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1fa5,	// (0x00064dc5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1d84,	// (0x00064ba4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1d74,	// (0x00064b94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1d7c,	// (0x00064b9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0c50,	// (0x00063a70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe356,	// (0x00071176) calenote_gesture_pane_ParamLimits

0xe356,	// (0x00071176) calenote_gesture_pane

0xe370,	// (0x00071190) calenote_window_pane_ParamLimits

0xe370,	// (0x00071190) calenote_window_pane

0x3367,	// (0x00066187) popup_note_window_cp01

0xe388,	// (0x000711a8) calenote_swipe_1_pane_ParamLimits

0xe388,	// (0x000711a8) calenote_swipe_1_pane

0xe17c,	// (0x00070f9c) calenote_swipe_2_pane_ParamLimits

0xe17c,	// (0x00070f9c) calenote_swipe_2_pane

0x2eec,	// (0x00065d0c) calenote_swipe_1_pane_g1_ParamLimits

0x2eec,	// (0x00065d0c) calenote_swipe_1_pane_g1

0x2ef9,	// (0x00065d19) calenote_swipe_1_pane_g2_ParamLimits

0x2ef9,	// (0x00065d19) calenote_swipe_1_pane_g2

0x0001,

0xfcdf,	// (0x00072aff) calenote_swipe_1_pane_g_ParamLimits

0xfcdf,	// (0x00072aff) calenote_swipe_1_pane_g

0x3379,	// (0x00066199) calenote_swipe_1_pane_t1_ParamLimits

0x3379,	// (0x00066199) calenote_swipe_1_pane_t1

0x2eec,	// (0x00065d0c) calenote_swipe_2_pane_g1_ParamLimits

0x2eec,	// (0x00065d0c) calenote_swipe_2_pane_g1

0x3398,	// (0x000661b8) calenote_swipe_2_pane_g2_ParamLimits

0x3398,	// (0x000661b8) calenote_swipe_2_pane_g2

0x0001,

0xfdbc,	// (0x00072bdc) calenote_swipe_2_pane_g_ParamLimits

0xfdbc,	// (0x00072bdc) calenote_swipe_2_pane_g

0x33a4,	// (0x000661c4) calenote_swipe_2_pane_t1_ParamLimits

0x33a4,	// (0x000661c4) calenote_swipe_2_pane_t1

0x75d2,	// (0x0006a3f2) main_mup_navstr_pane

0xb579,	// (0x0006e399) main_mup3_pane_t7_ParamLimits

0xb579,	// (0x0006e399) main_mup3_pane_t7

0xbf48,	// (0x0006ed68) main_mp4_pane_g6_ParamLimits

0xbf48,	// (0x0006ed68) main_mp4_pane_g6

0xc2aa,	// (0x0006f0ca) main_image3_pane_t4_ParamLimits

0xc2aa,	// (0x0006f0ca) main_image3_pane_t4

0xe39b,	// (0x000711bb) popup_navstr_preview_pane_ParamLimits

0xe39b,	// (0x000711bb) popup_navstr_preview_pane

0xe3a7,	// (0x000711c7) scroll_navstr_pane_ParamLimits

0xe3a7,	// (0x000711c7) scroll_navstr_pane

0x75d2,	// (0x0006a3f2) bg_popup_preview_window_pane_cp04

0x33cb,	// (0x000661eb) popup_navstr_preview_pane_t1

0xe3b3,	// (0x000711d3) scroll_navstr_pane_g1_ParamLimits

0xe3b3,	// (0x000711d3) scroll_navstr_pane_g1

0xe3c0,	// (0x000711e0) scroll_navstr_pane_t1_ParamLimits

0xe3c0,	// (0x000711e0) scroll_navstr_pane_t1

0x3370,	// (0x00066190) bg_button_pane_cp014

0x3370,	// (0x00066190) bg_button_pane_cp030

0x6c59,	// (0x00069a79) list_double_fisheye_pane_g4_ParamLimits

0x6c59,	// (0x00069a79) list_double_fisheye_pane_g4

0x6c65,	// (0x00069a85) list_double_fisheye_pane_g5_ParamLimits

0x6c65,	// (0x00069a85) list_double_fisheye_pane_g5

0x32d8,	// (0x000660f8) sp_fs_scroll_pane_cp03

0x302f,	// (0x00065e4f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x303b,	// (0x00065e5b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfc,	// (0x00072b1c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3047,	// (0x00065e67) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2d2,	// (0x000710f2) sp_fs_scroll_pane_cp02

0x090a,	// (0x0006372a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x090a,	// (0x0006372a) popup_sp_fs_calendar_preview_list_single_pane

0x75d2,	// (0x0006a3f2) main_cam6_pano_pane

0x000b,	// (0x00062e2b) main_mup3_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_phacti_pane

0xdce2,	// (0x00070b02) bg_button_pane_cp11

0xdcfa,	// (0x00070b1a) main_mobtv_info_pane_g2_ParamLimits

0xdcfa,	// (0x00070b1a) main_mobtv_info_pane_g2

0x0001,

0xfc5c,	// (0x00072a7c) main_mobtv_info_pane_g_ParamLimits

0xfc5c,	// (0x00072a7c) main_mobtv_info_pane_g

0xdeae,	// (0x00070cce) sc_clock_pane_t5_ParamLimits

0xdeae,	// (0x00070cce) sc_clock_pane_t5

0xdf53,	// (0x00070d73) main_radioblah_pane_g1_ParamLimits

0x2e1e,	// (0x00065c3e) main_radioblah_pane_t3_ParamLimits

0x2e1e,	// (0x00065c3e) main_radioblah_pane_t3

0x2e36,	// (0x00065c56) main_radioblah_pane_t4_ParamLimits

0x2e36,	// (0x00065c56) main_radioblah_pane_t4

0xdf71,	// (0x00070d91) main_radioblah_text_pane_ParamLimits

0xdf71,	// (0x00070d91) main_radioblah_text_pane

0xdf7e,	// (0x00070d9e) main_radioblah_info_pane_g1_ParamLimits

0xe017,	// (0x00070e37) main_radioblah_info_pane_t4_ParamLimits

0xe017,	// (0x00070e37) main_radioblah_info_pane_t4

0x000b,	// (0x00062e2b) main_sp_fs_calendar_pane

0xe3d2,	// (0x000711f2) main_phacti_pane_g1

0xe3da,	// (0x000711fa) phacti_note_pane_ParamLimits

0xe3da,	// (0x000711fa) phacti_note_pane

0x33e2,	// (0x00066202) phacti_term_pane_ParamLimits

0x33e2,	// (0x00066202) phacti_term_pane

0x33f7,	// (0x00066217) phacti_note_pane_t1_ParamLimits

0x33f7,	// (0x00066217) phacti_note_pane_t1

0x72bb,	// (0x0006a0db) phacti_term_pane_g1

0x72c3,	// (0x0006a0e3) phacti_term_pane_t1_ParamLimits

0x72c3,	// (0x0006a0e3) phacti_term_pane_t1

0x3440,	// (0x00066260) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3448,	// (0x00066268) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc6,	// (0x00072be6) popup_sp_fs_calendar_preview_list_single_pane_g

0x3450,	// (0x00066270) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3450,	// (0x00066270) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3466,	// (0x00066286) aid_popup_sp_fs_bg_corner_pane

0x5280,	// (0x000680a0) popup_sp_fs_calendar_preview_bg_pane_g1

0x75d2,	// (0x0006a3f2) popup_sp_fs_calendar_preview_bg_pane

0x346e,	// (0x0006628e) popup_sp_fs_calendar_preview_list_pane

0x000b,	// (0x00062e2b) bg_main_sp_fs_cale_pane_ParamLimits

0x000b,	// (0x00062e2b) bg_main_sp_fs_cale_pane

0x72ed,	// (0x0006a10d) listscroll_cale_mrui_pane_ParamLimits

0x72ed,	// (0x0006a10d) listscroll_cale_mrui_pane

0x7301,	// (0x0006a121) listscroll_sp_fs_schedule_track_pane

0x730a,	// (0x0006a12a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x730a,	// (0x0006a12a) main_sp_fs_ctrlbar_pane_cp01

0x34a4,	// (0x000662c4) main_sp_fs_ribbon_pane

0x34ac,	// (0x000662cc) popup_sp_fs_cale_preview_window

0xe419,	// (0x00071239) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe419,	// (0x00071239) list_single_sp_fs_schedule_track_pane

0x7879,	// (0x0006a699) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7879,	// (0x0006a699) bg_sp_fs_highlight_list_pane_cp03

0xe42b,	// (0x0007124b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe42b,	// (0x0007124b) list_single_sp_fs_schedule_track_pane_g1

0xe437,	// (0x00071257) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe437,	// (0x00071257) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcb,	// (0x00072beb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcb,	// (0x00072beb) list_single_sp_fs_schedule_track_pane_g

0xe443,	// (0x00071263) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe443,	// (0x00071263) list_single_sp_fs_schedule_track_pane_t1

0xe461,	// (0x00071281) sp_fs_schedule_track_pane_ParamLimits

0xe461,	// (0x00071281) sp_fs_schedule_track_pane

0x34be,	// (0x000662de) sp_fs_schedule_track_pane_g1

0x34c6,	// (0x000662e6) sp_fs_schedule_track_pane_g2

0x34ce,	// (0x000662ee) sp_fs_schedule_track_pane_g3

0x34d6,	// (0x000662f6) sp_fs_schedule_track_pane_g4

0x34de,	// (0x000662fe) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd0,	// (0x00072bf0) sp_fs_schedule_track_pane_g

0x1d54,	// (0x00064b74) bg_sp_fs_schedule_viewer_highlight_g1

0x0c70,	// (0x00063a90) bg_sp_fs_schedule_viewer_highlight_g2

0x1d5c,	// (0x00064b7c) bg_sp_fs_schedule_viewer_highlight_g3

0x1d64,	// (0x00064b84) bg_sp_fs_schedule_viewer_highlight_g4

0x1fa5,	// (0x00064dc5) bg_sp_fs_schedule_viewer_highlight_g5

0x1d74,	// (0x00064b94) bg_sp_fs_schedule_viewer_highlight_g6

0x1d7c,	// (0x00064b9c) bg_sp_fs_schedule_viewer_highlight_g7

0x1d84,	// (0x00064ba4) bg_sp_fs_schedule_viewer_highlight_g8

0x0c50,	// (0x00063a70) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddb,	// (0x00072bfb) bg_sp_fs_schedule_viewer_highlight_g

0x75d2,	// (0x0006a3f2) bg_main_sp_fs_ribbon_pane

0xe473,	// (0x00071293) main_sp_fs_ribbon_pane_g1

0x34e6,	// (0x00066306) main_sp_fs_ribbon_pane_t1

0xe47c,	// (0x0007129c) main_sp_fs_ribbon_pane_t2

0x34f5,	// (0x00066315) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdee,	// (0x00072c0e) main_sp_fs_ribbon_pane_t

0x3504,	// (0x00066324) main_sp_fs_ribbon_scheduler_pane

0x350c,	// (0x0006632c) bg_main_sp_fs_ribbon_pane_g1

0x3515,	// (0x00066335) bg_main_sp_fs_ribbon_pane_g2

0x351e,	// (0x0006633e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf5,	// (0x00072c15) bg_main_sp_fs_ribbon_pane_g

0x3526,	// (0x00066346) main_sp_fs_ribbon_scheduler_pane_g1

0x352f,	// (0x0006634f) main_sp_fs_ribbon_scheduler_pane_g2

0x3538,	// (0x00066358) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfc,	// (0x00072c1c) main_sp_fs_ribbon_scheduler_pane_g

0x3541,	// (0x00066361) list_cale_mrui_pane

0xe48b,	// (0x000712ab) sp_fs_scroll_pane_cp07_ParamLimits

0xe48b,	// (0x000712ab) sp_fs_scroll_pane_cp07

0xe4a1,	// (0x000712c1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe4a1,	// (0x000712c1) bg_sp_fs_schedule_viewer_highlight

0x354a,	// (0x0006636a) list_single_sp_fs_schedule_track_pane_cp01

0x3552,	// (0x00066372) list_sp_fs_schedule_track_pane

0x355a,	// (0x0006637a) sp_fs_scroll_pane_cp06_ParamLimits

0x355a,	// (0x0006637a) sp_fs_scroll_pane_cp06

0x5280,	// (0x000680a0) bgmain_sp_fs_calendar_pane_g1

0x731b,	// (0x0006a13b) list_single_cale_mrui_pane_ParamLimits

0x731b,	// (0x0006a13b) list_single_cale_mrui_pane

0x733f,	// (0x0006a15f) list_single_cale_mrui_row_pane_ParamLimits

0x733f,	// (0x0006a15f) list_single_cale_mrui_row_pane

0x734c,	// (0x0006a16c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x734c,	// (0x0006a16c) list_single_cale_mrui_row_pane_g1

0x7384,	// (0x0006a1a4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7384,	// (0x0006a1a4) list_single_cale_mrui_row_pane_t1

0x7396,	// (0x0006a1b6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7396,	// (0x0006a1b6) list_single_cale_mrui_row_pane_t2

0x73fc,	// (0x0006a21c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x73fc,	// (0x0006a21c) list_single_cale_mrui_row_pane_t3

0x742b,	// (0x0006a24b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x742b,	// (0x0006a24b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00072c28) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00072c28) list_single_cale_mrui_row_pane_t

0x745a,	// (0x0006a27a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x745a,	// (0x0006a27a) list_single_cmail_header_editor_pane_bg_cp01

0x747c,	// (0x0006a29c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x747c,	// (0x0006a29c) list_single_cmail_header_editor_pane_bg_cp02

0xe4ae,	// (0x000712ce) main_radioblah_text_pane_t1_ParamLimits

0xe4ae,	// (0x000712ce) main_radioblah_text_pane_t1

0x3621,	// (0x00066441) cam6_indi_pane_cp01

0x3629,	// (0x00066449) cam6_mode_pane_cp01

0x3631,	// (0x00066451) cam6_pano_pane

0x363a,	// (0x0006645a) cam6_zoom_pane_cp01

0x3644,	// (0x00066464) cam6_pano_image_pane

0x364d,	// (0x0006646d) cam6_pano_pane_g1

0x2b8e,	// (0x000659ae) cam6_pano_pane_g2

0x3656,	// (0x00066476) cam6_pano_pane_g3

0x365f,	// (0x0006647f) cam6_pano_pane_g4

0xedf1,	// (0x00071c11) cam6_pano_pane_g5

0x3668,	// (0x00066488) cam6_pano_pane_g6

0x3670,	// (0x00066490) cam6_pano_pane_g7

0x3678,	// (0x00066498) cam6_pano_pane_g8

0x3681,	// (0x000664a1) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00072c31) cam6_pano_pane_g

0x75d2,	// (0x0006a3f2) main_browser_tag_pane

0x33c3,	// (0x000661e3) grid_navstr_albumart_pane

0x368c,	// (0x000664ac) cell_navstr_albumart_pane_ParamLimits

0x368c,	// (0x000664ac) cell_navstr_albumart_pane

0x36a8,	// (0x000664c8) cell_navstr_albumart_pane_g1

0x4c1e,	// (0x00067a3e) cell_navstr_albumart_pane_g2

0x4c2e,	// (0x00067a4e) cell_navstr_albumart_pane_g3

0x4c26,	// (0x00067a46) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x00072c44) cell_navstr_albumart_pane_g

0xe4c9,	// (0x000712e9) bt_list_pane_ParamLimits

0xe4c9,	// (0x000712e9) bt_list_pane

0xe4e2,	// (0x00071302) bt_list_pane_t1

0xe4f1,	// (0x00071311) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00072c4d) bt_list_pane_t

0x75d2,	// (0x0006a3f2) main_cale_prevew_pane

0xe500,	// (0x00071320) popup_cale_preview_window_ParamLimits

0xe500,	// (0x00071320) popup_cale_preview_window

0x000b,	// (0x00062e2b) bg_popup_preview_window_pane_cp05_ParamLimits

0x000b,	// (0x00062e2b) bg_popup_preview_window_pane_cp05

0x36b0,	// (0x000664d0) list_cale_preview_pane_ParamLimits

0x36b0,	// (0x000664d0) list_cale_preview_pane

0xe51b,	// (0x0007133b) list_double_cale_preview_pane_ParamLimits

0xe51b,	// (0x0007133b) list_double_cale_preview_pane

0xe52f,	// (0x0007134f) list_single_cale_preview_pane_ParamLimits

0xe52f,	// (0x0007134f) list_single_cale_preview_pane

0xe547,	// (0x00071367) list_single_cale_preview_pane_g1

0xe54f,	// (0x0007136f) list_single_cale_preview_pane_t1_ParamLimits

0xe54f,	// (0x0007136f) list_single_cale_preview_pane_t1

0xe564,	// (0x00071384) list_double_cale_preview_pane_g1

0xe56c,	// (0x0007138c) list_double_cale_preview_pane_t1_ParamLimits

0xe56c,	// (0x0007138c) list_double_cale_preview_pane_t1

0xe581,	// (0x000713a1) list_double_cale_preview_pane_t2_ParamLimits

0xe581,	// (0x000713a1) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00072c52) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00072c52) list_double_cale_preview_pane_t

0x75d2,	// (0x0006a3f2) main_ezdial_pane

0x000b,	// (0x00062e2b) main_sp_fs_email_pane_ParamLimits

0xe196,	// (0x00070fb6) cmail_ddmenu_btn01_pane_ParamLimits

0xe196,	// (0x00070fb6) cmail_ddmenu_btn01_pane

0xe1b3,	// (0x00070fd3) cmail_ddmenu_btn02_pane_ParamLimits

0xe1b3,	// (0x00070fd3) cmail_ddmenu_btn02_pane

0xe1d1,	// (0x00070ff1) cmail_ddmenu_btn03_pane_ParamLimits

0xe1d1,	// (0x00070ff1) cmail_ddmenu_btn03_pane

0x6d1f,	// (0x00069b3f) main_sp_fs_ctrlbar_pane_ParamLimits

0x6d3b,	// (0x00069b5b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe2dc,	// (0x000710fc) list_cmail_body_pane_ParamLimits

0x32e7,	// (0x00066107) bg_button_pane_cp12

0x32fc,	// (0x0006611c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x32fc,	// (0x0006611c) list_single_cmail_header_detail_pane_g3

0x7283,	// (0x0006a0a3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7283,	// (0x0006a0a3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb7,	// (0x00072bd7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb7,	// (0x00072bd7) list_single_cmail_header_detail_pane_t

0x72d8,	// (0x0006a0f8) phacti_term_pane_t2_ParamLimits

0x72d8,	// (0x0006a0f8) phacti_term_pane_t2

0x0001,

0xfdc1,	// (0x00072be1) phacti_term_pane_t_ParamLimits

0xfdc1,	// (0x00072be1) phacti_term_pane_t

0x36bc,	// (0x000664dc) aid_size_list_single_double

0xe599,	// (0x000713b9) popup_ezdial_listscroll_window

0xe5b9,	// (0x000713d9) popup_number_entry_window_cp01

0x1355,	// (0x00064175) bg_popup_call_pane_cp09

0x36c8,	// (0x000664e8) ezdial_list_pane

0x36d0,	// (0x000664f0) scroll_pane_cp23

0x505f,	// (0x00067e7f) bg_button_pane_cp028_ParamLimits

0x505f,	// (0x00067e7f) bg_button_pane_cp028

0xe5c7,	// (0x000713e7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe5c7,	// (0x000713e7) cmail_ddmenu_btn01_pane_g1

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00072c57) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00072c57) cmail_ddmenu_btn01_pane_g

0x36d8,	// (0x000664f8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x36d8,	// (0x000664f8) cmail_ddmenu_btn01_pane_t1

0x4e05,	// (0x00067c25) bg_button_pane_cp029_ParamLimits

0x4e05,	// (0x00067c25) bg_button_pane_cp029

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn02_pane_g1

0xe5ef,	// (0x0007140f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe5ef,	// (0x0007140f) cmail_ddmenu_btn02_pane_t1

0x7879,	// (0x0006a699) bg_button_pane_cp031_ParamLimits

0x7879,	// (0x0006a699) bg_button_pane_cp031

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe5d7,	// (0x000713f7) cmail_ddmenu_btn03_pane_g1

0xe5ef,	// (0x0007140f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe5ef,	// (0x0007140f) cmail_ddmenu_btn03_pane_t1

0xc153,	// (0x0006ef73) cell_dialer2_keypad_pane_t1_ParamLimits

0xc16d,	// (0x0006ef8d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc16d,	// (0x0006ef8d) cell_dialer2_keypad_pane_t1_copy1

0xdb98,	// (0x000709b8) ncimui_group_button_pane

0x000b,	// (0x00062e2b) main_sp_fs_calendar_pane_ParamLimits

0xe2f1,	// (0x00071111) list_single_cmail_header_caption_pane_ParamLimits

0x2304,	// (0x00065124) aid_recal_txt_sm_pane

0x75d2,	// (0x0006a3f2) mian_recal_day_pane

0x34ac,	// (0x000662cc) popup_sp_fs_cale_preview_window_ParamLimits

0x75d2,	// (0x0006a3f2) list_recal_day_pane

0x3706,	// (0x00066526) list_single_recal_day_pane_ParamLimits

0x3706,	// (0x00066526) list_single_recal_day_pane

0x3718,	// (0x00066538) list_single_recal_day_pane_g1_ParamLimits

0x3718,	// (0x00066538) list_single_recal_day_pane_g1

0x3724,	// (0x00066544) list_single_recal_day_pane_g2_ParamLimits

0x3724,	// (0x00066544) list_single_recal_day_pane_g2

0x3730,	// (0x00066550) list_single_recal_day_pane_g3_ParamLimits

0x3730,	// (0x00066550) list_single_recal_day_pane_g3

0xe613,	// (0x00071433) list_single_recal_day_pane_g4_ParamLimits

0xe613,	// (0x00071433) list_single_recal_day_pane_g4

0x373c,	// (0x0006655c) list_single_recal_day_pane_g5_ParamLimits

0x373c,	// (0x0006655c) list_single_recal_day_pane_g5

0x3748,	// (0x00066568) list_single_recal_day_pane_g6_ParamLimits

0x3748,	// (0x00066568) list_single_recal_day_pane_g6

0x0005,

0xfe46,	// (0x00072c66) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00072c66) list_single_recal_day_pane_g

0x3754,	// (0x00066574) list_single_recal_day_pane_t1

0x3762,	// (0x00066582) list_single_recal_day_pane_t2

0x0001,

0xfe53,	// (0x00072c73) list_single_recal_day_pane_t

0xe621,	// (0x00071441) ncimui_query_button_pane_ParamLimits

0xe621,	// (0x00071441) ncimui_query_button_pane

0xe631,	// (0x00071451) ncimui_query_button_pane_t1_ParamLimits

0xe631,	// (0x00071451) ncimui_query_button_pane_t1

0x3770,	// (0x00066590) ncimui_query_button_pane_t2_ParamLimits

0x3770,	// (0x00066590) ncimui_query_button_pane_t2

0x0001,

0xfe58,	// (0x00072c78) ncimui_query_button_pane_t_ParamLimits

0xfe58,	// (0x00072c78) ncimui_query_button_pane_t

0xe644,	// (0x00071464) query_button_pane_ParamLimits

0xe644,	// (0x00071464) query_button_pane

0x75d2,	// (0x0006a3f2) bg_button_pane_cp0028

0x3783,	// (0x000665a3) query_button_pane_t1

0xa57e,	// (0x0006d39e) main_tport_pane_ParamLimits

0xe1ff,	// (0x0007101f) bg_popup_window_pane_cp01_ParamLimits

0xe1ff,	// (0x0007101f) bg_popup_window_pane_cp01

0xe20c,	// (0x0007102c) heading_pane_cp08_ParamLimits

0xe20c,	// (0x0007102c) heading_pane_cp08

0xe21a,	// (0x0007103a) heading_pane_cp07_ParamLimits

0xe21a,	// (0x0007103a) heading_pane_cp07

0x32b2,	// (0x000660d2) cell_tport_appsw_pane_g2

0x0002,

0xfda4,	// (0x00072bc4) cell_tport_appsw_pane_g

0x6742,	// (0x00069562) input_candi_list_open_g1

0x0e39,	// (0x00063c59) list_cale_time_pane_g6_ParamLimits

0x0e39,	// (0x00063c59) list_cale_time_pane_g6

0xafeb,	// (0x0006de0b) aid_size_touch_calib_1_ParamLimits

0xafeb,	// (0x0006de0b) aid_size_touch_calib_1

0xaff7,	// (0x0006de17) aid_size_touch_calib_2_ParamLimits

0xaff7,	// (0x0006de17) aid_size_touch_calib_2

0xb005,	// (0x0006de25) aid_size_touch_calib_3_ParamLimits

0xb005,	// (0x0006de25) aid_size_touch_calib_3

0xb015,	// (0x0006de35) aid_size_touch_calib_4_ParamLimits

0xb015,	// (0x0006de35) aid_size_touch_calib_4

0xb023,	// (0x0006de43) main_touch_calib_button_group_pane_ParamLimits

0xb023,	// (0x0006de43) main_touch_calib_button_group_pane

0xb031,	// (0x0006de51) main_touch_calib_pane_g1_ParamLimits

0xb03d,	// (0x0006de5d) main_touch_calib_pane_g2_ParamLimits

0xb049,	// (0x0006de69) main_touch_calib_pane_g3_ParamLimits

0xb055,	// (0x0006de75) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000725a4) main_touch_calib_pane_g_ParamLimits

0xb061,	// (0x0006de81) main_touch_calib_pane_t1_ParamLimits

0xb078,	// (0x0006de98) main_touch_calib_pane_t2_ParamLimits

0xb08f,	// (0x0006deaf) main_touch_calib_pane_t3_ParamLimits

0xb0a3,	// (0x0006dec3) main_touch_calib_pane_t4_ParamLimits

0xb0b9,	// (0x0006ded9) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000725ad) main_touch_calib_pane_t_ParamLimits

0x55b6,	// (0x000683d6) list_single_fp_cale_pane_g3_ParamLimits

0x55b6,	// (0x000683d6) list_single_fp_cale_pane_g3

0x000b,	// (0x00062e2b) bg_button_pane_cp012_ParamLimits

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp03_ParamLimits

0xcefa,	// (0x0006fd1a) cell_vitu2_function_top_pane_g1_ParamLimits

0x000b,	// (0x00062e2b) bg_vkb2_func_pane_cp04_ParamLimits

0xdb47,	// (0x00070967) main_ncimui_button_group_pane_ParamLimits

0xdb47,	// (0x00070967) main_ncimui_button_group_pane

0xdb86,	// (0x000709a6) main_ncimui_pane_t3_ParamLimits

0xdb86,	// (0x000709a6) main_ncimui_pane_t3

0x33d9,	// (0x000661f9) phacti_button_group_pane

0x36bc,	// (0x000664dc) aid_size_list_single_double_ParamLimits

0xe599,	// (0x000713b9) popup_ezdial_listscroll_window_ParamLimits

0xe5b9,	// (0x000713d9) popup_number_entry_window_cp01_ParamLimits

0xe651,	// (0x00071471) phacti_button_pane_ParamLimits

0xe651,	// (0x00071471) phacti_button_pane

0x75d2,	// (0x0006a3f2) bg_button_pane_cp14

0x3791,	// (0x000665b1) phacti_button_pane_t1

0xe662,	// (0x00071482) main_touch_calib_button_pane_ParamLimits

0xe662,	// (0x00071482) main_touch_calib_button_pane

0x077e,	// (0x0006359e) bg_button_pane_cp18_ParamLimits

0x077e,	// (0x0006359e) bg_button_pane_cp18

0x379f,	// (0x000665bf) main_touch_calib_button_pane_t1_ParamLimits

0x379f,	// (0x000665bf) main_touch_calib_button_pane_t1

0x37b5,	// (0x000665d5) main_touch_calib_button_pane_t2_ParamLimits

0x37b5,	// (0x000665d5) main_touch_calib_button_pane_t2

0x0001,

0xfe5d,	// (0x00072c7d) main_touch_calib_button_pane_t_ParamLimits

0xfe5d,	// (0x00072c7d) main_touch_calib_button_pane_t

0x75d2,	// (0x0006a3f2) cell_ncimui_button_pane

0x75d2,	// (0x0006a3f2) bg_button_pane_cp032

0x37d3,	// (0x000665f3) cell_ncimui_button_pane_t1

0xc1c9,	// (0x0006efe9) image3_infobar_pane_ParamLimits

0xc1c9,	// (0x0006efe9) image3_infobar_pane

0xded0,	// (0x00070cf0) fs_bigclock_status_pane_ParamLimits

0xded0,	// (0x00070cf0) fs_bigclock_status_pane

0xdedd,	// (0x00070cfd) main_fs_bigclock_clock_pane_ParamLimits

0xdedd,	// (0x00070cfd) main_fs_bigclock_clock_pane

0xdeed,	// (0x00070d0d) main_fs_bigclock_indi_pane_ParamLimits

0xdeed,	// (0x00070d0d) main_fs_bigclock_indi_pane

0xdf1f,	// (0x00070d3f) main_fs_bigclock_swipe_pane_ParamLimits

0xdf1f,	// (0x00070d3f) main_fs_bigclock_swipe_pane

0x75d2,	// (0x0006a3f2) main_fs_clock_dumped_data

0x2c9b,	// (0x00065abb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2c9b,	// (0x00065abb) list_single_fs_bigclock_indicator_pane_g1

0x2cbb,	// (0x00065adb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2cbb,	// (0x00065adb) list_single_fs_bigclock_indicator_pane_g2

0x2cd5,	// (0x00065af5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2cd5,	// (0x00065af5) list_single_fs_bigclock_indicator_pane_g3

0x2cf1,	// (0x00065b11) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2cf1,	// (0x00065b11) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc90,	// (0x00072ab0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc90,	// (0x00072ab0) list_single_fs_bigclock_indicator_pane_g

0x2d17,	// (0x00065b37) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2d17,	// (0x00065b37) list_single_fs_bigclock_indicator_pane_t1

0x2d3f,	// (0x00065b5f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2d3f,	// (0x00065b5f) list_single_fs_bigclock_indicator_pane_t2

0x2d67,	// (0x00065b87) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2d67,	// (0x00065b87) list_single_fs_bigclock_indicator_pane_t3

0x2d91,	// (0x00065bb1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2d91,	// (0x00065bb1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc9b,	// (0x00072abb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc9b,	// (0x00072abb) list_single_fs_bigclock_indicator_pane_t

0x37e1,	// (0x00066601) image3_infobar_fav_pane_ParamLimits

0x37e1,	// (0x00066601) image3_infobar_fav_pane

0x37f1,	// (0x00066611) image3_infobar_loc_pane_ParamLimits

0x37f1,	// (0x00066611) image3_infobar_loc_pane

0x3807,	// (0x00066627) image3_infobar_time_pane_ParamLimits

0x3807,	// (0x00066627) image3_infobar_time_pane

0x5280,	// (0x000680a0) image3_infobar_time_pane_g1

0x3817,	// (0x00066637) image3_infobar_time_pane_t1

0x5280,	// (0x000680a0) image3_infobar_loc_pane_g1

0x3825,	// (0x00066645) image3_infobar_loc_pane_g2

0x0001,

0xfe62,	// (0x00072c82) image3_infobar_loc_pane_g

0x382d,	// (0x0006664d) image3_infobar_loc_pane_t1

0x5280,	// (0x000680a0) image3_infobar_fav_pane_g1

0x383b,	// (0x0006665b) image3_infobar_fav_pane_g2

0x0001,

0xfe67,	// (0x00072c87) image3_infobar_fav_pane_g

0x3843,	// (0x00066663) fs_bigclock_status_battery_pane

0x384c,	// (0x0006666c) fs_bigclock_status_signal_pane

0x3855,	// (0x00066675) fs_bigclock_status_title_pane

0x385e,	// (0x0006667e) fs_bigclock_status_signal_pane_g1

0x3867,	// (0x00066687) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6c,	// (0x00072c8c) fs_bigclock_status_signal_pane_g

0x386f,	// (0x0006668f) fs_bigclock_status_battery_pane_g1

0x3878,	// (0x00066698) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe71,	// (0x00072c91) fs_bigclock_status_battery_pane_g

0x3880,	// (0x000666a0) fs_bigclock_status_title_pane_t1

0x5280,	// (0x000680a0) main_fs_bigclock_clock_pane_g1

0x388e,	// (0x000666ae) main_fs_bigclock_clock_pane_g2

0x388e,	// (0x000666ae) main_fs_bigclock_clock_pane_g3

0x388e,	// (0x000666ae) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe76,	// (0x00072c96) main_fs_bigclock_clock_pane_g

0x389a,	// (0x000666ba) main_fs_bigclock_clock_pane_t1

0x38a8,	// (0x000666c8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7f,	// (0x00072c9f) main_fs_bigclock_clock_pane_t

0x38b7,	// (0x000666d7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x38b7,	// (0x000666d7) list_single_fs_bigclock_indicator_pane

0xe674,	// (0x00071494) list_single_fs_bigclock_pane_ParamLimits

0xe674,	// (0x00071494) list_single_fs_bigclock_pane

0x38d1,	// (0x000666f1) main_fs_bigclock_indicator_pane_t1

0x38e0,	// (0x00066700) list_single_fs_bigclock_pane_g1

0x38e8,	// (0x00066708) list_single_fs_bigclock_pane_t1

0x5280,	// (0x000680a0) main_fs_bigclock_swipe_pane_g1

0x3926,	// (0x00066746) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe90,	// (0x00072cb0) main_fs_bigclock_swipe_pane_g

0x392e,	// (0x0006674e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x392e,	// (0x0006674e) main_fs_bigclock_swipe_pane_t1

0x94de,	// (0x0006c2fe) call_type_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_btmg_pane

0x7378,	// (0x0006a198) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7378,	// (0x0006a198) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe03,	// (0x00072c23) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe03,	// (0x00072c23) list_single_cale_mrui_row_pane_g

0x36f6,	// (0x00066516) list_recal_vselct_arw_lo_pane

0x36fe,	// (0x0006651e) list_recal_vselct_arw_up_pane

0x22fb,	// (0x0006511b) list_recal_vselct_pane

0x394b,	// (0x0006676b) btmg_button_pane

0xe6d7,	// (0x000714f7) main_btmg_pane_g1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp044

0x3955,	// (0x00066775) btmg_button_pane_t1

0x4dfd,	// (0x00067c1d) aid_listscroll_gen

0x000b,	// (0x00062e2b) main_cntbar_detail_pane

0x32c8,	// (0x000660e8) list_cmail_folder_pane

0x32d8,	// (0x000660f8) sp_fs_scroll_pane_cp03_ParamLimits

0xe6df,	// (0x000714ff) list_single_fs_dyc_pane_cp01_ParamLimits

0xe6df,	// (0x000714ff) list_single_fs_dyc_pane_cp01

0x3963,	// (0x00066783) aid_size_cmail_indent

0x7498,	// (0x0006a2b8) list_single_dyc_row_pane_cp01

0xe716,	// (0x00071536) cntbar_detail_list_pane_ParamLimits

0xe716,	// (0x00071536) cntbar_detail_list_pane

0xe756,	// (0x00071576) main_cntbar_detail_cont_pane_ParamLimits

0xe756,	// (0x00071576) main_cntbar_detail_cont_pane

0x94d2,	// (0x0006c2f2) scroll_pane_cp032_ParamLimits

0x94d2,	// (0x0006c2f2) scroll_pane_cp032

0xe762,	// (0x00071582) cntbar_detail_list_event_pane_ParamLimits

0xe762,	// (0x00071582) cntbar_detail_list_event_pane

0xe724,	// (0x00071544) cntbar_detail_list_shct_pane

0x0cbe,	// (0x00063ade) aid_list_gen

0x3975,	// (0x00066795) aid_scroll

0x397e,	// (0x0006679e) aid_size_touch_scroll_bar

0x3987,	// (0x000667a7) aid_list_double

0x3990,	// (0x000667b0) aid_list_single

0xe772,	// (0x00071592) aid_list_single_lg

0x74a1,	// (0x0006a2c1) aid_list_z_g_a_sm

0xe77b,	// (0x0007159b) aid_list_z_g_d

0x74a9,	// (0x0006a2c9) aid_txt_z_prm

0x74b7,	// (0x0006a2d7) aid_txt_z_prm_cp01

0x74c5,	// (0x0006a2e5) aid_txt_z_sec

0xe783,	// (0x000715a3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe783,	// (0x000715a3) main_cntbar_detail_cont_pane_g1

0xe790,	// (0x000715b0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe790,	// (0x000715b0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe95,	// (0x00072cb5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe95,	// (0x00072cb5) main_cntbar_detail_cont_pane_g

0x39b7,	// (0x000667d7) main_cntbar_detail_cont_pane_t1

0x39c5,	// (0x000667e5) main_cntbar_detail_cont_pane_t2

0x39d3,	// (0x000667f3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9a,	// (0x00072cba) main_cntbar_detail_cont_pane_t

0xe79c,	// (0x000715bc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe79c,	// (0x000715bc) cell_cntbar_detail_list_shct_pane

0x39e1,	// (0x00066801) cntbar_detail_list_shct_pane_g1

0x39ea,	// (0x0006680a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea1,	// (0x00072cc1) cntbar_detail_list_shct_pane_g

0xe7b0,	// (0x000715d0) cntbar_detail_list_event_pane_g1_ParamLimits

0xe7b0,	// (0x000715d0) cntbar_detail_list_event_pane_g1

0xe7bc,	// (0x000715dc) cntbar_detail_list_event_pane_g2_ParamLimits

0xe7bc,	// (0x000715dc) cntbar_detail_list_event_pane_g2

0x0005,

0xfea6,	// (0x00072cc6) cntbar_detail_list_event_pane_g_ParamLimits

0xfea6,	// (0x00072cc6) cntbar_detail_list_event_pane_g

0xe82a,	// (0x0007164a) cntbar_detail_list_event_pane_t1_ParamLimits

0xe82a,	// (0x0007164a) cntbar_detail_list_event_pane_t1

0xe83f,	// (0x0007165f) cntbar_detail_list_event_pane_t2_ParamLimits

0xe83f,	// (0x0007165f) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb3,	// (0x00072cd3) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb3,	// (0x00072cd3) cntbar_detail_list_event_pane_t

0x5280,	// (0x000680a0) cell_cntbar_detail_list_shct_pane_g1

0x9876,	// (0x0006c696) navi_pane_mv_g3

0x000b,	// (0x00062e2b) main_cntbar_detail_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_notif_wgt_pane

0xbe9d,	// (0x0006ecbd) aid_tch_main_mp4_pane_g4

0xc0b2,	// (0x0006eed2) popup_slider_window_cp02

0x36ed,	// (0x0006650d) list_recal_day_event_pane

0xe6f6,	// (0x00071516) cntbar_detail_btn_pane_ParamLimits

0xe6f6,	// (0x00071516) cntbar_detail_btn_pane

0xe706,	// (0x00071526) cntbar_detail_btn_pane_cp01_ParamLimits

0xe706,	// (0x00071526) cntbar_detail_btn_pane_cp01

0xe724,	// (0x00071544) cntbar_detail_list_shct_pane_ParamLimits

0xe730,	// (0x00071550) cntbar_detail_pane_g1_ParamLimits

0xe730,	// (0x00071550) cntbar_detail_pane_g1

0xe740,	// (0x00071560) cntbar_detail_pane_t1_ParamLimits

0xe740,	// (0x00071560) cntbar_detail_pane_t1

0xe7c8,	// (0x000715e8) cntbar_detail_list_event_pane_g3_ParamLimits

0xe7c8,	// (0x000715e8) cntbar_detail_list_event_pane_g3

0xe7e0,	// (0x00071600) cntbar_detail_list_event_pane_g4_ParamLimits

0xe7e0,	// (0x00071600) cntbar_detail_list_event_pane_g4

0xe7f8,	// (0x00071618) cntbar_detail_list_event_pane_g5_ParamLimits

0xe7f8,	// (0x00071618) cntbar_detail_list_event_pane_g5

0xe810,	// (0x00071630) cntbar_detail_list_event_pane_g6_ParamLimits

0xe810,	// (0x00071630) cntbar_detail_list_event_pane_g6

0xe854,	// (0x00071674) cntbar_detail_list_event_pane_t3_ParamLimits

0xe854,	// (0x00071674) cntbar_detail_list_event_pane_t3

0xe866,	// (0x00071686) popup_notif_wgt_window_ParamLimits

0xe866,	// (0x00071686) popup_notif_wgt_window

0xe876,	// (0x00071696) popup_submenu_window_cp01_ParamLimits

0xe876,	// (0x00071696) popup_submenu_window_cp01

0x1355,	// (0x00064175) bg_popup_window_pane_cp10

0x39f3,	// (0x00066813) listscroll_notif_wgt_pane

0x39fd,	// (0x0006681d) list_notif_wgt_window

0x3a06,	// (0x00066826) scroll_pane_cp033

0x3a0f,	// (0x0006682f) list_notif_wgt_row_pane_ParamLimits

0x3a0f,	// (0x0006682f) list_notif_wgt_row_pane

0x3a23,	// (0x00066843) aid_size_list_notif_wgt_del

0x3a2c,	// (0x0006684c) list_notif_wgt_row_pane_g1

0x3a34,	// (0x00066854) list_notif_wgt_row_pane_g2

0x3a3c,	// (0x0006685c) list_notif_wgt_row_pane_g3

0x0002,

0xfeba,	// (0x00072cda) list_notif_wgt_row_pane_g

0x3a45,	// (0x00066865) list_notif_wgt_row_pane_t1

0x3a53,	// (0x00066873) list_notif_wgt_row_pane_t2

0x3a61,	// (0x00066881) list_notif_wgt_row_pane_t3

0x0002,

0xfec1,	// (0x00072ce1) list_notif_wgt_row_pane_t

0x1fd7,	// (0x00064df7) list_recal_day_event_pane_g1

0x3a6f,	// (0x0006688f) list_recal_day_event_pane_t1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp045

0x3a7e,	// (0x0006689e) cntbar_detail_btn_pane_t1

0x4e05,	// (0x00067c25) main_callh_pane_ParamLimits

0x4e05,	// (0x00067c25) main_callh_pane

0x75d2,	// (0x0006a3f2) main_coverflow0_pane

0x75d2,	// (0x0006a3f2) main_wgtman_pane

0xdf37,	// (0x00070d57) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdf37,	// (0x00070d57) main_fs_bigclock_unlock_btn_pane

0x32aa,	// (0x000660ca) bg_button_pane_cp16

0xe285,	// (0x000710a5) cell_tport_appsw_pane_g3

0xe884,	// (0x000716a4) cf0_flow_pane_ParamLimits

0xe884,	// (0x000716a4) cf0_flow_pane

0x3a8c,	// (0x000668ac) listscroll_cf0_pane

0x3a95,	// (0x000668b5) main_cf0_pane_g1

0xe893,	// (0x000716b3) main_cf0_pane_t1_ParamLimits

0xe893,	// (0x000716b3) main_cf0_pane_t1

0xe8a7,	// (0x000716c7) main_cf0_pane_t2_ParamLimits

0xe8a7,	// (0x000716c7) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x00072ce8) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x00072ce8) main_cf0_pane_t

0x3a9f,	// (0x000668bf) scroll_pane_cp11

0xe8bb,	// (0x000716db) cf0_flow_pane_g1

0xe8c3,	// (0x000716e3) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x00072ced) cf0_flow_pane_g

0xe8cb,	// (0x000716eb) cf0_flow_pane_t1

0x75d2,	// (0x0006a3f2) main_call6_pane

0x75d2,	// (0x0006a3f2) main_calllock_pane

0xe8d9,	// (0x000716f9) call6_btn_grp_pane_ParamLimits

0xe8d9,	// (0x000716f9) call6_btn_grp_pane

0xe8e8,	// (0x00071708) call6_pane_g1_ParamLimits

0xe8e8,	// (0x00071708) call6_pane_g1

0xe8f8,	// (0x00071718) popup_call6_1st_window_ParamLimits

0xe8f8,	// (0x00071718) popup_call6_1st_window

0xe906,	// (0x00071726) popup_call6_2nd_window_ParamLimits

0xe906,	// (0x00071726) popup_call6_2nd_window

0xe914,	// (0x00071734) cell_call6_btn_pane_ParamLimits

0xe914,	// (0x00071734) cell_call6_btn_pane

0x1355,	// (0x00064175) bg_popup_call2_in_pane_cp03

0x3aaa,	// (0x000668ca) popup_call6_1st_window_g1

0x3ab2,	// (0x000668d2) popup_call6_1st_window_g2

0x3aba,	// (0x000668da) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x00072cf2) popup_call6_1st_window_g

0x3ac2,	// (0x000668e2) popup_call6_1st_window_t1

0x3ad1,	// (0x000668f1) popup_call6_1st_window_t2

0x3ae1,	// (0x00066901) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x00072cf9) popup_call6_1st_window_t

0x1355,	// (0x00064175) bg_popup_call2_in_pane_cp04

0x3aaa,	// (0x000668ca) popup_call6_2nd_window_g1

0x3ab2,	// (0x000668d2) popup_call6_2nd_window_g2

0x3aba,	// (0x000668da) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x00072cf2) popup_call6_2nd_window_g

0x3ac2,	// (0x000668e2) popup_call6_2nd_window_t1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp15

0x3af1,	// (0x00066911) cell_call6_btn_pane_g1

0x3afa,	// (0x0006691a) cell_call6_btn_pane_t1

0xe923,	// (0x00071743) listscroll_wgtman_pane_ParamLimits

0xe923,	// (0x00071743) listscroll_wgtman_pane

0xe941,	// (0x00071761) wgtman_btn_pane_ParamLimits

0xe941,	// (0x00071761) wgtman_btn_pane

0x121b,	// (0x0006403b) aid_scroll_copy1

0x3b09,	// (0x00066929) list_wgtman_pane

0xe976,	// (0x00071796) wgtman_btn_pane_g1_ParamLimits

0xe976,	// (0x00071796) wgtman_btn_pane_g1

0xe99e,	// (0x000717be) wgtman_btn_pane_t1_ParamLimits

0xe99e,	// (0x000717be) wgtman_btn_pane_t1

0x3b13,	// (0x00066933) wgtman_btn_pane_t2_ParamLimits

0x3b13,	// (0x00066933) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x00072d00) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x00072d00) wgtman_btn_pane_t

0x3b2a,	// (0x0006694a) listrow_wgtman_pane_ParamLimits

0x3b2a,	// (0x0006694a) listrow_wgtman_pane

0x3b3e,	// (0x0006695e) listrow_wgtman_pane_g1

0xe9d5,	// (0x000717f5) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x00072d05) listrow_wgtman_pane_g

0x74d3,	// (0x0006a2f3) listrow_wgtman_pane_t1

0x74e1,	// (0x0006a301) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x00072d0a) listrow_wgtman_pane_t

0x74ef,	// (0x0006a30f) wait_bar_pane_cp09

0x3b6b,	// (0x0006698b) main_calllock_btn_pane

0x3b75,	// (0x00066995) main_calllock_pane_g1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp17

0x3b81,	// (0x000669a1) main_calllock_btn_pane_g1

0x3b8a,	// (0x000669aa) main_calllock_btn_pane_t1

0x75d2,	// (0x0006a3f2) main_dialer3_pane

0x75d2,	// (0x0006a3f2) main_fmrd2_pane

0x5280,	// (0x000680a0) main_fs_bigclock_unlock_btn_pane_g1

0x3ba1,	// (0x000669c1) main_fs_bigclock_unlock_btn_pane_t1

0xe9df,	// (0x000717ff) area_fmrd2_info_pane_ParamLimits

0xe9df,	// (0x000717ff) area_fmrd2_info_pane

0xe9ed,	// (0x0007180d) area_fmrd2_visual_pane_ParamLimits

0xe9ed,	// (0x0007180d) area_fmrd2_visual_pane

0xe9fb,	// (0x0007181b) fmrd2_indi_pane_ParamLimits

0xe9fb,	// (0x0007181b) fmrd2_indi_pane

0xea08,	// (0x00071828) area_fmrd2_visual_pane_g1

0xea10,	// (0x00071830) area_fmrd2_visual_pane_t1

0xea20,	// (0x00071840) area_fmrd2_visual_pane_t2

0xea30,	// (0x00071850) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x00072d14) area_fmrd2_visual_pane_t

0xea40,	// (0x00071860) area_fmrd2_info_pane_g1

0xea48,	// (0x00071868) area_fmrd2_info_pane_t1

0xea58,	// (0x00071878) area_fmrd2_info_pane_t2

0xea68,	// (0x00071888) area_fmrd2_info_pane_t3

0xea78,	// (0x00071898) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x00072d1b) area_fmrd2_info_pane_t

0xea88,	// (0x000718a8) fmrd2_indi_pane_t1

0xea98,	// (0x000718b8) fmrd2_indi_pane_t2

0xeaa8,	// (0x000718c8) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x00072d24) fmrd2_indi_pane_t

0x2d00,	// (0x00065b20) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2d00,	// (0x00065b20) list_single_fs_bigclock_indicator_pane_g5

0x2da6,	// (0x00065bc6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2da6,	// (0x00065bc6) list_single_fs_bigclock_indicator_pane_t5

0xe3f0,	// (0x00071210) aid_cell_bcale_month_pane_ParamLimits

0xe3f0,	// (0x00071210) aid_cell_bcale_month_pane

0xe3fc,	// (0x0007121c) bcale_month_pane_ParamLimits

0xe3fc,	// (0x0007121c) bcale_month_pane

0xe40a,	// (0x0007122a) bcale_preview_pane_ParamLimits

0xe40a,	// (0x0007122a) bcale_preview_pane

0x38e8,	// (0x00066708) list_single_fs_bigclock_pane_t1_ParamLimits

0x3902,	// (0x00066722) list_single_fs_bigclock_pane_t2_ParamLimits

0x3902,	// (0x00066722) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8b,	// (0x00072cab) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00072cab) list_single_fs_bigclock_pane_t

0x3b99,	// (0x000669b9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x00072d0f) main_fs_bigclock_unlock_btn_pane_g

0xeab8,	// (0x000718d8) aid_dia3_key_size_ParamLimits

0xeab8,	// (0x000718d8) aid_dia3_key_size

0xeac4,	// (0x000718e4) aid_dia3_listrow_size_ParamLimits

0xeac4,	// (0x000718e4) aid_dia3_listrow_size

0xead2,	// (0x000718f2) dia3_keypad_fun_pane_ParamLimits

0xead2,	// (0x000718f2) dia3_keypad_fun_pane

0xeae2,	// (0x00071902) dia3_keypad_num_pane_ParamLimits

0xeae2,	// (0x00071902) dia3_keypad_num_pane

0xeaf2,	// (0x00071912) dia3_listscroll_pane_ParamLimits

0xeaf2,	// (0x00071912) dia3_listscroll_pane

0xeb02,	// (0x00071922) dia3_numentry_pane_ParamLimits

0xeb02,	// (0x00071922) dia3_numentry_pane

0x3baf,	// (0x000669cf) dia3_list_pane

0x3bba,	// (0x000669da) scroll_pane_cp12

0x75d2,	// (0x0006a3f2) bg_dia3_numentry_pane

0x3bc5,	// (0x000669e5) dia3_numentry_pane_t1

0xeb12,	// (0x00071932) cell_dia3_key_num_pane

0xeb1a,	// (0x0007193a) cell_dia3_key0_fun_pane_ParamLimits

0xeb1a,	// (0x0007193a) cell_dia3_key0_fun_pane

0xeb27,	// (0x00071947) cell_dia3_key1_fun_pane_ParamLimits

0xeb27,	// (0x00071947) cell_dia3_key1_fun_pane

0xeb34,	// (0x00071954) dia3_listrow_pane

0x2a18,	// (0x00065838) bg_dia3_numentry_pane_g1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp21

0x3bd4,	// (0x000669f4) cell_dia3_key_num_pane_t1

0x3be2,	// (0x00066a02) cell_dia3_key_num_pane_t2

0x3bf1,	// (0x00066a11) cell_dia3_key_num_pane_t3

0x3c00,	// (0x00066a20) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x00072d2b) cell_dia3_key_num_pane_t

0x75d2,	// (0x0006a3f2) bg_button_pane_cp19

0xeb41,	// (0x00071961) cell_dia3_key0_fun_pane_g1

0x75d2,	// (0x0006a3f2) bg_button_pane_cp20

0xeb49,	// (0x00071969) cell_dia3_key1_fun_pane_g1

0xeb51,	// (0x00071971) area_left_week_number_pane

0xeb5a,	// (0x0007197a) area_top_day_name_pane

0xeb63,	// (0x00071983) frame_month_view_pane

0xeb6d,	// (0x0007198d) grid_month_view_pane

0xeb77,	// (0x00071997) cell_top_day_name_pane_ParamLimits

0xeb77,	// (0x00071997) cell_top_day_name_pane

0xeb93,	// (0x000719b3) cell_area_left_week_number_pane_ParamLimits

0xeb93,	// (0x000719b3) cell_area_left_week_number_pane

0xeba7,	// (0x000719c7) cell_month_view_pane_ParamLimits

0xeba7,	// (0x000719c7) cell_month_view_pane

0x3c0f,	// (0x00066a2f) frm_month_g1

0xebc6,	// (0x000719e6) frm_month_g2

0xebd0,	// (0x000719f0) frm_month_g3

0xebda,	// (0x000719fa) frm_month_g4

0xebe4,	// (0x00071a04) frm_month_g5

0xebee,	// (0x00071a0e) frm_month_g6

0xebf8,	// (0x00071a18) frm_month_g7

0x3c18,	// (0x00066a38) frm_month_g8

0xec02,	// (0x00071a22) frm_month_g9

0xec0b,	// (0x00071a2b) frm_month_g10

0xec14,	// (0x00071a34) frm_month_g11

0xec1d,	// (0x00071a3d) frm_month_g12

0xec26,	// (0x00071a46) frm_month_g13

0xec31,	// (0x00071a51) frm_month_g14

0xec3c,	// (0x00071a5c) frm_month_g15

0xec47,	// (0x00071a67) frm_month_g16

0x000f,

0xff14,	// (0x00072d34) frm_month_g

0xec52,	// (0x00071a72) cell_top_day_name_pane_t1

0xec61,	// (0x00071a81) cell_area_left_week_number_pane_g1

0xec52,	// (0x00071a72) cell_area_left_week_number_pane_t1

0x5280,	// (0x000680a0) cell_month_view_pane_g1

0xec69,	// (0x00071a89) cell_month_view_pane_t1

0x75d2,	// (0x0006a3f2) main_fps_pane

0x2ff5,	// (0x00065e15) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2ff5,	// (0x00065e15) cmail_ddmenu_btn02_pane_cp1

0x3011,	// (0x00065e31) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3011,	// (0x00065e31) cmail_ddmenu_btn02_pane_cp2

0xe5e3,	// (0x00071403) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe5e3,	// (0x00071403) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00072c5c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00072c5c) cmail_ddmenu_btn02_pane_g

0xe601,	// (0x00071421) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe601,	// (0x00071421) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00072c61) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00072c61) cmail_ddmenu_btn02_pane_t

0xec78,	// (0x00071a98) fps_text_pane_ParamLimits

0xec78,	// (0x00071a98) fps_text_pane

0xec85,	// (0x00071aa5) main_fps_pane_g1_ParamLimits

0xec85,	// (0x00071aa5) main_fps_pane_g1

0xec91,	// (0x00071ab1) wait_bar_pane_cp010_ParamLimits

0xec91,	// (0x00071ab1) wait_bar_pane_cp010

0xec9d,	// (0x00071abd) fps_text_pane_t1_ParamLimits

0xec9d,	// (0x00071abd) fps_text_pane_t1

0xc48c,	// (0x0006f2ac) cam4_image_uncrop_pane_g1

0xc495,	// (0x0006f2b5) cam4_image_uncrop_pane_g2

0xc49e,	// (0x0006f2be) cam4_image_uncrop_pane_g3

0xc4a7,	// (0x0006f2c7) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0007273c) cam4_image_uncrop_pane_g

0xeb34,	// (0x00071954) dia3_listrow_pane_ParamLimits

0x75d2,	// (0x0006a3f2) main_phob2_pane

0xe25f,	// (0x0007107f) cell_tport_appsw_pane_cp02_ParamLimits

0xe25f,	// (0x0007107f) cell_tport_appsw_pane_cp02

0xe26e,	// (0x0007108e) cell_tport_appsw_pane_cp03_ParamLimits

0xe26e,	// (0x0007108e) cell_tport_appsw_pane_cp03

0x75d2,	// (0x0006a3f2) phob2_contact_card_pane

0x75d2,	// (0x0006a3f2) phob2_listscroll_pane

0x3c21,	// (0x00066a41) phob2_list_pane

0x3c29,	// (0x00066a49) scroll_pane_cp034

0xecb6,	// (0x00071ad6) phob2_cc_data_pane_ParamLimits

0xecb6,	// (0x00071ad6) phob2_cc_data_pane

0xecd2,	// (0x00071af2) phob2_cc_listscroll_pane_ParamLimits

0xecd2,	// (0x00071af2) phob2_cc_listscroll_pane

0xecee,	// (0x00071b0e) list_double_large_graphic_phob2_pane_ParamLimits

0xecee,	// (0x00071b0e) list_double_large_graphic_phob2_pane

0xed08,	// (0x00071b28) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xed08,	// (0x00071b28) list_double_large_graphic_phob2_pane_g1

0x74f7,	// (0x0006a317) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x74f7,	// (0x0006a317) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x00072d55) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x00072d55) list_double_large_graphic_phob2_pane_g

0x7503,	// (0x0006a323) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7503,	// (0x0006a323) list_double_large_graphic_phob2_pane_t1

0x7518,	// (0x0006a338) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7518,	// (0x0006a338) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x00072d5a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x00072d5a) list_double_large_graphic_phob2_pane_t

0x75d2,	// (0x0006a3f2) list_highlight_pane_cp024

0x3c31,	// (0x00066a51) phob2_cc_button_pane

0xed15,	// (0x00071b35) phob2_cc_data_pane_g1_ParamLimits

0xed15,	// (0x00071b35) phob2_cc_data_pane_g1

0xed21,	// (0x00071b41) phob2_cc_data_pane_g2_ParamLimits

0xed21,	// (0x00071b41) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x00072d5f) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x00072d5f) phob2_cc_data_pane_g

0xed2d,	// (0x00071b4d) phob2_cc_data_pane_t1_ParamLimits

0xed2d,	// (0x00071b4d) phob2_cc_data_pane_t1

0xed3f,	// (0x00071b5f) phob2_cc_data_pane_t2_ParamLimits

0xed3f,	// (0x00071b5f) phob2_cc_data_pane_t2

0xed51,	// (0x00071b71) phob2_cc_data_pane_t3_ParamLimits

0xed51,	// (0x00071b71) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x00072d64) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x00072d64) phob2_cc_data_pane_t

0x3c39,	// (0x00066a59) phob2_cc_list_pane_ParamLimits

0x3c39,	// (0x00066a59) phob2_cc_list_pane

0x2070,	// (0x00064e90) scroll_pane_cp035_ParamLimits

0x2070,	// (0x00064e90) scroll_pane_cp035

0x000b,	// (0x00062e2b) bg_button_pane_cp033

0x3c45,	// (0x00066a65) phob2_cc_button_pane_g1

0x3c51,	// (0x00066a71) phob2_cc_button_pane_t1

0x3c66,	// (0x00066a86) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x00072d6b) phob2_cc_button_pane_t

0xed63,	// (0x00071b83) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xed63,	// (0x00071b83) list_double_large_graphic_phob2_cc_pane

0xed82,	// (0x00071ba2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xed82,	// (0x00071ba2) list_double_large_graphic_phob2_cc_pane_g1

0x752a,	// (0x0006a34a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x752a,	// (0x0006a34a) list_double_large_graphic_phob2_cc_pane_g2

0x7539,	// (0x0006a359) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7539,	// (0x0006a359) list_double_large_graphic_phob2_cc_pane_g3

0x7548,	// (0x0006a368) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7548,	// (0x0006a368) list_double_large_graphic_phob2_cc_pane_g4

0x7559,	// (0x0006a379) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7559,	// (0x0006a379) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x00072d70) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x00072d70) list_double_large_graphic_phob2_cc_pane_g

0x7568,	// (0x0006a388) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7568,	// (0x0006a388) list_double_large_graphic_phob2_cc_pane_t1

0x7591,	// (0x0006a3b1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7591,	// (0x0006a3b1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x00072d7b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x00072d7b) list_double_large_graphic_phob2_cc_pane_t

0x3c78,	// (0x00066a98) list_highlight_pane_cp025_ParamLimits

0x3c78,	// (0x00066a98) list_highlight_pane_cp025

0x000b,	// (0x00062e2b) bg_button_pane_cp033_ParamLimits

0x3c45,	// (0x00066a65) phob2_cc_button_pane_g1_ParamLimits

0x3c51,	// (0x00066a71) phob2_cc_button_pane_t1_ParamLimits

0x3c66,	// (0x00066a86) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x00072d6b) phob2_cc_button_pane_t_ParamLimits

0x7887,	// (0x0006a6a7) popup_wgtman_window

0x1e72,	// (0x00064c92) scroll_pane_cp038

0xe95e,	// (0x0007177e) wgtman_btn_pane_cp_01_ParamLimits

0xe95e,	// (0x0007177e) wgtman_btn_pane_cp_01

0x3c86,	// (0x00066aa6) wgtman_content_pane

0x3c8f,	// (0x00066aaf) wgtman_heading_pane

0x75d2,	// (0x0006a3f2) bg_heading_pane_cp02

0x3c98,	// (0x00066ab8) wgtman_heading_pane_g1

0x3ca0,	// (0x00066ac0) wgtman_heading_pane_t1

0x3cae,	// (0x00066ace) scroll_pane_cp036

0x3cb6,	// (0x00066ad6) wgtman_list_pane

0x2e88,	// (0x00065ca8) wgtman_list_pane_t1_ParamLimits

0x2e88,	// (0x00065ca8) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
