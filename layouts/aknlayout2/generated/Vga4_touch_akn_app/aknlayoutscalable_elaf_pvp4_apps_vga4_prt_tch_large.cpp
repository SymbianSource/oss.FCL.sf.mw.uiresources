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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00068ae3 };

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
0x7321,	// (0x0006fe04) Screen

0x732d,	// (0x0006fe10) application_window

0x7381,	// (0x0006fe64) area_bottom_pane_ParamLimits

0x7381,	// (0x0006fe64) area_bottom_pane

0x73db,	// (0x0006febe) area_top_pane_ParamLimits

0x73db,	// (0x0006febe) area_top_pane

0x743f,	// (0x0006ff22) call_video_uplink_pane_ParamLimits

0x743f,	// (0x0006ff22) call_video_uplink_pane

0x747c,	// (0x0006ff5f) main_pane_ParamLimits

0x747c,	// (0x0006ff5f) main_pane

0x1749,	// (0x0006a22c) context_pane

0xa4b8,	// (0x00072f9b) navi_pane

0xa4dc,	// (0x00072fbf) popup_cale_events_window_ParamLimits

0xa4dc,	// (0x00072fbf) popup_cale_events_window

0x175c,	// (0x0006a23f) popup_mup_playback_window

0xa4f4,	// (0x00072fd7) signal_pane

0x4d61,	// (0x0006d844) main_browser_pane

0x028b,	// (0x00068d6e) main_burst_pane

0xa327,	// (0x00072e0a) main_calc_pane

0x028b,	// (0x00068d6e) main_cale_day_pane

0x4d61,	// (0x0006d844) main_cale_month_pane

0x028b,	// (0x00068d6e) main_cale_week_pane

0x028b,	// (0x00068d6e) main_call_pane

0x4a33,	// (0x0006d516) main_call_poc_pane

0x028b,	// (0x00068d6e) main_camera_pane

0x028b,	// (0x00068d6e) main_chi_dic_pane

0x012d,	// (0x00068c10) main_clock_pane

0x4a33,	// (0x0006d516) main_fmradio_pane

0x028b,	// (0x00068d6e) main_graph_messa_pane

0x4a33,	// (0x0006d516) main_help_pane

0x4d61,	// (0x0006d844) main_im_pane

0x4c8e,	// (0x0006d771) main_image_pane_ParamLimits

0x4c8e,	// (0x0006d771) main_image_pane

0x4a33,	// (0x0006d516) main_location2_pane

0x028b,	// (0x00068d6e) main_location_pane

0x4a33,	// (0x0006d516) main_messa_pane

0x4a33,	// (0x0006d516) main_mp2_pane

0x028b,	// (0x00068d6e) main_mp_pane

0x4a33,	// (0x0006d516) main_msg_pane

0x4a33,	// (0x0006d516) main_mup_eq_pane

0x4a33,	// (0x0006d516) main_mup_pane

0x4d61,	// (0x0006d844) main_notes_pane

0x4a33,	// (0x0006d516) main_pec_pane

0x4a33,	// (0x0006d516) main_phob_pane

0x4a33,	// (0x0006d516) main_pinb_pane

0x4a33,	// (0x0006d516) main_postcard_pane

0x4a33,	// (0x0006d516) main_qdial_pane

0x028b,	// (0x00068d6e) main_skin_pane

0x4a33,	// (0x0006d516) main_smil2_pane

0x028b,	// (0x00068d6e) main_smil_pane

0x028b,	// (0x00068d6e) main_video_pane

0x028b,	// (0x00068d6e) main_video_tele_pane

0x4c8e,	// (0x0006d771) main_viewer_pane_ParamLimits

0x4c8e,	// (0x0006d771) main_viewer_pane

0x028b,	// (0x00068d6e) main_vorec_pane

0xa367,	// (0x00072e4a) popup_blid_sat_info_window_ParamLimits

0xa367,	// (0x00072e4a) popup_blid_sat_info_window

0xa38d,	// (0x00072e70) popup_dyc_status_message_window_ParamLimits

0xa38d,	// (0x00072e70) popup_dyc_status_message_window

0xa39d,	// (0x00072e80) popup_grid_large_graphic_window_ParamLimits

0xa39d,	// (0x00072e80) popup_grid_large_graphic_window

0xa432,	// (0x00072f15) popup_loc_request_window_ParamLimits

0xa432,	// (0x00072f15) popup_loc_request_window

0xa48c,	// (0x00072f6f) popup_wml_address_window_ParamLimits

0xa48c,	// (0x00072f6f) popup_wml_address_window

0xa1ff,	// (0x00072ce2) call_muted_g1

0x9ebe,	// (0x000729a1) popup_call_audio_conf_window_ParamLimits

0x9ebe,	// (0x000729a1) popup_call_audio_conf_window

0xa20f,	// (0x00072cf2) popup_call_audio_first_window_ParamLimits

0xa20f,	// (0x00072cf2) popup_call_audio_first_window

0xa24f,	// (0x00072d32) popup_call_audio_in_window_ParamLimits

0xa24f,	// (0x00072d32) popup_call_audio_in_window

0xa273,	// (0x00072d56) popup_call_audio_out_window_ParamLimits

0xa273,	// (0x00072d56) popup_call_audio_out_window

0xa295,	// (0x00072d78) popup_call_audio_second_window_ParamLimits

0xa295,	// (0x00072d78) popup_call_audio_second_window

0xa2c5,	// (0x00072da8) popup_call_audio_wait_window_ParamLimits

0xa2c5,	// (0x00072da8) popup_call_audio_wait_window

0xa2e6,	// (0x00072dc9) popup_number_entry_window_ParamLimits

0xa2e6,	// (0x00072dc9) popup_number_entry_window

0x4030,	// (0x0006cb13) bg_popup_call_pane_cp05_ParamLimits

0x4030,	// (0x0006cb13) bg_popup_call_pane_cp05

0x4050,	// (0x0006cb33) popup_number_entry_window_t1

0x4063,	// (0x0006cb46) popup_number_entry_window_t2

0x4075,	// (0x0006cb58) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00077bbb) popup_number_entry_window_t

0x40bc,	// (0x0006cb9f) text_title_cp2

0x40cf,	// (0x0006cbb2) bg_popup_call_pane_cp_ParamLimits

0x40cf,	// (0x0006cbb2) bg_popup_call_pane_cp

0x40dd,	// (0x0006cbc0) call_thumbnail_pane

0x40e5,	// (0x0006cbc8) popup_call_audio_in_window_g1_ParamLimits

0x40e5,	// (0x0006cbc8) popup_call_audio_in_window_g1

0x40f1,	// (0x0006cbd4) popup_call_audio_in_window_g2_ParamLimits

0x40f1,	// (0x0006cbd4) popup_call_audio_in_window_g2

0x40fd,	// (0x0006cbe0) popup_call_audio_in_window_g3_ParamLimits

0x40fd,	// (0x0006cbe0) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00077bc4) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00077bc4) popup_call_audio_in_window_g

0x4109,	// (0x0006cbec) popup_call_audio_in_window_t1_ParamLimits

0x4109,	// (0x0006cbec) popup_call_audio_in_window_t1

0x4125,	// (0x0006cc08) popup_call_audio_in_window_t2_ParamLimits

0x4125,	// (0x0006cc08) popup_call_audio_in_window_t2

0x4141,	// (0x0006cc24) popup_call_audio_in_window_t3_ParamLimits

0x4141,	// (0x0006cc24) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00077bcb) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00077bcb) popup_call_audio_in_window_t

0x40cf,	// (0x0006cbb2) bg_popup_call_pane_cp01_ParamLimits

0x40cf,	// (0x0006cbb2) bg_popup_call_pane_cp01

0x40dd,	// (0x0006cbc0) call_thumbnail_pane_cp02

0x4154,	// (0x0006cc37) call_type_pane_cp022

0x415c,	// (0x0006cc3f) popup_call_audio_out_window_g1_ParamLimits

0x415c,	// (0x0006cc3f) popup_call_audio_out_window_g1

0x416e,	// (0x0006cc51) popup_call_audio_out_window_g2_ParamLimits

0x416e,	// (0x0006cc51) popup_call_audio_out_window_g2

0x417a,	// (0x0006cc5d) popup_call_audio_out_window_g3_ParamLimits

0x417a,	// (0x0006cc5d) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00077bd2) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00077bd2) popup_call_audio_out_window_g

0x418c,	// (0x0006cc6f) popup_call_audio_out_window_t1_ParamLimits

0x418c,	// (0x0006cc6f) popup_call_audio_out_window_t1

0x41a4,	// (0x0006cc87) popup_call_audio_out_window_t2_ParamLimits

0x41a4,	// (0x0006cc87) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00077bd9) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00077bd9) popup_call_audio_out_window_t

0x41b9,	// (0x0006cc9c) bg_popup_call_pane_ParamLimits

0x41b9,	// (0x0006cc9c) bg_popup_call_pane

0x764d,	// (0x00070130) call_thumbnail_pane_cp_ParamLimits

0x764d,	// (0x00070130) call_thumbnail_pane_cp

0x423d,	// (0x0006cd20) call_type_pane_cp01_ParamLimits

0x423d,	// (0x0006cd20) call_type_pane_cp01

0x483c,	// (0x0006d31f) popup_call_audio_first_window_g1_ParamLimits

0x483c,	// (0x0006d31f) popup_call_audio_first_window_g1

0x4888,	// (0x0006d36b) popup_call_audio_first_window_g2_ParamLimits

0x4888,	// (0x0006d36b) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00077bde) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00077bde) popup_call_audio_first_window_g

0x48cc,	// (0x0006d3af) popup_call_audio_first_window_t1_ParamLimits

0x48cc,	// (0x0006d3af) popup_call_audio_first_window_t1

0x4978,	// (0x0006d45b) popup_call_audio_first_window_t4_ParamLimits

0x4978,	// (0x0006d45b) popup_call_audio_first_window_t4

0x4a04,	// (0x0006d4e7) popup_call_audio_first_window_t5_ParamLimits

0x4a04,	// (0x0006d4e7) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00077be3) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00077be3) popup_call_audio_first_window_t

0x4a33,	// (0x0006d516) bg_popup_call_pane_cp02

0x4a3d,	// (0x0006d520) call_type_pane_cp023

0x4a45,	// (0x0006d528) popup_call_audio_wait_window_g1

0x4a4d,	// (0x0006d530) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00077bea) popup_call_audio_wait_window_g

0x4a55,	// (0x0006d538) popup_call_audio_wait_window_t3

0x4a63,	// (0x0006d546) bg_popup_call_pane_cp03_ParamLimits

0x4a63,	// (0x0006d546) bg_popup_call_pane_cp03

0x4ac3,	// (0x0006d5a6) call_thumbnail_pane_cp011_ParamLimits

0x4ac3,	// (0x0006d5a6) call_thumbnail_pane_cp011

0x4acf,	// (0x0006d5b2) call_type_pane_cp034_ParamLimits

0x4acf,	// (0x0006d5b2) call_type_pane_cp034

0x4b0b,	// (0x0006d5ee) popup_call_audio_second_window_g1_ParamLimits

0x4b0b,	// (0x0006d5ee) popup_call_audio_second_window_g1

0x4b47,	// (0x0006d62a) popup_call_audio_second_window_g2_ParamLimits

0x4b47,	// (0x0006d62a) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00077bef) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00077bef) popup_call_audio_second_window_g

0x4b83,	// (0x0006d666) popup_call_audio_second_window_t1_ParamLimits

0x4b83,	// (0x0006d666) popup_call_audio_second_window_t1

0x4c04,	// (0x0006d6e7) popup_call_audio_second_window_t2_ParamLimits

0x4c04,	// (0x0006d6e7) popup_call_audio_second_window_t2

0x4c3a,	// (0x0006d71d) popup_call_audio_second_window_t3_ParamLimits

0x4c3a,	// (0x0006d71d) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00077bf4) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00077bf4) popup_call_audio_second_window_t

0x4a33,	// (0x0006d516) bg_popup_call_pane_cp04

0x4c70,	// (0x0006d753) list_conf_pane

0x4c78,	// (0x0006d75b) popup_call_audio_conf_window_t1

0x4c86,	// (0x0006d769) call_thumbnail_pane_g1

0x4c8e,	// (0x0006d771) bg_pinb_pane_ParamLimits

0x4c8e,	// (0x0006d771) bg_pinb_pane

0x4c9c,	// (0x0006d77f) find_pinb_pane

0x4ca5,	// (0x0006d788) listscroll_pinb_pane_ParamLimits

0x4ca5,	// (0x0006d788) listscroll_pinb_pane

0x4cb4,	// (0x0006d797) pinb_bg_pane_g1

0x7671,	// (0x00070154) pinb_bg_pane_g2

0x767d,	// (0x00070160) pinb_bg_pane_g3

0x7689,	// (0x0007016c) pinb_bg_pane_g4

0x7695,	// (0x00070178) pinb_bg_pane_g5

0x76a1,	// (0x00070184) pinb_bg_pane_g6

0x76ac,	// (0x0007018f) pinb_bg_pane_g7

0x76b7,	// (0x0007019a) pinb_bg_pane_g8

0x76c2,	// (0x000701a5) pinb_bg_pane_g9

0x76cc,	// (0x000701af) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00077bfb) pinb_bg_pane_g

0x76e9,	// (0x000701cc) grid_pinb_pane

0x76f4,	// (0x000701d7) list_pinb_pane

0x76ff,	// (0x000701e2) scroll_pane_cp01_ParamLimits

0x76ff,	// (0x000701e2) scroll_pane_cp01

0x4cbe,	// (0x0006d7a1) find_pinb_pane_g1_ParamLimits

0x4cbe,	// (0x0006d7a1) find_pinb_pane_g1

0x4cd6,	// (0x0006d7b9) find_pinb_pane_t1

0x4ce8,	// (0x0006d7cb) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00077c15) find_pinb_pane_t

0x4cfd,	// (0x0006d7e0) input_focus_pane_cp01_ParamLimits

0x4cfd,	// (0x0006d7e0) input_focus_pane_cp01

0x7711,	// (0x000701f4) cell_pinb_pane_ParamLimits

0x7711,	// (0x000701f4) cell_pinb_pane

0x772f,	// (0x00070212) cell_pinb_pane_g1_ParamLimits

0x772f,	// (0x00070212) cell_pinb_pane_g1

0x7744,	// (0x00070227) cell_pinb_pane_g2_ParamLimits

0x7744,	// (0x00070227) cell_pinb_pane_g2

0x4d09,	// (0x0006d7ec) cell_pinb_pane_g3_ParamLimits

0x4d09,	// (0x0006d7ec) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00077c1a) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00077c1a) cell_pinb_pane_g

0x4a33,	// (0x0006d516) grid_highlight_pane_cp01

0x7750,	// (0x00070233) list_pinb_item_pane_ParamLimits

0x7750,	// (0x00070233) list_pinb_item_pane

0x4a33,	// (0x0006d516) list_highlight_pane_cp02

0x776b,	// (0x0007024e) list_pinb_item_pane_g1_ParamLimits

0x776b,	// (0x0007024e) list_pinb_item_pane_g1

0x7778,	// (0x0007025b) list_pinb_item_pane_g2_ParamLimits

0x7778,	// (0x0007025b) list_pinb_item_pane_g2

0x7784,	// (0x00070267) list_pinb_item_pane_g3_ParamLimits

0x7784,	// (0x00070267) list_pinb_item_pane_g3

0x7795,	// (0x00070278) list_pinb_item_pane_g4_ParamLimits

0x7795,	// (0x00070278) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00077c21) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00077c21) list_pinb_item_pane_g

0x77a1,	// (0x00070284) list_pinb_item_pane_t1_ParamLimits

0x77a1,	// (0x00070284) list_pinb_item_pane_t1

0x77d2,	// (0x000702b5) calc_display_pane

0x77f0,	// (0x000702d3) calc_paper_pane

0x780c,	// (0x000702ef) grid_calc_pane

0x4a33,	// (0x0006d516) bg_list_pane_cp01

0x7838,	// (0x0007031b) clock_g1

0x7840,	// (0x00070323) clock_g2

0x0001,

0xf147,	// (0x00077c2a) clock_g

0x784a,	// (0x0007032d) clock_t1_ParamLimits

0x784a,	// (0x0007032d) clock_t1

0x785f,	// (0x00070342) clock_t2_ParamLimits

0x785f,	// (0x00070342) clock_t2

0x7871,	// (0x00070354) clock_t3_ParamLimits

0x7871,	// (0x00070354) clock_t3

0x7883,	// (0x00070366) clock_t4_ParamLimits

0x7883,	// (0x00070366) clock_t4

0x7895,	// (0x00070378) clock_t5_ParamLimits

0x7895,	// (0x00070378) clock_t5

0x78aa,	// (0x0007038d) clock_t6_ParamLimits

0x78aa,	// (0x0007038d) clock_t6

0x78bc,	// (0x0007039f) clock_t7_ParamLimits

0x78bc,	// (0x0007039f) clock_t7

0x78ce,	// (0x000703b1) clock_t8_ParamLimits

0x78ce,	// (0x000703b1) clock_t8

0x78e4,	// (0x000703c7) clock_t9_ParamLimits

0x78e4,	// (0x000703c7) clock_t9

0x0008,

0xf14c,	// (0x00077c2f) clock_t_ParamLimits

0xf14c,	// (0x00077c2f) clock_t

0x4d15,	// (0x0006d7f8) popup_clock_analogue_window_cp02

0x4d15,	// (0x0006d7f8) popup_clock_digital_window_cp01

0x4d1d,	// (0x0006d800) listscroll_help_pane

0x4a33,	// (0x0006d516) phob_pre_status_pane

0x4d27,	// (0x0006d80a) grid_qdial_pane

0x4a33,	// (0x0006d516) listscroll_mce_pane

0x4d31,	// (0x0006d814) bg_notes_pane

0x4d3f,	// (0x0006d822) list_notes_pane

0x78fa,	// (0x000703dd) scroll_pane_cp06

0x4d4d,	// (0x0006d830) bg_calc_paper_pane

0x7909,	// (0x000703ec) list_calc_pane

0x4d61,	// (0x0006d844) bg_calc_display_pane

0x7923,	// (0x00070406) calc_display_pane_t1

0x7938,	// (0x0007041b) calc_display_pane_t2

0x794d,	// (0x00070430) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00077c42) calc_display_pane_t

0x795f,	// (0x00070442) cell_calc_pane_ParamLimits

0x795f,	// (0x00070442) cell_calc_pane

0x4d6d,	// (0x0006d850) bg_calc_paper_pane_g1

0x4d85,	// (0x0006d868) bg_calc_paper_pane_g2

0x4d79,	// (0x0006d85c) bg_calc_paper_pane_g3

0x4d9d,	// (0x0006d880) bg_calc_paper_pane_g4

0x4d91,	// (0x0006d874) bg_calc_paper_pane_g5

0x798e,	// (0x00070471) bg_calc_paper_pane_g6

0x799f,	// (0x00070482) bg_calc_paper_pane_g7

0x79b0,	// (0x00070493) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00077c49) bg_calc_paper_pane_g

0x79c3,	// (0x000704a6) calc_bg_paper_pane_g9

0x79d6,	// (0x000704b9) list_calc_item_pane_ParamLimits

0x79d6,	// (0x000704b9) list_calc_item_pane

0x4da9,	// (0x0006d88c) list_calc_item_pane_g1

0x79f7,	// (0x000704da) list_calc_item_pane_t1_ParamLimits

0x79f7,	// (0x000704da) list_calc_item_pane_t1

0x7a09,	// (0x000704ec) list_calc_item_pane_t2_ParamLimits

0x7a09,	// (0x000704ec) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00077c5a) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00077c5a) list_calc_item_pane_t

0x4db6,	// (0x0006d899) cell_calc_pane_g1

0x4dc0,	// (0x0006d8a3) grid_highlight_pane_cp02

0x4deb,	// (0x0006d8ce) bg_calc_display_pane_g1

0x7a39,	// (0x0007051c) bg_calc_display_pane_g2

0x4de2,	// (0x0006d8c5) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00077c64) bg_calc_display_pane_g

0x7a43,	// (0x00070526) cell_qdial_pane_ParamLimits

0x7a43,	// (0x00070526) cell_qdial_pane

0x7a59,	// (0x0007053c) cell_qdial_pane_g1_ParamLimits

0x7a59,	// (0x0007053c) cell_qdial_pane_g1

0x7a66,	// (0x00070549) cell_qdial_pane_g2_ParamLimits

0x7a66,	// (0x00070549) cell_qdial_pane_g2

0x4df4,	// (0x0006d8d7) cell_qdial_pane_g3_ParamLimits

0x4df4,	// (0x0006d8d7) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00077c6b) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00077c6b) cell_qdial_pane_g

0x7a84,	// (0x00070567) cell_qdial_pane_t1_ParamLimits

0x7a84,	// (0x00070567) cell_qdial_pane_t1

0x7a9c,	// (0x0007057f) cell_qdial_pane_t2_ParamLimits

0x7a9c,	// (0x0007057f) cell_qdial_pane_t2

0x7aaf,	// (0x00070592) cell_qdial_pane_t3_ParamLimits

0x7aaf,	// (0x00070592) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00077c74) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00077c74) cell_qdial_pane_t

0x4a33,	// (0x0006d516) grid_highlight_pane_cp04

0x4e00,	// (0x0006d8e3) thumbnail_qdial_pane_ParamLimits

0x4e00,	// (0x0006d8e3) thumbnail_qdial_pane

0x4e5c,	// (0x0006d93f) list_help_pane

0x4e65,	// (0x0006d948) scroll_pane_cp02

0x7ac2,	// (0x000705a5) help_list_pane_t1_ParamLimits

0x7ac2,	// (0x000705a5) help_list_pane_t1

0x7ae9,	// (0x000705cc) bg_notes_pane_g2

0x7af1,	// (0x000705d4) bg_notes_pane_g3

0x7af9,	// (0x000705dc) notes_bg_pane_g1

0x7b01,	// (0x000705e4) notes_bg_pane_g4

0x7b09,	// (0x000705ec) notes_bg_pane_g5

0x7b11,	// (0x000705f4) notes_bg_pane_g6

0x7b19,	// (0x000705fc) notes_bg_pane_g7

0x7b21,	// (0x00070604) notes_bg_pane_g8

0x7b29,	// (0x0007060c) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00077c92) notes_bg_pane_g

0x7b31,	// (0x00070614) list_notes_text_pane_ParamLimits

0x7b31,	// (0x00070614) list_notes_text_pane

0x4e6e,	// (0x0006d951) list_notes_text_pane_g1

0x616d,	// (0x0006ec50) list_notes_text_pane_t1

0x4d61,	// (0x0006d844) listscroll_cale_week_pane

0x7b76,	// (0x00070659) bg_cale_heading_pane

0x4e88,	// (0x0006d96b) bg_cale_pane_cp01

0x7b92,	// (0x00070675) cale_week_corner_pane

0x7ba8,	// (0x0007068b) cale_week_day_heading_pane

0x7bc4,	// (0x000706a7) cale_week_scroll_pane_g1

0x7bdd,	// (0x000706c0) cale_week_scroll_pane_g2

0x7bee,	// (0x000706d1) cale_week_scroll_pane_g3

0x7bff,	// (0x000706e2) cale_week_scroll_pane_g4

0x7c10,	// (0x000706f3) cale_week_scroll_pane_g5

0x7c21,	// (0x00070704) cale_week_scroll_pane_g6

0x7c34,	// (0x00070717) cale_week_scroll_pane_g7

0x7c47,	// (0x0007072a) cale_week_scroll_pane_g8

0x7c5a,	// (0x0007073d) cale_week_scroll_pane_g9

0x7c6b,	// (0x0007074e) cale_week_scroll_pane_g10

0x7c7c,	// (0x0007075f) cale_week_scroll_pane_g11

0x7c8d,	// (0x00070770) cale_week_scroll_pane_g12

0x7c9e,	// (0x00070781) cale_week_scroll_pane_g13

0x7caf,	// (0x00070792) cale_week_scroll_pane_g14

0x7cc8,	// (0x000707ab) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00077ca1) cale_week_scroll_pane_g

0x7ce1,	// (0x000707c4) cale_week_time_pane

0x7cf4,	// (0x000707d7) grid_cale_week_pane

0x7d11,	// (0x000707f4) scroll_pane_cp08

0x7d2b,	// (0x0007080e) cell_cale_week_pane_ParamLimits

0x7d2b,	// (0x0007080e) cell_cale_week_pane

0x7d6d,	// (0x00070850) cale_week_day_heading_pane_t1

0x7d9a,	// (0x0007087d) cale_week_day_heading_pane_t2

0x7dc7,	// (0x000708aa) cale_week_day_heading_pane_t3

0x7df4,	// (0x000708d7) cale_week_day_heading_pane_t4

0x7e21,	// (0x00070904) cale_week_day_heading_pane_t5

0x7e4e,	// (0x00070931) cale_week_day_heading_pane_t6

0x7e7b,	// (0x0007095e) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00077cc0) cale_week_day_heading_pane_t

0x4eb3,	// (0x0006d996) bg_cale_side_pane

0x7ea8,	// (0x0007098b) cale_week_time_pane_t1

0x7ec0,	// (0x000709a3) cale_week_time_pane_t2

0x7ed8,	// (0x000709bb) cale_week_time_pane_t3

0x7ef0,	// (0x000709d3) cale_week_time_pane_t4

0x7f08,	// (0x000709eb) cale_week_time_pane_t5

0x7f20,	// (0x00070a03) cale_week_time_pane_t6

0x7f38,	// (0x00070a1b) cale_week_time_pane_t7

0x7f50,	// (0x00070a33) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00077ccf) cale_week_time_pane_t

0x7f6c,	// (0x00070a4f) cell_cale_week_pane_g2

0x7f85,	// (0x00070a68) cell_cale_week_pane_g3_ParamLimits

0x7f85,	// (0x00070a68) cell_cale_week_pane_g3

0x4ec1,	// (0x0006d9a4) grid_highlight_pane_cp07

0x4ec9,	// (0x0006d9ac) listscroll_gms_pane

0x4ed3,	// (0x0006d9b6) grid_gms_pane

0x4edc,	// (0x0006d9bf) listscroll_gms_pane_g1

0x4ee4,	// (0x0006d9c7) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00077ce0) listscroll_gms_pane_g

0x7f9d,	// (0x00070a80) scroll_pane_cp010

0x7fa8,	// (0x00070a8b) cell_gms_pane_ParamLimits

0x7fa8,	// (0x00070a8b) cell_gms_pane

0x7fbb,	// (0x00070a9e) cell_gms_pane_g1

0x4eec,	// (0x0006d9cf) cell_gms_pane_g2

0x4ef4,	// (0x0006d9d7) cell_gms_pane_g3

0x4efd,	// (0x0006d9e0) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00077ce5) cell_gms_pane_g

0x4f06,	// (0x0006d9e9) grid_highlight_pane_cp09

0xa1a7,	// (0x00072c8a) phob_pre_status_pane_g1

0xa1af,	// (0x00072c92) phob_pre_status_pane_g2

0xa1b7,	// (0x00072c9a) phob_pre_status_pane_g3

0xa1bf,	// (0x00072ca2) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000780d4) phob_pre_status_pane_g

0xa1cf,	// (0x00072cb2) phob_pre_status_pane_t1

0xa1df,	// (0x00072cc2) phob_pre_status_pane_t2

0xa1ef,	// (0x00072cd2) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000780df) phob_pre_status_pane_t

0x4a33,	// (0x0006d516) bg_list_pane_cp05

0x7fcb,	// (0x00070aae) grid_vorec_pane

0x7fd7,	// (0x00070aba) vorec_t1

0x7fe5,	// (0x00070ac8) vorec_t2

0x7ff3,	// (0x00070ad6) vorec_t3

0x8001,	// (0x00070ae4) vorec_t4

0x800f,	// (0x00070af2) vorec_t5

0x801d,	// (0x00070b00) vorec_t6

0x0006,

0xf20b,	// (0x00077cee) vorec_t

0x8039,	// (0x00070b1c) wait_bar_pane_cp01

0x8041,	// (0x00070b24) cell_vorec_pane_ParamLimits

0x8041,	// (0x00070b24) cell_vorec_pane

0x4f0e,	// (0x0006d9f1) cell_vorec_pane_g1

0x4a33,	// (0x0006d516) grid_highlight_pane_cp05

0x8064,	// (0x00070b47) cams_zoom_pane

0x8070,	// (0x00070b53) image_vga_pane

0x807f,	// (0x00070b62) main_camera_pane_g1

0x808d,	// (0x00070b70) main_camera_pane_g2

0x8099,	// (0x00070b7c) main_camera_pane_g3

0x80a7,	// (0x00070b8a) main_camera_pane_g4

0x80b5,	// (0x00070b98) main_camera_pane_g5

0x80c3,	// (0x00070ba6) main_camera_pane_g6

0x80d1,	// (0x00070bb4) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00077cfd) main_camera_pane_g

0x80df,	// (0x00070bc2) main_camera_pane_t1

0x80f1,	// (0x00070bd4) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00077d0e) main_camera_pane_t

0x8114,	// (0x00070bf7) cams_zoom_pane_cp_ParamLimits

0x8114,	// (0x00070bf7) cams_zoom_pane_cp

0x8138,	// (0x00070c1b) image_cif_pane_ParamLimits

0x8138,	// (0x00070c1b) image_cif_pane

0x8156,	// (0x00070c39) image_subqcif_pane

0x8160,	// (0x00070c43) main_video_pane_g1_ParamLimits

0x8160,	// (0x00070c43) main_video_pane_g1

0x8180,	// (0x00070c63) main_video_pane_g2_ParamLimits

0x8180,	// (0x00070c63) main_video_pane_g2

0x81b0,	// (0x00070c93) main_video_pane_g3_ParamLimits

0x81b0,	// (0x00070c93) main_video_pane_g3

0x81d9,	// (0x00070cbc) main_video_pane_g4_ParamLimits

0x81d9,	// (0x00070cbc) main_video_pane_g4

0x8202,	// (0x00070ce5) main_video_pane_g5_ParamLimits

0x8202,	// (0x00070ce5) main_video_pane_g5

0x4f24,	// (0x0006da07) main_video_pane_g6_ParamLimits

0x4f24,	// (0x0006da07) main_video_pane_g6

0x0006,

0xf230,	// (0x00077d13) main_video_pane_g_ParamLimits

0xf230,	// (0x00077d13) main_video_pane_g

0x8224,	// (0x00070d07) main_video_pane_t1_ParamLimits

0x8224,	// (0x00070d07) main_video_pane_t1

0x4f3e,	// (0x0006da21) cams_zoom_pane_g1

0x4f47,	// (0x0006da2a) cams_zoom_pane_g2

0x4f50,	// (0x0006da33) cams_zoom_pane_g3

0x4f59,	// (0x0006da3c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00077d22) cams_zoom_pane_g

0x826e,	// (0x00070d51) grid_cams_pane

0x827c,	// (0x00070d5f) linegrid_cams_pane

0x8288,	// (0x00070d6b) cell_cams_pane_ParamLimits

0x8288,	// (0x00070d6b) cell_cams_pane

0x4f62,	// (0x0006da45) cams_burst_image_pane

0x4f6a,	// (0x0006da4d) cell_cams_pane_g1

0x4a33,	// (0x0006d516) grid_highlight_pane_cp03

0x4db6,	// (0x0006d899) mp_bg_pane_g1

0x4a33,	// (0x0006d516) bg_list_pane_cp03

0x161b,	// (0x0006a0fe) bg_mp_pane

0x1623,	// (0x0006a106) grid_mp_pane

0x162b,	// (0x0006a10e) media_player_g1

0x1635,	// (0x0006a118) media_player_t1

0x1643,	// (0x0006a126) media_player_t2

0x1651,	// (0x0006a134) media_player_t3

0x165f,	// (0x0006a142) media_player_t4

0x166d,	// (0x0006a150) media_player_t5

0x167b,	// (0x0006a15e) media_player_t6

0x1689,	// (0x0006a16c) media_player_t7

0x0006,

0xf5db,	// (0x000780be) media_player_t

0x1697,	// (0x0006a17a) wait_bar_pane_cp02

0xf5c0,	// (0x000780a3) main_usb_pane_t

0xa19e,	// (0x00072c81) cell_mp_pane

0x4db6,	// (0x0006d899) cell_mp_pane_g1

0x4a33,	// (0x0006d516) grid_highlight_pane_cp06

0x5030,	// (0x0006db13) grid_skin_colour_pane

0x5038,	// (0x0006db1b) list_highlight_pane_cp03

0x829d,	// (0x00070d80) skin_g1

0x5040,	// (0x0006db23) skin_t1

0x504f,	// (0x0006db32) skin_t2

0x0001,

0xf274,	// (0x00077d57) skin_t

0x82a7,	// (0x00070d8a) cell_skin_colour_pane_ParamLimits

0x82a7,	// (0x00070d8a) cell_skin_colour_pane

0x505d,	// (0x0006db40) cell_skin_colour_pane_g1

0x8327,	// (0x00070e0a) call_video_g1_ParamLimits

0x8327,	// (0x00070e0a) call_video_g1

0x8337,	// (0x00070e1a) call_video_g2_ParamLimits

0x8337,	// (0x00070e1a) call_video_g2

0x0001,

0xf279,	// (0x00077d5c) call_video_g_ParamLimits

0xf279,	// (0x00077d5c) call_video_g

0x8387,	// (0x00070e6a) call_video_uplink_pane_cp1_ParamLimits

0x8387,	// (0x00070e6a) call_video_uplink_pane_cp1

0x506f,	// (0x0006db52) call_video_uplink_pane_cp2

0x8455,	// (0x00070f38) video_down_crop_pane_ParamLimits

0x8455,	// (0x00070f38) video_down_crop_pane

0x8547,	// (0x0007102a) video_down_pane_ParamLimits

0x8547,	// (0x0007102a) video_down_pane

0x5077,	// (0x0006db5a) video_down_subqcif_pane_ParamLimits

0x5077,	// (0x0006db5a) video_down_subqcif_pane

0x5091,	// (0x0006db74) video_down_subqcif_pane_cp_ParamLimits

0x5091,	// (0x0006db74) video_down_subqcif_pane_cp

0x50b9,	// (0x0006db9c) im_reading_pane_ParamLimits

0x50b9,	// (0x0006db9c) im_reading_pane

0x8664,	// (0x00071147) im_writing_pane_ParamLimits

0x8664,	// (0x00071147) im_writing_pane

0x8682,	// (0x00071165) im_reading_pane_t1

0x50d3,	// (0x0006dbb6) list_im_pane

0x50e4,	// (0x0006dbc7) scroll_pane_cp07

0x86c4,	// (0x000711a7) im_writing_pane_t1_ParamLimits

0x86c4,	// (0x000711a7) im_writing_pane_t1

0x50fd,	// (0x0006dbe0) im_writing_pane_t2_ParamLimits

0x50fd,	// (0x0006dbe0) im_writing_pane_t2

0x0001,

0xf283,	// (0x00077d66) im_writing_pane_t_ParamLimits

0xf283,	// (0x00077d66) im_writing_pane_t

0x4a33,	// (0x0006d516) input_focus_pane_cp04

0x4a33,	// (0x0006d516) input_focus_pane_cp05

0x86d6,	// (0x000711b9) list_im_single_pane_ParamLimits

0x86d6,	// (0x000711b9) list_im_single_pane

0x86ef,	// (0x000711d2) list_single_im_pane_t1

0xa162,	// (0x00072c45) blid_accuracy_pane

0xa16a,	// (0x00072c4d) blid_compass_pane

0xa174,	// (0x00072c57) main_location_t1

0xa182,	// (0x00072c65) main_location_t2

0xa190,	// (0x00072c73) main_location_t3

0x0002,

0xf5ea,	// (0x000780cd) main_location_t

0x4a33,	// (0x0006d516) aid_levels_location

0x4db6,	// (0x0006d899) blid_accuracy_pane_g1

0x4db6,	// (0x0006d899) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00077dc8) blid_accuracy_pane_g

0x5145,	// (0x0006dc28) wml_content_pane

0x5183,	// (0x0006dc66) wml_button_pane_ParamLimits

0x5183,	// (0x0006dc66) wml_button_pane

0x86fe,	// (0x000711e1) wml_list_single_large_pane_ParamLimits

0x86fe,	// (0x000711e1) wml_list_single_large_pane

0x8720,	// (0x00071203) wml_list_single_medium_pane_ParamLimits

0x8720,	// (0x00071203) wml_list_single_medium_pane

0x8743,	// (0x00071226) wml_list_single_small_pane_ParamLimits

0x8743,	// (0x00071226) wml_list_single_small_pane

0x5197,	// (0x0006dc7a) wml_selection_box_pane_ParamLimits

0x5197,	// (0x0006dc7a) wml_selection_box_pane

0x51aa,	// (0x0006dc8d) wml_list_single_pane_t1

0x51b9,	// (0x0006dc9c) wml_list_single_medium_pane_t1

0x51c8,	// (0x0006dcab) wml_list_single_large_pane_t1

0x51d7,	// (0x0006dcba) input_focus_pane_cp02_ParamLimits

0x51d7,	// (0x0006dcba) input_focus_pane_cp02

0x51ea,	// (0x0006dccd) wml_selection_box_pane_g1

0x51f3,	// (0x0006dcd6) wml_selection_box_pane_t1_ParamLimits

0x51f3,	// (0x0006dcd6) wml_selection_box_pane_t1

0x4c8e,	// (0x0006d771) bg_wml_button_pane_ParamLimits

0x4c8e,	// (0x0006d771) bg_wml_button_pane

0x520b,	// (0x0006dcee) wml_button_pane_g1

0x5213,	// (0x0006dcf6) wml_button_pane_t1

0x520b,	// (0x0006dcee) wml_button_bg_pane_g1

0x5223,	// (0x0006dd06) wml_button_bg_pane_g2

0x522b,	// (0x0006dd0e) wml_button_bg_pane_g3

0x5233,	// (0x0006dd16) wml_button_bg_pane_g4

0x523b,	// (0x0006dd1e) wml_button_bg_pane_g5

0x5243,	// (0x0006dd26) wml_button_bg_pane_g6

0x524b,	// (0x0006dd2e) wml_button_bg_pane_g7

0x5253,	// (0x0006dd36) wml_button_bg_pane_g8

0x525b,	// (0x0006dd3e) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00077d6b) wml_button_bg_pane_g

0x876b,	// (0x0007124e) bg_list_pane_cp02

0x5263,	// (0x0006dd46) mce_header_pane_ParamLimits

0x5263,	// (0x0006dd46) mce_header_pane

0x5279,	// (0x0006dd5c) mce_icon_pane

0x5279,	// (0x0006dd5c) mce_image_pane

0x5282,	// (0x0006dd65) mce_text_pane_ParamLimits

0x5282,	// (0x0006dd65) mce_text_pane

0x8775,	// (0x00071258) scroll_pane_cp03

0x517b,	// (0x0006dc5e) scroll_pane_cp04

0x5295,	// (0x0006dd78) scroll_pane_cp05_ParamLimits

0x5295,	// (0x0006dd78) scroll_pane_cp05

0x877f,	// (0x00071262) mce_header_field_pane_ParamLimits

0x877f,	// (0x00071262) mce_header_field_pane

0x87a1,	// (0x00071284) mce_header_field_pane_2_ParamLimits

0x87a1,	// (0x00071284) mce_header_field_pane_2

0x87b7,	// (0x0007129a) mce_header_field_pane_3

0x87bf,	// (0x000712a2) list_single_mce_message_pane_ParamLimits

0x87bf,	// (0x000712a2) list_single_mce_message_pane

0x87d8,	// (0x000712bb) list_single_mce_smart_pane_ParamLimits

0x87d8,	// (0x000712bb) list_single_mce_smart_pane

0x52a1,	// (0x0006dd84) input_focus_pane_cp03

0x52aa,	// (0x0006dd8d) list_header_data_pane

0x87fc,	// (0x000712df) mce_header_field_pane_t1

0x880c,	// (0x000712ef) list_single_mce_header_pane_ParamLimits

0x880c,	// (0x000712ef) list_single_mce_header_pane

0x52b2,	// (0x0006dd95) list_single_mce_header_pane_t1

0x52c1,	// (0x0006dda4) list_single_mce_message_pane_g1

0x52c9,	// (0x0006ddac) list_single_mce_message_pane_t1

0x8842,	// (0x00071325) bg_cale_heading_pane_cp01_ParamLimits

0x8842,	// (0x00071325) bg_cale_heading_pane_cp01

0x52d7,	// (0x0006ddba) bg_cale_pane_cp02_ParamLimits

0x52d7,	// (0x0006ddba) bg_cale_pane_cp02

0x8875,	// (0x00071358) cale_month_corner_pane

0x888b,	// (0x0007136e) cale_month_day_heading_pane_ParamLimits

0x888b,	// (0x0007136e) cale_month_day_heading_pane

0x88ce,	// (0x000713b1) cale_month_pane_g1_ParamLimits

0x88ce,	// (0x000713b1) cale_month_pane_g1

0x88fa,	// (0x000713dd) cale_month_pane_g2_ParamLimits

0x88fa,	// (0x000713dd) cale_month_pane_g2

0x891d,	// (0x00071400) cale_month_pane_g3_ParamLimits

0x891d,	// (0x00071400) cale_month_pane_g3

0x8959,	// (0x0007143c) cale_month_pane_g4_ParamLimits

0x8959,	// (0x0007143c) cale_month_pane_g4

0x8995,	// (0x00071478) cale_month_pane_g5_ParamLimits

0x8995,	// (0x00071478) cale_month_pane_g5

0x89d1,	// (0x000714b4) cale_month_pane_g6_ParamLimits

0x89d1,	// (0x000714b4) cale_month_pane_g6

0x8a1d,	// (0x00071500) cale_month_pane_g7_ParamLimits

0x8a1d,	// (0x00071500) cale_month_pane_g7

0x8a69,	// (0x0007154c) cale_month_pane_g8_ParamLimits

0x8a69,	// (0x0007154c) cale_month_pane_g8

0x8ab5,	// (0x00071598) cale_month_pane_g9_ParamLimits

0x8ab5,	// (0x00071598) cale_month_pane_g9

0x8aef,	// (0x000715d2) cale_month_pane_g10_ParamLimits

0x8aef,	// (0x000715d2) cale_month_pane_g10

0x8b29,	// (0x0007160c) cale_month_pane_g11_ParamLimits

0x8b29,	// (0x0007160c) cale_month_pane_g11

0x8b63,	// (0x00071646) cale_month_pane_g12_ParamLimits

0x8b63,	// (0x00071646) cale_month_pane_g12

0x8ba1,	// (0x00071684) cale_month_pane_g13_ParamLimits

0x8ba1,	// (0x00071684) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00077d7e) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00077d7e) cale_month_pane_g

0x8bdf,	// (0x000716c2) cale_month_week_pane

0x8bf2,	// (0x000716d5) grid_cale_month_pane_ParamLimits

0x8bf2,	// (0x000716d5) grid_cale_month_pane

0x8c30,	// (0x00071713) cale_month_day_heading_pane_t1

0x8c8e,	// (0x00071771) cale_month_day_heading_pane_t2

0x8cf3,	// (0x000717d6) cale_month_day_heading_pane_t3

0x8d58,	// (0x0007183b) cale_month_day_heading_pane_t4

0x8dbd,	// (0x000718a0) cale_month_day_heading_pane_t5

0x8e2a,	// (0x0007190d) cale_month_day_heading_pane_t6

0x8e9f,	// (0x00071982) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00077d99) cale_month_day_heading_pane_t

0x4eb3,	// (0x0006d996) bg_cale_side_pane_cp01

0x8f14,	// (0x000719f7) cale_month_week_pane_t1

0x8f2b,	// (0x00071a0e) cale_month_week_pane_t2

0x8f42,	// (0x00071a25) cale_month_week_pane_t3

0x8f59,	// (0x00071a3c) cale_month_week_pane_t4

0x8f70,	// (0x00071a53) cale_month_week_pane_t5

0x8f87,	// (0x00071a6a) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00077da8) cale_month_week_pane_t

0x8f9e,	// (0x00071a81) cell_cale_month_pane_ParamLimits

0x8f9e,	// (0x00071a81) cell_cale_month_pane

0x906c,	// (0x00071b4f) cell_cale_month_pane_g1

0x9078,	// (0x00071b5b) cell_cale_month_pane_t1_ParamLimits

0x9078,	// (0x00071b5b) cell_cale_month_pane_t1

0x4ec1,	// (0x0006d9a4) grid_highlight_pane_cp08

0x4db6,	// (0x0006d899) main_smil_g1

0x9094,	// (0x00071b77) smil_status_pane

0x5336,	// (0x0006de19) smil_text_pane

0x1539,	// (0x0006a01c) bg_popup_call3_rect_pane_g8

0x1541,	// (0x0006a024) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00078061) bg_popup_call3_rect_pane_g

0x17e9,	// (0x0006a2cc) smil_status_volume_pane_g1

0x5340,	// (0x0006de23) smil_status_pane_t1

0xa586,	// (0x00073069) volume_smil_pane

0x5357,	// (0x0006de3a) list_smil_text_pane

0x90a7,	// (0x00071b8a) scroll_pane_cp011

0x90b2,	// (0x00071b95) smil_text_list_pane_t1_ParamLimits

0x90b2,	// (0x00071b95) smil_text_list_pane_t1

0x9106,	// (0x00071be9) aid_volume_smil_ParamLimits

0x9106,	// (0x00071be9) aid_volume_smil

0x4db6,	// (0x0006d899) smil_volume_pane_g1

0x4db6,	// (0x0006d899) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00077dc8) smil_volume_pane_g

0x4d61,	// (0x0006d844) listscroll_cale_day_pane

0xedca,	// (0x000778ad) bg_cale_pane

0xede2,	// (0x000778c5) list_cale_pane

0xedf3,	// (0x000778d6) scroll_pane_cp09

0xee04,	// (0x000778e7) cale_bg_pane_g1

0xee0c,	// (0x000778ef) cale_bg_pane_g2

0xee14,	// (0x000778f7) cale_bg_pane_g3

0xee1c,	// (0x000778ff) cale_bg_pane_g4

0xee24,	// (0x00077907) cale_bg_pane_g5

0xee2c,	// (0x0007790f) cale_bg_pane_g6

0xee34,	// (0x00077917) cale_bg_pane_g7

0xee3c,	// (0x0007791f) cale_bg_pane_g8

0xee44,	// (0x00077927) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00077dcd) cale_bg_pane_g

0x9128,	// (0x00071c0b) list_cale_time_pane_ParamLimits

0x9128,	// (0x00071c0b) list_cale_time_pane

0x913d,	// (0x00071c20) list_cale_time_pane_g1_ParamLimits

0x913d,	// (0x00071c20) list_cale_time_pane_g1

0xee4c,	// (0x0007792f) list_cale_time_pane_g2_ParamLimits

0xee4c,	// (0x0007792f) list_cale_time_pane_g2

0x9149,	// (0x00071c2c) list_cale_time_pane_g3_ParamLimits

0x9149,	// (0x00071c2c) list_cale_time_pane_g3

0x9157,	// (0x00071c3a) list_cale_time_pane_g4_ParamLimits

0x9157,	// (0x00071c3a) list_cale_time_pane_g4

0x9165,	// (0x00071c48) list_cale_time_pane_g5_ParamLimits

0x9165,	// (0x00071c48) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00077de0) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00077de0) list_cale_time_pane_g

0x9173,	// (0x00071c56) list_cale_time_pane_t1_ParamLimits

0x9173,	// (0x00071c56) list_cale_time_pane_t1

0x919b,	// (0x00071c7e) list_cale_time_pane_t2_ParamLimits

0x919b,	// (0x00071c7e) list_cale_time_pane_t2

0x94d5,	// (0x00071fb8) aid_blid_cardinal_pane

0x9517,	// (0x00071ffa) compass_pane_t4

0x91c3,	// (0x00071ca6) list_cale_time_pane_t4_ParamLimits

0x91c3,	// (0x00071ca6) list_cale_time_pane_t4

0x9525,	// (0x00072008) compass_pane_t5

0x9535,	// (0x00072018) compass_pane_t6

0x9543,	// (0x00072026) compass_pane_t7

0x01dd,	// (0x00068cc0) navi_pane_cc_t1

0x0344,	// (0x00068e27) aid_phob_thumbnail_center_pane

0x9c5e,	// (0x00072741) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00077ded) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00077ded) list_cale_time_pane_t

0x40cf,	// (0x0006cbb2) bg_popup_window_pane_cp02_ParamLimits

0x40cf,	// (0x0006cbb2) bg_popup_window_pane_cp02

0xee66,	// (0x00077949) heading_pane_cp01_ParamLimits

0xee66,	// (0x00077949) heading_pane_cp01

0xee72,	// (0x00077955) loc_req_pane_ParamLimits

0xee72,	// (0x00077955) loc_req_pane

0xee82,	// (0x00077965) loc_type_pane_ParamLimits

0xee82,	// (0x00077965) loc_type_pane

0xee94,	// (0x00077977) loc_type_pane_t1_ParamLimits

0xee94,	// (0x00077977) loc_type_pane_t1

0xeea6,	// (0x00077989) loc_type_pane_t2_ParamLimits

0xeea6,	// (0x00077989) loc_type_pane_t2

0xeeb8,	// (0x0007799b) loc_type_pane_t3_ParamLimits

0xeeb8,	// (0x0007799b) loc_type_pane_t3

0x0002,

0xf311,	// (0x00077df4) loc_type_pane_t_ParamLimits

0xf311,	// (0x00077df4) loc_type_pane_t

0xeeca,	// (0x000779ad) list_loc_req_pane

0xeed4,	// (0x000779b7) scroll_pane_cp012

0x91eb,	// (0x00071cce) list_single_loc_request_popup_menu_pane_ParamLimits

0x91eb,	// (0x00071cce) list_single_loc_request_popup_menu_pane

0xeedf,	// (0x000779c2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xeedf,	// (0x000779c2) list_single_loc_request_popup_menu_pane_g1

0xeeeb,	// (0x000779ce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xeeeb,	// (0x000779ce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00077dfb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00077dfb) list_single_loc_request_popup_menu_pane_g

0xeef7,	// (0x000779da) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeef7,	// (0x000779da) list_single_loc_request_popup_menu_pane_t1

0x91fd,	// (0x00071ce0) bg_popup_window_pane_cp03_ParamLimits

0x91fd,	// (0x00071ce0) bg_popup_window_pane_cp03

0x920b,	// (0x00071cee) heading_loc_req_pane_ParamLimits

0x920b,	// (0x00071cee) heading_loc_req_pane

0x9217,	// (0x00071cfa) popup_dyc_status_message_window_g1_ParamLimits

0x9217,	// (0x00071cfa) popup_dyc_status_message_window_g1

0x9223,	// (0x00071d06) popup_dyc_status_message_window_t1_ParamLimits

0x9223,	// (0x00071d06) popup_dyc_status_message_window_t1

0x9235,	// (0x00071d18) popup_dyc_status_message_window_t2_ParamLimits

0x9235,	// (0x00071d18) popup_dyc_status_message_window_t2

0x9247,	// (0x00071d2a) popup_dyc_status_message_window_t3_ParamLimits

0x9247,	// (0x00071d2a) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00077e00) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00077e00) popup_dyc_status_message_window_t

0x4a33,	// (0x0006d516) bg_heading_pane_cp01

0xef0d,	// (0x000779f0) heading_loc_req_pane_g1

0xef15,	// (0x000779f8) heading_loc_req_pane_g2

0xef1d,	// (0x00077a00) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00077e07) heading_loc_req_pane_g

0xef25,	// (0x00077a08) heading_loc_req_pane_t1

0xef35,	// (0x00077a18) bg_popup_sub_pane_cp01_ParamLimits

0xef35,	// (0x00077a18) bg_popup_sub_pane_cp01

0xef43,	// (0x00077a26) popup_cale_events_window_g1_ParamLimits

0xef43,	// (0x00077a26) popup_cale_events_window_g1

0xef63,	// (0x00077a46) popup_cale_events_window_g2_ParamLimits

0xef63,	// (0x00077a46) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00077e3b) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00077e3b) popup_cale_events_window_g

0xef83,	// (0x00077a66) popup_cale_events_window_t1_ParamLimits

0xef83,	// (0x00077a66) popup_cale_events_window_t1

0xef95,	// (0x00077a78) popup_cale_events_window_t2_ParamLimits

0xef95,	// (0x00077a78) popup_cale_events_window_t2

0xefd3,	// (0x00077ab6) popup_cale_events_window_t3_ParamLimits

0xefd3,	// (0x00077ab6) popup_cale_events_window_t3

0xf00d,	// (0x00077af0) popup_cale_events_window_t4_ParamLimits

0xf00d,	// (0x00077af0) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00077e40) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00077e40) popup_cale_events_window_t

0x9271,	// (0x00071d54) call_type_pane

0x035c,	// (0x00068e3f) popup_call_status_window_g1

0x927d,	// (0x00071d60) popup_call_status_window_g2

0x9289,	// (0x00071d6c) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00077e49) popup_call_status_window_g

0xf043,	// (0x00077b26) call_type_pane_g1

0xf04c,	// (0x00077b2f) call_type_pane_g2

0x0001,

0xf36d,	// (0x00077e50) call_type_pane_g

0x4a33,	// (0x0006d516) bg_popup_sub_pane_cp02

0xf055,	// (0x00077b38) listscroll_popup_wml_pane

0xf05d,	// (0x00077b40) list_wml_pane

0xf067,	// (0x00077b4a) scroll_pane_cp013

0xf072,	// (0x00077b55) list_single_graphic_popup_wml_pane_ParamLimits

0xf072,	// (0x00077b55) list_single_graphic_popup_wml_pane

0x4db6,	// (0x0006d899) list_single_graphic_popup_wml_pane_g1

0xf086,	// (0x00077b69) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00077e55) list_single_graphic_popup_wml_pane_g

0xf08e,	// (0x00077b71) list_single_graphic_popup_wml_pane_t1

0xf0a4,	// (0x00077b87) aid_call_pane

0x4c86,	// (0x0006d769) popup_clock_analogue_window_g1

0x4c86,	// (0x0006d769) popup_clock_analogue_window_g2

0x9295,	// (0x00071d78) popup_clock_analogue_window_g3

0x9295,	// (0x00071d78) popup_clock_analogue_window_g4

0x4db6,	// (0x0006d899) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00077e5a) popup_clock_analogue_window_g

0x929d,	// (0x00071d80) popup_clock_analogue_window_t1

0x92ab,	// (0x00071d8e) clock_digital_number_pane_ParamLimits

0x92ab,	// (0x00071d8e) clock_digital_number_pane

0x92b7,	// (0x00071d9a) clock_digital_number_pane_cp02_ParamLimits

0x92b7,	// (0x00071d9a) clock_digital_number_pane_cp02

0x92c3,	// (0x00071da6) clock_digital_number_pane_cp03_ParamLimits

0x92c3,	// (0x00071da6) clock_digital_number_pane_cp03

0x92cf,	// (0x00071db2) clock_digital_number_pane_cp04_ParamLimits

0x92cf,	// (0x00071db2) clock_digital_number_pane_cp04

0x92db,	// (0x00071dbe) clock_digital_separator_pane_ParamLimits

0x92db,	// (0x00071dbe) clock_digital_separator_pane

0x92e7,	// (0x00071dca) popup_clock_digital_window_t1

0x4db6,	// (0x0006d899) clock_digital_number_pane_g1

0x4db6,	// (0x0006d899) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00077dc8) clock_digital_number_pane_g

0x4db6,	// (0x0006d899) clock_digital_separator_pane_g1

0x4db6,	// (0x0006d899) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00077dc8) clock_digital_separator_pane_g

0x4a33,	// (0x0006d516) bg_popup_window_pane_cp04

0x003d,	// (0x00068b20) heading_pane_cp03

0x0045,	// (0x00068b28) listscroll_popup_gms_pane

0x004d,	// (0x00068b30) grid_large_graphic_popup_pane

0x0057,	// (0x00068b3a) listscroll_popup_gms_pane_g1

0x005f,	// (0x00068b42) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00077e65) listscroll_popup_gms_pane_g

0x517b,	// (0x0006dc5e) scroll_pane_cp014

0x9304,	// (0x00071de7) cell_large_graphic_popup_pane_ParamLimits

0x9304,	// (0x00071de7) cell_large_graphic_popup_pane

0x931e,	// (0x00071e01) cell_large_graphic_popup_pane_g1_ParamLimits

0x931e,	// (0x00071e01) cell_large_graphic_popup_pane_g1

0x0067,	// (0x00068b4a) cell_large_graphic_popup_pane_g2_ParamLimits

0x0067,	// (0x00068b4a) cell_large_graphic_popup_pane_g2

0x0073,	// (0x00068b56) cell_large_graphic_popup_pane_g3_ParamLimits

0x0073,	// (0x00068b56) cell_large_graphic_popup_pane_g3

0x0080,	// (0x00068b63) cell_large_graphic_popup_pane_g4_ParamLimits

0x0080,	// (0x00068b63) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00077e6a) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00077e6a) cell_large_graphic_popup_pane_g

0x0090,	// (0x00068b73) grid_highlight_pane_cp010

0x4db6,	// (0x0006d899) bg_popup_call_pane_g1

0x009a,	// (0x00068b7d) list_single_graphic_popup_conf_pane_ParamLimits

0x009a,	// (0x00068b7d) list_single_graphic_popup_conf_pane

0x00ac,	// (0x00068b8f) list_highlight_pane_cp01

0x00b5,	// (0x00068b98) list_single_graphic_popup_conf_pane_g1

0x00bd,	// (0x00068ba0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00077e73) list_single_graphic_popup_conf_pane_g

0x00c5,	// (0x00068ba8) list_single_graphic_popup_conf_pane_t1

0x00d3,	// (0x00068bb6) linegrid_cams_pane_g1

0x932a,	// (0x00071e0d) linegrid_cams_pane_g2

0x4ef4,	// (0x0006d9d7) linegrid_cams_pane_g3

0x00dc,	// (0x00068bbf) linegrid_cams_pane_g4

0x9333,	// (0x00071e16) linegrid_cams_pane_g5

0x933c,	// (0x00071e1f) linegrid_cams_pane_g6

0x4efd,	// (0x0006d9e0) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00077e78) linegrid_cams_pane_g

0x00e5,	// (0x00068bc8) popup_clock_analogue_window

0x00e5,	// (0x00068bc8) popup_clock_digital_window

0x4a33,	// (0x0006d516) popup_phob_thumbnail_window

0x4db6,	// (0x0006d899) call_video_uplink_pane_g1

0x00ee,	// (0x00068bd1) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00077e87) call_video_uplink_pane_g

0x00f6,	// (0x00068bd9) video_uplink_pane

0x00fe,	// (0x00068be1) mce_image_pane_g1

0x9347,	// (0x00071e2a) mce_image_pane_g2

0x9351,	// (0x00071e34) mce_image_pane_g3

0x935b,	// (0x00071e3e) mce_image_pane_g4

0x9363,	// (0x00071e46) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00077e8c) mce_image_pane_g

0x0108,	// (0x00068beb) control_top_pane_stacon_cp01_ParamLimits

0x0108,	// (0x00068beb) control_top_pane_stacon_cp01

0x011c,	// (0x00068bff) uni_indicator_pane_stacon_cp01_ParamLimits

0x011c,	// (0x00068bff) uni_indicator_pane_stacon_cp01

0x012d,	// (0x00068c10) bg_popup_sub_pane_cp03

0x936b,	// (0x00071e4e) chi_dic_find_pane

0x9373,	// (0x00071e56) listscroll_chi_dic_pane

0x937c,	// (0x00071e5f) main_pane_chidic_g1

0x938f,	// (0x00071e72) chi_dic_find_pane_t1

0x0137,	// (0x00068c1a) find_chidic_pane

0x0140,	// (0x00068c23) chi_dic_list_pane_ParamLimits

0x0140,	// (0x00068c23) chi_dic_list_pane

0x0151,	// (0x00068c34) scroll_pane_cp020

0x939d,	// (0x00071e80) find_chidic_pane_t1

0x4a33,	// (0x0006d516) input_focus_pane_cp06

0x93ac,	// (0x00071e8f) list_chi_dic_pane_ParamLimits

0x93ac,	// (0x00071e8f) list_chi_dic_pane

0x93c1,	// (0x00071ea4) list_chi_dic_pane_t1_ParamLimits

0x93c1,	// (0x00071ea4) list_chi_dic_pane_t1

0x4a33,	// (0x0006d516) list_highlight_pane_cp020

0x0159,	// (0x00068c3c) bg_cale_heading_pane_g1

0x93d4,	// (0x00071eb7) bg_cale_heading_pane_g2

0x93dc,	// (0x00071ebf) bg_cale_heading_pane_g3

0x93e4,	// (0x00071ec7) bg_cale_heading_pane_g4

0x93ee,	// (0x00071ed1) bg_cale_heading_pane_g5

0x93f8,	// (0x00071edb) bg_cale_heading_pane_g6

0x9400,	// (0x00071ee3) bg_cale_heading_pane_g7

0x9408,	// (0x00071eeb) bg_cale_heading_pane_g8

0x9412,	// (0x00071ef5) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00077e97) bg_cale_heading_pane_g

0x0159,	// (0x00068c3c) bg_cale_side_pane_g1

0x941c,	// (0x00071eff) bg_cale_side_pane_g2

0x9426,	// (0x00071f09) bg_cale_side_pane_g3

0x9430,	// (0x00071f13) bg_cale_side_pane_g4

0x943a,	// (0x00071f1d) bg_cale_side_pane_g5

0x9444,	// (0x00071f27) bg_cale_side_pane_g6

0x944e,	// (0x00071f31) bg_cale_side_pane_g7

0x9458,	// (0x00071f3b) bg_cale_side_pane_g8

0x9460,	// (0x00071f43) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00077eaa) bg_cale_side_pane_g

0x9468,	// (0x00071f4b) popup_call_status_window_ParamLimits

0x9468,	// (0x00071f4b) popup_call_status_window

0x0161,	// (0x00068c44) stacon_top_pane

0x0169,	// (0x00068c4c) status_pane_ParamLimits

0x0169,	// (0x00068c4c) status_pane

0x017e,	// (0x00068c61) status_small_pane

0x0186,	// (0x00068c69) control_pane

0x4a33,	// (0x0006d516) stacon_bottom_pane

0x018e,	// (0x00068c71) list_single_mce_smart_pane_t1_ParamLimits

0x018e,	// (0x00068c71) list_single_mce_smart_pane_t1

0x01a1,	// (0x00068c84) list_single_mce_smart_pane_t2_ParamLimits

0x01a1,	// (0x00068c84) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00077ebd) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00077ebd) list_single_mce_smart_pane_t

0x9474,	// (0x00071f57) compass_pane

0x947f,	// (0x00071f62) main_location2_pane_t1

0x9495,	// (0x00071f78) main_location2_pane_t2

0x94ab,	// (0x00071f8e) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00077ec2) main_location2_pane_t

0x01c0,	// (0x00068ca3) compass_pane_g1_ParamLimits

0x01c0,	// (0x00068ca3) compass_pane_g1

0x94f9,	// (0x00071fdc) compass_pane_t1

0x9508,	// (0x00071feb) compass_pane_t2

0x0005,

0xf3e8,	// (0x00077ecb) compass_pane_t

0x9553,	// (0x00072036) text_secondary_cp61

0x01d4,	// (0x00068cb7) navi_pane_cams_g5

0x01f7,	// (0x00068cda) navi_pane_im_t1

0x0205,	// (0x00068ce8) navi_pane_mp_g1_ParamLimits

0x0205,	// (0x00068ce8) navi_pane_mp_g1

0x0219,	// (0x00068cfc) navi_pane_mp_g2_ParamLimits

0x0219,	// (0x00068cfc) navi_pane_mp_g2

0x0225,	// (0x00068d08) navi_pane_mp_g3_ParamLimits

0x0225,	// (0x00068d08) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00077edf) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00077edf) navi_pane_mp_g

0x0231,	// (0x00068d14) navi_pane_mp_t1

0x023f,	// (0x00068d22) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00077ee6) navi_pane_mp_t

0x027b,	// (0x00068d5e) navi_pane_vt_g1

0x0231,	// (0x00068d14) navi_pane_vt_t1

0x0283,	// (0x00068d66) navi_slider_pane

0x028b,	// (0x00068d6e) zooming_pane

0x0293,	// (0x00068d76) navi_slider_pane_g1

0x9680,	// (0x00072163) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00077eed) navi_slider_pane_g

0x02c9,	// (0x00068dac) aid_levels_zoom

0x02d1,	// (0x00068db4) zooming_pane_g1

0x02d9,	// (0x00068dbc) zooming_pane_g2

0x02d9,	// (0x00068dbc) zooming_pane_g3

0x0002,

0xf419,	// (0x00077efc) zooming_pane_g

0x02e1,	// (0x00068dc4) level_10_zoom

0x02ea,	// (0x00068dcd) level_11_zoom

0x02f3,	// (0x00068dd6) level_1_zoom

0x02fc,	// (0x00068ddf) level_2_zoom

0x0305,	// (0x00068de8) level_3_zoom

0x030e,	// (0x00068df1) level_4_zoom

0x0317,	// (0x00068dfa) level_5_zoom

0x0320,	// (0x00068e03) level_6_zoom

0x0329,	// (0x00068e0c) level_7_zoom

0x0332,	// (0x00068e15) level_8_zoom

0x033b,	// (0x00068e1e) level_9_zoom

0x034c,	// (0x00068e2f) popup_phob_thumbnail_window_g1

0x0354,	// (0x00068e37) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00077f03) popup_phob_thumbnail_window_g

0x169f,	// (0x0006a182) level_1_location

0x16a7,	// (0x0006a18a) level_2_location

0x16af,	// (0x0006a192) level_3_location

0x16b7,	// (0x0006a19a) level_4_location

0x028b,	// (0x00068d6e) level_5_location

0x9692,	// (0x00072175) mce_icon_pane_g1

0x969a,	// (0x0007217d) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00077f08) mce_icon_pane_g

0x96a2,	// (0x00072185) main_mup_pane_g1_ParamLimits

0x96a2,	// (0x00072185) main_mup_pane_g1

0x96ba,	// (0x0007219d) main_mup_pane_g2_ParamLimits

0x96ba,	// (0x0007219d) main_mup_pane_g2

0x96d6,	// (0x000721b9) main_mup_pane_g3_ParamLimits

0x96d6,	// (0x000721b9) main_mup_pane_g3

0x96f2,	// (0x000721d5) main_mup_pane_g4_ParamLimits

0x96f2,	// (0x000721d5) main_mup_pane_g4

0x9706,	// (0x000721e9) main_mup_pane_g5_ParamLimits

0x9706,	// (0x000721e9) main_mup_pane_g5

0x9727,	// (0x0007220a) main_mup_pane_g6_ParamLimits

0x9727,	// (0x0007220a) main_mup_pane_g6

0x9747,	// (0x0007222a) main_mup_pane_g7_ParamLimits

0x9747,	// (0x0007222a) main_mup_pane_g7

0x976b,	// (0x0007224e) main_mup_pane_g8_ParamLimits

0x976b,	// (0x0007224e) main_mup_pane_g8

0x978f,	// (0x00072272) main_mup_pane_g9_ParamLimits

0x978f,	// (0x00072272) main_mup_pane_g9

0x97b2,	// (0x00072295) main_mup_pane_g10_ParamLimits

0x97b2,	// (0x00072295) main_mup_pane_g10

0x97d5,	// (0x000722b8) main_mup_pane_g11_ParamLimits

0x97d5,	// (0x000722b8) main_mup_pane_g11

0x97f5,	// (0x000722d8) main_mup_pane_g12_ParamLimits

0x97f5,	// (0x000722d8) main_mup_pane_g12

0x9803,	// (0x000722e6) main_mup_pane_g13_ParamLimits

0x9803,	// (0x000722e6) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00077f0d) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00077f0d) main_mup_pane_g

0x9819,	// (0x000722fc) main_mup_pane_t1_ParamLimits

0x9819,	// (0x000722fc) main_mup_pane_t1

0x9838,	// (0x0007231b) main_mup_pane_t2_ParamLimits

0x9838,	// (0x0007231b) main_mup_pane_t2

0x9852,	// (0x00072335) main_mup_pane_t3_ParamLimits

0x9852,	// (0x00072335) main_mup_pane_t3

0x986c,	// (0x0007234f) main_mup_pane_t4_ParamLimits

0x986c,	// (0x0007234f) main_mup_pane_t4

0x987e,	// (0x00072361) main_mup_pane_t5_ParamLimits

0x987e,	// (0x00072361) main_mup_pane_t5

0x9890,	// (0x00072373) main_mup_pane_t6_ParamLimits

0x9890,	// (0x00072373) main_mup_pane_t6

0x0005,

0xf445,	// (0x00077f28) main_mup_pane_t_ParamLimits

0xf445,	// (0x00077f28) main_mup_pane_t

0x98a6,	// (0x00072389) mup_progress_pane_ParamLimits

0x98a6,	// (0x00072389) mup_progress_pane

0x98b2,	// (0x00072395) mup_visualizer_pane_ParamLimits

0x98b2,	// (0x00072395) mup_visualizer_pane

0x98ec,	// (0x000723cf) mup_volume_pane_ParamLimits

0x98ec,	// (0x000723cf) mup_volume_pane

0x035c,	// (0x00068e3f) mup_visualizer_pane_g1_ParamLimits

0x035c,	// (0x00068e3f) mup_visualizer_pane_g1

0x035c,	// (0x00068e3f) mup_visualizer_pane_g2_ParamLimits

0x035c,	// (0x00068e3f) mup_visualizer_pane_g2

0x01c0,	// (0x00068ca3) mup_visualizer_pane_g3_ParamLimits

0x01c0,	// (0x00068ca3) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00077f35) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00077f35) mup_visualizer_pane_g

0x4db6,	// (0x0006d899) mup_volume_pane_g1

0x0372,	// (0x00068e55) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00077f3c) mup_volume_pane_g

0x4db6,	// (0x0006d899) mup_progress_pane_g1

0x037b,	// (0x00068e5e) mup_progress_pane_g2

0x0384,	// (0x00068e67) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00077f41) mup_progress_pane_g

0x4a33,	// (0x0006d516) bg_popup_window_pane_cp05

0x038d,	// (0x00068e70) heading_pane_cp02_ParamLimits

0x038d,	// (0x00068e70) heading_pane_cp02

0x03a9,	// (0x00068e8c) list_popup_blid_pane

0x03b1,	// (0x00068e94) list_blid_sat_info_pane_ParamLimits

0x03b1,	// (0x00068e94) list_blid_sat_info_pane

0x03c4,	// (0x00068ea7) list_blid_sat_info_pane_g1

0x03cc,	// (0x00068eaf) list_blid_sat_info_pane_t1

0x9a0b,	// (0x000724ee) mup_equalizer_pane_ParamLimits

0x9a0b,	// (0x000724ee) mup_equalizer_pane

0x9a2c,	// (0x0007250f) mup_equalizer_pane_cp1_ParamLimits

0x9a2c,	// (0x0007250f) mup_equalizer_pane_cp1

0x9a4d,	// (0x00072530) mup_equalizer_pane_cp2_ParamLimits

0x9a4d,	// (0x00072530) mup_equalizer_pane_cp2

0x9a6e,	// (0x00072551) mup_equalizer_pane_cp3_ParamLimits

0x9a6e,	// (0x00072551) mup_equalizer_pane_cp3

0x9a93,	// (0x00072576) mup_equalizer_pane_cp4_ParamLimits

0x9a93,	// (0x00072576) mup_equalizer_pane_cp4

0x9ab8,	// (0x0007259b) mup_equalizer_pane_cp5

0x9ad0,	// (0x000725b3) mup_equalizer_pane_cp6

0x9ae8,	// (0x000725cb) mup_equalizer_pane_cp7

0x15b9,	// (0x0006a09c) bg_popup_call_poc_act_pane_g9

0x15c1,	// (0x0006a0a4) bg_popup_call_poc_act_pane_g10

0x15c9,	// (0x0006a0ac) bg_popup_call_poc_act_pane_g11

0x000a,

0x4c8e,	// (0x0006d771) mup_scale_pane

0x4db6,	// (0x0006d899) mup_scale_pane_g1

0x03da,	// (0x00068ebd) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00077f5d) mup_scale_pane_g

0x03fe,	// (0x00068ee1) msg_data_pane

0x0406,	// (0x00068ee9) scroll_pane_cp017

0x638b,	// (0x0006ee6e) bg_list_pane_cp04_ParamLimits

0x638b,	// (0x0006ee6e) bg_list_pane_cp04

0x040e,	// (0x00068ef1) msg_data_pane_g1

0x9b12,	// (0x000725f5) msg_data_pane_g2

0x9b1c,	// (0x000725ff) msg_data_pane_g3

0x9b26,	// (0x00072609) msg_data_pane_g4

0x9b2e,	// (0x00072611) msg_data_pane_g5

0x9b36,	// (0x00072619) msg_data_pane_g6

0x9b3e,	// (0x00072621) msg_data_pane_g7

0x0006,

0xf489,	// (0x00077f6c) msg_data_pane_g

0x63b3,	// (0x0006ee96) msg_text_pane_ParamLimits

0x63b3,	// (0x0006ee96) msg_text_pane

0x9b46,	// (0x00072629) qrid_highlight_pane_cp011_ParamLimits

0x9b46,	// (0x00072629) qrid_highlight_pane_cp011

0x4a33,	// (0x0006d516) msg_body_pane

0x4a33,	// (0x0006d516) msg_header_pane

0x041f,	// (0x00068f02) input_focus_pane_cp07

0x63e7,	// (0x0006eeca) msg_header_pane_t1_ParamLimits

0x63e7,	// (0x0006eeca) msg_header_pane_t1

0x63fb,	// (0x0006eede) msg_header_pane_t2_ParamLimits

0x63fb,	// (0x0006eede) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00077f80) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00077f80) msg_header_pane_t

0x0434,	// (0x00068f17) msg_body_pane_g1

0x640d,	// (0x0006eef0) msg_body_pane_t1_ParamLimits

0x640d,	// (0x0006eef0) msg_body_pane_t1

0x643e,	// (0x0006ef21) msg_body_pane_t2_ParamLimits

0x643e,	// (0x0006ef21) msg_body_pane_t2

0x6450,	// (0x0006ef33) msg_body_pane_t3_ParamLimits

0x6450,	// (0x0006ef33) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00077f85) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00077f85) msg_body_pane_t

0x9bae,	// (0x00072691) main_viewer_pane_g1_ParamLimits

0x9bae,	// (0x00072691) main_viewer_pane_g1

0x9bba,	// (0x0007269d) main_viewer_pane_g2_ParamLimits

0x9bba,	// (0x0007269d) main_viewer_pane_g2

0x9bc6,	// (0x000726a9) main_viewer_pane_g3_ParamLimits

0x9bc6,	// (0x000726a9) main_viewer_pane_g3

0x9bd7,	// (0x000726ba) main_viewer_pane_g4_ParamLimits

0x9bd7,	// (0x000726ba) main_viewer_pane_g4

0x9be8,	// (0x000726cb) main_viewer_pane_g5_ParamLimits

0x9be8,	// (0x000726cb) main_viewer_pane_g5

0x9be8,	// (0x000726cb) main_viewer_pane_g7_ParamLimits

0x9be8,	// (0x000726cb) main_viewer_pane_g7

0x9bfa,	// (0x000726dd) main_viewer_pane_g8_ParamLimits

0x9bfa,	// (0x000726dd) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00077f95) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00077f95) main_viewer_pane_g

0x047e,	// (0x00068f61) viewer_content_pane_ParamLimits

0x047e,	// (0x00068f61) viewer_content_pane

0x9c32,	// (0x00072715) main_postcard_pane_g1_ParamLimits

0x9c32,	// (0x00072715) main_postcard_pane_g1

0x9c40,	// (0x00072723) main_postcard_pane_g2_ParamLimits

0x9c40,	// (0x00072723) main_postcard_pane_g2

0x9c4e,	// (0x00072731) main_postcard_pane_g3_ParamLimits

0x9c4e,	// (0x00072731) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00077fa6) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00077fa6) main_postcard_pane_g

0x9c5e,	// (0x00072741) main_postcard_pane_g4

0x17d6,	// (0x0006a2b9) smil_status_volume_pane_g2

0x9c8a,	// (0x0007276d) postcard_pane_ParamLimits

0x9c8a,	// (0x0007276d) postcard_pane

0x035c,	// (0x00068e3f) postcard_pane_g1_ParamLimits

0x035c,	// (0x00068e3f) postcard_pane_g1

0x9cc4,	// (0x000727a7) postcard_pane_g2_ParamLimits

0x9cc4,	// (0x000727a7) postcard_pane_g2

0x9cd0,	// (0x000727b3) postcard_pane_g3_ParamLimits

0x9cd0,	// (0x000727b3) postcard_pane_g3

0x049a,	// (0x00068f7d) postcard_pane_g4_ParamLimits

0x049a,	// (0x00068f7d) postcard_pane_g4

0x9cdc,	// (0x000727bf) postcard_pane_g5_ParamLimits

0x9cdc,	// (0x000727bf) postcard_pane_g5

0x9ce8,	// (0x000727cb) postcard_pane_g6_ParamLimits

0x9ce8,	// (0x000727cb) postcard_pane_g6

0x048c,	// (0x00068f6f) postcard_pane_g7_ParamLimits

0x048c,	// (0x00068f6f) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00077fb3) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00077fb3) postcard_pane_g

0x9cf6,	// (0x000727d9) main_mp2_pane_g1_ParamLimits

0x9cf6,	// (0x000727d9) main_mp2_pane_g1

0x9d04,	// (0x000727e7) main_mp2_pane_g2_ParamLimits

0x9d04,	// (0x000727e7) main_mp2_pane_g2

0x9d10,	// (0x000727f3) main_mp2_pane_g3_ParamLimits

0x9d10,	// (0x000727f3) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00077fc2) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00077fc2) main_mp2_pane_g

0x9d1c,	// (0x000727ff) main_mp2_pane_t1_ParamLimits

0x9d1c,	// (0x000727ff) main_mp2_pane_t1

0x9d33,	// (0x00072816) main_mp2_pane_t2_ParamLimits

0x9d33,	// (0x00072816) main_mp2_pane_t2

0x9d47,	// (0x0007282a) main_mp2_pane_t3_ParamLimits

0x9d47,	// (0x0007282a) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00077fc9) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00077fc9) main_mp2_pane_t

0x04a8,	// (0x00068f8b) pec_content_pane_ParamLimits

0x04a8,	// (0x00068f8b) pec_content_pane

0x517b,	// (0x0006dc5e) scroll_pane_cp015

0x04ba,	// (0x00068f9d) pec_attribute_pane_ParamLimits

0x04ba,	// (0x00068f9d) pec_attribute_pane

0x9d59,	// (0x0007283c) pec_content_pane_g1_ParamLimits

0x9d59,	// (0x0007283c) pec_content_pane_g1

0x04ca,	// (0x00068fad) pec_content_pane_t1_ParamLimits

0x04ca,	// (0x00068fad) pec_content_pane_t1

0x04dc,	// (0x00068fbf) pec_content_pane_t2_ParamLimits

0x04dc,	// (0x00068fbf) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00077fd0) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00077fd0) pec_content_pane_t

0x9d65,	// (0x00072848) list_single_graphic_pane_cp01_ParamLimits

0x9d65,	// (0x00072848) list_single_graphic_pane_cp01

0x4c8e,	// (0x0006d771) bg_popup_sub_pane_cp04

0x04ee,	// (0x00068fd1) popup_mup_playback_window_g1

0x04fa,	// (0x00068fdd) popup_mup_playback_window_t1

0x050f,	// (0x00068ff2) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00077fd5) popup_mup_playback_window_t

0x0546,	// (0x00069029) main_image_pane_g1_ParamLimits

0x0546,	// (0x00069029) main_image_pane_g1

0x0589,	// (0x0006906c) scroll_pane_cp018_ParamLimits

0x0589,	// (0x0006906c) scroll_pane_cp018

0x05a1,	// (0x00069084) scroll_pane_cp016_ParamLimits

0x05a1,	// (0x00069084) scroll_pane_cp016

0x9df3,	// (0x000728d6) smil2_image_pane_ParamLimits

0x9df3,	// (0x000728d6) smil2_image_pane

0x9e29,	// (0x0007290c) smil2_root_pane_ParamLimits

0x9e29,	// (0x0007290c) smil2_root_pane

0x9e55,	// (0x00072938) smil2_text_pane_ParamLimits

0x9e55,	// (0x00072938) smil2_text_pane

0x4a33,	// (0x0006d516) bg_list_pane_cp06

0x05dd,	// (0x000690c0) grid_radio_pane

0x4a33,	// (0x0006d516) bg_popup_window_pane_cp06

0x05e7,	// (0x000690ca) main_fmradio_pane_t1

0x003d,	// (0x00068b20) heading_pane_cp04

0x05f5,	// (0x000690d8) main_fmradio_pane_t2

0x15d1,	// (0x0006a0b4) popup_cale_lunar_info_window_g1

0x0603,	// (0x000690e6) main_fmradio_pane_t3

0x15d9,	// (0x0006a0bc) popup_cale_lunar_info_window_g2

0x0613,	// (0x000690f6) main_fmradio_pane_t4

0x0001,

0x0621,	// (0x00069104) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000780b0) popup_cale_lunar_info_window_g

0xf507,	// (0x00077fea) main_fmradio_pane_t

0x062f,	// (0x00069112) wait_bar_pane_cp03

0x0637,	// (0x0006911a) cell_fmradio_pane_ParamLimits

0x0637,	// (0x0006911a) cell_fmradio_pane

0x048c,	// (0x00068f6f) cell_fmradio_pane_g1_ParamLimits

0x048c,	// (0x00068f6f) cell_fmradio_pane_g1

0x4a33,	// (0x0006d516) grid_highlight_pane_cp011

0x064c,	// (0x0006912f) poc_content_pane_ParamLimits

0x064c,	// (0x0006912f) poc_content_pane

0x065e,	// (0x00069141) scroll_pane_cp019

0x9e95,	// (0x00072978) popup_call_poc_act_window_ParamLimits

0x9e95,	// (0x00072978) popup_call_poc_act_window

0x9ea2,	// (0x00072985) popup_call_poc_inact_window_ParamLimits

0x9ea2,	// (0x00072985) popup_call_poc_inact_window

0xf5a4,	// (0x00078087) bg_popup_call_poc_act_pane_g

0x1549,	// (0x0006a02c) bg_popup_call_poc_inact_pane_g1

0x1551,	// (0x0006a034) bg_popup_call_poc_inact_pane_g2

0x0666,	// (0x00069149) popup_call_poc_act_window_g2

0x1559,	// (0x0006a03c) bg_popup_call_poc_inact_pane_g3

0x1561,	// (0x0006a044) bg_popup_call_poc_inact_pane_g4

0x1569,	// (0x0006a04c) bg_popup_call_poc_inact_pane_g5

0x066e,	// (0x00069151) popup_call_poc_act_window_t1_ParamLimits

0x066e,	// (0x00069151) popup_call_poc_act_window_t1

0x0696,	// (0x00069179) popup_call_poc_act_window_t2_ParamLimits

0x0696,	// (0x00069179) popup_call_poc_act_window_t2

0x06be,	// (0x000691a1) popup_call_poc_act_window_t3_ParamLimits

0x06be,	// (0x000691a1) popup_call_poc_act_window_t3

0x06e6,	// (0x000691c9) popup_call_poc_act_window_t4_ParamLimits

0x06e6,	// (0x000691c9) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00077ff5) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00077ff5) popup_call_poc_act_window_t

0x1571,	// (0x0006a054) bg_popup_call_poc_inact_pane_g6

0x1579,	// (0x0006a05c) bg_popup_call_poc_inact_pane_g7

0x1581,	// (0x0006a064) bg_popup_call_poc_inact_pane_g8

0x06f8,	// (0x000691db) popup_call_poc_inact_window_g2

0x1589,	// (0x0006a06c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00078074) bg_popup_call_poc_inact_pane_g

0x0700,	// (0x000691e3) popup_call_poc_inact_window_t1_ParamLimits

0x0700,	// (0x000691e3) popup_call_poc_inact_window_t1

0x0715,	// (0x000691f8) popup_call_poc_inact_window_t2_ParamLimits

0x0715,	// (0x000691f8) popup_call_poc_inact_window_t2

0x072a,	// (0x0006920d) popup_call_poc_inact_window_t3_ParamLimits

0x072a,	// (0x0006920d) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00077ffe) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00077ffe) popup_call_poc_inact_window_t

0x1749,	// (0x0006a22c) context_pane_ParamLimits

0xa4f4,	// (0x00072fd7) signal_pane_ParamLimits

0x028b,	// (0x00068d6e) main_call2_pane

0xa464,	// (0x00072f47) popup_phob_thumbnail2_window_ParamLimits

0xa464,	// (0x00072f47) popup_phob_thumbnail2_window

0x9b5c,	// (0x0007263f) aid_hotspot_pointer_arrow_pane

0x9b64,	// (0x00072647) aid_hotspot_pointer_hand_pane

0xa1c7,	// (0x00072caa) phob_pre_status_pane_g5

0x8064,	// (0x00070b47) cams_zoom_pane_ParamLimits

0x8070,	// (0x00070b53) image_vga_pane_ParamLimits

0x807f,	// (0x00070b62) main_camera_pane_g1_ParamLimits

0x808d,	// (0x00070b70) main_camera_pane_g2_ParamLimits

0x8099,	// (0x00070b7c) main_camera_pane_g3_ParamLimits

0x80a7,	// (0x00070b8a) main_camera_pane_g4_ParamLimits

0x80b5,	// (0x00070b98) main_camera_pane_g5_ParamLimits

0x80c3,	// (0x00070ba6) main_camera_pane_g6_ParamLimits

0x80d1,	// (0x00070bb4) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00077cfd) main_camera_pane_g_ParamLimits

0x80df,	// (0x00070bc2) main_camera_pane_t1_ParamLimits

0x80f1,	// (0x00070bd4) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00077d0e) main_camera_pane_t_ParamLimits

0x4c8e,	// (0x0006d771) bg_popup_preview_window_pane_cp01_ParamLimits

0x4c8e,	// (0x0006d771) bg_popup_preview_window_pane_cp01

0x073f,	// (0x00069222) popup_phob_thumbnail2_window_g1_ParamLimits

0x073f,	// (0x00069222) popup_phob_thumbnail2_window_g1

0x4a33,	// (0x0006d516) call2_cli_visual_pane

0x9ebe,	// (0x000729a1) popup_call2_audio_conf_window_ParamLimits

0x9ebe,	// (0x000729a1) popup_call2_audio_conf_window

0x9ed7,	// (0x000729ba) popup_call2_audio_first_window_ParamLimits

0x9ed7,	// (0x000729ba) popup_call2_audio_first_window

0x9f75,	// (0x00072a58) popup_call2_audio_in_window_ParamLimits

0x9f75,	// (0x00072a58) popup_call2_audio_in_window

0x9fb9,	// (0x00072a9c) popup_call2_audio_out_window_ParamLimits

0x9fb9,	// (0x00072a9c) popup_call2_audio_out_window

0xa023,	// (0x00072b06) popup_call2_audio_second_window_ParamLimits

0xa023,	// (0x00072b06) popup_call2_audio_second_window

0xa081,	// (0x00072b64) popup_call2_audio_wait_window_ParamLimits

0xa081,	// (0x00072b64) popup_call2_audio_wait_window

0x4a33,	// (0x0006d516) bg_popup_call2_act_pane_cp03

0x4c70,	// (0x0006d753) list_conf_pane_cp

0x074b,	// (0x0006922e) popup_call2_audio_conf_window_t1

0x0759,	// (0x0006923c) list_single_graphic_popup_conf2_pane_ParamLimits

0x0759,	// (0x0006923c) list_single_graphic_popup_conf2_pane

0x00ac,	// (0x00068b8f) list_highlight_pane_cp04

0x076c,	// (0x0006924f) list_single_graphic_popup_conf2_pane_g1

0x00bd,	// (0x00068ba0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00078005) list_single_graphic_popup_conf2_pane_g

0x0776,	// (0x00069259) list_single_graphic_popup_conf2_pane_t1

0x0784,	// (0x00069267) bg_popup_call2_act_pane_cp01_ParamLimits

0x0784,	// (0x00069267) bg_popup_call2_act_pane_cp01

0x080e,	// (0x000692f1) call_type_pane_cp05_ParamLimits

0x080e,	// (0x000692f1) call_type_pane_cp05

0x0862,	// (0x00069345) popup_call2_audio_second_window_g1_ParamLimits

0x0862,	// (0x00069345) popup_call2_audio_second_window_g1

0x08b6,	// (0x00069399) popup_call2_audio_second_window_g2_ParamLimits

0x08b6,	// (0x00069399) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0007800a) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0007800a) popup_call2_audio_second_window_g

0x091b,	// (0x000693fe) popup_call2_audio_second_window_t1_ParamLimits

0x091b,	// (0x000693fe) popup_call2_audio_second_window_t1

0x09d6,	// (0x000694b9) popup_call2_audio_second_window_t2_ParamLimits

0x09d6,	// (0x000694b9) popup_call2_audio_second_window_t2

0x0a29,	// (0x0006950c) popup_call2_audio_second_window_t3_ParamLimits

0x0a29,	// (0x0006950c) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00078011) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00078011) popup_call2_audio_second_window_t

0x4a33,	// (0x0006d516) bg_popup_call2_in_pane_cp02

0x4a3d,	// (0x0006d520) call_type_pane_cp04

0x4a45,	// (0x0006d528) popup_call2_audio_wait_window_g1

0x4a4d,	// (0x0006d530) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00077bea) popup_call2_audio_wait_window_g

0x4a55,	// (0x0006d538) popup_call2_audio_wait_window_t3

0x0b1c,	// (0x000695ff) bg_popup_call2_act_pane_ParamLimits

0x0b1c,	// (0x000695ff) bg_popup_call2_act_pane

0x0bdc,	// (0x000696bf) call_type_pane_cp03_ParamLimits

0x0bdc,	// (0x000696bf) call_type_pane_cp03

0x0c40,	// (0x00069723) popup_call2_audio_first_window_g1_ParamLimits

0x0c40,	// (0x00069723) popup_call2_audio_first_window_g1

0x0cb0,	// (0x00069793) popup_call2_audio_first_window_g2_ParamLimits

0x0cb0,	// (0x00069793) popup_call2_audio_first_window_g2

0x035c,	// (0x00068e3f) popup_call2_audio_first_window_g3_ParamLimits

0x035c,	// (0x00068e3f) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0007801a) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0007801a) popup_call2_audio_first_window_g

0x0d8e,	// (0x00069871) popup_call2_audio_first_window_t1_ParamLimits

0x0d8e,	// (0x00069871) popup_call2_audio_first_window_t1

0x0e91,	// (0x00069974) popup_call2_audio_first_window_t4_ParamLimits

0x0e91,	// (0x00069974) popup_call2_audio_first_window_t4

0x0f74,	// (0x00069a57) popup_call2_audio_first_window_t5_ParamLimits

0x0f74,	// (0x00069a57) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00078025) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00078025) popup_call2_audio_first_window_t

0x4c86,	// (0x0006d769) bg_popup_call2_act_pane_g1

0x15e3,	// (0x0006a0c6) popup_cale_lunar_info_window_t1

0x15f1,	// (0x0006a0d4) popup_cale_lunar_info_window_t2

0x15ff,	// (0x0006a0e2) popup_cale_lunar_info_window_t3

0x4a33,	// (0x0006d516) bg_popup_call2_bubble_pane

0x1075,	// (0x00069b58) bg_popup_call2_in_pane_cp01_ParamLimits

0x1075,	// (0x00069b58) bg_popup_call2_in_pane_cp01

0x4154,	// (0x0006cc37) call_type_pane_cp02

0x10bd,	// (0x00069ba0) popup_call2_audio_out_window_g1_ParamLimits

0x10bd,	// (0x00069ba0) popup_call2_audio_out_window_g1

0x10e9,	// (0x00069bcc) popup_call2_audio_out_window_g2_ParamLimits

0x10e9,	// (0x00069bcc) popup_call2_audio_out_window_g2

0x1111,	// (0x00069bf4) popup_call2_audio_out_window_g3_ParamLimits

0x1111,	// (0x00069bf4) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0007802e) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0007802e) popup_call2_audio_out_window_g

0x114c,	// (0x00069c2f) popup_call2_audio_out_window_t1_ParamLimits

0x114c,	// (0x00069c2f) popup_call2_audio_out_window_t1

0x11ab,	// (0x00069c8e) popup_call2_audio_out_window_t2_ParamLimits

0x11ab,	// (0x00069c8e) popup_call2_audio_out_window_t2

0x11ff,	// (0x00069ce2) popup_call2_audio_out_window_t3_ParamLimits

0x11ff,	// (0x00069ce2) popup_call2_audio_out_window_t3

0x1215,	// (0x00069cf8) popup_call2_audio_out_window_t4_ParamLimits

0x1215,	// (0x00069cf8) popup_call2_audio_out_window_t4

0x122b,	// (0x00069d0e) popup_call2_audio_out_window_t5_ParamLimits

0x122b,	// (0x00069d0e) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00078037) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00078037) popup_call2_audio_out_window_t

0x128f,	// (0x00069d72) bg_popup_call2_in_pane_ParamLimits

0x128f,	// (0x00069d72) bg_popup_call2_in_pane

0x12eb,	// (0x00069dce) popup_call2_audio_in_window_g1_ParamLimits

0x12eb,	// (0x00069dce) popup_call2_audio_in_window_g1

0x1323,	// (0x00069e06) popup_call2_audio_in_window_g2_ParamLimits

0x1323,	// (0x00069e06) popup_call2_audio_in_window_g2

0x135b,	// (0x00069e3e) popup_call2_audio_in_window_g3_ParamLimits

0x135b,	// (0x00069e3e) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00078044) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00078044) popup_call2_audio_in_window_g

0x13b3,	// (0x00069e96) popup_call2_audio_in_window_t1_ParamLimits

0x13b3,	// (0x00069e96) popup_call2_audio_in_window_t1

0x1433,	// (0x00069f16) popup_call2_audio_in_window_t2_ParamLimits

0x1433,	// (0x00069f16) popup_call2_audio_in_window_t2

0x14b3,	// (0x00069f96) popup_call2_audio_in_window_t3_ParamLimits

0x14b3,	// (0x00069f96) popup_call2_audio_in_window_t3

0x14cd,	// (0x00069fb0) popup_call2_audio_in_window_t4_ParamLimits

0x14cd,	// (0x00069fb0) popup_call2_audio_in_window_t4

0x14df,	// (0x00069fc2) popup_call2_audio_in_window_t5_ParamLimits

0x14df,	// (0x00069fc2) popup_call2_audio_in_window_t5

0x14f4,	// (0x00069fd7) popup_call2_audio_in_window_t6_ParamLimits

0x14f4,	// (0x00069fd7) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0007804d) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0007804d) popup_call2_audio_in_window_t

0x4c86,	// (0x0006d769) bg_popup_call2_in_pane_g1

0x160d,	// (0x0006a0f0) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000780b5) popup_cale_lunar_info_window_t

0x4c8e,	// (0x0006d771) bg_popup_call2_rect_pane_ParamLimits

0x4c8e,	// (0x0006d771) bg_popup_call2_rect_pane

0x4a33,	// (0x0006d516) call2_cli_visual_graphic_pane

0x4a33,	// (0x0006d516) call2_cli_visual_text_pane

0xa579,	// (0x0007305c) smil_status_volume_pane_g3

0x0002,

0x4db6,	// (0x0006d899) call2_cli_visual_graphic_pane_g1

0x4db6,	// (0x0006d899) call2_cli_visual_graphic_pane_g2

0x4db6,	// (0x0006d899) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0007805a) call2_cli_visual_graphic_pane_g

0x1509,	// (0x00069fec) bg_popup_call2_rect_pane_g1

0x4e54,	// (0x0006d937) bg_popup_call2_rect_pane_g2

0x1511,	// (0x00069ff4) bg_popup_call2_rect_pane_g3

0x1519,	// (0x00069ffc) bg_popup_call2_rect_pane_g4

0x1521,	// (0x0006a004) bg_popup_call2_rect_pane_g5

0x1529,	// (0x0006a00c) bg_popup_call2_rect_pane_g6

0x1531,	// (0x0006a014) bg_popup_call2_rect_pane_g7

0x1539,	// (0x0006a01c) bg_popup_call2_rect_pane_g8

0x1541,	// (0x0006a024) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00078061) bg_popup_call2_rect_pane_g

0x1549,	// (0x0006a02c) bg_popup_call2_bubble_pane_g1

0x1551,	// (0x0006a034) bg_popup_call2_bubble_pane_g2

0x1559,	// (0x0006a03c) bg_popup_call2_bubble_pane_g3

0x1561,	// (0x0006a044) bg_popup_call2_bubble_pane_g4

0x1569,	// (0x0006a04c) bg_popup_call2_bubble_pane_g5

0x1571,	// (0x0006a054) bg_popup_call2_bubble_pane_g6

0x1579,	// (0x0006a05c) bg_popup_call2_bubble_pane_g7

0x1581,	// (0x0006a064) bg_popup_call2_bubble_pane_g8

0x1589,	// (0x0006a06c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00078074) bg_popup_call2_bubble_pane_g

0x7b63,	// (0x00070646) aid_cale_week_size_cell_pane

0x8105,	// (0x00070be8) aid_cams_cif_uncrop_pane_ParamLimits

0x8105,	// (0x00070be8) aid_cams_cif_uncrop_pane

0x8262,	// (0x00070d45) aid_cams_size_cell_ParamLimits

0x8262,	// (0x00070d45) aid_cams_size_cell

0x826e,	// (0x00070d51) grid_cams_pane_ParamLimits

0x827c,	// (0x00070d5f) linegrid_cams_pane_ParamLimits

0x834d,	// (0x00070e30) call_video_pane_t1

0x836a,	// (0x00070e4d) call_video_pane_t2

0x0001,

0xf27e,	// (0x00077d61) call_video_pane_t

0x8824,	// (0x00071307) aid_cale_month_size_cell_pane_ParamLimits

0x8824,	// (0x00071307) aid_cale_month_size_cell_pane

0xf61b,	// (0x000780fe) smil_status_volume_pane_g

0xa586,	// (0x00073069) volume_smil_pane_ParamLimits

0x7341,	// (0x0006fe24) aid_popup2_width_pane

0x7a77,	// (0x0007055a) cell_qdial_pane_g4_ParamLimits

0x7a77,	// (0x0007055a) cell_qdial_pane_g4

0x94d5,	// (0x00071fb8) aid_blid_cardinal_pane_ParamLimits

0x94e5,	// (0x00071fc8) aid_blid_destination_pane_ParamLimits

0x94e5,	// (0x00071fc8) aid_blid_destination_pane

0x4c8e,	// (0x0006d771) bg_popup_call_poc_act_pane_ParamLimits

0x4c8e,	// (0x0006d771) bg_popup_call_poc_act_pane

0x4c8e,	// (0x0006d771) bg_popup_call_poc_inact_pane_ParamLimits

0x4c8e,	// (0x0006d771) bg_popup_call_poc_inact_pane

0x1591,	// (0x0006a074) bg_popup_call_poc_act_pane_g1

0x1599,	// (0x0006a07c) bg_popup_call_poc_act_pane_g2

0x15a1,	// (0x0006a084) bg_popup_call_poc_act_pane_g3

0x1561,	// (0x0006a044) bg_popup_call_poc_act_pane_g4

0x1569,	// (0x0006a04c) bg_popup_call_poc_act_pane_g5

0x15a9,	// (0x0006a08c) bg_popup_call_poc_act_pane_g6

0x1579,	// (0x0006a05c) bg_popup_call_poc_act_pane_g7

0x15b1,	// (0x0006a094) bg_popup_call_poc_act_pane_g8

0x4a33,	// (0x0006d516) main_usb_pane

0xa381,	// (0x00072e64) popup_cale_lunar_info_window

0x8682,	// (0x00071165) im_reading_pane_t1_ParamLimits

0x50d3,	// (0x0006dbb6) list_im_pane_ParamLimits

0x50e4,	// (0x0006dbc7) scroll_pane_cp07_ParamLimits

0x4a33,	// (0x0006d516) grid_highlight_pane_cp012

0x4c8e,	// (0x0006d771) mup_scale_pane_ParamLimits

0x035c,	// (0x00068e3f) main_usb_pane_g1_ParamLimits

0x035c,	// (0x00068e3f) main_usb_pane_g1

0xa0ea,	// (0x00072bcd) main_usb_pane_g2_ParamLimits

0xa0ea,	// (0x00072bcd) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0007809e) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0007809e) main_usb_pane_g

0xa0f6,	// (0x00072bd9) main_usb_pane_t1_ParamLimits

0xa0f6,	// (0x00072bd9) main_usb_pane_t1

0xa108,	// (0x00072beb) main_usb_pane_t2_ParamLimits

0xa108,	// (0x00072beb) main_usb_pane_t2

0xa11a,	// (0x00072bfd) main_usb_pane_t3_ParamLimits

0xa11a,	// (0x00072bfd) main_usb_pane_t3

0xa12c,	// (0x00072c0f) main_usb_pane_t4_ParamLimits

0xa12c,	// (0x00072c0f) main_usb_pane_t4

0xa13e,	// (0x00072c21) main_usb_pane_t5_ParamLimits

0xa13e,	// (0x00072c21) main_usb_pane_t5

0xa150,	// (0x00072c33) main_usb_pane_t6_ParamLimits

0xa150,	// (0x00072c33) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000780a3) main_usb_pane_t_ParamLimits

0x9474,	// (0x00071f57) aid_text_placing

0x947f,	// (0x00071f62) main_location2_pane_t1_ParamLimits

0x9495,	// (0x00071f78) main_location2_pane_t2_ParamLimits

0x94ab,	// (0x00071f8e) main_location2_pane_t3_ParamLimits

0x94c1,	// (0x00071fa4) main_location2_pane_t4_ParamLimits

0x94c1,	// (0x00071fa4) main_location2_pane_t4

0xf3df,	// (0x00077ec2) main_location2_pane_t_ParamLimits

0x4cca,	// (0x0006d7ad) find_pinb_pane_g2_ParamLimits

0x4cca,	// (0x0006d7ad) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00077c10) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00077c10) find_pinb_pane_g

0x4cd6,	// (0x0006d7b9) find_pinb_pane_t1_ParamLimits

0x4ce8,	// (0x0006d7cb) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00077c15) find_pinb_pane_t_ParamLimits

0x4a33,	// (0x0006d516) main_call3_pane

0x8c30,	// (0x00071713) cale_month_day_heading_pane_t1_ParamLimits

0x8c8e,	// (0x00071771) cale_month_day_heading_pane_t2_ParamLimits

0x8cf3,	// (0x000717d6) cale_month_day_heading_pane_t3_ParamLimits

0x8d58,	// (0x0007183b) cale_month_day_heading_pane_t4_ParamLimits

0x8dbd,	// (0x000718a0) cale_month_day_heading_pane_t5_ParamLimits

0x8e2a,	// (0x0007190d) cale_month_day_heading_pane_t6_ParamLimits

0x8e9f,	// (0x00071982) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00077d99) cale_month_day_heading_pane_t_ParamLimits

0x534e,	// (0x0006de31) smil_status_volume_pane

0x9ca8,	// (0x0007278b) postcard_address_pane_ParamLimits

0x9ca8,	// (0x0007278b) postcard_address_pane

0x9cb6,	// (0x00072799) postcard_message_pane_ParamLimits

0x9cb6,	// (0x00072799) postcard_message_pane

0xa0c0,	// (0x00072ba3) call2_cli_visual_pane_t1_ParamLimits

0xa0c0,	// (0x00072ba3) call2_cli_visual_pane_t1

0xa6cc,	// (0x000731af) postcard_message_pane_t1_ParamLimits

0xa6cc,	// (0x000731af) postcard_message_pane_t1

0x181e,	// (0x0006a301) postcard_address_pane_t1_ParamLimits

0x181e,	// (0x0006a301) postcard_address_pane_t1

0xa6bd,	// (0x000731a0) popup_call3_audio_in_window_ParamLimits

0xa6bd,	// (0x000731a0) popup_call3_audio_in_window

0xa59b,	// (0x0007307e) bg_popup_call3_in_pane_ParamLimits

0xa59b,	// (0x0007307e) bg_popup_call3_in_pane

0xa603,	// (0x000730e6) popup_call3_audio_in_window_g1_ParamLimits

0xa603,	// (0x000730e6) popup_call3_audio_in_window_g1

0xa61b,	// (0x000730fe) popup_call3_audio_in_window_g2_ParamLimits

0xa61b,	// (0x000730fe) popup_call3_audio_in_window_g2

0xa633,	// (0x00073116) popup_call3_audio_in_window_g3_ParamLimits

0xa633,	// (0x00073116) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00078105) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00078105) popup_call3_audio_in_window_g

0xa65b,	// (0x0007313e) popup_call3_audio_in_window_t1_ParamLimits

0xa65b,	// (0x0007313e) popup_call3_audio_in_window_t1

0xa683,	// (0x00073166) popup_call3_audio_in_window_t2_ParamLimits

0xa683,	// (0x00073166) popup_call3_audio_in_window_t2

0xa6ab,	// (0x0007318e) popup_call3_audio_in_window_t3_ParamLimits

0xa6ab,	// (0x0007318e) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0007810e) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0007810e) popup_call3_audio_in_window_t

0x028b,	// (0x00068d6e) bg_popup_call3_rect_pane

0x1509,	// (0x00069fec) bg_popup_call3_rect_pane_g1

0x4e54,	// (0x0006d937) bg_popup_call3_rect_pane_g2

0x1511,	// (0x00069ff4) bg_popup_call3_rect_pane_g3

0x1519,	// (0x00069ffc) bg_popup_call3_rect_pane_g4

0x1521,	// (0x0006a004) bg_popup_call3_rect_pane_g5

0x1529,	// (0x0006a00c) bg_popup_call3_rect_pane_g6

0x1531,	// (0x0006a014) bg_popup_call3_rect_pane_g7

0x9907,	// (0x000723ea) mup_visualizer_osc_pane

0x036a,	// (0x00068e4d) mup_visualizer_spec_pane

0xa5bb,	// (0x0007309e) call3_video_qcif_pane_ParamLimits

0xa5bb,	// (0x0007309e) call3_video_qcif_pane

0xa5cd,	// (0x000730b0) call3_video_qcif_uncrop_pane_ParamLimits

0xa5cd,	// (0x000730b0) call3_video_qcif_uncrop_pane

0xa5dd,	// (0x000730c0) call3_video_subqcif_pane_ParamLimits

0xa5dd,	// (0x000730c0) call3_video_subqcif_pane

0xa5f1,	// (0x000730d4) call3_video_subqcif_uncrop_pane_ParamLimits

0xa5f1,	// (0x000730d4) call3_video_subqcif_uncrop_pane

0xa64b,	// (0x0007312e) popup_call3_audio_in_window_g4_ParamLimits

0xa64b,	// (0x0007312e) popup_call3_audio_in_window_g4

0xa568,	// (0x0007304b) mup_spec_half_pane

0xa571,	// (0x00073054) mup_spec_half_pane_cp

0x17bc,	// (0x0006a29f) mup_osc_middle_pane

0x17c5,	// (0x0006a2a8) mup_visualizer_osc_pane_g1

0xa548,	// (0x0007302b) mup_spec_bar_pane_ParamLimits

0xa548,	// (0x0007302b) mup_spec_bar_pane

0x17a9,	// (0x0006a28c) mup_spec_bar_pane_g1

0x17b3,	// (0x0006a296) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000780f9) mup_spec_bar_pane_g

0x7b63,	// (0x00070646) aid_cale_week_size_cell_pane_ParamLimits

0x7b76,	// (0x00070659) bg_cale_heading_pane_ParamLimits

0x4e88,	// (0x0006d96b) bg_cale_pane_cp01_ParamLimits

0x7b92,	// (0x00070675) cale_week_corner_pane_ParamLimits

0x7ba8,	// (0x0007068b) cale_week_day_heading_pane_ParamLimits

0x7bc4,	// (0x000706a7) cale_week_scroll_pane_g1_ParamLimits

0x7bdd,	// (0x000706c0) cale_week_scroll_pane_g2_ParamLimits

0x7bee,	// (0x000706d1) cale_week_scroll_pane_g3_ParamLimits

0x7bff,	// (0x000706e2) cale_week_scroll_pane_g4_ParamLimits

0x7c10,	// (0x000706f3) cale_week_scroll_pane_g5_ParamLimits

0x7c21,	// (0x00070704) cale_week_scroll_pane_g6_ParamLimits

0x7c34,	// (0x00070717) cale_week_scroll_pane_g7_ParamLimits

0x7c47,	// (0x0007072a) cale_week_scroll_pane_g8_ParamLimits

0x7c5a,	// (0x0007073d) cale_week_scroll_pane_g9_ParamLimits

0x7c6b,	// (0x0007074e) cale_week_scroll_pane_g10_ParamLimits

0x7c7c,	// (0x0007075f) cale_week_scroll_pane_g11_ParamLimits

0x7c8d,	// (0x00070770) cale_week_scroll_pane_g12_ParamLimits

0x7c9e,	// (0x00070781) cale_week_scroll_pane_g13_ParamLimits

0x7caf,	// (0x00070792) cale_week_scroll_pane_g14_ParamLimits

0x7cc8,	// (0x000707ab) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00077ca1) cale_week_scroll_pane_g_ParamLimits

0x7ce1,	// (0x000707c4) cale_week_time_pane_ParamLimits

0x7cf4,	// (0x000707d7) grid_cale_week_pane_ParamLimits

0x4ea1,	// (0x0006d984) listscroll_cale_week_pane_t1

0x7d11,	// (0x000707f4) scroll_pane_cp08_ParamLimits

0x8875,	// (0x00071358) cale_month_corner_pane_ParamLimits

0x52fa,	// (0x0006dddd) cale_month_pane_t1

0x8bdf,	// (0x000716c2) cale_month_week_pane_ParamLimits

0x035c,	// (0x00068e3f) popup_call_status_window_g1_ParamLimits

0x927d,	// (0x00071d60) popup_call_status_window_g2_ParamLimits

0x9289,	// (0x00071d6c) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00077e49) popup_call_status_window_g_ParamLimits

0xf09c,	// (0x00077b7f) aid_call2_pane

0x63d9,	// (0x0006eebc) msg_header_pane_g1

0x9ca8,	// (0x0007278b) postcard_address2_pane_ParamLimits

0x9ca8,	// (0x0007278b) postcard_address2_pane

0x9cb6,	// (0x00072799) postcard_message2_pane_ParamLimits

0x9cb6,	// (0x00072799) postcard_message2_pane

0xa502,	// (0x00072fe5) message2_row_pane_ParamLimits

0xa502,	// (0x00072fe5) message2_row_pane

0x1764,	// (0x0006a247) address2_row_pane_ParamLimits

0x1764,	// (0x0006a247) address2_row_pane

0x1777,	// (0x0006a25a) postcard_message2_row_pane_g1

0x177f,	// (0x0006a262) postcard_message2_row_pane_t1

0x1777,	// (0x0006a25a) address2_row_pane_g1

0x177f,	// (0x0006a262) address2_row_pane_t1

0x7fc3,	// (0x00070aa6) aid_size_cell_vorec

0x4a33,	// (0x0006d516) main_rss_pane

0xa51c,	// (0x00072fff) rss_list_single_pane_ParamLimits

0xa51c,	// (0x00072fff) rss_list_single_pane

0x178d,	// (0x0006a270) rss_list_single_pane_t1

0x179b,	// (0x0006a27e) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x000780f4) rss_list_single_pane_t

0x4a33,	// (0x0006d516) main_camera2_pane

0x4a33,	// (0x0006d516) main_video2_pane

0xa730,	// (0x00073213) cams_zoom_pane_cp2_ParamLimits

0xa730,	// (0x00073213) cams_zoom_pane_cp2

0xa73c,	// (0x0007321f) image2_vga_pane_ParamLimits

0xa73c,	// (0x0007321f) image2_vga_pane

0xa74b,	// (0x0007322e) main_camera2_pane_g1_ParamLimits

0xa74b,	// (0x0007322e) main_camera2_pane_g1

0xa757,	// (0x0007323a) main_camera2_pane_g2_ParamLimits

0xa757,	// (0x0007323a) main_camera2_pane_g2

0xa763,	// (0x00073246) main_camera2_pane_g3_ParamLimits

0xa763,	// (0x00073246) main_camera2_pane_g3

0xa76f,	// (0x00073252) main_camera2_pane_g4_ParamLimits

0xa76f,	// (0x00073252) main_camera2_pane_g4

0xa77b,	// (0x0007325e) main_camera2_pane_g5_ParamLimits

0xa77b,	// (0x0007325e) main_camera2_pane_g5

0xa787,	// (0x0007326a) main_camera2_pane_g6_ParamLimits

0xa787,	// (0x0007326a) main_camera2_pane_g6

0xa793,	// (0x00073276) main_camera2_pane_g7_ParamLimits

0xa793,	// (0x00073276) main_camera2_pane_g7

0xa79f,	// (0x00073282) main_camera2_pane_g8_ParamLimits

0xa79f,	// (0x00073282) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00078115) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00078115) main_camera2_pane_g

0xa7b7,	// (0x0007329a) main_camera2_pane_t1_ParamLimits

0xa7b7,	// (0x0007329a) main_camera2_pane_t1

0xa7c9,	// (0x000732ac) main_camera2_pane_t2_ParamLimits

0xa7c9,	// (0x000732ac) main_camera2_pane_t2

0xa7db,	// (0x000732be) main_camera2_pane_t3_ParamLimits

0xa7db,	// (0x000732be) main_camera2_pane_t3

0xa7ed,	// (0x000732d0) main_camera2_pane_t4_ParamLimits

0xa7ed,	// (0x000732d0) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00078128) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00078128) main_camera2_pane_t

0xa84a,	// (0x0007332d) cams_zoom_pane_cp4_ParamLimits

0xa84a,	// (0x0007332d) cams_zoom_pane_cp4

0xa85a,	// (0x0007333d) image2_cif_pane_ParamLimits

0xa85a,	// (0x0007333d) image2_cif_pane

0xa86f,	// (0x00073352) image2_subqcif_pane_ParamLimits

0xa86f,	// (0x00073352) image2_subqcif_pane

0xa87e,	// (0x00073361) main_video2_pane_g1_ParamLimits

0xa87e,	// (0x00073361) main_video2_pane_g1

0xa890,	// (0x00073373) main_video2_pane_g2_ParamLimits

0xa890,	// (0x00073373) main_video2_pane_g2

0xa8a0,	// (0x00073383) main_video2_pane_g3_ParamLimits

0xa8a0,	// (0x00073383) main_video2_pane_g3

0xa8b0,	// (0x00073393) main_video2_pane_g4_ParamLimits

0xa8b0,	// (0x00073393) main_video2_pane_g4

0xa8c0,	// (0x000733a3) main_video2_pane_g5_ParamLimits

0xa8c0,	// (0x000733a3) main_video2_pane_g5

0xa8d0,	// (0x000733b3) main_video2_pane_g6_ParamLimits

0xa8d0,	// (0x000733b3) main_video2_pane_g6

0x0005,

0xf654,	// (0x00078137) main_video2_pane_g_ParamLimits

0xf654,	// (0x00078137) main_video2_pane_g

0xa8e2,	// (0x000733c5) main_video2_pane_t1_ParamLimits

0xa8e2,	// (0x000733c5) main_video2_pane_t1

0xa8fc,	// (0x000733df) main_video2_pane_t2_ParamLimits

0xa8fc,	// (0x000733df) main_video2_pane_t2

0xa922,	// (0x00073405) main_video2_pane_t3_ParamLimits

0xa922,	// (0x00073405) main_video2_pane_t3

0x0002,

0xf661,	// (0x00078144) main_video2_pane_t_ParamLimits

0xf661,	// (0x00078144) main_video2_pane_t

0xa207,	// (0x00072cea) call_muted_g2

0x0001,

0xf603,	// (0x000780e6) call_muted_g

0x4a33,	// (0x0006d516) main_mup2_pane

0x188e,	// (0x0006a371) main_mup2_pane_g1_ParamLimits

0x188e,	// (0x0006a371) main_mup2_pane_g1

0xa948,	// (0x0007342b) main_mup2_pane_g2_ParamLimits

0xa948,	// (0x0007342b) main_mup2_pane_g2

0xabcc,	// (0x000736af) main_mup_pane_g13_cp1

0xabd4,	// (0x000736b7) mup_volume_pane_cp1

0xa96a,	// (0x0007344d) main_mup2_pane_g4_ParamLimits

0xa96a,	// (0x0007344d) main_mup2_pane_g4

0xa97b,	// (0x0007345e) main_mup2_pane_g5_ParamLimits

0xa97b,	// (0x0007345e) main_mup2_pane_g5

0xa98c,	// (0x0007346f) main_mup2_pane_g6_ParamLimits

0xa98c,	// (0x0007346f) main_mup2_pane_g6

0xa99d,	// (0x00073480) main_mup2_pane_g7_ParamLimits

0xa99d,	// (0x00073480) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0007814b) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0007814b) main_mup2_pane_g

0xa9b9,	// (0x0007349c) main_mup2_pane_t1_ParamLimits

0xa9b9,	// (0x0007349c) main_mup2_pane_t1

0xa9d0,	// (0x000734b3) main_mup2_pane_t2_ParamLimits

0xa9d0,	// (0x000734b3) main_mup2_pane_t2

0xa9e7,	// (0x000734ca) main_mup2_pane_t3_ParamLimits

0xa9e7,	// (0x000734ca) main_mup2_pane_t3

0xa9fe,	// (0x000734e1) main_mup2_pane_t4_ParamLimits

0xa9fe,	// (0x000734e1) main_mup2_pane_t4

0xaa18,	// (0x000734fb) main_mup2_pane_t5_ParamLimits

0xaa18,	// (0x000734fb) main_mup2_pane_t5

0xaa32,	// (0x00073515) main_mup2_pane_t6_ParamLimits

0xaa32,	// (0x00073515) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0007815a) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0007815a) main_mup2_pane_t

0xaa6a,	// (0x0007354d) mup2_visualizer_pane_ParamLimits

0xaa6a,	// (0x0007354d) mup2_visualizer_pane

0xaaa0,	// (0x00073583) mup_progress_pane_cp_ParamLimits

0xaaa0,	// (0x00073583) mup_progress_pane_cp

0xabb7,	// (0x0007369a) mup_volume_pane_cp_ParamLimits

0xabb7,	// (0x0007369a) mup_volume_pane_cp

0xaab9,	// (0x0007359c) mup2_visualizer_pane_g1_ParamLimits

0xaab9,	// (0x0007359c) mup2_visualizer_pane_g1

0x1860,	// (0x0006a343) mup2_visualizer_pane_g2_ParamLimits

0x1860,	// (0x0006a343) mup2_visualizer_pane_g2

0xaace,	// (0x000735b1) mup2_visualizer_pane_g3_ParamLimits

0xaace,	// (0x000735b1) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00078167) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00078167) mup2_visualizer_pane_g

0x05d5,	// (0x000690b8) aid_size_cell_fmradio

0xa31d,	// (0x00072e00) aid_height_parent_landcape

0x5162,	// (0x0006dc45) wml_content_pane_cp

0x516a,	// (0x0006dc4d) wml_tabs_pane

0x5173,	// (0x0006dc56) popup_wml_miniature_window

0x517b,	// (0x0006dc5e) scroll_pane_cp021

0x518f,	// (0x0006dc72) wml_content_pane_comp8

0x4a33,	// (0x0006d516) bg_popup_sub_pane_cp05

0x187e,	// (0x0006a361) popup_wml_miniature_window_g1

0x1886,	// (0x0006a369) wml_miniature_view_pane

0xaada,	// (0x000735bd) aid_size_wml_view

0xaae2,	// (0x000735c5) wml_miniature_view_pane_g1

0xaaeb,	// (0x000735ce) wml_miniature_view_pane_g2

0xaaf4,	// (0x000735d7) wml_miniature_view_pane_g3

0xaafc,	// (0x000735df) wml_miniature_view_pane_g4

0xab04,	// (0x000735e7) wml_miniature_view_pane_g5

0xab0c,	// (0x000735ef) wml_miniature_view_pane_g6

0xab14,	// (0x000735f7) wml_miniature_view_pane_g7

0xab1c,	// (0x000735ff) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0007816e) wml_miniature_view_pane_g

0x188e,	// (0x0006a371) background_graphic_ParamLimits

0x188e,	// (0x0006a371) background_graphic

0x189a,	// (0x0006a37d) wml_tabs_2_pane

0x18a3,	// (0x0006a386) wml_tabs_3_pane_ParamLimits

0x18a3,	// (0x0006a386) wml_tabs_3_pane

0x18b5,	// (0x0006a398) wml_tabs_4_pane_ParamLimits

0x18b5,	// (0x0006a398) wml_tabs_4_pane

0x18cb,	// (0x0006a3ae) wml_tabs_5_pane_ParamLimits

0x18cb,	// (0x0006a3ae) wml_tabs_5_pane

0x18e5,	// (0x0006a3c8) wml_tabs_pane_g2_ParamLimits

0x18e5,	// (0x0006a3c8) wml_tabs_pane_g2

0x18f9,	// (0x0006a3dc) wml_tabs_pane_g3_ParamLimits

0x18f9,	// (0x0006a3dc) wml_tabs_pane_g3

0xab24,	// (0x00073607) wml_tabs_2_active_pane_ParamLimits

0xab24,	// (0x00073607) wml_tabs_2_active_pane

0xab36,	// (0x00073619) wml_tabs_2_passive_pane_ParamLimits

0xab36,	// (0x00073619) wml_tabs_2_passive_pane

0xab48,	// (0x0007362b) wml_tabs_3_active_pane_cp_ParamLimits

0xab48,	// (0x0007362b) wml_tabs_3_active_pane_cp

0xab5b,	// (0x0007363e) wml_tabs_3_passive_pane_ParamLimits

0xab5b,	// (0x0007363e) wml_tabs_3_passive_pane

0xab6c,	// (0x0007364f) wml_tabs_3_passive_pane_cp_ParamLimits

0xab6c,	// (0x0007364f) wml_tabs_3_passive_pane_cp

0xab81,	// (0x00073664) tabs_4_active_pane

0xab89,	// (0x0007366c) tabs_4_passive_pane

0xab91,	// (0x00073674) tabs_4_passive_pane_cp

0xab99,	// (0x0007367c) tabs_4_passive_pane_cp2

0xa0e2,	// (0x00072bc5) aid_height_text

0x98d0,	// (0x000723b3) mup_volume_cont_pane_ParamLimits

0x98d0,	// (0x000723b3) mup_volume_cont_pane

0x76d7,	// (0x000701ba) aid_size_cell_pinb

0x76e1,	// (0x000701c4) aid_size_list_pinb

0xaa89,	// (0x0007356c) mup2_volume_cont_pane_ParamLimits

0xaa89,	// (0x0007356c) mup2_volume_cont_pane

0xaba3,	// (0x00073686) mup2_volume_cont_pane_g1_ParamLimits

0xaba3,	// (0x00073686) mup2_volume_cont_pane_g1

0x734d,	// (0x0006fe30) aid_size_cell_touch_ParamLimits

0x734d,	// (0x0006fe30) aid_size_cell_touch

0x75f6,	// (0x000700d9) touch_pane_ParamLimits

0x75f6,	// (0x000700d9) touch_pane

0x4026,	// (0x0006cb09) main_rss2_pane

0x194f,	// (0x0006a432) listscroll_rss2_pane

0x1958,	// (0x0006a43b) rss2_navigation_pane

0x1960,	// (0x0006a443) list_rss2_pane

0x0151,	// (0x00068c34) scroll_pane_cp22

0x1968,	// (0x0006a44b) rss2_navigation_pane_g1

0x1971,	// (0x0006a454) rss2_navigation_pane_g2

0x1979,	// (0x0006a45c) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0007817f) rss2_navigation_pane_g

0x1981,	// (0x0006a464) rss2_navigation_pane_t1

0xabdc,	// (0x000736bf) rss2_list_single_pane_ParamLimits

0xabdc,	// (0x000736bf) rss2_list_single_pane

0x198f,	// (0x0006a472) rss2_list_single_pane_t2

0x199d,	// (0x0006a480) rss2_list_single_pane_t3_ParamLimits

0x199d,	// (0x0006a480) rss2_list_single_pane_t3

0x19ba,	// (0x0006a49d) rss2_list_single_pane_t4

0x909f,	// (0x00071b82) smil_status_pane_g1

0x4281,	// (0x0006cd64) main_image2_pane_ParamLimits

0x4281,	// (0x0006cd64) main_image2_pane

0xa7ab,	// (0x0007328e) main_camera2_pane_g9_ParamLimits

0xa7ab,	// (0x0007328e) main_camera2_pane_g9

0xa7ff,	// (0x000732e2) main_camera2_pane_t5_ParamLimits

0xa7ff,	// (0x000732e2) main_camera2_pane_t5

0xa811,	// (0x000732f4) main_camera2_pane_t6_ParamLimits

0xa811,	// (0x000732f4) main_camera2_pane_t6

0xabff,	// (0x000736e2) main_image2_pane_g1_ParamLimits

0xabff,	// (0x000736e2) main_image2_pane_g1

0x9e7f,	// (0x00072962) smil2_video_pane_ParamLimits

0x9e7f,	// (0x00072962) smil2_video_pane

0x6165,	// (0x0006ec48) aid_zoom_text_primary_cp

0x759b,	// (0x0007007e) popup_preview_fixed_window

0x50cb,	// (0x0006dbae) im_reading_pane_g1

0xa6f5,	// (0x000731d8) cams2_bc_adjust_pane_cp_ParamLimits

0xa6f5,	// (0x000731d8) cams2_bc_adjust_pane_cp

0xa83c,	// (0x0007331f) cams2_bc_adjust_pane_ParamLimits

0xa83c,	// (0x0007331f) cams2_bc_adjust_pane

0xac0b,	// (0x000736ee) cams2_bc_adjust_pane_g1

0xac13,	// (0x000736f6) cams2_slider_pane

0xac1c,	// (0x000736ff) cams2_slider_pane_g1

0xac25,	// (0x00073708) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00078186) cams2_slider_pane_g

0x77d2,	// (0x000702b5) calc_display_pane_ParamLimits

0x77f0,	// (0x000702d3) calc_paper_pane_ParamLimits

0x780c,	// (0x000702ef) grid_calc_pane_ParamLimits

0x92e7,	// (0x00071dca) popup_clock_digital_window_t1_ParamLimits

0x0572,	// (0x00069055) main_image_pane_t1

0x77b8,	// (0x0007029b) aid_size_cell_calc_ParamLimits

0x77b8,	// (0x0007029b) aid_size_cell_calc

0xa357,	// (0x00072e3a) popup_blid_sat_info2_window_ParamLimits

0xa357,	// (0x00072e3a) popup_blid_sat_info2_window

0x1a04,	// (0x0006a4e7) aid_size_cell_blid

0x1a0c,	// (0x0006a4ef) bg_popup_window_pane_cp07

0x1a2f,	// (0x0006a512) grid_popup_blid_pane

0x1a39,	// (0x0006a51c) heading_pane_cp05_ParamLimits

0x1a39,	// (0x0006a51c) heading_pane_cp05

0x1b03,	// (0x0006a5e6) cell_popup_blid_pane_ParamLimits

0x1b03,	// (0x0006a5e6) cell_popup_blid_pane

0x1b2d,	// (0x0006a610) cell_popup_blid_pane_g1

0x1b35,	// (0x0006a618) cell_popup_blid_pane_t1

0xaa4f,	// (0x00073532) mup2_indicator_pane_ParamLimits

0xaa4f,	// (0x00073532) mup2_indicator_pane

0x028b,	// (0x00068d6e) mup2_visualizer_osc_pane

0x186c,	// (0x0006a34f) mup2_visualizer_spec_pane_ParamLimits

0x186c,	// (0x0006a34f) mup2_visualizer_spec_pane

0xac3f,	// (0x00073722) mup2_spec_half_pane

0xac48,	// (0x0007372b) mup2_spec_half_pane_cp

0xac50,	// (0x00073733) mup2_spec_bar_pane_ParamLimits

0xac50,	// (0x00073733) mup2_spec_bar_pane

0x17a9,	// (0x0006a28c) mup2_spec_bar_pane_g1

0x17b3,	// (0x0006a296) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000780f9) mup2_spec_bar_pane_g

0xac6f,	// (0x00073752) mup2_osc_middle_pane

0x17c5,	// (0x0006a2a8) mup2_visualizer_osc_pane_g1

0x4050,	// (0x0006cb33) popup_number_entry_window_t1_ParamLimits

0x4063,	// (0x0006cb46) popup_number_entry_window_t2_ParamLimits

0x4075,	// (0x0006cb58) popup_number_entry_window_t3_ParamLimits

0x4087,	// (0x0006cb6a) popup_number_entry_window_t5_ParamLimits

0x4087,	// (0x0006cb6a) popup_number_entry_window_t5

0xf0d8,	// (0x00077bbb) popup_number_entry_window_t_ParamLimits

0x40bc,	// (0x0006cb9f) text_title_cp2_ParamLimits

0x9b6c,	// (0x0007264f) aid_hotspot_pointer_text2_pane

0x9c06,	// (0x000726e9) main_viewer_pane_g9_ParamLimits

0x9c06,	// (0x000726e9) main_viewer_pane_g9

0x52fa,	// (0x0006dddd) cale_month_pane_t1_ParamLimits

0xedca,	// (0x000778ad) bg_cale_pane_ParamLimits

0xede2,	// (0x000778c5) list_cale_pane_ParamLimits

0x4ea1,	// (0x0006d984) listscroll_cale_day_pane_t1

0xedf3,	// (0x000778d6) scroll_pane_cp09_ParamLimits

0x990f,	// (0x000723f2) main_mup_eq_pane_t1_ParamLimits

0x990f,	// (0x000723f2) main_mup_eq_pane_t1

0x992b,	// (0x0007240e) main_mup_eq_pane_t2_ParamLimits

0x992b,	// (0x0007240e) main_mup_eq_pane_t2

0x9947,	// (0x0007242a) main_mup_eq_pane_t3_ParamLimits

0x9947,	// (0x0007242a) main_mup_eq_pane_t3

0x9961,	// (0x00072444) main_mup_eq_pane_t4_ParamLimits

0x9961,	// (0x00072444) main_mup_eq_pane_t4

0x997b,	// (0x0007245e) main_mup_eq_pane_t5_ParamLimits

0x997b,	// (0x0007245e) main_mup_eq_pane_t5

0x9995,	// (0x00072478) main_mup_eq_pane_t6_ParamLimits

0x9995,	// (0x00072478) main_mup_eq_pane_t6

0x99ab,	// (0x0007248e) main_mup_eq_pane_t7_ParamLimits

0x99ab,	// (0x0007248e) main_mup_eq_pane_t7

0x99c1,	// (0x000724a4) main_mup_eq_pane_t8_ParamLimits

0x99c1,	// (0x000724a4) main_mup_eq_pane_t8

0x99d7,	// (0x000724ba) main_mup_eq_pane_t9_ParamLimits

0x99d7,	// (0x000724ba) main_mup_eq_pane_t9

0x99f3,	// (0x000724d6) main_mup_eq_pane_t10_ParamLimits

0x99f3,	// (0x000724d6) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00077f48) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00077f48) main_mup_eq_pane_t

0x9ab8,	// (0x0007259b) mup_equalizer_pane_cp5_ParamLimits

0x9ad0,	// (0x000725b3) mup_equalizer_pane_cp6_ParamLimits

0x9ae8,	// (0x000725cb) mup_equalizer_pane_cp7_ParamLimits

0x4026,	// (0x0006cb09) main_gallery_pane

0x17ce,	// (0x0006a2b1) smil2_volume_pane

0x17e9,	// (0x0006a2cc) smil_status_volume_pane_g1_ParamLimits

0x17d6,	// (0x0006a2b9) smil_status_volume_pane_g2_ParamLimits

0xa579,	// (0x0007305c) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x000780fe) smil_status_volume_pane_g_ParamLimits

0x1a0c,	// (0x0006a4ef) bg_popup_window_pane_cp07_ParamLimits

0x1a1a,	// (0x0006a4fd) blid_firmament_pane

0xac78,	// (0x0007375b) aid_size_cell_gallery_ParamLimits

0xac78,	// (0x0007375b) aid_size_cell_gallery

0xac86,	// (0x00073769) grid_gallery_pane_ParamLimits

0xac86,	// (0x00073769) grid_gallery_pane

0xac96,	// (0x00073779) cell_gallery_pane_ParamLimits

0xac96,	// (0x00073779) cell_gallery_pane

0x1b43,	// (0x0006a626) bg_cell_gallery_focus_pane_ParamLimits

0x1b43,	// (0x0006a626) bg_cell_gallery_focus_pane

0x1b55,	// (0x0006a638) cell_gallery_pane_g1_ParamLimits

0x1b55,	// (0x0006a638) cell_gallery_pane_g1

0xace1,	// (0x000737c4) cell_gallery_pane_g2_ParamLimits

0xace1,	// (0x000737c4) cell_gallery_pane_g2

0xacee,	// (0x000737d1) cell_gallery_pane_g3_ParamLimits

0xacee,	// (0x000737d1) cell_gallery_pane_g3

0x1b61,	// (0x0006a644) cell_gallery_pane_g4_ParamLimits

0x1b61,	// (0x0006a644) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000781ac) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000781ac) cell_gallery_pane_g

0x1b6d,	// (0x0006a650) bg_cell_gallery_focus_pane_g1

0x1b75,	// (0x0006a658) bg_cell_gallery_focus_pane_g2

0x1b7d,	// (0x0006a660) bg_cell_gallery_focus_pane_g3

0x1b85,	// (0x0006a668) bg_cell_gallery_focus_pane_g4

0x1b8d,	// (0x0006a670) bg_cell_gallery_focus_pane_g5

0x1b95,	// (0x0006a678) bg_cell_gallery_focus_pane_g6

0x1b9d,	// (0x0006a680) bg_cell_gallery_focus_pane_g7

0x1ba5,	// (0x0006a688) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000781b5) bg_cell_gallery_focus_pane_g

0x1bad,	// (0x0006a690) aid_firma_cardinal

0x1bc1,	// (0x0006a6a4) blid_firmament_pane_t1

0x1bd8,	// (0x0006a6bb) blid_firmament_pane_t2

0x1bef,	// (0x0006a6d2) blid_firmament_pane_t3

0x1c06,	// (0x0006a6e9) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x000781c6) blid_firmament_pane_t

0x1c1d,	// (0x0006a700) blid_sat_info_pane

0x1c2d,	// (0x0006a710) blid_sat_info_pane_g1

0x1c2d,	// (0x0006a710) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x000781cf) blid_sat_info_pane_g

0x1c37,	// (0x0006a71a) blid_sat_info_pane_t1

0x1c45,	// (0x0006a728) smil2_volume_content_pane

0x1c4e,	// (0x0006a731) smil2_volume_pane_g1

0x1c56,	// (0x0006a739) smil2_volume_content_pane_g1

0x1c5f,	// (0x0006a742) smil2_volume_content_pane_g2

0x1c68,	// (0x0006a74b) smil2_volume_content_pane_g3

0x1c71,	// (0x0006a754) smil2_volume_content_pane_g4

0x1c7a,	// (0x0006a75d) smil2_volume_content_pane_g5

0x1c83,	// (0x0006a766) smil2_volume_content_pane_g6

0x1c8c,	// (0x0006a76f) smil2_volume_content_pane_g7

0x1c95,	// (0x0006a778) smil2_volume_content_pane_g8

0x1c9e,	// (0x0006a781) smil2_volume_content_pane_g9

0x1ca7,	// (0x0006a78a) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x000781d4) smil2_volume_content_pane_g

0x7d6d,	// (0x00070850) cale_week_day_heading_pane_t1_ParamLimits

0x7d9a,	// (0x0007087d) cale_week_day_heading_pane_t2_ParamLimits

0x7dc7,	// (0x000708aa) cale_week_day_heading_pane_t3_ParamLimits

0x7df4,	// (0x000708d7) cale_week_day_heading_pane_t4_ParamLimits

0x7e21,	// (0x00070904) cale_week_day_heading_pane_t5_ParamLimits

0x7e4e,	// (0x00070931) cale_week_day_heading_pane_t6_ParamLimits

0x7e7b,	// (0x0007095e) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00077cc0) cale_week_day_heading_pane_t_ParamLimits

0x4eb3,	// (0x0006d996) bg_cale_side_pane_ParamLimits

0x7ea8,	// (0x0007098b) cale_week_time_pane_t1_ParamLimits

0x7ec0,	// (0x000709a3) cale_week_time_pane_t2_ParamLimits

0x7ed8,	// (0x000709bb) cale_week_time_pane_t3_ParamLimits

0x7ef0,	// (0x000709d3) cale_week_time_pane_t4_ParamLimits

0x7f08,	// (0x000709eb) cale_week_time_pane_t5_ParamLimits

0x7f20,	// (0x00070a03) cale_week_time_pane_t6_ParamLimits

0x7f38,	// (0x00070a1b) cale_week_time_pane_t7_ParamLimits

0x7f50,	// (0x00070a33) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00077ccf) cale_week_time_pane_t_ParamLimits

0x7f6c,	// (0x00070a4f) cell_cale_week_pane_g2_ParamLimits

0x4eb3,	// (0x0006d996) bg_cale_side_pane_cp01_ParamLimits

0x8f14,	// (0x000719f7) cale_month_week_pane_t1_ParamLimits

0x8f2b,	// (0x00071a0e) cale_month_week_pane_t2_ParamLimits

0x8f42,	// (0x00071a25) cale_month_week_pane_t3_ParamLimits

0x8f59,	// (0x00071a3c) cale_month_week_pane_t4_ParamLimits

0x8f70,	// (0x00071a53) cale_month_week_pane_t5_ParamLimits

0x8f87,	// (0x00071a6a) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00077da8) cale_month_week_pane_t_ParamLimits

0x906c,	// (0x00071b4f) cell_cale_month_pane_g1_ParamLimits

0x4026,	// (0x0006cb09) main_cale_event_viewer_pane

0x4026,	// (0x0006cb09) listscroll_cale_event_viewer_pane

0x1cb0,	// (0x0006a793) list_cale_ev_pane

0x1cb8,	// (0x0006a79b) scroll_pane_cp023

0xacfb,	// (0x000737de) field_cale_ev_pane_ParamLimits

0xacfb,	// (0x000737de) field_cale_ev_pane

0x1cc4,	// (0x0006a7a7) field_cale_ev_content_pane_ParamLimits

0x1cc4,	// (0x0006a7a7) field_cale_ev_content_pane

0x1cd0,	// (0x0006a7b3) field_cale_ev_pane_g1_ParamLimits

0x1cd0,	// (0x0006a7b3) field_cale_ev_pane_g1

0x1cdc,	// (0x0006a7bf) field_cale_ev_pane_g2_ParamLimits

0x1cdc,	// (0x0006a7bf) field_cale_ev_pane_g2

0x1cf4,	// (0x0006a7d7) field_cale_ev_pane_g3_ParamLimits

0x1cf4,	// (0x0006a7d7) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x000781e9) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x000781e9) field_cale_ev_pane_g

0x1d0c,	// (0x0006a7ef) field_cale_ev_pane_t1_ParamLimits

0x1d0c,	// (0x0006a7ef) field_cale_ev_pane_t1

0xad1f,	// (0x00073802) field_cale_ev_content_pane_t1_ParamLimits

0xad1f,	// (0x00073802) field_cale_ev_content_pane_t1

0x0416,	// (0x00068ef9) bg_button_pane_cp01

0x4d61,	// (0x0006d844) listscroll_cale_week_pane_ParamLimits

0x7b59,	// (0x0007063c) popup_toolbar_window_cp01

0x4ea1,	// (0x0006d984) listscroll_cale_week_pane_t1_ParamLimits

0x4d61,	// (0x0006d844) listscroll_cale_day_pane_ParamLimits

0x7b59,	// (0x0007063c) popup_toolbar_window_cp02

0x4ea1,	// (0x0006d984) listscroll_cale_day_pane_t1_ParamLimits

0x4d61,	// (0x0006d844) main_cale_month_pane_ParamLimits

0xa476,	// (0x00072f59) popup_toolbar_window_cp03_ParamLimits

0xa476,	// (0x00072f59) popup_toolbar_window_cp03

0x9d8f,	// (0x00072872) main_image_pane_g2_ParamLimits

0x9d8f,	// (0x00072872) main_image_pane_g2

0x9d9b,	// (0x0007287e) main_image_pane_g3_ParamLimits

0x9d9b,	// (0x0007287e) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00077fda) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00077fda) main_image_pane_g

0x0572,	// (0x00069055) main_image_pane_t1_ParamLimits

0x9da7,	// (0x0007288a) main_image_pane_t2_ParamLimits

0x9da7,	// (0x0007288a) main_image_pane_t2

0x9db9,	// (0x0007289c) main_image_pane_t3_ParamLimits

0x9db9,	// (0x0007289c) main_image_pane_t3

0x9dcb,	// (0x000728ae) main_image_pane_t4_ParamLimits

0x9dcb,	// (0x000728ae) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00077fe1) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00077fe1) main_image_pane_t

0x9ddd,	// (0x000728c0) popup_image_details_window_cp01

0x9de7,	// (0x000728ca) popup_toobar_trans_pane_cp01_ParamLimits

0x9de7,	// (0x000728ca) popup_toobar_trans_pane_cp01

0xa3b8,	// (0x00072e9b) popup_image_details_window_ParamLimits

0xa3b8,	// (0x00072e9b) popup_image_details_window

0xa3c6,	// (0x00072ea9) popup_image_focus_window

0xa6e7,	// (0x000731ca) camera2_autofocus_pane_ParamLimits

0xa6e7,	// (0x000731ca) camera2_autofocus_pane

0x4026,	// (0x0006cb09) bg_popup_sub_pane_cp06

0x1d23,	// (0x0006a806) popup_image_focus_window_g1

0x1d2b,	// (0x0006a80e) popup_image_focus_window_g2

0x1d33,	// (0x0006a816) popup_image_focus_window_g3

0x1d3b,	// (0x0006a81e) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x000781f0) popup_image_focus_window_g

0x1d43,	// (0x0006a826) popup_image_focus_window_t1

0x1d51,	// (0x0006a834) popup_image_focus_window_t2

0x1d61,	// (0x0006a844) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x000781f9) popup_image_focus_window_t

0x1d6f,	// (0x0006a852) camera2_autofocus_pane_g1

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp01

0x1d7d,	// (0x0006a860) popup_image_details_window_g1

0x1d90,	// (0x0006a873) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0007820b) popup_image_details_window_g

0x1db9,	// (0x0006a89c) popup_image_details_window_t1

0x1dcb,	// (0x0006a8ae) popup_image_details_window_t2

0x1de4,	// (0x0006a8c7) popup_image_details_window_t3

0x1df8,	// (0x0006a8db) popup_image_details_window_t4

0x1e13,	// (0x0006a8f6) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00078212) popup_image_details_window_t

0x4d4d,	// (0x0006d830) bg_calc_paper_pane_ParamLimits

0x4026,	// (0x0006cb09) grid_highlight_pane_cp013

0x7909,	// (0x000703ec) list_calc_pane_ParamLimits

0x791b,	// (0x000703fe) scroll_pane_cp024

0x4d61,	// (0x0006d844) bg_calc_display_pane_ParamLimits

0x7923,	// (0x00070406) calc_display_pane_t1_ParamLimits

0x7938,	// (0x0007041b) calc_display_pane_t2_ParamLimits

0x794d,	// (0x00070430) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00077c42) calc_display_pane_t_ParamLimits

0x7a21,	// (0x00070504) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00077c5f) cell_calc_pane_g

0x7a2a,	// (0x0007050d) cell_calc_pane_t1

0x4dc0,	// (0x0006d8a3) grid_highlight_pane_cp02_ParamLimits

0x4dd6,	// (0x0006d8b9) toolbar_button_pane_cp01_ParamLimits

0x4dd6,	// (0x0006d8b9) toolbar_button_pane_cp01

0x05b7,	// (0x0006909a) temp_image_control_pane_ParamLimits

0x05b7,	// (0x0006909a) temp_image_control_pane

0x4281,	// (0x0006cd64) main_mp3_pane

0x1e2d,	// (0x0006a910) temp_image_control_pane_g1_ParamLimits

0x1e2d,	// (0x0006a910) temp_image_control_pane_g1

0x1e3b,	// (0x0006a91e) temp_image_control_pane_g2_ParamLimits

0x1e3b,	// (0x0006a91e) temp_image_control_pane_g2

0x1e4d,	// (0x0006a930) temp_image_control_pane_g3_ParamLimits

0x1e4d,	// (0x0006a930) temp_image_control_pane_g3

0xad6a,	// (0x0007384d) temp_image_control_pane_g4_ParamLimits

0xad6a,	// (0x0007384d) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0007821d) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0007821d) temp_image_control_pane_g

0x1e2d,	// (0x0006a910) main_mp3_pane_g1

0xad7b,	// (0x0007385e) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00078226) main_mp3_pane_g

0x1e90,	// (0x0006a973) main_mp3_pane_t1

0x4f18,	// (0x0006d9fb) main_camera_pane_g8_ParamLimits

0x4f18,	// (0x0006d9fb) main_camera_pane_g8

0x8218,	// (0x00070cfb) main_video_pane_g7_ParamLimits

0x8218,	// (0x00070cfb) main_video_pane_g7

0xa82a,	// (0x0007330d) main_camera2_pane_t7_ParamLimits

0xa82a,	// (0x0007330d) main_camera2_pane_t7

0x5122,	// (0x0006dc05) scroll_pane_cp025_ParamLimits

0x5122,	// (0x0006dc05) scroll_pane_cp025

0x5136,	// (0x0006dc19) scroll_pane_cp026_ParamLimits

0x5136,	// (0x0006dc19) scroll_pane_cp026

0x5145,	// (0x0006dc28) wml_content_pane_ParamLimits

0x4026,	// (0x0006cb09) main_touch_calib_pane

0xae1f,	// (0x00073902) main_touch_calib_pane_g1

0xae2b,	// (0x0007390e) main_touch_calib_pane_g2

0xae37,	// (0x0007391a) main_touch_calib_pane_g3

0xae43,	// (0x00073926) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00078244) main_touch_calib_pane_g

0xae4f,	// (0x00073932) main_touch_calib_pane_t1

0xae66,	// (0x00073949) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0007824d) main_touch_calib_pane_t

0x01cc,	// (0x00068caf) mup_progress_pane_cp02

0x01eb,	// (0x00068cce) navi_pane_g1

0x024d,	// (0x00068d30) navi_pane_mp_t3

0x4281,	// (0x0006cd64) main_mp3_pane_ParamLimits

0xa4b8,	// (0x00072f9b) navi_pane_ParamLimits

0x1e2d,	// (0x0006a910) main_mp3_pane_g1_ParamLimits

0xad7b,	// (0x0007385e) main_mp3_pane_g2_ParamLimits

0xad87,	// (0x0007386a) main_mp3_pane_g3_ParamLimits

0xad87,	// (0x0007386a) main_mp3_pane_g3

0xad93,	// (0x00073876) main_mp3_pane_g4_ParamLimits

0xad93,	// (0x00073876) main_mp3_pane_g4

0x1e5d,	// (0x0006a940) main_mp3_pane_g5_ParamLimits

0x1e5d,	// (0x0006a940) main_mp3_pane_g5

0x1e6b,	// (0x0006a94e) main_mp3_pane_g6_ParamLimits

0x1e6b,	// (0x0006a94e) main_mp3_pane_g6

0x1e78,	// (0x0006a95b) main_mp3_pane_g7_ParamLimits

0x1e78,	// (0x0006a95b) main_mp3_pane_g7

0x1e84,	// (0x0006a967) main_mp3_pane_g8_ParamLimits

0x1e84,	// (0x0006a967) main_mp3_pane_g8

0xf743,	// (0x00078226) main_mp3_pane_g_ParamLimits

0xad9f,	// (0x00073882) main_mp3_pane_t2

0xadaf,	// (0x00073892) main_mp3_pane_t3

0x1e9e,	// (0x0006a981) main_mp3_pane_t4

0x1eac,	// (0x0006a98f) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00078237) main_mp3_pane_t

0x1eba,	// (0x0006a99d) mup_progress_pane_cp01

0x6165,	// (0x0006ec48) aid_zoom_text_secondary2

0x1cb0,	// (0x0006a793) list_cale_ev2_pane

0x1cb8,	// (0x0006a79b) scroll_pane_cp023_ParamLimits

0xaec1,	// (0x000739a4) field_cale_ev2_pane_ParamLimits

0xaec1,	// (0x000739a4) field_cale_ev2_pane

0xaedc,	// (0x000739bf) field_cale_ev2_pane_g1_ParamLimits

0xaedc,	// (0x000739bf) field_cale_ev2_pane_g1

0xaee8,	// (0x000739cb) field_cale_ev2_pane_g2_ParamLimits

0xaee8,	// (0x000739cb) field_cale_ev2_pane_g2

0xaf00,	// (0x000739e3) field_cale_ev2_pane_g3_ParamLimits

0xaf00,	// (0x000739e3) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00078258) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00078258) field_cale_ev2_pane_g

0x6462,	// (0x0006ef45) field_cale_ev2_pane_t1_ParamLimits

0x6462,	// (0x0006ef45) field_cale_ev2_pane_t1

0x6479,	// (0x0006ef5c) field_cale_ev2_pane_t2_ParamLimits

0x6479,	// (0x0006ef5c) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00078261) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00078261) field_cale_ev2_pane_t

0x9c6e,	// (0x00072751) main_postcard_pane_g5_ParamLimits

0x9c6e,	// (0x00072751) main_postcard_pane_g5

0x9c7c,	// (0x0007275f) main_postcard_pane_g6_ParamLimits

0x9c7c,	// (0x0007275f) main_postcard_pane_g6

0x8056,	// (0x00070b39) camera2_autofocus_pane_cp_ParamLimits

0x8056,	// (0x00070b39) camera2_autofocus_pane_cp

0x4281,	// (0x0006cd64) main_mup3_pane

0xaf44,	// (0x00073a27) main_mup3_pane_g1_ParamLimits

0xaf44,	// (0x00073a27) main_mup3_pane_g1

0xaf65,	// (0x00073a48) main_mup3_pane_g2_ParamLimits

0xaf65,	// (0x00073a48) main_mup3_pane_g2

0xafe1,	// (0x00073ac4) main_mup3_pane_g3_ParamLimits

0xafe1,	// (0x00073ac4) main_mup3_pane_g3

0xb02a,	// (0x00073b0d) main_mup3_pane_g4_ParamLimits

0xb02a,	// (0x00073b0d) main_mup3_pane_g4

0xb073,	// (0x00073b56) main_mup3_pane_g5_ParamLimits

0xb073,	// (0x00073b56) main_mup3_pane_g5

0xb0bc,	// (0x00073b9f) main_mup3_pane_g6_ParamLimits

0xb0bc,	// (0x00073b9f) main_mup3_pane_g6

0x1ec2,	// (0x0006a9a5) main_mup3_pane_g7_ParamLimits

0x1ec2,	// (0x0006a9a5) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00078271) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00078271) main_mup3_pane_g

0xb136,	// (0x00073c19) main_mup3_pane_t1_ParamLimits

0xb136,	// (0x00073c19) main_mup3_pane_t1

0xb1a7,	// (0x00073c8a) main_mup3_pane_t2_ParamLimits

0xb1a7,	// (0x00073c8a) main_mup3_pane_t2

0xb270,	// (0x00073d53) main_mup3_pane_t4_ParamLimits

0xb270,	// (0x00073d53) main_mup3_pane_t4

0xb2c4,	// (0x00073da7) main_mup3_pane_t5_ParamLimits

0xb2c4,	// (0x00073da7) main_mup3_pane_t5

0xb37c,	// (0x00073e5f) main_mup3_pane_t6_ParamLimits

0xb37c,	// (0x00073e5f) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00078282) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00078282) main_mup3_pane_t

0xb428,	// (0x00073f0b) mup3_progress_pane_ParamLimits

0xb428,	// (0x00073f0b) mup3_progress_pane

0xb4aa,	// (0x00073f8d) popup_mup3_control_window_ParamLimits

0xb4aa,	// (0x00073f8d) popup_mup3_control_window

0x1ed0,	// (0x0006a9b3) popup_mup3_text_window

0xb4c7,	// (0x00073faa) mup3_progress_pane_t1

0xb4e6,	// (0x00073fc9) mup3_progress_pane_t2

0x1ed8,	// (0x0006a9bb) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0007828f) mup3_progress_pane_t

0x1ef5,	// (0x0006a9d8) mup_progress_pane_cp03

0x4026,	// (0x0006cb09) bg_tb_trans_pane_cp04

0xb505,	// (0x00073fe8) mup3_volume_pane

0xb50d,	// (0x00073ff0) popup_mup3_control_window_g1

0x31e4,	// (0x0006bcc7) mup3_volume_pane_g1

0x31ed,	// (0x0006bcd0) mup3_volume_pane_g2

0x31f6,	// (0x0006bcd9) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00078296) mup3_volume_pane_g

0x4026,	// (0x0006cb09) bg_tb_trans_pane_cp03

0x1f05,	// (0x0006a9e8) popup_mup3_text_window_g1

0x1f0d,	// (0x0006a9f0) popup_mup3_text_window_t1

0x4da9,	// (0x0006d88c) list_calc_item_pane_g1_ParamLimits

0x1936,	// (0x0006a419) mup_volume_pane_cp_g1

0xae7f,	// (0x00073962) main_touch_calib_pane_t3

0xae95,	// (0x00073978) main_touch_calib_pane_t4

0xaeab,	// (0x0007398e) main_touch_calib_pane_t5

0x7339,	// (0x0006fe1c) aid_cell_size_toolbar2

0x7341,	// (0x0006fe24) aid_popup3_width_pane

0x6155,	// (0x0006ec38) aid_zoom_text_msg_primary

0x802b,	// (0x00070b0e) vorec_t7

0x4d6d,	// (0x0006d850) bg_calc_paper_pane_g1_ParamLimits

0x4d85,	// (0x0006d868) bg_calc_paper_pane_g2_ParamLimits

0x4d79,	// (0x0006d85c) bg_calc_paper_pane_g3_ParamLimits

0x4d9d,	// (0x0006d880) bg_calc_paper_pane_g4_ParamLimits

0x4d91,	// (0x0006d874) bg_calc_paper_pane_g5_ParamLimits

0x798e,	// (0x00070471) bg_calc_paper_pane_g6_ParamLimits

0x799f,	// (0x00070482) bg_calc_paper_pane_g7_ParamLimits

0x79b0,	// (0x00070493) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00077c49) bg_calc_paper_pane_g_ParamLimits

0x79c3,	// (0x000704a6) calc_bg_paper_pane_g9_ParamLimits

0x8147,	// (0x00070c2a) image_qvga_pane_ParamLimits

0x8147,	// (0x00070c2a) image_qvga_pane

0x4c8e,	// (0x0006d771) bg_popup_sub_pane_cp04_ParamLimits

0x04ee,	// (0x00068fd1) popup_mup_playback_window_g1_ParamLimits

0x04fa,	// (0x00068fdd) popup_mup_playback_window_t1_ParamLimits

0x050f,	// (0x00068ff2) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00077fd5) popup_mup_playback_window_t_ParamLimits

0xa959,	// (0x0007343c) main_mup2_pane_g3_ParamLimits

0xa959,	// (0x0007343c) main_mup2_pane_g3

0x83f3,	// (0x00070ed6) popup_toolbar_window_cp04

0x090a,	// (0x000693ed) popup_call2_audio_second_window_g3_ParamLimits

0x090a,	// (0x000693ed) popup_call2_audio_second_window_g3

0x0d14,	// (0x000697f7) popup_call2_audio_first_window_g4_ParamLimits

0x0d14,	// (0x000697f7) popup_call2_audio_first_window_g4

0x1393,	// (0x00069e76) popup_call2_audio_in_window_g4_ParamLimits

0x1393,	// (0x00069e76) popup_call2_audio_in_window_g4

0x9d82,	// (0x00072865) aid_area_sk_bg_cut_ParamLimits

0x9d82,	// (0x00072865) aid_area_sk_bg_cut

0x0524,	// (0x00069007) aid_area_sk_bg_cut_2_ParamLimits

0x0524,	// (0x00069007) aid_area_sk_bg_cut_2

0xacd1,	// (0x000737b4) aid_placing_details_win

0xacd9,	// (0x000737bc) aid_placing_details_win_2

0x1d6f,	// (0x0006a852) camera2_autofocus_pane_g1_ParamLimits

0x758c,	// (0x0007006f) popup_fixed_preview_cale_window_ParamLimits

0x758c,	// (0x0007006f) popup_fixed_preview_cale_window

0x02b7,	// (0x00068d9a) navi_slider_pane_g3

0x02ae,	// (0x00068d91) navi_slider_pane_g4

0x02a5,	// (0x00068d88) navi_slider_pane_g5

0x02b7,	// (0x00068d9a) navi_slider_pane_g6

0x9689,	// (0x0007216c) navi_slider_pane_g7

0x03e3,	// (0x00068ec6) mup_scale_pane_g3

0x03ec,	// (0x00068ecf) mup_scale_pane_g4

0x03f5,	// (0x00068ed8) mup_scale_pane_g5

0x9b00,	// (0x000725e3) mup_scale_pane_g6

0x9b09,	// (0x000725ec) mup_scale_pane_g7

0x02b7,	// (0x00068d9a) cams2_slider_pane_g3

0x19eb,	// (0x0006a4ce) cams2_slider_pane_g4

0xac2e,	// (0x00073711) cams2_slider_pane_g5

0x02b7,	// (0x00068d9a) cams2_slider_pane_g6

0xac36,	// (0x00073719) cams2_slider_pane_g7

0x1c2d,	// (0x0006a710) camera2_autofocus_pane_cp_g1

0x1f1b,	// (0x0006a9fe) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f1b,	// (0x0006a9fe) bg_popup_preview_window_pane_cp02

0x1f27,	// (0x0006aa0a) list_fp_cale_pane_ParamLimits

0x1f27,	// (0x0006aa0a) list_fp_cale_pane

0x1f33,	// (0x0006aa16) popup_fixed_preview_cale_window_t1_ParamLimits

0x1f33,	// (0x0006aa16) popup_fixed_preview_cale_window_t1

0xb516,	// (0x00073ff9) popup_fixed_preview_cale_window_t2_ParamLimits

0xb516,	// (0x00073ff9) popup_fixed_preview_cale_window_t2

0xb52b,	// (0x0007400e) popup_fixed_preview_cale_window_t3_ParamLimits

0xb52b,	// (0x0007400e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0007829d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0007829d) popup_fixed_preview_cale_window_t

0xb540,	// (0x00074023) list_single_fp_cale_pane_ParamLimits

0xb540,	// (0x00074023) list_single_fp_cale_pane

0x1f69,	// (0x0006aa4c) list_single_fp_cale_pane_g1_ParamLimits

0x1f69,	// (0x0006aa4c) list_single_fp_cale_pane_g1

0x1f75,	// (0x0006aa58) list_single_fp_cale_pane_g2_ParamLimits

0x1f75,	// (0x0006aa58) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000782a4) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000782a4) list_single_fp_cale_pane_g

0x1f8e,	// (0x0006aa71) list_single_fp_cale_pane_t1_ParamLimits

0x1f8e,	// (0x0006aa71) list_single_fp_cale_pane_t1

0x1fa0,	// (0x0006aa83) list_single_fp_cale_pane_t2_ParamLimits

0x1fa0,	// (0x0006aa83) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000782ab) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000782ab) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4026,	// (0x0006cb09) main_dialer_pane

0xb54d,	// (0x00074030) aid_cell_size_keypad

0xb557,	// (0x0007403a) dialer_ne_pane

0xb561,	// (0x00074044) grid_dialer_command_1_pane

0xb569,	// (0x0007404c) grid_dialer_command_2_pane

0xb571,	// (0x00074054) grid_dialer_keypad_pane

0xb585,	// (0x00074068) bg_popup_call_pane_cp06_ParamLimits

0xb585,	// (0x00074068) bg_popup_call_pane_cp06

0xb591,	// (0x00074074) dialer_ne_clear_pane_ParamLimits

0xb591,	// (0x00074074) dialer_ne_clear_pane

0x1fd3,	// (0x0006aab6) dialer_ne_pane_g1

0x1fdb,	// (0x0006aabe) dialer_ne_pane_t1_ParamLimits

0x1fdb,	// (0x0006aabe) dialer_ne_pane_t1

0xb59d,	// (0x00074080) dialer_ne_pane_t2_ParamLimits

0xb59d,	// (0x00074080) dialer_ne_pane_t2

0xb5ba,	// (0x0007409d) dialer_ne_pane_t3_ParamLimits

0xb5ba,	// (0x0007409d) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000782b0) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000782b0) dialer_ne_pane_t

0xb5de,	// (0x000740c1) dialer_ne_pane_t3_copy1_ParamLimits

0xb5de,	// (0x000740c1) dialer_ne_pane_t3_copy1

0xb602,	// (0x000740e5) cell_dialer_keypad_pane_ParamLimits

0xb602,	// (0x000740e5) cell_dialer_keypad_pane

0xb617,	// (0x000740fa) cell_dialer_command_1_pane_ParamLimits

0xb617,	// (0x000740fa) cell_dialer_command_1_pane

0xb62d,	// (0x00074110) cell_dialer_command_2_pane_ParamLimits

0xb62d,	// (0x00074110) cell_dialer_command_2_pane

0x1fed,	// (0x0006aad0) bg_button_pane_cp02_ParamLimits

0x1fed,	// (0x0006aad0) bg_button_pane_cp02

0xb63c,	// (0x0007411f) cell_dialer_keypad_pane_g1_ParamLimits

0xb63c,	// (0x0007411f) cell_dialer_keypad_pane_g1

0x1fed,	// (0x0006aad0) bg_button_pane_cp03_ParamLimits

0x1fed,	// (0x0006aad0) bg_button_pane_cp03

0xb651,	// (0x00074134) cell_dialer_command_1_pane_g1_ParamLimits

0xb651,	// (0x00074134) cell_dialer_command_1_pane_g1

0x1ff9,	// (0x0006aadc) bg_button_pane_cp04

0xb665,	// (0x00074148) cell_dialer_command_2_pane_g1

0x028b,	// (0x00068d6e) bg_button_pane_cp06

0x2001,	// (0x0006aae4) dialer_ne_clear_pane_g1

0x95cc,	// (0x000720af) navi_pane_g2

0x95fa,	// (0x000720dd) navi_pane_g3

0x0002,

0xf3f5,	// (0x00077ed8) navi_pane_g

0x9625,	// (0x00072108) navi_pane_mv_g2

0x964c,	// (0x0007212f) navi_pane_mv_g5

0x9654,	// (0x00072137) navi_pane_mv_t1

0x4d61,	// (0x0006d844) main_clock2_pane

0xb697,	// (0x0007417a) main_clock2_list_pane_ParamLimits

0xb697,	// (0x0007417a) main_clock2_list_pane

0xb6c1,	// (0x000741a4) main_clock2_pane_t1_ParamLimits

0xb6c1,	// (0x000741a4) main_clock2_pane_t1

0xb6e3,	// (0x000741c6) main_clock2_pane_t2_ParamLimits

0xb6e3,	// (0x000741c6) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000782b7) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000782b7) main_clock2_pane_t

0xb740,	// (0x00074223) popup_clock_analogue_window_cp03_ParamLimits

0xb740,	// (0x00074223) popup_clock_analogue_window_cp03

0xb760,	// (0x00074243) popup_clock_digital_window_cp02_ParamLimits

0xb760,	// (0x00074243) popup_clock_digital_window_cp02

0xb7d1,	// (0x000742b4) main_clock2_list_single_pane_ParamLimits

0xb7d1,	// (0x000742b4) main_clock2_list_single_pane

0x028b,	// (0x00068d6e) list_highlight_pane_cp05

0x2009,	// (0x0006aaec) main_clock2_list_single_pane_t1

0x83f3,	// (0x00070ed6) popup_toolbar_window_cp04_ParamLimits

0xad3a,	// (0x0007381d) camera2_autofocus_pane_g2_ParamLimits

0xad3a,	// (0x0007381d) camera2_autofocus_pane_g2

0xad46,	// (0x00073829) camera2_autofocus_pane_g3_ParamLimits

0xad46,	// (0x00073829) camera2_autofocus_pane_g3

0xad52,	// (0x00073835) camera2_autofocus_pane_g4_ParamLimits

0xad52,	// (0x00073835) camera2_autofocus_pane_g4

0xad5e,	// (0x00073841) camera2_autofocus_pane_g5_ParamLimits

0xad5e,	// (0x00073841) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00078200) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00078200) camera2_autofocus_pane_g

0xaf24,	// (0x00073a07) camera2_autofocus_pane_cp_g2

0xaf2c,	// (0x00073a0f) camera2_autofocus_pane_cp_g3

0xaf34,	// (0x00073a17) camera2_autofocus_pane_cp_g4

0xaf3c,	// (0x00073a1f) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00078266) camera2_autofocus_pane_cp_g

0xb57d,	// (0x00074060) popup_dialer_spcha_window

0x4026,	// (0x0006cb09) bg_popup_sub_pane_cp07

0x2017,	// (0x0006aafa) list_spcha_pane

0x201f,	// (0x0006ab02) list_single_spcha_pane_ParamLimits

0x201f,	// (0x0006ab02) list_single_spcha_pane

0x4026,	// (0x0006cb09) list_highlight_pane_cp06

0x2030,	// (0x0006ab13) list_single_spcha_pane_t1

0x113d,	// (0x00069c20) popup_call2_audio_out_window_g4_ParamLimits

0x113d,	// (0x00069c20) popup_call2_audio_out_window_g4

0x4026,	// (0x0006cb09) main_imed2_pane

0xa3d0,	// (0x00072eb3) popup_imed_adjust2_window

0xa3e3,	// (0x00072ec6) popup_imed_trans_window_ParamLimits

0xa3e3,	// (0x00072ec6) popup_imed_trans_window

0x1a65,	// (0x0006a548) popup_blid_sat_info2_window_t1

0x1a73,	// (0x0006a556) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00078195) popup_blid_sat_info2_window_t

0xb87b,	// (0x0007435e) aid_size_cell_colour_35

0xb895,	// (0x00074378) aid_size_cell_colour_112

0xb8ac,	// (0x0007438f) aid_size_cell_effect

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp02

0xf0ac,	// (0x00077b8f) heading_imed_pane

0xb8c6,	// (0x000743a9) listscroll_imed_pane

0x203e,	// (0x0006ab21) heading_imed_pane_g1

0x2046,	// (0x0006ab29) heading_imed_pane_t1

0x2054,	// (0x0006ab37) grid_imed_colour_35_pane_ParamLimits

0x2054,	// (0x0006ab37) grid_imed_colour_35_pane

0xb8d2,	// (0x000743b5) grid_imed_effect_pane

0x2070,	// (0x0006ab53) list_imed_aspect_pane

0xb8e2,	// (0x000743c5) scroll_pane_cp027_ParamLimits

0xb8e2,	// (0x000743c5) scroll_pane_cp027

0xb8ee,	// (0x000743d1) cell_imed_effect_pane_ParamLimits

0xb8ee,	// (0x000743d1) cell_imed_effect_pane

0x2078,	// (0x0006ab5b) cell_imed_colour_pane_ParamLimits

0x2078,	// (0x0006ab5b) cell_imed_colour_pane

0x20c2,	// (0x0006aba5) cell_imed_colour_pane_g1_ParamLimits

0x20c2,	// (0x0006aba5) cell_imed_colour_pane_g1

0x20d3,	// (0x0006abb6) hgihlgiht_grid_pane_cp016_ParamLimits

0x20d3,	// (0x0006abb6) hgihlgiht_grid_pane_cp016

0xb90a,	// (0x000743ed) cell_imed_effect_pane_g1

0xb912,	// (0x000743f5) grid_highlight_pane_cp017

0x20e4,	// (0x0006abc7) list_imed_single_pane_ParamLimits

0x20e4,	// (0x0006abc7) list_imed_single_pane

0x4026,	// (0x0006cb09) list_highlight_pane_cp07

0x20f8,	// (0x0006abdb) list_imed_aspect_pane_comp1_t1

0x16f8,	// (0x0006a1db) bg_tb_trans_pane_cp05

0x211a,	// (0x0006abfd) popup_imed_adjust2_window_g1

0x2141,	// (0x0006ac24) popup_imed_adjust2_window_t1

0x2159,	// (0x0006ac3c) slider_imed_adjust_pane

0x216d,	// (0x0006ac50) slider_imed_adjust_pane_g1

0x217d,	// (0x0006ac60) slider_imed_adjust_pane_g2

0x218d,	// (0x0006ac70) slider_imed_adjust_pane_g3

0x219e,	// (0x0006ac81) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000782d4) slider_imed_adjust_pane_g

0xb91b,	// (0x000743fe) aid_size_cell_clipart2

0xb927,	// (0x0007440a) grid_imed_clipart_pane

0x21af,	// (0x0006ac92) scroll_pane_cp031

0xb931,	// (0x00074414) cell_imed_clipart_pane_ParamLimits

0xb931,	// (0x00074414) cell_imed_clipart_pane

0xb94f,	// (0x00074432) cell_imed_clipart_pane_g1

0x4026,	// (0x0006cb09) grid_highlight_pane_cp014

0xb6a3,	// (0x00074186) main_clock2_pane_g1_ParamLimits

0xb6a3,	// (0x00074186) main_clock2_pane_g1

0xb77c,	// (0x0007425f) aid_call2_pane_cp10

0xb78e,	// (0x00074271) aid_call_pane_cp10

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g1

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g2

0xb7a0,	// (0x00074283) popup_clock_analogue_window_cp10_g3

0xb7a0,	// (0x00074283) popup_clock_analogue_window_cp10_g4

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000782c2) popup_clock_analogue_window_cp10_g

0xb7b2,	// (0x00074295) popup_clock_analogue_window_cp10_t1

0xb7e3,	// (0x000742c6) clock_digital_number_pane_cp10_ParamLimits

0xb7e3,	// (0x000742c6) clock_digital_number_pane_cp10

0xb7fb,	// (0x000742de) clock_digital_number_pane_cp11_ParamLimits

0xb7fb,	// (0x000742de) clock_digital_number_pane_cp11

0xb813,	// (0x000742f6) clock_digital_number_pane_cp12_ParamLimits

0xb813,	// (0x000742f6) clock_digital_number_pane_cp12

0xb82b,	// (0x0007430e) clock_digital_number_pane_cp13_ParamLimits

0xb82b,	// (0x0007430e) clock_digital_number_pane_cp13

0xb843,	// (0x00074326) clock_digital_separator_pane_cp10_ParamLimits

0xb843,	// (0x00074326) clock_digital_separator_pane_cp10

0xb85b,	// (0x0007433e) popup_clock_digital_window_cp02_t1_ParamLimits

0xb85b,	// (0x0007433e) popup_clock_digital_window_cp02_t1

0x4c86,	// (0x0006d769) clock_digital_number_pane_cp10_g1

0x4c86,	// (0x0006d769) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x000782dd) clock_digital_number_pane_cp10_g

0x4c86,	// (0x0006d769) clock_digital_separator_pane_cp10_g1

0x4c86,	// (0x0006d769) clock_digital_separator_pane_g2_cp10

0x025b,	// (0x00068d3e) navi_pane_vded_g4

0x0264,	// (0x00068d47) navi_pane_vded_g5

0x026d,	// (0x00068d50) navi_pane_vded_t1

0x4026,	// (0x0006cb09) main_vded_pane

0xb958,	// (0x0007443b) main_vded_pane_g1

0xb964,	// (0x00074447) main_vded_pane_g2

0xb96e,	// (0x00074451) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x000782e2) main_vded_pane_g

0xb978,	// (0x0007445b) main_vded_pane_t1

0xb986,	// (0x00074469) main_vded_pane_t2

0x0001,

0xf806,	// (0x000782e9) main_vded_pane_t

0xb994,	// (0x00074477) vded_slider_pane

0xb99e,	// (0x00074481) vded_video_pane

0x21b7,	// (0x0006ac9a) vded_video_pane_g1

0xb9aa,	// (0x0007448d) vded_video_pane_g2

0x1c2d,	// (0x0006a710) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000782ee) vded_video_pane_g

0x21c1,	// (0x0006aca4) vded_slider_pane_g1

0x1936,	// (0x0006a419) vded_slider_pane_g2

0x21ca,	// (0x0006acad) vded_slider_pane_g3

0x21d3,	// (0x0006acb6) vded_slider_pane_g4

0x21dc,	// (0x0006acbf) vded_slider_pane_g5

0x0004,

0xf812,	// (0x000782f5) vded_slider_pane_g

0xb49e,	// (0x00073f81) mup3_rocker_pane_ParamLimits

0xb49e,	// (0x00073f81) mup3_rocker_pane

0xb9b3,	// (0x00074496) mup3_control_keys_pane_g1

0xb9bb,	// (0x0007449e) mup3_control_keys_pane_g2

0xb9c3,	// (0x000744a6) mup3_control_keys_pane_g3

0xb9cb,	// (0x000744ae) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00078300) mup3_control_keys_pane_g

0x75b4,	// (0x00070097) popup_toolbar2_fixed_window_cp01_ParamLimits

0x75b4,	// (0x00070097) popup_toolbar2_fixed_window_cp01

0xb4ba,	// (0x00073f9d) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb4ba,	// (0x00073f9d) popup_toolbar2_fixed_window_cp02

0x0a7c,	// (0x0006955f) popup_call2_audio_second_window_t4_ParamLimits

0x0a7c,	// (0x0006955f) popup_call2_audio_second_window_t4

0x0faa,	// (0x00069a8d) popup_call2_audio_first_window_t6_ParamLimits

0x0faa,	// (0x00069a8d) popup_call2_audio_first_window_t6

0x1240,	// (0x00069d23) popup_call2_audio_out_window_t6_ParamLimits

0x1240,	// (0x00069d23) popup_call2_audio_out_window_t6

0x4026,	// (0x0006cb09) main_vitu_pane

0xb9db,	// (0x000744be) aid_size_cell_itu_ParamLimits

0xb9db,	// (0x000744be) aid_size_cell_itu

0x75dc,	// (0x000700bf) bg_popup_window_pane_cp08_ParamLimits

0x75dc,	// (0x000700bf) bg_popup_window_pane_cp08

0xb9e9,	// (0x000744cc) field_vitu_entry_pane_ParamLimits

0xb9e9,	// (0x000744cc) field_vitu_entry_pane

0xb9f8,	// (0x000744db) grid_vitu_function_pane_ParamLimits

0xb9f8,	// (0x000744db) grid_vitu_function_pane

0xba08,	// (0x000744eb) grid_vitu_itu_pane_ParamLimits

0xba08,	// (0x000744eb) grid_vitu_itu_pane

0xba16,	// (0x000744f9) cell_vitu_itu_pane_ParamLimits

0xba16,	// (0x000744f9) cell_vitu_itu_pane

0xba2d,	// (0x00074510) cell_vitu_function_pane_ParamLimits

0xba2d,	// (0x00074510) cell_vitu_function_pane

0x4281,	// (0x0006cd64) bg_popup_sub_pane_cp08_ParamLimits

0x4281,	// (0x0006cd64) bg_popup_sub_pane_cp08

0xba41,	// (0x00074524) field_vitu_entry_pane_t1_ParamLimits

0xba41,	// (0x00074524) field_vitu_entry_pane_t1

0x21fd,	// (0x0006ace0) field_vitu_entry_pane_t2_ParamLimits

0x21fd,	// (0x0006ace0) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0007830e) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0007830e) field_vitu_entry_pane_t

0x221a,	// (0x0006acfd) bg_button_pane_cp05_ParamLimits

0x221a,	// (0x0006acfd) bg_button_pane_cp05

0xba5a,	// (0x0007453d) cell_vitu_itu_pane_g1

0xba72,	// (0x00074555) cell_vitu_itu_pane_t1_ParamLimits

0xba72,	// (0x00074555) cell_vitu_itu_pane_t1

0xba84,	// (0x00074567) cell_vitu_itu_pane_t2_ParamLimits

0xba84,	// (0x00074567) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00078313) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00078313) cell_vitu_itu_pane_t

0x2228,	// (0x0006ad0b) bg_button_pane_cp07

0xbac7,	// (0x000745aa) cell_vitu_function_pane_g1

0x7830,	// (0x00070313) main_calc_pane_g1

0x7375,	// (0x0006fe58) aid_visual_content_pane

0x4026,	// (0x0006cb09) main_vradio_pane

0xbad0,	// (0x000745b3) main_vradio_pane_g1_ParamLimits

0xbad0,	// (0x000745b3) main_vradio_pane_g1

0x2232,	// (0x0006ad15) main_vradio_pane_g2_ParamLimits

0x2232,	// (0x0006ad15) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0007831a) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0007831a) main_vradio_pane_g

0xbade,	// (0x000745c1) main_vradio_pane_t1_ParamLimits

0xbade,	// (0x000745c1) main_vradio_pane_t1

0xbaf0,	// (0x000745d3) main_vradio_pane_t2_ParamLimits

0xbaf0,	// (0x000745d3) main_vradio_pane_t2

0x223f,	// (0x0006ad22) main_vradio_pane_t3_ParamLimits

0x223f,	// (0x0006ad22) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0007831f) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0007831f) main_vradio_pane_t

0xbb02,	// (0x000745e5) vradio_rocker_control_pane_ParamLimits

0xbb02,	// (0x000745e5) vradio_rocker_control_pane

0xbb0e,	// (0x000745f1) vradio_station_info_pane_ParamLimits

0xbb0e,	// (0x000745f1) vradio_station_info_pane

0x2253,	// (0x0006ad36) vradio_frequency_info_pane_ParamLimits

0x2253,	// (0x0006ad36) vradio_frequency_info_pane

0x1c2d,	// (0x0006a710) vradio_station_info_pane_g1

0x2262,	// (0x0006ad45) vradio_station_info_pane_t1_ParamLimits

0x2262,	// (0x0006ad45) vradio_station_info_pane_t1

0x2284,	// (0x0006ad67) vradio_station_info_pane_t2_ParamLimits

0x2284,	// (0x0006ad67) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00078326) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00078326) vradio_station_info_pane_t

0x2296,	// (0x0006ad79) vradio_tuning_pane

0x229e,	// (0x0006ad81) vradio_rocker_control_pane_g1

0x22a6,	// (0x0006ad89) vradio_rocker_control_pane_g2

0x22ae,	// (0x0006ad91) vradio_rocker_control_pane_g3

0x22b6,	// (0x0006ad99) vradio_rocker_control_pane_g4

0x22be,	// (0x0006ada1) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0007832b) vradio_rocker_control_pane_g

0xbb1b,	// (0x000745fe) vradio_frequency_info_pane_g1

0x22c6,	// (0x0006ada9) vradio_frequency_info_pane_t1_ParamLimits

0x22c6,	// (0x0006ada9) vradio_frequency_info_pane_t1

0xbb25,	// (0x00074608) vradio_tuning_pane_g1

0xbb30,	// (0x00074613) vradio_tuning_pane_t1

0x73b6,	// (0x0006fe99) area_side_right_pane_ParamLimits

0x73b6,	// (0x0006fe99) area_side_right_pane

0x16bf,	// (0x0006a1a2) status_small_pane_g1

0x16c7,	// (0x0006a1aa) status_small_pane_g2

0x16d0,	// (0x0006a1b3) status_small_pane_g3

0x16d9,	// (0x0006a1bc) status_small_pane_g4

0x0003,

0xf608,	// (0x000780eb) status_small_pane_g

0x16e2,	// (0x0006a1c5) status_small_pane_t1

0x4026,	// (0x0006cb09) main_video3_pane

0x22da,	// (0x0006adbd) cams_zoom_vslider_pane

0x22e2,	// (0x0006adc5) image3_wide_pane_ParamLimits

0x22e2,	// (0x0006adc5) image3_wide_pane

0x22fc,	// (0x0006addf) image3_wide_small_pane

0x2308,	// (0x0006adeb) main_video3_pane_g1_ParamLimits

0x2308,	// (0x0006adeb) main_video3_pane_g1

0x2324,	// (0x0006ae07) main_video3_pane_g2_ParamLimits

0x2324,	// (0x0006ae07) main_video3_pane_g2

0x0001,

0xf853,	// (0x00078336) main_video3_pane_g_ParamLimits

0xf853,	// (0x00078336) main_video3_pane_g

0x2340,	// (0x0006ae23) main_video3_pane_t1_ParamLimits

0x2340,	// (0x0006ae23) main_video3_pane_t1

0x236b,	// (0x0006ae4e) main_video3_pane_t2_ParamLimits

0x236b,	// (0x0006ae4e) main_video3_pane_t2

0x2398,	// (0x0006ae7b) main_video3_pane_t3_ParamLimits

0x2398,	// (0x0006ae7b) main_video3_pane_t3

0x0002,

0xf858,	// (0x0007833b) main_video3_pane_t_ParamLimits

0xf858,	// (0x0007833b) main_video3_pane_t

0x23c5,	// (0x0006aea8) cams_zoom_vslider_pane_g1

0x23ce,	// (0x0006aeb1) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00078342) cams_zoom_vslider_pane_g

0x23d6,	// (0x0006aeb9) small_slider_vertical_pane

0x1c2d,	// (0x0006a710) small_slider_vertical_pane_g1

0x1c2d,	// (0x0006a710) small_slider_vertical_pane_g2

0x23de,	// (0x0006aec1) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00078347) small_slider_vertical_pane_g

0x4026,	// (0x0006cb09) main_hwr_training_pane

0x23e7,	// (0x0006aeca) hwr_training_instruct_pane_ParamLimits

0x23e7,	// (0x0006aeca) hwr_training_instruct_pane

0xbb3f,	// (0x00074622) hwr_training_navi_pane_ParamLimits

0xbb3f,	// (0x00074622) hwr_training_navi_pane

0xbb59,	// (0x0007463c) hwr_training_write_pane_ParamLimits

0xbb59,	// (0x0007463c) hwr_training_write_pane

0x4026,	// (0x0006cb09) bg_frame_shadow_pane

0x241e,	// (0x0006af01) hwr_training_write_pane_g1

0x2426,	// (0x0006af09) hwr_training_write_pane_g2

0x242e,	// (0x0006af11) hwr_training_write_pane_g3

0x2436,	// (0x0006af19) hwr_training_write_pane_g4

0x243e,	// (0x0006af21) hwr_training_write_pane_g5

0x2446,	// (0x0006af29) hwr_training_write_pane_g6

0x244e,	// (0x0006af31) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0007834e) hwr_training_write_pane_g

0xbb91,	// (0x00074674) hwr_training_navi_pane_g1_ParamLimits

0xbb91,	// (0x00074674) hwr_training_navi_pane_g1

0xbba3,	// (0x00074686) hwr_training_navi_pane_g2_ParamLimits

0xbba3,	// (0x00074686) hwr_training_navi_pane_g2

0xbbb5,	// (0x00074698) hwr_training_navi_pane_g3_ParamLimits

0xbbb5,	// (0x00074698) hwr_training_navi_pane_g3

0xbbc5,	// (0x000746a8) hwr_training_navi_pane_g4_ParamLimits

0xbbc5,	// (0x000746a8) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0007835d) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0007835d) hwr_training_navi_pane_g

0xbbdf,	// (0x000746c2) hwr_training_navi_pane_t1

0xbbed,	// (0x000746d0) list_single_hwr_training_instruct_pane_ParamLimits

0xbbed,	// (0x000746d0) list_single_hwr_training_instruct_pane

0x24a5,	// (0x0006af88) list_single_hwr_training_instruct_pane_t1

0x1b6d,	// (0x0006a650) bg_frame_shadow_pane_g1

0x24b4,	// (0x0006af97) bg_frame_shadow_pane_g2

0x24bc,	// (0x0006af9f) bg_frame_shadow_pane_g3

0x24c4,	// (0x0006afa7) bg_frame_shadow_pane_g4

0x24cc,	// (0x0006afaf) bg_frame_shadow_pane_g5

0x24d4,	// (0x0006afb7) bg_frame_shadow_pane_g6

0x24dc,	// (0x0006afbf) bg_frame_shadow_pane_g7

0x4e2c,	// (0x0006d90f) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00078368) bg_frame_shadow_pane_g

0x4026,	// (0x0006cb09) main_video_tele_dialer_pane

0xbc06,	// (0x000746e9) aid_size_cell_video_keypad_ParamLimits

0xbc06,	// (0x000746e9) aid_size_cell_video_keypad

0xbc16,	// (0x000746f9) grid_video_dialer_keypad_pane_ParamLimits

0xbc16,	// (0x000746f9) grid_video_dialer_keypad_pane

0xbc48,	// (0x0007472b) video_down_pane_cp_ParamLimits

0xbc48,	// (0x0007472b) video_down_pane_cp

0xbc70,	// (0x00074753) cell_video_dialer_keypad_pane_ParamLimits

0xbc70,	// (0x00074753) cell_video_dialer_keypad_pane

0x24e4,	// (0x0006afc7) bg_button_pane_cp08_ParamLimits

0x24e4,	// (0x0006afc7) bg_button_pane_cp08

0xbc87,	// (0x0007476a) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbc87,	// (0x0007476a) cell_video_dialer_keypad_pane_g1

0xb492,	// (0x00073f75) mup3_rocker2_pane_ParamLimits

0xb492,	// (0x00073f75) mup3_rocker2_pane

0x1c2d,	// (0x0006a710) mup3_rocker2_pane_g1

0xa334,	// (0x00072e17) main_dialer2_pane

0x4026,	// (0x0006cb09) main_mp4_pane

0xbcc6,	// (0x000747a9) main_mp4_pane_g1_ParamLimits

0xbcc6,	// (0x000747a9) main_mp4_pane_g1

0xbcd4,	// (0x000747b7) main_mp4_pane_g2_ParamLimits

0xbcd4,	// (0x000747b7) main_mp4_pane_g2

0xbce2,	// (0x000747c5) main_mp4_pane_g3_ParamLimits

0xbce2,	// (0x000747c5) main_mp4_pane_g3

0xbd35,	// (0x00074818) main_mp4_pane_g4_ParamLimits

0xbd35,	// (0x00074818) main_mp4_pane_g4

0xbd5d,	// (0x00074840) main_mp4_pane_g5_ParamLimits

0xbd5d,	// (0x00074840) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00078388) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00078388) main_mp4_pane_g

0xbdad,	// (0x00074890) main_mp4_pane_t1_ParamLimits

0xbdad,	// (0x00074890) main_mp4_pane_t1

0xbe09,	// (0x000748ec) main_mp4_pane_t2_ParamLimits

0xbe09,	// (0x000748ec) main_mp4_pane_t2

0x262c,	// (0x0006b10f) main_mp4_pane_t3_ParamLimits

0x262c,	// (0x0006b10f) main_mp4_pane_t3

0xbe5b,	// (0x0007493e) main_mp4_pane_t4_ParamLimits

0xbe5b,	// (0x0007493e) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00078395) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00078395) main_mp4_pane_t

0xbe9b,	// (0x0007497e) mp4_progress_pane_ParamLimits

0xbe9b,	// (0x0007497e) mp4_progress_pane

0xbee5,	// (0x000749c8) mp4_rocker_pane_ParamLimits

0xbee5,	// (0x000749c8) mp4_rocker_pane

0x2700,	// (0x0006b1e3) mp4_progress_pane_t1

0x2719,	// (0x0006b1fc) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0007839e) mp4_progress_pane_t

0x2732,	// (0x0006b215) mup_progress_pane_cp04

0x1c2d,	// (0x0006a710) mp4_rocker_pane_g1

0xbf07,	// (0x000749ea) aid_cell_size_keypad2_ParamLimits

0xbf07,	// (0x000749ea) aid_cell_size_keypad2

0xbf17,	// (0x000749fa) dialer2_ne_pane_ParamLimits

0xbf17,	// (0x000749fa) dialer2_ne_pane

0xbf23,	// (0x00074a06) grid_dialer2_keypad_pane_ParamLimits

0xbf23,	// (0x00074a06) grid_dialer2_keypad_pane

0x32ba,	// (0x0006bd9d) bg_popup_call_pane_cp07_ParamLimits

0x32ba,	// (0x0006bd9d) bg_popup_call_pane_cp07

0xbf31,	// (0x00074a14) dialer2_ne_pane_t1_ParamLimits

0xbf31,	// (0x00074a14) dialer2_ne_pane_t1

0xbf56,	// (0x00074a39) cell_dialer2_keypad_pane_ParamLimits

0xbf56,	// (0x00074a39) cell_dialer2_keypad_pane

0x275a,	// (0x0006b23d) bg_button_pane_pane_cp04_ParamLimits

0x275a,	// (0x0006b23d) bg_button_pane_pane_cp04

0xbf6d,	// (0x00074a50) cell_dialer2_keypad_pane_g1_ParamLimits

0xbf6d,	// (0x00074a50) cell_dialer2_keypad_pane_g1

0x82c5,	// (0x00070da8) aid_placing_vt_set_content_ParamLimits

0x82c5,	// (0x00070da8) aid_placing_vt_set_content

0x82ed,	// (0x00070dd0) aid_placing_vt_set_title_ParamLimits

0x82ed,	// (0x00070dd0) aid_placing_vt_set_title

0x4026,	// (0x0006cb09) main_image3_pane

0xc007,	// (0x00074aea) area_side_right_pane_cp01_ParamLimits

0xc007,	// (0x00074aea) area_side_right_pane_cp01

0xf0b8,	// (0x00077b9b) main_image3_pane_g1_ParamLimits

0xf0b8,	// (0x00077b9b) main_image3_pane_g1

0xc036,	// (0x00074b19) main_image3_pane_g2_ParamLimits

0xc036,	// (0x00074b19) main_image3_pane_g2

0xc04f,	// (0x00074b32) main_image3_pane_g3_ParamLimits

0xc04f,	// (0x00074b32) main_image3_pane_g3

0xc068,	// (0x00074b4b) main_image3_pane_g4_ParamLimits

0xc068,	// (0x00074b4b) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000783ad) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000783ad) main_image3_pane_g

0xc081,	// (0x00074b64) main_image3_pane_t1_ParamLimits

0xc081,	// (0x00074b64) main_image3_pane_t1

0xc0a6,	// (0x00074b89) main_image3_pane_t2_ParamLimits

0xc0a6,	// (0x00074b89) main_image3_pane_t2

0xc0c5,	// (0x00074ba8) main_image3_pane_t3_ParamLimits

0xc0c5,	// (0x00074ba8) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000783b6) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000783b6) main_image3_pane_t

0x75dc,	// (0x000700bf) grid_sctrl_middle_pane_cp01_ParamLimits

0x75dc,	// (0x000700bf) grid_sctrl_middle_pane_cp01

0xc126,	// (0x00074c09) cell_sctrl_middle_pane_cp01_ParamLimits

0xc126,	// (0x00074c09) cell_sctrl_middle_pane_cp01

0xc137,	// (0x00074c1a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc137,	// (0x00074c1a) cell_sctrl_middle_pane_cp01_g1

0x4026,	// (0x0006cb09) main_call4_pane

0xc144,	// (0x00074c27) aid_size_button_call4_ParamLimits

0xc144,	// (0x00074c27) aid_size_button_call4

0xc176,	// (0x00074c59) call4_windows_pane_ParamLimits

0xc176,	// (0x00074c59) call4_windows_pane

0xc192,	// (0x00074c75) grid_call4_button_pane_ParamLimits

0xc192,	// (0x00074c75) grid_call4_button_pane

0x279a,	// (0x0006b27d) call4_windows_conf_pane

0xc1b6,	// (0x00074c99) popup_call4_audio_first_window_ParamLimits

0xc1b6,	// (0x00074c99) popup_call4_audio_first_window

0xc1e2,	// (0x00074cc5) popup_call4_audio_second_window_ParamLimits

0xc1e2,	// (0x00074cc5) popup_call4_audio_second_window

0x27d7,	// (0x0006b2ba) popup_call4_audio_wait_window_ParamLimits

0x27d7,	// (0x0006b2ba) popup_call4_audio_wait_window

0xc1f6,	// (0x00074cd9) cell_call4_button_pane_ParamLimits

0xc1f6,	// (0x00074cd9) cell_call4_button_pane

0xc219,	// (0x00074cfc) bg_button_pane_cp09_ParamLimits

0xc219,	// (0x00074cfc) bg_button_pane_cp09

0xc225,	// (0x00074d08) cell_call4_button_pane_g1_ParamLimits

0xc225,	// (0x00074d08) cell_call4_button_pane_g1

0xc232,	// (0x00074d15) cell_call4_button_pane_t1_ParamLimits

0xc232,	// (0x00074d15) cell_call4_button_pane_t1

0x281f,	// (0x0006b302) popup_call4_audio_conf_window_ParamLimits

0x281f,	// (0x0006b302) popup_call4_audio_conf_window

0xb4c7,	// (0x00073faa) mup3_progress_pane_t1_ParamLimits

0xb4e6,	// (0x00073fc9) mup3_progress_pane_t2_ParamLimits

0x1ed8,	// (0x0006a9bb) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0007828f) mup3_progress_pane_t_ParamLimits

0x1ef5,	// (0x0006a9d8) mup_progress_pane_cp03_ParamLimits

0xb9d3,	// (0x000744b6) mup3_control_keys_pane_g4_copy1

0xbec9,	// (0x000749ac) mp4_rocker2_pane_ParamLimits

0xbec9,	// (0x000749ac) mp4_rocker2_pane

0x2841,	// (0x0006b324) mp4_rocker2_pane_g1

0x2839,	// (0x0006b31c) mp4_rocker2_pane_g2

0xc244,	// (0x00074d27) mp4_rocker2_pane_g3

0xc24c,	// (0x00074d2f) mp4_rocker2_pane_g4

0xc254,	// (0x00074d37) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000783bf) mp4_rocker2_pane_g

0x4026,	// (0x0006cb09) main_camera4_pane

0x4026,	// (0x0006cb09) main_video4_pane

0xbc24,	// (0x00074707) main_video_tele_dialer_pane_t1_ParamLimits

0xbc24,	// (0x00074707) main_video_tele_dialer_pane_t1

0xbc36,	// (0x00074719) main_video_tele_dialer_pane_t2_ParamLimits

0xbc36,	// (0x00074719) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00078379) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00078379) main_video_tele_dialer_pane_t

0xc274,	// (0x00074d57) cam4_autofocus_pane_ParamLimits

0xc274,	// (0x00074d57) cam4_autofocus_pane

0xc28c,	// (0x00074d6f) cam4_image_uncrop_pane_ParamLimits

0xc28c,	// (0x00074d6f) cam4_image_uncrop_pane

0xc2a5,	// (0x00074d88) cam4_indicators_pane_ParamLimits

0xc2a5,	// (0x00074d88) cam4_indicators_pane

0xc2c1,	// (0x00074da4) main_camera4_pane_g1_ParamLimits

0xc2c1,	// (0x00074da4) main_camera4_pane_g1

0xc2cd,	// (0x00074db0) main_camera4_pane_g2_ParamLimits

0xc2cd,	// (0x00074db0) main_camera4_pane_g2

0xc2cd,	// (0x00074db0) main_camera4_pane_g3_ParamLimits

0xc2cd,	// (0x00074db0) main_camera4_pane_g3

0xc2d9,	// (0x00074dbc) main_camera4_pane_g4_ParamLimits

0xc2d9,	// (0x00074dbc) main_camera4_pane_g4

0xc2e5,	// (0x00074dc8) main_camera4_pane_g5_ParamLimits

0xc2e5,	// (0x00074dc8) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x000783ca) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x000783ca) main_camera4_pane_g

0xc2ff,	// (0x00074de2) main_camera4_pane_t1_ParamLimits

0xc2ff,	// (0x00074de2) main_camera4_pane_t1

0x1e5d,	// (0x0006a940) bg_tb_trans_pane_cp06

0xc351,	// (0x00074e34) cam4_indicators_pane_g1

0xc362,	// (0x00074e45) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x000783e5) cam4_indicators_pane_g

0xc37a,	// (0x00074e5d) cam4_indicators_pane_t1

0xc3a4,	// (0x00074e87) main_video4_pane_g1_ParamLimits

0xc3a4,	// (0x00074e87) main_video4_pane_g1

0xc3b0,	// (0x00074e93) main_video4_pane_g2_ParamLimits

0xc3b0,	// (0x00074e93) main_video4_pane_g2

0xc3bc,	// (0x00074e9f) main_video4_pane_g3_ParamLimits

0xc3bc,	// (0x00074e9f) main_video4_pane_g3

0xc3c8,	// (0x00074eab) main_video4_pane_g4_ParamLimits

0xc3c8,	// (0x00074eab) main_video4_pane_g4

0x0004,

0xf909,	// (0x000783ec) main_video4_pane_g_ParamLimits

0xf909,	// (0x000783ec) main_video4_pane_g

0xc3ea,	// (0x00074ecd) vid4_indicators_pane_ParamLimits

0xc3ea,	// (0x00074ecd) vid4_indicators_pane

0xc409,	// (0x00074eec) video4_image_uncrop_cif_pane_ParamLimits

0xc409,	// (0x00074eec) video4_image_uncrop_cif_pane

0xc418,	// (0x00074efb) video4_image_uncrop_nhd_pane_ParamLimits

0xc418,	// (0x00074efb) video4_image_uncrop_nhd_pane

0xc28c,	// (0x00074d6f) video4_image_uncrop_vga_pane_ParamLimits

0xc28c,	// (0x00074d6f) video4_image_uncrop_vga_pane

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp07

0xc431,	// (0x00074f14) vid4_indicators_pane_g1

0xc447,	// (0x00074f2a) vid4_indicators_pane_g2

0xc45b,	// (0x00074f3e) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x000783f7) vid4_indicators_pane_g

0xc48c,	// (0x00074f6f) vid4_indicators_pane_t1

0xc4a3,	// (0x00074f86) cam4_autofocus_pane_g1

0xc4ab,	// (0x00074f8e) cam4_autofocus_pane_g2

0xc4b3,	// (0x00074f96) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00078402) cam4_autofocus_pane_g

0xc4bb,	// (0x00074f9e) cam4_autofocus_pane_g3_copy1

0xbc54,	// (0x00074737) video_down_pane_cp_t1

0xbc62,	// (0x00074745) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0007837e) video_down_pane_cp_t

0x75dc,	// (0x000700bf) popup_vitu2_window_ParamLimits

0x75dc,	// (0x000700bf) popup_vitu2_window

0xc4c3,	// (0x00074fa6) aid_size_cell2_itu2_ParamLimits

0xc4c3,	// (0x00074fa6) aid_size_cell2_itu2

0xc4e5,	// (0x00074fc8) aid_size_cell_itu2_ParamLimits

0xc4e5,	// (0x00074fc8) aid_size_cell_itu2

0x32ba,	// (0x0006bd9d) bg_popup_window_pane_cp09_ParamLimits

0x32ba,	// (0x0006bd9d) bg_popup_window_pane_cp09

0xc529,	// (0x0007500c) field_vitu2_entry_pane_ParamLimits

0xc529,	// (0x0007500c) field_vitu2_entry_pane

0xc549,	// (0x0007502c) grid_vitu2_function_pane_ParamLimits

0xc549,	// (0x0007502c) grid_vitu2_function_pane

0xc58d,	// (0x00075070) grid_vitu2_itu_pane_ParamLimits

0xc58d,	// (0x00075070) grid_vitu2_itu_pane

0xc601,	// (0x000750e4) cell_vitu2_itu_pane_ParamLimits

0xc601,	// (0x000750e4) cell_vitu2_itu_pane

0xc618,	// (0x000750fb) cell_vitu2_function_pane_ParamLimits

0xc618,	// (0x000750fb) cell_vitu2_function_pane

0x2972,	// (0x0006b455) bg_popup_call_pane_cp08_ParamLimits

0x2972,	// (0x0006b455) bg_popup_call_pane_cp08

0x298b,	// (0x0006b46e) field_vitu2_entry_pane_g1

0x2997,	// (0x0006b47a) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00078409) field_vitu2_entry_pane_g

0x648e,	// (0x0006ef71) field_vitu2_entry_pane_t1_ParamLimits

0x648e,	// (0x0006ef71) field_vitu2_entry_pane_t1

0x64bb,	// (0x0006ef9e) field_vitu2_entry_pane_t2_ParamLimits

0x64bb,	// (0x0006ef9e) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00078410) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00078410) field_vitu2_entry_pane_t

0xc65c,	// (0x0007513f) bg_button_pane_cp010_ParamLimits

0xc65c,	// (0x0007513f) bg_button_pane_cp010

0xc66a,	// (0x0007514d) cell_vitu2_itu_pane_g1

0xc688,	// (0x0007516b) cell_vitu2_itu_pane_t1_ParamLimits

0xc688,	// (0x0007516b) cell_vitu2_itu_pane_t1

0x64d8,	// (0x0006efbb) cell_vitu2_itu_pane_t2_ParamLimits

0x64d8,	// (0x0006efbb) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0007841a) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0007841a) cell_vitu2_itu_pane_t

0x4281,	// (0x0006cd64) bg_button_pane_cp011

0xc6da,	// (0x000751bd) cell_vitu2_function_pane_g1

0x4026,	// (0x0006cb09) main_myfav_hc_pane

0xc107,	// (0x00074bea) popup_image3_note_pane_ParamLimits

0xc107,	// (0x00074bea) popup_image3_note_pane

0xc115,	// (0x00074bf8) popup_image3_tool_bar_pane_ParamLimits

0xc115,	// (0x00074bf8) popup_image3_tool_bar_pane

0x6546,	// (0x0006f029) cell_vitu2_itu_pane_t3_ParamLimits

0x6546,	// (0x0006f029) cell_vitu2_itu_pane_t3

0x4026,	// (0x0006cb09) bg_popup_trans_pane

0x29b9,	// (0x0006b49c) grid_image3_tool_bar_pane

0x29c3,	// (0x0006b4a6) bg_popup_trans_pane_g1

0x522b,	// (0x0006dd0e) bg_popup_trans_pane_g2

0x29cb,	// (0x0006b4ae) bg_popup_trans_pane_g3

0x29d3,	// (0x0006b4b6) bg_popup_trans_pane_g4

0x29db,	// (0x0006b4be) bg_popup_trans_pane_g5

0x29e3,	// (0x0006b4c6) bg_popup_trans_pane_g6

0x29eb,	// (0x0006b4ce) bg_popup_trans_pane_g7

0x29f3,	// (0x0006b4d6) bg_popup_trans_pane_g8

0x520b,	// (0x0006dcee) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00078421) bg_popup_trans_pane_g

0x29fb,	// (0x0006b4de) cell_image3_tool_bar_pane_ParamLimits

0x29fb,	// (0x0006b4de) cell_image3_tool_bar_pane

0x1c2d,	// (0x0006a710) cell_image3_tool_bar_pane_g1

0x4026,	// (0x0006cb09) bg_popup_trans_pane_cp1

0x2a11,	// (0x0006b4f4) popup_image3_note_pane_t1

0x2a1f,	// (0x0006b502) popup_image3_note_pane_t2

0x2a2d,	// (0x0006b510) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00078434) popup_image3_note_pane_t

0x2a3d,	// (0x0006b520) popup_image3_note_pane_t3_copy1

0xc6ee,	// (0x000751d1) bg_myfav_hc_instruction_pane_ParamLimits

0xc6ee,	// (0x000751d1) bg_myfav_hc_instruction_pane

0xc706,	// (0x000751e9) cell_myfav_contact_pane_ParamLimits

0xc706,	// (0x000751e9) cell_myfav_contact_pane

0xc720,	// (0x00075203) cell_myfav_contact_pane_cp1_ParamLimits

0xc720,	// (0x00075203) cell_myfav_contact_pane_cp1

0xc738,	// (0x0007521b) cell_myfav_contact_pane_cp2_ParamLimits

0xc738,	// (0x0007521b) cell_myfav_contact_pane_cp2

0xc750,	// (0x00075233) cell_myfav_contact_pane_cp3_ParamLimits

0xc750,	// (0x00075233) cell_myfav_contact_pane_cp3

0xc767,	// (0x0007524a) cell_myfav_contact_pane_cp4_ParamLimits

0xc767,	// (0x0007524a) cell_myfav_contact_pane_cp4

0xc77d,	// (0x00075260) cell_myfav_contact_pane_cp5_ParamLimits

0xc77d,	// (0x00075260) cell_myfav_contact_pane_cp5

0xc791,	// (0x00075274) cell_myfav_contact_pane_cp6_ParamLimits

0xc791,	// (0x00075274) cell_myfav_contact_pane_cp6

0xc7a5,	// (0x00075288) cell_myfav_contact_pane_cp7_ParamLimits

0xc7a5,	// (0x00075288) cell_myfav_contact_pane_cp7

0x2a4b,	// (0x0006b52e) listscroll_gen_pane_cp05

0xc7bd,	// (0x000752a0) main_myfav_hc_pane_g1_ParamLimits

0xc7bd,	// (0x000752a0) main_myfav_hc_pane_g1

0xc7d7,	// (0x000752ba) main_myfav_hc_pane_g2_ParamLimits

0xc7d7,	// (0x000752ba) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0007843b) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0007843b) main_myfav_hc_pane_g

0xc809,	// (0x000752ec) main_myfav_hc_pane_t1_ParamLimits

0xc809,	// (0x000752ec) main_myfav_hc_pane_t1

0x2a54,	// (0x0006b537) main_myfav_hc_pane_t2_ParamLimits

0x2a54,	// (0x0006b537) main_myfav_hc_pane_t2

0x2a66,	// (0x0006b549) main_myfav_hc_pane_t3_ParamLimits

0x2a66,	// (0x0006b549) main_myfav_hc_pane_t3

0xc820,	// (0x00075303) main_myfav_hc_pane_t4_ParamLimits

0xc820,	// (0x00075303) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00078442) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00078442) main_myfav_hc_pane_t

0x1c2d,	// (0x0006a710) bg_myfav_hc_instruction_pane_g1

0x2a78,	// (0x0006b55b) cell_myfav_contact_pane_g1_ParamLimits

0x2a78,	// (0x0006b55b) cell_myfav_contact_pane_g1

0x2a78,	// (0x0006b55b) cell_myfav_contact_pane_g2_ParamLimits

0x2a78,	// (0x0006b55b) cell_myfav_contact_pane_g2

0x2a84,	// (0x0006b567) cell_myfav_contact_pane_g3_ParamLimits

0x2a84,	// (0x0006b567) cell_myfav_contact_pane_g3

0x1ec2,	// (0x0006a9a5) cell_myfav_contact_pane_g4_ParamLimits

0x1ec2,	// (0x0006a9a5) cell_myfav_contact_pane_g4

0x2a91,	// (0x0006b574) cell_myfav_contact_pane_g5_ParamLimits

0x2a91,	// (0x0006b574) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0007844d) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0007844d) cell_myfav_contact_pane_g

0xc7f1,	// (0x000752d4) main_myfav_hc_pane_g3_ParamLimits

0xc7f1,	// (0x000752d4) main_myfav_hc_pane_g3

0x74ee,	// (0x0006ffd1) popup_adpt_find_window

0xc84a,	// (0x0007532d) afind_page_pane_ParamLimits

0xc84a,	// (0x0007532d) afind_page_pane

0xc857,	// (0x0007533a) aid_size_cell_afind_ParamLimits

0xc857,	// (0x0007533a) aid_size_cell_afind

0xc871,	// (0x00075354) bg_popup_sub_pane_cp09_ParamLimits

0xc871,	// (0x00075354) bg_popup_sub_pane_cp09

0xc87e,	// (0x00075361) find_pane_cp01_ParamLimits

0xc87e,	// (0x00075361) find_pane_cp01

0x2a9d,	// (0x0006b580) grid_afind_control_pane_ParamLimits

0x2a9d,	// (0x0006b580) grid_afind_control_pane

0xc88b,	// (0x0007536e) grid_afind_pane_ParamLimits

0xc88b,	// (0x0007536e) grid_afind_pane

0xc8a7,	// (0x0007538a) cell_afind_pane_ParamLimits

0xc8a7,	// (0x0007538a) cell_afind_pane

0x1c2d,	// (0x0006a710) afind_page_pane_g1

0xc8f1,	// (0x000753d4) afind_page_pane_g2

0xc8fa,	// (0x000753dd) afind_page_pane_g3

0x0002,

0xf975,	// (0x00078458) afind_page_pane_g

0xc903,	// (0x000753e6) afind_page_pane_t1

0x2ab1,	// (0x0006b594) cell_afind_grid_control_pane_ParamLimits

0x2ab1,	// (0x0006b594) cell_afind_grid_control_pane

0x275a,	// (0x0006b23d) bg_button_pane_cp69_ParamLimits

0x275a,	// (0x0006b23d) bg_button_pane_cp69

0xc923,	// (0x00075406) cell_afind_pane_g1_ParamLimits

0xc923,	// (0x00075406) cell_afind_pane_g1

0xc930,	// (0x00075413) cell_afind_pane_t1_ParamLimits

0xc930,	// (0x00075413) cell_afind_pane_t1

0x4f62,	// (0x0006da45) bg_button_pane_cp72

0x2ac0,	// (0x0006b5a3) cell_afind_grid_control_pane_g1

0x9eaf,	// (0x00072992) aid_image_placing_area_ParamLimits

0x9eaf,	// (0x00072992) aid_image_placing_area

0x21e5,	// (0x0006acc8) field_vitu_entry_pane_g1_ParamLimits

0x21e5,	// (0x0006acc8) field_vitu_entry_pane_g1

0x21f1,	// (0x0006acd4) field_vitu_entry_pane_g2_ParamLimits

0x21f1,	// (0x0006acd4) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00078309) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00078309) field_vitu_entry_pane_g

0xba5a,	// (0x0007453d) cell_vitu_itu_pane_g1_ParamLimits

0xbaaa,	// (0x0007458d) cell_vitu_itu_pane_t3_ParamLimits

0xbaaa,	// (0x0007458d) cell_vitu_itu_pane_t3

0x2700,	// (0x0006b1e3) mp4_progress_pane_t1_ParamLimits

0x2719,	// (0x0006b1fc) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0007839e) mp4_progress_pane_t_ParamLimits

0x2732,	// (0x0006b215) mup_progress_pane_cp04_ParamLimits

0xc834,	// (0x00075317) main_myfav_hc_pane_t5_ParamLimits

0xc834,	// (0x00075317) main_myfav_hc_pane_t5

0x615d,	// (0x0006ec40) aid_zoom_text_primary

0x74ee,	// (0x0006ffd1) popup_adpt_find_window_ParamLimits

0x4281,	// (0x0006cd64) main_cam_set_pane

0xc2b3,	// (0x00074d96) cam4_zoom_pane_ParamLimits

0xc2b3,	// (0x00074d96) cam4_zoom_pane

0xc942,	// (0x00075425) main_cam_set_pane_g1_ParamLimits

0xc942,	// (0x00075425) main_cam_set_pane_g1

0xc950,	// (0x00075433) main_cam_set_pane_g2_ParamLimits

0xc950,	// (0x00075433) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0007845f) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0007845f) main_cam_set_pane_g

0xc95c,	// (0x0007543f) main_cam_set_pane_t1_ParamLimits

0xc95c,	// (0x0007543f) main_cam_set_pane_t1

0xc978,	// (0x0007545b) main_cset_listscroll_pane_ParamLimits

0xc978,	// (0x0007545b) main_cset_listscroll_pane

0xc9a7,	// (0x0007548a) main_cset_slider_pane_ParamLimits

0xc9a7,	// (0x0007548a) main_cset_slider_pane

0x2ad1,	// (0x0006b5b4) main_cset_list_pane_ParamLimits

0x2ad1,	// (0x0006b5b4) main_cset_list_pane

0x2ae1,	// (0x0006b5c4) scroll_pane_cp028

0xc9c8,	// (0x000754ab) aid_area_touch_slider

0xc9e4,	// (0x000754c7) cset_slider_pane

0xca0e,	// (0x000754f1) main_cset_slider_pane_g1

0xca23,	// (0x00075506) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00078464) main_cset_slider_pane_g

0x2b1a,	// (0x0006b5fd) main_cset_slider_pane_t1

0xcadf,	// (0x000755c2) main_cset_slider_pane_t2

0xcaf9,	// (0x000755dc) main_cset_slider_pane_t3

0xcb13,	// (0x000755f6) main_cset_slider_pane_t4

0xcb2d,	// (0x00075610) main_cset_slider_pane_t5

0xcb47,	// (0x0007562a) main_cset_slider_pane_t6

0xcb5c,	// (0x0007563f) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00078489) main_cset_slider_pane_t

0xcc60,	// (0x00075743) cset_list_set_pane_ParamLimits

0xcc60,	// (0x00075743) cset_list_set_pane

0xcc71,	// (0x00075754) aid_position_infowindow_above

0xcc79,	// (0x0007575c) aid_position_infowindow_below

0xcc81,	// (0x00075764) cset_list_set_pane_g1_ParamLimits

0xcc81,	// (0x00075764) cset_list_set_pane_g1

0x6593,	// (0x0006f076) cset_list_set_pane_g3_ParamLimits

0x6593,	// (0x0006f076) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000784a8) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000784a8) cset_list_set_pane_g

0x65a2,	// (0x0006f085) cset_list_set_pane_t1_ParamLimits

0x65a2,	// (0x0006f085) cset_list_set_pane_t1

0x4281,	// (0x0006cd64) list_highlight_pane_cp021_ParamLimits

0x4281,	// (0x0006cd64) list_highlight_pane_cp021

0x03e3,	// (0x00068ec6) cset_slider_pane_g1

0x03f5,	// (0x00068ed8) cset_slider_pane_g2

0x03ec,	// (0x00068ecf) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000784ad) cset_slider_pane_g

0xcc8d,	// (0x00075770) aid_area_touch_cam4_zoom

0xcc95,	// (0x00075778) cam4_zoom_cont_pane

0xcc9d,	// (0x00075780) cam4_zoom_pane_g1

0xcca5,	// (0x00075788) cam4_zoom_pane_g2

0xccad,	// (0x00075790) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000784b4) cam4_zoom_pane_g

0x360d,	// (0x0006c0f0) cam4_zoom_cont_pane_g1

0x3616,	// (0x0006c0f9) cam4_zoom_cont_pane_g2

0x361f,	// (0x0006c102) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000784bb) cam4_zoom_cont_pane_g

0xc15e,	// (0x00074c41) call4_image_pane_ParamLimits

0xc15e,	// (0x00074c41) call4_image_pane

0x279a,	// (0x0006b27d) call4_windows_conf_pane_ParamLimits

0x27b5,	// (0x0006b298) popup_call4_audio_in_window_ParamLimits

0x27b5,	// (0x0006b298) popup_call4_audio_in_window

0x4026,	// (0x0006cb09) bg_popup_call2_act_pane_cp02

0x2817,	// (0x0006b2fa) call4_list_conf_pane

0x1c2d,	// (0x0006a710) call4_image_pane_g1

0x1c2d,	// (0x0006a710) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x000781cf) call4_image_pane_g

0x2bba,	// (0x0006b69d) list_single_graphic_popup_conf4_pane_ParamLimits

0x2bba,	// (0x0006b69d) list_single_graphic_popup_conf4_pane

0x4026,	// (0x0006cb09) list_highlight_pane_cp022

0x2bcf,	// (0x0006b6b2) list_single_graphic_popup_conf4_pane_g1

0x00bd,	// (0x00068ba0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000784c2) list_single_graphic_popup_conf4_pane_g

0x2bd7,	// (0x0006b6ba) list_single_graphic_popup_conf4_pane_t1

0x8447,	// (0x00070f2a) popup_vtel_slider_window_ParamLimits

0x8447,	// (0x00070f2a) popup_vtel_slider_window

0x2748,	// (0x0006b22b) dialer2_ne_pane_t2_ParamLimits

0x2748,	// (0x0006b22b) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x000783a3) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x000783a3) dialer2_ne_pane_t

0x4281,	// (0x0006cd64) bg_popup_sub_pane_cp010_ParamLimits

0x4281,	// (0x0006cd64) bg_popup_sub_pane_cp010

0xccb5,	// (0x00075798) popup_vtel_slider_window_g1_ParamLimits

0xccb5,	// (0x00075798) popup_vtel_slider_window_g1

0xccc1,	// (0x000757a4) popup_vtel_slider_window_g2_ParamLimits

0xccc1,	// (0x000757a4) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000784c7) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000784c7) popup_vtel_slider_window_g

0xcd09,	// (0x000757ec) vtel_slider_pane_ParamLimits

0xcd09,	// (0x000757ec) vtel_slider_pane

0xcd18,	// (0x000757fb) vtel_slider_pane_g1_ParamLimits

0xcd18,	// (0x000757fb) vtel_slider_pane_g1

0xcd25,	// (0x00075808) vtel_slider_pane_g2_ParamLimits

0xcd25,	// (0x00075808) vtel_slider_pane_g2

0xcd32,	// (0x00075815) vtel_slider_pane_g3_ParamLimits

0xcd32,	// (0x00075815) vtel_slider_pane_g3

0xcd18,	// (0x000757fb) vtel_slider_pane_g4_ParamLimits

0xcd18,	// (0x000757fb) vtel_slider_pane_g4

0xcd3f,	// (0x00075822) vtel_slider_pane_g5_ParamLimits

0xcd3f,	// (0x00075822) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000784d0) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000784d0) vtel_slider_pane_g

0x4026,	// (0x0006cb09) main_gallery2_pane

0xc50b,	// (0x00074fee) aid_size_row_itut2_dropdow_list_ParamLimits

0xc50b,	// (0x00074fee) aid_size_row_itut2_dropdow_list

0xc56b,	// (0x0007504e) grid_vitu2_function_top_pane_ParamLimits

0xc56b,	// (0x0007504e) grid_vitu2_function_top_pane

0xc5bd,	// (0x000750a0) popup_vitu2_dropdown_list_window_ParamLimits

0xc5bd,	// (0x000750a0) popup_vitu2_dropdown_list_window

0xc5dd,	// (0x000750c0) popup_vitu2_match_list_window

0xcd4c,	// (0x0007582f) cell_vitu2_function_top_pane_ParamLimits

0xcd4c,	// (0x0007582f) cell_vitu2_function_top_pane

0xcd6c,	// (0x0007584f) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcd6c,	// (0x0007584f) cell_vitu2_function_top_pane_cp01

0xcd8a,	// (0x0007586d) cell_vitu2_function_top_wide_pane_ParamLimits

0xcd8a,	// (0x0007586d) cell_vitu2_function_top_wide_pane

0x4281,	// (0x0006cd64) bg_button_pane_cp012

0xcda8,	// (0x0007588b) cell_vitu2_function_top_pane_g1

0xcdb7,	// (0x0007589a) bg_button_pane_cp013_ParamLimits

0xcdb7,	// (0x0007589a) bg_button_pane_cp013

0xcdd3,	// (0x000758b6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcdd3,	// (0x000758b6) cell_vitu2_function_top_wide_pane_g1

0x75dc,	// (0x000700bf) bg_popup_sub_pane_cp20

0xcdeb,	// (0x000758ce) list_vitu2_match_list_pane

0x29c3,	// (0x0006b4a6) bg_popup_sub_pane_cp20_g1

0x29cb,	// (0x0006b4ae) bg_popup_sub_pane_cp20_g2

0x522b,	// (0x0006dd0e) bg_popup_sub_pane_cp20_g3

0x29d3,	// (0x0006b4b6) bg_popup_sub_pane_cp20_g4

0x520b,	// (0x0006dcee) bg_popup_sub_pane_cp20_g5

0x2bed,	// (0x0006b6d0) bg_popup_sub_pane_cp20_g6

0x29e3,	// (0x0006b4c6) bg_popup_sub_pane_cp20_g7

0x29eb,	// (0x0006b4ce) bg_popup_sub_pane_cp20_g8

0x29f3,	// (0x0006b4d6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000784db) bg_popup_sub_pane_cp20_g

0xce03,	// (0x000758e6) list_vitu2_match_list_item_pane_ParamLimits

0xce03,	// (0x000758e6) list_vitu2_match_list_item_pane

0xce15,	// (0x000758f8) list_vitu2_match_list_item_pane_t1

0x4026,	// (0x0006cb09) bg_popup_sub_pane_cp21

0xf055,	// (0x00077b38) grid_vitu2_dropdown_list_pane

0xce23,	// (0x00075906) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xce23,	// (0x00075906) cell_vitu2_dropdown_list_char_pane

0xce48,	// (0x0007592b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xce48,	// (0x0007592b) cell_vitu2_dropdown_list_ctrl_pane

0x2c07,	// (0x0006b6ea) cell_vitu2_dropdown_list_char_pane_g1

0x2bfe,	// (0x0006b6e1) cell_vitu2_dropdown_list_char_pane_g2

0x2bf5,	// (0x0006b6d8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x000784f8) cell_vitu2_dropdown_list_char_pane_g

0xce76,	// (0x00075959) cell_vitu2_dropdown_list_char_pane_t1

0xce84,	// (0x00075967) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xce84,	// (0x00075967) cell_vitu2_dropdown_list_ctrl_pane_g1

0xce94,	// (0x00075977) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xce94,	// (0x00075977) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcea5,	// (0x00075988) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcea5,	// (0x00075988) cell_vitu2_dropdown_list_ctrl_pane_g3

0xceb5,	// (0x00075998) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xceb5,	// (0x00075998) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e5d,	// (0x0006a940) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e5d,	// (0x0006a940) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x000784ff) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x000784ff) cell_vitu2_dropdown_list_ctrl_pane_g

0xcece,	// (0x000759b1) aid_size_cell_gallery2_ParamLimits

0xcece,	// (0x000759b1) aid_size_cell_gallery2

0xcedc,	// (0x000759bf) grid_gallery2_pane_ParamLimits

0xcedc,	// (0x000759bf) grid_gallery2_pane

0xceeb,	// (0x000759ce) scroll_pane_cp029_ParamLimits

0xceeb,	// (0x000759ce) scroll_pane_cp029

0xcef7,	// (0x000759da) cell_gallery2_pane_ParamLimits

0xcef7,	// (0x000759da) cell_gallery2_pane

0x2c10,	// (0x0006b6f3) cell_gallery2_pane_g2

0xcf21,	// (0x00075a04) cell_gallery2_pane_g3

0x2c1a,	// (0x0006b6fd) cell_gallery2_pane_g4

0x2c22,	// (0x0006b705) cell_gallery2_pane_g5

0x028b,	// (0x00068d6e) grid_highlight_pane_cp10

0xc5dd,	// (0x000750c0) popup_vitu2_match_list_window_ParamLimits

0xc5f1,	// (0x000750d4) popup_vitu2_query_window_ParamLimits

0xc5f1,	// (0x000750d4) popup_vitu2_query_window

0x4026,	// (0x0006cb09) bg_vitu2_candi_button_pane

0x2c07,	// (0x0006b6ea) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2bfe,	// (0x0006b6e1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2bf5,	// (0x0006b6d8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6609,	// (0x0006f0ec) bg_button_pane_cp015

0xcf29,	// (0x00075a0c) bg_button_pane_cp016

0xcf3c,	// (0x00075a1f) bg_button_pane_cp017

0x16f8,	// (0x0006a1db) bg_popup_sub_pane_cp22

0x2c2a,	// (0x0006b70d) popup_vitu2_query_window_g1

0x663c,	// (0x0006f11f) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0007850a) popup_vitu2_query_window_g

0x6659,	// (0x0006f13c) popup_vitu2_query_window_t1_ParamLimits

0x6659,	// (0x0006f13c) popup_vitu2_query_window_t1

0x668c,	// (0x0006f16f) popup_vitu2_query_window_t2_ParamLimits

0x668c,	// (0x0006f16f) popup_vitu2_query_window_t2

0x669e,	// (0x0006f181) popup_vitu2_query_window_t3_ParamLimits

0x669e,	// (0x0006f181) popup_vitu2_query_window_t3

0xcf60,	// (0x00075a43) popup_vitu2_query_window_t4_ParamLimits

0xcf60,	// (0x00075a43) popup_vitu2_query_window_t4

0xcf83,	// (0x00075a66) popup_vitu2_query_window_t5_ParamLimits

0xcf83,	// (0x00075a66) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00078511) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00078511) popup_vitu2_query_window_t

0x2ac9,	// (0x0006b5ac) main_cset_text_pane

0xc9c8,	// (0x000754ab) aid_area_touch_slider_ParamLimits

0xc9e4,	// (0x000754c7) cset_slider_pane_ParamLimits

0xca0e,	// (0x000754f1) main_cset_slider_pane_g1_ParamLimits

0xca23,	// (0x00075506) main_cset_slider_pane_g2_ParamLimits

0x2aea,	// (0x0006b5cd) main_cset_slider_pane_g3_ParamLimits

0x2aea,	// (0x0006b5cd) main_cset_slider_pane_g3

0xca38,	// (0x0007551b) main_cset_slider_pane_g4_ParamLimits

0xca38,	// (0x0007551b) main_cset_slider_pane_g4

0xca47,	// (0x0007552a) main_cset_slider_pane_g5_ParamLimits

0xca47,	// (0x0007552a) main_cset_slider_pane_g5

0xca53,	// (0x00075536) main_cset_slider_pane_g6_ParamLimits

0xca53,	// (0x00075536) main_cset_slider_pane_g6

0xf981,	// (0x00078464) main_cset_slider_pane_g_ParamLimits

0x2b1a,	// (0x0006b5fd) main_cset_slider_pane_t1_ParamLimits

0xcadf,	// (0x000755c2) main_cset_slider_pane_t2_ParamLimits

0xcaf9,	// (0x000755dc) main_cset_slider_pane_t3_ParamLimits

0xcb13,	// (0x000755f6) main_cset_slider_pane_t4_ParamLimits

0xcb2d,	// (0x00075610) main_cset_slider_pane_t5_ParamLimits

0xcb47,	// (0x0007562a) main_cset_slider_pane_t6_ParamLimits

0xcb5c,	// (0x0007563f) main_cset_slider_pane_t7_ParamLimits

0xcb86,	// (0x00075669) main_cset_slider_pane_t8_ParamLimits

0xcb86,	// (0x00075669) main_cset_slider_pane_t8

0xcbae,	// (0x00075691) main_cset_slider_pane_t9_ParamLimits

0xcbae,	// (0x00075691) main_cset_slider_pane_t9

0xcbd6,	// (0x000756b9) main_cset_slider_pane_t10_ParamLimits

0xcbd6,	// (0x000756b9) main_cset_slider_pane_t10

0xcbfe,	// (0x000756e1) main_cset_slider_pane_t11_ParamLimits

0xcbfe,	// (0x000756e1) main_cset_slider_pane_t11

0xcc26,	// (0x00075709) main_cset_slider_pane_t12_ParamLimits

0xcc26,	// (0x00075709) main_cset_slider_pane_t12

0xcc43,	// (0x00075726) main_cset_slider_pane_t13_ParamLimits

0xcc43,	// (0x00075726) main_cset_slider_pane_t13

0xf9a6,	// (0x00078489) main_cset_slider_pane_t_ParamLimits

0x4026,	// (0x0006cb09) bg_popup_sub_pane_cp011

0x2c36,	// (0x0006b719) main_cset_text_pane_g1

0x2c3e,	// (0x0006b721) main_cset_text_pane_t1

0x2c4c,	// (0x0006b72f) main_cset_text_pane_t2

0x2c5a,	// (0x0006b73d) main_cset_text_pane_t3

0x2c68,	// (0x0006b74b) main_cset_text_pane_t4

0x2c76,	// (0x0006b759) main_cset_text_pane_t5

0x2c84,	// (0x0006b767) main_cset_text_pane_t6

0x2c92,	// (0x0006b775) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00078520) main_cset_text_pane_t

0x4026,	// (0x0006cb09) main_cam4_burst_pane

0x4026,	// (0x0006cb09) main_cam5_pane

0xc911,	// (0x000753f4) bg_button_pane_cp019

0xc91a,	// (0x000753fd) bg_button_pane_cp020

0x2af6,	// (0x0006b5d9) main_cset_slider_pane_g7_ParamLimits

0x2af6,	// (0x0006b5d9) main_cset_slider_pane_g7

0x2b02,	// (0x0006b5e5) main_cset_slider_pane_g8_ParamLimits

0x2b02,	// (0x0006b5e5) main_cset_slider_pane_g8

0xca67,	// (0x0007554a) main_cset_slider_pane_g9_ParamLimits

0xca67,	// (0x0007554a) main_cset_slider_pane_g9

0xca73,	// (0x00075556) main_cset_slider_pane_g10_ParamLimits

0xca73,	// (0x00075556) main_cset_slider_pane_g10

0xca7f,	// (0x00075562) main_cset_slider_pane_g11_ParamLimits

0xca7f,	// (0x00075562) main_cset_slider_pane_g11

0xca8b,	// (0x0007556e) main_cset_slider_pane_g12_ParamLimits

0xca8b,	// (0x0007556e) main_cset_slider_pane_g12

0xca97,	// (0x0007557a) main_cset_slider_pane_g13_ParamLimits

0xca97,	// (0x0007557a) main_cset_slider_pane_g13

0xcaa3,	// (0x00075586) main_cset_slider_pane_g14_ParamLimits

0xcaa3,	// (0x00075586) main_cset_slider_pane_g14

0xcaaf,	// (0x00075592) main_cset_slider_pane_g15_ParamLimits

0xcaaf,	// (0x00075592) main_cset_slider_pane_g15

0x2b48,	// (0x0006b62b) main_cset_slider_pane_t14_ParamLimits

0x2b48,	// (0x0006b62b) main_cset_slider_pane_t14

0x2b81,	// (0x0006b664) main_cset_slider_pane_t15_ParamLimits

0x2b81,	// (0x0006b664) main_cset_slider_pane_t15

0xcfa6,	// (0x00075a89) aid_cam4_burst_size_cell_ParamLimits

0xcfa6,	// (0x00075a89) aid_cam4_burst_size_cell

0xcfc2,	// (0x00075aa5) grid_cam4_burst_pane_ParamLimits

0xcfc2,	// (0x00075aa5) grid_cam4_burst_pane

0xcff4,	// (0x00075ad7) linegrid_cam4_burst_pane_ParamLimits

0xcff4,	// (0x00075ad7) linegrid_cam4_burst_pane

0xd012,	// (0x00075af5) scroll_pane_cp30_ParamLimits

0xd012,	// (0x00075af5) scroll_pane_cp30

0xd01e,	// (0x00075b01) cell_cam4_burst_pane_ParamLimits

0xd01e,	// (0x00075b01) cell_cam4_burst_pane

0x2cac,	// (0x0006b78f) linegrid_cam4_burst_pane_g1_ParamLimits

0x2cac,	// (0x0006b78f) linegrid_cam4_burst_pane_g1

0xd05e,	// (0x00075b41) linegrid_cam4_burst_pane_g2_ParamLimits

0xd05e,	// (0x00075b41) linegrid_cam4_burst_pane_g2

0x2cb9,	// (0x0006b79c) linegrid_cam4_burst_pane_g3_ParamLimits

0x2cb9,	// (0x0006b79c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0007852f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0007852f) linegrid_cam4_burst_pane_g

0xd06f,	// (0x00075b52) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd06f,	// (0x00075b52) linegrid_cam4_burst_pane_g3_copy1

0x2cc6,	// (0x0006b7a9) linegrid_cam4_burst_pane_g4_ParamLimits

0x2cc6,	// (0x0006b7a9) linegrid_cam4_burst_pane_g4

0xd089,	// (0x00075b6c) linegrid_cam4_burst_pane_g5_ParamLimits

0xd089,	// (0x00075b6c) linegrid_cam4_burst_pane_g5

0xd09a,	// (0x00075b7d) linegrid_cam4_burst_pane_g6_ParamLimits

0xd09a,	// (0x00075b7d) linegrid_cam4_burst_pane_g6

0x2cd3,	// (0x0006b7b6) linegrid_cam4_burst_pane_g7_ParamLimits

0x2cd3,	// (0x0006b7b6) linegrid_cam4_burst_pane_g7

0xd0b1,	// (0x00075b94) cell_cam4_burst_pane_g1

0x2cec,	// (0x0006b7cf) main_cam5_pane_t1_ParamLimits

0x2cec,	// (0x0006b7cf) main_cam5_pane_t1

0x2cfe,	// (0x0006b7e1) main_cam5_pane_t2_ParamLimits

0x2cfe,	// (0x0006b7e1) main_cam5_pane_t2

0x2d10,	// (0x0006b7f3) main_cam5_pane_t3_ParamLimits

0x2d10,	// (0x0006b7f3) main_cam5_pane_t3

0x2d22,	// (0x0006b805) main_cam5_pane_t4_ParamLimits

0x2d22,	// (0x0006b805) main_cam5_pane_t4

0x2d3a,	// (0x0006b81d) main_cam5_pane_t5_ParamLimits

0x2d3a,	// (0x0006b81d) main_cam5_pane_t5

0x2d4e,	// (0x0006b831) main_cam5_pane_t6_ParamLimits

0x2d4e,	// (0x0006b831) main_cam5_pane_t6

0x2d62,	// (0x0006b845) main_cam5_pane_t7_ParamLimits

0x2d62,	// (0x0006b845) main_cam5_pane_t7

0x2d74,	// (0x0006b857) main_cam5_pane_t8_ParamLimits

0x2d74,	// (0x0006b857) main_cam5_pane_t8

0x2d92,	// (0x0006b875) main_cam5_pane_t9_ParamLimits

0x2d92,	// (0x0006b875) main_cam5_pane_t9

0x2da4,	// (0x0006b887) main_cam5_pane_t10_ParamLimits

0x2da4,	// (0x0006b887) main_cam5_pane_t10

0x2db6,	// (0x0006b899) main_cam5_pane_t11_ParamLimits

0x2db6,	// (0x0006b899) main_cam5_pane_t11

0x2dca,	// (0x0006b8ad) main_cam5_pane_t12_ParamLimits

0x2dca,	// (0x0006b8ad) main_cam5_pane_t12

0x2de1,	// (0x0006b8c4) main_cam5_pane_t13_ParamLimits

0x2de1,	// (0x0006b8c4) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0007853b) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0007853b) main_cam5_pane_t

0x75a5,	// (0x00070088) popup_scut_keymap_window_ParamLimits

0x75a5,	// (0x00070088) popup_scut_keymap_window

0xd0c4,	// (0x00075ba7) aid_size_cell_brow_shortcut

0x028b,	// (0x00068d6e) bg_popup_window_pane_cp010

0xd0d0,	// (0x00075bb3) grid_scut_pane

0xd0dc,	// (0x00075bbf) cell_scut_pane_ParamLimits

0xd0dc,	// (0x00075bbf) cell_scut_pane

0xd0f7,	// (0x00075bda) cell_scut_pane_g1

0x2e04,	// (0x0006b8e7) cell_scut_pane_t1

0x2e13,	// (0x0006b8f6) cell_scut_pane_t2

0xd100,	// (0x00075be3) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00078556) cell_scut_pane_t

0xb0ca,	// (0x00073bad) main_mup3_pane_g8_ParamLimits

0xb0ca,	// (0x00073bad) main_mup3_pane_g8

0xc519,	// (0x00074ffc) area_vitu2_query_pane_ParamLimits

0xc519,	// (0x00074ffc) area_vitu2_query_pane

0x661b,	// (0x0006f0fe) input_focus_pane_cp08

0x2e22,	// (0x0006b905) area_vitu2_query_pane_g1

0x671c,	// (0x0006f1ff) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0007855d) area_vitu2_query_pane_g

0xd10e,	// (0x00075bf1) area_vitu2_query_pane_t1_ParamLimits

0xd10e,	// (0x00075bf1) area_vitu2_query_pane_t1

0xd122,	// (0x00075c05) area_vitu2_query_pane_t2_ParamLimits

0xd122,	// (0x00075c05) area_vitu2_query_pane_t2

0x672d,	// (0x0006f210) area_vitu2_query_pane_t3_ParamLimits

0x672d,	// (0x0006f210) area_vitu2_query_pane_t3

0x6755,	// (0x0006f238) area_vitu2_query_pane_t4_ParamLimits

0x6755,	// (0x0006f238) area_vitu2_query_pane_t4

0x677d,	// (0x0006f260) area_vitu2_query_pane_t5_ParamLimits

0x677d,	// (0x0006f260) area_vitu2_query_pane_t5

0x67a5,	// (0x0006f288) area_vitu2_query_pane_t6_ParamLimits

0x67a5,	// (0x0006f288) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00078562) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00078562) area_vitu2_query_pane_t

0xd136,	// (0x00075c19) bg_button_pane_cp018

0xd144,	// (0x00075c27) bg_button_pane_cp021

0x67f1,	// (0x0006f2d4) bg_button_pane_cp022

0x6802,	// (0x0006f2e5) input_focus_pane_cp09

0x9562,	// (0x00072045) aid_size_touch_mv_arrow_left

0x958d,	// (0x00072070) aid_size_touch_mv_arrow_right

0xcac7,	// (0x000755aa) main_cset_slider_pane_g16_ParamLimits

0xcac7,	// (0x000755aa) main_cset_slider_pane_g16

0xcad3,	// (0x000755b6) main_cset_slider_pane_g17_ParamLimits

0xcad3,	// (0x000755b6) main_cset_slider_pane_g17

0xd0b1,	// (0x00075b94) cell_cam4_burst_pane_g1_ParamLimits

0x4026,	// (0x0006cb09) compa_mode_pane

0xcccd,	// (0x000757b0) popup_vtel_slider_window_g3_ParamLimits

0xcccd,	// (0x000757b0) popup_vtel_slider_window_g3

0xcce1,	// (0x000757c4) popup_vtel_slider_window_g4_ParamLimits

0xcce1,	// (0x000757c4) popup_vtel_slider_window_g4

0xccf5,	// (0x000757d8) popup_vtel_slider_window_t1_ParamLimits

0xccf5,	// (0x000757d8) popup_vtel_slider_window_t1

0x4026,	// (0x0006cb09) main_cl_pane

0xa3d0,	// (0x00072eb3) popup_imed_adjust2_window_ParamLimits

0x16f8,	// (0x0006a1db) bg_tb_trans_pane_cp05_ParamLimits

0x211a,	// (0x0006abfd) popup_imed_adjust2_window_g1_ParamLimits

0x2129,	// (0x0006ac0c) popup_imed_adjust2_window_g2_ParamLimits

0x2129,	// (0x0006ac0c) popup_imed_adjust2_window_g2

0x2135,	// (0x0006ac18) popup_imed_adjust2_window_g3_ParamLimits

0x2135,	// (0x0006ac18) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000782cd) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000782cd) popup_imed_adjust2_window_g

0x2141,	// (0x0006ac24) popup_imed_adjust2_window_t1_ParamLimits

0x2159,	// (0x0006ac3c) slider_imed_adjust_pane_ParamLimits

0x216d,	// (0x0006ac50) slider_imed_adjust_pane_g1_ParamLimits

0x217d,	// (0x0006ac60) slider_imed_adjust_pane_g2_ParamLimits

0x218d,	// (0x0006ac70) slider_imed_adjust_pane_g3_ParamLimits

0x219e,	// (0x0006ac81) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000782d4) slider_imed_adjust_pane_g_ParamLimits

0xc25c,	// (0x00074d3f) aid_touch_area_cam4_ParamLimits

0xc25c,	// (0x00074d3f) aid_touch_area_cam4

0xc26c,	// (0x00074d4f) battery_pane_cp01

0xc2f3,	// (0x00074dd6) main_camera4_pane_g6_ParamLimits

0xc2f3,	// (0x00074dd6) main_camera4_pane_g6

0xc311,	// (0x00074df4) main_camera4_pane_t2_ParamLimits

0xc311,	// (0x00074df4) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x000783d7) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x000783d7) main_camera4_pane_t

0xc394,	// (0x00074e77) aid_touch_area_vid4_ParamLimits

0xc394,	// (0x00074e77) aid_touch_area_vid4

0xc3d4,	// (0x00074eb7) main_video4_pane_g5_ParamLimits

0xc3d4,	// (0x00074eb7) main_video4_pane_g5

0xc3fa,	// (0x00074edd) vid4_progress_pane_ParamLimits

0xc3fa,	// (0x00074edd) vid4_progress_pane

0x2b0e,	// (0x0006b5f1) main_cset_slider_pane_g18_ParamLimits

0x2b0e,	// (0x0006b5f1) main_cset_slider_pane_g18

0x2ce0,	// (0x0006b7c3) cell_cam4_burst_pane_g2_ParamLimits

0x2ce0,	// (0x0006b7c3) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00078536) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00078536) cell_cam4_burst_pane_g

0xd150,	// (0x00075c33) bg_cl_pane_ParamLimits

0xd150,	// (0x00075c33) bg_cl_pane

0xd15c,	// (0x00075c3f) cl_header_pane_ParamLimits

0xd15c,	// (0x00075c3f) cl_header_pane

0xd168,	// (0x00075c4b) cl_listscroll_pane_ParamLimits

0xd168,	// (0x00075c4b) cl_listscroll_pane

0x2e2e,	// (0x0006b911) bg_cl_pane_g1

0x2e36,	// (0x0006b919) bg_cl_pane_g2

0x2e3e,	// (0x0006b921) bg_cl_pane_g3

0x2e46,	// (0x0006b929) bg_cl_pane_g4

0x2e4e,	// (0x0006b931) bg_cl_pane_g5

0x2e56,	// (0x0006b939) bg_cl_pane_g6

0x2e5e,	// (0x0006b941) bg_cl_pane_g7

0x2e66,	// (0x0006b949) bg_cl_pane_g8

0x2e6e,	// (0x0006b951) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00078571) bg_cl_pane_g

0xd174,	// (0x00075c57) aid_height_cl_leading_ParamLimits

0xd174,	// (0x00075c57) aid_height_cl_leading

0xd180,	// (0x00075c63) aid_height_cl_text_ParamLimits

0xd180,	// (0x00075c63) aid_height_cl_text

0x75dc,	// (0x000700bf) bg_cl_header_pane_ParamLimits

0x75dc,	// (0x000700bf) bg_cl_header_pane

0xd198,	// (0x00075c7b) cl_header_pane_g1_ParamLimits

0xd198,	// (0x00075c7b) cl_header_pane_g1

0xd1a5,	// (0x00075c88) cl_header_pane_t1_ParamLimits

0xd1a5,	// (0x00075c88) cl_header_pane_t1

0x2e76,	// (0x0006b959) cl_list_pane

0x2ae1,	// (0x0006b5c4) hc_scroll_pane_cp01

0x520b,	// (0x0006dcee) bg_cl_header_pane_g1

0x29c3,	// (0x0006b4a6) bg_cl_header_pane_g2

0x522b,	// (0x0006dd0e) bg_cl_header_pane_g3

0x29d3,	// (0x0006b4b6) bg_cl_header_pane_g4

0x29cb,	// (0x0006b4ae) bg_cl_header_pane_g5

0x2bed,	// (0x0006b6d0) bg_cl_header_pane_g6

0x29eb,	// (0x0006b4ce) bg_cl_header_pane_g7

0x29f3,	// (0x0006b4d6) bg_cl_header_pane_g8

0x29e3,	// (0x0006b4c6) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00078584) bg_cl_header_pane_g

0xd1b7,	// (0x00075c9a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd1b7,	// (0x00075c9a) hc_cl_list_double_graphic_heading_pane

0xd1c7,	// (0x00075caa) hc_cl_list_single_graphic_pane_ParamLimits

0xd1c7,	// (0x00075caa) hc_cl_list_single_graphic_pane

0xd1d9,	// (0x00075cbc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd1d9,	// (0x00075cbc) hc_cl_list_single_graphic_pane_g1

0xd1e5,	// (0x00075cc8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd1e5,	// (0x00075cc8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00078597) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00078597) hc_cl_list_single_graphic_pane_g

0xd1f9,	// (0x00075cdc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd1f9,	// (0x00075cdc) hc_cl_list_single_graphic_pane_t1

0xd1d9,	// (0x00075cbc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd1d9,	// (0x00075cbc) hc_cl_list_double_graphic_heading_pane_g1

0xd20e,	// (0x00075cf1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd20e,	// (0x00075cf1) hc_cl_list_double_graphic_heading_pane_g2

0xd222,	// (0x00075d05) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd222,	// (0x00075d05) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0007859c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0007859c) hc_cl_list_double_graphic_heading_pane_g

0xd236,	// (0x00075d19) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd236,	// (0x00075d19) hc_cl_list_double_graphic_heading_pane_t1

0xd24b,	// (0x00075d2e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd24b,	// (0x00075d2e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000785a3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000785a3) hc_cl_list_double_graphic_heading_pane_t

0xd268,	// (0x00075d4b) vid4_progress_pane_g1

0xd27a,	// (0x00075d5d) vid4_progress_pane_g2

0x9bfa,	// (0x000726dd) vid4_progress_pane_g3

0xd28c,	// (0x00075d6f) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000785a8) vid4_progress_pane_g

0xd2aa,	// (0x00075d8d) vid4_progress_pane_t1

0xd2bf,	// (0x00075da2) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000785b3) vid4_progress_pane_t

0xd2ea,	// (0x00075dcd) wait_bar_pane_cp07

0x1a1a,	// (0x0006a4fd) blid_firmament_pane_ParamLimits

0x1a5d,	// (0x0006a540) popup_blid_sat_info2_window_g1

0x1a81,	// (0x0006a564) popup_blid_sat_info2_window_t3

0x1a8f,	// (0x0006a572) popup_blid_sat_info2_window_t4

0x1a9d,	// (0x0006a580) popup_blid_sat_info2_window_t5

0x1aab,	// (0x0006a58e) popup_blid_sat_info2_window_t6

0x1abb,	// (0x0006a59e) popup_blid_sat_info2_window_t7

0x1ac9,	// (0x0006a5ac) popup_blid_sat_info2_window_t8

0x1ad7,	// (0x0006a5ba) popup_blid_sat_info2_window_t9

0x1ae5,	// (0x0006a5c8) popup_blid_sat_info2_window_t10

0x1bad,	// (0x0006a690) aid_firma_cardinal_ParamLimits

0x1bc1,	// (0x0006a6a4) blid_firmament_pane_t1_ParamLimits

0x1bd8,	// (0x0006a6bb) blid_firmament_pane_t2_ParamLimits

0x1bef,	// (0x0006a6d2) blid_firmament_pane_t3_ParamLimits

0x1c06,	// (0x0006a6e9) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x000781c6) blid_firmament_pane_t_ParamLimits

0x1c1d,	// (0x0006a700) blid_sat_info_pane_ParamLimits

0x4281,	// (0x0006cd64) main_cam_set_pane_ParamLimits

0xb87b,	// (0x0007435e) aid_size_cell_colour_35_ParamLimits

0xb895,	// (0x00074378) aid_size_cell_colour_112_ParamLimits

0xb8ac,	// (0x0007438f) aid_size_cell_effect_ParamLimits

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp02_ParamLimits

0xf0ac,	// (0x00077b8f) heading_imed_pane_ParamLimits

0xb8c6,	// (0x000743a9) listscroll_imed_pane_ParamLimits

0x0d26,	// (0x00069809) popup_call2_audio_first_window_g5_ParamLimits

0x0d26,	// (0x00069809) popup_call2_audio_first_window_g5

0xbfd5,	// (0x00074ab8) aid_size_touch_image3_arrow_left_ParamLimits

0xbfd5,	// (0x00074ab8) aid_size_touch_image3_arrow_left

0xbfeb,	// (0x00074ace) aid_size_touch_image3_arrow_right_ParamLimits

0xbfeb,	// (0x00074ace) aid_size_touch_image3_arrow_right

0xd2d5,	// (0x00075db8) vid4_progress_pane_t3

0xbb71,	// (0x00074654) main_hwr_training_symbol_option_pane_ParamLimits

0xbb71,	// (0x00074654) main_hwr_training_symbol_option_pane

0x2409,	// (0x0006aeec) popup_hwr_training_preview_window_ParamLimits

0x2409,	// (0x0006aeec) popup_hwr_training_preview_window

0xbbd2,	// (0x000746b5) hwr_training_navi_pane_g5_ParamLimits

0xbbd2,	// (0x000746b5) hwr_training_navi_pane_g5

0x29b1,	// (0x0006b494) popup_char_count_window

0x75dc,	// (0x000700bf) bg_popup_sub_pane_cp20_ParamLimits

0xcdeb,	// (0x000758ce) list_vitu2_match_list_pane_ParamLimits

0xcdf7,	// (0x000758da) vitu2_page_scroll_pane_ParamLimits

0xcdf7,	// (0x000758da) vitu2_page_scroll_pane

0x311e,	// (0x0006bc01) list_single_hwr_training_symbol_option_pane_ParamLimits

0x311e,	// (0x0006bc01) list_single_hwr_training_symbol_option_pane

0x3131,	// (0x0006bc14) list_single_hwr_training_symbol_option_pane_g1

0x3139,	// (0x0006bc1c) list_single_hwr_training_symbol_option_pane_t1

0x3147,	// (0x0006bc2a) bg_button_pane_cp023

0x3150,	// (0x0006bc33) bg_button_pane_cp024

0xd306,	// (0x00075de9) vitu2_page_scroll_pane_g1

0xd30e,	// (0x00075df1) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000785ba) vitu2_page_scroll_pane_g

0xd318,	// (0x00075dfb) vitu2_page_scroll_pane_t1

0x1936,	// (0x0006a419) popup_char_count_window_g1

0x3183,	// (0x0006bc66) popup_char_count_window_g2

0x318c,	// (0x0006bc6f) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000785bf) popup_char_count_window_g

0x3195,	// (0x0006bc78) popup_char_count_window_t1

0x4026,	// (0x0006cb09) main_vded2_pane

0x2106,	// (0x0006abe9) aid_size_cell_imed_line

0x2110,	// (0x0006abf3) grid_imed_line_width_pane

0xc46e,	// (0x00074f51) vid4_indicators_pane_g4

0x31a3,	// (0x0006bc86) cell_imed_line_width_pane_ParamLimits

0x31a3,	// (0x0006bc86) cell_imed_line_width_pane

0x31b9,	// (0x0006bc9c) cell_imed_line_width_pane_g1

0x19c8,	// (0x0006a4ab) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000785c6) cell_imed_line_width_pane_g

0xd327,	// (0x00075e0a) main_vded2_pane_g1_ParamLimits

0xd327,	// (0x00075e0a) main_vded2_pane_g1

0xd336,	// (0x00075e19) main_vded2_pane_g2_ParamLimits

0xd336,	// (0x00075e19) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000785cb) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000785cb) main_vded2_pane_g

0xd344,	// (0x00075e27) vded2_slider_pane_ParamLimits

0xd344,	// (0x00075e27) vded2_slider_pane

0xd351,	// (0x00075e34) aid_size_touch_vded2_end

0xd35b,	// (0x00075e3e) aid_size_touch_vded2_playhead

0x31c2,	// (0x0006bca5) aid_size_touch_vded2_start

0x31ca,	// (0x0006bcad) vded2_slider_bg_pane

0x31d3,	// (0x0006bcb6) vded2_slider_pane_g1

0x31dc,	// (0x0006bcbf) vded2_slider_pane_g2

0xd363,	// (0x00075e46) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000785d0) vded2_slider_pane_g

0x31e4,	// (0x0006bcc7) vded2_slider_bg_pane_g1

0x31ed,	// (0x0006bcd0) vded2_slider_bg_pane_g2

0x31f6,	// (0x0006bcd9) vded2_slider_bg_pane_g3

0x0002,

0xf7b3,	// (0x00078296) vded2_slider_bg_pane_g

0x9c12,	// (0x000726f5) aid_postcard_touch_down_pane_ParamLimits

0x9c12,	// (0x000726f5) aid_postcard_touch_down_pane

0x9c22,	// (0x00072705) aid_postcard_touch_up_pane_ParamLimits

0x9c22,	// (0x00072705) aid_postcard_touch_up_pane

0x4026,	// (0x0006cb09) main_blid2_pane

0xa34f,	// (0x00072e32) popup_blid2_search_window

0x4026,	// (0x0006cb09) blid2_gps_pane

0x4026,	// (0x0006cb09) blid2_navig_pane

0x4026,	// (0x0006cb09) blid2_search_pane

0x4026,	// (0x0006cb09) blid2_tripm_pane

0xd36c,	// (0x00075e4f) blid2_search_pane_g1_ParamLimits

0xd36c,	// (0x00075e4f) blid2_search_pane_g1

0xd378,	// (0x00075e5b) blid2_search_pane_t1_ParamLimits

0xd378,	// (0x00075e5b) blid2_search_pane_t1

0xd38a,	// (0x00075e6d) aid_size_cell_blid2_gps_ParamLimits

0xd38a,	// (0x00075e6d) aid_size_cell_blid2_gps

0xd39a,	// (0x00075e7d) blid2_gps_pane_g1_ParamLimits

0xd39a,	// (0x00075e7d) blid2_gps_pane_g1

0xd3a6,	// (0x00075e89) grid_blid2_satellite_pane_ParamLimits

0xd3a6,	// (0x00075e89) grid_blid2_satellite_pane

0xd3b4,	// (0x00075e97) blid2_navig_pane_g1_ParamLimits

0xd3b4,	// (0x00075e97) blid2_navig_pane_g1

0xd3c0,	// (0x00075ea3) blid2_navig_pane_t1_ParamLimits

0xd3c0,	// (0x00075ea3) blid2_navig_pane_t1

0xd3d2,	// (0x00075eb5) blid2_navig_pane_t2_ParamLimits

0xd3d2,	// (0x00075eb5) blid2_navig_pane_t2

0x0001,

0xfaf4,	// (0x000785d7) blid2_navig_pane_t_ParamLimits

0xfaf4,	// (0x000785d7) blid2_navig_pane_t

0xd3e4,	// (0x00075ec7) blid2_navig_ring_pane_ParamLimits

0xd3e4,	// (0x00075ec7) blid2_navig_ring_pane

0xd3f4,	// (0x00075ed7) blid2_speed_pane_ParamLimits

0xd3f4,	// (0x00075ed7) blid2_speed_pane

0xd400,	// (0x00075ee3) blid2_tripm_pane_g1_ParamLimits

0xd400,	// (0x00075ee3) blid2_tripm_pane_g1

0xd410,	// (0x00075ef3) blid2_tripm_pane_g2_ParamLimits

0xd410,	// (0x00075ef3) blid2_tripm_pane_g2

0xd41c,	// (0x00075eff) blid2_tripm_pane_g3_ParamLimits

0xd41c,	// (0x00075eff) blid2_tripm_pane_g3

0xd428,	// (0x00075f0b) blid2_tripm_pane_g4_ParamLimits

0xd428,	// (0x00075f0b) blid2_tripm_pane_g4

0xd434,	// (0x00075f17) blid2_tripm_pane_g5_ParamLimits

0xd434,	// (0x00075f17) blid2_tripm_pane_g5

0x0005,

0xfaf9,	// (0x000785dc) blid2_tripm_pane_g_ParamLimits

0xfaf9,	// (0x000785dc) blid2_tripm_pane_g

0xd450,	// (0x00075f33) blid2_tripm_pane_t1_ParamLimits

0xd450,	// (0x00075f33) blid2_tripm_pane_t1

0xd462,	// (0x00075f45) blid2_tripm_pane_t2_ParamLimits

0xd462,	// (0x00075f45) blid2_tripm_pane_t2

0xd474,	// (0x00075f57) blid2_tripm_pane_t3_ParamLimits

0xd474,	// (0x00075f57) blid2_tripm_pane_t3

0x0003,

0xfb06,	// (0x000785e9) blid2_tripm_pane_t_ParamLimits

0xfb06,	// (0x000785e9) blid2_tripm_pane_t

0xd4a6,	// (0x00075f89) cell_blid2_satellite_pane_ParamLimits

0xd4a6,	// (0x00075f89) cell_blid2_satellite_pane

0xd4c4,	// (0x00075fa7) cell_blid2_satellite_pane_g1

0x31ff,	// (0x0006bce2) cell_blid2_satellite_pane_t1

0x1c2d,	// (0x0006a710) blid2_speed_pane_g1

0x320d,	// (0x0006bcf0) blid2_speed_pane_t1

0x321b,	// (0x0006bcfe) blid2_speed_pane_t2

0x0001,

0xfb0f,	// (0x000785f2) blid2_speed_pane_t

0x1c2d,	// (0x0006a710) blid2_navig_ring_pane_g1

0xd4cd,	// (0x00075fb0) blid2_navig_ring_pane_g2

0xd4d5,	// (0x00075fb8) blid2_navig_ring_pane_g3

0xd4dd,	// (0x00075fc0) blid2_navig_ring_pane_g4

0xd4e5,	// (0x00075fc8) blid2_navig_ring_pane_g5

0x0004,

0xfb14,	// (0x000785f7) blid2_navig_ring_pane_g

0x4026,	// (0x0006cb09) bg_popup_window_pane_cp011

0x3229,	// (0x0006bd0c) popup_blid2_search_window_g1

0x3231,	// (0x0006bd14) popup_blid2_search_window_t1

0x323f,	// (0x0006bd22) popup_blid2_search_window_t2

0x0001,

0xfb1f,	// (0x00078602) popup_blid2_search_window_t

0x511a,	// (0x0006dbfd) main_browser_pane_g1

0x4d61,	// (0x0006d844) main_browser_pane_ParamLimits

0x4281,	// (0x0006cd64) bg_button_pane_cp011_ParamLimits

0xc6da,	// (0x000751bd) cell_vitu2_function_pane_g1_ParamLimits

0x16f8,	// (0x0006a1db) bg_popup_sub_pane_cp22_ParamLimits

0x661b,	// (0x0006f0fe) input_focus_pane_cp08_ParamLimits

0xcf4f,	// (0x00075a32) popup_vitu2_query_button_pane_ParamLimits

0xcf4f,	// (0x00075a32) popup_vitu2_query_button_pane

0x6632,	// (0x0006f115) popup_vitu2_query_input_button_pane

0x2c2a,	// (0x0006b70d) popup_vitu2_query_window_g1_ParamLimits

0x663c,	// (0x0006f11f) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0007850a) popup_vitu2_query_window_g_ParamLimits

0x4026,	// (0x0006cb09) bg_button_pane_cp026

0xd4ed,	// (0x00075fd0) popup_vitu2_query_input_button_pane_g1

0x4026,	// (0x0006cb09) bg_button_pane_cp025

0x324d,	// (0x0006bd30) popup_vitu2_query_button_pane_t1

0xadbf,	// (0x000738a2) main_mp3_pane_t6

0xadcf,	// (0x000738b2) popup_slider_window_cp01

0xc349,	// (0x00074e2c) cam4_battery_pane

0xc427,	// (0x00074f0a) cam4_battery_pane_cp02

0xd260,	// (0x00075d43) cam4_battery_pane_cp01

0xd260,	// (0x00075d43) cam4_battery_pane_cp03

0x1c2d,	// (0x0006a710) cam4_battery_pane_g1

0x273e,	// (0x0006b221) cam4_battery_pane_g2

0x0001,

0xfb24,	// (0x00078607) cam4_battery_pane_g

0x1af3,	// (0x0006a5d6) popup_blid_sat_info2_window_t11

0x9562,	// (0x00072045) aid_size_touch_mv_arrow_left_ParamLimits

0x958d,	// (0x00072070) aid_size_touch_mv_arrow_right_ParamLimits

0x01eb,	// (0x00068cce) navi_pane_g1_ParamLimits

0x95cc,	// (0x000720af) navi_pane_g2_ParamLimits

0x95fa,	// (0x000720dd) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00077ed8) navi_pane_g_ParamLimits

0x9654,	// (0x00072137) navi_pane_mv_t1_ParamLimits

0xb8d2,	// (0x000743b5) grid_imed_effect_pane_ParamLimits

0x830f,	// (0x00070df2) aid_placing_vt_slider_lsc

0x5065,	// (0x0006db48) aid_placing_vt_slider_prt

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp01_ParamLimits

0x1d7d,	// (0x0006a860) popup_image_details_window_g1_ParamLimits

0x1d90,	// (0x0006a873) popup_image_details_window_g2_ParamLimits

0x1da5,	// (0x0006a888) popup_image_details_window_g3_ParamLimits

0x1da5,	// (0x0006a888) popup_image_details_window_g3

0xf728,	// (0x0007820b) popup_image_details_window_g_ParamLimits

0x1db9,	// (0x0006a89c) popup_image_details_window_t1_ParamLimits

0x1dcb,	// (0x0006a8ae) popup_image_details_window_t2_ParamLimits

0x1de4,	// (0x0006a8c7) popup_image_details_window_t3_ParamLimits

0x1df8,	// (0x0006a8db) popup_image_details_window_t4_ParamLimits

0x1e13,	// (0x0006a8f6) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00078212) popup_image_details_window_t_ParamLimits

0xd18c,	// (0x00075c6f) cl_header_name_pane_ParamLimits

0xd18c,	// (0x00075c6f) cl_header_name_pane

0xd4f5,	// (0x00075fd8) cl_header_name_pane_t1_ParamLimits

0xd4f5,	// (0x00075fd8) cl_header_name_pane_t1

0xd50c,	// (0x00075fef) cl_header_name_pane_t2_ParamLimits

0xd50c,	// (0x00075fef) cl_header_name_pane_t2

0xd536,	// (0x00076019) cl_header_name_pane_t3_ParamLimits

0xd536,	// (0x00076019) cl_header_name_pane_t3

0x0002,

0xfb29,	// (0x0007860c) cl_header_name_pane_t_ParamLimits

0xfb29,	// (0x0007860c) cl_header_name_pane_t

0x9625,	// (0x00072108) navi_pane_mv_g2_ParamLimits

0x298b,	// (0x0006b46e) field_vitu2_entry_pane_g1_ParamLimits

0x2997,	// (0x0006b47a) field_vitu2_entry_pane_g2_ParamLimits

0x29a3,	// (0x0006b486) field_vitu2_entry_pane_g3_ParamLimits

0x29a3,	// (0x0006b486) field_vitu2_entry_pane_g3

0xf926,	// (0x00078409) field_vitu2_entry_pane_g_ParamLimits

0xc66a,	// (0x0007514d) cell_vitu2_itu_pane_g1_ParamLimits

0xc67a,	// (0x0007515d) cell_vitu2_itu_pane_g2_ParamLimits

0xc67a,	// (0x0007515d) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00078415) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00078415) cell_vitu2_itu_pane_g

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp05_ParamLimits

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp05

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp03

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp04

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp10_ParamLimits

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp10

0x67f1,	// (0x0006f2d4) bg_vkb2_func_pane_cp08

0xd136,	// (0x00075c19) bg_vkb2_func_pane_cp06

0xd144,	// (0x00075c27) bg_vkb2_func_pane_cp07

0x3159,	// (0x0006bc3c) bg_vkb2_func_pane_cp11_ParamLimits

0x3159,	// (0x0006bc3c) bg_vkb2_func_pane_cp11

0x316e,	// (0x0006bc51) bg_vkb2_func_pane_cp12_ParamLimits

0x316e,	// (0x0006bc51) bg_vkb2_func_pane_cp12

0x4026,	// (0x0006cb09) bg_vkb2_func_pane_cp09

0x29c3,	// (0x0006b4a6) bg_vkb2_func_pane_g1

0x522b,	// (0x0006dd0e) bg_vkb2_func_pane_g2

0x29cb,	// (0x0006b4ae) bg_vkb2_func_pane_g3

0x29d3,	// (0x0006b4b6) bg_vkb2_func_pane_g4

0x2bed,	// (0x0006b6d0) bg_vkb2_func_pane_g5

0x29eb,	// (0x0006b4ce) bg_vkb2_func_pane_g6

0x29f3,	// (0x0006b4d6) bg_vkb2_func_pane_g7

0x29e3,	// (0x0006b4c6) bg_vkb2_func_pane_g8

0x520b,	// (0x0006dcee) bg_vkb2_func_pane_g9

0x0008,

0xfb30,	// (0x00078613) bg_vkb2_func_pane_g

0xd442,	// (0x00075f25) blid2_tripm_pane_g6_ParamLimits

0xd442,	// (0x00075f25) blid2_tripm_pane_g6

0x26f8,	// (0x0006b1db) mp4_progress_pane_g1

0xd49a,	// (0x00075f7d) blid2_tripm_values_pane_ParamLimits

0xd49a,	// (0x00075f7d) blid2_tripm_values_pane

0xd55b,	// (0x0007603e) blid2_tripm_values_pane_t1

0xd569,	// (0x0007604c) blid2_tripm_values_pane_t2

0xd577,	// (0x0007605a) blid2_tripm_values_pane_t3

0xd585,	// (0x00076068) blid2_tripm_values_pane_t4

0xd593,	// (0x00076076) blid2_tripm_values_pane_t5

0xd5a1,	// (0x00076084) blid2_tripm_values_pane_t6

0xd5af,	// (0x00076092) blid2_tripm_values_pane_t7

0xd5bd,	// (0x000760a0) blid2_tripm_values_pane_t8

0xd5cb,	// (0x000760ae) blid2_tripm_values_pane_t9

0x0008,

0xfb43,	// (0x00078626) blid2_tripm_values_pane_t

0x834d,	// (0x00070e30) call_video_pane_t1_ParamLimits

0x836a,	// (0x00070e4d) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00077d61) call_video_pane_t_ParamLimits

0x63d9,	// (0x0006eebc) msg_header_pane_g1_ParamLimits

0x0428,	// (0x00068f0b) msg_header_pane_g2_ParamLimits

0x0428,	// (0x00068f0b) msg_header_pane_g2

0x0001,

0xf498,	// (0x00077f7b) msg_header_pane_g_ParamLimits

0xf498,	// (0x00077f7b) msg_header_pane_g

0x4d61,	// (0x0006d844) main_clock2_pane_ParamLimits

0xb66d,	// (0x00074150) grid_clock2_toolbar_pane_ParamLimits

0xb66d,	// (0x00074150) grid_clock2_toolbar_pane

0xb66d,	// (0x00074150) listscroll_clock2_pane_ParamLimits

0xb66d,	// (0x00074150) listscroll_clock2_pane

0xb709,	// (0x000741ec) main_clock2_pane_t3_ParamLimits

0xb709,	// (0x000741ec) main_clock2_pane_t3

0xb71b,	// (0x000741fe) main_clock2_pane_t4_ParamLimits

0xb71b,	// (0x000741fe) main_clock2_pane_t4

0x325b,	// (0x0006bd3e) cell_clock2_toolbar_pane

0x3263,	// (0x0006bd46) cell_clock2_toolbar_pane_cp01

0x3263,	// (0x0006bd46) cell_clock2_toolbar_pane_cp02

0x326b,	// (0x0006bd4e) cell_clock2_toolbar_pane_cp03

0x3273,	// (0x0006bd56) list_clock2_pane

0x0151,	// (0x00068c34) scroll_pane_cp10

0x327b,	// (0x0006bd5e) list_single_clock2_pane_ParamLimits

0x327b,	// (0x0006bd5e) list_single_clock2_pane

0x028b,	// (0x00068d6e) list_highlight_pane_cp08

0x3288,	// (0x0006bd6b) list_single_clock2_pane_t1

0x3296,	// (0x0006bd79) list_single_clock2_pane_t2

0x0001,

0xfb56,	// (0x00078639) list_single_clock2_pane_t

0x4026,	// (0x0006cb09) bg_button_pane_cp10

0x32a4,	// (0x0006bd87) cell_clock2_toolbar_pane_g1

0x9b74,	// (0x00072657) aid_main_viewer_pane_g1_ParamLimits

0x9b74,	// (0x00072657) aid_main_viewer_pane_g1

0x9b80,	// (0x00072663) aid_main_viewer_pane_g2_ParamLimits

0x9b80,	// (0x00072663) aid_main_viewer_pane_g2

0x9b8c,	// (0x0007266f) aid_main_viewer_pane_g3_ParamLimits

0x9b8c,	// (0x0007266f) aid_main_viewer_pane_g3

0x9b9d,	// (0x00072680) aid_main_viewer_pane_g4_ParamLimits

0x9b9d,	// (0x00072680) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00077f8c) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00077f8c) aid_main_viewer_pane_g

0xa327,	// (0x00072e0a) main_calc_pane_ParamLimits

0xa334,	// (0x00072e17) main_dialer2_pane_ParamLimits

0x4026,	// (0x0006cb09) main_cam6_pane

0x4026,	// (0x0006cb09) main_vid6_pane

0xb679,	// (0x0007415c) listscroll_gen_pane_cp06_ParamLimits

0xb679,	// (0x0007415c) listscroll_gen_pane_cp06

0xb72d,	// (0x00074210) main_clock2_pane_t5_ParamLimits

0xb72d,	// (0x00074210) main_clock2_pane_t5

0xb77c,	// (0x0007425f) aid_call2_pane_cp10_ParamLimits

0xb78e,	// (0x00074271) aid_call_pane_cp10_ParamLimits

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb7a0,	// (0x00074283) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb7a0,	// (0x00074283) popup_clock_analogue_window_cp10_g4_ParamLimits

0x01c0,	// (0x00068ca3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000782c2) popup_clock_analogue_window_cp10_g_ParamLimits

0xb7b2,	// (0x00074295) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbf82,	// (0x00074a65) cell_dialer2_keypad_pane_g2_ParamLimits

0xbf82,	// (0x00074a65) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x000783a8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x000783a8) cell_dialer2_keypad_pane_g

0xbf9e,	// (0x00074a81) cell_dialer2_keypad_pane_t1

0xc9b5,	// (0x00075498) main_cset_text2_pane_ParamLimits

0xc9b5,	// (0x00075498) main_cset_text2_pane

0x2e22,	// (0x0006b905) area_vitu2_query_pane_g1_ParamLimits

0x671c,	// (0x0006f1ff) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0007855d) area_vitu2_query_pane_g_ParamLimits

0x67cd,	// (0x0006f2b0) area_vitu2_query_pane_t7_ParamLimits

0x67cd,	// (0x0006f2b0) area_vitu2_query_pane_t7

0xd136,	// (0x00075c19) bg_button_pane_cp018_ParamLimits

0xd144,	// (0x00075c27) bg_button_pane_cp021_ParamLimits

0x67f1,	// (0x0006f2d4) bg_button_pane_cp022_ParamLimits

0x67f1,	// (0x0006f2d4) bg_vkb2_func_pane_cp08_ParamLimits

0xd136,	// (0x00075c19) bg_vkb2_func_pane_cp06_ParamLimits

0xd144,	// (0x00075c27) bg_vkb2_func_pane_cp07_ParamLimits

0x6802,	// (0x0006f2e5) input_focus_pane_cp09_ParamLimits

0xd5d9,	// (0x000760bc) cam6_autofocus_pane_ParamLimits

0xd5d9,	// (0x000760bc) cam6_autofocus_pane

0xd5fb,	// (0x000760de) cam6_image_uncrop_pane_ParamLimits

0xd5fb,	// (0x000760de) cam6_image_uncrop_pane

0xd628,	// (0x0007610b) cam6_indi_pane_ParamLimits

0xd628,	// (0x0007610b) cam6_indi_pane

0xd642,	// (0x00076125) cam6_mode_pane_ParamLimits

0xd642,	// (0x00076125) cam6_mode_pane

0xd656,	// (0x00076139) cam6_timer_pane_ParamLimits

0xd656,	// (0x00076139) cam6_timer_pane

0xd662,	// (0x00076145) cam6_zoom_pane_ParamLimits

0xd662,	// (0x00076145) cam6_zoom_pane

0xd67e,	// (0x00076161) cam6_mode_pane_g1_ParamLimits

0xd67e,	// (0x00076161) cam6_mode_pane_g1

0xd68a,	// (0x0007616d) cam6_mode_pane_g2_ParamLimits

0xd68a,	// (0x0007616d) cam6_mode_pane_g2

0xd696,	// (0x00076179) cam6_mode_pane_g3_ParamLimits

0xd696,	// (0x00076179) cam6_mode_pane_g3

0xd6a2,	// (0x00076185) cam6_mode_pane_g4_ParamLimits

0xd6a2,	// (0x00076185) cam6_mode_pane_g4

0x0003,

0xfb5b,	// (0x0007863e) cam6_mode_pane_g_ParamLimits

0xfb5b,	// (0x0007863e) cam6_mode_pane_g

0x32ba,	// (0x0006bd9d) bg_tb_trans_pane_cp08_ParamLimits

0x32ba,	// (0x0006bd9d) bg_tb_trans_pane_cp08

0x32c8,	// (0x0006bdab) cam6_battery_pane_ParamLimits

0x32c8,	// (0x0006bdab) cam6_battery_pane

0x32de,	// (0x0006bdc1) cam6_indi_pane_g1_ParamLimits

0x32de,	// (0x0006bdc1) cam6_indi_pane_g1

0x32f0,	// (0x0006bdd3) cam6_indi_pane_g2_ParamLimits

0x32f0,	// (0x0006bdd3) cam6_indi_pane_g2

0x3302,	// (0x0006bde5) cam6_indi_pane_g3_ParamLimits

0x3302,	// (0x0006bde5) cam6_indi_pane_g3

0x0002,

0xfb64,	// (0x00078647) cam6_indi_pane_g_ParamLimits

0xfb64,	// (0x00078647) cam6_indi_pane_g

0x3314,	// (0x0006bdf7) cam6_indi_pane_t1_ParamLimits

0x3314,	// (0x0006bdf7) cam6_indi_pane_t1

0xc4a3,	// (0x00074f86) cam6_autofocus_pane_g1

0xc4ab,	// (0x00074f8e) cam6_autofocus_pane_g2

0xc4b3,	// (0x00074f96) cam6_autofocus_pane_g3

0xc4bb,	// (0x00074f9e) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x0007864e) cam6_autofocus_pane_g

0x333a,	// (0x0006be1d) cam6_timer_pane_g1

0x3342,	// (0x0006be25) cam6_timer_pane_t1

0x3350,	// (0x0006be33) cam6_zoom_cont_pane

0x3358,	// (0x0006be3b) cam6_zoom_pane_g1

0x3360,	// (0x0006be43) cam6_zoom_pane_g2

0xd6ae,	// (0x00076191) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x00078657) cam6_zoom_pane_g

0x1c2d,	// (0x0006a710) cam6_battery_pane_g1

0x1c2d,	// (0x0006a710) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x000781cf) cam6_battery_pane_g

0x3368,	// (0x0006be4b) cam6_zoom_cont_pane_g1

0x3371,	// (0x0006be54) cam6_zoom_cont_pane_g2

0x337a,	// (0x0006be5d) cam6_zoom_cont_pane_g3

0x0002,

0xfb7b,	// (0x0007865e) cam6_zoom_cont_pane_g

0xd6cb,	// (0x000761ae) cam6_mode_pane_cp_ParamLimits

0xd6cb,	// (0x000761ae) cam6_mode_pane_cp

0xd662,	// (0x00076145) cam6_zoom_pane_cp_ParamLimits

0xd662,	// (0x00076145) cam6_zoom_pane_cp

0xd6df,	// (0x000761c2) vid6_image_uncrop_cif_pane_ParamLimits

0xd6df,	// (0x000761c2) vid6_image_uncrop_cif_pane

0xd70b,	// (0x000761ee) vid6_image_uncrop_nhd_pane_ParamLimits

0xd70b,	// (0x000761ee) vid6_image_uncrop_nhd_pane

0xd5fb,	// (0x000760de) vid6_image_uncrop_vga_pane_ParamLimits

0xd5fb,	// (0x000760de) vid6_image_uncrop_vga_pane

0xd72a,	// (0x0007620d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd72a,	// (0x0007620d) vid6_image_uncrop_wvga_pane

0xd749,	// (0x0007622c) vid6_indi_pane_ParamLimits

0xd749,	// (0x0007622c) vid6_indi_pane

0x32ba,	// (0x0006bd9d) bg_tb_trans_pane_cp09_ParamLimits

0x32ba,	// (0x0006bd9d) bg_tb_trans_pane_cp09

0x3392,	// (0x0006be75) cam6_battery_pane_cp_ParamLimits

0x3392,	// (0x0006be75) cam6_battery_pane_cp

0x339e,	// (0x0006be81) vid6_indi_pane_g1_ParamLimits

0x339e,	// (0x0006be81) vid6_indi_pane_g1

0x33b0,	// (0x0006be93) vid6_indi_pane_g2_ParamLimits

0x33b0,	// (0x0006be93) vid6_indi_pane_g2

0x33c2,	// (0x0006bea5) vid6_indi_pane_g3_ParamLimits

0x33c2,	// (0x0006bea5) vid6_indi_pane_g3

0x33d9,	// (0x0006bebc) vid6_indi_pane_g4_ParamLimits

0x33d9,	// (0x0006bebc) vid6_indi_pane_g4

0x33f0,	// (0x0006bed3) vid6_indi_pane_g5_ParamLimits

0x33f0,	// (0x0006bed3) vid6_indi_pane_g5

0x0004,

0xfb82,	// (0x00078665) vid6_indi_pane_g_ParamLimits

0xfb82,	// (0x00078665) vid6_indi_pane_g

0x340a,	// (0x0006beed) vid6_indi_pane_t1_ParamLimits

0x340a,	// (0x0006beed) vid6_indi_pane_t1

0x3420,	// (0x0006bf03) vid6_indi_pane_t2_ParamLimits

0x3420,	// (0x0006bf03) vid6_indi_pane_t2

0x3448,	// (0x0006bf2b) vid6_indi_pane_t3_ParamLimits

0x3448,	// (0x0006bf2b) vid6_indi_pane_t3

0x3470,	// (0x0006bf53) vid6_indi_pane_t4_ParamLimits

0x3470,	// (0x0006bf53) vid6_indi_pane_t4

0x0003,

0xfb8d,	// (0x00078670) vid6_indi_pane_t_ParamLimits

0xfb8d,	// (0x00078670) vid6_indi_pane_t

0x3494,	// (0x0006bf77) wait_bar_pane_cp08

0xd76e,	// (0x00076251) main_cset_text2_pane_t1_ParamLimits

0xd76e,	// (0x00076251) main_cset_text2_pane_t1

0xd6b6,	// (0x00076199) listscroll_gen_pane_cp06_t1_ParamLimits

0xd6b6,	// (0x00076199) listscroll_gen_pane_cp06_t1

0x4026,	// (0x0006cb09) main_cam6_set_pane

0x1e5d,	// (0x0006a940) bg_tb_trans_pane_cp06_ParamLimits

0xc351,	// (0x00074e34) cam4_indicators_pane_g1_ParamLimits

0xc362,	// (0x00074e45) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x000783e5) cam4_indicators_pane_g_ParamLimits

0xc37a,	// (0x00074e5d) cam4_indicators_pane_t1_ParamLimits

0x4281,	// (0x0006cd64) bg_tb_trans_pane_cp07_ParamLimits

0xc431,	// (0x00074f14) vid4_indicators_pane_g1_ParamLimits

0xc447,	// (0x00074f2a) vid4_indicators_pane_g2_ParamLimits

0xc45b,	// (0x00074f3e) vid4_indicators_pane_g3_ParamLimits

0xc46e,	// (0x00074f51) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x000783f7) vid4_indicators_pane_g_ParamLimits

0xc48c,	// (0x00074f6f) vid4_indicators_pane_t1_ParamLimits

0xd268,	// (0x00075d4b) vid4_progress_pane_g1_ParamLimits

0xd27a,	// (0x00075d5d) vid4_progress_pane_g2_ParamLimits

0x9bfa,	// (0x000726dd) vid4_progress_pane_g3_ParamLimits

0xd28c,	// (0x00075d6f) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000785a8) vid4_progress_pane_g_ParamLimits

0xd2aa,	// (0x00075d8d) vid4_progress_pane_t1_ParamLimits

0xd2bf,	// (0x00075da2) vid4_progress_pane_t2_ParamLimits

0xd2d5,	// (0x00075db8) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000785b3) vid4_progress_pane_t_ParamLimits

0xd2ea,	// (0x00075dcd) wait_bar_pane_cp07_ParamLimits

0xd795,	// (0x00076278) main_cam6_set_pane_g2_ParamLimits

0xd795,	// (0x00076278) main_cam6_set_pane_g2

0xd7a1,	// (0x00076284) main_cset6_listscroll_pane_ParamLimits

0xd7a1,	// (0x00076284) main_cset6_listscroll_pane

0xd7ce,	// (0x000762b1) main_cset6_slider_pane_ParamLimits

0xd7ce,	// (0x000762b1) main_cset6_slider_pane

0xd7da,	// (0x000762bd) main_cset6_text2_pane_ParamLimits

0xd7da,	// (0x000762bd) main_cset6_text2_pane

0x34a3,	// (0x0006bf86) main_cset6_text_pane

0x34ab,	// (0x0006bf8e) main_cset_list_pane_copy1_ParamLimits

0x34ab,	// (0x0006bf8e) main_cset_list_pane_copy1

0x34bb,	// (0x0006bf9e) scroll_pane_cp028_copy1

0xd7ed,	// (0x000762d0) cset_list_set_pane_copy1

0xd7fd,	// (0x000762e0) aid_position_infowindow_above_copy1

0xd805,	// (0x000762e8) aid_position_infowindow_below_copy1

0xd80d,	// (0x000762f0) cset_list_set_pane_g1_copy1

0x6853,	// (0x0006f336) cset_list_set_pane_g3_copy1_ParamLimits

0x6853,	// (0x0006f336) cset_list_set_pane_g3_copy1

0x6862,	// (0x0006f345) cset_list_set_pane_t1_copy1_ParamLimits

0x6862,	// (0x0006f345) cset_list_set_pane_t1_copy1

0x4281,	// (0x0006cd64) list_highlight_pane_cp021_copy1_ParamLimits

0x4281,	// (0x0006cd64) list_highlight_pane_cp021_copy1

0x34c4,	// (0x0006bfa7) cset6_slider_pane_ParamLimits

0x34c4,	// (0x0006bfa7) cset6_slider_pane

0x34f0,	// (0x0006bfd3) main_cset6_slider_pane_g1_ParamLimits

0x34f0,	// (0x0006bfd3) main_cset6_slider_pane_g1

0xd815,	// (0x000762f8) main_cset6_slider_pane_g2_ParamLimits

0xd815,	// (0x000762f8) main_cset6_slider_pane_g2

0x3518,	// (0x0006bffb) main_cset6_slider_pane_g3_ParamLimits

0x3518,	// (0x0006bffb) main_cset6_slider_pane_g3

0xd83d,	// (0x00076320) main_cset6_slider_pane_g4_ParamLimits

0xd83d,	// (0x00076320) main_cset6_slider_pane_g4

0xd849,	// (0x0007632c) main_cset6_slider_pane_g5_ParamLimits

0xd849,	// (0x0007632c) main_cset6_slider_pane_g5

0x2af6,	// (0x0006b5d9) main_cset6_slider_pane_g7_ParamLimits

0x2af6,	// (0x0006b5d9) main_cset6_slider_pane_g7

0x2b02,	// (0x0006b5e5) main_cset6_slider_pane_g8_ParamLimits

0x2b02,	// (0x0006b5e5) main_cset6_slider_pane_g8

0xd855,	// (0x00076338) main_cset6_slider_pane_g9_ParamLimits

0xd855,	// (0x00076338) main_cset6_slider_pane_g9

0xd861,	// (0x00076344) main_cset6_slider_pane_g10_ParamLimits

0xd861,	// (0x00076344) main_cset6_slider_pane_g10

0xd86d,	// (0x00076350) main_cset6_slider_pane_g11_ParamLimits

0xd86d,	// (0x00076350) main_cset6_slider_pane_g11

0xd879,	// (0x0007635c) main_cset6_slider_pane_g12_ParamLimits

0xd879,	// (0x0007635c) main_cset6_slider_pane_g12

0xd885,	// (0x00076368) main_cset6_slider_pane_g13_ParamLimits

0xd885,	// (0x00076368) main_cset6_slider_pane_g13

0xd891,	// (0x00076374) main_cset6_slider_pane_g14_ParamLimits

0xd891,	// (0x00076374) main_cset6_slider_pane_g14

0xd89d,	// (0x00076380) main_cset6_slider_pane_g15_ParamLimits

0xd89d,	// (0x00076380) main_cset6_slider_pane_g15

0xd8b5,	// (0x00076398) main_cset6_slider_pane_g16_ParamLimits

0xd8b5,	// (0x00076398) main_cset6_slider_pane_g16

0xd8c1,	// (0x000763a4) main_cset6_slider_pane_g17_ParamLimits

0xd8c1,	// (0x000763a4) main_cset6_slider_pane_g17

0x0011,

0xfb96,	// (0x00078679) main_cset6_slider_pane_g_ParamLimits

0xfb96,	// (0x00078679) main_cset6_slider_pane_g

0x3524,	// (0x0006c007) main_cset6_slider_pane_t1_ParamLimits

0x3524,	// (0x0006c007) main_cset6_slider_pane_t1

0xd8e5,	// (0x000763c8) main_cset6_slider_pane_t2_ParamLimits

0xd8e5,	// (0x000763c8) main_cset6_slider_pane_t2

0xd910,	// (0x000763f3) main_cset6_slider_pane_t3_ParamLimits

0xd910,	// (0x000763f3) main_cset6_slider_pane_t3

0xd93b,	// (0x0007641e) main_cset6_slider_pane_t4_ParamLimits

0xd93b,	// (0x0007641e) main_cset6_slider_pane_t4

0xd966,	// (0x00076449) main_cset6_slider_pane_t5_ParamLimits

0xd966,	// (0x00076449) main_cset6_slider_pane_t5

0x3565,	// (0x0006c048) main_cset6_slider_pane_t7_ParamLimits

0x3565,	// (0x0006c048) main_cset6_slider_pane_t7

0xd991,	// (0x00076474) main_cset6_slider_pane_t8_ParamLimits

0xd991,	// (0x00076474) main_cset6_slider_pane_t8

0xd9b5,	// (0x00076498) main_cset6_slider_pane_t9_ParamLimits

0xd9b5,	// (0x00076498) main_cset6_slider_pane_t9

0xd9d9,	// (0x000764bc) main_cset6_slider_pane_t10_ParamLimits

0xd9d9,	// (0x000764bc) main_cset6_slider_pane_t10

0xd9fd,	// (0x000764e0) main_cset6_slider_pane_t11_ParamLimits

0xd9fd,	// (0x000764e0) main_cset6_slider_pane_t11

0x359b,	// (0x0006c07e) main_cset6_slider_pane_t14_ParamLimits

0x359b,	// (0x0006c07e) main_cset6_slider_pane_t14

0x35d4,	// (0x0006c0b7) main_cset6_slider_pane_t15_ParamLimits

0x35d4,	// (0x0006c0b7) main_cset6_slider_pane_t15

0x000b,

0xfbbb,	// (0x0007869e) main_cset6_slider_pane_t_ParamLimits

0xfbbb,	// (0x0007869e) main_cset6_slider_pane_t

0x360d,	// (0x0006c0f0) cset_slider_pane_g1_copy1

0x3616,	// (0x0006c0f9) cset_slider_pane_g2_copy1

0x361f,	// (0x0006c102) cset_slider_pane_g3_copy1

0x4026,	// (0x0006cb09) bg_popup_sub_pane_cp011_copy1

0x3628,	// (0x0006c10b) main_cset_text_pane_g1_copy1

0x2c3e,	// (0x0006b721) main_cset_text_pane_t1_copy1

0x2c4c,	// (0x0006b72f) main_cset_text_pane_t2_copy1

0x2c5a,	// (0x0006b73d) main_cset_text_pane_t3_copy1

0x2c68,	// (0x0006b74b) main_cset_text_pane_t4_copy1

0x2c76,	// (0x0006b759) main_cset_text_pane_t5_copy1

0x3630,	// (0x0006c113) main_cset_text_pane_t6_copy1

0x363e,	// (0x0006c121) main_cset_text_pane_t7_copy1

0xda21,	// (0x00076504) main_cset_text2_pane_t1_copy1

0x4281,	// (0x0006cd64) main_ncimui_pane

0xa38d,	// (0x00072e70) popup_query_ncimui_window_ParamLimits

0xa38d,	// (0x00072e70) popup_query_ncimui_window

0xaf18,	// (0x000739fb) field_cale_ev2_pane_g4_ParamLimits

0xaf18,	// (0x000739fb) field_cale_ev2_pane_g4

0xbc98,	// (0x0007477b) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbc98,	// (0x0007477b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00078383) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00078383) cell_video_dialer_keypad_pane_g

0xbcb0,	// (0x00074793) cell_video_dialer_keypad_pane_t1

0x4026,	// (0x0006cb09) bg_popup_window_pane_cp012

0x003d,	// (0x00068b20) heading_pane_cp06

0x366a,	// (0x0006c14d) ncim_query_content_pane

0x4026,	// (0x0006cb09) bg_popup_heading_pane_cp01

0x3672,	// (0x0006c155) ncim_heading_pane_t1

0x3680,	// (0x0006c163) ncim_indicator_popup_pane

0x3692,	// (0x0006c175) ncim_query_button_pane

0x36a8,	// (0x0006c18b) ncim_query_content_pane_t1

0x36ba,	// (0x0006c19d) ncim_query_content_pane_t2

0x0005,

0xfbff,	// (0x000786e2) ncim_query_content_pane_t

0x36f4,	// (0x0006c1d7) ncim_query_list_pane

0x3706,	// (0x0006c1e9) ncim_query_popup_pane

0x3680,	// (0x0006c163) ncim_indicator_popup_pane_ParamLimits

0xdb7b,	// (0x0007665e) ncim_query_content_pane_g1_ParamLimits

0xdb7b,	// (0x0007665e) ncim_query_content_pane_g1

0x36a8,	// (0x0006c18b) ncim_query_content_pane_t1_ParamLimits

0x36ba,	// (0x0006c19d) ncim_query_content_pane_t2_ParamLimits

0xdb87,	// (0x0007666a) ncim_query_content_pane_t3_ParamLimits

0xdb87,	// (0x0007666a) ncim_query_content_pane_t3

0xdba4,	// (0x00076687) ncim_query_content_pane_t4_ParamLimits

0xdba4,	// (0x00076687) ncim_query_content_pane_t4

0xdbc1,	// (0x000766a4) ncim_query_content_pane_t5_ParamLimits

0xdbc1,	// (0x000766a4) ncim_query_content_pane_t5

0x36cc,	// (0x0006c1af) ncim_query_content_pane_t6_ParamLimits

0x36cc,	// (0x0006c1af) ncim_query_content_pane_t6

0xfbff,	// (0x000786e2) ncim_query_content_pane_t_ParamLimits

0x36f4,	// (0x0006c1d7) ncim_query_list_pane_ParamLimits

0x3706,	// (0x0006c1e9) ncim_query_popup_pane_ParamLimits

0x371a,	// (0x0006c1fd) wait_bar_pane_cp04

0x4026,	// (0x0006cb09) input_focus_pane_cp011

0x3722,	// (0x0006c205) ncim_query_popup_pane_t1

0x3730,	// (0x0006c213) ncim_list_query_list_pane_ParamLimits

0x3730,	// (0x0006c213) ncim_list_query_list_pane

0x4026,	// (0x0006cb09) bg_button_pane_cp027

0x3743,	// (0x0006c226) ncim_query_button_pane_g1

0x4026,	// (0x0006cb09) list_highlight_pane_cp012

0x374d,	// (0x0006c230) ncim_list_query_list_pane_g1

0x3755,	// (0x0006c238) ncim_list_query_list_pane_t1

0xc36e,	// (0x00074e51) cam4_indicators_pane_g3_ParamLimits

0xc36e,	// (0x00074e51) cam4_indicators_pane_g3

0xc47a,	// (0x00074f5d) vid4_indicators_pane_g5_ParamLimits

0xc47a,	// (0x00074f5d) vid4_indicators_pane_g5

0xd29b,	// (0x00075d7e) vid4_progress_pane_g5_ParamLimits

0xd29b,	// (0x00075d7e) vid4_progress_pane_g5

0xda53,	// (0x00076536) main_ncimui_pane_g1

0xdabd,	// (0x000765a0) ncimui_group_query_pane_ParamLimits

0xdabd,	// (0x000765a0) ncimui_group_query_pane

0xdb17,	// (0x000765fa) ncimui_list_pane_ParamLimits

0xdb17,	// (0x000765fa) ncimui_list_pane

0xdb3e,	// (0x00076621) ncimui_text_pane_ParamLimits

0xdb3e,	// (0x00076621) ncimui_text_pane

0xdbde,	// (0x000766c1) ncimui_text_pane_t1_ParamLimits

0xdbde,	// (0x000766c1) ncimui_text_pane_t1

0x3763,	// (0x0006c246) ncimui_list_single_graphic_pane_ParamLimits

0x3763,	// (0x0006c246) ncimui_list_single_graphic_pane

0xdbfd,	// (0x000766e0) ncimui_query_pane_ParamLimits

0xdbfd,	// (0x000766e0) ncimui_query_pane

0x4026,	// (0x0006cb09) list_highlight_pane_cp013

0x3773,	// (0x0006c256) ncim_list_query_list_pane_t1_copy1

0x374d,	// (0x0006c230) ncim_list_single_graphic_pane_g1

0x3781,	// (0x0006c264) ncim_query_button_pane_cp01

0x378d,	// (0x0006c270) ncim_query_entry_pane_ParamLimits

0x378d,	// (0x0006c270) ncim_query_entry_pane

0x37a0,	// (0x0006c283) ncimui_query_pane_g1

0x37ac,	// (0x0006c28f) ncimui_query_pane_t1_ParamLimits

0x37ac,	// (0x0006c28f) ncimui_query_pane_t1

0x4281,	// (0x0006cd64) input_focus_pane_cp012

0x37c5,	// (0x0006c2a8) ncim_query_entry_pane_t1

0x4d61,	// (0x0006d844) main_im_pane_ParamLimits

0x4281,	// (0x0006cd64) main_mobtv_pane_ParamLimits

0x4281,	// (0x0006cd64) main_mobtv_pane

0xd8cd,	// (0x000763b0) main_cset6_slider_pane_g18_ParamLimits

0xd8cd,	// (0x000763b0) main_cset6_slider_pane_g18

0xd8d9,	// (0x000763bc) main_cset6_slider_pane_g19_ParamLimits

0xd8d9,	// (0x000763bc) main_cset6_slider_pane_g19

0x29a3,	// (0x0006b486) bg_main_mobtv_pane_ParamLimits

0x29a3,	// (0x0006b486) bg_main_mobtv_pane

0xdc10,	// (0x000766f3) main_mobtv_info_pane

0xdc1b,	// (0x000766fe) main_mobtv_loading_pane_ParamLimits

0xdc1b,	// (0x000766fe) main_mobtv_loading_pane

0x37d7,	// (0x0006c2ba) main_mobtv_pg_channel_list_pane

0x37e1,	// (0x0006c2c4) main_mobtv_pg_hdr_pane

0xdc28,	// (0x0007670b) main_mobtv_programe_curr_pane_ParamLimits

0xdc28,	// (0x0007670b) main_mobtv_programe_curr_pane

0xdc35,	// (0x00076718) main_mobtv_programe_next_pane_ParamLimits

0xdc35,	// (0x00076718) main_mobtv_programe_next_pane

0x37ea,	// (0x0006c2cd) popup_mobtv_noti_window

0x1c2d,	// (0x0006a710) main_tv_pg_hdr_pane_g1

0x37f4,	// (0x0006c2d7) main_tv_pg_hdr_pane_g2

0x37fc,	// (0x0006c2df) main_tv_pg_hdr_pane_g3

0x3804,	// (0x0006c2e7) main_tv_pg_hdr_pane_g4

0x380c,	// (0x0006c2ef) main_tv_pg_hdr_pane_g5

0x3816,	// (0x0006c2f9) main_tv_pg_hdr_pane_g6

0x3820,	// (0x0006c303) main_tv_pg_hdr_pane_g7

0x382a,	// (0x0006c30d) main_tv_pg_hdr_pane_g8

0x3834,	// (0x0006c317) main_tv_pg_hdr_pane_g9

0x383e,	// (0x0006c321) main_tv_pg_hdr_pane_g10

0x3848,	// (0x0006c32b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0c,	// (0x000786ef) main_tv_pg_hdr_pane_g

0x3852,	// (0x0006c335) main_tv_pg_hdr_pane_t1

0x3860,	// (0x0006c343) main_tv_pg_hdr_pane_t2

0x386e,	// (0x0006c351) main_tv_pg_hdr_pane_t3

0x387e,	// (0x0006c361) main_tv_pg_hdr_pane_t4

0x388e,	// (0x0006c371) main_tv_pg_hdr_pane_t5

0x0004,

0xfc23,	// (0x00078706) main_tv_pg_hdr_pane_t

0x389e,	// (0x0006c381) single_mobtv_pg_channel_pane_ParamLimits

0x389e,	// (0x0006c381) single_mobtv_pg_channel_pane

0x38b0,	// (0x0006c393) single_mobtv_pg_channel_table_pane

0x38b9,	// (0x0006c39c) single_mobtv_pg_channel_thumb_pane

0x38c2,	// (0x0006c3a5) single_tv_pg_channel_pane_g1

0x38cb,	// (0x0006c3ae) single_tv_pg_channel_pane_g2

0x0001,

0xfc2e,	// (0x00078711) single_tv_pg_channel_pane_g

0x1e5d,	// (0x0006a940) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1e5d,	// (0x0006a940) bg_single_mobtv_pg_channel_thumb_pane

0x38d4,	// (0x0006c3b7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x38d4,	// (0x0006c3b7) single_mobtv_pg_channel_thumb_pane_g1

0x38e2,	// (0x0006c3c5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x38e2,	// (0x0006c3c5) single_mobtv_pg_channel_thumb_pane_g2

0x38ee,	// (0x0006c3d1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x38ee,	// (0x0006c3d1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc33,	// (0x00078716) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc33,	// (0x00078716) single_mobtv_pg_channel_thumb_pane_g

0x38fa,	// (0x0006c3dd) single_mobtv_pg_channel_thumb_pane_t1

0x3908,	// (0x0006c3eb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3a,	// (0x0007871d) single_mobtv_pg_channel_thumb_pane_t

0x1c2d,	// (0x0006a710) bg_single_mobtv_pg_channel_table_pane_g1

0x1c2d,	// (0x0006a710) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x000781cf) bg_single_mobtv_pg_channel_table_pane_g

0x3916,	// (0x0006c3f9) single_mobtv_pg_channel_table_pane_t1

0x3924,	// (0x0006c407) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3f,	// (0x00078722) single_mobtv_pg_channel_table_pane_t

0xdc4a,	// (0x0007672d) main_mobtv_info_pane_g1_ParamLimits

0xdc4a,	// (0x0007672d) main_mobtv_info_pane_g1

0xdc66,	// (0x00076749) main_mobtv_info_pane_t1_ParamLimits

0xdc66,	// (0x00076749) main_mobtv_info_pane_t1

0xdcde,	// (0x000767c1) main_mobtv_info_pane_t2_ParamLimits

0xdcde,	// (0x000767c1) main_mobtv_info_pane_t2

0x0002,

0xfc49,	// (0x0007872c) main_mobtv_info_pane_t_ParamLimits

0xfc49,	// (0x0007872c) main_mobtv_info_pane_t

0xdd6f,	// (0x00076852) wait_bar_pane_cp05

0xdd81,	// (0x00076864) main_mobtv_loading_pane_g1_ParamLimits

0xdd81,	// (0x00076864) main_mobtv_loading_pane_g1

0xdd8d,	// (0x00076870) main_mobtv_loading_pane_g2_ParamLimits

0xdd8d,	// (0x00076870) main_mobtv_loading_pane_g2

0xdd99,	// (0x0007687c) main_mobtv_loading_pane_g3_ParamLimits

0xdd99,	// (0x0007687c) main_mobtv_loading_pane_g3

0x0002,

0xfc50,	// (0x00078733) main_mobtv_loading_pane_g_ParamLimits

0xfc50,	// (0x00078733) main_mobtv_loading_pane_g

0x3932,	// (0x0006c415) main_mobtv_loading_pane_t1_ParamLimits

0x3932,	// (0x0006c415) main_mobtv_loading_pane_t1

0x394a,	// (0x0006c42d) main_mobtv_loading_pane_t2_ParamLimits

0x394a,	// (0x0006c42d) main_mobtv_loading_pane_t2

0x0001,

0xfc57,	// (0x0007873a) main_mobtv_loading_pane_t_ParamLimits

0xfc57,	// (0x0007873a) main_mobtv_loading_pane_t

0xdda7,	// (0x0007688a) wait_bar_pane_cp06_ParamLimits

0xdda7,	// (0x0007688a) wait_bar_pane_cp06

0x396e,	// (0x0006c451) main_mobtv_programe_curr_pane_t1

0x397c,	// (0x0006c45f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5c,	// (0x0007873f) main_mobtv_programe_curr_pane_t

0x398a,	// (0x0006c46d) main_mobtv_programe_next_pane_t1

0x3998,	// (0x0006c47b) main_mobtv_programe_next_pane_t2

0x39a6,	// (0x0006c489) main_mobtv_programe_next_pane_t3

0x0002,

0xfc61,	// (0x00078744) main_mobtv_programe_next_pane_t

0x4026,	// (0x0006cb09) bg_popup_mobtv_noti_window_pane

0x39b4,	// (0x0006c497) popup_mobtv_noti_window_g1

0x39bc,	// (0x0006c49f) popup_mobtv_noti_window_t1

0x39ca,	// (0x0006c4ad) popup_mobtv_noti_window_t2

0x0001,

0xfc68,	// (0x0007874b) popup_mobtv_noti_window_t

0x1c2d,	// (0x0006a710) bg_popup_mobtv_noti_window_pane_g1

0x4026,	// (0x0006cb09) sc_clock_pane

0x4026,	// (0x0006cb09) main_fs_bigclock_pane

0xd488,	// (0x00075f6b) blid2_tripm_pane_t4_ParamLimits

0xd488,	// (0x00075f6b) blid2_tripm_pane_t4

0xddb3,	// (0x00076896) sc_clock_pane_g1_ParamLimits

0xddb3,	// (0x00076896) sc_clock_pane_g1

0xddc1,	// (0x000768a4) sc_clock_pane_t1_ParamLimits

0xddc1,	// (0x000768a4) sc_clock_pane_t1

0xddd6,	// (0x000768b9) sc_clock_pane_t2_ParamLimits

0xddd6,	// (0x000768b9) sc_clock_pane_t2

0xdde8,	// (0x000768cb) sc_clock_pane_t3_ParamLimits

0xdde8,	// (0x000768cb) sc_clock_pane_t3

0x0004,

0xfc6d,	// (0x00078750) sc_clock_pane_t_ParamLimits

0xfc6d,	// (0x00078750) sc_clock_pane_t

0xe606,	// (0x000770e9) main_fs_bigclock_indicator_pane_ParamLimits

0xe606,	// (0x000770e9) main_fs_bigclock_indicator_pane

0xde75,	// (0x00076958) main_fs_bigclock_pane_g1_ParamLimits

0xde75,	// (0x00076958) main_fs_bigclock_pane_g1

0xe612,	// (0x000770f5) main_fs_bigclock_pane_t1_ParamLimits

0xe612,	// (0x000770f5) main_fs_bigclock_pane_t1

0xe624,	// (0x00077107) main_fs_bigclock_pane_t2_ParamLimits

0xe624,	// (0x00077107) main_fs_bigclock_pane_t2

0xe638,	// (0x0007711b) main_fs_bigclock_pane_t3_ParamLimits

0xe638,	// (0x0007711b) main_fs_bigclock_pane_t3

0x0002,

0xfe71,	// (0x00078954) main_fs_bigclock_pane_t_ParamLimits

0xfe71,	// (0x00078954) main_fs_bigclock_pane_t

0x4540,	// (0x0006d023) main_fs_bigclock_indicator_pane_g1

0x369a,	// (0x0006c17d) ncim_query_content_pane_g2_ParamLimits

0x369a,	// (0x0006c17d) ncim_query_content_pane_g2

0x0001,

0xfbfa,	// (0x000786dd) ncim_query_content_pane_g_ParamLimits

0xfbfa,	// (0x000786dd) ncim_query_content_pane_g

0xddfa,	// (0x000768dd) sc_clock_pane_t4_ParamLimits

0xddfa,	// (0x000768dd) sc_clock_pane_t4

0x4281,	// (0x0006cd64) main_radioblah_pane

0x27e5,	// (0x0006b2c8) cell_call4_button_pane_t1_copy1_ParamLimits

0x27e5,	// (0x0006b2c8) cell_call4_button_pane_t1_copy1

0xda6d,	// (0x00076550) main_ncimui_pane_t1_ParamLimits

0xda6d,	// (0x00076550) main_ncimui_pane_t1

0xda87,	// (0x0007656a) main_ncimui_pane_t2_ParamLimits

0xda87,	// (0x0007656a) main_ncimui_pane_t2

0x0002,

0xfbf3,	// (0x000786d6) main_ncimui_pane_t_ParamLimits

0xfbf3,	// (0x000786d6) main_ncimui_pane_t

0x3b16,	// (0x0006c5f9) main_radioblah_anim_pane_ParamLimits

0x3b16,	// (0x0006c5f9) main_radioblah_anim_pane

0x3b27,	// (0x0006c60a) main_radioblah_info_pane_ParamLimits

0x3b27,	// (0x0006c60a) main_radioblah_info_pane

0x3b3b,	// (0x0006c61e) main_radioblah_pane_t1_ParamLimits

0x3b3b,	// (0x0006c61e) main_radioblah_pane_t1

0x3b57,	// (0x0006c63a) main_radioblah_pane_t2_ParamLimits

0x3b57,	// (0x0006c63a) main_radioblah_pane_t2

0x0003,

0xfc8e,	// (0x00078771) main_radioblah_pane_t_ParamLimits

0xfc8e,	// (0x00078771) main_radioblah_pane_t

0xdec7,	// (0x000769aa) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdec7,	// (0x000769aa) main_radioblah_rocker_ctrl_pane

0x3b9f,	// (0x0006c682) main_radioblah_info_pane_t1_ParamLimits

0x3b9f,	// (0x0006c682) main_radioblah_info_pane_t1

0xdf10,	// (0x000769f3) main_radioblah_info_pane_t2_ParamLimits

0xdf10,	// (0x000769f3) main_radioblah_info_pane_t2

0x0003,

0xfc97,	// (0x0007877a) main_radioblah_info_pane_t_ParamLimits

0xfc97,	// (0x0007877a) main_radioblah_info_pane_t

0x1c2d,	// (0x0006a710) main_radioblah_rocker_ctrl_pane_g1

0xdfc0,	// (0x00076aa3) main_radioblah_rocker_ctrl_pane_g2

0xdfc8,	// (0x00076aab) main_radioblah_rocker_ctrl_pane_g3

0xdfd0,	// (0x00076ab3) main_radioblah_rocker_ctrl_pane_g4

0xdfd8,	// (0x00076abb) main_radioblah_rocker_ctrl_pane_g5

0xdfe0,	// (0x00076ac3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca0,	// (0x00078783) main_radioblah_rocker_ctrl_pane_g

0xda21,	// (0x00076504) main_cset_text2_pane_t1_copy1_ParamLimits

0xc29b,	// (0x00074d7e) cam4_image_uncrop_qvga_pane

0xc3e0,	// (0x00074ec3) vid4_image_uncrop_qcif_pane

0xd61a,	// (0x000760fd) cam6_image_uncrop_qvga_pane_ParamLimits

0xd61a,	// (0x000760fd) cam6_image_uncrop_qvga_pane

0x3382,	// (0x0006be65) vid6_image_uncrop_qcif_pane_ParamLimits

0x3382,	// (0x0006be65) vid6_image_uncrop_qcif_pane

0x4026,	// (0x0006cb09) bg_popup_preview_window_pane_cp03

0x364c,	// (0x0006c12f) list_cset_text2_pane

0x3654,	// (0x0006c137) main_cset6_text2_pane_g1

0x365c,	// (0x0006c13f) main_cset6_text2_pane_t1

0xdfe8,	// (0x00076acb) list_cset_text2_pane_t1_ParamLimits

0xdfe8,	// (0x00076acb) list_cset_text2_pane_t1

0x4281,	// (0x0006cd64) main_radioblah_pane_ParamLimits

0xdd5b,	// (0x0007683e) main_mobtv_info_pane_t3_ParamLimits

0xdd5b,	// (0x0007683e) main_mobtv_info_pane_t3

0xdeb5,	// (0x00076998) main_radioblah_pane_g1

0xdee0,	// (0x000769c3) main_radioblah_info_pane_g1

0xdf65,	// (0x00076a48) main_radioblah_info_pane_t3_ParamLimits

0xdf65,	// (0x00076a48) main_radioblah_info_pane_t3

0x904e,	// (0x00071b31) highlight_cell_cale_month_pane_ParamLimits

0x904e,	// (0x00071b31) highlight_cell_cale_month_pane

0x4026,	// (0x0006cb09) main_phob_fisheye_pane

0x1f45,	// (0x0006aa28) scroll_pane_cp0031_ParamLimits

0x1f45,	// (0x0006aa28) scroll_pane_cp0031

0x3494,	// (0x0006bf77) wait_bar_pane_cp08_ParamLimits

0xd7ed,	// (0x000762d0) cset_list_set_pane_copy1_ParamLimits

0x3bf3,	// (0x0006c6d6) highlight_cell_cale_month_pane_g1

0xdfff,	// (0x00076ae2) highlight_cell_cale_month_pane_t1

0x2e76,	// (0x0006b959) list_gen_pane_cp01

0x2ae1,	// (0x0006b5c4) scroll_pane_01

0xe00d,	// (0x00076af0) list_single_double_fisheye_pane

0x6948,	// (0x0006f42b) list_double_fisheye_pane_g1_ParamLimits

0x6948,	// (0x0006f42b) list_double_fisheye_pane_g1

0x6954,	// (0x0006f437) list_double_fisheye_pane_g2_ParamLimits

0x6954,	// (0x0006f437) list_double_fisheye_pane_g2

0xe016,	// (0x00076af9) list_double_fisheye_pane_g3_ParamLimits

0xe016,	// (0x00076af9) list_double_fisheye_pane_g3

0x0004,

0xfcad,	// (0x00078790) list_double_fisheye_pane_g_ParamLimits

0xfcad,	// (0x00078790) list_double_fisheye_pane_g

0x6985,	// (0x0006f468) list_double_fisheye_pane_t1_ParamLimits

0x6985,	// (0x0006f468) list_double_fisheye_pane_t1

0x69a0,	// (0x0006f483) list_double_fisheye_pane_t2_ParamLimits

0x69a0,	// (0x0006f483) list_double_fisheye_pane_t2

0x0001,

0xfcb8,	// (0x0007879b) list_double_fisheye_pane_t_ParamLimits

0xfcb8,	// (0x0007879b) list_double_fisheye_pane_t

0x4026,	// (0x0006cb09) main_call5_pane

0xde20,	// (0x00076903) sc_swipe_pane_ParamLimits

0xde20,	// (0x00076903) sc_swipe_pane

0xe02e,	// (0x00076b11) call5_image_pane_ParamLimits

0xe02e,	// (0x00076b11) call5_image_pane

0xe040,	// (0x00076b23) call5_swipe_1_pane_ParamLimits

0xe040,	// (0x00076b23) call5_swipe_1_pane

0xe04c,	// (0x00076b2f) call5_swipe_2_pane_ParamLimits

0xe04c,	// (0x00076b2f) call5_swipe_2_pane

0xe068,	// (0x00076b4b) popup_call5_audio_first_window_ParamLimits

0xe068,	// (0x00076b4b) popup_call5_audio_first_window

0x1e5d,	// (0x0006a940) call5_swipe_1_pane_g1_ParamLimits

0x1e5d,	// (0x0006a940) call5_swipe_1_pane_g1

0x3bfb,	// (0x0006c6de) call5_swipe_1_pane_g2_ParamLimits

0x3bfb,	// (0x0006c6de) call5_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x000787a0) call5_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x000787a0) call5_swipe_1_pane_g

0x3c07,	// (0x0006c6ea) call5_swipe_1_pane_t1_ParamLimits

0x3c07,	// (0x0006c6ea) call5_swipe_1_pane_t1

0x1e5d,	// (0x0006a940) call5_swipe_2_pane_g1_ParamLimits

0x1e5d,	// (0x0006a940) call5_swipe_2_pane_g1

0x3c1c,	// (0x0006c6ff) call5_swipe_2_pane_g2_ParamLimits

0x3c1c,	// (0x0006c6ff) call5_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x000787a5) call5_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x000787a5) call5_swipe_2_pane_g

0x3c28,	// (0x0006c70b) call5_swipe_2_pane_t1_ParamLimits

0x3c28,	// (0x0006c70b) call5_swipe_2_pane_t1

0x3c3d,	// (0x0006c720) sc_swipe_pane_g1_ParamLimits

0x3c3d,	// (0x0006c720) sc_swipe_pane_g1

0x3c4a,	// (0x0006c72d) sc_swipe_pane_g2_ParamLimits

0x3c4a,	// (0x0006c72d) sc_swipe_pane_g2

0x0001,

0xfcc7,	// (0x000787aa) sc_swipe_pane_g_ParamLimits

0xfcc7,	// (0x000787aa) sc_swipe_pane_g

0x3c56,	// (0x0006c739) sc_swipe_pane_t1_ParamLimits

0x3c56,	// (0x0006c739) sc_swipe_pane_t1

0x4026,	// (0x0006cb09) main_cmail_launcher_pane

0xe078,	// (0x00076b5b) aid_size_cell_cmail_l_ParamLimits

0xe078,	// (0x00076b5b) aid_size_cell_cmail_l

0xe088,	// (0x00076b6b) grid_cmail_l_pane_ParamLimits

0xe088,	// (0x00076b6b) grid_cmail_l_pane

0xe098,	// (0x00076b7b) cell_cmail_l_pane_ParamLimits

0xe098,	// (0x00076b7b) cell_cmail_l_pane

0xe0ae,	// (0x00076b91) cell_cmail_l_pane_g1_ParamLimits

0xe0ae,	// (0x00076b91) cell_cmail_l_pane_g1

0xe0ba,	// (0x00076b9d) cell_cmail_l_pane_t1_ParamLimits

0xe0ba,	// (0x00076b9d) cell_cmail_l_pane_t1

0x3c6b,	// (0x0006c74e) cell_cmail_l_pane_t2_ParamLimits

0x3c6b,	// (0x0006c74e) cell_cmail_l_pane_t2

0x0001,

0xfccc,	// (0x000787af) cell_cmail_l_pane_t_ParamLimits

0xfccc,	// (0x000787af) cell_cmail_l_pane_t

0x4281,	// (0x0006cd64) grid_highlight_pane_cp018_ParamLimits

0x4281,	// (0x0006cd64) grid_highlight_pane_cp018

0x7453,	// (0x0006ff36) main2_pane_ParamLimits

0x7453,	// (0x0006ff36) main2_pane

0x4e0c,	// (0x0006d8ef) popup_sp_fs_action_menu_bg_pane_g1

0x4e14,	// (0x0006d8f7) popup_sp_fs_action_menu_bg_pane_g2

0x4e1c,	// (0x0006d8ff) popup_sp_fs_action_menu_bg_pane_g3

0x4e24,	// (0x0006d907) popup_sp_fs_action_menu_bg_pane_g4

0x4e2c,	// (0x0006d90f) popup_sp_fs_action_menu_bg_pane_g5

0x4e34,	// (0x0006d917) popup_sp_fs_action_menu_bg_pane_g6

0x4e3c,	// (0x0006d91f) popup_sp_fs_action_menu_bg_pane_g7

0x4e44,	// (0x0006d927) popup_sp_fs_action_menu_bg_pane_g8

0x4e4c,	// (0x0006d92f) popup_sp_fs_action_menu_bg_pane_g9

0x4e54,	// (0x0006d937) popup_sp_fs_action_menu_bg_pane_g10

0x4e54,	// (0x0006d937) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00077c7b) popup_sp_fs_action_menu_bg_pane_g

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g3_g1

0x6187,	// (0x0006ec6a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_t3_g3_g2

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00077d2b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00077d2b) list_medium_line_x2_t3_g3_g

0x619f,	// (0x0006ec82) list_medium_line_x2_t3_g3_t1_ParamLimits

0x619f,	// (0x0006ec82) list_medium_line_x2_t3_g3_t1

0x61b4,	// (0x0006ec97) list_medium_line_x2_t3_g3_t2_ParamLimits

0x61b4,	// (0x0006ec97) list_medium_line_x2_t3_g3_t2

0x61c6,	// (0x0006eca9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00077d32) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00077d32) list_medium_line_x2_t3_g3_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g2_g1

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00077d39) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00077d39) list_medium_line_x2_t3_g2_g

0x61db,	// (0x0006ecbe) list_medium_line_x2_t3_g2_t1_ParamLimits

0x61db,	// (0x0006ecbe) list_medium_line_x2_t3_g2_t1

0x61f1,	// (0x0006ecd4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x61f1,	// (0x0006ecd4) list_medium_line_x2_t3_g2_t2

0x6203,	// (0x0006ece6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6203,	// (0x0006ece6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00077d3e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00077d3e) list_medium_line_x2_t3_g2_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t4_g4_g1

0x6221,	// (0x0006ed04) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6221,	// (0x0006ed04) list_medium_line_x2_t4_g4_g2

0x6187,	// (0x0006ec6a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_t4_g4_g3

0x622d,	// (0x0006ed10) list_medium_line_x2_t4_g4_g4_ParamLimits

0x622d,	// (0x0006ed10) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00077d45) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00077d45) list_medium_line_x2_t4_g4_g

0x6239,	// (0x0006ed1c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6239,	// (0x0006ed1c) list_medium_line_x2_t4_g4_t1

0x6253,	// (0x0006ed36) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6253,	// (0x0006ed36) list_medium_line_x2_t4_g4_t2

0x6269,	// (0x0006ed4c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6269,	// (0x0006ed4c) list_medium_line_x2_t4_g4_t3

0x627e,	// (0x0006ed61) list_medium_line_x2_t4_g4_t4_ParamLimits

0x627e,	// (0x0006ed61) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00077d4e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00077d4e) list_medium_line_x2_t4_g4_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g4_g1

0x6221,	// (0x0006ed04) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6221,	// (0x0006ed04) list_medium_line_x2_t2_g4_g2

0x6187,	// (0x0006ec6a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_t2_g4_g3

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00077db5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00077db5) list_medium_line_x2_t2_g4_g

0x6290,	// (0x0006ed73) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6290,	// (0x0006ed73) list_medium_line_x2_t2_g4_t1

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00077dbe) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00077dbe) list_medium_line_x2_t2_g4_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g3_g1

0x6187,	// (0x0006ec6a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_t2_g3_g2

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00077d2b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00077d2b) list_medium_line_x2_t2_g3_g

0x62a5,	// (0x0006ed88) list_medium_line_x2_t2_g3_t1_ParamLimits

0x62a5,	// (0x0006ed88) list_medium_line_x2_t2_g3_t1

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00077dc3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00077dc3) list_medium_line_x2_t2_g3_t

0x9259,	// (0x00071d3c) main_sp_fs_list_pane_ParamLimits

0x9259,	// (0x00071d3c) main_sp_fs_list_pane

0x9265,	// (0x00071d48) sp_fs_scroll_pane_ParamLimits

0x9265,	// (0x00071d48) sp_fs_scroll_pane

0x62ba,	// (0x0006ed9d) list_medium_line_x2_t3_t1

0x62ca,	// (0x0006edad) list_medium_line_x2_t3_t2

0x62d8,	// (0x0006edbb) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00077e0e) list_medium_line_x2_t3_t

0x62e6,	// (0x0006edc9) list_medium_line_x3_t4_t1

0x62f6,	// (0x0006edd9) list_medium_line_x3_t4_t2

0x6304,	// (0x0006ede7) list_medium_line_x3_t4_t3

0x62d8,	// (0x0006edbb) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00077e15) list_medium_line_x3_t4_t

0x6312,	// (0x0006edf5) list_medium_line_x4_t5_t1

0x6322,	// (0x0006ee05) list_medium_line_x4_t5_t2

0x6304,	// (0x0006ede7) list_medium_line_x4_t5_t3

0x6330,	// (0x0006ee13) list_medium_line_x4_t5_t4

0x62d8,	// (0x0006edbb) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00077e1e) list_medium_line_x4_t5_t

0x617b,	// (0x0006ec5e) list_medium_line_t4_g4_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_t4_g4_g1

0x622d,	// (0x0006ed10) list_medium_line_t4_g4_g2_ParamLimits

0x622d,	// (0x0006ed10) list_medium_line_t4_g4_g2

0x633e,	// (0x0006ee21) list_medium_line_t4_g4_g3_ParamLimits

0x633e,	// (0x0006ee21) list_medium_line_t4_g4_g3

0x6193,	// (0x0006ec76) list_medium_line_t4_g4_g4_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00077e29) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00077e29) list_medium_line_t4_g4_g

0x634a,	// (0x0006ee2d) list_medium_line_t4_g4_t1_ParamLimits

0x634a,	// (0x0006ee2d) list_medium_line_t4_g4_t1

0x635f,	// (0x0006ee42) list_medium_line_t4_g4_t2_ParamLimits

0x635f,	// (0x0006ee42) list_medium_line_t4_g4_t2

0x6375,	// (0x0006ee58) list_medium_line_t4_g4_t3_ParamLimits

0x6375,	// (0x0006ee58) list_medium_line_t4_g4_t3

0x61c6,	// (0x0006eca9) list_medium_line_t4_g4_t4_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00077e32) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00077e32) list_medium_line_t4_g4_t

0x9384,	// (0x00071e67) chi_dic_find_pane_g1

0xa342,	// (0x00072e25) main_tport_pane

0x65b7,	// (0x0006f09a) list_medium_line_plain_t1

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g2_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g2_g1

0x65d1,	// (0x0006f0b4) list_medium_line_t2_g2_g2_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000784ee) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000784ee) list_medium_line_t2_g2_g

0x65dd,	// (0x0006f0c0) list_medium_line_t2_g2_t1_ParamLimits

0x65dd,	// (0x0006f0c0) list_medium_line_t2_g2_t1

0x65f4,	// (0x0006f0d7) list_medium_line_t2_g2_t2_ParamLimits

0x65f4,	// (0x0006f0d7) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x000784f3) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x000784f3) list_medium_line_t2_g2_t

0x6813,	// (0x0006f2f6) aid_sp_fs_list_icon_a_sm

0xd2fe,	// (0x00075de1) aid_sp_fs_list_icon_d

0xf0c6,	// (0x00077ba9) aid_sp_fs_text_primary

0x310c,	// (0x0006bbef) aid_sp_fs_text_secondary

0x681b,	// (0x0006f2fe) list_medium_line

0x681b,	// (0x0006f2fe) list_medium_line_g2

0x681b,	// (0x0006f2fe) list_medium_line_g3

0x681b,	// (0x0006f2fe) list_medium_line_plain

0x681b,	// (0x0006f2fe) list_medium_line_plain_t2

0x681b,	// (0x0006f2fe) list_medium_line_plain_t3

0x681b,	// (0x0006f2fe) list_medium_line_right_icon

0x681b,	// (0x0006f2fe) list_medium_line_right_iconx2

0x681b,	// (0x0006f2fe) list_medium_line_t2

0x681b,	// (0x0006f2fe) list_medium_line_t2_g2

0x681b,	// (0x0006f2fe) list_medium_line_t2_g3

0x681b,	// (0x0006f2fe) list_medium_line_t2_right_icon

0x681b,	// (0x0006f2fe) list_medium_line_t2_right_iconx2

0x681b,	// (0x0006f2fe) list_medium_line_t3

0x681b,	// (0x0006f2fe) list_medium_line_t3_g2

0x681b,	// (0x0006f2fe) list_medium_line_t3_g3

0x681b,	// (0x0006f2fe) list_medium_line_t3_right_iconx2

0x6824,	// (0x0006f307) list_medium_line_t4_g4

0x682d,	// (0x0006f310) list_medium_line_x2

0x682d,	// (0x0006f310) list_medium_line_x2_t2_g2

0x682d,	// (0x0006f310) list_medium_line_x2_t2_g3

0x682d,	// (0x0006f310) list_medium_line_x2_t2_g4

0x682d,	// (0x0006f310) list_medium_line_x2_t3

0x682d,	// (0x0006f310) list_medium_line_x2_t3_g2

0x682d,	// (0x0006f310) list_medium_line_x2_t3_g3

0x682d,	// (0x0006f310) list_medium_line_x2_t3_g4

0x682d,	// (0x0006f310) list_medium_line_x2_t4_g2

0x682d,	// (0x0006f310) list_medium_line_x2_t4_g4

0x6836,	// (0x0006f319) list_medium_line_x3

0x6836,	// (0x0006f319) list_medium_line_x3_t4

0x6836,	// (0x0006f319) list_medium_line_x3_t4_g4

0x6824,	// (0x0006f307) list_medium_line_x4_t4

0x6824,	// (0x0006f307) list_medium_line_x4_t4_g7

0x6824,	// (0x0006f307) list_medium_line_x4_t5

0x683f,	// (0x0006f322) list_single_fs_dyc_pane_ParamLimits

0x683f,	// (0x0006f322) list_single_fs_dyc_pane

0x617b,	// (0x0006ec5e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x4_t4_g7_g1

0x6877,	// (0x0006f35a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6877,	// (0x0006f35a) list_medium_line_x4_t4_g7_g2

0x6883,	// (0x0006f366) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6883,	// (0x0006f366) list_medium_line_x4_t4_g7_g3

0x6892,	// (0x0006f375) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6892,	// (0x0006f375) list_medium_line_x4_t4_g7_g4

0x689e,	// (0x0006f381) list_medium_line_x4_t4_g7_g5_ParamLimits

0x689e,	// (0x0006f381) list_medium_line_x4_t4_g7_g5

0x68ad,	// (0x0006f390) list_medium_line_x4_t4_g7_g6_ParamLimits

0x68ad,	// (0x0006f390) list_medium_line_x4_t4_g7_g6

0x68bc,	// (0x0006f39f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x68bc,	// (0x0006f39f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd4,	// (0x000786b7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd4,	// (0x000786b7) list_medium_line_x4_t4_g7_g

0x68c8,	// (0x0006f3ab) list_medium_line_x4_t4_g7_t1_ParamLimits

0x68c8,	// (0x0006f3ab) list_medium_line_x4_t4_g7_t1

0x68dd,	// (0x0006f3c0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x68dd,	// (0x0006f3c0) list_medium_line_x4_t4_g7_t2

0x68f2,	// (0x0006f3d5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x68f2,	// (0x0006f3d5) list_medium_line_x4_t4_g7_t3

0x6907,	// (0x0006f3ea) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6907,	// (0x0006f3ea) list_medium_line_x4_t4_g7_t4

0x6919,	// (0x0006f3fc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6919,	// (0x0006f3fc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe3,	// (0x000786c6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe3,	// (0x000786c6) list_medium_line_x4_t4_g7_t

0x692b,	// (0x0006f40e) list_single_dyc_row_pane_ParamLimits

0x692b,	// (0x0006f40e) list_single_dyc_row_pane

0xe022,	// (0x00076b05) call5_gesture_pane_ParamLimits

0xe022,	// (0x00076b05) call5_gesture_pane

0xe058,	// (0x00076b3b) call5_windows_pane_ParamLimits

0xe058,	// (0x00076b3b) call5_windows_pane

0xe0d0,	// (0x00076bb3) call5_swipe_1_pane_cp_ParamLimits

0xe0d0,	// (0x00076bb3) call5_swipe_1_pane_cp

0xe0dc,	// (0x00076bbf) call5_swipe_2_pane_cp_ParamLimits

0xe0dc,	// (0x00076bbf) call5_swipe_2_pane_cp

0x028b,	// (0x00068d6e) call5_image_pane_cp

0xe0e8,	// (0x00076bcb) popup_call5_audio_first_window_cp_ParamLimits

0xe0e8,	// (0x00076bcb) popup_call5_audio_first_window_cp

0x3c3d,	// (0x0006c720) call5_swipe_1_pane_g1_cp_ParamLimits

0x3c3d,	// (0x0006c720) call5_swipe_1_pane_g1_cp

0x3c7d,	// (0x0006c760) call5_swipe_1_pane_g2_cp

0x3c56,	// (0x0006c739) call5_swipe_1_pane_t1_cp_ParamLimits

0x3c56,	// (0x0006c739) call5_swipe_1_pane_t1_cp

0x3c3d,	// (0x0006c720) call5_swipe_2_pane_g1_cp_ParamLimits

0x3c3d,	// (0x0006c720) call5_swipe_2_pane_g1_cp

0x3c85,	// (0x0006c768) call5_swipe_2_pane_g2_cp

0x3c8d,	// (0x0006c770) call5_swipe_2_pane_t1_cp_ParamLimits

0x3c8d,	// (0x0006c770) call5_swipe_2_pane_t1_cp

0x4281,	// (0x0006cd64) main_sp_fs_email_pane

0x3ca2,	// (0x0006c785) main_sp_fs_listscroll_pane_te

0x69c2,	// (0x0006f4a5) popup_sp_fs_action_menu_pane_ParamLimits

0x69c2,	// (0x0006f4a5) popup_sp_fs_action_menu_pane

0x1c2d,	// (0x0006a710) bg_sp_fs_ctrlbar_pane_g1

0x3cab,	// (0x0006c78e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3cb4,	// (0x0006c797) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3cbd,	// (0x0006c7a0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c2d,	// (0x0006a710) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd1,	// (0x000787b4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1a0c,	// (0x0006a4ef) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1a0c,	// (0x0006a4ef) bg_sp_fs_ctrlbar_ddmenu_pane

0x3cc6,	// (0x0006c7a9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3cc6,	// (0x0006c7a9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3cd2,	// (0x0006c7b5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3cd2,	// (0x0006c7b5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcda,	// (0x000787bd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcda,	// (0x000787bd) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3cde,	// (0x0006c7c1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3cde,	// (0x0006c7c1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6a08,	// (0x0006f4eb) list_medium_line_t2_right_icon_g1

0x6a10,	// (0x0006f4f3) list_medium_line_t2_right_icon_t1

0x6a20,	// (0x0006f503) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdf,	// (0x000787c2) list_medium_line_t2_right_icon_t

0x16f8,	// (0x0006a1db) bg_sp_fs_ctrlbar_pane_ParamLimits

0x16f8,	// (0x0006a1db) bg_sp_fs_ctrlbar_pane

0xe14f,	// (0x00076c32) main_sp_fs_ctrlbar_button_pane_cp01

0xe157,	// (0x00076c3a) main_sp_fs_ctrlbar_ddmenu_pane

0x3d32,	// (0x0006c815) main_sp_fs_ctrlbar_pane_g1

0x3d3e,	// (0x0006c821) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce4,	// (0x000787c7) main_sp_fs_ctrlbar_pane_g

0x3d4a,	// (0x0006c82d) main_sp_fs_ctrlbar_pane_t1

0x6a2e,	// (0x0006f511) main_sp_fs_ctrlbar_pane

0x6a48,	// (0x0006f52b) main_sp_fs_listscroll_pane_te_cp01

0x6a59,	// (0x0006f53c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6a59,	// (0x0006f53c) popup_sp_fs_action_menu_pane_cp01

0x4281,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4281,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp01

0x6a87,	// (0x0006f56a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6a87,	// (0x0006f56a) sp_fs_action_menu_list_gene_pane_g1

0x3d6f,	// (0x0006c852) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3d6f,	// (0x0006c852) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcee,	// (0x000787d1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcee,	// (0x000787d1) sp_fs_action_menu_list_gene_pane_g

0x6a96,	// (0x0006f579) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6a96,	// (0x0006f579) sp_fs_action_menu_list_gene_pane_t1

0x6aae,	// (0x0006f591) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6aae,	// (0x0006f591) sp_fs_action_menu_list_gene_pane

0x3d7c,	// (0x0006c85f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3d7c,	// (0x0006c85f) popup_sp_fs_action_menu_bg_pane

0x6ad1,	// (0x0006f5b4) sp_fs_action_menu_list_pane_ParamLimits

0x6ad1,	// (0x0006f5b4) sp_fs_action_menu_list_pane

0x3d8a,	// (0x0006c86d) sp_fs_scroll_pane_cp01_ParamLimits

0x3d8a,	// (0x0006c86d) sp_fs_scroll_pane_cp01

0x6af5,	// (0x0006f5d8) list_medium_line_plain_t2_t1

0x6b05,	// (0x0006f5e8) list_medium_line_plain_t2_t2

0x0001,

0xfcf3,	// (0x000787d6) list_medium_line_plain_t2_t

0x6b13,	// (0x0006f5f6) list_medium_line_plain_t3_t1

0x6b23,	// (0x0006f606) list_medium_line_plain_t3_t2

0x6b31,	// (0x0006f614) list_medium_line_plain_t3_t3

0x0002,

0xfcf8,	// (0x000787db) list_medium_line_plain_t3_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t2_g2_g1

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00077d39) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00077d39) list_medium_line_x2_t2_g2_g

0x634a,	// (0x0006ee2d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x634a,	// (0x0006ee2d) list_medium_line_x2_t2_g2_t1

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcff,	// (0x000787e2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcff,	// (0x000787e2) list_medium_line_x2_t2_g2_t

0x617b,	// (0x0006ec5e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t4_g2_g1

0x6b3f,	// (0x0006f622) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6b3f,	// (0x0006f622) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd04,	// (0x000787e7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd04,	// (0x000787e7) list_medium_line_x2_t4_g2_g

0x6b51,	// (0x0006f634) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6b51,	// (0x0006f634) list_medium_line_x2_t4_g2_t1

0x6b6b,	// (0x0006f64e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6b6b,	// (0x0006f64e) list_medium_line_x2_t4_g2_t2

0x6b81,	// (0x0006f664) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6b81,	// (0x0006f664) list_medium_line_x2_t4_g2_t3

0x61c6,	// (0x0006eca9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd09,	// (0x000787ec) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd09,	// (0x000787ec) list_medium_line_x2_t4_g2_t

0x6b96,	// (0x0006f679) list_medium_line_t3_right_iconx2_g1

0x6a08,	// (0x0006f4eb) list_medium_line_t3_right_iconx2_g2

0x6b9e,	// (0x0006f681) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd12,	// (0x000787f5) list_medium_line_t3_right_iconx2_g

0x6ba6,	// (0x0006f689) list_medium_line_t3_right_iconx2_t1

0x6bb6,	// (0x0006f699) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd19,	// (0x000787fc) list_medium_line_t3_right_iconx2_t

0x617b,	// (0x0006ec5e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x3_t4_g4_g1

0x6187,	// (0x0006ec6a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x3_t4_g4_g2

0x622d,	// (0x0006ed10) list_medium_line_x3_t4_g4_g3_ParamLimits

0x622d,	// (0x0006ed10) list_medium_line_x3_t4_g4_g3

0x6bc4,	// (0x0006f6a7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6bc4,	// (0x0006f6a7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1e,	// (0x00078801) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1e,	// (0x00078801) list_medium_line_x3_t4_g4_g

0x6bd0,	// (0x0006f6b3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6bd0,	// (0x0006f6b3) list_medium_line_x3_t4_g4_t1

0x6be7,	// (0x0006f6ca) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6be7,	// (0x0006f6ca) list_medium_line_x3_t4_g4_t2

0x6bfc,	// (0x0006f6df) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6bfc,	// (0x0006f6df) list_medium_line_x3_t4_g4_t3

0x6c11,	// (0x0006f6f4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6c11,	// (0x0006f6f4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd27,	// (0x0007880a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd27,	// (0x0007880a) list_medium_line_x3_t4_g4_t

0x6c2e,	// (0x0006f711) list_single_dyc_row_text_pane_t1_ParamLimits

0x6c2e,	// (0x0006f711) list_single_dyc_row_text_pane_t1

0x6c71,	// (0x0006f754) list_single_dyc_row_text_pane_t2_ParamLimits

0x6c71,	// (0x0006f754) list_single_dyc_row_text_pane_t2

0x6ccb,	// (0x0006f7ae) list_single_dyc_row_text_pane_t3_ParamLimits

0x6ccb,	// (0x0006f7ae) list_single_dyc_row_text_pane_t3

0x0002,

0xfd30,	// (0x00078813) list_single_dyc_row_text_pane_t_ParamLimits

0xfd30,	// (0x00078813) list_single_dyc_row_text_pane_t

0x6cdd,	// (0x0006f7c0) list_single_dyc_row_pane_g1_ParamLimits

0x6cdd,	// (0x0006f7c0) list_single_dyc_row_pane_g1

0x6ce9,	// (0x0006f7cc) list_single_dyc_row_pane_g2_ParamLimits

0x6ce9,	// (0x0006f7cc) list_single_dyc_row_pane_g2

0x6cf5,	// (0x0006f7d8) list_single_dyc_row_pane_g3_ParamLimits

0x6cf5,	// (0x0006f7d8) list_single_dyc_row_pane_g3

0x6d01,	// (0x0006f7e4) list_single_dyc_row_pane_g4_ParamLimits

0x6d01,	// (0x0006f7e4) list_single_dyc_row_pane_g4

0x0003,

0xfd37,	// (0x0007881a) list_single_dyc_row_pane_g_ParamLimits

0xfd37,	// (0x0007881a) list_single_dyc_row_pane_g

0x6d0d,	// (0x0006f7f0) list_single_dyc_row_text_pane_ParamLimits

0x6d0d,	// (0x0006f7f0) list_single_dyc_row_text_pane

0x4026,	// (0x0006cb09) bg_sp_fs_scroll_pane

0x3db0,	// (0x0006c893) thumb_sp_fs_scroll_pane

0x65c5,	// (0x0006f0a8) list_medium_line_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_g1

0x6d2c,	// (0x0006f80f) list_medium_line_t1_ParamLimits

0x6d2c,	// (0x0006f80f) list_medium_line_t1

0x617b,	// (0x0006ec5e) list_medium_line_x2_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_g1

0x6187,	// (0x0006ec6a) list_medium_line_x2_g2_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_g2

0x0001,

0xfd40,	// (0x00078823) list_medium_line_x2_g_ParamLimits

0xfd40,	// (0x00078823) list_medium_line_x2_g

0x6d41,	// (0x0006f824) list_medium_line_x2_t1_ParamLimits

0x6d41,	// (0x0006f824) list_medium_line_x2_t1

0x617b,	// (0x0006ec5e) list_medium_line_x3_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x3_g1

0x6187,	// (0x0006ec6a) list_medium_line_x3_g2_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x3_g2

0x0001,

0xfd40,	// (0x00078823) list_medium_line_x3_g_ParamLimits

0xfd40,	// (0x00078823) list_medium_line_x3_g

0x6d41,	// (0x0006f824) list_medium_line_x3_t1_ParamLimits

0x6d41,	// (0x0006f824) list_medium_line_x3_t1

0x3db9,	// (0x0006c89c) thumb_sp_fs_scroll_pane_g1

0x3dc2,	// (0x0006c8a5) thumb_sp_fs_scroll_pane_g2

0x3dcb,	// (0x0006c8ae) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00078828) thumb_sp_fs_scroll_pane_g

0x3db9,	// (0x0006c89c) bg_sp_fs_scroll_pane_g1

0x3dc2,	// (0x0006c8a5) bg_sp_fs_scroll_pane_g2

0x3dcb,	// (0x0006c8ae) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00078828) bg_sp_fs_scroll_pane_g

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x617b,	// (0x0006ec5e) list_medium_line_x2_t3_g4_g1

0x6221,	// (0x0006ed04) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6221,	// (0x0006ed04) list_medium_line_x2_t3_g4_g2

0x6187,	// (0x0006ec6a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6187,	// (0x0006ec6a) list_medium_line_x2_t3_g4_g3

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6193,	// (0x0006ec76) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00077db5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00077db5) list_medium_line_x2_t3_g4_g

0x6d57,	// (0x0006f83a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6d57,	// (0x0006f83a) list_medium_line_x2_t3_g4_t1

0x6d6d,	// (0x0006f850) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6d6d,	// (0x0006f850) list_medium_line_x2_t3_g4_t2

0x61c6,	// (0x0006eca9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x61c6,	// (0x0006eca9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4c,	// (0x0007882f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4c,	// (0x0007882f) list_medium_line_x2_t3_g4_t

0x65c5,	// (0x0006f0a8) list_medium_line_g2_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_g2_g1

0x65d1,	// (0x0006f0b4) list_medium_line_g2_g2_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000784ee) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000784ee) list_medium_line_g2_g

0x6d86,	// (0x0006f869) list_medium_line_g2_t1_ParamLimits

0x6d86,	// (0x0006f869) list_medium_line_g2_t1

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g2_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g2_g1

0x65d1,	// (0x0006f0b4) list_medium_line_t3_g2_g2_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000784ee) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000784ee) list_medium_line_t3_g2_g

0x6d9b,	// (0x0006f87e) list_medium_line_t3_g2_t1_ParamLimits

0x6d9b,	// (0x0006f87e) list_medium_line_t3_g2_t1

0x6db5,	// (0x0006f898) list_medium_line_t3_g2_t2_ParamLimits

0x6db5,	// (0x0006f898) list_medium_line_t3_g2_t2

0x6dcb,	// (0x0006f8ae) list_medium_line_t3_g2_t3_ParamLimits

0x6dcb,	// (0x0006f8ae) list_medium_line_t3_g2_t3

0x0002,

0xfd53,	// (0x00078836) list_medium_line_t3_g2_t_ParamLimits

0xfd53,	// (0x00078836) list_medium_line_t3_g2_t

0x6a08,	// (0x0006f4eb) list_medium_line_right_icon_g1

0x6de2,	// (0x0006f8c5) list_medium_line_right_icon_t1

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g1

0x6df0,	// (0x0006f8d3) list_medium_line_t2_t1_ParamLimits

0x6df0,	// (0x0006f8d3) list_medium_line_t2_t1

0x6e0a,	// (0x0006f8ed) list_medium_line_t2_t2_ParamLimits

0x6e0a,	// (0x0006f8ed) list_medium_line_t2_t2

0x0001,

0xfd5a,	// (0x0007883d) list_medium_line_t2_t_ParamLimits

0xfd5a,	// (0x0007883d) list_medium_line_t2_t

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g1

0x6e1f,	// (0x0006f902) list_medium_line_t3_t1_ParamLimits

0x6e1f,	// (0x0006f902) list_medium_line_t3_t1

0x6e36,	// (0x0006f919) list_medium_line_t3_t2_ParamLimits

0x6e36,	// (0x0006f919) list_medium_line_t3_t2

0x6e4b,	// (0x0006f92e) list_medium_line_t3_t3_ParamLimits

0x6e4b,	// (0x0006f92e) list_medium_line_t3_t3

0x0002,

0xfd5f,	// (0x00078842) list_medium_line_t3_t_ParamLimits

0xfd5f,	// (0x00078842) list_medium_line_t3_t

0x65c5,	// (0x0006f0a8) list_medium_line_g3_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_g3_g1

0x6e5d,	// (0x0006f940) list_medium_line_g3_g2_ParamLimits

0x6e5d,	// (0x0006f940) list_medium_line_g3_g2

0x65d1,	// (0x0006f0b4) list_medium_line_g3_g3_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_g3_g3

0x0002,

0xfd66,	// (0x00078849) list_medium_line_g3_g_ParamLimits

0xfd66,	// (0x00078849) list_medium_line_g3_g

0x6e69,	// (0x0006f94c) list_medium_line_g3_t1_ParamLimits

0x6e69,	// (0x0006f94c) list_medium_line_g3_t1

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g3_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t2_g3_g1

0x6e5d,	// (0x0006f940) list_medium_line_t2_g3_g2_ParamLimits

0x6e5d,	// (0x0006f940) list_medium_line_t2_g3_g2

0x65d1,	// (0x0006f0b4) list_medium_line_t2_g3_g3_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_t2_g3_g3

0x0002,

0xfd66,	// (0x00078849) list_medium_line_t2_g3_g_ParamLimits

0xfd66,	// (0x00078849) list_medium_line_t2_g3_g

0x6e7e,	// (0x0006f961) list_medium_line_t2_g3_t1_ParamLimits

0x6e7e,	// (0x0006f961) list_medium_line_t2_g3_t1

0x6e95,	// (0x0006f978) list_medium_line_t2_g3_t2_ParamLimits

0x6e95,	// (0x0006f978) list_medium_line_t2_g3_t2

0x0001,

0xfd6d,	// (0x00078850) list_medium_line_t2_g3_t_ParamLimits

0xfd6d,	// (0x00078850) list_medium_line_t2_g3_t

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g3_g1_ParamLimits

0x65c5,	// (0x0006f0a8) list_medium_line_t3_g3_g1

0x6e5d,	// (0x0006f940) list_medium_line_t3_g3_g2_ParamLimits

0x6e5d,	// (0x0006f940) list_medium_line_t3_g3_g2

0x65d1,	// (0x0006f0b4) list_medium_line_t3_g3_g3_ParamLimits

0x65d1,	// (0x0006f0b4) list_medium_line_t3_g3_g3

0x0002,

0xfd66,	// (0x00078849) list_medium_line_t3_g3_g_ParamLimits

0xfd66,	// (0x00078849) list_medium_line_t3_g3_g

0x6eaa,	// (0x0006f98d) list_medium_line_t3_g3_t1_ParamLimits

0x6eaa,	// (0x0006f98d) list_medium_line_t3_g3_t1

0x6ebe,	// (0x0006f9a1) list_medium_line_t3_g3_t2_ParamLimits

0x6ebe,	// (0x0006f9a1) list_medium_line_t3_g3_t2

0x6ed0,	// (0x0006f9b3) list_medium_line_t3_g3_t3_ParamLimits

0x6ed0,	// (0x0006f9b3) list_medium_line_t3_g3_t3

0x0002,

0xfd72,	// (0x00078855) list_medium_line_t3_g3_t_ParamLimits

0xfd72,	// (0x00078855) list_medium_line_t3_g3_t

0x6b96,	// (0x0006f679) list_medium_line_right_iconx2_g1

0x6a08,	// (0x0006f4eb) list_medium_line_right_iconx2_g2

0x0001,

0xfd79,	// (0x0007885c) list_medium_line_right_iconx2_g

0x6ee4,	// (0x0006f9c7) list_medium_line_right_iconx2_t1

0x6b96,	// (0x0006f679) list_medium_line_t2_right_iconx2_g1

0x6a08,	// (0x0006f4eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd79,	// (0x0007885c) list_medium_line_t2_right_iconx2_g

0x6ef2,	// (0x0006f9d5) list_medium_line_t2_right_iconx2_t1

0x6f02,	// (0x0006f9e5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7e,	// (0x00078861) list_medium_line_t2_right_iconx2_t

0x6f10,	// (0x0006f9f3) list_medium_line_x4_t4_t1

0x6f1e,	// (0x0006fa01) list_medium_line_x4_t4_t2

0x6f2e,	// (0x0006fa11) list_medium_line_x4_t4_t3

0x6f3e,	// (0x0006fa21) list_medium_line_x4_t4_t4

0x0003,

0xfd83,	// (0x00078866) list_medium_line_x4_t4_t

0xe18a,	// (0x00076c6d) tport_appsw_pane_ParamLimits

0xe18a,	// (0x00076c6d) tport_appsw_pane

0xe198,	// (0x00076c7b) tport_contact_pane_ParamLimits

0xe198,	// (0x00076c7b) tport_contact_pane

0xe1a8,	// (0x00076c8b) tport_listscroll_pane_ParamLimits

0xe1a8,	// (0x00076c8b) tport_listscroll_pane

0xe1b8,	// (0x00076c9b) cell_tport_appsw_pane_ParamLimits

0xe1b8,	// (0x00076c9b) cell_tport_appsw_pane

0x1ec2,	// (0x0006a9a5) tport_appsw_pane_g1_ParamLimits

0x1ec2,	// (0x0006a9a5) tport_appsw_pane_g1

0x3dd4,	// (0x0006c8b7) tport_contact_pane_g1

0x3ddd,	// (0x0006c8c0) tport_contact_pane_t1

0x3deb,	// (0x0006c8ce) tport_contact_pane_t2

0x0001,

0xfd8c,	// (0x0007886f) tport_contact_pane_t

0x3df9,	// (0x0006c8dc) list_tport_pane

0x3e02,	// (0x0006c8e5) scroll_pane_cp_030

0x3e13,	// (0x0006c8f6) cell_tport_appsw_pane_g1

0x3e23,	// (0x0006c906) cell_tport_appsw_pane_t1

0x4026,	// (0x0006cb09) grid_highlight_pane_cp019

0xe1e5,	// (0x00076cc8) list_tport_double_graphic_pane_ParamLimits

0xe1e5,	// (0x00076cc8) list_tport_double_graphic_pane

0x4281,	// (0x0006cd64) list_highlight_pane_cp023_ParamLimits

0x4281,	// (0x0006cd64) list_highlight_pane_cp023

0xe1f2,	// (0x00076cd5) list_tport_double_graphic_pane_g1_ParamLimits

0xe1f2,	// (0x00076cd5) list_tport_double_graphic_pane_g1

0xe1ff,	// (0x00076ce2) list_tport_double_graphic_pane_t1_ParamLimits

0xe1ff,	// (0x00076ce2) list_tport_double_graphic_pane_t1

0xe214,	// (0x00076cf7) list_tport_double_graphic_pane_t2_ParamLimits

0xe214,	// (0x00076cf7) list_tport_double_graphic_pane_t2

0x0001,

0xfd98,	// (0x0007887b) list_tport_double_graphic_pane_t_ParamLimits

0xfd98,	// (0x0007887b) list_tport_double_graphic_pane_t

0x4026,	// (0x0006cb09) main_cale_note_pane

0xc641,	// (0x00075124) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc641,	// (0x00075124) cell_vitu2_function_top_wide_pane_cp01

0xdd6f,	// (0x00076852) wait_bar_pane_cp05_ParamLimits

0x4026,	// (0x0006cb09) listscroll_cmail_pane

0x3e39,	// (0x0006c91c) list_cmail_pane

0xe230,	// (0x00076d13) list_cmail_body_pane

0xe245,	// (0x00076d28) list_single_cmail_header_caption_pane

0xe25f,	// (0x00076d42) list_single_cmail_header_detail_pane_ParamLimits

0xe25f,	// (0x00076d42) list_single_cmail_header_detail_pane

0xe28e,	// (0x00076d71) list_single_cmail_header_caption_pane_t1

0x6f4e,	// (0x0006fa31) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6f4e,	// (0x0006fa31) list_single_cmail_header_detail_pane_g1

0xe29e,	// (0x00076d81) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe29e,	// (0x00076d81) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9d,	// (0x00078880) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9d,	// (0x00078880) list_single_cmail_header_detail_pane_g

0x6f66,	// (0x0006fa49) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6f66,	// (0x0006fa49) list_single_cmail_header_detail_pane_t1

0x6fca,	// (0x0006faad) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6fca,	// (0x0006faad) list_single_cmail_header_editor_pane_bg

0x38cb,	// (0x0006c3ae) list_cmail_body_pane_g1

0x3e66,	// (0x0006c949) list_cmail_body_pane_t1

0x29c3,	// (0x0006b4a6) list_single_cmail_header_editor_pane_bg_g1

0x522b,	// (0x0006dd0e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x29d3,	// (0x0006b4b6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x29cb,	// (0x0006b4ae) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2bed,	// (0x0006b6d0) list_single_cmail_header_editor_pane_bg_g1_copy4

0x29f3,	// (0x0006b4d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x29e3,	// (0x0006b4c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x29eb,	// (0x0006b4ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x520b,	// (0x0006dcee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe2aa,	// (0x00076d8d) calenote_gesture_pane_ParamLimits

0xe2aa,	// (0x00076d8d) calenote_gesture_pane

0xe2c4,	// (0x00076da7) calenote_window_pane_ParamLimits

0xe2c4,	// (0x00076da7) calenote_window_pane

0x3e74,	// (0x0006c957) popup_note_window_cp01

0xe2dc,	// (0x00076dbf) calenote_swipe_1_pane_ParamLimits

0xe2dc,	// (0x00076dbf) calenote_swipe_1_pane

0xe0dc,	// (0x00076bbf) calenote_swipe_2_pane_ParamLimits

0xe0dc,	// (0x00076bbf) calenote_swipe_2_pane

0x3c3d,	// (0x0006c720) calenote_swipe_1_pane_g1_ParamLimits

0x3c3d,	// (0x0006c720) calenote_swipe_1_pane_g1

0x3c4a,	// (0x0006c72d) calenote_swipe_1_pane_g2_ParamLimits

0x3c4a,	// (0x0006c72d) calenote_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x000787aa) calenote_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x000787aa) calenote_swipe_1_pane_g

0x3e86,	// (0x0006c969) calenote_swipe_1_pane_t1_ParamLimits

0x3e86,	// (0x0006c969) calenote_swipe_1_pane_t1

0x3c3d,	// (0x0006c720) calenote_swipe_2_pane_g1_ParamLimits

0x3c3d,	// (0x0006c720) calenote_swipe_2_pane_g1

0x3ea5,	// (0x0006c988) calenote_swipe_2_pane_g2_ParamLimits

0x3ea5,	// (0x0006c988) calenote_swipe_2_pane_g2

0x0001,

0xfda9,	// (0x0007888c) calenote_swipe_2_pane_g_ParamLimits

0xfda9,	// (0x0007888c) calenote_swipe_2_pane_g

0x3eb1,	// (0x0006c994) calenote_swipe_2_pane_t1_ParamLimits

0x3eb1,	// (0x0006c994) calenote_swipe_2_pane_t1

0x4026,	// (0x0006cb09) main_mup_navstr_pane

0xb38e,	// (0x00073e71) main_mup3_pane_t7_ParamLimits

0xb38e,	// (0x00073e71) main_mup3_pane_t7

0xbd85,	// (0x00074868) main_mp4_pane_g6_ParamLimits

0xbd85,	// (0x00074868) main_mp4_pane_g6

0xc0f5,	// (0x00074bd8) main_image3_pane_t4_ParamLimits

0xc0f5,	// (0x00074bd8) main_image3_pane_t4

0xe2ef,	// (0x00076dd2) popup_navstr_preview_pane_ParamLimits

0xe2ef,	// (0x00076dd2) popup_navstr_preview_pane

0xe2fb,	// (0x00076dde) scroll_navstr_pane_ParamLimits

0xe2fb,	// (0x00076dde) scroll_navstr_pane

0x4026,	// (0x0006cb09) bg_popup_preview_window_pane_cp04

0x3ed8,	// (0x0006c9bb) popup_navstr_preview_pane_t1

0xe307,	// (0x00076dea) scroll_navstr_pane_g1_ParamLimits

0xe307,	// (0x00076dea) scroll_navstr_pane_g1

0xe314,	// (0x00076df7) scroll_navstr_pane_t1_ParamLimits

0xe314,	// (0x00076df7) scroll_navstr_pane_t1

0x3e7d,	// (0x0006c960) bg_button_pane_cp014

0x3e7d,	// (0x0006c960) bg_button_pane_cp030

0x6968,	// (0x0006f44b) list_double_fisheye_pane_g4_ParamLimits

0x6968,	// (0x0006f44b) list_double_fisheye_pane_g4

0x6974,	// (0x0006f457) list_double_fisheye_pane_g5_ParamLimits

0x6974,	// (0x0006f457) list_double_fisheye_pane_g5

0x3e41,	// (0x0006c924) sp_fs_scroll_pane_cp03

0x3d32,	// (0x0006c815) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3d3e,	// (0x0006c821) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce4,	// (0x000787c7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3d4a,	// (0x0006c82d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe226,	// (0x00076d09) sp_fs_scroll_pane_cp02

0x4e77,	// (0x0006d95a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x4e77,	// (0x0006d95a) popup_sp_fs_calendar_preview_list_single_pane

0x4026,	// (0x0006cb09) main_cam6_pano_pane

0x4281,	// (0x0006cd64) main_mup3_pane_ParamLimits

0x4026,	// (0x0006cb09) main_phacti_pane

0xdc42,	// (0x00076725) bg_button_pane_cp11

0xdc5a,	// (0x0007673d) main_mobtv_info_pane_g2_ParamLimits

0xdc5a,	// (0x0007673d) main_mobtv_info_pane_g2

0x0001,

0xfc44,	// (0x00078727) main_mobtv_info_pane_g_ParamLimits

0xfc44,	// (0x00078727) main_mobtv_info_pane_g

0xde0c,	// (0x000768ef) sc_clock_pane_t5_ParamLimits

0xde0c,	// (0x000768ef) sc_clock_pane_t5

0xdeb5,	// (0x00076998) main_radioblah_pane_g1_ParamLimits

0x3b6f,	// (0x0006c652) main_radioblah_pane_t3_ParamLimits

0x3b6f,	// (0x0006c652) main_radioblah_pane_t3

0x3b87,	// (0x0006c66a) main_radioblah_pane_t4_ParamLimits

0x3b87,	// (0x0006c66a) main_radioblah_pane_t4

0xded3,	// (0x000769b6) main_radioblah_text_pane_ParamLimits

0xded3,	// (0x000769b6) main_radioblah_text_pane

0xdee0,	// (0x000769c3) main_radioblah_info_pane_g1_ParamLimits

0xdf79,	// (0x00076a5c) main_radioblah_info_pane_t4_ParamLimits

0xdf79,	// (0x00076a5c) main_radioblah_info_pane_t4

0x4281,	// (0x0006cd64) main_sp_fs_calendar_pane

0xe326,	// (0x00076e09) main_phacti_pane_g1

0xe32e,	// (0x00076e11) phacti_note_pane_ParamLimits

0xe32e,	// (0x00076e11) phacti_note_pane

0x3eef,	// (0x0006c9d2) phacti_term_pane_ParamLimits

0x3eef,	// (0x0006c9d2) phacti_term_pane

0x3f04,	// (0x0006c9e7) phacti_note_pane_t1_ParamLimits

0x3f04,	// (0x0006c9e7) phacti_note_pane_t1

0x6fdc,	// (0x0006fabf) phacti_term_pane_g1

0x6fe4,	// (0x0006fac7) phacti_term_pane_t1_ParamLimits

0x6fe4,	// (0x0006fac7) phacti_term_pane_t1

0x3f1b,	// (0x0006c9fe) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3f23,	// (0x0006ca06) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb3,	// (0x00078896) popup_sp_fs_calendar_preview_list_single_pane_g

0x3f2b,	// (0x0006ca0e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3f2b,	// (0x0006ca0e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3f41,	// (0x0006ca24) aid_popup_sp_fs_bg_corner_pane

0x1c2d,	// (0x0006a710) popup_sp_fs_calendar_preview_bg_pane_g1

0x4026,	// (0x0006cb09) popup_sp_fs_calendar_preview_bg_pane

0x3f49,	// (0x0006ca2c) popup_sp_fs_calendar_preview_list_pane

0x4281,	// (0x0006cd64) bg_main_sp_fs_cale_pane_ParamLimits

0x4281,	// (0x0006cd64) bg_main_sp_fs_cale_pane

0x700e,	// (0x0006faf1) listscroll_cale_mrui_pane_ParamLimits

0x700e,	// (0x0006faf1) listscroll_cale_mrui_pane

0x7022,	// (0x0006fb05) listscroll_sp_fs_schedule_track_pane

0x702b,	// (0x0006fb0e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x702b,	// (0x0006fb0e) main_sp_fs_ctrlbar_pane_cp01

0x3f51,	// (0x0006ca34) main_sp_fs_ribbon_pane

0x3f59,	// (0x0006ca3c) popup_sp_fs_cale_preview_window

0xe375,	// (0x00076e58) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe375,	// (0x00076e58) list_single_sp_fs_schedule_track_pane

0x75dc,	// (0x000700bf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x75dc,	// (0x000700bf) bg_sp_fs_highlight_list_pane_cp03

0xe389,	// (0x00076e6c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe389,	// (0x00076e6c) list_single_sp_fs_schedule_track_pane_g1

0xe395,	// (0x00076e78) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe395,	// (0x00076e78) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb8,	// (0x0007889b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb8,	// (0x0007889b) list_single_sp_fs_schedule_track_pane_g

0xe3a1,	// (0x00076e84) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe3a1,	// (0x00076e84) list_single_sp_fs_schedule_track_pane_t1

0xe3bf,	// (0x00076ea2) sp_fs_schedule_track_pane_ParamLimits

0xe3bf,	// (0x00076ea2) sp_fs_schedule_track_pane

0x3f6b,	// (0x0006ca4e) sp_fs_schedule_track_pane_g1

0x3f73,	// (0x0006ca56) sp_fs_schedule_track_pane_g2

0x3f7b,	// (0x0006ca5e) sp_fs_schedule_track_pane_g3

0x3f83,	// (0x0006ca66) sp_fs_schedule_track_pane_g4

0x3f8b,	// (0x0006ca6e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbd,	// (0x000788a0) sp_fs_schedule_track_pane_g

0x29c3,	// (0x0006b4a6) bg_sp_fs_schedule_viewer_highlight_g1

0x522b,	// (0x0006dd0e) bg_sp_fs_schedule_viewer_highlight_g2

0x29cb,	// (0x0006b4ae) bg_sp_fs_schedule_viewer_highlight_g3

0x29d3,	// (0x0006b4b6) bg_sp_fs_schedule_viewer_highlight_g4

0x2bed,	// (0x0006b6d0) bg_sp_fs_schedule_viewer_highlight_g5

0x29e3,	// (0x0006b4c6) bg_sp_fs_schedule_viewer_highlight_g6

0x29eb,	// (0x0006b4ce) bg_sp_fs_schedule_viewer_highlight_g7

0x29f3,	// (0x0006b4d6) bg_sp_fs_schedule_viewer_highlight_g8

0x520b,	// (0x0006dcee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc8,	// (0x000788ab) bg_sp_fs_schedule_viewer_highlight_g

0x4026,	// (0x0006cb09) bg_main_sp_fs_ribbon_pane

0xe3d1,	// (0x00076eb4) main_sp_fs_ribbon_pane_g1

0x3f93,	// (0x0006ca76) main_sp_fs_ribbon_pane_t1

0xe3da,	// (0x00076ebd) main_sp_fs_ribbon_pane_t2

0x3fa2,	// (0x0006ca85) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddb,	// (0x000788be) main_sp_fs_ribbon_pane_t

0x3fb1,	// (0x0006ca94) main_sp_fs_ribbon_scheduler_pane

0x3fb9,	// (0x0006ca9c) bg_main_sp_fs_ribbon_pane_g1

0x3fc2,	// (0x0006caa5) bg_main_sp_fs_ribbon_pane_g2

0x3fcb,	// (0x0006caae) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde2,	// (0x000788c5) bg_main_sp_fs_ribbon_pane_g

0x3fd3,	// (0x0006cab6) main_sp_fs_ribbon_scheduler_pane_g1

0x3fdc,	// (0x0006cabf) main_sp_fs_ribbon_scheduler_pane_g2

0x3fe5,	// (0x0006cac8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde9,	// (0x000788cc) main_sp_fs_ribbon_scheduler_pane_g

0x3fee,	// (0x0006cad1) list_cale_mrui_pane

0xe3e9,	// (0x00076ecc) sp_fs_scroll_pane_cp07_ParamLimits

0xe3e9,	// (0x00076ecc) sp_fs_scroll_pane_cp07

0xe3ff,	// (0x00076ee2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe3ff,	// (0x00076ee2) bg_sp_fs_schedule_viewer_highlight

0x3ff7,	// (0x0006cada) list_single_sp_fs_schedule_track_pane_cp01

0x3fff,	// (0x0006cae2) list_sp_fs_schedule_track_pane

0x4007,	// (0x0006caea) sp_fs_scroll_pane_cp06_ParamLimits

0x4007,	// (0x0006caea) sp_fs_scroll_pane_cp06

0x1c2d,	// (0x0006a710) bgmain_sp_fs_calendar_pane_g1

0x703c,	// (0x0006fb1f) list_single_cale_mrui_pane_ParamLimits

0x703c,	// (0x0006fb1f) list_single_cale_mrui_pane

0x7063,	// (0x0006fb46) list_single_cale_mrui_row_pane_ParamLimits

0x7063,	// (0x0006fb46) list_single_cale_mrui_row_pane

0x7070,	// (0x0006fb53) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7070,	// (0x0006fb53) list_single_cale_mrui_row_pane_g1

0x70a8,	// (0x0006fb8b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x70a8,	// (0x0006fb8b) list_single_cale_mrui_row_pane_t1

0x70ba,	// (0x0006fb9d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x70ba,	// (0x0006fb9d) list_single_cale_mrui_row_pane_t2

0x7120,	// (0x0006fc03) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7120,	// (0x0006fc03) list_single_cale_mrui_row_pane_t3

0x714f,	// (0x0006fc32) list_single_cale_mrui_row_pane_t4_ParamLimits

0x714f,	// (0x0006fc32) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf7,	// (0x000788da) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf7,	// (0x000788da) list_single_cale_mrui_row_pane_t

0x717e,	// (0x0006fc61) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x717e,	// (0x0006fc61) list_single_cmail_header_editor_pane_bg_cp01

0x71a0,	// (0x0006fc83) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x71a0,	// (0x0006fc83) list_single_cmail_header_editor_pane_bg_cp02

0xe40c,	// (0x00076eef) main_radioblah_text_pane_t1_ParamLimits

0xe40c,	// (0x00076eef) main_radioblah_text_pane_t1

0x428f,	// (0x0006cd72) cam6_indi_pane_cp01

0x4297,	// (0x0006cd7a) cam6_mode_pane_cp01

0x429f,	// (0x0006cd82) cam6_pano_pane

0x42a8,	// (0x0006cd8b) cam6_zoom_pane_cp01

0x42b2,	// (0x0006cd95) cam6_pano_image_pane

0x42bb,	// (0x0006cd9e) cam6_pano_pane_g1

0x38cb,	// (0x0006c3ae) cam6_pano_pane_g2

0x42c4,	// (0x0006cda7) cam6_pano_pane_g3

0x42cd,	// (0x0006cdb0) cam6_pano_pane_g4

0x21b7,	// (0x0006ac9a) cam6_pano_pane_g5

0x42d6,	// (0x0006cdb9) cam6_pano_pane_g6

0x42de,	// (0x0006cdc1) cam6_pano_pane_g7

0x42e6,	// (0x0006cdc9) cam6_pano_pane_g8

0x42ef,	// (0x0006cdd2) cam6_pano_pane_g9

0x0008,

0xfe00,	// (0x000788e3) cam6_pano_pane_g

0x4026,	// (0x0006cb09) main_browser_tag_pane

0x3ed0,	// (0x0006c9b3) grid_navstr_albumart_pane

0x42fa,	// (0x0006cddd) cell_navstr_albumart_pane_ParamLimits

0x42fa,	// (0x0006cddd) cell_navstr_albumart_pane

0x4316,	// (0x0006cdf9) cell_navstr_albumart_pane_g1

0x1511,	// (0x00069ff4) cell_navstr_albumart_pane_g2

0x1521,	// (0x0006a004) cell_navstr_albumart_pane_g3

0x1519,	// (0x00069ffc) cell_navstr_albumart_pane_g4

0x0003,

0xfe13,	// (0x000788f6) cell_navstr_albumart_pane_g

0xe426,	// (0x00076f09) bt_list_pane_ParamLimits

0xe426,	// (0x00076f09) bt_list_pane

0xe43f,	// (0x00076f22) bt_list_pane_t1

0xe44e,	// (0x00076f31) bt_list_pane_t2

0x0001,

0xfe1c,	// (0x000788ff) bt_list_pane_t

0x4026,	// (0x0006cb09) main_cale_prevew_pane

0xe45d,	// (0x00076f40) popup_cale_preview_window_ParamLimits

0xe45d,	// (0x00076f40) popup_cale_preview_window

0x4281,	// (0x0006cd64) bg_popup_preview_window_pane_cp05_ParamLimits

0x4281,	// (0x0006cd64) bg_popup_preview_window_pane_cp05

0x431e,	// (0x0006ce01) list_cale_preview_pane_ParamLimits

0x431e,	// (0x0006ce01) list_cale_preview_pane

0xe478,	// (0x00076f5b) list_double_cale_preview_pane_ParamLimits

0xe478,	// (0x00076f5b) list_double_cale_preview_pane

0xe48c,	// (0x00076f6f) list_single_cale_preview_pane_ParamLimits

0xe48c,	// (0x00076f6f) list_single_cale_preview_pane

0xe4a4,	// (0x00076f87) list_single_cale_preview_pane_g1

0xe4ac,	// (0x00076f8f) list_single_cale_preview_pane_t1_ParamLimits

0xe4ac,	// (0x00076f8f) list_single_cale_preview_pane_t1

0xe4c1,	// (0x00076fa4) list_double_cale_preview_pane_g1

0xe4c9,	// (0x00076fac) list_double_cale_preview_pane_t1_ParamLimits

0xe4c9,	// (0x00076fac) list_double_cale_preview_pane_t1

0xe4de,	// (0x00076fc1) list_double_cale_preview_pane_t2_ParamLimits

0xe4de,	// (0x00076fc1) list_double_cale_preview_pane_t2

0x0001,

0xfe21,	// (0x00078904) list_double_cale_preview_pane_t_ParamLimits

0xfe21,	// (0x00078904) list_double_cale_preview_pane_t

0x4026,	// (0x0006cb09) main_ezdial_pane

0x4281,	// (0x0006cd64) main_sp_fs_email_pane_ParamLimits

0xe0f6,	// (0x00076bd9) cmail_ddmenu_btn01_pane_ParamLimits

0xe0f6,	// (0x00076bd9) cmail_ddmenu_btn01_pane

0xe113,	// (0x00076bf6) cmail_ddmenu_btn02_pane_ParamLimits

0xe113,	// (0x00076bf6) cmail_ddmenu_btn02_pane

0xe131,	// (0x00076c14) cmail_ddmenu_btn03_pane_ParamLimits

0xe131,	// (0x00076c14) cmail_ddmenu_btn03_pane

0x6a2e,	// (0x0006f511) main_sp_fs_ctrlbar_pane_ParamLimits

0x6a48,	// (0x0006f52b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe230,	// (0x00076d13) list_cmail_body_pane_ParamLimits

0x3e50,	// (0x0006c933) bg_button_pane_cp12

0x3e59,	// (0x0006c93c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3e59,	// (0x0006c93c) list_single_cmail_header_detail_pane_g3

0x6fa4,	// (0x0006fa87) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6fa4,	// (0x0006fa87) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda4,	// (0x00078887) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda4,	// (0x00078887) list_single_cmail_header_detail_pane_t

0x6ff9,	// (0x0006fadc) phacti_term_pane_t2_ParamLimits

0x6ff9,	// (0x0006fadc) phacti_term_pane_t2

0x0001,

0xfdae,	// (0x00078891) phacti_term_pane_t_ParamLimits

0xfdae,	// (0x00078891) phacti_term_pane_t

0x432a,	// (0x0006ce0d) aid_size_list_single_double

0xe4f6,	// (0x00076fd9) popup_ezdial_listscroll_window

0xe516,	// (0x00076ff9) popup_number_entry_window_cp01

0x028b,	// (0x00068d6e) bg_popup_call_pane_cp09

0x4336,	// (0x0006ce19) ezdial_list_pane

0x433e,	// (0x0006ce21) scroll_pane_cp23

0x1a0c,	// (0x0006a4ef) bg_button_pane_cp028_ParamLimits

0x1a0c,	// (0x0006a4ef) bg_button_pane_cp028

0xe524,	// (0x00077007) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe524,	// (0x00077007) cmail_ddmenu_btn01_pane_g1

0xe536,	// (0x00077019) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe536,	// (0x00077019) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe26,	// (0x00078909) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe26,	// (0x00078909) cmail_ddmenu_btn01_pane_g

0x4346,	// (0x0006ce29) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4346,	// (0x0006ce29) cmail_ddmenu_btn01_pane_t1

0x16f8,	// (0x0006a1db) bg_button_pane_cp029_ParamLimits

0x16f8,	// (0x0006a1db) bg_button_pane_cp029

0xe536,	// (0x00077019) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe536,	// (0x00077019) cmail_ddmenu_btn02_pane_g1

0xe54e,	// (0x00077031) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe54e,	// (0x00077031) cmail_ddmenu_btn02_pane_t1

0x75dc,	// (0x000700bf) bg_button_pane_cp031_ParamLimits

0x75dc,	// (0x000700bf) bg_button_pane_cp031

0xe536,	// (0x00077019) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe536,	// (0x00077019) cmail_ddmenu_btn03_pane_g1

0xe54e,	// (0x00077031) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe54e,	// (0x00077031) cmail_ddmenu_btn03_pane_t1

0xbf9e,	// (0x00074a81) cell_dialer2_keypad_pane_t1_ParamLimits

0xbfb8,	// (0x00074a9b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbfb8,	// (0x00074a9b) cell_dialer2_keypad_pane_t1_copy1

0xdab3,	// (0x00076596) ncimui_group_button_pane

0x4281,	// (0x0006cd64) main_sp_fs_calendar_pane_ParamLimits

0xe245,	// (0x00076d28) list_single_cmail_header_caption_pane_ParamLimits

0x3115,	// (0x0006bbf8) aid_recal_txt_sm_pane

0x4026,	// (0x0006cb09) mian_recal_day_pane

0x3f59,	// (0x0006ca3c) popup_sp_fs_cale_preview_window_ParamLimits

0x4026,	// (0x0006cb09) list_recal_day_pane

0x4375,	// (0x0006ce58) list_single_recal_day_pane_ParamLimits

0x4375,	// (0x0006ce58) list_single_recal_day_pane

0x4387,	// (0x0006ce6a) list_single_recal_day_pane_g1_ParamLimits

0x4387,	// (0x0006ce6a) list_single_recal_day_pane_g1

0x4393,	// (0x0006ce76) list_single_recal_day_pane_g2_ParamLimits

0x4393,	// (0x0006ce76) list_single_recal_day_pane_g2

0x43a3,	// (0x0006ce86) list_single_recal_day_pane_g3_ParamLimits

0x43a3,	// (0x0006ce86) list_single_recal_day_pane_g3

0xe572,	// (0x00077055) list_single_recal_day_pane_g4_ParamLimits

0xe572,	// (0x00077055) list_single_recal_day_pane_g4

0x43af,	// (0x0006ce92) list_single_recal_day_pane_g5_ParamLimits

0x43af,	// (0x0006ce92) list_single_recal_day_pane_g5

0x43bf,	// (0x0006cea2) list_single_recal_day_pane_g6_ParamLimits

0x43bf,	// (0x0006cea2) list_single_recal_day_pane_g6

0x0004,

0xfe35,	// (0x00078918) list_single_recal_day_pane_g_ParamLimits

0xfe35,	// (0x00078918) list_single_recal_day_pane_g

0x43d6,	// (0x0006ceb9) list_single_recal_day_pane_t1

0x43e8,	// (0x0006cecb) list_single_recal_day_pane_t2

0x0001,

0xfe40,	// (0x00078923) list_single_recal_day_pane_t

0xe592,	// (0x00077075) ncimui_query_button_pane_ParamLimits

0xe592,	// (0x00077075) ncimui_query_button_pane

0xe5a2,	// (0x00077085) ncimui_query_button_pane_t1_ParamLimits

0xe5a2,	// (0x00077085) ncimui_query_button_pane_t1

0x43fd,	// (0x0006cee0) ncimui_query_button_pane_t2_ParamLimits

0x43fd,	// (0x0006cee0) ncimui_query_button_pane_t2

0x0001,

0xfe45,	// (0x00078928) ncimui_query_button_pane_t_ParamLimits

0xfe45,	// (0x00078928) ncimui_query_button_pane_t

0xe5b5,	// (0x00077098) query_button_pane_ParamLimits

0xe5b5,	// (0x00077098) query_button_pane

0x4026,	// (0x0006cb09) bg_button_pane_cp0028

0x4410,	// (0x0006cef3) query_button_pane_t1

0xa342,	// (0x00072e25) main_tport_pane_ParamLimits

0xe161,	// (0x00076c44) bg_popup_window_pane_cp01_ParamLimits

0xe161,	// (0x00076c44) bg_popup_window_pane_cp01

0xe16e,	// (0x00076c51) heading_pane_cp08_ParamLimits

0xe16e,	// (0x00076c51) heading_pane_cp08

0xe17c,	// (0x00076c5f) heading_pane_cp07_ParamLimits

0xe17c,	// (0x00076c5f) heading_pane_cp07

0x3e13,	// (0x0006c8f6) cell_tport_appsw_pane_g2

0x0002,

0xfd91,	// (0x00078874) cell_tport_appsw_pane_g

0x63ab,	// (0x0006ee8e) input_candi_list_open_g1

0xee59,	// (0x0007793c) list_cale_time_pane_g6_ParamLimits

0xee59,	// (0x0007793c) list_cale_time_pane_g6

0xadd9,	// (0x000738bc) aid_size_touch_calib_1_ParamLimits

0xadd9,	// (0x000738bc) aid_size_touch_calib_1

0xade5,	// (0x000738c8) aid_size_touch_calib_2_ParamLimits

0xade5,	// (0x000738c8) aid_size_touch_calib_2

0xadf3,	// (0x000738d6) aid_size_touch_calib_3_ParamLimits

0xadf3,	// (0x000738d6) aid_size_touch_calib_3

0xae03,	// (0x000738e6) aid_size_touch_calib_4_ParamLimits

0xae03,	// (0x000738e6) aid_size_touch_calib_4

0xae11,	// (0x000738f4) main_touch_calib_button_group_pane_ParamLimits

0xae11,	// (0x000738f4) main_touch_calib_button_group_pane

0xae1f,	// (0x00073902) main_touch_calib_pane_g1_ParamLimits

0xae2b,	// (0x0007390e) main_touch_calib_pane_g2_ParamLimits

0xae37,	// (0x0007391a) main_touch_calib_pane_g3_ParamLimits

0xae43,	// (0x00073926) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00078244) main_touch_calib_pane_g_ParamLimits

0xae4f,	// (0x00073932) main_touch_calib_pane_t1_ParamLimits

0xae66,	// (0x00073949) main_touch_calib_pane_t2_ParamLimits

0xae7f,	// (0x00073962) main_touch_calib_pane_t3_ParamLimits

0xae95,	// (0x00073978) main_touch_calib_pane_t4_ParamLimits

0xaeab,	// (0x0007398e) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0007824d) main_touch_calib_pane_t_ParamLimits

0x1f81,	// (0x0006aa64) list_single_fp_cale_pane_g3_ParamLimits

0x1f81,	// (0x0006aa64) list_single_fp_cale_pane_g3

0x4281,	// (0x0006cd64) bg_button_pane_cp012_ParamLimits

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp03_ParamLimits

0xcda8,	// (0x0007588b) cell_vitu2_function_top_pane_g1_ParamLimits

0x4281,	// (0x0006cd64) bg_vkb2_func_pane_cp04_ParamLimits

0xda3b,	// (0x0007651e) main_ncimui_button_group_pane_ParamLimits

0xda3b,	// (0x0007651e) main_ncimui_button_group_pane

0xdaa1,	// (0x00076584) main_ncimui_pane_t3_ParamLimits

0xdaa1,	// (0x00076584) main_ncimui_pane_t3

0x3ee6,	// (0x0006c9c9) phacti_button_group_pane

0x432a,	// (0x0006ce0d) aid_size_list_single_double_ParamLimits

0xe4f6,	// (0x00076fd9) popup_ezdial_listscroll_window_ParamLimits

0xe516,	// (0x00076ff9) popup_number_entry_window_cp01_ParamLimits

0xe5c2,	// (0x000770a5) phacti_button_pane_ParamLimits

0xe5c2,	// (0x000770a5) phacti_button_pane

0x4026,	// (0x0006cb09) bg_button_pane_cp14

0x441e,	// (0x0006cf01) phacti_button_pane_t1

0xe5d3,	// (0x000770b6) main_touch_calib_button_pane_ParamLimits

0xe5d3,	// (0x000770b6) main_touch_calib_button_pane

0x4d61,	// (0x0006d844) bg_button_pane_cp18_ParamLimits

0x4d61,	// (0x0006d844) bg_button_pane_cp18

0x442c,	// (0x0006cf0f) main_touch_calib_button_pane_t1_ParamLimits

0x442c,	// (0x0006cf0f) main_touch_calib_button_pane_t1

0x4442,	// (0x0006cf25) main_touch_calib_button_pane_t2_ParamLimits

0x4442,	// (0x0006cf25) main_touch_calib_button_pane_t2

0x0001,

0xfe4a,	// (0x0007892d) main_touch_calib_button_pane_t_ParamLimits

0xfe4a,	// (0x0007892d) main_touch_calib_button_pane_t

0x4026,	// (0x0006cb09) cell_ncimui_button_pane

0x4026,	// (0x0006cb09) bg_button_pane_cp032

0x4460,	// (0x0006cf43) cell_ncimui_button_pane_t1

0xc014,	// (0x00074af7) image3_infobar_pane_ParamLimits

0xc014,	// (0x00074af7) image3_infobar_pane

0xde2e,	// (0x00076911) fs_bigclock_status_pane_ParamLimits

0xde2e,	// (0x00076911) fs_bigclock_status_pane

0xde3b,	// (0x0007691e) main_fs_bigclock_clock_pane_ParamLimits

0xde3b,	// (0x0007691e) main_fs_bigclock_clock_pane

0xde51,	// (0x00076934) main_fs_bigclock_indi_pane_ParamLimits

0xde51,	// (0x00076934) main_fs_bigclock_indi_pane

0xde83,	// (0x00076966) main_fs_bigclock_swipe_pane_ParamLimits

0xde83,	// (0x00076966) main_fs_bigclock_swipe_pane

0x4026,	// (0x0006cb09) main_fs_clock_dumped_data

0x39d8,	// (0x0006c4bb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x39d8,	// (0x0006c4bb) list_single_fs_bigclock_indicator_pane_g1

0x3a02,	// (0x0006c4e5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a02,	// (0x0006c4e5) list_single_fs_bigclock_indicator_pane_g2

0x3a1c,	// (0x0006c4ff) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3a1c,	// (0x0006c4ff) list_single_fs_bigclock_indicator_pane_g3

0x3a36,	// (0x0006c519) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3a36,	// (0x0006c519) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc78,	// (0x0007875b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc78,	// (0x0007875b) list_single_fs_bigclock_indicator_pane_g

0x3a61,	// (0x0006c544) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3a61,	// (0x0006c544) list_single_fs_bigclock_indicator_pane_t1

0x3a89,	// (0x0006c56c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3a89,	// (0x0006c56c) list_single_fs_bigclock_indicator_pane_t2

0x3ab1,	// (0x0006c594) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3ab1,	// (0x0006c594) list_single_fs_bigclock_indicator_pane_t3

0x3ad9,	// (0x0006c5bc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3ad9,	// (0x0006c5bc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc83,	// (0x00078766) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc83,	// (0x00078766) list_single_fs_bigclock_indicator_pane_t

0x446e,	// (0x0006cf51) image3_infobar_fav_pane_ParamLimits

0x446e,	// (0x0006cf51) image3_infobar_fav_pane

0x447e,	// (0x0006cf61) image3_infobar_loc_pane_ParamLimits

0x447e,	// (0x0006cf61) image3_infobar_loc_pane

0x4494,	// (0x0006cf77) image3_infobar_time_pane_ParamLimits

0x4494,	// (0x0006cf77) image3_infobar_time_pane

0x1c2d,	// (0x0006a710) image3_infobar_time_pane_g1

0x44a4,	// (0x0006cf87) image3_infobar_time_pane_t1

0x1c2d,	// (0x0006a710) image3_infobar_loc_pane_g1

0x44b2,	// (0x0006cf95) image3_infobar_loc_pane_g2

0x0001,

0xfe4f,	// (0x00078932) image3_infobar_loc_pane_g

0x44ba,	// (0x0006cf9d) image3_infobar_loc_pane_t1

0x1c2d,	// (0x0006a710) image3_infobar_fav_pane_g1

0x44c8,	// (0x0006cfab) image3_infobar_fav_pane_g2

0x0001,

0xfe54,	// (0x00078937) image3_infobar_fav_pane_g

0x44d0,	// (0x0006cfb3) fs_bigclock_status_battery_pane

0x44d9,	// (0x0006cfbc) fs_bigclock_status_signal_pane

0x44e2,	// (0x0006cfc5) fs_bigclock_status_title_pane

0x44eb,	// (0x0006cfce) fs_bigclock_status_signal_pane_g1

0x44f4,	// (0x0006cfd7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe59,	// (0x0007893c) fs_bigclock_status_signal_pane_g

0x44fc,	// (0x0006cfdf) fs_bigclock_status_battery_pane_g1

0x4505,	// (0x0006cfe8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5e,	// (0x00078941) fs_bigclock_status_battery_pane_g

0x450d,	// (0x0006cff0) fs_bigclock_status_title_pane_t1

0x1c2d,	// (0x0006a710) main_fs_bigclock_clock_pane_g1

0x451b,	// (0x0006cffe) main_fs_bigclock_clock_pane_g2

0x451b,	// (0x0006cffe) main_fs_bigclock_clock_pane_g3

0x451b,	// (0x0006cffe) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe63,	// (0x00078946) main_fs_bigclock_clock_pane_g

0x4523,	// (0x0006d006) main_fs_bigclock_clock_pane_t1

0x4531,	// (0x0006d014) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6c,	// (0x0007894f) main_fs_bigclock_clock_pane_t

0xe5e3,	// (0x000770c6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe5e3,	// (0x000770c6) list_single_fs_bigclock_indicator_pane

0xe5f4,	// (0x000770d7) list_single_fs_bigclock_pane_ParamLimits

0xe5f4,	// (0x000770d7) list_single_fs_bigclock_pane

0x4549,	// (0x0006d02c) main_fs_bigclock_indicator_pane_t1

0x4558,	// (0x0006d03b) list_single_fs_bigclock_pane_g1

0x4560,	// (0x0006d043) list_single_fs_bigclock_pane_t1

0x1c2d,	// (0x0006a710) main_fs_bigclock_swipe_pane_g1

0x45a3,	// (0x0006d086) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7d,	// (0x00078960) main_fs_bigclock_swipe_pane_g

0x45ab,	// (0x0006d08e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x45ab,	// (0x0006d08e) main_fs_bigclock_swipe_pane_t1

0x9271,	// (0x00071d54) call_type_pane_ParamLimits

0x4026,	// (0x0006cb09) main_btmg_pane

0x709c,	// (0x0006fb7f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x709c,	// (0x0006fb7f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf0,	// (0x000788d3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf0,	// (0x000788d3) list_single_cale_mrui_row_pane_g

0x4365,	// (0x0006ce48) list_recal_vselct_arw_lo_pane

0x436d,	// (0x0006ce50) list_recal_vselct_arw_up_pane

0x310c,	// (0x0006bbef) list_recal_vselct_pane

0xe64a,	// (0x0007712d) btmg_button_pane

0xe656,	// (0x00077139) main_btmg_pane_g1

0x4026,	// (0x0006cb09) bg_button_pane_cp044

0x45c8,	// (0x0006d0ab) btmg_button_pane_t1

0x16f0,	// (0x0006a1d3) aid_listscroll_gen

0x4281,	// (0x0006cd64) main_cntbar_detail_pane

0x3e31,	// (0x0006c914) list_cmail_folder_pane

0x3e41,	// (0x0006c924) sp_fs_scroll_pane_cp03_ParamLimits

0x71bc,	// (0x0006fc9f) list_single_fs_dyc_pane_cp01_ParamLimits

0x71bc,	// (0x0006fc9f) list_single_fs_dyc_pane_cp01

0x45d6,	// (0x0006d0b9) aid_size_cmail_indent

0x71d3,	// (0x0006fcb6) list_single_dyc_row_pane_cp01

0xe67e,	// (0x00077161) cntbar_detail_list_pane_ParamLimits

0xe67e,	// (0x00077161) cntbar_detail_list_pane

0xe6be,	// (0x000771a1) main_cntbar_detail_cont_pane_ParamLimits

0xe6be,	// (0x000771a1) main_cntbar_detail_cont_pane

0x9265,	// (0x00071d48) scroll_pane_cp032_ParamLimits

0x9265,	// (0x00071d48) scroll_pane_cp032

0xe6ca,	// (0x000771ad) cntbar_detail_list_event_pane_ParamLimits

0xe6ca,	// (0x000771ad) cntbar_detail_list_event_pane

0xe68c,	// (0x0007716f) cntbar_detail_list_shct_pane

0x5279,	// (0x0006dd5c) aid_list_gen

0x45df,	// (0x0006d0c2) aid_scroll

0x45e8,	// (0x0006d0cb) aid_size_touch_scroll_bar

0xe6da,	// (0x000771bd) aid_list_double

0xe6e3,	// (0x000771c6) aid_list_single

0xe6ec,	// (0x000771cf) aid_list_single_lg

0x71dc,	// (0x0006fcbf) aid_list_z_g_a_sm

0xe6f5,	// (0x000771d8) aid_list_z_g_d

0x71e4,	// (0x0006fcc7) aid_txt_z_prm

0x71f2,	// (0x0006fcd5) aid_txt_z_prm_cp01

0x7200,	// (0x0006fce3) aid_txt_z_sec

0xe6fd,	// (0x000771e0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe6fd,	// (0x000771e0) main_cntbar_detail_cont_pane_g1

0xe70a,	// (0x000771ed) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe70a,	// (0x000771ed) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe82,	// (0x00078965) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe82,	// (0x00078965) main_cntbar_detail_cont_pane_g

0x45f1,	// (0x0006d0d4) main_cntbar_detail_cont_pane_t1

0x45ff,	// (0x0006d0e2) main_cntbar_detail_cont_pane_t2

0x460d,	// (0x0006d0f0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe87,	// (0x0007896a) main_cntbar_detail_cont_pane_t

0xe716,	// (0x000771f9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe716,	// (0x000771f9) cell_cntbar_detail_list_shct_pane

0x461b,	// (0x0006d0fe) cntbar_detail_list_shct_pane_g1

0x4624,	// (0x0006d107) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8e,	// (0x00078971) cntbar_detail_list_shct_pane_g

0xe72a,	// (0x0007720d) cntbar_detail_list_event_pane_g1_ParamLimits

0xe72a,	// (0x0007720d) cntbar_detail_list_event_pane_g1

0xe736,	// (0x00077219) cntbar_detail_list_event_pane_g2_ParamLimits

0xe736,	// (0x00077219) cntbar_detail_list_event_pane_g2

0x0005,

0xfe93,	// (0x00078976) cntbar_detail_list_event_pane_g_ParamLimits

0xfe93,	// (0x00078976) cntbar_detail_list_event_pane_g

0xe7a4,	// (0x00077287) cntbar_detail_list_event_pane_t1_ParamLimits

0xe7a4,	// (0x00077287) cntbar_detail_list_event_pane_t1

0xe7b9,	// (0x0007729c) cntbar_detail_list_event_pane_t2_ParamLimits

0xe7b9,	// (0x0007729c) cntbar_detail_list_event_pane_t2

0x0002,

0xfea0,	// (0x00078983) cntbar_detail_list_event_pane_t_ParamLimits

0xfea0,	// (0x00078983) cntbar_detail_list_event_pane_t

0x1c2d,	// (0x0006a710) cell_cntbar_detail_list_shct_pane_g1

0x9644,	// (0x00072127) navi_pane_mv_g3

0x4281,	// (0x0006cd64) main_cntbar_detail_pane_ParamLimits

0x4026,	// (0x0006cb09) main_notif_wgt_pane

0xbcbe,	// (0x000747a1) aid_tch_main_mp4_pane_g4

0xbefd,	// (0x000749e0) popup_slider_window_cp02

0x435b,	// (0x0006ce3e) list_recal_day_event_pane

0xe65e,	// (0x00077141) cntbar_detail_btn_pane_ParamLimits

0xe65e,	// (0x00077141) cntbar_detail_btn_pane

0xe66e,	// (0x00077151) cntbar_detail_btn_pane_cp01_ParamLimits

0xe66e,	// (0x00077151) cntbar_detail_btn_pane_cp01

0xe68c,	// (0x0007716f) cntbar_detail_list_shct_pane_ParamLimits

0xe698,	// (0x0007717b) cntbar_detail_pane_g1_ParamLimits

0xe698,	// (0x0007717b) cntbar_detail_pane_g1

0xe6a8,	// (0x0007718b) cntbar_detail_pane_t1_ParamLimits

0xe6a8,	// (0x0007718b) cntbar_detail_pane_t1

0xe742,	// (0x00077225) cntbar_detail_list_event_pane_g3_ParamLimits

0xe742,	// (0x00077225) cntbar_detail_list_event_pane_g3

0xe75a,	// (0x0007723d) cntbar_detail_list_event_pane_g4_ParamLimits

0xe75a,	// (0x0007723d) cntbar_detail_list_event_pane_g4

0xe772,	// (0x00077255) cntbar_detail_list_event_pane_g5_ParamLimits

0xe772,	// (0x00077255) cntbar_detail_list_event_pane_g5

0xe78a,	// (0x0007726d) cntbar_detail_list_event_pane_g6_ParamLimits

0xe78a,	// (0x0007726d) cntbar_detail_list_event_pane_g6

0xe7ce,	// (0x000772b1) cntbar_detail_list_event_pane_t3_ParamLimits

0xe7ce,	// (0x000772b1) cntbar_detail_list_event_pane_t3

0xe7e0,	// (0x000772c3) popup_notif_wgt_window_ParamLimits

0xe7e0,	// (0x000772c3) popup_notif_wgt_window

0xe7f0,	// (0x000772d3) popup_submenu_window_cp01_ParamLimits

0xe7f0,	// (0x000772d3) popup_submenu_window_cp01

0x028b,	// (0x00068d6e) bg_popup_window_pane_cp10

0x462d,	// (0x0006d110) listscroll_notif_wgt_pane

0x463f,	// (0x0006d122) list_notif_wgt_window

0x4648,	// (0x0006d12b) scroll_pane_cp033

0xe800,	// (0x000772e3) list_notif_wgt_row_pane_ParamLimits

0xe800,	// (0x000772e3) list_notif_wgt_row_pane

0x4651,	// (0x0006d134) aid_size_list_notif_wgt_del

0x465e,	// (0x0006d141) list_notif_wgt_row_pane_g1

0x466a,	// (0x0006d14d) list_notif_wgt_row_pane_g2

0x4676,	// (0x0006d159) list_notif_wgt_row_pane_g3

0x0002,

0xfea7,	// (0x0007898a) list_notif_wgt_row_pane_g

0x4683,	// (0x0006d166) list_notif_wgt_row_pane_t1

0x4698,	// (0x0006d17b) list_notif_wgt_row_pane_t2

0x46aa,	// (0x0006d18d) list_notif_wgt_row_pane_t3

0x0002,

0xfeae,	// (0x00078991) list_notif_wgt_row_pane_t

0x2c07,	// (0x0006b6ea) list_recal_day_event_pane_g1

0x46bc,	// (0x0006d19f) list_recal_day_event_pane_t1

0x4026,	// (0x0006cb09) bg_button_pane_cp045

0x46cb,	// (0x0006d1ae) cntbar_detail_btn_pane_t1

0x16f8,	// (0x0006a1db) main_callh_pane_ParamLimits

0x16f8,	// (0x0006a1db) main_callh_pane

0x4026,	// (0x0006cb09) main_coverflow0_pane

0x4026,	// (0x0006cb09) main_wgtman_pane

0xde9b,	// (0x0007697e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xde9b,	// (0x0007697e) main_fs_bigclock_unlock_btn_pane

0x3e0b,	// (0x0006c8ee) bg_button_pane_cp16

0x3e1b,	// (0x0006c8fe) cell_tport_appsw_pane_g3

0xe814,	// (0x000772f7) cf0_flow_pane_ParamLimits

0xe814,	// (0x000772f7) cf0_flow_pane

0x46d9,	// (0x0006d1bc) listscroll_cf0_pane

0x46e4,	// (0x0006d1c7) main_cf0_pane_g1

0xe823,	// (0x00077306) main_cf0_pane_t1_ParamLimits

0xe823,	// (0x00077306) main_cf0_pane_t1

0xe837,	// (0x0007731a) main_cf0_pane_t2_ParamLimits

0xe837,	// (0x0007731a) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x00078998) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x00078998) main_cf0_pane_t

0x46ee,	// (0x0006d1d1) scroll_pane_cp11

0xe84b,	// (0x0007732e) cf0_flow_pane_g1

0xe853,	// (0x00077336) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0007899d) cf0_flow_pane_g

0xe85b,	// (0x0007733e) cf0_flow_pane_t1

0x4026,	// (0x0006cb09) main_call6_pane

0x4026,	// (0x0006cb09) main_calllock_pane

0xe869,	// (0x0007734c) call6_btn_grp_pane_ParamLimits

0xe869,	// (0x0007734c) call6_btn_grp_pane

0xe876,	// (0x00077359) call6_pane_g1_ParamLimits

0xe876,	// (0x00077359) call6_pane_g1

0xe886,	// (0x00077369) popup_call6_1st_window_ParamLimits

0xe886,	// (0x00077369) popup_call6_1st_window

0xe894,	// (0x00077377) popup_call6_2nd_window_ParamLimits

0xe894,	// (0x00077377) popup_call6_2nd_window

0xe8a2,	// (0x00077385) cell_call6_btn_pane_ParamLimits

0xe8a2,	// (0x00077385) cell_call6_btn_pane

0x028b,	// (0x00068d6e) bg_popup_call2_in_pane_cp03

0x46f9,	// (0x0006d1dc) popup_call6_1st_window_g1

0x4701,	// (0x0006d1e4) popup_call6_1st_window_g2

0x4709,	// (0x0006d1ec) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000789a2) popup_call6_1st_window_g

0x4711,	// (0x0006d1f4) popup_call6_1st_window_t1

0x4720,	// (0x0006d203) popup_call6_1st_window_t2

0x4730,	// (0x0006d213) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000789a9) popup_call6_1st_window_t

0x028b,	// (0x00068d6e) bg_popup_call2_in_pane_cp04

0x46f9,	// (0x0006d1dc) popup_call6_2nd_window_g1

0x4701,	// (0x0006d1e4) popup_call6_2nd_window_g2

0x4709,	// (0x0006d1ec) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000789a2) popup_call6_2nd_window_g

0x4711,	// (0x0006d1f4) popup_call6_2nd_window_t1

0x4026,	// (0x0006cb09) bg_button_pane_cp15

0x4740,	// (0x0006d223) cell_call6_btn_pane_g1

0x4749,	// (0x0006d22c) cell_call6_btn_pane_t1

0xe8b1,	// (0x00077394) listscroll_wgtman_pane_ParamLimits

0xe8b1,	// (0x00077394) listscroll_wgtman_pane

0xe8cf,	// (0x000773b2) wgtman_btn_pane_ParamLimits

0xe8cf,	// (0x000773b2) wgtman_btn_pane

0x0151,	// (0x00068c34) aid_scroll_copy1

0x4758,	// (0x0006d23b) list_wgtman_pane

0xe904,	// (0x000773e7) wgtman_btn_pane_g1_ParamLimits

0xe904,	// (0x000773e7) wgtman_btn_pane_g1

0xe92c,	// (0x0007740f) wgtman_btn_pane_t1_ParamLimits

0xe92c,	// (0x0007740f) wgtman_btn_pane_t1

0x4762,	// (0x0006d245) wgtman_btn_pane_t2_ParamLimits

0x4762,	// (0x0006d245) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000789b0) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000789b0) wgtman_btn_pane_t

0xe963,	// (0x00077446) listrow_wgtman_pane_ParamLimits

0xe963,	// (0x00077446) listrow_wgtman_pane

0xe974,	// (0x00077457) listrow_wgtman_pane_g1

0xe981,	// (0x00077464) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000789b5) listrow_wgtman_pane_g

0x720e,	// (0x0006fcf1) listrow_wgtman_pane_t1

0x7226,	// (0x0006fd09) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000789ba) listrow_wgtman_pane_t

0x724c,	// (0x0006fd2f) wait_bar_pane_cp09

0x4779,	// (0x0006d25c) main_calllock_btn_pane

0x4783,	// (0x0006d266) main_calllock_pane_g1

0x4026,	// (0x0006cb09) bg_button_pane_cp17

0x478f,	// (0x0006d272) main_calllock_btn_pane_g1

0x4798,	// (0x0006d27b) main_calllock_btn_pane_t1

0x4026,	// (0x0006cb09) main_dialer3_pane

0x4026,	// (0x0006cb09) main_fmrd2_pane

0x1c2d,	// (0x0006a710) main_fs_bigclock_unlock_btn_pane_g1

0x47af,	// (0x0006d292) main_fs_bigclock_unlock_btn_pane_t1

0xe99f,	// (0x00077482) area_fmrd2_info_pane_ParamLimits

0xe99f,	// (0x00077482) area_fmrd2_info_pane

0xe9ab,	// (0x0007748e) area_fmrd2_visual_pane_ParamLimits

0xe9ab,	// (0x0007748e) area_fmrd2_visual_pane

0xe9b9,	// (0x0007749c) fmrd2_indi_pane_ParamLimits

0xe9b9,	// (0x0007749c) fmrd2_indi_pane

0xe9c6,	// (0x000774a9) area_fmrd2_visual_pane_g1

0xe9ce,	// (0x000774b1) area_fmrd2_visual_pane_t1

0xe9de,	// (0x000774c1) area_fmrd2_visual_pane_t2

0xe9ee,	// (0x000774d1) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000789c4) area_fmrd2_visual_pane_t

0xe9fe,	// (0x000774e1) area_fmrd2_info_pane_g1

0xea06,	// (0x000774e9) area_fmrd2_info_pane_t1

0xea16,	// (0x000774f9) area_fmrd2_info_pane_t2

0xea26,	// (0x00077509) area_fmrd2_info_pane_t3

0xea36,	// (0x00077519) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000789cb) area_fmrd2_info_pane_t

0xea46,	// (0x00077529) fmrd2_indi_pane_t1

0xea56,	// (0x00077539) fmrd2_indi_pane_t2

0xea66,	// (0x00077549) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000789d4) fmrd2_indi_pane_t

0x3a45,	// (0x0006c528) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3a45,	// (0x0006c528) list_single_fs_bigclock_indicator_pane_g5

0x3aee,	// (0x0006c5d1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3aee,	// (0x0006c5d1) list_single_fs_bigclock_indicator_pane_t5

0xe344,	// (0x00076e27) aid_cell_bcale_month_pane_ParamLimits

0xe344,	// (0x00076e27) aid_cell_bcale_month_pane

0xe354,	// (0x00076e37) bcale_month_pane_ParamLimits

0xe354,	// (0x00076e37) bcale_month_pane

0xe364,	// (0x00076e47) bcale_preview_pane_ParamLimits

0xe364,	// (0x00076e47) bcale_preview_pane

0x4560,	// (0x0006d043) list_single_fs_bigclock_pane_t1_ParamLimits

0x457f,	// (0x0006d062) list_single_fs_bigclock_pane_t2_ParamLimits

0x457f,	// (0x0006d062) list_single_fs_bigclock_pane_t2

0x0001,

0xfe78,	// (0x0007895b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0007895b) list_single_fs_bigclock_pane_t

0x47a7,	// (0x0006d28a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000789bf) main_fs_bigclock_unlock_btn_pane_g

0xea76,	// (0x00077559) aid_dia3_key_size_ParamLimits

0xea76,	// (0x00077559) aid_dia3_key_size

0xea82,	// (0x00077565) aid_dia3_listrow_size_ParamLimits

0xea82,	// (0x00077565) aid_dia3_listrow_size

0xea92,	// (0x00077575) dia3_keypad_fun_pane_ParamLimits

0xea92,	// (0x00077575) dia3_keypad_fun_pane

0xeaa2,	// (0x00077585) dia3_keypad_num_pane_ParamLimits

0xeaa2,	// (0x00077585) dia3_keypad_num_pane

0xeab2,	// (0x00077595) dia3_listscroll_pane_ParamLimits

0xeab2,	// (0x00077595) dia3_listscroll_pane

0xeac0,	// (0x000775a3) dia3_numentry_pane_ParamLimits

0xeac0,	// (0x000775a3) dia3_numentry_pane

0x47bd,	// (0x0006d2a0) dia3_list_pane

0x47c8,	// (0x0006d2ab) scroll_pane_cp12

0x4026,	// (0x0006cb09) bg_dia3_numentry_pane

0xeace,	// (0x000775b1) dia3_numentry_pane_t1

0xeadd,	// (0x000775c0) cell_dia3_key_num_pane

0xeae5,	// (0x000775c8) cell_dia3_key0_fun_pane_ParamLimits

0xeae5,	// (0x000775c8) cell_dia3_key0_fun_pane

0xeaf2,	// (0x000775d5) cell_dia3_key1_fun_pane_ParamLimits

0xeaf2,	// (0x000775d5) cell_dia3_key1_fun_pane

0xeaff,	// (0x000775e2) dia3_listrow_pane

0x3743,	// (0x0006c226) bg_dia3_numentry_pane_g1

0x4026,	// (0x0006cb09) bg_button_pane_cp21

0x47d3,	// (0x0006d2b6) cell_dia3_key_num_pane_t1

0x47e1,	// (0x0006d2c4) cell_dia3_key_num_pane_t2

0x47f0,	// (0x0006d2d3) cell_dia3_key_num_pane_t3

0x47ff,	// (0x0006d2e2) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000789db) cell_dia3_key_num_pane_t

0x4026,	// (0x0006cb09) bg_button_pane_cp19

0xeb0c,	// (0x000775ef) cell_dia3_key0_fun_pane_g1

0x4026,	// (0x0006cb09) bg_button_pane_cp20

0xeb14,	// (0x000775f7) cell_dia3_key1_fun_pane_g1

0xeb1c,	// (0x000775ff) area_left_week_number_pane

0xeb26,	// (0x00077609) area_top_day_name_pane

0xeb32,	// (0x00077615) frame_month_view_pane

0xeb3c,	// (0x0007761f) grid_month_view_pane

0x480e,	// (0x0006d2f1) cell_top_day_name_pane_ParamLimits

0x480e,	// (0x0006d2f1) cell_top_day_name_pane

0xeb46,	// (0x00077629) cell_area_left_week_number_pane_ParamLimits

0xeb46,	// (0x00077629) cell_area_left_week_number_pane

0xeb5a,	// (0x0007763d) cell_month_view_pane_ParamLimits

0xeb5a,	// (0x0007763d) cell_month_view_pane

0x482a,	// (0x0006d30d) frm_month_g1

0xeb79,	// (0x0007765c) frm_month_g2

0xeb83,	// (0x00077666) frm_month_g3

0xeb8d,	// (0x00077670) frm_month_g4

0xeb97,	// (0x0007767a) frm_month_g5

0xeba1,	// (0x00077684) frm_month_g6

0xebab,	// (0x0007768e) frm_month_g7

0x4833,	// (0x0006d316) frm_month_g8

0xf0cf,	// (0x00077bb2) frm_month_g9

0x2e7f,	// (0x0006b962) frm_month_g10

0x2e88,	// (0x0006b96b) frm_month_g11

0x2e91,	// (0x0006b974) frm_month_g12

0x2e9a,	// (0x0006b97d) frm_month_g13

0x2ea5,	// (0x0006b988) frm_month_g14

0x2eb0,	// (0x0006b993) frm_month_g15

0x2ebb,	// (0x0006b99e) frm_month_g16

0x000f,

0xff01,	// (0x000789e4) frm_month_g

0xebb5,	// (0x00077698) cell_top_day_name_pane_t1

0xebc4,	// (0x000776a7) cell_area_left_week_number_pane_g1

0xebcc,	// (0x000776af) cell_area_left_week_number_pane_t1

0x1c2d,	// (0x0006a710) cell_month_view_pane_g1

0xebdb,	// (0x000776be) cell_month_view_pane_t1

0x4026,	// (0x0006cb09) main_fps_pane

0x3cf8,	// (0x0006c7db) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3cf8,	// (0x0006c7db) cmail_ddmenu_btn02_pane_cp1

0x3d14,	// (0x0006c7f7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3d14,	// (0x0006c7f7) cmail_ddmenu_btn02_pane_cp2

0xe542,	// (0x00077025) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe542,	// (0x00077025) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2b,	// (0x0007890e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2b,	// (0x0007890e) cmail_ddmenu_btn02_pane_g

0xe560,	// (0x00077043) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe560,	// (0x00077043) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe30,	// (0x00078913) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe30,	// (0x00078913) cmail_ddmenu_btn02_pane_t

0xebea,	// (0x000776cd) fps_text_pane_ParamLimits

0xebea,	// (0x000776cd) fps_text_pane

0xebf7,	// (0x000776da) main_fps_pane_g1_ParamLimits

0xebf7,	// (0x000776da) main_fps_pane_g1

0xec03,	// (0x000776e6) wait_bar_pane_cp010_ParamLimits

0xec03,	// (0x000776e6) wait_bar_pane_cp010

0xec0f,	// (0x000776f2) fps_text_pane_t1_ParamLimits

0xec0f,	// (0x000776f2) fps_text_pane_t1

0xc323,	// (0x00074e06) cam4_image_uncrop_pane_g1

0xc32c,	// (0x00074e0f) cam4_image_uncrop_pane_g2

0xc335,	// (0x00074e18) cam4_image_uncrop_pane_g3

0xc33e,	// (0x00074e21) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x000783dc) cam4_image_uncrop_pane_g

0xeaff,	// (0x000775e2) dia3_listrow_pane_ParamLimits

0x4026,	// (0x0006cb09) main_phob2_pane

0xe1c7,	// (0x00076caa) cell_tport_appsw_pane_cp02_ParamLimits

0xe1c7,	// (0x00076caa) cell_tport_appsw_pane_cp02

0xe1d6,	// (0x00076cb9) cell_tport_appsw_pane_cp03_ParamLimits

0xe1d6,	// (0x00076cb9) cell_tport_appsw_pane_cp03

0x4026,	// (0x0006cb09) phob2_contact_card_pane

0x4026,	// (0x0006cb09) phob2_listscroll_pane

0x2ec6,	// (0x0006b9a9) phob2_list_pane

0x2ece,	// (0x0006b9b1) scroll_pane_cp034

0xec28,	// (0x0007770b) phob2_cc_data_pane_ParamLimits

0xec28,	// (0x0007770b) phob2_cc_data_pane

0xec44,	// (0x00077727) phob2_cc_listscroll_pane_ParamLimits

0xec44,	// (0x00077727) phob2_cc_listscroll_pane

0xec60,	// (0x00077743) list_double_large_graphic_phob2_pane_ParamLimits

0xec60,	// (0x00077743) list_double_large_graphic_phob2_pane

0xec78,	// (0x0007775b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xec78,	// (0x0007775b) list_double_large_graphic_phob2_pane_g1

0x725e,	// (0x0006fd41) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x725e,	// (0x0006fd41) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x00078a05) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x00078a05) list_double_large_graphic_phob2_pane_g

0x726a,	// (0x0006fd4d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x726a,	// (0x0006fd4d) list_double_large_graphic_phob2_pane_t1

0x727f,	// (0x0006fd62) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x727f,	// (0x0006fd62) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x00078a0a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x00078a0a) list_double_large_graphic_phob2_pane_t

0x4026,	// (0x0006cb09) list_highlight_pane_cp024

0x2ed6,	// (0x0006b9b9) phob2_cc_button_pane

0xec85,	// (0x00077768) phob2_cc_data_pane_g1_ParamLimits

0xec85,	// (0x00077768) phob2_cc_data_pane_g1

0xec91,	// (0x00077774) phob2_cc_data_pane_g2_ParamLimits

0xec91,	// (0x00077774) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x00078a0f) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x00078a0f) phob2_cc_data_pane_g

0xec9d,	// (0x00077780) phob2_cc_data_pane_t1_ParamLimits

0xec9d,	// (0x00077780) phob2_cc_data_pane_t1

0xecaf,	// (0x00077792) phob2_cc_data_pane_t2_ParamLimits

0xecaf,	// (0x00077792) phob2_cc_data_pane_t2

0xecc1,	// (0x000777a4) phob2_cc_data_pane_t3_ParamLimits

0xecc1,	// (0x000777a4) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x00078a14) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x00078a14) phob2_cc_data_pane_t

0x2ede,	// (0x0006b9c1) phob2_cc_list_pane_ParamLimits

0x2ede,	// (0x0006b9c1) phob2_cc_list_pane

0x2ca0,	// (0x0006b783) scroll_pane_cp035_ParamLimits

0x2ca0,	// (0x0006b783) scroll_pane_cp035

0x4281,	// (0x0006cd64) bg_button_pane_cp033

0x2eea,	// (0x0006b9cd) phob2_cc_button_pane_g1

0x2ef6,	// (0x0006b9d9) phob2_cc_button_pane_t1

0x2f0b,	// (0x0006b9ee) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x00078a1b) phob2_cc_button_pane_t

0xecd3,	// (0x000777b6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xecd3,	// (0x000777b6) list_double_large_graphic_phob2_cc_pane

0xecef,	// (0x000777d2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xecef,	// (0x000777d2) list_double_large_graphic_phob2_cc_pane_g1

0x7291,	// (0x0006fd74) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7291,	// (0x0006fd74) list_double_large_graphic_phob2_cc_pane_g2

0x72a0,	// (0x0006fd83) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x72a0,	// (0x0006fd83) list_double_large_graphic_phob2_cc_pane_g3

0x72af,	// (0x0006fd92) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x72af,	// (0x0006fd92) list_double_large_graphic_phob2_cc_pane_g4

0x72c0,	// (0x0006fda3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x72c0,	// (0x0006fda3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x00078a20) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x00078a20) list_double_large_graphic_phob2_cc_pane_g

0x72cf,	// (0x0006fdb2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x72cf,	// (0x0006fdb2) list_double_large_graphic_phob2_cc_pane_t1

0x72f8,	// (0x0006fddb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x72f8,	// (0x0006fddb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x00078a2b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x00078a2b) list_double_large_graphic_phob2_cc_pane_t

0x2f1d,	// (0x0006ba00) list_highlight_pane_cp025_ParamLimits

0x2f1d,	// (0x0006ba00) list_highlight_pane_cp025

0x4281,	// (0x0006cd64) bg_button_pane_cp033_ParamLimits

0x2eea,	// (0x0006b9cd) phob2_cc_button_pane_g1_ParamLimits

0x2ef6,	// (0x0006b9d9) phob2_cc_button_pane_t1_ParamLimits

0x2f0b,	// (0x0006b9ee) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x00078a1b) phob2_cc_button_pane_t_ParamLimits

0x75ea,	// (0x000700cd) popup_wgtman_window

0x2ae1,	// (0x0006b5c4) scroll_pane_cp038

0xe8ec,	// (0x000773cf) wgtman_btn_pane_cp_01_ParamLimits

0xe8ec,	// (0x000773cf) wgtman_btn_pane_cp_01

0x2f2b,	// (0x0006ba0e) wgtman_content_pane

0x2f34,	// (0x0006ba17) wgtman_heading_pane

0x4026,	// (0x0006cb09) bg_heading_pane_cp02

0x2f3d,	// (0x0006ba20) wgtman_heading_pane_g1

0x2f45,	// (0x0006ba28) wgtman_heading_pane_t1

0x2f53,	// (0x0006ba36) scroll_pane_cp036

0x2f5b,	// (0x0006ba3e) wgtman_list_pane

0x3bd9,	// (0x0006c6bc) wgtman_list_pane_t1_ParamLimits

0x3bd9,	// (0x0006c6bc) wgtman_list_pane_t1

0xc280,	// (0x00074d63) cam4_grid_pane

0x6609,	// (0x0006f0ec) bg_button_pane_cp015_ParamLimits

0xcf29,	// (0x00075a0c) bg_button_pane_cp016_ParamLimits

0xcf3c,	// (0x00075a1f) bg_button_pane_cp017_ParamLimits

0x664d,	// (0x0006f130) popup_vitu2_query_window_g3_ParamLimits

0x664d,	// (0x0006f130) popup_vitu2_query_window_g3

0x66c6,	// (0x0006f1a9) popup_vitu2_query_window_t6_ParamLimits

0x66c6,	// (0x0006f1a9) popup_vitu2_query_window_t6

0x66f1,	// (0x0006f1d4) popup_vitu2_query_window_t7_ParamLimits

0x66f1,	// (0x0006f1d4) popup_vitu2_query_window_t7

0x287f,	// (0x0006b362) cam4_grid_pane_g1

0x2888,	// (0x0006b36b) cam4_grid_pane_g2

0x2f63,	// (0x0006ba46) cam4_grid_pane_g3

0x2f6c,	// (0x0006ba4f) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x00078a30) cam4_grid_pane_g

0x830f,	// (0x00070df2) aid_placing_vt_slider_lsc_ParamLimits

0x8642,	// (0x00071125) vidtel_button_pane_ParamLimits

0x8642,	// (0x00071125) vidtel_button_pane

0x2f77,	// (0x0006ba5a) bg_button_pane_cp034

0xed00,	// (0x000777e3) vidtel_button_pane_g1

0x2f81,	// (0x0006ba64) vidtel_button_pane_t1

0x2be5,	// (0x0006b6c8) aid_size_vtel_slider_touch

0x2ca0,	// (0x0006b783) scroll_pane_cp039

0x3781,	// (0x0006c264) ncim_query_button_pane_cp01_ParamLimits

0x37a0,	// (0x0006c283) ncimui_query_pane_g1_ParamLimits

0x4281,	// (0x0006cd64) input_focus_pane_cp012_ParamLimits

0x37c5,	// (0x0006c2a8) ncim_query_entry_pane_t1_ParamLimits

0x2ca0,	// (0x0006b783) scroll_pane_cp039_ParamLimits

0x95b6,	// (0x00072099) navi_pane_bcale_mc_g1

0x95be,	// (0x000720a1) navi_pane_bcale_mc_t1

0x3d5f,	// (0x0006c842) main_sp_fs_email_pane_g1

0x3d67,	// (0x0006c84a) main_sp_fs_email_pane_g2

0x0001,

0xfce9,	// (0x000787cc) main_sp_fs_email_pane_g

0x4019,	// (0x0006cafc) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4019,	// (0x0006cafc) list_single_cale_mrui_row_pane_g3

0xe588,	// (0x0007706b) list_single_recal_day_pane_g5_event_pane

0x43ce,	// (0x0006ceb1) list_single_recal_day_pane_g7

0x2f8f,	// (0x0006ba72) list_recal_day_event_pane_cp01

0x2f98,	// (0x0006ba7b) list_recal_vselct_arw_lo_pane_cp01

0x2fa0,	// (0x0006ba83) list_recal_vselct_arw_up_pane_cp01

0x2fa8,	// (0x0006ba8b) list_recal_vselct_pane_cp01

0x2c07,	// (0x0006b6ea) list_recal_day_event_pane_cp01_g1

0x2fb2,	// (0x0006ba95) list_recal_day_event_pane_cp01_t1

0x43d6,	// (0x0006ceb9) list_single_recal_day_pane_t1_ParamLimits

0x43e8,	// (0x0006cecb) list_single_recal_day_pane_t2_ParamLimits

0xfe40,	// (0x00078923) list_single_recal_day_pane_t_ParamLimits

0x4d31,	// (0x0006d814) bg_notes_pane_ParamLimits

0x4d3f,	// (0x0006d822) list_notes_pane_ParamLimits

0x78fa,	// (0x000703dd) scroll_pane_cp06_ParamLimits

0x4d61,	// (0x0006d844) main_notes_pane_ParamLimits

0x4026,	// (0x0006cb09) main_welc_pane

0xed08,	// (0x000777eb) main_welc_body_pane_ParamLimits

0xed08,	// (0x000777eb) main_welc_body_pane

0xed23,	// (0x00077806) main_welc_opti_pane_ParamLimits

0xed23,	// (0x00077806) main_welc_opti_pane

0xed56,	// (0x00077839) main_welc_pane_t1_ParamLimits

0xed56,	// (0x00077839) main_welc_pane_t1

0xe375,	// (0x00076e58) main_welc_body_row_pane_ParamLimits

0xe375,	// (0x00076e58) main_welc_body_row_pane

0xed74,	// (0x00077857) main_welc_opti_row_pane_ParamLimits

0xed74,	// (0x00077857) main_welc_opti_row_pane

0x2fd7,	// (0x0006baba) main_welc_opti_row_pane_g1

0x2fdf,	// (0x0006bac2) main_welc_opti_row_pane_t1

0x2fee,	// (0x0006bad1) main_welc_body_row_pane_t1

0x4637,	// (0x0006d11a) popup_notif_wgt_heading_pane

0x4651,	// (0x0006d134) aid_size_list_notif_wgt_del_ParamLimits

0x465e,	// (0x0006d141) list_notif_wgt_row_pane_g1_ParamLimits

0x466a,	// (0x0006d14d) list_notif_wgt_row_pane_g2_ParamLimits

0x4676,	// (0x0006d159) list_notif_wgt_row_pane_g3_ParamLimits

0xfea7,	// (0x0007898a) list_notif_wgt_row_pane_g_ParamLimits

0x4683,	// (0x0006d166) list_notif_wgt_row_pane_t1_ParamLimits

0x4698,	// (0x0006d17b) list_notif_wgt_row_pane_t2_ParamLimits

0x46aa,	// (0x0006d18d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeae,	// (0x00078991) list_notif_wgt_row_pane_t_ParamLimits

0xe974,	// (0x00077457) listrow_wgtman_pane_g1_ParamLimits

0xe981,	// (0x00077464) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000789b5) listrow_wgtman_pane_g_ParamLimits

0x720e,	// (0x0006fcf1) listrow_wgtman_pane_t1_ParamLimits

0x7226,	// (0x0006fd09) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000789ba) listrow_wgtman_pane_t_ParamLimits

0x724c,	// (0x0006fd2f) wait_bar_pane_cp09_ParamLimits

0x4026,	// (0x0006cb09) bg_popup_heading_pane_cp02

0x2ffd,	// (0x0006bae0) popup_notif_wgt_heading_pane_g1

0x3005,	// (0x0006bae8) popup_notif_wgt_heading_pane_t1

0x4026,	// (0x0006cb09) main_vids_pane

0x4026,	// (0x0006cb09) vids_listscroll_pane

0xed85,	// (0x00077868) scroll_pane_cp040

0x4026,	// (0x0006cb09) vids_list_pane

0xed90,	// (0x00077873) vids_list_double_pane_ParamLimits

0xed90,	// (0x00077873) vids_list_double_pane

0xeda3,	// (0x00077886) vids_list_double_pane_g1

0xedac,	// (0x0007788f) vids_list_double_pane_t1

0xedbc,	// (0x0007789f) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x00078a3e) vids_list_double_pane_t

0x4281,	// (0x0006cd64) main_ncimui_pane_ParamLimits

0xda53,	// (0x00076536) main_ncimui_pane_g1_ParamLimits

0xda61,	// (0x00076544) main_ncimui_pane_g2_ParamLimits

0xda61,	// (0x00076544) main_ncimui_pane_g2

0x0001,

0xfbee,	// (0x000786d1) main_ncimui_pane_g_ParamLimits

0xfbee,	// (0x000786d1) main_ncimui_pane_g

0xed3e,	// (0x00077821) main_welc_pane_g1_ParamLimits

0xed3e,	// (0x00077821) main_welc_pane_g1

0xed4a,	// (0x0007782d) main_welc_pane_g2_ParamLimits

0xed4a,	// (0x0007782d) main_welc_pane_g2

0x0001,

0xff56,	// (0x00078a39) main_welc_pane_g_ParamLimits

0xff56,	// (0x00078a39) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
