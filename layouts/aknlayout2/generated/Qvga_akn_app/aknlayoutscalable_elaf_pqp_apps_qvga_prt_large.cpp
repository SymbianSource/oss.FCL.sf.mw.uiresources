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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0005ac88 };

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
0x6813,	// (0x0006149b) Screen

0x681d,	// (0x000614a5) application_window

0x6871,	// (0x000614f9) area_bottom_pane_ParamLimits

0x6871,	// (0x000614f9) area_bottom_pane

0x68ad,	// (0x00061535) area_top_pane_ParamLimits

0x68ad,	// (0x00061535) area_top_pane

0x6909,	// (0x00061591) call_video_uplink_pane_ParamLimits

0x6909,	// (0x00061591) call_video_uplink_pane

0x6944,	// (0x000615cc) main_pane_ParamLimits

0x6944,	// (0x000615cc) main_pane

0x1cd1,	// (0x0005c959) context_pane

0xa1bb,	// (0x00064e43) navi_pane

0xa1d5,	// (0x00064e5d) popup_cale_events_window_ParamLimits

0xa1d5,	// (0x00064e5d) popup_cale_events_window

0x1ce4,	// (0x0005c96c) popup_mup_playback_window

0xa1ec,	// (0x00064e74) signal_pane

0x74dc,	// (0x00062164) main_browser_pane

0xecf1,	// (0x00069979) main_burst_pane

0x6a73,	// (0x000616fb) main_calc_pane

0xecf1,	// (0x00069979) main_cale_day_pane

0x77fd,	// (0x00062485) main_cale_month_pane

0xecf1,	// (0x00069979) main_cale_week_pane

0xecf1,	// (0x00069979) main_call_pane

0x6f40,	// (0x00061bc8) main_call_poc_pane

0xecf1,	// (0x00069979) main_camera_pane

0xecf1,	// (0x00069979) main_chi_dic_pane

0xeaf0,	// (0x00069778) main_clock_pane

0x6f40,	// (0x00061bc8) main_fmradio_pane

0xecf1,	// (0x00069979) main_graph_messa_pane

0x6f40,	// (0x00061bc8) main_help_pane

0x74dc,	// (0x00062164) main_im_pane

0x719b,	// (0x00061e23) main_image_pane_ParamLimits

0x719b,	// (0x00061e23) main_image_pane

0x6f40,	// (0x00061bc8) main_location2_pane

0xecf1,	// (0x00069979) main_location_pane

0x6f40,	// (0x00061bc8) main_messa_pane

0x6f40,	// (0x00061bc8) main_mp2_pane

0xecf1,	// (0x00069979) main_mp_pane

0x6f40,	// (0x00061bc8) main_msg_pane

0x6f40,	// (0x00061bc8) main_mup_eq_pane

0x6f40,	// (0x00061bc8) main_mup_pane

0xecf1,	// (0x00069979) main_notes_pane

0x6f40,	// (0x00061bc8) main_pec_pane

0x6f40,	// (0x00061bc8) main_phob_pane

0x6f40,	// (0x00061bc8) main_pinb_pane

0x6f40,	// (0x00061bc8) main_postcard_pane

0x6f40,	// (0x00061bc8) main_qdial_pane

0xecf1,	// (0x00069979) main_skin_pane

0x6f40,	// (0x00061bc8) main_smil2_pane

0xecf1,	// (0x00069979) main_smil_pane

0xecf1,	// (0x00069979) main_video_pane

0xecf1,	// (0x00069979) main_video_tele_pane

0x719b,	// (0x00061e23) main_viewer_pane_ParamLimits

0x719b,	// (0x00061e23) main_viewer_pane

0xecf1,	// (0x00069979) main_vorec_pane

0xa0ed,	// (0x00064d75) popup_blid_sat_info_window_ParamLimits

0xa0ed,	// (0x00064d75) popup_blid_sat_info_window

0xa101,	// (0x00064d89) popup_dyc_status_message_window_ParamLimits

0xa101,	// (0x00064d89) popup_dyc_status_message_window

0xa10d,	// (0x00064d95) popup_grid_large_graphic_window_ParamLimits

0xa10d,	// (0x00064d95) popup_grid_large_graphic_window

0xa165,	// (0x00064ded) popup_loc_request_window_ParamLimits

0xa165,	// (0x00064ded) popup_loc_request_window

0xa195,	// (0x00064e1d) popup_wml_address_window_ParamLimits

0xa195,	// (0x00064e1d) popup_wml_address_window

0x9fd2,	// (0x00064c5a) call_muted_g1

0x9d0d,	// (0x00064995) popup_call_audio_conf_window_ParamLimits

0x9d0d,	// (0x00064995) popup_call_audio_conf_window

0x9fe2,	// (0x00064c6a) popup_call_audio_first_window_ParamLimits

0x9fe2,	// (0x00064c6a) popup_call_audio_first_window

0xa016,	// (0x00064c9e) popup_call_audio_in_window_ParamLimits

0xa016,	// (0x00064c9e) popup_call_audio_in_window

0xa032,	// (0x00064cba) popup_call_audio_out_window_ParamLimits

0xa032,	// (0x00064cba) popup_call_audio_out_window

0xa04e,	// (0x00064cd6) popup_call_audio_second_window_ParamLimits

0xa04e,	// (0x00064cd6) popup_call_audio_second_window

0xa076,	// (0x00064cfe) popup_call_audio_wait_window_ParamLimits

0xa076,	// (0x00064cfe) popup_call_audio_wait_window

0xa095,	// (0x00064d1d) popup_number_entry_window_ParamLimits

0xa095,	// (0x00064d1d) popup_number_entry_window

0x6ad6,	// (0x0006175e) bg_popup_call_pane_cp05_ParamLimits

0x6ad6,	// (0x0006175e) bg_popup_call_pane_cp05

0x6af6,	// (0x0006177e) popup_number_entry_window_t1

0x6b09,	// (0x00061791) popup_number_entry_window_t2

0x6b1b,	// (0x000617a3) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00069d74) popup_number_entry_window_t

0x6b62,	// (0x000617ea) text_title_cp2

0x6b75,	// (0x000617fd) bg_popup_call_pane_cp_ParamLimits

0x6b75,	// (0x000617fd) bg_popup_call_pane_cp

0x6b83,	// (0x0006180b) call_thumbnail_pane

0x6b8b,	// (0x00061813) popup_call_audio_in_window_g1_ParamLimits

0x6b8b,	// (0x00061813) popup_call_audio_in_window_g1

0x6b97,	// (0x0006181f) popup_call_audio_in_window_g2_ParamLimits

0x6b97,	// (0x0006181f) popup_call_audio_in_window_g2

0x6ba3,	// (0x0006182b) popup_call_audio_in_window_g3_ParamLimits

0x6ba3,	// (0x0006182b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00069d7d) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00069d7d) popup_call_audio_in_window_g

0x6baf,	// (0x00061837) popup_call_audio_in_window_t1_ParamLimits

0x6baf,	// (0x00061837) popup_call_audio_in_window_t1

0x6bca,	// (0x00061852) popup_call_audio_in_window_t2_ParamLimits

0x6bca,	// (0x00061852) popup_call_audio_in_window_t2

0x6be5,	// (0x0006186d) popup_call_audio_in_window_t3_ParamLimits

0x6be5,	// (0x0006186d) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00069d84) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00069d84) popup_call_audio_in_window_t

0x6b75,	// (0x000617fd) bg_popup_call_pane_cp01_ParamLimits

0x6b75,	// (0x000617fd) bg_popup_call_pane_cp01

0x6b83,	// (0x0006180b) call_thumbnail_pane_cp02

0x6bf8,	// (0x00061880) call_type_pane_cp022

0x6c00,	// (0x00061888) popup_call_audio_out_window_g1_ParamLimits

0x6c00,	// (0x00061888) popup_call_audio_out_window_g1

0x6c12,	// (0x0006189a) popup_call_audio_out_window_g2_ParamLimits

0x6c12,	// (0x0006189a) popup_call_audio_out_window_g2

0x6c1e,	// (0x000618a6) popup_call_audio_out_window_g3_ParamLimits

0x6c1e,	// (0x000618a6) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00069d8b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00069d8b) popup_call_audio_out_window_g

0x6c30,	// (0x000618b8) popup_call_audio_out_window_t1_ParamLimits

0x6c30,	// (0x000618b8) popup_call_audio_out_window_t1

0x6c48,	// (0x000618d0) popup_call_audio_out_window_t2_ParamLimits

0x6c48,	// (0x000618d0) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00069d92) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00069d92) popup_call_audio_out_window_t

0x6c5d,	// (0x000618e5) bg_popup_call_pane_ParamLimits

0x6c5d,	// (0x000618e5) bg_popup_call_pane

0x6ce1,	// (0x00061969) call_thumbnail_pane_cp_ParamLimits

0x6ce1,	// (0x00061969) call_thumbnail_pane_cp

0x6d05,	// (0x0006198d) call_type_pane_cp01_ParamLimits

0x6d05,	// (0x0006198d) call_type_pane_cp01

0x6d49,	// (0x000619d1) popup_call_audio_first_window_g1_ParamLimits

0x6d49,	// (0x000619d1) popup_call_audio_first_window_g1

0x6d95,	// (0x00061a1d) popup_call_audio_first_window_g2_ParamLimits

0x6d95,	// (0x00061a1d) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00069d97) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00069d97) popup_call_audio_first_window_g

0x6dd9,	// (0x00061a61) popup_call_audio_first_window_t1_ParamLimits

0x6dd9,	// (0x00061a61) popup_call_audio_first_window_t1

0x6e85,	// (0x00061b0d) popup_call_audio_first_window_t4_ParamLimits

0x6e85,	// (0x00061b0d) popup_call_audio_first_window_t4

0x6f11,	// (0x00061b99) popup_call_audio_first_window_t5_ParamLimits

0x6f11,	// (0x00061b99) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00069d9c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00069d9c) popup_call_audio_first_window_t

0x6f40,	// (0x00061bc8) bg_popup_call_pane_cp02

0x6f4a,	// (0x00061bd2) call_type_pane_cp023

0x6f52,	// (0x00061bda) popup_call_audio_wait_window_g1

0x6f5a,	// (0x00061be2) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00069da3) popup_call_audio_wait_window_g

0x6f62,	// (0x00061bea) popup_call_audio_wait_window_t3

0x6f70,	// (0x00061bf8) bg_popup_call_pane_cp03_ParamLimits

0x6f70,	// (0x00061bf8) bg_popup_call_pane_cp03

0x6fd0,	// (0x00061c58) call_thumbnail_pane_cp011_ParamLimits

0x6fd0,	// (0x00061c58) call_thumbnail_pane_cp011

0x6fdc,	// (0x00061c64) call_type_pane_cp034_ParamLimits

0x6fdc,	// (0x00061c64) call_type_pane_cp034

0x7018,	// (0x00061ca0) popup_call_audio_second_window_g1_ParamLimits

0x7018,	// (0x00061ca0) popup_call_audio_second_window_g1

0x7054,	// (0x00061cdc) popup_call_audio_second_window_g2_ParamLimits

0x7054,	// (0x00061cdc) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00069da8) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00069da8) popup_call_audio_second_window_g

0x7090,	// (0x00061d18) popup_call_audio_second_window_t1_ParamLimits

0x7090,	// (0x00061d18) popup_call_audio_second_window_t1

0x7111,	// (0x00061d99) popup_call_audio_second_window_t2_ParamLimits

0x7111,	// (0x00061d99) popup_call_audio_second_window_t2

0x7147,	// (0x00061dcf) popup_call_audio_second_window_t3_ParamLimits

0x7147,	// (0x00061dcf) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00069dad) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00069dad) popup_call_audio_second_window_t

0x6f40,	// (0x00061bc8) bg_popup_call_pane_cp04

0x717d,	// (0x00061e05) list_conf_pane

0x7185,	// (0x00061e0d) popup_call_audio_conf_window_t1

0x7193,	// (0x00061e1b) call_thumbnail_pane_g1

0x719b,	// (0x00061e23) bg_pinb_pane_ParamLimits

0x719b,	// (0x00061e23) bg_pinb_pane

0x71a9,	// (0x00061e31) find_pinb_pane

0x71b2,	// (0x00061e3a) listscroll_pinb_pane_ParamLimits

0x71b2,	// (0x00061e3a) listscroll_pinb_pane

0x71c1,	// (0x00061e49) pinb_bg_pane_g1

0x71cb,	// (0x00061e53) pinb_bg_pane_g2

0x71d5,	// (0x00061e5d) pinb_bg_pane_g3

0x71df,	// (0x00061e67) pinb_bg_pane_g4

0x71e9,	// (0x00061e71) pinb_bg_pane_g5

0x71f3,	// (0x00061e7b) pinb_bg_pane_g6

0x71fe,	// (0x00061e86) pinb_bg_pane_g7

0x7209,	// (0x00061e91) pinb_bg_pane_g8

0x7212,	// (0x00061e9a) pinb_bg_pane_g9

0x721a,	// (0x00061ea2) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00069db4) pinb_bg_pane_g

0x7237,	// (0x00061ebf) grid_pinb_pane

0x7240,	// (0x00061ec8) list_pinb_pane

0x724b,	// (0x00061ed3) scroll_pane_cp01_ParamLimits

0x724b,	// (0x00061ed3) scroll_pane_cp01

0x725b,	// (0x00061ee3) find_pinb_pane_g1_ParamLimits

0x725b,	// (0x00061ee3) find_pinb_pane_g1

0x7273,	// (0x00061efb) find_pinb_pane_t1

0x7285,	// (0x00061f0d) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00069dce) find_pinb_pane_t

0x729a,	// (0x00061f22) input_focus_pane_cp01_ParamLimits

0x729a,	// (0x00061f22) input_focus_pane_cp01

0x72a6,	// (0x00061f2e) cell_pinb_pane_ParamLimits

0x72a6,	// (0x00061f2e) cell_pinb_pane

0x72bf,	// (0x00061f47) cell_pinb_pane_g1_ParamLimits

0x72bf,	// (0x00061f47) cell_pinb_pane_g1

0x72d3,	// (0x00061f5b) cell_pinb_pane_g2_ParamLimits

0x72d3,	// (0x00061f5b) cell_pinb_pane_g2

0x72df,	// (0x00061f67) cell_pinb_pane_g3_ParamLimits

0x72df,	// (0x00061f67) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00069dd3) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00069dd3) cell_pinb_pane_g

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp01

0x72eb,	// (0x00061f73) list_pinb_item_pane_ParamLimits

0x72eb,	// (0x00061f73) list_pinb_item_pane

0x6f40,	// (0x00061bc8) list_highlight_pane_cp02

0x7300,	// (0x00061f88) list_pinb_item_pane_g1_ParamLimits

0x7300,	// (0x00061f88) list_pinb_item_pane_g1

0x730d,	// (0x00061f95) list_pinb_item_pane_g2_ParamLimits

0x730d,	// (0x00061f95) list_pinb_item_pane_g2

0x7319,	// (0x00061fa1) list_pinb_item_pane_g3_ParamLimits

0x7319,	// (0x00061fa1) list_pinb_item_pane_g3

0x7328,	// (0x00061fb0) list_pinb_item_pane_g4_ParamLimits

0x7328,	// (0x00061fb0) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00069dda) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00069dda) list_pinb_item_pane_g

0x7334,	// (0x00061fbc) list_pinb_item_pane_t1_ParamLimits

0x7334,	// (0x00061fbc) list_pinb_item_pane_t1

0x7365,	// (0x00061fed) calc_display_pane

0x737d,	// (0x00062005) calc_paper_pane

0x7399,	// (0x00062021) grid_calc_pane

0x6f40,	// (0x00061bc8) bg_list_pane_cp01

0x73b9,	// (0x00062041) clock_g1

0x73c1,	// (0x00062049) clock_g2

0x0001,

0xf15b,	// (0x00069de3) clock_g

0x73c9,	// (0x00062051) clock_t1_ParamLimits

0x73c9,	// (0x00062051) clock_t1

0x73de,	// (0x00062066) clock_t2_ParamLimits

0x73de,	// (0x00062066) clock_t2

0x73f0,	// (0x00062078) clock_t3_ParamLimits

0x73f0,	// (0x00062078) clock_t3

0x7402,	// (0x0006208a) clock_t4_ParamLimits

0x7402,	// (0x0006208a) clock_t4

0x7414,	// (0x0006209c) clock_t5_ParamLimits

0x7414,	// (0x0006209c) clock_t5

0x7429,	// (0x000620b1) clock_t6_ParamLimits

0x7429,	// (0x000620b1) clock_t6

0x743b,	// (0x000620c3) clock_t7_ParamLimits

0x743b,	// (0x000620c3) clock_t7

0x744d,	// (0x000620d5) clock_t8_ParamLimits

0x744d,	// (0x000620d5) clock_t8

0x745f,	// (0x000620e7) clock_t9_ParamLimits

0x745f,	// (0x000620e7) clock_t9

0x0008,

0xf160,	// (0x00069de8) clock_t_ParamLimits

0xf160,	// (0x00069de8) clock_t

0x7471,	// (0x000620f9) popup_clock_analogue_window_cp02

0x7471,	// (0x000620f9) popup_clock_digital_window_cp01

0x7479,	// (0x00062101) listscroll_help_pane

0x6f40,	// (0x00061bc8) phob_pre_status_pane

0x7483,	// (0x0006210b) grid_qdial_pane

0x6f40,	// (0x00061bc8) listscroll_mce_pane

0x748d,	// (0x00062115) bg_notes_pane

0x7497,	// (0x0006211f) list_notes_pane

0x74a1,	// (0x00062129) scroll_pane_cp06

0x74aa,	// (0x00062132) bg_calc_paper_pane

0x74c2,	// (0x0006214a) list_calc_pane

0x74dc,	// (0x00062164) bg_calc_display_pane

0x74e8,	// (0x00062170) calc_display_pane_t1

0x74fd,	// (0x00062185) calc_display_pane_t2

0x7512,	// (0x0006219a) calc_display_pane_t3

0x0002,

0xf173,	// (0x00069dfb) calc_display_pane_t

0x7524,	// (0x000621ac) cell_calc_pane_ParamLimits

0x7524,	// (0x000621ac) cell_calc_pane

0x754b,	// (0x000621d3) bg_calc_paper_pane_g1

0x7557,	// (0x000621df) bg_calc_paper_pane_g2

0x7563,	// (0x000621eb) bg_calc_paper_pane_g3

0x756f,	// (0x000621f7) bg_calc_paper_pane_g4

0x757b,	// (0x00062203) bg_calc_paper_pane_g5

0x7587,	// (0x0006220f) bg_calc_paper_pane_g6

0x7596,	// (0x0006221e) bg_calc_paper_pane_g7

0x75a5,	// (0x0006222d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00069e02) bg_calc_paper_pane_g

0x75b4,	// (0x0006223c) calc_bg_paper_pane_g9

0x75c3,	// (0x0006224b) list_calc_item_pane_ParamLimits

0x75c3,	// (0x0006224b) list_calc_item_pane

0x75dc,	// (0x00062264) list_calc_item_pane_g1

0x75e9,	// (0x00062271) list_calc_item_pane_t1_ParamLimits

0x75e9,	// (0x00062271) list_calc_item_pane_t1

0x75fb,	// (0x00062283) list_calc_item_pane_t2_ParamLimits

0x75fb,	// (0x00062283) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00069e13) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00069e13) list_calc_item_pane_t

0x7611,	// (0x00062299) cell_calc_pane_g1

0x7633,	// (0x000622bb) grid_highlight_pane_cp02

0x7655,	// (0x000622dd) bg_calc_display_pane_g1

0x765e,	// (0x000622e6) bg_calc_display_pane_g2

0x7668,	// (0x000622f0) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00069e1d) bg_calc_display_pane_g

0x7671,	// (0x000622f9) cell_qdial_pane_ParamLimits

0x7671,	// (0x000622f9) cell_qdial_pane

0x7683,	// (0x0006230b) cell_qdial_pane_g1_ParamLimits

0x7683,	// (0x0006230b) cell_qdial_pane_g1

0x7690,	// (0x00062318) cell_qdial_pane_g2_ParamLimits

0x7690,	// (0x00062318) cell_qdial_pane_g2

0x76a1,	// (0x00062329) cell_qdial_pane_g3_ParamLimits

0x76a1,	// (0x00062329) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00069e24) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00069e24) cell_qdial_pane_g

0x76ba,	// (0x00062342) cell_qdial_pane_t1_ParamLimits

0x76ba,	// (0x00062342) cell_qdial_pane_t1

0x76d2,	// (0x0006235a) cell_qdial_pane_t2_ParamLimits

0x76d2,	// (0x0006235a) cell_qdial_pane_t2

0x76e5,	// (0x0006236d) cell_qdial_pane_t3_ParamLimits

0x76e5,	// (0x0006236d) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00069e2d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00069e2d) cell_qdial_pane_t

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp04

0x76f8,	// (0x00062380) thumbnail_qdial_pane_ParamLimits

0x76f8,	// (0x00062380) thumbnail_qdial_pane

0x7754,	// (0x000623dc) list_help_pane

0x775e,	// (0x000623e6) scroll_pane_cp02

0x7767,	// (0x000623ef) help_list_pane_t1_ParamLimits

0x7767,	// (0x000623ef) help_list_pane_t1

0x7785,	// (0x0006240d) bg_notes_pane_g2

0x778d,	// (0x00062415) bg_notes_pane_g3

0x7795,	// (0x0006241d) notes_bg_pane_g1

0x779d,	// (0x00062425) notes_bg_pane_g4

0x77a5,	// (0x0006242d) notes_bg_pane_g5

0x77ad,	// (0x00062435) notes_bg_pane_g6

0x77b5,	// (0x0006243d) notes_bg_pane_g7

0x77bd,	// (0x00062445) notes_bg_pane_g8

0x77c5,	// (0x0006244d) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00069e4b) notes_bg_pane_g

0x77cd,	// (0x00062455) list_notes_text_pane_ParamLimits

0x77cd,	// (0x00062455) list_notes_text_pane

0x77e3,	// (0x0006246b) list_notes_text_pane_g1

0x57b4,	// (0x0006043c) list_notes_text_pane_t1

0x77fd,	// (0x00062485) listscroll_cale_week_pane

0x7827,	// (0x000624af) bg_cale_heading_pane

0x783b,	// (0x000624c3) bg_cale_pane_cp01

0x7854,	// (0x000624dc) cale_week_corner_pane

0x786a,	// (0x000624f2) cale_week_day_heading_pane

0x787e,	// (0x00062506) cale_week_scroll_pane_g1

0x788f,	// (0x00062517) cale_week_scroll_pane_g2

0x78a0,	// (0x00062528) cale_week_scroll_pane_g3

0x78b1,	// (0x00062539) cale_week_scroll_pane_g4

0x78c2,	// (0x0006254a) cale_week_scroll_pane_g5

0x78d3,	// (0x0006255b) cale_week_scroll_pane_g6

0x78e4,	// (0x0006256c) cale_week_scroll_pane_g7

0x78f5,	// (0x0006257d) cale_week_scroll_pane_g8

0x7906,	// (0x0006258e) cale_week_scroll_pane_g9

0x7917,	// (0x0006259f) cale_week_scroll_pane_g10

0x7928,	// (0x000625b0) cale_week_scroll_pane_g11

0x7939,	// (0x000625c1) cale_week_scroll_pane_g12

0x794a,	// (0x000625d2) cale_week_scroll_pane_g13

0x795b,	// (0x000625e3) cale_week_scroll_pane_g14

0x796c,	// (0x000625f4) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00069e5a) cale_week_scroll_pane_g

0x797d,	// (0x00062605) cale_week_time_pane

0x798e,	// (0x00062616) grid_cale_week_pane

0x79b3,	// (0x0006263b) scroll_pane_cp08

0x79cb,	// (0x00062653) cell_cale_week_pane_ParamLimits

0x79cb,	// (0x00062653) cell_cale_week_pane

0x7a07,	// (0x0006268f) cale_week_day_heading_pane_t1

0x7a20,	// (0x000626a8) cale_week_day_heading_pane_t2

0x7a39,	// (0x000626c1) cale_week_day_heading_pane_t3

0x7a52,	// (0x000626da) cale_week_day_heading_pane_t4

0x7a6b,	// (0x000626f3) cale_week_day_heading_pane_t5

0x7a84,	// (0x0006270c) cale_week_day_heading_pane_t6

0x7a9d,	// (0x00062725) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00069e79) cale_week_day_heading_pane_t

0x7ab6,	// (0x0006273e) bg_cale_side_pane

0x7ac4,	// (0x0006274c) cale_week_time_pane_t1

0x7af0,	// (0x00062778) cale_week_time_pane_t2

0x7b1c,	// (0x000627a4) cale_week_time_pane_t3

0x7b48,	// (0x000627d0) cale_week_time_pane_t4

0x7b74,	// (0x000627fc) cale_week_time_pane_t5

0x7ba0,	// (0x00062828) cale_week_time_pane_t6

0x7bcc,	// (0x00062854) cale_week_time_pane_t7

0x7bf8,	// (0x00062880) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00069e88) cale_week_time_pane_t

0x7c24,	// (0x000628ac) cell_cale_week_pane_g2

0x7c40,	// (0x000628c8) cell_cale_week_pane_g3_ParamLimits

0x7c40,	// (0x000628c8) cell_cale_week_pane_g3

0x7c58,	// (0x000628e0) grid_highlight_pane_cp07

0x7c60,	// (0x000628e8) listscroll_gms_pane

0x7c6a,	// (0x000628f2) grid_gms_pane

0x7c73,	// (0x000628fb) listscroll_gms_pane_g1

0x7c7b,	// (0x00062903) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00069e99) listscroll_gms_pane_g

0x7c83,	// (0x0006290b) scroll_pane_cp010

0x7c8c,	// (0x00062914) cell_gms_pane_ParamLimits

0x7c8c,	// (0x00062914) cell_gms_pane

0x7c9d,	// (0x00062925) cell_gms_pane_g1

0x7ca5,	// (0x0006292d) cell_gms_pane_g2

0x77e3,	// (0x0006246b) cell_gms_pane_g3

0x7cad,	// (0x00062935) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00069e9e) cell_gms_pane_g

0x7cb6,	// (0x0006293e) grid_highlight_pane_cp09

0x9f80,	// (0x00064c08) phob_pre_status_pane_g1

0x9f88,	// (0x00064c10) phob_pre_status_pane_g2

0x9f90,	// (0x00064c18) phob_pre_status_pane_g3

0x9f98,	// (0x00064c20) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x0006a2a0) phob_pre_status_pane_g

0x9fa8,	// (0x00064c30) phob_pre_status_pane_t1

0x9fb6,	// (0x00064c3e) phob_pre_status_pane_t2

0x9fc4,	// (0x00064c4c) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x0006a2ab) phob_pre_status_pane_t

0x6f40,	// (0x00061bc8) bg_list_pane_cp05

0x7cbe,	// (0x00062946) grid_vorec_pane

0x7cc6,	// (0x0006294e) vorec_t1

0x7cd4,	// (0x0006295c) vorec_t2

0x7ce2,	// (0x0006296a) vorec_t3

0x7cf0,	// (0x00062978) vorec_t4

0x7cfe,	// (0x00062986) vorec_t5

0x7d0c,	// (0x00062994) vorec_t6

0x0006,

0xf21f,	// (0x00069ea7) vorec_t

0x7d28,	// (0x000629b0) wait_bar_pane_cp01

0x7d30,	// (0x000629b8) cell_vorec_pane_ParamLimits

0x7d30,	// (0x000629b8) cell_vorec_pane

0x7d43,	// (0x000629cb) cell_vorec_pane_g1

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp05

0x7d59,	// (0x000629e1) cams_zoom_pane

0x7d65,	// (0x000629ed) image_vga_pane

0x7d72,	// (0x000629fa) main_camera_pane_g1

0x7d7e,	// (0x00062a06) main_camera_pane_g2

0x7d8a,	// (0x00062a12) main_camera_pane_g3

0x7d96,	// (0x00062a1e) main_camera_pane_g4

0x7da2,	// (0x00062a2a) main_camera_pane_g5

0x7dae,	// (0x00062a36) main_camera_pane_g6

0x7dba,	// (0x00062a42) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00069eb6) main_camera_pane_g

0x7dd2,	// (0x00062a5a) main_camera_pane_t1

0x7de4,	// (0x00062a6c) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00069ec7) main_camera_pane_t

0x7e08,	// (0x00062a90) cams_zoom_pane_cp_ParamLimits

0x7e08,	// (0x00062a90) cams_zoom_pane_cp

0x7e2c,	// (0x00062ab4) image_cif_pane_ParamLimits

0x7e2c,	// (0x00062ab4) image_cif_pane

0x7e46,	// (0x00062ace) image_subqcif_pane

0x7e4e,	// (0x00062ad6) main_video_pane_g1_ParamLimits

0x7e4e,	// (0x00062ad6) main_video_pane_g1

0x7e6e,	// (0x00062af6) main_video_pane_g2_ParamLimits

0x7e6e,	// (0x00062af6) main_video_pane_g2

0x7e9c,	// (0x00062b24) main_video_pane_g3_ParamLimits

0x7e9c,	// (0x00062b24) main_video_pane_g3

0x7ec5,	// (0x00062b4d) main_video_pane_g4_ParamLimits

0x7ec5,	// (0x00062b4d) main_video_pane_g4

0x7eee,	// (0x00062b76) main_video_pane_g5_ParamLimits

0x7eee,	// (0x00062b76) main_video_pane_g5

0x7f04,	// (0x00062b8c) main_video_pane_g6_ParamLimits

0x7f04,	// (0x00062b8c) main_video_pane_g6

0x0006,

0xf244,	// (0x00069ecc) main_video_pane_g_ParamLimits

0xf244,	// (0x00069ecc) main_video_pane_g

0x7f2a,	// (0x00062bb2) main_video_pane_t1_ParamLimits

0x7f2a,	// (0x00062bb2) main_video_pane_t1

0x7f68,	// (0x00062bf0) cams_zoom_pane_g1

0x7f71,	// (0x00062bf9) cams_zoom_pane_g2

0x7f7a,	// (0x00062c02) cams_zoom_pane_g3

0x7f83,	// (0x00062c0b) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00069edb) cams_zoom_pane_g

0x7f98,	// (0x00062c20) grid_cams_pane

0x7fa4,	// (0x00062c2c) linegrid_cams_pane

0x7fb0,	// (0x00062c38) cell_cams_pane_ParamLimits

0x7fb0,	// (0x00062c38) cell_cams_pane

0x7fc3,	// (0x00062c4b) cams_burst_image_pane

0x7fcb,	// (0x00062c53) cell_cams_pane_g1

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp03

0x7611,	// (0x00062299) mp_bg_pane_g1

0x6f40,	// (0x00061bc8) bg_list_pane_cp03

0x1bad,	// (0x0005c835) bg_mp_pane

0x1bb5,	// (0x0005c83d) grid_mp_pane

0x1bbd,	// (0x0005c845) media_player_g1

0x1bc5,	// (0x0005c84d) media_player_t1

0x1bd3,	// (0x0005c85b) media_player_t2

0x1be1,	// (0x0005c869) media_player_t3

0x1bef,	// (0x0005c877) media_player_t4

0x1bfd,	// (0x0005c885) media_player_t5

0x1c0b,	// (0x0005c893) media_player_t6

0x1c19,	// (0x0005c8a1) media_player_t7

0x0006,

0xf602,	// (0x0006a28a) media_player_t

0x1c27,	// (0x0005c8af) wait_bar_pane_cp02

0xf5e7,	// (0x0006a26f) main_usb_pane_t

0x9f77,	// (0x00064bff) cell_mp_pane

0x7611,	// (0x00062299) cell_mp_pane_g1

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp06

0x7fd3,	// (0x00062c5b) grid_skin_colour_pane

0x7fdb,	// (0x00062c63) list_highlight_pane_cp03

0x7fe3,	// (0x00062c6b) skin_g1

0x7feb,	// (0x00062c73) skin_t1

0x7ffa,	// (0x00062c82) skin_t2

0x0001,

0xf288,	// (0x00069f10) skin_t

0x8008,	// (0x00062c90) cell_skin_colour_pane_ParamLimits

0x8008,	// (0x00062c90) cell_skin_colour_pane

0x8020,	// (0x00062ca8) cell_skin_colour_pane_g1

0x8090,	// (0x00062d18) call_video_g1_ParamLimits

0x8090,	// (0x00062d18) call_video_g1

0x809c,	// (0x00062d24) call_video_g2_ParamLimits

0x809c,	// (0x00062d24) call_video_g2

0x0001,

0xf28d,	// (0x00069f15) call_video_g_ParamLimits

0xf28d,	// (0x00069f15) call_video_g

0x80ec,	// (0x00062d74) call_video_uplink_pane_cp1_ParamLimits

0x80ec,	// (0x00062d74) call_video_uplink_pane_cp1

0x8156,	// (0x00062dde) call_video_uplink_pane_cp2

0x81b0,	// (0x00062e38) video_down_crop_pane_ParamLimits

0x81b0,	// (0x00062e38) video_down_crop_pane

0x827a,	// (0x00062f02) video_down_pane_ParamLimits

0x827a,	// (0x00062f02) video_down_pane

0x832a,	// (0x00062fb2) video_down_subqcif_pane_ParamLimits

0x832a,	// (0x00062fb2) video_down_subqcif_pane

0x8342,	// (0x00062fca) video_down_subqcif_pane_cp_ParamLimits

0x8342,	// (0x00062fca) video_down_subqcif_pane_cp

0x8382,	// (0x0006300a) im_reading_pane_ParamLimits

0x8382,	// (0x0006300a) im_reading_pane

0x8394,	// (0x0006301c) im_writing_pane_ParamLimits

0x8394,	// (0x0006301c) im_writing_pane

0x83b2,	// (0x0006303a) im_reading_pane_t1

0x83ea,	// (0x00063072) list_im_pane

0x83fb,	// (0x00063083) scroll_pane_cp07

0x8414,	// (0x0006309c) im_writing_pane_t1_ParamLimits

0x8414,	// (0x0006309c) im_writing_pane_t1

0x8429,	// (0x000630b1) im_writing_pane_t2_ParamLimits

0x8429,	// (0x000630b1) im_writing_pane_t2

0x0001,

0xf297,	// (0x00069f1f) im_writing_pane_t_ParamLimits

0xf297,	// (0x00069f1f) im_writing_pane_t

0x6f40,	// (0x00061bc8) input_focus_pane_cp04

0x6f40,	// (0x00061bc8) input_focus_pane_cp05

0x8446,	// (0x000630ce) list_im_single_pane_ParamLimits

0x8446,	// (0x000630ce) list_im_single_pane

0x845e,	// (0x000630e6) list_single_im_pane_t1

0x9f3d,	// (0x00064bc5) blid_accuracy_pane

0x9f45,	// (0x00064bcd) blid_compass_pane

0x9f4d,	// (0x00064bd5) main_location_t1

0x9f5b,	// (0x00064be3) main_location_t2

0x9f69,	// (0x00064bf1) main_location_t3

0x0002,

0xf611,	// (0x0006a299) main_location_t

0x6f40,	// (0x00061bc8) aid_levels_location

0x7611,	// (0x00062299) blid_accuracy_pane_g1

0x7611,	// (0x00062299) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00069f81) blid_accuracy_pane_g

0x8498,	// (0x00063120) wml_content_pane

0x84d6,	// (0x0006315e) wml_button_pane_ParamLimits

0x84d6,	// (0x0006315e) wml_button_pane

0x84ea,	// (0x00063172) wml_list_single_large_pane_ParamLimits

0x84ea,	// (0x00063172) wml_list_single_large_pane

0x8501,	// (0x00063189) wml_list_single_medium_pane_ParamLimits

0x8501,	// (0x00063189) wml_list_single_medium_pane

0x8519,	// (0x000631a1) wml_list_single_small_pane_ParamLimits

0x8519,	// (0x000631a1) wml_list_single_small_pane

0x8534,	// (0x000631bc) wml_selection_box_pane_ParamLimits

0x8534,	// (0x000631bc) wml_selection_box_pane

0x8547,	// (0x000631cf) wml_list_single_pane_t1

0x8556,	// (0x000631de) wml_list_single_medium_pane_t1

0x8565,	// (0x000631ed) wml_list_single_large_pane_t1

0x8574,	// (0x000631fc) input_focus_pane_cp02_ParamLimits

0x8574,	// (0x000631fc) input_focus_pane_cp02

0x8587,	// (0x0006320f) wml_selection_box_pane_g1

0x8590,	// (0x00063218) wml_selection_box_pane_t1_ParamLimits

0x8590,	// (0x00063218) wml_selection_box_pane_t1

0x719b,	// (0x00061e23) bg_wml_button_pane_ParamLimits

0x719b,	// (0x00061e23) bg_wml_button_pane

0x85a8,	// (0x00063230) wml_button_pane_g1

0x85b0,	// (0x00063238) wml_button_pane_t1

0x85a8,	// (0x00063230) wml_button_bg_pane_g1

0x85c0,	// (0x00063248) wml_button_bg_pane_g2

0x85c8,	// (0x00063250) wml_button_bg_pane_g3

0x85d0,	// (0x00063258) wml_button_bg_pane_g4

0x85d8,	// (0x00063260) wml_button_bg_pane_g5

0x85e0,	// (0x00063268) wml_button_bg_pane_g6

0x85e8,	// (0x00063270) wml_button_bg_pane_g7

0x85f0,	// (0x00063278) wml_button_bg_pane_g8

0x85f8,	// (0x00063280) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00069f24) wml_button_bg_pane_g

0x8600,	// (0x00063288) bg_list_pane_cp02

0x8609,	// (0x00063291) mce_header_pane_ParamLimits

0x8609,	// (0x00063291) mce_header_pane

0x861d,	// (0x000632a5) mce_icon_pane

0x861d,	// (0x000632a5) mce_image_pane

0x8626,	// (0x000632ae) mce_text_pane_ParamLimits

0x8626,	// (0x000632ae) mce_text_pane

0x863a,	// (0x000632c2) scroll_pane_cp03

0x863a,	// (0x000632c2) scroll_pane_cp04

0x8642,	// (0x000632ca) scroll_pane_cp05_ParamLimits

0x8642,	// (0x000632ca) scroll_pane_cp05

0x864e,	// (0x000632d6) mce_header_field_pane_ParamLimits

0x864e,	// (0x000632d6) mce_header_field_pane

0x866e,	// (0x000632f6) mce_header_field_pane_2_ParamLimits

0x866e,	// (0x000632f6) mce_header_field_pane_2

0x8684,	// (0x0006330c) mce_header_field_pane_3

0x868c,	// (0x00063314) list_single_mce_message_pane_ParamLimits

0x868c,	// (0x00063314) list_single_mce_message_pane

0x86a3,	// (0x0006332b) list_single_mce_smart_pane_ParamLimits

0x86a3,	// (0x0006332b) list_single_mce_smart_pane

0x86c5,	// (0x0006334d) input_focus_pane_cp03

0x86ce,	// (0x00063356) list_header_data_pane

0x86d6,	// (0x0006335e) mce_header_field_pane_t1

0x86e4,	// (0x0006336c) list_single_mce_header_pane_ParamLimits

0x86e4,	// (0x0006336c) list_single_mce_header_pane

0x86fc,	// (0x00063384) list_single_mce_header_pane_t1

0x870b,	// (0x00063393) list_single_mce_message_pane_g1

0x8714,	// (0x0006339c) list_single_mce_message_pane_t1

0x8741,	// (0x000633c9) bg_cale_heading_pane_cp01_ParamLimits

0x8741,	// (0x000633c9) bg_cale_heading_pane_cp01

0x8764,	// (0x000633ec) bg_cale_pane_cp02_ParamLimits

0x8764,	// (0x000633ec) bg_cale_pane_cp02

0x8787,	// (0x0006340f) cale_month_corner_pane

0x879d,	// (0x00063425) cale_month_day_heading_pane_ParamLimits

0x879d,	// (0x00063425) cale_month_day_heading_pane

0x87c0,	// (0x00063448) cale_month_pane_g1_ParamLimits

0x87c0,	// (0x00063448) cale_month_pane_g1

0x87dc,	// (0x00063464) cale_month_pane_g2_ParamLimits

0x87dc,	// (0x00063464) cale_month_pane_g2

0x87f5,	// (0x0006347d) cale_month_pane_g3_ParamLimits

0x87f5,	// (0x0006347d) cale_month_pane_g3

0x8821,	// (0x000634a9) cale_month_pane_g4_ParamLimits

0x8821,	// (0x000634a9) cale_month_pane_g4

0x884d,	// (0x000634d5) cale_month_pane_g5_ParamLimits

0x884d,	// (0x000634d5) cale_month_pane_g5

0x8879,	// (0x00063501) cale_month_pane_g6_ParamLimits

0x8879,	// (0x00063501) cale_month_pane_g6

0x88a5,	// (0x0006352d) cale_month_pane_g7_ParamLimits

0x88a5,	// (0x0006352d) cale_month_pane_g7

0x88d1,	// (0x00063559) cale_month_pane_g8_ParamLimits

0x88d1,	// (0x00063559) cale_month_pane_g8

0x88fd,	// (0x00063585) cale_month_pane_g9_ParamLimits

0x88fd,	// (0x00063585) cale_month_pane_g9

0x8927,	// (0x000635af) cale_month_pane_g10_ParamLimits

0x8927,	// (0x000635af) cale_month_pane_g10

0x8951,	// (0x000635d9) cale_month_pane_g11_ParamLimits

0x8951,	// (0x000635d9) cale_month_pane_g11

0x897b,	// (0x00063603) cale_month_pane_g12_ParamLimits

0x897b,	// (0x00063603) cale_month_pane_g12

0x89a5,	// (0x0006362d) cale_month_pane_g13_ParamLimits

0x89a5,	// (0x0006362d) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00069f37) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00069f37) cale_month_pane_g

0x89e1,	// (0x00063669) cale_month_week_pane

0x89f2,	// (0x0006367a) grid_cale_month_pane_ParamLimits

0x89f2,	// (0x0006367a) grid_cale_month_pane

0x8a10,	// (0x00063698) cale_month_day_heading_pane_t1

0x8a6e,	// (0x000636f6) cale_month_day_heading_pane_t2

0x8ad3,	// (0x0006375b) cale_month_day_heading_pane_t3

0x8b38,	// (0x000637c0) cale_month_day_heading_pane_t4

0x8b9d,	// (0x00063825) cale_month_day_heading_pane_t5

0x8c02,	// (0x0006388a) cale_month_day_heading_pane_t6

0x8c67,	// (0x000638ef) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00069f52) cale_month_day_heading_pane_t

0x7ab6,	// (0x0006273e) bg_cale_side_pane_cp01

0x8ccc,	// (0x00063954) cale_month_week_pane_t1

0x8ce3,	// (0x0006396b) cale_month_week_pane_t2

0x8cfa,	// (0x00063982) cale_month_week_pane_t3

0x8d11,	// (0x00063999) cale_month_week_pane_t4

0x8d28,	// (0x000639b0) cale_month_week_pane_t5

0x8d3f,	// (0x000639c7) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00069f61) cale_month_week_pane_t

0x8d56,	// (0x000639de) cell_cale_month_pane_ParamLimits

0x8d56,	// (0x000639de) cell_cale_month_pane

0x8dfc,	// (0x00063a84) cell_cale_month_pane_g1

0x8e08,	// (0x00063a90) cell_cale_month_pane_t1_ParamLimits

0x8e08,	// (0x00063a90) cell_cale_month_pane_t1

0x7c58,	// (0x000628e0) grid_highlight_pane_cp08

0x7611,	// (0x00062299) main_smil_g1

0x8e24,	// (0x00063aac) smil_status_pane

0x8e2d,	// (0x00063ab5) smil_text_pane

0x1a8d,	// (0x0005c715) bg_popup_call3_rect_pane_g8

0x1a95,	// (0x0005c71d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006a21a) bg_popup_call3_rect_pane_g

0x1d5e,	// (0x0005c9e6) smil_status_volume_pane_g1

0x8e3f,	// (0x00063ac7) smil_status_pane_t1

0xa27e,	// (0x00064f06) volume_smil_pane

0x8e56,	// (0x00063ade) list_smil_text_pane

0x8e60,	// (0x00063ae8) scroll_pane_cp011

0x8e69,	// (0x00063af1) smil_text_list_pane_t1_ParamLimits

0x8e69,	// (0x00063af1) smil_text_list_pane_t1

0x8eae,	// (0x00063b36) aid_volume_smil_ParamLimits

0x8eae,	// (0x00063b36) aid_volume_smil

0x7611,	// (0x00062299) smil_volume_pane_g1

0x7611,	// (0x00062299) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00069f81) smil_volume_pane_g

0x74dc,	// (0x00062164) listscroll_cale_day_pane

0x8ed0,	// (0x00063b58) bg_cale_pane

0x8ee8,	// (0x00063b70) list_cale_pane

0x8ef9,	// (0x00063b81) scroll_pane_cp09

0x8f0a,	// (0x00063b92) cale_bg_pane_g1

0x8f12,	// (0x00063b9a) cale_bg_pane_g2

0x8f1a,	// (0x00063ba2) cale_bg_pane_g3

0x8f22,	// (0x00063baa) cale_bg_pane_g4

0x8f2a,	// (0x00063bb2) cale_bg_pane_g5

0x8f32,	// (0x00063bba) cale_bg_pane_g6

0x8f3a,	// (0x00063bc2) cale_bg_pane_g7

0x8f42,	// (0x00063bca) cale_bg_pane_g8

0x8f4a,	// (0x00063bd2) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00069f86) cale_bg_pane_g

0x8f52,	// (0x00063bda) list_cale_time_pane_ParamLimits

0x8f52,	// (0x00063bda) list_cale_time_pane

0x8f69,	// (0x00063bf1) list_cale_time_pane_g1_ParamLimits

0x8f69,	// (0x00063bf1) list_cale_time_pane_g1

0x8f75,	// (0x00063bfd) list_cale_time_pane_g2_ParamLimits

0x8f75,	// (0x00063bfd) list_cale_time_pane_g2

0x8f82,	// (0x00063c0a) list_cale_time_pane_g3_ParamLimits

0x8f82,	// (0x00063c0a) list_cale_time_pane_g3

0x8f8e,	// (0x00063c16) list_cale_time_pane_g4_ParamLimits

0x8f8e,	// (0x00063c16) list_cale_time_pane_g4

0x8f9a,	// (0x00063c22) list_cale_time_pane_g5_ParamLimits

0x8f9a,	// (0x00063c22) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00069f99) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00069f99) list_cale_time_pane_g

0x8fb3,	// (0x00063c3b) list_cale_time_pane_t1_ParamLimits

0x8fb3,	// (0x00063c3b) list_cale_time_pane_t1

0x8fdb,	// (0x00063c63) list_cale_time_pane_t2_ParamLimits

0x8fdb,	// (0x00063c63) list_cale_time_pane_t2

0x950f,	// (0x00064197) aid_blid_cardinal_pane

0x954d,	// (0x000641d5) compass_pane_t4

0x9003,	// (0x00063c8b) list_cale_time_pane_t4_ParamLimits

0x9003,	// (0x00063c8b) list_cale_time_pane_t4

0x955b,	// (0x000641e3) compass_pane_t5

0x9569,	// (0x000641f1) compass_pane_t6

0x9577,	// (0x000641ff) compass_pane_t7

0xebf4,	// (0x0006987c) navi_pane_cc_t1

0xed98,	// (0x00069a20) aid_phob_thumbnail_center_pane

0x9aea,	// (0x00064772) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00069fa6) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00069fa6) list_cale_time_pane_t

0x6b75,	// (0x000617fd) bg_popup_window_pane_cp02_ParamLimits

0x6b75,	// (0x000617fd) bg_popup_window_pane_cp02

0x902b,	// (0x00063cb3) heading_pane_cp01_ParamLimits

0x902b,	// (0x00063cb3) heading_pane_cp01

0x9037,	// (0x00063cbf) loc_req_pane_ParamLimits

0x9037,	// (0x00063cbf) loc_req_pane

0x9047,	// (0x00063ccf) loc_type_pane_ParamLimits

0x9047,	// (0x00063ccf) loc_type_pane

0x9059,	// (0x00063ce1) loc_type_pane_t1_ParamLimits

0x9059,	// (0x00063ce1) loc_type_pane_t1

0x906b,	// (0x00063cf3) loc_type_pane_t2_ParamLimits

0x906b,	// (0x00063cf3) loc_type_pane_t2

0x907d,	// (0x00063d05) loc_type_pane_t3_ParamLimits

0x907d,	// (0x00063d05) loc_type_pane_t3

0x0002,

0xf325,	// (0x00069fad) loc_type_pane_t_ParamLimits

0xf325,	// (0x00069fad) loc_type_pane_t

0x908f,	// (0x00063d17) list_loc_req_pane

0x9099,	// (0x00063d21) scroll_pane_cp012

0x90a2,	// (0x00063d2a) list_single_loc_request_popup_menu_pane_ParamLimits

0x90a2,	// (0x00063d2a) list_single_loc_request_popup_menu_pane

0x90b4,	// (0x00063d3c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x90b4,	// (0x00063d3c) list_single_loc_request_popup_menu_pane_g1

0x90c0,	// (0x00063d48) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x90c0,	// (0x00063d48) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00069fb4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00069fb4) list_single_loc_request_popup_menu_pane_g

0x90cc,	// (0x00063d54) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x90cc,	// (0x00063d54) list_single_loc_request_popup_menu_pane_t1

0x90e2,	// (0x00063d6a) bg_popup_window_pane_cp03_ParamLimits

0x90e2,	// (0x00063d6a) bg_popup_window_pane_cp03

0x90f0,	// (0x00063d78) heading_loc_req_pane_ParamLimits

0x90f0,	// (0x00063d78) heading_loc_req_pane

0x90fc,	// (0x00063d84) popup_dyc_status_message_window_g1_ParamLimits

0x90fc,	// (0x00063d84) popup_dyc_status_message_window_g1

0x9108,	// (0x00063d90) popup_dyc_status_message_window_t1_ParamLimits

0x9108,	// (0x00063d90) popup_dyc_status_message_window_t1

0x911a,	// (0x00063da2) popup_dyc_status_message_window_t2_ParamLimits

0x911a,	// (0x00063da2) popup_dyc_status_message_window_t2

0x912c,	// (0x00063db4) popup_dyc_status_message_window_t3_ParamLimits

0x912c,	// (0x00063db4) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00069fb9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00069fb9) popup_dyc_status_message_window_t

0x6f40,	// (0x00061bc8) bg_heading_pane_cp01

0x913e,	// (0x00063dc6) heading_loc_req_pane_g1

0x9146,	// (0x00063dce) heading_loc_req_pane_g2

0x914e,	// (0x00063dd6) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00069fc0) heading_loc_req_pane_g

0x9156,	// (0x00063dde) heading_loc_req_pane_t1

0x917f,	// (0x00063e07) bg_popup_sub_pane_cp01_ParamLimits

0x917f,	// (0x00063e07) bg_popup_sub_pane_cp01

0x918d,	// (0x00063e15) popup_cale_events_window_g1_ParamLimits

0x918d,	// (0x00063e15) popup_cale_events_window_g1

0x91ad,	// (0x00063e35) popup_cale_events_window_g2_ParamLimits

0x91ad,	// (0x00063e35) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00069ff4) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00069ff4) popup_cale_events_window_g

0x91cd,	// (0x00063e55) popup_cale_events_window_t1_ParamLimits

0x91cd,	// (0x00063e55) popup_cale_events_window_t1

0x91df,	// (0x00063e67) popup_cale_events_window_t2_ParamLimits

0x91df,	// (0x00063e67) popup_cale_events_window_t2

0x921d,	// (0x00063ea5) popup_cale_events_window_t3_ParamLimits

0x921d,	// (0x00063ea5) popup_cale_events_window_t3

0x9257,	// (0x00063edf) popup_cale_events_window_t4_ParamLimits

0x9257,	// (0x00063edf) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00069ff9) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00069ff9) popup_cale_events_window_t

0x928d,	// (0x00063f15) call_type_pane

0x9299,	// (0x00063f21) popup_call_status_window_g1

0x92a7,	// (0x00063f2f) popup_call_status_window_g2

0x92b3,	// (0x00063f3b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0006a002) popup_call_status_window_g

0x92bf,	// (0x00063f47) call_type_pane_g1

0x92c8,	// (0x00063f50) call_type_pane_g2

0x0001,

0xf381,	// (0x0006a009) call_type_pane_g

0x6f40,	// (0x00061bc8) bg_popup_sub_pane_cp02

0x92d1,	// (0x00063f59) listscroll_popup_wml_pane

0x92d9,	// (0x00063f61) list_wml_pane

0x92e3,	// (0x00063f6b) scroll_pane_cp013

0x92ec,	// (0x00063f74) list_single_graphic_popup_wml_pane_ParamLimits

0x92ec,	// (0x00063f74) list_single_graphic_popup_wml_pane

0x7611,	// (0x00062299) list_single_graphic_popup_wml_pane_g1

0x9300,	// (0x00063f88) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0006a00e) list_single_graphic_popup_wml_pane_g

0x9308,	// (0x00063f90) list_single_graphic_popup_wml_pane_t1

0x9316,	// (0x00063f9e) aid_call_pane

0x7193,	// (0x00061e1b) popup_clock_analogue_window_g1

0x7193,	// (0x00061e1b) popup_clock_analogue_window_g2

0x931e,	// (0x00063fa6) popup_clock_analogue_window_g3

0x931e,	// (0x00063fa6) popup_clock_analogue_window_g4

0x7611,	// (0x00062299) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0006a013) popup_clock_analogue_window_g

0x9326,	// (0x00063fae) popup_clock_analogue_window_t1

0x9334,	// (0x00063fbc) clock_digital_number_pane_ParamLimits

0x9334,	// (0x00063fbc) clock_digital_number_pane

0x9340,	// (0x00063fc8) clock_digital_number_pane_cp02_ParamLimits

0x9340,	// (0x00063fc8) clock_digital_number_pane_cp02

0x934c,	// (0x00063fd4) clock_digital_number_pane_cp03_ParamLimits

0x934c,	// (0x00063fd4) clock_digital_number_pane_cp03

0x9358,	// (0x00063fe0) clock_digital_number_pane_cp04_ParamLimits

0x9358,	// (0x00063fe0) clock_digital_number_pane_cp04

0x9364,	// (0x00063fec) clock_digital_separator_pane_ParamLimits

0x9364,	// (0x00063fec) clock_digital_separator_pane

0x9370,	// (0x00063ff8) popup_clock_digital_window_t1

0x7611,	// (0x00062299) clock_digital_number_pane_g1

0x7611,	// (0x00062299) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00069f81) clock_digital_number_pane_g

0x7611,	// (0x00062299) clock_digital_separator_pane_g1

0x7611,	// (0x00062299) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00069f81) clock_digital_separator_pane_g

0x6f40,	// (0x00061bc8) bg_popup_window_pane_cp04

0xea0b,	// (0x00069693) heading_pane_cp03

0xea13,	// (0x0006969b) listscroll_popup_gms_pane

0xea1b,	// (0x000696a3) grid_large_graphic_popup_pane

0xea25,	// (0x000696ad) listscroll_popup_gms_pane_g1

0xea2d,	// (0x000696b5) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0006a01e) listscroll_popup_gms_pane_g

0x84ce,	// (0x00063156) scroll_pane_cp014

0x938d,	// (0x00064015) cell_large_graphic_popup_pane_ParamLimits

0x938d,	// (0x00064015) cell_large_graphic_popup_pane

0x93a4,	// (0x0006402c) cell_large_graphic_popup_pane_g1_ParamLimits

0x93a4,	// (0x0006402c) cell_large_graphic_popup_pane_g1

0xea35,	// (0x000696bd) cell_large_graphic_popup_pane_g2_ParamLimits

0xea35,	// (0x000696bd) cell_large_graphic_popup_pane_g2

0xea41,	// (0x000696c9) cell_large_graphic_popup_pane_g3_ParamLimits

0xea41,	// (0x000696c9) cell_large_graphic_popup_pane_g3

0xea4e,	// (0x000696d6) cell_large_graphic_popup_pane_g4_ParamLimits

0xea4e,	// (0x000696d6) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0006a023) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0006a023) cell_large_graphic_popup_pane_g

0xea5e,	// (0x000696e6) grid_highlight_pane_cp010

0x7611,	// (0x00062299) bg_popup_call_pane_g1

0xea68,	// (0x000696f0) list_single_graphic_popup_conf_pane_ParamLimits

0xea68,	// (0x000696f0) list_single_graphic_popup_conf_pane

0xea7b,	// (0x00069703) list_highlight_pane_cp01

0xea84,	// (0x0006970c) list_single_graphic_popup_conf_pane_g1

0xea8c,	// (0x00069714) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0006a02c) list_single_graphic_popup_conf_pane_g

0xea94,	// (0x0006971c) list_single_graphic_popup_conf_pane_t1

0xeaa2,	// (0x0006972a) linegrid_cams_pane_g1

0x93b0,	// (0x00064038) linegrid_cams_pane_g2

0x77e3,	// (0x0006246b) linegrid_cams_pane_g3

0xeaab,	// (0x00069733) linegrid_cams_pane_g4

0x93b9,	// (0x00064041) linegrid_cams_pane_g5

0x93c2,	// (0x0006404a) linegrid_cams_pane_g6

0x7cad,	// (0x00062935) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0006a031) linegrid_cams_pane_g

0xeab4,	// (0x0006973c) popup_clock_analogue_window

0xeab4,	// (0x0006973c) popup_clock_digital_window

0x6f40,	// (0x00061bc8) popup_phob_thumbnail_window

0x7611,	// (0x00062299) call_video_uplink_pane_g1

0xeabd,	// (0x00069745) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0006a040) call_video_uplink_pane_g

0x7c58,	// (0x000628e0) video_uplink_pane

0xeac5,	// (0x0006974d) mce_image_pane_g1

0x93cb,	// (0x00064053) mce_image_pane_g2

0x93d3,	// (0x0006405b) mce_image_pane_g3

0x93db,	// (0x00064063) mce_image_pane_g4

0x93e3,	// (0x0006406b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0006a045) mce_image_pane_g

0xeacf,	// (0x00069757) control_top_pane_stacon_cp01_ParamLimits

0xeacf,	// (0x00069757) control_top_pane_stacon_cp01

0xeadf,	// (0x00069767) uni_indicator_pane_stacon_cp01_ParamLimits

0xeadf,	// (0x00069767) uni_indicator_pane_stacon_cp01

0xeaf0,	// (0x00069778) bg_popup_sub_pane_cp03

0xeafa,	// (0x00069782) chi_dic_find_pane

0x93eb,	// (0x00064073) listscroll_chi_dic_pane

0xeb02,	// (0x0006978a) main_pane_chidic_g1

0xeb0a,	// (0x00069792) chi_dic_find_pane_t1

0xeb18,	// (0x000697a0) find_chidic_pane

0xeb21,	// (0x000697a9) chi_dic_list_pane_ParamLimits

0xeb21,	// (0x000697a9) chi_dic_list_pane

0xeb32,	// (0x000697ba) scroll_pane_cp020

0xeb3a,	// (0x000697c2) find_chidic_pane_t1

0x6f40,	// (0x00061bc8) input_focus_pane_cp06

0x93fd,	// (0x00064085) list_chi_dic_pane_ParamLimits

0x93fd,	// (0x00064085) list_chi_dic_pane

0x9410,	// (0x00064098) list_chi_dic_pane_t1_ParamLimits

0x9410,	// (0x00064098) list_chi_dic_pane_t1

0x6f40,	// (0x00061bc8) list_highlight_pane_cp020

0xeb49,	// (0x000697d1) bg_cale_heading_pane_g1

0x9423,	// (0x000640ab) bg_cale_heading_pane_g2

0x942b,	// (0x000640b3) bg_cale_heading_pane_g3

0x9433,	// (0x000640bb) bg_cale_heading_pane_g4

0x943b,	// (0x000640c3) bg_cale_heading_pane_g5

0x9443,	// (0x000640cb) bg_cale_heading_pane_g6

0x944b,	// (0x000640d3) bg_cale_heading_pane_g7

0x9453,	// (0x000640db) bg_cale_heading_pane_g8

0x945b,	// (0x000640e3) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0006a050) bg_cale_heading_pane_g

0xeb49,	// (0x000697d1) bg_cale_side_pane_g1

0x9463,	// (0x000640eb) bg_cale_side_pane_g2

0x946b,	// (0x000640f3) bg_cale_side_pane_g3

0x9473,	// (0x000640fb) bg_cale_side_pane_g4

0x947b,	// (0x00064103) bg_cale_side_pane_g5

0x9483,	// (0x0006410b) bg_cale_side_pane_g6

0x948b,	// (0x00064113) bg_cale_side_pane_g7

0x9493,	// (0x0006411b) bg_cale_side_pane_g8

0x949b,	// (0x00064123) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0006a063) bg_cale_side_pane_g

0x94a3,	// (0x0006412b) popup_call_status_window_ParamLimits

0x94a3,	// (0x0006412b) popup_call_status_window

0xeb51,	// (0x000697d9) stacon_top_pane

0xeb59,	// (0x000697e1) status_pane_ParamLimits

0xeb59,	// (0x000697e1) status_pane

0xeb73,	// (0x000697fb) status_small_pane

0xeb7b,	// (0x00069803) control_pane

0x6f40,	// (0x00061bc8) stacon_bottom_pane

0xeb83,	// (0x0006980b) list_single_mce_smart_pane_t1_ParamLimits

0xeb83,	// (0x0006980b) list_single_mce_smart_pane_t1

0xeb96,	// (0x0006981e) list_single_mce_smart_pane_t2_ParamLimits

0xeb96,	// (0x0006981e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0006a076) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0006a076) list_single_mce_smart_pane_t

0x94b2,	// (0x0006413a) compass_pane

0x94bb,	// (0x00064143) main_location2_pane_t1

0x94d1,	// (0x00064159) main_location2_pane_t2

0x94e7,	// (0x0006416f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0006a07b) main_location2_pane_t

0xebbe,	// (0x00069846) compass_pane_g1_ParamLimits

0xebbe,	// (0x00069846) compass_pane_g1

0x952f,	// (0x000641b7) compass_pane_t1

0x953e,	// (0x000641c6) compass_pane_t2

0x0005,

0xf3fc,	// (0x0006a084) compass_pane_t

0x9585,	// (0x0006420d) text_secondary_cp61

0xebeb,	// (0x00069873) navi_pane_cams_g5

0xec2c,	// (0x000698b4) navi_pane_im_t1

0xec3a,	// (0x000698c2) navi_pane_mp_g1_ParamLimits

0xec3a,	// (0x000698c2) navi_pane_mp_g1

0xec4e,	// (0x000698d6) navi_pane_mp_g2_ParamLimits

0xec4e,	// (0x000698d6) navi_pane_mp_g2

0xec5a,	// (0x000698e2) navi_pane_mp_g3_ParamLimits

0xec5a,	// (0x000698e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0006a098) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0006a098) navi_pane_mp_g

0xec66,	// (0x000698ee) navi_pane_mp_t1

0xec74,	// (0x000698fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0006a09f) navi_pane_mp_t

0xece1,	// (0x00069969) navi_pane_vt_g1

0xec66,	// (0x000698ee) navi_pane_vt_t1

0xece9,	// (0x00069971) navi_slider_pane

0xecf1,	// (0x00069979) zooming_pane

0xecf9,	// (0x00069981) navi_slider_pane_g1

0x95fc,	// (0x00064284) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0006a0a6) navi_slider_pane_g

0xed1d,	// (0x000699a5) aid_levels_zoom

0xed25,	// (0x000699ad) zooming_pane_g1

0xed2d,	// (0x000699b5) zooming_pane_g2

0xed2d,	// (0x000699b5) zooming_pane_g3

0x0002,

0xf42d,	// (0x0006a0b5) zooming_pane_g

0xed35,	// (0x000699bd) level_10_zoom

0xed3e,	// (0x000699c6) level_11_zoom

0xed47,	// (0x000699cf) level_1_zoom

0xed50,	// (0x000699d8) level_2_zoom

0xed59,	// (0x000699e1) level_3_zoom

0xed62,	// (0x000699ea) level_4_zoom

0xed6b,	// (0x000699f3) level_5_zoom

0xed74,	// (0x000699fc) level_6_zoom

0xed7d,	// (0x00069a05) level_7_zoom

0xed86,	// (0x00069a0e) level_8_zoom

0xed8f,	// (0x00069a17) level_9_zoom

0xeda0,	// (0x00069a28) popup_phob_thumbnail_window_g1

0xeda8,	// (0x00069a30) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0006a0bc) popup_phob_thumbnail_window_g

0x1c2f,	// (0x0005c8b7) level_1_location

0x1c37,	// (0x0005c8bf) level_2_location

0x1c3f,	// (0x0005c8c7) level_3_location

0x1c47,	// (0x0005c8cf) level_4_location

0xecf1,	// (0x00069979) level_5_location

0x960e,	// (0x00064296) mce_icon_pane_g1

0x9616,	// (0x0006429e) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0006a0c1) mce_icon_pane_g

0x961e,	// (0x000642a6) main_mup_pane_g1_ParamLimits

0x961e,	// (0x000642a6) main_mup_pane_g1

0x9636,	// (0x000642be) main_mup_pane_g2_ParamLimits

0x9636,	// (0x000642be) main_mup_pane_g2

0x9652,	// (0x000642da) main_mup_pane_g3_ParamLimits

0x9652,	// (0x000642da) main_mup_pane_g3

0x966e,	// (0x000642f6) main_mup_pane_g4_ParamLimits

0x966e,	// (0x000642f6) main_mup_pane_g4

0x968a,	// (0x00064312) main_mup_pane_g5_ParamLimits

0x968a,	// (0x00064312) main_mup_pane_g5

0x96a7,	// (0x0006432f) main_mup_pane_g6_ParamLimits

0x96a7,	// (0x0006432f) main_mup_pane_g6

0x96c3,	// (0x0006434b) main_mup_pane_g7_ParamLimits

0x96c3,	// (0x0006434b) main_mup_pane_g7

0x96df,	// (0x00064367) main_mup_pane_g8_ParamLimits

0x96df,	// (0x00064367) main_mup_pane_g8

0x96fb,	// (0x00064383) main_mup_pane_g9_ParamLimits

0x96fb,	// (0x00064383) main_mup_pane_g9

0x9712,	// (0x0006439a) main_mup_pane_g10_ParamLimits

0x9712,	// (0x0006439a) main_mup_pane_g10

0x9729,	// (0x000643b1) main_mup_pane_g11_ParamLimits

0x9729,	// (0x000643b1) main_mup_pane_g11

0x973d,	// (0x000643c5) main_mup_pane_g12_ParamLimits

0x973d,	// (0x000643c5) main_mup_pane_g12

0x9749,	// (0x000643d1) main_mup_pane_g13_ParamLimits

0x9749,	// (0x000643d1) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006a0c6) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006a0c6) main_mup_pane_g

0x975d,	// (0x000643e5) main_mup_pane_t1_ParamLimits

0x975d,	// (0x000643e5) main_mup_pane_t1

0x977a,	// (0x00064402) main_mup_pane_t2_ParamLimits

0x977a,	// (0x00064402) main_mup_pane_t2

0x9794,	// (0x0006441c) main_mup_pane_t3_ParamLimits

0x9794,	// (0x0006441c) main_mup_pane_t3

0x97ae,	// (0x00064436) main_mup_pane_t4_ParamLimits

0x97ae,	// (0x00064436) main_mup_pane_t4

0x97c0,	// (0x00064448) main_mup_pane_t5_ParamLimits

0x97c0,	// (0x00064448) main_mup_pane_t5

0x97d2,	// (0x0006445a) main_mup_pane_t6_ParamLimits

0x97d2,	// (0x0006445a) main_mup_pane_t6

0x0005,

0xf459,	// (0x0006a0e1) main_mup_pane_t_ParamLimits

0xf459,	// (0x0006a0e1) main_mup_pane_t

0x97e8,	// (0x00064470) mup_progress_pane_ParamLimits

0x97e8,	// (0x00064470) mup_progress_pane

0x97f4,	// (0x0006447c) mup_visualizer_pane_ParamLimits

0x97f4,	// (0x0006447c) mup_visualizer_pane

0x9822,	// (0x000644aa) mup_volume_pane_ParamLimits

0x9822,	// (0x000644aa) mup_volume_pane

0x9299,	// (0x00063f21) mup_visualizer_pane_g1_ParamLimits

0x9299,	// (0x00063f21) mup_visualizer_pane_g1

0x9299,	// (0x00063f21) mup_visualizer_pane_g2_ParamLimits

0x9299,	// (0x00063f21) mup_visualizer_pane_g2

0xebbe,	// (0x00069846) mup_visualizer_pane_g3_ParamLimits

0xebbe,	// (0x00069846) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0006a0ee) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0006a0ee) mup_visualizer_pane_g

0x7611,	// (0x00062299) mup_volume_pane_g1

0xedb8,	// (0x00069a40) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0006a0f5) mup_volume_pane_g

0x7611,	// (0x00062299) mup_progress_pane_g1

0xedc1,	// (0x00069a49) mup_progress_pane_g2

0xedca,	// (0x00069a52) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006a0fa) mup_progress_pane_g

0x6f40,	// (0x00061bc8) bg_popup_window_pane_cp05

0xedd3,	// (0x00069a5b) heading_pane_cp02_ParamLimits

0xedd3,	// (0x00069a5b) heading_pane_cp02

0xeded,	// (0x00069a75) list_popup_blid_pane

0xedf5,	// (0x00069a7d) list_blid_sat_info_pane_ParamLimits

0xedf5,	// (0x00069a7d) list_blid_sat_info_pane

0xee08,	// (0x00069a90) list_blid_sat_info_pane_g1

0xee10,	// (0x00069a98) list_blid_sat_info_pane_t1

0x9915,	// (0x0006459d) mup_equalizer_pane_ParamLimits

0x9915,	// (0x0006459d) mup_equalizer_pane

0x992e,	// (0x000645b6) mup_equalizer_pane_cp1_ParamLimits

0x992e,	// (0x000645b6) mup_equalizer_pane_cp1

0x9947,	// (0x000645cf) mup_equalizer_pane_cp2_ParamLimits

0x9947,	// (0x000645cf) mup_equalizer_pane_cp2

0x9960,	// (0x000645e8) mup_equalizer_pane_cp3_ParamLimits

0x9960,	// (0x000645e8) mup_equalizer_pane_cp3

0x9979,	// (0x00064601) mup_equalizer_pane_cp4_ParamLimits

0x9979,	// (0x00064601) mup_equalizer_pane_cp4

0x9992,	// (0x0006461a) mup_equalizer_pane_cp5

0x99a4,	// (0x0006462c) mup_equalizer_pane_cp6

0x99b6,	// (0x0006463e) mup_equalizer_pane_cp7

0x1b0d,	// (0x0005c795) bg_popup_call_poc_act_pane_g9

0x1b15,	// (0x0005c79d) bg_popup_call_poc_act_pane_g10

0x1b1d,	// (0x0005c7a5) bg_popup_call_poc_act_pane_g11

0x000a,

0x719b,	// (0x00061e23) mup_scale_pane

0x7611,	// (0x00062299) mup_scale_pane_g1

0xee1e,	// (0x00069aa6) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006a116) mup_scale_pane_g

0xee42,	// (0x00069aca) msg_data_pane

0xee4a,	// (0x00069ad2) scroll_pane_cp017

0x59d0,	// (0x00060658) bg_list_pane_cp04_ParamLimits

0x59d0,	// (0x00060658) bg_list_pane_cp04

0xee52,	// (0x00069ada) msg_data_pane_g1

0x93cb,	// (0x00064053) msg_data_pane_g2

0x93d3,	// (0x0006405b) msg_data_pane_g3

0x99da,	// (0x00064662) msg_data_pane_g4

0x93e3,	// (0x0006406b) msg_data_pane_g5

0x960e,	// (0x00064296) msg_data_pane_g6

0x99e2,	// (0x0006466a) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0006a125) msg_data_pane_g

0x59f0,	// (0x00060678) msg_text_pane_ParamLimits

0x59f0,	// (0x00060678) msg_text_pane

0x99ea,	// (0x00064672) qrid_highlight_pane_cp011_ParamLimits

0x99ea,	// (0x00064672) qrid_highlight_pane_cp011

0x6f40,	// (0x00061bc8) msg_body_pane

0x6f40,	// (0x00061bc8) msg_header_pane

0xee63,	// (0x00069aeb) input_focus_pane_cp07

0x5a22,	// (0x000606aa) msg_header_pane_t1_ParamLimits

0x5a22,	// (0x000606aa) msg_header_pane_t1

0x5a34,	// (0x000606bc) msg_header_pane_t2_ParamLimits

0x5a34,	// (0x000606bc) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006a139) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006a139) msg_header_pane_t

0xee78,	// (0x00069b00) msg_body_pane_g1

0x5a46,	// (0x000606ce) msg_body_pane_t1_ParamLimits

0x5a46,	// (0x000606ce) msg_body_pane_t1

0x5a71,	// (0x000606f9) msg_body_pane_t2_ParamLimits

0x5a71,	// (0x000606f9) msg_body_pane_t2

0x5a83,	// (0x0006070b) msg_body_pane_t3_ParamLimits

0x5a83,	// (0x0006070b) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0006a13e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0006a13e) msg_body_pane_t

0x9a4e,	// (0x000646d6) main_viewer_pane_g1_ParamLimits

0x9a4e,	// (0x000646d6) main_viewer_pane_g1

0x9a5a,	// (0x000646e2) main_viewer_pane_g2_ParamLimits

0x9a5a,	// (0x000646e2) main_viewer_pane_g2

0x9a66,	// (0x000646ee) main_viewer_pane_g3_ParamLimits

0x9a66,	// (0x000646ee) main_viewer_pane_g3

0x9a75,	// (0x000646fd) main_viewer_pane_g4_ParamLimits

0x9a75,	// (0x000646fd) main_viewer_pane_g4

0x9a84,	// (0x0006470c) main_viewer_pane_g5_ParamLimits

0x9a84,	// (0x0006470c) main_viewer_pane_g5

0x9a84,	// (0x0006470c) main_viewer_pane_g7_ParamLimits

0x9a84,	// (0x0006470c) main_viewer_pane_g7

0x9a96,	// (0x0006471e) main_viewer_pane_g8_ParamLimits

0x9a96,	// (0x0006471e) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0006a14e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0006a14e) main_viewer_pane_g

0xee80,	// (0x00069b08) viewer_content_pane_ParamLimits

0xee80,	// (0x00069b08) viewer_content_pane

0x9ac6,	// (0x0006474e) main_postcard_pane_g1_ParamLimits

0x9ac6,	// (0x0006474e) main_postcard_pane_g1

0x9ad2,	// (0x0006475a) main_postcard_pane_g2_ParamLimits

0x9ad2,	// (0x0006475a) main_postcard_pane_g2

0x9ade,	// (0x00064766) main_postcard_pane_g3_ParamLimits

0x9ade,	// (0x00064766) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0006a15f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0006a15f) main_postcard_pane_g

0x9aea,	// (0x00064772) main_postcard_pane_g4

0x1d4b,	// (0x0005c9d3) smil_status_volume_pane_g2

0x9b0e,	// (0x00064796) postcard_pane_ParamLimits

0x9b0e,	// (0x00064796) postcard_pane

0x9299,	// (0x00063f21) postcard_pane_g1_ParamLimits

0x9299,	// (0x00063f21) postcard_pane_g1

0x9b3e,	// (0x000647c6) postcard_pane_g2_ParamLimits

0x9b3e,	// (0x000647c6) postcard_pane_g2

0x9b4a,	// (0x000647d2) postcard_pane_g3_ParamLimits

0x9b4a,	// (0x000647d2) postcard_pane_g3

0xee8e,	// (0x00069b16) postcard_pane_g4_ParamLimits

0xee8e,	// (0x00069b16) postcard_pane_g4

0x9b56,	// (0x000647de) postcard_pane_g5_ParamLimits

0x9b56,	// (0x000647de) postcard_pane_g5

0x9b62,	// (0x000647ea) postcard_pane_g6_ParamLimits

0x9b62,	// (0x000647ea) postcard_pane_g6

0xee9c,	// (0x00069b24) postcard_pane_g7_ParamLimits

0xee9c,	// (0x00069b24) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0006a16c) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0006a16c) postcard_pane_g

0x9b6e,	// (0x000647f6) main_mp2_pane_g1_ParamLimits

0x9b6e,	// (0x000647f6) main_mp2_pane_g1

0x9b7a,	// (0x00064802) main_mp2_pane_g2_ParamLimits

0x9b7a,	// (0x00064802) main_mp2_pane_g2

0x9b86,	// (0x0006480e) main_mp2_pane_g3_ParamLimits

0x9b86,	// (0x0006480e) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0006a17b) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0006a17b) main_mp2_pane_g

0x9b92,	// (0x0006481a) main_mp2_pane_t1_ParamLimits

0x9b92,	// (0x0006481a) main_mp2_pane_t1

0x9ba7,	// (0x0006482f) main_mp2_pane_t2_ParamLimits

0x9ba7,	// (0x0006482f) main_mp2_pane_t2

0x9bb9,	// (0x00064841) main_mp2_pane_t3_ParamLimits

0x9bb9,	// (0x00064841) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0006a182) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0006a182) main_mp2_pane_t

0xeeaa,	// (0x00069b32) pec_content_pane_ParamLimits

0xeeaa,	// (0x00069b32) pec_content_pane

0x84ce,	// (0x00063156) scroll_pane_cp015

0xeebc,	// (0x00069b44) pec_attribute_pane_ParamLimits

0xeebc,	// (0x00069b44) pec_attribute_pane

0x9bcb,	// (0x00064853) pec_content_pane_g1_ParamLimits

0x9bcb,	// (0x00064853) pec_content_pane_g1

0xeecc,	// (0x00069b54) pec_content_pane_t1_ParamLimits

0xeecc,	// (0x00069b54) pec_content_pane_t1

0xeede,	// (0x00069b66) pec_content_pane_t2_ParamLimits

0xeede,	// (0x00069b66) pec_content_pane_t2

0x0001,

0xf501,	// (0x0006a189) pec_content_pane_t_ParamLimits

0xf501,	// (0x0006a189) pec_content_pane_t

0x9bd7,	// (0x0006485f) list_single_graphic_pane_cp01_ParamLimits

0x9bd7,	// (0x0006485f) list_single_graphic_pane_cp01

0x719b,	// (0x00061e23) bg_popup_sub_pane_cp04

0xeef0,	// (0x00069b78) popup_mup_playback_window_g1

0xeefc,	// (0x00069b84) popup_mup_playback_window_t1

0xef11,	// (0x00069b99) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0006a18e) popup_mup_playback_window_t

0xef48,	// (0x00069bd0) main_image_pane_g1_ParamLimits

0xef48,	// (0x00069bd0) main_image_pane_g1

0xef8b,	// (0x00069c13) scroll_pane_cp018_ParamLimits

0xef8b,	// (0x00069c13) scroll_pane_cp018

0xefa3,	// (0x00069c2b) scroll_pane_cp016_ParamLimits

0xefa3,	// (0x00069c2b) scroll_pane_cp016

0x9c5c,	// (0x000648e4) smil2_image_pane_ParamLimits

0x9c5c,	// (0x000648e4) smil2_image_pane

0x9c84,	// (0x0006490c) smil2_root_pane_ParamLimits

0x9c84,	// (0x0006490c) smil2_root_pane

0x9cb0,	// (0x00064938) smil2_text_pane_ParamLimits

0x9cb0,	// (0x00064938) smil2_text_pane

0x6f40,	// (0x00061bc8) bg_list_pane_cp06

0xefd7,	// (0x00069c5f) grid_radio_pane

0x6f40,	// (0x00061bc8) bg_popup_window_pane_cp06

0xefdf,	// (0x00069c67) main_fmradio_pane_t1

0xea0b,	// (0x00069693) heading_pane_cp04

0xefed,	// (0x00069c75) main_fmradio_pane_t2

0x1b65,	// (0x0005c7ed) popup_cale_lunar_info_window_g1

0xeffb,	// (0x00069c83) main_fmradio_pane_t3

0x1b6d,	// (0x0005c7f5) popup_cale_lunar_info_window_g2

0xf009,	// (0x00069c91) main_fmradio_pane_t4

0x0001,

0xf017,	// (0x00069c9f) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x0006a27c) popup_cale_lunar_info_window_g

0xf51b,	// (0x0006a1a3) main_fmradio_pane_t

0xf025,	// (0x00069cad) wait_bar_pane_cp03

0x7d30,	// (0x000629b8) cell_fmradio_pane_ParamLimits

0x7d30,	// (0x000629b8) cell_fmradio_pane

0xee9c,	// (0x00069b24) cell_fmradio_pane_g1_ParamLimits

0xee9c,	// (0x00069b24) cell_fmradio_pane_g1

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp011

0xf02d,	// (0x00069cb5) poc_content_pane_ParamLimits

0xf02d,	// (0x00069cb5) poc_content_pane

0xf040,	// (0x00069cc8) scroll_pane_cp019

0x9ce4,	// (0x0006496c) popup_call_poc_act_window_ParamLimits

0x9ce4,	// (0x0006496c) popup_call_poc_act_window

0x9cf1,	// (0x00064979) popup_call_poc_inact_window_ParamLimits

0x9cf1,	// (0x00064979) popup_call_poc_inact_window

0xf5b8,	// (0x0006a240) bg_popup_call_poc_act_pane_g

0x1b25,	// (0x0005c7ad) bg_popup_call_poc_inact_pane_g1

0x1b2d,	// (0x0005c7b5) bg_popup_call_poc_inact_pane_g2

0xf048,	// (0x00069cd0) popup_call_poc_act_window_g2

0x1b35,	// (0x0005c7bd) bg_popup_call_poc_inact_pane_g3

0x1ab5,	// (0x0005c73d) bg_popup_call_poc_inact_pane_g4

0x1b3d,	// (0x0005c7c5) bg_popup_call_poc_inact_pane_g5

0xf050,	// (0x00069cd8) popup_call_poc_act_window_t1_ParamLimits

0xf050,	// (0x00069cd8) popup_call_poc_act_window_t1

0x0bff,	// (0x0005b887) popup_call_poc_act_window_t2_ParamLimits

0x0bff,	// (0x0005b887) popup_call_poc_act_window_t2

0x0c27,	// (0x0005b8af) popup_call_poc_act_window_t3_ParamLimits

0x0c27,	// (0x0005b8af) popup_call_poc_act_window_t3

0x0c4f,	// (0x0005b8d7) popup_call_poc_act_window_t4_ParamLimits

0x0c4f,	// (0x0005b8d7) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006a1ae) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006a1ae) popup_call_poc_act_window_t

0x1b45,	// (0x0005c7cd) bg_popup_call_poc_inact_pane_g6

0x1b4d,	// (0x0005c7d5) bg_popup_call_poc_inact_pane_g7

0x1b55,	// (0x0005c7dd) bg_popup_call_poc_inact_pane_g8

0x0c61,	// (0x0005b8e9) popup_call_poc_inact_window_g2

0x1b5d,	// (0x0005c7e5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x0006a257) bg_popup_call_poc_inact_pane_g

0x0c69,	// (0x0005b8f1) popup_call_poc_inact_window_t1_ParamLimits

0x0c69,	// (0x0005b8f1) popup_call_poc_inact_window_t1

0x0c7e,	// (0x0005b906) popup_call_poc_inact_window_t2_ParamLimits

0x0c7e,	// (0x0005b906) popup_call_poc_inact_window_t2

0x0c93,	// (0x0005b91b) popup_call_poc_inact_window_t3_ParamLimits

0x0c93,	// (0x0005b91b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006a1b7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006a1b7) popup_call_poc_inact_window_t

0x1cd1,	// (0x0005c959) context_pane_ParamLimits

0xa1ec,	// (0x00064e74) signal_pane_ParamLimits

0xecf1,	// (0x00069979) main_call2_pane

0x1cbf,	// (0x0005c947) popup_phob_thumbnail2_window_ParamLimits

0x1cbf,	// (0x0005c947) popup_phob_thumbnail2_window

0x9a00,	// (0x00064688) aid_hotspot_pointer_arrow_pane

0x9a08,	// (0x00064690) aid_hotspot_pointer_hand_pane

0x9fa0,	// (0x00064c28) phob_pre_status_pane_g5

0x7d59,	// (0x000629e1) cams_zoom_pane_ParamLimits

0x7d65,	// (0x000629ed) image_vga_pane_ParamLimits

0x7d72,	// (0x000629fa) main_camera_pane_g1_ParamLimits

0x7d7e,	// (0x00062a06) main_camera_pane_g2_ParamLimits

0x7d8a,	// (0x00062a12) main_camera_pane_g3_ParamLimits

0x7d96,	// (0x00062a1e) main_camera_pane_g4_ParamLimits

0x7da2,	// (0x00062a2a) main_camera_pane_g5_ParamLimits

0x7dae,	// (0x00062a36) main_camera_pane_g6_ParamLimits

0x7dba,	// (0x00062a42) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00069eb6) main_camera_pane_g_ParamLimits

0x7dd2,	// (0x00062a5a) main_camera_pane_t1_ParamLimits

0x7de4,	// (0x00062a6c) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00069ec7) main_camera_pane_t_ParamLimits

0x719b,	// (0x00061e23) bg_popup_preview_window_pane_cp01_ParamLimits

0x719b,	// (0x00061e23) bg_popup_preview_window_pane_cp01

0x0ca8,	// (0x0005b930) popup_phob_thumbnail2_window_g1_ParamLimits

0x0ca8,	// (0x0005b930) popup_phob_thumbnail2_window_g1

0x6f40,	// (0x00061bc8) call2_cli_visual_pane

0x9d0d,	// (0x00064995) popup_call2_audio_conf_window_ParamLimits

0x9d0d,	// (0x00064995) popup_call2_audio_conf_window

0x9d20,	// (0x000649a8) popup_call2_audio_first_window_ParamLimits

0x9d20,	// (0x000649a8) popup_call2_audio_first_window

0x9d9c,	// (0x00064a24) popup_call2_audio_in_window_ParamLimits

0x9d9c,	// (0x00064a24) popup_call2_audio_in_window

0x9dcc,	// (0x00064a54) popup_call2_audio_out_window_ParamLimits

0x9dcc,	// (0x00064a54) popup_call2_audio_out_window

0x9e18,	// (0x00064aa0) popup_call2_audio_second_window_ParamLimits

0x9e18,	// (0x00064aa0) popup_call2_audio_second_window

0x9e64,	// (0x00064aec) popup_call2_audio_wait_window_ParamLimits

0x9e64,	// (0x00064aec) popup_call2_audio_wait_window

0x6f40,	// (0x00061bc8) bg_popup_call2_act_pane_cp03

0x717d,	// (0x00061e05) list_conf_pane_cp

0x0cb4,	// (0x0005b93c) popup_call2_audio_conf_window_t1

0xea68,	// (0x000696f0) list_single_graphic_popup_conf2_pane_ParamLimits

0xea68,	// (0x000696f0) list_single_graphic_popup_conf2_pane

0xea7b,	// (0x00069703) list_highlight_pane_cp04

0x0cc2,	// (0x0005b94a) list_single_graphic_popup_conf2_pane_g1

0xea8c,	// (0x00069714) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006a1be) list_single_graphic_popup_conf2_pane_g

0x0cca,	// (0x0005b952) list_single_graphic_popup_conf2_pane_t1

0x0cd8,	// (0x0005b960) bg_popup_call2_act_pane_cp01_ParamLimits

0x0cd8,	// (0x0005b960) bg_popup_call2_act_pane_cp01

0x0d62,	// (0x0005b9ea) call_type_pane_cp05_ParamLimits

0x0d62,	// (0x0005b9ea) call_type_pane_cp05

0x0db6,	// (0x0005ba3e) popup_call2_audio_second_window_g1_ParamLimits

0x0db6,	// (0x0005ba3e) popup_call2_audio_second_window_g1

0x0e0a,	// (0x0005ba92) popup_call2_audio_second_window_g2_ParamLimits

0x0e0a,	// (0x0005ba92) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0006a1c3) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0006a1c3) popup_call2_audio_second_window_g

0x0e6f,	// (0x0005baf7) popup_call2_audio_second_window_t1_ParamLimits

0x0e6f,	// (0x0005baf7) popup_call2_audio_second_window_t1

0x0f2a,	// (0x0005bbb2) popup_call2_audio_second_window_t2_ParamLimits

0x0f2a,	// (0x0005bbb2) popup_call2_audio_second_window_t2

0x0f7d,	// (0x0005bc05) popup_call2_audio_second_window_t3_ParamLimits

0x0f7d,	// (0x0005bc05) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006a1ca) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006a1ca) popup_call2_audio_second_window_t

0x6f40,	// (0x00061bc8) bg_popup_call2_in_pane_cp02

0x6f4a,	// (0x00061bd2) call_type_pane_cp04

0x6f52,	// (0x00061bda) popup_call2_audio_wait_window_g1

0x6f5a,	// (0x00061be2) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00069da3) popup_call2_audio_wait_window_g

0x6f62,	// (0x00061bea) popup_call2_audio_wait_window_t3

0x1070,	// (0x0005bcf8) bg_popup_call2_act_pane_ParamLimits

0x1070,	// (0x0005bcf8) bg_popup_call2_act_pane

0x1130,	// (0x0005bdb8) call_type_pane_cp03_ParamLimits

0x1130,	// (0x0005bdb8) call_type_pane_cp03

0x1194,	// (0x0005be1c) popup_call2_audio_first_window_g1_ParamLimits

0x1194,	// (0x0005be1c) popup_call2_audio_first_window_g1

0x1204,	// (0x0005be8c) popup_call2_audio_first_window_g2_ParamLimits

0x1204,	// (0x0005be8c) popup_call2_audio_first_window_g2

0x9299,	// (0x00063f21) popup_call2_audio_first_window_g3_ParamLimits

0x9299,	// (0x00063f21) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0006a1d3) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0006a1d3) popup_call2_audio_first_window_g

0x12e2,	// (0x0005bf6a) popup_call2_audio_first_window_t1_ParamLimits

0x12e2,	// (0x0005bf6a) popup_call2_audio_first_window_t1

0x13e5,	// (0x0005c06d) popup_call2_audio_first_window_t4_ParamLimits

0x13e5,	// (0x0005c06d) popup_call2_audio_first_window_t4

0x14c8,	// (0x0005c150) popup_call2_audio_first_window_t5_ParamLimits

0x14c8,	// (0x0005c150) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0006a1de) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0006a1de) popup_call2_audio_first_window_t

0x7193,	// (0x00061e1b) bg_popup_call2_act_pane_g1

0x1b75,	// (0x0005c7fd) popup_cale_lunar_info_window_t1

0x1b83,	// (0x0005c80b) popup_cale_lunar_info_window_t2

0x1b91,	// (0x0005c819) popup_cale_lunar_info_window_t3

0x6f40,	// (0x00061bc8) bg_popup_call2_bubble_pane

0x15c9,	// (0x0005c251) bg_popup_call2_in_pane_cp01_ParamLimits

0x15c9,	// (0x0005c251) bg_popup_call2_in_pane_cp01

0x6bf8,	// (0x00061880) call_type_pane_cp02

0x1611,	// (0x0005c299) popup_call2_audio_out_window_g1_ParamLimits

0x1611,	// (0x0005c299) popup_call2_audio_out_window_g1

0x163d,	// (0x0005c2c5) popup_call2_audio_out_window_g2_ParamLimits

0x163d,	// (0x0005c2c5) popup_call2_audio_out_window_g2

0x1665,	// (0x0005c2ed) popup_call2_audio_out_window_g3_ParamLimits

0x1665,	// (0x0005c2ed) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006a1e7) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006a1e7) popup_call2_audio_out_window_g

0x16a0,	// (0x0005c328) popup_call2_audio_out_window_t1_ParamLimits

0x16a0,	// (0x0005c328) popup_call2_audio_out_window_t1

0x16ff,	// (0x0005c387) popup_call2_audio_out_window_t2_ParamLimits

0x16ff,	// (0x0005c387) popup_call2_audio_out_window_t2

0x1753,	// (0x0005c3db) popup_call2_audio_out_window_t3_ParamLimits

0x1753,	// (0x0005c3db) popup_call2_audio_out_window_t3

0x1769,	// (0x0005c3f1) popup_call2_audio_out_window_t4_ParamLimits

0x1769,	// (0x0005c3f1) popup_call2_audio_out_window_t4

0x177f,	// (0x0005c407) popup_call2_audio_out_window_t5_ParamLimits

0x177f,	// (0x0005c407) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0006a1f0) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0006a1f0) popup_call2_audio_out_window_t

0x17e3,	// (0x0005c46b) bg_popup_call2_in_pane_ParamLimits

0x17e3,	// (0x0005c46b) bg_popup_call2_in_pane

0x183f,	// (0x0005c4c7) popup_call2_audio_in_window_g1_ParamLimits

0x183f,	// (0x0005c4c7) popup_call2_audio_in_window_g1

0x1877,	// (0x0005c4ff) popup_call2_audio_in_window_g2_ParamLimits

0x1877,	// (0x0005c4ff) popup_call2_audio_in_window_g2

0x18af,	// (0x0005c537) popup_call2_audio_in_window_g3_ParamLimits

0x18af,	// (0x0005c537) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0006a1fd) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0006a1fd) popup_call2_audio_in_window_g

0x1907,	// (0x0005c58f) popup_call2_audio_in_window_t1_ParamLimits

0x1907,	// (0x0005c58f) popup_call2_audio_in_window_t1

0x1987,	// (0x0005c60f) popup_call2_audio_in_window_t2_ParamLimits

0x1987,	// (0x0005c60f) popup_call2_audio_in_window_t2

0x1a07,	// (0x0005c68f) popup_call2_audio_in_window_t3_ParamLimits

0x1a07,	// (0x0005c68f) popup_call2_audio_in_window_t3

0x1a21,	// (0x0005c6a9) popup_call2_audio_in_window_t4_ParamLimits

0x1a21,	// (0x0005c6a9) popup_call2_audio_in_window_t4

0x1a33,	// (0x0005c6bb) popup_call2_audio_in_window_t5_ParamLimits

0x1a33,	// (0x0005c6bb) popup_call2_audio_in_window_t5

0x1a48,	// (0x0005c6d0) popup_call2_audio_in_window_t6_ParamLimits

0x1a48,	// (0x0005c6d0) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006a206) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006a206) popup_call2_audio_in_window_t

0x7193,	// (0x00061e1b) bg_popup_call2_in_pane_g1

0x1b9f,	// (0x0005c827) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x0006a281) popup_cale_lunar_info_window_t

0x719b,	// (0x00061e23) bg_popup_call2_rect_pane_ParamLimits

0x719b,	// (0x00061e23) bg_popup_call2_rect_pane

0x6f40,	// (0x00061bc8) call2_cli_visual_graphic_pane

0x6f40,	// (0x00061bc8) call2_cli_visual_text_pane

0xa271,	// (0x00064ef9) smil_status_volume_pane_g3

0x0002,

0x7611,	// (0x00062299) call2_cli_visual_graphic_pane_g1

0x7611,	// (0x00062299) call2_cli_visual_graphic_pane_g2

0x7611,	// (0x00062299) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0006a213) call2_cli_visual_graphic_pane_g

0x1a5d,	// (0x0005c6e5) bg_popup_call2_rect_pane_g1

0x774c,	// (0x000623d4) bg_popup_call2_rect_pane_g2

0x1a65,	// (0x0005c6ed) bg_popup_call2_rect_pane_g3

0x1a6d,	// (0x0005c6f5) bg_popup_call2_rect_pane_g4

0x1a75,	// (0x0005c6fd) bg_popup_call2_rect_pane_g5

0x1a7d,	// (0x0005c705) bg_popup_call2_rect_pane_g6

0x1a85,	// (0x0005c70d) bg_popup_call2_rect_pane_g7

0x1a8d,	// (0x0005c715) bg_popup_call2_rect_pane_g8

0x1a95,	// (0x0005c71d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006a21a) bg_popup_call2_rect_pane_g

0x1a9d,	// (0x0005c725) bg_popup_call2_bubble_pane_g1

0x1aa5,	// (0x0005c72d) bg_popup_call2_bubble_pane_g2

0x1aad,	// (0x0005c735) bg_popup_call2_bubble_pane_g3

0x1ab5,	// (0x0005c73d) bg_popup_call2_bubble_pane_g4

0x1abd,	// (0x0005c745) bg_popup_call2_bubble_pane_g5

0x1ac5,	// (0x0005c74d) bg_popup_call2_bubble_pane_g6

0x1acd,	// (0x0005c755) bg_popup_call2_bubble_pane_g7

0x1ad5,	// (0x0005c75d) bg_popup_call2_bubble_pane_g8

0x1add,	// (0x0005c765) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0006a22d) bg_popup_call2_bubble_pane_g

0x7814,	// (0x0006249c) aid_cale_week_size_cell_pane

0x7df6,	// (0x00062a7e) aid_cams_cif_uncrop_pane_ParamLimits

0x7df6,	// (0x00062a7e) aid_cams_cif_uncrop_pane

0x7f8c,	// (0x00062c14) aid_cams_size_cell_ParamLimits

0x7f8c,	// (0x00062c14) aid_cams_size_cell

0x7f98,	// (0x00062c20) grid_cams_pane_ParamLimits

0x7fa4,	// (0x00062c2c) linegrid_cams_pane_ParamLimits

0x80b2,	// (0x00062d3a) call_video_pane_t1

0x80cf,	// (0x00062d57) call_video_pane_t2

0x0001,

0xf292,	// (0x00069f1a) call_video_pane_t

0x8723,	// (0x000633ab) aid_cale_month_size_cell_pane_ParamLimits

0x8723,	// (0x000633ab) aid_cale_month_size_cell_pane

0xf642,	// (0x0006a2ca) smil_status_volume_pane_g

0xa27e,	// (0x00064f06) volume_smil_pane_ParamLimits

0x6839,	// (0x000614c1) aid_popup2_width_pane

0x76ad,	// (0x00062335) cell_qdial_pane_g4_ParamLimits

0x76ad,	// (0x00062335) cell_qdial_pane_g4

0x950f,	// (0x00064197) aid_blid_cardinal_pane_ParamLimits

0x951b,	// (0x000641a3) aid_blid_destination_pane_ParamLimits

0x951b,	// (0x000641a3) aid_blid_destination_pane

0x719b,	// (0x00061e23) bg_popup_call_poc_act_pane_ParamLimits

0x719b,	// (0x00061e23) bg_popup_call_poc_act_pane

0x719b,	// (0x00061e23) bg_popup_call_poc_inact_pane_ParamLimits

0x719b,	// (0x00061e23) bg_popup_call_poc_inact_pane

0x1ae5,	// (0x0005c76d) bg_popup_call_poc_act_pane_g1

0x1aed,	// (0x0005c775) bg_popup_call_poc_act_pane_g2

0x1af5,	// (0x0005c77d) bg_popup_call_poc_act_pane_g3

0x1ab5,	// (0x0005c73d) bg_popup_call_poc_act_pane_g4

0x1abd,	// (0x0005c745) bg_popup_call_poc_act_pane_g5

0x1afd,	// (0x0005c785) bg_popup_call_poc_act_pane_g6

0x1acd,	// (0x0005c755) bg_popup_call_poc_act_pane_g7

0x1b05,	// (0x0005c78d) bg_popup_call_poc_act_pane_g8

0x6f40,	// (0x00061bc8) main_usb_pane

0x1c9e,	// (0x0005c926) popup_cale_lunar_info_window

0x83b2,	// (0x0006303a) im_reading_pane_t1_ParamLimits

0x83ea,	// (0x00063072) list_im_pane_ParamLimits

0x83fb,	// (0x00063083) scroll_pane_cp07_ParamLimits

0x6f40,	// (0x00061bc8) grid_highlight_pane_cp012

0x719b,	// (0x00061e23) mup_scale_pane_ParamLimits

0x9299,	// (0x00063f21) main_usb_pane_g1_ParamLimits

0x9299,	// (0x00063f21) main_usb_pane_g1

0x9ec5,	// (0x00064b4d) main_usb_pane_g2_ParamLimits

0x9ec5,	// (0x00064b4d) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x0006a26a) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x0006a26a) main_usb_pane_g

0x9ed1,	// (0x00064b59) main_usb_pane_t1_ParamLimits

0x9ed1,	// (0x00064b59) main_usb_pane_t1

0x9ee3,	// (0x00064b6b) main_usb_pane_t2_ParamLimits

0x9ee3,	// (0x00064b6b) main_usb_pane_t2

0x9ef5,	// (0x00064b7d) main_usb_pane_t3_ParamLimits

0x9ef5,	// (0x00064b7d) main_usb_pane_t3

0x9f07,	// (0x00064b8f) main_usb_pane_t4_ParamLimits

0x9f07,	// (0x00064b8f) main_usb_pane_t4

0x9f19,	// (0x00064ba1) main_usb_pane_t5_ParamLimits

0x9f19,	// (0x00064ba1) main_usb_pane_t5

0x9f2b,	// (0x00064bb3) main_usb_pane_t6_ParamLimits

0x9f2b,	// (0x00064bb3) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x0006a26f) main_usb_pane_t_ParamLimits

0xebb5,	// (0x0006983d) aid_text_placing

0x94bb,	// (0x00064143) main_location2_pane_t1_ParamLimits

0x94d1,	// (0x00064159) main_location2_pane_t2_ParamLimits

0x94e7,	// (0x0006416f) main_location2_pane_t3_ParamLimits

0x94fd,	// (0x00064185) main_location2_pane_t4_ParamLimits

0x94fd,	// (0x00064185) main_location2_pane_t4

0xf3f3,	// (0x0006a07b) main_location2_pane_t_ParamLimits

0x7267,	// (0x00061eef) find_pinb_pane_g2_ParamLimits

0x7267,	// (0x00061eef) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00069dc9) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00069dc9) find_pinb_pane_g

0x7273,	// (0x00061efb) find_pinb_pane_t1_ParamLimits

0x7285,	// (0x00061f0d) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00069dce) find_pinb_pane_t_ParamLimits

0x6f40,	// (0x00061bc8) main_call3_pane

0x8a10,	// (0x00063698) cale_month_day_heading_pane_t1_ParamLimits

0x8a6e,	// (0x000636f6) cale_month_day_heading_pane_t2_ParamLimits

0x8ad3,	// (0x0006375b) cale_month_day_heading_pane_t3_ParamLimits

0x8b38,	// (0x000637c0) cale_month_day_heading_pane_t4_ParamLimits

0x8b9d,	// (0x00063825) cale_month_day_heading_pane_t5_ParamLimits

0x8c02,	// (0x0006388a) cale_month_day_heading_pane_t6_ParamLimits

0x8c67,	// (0x000638ef) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00069f52) cale_month_day_heading_pane_t_ParamLimits

0x8e4d,	// (0x00063ad5) smil_status_volume_pane

0x9b26,	// (0x000647ae) postcard_address_pane_ParamLimits

0x9b26,	// (0x000647ae) postcard_address_pane

0x9b32,	// (0x000647ba) postcard_message_pane_ParamLimits

0x9b32,	// (0x000647ba) postcard_message_pane

0x9ea1,	// (0x00064b29) call2_cli_visual_pane_t1_ParamLimits

0x9ea1,	// (0x00064b29) call2_cli_visual_pane_t1

0xa3cf,	// (0x00065057) postcard_message_pane_t1_ParamLimits

0xa3cf,	// (0x00065057) postcard_message_pane_t1

0xa3b8,	// (0x00065040) postcard_address_pane_t1_ParamLimits

0xa3b8,	// (0x00065040) postcard_address_pane_t1

0xa3ab,	// (0x00065033) popup_call3_audio_in_window_ParamLimits

0xa3ab,	// (0x00065033) popup_call3_audio_in_window

0xa293,	// (0x00064f1b) bg_popup_call3_in_pane_ParamLimits

0xa293,	// (0x00064f1b) bg_popup_call3_in_pane

0xa2f1,	// (0x00064f79) popup_call3_audio_in_window_g1_ParamLimits

0xa2f1,	// (0x00064f79) popup_call3_audio_in_window_g1

0xa309,	// (0x00064f91) popup_call3_audio_in_window_g2_ParamLimits

0xa309,	// (0x00064f91) popup_call3_audio_in_window_g2

0xa321,	// (0x00064fa9) popup_call3_audio_in_window_g3_ParamLimits

0xa321,	// (0x00064fa9) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x0006a2d1) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x0006a2d1) popup_call3_audio_in_window_g

0xa349,	// (0x00064fd1) popup_call3_audio_in_window_t1_ParamLimits

0xa349,	// (0x00064fd1) popup_call3_audio_in_window_t1

0xa371,	// (0x00064ff9) popup_call3_audio_in_window_t2_ParamLimits

0xa371,	// (0x00064ff9) popup_call3_audio_in_window_t2

0xa399,	// (0x00065021) popup_call3_audio_in_window_t3_ParamLimits

0xa399,	// (0x00065021) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x0006a2da) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x0006a2da) popup_call3_audio_in_window_t

0xecf1,	// (0x00069979) bg_popup_call3_rect_pane

0x1a5d,	// (0x0005c6e5) bg_popup_call3_rect_pane_g1

0x774c,	// (0x000623d4) bg_popup_call3_rect_pane_g2

0x1a65,	// (0x0005c6ed) bg_popup_call3_rect_pane_g3

0x1a6d,	// (0x0005c6f5) bg_popup_call3_rect_pane_g4

0x1a75,	// (0x0005c6fd) bg_popup_call3_rect_pane_g5

0x1a7d,	// (0x0005c705) bg_popup_call3_rect_pane_g6

0x1a85,	// (0x0005c70d) bg_popup_call3_rect_pane_g7

0x983d,	// (0x000644c5) mup_visualizer_osc_pane

0xedb0,	// (0x00069a38) mup_visualizer_spec_pane

0xa2b3,	// (0x00064f3b) call3_video_qcif_pane_ParamLimits

0xa2b3,	// (0x00064f3b) call3_video_qcif_pane

0xa2c3,	// (0x00064f4b) call3_video_qcif_uncrop_pane_ParamLimits

0xa2c3,	// (0x00064f4b) call3_video_qcif_uncrop_pane

0xa2cf,	// (0x00064f57) call3_video_subqcif_pane_ParamLimits

0xa2cf,	// (0x00064f57) call3_video_subqcif_pane

0xa2e1,	// (0x00064f69) call3_video_subqcif_uncrop_pane_ParamLimits

0xa2e1,	// (0x00064f69) call3_video_subqcif_uncrop_pane

0xa339,	// (0x00064fc1) popup_call3_audio_in_window_g4_ParamLimits

0xa339,	// (0x00064fc1) popup_call3_audio_in_window_g4

0xa260,	// (0x00064ee8) mup_spec_half_pane

0xa269,	// (0x00064ef1) mup_spec_half_pane_cp

0x1d31,	// (0x0005c9b9) mup_osc_middle_pane

0x1d3a,	// (0x0005c9c2) mup_visualizer_osc_pane_g1

0xa241,	// (0x00064ec9) mup_spec_bar_pane_ParamLimits

0xa241,	// (0x00064ec9) mup_spec_bar_pane

0x1d1e,	// (0x0005c9a6) mup_spec_bar_pane_g1

0x1d28,	// (0x0005c9b0) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0006a2c5) mup_spec_bar_pane_g

0x7814,	// (0x0006249c) aid_cale_week_size_cell_pane_ParamLimits

0x7827,	// (0x000624af) bg_cale_heading_pane_ParamLimits

0x783b,	// (0x000624c3) bg_cale_pane_cp01_ParamLimits

0x7854,	// (0x000624dc) cale_week_corner_pane_ParamLimits

0x786a,	// (0x000624f2) cale_week_day_heading_pane_ParamLimits

0x787e,	// (0x00062506) cale_week_scroll_pane_g1_ParamLimits

0x788f,	// (0x00062517) cale_week_scroll_pane_g2_ParamLimits

0x78a0,	// (0x00062528) cale_week_scroll_pane_g3_ParamLimits

0x78b1,	// (0x00062539) cale_week_scroll_pane_g4_ParamLimits

0x78c2,	// (0x0006254a) cale_week_scroll_pane_g5_ParamLimits

0x78d3,	// (0x0006255b) cale_week_scroll_pane_g6_ParamLimits

0x78e4,	// (0x0006256c) cale_week_scroll_pane_g7_ParamLimits

0x78f5,	// (0x0006257d) cale_week_scroll_pane_g8_ParamLimits

0x7906,	// (0x0006258e) cale_week_scroll_pane_g9_ParamLimits

0x7917,	// (0x0006259f) cale_week_scroll_pane_g10_ParamLimits

0x7928,	// (0x000625b0) cale_week_scroll_pane_g11_ParamLimits

0x7939,	// (0x000625c1) cale_week_scroll_pane_g12_ParamLimits

0x794a,	// (0x000625d2) cale_week_scroll_pane_g13_ParamLimits

0x795b,	// (0x000625e3) cale_week_scroll_pane_g14_ParamLimits

0x796c,	// (0x000625f4) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00069e5a) cale_week_scroll_pane_g_ParamLimits

0x797d,	// (0x00062605) cale_week_time_pane_ParamLimits

0x798e,	// (0x00062616) grid_cale_week_pane_ParamLimits

0x79a1,	// (0x00062629) listscroll_cale_week_pane_t1

0x79b3,	// (0x0006263b) scroll_pane_cp08_ParamLimits

0x8787,	// (0x0006340f) cale_month_corner_pane_ParamLimits

0x89cf,	// (0x00063657) cale_month_pane_t1

0x89e1,	// (0x00063669) cale_month_week_pane_ParamLimits

0x9299,	// (0x00063f21) popup_call_status_window_g1_ParamLimits

0x92a7,	// (0x00063f2f) popup_call_status_window_g2_ParamLimits

0x92b3,	// (0x00063f3b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0006a002) popup_call_status_window_g_ParamLimits

0xea03,	// (0x0006968b) aid_call2_pane

0x5a16,	// (0x0006069e) msg_header_pane_g1

0x9b26,	// (0x000647ae) postcard_address2_pane_ParamLimits

0x9b26,	// (0x000647ae) postcard_address2_pane

0x9b32,	// (0x000647ba) postcard_message2_pane_ParamLimits

0x9b32,	// (0x000647ba) postcard_message2_pane

0xa1f8,	// (0x00064e80) message2_row_pane_ParamLimits

0xa1f8,	// (0x00064e80) message2_row_pane

0xa210,	// (0x00064e98) address2_row_pane_ParamLimits

0xa210,	// (0x00064e98) address2_row_pane

0x1cec,	// (0x0005c974) postcard_message2_row_pane_g1

0x1cf4,	// (0x0005c97c) postcard_message2_row_pane_t1

0x1cec,	// (0x0005c974) address2_row_pane_g1

0x1cf4,	// (0x0005c97c) address2_row_pane_t1

0xe9fb,	// (0x00069683) aid_size_cell_vorec

0x6f40,	// (0x00061bc8) main_rss_pane

0xa223,	// (0x00064eab) rss_list_single_pane_ParamLimits

0xa223,	// (0x00064eab) rss_list_single_pane

0x1d02,	// (0x0005c98a) rss_list_single_pane_t1

0x1d10,	// (0x0005c998) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x0006a2c0) rss_list_single_pane_t

0x6f40,	// (0x00061bc8) main_camera2_pane

0x6f40,	// (0x00061bc8) main_video2_pane

0xa41f,	// (0x000650a7) cams_zoom_pane_cp2_ParamLimits

0xa41f,	// (0x000650a7) cams_zoom_pane_cp2

0xa42b,	// (0x000650b3) image2_vga_pane_ParamLimits

0xa42b,	// (0x000650b3) image2_vga_pane

0xa43a,	// (0x000650c2) main_camera2_pane_g1_ParamLimits

0xa43a,	// (0x000650c2) main_camera2_pane_g1

0xa446,	// (0x000650ce) main_camera2_pane_g2_ParamLimits

0xa446,	// (0x000650ce) main_camera2_pane_g2

0xa452,	// (0x000650da) main_camera2_pane_g3_ParamLimits

0xa452,	// (0x000650da) main_camera2_pane_g3

0xa45e,	// (0x000650e6) main_camera2_pane_g4_ParamLimits

0xa45e,	// (0x000650e6) main_camera2_pane_g4

0xa46a,	// (0x000650f2) main_camera2_pane_g5_ParamLimits

0xa46a,	// (0x000650f2) main_camera2_pane_g5

0xa476,	// (0x000650fe) main_camera2_pane_g6_ParamLimits

0xa476,	// (0x000650fe) main_camera2_pane_g6

0xa482,	// (0x0006510a) main_camera2_pane_g7_ParamLimits

0xa482,	// (0x0006510a) main_camera2_pane_g7

0xa48e,	// (0x00065116) main_camera2_pane_g8_ParamLimits

0xa48e,	// (0x00065116) main_camera2_pane_g8

0x0008,

0xf659,	// (0x0006a2e1) main_camera2_pane_g_ParamLimits

0xf659,	// (0x0006a2e1) main_camera2_pane_g

0xa4a6,	// (0x0006512e) main_camera2_pane_t1_ParamLimits

0xa4a6,	// (0x0006512e) main_camera2_pane_t1

0xa4b8,	// (0x00065140) main_camera2_pane_t2_ParamLimits

0xa4b8,	// (0x00065140) main_camera2_pane_t2

0xa4ca,	// (0x00065152) main_camera2_pane_t3_ParamLimits

0xa4ca,	// (0x00065152) main_camera2_pane_t3

0xa4dc,	// (0x00065164) main_camera2_pane_t4_ParamLimits

0xa4dc,	// (0x00065164) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0006a2f4) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0006a2f4) main_camera2_pane_t

0xa537,	// (0x000651bf) cams_zoom_pane_cp4_ParamLimits

0xa537,	// (0x000651bf) cams_zoom_pane_cp4

0xa547,	// (0x000651cf) image2_cif_pane_ParamLimits

0xa547,	// (0x000651cf) image2_cif_pane

0xa558,	// (0x000651e0) image2_subqcif_pane_ParamLimits

0xa558,	// (0x000651e0) image2_subqcif_pane

0xa565,	// (0x000651ed) main_video2_pane_g1_ParamLimits

0xa565,	// (0x000651ed) main_video2_pane_g1

0xa577,	// (0x000651ff) main_video2_pane_g2_ParamLimits

0xa577,	// (0x000651ff) main_video2_pane_g2

0xa587,	// (0x0006520f) main_video2_pane_g3_ParamLimits

0xa587,	// (0x0006520f) main_video2_pane_g3

0xa597,	// (0x0006521f) main_video2_pane_g4_ParamLimits

0xa597,	// (0x0006521f) main_video2_pane_g4

0xa5a7,	// (0x0006522f) main_video2_pane_g5_ParamLimits

0xa5a7,	// (0x0006522f) main_video2_pane_g5

0xa5b7,	// (0x0006523f) main_video2_pane_g6_ParamLimits

0xa5b7,	// (0x0006523f) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0006a303) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0006a303) main_video2_pane_g

0xa5c9,	// (0x00065251) main_video2_pane_t1_ParamLimits

0xa5c9,	// (0x00065251) main_video2_pane_t1

0xa5e3,	// (0x0006526b) main_video2_pane_t2_ParamLimits

0xa5e3,	// (0x0006526b) main_video2_pane_t2

0xa609,	// (0x00065291) main_video2_pane_t3_ParamLimits

0xa609,	// (0x00065291) main_video2_pane_t3

0x0002,

0xf688,	// (0x0006a310) main_video2_pane_t_ParamLimits

0xf688,	// (0x0006a310) main_video2_pane_t

0x9fda,	// (0x00064c62) call_muted_g2

0x0001,

0xf62a,	// (0x0006a2b2) call_muted_g

0x6f40,	// (0x00061bc8) main_mup2_pane

0x1d9f,	// (0x0005ca27) main_mup2_pane_g1_ParamLimits

0x1d9f,	// (0x0005ca27) main_mup2_pane_g1

0xa62f,	// (0x000652b7) main_mup2_pane_g2_ParamLimits

0xa62f,	// (0x000652b7) main_mup2_pane_g2

0xa89f,	// (0x00065527) main_mup_pane_g13_cp1

0xa8a7,	// (0x0006552f) mup_volume_pane_cp1

0xa64f,	// (0x000652d7) main_mup2_pane_g4_ParamLimits

0xa64f,	// (0x000652d7) main_mup2_pane_g4

0xa660,	// (0x000652e8) main_mup2_pane_g5_ParamLimits

0xa660,	// (0x000652e8) main_mup2_pane_g5

0xa671,	// (0x000652f9) main_mup2_pane_g6_ParamLimits

0xa671,	// (0x000652f9) main_mup2_pane_g6

0xa682,	// (0x0006530a) main_mup2_pane_g7_ParamLimits

0xa682,	// (0x0006530a) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0006a317) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0006a317) main_mup2_pane_g

0xa69e,	// (0x00065326) main_mup2_pane_t1_ParamLimits

0xa69e,	// (0x00065326) main_mup2_pane_t1

0xa6b5,	// (0x0006533d) main_mup2_pane_t2_ParamLimits

0xa6b5,	// (0x0006533d) main_mup2_pane_t2

0xa6cc,	// (0x00065354) main_mup2_pane_t3_ParamLimits

0xa6cc,	// (0x00065354) main_mup2_pane_t3

0xa6e3,	// (0x0006536b) main_mup2_pane_t4_ParamLimits

0xa6e3,	// (0x0006536b) main_mup2_pane_t4

0xa6fd,	// (0x00065385) main_mup2_pane_t5_ParamLimits

0xa6fd,	// (0x00065385) main_mup2_pane_t5

0xa717,	// (0x0006539f) main_mup2_pane_t6_ParamLimits

0xa717,	// (0x0006539f) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0006a326) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0006a326) main_mup2_pane_t

0xa74f,	// (0x000653d7) mup2_visualizer_pane_ParamLimits

0xa74f,	// (0x000653d7) mup2_visualizer_pane

0xa781,	// (0x00065409) mup_progress_pane_cp_ParamLimits

0xa781,	// (0x00065409) mup_progress_pane_cp

0xa88a,	// (0x00065512) mup_volume_pane_cp_ParamLimits

0xa88a,	// (0x00065512) mup_volume_pane_cp

0xa798,	// (0x00065420) mup2_visualizer_pane_g1_ParamLimits

0xa798,	// (0x00065420) mup2_visualizer_pane_g1

0x1d71,	// (0x0005c9f9) mup2_visualizer_pane_g2_ParamLimits

0x1d71,	// (0x0005c9f9) mup2_visualizer_pane_g2

0xa7ad,	// (0x00065435) mup2_visualizer_pane_g3_ParamLimits

0xa7ad,	// (0x00065435) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0006a333) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0006a333) mup2_visualizer_pane_g

0xe9fb,	// (0x00069683) aid_size_cell_fmradio

0xa0bc,	// (0x00064d44) aid_height_parent_landcape

0x84b5,	// (0x0006313d) wml_content_pane_cp

0x84bd,	// (0x00063145) wml_tabs_pane

0x84c6,	// (0x0006314e) popup_wml_miniature_window

0x84ce,	// (0x00063156) scroll_pane_cp021

0x84e2,	// (0x0006316a) wml_content_pane_comp8

0x6f40,	// (0x00061bc8) bg_popup_sub_pane_cp05

0x1d8f,	// (0x0005ca17) popup_wml_miniature_window_g1

0x1d97,	// (0x0005ca1f) wml_miniature_view_pane

0xa7b9,	// (0x00065441) aid_size_wml_view

0xa7c1,	// (0x00065449) wml_miniature_view_pane_g1

0xa7ca,	// (0x00065452) wml_miniature_view_pane_g2

0xa7d3,	// (0x0006545b) wml_miniature_view_pane_g3

0xa7db,	// (0x00065463) wml_miniature_view_pane_g4

0xa7e3,	// (0x0006546b) wml_miniature_view_pane_g5

0xa7eb,	// (0x00065473) wml_miniature_view_pane_g6

0xa7f3,	// (0x0006547b) wml_miniature_view_pane_g7

0xa7fb,	// (0x00065483) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x0006a33a) wml_miniature_view_pane_g

0x1d9f,	// (0x0005ca27) background_graphic_ParamLimits

0x1d9f,	// (0x0005ca27) background_graphic

0x1dab,	// (0x0005ca33) wml_tabs_2_pane

0x1db4,	// (0x0005ca3c) wml_tabs_3_pane_ParamLimits

0x1db4,	// (0x0005ca3c) wml_tabs_3_pane

0x1dc6,	// (0x0005ca4e) wml_tabs_4_pane_ParamLimits

0x1dc6,	// (0x0005ca4e) wml_tabs_4_pane

0x1ddc,	// (0x0005ca64) wml_tabs_5_pane_ParamLimits

0x1ddc,	// (0x0005ca64) wml_tabs_5_pane

0x1df6,	// (0x0005ca7e) wml_tabs_pane_g2_ParamLimits

0x1df6,	// (0x0005ca7e) wml_tabs_pane_g2

0x1e0a,	// (0x0005ca92) wml_tabs_pane_g3_ParamLimits

0x1e0a,	// (0x0005ca92) wml_tabs_pane_g3

0xa803,	// (0x0006548b) wml_tabs_2_active_pane_ParamLimits

0xa803,	// (0x0006548b) wml_tabs_2_active_pane

0xa813,	// (0x0006549b) wml_tabs_2_passive_pane_ParamLimits

0xa813,	// (0x0006549b) wml_tabs_2_passive_pane

0xa823,	// (0x000654ab) wml_tabs_3_active_pane_cp_ParamLimits

0xa823,	// (0x000654ab) wml_tabs_3_active_pane_cp

0xa834,	// (0x000654bc) wml_tabs_3_passive_pane_ParamLimits

0xa834,	// (0x000654bc) wml_tabs_3_passive_pane

0xa845,	// (0x000654cd) wml_tabs_3_passive_pane_cp_ParamLimits

0xa845,	// (0x000654cd) wml_tabs_3_passive_pane_cp

0xa856,	// (0x000654de) tabs_4_active_pane

0xa85e,	// (0x000654e6) tabs_4_passive_pane

0xa866,	// (0x000654ee) tabs_4_passive_pane_cp

0xa86e,	// (0x000654f6) tabs_4_passive_pane_cp2

0x9ebd,	// (0x00064b45) aid_height_text

0x980a,	// (0x00064492) mup_volume_cont_pane_ParamLimits

0x980a,	// (0x00064492) mup_volume_cont_pane

0x7225,	// (0x00061ead) aid_size_cell_pinb

0x722f,	// (0x00061eb7) aid_size_list_pinb

0xa76a,	// (0x000653f2) mup2_volume_cont_pane_ParamLimits

0xa76a,	// (0x000653f2) mup2_volume_cont_pane

0xa876,	// (0x000654fe) mup2_volume_cont_pane_g1_ParamLimits

0xa876,	// (0x000654fe) mup2_volume_cont_pane_g1

0x6841,	// (0x000614c9) aid_size_cell_touch_ParamLimits

0x6841,	// (0x000614c9) aid_size_cell_touch

0x6a89,	// (0x00061711) touch_pane_ParamLimits

0x6a89,	// (0x00061711) touch_pane

0x6827,	// (0x000614af) main_rss2_pane

0x1e27,	// (0x0005caaf) listscroll_rss2_pane

0x1e30,	// (0x0005cab8) rss2_navigation_pane

0x1e38,	// (0x0005cac0) list_rss2_pane

0xeb32,	// (0x000697ba) scroll_pane_cp22

0x1e40,	// (0x0005cac8) rss2_navigation_pane_g1

0x1e49,	// (0x0005cad1) rss2_navigation_pane_g2

0x1e51,	// (0x0005cad9) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x0006a34b) rss2_navigation_pane_g

0x1e59,	// (0x0005cae1) rss2_navigation_pane_t1

0xa8af,	// (0x00065537) rss2_list_single_pane_ParamLimits

0xa8af,	// (0x00065537) rss2_list_single_pane

0x1e67,	// (0x0005caef) rss2_list_single_pane_t2

0x1e75,	// (0x0005cafd) rss2_list_single_pane_t3_ParamLimits

0x1e75,	// (0x0005cafd) rss2_list_single_pane_t3

0x1e92,	// (0x0005cb1a) rss2_list_single_pane_t4

0x8e37,	// (0x00063abf) smil_status_pane_g1

0xf078,	// (0x00069d00) main_image2_pane_ParamLimits

0xf078,	// (0x00069d00) main_image2_pane

0xa49a,	// (0x00065122) main_camera2_pane_g9_ParamLimits

0xa49a,	// (0x00065122) main_camera2_pane_g9

0xa4ee,	// (0x00065176) main_camera2_pane_t5_ParamLimits

0xa4ee,	// (0x00065176) main_camera2_pane_t5

0xa500,	// (0x00065188) main_camera2_pane_t6_ParamLimits

0xa500,	// (0x00065188) main_camera2_pane_t6

0xa8c6,	// (0x0006554e) main_image2_pane_g1_ParamLimits

0xa8c6,	// (0x0006554e) main_image2_pane_g1

0x9cd2,	// (0x0006495a) smil2_video_pane_ParamLimits

0x9cd2,	// (0x0006495a) smil2_video_pane

0x6869,	// (0x000614f1) aid_zoom_text_primary_cp

0x6a34,	// (0x000616bc) popup_preview_fixed_window

0x83aa,	// (0x00063032) im_reading_pane_g1

0xa3f6,	// (0x0006507e) cams2_bc_adjust_pane_cp_ParamLimits

0xa3f6,	// (0x0006507e) cams2_bc_adjust_pane_cp

0xa52b,	// (0x000651b3) cams2_bc_adjust_pane_ParamLimits

0xa52b,	// (0x000651b3) cams2_bc_adjust_pane

0xa8d2,	// (0x0006555a) cams2_bc_adjust_pane_g1

0xa8da,	// (0x00065562) cams2_slider_pane

0xa8e3,	// (0x0006556b) cams2_slider_pane_g1

0xa8ec,	// (0x00065574) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0006a352) cams2_slider_pane_g

0x7365,	// (0x00061fed) calc_display_pane_ParamLimits

0x737d,	// (0x00062005) calc_paper_pane_ParamLimits

0x7399,	// (0x00062021) grid_calc_pane_ParamLimits

0x9370,	// (0x00063ff8) popup_clock_digital_window_t1_ParamLimits

0xef74,	// (0x00069bfc) main_image_pane_t1

0x734b,	// (0x00061fd3) aid_size_cell_calc_ParamLimits

0x734b,	// (0x00061fd3) aid_size_cell_calc

0xa0e1,	// (0x00064d69) popup_blid_sat_info2_window_ParamLimits

0xa0e1,	// (0x00064d69) popup_blid_sat_info2_window

0x1eb0,	// (0x0005cb38) aid_size_cell_blid

0x1eb8,	// (0x0005cb40) bg_popup_window_pane_cp07

0x1edb,	// (0x0005cb63) grid_popup_blid_pane

0x1ee3,	// (0x0005cb6b) heading_pane_cp05_ParamLimits

0x1ee3,	// (0x0005cb6b) heading_pane_cp05

0x1fab,	// (0x0005cc33) cell_popup_blid_pane_ParamLimits

0x1fab,	// (0x0005cc33) cell_popup_blid_pane

0x1fcb,	// (0x0005cc53) cell_popup_blid_pane_g1

0x1fd3,	// (0x0005cc5b) cell_popup_blid_pane_t1

0xa734,	// (0x000653bc) mup2_indicator_pane_ParamLimits

0xa734,	// (0x000653bc) mup2_indicator_pane

0xecf1,	// (0x00069979) mup2_visualizer_osc_pane

0x1d7d,	// (0x0005ca05) mup2_visualizer_spec_pane_ParamLimits

0x1d7d,	// (0x0005ca05) mup2_visualizer_spec_pane

0xa906,	// (0x0006558e) mup2_spec_half_pane

0xa90f,	// (0x00065597) mup2_spec_half_pane_cp

0xa917,	// (0x0006559f) mup2_spec_bar_pane_ParamLimits

0xa917,	// (0x0006559f) mup2_spec_bar_pane

0x1d1e,	// (0x0005c9a6) mup2_spec_bar_pane_g1

0x1d28,	// (0x0005c9b0) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0006a2c5) mup2_spec_bar_pane_g

0xa936,	// (0x000655be) mup2_osc_middle_pane

0x1d3a,	// (0x0005c9c2) mup2_visualizer_osc_pane_g1

0x6af6,	// (0x0006177e) popup_number_entry_window_t1_ParamLimits

0x6b09,	// (0x00061791) popup_number_entry_window_t2_ParamLimits

0x6b1b,	// (0x000617a3) popup_number_entry_window_t3_ParamLimits

0x6b2d,	// (0x000617b5) popup_number_entry_window_t5_ParamLimits

0x6b2d,	// (0x000617b5) popup_number_entry_window_t5

0xf0ec,	// (0x00069d74) popup_number_entry_window_t_ParamLimits

0x6b62,	// (0x000617ea) text_title_cp2_ParamLimits

0x9a10,	// (0x00064698) aid_hotspot_pointer_text2_pane

0x9aa2,	// (0x0006472a) main_viewer_pane_g9_ParamLimits

0x9aa2,	// (0x0006472a) main_viewer_pane_g9

0x89cf,	// (0x00063657) cale_month_pane_t1_ParamLimits

0x8ed0,	// (0x00063b58) bg_cale_pane_ParamLimits

0x8ee8,	// (0x00063b70) list_cale_pane_ParamLimits

0x79a1,	// (0x00062629) listscroll_cale_day_pane_t1

0x8ef9,	// (0x00063b81) scroll_pane_cp09_ParamLimits

0x9845,	// (0x000644cd) main_mup_eq_pane_t1_ParamLimits

0x9845,	// (0x000644cd) main_mup_eq_pane_t1

0x985b,	// (0x000644e3) main_mup_eq_pane_t2_ParamLimits

0x985b,	// (0x000644e3) main_mup_eq_pane_t2

0x9871,	// (0x000644f9) main_mup_eq_pane_t3_ParamLimits

0x9871,	// (0x000644f9) main_mup_eq_pane_t3

0x9887,	// (0x0006450f) main_mup_eq_pane_t4_ParamLimits

0x9887,	// (0x0006450f) main_mup_eq_pane_t4

0x989d,	// (0x00064525) main_mup_eq_pane_t5_ParamLimits

0x989d,	// (0x00064525) main_mup_eq_pane_t5

0x98b3,	// (0x0006453b) main_mup_eq_pane_t6_ParamLimits

0x98b3,	// (0x0006453b) main_mup_eq_pane_t6

0x98c5,	// (0x0006454d) main_mup_eq_pane_t7_ParamLimits

0x98c5,	// (0x0006454d) main_mup_eq_pane_t7

0x98d7,	// (0x0006455f) main_mup_eq_pane_t8_ParamLimits

0x98d7,	// (0x0006455f) main_mup_eq_pane_t8

0x98e9,	// (0x00064571) main_mup_eq_pane_t9_ParamLimits

0x98e9,	// (0x00064571) main_mup_eq_pane_t9

0x98ff,	// (0x00064587) main_mup_eq_pane_t10_ParamLimits

0x98ff,	// (0x00064587) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0006a101) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0006a101) main_mup_eq_pane_t

0x9992,	// (0x0006461a) mup_equalizer_pane_cp5_ParamLimits

0x99a4,	// (0x0006462c) mup_equalizer_pane_cp6_ParamLimits

0x99b6,	// (0x0006463e) mup_equalizer_pane_cp7_ParamLimits

0x6827,	// (0x000614af) main_gallery_pane

0x1d43,	// (0x0005c9cb) smil2_volume_pane

0x1d5e,	// (0x0005c9e6) smil_status_volume_pane_g1_ParamLimits

0x1d4b,	// (0x0005c9d3) smil_status_volume_pane_g2_ParamLimits

0xa271,	// (0x00064ef9) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x0006a2ca) smil_status_volume_pane_g_ParamLimits

0x1eb8,	// (0x0005cb40) bg_popup_window_pane_cp07_ParamLimits

0x1ec6,	// (0x0005cb4e) blid_firmament_pane

0xa93f,	// (0x000655c7) aid_size_cell_gallery_ParamLimits

0xa93f,	// (0x000655c7) aid_size_cell_gallery

0xa94d,	// (0x000655d5) grid_gallery_pane_ParamLimits

0xa94d,	// (0x000655d5) grid_gallery_pane

0xa959,	// (0x000655e1) cell_gallery_pane_ParamLimits

0xa959,	// (0x000655e1) cell_gallery_pane

0x1fe1,	// (0x0005cc69) bg_cell_gallery_focus_pane_ParamLimits

0x1fe1,	// (0x0005cc69) bg_cell_gallery_focus_pane

0x1ff3,	// (0x0005cc7b) cell_gallery_pane_g1_ParamLimits

0x1ff3,	// (0x0005cc7b) cell_gallery_pane_g1

0xa998,	// (0x00065620) cell_gallery_pane_g2_ParamLimits

0xa998,	// (0x00065620) cell_gallery_pane_g2

0xa9a5,	// (0x0006562d) cell_gallery_pane_g3_ParamLimits

0xa9a5,	// (0x0006562d) cell_gallery_pane_g3

0x1fff,	// (0x0005cc87) cell_gallery_pane_g4_ParamLimits

0x1fff,	// (0x0005cc87) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x0006a378) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x0006a378) cell_gallery_pane_g

0x200b,	// (0x0005cc93) bg_cell_gallery_focus_pane_g1

0x2013,	// (0x0005cc9b) bg_cell_gallery_focus_pane_g2

0x201b,	// (0x0005cca3) bg_cell_gallery_focus_pane_g3

0x2023,	// (0x0005ccab) bg_cell_gallery_focus_pane_g4

0x202b,	// (0x0005ccb3) bg_cell_gallery_focus_pane_g5

0x2033,	// (0x0005ccbb) bg_cell_gallery_focus_pane_g6

0x203b,	// (0x0005ccc3) bg_cell_gallery_focus_pane_g7

0x2043,	// (0x0005cccb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x0006a381) bg_cell_gallery_focus_pane_g

0x204b,	// (0x0005ccd3) aid_firma_cardinal

0x205f,	// (0x0005cce7) blid_firmament_pane_t1

0x2076,	// (0x0005ccfe) blid_firmament_pane_t2

0x208d,	// (0x0005cd15) blid_firmament_pane_t3

0x20a4,	// (0x0005cd2c) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0006a392) blid_firmament_pane_t

0x20bb,	// (0x0005cd43) blid_sat_info_pane

0x20cb,	// (0x0005cd53) blid_sat_info_pane_g1

0x20cb,	// (0x0005cd53) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x0006a39b) blid_sat_info_pane_g

0x20d5,	// (0x0005cd5d) blid_sat_info_pane_t1

0x20e3,	// (0x0005cd6b) smil2_volume_content_pane

0x20ec,	// (0x0005cd74) smil2_volume_pane_g1

0x20f4,	// (0x0005cd7c) smil2_volume_content_pane_g1

0x20fd,	// (0x0005cd85) smil2_volume_content_pane_g2

0x2106,	// (0x0005cd8e) smil2_volume_content_pane_g3

0x210f,	// (0x0005cd97) smil2_volume_content_pane_g4

0x2118,	// (0x0005cda0) smil2_volume_content_pane_g5

0x2121,	// (0x0005cda9) smil2_volume_content_pane_g6

0x212a,	// (0x0005cdb2) smil2_volume_content_pane_g7

0x2133,	// (0x0005cdbb) smil2_volume_content_pane_g8

0x213c,	// (0x0005cdc4) smil2_volume_content_pane_g9

0x2145,	// (0x0005cdcd) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x0006a3a0) smil2_volume_content_pane_g

0x7a07,	// (0x0006268f) cale_week_day_heading_pane_t1_ParamLimits

0x7a20,	// (0x000626a8) cale_week_day_heading_pane_t2_ParamLimits

0x7a39,	// (0x000626c1) cale_week_day_heading_pane_t3_ParamLimits

0x7a52,	// (0x000626da) cale_week_day_heading_pane_t4_ParamLimits

0x7a6b,	// (0x000626f3) cale_week_day_heading_pane_t5_ParamLimits

0x7a84,	// (0x0006270c) cale_week_day_heading_pane_t6_ParamLimits

0x7a9d,	// (0x00062725) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00069e79) cale_week_day_heading_pane_t_ParamLimits

0x7ab6,	// (0x0006273e) bg_cale_side_pane_ParamLimits

0x7ac4,	// (0x0006274c) cale_week_time_pane_t1_ParamLimits

0x7af0,	// (0x00062778) cale_week_time_pane_t2_ParamLimits

0x7b1c,	// (0x000627a4) cale_week_time_pane_t3_ParamLimits

0x7b48,	// (0x000627d0) cale_week_time_pane_t4_ParamLimits

0x7b74,	// (0x000627fc) cale_week_time_pane_t5_ParamLimits

0x7ba0,	// (0x00062828) cale_week_time_pane_t6_ParamLimits

0x7bcc,	// (0x00062854) cale_week_time_pane_t7_ParamLimits

0x7bf8,	// (0x00062880) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00069e88) cale_week_time_pane_t_ParamLimits

0x7c24,	// (0x000628ac) cell_cale_week_pane_g2_ParamLimits

0x7ab6,	// (0x0006273e) bg_cale_side_pane_cp01_ParamLimits

0x8ccc,	// (0x00063954) cale_month_week_pane_t1_ParamLimits

0x8ce3,	// (0x0006396b) cale_month_week_pane_t2_ParamLimits

0x8cfa,	// (0x00063982) cale_month_week_pane_t3_ParamLimits

0x8d11,	// (0x00063999) cale_month_week_pane_t4_ParamLimits

0x8d28,	// (0x000639b0) cale_month_week_pane_t5_ParamLimits

0x8d3f,	// (0x000639c7) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00069f61) cale_month_week_pane_t_ParamLimits

0x8dfc,	// (0x00063a84) cell_cale_month_pane_g1_ParamLimits

0x6827,	// (0x000614af) main_cale_event_viewer_pane

0x6827,	// (0x000614af) listscroll_cale_event_viewer_pane

0x214e,	// (0x0005cdd6) list_cale_ev_pane

0x2156,	// (0x0005cdde) scroll_pane_cp023

0xa9b2,	// (0x0006563a) field_cale_ev_pane_ParamLimits

0xa9b2,	// (0x0006563a) field_cale_ev_pane

0x2162,	// (0x0005cdea) field_cale_ev_content_pane_ParamLimits

0x2162,	// (0x0005cdea) field_cale_ev_content_pane

0x216e,	// (0x0005cdf6) field_cale_ev_pane_g1_ParamLimits

0x216e,	// (0x0005cdf6) field_cale_ev_pane_g1

0x217a,	// (0x0005ce02) field_cale_ev_pane_g2_ParamLimits

0x217a,	// (0x0005ce02) field_cale_ev_pane_g2

0x2192,	// (0x0005ce1a) field_cale_ev_pane_g3_ParamLimits

0x2192,	// (0x0005ce1a) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0006a3b5) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0006a3b5) field_cale_ev_pane_g

0x21aa,	// (0x0005ce32) field_cale_ev_pane_t1_ParamLimits

0x21aa,	// (0x0005ce32) field_cale_ev_pane_t1

0xa9cc,	// (0x00065654) field_cale_ev_content_pane_t1_ParamLimits

0xa9cc,	// (0x00065654) field_cale_ev_content_pane_t1

0xee5a,	// (0x00069ae2) bg_button_pane_cp01

0x77fd,	// (0x00062485) listscroll_cale_week_pane_ParamLimits

0x780c,	// (0x00062494) popup_toolbar_window_cp01

0x79a1,	// (0x00062629) listscroll_cale_week_pane_t1_ParamLimits

0x74dc,	// (0x00062164) listscroll_cale_day_pane_ParamLimits

0x780c,	// (0x00062494) popup_toolbar_window_cp02

0x79a1,	// (0x00062629) listscroll_cale_day_pane_t1_ParamLimits

0x77fd,	// (0x00062485) main_cale_month_pane_ParamLimits

0xa181,	// (0x00064e09) popup_toolbar_window_cp03_ParamLimits

0xa181,	// (0x00064e09) popup_toolbar_window_cp03

0x9bfa,	// (0x00064882) main_image_pane_g2_ParamLimits

0x9bfa,	// (0x00064882) main_image_pane_g2

0x9c06,	// (0x0006488e) main_image_pane_g3_ParamLimits

0x9c06,	// (0x0006488e) main_image_pane_g3

0x0002,

0xf50b,	// (0x0006a193) main_image_pane_g_ParamLimits

0xf50b,	// (0x0006a193) main_image_pane_g

0xef74,	// (0x00069bfc) main_image_pane_t1_ParamLimits

0x9c12,	// (0x0006489a) main_image_pane_t2_ParamLimits

0x9c12,	// (0x0006489a) main_image_pane_t2

0x9c24,	// (0x000648ac) main_image_pane_t3_ParamLimits

0x9c24,	// (0x000648ac) main_image_pane_t3

0x9c36,	// (0x000648be) main_image_pane_t4_ParamLimits

0x9c36,	// (0x000648be) main_image_pane_t4

0x0003,

0xf512,	// (0x0006a19a) main_image_pane_t_ParamLimits

0xf512,	// (0x0006a19a) main_image_pane_t

0x9c48,	// (0x000648d0) popup_image_details_window_cp01

0x9c50,	// (0x000648d8) popup_toobar_trans_pane_cp01_ParamLimits

0x9c50,	// (0x000648d8) popup_toobar_trans_pane_cp01

0xa120,	// (0x00064da8) popup_image_details_window_ParamLimits

0xa120,	// (0x00064da8) popup_image_details_window

0x1ca6,	// (0x0005c92e) popup_image_focus_window

0xa3ea,	// (0x00065072) camera2_autofocus_pane_ParamLimits

0xa3ea,	// (0x00065072) camera2_autofocus_pane

0x6827,	// (0x000614af) bg_popup_sub_pane_cp06

0x21c1,	// (0x0005ce49) popup_image_focus_window_g1

0x21c9,	// (0x0005ce51) popup_image_focus_window_g2

0x21d1,	// (0x0005ce59) popup_image_focus_window_g3

0x21d9,	// (0x0005ce61) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x0006a3bc) popup_image_focus_window_g

0x21e1,	// (0x0005ce69) popup_image_focus_window_t1

0x21ef,	// (0x0005ce77) popup_image_focus_window_t2

0x21fe,	// (0x0005ce86) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0006a3c5) popup_image_focus_window_t

0x220c,	// (0x0005ce94) camera2_autofocus_pane_g1

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp01

0x221a,	// (0x0005cea2) popup_image_details_window_g1

0x222d,	// (0x0005ceb5) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0006a3d7) popup_image_details_window_g

0x2256,	// (0x0005cede) popup_image_details_window_t1

0x2268,	// (0x0005cef0) popup_image_details_window_t2

0x2281,	// (0x0005cf09) popup_image_details_window_t3

0x2295,	// (0x0005cf1d) popup_image_details_window_t4

0x22b0,	// (0x0005cf38) popup_image_details_window_t5

0x0004,

0xf756,	// (0x0006a3de) popup_image_details_window_t

0x74aa,	// (0x00062132) bg_calc_paper_pane_ParamLimits

0x6827,	// (0x000614af) grid_highlight_pane_cp013

0x74c2,	// (0x0006214a) list_calc_pane_ParamLimits

0x74d4,	// (0x0006215c) scroll_pane_cp024

0x74dc,	// (0x00062164) bg_calc_display_pane_ParamLimits

0x74e8,	// (0x00062170) calc_display_pane_t1_ParamLimits

0x74fd,	// (0x00062185) calc_display_pane_t2_ParamLimits

0x7512,	// (0x0006219a) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00069dfb) calc_display_pane_t_ParamLimits

0x761b,	// (0x000622a3) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00069e18) cell_calc_pane_g

0x7624,	// (0x000622ac) cell_calc_pane_t1

0x7633,	// (0x000622bb) grid_highlight_pane_cp02_ParamLimits

0x7649,	// (0x000622d1) toolbar_button_pane_cp01_ParamLimits

0x7649,	// (0x000622d1) toolbar_button_pane_cp01

0xefb9,	// (0x00069c41) temp_image_control_pane_ParamLimits

0xefb9,	// (0x00069c41) temp_image_control_pane

0xf078,	// (0x00069d00) main_mp3_pane

0x22ca,	// (0x0005cf52) temp_image_control_pane_g1_ParamLimits

0x22ca,	// (0x0005cf52) temp_image_control_pane_g1

0x22d8,	// (0x0005cf60) temp_image_control_pane_g2_ParamLimits

0x22d8,	// (0x0005cf60) temp_image_control_pane_g2

0x22ea,	// (0x0005cf72) temp_image_control_pane_g3_ParamLimits

0x22ea,	// (0x0005cf72) temp_image_control_pane_g3

0xaa16,	// (0x0006569e) temp_image_control_pane_g4_ParamLimits

0xaa16,	// (0x0006569e) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x0006a3e9) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x0006a3e9) temp_image_control_pane_g

0x22ca,	// (0x0005cf52) main_mp3_pane_g1

0xaa27,	// (0x000656af) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0006a3f2) main_mp3_pane_g

0x232d,	// (0x0005cfb5) main_mp3_pane_t1

0x7dc6,	// (0x00062a4e) main_camera_pane_g8_ParamLimits

0x7dc6,	// (0x00062a4e) main_camera_pane_g8

0x7f1e,	// (0x00062ba6) main_video_pane_g7_ParamLimits

0x7f1e,	// (0x00062ba6) main_video_pane_g7

0xa519,	// (0x000651a1) main_camera2_pane_t7_ParamLimits

0xa519,	// (0x000651a1) main_camera2_pane_t7

0x8475,	// (0x000630fd) scroll_pane_cp025_ParamLimits

0x8475,	// (0x000630fd) scroll_pane_cp025

0x8489,	// (0x00063111) scroll_pane_cp026_ParamLimits

0x8489,	// (0x00063111) scroll_pane_cp026

0x8498,	// (0x00063120) wml_content_pane_ParamLimits

0x6827,	// (0x000614af) main_touch_calib_pane

0xaabe,	// (0x00065746) main_touch_calib_pane_g1

0xaaca,	// (0x00065752) main_touch_calib_pane_g2

0xaad6,	// (0x0006575e) main_touch_calib_pane_g3

0xaae2,	// (0x0006576a) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x0006a410) main_touch_calib_pane_g

0xaaee,	// (0x00065776) main_touch_calib_pane_t1

0xab03,	// (0x0006578b) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x0006a419) main_touch_calib_pane_t

0xebe3,	// (0x0006986b) mup_progress_pane_cp02

0xec02,	// (0x0006988a) navi_pane_g1

0xec82,	// (0x0006990a) navi_pane_mp_t3

0xf078,	// (0x00069d00) main_mp3_pane_ParamLimits

0xa1bb,	// (0x00064e43) navi_pane_ParamLimits

0x22ca,	// (0x0005cf52) main_mp3_pane_g1_ParamLimits

0xaa27,	// (0x000656af) main_mp3_pane_g2_ParamLimits

0xaa33,	// (0x000656bb) main_mp3_pane_g3_ParamLimits

0xaa33,	// (0x000656bb) main_mp3_pane_g3

0xaa3f,	// (0x000656c7) main_mp3_pane_g4_ParamLimits

0xaa3f,	// (0x000656c7) main_mp3_pane_g4

0x22fa,	// (0x0005cf82) main_mp3_pane_g5_ParamLimits

0x22fa,	// (0x0005cf82) main_mp3_pane_g5

0x2308,	// (0x0005cf90) main_mp3_pane_g6_ParamLimits

0x2308,	// (0x0005cf90) main_mp3_pane_g6

0x2315,	// (0x0005cf9d) main_mp3_pane_g7_ParamLimits

0x2315,	// (0x0005cf9d) main_mp3_pane_g7

0x2321,	// (0x0005cfa9) main_mp3_pane_g8_ParamLimits

0x2321,	// (0x0005cfa9) main_mp3_pane_g8

0xf76a,	// (0x0006a3f2) main_mp3_pane_g_ParamLimits

0xaa4b,	// (0x000656d3) main_mp3_pane_t2

0xaa59,	// (0x000656e1) main_mp3_pane_t3

0x233b,	// (0x0005cfc3) main_mp3_pane_t4

0x2349,	// (0x0005cfd1) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0006a403) main_mp3_pane_t

0x2357,	// (0x0005cfdf) mup_progress_pane_cp01

0x6869,	// (0x000614f1) aid_zoom_text_secondary2

0x214e,	// (0x0005cdd6) list_cale_ev2_pane

0x2156,	// (0x0005cdde) scroll_pane_cp023_ParamLimits

0xab4e,	// (0x000657d6) field_cale_ev2_pane_ParamLimits

0xab4e,	// (0x000657d6) field_cale_ev2_pane

0xab64,	// (0x000657ec) field_cale_ev2_pane_g1_ParamLimits

0xab64,	// (0x000657ec) field_cale_ev2_pane_g1

0xab70,	// (0x000657f8) field_cale_ev2_pane_g2_ParamLimits

0xab70,	// (0x000657f8) field_cale_ev2_pane_g2

0xab88,	// (0x00065810) field_cale_ev2_pane_g3_ParamLimits

0xab88,	// (0x00065810) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0006a424) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0006a424) field_cale_ev2_pane_g

0x5a95,	// (0x0006071d) field_cale_ev2_pane_t1_ParamLimits

0x5a95,	// (0x0006071d) field_cale_ev2_pane_t1

0x5aac,	// (0x00060734) field_cale_ev2_pane_t2_ParamLimits

0x5aac,	// (0x00060734) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x0006a42d) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x0006a42d) field_cale_ev2_pane_t

0x9af6,	// (0x0006477e) main_postcard_pane_g5_ParamLimits

0x9af6,	// (0x0006477e) main_postcard_pane_g5

0x9b02,	// (0x0006478a) main_postcard_pane_g6_ParamLimits

0x9b02,	// (0x0006478a) main_postcard_pane_g6

0x7d4d,	// (0x000629d5) camera2_autofocus_pane_cp_ParamLimits

0x7d4d,	// (0x000629d5) camera2_autofocus_pane_cp

0xf078,	// (0x00069d00) main_mup3_pane

0xabcc,	// (0x00065854) main_mup3_pane_g1_ParamLimits

0xabcc,	// (0x00065854) main_mup3_pane_g1

0xabed,	// (0x00065875) main_mup3_pane_g2_ParamLimits

0xabed,	// (0x00065875) main_mup3_pane_g2

0xac50,	// (0x000658d8) main_mup3_pane_g3_ParamLimits

0xac50,	// (0x000658d8) main_mup3_pane_g3

0xac8b,	// (0x00065913) main_mup3_pane_g4_ParamLimits

0xac8b,	// (0x00065913) main_mup3_pane_g4

0xacc6,	// (0x0006594e) main_mup3_pane_g5_ParamLimits

0xacc6,	// (0x0006594e) main_mup3_pane_g5

0xad01,	// (0x00065989) main_mup3_pane_g6_ParamLimits

0xad01,	// (0x00065989) main_mup3_pane_g6

0x23d3,	// (0x0005d05b) main_mup3_pane_g7_ParamLimits

0x23d3,	// (0x0005d05b) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x0006a43d) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x0006a43d) main_mup3_pane_g

0xad6f,	// (0x000659f7) main_mup3_pane_t1_ParamLimits

0xad6f,	// (0x000659f7) main_mup3_pane_t1

0xadd2,	// (0x00065a5a) main_mup3_pane_t2_ParamLimits

0xadd2,	// (0x00065a5a) main_mup3_pane_t2

0xae8f,	// (0x00065b17) main_mup3_pane_t4_ParamLimits

0xae8f,	// (0x00065b17) main_mup3_pane_t4

0xaed5,	// (0x00065b5d) main_mup3_pane_t5_ParamLimits

0xaed5,	// (0x00065b5d) main_mup3_pane_t5

0xaf79,	// (0x00065c01) main_mup3_pane_t6_ParamLimits

0xaf79,	// (0x00065c01) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x0006a44e) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x0006a44e) main_mup3_pane_t

0xb021,	// (0x00065ca9) mup3_progress_pane_ParamLimits

0xb021,	// (0x00065ca9) mup3_progress_pane

0xb067,	// (0x00065cef) popup_mup3_control_window_ParamLimits

0xb067,	// (0x00065cef) popup_mup3_control_window

0x23e1,	// (0x0005d069) popup_mup3_text_window

0xb080,	// (0x00065d08) mup3_progress_pane_t1

0xb096,	// (0x00065d1e) mup3_progress_pane_t2

0x23e9,	// (0x0005d071) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x0006a45b) mup3_progress_pane_t

0x2400,	// (0x0005d088) mup_progress_pane_cp03

0x6827,	// (0x000614af) bg_tb_trans_pane_cp04

0xb0ac,	// (0x00065d34) mup3_volume_pane

0xb0b4,	// (0x00065d3c) popup_mup3_control_window_g1

0xb0bd,	// (0x00065d45) mup3_volume_pane_g1

0xb0c6,	// (0x00065d4e) mup3_volume_pane_g2

0xb0cf,	// (0x00065d57) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x0006a462) mup3_volume_pane_g

0x6827,	// (0x000614af) bg_tb_trans_pane_cp03

0x2410,	// (0x0005d098) popup_mup3_text_window_g1

0x2418,	// (0x0005d0a0) popup_mup3_text_window_t1

0x75dc,	// (0x00062264) list_calc_item_pane_g1_ParamLimits

0x1e1e,	// (0x0005caa6) mup_volume_pane_cp_g1

0xab18,	// (0x000657a0) main_touch_calib_pane_t3

0xab2a,	// (0x000657b2) main_touch_calib_pane_t4

0xab3c,	// (0x000657c4) main_touch_calib_pane_t5

0x6831,	// (0x000614b9) aid_cell_size_toolbar2

0x6839,	// (0x000614c1) aid_popup3_width_pane

0x57a4,	// (0x0006042c) aid_zoom_text_msg_primary

0x7d1a,	// (0x000629a2) vorec_t7

0x754b,	// (0x000621d3) bg_calc_paper_pane_g1_ParamLimits

0x7557,	// (0x000621df) bg_calc_paper_pane_g2_ParamLimits

0x7563,	// (0x000621eb) bg_calc_paper_pane_g3_ParamLimits

0x756f,	// (0x000621f7) bg_calc_paper_pane_g4_ParamLimits

0x757b,	// (0x00062203) bg_calc_paper_pane_g5_ParamLimits

0x7587,	// (0x0006220f) bg_calc_paper_pane_g6_ParamLimits

0x7596,	// (0x0006221e) bg_calc_paper_pane_g7_ParamLimits

0x75a5,	// (0x0006222d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00069e02) bg_calc_paper_pane_g_ParamLimits

0x75b4,	// (0x0006223c) calc_bg_paper_pane_g9_ParamLimits

0x7e39,	// (0x00062ac1) image_qvga_pane_ParamLimits

0x7e39,	// (0x00062ac1) image_qvga_pane

0x719b,	// (0x00061e23) bg_popup_sub_pane_cp04_ParamLimits

0xeef0,	// (0x00069b78) popup_mup_playback_window_g1_ParamLimits

0xeefc,	// (0x00069b84) popup_mup_playback_window_t1_ParamLimits

0xef11,	// (0x00069b99) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0006a18e) popup_mup_playback_window_t_ParamLimits

0xa640,	// (0x000652c8) main_mup2_pane_g3_ParamLimits

0xa640,	// (0x000652c8) main_mup2_pane_g3

0x815e,	// (0x00062de6) popup_toolbar_window_cp04

0x0e5e,	// (0x0005bae6) popup_call2_audio_second_window_g3_ParamLimits

0x0e5e,	// (0x0005bae6) popup_call2_audio_second_window_g3

0x1268,	// (0x0005bef0) popup_call2_audio_first_window_g4_ParamLimits

0x1268,	// (0x0005bef0) popup_call2_audio_first_window_g4

0x18e7,	// (0x0005c56f) popup_call2_audio_in_window_g4_ParamLimits

0x18e7,	// (0x0005c56f) popup_call2_audio_in_window_g4

0x9bed,	// (0x00064875) aid_area_sk_bg_cut_ParamLimits

0x9bed,	// (0x00064875) aid_area_sk_bg_cut

0xef26,	// (0x00069bae) aid_area_sk_bg_cut_2_ParamLimits

0xef26,	// (0x00069bae) aid_area_sk_bg_cut_2

0xa988,	// (0x00065610) aid_placing_details_win

0xa990,	// (0x00065618) aid_placing_details_win_2

0x220c,	// (0x0005ce94) camera2_autofocus_pane_g1_ParamLimits

0x6a27,	// (0x000616af) popup_fixed_preview_cale_window_ParamLimits

0x6a27,	// (0x000616af) popup_fixed_preview_cale_window

0xed02,	// (0x0006998a) navi_slider_pane_g3

0xed0b,	// (0x00069993) navi_slider_pane_g4

0xed14,	// (0x0006999c) navi_slider_pane_g5

0xed02,	// (0x0006998a) navi_slider_pane_g6

0x9605,	// (0x0006428d) navi_slider_pane_g7

0xee27,	// (0x00069aaf) mup_scale_pane_g3

0xee30,	// (0x00069ab8) mup_scale_pane_g4

0xee39,	// (0x00069ac1) mup_scale_pane_g5

0x99c8,	// (0x00064650) mup_scale_pane_g6

0x99d1,	// (0x00064659) mup_scale_pane_g7

0xed02,	// (0x0006998a) cams2_slider_pane_g3

0x1ea8,	// (0x0005cb30) cams2_slider_pane_g4

0xa8f5,	// (0x0006557d) cams2_slider_pane_g5

0xed02,	// (0x0006998a) cams2_slider_pane_g6

0xa8fd,	// (0x00065585) cams2_slider_pane_g7

0x20cb,	// (0x0005cd53) camera2_autofocus_pane_cp_g1

0x2426,	// (0x0005d0ae) bg_popup_preview_window_pane_cp02_ParamLimits

0x2426,	// (0x0005d0ae) bg_popup_preview_window_pane_cp02

0xb0d8,	// (0x00065d60) list_fp_cale_pane_ParamLimits

0xb0d8,	// (0x00065d60) list_fp_cale_pane

0x2432,	// (0x0005d0ba) popup_fixed_preview_cale_window_t1_ParamLimits

0x2432,	// (0x0005d0ba) popup_fixed_preview_cale_window_t1

0xb0e8,	// (0x00065d70) popup_fixed_preview_cale_window_t2_ParamLimits

0xb0e8,	// (0x00065d70) popup_fixed_preview_cale_window_t2

0xb0fd,	// (0x00065d85) popup_fixed_preview_cale_window_t3_ParamLimits

0xb0fd,	// (0x00065d85) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x0006a469) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x0006a469) popup_fixed_preview_cale_window_t

0xb10f,	// (0x00065d97) list_single_fp_cale_pane_ParamLimits

0xb10f,	// (0x00065d97) list_single_fp_cale_pane

0xb11c,	// (0x00065da4) list_single_fp_cale_pane_g1_ParamLimits

0xb11c,	// (0x00065da4) list_single_fp_cale_pane_g1

0x2450,	// (0x0005d0d8) list_single_fp_cale_pane_g2_ParamLimits

0x2450,	// (0x0005d0d8) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x0006a470) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x0006a470) list_single_fp_cale_pane_g

0xb128,	// (0x00065db0) list_single_fp_cale_pane_t1_ParamLimits

0xb128,	// (0x00065db0) list_single_fp_cale_pane_t1

0xb13a,	// (0x00065dc2) list_single_fp_cale_pane_t2_ParamLimits

0xb13a,	// (0x00065dc2) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x0006a477) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x0006a477) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6827,	// (0x000614af) main_dialer_pane

0xb16d,	// (0x00065df5) aid_cell_size_keypad

0xb177,	// (0x00065dff) dialer_ne_pane

0xb17f,	// (0x00065e07) grid_dialer_command_1_pane

0xb187,	// (0x00065e0f) grid_dialer_command_2_pane

0xb18f,	// (0x00065e17) grid_dialer_keypad_pane

0xb19f,	// (0x00065e27) bg_popup_call_pane_cp06_ParamLimits

0xb19f,	// (0x00065e27) bg_popup_call_pane_cp06

0xb1ab,	// (0x00065e33) dialer_ne_clear_pane_ParamLimits

0xb1ab,	// (0x00065e33) dialer_ne_clear_pane

0x2469,	// (0x0005d0f1) dialer_ne_pane_g1

0x2471,	// (0x0005d0f9) dialer_ne_pane_t1_ParamLimits

0x2471,	// (0x0005d0f9) dialer_ne_pane_t1

0xb1b7,	// (0x00065e3f) dialer_ne_pane_t2_ParamLimits

0xb1b7,	// (0x00065e3f) dialer_ne_pane_t2

0xb1d4,	// (0x00065e5c) dialer_ne_pane_t3_ParamLimits

0xb1d4,	// (0x00065e5c) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x0006a47c) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x0006a47c) dialer_ne_pane_t

0xb1f8,	// (0x00065e80) dialer_ne_pane_t3_copy1_ParamLimits

0xb1f8,	// (0x00065e80) dialer_ne_pane_t3_copy1

0xb21c,	// (0x00065ea4) cell_dialer_keypad_pane_ParamLimits

0xb21c,	// (0x00065ea4) cell_dialer_keypad_pane

0xb231,	// (0x00065eb9) cell_dialer_command_1_pane_ParamLimits

0xb231,	// (0x00065eb9) cell_dialer_command_1_pane

0xb247,	// (0x00065ecf) cell_dialer_command_2_pane_ParamLimits

0xb247,	// (0x00065ecf) cell_dialer_command_2_pane

0x2483,	// (0x0005d10b) bg_button_pane_cp02_ParamLimits

0x2483,	// (0x0005d10b) bg_button_pane_cp02

0xb256,	// (0x00065ede) cell_dialer_keypad_pane_g1_ParamLimits

0xb256,	// (0x00065ede) cell_dialer_keypad_pane_g1

0x2483,	// (0x0005d10b) bg_button_pane_cp03_ParamLimits

0x2483,	// (0x0005d10b) bg_button_pane_cp03

0xb26b,	// (0x00065ef3) cell_dialer_command_1_pane_g1_ParamLimits

0xb26b,	// (0x00065ef3) cell_dialer_command_1_pane_g1

0x248f,	// (0x0005d117) bg_button_pane_cp04

0xb27e,	// (0x00065f06) cell_dialer_command_2_pane_g1

0xecf1,	// (0x00069979) bg_button_pane_cp06

0x2497,	// (0x0005d11f) dialer_ne_clear_pane_g1

0xec0e,	// (0x00069896) navi_pane_g2

0x95ad,	// (0x00064235) navi_pane_g3

0x0002,

0xf409,	// (0x0006a091) navi_pane_g

0xec90,	// (0x00069918) navi_pane_mv_g2

0xecb8,	// (0x00069940) navi_pane_mv_g5

0x95d2,	// (0x0006425a) navi_pane_mv_t1

0x74dc,	// (0x00062164) main_clock2_pane

0xb2af,	// (0x00065f37) main_clock2_list_pane_ParamLimits

0xb2af,	// (0x00065f37) main_clock2_list_pane

0xb2d5,	// (0x00065f5d) main_clock2_pane_t1_ParamLimits

0xb2d5,	// (0x00065f5d) main_clock2_pane_t1

0xb2ff,	// (0x00065f87) main_clock2_pane_t2_ParamLimits

0xb2ff,	// (0x00065f87) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x0006a483) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x0006a483) main_clock2_pane_t

0xb362,	// (0x00065fea) popup_clock_analogue_window_cp03_ParamLimits

0xb362,	// (0x00065fea) popup_clock_analogue_window_cp03

0xb37e,	// (0x00066006) popup_clock_digital_window_cp02_ParamLimits

0xb37e,	// (0x00066006) popup_clock_digital_window_cp02

0xb3cc,	// (0x00066054) main_clock2_list_single_pane_ParamLimits

0xb3cc,	// (0x00066054) main_clock2_list_single_pane

0xecf1,	// (0x00069979) list_highlight_pane_cp05

0x249f,	// (0x0005d127) main_clock2_list_single_pane_t1

0x815e,	// (0x00062de6) popup_toolbar_window_cp04_ParamLimits

0xa9e6,	// (0x0006566e) camera2_autofocus_pane_g2_ParamLimits

0xa9e6,	// (0x0006566e) camera2_autofocus_pane_g2

0xa9f2,	// (0x0006567a) camera2_autofocus_pane_g3_ParamLimits

0xa9f2,	// (0x0006567a) camera2_autofocus_pane_g3

0xa9fe,	// (0x00065686) camera2_autofocus_pane_g4_ParamLimits

0xa9fe,	// (0x00065686) camera2_autofocus_pane_g4

0xaa0a,	// (0x00065692) camera2_autofocus_pane_g5_ParamLimits

0xaa0a,	// (0x00065692) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x0006a3cc) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x0006a3cc) camera2_autofocus_pane_g

0xabac,	// (0x00065834) camera2_autofocus_pane_cp_g2

0xabb4,	// (0x0006583c) camera2_autofocus_pane_cp_g3

0xabbc,	// (0x00065844) camera2_autofocus_pane_cp_g4

0xabc4,	// (0x0006584c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0006a432) camera2_autofocus_pane_cp_g

0xb197,	// (0x00065e1f) popup_dialer_spcha_window

0x6827,	// (0x000614af) bg_popup_sub_pane_cp07

0x24ad,	// (0x0005d135) list_spcha_pane

0x24b5,	// (0x0005d13d) list_single_spcha_pane_ParamLimits

0x24b5,	// (0x0005d13d) list_single_spcha_pane

0x6827,	// (0x000614af) list_highlight_pane_cp06

0x24c6,	// (0x0005d14e) list_single_spcha_pane_t1

0x1691,	// (0x0005c319) popup_call2_audio_out_window_g4_ParamLimits

0x1691,	// (0x0005c319) popup_call2_audio_out_window_g4

0x6827,	// (0x000614af) main_imed2_pane

0x1cae,	// (0x0005c936) popup_imed_adjust2_window

0xa12c,	// (0x00064db4) popup_imed_trans_window_ParamLimits

0xa12c,	// (0x00064db4) popup_imed_trans_window

0x1f0f,	// (0x0005cb97) popup_blid_sat_info2_window_t1

0x1f1d,	// (0x0005cba5) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x0006a361) popup_blid_sat_info2_window_t

0xb474,	// (0x000660fc) aid_size_cell_colour_35

0xb48b,	// (0x00066113) aid_size_cell_colour_112

0xb4a2,	// (0x0006612a) aid_size_cell_effect

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp02

0xf086,	// (0x00069d0e) heading_imed_pane

0xb4bc,	// (0x00066144) listscroll_imed_pane

0x24d4,	// (0x0005d15c) heading_imed_pane_g1

0x24dc,	// (0x0005d164) heading_imed_pane_t1

0x24ea,	// (0x0005d172) grid_imed_colour_35_pane_ParamLimits

0x24ea,	// (0x0005d172) grid_imed_colour_35_pane

0xb4c8,	// (0x00066150) grid_imed_effect_pane

0x24fd,	// (0x0005d185) list_imed_aspect_pane

0xb4d4,	// (0x0006615c) scroll_pane_cp027_ParamLimits

0xb4d4,	// (0x0006615c) scroll_pane_cp027

0xb4e0,	// (0x00066168) cell_imed_effect_pane_ParamLimits

0xb4e0,	// (0x00066168) cell_imed_effect_pane

0x2505,	// (0x0005d18d) cell_imed_colour_pane_ParamLimits

0x2505,	// (0x0005d18d) cell_imed_colour_pane

0x253f,	// (0x0005d1c7) cell_imed_colour_pane_g1_ParamLimits

0x253f,	// (0x0005d1c7) cell_imed_colour_pane_g1

0x2550,	// (0x0005d1d8) hgihlgiht_grid_pane_cp016_ParamLimits

0x2550,	// (0x0005d1d8) hgihlgiht_grid_pane_cp016

0xb4f6,	// (0x0006617e) cell_imed_effect_pane_g1

0xb4fe,	// (0x00066186) grid_highlight_pane_cp017

0x2561,	// (0x0005d1e9) list_imed_single_pane_ParamLimits

0x2561,	// (0x0005d1e9) list_imed_single_pane

0x6827,	// (0x000614af) list_highlight_pane_cp07

0x2574,	// (0x0005d1fc) list_imed_aspect_pane_comp1_t1

0x1c88,	// (0x0005c910) bg_tb_trans_pane_cp05

0x2594,	// (0x0005d21c) popup_imed_adjust2_window_g1

0x25bb,	// (0x0005d243) popup_imed_adjust2_window_t1

0x25d3,	// (0x0005d25b) slider_imed_adjust_pane

0x25e7,	// (0x0005d26f) slider_imed_adjust_pane_g1

0x25f7,	// (0x0005d27f) slider_imed_adjust_pane_g2

0x2607,	// (0x0005d28f) slider_imed_adjust_pane_g3

0x2618,	// (0x0005d2a0) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x0006a4a0) slider_imed_adjust_pane_g

0xb507,	// (0x0006618f) aid_size_cell_clipart2

0xb513,	// (0x0006619b) grid_imed_clipart_pane

0x2629,	// (0x0005d2b1) scroll_pane_cp031

0xb51d,	// (0x000661a5) cell_imed_clipart_pane_ParamLimits

0xb51d,	// (0x000661a5) cell_imed_clipart_pane

0xb534,	// (0x000661bc) cell_imed_clipart_pane_g1

0x6827,	// (0x000614af) grid_highlight_pane_cp014

0xb2bb,	// (0x00065f43) main_clock2_pane_g1_ParamLimits

0xb2bb,	// (0x00065f43) main_clock2_pane_g1

0xb396,	// (0x0006601e) aid_call2_pane_cp10

0xb3a2,	// (0x0006602a) aid_call_pane_cp10

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g1

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g2

0xb3ae,	// (0x00066036) popup_clock_analogue_window_cp10_g3

0xb3ae,	// (0x00066036) popup_clock_analogue_window_cp10_g4

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x0006a48e) popup_clock_analogue_window_cp10_g

0xb3ba,	// (0x00066042) popup_clock_analogue_window_cp10_t1

0xb3de,	// (0x00066066) clock_digital_number_pane_cp10_ParamLimits

0xb3de,	// (0x00066066) clock_digital_number_pane_cp10

0xb3f6,	// (0x0006607e) clock_digital_number_pane_cp11_ParamLimits

0xb3f6,	// (0x0006607e) clock_digital_number_pane_cp11

0xb40e,	// (0x00066096) clock_digital_number_pane_cp12_ParamLimits

0xb40e,	// (0x00066096) clock_digital_number_pane_cp12

0xb426,	// (0x000660ae) clock_digital_number_pane_cp13_ParamLimits

0xb426,	// (0x000660ae) clock_digital_number_pane_cp13

0xb43e,	// (0x000660c6) clock_digital_separator_pane_cp10_ParamLimits

0xb43e,	// (0x000660c6) clock_digital_separator_pane_cp10

0xb456,	// (0x000660de) popup_clock_digital_window_cp02_t1_ParamLimits

0xb456,	// (0x000660de) popup_clock_digital_window_cp02_t1

0x7193,	// (0x00061e1b) clock_digital_number_pane_cp10_g1

0x7193,	// (0x00061e1b) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x0006a4a9) clock_digital_number_pane_cp10_g

0x7193,	// (0x00061e1b) clock_digital_separator_pane_cp10_g1

0x7193,	// (0x00061e1b) clock_digital_separator_pane_g2_cp10

0xecc1,	// (0x00069949) navi_pane_vded_g4

0xecca,	// (0x00069952) navi_pane_vded_g5

0xecd3,	// (0x0006995b) navi_pane_vded_t1

0x6827,	// (0x000614af) main_vded_pane

0xb53d,	// (0x000661c5) main_vded_pane_g1

0xb545,	// (0x000661cd) main_vded_pane_g2

0xb54d,	// (0x000661d5) main_vded_pane_g3

0x0002,

0xf826,	// (0x0006a4ae) main_vded_pane_g

0xb555,	// (0x000661dd) main_vded_pane_t1

0xb563,	// (0x000661eb) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0006a4b5) main_vded_pane_t

0xb571,	// (0x000661f9) vded_slider_pane

0xb579,	// (0x00066201) vded_video_pane

0x2631,	// (0x0005d2b9) vded_video_pane_g1

0xb581,	// (0x00066209) vded_video_pane_g2

0x20cb,	// (0x0005cd53) vded_video_pane_g3

0x0002,

0xf832,	// (0x0006a4ba) vded_video_pane_g

0x263b,	// (0x0005d2c3) vded_slider_pane_g1

0x1e1e,	// (0x0005caa6) vded_slider_pane_g2

0x2644,	// (0x0005d2cc) vded_slider_pane_g3

0x264d,	// (0x0005d2d5) vded_slider_pane_g4

0x2656,	// (0x0005d2de) vded_slider_pane_g5

0x0004,

0xf839,	// (0x0006a4c1) vded_slider_pane_g

0xb05b,	// (0x00065ce3) mup3_rocker_pane_ParamLimits

0xb05b,	// (0x00065ce3) mup3_rocker_pane

0xb58a,	// (0x00066212) mup3_control_keys_pane_g1

0xb592,	// (0x0006621a) mup3_control_keys_pane_g2

0xb59a,	// (0x00066222) mup3_control_keys_pane_g3

0xb5a2,	// (0x0006622a) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x0006a4cc) mup3_control_keys_pane_g

0x6a4b,	// (0x000616d3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a4b,	// (0x000616d3) popup_toolbar2_fixed_window_cp01

0xb073,	// (0x00065cfb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb073,	// (0x00065cfb) popup_toolbar2_fixed_window_cp02

0x0fd0,	// (0x0005bc58) popup_call2_audio_second_window_t4_ParamLimits

0x0fd0,	// (0x0005bc58) popup_call2_audio_second_window_t4

0x14fe,	// (0x0005c186) popup_call2_audio_first_window_t6_ParamLimits

0x14fe,	// (0x0005c186) popup_call2_audio_first_window_t6

0x1794,	// (0x0005c41c) popup_call2_audio_out_window_t6_ParamLimits

0x1794,	// (0x0005c41c) popup_call2_audio_out_window_t6

0x6827,	// (0x000614af) main_vitu_pane

0xb5b2,	// (0x0006623a) aid_size_cell_itu_ParamLimits

0xb5b2,	// (0x0006623a) aid_size_cell_itu

0x6a73,	// (0x000616fb) bg_popup_window_pane_cp08_ParamLimits

0x6a73,	// (0x000616fb) bg_popup_window_pane_cp08

0xb5c0,	// (0x00066248) field_vitu_entry_pane_ParamLimits

0xb5c0,	// (0x00066248) field_vitu_entry_pane

0xb5cd,	// (0x00066255) grid_vitu_function_pane_ParamLimits

0xb5cd,	// (0x00066255) grid_vitu_function_pane

0xb5d9,	// (0x00066261) grid_vitu_itu_pane_ParamLimits

0xb5d9,	// (0x00066261) grid_vitu_itu_pane

0xb5e5,	// (0x0006626d) cell_vitu_itu_pane_ParamLimits

0xb5e5,	// (0x0006626d) cell_vitu_itu_pane

0xb5fa,	// (0x00066282) cell_vitu_function_pane_ParamLimits

0xb5fa,	// (0x00066282) cell_vitu_function_pane

0xf078,	// (0x00069d00) bg_popup_sub_pane_cp08_ParamLimits

0xf078,	// (0x00069d00) bg_popup_sub_pane_cp08

0xb60c,	// (0x00066294) field_vitu_entry_pane_t1_ParamLimits

0xb60c,	// (0x00066294) field_vitu_entry_pane_t1

0x2677,	// (0x0005d2ff) field_vitu_entry_pane_t2_ParamLimits

0x2677,	// (0x0005d2ff) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0006a4da) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0006a4da) field_vitu_entry_pane_t

0x2694,	// (0x0005d31c) bg_button_pane_cp05_ParamLimits

0x2694,	// (0x0005d31c) bg_button_pane_cp05

0xb625,	// (0x000662ad) cell_vitu_itu_pane_g1

0xb63d,	// (0x000662c5) cell_vitu_itu_pane_t1_ParamLimits

0xb63d,	// (0x000662c5) cell_vitu_itu_pane_t1

0xb64f,	// (0x000662d7) cell_vitu_itu_pane_t2_ParamLimits

0xb64f,	// (0x000662d7) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x0006a4df) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x0006a4df) cell_vitu_itu_pane_t

0x26a2,	// (0x0005d32a) bg_button_pane_cp07

0xb684,	// (0x0006630c) cell_vitu_function_pane_g1

0x73b1,	// (0x00062039) main_calc_pane_g1

0x6861,	// (0x000614e9) aid_visual_content_pane

0x6827,	// (0x000614af) main_vradio_pane

0xb68d,	// (0x00066315) main_vradio_pane_g1_ParamLimits

0xb68d,	// (0x00066315) main_vradio_pane_g1

0x26ac,	// (0x0005d334) main_vradio_pane_g2_ParamLimits

0x26ac,	// (0x0005d334) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0006a4e6) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0006a4e6) main_vradio_pane_g

0xb69b,	// (0x00066323) main_vradio_pane_t1_ParamLimits

0xb69b,	// (0x00066323) main_vradio_pane_t1

0xb6ad,	// (0x00066335) main_vradio_pane_t2_ParamLimits

0xb6ad,	// (0x00066335) main_vradio_pane_t2

0x26b9,	// (0x0005d341) main_vradio_pane_t3_ParamLimits

0x26b9,	// (0x0005d341) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0006a4eb) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0006a4eb) main_vradio_pane_t

0xb6bf,	// (0x00066347) vradio_rocker_control_pane_ParamLimits

0xb6bf,	// (0x00066347) vradio_rocker_control_pane

0xb6cb,	// (0x00066353) vradio_station_info_pane_ParamLimits

0xb6cb,	// (0x00066353) vradio_station_info_pane

0x26cb,	// (0x0005d353) vradio_frequency_info_pane_ParamLimits

0x26cb,	// (0x0005d353) vradio_frequency_info_pane

0x20cb,	// (0x0005cd53) vradio_station_info_pane_g1

0x26da,	// (0x0005d362) vradio_station_info_pane_t1_ParamLimits

0x26da,	// (0x0005d362) vradio_station_info_pane_t1

0x26fc,	// (0x0005d384) vradio_station_info_pane_t2_ParamLimits

0x26fc,	// (0x0005d384) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0006a4f2) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0006a4f2) vradio_station_info_pane_t

0x270e,	// (0x0005d396) vradio_tuning_pane

0x2716,	// (0x0005d39e) vradio_rocker_control_pane_g1

0x271e,	// (0x0005d3a6) vradio_rocker_control_pane_g2

0x2726,	// (0x0005d3ae) vradio_rocker_control_pane_g3

0x272e,	// (0x0005d3b6) vradio_rocker_control_pane_g4

0x2736,	// (0x0005d3be) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0006a4f7) vradio_rocker_control_pane_g

0xb6d8,	// (0x00066360) vradio_frequency_info_pane_g1

0x273e,	// (0x0005d3c6) vradio_frequency_info_pane_t1_ParamLimits

0x273e,	// (0x0005d3c6) vradio_frequency_info_pane_t1

0xb6e0,	// (0x00066368) vradio_tuning_pane_g1

0xb6e9,	// (0x00066371) vradio_tuning_pane_t1

0x68a0,	// (0x00061528) area_side_right_pane_ParamLimits

0x68a0,	// (0x00061528) area_side_right_pane

0x1c4f,	// (0x0005c8d7) status_small_pane_g1

0x1c57,	// (0x0005c8df) status_small_pane_g2

0x1c60,	// (0x0005c8e8) status_small_pane_g3

0x1c69,	// (0x0005c8f1) status_small_pane_g4

0x0003,

0xf62f,	// (0x0006a2b7) status_small_pane_g

0x1c72,	// (0x0005c8fa) status_small_pane_t1

0x6827,	// (0x000614af) main_video3_pane

0x2752,	// (0x0005d3da) cams_zoom_vslider_pane

0x275a,	// (0x0005d3e2) image3_wide_pane_ParamLimits

0x275a,	// (0x0005d3e2) image3_wide_pane

0x2774,	// (0x0005d3fc) image3_wide_small_pane

0x277e,	// (0x0005d406) main_video3_pane_g1_ParamLimits

0x277e,	// (0x0005d406) main_video3_pane_g1

0x279a,	// (0x0005d422) main_video3_pane_g2_ParamLimits

0x279a,	// (0x0005d422) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0006a502) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0006a502) main_video3_pane_g

0x27b6,	// (0x0005d43e) main_video3_pane_t1_ParamLimits

0x27b6,	// (0x0005d43e) main_video3_pane_t1

0x27e1,	// (0x0005d469) main_video3_pane_t2_ParamLimits

0x27e1,	// (0x0005d469) main_video3_pane_t2

0x280c,	// (0x0005d494) main_video3_pane_t3_ParamLimits

0x280c,	// (0x0005d494) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0006a507) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0006a507) main_video3_pane_t

0x2837,	// (0x0005d4bf) cams_zoom_vslider_pane_g1

0x2840,	// (0x0005d4c8) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0006a50e) cams_zoom_vslider_pane_g

0x2848,	// (0x0005d4d0) small_slider_vertical_pane

0x20cb,	// (0x0005cd53) small_slider_vertical_pane_g1

0x20cb,	// (0x0005cd53) small_slider_vertical_pane_g2

0x2850,	// (0x0005d4d8) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0006a513) small_slider_vertical_pane_g

0x6827,	// (0x000614af) main_hwr_training_pane

0x2859,	// (0x0005d4e1) hwr_training_instruct_pane_ParamLimits

0x2859,	// (0x0005d4e1) hwr_training_instruct_pane

0xb6f8,	// (0x00066380) hwr_training_navi_pane_ParamLimits

0xb6f8,	// (0x00066380) hwr_training_navi_pane

0xb70c,	// (0x00066394) hwr_training_write_pane_ParamLimits

0xb70c,	// (0x00066394) hwr_training_write_pane

0x6827,	// (0x000614af) bg_frame_shadow_pane

0x2888,	// (0x0005d510) hwr_training_write_pane_g1

0x2890,	// (0x0005d518) hwr_training_write_pane_g2

0x2898,	// (0x0005d520) hwr_training_write_pane_g3

0x28a0,	// (0x0005d528) hwr_training_write_pane_g4

0x28a8,	// (0x0005d530) hwr_training_write_pane_g5

0x28b0,	// (0x0005d538) hwr_training_write_pane_g6

0x28b8,	// (0x0005d540) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0006a51a) hwr_training_write_pane_g

0xb73a,	// (0x000663c2) hwr_training_navi_pane_g1_ParamLimits

0xb73a,	// (0x000663c2) hwr_training_navi_pane_g1

0xb74c,	// (0x000663d4) hwr_training_navi_pane_g2_ParamLimits

0xb74c,	// (0x000663d4) hwr_training_navi_pane_g2

0xb75e,	// (0x000663e6) hwr_training_navi_pane_g3_ParamLimits

0xb75e,	// (0x000663e6) hwr_training_navi_pane_g3

0xb76e,	// (0x000663f6) hwr_training_navi_pane_g4_ParamLimits

0xb76e,	// (0x000663f6) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0006a529) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0006a529) hwr_training_navi_pane_g

0xb788,	// (0x00066410) hwr_training_navi_pane_t1

0xb796,	// (0x0006641e) list_single_hwr_training_instruct_pane_ParamLimits

0xb796,	// (0x0006641e) list_single_hwr_training_instruct_pane

0x28c0,	// (0x0005d548) list_single_hwr_training_instruct_pane_t1

0x200b,	// (0x0005cc93) bg_frame_shadow_pane_g1

0x28cf,	// (0x0005d557) bg_frame_shadow_pane_g2

0x28d7,	// (0x0005d55f) bg_frame_shadow_pane_g3

0x28df,	// (0x0005d567) bg_frame_shadow_pane_g4

0x28e7,	// (0x0005d56f) bg_frame_shadow_pane_g5

0x28ef,	// (0x0005d577) bg_frame_shadow_pane_g6

0x28f7,	// (0x0005d57f) bg_frame_shadow_pane_g7

0x7724,	// (0x000623ac) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0006a534) bg_frame_shadow_pane_g

0x6827,	// (0x000614af) main_video_tele_dialer_pane

0xb7ae,	// (0x00066436) aid_size_cell_video_keypad_ParamLimits

0xb7ae,	// (0x00066436) aid_size_cell_video_keypad

0xb7be,	// (0x00066446) grid_video_dialer_keypad_pane_ParamLimits

0xb7be,	// (0x00066446) grid_video_dialer_keypad_pane

0xb7ee,	// (0x00066476) video_down_pane_cp_ParamLimits

0xb7ee,	// (0x00066476) video_down_pane_cp

0xb816,	// (0x0006649e) cell_video_dialer_keypad_pane_ParamLimits

0xb816,	// (0x0006649e) cell_video_dialer_keypad_pane

0x28ff,	// (0x0005d587) bg_button_pane_cp08_ParamLimits

0x28ff,	// (0x0005d587) bg_button_pane_cp08

0xb82b,	// (0x000664b3) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb82b,	// (0x000664b3) cell_video_dialer_keypad_pane_g1

0xb04f,	// (0x00065cd7) mup3_rocker2_pane_ParamLimits

0xb04f,	// (0x00065cd7) mup3_rocker2_pane

0x20cb,	// (0x0005cd53) mup3_rocker2_pane_g1

0xa0c6,	// (0x00064d4e) main_dialer2_pane

0x6827,	// (0x000614af) main_mp4_pane

0xb86a,	// (0x000664f2) main_mp4_pane_g1_ParamLimits

0xb86a,	// (0x000664f2) main_mp4_pane_g1

0xb878,	// (0x00066500) main_mp4_pane_g2_ParamLimits

0xb878,	// (0x00066500) main_mp4_pane_g2

0xb886,	// (0x0006650e) main_mp4_pane_g3_ParamLimits

0xb886,	// (0x0006650e) main_mp4_pane_g3

0xb8bb,	// (0x00066543) main_mp4_pane_g4_ParamLimits

0xb8bb,	// (0x00066543) main_mp4_pane_g4

0xb8e9,	// (0x00066571) main_mp4_pane_g5_ParamLimits

0xb8e9,	// (0x00066571) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0006a554) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0006a554) main_mp4_pane_g

0xb945,	// (0x000665cd) main_mp4_pane_t1_ParamLimits

0xb945,	// (0x000665cd) main_mp4_pane_t1

0xb99d,	// (0x00066625) main_mp4_pane_t2_ParamLimits

0xb99d,	// (0x00066625) main_mp4_pane_t2

0x290b,	// (0x0005d593) main_mp4_pane_t3_ParamLimits

0x290b,	// (0x0005d593) main_mp4_pane_t3

0xb9ef,	// (0x00066677) main_mp4_pane_t4_ParamLimits

0xb9ef,	// (0x00066677) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x0006a561) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x0006a561) main_mp4_pane_t

0xba2f,	// (0x000666b7) mp4_progress_pane_ParamLimits

0xba2f,	// (0x000666b7) mp4_progress_pane

0xba73,	// (0x000666fb) mp4_rocker_pane_ParamLimits

0xba73,	// (0x000666fb) mp4_rocker_pane

0x2939,	// (0x0005d5c1) mp4_progress_pane_t1

0x2950,	// (0x0005d5d8) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0006a56a) mp4_progress_pane_t

0x2967,	// (0x0005d5ef) mup_progress_pane_cp04

0x20cb,	// (0x0005cd53) mp4_rocker_pane_g1

0xba91,	// (0x00066719) aid_cell_size_keypad2_ParamLimits

0xba91,	// (0x00066719) aid_cell_size_keypad2

0xbaa1,	// (0x00066729) dialer2_ne_pane_ParamLimits

0xbaa1,	// (0x00066729) dialer2_ne_pane

0xbaad,	// (0x00066735) grid_dialer2_keypad_pane_ParamLimits

0xbaad,	// (0x00066735) grid_dialer2_keypad_pane

0x31d9,	// (0x0005de61) bg_popup_call_pane_cp07_ParamLimits

0x31d9,	// (0x0005de61) bg_popup_call_pane_cp07

0xbab9,	// (0x00066741) dialer2_ne_pane_t1_ParamLimits

0xbab9,	// (0x00066741) dialer2_ne_pane_t1

0xbade,	// (0x00066766) cell_dialer2_keypad_pane_ParamLimits

0xbade,	// (0x00066766) cell_dialer2_keypad_pane

0x298f,	// (0x0005d617) bg_button_pane_pane_cp04_ParamLimits

0x298f,	// (0x0005d617) bg_button_pane_pane_cp04

0xbaf3,	// (0x0006677b) cell_dialer2_keypad_pane_g1_ParamLimits

0xbaf3,	// (0x0006677b) cell_dialer2_keypad_pane_g1

0x8028,	// (0x00062cb0) aid_placing_vt_set_content_ParamLimits

0x8028,	// (0x00062cb0) aid_placing_vt_set_content

0x804e,	// (0x00062cd6) aid_placing_vt_set_title_ParamLimits

0x804e,	// (0x00062cd6) aid_placing_vt_set_title

0x6827,	// (0x000614af) main_image3_pane

0xbb67,	// (0x000667ef) area_side_right_pane_cp01_ParamLimits

0xbb67,	// (0x000667ef) area_side_right_pane_cp01

0x37df,	// (0x0005e467) main_image3_pane_g1_ParamLimits

0x37df,	// (0x0005e467) main_image3_pane_g1

0xbb94,	// (0x0006681c) main_image3_pane_g2_ParamLimits

0xbb94,	// (0x0006681c) main_image3_pane_g2

0xbbab,	// (0x00066833) main_image3_pane_g3_ParamLimits

0xbbab,	// (0x00066833) main_image3_pane_g3

0xbbc2,	// (0x0006684a) main_image3_pane_g4_ParamLimits

0xbbc2,	// (0x0006684a) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x0006a579) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x0006a579) main_image3_pane_g

0xbbd9,	// (0x00066861) main_image3_pane_t1_ParamLimits

0xbbd9,	// (0x00066861) main_image3_pane_t1

0xbbfe,	// (0x00066886) main_image3_pane_t2_ParamLimits

0xbbfe,	// (0x00066886) main_image3_pane_t2

0xbc1d,	// (0x000668a5) main_image3_pane_t3_ParamLimits

0xbc1d,	// (0x000668a5) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x0006a582) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x0006a582) main_image3_pane_t

0x6a73,	// (0x000616fb) grid_sctrl_middle_pane_cp01_ParamLimits

0x6a73,	// (0x000616fb) grid_sctrl_middle_pane_cp01

0xbc78,	// (0x00066900) cell_sctrl_middle_pane_cp01_ParamLimits

0xbc78,	// (0x00066900) cell_sctrl_middle_pane_cp01

0xbc89,	// (0x00066911) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbc89,	// (0x00066911) cell_sctrl_middle_pane_cp01_g1

0x6827,	// (0x000614af) main_call4_pane

0xbc96,	// (0x0006691e) aid_size_button_call4_ParamLimits

0xbc96,	// (0x0006691e) aid_size_button_call4

0xbcc0,	// (0x00066948) call4_windows_pane_ParamLimits

0xbcc0,	// (0x00066948) call4_windows_pane

0xbcd4,	// (0x0006695c) grid_call4_button_pane_ParamLimits

0xbcd4,	// (0x0006695c) grid_call4_button_pane

0x29b3,	// (0x0005d63b) call4_windows_conf_pane

0xbcee,	// (0x00066976) popup_call4_audio_first_window_ParamLimits

0xbcee,	// (0x00066976) popup_call4_audio_first_window

0xbd0e,	// (0x00066996) popup_call4_audio_second_window_ParamLimits

0xbd0e,	// (0x00066996) popup_call4_audio_second_window

0x29e6,	// (0x0005d66e) popup_call4_audio_wait_window_ParamLimits

0x29e6,	// (0x0005d66e) popup_call4_audio_wait_window

0xbd20,	// (0x000669a8) cell_call4_button_pane_ParamLimits

0xbd20,	// (0x000669a8) cell_call4_button_pane

0x7649,	// (0x000622d1) bg_button_pane_cp09_ParamLimits

0x7649,	// (0x000622d1) bg_button_pane_cp09

0xbd43,	// (0x000669cb) cell_call4_button_pane_g1_ParamLimits

0xbd43,	// (0x000669cb) cell_call4_button_pane_g1

0xbd50,	// (0x000669d8) cell_call4_button_pane_t1_ParamLimits

0xbd50,	// (0x000669d8) cell_call4_button_pane_t1

0x2a2c,	// (0x0005d6b4) popup_call4_audio_conf_window_ParamLimits

0x2a2c,	// (0x0005d6b4) popup_call4_audio_conf_window

0xb080,	// (0x00065d08) mup3_progress_pane_t1_ParamLimits

0xb096,	// (0x00065d1e) mup3_progress_pane_t2_ParamLimits

0x23e9,	// (0x0005d071) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x0006a45b) mup3_progress_pane_t_ParamLimits

0x2400,	// (0x0005d088) mup_progress_pane_cp03_ParamLimits

0xb5aa,	// (0x00066232) mup3_control_keys_pane_g4_copy1

0xba5d,	// (0x000666e5) mp4_rocker2_pane_ParamLimits

0xba5d,	// (0x000666e5) mp4_rocker2_pane

0x2a48,	// (0x0005d6d0) mp4_rocker2_pane_g1

0x2a40,	// (0x0005d6c8) mp4_rocker2_pane_g2

0xbd62,	// (0x000669ea) mp4_rocker2_pane_g3

0xbd6a,	// (0x000669f2) mp4_rocker2_pane_g4

0xbd72,	// (0x000669fa) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x0006a58b) mp4_rocker2_pane_g

0x6827,	// (0x000614af) main_camera4_pane

0x6827,	// (0x000614af) main_video4_pane

0xb7ca,	// (0x00066452) main_video_tele_dialer_pane_t1_ParamLimits

0xb7ca,	// (0x00066452) main_video_tele_dialer_pane_t1

0xb7dc,	// (0x00066464) main_video_tele_dialer_pane_t2_ParamLimits

0xb7dc,	// (0x00066464) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0006a545) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0006a545) main_video_tele_dialer_pane_t

0xbd90,	// (0x00066a18) cam4_autofocus_pane_ParamLimits

0xbd90,	// (0x00066a18) cam4_autofocus_pane

0xbda6,	// (0x00066a2e) cam4_image_uncrop_pane_ParamLimits

0xbda6,	// (0x00066a2e) cam4_image_uncrop_pane

0xbdbb,	// (0x00066a43) cam4_indicators_pane_ParamLimits

0xbdbb,	// (0x00066a43) cam4_indicators_pane

0xbdd5,	// (0x00066a5d) main_camera4_pane_g1_ParamLimits

0xbdd5,	// (0x00066a5d) main_camera4_pane_g1

0xbde1,	// (0x00066a69) main_camera4_pane_g2_ParamLimits

0xbde1,	// (0x00066a69) main_camera4_pane_g2

0xbde1,	// (0x00066a69) main_camera4_pane_g3_ParamLimits

0xbde1,	// (0x00066a69) main_camera4_pane_g3

0xbded,	// (0x00066a75) main_camera4_pane_g4_ParamLimits

0xbded,	// (0x00066a75) main_camera4_pane_g4

0xbdf9,	// (0x00066a81) main_camera4_pane_g5_ParamLimits

0xbdf9,	// (0x00066a81) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0006a596) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0006a596) main_camera4_pane_g

0xbe13,	// (0x00066a9b) main_camera4_pane_t1_ParamLimits

0xbe13,	// (0x00066a9b) main_camera4_pane_t1

0x22fa,	// (0x0005cf82) bg_tb_trans_pane_cp06

0xbe63,	// (0x00066aeb) cam4_indicators_pane_g1

0xbe73,	// (0x00066afb) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x0006a5b1) cam4_indicators_pane_g

0xbe93,	// (0x00066b1b) cam4_indicators_pane_t1

0xbebb,	// (0x00066b43) main_video4_pane_g1_ParamLimits

0xbebb,	// (0x00066b43) main_video4_pane_g1

0xbde1,	// (0x00066a69) main_video4_pane_g2_ParamLimits

0xbde1,	// (0x00066a69) main_video4_pane_g2

0xbde1,	// (0x00066a69) main_video4_pane_g3_ParamLimits

0xbde1,	// (0x00066a69) main_video4_pane_g3

0xbded,	// (0x00066a75) main_video4_pane_g4_ParamLimits

0xbded,	// (0x00066a75) main_video4_pane_g4

0x0004,

0xf930,	// (0x0006a5b8) main_video4_pane_g_ParamLimits

0xf930,	// (0x0006a5b8) main_video4_pane_g

0xbecf,	// (0x00066b57) vid4_indicators_pane_ParamLimits

0xbecf,	// (0x00066b57) vid4_indicators_pane

0xbeed,	// (0x00066b75) video4_image_uncrop_cif_pane_ParamLimits

0xbeed,	// (0x00066b75) video4_image_uncrop_cif_pane

0xbefa,	// (0x00066b82) video4_image_uncrop_nhd_pane_ParamLimits

0xbefa,	// (0x00066b82) video4_image_uncrop_nhd_pane

0xbda6,	// (0x00066a2e) video4_image_uncrop_vga_pane_ParamLimits

0xbda6,	// (0x00066a2e) video4_image_uncrop_vga_pane

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp07

0xbe63,	// (0x00066aeb) vid4_indicators_pane_g1

0xbf07,	// (0x00066b8f) vid4_indicators_pane_g2

0xbf17,	// (0x00066b9f) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0006a5c3) vid4_indicators_pane_g

0xbf44,	// (0x00066bcc) vid4_indicators_pane_t1

0xbf5e,	// (0x00066be6) cam4_autofocus_pane_g1

0xbf66,	// (0x00066bee) cam4_autofocus_pane_g2

0xbf6e,	// (0x00066bf6) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x0006a5ce) cam4_autofocus_pane_g

0xbf76,	// (0x00066bfe) cam4_autofocus_pane_g3_copy1

0xb7fa,	// (0x00066482) video_down_pane_cp_t1

0xb808,	// (0x00066490) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0006a54a) video_down_pane_cp_t

0x6a73,	// (0x000616fb) popup_vitu2_window_ParamLimits

0x6a73,	// (0x000616fb) popup_vitu2_window

0xbf7e,	// (0x00066c06) aid_size_cell2_itu2_ParamLimits

0xbf7e,	// (0x00066c06) aid_size_cell2_itu2

0xbfa0,	// (0x00066c28) aid_size_cell_itu2_ParamLimits

0xbfa0,	// (0x00066c28) aid_size_cell_itu2

0x31d9,	// (0x0005de61) bg_popup_window_pane_cp09_ParamLimits

0x31d9,	// (0x0005de61) bg_popup_window_pane_cp09

0xbfde,	// (0x00066c66) field_vitu2_entry_pane_ParamLimits

0xbfde,	// (0x00066c66) field_vitu2_entry_pane

0xbff4,	// (0x00066c7c) grid_vitu2_function_pane_ParamLimits

0xbff4,	// (0x00066c7c) grid_vitu2_function_pane

0xc026,	// (0x00066cae) grid_vitu2_itu_pane_ParamLimits

0xc026,	// (0x00066cae) grid_vitu2_itu_pane

0xc07c,	// (0x00066d04) cell_vitu2_itu_pane_ParamLimits

0xc07c,	// (0x00066d04) cell_vitu2_itu_pane

0xc091,	// (0x00066d19) cell_vitu2_function_pane_ParamLimits

0xc091,	// (0x00066d19) cell_vitu2_function_pane

0x2a50,	// (0x0005d6d8) bg_popup_call_pane_cp08_ParamLimits

0x2a50,	// (0x0005d6d8) bg_popup_call_pane_cp08

0x2a69,	// (0x0005d6f1) field_vitu2_entry_pane_g1

0x2a75,	// (0x0005d6fd) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0006a5d5) field_vitu2_entry_pane_g

0x5ac1,	// (0x00060749) field_vitu2_entry_pane_t1_ParamLimits

0x5ac1,	// (0x00060749) field_vitu2_entry_pane_t1

0x5adc,	// (0x00060764) field_vitu2_entry_pane_t2_ParamLimits

0x5adc,	// (0x00060764) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0006a5dc) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0006a5dc) field_vitu2_entry_pane_t

0xc0d0,	// (0x00066d58) bg_button_pane_cp010_ParamLimits

0xc0d0,	// (0x00066d58) bg_button_pane_cp010

0xc0de,	// (0x00066d66) cell_vitu2_itu_pane_g1

0xc0fc,	// (0x00066d84) cell_vitu2_itu_pane_t1_ParamLimits

0xc0fc,	// (0x00066d84) cell_vitu2_itu_pane_t1

0x5af9,	// (0x00060781) cell_vitu2_itu_pane_t2_ParamLimits

0x5af9,	// (0x00060781) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0006a5e6) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0006a5e6) cell_vitu2_itu_pane_t

0xf078,	// (0x00069d00) bg_button_pane_cp011

0xc14e,	// (0x00066dd6) cell_vitu2_function_pane_g1

0x6827,	// (0x000614af) main_myfav_hc_pane

0xbc5d,	// (0x000668e5) popup_image3_note_pane_ParamLimits

0xbc5d,	// (0x000668e5) popup_image3_note_pane

0xbc69,	// (0x000668f1) popup_image3_tool_bar_pane_ParamLimits

0xbc69,	// (0x000668f1) popup_image3_tool_bar_pane

0x5b67,	// (0x000607ef) cell_vitu2_itu_pane_t3_ParamLimits

0x5b67,	// (0x000607ef) cell_vitu2_itu_pane_t3

0x6827,	// (0x000614af) bg_popup_trans_pane

0x2ad0,	// (0x0005d758) grid_image3_tool_bar_pane

0x2ada,	// (0x0005d762) bg_popup_trans_pane_g1

0x85c8,	// (0x00063250) bg_popup_trans_pane_g2

0x2ae2,	// (0x0005d76a) bg_popup_trans_pane_g3

0x2aea,	// (0x0005d772) bg_popup_trans_pane_g4

0x2af2,	// (0x0005d77a) bg_popup_trans_pane_g5

0x2afa,	// (0x0005d782) bg_popup_trans_pane_g6

0x2b02,	// (0x0005d78a) bg_popup_trans_pane_g7

0x2b0a,	// (0x0005d792) bg_popup_trans_pane_g8

0x85a8,	// (0x00063230) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0006a5ed) bg_popup_trans_pane_g

0xf092,	// (0x00069d1a) cell_image3_tool_bar_pane_ParamLimits

0xf092,	// (0x00069d1a) cell_image3_tool_bar_pane

0x20cb,	// (0x0005cd53) cell_image3_tool_bar_pane_g1

0x6827,	// (0x000614af) bg_popup_trans_pane_cp1

0x2b12,	// (0x0005d79a) popup_image3_note_pane_t1

0x2b20,	// (0x0005d7a8) popup_image3_note_pane_t2

0x2b2e,	// (0x0005d7b6) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x0006a600) popup_image3_note_pane_t

0x2b3c,	// (0x0005d7c4) popup_image3_note_pane_t3_copy1

0xc162,	// (0x00066dea) bg_myfav_hc_instruction_pane_ParamLimits

0xc162,	// (0x00066dea) bg_myfav_hc_instruction_pane

0xc174,	// (0x00066dfc) cell_myfav_contact_pane_ParamLimits

0xc174,	// (0x00066dfc) cell_myfav_contact_pane

0xc18e,	// (0x00066e16) cell_myfav_contact_pane_cp1_ParamLimits

0xc18e,	// (0x00066e16) cell_myfav_contact_pane_cp1

0xc1a4,	// (0x00066e2c) cell_myfav_contact_pane_cp2_ParamLimits

0xc1a4,	// (0x00066e2c) cell_myfav_contact_pane_cp2

0xc1ba,	// (0x00066e42) cell_myfav_contact_pane_cp3_ParamLimits

0xc1ba,	// (0x00066e42) cell_myfav_contact_pane_cp3

0xc1cf,	// (0x00066e57) cell_myfav_contact_pane_cp4_ParamLimits

0xc1cf,	// (0x00066e57) cell_myfav_contact_pane_cp4

0xc1e3,	// (0x00066e6b) cell_myfav_contact_pane_cp5_ParamLimits

0xc1e3,	// (0x00066e6b) cell_myfav_contact_pane_cp5

0xc1f7,	// (0x00066e7f) cell_myfav_contact_pane_cp6_ParamLimits

0xc1f7,	// (0x00066e7f) cell_myfav_contact_pane_cp6

0xc20b,	// (0x00066e93) cell_myfav_contact_pane_cp7_ParamLimits

0xc20b,	// (0x00066e93) cell_myfav_contact_pane_cp7

0x2b4a,	// (0x0005d7d2) listscroll_gen_pane_cp05

0xc223,	// (0x00066eab) main_myfav_hc_pane_g1_ParamLimits

0xc223,	// (0x00066eab) main_myfav_hc_pane_g1

0xc239,	// (0x00066ec1) main_myfav_hc_pane_g2_ParamLimits

0xc239,	// (0x00066ec1) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0006a607) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0006a607) main_myfav_hc_pane_g

0xc263,	// (0x00066eeb) main_myfav_hc_pane_t1_ParamLimits

0xc263,	// (0x00066eeb) main_myfav_hc_pane_t1

0x2b53,	// (0x0005d7db) main_myfav_hc_pane_t2_ParamLimits

0x2b53,	// (0x0005d7db) main_myfav_hc_pane_t2

0x2b65,	// (0x0005d7ed) main_myfav_hc_pane_t3_ParamLimits

0x2b65,	// (0x0005d7ed) main_myfav_hc_pane_t3

0xc278,	// (0x00066f00) main_myfav_hc_pane_t4_ParamLimits

0xc278,	// (0x00066f00) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0006a60e) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0006a60e) main_myfav_hc_pane_t

0x20cb,	// (0x0005cd53) bg_myfav_hc_instruction_pane_g1

0x2b77,	// (0x0005d7ff) cell_myfav_contact_pane_g1_ParamLimits

0x2b77,	// (0x0005d7ff) cell_myfav_contact_pane_g1

0x2b77,	// (0x0005d7ff) cell_myfav_contact_pane_g2_ParamLimits

0x2b77,	// (0x0005d7ff) cell_myfav_contact_pane_g2

0x2b83,	// (0x0005d80b) cell_myfav_contact_pane_g3_ParamLimits

0x2b83,	// (0x0005d80b) cell_myfav_contact_pane_g3

0x23d3,	// (0x0005d05b) cell_myfav_contact_pane_g4_ParamLimits

0x23d3,	// (0x0005d05b) cell_myfav_contact_pane_g4

0x2b90,	// (0x0005d818) cell_myfav_contact_pane_g5_ParamLimits

0x2b90,	// (0x0005d818) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0006a619) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0006a619) cell_myfav_contact_pane_g

0xc24f,	// (0x00066ed7) main_myfav_hc_pane_g3_ParamLimits

0xc24f,	// (0x00066ed7) main_myfav_hc_pane_g3

0x69c1,	// (0x00061649) popup_adpt_find_window

0xc29c,	// (0x00066f24) afind_page_pane_ParamLimits

0xc29c,	// (0x00066f24) afind_page_pane

0xc2a9,	// (0x00066f31) aid_size_cell_afind_ParamLimits

0xc2a9,	// (0x00066f31) aid_size_cell_afind

0xc2c3,	// (0x00066f4b) bg_popup_sub_pane_cp09_ParamLimits

0xc2c3,	// (0x00066f4b) bg_popup_sub_pane_cp09

0xc2d0,	// (0x00066f58) find_pane_cp01_ParamLimits

0xc2d0,	// (0x00066f58) find_pane_cp01

0x2b9c,	// (0x0005d824) grid_afind_control_pane_ParamLimits

0x2b9c,	// (0x0005d824) grid_afind_control_pane

0xc2dd,	// (0x00066f65) grid_afind_pane_ParamLimits

0xc2dd,	// (0x00066f65) grid_afind_pane

0xc2f3,	// (0x00066f7b) cell_afind_pane_ParamLimits

0xc2f3,	// (0x00066f7b) cell_afind_pane

0x20cb,	// (0x0005cd53) afind_page_pane_g1

0xc329,	// (0x00066fb1) afind_page_pane_g2

0xc332,	// (0x00066fba) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0006a624) afind_page_pane_g

0xc33b,	// (0x00066fc3) afind_page_pane_t1

0x2bb0,	// (0x0005d838) cell_afind_grid_control_pane_ParamLimits

0x2bb0,	// (0x0005d838) cell_afind_grid_control_pane

0x298f,	// (0x0005d617) bg_button_pane_cp69_ParamLimits

0x298f,	// (0x0005d617) bg_button_pane_cp69

0xc35b,	// (0x00066fe3) cell_afind_pane_g1_ParamLimits

0xc35b,	// (0x00066fe3) cell_afind_pane_g1

0xc368,	// (0x00066ff0) cell_afind_pane_t1_ParamLimits

0xc368,	// (0x00066ff0) cell_afind_pane_t1

0x7fc3,	// (0x00062c4b) bg_button_pane_cp72

0x2bbf,	// (0x0005d847) cell_afind_grid_control_pane_g1

0x9cfe,	// (0x00064986) aid_image_placing_area_ParamLimits

0x9cfe,	// (0x00064986) aid_image_placing_area

0x265f,	// (0x0005d2e7) field_vitu_entry_pane_g1_ParamLimits

0x265f,	// (0x0005d2e7) field_vitu_entry_pane_g1

0x266b,	// (0x0005d2f3) field_vitu_entry_pane_g2_ParamLimits

0x266b,	// (0x0005d2f3) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0006a4d5) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0006a4d5) field_vitu_entry_pane_g

0xb625,	// (0x000662ad) cell_vitu_itu_pane_g1_ParamLimits

0xb667,	// (0x000662ef) cell_vitu_itu_pane_t3_ParamLimits

0xb667,	// (0x000662ef) cell_vitu_itu_pane_t3

0x2939,	// (0x0005d5c1) mp4_progress_pane_t1_ParamLimits

0x2950,	// (0x0005d5d8) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0006a56a) mp4_progress_pane_t_ParamLimits

0x2967,	// (0x0005d5ef) mup_progress_pane_cp04_ParamLimits

0xc28a,	// (0x00066f12) main_myfav_hc_pane_t5_ParamLimits

0xc28a,	// (0x00066f12) main_myfav_hc_pane_t5

0x57ac,	// (0x00060434) aid_zoom_text_primary

0x69c1,	// (0x00061649) popup_adpt_find_window_ParamLimits

0xf078,	// (0x00069d00) main_cam_set_pane

0xbdc9,	// (0x00066a51) cam4_zoom_pane_ParamLimits

0xbdc9,	// (0x00066a51) cam4_zoom_pane

0xc37a,	// (0x00067002) main_cam_set_pane_g1_ParamLimits

0xc37a,	// (0x00067002) main_cam_set_pane_g1

0xc388,	// (0x00067010) main_cam_set_pane_g2_ParamLimits

0xc388,	// (0x00067010) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0006a62b) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0006a62b) main_cam_set_pane_g

0xc394,	// (0x0006701c) main_cam_set_pane_t1_ParamLimits

0xc394,	// (0x0006701c) main_cam_set_pane_t1

0xc3a6,	// (0x0006702e) main_cset_listscroll_pane_ParamLimits

0xc3a6,	// (0x0006702e) main_cset_listscroll_pane

0xc3cf,	// (0x00067057) main_cset_slider_pane_ParamLimits

0xc3cf,	// (0x00067057) main_cset_slider_pane

0x2bd0,	// (0x0005d858) main_cset_list_pane_ParamLimits

0x2bd0,	// (0x0005d858) main_cset_list_pane

0x2be0,	// (0x0005d868) scroll_pane_cp028

0xc3ee,	// (0x00067076) aid_area_touch_slider

0xc40a,	// (0x00067092) cset_slider_pane

0xc434,	// (0x000670bc) main_cset_slider_pane_g1

0xc449,	// (0x000670d1) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x0006a630) main_cset_slider_pane_g

0x2c19,	// (0x0005d8a1) main_cset_slider_pane_t1

0xc505,	// (0x0006718d) main_cset_slider_pane_t2

0xc51f,	// (0x000671a7) main_cset_slider_pane_t3

0xc539,	// (0x000671c1) main_cset_slider_pane_t4

0xc553,	// (0x000671db) main_cset_slider_pane_t5

0xc56d,	// (0x000671f5) main_cset_slider_pane_t6

0xc582,	// (0x0006720a) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0006a655) main_cset_slider_pane_t

0xc686,	// (0x0006730e) cset_list_set_pane_ParamLimits

0xc686,	// (0x0006730e) cset_list_set_pane

0xc696,	// (0x0006731e) aid_position_infowindow_above

0xc69e,	// (0x00067326) aid_position_infowindow_below

0xc6a6,	// (0x0006732e) cset_list_set_pane_g1_ParamLimits

0xc6a6,	// (0x0006732e) cset_list_set_pane_g1

0x5bb4,	// (0x0006083c) cset_list_set_pane_g3_ParamLimits

0x5bb4,	// (0x0006083c) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x0006a674) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x0006a674) cset_list_set_pane_g

0x5bc3,	// (0x0006084b) cset_list_set_pane_t1_ParamLimits

0x5bc3,	// (0x0006084b) cset_list_set_pane_t1

0xf078,	// (0x00069d00) list_highlight_pane_cp021_ParamLimits

0xf078,	// (0x00069d00) list_highlight_pane_cp021

0xee27,	// (0x00069aaf) cset_slider_pane_g1

0xee39,	// (0x00069ac1) cset_slider_pane_g2

0xee30,	// (0x00069ab8) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x0006a679) cset_slider_pane_g

0xc6b2,	// (0x0006733a) aid_area_touch_cam4_zoom

0xc6ba,	// (0x00067342) cam4_zoom_cont_pane

0xc6c2,	// (0x0006734a) cam4_zoom_pane_g1

0xc6ca,	// (0x00067352) cam4_zoom_pane_g2

0xc6d2,	// (0x0006735a) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x0006a680) cam4_zoom_pane_g

0x3556,	// (0x0005e1de) cam4_zoom_cont_pane_g1

0x355f,	// (0x0005e1e7) cam4_zoom_cont_pane_g2

0x3568,	// (0x0005e1f0) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0006a687) cam4_zoom_cont_pane_g

0xbcb0,	// (0x00066938) call4_image_pane_ParamLimits

0xbcb0,	// (0x00066938) call4_image_pane

0x29b3,	// (0x0005d63b) call4_windows_conf_pane_ParamLimits

0x29c6,	// (0x0005d64e) popup_call4_audio_in_window_ParamLimits

0x29c6,	// (0x0005d64e) popup_call4_audio_in_window

0x6827,	// (0x000614af) bg_popup_call2_act_pane_cp02

0x2a24,	// (0x0005d6ac) call4_list_conf_pane

0x20cb,	// (0x0005cd53) call4_image_pane_g1

0x20cb,	// (0x0005cd53) call4_image_pane_g2

0x0001,

0xf713,	// (0x0006a39b) call4_image_pane_g

0x2cda,	// (0x0005d962) list_single_graphic_popup_conf4_pane_ParamLimits

0x2cda,	// (0x0005d962) list_single_graphic_popup_conf4_pane

0x6827,	// (0x000614af) list_highlight_pane_cp022

0x2ced,	// (0x0005d975) list_single_graphic_popup_conf4_pane_g1

0xea8c,	// (0x00069714) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x0006a68e) list_single_graphic_popup_conf4_pane_g

0x2cf5,	// (0x0005d97d) list_single_graphic_popup_conf4_pane_t1

0x81a4,	// (0x00062e2c) popup_vtel_slider_window_ParamLimits

0x81a4,	// (0x00062e2c) popup_vtel_slider_window

0x297d,	// (0x0005d605) dialer2_ne_pane_t2_ParamLimits

0x297d,	// (0x0005d605) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x0006a56f) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x0006a56f) dialer2_ne_pane_t

0xf078,	// (0x00069d00) bg_popup_sub_pane_cp010_ParamLimits

0xf078,	// (0x00069d00) bg_popup_sub_pane_cp010

0xc6da,	// (0x00067362) popup_vtel_slider_window_g1_ParamLimits

0xc6da,	// (0x00067362) popup_vtel_slider_window_g1

0xc6e6,	// (0x0006736e) popup_vtel_slider_window_g2_ParamLimits

0xc6e6,	// (0x0006736e) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0006a693) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0006a693) popup_vtel_slider_window_g

0xc72c,	// (0x000673b4) vtel_slider_pane_ParamLimits

0xc72c,	// (0x000673b4) vtel_slider_pane

0xc73b,	// (0x000673c3) vtel_slider_pane_g1_ParamLimits

0xc73b,	// (0x000673c3) vtel_slider_pane_g1

0xc748,	// (0x000673d0) vtel_slider_pane_g2_ParamLimits

0xc748,	// (0x000673d0) vtel_slider_pane_g2

0xc755,	// (0x000673dd) vtel_slider_pane_g3_ParamLimits

0xc755,	// (0x000673dd) vtel_slider_pane_g3

0xc73b,	// (0x000673c3) vtel_slider_pane_g4_ParamLimits

0xc73b,	// (0x000673c3) vtel_slider_pane_g4

0xc762,	// (0x000673ea) vtel_slider_pane_g5_ParamLimits

0xc762,	// (0x000673ea) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x0006a69c) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x0006a69c) vtel_slider_pane_g

0x6827,	// (0x000614af) main_gallery2_pane

0xbfc6,	// (0x00066c4e) aid_size_row_itut2_dropdow_list_ParamLimits

0xbfc6,	// (0x00066c4e) aid_size_row_itut2_dropdow_list

0xc00c,	// (0x00066c94) grid_vitu2_function_top_pane_ParamLimits

0xc00c,	// (0x00066c94) grid_vitu2_function_top_pane

0xc046,	// (0x00066cce) popup_vitu2_dropdown_list_window_ParamLimits

0xc046,	// (0x00066cce) popup_vitu2_dropdown_list_window

0xc060,	// (0x00066ce8) popup_vitu2_match_list_window

0xc76f,	// (0x000673f7) cell_vitu2_function_top_pane_ParamLimits

0xc76f,	// (0x000673f7) cell_vitu2_function_top_pane

0xc78f,	// (0x00067417) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc78f,	// (0x00067417) cell_vitu2_function_top_pane_cp01

0xc7af,	// (0x00067437) cell_vitu2_function_top_wide_pane_ParamLimits

0xc7af,	// (0x00067437) cell_vitu2_function_top_wide_pane

0xf078,	// (0x00069d00) bg_button_pane_cp012

0xc7cd,	// (0x00067455) cell_vitu2_function_top_pane_g1

0xc7dc,	// (0x00067464) bg_button_pane_cp013_ParamLimits

0xc7dc,	// (0x00067464) bg_button_pane_cp013

0xc7f8,	// (0x00067480) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc7f8,	// (0x00067480) cell_vitu2_function_top_wide_pane_g1

0x6a73,	// (0x000616fb) bg_popup_sub_pane_cp20

0xc810,	// (0x00067498) list_vitu2_match_list_pane

0x2ada,	// (0x0005d762) bg_popup_sub_pane_cp20_g1

0x2ae2,	// (0x0005d76a) bg_popup_sub_pane_cp20_g2

0x85c8,	// (0x00063250) bg_popup_sub_pane_cp20_g3

0x2aea,	// (0x0005d772) bg_popup_sub_pane_cp20_g4

0x85a8,	// (0x00063230) bg_popup_sub_pane_cp20_g5

0x2d19,	// (0x0005d9a1) bg_popup_sub_pane_cp20_g6

0x2afa,	// (0x0005d782) bg_popup_sub_pane_cp20_g7

0x2b02,	// (0x0005d78a) bg_popup_sub_pane_cp20_g8

0x2b0a,	// (0x0005d792) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0006a6a7) bg_popup_sub_pane_cp20_g

0xc828,	// (0x000674b0) list_vitu2_match_list_item_pane_ParamLimits

0xc828,	// (0x000674b0) list_vitu2_match_list_item_pane

0xc83a,	// (0x000674c2) list_vitu2_match_list_item_pane_t1

0x6827,	// (0x000614af) bg_popup_sub_pane_cp21

0x92d1,	// (0x00063f59) grid_vitu2_dropdown_list_pane

0xc848,	// (0x000674d0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc848,	// (0x000674d0) cell_vitu2_dropdown_list_char_pane

0xc869,	// (0x000674f1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc869,	// (0x000674f1) cell_vitu2_dropdown_list_ctrl_pane

0x2d33,	// (0x0005d9bb) cell_vitu2_dropdown_list_char_pane_g1

0x2d2a,	// (0x0005d9b2) cell_vitu2_dropdown_list_char_pane_g2

0x2d21,	// (0x0005d9a9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0006a6c4) cell_vitu2_dropdown_list_char_pane_g

0xc895,	// (0x0006751d) cell_vitu2_dropdown_list_char_pane_t1

0xc8a3,	// (0x0006752b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc8a3,	// (0x0006752b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc8b3,	// (0x0006753b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc8b3,	// (0x0006753b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc8c4,	// (0x0006754c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc8c4,	// (0x0006754c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc8d4,	// (0x0006755c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc8d4,	// (0x0006755c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x22fa,	// (0x0005cf82) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x22fa,	// (0x0005cf82) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x0006a6cb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x0006a6cb) cell_vitu2_dropdown_list_ctrl_pane_g

0xc8ed,	// (0x00067575) aid_size_cell_gallery2_ParamLimits

0xc8ed,	// (0x00067575) aid_size_cell_gallery2

0xc8fb,	// (0x00067583) grid_gallery2_pane_ParamLimits

0xc8fb,	// (0x00067583) grid_gallery2_pane

0xc908,	// (0x00067590) scroll_pane_cp029_ParamLimits

0xc908,	// (0x00067590) scroll_pane_cp029

0xc914,	// (0x0006759c) cell_gallery2_pane_ParamLimits

0xc914,	// (0x0006759c) cell_gallery2_pane

0x2d3c,	// (0x0005d9c4) cell_gallery2_pane_g2

0xc940,	// (0x000675c8) cell_gallery2_pane_g3

0x2d46,	// (0x0005d9ce) cell_gallery2_pane_g4

0x2d4e,	// (0x0005d9d6) cell_gallery2_pane_g5

0xecf1,	// (0x00069979) grid_highlight_pane_cp10

0xc060,	// (0x00066ce8) popup_vitu2_match_list_window_ParamLimits

0xc070,	// (0x00066cf8) popup_vitu2_query_window_ParamLimits

0xc070,	// (0x00066cf8) popup_vitu2_query_window

0x6827,	// (0x000614af) bg_vitu2_candi_button_pane

0x2d33,	// (0x0005d9bb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2d2a,	// (0x0005d9b2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2d21,	// (0x0005d9a9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5c12,	// (0x0006089a) bg_button_pane_cp015

0xc948,	// (0x000675d0) bg_button_pane_cp016

0xc95b,	// (0x000675e3) bg_button_pane_cp017

0x1c88,	// (0x0005c910) bg_popup_sub_pane_cp22

0x2d56,	// (0x0005d9de) popup_vitu2_query_window_g1

0x5c41,	// (0x000608c9) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0006a6d6) popup_vitu2_query_window_g

0x5c5c,	// (0x000608e4) popup_vitu2_query_window_t1_ParamLimits

0x5c5c,	// (0x000608e4) popup_vitu2_query_window_t1

0x5c8f,	// (0x00060917) popup_vitu2_query_window_t2_ParamLimits

0x5c8f,	// (0x00060917) popup_vitu2_query_window_t2

0x5ca1,	// (0x00060929) popup_vitu2_query_window_t3_ParamLimits

0x5ca1,	// (0x00060929) popup_vitu2_query_window_t3

0xc97f,	// (0x00067607) popup_vitu2_query_window_t4_ParamLimits

0xc97f,	// (0x00067607) popup_vitu2_query_window_t4

0xc99c,	// (0x00067624) popup_vitu2_query_window_t5_ParamLimits

0xc99c,	// (0x00067624) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0006a6dd) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0006a6dd) popup_vitu2_query_window_t

0x2bc8,	// (0x0005d850) main_cset_text_pane

0xc3ee,	// (0x00067076) aid_area_touch_slider_ParamLimits

0xc40a,	// (0x00067092) cset_slider_pane_ParamLimits

0xc434,	// (0x000670bc) main_cset_slider_pane_g1_ParamLimits

0xc449,	// (0x000670d1) main_cset_slider_pane_g2_ParamLimits

0x2be9,	// (0x0005d871) main_cset_slider_pane_g3_ParamLimits

0x2be9,	// (0x0005d871) main_cset_slider_pane_g3

0xc45e,	// (0x000670e6) main_cset_slider_pane_g4_ParamLimits

0xc45e,	// (0x000670e6) main_cset_slider_pane_g4

0xc46d,	// (0x000670f5) main_cset_slider_pane_g5_ParamLimits

0xc46d,	// (0x000670f5) main_cset_slider_pane_g5

0xc479,	// (0x00067101) main_cset_slider_pane_g6_ParamLimits

0xc479,	// (0x00067101) main_cset_slider_pane_g6

0xf9a8,	// (0x0006a630) main_cset_slider_pane_g_ParamLimits

0x2c19,	// (0x0005d8a1) main_cset_slider_pane_t1_ParamLimits

0xc505,	// (0x0006718d) main_cset_slider_pane_t2_ParamLimits

0xc51f,	// (0x000671a7) main_cset_slider_pane_t3_ParamLimits

0xc539,	// (0x000671c1) main_cset_slider_pane_t4_ParamLimits

0xc553,	// (0x000671db) main_cset_slider_pane_t5_ParamLimits

0xc56d,	// (0x000671f5) main_cset_slider_pane_t6_ParamLimits

0xc582,	// (0x0006720a) main_cset_slider_pane_t7_ParamLimits

0xc5ac,	// (0x00067234) main_cset_slider_pane_t8_ParamLimits

0xc5ac,	// (0x00067234) main_cset_slider_pane_t8

0xc5d4,	// (0x0006725c) main_cset_slider_pane_t9_ParamLimits

0xc5d4,	// (0x0006725c) main_cset_slider_pane_t9

0xc5fc,	// (0x00067284) main_cset_slider_pane_t10_ParamLimits

0xc5fc,	// (0x00067284) main_cset_slider_pane_t10

0xc624,	// (0x000672ac) main_cset_slider_pane_t11_ParamLimits

0xc624,	// (0x000672ac) main_cset_slider_pane_t11

0xc64c,	// (0x000672d4) main_cset_slider_pane_t12_ParamLimits

0xc64c,	// (0x000672d4) main_cset_slider_pane_t12

0xc669,	// (0x000672f1) main_cset_slider_pane_t13_ParamLimits

0xc669,	// (0x000672f1) main_cset_slider_pane_t13

0xf9cd,	// (0x0006a655) main_cset_slider_pane_t_ParamLimits

0x6827,	// (0x000614af) bg_popup_sub_pane_cp011

0x2d62,	// (0x0005d9ea) main_cset_text_pane_g1

0x2d6a,	// (0x0005d9f2) main_cset_text_pane_t1

0x2d78,	// (0x0005da00) main_cset_text_pane_t2

0x2d86,	// (0x0005da0e) main_cset_text_pane_t3

0x2d94,	// (0x0005da1c) main_cset_text_pane_t4

0x2da2,	// (0x0005da2a) main_cset_text_pane_t5

0x2db0,	// (0x0005da38) main_cset_text_pane_t6

0x2dbe,	// (0x0005da46) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0006a6ec) main_cset_text_pane_t

0x6827,	// (0x000614af) main_cam4_burst_pane

0x6827,	// (0x000614af) main_cam5_pane

0xc349,	// (0x00066fd1) bg_button_pane_cp019

0xc352,	// (0x00066fda) bg_button_pane_cp020

0x2bf5,	// (0x0005d87d) main_cset_slider_pane_g7_ParamLimits

0x2bf5,	// (0x0005d87d) main_cset_slider_pane_g7

0x2c01,	// (0x0005d889) main_cset_slider_pane_g8_ParamLimits

0x2c01,	// (0x0005d889) main_cset_slider_pane_g8

0xc48d,	// (0x00067115) main_cset_slider_pane_g9_ParamLimits

0xc48d,	// (0x00067115) main_cset_slider_pane_g9

0xc499,	// (0x00067121) main_cset_slider_pane_g10_ParamLimits

0xc499,	// (0x00067121) main_cset_slider_pane_g10

0xc4a5,	// (0x0006712d) main_cset_slider_pane_g11_ParamLimits

0xc4a5,	// (0x0006712d) main_cset_slider_pane_g11

0xc4b1,	// (0x00067139) main_cset_slider_pane_g12_ParamLimits

0xc4b1,	// (0x00067139) main_cset_slider_pane_g12

0xc4bd,	// (0x00067145) main_cset_slider_pane_g13_ParamLimits

0xc4bd,	// (0x00067145) main_cset_slider_pane_g13

0xc4c9,	// (0x00067151) main_cset_slider_pane_g14_ParamLimits

0xc4c9,	// (0x00067151) main_cset_slider_pane_g14

0xc4d5,	// (0x0006715d) main_cset_slider_pane_g15_ParamLimits

0xc4d5,	// (0x0006715d) main_cset_slider_pane_g15

0x2c47,	// (0x0005d8cf) main_cset_slider_pane_t14_ParamLimits

0x2c47,	// (0x0005d8cf) main_cset_slider_pane_t14

0x2c80,	// (0x0005d908) main_cset_slider_pane_t15_ParamLimits

0x2c80,	// (0x0005d908) main_cset_slider_pane_t15

0xc9b9,	// (0x00067641) aid_cam4_burst_size_cell_ParamLimits

0xc9b9,	// (0x00067641) aid_cam4_burst_size_cell

0xc9d5,	// (0x0006765d) grid_cam4_burst_pane_ParamLimits

0xc9d5,	// (0x0006765d) grid_cam4_burst_pane

0xc9f7,	// (0x0006767f) linegrid_cam4_burst_pane_ParamLimits

0xc9f7,	// (0x0006767f) linegrid_cam4_burst_pane

0xca15,	// (0x0006769d) scroll_pane_cp30_ParamLimits

0xca15,	// (0x0006769d) scroll_pane_cp30

0xca21,	// (0x000676a9) cell_cam4_burst_pane_ParamLimits

0xca21,	// (0x000676a9) cell_cam4_burst_pane

0x2dcc,	// (0x0005da54) linegrid_cam4_burst_pane_g1_ParamLimits

0x2dcc,	// (0x0005da54) linegrid_cam4_burst_pane_g1

0xca59,	// (0x000676e1) linegrid_cam4_burst_pane_g2_ParamLimits

0xca59,	// (0x000676e1) linegrid_cam4_burst_pane_g2

0x2dd9,	// (0x0005da61) linegrid_cam4_burst_pane_g3_ParamLimits

0x2dd9,	// (0x0005da61) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0006a6fb) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0006a6fb) linegrid_cam4_burst_pane_g

0xca6a,	// (0x000676f2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xca6a,	// (0x000676f2) linegrid_cam4_burst_pane_g3_copy1

0x2de6,	// (0x0005da6e) linegrid_cam4_burst_pane_g4_ParamLimits

0x2de6,	// (0x0005da6e) linegrid_cam4_burst_pane_g4

0xca84,	// (0x0006770c) linegrid_cam4_burst_pane_g5_ParamLimits

0xca84,	// (0x0006770c) linegrid_cam4_burst_pane_g5

0xca95,	// (0x0006771d) linegrid_cam4_burst_pane_g6_ParamLimits

0xca95,	// (0x0006771d) linegrid_cam4_burst_pane_g6

0x2df3,	// (0x0005da7b) linegrid_cam4_burst_pane_g7_ParamLimits

0x2df3,	// (0x0005da7b) linegrid_cam4_burst_pane_g7

0xcaa6,	// (0x0006772e) cell_cam4_burst_pane_g1

0x2e0c,	// (0x0005da94) main_cam5_pane_t1_ParamLimits

0x2e0c,	// (0x0005da94) main_cam5_pane_t1

0x2e1e,	// (0x0005daa6) main_cam5_pane_t2_ParamLimits

0x2e1e,	// (0x0005daa6) main_cam5_pane_t2

0x2e30,	// (0x0005dab8) main_cam5_pane_t3_ParamLimits

0x2e30,	// (0x0005dab8) main_cam5_pane_t3

0x2e42,	// (0x0005daca) main_cam5_pane_t4_ParamLimits

0x2e42,	// (0x0005daca) main_cam5_pane_t4

0x2e58,	// (0x0005dae0) main_cam5_pane_t5_ParamLimits

0x2e58,	// (0x0005dae0) main_cam5_pane_t5

0x2e6a,	// (0x0005daf2) main_cam5_pane_t6_ParamLimits

0x2e6a,	// (0x0005daf2) main_cam5_pane_t6

0x2e7c,	// (0x0005db04) main_cam5_pane_t7_ParamLimits

0x2e7c,	// (0x0005db04) main_cam5_pane_t7

0x2e8e,	// (0x0005db16) main_cam5_pane_t8_ParamLimits

0x2e8e,	// (0x0005db16) main_cam5_pane_t8

0x2eaa,	// (0x0005db32) main_cam5_pane_t9_ParamLimits

0x2eaa,	// (0x0005db32) main_cam5_pane_t9

0x2ebc,	// (0x0005db44) main_cam5_pane_t10_ParamLimits

0x2ebc,	// (0x0005db44) main_cam5_pane_t10

0x2ece,	// (0x0005db56) main_cam5_pane_t11_ParamLimits

0x2ece,	// (0x0005db56) main_cam5_pane_t11

0x2ee0,	// (0x0005db68) main_cam5_pane_t12_ParamLimits

0x2ee0,	// (0x0005db68) main_cam5_pane_t12

0x2ef5,	// (0x0005db7d) main_cam5_pane_t13_ParamLimits

0x2ef5,	// (0x0005db7d) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0006a707) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0006a707) main_cam5_pane_t

0x6a3c,	// (0x000616c4) popup_scut_keymap_window_ParamLimits

0x6a3c,	// (0x000616c4) popup_scut_keymap_window

0xcab9,	// (0x00067741) aid_size_cell_brow_shortcut

0xecf1,	// (0x00069979) bg_popup_window_pane_cp010

0xcac5,	// (0x0006774d) grid_scut_pane

0xcacf,	// (0x00067757) cell_scut_pane_ParamLimits

0xcacf,	// (0x00067757) cell_scut_pane

0xcae4,	// (0x0006776c) cell_scut_pane_g1

0x2f12,	// (0x0005db9a) cell_scut_pane_t1

0x2f21,	// (0x0005dba9) cell_scut_pane_t2

0xcaed,	// (0x00067775) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0006a722) cell_scut_pane_t

0xad0d,	// (0x00065995) main_mup3_pane_g8_ParamLimits

0xad0d,	// (0x00065995) main_mup3_pane_g8

0xbfd2,	// (0x00066c5a) area_vitu2_query_pane_ParamLimits

0xbfd2,	// (0x00066c5a) area_vitu2_query_pane

0x5c22,	// (0x000608aa) input_focus_pane_cp08

0x2f30,	// (0x0005dbb8) area_vitu2_query_pane_g1

0x5d1f,	// (0x000609a7) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0006a729) area_vitu2_query_pane_g

0xcafb,	// (0x00067783) area_vitu2_query_pane_t1_ParamLimits

0xcafb,	// (0x00067783) area_vitu2_query_pane_t1

0xcb0d,	// (0x00067795) area_vitu2_query_pane_t2_ParamLimits

0xcb0d,	// (0x00067795) area_vitu2_query_pane_t2

0x5d2e,	// (0x000609b6) area_vitu2_query_pane_t3_ParamLimits

0x5d2e,	// (0x000609b6) area_vitu2_query_pane_t3

0x5d56,	// (0x000609de) area_vitu2_query_pane_t4_ParamLimits

0x5d56,	// (0x000609de) area_vitu2_query_pane_t4

0x5d7e,	// (0x00060a06) area_vitu2_query_pane_t5_ParamLimits

0x5d7e,	// (0x00060a06) area_vitu2_query_pane_t5

0x5da6,	// (0x00060a2e) area_vitu2_query_pane_t6_ParamLimits

0x5da6,	// (0x00060a2e) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0006a72e) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0006a72e) area_vitu2_query_pane_t

0xcb1f,	// (0x000677a7) bg_button_pane_cp018

0xcb2c,	// (0x000677b4) bg_button_pane_cp021

0x5df2,	// (0x00060a7a) bg_button_pane_cp022

0x5e01,	// (0x00060a89) input_focus_pane_cp09

0x9594,	// (0x0006421c) aid_size_touch_mv_arrow_left

0xebca,	// (0x00069852) aid_size_touch_mv_arrow_right

0xc4ed,	// (0x00067175) main_cset_slider_pane_g16_ParamLimits

0xc4ed,	// (0x00067175) main_cset_slider_pane_g16

0xc4f9,	// (0x00067181) main_cset_slider_pane_g17_ParamLimits

0xc4f9,	// (0x00067181) main_cset_slider_pane_g17

0xcaa6,	// (0x0006772e) cell_cam4_burst_pane_g1_ParamLimits

0x6827,	// (0x000614af) compa_mode_pane

0xc6f2,	// (0x0006737a) popup_vtel_slider_window_g3_ParamLimits

0xc6f2,	// (0x0006737a) popup_vtel_slider_window_g3

0xc706,	// (0x0006738e) popup_vtel_slider_window_g4_ParamLimits

0xc706,	// (0x0006738e) popup_vtel_slider_window_g4

0xc71a,	// (0x000673a2) popup_vtel_slider_window_t1_ParamLimits

0xc71a,	// (0x000673a2) popup_vtel_slider_window_t1

0x6827,	// (0x000614af) main_cl_pane

0x1cae,	// (0x0005c936) popup_imed_adjust2_window_ParamLimits

0x1c88,	// (0x0005c910) bg_tb_trans_pane_cp05_ParamLimits

0x2594,	// (0x0005d21c) popup_imed_adjust2_window_g1_ParamLimits

0x25a3,	// (0x0005d22b) popup_imed_adjust2_window_g2_ParamLimits

0x25a3,	// (0x0005d22b) popup_imed_adjust2_window_g2

0x25af,	// (0x0005d237) popup_imed_adjust2_window_g3_ParamLimits

0x25af,	// (0x0005d237) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x0006a499) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x0006a499) popup_imed_adjust2_window_g

0x25bb,	// (0x0005d243) popup_imed_adjust2_window_t1_ParamLimits

0x25d3,	// (0x0005d25b) slider_imed_adjust_pane_ParamLimits

0x25e7,	// (0x0005d26f) slider_imed_adjust_pane_g1_ParamLimits

0x25f7,	// (0x0005d27f) slider_imed_adjust_pane_g2_ParamLimits

0x2607,	// (0x0005d28f) slider_imed_adjust_pane_g3_ParamLimits

0x2618,	// (0x0005d2a0) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x0006a4a0) slider_imed_adjust_pane_g_ParamLimits

0xbd7a,	// (0x00066a02) aid_touch_area_cam4_ParamLimits

0xbd7a,	// (0x00066a02) aid_touch_area_cam4

0xbd88,	// (0x00066a10) battery_pane_cp01

0xbe07,	// (0x00066a8f) main_camera4_pane_g6_ParamLimits

0xbe07,	// (0x00066a8f) main_camera4_pane_g6

0xbe25,	// (0x00066aad) main_camera4_pane_t2_ParamLimits

0xbe25,	// (0x00066aad) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0006a5a3) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0006a5a3) main_camera4_pane_t

0xbead,	// (0x00066b35) aid_touch_area_vid4_ParamLimits

0xbead,	// (0x00066b35) aid_touch_area_vid4

0xbe07,	// (0x00066a8f) main_video4_pane_g5_ParamLimits

0xbe07,	// (0x00066a8f) main_video4_pane_g5

0xbedd,	// (0x00066b65) vid4_progress_pane_ParamLimits

0xbedd,	// (0x00066b65) vid4_progress_pane

0x2c0d,	// (0x0005d895) main_cset_slider_pane_g18_ParamLimits

0x2c0d,	// (0x0005d895) main_cset_slider_pane_g18

0x2e00,	// (0x0005da88) cell_cam4_burst_pane_g2_ParamLimits

0x2e00,	// (0x0005da88) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0006a702) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0006a702) cell_cam4_burst_pane_g

0xcb38,	// (0x000677c0) bg_cl_pane_ParamLimits

0xcb38,	// (0x000677c0) bg_cl_pane

0xcb44,	// (0x000677cc) cl_header_pane_ParamLimits

0xcb44,	// (0x000677cc) cl_header_pane

0xcb50,	// (0x000677d8) cl_listscroll_pane_ParamLimits

0xcb50,	// (0x000677d8) cl_listscroll_pane

0x2fd8,	// (0x0005dc60) bg_cl_pane_g1

0x2fe0,	// (0x0005dc68) bg_cl_pane_g2

0x2fe8,	// (0x0005dc70) bg_cl_pane_g3

0x2ff0,	// (0x0005dc78) bg_cl_pane_g4

0x2ff8,	// (0x0005dc80) bg_cl_pane_g5

0x3000,	// (0x0005dc88) bg_cl_pane_g6

0x3008,	// (0x0005dc90) bg_cl_pane_g7

0x3010,	// (0x0005dc98) bg_cl_pane_g8

0x3018,	// (0x0005dca0) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0006a73d) bg_cl_pane_g

0xcb5c,	// (0x000677e4) aid_height_cl_leading_ParamLimits

0xcb5c,	// (0x000677e4) aid_height_cl_leading

0xcb68,	// (0x000677f0) aid_height_cl_text_ParamLimits

0xcb68,	// (0x000677f0) aid_height_cl_text

0x6a73,	// (0x000616fb) bg_cl_header_pane_ParamLimits

0x6a73,	// (0x000616fb) bg_cl_header_pane

0xcb80,	// (0x00067808) cl_header_pane_g1_ParamLimits

0xcb80,	// (0x00067808) cl_header_pane_g1

0xcb8d,	// (0x00067815) cl_header_pane_t1_ParamLimits

0xcb8d,	// (0x00067815) cl_header_pane_t1

0x3020,	// (0x0005dca8) cl_list_pane

0x3029,	// (0x0005dcb1) hc_scroll_pane_cp01

0x85a8,	// (0x00063230) bg_cl_header_pane_g1

0x2ada,	// (0x0005d762) bg_cl_header_pane_g2

0x85c8,	// (0x00063250) bg_cl_header_pane_g3

0x2aea,	// (0x0005d772) bg_cl_header_pane_g4

0x2ae2,	// (0x0005d76a) bg_cl_header_pane_g5

0x2d19,	// (0x0005d9a1) bg_cl_header_pane_g6

0x2b02,	// (0x0005d78a) bg_cl_header_pane_g7

0x2b0a,	// (0x0005d792) bg_cl_header_pane_g8

0x2afa,	// (0x0005d782) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x0006a750) bg_cl_header_pane_g

0xcb9f,	// (0x00067827) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcb9f,	// (0x00067827) hc_cl_list_double_graphic_heading_pane

0xcbaf,	// (0x00067837) hc_cl_list_single_graphic_pane_ParamLimits

0xcbaf,	// (0x00067837) hc_cl_list_single_graphic_pane

0xcbc1,	// (0x00067849) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcbc1,	// (0x00067849) hc_cl_list_single_graphic_pane_g1

0xcbcd,	// (0x00067855) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcbcd,	// (0x00067855) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0006a763) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0006a763) hc_cl_list_single_graphic_pane_g

0xcbe1,	// (0x00067869) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcbe1,	// (0x00067869) hc_cl_list_single_graphic_pane_t1

0xcbc1,	// (0x00067849) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcbc1,	// (0x00067849) hc_cl_list_double_graphic_heading_pane_g1

0xcbf6,	// (0x0006787e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcbf6,	// (0x0006787e) hc_cl_list_double_graphic_heading_pane_g2

0xcc0a,	// (0x00067892) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcc0a,	// (0x00067892) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0006a768) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0006a768) hc_cl_list_double_graphic_heading_pane_g

0xcc1e,	// (0x000678a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcc1e,	// (0x000678a6) hc_cl_list_double_graphic_heading_pane_t1

0xcc33,	// (0x000678bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcc33,	// (0x000678bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0006a76f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0006a76f) hc_cl_list_double_graphic_heading_pane_t

0xcc48,	// (0x000678d0) vid4_progress_pane_g1

0xcc57,	// (0x000678df) vid4_progress_pane_g2

0xcc66,	// (0x000678ee) vid4_progress_pane_g3

0xcc75,	// (0x000678fd) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0006a774) vid4_progress_pane_g

0xcc81,	// (0x00067909) vid4_progress_pane_t1

0xcc97,	// (0x0006791f) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0006a77f) vid4_progress_pane_t

0xccc1,	// (0x00067949) wait_bar_pane_cp07

0x1ec6,	// (0x0005cb4e) blid_firmament_pane_ParamLimits

0x1f07,	// (0x0005cb8f) popup_blid_sat_info2_window_g1

0x1f2b,	// (0x0005cbb3) popup_blid_sat_info2_window_t3

0x1f39,	// (0x0005cbc1) popup_blid_sat_info2_window_t4

0x1f47,	// (0x0005cbcf) popup_blid_sat_info2_window_t5

0x1f55,	// (0x0005cbdd) popup_blid_sat_info2_window_t6

0x1f65,	// (0x0005cbed) popup_blid_sat_info2_window_t7

0x1f73,	// (0x0005cbfb) popup_blid_sat_info2_window_t8

0x1f81,	// (0x0005cc09) popup_blid_sat_info2_window_t9

0x1f8f,	// (0x0005cc17) popup_blid_sat_info2_window_t10

0x204b,	// (0x0005ccd3) aid_firma_cardinal_ParamLimits

0x205f,	// (0x0005cce7) blid_firmament_pane_t1_ParamLimits

0x2076,	// (0x0005ccfe) blid_firmament_pane_t2_ParamLimits

0x208d,	// (0x0005cd15) blid_firmament_pane_t3_ParamLimits

0x20a4,	// (0x0005cd2c) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0006a392) blid_firmament_pane_t_ParamLimits

0x20bb,	// (0x0005cd43) blid_sat_info_pane_ParamLimits

0xf078,	// (0x00069d00) main_cam_set_pane_ParamLimits

0xb474,	// (0x000660fc) aid_size_cell_colour_35_ParamLimits

0xb48b,	// (0x00066113) aid_size_cell_colour_112_ParamLimits

0xb4a2,	// (0x0006612a) aid_size_cell_effect_ParamLimits

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp02_ParamLimits

0xf086,	// (0x00069d0e) heading_imed_pane_ParamLimits

0xb4bc,	// (0x00066144) listscroll_imed_pane_ParamLimits

0x127a,	// (0x0005bf02) popup_call2_audio_first_window_g5_ParamLimits

0x127a,	// (0x0005bf02) popup_call2_audio_first_window_g5

0xbb3f,	// (0x000667c7) aid_size_touch_image3_arrow_left_ParamLimits

0xbb3f,	// (0x000667c7) aid_size_touch_image3_arrow_left

0xbb53,	// (0x000667db) aid_size_touch_image3_arrow_right_ParamLimits

0xbb53,	// (0x000667db) aid_size_touch_image3_arrow_right

0xccac,	// (0x00067934) vid4_progress_pane_t3

0xb720,	// (0x000663a8) main_hwr_training_symbol_option_pane_ParamLimits

0xb720,	// (0x000663a8) main_hwr_training_symbol_option_pane

0x2873,	// (0x0005d4fb) popup_hwr_training_preview_window_ParamLimits

0x2873,	// (0x0005d4fb) popup_hwr_training_preview_window

0xb77b,	// (0x00066403) hwr_training_navi_pane_g5_ParamLimits

0xb77b,	// (0x00066403) hwr_training_navi_pane_g5

0x2ac8,	// (0x0005d750) popup_char_count_window

0x6a73,	// (0x000616fb) bg_popup_sub_pane_cp20_ParamLimits

0xc810,	// (0x00067498) list_vitu2_match_list_pane_ParamLimits

0xc81c,	// (0x000674a4) vitu2_page_scroll_pane_ParamLimits

0xc81c,	// (0x000674a4) vitu2_page_scroll_pane

0x308c,	// (0x0005dd14) list_single_hwr_training_symbol_option_pane_ParamLimits

0x308c,	// (0x0005dd14) list_single_hwr_training_symbol_option_pane

0x309f,	// (0x0005dd27) list_single_hwr_training_symbol_option_pane_g1

0x30a7,	// (0x0005dd2f) list_single_hwr_training_symbol_option_pane_t1

0x30b5,	// (0x0005dd3d) bg_button_pane_cp023

0x30be,	// (0x0005dd46) bg_button_pane_cp024

0xcce2,	// (0x0006796a) vitu2_page_scroll_pane_g1

0xccea,	// (0x00067972) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0006a786) vitu2_page_scroll_pane_g

0xccf2,	// (0x0006797a) vitu2_page_scroll_pane_t1

0x1e1e,	// (0x0005caa6) popup_char_count_window_g1

0x30f1,	// (0x0005dd79) popup_char_count_window_g2

0x30fa,	// (0x0005dd82) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x0006a78b) popup_char_count_window_g

0x3103,	// (0x0005dd8b) popup_char_count_window_t1

0x6827,	// (0x000614af) main_vded2_pane

0x2582,	// (0x0005d20a) aid_size_cell_imed_line

0x258c,	// (0x0005d214) grid_imed_line_width_pane

0xbf28,	// (0x00066bb0) vid4_indicators_pane_g4

0x3111,	// (0x0005dd99) cell_imed_line_width_pane_ParamLimits

0x3111,	// (0x0005dd99) cell_imed_line_width_pane

0x3123,	// (0x0005ddab) cell_imed_line_width_pane_g1

0x1ea0,	// (0x0005cb28) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0006a792) cell_imed_line_width_pane_g

0xcd01,	// (0x00067989) main_vded2_pane_g1_ParamLimits

0xcd01,	// (0x00067989) main_vded2_pane_g1

0xcd0e,	// (0x00067996) main_vded2_pane_g2_ParamLimits

0xcd0e,	// (0x00067996) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0006a797) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0006a797) main_vded2_pane_g

0xcd1a,	// (0x000679a2) vded2_slider_pane_ParamLimits

0xcd1a,	// (0x000679a2) vded2_slider_pane

0xcd27,	// (0x000679af) aid_size_touch_vded2_end

0xcd2f,	// (0x000679b7) aid_size_touch_vded2_playhead

0xcd37,	// (0x000679bf) aid_size_touch_vded2_start

0xcd3f,	// (0x000679c7) vded2_slider_bg_pane

0xcd48,	// (0x000679d0) vded2_slider_pane_g1

0xcd51,	// (0x000679d9) vded2_slider_pane_g2

0xcd59,	// (0x000679e1) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x0006a79c) vded2_slider_pane_g

0xcd62,	// (0x000679ea) vded2_slider_bg_pane_g1

0xcd6b,	// (0x000679f3) vded2_slider_bg_pane_g2

0xcd74,	// (0x000679fc) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0006a7a3) vded2_slider_bg_pane_g

0x9aae,	// (0x00064736) aid_postcard_touch_down_pane_ParamLimits

0x9aae,	// (0x00064736) aid_postcard_touch_down_pane

0x9aba,	// (0x00064742) aid_postcard_touch_up_pane_ParamLimits

0x9aba,	// (0x00064742) aid_postcard_touch_up_pane

0x6827,	// (0x000614af) main_blid2_pane

0x1c96,	// (0x0005c91e) popup_blid2_search_window

0x6827,	// (0x000614af) blid2_gps_pane

0x6827,	// (0x000614af) blid2_navig_pane

0x6827,	// (0x000614af) blid2_search_pane

0x6827,	// (0x000614af) blid2_tripm_pane

0xcd7d,	// (0x00067a05) blid2_search_pane_g1_ParamLimits

0xcd7d,	// (0x00067a05) blid2_search_pane_g1

0xcd89,	// (0x00067a11) blid2_search_pane_t1_ParamLimits

0xcd89,	// (0x00067a11) blid2_search_pane_t1

0xcd9b,	// (0x00067a23) aid_size_cell_blid2_gps_ParamLimits

0xcd9b,	// (0x00067a23) aid_size_cell_blid2_gps

0xcdab,	// (0x00067a33) blid2_gps_pane_g1_ParamLimits

0xcdab,	// (0x00067a33) blid2_gps_pane_g1

0xcdb7,	// (0x00067a3f) grid_blid2_satellite_pane_ParamLimits

0xcdb7,	// (0x00067a3f) grid_blid2_satellite_pane

0xcdc3,	// (0x00067a4b) blid2_navig_pane_g1_ParamLimits

0xcdc3,	// (0x00067a4b) blid2_navig_pane_g1

0xcdcf,	// (0x00067a57) blid2_navig_pane_t1_ParamLimits

0xcdcf,	// (0x00067a57) blid2_navig_pane_t1

0xcde1,	// (0x00067a69) blid2_navig_pane_t2_ParamLimits

0xcde1,	// (0x00067a69) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x0006a7aa) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x0006a7aa) blid2_navig_pane_t

0xcdf3,	// (0x00067a7b) blid2_navig_ring_pane_ParamLimits

0xcdf3,	// (0x00067a7b) blid2_navig_ring_pane

0xcdff,	// (0x00067a87) blid2_speed_pane_ParamLimits

0xcdff,	// (0x00067a87) blid2_speed_pane

0xce0b,	// (0x00067a93) blid2_tripm_pane_g1_ParamLimits

0xce0b,	// (0x00067a93) blid2_tripm_pane_g1

0xce17,	// (0x00067a9f) blid2_tripm_pane_g2_ParamLimits

0xce17,	// (0x00067a9f) blid2_tripm_pane_g2

0xce23,	// (0x00067aab) blid2_tripm_pane_g3_ParamLimits

0xce23,	// (0x00067aab) blid2_tripm_pane_g3

0xce2f,	// (0x00067ab7) blid2_tripm_pane_g4_ParamLimits

0xce2f,	// (0x00067ab7) blid2_tripm_pane_g4

0xce3b,	// (0x00067ac3) blid2_tripm_pane_g5_ParamLimits

0xce3b,	// (0x00067ac3) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x0006a7af) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x0006a7af) blid2_tripm_pane_g

0xce53,	// (0x00067adb) blid2_tripm_pane_t1_ParamLimits

0xce53,	// (0x00067adb) blid2_tripm_pane_t1

0xce65,	// (0x00067aed) blid2_tripm_pane_t2_ParamLimits

0xce65,	// (0x00067aed) blid2_tripm_pane_t2

0xce77,	// (0x00067aff) blid2_tripm_pane_t3_ParamLimits

0xce77,	// (0x00067aff) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x0006a7bc) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x0006a7bc) blid2_tripm_pane_t

0xcea7,	// (0x00067b2f) cell_blid2_satellite_pane_ParamLimits

0xcea7,	// (0x00067b2f) cell_blid2_satellite_pane

0xcebf,	// (0x00067b47) cell_blid2_satellite_pane_g1

0x312c,	// (0x0005ddb4) cell_blid2_satellite_pane_t1

0x20cb,	// (0x0005cd53) blid2_speed_pane_g1

0x313a,	// (0x0005ddc2) blid2_speed_pane_t1

0x3148,	// (0x0005ddd0) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0006a7c5) blid2_speed_pane_t

0x20cb,	// (0x0005cd53) blid2_navig_ring_pane_g1

0xcec8,	// (0x00067b50) blid2_navig_ring_pane_g2

0xced0,	// (0x00067b58) blid2_navig_ring_pane_g3

0xced8,	// (0x00067b60) blid2_navig_ring_pane_g4

0xcee0,	// (0x00067b68) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x0006a7ca) blid2_navig_ring_pane_g

0x6827,	// (0x000614af) bg_popup_window_pane_cp011

0x3156,	// (0x0005ddde) popup_blid2_search_window_g1

0x315e,	// (0x0005dde6) popup_blid2_search_window_t1

0x316c,	// (0x0005ddf4) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0006a7d5) popup_blid2_search_window_t

0x846d,	// (0x000630f5) main_browser_pane_g1

0x74dc,	// (0x00062164) main_browser_pane_ParamLimits

0xf078,	// (0x00069d00) bg_button_pane_cp011_ParamLimits

0xc14e,	// (0x00066dd6) cell_vitu2_function_pane_g1_ParamLimits

0x1c88,	// (0x0005c910) bg_popup_sub_pane_cp22_ParamLimits

0x5c22,	// (0x000608aa) input_focus_pane_cp08_ParamLimits

0xc96e,	// (0x000675f6) popup_vitu2_query_button_pane_ParamLimits

0xc96e,	// (0x000675f6) popup_vitu2_query_button_pane

0x5c39,	// (0x000608c1) popup_vitu2_query_input_button_pane

0x2d56,	// (0x0005d9de) popup_vitu2_query_window_g1_ParamLimits

0x5c41,	// (0x000608c9) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0006a6d6) popup_vitu2_query_window_g_ParamLimits

0x6827,	// (0x000614af) bg_button_pane_cp026

0xcee8,	// (0x00067b70) popup_vitu2_query_input_button_pane_g1

0x6827,	// (0x000614af) bg_button_pane_cp025

0x317a,	// (0x0005de02) popup_vitu2_query_button_pane_t1

0xaa67,	// (0x000656ef) main_mp3_pane_t6

0xaa75,	// (0x000656fd) popup_slider_window_cp01

0xbe5b,	// (0x00066ae3) cam4_battery_pane

0xbe5b,	// (0x00066ae3) cam4_battery_pane_cp02

0xbe5b,	// (0x00066ae3) cam4_battery_pane_cp01

0xbe5b,	// (0x00066ae3) cam4_battery_pane_cp03

0x20cb,	// (0x0005cd53) cam4_battery_pane_g1

0x2973,	// (0x0005d5fb) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0006a7da) cam4_battery_pane_g

0x1f9d,	// (0x0005cc25) popup_blid_sat_info2_window_t11

0x9594,	// (0x0006421c) aid_size_touch_mv_arrow_left_ParamLimits

0xebca,	// (0x00069852) aid_size_touch_mv_arrow_right_ParamLimits

0xec02,	// (0x0006988a) navi_pane_g1_ParamLimits

0xec0e,	// (0x00069896) navi_pane_g2_ParamLimits

0x95ad,	// (0x00064235) navi_pane_g3_ParamLimits

0xf409,	// (0x0006a091) navi_pane_g_ParamLimits

0x95d2,	// (0x0006425a) navi_pane_mv_t1_ParamLimits

0xb4c8,	// (0x00066150) grid_imed_effect_pane_ParamLimits

0x806e,	// (0x00062cf6) aid_placing_vt_slider_lsc

0x8086,	// (0x00062d0e) aid_placing_vt_slider_prt

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp01_ParamLimits

0x221a,	// (0x0005cea2) popup_image_details_window_g1_ParamLimits

0x222d,	// (0x0005ceb5) popup_image_details_window_g2_ParamLimits

0x2242,	// (0x0005ceca) popup_image_details_window_g3_ParamLimits

0x2242,	// (0x0005ceca) popup_image_details_window_g3

0xf74f,	// (0x0006a3d7) popup_image_details_window_g_ParamLimits

0x2256,	// (0x0005cede) popup_image_details_window_t1_ParamLimits

0x2268,	// (0x0005cef0) popup_image_details_window_t2_ParamLimits

0x2281,	// (0x0005cf09) popup_image_details_window_t3_ParamLimits

0x2295,	// (0x0005cf1d) popup_image_details_window_t4_ParamLimits

0x22b0,	// (0x0005cf38) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x0006a3de) popup_image_details_window_t_ParamLimits

0xcb74,	// (0x000677fc) cl_header_name_pane_ParamLimits

0xcb74,	// (0x000677fc) cl_header_name_pane

0xcef0,	// (0x00067b78) cl_header_name_pane_t1_ParamLimits

0xcef0,	// (0x00067b78) cl_header_name_pane_t1

0xcf07,	// (0x00067b8f) cl_header_name_pane_t2_ParamLimits

0xcf07,	// (0x00067b8f) cl_header_name_pane_t2

0xcf31,	// (0x00067bb9) cl_header_name_pane_t3_ParamLimits

0xcf31,	// (0x00067bb9) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x0006a7df) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x0006a7df) cl_header_name_pane_t

0xec90,	// (0x00069918) navi_pane_mv_g2_ParamLimits

0x2a69,	// (0x0005d6f1) field_vitu2_entry_pane_g1_ParamLimits

0x2a75,	// (0x0005d6fd) field_vitu2_entry_pane_g2_ParamLimits

0x2a81,	// (0x0005d709) field_vitu2_entry_pane_g3_ParamLimits

0x2a81,	// (0x0005d709) field_vitu2_entry_pane_g3

0xf94d,	// (0x0006a5d5) field_vitu2_entry_pane_g_ParamLimits

0xc0de,	// (0x00066d66) cell_vitu2_itu_pane_g1_ParamLimits

0xc0ee,	// (0x00066d76) cell_vitu2_itu_pane_g2_ParamLimits

0xc0ee,	// (0x00066d76) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x0006a5e1) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x0006a5e1) cell_vitu2_itu_pane_g

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp05_ParamLimits

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp05

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp03

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp04

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp10_ParamLimits

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp10

0x5df2,	// (0x00060a7a) bg_vkb2_func_pane_cp08

0xcb1f,	// (0x000677a7) bg_vkb2_func_pane_cp06

0xcb2c,	// (0x000677b4) bg_vkb2_func_pane_cp07

0x30c7,	// (0x0005dd4f) bg_vkb2_func_pane_cp11_ParamLimits

0x30c7,	// (0x0005dd4f) bg_vkb2_func_pane_cp11

0x30dc,	// (0x0005dd64) bg_vkb2_func_pane_cp12_ParamLimits

0x30dc,	// (0x0005dd64) bg_vkb2_func_pane_cp12

0x6827,	// (0x000614af) bg_vkb2_func_pane_cp09

0x2ada,	// (0x0005d762) bg_vkb2_func_pane_g1

0x85c8,	// (0x00063250) bg_vkb2_func_pane_g2

0x2ae2,	// (0x0005d76a) bg_vkb2_func_pane_g3

0x2aea,	// (0x0005d772) bg_vkb2_func_pane_g4

0x2d19,	// (0x0005d9a1) bg_vkb2_func_pane_g5

0x2b02,	// (0x0005d78a) bg_vkb2_func_pane_g6

0x2b0a,	// (0x0005d792) bg_vkb2_func_pane_g7

0x2afa,	// (0x0005d782) bg_vkb2_func_pane_g8

0x85a8,	// (0x00063230) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0006a7e6) bg_vkb2_func_pane_g

0xce47,	// (0x00067acf) blid2_tripm_pane_g6_ParamLimits

0xce47,	// (0x00067acf) blid2_tripm_pane_g6

0x2931,	// (0x0005d5b9) mp4_progress_pane_g1

0xce9b,	// (0x00067b23) blid2_tripm_values_pane_ParamLimits

0xce9b,	// (0x00067b23) blid2_tripm_values_pane

0xcf56,	// (0x00067bde) blid2_tripm_values_pane_t1

0xcf64,	// (0x00067bec) blid2_tripm_values_pane_t2

0xcf72,	// (0x00067bfa) blid2_tripm_values_pane_t3

0xcf80,	// (0x00067c08) blid2_tripm_values_pane_t4

0xcf8e,	// (0x00067c16) blid2_tripm_values_pane_t5

0xcf9c,	// (0x00067c24) blid2_tripm_values_pane_t6

0xcfaa,	// (0x00067c32) blid2_tripm_values_pane_t7

0xcfb8,	// (0x00067c40) blid2_tripm_values_pane_t8

0xcfc6,	// (0x00067c4e) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0006a7f9) blid2_tripm_values_pane_t

0x80b2,	// (0x00062d3a) call_video_pane_t1_ParamLimits

0x80cf,	// (0x00062d57) call_video_pane_t2_ParamLimits

0xf292,	// (0x00069f1a) call_video_pane_t_ParamLimits

0x5a16,	// (0x0006069e) msg_header_pane_g1_ParamLimits

0xee6c,	// (0x00069af4) msg_header_pane_g2_ParamLimits

0xee6c,	// (0x00069af4) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0006a134) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0006a134) msg_header_pane_g

0x74dc,	// (0x00062164) main_clock2_pane_ParamLimits

0xb286,	// (0x00065f0e) grid_clock2_toolbar_pane_ParamLimits

0xb286,	// (0x00065f0e) grid_clock2_toolbar_pane

0xb286,	// (0x00065f0e) listscroll_clock2_pane_ParamLimits

0xb286,	// (0x00065f0e) listscroll_clock2_pane

0xb32b,	// (0x00065fb3) main_clock2_pane_t3_ParamLimits

0xb32b,	// (0x00065fb3) main_clock2_pane_t3

0xb33d,	// (0x00065fc5) main_clock2_pane_t4_ParamLimits

0xb33d,	// (0x00065fc5) main_clock2_pane_t4

0x3188,	// (0x0005de10) cell_clock2_toolbar_pane

0x3190,	// (0x0005de18) cell_clock2_toolbar_pane_cp01

0x3190,	// (0x0005de18) cell_clock2_toolbar_pane_cp02

0x3198,	// (0x0005de20) cell_clock2_toolbar_pane_cp03

0x31a0,	// (0x0005de28) list_clock2_pane

0xeb32,	// (0x000697ba) scroll_pane_cp10

0x31a8,	// (0x0005de30) list_single_clock2_pane_ParamLimits

0x31a8,	// (0x0005de30) list_single_clock2_pane

0xecf1,	// (0x00069979) list_highlight_pane_cp08

0x31b5,	// (0x0005de3d) list_single_clock2_pane_t1

0x31c3,	// (0x0005de4b) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0006a80c) list_single_clock2_pane_t

0x6827,	// (0x000614af) bg_button_pane_cp10

0x31d1,	// (0x0005de59) cell_clock2_toolbar_pane_g1

0x9a18,	// (0x000646a0) aid_main_viewer_pane_g1_ParamLimits

0x9a18,	// (0x000646a0) aid_main_viewer_pane_g1

0x9a24,	// (0x000646ac) aid_main_viewer_pane_g2_ParamLimits

0x9a24,	// (0x000646ac) aid_main_viewer_pane_g2

0x9a30,	// (0x000646b8) aid_main_viewer_pane_g3_ParamLimits

0x9a30,	// (0x000646b8) aid_main_viewer_pane_g3

0x9a3f,	// (0x000646c7) aid_main_viewer_pane_g4_ParamLimits

0x9a3f,	// (0x000646c7) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0006a145) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0006a145) aid_main_viewer_pane_g

0x6a73,	// (0x000616fb) main_calc_pane_ParamLimits

0xa0c6,	// (0x00064d4e) main_dialer2_pane_ParamLimits

0x6827,	// (0x000614af) main_cam6_pane

0x6827,	// (0x000614af) main_vid6_pane

0xb292,	// (0x00065f1a) listscroll_gen_pane_cp06_ParamLimits

0xb292,	// (0x00065f1a) listscroll_gen_pane_cp06

0xb34f,	// (0x00065fd7) main_clock2_pane_t5_ParamLimits

0xb34f,	// (0x00065fd7) main_clock2_pane_t5

0xb396,	// (0x0006601e) aid_call2_pane_cp10_ParamLimits

0xb3a2,	// (0x0006602a) aid_call_pane_cp10_ParamLimits

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb3ae,	// (0x00066036) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb3ae,	// (0x00066036) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebbe,	// (0x00069846) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x0006a48e) popup_clock_analogue_window_cp10_g_ParamLimits

0xb3ba,	// (0x00066042) popup_clock_analogue_window_cp10_t1_ParamLimits

0x299b,	// (0x0005d623) cell_dialer2_keypad_pane_g2_ParamLimits

0x299b,	// (0x0005d623) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x0006a574) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x0006a574) cell_dialer2_keypad_pane_g

0xbb08,	// (0x00066790) cell_dialer2_keypad_pane_t1

0xc3db,	// (0x00067063) main_cset_text2_pane_ParamLimits

0xc3db,	// (0x00067063) main_cset_text2_pane

0x2f30,	// (0x0005dbb8) area_vitu2_query_pane_g1_ParamLimits

0x5d1f,	// (0x000609a7) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0006a729) area_vitu2_query_pane_g_ParamLimits

0x5dce,	// (0x00060a56) area_vitu2_query_pane_t7_ParamLimits

0x5dce,	// (0x00060a56) area_vitu2_query_pane_t7

0xcb1f,	// (0x000677a7) bg_button_pane_cp018_ParamLimits

0xcb2c,	// (0x000677b4) bg_button_pane_cp021_ParamLimits

0x5df2,	// (0x00060a7a) bg_button_pane_cp022_ParamLimits

0x5df2,	// (0x00060a7a) bg_vkb2_func_pane_cp08_ParamLimits

0xcb1f,	// (0x000677a7) bg_vkb2_func_pane_cp06_ParamLimits

0xcb2c,	// (0x000677b4) bg_vkb2_func_pane_cp07_ParamLimits

0x5e01,	// (0x00060a89) input_focus_pane_cp09_ParamLimits

0xcfd4,	// (0x00067c5c) cam6_autofocus_pane_ParamLimits

0xcfd4,	// (0x00067c5c) cam6_autofocus_pane

0xcff0,	// (0x00067c78) cam6_image_uncrop_pane_ParamLimits

0xcff0,	// (0x00067c78) cam6_image_uncrop_pane

0xd013,	// (0x00067c9b) cam6_indi_pane_ParamLimits

0xd013,	// (0x00067c9b) cam6_indi_pane

0xd02d,	// (0x00067cb5) cam6_mode_pane_ParamLimits

0xd02d,	// (0x00067cb5) cam6_mode_pane

0xd041,	// (0x00067cc9) cam6_timer_pane_ParamLimits

0xd041,	// (0x00067cc9) cam6_timer_pane

0xd04d,	// (0x00067cd5) cam6_zoom_pane_ParamLimits

0xd04d,	// (0x00067cd5) cam6_zoom_pane

0xbebb,	// (0x00066b43) cam6_mode_pane_g1_ParamLimits

0xbebb,	// (0x00066b43) cam6_mode_pane_g1

0xd063,	// (0x00067ceb) cam6_mode_pane_g2_ParamLimits

0xd063,	// (0x00067ceb) cam6_mode_pane_g2

0xd06f,	// (0x00067cf7) cam6_mode_pane_g3_ParamLimits

0xd06f,	// (0x00067cf7) cam6_mode_pane_g3

0xd07b,	// (0x00067d03) cam6_mode_pane_g4_ParamLimits

0xd07b,	// (0x00067d03) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x0006a811) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x0006a811) cam6_mode_pane_g

0x31d9,	// (0x0005de61) bg_tb_trans_pane_cp08_ParamLimits

0x31d9,	// (0x0005de61) bg_tb_trans_pane_cp08

0x31e7,	// (0x0005de6f) cam6_battery_pane_ParamLimits

0x31e7,	// (0x0005de6f) cam6_battery_pane

0x31fd,	// (0x0005de85) cam6_indi_pane_g1_ParamLimits

0x31fd,	// (0x0005de85) cam6_indi_pane_g1

0x320f,	// (0x0005de97) cam6_indi_pane_g2_ParamLimits

0x320f,	// (0x0005de97) cam6_indi_pane_g2

0x3221,	// (0x0005dea9) cam6_indi_pane_g3_ParamLimits

0x3221,	// (0x0005dea9) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0006a81a) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0006a81a) cam6_indi_pane_g

0x3233,	// (0x0005debb) cam6_indi_pane_t1_ParamLimits

0x3233,	// (0x0005debb) cam6_indi_pane_t1

0xbf5e,	// (0x00066be6) cam6_autofocus_pane_g1

0xbf66,	// (0x00066bee) cam6_autofocus_pane_g2

0xbf6e,	// (0x00066bf6) cam6_autofocus_pane_g3

0xbf76,	// (0x00066bfe) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x0006a821) cam6_autofocus_pane_g

0x3259,	// (0x0005dee1) cam6_timer_pane_g1

0x3261,	// (0x0005dee9) cam6_timer_pane_t1

0x326f,	// (0x0005def7) cam6_zoom_cont_pane

0x3277,	// (0x0005deff) cam6_zoom_pane_g1

0x327f,	// (0x0005df07) cam6_zoom_pane_g2

0xd087,	// (0x00067d0f) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0006a82a) cam6_zoom_pane_g

0x20cb,	// (0x0005cd53) cam6_battery_pane_g1

0x20cb,	// (0x0005cd53) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x0006a39b) cam6_battery_pane_g

0x3287,	// (0x0005df0f) cam6_zoom_cont_pane_g1

0x3290,	// (0x0005df18) cam6_zoom_cont_pane_g2

0x3299,	// (0x0005df21) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x0006a831) cam6_zoom_cont_pane_g

0xd0a4,	// (0x00067d2c) cam6_mode_pane_cp_ParamLimits

0xd0a4,	// (0x00067d2c) cam6_mode_pane_cp

0xd04d,	// (0x00067cd5) cam6_zoom_pane_cp_ParamLimits

0xd04d,	// (0x00067cd5) cam6_zoom_pane_cp

0xd0b8,	// (0x00067d40) vid6_image_uncrop_cif_pane_ParamLimits

0xd0b8,	// (0x00067d40) vid6_image_uncrop_cif_pane

0xd0da,	// (0x00067d62) vid6_image_uncrop_nhd_pane_ParamLimits

0xd0da,	// (0x00067d62) vid6_image_uncrop_nhd_pane

0xcff0,	// (0x00067c78) vid6_image_uncrop_vga_pane_ParamLimits

0xcff0,	// (0x00067c78) vid6_image_uncrop_vga_pane

0xd0f1,	// (0x00067d79) vid6_image_uncrop_wvga_pane_ParamLimits

0xd0f1,	// (0x00067d79) vid6_image_uncrop_wvga_pane

0xd108,	// (0x00067d90) vid6_indi_pane_ParamLimits

0xd108,	// (0x00067d90) vid6_indi_pane

0x31d9,	// (0x0005de61) bg_tb_trans_pane_cp09_ParamLimits

0x31d9,	// (0x0005de61) bg_tb_trans_pane_cp09

0x32ad,	// (0x0005df35) cam6_battery_pane_cp_ParamLimits

0x32ad,	// (0x0005df35) cam6_battery_pane_cp

0x32b9,	// (0x0005df41) vid6_indi_pane_g1_ParamLimits

0x32b9,	// (0x0005df41) vid6_indi_pane_g1

0x32cb,	// (0x0005df53) vid6_indi_pane_g2_ParamLimits

0x32cb,	// (0x0005df53) vid6_indi_pane_g2

0x32dd,	// (0x0005df65) vid6_indi_pane_g3_ParamLimits

0x32dd,	// (0x0005df65) vid6_indi_pane_g3

0x32f2,	// (0x0005df7a) vid6_indi_pane_g4_ParamLimits

0x32f2,	// (0x0005df7a) vid6_indi_pane_g4

0x3307,	// (0x0005df8f) vid6_indi_pane_g5_ParamLimits

0x3307,	// (0x0005df8f) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x0006a838) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x0006a838) vid6_indi_pane_g

0x3321,	// (0x0005dfa9) vid6_indi_pane_t1_ParamLimits

0x3321,	// (0x0005dfa9) vid6_indi_pane_t1

0x3337,	// (0x0005dfbf) vid6_indi_pane_t2_ParamLimits

0x3337,	// (0x0005dfbf) vid6_indi_pane_t2

0x335f,	// (0x0005dfe7) vid6_indi_pane_t3_ParamLimits

0x335f,	// (0x0005dfe7) vid6_indi_pane_t3

0x3387,	// (0x0005e00f) vid6_indi_pane_t4_ParamLimits

0x3387,	// (0x0005e00f) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0006a843) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0006a843) vid6_indi_pane_t

0x33ab,	// (0x0005e033) wait_bar_pane_cp08

0xd128,	// (0x00067db0) main_cset_text2_pane_t1_ParamLimits

0xd128,	// (0x00067db0) main_cset_text2_pane_t1

0xd08f,	// (0x00067d17) listscroll_gen_pane_cp06_t1_ParamLimits

0xd08f,	// (0x00067d17) listscroll_gen_pane_cp06_t1

0x6827,	// (0x000614af) main_cam6_set_pane

0x22fa,	// (0x0005cf82) bg_tb_trans_pane_cp06_ParamLimits

0xbe63,	// (0x00066aeb) cam4_indicators_pane_g1_ParamLimits

0xbe73,	// (0x00066afb) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x0006a5b1) cam4_indicators_pane_g_ParamLimits

0xbe93,	// (0x00066b1b) cam4_indicators_pane_t1_ParamLimits

0xf078,	// (0x00069d00) bg_tb_trans_pane_cp07_ParamLimits

0xbe63,	// (0x00066aeb) vid4_indicators_pane_g1_ParamLimits

0xbf07,	// (0x00066b8f) vid4_indicators_pane_g2_ParamLimits

0xbf17,	// (0x00066b9f) vid4_indicators_pane_g3_ParamLimits

0xbf28,	// (0x00066bb0) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0006a5c3) vid4_indicators_pane_g_ParamLimits

0xbf44,	// (0x00066bcc) vid4_indicators_pane_t1_ParamLimits

0xcc48,	// (0x000678d0) vid4_progress_pane_g1_ParamLimits

0xcc57,	// (0x000678df) vid4_progress_pane_g2_ParamLimits

0xcc66,	// (0x000678ee) vid4_progress_pane_g3_ParamLimits

0xcc75,	// (0x000678fd) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0006a774) vid4_progress_pane_g_ParamLimits

0xcc81,	// (0x00067909) vid4_progress_pane_t1_ParamLimits

0xcc97,	// (0x0006791f) vid4_progress_pane_t2_ParamLimits

0xccac,	// (0x00067934) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0006a77f) vid4_progress_pane_t_ParamLimits

0xccc1,	// (0x00067949) wait_bar_pane_cp07_ParamLimits

0xd144,	// (0x00067dcc) main_cam6_set_pane_g2_ParamLimits

0xd144,	// (0x00067dcc) main_cam6_set_pane_g2

0xd150,	// (0x00067dd8) main_cset6_listscroll_pane_ParamLimits

0xd150,	// (0x00067dd8) main_cset6_listscroll_pane

0xd179,	// (0x00067e01) main_cset6_slider_pane_ParamLimits

0xd179,	// (0x00067e01) main_cset6_slider_pane

0xd185,	// (0x00067e0d) main_cset6_text2_pane_ParamLimits

0xd185,	// (0x00067e0d) main_cset6_text2_pane

0x33bb,	// (0x0005e043) main_cset6_text_pane

0x2bd0,	// (0x0005d858) main_cset_list_pane_copy1_ParamLimits

0x2bd0,	// (0x0005d858) main_cset_list_pane_copy1

0x2be0,	// (0x0005d868) scroll_pane_cp028_copy1

0xd198,	// (0x00067e20) cset_list_set_pane_copy1

0xc696,	// (0x0006731e) aid_position_infowindow_above_copy1

0xc69e,	// (0x00067326) aid_position_infowindow_below_copy1

0xd1a7,	// (0x00067e2f) cset_list_set_pane_g1_copy1

0x5e50,	// (0x00060ad8) cset_list_set_pane_g3_copy1_ParamLimits

0x5e50,	// (0x00060ad8) cset_list_set_pane_g3_copy1

0x5e5f,	// (0x00060ae7) cset_list_set_pane_t1_copy1_ParamLimits

0x5e5f,	// (0x00060ae7) cset_list_set_pane_t1_copy1

0xf078,	// (0x00069d00) list_highlight_pane_cp021_copy1_ParamLimits

0xf078,	// (0x00069d00) list_highlight_pane_cp021_copy1

0x33c3,	// (0x0005e04b) cset6_slider_pane_ParamLimits

0x33c3,	// (0x0005e04b) cset6_slider_pane

0x33ef,	// (0x0005e077) main_cset6_slider_pane_g1_ParamLimits

0x33ef,	// (0x0005e077) main_cset6_slider_pane_g1

0xd1af,	// (0x00067e37) main_cset6_slider_pane_g2_ParamLimits

0xd1af,	// (0x00067e37) main_cset6_slider_pane_g2

0x2bf5,	// (0x0005d87d) main_cset6_slider_pane_g3_ParamLimits

0x2bf5,	// (0x0005d87d) main_cset6_slider_pane_g3

0xd1d7,	// (0x00067e5f) main_cset6_slider_pane_g4_ParamLimits

0xd1d7,	// (0x00067e5f) main_cset6_slider_pane_g4

0xd1e3,	// (0x00067e6b) main_cset6_slider_pane_g5_ParamLimits

0xd1e3,	// (0x00067e6b) main_cset6_slider_pane_g5

0x2bf5,	// (0x0005d87d) main_cset6_slider_pane_g7_ParamLimits

0x2bf5,	// (0x0005d87d) main_cset6_slider_pane_g7

0x2c01,	// (0x0005d889) main_cset6_slider_pane_g8_ParamLimits

0x2c01,	// (0x0005d889) main_cset6_slider_pane_g8

0xd1ef,	// (0x00067e77) main_cset6_slider_pane_g9_ParamLimits

0xd1ef,	// (0x00067e77) main_cset6_slider_pane_g9

0xd1fb,	// (0x00067e83) main_cset6_slider_pane_g10_ParamLimits

0xd1fb,	// (0x00067e83) main_cset6_slider_pane_g10

0xd1d7,	// (0x00067e5f) main_cset6_slider_pane_g11_ParamLimits

0xd1d7,	// (0x00067e5f) main_cset6_slider_pane_g11

0xd207,	// (0x00067e8f) main_cset6_slider_pane_g12_ParamLimits

0xd207,	// (0x00067e8f) main_cset6_slider_pane_g12

0xd213,	// (0x00067e9b) main_cset6_slider_pane_g13_ParamLimits

0xd213,	// (0x00067e9b) main_cset6_slider_pane_g13

0xd21f,	// (0x00067ea7) main_cset6_slider_pane_g14_ParamLimits

0xd21f,	// (0x00067ea7) main_cset6_slider_pane_g14

0xd22b,	// (0x00067eb3) main_cset6_slider_pane_g15_ParamLimits

0xd22b,	// (0x00067eb3) main_cset6_slider_pane_g15

0xd1e3,	// (0x00067e6b) main_cset6_slider_pane_g16_ParamLimits

0xd1e3,	// (0x00067e6b) main_cset6_slider_pane_g16

0xd243,	// (0x00067ecb) main_cset6_slider_pane_g17_ParamLimits

0xd243,	// (0x00067ecb) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0006a84c) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0006a84c) main_cset6_slider_pane_g

0x3417,	// (0x0005e09f) main_cset6_slider_pane_t1_ParamLimits

0x3417,	// (0x0005e09f) main_cset6_slider_pane_t1

0xd24f,	// (0x00067ed7) main_cset6_slider_pane_t2_ParamLimits

0xd24f,	// (0x00067ed7) main_cset6_slider_pane_t2

0x3458,	// (0x0005e0e0) main_cset6_slider_pane_t3_ParamLimits

0x3458,	// (0x0005e0e0) main_cset6_slider_pane_t3

0xd27a,	// (0x00067f02) main_cset6_slider_pane_t4_ParamLimits

0xd27a,	// (0x00067f02) main_cset6_slider_pane_t4

0x3483,	// (0x0005e10b) main_cset6_slider_pane_t5_ParamLimits

0x3483,	// (0x0005e10b) main_cset6_slider_pane_t5

0x34ae,	// (0x0005e136) main_cset6_slider_pane_t7_ParamLimits

0x34ae,	// (0x0005e136) main_cset6_slider_pane_t7

0xd2a5,	// (0x00067f2d) main_cset6_slider_pane_t8_ParamLimits

0xd2a5,	// (0x00067f2d) main_cset6_slider_pane_t8

0xd2c9,	// (0x00067f51) main_cset6_slider_pane_t9_ParamLimits

0xd2c9,	// (0x00067f51) main_cset6_slider_pane_t9

0xd2ed,	// (0x00067f75) main_cset6_slider_pane_t10_ParamLimits

0xd2ed,	// (0x00067f75) main_cset6_slider_pane_t10

0xd311,	// (0x00067f99) main_cset6_slider_pane_t11_ParamLimits

0xd311,	// (0x00067f99) main_cset6_slider_pane_t11

0x34e4,	// (0x0005e16c) main_cset6_slider_pane_t14_ParamLimits

0x34e4,	// (0x0005e16c) main_cset6_slider_pane_t14

0x351d,	// (0x0005e1a5) main_cset6_slider_pane_t15_ParamLimits

0x351d,	// (0x0005e1a5) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x0006a871) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x0006a871) main_cset6_slider_pane_t

0x3556,	// (0x0005e1de) cset_slider_pane_g1_copy1

0x355f,	// (0x0005e1e7) cset_slider_pane_g2_copy1

0x3568,	// (0x0005e1f0) cset_slider_pane_g3_copy1

0x6827,	// (0x000614af) bg_popup_sub_pane_cp011_copy1

0x2d62,	// (0x0005d9ea) main_cset_text_pane_g1_copy1

0x2d6a,	// (0x0005d9f2) main_cset_text_pane_t1_copy1

0x2d78,	// (0x0005da00) main_cset_text_pane_t2_copy1

0x2d86,	// (0x0005da0e) main_cset_text_pane_t3_copy1

0x2d94,	// (0x0005da1c) main_cset_text_pane_t4_copy1

0x2da2,	// (0x0005da2a) main_cset_text_pane_t5_copy1

0x2db0,	// (0x0005da38) main_cset_text_pane_t6_copy1

0x2dbe,	// (0x0005da46) main_cset_text_pane_t7_copy1

0xd335,	// (0x00067fbd) main_cset_text2_pane_t1_copy1

0x6827,	// (0x000614af) main_ncimui_pane

0xa101,	// (0x00064d89) popup_query_ncimui_window_ParamLimits

0xa101,	// (0x00064d89) popup_query_ncimui_window

0xaba0,	// (0x00065828) field_cale_ev2_pane_g4_ParamLimits

0xaba0,	// (0x00065828) field_cale_ev2_pane_g4

0xb83c,	// (0x000664c4) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb83c,	// (0x000664c4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0006a54f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0006a54f) cell_video_dialer_keypad_pane_g

0xb854,	// (0x000664dc) cell_video_dialer_keypad_pane_t1

0x6827,	// (0x000614af) bg_popup_window_pane_cp012

0xea0b,	// (0x00069693) heading_pane_cp06

0x3666,	// (0x0005e2ee) ncim_query_content_pane

0x6827,	// (0x000614af) bg_popup_heading_pane_cp01

0x366e,	// (0x0005e2f6) ncim_heading_pane_t1

0x367c,	// (0x0005e304) ncim_indicator_popup_pane

0x368e,	// (0x0005e316) ncim_query_button_pane

0x36a2,	// (0x0005e32a) ncim_query_content_pane_t1

0x36b4,	// (0x0005e33c) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x0006a8b0) ncim_query_content_pane_t

0x36ee,	// (0x0005e376) ncim_query_list_pane

0x3700,	// (0x0005e388) ncim_query_popup_pane

0x367c,	// (0x0005e304) ncim_indicator_popup_pane_ParamLimits

0xd448,	// (0x000680d0) ncim_query_content_pane_g1_ParamLimits

0xd448,	// (0x000680d0) ncim_query_content_pane_g1

0x36a2,	// (0x0005e32a) ncim_query_content_pane_t1_ParamLimits

0x36b4,	// (0x0005e33c) ncim_query_content_pane_t2_ParamLimits

0xd454,	// (0x000680dc) ncim_query_content_pane_t3_ParamLimits

0xd454,	// (0x000680dc) ncim_query_content_pane_t3

0xd471,	// (0x000680f9) ncim_query_content_pane_t4_ParamLimits

0xd471,	// (0x000680f9) ncim_query_content_pane_t4

0xd48e,	// (0x00068116) ncim_query_content_pane_t5_ParamLimits

0xd48e,	// (0x00068116) ncim_query_content_pane_t5

0x36c6,	// (0x0005e34e) ncim_query_content_pane_t6_ParamLimits

0x36c6,	// (0x0005e34e) ncim_query_content_pane_t6

0xfc28,	// (0x0006a8b0) ncim_query_content_pane_t_ParamLimits

0x36ee,	// (0x0005e376) ncim_query_list_pane_ParamLimits

0x3700,	// (0x0005e388) ncim_query_popup_pane_ParamLimits

0x3714,	// (0x0005e39c) wait_bar_pane_cp04

0x6827,	// (0x000614af) input_focus_pane_cp011

0x371c,	// (0x0005e3a4) ncim_query_popup_pane_t1

0x372a,	// (0x0005e3b2) ncim_list_query_list_pane_ParamLimits

0x372a,	// (0x0005e3b2) ncim_list_query_list_pane

0x6827,	// (0x000614af) bg_button_pane_cp027

0x373d,	// (0x0005e3c5) ncim_query_button_pane_g1

0x6827,	// (0x000614af) list_highlight_pane_cp012

0x3747,	// (0x0005e3cf) ncim_list_query_list_pane_g1

0x374f,	// (0x0005e3d7) ncim_list_query_list_pane_t1

0xbe83,	// (0x00066b0b) cam4_indicators_pane_g3_ParamLimits

0xbe83,	// (0x00066b0b) cam4_indicators_pane_g3

0xbf34,	// (0x00066bbc) vid4_indicators_pane_g5_ParamLimits

0xbf34,	// (0x00066bbc) vid4_indicators_pane_g5

0x90b4,	// (0x00063d3c) vid4_progress_pane_g5_ParamLimits

0x90b4,	// (0x00063d3c) vid4_progress_pane_g5

0xd363,	// (0x00067feb) main_ncimui_pane_g1

0xd3b9,	// (0x00068041) ncimui_group_query_pane_ParamLimits

0xd3b9,	// (0x00068041) ncimui_group_query_pane

0xd3f5,	// (0x0006807d) ncimui_list_pane_ParamLimits

0xd3f5,	// (0x0006807d) ncimui_list_pane

0xd414,	// (0x0006809c) ncimui_text_pane_ParamLimits

0xd414,	// (0x0006809c) ncimui_text_pane

0xd4ab,	// (0x00068133) ncimui_text_pane_t1_ParamLimits

0xd4ab,	// (0x00068133) ncimui_text_pane_t1

0x3766,	// (0x0005e3ee) ncimui_list_single_graphic_pane_ParamLimits

0x3766,	// (0x0005e3ee) ncimui_list_single_graphic_pane

0xd4c9,	// (0x00068151) ncimui_query_pane_ParamLimits

0xd4c9,	// (0x00068151) ncimui_query_pane

0x6827,	// (0x000614af) list_highlight_pane_cp013

0x3773,	// (0x0005e3fb) ncim_list_query_list_pane_t1_copy1

0x3781,	// (0x0005e409) ncim_list_single_graphic_pane_g1

0x3789,	// (0x0005e411) ncim_query_button_pane_cp01

0x3795,	// (0x0005e41d) ncim_query_entry_pane_ParamLimits

0x3795,	// (0x0005e41d) ncim_query_entry_pane

0x37a8,	// (0x0005e430) ncimui_query_pane_g1

0x37b4,	// (0x0005e43c) ncimui_query_pane_t1_ParamLimits

0x37b4,	// (0x0005e43c) ncimui_query_pane_t1

0xf078,	// (0x00069d00) input_focus_pane_cp012

0x37cd,	// (0x0005e455) ncim_query_entry_pane_t1

0x74dc,	// (0x00062164) main_im_pane_ParamLimits

0xf078,	// (0x00069d00) main_mobtv_pane_ParamLimits

0xf078,	// (0x00069d00) main_mobtv_pane

0xd1ef,	// (0x00067e77) main_cset6_slider_pane_g18_ParamLimits

0xd1ef,	// (0x00067e77) main_cset6_slider_pane_g18

0xd213,	// (0x00067e9b) main_cset6_slider_pane_g19_ParamLimits

0xd213,	// (0x00067e9b) main_cset6_slider_pane_g19

0x2a81,	// (0x0005d709) bg_main_mobtv_pane_ParamLimits

0x2a81,	// (0x0005d709) bg_main_mobtv_pane

0xd4d9,	// (0x00068161) main_mobtv_info_pane

0xd4e2,	// (0x0006816a) main_mobtv_loading_pane_ParamLimits

0xd4e2,	// (0x0006816a) main_mobtv_loading_pane

0x37ed,	// (0x0005e475) main_mobtv_pg_channel_list_pane

0x37f7,	// (0x0005e47f) main_mobtv_pg_hdr_pane

0xd4ef,	// (0x00068177) main_mobtv_programe_curr_pane_ParamLimits

0xd4ef,	// (0x00068177) main_mobtv_programe_curr_pane

0xd4fc,	// (0x00068184) main_mobtv_programe_next_pane_ParamLimits

0xd4fc,	// (0x00068184) main_mobtv_programe_next_pane

0x3800,	// (0x0005e488) popup_mobtv_noti_window

0x20cb,	// (0x0005cd53) main_tv_pg_hdr_pane_g1

0x3808,	// (0x0005e490) main_tv_pg_hdr_pane_g2

0x3810,	// (0x0005e498) main_tv_pg_hdr_pane_g3

0x3818,	// (0x0005e4a0) main_tv_pg_hdr_pane_g4

0x3820,	// (0x0005e4a8) main_tv_pg_hdr_pane_g5

0x3828,	// (0x0005e4b0) main_tv_pg_hdr_pane_g6

0x3830,	// (0x0005e4b8) main_tv_pg_hdr_pane_g7

0x3838,	// (0x0005e4c0) main_tv_pg_hdr_pane_g8

0x3840,	// (0x0005e4c8) main_tv_pg_hdr_pane_g9

0x3848,	// (0x0005e4d0) main_tv_pg_hdr_pane_g10

0x3852,	// (0x0005e4da) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x0006a8bd) main_tv_pg_hdr_pane_g

0x385c,	// (0x0005e4e4) main_tv_pg_hdr_pane_t1

0x386a,	// (0x0005e4f2) main_tv_pg_hdr_pane_t2

0x3878,	// (0x0005e500) main_tv_pg_hdr_pane_t3

0x3886,	// (0x0005e50e) main_tv_pg_hdr_pane_t4

0x3894,	// (0x0005e51c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0006a8d4) main_tv_pg_hdr_pane_t

0x38a2,	// (0x0005e52a) single_mobtv_pg_channel_pane_ParamLimits

0x38a2,	// (0x0005e52a) single_mobtv_pg_channel_pane

0x38b4,	// (0x0005e53c) single_mobtv_pg_channel_table_pane

0x38bd,	// (0x0005e545) single_mobtv_pg_channel_thumb_pane

0x38c6,	// (0x0005e54e) single_tv_pg_channel_pane_g1

0x38cf,	// (0x0005e557) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x0006a8df) single_tv_pg_channel_pane_g

0x22fa,	// (0x0005cf82) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x22fa,	// (0x0005cf82) bg_single_mobtv_pg_channel_thumb_pane

0x38d8,	// (0x0005e560) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x38d8,	// (0x0005e560) single_mobtv_pg_channel_thumb_pane_g1

0x38e6,	// (0x0005e56e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x38e6,	// (0x0005e56e) single_mobtv_pg_channel_thumb_pane_g2

0x38f2,	// (0x0005e57a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x38f2,	// (0x0005e57a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0006a8e4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0006a8e4) single_mobtv_pg_channel_thumb_pane_g

0x38fe,	// (0x0005e586) single_mobtv_pg_channel_thumb_pane_t1

0x390c,	// (0x0005e594) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0006a8eb) single_mobtv_pg_channel_thumb_pane_t

0x20cb,	// (0x0005cd53) bg_single_mobtv_pg_channel_table_pane_g1

0x20cb,	// (0x0005cd53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x0006a39b) bg_single_mobtv_pg_channel_table_pane_g

0x391a,	// (0x0005e5a2) single_mobtv_pg_channel_table_pane_t1

0x3928,	// (0x0005e5b0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x0006a8f0) single_mobtv_pg_channel_table_pane_t

0xd511,	// (0x00068199) main_mobtv_info_pane_g1_ParamLimits

0xd511,	// (0x00068199) main_mobtv_info_pane_g1

0xd52d,	// (0x000681b5) main_mobtv_info_pane_t1_ParamLimits

0xd52d,	// (0x000681b5) main_mobtv_info_pane_t1

0xd593,	// (0x0006821b) main_mobtv_info_pane_t2_ParamLimits

0xd593,	// (0x0006821b) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0006a8fa) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0006a8fa) main_mobtv_info_pane_t

0xd616,	// (0x0006829e) wait_bar_pane_cp05

0xd626,	// (0x000682ae) main_mobtv_loading_pane_g1_ParamLimits

0xd626,	// (0x000682ae) main_mobtv_loading_pane_g1

0xd632,	// (0x000682ba) main_mobtv_loading_pane_g2_ParamLimits

0xd632,	// (0x000682ba) main_mobtv_loading_pane_g2

0xd63e,	// (0x000682c6) main_mobtv_loading_pane_g3_ParamLimits

0xd63e,	// (0x000682c6) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x0006a901) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x0006a901) main_mobtv_loading_pane_g

0x3936,	// (0x0005e5be) main_mobtv_loading_pane_t1_ParamLimits

0x3936,	// (0x0005e5be) main_mobtv_loading_pane_t1

0x394e,	// (0x0005e5d6) main_mobtv_loading_pane_t2_ParamLimits

0x394e,	// (0x0005e5d6) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x0006a908) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x0006a908) main_mobtv_loading_pane_t

0xd64a,	// (0x000682d2) wait_bar_pane_cp06_ParamLimits

0xd64a,	// (0x000682d2) wait_bar_pane_cp06

0x3972,	// (0x0005e5fa) main_mobtv_programe_curr_pane_t1

0x3980,	// (0x0005e608) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0006a90d) main_mobtv_programe_curr_pane_t

0x398e,	// (0x0005e616) main_mobtv_programe_next_pane_t1

0x399c,	// (0x0005e624) main_mobtv_programe_next_pane_t2

0x39aa,	// (0x0005e632) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0006a912) main_mobtv_programe_next_pane_t

0x6827,	// (0x000614af) bg_popup_mobtv_noti_window_pane

0x39b8,	// (0x0005e640) popup_mobtv_noti_window_g1

0x39c0,	// (0x0005e648) popup_mobtv_noti_window_t1

0x39ce,	// (0x0005e656) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0006a919) popup_mobtv_noti_window_t

0x20cb,	// (0x0005cd53) bg_popup_mobtv_noti_window_pane_g1

0x6827,	// (0x000614af) sc_clock_pane

0x6827,	// (0x000614af) main_fs_bigclock_pane

0xce89,	// (0x00067b11) blid2_tripm_pane_t4_ParamLimits

0xce89,	// (0x00067b11) blid2_tripm_pane_t4

0xd656,	// (0x000682de) sc_clock_pane_g1_ParamLimits

0xd656,	// (0x000682de) sc_clock_pane_g1

0xd664,	// (0x000682ec) sc_clock_pane_t1_ParamLimits

0xd664,	// (0x000682ec) sc_clock_pane_t1

0xd677,	// (0x000682ff) sc_clock_pane_t2_ParamLimits

0xd677,	// (0x000682ff) sc_clock_pane_t2

0xd689,	// (0x00068311) sc_clock_pane_t3_ParamLimits

0xd689,	// (0x00068311) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0006a91e) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0006a91e) sc_clock_pane_t

0xdff4,	// (0x00068c7c) main_fs_bigclock_indicator_pane_ParamLimits

0xdff4,	// (0x00068c7c) main_fs_bigclock_indicator_pane

0xd701,	// (0x00068389) main_fs_bigclock_pane_g1_ParamLimits

0xd701,	// (0x00068389) main_fs_bigclock_pane_g1

0xe000,	// (0x00068c88) main_fs_bigclock_pane_t1_ParamLimits

0xe000,	// (0x00068c88) main_fs_bigclock_pane_t1

0xe012,	// (0x00068c9a) main_fs_bigclock_pane_t2_ParamLimits

0xe012,	// (0x00068c9a) main_fs_bigclock_pane_t2

0xe024,	// (0x00068cac) main_fs_bigclock_pane_t3_ParamLimits

0xe024,	// (0x00068cac) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x0006ab18) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x0006ab18) main_fs_bigclock_pane_t

0xe036,	// (0x00068cbe) main_fs_bigclock_indicator_pane_g1

0x3696,	// (0x0005e31e) ncim_query_content_pane_g2_ParamLimits

0x3696,	// (0x0005e31e) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x0006a8ab) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x0006a8ab) ncim_query_content_pane_g

0xd69b,	// (0x00068323) sc_clock_pane_t4_ParamLimits

0xd69b,	// (0x00068323) sc_clock_pane_t4

0xf078,	// (0x00069d00) main_radioblah_pane

0x29f2,	// (0x0005d67a) cell_call4_button_pane_t1_copy1_ParamLimits

0x29f2,	// (0x0005d67a) cell_call4_button_pane_t1_copy1

0xd36b,	// (0x00067ff3) main_ncimui_pane_t1_ParamLimits

0xd36b,	// (0x00067ff3) main_ncimui_pane_t1

0xd385,	// (0x0006800d) main_ncimui_pane_t2_ParamLimits

0xd385,	// (0x0006800d) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0006a8a4) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0006a8a4) main_ncimui_pane_t

0x3af8,	// (0x0005e780) main_radioblah_anim_pane_ParamLimits

0x3af8,	// (0x0005e780) main_radioblah_anim_pane

0x3b09,	// (0x0005e791) main_radioblah_info_pane_ParamLimits

0x3b09,	// (0x0005e791) main_radioblah_info_pane

0x3b1d,	// (0x0005e7a5) main_radioblah_pane_t1_ParamLimits

0x3b1d,	// (0x0005e7a5) main_radioblah_pane_t1

0x3b39,	// (0x0005e7c1) main_radioblah_pane_t2_ParamLimits

0x3b39,	// (0x0005e7c1) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0006a93f) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0006a93f) main_radioblah_pane_t

0xd749,	// (0x000683d1) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd749,	// (0x000683d1) main_radioblah_rocker_ctrl_pane

0x3b81,	// (0x0005e809) main_radioblah_info_pane_t1_ParamLimits

0x3b81,	// (0x0005e809) main_radioblah_info_pane_t1

0xd78e,	// (0x00068416) main_radioblah_info_pane_t2_ParamLimits

0xd78e,	// (0x00068416) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x0006a948) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x0006a948) main_radioblah_info_pane_t

0x20cb,	// (0x0005cd53) main_radioblah_rocker_ctrl_pane_g1

0xd836,	// (0x000684be) main_radioblah_rocker_ctrl_pane_g2

0xd83e,	// (0x000684c6) main_radioblah_rocker_ctrl_pane_g3

0xd846,	// (0x000684ce) main_radioblah_rocker_ctrl_pane_g4

0xd84e,	// (0x000684d6) main_radioblah_rocker_ctrl_pane_g5

0xd856,	// (0x000684de) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x0006a951) main_radioblah_rocker_ctrl_pane_g

0xd335,	// (0x00067fbd) main_cset_text2_pane_t1_copy1_ParamLimits

0xbdb3,	// (0x00066a3b) cam4_image_uncrop_qvga_pane

0xbec7,	// (0x00066b4f) vid4_image_uncrop_qcif_pane

0xd007,	// (0x00067c8f) cam6_image_uncrop_qvga_pane_ParamLimits

0xd007,	// (0x00067c8f) cam6_image_uncrop_qvga_pane

0x32a1,	// (0x0005df29) vid6_image_uncrop_qcif_pane_ParamLimits

0x32a1,	// (0x0005df29) vid6_image_uncrop_qcif_pane

0x6827,	// (0x000614af) bg_popup_preview_window_pane_cp03

0x363c,	// (0x0005e2c4) list_cset_text2_pane

0x3644,	// (0x0005e2cc) main_cset6_text2_pane_g1

0x364c,	// (0x0005e2d4) main_cset6_text2_pane_t1

0xd85e,	// (0x000684e6) list_cset_text2_pane_t1_ParamLimits

0xd85e,	// (0x000684e6) list_cset_text2_pane_t1

0xf078,	// (0x00069d00) main_radioblah_pane_ParamLimits

0xd604,	// (0x0006828c) main_mobtv_info_pane_t3_ParamLimits

0xd604,	// (0x0006828c) main_mobtv_info_pane_t3

0xd737,	// (0x000683bf) main_radioblah_pane_g1

0xd762,	// (0x000683ea) main_radioblah_info_pane_g1

0xd7dd,	// (0x00068465) main_radioblah_info_pane_t3_ParamLimits

0xd7dd,	// (0x00068465) main_radioblah_info_pane_t3

0x8dde,	// (0x00063a66) highlight_cell_cale_month_pane_ParamLimits

0x8dde,	// (0x00063a66) highlight_cell_cale_month_pane

0x6827,	// (0x000614af) main_phob_fisheye_pane

0x2444,	// (0x0005d0cc) scroll_pane_cp0031_ParamLimits

0x2444,	// (0x0005d0cc) scroll_pane_cp0031

0x33ab,	// (0x0005e033) wait_bar_pane_cp08_ParamLimits

0xd198,	// (0x00067e20) cset_list_set_pane_copy1_ParamLimits

0x3bbb,	// (0x0005e843) highlight_cell_cale_month_pane_g1

0xd875,	// (0x000684fd) highlight_cell_cale_month_pane_t1

0x3bc3,	// (0x0005e84b) list_gen_pane_cp01

0x2be0,	// (0x0005d868) scroll_pane_01

0xd883,	// (0x0006850b) list_single_double_fisheye_pane

0x5f3f,	// (0x00060bc7) list_double_fisheye_pane_g1_ParamLimits

0x5f3f,	// (0x00060bc7) list_double_fisheye_pane_g1

0xd88c,	// (0x00068514) list_double_fisheye_pane_g2_ParamLimits

0xd88c,	// (0x00068514) list_double_fisheye_pane_g2

0xd8a0,	// (0x00068528) list_double_fisheye_pane_g3_ParamLimits

0xd8a0,	// (0x00068528) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0006a95e) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0006a95e) list_double_fisheye_pane_g

0x5f57,	// (0x00060bdf) list_double_fisheye_pane_t1_ParamLimits

0x5f57,	// (0x00060bdf) list_double_fisheye_pane_t1

0x5f72,	// (0x00060bfa) list_double_fisheye_pane_t2_ParamLimits

0x5f72,	// (0x00060bfa) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0006a969) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0006a969) list_double_fisheye_pane_t

0x6827,	// (0x000614af) main_call5_pane

0xd6c1,	// (0x00068349) sc_swipe_pane_ParamLimits

0xd6c1,	// (0x00068349) sc_swipe_pane

0xd8c9,	// (0x00068551) call5_image_pane_ParamLimits

0xd8c9,	// (0x00068551) call5_image_pane

0xd8d5,	// (0x0006855d) call5_swipe_1_pane_ParamLimits

0xd8d5,	// (0x0006855d) call5_swipe_1_pane

0xd8e1,	// (0x00068569) call5_swipe_2_pane_ParamLimits

0xd8e1,	// (0x00068569) call5_swipe_2_pane

0xd8f9,	// (0x00068581) popup_call5_audio_first_window_ParamLimits

0xd8f9,	// (0x00068581) popup_call5_audio_first_window

0x22fa,	// (0x0005cf82) call5_swipe_1_pane_g1_ParamLimits

0x22fa,	// (0x0005cf82) call5_swipe_1_pane_g1

0x3c46,	// (0x0005e8ce) call5_swipe_1_pane_g2_ParamLimits

0x3c46,	// (0x0005e8ce) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0006a96e) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0006a96e) call5_swipe_1_pane_g

0x3c52,	// (0x0005e8da) call5_swipe_1_pane_t1_ParamLimits

0x3c52,	// (0x0005e8da) call5_swipe_1_pane_t1

0x22fa,	// (0x0005cf82) call5_swipe_2_pane_g1_ParamLimits

0x22fa,	// (0x0005cf82) call5_swipe_2_pane_g1

0x3c67,	// (0x0005e8ef) call5_swipe_2_pane_g2_ParamLimits

0x3c67,	// (0x0005e8ef) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x0006a973) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x0006a973) call5_swipe_2_pane_g

0x3c73,	// (0x0005e8fb) call5_swipe_2_pane_t1_ParamLimits

0x3c73,	// (0x0005e8fb) call5_swipe_2_pane_t1

0x3c88,	// (0x0005e910) sc_swipe_pane_g1_ParamLimits

0x3c88,	// (0x0005e910) sc_swipe_pane_g1

0x3c95,	// (0x0005e91d) sc_swipe_pane_g2_ParamLimits

0x3c95,	// (0x0005e91d) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0006a978) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x0006a978) sc_swipe_pane_g

0x3ca1,	// (0x0005e929) sc_swipe_pane_t1_ParamLimits

0x3ca1,	// (0x0005e929) sc_swipe_pane_t1

0x6827,	// (0x000614af) main_cmail_launcher_pane

0xd905,	// (0x0006858d) aid_size_cell_cmail_l_ParamLimits

0xd905,	// (0x0006858d) aid_size_cell_cmail_l

0xd915,	// (0x0006859d) grid_cmail_l_pane_ParamLimits

0xd915,	// (0x0006859d) grid_cmail_l_pane

0xd921,	// (0x000685a9) cell_cmail_l_pane_ParamLimits

0xd921,	// (0x000685a9) cell_cmail_l_pane

0xd933,	// (0x000685bb) cell_cmail_l_pane_g1_ParamLimits

0xd933,	// (0x000685bb) cell_cmail_l_pane_g1

0xd943,	// (0x000685cb) cell_cmail_l_pane_t1_ParamLimits

0xd943,	// (0x000685cb) cell_cmail_l_pane_t1

0x3cb6,	// (0x0005e93e) cell_cmail_l_pane_t2_ParamLimits

0x3cb6,	// (0x0005e93e) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x0006a97d) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x0006a97d) cell_cmail_l_pane_t

0xf078,	// (0x00069d00) grid_highlight_pane_cp018_ParamLimits

0xf078,	// (0x00069d00) grid_highlight_pane_cp018

0x691d,	// (0x000615a5) main2_pane_ParamLimits

0x691d,	// (0x000615a5) main2_pane

0x7704,	// (0x0006238c) popup_sp_fs_action_menu_bg_pane_g1

0x770c,	// (0x00062394) popup_sp_fs_action_menu_bg_pane_g2

0x7714,	// (0x0006239c) popup_sp_fs_action_menu_bg_pane_g3

0x771c,	// (0x000623a4) popup_sp_fs_action_menu_bg_pane_g4

0x7724,	// (0x000623ac) popup_sp_fs_action_menu_bg_pane_g5

0x772c,	// (0x000623b4) popup_sp_fs_action_menu_bg_pane_g6

0x7734,	// (0x000623bc) popup_sp_fs_action_menu_bg_pane_g7

0x773c,	// (0x000623c4) popup_sp_fs_action_menu_bg_pane_g8

0x7744,	// (0x000623cc) popup_sp_fs_action_menu_bg_pane_g9

0x774c,	// (0x000623d4) popup_sp_fs_action_menu_bg_pane_g10

0x774c,	// (0x000623d4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00069e34) popup_sp_fs_action_menu_bg_pane_g

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g3_g1

0x57ce,	// (0x00060456) list_medium_line_x2_t3_g3_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_t3_g3_g2

0x57da,	// (0x00060462) list_medium_line_x2_t3_g3_g3_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00069ee4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00069ee4) list_medium_line_x2_t3_g3_g

0x57e6,	// (0x0006046e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x57e6,	// (0x0006046e) list_medium_line_x2_t3_g3_t1

0x57fb,	// (0x00060483) list_medium_line_x2_t3_g3_t2_ParamLimits

0x57fb,	// (0x00060483) list_medium_line_x2_t3_g3_t2

0x580d,	// (0x00060495) list_medium_line_x2_t3_g3_t3_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00069eeb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00069eeb) list_medium_line_x2_t3_g3_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g2_g1

0x57da,	// (0x00060462) list_medium_line_x2_t3_g2_g2_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00069ef2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00069ef2) list_medium_line_x2_t3_g2_g

0x5822,	// (0x000604aa) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5822,	// (0x000604aa) list_medium_line_x2_t3_g2_t1

0x5838,	// (0x000604c0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5838,	// (0x000604c0) list_medium_line_x2_t3_g2_t2

0x580d,	// (0x00060495) list_medium_line_x2_t3_g2_t3_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00069ef7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00069ef7) list_medium_line_x2_t3_g2_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t4_g4_g1

0x584a,	// (0x000604d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_x2_t4_g4_g2

0x57ce,	// (0x00060456) list_medium_line_x2_t4_g4_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_t4_g4_g3

0x5856,	// (0x000604de) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5856,	// (0x000604de) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00069efe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00069efe) list_medium_line_x2_t4_g4_g

0x5862,	// (0x000604ea) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5862,	// (0x000604ea) list_medium_line_x2_t4_g4_t1

0x5879,	// (0x00060501) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5879,	// (0x00060501) list_medium_line_x2_t4_g4_t2

0x588e,	// (0x00060516) list_medium_line_x2_t4_g4_t3_ParamLimits

0x588e,	// (0x00060516) list_medium_line_x2_t4_g4_t3

0x58a0,	// (0x00060528) list_medium_line_x2_t4_g4_t4_ParamLimits

0x58a0,	// (0x00060528) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00069f07) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00069f07) list_medium_line_x2_t4_g4_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g4_g1

0x584a,	// (0x000604d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_x2_t2_g4_g2

0x57ce,	// (0x00060456) list_medium_line_x2_t2_g4_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_t2_g4_g3

0x57da,	// (0x00060462) list_medium_line_x2_t2_g4_g4_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00069f6e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00069f6e) list_medium_line_x2_t2_g4_g

0x58b2,	// (0x0006053a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x58b2,	// (0x0006053a) list_medium_line_x2_t2_g4_t1

0x580d,	// (0x00060495) list_medium_line_x2_t2_g4_t2_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00069f77) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00069f77) list_medium_line_x2_t2_g4_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g3_g1

0x57ce,	// (0x00060456) list_medium_line_x2_t2_g3_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_t2_g3_g2

0x57da,	// (0x00060462) list_medium_line_x2_t2_g3_g3_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00069ee4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00069ee4) list_medium_line_x2_t2_g3_g

0x58c7,	// (0x0006054f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x58c7,	// (0x0006054f) list_medium_line_x2_t2_g3_t1

0x580d,	// (0x00060495) list_medium_line_x2_t2_g3_t2_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00069f7c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00069f7c) list_medium_line_x2_t2_g3_t

0x9165,	// (0x00063ded) main_sp_fs_list_pane_ParamLimits

0x9165,	// (0x00063ded) main_sp_fs_list_pane

0x9172,	// (0x00063dfa) sp_fs_scroll_pane_ParamLimits

0x9172,	// (0x00063dfa) sp_fs_scroll_pane

0x58dc,	// (0x00060564) list_medium_line_x2_t3_t1

0x58ec,	// (0x00060574) list_medium_line_x2_t3_t2

0x58fa,	// (0x00060582) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00069fc7) list_medium_line_x2_t3_t

0x5908,	// (0x00060590) list_medium_line_x3_t4_t1

0x5918,	// (0x000605a0) list_medium_line_x3_t4_t2

0x5926,	// (0x000605ae) list_medium_line_x3_t4_t3

0x5934,	// (0x000605bc) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00069fce) list_medium_line_x3_t4_t

0x5942,	// (0x000605ca) list_medium_line_x4_t5_t1

0x5952,	// (0x000605da) list_medium_line_x4_t5_t2

0x5926,	// (0x000605ae) list_medium_line_x4_t5_t3

0x5960,	// (0x000605e8) list_medium_line_x4_t5_t4

0x5934,	// (0x000605bc) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00069fd7) list_medium_line_x4_t5_t

0x57c2,	// (0x0006044a) list_medium_line_t4_g4_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t4_g4_g1

0x5856,	// (0x000604de) list_medium_line_t4_g4_g2_ParamLimits

0x5856,	// (0x000604de) list_medium_line_t4_g4_g2

0x596e,	// (0x000605f6) list_medium_line_t4_g4_g3_ParamLimits

0x596e,	// (0x000605f6) list_medium_line_t4_g4_g3

0x57da,	// (0x00060462) list_medium_line_t4_g4_g4_ParamLimits

0x57da,	// (0x00060462) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00069fe2) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00069fe2) list_medium_line_t4_g4_g

0x597a,	// (0x00060602) list_medium_line_t4_g4_t1_ParamLimits

0x597a,	// (0x00060602) list_medium_line_t4_g4_t1

0x598f,	// (0x00060617) list_medium_line_t4_g4_t2_ParamLimits

0x598f,	// (0x00060617) list_medium_line_t4_g4_t2

0x59a5,	// (0x0006062d) list_medium_line_t4_g4_t3_ParamLimits

0x59a5,	// (0x0006062d) list_medium_line_t4_g4_t3

0x59bb,	// (0x00060643) list_medium_line_t4_g4_t4_ParamLimits

0x59bb,	// (0x00060643) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00069feb) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00069feb) list_medium_line_t4_g4_t

0x93f4,	// (0x0006407c) chi_dic_find_pane_g1

0xa0d4,	// (0x00064d5c) main_tport_pane

0x5bd8,	// (0x00060860) list_medium_line_plain_t1

0x57c2,	// (0x0006044a) list_medium_line_t2_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t2_g2_g1

0x57ce,	// (0x00060456) list_medium_line_t2_g2_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x0006a6ba) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x0006a6ba) list_medium_line_t2_g2_g

0x5be6,	// (0x0006086e) list_medium_line_t2_g2_t1_ParamLimits

0x5be6,	// (0x0006086e) list_medium_line_t2_g2_t1

0x5bfd,	// (0x00060885) list_medium_line_t2_g2_t2_ParamLimits

0x5bfd,	// (0x00060885) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x0006a6bf) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x0006a6bf) list_medium_line_t2_g2_t

0x5e10,	// (0x00060a98) aid_sp_fs_list_icon_a_sm

0xccd1,	// (0x00067959) aid_sp_fs_list_icon_d

0x5e18,	// (0x00060aa0) aid_sp_fs_text_primary

0x3042,	// (0x0005dcca) aid_sp_fs_text_secondary

0xccd9,	// (0x00067961) list_medium_line

0xccd9,	// (0x00067961) list_medium_line_g2

0xccd9,	// (0x00067961) list_medium_line_g3

0xccd9,	// (0x00067961) list_medium_line_plain

0xccd9,	// (0x00067961) list_medium_line_plain_t2

0xccd9,	// (0x00067961) list_medium_line_plain_t3

0xccd9,	// (0x00067961) list_medium_line_right_icon

0xccd9,	// (0x00067961) list_medium_line_right_iconx2

0xccd9,	// (0x00067961) list_medium_line_t2

0xccd9,	// (0x00067961) list_medium_line_t2_g2

0xccd9,	// (0x00067961) list_medium_line_t2_g3

0xccd9,	// (0x00067961) list_medium_line_t2_right_icon

0xccd9,	// (0x00067961) list_medium_line_t2_right_iconx2

0xccd9,	// (0x00067961) list_medium_line_t3

0xccd9,	// (0x00067961) list_medium_line_t3_g2

0xccd9,	// (0x00067961) list_medium_line_t3_g3

0xccd9,	// (0x00067961) list_medium_line_t3_right_iconx2

0x5e21,	// (0x00060aa9) list_medium_line_t4_g4

0x5e2a,	// (0x00060ab2) list_medium_line_x2

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t2_g2

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t2_g3

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t2_g4

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t3

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t3_g2

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t3_g3

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t3_g4

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t4_g2

0x5e2a,	// (0x00060ab2) list_medium_line_x2_t4_g4

0x5e33,	// (0x00060abb) list_medium_line_x3

0x5e33,	// (0x00060abb) list_medium_line_x3_t4

0x5e33,	// (0x00060abb) list_medium_line_x3_t4_g4

0x5e21,	// (0x00060aa9) list_medium_line_x4_t4

0x5e21,	// (0x00060aa9) list_medium_line_x4_t4_g7

0x5e21,	// (0x00060aa9) list_medium_line_x4_t5

0x5e3c,	// (0x00060ac4) list_single_fs_dyc_pane_ParamLimits

0x5e3c,	// (0x00060ac4) list_single_fs_dyc_pane

0x57c2,	// (0x0006044a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x4_t4_g7_g1

0x5e74,	// (0x00060afc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5e74,	// (0x00060afc) list_medium_line_x4_t4_g7_g2

0x5e80,	// (0x00060b08) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5e80,	// (0x00060b08) list_medium_line_x4_t4_g7_g3

0x5e8f,	// (0x00060b17) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5e8f,	// (0x00060b17) list_medium_line_x4_t4_g7_g4

0x5e9b,	// (0x00060b23) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5e9b,	// (0x00060b23) list_medium_line_x4_t4_g7_g5

0x5eaa,	// (0x00060b32) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5eaa,	// (0x00060b32) list_medium_line_x4_t4_g7_g6

0x5eb9,	// (0x00060b41) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5eb9,	// (0x00060b41) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x0006a88a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x0006a88a) list_medium_line_x4_t4_g7_g

0x5ec5,	// (0x00060b4d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5ec5,	// (0x00060b4d) list_medium_line_x4_t4_g7_t1

0x5eda,	// (0x00060b62) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5eda,	// (0x00060b62) list_medium_line_x4_t4_g7_t2

0x5eef,	// (0x00060b77) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5eef,	// (0x00060b77) list_medium_line_x4_t4_g7_t3

0x5f04,	// (0x00060b8c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5f04,	// (0x00060b8c) list_medium_line_x4_t4_g7_t4

0x5f16,	// (0x00060b9e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5f16,	// (0x00060b9e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x0006a899) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x0006a899) list_medium_line_x4_t4_g7_t

0x5f28,	// (0x00060bb0) list_single_dyc_row_pane_ParamLimits

0x5f28,	// (0x00060bb0) list_single_dyc_row_pane

0xd8bd,	// (0x00068545) call5_gesture_pane_ParamLimits

0xd8bd,	// (0x00068545) call5_gesture_pane

0xd8ed,	// (0x00068575) call5_windows_pane_ParamLimits

0xd8ed,	// (0x00068575) call5_windows_pane

0xd959,	// (0x000685e1) call5_swipe_1_pane_cp_ParamLimits

0xd959,	// (0x000685e1) call5_swipe_1_pane_cp

0xd965,	// (0x000685ed) call5_swipe_2_pane_cp_ParamLimits

0xd965,	// (0x000685ed) call5_swipe_2_pane_cp

0xecf1,	// (0x00069979) call5_image_pane_cp

0xd971,	// (0x000685f9) popup_call5_audio_first_window_cp_ParamLimits

0xd971,	// (0x000685f9) popup_call5_audio_first_window_cp

0x3c88,	// (0x0005e910) call5_swipe_1_pane_g1_cp_ParamLimits

0x3c88,	// (0x0005e910) call5_swipe_1_pane_g1_cp

0x3cc8,	// (0x0005e950) call5_swipe_1_pane_g2_cp

0x3ca1,	// (0x0005e929) call5_swipe_1_pane_t1_cp_ParamLimits

0x3ca1,	// (0x0005e929) call5_swipe_1_pane_t1_cp

0x3c88,	// (0x0005e910) call5_swipe_2_pane_g1_cp_ParamLimits

0x3c88,	// (0x0005e910) call5_swipe_2_pane_g1_cp

0x3cd0,	// (0x0005e958) call5_swipe_2_pane_g2_cp

0x3cd8,	// (0x0005e960) call5_swipe_2_pane_t1_cp_ParamLimits

0x3cd8,	// (0x0005e960) call5_swipe_2_pane_t1_cp

0xf078,	// (0x00069d00) main_sp_fs_email_pane

0x3ced,	// (0x0005e975) main_sp_fs_listscroll_pane_te

0x5f94,	// (0x00060c1c) popup_sp_fs_action_menu_pane_ParamLimits

0x5f94,	// (0x00060c1c) popup_sp_fs_action_menu_pane

0x20cb,	// (0x0005cd53) bg_sp_fs_ctrlbar_pane_g1

0x3cf6,	// (0x0005e97e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3cff,	// (0x0005e987) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3d08,	// (0x0005e990) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x20cb,	// (0x0005cd53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x0006a982) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1eb8,	// (0x0005cb40) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1eb8,	// (0x0005cb40) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d11,	// (0x0005e999) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d11,	// (0x0005e999) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0a6,	// (0x00069d2e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf0a6,	// (0x00069d2e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x0006a98b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x0006a98b) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d1d,	// (0x0005e9a5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d1d,	// (0x0005e9a5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5fc4,	// (0x00060c4c) list_medium_line_t2_right_icon_g1

0x5fcc,	// (0x00060c54) list_medium_line_t2_right_icon_t1

0x5fdb,	// (0x00060c63) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x0006a990) list_medium_line_t2_right_icon_t

0x1c88,	// (0x0005c910) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1c88,	// (0x0005c910) bg_sp_fs_ctrlbar_pane

0xd9d2,	// (0x0006865a) main_sp_fs_ctrlbar_button_pane_cp01

0xd9da,	// (0x00068662) main_sp_fs_ctrlbar_ddmenu_pane

0x3d87,	// (0x0005ea0f) main_sp_fs_ctrlbar_pane_g1

0x3d93,	// (0x0005ea1b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0006a995) main_sp_fs_ctrlbar_pane_g

0x3d9f,	// (0x0005ea27) main_sp_fs_ctrlbar_pane_t1

0x5fe9,	// (0x00060c71) main_sp_fs_ctrlbar_pane

0x6001,	// (0x00060c89) main_sp_fs_listscroll_pane_te_cp01

0x6012,	// (0x00060c9a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6012,	// (0x00060c9a) popup_sp_fs_action_menu_pane_cp01

0xf078,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf078,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp01

0x6034,	// (0x00060cbc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6034,	// (0x00060cbc) sp_fs_action_menu_list_gene_pane_g1

0x3db4,	// (0x0005ea3c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3db4,	// (0x0005ea3c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x0006a99a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x0006a99a) sp_fs_action_menu_list_gene_pane_g

0x6043,	// (0x00060ccb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6043,	// (0x00060ccb) sp_fs_action_menu_list_gene_pane_t1

0x605b,	// (0x00060ce3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x605b,	// (0x00060ce3) sp_fs_action_menu_list_gene_pane

0x3dd9,	// (0x0005ea61) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3dd9,	// (0x0005ea61) popup_sp_fs_action_menu_bg_pane

0x6078,	// (0x00060d00) sp_fs_action_menu_list_pane_ParamLimits

0x6078,	// (0x00060d00) sp_fs_action_menu_list_pane

0x3de7,	// (0x0005ea6f) sp_fs_scroll_pane_cp01_ParamLimits

0x3de7,	// (0x0005ea6f) sp_fs_scroll_pane_cp01

0x6094,	// (0x00060d1c) list_medium_line_plain_t2_t1

0x60a3,	// (0x00060d2b) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x0006a99f) list_medium_line_plain_t2_t

0x60b1,	// (0x00060d39) list_medium_line_plain_t3_t1

0x60c1,	// (0x00060d49) list_medium_line_plain_t3_t2

0x60cf,	// (0x00060d57) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0006a9a4) list_medium_line_plain_t3_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t2_g2_g1

0x57da,	// (0x00060462) list_medium_line_x2_t2_g2_g2_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00069ef2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00069ef2) list_medium_line_x2_t2_g2_g

0x597a,	// (0x00060602) list_medium_line_x2_t2_g2_t1_ParamLimits

0x597a,	// (0x00060602) list_medium_line_x2_t2_g2_t1

0x580d,	// (0x00060495) list_medium_line_x2_t2_g2_t2_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x0006a9ab) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x0006a9ab) list_medium_line_x2_t2_g2_t

0x57c2,	// (0x0006044a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t4_g2_g1

0x60dd,	// (0x00060d65) list_medium_line_x2_t4_g2_g2_ParamLimits

0x60dd,	// (0x00060d65) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x0006a9b0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x0006a9b0) list_medium_line_x2_t4_g2_g

0x60ef,	// (0x00060d77) list_medium_line_x2_t4_g2_t1_ParamLimits

0x60ef,	// (0x00060d77) list_medium_line_x2_t4_g2_t1

0x6106,	// (0x00060d8e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6106,	// (0x00060d8e) list_medium_line_x2_t4_g2_t2

0x611b,	// (0x00060da3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x611b,	// (0x00060da3) list_medium_line_x2_t4_g2_t3

0x580d,	// (0x00060495) list_medium_line_x2_t4_g2_t4_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x0006a9b5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x0006a9b5) list_medium_line_x2_t4_g2_t

0x612d,	// (0x00060db5) list_medium_line_t3_right_iconx2_g1

0x5fc4,	// (0x00060c4c) list_medium_line_t3_right_iconx2_g2

0x6135,	// (0x00060dbd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x0006a9be) list_medium_line_t3_right_iconx2_g

0x613d,	// (0x00060dc5) list_medium_line_t3_right_iconx2_t1

0x614d,	// (0x00060dd5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x0006a9c5) list_medium_line_t3_right_iconx2_t

0x57c2,	// (0x0006044a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x3_t4_g4_g1

0x57ce,	// (0x00060456) list_medium_line_x3_t4_g4_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x3_t4_g4_g2

0x5856,	// (0x000604de) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5856,	// (0x000604de) list_medium_line_x3_t4_g4_g3

0x615b,	// (0x00060de3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x615b,	// (0x00060de3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x0006a9ca) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x0006a9ca) list_medium_line_x3_t4_g4_g

0x5be6,	// (0x0006086e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5be6,	// (0x0006086e) list_medium_line_x3_t4_g4_t1

0x5bfd,	// (0x00060885) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5bfd,	// (0x00060885) list_medium_line_x3_t4_g4_t2

0x6167,	// (0x00060def) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6167,	// (0x00060def) list_medium_line_x3_t4_g4_t3

0x617c,	// (0x00060e04) list_medium_line_x3_t4_g4_t4_ParamLimits

0x617c,	// (0x00060e04) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x0006a9d3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x0006a9d3) list_medium_line_x3_t4_g4_t

0x6199,	// (0x00060e21) list_single_dyc_row_text_pane_t1_ParamLimits

0x6199,	// (0x00060e21) list_single_dyc_row_text_pane_t1

0x61d0,	// (0x00060e58) list_single_dyc_row_text_pane_t2_ParamLimits

0x61d0,	// (0x00060e58) list_single_dyc_row_text_pane_t2

0x6227,	// (0x00060eaf) list_single_dyc_row_text_pane_t3_ParamLimits

0x6227,	// (0x00060eaf) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0006a9dc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0006a9dc) list_single_dyc_row_text_pane_t

0x6239,	// (0x00060ec1) list_single_dyc_row_pane_g1_ParamLimits

0x6239,	// (0x00060ec1) list_single_dyc_row_pane_g1

0x6245,	// (0x00060ecd) list_single_dyc_row_pane_g2_ParamLimits

0x6245,	// (0x00060ecd) list_single_dyc_row_pane_g2

0x6251,	// (0x00060ed9) list_single_dyc_row_pane_g3_ParamLimits

0x6251,	// (0x00060ed9) list_single_dyc_row_pane_g3

0x625d,	// (0x00060ee5) list_single_dyc_row_pane_g4_ParamLimits

0x625d,	// (0x00060ee5) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x0006a9e3) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x0006a9e3) list_single_dyc_row_pane_g

0x6269,	// (0x00060ef1) list_single_dyc_row_text_pane_ParamLimits

0x6269,	// (0x00060ef1) list_single_dyc_row_text_pane

0x6827,	// (0x000614af) bg_sp_fs_scroll_pane

0x3ec5,	// (0x0005eb4d) thumb_sp_fs_scroll_pane

0x57c2,	// (0x0006044a) list_medium_line_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_g1

0x597a,	// (0x00060602) list_medium_line_t1_ParamLimits

0x597a,	// (0x00060602) list_medium_line_t1

0x57c2,	// (0x0006044a) list_medium_line_x2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_g1

0x57ce,	// (0x00060456) list_medium_line_x2_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x0006a6ba) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x0006a6ba) list_medium_line_x2_g

0x6288,	// (0x00060f10) list_medium_line_x2_t1_ParamLimits

0x6288,	// (0x00060f10) list_medium_line_x2_t1

0x57c2,	// (0x0006044a) list_medium_line_x3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x3_g1

0x57ce,	// (0x00060456) list_medium_line_x3_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x0006a6ba) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x0006a6ba) list_medium_line_x3_g

0x6288,	// (0x00060f10) list_medium_line_x3_t1_ParamLimits

0x6288,	// (0x00060f10) list_medium_line_x3_t1

0x3ee4,	// (0x0005eb6c) thumb_sp_fs_scroll_pane_g1

0x3eed,	// (0x0005eb75) thumb_sp_fs_scroll_pane_g2

0x3ef6,	// (0x0005eb7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0006a9ec) thumb_sp_fs_scroll_pane_g

0x3ee4,	// (0x0005eb6c) bg_sp_fs_scroll_pane_g1

0x3eed,	// (0x0005eb75) bg_sp_fs_scroll_pane_g2

0x3ef6,	// (0x0005eb7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0006a9ec) bg_sp_fs_scroll_pane_g

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_x2_t3_g4_g1

0x584a,	// (0x000604d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_x2_t3_g4_g2

0x57ce,	// (0x00060456) list_medium_line_x2_t3_g4_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_x2_t3_g4_g3

0x57da,	// (0x00060462) list_medium_line_x2_t3_g4_g4_ParamLimits

0x57da,	// (0x00060462) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00069f6e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00069f6e) list_medium_line_x2_t3_g4_g

0x629e,	// (0x00060f26) list_medium_line_x2_t3_g4_t1_ParamLimits

0x629e,	// (0x00060f26) list_medium_line_x2_t3_g4_t1

0x62b4,	// (0x00060f3c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x62b4,	// (0x00060f3c) list_medium_line_x2_t3_g4_t2

0x580d,	// (0x00060495) list_medium_line_x2_t3_g4_t3_ParamLimits

0x580d,	// (0x00060495) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x0006a9f3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x0006a9f3) list_medium_line_x2_t3_g4_t

0x57c2,	// (0x0006044a) list_medium_line_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_g2_g1

0x57ce,	// (0x00060456) list_medium_line_g2_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x0006a6ba) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x0006a6ba) list_medium_line_g2_g

0x58c7,	// (0x0006054f) list_medium_line_g2_t1_ParamLimits

0x58c7,	// (0x0006054f) list_medium_line_g2_t1

0x57c2,	// (0x0006044a) list_medium_line_t3_g2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t3_g2_g1

0x57ce,	// (0x00060456) list_medium_line_t3_g2_g2_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x0006a6ba) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x0006a6ba) list_medium_line_t3_g2_g

0x62cd,	// (0x00060f55) list_medium_line_t3_g2_t1_ParamLimits

0x62cd,	// (0x00060f55) list_medium_line_t3_g2_t1

0x62e7,	// (0x00060f6f) list_medium_line_t3_g2_t2_ParamLimits

0x62e7,	// (0x00060f6f) list_medium_line_t3_g2_t2

0x62fc,	// (0x00060f84) list_medium_line_t3_g2_t3_ParamLimits

0x62fc,	// (0x00060f84) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x0006a9fa) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x0006a9fa) list_medium_line_t3_g2_t

0x5fc4,	// (0x00060c4c) list_medium_line_right_icon_g1

0x6312,	// (0x00060f9a) list_medium_line_right_icon_t1

0x57c2,	// (0x0006044a) list_medium_line_t2_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t2_g1

0x6320,	// (0x00060fa8) list_medium_line_t2_t1_ParamLimits

0x6320,	// (0x00060fa8) list_medium_line_t2_t1

0x633a,	// (0x00060fc2) list_medium_line_t2_t2_ParamLimits

0x633a,	// (0x00060fc2) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x0006aa01) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x0006aa01) list_medium_line_t2_t

0x57c2,	// (0x0006044a) list_medium_line_t3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t3_g1

0x60ef,	// (0x00060d77) list_medium_line_t3_t1_ParamLimits

0x60ef,	// (0x00060d77) list_medium_line_t3_t1

0x6106,	// (0x00060d8e) list_medium_line_t3_t2_ParamLimits

0x6106,	// (0x00060d8e) list_medium_line_t3_t2

0x611b,	// (0x00060da3) list_medium_line_t3_t3_ParamLimits

0x611b,	// (0x00060da3) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x0006aa06) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x0006aa06) list_medium_line_t3_t

0x57c2,	// (0x0006044a) list_medium_line_g3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_g3_g1

0x584a,	// (0x000604d2) list_medium_line_g3_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_g3_g2

0x57ce,	// (0x00060456) list_medium_line_g3_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0006aa0d) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0006aa0d) list_medium_line_g3_g

0x58b2,	// (0x0006053a) list_medium_line_g3_t1_ParamLimits

0x58b2,	// (0x0006053a) list_medium_line_g3_t1

0x57c2,	// (0x0006044a) list_medium_line_t2_g3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t2_g3_g1

0x584a,	// (0x000604d2) list_medium_line_t2_g3_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_t2_g3_g2

0x57ce,	// (0x00060456) list_medium_line_t2_g3_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0006aa0d) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0006aa0d) list_medium_line_t2_g3_g

0x634f,	// (0x00060fd7) list_medium_line_t2_g3_t1_ParamLimits

0x634f,	// (0x00060fd7) list_medium_line_t2_g3_t1

0x6366,	// (0x00060fee) list_medium_line_t2_g3_t2_ParamLimits

0x6366,	// (0x00060fee) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x0006aa14) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x0006aa14) list_medium_line_t2_g3_t

0x57c2,	// (0x0006044a) list_medium_line_t3_g3_g1_ParamLimits

0x57c2,	// (0x0006044a) list_medium_line_t3_g3_g1

0x584a,	// (0x000604d2) list_medium_line_t3_g3_g2_ParamLimits

0x584a,	// (0x000604d2) list_medium_line_t3_g3_g2

0x57ce,	// (0x00060456) list_medium_line_t3_g3_g3_ParamLimits

0x57ce,	// (0x00060456) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0006aa0d) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0006aa0d) list_medium_line_t3_g3_g

0x637b,	// (0x00061003) list_medium_line_t3_g3_t1_ParamLimits

0x637b,	// (0x00061003) list_medium_line_t3_g3_t1

0x638f,	// (0x00061017) list_medium_line_t3_g3_t2_ParamLimits

0x638f,	// (0x00061017) list_medium_line_t3_g3_t2

0x63a1,	// (0x00061029) list_medium_line_t3_g3_t3_ParamLimits

0x63a1,	// (0x00061029) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x0006aa19) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x0006aa19) list_medium_line_t3_g3_t

0x612d,	// (0x00060db5) list_medium_line_right_iconx2_g1

0x5fc4,	// (0x00060c4c) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x0006aa20) list_medium_line_right_iconx2_g

0x63b3,	// (0x0006103b) list_medium_line_right_iconx2_t1

0x612d,	// (0x00060db5) list_medium_line_t2_right_iconx2_g1

0x5fc4,	// (0x00060c4c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x0006aa20) list_medium_line_t2_right_iconx2_g

0x63c1,	// (0x00061049) list_medium_line_t2_right_iconx2_t1

0x63d1,	// (0x00061059) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x0006aa25) list_medium_line_t2_right_iconx2_t

0x5bd8,	// (0x00060860) list_medium_line_x4_t4_t1

0x63df,	// (0x00061067) list_medium_line_x4_t4_t2

0x63ed,	// (0x00061075) list_medium_line_x4_t4_t3

0x63fb,	// (0x00061083) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x0006aa2a) list_medium_line_x4_t4_t

0xda09,	// (0x00068691) tport_appsw_pane_ParamLimits

0xda09,	// (0x00068691) tport_appsw_pane

0xda15,	// (0x0006869d) tport_contact_pane_ParamLimits

0xda15,	// (0x0006869d) tport_contact_pane

0xda23,	// (0x000686ab) tport_listscroll_pane_ParamLimits

0xda23,	// (0x000686ab) tport_listscroll_pane

0xda31,	// (0x000686b9) cell_tport_appsw_pane_ParamLimits

0xda31,	// (0x000686b9) cell_tport_appsw_pane

0x23d3,	// (0x0005d05b) tport_appsw_pane_g1_ParamLimits

0x23d3,	// (0x0005d05b) tport_appsw_pane_g1

0x3f1b,	// (0x0005eba3) tport_contact_pane_g1

0x3f24,	// (0x0005ebac) tport_contact_pane_t1

0x3f32,	// (0x0005ebba) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x0006aa33) tport_contact_pane_t

0x3f40,	// (0x0005ebc8) list_tport_pane

0x775e,	// (0x000623e6) scroll_pane_cp_030

0x3f51,	// (0x0005ebd9) cell_tport_appsw_pane_g1

0x3f61,	// (0x0005ebe9) cell_tport_appsw_pane_t1

0x6827,	// (0x000614af) grid_highlight_pane_cp019

0xda58,	// (0x000686e0) list_tport_double_graphic_pane_ParamLimits

0xda58,	// (0x000686e0) list_tport_double_graphic_pane

0xf078,	// (0x00069d00) list_highlight_pane_cp023_ParamLimits

0xf078,	// (0x00069d00) list_highlight_pane_cp023

0xda65,	// (0x000686ed) list_tport_double_graphic_pane_g1_ParamLimits

0xda65,	// (0x000686ed) list_tport_double_graphic_pane_g1

0xda72,	// (0x000686fa) list_tport_double_graphic_pane_t1_ParamLimits

0xda72,	// (0x000686fa) list_tport_double_graphic_pane_t1

0xda87,	// (0x0006870f) list_tport_double_graphic_pane_t2_ParamLimits

0xda87,	// (0x0006870f) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x0006aa3f) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x0006aa3f) list_tport_double_graphic_pane_t

0x6827,	// (0x000614af) main_cale_note_pane

0xc0b6,	// (0x00066d3e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc0b6,	// (0x00066d3e) cell_vitu2_function_top_wide_pane_cp01

0xd616,	// (0x0006829e) wait_bar_pane_cp05_ParamLimits

0x6827,	// (0x000614af) listscroll_cmail_pane

0x3f6f,	// (0x0005ebf7) list_cmail_pane

0xda99,	// (0x00068721) list_cmail_body_pane

0xda99,	// (0x00068721) list_single_cmail_header_caption_pane

0xdab1,	// (0x00068739) list_single_cmail_header_detail_pane_ParamLimits

0xdab1,	// (0x00068739) list_single_cmail_header_detail_pane

0x3f8b,	// (0x0005ec13) list_single_cmail_header_caption_pane_t1

0x6411,	// (0x00061099) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6411,	// (0x00061099) list_single_cmail_header_detail_pane_g1

0xdadb,	// (0x00068763) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdadb,	// (0x00068763) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x0006aa44) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x0006aa44) list_single_cmail_header_detail_pane_g

0x6427,	// (0x000610af) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6427,	// (0x000610af) list_single_cmail_header_detail_pane_t1

0x647d,	// (0x00061105) list_single_cmail_header_editor_pane_bg_ParamLimits

0x647d,	// (0x00061105) list_single_cmail_header_editor_pane_bg

0x3fe8,	// (0x0005ec70) list_cmail_body_pane_g1

0x3ff1,	// (0x0005ec79) list_cmail_body_pane_t1

0x2ada,	// (0x0005d762) list_single_cmail_header_editor_pane_bg_g1

0x85c8,	// (0x00063250) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2aea,	// (0x0005d772) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2ae2,	// (0x0005d76a) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2d19,	// (0x0005d9a1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2b0a,	// (0x0005d792) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2afa,	// (0x0005d782) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2b02,	// (0x0005d78a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x85a8,	// (0x00063230) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdae7,	// (0x0006876f) calenote_gesture_pane_ParamLimits

0xdae7,	// (0x0006876f) calenote_gesture_pane

0xdaff,	// (0x00068787) calenote_window_pane_ParamLimits

0xdaff,	// (0x00068787) calenote_window_pane

0x3fff,	// (0x0005ec87) popup_note_window_cp01

0xdb17,	// (0x0006879f) calenote_swipe_1_pane_ParamLimits

0xdb17,	// (0x0006879f) calenote_swipe_1_pane

0xd965,	// (0x000685ed) calenote_swipe_2_pane_ParamLimits

0xd965,	// (0x000685ed) calenote_swipe_2_pane

0x3c88,	// (0x0005e910) calenote_swipe_1_pane_g1_ParamLimits

0x3c88,	// (0x0005e910) calenote_swipe_1_pane_g1

0x3c95,	// (0x0005e91d) calenote_swipe_1_pane_g2_ParamLimits

0x3c95,	// (0x0005e91d) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x0006a978) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x0006a978) calenote_swipe_1_pane_g

0x4011,	// (0x0005ec99) calenote_swipe_1_pane_t1_ParamLimits

0x4011,	// (0x0005ec99) calenote_swipe_1_pane_t1

0x3c88,	// (0x0005e910) calenote_swipe_2_pane_g1_ParamLimits

0x3c88,	// (0x0005e910) calenote_swipe_2_pane_g1

0x4030,	// (0x0005ecb8) calenote_swipe_2_pane_g2_ParamLimits

0x4030,	// (0x0005ecb8) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x0006aa50) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x0006aa50) calenote_swipe_2_pane_g

0x403c,	// (0x0005ecc4) calenote_swipe_2_pane_t1_ParamLimits

0x403c,	// (0x0005ecc4) calenote_swipe_2_pane_t1

0x6827,	// (0x000614af) main_mup_navstr_pane

0xaf8b,	// (0x00065c13) main_mup3_pane_t7_ParamLimits

0xaf8b,	// (0x00065c13) main_mup3_pane_t7

0xb917,	// (0x0006659f) main_mp4_pane_g6_ParamLimits

0xb917,	// (0x0006659f) main_mp4_pane_g6

0xbc4b,	// (0x000668d3) main_image3_pane_t4_ParamLimits

0xbc4b,	// (0x000668d3) main_image3_pane_t4

0xdb2a,	// (0x000687b2) popup_navstr_preview_pane_ParamLimits

0xdb2a,	// (0x000687b2) popup_navstr_preview_pane

0xdb36,	// (0x000687be) scroll_navstr_pane_ParamLimits

0xdb36,	// (0x000687be) scroll_navstr_pane

0x6827,	// (0x000614af) bg_popup_preview_window_pane_cp04

0x4063,	// (0x0005eceb) popup_navstr_preview_pane_t1

0xdb42,	// (0x000687ca) scroll_navstr_pane_g1_ParamLimits

0xdb42,	// (0x000687ca) scroll_navstr_pane_g1

0xdb4f,	// (0x000687d7) scroll_navstr_pane_t1_ParamLimits

0xdb4f,	// (0x000687d7) scroll_navstr_pane_t1

0x4008,	// (0x0005ec90) bg_button_pane_cp014

0x4008,	// (0x0005ec90) bg_button_pane_cp030

0x5f4b,	// (0x00060bd3) list_double_fisheye_pane_g4_ParamLimits

0x5f4b,	// (0x00060bd3) list_double_fisheye_pane_g4

0xd8ac,	// (0x00068534) list_double_fisheye_pane_g5_ParamLimits

0xd8ac,	// (0x00068534) list_double_fisheye_pane_g5

0x3f7f,	// (0x0005ec07) sp_fs_scroll_pane_cp03

0x3d87,	// (0x0005ea0f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3d93,	// (0x0005ea1b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0006a995) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3d9f,	// (0x0005ea27) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3f77,	// (0x0005ebff) sp_fs_scroll_pane_cp02

0x77ec,	// (0x00062474) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x77ec,	// (0x00062474) popup_sp_fs_calendar_preview_list_single_pane

0x6827,	// (0x000614af) main_cam6_pano_pane

0xf078,	// (0x00069d00) main_mup3_pane_ParamLimits

0x6827,	// (0x000614af) main_phacti_pane

0xd509,	// (0x00068191) bg_button_pane_cp11

0xd521,	// (0x000681a9) main_mobtv_info_pane_g2_ParamLimits

0xd521,	// (0x000681a9) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0006a8f5) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0006a8f5) main_mobtv_info_pane_g

0xd6ad,	// (0x00068335) sc_clock_pane_t5_ParamLimits

0xd6ad,	// (0x00068335) sc_clock_pane_t5

0xd737,	// (0x000683bf) main_radioblah_pane_g1_ParamLimits

0x3b51,	// (0x0005e7d9) main_radioblah_pane_t3_ParamLimits

0x3b51,	// (0x0005e7d9) main_radioblah_pane_t3

0x3b69,	// (0x0005e7f1) main_radioblah_pane_t4_ParamLimits

0x3b69,	// (0x0005e7f1) main_radioblah_pane_t4

0xd755,	// (0x000683dd) main_radioblah_text_pane_ParamLimits

0xd755,	// (0x000683dd) main_radioblah_text_pane

0xd762,	// (0x000683ea) main_radioblah_info_pane_g1_ParamLimits

0xd7ef,	// (0x00068477) main_radioblah_info_pane_t4_ParamLimits

0xd7ef,	// (0x00068477) main_radioblah_info_pane_t4

0xf078,	// (0x00069d00) main_sp_fs_calendar_pane

0xdb61,	// (0x000687e9) main_phacti_pane_g1

0xdb69,	// (0x000687f1) phacti_note_pane_ParamLimits

0xdb69,	// (0x000687f1) phacti_note_pane

0x407a,	// (0x0005ed02) phacti_term_pane_ParamLimits

0x407a,	// (0x0005ed02) phacti_term_pane

0x408f,	// (0x0005ed17) phacti_note_pane_t1_ParamLimits

0x408f,	// (0x0005ed17) phacti_note_pane_t1

0x648f,	// (0x00061117) phacti_term_pane_g1

0x6497,	// (0x0006111f) phacti_term_pane_t1_ParamLimits

0x6497,	// (0x0006111f) phacti_term_pane_t1

0x40d8,	// (0x0005ed60) popup_sp_fs_calendar_preview_list_single_pane_g1

0x40e0,	// (0x0005ed68) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x0006aa5a) popup_sp_fs_calendar_preview_list_single_pane_g

0x40e8,	// (0x0005ed70) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x40e8,	// (0x0005ed70) popup_sp_fs_calendar_preview_list_single_pane_t1

0x40fe,	// (0x0005ed86) aid_popup_sp_fs_bg_corner_pane

0x20cb,	// (0x0005cd53) popup_sp_fs_calendar_preview_bg_pane_g1

0x6827,	// (0x000614af) popup_sp_fs_calendar_preview_bg_pane

0x4106,	// (0x0005ed8e) popup_sp_fs_calendar_preview_list_pane

0xf078,	// (0x00069d00) bg_main_sp_fs_cale_pane_ParamLimits

0xf078,	// (0x00069d00) bg_main_sp_fs_cale_pane

0x64c1,	// (0x00061149) listscroll_cale_mrui_pane_ParamLimits

0x64c1,	// (0x00061149) listscroll_cale_mrui_pane

0x2b4a,	// (0x0005d7d2) listscroll_sp_fs_schedule_track_pane

0x64d5,	// (0x0006115d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x64d5,	// (0x0006115d) main_sp_fs_ctrlbar_pane_cp01

0x413c,	// (0x0005edc4) main_sp_fs_ribbon_pane

0x64e6,	// (0x0006116e) popup_sp_fs_cale_preview_window

0xdba4,	// (0x0006882c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdba4,	// (0x0006882c) list_single_sp_fs_schedule_track_pane

0x6a73,	// (0x000616fb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6a73,	// (0x000616fb) bg_sp_fs_highlight_list_pane_cp03

0xdbb9,	// (0x00068841) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdbb9,	// (0x00068841) list_single_sp_fs_schedule_track_pane_g1

0xdbc5,	// (0x0006884d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdbc5,	// (0x0006884d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x0006aa5f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x0006aa5f) list_single_sp_fs_schedule_track_pane_g

0xdbd1,	// (0x00068859) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdbd1,	// (0x00068859) list_single_sp_fs_schedule_track_pane_t1

0xdbe9,	// (0x00068871) sp_fs_schedule_track_pane_ParamLimits

0xdbe9,	// (0x00068871) sp_fs_schedule_track_pane

0x4153,	// (0x0005eddb) sp_fs_schedule_track_pane_g1

0x415b,	// (0x0005ede3) sp_fs_schedule_track_pane_g2

0x4163,	// (0x0005edeb) sp_fs_schedule_track_pane_g3

0x416b,	// (0x0005edf3) sp_fs_schedule_track_pane_g4

0x4173,	// (0x0005edfb) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x0006aa64) sp_fs_schedule_track_pane_g

0x2ada,	// (0x0005d762) bg_sp_fs_schedule_viewer_highlight_g1

0x85c8,	// (0x00063250) bg_sp_fs_schedule_viewer_highlight_g2

0x2ae2,	// (0x0005d76a) bg_sp_fs_schedule_viewer_highlight_g3

0x2aea,	// (0x0005d772) bg_sp_fs_schedule_viewer_highlight_g4

0x2d19,	// (0x0005d9a1) bg_sp_fs_schedule_viewer_highlight_g5

0x2afa,	// (0x0005d782) bg_sp_fs_schedule_viewer_highlight_g6

0x2b02,	// (0x0005d78a) bg_sp_fs_schedule_viewer_highlight_g7

0x2b0a,	// (0x0005d792) bg_sp_fs_schedule_viewer_highlight_g8

0x85a8,	// (0x00063230) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x0006aa6f) bg_sp_fs_schedule_viewer_highlight_g

0x6827,	// (0x000614af) bg_main_sp_fs_ribbon_pane

0xbe40,	// (0x00066ac8) main_sp_fs_ribbon_pane_g1

0x417b,	// (0x0005ee03) main_sp_fs_ribbon_pane_t1

0xdbf9,	// (0x00068881) main_sp_fs_ribbon_pane_t2

0x418a,	// (0x0005ee12) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x0006aa82) main_sp_fs_ribbon_pane_t

0x4199,	// (0x0005ee21) main_sp_fs_ribbon_scheduler_pane

0x41a1,	// (0x0005ee29) bg_main_sp_fs_ribbon_pane_g1

0x41aa,	// (0x0005ee32) bg_main_sp_fs_ribbon_pane_g2

0x41b3,	// (0x0005ee3b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x0006aa89) bg_main_sp_fs_ribbon_pane_g

0x41bb,	// (0x0005ee43) main_sp_fs_ribbon_scheduler_pane_g1

0x41c4,	// (0x0005ee4c) main_sp_fs_ribbon_scheduler_pane_g2

0x41cd,	// (0x0005ee55) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x0006aa90) main_sp_fs_ribbon_scheduler_pane_g

0x3bc3,	// (0x0005e84b) list_cale_mrui_pane

0x41d6,	// (0x0005ee5e) sp_fs_scroll_pane_cp07_ParamLimits

0x41d6,	// (0x0005ee5e) sp_fs_scroll_pane_cp07

0xdc08,	// (0x00068890) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdc08,	// (0x00068890) bg_sp_fs_schedule_viewer_highlight

0x41eb,	// (0x0005ee73) list_single_sp_fs_schedule_track_pane_cp01

0x41f3,	// (0x0005ee7b) list_sp_fs_schedule_track_pane

0x41fb,	// (0x0005ee83) sp_fs_scroll_pane_cp06_ParamLimits

0x41fb,	// (0x0005ee83) sp_fs_scroll_pane_cp06

0x20cb,	// (0x0005cd53) bgmain_sp_fs_calendar_pane_g1

0x64f8,	// (0x00061180) list_single_cale_mrui_pane_ParamLimits

0x64f8,	// (0x00061180) list_single_cale_mrui_pane

0x651d,	// (0x000611a5) list_single_cale_mrui_row_pane_ParamLimits

0x651d,	// (0x000611a5) list_single_cale_mrui_row_pane

0x652a,	// (0x000611b2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x652a,	// (0x000611b2) list_single_cale_mrui_row_pane_g1

0x6562,	// (0x000611ea) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6562,	// (0x000611ea) list_single_cale_mrui_row_pane_t1

0x6574,	// (0x000611fc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6574,	// (0x000611fc) list_single_cale_mrui_row_pane_t2

0x65da,	// (0x00061262) list_single_cale_mrui_row_pane_t3_ParamLimits

0x65da,	// (0x00061262) list_single_cale_mrui_row_pane_t3

0x6609,	// (0x00061291) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6609,	// (0x00061291) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x0006aa9c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x0006aa9c) list_single_cale_mrui_row_pane_t

0x6638,	// (0x000612c0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6638,	// (0x000612c0) list_single_cmail_header_editor_pane_bg_cp01

0x665c,	// (0x000612e4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x665c,	// (0x000612e4) list_single_cmail_header_editor_pane_bg_cp02

0xdc15,	// (0x0006889d) main_radioblah_text_pane_t1_ParamLimits

0xdc15,	// (0x0006889d) main_radioblah_text_pane_t1

0xdc2e,	// (0x000688b6) cam6_indi_pane_cp01

0xdc36,	// (0x000688be) cam6_mode_pane_cp01

0xdc3e,	// (0x000688c6) cam6_pano_pane

0xdc47,	// (0x000688cf) cam6_zoom_pane_cp01

0xdc4f,	// (0x000688d7) cam6_pano_image_pane

0xdc58,	// (0x000688e0) cam6_pano_pane_g1

0x38cf,	// (0x0005e557) cam6_pano_pane_g2

0xdc61,	// (0x000688e9) cam6_pano_pane_g3

0xdc6a,	// (0x000688f2) cam6_pano_pane_g4

0x2631,	// (0x0005d2b9) cam6_pano_pane_g5

0xdc73,	// (0x000688fb) cam6_pano_pane_g6

0xdc7b,	// (0x00068903) cam6_pano_pane_g7

0xdc83,	// (0x0006890b) cam6_pano_pane_g8

0xdc8c,	// (0x00068914) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x0006aaa5) cam6_pano_pane_g

0x6827,	// (0x000614af) main_browser_tag_pane

0x405b,	// (0x0005ece3) grid_navstr_albumart_pane

0xdc95,	// (0x0006891d) cell_navstr_albumart_pane_ParamLimits

0xdc95,	// (0x0006891d) cell_navstr_albumart_pane

0xee52,	// (0x00069ada) cell_navstr_albumart_pane_g1

0x1a65,	// (0x0005c6ed) cell_navstr_albumart_pane_g2

0x1a75,	// (0x0005c6fd) cell_navstr_albumart_pane_g3

0x1a6d,	// (0x0005c6f5) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x0006aab8) cell_navstr_albumart_pane_g

0xdcac,	// (0x00068934) bt_list_pane_ParamLimits

0xdcac,	// (0x00068934) bt_list_pane

0xdcc1,	// (0x00068949) bt_list_pane_t1

0xdcd0,	// (0x00068958) bt_list_pane_t2

0x0001,

0xfe39,	// (0x0006aac1) bt_list_pane_t

0x6827,	// (0x000614af) main_cale_prevew_pane

0xdcdf,	// (0x00068967) popup_cale_preview_window_ParamLimits

0xdcdf,	// (0x00068967) popup_cale_preview_window

0xf078,	// (0x00069d00) bg_popup_preview_window_pane_cp05_ParamLimits

0xf078,	// (0x00069d00) bg_popup_preview_window_pane_cp05

0xdcf4,	// (0x0006897c) list_cale_preview_pane_ParamLimits

0xdcf4,	// (0x0006897c) list_cale_preview_pane

0xdd00,	// (0x00068988) list_double_cale_preview_pane_ParamLimits

0xdd00,	// (0x00068988) list_double_cale_preview_pane

0xdd11,	// (0x00068999) list_single_cale_preview_pane_ParamLimits

0xdd11,	// (0x00068999) list_single_cale_preview_pane

0xdd25,	// (0x000689ad) list_single_cale_preview_pane_g1

0xdd2d,	// (0x000689b5) list_single_cale_preview_pane_t1_ParamLimits

0xdd2d,	// (0x000689b5) list_single_cale_preview_pane_t1

0xdd42,	// (0x000689ca) list_double_cale_preview_pane_g1

0xdd4a,	// (0x000689d2) list_double_cale_preview_pane_t1_ParamLimits

0xdd4a,	// (0x000689d2) list_double_cale_preview_pane_t1

0xdd5f,	// (0x000689e7) list_double_cale_preview_pane_t2_ParamLimits

0xdd5f,	// (0x000689e7) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x0006aac6) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x0006aac6) list_double_cale_preview_pane_t

0x6827,	// (0x000614af) main_ezdial_pane

0xf078,	// (0x00069d00) main_sp_fs_email_pane_ParamLimits

0xd97d,	// (0x00068605) cmail_ddmenu_btn01_pane_ParamLimits

0xd97d,	// (0x00068605) cmail_ddmenu_btn01_pane

0xd99a,	// (0x00068622) cmail_ddmenu_btn02_pane_ParamLimits

0xd99a,	// (0x00068622) cmail_ddmenu_btn02_pane

0xd9b8,	// (0x00068640) cmail_ddmenu_btn03_pane_ParamLimits

0xd9b8,	// (0x00068640) cmail_ddmenu_btn03_pane

0x5fe9,	// (0x00060c71) main_sp_fs_ctrlbar_pane_ParamLimits

0x6001,	// (0x00060c89) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda99,	// (0x00068721) list_cmail_body_pane_ParamLimits

0x6409,	// (0x00061091) bg_button_pane_cp12

0x3fa1,	// (0x0005ec29) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3fa1,	// (0x0005ec29) list_single_cmail_header_detail_pane_g3

0x6459,	// (0x000610e1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6459,	// (0x000610e1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0006aa4b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0006aa4b) list_single_cmail_header_detail_pane_t

0x64ac,	// (0x00061134) phacti_term_pane_t2_ParamLimits

0x64ac,	// (0x00061134) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x0006aa55) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x0006aa55) phacti_term_pane_t

0xdd77,	// (0x000689ff) aid_size_list_single_double

0xdd83,	// (0x00068a0b) popup_ezdial_listscroll_window

0xdd9c,	// (0x00068a24) popup_number_entry_window_cp01

0xecf1,	// (0x00069979) bg_popup_call_pane_cp09

0xdda8,	// (0x00068a30) ezdial_list_pane

0xddb0,	// (0x00068a38) scroll_pane_cp23

0x1eb8,	// (0x0005cb40) bg_button_pane_cp028_ParamLimits

0x1eb8,	// (0x0005cb40) bg_button_pane_cp028

0xddb8,	// (0x00068a40) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xddb8,	// (0x00068a40) cmail_ddmenu_btn01_pane_g1

0xddca,	// (0x00068a52) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xddca,	// (0x00068a52) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x0006aacb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x0006aacb) cmail_ddmenu_btn01_pane_g

0xddd6,	// (0x00068a5e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xddd6,	// (0x00068a5e) cmail_ddmenu_btn01_pane_t1

0x1c88,	// (0x0005c910) bg_button_pane_cp029_ParamLimits

0x1c88,	// (0x0005c910) bg_button_pane_cp029

0xddca,	// (0x00068a52) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xddca,	// (0x00068a52) cmail_ddmenu_btn02_pane_g1

0xddf7,	// (0x00068a7f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xddf7,	// (0x00068a7f) cmail_ddmenu_btn02_pane_t1

0x6a73,	// (0x000616fb) bg_button_pane_cp031_ParamLimits

0x6a73,	// (0x000616fb) bg_button_pane_cp031

0xddca,	// (0x00068a52) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xddca,	// (0x00068a52) cmail_ddmenu_btn03_pane_g1

0xddf7,	// (0x00068a7f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xddf7,	// (0x00068a7f) cmail_ddmenu_btn03_pane_t1

0xbb08,	// (0x00066790) cell_dialer2_keypad_pane_t1_ParamLimits

0xbb22,	// (0x000667aa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbb22,	// (0x000667aa) cell_dialer2_keypad_pane_t1_copy1

0xd3b1,	// (0x00068039) ncimui_group_button_pane

0xf078,	// (0x00069d00) main_sp_fs_calendar_pane_ParamLimits

0xda99,	// (0x00068721) list_single_cmail_header_caption_pane_ParamLimits

0x3042,	// (0x0005dcca) aid_recal_txt_sm_pane

0x6827,	// (0x000614af) mian_recal_day_pane

0x64e6,	// (0x0006116e) popup_sp_fs_cale_preview_window_ParamLimits

0x6827,	// (0x000614af) list_recal_day_pane

0x6683,	// (0x0006130b) list_single_recal_day_pane_ParamLimits

0x6683,	// (0x0006130b) list_single_recal_day_pane

0xde2b,	// (0x00068ab3) list_single_recal_day_pane_g1_ParamLimits

0xde2b,	// (0x00068ab3) list_single_recal_day_pane_g1

0x6695,	// (0x0006131d) list_single_recal_day_pane_g2_ParamLimits

0x6695,	// (0x0006131d) list_single_recal_day_pane_g2

0x66a1,	// (0x00061329) list_single_recal_day_pane_g3_ParamLimits

0x66a1,	// (0x00061329) list_single_recal_day_pane_g3

0x66ad,	// (0x00061335) list_single_recal_day_pane_g4_ParamLimits

0x66ad,	// (0x00061335) list_single_recal_day_pane_g4

0x66b9,	// (0x00061341) list_single_recal_day_pane_g5_ParamLimits

0x66b9,	// (0x00061341) list_single_recal_day_pane_g5

0x66c5,	// (0x0006134d) list_single_recal_day_pane_g6_ParamLimits

0x66c5,	// (0x0006134d) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x0006aada) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x0006aada) list_single_recal_day_pane_g

0x66d1,	// (0x00061359) list_single_recal_day_pane_t1

0x66df,	// (0x00061367) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x0006aae7) list_single_recal_day_pane_t

0xde37,	// (0x00068abf) ncimui_query_button_pane_ParamLimits

0xde37,	// (0x00068abf) ncimui_query_button_pane

0xde47,	// (0x00068acf) ncimui_query_button_pane_t1_ParamLimits

0xde47,	// (0x00068acf) ncimui_query_button_pane_t1

0xde5a,	// (0x00068ae2) ncimui_query_button_pane_t2_ParamLimits

0xde5a,	// (0x00068ae2) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0006aaec) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0006aaec) ncimui_query_button_pane_t

0xde6d,	// (0x00068af5) query_button_pane_ParamLimits

0xde6d,	// (0x00068af5) query_button_pane

0x6827,	// (0x000614af) bg_button_pane_cp0028

0xde7a,	// (0x00068b02) query_button_pane_t1

0xa0d4,	// (0x00064d5c) main_tport_pane_ParamLimits

0xd9e4,	// (0x0006866c) bg_popup_window_pane_cp01_ParamLimits

0xd9e4,	// (0x0006866c) bg_popup_window_pane_cp01

0xd9f1,	// (0x00068679) heading_pane_cp08_ParamLimits

0xd9f1,	// (0x00068679) heading_pane_cp08

0xd9fd,	// (0x00068685) heading_pane_cp07_ParamLimits

0xd9fd,	// (0x00068685) heading_pane_cp07

0x3f51,	// (0x0005ebd9) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x0006aa38) cell_tport_appsw_pane_g

0x59e8,	// (0x00060670) input_candi_list_open_g1

0x8fa6,	// (0x00063c2e) list_cale_time_pane_g6_ParamLimits

0x8fa6,	// (0x00063c2e) list_cale_time_pane_g6

0xaa7d,	// (0x00065705) aid_size_touch_calib_1_ParamLimits

0xaa7d,	// (0x00065705) aid_size_touch_calib_1

0xaa89,	// (0x00065711) aid_size_touch_calib_2_ParamLimits

0xaa89,	// (0x00065711) aid_size_touch_calib_2

0xaa95,	// (0x0006571d) aid_size_touch_calib_3_ParamLimits

0xaa95,	// (0x0006571d) aid_size_touch_calib_3

0xaaa3,	// (0x0006572b) aid_size_touch_calib_4_ParamLimits

0xaaa3,	// (0x0006572b) aid_size_touch_calib_4

0xaab1,	// (0x00065739) main_touch_calib_button_group_pane_ParamLimits

0xaab1,	// (0x00065739) main_touch_calib_button_group_pane

0xaabe,	// (0x00065746) main_touch_calib_pane_g1_ParamLimits

0xaaca,	// (0x00065752) main_touch_calib_pane_g2_ParamLimits

0xaad6,	// (0x0006575e) main_touch_calib_pane_g3_ParamLimits

0xaae2,	// (0x0006576a) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x0006a410) main_touch_calib_pane_g_ParamLimits

0xaaee,	// (0x00065776) main_touch_calib_pane_t1_ParamLimits

0xab03,	// (0x0006578b) main_touch_calib_pane_t2_ParamLimits

0xab18,	// (0x000657a0) main_touch_calib_pane_t3_ParamLimits

0xab2a,	// (0x000657b2) main_touch_calib_pane_t4_ParamLimits

0xab3c,	// (0x000657c4) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x0006a419) main_touch_calib_pane_t_ParamLimits

0x245c,	// (0x0005d0e4) list_single_fp_cale_pane_g3_ParamLimits

0x245c,	// (0x0005d0e4) list_single_fp_cale_pane_g3

0xf078,	// (0x00069d00) bg_button_pane_cp012_ParamLimits

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp03_ParamLimits

0xc7cd,	// (0x00067455) cell_vitu2_function_top_pane_g1_ParamLimits

0xf078,	// (0x00069d00) bg_vkb2_func_pane_cp04_ParamLimits

0xd351,	// (0x00067fd9) main_ncimui_button_group_pane_ParamLimits

0xd351,	// (0x00067fd9) main_ncimui_button_group_pane

0xd39f,	// (0x00068027) main_ncimui_pane_t3_ParamLimits

0xd39f,	// (0x00068027) main_ncimui_pane_t3

0x4071,	// (0x0005ecf9) phacti_button_group_pane

0xdd77,	// (0x000689ff) aid_size_list_single_double_ParamLimits

0xdd83,	// (0x00068a0b) popup_ezdial_listscroll_window_ParamLimits

0xdd9c,	// (0x00068a24) popup_number_entry_window_cp01_ParamLimits

0xde88,	// (0x00068b10) phacti_button_pane_ParamLimits

0xde88,	// (0x00068b10) phacti_button_pane

0x6827,	// (0x000614af) bg_button_pane_cp14

0xde97,	// (0x00068b1f) phacti_button_pane_t1

0xdea5,	// (0x00068b2d) main_touch_calib_button_pane_ParamLimits

0xdea5,	// (0x00068b2d) main_touch_calib_button_pane

0x74dc,	// (0x00062164) bg_button_pane_cp18_ParamLimits

0x74dc,	// (0x00062164) bg_button_pane_cp18

0xdeb5,	// (0x00068b3d) main_touch_calib_button_pane_t1_ParamLimits

0xdeb5,	// (0x00068b3d) main_touch_calib_button_pane_t1

0xdecb,	// (0x00068b53) main_touch_calib_button_pane_t2_ParamLimits

0xdecb,	// (0x00068b53) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x0006aaf1) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x0006aaf1) main_touch_calib_button_pane_t

0x6827,	// (0x000614af) cell_ncimui_button_pane

0x6827,	// (0x000614af) bg_button_pane_cp032

0xdee9,	// (0x00068b71) cell_ncimui_button_pane_t1

0xbb74,	// (0x000667fc) image3_infobar_pane_ParamLimits

0xbb74,	// (0x000667fc) image3_infobar_pane

0xd6cd,	// (0x00068355) fs_bigclock_status_pane_ParamLimits

0xd6cd,	// (0x00068355) fs_bigclock_status_pane

0xd6da,	// (0x00068362) main_fs_bigclock_clock_pane_ParamLimits

0xd6da,	// (0x00068362) main_fs_bigclock_clock_pane

0xd6ea,	// (0x00068372) main_fs_bigclock_indi_pane_ParamLimits

0xd6ea,	// (0x00068372) main_fs_bigclock_indi_pane

0xd70f,	// (0x00068397) main_fs_bigclock_swipe_pane_ParamLimits

0xd70f,	// (0x00068397) main_fs_bigclock_swipe_pane

0x6827,	// (0x000614af) main_fs_clock_dumped_data

0x39dc,	// (0x0005e664) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x39dc,	// (0x0005e664) list_single_fs_bigclock_indicator_pane_g1

0x39f6,	// (0x0005e67e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x39f6,	// (0x0005e67e) list_single_fs_bigclock_indicator_pane_g2

0x3a10,	// (0x0005e698) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3a10,	// (0x0005e698) list_single_fs_bigclock_indicator_pane_g3

0x3a2a,	// (0x0005e6b2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3a2a,	// (0x0005e6b2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0006a929) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0006a929) list_single_fs_bigclock_indicator_pane_g

0x3a4e,	// (0x0005e6d6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3a4e,	// (0x0005e6d6) list_single_fs_bigclock_indicator_pane_t1

0x3a76,	// (0x0005e6fe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3a76,	// (0x0005e6fe) list_single_fs_bigclock_indicator_pane_t2

0x3a9e,	// (0x0005e726) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3a9e,	// (0x0005e726) list_single_fs_bigclock_indicator_pane_t3

0x3ac6,	// (0x0005e74e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3ac6,	// (0x0005e74e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0006a934) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0006a934) list_single_fs_bigclock_indicator_pane_t

0xdef7,	// (0x00068b7f) image3_infobar_fav_pane_ParamLimits

0xdef7,	// (0x00068b7f) image3_infobar_fav_pane

0xdf07,	// (0x00068b8f) image3_infobar_loc_pane_ParamLimits

0xdf07,	// (0x00068b8f) image3_infobar_loc_pane

0xdf1b,	// (0x00068ba3) image3_infobar_time_pane_ParamLimits

0xdf1b,	// (0x00068ba3) image3_infobar_time_pane

0x20cb,	// (0x0005cd53) image3_infobar_time_pane_g1

0xdf2b,	// (0x00068bb3) image3_infobar_time_pane_t1

0x20cb,	// (0x0005cd53) image3_infobar_loc_pane_g1

0xdf39,	// (0x00068bc1) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x0006aaf6) image3_infobar_loc_pane_g

0xdf41,	// (0x00068bc9) image3_infobar_loc_pane_t1

0x20cb,	// (0x0005cd53) image3_infobar_fav_pane_g1

0xdf4f,	// (0x00068bd7) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0006aafb) image3_infobar_fav_pane_g

0xdf57,	// (0x00068bdf) fs_bigclock_status_battery_pane

0xdf60,	// (0x00068be8) fs_bigclock_status_signal_pane

0xdf69,	// (0x00068bf1) fs_bigclock_status_title_pane

0xdf72,	// (0x00068bfa) fs_bigclock_status_signal_pane_g1

0xdf7b,	// (0x00068c03) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x0006ab00) fs_bigclock_status_signal_pane_g

0xdf83,	// (0x00068c0b) fs_bigclock_status_battery_pane_g1

0xdf8c,	// (0x00068c14) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x0006ab05) fs_bigclock_status_battery_pane_g

0xdf94,	// (0x00068c1c) fs_bigclock_status_title_pane_t1

0x20cb,	// (0x0005cd53) main_fs_bigclock_clock_pane_g1

0xdfa2,	// (0x00068c2a) main_fs_bigclock_clock_pane_g2

0xdfa2,	// (0x00068c2a) main_fs_bigclock_clock_pane_g3

0xdfa2,	// (0x00068c2a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x0006ab0a) main_fs_bigclock_clock_pane_g

0xdfaa,	// (0x00068c32) main_fs_bigclock_clock_pane_t1

0xdfb8,	// (0x00068c40) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x0006ab13) main_fs_bigclock_clock_pane_t

0xdfc7,	// (0x00068c4f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdfc7,	// (0x00068c4f) list_single_fs_bigclock_indicator_pane

0xdfd8,	// (0x00068c60) list_single_fs_bigclock_pane_ParamLimits

0xdfd8,	// (0x00068c60) list_single_fs_bigclock_pane

0xe03f,	// (0x00068cc7) main_fs_bigclock_indicator_pane_t1

0xe04e,	// (0x00068cd6) list_single_fs_bigclock_pane_g1

0xe056,	// (0x00068cde) list_single_fs_bigclock_pane_t1

0x20cb,	// (0x0005cd53) main_fs_bigclock_swipe_pane_g1

0xe094,	// (0x00068d1c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x0006ab24) main_fs_bigclock_swipe_pane_g

0xe09c,	// (0x00068d24) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe09c,	// (0x00068d24) main_fs_bigclock_swipe_pane_t1

0x928d,	// (0x00063f15) call_type_pane_ParamLimits

0x6827,	// (0x000614af) main_btmg_pane

0x6556,	// (0x000611de) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6556,	// (0x000611de) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x0006aa97) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x0006aa97) list_single_cale_mrui_row_pane_g

0xde1b,	// (0x00068aa3) list_recal_vselct_arw_lo_pane

0xde23,	// (0x00068aab) list_recal_vselct_arw_up_pane

0x667a,	// (0x00061302) list_recal_vselct_pane

0xe0b9,	// (0x00068d41) btmg_button_pane

0xe0c1,	// (0x00068d49) main_btmg_pane_g1

0x6827,	// (0x000614af) bg_button_pane_cp044

0xe0c9,	// (0x00068d51) btmg_button_pane_t1

0x1c80,	// (0x0005c908) aid_listscroll_gen

0xf078,	// (0x00069d00) main_cntbar_detail_pane

0x3f6f,	// (0x0005ebf7) list_cmail_folder_pane

0x3f7f,	// (0x0005ec07) sp_fs_scroll_pane_cp03_ParamLimits

0x66ed,	// (0x00061375) list_single_fs_dyc_pane_cp01_ParamLimits

0x66ed,	// (0x00061375) list_single_fs_dyc_pane_cp01

0xe0d7,	// (0x00068d5f) aid_size_cmail_indent

0xccd9,	// (0x00067961) list_single_dyc_row_pane_cp01

0xe0fa,	// (0x00068d82) cntbar_detail_list_pane_ParamLimits

0xe0fa,	// (0x00068d82) cntbar_detail_list_pane

0xe130,	// (0x00068db8) main_cntbar_detail_cont_pane_ParamLimits

0xe130,	// (0x00068db8) main_cntbar_detail_cont_pane

0xe13c,	// (0x00068dc4) scroll_pane_cp032_ParamLimits

0xe13c,	// (0x00068dc4) scroll_pane_cp032

0xe148,	// (0x00068dd0) cntbar_detail_list_event_pane_ParamLimits

0xe148,	// (0x00068dd0) cntbar_detail_list_event_pane

0xe106,	// (0x00068d8e) cntbar_detail_list_shct_pane

0xe158,	// (0x00068de0) aid_list_gen

0x775e,	// (0x000623e6) aid_scroll

0x3029,	// (0x0005dcb1) aid_size_touch_scroll_bar

0xe161,	// (0x00068de9) aid_list_double

0x6704,	// (0x0006138c) aid_list_single

0x4329,	// (0x0005efb1) aid_list_single_lg

0x670d,	// (0x00061395) aid_list_z_g_a_sm

0x6715,	// (0x0006139d) aid_list_z_g_d

0x671d,	// (0x000613a5) aid_txt_z_prm

0x672b,	// (0x000613b3) aid_txt_z_prm_cp01

0x6739,	// (0x000613c1) aid_txt_z_sec

0xe16a,	// (0x00068df2) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe16a,	// (0x00068df2) main_cntbar_detail_cont_pane_g1

0xe177,	// (0x00068dff) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe177,	// (0x00068dff) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x0006ab29) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x0006ab29) main_cntbar_detail_cont_pane_g

0xe183,	// (0x00068e0b) main_cntbar_detail_cont_pane_t1

0xe191,	// (0x00068e19) main_cntbar_detail_cont_pane_t2

0xe19f,	// (0x00068e27) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x0006ab2e) main_cntbar_detail_cont_pane_t

0xe1ad,	// (0x00068e35) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe1ad,	// (0x00068e35) cell_cntbar_detail_list_shct_pane

0xe1bf,	// (0x00068e47) cntbar_detail_list_shct_pane_g1

0xe1c8,	// (0x00068e50) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x0006ab35) cntbar_detail_list_shct_pane_g

0xe1d1,	// (0x00068e59) cntbar_detail_list_event_pane_g1_ParamLimits

0xe1d1,	// (0x00068e59) cntbar_detail_list_event_pane_g1

0xe1dd,	// (0x00068e65) cntbar_detail_list_event_pane_g2_ParamLimits

0xe1dd,	// (0x00068e65) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x0006ab3a) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x0006ab3a) cntbar_detail_list_event_pane_g

0xe249,	// (0x00068ed1) cntbar_detail_list_event_pane_t1_ParamLimits

0xe249,	// (0x00068ed1) cntbar_detail_list_event_pane_t1

0xe25e,	// (0x00068ee6) cntbar_detail_list_event_pane_t2_ParamLimits

0xe25e,	// (0x00068ee6) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x0006ab47) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x0006ab47) cntbar_detail_list_event_pane_t

0x20cb,	// (0x0005cd53) cell_cntbar_detail_list_shct_pane_g1

0xecb0,	// (0x00069938) navi_pane_mv_g3

0xf078,	// (0x00069d00) main_cntbar_detail_pane_ParamLimits

0x6827,	// (0x000614af) main_notif_wgt_pane

0xb862,	// (0x000664ea) aid_tch_main_mp4_pane_g4

0xba89,	// (0x00066711) popup_slider_window_cp02

0x667a,	// (0x00061302) list_recal_day_event_pane

0xe0e0,	// (0x00068d68) cntbar_detail_btn_pane_ParamLimits

0xe0e0,	// (0x00068d68) cntbar_detail_btn_pane

0xe0ec,	// (0x00068d74) cntbar_detail_btn_pane_cp01_ParamLimits

0xe0ec,	// (0x00068d74) cntbar_detail_btn_pane_cp01

0xe106,	// (0x00068d8e) cntbar_detail_list_shct_pane_ParamLimits

0xe112,	// (0x00068d9a) cntbar_detail_pane_g1_ParamLimits

0xe112,	// (0x00068d9a) cntbar_detail_pane_g1

0xe11e,	// (0x00068da6) cntbar_detail_pane_t1_ParamLimits

0xe11e,	// (0x00068da6) cntbar_detail_pane_t1

0xe1e9,	// (0x00068e71) cntbar_detail_list_event_pane_g3_ParamLimits

0xe1e9,	// (0x00068e71) cntbar_detail_list_event_pane_g3

0xe201,	// (0x00068e89) cntbar_detail_list_event_pane_g4_ParamLimits

0xe201,	// (0x00068e89) cntbar_detail_list_event_pane_g4

0xe219,	// (0x00068ea1) cntbar_detail_list_event_pane_g5_ParamLimits

0xe219,	// (0x00068ea1) cntbar_detail_list_event_pane_g5

0xe231,	// (0x00068eb9) cntbar_detail_list_event_pane_g6_ParamLimits

0xe231,	// (0x00068eb9) cntbar_detail_list_event_pane_g6

0xe273,	// (0x00068efb) cntbar_detail_list_event_pane_t3_ParamLimits

0xe273,	// (0x00068efb) cntbar_detail_list_event_pane_t3

0xe285,	// (0x00068f0d) popup_notif_wgt_window_ParamLimits

0xe285,	// (0x00068f0d) popup_notif_wgt_window

0xe293,	// (0x00068f1b) popup_submenu_window_cp01_ParamLimits

0xe293,	// (0x00068f1b) popup_submenu_window_cp01

0xecf1,	// (0x00069979) bg_popup_window_pane_cp10

0xe29f,	// (0x00068f27) listscroll_notif_wgt_pane

0xe2a7,	// (0x00068f2f) list_notif_wgt_window

0xe2b0,	// (0x00068f38) scroll_pane_cp033

0xe2b9,	// (0x00068f41) list_notif_wgt_row_pane_ParamLimits

0xe2b9,	// (0x00068f41) list_notif_wgt_row_pane

0xe2cb,	// (0x00068f53) aid_size_list_notif_wgt_del

0xe2d4,	// (0x00068f5c) list_notif_wgt_row_pane_g1

0xe2dc,	// (0x00068f64) list_notif_wgt_row_pane_g2

0xe2e4,	// (0x00068f6c) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x0006ab4e) list_notif_wgt_row_pane_g

0xe2ed,	// (0x00068f75) list_notif_wgt_row_pane_t1

0xe2fb,	// (0x00068f83) list_notif_wgt_row_pane_t2

0xe309,	// (0x00068f91) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x0006ab55) list_notif_wgt_row_pane_t

0x2d33,	// (0x0005d9bb) list_recal_day_event_pane_g1

0xe317,	// (0x00068f9f) list_recal_day_event_pane_t1

0x6827,	// (0x000614af) bg_button_pane_cp045

0xe326,	// (0x00068fae) cntbar_detail_btn_pane_t1

0x1c88,	// (0x0005c910) main_callh_pane_ParamLimits

0x1c88,	// (0x0005c910) main_callh_pane

0x6827,	// (0x000614af) main_coverflow0_pane

0x6827,	// (0x000614af) main_wgtman_pane

0xd721,	// (0x000683a9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd721,	// (0x000683a9) main_fs_bigclock_unlock_btn_pane

0x3f49,	// (0x0005ebd1) bg_button_pane_cp16

0x3f59,	// (0x0005ebe1) cell_tport_appsw_pane_g3

0xe334,	// (0x00068fbc) cf0_flow_pane_ParamLimits

0xe334,	// (0x00068fbc) cf0_flow_pane

0xe343,	// (0x00068fcb) listscroll_cf0_pane

0xe34c,	// (0x00068fd4) main_cf0_pane_g1

0xe356,	// (0x00068fde) main_cf0_pane_t1_ParamLimits

0xe356,	// (0x00068fde) main_cf0_pane_t1

0xe368,	// (0x00068ff0) main_cf0_pane_t2_ParamLimits

0xe368,	// (0x00068ff0) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0006ab5c) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0006ab5c) main_cf0_pane_t

0xe37a,	// (0x00069002) scroll_pane_cp11

0xe383,	// (0x0006900b) cf0_flow_pane_g1

0xe38b,	// (0x00069013) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x0006ab61) cf0_flow_pane_g

0xe393,	// (0x0006901b) cf0_flow_pane_t1

0x6827,	// (0x000614af) main_call6_pane

0x6827,	// (0x000614af) main_calllock_pane

0xe3a1,	// (0x00069029) call6_btn_grp_pane_ParamLimits

0xe3a1,	// (0x00069029) call6_btn_grp_pane

0xe3ae,	// (0x00069036) call6_pane_g1_ParamLimits

0xe3ae,	// (0x00069036) call6_pane_g1

0xe3bb,	// (0x00069043) popup_call6_1st_window_ParamLimits

0xe3bb,	// (0x00069043) popup_call6_1st_window

0xe3c7,	// (0x0006904f) popup_call6_2nd_window_ParamLimits

0xe3c7,	// (0x0006904f) popup_call6_2nd_window

0xe3d3,	// (0x0006905b) cell_call6_btn_pane_ParamLimits

0xe3d3,	// (0x0006905b) cell_call6_btn_pane

0xecf1,	// (0x00069979) bg_popup_call2_in_pane_cp03

0xe3e2,	// (0x0006906a) popup_call6_1st_window_g1

0xe3ea,	// (0x00069072) popup_call6_1st_window_g2

0xe3f2,	// (0x0006907a) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x0006ab66) popup_call6_1st_window_g

0xe3fa,	// (0x00069082) popup_call6_1st_window_t1

0xe409,	// (0x00069091) popup_call6_1st_window_t2

0xe417,	// (0x0006909f) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0006ab6d) popup_call6_1st_window_t

0xecf1,	// (0x00069979) bg_popup_call2_in_pane_cp04

0xe3e2,	// (0x0006906a) popup_call6_2nd_window_g1

0xe3ea,	// (0x00069072) popup_call6_2nd_window_g2

0xe3f2,	// (0x0006907a) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x0006ab66) popup_call6_2nd_window_g

0xe3fa,	// (0x00069082) popup_call6_2nd_window_t1

0x6827,	// (0x000614af) bg_button_pane_cp15

0xe425,	// (0x000690ad) cell_call6_btn_pane_g1

0xe42e,	// (0x000690b6) cell_call6_btn_pane_t1

0xe43d,	// (0x000690c5) listscroll_wgtman_pane_ParamLimits

0xe43d,	// (0x000690c5) listscroll_wgtman_pane

0xe457,	// (0x000690df) wgtman_btn_pane_ParamLimits

0xe457,	// (0x000690df) wgtman_btn_pane

0xeb32,	// (0x000697ba) aid_scroll_copy1

0xe48a,	// (0x00069112) list_wgtman_pane

0xe494,	// (0x0006911c) wgtman_btn_pane_g1_ParamLimits

0xe494,	// (0x0006911c) wgtman_btn_pane_g1

0xe4bc,	// (0x00069144) wgtman_btn_pane_t1_ParamLimits

0xe4bc,	// (0x00069144) wgtman_btn_pane_t1

0xe4f3,	// (0x0006917b) wgtman_btn_pane_t2_ParamLimits

0xe4f3,	// (0x0006917b) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x0006ab74) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x0006ab74) wgtman_btn_pane_t

0xe50a,	// (0x00069192) listrow_wgtman_pane_ParamLimits

0xe50a,	// (0x00069192) listrow_wgtman_pane

0xe51b,	// (0x000691a3) listrow_wgtman_pane_g1

0xe524,	// (0x000691ac) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x0006ab79) listrow_wgtman_pane_g

0x6747,	// (0x000613cf) listrow_wgtman_pane_t1

0x6755,	// (0x000613dd) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x0006ab7e) listrow_wgtman_pane_t

0x6763,	// (0x000613eb) wait_bar_pane_cp09

0xe52c,	// (0x000691b4) main_calllock_btn_pane

0xe534,	// (0x000691bc) main_calllock_pane_g1

0x6827,	// (0x000614af) bg_button_pane_cp17

0xe53d,	// (0x000691c5) main_calllock_btn_pane_g1

0xe546,	// (0x000691ce) main_calllock_btn_pane_t1

0x6827,	// (0x000614af) main_dialer3_pane

0x6827,	// (0x000614af) main_fmrd2_pane

0x20cb,	// (0x0005cd53) main_fs_bigclock_unlock_btn_pane_g1

0xe55d,	// (0x000691e5) main_fs_bigclock_unlock_btn_pane_t1

0xe56b,	// (0x000691f3) area_fmrd2_info_pane_ParamLimits

0xe56b,	// (0x000691f3) area_fmrd2_info_pane

0xe577,	// (0x000691ff) area_fmrd2_visual_pane_ParamLimits

0xe577,	// (0x000691ff) area_fmrd2_visual_pane

0xe585,	// (0x0006920d) fmrd2_indi_pane_ParamLimits

0xe585,	// (0x0006920d) fmrd2_indi_pane

0xe592,	// (0x0006921a) area_fmrd2_visual_pane_g1

0xe59a,	// (0x00069222) area_fmrd2_visual_pane_t1

0xe5a8,	// (0x00069230) area_fmrd2_visual_pane_t2

0xe5b6,	// (0x0006923e) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x0006ab88) area_fmrd2_visual_pane_t

0xe5c4,	// (0x0006924c) area_fmrd2_info_pane_g1

0xe5cc,	// (0x00069254) area_fmrd2_info_pane_t1

0xe5da,	// (0x00069262) area_fmrd2_info_pane_t2

0xe5e8,	// (0x00069270) area_fmrd2_info_pane_t3

0xe5f6,	// (0x0006927e) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x0006ab8f) area_fmrd2_info_pane_t

0xe604,	// (0x0006928c) fmrd2_indi_pane_t1

0xe612,	// (0x0006929a) fmrd2_indi_pane_t2

0xe620,	// (0x000692a8) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x0006ab98) fmrd2_indi_pane_t

0x3a39,	// (0x0005e6c1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3a39,	// (0x0005e6c1) list_single_fs_bigclock_indicator_pane_g5

0x3adb,	// (0x0005e763) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3adb,	// (0x0005e763) list_single_fs_bigclock_indicator_pane_t5

0xdb7d,	// (0x00068805) aid_cell_bcale_month_pane_ParamLimits

0xdb7d,	// (0x00068805) aid_cell_bcale_month_pane

0xdb89,	// (0x00068811) bcale_month_pane_ParamLimits

0xdb89,	// (0x00068811) bcale_month_pane

0xdb95,	// (0x0006881d) bcale_preview_pane_ParamLimits

0xdb95,	// (0x0006881d) bcale_preview_pane

0xe056,	// (0x00068cde) list_single_fs_bigclock_pane_t1_ParamLimits

0xe070,	// (0x00068cf8) list_single_fs_bigclock_pane_t2_ParamLimits

0xe070,	// (0x00068cf8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x0006ab1f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x0006ab1f) list_single_fs_bigclock_pane_t

0xe555,	// (0x000691dd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x0006ab83) main_fs_bigclock_unlock_btn_pane_g

0xe62e,	// (0x000692b6) aid_dia3_key_size_ParamLimits

0xe62e,	// (0x000692b6) aid_dia3_key_size

0xe63a,	// (0x000692c2) aid_dia3_listrow_size_ParamLimits

0xe63a,	// (0x000692c2) aid_dia3_listrow_size

0xe648,	// (0x000692d0) dia3_keypad_fun_pane_ParamLimits

0xe648,	// (0x000692d0) dia3_keypad_fun_pane

0xe654,	// (0x000692dc) dia3_keypad_num_pane_ParamLimits

0xe654,	// (0x000692dc) dia3_keypad_num_pane

0xe660,	// (0x000692e8) dia3_listscroll_pane_ParamLimits

0xe660,	// (0x000692e8) dia3_listscroll_pane

0xe66c,	// (0x000692f4) dia3_numentry_pane_ParamLimits

0xe66c,	// (0x000692f4) dia3_numentry_pane

0xe678,	// (0x00069300) dia3_list_pane

0xe681,	// (0x00069309) scroll_pane_cp12

0x6827,	// (0x000614af) bg_dia3_numentry_pane

0xe68a,	// (0x00069312) dia3_numentry_pane_t1

0xe699,	// (0x00069321) cell_dia3_key_num_pane

0xe6a1,	// (0x00069329) cell_dia3_key0_fun_pane_ParamLimits

0xe6a1,	// (0x00069329) cell_dia3_key0_fun_pane

0xe6ae,	// (0x00069336) cell_dia3_key1_fun_pane_ParamLimits

0xe6ae,	// (0x00069336) cell_dia3_key1_fun_pane

0xe6bb,	// (0x00069343) dia3_listrow_pane

0x373d,	// (0x0005e3c5) bg_dia3_numentry_pane_g1

0x6827,	// (0x000614af) bg_button_pane_cp21

0xe6c8,	// (0x00069350) cell_dia3_key_num_pane_t1

0xe6d6,	// (0x0006935e) cell_dia3_key_num_pane_t2

0xe6e5,	// (0x0006936d) cell_dia3_key_num_pane_t3

0xe6f4,	// (0x0006937c) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x0006ab9f) cell_dia3_key_num_pane_t

0x6827,	// (0x000614af) bg_button_pane_cp19

0xe703,	// (0x0006938b) cell_dia3_key0_fun_pane_g1

0x6827,	// (0x000614af) bg_button_pane_cp20

0xe70b,	// (0x00069393) cell_dia3_key1_fun_pane_g1

0xe713,	// (0x0006939b) area_left_week_number_pane

0xe71c,	// (0x000693a4) area_top_day_name_pane

0xe725,	// (0x000693ad) frame_month_view_pane

0xe72d,	// (0x000693b5) grid_month_view_pane

0xe737,	// (0x000693bf) cell_top_day_name_pane_ParamLimits

0xe737,	// (0x000693bf) cell_top_day_name_pane

0xe74d,	// (0x000693d5) cell_area_left_week_number_pane_ParamLimits

0xe74d,	// (0x000693d5) cell_area_left_week_number_pane

0xe761,	// (0x000693e9) cell_month_view_pane_ParamLimits

0xe761,	// (0x000693e9) cell_month_view_pane

0xe77c,	// (0x00069404) frm_month_g1

0xe785,	// (0x0006940d) frm_month_g2

0xe78d,	// (0x00069415) frm_month_g3

0xe795,	// (0x0006941d) frm_month_g4

0xe79d,	// (0x00069425) frm_month_g5

0xe7a5,	// (0x0006942d) frm_month_g6

0xe7ad,	// (0x00069435) frm_month_g7

0xe7b5,	// (0x0006943d) frm_month_g8

0xe7be,	// (0x00069446) frm_month_g9

0xe7c7,	// (0x0006944f) frm_month_g10

0xbe49,	// (0x00066ad1) frm_month_g11

0xe7d0,	// (0x00069458) frm_month_g12

0xe7d9,	// (0x00069461) frm_month_g13

0xe7e2,	// (0x0006946a) frm_month_g14

0xe7eb,	// (0x00069473) frm_month_g15

0xe7f4,	// (0x0006947c) frm_month_g16

0x000f,

0xff20,	// (0x0006aba8) frm_month_g

0xe7fd,	// (0x00069485) cell_top_day_name_pane_t1

0xe80c,	// (0x00069494) cell_area_left_week_number_pane_g1

0xe7fd,	// (0x00069485) cell_area_left_week_number_pane_t1

0x20cb,	// (0x0005cd53) cell_month_view_pane_g1

0xe814,	// (0x0006949c) cell_month_view_pane_t1

0x6827,	// (0x000614af) main_fps_pane

0x3d4f,	// (0x0005e9d7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3d4f,	// (0x0005e9d7) cmail_ddmenu_btn02_pane_cp1

0x3d6b,	// (0x0005e9f3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3d6b,	// (0x0005e9f3) cmail_ddmenu_btn02_pane_cp2

0xddeb,	// (0x00068a73) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xddeb,	// (0x00068a73) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x0006aad0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x0006aad0) cmail_ddmenu_btn02_pane_g

0xde09,	// (0x00068a91) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xde09,	// (0x00068a91) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x0006aad5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x0006aad5) cmail_ddmenu_btn02_pane_t

0xe823,	// (0x000694ab) fps_text_pane_ParamLimits

0xe823,	// (0x000694ab) fps_text_pane

0xe830,	// (0x000694b8) main_fps_pane_g1_ParamLimits

0xe830,	// (0x000694b8) main_fps_pane_g1

0xe83c,	// (0x000694c4) wait_bar_pane_cp010_ParamLimits

0xe83c,	// (0x000694c4) wait_bar_pane_cp010

0xe848,	// (0x000694d0) fps_text_pane_t1_ParamLimits

0xe848,	// (0x000694d0) fps_text_pane_t1

0xbe37,	// (0x00066abf) cam4_image_uncrop_pane_g1

0xbe40,	// (0x00066ac8) cam4_image_uncrop_pane_g2

0xbe49,	// (0x00066ad1) cam4_image_uncrop_pane_g3

0xbe52,	// (0x00066ada) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x0006a5a8) cam4_image_uncrop_pane_g

0xe6bb,	// (0x00069343) dia3_listrow_pane_ParamLimits

0x6827,	// (0x000614af) main_phob2_pane

0xda3e,	// (0x000686c6) cell_tport_appsw_pane_cp02_ParamLimits

0xda3e,	// (0x000686c6) cell_tport_appsw_pane_cp02

0xda4b,	// (0x000686d3) cell_tport_appsw_pane_cp03_ParamLimits

0xda4b,	// (0x000686d3) cell_tport_appsw_pane_cp03

0x6827,	// (0x000614af) phob2_contact_card_pane

0x6827,	// (0x000614af) phob2_listscroll_pane

0xe861,	// (0x000694e9) phob2_list_pane

0xe869,	// (0x000694f1) scroll_pane_cp034

0xe871,	// (0x000694f9) phob2_cc_data_pane_ParamLimits

0xe871,	// (0x000694f9) phob2_cc_data_pane

0xe889,	// (0x00069511) phob2_cc_listscroll_pane_ParamLimits

0xe889,	// (0x00069511) phob2_cc_listscroll_pane

0xe8a1,	// (0x00069529) list_double_large_graphic_phob2_pane_ParamLimits

0xe8a1,	// (0x00069529) list_double_large_graphic_phob2_pane

0xe8b4,	// (0x0006953c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe8b4,	// (0x0006953c) list_double_large_graphic_phob2_pane_g1

0xe8c1,	// (0x00069549) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe8c1,	// (0x00069549) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x0006abc9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x0006abc9) list_double_large_graphic_phob2_pane_g

0x676b,	// (0x000613f3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x676b,	// (0x000613f3) list_double_large_graphic_phob2_pane_t1

0x6780,	// (0x00061408) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6780,	// (0x00061408) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x0006abce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x0006abce) list_double_large_graphic_phob2_pane_t

0x6827,	// (0x000614af) list_highlight_pane_cp024

0xe8cd,	// (0x00069555) phob2_cc_button_pane

0xe8d5,	// (0x0006955d) phob2_cc_data_pane_g1_ParamLimits

0xe8d5,	// (0x0006955d) phob2_cc_data_pane_g1

0xe8e1,	// (0x00069569) phob2_cc_data_pane_g2_ParamLimits

0xe8e1,	// (0x00069569) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x0006abd3) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x0006abd3) phob2_cc_data_pane_g

0xe8ed,	// (0x00069575) phob2_cc_data_pane_t1_ParamLimits

0xe8ed,	// (0x00069575) phob2_cc_data_pane_t1

0xe8ff,	// (0x00069587) phob2_cc_data_pane_t2_ParamLimits

0xe8ff,	// (0x00069587) phob2_cc_data_pane_t2

0xe911,	// (0x00069599) phob2_cc_data_pane_t3_ParamLimits

0xe911,	// (0x00069599) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x0006abd8) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x0006abd8) phob2_cc_data_pane_t

0xe923,	// (0x000695ab) phob2_cc_list_pane_ParamLimits

0xe923,	// (0x000695ab) phob2_cc_list_pane

0x365a,	// (0x0005e2e2) scroll_pane_cp035_ParamLimits

0x365a,	// (0x0005e2e2) scroll_pane_cp035

0xf078,	// (0x00069d00) bg_button_pane_cp033

0xe92f,	// (0x000695b7) phob2_cc_button_pane_g1

0xe93b,	// (0x000695c3) phob2_cc_button_pane_t1

0xe950,	// (0x000695d8) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x0006abdf) phob2_cc_button_pane_t

0xe962,	// (0x000695ea) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe962,	// (0x000695ea) list_double_large_graphic_phob2_cc_pane

0xe97d,	// (0x00069605) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe97d,	// (0x00069605) list_double_large_graphic_phob2_cc_pane_g1

0xe98e,	// (0x00069616) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe98e,	// (0x00069616) list_double_large_graphic_phob2_cc_pane_g2

0x6792,	// (0x0006141a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6792,	// (0x0006141a) list_double_large_graphic_phob2_cc_pane_g3

0x67a1,	// (0x00061429) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x67a1,	// (0x00061429) list_double_large_graphic_phob2_cc_pane_g4

0x67b2,	// (0x0006143a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x67b2,	// (0x0006143a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x0006abe4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x0006abe4) list_double_large_graphic_phob2_cc_pane_g

0x67c1,	// (0x00061449) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x67c1,	// (0x00061449) list_double_large_graphic_phob2_cc_pane_t1

0x67ea,	// (0x00061472) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x67ea,	// (0x00061472) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x0006abef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x0006abef) list_double_large_graphic_phob2_cc_pane_t

0xe99d,	// (0x00069625) list_highlight_pane_cp025_ParamLimits

0xe99d,	// (0x00069625) list_highlight_pane_cp025

0xf078,	// (0x00069d00) bg_button_pane_cp033_ParamLimits

0xe92f,	// (0x000695b7) phob2_cc_button_pane_g1_ParamLimits

0xe93b,	// (0x000695c3) phob2_cc_button_pane_t1_ParamLimits

0xe950,	// (0x000695d8) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x0006abdf) phob2_cc_button_pane_t_ParamLimits

0x6a81,	// (0x00061709) popup_wgtman_window

0x375d,	// (0x0005e3e5) scroll_pane_cp038

0xe472,	// (0x000690fa) wgtman_btn_pane_cp_01_ParamLimits

0xe472,	// (0x000690fa) wgtman_btn_pane_cp_01

0xe9ab,	// (0x00069633) wgtman_content_pane

0xe9b4,	// (0x0006963c) wgtman_heading_pane

0x6827,	// (0x000614af) bg_heading_pane_cp02

0xe9bd,	// (0x00069645) wgtman_heading_pane_g1

0xe9c5,	// (0x0006964d) wgtman_heading_pane_t1

0xe9d3,	// (0x0006965b) scroll_pane_cp036

0xe9db,	// (0x00069663) wgtman_list_pane

0xe9e3,	// (0x0006966b) wgtman_list_pane_t1_ParamLimits

0xe9e3,	// (0x0006966b) wgtman_list_pane_t1

0xbd9c,	// (0x00066a24) cam4_grid_pane

0x5c12,	// (0x0006089a) bg_button_pane_cp015_ParamLimits

0xc948,	// (0x000675d0) bg_button_pane_cp016_ParamLimits

0xc95b,	// (0x000675e3) bg_button_pane_cp017_ParamLimits

0x5c50,	// (0x000608d8) popup_vitu2_query_window_g3_ParamLimits

0x5c50,	// (0x000608d8) popup_vitu2_query_window_g3

0x5cc9,	// (0x00060951) popup_vitu2_query_window_t6_ParamLimits

0x5cc9,	// (0x00060951) popup_vitu2_query_window_t6

0x5cf4,	// (0x0006097c) popup_vitu2_query_window_t7_ParamLimits

0x5cf4,	// (0x0006097c) popup_vitu2_query_window_t7

0xf0b2,	// (0x00069d3a) cam4_grid_pane_g1

0xf0bb,	// (0x00069d43) cam4_grid_pane_g2

0xf0c4,	// (0x00069d4c) cam4_grid_pane_g3

0xf0cd,	// (0x00069d55) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x0006abf4) cam4_grid_pane_g

0x806e,	// (0x00062cf6) aid_placing_vt_slider_lsc_ParamLimits

0x8366,	// (0x00062fee) vidtel_button_pane_ParamLimits

0x8366,	// (0x00062fee) vidtel_button_pane

0x6827,	// (0x000614af) bg_button_pane_cp034

0xf0d6,	// (0x00069d5e) vidtel_button_pane_g1

0xf0de,	// (0x00069d66) vidtel_button_pane_t1

0x2d03,	// (0x0005d98b) aid_size_vtel_slider_touch

0x365a,	// (0x0005e2e2) scroll_pane_cp039

0x3789,	// (0x0005e411) ncim_query_button_pane_cp01_ParamLimits

0x37a8,	// (0x0005e430) ncimui_query_pane_g1_ParamLimits

0xf078,	// (0x00069d00) input_focus_pane_cp012_ParamLimits

0x37cd,	// (0x0005e455) ncim_query_entry_pane_t1_ParamLimits

0x365a,	// (0x0005e2e2) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
