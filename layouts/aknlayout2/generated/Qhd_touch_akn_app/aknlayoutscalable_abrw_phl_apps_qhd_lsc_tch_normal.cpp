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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002dd26 };

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
0x1886,	// (0x0002f5ac) Screen

0x1892,	// (0x0002f5b8) application_window

0x18c2,	// (0x0002f5e8) area_bottom_pane_ParamLimits

0x18c2,	// (0x0002f5e8) area_bottom_pane

0x016f,	// (0x0002de95) area_top_pane_ParamLimits

0x016f,	// (0x0002de95) area_top_pane

0x191f,	// (0x0002f645) call_video_uplink_pane_ParamLimits

0x191f,	// (0x0002f645) call_video_uplink_pane

0x01fd,	// (0x0002df23) main_pane_ParamLimits

0x01fd,	// (0x0002df23) main_pane

0xc3ef,	// (0x0003a115) context_pane

0x4a7e,	// (0x000327a4) navi_pane

0x4ab0,	// (0x000327d6) popup_cale_events_window_ParamLimits

0x4ab0,	// (0x000327d6) popup_cale_events_window

0xc402,	// (0x0003a128) popup_mup_playback_window

0x4ac8,	// (0x000327ee) signal_pane

0xa289,	// (0x00037faf) main_browser_pane

0xa44e,	// (0x00038174) main_burst_pane

0x05fd,	// (0x0002e323) main_calc_pane

0xc3d5,	// (0x0003a0fb) main_cale_day_pane

0x0611,	// (0x0002e337) main_cale_month_pane

0xc3d5,	// (0x0003a0fb) main_cale_week_pane

0xa44e,	// (0x00038174) main_call_pane

0x9f69,	// (0x00037c8f) main_call_poc_pane

0xa44e,	// (0x00038174) main_camera_pane

0xa44e,	// (0x00038174) main_chi_dic_pane

0xacdf,	// (0x00038a05) main_clock_pane

0x9f69,	// (0x00037c8f) main_fmradio_pane

0xa44e,	// (0x00038174) main_graph_messa_pane

0x9f69,	// (0x00037c8f) main_help_pane

0xa289,	// (0x00037faf) main_im_pane

0xa1c4,	// (0x00037eea) main_image_pane_ParamLimits

0xa1c4,	// (0x00037eea) main_image_pane

0x9f69,	// (0x00037c8f) main_location2_pane

0xa44e,	// (0x00038174) main_location_pane

0xa1c4,	// (0x00037eea) main_messa_pane

0x9f69,	// (0x00037c8f) main_mp2_pane

0xa44e,	// (0x00038174) main_mp_pane

0x9f69,	// (0x00037c8f) main_msg_pane

0x9f69,	// (0x00037c8f) main_mup_eq_pane

0x9f69,	// (0x00037c8f) main_mup_pane

0xa289,	// (0x00037faf) main_notes_pane

0x9f69,	// (0x00037c8f) main_pec_pane

0x9f69,	// (0x00037c8f) main_phob_pane

0x9f69,	// (0x00037c8f) main_pinb_pane

0x9f69,	// (0x00037c8f) main_postcard_pane

0x9f69,	// (0x00037c8f) main_qdial_pane

0xa44e,	// (0x00038174) main_skin_pane

0x9f69,	// (0x00037c8f) main_smil2_pane

0xa44e,	// (0x00038174) main_smil_pane

0xa44e,	// (0x00038174) main_video_pane

0xa44e,	// (0x00038174) main_video_tele_pane

0xa1c4,	// (0x00037eea) main_viewer_pane_ParamLimits

0xa1c4,	// (0x00037eea) main_viewer_pane

0xa44e,	// (0x00038174) main_vorec_pane

0x0663,	// (0x0002e389) popup_blid_sat_info_window_ParamLimits

0x0663,	// (0x0002e389) popup_blid_sat_info_window

0x06bb,	// (0x0002e3e1) popup_dyc_status_message_window_ParamLimits

0x06bb,	// (0x0002e3e1) popup_dyc_status_message_window

0x06d5,	// (0x0002e3fb) popup_grid_large_graphic_window_ParamLimits

0x06d5,	// (0x0002e3fb) popup_grid_large_graphic_window

0x0791,	// (0x0002e4b7) popup_loc_request_window_ParamLimits

0x0791,	// (0x0002e4b7) popup_loc_request_window

0x0887,	// (0x0002e5ad) popup_wml_address_window_ParamLimits

0x0887,	// (0x0002e5ad) popup_wml_address_window

0x486e,	// (0x00032594) call_muted_g1

0x4523,	// (0x00032249) popup_call_audio_conf_window_ParamLimits

0x4523,	// (0x00032249) popup_call_audio_conf_window

0x4882,	// (0x000325a8) popup_call_audio_first_window_ParamLimits

0x4882,	// (0x000325a8) popup_call_audio_first_window

0x48f8,	// (0x0003261e) popup_call_audio_in_window_ParamLimits

0x48f8,	// (0x0003261e) popup_call_audio_in_window

0x4934,	// (0x0003265a) popup_call_audio_out_window_ParamLimits

0x4934,	// (0x0003265a) popup_call_audio_out_window

0x496e,	// (0x00032694) popup_call_audio_second_window_ParamLimits

0x496e,	// (0x00032694) popup_call_audio_second_window

0x49c4,	// (0x000326ea) popup_call_audio_wait_window_ParamLimits

0x49c4,	// (0x000326ea) popup_call_audio_wait_window

0x49f9,	// (0x0003271f) popup_number_entry_window_ParamLimits

0x49f9,	// (0x0003271f) popup_number_entry_window

0x9b56,	// (0x0003787c) bg_popup_call_pane_cp05_ParamLimits

0x9b56,	// (0x0003787c) bg_popup_call_pane_cp05

0x9b76,	// (0x0003789c) popup_number_entry_window_t1

0x9b89,	// (0x000378af) popup_number_entry_window_t2

0x9b9b,	// (0x000378c1) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003cdf0) popup_number_entry_window_t

0x9bad,	// (0x000378d3) text_title_cp2

0x9bc0,	// (0x000378e6) bg_popup_call_pane_cp_ParamLimits

0x9bc0,	// (0x000378e6) bg_popup_call_pane_cp

0x9bce,	// (0x000378f4) call_thumbnail_pane

0x9bd6,	// (0x000378fc) popup_call_audio_in_window_g1_ParamLimits

0x9bd6,	// (0x000378fc) popup_call_audio_in_window_g1

0x9be2,	// (0x00037908) popup_call_audio_in_window_g2_ParamLimits

0x9be2,	// (0x00037908) popup_call_audio_in_window_g2

0x9bee,	// (0x00037914) popup_call_audio_in_window_g3_ParamLimits

0x9bee,	// (0x00037914) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003cdf9) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003cdf9) popup_call_audio_in_window_g

0x9bfa,	// (0x00037920) popup_call_audio_in_window_t1_ParamLimits

0x9bfa,	// (0x00037920) popup_call_audio_in_window_t1

0x9c16,	// (0x0003793c) popup_call_audio_in_window_t2_ParamLimits

0x9c16,	// (0x0003793c) popup_call_audio_in_window_t2

0x9c32,	// (0x00037958) popup_call_audio_in_window_t3_ParamLimits

0x9c32,	// (0x00037958) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003ce00) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003ce00) popup_call_audio_in_window_t

0x9bc0,	// (0x000378e6) bg_popup_call_pane_cp01_ParamLimits

0x9bc0,	// (0x000378e6) bg_popup_call_pane_cp01

0x9bce,	// (0x000378f4) call_thumbnail_pane_cp02

0x9c45,	// (0x0003796b) call_type_pane_cp022

0x9c4d,	// (0x00037973) popup_call_audio_out_window_g1_ParamLimits

0x9c4d,	// (0x00037973) popup_call_audio_out_window_g1

0x9c5f,	// (0x00037985) popup_call_audio_out_window_g2_ParamLimits

0x9c5f,	// (0x00037985) popup_call_audio_out_window_g2

0x9c6b,	// (0x00037991) popup_call_audio_out_window_g3_ParamLimits

0x9c6b,	// (0x00037991) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003ce07) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003ce07) popup_call_audio_out_window_g

0x9c7d,	// (0x000379a3) popup_call_audio_out_window_t1_ParamLimits

0x9c7d,	// (0x000379a3) popup_call_audio_out_window_t1

0x9c95,	// (0x000379bb) popup_call_audio_out_window_t2_ParamLimits

0x9c95,	// (0x000379bb) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003ce0e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003ce0e) popup_call_audio_out_window_t

0x9caa,	// (0x000379d0) bg_popup_call_pane_ParamLimits

0x9caa,	// (0x000379d0) bg_popup_call_pane

0x1995,	// (0x0002f6bb) call_thumbnail_pane_cp_ParamLimits

0x1995,	// (0x0002f6bb) call_thumbnail_pane_cp

0x9d2e,	// (0x00037a54) call_type_pane_cp01_ParamLimits

0x9d2e,	// (0x00037a54) call_type_pane_cp01

0x9d72,	// (0x00037a98) popup_call_audio_first_window_g1_ParamLimits

0x9d72,	// (0x00037a98) popup_call_audio_first_window_g1

0x9dbe,	// (0x00037ae4) popup_call_audio_first_window_g2_ParamLimits

0x9dbe,	// (0x00037ae4) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003ce13) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003ce13) popup_call_audio_first_window_g

0x9e02,	// (0x00037b28) popup_call_audio_first_window_t1_ParamLimits

0x9e02,	// (0x00037b28) popup_call_audio_first_window_t1

0x9eae,	// (0x00037bd4) popup_call_audio_first_window_t4_ParamLimits

0x9eae,	// (0x00037bd4) popup_call_audio_first_window_t4

0x9f3a,	// (0x00037c60) popup_call_audio_first_window_t5_ParamLimits

0x9f3a,	// (0x00037c60) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003ce18) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003ce18) popup_call_audio_first_window_t

0x9f69,	// (0x00037c8f) bg_popup_call_pane_cp02

0x9f73,	// (0x00037c99) call_type_pane_cp023

0x9f7b,	// (0x00037ca1) popup_call_audio_wait_window_g1

0x9f83,	// (0x00037ca9) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ce1f) popup_call_audio_wait_window_g

0x9f8b,	// (0x00037cb1) popup_call_audio_wait_window_t3

0x9f99,	// (0x00037cbf) bg_popup_call_pane_cp03_ParamLimits

0x9f99,	// (0x00037cbf) bg_popup_call_pane_cp03

0x9ff9,	// (0x00037d1f) call_thumbnail_pane_cp011_ParamLimits

0x9ff9,	// (0x00037d1f) call_thumbnail_pane_cp011

0xa005,	// (0x00037d2b) call_type_pane_cp034_ParamLimits

0xa005,	// (0x00037d2b) call_type_pane_cp034

0xa041,	// (0x00037d67) popup_call_audio_second_window_g1_ParamLimits

0xa041,	// (0x00037d67) popup_call_audio_second_window_g1

0xa07d,	// (0x00037da3) popup_call_audio_second_window_g2_ParamLimits

0xa07d,	// (0x00037da3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003ce24) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003ce24) popup_call_audio_second_window_g

0xa0b9,	// (0x00037ddf) popup_call_audio_second_window_t1_ParamLimits

0xa0b9,	// (0x00037ddf) popup_call_audio_second_window_t1

0xa13a,	// (0x00037e60) popup_call_audio_second_window_t2_ParamLimits

0xa13a,	// (0x00037e60) popup_call_audio_second_window_t2

0xa170,	// (0x00037e96) popup_call_audio_second_window_t3_ParamLimits

0xa170,	// (0x00037e96) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003ce29) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003ce29) popup_call_audio_second_window_t

0x9f69,	// (0x00037c8f) bg_popup_call_pane_cp04

0xa1a6,	// (0x00037ecc) list_conf_pane

0xa1ae,	// (0x00037ed4) popup_call_audio_conf_window_t1

0xa1bc,	// (0x00037ee2) call_thumbnail_pane_g1

0xa1c4,	// (0x00037eea) bg_pinb_pane_ParamLimits

0xa1c4,	// (0x00037eea) bg_pinb_pane

0xa1d2,	// (0x00037ef8) find_pinb_pane

0xa1db,	// (0x00037f01) listscroll_pinb_pane_ParamLimits

0xa1db,	// (0x00037f01) listscroll_pinb_pane

0xa1ea,	// (0x00037f10) pinb_bg_pane_g1

0x19b9,	// (0x0002f6df) pinb_bg_pane_g2

0x19c5,	// (0x0002f6eb) pinb_bg_pane_g3

0x19d1,	// (0x0002f6f7) pinb_bg_pane_g4

0x19dd,	// (0x0002f703) pinb_bg_pane_g5

0x19e9,	// (0x0002f70f) pinb_bg_pane_g6

0x19f4,	// (0x0002f71a) pinb_bg_pane_g7

0x19ff,	// (0x0002f725) pinb_bg_pane_g8

0x1a0a,	// (0x0002f730) pinb_bg_pane_g9

0x1a14,	// (0x0002f73a) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003ce30) pinb_bg_pane_g

0x1a31,	// (0x0002f757) grid_pinb_pane

0x1a3a,	// (0x0002f760) list_pinb_pane

0x1a43,	// (0x0002f769) scroll_pane_cp01_ParamLimits

0x1a43,	// (0x0002f769) scroll_pane_cp01

0xa1f4,	// (0x00037f1a) find_pinb_pane_g1_ParamLimits

0xa1f4,	// (0x00037f1a) find_pinb_pane_g1

0xa20c,	// (0x00037f32) find_pinb_pane_t1

0xa21e,	// (0x00037f44) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003ce4a) find_pinb_pane_t

0xa233,	// (0x00037f59) input_focus_pane_cp01_ParamLimits

0xa233,	// (0x00037f59) input_focus_pane_cp01

0x1a55,	// (0x0002f77b) cell_pinb_pane_ParamLimits

0x1a55,	// (0x0002f77b) cell_pinb_pane

0x1a7e,	// (0x0002f7a4) cell_pinb_pane_g1_ParamLimits

0x1a7e,	// (0x0002f7a4) cell_pinb_pane_g1

0x1a8e,	// (0x0002f7b4) cell_pinb_pane_g2_ParamLimits

0x1a8e,	// (0x0002f7b4) cell_pinb_pane_g2

0xa23f,	// (0x00037f65) cell_pinb_pane_g3_ParamLimits

0xa23f,	// (0x00037f65) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003ce4f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003ce4f) cell_pinb_pane_g

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp01

0x1a9a,	// (0x0002f7c0) list_pinb_item_pane_ParamLimits

0x1a9a,	// (0x0002f7c0) list_pinb_item_pane

0x9f69,	// (0x00037c8f) list_highlight_pane_cp02

0x1aac,	// (0x0002f7d2) list_pinb_item_pane_g1_ParamLimits

0x1aac,	// (0x0002f7d2) list_pinb_item_pane_g1

0x1ab9,	// (0x0002f7df) list_pinb_item_pane_g2_ParamLimits

0x1ab9,	// (0x0002f7df) list_pinb_item_pane_g2

0x1ac5,	// (0x0002f7eb) list_pinb_item_pane_g3_ParamLimits

0x1ac5,	// (0x0002f7eb) list_pinb_item_pane_g3

0x1ad6,	// (0x0002f7fc) list_pinb_item_pane_g4_ParamLimits

0x1ad6,	// (0x0002f7fc) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003ce56) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003ce56) list_pinb_item_pane_g

0x1ae2,	// (0x0002f808) list_pinb_item_pane_t1_ParamLimits

0x1ae2,	// (0x0002f808) list_pinb_item_pane_t1

0x0397,	// (0x0002e0bd) calc_display_pane

0x03bf,	// (0x0002e0e5) calc_paper_pane

0x03e2,	// (0x0002e108) grid_calc_pane

0x9f69,	// (0x00037c8f) bg_list_pane_cp01

0x1b01,	// (0x0002f827) clock_g1

0x1b09,	// (0x0002f82f) clock_g2

0x0001,

0xf139,	// (0x0003ce5f) clock_g

0x1b11,	// (0x0002f837) clock_t1_ParamLimits

0x1b11,	// (0x0002f837) clock_t1

0x1b26,	// (0x0002f84c) clock_t2_ParamLimits

0x1b26,	// (0x0002f84c) clock_t2

0x1b38,	// (0x0002f85e) clock_t3_ParamLimits

0x1b38,	// (0x0002f85e) clock_t3

0x1b4a,	// (0x0002f870) clock_t4_ParamLimits

0x1b4a,	// (0x0002f870) clock_t4

0x1b5c,	// (0x0002f882) clock_t5_ParamLimits

0x1b5c,	// (0x0002f882) clock_t5

0x1b71,	// (0x0002f897) clock_t6_ParamLimits

0x1b71,	// (0x0002f897) clock_t6

0x1b83,	// (0x0002f8a9) clock_t7_ParamLimits

0x1b83,	// (0x0002f8a9) clock_t7

0x1b95,	// (0x0002f8bb) clock_t8_ParamLimits

0x1b95,	// (0x0002f8bb) clock_t8

0x1ba9,	// (0x0002f8cf) clock_t9_ParamLimits

0x1ba9,	// (0x0002f8cf) clock_t9

0x0008,

0xf13e,	// (0x0003ce64) clock_t_ParamLimits

0xf13e,	// (0x0003ce64) clock_t

0xa24b,	// (0x00037f71) popup_clock_analogue_window_cp02

0xa24b,	// (0x00037f71) popup_clock_digital_window_cp01

0xa253,	// (0x00037f79) listscroll_help_pane

0x9f69,	// (0x00037c8f) phob_pre_status_pane

0xa25d,	// (0x00037f83) grid_qdial_pane

0xa1c4,	// (0x00037eea) listscroll_mce_pane

0xa1c4,	// (0x00037eea) bg_notes_pane

0xa267,	// (0x00037f8d) list_notes_pane

0x1bbd,	// (0x0002f8e3) scroll_pane_cp06

0xa275,	// (0x00037f9b) bg_calc_paper_pane

0x1bd1,	// (0x0002f8f7) list_calc_pane

0xa289,	// (0x00037faf) bg_calc_display_pane

0x0410,	// (0x0002e136) calc_display_pane_t1

0x0422,	// (0x0002e148) calc_display_pane_t2

0x1beb,	// (0x0002f911) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003ce77) calc_display_pane_t

0x0434,	// (0x0002e15a) cell_calc_pane_ParamLimits

0x0434,	// (0x0002e15a) cell_calc_pane

0xa295,	// (0x00037fbb) bg_calc_paper_pane_g1

0xa2a1,	// (0x00037fc7) bg_calc_paper_pane_g2

0xa2ad,	// (0x00037fd3) bg_calc_paper_pane_g3

0xa2b9,	// (0x00037fdf) bg_calc_paper_pane_g4

0xa2c5,	// (0x00037feb) bg_calc_paper_pane_g5

0x1bfd,	// (0x0002f923) bg_calc_paper_pane_g6

0x1c0c,	// (0x0002f932) bg_calc_paper_pane_g7

0x1c1b,	// (0x0002f941) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003ce7e) bg_calc_paper_pane_g

0x1c2e,	// (0x0002f954) calc_bg_paper_pane_g9

0x1c41,	// (0x0002f967) list_calc_item_pane_ParamLimits

0x1c41,	// (0x0002f967) list_calc_item_pane

0xa2d1,	// (0x00037ff7) list_calc_item_pane_g1

0x1c56,	// (0x0002f97c) list_calc_item_pane_t1_ParamLimits

0x1c56,	// (0x0002f97c) list_calc_item_pane_t1

0x0469,	// (0x0002e18f) list_calc_item_pane_t2_ParamLimits

0x0469,	// (0x0002e18f) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003ce8f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003ce8f) list_calc_item_pane_t

0xa2de,	// (0x00038004) cell_calc_pane_g1

0xa2e8,	// (0x0003800e) grid_highlight_pane_cp02

0x1c68,	// (0x0002f98e) bg_calc_display_pane_g1

0x049b,	// (0x0002e1c1) bg_calc_display_pane_g2

0x1c71,	// (0x0002f997) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003ce99) bg_calc_display_pane_g

0x04a5,	// (0x0002e1cb) cell_qdial_pane_ParamLimits

0x04a5,	// (0x0002e1cb) cell_qdial_pane

0x1c7a,	// (0x0002f9a0) cell_qdial_pane_g1_ParamLimits

0x1c7a,	// (0x0002f9a0) cell_qdial_pane_g1

0x1c90,	// (0x0002f9b6) cell_qdial_pane_g2_ParamLimits

0x1c90,	// (0x0002f9b6) cell_qdial_pane_g2

0xa30a,	// (0x00038030) cell_qdial_pane_g3_ParamLimits

0xa30a,	// (0x00038030) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003cea0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003cea0) cell_qdial_pane_g

0x1cb7,	// (0x0002f9dd) cell_qdial_pane_t1_ParamLimits

0x1cb7,	// (0x0002f9dd) cell_qdial_pane_t1

0x1ccf,	// (0x0002f9f5) cell_qdial_pane_t2_ParamLimits

0x1ccf,	// (0x0002f9f5) cell_qdial_pane_t2

0x1ce2,	// (0x0002fa08) cell_qdial_pane_t3_ParamLimits

0x1ce2,	// (0x0002fa08) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003cea9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003cea9) cell_qdial_pane_t

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp04

0xa316,	// (0x0003803c) thumbnail_qdial_pane_ParamLimits

0xa316,	// (0x0003803c) thumbnail_qdial_pane

0xa372,	// (0x00038098) list_help_pane

0xa37b,	// (0x000380a1) scroll_pane_cp02

0x1cf5,	// (0x0002fa1b) help_list_pane_t1_ParamLimits

0x1cf5,	// (0x0002fa1b) help_list_pane_t1

0x1d12,	// (0x0002fa38) bg_notes_pane_g2

0x1d1a,	// (0x0002fa40) bg_notes_pane_g3

0x1d22,	// (0x0002fa48) notes_bg_pane_g1

0x1d2a,	// (0x0002fa50) notes_bg_pane_g4

0x1d32,	// (0x0002fa58) notes_bg_pane_g5

0x1d3a,	// (0x0002fa60) notes_bg_pane_g6

0x1d42,	// (0x0002fa68) notes_bg_pane_g7

0x1d4a,	// (0x0002fa70) notes_bg_pane_g8

0x1d52,	// (0x0002fa78) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003cec7) notes_bg_pane_g

0x1d5a,	// (0x0002fa80) list_notes_text_pane_ParamLimits

0x1d5a,	// (0x0002fa80) list_notes_text_pane

0xa384,	// (0x000380aa) list_notes_text_pane_g1

0x1d6f,	// (0x0002fa95) list_notes_text_pane_t1

0x1d7d,	// (0x0002faa3) listscroll_cale_week_pane

0x1da9,	// (0x0002facf) bg_cale_heading_pane

0xa3a7,	// (0x000380cd) bg_cale_pane_cp01

0x1dc1,	// (0x0002fae7) cale_week_corner_pane

0x1de0,	// (0x0002fb06) cale_week_day_heading_pane

0x1dfd,	// (0x0002fb23) cale_week_scroll_pane_g1

0x1e10,	// (0x0002fb36) cale_week_scroll_pane_g2

0x1e28,	// (0x0002fb4e) cale_week_scroll_pane_g3

0x1e40,	// (0x0002fb66) cale_week_scroll_pane_g4

0x1e58,	// (0x0002fb7e) cale_week_scroll_pane_g5

0x1e78,	// (0x0002fb9e) cale_week_scroll_pane_g6

0x1e98,	// (0x0002fbbe) cale_week_scroll_pane_g7

0x1eb8,	// (0x0002fbde) cale_week_scroll_pane_g8

0x1edc,	// (0x0002fc02) cale_week_scroll_pane_g9

0x1ef4,	// (0x0002fc1a) cale_week_scroll_pane_g10

0x1f0c,	// (0x0002fc32) cale_week_scroll_pane_g11

0x1f24,	// (0x0002fc4a) cale_week_scroll_pane_g12

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g13

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g14

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003ced6) cale_week_scroll_pane_g

0x1f78,	// (0x0002fc9e) cale_week_time_pane

0x1f9c,	// (0x0002fcc2) grid_cale_week_pane

0xa3d6,	// (0x000380fc) scroll_pane_cp08

0x1fc2,	// (0x0002fce8) cell_cale_week_pane_ParamLimits

0x1fc2,	// (0x0002fce8) cell_cale_week_pane

0x2050,	// (0x0002fd76) cale_week_day_heading_pane_t1

0x2095,	// (0x0002fdbb) cale_week_day_heading_pane_t2

0x20df,	// (0x0002fe05) cale_week_day_heading_pane_t3

0x2129,	// (0x0002fe4f) cale_week_day_heading_pane_t4

0x2173,	// (0x0002fe99) cale_week_day_heading_pane_t5

0x21c5,	// (0x0002feeb) cale_week_day_heading_pane_t6

0x2217,	// (0x0002ff3d) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003cef7) cale_week_day_heading_pane_t

0xa3f3,	// (0x00038119) bg_cale_side_pane

0x04b9,	// (0x0002e1df) cale_week_time_pane_t1

0x04d3,	// (0x0002e1f9) cale_week_time_pane_t2

0x04ed,	// (0x0002e213) cale_week_time_pane_t3

0x0507,	// (0x0002e22d) cale_week_time_pane_t4

0x0521,	// (0x0002e247) cale_week_time_pane_t5

0x053b,	// (0x0002e261) cale_week_time_pane_t6

0x0555,	// (0x0002e27b) cale_week_time_pane_t7

0x056f,	// (0x0002e295) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003cf06) cale_week_time_pane_t

0x225c,	// (0x0002ff82) cell_cale_week_pane_g2

0x227b,	// (0x0002ffa1) cell_cale_week_pane_g3_ParamLimits

0x227b,	// (0x0002ffa1) cell_cale_week_pane_g3

0xa401,	// (0x00038127) grid_highlight_pane_cp07

0xa409,	// (0x0003812f) listscroll_gms_pane

0xa413,	// (0x00038139) grid_gms_pane

0xa41c,	// (0x00038142) listscroll_gms_pane_g1

0xa424,	// (0x0003814a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003cf17) listscroll_gms_pane_g

0x2293,	// (0x0002ffb9) scroll_pane_cp010

0x229e,	// (0x0002ffc4) cell_gms_pane_ParamLimits

0x229e,	// (0x0002ffc4) cell_gms_pane

0x22b1,	// (0x0002ffd7) cell_gms_pane_g1

0xa42c,	// (0x00038152) cell_gms_pane_g2

0xa434,	// (0x0003815a) cell_gms_pane_g3

0xa43d,	// (0x00038163) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003cf1c) cell_gms_pane_g

0xa446,	// (0x0003816c) grid_highlight_pane_cp09

0x4818,	// (0x0003253e) phob_pre_status_pane_g1

0x4820,	// (0x00032546) phob_pre_status_pane_g2

0x4828,	// (0x0003254e) phob_pre_status_pane_g3

0x4830,	// (0x00032556) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003d307) phob_pre_status_pane_g

0x4840,	// (0x00032566) phob_pre_status_pane_t1

0x484e,	// (0x00032574) phob_pre_status_pane_t2

0x485e,	// (0x00032584) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003d312) phob_pre_status_pane_t

0xa44e,	// (0x00038174) bg_list_pane_cp05

0x22c1,	// (0x0002ffe7) grid_vorec_pane

0x22c9,	// (0x0002ffef) vorec_t1

0x22d7,	// (0x0002fffd) vorec_t2

0x22e5,	// (0x0003000b) vorec_t3

0x22f3,	// (0x00030019) vorec_t4

0x1860,	// (0x0002f586) vorec_t5

0x186e,	// (0x0002f594) vorec_t6

0x0004,

0xf1ff,	// (0x0003cf25) vorec_t

0x187c,	// (0x0002f5a2) wait_bar_pane_cp01

0x230f,	// (0x00030035) cell_vorec_pane_ParamLimits

0x230f,	// (0x00030035) cell_vorec_pane

0x2322,	// (0x00030048) cell_vorec_pane_g1

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp05

0x2341,	// (0x00030067) cams_zoom_pane

0x2350,	// (0x00030076) image_vga_pane

0x236a,	// (0x00030090) main_camera_pane_g1

0x237c,	// (0x000300a2) main_camera_pane_g2

0x238c,	// (0x000300b2) main_camera_pane_g3

0x239c,	// (0x000300c2) main_camera_pane_g4

0x23ac,	// (0x000300d2) main_camera_pane_g5

0x23bc,	// (0x000300e2) main_camera_pane_g6

0x23ce,	// (0x000300f4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003cf30) main_camera_pane_g

0x23de,	// (0x00030104) main_camera_pane_t1

0x23f4,	// (0x0003011a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003cf41) main_camera_pane_t

0x242e,	// (0x00030154) cams_zoom_pane_cp_ParamLimits

0x242e,	// (0x00030154) cams_zoom_pane_cp

0x2456,	// (0x0003017c) image_cif_pane_ParamLimits

0x2456,	// (0x0003017c) image_cif_pane

0x248c,	// (0x000301b2) image_subqcif_pane

0x2494,	// (0x000301ba) main_video_pane_g1_ParamLimits

0x2494,	// (0x000301ba) main_video_pane_g1

0x24b8,	// (0x000301de) main_video_pane_g2_ParamLimits

0x24b8,	// (0x000301de) main_video_pane_g2

0x24ec,	// (0x00030212) main_video_pane_g3_ParamLimits

0x24ec,	// (0x00030212) main_video_pane_g3

0x251a,	// (0x00030240) main_video_pane_g4_ParamLimits

0x251a,	// (0x00030240) main_video_pane_g4

0x2548,	// (0x0003026e) main_video_pane_g5_ParamLimits

0x2548,	// (0x0003026e) main_video_pane_g5

0xa462,	// (0x00038188) main_video_pane_g6_ParamLimits

0xa462,	// (0x00038188) main_video_pane_g6

0x0006,

0xf220,	// (0x0003cf46) main_video_pane_g_ParamLimits

0xf220,	// (0x0003cf46) main_video_pane_g

0x2571,	// (0x00030297) main_video_pane_t1_ParamLimits

0x2571,	// (0x00030297) main_video_pane_t1

0xa47c,	// (0x000381a2) cams_zoom_pane_g1

0xa485,	// (0x000381ab) cams_zoom_pane_g2

0xa48e,	// (0x000381b4) cams_zoom_pane_g3

0xa497,	// (0x000381bd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003cf55) cams_zoom_pane_g

0x25ce,	// (0x000302f4) grid_cams_pane

0x25e8,	// (0x0003030e) linegrid_cams_pane

0x25fc,	// (0x00030322) cell_cams_pane_ParamLimits

0x25fc,	// (0x00030322) cell_cams_pane

0xa4a0,	// (0x000381c6) cams_burst_image_pane

0xa4a8,	// (0x000381ce) cell_cams_pane_g1

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp03

0xa2de,	// (0x00038004) mp_bg_pane_g1

0x9f69,	// (0x00037c8f) bg_list_pane_cp03

0xc2fa,	// (0x0003a020) bg_mp_pane

0xc302,	// (0x0003a028) grid_mp_pane

0xc30a,	// (0x0003a030) media_player_g1

0xc312,	// (0x0003a038) media_player_t1

0xc320,	// (0x0003a046) media_player_t2

0xc32e,	// (0x0003a054) media_player_t3

0xc33c,	// (0x0003a062) media_player_t4

0xc34a,	// (0x0003a070) media_player_t5

0xc358,	// (0x0003a07e) media_player_t6

0xc366,	// (0x0003a08c) media_player_t7

0x0006,

0xf5cb,	// (0x0003d2f1) media_player_t

0xc374,	// (0x0003a09a) wait_bar_pane_cp02

0xf5b0,	// (0x0003d2d6) main_usb_pane_t

0x480f,	// (0x00032535) cell_mp_pane

0xa2de,	// (0x00038004) cell_mp_pane_g1

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp06

0xa4b0,	// (0x000381d6) grid_skin_colour_pane

0xa4b8,	// (0x000381de) list_highlight_pane_cp03

0x272b,	// (0x00030451) skin_g1

0xa4c0,	// (0x000381e6) skin_t1

0xa4cf,	// (0x000381f5) skin_t2

0x0001,

0xf264,	// (0x0003cf8a) skin_t

0x2733,	// (0x00030459) cell_skin_colour_pane_ParamLimits

0x2733,	// (0x00030459) cell_skin_colour_pane

0xa4dd,	// (0x00038203) cell_skin_colour_pane_g1

0x27ac,	// (0x000304d2) call_video_g1_ParamLimits

0x27ac,	// (0x000304d2) call_video_g1

0x27c8,	// (0x000304ee) call_video_g2_ParamLimits

0x27c8,	// (0x000304ee) call_video_g2

0x0001,

0xf269,	// (0x0003cf8f) call_video_g_ParamLimits

0xf269,	// (0x0003cf8f) call_video_g

0x281a,	// (0x00030540) call_video_uplink_pane_cp1_ParamLimits

0x281a,	// (0x00030540) call_video_uplink_pane_cp1

0xa4ef,	// (0x00038215) call_video_uplink_pane_cp2

0x28b9,	// (0x000305df) video_down_crop_pane_ParamLimits

0x28b9,	// (0x000305df) video_down_crop_pane

0x29b0,	// (0x000306d6) video_down_pane_ParamLimits

0x29b0,	// (0x000306d6) video_down_pane

0xa4f7,	// (0x0003821d) video_down_subqcif_pane_ParamLimits

0xa4f7,	// (0x0003821d) video_down_subqcif_pane

0xa50f,	// (0x00038235) video_down_subqcif_pane_cp_ParamLimits

0xa50f,	// (0x00038235) video_down_subqcif_pane_cp

0xa535,	// (0x0003825b) im_reading_pane_ParamLimits

0xa535,	// (0x0003825b) im_reading_pane

0x2abe,	// (0x000307e4) im_writing_pane_ParamLimits

0x2abe,	// (0x000307e4) im_writing_pane

0x2ad4,	// (0x000307fa) im_reading_pane_t1

0xa54f,	// (0x00038275) list_im_pane

0xa560,	// (0x00038286) scroll_pane_cp07

0x2b0d,	// (0x00030833) im_writing_pane_t1_ParamLimits

0x2b0d,	// (0x00030833) im_writing_pane_t1

0xa579,	// (0x0003829f) im_writing_pane_t2_ParamLimits

0xa579,	// (0x0003829f) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003cf99) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003cf99) im_writing_pane_t

0x9f69,	// (0x00037c8f) input_focus_pane_cp04

0x9f69,	// (0x00037c8f) input_focus_pane_cp05

0x2b22,	// (0x00030848) list_im_single_pane_ParamLimits

0x2b22,	// (0x00030848) list_im_single_pane

0x2b36,	// (0x0003085c) list_single_im_pane_t1

0x47cf,	// (0x000324f5) blid_accuracy_pane

0x47d7,	// (0x000324fd) blid_compass_pane

0x47e1,	// (0x00032507) main_location_t1

0x47f1,	// (0x00032517) main_location_t2

0x4801,	// (0x00032527) main_location_t3

0x0002,

0xf5da,	// (0x0003d300) main_location_t

0x9f69,	// (0x00037c8f) aid_levels_location

0xa2de,	// (0x00038004) blid_accuracy_pane_g1

0xa2de,	// (0x00038004) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003cffb) blid_accuracy_pane_g

0xa5c1,	// (0x000382e7) wml_content_pane

0xa5ff,	// (0x00038325) wml_button_pane_ParamLimits

0xa5ff,	// (0x00038325) wml_button_pane

0x2b45,	// (0x0003086b) wml_list_single_large_pane_ParamLimits

0x2b45,	// (0x0003086b) wml_list_single_large_pane

0x2b5a,	// (0x00030880) wml_list_single_medium_pane_ParamLimits

0x2b5a,	// (0x00030880) wml_list_single_medium_pane

0x2b70,	// (0x00030896) wml_list_single_small_pane_ParamLimits

0x2b70,	// (0x00030896) wml_list_single_small_pane

0xa613,	// (0x00038339) wml_selection_box_pane_ParamLimits

0xa613,	// (0x00038339) wml_selection_box_pane

0xa626,	// (0x0003834c) wml_list_single_pane_t1

0xa635,	// (0x0003835b) wml_list_single_medium_pane_t1

0xa644,	// (0x0003836a) wml_list_single_large_pane_t1

0xa653,	// (0x00038379) input_focus_pane_cp02_ParamLimits

0xa653,	// (0x00038379) input_focus_pane_cp02

0xa666,	// (0x0003838c) wml_selection_box_pane_g1

0xa66f,	// (0x00038395) wml_selection_box_pane_t1_ParamLimits

0xa66f,	// (0x00038395) wml_selection_box_pane_t1

0xa1c4,	// (0x00037eea) bg_wml_button_pane_ParamLimits

0xa1c4,	// (0x00037eea) bg_wml_button_pane

0xa687,	// (0x000383ad) wml_button_pane_g1

0xa68f,	// (0x000383b5) wml_button_pane_t1

0xa687,	// (0x000383ad) wml_button_bg_pane_g1

0xa69f,	// (0x000383c5) wml_button_bg_pane_g2

0xa6a7,	// (0x000383cd) wml_button_bg_pane_g3

0xa6af,	// (0x000383d5) wml_button_bg_pane_g4

0xa6b7,	// (0x000383dd) wml_button_bg_pane_g5

0xa6bf,	// (0x000383e5) wml_button_bg_pane_g6

0xa6c7,	// (0x000383ed) wml_button_bg_pane_g7

0xa6cf,	// (0x000383f5) wml_button_bg_pane_g8

0xa785,	// (0x000384ab) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003cf9e) wml_button_bg_pane_g

0x2b88,	// (0x000308ae) bg_list_pane_cp02

0xa78d,	// (0x000384b3) mce_header_pane_ParamLimits

0xa78d,	// (0x000384b3) mce_header_pane

0xa7a3,	// (0x000384c9) mce_icon_pane

0xa7a3,	// (0x000384c9) mce_image_pane

0xa7ac,	// (0x000384d2) mce_text_pane_ParamLimits

0xa7ac,	// (0x000384d2) mce_text_pane

0x2b90,	// (0x000308b6) scroll_pane_cp03

0xa5f7,	// (0x0003831d) scroll_pane_cp04

0xa7bf,	// (0x000384e5) scroll_pane_cp05_ParamLimits

0xa7bf,	// (0x000384e5) scroll_pane_cp05

0x2b9a,	// (0x000308c0) mce_header_field_pane_ParamLimits

0x2b9a,	// (0x000308c0) mce_header_field_pane

0x2bb1,	// (0x000308d7) mce_header_field_pane_2_ParamLimits

0x2bb1,	// (0x000308d7) mce_header_field_pane_2

0x2bc7,	// (0x000308ed) mce_header_field_pane_3

0x2bcf,	// (0x000308f5) list_single_mce_message_pane_ParamLimits

0x2bcf,	// (0x000308f5) list_single_mce_message_pane

0x2be4,	// (0x0003090a) list_single_mce_smart_pane_ParamLimits

0x2be4,	// (0x0003090a) list_single_mce_smart_pane

0xa7cb,	// (0x000384f1) input_focus_pane_cp03

0xa7d4,	// (0x000384fa) list_header_data_pane

0x2c04,	// (0x0003092a) mce_header_field_pane_t1

0x2c14,	// (0x0003093a) list_single_mce_header_pane_ParamLimits

0x2c14,	// (0x0003093a) list_single_mce_header_pane

0xa7dc,	// (0x00038502) list_single_mce_header_pane_t1

0xa7eb,	// (0x00038511) list_single_mce_message_pane_g1

0xa7f3,	// (0x00038519) list_single_mce_message_pane_t1

0x2c4e,	// (0x00030974) bg_cale_heading_pane_cp01_ParamLimits

0x2c4e,	// (0x00030974) bg_cale_heading_pane_cp01

0xa801,	// (0x00038527) bg_cale_pane_cp02_ParamLimits

0xa801,	// (0x00038527) bg_cale_pane_cp02

0x2c7d,	// (0x000309a3) cale_month_corner_pane

0x2c9c,	// (0x000309c2) cale_month_day_heading_pane_ParamLimits

0x2c9c,	// (0x000309c2) cale_month_day_heading_pane

0x2ce3,	// (0x00030a09) cale_month_pane_g1_ParamLimits

0x2ce3,	// (0x00030a09) cale_month_pane_g1

0x2d07,	// (0x00030a2d) cale_month_pane_g2_ParamLimits

0x2d07,	// (0x00030a2d) cale_month_pane_g2

0x2d37,	// (0x00030a5d) cale_month_pane_g3_ParamLimits

0x2d37,	// (0x00030a5d) cale_month_pane_g3

0x2d73,	// (0x00030a99) cale_month_pane_g4_ParamLimits

0x2d73,	// (0x00030a99) cale_month_pane_g4

0x2daf,	// (0x00030ad5) cale_month_pane_g5_ParamLimits

0x2daf,	// (0x00030ad5) cale_month_pane_g5

0x2df7,	// (0x00030b1d) cale_month_pane_g6_ParamLimits

0x2df7,	// (0x00030b1d) cale_month_pane_g6

0x2e43,	// (0x00030b69) cale_month_pane_g7_ParamLimits

0x2e43,	// (0x00030b69) cale_month_pane_g7

0x2e97,	// (0x00030bbd) cale_month_pane_g8_ParamLimits

0x2e97,	// (0x00030bbd) cale_month_pane_g8

0x2eeb,	// (0x00030c11) cale_month_pane_g9_ParamLimits

0x2eeb,	// (0x00030c11) cale_month_pane_g9

0x2f3d,	// (0x00030c63) cale_month_pane_g10_ParamLimits

0x2f3d,	// (0x00030c63) cale_month_pane_g10

0x2f8f,	// (0x00030cb5) cale_month_pane_g11_ParamLimits

0x2f8f,	// (0x00030cb5) cale_month_pane_g11

0x2fe1,	// (0x00030d07) cale_month_pane_g12_ParamLimits

0x2fe1,	// (0x00030d07) cale_month_pane_g12

0x3033,	// (0x00030d59) cale_month_pane_g13_ParamLimits

0x3033,	// (0x00030d59) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003cfb1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003cfb1) cale_month_pane_g

0x3085,	// (0x00030dab) cale_month_week_pane

0x30a9,	// (0x00030dcf) grid_cale_month_pane_ParamLimits

0x30a9,	// (0x00030dcf) grid_cale_month_pane

0x30e7,	// (0x00030e0d) cale_month_day_heading_pane_t1

0x316d,	// (0x00030e93) cale_month_day_heading_pane_t2

0x31fe,	// (0x00030f24) cale_month_day_heading_pane_t3

0x328f,	// (0x00030fb5) cale_month_day_heading_pane_t4

0x3324,	// (0x0003104a) cale_month_day_heading_pane_t5

0x33c5,	// (0x000310eb) cale_month_day_heading_pane_t6

0x3466,	// (0x0003118c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003cfcc) cale_month_day_heading_pane_t

0xa3f3,	// (0x00038119) bg_cale_side_pane_cp01

0x350f,	// (0x00031235) cale_month_week_pane_t1

0x3528,	// (0x0003124e) cale_month_week_pane_t2

0x3541,	// (0x00031267) cale_month_week_pane_t3

0x355a,	// (0x00031280) cale_month_week_pane_t4

0x3573,	// (0x00031299) cale_month_week_pane_t5

0x358c,	// (0x000312b2) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003cfdb) cale_month_week_pane_t

0x35a5,	// (0x000312cb) cell_cale_month_pane_ParamLimits

0x35a5,	// (0x000312cb) cell_cale_month_pane

0x36f9,	// (0x0003141f) cell_cale_month_pane_g1

0x058f,	// (0x0002e2b5) cell_cale_month_pane_t1_ParamLimits

0x058f,	// (0x0002e2b5) cell_cale_month_pane_t1

0xa401,	// (0x00038127) grid_highlight_pane_cp08

0xa2de,	// (0x00038004) main_smil_g1

0x3705,	// (0x0003142b) smil_status_pane

0xa840,	// (0x00038566) smil_text_pane

0xc21a,	// (0x00039f40) bg_popup_call3_rect_pane_g8

0xc222,	// (0x00039f48) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d294) bg_popup_call3_rect_pane_g

0xc469,	// (0x0003a18f) smil_status_volume_pane_g1

0xa84a,	// (0x00038570) smil_status_pane_t1

0x4b62,	// (0x00032888) volume_smil_pane

0xa861,	// (0x00038587) list_smil_text_pane

0x3718,	// (0x0003143e) scroll_pane_cp011

0x3723,	// (0x00031449) smil_text_list_pane_t1_ParamLimits

0x3723,	// (0x00031449) smil_text_list_pane_t1

0x375f,	// (0x00031485) aid_volume_smil_ParamLimits

0x375f,	// (0x00031485) aid_volume_smil

0xa2de,	// (0x00038004) smil_volume_pane_g1

0xa2de,	// (0x00038004) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003cffb) smil_volume_pane_g

0x1d7d,	// (0x0002faa3) listscroll_cale_day_pane

0xa86b,	// (0x00038591) bg_cale_pane

0xa883,	// (0x000385a9) list_cale_pane

0xa8a6,	// (0x000385cc) scroll_pane_cp09

0xa8b7,	// (0x000385dd) cale_bg_pane_g1

0xa8bf,	// (0x000385e5) cale_bg_pane_g2

0xa8c7,	// (0x000385ed) cale_bg_pane_g3

0xa8cf,	// (0x000385f5) cale_bg_pane_g4

0xa8d7,	// (0x000385fd) cale_bg_pane_g5

0xa8df,	// (0x00038605) cale_bg_pane_g6

0xa8e7,	// (0x0003860d) cale_bg_pane_g7

0xa8ef,	// (0x00038615) cale_bg_pane_g8

0xa8f7,	// (0x0003861d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003d000) cale_bg_pane_g

0x3789,	// (0x000314af) list_cale_time_pane_ParamLimits

0x3789,	// (0x000314af) list_cale_time_pane

0xa8ff,	// (0x00038625) list_cale_time_pane_g1_ParamLimits

0xa8ff,	// (0x00038625) list_cale_time_pane_g1

0xa90b,	// (0x00038631) list_cale_time_pane_g2_ParamLimits

0xa90b,	// (0x00038631) list_cale_time_pane_g2

0x379e,	// (0x000314c4) list_cale_time_pane_g3_ParamLimits

0x379e,	// (0x000314c4) list_cale_time_pane_g3

0x37ac,	// (0x000314d2) list_cale_time_pane_g4_ParamLimits

0x37ac,	// (0x000314d2) list_cale_time_pane_g4

0x37ba,	// (0x000314e0) list_cale_time_pane_g5_ParamLimits

0x37ba,	// (0x000314e0) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003d013) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003d013) list_cale_time_pane_g

0xa925,	// (0x0003864b) list_cale_time_pane_t1_ParamLimits

0xa925,	// (0x0003864b) list_cale_time_pane_t1

0xa94d,	// (0x00038673) list_cale_time_pane_t2_ParamLimits

0xa94d,	// (0x00038673) list_cale_time_pane_t2

0x3b8e,	// (0x000318b4) aid_blid_cardinal_pane

0x3bcc,	// (0x000318f2) compass_pane_t4

0xa975,	// (0x0003869b) list_cale_time_pane_t4_ParamLimits

0xa975,	// (0x0003869b) list_cale_time_pane_t4

0x3bda,	// (0x00031900) compass_pane_t5

0x3be8,	// (0x0003190e) compass_pane_t6

0x3bf6,	// (0x0003191c) compass_pane_t7

0xae24,	// (0x00038b4a) navi_pane_cc_t1

0xb001,	// (0x00038d27) aid_phob_thumbnail_center_pane

0x41e7,	// (0x00031f0d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003d020) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003d020) list_cale_time_pane_t

0x9bc0,	// (0x000378e6) bg_popup_window_pane_cp02_ParamLimits

0x9bc0,	// (0x000378e6) bg_popup_window_pane_cp02

0xa99d,	// (0x000386c3) heading_pane_cp01_ParamLimits

0xa99d,	// (0x000386c3) heading_pane_cp01

0xa9a9,	// (0x000386cf) loc_req_pane_ParamLimits

0xa9a9,	// (0x000386cf) loc_req_pane

0xa9b9,	// (0x000386df) loc_type_pane_ParamLimits

0xa9b9,	// (0x000386df) loc_type_pane

0xa9cb,	// (0x000386f1) loc_type_pane_t1_ParamLimits

0xa9cb,	// (0x000386f1) loc_type_pane_t1

0xa9dd,	// (0x00038703) loc_type_pane_t2_ParamLimits

0xa9dd,	// (0x00038703) loc_type_pane_t2

0xa9ef,	// (0x00038715) loc_type_pane_t3_ParamLimits

0xa9ef,	// (0x00038715) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003d027) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003d027) loc_type_pane_t

0xaa01,	// (0x00038727) list_loc_req_pane

0xaa0b,	// (0x00038731) scroll_pane_cp012

0x37c8,	// (0x000314ee) list_single_loc_request_popup_menu_pane_ParamLimits

0x37c8,	// (0x000314ee) list_single_loc_request_popup_menu_pane

0xaa16,	// (0x0003873c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa16,	// (0x0003873c) list_single_loc_request_popup_menu_pane_g1

0xaa22,	// (0x00038748) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa22,	// (0x00038748) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003d02e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003d02e) list_single_loc_request_popup_menu_pane_g

0xaa2e,	// (0x00038754) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa2e,	// (0x00038754) list_single_loc_request_popup_menu_pane_t1

0xa1c4,	// (0x00037eea) bg_popup_window_pane_cp03_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_window_pane_cp03

0xaa44,	// (0x0003876a) heading_loc_req_pane_ParamLimits

0xaa44,	// (0x0003876a) heading_loc_req_pane

0x37d5,	// (0x000314fb) popup_dyc_status_message_window_g1_ParamLimits

0x37d5,	// (0x000314fb) popup_dyc_status_message_window_g1

0x37e9,	// (0x0003150f) popup_dyc_status_message_window_t1_ParamLimits

0x37e9,	// (0x0003150f) popup_dyc_status_message_window_t1

0x37fe,	// (0x00031524) popup_dyc_status_message_window_t2_ParamLimits

0x37fe,	// (0x00031524) popup_dyc_status_message_window_t2

0x3813,	// (0x00031539) popup_dyc_status_message_window_t3_ParamLimits

0x3813,	// (0x00031539) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003d033) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003d033) popup_dyc_status_message_window_t

0x9f69,	// (0x00037c8f) bg_heading_pane_cp01

0xaa50,	// (0x00038776) heading_loc_req_pane_g1

0xaa58,	// (0x0003877e) heading_loc_req_pane_g2

0xaa60,	// (0x00038786) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003d03a) heading_loc_req_pane_g

0xaa68,	// (0x0003878e) heading_loc_req_pane_t1

0xaa77,	// (0x0003879d) bg_popup_sub_pane_cp01_ParamLimits

0xaa77,	// (0x0003879d) bg_popup_sub_pane_cp01

0xaa85,	// (0x000387ab) popup_cale_events_window_g1_ParamLimits

0xaa85,	// (0x000387ab) popup_cale_events_window_g1

0xaaa5,	// (0x000387cb) popup_cale_events_window_g2_ParamLimits

0xaaa5,	// (0x000387cb) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003d06e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003d06e) popup_cale_events_window_g

0xaac5,	// (0x000387eb) popup_cale_events_window_t1_ParamLimits

0xaac5,	// (0x000387eb) popup_cale_events_window_t1

0xaad7,	// (0x000387fd) popup_cale_events_window_t2_ParamLimits

0xaad7,	// (0x000387fd) popup_cale_events_window_t2

0xab15,	// (0x0003883b) popup_cale_events_window_t3_ParamLimits

0xab15,	// (0x0003883b) popup_cale_events_window_t3

0xab4f,	// (0x00038875) popup_cale_events_window_t4_ParamLimits

0xab4f,	// (0x00038875) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003d073) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003d073) popup_cale_events_window_t

0x3916,	// (0x0003163c) call_type_pane

0x3926,	// (0x0003164c) popup_call_status_window_g1

0x393a,	// (0x00031660) popup_call_status_window_g2

0x394e,	// (0x00031674) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003d07c) popup_call_status_window_g

0xab85,	// (0x000388ab) call_type_pane_g1

0xab8e,	// (0x000388b4) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003d083) call_type_pane_g

0x9f69,	// (0x00037c8f) bg_popup_sub_pane_cp02

0xab97,	// (0x000388bd) listscroll_popup_wml_pane

0xab9f,	// (0x000388c5) list_wml_pane

0xaba9,	// (0x000388cf) scroll_pane_cp013

0xabb4,	// (0x000388da) list_single_graphic_popup_wml_pane_ParamLimits

0xabb4,	// (0x000388da) list_single_graphic_popup_wml_pane

0xa2de,	// (0x00038004) list_single_graphic_popup_wml_pane_g1

0xabc8,	// (0x000388ee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003d088) list_single_graphic_popup_wml_pane_g

0xabd0,	// (0x000388f6) list_single_graphic_popup_wml_pane_t1

0xabe6,	// (0x0003890c) aid_call_pane

0xa1bc,	// (0x00037ee2) popup_clock_analogue_window_g1

0xa1bc,	// (0x00037ee2) popup_clock_analogue_window_g2

0x395d,	// (0x00031683) popup_clock_analogue_window_g3

0x395d,	// (0x00031683) popup_clock_analogue_window_g4

0xa2de,	// (0x00038004) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003d08d) popup_clock_analogue_window_g

0x3965,	// (0x0003168b) popup_clock_analogue_window_t1

0x3973,	// (0x00031699) clock_digital_number_pane_ParamLimits

0x3973,	// (0x00031699) clock_digital_number_pane

0x397f,	// (0x000316a5) clock_digital_number_pane_cp02_ParamLimits

0x397f,	// (0x000316a5) clock_digital_number_pane_cp02

0x398b,	// (0x000316b1) clock_digital_number_pane_cp03_ParamLimits

0x398b,	// (0x000316b1) clock_digital_number_pane_cp03

0x3997,	// (0x000316bd) clock_digital_number_pane_cp04_ParamLimits

0x3997,	// (0x000316bd) clock_digital_number_pane_cp04

0x39a7,	// (0x000316cd) clock_digital_separator_pane_ParamLimits

0x39a7,	// (0x000316cd) clock_digital_separator_pane

0x39b3,	// (0x000316d9) popup_clock_digital_window_t1

0xa2de,	// (0x00038004) clock_digital_number_pane_g1

0xa2de,	// (0x00038004) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003cffb) clock_digital_number_pane_g

0xa2de,	// (0x00038004) clock_digital_separator_pane_g1

0xa2de,	// (0x00038004) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003cffb) clock_digital_separator_pane_g

0x9f69,	// (0x00037c8f) bg_popup_window_pane_cp04

0xabee,	// (0x00038914) heading_pane_cp03

0xabf6,	// (0x0003891c) listscroll_popup_gms_pane

0xabfe,	// (0x00038924) grid_large_graphic_popup_pane

0xac08,	// (0x0003892e) listscroll_popup_gms_pane_g1

0xac10,	// (0x00038936) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003d098) listscroll_popup_gms_pane_g

0xa5f7,	// (0x0003831d) scroll_pane_cp014

0x39d0,	// (0x000316f6) cell_large_graphic_popup_pane_ParamLimits

0x39d0,	// (0x000316f6) cell_large_graphic_popup_pane

0x39e8,	// (0x0003170e) cell_large_graphic_popup_pane_g1_ParamLimits

0x39e8,	// (0x0003170e) cell_large_graphic_popup_pane_g1

0xac18,	// (0x0003893e) cell_large_graphic_popup_pane_g2_ParamLimits

0xac18,	// (0x0003893e) cell_large_graphic_popup_pane_g2

0xac24,	// (0x0003894a) cell_large_graphic_popup_pane_g3_ParamLimits

0xac24,	// (0x0003894a) cell_large_graphic_popup_pane_g3

0xac31,	// (0x00038957) cell_large_graphic_popup_pane_g4_ParamLimits

0xac31,	// (0x00038957) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003d09d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003d09d) cell_large_graphic_popup_pane_g

0xac41,	// (0x00038967) grid_highlight_pane_cp010

0xa2de,	// (0x00038004) bg_popup_call_pane_g1

0xac4b,	// (0x00038971) list_single_graphic_popup_conf_pane_ParamLimits

0xac4b,	// (0x00038971) list_single_graphic_popup_conf_pane

0xac5e,	// (0x00038984) list_highlight_pane_cp01

0xac67,	// (0x0003898d) list_single_graphic_popup_conf_pane_g1

0xac6f,	// (0x00038995) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003d0a6) list_single_graphic_popup_conf_pane_g

0xac77,	// (0x0003899d) list_single_graphic_popup_conf_pane_t1

0xac85,	// (0x000389ab) linegrid_cams_pane_g1

0x39f4,	// (0x0003171a) linegrid_cams_pane_g2

0xa434,	// (0x0003815a) linegrid_cams_pane_g3

0xac8e,	// (0x000389b4) linegrid_cams_pane_g4

0x39fd,	// (0x00031723) linegrid_cams_pane_g5

0x3a06,	// (0x0003172c) linegrid_cams_pane_g6

0xa43d,	// (0x00038163) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003d0ab) linegrid_cams_pane_g

0xac97,	// (0x000389bd) popup_clock_analogue_window

0xac97,	// (0x000389bd) popup_clock_digital_window

0x9f69,	// (0x00037c8f) popup_phob_thumbnail_window

0xa2de,	// (0x00038004) call_video_uplink_pane_g1

0xaca0,	// (0x000389c6) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003d0ba) call_video_uplink_pane_g

0xaca8,	// (0x000389ce) video_uplink_pane

0xacb0,	// (0x000389d6) mce_image_pane_g1

0x3a11,	// (0x00031737) mce_image_pane_g2

0x3a1b,	// (0x00031741) mce_image_pane_g3

0x3a23,	// (0x00031749) mce_image_pane_g4

0x3a2b,	// (0x00031751) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003d0bf) mce_image_pane_g

0xacba,	// (0x000389e0) control_top_pane_stacon_cp01_ParamLimits

0xacba,	// (0x000389e0) control_top_pane_stacon_cp01

0xacce,	// (0x000389f4) uni_indicator_pane_stacon_cp01_ParamLimits

0xacce,	// (0x000389f4) uni_indicator_pane_stacon_cp01

0xacdf,	// (0x00038a05) bg_popup_sub_pane_cp03

0xace9,	// (0x00038a0f) chi_dic_find_pane

0x3a33,	// (0x00031759) listscroll_chi_dic_pane

0xacf1,	// (0x00038a17) main_pane_chidic_g1

0xacf9,	// (0x00038a1f) chi_dic_find_pane_t1

0xad07,	// (0x00038a2d) find_chidic_pane

0xad10,	// (0x00038a36) chi_dic_list_pane_ParamLimits

0xad10,	// (0x00038a36) chi_dic_list_pane

0xad21,	// (0x00038a47) scroll_pane_cp020

0xad29,	// (0x00038a4f) find_chidic_pane_t1

0x9f69,	// (0x00037c8f) input_focus_pane_cp06

0x3a47,	// (0x0003176d) list_chi_dic_pane_ParamLimits

0x3a47,	// (0x0003176d) list_chi_dic_pane

0x3a59,	// (0x0003177f) list_chi_dic_pane_t1_ParamLimits

0x3a59,	// (0x0003177f) list_chi_dic_pane_t1

0x9f69,	// (0x00037c8f) list_highlight_pane_cp020

0xad38,	// (0x00038a5e) bg_cale_heading_pane_g1

0x3a6c,	// (0x00031792) bg_cale_heading_pane_g2

0x3a74,	// (0x0003179a) bg_cale_heading_pane_g3

0x3a7c,	// (0x000317a2) bg_cale_heading_pane_g4

0x3a86,	// (0x000317ac) bg_cale_heading_pane_g5

0x3a90,	// (0x000317b6) bg_cale_heading_pane_g6

0x3a98,	// (0x000317be) bg_cale_heading_pane_g7

0x3aa0,	// (0x000317c6) bg_cale_heading_pane_g8

0x3aaa,	// (0x000317d0) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003d0ca) bg_cale_heading_pane_g

0xad38,	// (0x00038a5e) bg_cale_side_pane_g1

0x3ab4,	// (0x000317da) bg_cale_side_pane_g2

0x3abc,	// (0x000317e2) bg_cale_side_pane_g3

0x3ac4,	// (0x000317ea) bg_cale_side_pane_g4

0x3acc,	// (0x000317f2) bg_cale_side_pane_g5

0x3ad4,	// (0x000317fa) bg_cale_side_pane_g6

0x3adc,	// (0x00031802) bg_cale_side_pane_g7

0x3ae4,	// (0x0003180a) bg_cale_side_pane_g8

0x3aec,	// (0x00031812) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003d0dd) bg_cale_side_pane_g

0x3af4,	// (0x0003181a) popup_call_status_window_ParamLimits

0x3af4,	// (0x0003181a) popup_call_status_window

0xad40,	// (0x00038a66) stacon_top_pane

0xad48,	// (0x00038a6e) status_pane_ParamLimits

0xad48,	// (0x00038a6e) status_pane

0xad5d,	// (0x00038a83) status_small_pane

0xad65,	// (0x00038a8b) control_pane

0x9f69,	// (0x00037c8f) stacon_bottom_pane

0xad6d,	// (0x00038a93) list_single_mce_smart_pane_t1_ParamLimits

0xad6d,	// (0x00038a93) list_single_mce_smart_pane_t1

0xad80,	// (0x00038aa6) list_single_mce_smart_pane_t2_ParamLimits

0xad80,	// (0x00038aa6) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003d0f0) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003d0f0) list_single_mce_smart_pane_t

0x3b3d,	// (0x00031863) compass_pane

0x3b46,	// (0x0003186c) main_location2_pane_t1

0x3b58,	// (0x0003187e) main_location2_pane_t2

0x3b6a,	// (0x00031890) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003d0f5) main_location2_pane_t

0xad9f,	// (0x00038ac5) compass_pane_g1_ParamLimits

0xad9f,	// (0x00038ac5) compass_pane_g1

0x3bae,	// (0x000318d4) compass_pane_t1

0x3bbd,	// (0x000318e3) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003d0fe) compass_pane_t

0x3c04,	// (0x0003192a) text_secondary_cp61

0xae1b,	// (0x00038b41) navi_pane_cams_g5

0xae97,	// (0x00038bbd) navi_pane_im_t1

0xaea5,	// (0x00038bcb) navi_pane_mp_g1_ParamLimits

0xaea5,	// (0x00038bcb) navi_pane_mp_g1

0xaeb9,	// (0x00038bdf) navi_pane_mp_g2_ParamLimits

0xaeb9,	// (0x00038bdf) navi_pane_mp_g2

0xaec5,	// (0x00038beb) navi_pane_mp_g3_ParamLimits

0xaec5,	// (0x00038beb) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003d112) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003d112) navi_pane_mp_g

0xaed1,	// (0x00038bf7) navi_pane_mp_t1

0xaedf,	// (0x00038c05) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003d119) navi_pane_mp_t

0xaf4a,	// (0x00038c70) navi_pane_vt_g1

0xaed1,	// (0x00038bf7) navi_pane_vt_t1

0xaf52,	// (0x00038c78) navi_slider_pane

0xa44e,	// (0x00038174) zooming_pane

0xaf62,	// (0x00038c88) navi_slider_pane_g1

0x3c55,	// (0x0003197b) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003d120) navi_slider_pane_g

0xaf86,	// (0x00038cac) aid_levels_zoom

0xaf8e,	// (0x00038cb4) zooming_pane_g1

0xaf96,	// (0x00038cbc) zooming_pane_g2

0xaf96,	// (0x00038cbc) zooming_pane_g3

0x0002,

0xf409,	// (0x0003d12f) zooming_pane_g

0xaf9e,	// (0x00038cc4) level_10_zoom

0xafa7,	// (0x00038ccd) level_11_zoom

0xafb0,	// (0x00038cd6) level_1_zoom

0xafb9,	// (0x00038cdf) level_2_zoom

0xafc2,	// (0x00038ce8) level_3_zoom

0xafcb,	// (0x00038cf1) level_4_zoom

0xafd4,	// (0x00038cfa) level_5_zoom

0xafdd,	// (0x00038d03) level_6_zoom

0xafe6,	// (0x00038d0c) level_7_zoom

0xafef,	// (0x00038d15) level_8_zoom

0xaff8,	// (0x00038d1e) level_9_zoom

0xb009,	// (0x00038d2f) popup_phob_thumbnail_window_g1

0xb011,	// (0x00038d37) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003d136) popup_phob_thumbnail_window_g

0xc37c,	// (0x0003a0a2) level_1_location

0xc384,	// (0x0003a0aa) level_2_location

0xc38c,	// (0x0003a0b2) level_3_location

0xc394,	// (0x0003a0ba) level_4_location

0xa44e,	// (0x00038174) level_5_location

0x3c67,	// (0x0003198d) mce_icon_pane_g1

0x3c71,	// (0x00031997) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003d13b) mce_icon_pane_g

0x3c79,	// (0x0003199f) main_mup_pane_g1_ParamLimits

0x3c79,	// (0x0003199f) main_mup_pane_g1

0x3c8f,	// (0x000319b5) main_mup_pane_g2_ParamLimits

0x3c8f,	// (0x000319b5) main_mup_pane_g2

0x3ca7,	// (0x000319cd) main_mup_pane_g3_ParamLimits

0x3ca7,	// (0x000319cd) main_mup_pane_g3

0x3cbf,	// (0x000319e5) main_mup_pane_g4_ParamLimits

0x3cbf,	// (0x000319e5) main_mup_pane_g4

0x3cd7,	// (0x000319fd) main_mup_pane_g5_ParamLimits

0x3cd7,	// (0x000319fd) main_mup_pane_g5

0x3cf3,	// (0x00031a19) main_mup_pane_g6_ParamLimits

0x3cf3,	// (0x00031a19) main_mup_pane_g6

0x3d0b,	// (0x00031a31) main_mup_pane_g7_ParamLimits

0x3d0b,	// (0x00031a31) main_mup_pane_g7

0x3d23,	// (0x00031a49) main_mup_pane_g8_ParamLimits

0x3d23,	// (0x00031a49) main_mup_pane_g8

0x3d3d,	// (0x00031a63) main_mup_pane_g9_ParamLimits

0x3d3d,	// (0x00031a63) main_mup_pane_g9

0x3d57,	// (0x00031a7d) main_mup_pane_g10_ParamLimits

0x3d57,	// (0x00031a7d) main_mup_pane_g10

0x3d71,	// (0x00031a97) main_mup_pane_g11_ParamLimits

0x3d71,	// (0x00031a97) main_mup_pane_g11

0x3d85,	// (0x00031aab) main_mup_pane_g12_ParamLimits

0x3d85,	// (0x00031aab) main_mup_pane_g12

0x3d9b,	// (0x00031ac1) main_mup_pane_g13_ParamLimits

0x3d9b,	// (0x00031ac1) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003d140) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003d140) main_mup_pane_g

0x3daf,	// (0x00031ad5) main_mup_pane_t1_ParamLimits

0x3daf,	// (0x00031ad5) main_mup_pane_t1

0x3dc9,	// (0x00031aef) main_mup_pane_t2_ParamLimits

0x3dc9,	// (0x00031aef) main_mup_pane_t2

0x3de1,	// (0x00031b07) main_mup_pane_t3_ParamLimits

0x3de1,	// (0x00031b07) main_mup_pane_t3

0x3df9,	// (0x00031b1f) main_mup_pane_t4_ParamLimits

0x3df9,	// (0x00031b1f) main_mup_pane_t4

0x3e17,	// (0x00031b3d) main_mup_pane_t5_ParamLimits

0x3e17,	// (0x00031b3d) main_mup_pane_t5

0x3e2c,	// (0x00031b52) main_mup_pane_t6_ParamLimits

0x3e2c,	// (0x00031b52) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003d15b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003d15b) main_mup_pane_t

0x3e3e,	// (0x00031b64) mup_progress_pane_ParamLimits

0x3e3e,	// (0x00031b64) mup_progress_pane

0x3e4a,	// (0x00031b70) mup_visualizer_pane_ParamLimits

0x3e4a,	// (0x00031b70) mup_visualizer_pane

0x3e7a,	// (0x00031ba0) mup_volume_pane_ParamLimits

0x3e7a,	// (0x00031ba0) mup_volume_pane

0xb019,	// (0x00038d3f) mup_visualizer_pane_g1_ParamLimits

0xb019,	// (0x00038d3f) mup_visualizer_pane_g1

0xb019,	// (0x00038d3f) mup_visualizer_pane_g2_ParamLimits

0xb019,	// (0x00038d3f) mup_visualizer_pane_g2

0xad9f,	// (0x00038ac5) mup_visualizer_pane_g3_ParamLimits

0xad9f,	// (0x00038ac5) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d168) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d168) mup_visualizer_pane_g

0xa2de,	// (0x00038004) mup_volume_pane_g1

0xb02f,	// (0x00038d55) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d16f) mup_volume_pane_g

0xa2de,	// (0x00038004) mup_progress_pane_g1

0xb038,	// (0x00038d5e) mup_progress_pane_g2

0xb041,	// (0x00038d67) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d174) mup_progress_pane_g

0x9f69,	// (0x00037c8f) bg_popup_window_pane_cp05

0xb04a,	// (0x00038d70) heading_pane_cp02_ParamLimits

0xb04a,	// (0x00038d70) heading_pane_cp02

0xb064,	// (0x00038d8a) list_popup_blid_pane

0xb06c,	// (0x00038d92) list_blid_sat_info_pane_ParamLimits

0xb06c,	// (0x00038d92) list_blid_sat_info_pane

0xb07f,	// (0x00038da5) list_blid_sat_info_pane_g1

0xb087,	// (0x00038dad) list_blid_sat_info_pane_t1

0x3f90,	// (0x00031cb6) mup_equalizer_pane_ParamLimits

0x3f90,	// (0x00031cb6) mup_equalizer_pane

0x3fa9,	// (0x00031ccf) mup_equalizer_pane_cp1_ParamLimits

0x3fa9,	// (0x00031ccf) mup_equalizer_pane_cp1

0x3fc6,	// (0x00031cec) mup_equalizer_pane_cp2_ParamLimits

0x3fc6,	// (0x00031cec) mup_equalizer_pane_cp2

0x3fe3,	// (0x00031d09) mup_equalizer_pane_cp3_ParamLimits

0x3fe3,	// (0x00031d09) mup_equalizer_pane_cp3

0x4004,	// (0x00031d2a) mup_equalizer_pane_cp4_ParamLimits

0x4004,	// (0x00031d2a) mup_equalizer_pane_cp4

0x4025,	// (0x00031d4b) mup_equalizer_pane_cp5

0x4039,	// (0x00031d5f) mup_equalizer_pane_cp6

0x404d,	// (0x00031d73) mup_equalizer_pane_cp7

0xc29a,	// (0x00039fc0) bg_popup_call_poc_act_pane_g9

0xc2a2,	// (0x00039fc8) bg_popup_call_poc_act_pane_g10

0xc2aa,	// (0x00039fd0) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1c4,	// (0x00037eea) mup_scale_pane

0xa2de,	// (0x00038004) mup_scale_pane_g1

0xb095,	// (0x00038dbb) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d190) mup_scale_pane_g

0xb0b9,	// (0x00038ddf) msg_data_pane

0xb0c1,	// (0x00038de7) scroll_pane_cp017

0x4073,	// (0x00031d99) bg_list_pane_cp04_ParamLimits

0x4073,	// (0x00031d99) bg_list_pane_cp04

0xb0d1,	// (0x00038df7) msg_data_pane_g1

0x408b,	// (0x00031db1) msg_data_pane_g2

0x4095,	// (0x00031dbb) msg_data_pane_g3

0x409d,	// (0x00031dc3) msg_data_pane_g4

0x40a5,	// (0x00031dcb) msg_data_pane_g5

0x40ad,	// (0x00031dd3) msg_data_pane_g6

0x40b5,	// (0x00031ddb) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d19f) msg_data_pane_g

0x40bd,	// (0x00031de3) msg_text_pane_ParamLimits

0x40bd,	// (0x00031de3) msg_text_pane

0x40e1,	// (0x00031e07) qrid_highlight_pane_cp011_ParamLimits

0x40e1,	// (0x00031e07) qrid_highlight_pane_cp011

0x9f69,	// (0x00037c8f) msg_body_pane

0x9f69,	// (0x00037c8f) msg_header_pane

0xb0e2,	// (0x00038e08) input_focus_pane_cp07

0xb0f7,	// (0x00038e1d) msg_header_pane_t1_ParamLimits

0xb0f7,	// (0x00038e1d) msg_header_pane_t1

0xb109,	// (0x00038e2f) msg_header_pane_t2_ParamLimits

0xb109,	// (0x00038e2f) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d1b3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d1b3) msg_header_pane_t

0xb11b,	// (0x00038e41) msg_body_pane_g1

0xb123,	// (0x00038e49) msg_body_pane_t1_ParamLimits

0xb123,	// (0x00038e49) msg_body_pane_t1

0xb154,	// (0x00038e7a) msg_body_pane_t2_ParamLimits

0xb154,	// (0x00038e7a) msg_body_pane_t2

0xb166,	// (0x00038e8c) msg_body_pane_t3_ParamLimits

0xb166,	// (0x00038e8c) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d1b8) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d1b8) msg_body_pane_t

0x05d7,	// (0x0002e2fd) main_viewer_pane_g1_ParamLimits

0x05d7,	// (0x0002e2fd) main_viewer_pane_g1

0x05e5,	// (0x0002e30b) main_viewer_pane_g2_ParamLimits

0x05e5,	// (0x0002e30b) main_viewer_pane_g2

0x413b,	// (0x00031e61) main_viewer_pane_g3_ParamLimits

0x413b,	// (0x00031e61) main_viewer_pane_g3

0x414a,	// (0x00031e70) main_viewer_pane_g4_ParamLimits

0x414a,	// (0x00031e70) main_viewer_pane_g4

0x4159,	// (0x00031e7f) main_viewer_pane_g5_ParamLimits

0x4159,	// (0x00031e7f) main_viewer_pane_g5

0x4159,	// (0x00031e7f) main_viewer_pane_g7_ParamLimits

0x4159,	// (0x00031e7f) main_viewer_pane_g7

0xaa16,	// (0x0003873c) main_viewer_pane_g8_ParamLimits

0xaa16,	// (0x0003873c) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d1c8) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d1c8) main_viewer_pane_g

0xb178,	// (0x00038e9e) viewer_content_pane_ParamLimits

0xb178,	// (0x00038e9e) viewer_content_pane

0x41a4,	// (0x00031eca) main_postcard_pane_g1_ParamLimits

0x41a4,	// (0x00031eca) main_postcard_pane_g1

0x41ba,	// (0x00031ee0) main_postcard_pane_g2_ParamLimits

0x41ba,	// (0x00031ee0) main_postcard_pane_g2

0x41d0,	// (0x00031ef6) main_postcard_pane_g3_ParamLimits

0x41d0,	// (0x00031ef6) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d1d9) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d1d9) main_postcard_pane_g

0x41e7,	// (0x00031f0d) main_postcard_pane_g4

0xc47c,	// (0x0003a1a2) smil_status_volume_pane_g2

0x422a,	// (0x00031f50) postcard_pane_ParamLimits

0x422a,	// (0x00031f50) postcard_pane

0xb186,	// (0x00038eac) postcard_pane_g1_ParamLimits

0xb186,	// (0x00038eac) postcard_pane_g1

0x426c,	// (0x00031f92) postcard_pane_g2_ParamLimits

0x426c,	// (0x00031f92) postcard_pane_g2

0x4278,	// (0x00031f9e) postcard_pane_g3_ParamLimits

0x4278,	// (0x00031f9e) postcard_pane_g3

0xb194,	// (0x00038eba) postcard_pane_g4_ParamLimits

0xb194,	// (0x00038eba) postcard_pane_g4

0x4284,	// (0x00031faa) postcard_pane_g5_ParamLimits

0x4284,	// (0x00031faa) postcard_pane_g5

0x4299,	// (0x00031fbf) postcard_pane_g6_ParamLimits

0x4299,	// (0x00031fbf) postcard_pane_g6

0xb186,	// (0x00038eac) postcard_pane_g7_ParamLimits

0xb186,	// (0x00038eac) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d1e6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d1e6) postcard_pane_g

0x42ad,	// (0x00031fd3) main_mp2_pane_g1_ParamLimits

0x42ad,	// (0x00031fd3) main_mp2_pane_g1

0x42b9,	// (0x00031fdf) main_mp2_pane_g2_ParamLimits

0x42b9,	// (0x00031fdf) main_mp2_pane_g2

0x42c5,	// (0x00031feb) main_mp2_pane_g3_ParamLimits

0x42c5,	// (0x00031feb) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d1f5) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d1f5) main_mp2_pane_g

0x42d1,	// (0x00031ff7) main_mp2_pane_t1_ParamLimits

0x42d1,	// (0x00031ff7) main_mp2_pane_t1

0x42e6,	// (0x0003200c) main_mp2_pane_t2_ParamLimits

0x42e6,	// (0x0003200c) main_mp2_pane_t2

0x42f8,	// (0x0003201e) main_mp2_pane_t3_ParamLimits

0x42f8,	// (0x0003201e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d1fc) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d1fc) main_mp2_pane_t

0xb1a2,	// (0x00038ec8) pec_content_pane_ParamLimits

0xb1a2,	// (0x00038ec8) pec_content_pane

0xa5f7,	// (0x0003831d) scroll_pane_cp015

0xb1b4,	// (0x00038eda) pec_attribute_pane_ParamLimits

0xb1b4,	// (0x00038eda) pec_attribute_pane

0x430a,	// (0x00032030) pec_content_pane_g1_ParamLimits

0x430a,	// (0x00032030) pec_content_pane_g1

0xb1c4,	// (0x00038eea) pec_content_pane_t1_ParamLimits

0xb1c4,	// (0x00038eea) pec_content_pane_t1

0xb1d6,	// (0x00038efc) pec_content_pane_t2_ParamLimits

0xb1d6,	// (0x00038efc) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d203) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d203) pec_content_pane_t

0x4316,	// (0x0003203c) list_single_graphic_pane_cp01_ParamLimits

0x4316,	// (0x0003203c) list_single_graphic_pane_cp01

0xa1c4,	// (0x00037eea) bg_popup_sub_pane_cp04

0xb1e8,	// (0x00038f0e) popup_mup_playback_window_g1

0xb1f4,	// (0x00038f1a) popup_mup_playback_window_t1

0xb209,	// (0x00038f2f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d208) popup_mup_playback_window_t

0xb240,	// (0x00038f66) main_image_pane_g1_ParamLimits

0xb240,	// (0x00038f66) main_image_pane_g1

0xb283,	// (0x00038fa9) scroll_pane_cp018_ParamLimits

0xb283,	// (0x00038fa9) scroll_pane_cp018

0xb29b,	// (0x00038fc1) scroll_pane_cp016_ParamLimits

0xb29b,	// (0x00038fc1) scroll_pane_cp016

0x43e3,	// (0x00032109) smil2_image_pane_ParamLimits

0x43e3,	// (0x00032109) smil2_image_pane

0x4413,	// (0x00032139) smil2_root_pane_ParamLimits

0x4413,	// (0x00032139) smil2_root_pane

0x444b,	// (0x00032171) smil2_text_pane_ParamLimits

0x444b,	// (0x00032171) smil2_text_pane

0x9f69,	// (0x00037c8f) bg_list_pane_cp06

0xb2d7,	// (0x00038ffd) grid_radio_pane

0x9f69,	// (0x00037c8f) bg_popup_window_pane_cp06

0xb2df,	// (0x00039005) main_fmradio_pane_t1

0xabee,	// (0x00038914) heading_pane_cp04

0xb2ed,	// (0x00039013) main_fmradio_pane_t2

0xc2b2,	// (0x00039fd8) popup_cale_lunar_info_window_g1

0xb2fb,	// (0x00039021) main_fmradio_pane_t3

0xc2ba,	// (0x00039fe0) popup_cale_lunar_info_window_g2

0xb309,	// (0x0003902f) main_fmradio_pane_t4

0x0001,

0xb317,	// (0x0003903d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003d2e3) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d21d) main_fmradio_pane_t

0xb325,	// (0x0003904b) wait_bar_pane_cp03

0xb32d,	// (0x00039053) cell_fmradio_pane_ParamLimits

0xb32d,	// (0x00039053) cell_fmradio_pane

0xb186,	// (0x00038eac) cell_fmradio_pane_g1_ParamLimits

0xb186,	// (0x00038eac) cell_fmradio_pane_g1

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp011

0xb340,	// (0x00039066) poc_content_pane_ParamLimits

0xb340,	// (0x00039066) poc_content_pane

0xb352,	// (0x00039078) scroll_pane_cp019

0x44cb,	// (0x000321f1) popup_call_poc_act_window_ParamLimits

0x44cb,	// (0x000321f1) popup_call_poc_act_window

0x44ef,	// (0x00032215) popup_call_poc_inact_window_ParamLimits

0x44ef,	// (0x00032215) popup_call_poc_inact_window

0xf594,	// (0x0003d2ba) bg_popup_call_poc_act_pane_g

0xc22a,	// (0x00039f50) bg_popup_call_poc_inact_pane_g1

0xc232,	// (0x00039f58) bg_popup_call_poc_inact_pane_g2

0xb35a,	// (0x00039080) popup_call_poc_act_window_g2

0xc23a,	// (0x00039f60) bg_popup_call_poc_inact_pane_g3

0xc242,	// (0x00039f68) bg_popup_call_poc_inact_pane_g4

0xc24a,	// (0x00039f70) bg_popup_call_poc_inact_pane_g5

0xb362,	// (0x00039088) popup_call_poc_act_window_t1_ParamLimits

0xb362,	// (0x00039088) popup_call_poc_act_window_t1

0xb38a,	// (0x000390b0) popup_call_poc_act_window_t2_ParamLimits

0xb38a,	// (0x000390b0) popup_call_poc_act_window_t2

0xb3b2,	// (0x000390d8) popup_call_poc_act_window_t3_ParamLimits

0xb3b2,	// (0x000390d8) popup_call_poc_act_window_t3

0xb3da,	// (0x00039100) popup_call_poc_act_window_t4_ParamLimits

0xb3da,	// (0x00039100) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d228) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d228) popup_call_poc_act_window_t

0xc252,	// (0x00039f78) bg_popup_call_poc_inact_pane_g6

0xc25a,	// (0x00039f80) bg_popup_call_poc_inact_pane_g7

0xc262,	// (0x00039f88) bg_popup_call_poc_inact_pane_g8

0xb3ec,	// (0x00039112) popup_call_poc_inact_window_g2

0xc26a,	// (0x00039f90) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003d2a7) bg_popup_call_poc_inact_pane_g

0xb3f4,	// (0x0003911a) popup_call_poc_inact_window_t1_ParamLimits

0xb3f4,	// (0x0003911a) popup_call_poc_inact_window_t1

0xb409,	// (0x0003912f) popup_call_poc_inact_window_t2_ParamLimits

0xb409,	// (0x0003912f) popup_call_poc_inact_window_t2

0xb41e,	// (0x00039144) popup_call_poc_inact_window_t3_ParamLimits

0xb41e,	// (0x00039144) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d231) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d231) popup_call_poc_inact_window_t

0xc3ef,	// (0x0003a115) context_pane_ParamLimits

0x4ac8,	// (0x000327ee) signal_pane_ParamLimits

0xa44e,	// (0x00038174) main_call2_pane

0x4a57,	// (0x0003277d) popup_phob_thumbnail2_window_ParamLimits

0x4a57,	// (0x0003277d) popup_phob_thumbnail2_window

0x4105,	// (0x00031e2b) aid_hotspot_pointer_arrow_pane

0x410d,	// (0x00031e33) aid_hotspot_pointer_hand_pane

0x4838,	// (0x0003255e) phob_pre_status_pane_g5

0x2341,	// (0x00030067) cams_zoom_pane_ParamLimits

0x2350,	// (0x00030076) image_vga_pane_ParamLimits

0x236a,	// (0x00030090) main_camera_pane_g1_ParamLimits

0x237c,	// (0x000300a2) main_camera_pane_g2_ParamLimits

0x238c,	// (0x000300b2) main_camera_pane_g3_ParamLimits

0x239c,	// (0x000300c2) main_camera_pane_g4_ParamLimits

0x23ac,	// (0x000300d2) main_camera_pane_g5_ParamLimits

0x23bc,	// (0x000300e2) main_camera_pane_g6_ParamLimits

0x23ce,	// (0x000300f4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003cf30) main_camera_pane_g_ParamLimits

0x23de,	// (0x00030104) main_camera_pane_t1_ParamLimits

0x23f4,	// (0x0003011a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003cf41) main_camera_pane_t_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_preview_window_pane_cp01

0xb433,	// (0x00039159) popup_phob_thumbnail2_window_g1_ParamLimits

0xb433,	// (0x00039159) popup_phob_thumbnail2_window_g1

0x9f69,	// (0x00037c8f) call2_cli_visual_pane

0x4523,	// (0x00032249) popup_call2_audio_conf_window_ParamLimits

0x4523,	// (0x00032249) popup_call2_audio_conf_window

0x4543,	// (0x00032269) popup_call2_audio_first_window_ParamLimits

0x4543,	// (0x00032269) popup_call2_audio_first_window

0x45d9,	// (0x000322ff) popup_call2_audio_in_window_ParamLimits

0x45d9,	// (0x000322ff) popup_call2_audio_in_window

0x4621,	// (0x00032347) popup_call2_audio_out_window_ParamLimits

0x4621,	// (0x00032347) popup_call2_audio_out_window

0x468b,	// (0x000323b1) popup_call2_audio_second_window_ParamLimits

0x468b,	// (0x000323b1) popup_call2_audio_second_window

0x46f1,	// (0x00032417) popup_call2_audio_wait_window_ParamLimits

0x46f1,	// (0x00032417) popup_call2_audio_wait_window

0x9f69,	// (0x00037c8f) bg_popup_call2_act_pane_cp03

0xa1a6,	// (0x00037ecc) list_conf_pane_cp

0xb43f,	// (0x00039165) popup_call2_audio_conf_window_t1

0xac4b,	// (0x00038971) list_single_graphic_popup_conf2_pane_ParamLimits

0xac4b,	// (0x00038971) list_single_graphic_popup_conf2_pane

0xac5e,	// (0x00038984) list_highlight_pane_cp04

0xb44d,	// (0x00039173) list_single_graphic_popup_conf2_pane_g1

0xac6f,	// (0x00038995) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d238) list_single_graphic_popup_conf2_pane_g

0xb457,	// (0x0003917d) list_single_graphic_popup_conf2_pane_t1

0xb465,	// (0x0003918b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb465,	// (0x0003918b) bg_popup_call2_act_pane_cp01

0xb4ef,	// (0x00039215) call_type_pane_cp05_ParamLimits

0xb4ef,	// (0x00039215) call_type_pane_cp05

0xb543,	// (0x00039269) popup_call2_audio_second_window_g1_ParamLimits

0xb543,	// (0x00039269) popup_call2_audio_second_window_g1

0xb597,	// (0x000392bd) popup_call2_audio_second_window_g2_ParamLimits

0xb597,	// (0x000392bd) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d23d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d23d) popup_call2_audio_second_window_g

0xb5fc,	// (0x00039322) popup_call2_audio_second_window_t1_ParamLimits

0xb5fc,	// (0x00039322) popup_call2_audio_second_window_t1

0xb6b7,	// (0x000393dd) popup_call2_audio_second_window_t2_ParamLimits

0xb6b7,	// (0x000393dd) popup_call2_audio_second_window_t2

0xb70a,	// (0x00039430) popup_call2_audio_second_window_t3_ParamLimits

0xb70a,	// (0x00039430) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d244) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d244) popup_call2_audio_second_window_t

0x9f69,	// (0x00037c8f) bg_popup_call2_in_pane_cp02

0x9f73,	// (0x00037c99) call_type_pane_cp04

0x9f7b,	// (0x00037ca1) popup_call2_audio_wait_window_g1

0x9f83,	// (0x00037ca9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ce1f) popup_call2_audio_wait_window_g

0x9f8b,	// (0x00037cb1) popup_call2_audio_wait_window_t3

0xb7fd,	// (0x00039523) bg_popup_call2_act_pane_ParamLimits

0xb7fd,	// (0x00039523) bg_popup_call2_act_pane

0xb8bd,	// (0x000395e3) call_type_pane_cp03_ParamLimits

0xb8bd,	// (0x000395e3) call_type_pane_cp03

0xb921,	// (0x00039647) popup_call2_audio_first_window_g1_ParamLimits

0xb921,	// (0x00039647) popup_call2_audio_first_window_g1

0xb991,	// (0x000396b7) popup_call2_audio_first_window_g2_ParamLimits

0xb991,	// (0x000396b7) popup_call2_audio_first_window_g2

0xb019,	// (0x00038d3f) popup_call2_audio_first_window_g3_ParamLimits

0xb019,	// (0x00038d3f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d24d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d24d) popup_call2_audio_first_window_g

0xba6f,	// (0x00039795) popup_call2_audio_first_window_t1_ParamLimits

0xba6f,	// (0x00039795) popup_call2_audio_first_window_t1

0xbb72,	// (0x00039898) popup_call2_audio_first_window_t4_ParamLimits

0xbb72,	// (0x00039898) popup_call2_audio_first_window_t4

0xbc55,	// (0x0003997b) popup_call2_audio_first_window_t5_ParamLimits

0xbc55,	// (0x0003997b) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d258) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d258) popup_call2_audio_first_window_t

0xa1bc,	// (0x00037ee2) bg_popup_call2_act_pane_g1

0xc2c2,	// (0x00039fe8) popup_cale_lunar_info_window_t1

0xc2d0,	// (0x00039ff6) popup_cale_lunar_info_window_t2

0xc2de,	// (0x0003a004) popup_cale_lunar_info_window_t3

0x9f69,	// (0x00037c8f) bg_popup_call2_bubble_pane

0xbd56,	// (0x00039a7c) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd56,	// (0x00039a7c) bg_popup_call2_in_pane_cp01

0x9c45,	// (0x0003796b) call_type_pane_cp02

0xbd9e,	// (0x00039ac4) popup_call2_audio_out_window_g1_ParamLimits

0xbd9e,	// (0x00039ac4) popup_call2_audio_out_window_g1

0xbdca,	// (0x00039af0) popup_call2_audio_out_window_g2_ParamLimits

0xbdca,	// (0x00039af0) popup_call2_audio_out_window_g2

0xbdf2,	// (0x00039b18) popup_call2_audio_out_window_g3_ParamLimits

0xbdf2,	// (0x00039b18) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d261) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d261) popup_call2_audio_out_window_g

0xbe2d,	// (0x00039b53) popup_call2_audio_out_window_t1_ParamLimits

0xbe2d,	// (0x00039b53) popup_call2_audio_out_window_t1

0xbe8c,	// (0x00039bb2) popup_call2_audio_out_window_t2_ParamLimits

0xbe8c,	// (0x00039bb2) popup_call2_audio_out_window_t2

0xbee0,	// (0x00039c06) popup_call2_audio_out_window_t3_ParamLimits

0xbee0,	// (0x00039c06) popup_call2_audio_out_window_t3

0xbef6,	// (0x00039c1c) popup_call2_audio_out_window_t4_ParamLimits

0xbef6,	// (0x00039c1c) popup_call2_audio_out_window_t4

0xbf0c,	// (0x00039c32) popup_call2_audio_out_window_t5_ParamLimits

0xbf0c,	// (0x00039c32) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d26a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d26a) popup_call2_audio_out_window_t

0xbf70,	// (0x00039c96) bg_popup_call2_in_pane_ParamLimits

0xbf70,	// (0x00039c96) bg_popup_call2_in_pane

0xbfcc,	// (0x00039cf2) popup_call2_audio_in_window_g1_ParamLimits

0xbfcc,	// (0x00039cf2) popup_call2_audio_in_window_g1

0xc004,	// (0x00039d2a) popup_call2_audio_in_window_g2_ParamLimits

0xc004,	// (0x00039d2a) popup_call2_audio_in_window_g2

0xc03c,	// (0x00039d62) popup_call2_audio_in_window_g3_ParamLimits

0xc03c,	// (0x00039d62) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d277) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d277) popup_call2_audio_in_window_g

0xc094,	// (0x00039dba) popup_call2_audio_in_window_t1_ParamLimits

0xc094,	// (0x00039dba) popup_call2_audio_in_window_t1

0xc114,	// (0x00039e3a) popup_call2_audio_in_window_t2_ParamLimits

0xc114,	// (0x00039e3a) popup_call2_audio_in_window_t2

0xc194,	// (0x00039eba) popup_call2_audio_in_window_t3_ParamLimits

0xc194,	// (0x00039eba) popup_call2_audio_in_window_t3

0xc1ae,	// (0x00039ed4) popup_call2_audio_in_window_t4_ParamLimits

0xc1ae,	// (0x00039ed4) popup_call2_audio_in_window_t4

0xc1c0,	// (0x00039ee6) popup_call2_audio_in_window_t5_ParamLimits

0xc1c0,	// (0x00039ee6) popup_call2_audio_in_window_t5

0xc1d5,	// (0x00039efb) popup_call2_audio_in_window_t6_ParamLimits

0xc1d5,	// (0x00039efb) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d280) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d280) popup_call2_audio_in_window_t

0xa1bc,	// (0x00037ee2) bg_popup_call2_in_pane_g1

0xc2ec,	// (0x0003a012) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003d2e8) popup_cale_lunar_info_window_t

0xa1c4,	// (0x00037eea) bg_popup_call2_rect_pane_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_call2_rect_pane

0x9f69,	// (0x00037c8f) call2_cli_visual_graphic_pane

0x9f69,	// (0x00037c8f) call2_cli_visual_text_pane

0x4b55,	// (0x0003287b) smil_status_volume_pane_g3

0x0002,

0xa2de,	// (0x00038004) call2_cli_visual_graphic_pane_g1

0xa2de,	// (0x00038004) call2_cli_visual_graphic_pane_g2

0xa2de,	// (0x00038004) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d28d) call2_cli_visual_graphic_pane_g

0xc1ea,	// (0x00039f10) bg_popup_call2_rect_pane_g1

0xa36a,	// (0x00038090) bg_popup_call2_rect_pane_g2

0xc1f2,	// (0x00039f18) bg_popup_call2_rect_pane_g3

0xc1fa,	// (0x00039f20) bg_popup_call2_rect_pane_g4

0xc202,	// (0x00039f28) bg_popup_call2_rect_pane_g5

0xc20a,	// (0x00039f30) bg_popup_call2_rect_pane_g6

0xc212,	// (0x00039f38) bg_popup_call2_rect_pane_g7

0xc21a,	// (0x00039f40) bg_popup_call2_rect_pane_g8

0xc222,	// (0x00039f48) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d294) bg_popup_call2_rect_pane_g

0xc22a,	// (0x00039f50) bg_popup_call2_bubble_pane_g1

0xc232,	// (0x00039f58) bg_popup_call2_bubble_pane_g2

0xc23a,	// (0x00039f60) bg_popup_call2_bubble_pane_g3

0xc242,	// (0x00039f68) bg_popup_call2_bubble_pane_g4

0xc24a,	// (0x00039f70) bg_popup_call2_bubble_pane_g5

0xc252,	// (0x00039f78) bg_popup_call2_bubble_pane_g6

0xc25a,	// (0x00039f80) bg_popup_call2_bubble_pane_g7

0xc262,	// (0x00039f88) bg_popup_call2_bubble_pane_g8

0xc26a,	// (0x00039f90) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d2a7) bg_popup_call2_bubble_pane_g

0x1d8f,	// (0x0002fab5) aid_cale_week_size_cell_pane

0x240a,	// (0x00030130) aid_cams_cif_uncrop_pane_ParamLimits

0x240a,	// (0x00030130) aid_cams_cif_uncrop_pane

0x25ba,	// (0x000302e0) aid_cams_size_cell_ParamLimits

0x25ba,	// (0x000302e0) aid_cams_size_cell

0x25ce,	// (0x000302f4) grid_cams_pane_ParamLimits

0x25e8,	// (0x0003030e) linegrid_cams_pane_ParamLimits

0x27de,	// (0x00030504) call_video_pane_t1

0x27fc,	// (0x00030522) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003cf94) call_video_pane_t

0x2c28,	// (0x0003094e) aid_cale_month_size_cell_pane_ParamLimits

0x2c28,	// (0x0003094e) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003d331) smil_status_volume_pane_g

0x4b62,	// (0x00032888) volume_smil_pane_ParamLimits

0x18a6,	// (0x0002f5cc) aid_popup2_width_pane

0x1ca1,	// (0x0002f9c7) cell_qdial_pane_g4_ParamLimits

0x1ca1,	// (0x0002f9c7) cell_qdial_pane_g4

0x3b8e,	// (0x000318b4) aid_blid_cardinal_pane_ParamLimits

0x3b9a,	// (0x000318c0) aid_blid_destination_pane_ParamLimits

0x3b9a,	// (0x000318c0) aid_blid_destination_pane

0xa1c4,	// (0x00037eea) bg_popup_call_poc_act_pane_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_call_poc_act_pane

0xa1c4,	// (0x00037eea) bg_popup_call_poc_inact_pane_ParamLimits

0xa1c4,	// (0x00037eea) bg_popup_call_poc_inact_pane

0xc272,	// (0x00039f98) bg_popup_call_poc_act_pane_g1

0xc27a,	// (0x00039fa0) bg_popup_call_poc_act_pane_g2

0xc282,	// (0x00039fa8) bg_popup_call_poc_act_pane_g3

0xc242,	// (0x00039f68) bg_popup_call_poc_act_pane_g4

0xc24a,	// (0x00039f70) bg_popup_call_poc_act_pane_g5

0xc28a,	// (0x00039fb0) bg_popup_call_poc_act_pane_g6

0xc25a,	// (0x00039f80) bg_popup_call_poc_act_pane_g7

0xc292,	// (0x00039fb8) bg_popup_call_poc_act_pane_g8

0x9f69,	// (0x00037c8f) main_usb_pane

0x4a32,	// (0x00032758) popup_cale_lunar_info_window

0x2ad4,	// (0x000307fa) im_reading_pane_t1_ParamLimits

0xa54f,	// (0x00038275) list_im_pane_ParamLimits

0xa560,	// (0x00038286) scroll_pane_cp07_ParamLimits

0x9f69,	// (0x00037c8f) grid_highlight_pane_cp012

0xa1c4,	// (0x00037eea) mup_scale_pane_ParamLimits

0xb186,	// (0x00038eac) main_usb_pane_g1_ParamLimits

0xb186,	// (0x00038eac) main_usb_pane_g1

0x474d,	// (0x00032473) main_usb_pane_g2_ParamLimits

0x474d,	// (0x00032473) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003d2d1) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003d2d1) main_usb_pane_g

0x4763,	// (0x00032489) main_usb_pane_t1_ParamLimits

0x4763,	// (0x00032489) main_usb_pane_t1

0x4775,	// (0x0003249b) main_usb_pane_t2_ParamLimits

0x4775,	// (0x0003249b) main_usb_pane_t2

0x4787,	// (0x000324ad) main_usb_pane_t3_ParamLimits

0x4787,	// (0x000324ad) main_usb_pane_t3

0x4799,	// (0x000324bf) main_usb_pane_t4_ParamLimits

0x4799,	// (0x000324bf) main_usb_pane_t4

0x47ab,	// (0x000324d1) main_usb_pane_t5_ParamLimits

0x47ab,	// (0x000324d1) main_usb_pane_t5

0x47bd,	// (0x000324e3) main_usb_pane_t6_ParamLimits

0x47bd,	// (0x000324e3) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003d2d6) main_usb_pane_t_ParamLimits

0x3b3d,	// (0x00031863) aid_text_placing

0x3b46,	// (0x0003186c) main_location2_pane_t1_ParamLimits

0x3b58,	// (0x0003187e) main_location2_pane_t2_ParamLimits

0x3b6a,	// (0x00031890) main_location2_pane_t3_ParamLimits

0x3b7c,	// (0x000318a2) main_location2_pane_t4_ParamLimits

0x3b7c,	// (0x000318a2) main_location2_pane_t4

0xf3cf,	// (0x0003d0f5) main_location2_pane_t_ParamLimits

0xa200,	// (0x00037f26) find_pinb_pane_g2_ParamLimits

0xa200,	// (0x00037f26) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003ce45) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003ce45) find_pinb_pane_g

0xa20c,	// (0x00037f32) find_pinb_pane_t1_ParamLimits

0xa21e,	// (0x00037f44) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003ce4a) find_pinb_pane_t_ParamLimits

0x9f69,	// (0x00037c8f) main_call3_pane

0x30e7,	// (0x00030e0d) cale_month_day_heading_pane_t1_ParamLimits

0x316d,	// (0x00030e93) cale_month_day_heading_pane_t2_ParamLimits

0x31fe,	// (0x00030f24) cale_month_day_heading_pane_t3_ParamLimits

0x328f,	// (0x00030fb5) cale_month_day_heading_pane_t4_ParamLimits

0x3324,	// (0x0003104a) cale_month_day_heading_pane_t5_ParamLimits

0x33c5,	// (0x000310eb) cale_month_day_heading_pane_t6_ParamLimits

0x3466,	// (0x0003118c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003cfcc) cale_month_day_heading_pane_t_ParamLimits

0xa858,	// (0x0003857e) smil_status_volume_pane

0x4248,	// (0x00031f6e) postcard_address_pane_ParamLimits

0x4248,	// (0x00031f6e) postcard_address_pane

0x425a,	// (0x00031f80) postcard_message_pane_ParamLimits

0x425a,	// (0x00031f80) postcard_message_pane

0x472b,	// (0x00032451) call2_cli_visual_pane_t1_ParamLimits

0x472b,	// (0x00032451) call2_cli_visual_pane_t1

0x4d17,	// (0x00032a3d) postcard_message_pane_t1_ParamLimits

0x4d17,	// (0x00032a3d) postcard_message_pane_t1

0x4d00,	// (0x00032a26) postcard_address_pane_t1_ParamLimits

0x4d00,	// (0x00032a26) postcard_address_pane_t1

0x4cec,	// (0x00032a12) popup_call3_audio_in_window_ParamLimits

0x4cec,	// (0x00032a12) popup_call3_audio_in_window

0x4b77,	// (0x0003289d) bg_popup_call3_in_pane_ParamLimits

0x4b77,	// (0x0003289d) bg_popup_call3_in_pane

0x4bed,	// (0x00032913) popup_call3_audio_in_window_g1_ParamLimits

0x4bed,	// (0x00032913) popup_call3_audio_in_window_g1

0x4c0d,	// (0x00032933) popup_call3_audio_in_window_g2_ParamLimits

0x4c0d,	// (0x00032933) popup_call3_audio_in_window_g2

0x4c2d,	// (0x00032953) popup_call3_audio_in_window_g3_ParamLimits

0x4c2d,	// (0x00032953) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003d338) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003d338) popup_call3_audio_in_window_g

0x4c5e,	// (0x00032984) popup_call3_audio_in_window_t1_ParamLimits

0x4c5e,	// (0x00032984) popup_call3_audio_in_window_t1

0x4c9c,	// (0x000329c2) popup_call3_audio_in_window_t2_ParamLimits

0x4c9c,	// (0x000329c2) popup_call3_audio_in_window_t2

0x4cda,	// (0x00032a00) popup_call3_audio_in_window_t3_ParamLimits

0x4cda,	// (0x00032a00) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003d341) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003d341) popup_call3_audio_in_window_t

0xa44e,	// (0x00038174) bg_popup_call3_rect_pane

0xc1ea,	// (0x00039f10) bg_popup_call3_rect_pane_g1

0xa36a,	// (0x00038090) bg_popup_call3_rect_pane_g2

0xc1f2,	// (0x00039f18) bg_popup_call3_rect_pane_g3

0xc1fa,	// (0x00039f20) bg_popup_call3_rect_pane_g4

0xc202,	// (0x00039f28) bg_popup_call3_rect_pane_g5

0xc20a,	// (0x00039f30) bg_popup_call3_rect_pane_g6

0xc212,	// (0x00039f38) bg_popup_call3_rect_pane_g7

0x3e90,	// (0x00031bb6) mup_visualizer_osc_pane

0xb027,	// (0x00038d4d) mup_visualizer_spec_pane

0x4ba7,	// (0x000328cd) call3_video_qcif_pane_ParamLimits

0x4ba7,	// (0x000328cd) call3_video_qcif_pane

0x4bba,	// (0x000328e0) call3_video_qcif_uncrop_pane_ParamLimits

0x4bba,	// (0x000328e0) call3_video_qcif_uncrop_pane

0x4bc8,	// (0x000328ee) call3_video_subqcif_pane_ParamLimits

0x4bc8,	// (0x000328ee) call3_video_subqcif_pane

0x4bdc,	// (0x00032902) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bdc,	// (0x00032902) call3_video_subqcif_uncrop_pane

0x4c4d,	// (0x00032973) popup_call3_audio_in_window_g4_ParamLimits

0x4c4d,	// (0x00032973) popup_call3_audio_in_window_g4

0x4b44,	// (0x0003286a) mup_spec_half_pane

0x4b4d,	// (0x00032873) mup_spec_half_pane_cp

0xc44f,	// (0x0003a175) mup_osc_middle_pane

0xc458,	// (0x0003a17e) mup_visualizer_osc_pane_g1

0x4b24,	// (0x0003284a) mup_spec_bar_pane_ParamLimits

0x4b24,	// (0x0003284a) mup_spec_bar_pane

0xc43c,	// (0x0003a162) mup_spec_bar_pane_g1

0xc446,	// (0x0003a16c) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d32c) mup_spec_bar_pane_g

0x1d8f,	// (0x0002fab5) aid_cale_week_size_cell_pane_ParamLimits

0x1da9,	// (0x0002facf) bg_cale_heading_pane_ParamLimits

0xa3a7,	// (0x000380cd) bg_cale_pane_cp01_ParamLimits

0x1dc1,	// (0x0002fae7) cale_week_corner_pane_ParamLimits

0x1de0,	// (0x0002fb06) cale_week_day_heading_pane_ParamLimits

0x1dfd,	// (0x0002fb23) cale_week_scroll_pane_g1_ParamLimits

0x1e10,	// (0x0002fb36) cale_week_scroll_pane_g2_ParamLimits

0x1e28,	// (0x0002fb4e) cale_week_scroll_pane_g3_ParamLimits

0x1e40,	// (0x0002fb66) cale_week_scroll_pane_g4_ParamLimits

0x1e58,	// (0x0002fb7e) cale_week_scroll_pane_g5_ParamLimits

0x1e78,	// (0x0002fb9e) cale_week_scroll_pane_g6_ParamLimits

0x1e98,	// (0x0002fbbe) cale_week_scroll_pane_g7_ParamLimits

0x1eb8,	// (0x0002fbde) cale_week_scroll_pane_g8_ParamLimits

0x1edc,	// (0x0002fc02) cale_week_scroll_pane_g9_ParamLimits

0x1ef4,	// (0x0002fc1a) cale_week_scroll_pane_g10_ParamLimits

0x1f0c,	// (0x0002fc32) cale_week_scroll_pane_g11_ParamLimits

0x1f24,	// (0x0002fc4a) cale_week_scroll_pane_g12_ParamLimits

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g13_ParamLimits

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g14_ParamLimits

0x1f3c,	// (0x0002fc62) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003ced6) cale_week_scroll_pane_g_ParamLimits

0x1f78,	// (0x0002fc9e) cale_week_time_pane_ParamLimits

0x1f9c,	// (0x0002fcc2) grid_cale_week_pane_ParamLimits

0xa3c4,	// (0x000380ea) listscroll_cale_week_pane_t1

0xa3d6,	// (0x000380fc) scroll_pane_cp08_ParamLimits

0x2c7d,	// (0x000309a3) cale_month_corner_pane_ParamLimits

0xa82e,	// (0x00038554) cale_month_pane_t1

0x3085,	// (0x00030dab) cale_month_week_pane_ParamLimits

0x3926,	// (0x0003164c) popup_call_status_window_g1_ParamLimits

0x393a,	// (0x00031660) popup_call_status_window_g2_ParamLimits

0x394e,	// (0x00031674) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003d07c) popup_call_status_window_g_ParamLimits

0xabde,	// (0x00038904) aid_call2_pane

0x40f7,	// (0x00031e1d) msg_header_pane_g1

0x4248,	// (0x00031f6e) postcard_address2_pane_ParamLimits

0x4248,	// (0x00031f6e) postcard_address2_pane

0x425a,	// (0x00031f80) postcard_message2_pane_ParamLimits

0x425a,	// (0x00031f80) postcard_message2_pane

0x4ad6,	// (0x000327fc) message2_row_pane_ParamLimits

0x4ad6,	// (0x000327fc) message2_row_pane

0x4af2,	// (0x00032818) address2_row_pane_ParamLimits

0x4af2,	// (0x00032818) address2_row_pane

0xc40a,	// (0x0003a130) postcard_message2_row_pane_g1

0xc412,	// (0x0003a138) postcard_message2_row_pane_t1

0xc40a,	// (0x0003a130) address2_row_pane_g1

0xc412,	// (0x0003a138) address2_row_pane_t1

0x22b9,	// (0x0002ffdf) aid_size_cell_vorec

0x9f69,	// (0x00037c8f) main_rss_pane

0x4b05,	// (0x0003282b) rss_list_single_pane_ParamLimits

0x4b05,	// (0x0003282b) rss_list_single_pane

0xc420,	// (0x0003a146) rss_list_single_pane_t1

0xc42e,	// (0x0003a154) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003d327) rss_list_single_pane_t

0x9f69,	// (0x00037c8f) main_camera2_pane

0x9f69,	// (0x00037c8f) main_video2_pane

0x090d,	// (0x0002e633) cams_zoom_pane_cp2_ParamLimits

0x090d,	// (0x0002e633) cams_zoom_pane_cp2

0x092d,	// (0x0002e653) image2_vga_pane_ParamLimits

0x092d,	// (0x0002e653) image2_vga_pane

0x097e,	// (0x0002e6a4) main_camera2_pane_g1_ParamLimits

0x097e,	// (0x0002e6a4) main_camera2_pane_g1

0x099e,	// (0x0002e6c4) main_camera2_pane_g2_ParamLimits

0x099e,	// (0x0002e6c4) main_camera2_pane_g2

0x09be,	// (0x0002e6e4) main_camera2_pane_g3_ParamLimits

0x09be,	// (0x0002e6e4) main_camera2_pane_g3

0x09de,	// (0x0002e704) main_camera2_pane_g4_ParamLimits

0x09de,	// (0x0002e704) main_camera2_pane_g4

0x09fe,	// (0x0002e724) main_camera2_pane_g5_ParamLimits

0x09fe,	// (0x0002e724) main_camera2_pane_g5

0x0a1e,	// (0x0002e744) main_camera2_pane_g6_ParamLimits

0x0a1e,	// (0x0002e744) main_camera2_pane_g6

0x0a3e,	// (0x0002e764) main_camera2_pane_g7_ParamLimits

0x0a3e,	// (0x0002e764) main_camera2_pane_g7

0x0a5e,	// (0x0002e784) main_camera2_pane_g8_ParamLimits

0x0a5e,	// (0x0002e784) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003d348) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003d348) main_camera2_pane_g

0x0a9e,	// (0x0002e7c4) main_camera2_pane_t1_ParamLimits

0x0a9e,	// (0x0002e7c4) main_camera2_pane_t1

0x0ad3,	// (0x0002e7f9) main_camera2_pane_t2_ParamLimits

0x0ad3,	// (0x0002e7f9) main_camera2_pane_t2

0x0af9,	// (0x0002e81f) main_camera2_pane_t3_ParamLimits

0x0af9,	// (0x0002e81f) main_camera2_pane_t3

0x0b57,	// (0x0002e87d) main_camera2_pane_t4_ParamLimits

0x0b57,	// (0x0002e87d) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003d35b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003d35b) main_camera2_pane_t

0x0be9,	// (0x0002e90f) cams_zoom_pane_cp4_ParamLimits

0x0be9,	// (0x0002e90f) cams_zoom_pane_cp4

0x0bff,	// (0x0002e925) image2_cif_pane_ParamLimits

0x0bff,	// (0x0002e925) image2_cif_pane

0x0c2a,	// (0x0002e950) image2_subqcif_pane_ParamLimits

0x0c2a,	// (0x0002e950) image2_subqcif_pane

0x0c44,	// (0x0002e96a) main_video2_pane_g1_ParamLimits

0x0c44,	// (0x0002e96a) main_video2_pane_g1

0x0c5e,	// (0x0002e984) main_video2_pane_g2_ParamLimits

0x0c5e,	// (0x0002e984) main_video2_pane_g2

0x0c74,	// (0x0002e99a) main_video2_pane_g3_ParamLimits

0x0c74,	// (0x0002e99a) main_video2_pane_g3

0x0c8a,	// (0x0002e9b0) main_video2_pane_g4_ParamLimits

0x0c8a,	// (0x0002e9b0) main_video2_pane_g4

0x0ca0,	// (0x0002e9c6) main_video2_pane_g5_ParamLimits

0x0ca0,	// (0x0002e9c6) main_video2_pane_g5

0x0cb6,	// (0x0002e9dc) main_video2_pane_g6_ParamLimits

0x0cb6,	// (0x0002e9dc) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003d36a) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003d36a) main_video2_pane_g

0x0cd0,	// (0x0002e9f6) main_video2_pane_t1_ParamLimits

0x0cd0,	// (0x0002e9f6) main_video2_pane_t1

0x0cf4,	// (0x0002ea1a) main_video2_pane_t2_ParamLimits

0x0cf4,	// (0x0002ea1a) main_video2_pane_t2

0x0d42,	// (0x0002ea68) main_video2_pane_t3_ParamLimits

0x0d42,	// (0x0002ea68) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003d377) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003d377) main_video2_pane_t

0x4878,	// (0x0003259e) call_muted_g2

0x0001,

0xf5f3,	// (0x0003d319) call_muted_g

0x9f69,	// (0x00037c8f) main_mup2_pane

0x4d62,	// (0x00032a88) main_mup2_pane_g1_ParamLimits

0x4d62,	// (0x00032a88) main_mup2_pane_g1

0x4d6e,	// (0x00032a94) main_mup2_pane_g2_ParamLimits

0x4d6e,	// (0x00032a94) main_mup2_pane_g2

0x4fdd,	// (0x00032d03) main_mup_pane_g13_cp1

0x4fe5,	// (0x00032d0b) mup_volume_pane_cp1

0x4d8a,	// (0x00032ab0) main_mup2_pane_g4_ParamLimits

0x4d8a,	// (0x00032ab0) main_mup2_pane_g4

0x4d9c,	// (0x00032ac2) main_mup2_pane_g5_ParamLimits

0x4d9c,	// (0x00032ac2) main_mup2_pane_g5

0x4dae,	// (0x00032ad4) main_mup2_pane_g6_ParamLimits

0x4dae,	// (0x00032ad4) main_mup2_pane_g6

0x4dc0,	// (0x00032ae6) main_mup2_pane_g7_ParamLimits

0x4dc0,	// (0x00032ae6) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003d37e) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003d37e) main_mup2_pane_g

0x4dd8,	// (0x00032afe) main_mup2_pane_t1_ParamLimits

0x4dd8,	// (0x00032afe) main_mup2_pane_t1

0x4dee,	// (0x00032b14) main_mup2_pane_t2_ParamLimits

0x4dee,	// (0x00032b14) main_mup2_pane_t2

0x4e04,	// (0x00032b2a) main_mup2_pane_t3_ParamLimits

0x4e04,	// (0x00032b2a) main_mup2_pane_t3

0x4e1a,	// (0x00032b40) main_mup2_pane_t4_ParamLimits

0x4e1a,	// (0x00032b40) main_mup2_pane_t4

0x4e32,	// (0x00032b58) main_mup2_pane_t5_ParamLimits

0x4e32,	// (0x00032b58) main_mup2_pane_t5

0x4e4a,	// (0x00032b70) main_mup2_pane_t6_ParamLimits

0x4e4a,	// (0x00032b70) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003d38d) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003d38d) main_mup2_pane_t

0x4e7a,	// (0x00032ba0) mup2_visualizer_pane_ParamLimits

0x4e7a,	// (0x00032ba0) mup2_visualizer_pane

0x4ea8,	// (0x00032bce) mup_progress_pane_cp_ParamLimits

0x4ea8,	// (0x00032bce) mup_progress_pane_cp

0x4fc8,	// (0x00032cee) mup_volume_pane_cp_ParamLimits

0x4fc8,	// (0x00032cee) mup_volume_pane_cp

0x4ebc,	// (0x00032be2) mup2_visualizer_pane_g1_ParamLimits

0x4ebc,	// (0x00032be2) mup2_visualizer_pane_g1

0xc48f,	// (0x0003a1b5) mup2_visualizer_pane_g2_ParamLimits

0xc48f,	// (0x0003a1b5) mup2_visualizer_pane_g2

0x4ed3,	// (0x00032bf9) mup2_visualizer_pane_g3_ParamLimits

0x4ed3,	// (0x00032bf9) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003d39a) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003d39a) mup2_visualizer_pane_g

0xb2cf,	// (0x00038ff5) aid_size_cell_fmradio

0x05f3,	// (0x0002e319) aid_height_parent_landcape

0xa5de,	// (0x00038304) wml_content_pane_cp

0xa5e6,	// (0x0003830c) wml_tabs_pane

0xa5ef,	// (0x00038315) popup_wml_miniature_window

0xa5f7,	// (0x0003831d) scroll_pane_cp021

0xa60b,	// (0x00038331) wml_content_pane_comp8

0x9f69,	// (0x00037c8f) bg_popup_sub_pane_cp05

0xc4ad,	// (0x0003a1d3) popup_wml_miniature_window_g1

0xc4b5,	// (0x0003a1db) wml_miniature_view_pane

0x4edf,	// (0x00032c05) aid_size_wml_view

0x4ee7,	// (0x00032c0d) wml_miniature_view_pane_g1

0x4ef0,	// (0x00032c16) wml_miniature_view_pane_g2

0x4ef9,	// (0x00032c1f) wml_miniature_view_pane_g3

0x4f01,	// (0x00032c27) wml_miniature_view_pane_g4

0x4f09,	// (0x00032c2f) wml_miniature_view_pane_g5

0x4f11,	// (0x00032c37) wml_miniature_view_pane_g6

0x4f19,	// (0x00032c3f) wml_miniature_view_pane_g7

0x4f21,	// (0x00032c47) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003d3a1) wml_miniature_view_pane_g

0xc4bd,	// (0x0003a1e3) background_graphic_ParamLimits

0xc4bd,	// (0x0003a1e3) background_graphic

0xc4c9,	// (0x0003a1ef) wml_tabs_2_pane

0xc4d2,	// (0x0003a1f8) wml_tabs_3_pane_ParamLimits

0xc4d2,	// (0x0003a1f8) wml_tabs_3_pane

0xc4e4,	// (0x0003a20a) wml_tabs_4_pane_ParamLimits

0xc4e4,	// (0x0003a20a) wml_tabs_4_pane

0xc4fa,	// (0x0003a220) wml_tabs_5_pane_ParamLimits

0xc4fa,	// (0x0003a220) wml_tabs_5_pane

0xc514,	// (0x0003a23a) wml_tabs_pane_g2_ParamLimits

0xc514,	// (0x0003a23a) wml_tabs_pane_g2

0xc528,	// (0x0003a24e) wml_tabs_pane_g3_ParamLimits

0xc528,	// (0x0003a24e) wml_tabs_pane_g3

0x4f29,	// (0x00032c4f) wml_tabs_2_active_pane_ParamLimits

0x4f29,	// (0x00032c4f) wml_tabs_2_active_pane

0x4f3d,	// (0x00032c63) wml_tabs_2_passive_pane_ParamLimits

0x4f3d,	// (0x00032c63) wml_tabs_2_passive_pane

0x4f51,	// (0x00032c77) wml_tabs_3_active_pane_cp_ParamLimits

0x4f51,	// (0x00032c77) wml_tabs_3_active_pane_cp

0x4f66,	// (0x00032c8c) wml_tabs_3_passive_pane_ParamLimits

0x4f66,	// (0x00032c8c) wml_tabs_3_passive_pane

0x4f79,	// (0x00032c9f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f79,	// (0x00032c9f) wml_tabs_3_passive_pane_cp

0x4f90,	// (0x00032cb6) tabs_4_active_pane

0x4f98,	// (0x00032cbe) tabs_4_passive_pane

0x4fa2,	// (0x00032cc8) tabs_4_passive_pane_cp

0x4faa,	// (0x00032cd0) tabs_4_passive_pane_cp2

0x4745,	// (0x0003246b) aid_height_text

0x3e66,	// (0x00031b8c) mup_volume_cont_pane_ParamLimits

0x3e66,	// (0x00031b8c) mup_volume_cont_pane

0x1a1f,	// (0x0002f745) aid_size_cell_pinb

0x1a29,	// (0x0002f74f) aid_size_list_pinb

0x4e94,	// (0x00032bba) mup2_volume_cont_pane_ParamLimits

0x4e94,	// (0x00032bba) mup2_volume_cont_pane

0x4fb4,	// (0x00032cda) mup2_volume_cont_pane_g1_ParamLimits

0x4fb4,	// (0x00032cda) mup2_volume_cont_pane_g1

0x013f,	// (0x0002de65) aid_size_cell_touch_ParamLimits

0x013f,	// (0x0002de65) aid_size_cell_touch

0x0327,	// (0x0002e04d) touch_pane_ParamLimits

0x0327,	// (0x0002e04d) touch_pane

0x1957,	// (0x0002f67d) main_rss2_pane

0xc545,	// (0x0003a26b) listscroll_rss2_pane

0xc54e,	// (0x0003a274) rss2_navigation_pane

0xc556,	// (0x0003a27c) list_rss2_pane

0xad21,	// (0x00038a47) scroll_pane_cp22

0xc55e,	// (0x0003a284) rss2_navigation_pane_g1

0xc567,	// (0x0003a28d) rss2_navigation_pane_g2

0xc56f,	// (0x0003a295) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003d3b2) rss2_navigation_pane_g

0xc577,	// (0x0003a29d) rss2_navigation_pane_t1

0x4fed,	// (0x00032d13) rss2_list_single_pane_ParamLimits

0x4fed,	// (0x00032d13) rss2_list_single_pane

0xc585,	// (0x0003a2ab) rss2_list_single_pane_t2

0xc593,	// (0x0003a2b9) rss2_list_single_pane_t3_ParamLimits

0xc593,	// (0x0003a2b9) rss2_list_single_pane_t3

0xc5b0,	// (0x0003a2d6) rss2_list_single_pane_t4

0x370e,	// (0x00031434) smil_status_pane_g1

0x193d,	// (0x0002f663) main_image2_pane_ParamLimits

0x193d,	// (0x0002f663) main_image2_pane

0x0a7e,	// (0x0002e7a4) main_camera2_pane_g9_ParamLimits

0x0a7e,	// (0x0002e7a4) main_camera2_pane_g9

0x0bac,	// (0x0002e8d2) main_camera2_pane_t5_ParamLimits

0x0bac,	// (0x0002e8d2) main_camera2_pane_t5

0x4d32,	// (0x00032a58) main_camera2_pane_t6_ParamLimits

0x4d32,	// (0x00032a58) main_camera2_pane_t6

0x5002,	// (0x00032d28) main_image2_pane_g1_ParamLimits

0x5002,	// (0x00032d28) main_image2_pane_g1

0x4481,	// (0x000321a7) smil2_video_pane_ParamLimits

0x4481,	// (0x000321a7) smil2_video_pane

0x18b2,	// (0x0002f5d8) aid_zoom_text_primary_cp

0x1933,	// (0x0002f659) popup_preview_fixed_window

0xa547,	// (0x0003826d) im_reading_pane_g1

0x08f5,	// (0x0002e61b) cams2_bc_adjust_pane_cp_ParamLimits

0x08f5,	// (0x0002e61b) cams2_bc_adjust_pane_cp

0x0bdb,	// (0x0002e901) cams2_bc_adjust_pane_ParamLimits

0x0bdb,	// (0x0002e901) cams2_bc_adjust_pane

0xd8c5,	// (0x0003b5eb) cams2_bc_adjust_pane_g1

0x5018,	// (0x00032d3e) cams2_slider_pane

0x5021,	// (0x00032d47) cams2_slider_pane_g1

0x502a,	// (0x00032d50) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003d3b9) cams2_slider_pane_g

0x0397,	// (0x0002e0bd) calc_display_pane_ParamLimits

0x03bf,	// (0x0002e0e5) calc_paper_pane_ParamLimits

0x03e2,	// (0x0002e108) grid_calc_pane_ParamLimits

0x39b3,	// (0x000316d9) popup_clock_digital_window_t1_ParamLimits

0xb26c,	// (0x00038f92) main_image_pane_t1

0x0379,	// (0x0002e09f) aid_size_cell_calc_ParamLimits

0x0379,	// (0x0002e09f) aid_size_cell_calc

0x064b,	// (0x0002e371) popup_blid_sat_info2_window_ParamLimits

0x064b,	// (0x0002e371) popup_blid_sat_info2_window

0xc5c6,	// (0x0003a2ec) aid_size_cell_blid

0xc5ce,	// (0x0003a2f4) bg_popup_window_pane_cp07

0xc5f1,	// (0x0003a317) grid_popup_blid_pane

0xc5fb,	// (0x0003a321) heading_pane_cp05_ParamLimits

0xc5fb,	// (0x0003a321) heading_pane_cp05

0xc6c5,	// (0x0003a3eb) cell_popup_blid_pane_ParamLimits

0xc6c5,	// (0x0003a3eb) cell_popup_blid_pane

0xc6e9,	// (0x0003a40f) cell_popup_blid_pane_g1

0xc6f1,	// (0x0003a417) cell_popup_blid_pane_t1

0x4e64,	// (0x00032b8a) mup2_indicator_pane_ParamLimits

0x4e64,	// (0x00032b8a) mup2_indicator_pane

0xa44e,	// (0x00038174) mup2_visualizer_osc_pane

0xc49b,	// (0x0003a1c1) mup2_visualizer_spec_pane_ParamLimits

0xc49b,	// (0x0003a1c1) mup2_visualizer_spec_pane

0x5044,	// (0x00032d6a) mup2_spec_half_pane

0x504d,	// (0x00032d73) mup2_spec_half_pane_cp

0x5055,	// (0x00032d7b) mup2_spec_bar_pane_ParamLimits

0x5055,	// (0x00032d7b) mup2_spec_bar_pane

0xc43c,	// (0x0003a162) mup2_spec_bar_pane_g1

0xc446,	// (0x0003a16c) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d32c) mup2_spec_bar_pane_g

0x5075,	// (0x00032d9b) mup2_osc_middle_pane

0xc458,	// (0x0003a17e) mup2_visualizer_osc_pane_g1

0x9b76,	// (0x0003789c) popup_number_entry_window_t1_ParamLimits

0x9b89,	// (0x000378af) popup_number_entry_window_t2_ParamLimits

0x9b9b,	// (0x000378c1) popup_number_entry_window_t3_ParamLimits

0x1961,	// (0x0002f687) popup_number_entry_window_t5_ParamLimits

0x1961,	// (0x0002f687) popup_number_entry_window_t5

0xf0ca,	// (0x0003cdf0) popup_number_entry_window_t_ParamLimits

0x9bad,	// (0x000378d3) text_title_cp2_ParamLimits

0x4115,	// (0x00031e3b) aid_hotspot_pointer_text2_pane

0x416b,	// (0x00031e91) main_viewer_pane_g9_ParamLimits

0x416b,	// (0x00031e91) main_viewer_pane_g9

0xa82e,	// (0x00038554) cale_month_pane_t1_ParamLimits

0xa86b,	// (0x00038591) bg_cale_pane_ParamLimits

0xa883,	// (0x000385a9) list_cale_pane_ParamLimits

0xa894,	// (0x000385ba) listscroll_cale_day_pane_t1

0xa8a6,	// (0x000385cc) scroll_pane_cp09_ParamLimits

0x3e98,	// (0x00031bbe) main_mup_eq_pane_t1_ParamLimits

0x3e98,	// (0x00031bbe) main_mup_eq_pane_t1

0x3eb2,	// (0x00031bd8) main_mup_eq_pane_t2_ParamLimits

0x3eb2,	// (0x00031bd8) main_mup_eq_pane_t2

0x3ecc,	// (0x00031bf2) main_mup_eq_pane_t3_ParamLimits

0x3ecc,	// (0x00031bf2) main_mup_eq_pane_t3

0x3ee8,	// (0x00031c0e) main_mup_eq_pane_t4_ParamLimits

0x3ee8,	// (0x00031c0e) main_mup_eq_pane_t4

0x3f04,	// (0x00031c2a) main_mup_eq_pane_t5_ParamLimits

0x3f04,	// (0x00031c2a) main_mup_eq_pane_t5

0x3f20,	// (0x00031c46) main_mup_eq_pane_t6_ParamLimits

0x3f20,	// (0x00031c46) main_mup_eq_pane_t6

0x3f34,	// (0x00031c5a) main_mup_eq_pane_t7_ParamLimits

0x3f34,	// (0x00031c5a) main_mup_eq_pane_t7

0x3f48,	// (0x00031c6e) main_mup_eq_pane_t8_ParamLimits

0x3f48,	// (0x00031c6e) main_mup_eq_pane_t8

0x3f5c,	// (0x00031c82) main_mup_eq_pane_t9_ParamLimits

0x3f5c,	// (0x00031c82) main_mup_eq_pane_t9

0x3f76,	// (0x00031c9c) main_mup_eq_pane_t10_ParamLimits

0x3f76,	// (0x00031c9c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d17b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d17b) main_mup_eq_pane_t

0x4025,	// (0x00031d4b) mup_equalizer_pane_cp5_ParamLimits

0x4039,	// (0x00031d5f) mup_equalizer_pane_cp6_ParamLimits

0x404d,	// (0x00031d73) mup_equalizer_pane_cp7_ParamLimits

0x1957,	// (0x0002f67d) main_gallery_pane

0xc461,	// (0x0003a187) smil2_volume_pane

0xc469,	// (0x0003a18f) smil_status_volume_pane_g1_ParamLimits

0xc47c,	// (0x0003a1a2) smil_status_volume_pane_g2_ParamLimits

0x4b55,	// (0x0003287b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003d331) smil_status_volume_pane_g_ParamLimits

0xc5ce,	// (0x0003a2f4) bg_popup_window_pane_cp07_ParamLimits

0xc5dc,	// (0x0003a302) blid_firmament_pane

0x507e,	// (0x00032da4) aid_size_cell_gallery_ParamLimits

0x507e,	// (0x00032da4) aid_size_cell_gallery

0x5094,	// (0x00032dba) grid_gallery_pane_ParamLimits

0x5094,	// (0x00032dba) grid_gallery_pane

0x50ad,	// (0x00032dd3) cell_gallery_pane_ParamLimits

0x50ad,	// (0x00032dd3) cell_gallery_pane

0xc6ff,	// (0x0003a425) bg_cell_gallery_focus_pane_ParamLimits

0xc6ff,	// (0x0003a425) bg_cell_gallery_focus_pane

0xc711,	// (0x0003a437) cell_gallery_pane_g1_ParamLimits

0xc711,	// (0x0003a437) cell_gallery_pane_g1

0x50f6,	// (0x00032e1c) cell_gallery_pane_g2_ParamLimits

0x50f6,	// (0x00032e1c) cell_gallery_pane_g2

0x5103,	// (0x00032e29) cell_gallery_pane_g3_ParamLimits

0x5103,	// (0x00032e29) cell_gallery_pane_g3

0xc71d,	// (0x0003a443) cell_gallery_pane_g4_ParamLimits

0xc71d,	// (0x0003a443) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003d3df) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003d3df) cell_gallery_pane_g

0xc729,	// (0x0003a44f) bg_cell_gallery_focus_pane_g1

0xc731,	// (0x0003a457) bg_cell_gallery_focus_pane_g2

0xc739,	// (0x0003a45f) bg_cell_gallery_focus_pane_g3

0xc741,	// (0x0003a467) bg_cell_gallery_focus_pane_g4

0xc749,	// (0x0003a46f) bg_cell_gallery_focus_pane_g5

0xc751,	// (0x0003a477) bg_cell_gallery_focus_pane_g6

0xc759,	// (0x0003a47f) bg_cell_gallery_focus_pane_g7

0xc761,	// (0x0003a487) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003d3e8) bg_cell_gallery_focus_pane_g

0xc769,	// (0x0003a48f) aid_firma_cardinal

0xc77d,	// (0x0003a4a3) blid_firmament_pane_t1

0xc794,	// (0x0003a4ba) blid_firmament_pane_t2

0xc7ab,	// (0x0003a4d1) blid_firmament_pane_t3

0xc7c2,	// (0x0003a4e8) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003d3f9) blid_firmament_pane_t

0xc7d9,	// (0x0003a4ff) blid_sat_info_pane

0xc7e9,	// (0x0003a50f) blid_sat_info_pane_g1

0xc7e9,	// (0x0003a50f) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003d402) blid_sat_info_pane_g

0xc7f3,	// (0x0003a519) blid_sat_info_pane_t1

0xc801,	// (0x0003a527) smil2_volume_content_pane

0xc80a,	// (0x0003a530) smil2_volume_pane_g1

0xc812,	// (0x0003a538) smil2_volume_content_pane_g1

0xc81b,	// (0x0003a541) smil2_volume_content_pane_g2

0xc824,	// (0x0003a54a) smil2_volume_content_pane_g3

0xc82d,	// (0x0003a553) smil2_volume_content_pane_g4

0xc836,	// (0x0003a55c) smil2_volume_content_pane_g5

0xc83f,	// (0x0003a565) smil2_volume_content_pane_g6

0xc848,	// (0x0003a56e) smil2_volume_content_pane_g7

0xc851,	// (0x0003a577) smil2_volume_content_pane_g8

0xc85a,	// (0x0003a580) smil2_volume_content_pane_g9

0xc863,	// (0x0003a589) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003d407) smil2_volume_content_pane_g

0x2050,	// (0x0002fd76) cale_week_day_heading_pane_t1_ParamLimits

0x2095,	// (0x0002fdbb) cale_week_day_heading_pane_t2_ParamLimits

0x20df,	// (0x0002fe05) cale_week_day_heading_pane_t3_ParamLimits

0x2129,	// (0x0002fe4f) cale_week_day_heading_pane_t4_ParamLimits

0x2173,	// (0x0002fe99) cale_week_day_heading_pane_t5_ParamLimits

0x21c5,	// (0x0002feeb) cale_week_day_heading_pane_t6_ParamLimits

0x2217,	// (0x0002ff3d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003cef7) cale_week_day_heading_pane_t_ParamLimits

0xa3f3,	// (0x00038119) bg_cale_side_pane_ParamLimits

0x04b9,	// (0x0002e1df) cale_week_time_pane_t1_ParamLimits

0x04d3,	// (0x0002e1f9) cale_week_time_pane_t2_ParamLimits

0x04ed,	// (0x0002e213) cale_week_time_pane_t3_ParamLimits

0x0507,	// (0x0002e22d) cale_week_time_pane_t4_ParamLimits

0x0521,	// (0x0002e247) cale_week_time_pane_t5_ParamLimits

0x053b,	// (0x0002e261) cale_week_time_pane_t6_ParamLimits

0x0555,	// (0x0002e27b) cale_week_time_pane_t7_ParamLimits

0x056f,	// (0x0002e295) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003cf06) cale_week_time_pane_t_ParamLimits

0x225c,	// (0x0002ff82) cell_cale_week_pane_g2_ParamLimits

0xa3f3,	// (0x00038119) bg_cale_side_pane_cp01_ParamLimits

0x350f,	// (0x00031235) cale_month_week_pane_t1_ParamLimits

0x3528,	// (0x0003124e) cale_month_week_pane_t2_ParamLimits

0x3541,	// (0x00031267) cale_month_week_pane_t3_ParamLimits

0x355a,	// (0x00031280) cale_month_week_pane_t4_ParamLimits

0x3573,	// (0x00031299) cale_month_week_pane_t5_ParamLimits

0x358c,	// (0x000312b2) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003cfdb) cale_month_week_pane_t_ParamLimits

0x36f9,	// (0x0003141f) cell_cale_month_pane_g1_ParamLimits

0x1957,	// (0x0002f67d) main_cale_event_viewer_pane

0x9b4c,	// (0x00037872) listscroll_cale_event_viewer_pane

0xc86c,	// (0x0003a592) list_cale_ev_pane

0xc874,	// (0x0003a59a) scroll_pane_cp023

0xc880,	// (0x0003a5a6) field_cale_ev_pane_ParamLimits

0xc880,	// (0x0003a5a6) field_cale_ev_pane

0xc89e,	// (0x0003a5c4) field_cale_ev_content_pane_ParamLimits

0xc89e,	// (0x0003a5c4) field_cale_ev_content_pane

0xc8aa,	// (0x0003a5d0) field_cale_ev_pane_g1_ParamLimits

0xc8aa,	// (0x0003a5d0) field_cale_ev_pane_g1

0xc8b6,	// (0x0003a5dc) field_cale_ev_pane_g2_ParamLimits

0xc8b6,	// (0x0003a5dc) field_cale_ev_pane_g2

0xc8ce,	// (0x0003a5f4) field_cale_ev_pane_g3_ParamLimits

0xc8ce,	// (0x0003a5f4) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003d41c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003d41c) field_cale_ev_pane_g

0xc8e6,	// (0x0003a60c) field_cale_ev_pane_t1_ParamLimits

0xc8e6,	// (0x0003a60c) field_cale_ev_pane_t1

0xc8fd,	// (0x0003a623) field_cale_ev_content_pane_t1_ParamLimits

0xc8fd,	// (0x0003a623) field_cale_ev_content_pane_t1

0xb0d9,	// (0x00038dff) bg_button_pane_cp01

0x1d7d,	// (0x0002faa3) listscroll_cale_week_pane_ParamLimits

0xa39e,	// (0x000380c4) popup_toolbar_window_cp01

0xa3c4,	// (0x000380ea) listscroll_cale_week_pane_t1_ParamLimits

0x1d7d,	// (0x0002faa3) listscroll_cale_day_pane_ParamLimits

0xa39e,	// (0x000380c4) popup_toolbar_window_cp02

0xa894,	// (0x000385ba) listscroll_cale_day_pane_t1_ParamLimits

0x0611,	// (0x0002e337) main_cale_month_pane_ParamLimits

0x4a69,	// (0x0003278f) popup_toolbar_window_cp03_ParamLimits

0x4a69,	// (0x0003278f) popup_toolbar_window_cp03

0x4349,	// (0x0003206f) main_image_pane_g2_ParamLimits

0x4349,	// (0x0003206f) main_image_pane_g2

0x435a,	// (0x00032080) main_image_pane_g3_ParamLimits

0x435a,	// (0x00032080) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d20d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d20d) main_image_pane_g

0xb26c,	// (0x00038f92) main_image_pane_t1_ParamLimits

0x436b,	// (0x00032091) main_image_pane_t2_ParamLimits

0x436b,	// (0x00032091) main_image_pane_t2

0x437d,	// (0x000320a3) main_image_pane_t3_ParamLimits

0x437d,	// (0x000320a3) main_image_pane_t3

0x43a5,	// (0x000320cb) main_image_pane_t4_ParamLimits

0x43a5,	// (0x000320cb) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d214) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d214) main_image_pane_t

0x43c5,	// (0x000320eb) popup_image_details_window_cp01

0x43cf,	// (0x000320f5) popup_toobar_trans_pane_cp01_ParamLimits

0x43cf,	// (0x000320f5) popup_toobar_trans_pane_cp01

0x072a,	// (0x0002e450) popup_image_details_window_ParamLimits

0x072a,	// (0x0002e450) popup_image_details_window

0x4a3c,	// (0x00032762) popup_image_focus_window

0x08af,	// (0x0002e5d5) camera2_autofocus_pane_ParamLimits

0x08af,	// (0x0002e5d5) camera2_autofocus_pane

0x9b4c,	// (0x00037872) bg_popup_sub_pane_cp06

0xc91b,	// (0x0003a641) popup_image_focus_window_g1

0xc923,	// (0x0003a649) popup_image_focus_window_g2

0xc92b,	// (0x0003a651) popup_image_focus_window_g3

0xc933,	// (0x0003a659) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003d423) popup_image_focus_window_g

0xc93b,	// (0x0003a661) popup_image_focus_window_t1

0xc949,	// (0x0003a66f) popup_image_focus_window_t2

0xc959,	// (0x0003a67f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003d42c) popup_image_focus_window_t

0xc967,	// (0x0003a68d) camera2_autofocus_pane_g1

0xa6d7,	// (0x000383fd) bg_tb_trans_pane_cp01

0xc975,	// (0x0003a69b) popup_image_details_window_g1

0xc988,	// (0x0003a6ae) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003d43e) popup_image_details_window_g

0xc9b1,	// (0x0003a6d7) popup_image_details_window_t1

0xc9c3,	// (0x0003a6e9) popup_image_details_window_t2

0xc9dc,	// (0x0003a702) popup_image_details_window_t3

0xc9f0,	// (0x0003a716) popup_image_details_window_t4

0xca0b,	// (0x0003a731) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003d445) popup_image_details_window_t

0xa275,	// (0x00037f9b) bg_calc_paper_pane_ParamLimits

0x1957,	// (0x0002f67d) grid_highlight_pane_cp013

0x1bd1,	// (0x0002f8f7) list_calc_pane_ParamLimits

0x1be3,	// (0x0002f909) scroll_pane_cp024

0xa289,	// (0x00037faf) bg_calc_display_pane_ParamLimits

0x0410,	// (0x0002e136) calc_display_pane_t1_ParamLimits

0x0422,	// (0x0002e148) calc_display_pane_t2_ParamLimits

0x1beb,	// (0x0002f911) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003ce77) calc_display_pane_t_ParamLimits

0x0483,	// (0x0002e1a9) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003ce94) cell_calc_pane_g

0x048c,	// (0x0002e1b2) cell_calc_pane_t1

0xa2e8,	// (0x0003800e) grid_highlight_pane_cp02_ParamLimits

0xa2fe,	// (0x00038024) toolbar_button_pane_cp01_ParamLimits

0xa2fe,	// (0x00038024) toolbar_button_pane_cp01

0xb2b1,	// (0x00038fd7) temp_image_control_pane_ParamLimits

0xb2b1,	// (0x00038fd7) temp_image_control_pane

0x193d,	// (0x0002f663) main_mp3_pane

0xca25,	// (0x0003a74b) temp_image_control_pane_g1_ParamLimits

0xca25,	// (0x0003a74b) temp_image_control_pane_g1

0xca33,	// (0x0003a759) temp_image_control_pane_g2_ParamLimits

0xca33,	// (0x0003a759) temp_image_control_pane_g2

0xca45,	// (0x0003a76b) temp_image_control_pane_g3_ParamLimits

0xca45,	// (0x0003a76b) temp_image_control_pane_g3

0x5140,	// (0x00032e66) temp_image_control_pane_g4_ParamLimits

0x5140,	// (0x00032e66) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003d450) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003d450) temp_image_control_pane_g

0xca25,	// (0x0003a74b) main_mp3_pane_g1

0x5153,	// (0x00032e79) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003d459) main_mp3_pane_g

0xca88,	// (0x0003a7ae) main_mp3_pane_t1

0xa456,	// (0x0003817c) main_camera_pane_g8_ParamLimits

0xa456,	// (0x0003817c) main_camera_pane_g8

0x2560,	// (0x00030286) main_video_pane_g7_ParamLimits

0x2560,	// (0x00030286) main_video_pane_g7

0x4d50,	// (0x00032a76) main_camera2_pane_t7_ParamLimits

0x4d50,	// (0x00032a76) main_camera2_pane_t7

0xa59e,	// (0x000382c4) scroll_pane_cp025_ParamLimits

0xa59e,	// (0x000382c4) scroll_pane_cp025

0xa5b2,	// (0x000382d8) scroll_pane_cp026_ParamLimits

0xa5b2,	// (0x000382d8) scroll_pane_cp026

0xa5c1,	// (0x000382e7) wml_content_pane_ParamLimits

0x1957,	// (0x0002f67d) main_touch_calib_pane

0x5227,	// (0x00032f4d) main_touch_calib_pane_g1

0x5239,	// (0x00032f5f) main_touch_calib_pane_g2

0x524b,	// (0x00032f71) main_touch_calib_pane_g3

0x525d,	// (0x00032f83) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003d477) main_touch_calib_pane_g

0x526f,	// (0x00032f95) main_touch_calib_pane_t1

0x5289,	// (0x00032faf) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003d480) main_touch_calib_pane_t

0xadfd,	// (0x00038b23) mup_progress_pane_cp02

0xae32,	// (0x00038b58) navi_pane_g1

0xaeed,	// (0x00038c13) navi_pane_mp_t3

0x193d,	// (0x0002f663) main_mp3_pane_ParamLimits

0x4a7e,	// (0x000327a4) navi_pane_ParamLimits

0xca25,	// (0x0003a74b) main_mp3_pane_g1_ParamLimits

0x5153,	// (0x00032e79) main_mp3_pane_g2_ParamLimits

0x5161,	// (0x00032e87) main_mp3_pane_g3_ParamLimits

0x5161,	// (0x00032e87) main_mp3_pane_g3

0x516f,	// (0x00032e95) main_mp3_pane_g4_ParamLimits

0x516f,	// (0x00032e95) main_mp3_pane_g4

0xca55,	// (0x0003a77b) main_mp3_pane_g5_ParamLimits

0xca55,	// (0x0003a77b) main_mp3_pane_g5

0xca63,	// (0x0003a789) main_mp3_pane_g6_ParamLimits

0xca63,	// (0x0003a789) main_mp3_pane_g6

0xca70,	// (0x0003a796) main_mp3_pane_g7_ParamLimits

0xca70,	// (0x0003a796) main_mp3_pane_g7

0xca7c,	// (0x0003a7a2) main_mp3_pane_g8_ParamLimits

0xca7c,	// (0x0003a7a2) main_mp3_pane_g8

0xf733,	// (0x0003d459) main_mp3_pane_g_ParamLimits

0x517b,	// (0x00032ea1) main_mp3_pane_t2

0x5189,	// (0x00032eaf) main_mp3_pane_t3

0xca96,	// (0x0003a7bc) main_mp3_pane_t4

0xcaa4,	// (0x0003a7ca) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003d46a) main_mp3_pane_t

0xcab2,	// (0x0003a7d8) mup_progress_pane_cp01

0x18b2,	// (0x0002f5d8) aid_zoom_text_secondary2

0xc86c,	// (0x0003a592) list_cale_ev2_pane

0xc874,	// (0x0003a59a) scroll_pane_cp023_ParamLimits

0x52df,	// (0x00033005) field_cale_ev2_pane_ParamLimits

0x52df,	// (0x00033005) field_cale_ev2_pane

0x52ff,	// (0x00033025) field_cale_ev2_pane_g1_ParamLimits

0x52ff,	// (0x00033025) field_cale_ev2_pane_g1

0x530b,	// (0x00033031) field_cale_ev2_pane_g2_ParamLimits

0x530b,	// (0x00033031) field_cale_ev2_pane_g2

0x5323,	// (0x00033049) field_cale_ev2_pane_g3_ParamLimits

0x5323,	// (0x00033049) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003d48b) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003d48b) field_cale_ev2_pane_g

0x533b,	// (0x00033061) field_cale_ev2_pane_t1_ParamLimits

0x533b,	// (0x00033061) field_cale_ev2_pane_t1

0x5352,	// (0x00033078) field_cale_ev2_pane_t2_ParamLimits

0x5352,	// (0x00033078) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003d494) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003d494) field_cale_ev2_pane_t

0x41fe,	// (0x00031f24) main_postcard_pane_g5_ParamLimits

0x41fe,	// (0x00031f24) main_postcard_pane_g5

0x4214,	// (0x00031f3a) main_postcard_pane_g6_ParamLimits

0x4214,	// (0x00031f3a) main_postcard_pane_g6

0x232c,	// (0x00030052) camera2_autofocus_pane_cp_ParamLimits

0x232c,	// (0x00030052) camera2_autofocus_pane_cp

0x193d,	// (0x0002f663) main_mup3_pane

0x5367,	// (0x0003308d) main_mup3_pane_g1_ParamLimits

0x5367,	// (0x0003308d) main_mup3_pane_g1

0x5389,	// (0x000330af) main_mup3_pane_g2_ParamLimits

0x5389,	// (0x000330af) main_mup3_pane_g2

0x5407,	// (0x0003312d) main_mup3_pane_g3_ParamLimits

0x5407,	// (0x0003312d) main_mup3_pane_g3

0x544d,	// (0x00033173) main_mup3_pane_g4_ParamLimits

0x544d,	// (0x00033173) main_mup3_pane_g4

0x5493,	// (0x000331b9) main_mup3_pane_g5_ParamLimits

0x5493,	// (0x000331b9) main_mup3_pane_g5

0x54d9,	// (0x000331ff) main_mup3_pane_g6_ParamLimits

0x54d9,	// (0x000331ff) main_mup3_pane_g6

0xcae6,	// (0x0003a80c) main_mup3_pane_g7_ParamLimits

0xcae6,	// (0x0003a80c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003d4a4) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003d4a4) main_mup3_pane_g

0x5557,	// (0x0003327d) main_mup3_pane_t1_ParamLimits

0x5557,	// (0x0003327d) main_mup3_pane_t1

0x55cb,	// (0x000332f1) main_mup3_pane_t2_ParamLimits

0x55cb,	// (0x000332f1) main_mup3_pane_t2

0x569f,	// (0x000333c5) main_mup3_pane_t4_ParamLimits

0x569f,	// (0x000333c5) main_mup3_pane_t4

0x56f5,	// (0x0003341b) main_mup3_pane_t5_ParamLimits

0x56f5,	// (0x0003341b) main_mup3_pane_t5

0x57b1,	// (0x000334d7) main_mup3_pane_t6_ParamLimits

0x57b1,	// (0x000334d7) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003d4b5) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003d4b5) main_mup3_pane_t

0x5869,	// (0x0003358f) mup3_progress_pane_ParamLimits

0x5869,	// (0x0003358f) mup3_progress_pane

0x58ff,	// (0x00033625) popup_mup3_control_window_ParamLimits

0x58ff,	// (0x00033625) popup_mup3_control_window

0xcaf4,	// (0x0003a81a) popup_mup3_text_window

0x5931,	// (0x00033657) mup3_progress_pane_t1

0x5950,	// (0x00033676) mup3_progress_pane_t2

0xcafc,	// (0x0003a822) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003d4c2) mup3_progress_pane_t

0xcb19,	// (0x0003a83f) mup_progress_pane_cp03

0x9b4c,	// (0x00037872) bg_tb_trans_pane_cp04

0x596f,	// (0x00033695) mup3_volume_pane

0x5977,	// (0x0003369d) popup_mup3_control_window_g1

0x5980,	// (0x000336a6) mup3_volume_pane_g1

0x5989,	// (0x000336af) mup3_volume_pane_g2

0x5992,	// (0x000336b8) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003d4c9) mup3_volume_pane_g

0x9b4c,	// (0x00037872) bg_tb_trans_pane_cp03

0xcb29,	// (0x0003a84f) popup_mup3_text_window_g1

0xcb31,	// (0x0003a857) popup_mup3_text_window_t1

0xa2d1,	// (0x00037ff7) list_calc_item_pane_g1_ParamLimits

0xc53c,	// (0x0003a262) mup_volume_pane_cp_g1

0x52a3,	// (0x00032fc9) main_touch_calib_pane_t3

0x52b7,	// (0x00032fdd) main_touch_calib_pane_t4

0x52cb,	// (0x00032ff1) main_touch_calib_pane_t5

0x189e,	// (0x0002f5c4) aid_cell_size_toolbar2

0x18a6,	// (0x0002f5cc) aid_popup3_width_pane

0x18b2,	// (0x0002f5d8) aid_zoom_text_msg_primary

0x2301,	// (0x00030027) vorec_t7

0xa295,	// (0x00037fbb) bg_calc_paper_pane_g1_ParamLimits

0xa2a1,	// (0x00037fc7) bg_calc_paper_pane_g2_ParamLimits

0xa2ad,	// (0x00037fd3) bg_calc_paper_pane_g3_ParamLimits

0xa2b9,	// (0x00037fdf) bg_calc_paper_pane_g4_ParamLimits

0xa2c5,	// (0x00037feb) bg_calc_paper_pane_g5_ParamLimits

0x1bfd,	// (0x0002f923) bg_calc_paper_pane_g6_ParamLimits

0x1c0c,	// (0x0002f932) bg_calc_paper_pane_g7_ParamLimits

0x1c1b,	// (0x0002f941) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003ce7e) bg_calc_paper_pane_g_ParamLimits

0x1c2e,	// (0x0002f954) calc_bg_paper_pane_g9_ParamLimits

0x2477,	// (0x0003019d) image_qvga_pane_ParamLimits

0x2477,	// (0x0003019d) image_qvga_pane

0xa1c4,	// (0x00037eea) bg_popup_sub_pane_cp04_ParamLimits

0xb1e8,	// (0x00038f0e) popup_mup_playback_window_g1_ParamLimits

0xb1f4,	// (0x00038f1a) popup_mup_playback_window_t1_ParamLimits

0xb209,	// (0x00038f2f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d208) popup_mup_playback_window_t_ParamLimits

0x4d7e,	// (0x00032aa4) main_mup2_pane_g3_ParamLimits

0x4d7e,	// (0x00032aa4) main_mup2_pane_g3

0x287f,	// (0x000305a5) popup_toolbar_window_cp04

0xb5eb,	// (0x00039311) popup_call2_audio_second_window_g3_ParamLimits

0xb5eb,	// (0x00039311) popup_call2_audio_second_window_g3

0xb9f5,	// (0x0003971b) popup_call2_audio_first_window_g4_ParamLimits

0xb9f5,	// (0x0003971b) popup_call2_audio_first_window_g4

0xc074,	// (0x00039d9a) popup_call2_audio_in_window_g4_ParamLimits

0xc074,	// (0x00039d9a) popup_call2_audio_in_window_g4

0x432b,	// (0x00032051) aid_area_sk_bg_cut_ParamLimits

0x432b,	// (0x00032051) aid_area_sk_bg_cut

0xb21e,	// (0x00038f44) aid_area_sk_bg_cut_2_ParamLimits

0xb21e,	// (0x00038f44) aid_area_sk_bg_cut_2

0x50e6,	// (0x00032e0c) aid_placing_details_win

0x50ee,	// (0x00032e14) aid_placing_details_win_2

0xc967,	// (0x0003a68d) camera2_autofocus_pane_g1_ParamLimits

0x02cc,	// (0x0002dff2) popup_fixed_preview_cale_window_ParamLimits

0x02cc,	// (0x0002dff2) popup_fixed_preview_cale_window

0xaf6b,	// (0x00038c91) navi_slider_pane_g3

0xaf74,	// (0x00038c9a) navi_slider_pane_g4

0xaf7d,	// (0x00038ca3) navi_slider_pane_g5

0xaf6b,	// (0x00038c91) navi_slider_pane_g6

0x3c5e,	// (0x00031984) navi_slider_pane_g7

0xb09e,	// (0x00038dc4) mup_scale_pane_g3

0xb0a7,	// (0x00038dcd) mup_scale_pane_g4

0xb0b0,	// (0x00038dd6) mup_scale_pane_g5

0x4061,	// (0x00031d87) mup_scale_pane_g6

0x406a,	// (0x00031d90) mup_scale_pane_g7

0xaf6b,	// (0x00038c91) cams2_slider_pane_g3

0xc5be,	// (0x0003a2e4) cams2_slider_pane_g4

0x5033,	// (0x00032d59) cams2_slider_pane_g5

0xaf6b,	// (0x00038c91) cams2_slider_pane_g6

0x503b,	// (0x00032d61) cams2_slider_pane_g7

0xc7e9,	// (0x0003a50f) camera2_autofocus_pane_cp_g1

0xc3d5,	// (0x0003a0fb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3d5,	// (0x0003a0fb) bg_popup_preview_window_pane_cp02

0xcb3f,	// (0x0003a865) list_fp_cale_pane_ParamLimits

0xcb3f,	// (0x0003a865) list_fp_cale_pane

0xcb4b,	// (0x0003a871) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb4b,	// (0x0003a871) popup_fixed_preview_cale_window_t1

0x599b,	// (0x000336c1) popup_fixed_preview_cale_window_t2_ParamLimits

0x599b,	// (0x000336c1) popup_fixed_preview_cale_window_t2

0x59b0,	// (0x000336d6) popup_fixed_preview_cale_window_t3_ParamLimits

0x59b0,	// (0x000336d6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003d4d0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003d4d0) popup_fixed_preview_cale_window_t

0x59c5,	// (0x000336eb) list_single_fp_cale_pane_ParamLimits

0x59c5,	// (0x000336eb) list_single_fp_cale_pane

0xcb69,	// (0x0003a88f) list_single_fp_cale_pane_g1_ParamLimits

0xcb69,	// (0x0003a88f) list_single_fp_cale_pane_g1

0xcb75,	// (0x0003a89b) list_single_fp_cale_pane_g2_ParamLimits

0xcb75,	// (0x0003a89b) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003d4d7) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003d4d7) list_single_fp_cale_pane_g

0xcb8e,	// (0x0003a8b4) list_single_fp_cale_pane_t1_ParamLimits

0xcb8e,	// (0x0003a8b4) list_single_fp_cale_pane_t1

0xcba0,	// (0x0003a8c6) list_single_fp_cale_pane_t2_ParamLimits

0xcba0,	// (0x0003a8c6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003d4de) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003d4de) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1957,	// (0x0002f67d) main_dialer_pane

0x59da,	// (0x00033700) aid_cell_size_keypad

0x59e4,	// (0x0003370a) dialer_ne_pane

0x59ec,	// (0x00033712) grid_dialer_command_1_pane

0x59f4,	// (0x0003371a) grid_dialer_command_2_pane

0x59fc,	// (0x00033722) grid_dialer_keypad_pane

0x5a0e,	// (0x00033734) bg_popup_call_pane_cp06_ParamLimits

0x5a0e,	// (0x00033734) bg_popup_call_pane_cp06

0x5a1a,	// (0x00033740) dialer_ne_clear_pane_ParamLimits

0x5a1a,	// (0x00033740) dialer_ne_clear_pane

0xcbd3,	// (0x0003a8f9) dialer_ne_pane_g1

0xcbdb,	// (0x0003a901) dialer_ne_pane_t1_ParamLimits

0xcbdb,	// (0x0003a901) dialer_ne_pane_t1

0x5a26,	// (0x0003374c) dialer_ne_pane_t2_ParamLimits

0x5a26,	// (0x0003374c) dialer_ne_pane_t2

0x5a50,	// (0x00033776) dialer_ne_pane_t3_ParamLimits

0x5a50,	// (0x00033776) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003d4e3) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003d4e3) dialer_ne_pane_t

0x5a80,	// (0x000337a6) dialer_ne_pane_t3_copy1_ParamLimits

0x5a80,	// (0x000337a6) dialer_ne_pane_t3_copy1

0x5aaf,	// (0x000337d5) cell_dialer_keypad_pane_ParamLimits

0x5aaf,	// (0x000337d5) cell_dialer_keypad_pane

0x5ac6,	// (0x000337ec) cell_dialer_command_1_pane_ParamLimits

0x5ac6,	// (0x000337ec) cell_dialer_command_1_pane

0x5adc,	// (0x00033802) cell_dialer_command_2_pane_ParamLimits

0x5adc,	// (0x00033802) cell_dialer_command_2_pane

0xcbed,	// (0x0003a913) bg_button_pane_cp02_ParamLimits

0xcbed,	// (0x0003a913) bg_button_pane_cp02

0x5aeb,	// (0x00033811) cell_dialer_keypad_pane_g1_ParamLimits

0x5aeb,	// (0x00033811) cell_dialer_keypad_pane_g1

0xcbed,	// (0x0003a913) bg_button_pane_cp03_ParamLimits

0xcbed,	// (0x0003a913) bg_button_pane_cp03

0x5aff,	// (0x00033825) cell_dialer_command_1_pane_g1_ParamLimits

0x5aff,	// (0x00033825) cell_dialer_command_1_pane_g1

0xcbf9,	// (0x0003a91f) bg_button_pane_cp04

0x5b13,	// (0x00033839) cell_dialer_command_2_pane_g1

0xa44e,	// (0x00038174) bg_button_pane_cp06

0xcc01,	// (0x0003a927) dialer_ne_clear_pane_g1

0xae3e,	// (0x00038b64) navi_pane_g2

0xae6c,	// (0x00038b92) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003d10b) navi_pane_g

0xaefb,	// (0x00038c21) navi_pane_mv_g2

0xaf22,	// (0x00038c48) navi_pane_mv_g5

0x3c13,	// (0x00031939) navi_pane_mv_t1

0xa289,	// (0x00037faf) main_clock2_pane

0x5b5e,	// (0x00033884) main_clock2_list_pane_ParamLimits

0x5b5e,	// (0x00033884) main_clock2_list_pane

0x5b94,	// (0x000338ba) main_clock2_pane_t1_ParamLimits

0x5b94,	// (0x000338ba) main_clock2_pane_t1

0x5bd0,	// (0x000338f6) main_clock2_pane_t2_ParamLimits

0x5bd0,	// (0x000338f6) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003d4ef) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003d4ef) main_clock2_pane_t

0x5c6e,	// (0x00033994) popup_clock_analogue_window_cp03_ParamLimits

0x5c6e,	// (0x00033994) popup_clock_analogue_window_cp03

0x5c93,	// (0x000339b9) popup_clock_digital_window_cp02_ParamLimits

0x5c93,	// (0x000339b9) popup_clock_digital_window_cp02

0x5d04,	// (0x00033a2a) main_clock2_list_single_pane_ParamLimits

0x5d04,	// (0x00033a2a) main_clock2_list_single_pane

0xa44e,	// (0x00038174) list_highlight_pane_cp05

0xcc3f,	// (0x0003a965) main_clock2_list_single_pane_t1

0x287f,	// (0x000305a5) popup_toolbar_window_cp04_ParamLimits

0x5110,	// (0x00032e36) camera2_autofocus_pane_g2_ParamLimits

0x5110,	// (0x00032e36) camera2_autofocus_pane_g2

0x511c,	// (0x00032e42) camera2_autofocus_pane_g3_ParamLimits

0x511c,	// (0x00032e42) camera2_autofocus_pane_g3

0x5128,	// (0x00032e4e) camera2_autofocus_pane_g4_ParamLimits

0x5128,	// (0x00032e4e) camera2_autofocus_pane_g4

0x5134,	// (0x00032e5a) camera2_autofocus_pane_g5_ParamLimits

0x5134,	// (0x00032e5a) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003d433) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003d433) camera2_autofocus_pane_g

0xcac6,	// (0x0003a7ec) camera2_autofocus_pane_cp_g2

0xcace,	// (0x0003a7f4) camera2_autofocus_pane_cp_g3

0xcad6,	// (0x0003a7fc) camera2_autofocus_pane_cp_g4

0xcade,	// (0x0003a804) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003d499) camera2_autofocus_pane_cp_g

0x5a06,	// (0x0003372c) popup_dialer_spcha_window

0x9b4c,	// (0x00037872) bg_popup_sub_pane_cp07

0xcc4d,	// (0x0003a973) list_spcha_pane

0xcc55,	// (0x0003a97b) list_single_spcha_pane_ParamLimits

0xcc55,	// (0x0003a97b) list_single_spcha_pane

0x9b4c,	// (0x00037872) list_highlight_pane_cp06

0xcc66,	// (0x0003a98c) list_single_spcha_pane_t1

0xbe1e,	// (0x00039b44) popup_call2_audio_out_window_g4_ParamLimits

0xbe1e,	// (0x00039b44) popup_call2_audio_out_window_g4

0x1957,	// (0x0002f67d) main_imed2_pane

0x4a44,	// (0x0003276a) popup_imed_adjust2_window

0x0742,	// (0x0002e468) popup_imed_trans_window_ParamLimits

0x0742,	// (0x0002e468) popup_imed_trans_window

0xc627,	// (0x0003a34d) popup_blid_sat_info2_window_t1

0xc635,	// (0x0003a35b) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003d3c8) popup_blid_sat_info2_window_t

0x5d36,	// (0x00033a5c) aid_size_cell_colour_35

0x5d56,	// (0x00033a7c) aid_size_cell_colour_112

0x5d76,	// (0x00033a9c) aid_size_cell_effect

0xc3e1,	// (0x0003a107) bg_tb_trans_pane_cp02

0xa99d,	// (0x000386c3) heading_imed_pane

0x5d96,	// (0x00033abc) listscroll_imed_pane

0xcc74,	// (0x0003a99a) heading_imed_pane_g1

0xcc88,	// (0x0003a9ae) heading_imed_pane_t1

0xcc96,	// (0x0003a9bc) grid_imed_colour_35_pane_ParamLimits

0xcc96,	// (0x0003a9bc) grid_imed_colour_35_pane

0x5da2,	// (0x00033ac8) grid_imed_effect_pane

0xccad,	// (0x0003a9d3) list_imed_aspect_pane

0x5db8,	// (0x00033ade) scroll_pane_cp027_ParamLimits

0x5db8,	// (0x00033ade) scroll_pane_cp027

0x5dc9,	// (0x00033aef) cell_imed_effect_pane_ParamLimits

0x5dc9,	// (0x00033aef) cell_imed_effect_pane

0xccb5,	// (0x0003a9db) cell_imed_colour_pane_ParamLimits

0xccb5,	// (0x0003a9db) cell_imed_colour_pane

0xccf7,	// (0x0003aa1d) cell_imed_colour_pane_g1_ParamLimits

0xccf7,	// (0x0003aa1d) cell_imed_colour_pane_g1

0xcd08,	// (0x0003aa2e) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd08,	// (0x0003aa2e) hgihlgiht_grid_pane_cp016

0x5df0,	// (0x00033b16) cell_imed_effect_pane_g1

0x5df8,	// (0x00033b1e) grid_highlight_pane_cp017

0xcd19,	// (0x0003aa3f) list_imed_single_pane_ParamLimits

0xcd19,	// (0x0003aa3f) list_imed_single_pane

0x9b4c,	// (0x00037872) list_highlight_pane_cp07

0xcd2e,	// (0x0003aa54) list_imed_aspect_pane_comp1_t1

0xc3e1,	// (0x0003a107) bg_tb_trans_pane_cp05

0xcd50,	// (0x0003aa76) popup_imed_adjust2_window_g1

0xcd77,	// (0x0003aa9d) popup_imed_adjust2_window_t1

0xcd8f,	// (0x0003aab5) slider_imed_adjust_pane

0xcda3,	// (0x0003aac9) slider_imed_adjust_pane_g1

0xcdb3,	// (0x0003aad9) slider_imed_adjust_pane_g2

0xcdc3,	// (0x0003aae9) slider_imed_adjust_pane_g3

0xcdd4,	// (0x0003aafa) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003d50c) slider_imed_adjust_pane_g

0x5e01,	// (0x00033b27) aid_size_cell_clipart2

0x5e0d,	// (0x00033b33) grid_imed_clipart_pane

0xcde5,	// (0x0003ab0b) scroll_pane_cp031

0x5e17,	// (0x00033b3d) cell_imed_clipart_pane_ParamLimits

0x5e17,	// (0x00033b3d) cell_imed_clipart_pane

0x5e39,	// (0x00033b5f) cell_imed_clipart_pane_g1

0x9b4c,	// (0x00037872) grid_highlight_pane_cp014

0x5b73,	// (0x00033899) main_clock2_pane_g1_ParamLimits

0x5b73,	// (0x00033899) main_clock2_pane_g1

0x5caf,	// (0x000339d5) aid_call2_pane_cp10

0x5cc1,	// (0x000339e7) aid_call_pane_cp10

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g1

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g2

0x5cd3,	// (0x000339f9) popup_clock_analogue_window_cp10_g3

0x5cd3,	// (0x000339f9) popup_clock_analogue_window_cp10_g4

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003d4fa) popup_clock_analogue_window_cp10_g

0x5ce5,	// (0x00033a0b) popup_clock_analogue_window_cp10_t1

0x0d86,	// (0x0002eaac) clock_digital_number_pane_cp10_ParamLimits

0x0d86,	// (0x0002eaac) clock_digital_number_pane_cp10

0x0d9e,	// (0x0002eac4) clock_digital_number_pane_cp11_ParamLimits

0x0d9e,	// (0x0002eac4) clock_digital_number_pane_cp11

0x0db6,	// (0x0002eadc) clock_digital_number_pane_cp12_ParamLimits

0x0db6,	// (0x0002eadc) clock_digital_number_pane_cp12

0x0dce,	// (0x0002eaf4) clock_digital_number_pane_cp13_ParamLimits

0x0dce,	// (0x0002eaf4) clock_digital_number_pane_cp13

0x0de6,	// (0x0002eb0c) clock_digital_separator_pane_cp10_ParamLimits

0x0de6,	// (0x0002eb0c) clock_digital_separator_pane_cp10

0x5d16,	// (0x00033a3c) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d16,	// (0x00033a3c) popup_clock_digital_window_cp02_t1

0xa1bc,	// (0x00037ee2) clock_digital_number_pane_cp10_g1

0xa1bc,	// (0x00037ee2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003d515) clock_digital_number_pane_cp10_g

0xa1bc,	// (0x00037ee2) clock_digital_separator_pane_cp10_g1

0xa1bc,	// (0x00037ee2) clock_digital_separator_pane_g2_cp10

0xaf2a,	// (0x00038c50) navi_pane_vded_g4

0xaf33,	// (0x00038c59) navi_pane_vded_g5

0xaf3c,	// (0x00038c62) navi_pane_vded_t1

0x1957,	// (0x0002f67d) main_vded_pane

0x5e42,	// (0x00033b68) main_vded_pane_g1

0x5e4c,	// (0x00033b72) main_vded_pane_g2

0x5e56,	// (0x00033b7c) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003d51a) main_vded_pane_g

0x5e60,	// (0x00033b86) main_vded_pane_t1

0x5e6e,	// (0x00033b94) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003d521) main_vded_pane_t

0x5e7c,	// (0x00033ba2) vded_slider_pane

0x5e84,	// (0x00033baa) vded_video_pane

0xcded,	// (0x0003ab13) vded_video_pane_g1

0x5e8c,	// (0x00033bb2) vded_video_pane_g2

0xc7e9,	// (0x0003a50f) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003d526) vded_video_pane_g

0xcdf7,	// (0x0003ab1d) vded_slider_pane_g1

0xc53c,	// (0x0003a262) vded_slider_pane_g2

0xce00,	// (0x0003ab26) vded_slider_pane_g3

0xce09,	// (0x0003ab2f) vded_slider_pane_g4

0xce12,	// (0x0003ab38) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003d52d) vded_slider_pane_g

0x58e7,	// (0x0003360d) mup3_rocker_pane_ParamLimits

0x58e7,	// (0x0003360d) mup3_rocker_pane

0x5e95,	// (0x00033bbb) mup3_control_keys_pane_g1

0x5e9d,	// (0x00033bc3) mup3_control_keys_pane_g2

0x5ea5,	// (0x00033bcb) mup3_control_keys_pane_g3

0x5ead,	// (0x00033bd3) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003d538) mup3_control_keys_pane_g

0x0303,	// (0x0002e029) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0303,	// (0x0002e029) popup_toolbar2_fixed_window_cp01

0x591b,	// (0x00033641) popup_toolbar2_fixed_window_cp02_ParamLimits

0x591b,	// (0x00033641) popup_toolbar2_fixed_window_cp02

0xb75d,	// (0x00039483) popup_call2_audio_second_window_t4_ParamLimits

0xb75d,	// (0x00039483) popup_call2_audio_second_window_t4

0xbc8b,	// (0x000399b1) popup_call2_audio_first_window_t6_ParamLimits

0xbc8b,	// (0x000399b1) popup_call2_audio_first_window_t6

0xbf21,	// (0x00039c47) popup_call2_audio_out_window_t6_ParamLimits

0xbf21,	// (0x00039c47) popup_call2_audio_out_window_t6

0x1957,	// (0x0002f67d) main_vitu_pane

0x5ebd,	// (0x00033be3) aid_size_cell_itu_ParamLimits

0x5ebd,	// (0x00033be3) aid_size_cell_itu

0xa6d7,	// (0x000383fd) bg_popup_window_pane_cp08_ParamLimits

0xa6d7,	// (0x000383fd) bg_popup_window_pane_cp08

0x5ed3,	// (0x00033bf9) field_vitu_entry_pane_ParamLimits

0x5ed3,	// (0x00033bf9) field_vitu_entry_pane

0x5eea,	// (0x00033c10) grid_vitu_function_pane_ParamLimits

0x5eea,	// (0x00033c10) grid_vitu_function_pane

0x5f05,	// (0x00033c2b) grid_vitu_itu_pane_ParamLimits

0x5f05,	// (0x00033c2b) grid_vitu_itu_pane

0x5f23,	// (0x00033c49) cell_vitu_itu_pane_ParamLimits

0x5f23,	// (0x00033c49) cell_vitu_itu_pane

0x5f45,	// (0x00033c6b) cell_vitu_function_pane_ParamLimits

0x5f45,	// (0x00033c6b) cell_vitu_function_pane

0xa6d7,	// (0x000383fd) bg_popup_sub_pane_cp08_ParamLimits

0xa6d7,	// (0x000383fd) bg_popup_sub_pane_cp08

0x5f5e,	// (0x00033c84) field_vitu_entry_pane_t1_ParamLimits

0x5f5e,	// (0x00033c84) field_vitu_entry_pane_t1

0xce33,	// (0x0003ab59) field_vitu_entry_pane_t2_ParamLimits

0xce33,	// (0x0003ab59) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003d546) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003d546) field_vitu_entry_pane_t

0xce50,	// (0x0003ab76) bg_button_pane_cp05_ParamLimits

0xce50,	// (0x0003ab76) bg_button_pane_cp05

0x5f7c,	// (0x00033ca2) cell_vitu_itu_pane_g1

0x5f94,	// (0x00033cba) cell_vitu_itu_pane_t1_ParamLimits

0x5f94,	// (0x00033cba) cell_vitu_itu_pane_t1

0x5fa6,	// (0x00033ccc) cell_vitu_itu_pane_t2_ParamLimits

0x5fa6,	// (0x00033ccc) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003d54b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003d54b) cell_vitu_itu_pane_t

0xce5e,	// (0x0003ab84) bg_button_pane_cp07

0x5fdb,	// (0x00033d01) cell_vitu_function_pane_g1

0x1af9,	// (0x0002f81f) main_calc_pane_g1

0x0163,	// (0x0002de89) aid_visual_content_pane

0x1957,	// (0x0002f67d) main_vradio_pane

0x5fe4,	// (0x00033d0a) main_vradio_pane_g1_ParamLimits

0x5fe4,	// (0x00033d0a) main_vradio_pane_g1

0xce68,	// (0x0003ab8e) main_vradio_pane_g2_ParamLimits

0xce68,	// (0x0003ab8e) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003d552) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003d552) main_vradio_pane_g

0x5ffd,	// (0x00033d23) main_vradio_pane_t1_ParamLimits

0x5ffd,	// (0x00033d23) main_vradio_pane_t1

0x6012,	// (0x00033d38) main_vradio_pane_t2_ParamLimits

0x6012,	// (0x00033d38) main_vradio_pane_t2

0xce75,	// (0x0003ab9b) main_vradio_pane_t3_ParamLimits

0xce75,	// (0x0003ab9b) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003d557) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003d557) main_vradio_pane_t

0x6027,	// (0x00033d4d) vradio_rocker_control_pane_ParamLimits

0x6027,	// (0x00033d4d) vradio_rocker_control_pane

0x6039,	// (0x00033d5f) vradio_station_info_pane_ParamLimits

0x6039,	// (0x00033d5f) vradio_station_info_pane

0xce89,	// (0x0003abaf) vradio_frequency_info_pane_ParamLimits

0xce89,	// (0x0003abaf) vradio_frequency_info_pane

0xc7e9,	// (0x0003a50f) vradio_station_info_pane_g1

0xce98,	// (0x0003abbe) vradio_station_info_pane_t1_ParamLimits

0xce98,	// (0x0003abbe) vradio_station_info_pane_t1

0xceba,	// (0x0003abe0) vradio_station_info_pane_t2_ParamLimits

0xceba,	// (0x0003abe0) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003d55e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003d55e) vradio_station_info_pane_t

0xcecc,	// (0x0003abf2) vradio_tuning_pane

0xced4,	// (0x0003abfa) vradio_rocker_control_pane_g1

0xcedc,	// (0x0003ac02) vradio_rocker_control_pane_g2

0xcee4,	// (0x0003ac0a) vradio_rocker_control_pane_g3

0xceec,	// (0x0003ac12) vradio_rocker_control_pane_g4

0xcef4,	// (0x0003ac1a) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003d563) vradio_rocker_control_pane_g

0x604b,	// (0x00033d71) vradio_frequency_info_pane_g1

0xcefc,	// (0x0003ac22) vradio_frequency_info_pane_t1_ParamLimits

0xcefc,	// (0x0003ac22) vradio_frequency_info_pane_t1

0x6055,	// (0x00033d7b) vradio_tuning_pane_g1

0x6060,	// (0x00033d86) vradio_tuning_pane_t1

0x18fb,	// (0x0002f621) area_side_right_pane_ParamLimits

0x18fb,	// (0x0002f621) area_side_right_pane

0xc39c,	// (0x0003a0c2) status_small_pane_g1

0xc3a4,	// (0x0003a0ca) status_small_pane_g2

0xc3ad,	// (0x0003a0d3) status_small_pane_g3

0xc3b6,	// (0x0003a0dc) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003d31e) status_small_pane_g

0xc3bf,	// (0x0003a0e5) status_small_pane_t1

0x1957,	// (0x0002f67d) main_video3_pane

0xcf10,	// (0x0003ac36) cams_zoom_vslider_pane

0xcf18,	// (0x0003ac3e) image3_wide_pane_ParamLimits

0xcf18,	// (0x0003ac3e) image3_wide_pane

0xcf32,	// (0x0003ac58) image3_wide_small_pane

0xcf3e,	// (0x0003ac64) main_video3_pane_g1_ParamLimits

0xcf3e,	// (0x0003ac64) main_video3_pane_g1

0xcf5a,	// (0x0003ac80) main_video3_pane_g2_ParamLimits

0xcf5a,	// (0x0003ac80) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003d56e) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003d56e) main_video3_pane_g

0xcf76,	// (0x0003ac9c) main_video3_pane_t1_ParamLimits

0xcf76,	// (0x0003ac9c) main_video3_pane_t1

0xcfa1,	// (0x0003acc7) main_video3_pane_t2_ParamLimits

0xcfa1,	// (0x0003acc7) main_video3_pane_t2

0xcfcc,	// (0x0003acf2) main_video3_pane_t3_ParamLimits

0xcfcc,	// (0x0003acf2) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003d573) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003d573) main_video3_pane_t

0xcff9,	// (0x0003ad1f) cams_zoom_vslider_pane_g1

0xd002,	// (0x0003ad28) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003d57a) cams_zoom_vslider_pane_g

0xd00a,	// (0x0003ad30) small_slider_vertical_pane

0xc7e9,	// (0x0003a50f) small_slider_vertical_pane_g1

0xc7e9,	// (0x0003a50f) small_slider_vertical_pane_g2

0xd012,	// (0x0003ad38) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003d57f) small_slider_vertical_pane_g

0x1957,	// (0x0002f67d) main_hwr_training_pane

0xd01b,	// (0x0003ad41) hwr_training_instruct_pane_ParamLimits

0xd01b,	// (0x0003ad41) hwr_training_instruct_pane

0x606f,	// (0x00033d95) hwr_training_navi_pane_ParamLimits

0x606f,	// (0x00033d95) hwr_training_navi_pane

0x608e,	// (0x00033db4) hwr_training_write_pane_ParamLimits

0x608e,	// (0x00033db4) hwr_training_write_pane

0x9b4c,	// (0x00037872) bg_frame_shadow_pane

0xd052,	// (0x0003ad78) hwr_training_write_pane_g1

0xd05a,	// (0x0003ad80) hwr_training_write_pane_g2

0xd062,	// (0x0003ad88) hwr_training_write_pane_g3

0xd06a,	// (0x0003ad90) hwr_training_write_pane_g4

0xd072,	// (0x0003ad98) hwr_training_write_pane_g5

0xd07a,	// (0x0003ada0) hwr_training_write_pane_g6

0xd082,	// (0x0003ada8) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003d586) hwr_training_write_pane_g

0x60c9,	// (0x00033def) hwr_training_navi_pane_g1_ParamLimits

0x60c9,	// (0x00033def) hwr_training_navi_pane_g1

0x60db,	// (0x00033e01) hwr_training_navi_pane_g2_ParamLimits

0x60db,	// (0x00033e01) hwr_training_navi_pane_g2

0x60ed,	// (0x00033e13) hwr_training_navi_pane_g3_ParamLimits

0x60ed,	// (0x00033e13) hwr_training_navi_pane_g3

0x60fd,	// (0x00033e23) hwr_training_navi_pane_g4_ParamLimits

0x60fd,	// (0x00033e23) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003d595) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003d595) hwr_training_navi_pane_g

0x610a,	// (0x00033e30) hwr_training_navi_pane_t1

0x6118,	// (0x00033e3e) list_single_hwr_training_instruct_pane_ParamLimits

0x6118,	// (0x00033e3e) list_single_hwr_training_instruct_pane

0xd08a,	// (0x0003adb0) list_single_hwr_training_instruct_pane_t1

0xc729,	// (0x0003a44f) bg_frame_shadow_pane_g1

0xd099,	// (0x0003adbf) bg_frame_shadow_pane_g2

0xd0a1,	// (0x0003adc7) bg_frame_shadow_pane_g3

0xd0a9,	// (0x0003adcf) bg_frame_shadow_pane_g4

0xd0b1,	// (0x0003add7) bg_frame_shadow_pane_g5

0xd0b9,	// (0x0003addf) bg_frame_shadow_pane_g6

0xd0c1,	// (0x0003ade7) bg_frame_shadow_pane_g7

0xa342,	// (0x00038068) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003d5a0) bg_frame_shadow_pane_g

0x1957,	// (0x0002f67d) main_video_tele_dialer_pane

0x0e0b,	// (0x0002eb31) aid_size_cell_video_keypad_ParamLimits

0x0e0b,	// (0x0002eb31) aid_size_cell_video_keypad

0x0e25,	// (0x0002eb4b) grid_video_dialer_keypad_pane_ParamLimits

0x0e25,	// (0x0002eb4b) grid_video_dialer_keypad_pane

0x0e71,	// (0x0002eb97) video_down_pane_cp_ParamLimits

0x0e71,	// (0x0002eb97) video_down_pane_cp

0x0e87,	// (0x0002ebad) cell_video_dialer_keypad_pane_ParamLimits

0x0e87,	// (0x0002ebad) cell_video_dialer_keypad_pane

0xd0c9,	// (0x0003adef) bg_button_pane_cp08_ParamLimits

0xd0c9,	// (0x0003adef) bg_button_pane_cp08

0x6149,	// (0x00033e6f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6149,	// (0x00033e6f) cell_video_dialer_keypad_pane_g1

0x58d1,	// (0x000335f7) mup3_rocker2_pane_ParamLimits

0x58d1,	// (0x000335f7) mup3_rocker2_pane

0xc7e9,	// (0x0003a50f) mup3_rocker2_pane_g1

0x0623,	// (0x0002e349) main_dialer2_pane

0x1957,	// (0x0002f67d) main_mp4_pane

0x6188,	// (0x00033eae) main_mp4_pane_g1_ParamLimits

0x6188,	// (0x00033eae) main_mp4_pane_g1

0x6188,	// (0x00033eae) main_mp4_pane_g2_ParamLimits

0x6188,	// (0x00033eae) main_mp4_pane_g2

0x0ea9,	// (0x0002ebcf) main_mp4_pane_g3_ParamLimits

0x0ea9,	// (0x0002ebcf) main_mp4_pane_g3

0x6196,	// (0x00033ebc) main_mp4_pane_g4_ParamLimits

0x6196,	// (0x00033ebc) main_mp4_pane_g4

0x61be,	// (0x00033ee4) main_mp4_pane_g5_ParamLimits

0x61be,	// (0x00033ee4) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003d5c0) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003d5c0) main_mp4_pane_g

0x620e,	// (0x00033f34) main_mp4_pane_t1_ParamLimits

0x620e,	// (0x00033f34) main_mp4_pane_t1

0x626a,	// (0x00033f90) main_mp4_pane_t2_ParamLimits

0x626a,	// (0x00033f90) main_mp4_pane_t2

0xd0d5,	// (0x0003adfb) main_mp4_pane_t3_ParamLimits

0xd0d5,	// (0x0003adfb) main_mp4_pane_t3

0x62bc,	// (0x00033fe2) main_mp4_pane_t4_ParamLimits

0x62bc,	// (0x00033fe2) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003d5cd) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003d5cd) main_mp4_pane_t

0x6300,	// (0x00034026) mp4_progress_pane_ParamLimits

0x6300,	// (0x00034026) mp4_progress_pane

0x634a,	// (0x00034070) mp4_rocker_pane_ParamLimits

0x634a,	// (0x00034070) mp4_rocker_pane

0xd0fd,	// (0x0003ae23) mp4_progress_pane_t1

0xd116,	// (0x0003ae3c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003d5d6) mp4_progress_pane_t

0xd12f,	// (0x0003ae55) mup_progress_pane_cp04

0xd8cd,	// (0x0003b5f3) mp4_rocker_pane_g1

0x0ee5,	// (0x0002ec0b) aid_cell_size_keypad2_ParamLimits

0x0ee5,	// (0x0002ec0b) aid_cell_size_keypad2

0x0efb,	// (0x0002ec21) dialer2_ne_pane_ParamLimits

0x0efb,	// (0x0002ec21) dialer2_ne_pane

0x0f15,	// (0x0002ec3b) grid_dialer2_keypad_pane_ParamLimits

0x0f15,	// (0x0002ec3b) grid_dialer2_keypad_pane

0xc5ce,	// (0x0003a2f4) bg_popup_call_pane_cp07_ParamLimits

0xc5ce,	// (0x0003a2f4) bg_popup_call_pane_cp07

0x636a,	// (0x00034090) dialer2_ne_pane_t1_ParamLimits

0x636a,	// (0x00034090) dialer2_ne_pane_t1

0x0f31,	// (0x0002ec57) cell_dialer2_keypad_pane_ParamLimits

0x0f31,	// (0x0002ec57) cell_dialer2_keypad_pane

0xd14d,	// (0x0003ae73) bg_button_pane_pane_cp04_ParamLimits

0xd14d,	// (0x0003ae73) bg_button_pane_pane_cp04

0x63a5,	// (0x000340cb) cell_dialer2_keypad_pane_g1_ParamLimits

0x63a5,	// (0x000340cb) cell_dialer2_keypad_pane_g1

0x2753,	// (0x00030479) aid_placing_vt_set_content_ParamLimits

0x2753,	// (0x00030479) aid_placing_vt_set_content

0x277b,	// (0x000304a1) aid_placing_vt_set_title_ParamLimits

0x277b,	// (0x000304a1) aid_placing_vt_set_title

0x1957,	// (0x0002f67d) main_image3_pane

0x0fb1,	// (0x0002ecd7) area_side_right_pane_cp01_ParamLimits

0x0fb1,	// (0x0002ecd7) area_side_right_pane_cp01

0x6188,	// (0x00033eae) main_image3_pane_g1_ParamLimits

0x6188,	// (0x00033eae) main_image3_pane_g1

0x0fc8,	// (0x0002ecee) main_image3_pane_g2_ParamLimits

0x0fc8,	// (0x0002ecee) main_image3_pane_g2

0x0ff0,	// (0x0002ed16) main_image3_pane_g3_ParamLimits

0x0ff0,	// (0x0002ed16) main_image3_pane_g3

0x101a,	// (0x0002ed40) main_image3_pane_g4_ParamLimits

0x101a,	// (0x0002ed40) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003d5e5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003d5e5) main_image3_pane_g

0x1044,	// (0x0002ed6a) main_image3_pane_t1_ParamLimits

0x1044,	// (0x0002ed6a) main_image3_pane_t1

0x109c,	// (0x0002edc2) main_image3_pane_t2_ParamLimits

0x109c,	// (0x0002edc2) main_image3_pane_t2

0x10ee,	// (0x0002ee14) main_image3_pane_t3_ParamLimits

0x10ee,	// (0x0002ee14) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003d5ee) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003d5ee) main_image3_pane_t

0xa6d7,	// (0x000383fd) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6d7,	// (0x000383fd) grid_sctrl_middle_pane_cp01

0x643f,	// (0x00034165) cell_sctrl_middle_pane_cp01_ParamLimits

0x643f,	// (0x00034165) cell_sctrl_middle_pane_cp01

0x645c,	// (0x00034182) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x645c,	// (0x00034182) cell_sctrl_middle_pane_cp01_g1

0x1957,	// (0x0002f67d) main_call4_pane

0x6472,	// (0x00034198) aid_size_button_call4_ParamLimits

0x6472,	// (0x00034198) aid_size_button_call4

0x64a3,	// (0x000341c9) call4_windows_pane_ParamLimits

0x64a3,	// (0x000341c9) call4_windows_pane

0x64c3,	// (0x000341e9) grid_call4_button_pane_ParamLimits

0x64c3,	// (0x000341e9) grid_call4_button_pane

0xd159,	// (0x0003ae7f) call4_windows_conf_pane

0xd170,	// (0x0003ae96) popup_call4_audio_first_window_ParamLimits

0xd170,	// (0x0003ae96) popup_call4_audio_first_window

0xd1bc,	// (0x0003aee2) popup_call4_audio_second_window_ParamLimits

0xd1bc,	// (0x0003aee2) popup_call4_audio_second_window

0xd1d0,	// (0x0003aef6) popup_call4_audio_wait_window_ParamLimits

0xd1d0,	// (0x0003aef6) popup_call4_audio_wait_window

0x64f0,	// (0x00034216) cell_call4_button_pane_ParamLimits

0x64f0,	// (0x00034216) cell_call4_button_pane

0x6519,	// (0x0003423f) bg_button_pane_cp09_ParamLimits

0x6519,	// (0x0003423f) bg_button_pane_cp09

0x6525,	// (0x0003424b) cell_call4_button_pane_g1_ParamLimits

0x6525,	// (0x0003424b) cell_call4_button_pane_g1

0x654b,	// (0x00034271) cell_call4_button_pane_t1_ParamLimits

0x654b,	// (0x00034271) cell_call4_button_pane_t1

0xd218,	// (0x0003af3e) popup_call4_audio_conf_window_ParamLimits

0xd218,	// (0x0003af3e) popup_call4_audio_conf_window

0x5931,	// (0x00033657) mup3_progress_pane_t1_ParamLimits

0x5950,	// (0x00033676) mup3_progress_pane_t2_ParamLimits

0xcafc,	// (0x0003a822) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003d4c2) mup3_progress_pane_t_ParamLimits

0xcb19,	// (0x0003a83f) mup_progress_pane_cp03_ParamLimits

0x5eb5,	// (0x00033bdb) mup3_control_keys_pane_g4_copy1

0x632e,	// (0x00034054) mp4_rocker2_pane_ParamLimits

0x632e,	// (0x00034054) mp4_rocker2_pane

0xd22c,	// (0x0003af52) mp4_rocker2_pane_g1

0xd234,	// (0x0003af5a) mp4_rocker2_pane_g2

0x6571,	// (0x00034297) mp4_rocker2_pane_g3

0x6579,	// (0x0003429f) mp4_rocker2_pane_g4

0x6581,	// (0x000342a7) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003d5f7) mp4_rocker2_pane_g

0x1957,	// (0x0002f67d) main_camera4_pane

0x1957,	// (0x0002f67d) main_video4_pane

0x0e3f,	// (0x0002eb65) main_video_tele_dialer_pane_t1_ParamLimits

0x0e3f,	// (0x0002eb65) main_video_tele_dialer_pane_t1

0x0e58,	// (0x0002eb7e) main_video_tele_dialer_pane_t2_ParamLimits

0x0e58,	// (0x0002eb7e) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003d5b1) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003d5b1) main_video_tele_dialer_pane_t

0x118e,	// (0x0002eeb4) cam4_autofocus_pane_ParamLimits

0x118e,	// (0x0002eeb4) cam4_autofocus_pane

0x11a4,	// (0x0002eeca) cam4_image_uncrop_pane_ParamLimits

0x11a4,	// (0x0002eeca) cam4_image_uncrop_pane

0x11be,	// (0x0002eee4) cam4_indicators_pane_ParamLimits

0x11be,	// (0x0002eee4) cam4_indicators_pane

0x11e9,	// (0x0002ef0f) main_camera4_pane_g1_ParamLimits

0x11e9,	// (0x0002ef0f) main_camera4_pane_g1

0x11fb,	// (0x0002ef21) main_camera4_pane_g2_ParamLimits

0x11fb,	// (0x0002ef21) main_camera4_pane_g2

0x120e,	// (0x0002ef34) main_camera4_pane_g3_ParamLimits

0x120e,	// (0x0002ef34) main_camera4_pane_g3

0x1221,	// (0x0002ef47) main_camera4_pane_g4_ParamLimits

0x1221,	// (0x0002ef47) main_camera4_pane_g4

0x1234,	// (0x0002ef5a) main_camera4_pane_g5_ParamLimits

0x1234,	// (0x0002ef5a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003d602) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003d602) main_camera4_pane_g

0x1258,	// (0x0002ef7e) main_camera4_pane_t1_ParamLimits

0x1258,	// (0x0002ef7e) main_camera4_pane_t1

0x65b9,	// (0x000342df) bg_tb_trans_pane_cp06

0x65cf,	// (0x000342f5) cam4_indicators_pane_g1

0x65e0,	// (0x00034306) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003d61d) cam4_indicators_pane_g

0x65fe,	// (0x00034324) cam4_indicators_pane_t1

0x12a8,	// (0x0002efce) main_video4_pane_g1_ParamLimits

0x12a8,	// (0x0002efce) main_video4_pane_g1

0x12b7,	// (0x0002efdd) main_video4_pane_g2_ParamLimits

0x12b7,	// (0x0002efdd) main_video4_pane_g2

0x12c6,	// (0x0002efec) main_video4_pane_g3_ParamLimits

0x12c6,	// (0x0002efec) main_video4_pane_g3

0x12d5,	// (0x0002effb) main_video4_pane_g4_ParamLimits

0x12d5,	// (0x0002effb) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003d624) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003d624) main_video4_pane_g

0x12f3,	// (0x0002f019) vid4_indicators_pane_ParamLimits

0x12f3,	// (0x0002f019) vid4_indicators_pane

0x1321,	// (0x0002f047) video4_image_uncrop_cif_pane_ParamLimits

0x1321,	// (0x0002f047) video4_image_uncrop_cif_pane

0x133b,	// (0x0002f061) video4_image_uncrop_nhd_pane_ParamLimits

0x133b,	// (0x0002f061) video4_image_uncrop_nhd_pane

0x11a4,	// (0x0002eeca) video4_image_uncrop_vga_pane_ParamLimits

0x11a4,	// (0x0002eeca) video4_image_uncrop_vga_pane

0x193d,	// (0x0002f663) bg_tb_trans_pane_cp07

0x662a,	// (0x00034350) vid4_indicators_pane_g1

0x663e,	// (0x00034364) vid4_indicators_pane_g2

0x6652,	// (0x00034378) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003d62f) vid4_indicators_pane_g

0x6681,	// (0x000343a7) vid4_indicators_pane_t1

0x6698,	// (0x000343be) cam4_autofocus_pane_g1

0x66a0,	// (0x000343c6) cam4_autofocus_pane_g2

0x66a8,	// (0x000343ce) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003d63a) cam4_autofocus_pane_g

0x66b0,	// (0x000343d6) cam4_autofocus_pane_g3_copy1

0x612d,	// (0x00033e53) video_down_pane_cp_t1

0x613b,	// (0x00033e61) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003d5b6) video_down_pane_cp_t

0x193d,	// (0x0002f663) popup_vitu2_window_ParamLimits

0x193d,	// (0x0002f663) popup_vitu2_window

0x134f,	// (0x0002f075) aid_size_cell2_itu2_ParamLimits

0x134f,	// (0x0002f075) aid_size_cell2_itu2

0x1375,	// (0x0002f09b) aid_size_cell_itu2_ParamLimits

0x1375,	// (0x0002f09b) aid_size_cell_itu2

0x13d1,	// (0x0002f0f7) bg_popup_window_pane_cp09_ParamLimits

0x13d1,	// (0x0002f0f7) bg_popup_window_pane_cp09

0x13df,	// (0x0002f105) field_vitu2_entry_pane_ParamLimits

0x13df,	// (0x0002f105) field_vitu2_entry_pane

0x1405,	// (0x0002f12b) grid_vitu2_function_pane_ParamLimits

0x1405,	// (0x0002f12b) grid_vitu2_function_pane

0x1456,	// (0x0002f17c) grid_vitu2_itu_pane_ParamLimits

0x1456,	// (0x0002f17c) grid_vitu2_itu_pane

0x14ee,	// (0x0002f214) cell_vitu2_itu_pane_ParamLimits

0x14ee,	// (0x0002f214) cell_vitu2_itu_pane

0x151a,	// (0x0002f240) cell_vitu2_function_pane_ParamLimits

0x151a,	// (0x0002f240) cell_vitu2_function_pane

0xd23c,	// (0x0003af62) bg_popup_call_pane_cp08_ParamLimits

0xd23c,	// (0x0003af62) bg_popup_call_pane_cp08

0xd253,	// (0x0003af79) field_vitu2_entry_pane_g1

0xd25f,	// (0x0003af85) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003d641) field_vitu2_entry_pane_g

0x66b8,	// (0x000343de) field_vitu2_entry_pane_t1_ParamLimits

0x66b8,	// (0x000343de) field_vitu2_entry_pane_t1

0xd279,	// (0x0003af9f) field_vitu2_entry_pane_t2_ParamLimits

0xd279,	// (0x0003af9f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003d648) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003d648) field_vitu2_entry_pane_t

0x1559,	// (0x0002f27f) bg_button_pane_cp010_ParamLimits

0x1559,	// (0x0002f27f) bg_button_pane_cp010

0x66e7,	// (0x0003440d) cell_vitu2_itu_pane_g1

0x1575,	// (0x0002f29b) cell_vitu2_itu_pane_t1_ParamLimits

0x1575,	// (0x0002f29b) cell_vitu2_itu_pane_t1

0x15d3,	// (0x0002f2f9) cell_vitu2_itu_pane_t2_ParamLimits

0x15d3,	// (0x0002f2f9) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003d652) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003d652) cell_vitu2_itu_pane_t

0x193d,	// (0x0002f663) bg_button_pane_cp011

0x16bf,	// (0x0002f3e5) cell_vitu2_function_pane_g1

0x1957,	// (0x0002f67d) main_myfav_hc_pane

0x113e,	// (0x0002ee64) popup_image3_note_pane_ParamLimits

0x113e,	// (0x0002ee64) popup_image3_note_pane

0x115a,	// (0x0002ee80) popup_image3_tool_bar_pane_ParamLimits

0x115a,	// (0x0002ee80) popup_image3_tool_bar_pane

0x1661,	// (0x0002f387) cell_vitu2_itu_pane_t3_ParamLimits

0x1661,	// (0x0002f387) cell_vitu2_itu_pane_t3

0x9b4c,	// (0x00037872) bg_popup_trans_pane

0xd29e,	// (0x0003afc4) grid_image3_tool_bar_pane

0xd2a8,	// (0x0003afce) bg_popup_trans_pane_g1

0xa6a7,	// (0x000383cd) bg_popup_trans_pane_g2

0xd2b0,	// (0x0003afd6) bg_popup_trans_pane_g3

0xd2b8,	// (0x0003afde) bg_popup_trans_pane_g4

0xd2c0,	// (0x0003afe6) bg_popup_trans_pane_g5

0xd2c8,	// (0x0003afee) bg_popup_trans_pane_g6

0xd2d0,	// (0x0003aff6) bg_popup_trans_pane_g7

0xd2d8,	// (0x0003affe) bg_popup_trans_pane_g8

0xa687,	// (0x000383ad) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003d659) bg_popup_trans_pane_g

0xd2e0,	// (0x0003b006) cell_image3_tool_bar_pane_ParamLimits

0xd2e0,	// (0x0003b006) cell_image3_tool_bar_pane

0xc7e9,	// (0x0003a50f) cell_image3_tool_bar_pane_g1

0x9b4c,	// (0x00037872) bg_popup_trans_pane_cp1

0xd2f4,	// (0x0003b01a) popup_image3_note_pane_t1

0xd302,	// (0x0003b028) popup_image3_note_pane_t2

0xd310,	// (0x0003b036) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003d66c) popup_image3_note_pane_t

0xd31e,	// (0x0003b044) popup_image3_note_pane_t3_copy1

0x66f9,	// (0x0003441f) bg_myfav_hc_instruction_pane_ParamLimits

0x66f9,	// (0x0003441f) bg_myfav_hc_instruction_pane

0x670d,	// (0x00034433) cell_myfav_contact_pane_ParamLimits

0x670d,	// (0x00034433) cell_myfav_contact_pane

0x672b,	// (0x00034451) cell_myfav_contact_pane_cp1_ParamLimits

0x672b,	// (0x00034451) cell_myfav_contact_pane_cp1

0x6743,	// (0x00034469) cell_myfav_contact_pane_cp2_ParamLimits

0x6743,	// (0x00034469) cell_myfav_contact_pane_cp2

0x675b,	// (0x00034481) cell_myfav_contact_pane_cp3_ParamLimits

0x675b,	// (0x00034481) cell_myfav_contact_pane_cp3

0x6772,	// (0x00034498) cell_myfav_contact_pane_cp4_ParamLimits

0x6772,	// (0x00034498) cell_myfav_contact_pane_cp4

0x678a,	// (0x000344b0) cell_myfav_contact_pane_cp5_ParamLimits

0x678a,	// (0x000344b0) cell_myfav_contact_pane_cp5

0x679e,	// (0x000344c4) cell_myfav_contact_pane_cp6_ParamLimits

0x679e,	// (0x000344c4) cell_myfav_contact_pane_cp6

0x67b4,	// (0x000344da) cell_myfav_contact_pane_cp7_ParamLimits

0x67b4,	// (0x000344da) cell_myfav_contact_pane_cp7

0xd32c,	// (0x0003b052) listscroll_gen_pane_cp05

0x67ce,	// (0x000344f4) main_myfav_hc_pane_g1_ParamLimits

0x67ce,	// (0x000344f4) main_myfav_hc_pane_g1

0x67e8,	// (0x0003450e) main_myfav_hc_pane_g2_ParamLimits

0x67e8,	// (0x0003450e) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003d673) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003d673) main_myfav_hc_pane_g

0x681a,	// (0x00034540) main_myfav_hc_pane_t1_ParamLimits

0x681a,	// (0x00034540) main_myfav_hc_pane_t1

0xd335,	// (0x0003b05b) main_myfav_hc_pane_t2_ParamLimits

0xd335,	// (0x0003b05b) main_myfav_hc_pane_t2

0xd347,	// (0x0003b06d) main_myfav_hc_pane_t3_ParamLimits

0xd347,	// (0x0003b06d) main_myfav_hc_pane_t3

0x6831,	// (0x00034557) main_myfav_hc_pane_t4_ParamLimits

0x6831,	// (0x00034557) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003d67a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003d67a) main_myfav_hc_pane_t

0xc7e9,	// (0x0003a50f) bg_myfav_hc_instruction_pane_g1

0xd359,	// (0x0003b07f) cell_myfav_contact_pane_g1_ParamLimits

0xd359,	// (0x0003b07f) cell_myfav_contact_pane_g1

0xd359,	// (0x0003b07f) cell_myfav_contact_pane_g2_ParamLimits

0xd359,	// (0x0003b07f) cell_myfav_contact_pane_g2

0xd365,	// (0x0003b08b) cell_myfav_contact_pane_g3_ParamLimits

0xd365,	// (0x0003b08b) cell_myfav_contact_pane_g3

0xcae6,	// (0x0003a80c) cell_myfav_contact_pane_g4_ParamLimits

0xcae6,	// (0x0003a80c) cell_myfav_contact_pane_g4

0xd372,	// (0x0003b098) cell_myfav_contact_pane_g5_ParamLimits

0xd372,	// (0x0003b098) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003d685) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003d685) cell_myfav_contact_pane_g

0x6802,	// (0x00034528) main_myfav_hc_pane_g3_ParamLimits

0x6802,	// (0x00034528) main_myfav_hc_pane_g3

0x0265,	// (0x0002df8b) popup_adpt_find_window

0x6859,	// (0x0003457f) afind_page_pane_ParamLimits

0x6859,	// (0x0003457f) afind_page_pane

0x686e,	// (0x00034594) aid_size_cell_afind_ParamLimits

0x686e,	// (0x00034594) aid_size_cell_afind

0x688c,	// (0x000345b2) bg_popup_sub_pane_cp09_ParamLimits

0x688c,	// (0x000345b2) bg_popup_sub_pane_cp09

0x6899,	// (0x000345bf) find_pane_cp01_ParamLimits

0x6899,	// (0x000345bf) find_pane_cp01

0xd37e,	// (0x0003b0a4) grid_afind_control_pane_ParamLimits

0xd37e,	// (0x0003b0a4) grid_afind_control_pane

0x68a6,	// (0x000345cc) grid_afind_pane_ParamLimits

0x68a6,	// (0x000345cc) grid_afind_pane

0x68c8,	// (0x000345ee) cell_afind_pane_ParamLimits

0x68c8,	// (0x000345ee) cell_afind_pane

0xc7e9,	// (0x0003a50f) afind_page_pane_g1

0x692f,	// (0x00034655) afind_page_pane_g2

0x6938,	// (0x0003465e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003d690) afind_page_pane_g

0x6941,	// (0x00034667) afind_page_pane_t1

0xd392,	// (0x0003b0b8) cell_afind_grid_control_pane_ParamLimits

0xd392,	// (0x0003b0b8) cell_afind_grid_control_pane

0xd14d,	// (0x0003ae73) bg_button_pane_cp69_ParamLimits

0xd14d,	// (0x0003ae73) bg_button_pane_cp69

0x6961,	// (0x00034687) cell_afind_pane_g1_ParamLimits

0x6961,	// (0x00034687) cell_afind_pane_g1

0x696e,	// (0x00034694) cell_afind_pane_t1_ParamLimits

0x696e,	// (0x00034694) cell_afind_pane_t1

0xa4a0,	// (0x000381c6) bg_button_pane_cp72

0xd3a1,	// (0x0003b0c7) cell_afind_grid_control_pane_g1

0x4508,	// (0x0003222e) aid_image_placing_area_ParamLimits

0x4508,	// (0x0003222e) aid_image_placing_area

0xce1b,	// (0x0003ab41) field_vitu_entry_pane_g1_ParamLimits

0xce1b,	// (0x0003ab41) field_vitu_entry_pane_g1

0xce27,	// (0x0003ab4d) field_vitu_entry_pane_g2_ParamLimits

0xce27,	// (0x0003ab4d) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003d541) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003d541) field_vitu_entry_pane_g

0x5f7c,	// (0x00033ca2) cell_vitu_itu_pane_g1_ParamLimits

0x5fbe,	// (0x00033ce4) cell_vitu_itu_pane_t3_ParamLimits

0x5fbe,	// (0x00033ce4) cell_vitu_itu_pane_t3

0xd0fd,	// (0x0003ae23) mp4_progress_pane_t1_ParamLimits

0xd116,	// (0x0003ae3c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003d5d6) mp4_progress_pane_t_ParamLimits

0xd12f,	// (0x0003ae55) mup_progress_pane_cp04_ParamLimits

0x6845,	// (0x0003456b) main_myfav_hc_pane_t5_ParamLimits

0x6845,	// (0x0003456b) main_myfav_hc_pane_t5

0x18ba,	// (0x0002f5e0) aid_zoom_text_primary

0x0265,	// (0x0002df8b) popup_adpt_find_window_ParamLimits

0x193d,	// (0x0002f663) main_cam_set_pane

0x11d5,	// (0x0002eefb) cam4_zoom_pane_ParamLimits

0x11d5,	// (0x0002eefb) cam4_zoom_pane

0x6980,	// (0x000346a6) main_cam_set_pane_g1_ParamLimits

0x6980,	// (0x000346a6) main_cam_set_pane_g1

0x698e,	// (0x000346b4) main_cam_set_pane_g2_ParamLimits

0x698e,	// (0x000346b4) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003d697) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003d697) main_cam_set_pane_g

0x69af,	// (0x000346d5) main_cam_set_pane_t1_ParamLimits

0x69af,	// (0x000346d5) main_cam_set_pane_t1

0x69ca,	// (0x000346f0) main_cset_listscroll_pane_ParamLimits

0x69ca,	// (0x000346f0) main_cset_listscroll_pane

0x69ea,	// (0x00034710) main_cset_slider_pane_ParamLimits

0x69ea,	// (0x00034710) main_cset_slider_pane

0xd3b2,	// (0x0003b0d8) main_cset_list_pane_ParamLimits

0xd3b2,	// (0x0003b0d8) main_cset_list_pane

0xd3c2,	// (0x0003b0e8) scroll_pane_cp028

0x6a10,	// (0x00034736) aid_area_touch_slider

0x6a2c,	// (0x00034752) cset_slider_pane

0x6a56,	// (0x0003477c) main_cset_slider_pane_g1

0x6a6b,	// (0x00034791) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003d69c) main_cset_slider_pane_g

0xd3fb,	// (0x0003b121) main_cset_slider_pane_t1

0x6b27,	// (0x0003484d) main_cset_slider_pane_t2

0x6b41,	// (0x00034867) main_cset_slider_pane_t3

0x6b5b,	// (0x00034881) main_cset_slider_pane_t4

0x6b75,	// (0x0003489b) main_cset_slider_pane_t5

0x6b8f,	// (0x000348b5) main_cset_slider_pane_t6

0x6ba4,	// (0x000348ca) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003d6c1) main_cset_slider_pane_t

0x6ca8,	// (0x000349ce) cset_list_set_pane_ParamLimits

0x6ca8,	// (0x000349ce) cset_list_set_pane

0x6cba,	// (0x000349e0) aid_position_infowindow_above

0x6cc2,	// (0x000349e8) aid_position_infowindow_below

0xd49b,	// (0x0003b1c1) cset_list_set_pane_g1_ParamLimits

0xd49b,	// (0x0003b1c1) cset_list_set_pane_g1

0xd4a7,	// (0x0003b1cd) cset_list_set_pane_g3_ParamLimits

0xd4a7,	// (0x0003b1cd) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003d6e0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003d6e0) cset_list_set_pane_g

0xd4b6,	// (0x0003b1dc) cset_list_set_pane_t1_ParamLimits

0xd4b6,	// (0x0003b1dc) cset_list_set_pane_t1

0xa6d7,	// (0x000383fd) list_highlight_pane_cp021_ParamLimits

0xa6d7,	// (0x000383fd) list_highlight_pane_cp021

0xb09e,	// (0x00038dc4) cset_slider_pane_g1

0xb0b0,	// (0x00038dd6) cset_slider_pane_g2

0xb0a7,	// (0x00038dcd) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003d6e5) cset_slider_pane_g

0x6cca,	// (0x000349f0) aid_area_touch_cam4_zoom

0x6cd2,	// (0x000349f8) cam4_zoom_cont_pane

0x6cda,	// (0x00034a00) cam4_zoom_pane_g1

0x6ce2,	// (0x00034a08) cam4_zoom_pane_g2

0x16d3,	// (0x0002f3f9) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003d6ec) cam4_zoom_pane_g

0x6cea,	// (0x00034a10) cam4_zoom_cont_pane_g1

0x6cf3,	// (0x00034a19) cam4_zoom_cont_pane_g2

0x6cfc,	// (0x00034a22) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003d6f3) cam4_zoom_cont_pane_g

0x6490,	// (0x000341b6) call4_image_pane_ParamLimits

0x6490,	// (0x000341b6) call4_image_pane

0xd159,	// (0x0003ae7f) call4_windows_conf_pane_ParamLimits

0xd19a,	// (0x0003aec0) popup_call4_audio_in_window_ParamLimits

0xd19a,	// (0x0003aec0) popup_call4_audio_in_window

0x9b4c,	// (0x00037872) bg_popup_call2_act_pane_cp02

0xd210,	// (0x0003af36) call4_list_conf_pane

0xc7e9,	// (0x0003a50f) call4_image_pane_g1

0xc7e9,	// (0x0003a50f) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003d402) call4_image_pane_g

0xd4cb,	// (0x0003b1f1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4cb,	// (0x0003b1f1) list_single_graphic_popup_conf4_pane

0x9b4c,	// (0x00037872) list_highlight_pane_cp022

0xd4de,	// (0x0003b204) list_single_graphic_popup_conf4_pane_g1

0xac6f,	// (0x00038995) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003d6fa) list_single_graphic_popup_conf4_pane_g

0xd4e6,	// (0x0003b20c) list_single_graphic_popup_conf4_pane_t1

0x289f,	// (0x000305c5) popup_vtel_slider_window_ParamLimits

0x289f,	// (0x000305c5) popup_vtel_slider_window

0xd13b,	// (0x0003ae61) dialer2_ne_pane_t2_ParamLimits

0xd13b,	// (0x0003ae61) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003d5db) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003d5db) dialer2_ne_pane_t

0xc5ce,	// (0x0003a2f4) bg_popup_sub_pane_cp010_ParamLimits

0xc5ce,	// (0x0003a2f4) bg_popup_sub_pane_cp010

0x6d05,	// (0x00034a2b) popup_vtel_slider_window_g1_ParamLimits

0x6d05,	// (0x00034a2b) popup_vtel_slider_window_g1

0x6d18,	// (0x00034a3e) popup_vtel_slider_window_g2_ParamLimits

0x6d18,	// (0x00034a3e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003d6ff) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003d6ff) popup_vtel_slider_window_g

0x6d6e,	// (0x00034a94) vtel_slider_pane_ParamLimits

0x6d6e,	// (0x00034a94) vtel_slider_pane

0x6d90,	// (0x00034ab6) vtel_slider_pane_g1_ParamLimits

0x6d90,	// (0x00034ab6) vtel_slider_pane_g1

0x6da4,	// (0x00034aca) vtel_slider_pane_g2_ParamLimits

0x6da4,	// (0x00034aca) vtel_slider_pane_g2

0x6dbc,	// (0x00034ae2) vtel_slider_pane_g3_ParamLimits

0x6dbc,	// (0x00034ae2) vtel_slider_pane_g3

0x6d90,	// (0x00034ab6) vtel_slider_pane_g4_ParamLimits

0x6d90,	// (0x00034ab6) vtel_slider_pane_g4

0x6dd2,	// (0x00034af8) vtel_slider_pane_g5_ParamLimits

0x6dd2,	// (0x00034af8) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003d708) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003d708) vtel_slider_pane_g

0x193d,	// (0x0002f663) main_gallery2_pane

0x13a1,	// (0x0002f0c7) aid_size_row_itut2_dropdow_list_ParamLimits

0x13a1,	// (0x0002f0c7) aid_size_row_itut2_dropdow_list

0x142d,	// (0x0002f153) grid_vitu2_function_top_pane_ParamLimits

0x142d,	// (0x0002f153) grid_vitu2_function_top_pane

0x1497,	// (0x0002f1bd) popup_vitu2_dropdown_list_window_ParamLimits

0x1497,	// (0x0002f1bd) popup_vitu2_dropdown_list_window

0x14c0,	// (0x0002f1e6) popup_vitu2_match_list_window

0x16db,	// (0x0002f401) cell_vitu2_function_top_pane_ParamLimits

0x16db,	// (0x0002f401) cell_vitu2_function_top_pane

0x16f3,	// (0x0002f419) cell_vitu2_function_top_pane_cp01_ParamLimits

0x16f3,	// (0x0002f419) cell_vitu2_function_top_pane_cp01

0x170f,	// (0x0002f435) cell_vitu2_function_top_wide_pane_ParamLimits

0x170f,	// (0x0002f435) cell_vitu2_function_top_wide_pane

0x193d,	// (0x0002f663) bg_button_pane_cp012

0x172b,	// (0x0002f451) cell_vitu2_function_top_pane_g1

0x6df6,	// (0x00034b1c) bg_button_pane_cp013_ParamLimits

0x6df6,	// (0x00034b1c) bg_button_pane_cp013

0x6e12,	// (0x00034b38) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e12,	// (0x00034b38) cell_vitu2_function_top_wide_pane_g1

0x193d,	// (0x0002f663) bg_popup_sub_pane_cp20

0x173f,	// (0x0002f465) list_vitu2_match_list_pane

0xd2a8,	// (0x0003afce) bg_popup_sub_pane_cp20_g1

0xd2b0,	// (0x0003afd6) bg_popup_sub_pane_cp20_g2

0xa6a7,	// (0x000383cd) bg_popup_sub_pane_cp20_g3

0xd2b8,	// (0x0003afde) bg_popup_sub_pane_cp20_g4

0xa687,	// (0x000383ad) bg_popup_sub_pane_cp20_g5

0xd4fc,	// (0x0003b222) bg_popup_sub_pane_cp20_g6

0xd2c8,	// (0x0003afee) bg_popup_sub_pane_cp20_g7

0xd2d0,	// (0x0003aff6) bg_popup_sub_pane_cp20_g8

0xd2d8,	// (0x0003affe) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003d713) bg_popup_sub_pane_cp20_g

0xa6e5,	// (0x0003840b) list_vitu2_match_list_item_pane_ParamLimits

0xa6e5,	// (0x0003840b) list_vitu2_match_list_item_pane

0xa6f7,	// (0x0003841d) list_vitu2_match_list_item_pane_t1

0x1957,	// (0x0002f67d) bg_popup_sub_pane_cp21

0xa705,	// (0x0003842b) grid_vitu2_dropdown_list_pane

0x175d,	// (0x0002f483) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x175d,	// (0x0002f483) cell_vitu2_dropdown_list_char_pane

0x177e,	// (0x0002f4a4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x177e,	// (0x0002f4a4) cell_vitu2_dropdown_list_ctrl_pane

0xd504,	// (0x0003b22a) cell_vitu2_dropdown_list_char_pane_g1

0xd50d,	// (0x0003b233) cell_vitu2_dropdown_list_char_pane_g2

0xd516,	// (0x0003b23c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003d730) cell_vitu2_dropdown_list_char_pane_g

0x17aa,	// (0x0002f4d0) cell_vitu2_dropdown_list_char_pane_t1

0x6e7a,	// (0x00034ba0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e7a,	// (0x00034ba0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e87,	// (0x00034bad) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e87,	// (0x00034bad) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e94,	// (0x00034bba) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e94,	// (0x00034bba) cell_vitu2_dropdown_list_ctrl_pane_g3

0x17b8,	// (0x0002f4de) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x17b8,	// (0x0002f4de) cell_vitu2_dropdown_list_ctrl_pane_g4

0x65b9,	// (0x000342df) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x65b9,	// (0x000342df) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003d737) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003d737) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ea1,	// (0x00034bc7) aid_size_cell_gallery2_ParamLimits

0x6ea1,	// (0x00034bc7) aid_size_cell_gallery2

0x6ebf,	// (0x00034be5) grid_gallery2_pane_ParamLimits

0x6ebf,	// (0x00034be5) grid_gallery2_pane

0x6ed9,	// (0x00034bff) scroll_pane_cp029_ParamLimits

0x6ed9,	// (0x00034bff) scroll_pane_cp029

0x6ee5,	// (0x00034c0b) cell_gallery2_pane_ParamLimits

0x6ee5,	// (0x00034c0b) cell_gallery2_pane

0xd51f,	// (0x0003b245) cell_gallery2_pane_g2

0x6f41,	// (0x00034c67) cell_gallery2_pane_g3

0xd527,	// (0x0003b24d) cell_gallery2_pane_g4

0xd52f,	// (0x0003b255) cell_gallery2_pane_g5

0xa44e,	// (0x00038174) grid_highlight_pane_cp10

0x14c0,	// (0x0002f1e6) popup_vitu2_match_list_window_ParamLimits

0x14d7,	// (0x0002f1fd) popup_vitu2_query_window_ParamLimits

0x14d7,	// (0x0002f1fd) popup_vitu2_query_window

0x1957,	// (0x0002f67d) bg_vitu2_candi_button_pane

0xd504,	// (0x0003b22a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd50d,	// (0x0003b233) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd516,	// (0x0003b23c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f49,	// (0x00034c6f) bg_button_pane_cp015

0x6f5b,	// (0x00034c81) bg_button_pane_cp016

0x6f6e,	// (0x00034c94) bg_button_pane_cp017

0xc3e1,	// (0x0003a107) bg_popup_sub_pane_cp22

0xd537,	// (0x0003b25d) popup_vitu2_query_window_g1

0x6fb3,	// (0x00034cd9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003d742) popup_vitu2_query_window_g

0x6fd2,	// (0x00034cf8) popup_vitu2_query_window_t1_ParamLimits

0x6fd2,	// (0x00034cf8) popup_vitu2_query_window_t1

0x7007,	// (0x00034d2d) popup_vitu2_query_window_t2_ParamLimits

0x7007,	// (0x00034d2d) popup_vitu2_query_window_t2

0x7019,	// (0x00034d3f) popup_vitu2_query_window_t3_ParamLimits

0x7019,	// (0x00034d3f) popup_vitu2_query_window_t3

0x7041,	// (0x00034d67) popup_vitu2_query_window_t4_ParamLimits

0x7041,	// (0x00034d67) popup_vitu2_query_window_t4

0x7062,	// (0x00034d88) popup_vitu2_query_window_t5_ParamLimits

0x7062,	// (0x00034d88) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003d749) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003d749) popup_vitu2_query_window_t

0xd3aa,	// (0x0003b0d0) main_cset_text_pane

0x6a10,	// (0x00034736) aid_area_touch_slider_ParamLimits

0x6a2c,	// (0x00034752) cset_slider_pane_ParamLimits

0x6a56,	// (0x0003477c) main_cset_slider_pane_g1_ParamLimits

0x6a6b,	// (0x00034791) main_cset_slider_pane_g2_ParamLimits

0xd3cb,	// (0x0003b0f1) main_cset_slider_pane_g3_ParamLimits

0xd3cb,	// (0x0003b0f1) main_cset_slider_pane_g3

0x6a80,	// (0x000347a6) main_cset_slider_pane_g4_ParamLimits

0x6a80,	// (0x000347a6) main_cset_slider_pane_g4

0x6a8f,	// (0x000347b5) main_cset_slider_pane_g5_ParamLimits

0x6a8f,	// (0x000347b5) main_cset_slider_pane_g5

0x6a9b,	// (0x000347c1) main_cset_slider_pane_g6_ParamLimits

0x6a9b,	// (0x000347c1) main_cset_slider_pane_g6

0xf976,	// (0x0003d69c) main_cset_slider_pane_g_ParamLimits

0xd3fb,	// (0x0003b121) main_cset_slider_pane_t1_ParamLimits

0x6b27,	// (0x0003484d) main_cset_slider_pane_t2_ParamLimits

0x6b41,	// (0x00034867) main_cset_slider_pane_t3_ParamLimits

0x6b5b,	// (0x00034881) main_cset_slider_pane_t4_ParamLimits

0x6b75,	// (0x0003489b) main_cset_slider_pane_t5_ParamLimits

0x6b8f,	// (0x000348b5) main_cset_slider_pane_t6_ParamLimits

0x6ba4,	// (0x000348ca) main_cset_slider_pane_t7_ParamLimits

0x6bce,	// (0x000348f4) main_cset_slider_pane_t8_ParamLimits

0x6bce,	// (0x000348f4) main_cset_slider_pane_t8

0x6bf6,	// (0x0003491c) main_cset_slider_pane_t9_ParamLimits

0x6bf6,	// (0x0003491c) main_cset_slider_pane_t9

0x6c1e,	// (0x00034944) main_cset_slider_pane_t10_ParamLimits

0x6c1e,	// (0x00034944) main_cset_slider_pane_t10

0x6c46,	// (0x0003496c) main_cset_slider_pane_t11_ParamLimits

0x6c46,	// (0x0003496c) main_cset_slider_pane_t11

0x6c6e,	// (0x00034994) main_cset_slider_pane_t12_ParamLimits

0x6c6e,	// (0x00034994) main_cset_slider_pane_t12

0x6c8b,	// (0x000349b1) main_cset_slider_pane_t13_ParamLimits

0x6c8b,	// (0x000349b1) main_cset_slider_pane_t13

0xf99b,	// (0x0003d6c1) main_cset_slider_pane_t_ParamLimits

0x9b4c,	// (0x00037872) bg_popup_sub_pane_cp011

0xd543,	// (0x0003b269) main_cset_text_pane_g1

0xd54b,	// (0x0003b271) main_cset_text_pane_t1

0xd559,	// (0x0003b27f) main_cset_text_pane_t2

0xd567,	// (0x0003b28d) main_cset_text_pane_t3

0xd575,	// (0x0003b29b) main_cset_text_pane_t4

0xd583,	// (0x0003b2a9) main_cset_text_pane_t5

0xd591,	// (0x0003b2b7) main_cset_text_pane_t6

0xd59f,	// (0x0003b2c5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003d758) main_cset_text_pane_t

0x1957,	// (0x0002f67d) main_cam4_burst_pane

0x1957,	// (0x0002f67d) main_cam5_pane

0x694f,	// (0x00034675) bg_button_pane_cp019

0x6958,	// (0x0003467e) bg_button_pane_cp020

0xd3d7,	// (0x0003b0fd) main_cset_slider_pane_g7_ParamLimits

0xd3d7,	// (0x0003b0fd) main_cset_slider_pane_g7

0xd3e3,	// (0x0003b109) main_cset_slider_pane_g8_ParamLimits

0xd3e3,	// (0x0003b109) main_cset_slider_pane_g8

0x6aaf,	// (0x000347d5) main_cset_slider_pane_g9_ParamLimits

0x6aaf,	// (0x000347d5) main_cset_slider_pane_g9

0x6abb,	// (0x000347e1) main_cset_slider_pane_g10_ParamLimits

0x6abb,	// (0x000347e1) main_cset_slider_pane_g10

0x6ac7,	// (0x000347ed) main_cset_slider_pane_g11_ParamLimits

0x6ac7,	// (0x000347ed) main_cset_slider_pane_g11

0x6ad3,	// (0x000347f9) main_cset_slider_pane_g12_ParamLimits

0x6ad3,	// (0x000347f9) main_cset_slider_pane_g12

0x6adf,	// (0x00034805) main_cset_slider_pane_g13_ParamLimits

0x6adf,	// (0x00034805) main_cset_slider_pane_g13

0x6aeb,	// (0x00034811) main_cset_slider_pane_g14_ParamLimits

0x6aeb,	// (0x00034811) main_cset_slider_pane_g14

0x6af7,	// (0x0003481d) main_cset_slider_pane_g15_ParamLimits

0x6af7,	// (0x0003481d) main_cset_slider_pane_g15

0xd429,	// (0x0003b14f) main_cset_slider_pane_t14_ParamLimits

0xd429,	// (0x0003b14f) main_cset_slider_pane_t14

0xd462,	// (0x0003b188) main_cset_slider_pane_t15_ParamLimits

0xd462,	// (0x0003b188) main_cset_slider_pane_t15

0x70d9,	// (0x00034dff) aid_cam4_burst_size_cell_ParamLimits

0x70d9,	// (0x00034dff) aid_cam4_burst_size_cell

0x70f9,	// (0x00034e1f) grid_cam4_burst_pane_ParamLimits

0x70f9,	// (0x00034e1f) grid_cam4_burst_pane

0x7131,	// (0x00034e57) linegrid_cam4_burst_pane_ParamLimits

0x7131,	// (0x00034e57) linegrid_cam4_burst_pane

0xd5ad,	// (0x0003b2d3) scroll_pane_cp30_ParamLimits

0xd5ad,	// (0x0003b2d3) scroll_pane_cp30

0x7155,	// (0x00034e7b) cell_cam4_burst_pane_ParamLimits

0x7155,	// (0x00034e7b) cell_cam4_burst_pane

0xd5b9,	// (0x0003b2df) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5b9,	// (0x0003b2df) linegrid_cam4_burst_pane_g1

0x71a2,	// (0x00034ec8) linegrid_cam4_burst_pane_g2_ParamLimits

0x71a2,	// (0x00034ec8) linegrid_cam4_burst_pane_g2

0xd5c6,	// (0x0003b2ec) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5c6,	// (0x0003b2ec) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003d767) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003d767) linegrid_cam4_burst_pane_g

0x71b3,	// (0x00034ed9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71b3,	// (0x00034ed9) linegrid_cam4_burst_pane_g3_copy1

0xd5d3,	// (0x0003b2f9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5d3,	// (0x0003b2f9) linegrid_cam4_burst_pane_g4

0x71cd,	// (0x00034ef3) linegrid_cam4_burst_pane_g5_ParamLimits

0x71cd,	// (0x00034ef3) linegrid_cam4_burst_pane_g5

0x71de,	// (0x00034f04) linegrid_cam4_burst_pane_g6_ParamLimits

0x71de,	// (0x00034f04) linegrid_cam4_burst_pane_g6

0xd5e0,	// (0x0003b306) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5e0,	// (0x0003b306) linegrid_cam4_burst_pane_g7

0x71f5,	// (0x00034f1b) cell_cam4_burst_pane_g1

0xd5f9,	// (0x0003b31f) main_cam5_pane_t1_ParamLimits

0xd5f9,	// (0x0003b31f) main_cam5_pane_t1

0xd60b,	// (0x0003b331) main_cam5_pane_t2_ParamLimits

0xd60b,	// (0x0003b331) main_cam5_pane_t2

0xd61d,	// (0x0003b343) main_cam5_pane_t3_ParamLimits

0xd61d,	// (0x0003b343) main_cam5_pane_t3

0xd62f,	// (0x0003b355) main_cam5_pane_t4_ParamLimits

0xd62f,	// (0x0003b355) main_cam5_pane_t4

0xd647,	// (0x0003b36d) main_cam5_pane_t5_ParamLimits

0xd647,	// (0x0003b36d) main_cam5_pane_t5

0xd65b,	// (0x0003b381) main_cam5_pane_t6_ParamLimits

0xd65b,	// (0x0003b381) main_cam5_pane_t6

0xd66f,	// (0x0003b395) main_cam5_pane_t7_ParamLimits

0xd66f,	// (0x0003b395) main_cam5_pane_t7

0xd681,	// (0x0003b3a7) main_cam5_pane_t8_ParamLimits

0xd681,	// (0x0003b3a7) main_cam5_pane_t8

0xd69d,	// (0x0003b3c3) main_cam5_pane_t9_ParamLimits

0xd69d,	// (0x0003b3c3) main_cam5_pane_t9

0xd6af,	// (0x0003b3d5) main_cam5_pane_t10_ParamLimits

0xd6af,	// (0x0003b3d5) main_cam5_pane_t10

0xd6c1,	// (0x0003b3e7) main_cam5_pane_t11_ParamLimits

0xd6c1,	// (0x0003b3e7) main_cam5_pane_t11

0xd6d3,	// (0x0003b3f9) main_cam5_pane_t12_ParamLimits

0xd6d3,	// (0x0003b3f9) main_cam5_pane_t12

0xd6e8,	// (0x0003b40e) main_cam5_pane_t13_ParamLimits

0xd6e8,	// (0x0003b40e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003d773) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003d773) main_cam5_pane_t

0x02e7,	// (0x0002e00d) popup_scut_keymap_window_ParamLimits

0x02e7,	// (0x0002e00d) popup_scut_keymap_window

0x7208,	// (0x00034f2e) aid_size_cell_brow_shortcut

0xa44e,	// (0x00038174) bg_popup_window_pane_cp010

0x7214,	// (0x00034f3a) grid_scut_pane

0x7220,	// (0x00034f46) cell_scut_pane_ParamLimits

0x7220,	// (0x00034f46) cell_scut_pane

0x7237,	// (0x00034f5d) cell_scut_pane_g1

0xd705,	// (0x0003b42b) cell_scut_pane_t1

0xd714,	// (0x0003b43a) cell_scut_pane_t2

0x7240,	// (0x00034f66) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003d78e) cell_scut_pane_t

0x54ea,	// (0x00033210) main_mup3_pane_g8_ParamLimits

0x54ea,	// (0x00033210) main_mup3_pane_g8

0x13b9,	// (0x0002f0df) area_vitu2_query_pane_ParamLimits

0x13b9,	// (0x0002f0df) area_vitu2_query_pane

0x6f81,	// (0x00034ca7) input_focus_pane_cp08

0xd723,	// (0x0003b449) area_vitu2_query_pane_g1

0x724e,	// (0x00034f74) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003d795) area_vitu2_query_pane_g

0x725f,	// (0x00034f85) area_vitu2_query_pane_t1_ParamLimits

0x725f,	// (0x00034f85) area_vitu2_query_pane_t1

0x7273,	// (0x00034f99) area_vitu2_query_pane_t2_ParamLimits

0x7273,	// (0x00034f99) area_vitu2_query_pane_t2

0x7287,	// (0x00034fad) area_vitu2_query_pane_t3_ParamLimits

0x7287,	// (0x00034fad) area_vitu2_query_pane_t3

0xd72f,	// (0x0003b455) area_vitu2_query_pane_t4_ParamLimits

0xd72f,	// (0x0003b455) area_vitu2_query_pane_t4

0xd757,	// (0x0003b47d) area_vitu2_query_pane_t5_ParamLimits

0xd757,	// (0x0003b47d) area_vitu2_query_pane_t5

0xd77f,	// (0x0003b4a5) area_vitu2_query_pane_t6_ParamLimits

0xd77f,	// (0x0003b4a5) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003d79a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003d79a) area_vitu2_query_pane_t

0x72af,	// (0x00034fd5) bg_button_pane_cp018

0x72bd,	// (0x00034fe3) bg_button_pane_cp021

0x72c9,	// (0x00034fef) bg_button_pane_cp022

0x72d8,	// (0x00034ffe) input_focus_pane_cp09

0xadab,	// (0x00038ad1) aid_size_touch_mv_arrow_left

0xadd4,	// (0x00038afa) aid_size_touch_mv_arrow_right

0x6b0f,	// (0x00034835) main_cset_slider_pane_g16_ParamLimits

0x6b0f,	// (0x00034835) main_cset_slider_pane_g16

0x6b1b,	// (0x00034841) main_cset_slider_pane_g17_ParamLimits

0x6b1b,	// (0x00034841) main_cset_slider_pane_g17

0x71f5,	// (0x00034f1b) cell_cam4_burst_pane_g1_ParamLimits

0x9b4c,	// (0x00037872) compa_mode_pane

0x6d28,	// (0x00034a4e) popup_vtel_slider_window_g3_ParamLimits

0x6d28,	// (0x00034a4e) popup_vtel_slider_window_g3

0x6d3f,	// (0x00034a65) popup_vtel_slider_window_g4_ParamLimits

0x6d3f,	// (0x00034a65) popup_vtel_slider_window_g4

0x6d56,	// (0x00034a7c) popup_vtel_slider_window_t1_ParamLimits

0x6d56,	// (0x00034a7c) popup_vtel_slider_window_t1

0x1957,	// (0x0002f67d) main_cl_pane

0x4a44,	// (0x0003276a) popup_imed_adjust2_window_ParamLimits

0xc3e1,	// (0x0003a107) bg_tb_trans_pane_cp05_ParamLimits

0xcd50,	// (0x0003aa76) popup_imed_adjust2_window_g1_ParamLimits

0xcd5f,	// (0x0003aa85) popup_imed_adjust2_window_g2_ParamLimits

0xcd5f,	// (0x0003aa85) popup_imed_adjust2_window_g2

0xcd6b,	// (0x0003aa91) popup_imed_adjust2_window_g3_ParamLimits

0xcd6b,	// (0x0003aa91) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003d505) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003d505) popup_imed_adjust2_window_g

0xcd77,	// (0x0003aa9d) popup_imed_adjust2_window_t1_ParamLimits

0xcd8f,	// (0x0003aab5) slider_imed_adjust_pane_ParamLimits

0xcda3,	// (0x0003aac9) slider_imed_adjust_pane_g1_ParamLimits

0xcdb3,	// (0x0003aad9) slider_imed_adjust_pane_g2_ParamLimits

0xcdc3,	// (0x0003aae9) slider_imed_adjust_pane_g3_ParamLimits

0xcdd4,	// (0x0003aafa) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003d50c) slider_imed_adjust_pane_g_ParamLimits

0x1176,	// (0x0002ee9c) aid_touch_area_cam4_ParamLimits

0x1176,	// (0x0002ee9c) aid_touch_area_cam4

0x6589,	// (0x000342af) battery_pane_cp01

0x1245,	// (0x0002ef6b) main_camera4_pane_g6_ParamLimits

0x1245,	// (0x0002ef6b) main_camera4_pane_g6

0x126f,	// (0x0002ef95) main_camera4_pane_t2_ParamLimits

0x126f,	// (0x0002ef95) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003d60f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003d60f) main_camera4_pane_t

0x1290,	// (0x0002efb6) aid_touch_area_vid4_ParamLimits

0x1290,	// (0x0002efb6) aid_touch_area_vid4

0x12e4,	// (0x0002f00a) main_video4_pane_g5_ParamLimits

0x12e4,	// (0x0002f00a) main_video4_pane_g5

0x1309,	// (0x0002f02f) vid4_progress_pane_ParamLimits

0x1309,	// (0x0002f02f) vid4_progress_pane

0xd3ef,	// (0x0003b115) main_cset_slider_pane_g18_ParamLimits

0xd3ef,	// (0x0003b115) main_cset_slider_pane_g18

0xd5ed,	// (0x0003b313) cell_cam4_burst_pane_g2_ParamLimits

0xd5ed,	// (0x0003b313) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003d76e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003d76e) cell_cam4_burst_pane_g

0xa289,	// (0x00037faf) bg_cl_pane_ParamLimits

0xa289,	// (0x00037faf) bg_cl_pane

0x72e7,	// (0x0003500d) cl_header_pane_ParamLimits

0x72e7,	// (0x0003500d) cl_header_pane

0x72fb,	// (0x00035021) cl_listscroll_pane_ParamLimits

0x72fb,	// (0x00035021) cl_listscroll_pane

0xd7cb,	// (0x0003b4f1) bg_cl_pane_g1

0xd7d3,	// (0x0003b4f9) bg_cl_pane_g2

0xd7db,	// (0x0003b501) bg_cl_pane_g3

0xd7e3,	// (0x0003b509) bg_cl_pane_g4

0xd7eb,	// (0x0003b511) bg_cl_pane_g5

0xd7f3,	// (0x0003b519) bg_cl_pane_g6

0xd7fb,	// (0x0003b521) bg_cl_pane_g7

0xd803,	// (0x0003b529) bg_cl_pane_g8

0xd80b,	// (0x0003b531) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003d7a9) bg_cl_pane_g

0x730b,	// (0x00035031) aid_height_cl_leading_ParamLimits

0x730b,	// (0x00035031) aid_height_cl_leading

0x7317,	// (0x0003503d) aid_height_cl_text_ParamLimits

0x7317,	// (0x0003503d) aid_height_cl_text

0xa6d7,	// (0x000383fd) bg_cl_header_pane_ParamLimits

0xa6d7,	// (0x000383fd) bg_cl_header_pane

0x7336,	// (0x0003505c) cl_header_pane_g1_ParamLimits

0x7336,	// (0x0003505c) cl_header_pane_g1

0x734c,	// (0x00035072) cl_header_pane_t1_ParamLimits

0x734c,	// (0x00035072) cl_header_pane_t1

0xd813,	// (0x0003b539) cl_list_pane

0xd3c2,	// (0x0003b0e8) hc_scroll_pane_cp01

0xa687,	// (0x000383ad) bg_cl_header_pane_g1

0xd2a8,	// (0x0003afce) bg_cl_header_pane_g2

0xa6a7,	// (0x000383cd) bg_cl_header_pane_g3

0xd2b8,	// (0x0003afde) bg_cl_header_pane_g4

0xd2b0,	// (0x0003afd6) bg_cl_header_pane_g5

0xd4fc,	// (0x0003b222) bg_cl_header_pane_g6

0xd2d0,	// (0x0003aff6) bg_cl_header_pane_g7

0xd2d8,	// (0x0003affe) bg_cl_header_pane_g8

0xd2c8,	// (0x0003afee) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003d7bc) bg_cl_header_pane_g

0x7365,	// (0x0003508b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7365,	// (0x0003508b) hc_cl_list_double_graphic_heading_pane

0x7376,	// (0x0003509c) hc_cl_list_single_graphic_pane_ParamLimits

0x7376,	// (0x0003509c) hc_cl_list_single_graphic_pane

0x738c,	// (0x000350b2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x738c,	// (0x000350b2) hc_cl_list_single_graphic_pane_g1

0x7398,	// (0x000350be) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7398,	// (0x000350be) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003d7cf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003d7cf) hc_cl_list_single_graphic_pane_g

0x73ac,	// (0x000350d2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73ac,	// (0x000350d2) hc_cl_list_single_graphic_pane_t1

0x738c,	// (0x000350b2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x738c,	// (0x000350b2) hc_cl_list_double_graphic_heading_pane_g1

0x73c1,	// (0x000350e7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73c1,	// (0x000350e7) hc_cl_list_double_graphic_heading_pane_g2

0x73d5,	// (0x000350fb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73d5,	// (0x000350fb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003d7d4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003d7d4) hc_cl_list_double_graphic_heading_pane_g

0x73e9,	// (0x0003510f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73e9,	// (0x0003510f) hc_cl_list_double_graphic_heading_pane_t1

0x73fe,	// (0x00035124) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73fe,	// (0x00035124) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003d7db) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003d7db) hc_cl_list_double_graphic_heading_pane_t

0xa715,	// (0x0003843b) vid4_progress_pane_g1

0xa725,	// (0x0003844b) vid4_progress_pane_g2

0x17d4,	// (0x0002f4fa) vid4_progress_pane_g3

0xa735,	// (0x0003845b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003d7e0) vid4_progress_pane_g

0x17e6,	// (0x0002f50c) vid4_progress_pane_t1

0xa74d,	// (0x00038473) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003d7eb) vid4_progress_pane_t

0x17fe,	// (0x0002f524) wait_bar_pane_cp07

0xc5dc,	// (0x0003a302) blid_firmament_pane_ParamLimits

0xc61f,	// (0x0003a345) popup_blid_sat_info2_window_g1

0xc643,	// (0x0003a369) popup_blid_sat_info2_window_t3

0xc651,	// (0x0003a377) popup_blid_sat_info2_window_t4

0xc65f,	// (0x0003a385) popup_blid_sat_info2_window_t5

0xc66d,	// (0x0003a393) popup_blid_sat_info2_window_t6

0xc67d,	// (0x0003a3a3) popup_blid_sat_info2_window_t7

0xc68b,	// (0x0003a3b1) popup_blid_sat_info2_window_t8

0xc699,	// (0x0003a3bf) popup_blid_sat_info2_window_t9

0xc6a7,	// (0x0003a3cd) popup_blid_sat_info2_window_t10

0xc769,	// (0x0003a48f) aid_firma_cardinal_ParamLimits

0xc77d,	// (0x0003a4a3) blid_firmament_pane_t1_ParamLimits

0xc794,	// (0x0003a4ba) blid_firmament_pane_t2_ParamLimits

0xc7ab,	// (0x0003a4d1) blid_firmament_pane_t3_ParamLimits

0xc7c2,	// (0x0003a4e8) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003d3f9) blid_firmament_pane_t_ParamLimits

0xc7d9,	// (0x0003a4ff) blid_sat_info_pane_ParamLimits

0x193d,	// (0x0002f663) main_cam_set_pane_ParamLimits

0x5d36,	// (0x00033a5c) aid_size_cell_colour_35_ParamLimits

0x5d56,	// (0x00033a7c) aid_size_cell_colour_112_ParamLimits

0x5d76,	// (0x00033a9c) aid_size_cell_effect_ParamLimits

0xc3e1,	// (0x0003a107) bg_tb_trans_pane_cp02_ParamLimits

0xa99d,	// (0x000386c3) heading_imed_pane_ParamLimits

0x5d96,	// (0x00033abc) listscroll_imed_pane_ParamLimits

0xba07,	// (0x0003972d) popup_call2_audio_first_window_g5_ParamLimits

0xba07,	// (0x0003972d) popup_call2_audio_first_window_g5

0x0f53,	// (0x0002ec79) aid_size_touch_image3_arrow_left_ParamLimits

0x0f53,	// (0x0002ec79) aid_size_touch_image3_arrow_left

0x0f7f,	// (0x0002eca5) aid_size_touch_image3_arrow_right_ParamLimits

0x0f7f,	// (0x0002eca5) aid_size_touch_image3_arrow_right

0xa762,	// (0x00038488) vid4_progress_pane_t3

0x60a9,	// (0x00033dcf) main_hwr_training_symbol_option_pane_ParamLimits

0x60a9,	// (0x00033dcf) main_hwr_training_symbol_option_pane

0xd03d,	// (0x0003ad63) popup_hwr_training_preview_window_ParamLimits

0xd03d,	// (0x0003ad63) popup_hwr_training_preview_window

0x0dfe,	// (0x0002eb24) hwr_training_navi_pane_g5_ParamLimits

0x0dfe,	// (0x0002eb24) hwr_training_navi_pane_g5

0xd296,	// (0x0003afbc) popup_char_count_window

0x193d,	// (0x0002f663) bg_popup_sub_pane_cp20_ParamLimits

0x173f,	// (0x0002f465) list_vitu2_match_list_pane_ParamLimits

0x174e,	// (0x0002f474) vitu2_page_scroll_pane_ParamLimits

0x174e,	// (0x0002f474) vitu2_page_scroll_pane

0xd83e,	// (0x0003b564) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd83e,	// (0x0003b564) list_single_hwr_training_symbol_option_pane

0xd851,	// (0x0003b577) list_single_hwr_training_symbol_option_pane_g1

0xd859,	// (0x0003b57f) list_single_hwr_training_symbol_option_pane_t1

0xd867,	// (0x0003b58d) bg_button_pane_cp023

0xd870,	// (0x0003b596) bg_button_pane_cp024

0x744b,	// (0x00035171) vitu2_page_scroll_pane_g1

0x7453,	// (0x00035179) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003d7f2) vitu2_page_scroll_pane_g

0x745b,	// (0x00035181) vitu2_page_scroll_pane_t1

0xc53c,	// (0x0003a262) popup_char_count_window_g1

0xd8ec,	// (0x0003b612) popup_char_count_window_g2

0xd8f5,	// (0x0003b61b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003d7f7) popup_char_count_window_g

0xd8fe,	// (0x0003b624) popup_char_count_window_t1

0x1957,	// (0x0002f67d) main_vded2_pane

0xcd3c,	// (0x0003aa62) aid_size_cell_imed_line

0xcd46,	// (0x0003aa6c) grid_imed_line_width_pane

0x6663,	// (0x00034389) vid4_indicators_pane_g4

0xd90c,	// (0x0003b632) cell_imed_line_width_pane_ParamLimits

0xd90c,	// (0x0003b632) cell_imed_line_width_pane

0xd920,	// (0x0003b646) cell_imed_line_width_pane_g1

0xd8c5,	// (0x0003b5eb) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003d7fe) cell_imed_line_width_pane_g

0x746a,	// (0x00035190) main_vded2_pane_g1_ParamLimits

0x746a,	// (0x00035190) main_vded2_pane_g1

0x7480,	// (0x000351a6) main_vded2_pane_g2_ParamLimits

0x7480,	// (0x000351a6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003d803) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003d803) main_vded2_pane_g

0x7492,	// (0x000351b8) vded2_slider_pane_ParamLimits

0x7492,	// (0x000351b8) vded2_slider_pane

0x74a2,	// (0x000351c8) aid_size_touch_vded2_end

0x74ac,	// (0x000351d2) aid_size_touch_vded2_playhead

0xd929,	// (0x0003b64f) aid_size_touch_vded2_start

0xd931,	// (0x0003b657) vded2_slider_bg_pane

0xd93a,	// (0x0003b660) vded2_slider_pane_g1

0xd943,	// (0x0003b669) vded2_slider_pane_g2

0x74b6,	// (0x000351dc) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003d808) vded2_slider_pane_g

0xd94b,	// (0x0003b671) vded2_slider_bg_pane_g1

0xd954,	// (0x0003b67a) vded2_slider_bg_pane_g2

0xd95d,	// (0x0003b683) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003d80f) vded2_slider_bg_pane_g

0x4177,	// (0x00031e9d) aid_postcard_touch_down_pane_ParamLimits

0x4177,	// (0x00031e9d) aid_postcard_touch_down_pane

0x418d,	// (0x00031eb3) aid_postcard_touch_up_pane_ParamLimits

0x418d,	// (0x00031eb3) aid_postcard_touch_up_pane

0x1957,	// (0x0002f67d) main_blid2_pane

0x4a2a,	// (0x00032750) popup_blid2_search_window

0x9b4c,	// (0x00037872) blid2_gps_pane

0x9b4c,	// (0x00037872) blid2_navig_pane

0x9b4c,	// (0x00037872) blid2_search_pane

0x9b4c,	// (0x00037872) blid2_tripm_pane

0x74c1,	// (0x000351e7) blid2_search_pane_g1_ParamLimits

0x74c1,	// (0x000351e7) blid2_search_pane_g1

0x74db,	// (0x00035201) blid2_search_pane_t1_ParamLimits

0x74db,	// (0x00035201) blid2_search_pane_t1

0x74ed,	// (0x00035213) aid_size_cell_blid2_gps_ParamLimits

0x74ed,	// (0x00035213) aid_size_cell_blid2_gps

0x7505,	// (0x0003522b) blid2_gps_pane_g1_ParamLimits

0x7505,	// (0x0003522b) blid2_gps_pane_g1

0x7519,	// (0x0003523f) grid_blid2_satellite_pane_ParamLimits

0x7519,	// (0x0003523f) grid_blid2_satellite_pane

0x7533,	// (0x00035259) blid2_navig_pane_g1_ParamLimits

0x7533,	// (0x00035259) blid2_navig_pane_g1

0x753f,	// (0x00035265) blid2_navig_pane_t1_ParamLimits

0x753f,	// (0x00035265) blid2_navig_pane_t1

0x755a,	// (0x00035280) blid2_navig_pane_t2_ParamLimits

0x755a,	// (0x00035280) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003d816) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003d816) blid2_navig_pane_t

0x7575,	// (0x0003529b) blid2_navig_ring_pane_ParamLimits

0x7575,	// (0x0003529b) blid2_navig_ring_pane

0x758e,	// (0x000352b4) blid2_speed_pane_ParamLimits

0x758e,	// (0x000352b4) blid2_speed_pane

0x759a,	// (0x000352c0) blid2_tripm_pane_g1_ParamLimits

0x759a,	// (0x000352c0) blid2_tripm_pane_g1

0x75b3,	// (0x000352d9) blid2_tripm_pane_g2_ParamLimits

0x75b3,	// (0x000352d9) blid2_tripm_pane_g2

0x75c7,	// (0x000352ed) blid2_tripm_pane_g3_ParamLimits

0x75c7,	// (0x000352ed) blid2_tripm_pane_g3

0x75db,	// (0x00035301) blid2_tripm_pane_g4_ParamLimits

0x75db,	// (0x00035301) blid2_tripm_pane_g4

0x75ef,	// (0x00035315) blid2_tripm_pane_g5_ParamLimits

0x75ef,	// (0x00035315) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003d81b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003d81b) blid2_tripm_pane_g

0x7615,	// (0x0003533b) blid2_tripm_pane_t1_ParamLimits

0x7615,	// (0x0003533b) blid2_tripm_pane_t1

0x7630,	// (0x00035356) blid2_tripm_pane_t2_ParamLimits

0x7630,	// (0x00035356) blid2_tripm_pane_t2

0x7649,	// (0x0003536f) blid2_tripm_pane_t3_ParamLimits

0x7649,	// (0x0003536f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003d828) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003d828) blid2_tripm_pane_t

0x7690,	// (0x000353b6) cell_blid2_satellite_pane_ParamLimits

0x7690,	// (0x000353b6) cell_blid2_satellite_pane

0x76ae,	// (0x000353d4) cell_blid2_satellite_pane_g1

0xd966,	// (0x0003b68c) cell_blid2_satellite_pane_t1

0xc7e9,	// (0x0003a50f) blid2_speed_pane_g1

0xd974,	// (0x0003b69a) blid2_speed_pane_t1

0xd982,	// (0x0003b6a8) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003d831) blid2_speed_pane_t

0xc7e9,	// (0x0003a50f) blid2_navig_ring_pane_g1

0x76b7,	// (0x000353dd) blid2_navig_ring_pane_g2

0x76bf,	// (0x000353e5) blid2_navig_ring_pane_g3

0x76c7,	// (0x000353ed) blid2_navig_ring_pane_g4

0x76cf,	// (0x000353f5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003d836) blid2_navig_ring_pane_g

0x9b4c,	// (0x00037872) bg_popup_window_pane_cp011

0xd990,	// (0x0003b6b6) popup_blid2_search_window_g1

0xd998,	// (0x0003b6be) popup_blid2_search_window_t1

0xd9a6,	// (0x0003b6cc) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003d841) popup_blid2_search_window_t

0xa596,	// (0x000382bc) main_browser_pane_g1

0xa289,	// (0x00037faf) main_browser_pane_ParamLimits

0x193d,	// (0x0002f663) bg_button_pane_cp011_ParamLimits

0x16bf,	// (0x0002f3e5) cell_vitu2_function_pane_g1_ParamLimits

0xc3e1,	// (0x0003a107) bg_popup_sub_pane_cp22_ParamLimits

0x6f81,	// (0x00034ca7) input_focus_pane_cp08_ParamLimits

0x6f98,	// (0x00034cbe) popup_vitu2_query_button_pane_ParamLimits

0x6f98,	// (0x00034cbe) popup_vitu2_query_button_pane

0x6fa9,	// (0x00034ccf) popup_vitu2_query_input_button_pane

0xd537,	// (0x0003b25d) popup_vitu2_query_window_g1_ParamLimits

0x6fb3,	// (0x00034cd9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003d742) popup_vitu2_query_window_g_ParamLimits

0x9b4c,	// (0x00037872) bg_button_pane_cp026

0x76d7,	// (0x000353fd) popup_vitu2_query_input_button_pane_g1

0x9b4c,	// (0x00037872) bg_button_pane_cp025

0xd9b4,	// (0x0003b6da) popup_vitu2_query_button_pane_t1

0x5197,	// (0x00032ebd) main_mp3_pane_t6

0x51a5,	// (0x00032ecb) popup_slider_window_cp01

0x65c7,	// (0x000342ed) cam4_battery_pane

0x6620,	// (0x00034346) cam4_battery_pane_cp02

0xa70d,	// (0x00038433) cam4_battery_pane_cp01

0xa70d,	// (0x00038433) cam4_battery_pane_cp03

0xd8cd,	// (0x0003b5f3) cam4_battery_pane_g1

0xc7e9,	// (0x0003a50f) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003d846) cam4_battery_pane_g

0xc6b5,	// (0x0003a3db) popup_blid_sat_info2_window_t11

0xadab,	// (0x00038ad1) aid_size_touch_mv_arrow_left_ParamLimits

0xadd4,	// (0x00038afa) aid_size_touch_mv_arrow_right_ParamLimits

0xae32,	// (0x00038b58) navi_pane_g1_ParamLimits

0xae3e,	// (0x00038b64) navi_pane_g2_ParamLimits

0xae6c,	// (0x00038b92) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003d10b) navi_pane_g_ParamLimits

0x3c13,	// (0x00031939) navi_pane_mv_t1_ParamLimits

0x5da2,	// (0x00033ac8) grid_imed_effect_pane_ParamLimits

0x279c,	// (0x000304c2) aid_placing_vt_slider_lsc

0xa4e5,	// (0x0003820b) aid_placing_vt_slider_prt

0xa6d7,	// (0x000383fd) bg_tb_trans_pane_cp01_ParamLimits

0xc975,	// (0x0003a69b) popup_image_details_window_g1_ParamLimits

0xc988,	// (0x0003a6ae) popup_image_details_window_g2_ParamLimits

0xc99d,	// (0x0003a6c3) popup_image_details_window_g3_ParamLimits

0xc99d,	// (0x0003a6c3) popup_image_details_window_g3

0xf718,	// (0x0003d43e) popup_image_details_window_g_ParamLimits

0xc9b1,	// (0x0003a6d7) popup_image_details_window_t1_ParamLimits

0xc9c3,	// (0x0003a6e9) popup_image_details_window_t2_ParamLimits

0xc9dc,	// (0x0003a702) popup_image_details_window_t3_ParamLimits

0xc9f0,	// (0x0003a716) popup_image_details_window_t4_ParamLimits

0xca0b,	// (0x0003a731) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003d445) popup_image_details_window_t_ParamLimits

0x7323,	// (0x00035049) cl_header_name_pane_ParamLimits

0x7323,	// (0x00035049) cl_header_name_pane

0x76df,	// (0x00035405) cl_header_name_pane_t1_ParamLimits

0x76df,	// (0x00035405) cl_header_name_pane_t1

0x7700,	// (0x00035426) cl_header_name_pane_t2_ParamLimits

0x7700,	// (0x00035426) cl_header_name_pane_t2

0x7742,	// (0x00035468) cl_header_name_pane_t3_ParamLimits

0x7742,	// (0x00035468) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003d84b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003d84b) cl_header_name_pane_t

0xaefb,	// (0x00038c21) navi_pane_mv_g2_ParamLimits

0xd253,	// (0x0003af79) field_vitu2_entry_pane_g1_ParamLimits

0xd25f,	// (0x0003af85) field_vitu2_entry_pane_g2_ParamLimits

0xd26b,	// (0x0003af91) field_vitu2_entry_pane_g3_ParamLimits

0xd26b,	// (0x0003af91) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003d641) field_vitu2_entry_pane_g_ParamLimits

0x66e7,	// (0x0003440d) cell_vitu2_itu_pane_g1_ParamLimits

0x1567,	// (0x0002f28d) cell_vitu2_itu_pane_g2_ParamLimits

0x1567,	// (0x0002f28d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003d64d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003d64d) cell_vitu2_itu_pane_g

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp05_ParamLimits

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp05

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp03

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp04

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp10_ParamLimits

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp10

0x72c9,	// (0x00034fef) bg_vkb2_func_pane_cp08

0x72af,	// (0x00034fd5) bg_vkb2_func_pane_cp06

0x72bd,	// (0x00034fe3) bg_vkb2_func_pane_cp07

0xd879,	// (0x0003b59f) bg_vkb2_func_pane_cp11_ParamLimits

0xd879,	// (0x0003b59f) bg_vkb2_func_pane_cp11

0xd8d7,	// (0x0003b5fd) bg_vkb2_func_pane_cp12_ParamLimits

0xd8d7,	// (0x0003b5fd) bg_vkb2_func_pane_cp12

0x9b4c,	// (0x00037872) bg_vkb2_func_pane_cp09

0xd2a8,	// (0x0003afce) bg_vkb2_func_pane_g1

0xa6a7,	// (0x000383cd) bg_vkb2_func_pane_g2

0xd2b0,	// (0x0003afd6) bg_vkb2_func_pane_g3

0xd2b8,	// (0x0003afde) bg_vkb2_func_pane_g4

0xd4fc,	// (0x0003b222) bg_vkb2_func_pane_g5

0xd2d0,	// (0x0003aff6) bg_vkb2_func_pane_g6

0xd2d8,	// (0x0003affe) bg_vkb2_func_pane_g7

0xd2c8,	// (0x0003afee) bg_vkb2_func_pane_g8

0xa687,	// (0x000383ad) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003d852) bg_vkb2_func_pane_g

0x7603,	// (0x00035329) blid2_tripm_pane_g6_ParamLimits

0x7603,	// (0x00035329) blid2_tripm_pane_g6

0xd0f5,	// (0x0003ae1b) mp4_progress_pane_g1

0x767c,	// (0x000353a2) blid2_tripm_values_pane_ParamLimits

0x767c,	// (0x000353a2) blid2_tripm_values_pane

0x7773,	// (0x00035499) blid2_tripm_values_pane_t1

0x7781,	// (0x000354a7) blid2_tripm_values_pane_t2

0x778f,	// (0x000354b5) blid2_tripm_values_pane_t3

0x779d,	// (0x000354c3) blid2_tripm_values_pane_t4

0x77ab,	// (0x000354d1) blid2_tripm_values_pane_t5

0x77b9,	// (0x000354df) blid2_tripm_values_pane_t6

0x77c7,	// (0x000354ed) blid2_tripm_values_pane_t7

0x77d5,	// (0x000354fb) blid2_tripm_values_pane_t8

0x77e3,	// (0x00035509) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003d865) blid2_tripm_values_pane_t

0x27de,	// (0x00030504) call_video_pane_t1_ParamLimits

0x27fc,	// (0x00030522) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003cf94) call_video_pane_t_ParamLimits

0x40f7,	// (0x00031e1d) msg_header_pane_g1_ParamLimits

0xb0eb,	// (0x00038e11) msg_header_pane_g2_ParamLimits

0xb0eb,	// (0x00038e11) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d1ae) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d1ae) msg_header_pane_g

0xa289,	// (0x00037faf) main_clock2_pane_ParamLimits

0x5b1b,	// (0x00033841) grid_clock2_toolbar_pane_ParamLimits

0x5b1b,	// (0x00033841) grid_clock2_toolbar_pane

0x5b1b,	// (0x00033841) listscroll_clock2_pane_ParamLimits

0x5b1b,	// (0x00033841) listscroll_clock2_pane

0x5c0e,	// (0x00033934) main_clock2_pane_t3_ParamLimits

0x5c0e,	// (0x00033934) main_clock2_pane_t3

0x5c32,	// (0x00033958) main_clock2_pane_t4_ParamLimits

0x5c32,	// (0x00033958) main_clock2_pane_t4

0xd9c2,	// (0x0003b6e8) cell_clock2_toolbar_pane

0xd9ca,	// (0x0003b6f0) cell_clock2_toolbar_pane_cp01

0xd9ca,	// (0x0003b6f0) cell_clock2_toolbar_pane_cp02

0xd9d2,	// (0x0003b6f8) cell_clock2_toolbar_pane_cp03

0xd9da,	// (0x0003b700) list_clock2_pane

0xad21,	// (0x00038a47) scroll_pane_cp10

0xd9e2,	// (0x0003b708) list_single_clock2_pane_ParamLimits

0xd9e2,	// (0x0003b708) list_single_clock2_pane

0xa44e,	// (0x00038174) list_highlight_pane_cp08

0xd9ef,	// (0x0003b715) list_single_clock2_pane_t1

0xd9fd,	// (0x0003b723) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003d878) list_single_clock2_pane_t

0x9b4c,	// (0x00037872) bg_button_pane_cp10

0xda0b,	// (0x0003b731) cell_clock2_toolbar_pane_g1

0x05bb,	// (0x0002e2e1) aid_main_viewer_pane_g1_ParamLimits

0x05bb,	// (0x0002e2e1) aid_main_viewer_pane_g1

0x05c9,	// (0x0002e2ef) aid_main_viewer_pane_g2_ParamLimits

0x05c9,	// (0x0002e2ef) aid_main_viewer_pane_g2

0x411d,	// (0x00031e43) aid_main_viewer_pane_g3_ParamLimits

0x411d,	// (0x00031e43) aid_main_viewer_pane_g3

0x412c,	// (0x00031e52) aid_main_viewer_pane_g4_ParamLimits

0x412c,	// (0x00031e52) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d1bf) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d1bf) aid_main_viewer_pane_g

0x05fd,	// (0x0002e323) main_calc_pane_ParamLimits

0x0623,	// (0x0002e349) main_dialer2_pane_ParamLimits

0x1957,	// (0x0002f67d) main_cam6_pane

0x1957,	// (0x0002f67d) main_vid6_pane

0x5b27,	// (0x0003384d) listscroll_gen_pane_cp06_ParamLimits

0x5b27,	// (0x0003384d) listscroll_gen_pane_cp06

0x5c55,	// (0x0003397b) main_clock2_pane_t5_ParamLimits

0x5c55,	// (0x0003397b) main_clock2_pane_t5

0x5caf,	// (0x000339d5) aid_call2_pane_cp10_ParamLimits

0x5cc1,	// (0x000339e7) aid_call_pane_cp10_ParamLimits

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5cd3,	// (0x000339f9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5cd3,	// (0x000339f9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad9f,	// (0x00038ac5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003d4fa) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ce5,	// (0x00033a0b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63ba,	// (0x000340e0) cell_dialer2_keypad_pane_g2_ParamLimits

0x63ba,	// (0x000340e0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003d5e0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003d5e0) cell_dialer2_keypad_pane_g

0x63d6,	// (0x000340fc) cell_dialer2_keypad_pane_t1

0x6a02,	// (0x00034728) main_cset_text2_pane_ParamLimits

0x6a02,	// (0x00034728) main_cset_text2_pane

0xd723,	// (0x0003b449) area_vitu2_query_pane_g1_ParamLimits

0x724e,	// (0x00034f74) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003d795) area_vitu2_query_pane_g_ParamLimits

0xd7a7,	// (0x0003b4cd) area_vitu2_query_pane_t7_ParamLimits

0xd7a7,	// (0x0003b4cd) area_vitu2_query_pane_t7

0x72af,	// (0x00034fd5) bg_button_pane_cp018_ParamLimits

0x72bd,	// (0x00034fe3) bg_button_pane_cp021_ParamLimits

0x72c9,	// (0x00034fef) bg_button_pane_cp022_ParamLimits

0x72c9,	// (0x00034fef) bg_vkb2_func_pane_cp08_ParamLimits

0x72af,	// (0x00034fd5) bg_vkb2_func_pane_cp06_ParamLimits

0x72bd,	// (0x00034fe3) bg_vkb2_func_pane_cp07_ParamLimits

0x72d8,	// (0x00034ffe) input_focus_pane_cp09_ParamLimits

0xa777,	// (0x0003849d) cam6_autofocus_pane_ParamLimits

0xa777,	// (0x0003849d) cam6_autofocus_pane

0x1811,	// (0x0002f537) cam6_image_uncrop_pane_ParamLimits

0x1811,	// (0x0002f537) cam6_image_uncrop_pane

0x1820,	// (0x0002f546) cam6_indi_pane_ParamLimits

0x1820,	// (0x0002f546) cam6_indi_pane

0x1836,	// (0x0002f55c) cam6_mode_pane_ParamLimits

0x1836,	// (0x0002f55c) cam6_mode_pane

0x1848,	// (0x0002f56e) cam6_timer_pane_ParamLimits

0x1848,	// (0x0002f56e) cam6_timer_pane

0x1854,	// (0x0002f57a) cam6_zoom_pane_ParamLimits

0x1854,	// (0x0002f57a) cam6_zoom_pane

0x77f1,	// (0x00035517) cam6_mode_pane_g1_ParamLimits

0x77f1,	// (0x00035517) cam6_mode_pane_g1

0x7801,	// (0x00035527) cam6_mode_pane_g2_ParamLimits

0x7801,	// (0x00035527) cam6_mode_pane_g2

0x7811,	// (0x00035537) cam6_mode_pane_g3_ParamLimits

0x7811,	// (0x00035537) cam6_mode_pane_g3

0x7821,	// (0x00035547) cam6_mode_pane_g4_ParamLimits

0x7821,	// (0x00035547) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003d87d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003d87d) cam6_mode_pane_g

0xd88e,	// (0x0003b5b4) bg_tb_trans_pane_cp08_ParamLimits

0xd88e,	// (0x0003b5b4) bg_tb_trans_pane_cp08

0xda13,	// (0x0003b739) cam6_battery_pane_ParamLimits

0xda13,	// (0x0003b739) cam6_battery_pane

0xda29,	// (0x0003b74f) cam6_indi_pane_g1_ParamLimits

0xda29,	// (0x0003b74f) cam6_indi_pane_g1

0xda3b,	// (0x0003b761) cam6_indi_pane_g2_ParamLimits

0xda3b,	// (0x0003b761) cam6_indi_pane_g2

0xda4d,	// (0x0003b773) cam6_indi_pane_g3_ParamLimits

0xda4d,	// (0x0003b773) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003d886) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003d886) cam6_indi_pane_g

0xda5f,	// (0x0003b785) cam6_indi_pane_t1_ParamLimits

0xda5f,	// (0x0003b785) cam6_indi_pane_t1

0x7831,	// (0x00035557) cam6_autofocus_pane_g1

0x7839,	// (0x0003555f) cam6_autofocus_pane_g2

0x7841,	// (0x00035567) cam6_autofocus_pane_g3

0x7849,	// (0x0003556f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003d88d) cam6_autofocus_pane_g

0xda85,	// (0x0003b7ab) cam6_timer_pane_g1

0xda8d,	// (0x0003b7b3) cam6_timer_pane_t1

0xda9b,	// (0x0003b7c1) cam6_zoom_cont_pane

0xdaa3,	// (0x0003b7c9) cam6_zoom_pane_g1

0xdaab,	// (0x0003b7d1) cam6_zoom_pane_g2

0x7851,	// (0x00035577) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003d896) cam6_zoom_pane_g

0xc7e9,	// (0x0003a50f) cam6_battery_pane_g1

0xc7e9,	// (0x0003a50f) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003d402) cam6_battery_pane_g

0xdab3,	// (0x0003b7d9) cam6_zoom_cont_pane_g1

0xdabc,	// (0x0003b7e2) cam6_zoom_cont_pane_g2

0xdac5,	// (0x0003b7eb) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003d89d) cam6_zoom_cont_pane_g

0x786e,	// (0x00035594) cam6_mode_pane_cp_ParamLimits

0x786e,	// (0x00035594) cam6_mode_pane_cp

0x7880,	// (0x000355a6) cam6_zoom_pane_cp_ParamLimits

0x7880,	// (0x000355a6) cam6_zoom_pane_cp

0x788c,	// (0x000355b2) vid6_image_uncrop_cif_pane_ParamLimits

0x788c,	// (0x000355b2) vid6_image_uncrop_cif_pane

0x789c,	// (0x000355c2) vid6_image_uncrop_nhd_pane_ParamLimits

0x789c,	// (0x000355c2) vid6_image_uncrop_nhd_pane

0x78ab,	// (0x000355d1) vid6_image_uncrop_vga_pane_ParamLimits

0x78ab,	// (0x000355d1) vid6_image_uncrop_vga_pane

0x78ba,	// (0x000355e0) vid6_image_uncrop_wvga_pane_ParamLimits

0x78ba,	// (0x000355e0) vid6_image_uncrop_wvga_pane

0x78c9,	// (0x000355ef) vid6_indi_pane_ParamLimits

0x78c9,	// (0x000355ef) vid6_indi_pane

0xd88e,	// (0x0003b5b4) bg_tb_trans_pane_cp09_ParamLimits

0xd88e,	// (0x0003b5b4) bg_tb_trans_pane_cp09

0xdadd,	// (0x0003b803) cam6_battery_pane_cp_ParamLimits

0xdadd,	// (0x0003b803) cam6_battery_pane_cp

0xdae9,	// (0x0003b80f) vid6_indi_pane_g1_ParamLimits

0xdae9,	// (0x0003b80f) vid6_indi_pane_g1

0xdafb,	// (0x0003b821) vid6_indi_pane_g2_ParamLimits

0xdafb,	// (0x0003b821) vid6_indi_pane_g2

0xdb0d,	// (0x0003b833) vid6_indi_pane_g3_ParamLimits

0xdb0d,	// (0x0003b833) vid6_indi_pane_g3

0xdb22,	// (0x0003b848) vid6_indi_pane_g4_ParamLimits

0xdb22,	// (0x0003b848) vid6_indi_pane_g4

0xdb37,	// (0x0003b85d) vid6_indi_pane_g5_ParamLimits

0xdb37,	// (0x0003b85d) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003d8a4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003d8a4) vid6_indi_pane_g

0xdb51,	// (0x0003b877) vid6_indi_pane_t1_ParamLimits

0xdb51,	// (0x0003b877) vid6_indi_pane_t1

0xdb67,	// (0x0003b88d) vid6_indi_pane_t2_ParamLimits

0xdb67,	// (0x0003b88d) vid6_indi_pane_t2

0xdb8f,	// (0x0003b8b5) vid6_indi_pane_t3_ParamLimits

0xdb8f,	// (0x0003b8b5) vid6_indi_pane_t3

0xdbb7,	// (0x0003b8dd) vid6_indi_pane_t4_ParamLimits

0xdbb7,	// (0x0003b8dd) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003d8af) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003d8af) vid6_indi_pane_t

0xdbdb,	// (0x0003b901) wait_bar_pane_cp08

0x78e1,	// (0x00035607) main_cset_text2_pane_t1_ParamLimits

0x78e1,	// (0x00035607) main_cset_text2_pane_t1

0x7859,	// (0x0003557f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7859,	// (0x0003557f) listscroll_gen_pane_cp06_t1

0x1957,	// (0x0002f67d) main_cam6_set_pane

0x65b9,	// (0x000342df) bg_tb_trans_pane_cp06_ParamLimits

0x65cf,	// (0x000342f5) cam4_indicators_pane_g1_ParamLimits

0x65e0,	// (0x00034306) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003d61d) cam4_indicators_pane_g_ParamLimits

0x65fe,	// (0x00034324) cam4_indicators_pane_t1_ParamLimits

0x193d,	// (0x0002f663) bg_tb_trans_pane_cp07_ParamLimits

0x662a,	// (0x00034350) vid4_indicators_pane_g1_ParamLimits

0x663e,	// (0x00034364) vid4_indicators_pane_g2_ParamLimits

0x6652,	// (0x00034378) vid4_indicators_pane_g3_ParamLimits

0x6663,	// (0x00034389) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003d62f) vid4_indicators_pane_g_ParamLimits

0x6681,	// (0x000343a7) vid4_indicators_pane_t1_ParamLimits

0xa715,	// (0x0003843b) vid4_progress_pane_g1_ParamLimits

0xa725,	// (0x0003844b) vid4_progress_pane_g2_ParamLimits

0x17d4,	// (0x0002f4fa) vid4_progress_pane_g3_ParamLimits

0xa735,	// (0x0003845b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003d7e0) vid4_progress_pane_g_ParamLimits

0x17e6,	// (0x0002f50c) vid4_progress_pane_t1_ParamLimits

0xa74d,	// (0x00038473) vid4_progress_pane_t2_ParamLimits

0xa762,	// (0x00038488) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003d7eb) vid4_progress_pane_t_ParamLimits

0x17fe,	// (0x0002f524) wait_bar_pane_cp07_ParamLimits

0x78fe,	// (0x00035624) main_cam6_set_pane_g2_ParamLimits

0x78fe,	// (0x00035624) main_cam6_set_pane_g2

0x7922,	// (0x00035648) main_cset6_listscroll_pane_ParamLimits

0x7922,	// (0x00035648) main_cset6_listscroll_pane

0x7942,	// (0x00035668) main_cset6_slider_pane_ParamLimits

0x7942,	// (0x00035668) main_cset6_slider_pane

0x7958,	// (0x0003567e) main_cset6_text2_pane_ParamLimits

0x7958,	// (0x0003567e) main_cset6_text2_pane

0xdbea,	// (0x0003b910) main_cset6_text_pane

0xdbf2,	// (0x0003b918) main_cset_list_pane_copy1_ParamLimits

0xdbf2,	// (0x0003b918) main_cset_list_pane_copy1

0xdc02,	// (0x0003b928) scroll_pane_cp028_copy1

0x7966,	// (0x0003568c) cset_list_set_pane_copy1

0x7977,	// (0x0003569d) aid_position_infowindow_above_copy1

0x797f,	// (0x000356a5) aid_position_infowindow_below_copy1

0x7987,	// (0x000356ad) cset_list_set_pane_g1_copy1

0x798f,	// (0x000356b5) cset_list_set_pane_g3_copy1_ParamLimits

0x798f,	// (0x000356b5) cset_list_set_pane_g3_copy1

0x799e,	// (0x000356c4) cset_list_set_pane_t1_copy1_ParamLimits

0x799e,	// (0x000356c4) cset_list_set_pane_t1_copy1

0xa6d7,	// (0x000383fd) list_highlight_pane_cp021_copy1_ParamLimits

0xa6d7,	// (0x000383fd) list_highlight_pane_cp021_copy1

0xdc0b,	// (0x0003b931) cset6_slider_pane_ParamLimits

0xdc0b,	// (0x0003b931) cset6_slider_pane

0xdc37,	// (0x0003b95d) main_cset6_slider_pane_g1_ParamLimits

0xdc37,	// (0x0003b95d) main_cset6_slider_pane_g1

0x79b3,	// (0x000356d9) main_cset6_slider_pane_g2_ParamLimits

0x79b3,	// (0x000356d9) main_cset6_slider_pane_g2

0xdc5f,	// (0x0003b985) main_cset6_slider_pane_g3_ParamLimits

0xdc5f,	// (0x0003b985) main_cset6_slider_pane_g3

0x79db,	// (0x00035701) main_cset6_slider_pane_g4_ParamLimits

0x79db,	// (0x00035701) main_cset6_slider_pane_g4

0x79e7,	// (0x0003570d) main_cset6_slider_pane_g5_ParamLimits

0x79e7,	// (0x0003570d) main_cset6_slider_pane_g5

0xd3d7,	// (0x0003b0fd) main_cset6_slider_pane_g7_ParamLimits

0xd3d7,	// (0x0003b0fd) main_cset6_slider_pane_g7

0xd3e3,	// (0x0003b109) main_cset6_slider_pane_g8_ParamLimits

0xd3e3,	// (0x0003b109) main_cset6_slider_pane_g8

0x6aaf,	// (0x000347d5) main_cset6_slider_pane_g9_ParamLimits

0x6aaf,	// (0x000347d5) main_cset6_slider_pane_g9

0x6abb,	// (0x000347e1) main_cset6_slider_pane_g10_ParamLimits

0x6abb,	// (0x000347e1) main_cset6_slider_pane_g10

0x6ac7,	// (0x000347ed) main_cset6_slider_pane_g11_ParamLimits

0x6ac7,	// (0x000347ed) main_cset6_slider_pane_g11

0x6ad3,	// (0x000347f9) main_cset6_slider_pane_g12_ParamLimits

0x6ad3,	// (0x000347f9) main_cset6_slider_pane_g12

0x6adf,	// (0x00034805) main_cset6_slider_pane_g13_ParamLimits

0x6adf,	// (0x00034805) main_cset6_slider_pane_g13

0x6aeb,	// (0x00034811) main_cset6_slider_pane_g14_ParamLimits

0x6aeb,	// (0x00034811) main_cset6_slider_pane_g14

0x79f3,	// (0x00035719) main_cset6_slider_pane_g15_ParamLimits

0x79f3,	// (0x00035719) main_cset6_slider_pane_g15

0x6b0f,	// (0x00034835) main_cset6_slider_pane_g16_ParamLimits

0x6b0f,	// (0x00034835) main_cset6_slider_pane_g16

0x6b1b,	// (0x00034841) main_cset6_slider_pane_g17_ParamLimits

0x6b1b,	// (0x00034841) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003d8b8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003d8b8) main_cset6_slider_pane_g

0xdc6b,	// (0x0003b991) main_cset6_slider_pane_t1_ParamLimits

0xdc6b,	// (0x0003b991) main_cset6_slider_pane_t1

0x7a23,	// (0x00035749) main_cset6_slider_pane_t2_ParamLimits

0x7a23,	// (0x00035749) main_cset6_slider_pane_t2

0x7a4e,	// (0x00035774) main_cset6_slider_pane_t3_ParamLimits

0x7a4e,	// (0x00035774) main_cset6_slider_pane_t3

0x7a79,	// (0x0003579f) main_cset6_slider_pane_t4_ParamLimits

0x7a79,	// (0x0003579f) main_cset6_slider_pane_t4

0x7aa4,	// (0x000357ca) main_cset6_slider_pane_t5_ParamLimits

0x7aa4,	// (0x000357ca) main_cset6_slider_pane_t5

0xdcac,	// (0x0003b9d2) main_cset6_slider_pane_t7_ParamLimits

0xdcac,	// (0x0003b9d2) main_cset6_slider_pane_t7

0x7acf,	// (0x000357f5) main_cset6_slider_pane_t8_ParamLimits

0x7acf,	// (0x000357f5) main_cset6_slider_pane_t8

0x7af3,	// (0x00035819) main_cset6_slider_pane_t9_ParamLimits

0x7af3,	// (0x00035819) main_cset6_slider_pane_t9

0x7b17,	// (0x0003583d) main_cset6_slider_pane_t10_ParamLimits

0x7b17,	// (0x0003583d) main_cset6_slider_pane_t10

0x7b3b,	// (0x00035861) main_cset6_slider_pane_t11_ParamLimits

0x7b3b,	// (0x00035861) main_cset6_slider_pane_t11

0xdce2,	// (0x0003ba08) main_cset6_slider_pane_t14_ParamLimits

0xdce2,	// (0x0003ba08) main_cset6_slider_pane_t14

0xdd1b,	// (0x0003ba41) main_cset6_slider_pane_t15_ParamLimits

0xdd1b,	// (0x0003ba41) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003d8dd) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003d8dd) main_cset6_slider_pane_t

0xd89c,	// (0x0003b5c2) cset_slider_pane_g1_copy1

0xd8a5,	// (0x0003b5cb) cset_slider_pane_g2_copy1

0xd8ae,	// (0x0003b5d4) cset_slider_pane_g3_copy1

0x9b4c,	// (0x00037872) bg_popup_sub_pane_cp011_copy1

0xdd54,	// (0x0003ba7a) main_cset_text_pane_g1_copy1

0xd54b,	// (0x0003b271) main_cset_text_pane_t1_copy1

0xd559,	// (0x0003b27f) main_cset_text_pane_t2_copy1

0xd567,	// (0x0003b28d) main_cset_text_pane_t3_copy1

0xd575,	// (0x0003b29b) main_cset_text_pane_t4_copy1

0xd583,	// (0x0003b2a9) main_cset_text_pane_t5_copy1

0xdd5c,	// (0x0003ba82) main_cset_text_pane_t6_copy1

0xdd6a,	// (0x0003ba90) main_cset_text_pane_t7_copy1

0x78e1,	// (0x00035607) main_cset_text2_pane_t1_copy1

0x193d,	// (0x0002f663) main_ncimui_pane

0x086d,	// (0x0002e593) popup_query_ncimui_window_ParamLimits

0x086d,	// (0x0002e593) popup_query_ncimui_window

0xcaba,	// (0x0003a7e0) field_cale_ev2_pane_g4_ParamLimits

0xcaba,	// (0x0003a7e0) field_cale_ev2_pane_g4

0x615a,	// (0x00033e80) cell_video_dialer_keypad_pane_g2_ParamLimits

0x615a,	// (0x00033e80) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003d5bb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003d5bb) cell_video_dialer_keypad_pane_g

0x6172,	// (0x00033e98) cell_video_dialer_keypad_pane_t1

0x9b4c,	// (0x00037872) bg_popup_window_pane_cp012

0xabee,	// (0x00038914) heading_pane_cp06

0xdd96,	// (0x0003babc) ncim_query_content_pane

0x9b4c,	// (0x00037872) bg_popup_heading_pane_cp01

0xdd9e,	// (0x0003bac4) ncim_heading_pane_t1

0xddac,	// (0x0003bad2) ncim_indicator_popup_pane

0xddbe,	// (0x0003bae4) ncim_query_button_pane

0xddd2,	// (0x0003baf8) ncim_query_content_pane_t1

0xdde4,	// (0x0003bb0a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003d921) ncim_query_content_pane_t

0xde1e,	// (0x0003bb44) ncim_query_list_pane

0xde30,	// (0x0003bb56) ncim_query_popup_pane

0xddac,	// (0x0003bad2) ncim_indicator_popup_pane_ParamLimits

0x7d56,	// (0x00035a7c) ncim_query_content_pane_g1_ParamLimits

0x7d56,	// (0x00035a7c) ncim_query_content_pane_g1

0xddd2,	// (0x0003baf8) ncim_query_content_pane_t1_ParamLimits

0xdde4,	// (0x0003bb0a) ncim_query_content_pane_t2_ParamLimits

0x7d62,	// (0x00035a88) ncim_query_content_pane_t3_ParamLimits

0x7d62,	// (0x00035a88) ncim_query_content_pane_t3

0x7d8a,	// (0x00035ab0) ncim_query_content_pane_t4_ParamLimits

0x7d8a,	// (0x00035ab0) ncim_query_content_pane_t4

0x7db2,	// (0x00035ad8) ncim_query_content_pane_t5_ParamLimits

0x7db2,	// (0x00035ad8) ncim_query_content_pane_t5

0xddf6,	// (0x0003bb1c) ncim_query_content_pane_t6_ParamLimits

0xddf6,	// (0x0003bb1c) ncim_query_content_pane_t6

0xfbfb,	// (0x0003d921) ncim_query_content_pane_t_ParamLimits

0xde1e,	// (0x0003bb44) ncim_query_list_pane_ParamLimits

0xde30,	// (0x0003bb56) ncim_query_popup_pane_ParamLimits

0xde44,	// (0x0003bb6a) wait_bar_pane_cp04

0x9b4c,	// (0x00037872) input_focus_pane_cp011

0xde4c,	// (0x0003bb72) ncim_query_popup_pane_t1

0xde5a,	// (0x0003bb80) ncim_list_query_list_pane_ParamLimits

0xde5a,	// (0x0003bb80) ncim_list_query_list_pane

0x9b4c,	// (0x00037872) bg_button_pane_cp027

0xde67,	// (0x0003bb8d) ncim_query_button_pane_g1

0x9b4c,	// (0x00037872) list_highlight_pane_cp012

0xde71,	// (0x0003bb97) ncim_list_query_list_pane_g1

0xde79,	// (0x0003bb9f) ncim_list_query_list_pane_t1

0x65ef,	// (0x00034315) cam4_indicators_pane_g3_ParamLimits

0x65ef,	// (0x00034315) cam4_indicators_pane_g3

0x666f,	// (0x00034395) vid4_indicators_pane_g5_ParamLimits

0x666f,	// (0x00034395) vid4_indicators_pane_g5

0xa741,	// (0x00038467) vid4_progress_pane_g5_ParamLimits

0xa741,	// (0x00038467) vid4_progress_pane_g5

0x7c44,	// (0x0003596a) main_ncimui_pane_g1

0x7caa,	// (0x000359d0) ncimui_group_query_pane_ParamLimits

0x7caa,	// (0x000359d0) ncimui_group_query_pane

0x7cf2,	// (0x00035a18) ncimui_list_pane_ParamLimits

0x7cf2,	// (0x00035a18) ncimui_list_pane

0x7d19,	// (0x00035a3f) ncimui_text_pane_ParamLimits

0x7d19,	// (0x00035a3f) ncimui_text_pane

0x7dda,	// (0x00035b00) ncimui_text_pane_t1_ParamLimits

0x7dda,	// (0x00035b00) ncimui_text_pane_t1

0xde87,	// (0x0003bbad) ncimui_list_single_graphic_pane_ParamLimits

0xde87,	// (0x0003bbad) ncimui_list_single_graphic_pane

0x7df8,	// (0x00035b1e) ncimui_query_pane_ParamLimits

0x7df8,	// (0x00035b1e) ncimui_query_pane

0x9b4c,	// (0x00037872) list_highlight_pane_cp013

0xde97,	// (0x0003bbbd) ncim_list_query_list_pane_t1_copy1

0xde71,	// (0x0003bb97) ncim_list_single_graphic_pane_g1

0xdea5,	// (0x0003bbcb) ncim_query_button_pane_cp01

0xdeb1,	// (0x0003bbd7) ncim_query_entry_pane_ParamLimits

0xdeb1,	// (0x0003bbd7) ncim_query_entry_pane

0xdec4,	// (0x0003bbea) ncimui_query_pane_g1

0xded0,	// (0x0003bbf6) ncimui_query_pane_t1_ParamLimits

0xded0,	// (0x0003bbf6) ncimui_query_pane_t1

0xa6d7,	// (0x000383fd) input_focus_pane_cp012

0xdee9,	// (0x0003bc0f) ncim_query_entry_pane_t1

0xa289,	// (0x00037faf) main_im_pane_ParamLimits

0x193d,	// (0x0002f663) main_mobtv_pane_ParamLimits

0x193d,	// (0x0002f663) main_mobtv_pane

0x7a0b,	// (0x00035731) main_cset6_slider_pane_g18_ParamLimits

0x7a0b,	// (0x00035731) main_cset6_slider_pane_g18

0x7a17,	// (0x0003573d) main_cset6_slider_pane_g19_ParamLimits

0x7a17,	// (0x0003573d) main_cset6_slider_pane_g19

0x7e0b,	// (0x00035b31) bg_main_mobtv_pane_ParamLimits

0x7e0b,	// (0x00035b31) bg_main_mobtv_pane

0x7e19,	// (0x00035b3f) main_mobtv_info_pane

0x7e22,	// (0x00035b48) main_mobtv_loading_pane_ParamLimits

0x7e22,	// (0x00035b48) main_mobtv_loading_pane

0xdefb,	// (0x0003bc21) main_mobtv_pg_channel_list_pane

0xdf05,	// (0x0003bc2b) main_mobtv_pg_hdr_pane

0x7e2f,	// (0x00035b55) main_mobtv_programe_curr_pane_ParamLimits

0x7e2f,	// (0x00035b55) main_mobtv_programe_curr_pane

0x7e3c,	// (0x00035b62) main_mobtv_programe_next_pane_ParamLimits

0x7e3c,	// (0x00035b62) main_mobtv_programe_next_pane

0xdf0e,	// (0x0003bc34) popup_mobtv_noti_window

0xc7e9,	// (0x0003a50f) main_tv_pg_hdr_pane_g1

0xdf16,	// (0x0003bc3c) main_tv_pg_hdr_pane_g2

0xdf1e,	// (0x0003bc44) main_tv_pg_hdr_pane_g3

0xdf26,	// (0x0003bc4c) main_tv_pg_hdr_pane_g4

0xdf2e,	// (0x0003bc54) main_tv_pg_hdr_pane_g5

0xdf38,	// (0x0003bc5e) main_tv_pg_hdr_pane_g6

0xdf42,	// (0x0003bc68) main_tv_pg_hdr_pane_g7

0xdf4c,	// (0x0003bc72) main_tv_pg_hdr_pane_g8

0xdf56,	// (0x0003bc7c) main_tv_pg_hdr_pane_g9

0xdf60,	// (0x0003bc86) main_tv_pg_hdr_pane_g10

0xdf6a,	// (0x0003bc90) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003d92e) main_tv_pg_hdr_pane_g

0xdf74,	// (0x0003bc9a) main_tv_pg_hdr_pane_t1

0xdf82,	// (0x0003bca8) main_tv_pg_hdr_pane_t2

0xdf90,	// (0x0003bcb6) main_tv_pg_hdr_pane_t3

0xdfa0,	// (0x0003bcc6) main_tv_pg_hdr_pane_t4

0xdfb0,	// (0x0003bcd6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003d945) main_tv_pg_hdr_pane_t

0xdfc0,	// (0x0003bce6) single_mobtv_pg_channel_pane_ParamLimits

0xdfc0,	// (0x0003bce6) single_mobtv_pg_channel_pane

0xdfd2,	// (0x0003bcf8) single_mobtv_pg_channel_table_pane

0xdfdb,	// (0x0003bd01) single_mobtv_pg_channel_thumb_pane

0xdfe4,	// (0x0003bd0a) single_tv_pg_channel_pane_g1

0xdfed,	// (0x0003bd13) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003d950) single_tv_pg_channel_pane_g

0xca55,	// (0x0003a77b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca55,	// (0x0003a77b) bg_single_mobtv_pg_channel_thumb_pane

0xdff6,	// (0x0003bd1c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdff6,	// (0x0003bd1c) single_mobtv_pg_channel_thumb_pane_g1

0xe004,	// (0x0003bd2a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe004,	// (0x0003bd2a) single_mobtv_pg_channel_thumb_pane_g2

0xe010,	// (0x0003bd36) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe010,	// (0x0003bd36) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003d955) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003d955) single_mobtv_pg_channel_thumb_pane_g

0xe01c,	// (0x0003bd42) single_mobtv_pg_channel_thumb_pane_t1

0xe02a,	// (0x0003bd50) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003d95c) single_mobtv_pg_channel_thumb_pane_t

0xc7e9,	// (0x0003a50f) bg_single_mobtv_pg_channel_table_pane_g1

0xc7e9,	// (0x0003a50f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003d402) bg_single_mobtv_pg_channel_table_pane_g

0xe038,	// (0x0003bd5e) single_mobtv_pg_channel_table_pane_t1

0xe046,	// (0x0003bd6c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003d961) single_mobtv_pg_channel_table_pane_t

0x7e51,	// (0x00035b77) main_mobtv_info_pane_g1_ParamLimits

0x7e51,	// (0x00035b77) main_mobtv_info_pane_g1

0x7e6f,	// (0x00035b95) main_mobtv_info_pane_t1_ParamLimits

0x7e6f,	// (0x00035b95) main_mobtv_info_pane_t1

0x7ee7,	// (0x00035c0d) main_mobtv_info_pane_t2_ParamLimits

0x7ee7,	// (0x00035c0d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003d96b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003d96b) main_mobtv_info_pane_t

0x7f76,	// (0x00035c9c) wait_bar_pane_cp05

0x7f88,	// (0x00035cae) main_mobtv_loading_pane_g1_ParamLimits

0x7f88,	// (0x00035cae) main_mobtv_loading_pane_g1

0x7f9b,	// (0x00035cc1) main_mobtv_loading_pane_g2_ParamLimits

0x7f9b,	// (0x00035cc1) main_mobtv_loading_pane_g2

0x7fa7,	// (0x00035ccd) main_mobtv_loading_pane_g3_ParamLimits

0x7fa7,	// (0x00035ccd) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003d972) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003d972) main_mobtv_loading_pane_g

0xe054,	// (0x0003bd7a) main_mobtv_loading_pane_t1_ParamLimits

0xe054,	// (0x0003bd7a) main_mobtv_loading_pane_t1

0xe06c,	// (0x0003bd92) main_mobtv_loading_pane_t2_ParamLimits

0xe06c,	// (0x0003bd92) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003d979) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003d979) main_mobtv_loading_pane_t

0x7fba,	// (0x00035ce0) wait_bar_pane_cp06_ParamLimits

0x7fba,	// (0x00035ce0) wait_bar_pane_cp06

0xe090,	// (0x0003bdb6) main_mobtv_programe_curr_pane_t1

0xe09e,	// (0x0003bdc4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003d97e) main_mobtv_programe_curr_pane_t

0xe0ac,	// (0x0003bdd2) main_mobtv_programe_next_pane_t1

0xe0ba,	// (0x0003bde0) main_mobtv_programe_next_pane_t2

0xe0c8,	// (0x0003bdee) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003d983) main_mobtv_programe_next_pane_t

0x9b4c,	// (0x00037872) bg_popup_mobtv_noti_window_pane

0xe0d6,	// (0x0003bdfc) popup_mobtv_noti_window_g1

0xe0de,	// (0x0003be04) popup_mobtv_noti_window_t1

0xe0ec,	// (0x0003be12) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003d98a) popup_mobtv_noti_window_t

0xc7e9,	// (0x0003a50f) bg_popup_mobtv_noti_window_pane_g1

0x1957,	// (0x0002f67d) sc_clock_pane

0x1957,	// (0x0002f67d) main_fs_bigclock_pane

0x7666,	// (0x0003538c) blid2_tripm_pane_t4_ParamLimits

0x7666,	// (0x0003538c) blid2_tripm_pane_t4

0x7fc9,	// (0x00035cef) sc_clock_pane_g1_ParamLimits

0x7fc9,	// (0x00035cef) sc_clock_pane_g1

0x7fdb,	// (0x00035d01) sc_clock_pane_t1_ParamLimits

0x7fdb,	// (0x00035d01) sc_clock_pane_t1

0x7ffd,	// (0x00035d23) sc_clock_pane_t2_ParamLimits

0x7ffd,	// (0x00035d23) sc_clock_pane_t2

0x8015,	// (0x00035d3b) sc_clock_pane_t3_ParamLimits

0x8015,	// (0x00035d3b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003d98f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003d98f) sc_clock_pane_t

0x9044,	// (0x00036d6a) main_fs_bigclock_indicator_pane_ParamLimits

0x9044,	// (0x00036d6a) main_fs_bigclock_indicator_pane

0x80b5,	// (0x00035ddb) main_fs_bigclock_pane_g1_ParamLimits

0x80b5,	// (0x00035ddb) main_fs_bigclock_pane_g1

0x9050,	// (0x00036d76) main_fs_bigclock_pane_t1_ParamLimits

0x9050,	// (0x00036d76) main_fs_bigclock_pane_t1

0x9062,	// (0x00036d88) main_fs_bigclock_pane_t2_ParamLimits

0x9062,	// (0x00036d88) main_fs_bigclock_pane_t2

0x9076,	// (0x00036d9c) main_fs_bigclock_pane_t3_ParamLimits

0x9076,	// (0x00036d9c) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003db94) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003db94) main_fs_bigclock_pane_t

0xec70,	// (0x0003c996) main_fs_bigclock_indicator_pane_g1

0xddc6,	// (0x0003baec) ncim_query_content_pane_g2_ParamLimits

0xddc6,	// (0x0003baec) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003d91c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003d91c) ncim_query_content_pane_g

0x802e,	// (0x00035d54) sc_clock_pane_t4_ParamLimits

0x802e,	// (0x00035d54) sc_clock_pane_t4

0x193d,	// (0x0002f663) main_radioblah_pane

0xd1de,	// (0x0003af04) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1de,	// (0x0003af04) cell_call4_button_pane_t1_copy1

0x7c5c,	// (0x00035982) main_ncimui_pane_t1_ParamLimits

0x7c5c,	// (0x00035982) main_ncimui_pane_t1

0x7c76,	// (0x0003599c) main_ncimui_pane_t2_ParamLimits

0x7c76,	// (0x0003599c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003d915) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003d915) main_ncimui_pane_t

0xe230,	// (0x0003bf56) main_radioblah_anim_pane_ParamLimits

0xe230,	// (0x0003bf56) main_radioblah_anim_pane

0xe241,	// (0x0003bf67) main_radioblah_info_pane_ParamLimits

0xe241,	// (0x0003bf67) main_radioblah_info_pane

0xe255,	// (0x0003bf7b) main_radioblah_pane_t1_ParamLimits

0xe255,	// (0x0003bf7b) main_radioblah_pane_t1

0xe271,	// (0x0003bf97) main_radioblah_pane_t2_ParamLimits

0xe271,	// (0x0003bf97) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003d9b0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003d9b0) main_radioblah_pane_t

0x810d,	// (0x00035e33) main_radioblah_rocker_ctrl_pane_ParamLimits

0x810d,	// (0x00035e33) main_radioblah_rocker_ctrl_pane

0xe2b9,	// (0x0003bfdf) main_radioblah_info_pane_t1_ParamLimits

0xe2b9,	// (0x0003bfdf) main_radioblah_info_pane_t1

0x8165,	// (0x00035e8b) main_radioblah_info_pane_t2_ParamLimits

0x8165,	// (0x00035e8b) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003d9b9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003d9b9) main_radioblah_info_pane_t

0xc7e9,	// (0x0003a50f) main_radioblah_rocker_ctrl_pane_g1

0x8215,	// (0x00035f3b) main_radioblah_rocker_ctrl_pane_g2

0x821d,	// (0x00035f43) main_radioblah_rocker_ctrl_pane_g3

0x8225,	// (0x00035f4b) main_radioblah_rocker_ctrl_pane_g4

0x822d,	// (0x00035f53) main_radioblah_rocker_ctrl_pane_g5

0x8235,	// (0x00035f5b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003d9c2) main_radioblah_rocker_ctrl_pane_g

0x78e1,	// (0x00035607) main_cset_text2_pane_t1_copy1_ParamLimits

0x659d,	// (0x000342c3) cam4_image_uncrop_qvga_pane

0x6618,	// (0x0003433e) vid4_image_uncrop_qcif_pane

0xa777,	// (0x0003849d) cam6_image_uncrop_qvga_pane_ParamLimits

0xa777,	// (0x0003849d) cam6_image_uncrop_qvga_pane

0xdacd,	// (0x0003b7f3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdacd,	// (0x0003b7f3) vid6_image_uncrop_qcif_pane

0x9b4c,	// (0x00037872) bg_popup_preview_window_pane_cp03

0xdd78,	// (0x0003ba9e) list_cset_text2_pane

0xdd80,	// (0x0003baa6) main_cset6_text2_pane_g1

0xdd88,	// (0x0003baae) main_cset6_text2_pane_t1

0x823d,	// (0x00035f63) list_cset_text2_pane_t1_ParamLimits

0x823d,	// (0x00035f63) list_cset_text2_pane_t1

0x193d,	// (0x0002f663) main_radioblah_pane_ParamLimits

0x7f62,	// (0x00035c88) main_mobtv_info_pane_t3_ParamLimits

0x7f62,	// (0x00035c88) main_mobtv_info_pane_t3

0x80fb,	// (0x00035e21) main_radioblah_pane_g1

0x8135,	// (0x00035e5b) main_radioblah_info_pane_g1

0x81ba,	// (0x00035ee0) main_radioblah_info_pane_t3_ParamLimits

0x81ba,	// (0x00035ee0) main_radioblah_info_pane_t3

0x36a9,	// (0x000313cf) highlight_cell_cale_month_pane_ParamLimits

0x36a9,	// (0x000313cf) highlight_cell_cale_month_pane

0x1957,	// (0x0002f67d) main_phob_fisheye_pane

0xcb5d,	// (0x0003a883) scroll_pane_cp0031_ParamLimits

0xcb5d,	// (0x0003a883) scroll_pane_cp0031

0xdbdb,	// (0x0003b901) wait_bar_pane_cp08_ParamLimits

0x7966,	// (0x0003568c) cset_list_set_pane_copy1_ParamLimits

0xe2f3,	// (0x0003c019) highlight_cell_cale_month_pane_g1

0x8256,	// (0x00035f7c) highlight_cell_cale_month_pane_t1

0xd813,	// (0x0003b539) list_gen_pane_cp01

0xd3c2,	// (0x0003b0e8) scroll_pane_01

0xe2fb,	// (0x0003c021) list_single_double_fisheye_pane

0x8264,	// (0x00035f8a) list_double_fisheye_pane_g1_ParamLimits

0x8264,	// (0x00035f8a) list_double_fisheye_pane_g1

0x8270,	// (0x00035f96) list_double_fisheye_pane_g2_ParamLimits

0x8270,	// (0x00035f96) list_double_fisheye_pane_g2

0x8284,	// (0x00035faa) list_double_fisheye_pane_g3_ParamLimits

0x8284,	// (0x00035faa) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003d9cf) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003d9cf) list_double_fisheye_pane_g

0x82ad,	// (0x00035fd3) list_double_fisheye_pane_t1_ParamLimits

0x82ad,	// (0x00035fd3) list_double_fisheye_pane_t1

0x82c8,	// (0x00035fee) list_double_fisheye_pane_t2_ParamLimits

0x82c8,	// (0x00035fee) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003d9da) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003d9da) list_double_fisheye_pane_t

0x1957,	// (0x0002f67d) main_call5_pane

0x8059,	// (0x00035d7f) sc_swipe_pane_ParamLimits

0x8059,	// (0x00035d7f) sc_swipe_pane

0x82fd,	// (0x00036023) call5_image_pane_ParamLimits

0x82fd,	// (0x00036023) call5_image_pane

0x831a,	// (0x00036040) call5_swipe_1_pane_ParamLimits

0x831a,	// (0x00036040) call5_swipe_1_pane

0x832d,	// (0x00036053) call5_swipe_2_pane_ParamLimits

0x832d,	// (0x00036053) call5_swipe_2_pane

0x8358,	// (0x0003607e) popup_call5_audio_first_window_ParamLimits

0x8358,	// (0x0003607e) popup_call5_audio_first_window

0xca55,	// (0x0003a77b) call5_swipe_1_pane_g1_ParamLimits

0xca55,	// (0x0003a77b) call5_swipe_1_pane_g1

0xe304,	// (0x0003c02a) call5_swipe_1_pane_g2_ParamLimits

0xe304,	// (0x0003c02a) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003d9df) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003d9df) call5_swipe_1_pane_g

0xe310,	// (0x0003c036) call5_swipe_1_pane_t1_ParamLimits

0xe310,	// (0x0003c036) call5_swipe_1_pane_t1

0xca55,	// (0x0003a77b) call5_swipe_2_pane_g1_ParamLimits

0xca55,	// (0x0003a77b) call5_swipe_2_pane_g1

0xe325,	// (0x0003c04b) call5_swipe_2_pane_g2_ParamLimits

0xe325,	// (0x0003c04b) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003d9e4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003d9e4) call5_swipe_2_pane_g

0xe331,	// (0x0003c057) call5_swipe_2_pane_t1_ParamLimits

0xe331,	// (0x0003c057) call5_swipe_2_pane_t1

0xe346,	// (0x0003c06c) sc_swipe_pane_g1_ParamLimits

0xe346,	// (0x0003c06c) sc_swipe_pane_g1

0xe353,	// (0x0003c079) sc_swipe_pane_g2_ParamLimits

0xe353,	// (0x0003c079) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e9) sc_swipe_pane_g

0xe35f,	// (0x0003c085) sc_swipe_pane_t1_ParamLimits

0xe35f,	// (0x0003c085) sc_swipe_pane_t1

0x1957,	// (0x0002f67d) main_cmail_launcher_pane

0x8369,	// (0x0003608f) aid_size_cell_cmail_l_ParamLimits

0x8369,	// (0x0003608f) aid_size_cell_cmail_l

0x8383,	// (0x000360a9) grid_cmail_l_pane_ParamLimits

0x8383,	// (0x000360a9) grid_cmail_l_pane

0x839e,	// (0x000360c4) cell_cmail_l_pane_ParamLimits

0x839e,	// (0x000360c4) cell_cmail_l_pane

0x83c4,	// (0x000360ea) cell_cmail_l_pane_g1_ParamLimits

0x83c4,	// (0x000360ea) cell_cmail_l_pane_g1

0x83d0,	// (0x000360f6) cell_cmail_l_pane_t1_ParamLimits

0x83d0,	// (0x000360f6) cell_cmail_l_pane_t1

0xe374,	// (0x0003c09a) cell_cmail_l_pane_t2_ParamLimits

0xe374,	// (0x0003c09a) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003d9ee) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003d9ee) cell_cmail_l_pane_t

0xa6d7,	// (0x000383fd) grid_highlight_pane_cp018_ParamLimits

0xa6d7,	// (0x000383fd) grid_highlight_pane_cp018

0x01cc,	// (0x0002def2) main2_pane_ParamLimits

0x01cc,	// (0x0002def2) main2_pane

0xa322,	// (0x00038048) popup_sp_fs_action_menu_bg_pane_g1

0xa32a,	// (0x00038050) popup_sp_fs_action_menu_bg_pane_g2

0xa332,	// (0x00038058) popup_sp_fs_action_menu_bg_pane_g3

0xa33a,	// (0x00038060) popup_sp_fs_action_menu_bg_pane_g4

0xa342,	// (0x00038068) popup_sp_fs_action_menu_bg_pane_g5

0xa34a,	// (0x00038070) popup_sp_fs_action_menu_bg_pane_g6

0xa352,	// (0x00038078) popup_sp_fs_action_menu_bg_pane_g7

0xa35a,	// (0x00038080) popup_sp_fs_action_menu_bg_pane_g8

0xa362,	// (0x00038088) popup_sp_fs_action_menu_bg_pane_g9

0xa36a,	// (0x00038090) popup_sp_fs_action_menu_bg_pane_g10

0xa36a,	// (0x00038090) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003ceb0) popup_sp_fs_action_menu_bg_pane_g

0x261c,	// (0x00030342) list_medium_line_x2_t3_g3_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t3_g3_g1

0x2628,	// (0x0003034e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_t3_g3_g2

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003cf5e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003cf5e) list_medium_line_x2_t3_g3_g

0x2640,	// (0x00030366) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2640,	// (0x00030366) list_medium_line_x2_t3_g3_t1

0x2655,	// (0x0003037b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2655,	// (0x0003037b) list_medium_line_x2_t3_g3_t2

0x2669,	// (0x0003038f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003cf65) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003cf65) list_medium_line_x2_t3_g3_t

0x261c,	// (0x00030342) list_medium_line_x2_t3_g2_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t3_g2_g1

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003cf6c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003cf6c) list_medium_line_x2_t3_g2_g

0x267e,	// (0x000303a4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x267e,	// (0x000303a4) list_medium_line_x2_t3_g2_t1

0x2694,	// (0x000303ba) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2694,	// (0x000303ba) list_medium_line_x2_t3_g2_t2

0x26a6,	// (0x000303cc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x26a6,	// (0x000303cc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003cf71) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003cf71) list_medium_line_x2_t3_g2_t

0x261c,	// (0x00030342) list_medium_line_x2_t4_g4_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t4_g4_g1

0x26c3,	// (0x000303e9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x26c3,	// (0x000303e9) list_medium_line_x2_t4_g4_g2

0x2628,	// (0x0003034e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_t4_g4_g3

0x26cf,	// (0x000303f5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x26cf,	// (0x000303f5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003cf78) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003cf78) list_medium_line_x2_t4_g4_g

0x26db,	// (0x00030401) list_medium_line_x2_t4_g4_t1_ParamLimits

0x26db,	// (0x00030401) list_medium_line_x2_t4_g4_t1

0x26f2,	// (0x00030418) list_medium_line_x2_t4_g4_t2_ParamLimits

0x26f2,	// (0x00030418) list_medium_line_x2_t4_g4_t2

0x2707,	// (0x0003042d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2707,	// (0x0003042d) list_medium_line_x2_t4_g4_t3

0x2719,	// (0x0003043f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2719,	// (0x0003043f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003cf81) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003cf81) list_medium_line_x2_t4_g4_t

0x261c,	// (0x00030342) list_medium_line_x2_t2_g4_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t2_g4_g1

0x26c3,	// (0x000303e9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x26c3,	// (0x000303e9) list_medium_line_x2_t2_g4_g2

0x2628,	// (0x0003034e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_t2_g4_g3

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe8) list_medium_line_x2_t2_g4_g

0x36cf,	// (0x000313f5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x36cf,	// (0x000313f5) list_medium_line_x2_t2_g4_t1

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003cff1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003cff1) list_medium_line_x2_t2_g4_t

0x261c,	// (0x00030342) list_medium_line_x2_t2_g3_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t2_g3_g1

0x2628,	// (0x0003034e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_t2_g3_g2

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003cf5e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003cf5e) list_medium_line_x2_t2_g3_g

0x36e4,	// (0x0003140a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x36e4,	// (0x0003140a) list_medium_line_x2_t2_g3_t1

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003cff6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003cff6) list_medium_line_x2_t2_g3_t

0x382f,	// (0x00031555) main_sp_fs_list_pane_ParamLimits

0x382f,	// (0x00031555) main_sp_fs_list_pane

0xcc7c,	// (0x0003a9a2) sp_fs_scroll_pane_ParamLimits

0xcc7c,	// (0x0003a9a2) sp_fs_scroll_pane

0x383b,	// (0x00031561) list_medium_line_x2_t3_t1

0x384b,	// (0x00031571) list_medium_line_x2_t3_t2

0x3859,	// (0x0003157f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003d041) list_medium_line_x2_t3_t

0x3867,	// (0x0003158d) list_medium_line_x3_t4_t1

0x3877,	// (0x0003159d) list_medium_line_x3_t4_t2

0x3885,	// (0x000315ab) list_medium_line_x3_t4_t3

0x3859,	// (0x0003157f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003d048) list_medium_line_x3_t4_t

0x3893,	// (0x000315b9) list_medium_line_x4_t5_t1

0x38a3,	// (0x000315c9) list_medium_line_x4_t5_t2

0x3885,	// (0x000315ab) list_medium_line_x4_t5_t3

0x38b1,	// (0x000315d7) list_medium_line_x4_t5_t4

0x3859,	// (0x0003157f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003d051) list_medium_line_x4_t5_t

0x261c,	// (0x00030342) list_medium_line_t4_g4_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_t4_g4_g1

0x38bf,	// (0x000315e5) list_medium_line_t4_g4_g2_ParamLimits

0x38bf,	// (0x000315e5) list_medium_line_t4_g4_g2

0x38cb,	// (0x000315f1) list_medium_line_t4_g4_g3_ParamLimits

0x38cb,	// (0x000315f1) list_medium_line_t4_g4_g3

0x2634,	// (0x0003035a) list_medium_line_t4_g4_g4_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003d05c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003d05c) list_medium_line_t4_g4_g

0x38d7,	// (0x000315fd) list_medium_line_t4_g4_t1_ParamLimits

0x38d7,	// (0x000315fd) list_medium_line_t4_g4_t1

0x38ec,	// (0x00031612) list_medium_line_t4_g4_t2_ParamLimits

0x38ec,	// (0x00031612) list_medium_line_t4_g4_t2

0x3901,	// (0x00031627) list_medium_line_t4_g4_t3_ParamLimits

0x3901,	// (0x00031627) list_medium_line_t4_g4_t3

0x2669,	// (0x0003038f) list_medium_line_t4_g4_t4_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003d065) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003d065) list_medium_line_t4_g4_t

0x3a3c,	// (0x00031762) chi_dic_find_pane_g1

0x0637,	// (0x0002e35d) main_tport_pane

0x6de8,	// (0x00034b0e) list_medium_line_plain_t1

0x6e2a,	// (0x00034b50) list_medium_line_t2_g2_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t2_g2_g1

0x6e36,	// (0x00034b5c) list_medium_line_t2_g2_g2_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003d726) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003d726) list_medium_line_t2_g2_g

0x6e42,	// (0x00034b68) list_medium_line_t2_g2_t1_ParamLimits

0x6e42,	// (0x00034b68) list_medium_line_t2_g2_t1

0x6e5c,	// (0x00034b82) list_medium_line_t2_g2_t2_ParamLimits

0x6e5c,	// (0x00034b82) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003d72b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003d72b) list_medium_line_t2_g2_t

0xd81c,	// (0x0003b542) aid_sp_fs_list_icon_a_sm

0xd824,	// (0x0003b54a) aid_sp_fs_list_icon_d

0xd82c,	// (0x0003b552) aid_sp_fs_text_primary

0xd835,	// (0x0003b55b) aid_sp_fs_text_secondary

0x7413,	// (0x00035139) list_medium_line

0x7413,	// (0x00035139) list_medium_line_g2

0x7413,	// (0x00035139) list_medium_line_g3

0x7413,	// (0x00035139) list_medium_line_plain

0x7413,	// (0x00035139) list_medium_line_plain_t2

0x7413,	// (0x00035139) list_medium_line_plain_t3

0x7413,	// (0x00035139) list_medium_line_right_icon

0x7413,	// (0x00035139) list_medium_line_right_iconx2

0x7413,	// (0x00035139) list_medium_line_t2

0x7413,	// (0x00035139) list_medium_line_t2_g2

0x7413,	// (0x00035139) list_medium_line_t2_g3

0x7413,	// (0x00035139) list_medium_line_t2_right_icon

0x7413,	// (0x00035139) list_medium_line_t2_right_iconx2

0x7413,	// (0x00035139) list_medium_line_t3

0x7413,	// (0x00035139) list_medium_line_t3_g2

0x7413,	// (0x00035139) list_medium_line_t3_g3

0x7413,	// (0x00035139) list_medium_line_t3_right_iconx2

0x741c,	// (0x00035142) list_medium_line_t4_g4

0x7425,	// (0x0003514b) list_medium_line_x2

0x7425,	// (0x0003514b) list_medium_line_x2_t2_g2

0x7425,	// (0x0003514b) list_medium_line_x2_t2_g3

0x7425,	// (0x0003514b) list_medium_line_x2_t2_g4

0x7425,	// (0x0003514b) list_medium_line_x2_t3

0x7425,	// (0x0003514b) list_medium_line_x2_t3_g2

0x7425,	// (0x0003514b) list_medium_line_x2_t3_g3

0x7425,	// (0x0003514b) list_medium_line_x2_t3_g4

0x7425,	// (0x0003514b) list_medium_line_x2_t4_g2

0x7425,	// (0x0003514b) list_medium_line_x2_t4_g4

0x742e,	// (0x00035154) list_medium_line_x3

0x742e,	// (0x00035154) list_medium_line_x3_t4

0x742e,	// (0x00035154) list_medium_line_x3_t4_g4

0x741c,	// (0x00035142) list_medium_line_x4_t4

0x741c,	// (0x00035142) list_medium_line_x4_t4_g7

0x741c,	// (0x00035142) list_medium_line_x4_t5

0x7437,	// (0x0003515d) list_single_fs_dyc_pane_ParamLimits

0x7437,	// (0x0003515d) list_single_fs_dyc_pane

0x261c,	// (0x00030342) list_medium_line_x4_t4_g7_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x4_t4_g7_g1

0x7b5f,	// (0x00035885) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b5f,	// (0x00035885) list_medium_line_x4_t4_g7_g2

0x7b6b,	// (0x00035891) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b6b,	// (0x00035891) list_medium_line_x4_t4_g7_g3

0x7b7a,	// (0x000358a0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b7a,	// (0x000358a0) list_medium_line_x4_t4_g7_g4

0x7b86,	// (0x000358ac) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b86,	// (0x000358ac) list_medium_line_x4_t4_g7_g5

0x7b95,	// (0x000358bb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b95,	// (0x000358bb) list_medium_line_x4_t4_g7_g6

0x7ba4,	// (0x000358ca) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ba4,	// (0x000358ca) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003d8f6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003d8f6) list_medium_line_x4_t4_g7_g

0x7bb0,	// (0x000358d6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bb0,	// (0x000358d6) list_medium_line_x4_t4_g7_t1

0x7bc5,	// (0x000358eb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7bc5,	// (0x000358eb) list_medium_line_x4_t4_g7_t2

0x7bda,	// (0x00035900) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7bda,	// (0x00035900) list_medium_line_x4_t4_g7_t3

0x7bef,	// (0x00035915) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7bef,	// (0x00035915) list_medium_line_x4_t4_g7_t4

0x7c01,	// (0x00035927) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c01,	// (0x00035927) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003d905) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003d905) list_medium_line_x4_t4_g7_t

0x7c13,	// (0x00035939) list_single_dyc_row_pane_ParamLimits

0x7c13,	// (0x00035939) list_single_dyc_row_pane

0x82ea,	// (0x00036010) call5_gesture_pane_ParamLimits

0x82ea,	// (0x00036010) call5_gesture_pane

0x8340,	// (0x00036066) call5_windows_pane_ParamLimits

0x8340,	// (0x00036066) call5_windows_pane

0x83e6,	// (0x0003610c) call5_swipe_1_pane_cp_ParamLimits

0x83e6,	// (0x0003610c) call5_swipe_1_pane_cp

0x83f2,	// (0x00036118) call5_swipe_2_pane_cp_ParamLimits

0x83f2,	// (0x00036118) call5_swipe_2_pane_cp

0xa44e,	// (0x00038174) call5_image_pane_cp

0x83fe,	// (0x00036124) popup_call5_audio_first_window_cp_ParamLimits

0x83fe,	// (0x00036124) popup_call5_audio_first_window_cp

0xe346,	// (0x0003c06c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe346,	// (0x0003c06c) call5_swipe_1_pane_g1_cp

0xe386,	// (0x0003c0ac) call5_swipe_1_pane_g2_cp

0xe35f,	// (0x0003c085) call5_swipe_1_pane_t1_cp_ParamLimits

0xe35f,	// (0x0003c085) call5_swipe_1_pane_t1_cp

0xe346,	// (0x0003c06c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe346,	// (0x0003c06c) call5_swipe_2_pane_g1_cp

0xe38e,	// (0x0003c0b4) call5_swipe_2_pane_g2_cp

0xe396,	// (0x0003c0bc) call5_swipe_2_pane_t1_cp_ParamLimits

0xe396,	// (0x0003c0bc) call5_swipe_2_pane_t1_cp

0xa6d7,	// (0x000383fd) main_sp_fs_email_pane

0xe3ab,	// (0x0003c0d1) main_sp_fs_listscroll_pane_te

0x840c,	// (0x00036132) popup_sp_fs_action_menu_pane_ParamLimits

0x840c,	// (0x00036132) popup_sp_fs_action_menu_pane

0xc7e9,	// (0x0003a50f) bg_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0003c0da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bd,	// (0x0003c0e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3c6,	// (0x0003c0ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7e9,	// (0x0003a50f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003d9f3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ce,	// (0x0003a2f4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ce,	// (0x0003a2f4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3cf,	// (0x0003c0f5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3cf,	// (0x0003c0f5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3db,	// (0x0003c101) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3db,	// (0x0003c101) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003d9fc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003d9fc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3e7,	// (0x0003c10d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3e7,	// (0x0003c10d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8450,	// (0x00036176) list_medium_line_t2_right_icon_g1

0x8458,	// (0x0003617e) list_medium_line_t2_right_icon_t1

0x8468,	// (0x0003618e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003da01) list_medium_line_t2_right_icon_t

0xc3e1,	// (0x0003a107) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3e1,	// (0x0003a107) bg_sp_fs_ctrlbar_pane

0x84c2,	// (0x000361e8) main_sp_fs_ctrlbar_button_pane_cp01

0x84cc,	// (0x000361f2) main_sp_fs_ctrlbar_ddmenu_pane

0xe439,	// (0x0003c15f) main_sp_fs_ctrlbar_pane_g1

0xe445,	// (0x0003c16b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003da06) main_sp_fs_ctrlbar_pane_g

0xe451,	// (0x0003c177) main_sp_fs_ctrlbar_pane_t1

0x84d6,	// (0x000361fc) main_sp_fs_ctrlbar_pane

0x84fa,	// (0x00036220) main_sp_fs_listscroll_pane_te_cp01

0x851a,	// (0x00036240) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x851a,	// (0x00036240) popup_sp_fs_action_menu_pane_cp01

0xa6d7,	// (0x000383fd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6d7,	// (0x000383fd) bg_sp_fs_highlight_list_pane_cp01

0xe481,	// (0x0003c1a7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe481,	// (0x0003c1a7) sp_fs_action_menu_list_gene_pane_g1

0xe490,	// (0x0003c1b6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe490,	// (0x0003c1b6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003da10) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003da10) sp_fs_action_menu_list_gene_pane_g

0xe49d,	// (0x0003c1c3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe49d,	// (0x0003c1c3) sp_fs_action_menu_list_gene_pane_t1

0xe4b5,	// (0x0003c1db) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b5,	// (0x0003c1db) sp_fs_action_menu_list_gene_pane

0xe4d6,	// (0x0003c1fc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d6,	// (0x0003c1fc) popup_sp_fs_action_menu_bg_pane

0xe4e4,	// (0x0003c20a) sp_fs_action_menu_list_pane_ParamLimits

0xe4e4,	// (0x0003c20a) sp_fs_action_menu_list_pane

0x854a,	// (0x00036270) sp_fs_scroll_pane_cp01_ParamLimits

0x854a,	// (0x00036270) sp_fs_scroll_pane_cp01

0x8570,	// (0x00036296) list_medium_line_plain_t2_t1

0x8580,	// (0x000362a6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003da15) list_medium_line_plain_t2_t

0x8590,	// (0x000362b6) list_medium_line_plain_t3_t1

0x85a0,	// (0x000362c6) list_medium_line_plain_t3_t2

0x85ae,	// (0x000362d4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003da1a) list_medium_line_plain_t3_t

0x261c,	// (0x00030342) list_medium_line_x2_t2_g2_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t2_g2_g1

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003cf6c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003cf6c) list_medium_line_x2_t2_g2_g

0x38d7,	// (0x000315fd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x38d7,	// (0x000315fd) list_medium_line_x2_t2_g2_t1

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003da21) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003da21) list_medium_line_x2_t2_g2_t

0x261c,	// (0x00030342) list_medium_line_x2_t4_g2_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t4_g2_g1

0x2634,	// (0x0003035a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003cf6c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003cf6c) list_medium_line_x2_t4_g2_g

0x85bc,	// (0x000362e2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85bc,	// (0x000362e2) list_medium_line_x2_t4_g2_t1

0x85d6,	// (0x000362fc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85d6,	// (0x000362fc) list_medium_line_x2_t4_g2_t2

0x85ec,	// (0x00036312) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85ec,	// (0x00036312) list_medium_line_x2_t4_g2_t3

0x2669,	// (0x0003038f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003da26) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003da26) list_medium_line_x2_t4_g2_t

0x8601,	// (0x00036327) list_medium_line_t3_right_iconx2_g1

0x8450,	// (0x00036176) list_medium_line_t3_right_iconx2_g2

0x8609,	// (0x0003632f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003da2f) list_medium_line_t3_right_iconx2_g

0x8613,	// (0x00036339) list_medium_line_t3_right_iconx2_t1

0x8623,	// (0x00036349) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003da36) list_medium_line_t3_right_iconx2_t

0x261c,	// (0x00030342) list_medium_line_x3_t4_g4_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x3_t4_g4_g1

0x2628,	// (0x0003034e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x3_t4_g4_g2

0x38bf,	// (0x000315e5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x38bf,	// (0x000315e5) list_medium_line_x3_t4_g4_g3

0x8631,	// (0x00036357) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8631,	// (0x00036357) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003da3b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003da3b) list_medium_line_x3_t4_g4_g

0x863d,	// (0x00036363) list_medium_line_x3_t4_g4_t1_ParamLimits

0x863d,	// (0x00036363) list_medium_line_x3_t4_g4_t1

0x8654,	// (0x0003637a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8654,	// (0x0003637a) list_medium_line_x3_t4_g4_t2

0x38ec,	// (0x00031612) list_medium_line_x3_t4_g4_t3_ParamLimits

0x38ec,	// (0x00031612) list_medium_line_x3_t4_g4_t3

0x866f,	// (0x00036395) list_medium_line_x3_t4_g4_t4_ParamLimits

0x866f,	// (0x00036395) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003da44) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003da44) list_medium_line_x3_t4_g4_t

0x868c,	// (0x000363b2) list_single_dyc_row_text_pane_t1_ParamLimits

0x868c,	// (0x000363b2) list_single_dyc_row_text_pane_t1

0x86d5,	// (0x000363fb) list_single_dyc_row_text_pane_t2_ParamLimits

0x86d5,	// (0x000363fb) list_single_dyc_row_text_pane_t2

0xe518,	// (0x0003c23e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe518,	// (0x0003c23e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003da4d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003da4d) list_single_dyc_row_text_pane_t

0xe53c,	// (0x0003c262) list_single_dyc_row_pane_g1_ParamLimits

0xe53c,	// (0x0003c262) list_single_dyc_row_pane_g1

0xe548,	// (0x0003c26e) list_single_dyc_row_pane_g2_ParamLimits

0xe548,	// (0x0003c26e) list_single_dyc_row_pane_g2

0xe554,	// (0x0003c27a) list_single_dyc_row_pane_g3_ParamLimits

0xe554,	// (0x0003c27a) list_single_dyc_row_pane_g3

0xe560,	// (0x0003c286) list_single_dyc_row_pane_g4_ParamLimits

0xe560,	// (0x0003c286) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003da5a) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003da5a) list_single_dyc_row_pane_g

0xe56c,	// (0x0003c292) list_single_dyc_row_text_pane_ParamLimits

0xe56c,	// (0x0003c292) list_single_dyc_row_text_pane

0x9b4c,	// (0x00037872) bg_sp_fs_scroll_pane

0xe58b,	// (0x0003c2b1) thumb_sp_fs_scroll_pane

0x6e2a,	// (0x00034b50) list_medium_line_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_g1

0x880a,	// (0x00036530) list_medium_line_t1_ParamLimits

0x880a,	// (0x00036530) list_medium_line_t1

0x261c,	// (0x00030342) list_medium_line_x2_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_g1

0x2628,	// (0x0003034e) list_medium_line_x2_g2_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003da63) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003da63) list_medium_line_x2_g

0xe594,	// (0x0003c2ba) list_medium_line_x2_t1_ParamLimits

0xe594,	// (0x0003c2ba) list_medium_line_x2_t1

0x261c,	// (0x00030342) list_medium_line_x3_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x3_g1

0x2628,	// (0x0003034e) list_medium_line_x3_g2_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003da63) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003da63) list_medium_line_x3_g

0xe594,	// (0x0003c2ba) list_medium_line_x3_t1_ParamLimits

0xe594,	// (0x0003c2ba) list_medium_line_x3_t1

0xe5aa,	// (0x0003c2d0) thumb_sp_fs_scroll_pane_g1

0xe5b3,	// (0x0003c2d9) thumb_sp_fs_scroll_pane_g2

0xe5bc,	// (0x0003c2e2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da68) thumb_sp_fs_scroll_pane_g

0xe5aa,	// (0x0003c2d0) bg_sp_fs_scroll_pane_g1

0xe5b3,	// (0x0003c2d9) bg_sp_fs_scroll_pane_g2

0xe5bc,	// (0x0003c2e2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da68) bg_sp_fs_scroll_pane_g

0x261c,	// (0x00030342) list_medium_line_x2_t3_g4_g1_ParamLimits

0x261c,	// (0x00030342) list_medium_line_x2_t3_g4_g1

0x26c3,	// (0x000303e9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x26c3,	// (0x000303e9) list_medium_line_x2_t3_g4_g2

0x2628,	// (0x0003034e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2628,	// (0x0003034e) list_medium_line_x2_t3_g4_g3

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2634,	// (0x0003035a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe8) list_medium_line_x2_t3_g4_g

0x881f,	// (0x00036545) list_medium_line_x2_t3_g4_t1_ParamLimits

0x881f,	// (0x00036545) list_medium_line_x2_t3_g4_t1

0x8839,	// (0x0003655f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8839,	// (0x0003655f) list_medium_line_x2_t3_g4_t2

0x2669,	// (0x0003038f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2669,	// (0x0003038f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003da6f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003da6f) list_medium_line_x2_t3_g4_t

0x6e2a,	// (0x00034b50) list_medium_line_g2_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_g2_g1

0x6e36,	// (0x00034b5c) list_medium_line_g2_g2_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003d726) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003d726) list_medium_line_g2_g

0x8852,	// (0x00036578) list_medium_line_g2_t1_ParamLimits

0x8852,	// (0x00036578) list_medium_line_g2_t1

0x6e2a,	// (0x00034b50) list_medium_line_t3_g2_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t3_g2_g1

0x6e36,	// (0x00034b5c) list_medium_line_t3_g2_g2_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003d726) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003d726) list_medium_line_t3_g2_g

0x8867,	// (0x0003658d) list_medium_line_t3_g2_t1_ParamLimits

0x8867,	// (0x0003658d) list_medium_line_t3_g2_t1

0x8881,	// (0x000365a7) list_medium_line_t3_g2_t2_ParamLimits

0x8881,	// (0x000365a7) list_medium_line_t3_g2_t2

0x8897,	// (0x000365bd) list_medium_line_t3_g2_t3_ParamLimits

0x8897,	// (0x000365bd) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003da76) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003da76) list_medium_line_t3_g2_t

0x8450,	// (0x00036176) list_medium_line_right_icon_g1

0x88ae,	// (0x000365d4) list_medium_line_right_icon_t1

0x6e2a,	// (0x00034b50) list_medium_line_t2_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t2_g1

0x88bc,	// (0x000365e2) list_medium_line_t2_t1_ParamLimits

0x88bc,	// (0x000365e2) list_medium_line_t2_t1

0x88d6,	// (0x000365fc) list_medium_line_t2_t2_ParamLimits

0x88d6,	// (0x000365fc) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003da7d) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003da7d) list_medium_line_t2_t

0x6e2a,	// (0x00034b50) list_medium_line_t3_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t3_g1

0x88ef,	// (0x00036615) list_medium_line_t3_t1_ParamLimits

0x88ef,	// (0x00036615) list_medium_line_t3_t1

0x8909,	// (0x0003662f) list_medium_line_t3_t2_ParamLimits

0x8909,	// (0x0003662f) list_medium_line_t3_t2

0x891f,	// (0x00036645) list_medium_line_t3_t3_ParamLimits

0x891f,	// (0x00036645) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003da82) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003da82) list_medium_line_t3_t

0x6e2a,	// (0x00034b50) list_medium_line_g3_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_g3_g1

0x8934,	// (0x0003665a) list_medium_line_g3_g2_ParamLimits

0x8934,	// (0x0003665a) list_medium_line_g3_g2

0x6e36,	// (0x00034b5c) list_medium_line_g3_g3_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003da89) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003da89) list_medium_line_g3_g

0x8940,	// (0x00036666) list_medium_line_g3_t1_ParamLimits

0x8940,	// (0x00036666) list_medium_line_g3_t1

0x6e2a,	// (0x00034b50) list_medium_line_t2_g3_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t2_g3_g1

0x8934,	// (0x0003665a) list_medium_line_t2_g3_g2_ParamLimits

0x8934,	// (0x0003665a) list_medium_line_t2_g3_g2

0x6e36,	// (0x00034b5c) list_medium_line_t2_g3_g3_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003da89) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003da89) list_medium_line_t2_g3_g

0x8955,	// (0x0003667b) list_medium_line_t2_g3_t1_ParamLimits

0x8955,	// (0x0003667b) list_medium_line_t2_g3_t1

0x896f,	// (0x00036695) list_medium_line_t2_g3_t2_ParamLimits

0x896f,	// (0x00036695) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003da90) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003da90) list_medium_line_t2_g3_t

0x6e2a,	// (0x00034b50) list_medium_line_t3_g3_g1_ParamLimits

0x6e2a,	// (0x00034b50) list_medium_line_t3_g3_g1

0x8934,	// (0x0003665a) list_medium_line_t3_g3_g2_ParamLimits

0x8934,	// (0x0003665a) list_medium_line_t3_g3_g2

0x6e36,	// (0x00034b5c) list_medium_line_t3_g3_g3_ParamLimits

0x6e36,	// (0x00034b5c) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003da89) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003da89) list_medium_line_t3_g3_g

0x898d,	// (0x000366b3) list_medium_line_t3_g3_t1_ParamLimits

0x898d,	// (0x000366b3) list_medium_line_t3_g3_t1

0x89a6,	// (0x000366cc) list_medium_line_t3_g3_t2_ParamLimits

0x89a6,	// (0x000366cc) list_medium_line_t3_g3_t2

0x89bc,	// (0x000366e2) list_medium_line_t3_g3_t3_ParamLimits

0x89bc,	// (0x000366e2) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003da95) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003da95) list_medium_line_t3_g3_t

0x8601,	// (0x00036327) list_medium_line_right_iconx2_g1

0x8450,	// (0x00036176) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da9c) list_medium_line_right_iconx2_g

0x89d6,	// (0x000366fc) list_medium_line_right_iconx2_t1

0x8601,	// (0x00036327) list_medium_line_t2_right_iconx2_g1

0x8450,	// (0x00036176) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da9c) list_medium_line_t2_right_iconx2_g

0x89e4,	// (0x0003670a) list_medium_line_t2_right_iconx2_t1

0x89f4,	// (0x0003671a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003daa1) list_medium_line_t2_right_iconx2_t

0x8a06,	// (0x0003672c) list_medium_line_x4_t4_t1

0x8a14,	// (0x0003673a) list_medium_line_x4_t4_t2

0x8a24,	// (0x0003674a) list_medium_line_x4_t4_t3

0x8a34,	// (0x0003675a) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003daa6) list_medium_line_x4_t4_t

0x8a87,	// (0x000367ad) tport_appsw_pane_ParamLimits

0x8a87,	// (0x000367ad) tport_appsw_pane

0x8a9f,	// (0x000367c5) tport_contact_pane_ParamLimits

0x8a9f,	// (0x000367c5) tport_contact_pane

0x8ab7,	// (0x000367dd) tport_listscroll_pane_ParamLimits

0x8ab7,	// (0x000367dd) tport_listscroll_pane

0x8ad1,	// (0x000367f7) cell_tport_appsw_pane_ParamLimits

0x8ad1,	// (0x000367f7) cell_tport_appsw_pane

0xd26b,	// (0x0003af91) tport_appsw_pane_g1_ParamLimits

0xd26b,	// (0x0003af91) tport_appsw_pane_g1

0xe5c5,	// (0x0003c2eb) tport_contact_pane_g1

0xde4c,	// (0x0003bb72) tport_contact_pane_t1

0xe5ce,	// (0x0003c2f4) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003daaf) tport_contact_pane_t

0xe5dc,	// (0x0003c302) list_tport_pane

0xe5e5,	// (0x0003c30b) scroll_pane_cp_030

0x8b19,	// (0x0003683f) cell_tport_appsw_pane_g1

0x8b29,	// (0x0003684f) cell_tport_appsw_pane_t1

0x8b37,	// (0x0003685d) grid_highlight_pane_cp019

0x8b3f,	// (0x00036865) list_tport_double_graphic_pane_ParamLimits

0x8b3f,	// (0x00036865) list_tport_double_graphic_pane

0xa6d7,	// (0x000383fd) list_highlight_pane_cp023_ParamLimits

0xa6d7,	// (0x000383fd) list_highlight_pane_cp023

0x8b4c,	// (0x00036872) list_tport_double_graphic_pane_g1_ParamLimits

0x8b4c,	// (0x00036872) list_tport_double_graphic_pane_g1

0x8b59,	// (0x0003687f) list_tport_double_graphic_pane_t1_ParamLimits

0x8b59,	// (0x0003687f) list_tport_double_graphic_pane_t1

0x8b6e,	// (0x00036894) list_tport_double_graphic_pane_t2_ParamLimits

0x8b6e,	// (0x00036894) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003dabb) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003dabb) list_tport_double_graphic_pane_t

0x9b4c,	// (0x00037872) main_cale_note_pane

0x153f,	// (0x0002f265) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x153f,	// (0x0002f265) cell_vitu2_function_top_wide_pane_cp01

0x7f76,	// (0x00035c9c) wait_bar_pane_cp05_ParamLimits

0xa6d7,	// (0x000383fd) listscroll_cmail_pane

0xe5ee,	// (0x0003c314) list_cmail_pane

0xd4cb,	// (0x0003b1f1) list_cmail_body_pane

0x8b80,	// (0x000368a6) list_single_cmail_header_caption_pane

0x8b96,	// (0x000368bc) list_single_cmail_header_detail_pane_ParamLimits

0x8b96,	// (0x000368bc) list_single_cmail_header_detail_pane

0xe5fe,	// (0x0003c324) list_single_cmail_header_caption_pane_t1

0x8bbf,	// (0x000368e5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bbf,	// (0x000368e5) list_single_cmail_header_detail_pane_g1

0xe615,	// (0x0003c33b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe615,	// (0x0003c33b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003dac0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003dac0) list_single_cmail_header_detail_pane_g

0xe62e,	// (0x0003c354) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe62e,	// (0x0003c354) list_single_cmail_header_detail_pane_t1

0xe68e,	// (0x0003c3b4) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe68e,	// (0x0003c3b4) list_single_cmail_header_editor_pane_bg

0xdfed,	// (0x0003bd13) list_cmail_body_pane_g1

0xe6a5,	// (0x0003c3cb) list_cmail_body_pane_t1

0xd2a8,	// (0x0003afce) list_single_cmail_header_editor_pane_bg_g1

0xa6a7,	// (0x000383cd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2b8,	// (0x0003afde) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2b0,	// (0x0003afd6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4fc,	// (0x0003b222) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2d8,	// (0x0003affe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2c8,	// (0x0003afee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2d0,	// (0x0003aff6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa687,	// (0x000383ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bd7,	// (0x000368fd) calenote_gesture_pane_ParamLimits

0x8bd7,	// (0x000368fd) calenote_gesture_pane

0x8bf7,	// (0x0003691d) calenote_window_pane_ParamLimits

0x8bf7,	// (0x0003691d) calenote_window_pane

0xe6b3,	// (0x0003c3d9) popup_note_window_cp01

0x8c13,	// (0x00036939) calenote_swipe_1_pane_ParamLimits

0x8c13,	// (0x00036939) calenote_swipe_1_pane

0x83f2,	// (0x00036118) calenote_swipe_2_pane_ParamLimits

0x83f2,	// (0x00036118) calenote_swipe_2_pane

0xe346,	// (0x0003c06c) calenote_swipe_1_pane_g1_ParamLimits

0xe346,	// (0x0003c06c) calenote_swipe_1_pane_g1

0xe353,	// (0x0003c079) calenote_swipe_1_pane_g2_ParamLimits

0xe353,	// (0x0003c079) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e9) calenote_swipe_1_pane_g

0xe6c5,	// (0x0003c3eb) calenote_swipe_1_pane_t1_ParamLimits

0xe6c5,	// (0x0003c3eb) calenote_swipe_1_pane_t1

0xe346,	// (0x0003c06c) calenote_swipe_2_pane_g1_ParamLimits

0xe346,	// (0x0003c06c) calenote_swipe_2_pane_g1

0xe6e4,	// (0x0003c40a) calenote_swipe_2_pane_g2_ParamLimits

0xe6e4,	// (0x0003c40a) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003dacc) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003dacc) calenote_swipe_2_pane_g

0xe6f0,	// (0x0003c416) calenote_swipe_2_pane_t1_ParamLimits

0xe6f0,	// (0x0003c416) calenote_swipe_2_pane_t1

0x9b4c,	// (0x00037872) main_mup_navstr_pane

0x57c3,	// (0x000334e9) main_mup3_pane_t7_ParamLimits

0x57c3,	// (0x000334e9) main_mup3_pane_t7

0x61e6,	// (0x00033f0c) main_mp4_pane_g6_ParamLimits

0x61e6,	// (0x00033f0c) main_mp4_pane_g6

0x642d,	// (0x00034153) main_image3_pane_t4_ParamLimits

0x642d,	// (0x00034153) main_image3_pane_t4

0x8c28,	// (0x0003694e) popup_navstr_preview_pane_ParamLimits

0x8c28,	// (0x0003694e) popup_navstr_preview_pane

0x8c3c,	// (0x00036962) scroll_navstr_pane_ParamLimits

0x8c3c,	// (0x00036962) scroll_navstr_pane

0x9b4c,	// (0x00037872) bg_popup_preview_window_pane_cp04

0xe717,	// (0x0003c43d) popup_navstr_preview_pane_t1

0x8c50,	// (0x00036976) scroll_navstr_pane_g1_ParamLimits

0x8c50,	// (0x00036976) scroll_navstr_pane_g1

0x8c64,	// (0x0003698a) scroll_navstr_pane_t1_ParamLimits

0x8c64,	// (0x0003698a) scroll_navstr_pane_t1

0xe6bc,	// (0x0003c3e2) bg_button_pane_cp014

0xe6bc,	// (0x0003c3e2) bg_button_pane_cp030

0x8290,	// (0x00035fb6) list_double_fisheye_pane_g4_ParamLimits

0x8290,	// (0x00035fb6) list_double_fisheye_pane_g4

0x829c,	// (0x00035fc2) list_double_fisheye_pane_g5_ParamLimits

0x829c,	// (0x00035fc2) list_double_fisheye_pane_g5

0xcc7c,	// (0x0003a9a2) sp_fs_scroll_pane_cp03

0xe439,	// (0x0003c15f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe445,	// (0x0003c16b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003da06) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe451,	// (0x0003c177) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5f6,	// (0x0003c31c) sp_fs_scroll_pane_cp02

0xa38d,	// (0x000380b3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa38d,	// (0x000380b3) popup_sp_fs_calendar_preview_list_single_pane

0x9b4c,	// (0x00037872) main_cam6_pano_pane

0x193d,	// (0x0002f663) main_mup3_pane_ParamLimits

0x9b4c,	// (0x00037872) main_phacti_pane

0x7e49,	// (0x00035b6f) bg_button_pane_cp11

0x7e63,	// (0x00035b89) main_mobtv_info_pane_g2_ParamLimits

0x7e63,	// (0x00035b89) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003d966) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003d966) main_mobtv_info_pane_g

0x8040,	// (0x00035d66) sc_clock_pane_t5_ParamLimits

0x8040,	// (0x00035d66) sc_clock_pane_t5

0x80fb,	// (0x00035e21) main_radioblah_pane_g1_ParamLimits

0xe289,	// (0x0003bfaf) main_radioblah_pane_t3_ParamLimits

0xe289,	// (0x0003bfaf) main_radioblah_pane_t3

0xe2a1,	// (0x0003bfc7) main_radioblah_pane_t4_ParamLimits

0xe2a1,	// (0x0003bfc7) main_radioblah_pane_t4

0x8123,	// (0x00035e49) main_radioblah_text_pane_ParamLimits

0x8123,	// (0x00035e49) main_radioblah_text_pane

0x8135,	// (0x00035e5b) main_radioblah_info_pane_g1_ParamLimits

0x81ce,	// (0x00035ef4) main_radioblah_info_pane_t4_ParamLimits

0x81ce,	// (0x00035ef4) main_radioblah_info_pane_t4

0xa6d7,	// (0x000383fd) main_sp_fs_calendar_pane

0x8c7b,	// (0x000369a1) main_phacti_pane_g1

0x8c83,	// (0x000369a9) phacti_note_pane_ParamLimits

0x8c83,	// (0x000369a9) phacti_note_pane

0xe72e,	// (0x0003c454) phacti_term_pane_ParamLimits

0xe72e,	// (0x0003c454) phacti_term_pane

0xe743,	// (0x0003c469) phacti_note_pane_t1_ParamLimits

0xe743,	// (0x0003c469) phacti_note_pane_t1

0xe75a,	// (0x0003c480) phacti_term_pane_g1

0xe762,	// (0x0003c488) phacti_term_pane_t1_ParamLimits

0xe762,	// (0x0003c488) phacti_term_pane_t1

0xe78c,	// (0x0003c4b2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa4a8,	// (0x000381ce) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003dad6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe794,	// (0x0003c4ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe794,	// (0x0003c4ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7aa,	// (0x0003c4d0) aid_popup_sp_fs_bg_corner_pane

0xc7e9,	// (0x0003a50f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b4c,	// (0x00037872) popup_sp_fs_calendar_preview_bg_pane

0xe7b2,	// (0x0003c4d8) popup_sp_fs_calendar_preview_list_pane

0xc3e1,	// (0x0003a107) bg_main_sp_fs_cale_pane_ParamLimits

0xc3e1,	// (0x0003a107) bg_main_sp_fs_cale_pane

0xe7c3,	// (0x0003c4e9) listscroll_cale_mrui_pane_ParamLimits

0xe7c3,	// (0x0003c4e9) listscroll_cale_mrui_pane

0xd32c,	// (0x0003b052) listscroll_sp_fs_schedule_track_pane

0xe7d8,	// (0x0003c4fe) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7d8,	// (0x0003c4fe) main_sp_fs_ctrlbar_pane_cp01

0xe7eb,	// (0x0003c511) main_sp_fs_ribbon_pane

0xe7f3,	// (0x0003c519) popup_sp_fs_cale_preview_window

0x8cf8,	// (0x00036a1e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cf8,	// (0x00036a1e) list_single_sp_fs_schedule_track_pane

0xa6d7,	// (0x000383fd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6d7,	// (0x000383fd) bg_sp_fs_highlight_list_pane_cp03

0x8d0b,	// (0x00036a31) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d0b,	// (0x00036a31) list_single_sp_fs_schedule_track_pane_g1

0x8d17,	// (0x00036a3d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d17,	// (0x00036a3d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003dadb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003dadb) list_single_sp_fs_schedule_track_pane_g

0x8d23,	// (0x00036a49) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d23,	// (0x00036a49) list_single_sp_fs_schedule_track_pane_t1

0x8d3d,	// (0x00036a63) sp_fs_schedule_track_pane_ParamLimits

0x8d3d,	// (0x00036a63) sp_fs_schedule_track_pane

0xe805,	// (0x0003c52b) sp_fs_schedule_track_pane_g1

0xe80d,	// (0x0003c533) sp_fs_schedule_track_pane_g2

0xe815,	// (0x0003c53b) sp_fs_schedule_track_pane_g3

0xe81d,	// (0x0003c543) sp_fs_schedule_track_pane_g4

0xe825,	// (0x0003c54b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003dae0) sp_fs_schedule_track_pane_g

0xd2a8,	// (0x0003afce) bg_sp_fs_schedule_viewer_highlight_g1

0xa6a7,	// (0x000383cd) bg_sp_fs_schedule_viewer_highlight_g2

0xd2b0,	// (0x0003afd6) bg_sp_fs_schedule_viewer_highlight_g3

0xd2b8,	// (0x0003afde) bg_sp_fs_schedule_viewer_highlight_g4

0xd4fc,	// (0x0003b222) bg_sp_fs_schedule_viewer_highlight_g5

0xd2c8,	// (0x0003afee) bg_sp_fs_schedule_viewer_highlight_g6

0xd2d0,	// (0x0003aff6) bg_sp_fs_schedule_viewer_highlight_g7

0xd2d8,	// (0x0003affe) bg_sp_fs_schedule_viewer_highlight_g8

0xa687,	// (0x000383ad) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003daeb) bg_sp_fs_schedule_viewer_highlight_g

0x9b4c,	// (0x00037872) bg_main_sp_fs_ribbon_pane

0x8d4e,	// (0x00036a74) main_sp_fs_ribbon_pane_g1

0xe82d,	// (0x0003c553) main_sp_fs_ribbon_pane_t1

0x8d57,	// (0x00036a7d) main_sp_fs_ribbon_pane_t2

0xe83c,	// (0x0003c562) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003dafe) main_sp_fs_ribbon_pane_t

0xe84b,	// (0x0003c571) main_sp_fs_ribbon_scheduler_pane

0xe853,	// (0x0003c579) bg_main_sp_fs_ribbon_pane_g1

0xe85c,	// (0x0003c582) bg_main_sp_fs_ribbon_pane_g2

0xe865,	// (0x0003c58b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003db05) bg_main_sp_fs_ribbon_pane_g

0xe86d,	// (0x0003c593) main_sp_fs_ribbon_scheduler_pane_g1

0xe876,	// (0x0003c59c) main_sp_fs_ribbon_scheduler_pane_g2

0xe87f,	// (0x0003c5a5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003db0c) main_sp_fs_ribbon_scheduler_pane_g

0xe888,	// (0x0003c5ae) list_cale_mrui_pane

0x8d66,	// (0x00036a8c) sp_fs_scroll_pane_cp07_ParamLimits

0x8d66,	// (0x00036a8c) sp_fs_scroll_pane_cp07

0x8d82,	// (0x00036aa8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d82,	// (0x00036aa8) bg_sp_fs_schedule_viewer_highlight

0xe895,	// (0x0003c5bb) list_single_sp_fs_schedule_track_pane_cp01

0xe89d,	// (0x0003c5c3) list_sp_fs_schedule_track_pane

0xe8a5,	// (0x0003c5cb) sp_fs_scroll_pane_cp06_ParamLimits

0xe8a5,	// (0x0003c5cb) sp_fs_scroll_pane_cp06

0xc7e9,	// (0x0003a50f) bgmain_sp_fs_calendar_pane_g1

0x8d92,	// (0x00036ab8) list_single_cale_mrui_pane_ParamLimits

0x8d92,	// (0x00036ab8) list_single_cale_mrui_pane

0xe8b7,	// (0x0003c5dd) list_single_cale_mrui_row_pane_ParamLimits

0xe8b7,	// (0x0003c5dd) list_single_cale_mrui_row_pane

0xe8c4,	// (0x0003c5ea) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8c4,	// (0x0003c5ea) list_single_cale_mrui_row_pane_g1

0xe909,	// (0x0003c62f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe909,	// (0x0003c62f) list_single_cale_mrui_row_pane_t1

0x8db3,	// (0x00036ad9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8db3,	// (0x00036ad9) list_single_cale_mrui_row_pane_t2

0xe91b,	// (0x0003c641) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe91b,	// (0x0003c641) list_single_cale_mrui_row_pane_t3

0xe94a,	// (0x0003c670) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe94a,	// (0x0003c670) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003db1a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003db1a) list_single_cale_mrui_row_pane_t

0x8e1b,	// (0x00036b41) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e1b,	// (0x00036b41) list_single_cmail_header_editor_pane_bg_cp01

0x8e41,	// (0x00036b67) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e41,	// (0x00036b67) list_single_cmail_header_editor_pane_bg_cp02

0x8e61,	// (0x00036b87) main_radioblah_text_pane_t1_ParamLimits

0x8e61,	// (0x00036b87) main_radioblah_text_pane_t1

0xe979,	// (0x0003c69f) cam6_indi_pane_cp01

0xe981,	// (0x0003c6a7) cam6_mode_pane_cp01

0xe989,	// (0x0003c6af) cam6_pano_pane

0xe992,	// (0x0003c6b8) cam6_zoom_pane_cp01

0xe99a,	// (0x0003c6c0) cam6_pano_image_pane

0xe9a5,	// (0x0003c6cb) cam6_pano_pane_g1

0xdfed,	// (0x0003bd13) cam6_pano_pane_g2

0xe9ae,	// (0x0003c6d4) cam6_pano_pane_g3

0xe9b7,	// (0x0003c6dd) cam6_pano_pane_g4

0xcded,	// (0x0003ab13) cam6_pano_pane_g5

0xe9c0,	// (0x0003c6e6) cam6_pano_pane_g6

0xe9ca,	// (0x0003c6f0) cam6_pano_pane_g7

0xe9d2,	// (0x0003c6f8) cam6_pano_pane_g8

0xe9db,	// (0x0003c701) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003db23) cam6_pano_pane_g

0x9b4c,	// (0x00037872) main_browser_tag_pane

0xe70f,	// (0x0003c435) grid_navstr_albumart_pane

0xe9e6,	// (0x0003c70c) cell_navstr_albumart_pane_ParamLimits

0xe9e6,	// (0x0003c70c) cell_navstr_albumart_pane

0xea06,	// (0x0003c72c) cell_navstr_albumart_pane_g1

0xc1f2,	// (0x00039f18) cell_navstr_albumart_pane_g2

0xc202,	// (0x00039f28) cell_navstr_albumart_pane_g3

0xc1fa,	// (0x00039f20) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003db36) cell_navstr_albumart_pane_g

0x8e7b,	// (0x00036ba1) bt_list_pane_ParamLimits

0x8e7b,	// (0x00036ba1) bt_list_pane

0x8e8f,	// (0x00036bb5) bt_list_pane_t1

0x8e9e,	// (0x00036bc4) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003db3f) bt_list_pane_t

0x9b4c,	// (0x00037872) main_cale_prevew_pane

0x8ead,	// (0x00036bd3) popup_cale_preview_window_ParamLimits

0x8ead,	// (0x00036bd3) popup_cale_preview_window

0xa6d7,	// (0x000383fd) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6d7,	// (0x000383fd) bg_popup_preview_window_pane_cp05

0xea0e,	// (0x0003c734) list_cale_preview_pane_ParamLimits

0xea0e,	// (0x0003c734) list_cale_preview_pane

0x8ec8,	// (0x00036bee) list_double_cale_preview_pane_ParamLimits

0x8ec8,	// (0x00036bee) list_double_cale_preview_pane

0x8eda,	// (0x00036c00) list_single_cale_preview_pane_ParamLimits

0x8eda,	// (0x00036c00) list_single_cale_preview_pane

0x8ef0,	// (0x00036c16) list_single_cale_preview_pane_g1

0x8ef8,	// (0x00036c1e) list_single_cale_preview_pane_t1_ParamLimits

0x8ef8,	// (0x00036c1e) list_single_cale_preview_pane_t1

0x8f0d,	// (0x00036c33) list_double_cale_preview_pane_g1

0x8f15,	// (0x00036c3b) list_double_cale_preview_pane_t1_ParamLimits

0x8f15,	// (0x00036c3b) list_double_cale_preview_pane_t1

0x8f2a,	// (0x00036c50) list_double_cale_preview_pane_t2_ParamLimits

0x8f2a,	// (0x00036c50) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003db44) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003db44) list_double_cale_preview_pane_t

0x9b4c,	// (0x00037872) main_ezdial_pane

0xa6d7,	// (0x000383fd) main_sp_fs_email_pane_ParamLimits

0x847a,	// (0x000361a0) cmail_ddmenu_btn01_pane_ParamLimits

0x847a,	// (0x000361a0) cmail_ddmenu_btn01_pane

0x848d,	// (0x000361b3) cmail_ddmenu_btn02_pane_ParamLimits

0x848d,	// (0x000361b3) cmail_ddmenu_btn02_pane

0x84b0,	// (0x000361d6) cmail_ddmenu_btn03_pane_ParamLimits

0x84b0,	// (0x000361d6) cmail_ddmenu_btn03_pane

0x84d6,	// (0x000361fc) main_sp_fs_ctrlbar_pane_ParamLimits

0x84fa,	// (0x00036220) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4cb,	// (0x0003b1f1) list_cmail_body_pane_ParamLimits

0xe60c,	// (0x0003c332) bg_button_pane_cp12

0xe621,	// (0x0003c347) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe621,	// (0x0003c347) list_single_cmail_header_detail_pane_g3

0xe66a,	// (0x0003c390) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe66a,	// (0x0003c390) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003dac7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003dac7) list_single_cmail_header_detail_pane_t

0xe777,	// (0x0003c49d) phacti_term_pane_t2_ParamLimits

0xe777,	// (0x0003c49d) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003dad1) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003dad1) phacti_term_pane_t

0xea1a,	// (0x0003c740) aid_size_list_single_double

0x8f42,	// (0x00036c68) popup_ezdial_listscroll_window

0x8f5e,	// (0x00036c84) popup_number_entry_window_cp01

0xa44e,	// (0x00038174) bg_popup_call_pane_cp09

0xea26,	// (0x0003c74c) ezdial_list_pane

0xea2e,	// (0x0003c754) scroll_pane_cp23

0xc3e1,	// (0x0003a107) bg_button_pane_cp028_ParamLimits

0xc3e1,	// (0x0003a107) bg_button_pane_cp028

0x8f6c,	// (0x00036c92) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f6c,	// (0x00036c92) cmail_ddmenu_btn01_pane_g1

0x8f78,	// (0x00036c9e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f78,	// (0x00036c9e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003db49) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003db49) cmail_ddmenu_btn01_pane_g

0xea36,	// (0x0003c75c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea36,	// (0x0003c75c) cmail_ddmenu_btn01_pane_t1

0xc3e1,	// (0x0003a107) bg_button_pane_cp029_ParamLimits

0xc3e1,	// (0x0003a107) bg_button_pane_cp029

0x8f84,	// (0x00036caa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f84,	// (0x00036caa) cmail_ddmenu_btn02_pane_g1

0x8f9d,	// (0x00036cc3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f9d,	// (0x00036cc3) cmail_ddmenu_btn02_pane_t1

0xa6d7,	// (0x000383fd) bg_button_pane_cp031_ParamLimits

0xa6d7,	// (0x000383fd) bg_button_pane_cp031

0x8f84,	// (0x00036caa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f84,	// (0x00036caa) cmail_ddmenu_btn03_pane_g1

0x8f9d,	// (0x00036cc3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f9d,	// (0x00036cc3) cmail_ddmenu_btn03_pane_t1

0x63d6,	// (0x000340fc) cell_dialer2_keypad_pane_t1_ParamLimits

0x63f0,	// (0x00034116) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x63f0,	// (0x00034116) cell_dialer2_keypad_pane_t1_copy1

0x7ca2,	// (0x000359c8) ncimui_group_button_pane

0xa6d7,	// (0x000383fd) main_sp_fs_calendar_pane_ParamLimits

0x8b80,	// (0x000368a6) list_single_cmail_header_caption_pane_ParamLimits

0xe7ba,	// (0x0003c4e0) aid_recal_txt_sm_pane

0x9b4c,	// (0x00037872) mian_recal_day_pane

0xe7f3,	// (0x0003c519) popup_sp_fs_cale_preview_window_ParamLimits

0xea4b,	// (0x0003c771) list_recal_day_pane

0xea8d,	// (0x0003c7b3) list_single_recal_day_pane_ParamLimits

0xea8d,	// (0x0003c7b3) list_single_recal_day_pane

0xea9f,	// (0x0003c7c5) list_single_recal_day_pane_g1_ParamLimits

0xea9f,	// (0x0003c7c5) list_single_recal_day_pane_g1

0xeaab,	// (0x0003c7d1) list_single_recal_day_pane_g2_ParamLimits

0xeaab,	// (0x0003c7d1) list_single_recal_day_pane_g2

0xeab7,	// (0x0003c7dd) list_single_recal_day_pane_g3_ParamLimits

0xeab7,	// (0x0003c7dd) list_single_recal_day_pane_g3

0x8fc1,	// (0x00036ce7) list_single_recal_day_pane_g4_ParamLimits

0x8fc1,	// (0x00036ce7) list_single_recal_day_pane_g4

0xeac3,	// (0x0003c7e9) list_single_recal_day_pane_g5_ParamLimits

0xeac3,	// (0x0003c7e9) list_single_recal_day_pane_g5

0xeacf,	// (0x0003c7f5) list_single_recal_day_pane_g6_ParamLimits

0xeacf,	// (0x0003c7f5) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003db58) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003db58) list_single_recal_day_pane_g

0xeae3,	// (0x0003c809) list_single_recal_day_pane_t1

0xeaf5,	// (0x0003c81b) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003db63) list_single_recal_day_pane_t

0x8fd9,	// (0x00036cff) ncimui_query_button_pane_ParamLimits

0x8fd9,	// (0x00036cff) ncimui_query_button_pane

0x8fe9,	// (0x00036d0f) ncimui_query_button_pane_t1_ParamLimits

0x8fe9,	// (0x00036d0f) ncimui_query_button_pane_t1

0xeb07,	// (0x0003c82d) ncimui_query_button_pane_t2_ParamLimits

0xeb07,	// (0x0003c82d) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003db68) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003db68) ncimui_query_button_pane_t

0x8ffc,	// (0x00036d22) query_button_pane_ParamLimits

0x8ffc,	// (0x00036d22) query_button_pane

0x9b4c,	// (0x00037872) bg_button_pane_cp0028

0xeb1a,	// (0x0003c840) query_button_pane_t1

0x0637,	// (0x0002e35d) main_tport_pane_ParamLimits

0x8a44,	// (0x0003676a) bg_popup_window_pane_cp01_ParamLimits

0x8a44,	// (0x0003676a) bg_popup_window_pane_cp01

0x8a5f,	// (0x00036785) heading_pane_cp08_ParamLimits

0x8a5f,	// (0x00036785) heading_pane_cp08

0x8a72,	// (0x00036798) heading_pane_cp07_ParamLimits

0x8a72,	// (0x00036798) heading_pane_cp07

0x8b19,	// (0x0003683f) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003dab4) cell_tport_appsw_pane_g

0xb0c9,	// (0x00038def) input_candi_list_open_g1

0xa918,	// (0x0003863e) list_cale_time_pane_g6_ParamLimits

0xa918,	// (0x0003863e) list_cale_time_pane_g6

0x51af,	// (0x00032ed5) aid_size_touch_calib_1_ParamLimits

0x51af,	// (0x00032ed5) aid_size_touch_calib_1

0x51c1,	// (0x00032ee7) aid_size_touch_calib_2_ParamLimits

0x51c1,	// (0x00032ee7) aid_size_touch_calib_2

0x51d9,	// (0x00032eff) aid_size_touch_calib_3_ParamLimits

0x51d9,	// (0x00032eff) aid_size_touch_calib_3

0x51f7,	// (0x00032f1d) aid_size_touch_calib_4_ParamLimits

0x51f7,	// (0x00032f1d) aid_size_touch_calib_4

0x520f,	// (0x00032f35) main_touch_calib_button_group_pane_ParamLimits

0x520f,	// (0x00032f35) main_touch_calib_button_group_pane

0x5227,	// (0x00032f4d) main_touch_calib_pane_g1_ParamLimits

0x5239,	// (0x00032f5f) main_touch_calib_pane_g2_ParamLimits

0x524b,	// (0x00032f71) main_touch_calib_pane_g3_ParamLimits

0x525d,	// (0x00032f83) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003d477) main_touch_calib_pane_g_ParamLimits

0x526f,	// (0x00032f95) main_touch_calib_pane_t1_ParamLimits

0x5289,	// (0x00032faf) main_touch_calib_pane_t2_ParamLimits

0x52a3,	// (0x00032fc9) main_touch_calib_pane_t3_ParamLimits

0x52b7,	// (0x00032fdd) main_touch_calib_pane_t4_ParamLimits

0x52cb,	// (0x00032ff1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003d480) main_touch_calib_pane_t_ParamLimits

0xcb81,	// (0x0003a8a7) list_single_fp_cale_pane_g3_ParamLimits

0xcb81,	// (0x0003a8a7) list_single_fp_cale_pane_g3

0x193d,	// (0x0002f663) bg_button_pane_cp012_ParamLimits

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp03_ParamLimits

0x172b,	// (0x0002f451) cell_vitu2_function_top_pane_g1_ParamLimits

0x193d,	// (0x0002f663) bg_vkb2_func_pane_cp04_ParamLimits

0x7c30,	// (0x00035956) main_ncimui_button_group_pane_ParamLimits

0x7c30,	// (0x00035956) main_ncimui_button_group_pane

0x7c90,	// (0x000359b6) main_ncimui_pane_t3_ParamLimits

0x7c90,	// (0x000359b6) main_ncimui_pane_t3

0xe725,	// (0x0003c44b) phacti_button_group_pane

0xea1a,	// (0x0003c740) aid_size_list_single_double_ParamLimits

0x8f42,	// (0x00036c68) popup_ezdial_listscroll_window_ParamLimits

0x8f5e,	// (0x00036c84) popup_number_entry_window_cp01_ParamLimits

0x900f,	// (0x00036d35) phacti_button_pane_ParamLimits

0x900f,	// (0x00036d35) phacti_button_pane

0x9b4c,	// (0x00037872) bg_button_pane_cp14

0xeb28,	// (0x0003c84e) phacti_button_pane_t1

0x9020,	// (0x00036d46) main_touch_calib_button_pane_ParamLimits

0x9020,	// (0x00036d46) main_touch_calib_button_pane

0xa289,	// (0x00037faf) bg_button_pane_cp18_ParamLimits

0xa289,	// (0x00037faf) bg_button_pane_cp18

0xeb36,	// (0x0003c85c) main_touch_calib_button_pane_t1_ParamLimits

0xeb36,	// (0x0003c85c) main_touch_calib_button_pane_t1

0xeb4c,	// (0x0003c872) main_touch_calib_button_pane_t2_ParamLimits

0xeb4c,	// (0x0003c872) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003db6d) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003db6d) main_touch_calib_button_pane_t

0x9b4c,	// (0x00037872) cell_ncimui_button_pane

0x9b4c,	// (0x00037872) bg_button_pane_cp032

0xeb6a,	// (0x0003c890) cell_ncimui_button_pane_t1

0x640d,	// (0x00034133) image3_infobar_pane_ParamLimits

0x640d,	// (0x00034133) image3_infobar_pane

0x806c,	// (0x00035d92) fs_bigclock_status_pane_ParamLimits

0x806c,	// (0x00035d92) fs_bigclock_status_pane

0x8079,	// (0x00035d9f) main_fs_bigclock_clock_pane_ParamLimits

0x8079,	// (0x00035d9f) main_fs_bigclock_clock_pane

0x8099,	// (0x00035dbf) main_fs_bigclock_indi_pane_ParamLimits

0x8099,	// (0x00035dbf) main_fs_bigclock_indi_pane

0x80c3,	// (0x00035de9) main_fs_bigclock_swipe_pane_ParamLimits

0x80c3,	// (0x00035de9) main_fs_bigclock_swipe_pane

0x9b4c,	// (0x00037872) main_fs_clock_dumped_data

0xe0fa,	// (0x0003be20) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0fa,	// (0x0003be20) list_single_fs_bigclock_indicator_pane_g1

0xe115,	// (0x0003be3b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe115,	// (0x0003be3b) list_single_fs_bigclock_indicator_pane_g2

0xe12f,	// (0x0003be55) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe12f,	// (0x0003be55) list_single_fs_bigclock_indicator_pane_g3

0xe149,	// (0x0003be6f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe149,	// (0x0003be6f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003d99a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003d99a) list_single_fs_bigclock_indicator_pane_g

0xe174,	// (0x0003be9a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe174,	// (0x0003be9a) list_single_fs_bigclock_indicator_pane_t1

0xe19c,	// (0x0003bec2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe19c,	// (0x0003bec2) list_single_fs_bigclock_indicator_pane_t2

0xe1c4,	// (0x0003beea) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1c4,	// (0x0003beea) list_single_fs_bigclock_indicator_pane_t3

0xe1ec,	// (0x0003bf12) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1ec,	// (0x0003bf12) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003d9a5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003d9a5) list_single_fs_bigclock_indicator_pane_t

0xeb78,	// (0x0003c89e) image3_infobar_fav_pane_ParamLimits

0xeb78,	// (0x0003c89e) image3_infobar_fav_pane

0xeb88,	// (0x0003c8ae) image3_infobar_loc_pane_ParamLimits

0xeb88,	// (0x0003c8ae) image3_infobar_loc_pane

0xeb9c,	// (0x0003c8c2) image3_infobar_time_pane_ParamLimits

0xeb9c,	// (0x0003c8c2) image3_infobar_time_pane

0xc7e9,	// (0x0003a50f) image3_infobar_time_pane_g1

0xebac,	// (0x0003c8d2) image3_infobar_time_pane_t1

0xc7e9,	// (0x0003a50f) image3_infobar_loc_pane_g1

0xebba,	// (0x0003c8e0) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003db72) image3_infobar_loc_pane_g

0xebc2,	// (0x0003c8e8) image3_infobar_loc_pane_t1

0xc7e9,	// (0x0003a50f) image3_infobar_fav_pane_g1

0xebd0,	// (0x0003c8f6) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003db77) image3_infobar_fav_pane_g

0xebd8,	// (0x0003c8fe) fs_bigclock_status_battery_pane

0xebe1,	// (0x0003c907) fs_bigclock_status_signal_pane

0xebea,	// (0x0003c910) fs_bigclock_status_title_pane

0xebf3,	// (0x0003c919) fs_bigclock_status_signal_pane_g1

0xebfc,	// (0x0003c922) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003db7c) fs_bigclock_status_signal_pane_g

0xec04,	// (0x0003c92a) fs_bigclock_status_battery_pane_g1

0xec0d,	// (0x0003c933) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003db81) fs_bigclock_status_battery_pane_g

0xec15,	// (0x0003c93b) fs_bigclock_status_title_pane_t1

0xc7e9,	// (0x0003a50f) main_fs_bigclock_clock_pane_g1

0xec23,	// (0x0003c949) main_fs_bigclock_clock_pane_g2

0xec2c,	// (0x0003c952) main_fs_bigclock_clock_pane_g3

0xec2c,	// (0x0003c952) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003db86) main_fs_bigclock_clock_pane_g

0xec34,	// (0x0003c95a) main_fs_bigclock_clock_pane_t1

0x9035,	// (0x00036d5b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003db8f) main_fs_bigclock_clock_pane_t

0xec42,	// (0x0003c968) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec42,	// (0x0003c968) list_single_fs_bigclock_indicator_pane

0xec53,	// (0x0003c979) list_single_fs_bigclock_pane_ParamLimits

0xec53,	// (0x0003c979) list_single_fs_bigclock_pane

0xec79,	// (0x0003c99f) main_fs_bigclock_indicator_pane_t1

0xec88,	// (0x0003c9ae) list_single_fs_bigclock_pane_g1

0xec90,	// (0x0003c9b6) list_single_fs_bigclock_pane_t1

0xc7e9,	// (0x0003a50f) main_fs_bigclock_swipe_pane_g1

0xecd3,	// (0x0003c9f9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003dba0) main_fs_bigclock_swipe_pane_g

0xecdb,	// (0x0003ca01) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecdb,	// (0x0003ca01) main_fs_bigclock_swipe_pane_t1

0x3916,	// (0x0003163c) call_type_pane_ParamLimits

0x9b4c,	// (0x00037872) main_btmg_pane

0xe8f0,	// (0x0003c616) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8f0,	// (0x0003c616) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003db13) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003db13) list_single_cale_mrui_row_pane_g

0xea74,	// (0x0003c79a) list_recal_vselct_arw_lo_pane

0xea7c,	// (0x0003c7a2) list_recal_vselct_arw_up_pane

0xea84,	// (0x0003c7aa) list_recal_vselct_pane

0x9088,	// (0x00036dae) btmg_button_pane

0x9092,	// (0x00036db8) main_btmg_pane_g1

0x9b4c,	// (0x00037872) bg_button_pane_cp044

0xecf8,	// (0x0003ca1e) btmg_button_pane_t1

0xc3cd,	// (0x0003a0f3) aid_listscroll_gen

0xa6d7,	// (0x000383fd) main_cntbar_detail_pane

0xe5ee,	// (0x0003c314) list_cmail_folder_pane

0xcc7c,	// (0x0003a9a2) sp_fs_scroll_pane_cp03_ParamLimits

0x8b80,	// (0x000368a6) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b80,	// (0x000368a6) list_single_fs_dyc_pane_cp01

0xed06,	// (0x0003ca2c) aid_size_cmail_indent

0xed0f,	// (0x0003ca35) list_single_dyc_row_pane_cp01

0x90ce,	// (0x00036df4) cntbar_detail_list_pane_ParamLimits

0x90ce,	// (0x00036df4) cntbar_detail_list_pane

0x911a,	// (0x00036e40) main_cntbar_detail_cont_pane_ParamLimits

0x911a,	// (0x00036e40) main_cntbar_detail_cont_pane

0xcc7c,	// (0x0003a9a2) scroll_pane_cp032_ParamLimits

0xcc7c,	// (0x0003a9a2) scroll_pane_cp032

0x912e,	// (0x00036e54) cntbar_detail_list_event_pane_ParamLimits

0x912e,	// (0x00036e54) cntbar_detail_list_event_pane

0x90de,	// (0x00036e04) cntbar_detail_list_shct_pane

0xa7a3,	// (0x000384c9) aid_list_gen

0xed18,	// (0x0003ca3e) aid_scroll

0xed21,	// (0x0003ca47) aid_size_touch_scroll_bar

0x7425,	// (0x0003514b) aid_list_double

0x7413,	// (0x00035139) aid_list_single

0x7413,	// (0x00035139) aid_list_single_lg

0x913e,	// (0x00036e64) aid_list_z_g_a_sm

0x9146,	// (0x00036e6c) aid_list_z_g_d

0x914e,	// (0x00036e74) aid_txt_z_prm

0x915c,	// (0x00036e82) aid_txt_z_prm_cp01

0x916a,	// (0x00036e90) aid_txt_z_sec

0x9178,	// (0x00036e9e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9178,	// (0x00036e9e) main_cntbar_detail_cont_pane_g1

0x918c,	// (0x00036eb2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x918c,	// (0x00036eb2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003dba5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003dba5) main_cntbar_detail_cont_pane_g

0xed2a,	// (0x0003ca50) main_cntbar_detail_cont_pane_t1

0xed38,	// (0x0003ca5e) main_cntbar_detail_cont_pane_t2

0xed46,	// (0x0003ca6c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003dbaa) main_cntbar_detail_cont_pane_t

0x919c,	// (0x00036ec2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x919c,	// (0x00036ec2) cell_cntbar_detail_list_shct_pane

0xed54,	// (0x0003ca7a) cntbar_detail_list_shct_pane_g1

0xed5d,	// (0x0003ca83) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003dbb1) cntbar_detail_list_shct_pane_g

0x91b0,	// (0x00036ed6) cntbar_detail_list_event_pane_g1_ParamLimits

0x91b0,	// (0x00036ed6) cntbar_detail_list_event_pane_g1

0x91bc,	// (0x00036ee2) cntbar_detail_list_event_pane_g2_ParamLimits

0x91bc,	// (0x00036ee2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003dbb6) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003dbb6) cntbar_detail_list_event_pane_g

0x9228,	// (0x00036f4e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9228,	// (0x00036f4e) cntbar_detail_list_event_pane_t1

0x923d,	// (0x00036f63) cntbar_detail_list_event_pane_t2_ParamLimits

0x923d,	// (0x00036f63) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003dbc3) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003dbc3) cntbar_detail_list_event_pane_t

0xc7e9,	// (0x0003a50f) cell_cntbar_detail_list_shct_pane_g1

0xaf1a,	// (0x00038c40) navi_pane_mv_g3

0xa6d7,	// (0x000383fd) main_cntbar_detail_pane_ParamLimits

0x9b4c,	// (0x00037872) main_notif_wgt_pane

0x6180,	// (0x00033ea6) aid_tch_main_mp4_pane_g4

0x6362,	// (0x00034088) popup_slider_window_cp02

0xea6a,	// (0x0003c790) list_recal_day_event_pane

0x909c,	// (0x00036dc2) cntbar_detail_btn_pane_ParamLimits

0x909c,	// (0x00036dc2) cntbar_detail_btn_pane

0x90b5,	// (0x00036ddb) cntbar_detail_btn_pane_cp01_ParamLimits

0x90b5,	// (0x00036ddb) cntbar_detail_btn_pane_cp01

0x90de,	// (0x00036e04) cntbar_detail_list_shct_pane_ParamLimits

0x90ee,	// (0x00036e14) cntbar_detail_pane_g1_ParamLimits

0x90ee,	// (0x00036e14) cntbar_detail_pane_g1

0x90fe,	// (0x00036e24) cntbar_detail_pane_t1_ParamLimits

0x90fe,	// (0x00036e24) cntbar_detail_pane_t1

0x91c8,	// (0x00036eee) cntbar_detail_list_event_pane_g3_ParamLimits

0x91c8,	// (0x00036eee) cntbar_detail_list_event_pane_g3

0x91e0,	// (0x00036f06) cntbar_detail_list_event_pane_g4_ParamLimits

0x91e0,	// (0x00036f06) cntbar_detail_list_event_pane_g4

0x91f8,	// (0x00036f1e) cntbar_detail_list_event_pane_g5_ParamLimits

0x91f8,	// (0x00036f1e) cntbar_detail_list_event_pane_g5

0x9210,	// (0x00036f36) cntbar_detail_list_event_pane_g6_ParamLimits

0x9210,	// (0x00036f36) cntbar_detail_list_event_pane_g6

0x9252,	// (0x00036f78) cntbar_detail_list_event_pane_t3_ParamLimits

0x9252,	// (0x00036f78) cntbar_detail_list_event_pane_t3

0x9264,	// (0x00036f8a) popup_notif_wgt_window_ParamLimits

0x9264,	// (0x00036f8a) popup_notif_wgt_window

0x927d,	// (0x00036fa3) popup_submenu_window_cp01_ParamLimits

0x927d,	// (0x00036fa3) popup_submenu_window_cp01

0xa44e,	// (0x00038174) bg_popup_window_pane_cp10

0xed66,	// (0x0003ca8c) listscroll_notif_wgt_pane

0xed78,	// (0x0003ca9e) list_notif_wgt_window

0xed81,	// (0x0003caa7) scroll_pane_cp033

0x9293,	// (0x00036fb9) list_notif_wgt_row_pane_ParamLimits

0x9293,	// (0x00036fb9) list_notif_wgt_row_pane

0xed8a,	// (0x0003cab0) aid_size_list_notif_wgt_del

0xed97,	// (0x0003cabd) list_notif_wgt_row_pane_g1

0xeda3,	// (0x0003cac9) list_notif_wgt_row_pane_g2

0xedb7,	// (0x0003cadd) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003dbca) list_notif_wgt_row_pane_g

0xedc4,	// (0x0003caea) list_notif_wgt_row_pane_t1

0xedda,	// (0x0003cb00) list_notif_wgt_row_pane_t2

0xedec,	// (0x0003cb12) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003dbd1) list_notif_wgt_row_pane_t

0xd516,	// (0x0003b23c) list_recal_day_event_pane_g1

0xedfe,	// (0x0003cb24) list_recal_day_event_pane_t1

0x9b4c,	// (0x00037872) bg_button_pane_cp045

0x92a3,	// (0x00036fc9) cntbar_detail_btn_pane_t1

0xc3e1,	// (0x0003a107) main_callh_pane_ParamLimits

0xc3e1,	// (0x0003a107) main_callh_pane

0x9b4c,	// (0x00037872) main_coverflow0_pane

0x9b4c,	// (0x00037872) main_wgtman_pane

0x80db,	// (0x00035e01) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80db,	// (0x00035e01) main_fs_bigclock_unlock_btn_pane

0x8b11,	// (0x00036837) bg_button_pane_cp16

0x8b21,	// (0x00036847) cell_tport_appsw_pane_g3

0x92b1,	// (0x00036fd7) cf0_flow_pane_ParamLimits

0x92b1,	// (0x00036fd7) cf0_flow_pane

0xee0d,	// (0x0003cb33) listscroll_cf0_pane

0xee18,	// (0x0003cb3e) main_cf0_pane_g1

0x92c6,	// (0x00036fec) main_cf0_pane_t1_ParamLimits

0x92c6,	// (0x00036fec) main_cf0_pane_t1

0x92dd,	// (0x00037003) main_cf0_pane_t2_ParamLimits

0x92dd,	// (0x00037003) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003dbdd) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003dbdd) main_cf0_pane_t

0xee2a,	// (0x0003cb50) scroll_pane_cp11

0x92f4,	// (0x0003701a) cf0_flow_pane_g1

0x92fc,	// (0x00037022) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003dbe2) cf0_flow_pane_g

0x9304,	// (0x0003702a) cf0_flow_pane_t1

0x9b4c,	// (0x00037872) main_call6_pane

0x9b4c,	// (0x00037872) main_calllock_pane

0x9312,	// (0x00037038) call6_btn_grp_pane_ParamLimits

0x9312,	// (0x00037038) call6_btn_grp_pane

0x932c,	// (0x00037052) call6_pane_g1_ParamLimits

0x932c,	// (0x00037052) call6_pane_g1

0x9341,	// (0x00037067) popup_call6_1st_window_ParamLimits

0x9341,	// (0x00037067) popup_call6_1st_window

0x9352,	// (0x00037078) popup_call6_2nd_window_ParamLimits

0x9352,	// (0x00037078) popup_call6_2nd_window

0x9363,	// (0x00037089) cell_call6_btn_pane_ParamLimits

0x9363,	// (0x00037089) cell_call6_btn_pane

0xa44e,	// (0x00038174) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0003cb5b) popup_call6_1st_window_g1

0xee3d,	// (0x0003cb63) popup_call6_1st_window_g2

0xee45,	// (0x0003cb6b) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003dbe7) popup_call6_1st_window_g

0xee4d,	// (0x0003cb73) popup_call6_1st_window_t1

0xee5c,	// (0x0003cb82) popup_call6_1st_window_t2

0xee6c,	// (0x0003cb92) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003dbee) popup_call6_1st_window_t

0xa44e,	// (0x00038174) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0003cb5b) popup_call6_2nd_window_g1

0xee3d,	// (0x0003cb63) popup_call6_2nd_window_g2

0xee45,	// (0x0003cb6b) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003dbe7) popup_call6_2nd_window_g

0xee4d,	// (0x0003cb73) popup_call6_2nd_window_t1

0x9b4c,	// (0x00037872) bg_button_pane_cp15

0xee7c,	// (0x0003cba2) cell_call6_btn_pane_g1

0xee85,	// (0x0003cbab) cell_call6_btn_pane_t1

0x9377,	// (0x0003709d) listscroll_wgtman_pane_ParamLimits

0x9377,	// (0x0003709d) listscroll_wgtman_pane

0x9398,	// (0x000370be) wgtman_btn_pane_ParamLimits

0x9398,	// (0x000370be) wgtman_btn_pane

0xad21,	// (0x00038a47) aid_scroll_copy1

0xee94,	// (0x0003cbba) list_wgtman_pane

0x93db,	// (0x00037101) wgtman_btn_pane_g1_ParamLimits

0x93db,	// (0x00037101) wgtman_btn_pane_g1

0x9407,	// (0x0003712d) wgtman_btn_pane_t1_ParamLimits

0x9407,	// (0x0003712d) wgtman_btn_pane_t1

0xee9e,	// (0x0003cbc4) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0003cbc4) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003dbf5) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003dbf5) wgtman_btn_pane_t

0x9444,	// (0x0003716a) listrow_wgtman_pane_ParamLimits

0x9444,	// (0x0003716a) listrow_wgtman_pane

0x9456,	// (0x0003717c) listrow_wgtman_pane_g1

0x9463,	// (0x00037189) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003dbfa) listrow_wgtman_pane_g

0x9481,	// (0x000371a7) listrow_wgtman_pane_t1

0x9499,	// (0x000371bf) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003dbff) listrow_wgtman_pane_t

0x94bf,	// (0x000371e5) wait_bar_pane_cp09

0xeeb5,	// (0x0003cbdb) main_calllock_btn_pane

0xeebf,	// (0x0003cbe5) main_calllock_pane_g1

0x9b4c,	// (0x00037872) bg_button_pane_cp17

0xeecb,	// (0x0003cbf1) main_calllock_btn_pane_g1

0xeed4,	// (0x0003cbfa) main_calllock_btn_pane_t1

0x9b4c,	// (0x00037872) main_dialer3_pane

0x9b4c,	// (0x00037872) main_fmrd2_pane

0xc7e9,	// (0x0003a50f) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0003cc11) main_fs_bigclock_unlock_btn_pane_t1

0x94d1,	// (0x000371f7) area_fmrd2_info_pane_ParamLimits

0x94d1,	// (0x000371f7) area_fmrd2_info_pane

0x94e2,	// (0x00037208) area_fmrd2_visual_pane_ParamLimits

0x94e2,	// (0x00037208) area_fmrd2_visual_pane

0x94f0,	// (0x00037216) fmrd2_indi_pane_ParamLimits

0x94f0,	// (0x00037216) fmrd2_indi_pane

0x94fd,	// (0x00037223) area_fmrd2_visual_pane_g1

0x9505,	// (0x0003722b) area_fmrd2_visual_pane_t1

0x9515,	// (0x0003723b) area_fmrd2_visual_pane_t2

0x9525,	// (0x0003724b) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003dc09) area_fmrd2_visual_pane_t

0x9535,	// (0x0003725b) area_fmrd2_info_pane_g1

0x953d,	// (0x00037263) area_fmrd2_info_pane_t1

0x954d,	// (0x00037273) area_fmrd2_info_pane_t2

0x955d,	// (0x00037283) area_fmrd2_info_pane_t3

0x956d,	// (0x00037293) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003dc10) area_fmrd2_info_pane_t

0x957b,	// (0x000372a1) fmrd2_indi_pane_t1

0x958b,	// (0x000372b1) fmrd2_indi_pane_t2

0x959b,	// (0x000372c1) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003dc19) fmrd2_indi_pane_t

0xe158,	// (0x0003be7e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe158,	// (0x0003be7e) list_single_fs_bigclock_indicator_pane_g5

0xe208,	// (0x0003bf2e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe208,	// (0x0003bf2e) list_single_fs_bigclock_indicator_pane_t5

0x8c97,	// (0x000369bd) aid_cell_bcale_month_pane_ParamLimits

0x8c97,	// (0x000369bd) aid_cell_bcale_month_pane

0x8cb5,	// (0x000369db) bcale_month_pane_ParamLimits

0x8cb5,	// (0x000369db) bcale_month_pane

0x8cd9,	// (0x000369ff) bcale_preview_pane_ParamLimits

0x8cd9,	// (0x000369ff) bcale_preview_pane

0xec90,	// (0x0003c9b6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaf,	// (0x0003c9d5) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaf,	// (0x0003c9d5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003db9b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003db9b) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0003cc09) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003dc04) main_fs_bigclock_unlock_btn_pane_g

0x95ab,	// (0x000372d1) aid_dia3_key_size_ParamLimits

0x95ab,	// (0x000372d1) aid_dia3_key_size

0x95ba,	// (0x000372e0) aid_dia3_listrow_size_ParamLimits

0x95ba,	// (0x000372e0) aid_dia3_listrow_size

0x95cf,	// (0x000372f5) dia3_keypad_fun_pane_ParamLimits

0x95cf,	// (0x000372f5) dia3_keypad_fun_pane

0x95eb,	// (0x00037311) dia3_keypad_num_pane_ParamLimits

0x95eb,	// (0x00037311) dia3_keypad_num_pane

0x9606,	// (0x0003732c) dia3_listscroll_pane_ParamLimits

0x9606,	// (0x0003732c) dia3_listscroll_pane

0x9619,	// (0x0003733f) dia3_numentry_pane_ParamLimits

0x9619,	// (0x0003733f) dia3_numentry_pane

0xeef9,	// (0x0003cc1f) dia3_list_pane

0xef04,	// (0x0003cc2a) scroll_pane_cp12

0x9b4c,	// (0x00037872) bg_dia3_numentry_pane

0x962d,	// (0x00037353) dia3_numentry_pane_t1

0x963c,	// (0x00037362) cell_dia3_key_num_pane

0x9644,	// (0x0003736a) cell_dia3_key0_fun_pane_ParamLimits

0x9644,	// (0x0003736a) cell_dia3_key0_fun_pane

0x9658,	// (0x0003737e) cell_dia3_key1_fun_pane_ParamLimits

0x9658,	// (0x0003737e) cell_dia3_key1_fun_pane

0x9670,	// (0x00037396) dia3_listrow_pane

0xde67,	// (0x0003bb8d) bg_dia3_numentry_pane_g1

0x9b4c,	// (0x00037872) bg_button_pane_cp21

0xef0f,	// (0x0003cc35) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0003cc43) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0003cc52) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0003cc61) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003dc20) cell_dia3_key_num_pane_t

0x9b4c,	// (0x00037872) bg_button_pane_cp19

0x9682,	// (0x000373a8) cell_dia3_key0_fun_pane_g1

0x9b4c,	// (0x00037872) bg_button_pane_cp20

0x968a,	// (0x000373b0) cell_dia3_key1_fun_pane_g1

0x9692,	// (0x000373b8) area_left_week_number_pane

0x969e,	// (0x000373c4) area_top_day_name_pane

0x96b1,	// (0x000373d7) frame_month_view_pane

0xef4a,	// (0x0003cc70) grid_month_view_pane

0x96c4,	// (0x000373ea) cell_top_day_name_pane_ParamLimits

0x96c4,	// (0x000373ea) cell_top_day_name_pane

0x96f1,	// (0x00037417) cell_area_left_week_number_pane_ParamLimits

0x96f1,	// (0x00037417) cell_area_left_week_number_pane

0x9705,	// (0x0003742b) cell_month_view_pane_ParamLimits

0x9705,	// (0x0003742b) cell_month_view_pane

0xef58,	// (0x0003cc7e) frm_month_g1

0x9732,	// (0x00037458) frm_month_g2

0x9745,	// (0x0003746b) frm_month_g3

0x9758,	// (0x0003747e) frm_month_g4

0x976b,	// (0x00037491) frm_month_g5

0x977e,	// (0x000374a4) frm_month_g6

0x9791,	// (0x000374b7) frm_month_g7

0xef65,	// (0x0003cc8b) frm_month_g8

0x97a4,	// (0x000374ca) frm_month_g9

0x97b4,	// (0x000374da) frm_month_g10

0x97c4,	// (0x000374ea) frm_month_g11

0x97d4,	// (0x000374fa) frm_month_g12

0x97e6,	// (0x0003750c) frm_month_g13

0x97f8,	// (0x0003751e) frm_month_g14

0x980c,	// (0x00037532) frm_month_g15

0x9820,	// (0x00037546) frm_month_g16

0x000f,

0xff03,	// (0x0003dc29) frm_month_g

0xef72,	// (0x0003cc98) cell_top_day_name_pane_t1

0x9834,	// (0x0003755a) cell_area_left_week_number_pane_g1

0x9840,	// (0x00037566) cell_area_left_week_number_pane_t1

0xca55,	// (0x0003a77b) cell_month_view_pane_g1

0x9853,	// (0x00037579) cell_month_view_pane_t1

0x9b4c,	// (0x00037872) main_fps_pane

0xe401,	// (0x0003c127) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe401,	// (0x0003c127) cmail_ddmenu_btn02_pane_cp1

0xe41d,	// (0x0003c143) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe41d,	// (0x0003c143) cmail_ddmenu_btn02_pane_cp2

0x8f90,	// (0x00036cb6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f90,	// (0x00036cb6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003db4e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003db4e) cmail_ddmenu_btn02_pane_g

0x8faf,	// (0x00036cd5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8faf,	// (0x00036cd5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003db53) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003db53) cmail_ddmenu_btn02_pane_t

0x9866,	// (0x0003758c) fps_text_pane_ParamLimits

0x9866,	// (0x0003758c) fps_text_pane

0x987d,	// (0x000375a3) main_fps_pane_g1_ParamLimits

0x987d,	// (0x000375a3) main_fps_pane_g1

0x9897,	// (0x000375bd) wait_bar_pane_cp010_ParamLimits

0x9897,	// (0x000375bd) wait_bar_pane_cp010

0x98a8,	// (0x000375ce) fps_text_pane_t1_ParamLimits

0x98a8,	// (0x000375ce) fps_text_pane_t1

0xe506,	// (0x0003c22c) cam4_image_uncrop_pane_g1

0xe50f,	// (0x0003c235) cam4_image_uncrop_pane_g2

0x65a5,	// (0x000342cb) cam4_image_uncrop_pane_g3

0x65ae,	// (0x000342d4) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003d614) cam4_image_uncrop_pane_g

0x9670,	// (0x00037396) dia3_listrow_pane_ParamLimits

0x9b4c,	// (0x00037872) main_phob2_pane

0x8ae2,	// (0x00036808) cell_tport_appsw_pane_cp02_ParamLimits

0x8ae2,	// (0x00036808) cell_tport_appsw_pane_cp02

0x8af6,	// (0x0003681c) cell_tport_appsw_pane_cp03_ParamLimits

0x8af6,	// (0x0003681c) cell_tport_appsw_pane_cp03

0x9b4c,	// (0x00037872) phob2_contact_card_pane

0x9b4c,	// (0x00037872) phob2_listscroll_pane

0xef85,	// (0x0003ccab) phob2_list_pane

0xef8d,	// (0x0003ccb3) scroll_pane_cp034

0x98c0,	// (0x000375e6) phob2_cc_data_pane_ParamLimits

0x98c0,	// (0x000375e6) phob2_cc_data_pane

0x98df,	// (0x00037605) phob2_cc_listscroll_pane_ParamLimits

0x98df,	// (0x00037605) phob2_cc_listscroll_pane

0x9444,	// (0x0003716a) list_double_large_graphic_phob2_pane_ParamLimits

0x9444,	// (0x0003716a) list_double_large_graphic_phob2_pane

0x98fd,	// (0x00037623) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98fd,	// (0x00037623) list_double_large_graphic_phob2_pane_g1

0x9913,	// (0x00037639) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9913,	// (0x00037639) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003dc4a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003dc4a) list_double_large_graphic_phob2_pane_g

0x991f,	// (0x00037645) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x991f,	// (0x00037645) list_double_large_graphic_phob2_pane_t1

0x9934,	// (0x0003765a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9934,	// (0x0003765a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003dc4f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003dc4f) list_double_large_graphic_phob2_pane_t

0x9b4c,	// (0x00037872) list_highlight_pane_cp024

0x9946,	// (0x0003766c) phob2_cc_button_pane

0x994e,	// (0x00037674) phob2_cc_data_pane_g1_ParamLimits

0x994e,	// (0x00037674) phob2_cc_data_pane_g1

0x9963,	// (0x00037689) phob2_cc_data_pane_g2_ParamLimits

0x9963,	// (0x00037689) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003dc54) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003dc54) phob2_cc_data_pane_g

0x9973,	// (0x00037699) phob2_cc_data_pane_t1_ParamLimits

0x9973,	// (0x00037699) phob2_cc_data_pane_t1

0x998b,	// (0x000376b1) phob2_cc_data_pane_t2_ParamLimits

0x998b,	// (0x000376b1) phob2_cc_data_pane_t2

0x99a3,	// (0x000376c9) phob2_cc_data_pane_t3_ParamLimits

0x99a3,	// (0x000376c9) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003dc59) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003dc59) phob2_cc_data_pane_t

0xef95,	// (0x0003ccbb) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0003ccbb) phob2_cc_list_pane

0xd5ad,	// (0x0003b2d3) scroll_pane_cp035_ParamLimits

0xd5ad,	// (0x0003b2d3) scroll_pane_cp035

0xa6d7,	// (0x000383fd) bg_button_pane_cp033

0xefa1,	// (0x0003ccc7) phob2_cc_button_pane_g1

0xefad,	// (0x0003ccd3) phob2_cc_button_pane_t1

0xefc2,	// (0x0003cce8) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003dc60) phob2_cc_button_pane_t

0x99bb,	// (0x000376e1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99bb,	// (0x000376e1) list_double_large_graphic_phob2_cc_pane

0x99cd,	// (0x000376f3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99cd,	// (0x000376f3) list_double_large_graphic_phob2_cc_pane_g1

0x99d9,	// (0x000376ff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99d9,	// (0x000376ff) list_double_large_graphic_phob2_cc_pane_g2

0x99e5,	// (0x0003770b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99e5,	// (0x0003770b) list_double_large_graphic_phob2_cc_pane_g3

0x99f1,	// (0x00037717) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99f1,	// (0x00037717) list_double_large_graphic_phob2_cc_pane_g4

0x99fd,	// (0x00037723) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99fd,	// (0x00037723) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003dc65) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003dc65) list_double_large_graphic_phob2_cc_pane_g

0x9a09,	// (0x0003772f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a09,	// (0x0003772f) list_double_large_graphic_phob2_cc_pane_t1

0x9a32,	// (0x00037758) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a32,	// (0x00037758) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003dc70) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003dc70) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0003ccfa) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0003ccfa) list_highlight_pane_cp025

0xa6d7,	// (0x000383fd) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0003ccc7) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0003ccd3) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0003cce8) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003dc60) phob2_cc_button_pane_t_ParamLimits

0x194b,	// (0x0002f671) popup_wgtman_window

0xd3c2,	// (0x0003b0e8) scroll_pane_cp038

0x93bd,	// (0x000370e3) wgtman_btn_pane_cp_01_ParamLimits

0x93bd,	// (0x000370e3) wgtman_btn_pane_cp_01

0xefe2,	// (0x0003cd08) wgtman_content_pane

0xefeb,	// (0x0003cd11) wgtman_heading_pane

0x9b4c,	// (0x00037872) bg_heading_pane_cp02

0xeff4,	// (0x0003cd1a) wgtman_heading_pane_g1

0xeffc,	// (0x0003cd22) wgtman_heading_pane_t1

0xf00a,	// (0x0003cd30) scroll_pane_cp036

0xf012,	// (0x0003cd38) wgtman_list_pane

0xf01a,	// (0x0003cd40) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0003cd40) wgtman_list_pane_t1

0x6591,	// (0x000342b7) cam4_grid_pane

0x6f49,	// (0x00034c6f) bg_button_pane_cp015_ParamLimits

0x6f5b,	// (0x00034c81) bg_button_pane_cp016_ParamLimits

0x6f6e,	// (0x00034c94) bg_button_pane_cp017_ParamLimits

0x6fc6,	// (0x00034cec) popup_vitu2_query_window_g3_ParamLimits

0x6fc6,	// (0x00034cec) popup_vitu2_query_window_g3

0x7083,	// (0x00034da9) popup_vitu2_query_window_t6_ParamLimits

0x7083,	// (0x00034da9) popup_vitu2_query_window_t6

0x70ae,	// (0x00034dd4) popup_vitu2_query_window_t7_ParamLimits

0x70ae,	// (0x00034dd4) popup_vitu2_query_window_t7

0xe506,	// (0x0003c22c) cam4_grid_pane_g1

0xe50f,	// (0x0003c235) cam4_grid_pane_g2

0xf034,	// (0x0003cd5a) cam4_grid_pane_g3

0xf03d,	// (0x0003cd63) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003dc75) cam4_grid_pane_g

0x279c,	// (0x000304c2) aid_placing_vt_slider_lsc_ParamLimits

0x2aa7,	// (0x000307cd) vidtel_button_pane_ParamLimits

0x2aa7,	// (0x000307cd) vidtel_button_pane

0x9b4c,	// (0x00037872) bg_button_pane_cp034

0x9a5b,	// (0x00037781) vidtel_button_pane_g1

0xf048,	// (0x0003cd6e) vidtel_button_pane_t1

0xd4f4,	// (0x0003b21a) aid_size_vtel_slider_touch

0xd5ad,	// (0x0003b2d3) scroll_pane_cp039

0xdea5,	// (0x0003bbcb) ncim_query_button_pane_cp01_ParamLimits

0xdec4,	// (0x0003bbea) ncimui_query_pane_g1_ParamLimits

0xa6d7,	// (0x000383fd) input_focus_pane_cp012_ParamLimits

0xdee9,	// (0x0003bc0f) ncim_query_entry_pane_t1_ParamLimits

0xd5ad,	// (0x0003b2d3) scroll_pane_cp039_ParamLimits

0xae05,	// (0x00038b2b) navi_pane_bcale_mc_g1

0xae0d,	// (0x00038b33) navi_pane_bcale_mc_t1

0xe466,	// (0x0003c18c) main_sp_fs_email_pane_g1

0xe472,	// (0x0003c198) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003da0b) main_sp_fs_email_pane_g

0xe8fc,	// (0x0003c622) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8fc,	// (0x0003c622) list_single_cale_mrui_row_pane_g3

0x8fcf,	// (0x00036cf5) list_single_recal_day_pane_g5_event_pane

0xeadb,	// (0x0003c801) list_single_recal_day_pane_g7

0xf05e,	// (0x0003cd84) list_recal_day_event_pane_cp01

0xf067,	// (0x0003cd8d) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003cd95) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003cd9d) list_recal_vselct_pane_cp01

0xd516,	// (0x0003b23c) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003cda7) list_recal_day_event_pane_cp01_t1

0xeae3,	// (0x0003c809) list_single_recal_day_pane_t1_ParamLimits

0xeaf5,	// (0x0003c81b) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003db63) list_single_recal_day_pane_t_ParamLimits

0xa1c4,	// (0x00037eea) bg_notes_pane_ParamLimits

0xa267,	// (0x00037f8d) list_notes_pane_ParamLimits

0x1bbd,	// (0x0002f8e3) scroll_pane_cp06_ParamLimits

0xa289,	// (0x00037faf) main_notes_pane_ParamLimits

0x9b4c,	// (0x00037872) main_welc_pane

0x9a63,	// (0x00037789) main_welc_body_pane_ParamLimits

0x9a63,	// (0x00037789) main_welc_body_pane

0x9a81,	// (0x000377a7) main_welc_opti_pane_ParamLimits

0x9a81,	// (0x000377a7) main_welc_opti_pane

0x9ac6,	// (0x000377ec) main_welc_pane_t1_ParamLimits

0x9ac6,	// (0x000377ec) main_welc_pane_t1

0x9ae4,	// (0x0003780a) main_welc_body_row_pane_ParamLimits

0x9ae4,	// (0x0003780a) main_welc_body_row_pane

0xd8b7,	// (0x0003b5dd) main_welc_opti_row_pane_ParamLimits

0xd8b7,	// (0x0003b5dd) main_welc_opti_row_pane

0xf08f,	// (0x0003cdb5) main_welc_opti_row_pane_g1

0x9af8,	// (0x0003781e) main_welc_opti_row_pane_t1

0xf097,	// (0x0003cdbd) main_welc_body_row_pane_t1

0xed70,	// (0x0003ca96) popup_notif_wgt_heading_pane

0xed8a,	// (0x0003cab0) aid_size_list_notif_wgt_del_ParamLimits

0xed97,	// (0x0003cabd) list_notif_wgt_row_pane_g1_ParamLimits

0xeda3,	// (0x0003cac9) list_notif_wgt_row_pane_g2_ParamLimits

0xedb7,	// (0x0003cadd) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003dbca) list_notif_wgt_row_pane_g_ParamLimits

0xedc4,	// (0x0003caea) list_notif_wgt_row_pane_t1_ParamLimits

0xedda,	// (0x0003cb00) list_notif_wgt_row_pane_t2_ParamLimits

0xedec,	// (0x0003cb12) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003dbd1) list_notif_wgt_row_pane_t_ParamLimits

0x9456,	// (0x0003717c) listrow_wgtman_pane_g1_ParamLimits

0x9463,	// (0x00037189) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003dbfa) listrow_wgtman_pane_g_ParamLimits

0x9481,	// (0x000371a7) listrow_wgtman_pane_t1_ParamLimits

0x9499,	// (0x000371bf) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003dbff) listrow_wgtman_pane_t_ParamLimits

0x94bf,	// (0x000371e5) wait_bar_pane_cp09_ParamLimits

0x9b4c,	// (0x00037872) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003cdcc) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003cdd4) popup_notif_wgt_heading_pane_t1

0x9b4c,	// (0x00037872) main_vids_pane

0x9b4c,	// (0x00037872) vids_listscroll_pane

0x9b07,	// (0x0003782d) scroll_pane_cp040

0x9b4c,	// (0x00037872) vids_list_pane

0x9b12,	// (0x00037838) vids_list_double_pane_ParamLimits

0x9b12,	// (0x00037838) vids_list_double_pane

0x9b23,	// (0x00037849) vids_list_double_pane_g1

0x9b2c,	// (0x00037852) vids_list_double_pane_t1

0x9b3c,	// (0x00037862) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003dc83) vids_list_double_pane_t

0x193d,	// (0x0002f663) main_ncimui_pane_ParamLimits

0x7c44,	// (0x0003596a) main_ncimui_pane_g1_ParamLimits

0x7c50,	// (0x00035976) main_ncimui_pane_g2_ParamLimits

0x7c50,	// (0x00035976) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003d910) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003d910) main_ncimui_pane_g

0x9a9c,	// (0x000377c2) main_welc_pane_g1_ParamLimits

0x9a9c,	// (0x000377c2) main_welc_pane_g1

0x9ab1,	// (0x000377d7) main_welc_pane_g2_ParamLimits

0x9ab1,	// (0x000377d7) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003dc7e) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003dc7e) main_welc_pane_g

0xa1c4,	// (0x00037eea) listscroll_mce_pane_ParamLimits

0xaf5a,	// (0x00038c80) wait_bar_pane_cp10

0xc3d5,	// (0x0003a0fb) main_cale_day_pane_ParamLimits

0xc3d5,	// (0x0003a0fb) main_cale_week_pane_ParamLimits

0xa1c4,	// (0x00037eea) main_messa_pane_ParamLimits

0x5b4c,	// (0x00033872) main_clock2_btn_pane_ParamLimits

0x5b4c,	// (0x00033872) main_clock2_btn_pane

0xcc09,	// (0x0003a92f) main_clock2_btn_pane_cp01_ParamLimits

0xcc09,	// (0x0003a92f) main_clock2_btn_pane_cp01

0xe888,	// (0x0003c5ae) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0003cb48) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003dbd8) main_cf0_pane_g

0x9692,	// (0x000373b8) area_left_week_number_pane_ParamLimits

0x969e,	// (0x000373c4) area_top_day_name_pane_ParamLimits

0x96b1,	// (0x000373d7) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0003cc70) grid_month_view_pane_ParamLimits

0xef58,	// (0x0003cc7e) frm_month_g1_ParamLimits

0x9732,	// (0x00037458) frm_month_g2_ParamLimits

0x9745,	// (0x0003746b) frm_month_g3_ParamLimits

0x9758,	// (0x0003747e) frm_month_g4_ParamLimits

0x976b,	// (0x00037491) frm_month_g5_ParamLimits

0x977e,	// (0x000374a4) frm_month_g6_ParamLimits

0x9791,	// (0x000374b7) frm_month_g7_ParamLimits

0xef65,	// (0x0003cc8b) frm_month_g8_ParamLimits

0x97a4,	// (0x000374ca) frm_month_g9_ParamLimits

0x97b4,	// (0x000374da) frm_month_g10_ParamLimits

0x97c4,	// (0x000374ea) frm_month_g11_ParamLimits

0x97d4,	// (0x000374fa) frm_month_g12_ParamLimits

0x97e6,	// (0x0003750c) frm_month_g13_ParamLimits

0x97f8,	// (0x0003751e) frm_month_g14_ParamLimits

0x980c,	// (0x00037532) frm_month_g15_ParamLimits

0x9820,	// (0x00037546) frm_month_g16_ParamLimits

0xff03,	// (0x0003dc29) frm_month_g_ParamLimits

0xef72,	// (0x0003cc98) cell_top_day_name_pane_t1_ParamLimits

0x9834,	// (0x0003755a) cell_area_left_week_number_pane_g1_ParamLimits

0x9840,	// (0x00037566) cell_area_left_week_number_pane_t1_ParamLimits

0xca55,	// (0x0003a77b) cell_month_view_pane_g1_ParamLimits

0x9853,	// (0x00037579) cell_month_view_pane_t1_ParamLimits

0xa1bc,	// (0x00037ee2) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003cde2) main_clock2_btn_pane_t1

0xa6d7,	// (0x000383fd) listscroll_cmail_pane_ParamLimits

0xe466,	// (0x0003c18c) main_sp_fs_email_pane_g1_ParamLimits

0xe472,	// (0x0003c198) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003da0b) main_sp_fs_email_pane_g_ParamLimits

0xea4b,	// (0x0003c771) list_recal_day_pane_ParamLimits

0xea5c,	// (0x0003c782) mian_recal_day_pane_t1

0x874b,	// (0x00036471) list_single_dyc_row_text_pane_t4_ParamLimits

0x874b,	// (0x00036471) list_single_dyc_row_text_pane_t4

0x8794,	// (0x000364ba) list_single_dyc_row_text_pane_t5_ParamLimits

0x8794,	// (0x000364ba) list_single_dyc_row_text_pane_t5

0xe52a,	// (0x0003c250) list_single_dyc_row_text_pane_t6_ParamLimits

0xe52a,	// (0x0003c250) list_single_dyc_row_text_pane_t6

0x3781,	// (0x000314a7) aid_mgn_list_cale_time_pane

0x193d,	// (0x0002f663) main_gallery2_pane_ParamLimits

0xcc1f,	// (0x0003a945) main_clock2_pane_cp01_t1

0xcc2f,	// (0x0003a955) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003d4ea) main_clock2_pane_cp01_t

0x1f54,	// (0x0002fc7a) cale_week_scroll_pane_g16_ParamLimits

0x1f54,	// (0x0002fc7a) cale_week_scroll_pane_g16

0xa44e,	// (0x00038174) vorec_slider_pane

0xf048,	// (0x0003cd6e) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
