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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00085224 };

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
0x2aaa,	// (0x00087cce) Screen

0x2ab6,	// (0x00087cda) application_window

0x2b0a,	// (0x00087d2e) area_bottom_pane_ParamLimits

0x2b0a,	// (0x00087d2e) area_bottom_pane

0x2b43,	// (0x00087d67) area_top_pane_ParamLimits

0x2b43,	// (0x00087d67) area_top_pane

0x07e2,	// (0x00085a06) call_video_uplink_pane_ParamLimits

0x07e2,	// (0x00085a06) call_video_uplink_pane

0x2bbd,	// (0x00087de1) main_pane_ParamLimits

0x2bbd,	// (0x00087de1) main_pane

0x10fe,	// (0x00086322) context_pane

0x5f26,	// (0x0008b14a) navi_pane

0x5f4e,	// (0x0008b172) popup_cale_events_window_ParamLimits

0x5f4e,	// (0x0008b172) popup_cale_events_window

0x1111,	// (0x00086335) popup_mup_playback_window

0x5f66,	// (0x0008b18a) signal_pane

0x318b,	// (0x000883af) main_browser_pane

0xbb23,	// (0x00090d47) main_burst_pane

0x5c86,	// (0x0008aeaa) main_calc_pane

0xbb23,	// (0x00090d47) main_cale_day_pane

0x318b,	// (0x000883af) main_cale_month_pane

0xbb23,	// (0x00090d47) main_cale_week_pane

0xbb23,	// (0x00090d47) main_call_pane

0x0c11,	// (0x00085e35) main_call_poc_pane

0xbb23,	// (0x00090d47) main_camera_pane

0xbb23,	// (0x00090d47) main_chi_dic_pane

0xb9b2,	// (0x00090bd6) main_clock_pane

0x0c11,	// (0x00085e35) main_fmradio_pane

0xbb23,	// (0x00090d47) main_graph_messa_pane

0x0c11,	// (0x00085e35) main_help_pane

0x318b,	// (0x000883af) main_im_pane

0x2e1b,	// (0x0008803f) main_image_pane_ParamLimits

0x2e1b,	// (0x0008803f) main_image_pane

0x0c11,	// (0x00085e35) main_location2_pane

0xbb23,	// (0x00090d47) main_location_pane

0x0c11,	// (0x00085e35) main_messa_pane

0x0c11,	// (0x00085e35) main_mp2_pane

0xbb23,	// (0x00090d47) main_mp_pane

0x0c11,	// (0x00085e35) main_msg_pane

0x0c11,	// (0x00085e35) main_mup_eq_pane

0x0c11,	// (0x00085e35) main_mup_pane

0xbb23,	// (0x00090d47) main_notes_pane

0x0c11,	// (0x00085e35) main_pec_pane

0x0c11,	// (0x00085e35) main_phob_pane

0x0c11,	// (0x00085e35) main_pinb_pane

0x0c11,	// (0x00085e35) main_postcard_pane

0x0c11,	// (0x00085e35) main_qdial_pane

0xbb23,	// (0x00090d47) main_skin_pane

0x0c11,	// (0x00085e35) main_smil2_pane

0xbb23,	// (0x00090d47) main_smil_pane

0xbb23,	// (0x00090d47) main_video_pane

0xbb23,	// (0x00090d47) main_video_tele_pane

0x2e1b,	// (0x0008803f) main_viewer_pane_ParamLimits

0x2e1b,	// (0x0008803f) main_viewer_pane

0xbb23,	// (0x00090d47) main_vorec_pane

0x5cda,	// (0x0008aefe) popup_blid_sat_info_window_ParamLimits

0x5cda,	// (0x0008aefe) popup_blid_sat_info_window

0x5d32,	// (0x0008af56) popup_dyc_status_message_window_ParamLimits

0x5d32,	// (0x0008af56) popup_dyc_status_message_window

0x5d4a,	// (0x0008af6e) popup_grid_large_graphic_window_ParamLimits

0x5d4a,	// (0x0008af6e) popup_grid_large_graphic_window

0x5e00,	// (0x0008b024) popup_loc_request_window_ParamLimits

0x5e00,	// (0x0008b024) popup_loc_request_window

0x5efe,	// (0x0008b122) popup_wml_address_window_ParamLimits

0x5efe,	// (0x0008b122) popup_wml_address_window

0x5ac0,	// (0x0008ace4) call_muted_g1

0x5770,	// (0x0008a994) popup_call_audio_conf_window_ParamLimits

0x5770,	// (0x0008a994) popup_call_audio_conf_window

0x5ad4,	// (0x0008acf8) popup_call_audio_first_window_ParamLimits

0x5ad4,	// (0x0008acf8) popup_call_audio_first_window

0x5b4a,	// (0x0008ad6e) popup_call_audio_in_window_ParamLimits

0x5b4a,	// (0x0008ad6e) popup_call_audio_in_window

0x5b86,	// (0x0008adaa) popup_call_audio_out_window_ParamLimits

0x5b86,	// (0x0008adaa) popup_call_audio_out_window

0x5bc0,	// (0x0008ade4) popup_call_audio_second_window_ParamLimits

0x5bc0,	// (0x0008ade4) popup_call_audio_second_window

0x5c16,	// (0x0008ae3a) popup_call_audio_wait_window_ParamLimits

0x5c16,	// (0x0008ae3a) popup_call_audio_wait_window

0x5c4b,	// (0x0008ae6f) popup_number_entry_window_ParamLimits

0x5c4b,	// (0x0008ae6f) popup_number_entry_window

0x0800,	// (0x00085a24) bg_popup_call_pane_cp05_ParamLimits

0x0800,	// (0x00085a24) bg_popup_call_pane_cp05

0x0820,	// (0x00085a44) popup_number_entry_window_t1

0x0833,	// (0x00085a57) popup_number_entry_window_t2

0x0845,	// (0x00085a69) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00094353) popup_number_entry_window_t

0x0857,	// (0x00085a7b) text_title_cp2

0x086a,	// (0x00085a8e) bg_popup_call_pane_cp_ParamLimits

0x086a,	// (0x00085a8e) bg_popup_call_pane_cp

0x0878,	// (0x00085a9c) call_thumbnail_pane

0x0880,	// (0x00085aa4) popup_call_audio_in_window_g1_ParamLimits

0x0880,	// (0x00085aa4) popup_call_audio_in_window_g1

0x088c,	// (0x00085ab0) popup_call_audio_in_window_g2_ParamLimits

0x088c,	// (0x00085ab0) popup_call_audio_in_window_g2

0x0898,	// (0x00085abc) popup_call_audio_in_window_g3_ParamLimits

0x0898,	// (0x00085abc) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0009435c) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0009435c) popup_call_audio_in_window_g

0x08a4,	// (0x00085ac8) popup_call_audio_in_window_t1_ParamLimits

0x08a4,	// (0x00085ac8) popup_call_audio_in_window_t1

0x08bf,	// (0x00085ae3) popup_call_audio_in_window_t2_ParamLimits

0x08bf,	// (0x00085ae3) popup_call_audio_in_window_t2

0x08da,	// (0x00085afe) popup_call_audio_in_window_t3_ParamLimits

0x08da,	// (0x00085afe) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00094363) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00094363) popup_call_audio_in_window_t

0x086a,	// (0x00085a8e) bg_popup_call_pane_cp01_ParamLimits

0x086a,	// (0x00085a8e) bg_popup_call_pane_cp01

0x0878,	// (0x00085a9c) call_thumbnail_pane_cp02

0x08ed,	// (0x00085b11) call_type_pane_cp022

0x08f5,	// (0x00085b19) popup_call_audio_out_window_g1_ParamLimits

0x08f5,	// (0x00085b19) popup_call_audio_out_window_g1

0x0907,	// (0x00085b2b) popup_call_audio_out_window_g2_ParamLimits

0x0907,	// (0x00085b2b) popup_call_audio_out_window_g2

0x0913,	// (0x00085b37) popup_call_audio_out_window_g3_ParamLimits

0x0913,	// (0x00085b37) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0009436a) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0009436a) popup_call_audio_out_window_g

0x0925,	// (0x00085b49) popup_call_audio_out_window_t1_ParamLimits

0x0925,	// (0x00085b49) popup_call_audio_out_window_t1

0x093d,	// (0x00085b61) popup_call_audio_out_window_t2_ParamLimits

0x093d,	// (0x00085b61) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00094371) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00094371) popup_call_audio_out_window_t

0x0952,	// (0x00085b76) bg_popup_call_pane_ParamLimits

0x0952,	// (0x00085b76) bg_popup_call_pane

0x2d6d,	// (0x00087f91) call_thumbnail_pane_cp_ParamLimits

0x2d6d,	// (0x00087f91) call_thumbnail_pane_cp

0x09d6,	// (0x00085bfa) call_type_pane_cp01_ParamLimits

0x09d6,	// (0x00085bfa) call_type_pane_cp01

0x0a1a,	// (0x00085c3e) popup_call_audio_first_window_g1_ParamLimits

0x0a1a,	// (0x00085c3e) popup_call_audio_first_window_g1

0x0a66,	// (0x00085c8a) popup_call_audio_first_window_g2_ParamLimits

0x0a66,	// (0x00085c8a) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00094376) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00094376) popup_call_audio_first_window_g

0x0aaa,	// (0x00085cce) popup_call_audio_first_window_t1_ParamLimits

0x0aaa,	// (0x00085cce) popup_call_audio_first_window_t1

0x0b56,	// (0x00085d7a) popup_call_audio_first_window_t4_ParamLimits

0x0b56,	// (0x00085d7a) popup_call_audio_first_window_t4

0x0be2,	// (0x00085e06) popup_call_audio_first_window_t5_ParamLimits

0x0be2,	// (0x00085e06) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0009437b) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0009437b) popup_call_audio_first_window_t

0x0c11,	// (0x00085e35) bg_popup_call_pane_cp02

0x0c1b,	// (0x00085e3f) call_type_pane_cp023

0x0c23,	// (0x00085e47) popup_call_audio_wait_window_g1

0x0c2b,	// (0x00085e4f) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00094382) popup_call_audio_wait_window_g

0x0c33,	// (0x00085e57) popup_call_audio_wait_window_t3

0x0c41,	// (0x00085e65) bg_popup_call_pane_cp03_ParamLimits

0x0c41,	// (0x00085e65) bg_popup_call_pane_cp03

0x0ca1,	// (0x00085ec5) call_thumbnail_pane_cp011_ParamLimits

0x0ca1,	// (0x00085ec5) call_thumbnail_pane_cp011

0x0cad,	// (0x00085ed1) call_type_pane_cp034_ParamLimits

0x0cad,	// (0x00085ed1) call_type_pane_cp034

0x0ce9,	// (0x00085f0d) popup_call_audio_second_window_g1_ParamLimits

0x0ce9,	// (0x00085f0d) popup_call_audio_second_window_g1

0x0d25,	// (0x00085f49) popup_call_audio_second_window_g2_ParamLimits

0x0d25,	// (0x00085f49) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00094387) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00094387) popup_call_audio_second_window_g

0x0d61,	// (0x00085f85) popup_call_audio_second_window_t1_ParamLimits

0x0d61,	// (0x00085f85) popup_call_audio_second_window_t1

0x2d91,	// (0x00087fb5) popup_call_audio_second_window_t2_ParamLimits

0x2d91,	// (0x00087fb5) popup_call_audio_second_window_t2

0x2dc7,	// (0x00087feb) popup_call_audio_second_window_t3_ParamLimits

0x2dc7,	// (0x00087feb) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0009438c) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0009438c) popup_call_audio_second_window_t

0x0c11,	// (0x00085e35) bg_popup_call_pane_cp04

0x2dfd,	// (0x00088021) list_conf_pane

0x2e05,	// (0x00088029) popup_call_audio_conf_window_t1

0x2e13,	// (0x00088037) call_thumbnail_pane_g1

0x2e1b,	// (0x0008803f) bg_pinb_pane_ParamLimits

0x2e1b,	// (0x0008803f) bg_pinb_pane

0x2e29,	// (0x0008804d) find_pinb_pane

0x2e32,	// (0x00088056) listscroll_pinb_pane_ParamLimits

0x2e32,	// (0x00088056) listscroll_pinb_pane

0x2e41,	// (0x00088065) pinb_bg_pane_g1

0x2e4b,	// (0x0008806f) pinb_bg_pane_g2

0x2e57,	// (0x0008807b) pinb_bg_pane_g3

0x2e63,	// (0x00088087) pinb_bg_pane_g4

0x2e6f,	// (0x00088093) pinb_bg_pane_g5

0x2e7b,	// (0x0008809f) pinb_bg_pane_g6

0x2e86,	// (0x000880aa) pinb_bg_pane_g7

0x2e91,	// (0x000880b5) pinb_bg_pane_g8

0x2e9c,	// (0x000880c0) pinb_bg_pane_g9

0x2ea6,	// (0x000880ca) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00094393) pinb_bg_pane_g

0x2ec3,	// (0x000880e7) grid_pinb_pane

0x2ecc,	// (0x000880f0) list_pinb_pane

0x2ed5,	// (0x000880f9) scroll_pane_cp01_ParamLimits

0x2ed5,	// (0x000880f9) scroll_pane_cp01

0x2ee7,	// (0x0008810b) find_pinb_pane_g1_ParamLimits

0x2ee7,	// (0x0008810b) find_pinb_pane_g1

0x2eff,	// (0x00088123) find_pinb_pane_t1

0x2f11,	// (0x00088135) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000943ad) find_pinb_pane_t

0x2f26,	// (0x0008814a) input_focus_pane_cp01_ParamLimits

0x2f26,	// (0x0008814a) input_focus_pane_cp01

0x2f32,	// (0x00088156) cell_pinb_pane_ParamLimits

0x2f32,	// (0x00088156) cell_pinb_pane

0x2f64,	// (0x00088188) cell_pinb_pane_g1_ParamLimits

0x2f64,	// (0x00088188) cell_pinb_pane_g1

0x2f74,	// (0x00088198) cell_pinb_pane_g2_ParamLimits

0x2f74,	// (0x00088198) cell_pinb_pane_g2

0x2f80,	// (0x000881a4) cell_pinb_pane_g3_ParamLimits

0x2f80,	// (0x000881a4) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000943b2) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000943b2) cell_pinb_pane_g

0x0c11,	// (0x00085e35) grid_highlight_pane_cp01

0x2f8c,	// (0x000881b0) list_pinb_item_pane_ParamLimits

0x2f8c,	// (0x000881b0) list_pinb_item_pane

0x0c11,	// (0x00085e35) list_highlight_pane_cp02

0x2fa0,	// (0x000881c4) list_pinb_item_pane_g1_ParamLimits

0x2fa0,	// (0x000881c4) list_pinb_item_pane_g1

0x2fad,	// (0x000881d1) list_pinb_item_pane_g2_ParamLimits

0x2fad,	// (0x000881d1) list_pinb_item_pane_g2

0x2fb9,	// (0x000881dd) list_pinb_item_pane_g3_ParamLimits

0x2fb9,	// (0x000881dd) list_pinb_item_pane_g3

0x2fca,	// (0x000881ee) list_pinb_item_pane_g4_ParamLimits

0x2fca,	// (0x000881ee) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000943b9) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000943b9) list_pinb_item_pane_g

0x2fd6,	// (0x000881fa) list_pinb_item_pane_t1_ParamLimits

0x2fd6,	// (0x000881fa) list_pinb_item_pane_t1

0x300b,	// (0x0008822f) calc_display_pane

0x3031,	// (0x00088255) calc_paper_pane

0x3054,	// (0x00088278) grid_calc_pane

0x0c11,	// (0x00085e35) bg_list_pane_cp01

0x3080,	// (0x000882a4) clock_g1

0x3088,	// (0x000882ac) clock_g2

0x0001,

0xf19e,	// (0x000943c2) clock_g

0x3090,	// (0x000882b4) clock_t1_ParamLimits

0x3090,	// (0x000882b4) clock_t1

0x30a5,	// (0x000882c9) clock_t2_ParamLimits

0x30a5,	// (0x000882c9) clock_t2

0x30b7,	// (0x000882db) clock_t3_ParamLimits

0x30b7,	// (0x000882db) clock_t3

0x30c9,	// (0x000882ed) clock_t4_ParamLimits

0x30c9,	// (0x000882ed) clock_t4

0x30db,	// (0x000882ff) clock_t5_ParamLimits

0x30db,	// (0x000882ff) clock_t5

0x30f0,	// (0x00088314) clock_t6_ParamLimits

0x30f0,	// (0x00088314) clock_t6

0x3102,	// (0x00088326) clock_t7_ParamLimits

0x3102,	// (0x00088326) clock_t7

0x3114,	// (0x00088338) clock_t8_ParamLimits

0x3114,	// (0x00088338) clock_t8

0x3128,	// (0x0008834c) clock_t9_ParamLimits

0x3128,	// (0x0008834c) clock_t9

0x0008,

0xf1a3,	// (0x000943c7) clock_t_ParamLimits

0xf1a3,	// (0x000943c7) clock_t

0x313c,	// (0x00088360) popup_clock_analogue_window_cp02

0x313c,	// (0x00088360) popup_clock_digital_window_cp01

0x3144,	// (0x00088368) listscroll_help_pane

0x0c11,	// (0x00085e35) phob_pre_status_pane

0x314e,	// (0x00088372) grid_qdial_pane

0x0c11,	// (0x00085e35) listscroll_mce_pane

0x3158,	// (0x0008837c) bg_notes_pane

0x3162,	// (0x00088386) list_notes_pane

0x316c,	// (0x00088390) scroll_pane_cp06

0x3177,	// (0x0008839b) bg_calc_paper_pane

0xb0a1,	// (0x000902c5) list_calc_pane

0x318b,	// (0x000883af) bg_calc_display_pane

0x3197,	// (0x000883bb) calc_display_pane_t1

0x31a9,	// (0x000883cd) calc_display_pane_t2

0xb0bb,	// (0x000902df) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000943da) calc_display_pane_t

0x31bb,	// (0x000883df) cell_calc_pane_ParamLimits

0x31bb,	// (0x000883df) cell_calc_pane

0x31f0,	// (0x00088414) bg_calc_paper_pane_g1

0x31fc,	// (0x00088420) bg_calc_paper_pane_g2

0x3208,	// (0x0008842c) bg_calc_paper_pane_g3

0x3214,	// (0x00088438) bg_calc_paper_pane_g4

0x3220,	// (0x00088444) bg_calc_paper_pane_g5

0x322c,	// (0x00088450) bg_calc_paper_pane_g6

0x323b,	// (0x0008845f) bg_calc_paper_pane_g7

0x324a,	// (0x0008846e) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x000943e1) bg_calc_paper_pane_g

0x325d,	// (0x00088481) calc_bg_paper_pane_g9

0x3270,	// (0x00088494) list_calc_item_pane_ParamLimits

0x3270,	// (0x00088494) list_calc_item_pane

0x3286,	// (0x000884aa) list_calc_item_pane_g1

0xb0cd,	// (0x000902f1) list_calc_item_pane_t1_ParamLimits

0xb0cd,	// (0x000902f1) list_calc_item_pane_t1

0x3293,	// (0x000884b7) list_calc_item_pane_t2_ParamLimits

0x3293,	// (0x000884b7) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000943f2) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000943f2) list_calc_item_pane_t

0x32af,	// (0x000884d3) cell_calc_pane_g1

0x32d1,	// (0x000884f5) grid_highlight_pane_cp02

0x32f3,	// (0x00088517) bg_calc_display_pane_g1

0xb0df,	// (0x00090303) bg_calc_display_pane_g2

0x32fc,	// (0x00088520) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000943fc) bg_calc_display_pane_g

0x3305,	// (0x00088529) cell_qdial_pane_ParamLimits

0x3305,	// (0x00088529) cell_qdial_pane

0x3319,	// (0x0008853d) cell_qdial_pane_g1_ParamLimits

0x3319,	// (0x0008853d) cell_qdial_pane_g1

0x332f,	// (0x00088553) cell_qdial_pane_g2_ParamLimits

0x332f,	// (0x00088553) cell_qdial_pane_g2

0x3340,	// (0x00088564) cell_qdial_pane_g3_ParamLimits

0x3340,	// (0x00088564) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00094403) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00094403) cell_qdial_pane_g

0x3362,	// (0x00088586) cell_qdial_pane_t1_ParamLimits

0x3362,	// (0x00088586) cell_qdial_pane_t1

0x337a,	// (0x0008859e) cell_qdial_pane_t2_ParamLimits

0x337a,	// (0x0008859e) cell_qdial_pane_t2

0x338d,	// (0x000885b1) cell_qdial_pane_t3_ParamLimits

0x338d,	// (0x000885b1) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0009440c) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0009440c) cell_qdial_pane_t

0x0c11,	// (0x00085e35) grid_highlight_pane_cp04

0x33a0,	// (0x000885c4) thumbnail_qdial_pane_ParamLimits

0x33a0,	// (0x000885c4) thumbnail_qdial_pane

0x33fc,	// (0x00088620) list_help_pane

0x3405,	// (0x00088629) scroll_pane_cp02

0x340e,	// (0x00088632) help_list_pane_t1_ParamLimits

0x340e,	// (0x00088632) help_list_pane_t1

0xb0e9,	// (0x0009030d) bg_notes_pane_g2

0xb0f1,	// (0x00090315) bg_notes_pane_g3

0xb0f9,	// (0x0009031d) notes_bg_pane_g1

0xb101,	// (0x00090325) notes_bg_pane_g4

0xb109,	// (0x0009032d) notes_bg_pane_g5

0xb111,	// (0x00090335) notes_bg_pane_g6

0xb119,	// (0x0009033d) notes_bg_pane_g7

0xb121,	// (0x00090345) notes_bg_pane_g8

0xb129,	// (0x0009034d) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0009442a) notes_bg_pane_g

0x19cd,	// (0x00086bf1) list_notes_text_pane_ParamLimits

0x19cd,	// (0x00086bf1) list_notes_text_pane

0x342e,	// (0x00088652) list_notes_text_pane_g1

0x3437,	// (0x0008865b) list_notes_text_pane_t1

0x318b,	// (0x000883af) listscroll_cale_week_pane

0x3473,	// (0x00088697) bg_cale_heading_pane

0x348b,	// (0x000886af) bg_cale_pane_cp01

0x34a4,	// (0x000886c8) cale_week_corner_pane

0x34b5,	// (0x000886d9) cale_week_day_heading_pane

0x34cd,	// (0x000886f1) cale_week_scroll_pane_g1

0x34e2,	// (0x00088706) cale_week_scroll_pane_g2

0x34f3,	// (0x00088717) cale_week_scroll_pane_g3

0x3504,	// (0x00088728) cale_week_scroll_pane_g4

0x3515,	// (0x00088739) cale_week_scroll_pane_g5

0x3526,	// (0x0008874a) cale_week_scroll_pane_g6

0x3537,	// (0x0008875b) cale_week_scroll_pane_g7

0x3548,	// (0x0008876c) cale_week_scroll_pane_g8

0x3559,	// (0x0008877d) cale_week_scroll_pane_g9

0x356a,	// (0x0008878e) cale_week_scroll_pane_g10

0x357b,	// (0x0008879f) cale_week_scroll_pane_g11

0x358c,	// (0x000887b0) cale_week_scroll_pane_g12

0x359d,	// (0x000887c1) cale_week_scroll_pane_g13

0x35ae,	// (0x000887d2) cale_week_scroll_pane_g14

0x35bf,	// (0x000887e3) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00094439) cale_week_scroll_pane_g

0x35d0,	// (0x000887f4) cale_week_time_pane

0x35e1,	// (0x00088805) grid_cale_week_pane

0x3606,	// (0x0008882a) scroll_pane_cp08

0x3620,	// (0x00088844) cell_cale_week_pane_ParamLimits

0x3620,	// (0x00088844) cell_cale_week_pane

0x365c,	// (0x00088880) cale_week_day_heading_pane_t1

0x3670,	// (0x00088894) cale_week_day_heading_pane_t2

0x3684,	// (0x000888a8) cale_week_day_heading_pane_t3

0x3698,	// (0x000888bc) cale_week_day_heading_pane_t4

0x36ac,	// (0x000888d0) cale_week_day_heading_pane_t5

0x36c0,	// (0x000888e4) cale_week_day_heading_pane_t6

0x36d4,	// (0x000888f8) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00094458) cale_week_day_heading_pane_t

0x36e8,	// (0x0008890c) bg_cale_side_pane

0x36f6,	// (0x0008891a) cale_week_time_pane_t1

0x370e,	// (0x00088932) cale_week_time_pane_t2

0x3726,	// (0x0008894a) cale_week_time_pane_t3

0x373e,	// (0x00088962) cale_week_time_pane_t4

0x3756,	// (0x0008897a) cale_week_time_pane_t5

0x376e,	// (0x00088992) cale_week_time_pane_t6

0x3786,	// (0x000889aa) cale_week_time_pane_t7

0x379e,	// (0x000889c2) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00094467) cale_week_time_pane_t

0x37b6,	// (0x000889da) cell_cale_week_pane_g2

0x37d2,	// (0x000889f6) cell_cale_week_pane_g3_ParamLimits

0x37d2,	// (0x000889f6) cell_cale_week_pane_g3

0x37ea,	// (0x00088a0e) grid_highlight_pane_cp07

0x37f2,	// (0x00088a16) listscroll_gms_pane

0x37fc,	// (0x00088a20) grid_gms_pane

0x3805,	// (0x00088a29) listscroll_gms_pane_g1

0x380d,	// (0x00088a31) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00094478) listscroll_gms_pane_g

0x3815,	// (0x00088a39) scroll_pane_cp010

0x3820,	// (0x00088a44) cell_gms_pane_ParamLimits

0x3820,	// (0x00088a44) cell_gms_pane

0x3833,	// (0x00088a57) cell_gms_pane_g1

0x383b,	// (0x00088a5f) cell_gms_pane_g2

0x342e,	// (0x00088652) cell_gms_pane_g3

0x3843,	// (0x00088a67) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0009447d) cell_gms_pane_g

0x384c,	// (0x00088a70) grid_highlight_pane_cp09

0x5a68,	// (0x0008ac8c) phob_pre_status_pane_g1

0x5a70,	// (0x0008ac94) phob_pre_status_pane_g2

0x5a78,	// (0x0008ac9c) phob_pre_status_pane_g3

0x5a80,	// (0x0008aca4) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0009486c) phob_pre_status_pane_g

0x5a92,	// (0x0008acb6) phob_pre_status_pane_t1

0x5aa0,	// (0x0008acc4) phob_pre_status_pane_t2

0x5ab0,	// (0x0008acd4) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00094877) phob_pre_status_pane_t

0x0c11,	// (0x00085e35) bg_list_pane_cp05

0xb139,	// (0x0009035d) grid_vorec_pane

0xb141,	// (0x00090365) vorec_t1

0xb14f,	// (0x00090373) vorec_t2

0xb15d,	// (0x00090381) vorec_t3

0xb16b,	// (0x0009038f) vorec_t4

0xb179,	// (0x0009039d) vorec_t5

0xb187,	// (0x000903ab) vorec_t6

0x0006,

0xf262,	// (0x00094486) vorec_t

0xb1a3,	// (0x000903c7) wait_bar_pane_cp01

0x3854,	// (0x00088a78) cell_vorec_pane_ParamLimits

0x3854,	// (0x00088a78) cell_vorec_pane

0x3867,	// (0x00088a8b) cell_vorec_pane_g1

0x0c11,	// (0x00085e35) grid_highlight_pane_cp05

0x3889,	// (0x00088aad) cams_zoom_pane

0x3898,	// (0x00088abc) image_vga_pane

0x38b2,	// (0x00088ad6) main_camera_pane_g1

0x38c4,	// (0x00088ae8) main_camera_pane_g2

0x38d6,	// (0x00088afa) main_camera_pane_g3

0x38e8,	// (0x00088b0c) main_camera_pane_g4

0x38fa,	// (0x00088b1e) main_camera_pane_g5

0x390c,	// (0x00088b30) main_camera_pane_g6

0x391e,	// (0x00088b42) main_camera_pane_g7

0x0007,

0xf271,	// (0x00094495) main_camera_pane_g

0x393c,	// (0x00088b60) main_camera_pane_t1

0x3952,	// (0x00088b76) main_camera_pane_t2

0x0001,

0xf282,	// (0x000944a6) main_camera_pane_t

0x398e,	// (0x00088bb2) cams_zoom_pane_cp_ParamLimits

0x398e,	// (0x00088bb2) cams_zoom_pane_cp

0x39b6,	// (0x00088bda) image_cif_pane_ParamLimits

0x39b6,	// (0x00088bda) image_cif_pane

0x39f1,	// (0x00088c15) image_subqcif_pane

0x39f9,	// (0x00088c1d) main_video_pane_g1_ParamLimits

0x39f9,	// (0x00088c1d) main_video_pane_g1

0x3a1d,	// (0x00088c41) main_video_pane_g2_ParamLimits

0x3a1d,	// (0x00088c41) main_video_pane_g2

0x3a53,	// (0x00088c77) main_video_pane_g3_ParamLimits

0x3a53,	// (0x00088c77) main_video_pane_g3

0x3a83,	// (0x00088ca7) main_video_pane_g4_ParamLimits

0x3a83,	// (0x00088ca7) main_video_pane_g4

0x3ab3,	// (0x00088cd7) main_video_pane_g5_ParamLimits

0x3ab3,	// (0x00088cd7) main_video_pane_g5

0x3acd,	// (0x00088cf1) main_video_pane_g6_ParamLimits

0x3acd,	// (0x00088cf1) main_video_pane_g6

0x0006,

0xf287,	// (0x000944ab) main_video_pane_g_ParamLimits

0xf287,	// (0x000944ab) main_video_pane_g

0x3af8,	// (0x00088d1c) main_video_pane_t1_ParamLimits

0x3af8,	// (0x00088d1c) main_video_pane_t1

0x3b41,	// (0x00088d65) cams_zoom_pane_g1

0x3b4a,	// (0x00088d6e) cams_zoom_pane_g2

0x3b53,	// (0x00088d77) cams_zoom_pane_g3

0x3b5c,	// (0x00088d80) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x000944ba) cams_zoom_pane_g

0x3b79,	// (0x00088d9d) grid_cams_pane

0x3b93,	// (0x00088db7) linegrid_cams_pane

0x3ba6,	// (0x00088dca) cell_cams_pane_ParamLimits

0x3ba6,	// (0x00088dca) cell_cams_pane

0x3bc6,	// (0x00088dea) cams_burst_image_pane

0x3bce,	// (0x00088df2) cell_cams_pane_g1

0x0c11,	// (0x00085e35) grid_highlight_pane_cp03

0x32af,	// (0x000884d3) mp_bg_pane_g1

0x0c11,	// (0x00085e35) bg_list_pane_cp03

0x0fc8,	// (0x000861ec) bg_mp_pane

0x0fd0,	// (0x000861f4) grid_mp_pane

0x0fd8,	// (0x000861fc) media_player_g1

0x0fe0,	// (0x00086204) media_player_t1

0x0fee,	// (0x00086212) media_player_t2

0x0ffc,	// (0x00086220) media_player_t3

0x100a,	// (0x0008622e) media_player_t4

0x1018,	// (0x0008623c) media_player_t5

0x1026,	// (0x0008624a) media_player_t6

0x1034,	// (0x00086258) media_player_t7

0x0006,

0xf632,	// (0x00094856) media_player_t

0x1042,	// (0x00086266) wait_bar_pane_cp02

0xf617,	// (0x0009483b) main_usb_pane_t

0x5a5f,	// (0x0008ac83) cell_mp_pane

0x32af,	// (0x000884d3) cell_mp_pane_g1

0x0c11,	// (0x00085e35) grid_highlight_pane_cp06

0x3ce6,	// (0x00088f0a) grid_skin_colour_pane

0x3cee,	// (0x00088f12) list_highlight_pane_cp03

0x3cf6,	// (0x00088f1a) skin_g1

0x3cfe,	// (0x00088f22) skin_t1

0x3d0d,	// (0x00088f31) skin_t2

0x0001,

0xf2cb,	// (0x000944ef) skin_t

0x3d1b,	// (0x00088f3f) cell_skin_colour_pane_ParamLimits

0x3d1b,	// (0x00088f3f) cell_skin_colour_pane

0xb1ab,	// (0x000903cf) cell_skin_colour_pane_g1

0x3d81,	// (0x00088fa5) call_video_g1_ParamLimits

0x3d81,	// (0x00088fa5) call_video_g1

0x3d9d,	// (0x00088fc1) call_video_g2_ParamLimits

0x3d9d,	// (0x00088fc1) call_video_g2

0x0001,

0xf2d0,	// (0x000944f4) call_video_g_ParamLimits

0xf2d0,	// (0x000944f4) call_video_g

0x3dd7,	// (0x00088ffb) call_video_uplink_pane_cp1_ParamLimits

0x3dd7,	// (0x00088ffb) call_video_uplink_pane_cp1

0xb1c5,	// (0x000903e9) call_video_uplink_pane_cp2

0x3e55,	// (0x00089079) video_down_crop_pane_ParamLimits

0x3e55,	// (0x00089079) video_down_crop_pane

0x3f1b,	// (0x0008913f) video_down_pane_ParamLimits

0x3f1b,	// (0x0008913f) video_down_pane

0xb1cd,	// (0x000903f1) video_down_subqcif_pane_ParamLimits

0xb1cd,	// (0x000903f1) video_down_subqcif_pane

0xb1e5,	// (0x00090409) video_down_subqcif_pane_cp_ParamLimits

0xb1e5,	// (0x00090409) video_down_subqcif_pane_cp

0xb209,	// (0x0009042d) im_reading_pane_ParamLimits

0xb209,	// (0x0009042d) im_reading_pane

0x3fec,	// (0x00089210) im_writing_pane_ParamLimits

0x3fec,	// (0x00089210) im_writing_pane

0x4002,	// (0x00089226) im_reading_pane_t1

0xb223,	// (0x00090447) list_im_pane

0xb234,	// (0x00090458) scroll_pane_cp07

0x403e,	// (0x00089262) im_writing_pane_t1_ParamLimits

0x403e,	// (0x00089262) im_writing_pane_t1

0xb24d,	// (0x00090471) im_writing_pane_t2_ParamLimits

0xb24d,	// (0x00090471) im_writing_pane_t2

0x0001,

0xf2da,	// (0x000944fe) im_writing_pane_t_ParamLimits

0xf2da,	// (0x000944fe) im_writing_pane_t

0x0c11,	// (0x00085e35) input_focus_pane_cp04

0x0c11,	// (0x00085e35) input_focus_pane_cp05

0x4053,	// (0x00089277) list_im_single_pane_ParamLimits

0x4053,	// (0x00089277) list_im_single_pane

0x4069,	// (0x0008928d) list_single_im_pane_t1

0x5a1f,	// (0x0008ac43) blid_accuracy_pane

0x5a27,	// (0x0008ac4b) blid_compass_pane

0x5a31,	// (0x0008ac55) main_location_t1

0x5a41,	// (0x0008ac65) main_location_t2

0x5a51,	// (0x0008ac75) main_location_t3

0x0002,

0xf641,	// (0x00094865) main_location_t

0x0c11,	// (0x00085e35) aid_levels_location

0x32af,	// (0x000884d3) blid_accuracy_pane_g1

0x32af,	// (0x000884d3) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00094560) blid_accuracy_pane_g

0xb295,	// (0x000904b9) wml_content_pane

0xb2d3,	// (0x000904f7) wml_button_pane_ParamLimits

0xb2d3,	// (0x000904f7) wml_button_pane

0x4078,	// (0x0008929c) wml_list_single_large_pane_ParamLimits

0x4078,	// (0x0008929c) wml_list_single_large_pane

0x408f,	// (0x000892b3) wml_list_single_medium_pane_ParamLimits

0x408f,	// (0x000892b3) wml_list_single_medium_pane

0x40a7,	// (0x000892cb) wml_list_single_small_pane_ParamLimits

0x40a7,	// (0x000892cb) wml_list_single_small_pane

0xb2e7,	// (0x0009050b) wml_selection_box_pane_ParamLimits

0xb2e7,	// (0x0009050b) wml_selection_box_pane

0xb2fa,	// (0x0009051e) wml_list_single_pane_t1

0xb309,	// (0x0009052d) wml_list_single_medium_pane_t1

0xb318,	// (0x0009053c) wml_list_single_large_pane_t1

0xb327,	// (0x0009054b) input_focus_pane_cp02_ParamLimits

0xb327,	// (0x0009054b) input_focus_pane_cp02

0xb33a,	// (0x0009055e) wml_selection_box_pane_g1

0xb343,	// (0x00090567) wml_selection_box_pane_t1_ParamLimits

0xb343,	// (0x00090567) wml_selection_box_pane_t1

0x2e1b,	// (0x0008803f) bg_wml_button_pane_ParamLimits

0x2e1b,	// (0x0008803f) bg_wml_button_pane

0xb35b,	// (0x0009057f) wml_button_pane_g1

0xb363,	// (0x00090587) wml_button_pane_t1

0xb35b,	// (0x0009057f) wml_button_bg_pane_g1

0xb373,	// (0x00090597) wml_button_bg_pane_g2

0xb37b,	// (0x0009059f) wml_button_bg_pane_g3

0xb383,	// (0x000905a7) wml_button_bg_pane_g4

0xb38b,	// (0x000905af) wml_button_bg_pane_g5

0xb393,	// (0x000905b7) wml_button_bg_pane_g6

0xb39b,	// (0x000905bf) wml_button_bg_pane_g7

0xb3a3,	// (0x000905c7) wml_button_bg_pane_g8

0xb3ab,	// (0x000905cf) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00094503) wml_button_bg_pane_g

0x40c5,	// (0x000892e9) bg_list_pane_cp02

0xb3b3,	// (0x000905d7) mce_header_pane_ParamLimits

0xb3b3,	// (0x000905d7) mce_header_pane

0xb3c9,	// (0x000905ed) mce_icon_pane

0xb3c9,	// (0x000905ed) mce_image_pane

0xb3d2,	// (0x000905f6) mce_text_pane_ParamLimits

0xb3d2,	// (0x000905f6) mce_text_pane

0x40cd,	// (0x000892f1) scroll_pane_cp03

0xb2cb,	// (0x000904ef) scroll_pane_cp04

0xb3e5,	// (0x00090609) scroll_pane_cp05_ParamLimits

0xb3e5,	// (0x00090609) scroll_pane_cp05

0x40d7,	// (0x000892fb) mce_header_field_pane_ParamLimits

0x40d7,	// (0x000892fb) mce_header_field_pane

0x40ee,	// (0x00089312) mce_header_field_pane_2_ParamLimits

0x40ee,	// (0x00089312) mce_header_field_pane_2

0x4104,	// (0x00089328) mce_header_field_pane_3

0x410c,	// (0x00089330) list_single_mce_message_pane_ParamLimits

0x410c,	// (0x00089330) list_single_mce_message_pane

0x4124,	// (0x00089348) list_single_mce_smart_pane_ParamLimits

0x4124,	// (0x00089348) list_single_mce_smart_pane

0xb3f1,	// (0x00090615) input_focus_pane_cp03

0xb3fa,	// (0x0009061e) list_header_data_pane

0x4147,	// (0x0008936b) mce_header_field_pane_t1

0x4157,	// (0x0008937b) list_single_mce_header_pane_ParamLimits

0x4157,	// (0x0008937b) list_single_mce_header_pane

0xb402,	// (0x00090626) list_single_mce_header_pane_t1

0xb411,	// (0x00090635) list_single_mce_message_pane_g1

0xb419,	// (0x0009063d) list_single_mce_message_pane_t1

0x4189,	// (0x000893ad) bg_cale_heading_pane_cp01_ParamLimits

0x4189,	// (0x000893ad) bg_cale_heading_pane_cp01

0xb427,	// (0x0009064b) bg_cale_pane_cp02_ParamLimits

0xb427,	// (0x0009064b) bg_cale_pane_cp02

0x41ac,	// (0x000893d0) cale_month_corner_pane

0x41c2,	// (0x000893e6) cale_month_day_heading_pane_ParamLimits

0x41c2,	// (0x000893e6) cale_month_day_heading_pane

0x41ed,	// (0x00089411) cale_month_pane_g1_ParamLimits

0x41ed,	// (0x00089411) cale_month_pane_g1

0x4209,	// (0x0008942d) cale_month_pane_g2_ParamLimits

0x4209,	// (0x0008942d) cale_month_pane_g2

0x4222,	// (0x00089446) cale_month_pane_g3_ParamLimits

0x4222,	// (0x00089446) cale_month_pane_g3

0x424e,	// (0x00089472) cale_month_pane_g4_ParamLimits

0x424e,	// (0x00089472) cale_month_pane_g4

0x427a,	// (0x0008949e) cale_month_pane_g5_ParamLimits

0x427a,	// (0x0008949e) cale_month_pane_g5

0x42a6,	// (0x000894ca) cale_month_pane_g6_ParamLimits

0x42a6,	// (0x000894ca) cale_month_pane_g6

0x42d2,	// (0x000894f6) cale_month_pane_g7_ParamLimits

0x42d2,	// (0x000894f6) cale_month_pane_g7

0x42fe,	// (0x00089522) cale_month_pane_g8_ParamLimits

0x42fe,	// (0x00089522) cale_month_pane_g8

0x4332,	// (0x00089556) cale_month_pane_g9_ParamLimits

0x4332,	// (0x00089556) cale_month_pane_g9

0x4364,	// (0x00089588) cale_month_pane_g10_ParamLimits

0x4364,	// (0x00089588) cale_month_pane_g10

0x4396,	// (0x000895ba) cale_month_pane_g11_ParamLimits

0x4396,	// (0x000895ba) cale_month_pane_g11

0x43c8,	// (0x000895ec) cale_month_pane_g12_ParamLimits

0x43c8,	// (0x000895ec) cale_month_pane_g12

0x43fa,	// (0x0008961e) cale_month_pane_g13_ParamLimits

0x43fa,	// (0x0008961e) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00094516) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00094516) cale_month_pane_g

0x442c,	// (0x00089650) cale_month_week_pane

0x443d,	// (0x00089661) grid_cale_month_pane_ParamLimits

0x443d,	// (0x00089661) grid_cale_month_pane

0x4463,	// (0x00089687) cale_month_day_heading_pane_t1

0x44c1,	// (0x000896e5) cale_month_day_heading_pane_t2

0x4526,	// (0x0008974a) cale_month_day_heading_pane_t3

0x458b,	// (0x000897af) cale_month_day_heading_pane_t4

0x45f0,	// (0x00089814) cale_month_day_heading_pane_t5

0x4655,	// (0x00089879) cale_month_day_heading_pane_t6

0x46ba,	// (0x000898de) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00094531) cale_month_day_heading_pane_t

0x36e8,	// (0x0008890c) bg_cale_side_pane_cp01

0x471f,	// (0x00089943) cale_month_week_pane_t1

0x4736,	// (0x0008995a) cale_month_week_pane_t2

0x474d,	// (0x00089971) cale_month_week_pane_t3

0x4764,	// (0x00089988) cale_month_week_pane_t4

0x477b,	// (0x0008999f) cale_month_week_pane_t5

0x4792,	// (0x000899b6) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00094540) cale_month_week_pane_t

0x47a9,	// (0x000899cd) cell_cale_month_pane_ParamLimits

0x47a9,	// (0x000899cd) cell_cale_month_pane

0xb486,	// (0x000906aa) cell_cale_month_pane_g1

0x484f,	// (0x00089a73) cell_cale_month_pane_t1_ParamLimits

0x484f,	// (0x00089a73) cell_cale_month_pane_t1

0x37ea,	// (0x00088a0e) grid_highlight_pane_cp08

0x32af,	// (0x000884d3) main_smil_g1

0x486b,	// (0x00089a8f) smil_status_pane

0xb492,	// (0x000906b6) smil_text_pane

0x0ee8,	// (0x0008610c) bg_popup_call3_rect_pane_g8

0x0ef0,	// (0x00086114) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x000947f9) bg_popup_call3_rect_pane_g

0x1178,	// (0x0008639c) smil_status_volume_pane_g1

0xb49c,	// (0x000906c0) smil_status_pane_t1

0xccd0,	// (0x00091ef4) volume_smil_pane

0xb4b3,	// (0x000906d7) list_smil_text_pane

0x4880,	// (0x00089aa4) scroll_pane_cp011

0x488b,	// (0x00089aaf) smil_text_list_pane_t1_ParamLimits

0x488b,	// (0x00089aaf) smil_text_list_pane_t1

0xb4bd,	// (0x000906e1) aid_volume_smil_ParamLimits

0xb4bd,	// (0x000906e1) aid_volume_smil

0x32af,	// (0x000884d3) smil_volume_pane_g1

0x32af,	// (0x000884d3) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00094560) smil_volume_pane_g

0x318b,	// (0x000883af) listscroll_cale_day_pane

0xb4df,	// (0x00090703) bg_cale_pane

0xb4f7,	// (0x0009071b) list_cale_pane

0xb508,	// (0x0009072c) scroll_pane_cp09

0xb519,	// (0x0009073d) cale_bg_pane_g1

0xb521,	// (0x00090745) cale_bg_pane_g2

0xb529,	// (0x0009074d) cale_bg_pane_g3

0xb531,	// (0x00090755) cale_bg_pane_g4

0xb539,	// (0x0009075d) cale_bg_pane_g5

0xb541,	// (0x00090765) cale_bg_pane_g6

0xb549,	// (0x0009076d) cale_bg_pane_g7

0xb551,	// (0x00090775) cale_bg_pane_g8

0xb559,	// (0x0009077d) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00094565) cale_bg_pane_g

0x48df,	// (0x00089b03) list_cale_time_pane_ParamLimits

0x48df,	// (0x00089b03) list_cale_time_pane

0x48f4,	// (0x00089b18) list_cale_time_pane_g1_ParamLimits

0x48f4,	// (0x00089b18) list_cale_time_pane_g1

0xb561,	// (0x00090785) list_cale_time_pane_g2_ParamLimits

0xb561,	// (0x00090785) list_cale_time_pane_g2

0x4900,	// (0x00089b24) list_cale_time_pane_g3_ParamLimits

0x4900,	// (0x00089b24) list_cale_time_pane_g3

0x491c,	// (0x00089b40) list_cale_time_pane_g4_ParamLimits

0x491c,	// (0x00089b40) list_cale_time_pane_g4

0x492a,	// (0x00089b4e) list_cale_time_pane_g5_ParamLimits

0x492a,	// (0x00089b4e) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00094578) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00094578) list_cale_time_pane_g

0x4938,	// (0x00089b5c) list_cale_time_pane_t1_ParamLimits

0x4938,	// (0x00089b5c) list_cale_time_pane_t1

0x4960,	// (0x00089b84) list_cale_time_pane_t2_ParamLimits

0x4960,	// (0x00089b84) list_cale_time_pane_t2

0x4c8f,	// (0x00089eb3) aid_blid_cardinal_pane

0x4ccd,	// (0x00089ef1) compass_pane_t4

0x4988,	// (0x00089bac) list_cale_time_pane_t4_ParamLimits

0x4988,	// (0x00089bac) list_cale_time_pane_t4

0x4cdb,	// (0x00089eff) compass_pane_t5

0x4ce9,	// (0x00089f0d) compass_pane_t6

0x4cf7,	// (0x00089f1b) compass_pane_t7

0xba75,	// (0x00090c99) navi_pane_cc_t1

0xbbdc,	// (0x00090e00) aid_phob_thumbnail_center_pane

0x542b,	// (0x0008a64f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00094585) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00094585) list_cale_time_pane_t

0x086a,	// (0x00085a8e) bg_popup_window_pane_cp02_ParamLimits

0x086a,	// (0x00085a8e) bg_popup_window_pane_cp02

0xb57b,	// (0x0009079f) heading_pane_cp01_ParamLimits

0xb57b,	// (0x0009079f) heading_pane_cp01

0xb587,	// (0x000907ab) loc_req_pane_ParamLimits

0xb587,	// (0x000907ab) loc_req_pane

0xb597,	// (0x000907bb) loc_type_pane_ParamLimits

0xb597,	// (0x000907bb) loc_type_pane

0xb5a9,	// (0x000907cd) loc_type_pane_t1_ParamLimits

0xb5a9,	// (0x000907cd) loc_type_pane_t1

0xb5bb,	// (0x000907df) loc_type_pane_t2_ParamLimits

0xb5bb,	// (0x000907df) loc_type_pane_t2

0xb5cd,	// (0x000907f1) loc_type_pane_t3_ParamLimits

0xb5cd,	// (0x000907f1) loc_type_pane_t3

0x0002,

0xf368,	// (0x0009458c) loc_type_pane_t_ParamLimits

0xf368,	// (0x0009458c) loc_type_pane_t

0xb5df,	// (0x00090803) list_loc_req_pane

0xb5e9,	// (0x0009080d) scroll_pane_cp012

0x49b0,	// (0x00089bd4) list_single_loc_request_popup_menu_pane_ParamLimits

0x49b0,	// (0x00089bd4) list_single_loc_request_popup_menu_pane

0xb5f4,	// (0x00090818) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb5f4,	// (0x00090818) list_single_loc_request_popup_menu_pane_g1

0xb600,	// (0x00090824) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb600,	// (0x00090824) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00094593) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00094593) list_single_loc_request_popup_menu_pane_g

0xb60c,	// (0x00090830) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb60c,	// (0x00090830) list_single_loc_request_popup_menu_pane_t1

0x2e1b,	// (0x0008803f) bg_popup_window_pane_cp03_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_window_pane_cp03

0x1924,	// (0x00086b48) heading_loc_req_pane_ParamLimits

0x1924,	// (0x00086b48) heading_loc_req_pane

0x49bd,	// (0x00089be1) popup_dyc_status_message_window_g1_ParamLimits

0x49bd,	// (0x00089be1) popup_dyc_status_message_window_g1

0x49d1,	// (0x00089bf5) popup_dyc_status_message_window_t1_ParamLimits

0x49d1,	// (0x00089bf5) popup_dyc_status_message_window_t1

0x49e6,	// (0x00089c0a) popup_dyc_status_message_window_t2_ParamLimits

0x49e6,	// (0x00089c0a) popup_dyc_status_message_window_t2

0x49fb,	// (0x00089c1f) popup_dyc_status_message_window_t3_ParamLimits

0x49fb,	// (0x00089c1f) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00094598) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00094598) popup_dyc_status_message_window_t

0x0c11,	// (0x00085e35) bg_heading_pane_cp01

0xb622,	// (0x00090846) heading_loc_req_pane_g1

0xb62a,	// (0x0009084e) heading_loc_req_pane_g2

0xb632,	// (0x00090856) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0009459f) heading_loc_req_pane_g

0xb63a,	// (0x0009085e) heading_loc_req_pane_t1

0xb6c0,	// (0x000908e4) bg_popup_sub_pane_cp01_ParamLimits

0xb6c0,	// (0x000908e4) bg_popup_sub_pane_cp01

0xb6ce,	// (0x000908f2) popup_cale_events_window_g1_ParamLimits

0xb6ce,	// (0x000908f2) popup_cale_events_window_g1

0xb6ee,	// (0x00090912) popup_cale_events_window_g2_ParamLimits

0xb6ee,	// (0x00090912) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000945d3) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000945d3) popup_cale_events_window_g

0xb70e,	// (0x00090932) popup_cale_events_window_t1_ParamLimits

0xb70e,	// (0x00090932) popup_cale_events_window_t1

0xb720,	// (0x00090944) popup_cale_events_window_t2_ParamLimits

0xb720,	// (0x00090944) popup_cale_events_window_t2

0xb75e,	// (0x00090982) popup_cale_events_window_t3_ParamLimits

0xb75e,	// (0x00090982) popup_cale_events_window_t3

0xb798,	// (0x000909bc) popup_cale_events_window_t4_ParamLimits

0xb798,	// (0x000909bc) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000945d8) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000945d8) popup_cale_events_window_t

0x4a89,	// (0x00089cad) call_type_pane

0x4a99,	// (0x00089cbd) popup_call_status_window_g1

0x4aad,	// (0x00089cd1) popup_call_status_window_g2

0x4ac1,	// (0x00089ce5) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000945e1) popup_call_status_window_g

0xb7ce,	// (0x000909f2) call_type_pane_g1

0xb7d7,	// (0x000909fb) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000945e8) call_type_pane_g

0x0c11,	// (0x00085e35) bg_popup_sub_pane_cp02

0xb7e0,	// (0x00090a04) listscroll_popup_wml_pane

0xb7e8,	// (0x00090a0c) list_wml_pane

0xb7f2,	// (0x00090a16) scroll_pane_cp013

0xb7fd,	// (0x00090a21) list_single_graphic_popup_wml_pane_ParamLimits

0xb7fd,	// (0x00090a21) list_single_graphic_popup_wml_pane

0x32af,	// (0x000884d3) list_single_graphic_popup_wml_pane_g1

0xb811,	// (0x00090a35) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x000945ed) list_single_graphic_popup_wml_pane_g

0xb819,	// (0x00090a3d) list_single_graphic_popup_wml_pane_t1

0xb82f,	// (0x00090a53) aid_call_pane

0x2e13,	// (0x00088037) popup_clock_analogue_window_g1

0x2e13,	// (0x00088037) popup_clock_analogue_window_g2

0xb837,	// (0x00090a5b) popup_clock_analogue_window_g3

0xb837,	// (0x00090a5b) popup_clock_analogue_window_g4

0x32af,	// (0x000884d3) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000945f2) popup_clock_analogue_window_g

0xb83f,	// (0x00090a63) popup_clock_analogue_window_t1

0xb84d,	// (0x00090a71) clock_digital_number_pane_ParamLimits

0xb84d,	// (0x00090a71) clock_digital_number_pane

0xb859,	// (0x00090a7d) clock_digital_number_pane_cp02_ParamLimits

0xb859,	// (0x00090a7d) clock_digital_number_pane_cp02

0xb865,	// (0x00090a89) clock_digital_number_pane_cp03_ParamLimits

0xb865,	// (0x00090a89) clock_digital_number_pane_cp03

0xb871,	// (0x00090a95) clock_digital_number_pane_cp04_ParamLimits

0xb871,	// (0x00090a95) clock_digital_number_pane_cp04

0xb87d,	// (0x00090aa1) clock_digital_separator_pane_ParamLimits

0xb87d,	// (0x00090aa1) clock_digital_separator_pane

0xb889,	// (0x00090aad) popup_clock_digital_window_t1

0x32af,	// (0x000884d3) clock_digital_number_pane_g1

0x32af,	// (0x000884d3) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00094560) clock_digital_number_pane_g

0x32af,	// (0x000884d3) clock_digital_separator_pane_g1

0x32af,	// (0x000884d3) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00094560) clock_digital_separator_pane_g

0x0c11,	// (0x00085e35) bg_popup_window_pane_cp04

0xb8a6,	// (0x00090aca) heading_pane_cp03

0xb8ae,	// (0x00090ad2) listscroll_popup_gms_pane

0xb8b6,	// (0x00090ada) grid_large_graphic_popup_pane

0xb8c0,	// (0x00090ae4) listscroll_popup_gms_pane_g1

0xb8c8,	// (0x00090aec) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000945fd) listscroll_popup_gms_pane_g

0xb2cb,	// (0x000904ef) scroll_pane_cp014

0xb8d0,	// (0x00090af4) cell_large_graphic_popup_pane_ParamLimits

0xb8d0,	// (0x00090af4) cell_large_graphic_popup_pane

0xb8e8,	// (0x00090b0c) cell_large_graphic_popup_pane_g1_ParamLimits

0xb8e8,	// (0x00090b0c) cell_large_graphic_popup_pane_g1

0xb8f4,	// (0x00090b18) cell_large_graphic_popup_pane_g2_ParamLimits

0xb8f4,	// (0x00090b18) cell_large_graphic_popup_pane_g2

0xb900,	// (0x00090b24) cell_large_graphic_popup_pane_g3_ParamLimits

0xb900,	// (0x00090b24) cell_large_graphic_popup_pane_g3

0xb90d,	// (0x00090b31) cell_large_graphic_popup_pane_g4_ParamLimits

0xb90d,	// (0x00090b31) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00094602) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00094602) cell_large_graphic_popup_pane_g

0xb91d,	// (0x00090b41) grid_highlight_pane_cp010

0x32af,	// (0x000884d3) bg_popup_call_pane_g1

0xb927,	// (0x00090b4b) list_single_graphic_popup_conf_pane_ParamLimits

0xb927,	// (0x00090b4b) list_single_graphic_popup_conf_pane

0xb939,	// (0x00090b5d) list_highlight_pane_cp01

0xb942,	// (0x00090b66) list_single_graphic_popup_conf_pane_g1

0xb94a,	// (0x00090b6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0009460b) list_single_graphic_popup_conf_pane_g

0xb952,	// (0x00090b76) list_single_graphic_popup_conf_pane_t1

0xb960,	// (0x00090b84) linegrid_cams_pane_g1

0x4ad1,	// (0x00089cf5) linegrid_cams_pane_g2

0x342e,	// (0x00088652) linegrid_cams_pane_g3

0xb969,	// (0x00090b8d) linegrid_cams_pane_g4

0x4ada,	// (0x00089cfe) linegrid_cams_pane_g5

0x4ae3,	// (0x00089d07) linegrid_cams_pane_g6

0x3843,	// (0x00088a67) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00094610) linegrid_cams_pane_g

0xb972,	// (0x00090b96) popup_clock_analogue_window

0xb972,	// (0x00090b96) popup_clock_digital_window

0x0c11,	// (0x00085e35) popup_phob_thumbnail_window

0x32af,	// (0x000884d3) call_video_uplink_pane_g1

0xb97b,	// (0x00090b9f) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0009461f) call_video_uplink_pane_g

0x37ea,	// (0x00088a0e) video_uplink_pane

0xb983,	// (0x00090ba7) mce_image_pane_g1

0x4aee,	// (0x00089d12) mce_image_pane_g2

0x4af6,	// (0x00089d1a) mce_image_pane_g3

0x4afe,	// (0x00089d22) mce_image_pane_g4

0x4b06,	// (0x00089d2a) mce_image_pane_g5

0x0004,

0xf400,	// (0x00094624) mce_image_pane_g

0xb98d,	// (0x00090bb1) control_top_pane_stacon_cp01_ParamLimits

0xb98d,	// (0x00090bb1) control_top_pane_stacon_cp01

0xb9a1,	// (0x00090bc5) uni_indicator_pane_stacon_cp01_ParamLimits

0xb9a1,	// (0x00090bc5) uni_indicator_pane_stacon_cp01

0xb9b2,	// (0x00090bd6) bg_popup_sub_pane_cp03

0x4b0e,	// (0x00089d32) chi_dic_find_pane

0x4b16,	// (0x00089d3a) listscroll_chi_dic_pane

0x4b1f,	// (0x00089d43) main_pane_chidic_g1

0x4b32,	// (0x00089d56) chi_dic_find_pane_t1

0xb9bc,	// (0x00090be0) find_chidic_pane

0xb9c5,	// (0x00090be9) chi_dic_list_pane_ParamLimits

0xb9c5,	// (0x00090be9) chi_dic_list_pane

0xb9d6,	// (0x00090bfa) scroll_pane_cp020

0x4b40,	// (0x00089d64) find_chidic_pane_t1

0x0c11,	// (0x00085e35) input_focus_pane_cp06

0x4b4f,	// (0x00089d73) list_chi_dic_pane_ParamLimits

0x4b4f,	// (0x00089d73) list_chi_dic_pane

0xb9de,	// (0x00090c02) list_chi_dic_pane_t1_ParamLimits

0xb9de,	// (0x00090c02) list_chi_dic_pane_t1

0x0c11,	// (0x00085e35) list_highlight_pane_cp020

0xb9f1,	// (0x00090c15) bg_cale_heading_pane_g1

0x4b63,	// (0x00089d87) bg_cale_heading_pane_g2

0x4b6b,	// (0x00089d8f) bg_cale_heading_pane_g3

0x4b73,	// (0x00089d97) bg_cale_heading_pane_g4

0x4b7d,	// (0x00089da1) bg_cale_heading_pane_g5

0x4b87,	// (0x00089dab) bg_cale_heading_pane_g6

0x4b8f,	// (0x00089db3) bg_cale_heading_pane_g7

0x4b97,	// (0x00089dbb) bg_cale_heading_pane_g8

0x4ba1,	// (0x00089dc5) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0009462f) bg_cale_heading_pane_g

0xb9f1,	// (0x00090c15) bg_cale_side_pane_g1

0x4bab,	// (0x00089dcf) bg_cale_side_pane_g2

0x4bb3,	// (0x00089dd7) bg_cale_side_pane_g3

0x4bbb,	// (0x00089ddf) bg_cale_side_pane_g4

0x4bc3,	// (0x00089de7) bg_cale_side_pane_g5

0x4bcb,	// (0x00089def) bg_cale_side_pane_g6

0x4bd3,	// (0x00089df7) bg_cale_side_pane_g7

0x4bdb,	// (0x00089dff) bg_cale_side_pane_g8

0x4be3,	// (0x00089e07) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00094642) bg_cale_side_pane_g

0x4beb,	// (0x00089e0f) popup_call_status_window_ParamLimits

0x4beb,	// (0x00089e0f) popup_call_status_window

0xb9f9,	// (0x00090c1d) stacon_top_pane

0xba01,	// (0x00090c25) status_pane_ParamLimits

0xba01,	// (0x00090c25) status_pane

0xba16,	// (0x00090c3a) status_small_pane

0xba1e,	// (0x00090c42) control_pane

0x0c11,	// (0x00085e35) stacon_bottom_pane

0xba26,	// (0x00090c4a) list_single_mce_smart_pane_t1_ParamLimits

0xba26,	// (0x00090c4a) list_single_mce_smart_pane_t1

0xba39,	// (0x00090c5d) list_single_mce_smart_pane_t2_ParamLimits

0xba39,	// (0x00090c5d) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00094655) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00094655) list_single_mce_smart_pane_t

0x4c34,	// (0x00089e58) compass_pane

0x4c3d,	// (0x00089e61) main_location2_pane_t1

0x4c51,	// (0x00089e75) main_location2_pane_t2

0x4c65,	// (0x00089e89) main_location2_pane_t3

0x0003,

0xf436,	// (0x0009465a) main_location2_pane_t

0xba58,	// (0x00090c7c) compass_pane_g1_ParamLimits

0xba58,	// (0x00090c7c) compass_pane_g1

0x4caf,	// (0x00089ed3) compass_pane_t1

0x4cbe,	// (0x00089ee2) compass_pane_t2

0x0005,

0xf43f,	// (0x00094663) compass_pane_t

0x4d05,	// (0x00089f29) text_secondary_cp61

0xba6c,	// (0x00090c90) navi_pane_cams_g5

0xba8f,	// (0x00090cb3) navi_pane_im_t1

0xba9d,	// (0x00090cc1) navi_pane_mp_g1_ParamLimits

0xba9d,	// (0x00090cc1) navi_pane_mp_g1

0xbab1,	// (0x00090cd5) navi_pane_mp_g2_ParamLimits

0xbab1,	// (0x00090cd5) navi_pane_mp_g2

0xbabd,	// (0x00090ce1) navi_pane_mp_g3_ParamLimits

0xbabd,	// (0x00090ce1) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00094677) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00094677) navi_pane_mp_g

0xbac9,	// (0x00090ced) navi_pane_mp_t1

0xbad7,	// (0x00090cfb) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0009467e) navi_pane_mp_t

0xbb13,	// (0x00090d37) navi_pane_vt_g1

0xbac9,	// (0x00090ced) navi_pane_vt_t1

0xbb1b,	// (0x00090d3f) navi_slider_pane

0xbb23,	// (0x00090d47) zooming_pane

0xbb2b,	// (0x00090d4f) navi_slider_pane_g1

0xbb34,	// (0x00090d58) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00094685) navi_slider_pane_g

0xbb61,	// (0x00090d85) aid_levels_zoom

0xbb69,	// (0x00090d8d) zooming_pane_g1

0xbb71,	// (0x00090d95) zooming_pane_g2

0xbb71,	// (0x00090d95) zooming_pane_g3

0x0002,

0xf470,	// (0x00094694) zooming_pane_g

0xbb79,	// (0x00090d9d) level_10_zoom

0xbb82,	// (0x00090da6) level_11_zoom

0xbb8b,	// (0x00090daf) level_1_zoom

0xbb94,	// (0x00090db8) level_2_zoom

0xbb9d,	// (0x00090dc1) level_3_zoom

0xbba6,	// (0x00090dca) level_4_zoom

0xbbaf,	// (0x00090dd3) level_5_zoom

0xbbb8,	// (0x00090ddc) level_6_zoom

0xbbc1,	// (0x00090de5) level_7_zoom

0xbbca,	// (0x00090dee) level_8_zoom

0xbbd3,	// (0x00090df7) level_9_zoom

0xbbe4,	// (0x00090e08) popup_phob_thumbnail_window_g1

0xbbec,	// (0x00090e10) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0009469b) popup_phob_thumbnail_window_g

0x104a,	// (0x0008626e) level_1_location

0x1052,	// (0x00086276) level_2_location

0x105a,	// (0x0008627e) level_3_location

0x1062,	// (0x00086286) level_4_location

0xbb23,	// (0x00090d47) level_5_location

0x4e2e,	// (0x0008a052) mce_icon_pane_g1

0x4e36,	// (0x0008a05a) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000946a0) mce_icon_pane_g

0x4e3e,	// (0x0008a062) main_mup_pane_g1_ParamLimits

0x4e3e,	// (0x0008a062) main_mup_pane_g1

0x4e54,	// (0x0008a078) main_mup_pane_g2_ParamLimits

0x4e54,	// (0x0008a078) main_mup_pane_g2

0x4e6c,	// (0x0008a090) main_mup_pane_g3_ParamLimits

0x4e6c,	// (0x0008a090) main_mup_pane_g3

0x4e84,	// (0x0008a0a8) main_mup_pane_g4_ParamLimits

0x4e84,	// (0x0008a0a8) main_mup_pane_g4

0x4e9c,	// (0x0008a0c0) main_mup_pane_g5_ParamLimits

0x4e9c,	// (0x0008a0c0) main_mup_pane_g5

0x4eb8,	// (0x0008a0dc) main_mup_pane_g6_ParamLimits

0x4eb8,	// (0x0008a0dc) main_mup_pane_g6

0x4ed0,	// (0x0008a0f4) main_mup_pane_g7_ParamLimits

0x4ed0,	// (0x0008a0f4) main_mup_pane_g7

0x4ee8,	// (0x0008a10c) main_mup_pane_g8_ParamLimits

0x4ee8,	// (0x0008a10c) main_mup_pane_g8

0x4f00,	// (0x0008a124) main_mup_pane_g9_ParamLimits

0x4f00,	// (0x0008a124) main_mup_pane_g9

0x4f1a,	// (0x0008a13e) main_mup_pane_g10_ParamLimits

0x4f1a,	// (0x0008a13e) main_mup_pane_g10

0x4f34,	// (0x0008a158) main_mup_pane_g11_ParamLimits

0x4f34,	// (0x0008a158) main_mup_pane_g11

0x4f48,	// (0x0008a16c) main_mup_pane_g12_ParamLimits

0x4f48,	// (0x0008a16c) main_mup_pane_g12

0x4f5e,	// (0x0008a182) main_mup_pane_g13_ParamLimits

0x4f5e,	// (0x0008a182) main_mup_pane_g13

0x000c,

0xf481,	// (0x000946a5) main_mup_pane_g_ParamLimits

0xf481,	// (0x000946a5) main_mup_pane_g

0x4f72,	// (0x0008a196) main_mup_pane_t1_ParamLimits

0x4f72,	// (0x0008a196) main_mup_pane_t1

0x4f8c,	// (0x0008a1b0) main_mup_pane_t2_ParamLimits

0x4f8c,	// (0x0008a1b0) main_mup_pane_t2

0x4fa4,	// (0x0008a1c8) main_mup_pane_t3_ParamLimits

0x4fa4,	// (0x0008a1c8) main_mup_pane_t3

0x4fbc,	// (0x0008a1e0) main_mup_pane_t4_ParamLimits

0x4fbc,	// (0x0008a1e0) main_mup_pane_t4

0x4fda,	// (0x0008a1fe) main_mup_pane_t5_ParamLimits

0x4fda,	// (0x0008a1fe) main_mup_pane_t5

0x4fef,	// (0x0008a213) main_mup_pane_t6_ParamLimits

0x4fef,	// (0x0008a213) main_mup_pane_t6

0x0005,

0xf49c,	// (0x000946c0) main_mup_pane_t_ParamLimits

0xf49c,	// (0x000946c0) main_mup_pane_t

0x5001,	// (0x0008a225) mup_progress_pane_ParamLimits

0x5001,	// (0x0008a225) mup_progress_pane

0x500d,	// (0x0008a231) mup_visualizer_pane_ParamLimits

0x500d,	// (0x0008a231) mup_visualizer_pane

0x5041,	// (0x0008a265) mup_volume_pane_ParamLimits

0x5041,	// (0x0008a265) mup_volume_pane

0xbbf4,	// (0x00090e18) mup_visualizer_pane_g1_ParamLimits

0xbbf4,	// (0x00090e18) mup_visualizer_pane_g1

0xbbf4,	// (0x00090e18) mup_visualizer_pane_g2_ParamLimits

0xbbf4,	// (0x00090e18) mup_visualizer_pane_g2

0xba58,	// (0x00090c7c) mup_visualizer_pane_g3_ParamLimits

0xba58,	// (0x00090c7c) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x000946cd) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x000946cd) mup_visualizer_pane_g

0x32af,	// (0x000884d3) mup_volume_pane_g1

0xbc0a,	// (0x00090e2e) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x000946d4) mup_volume_pane_g

0x32af,	// (0x000884d3) mup_progress_pane_g1

0xbc13,	// (0x00090e37) mup_progress_pane_g2

0xbc1c,	// (0x00090e40) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x000946d9) mup_progress_pane_g

0x0c11,	// (0x00085e35) bg_popup_window_pane_cp05

0xbc25,	// (0x00090e49) heading_pane_cp02_ParamLimits

0xbc25,	// (0x00090e49) heading_pane_cp02

0xbc3f,	// (0x00090e63) list_popup_blid_pane

0xbc47,	// (0x00090e6b) list_blid_sat_info_pane_ParamLimits

0xbc47,	// (0x00090e6b) list_blid_sat_info_pane

0xbc5a,	// (0x00090e7e) list_blid_sat_info_pane_g1

0xbc62,	// (0x00090e86) list_blid_sat_info_pane_t1

0x5157,	// (0x0008a37b) mup_equalizer_pane_ParamLimits

0x5157,	// (0x0008a37b) mup_equalizer_pane

0x5170,	// (0x0008a394) mup_equalizer_pane_cp1_ParamLimits

0x5170,	// (0x0008a394) mup_equalizer_pane_cp1

0x518d,	// (0x0008a3b1) mup_equalizer_pane_cp2_ParamLimits

0x518d,	// (0x0008a3b1) mup_equalizer_pane_cp2

0x51aa,	// (0x0008a3ce) mup_equalizer_pane_cp3_ParamLimits

0x51aa,	// (0x0008a3ce) mup_equalizer_pane_cp3

0x51cb,	// (0x0008a3ef) mup_equalizer_pane_cp4_ParamLimits

0x51cb,	// (0x0008a3ef) mup_equalizer_pane_cp4

0x51ec,	// (0x0008a410) mup_equalizer_pane_cp5

0x5200,	// (0x0008a424) mup_equalizer_pane_cp6

0x5214,	// (0x0008a438) mup_equalizer_pane_cp7

0x0f68,	// (0x0008618c) bg_popup_call_poc_act_pane_g9

0x0f70,	// (0x00086194) bg_popup_call_poc_act_pane_g10

0x0f78,	// (0x0008619c) bg_popup_call_poc_act_pane_g11

0x000a,

0x2e1b,	// (0x0008803f) mup_scale_pane

0x32af,	// (0x000884d3) mup_scale_pane_g1

0xbc70,	// (0x00090e94) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x000946f5) mup_scale_pane_g

0xbc94,	// (0x00090eb8) msg_data_pane

0xbc9c,	// (0x00090ec0) scroll_pane_cp017

0x523a,	// (0x0008a45e) bg_list_pane_cp04_ParamLimits

0x523a,	// (0x0008a45e) bg_list_pane_cp04

0xbca4,	// (0x00090ec8) msg_data_pane_g1

0x525a,	// (0x0008a47e) msg_data_pane_g2

0x4af6,	// (0x00089d1a) msg_data_pane_g3

0x5262,	// (0x0008a486) msg_data_pane_g4

0x526a,	// (0x0008a48e) msg_data_pane_g5

0x5272,	// (0x0008a496) msg_data_pane_g6

0x527a,	// (0x0008a49e) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00094704) msg_data_pane_g

0x5282,	// (0x0008a4a6) msg_text_pane_ParamLimits

0x5282,	// (0x0008a4a6) msg_text_pane

0x52a8,	// (0x0008a4cc) qrid_highlight_pane_cp011_ParamLimits

0x52a8,	// (0x0008a4cc) qrid_highlight_pane_cp011

0x0c11,	// (0x00085e35) msg_body_pane

0x0c11,	// (0x00085e35) msg_header_pane

0xbcb5,	// (0x00090ed9) input_focus_pane_cp07

0x52cc,	// (0x0008a4f0) msg_header_pane_t1_ParamLimits

0x52cc,	// (0x0008a4f0) msg_header_pane_t1

0x52e0,	// (0x0008a504) msg_header_pane_t2_ParamLimits

0x52e0,	// (0x0008a504) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00094718) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00094718) msg_header_pane_t

0xbcca,	// (0x00090eee) msg_body_pane_g1

0x52f2,	// (0x0008a516) msg_body_pane_t1_ParamLimits

0x52f2,	// (0x0008a516) msg_body_pane_t1

0x5323,	// (0x0008a547) msg_body_pane_t2_ParamLimits

0x5323,	// (0x0008a547) msg_body_pane_t2

0x5335,	// (0x0008a559) msg_body_pane_t3_ParamLimits

0x5335,	// (0x0008a559) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0009471d) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0009471d) msg_body_pane_t

0x5381,	// (0x0008a5a5) main_viewer_pane_g1_ParamLimits

0x5381,	// (0x0008a5a5) main_viewer_pane_g1

0x538f,	// (0x0008a5b3) main_viewer_pane_g2_ParamLimits

0x538f,	// (0x0008a5b3) main_viewer_pane_g2

0x539d,	// (0x0008a5c1) main_viewer_pane_g3_ParamLimits

0x539d,	// (0x0008a5c1) main_viewer_pane_g3

0x53ac,	// (0x0008a5d0) main_viewer_pane_g4_ParamLimits

0x53ac,	// (0x0008a5d0) main_viewer_pane_g4

0xbcea,	// (0x00090f0e) main_viewer_pane_g5_ParamLimits

0xbcea,	// (0x00090f0e) main_viewer_pane_g5

0xbcea,	// (0x00090f0e) main_viewer_pane_g7_ParamLimits

0xbcea,	// (0x00090f0e) main_viewer_pane_g7

0xbcfc,	// (0x00090f20) main_viewer_pane_g8_ParamLimits

0xbcfc,	// (0x00090f20) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0009472d) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0009472d) main_viewer_pane_g

0xbd14,	// (0x00090f38) viewer_content_pane_ParamLimits

0xbd14,	// (0x00090f38) viewer_content_pane

0x53e8,	// (0x0008a60c) main_postcard_pane_g1_ParamLimits

0x53e8,	// (0x0008a60c) main_postcard_pane_g1

0x53fe,	// (0x0008a622) main_postcard_pane_g2_ParamLimits

0x53fe,	// (0x0008a622) main_postcard_pane_g2

0x5414,	// (0x0008a638) main_postcard_pane_g3_ParamLimits

0x5414,	// (0x0008a638) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0009473e) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0009473e) main_postcard_pane_g

0x542b,	// (0x0008a64f) main_postcard_pane_g4

0x118b,	// (0x000863af) smil_status_volume_pane_g2

0x546e,	// (0x0008a692) postcard_pane_ParamLimits

0x546e,	// (0x0008a692) postcard_pane

0xbd22,	// (0x00090f46) postcard_pane_g1_ParamLimits

0xbd22,	// (0x00090f46) postcard_pane_g1

0x54b0,	// (0x0008a6d4) postcard_pane_g2_ParamLimits

0x54b0,	// (0x0008a6d4) postcard_pane_g2

0x54bc,	// (0x0008a6e0) postcard_pane_g3_ParamLimits

0x54bc,	// (0x0008a6e0) postcard_pane_g3

0xbd30,	// (0x00090f54) postcard_pane_g4_ParamLimits

0xbd30,	// (0x00090f54) postcard_pane_g4

0x54c8,	// (0x0008a6ec) postcard_pane_g5_ParamLimits

0x54c8,	// (0x0008a6ec) postcard_pane_g5

0x54dd,	// (0x0008a701) postcard_pane_g6_ParamLimits

0x54dd,	// (0x0008a701) postcard_pane_g6

0xbd22,	// (0x00090f46) postcard_pane_g7_ParamLimits

0xbd22,	// (0x00090f46) postcard_pane_g7

0x0006,

0xf527,	// (0x0009474b) postcard_pane_g_ParamLimits

0xf527,	// (0x0009474b) postcard_pane_g

0x54f1,	// (0x0008a715) main_mp2_pane_g1_ParamLimits

0x54f1,	// (0x0008a715) main_mp2_pane_g1

0x54fd,	// (0x0008a721) main_mp2_pane_g2_ParamLimits

0x54fd,	// (0x0008a721) main_mp2_pane_g2

0x5509,	// (0x0008a72d) main_mp2_pane_g3_ParamLimits

0x5509,	// (0x0008a72d) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0009475a) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0009475a) main_mp2_pane_g

0x5515,	// (0x0008a739) main_mp2_pane_t1_ParamLimits

0x5515,	// (0x0008a739) main_mp2_pane_t1

0x552a,	// (0x0008a74e) main_mp2_pane_t2_ParamLimits

0x552a,	// (0x0008a74e) main_mp2_pane_t2

0x553c,	// (0x0008a760) main_mp2_pane_t3_ParamLimits

0x553c,	// (0x0008a760) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00094761) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00094761) main_mp2_pane_t

0xbd3e,	// (0x00090f62) pec_content_pane_ParamLimits

0xbd3e,	// (0x00090f62) pec_content_pane

0xb2cb,	// (0x000904ef) scroll_pane_cp015

0xbd50,	// (0x00090f74) pec_attribute_pane_ParamLimits

0xbd50,	// (0x00090f74) pec_attribute_pane

0x554e,	// (0x0008a772) pec_content_pane_g1_ParamLimits

0x554e,	// (0x0008a772) pec_content_pane_g1

0xbd60,	// (0x00090f84) pec_content_pane_t1_ParamLimits

0xbd60,	// (0x00090f84) pec_content_pane_t1

0xbd72,	// (0x00090f96) pec_content_pane_t2_ParamLimits

0xbd72,	// (0x00090f96) pec_content_pane_t2

0x0001,

0xf544,	// (0x00094768) pec_content_pane_t_ParamLimits

0xf544,	// (0x00094768) pec_content_pane_t

0x555c,	// (0x0008a780) list_single_graphic_pane_cp01_ParamLimits

0x555c,	// (0x0008a780) list_single_graphic_pane_cp01

0x2e1b,	// (0x0008803f) bg_popup_sub_pane_cp04

0xbd84,	// (0x00090fa8) popup_mup_playback_window_g1

0xbd90,	// (0x00090fb4) popup_mup_playback_window_t1

0xbda5,	// (0x00090fc9) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0009476d) popup_mup_playback_window_t

0xbddc,	// (0x00091000) main_image_pane_g1_ParamLimits

0xbddc,	// (0x00091000) main_image_pane_g1

0xbe1f,	// (0x00091043) scroll_pane_cp018_ParamLimits

0xbe1f,	// (0x00091043) scroll_pane_cp018

0xbe37,	// (0x0009105b) scroll_pane_cp016_ParamLimits

0xbe37,	// (0x0009105b) scroll_pane_cp016

0x562c,	// (0x0008a850) smil2_image_pane_ParamLimits

0x562c,	// (0x0008a850) smil2_image_pane

0x5660,	// (0x0008a884) smil2_root_pane_ParamLimits

0x5660,	// (0x0008a884) smil2_root_pane

0x5698,	// (0x0008a8bc) smil2_text_pane_ParamLimits

0x5698,	// (0x0008a8bc) smil2_text_pane

0x0c11,	// (0x00085e35) bg_list_pane_cp06

0xbe73,	// (0x00091097) grid_radio_pane

0x0c11,	// (0x00085e35) bg_popup_window_pane_cp06

0xbe7b,	// (0x0009109f) main_fmradio_pane_t1

0xb8a6,	// (0x00090aca) heading_pane_cp04

0xbe89,	// (0x000910ad) main_fmradio_pane_t2

0x0f80,	// (0x000861a4) popup_cale_lunar_info_window_g1

0xbe97,	// (0x000910bb) main_fmradio_pane_t3

0x0f88,	// (0x000861ac) popup_cale_lunar_info_window_g2

0xbea5,	// (0x000910c9) main_fmradio_pane_t4

0x0001,

0xbeb3,	// (0x000910d7) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00094848) popup_cale_lunar_info_window_g

0xf55e,	// (0x00094782) main_fmradio_pane_t

0xbec1,	// (0x000910e5) wait_bar_pane_cp03

0xbec9,	// (0x000910ed) cell_fmradio_pane_ParamLimits

0xbec9,	// (0x000910ed) cell_fmradio_pane

0xbd22,	// (0x00090f46) cell_fmradio_pane_g1_ParamLimits

0xbd22,	// (0x00090f46) cell_fmradio_pane_g1

0x0c11,	// (0x00085e35) grid_highlight_pane_cp011

0xbedc,	// (0x00091100) poc_content_pane_ParamLimits

0xbedc,	// (0x00091100) poc_content_pane

0xbeee,	// (0x00091112) scroll_pane_cp019

0x5718,	// (0x0008a93c) popup_call_poc_act_window_ParamLimits

0x5718,	// (0x0008a93c) popup_call_poc_act_window

0x573c,	// (0x0008a960) popup_call_poc_inact_window_ParamLimits

0x573c,	// (0x0008a960) popup_call_poc_inact_window

0xf5fb,	// (0x0009481f) bg_popup_call_poc_act_pane_g

0x0ef8,	// (0x0008611c) bg_popup_call_poc_inact_pane_g1

0x0f00,	// (0x00086124) bg_popup_call_poc_inact_pane_g2

0xbef6,	// (0x0009111a) popup_call_poc_act_window_g2

0x0f08,	// (0x0008612c) bg_popup_call_poc_inact_pane_g3

0x0f10,	// (0x00086134) bg_popup_call_poc_inact_pane_g4

0x0f18,	// (0x0008613c) bg_popup_call_poc_inact_pane_g5

0xbefe,	// (0x00091122) popup_call_poc_act_window_t1_ParamLimits

0xbefe,	// (0x00091122) popup_call_poc_act_window_t1

0xbf26,	// (0x0009114a) popup_call_poc_act_window_t2_ParamLimits

0xbf26,	// (0x0009114a) popup_call_poc_act_window_t2

0xbf4e,	// (0x00091172) popup_call_poc_act_window_t3_ParamLimits

0xbf4e,	// (0x00091172) popup_call_poc_act_window_t3

0xbf76,	// (0x0009119a) popup_call_poc_act_window_t4_ParamLimits

0xbf76,	// (0x0009119a) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0009478d) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0009478d) popup_call_poc_act_window_t

0x0f20,	// (0x00086144) bg_popup_call_poc_inact_pane_g6

0x0f28,	// (0x0008614c) bg_popup_call_poc_inact_pane_g7

0x0f30,	// (0x00086154) bg_popup_call_poc_inact_pane_g8

0xbf88,	// (0x000911ac) popup_call_poc_inact_window_g2

0x0f38,	// (0x0008615c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0009480c) bg_popup_call_poc_inact_pane_g

0xbf90,	// (0x000911b4) popup_call_poc_inact_window_t1_ParamLimits

0xbf90,	// (0x000911b4) popup_call_poc_inact_window_t1

0xbfa5,	// (0x000911c9) popup_call_poc_inact_window_t2_ParamLimits

0xbfa5,	// (0x000911c9) popup_call_poc_inact_window_t2

0xbfba,	// (0x000911de) popup_call_poc_inact_window_t3_ParamLimits

0xbfba,	// (0x000911de) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00094796) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00094796) popup_call_poc_inact_window_t

0x10fe,	// (0x00086322) context_pane_ParamLimits

0x5f66,	// (0x0008b18a) signal_pane_ParamLimits

0xbb23,	// (0x00090d47) main_call2_pane

0x10ec,	// (0x00086310) popup_phob_thumbnail2_window_ParamLimits

0x10ec,	// (0x00086310) popup_phob_thumbnail2_window

0xbcd2,	// (0x00090ef6) aid_hotspot_pointer_arrow_pane

0xbcda,	// (0x00090efe) aid_hotspot_pointer_hand_pane

0x5a8a,	// (0x0008acae) phob_pre_status_pane_g5

0x3889,	// (0x00088aad) cams_zoom_pane_ParamLimits

0x3898,	// (0x00088abc) image_vga_pane_ParamLimits

0x38b2,	// (0x00088ad6) main_camera_pane_g1_ParamLimits

0x38c4,	// (0x00088ae8) main_camera_pane_g2_ParamLimits

0x38d6,	// (0x00088afa) main_camera_pane_g3_ParamLimits

0x38e8,	// (0x00088b0c) main_camera_pane_g4_ParamLimits

0x38fa,	// (0x00088b1e) main_camera_pane_g5_ParamLimits

0x390c,	// (0x00088b30) main_camera_pane_g6_ParamLimits

0x391e,	// (0x00088b42) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00094495) main_camera_pane_g_ParamLimits

0x393c,	// (0x00088b60) main_camera_pane_t1_ParamLimits

0x3952,	// (0x00088b76) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000944a6) main_camera_pane_t_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_preview_window_pane_cp01_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_preview_window_pane_cp01

0xbfcf,	// (0x000911f3) popup_phob_thumbnail2_window_g1_ParamLimits

0xbfcf,	// (0x000911f3) popup_phob_thumbnail2_window_g1

0x0c11,	// (0x00085e35) call2_cli_visual_pane

0x5770,	// (0x0008a994) popup_call2_audio_conf_window_ParamLimits

0x5770,	// (0x0008a994) popup_call2_audio_conf_window

0x5790,	// (0x0008a9b4) popup_call2_audio_first_window_ParamLimits

0x5790,	// (0x0008a9b4) popup_call2_audio_first_window

0x5826,	// (0x0008aa4a) popup_call2_audio_in_window_ParamLimits

0x5826,	// (0x0008aa4a) popup_call2_audio_in_window

0x586e,	// (0x0008aa92) popup_call2_audio_out_window_ParamLimits

0x586e,	// (0x0008aa92) popup_call2_audio_out_window

0x58d8,	// (0x0008aafc) popup_call2_audio_second_window_ParamLimits

0x58d8,	// (0x0008aafc) popup_call2_audio_second_window

0x593e,	// (0x0008ab62) popup_call2_audio_wait_window_ParamLimits

0x593e,	// (0x0008ab62) popup_call2_audio_wait_window

0x0c11,	// (0x00085e35) bg_popup_call2_act_pane_cp03

0x2dfd,	// (0x00088021) list_conf_pane_cp

0xbfdb,	// (0x000911ff) popup_call2_audio_conf_window_t1

0xbfe9,	// (0x0009120d) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfe9,	// (0x0009120d) list_single_graphic_popup_conf2_pane

0xb939,	// (0x00090b5d) list_highlight_pane_cp04

0xbffc,	// (0x00091220) list_single_graphic_popup_conf2_pane_g1

0xb94a,	// (0x00090b6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0009479d) list_single_graphic_popup_conf2_pane_g

0xc006,	// (0x0009122a) list_single_graphic_popup_conf2_pane_t1

0xc014,	// (0x00091238) bg_popup_call2_act_pane_cp01_ParamLimits

0xc014,	// (0x00091238) bg_popup_call2_act_pane_cp01

0xc09e,	// (0x000912c2) call_type_pane_cp05_ParamLimits

0xc09e,	// (0x000912c2) call_type_pane_cp05

0xc0f2,	// (0x00091316) popup_call2_audio_second_window_g1_ParamLimits

0xc0f2,	// (0x00091316) popup_call2_audio_second_window_g1

0xc146,	// (0x0009136a) popup_call2_audio_second_window_g2_ParamLimits

0xc146,	// (0x0009136a) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x000947a2) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x000947a2) popup_call2_audio_second_window_g

0xc1ab,	// (0x000913cf) popup_call2_audio_second_window_t1_ParamLimits

0xc1ab,	// (0x000913cf) popup_call2_audio_second_window_t1

0xc266,	// (0x0009148a) popup_call2_audio_second_window_t2_ParamLimits

0xc266,	// (0x0009148a) popup_call2_audio_second_window_t2

0xc2b9,	// (0x000914dd) popup_call2_audio_second_window_t3_ParamLimits

0xc2b9,	// (0x000914dd) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x000947a9) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x000947a9) popup_call2_audio_second_window_t

0x0c11,	// (0x00085e35) bg_popup_call2_in_pane_cp02

0x0c1b,	// (0x00085e3f) call_type_pane_cp04

0x0c23,	// (0x00085e47) popup_call2_audio_wait_window_g1

0x0c2b,	// (0x00085e4f) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00094382) popup_call2_audio_wait_window_g

0x0c33,	// (0x00085e57) popup_call2_audio_wait_window_t3

0xc3ac,	// (0x000915d0) bg_popup_call2_act_pane_ParamLimits

0xc3ac,	// (0x000915d0) bg_popup_call2_act_pane

0xc46c,	// (0x00091690) call_type_pane_cp03_ParamLimits

0xc46c,	// (0x00091690) call_type_pane_cp03

0xc4d0,	// (0x000916f4) popup_call2_audio_first_window_g1_ParamLimits

0xc4d0,	// (0x000916f4) popup_call2_audio_first_window_g1

0xc540,	// (0x00091764) popup_call2_audio_first_window_g2_ParamLimits

0xc540,	// (0x00091764) popup_call2_audio_first_window_g2

0xbbf4,	// (0x00090e18) popup_call2_audio_first_window_g3_ParamLimits

0xbbf4,	// (0x00090e18) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x000947b2) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x000947b2) popup_call2_audio_first_window_g

0xc61e,	// (0x00091842) popup_call2_audio_first_window_t1_ParamLimits

0xc61e,	// (0x00091842) popup_call2_audio_first_window_t1

0xc721,	// (0x00091945) popup_call2_audio_first_window_t4_ParamLimits

0xc721,	// (0x00091945) popup_call2_audio_first_window_t4

0xc804,	// (0x00091a28) popup_call2_audio_first_window_t5_ParamLimits

0xc804,	// (0x00091a28) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x000947bd) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x000947bd) popup_call2_audio_first_window_t

0x2e13,	// (0x00088037) bg_popup_call2_act_pane_g1

0x0f90,	// (0x000861b4) popup_cale_lunar_info_window_t1

0x0f9e,	// (0x000861c2) popup_cale_lunar_info_window_t2

0x0fac,	// (0x000861d0) popup_cale_lunar_info_window_t3

0x0c11,	// (0x00085e35) bg_popup_call2_bubble_pane

0xc905,	// (0x00091b29) bg_popup_call2_in_pane_cp01_ParamLimits

0xc905,	// (0x00091b29) bg_popup_call2_in_pane_cp01

0x08ed,	// (0x00085b11) call_type_pane_cp02

0xc94d,	// (0x00091b71) popup_call2_audio_out_window_g1_ParamLimits

0xc94d,	// (0x00091b71) popup_call2_audio_out_window_g1

0xc979,	// (0x00091b9d) popup_call2_audio_out_window_g2_ParamLimits

0xc979,	// (0x00091b9d) popup_call2_audio_out_window_g2

0xc9a1,	// (0x00091bc5) popup_call2_audio_out_window_g3_ParamLimits

0xc9a1,	// (0x00091bc5) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x000947c6) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x000947c6) popup_call2_audio_out_window_g

0xc9dc,	// (0x00091c00) popup_call2_audio_out_window_t1_ParamLimits

0xc9dc,	// (0x00091c00) popup_call2_audio_out_window_t1

0xca3b,	// (0x00091c5f) popup_call2_audio_out_window_t2_ParamLimits

0xca3b,	// (0x00091c5f) popup_call2_audio_out_window_t2

0xca8f,	// (0x00091cb3) popup_call2_audio_out_window_t3_ParamLimits

0xca8f,	// (0x00091cb3) popup_call2_audio_out_window_t3

0xcaa5,	// (0x00091cc9) popup_call2_audio_out_window_t4_ParamLimits

0xcaa5,	// (0x00091cc9) popup_call2_audio_out_window_t4

0xcabb,	// (0x00091cdf) popup_call2_audio_out_window_t5_ParamLimits

0xcabb,	// (0x00091cdf) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x000947cf) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x000947cf) popup_call2_audio_out_window_t

0xcb1f,	// (0x00091d43) bg_popup_call2_in_pane_ParamLimits

0xcb1f,	// (0x00091d43) bg_popup_call2_in_pane

0xcb7b,	// (0x00091d9f) popup_call2_audio_in_window_g1_ParamLimits

0xcb7b,	// (0x00091d9f) popup_call2_audio_in_window_g1

0xcbb3,	// (0x00091dd7) popup_call2_audio_in_window_g2_ParamLimits

0xcbb3,	// (0x00091dd7) popup_call2_audio_in_window_g2

0xcbeb,	// (0x00091e0f) popup_call2_audio_in_window_g3_ParamLimits

0xcbeb,	// (0x00091e0f) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x000947dc) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x000947dc) popup_call2_audio_in_window_g

0xcc43,	// (0x00091e67) popup_call2_audio_in_window_t1_ParamLimits

0xcc43,	// (0x00091e67) popup_call2_audio_in_window_t1

0x0de2,	// (0x00086006) popup_call2_audio_in_window_t2_ParamLimits

0x0de2,	// (0x00086006) popup_call2_audio_in_window_t2

0x0e62,	// (0x00086086) popup_call2_audio_in_window_t3_ParamLimits

0x0e62,	// (0x00086086) popup_call2_audio_in_window_t3

0x0e7c,	// (0x000860a0) popup_call2_audio_in_window_t4_ParamLimits

0x0e7c,	// (0x000860a0) popup_call2_audio_in_window_t4

0x0e8e,	// (0x000860b2) popup_call2_audio_in_window_t5_ParamLimits

0x0e8e,	// (0x000860b2) popup_call2_audio_in_window_t5

0x0ea3,	// (0x000860c7) popup_call2_audio_in_window_t6_ParamLimits

0x0ea3,	// (0x000860c7) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x000947e5) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x000947e5) popup_call2_audio_in_window_t

0x2e13,	// (0x00088037) bg_popup_call2_in_pane_g1

0x0fba,	// (0x000861de) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0009484d) popup_cale_lunar_info_window_t

0x2e1b,	// (0x0008803f) bg_popup_call2_rect_pane_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_call2_rect_pane

0x0c11,	// (0x00085e35) call2_cli_visual_graphic_pane

0x0c11,	// (0x00085e35) call2_cli_visual_text_pane

0xccc3,	// (0x00091ee7) smil_status_volume_pane_g3

0x0002,

0x32af,	// (0x000884d3) call2_cli_visual_graphic_pane_g1

0x32af,	// (0x000884d3) call2_cli_visual_graphic_pane_g2

0x32af,	// (0x000884d3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x000947f2) call2_cli_visual_graphic_pane_g

0x0eb8,	// (0x000860dc) bg_popup_call2_rect_pane_g1

0x33f4,	// (0x00088618) bg_popup_call2_rect_pane_g2

0x0ec0,	// (0x000860e4) bg_popup_call2_rect_pane_g3

0x0ec8,	// (0x000860ec) bg_popup_call2_rect_pane_g4

0x0ed0,	// (0x000860f4) bg_popup_call2_rect_pane_g5

0x0ed8,	// (0x000860fc) bg_popup_call2_rect_pane_g6

0x0ee0,	// (0x00086104) bg_popup_call2_rect_pane_g7

0x0ee8,	// (0x0008610c) bg_popup_call2_rect_pane_g8

0x0ef0,	// (0x00086114) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x000947f9) bg_popup_call2_rect_pane_g

0x0ef8,	// (0x0008611c) bg_popup_call2_bubble_pane_g1

0x0f00,	// (0x00086124) bg_popup_call2_bubble_pane_g2

0x0f08,	// (0x0008612c) bg_popup_call2_bubble_pane_g3

0x0f10,	// (0x00086134) bg_popup_call2_bubble_pane_g4

0x0f18,	// (0x0008613c) bg_popup_call2_bubble_pane_g5

0x0f20,	// (0x00086144) bg_popup_call2_bubble_pane_g6

0x0f28,	// (0x0008614c) bg_popup_call2_bubble_pane_g7

0x0f30,	// (0x00086154) bg_popup_call2_bubble_pane_g8

0x0f38,	// (0x0008615c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0009480c) bg_popup_call2_bubble_pane_g

0x3460,	// (0x00088684) aid_cale_week_size_cell_pane

0x396a,	// (0x00088b8e) aid_cams_cif_uncrop_pane_ParamLimits

0x396a,	// (0x00088b8e) aid_cams_cif_uncrop_pane

0x3b65,	// (0x00088d89) aid_cams_size_cell_ParamLimits

0x3b65,	// (0x00088d89) aid_cams_size_cell

0x3b79,	// (0x00088d9d) grid_cams_pane_ParamLimits

0x3b93,	// (0x00088db7) linegrid_cams_pane_ParamLimits

0x3daf,	// (0x00088fd3) call_video_pane_t1

0x3dc3,	// (0x00088fe7) call_video_pane_t2

0x0001,

0xf2d5,	// (0x000944f9) call_video_pane_t

0x416b,	// (0x0008938f) aid_cale_month_size_cell_pane_ParamLimits

0x416b,	// (0x0008938f) aid_cale_month_size_cell_pane

0xf672,	// (0x00094896) smil_status_volume_pane_g

0xccd0,	// (0x00091ef4) volume_smil_pane_ParamLimits

0x07b2,	// (0x000859d6) aid_popup2_width_pane

0x334c,	// (0x00088570) cell_qdial_pane_g4_ParamLimits

0x334c,	// (0x00088570) cell_qdial_pane_g4

0x4c8f,	// (0x00089eb3) aid_blid_cardinal_pane_ParamLimits

0x4c9b,	// (0x00089ebf) aid_blid_destination_pane_ParamLimits

0x4c9b,	// (0x00089ebf) aid_blid_destination_pane

0x2e1b,	// (0x0008803f) bg_popup_call_poc_act_pane_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_call_poc_act_pane

0x2e1b,	// (0x0008803f) bg_popup_call_poc_inact_pane_ParamLimits

0x2e1b,	// (0x0008803f) bg_popup_call_poc_inact_pane

0x0f40,	// (0x00086164) bg_popup_call_poc_act_pane_g1

0x0f48,	// (0x0008616c) bg_popup_call_poc_act_pane_g2

0x0f50,	// (0x00086174) bg_popup_call_poc_act_pane_g3

0x0f10,	// (0x00086134) bg_popup_call_poc_act_pane_g4

0x0f18,	// (0x0008613c) bg_popup_call_poc_act_pane_g5

0x0f58,	// (0x0008617c) bg_popup_call_poc_act_pane_g6

0x0f28,	// (0x0008614c) bg_popup_call_poc_act_pane_g7

0x0f60,	// (0x00086184) bg_popup_call_poc_act_pane_g8

0x0c11,	// (0x00085e35) main_usb_pane

0x10c7,	// (0x000862eb) popup_cale_lunar_info_window

0x4002,	// (0x00089226) im_reading_pane_t1_ParamLimits

0xb223,	// (0x00090447) list_im_pane_ParamLimits

0xb234,	// (0x00090458) scroll_pane_cp07_ParamLimits

0x0c11,	// (0x00085e35) grid_highlight_pane_cp012

0x2e1b,	// (0x0008803f) mup_scale_pane_ParamLimits

0xbd22,	// (0x00090f46) main_usb_pane_g1_ParamLimits

0xbd22,	// (0x00090f46) main_usb_pane_g1

0x599d,	// (0x0008abc1) main_usb_pane_g2_ParamLimits

0x599d,	// (0x0008abc1) main_usb_pane_g2

0x0001,

0xf612,	// (0x00094836) main_usb_pane_g_ParamLimits

0xf612,	// (0x00094836) main_usb_pane_g

0x59b3,	// (0x0008abd7) main_usb_pane_t1_ParamLimits

0x59b3,	// (0x0008abd7) main_usb_pane_t1

0x59c5,	// (0x0008abe9) main_usb_pane_t2_ParamLimits

0x59c5,	// (0x0008abe9) main_usb_pane_t2

0x59d7,	// (0x0008abfb) main_usb_pane_t3_ParamLimits

0x59d7,	// (0x0008abfb) main_usb_pane_t3

0x59e9,	// (0x0008ac0d) main_usb_pane_t4_ParamLimits

0x59e9,	// (0x0008ac0d) main_usb_pane_t4

0x59fb,	// (0x0008ac1f) main_usb_pane_t5_ParamLimits

0x59fb,	// (0x0008ac1f) main_usb_pane_t5

0x5a0d,	// (0x0008ac31) main_usb_pane_t6_ParamLimits

0x5a0d,	// (0x0008ac31) main_usb_pane_t6

0x0005,

0xf617,	// (0x0009483b) main_usb_pane_t_ParamLimits

0x4c34,	// (0x00089e58) aid_text_placing

0x4c3d,	// (0x00089e61) main_location2_pane_t1_ParamLimits

0x4c51,	// (0x00089e75) main_location2_pane_t2_ParamLimits

0x4c65,	// (0x00089e89) main_location2_pane_t3_ParamLimits

0x4c7b,	// (0x00089e9f) main_location2_pane_t4_ParamLimits

0x4c7b,	// (0x00089e9f) main_location2_pane_t4

0xf436,	// (0x0009465a) main_location2_pane_t_ParamLimits

0x2ef3,	// (0x00088117) find_pinb_pane_g2_ParamLimits

0x2ef3,	// (0x00088117) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000943a8) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000943a8) find_pinb_pane_g

0x2eff,	// (0x00088123) find_pinb_pane_t1_ParamLimits

0x2f11,	// (0x00088135) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000943ad) find_pinb_pane_t_ParamLimits

0x0c11,	// (0x00085e35) main_call3_pane

0x4463,	// (0x00089687) cale_month_day_heading_pane_t1_ParamLimits

0x44c1,	// (0x000896e5) cale_month_day_heading_pane_t2_ParamLimits

0x4526,	// (0x0008974a) cale_month_day_heading_pane_t3_ParamLimits

0x458b,	// (0x000897af) cale_month_day_heading_pane_t4_ParamLimits

0x45f0,	// (0x00089814) cale_month_day_heading_pane_t5_ParamLimits

0x4655,	// (0x00089879) cale_month_day_heading_pane_t6_ParamLimits

0x46ba,	// (0x000898de) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00094531) cale_month_day_heading_pane_t_ParamLimits

0xb4aa,	// (0x000906ce) smil_status_volume_pane

0x548c,	// (0x0008a6b0) postcard_address_pane_ParamLimits

0x548c,	// (0x0008a6b0) postcard_address_pane

0x549e,	// (0x0008a6c2) postcard_message_pane_ParamLimits

0x549e,	// (0x0008a6c2) postcard_message_pane

0x5978,	// (0x0008ab9c) call2_cli_visual_pane_t1_ParamLimits

0x5978,	// (0x0008ab9c) call2_cli_visual_pane_t1

0x6194,	// (0x0008b3b8) postcard_message_pane_t1_ParamLimits

0x6194,	// (0x0008b3b8) postcard_message_pane_t1

0x617d,	// (0x0008b3a1) postcard_address_pane_t1_ParamLimits

0x617d,	// (0x0008b3a1) postcard_address_pane_t1

0x6169,	// (0x0008b38d) popup_call3_audio_in_window_ParamLimits

0x6169,	// (0x0008b38d) popup_call3_audio_in_window

0x5ff8,	// (0x0008b21c) bg_popup_call3_in_pane_ParamLimits

0x5ff8,	// (0x0008b21c) bg_popup_call3_in_pane

0x606a,	// (0x0008b28e) popup_call3_audio_in_window_g1_ParamLimits

0x606a,	// (0x0008b28e) popup_call3_audio_in_window_g1

0x608a,	// (0x0008b2ae) popup_call3_audio_in_window_g2_ParamLimits

0x608a,	// (0x0008b2ae) popup_call3_audio_in_window_g2

0x60aa,	// (0x0008b2ce) popup_call3_audio_in_window_g3_ParamLimits

0x60aa,	// (0x0008b2ce) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0009489d) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0009489d) popup_call3_audio_in_window_g

0x60db,	// (0x0008b2ff) popup_call3_audio_in_window_t1_ParamLimits

0x60db,	// (0x0008b2ff) popup_call3_audio_in_window_t1

0x6119,	// (0x0008b33d) popup_call3_audio_in_window_t2_ParamLimits

0x6119,	// (0x0008b33d) popup_call3_audio_in_window_t2

0x6157,	// (0x0008b37b) popup_call3_audio_in_window_t3_ParamLimits

0x6157,	// (0x0008b37b) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x000948a6) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x000948a6) popup_call3_audio_in_window_t

0xbb23,	// (0x00090d47) bg_popup_call3_rect_pane

0x0eb8,	// (0x000860dc) bg_popup_call3_rect_pane_g1

0x33f4,	// (0x00088618) bg_popup_call3_rect_pane_g2

0x0ec0,	// (0x000860e4) bg_popup_call3_rect_pane_g3

0x0ec8,	// (0x000860ec) bg_popup_call3_rect_pane_g4

0x0ed0,	// (0x000860f4) bg_popup_call3_rect_pane_g5

0x0ed8,	// (0x000860fc) bg_popup_call3_rect_pane_g6

0x0ee0,	// (0x00086104) bg_popup_call3_rect_pane_g7

0x5057,	// (0x0008a27b) mup_visualizer_osc_pane

0xbc02,	// (0x00090e26) mup_visualizer_spec_pane

0x6028,	// (0x0008b24c) call3_video_qcif_pane_ParamLimits

0x6028,	// (0x0008b24c) call3_video_qcif_pane

0x6039,	// (0x0008b25d) call3_video_qcif_uncrop_pane_ParamLimits

0x6039,	// (0x0008b25d) call3_video_qcif_uncrop_pane

0x6045,	// (0x0008b269) call3_video_subqcif_pane_ParamLimits

0x6045,	// (0x0008b269) call3_video_subqcif_pane

0x6059,	// (0x0008b27d) call3_video_subqcif_uncrop_pane_ParamLimits

0x6059,	// (0x0008b27d) call3_video_subqcif_uncrop_pane

0x60ca,	// (0x0008b2ee) popup_call3_audio_in_window_g4_ParamLimits

0x60ca,	// (0x0008b2ee) popup_call3_audio_in_window_g4

0x5fe7,	// (0x0008b20b) mup_spec_half_pane

0x5ff0,	// (0x0008b214) mup_spec_half_pane_cp

0x115e,	// (0x00086382) mup_osc_middle_pane

0x1167,	// (0x0008638b) mup_visualizer_osc_pane_g1

0x5fc7,	// (0x0008b1eb) mup_spec_bar_pane_ParamLimits

0x5fc7,	// (0x0008b1eb) mup_spec_bar_pane

0x114b,	// (0x0008636f) mup_spec_bar_pane_g1

0x1155,	// (0x00086379) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00094891) mup_spec_bar_pane_g

0x3460,	// (0x00088684) aid_cale_week_size_cell_pane_ParamLimits

0x3473,	// (0x00088697) bg_cale_heading_pane_ParamLimits

0x348b,	// (0x000886af) bg_cale_pane_cp01_ParamLimits

0x34a4,	// (0x000886c8) cale_week_corner_pane_ParamLimits

0x34b5,	// (0x000886d9) cale_week_day_heading_pane_ParamLimits

0x34cd,	// (0x000886f1) cale_week_scroll_pane_g1_ParamLimits

0x34e2,	// (0x00088706) cale_week_scroll_pane_g2_ParamLimits

0x34f3,	// (0x00088717) cale_week_scroll_pane_g3_ParamLimits

0x3504,	// (0x00088728) cale_week_scroll_pane_g4_ParamLimits

0x3515,	// (0x00088739) cale_week_scroll_pane_g5_ParamLimits

0x3526,	// (0x0008874a) cale_week_scroll_pane_g6_ParamLimits

0x3537,	// (0x0008875b) cale_week_scroll_pane_g7_ParamLimits

0x3548,	// (0x0008876c) cale_week_scroll_pane_g8_ParamLimits

0x3559,	// (0x0008877d) cale_week_scroll_pane_g9_ParamLimits

0x356a,	// (0x0008878e) cale_week_scroll_pane_g10_ParamLimits

0x357b,	// (0x0008879f) cale_week_scroll_pane_g11_ParamLimits

0x358c,	// (0x000887b0) cale_week_scroll_pane_g12_ParamLimits

0x359d,	// (0x000887c1) cale_week_scroll_pane_g13_ParamLimits

0x35ae,	// (0x000887d2) cale_week_scroll_pane_g14_ParamLimits

0x35bf,	// (0x000887e3) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00094439) cale_week_scroll_pane_g_ParamLimits

0x35d0,	// (0x000887f4) cale_week_time_pane_ParamLimits

0x35e1,	// (0x00088805) grid_cale_week_pane_ParamLimits

0x35f4,	// (0x00088818) listscroll_cale_week_pane_t1

0x3606,	// (0x0008882a) scroll_pane_cp08_ParamLimits

0x41ac,	// (0x000893d0) cale_month_corner_pane_ParamLimits

0xb44a,	// (0x0009066e) cale_month_pane_t1

0x442c,	// (0x00089650) cale_month_week_pane_ParamLimits

0x4a99,	// (0x00089cbd) popup_call_status_window_g1_ParamLimits

0x4aad,	// (0x00089cd1) popup_call_status_window_g2_ParamLimits

0x4ac1,	// (0x00089ce5) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000945e1) popup_call_status_window_g_ParamLimits

0xb827,	// (0x00090a4b) aid_call2_pane

0x52be,	// (0x0008a4e2) msg_header_pane_g1

0x548c,	// (0x0008a6b0) postcard_address2_pane_ParamLimits

0x548c,	// (0x0008a6b0) postcard_address2_pane

0x549e,	// (0x0008a6c2) postcard_message2_pane_ParamLimits

0x549e,	// (0x0008a6c2) postcard_message2_pane

0x5f74,	// (0x0008b198) message2_row_pane_ParamLimits

0x5f74,	// (0x0008b198) message2_row_pane

0x5f93,	// (0x0008b1b7) address2_row_pane_ParamLimits

0x5f93,	// (0x0008b1b7) address2_row_pane

0x1119,	// (0x0008633d) postcard_message2_row_pane_g1

0x1121,	// (0x00086345) postcard_message2_row_pane_t1

0x1119,	// (0x0008633d) address2_row_pane_g1

0x1121,	// (0x00086345) address2_row_pane_t1

0xb131,	// (0x00090355) aid_size_cell_vorec

0x0c11,	// (0x00085e35) main_rss_pane

0x5fa6,	// (0x0008b1ca) rss_list_single_pane_ParamLimits

0x5fa6,	// (0x0008b1ca) rss_list_single_pane

0x112f,	// (0x00086353) rss_list_single_pane_t1

0x113d,	// (0x00086361) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0009488c) rss_list_single_pane_t

0x0c11,	// (0x00085e35) main_camera2_pane

0x0c11,	// (0x00085e35) main_video2_pane

0x620d,	// (0x0008b431) cams_zoom_pane_cp2_ParamLimits

0x620d,	// (0x0008b431) cams_zoom_pane_cp2

0x622d,	// (0x0008b451) image2_vga_pane_ParamLimits

0x622d,	// (0x0008b451) image2_vga_pane

0x627e,	// (0x0008b4a2) main_camera2_pane_g1_ParamLimits

0x627e,	// (0x0008b4a2) main_camera2_pane_g1

0x629e,	// (0x0008b4c2) main_camera2_pane_g2_ParamLimits

0x629e,	// (0x0008b4c2) main_camera2_pane_g2

0x62be,	// (0x0008b4e2) main_camera2_pane_g3_ParamLimits

0x62be,	// (0x0008b4e2) main_camera2_pane_g3

0x62de,	// (0x0008b502) main_camera2_pane_g4_ParamLimits

0x62de,	// (0x0008b502) main_camera2_pane_g4

0x62fe,	// (0x0008b522) main_camera2_pane_g5_ParamLimits

0x62fe,	// (0x0008b522) main_camera2_pane_g5

0x631e,	// (0x0008b542) main_camera2_pane_g6_ParamLimits

0x631e,	// (0x0008b542) main_camera2_pane_g6

0x633e,	// (0x0008b562) main_camera2_pane_g7_ParamLimits

0x633e,	// (0x0008b562) main_camera2_pane_g7

0x635e,	// (0x0008b582) main_camera2_pane_g8_ParamLimits

0x635e,	// (0x0008b582) main_camera2_pane_g8

0x0008,

0xf689,	// (0x000948ad) main_camera2_pane_g_ParamLimits

0xf689,	// (0x000948ad) main_camera2_pane_g

0x639e,	// (0x0008b5c2) main_camera2_pane_t1_ParamLimits

0x639e,	// (0x0008b5c2) main_camera2_pane_t1

0x63d3,	// (0x0008b5f7) main_camera2_pane_t2_ParamLimits

0x63d3,	// (0x0008b5f7) main_camera2_pane_t2

0x63f9,	// (0x0008b61d) main_camera2_pane_t3_ParamLimits

0x63f9,	// (0x0008b61d) main_camera2_pane_t3

0x6457,	// (0x0008b67b) main_camera2_pane_t4_ParamLimits

0x6457,	// (0x0008b67b) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x000948c0) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x000948c0) main_camera2_pane_t

0x64e9,	// (0x0008b70d) cams_zoom_pane_cp4_ParamLimits

0x64e9,	// (0x0008b70d) cams_zoom_pane_cp4

0x64ff,	// (0x0008b723) image2_cif_pane_ParamLimits

0x64ff,	// (0x0008b723) image2_cif_pane

0x652a,	// (0x0008b74e) image2_subqcif_pane_ParamLimits

0x652a,	// (0x0008b74e) image2_subqcif_pane

0x6544,	// (0x0008b768) main_video2_pane_g1_ParamLimits

0x6544,	// (0x0008b768) main_video2_pane_g1

0x655e,	// (0x0008b782) main_video2_pane_g2_ParamLimits

0x655e,	// (0x0008b782) main_video2_pane_g2

0x6574,	// (0x0008b798) main_video2_pane_g3_ParamLimits

0x6574,	// (0x0008b798) main_video2_pane_g3

0x658a,	// (0x0008b7ae) main_video2_pane_g4_ParamLimits

0x658a,	// (0x0008b7ae) main_video2_pane_g4

0x65a0,	// (0x0008b7c4) main_video2_pane_g5_ParamLimits

0x65a0,	// (0x0008b7c4) main_video2_pane_g5

0x65b6,	// (0x0008b7da) main_video2_pane_g6_ParamLimits

0x65b6,	// (0x0008b7da) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x000948cf) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x000948cf) main_video2_pane_g

0x65d0,	// (0x0008b7f4) main_video2_pane_t1_ParamLimits

0x65d0,	// (0x0008b7f4) main_video2_pane_t1

0x65f4,	// (0x0008b818) main_video2_pane_t2_ParamLimits

0x65f4,	// (0x0008b818) main_video2_pane_t2

0x6642,	// (0x0008b866) main_video2_pane_t3_ParamLimits

0x6642,	// (0x0008b866) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x000948dc) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x000948dc) main_video2_pane_t

0x5aca,	// (0x0008acee) call_muted_g2

0x0001,

0xf65a,	// (0x0009487e) call_muted_g

0x0c11,	// (0x00085e35) main_mup2_pane

0x668a,	// (0x0008b8ae) main_mup2_pane_g1_ParamLimits

0x668a,	// (0x0008b8ae) main_mup2_pane_g1

0x6696,	// (0x0008b8ba) main_mup2_pane_g2_ParamLimits

0x6696,	// (0x0008b8ba) main_mup2_pane_g2

0xed14,	// (0x00093f38) main_mup_pane_g13_cp1

0xed1c,	// (0x00093f40) mup_volume_pane_cp1

0x66b2,	// (0x0008b8d6) main_mup2_pane_g4_ParamLimits

0x66b2,	// (0x0008b8d6) main_mup2_pane_g4

0x66c4,	// (0x0008b8e8) main_mup2_pane_g5_ParamLimits

0x66c4,	// (0x0008b8e8) main_mup2_pane_g5

0x66d6,	// (0x0008b8fa) main_mup2_pane_g6_ParamLimits

0x66d6,	// (0x0008b8fa) main_mup2_pane_g6

0x66e8,	// (0x0008b90c) main_mup2_pane_g7_ParamLimits

0x66e8,	// (0x0008b90c) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x000948e3) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x000948e3) main_mup2_pane_g

0x6700,	// (0x0008b924) main_mup2_pane_t1_ParamLimits

0x6700,	// (0x0008b924) main_mup2_pane_t1

0x6716,	// (0x0008b93a) main_mup2_pane_t2_ParamLimits

0x6716,	// (0x0008b93a) main_mup2_pane_t2

0x672c,	// (0x0008b950) main_mup2_pane_t3_ParamLimits

0x672c,	// (0x0008b950) main_mup2_pane_t3

0x6742,	// (0x0008b966) main_mup2_pane_t4_ParamLimits

0x6742,	// (0x0008b966) main_mup2_pane_t4

0x675a,	// (0x0008b97e) main_mup2_pane_t5_ParamLimits

0x675a,	// (0x0008b97e) main_mup2_pane_t5

0x6772,	// (0x0008b996) main_mup2_pane_t6_ParamLimits

0x6772,	// (0x0008b996) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x000948f2) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x000948f2) main_mup2_pane_t

0x67a2,	// (0x0008b9c6) mup2_visualizer_pane_ParamLimits

0x67a2,	// (0x0008b9c6) mup2_visualizer_pane

0x67d0,	// (0x0008b9f4) mup_progress_pane_cp_ParamLimits

0x67d0,	// (0x0008b9f4) mup_progress_pane_cp

0xecff,	// (0x00093f23) mup_volume_pane_cp_ParamLimits

0xecff,	// (0x00093f23) mup_volume_pane_cp

0x67e4,	// (0x0008ba08) mup2_visualizer_pane_g1_ParamLimits

0x67e4,	// (0x0008ba08) mup2_visualizer_pane_g1

0x11aa,	// (0x000863ce) mup2_visualizer_pane_g2_ParamLimits

0x11aa,	// (0x000863ce) mup2_visualizer_pane_g2

0x67fb,	// (0x0008ba1f) mup2_visualizer_pane_g3_ParamLimits

0x67fb,	// (0x0008ba1f) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x000948ff) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x000948ff) mup2_visualizer_pane_g

0xbe6b,	// (0x0009108f) aid_size_cell_fmradio

0x5c7c,	// (0x0008aea0) aid_height_parent_landcape

0xb2b2,	// (0x000904d6) wml_content_pane_cp

0xb2ba,	// (0x000904de) wml_tabs_pane

0xb2c3,	// (0x000904e7) popup_wml_miniature_window

0xb2cb,	// (0x000904ef) scroll_pane_cp021

0xb2df,	// (0x00090503) wml_content_pane_comp8

0x0c11,	// (0x00085e35) bg_popup_sub_pane_cp05

0x11c8,	// (0x000863ec) popup_wml_miniature_window_g1

0x11d0,	// (0x000863f4) wml_miniature_view_pane

0x6807,	// (0x0008ba2b) aid_size_wml_view

0x680f,	// (0x0008ba33) wml_miniature_view_pane_g1

0x6818,	// (0x0008ba3c) wml_miniature_view_pane_g2

0x6821,	// (0x0008ba45) wml_miniature_view_pane_g3

0x6829,	// (0x0008ba4d) wml_miniature_view_pane_g4

0x6831,	// (0x0008ba55) wml_miniature_view_pane_g5

0x6839,	// (0x0008ba5d) wml_miniature_view_pane_g6

0x6841,	// (0x0008ba65) wml_miniature_view_pane_g7

0x6849,	// (0x0008ba6d) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00094906) wml_miniature_view_pane_g

0x119e,	// (0x000863c2) background_graphic_ParamLimits

0x119e,	// (0x000863c2) background_graphic

0x11d8,	// (0x000863fc) wml_tabs_2_pane

0x11e1,	// (0x00086405) wml_tabs_3_pane_ParamLimits

0x11e1,	// (0x00086405) wml_tabs_3_pane

0x11f3,	// (0x00086417) wml_tabs_4_pane_ParamLimits

0x11f3,	// (0x00086417) wml_tabs_4_pane

0x1209,	// (0x0008642d) wml_tabs_5_pane_ParamLimits

0x1209,	// (0x0008642d) wml_tabs_5_pane

0x1223,	// (0x00086447) wml_tabs_pane_g2_ParamLimits

0x1223,	// (0x00086447) wml_tabs_pane_g2

0x1237,	// (0x0008645b) wml_tabs_pane_g3_ParamLimits

0x1237,	// (0x0008645b) wml_tabs_pane_g3

0x6851,	// (0x0008ba75) wml_tabs_2_active_pane_ParamLimits

0x6851,	// (0x0008ba75) wml_tabs_2_active_pane

0x6865,	// (0x0008ba89) wml_tabs_2_passive_pane_ParamLimits

0x6865,	// (0x0008ba89) wml_tabs_2_passive_pane

0x6879,	// (0x0008ba9d) wml_tabs_3_active_pane_cp_ParamLimits

0x6879,	// (0x0008ba9d) wml_tabs_3_active_pane_cp

0x688e,	// (0x0008bab2) wml_tabs_3_passive_pane_ParamLimits

0x688e,	// (0x0008bab2) wml_tabs_3_passive_pane

0x68a1,	// (0x0008bac5) wml_tabs_3_passive_pane_cp_ParamLimits

0x68a1,	// (0x0008bac5) wml_tabs_3_passive_pane_cp

0x68b8,	// (0x0008badc) tabs_4_active_pane

0x68c0,	// (0x0008bae4) tabs_4_passive_pane

0x68ca,	// (0x0008baee) tabs_4_passive_pane_cp

0x68d2,	// (0x0008baf6) tabs_4_passive_pane_cp2

0x5995,	// (0x0008abb9) aid_height_text

0x5029,	// (0x0008a24d) mup_volume_cont_pane_ParamLimits

0x5029,	// (0x0008a24d) mup_volume_cont_pane

0x2eb1,	// (0x000880d5) aid_size_cell_pinb

0x2ebb,	// (0x000880df) aid_size_list_pinb

0x67bc,	// (0x0008b9e0) mup2_volume_cont_pane_ParamLimits

0x67bc,	// (0x0008b9e0) mup2_volume_cont_pane

0xeceb,	// (0x00093f0f) mup2_volume_cont_pane_g1_ParamLimits

0xeceb,	// (0x00093f0f) mup2_volume_cont_pane_g1

0x2ac2,	// (0x00087ce6) aid_size_cell_touch_ParamLimits

0x2ac2,	// (0x00087ce6) aid_size_cell_touch

0x2ce6,	// (0x00087f0a) touch_pane_ParamLimits

0x2ce6,	// (0x00087f0a) touch_pane

0x07a0,	// (0x000859c4) main_rss2_pane

0x1254,	// (0x00086478) listscroll_rss2_pane

0x125d,	// (0x00086481) rss2_navigation_pane

0x1265,	// (0x00086489) list_rss2_pane

0xb9d6,	// (0x00090bfa) scroll_pane_cp22

0x126d,	// (0x00086491) rss2_navigation_pane_g1

0x1276,	// (0x0008649a) rss2_navigation_pane_g2

0x127e,	// (0x000864a2) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00094917) rss2_navigation_pane_g

0x1286,	// (0x000864aa) rss2_navigation_pane_t1

0x68dc,	// (0x0008bb00) rss2_list_single_pane_ParamLimits

0x68dc,	// (0x0008bb00) rss2_list_single_pane

0x1294,	// (0x000864b8) rss2_list_single_pane_t2

0x12a2,	// (0x000864c6) rss2_list_single_pane_t3_ParamLimits

0x12a2,	// (0x000864c6) rss2_list_single_pane_t3

0x12bf,	// (0x000864e3) rss2_list_single_pane_t4

0x4876,	// (0x00089a9a) smil_status_pane_g1

0x10b1,	// (0x000862d5) main_image2_pane_ParamLimits

0x10b1,	// (0x000862d5) main_image2_pane

0x637e,	// (0x0008b5a2) main_camera2_pane_g9_ParamLimits

0x637e,	// (0x0008b5a2) main_camera2_pane_g9

0x64ac,	// (0x0008b6d0) main_camera2_pane_t5_ParamLimits

0x64ac,	// (0x0008b6d0) main_camera2_pane_t5

0xcce5,	// (0x00091f09) main_camera2_pane_t6_ParamLimits

0xcce5,	// (0x00091f09) main_camera2_pane_t6

0x68f4,	// (0x0008bb18) main_image2_pane_g1_ParamLimits

0x68f4,	// (0x0008bb18) main_image2_pane_g1

0x56ce,	// (0x0008a8f2) smil2_video_pane_ParamLimits

0x56ce,	// (0x0008a8f2) smil2_video_pane

0x2b02,	// (0x00087d26) aid_zoom_text_primary_cp

0x07f6,	// (0x00085a1a) popup_preview_fixed_window

0xb21b,	// (0x0009043f) im_reading_pane_g1

0x61f5,	// (0x0008b419) cams2_bc_adjust_pane_cp_ParamLimits

0x61f5,	// (0x0008b419) cams2_bc_adjust_pane_cp

0x64db,	// (0x0008b6ff) cams2_bc_adjust_pane_ParamLimits

0x64db,	// (0x0008b6ff) cams2_bc_adjust_pane

0x1b8e,	// (0x00086db2) cams2_bc_adjust_pane_g1

0xed24,	// (0x00093f48) cams2_slider_pane

0xed2d,	// (0x00093f51) cams2_slider_pane_g1

0xed36,	// (0x00093f5a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0009491e) cams2_slider_pane_g

0x300b,	// (0x0008822f) calc_display_pane_ParamLimits

0x3031,	// (0x00088255) calc_paper_pane_ParamLimits

0x3054,	// (0x00088278) grid_calc_pane_ParamLimits

0xb889,	// (0x00090aad) popup_clock_digital_window_t1_ParamLimits

0xbe08,	// (0x0009102c) main_image_pane_t1

0x2fed,	// (0x00088211) aid_size_cell_calc_ParamLimits

0x2fed,	// (0x00088211) aid_size_cell_calc

0x5cc2,	// (0x0008aee6) popup_blid_sat_info2_window_ParamLimits

0x5cc2,	// (0x0008aee6) popup_blid_sat_info2_window

0x12d5,	// (0x000864f9) aid_size_cell_blid

0x12dd,	// (0x00086501) bg_popup_window_pane_cp07

0x1300,	// (0x00086524) grid_popup_blid_pane

0x130a,	// (0x0008652e) heading_pane_cp05_ParamLimits

0x130a,	// (0x0008652e) heading_pane_cp05

0x13d4,	// (0x000865f8) cell_popup_blid_pane_ParamLimits

0x13d4,	// (0x000865f8) cell_popup_blid_pane

0x13fa,	// (0x0008661e) cell_popup_blid_pane_g1

0x1402,	// (0x00086626) cell_popup_blid_pane_t1

0x678c,	// (0x0008b9b0) mup2_indicator_pane_ParamLimits

0x678c,	// (0x0008b9b0) mup2_indicator_pane

0xbb23,	// (0x00090d47) mup2_visualizer_osc_pane

0x11b6,	// (0x000863da) mup2_visualizer_spec_pane_ParamLimits

0x11b6,	// (0x000863da) mup2_visualizer_spec_pane

0x690a,	// (0x0008bb2e) mup2_spec_half_pane

0x6913,	// (0x0008bb37) mup2_spec_half_pane_cp

0x691b,	// (0x0008bb3f) mup2_spec_bar_pane_ParamLimits

0x691b,	// (0x0008bb3f) mup2_spec_bar_pane

0x114b,	// (0x0008636f) mup2_spec_bar_pane_g1

0x1155,	// (0x00086379) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00094891) mup2_spec_bar_pane_g

0x693b,	// (0x0008bb5f) mup2_osc_middle_pane

0x1167,	// (0x0008638b) mup2_visualizer_osc_pane_g1

0x0820,	// (0x00085a44) popup_number_entry_window_t1_ParamLimits

0x0833,	// (0x00085a57) popup_number_entry_window_t2_ParamLimits

0x0845,	// (0x00085a69) popup_number_entry_window_t3_ParamLimits

0x2d38,	// (0x00087f5c) popup_number_entry_window_t5_ParamLimits

0x2d38,	// (0x00087f5c) popup_number_entry_window_t5

0xf12f,	// (0x00094353) popup_number_entry_window_t_ParamLimits

0x0857,	// (0x00085a7b) text_title_cp2_ParamLimits

0xbce2,	// (0x00090f06) aid_hotspot_pointer_text2_pane

0xbd08,	// (0x00090f2c) main_viewer_pane_g9_ParamLimits

0xbd08,	// (0x00090f2c) main_viewer_pane_g9

0xb44a,	// (0x0009066e) cale_month_pane_t1_ParamLimits

0xb4df,	// (0x00090703) bg_cale_pane_ParamLimits

0xb4f7,	// (0x0009071b) list_cale_pane_ParamLimits

0x35f4,	// (0x00088818) listscroll_cale_day_pane_t1

0xb508,	// (0x0009072c) scroll_pane_cp09_ParamLimits

0x505f,	// (0x0008a283) main_mup_eq_pane_t1_ParamLimits

0x505f,	// (0x0008a283) main_mup_eq_pane_t1

0x5079,	// (0x0008a29d) main_mup_eq_pane_t2_ParamLimits

0x5079,	// (0x0008a29d) main_mup_eq_pane_t2

0x5093,	// (0x0008a2b7) main_mup_eq_pane_t3_ParamLimits

0x5093,	// (0x0008a2b7) main_mup_eq_pane_t3

0x50af,	// (0x0008a2d3) main_mup_eq_pane_t4_ParamLimits

0x50af,	// (0x0008a2d3) main_mup_eq_pane_t4

0x50cb,	// (0x0008a2ef) main_mup_eq_pane_t5_ParamLimits

0x50cb,	// (0x0008a2ef) main_mup_eq_pane_t5

0x50e7,	// (0x0008a30b) main_mup_eq_pane_t6_ParamLimits

0x50e7,	// (0x0008a30b) main_mup_eq_pane_t6

0x50fb,	// (0x0008a31f) main_mup_eq_pane_t7_ParamLimits

0x50fb,	// (0x0008a31f) main_mup_eq_pane_t7

0x510f,	// (0x0008a333) main_mup_eq_pane_t8_ParamLimits

0x510f,	// (0x0008a333) main_mup_eq_pane_t8

0x5123,	// (0x0008a347) main_mup_eq_pane_t9_ParamLimits

0x5123,	// (0x0008a347) main_mup_eq_pane_t9

0x513d,	// (0x0008a361) main_mup_eq_pane_t10_ParamLimits

0x513d,	// (0x0008a361) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x000946e0) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x000946e0) main_mup_eq_pane_t

0x51ec,	// (0x0008a410) mup_equalizer_pane_cp5_ParamLimits

0x5200,	// (0x0008a424) mup_equalizer_pane_cp6_ParamLimits

0x5214,	// (0x0008a438) mup_equalizer_pane_cp7_ParamLimits

0x07a0,	// (0x000859c4) main_gallery_pane

0x1170,	// (0x00086394) smil2_volume_pane

0x1178,	// (0x0008639c) smil_status_volume_pane_g1_ParamLimits

0x118b,	// (0x000863af) smil_status_volume_pane_g2_ParamLimits

0xccc3,	// (0x00091ee7) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00094896) smil_status_volume_pane_g_ParamLimits

0x12dd,	// (0x00086501) bg_popup_window_pane_cp07_ParamLimits

0x12eb,	// (0x0008650f) blid_firmament_pane

0x6944,	// (0x0008bb68) aid_size_cell_gallery_ParamLimits

0x6944,	// (0x0008bb68) aid_size_cell_gallery

0x695a,	// (0x0008bb7e) grid_gallery_pane_ParamLimits

0x695a,	// (0x0008bb7e) grid_gallery_pane

0x6973,	// (0x0008bb97) cell_gallery_pane_ParamLimits

0x6973,	// (0x0008bb97) cell_gallery_pane

0x1410,	// (0x00086634) bg_cell_gallery_focus_pane_ParamLimits

0x1410,	// (0x00086634) bg_cell_gallery_focus_pane

0x1422,	// (0x00086646) cell_gallery_pane_g1_ParamLimits

0x1422,	// (0x00086646) cell_gallery_pane_g1

0x69bc,	// (0x0008bbe0) cell_gallery_pane_g2_ParamLimits

0x69bc,	// (0x0008bbe0) cell_gallery_pane_g2

0x69c9,	// (0x0008bbed) cell_gallery_pane_g3_ParamLimits

0x69c9,	// (0x0008bbed) cell_gallery_pane_g3

0x142e,	// (0x00086652) cell_gallery_pane_g4_ParamLimits

0x142e,	// (0x00086652) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00094944) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00094944) cell_gallery_pane_g

0x143a,	// (0x0008665e) bg_cell_gallery_focus_pane_g1

0x1442,	// (0x00086666) bg_cell_gallery_focus_pane_g2

0x144a,	// (0x0008666e) bg_cell_gallery_focus_pane_g3

0x1452,	// (0x00086676) bg_cell_gallery_focus_pane_g4

0x145a,	// (0x0008667e) bg_cell_gallery_focus_pane_g5

0x1462,	// (0x00086686) bg_cell_gallery_focus_pane_g6

0x146a,	// (0x0008668e) bg_cell_gallery_focus_pane_g7

0x1472,	// (0x00086696) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0009494d) bg_cell_gallery_focus_pane_g

0x147a,	// (0x0008669e) aid_firma_cardinal

0x148e,	// (0x000866b2) blid_firmament_pane_t1

0x14a5,	// (0x000866c9) blid_firmament_pane_t2

0x14bc,	// (0x000866e0) blid_firmament_pane_t3

0x14d3,	// (0x000866f7) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0009495e) blid_firmament_pane_t

0x14ea,	// (0x0008670e) blid_sat_info_pane

0x14fa,	// (0x0008671e) blid_sat_info_pane_g1

0x14fa,	// (0x0008671e) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00094967) blid_sat_info_pane_g

0x1504,	// (0x00086728) blid_sat_info_pane_t1

0x1512,	// (0x00086736) smil2_volume_content_pane

0x151b,	// (0x0008673f) smil2_volume_pane_g1

0x1523,	// (0x00086747) smil2_volume_content_pane_g1

0x152c,	// (0x00086750) smil2_volume_content_pane_g2

0x1535,	// (0x00086759) smil2_volume_content_pane_g3

0x153e,	// (0x00086762) smil2_volume_content_pane_g4

0x1547,	// (0x0008676b) smil2_volume_content_pane_g5

0x1550,	// (0x00086774) smil2_volume_content_pane_g6

0x1559,	// (0x0008677d) smil2_volume_content_pane_g7

0x1562,	// (0x00086786) smil2_volume_content_pane_g8

0x156b,	// (0x0008678f) smil2_volume_content_pane_g9

0x1574,	// (0x00086798) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0009496c) smil2_volume_content_pane_g

0x365c,	// (0x00088880) cale_week_day_heading_pane_t1_ParamLimits

0x3670,	// (0x00088894) cale_week_day_heading_pane_t2_ParamLimits

0x3684,	// (0x000888a8) cale_week_day_heading_pane_t3_ParamLimits

0x3698,	// (0x000888bc) cale_week_day_heading_pane_t4_ParamLimits

0x36ac,	// (0x000888d0) cale_week_day_heading_pane_t5_ParamLimits

0x36c0,	// (0x000888e4) cale_week_day_heading_pane_t6_ParamLimits

0x36d4,	// (0x000888f8) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00094458) cale_week_day_heading_pane_t_ParamLimits

0x36e8,	// (0x0008890c) bg_cale_side_pane_ParamLimits

0x36f6,	// (0x0008891a) cale_week_time_pane_t1_ParamLimits

0x370e,	// (0x00088932) cale_week_time_pane_t2_ParamLimits

0x3726,	// (0x0008894a) cale_week_time_pane_t3_ParamLimits

0x373e,	// (0x00088962) cale_week_time_pane_t4_ParamLimits

0x3756,	// (0x0008897a) cale_week_time_pane_t5_ParamLimits

0x376e,	// (0x00088992) cale_week_time_pane_t6_ParamLimits

0x3786,	// (0x000889aa) cale_week_time_pane_t7_ParamLimits

0x379e,	// (0x000889c2) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00094467) cale_week_time_pane_t_ParamLimits

0x37b6,	// (0x000889da) cell_cale_week_pane_g2_ParamLimits

0x36e8,	// (0x0008890c) bg_cale_side_pane_cp01_ParamLimits

0x471f,	// (0x00089943) cale_month_week_pane_t1_ParamLimits

0x4736,	// (0x0008995a) cale_month_week_pane_t2_ParamLimits

0x474d,	// (0x00089971) cale_month_week_pane_t3_ParamLimits

0x4764,	// (0x00089988) cale_month_week_pane_t4_ParamLimits

0x477b,	// (0x0008999f) cale_month_week_pane_t5_ParamLimits

0x4792,	// (0x000899b6) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00094540) cale_month_week_pane_t_ParamLimits

0xb486,	// (0x000906aa) cell_cale_month_pane_g1_ParamLimits

0x07a0,	// (0x000859c4) main_cale_event_viewer_pane

0x07a0,	// (0x000859c4) listscroll_cale_event_viewer_pane

0x157d,	// (0x000867a1) list_cale_ev_pane

0x1585,	// (0x000867a9) scroll_pane_cp023

0x1591,	// (0x000867b5) field_cale_ev_pane_ParamLimits

0x1591,	// (0x000867b5) field_cale_ev_pane

0x15ab,	// (0x000867cf) field_cale_ev_content_pane_ParamLimits

0x15ab,	// (0x000867cf) field_cale_ev_content_pane

0x15b7,	// (0x000867db) field_cale_ev_pane_g1_ParamLimits

0x15b7,	// (0x000867db) field_cale_ev_pane_g1

0x15c3,	// (0x000867e7) field_cale_ev_pane_g2_ParamLimits

0x15c3,	// (0x000867e7) field_cale_ev_pane_g2

0x15db,	// (0x000867ff) field_cale_ev_pane_g3_ParamLimits

0x15db,	// (0x000867ff) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00094981) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00094981) field_cale_ev_pane_g

0x15f3,	// (0x00086817) field_cale_ev_pane_t1_ParamLimits

0x15f3,	// (0x00086817) field_cale_ev_pane_t1

0x160a,	// (0x0008682e) field_cale_ev_content_pane_t1_ParamLimits

0x160a,	// (0x0008682e) field_cale_ev_content_pane_t1

0xbcac,	// (0x00090ed0) bg_button_pane_cp01

0x318b,	// (0x000883af) listscroll_cale_week_pane_ParamLimits

0x3456,	// (0x0008867a) popup_toolbar_window_cp01

0x35f4,	// (0x00088818) listscroll_cale_week_pane_t1_ParamLimits

0x318b,	// (0x000883af) listscroll_cale_day_pane_ParamLimits

0x48d5,	// (0x00089af9) popup_toolbar_window_cp02

0x35f4,	// (0x00088818) listscroll_cale_day_pane_t1_ParamLimits

0x318b,	// (0x000883af) main_cale_month_pane_ParamLimits

0x5ee8,	// (0x0008b10c) popup_toolbar_window_cp03_ParamLimits

0x5ee8,	// (0x0008b10c) popup_toolbar_window_cp03

0x5592,	// (0x0008a7b6) main_image_pane_g2_ParamLimits

0x5592,	// (0x0008a7b6) main_image_pane_g2

0x55a3,	// (0x0008a7c7) main_image_pane_g3_ParamLimits

0x55a3,	// (0x0008a7c7) main_image_pane_g3

0x0002,

0xf54e,	// (0x00094772) main_image_pane_g_ParamLimits

0xf54e,	// (0x00094772) main_image_pane_g

0xbe08,	// (0x0009102c) main_image_pane_t1_ParamLimits

0x55b4,	// (0x0008a7d8) main_image_pane_t2_ParamLimits

0x55b4,	// (0x0008a7d8) main_image_pane_t2

0x55c6,	// (0x0008a7ea) main_image_pane_t3_ParamLimits

0x55c6,	// (0x0008a7ea) main_image_pane_t3

0x55ee,	// (0x0008a812) main_image_pane_t4_ParamLimits

0x55ee,	// (0x0008a812) main_image_pane_t4

0x0003,

0xf555,	// (0x00094779) main_image_pane_t_ParamLimits

0xf555,	// (0x00094779) main_image_pane_t

0x560e,	// (0x0008a832) popup_image_details_window_cp01

0x5618,	// (0x0008a83c) popup_toobar_trans_pane_cp01_ParamLimits

0x5618,	// (0x0008a83c) popup_toobar_trans_pane_cp01

0x5d99,	// (0x0008afbd) popup_image_details_window_ParamLimits

0x5d99,	// (0x0008afbd) popup_image_details_window

0x10d1,	// (0x000862f5) popup_image_focus_window

0x61af,	// (0x0008b3d3) camera2_autofocus_pane_ParamLimits

0x61af,	// (0x0008b3d3) camera2_autofocus_pane

0x07a0,	// (0x000859c4) bg_popup_sub_pane_cp06

0x1627,	// (0x0008684b) popup_image_focus_window_g1

0x162f,	// (0x00086853) popup_image_focus_window_g2

0x1637,	// (0x0008685b) popup_image_focus_window_g3

0x163f,	// (0x00086863) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00094988) popup_image_focus_window_g

0x1647,	// (0x0008686b) popup_image_focus_window_t1

0x1655,	// (0x00086879) popup_image_focus_window_t2

0x1665,	// (0x00086889) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00094991) popup_image_focus_window_t

0x1673,	// (0x00086897) camera2_autofocus_pane_g1

0x10b1,	// (0x000862d5) bg_tb_trans_pane_cp01

0x1681,	// (0x000868a5) popup_image_details_window_g1

0x1694,	// (0x000868b8) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x000949a3) popup_image_details_window_g

0x16bd,	// (0x000868e1) popup_image_details_window_t1

0x16cf,	// (0x000868f3) popup_image_details_window_t2

0x16e8,	// (0x0008690c) popup_image_details_window_t3

0x16fc,	// (0x00086920) popup_image_details_window_t4

0x1717,	// (0x0008693b) popup_image_details_window_t5

0x0004,

0xf786,	// (0x000949aa) popup_image_details_window_t

0x3177,	// (0x0008839b) bg_calc_paper_pane_ParamLimits

0xb097,	// (0x000902bb) grid_highlight_pane_cp013

0xb0a1,	// (0x000902c5) list_calc_pane_ParamLimits

0xb0b3,	// (0x000902d7) scroll_pane_cp024

0x318b,	// (0x000883af) bg_calc_display_pane_ParamLimits

0x3197,	// (0x000883bb) calc_display_pane_t1_ParamLimits

0x31a9,	// (0x000883cd) calc_display_pane_t2_ParamLimits

0xb0bb,	// (0x000902df) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000943da) calc_display_pane_t_ParamLimits

0x32b9,	// (0x000884dd) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000943f7) cell_calc_pane_g

0x32c2,	// (0x000884e6) cell_calc_pane_t1

0x32d1,	// (0x000884f5) grid_highlight_pane_cp02_ParamLimits

0x32e7,	// (0x0008850b) toolbar_button_pane_cp01_ParamLimits

0x32e7,	// (0x0008850b) toolbar_button_pane_cp01

0xbe4d,	// (0x00091071) temp_image_control_pane_ParamLimits

0xbe4d,	// (0x00091071) temp_image_control_pane

0x10b1,	// (0x000862d5) main_mp3_pane

0x1731,	// (0x00086955) temp_image_control_pane_g1_ParamLimits

0x1731,	// (0x00086955) temp_image_control_pane_g1

0x173f,	// (0x00086963) temp_image_control_pane_g2_ParamLimits

0x173f,	// (0x00086963) temp_image_control_pane_g2

0x1751,	// (0x00086975) temp_image_control_pane_g3_ParamLimits

0x1751,	// (0x00086975) temp_image_control_pane_g3

0x6a06,	// (0x0008bc2a) temp_image_control_pane_g4_ParamLimits

0x6a06,	// (0x0008bc2a) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x000949b5) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x000949b5) temp_image_control_pane_g

0x1731,	// (0x00086955) main_mp3_pane_g1

0x6a19,	// (0x0008bc3d) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x000949be) main_mp3_pane_g

0x1794,	// (0x000869b8) main_mp3_pane_t1

0x3930,	// (0x00088b54) main_camera_pane_g8_ParamLimits

0x3930,	// (0x00088b54) main_camera_pane_g8

0x3ae7,	// (0x00088d0b) main_video_pane_g7_ParamLimits

0x3ae7,	// (0x00088d0b) main_video_pane_g7

0xcd03,	// (0x00091f27) main_camera2_pane_t7_ParamLimits

0xcd03,	// (0x00091f27) main_camera2_pane_t7

0xb272,	// (0x00090496) scroll_pane_cp025_ParamLimits

0xb272,	// (0x00090496) scroll_pane_cp025

0xb286,	// (0x000904aa) scroll_pane_cp026_ParamLimits

0xb286,	// (0x000904aa) scroll_pane_cp026

0xb295,	// (0x000904b9) wml_content_pane_ParamLimits

0x07a0,	// (0x000859c4) main_touch_calib_pane

0x6ae4,	// (0x0008bd08) main_touch_calib_pane_g1

0x6af0,	// (0x0008bd14) main_touch_calib_pane_g2

0x6afc,	// (0x0008bd20) main_touch_calib_pane_g3

0x6b08,	// (0x0008bd2c) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x000949dc) main_touch_calib_pane_g

0x6b14,	// (0x0008bd38) main_touch_calib_pane_t1

0x6b2e,	// (0x0008bd52) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x000949e5) main_touch_calib_pane_t

0xba64,	// (0x00090c88) mup_progress_pane_cp02

0xba83,	// (0x00090ca7) navi_pane_g1

0xbae5,	// (0x00090d09) navi_pane_mp_t3

0x10b1,	// (0x000862d5) main_mp3_pane_ParamLimits

0x5f26,	// (0x0008b14a) navi_pane_ParamLimits

0x1731,	// (0x00086955) main_mp3_pane_g1_ParamLimits

0x6a19,	// (0x0008bc3d) main_mp3_pane_g2_ParamLimits

0x6a27,	// (0x0008bc4b) main_mp3_pane_g3_ParamLimits

0x6a27,	// (0x0008bc4b) main_mp3_pane_g3

0x6a35,	// (0x0008bc59) main_mp3_pane_g4_ParamLimits

0x6a35,	// (0x0008bc59) main_mp3_pane_g4

0x1761,	// (0x00086985) main_mp3_pane_g5_ParamLimits

0x1761,	// (0x00086985) main_mp3_pane_g5

0x176f,	// (0x00086993) main_mp3_pane_g6_ParamLimits

0x176f,	// (0x00086993) main_mp3_pane_g6

0x177c,	// (0x000869a0) main_mp3_pane_g7_ParamLimits

0x177c,	// (0x000869a0) main_mp3_pane_g7

0x1788,	// (0x000869ac) main_mp3_pane_g8_ParamLimits

0x1788,	// (0x000869ac) main_mp3_pane_g8

0xf79a,	// (0x000949be) main_mp3_pane_g_ParamLimits

0x6a43,	// (0x0008bc67) main_mp3_pane_t2

0x6a51,	// (0x0008bc75) main_mp3_pane_t3

0x17a2,	// (0x000869c6) main_mp3_pane_t4

0x17b0,	// (0x000869d4) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x000949cf) main_mp3_pane_t

0x17be,	// (0x000869e2) mup_progress_pane_cp01

0x2b02,	// (0x00087d26) aid_zoom_text_secondary2

0x157d,	// (0x000867a1) list_cale_ev2_pane

0x1585,	// (0x000867a9) scroll_pane_cp023_ParamLimits

0x6b84,	// (0x0008bda8) field_cale_ev2_pane_ParamLimits

0x6b84,	// (0x0008bda8) field_cale_ev2_pane

0x6baa,	// (0x0008bdce) field_cale_ev2_pane_g1_ParamLimits

0x6baa,	// (0x0008bdce) field_cale_ev2_pane_g1

0x6bb6,	// (0x0008bdda) field_cale_ev2_pane_g2_ParamLimits

0x6bb6,	// (0x0008bdda) field_cale_ev2_pane_g2

0x6bce,	// (0x0008bdf2) field_cale_ev2_pane_g3_ParamLimits

0x6bce,	// (0x0008bdf2) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x000949f0) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x000949f0) field_cale_ev2_pane_g

0xcd21,	// (0x00091f45) field_cale_ev2_pane_t1_ParamLimits

0xcd21,	// (0x00091f45) field_cale_ev2_pane_t1

0xcd38,	// (0x00091f5c) field_cale_ev2_pane_t2_ParamLimits

0xcd38,	// (0x00091f5c) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x000949f9) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x000949f9) field_cale_ev2_pane_t

0x5442,	// (0x0008a666) main_postcard_pane_g5_ParamLimits

0x5442,	// (0x0008a666) main_postcard_pane_g5

0x5458,	// (0x0008a67c) main_postcard_pane_g6_ParamLimits

0x5458,	// (0x0008a67c) main_postcard_pane_g6

0x3871,	// (0x00088a95) camera2_autofocus_pane_cp_ParamLimits

0x3871,	// (0x00088a95) camera2_autofocus_pane_cp

0x10b1,	// (0x000862d5) main_mup3_pane

0x6c06,	// (0x0008be2a) main_mup3_pane_g1_ParamLimits

0x6c06,	// (0x0008be2a) main_mup3_pane_g1

0x6c28,	// (0x0008be4c) main_mup3_pane_g2_ParamLimits

0x6c28,	// (0x0008be4c) main_mup3_pane_g2

0x6ca9,	// (0x0008becd) main_mup3_pane_g3_ParamLimits

0x6ca9,	// (0x0008becd) main_mup3_pane_g3

0x6ceb,	// (0x0008bf0f) main_mup3_pane_g4_ParamLimits

0x6ceb,	// (0x0008bf0f) main_mup3_pane_g4

0x6d2d,	// (0x0008bf51) main_mup3_pane_g5_ParamLimits

0x6d2d,	// (0x0008bf51) main_mup3_pane_g5

0x6d71,	// (0x0008bf95) main_mup3_pane_g6_ParamLimits

0x6d71,	// (0x0008bf95) main_mup3_pane_g6

0x17c6,	// (0x000869ea) main_mup3_pane_g7_ParamLimits

0x17c6,	// (0x000869ea) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00094a09) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00094a09) main_mup3_pane_g

0x6ded,	// (0x0008c011) main_mup3_pane_t1_ParamLimits

0x6ded,	// (0x0008c011) main_mup3_pane_t1

0x6e61,	// (0x0008c085) main_mup3_pane_t2_ParamLimits

0x6e61,	// (0x0008c085) main_mup3_pane_t2

0x6f35,	// (0x0008c159) main_mup3_pane_t4_ParamLimits

0x6f35,	// (0x0008c159) main_mup3_pane_t4

0x6f8f,	// (0x0008c1b3) main_mup3_pane_t5_ParamLimits

0x6f8f,	// (0x0008c1b3) main_mup3_pane_t5

0x7043,	// (0x0008c267) main_mup3_pane_t6_ParamLimits

0x7043,	// (0x0008c267) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00094a1a) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00094a1a) main_mup3_pane_t

0x70f7,	// (0x0008c31b) mup3_progress_pane_ParamLimits

0x70f7,	// (0x0008c31b) mup3_progress_pane

0x7173,	// (0x0008c397) popup_mup3_control_window_ParamLimits

0x7173,	// (0x0008c397) popup_mup3_control_window

0x17d4,	// (0x000869f8) popup_mup3_text_window

0x71a5,	// (0x0008c3c9) mup3_progress_pane_t1

0x71bc,	// (0x0008c3e0) mup3_progress_pane_t2

0x17dc,	// (0x00086a00) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00094a27) mup3_progress_pane_t

0x17f3,	// (0x00086a17) mup_progress_pane_cp03

0x07a0,	// (0x000859c4) bg_tb_trans_pane_cp04

0x71d3,	// (0x0008c3f7) mup3_volume_pane

0x71db,	// (0x0008c3ff) popup_mup3_control_window_g1

0x71e4,	// (0x0008c408) mup3_volume_pane_g1

0x71ed,	// (0x0008c411) mup3_volume_pane_g2

0x71f6,	// (0x0008c41a) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00094a2e) mup3_volume_pane_g

0x07a0,	// (0x000859c4) bg_tb_trans_pane_cp03

0x1803,	// (0x00086a27) popup_mup3_text_window_g1

0x180b,	// (0x00086a2f) popup_mup3_text_window_t1

0x3286,	// (0x000884aa) list_calc_item_pane_g1_ParamLimits

0x124b,	// (0x0008646f) mup_volume_pane_cp_g1

0x6b48,	// (0x0008bd6c) main_touch_calib_pane_t3

0x6b5c,	// (0x0008bd80) main_touch_calib_pane_t4

0x6b70,	// (0x0008bd94) main_touch_calib_pane_t5

0x07aa,	// (0x000859ce) aid_cell_size_toolbar2

0x07b2,	// (0x000859d6) aid_popup3_width_pane

0x2af2,	// (0x00087d16) aid_zoom_text_msg_primary

0xb195,	// (0x000903b9) vorec_t7

0x31f0,	// (0x00088414) bg_calc_paper_pane_g1_ParamLimits

0x31fc,	// (0x00088420) bg_calc_paper_pane_g2_ParamLimits

0x3208,	// (0x0008842c) bg_calc_paper_pane_g3_ParamLimits

0x3214,	// (0x00088438) bg_calc_paper_pane_g4_ParamLimits

0x3220,	// (0x00088444) bg_calc_paper_pane_g5_ParamLimits

0x322c,	// (0x00088450) bg_calc_paper_pane_g6_ParamLimits

0x323b,	// (0x0008845f) bg_calc_paper_pane_g7_ParamLimits

0x324a,	// (0x0008846e) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x000943e1) bg_calc_paper_pane_g_ParamLimits

0x325d,	// (0x00088481) calc_bg_paper_pane_g9_ParamLimits

0x39d7,	// (0x00088bfb) image_qvga_pane_ParamLimits

0x39d7,	// (0x00088bfb) image_qvga_pane

0x2e1b,	// (0x0008803f) bg_popup_sub_pane_cp04_ParamLimits

0xbd84,	// (0x00090fa8) popup_mup_playback_window_g1_ParamLimits

0xbd90,	// (0x00090fb4) popup_mup_playback_window_t1_ParamLimits

0xbda5,	// (0x00090fc9) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0009476d) popup_mup_playback_window_t_ParamLimits

0x66a6,	// (0x0008b8ca) main_mup2_pane_g3_ParamLimits

0x66a6,	// (0x0008b8ca) main_mup2_pane_g3

0x3e1b,	// (0x0008903f) popup_toolbar_window_cp04

0xc19a,	// (0x000913be) popup_call2_audio_second_window_g3_ParamLimits

0xc19a,	// (0x000913be) popup_call2_audio_second_window_g3

0xc5a4,	// (0x000917c8) popup_call2_audio_first_window_g4_ParamLimits

0xc5a4,	// (0x000917c8) popup_call2_audio_first_window_g4

0xcc23,	// (0x00091e47) popup_call2_audio_in_window_g4_ParamLimits

0xcc23,	// (0x00091e47) popup_call2_audio_in_window_g4

0x5574,	// (0x0008a798) aid_area_sk_bg_cut_ParamLimits

0x5574,	// (0x0008a798) aid_area_sk_bg_cut

0xbdba,	// (0x00090fde) aid_area_sk_bg_cut_2_ParamLimits

0xbdba,	// (0x00090fde) aid_area_sk_bg_cut_2

0x69ac,	// (0x0008bbd0) aid_placing_details_win

0x69b4,	// (0x0008bbd8) aid_placing_details_win_2

0x1673,	// (0x00086897) camera2_autofocus_pane_g1_ParamLimits

0x2c91,	// (0x00087eb5) popup_fixed_preview_cale_window_ParamLimits

0x2c91,	// (0x00087eb5) popup_fixed_preview_cale_window

0xbb3d,	// (0x00090d61) navi_slider_pane_g3

0xbb46,	// (0x00090d6a) navi_slider_pane_g4

0xbb4f,	// (0x00090d73) navi_slider_pane_g5

0xbb3d,	// (0x00090d61) navi_slider_pane_g6

0xbb58,	// (0x00090d7c) navi_slider_pane_g7

0xbc79,	// (0x00090e9d) mup_scale_pane_g3

0xbc82,	// (0x00090ea6) mup_scale_pane_g4

0xbc8b,	// (0x00090eaf) mup_scale_pane_g5

0x5228,	// (0x0008a44c) mup_scale_pane_g6

0x5231,	// (0x0008a455) mup_scale_pane_g7

0xbb3d,	// (0x00090d61) cams2_slider_pane_g3

0x12cd,	// (0x000864f1) cams2_slider_pane_g4

0xed3f,	// (0x00093f63) cams2_slider_pane_g5

0xbb3d,	// (0x00090d61) cams2_slider_pane_g6

0xed47,	// (0x00093f6b) cams2_slider_pane_g7

0x14fa,	// (0x0008671e) camera2_autofocus_pane_cp_g1

0x1819,	// (0x00086a3d) bg_popup_preview_window_pane_cp02_ParamLimits

0x1819,	// (0x00086a3d) bg_popup_preview_window_pane_cp02

0x1825,	// (0x00086a49) list_fp_cale_pane_ParamLimits

0x1825,	// (0x00086a49) list_fp_cale_pane

0x1831,	// (0x00086a55) popup_fixed_preview_cale_window_t1_ParamLimits

0x1831,	// (0x00086a55) popup_fixed_preview_cale_window_t1

0x71ff,	// (0x0008c423) popup_fixed_preview_cale_window_t2_ParamLimits

0x71ff,	// (0x0008c423) popup_fixed_preview_cale_window_t2

0x7214,	// (0x0008c438) popup_fixed_preview_cale_window_t3_ParamLimits

0x7214,	// (0x0008c438) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00094a35) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00094a35) popup_fixed_preview_cale_window_t

0x7229,	// (0x0008c44d) list_single_fp_cale_pane_ParamLimits

0x7229,	// (0x0008c44d) list_single_fp_cale_pane

0x184f,	// (0x00086a73) list_single_fp_cale_pane_g1_ParamLimits

0x184f,	// (0x00086a73) list_single_fp_cale_pane_g1

0x185b,	// (0x00086a7f) list_single_fp_cale_pane_g2_ParamLimits

0x185b,	// (0x00086a7f) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00094a3c) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00094a3c) list_single_fp_cale_pane_g

0x1874,	// (0x00086a98) list_single_fp_cale_pane_t1_ParamLimits

0x1874,	// (0x00086a98) list_single_fp_cale_pane_t1

0x1886,	// (0x00086aaa) list_single_fp_cale_pane_t2_ParamLimits

0x1886,	// (0x00086aaa) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00094a43) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00094a43) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x07a0,	// (0x000859c4) main_dialer_pane

0x7241,	// (0x0008c465) aid_cell_size_keypad

0x724b,	// (0x0008c46f) dialer_ne_pane

0x7253,	// (0x0008c477) grid_dialer_command_1_pane

0x725b,	// (0x0008c47f) grid_dialer_command_2_pane

0x7263,	// (0x0008c487) grid_dialer_keypad_pane

0x7275,	// (0x0008c499) bg_popup_call_pane_cp06_ParamLimits

0x7275,	// (0x0008c499) bg_popup_call_pane_cp06

0x7281,	// (0x0008c4a5) dialer_ne_clear_pane_ParamLimits

0x7281,	// (0x0008c4a5) dialer_ne_clear_pane

0x18b9,	// (0x00086add) dialer_ne_pane_g1

0x18c1,	// (0x00086ae5) dialer_ne_pane_t1_ParamLimits

0x18c1,	// (0x00086ae5) dialer_ne_pane_t1

0x728d,	// (0x0008c4b1) dialer_ne_pane_t2_ParamLimits

0x728d,	// (0x0008c4b1) dialer_ne_pane_t2

0x72b7,	// (0x0008c4db) dialer_ne_pane_t3_ParamLimits

0x72b7,	// (0x0008c4db) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00094a48) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00094a48) dialer_ne_pane_t

0x72e7,	// (0x0008c50b) dialer_ne_pane_t3_copy1_ParamLimits

0x72e7,	// (0x0008c50b) dialer_ne_pane_t3_copy1

0x7316,	// (0x0008c53a) cell_dialer_keypad_pane_ParamLimits

0x7316,	// (0x0008c53a) cell_dialer_keypad_pane

0x732d,	// (0x0008c551) cell_dialer_command_1_pane_ParamLimits

0x732d,	// (0x0008c551) cell_dialer_command_1_pane

0x7343,	// (0x0008c567) cell_dialer_command_2_pane_ParamLimits

0x7343,	// (0x0008c567) cell_dialer_command_2_pane

0x18d3,	// (0x00086af7) bg_button_pane_cp02_ParamLimits

0x18d3,	// (0x00086af7) bg_button_pane_cp02

0x7352,	// (0x0008c576) cell_dialer_keypad_pane_g1_ParamLimits

0x7352,	// (0x0008c576) cell_dialer_keypad_pane_g1

0x18d3,	// (0x00086af7) bg_button_pane_cp03_ParamLimits

0x18d3,	// (0x00086af7) bg_button_pane_cp03

0x7367,	// (0x0008c58b) cell_dialer_command_1_pane_g1_ParamLimits

0x7367,	// (0x0008c58b) cell_dialer_command_1_pane_g1

0x18df,	// (0x00086b03) bg_button_pane_cp04

0x737b,	// (0x0008c59f) cell_dialer_command_2_pane_g1

0xbb23,	// (0x00090d47) bg_button_pane_cp06

0x18e7,	// (0x00086b0b) dialer_ne_clear_pane_g1

0x4d66,	// (0x00089f8a) navi_pane_g2

0x4d94,	// (0x00089fb8) navi_pane_g3

0x0002,

0xf44c,	// (0x00094670) navi_pane_g

0x4dbd,	// (0x00089fe1) navi_pane_mv_g2

0x4de4,	// (0x0008a008) navi_pane_mv_g5

0x4dec,	// (0x0008a010) navi_pane_mv_t1

0x318b,	// (0x000883af) main_clock2_pane

0x73ae,	// (0x0008c5d2) main_clock2_list_pane_ParamLimits

0x73ae,	// (0x0008c5d2) main_clock2_list_pane

0x73e4,	// (0x0008c608) main_clock2_pane_t1_ParamLimits

0x73e4,	// (0x0008c608) main_clock2_pane_t1

0x7422,	// (0x0008c646) main_clock2_pane_t2_ParamLimits

0x7422,	// (0x0008c646) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00094a4f) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00094a4f) main_clock2_pane_t

0x74ac,	// (0x0008c6d0) popup_clock_analogue_window_cp03_ParamLimits

0x74ac,	// (0x0008c6d0) popup_clock_analogue_window_cp03

0x74d3,	// (0x0008c6f7) popup_clock_digital_window_cp02_ParamLimits

0x74d3,	// (0x0008c6f7) popup_clock_digital_window_cp02

0x7548,	// (0x0008c76c) main_clock2_list_single_pane_ParamLimits

0x7548,	// (0x0008c76c) main_clock2_list_single_pane

0xbb23,	// (0x00090d47) list_highlight_pane_cp05

0x18ef,	// (0x00086b13) main_clock2_list_single_pane_t1

0x3e1b,	// (0x0008903f) popup_toolbar_window_cp04_ParamLimits

0x69d6,	// (0x0008bbfa) camera2_autofocus_pane_g2_ParamLimits

0x69d6,	// (0x0008bbfa) camera2_autofocus_pane_g2

0x69e2,	// (0x0008bc06) camera2_autofocus_pane_g3_ParamLimits

0x69e2,	// (0x0008bc06) camera2_autofocus_pane_g3

0x69ee,	// (0x0008bc12) camera2_autofocus_pane_g4_ParamLimits

0x69ee,	// (0x0008bc12) camera2_autofocus_pane_g4

0x69fa,	// (0x0008bc1e) camera2_autofocus_pane_g5_ParamLimits

0x69fa,	// (0x0008bc1e) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00094998) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00094998) camera2_autofocus_pane_g

0x6be6,	// (0x0008be0a) camera2_autofocus_pane_cp_g2

0x6bee,	// (0x0008be12) camera2_autofocus_pane_cp_g3

0x6bf6,	// (0x0008be1a) camera2_autofocus_pane_cp_g4

0x6bfe,	// (0x0008be22) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x000949fe) camera2_autofocus_pane_cp_g

0x726d,	// (0x0008c491) popup_dialer_spcha_window

0x07a0,	// (0x000859c4) bg_popup_sub_pane_cp07

0x18fd,	// (0x00086b21) list_spcha_pane

0x1905,	// (0x00086b29) list_single_spcha_pane_ParamLimits

0x1905,	// (0x00086b29) list_single_spcha_pane

0x07a0,	// (0x000859c4) list_highlight_pane_cp06

0x1916,	// (0x00086b3a) list_single_spcha_pane_t1

0xc9cd,	// (0x00091bf1) popup_call2_audio_out_window_g4_ParamLimits

0xc9cd,	// (0x00091bf1) popup_call2_audio_out_window_g4

0x07a0,	// (0x000859c4) main_imed2_pane

0x10d9,	// (0x000862fd) popup_imed_adjust2_window

0x5db1,	// (0x0008afd5) popup_imed_trans_window_ParamLimits

0x5db1,	// (0x0008afd5) popup_imed_trans_window

0x1336,	// (0x0008655a) popup_blid_sat_info2_window_t1

0x1344,	// (0x00086568) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0009492d) popup_blid_sat_info2_window_t

0x75f2,	// (0x0008c816) aid_size_cell_colour_35

0x7612,	// (0x0008c836) aid_size_cell_colour_112

0x7632,	// (0x0008c856) aid_size_cell_effect

0x10a3,	// (0x000862c7) bg_tb_trans_pane_cp02

0xb57b,	// (0x0009079f) heading_imed_pane

0x7652,	// (0x0008c876) listscroll_imed_pane

0x1930,	// (0x00086b54) heading_imed_pane_g1

0x1938,	// (0x00086b5c) heading_imed_pane_t1

0x1946,	// (0x00086b6a) grid_imed_colour_35_pane_ParamLimits

0x1946,	// (0x00086b6a) grid_imed_colour_35_pane

0x765e,	// (0x0008c882) grid_imed_effect_pane

0x1961,	// (0x00086b85) list_imed_aspect_pane

0x7673,	// (0x0008c897) scroll_pane_cp027_ParamLimits

0x7673,	// (0x0008c897) scroll_pane_cp027

0x7684,	// (0x0008c8a8) cell_imed_effect_pane_ParamLimits

0x7684,	// (0x0008c8a8) cell_imed_effect_pane

0x1969,	// (0x00086b8d) cell_imed_colour_pane_ParamLimits

0x1969,	// (0x00086b8d) cell_imed_colour_pane

0x19ab,	// (0x00086bcf) cell_imed_colour_pane_g1_ParamLimits

0x19ab,	// (0x00086bcf) cell_imed_colour_pane_g1

0x19bc,	// (0x00086be0) hgihlgiht_grid_pane_cp016_ParamLimits

0x19bc,	// (0x00086be0) hgihlgiht_grid_pane_cp016

0x76ab,	// (0x0008c8cf) cell_imed_effect_pane_g1

0x76b3,	// (0x0008c8d7) grid_highlight_pane_cp017

0x19cd,	// (0x00086bf1) list_imed_single_pane_ParamLimits

0x19cd,	// (0x00086bf1) list_imed_single_pane

0x07a0,	// (0x000859c4) list_highlight_pane_cp07

0x19e4,	// (0x00086c08) list_imed_aspect_pane_comp1_t1

0x10a3,	// (0x000862c7) bg_tb_trans_pane_cp05

0x1a06,	// (0x00086c2a) popup_imed_adjust2_window_g1

0x1a2d,	// (0x00086c51) popup_imed_adjust2_window_t1

0x1a45,	// (0x00086c69) slider_imed_adjust_pane

0x1a59,	// (0x00086c7d) slider_imed_adjust_pane_g1

0x1a69,	// (0x00086c8d) slider_imed_adjust_pane_g2

0x1a79,	// (0x00086c9d) slider_imed_adjust_pane_g3

0x1a8a,	// (0x00086cae) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00094a6c) slider_imed_adjust_pane_g

0x76bc,	// (0x0008c8e0) aid_size_cell_clipart2

0x76c8,	// (0x0008c8ec) grid_imed_clipart_pane

0x1a9b,	// (0x00086cbf) scroll_pane_cp031

0x76d2,	// (0x0008c8f6) cell_imed_clipart_pane_ParamLimits

0x76d2,	// (0x0008c8f6) cell_imed_clipart_pane

0x76f9,	// (0x0008c91d) cell_imed_clipart_pane_g1

0x07a0,	// (0x000859c4) grid_highlight_pane_cp014

0x73c3,	// (0x0008c5e7) main_clock2_pane_g1_ParamLimits

0x73c3,	// (0x0008c5e7) main_clock2_pane_g1

0x74f3,	// (0x0008c717) aid_call2_pane_cp10

0x7505,	// (0x0008c729) aid_call_pane_cp10

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g1

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g2

0x7517,	// (0x0008c73b) popup_clock_analogue_window_cp10_g3

0x7517,	// (0x0008c73b) popup_clock_analogue_window_cp10_g4

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00094a5a) popup_clock_analogue_window_cp10_g

0x7529,	// (0x0008c74d) popup_clock_analogue_window_cp10_t1

0x755a,	// (0x0008c77e) clock_digital_number_pane_cp10_ParamLimits

0x755a,	// (0x0008c77e) clock_digital_number_pane_cp10

0x7572,	// (0x0008c796) clock_digital_number_pane_cp11_ParamLimits

0x7572,	// (0x0008c796) clock_digital_number_pane_cp11

0x758a,	// (0x0008c7ae) clock_digital_number_pane_cp12_ParamLimits

0x758a,	// (0x0008c7ae) clock_digital_number_pane_cp12

0x75a2,	// (0x0008c7c6) clock_digital_number_pane_cp13_ParamLimits

0x75a2,	// (0x0008c7c6) clock_digital_number_pane_cp13

0x75ba,	// (0x0008c7de) clock_digital_separator_pane_cp10_ParamLimits

0x75ba,	// (0x0008c7de) clock_digital_separator_pane_cp10

0x75d2,	// (0x0008c7f6) popup_clock_digital_window_cp02_t1_ParamLimits

0x75d2,	// (0x0008c7f6) popup_clock_digital_window_cp02_t1

0x2e13,	// (0x00088037) clock_digital_number_pane_cp10_g1

0x2e13,	// (0x00088037) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00094a75) clock_digital_number_pane_cp10_g

0x2e13,	// (0x00088037) clock_digital_separator_pane_cp10_g1

0x2e13,	// (0x00088037) clock_digital_separator_pane_g2_cp10

0xbaf3,	// (0x00090d17) navi_pane_vded_g4

0xbafc,	// (0x00090d20) navi_pane_vded_g5

0xbb05,	// (0x00090d29) navi_pane_vded_t1

0x07a0,	// (0x000859c4) main_vded_pane

0x7702,	// (0x0008c926) main_vded_pane_g1

0x770e,	// (0x0008c932) main_vded_pane_g2

0x7718,	// (0x0008c93c) main_vded_pane_g3

0x0002,

0xf856,	// (0x00094a7a) main_vded_pane_g

0x7722,	// (0x0008c946) main_vded_pane_t1

0x7730,	// (0x0008c954) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00094a81) main_vded_pane_t

0x773e,	// (0x0008c962) vded_slider_pane

0x7748,	// (0x0008c96c) vded_video_pane

0x1aa3,	// (0x00086cc7) vded_video_pane_g1

0x7752,	// (0x0008c976) vded_video_pane_g2

0x14fa,	// (0x0008671e) vded_video_pane_g3

0x0002,

0xf862,	// (0x00094a86) vded_video_pane_g

0x1aad,	// (0x00086cd1) vded_slider_pane_g1

0x124b,	// (0x0008646f) vded_slider_pane_g2

0x1ab6,	// (0x00086cda) vded_slider_pane_g3

0x1abf,	// (0x00086ce3) vded_slider_pane_g4

0x1ac8,	// (0x00086cec) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00094a8d) vded_slider_pane_g

0x715b,	// (0x0008c37f) mup3_rocker_pane_ParamLimits

0x715b,	// (0x0008c37f) mup3_rocker_pane

0x775b,	// (0x0008c97f) mup3_control_keys_pane_g1

0x7763,	// (0x0008c987) mup3_control_keys_pane_g2

0x776b,	// (0x0008c98f) mup3_control_keys_pane_g3

0x7773,	// (0x0008c997) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00094a98) mup3_control_keys_pane_g

0x2cc8,	// (0x00087eec) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2cc8,	// (0x00087eec) popup_toolbar2_fixed_window_cp01

0x718f,	// (0x0008c3b3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x718f,	// (0x0008c3b3) popup_toolbar2_fixed_window_cp02

0xc30c,	// (0x00091530) popup_call2_audio_second_window_t4_ParamLimits

0xc30c,	// (0x00091530) popup_call2_audio_second_window_t4

0xc83a,	// (0x00091a5e) popup_call2_audio_first_window_t6_ParamLimits

0xc83a,	// (0x00091a5e) popup_call2_audio_first_window_t6

0xcad0,	// (0x00091cf4) popup_call2_audio_out_window_t6_ParamLimits

0xcad0,	// (0x00091cf4) popup_call2_audio_out_window_t6

0x07a0,	// (0x000859c4) main_vitu_pane

0x7783,	// (0x0008c9a7) aid_size_cell_itu_ParamLimits

0x7783,	// (0x0008c9a7) aid_size_cell_itu

0x10b1,	// (0x000862d5) bg_popup_window_pane_cp08_ParamLimits

0x10b1,	// (0x000862d5) bg_popup_window_pane_cp08

0x7799,	// (0x0008c9bd) field_vitu_entry_pane_ParamLimits

0x7799,	// (0x0008c9bd) field_vitu_entry_pane

0x77b0,	// (0x0008c9d4) grid_vitu_function_pane_ParamLimits

0x77b0,	// (0x0008c9d4) grid_vitu_function_pane

0x77cb,	// (0x0008c9ef) grid_vitu_itu_pane_ParamLimits

0x77cb,	// (0x0008c9ef) grid_vitu_itu_pane

0x77e9,	// (0x0008ca0d) cell_vitu_itu_pane_ParamLimits

0x77e9,	// (0x0008ca0d) cell_vitu_itu_pane

0x780d,	// (0x0008ca31) cell_vitu_function_pane_ParamLimits

0x780d,	// (0x0008ca31) cell_vitu_function_pane

0x10b1,	// (0x000862d5) bg_popup_sub_pane_cp08_ParamLimits

0x10b1,	// (0x000862d5) bg_popup_sub_pane_cp08

0x7828,	// (0x0008ca4c) field_vitu_entry_pane_t1_ParamLimits

0x7828,	// (0x0008ca4c) field_vitu_entry_pane_t1

0x1ae9,	// (0x00086d0d) field_vitu_entry_pane_t2_ParamLimits

0x1ae9,	// (0x00086d0d) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00094aa6) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00094aa6) field_vitu_entry_pane_t

0x1b06,	// (0x00086d2a) bg_button_pane_cp05_ParamLimits

0x1b06,	// (0x00086d2a) bg_button_pane_cp05

0x7848,	// (0x0008ca6c) cell_vitu_itu_pane_g1

0x7860,	// (0x0008ca84) cell_vitu_itu_pane_t1_ParamLimits

0x7860,	// (0x0008ca84) cell_vitu_itu_pane_t1

0x7872,	// (0x0008ca96) cell_vitu_itu_pane_t2_ParamLimits

0x7872,	// (0x0008ca96) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00094aab) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00094aab) cell_vitu_itu_pane_t

0x1b14,	// (0x00086d38) bg_button_pane_cp07

0x78a7,	// (0x0008cacb) cell_vitu_function_pane_g1

0xb08f,	// (0x000902b3) main_calc_pane_g1

0x2ae6,	// (0x00087d0a) aid_visual_content_pane

0x07a0,	// (0x000859c4) main_vradio_pane

0x78b0,	// (0x0008cad4) main_vradio_pane_g1_ParamLimits

0x78b0,	// (0x0008cad4) main_vradio_pane_g1

0x1b1e,	// (0x00086d42) main_vradio_pane_g2_ParamLimits

0x1b1e,	// (0x00086d42) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00094ab2) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00094ab2) main_vradio_pane_g

0x78c9,	// (0x0008caed) main_vradio_pane_t1_ParamLimits

0x78c9,	// (0x0008caed) main_vradio_pane_t1

0x78de,	// (0x0008cb02) main_vradio_pane_t2_ParamLimits

0x78de,	// (0x0008cb02) main_vradio_pane_t2

0x1b2b,	// (0x00086d4f) main_vradio_pane_t3_ParamLimits

0x1b2b,	// (0x00086d4f) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00094ab7) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00094ab7) main_vradio_pane_t

0x78f3,	// (0x0008cb17) vradio_rocker_control_pane_ParamLimits

0x78f3,	// (0x0008cb17) vradio_rocker_control_pane

0x7905,	// (0x0008cb29) vradio_station_info_pane_ParamLimits

0x7905,	// (0x0008cb29) vradio_station_info_pane

0x1b3f,	// (0x00086d63) vradio_frequency_info_pane_ParamLimits

0x1b3f,	// (0x00086d63) vradio_frequency_info_pane

0x14fa,	// (0x0008671e) vradio_station_info_pane_g1

0x1b4e,	// (0x00086d72) vradio_station_info_pane_t1_ParamLimits

0x1b4e,	// (0x00086d72) vradio_station_info_pane_t1

0xcd4d,	// (0x00091f71) vradio_station_info_pane_t2_ParamLimits

0xcd4d,	// (0x00091f71) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00094abe) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00094abe) vradio_station_info_pane_t

0xcd5f,	// (0x00091f83) vradio_tuning_pane

0xcd67,	// (0x00091f8b) vradio_rocker_control_pane_g1

0xcd6f,	// (0x00091f93) vradio_rocker_control_pane_g2

0xcd77,	// (0x00091f9b) vradio_rocker_control_pane_g3

0xcd7f,	// (0x00091fa3) vradio_rocker_control_pane_g4

0xcd87,	// (0x00091fab) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00094ac3) vradio_rocker_control_pane_g

0x7917,	// (0x0008cb3b) vradio_frequency_info_pane_g1

0xcd8f,	// (0x00091fb3) vradio_frequency_info_pane_t1_ParamLimits

0xcd8f,	// (0x00091fb3) vradio_frequency_info_pane_t1

0x7921,	// (0x0008cb45) vradio_tuning_pane_g1

0x792c,	// (0x0008cb50) vradio_tuning_pane_t1

0x07be,	// (0x000859e2) area_side_right_pane_ParamLimits

0x07be,	// (0x000859e2) area_side_right_pane

0x106a,	// (0x0008628e) status_small_pane_g1

0x1072,	// (0x00086296) status_small_pane_g2

0x107b,	// (0x0008629f) status_small_pane_g3

0x1084,	// (0x000862a8) status_small_pane_g4

0x0003,

0xf65f,	// (0x00094883) status_small_pane_g

0x108d,	// (0x000862b1) status_small_pane_t1

0x07a0,	// (0x000859c4) main_video3_pane

0xcda3,	// (0x00091fc7) cams_zoom_vslider_pane

0xcdab,	// (0x00091fcf) image3_wide_pane_ParamLimits

0xcdab,	// (0x00091fcf) image3_wide_pane

0xcdc5,	// (0x00091fe9) image3_wide_small_pane

0xcdd1,	// (0x00091ff5) main_video3_pane_g1_ParamLimits

0xcdd1,	// (0x00091ff5) main_video3_pane_g1

0xcded,	// (0x00092011) main_video3_pane_g2_ParamLimits

0xcded,	// (0x00092011) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00094ace) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00094ace) main_video3_pane_g

0xce09,	// (0x0009202d) main_video3_pane_t1_ParamLimits

0xce09,	// (0x0009202d) main_video3_pane_t1

0xce34,	// (0x00092058) main_video3_pane_t2_ParamLimits

0xce34,	// (0x00092058) main_video3_pane_t2

0xce5f,	// (0x00092083) main_video3_pane_t3_ParamLimits

0xce5f,	// (0x00092083) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00094ad3) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00094ad3) main_video3_pane_t

0xce8c,	// (0x000920b0) cams_zoom_vslider_pane_g1

0xce95,	// (0x000920b9) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00094ada) cams_zoom_vslider_pane_g

0xce9d,	// (0x000920c1) small_slider_vertical_pane

0x14fa,	// (0x0008671e) small_slider_vertical_pane_g1

0x14fa,	// (0x0008671e) small_slider_vertical_pane_g2

0xcea5,	// (0x000920c9) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00094adf) small_slider_vertical_pane_g

0x07a0,	// (0x000859c4) main_hwr_training_pane

0xceae,	// (0x000920d2) hwr_training_instruct_pane_ParamLimits

0xceae,	// (0x000920d2) hwr_training_instruct_pane

0x793b,	// (0x0008cb5f) hwr_training_navi_pane_ParamLimits

0x793b,	// (0x0008cb5f) hwr_training_navi_pane

0x795a,	// (0x0008cb7e) hwr_training_write_pane_ParamLimits

0x795a,	// (0x0008cb7e) hwr_training_write_pane

0x07a0,	// (0x000859c4) bg_frame_shadow_pane

0xcee5,	// (0x00092109) hwr_training_write_pane_g1

0xceed,	// (0x00092111) hwr_training_write_pane_g2

0xcef5,	// (0x00092119) hwr_training_write_pane_g3

0xcefd,	// (0x00092121) hwr_training_write_pane_g4

0xcf05,	// (0x00092129) hwr_training_write_pane_g5

0xcf0d,	// (0x00092131) hwr_training_write_pane_g6

0xcf15,	// (0x00092139) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00094ae6) hwr_training_write_pane_g

0xed50,	// (0x00093f74) hwr_training_navi_pane_g1_ParamLimits

0xed50,	// (0x00093f74) hwr_training_navi_pane_g1

0xed62,	// (0x00093f86) hwr_training_navi_pane_g2_ParamLimits

0xed62,	// (0x00093f86) hwr_training_navi_pane_g2

0xed74,	// (0x00093f98) hwr_training_navi_pane_g3_ParamLimits

0xed74,	// (0x00093f98) hwr_training_navi_pane_g3

0xed84,	// (0x00093fa8) hwr_training_navi_pane_g4_ParamLimits

0xed84,	// (0x00093fa8) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00094af5) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00094af5) hwr_training_navi_pane_g

0xed91,	// (0x00093fb5) hwr_training_navi_pane_t1

0x79a4,	// (0x0008cbc8) list_single_hwr_training_instruct_pane_ParamLimits

0x79a4,	// (0x0008cbc8) list_single_hwr_training_instruct_pane

0xcf1d,	// (0x00092141) list_single_hwr_training_instruct_pane_t1

0x143a,	// (0x0008665e) bg_frame_shadow_pane_g1

0xcf2c,	// (0x00092150) bg_frame_shadow_pane_g2

0xcf34,	// (0x00092158) bg_frame_shadow_pane_g3

0xcf3c,	// (0x00092160) bg_frame_shadow_pane_g4

0xcf44,	// (0x00092168) bg_frame_shadow_pane_g5

0xcf4c,	// (0x00092170) bg_frame_shadow_pane_g6

0xcf54,	// (0x00092178) bg_frame_shadow_pane_g7

0x33cc,	// (0x000885f0) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00094b00) bg_frame_shadow_pane_g

0x07a0,	// (0x000859c4) main_video_tele_dialer_pane

0x79c1,	// (0x0008cbe5) aid_size_cell_video_keypad_ParamLimits

0x79c1,	// (0x0008cbe5) aid_size_cell_video_keypad

0x79db,	// (0x0008cbff) grid_video_dialer_keypad_pane_ParamLimits

0x79db,	// (0x0008cbff) grid_video_dialer_keypad_pane

0x7a27,	// (0x0008cc4b) video_down_pane_cp_ParamLimits

0x7a27,	// (0x0008cc4b) video_down_pane_cp

0x7a5b,	// (0x0008cc7f) cell_video_dialer_keypad_pane_ParamLimits

0x7a5b,	// (0x0008cc7f) cell_video_dialer_keypad_pane

0xcf5c,	// (0x00092180) bg_button_pane_cp08_ParamLimits

0xcf5c,	// (0x00092180) bg_button_pane_cp08

0x7a7d,	// (0x0008cca1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a7d,	// (0x0008cca1) cell_video_dialer_keypad_pane_g1

0x7145,	// (0x0008c369) mup3_rocker2_pane_ParamLimits

0x7145,	// (0x0008c369) mup3_rocker2_pane

0x14fa,	// (0x0008671e) mup3_rocker2_pane_g1

0x5c9a,	// (0x0008aebe) main_dialer2_pane

0x07a0,	// (0x000859c4) main_mp4_pane

0xeda7,	// (0x00093fcb) main_mp4_pane_g1_ParamLimits

0xeda7,	// (0x00093fcb) main_mp4_pane_g1

0xeda7,	// (0x00093fcb) main_mp4_pane_g2_ParamLimits

0xeda7,	// (0x00093fcb) main_mp4_pane_g2

0x7ab8,	// (0x0008ccdc) main_mp4_pane_g3_ParamLimits

0x7ab8,	// (0x0008ccdc) main_mp4_pane_g3

0xedb5,	// (0x00093fd9) main_mp4_pane_g4_ParamLimits

0xedb5,	// (0x00093fd9) main_mp4_pane_g4

0xedcf,	// (0x00093ff3) main_mp4_pane_g5_ParamLimits

0xedcf,	// (0x00093ff3) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00094b20) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00094b20) main_mp4_pane_g

0xee03,	// (0x00094027) main_mp4_pane_t1_ParamLimits

0xee03,	// (0x00094027) main_mp4_pane_t1

0xee5f,	// (0x00094083) main_mp4_pane_t2_ParamLimits

0xee5f,	// (0x00094083) main_mp4_pane_t2

0xcf68,	// (0x0009218c) main_mp4_pane_t3_ParamLimits

0xcf68,	// (0x0009218c) main_mp4_pane_t3

0xeeb1,	// (0x000940d5) main_mp4_pane_t4_ParamLimits

0xeeb1,	// (0x000940d5) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00094b2d) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00094b2d) main_mp4_pane_t

0xeef5,	// (0x00094119) mp4_progress_pane_ParamLimits

0xeef5,	// (0x00094119) mp4_progress_pane

0xef3f,	// (0x00094163) mp4_rocker_pane_ParamLimits

0xef3f,	// (0x00094163) mp4_rocker_pane

0xcf90,	// (0x000921b4) mp4_progress_pane_t1

0xcfa9,	// (0x000921cd) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00094b36) mp4_progress_pane_t

0xcfc2,	// (0x000921e6) mup_progress_pane_cp04

0xcfce,	// (0x000921f2) mp4_rocker_pane_g1

0x7af4,	// (0x0008cd18) aid_cell_size_keypad2_ParamLimits

0x7af4,	// (0x0008cd18) aid_cell_size_keypad2

0x7b0a,	// (0x0008cd2e) dialer2_ne_pane_ParamLimits

0x7b0a,	// (0x0008cd2e) dialer2_ne_pane

0x7b24,	// (0x0008cd48) grid_dialer2_keypad_pane_ParamLimits

0x7b24,	// (0x0008cd48) grid_dialer2_keypad_pane

0x12dd,	// (0x00086501) bg_popup_call_pane_cp07_ParamLimits

0x12dd,	// (0x00086501) bg_popup_call_pane_cp07

0x7b42,	// (0x0008cd66) dialer2_ne_pane_t1_ParamLimits

0x7b42,	// (0x0008cd66) dialer2_ne_pane_t1

0x7b81,	// (0x0008cda5) cell_dialer2_keypad_pane_ParamLimits

0x7b81,	// (0x0008cda5) cell_dialer2_keypad_pane

0xcfea,	// (0x0009220e) bg_button_pane_pane_cp04_ParamLimits

0xcfea,	// (0x0009220e) bg_button_pane_pane_cp04

0x7ba5,	// (0x0008cdc9) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ba5,	// (0x0008cdc9) cell_dialer2_keypad_pane_g1

0x3d3b,	// (0x00088f5f) aid_placing_vt_set_content_ParamLimits

0x3d3b,	// (0x00088f5f) aid_placing_vt_set_content

0x3d61,	// (0x00088f85) aid_placing_vt_set_title_ParamLimits

0x3d61,	// (0x00088f85) aid_placing_vt_set_title

0x07a0,	// (0x000859c4) main_image3_pane

0x7c6b,	// (0x0008ce8f) area_side_right_pane_cp01_ParamLimits

0x7c6b,	// (0x0008ce8f) area_side_right_pane_cp01

0xeda7,	// (0x00093fcb) main_image3_pane_g1_ParamLimits

0xeda7,	// (0x00093fcb) main_image3_pane_g1

0x7c82,	// (0x0008cea6) main_image3_pane_g2_ParamLimits

0x7c82,	// (0x0008cea6) main_image3_pane_g2

0x7caa,	// (0x0008cece) main_image3_pane_g3_ParamLimits

0x7caa,	// (0x0008cece) main_image3_pane_g3

0x7cd4,	// (0x0008cef8) main_image3_pane_g4_ParamLimits

0x7cd4,	// (0x0008cef8) main_image3_pane_g4

0x0003,

0xf921,	// (0x00094b45) main_image3_pane_g_ParamLimits

0xf921,	// (0x00094b45) main_image3_pane_g

0x7cfe,	// (0x0008cf22) main_image3_pane_t1_ParamLimits

0x7cfe,	// (0x0008cf22) main_image3_pane_t1

0x7d56,	// (0x0008cf7a) main_image3_pane_t2_ParamLimits

0x7d56,	// (0x0008cf7a) main_image3_pane_t2

0x7da8,	// (0x0008cfcc) main_image3_pane_t3_ParamLimits

0x7da8,	// (0x0008cfcc) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00094b4e) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00094b4e) main_image3_pane_t

0x10b1,	// (0x000862d5) grid_sctrl_middle_pane_cp01_ParamLimits

0x10b1,	// (0x000862d5) grid_sctrl_middle_pane_cp01

0x7e30,	// (0x0008d054) cell_sctrl_middle_pane_cp01_ParamLimits

0x7e30,	// (0x0008d054) cell_sctrl_middle_pane_cp01

0x7e4d,	// (0x0008d071) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7e4d,	// (0x0008d071) cell_sctrl_middle_pane_cp01_g1

0x07a0,	// (0x000859c4) main_call4_pane

0x7e63,	// (0x0008d087) aid_size_button_call4_ParamLimits

0x7e63,	// (0x0008d087) aid_size_button_call4

0x7e94,	// (0x0008d0b8) call4_windows_pane_ParamLimits

0x7e94,	// (0x0008d0b8) call4_windows_pane

0x7eb4,	// (0x0008d0d8) grid_call4_button_pane_ParamLimits

0x7eb4,	// (0x0008d0d8) grid_call4_button_pane

0xcff6,	// (0x0009221a) call4_windows_conf_pane

0xd00b,	// (0x0009222f) popup_call4_audio_first_window_ParamLimits

0xd00b,	// (0x0009222f) popup_call4_audio_first_window

0xd057,	// (0x0009227b) popup_call4_audio_second_window_ParamLimits

0xd057,	// (0x0009227b) popup_call4_audio_second_window

0xd06b,	// (0x0009228f) popup_call4_audio_wait_window_ParamLimits

0xd06b,	// (0x0009228f) popup_call4_audio_wait_window

0x7ee1,	// (0x0008d105) cell_call4_button_pane_ParamLimits

0x7ee1,	// (0x0008d105) cell_call4_button_pane

0x7f0a,	// (0x0008d12e) bg_button_pane_cp09_ParamLimits

0x7f0a,	// (0x0008d12e) bg_button_pane_cp09

0x7f16,	// (0x0008d13a) cell_call4_button_pane_g1_ParamLimits

0x7f16,	// (0x0008d13a) cell_call4_button_pane_g1

0x7f3c,	// (0x0008d160) cell_call4_button_pane_t1_ParamLimits

0x7f3c,	// (0x0008d160) cell_call4_button_pane_t1

0xd0b3,	// (0x000922d7) popup_call4_audio_conf_window_ParamLimits

0xd0b3,	// (0x000922d7) popup_call4_audio_conf_window

0x71a5,	// (0x0008c3c9) mup3_progress_pane_t1_ParamLimits

0x71bc,	// (0x0008c3e0) mup3_progress_pane_t2_ParamLimits

0x17dc,	// (0x00086a00) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00094a27) mup3_progress_pane_t_ParamLimits

0x17f3,	// (0x00086a17) mup_progress_pane_cp03_ParamLimits

0x777b,	// (0x0008c99f) mup3_control_keys_pane_g4_copy1

0xef23,	// (0x00094147) mp4_rocker2_pane_ParamLimits

0xef23,	// (0x00094147) mp4_rocker2_pane

0xd0c7,	// (0x000922eb) mp4_rocker2_pane_g1

0xd0cf,	// (0x000922f3) mp4_rocker2_pane_g2

0xef91,	// (0x000941b5) mp4_rocker2_pane_g3

0xef99,	// (0x000941bd) mp4_rocker2_pane_g4

0xefa1,	// (0x000941c5) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00094b57) mp4_rocker2_pane_g

0x07a0,	// (0x000859c4) main_camera4_pane

0x07a0,	// (0x000859c4) main_video4_pane

0x79f7,	// (0x0008cc1b) main_video_tele_dialer_pane_t1_ParamLimits

0x79f7,	// (0x0008cc1b) main_video_tele_dialer_pane_t1

0x7a0f,	// (0x0008cc33) main_video_tele_dialer_pane_t2_ParamLimits

0x7a0f,	// (0x0008cc33) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00094b11) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00094b11) main_video_tele_dialer_pane_t

0x7f7e,	// (0x0008d1a2) cam4_autofocus_pane_ParamLimits

0x7f7e,	// (0x0008d1a2) cam4_autofocus_pane

0x7f94,	// (0x0008d1b8) cam4_image_uncrop_pane_ParamLimits

0x7f94,	// (0x0008d1b8) cam4_image_uncrop_pane

0x7fae,	// (0x0008d1d2) cam4_indicators_pane_ParamLimits

0x7fae,	// (0x0008d1d2) cam4_indicators_pane

0x7fd9,	// (0x0008d1fd) main_camera4_pane_g1_ParamLimits

0x7fd9,	// (0x0008d1fd) main_camera4_pane_g1

0x7fe5,	// (0x0008d209) main_camera4_pane_g2_ParamLimits

0x7fe5,	// (0x0008d209) main_camera4_pane_g2

0x7ff1,	// (0x0008d215) main_camera4_pane_g3_ParamLimits

0x7ff1,	// (0x0008d215) main_camera4_pane_g3

0x7ffd,	// (0x0008d221) main_camera4_pane_g4_ParamLimits

0x7ffd,	// (0x0008d221) main_camera4_pane_g4

0x8009,	// (0x0008d22d) main_camera4_pane_g5_ParamLimits

0x8009,	// (0x0008d22d) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00094b62) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00094b62) main_camera4_pane_g

0x8026,	// (0x0008d24a) main_camera4_pane_t1_ParamLimits

0x8026,	// (0x0008d24a) main_camera4_pane_t1

0x805e,	// (0x0008d282) bg_tb_trans_pane_cp06

0x806c,	// (0x0008d290) cam4_indicators_pane_g1

0x8079,	// (0x0008d29d) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00094b74) cam4_indicators_pane_g

0x8091,	// (0x0008d2b5) cam4_indicators_pane_t1

0x80bb,	// (0x0008d2df) main_video4_pane_g1_ParamLimits

0x80bb,	// (0x0008d2df) main_video4_pane_g1

0x80cd,	// (0x0008d2f1) main_video4_pane_g2_ParamLimits

0x80cd,	// (0x0008d2f1) main_video4_pane_g2

0x80e1,	// (0x0008d305) main_video4_pane_g3_ParamLimits

0x80e1,	// (0x0008d305) main_video4_pane_g3

0x80f1,	// (0x0008d315) main_video4_pane_g4_ParamLimits

0x80f1,	// (0x0008d315) main_video4_pane_g4

0x0004,

0xf957,	// (0x00094b7b) main_video4_pane_g_ParamLimits

0xf957,	// (0x00094b7b) main_video4_pane_g

0x8111,	// (0x0008d335) vid4_indicators_pane_ParamLimits

0x8111,	// (0x0008d335) vid4_indicators_pane

0x8143,	// (0x0008d367) video4_image_uncrop_cif_pane_ParamLimits

0x8143,	// (0x0008d367) video4_image_uncrop_cif_pane

0x815d,	// (0x0008d381) video4_image_uncrop_nhd_pane_ParamLimits

0x815d,	// (0x0008d381) video4_image_uncrop_nhd_pane

0x7f94,	// (0x0008d1b8) video4_image_uncrop_vga_pane_ParamLimits

0x7f94,	// (0x0008d1b8) video4_image_uncrop_vga_pane

0xefc9,	// (0x000941ed) bg_tb_trans_pane_cp07

0x806c,	// (0x0008d290) vid4_indicators_pane_g1

0x8171,	// (0x0008d395) vid4_indicators_pane_g2

0x817e,	// (0x0008d3a2) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00094b86) vid4_indicators_pane_g

0x8197,	// (0x0008d3bb) vid4_indicators_pane_t1

0x81a9,	// (0x0008d3cd) cam4_autofocus_pane_g1

0x81b1,	// (0x0008d3d5) cam4_autofocus_pane_g2

0x81b9,	// (0x0008d3dd) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00094b91) cam4_autofocus_pane_g

0x81c1,	// (0x0008d3e5) cam4_autofocus_pane_g3_copy1

0x7a3f,	// (0x0008cc63) video_down_pane_cp_t1

0x7a4d,	// (0x0008cc71) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00094b16) video_down_pane_cp_t

0x10b1,	// (0x000862d5) popup_vitu2_window_ParamLimits

0x10b1,	// (0x000862d5) popup_vitu2_window

0x81c9,	// (0x0008d3ed) aid_size_cell2_itu2_ParamLimits

0x81c9,	// (0x0008d3ed) aid_size_cell2_itu2

0x81ef,	// (0x0008d413) aid_size_cell_itu2_ParamLimits

0x81ef,	// (0x0008d413) aid_size_cell_itu2

0x824b,	// (0x0008d46f) bg_popup_window_pane_cp09_ParamLimits

0x824b,	// (0x0008d46f) bg_popup_window_pane_cp09

0x8259,	// (0x0008d47d) field_vitu2_entry_pane_ParamLimits

0x8259,	// (0x0008d47d) field_vitu2_entry_pane

0x827f,	// (0x0008d4a3) grid_vitu2_function_pane_ParamLimits

0x827f,	// (0x0008d4a3) grid_vitu2_function_pane

0x82d0,	// (0x0008d4f4) grid_vitu2_itu_pane_ParamLimits

0x82d0,	// (0x0008d4f4) grid_vitu2_itu_pane

0x8361,	// (0x0008d585) cell_vitu2_itu_pane_ParamLimits

0x8361,	// (0x0008d585) cell_vitu2_itu_pane

0x8385,	// (0x0008d5a9) cell_vitu2_function_pane_ParamLimits

0x8385,	// (0x0008d5a9) cell_vitu2_function_pane

0xd0d7,	// (0x000922fb) bg_popup_call_pane_cp08_ParamLimits

0xd0d7,	// (0x000922fb) bg_popup_call_pane_cp08

0xd0f0,	// (0x00092314) field_vitu2_entry_pane_g1

0xd0fc,	// (0x00092320) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00094b98) field_vitu2_entry_pane_g

0xd116,	// (0x0009233a) field_vitu2_entry_pane_t1_ParamLimits

0xd116,	// (0x0009233a) field_vitu2_entry_pane_t1

0xd134,	// (0x00092358) field_vitu2_entry_pane_t2_ParamLimits

0xd134,	// (0x00092358) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00094b9f) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00094b9f) field_vitu2_entry_pane_t

0x83c4,	// (0x0008d5e8) bg_button_pane_cp010_ParamLimits

0x83c4,	// (0x0008d5e8) bg_button_pane_cp010

0x83d2,	// (0x0008d5f6) cell_vitu2_itu_pane_g1

0x83f0,	// (0x0008d614) cell_vitu2_itu_pane_t1_ParamLimits

0x83f0,	// (0x0008d614) cell_vitu2_itu_pane_t1

0x29ce,	// (0x00087bf2) cell_vitu2_itu_pane_t2_ParamLimits

0x29ce,	// (0x00087bf2) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00094ba9) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00094ba9) cell_vitu2_itu_pane_t

0xefdf,	// (0x00094203) bg_button_pane_cp011

0x8456,	// (0x0008d67a) cell_vitu2_function_pane_g1

0x07a0,	// (0x000859c4) main_myfav_hc_pane

0x7df8,	// (0x0008d01c) popup_image3_note_pane_ParamLimits

0x7df8,	// (0x0008d01c) popup_image3_note_pane

0x7e14,	// (0x0008d038) popup_image3_tool_bar_pane_ParamLimits

0x7e14,	// (0x0008d038) popup_image3_tool_bar_pane

0x2a52,	// (0x00087c76) cell_vitu2_itu_pane_t3_ParamLimits

0x2a52,	// (0x00087c76) cell_vitu2_itu_pane_t3

0x07a0,	// (0x000859c4) bg_popup_trans_pane

0xd159,	// (0x0009237d) grid_image3_tool_bar_pane

0xd163,	// (0x00092387) bg_popup_trans_pane_g1

0xb37b,	// (0x0009059f) bg_popup_trans_pane_g2

0xd16b,	// (0x0009238f) bg_popup_trans_pane_g3

0xd173,	// (0x00092397) bg_popup_trans_pane_g4

0xd17b,	// (0x0009239f) bg_popup_trans_pane_g5

0xd183,	// (0x000923a7) bg_popup_trans_pane_g6

0xd18b,	// (0x000923af) bg_popup_trans_pane_g7

0xd193,	// (0x000923b7) bg_popup_trans_pane_g8

0xb35b,	// (0x0009057f) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00094bb0) bg_popup_trans_pane_g

0xd19b,	// (0x000923bf) cell_image3_tool_bar_pane_ParamLimits

0xd19b,	// (0x000923bf) cell_image3_tool_bar_pane

0x14fa,	// (0x0008671e) cell_image3_tool_bar_pane_g1

0x07a0,	// (0x000859c4) bg_popup_trans_pane_cp1

0xd1af,	// (0x000923d3) popup_image3_note_pane_t1

0xd1bd,	// (0x000923e1) popup_image3_note_pane_t2

0xd1cb,	// (0x000923ef) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00094bc3) popup_image3_note_pane_t

0xd1d9,	// (0x000923fd) popup_image3_note_pane_t3_copy1

0x846a,	// (0x0008d68e) bg_myfav_hc_instruction_pane_ParamLimits

0x846a,	// (0x0008d68e) bg_myfav_hc_instruction_pane

0x8480,	// (0x0008d6a4) cell_myfav_contact_pane_ParamLimits

0x8480,	// (0x0008d6a4) cell_myfav_contact_pane

0x849c,	// (0x0008d6c0) cell_myfav_contact_pane_cp1_ParamLimits

0x849c,	// (0x0008d6c0) cell_myfav_contact_pane_cp1

0x84b4,	// (0x0008d6d8) cell_myfav_contact_pane_cp2_ParamLimits

0x84b4,	// (0x0008d6d8) cell_myfav_contact_pane_cp2

0x84cc,	// (0x0008d6f0) cell_myfav_contact_pane_cp3_ParamLimits

0x84cc,	// (0x0008d6f0) cell_myfav_contact_pane_cp3

0x84e3,	// (0x0008d707) cell_myfav_contact_pane_cp4_ParamLimits

0x84e3,	// (0x0008d707) cell_myfav_contact_pane_cp4

0x84fb,	// (0x0008d71f) cell_myfav_contact_pane_cp5_ParamLimits

0x84fb,	// (0x0008d71f) cell_myfav_contact_pane_cp5

0x850f,	// (0x0008d733) cell_myfav_contact_pane_cp6_ParamLimits

0x850f,	// (0x0008d733) cell_myfav_contact_pane_cp6

0x8525,	// (0x0008d749) cell_myfav_contact_pane_cp7_ParamLimits

0x8525,	// (0x0008d749) cell_myfav_contact_pane_cp7

0xd1e7,	// (0x0009240b) listscroll_gen_pane_cp05

0x853f,	// (0x0008d763) main_myfav_hc_pane_g1_ParamLimits

0x853f,	// (0x0008d763) main_myfav_hc_pane_g1

0x8559,	// (0x0008d77d) main_myfav_hc_pane_g2_ParamLimits

0x8559,	// (0x0008d77d) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00094bca) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00094bca) main_myfav_hc_pane_g

0x858b,	// (0x0008d7af) main_myfav_hc_pane_t1_ParamLimits

0x858b,	// (0x0008d7af) main_myfav_hc_pane_t1

0xd1f0,	// (0x00092414) main_myfav_hc_pane_t2_ParamLimits

0xd1f0,	// (0x00092414) main_myfav_hc_pane_t2

0xd202,	// (0x00092426) main_myfav_hc_pane_t3_ParamLimits

0xd202,	// (0x00092426) main_myfav_hc_pane_t3

0x85a2,	// (0x0008d7c6) main_myfav_hc_pane_t4_ParamLimits

0x85a2,	// (0x0008d7c6) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00094bd1) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00094bd1) main_myfav_hc_pane_t

0x14fa,	// (0x0008671e) bg_myfav_hc_instruction_pane_g1

0xd214,	// (0x00092438) cell_myfav_contact_pane_g1_ParamLimits

0xd214,	// (0x00092438) cell_myfav_contact_pane_g1

0xd214,	// (0x00092438) cell_myfav_contact_pane_g2_ParamLimits

0xd214,	// (0x00092438) cell_myfav_contact_pane_g2

0xd220,	// (0x00092444) cell_myfav_contact_pane_g3_ParamLimits

0xd220,	// (0x00092444) cell_myfav_contact_pane_g3

0x17c6,	// (0x000869ea) cell_myfav_contact_pane_g4_ParamLimits

0x17c6,	// (0x000869ea) cell_myfav_contact_pane_g4

0xd22d,	// (0x00092451) cell_myfav_contact_pane_g5_ParamLimits

0xd22d,	// (0x00092451) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00094bdc) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00094bdc) cell_myfav_contact_pane_g

0x8573,	// (0x0008d797) main_myfav_hc_pane_g3_ParamLimits

0x8573,	// (0x0008d797) main_myfav_hc_pane_g3

0x2c29,	// (0x00087e4d) popup_adpt_find_window

0x85ca,	// (0x0008d7ee) afind_page_pane_ParamLimits

0x85ca,	// (0x0008d7ee) afind_page_pane

0x85df,	// (0x0008d803) aid_size_cell_afind_ParamLimits

0x85df,	// (0x0008d803) aid_size_cell_afind

0x85fd,	// (0x0008d821) bg_popup_sub_pane_cp09_ParamLimits

0x85fd,	// (0x0008d821) bg_popup_sub_pane_cp09

0x860a,	// (0x0008d82e) find_pane_cp01_ParamLimits

0x860a,	// (0x0008d82e) find_pane_cp01

0xd239,	// (0x0009245d) grid_afind_control_pane_ParamLimits

0xd239,	// (0x0009245d) grid_afind_control_pane

0x8617,	// (0x0008d83b) grid_afind_pane_ParamLimits

0x8617,	// (0x0008d83b) grid_afind_pane

0x8639,	// (0x0008d85d) cell_afind_pane_ParamLimits

0x8639,	// (0x0008d85d) cell_afind_pane

0x14fa,	// (0x0008671e) afind_page_pane_g1

0x869a,	// (0x0008d8be) afind_page_pane_g2

0x86a3,	// (0x0008d8c7) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00094be7) afind_page_pane_g

0x86ac,	// (0x0008d8d0) afind_page_pane_t1

0xd24d,	// (0x00092471) cell_afind_grid_control_pane_ParamLimits

0xd24d,	// (0x00092471) cell_afind_grid_control_pane

0xcfea,	// (0x0009220e) bg_button_pane_cp69_ParamLimits

0xcfea,	// (0x0009220e) bg_button_pane_cp69

0x86cc,	// (0x0008d8f0) cell_afind_pane_g1_ParamLimits

0x86cc,	// (0x0008d8f0) cell_afind_pane_g1

0x86d9,	// (0x0008d8fd) cell_afind_pane_t1_ParamLimits

0x86d9,	// (0x0008d8fd) cell_afind_pane_t1

0x3bc6,	// (0x00088dea) bg_button_pane_cp72

0xd25c,	// (0x00092480) cell_afind_grid_control_pane_g1

0x5755,	// (0x0008a979) aid_image_placing_area_ParamLimits

0x5755,	// (0x0008a979) aid_image_placing_area

0x1ad1,	// (0x00086cf5) field_vitu_entry_pane_g1_ParamLimits

0x1ad1,	// (0x00086cf5) field_vitu_entry_pane_g1

0x1add,	// (0x00086d01) field_vitu_entry_pane_g2_ParamLimits

0x1add,	// (0x00086d01) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00094aa1) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00094aa1) field_vitu_entry_pane_g

0x7848,	// (0x0008ca6c) cell_vitu_itu_pane_g1_ParamLimits

0x788a,	// (0x0008caae) cell_vitu_itu_pane_t3_ParamLimits

0x788a,	// (0x0008caae) cell_vitu_itu_pane_t3

0xcf90,	// (0x000921b4) mp4_progress_pane_t1_ParamLimits

0xcfa9,	// (0x000921cd) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00094b36) mp4_progress_pane_t_ParamLimits

0xcfc2,	// (0x000921e6) mup_progress_pane_cp04_ParamLimits

0x85b6,	// (0x0008d7da) main_myfav_hc_pane_t5_ParamLimits

0x85b6,	// (0x0008d7da) main_myfav_hc_pane_t5

0x2afa,	// (0x00087d1e) aid_zoom_text_primary

0x2c29,	// (0x00087e4d) popup_adpt_find_window_ParamLimits

0x10b1,	// (0x000862d5) main_cam_set_pane

0x7fc5,	// (0x0008d1e9) cam4_zoom_pane_ParamLimits

0x7fc5,	// (0x0008d1e9) cam4_zoom_pane

0x86eb,	// (0x0008d90f) main_cam_set_pane_g1_ParamLimits

0x86eb,	// (0x0008d90f) main_cam_set_pane_g1

0x86f9,	// (0x0008d91d) main_cam_set_pane_g2_ParamLimits

0x86f9,	// (0x0008d91d) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00094bee) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00094bee) main_cam_set_pane_g

0x871c,	// (0x0008d940) main_cam_set_pane_t1_ParamLimits

0x871c,	// (0x0008d940) main_cam_set_pane_t1

0x8737,	// (0x0008d95b) main_cset_listscroll_pane_ParamLimits

0x8737,	// (0x0008d95b) main_cset_listscroll_pane

0x8759,	// (0x0008d97d) main_cset_slider_pane_ParamLimits

0x8759,	// (0x0008d97d) main_cset_slider_pane

0xd26d,	// (0x00092491) main_cset_list_pane_ParamLimits

0xd26d,	// (0x00092491) main_cset_list_pane

0xd27d,	// (0x000924a1) scroll_pane_cp028

0x877f,	// (0x0008d9a3) aid_area_touch_slider

0x879b,	// (0x0008d9bf) cset_slider_pane

0x87c5,	// (0x0008d9e9) main_cset_slider_pane_g1

0x87da,	// (0x0008d9fe) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00094bf3) main_cset_slider_pane_g

0xd2b6,	// (0x000924da) main_cset_slider_pane_t1

0x8896,	// (0x0008daba) main_cset_slider_pane_t2

0x88b0,	// (0x0008dad4) main_cset_slider_pane_t3

0x88ca,	// (0x0008daee) main_cset_slider_pane_t4

0x88e4,	// (0x0008db08) main_cset_slider_pane_t5

0x8900,	// (0x0008db24) main_cset_slider_pane_t6

0x8915,	// (0x0008db39) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00094c18) main_cset_slider_pane_t

0x8a19,	// (0x0008dc3d) cset_list_set_pane_ParamLimits

0x8a19,	// (0x0008dc3d) cset_list_set_pane

0x8a2d,	// (0x0008dc51) aid_position_infowindow_above

0x8a35,	// (0x0008dc59) aid_position_infowindow_below

0x8a3d,	// (0x0008dc61) cset_list_set_pane_g1_ParamLimits

0x8a3d,	// (0x0008dc61) cset_list_set_pane_g1

0x8a49,	// (0x0008dc6d) cset_list_set_pane_g3_ParamLimits

0x8a49,	// (0x0008dc6d) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00094c37) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00094c37) cset_list_set_pane_g

0x8a58,	// (0x0008dc7c) cset_list_set_pane_t1_ParamLimits

0x8a58,	// (0x0008dc7c) cset_list_set_pane_t1

0x10b1,	// (0x000862d5) list_highlight_pane_cp021_ParamLimits

0x10b1,	// (0x000862d5) list_highlight_pane_cp021

0xbc79,	// (0x00090e9d) cset_slider_pane_g1

0xbc8b,	// (0x00090eaf) cset_slider_pane_g2

0xbc82,	// (0x00090ea6) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00094c3c) cset_slider_pane_g

0xefed,	// (0x00094211) aid_area_touch_cam4_zoom

0xeff5,	// (0x00094219) cam4_zoom_cont_pane

0xeffd,	// (0x00094221) cam4_zoom_pane_g1

0xf005,	// (0x00094229) cam4_zoom_pane_g2

0x8a6d,	// (0x0008dc91) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00094c43) cam4_zoom_pane_g

0xf00d,	// (0x00094231) cam4_zoom_cont_pane_g1

0xf016,	// (0x0009423a) cam4_zoom_cont_pane_g2

0xf01f,	// (0x00094243) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00094c4a) cam4_zoom_cont_pane_g

0x7e81,	// (0x0008d0a5) call4_image_pane_ParamLimits

0x7e81,	// (0x0008d0a5) call4_image_pane

0xcff6,	// (0x0009221a) call4_windows_conf_pane_ParamLimits

0xd035,	// (0x00092259) popup_call4_audio_in_window_ParamLimits

0xd035,	// (0x00092259) popup_call4_audio_in_window

0x07a0,	// (0x000859c4) bg_popup_call2_act_pane_cp02

0xd0ab,	// (0x000922cf) call4_list_conf_pane

0x14fa,	// (0x0008671e) call4_image_pane_g1

0x14fa,	// (0x0008671e) call4_image_pane_g2

0x0001,

0xf743,	// (0x00094967) call4_image_pane_g

0xd356,	// (0x0009257a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd356,	// (0x0009257a) list_single_graphic_popup_conf4_pane

0x07a0,	// (0x000859c4) list_highlight_pane_cp022

0xd369,	// (0x0009258d) list_single_graphic_popup_conf4_pane_g1

0xb94a,	// (0x00090b6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00094c51) list_single_graphic_popup_conf4_pane_g

0xd371,	// (0x00092595) list_single_graphic_popup_conf4_pane_t1

0x3e3b,	// (0x0008905f) popup_vtel_slider_window_ParamLimits

0x3e3b,	// (0x0008905f) popup_vtel_slider_window

0xcfd8,	// (0x000921fc) dialer2_ne_pane_t2_ParamLimits

0xcfd8,	// (0x000921fc) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00094b3b) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00094b3b) dialer2_ne_pane_t

0x12dd,	// (0x00086501) bg_popup_sub_pane_cp010_ParamLimits

0x12dd,	// (0x00086501) bg_popup_sub_pane_cp010

0x8a75,	// (0x0008dc99) popup_vtel_slider_window_g1_ParamLimits

0x8a75,	// (0x0008dc99) popup_vtel_slider_window_g1

0x8a88,	// (0x0008dcac) popup_vtel_slider_window_g2_ParamLimits

0x8a88,	// (0x0008dcac) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00094c56) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00094c56) popup_vtel_slider_window_g

0x8ade,	// (0x0008dd02) vtel_slider_pane_ParamLimits

0x8ade,	// (0x0008dd02) vtel_slider_pane

0x8b00,	// (0x0008dd24) vtel_slider_pane_g1_ParamLimits

0x8b00,	// (0x0008dd24) vtel_slider_pane_g1

0x8b14,	// (0x0008dd38) vtel_slider_pane_g2_ParamLimits

0x8b14,	// (0x0008dd38) vtel_slider_pane_g2

0x8b2c,	// (0x0008dd50) vtel_slider_pane_g3_ParamLimits

0x8b2c,	// (0x0008dd50) vtel_slider_pane_g3

0x8b00,	// (0x0008dd24) vtel_slider_pane_g4_ParamLimits

0x8b00,	// (0x0008dd24) vtel_slider_pane_g4

0x8b42,	// (0x0008dd66) vtel_slider_pane_g5_ParamLimits

0x8b42,	// (0x0008dd66) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00094c5f) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00094c5f) vtel_slider_pane_g

0x07a0,	// (0x000859c4) main_gallery2_pane

0x821b,	// (0x0008d43f) aid_size_row_itut2_dropdow_list_ParamLimits

0x821b,	// (0x0008d43f) aid_size_row_itut2_dropdow_list

0x82a7,	// (0x0008d4cb) grid_vitu2_function_top_pane_ParamLimits

0x82a7,	// (0x0008d4cb) grid_vitu2_function_top_pane

0x830c,	// (0x0008d530) popup_vitu2_dropdown_list_window_ParamLimits

0x830c,	// (0x0008d530) popup_vitu2_dropdown_list_window

0x8335,	// (0x0008d559) popup_vitu2_match_list_window

0x8b58,	// (0x0008dd7c) cell_vitu2_function_top_pane_ParamLimits

0x8b58,	// (0x0008dd7c) cell_vitu2_function_top_pane

0x8b76,	// (0x0008dd9a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b76,	// (0x0008dd9a) cell_vitu2_function_top_pane_cp01

0x8b94,	// (0x0008ddb8) cell_vitu2_function_top_wide_pane_ParamLimits

0x8b94,	// (0x0008ddb8) cell_vitu2_function_top_wide_pane

0xefdf,	// (0x00094203) bg_button_pane_cp012

0x8bb2,	// (0x0008ddd6) cell_vitu2_function_top_pane_g1

0xf028,	// (0x0009424c) bg_button_pane_cp013_ParamLimits

0xf028,	// (0x0009424c) bg_button_pane_cp013

0x8bc6,	// (0x0008ddea) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8bc6,	// (0x0008ddea) cell_vitu2_function_top_wide_pane_g1

0xefdf,	// (0x00094203) bg_popup_sub_pane_cp20

0x8bde,	// (0x0008de02) list_vitu2_match_list_pane

0xd163,	// (0x00092387) bg_popup_sub_pane_cp20_g1

0xd16b,	// (0x0009238f) bg_popup_sub_pane_cp20_g2

0xb37b,	// (0x0009059f) bg_popup_sub_pane_cp20_g3

0xd173,	// (0x00092397) bg_popup_sub_pane_cp20_g4

0xb35b,	// (0x0009057f) bg_popup_sub_pane_cp20_g5

0xd38d,	// (0x000925b1) bg_popup_sub_pane_cp20_g6

0xd183,	// (0x000923a7) bg_popup_sub_pane_cp20_g7

0xd18b,	// (0x000923af) bg_popup_sub_pane_cp20_g8

0xd193,	// (0x000923b7) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00094c6a) bg_popup_sub_pane_cp20_g

0xf044,	// (0x00094268) list_vitu2_match_list_item_pane_ParamLimits

0xf044,	// (0x00094268) list_vitu2_match_list_item_pane

0xf056,	// (0x0009427a) list_vitu2_match_list_item_pane_t1

0xb097,	// (0x000902bb) bg_popup_sub_pane_cp21

0xf064,	// (0x00094288) grid_vitu2_dropdown_list_pane

0x8c2d,	// (0x0008de51) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8c2d,	// (0x0008de51) cell_vitu2_dropdown_list_char_pane

0x8c4e,	// (0x0008de72) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8c4e,	// (0x0008de72) cell_vitu2_dropdown_list_ctrl_pane

0xd3ad,	// (0x000925d1) cell_vitu2_dropdown_list_char_pane_g1

0xd3b6,	// (0x000925da) cell_vitu2_dropdown_list_char_pane_g2

0xd3bf,	// (0x000925e3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00094c87) cell_vitu2_dropdown_list_char_pane_g

0x8c7a,	// (0x0008de9e) cell_vitu2_dropdown_list_char_pane_t1

0x8c88,	// (0x0008deac) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c88,	// (0x0008deac) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c98,	// (0x0008debc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c98,	// (0x0008debc) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ca9,	// (0x0008decd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ca9,	// (0x0008decd) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8cb9,	// (0x0008dedd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8cb9,	// (0x0008dedd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf06c,	// (0x00094290) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf06c,	// (0x00094290) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00094c8e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00094c8e) cell_vitu2_dropdown_list_ctrl_pane_g

0x8cd5,	// (0x0008def9) aid_size_cell_gallery2_ParamLimits

0x8cd5,	// (0x0008def9) aid_size_cell_gallery2

0x8ceb,	// (0x0008df0f) grid_gallery2_pane_ParamLimits

0x8ceb,	// (0x0008df0f) grid_gallery2_pane

0x8cff,	// (0x0008df23) scroll_pane_cp029_ParamLimits

0x8cff,	// (0x0008df23) scroll_pane_cp029

0x8d0b,	// (0x0008df2f) cell_gallery2_pane_ParamLimits

0x8d0b,	// (0x0008df2f) cell_gallery2_pane

0xd3c8,	// (0x000925ec) cell_gallery2_pane_g2

0x8d41,	// (0x0008df65) cell_gallery2_pane_g3

0xd3d2,	// (0x000925f6) cell_gallery2_pane_g4

0xd3da,	// (0x000925fe) cell_gallery2_pane_g5

0xbb23,	// (0x00090d47) grid_highlight_pane_cp10

0x8335,	// (0x0008d559) popup_vitu2_match_list_window_ParamLimits

0x834a,	// (0x0008d56e) popup_vitu2_query_window_ParamLimits

0x834a,	// (0x0008d56e) popup_vitu2_query_window

0xb097,	// (0x000902bb) bg_vitu2_candi_button_pane

0xd3ad,	// (0x000925d1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3b6,	// (0x000925da) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3bf,	// (0x000925e3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8d49,	// (0x0008df6d) bg_button_pane_cp015

0x8d53,	// (0x0008df77) bg_button_pane_cp016

0x8d5d,	// (0x0008df81) bg_button_pane_cp017

0x10b1,	// (0x000862d5) bg_popup_sub_pane_cp22

0xd3e2,	// (0x00092606) popup_vitu2_query_window_g1

0x8d85,	// (0x0008dfa9) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00094c99) popup_vitu2_query_window_g

0x8d93,	// (0x0008dfb7) popup_vitu2_query_window_t1_ParamLimits

0x8d93,	// (0x0008dfb7) popup_vitu2_query_window_t1

0x8dbb,	// (0x0008dfdf) popup_vitu2_query_window_t2_ParamLimits

0x8dbb,	// (0x0008dfdf) popup_vitu2_query_window_t2

0x8dcd,	// (0x0008dff1) popup_vitu2_query_window_t3_ParamLimits

0x8dcd,	// (0x0008dff1) popup_vitu2_query_window_t3

0x8df5,	// (0x0008e019) popup_vitu2_query_window_t4_ParamLimits

0x8df5,	// (0x0008e019) popup_vitu2_query_window_t4

0x8e09,	// (0x0008e02d) popup_vitu2_query_window_t5_ParamLimits

0x8e09,	// (0x0008e02d) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00094c9e) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00094c9e) popup_vitu2_query_window_t

0xd265,	// (0x00092489) main_cset_text_pane

0x877f,	// (0x0008d9a3) aid_area_touch_slider_ParamLimits

0x879b,	// (0x0008d9bf) cset_slider_pane_ParamLimits

0x87c5,	// (0x0008d9e9) main_cset_slider_pane_g1_ParamLimits

0x87da,	// (0x0008d9fe) main_cset_slider_pane_g2_ParamLimits

0xd286,	// (0x000924aa) main_cset_slider_pane_g3_ParamLimits

0xd286,	// (0x000924aa) main_cset_slider_pane_g3

0x87ef,	// (0x0008da13) main_cset_slider_pane_g4_ParamLimits

0x87ef,	// (0x0008da13) main_cset_slider_pane_g4

0x87fe,	// (0x0008da22) main_cset_slider_pane_g5_ParamLimits

0x87fe,	// (0x0008da22) main_cset_slider_pane_g5

0x880a,	// (0x0008da2e) main_cset_slider_pane_g6_ParamLimits

0x880a,	// (0x0008da2e) main_cset_slider_pane_g6

0xf9cf,	// (0x00094bf3) main_cset_slider_pane_g_ParamLimits

0xd2b6,	// (0x000924da) main_cset_slider_pane_t1_ParamLimits

0x8896,	// (0x0008daba) main_cset_slider_pane_t2_ParamLimits

0x88b0,	// (0x0008dad4) main_cset_slider_pane_t3_ParamLimits

0x88ca,	// (0x0008daee) main_cset_slider_pane_t4_ParamLimits

0x88e4,	// (0x0008db08) main_cset_slider_pane_t5_ParamLimits

0x8900,	// (0x0008db24) main_cset_slider_pane_t6_ParamLimits

0x8915,	// (0x0008db39) main_cset_slider_pane_t7_ParamLimits

0x893f,	// (0x0008db63) main_cset_slider_pane_t8_ParamLimits

0x893f,	// (0x0008db63) main_cset_slider_pane_t8

0x8967,	// (0x0008db8b) main_cset_slider_pane_t9_ParamLimits

0x8967,	// (0x0008db8b) main_cset_slider_pane_t9

0x898f,	// (0x0008dbb3) main_cset_slider_pane_t10_ParamLimits

0x898f,	// (0x0008dbb3) main_cset_slider_pane_t10

0x89b7,	// (0x0008dbdb) main_cset_slider_pane_t11_ParamLimits

0x89b7,	// (0x0008dbdb) main_cset_slider_pane_t11

0x89df,	// (0x0008dc03) main_cset_slider_pane_t12_ParamLimits

0x89df,	// (0x0008dc03) main_cset_slider_pane_t12

0x89fc,	// (0x0008dc20) main_cset_slider_pane_t13_ParamLimits

0x89fc,	// (0x0008dc20) main_cset_slider_pane_t13

0xf9f4,	// (0x00094c18) main_cset_slider_pane_t_ParamLimits

0x07a0,	// (0x000859c4) bg_popup_sub_pane_cp011

0xd3ee,	// (0x00092612) main_cset_text_pane_g1

0xd3f6,	// (0x0009261a) main_cset_text_pane_t1

0xd404,	// (0x00092628) main_cset_text_pane_t2

0xd412,	// (0x00092636) main_cset_text_pane_t3

0xd420,	// (0x00092644) main_cset_text_pane_t4

0xd42e,	// (0x00092652) main_cset_text_pane_t5

0xd43c,	// (0x00092660) main_cset_text_pane_t6

0xd44a,	// (0x0009266e) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00094ca9) main_cset_text_pane_t

0x07a0,	// (0x000859c4) main_cam4_burst_pane

0x07a0,	// (0x000859c4) main_cam5_pane

0x86ba,	// (0x0008d8de) bg_button_pane_cp019

0x86c3,	// (0x0008d8e7) bg_button_pane_cp020

0xd292,	// (0x000924b6) main_cset_slider_pane_g7_ParamLimits

0xd292,	// (0x000924b6) main_cset_slider_pane_g7

0xd29e,	// (0x000924c2) main_cset_slider_pane_g8_ParamLimits

0xd29e,	// (0x000924c2) main_cset_slider_pane_g8

0x881e,	// (0x0008da42) main_cset_slider_pane_g9_ParamLimits

0x881e,	// (0x0008da42) main_cset_slider_pane_g9

0x882a,	// (0x0008da4e) main_cset_slider_pane_g10_ParamLimits

0x882a,	// (0x0008da4e) main_cset_slider_pane_g10

0x8836,	// (0x0008da5a) main_cset_slider_pane_g11_ParamLimits

0x8836,	// (0x0008da5a) main_cset_slider_pane_g11

0x8842,	// (0x0008da66) main_cset_slider_pane_g12_ParamLimits

0x8842,	// (0x0008da66) main_cset_slider_pane_g12

0x884e,	// (0x0008da72) main_cset_slider_pane_g13_ParamLimits

0x884e,	// (0x0008da72) main_cset_slider_pane_g13

0x885a,	// (0x0008da7e) main_cset_slider_pane_g14_ParamLimits

0x885a,	// (0x0008da7e) main_cset_slider_pane_g14

0x8866,	// (0x0008da8a) main_cset_slider_pane_g15_ParamLimits

0x8866,	// (0x0008da8a) main_cset_slider_pane_g15

0xd2e4,	// (0x00092508) main_cset_slider_pane_t14_ParamLimits

0xd2e4,	// (0x00092508) main_cset_slider_pane_t14

0xd31d,	// (0x00092541) main_cset_slider_pane_t15_ParamLimits

0xd31d,	// (0x00092541) main_cset_slider_pane_t15

0x8e1d,	// (0x0008e041) aid_cam4_burst_size_cell_ParamLimits

0x8e1d,	// (0x0008e041) aid_cam4_burst_size_cell

0x8e3d,	// (0x0008e061) grid_cam4_burst_pane_ParamLimits

0x8e3d,	// (0x0008e061) grid_cam4_burst_pane

0x8e75,	// (0x0008e099) linegrid_cam4_burst_pane_ParamLimits

0x8e75,	// (0x0008e099) linegrid_cam4_burst_pane

0x8e9b,	// (0x0008e0bf) scroll_pane_cp30_ParamLimits

0x8e9b,	// (0x0008e0bf) scroll_pane_cp30

0x8ea7,	// (0x0008e0cb) cell_cam4_burst_pane_ParamLimits

0x8ea7,	// (0x0008e0cb) cell_cam4_burst_pane

0xd458,	// (0x0009267c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd458,	// (0x0009267c) linegrid_cam4_burst_pane_g1

0x8ef4,	// (0x0008e118) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ef4,	// (0x0008e118) linegrid_cam4_burst_pane_g2

0xd465,	// (0x00092689) linegrid_cam4_burst_pane_g3_ParamLimits

0xd465,	// (0x00092689) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00094cb8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00094cb8) linegrid_cam4_burst_pane_g

0x8f05,	// (0x0008e129) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f05,	// (0x0008e129) linegrid_cam4_burst_pane_g3_copy1

0xd472,	// (0x00092696) linegrid_cam4_burst_pane_g4_ParamLimits

0xd472,	// (0x00092696) linegrid_cam4_burst_pane_g4

0x8f1f,	// (0x0008e143) linegrid_cam4_burst_pane_g5_ParamLimits

0x8f1f,	// (0x0008e143) linegrid_cam4_burst_pane_g5

0x8f30,	// (0x0008e154) linegrid_cam4_burst_pane_g6_ParamLimits

0x8f30,	// (0x0008e154) linegrid_cam4_burst_pane_g6

0xd47f,	// (0x000926a3) linegrid_cam4_burst_pane_g7_ParamLimits

0xd47f,	// (0x000926a3) linegrid_cam4_burst_pane_g7

0x8f47,	// (0x0008e16b) cell_cam4_burst_pane_g1

0xd498,	// (0x000926bc) main_cam5_pane_t1_ParamLimits

0xd498,	// (0x000926bc) main_cam5_pane_t1

0xd4aa,	// (0x000926ce) main_cam5_pane_t2_ParamLimits

0xd4aa,	// (0x000926ce) main_cam5_pane_t2

0xd4bc,	// (0x000926e0) main_cam5_pane_t3_ParamLimits

0xd4bc,	// (0x000926e0) main_cam5_pane_t3

0xd4ce,	// (0x000926f2) main_cam5_pane_t4_ParamLimits

0xd4ce,	// (0x000926f2) main_cam5_pane_t4

0xd4e4,	// (0x00092708) main_cam5_pane_t5_ParamLimits

0xd4e4,	// (0x00092708) main_cam5_pane_t5

0xd4f6,	// (0x0009271a) main_cam5_pane_t6_ParamLimits

0xd4f6,	// (0x0009271a) main_cam5_pane_t6

0xd50a,	// (0x0009272e) main_cam5_pane_t7_ParamLimits

0xd50a,	// (0x0009272e) main_cam5_pane_t7

0xd51c,	// (0x00092740) main_cam5_pane_t8_ParamLimits

0xd51c,	// (0x00092740) main_cam5_pane_t8

0xd538,	// (0x0009275c) main_cam5_pane_t9_ParamLimits

0xd538,	// (0x0009275c) main_cam5_pane_t9

0xd54a,	// (0x0009276e) main_cam5_pane_t10_ParamLimits

0xd54a,	// (0x0009276e) main_cam5_pane_t10

0xd55c,	// (0x00092780) main_cam5_pane_t11_ParamLimits

0xd55c,	// (0x00092780) main_cam5_pane_t11

0xd56e,	// (0x00092792) main_cam5_pane_t12_ParamLimits

0xd56e,	// (0x00092792) main_cam5_pane_t12

0xd583,	// (0x000927a7) main_cam5_pane_t13_ParamLimits

0xd583,	// (0x000927a7) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00094cc4) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00094cc4) main_cam5_pane_t

0x2cac,	// (0x00087ed0) popup_scut_keymap_window_ParamLimits

0x2cac,	// (0x00087ed0) popup_scut_keymap_window

0x8f5a,	// (0x0008e17e) aid_size_cell_brow_shortcut

0xbb23,	// (0x00090d47) bg_popup_window_pane_cp010

0x8f66,	// (0x0008e18a) grid_scut_pane

0x8f72,	// (0x0008e196) cell_scut_pane_ParamLimits

0x8f72,	// (0x0008e196) cell_scut_pane

0x8f89,	// (0x0008e1ad) cell_scut_pane_g1

0xd5a0,	// (0x000927c4) cell_scut_pane_t1

0xd5af,	// (0x000927d3) cell_scut_pane_t2

0x8f92,	// (0x0008e1b6) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00094cdf) cell_scut_pane_t

0x6d84,	// (0x0008bfa8) main_mup3_pane_g8_ParamLimits

0x6d84,	// (0x0008bfa8) main_mup3_pane_g8

0x8233,	// (0x0008d457) area_vitu2_query_pane_ParamLimits

0x8233,	// (0x0008d457) area_vitu2_query_pane

0x8d67,	// (0x0008df8b) input_focus_pane_cp08

0xd5be,	// (0x000927e2) area_vitu2_query_pane_g1

0x8fa0,	// (0x0008e1c4) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00094ce6) area_vitu2_query_pane_g

0x8fb1,	// (0x0008e1d5) area_vitu2_query_pane_t1_ParamLimits

0x8fb1,	// (0x0008e1d5) area_vitu2_query_pane_t1

0x8fc5,	// (0x0008e1e9) area_vitu2_query_pane_t2_ParamLimits

0x8fc5,	// (0x0008e1e9) area_vitu2_query_pane_t2

0x8fd9,	// (0x0008e1fd) area_vitu2_query_pane_t3_ParamLimits

0x8fd9,	// (0x0008e1fd) area_vitu2_query_pane_t3

0xd5ca,	// (0x000927ee) area_vitu2_query_pane_t4_ParamLimits

0xd5ca,	// (0x000927ee) area_vitu2_query_pane_t4

0xd5f2,	// (0x00092816) area_vitu2_query_pane_t5_ParamLimits

0xd5f2,	// (0x00092816) area_vitu2_query_pane_t5

0xd61a,	// (0x0009283e) area_vitu2_query_pane_t6_ParamLimits

0xd61a,	// (0x0009283e) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00094ceb) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00094ceb) area_vitu2_query_pane_t

0x9001,	// (0x0008e225) bg_button_pane_cp018

0x900f,	// (0x0008e233) bg_button_pane_cp021

0x901b,	// (0x0008e23f) bg_button_pane_cp022

0x902c,	// (0x0008e250) input_focus_pane_cp09

0x4d14,	// (0x00089f38) aid_size_touch_mv_arrow_left

0x4d3d,	// (0x00089f61) aid_size_touch_mv_arrow_right

0x887e,	// (0x0008daa2) main_cset_slider_pane_g16_ParamLimits

0x887e,	// (0x0008daa2) main_cset_slider_pane_g16

0x888a,	// (0x0008daae) main_cset_slider_pane_g17_ParamLimits

0x888a,	// (0x0008daae) main_cset_slider_pane_g17

0x8f47,	// (0x0008e16b) cell_cam4_burst_pane_g1_ParamLimits

0x07a0,	// (0x000859c4) compa_mode_pane

0x8a98,	// (0x0008dcbc) popup_vtel_slider_window_g3_ParamLimits

0x8a98,	// (0x0008dcbc) popup_vtel_slider_window_g3

0x8aaf,	// (0x0008dcd3) popup_vtel_slider_window_g4_ParamLimits

0x8aaf,	// (0x0008dcd3) popup_vtel_slider_window_g4

0x8ac6,	// (0x0008dcea) popup_vtel_slider_window_t1_ParamLimits

0x8ac6,	// (0x0008dcea) popup_vtel_slider_window_t1

0x07a0,	// (0x000859c4) main_cl_pane

0x10d9,	// (0x000862fd) popup_imed_adjust2_window_ParamLimits

0x10a3,	// (0x000862c7) bg_tb_trans_pane_cp05_ParamLimits

0x1a06,	// (0x00086c2a) popup_imed_adjust2_window_g1_ParamLimits

0x1a15,	// (0x00086c39) popup_imed_adjust2_window_g2_ParamLimits

0x1a15,	// (0x00086c39) popup_imed_adjust2_window_g2

0x1a21,	// (0x00086c45) popup_imed_adjust2_window_g3_ParamLimits

0x1a21,	// (0x00086c45) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00094a65) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00094a65) popup_imed_adjust2_window_g

0x1a2d,	// (0x00086c51) popup_imed_adjust2_window_t1_ParamLimits

0x1a45,	// (0x00086c69) slider_imed_adjust_pane_ParamLimits

0x1a59,	// (0x00086c7d) slider_imed_adjust_pane_g1_ParamLimits

0x1a69,	// (0x00086c8d) slider_imed_adjust_pane_g2_ParamLimits

0x1a79,	// (0x00086c9d) slider_imed_adjust_pane_g3_ParamLimits

0x1a8a,	// (0x00086cae) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00094a6c) slider_imed_adjust_pane_g_ParamLimits

0x7f66,	// (0x0008d18a) aid_touch_area_cam4_ParamLimits

0x7f66,	// (0x0008d18a) aid_touch_area_cam4

0xefa9,	// (0x000941cd) battery_pane_cp01

0x801a,	// (0x0008d23e) main_camera4_pane_g6_ParamLimits

0x801a,	// (0x0008d23e) main_camera4_pane_g6

0x803d,	// (0x0008d261) main_camera4_pane_t2_ParamLimits

0x803d,	// (0x0008d261) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00094b6f) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00094b6f) main_camera4_pane_t

0x80a3,	// (0x0008d2c7) aid_touch_area_vid4_ParamLimits

0x80a3,	// (0x0008d2c7) aid_touch_area_vid4

0x8101,	// (0x0008d325) main_video4_pane_g5_ParamLimits

0x8101,	// (0x0008d325) main_video4_pane_g5

0x8128,	// (0x0008d34c) vid4_progress_pane_ParamLimits

0x8128,	// (0x0008d34c) vid4_progress_pane

0xd2aa,	// (0x000924ce) main_cset_slider_pane_g18_ParamLimits

0xd2aa,	// (0x000924ce) main_cset_slider_pane_g18

0xd48c,	// (0x000926b0) cell_cam4_burst_pane_g2_ParamLimits

0xd48c,	// (0x000926b0) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00094cbf) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00094cbf) cell_cam4_burst_pane_g

0x318b,	// (0x000883af) bg_cl_pane_ParamLimits

0x318b,	// (0x000883af) bg_cl_pane

0x903d,	// (0x0008e261) cl_header_pane_ParamLimits

0x903d,	// (0x0008e261) cl_header_pane

0x9051,	// (0x0008e275) cl_listscroll_pane_ParamLimits

0x9051,	// (0x0008e275) cl_listscroll_pane

0xd666,	// (0x0009288a) bg_cl_pane_g1

0xd66e,	// (0x00092892) bg_cl_pane_g2

0xd676,	// (0x0009289a) bg_cl_pane_g3

0xd67e,	// (0x000928a2) bg_cl_pane_g4

0xd686,	// (0x000928aa) bg_cl_pane_g5

0xd68e,	// (0x000928b2) bg_cl_pane_g6

0xd696,	// (0x000928ba) bg_cl_pane_g7

0xd69e,	// (0x000928c2) bg_cl_pane_g8

0xd6a6,	// (0x000928ca) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00094cfa) bg_cl_pane_g

0x9061,	// (0x0008e285) aid_height_cl_leading_ParamLimits

0x9061,	// (0x0008e285) aid_height_cl_leading

0x906d,	// (0x0008e291) aid_height_cl_text_ParamLimits

0x906d,	// (0x0008e291) aid_height_cl_text

0x10b1,	// (0x000862d5) bg_cl_header_pane_ParamLimits

0x10b1,	// (0x000862d5) bg_cl_header_pane

0x908c,	// (0x0008e2b0) cl_header_pane_g1_ParamLimits

0x908c,	// (0x0008e2b0) cl_header_pane_g1

0x90a2,	// (0x0008e2c6) cl_header_pane_t1_ParamLimits

0x90a2,	// (0x0008e2c6) cl_header_pane_t1

0xd6ae,	// (0x000928d2) cl_list_pane

0xd27d,	// (0x000924a1) hc_scroll_pane_cp01

0xb35b,	// (0x0009057f) bg_cl_header_pane_g1

0xd163,	// (0x00092387) bg_cl_header_pane_g2

0xb37b,	// (0x0009059f) bg_cl_header_pane_g3

0xd173,	// (0x00092397) bg_cl_header_pane_g4

0xd16b,	// (0x0009238f) bg_cl_header_pane_g5

0xd38d,	// (0x000925b1) bg_cl_header_pane_g6

0xd18b,	// (0x000923af) bg_cl_header_pane_g7

0xd193,	// (0x000923b7) bg_cl_header_pane_g8

0xd183,	// (0x000923a7) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00094d0d) bg_cl_header_pane_g

0x90bb,	// (0x0008e2df) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x90bb,	// (0x0008e2df) hc_cl_list_double_graphic_heading_pane

0x90cf,	// (0x0008e2f3) hc_cl_list_single_graphic_pane_ParamLimits

0x90cf,	// (0x0008e2f3) hc_cl_list_single_graphic_pane

0x90e9,	// (0x0008e30d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x90e9,	// (0x0008e30d) hc_cl_list_single_graphic_pane_g1

0x90f5,	// (0x0008e319) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x90f5,	// (0x0008e319) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00094d20) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00094d20) hc_cl_list_single_graphic_pane_g

0x9109,	// (0x0008e32d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9109,	// (0x0008e32d) hc_cl_list_single_graphic_pane_t1

0x90e9,	// (0x0008e30d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x90e9,	// (0x0008e30d) hc_cl_list_double_graphic_heading_pane_g1

0x911e,	// (0x0008e342) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x911e,	// (0x0008e342) hc_cl_list_double_graphic_heading_pane_g2

0x9132,	// (0x0008e356) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9132,	// (0x0008e356) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00094d25) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00094d25) hc_cl_list_double_graphic_heading_pane_g

0x9146,	// (0x0008e36a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9146,	// (0x0008e36a) hc_cl_list_double_graphic_heading_pane_t1

0x915b,	// (0x0008e37f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x915b,	// (0x0008e37f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00094d2c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00094d2c) hc_cl_list_double_graphic_heading_pane_t

0xf082,	// (0x000942a6) vid4_progress_pane_g1

0xf08e,	// (0x000942b2) vid4_progress_pane_g2

0xf09a,	// (0x000942be) vid4_progress_pane_g3

0xf0a9,	// (0x000942cd) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00094d31) vid4_progress_pane_g

0xf0c7,	// (0x000942eb) vid4_progress_pane_t1

0xf0dd,	// (0x00094301) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00094d3c) vid4_progress_pane_t

0xf108,	// (0x0009432c) wait_bar_pane_cp07

0x12eb,	// (0x0008650f) blid_firmament_pane_ParamLimits

0x132e,	// (0x00086552) popup_blid_sat_info2_window_g1

0x1352,	// (0x00086576) popup_blid_sat_info2_window_t3

0x1360,	// (0x00086584) popup_blid_sat_info2_window_t4

0x136e,	// (0x00086592) popup_blid_sat_info2_window_t5

0x137c,	// (0x000865a0) popup_blid_sat_info2_window_t6

0x138c,	// (0x000865b0) popup_blid_sat_info2_window_t7

0x139a,	// (0x000865be) popup_blid_sat_info2_window_t8

0x13a8,	// (0x000865cc) popup_blid_sat_info2_window_t9

0x13b6,	// (0x000865da) popup_blid_sat_info2_window_t10

0x147a,	// (0x0008669e) aid_firma_cardinal_ParamLimits

0x148e,	// (0x000866b2) blid_firmament_pane_t1_ParamLimits

0x14a5,	// (0x000866c9) blid_firmament_pane_t2_ParamLimits

0x14bc,	// (0x000866e0) blid_firmament_pane_t3_ParamLimits

0x14d3,	// (0x000866f7) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0009495e) blid_firmament_pane_t_ParamLimits

0x14ea,	// (0x0008670e) blid_sat_info_pane_ParamLimits

0x10b1,	// (0x000862d5) main_cam_set_pane_ParamLimits

0x75f2,	// (0x0008c816) aid_size_cell_colour_35_ParamLimits

0x7612,	// (0x0008c836) aid_size_cell_colour_112_ParamLimits

0x7632,	// (0x0008c856) aid_size_cell_effect_ParamLimits

0x10a3,	// (0x000862c7) bg_tb_trans_pane_cp02_ParamLimits

0xb57b,	// (0x0009079f) heading_imed_pane_ParamLimits

0x7652,	// (0x0008c876) listscroll_imed_pane_ParamLimits

0xc5b6,	// (0x000917da) popup_call2_audio_first_window_g5_ParamLimits

0xc5b6,	// (0x000917da) popup_call2_audio_first_window_g5

0x7c0d,	// (0x0008ce31) aid_size_touch_image3_arrow_left_ParamLimits

0x7c0d,	// (0x0008ce31) aid_size_touch_image3_arrow_left

0x7c39,	// (0x0008ce5d) aid_size_touch_image3_arrow_right_ParamLimits

0x7c39,	// (0x0008ce5d) aid_size_touch_image3_arrow_right

0xf0f3,	// (0x00094317) vid4_progress_pane_t3

0x7975,	// (0x0008cb99) main_hwr_training_symbol_option_pane_ParamLimits

0x7975,	// (0x0008cb99) main_hwr_training_symbol_option_pane

0xced0,	// (0x000920f4) popup_hwr_training_preview_window_ParamLimits

0xced0,	// (0x000920f4) popup_hwr_training_preview_window

0x7995,	// (0x0008cbb9) hwr_training_navi_pane_g5_ParamLimits

0x7995,	// (0x0008cbb9) hwr_training_navi_pane_g5

0xd151,	// (0x00092375) popup_char_count_window

0xefdf,	// (0x00094203) bg_popup_sub_pane_cp20_ParamLimits

0x8bde,	// (0x0008de02) list_vitu2_match_list_pane_ParamLimits

0x8bed,	// (0x0008de11) vitu2_page_scroll_pane_ParamLimits

0x8bed,	// (0x0008de11) vitu2_page_scroll_pane

0xd708,	// (0x0009292c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd708,	// (0x0009292c) list_single_hwr_training_symbol_option_pane

0xd71b,	// (0x0009293f) list_single_hwr_training_symbol_option_pane_g1

0xd723,	// (0x00092947) list_single_hwr_training_symbol_option_pane_t1

0xd731,	// (0x00092955) bg_button_pane_cp023

0xd73a,	// (0x0009295e) bg_button_pane_cp024

0x917a,	// (0x0008e39e) vitu2_page_scroll_pane_g1

0x9182,	// (0x0008e3a6) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00094d43) vitu2_page_scroll_pane_g

0x918a,	// (0x0008e3ae) vitu2_page_scroll_pane_t1

0x124b,	// (0x0008646f) popup_char_count_window_g1

0xd76d,	// (0x00092991) popup_char_count_window_g2

0xd776,	// (0x0009299a) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00094d48) popup_char_count_window_g

0xd77f,	// (0x000929a3) popup_char_count_window_t1

0x07a0,	// (0x000859c4) main_vded2_pane

0x19f2,	// (0x00086c16) aid_size_cell_imed_line

0x19fc,	// (0x00086c20) grid_imed_line_width_pane

0x818b,	// (0x0008d3af) vid4_indicators_pane_g4

0xd78d,	// (0x000929b1) cell_imed_line_width_pane_ParamLimits

0xd78d,	// (0x000929b1) cell_imed_line_width_pane

0xd7a1,	// (0x000929c5) cell_imed_line_width_pane_g1

0x1b8e,	// (0x00086db2) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00094d4f) cell_imed_line_width_pane_g

0x9199,	// (0x0008e3bd) main_vded2_pane_g1_ParamLimits

0x9199,	// (0x0008e3bd) main_vded2_pane_g1

0x91af,	// (0x0008e3d3) main_vded2_pane_g2_ParamLimits

0x91af,	// (0x0008e3d3) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00094d54) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00094d54) main_vded2_pane_g

0x91c1,	// (0x0008e3e5) vded2_slider_pane_ParamLimits

0x91c1,	// (0x0008e3e5) vded2_slider_pane

0x91d1,	// (0x0008e3f5) aid_size_touch_vded2_end

0x91db,	// (0x0008e3ff) aid_size_touch_vded2_playhead

0xd7aa,	// (0x000929ce) aid_size_touch_vded2_start

0xd7b2,	// (0x000929d6) vded2_slider_bg_pane

0xd7bb,	// (0x000929df) vded2_slider_pane_g1

0xd7c4,	// (0x000929e8) vded2_slider_pane_g2

0x91e5,	// (0x0008e409) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00094d59) vded2_slider_pane_g

0xd7cc,	// (0x000929f0) vded2_slider_bg_pane_g1

0xd7d5,	// (0x000929f9) vded2_slider_bg_pane_g2

0xd7de,	// (0x00092a02) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00094d60) vded2_slider_bg_pane_g

0x53bb,	// (0x0008a5df) aid_postcard_touch_down_pane_ParamLimits

0x53bb,	// (0x0008a5df) aid_postcard_touch_down_pane

0x53d1,	// (0x0008a5f5) aid_postcard_touch_up_pane_ParamLimits

0x53d1,	// (0x0008a5f5) aid_postcard_touch_up_pane

0x07a0,	// (0x000859c4) main_blid2_pane

0x10bf,	// (0x000862e3) popup_blid2_search_window

0x07a0,	// (0x000859c4) blid2_gps_pane

0x07a0,	// (0x000859c4) blid2_navig_pane

0x07a0,	// (0x000859c4) blid2_search_pane

0x07a0,	// (0x000859c4) blid2_tripm_pane

0x91f0,	// (0x0008e414) blid2_search_pane_g1_ParamLimits

0x91f0,	// (0x0008e414) blid2_search_pane_g1

0x9208,	// (0x0008e42c) blid2_search_pane_t1_ParamLimits

0x9208,	// (0x0008e42c) blid2_search_pane_t1

0x921a,	// (0x0008e43e) aid_size_cell_blid2_gps_ParamLimits

0x921a,	// (0x0008e43e) aid_size_cell_blid2_gps

0x9232,	// (0x0008e456) blid2_gps_pane_g1_ParamLimits

0x9232,	// (0x0008e456) blid2_gps_pane_g1

0x9246,	// (0x0008e46a) grid_blid2_satellite_pane_ParamLimits

0x9246,	// (0x0008e46a) grid_blid2_satellite_pane

0x9260,	// (0x0008e484) blid2_navig_pane_g1_ParamLimits

0x9260,	// (0x0008e484) blid2_navig_pane_g1

0x926c,	// (0x0008e490) blid2_navig_pane_t1_ParamLimits

0x926c,	// (0x0008e490) blid2_navig_pane_t1

0x9287,	// (0x0008e4ab) blid2_navig_pane_t2_ParamLimits

0x9287,	// (0x0008e4ab) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x00094d67) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x00094d67) blid2_navig_pane_t

0x92a2,	// (0x0008e4c6) blid2_navig_ring_pane_ParamLimits

0x92a2,	// (0x0008e4c6) blid2_navig_ring_pane

0x92bb,	// (0x0008e4df) blid2_speed_pane_ParamLimits

0x92bb,	// (0x0008e4df) blid2_speed_pane

0x92c7,	// (0x0008e4eb) blid2_tripm_pane_g1_ParamLimits

0x92c7,	// (0x0008e4eb) blid2_tripm_pane_g1

0x92e2,	// (0x0008e506) blid2_tripm_pane_g2_ParamLimits

0x92e2,	// (0x0008e506) blid2_tripm_pane_g2

0x92f6,	// (0x0008e51a) blid2_tripm_pane_g3_ParamLimits

0x92f6,	// (0x0008e51a) blid2_tripm_pane_g3

0x930a,	// (0x0008e52e) blid2_tripm_pane_g4_ParamLimits

0x930a,	// (0x0008e52e) blid2_tripm_pane_g4

0x931e,	// (0x0008e542) blid2_tripm_pane_g5_ParamLimits

0x931e,	// (0x0008e542) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00094d6c) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00094d6c) blid2_tripm_pane_g

0x9344,	// (0x0008e568) blid2_tripm_pane_t1_ParamLimits

0x9344,	// (0x0008e568) blid2_tripm_pane_t1

0x935f,	// (0x0008e583) blid2_tripm_pane_t2_ParamLimits

0x935f,	// (0x0008e583) blid2_tripm_pane_t2

0x937a,	// (0x0008e59e) blid2_tripm_pane_t3_ParamLimits

0x937a,	// (0x0008e59e) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x00094d79) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x00094d79) blid2_tripm_pane_t

0x93c1,	// (0x0008e5e5) cell_blid2_satellite_pane_ParamLimits

0x93c1,	// (0x0008e5e5) cell_blid2_satellite_pane

0x93df,	// (0x0008e603) cell_blid2_satellite_pane_g1

0xd7e7,	// (0x00092a0b) cell_blid2_satellite_pane_t1

0x14fa,	// (0x0008671e) blid2_speed_pane_g1

0xd7f5,	// (0x00092a19) blid2_speed_pane_t1

0xd803,	// (0x00092a27) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00094d82) blid2_speed_pane_t

0x14fa,	// (0x0008671e) blid2_navig_ring_pane_g1

0x93e8,	// (0x0008e60c) blid2_navig_ring_pane_g2

0x93f0,	// (0x0008e614) blid2_navig_ring_pane_g3

0x93f8,	// (0x0008e61c) blid2_navig_ring_pane_g4

0x9400,	// (0x0008e624) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00094d87) blid2_navig_ring_pane_g

0x07a0,	// (0x000859c4) bg_popup_window_pane_cp011

0xd811,	// (0x00092a35) popup_blid2_search_window_g1

0xd819,	// (0x00092a3d) popup_blid2_search_window_t1

0xd827,	// (0x00092a4b) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00094d92) popup_blid2_search_window_t

0xb26a,	// (0x0009048e) main_browser_pane_g1

0x318b,	// (0x000883af) main_browser_pane_ParamLimits

0xefdf,	// (0x00094203) bg_button_pane_cp011_ParamLimits

0x8456,	// (0x0008d67a) cell_vitu2_function_pane_g1_ParamLimits

0x10b1,	// (0x000862d5) bg_popup_sub_pane_cp22_ParamLimits

0x8d67,	// (0x0008df8b) input_focus_pane_cp08_ParamLimits

0x8d74,	// (0x0008df98) popup_vitu2_query_button_pane_ParamLimits

0x8d74,	// (0x0008df98) popup_vitu2_query_button_pane

0x8d49,	// (0x0008df6d) popup_vitu2_query_input_button_pane

0xd3e2,	// (0x00092606) popup_vitu2_query_window_g1_ParamLimits

0x8d85,	// (0x0008dfa9) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00094c99) popup_vitu2_query_window_g_ParamLimits

0x07a0,	// (0x000859c4) bg_button_pane_cp026

0x9408,	// (0x0008e62c) popup_vitu2_query_input_button_pane_g1

0x07a0,	// (0x000859c4) bg_button_pane_cp025

0xd835,	// (0x00092a59) popup_vitu2_query_button_pane_t1

0x6a5f,	// (0x0008bc83) main_mp3_pane_t6

0x6a6d,	// (0x0008bc91) popup_slider_window_cp01

0xefb9,	// (0x000941dd) cam4_battery_pane

0xefd7,	// (0x000941fb) cam4_battery_pane_cp02

0x9170,	// (0x0008e394) cam4_battery_pane_cp01

0xf07a,	// (0x0009429e) cam4_battery_pane_cp03

0xcfce,	// (0x000921f2) cam4_battery_pane_g1

0x14fa,	// (0x0008671e) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00094d97) cam4_battery_pane_g

0x13c4,	// (0x000865e8) popup_blid_sat_info2_window_t11

0x4d14,	// (0x00089f38) aid_size_touch_mv_arrow_left_ParamLimits

0x4d3d,	// (0x00089f61) aid_size_touch_mv_arrow_right_ParamLimits

0xba83,	// (0x00090ca7) navi_pane_g1_ParamLimits

0x4d66,	// (0x00089f8a) navi_pane_g2_ParamLimits

0x4d94,	// (0x00089fb8) navi_pane_g3_ParamLimits

0xf44c,	// (0x00094670) navi_pane_g_ParamLimits

0x4dec,	// (0x0008a010) navi_pane_mv_t1_ParamLimits

0x765e,	// (0x0008c882) grid_imed_effect_pane_ParamLimits

0xb1b3,	// (0x000903d7) aid_placing_vt_slider_lsc

0xb1bb,	// (0x000903df) aid_placing_vt_slider_prt

0x10b1,	// (0x000862d5) bg_tb_trans_pane_cp01_ParamLimits

0x1681,	// (0x000868a5) popup_image_details_window_g1_ParamLimits

0x1694,	// (0x000868b8) popup_image_details_window_g2_ParamLimits

0x16a9,	// (0x000868cd) popup_image_details_window_g3_ParamLimits

0x16a9,	// (0x000868cd) popup_image_details_window_g3

0xf77f,	// (0x000949a3) popup_image_details_window_g_ParamLimits

0x16bd,	// (0x000868e1) popup_image_details_window_t1_ParamLimits

0x16cf,	// (0x000868f3) popup_image_details_window_t2_ParamLimits

0x16e8,	// (0x0008690c) popup_image_details_window_t3_ParamLimits

0x16fc,	// (0x00086920) popup_image_details_window_t4_ParamLimits

0x1717,	// (0x0008693b) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x000949aa) popup_image_details_window_t_ParamLimits

0x9079,	// (0x0008e29d) cl_header_name_pane_ParamLimits

0x9079,	// (0x0008e29d) cl_header_name_pane

0x9410,	// (0x0008e634) cl_header_name_pane_t1_ParamLimits

0x9410,	// (0x0008e634) cl_header_name_pane_t1

0x9431,	// (0x0008e655) cl_header_name_pane_t2_ParamLimits

0x9431,	// (0x0008e655) cl_header_name_pane_t2

0x9473,	// (0x0008e697) cl_header_name_pane_t3_ParamLimits

0x9473,	// (0x0008e697) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00094d9c) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00094d9c) cl_header_name_pane_t

0x4dbd,	// (0x00089fe1) navi_pane_mv_g2_ParamLimits

0xd0f0,	// (0x00092314) field_vitu2_entry_pane_g1_ParamLimits

0xd0fc,	// (0x00092320) field_vitu2_entry_pane_g2_ParamLimits

0xd108,	// (0x0009232c) field_vitu2_entry_pane_g3_ParamLimits

0xd108,	// (0x0009232c) field_vitu2_entry_pane_g3

0xf974,	// (0x00094b98) field_vitu2_entry_pane_g_ParamLimits

0x83d2,	// (0x0008d5f6) cell_vitu2_itu_pane_g1_ParamLimits

0x83e2,	// (0x0008d606) cell_vitu2_itu_pane_g2_ParamLimits

0x83e2,	// (0x0008d606) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00094ba4) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00094ba4) cell_vitu2_itu_pane_g

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp05_ParamLimits

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp05

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp03

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp04

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp10_ParamLimits

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp10

0x901b,	// (0x0008e23f) bg_vkb2_func_pane_cp08

0x9001,	// (0x0008e225) bg_vkb2_func_pane_cp06

0x900f,	// (0x0008e233) bg_vkb2_func_pane_cp07

0xd743,	// (0x00092967) bg_vkb2_func_pane_cp11_ParamLimits

0xd743,	// (0x00092967) bg_vkb2_func_pane_cp11

0xd758,	// (0x0009297c) bg_vkb2_func_pane_cp12_ParamLimits

0xd758,	// (0x0009297c) bg_vkb2_func_pane_cp12

0x07a0,	// (0x000859c4) bg_vkb2_func_pane_cp09

0xd163,	// (0x00092387) bg_vkb2_func_pane_g1

0xb37b,	// (0x0009059f) bg_vkb2_func_pane_g2

0xd16b,	// (0x0009238f) bg_vkb2_func_pane_g3

0xd173,	// (0x00092397) bg_vkb2_func_pane_g4

0xd38d,	// (0x000925b1) bg_vkb2_func_pane_g5

0xd18b,	// (0x000923af) bg_vkb2_func_pane_g6

0xd193,	// (0x000923b7) bg_vkb2_func_pane_g7

0xd183,	// (0x000923a7) bg_vkb2_func_pane_g8

0xb35b,	// (0x0009057f) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00094da3) bg_vkb2_func_pane_g

0x9332,	// (0x0008e556) blid2_tripm_pane_g6_ParamLimits

0x9332,	// (0x0008e556) blid2_tripm_pane_g6

0xcf88,	// (0x000921ac) mp4_progress_pane_g1

0x93ad,	// (0x0008e5d1) blid2_tripm_values_pane_ParamLimits

0x93ad,	// (0x0008e5d1) blid2_tripm_values_pane

0x94a4,	// (0x0008e6c8) blid2_tripm_values_pane_t1

0x94b2,	// (0x0008e6d6) blid2_tripm_values_pane_t2

0x94c0,	// (0x0008e6e4) blid2_tripm_values_pane_t3

0x94ce,	// (0x0008e6f2) blid2_tripm_values_pane_t4

0x94dc,	// (0x0008e700) blid2_tripm_values_pane_t5

0x94ea,	// (0x0008e70e) blid2_tripm_values_pane_t6

0x94f8,	// (0x0008e71c) blid2_tripm_values_pane_t7

0x9506,	// (0x0008e72a) blid2_tripm_values_pane_t8

0x9514,	// (0x0008e738) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00094db6) blid2_tripm_values_pane_t

0x3daf,	// (0x00088fd3) call_video_pane_t1_ParamLimits

0x3dc3,	// (0x00088fe7) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x000944f9) call_video_pane_t_ParamLimits

0x52be,	// (0x0008a4e2) msg_header_pane_g1_ParamLimits

0xbcbe,	// (0x00090ee2) msg_header_pane_g2_ParamLimits

0xbcbe,	// (0x00090ee2) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00094713) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00094713) msg_header_pane_g

0x318b,	// (0x000883af) main_clock2_pane_ParamLimits

0x7383,	// (0x0008c5a7) grid_clock2_toolbar_pane_ParamLimits

0x7383,	// (0x0008c5a7) grid_clock2_toolbar_pane

0x7383,	// (0x0008c5a7) listscroll_clock2_pane_ParamLimits

0x7383,	// (0x0008c5a7) listscroll_clock2_pane

0x7460,	// (0x0008c684) main_clock2_pane_t3_ParamLimits

0x7460,	// (0x0008c684) main_clock2_pane_t3

0x747b,	// (0x0008c69f) main_clock2_pane_t4_ParamLimits

0x747b,	// (0x0008c69f) main_clock2_pane_t4

0xd843,	// (0x00092a67) cell_clock2_toolbar_pane

0xd84b,	// (0x00092a6f) cell_clock2_toolbar_pane_cp01

0xd84b,	// (0x00092a6f) cell_clock2_toolbar_pane_cp02

0xd853,	// (0x00092a77) cell_clock2_toolbar_pane_cp03

0xd85b,	// (0x00092a7f) list_clock2_pane

0xb9d6,	// (0x00090bfa) scroll_pane_cp10

0xd863,	// (0x00092a87) list_single_clock2_pane_ParamLimits

0xd863,	// (0x00092a87) list_single_clock2_pane

0xbb23,	// (0x00090d47) list_highlight_pane_cp08

0xd870,	// (0x00092a94) list_single_clock2_pane_t1

0xd87e,	// (0x00092aa2) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00094dc9) list_single_clock2_pane_t

0x07a0,	// (0x000859c4) bg_button_pane_cp10

0xd88c,	// (0x00092ab0) cell_clock2_toolbar_pane_g1

0x5347,	// (0x0008a56b) aid_main_viewer_pane_g1_ParamLimits

0x5347,	// (0x0008a56b) aid_main_viewer_pane_g1

0x5355,	// (0x0008a579) aid_main_viewer_pane_g2_ParamLimits

0x5355,	// (0x0008a579) aid_main_viewer_pane_g2

0x5363,	// (0x0008a587) aid_main_viewer_pane_g3_ParamLimits

0x5363,	// (0x0008a587) aid_main_viewer_pane_g3

0x5372,	// (0x0008a596) aid_main_viewer_pane_g4_ParamLimits

0x5372,	// (0x0008a596) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00094724) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00094724) aid_main_viewer_pane_g

0x5c86,	// (0x0008aeaa) main_calc_pane_ParamLimits

0x5c9a,	// (0x0008aebe) main_dialer2_pane_ParamLimits

0x07a0,	// (0x000859c4) main_cam6_pane

0x07a0,	// (0x000859c4) main_vid6_pane

0x738f,	// (0x0008c5b3) listscroll_gen_pane_cp06_ParamLimits

0x738f,	// (0x0008c5b3) listscroll_gen_pane_cp06

0x7496,	// (0x0008c6ba) main_clock2_pane_t5_ParamLimits

0x7496,	// (0x0008c6ba) main_clock2_pane_t5

0x74f3,	// (0x0008c717) aid_call2_pane_cp10_ParamLimits

0x7505,	// (0x0008c729) aid_call_pane_cp10_ParamLimits

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7517,	// (0x0008c73b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7517,	// (0x0008c73b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xba58,	// (0x00090c7c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00094a5a) popup_clock_analogue_window_cp10_g_ParamLimits

0x7529,	// (0x0008c74d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7bba,	// (0x0008cdde) cell_dialer2_keypad_pane_g2_ParamLimits

0x7bba,	// (0x0008cdde) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00094b40) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00094b40) cell_dialer2_keypad_pane_g

0x7bd6,	// (0x0008cdfa) cell_dialer2_keypad_pane_t1

0x8771,	// (0x0008d995) main_cset_text2_pane_ParamLimits

0x8771,	// (0x0008d995) main_cset_text2_pane

0xd5be,	// (0x000927e2) area_vitu2_query_pane_g1_ParamLimits

0x8fa0,	// (0x0008e1c4) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00094ce6) area_vitu2_query_pane_g_ParamLimits

0xd642,	// (0x00092866) area_vitu2_query_pane_t7_ParamLimits

0xd642,	// (0x00092866) area_vitu2_query_pane_t7

0x9001,	// (0x0008e225) bg_button_pane_cp018_ParamLimits

0x900f,	// (0x0008e233) bg_button_pane_cp021_ParamLimits

0x901b,	// (0x0008e23f) bg_button_pane_cp022_ParamLimits

0x901b,	// (0x0008e23f) bg_vkb2_func_pane_cp08_ParamLimits

0x9001,	// (0x0008e225) bg_vkb2_func_pane_cp06_ParamLimits

0x900f,	// (0x0008e233) bg_vkb2_func_pane_cp07_ParamLimits

0x902c,	// (0x0008e250) input_focus_pane_cp09_ParamLimits

0xf118,	// (0x0009433c) cam6_autofocus_pane_ParamLimits

0xf118,	// (0x0009433c) cam6_autofocus_pane

0x9522,	// (0x0008e746) cam6_image_uncrop_pane_ParamLimits

0x9522,	// (0x0008e746) cam6_image_uncrop_pane

0x9531,	// (0x0008e755) cam6_indi_pane_ParamLimits

0x9531,	// (0x0008e755) cam6_indi_pane

0x9547,	// (0x0008e76b) cam6_mode_pane_ParamLimits

0x9547,	// (0x0008e76b) cam6_mode_pane

0x9559,	// (0x0008e77d) cam6_timer_pane_ParamLimits

0x9559,	// (0x0008e77d) cam6_timer_pane

0x9565,	// (0x0008e789) cam6_zoom_pane_ParamLimits

0x9565,	// (0x0008e789) cam6_zoom_pane

0x9571,	// (0x0008e795) cam6_mode_pane_g1_ParamLimits

0x9571,	// (0x0008e795) cam6_mode_pane_g1

0x9581,	// (0x0008e7a5) cam6_mode_pane_g2_ParamLimits

0x9581,	// (0x0008e7a5) cam6_mode_pane_g2

0x9591,	// (0x0008e7b5) cam6_mode_pane_g3_ParamLimits

0x9591,	// (0x0008e7b5) cam6_mode_pane_g3

0x95a1,	// (0x0008e7c5) cam6_mode_pane_g4_ParamLimits

0x95a1,	// (0x0008e7c5) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00094dce) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00094dce) cam6_mode_pane_g

0xd894,	// (0x00092ab8) bg_tb_trans_pane_cp08_ParamLimits

0xd894,	// (0x00092ab8) bg_tb_trans_pane_cp08

0xd8a2,	// (0x00092ac6) cam6_battery_pane_ParamLimits

0xd8a2,	// (0x00092ac6) cam6_battery_pane

0xd8b8,	// (0x00092adc) cam6_indi_pane_g1_ParamLimits

0xd8b8,	// (0x00092adc) cam6_indi_pane_g1

0xd8ca,	// (0x00092aee) cam6_indi_pane_g2_ParamLimits

0xd8ca,	// (0x00092aee) cam6_indi_pane_g2

0xd8dc,	// (0x00092b00) cam6_indi_pane_g3_ParamLimits

0xd8dc,	// (0x00092b00) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00094dd7) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00094dd7) cam6_indi_pane_g

0xd8ee,	// (0x00092b12) cam6_indi_pane_t1_ParamLimits

0xd8ee,	// (0x00092b12) cam6_indi_pane_t1

0x95b1,	// (0x0008e7d5) cam6_autofocus_pane_g1

0x95b9,	// (0x0008e7dd) cam6_autofocus_pane_g2

0x95c1,	// (0x0008e7e5) cam6_autofocus_pane_g3

0x95c9,	// (0x0008e7ed) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00094dde) cam6_autofocus_pane_g

0xd914,	// (0x00092b38) cam6_timer_pane_g1

0xd91c,	// (0x00092b40) cam6_timer_pane_t1

0xd92a,	// (0x00092b4e) cam6_zoom_cont_pane

0xd932,	// (0x00092b56) cam6_zoom_pane_g1

0xd93a,	// (0x00092b5e) cam6_zoom_pane_g2

0x95d1,	// (0x0008e7f5) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00094de7) cam6_zoom_pane_g

0x14fa,	// (0x0008671e) cam6_battery_pane_g1

0x14fa,	// (0x0008671e) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00094967) cam6_battery_pane_g

0xd942,	// (0x00092b66) cam6_zoom_cont_pane_g1

0xd94b,	// (0x00092b6f) cam6_zoom_cont_pane_g2

0xd954,	// (0x00092b78) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00094dee) cam6_zoom_cont_pane_g

0x95ee,	// (0x0008e812) cam6_mode_pane_cp_ParamLimits

0x95ee,	// (0x0008e812) cam6_mode_pane_cp

0x9600,	// (0x0008e824) cam6_zoom_pane_cp_ParamLimits

0x9600,	// (0x0008e824) cam6_zoom_pane_cp

0x960c,	// (0x0008e830) vid6_image_uncrop_cif_pane_ParamLimits

0x960c,	// (0x0008e830) vid6_image_uncrop_cif_pane

0x961c,	// (0x0008e840) vid6_image_uncrop_nhd_pane_ParamLimits

0x961c,	// (0x0008e840) vid6_image_uncrop_nhd_pane

0x962b,	// (0x0008e84f) vid6_image_uncrop_vga_pane_ParamLimits

0x962b,	// (0x0008e84f) vid6_image_uncrop_vga_pane

0x963a,	// (0x0008e85e) vid6_image_uncrop_wvga_pane_ParamLimits

0x963a,	// (0x0008e85e) vid6_image_uncrop_wvga_pane

0x9649,	// (0x0008e86d) vid6_indi_pane_ParamLimits

0x9649,	// (0x0008e86d) vid6_indi_pane

0xd894,	// (0x00092ab8) bg_tb_trans_pane_cp09_ParamLimits

0xd894,	// (0x00092ab8) bg_tb_trans_pane_cp09

0xd96c,	// (0x00092b90) cam6_battery_pane_cp_ParamLimits

0xd96c,	// (0x00092b90) cam6_battery_pane_cp

0xd978,	// (0x00092b9c) vid6_indi_pane_g1_ParamLimits

0xd978,	// (0x00092b9c) vid6_indi_pane_g1

0xd98a,	// (0x00092bae) vid6_indi_pane_g2_ParamLimits

0xd98a,	// (0x00092bae) vid6_indi_pane_g2

0xd99c,	// (0x00092bc0) vid6_indi_pane_g3_ParamLimits

0xd99c,	// (0x00092bc0) vid6_indi_pane_g3

0xd9b1,	// (0x00092bd5) vid6_indi_pane_g4_ParamLimits

0xd9b1,	// (0x00092bd5) vid6_indi_pane_g4

0xd9c6,	// (0x00092bea) vid6_indi_pane_g5_ParamLimits

0xd9c6,	// (0x00092bea) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00094df5) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00094df5) vid6_indi_pane_g

0xd9e0,	// (0x00092c04) vid6_indi_pane_t1_ParamLimits

0xd9e0,	// (0x00092c04) vid6_indi_pane_t1

0xd9f6,	// (0x00092c1a) vid6_indi_pane_t2_ParamLimits

0xd9f6,	// (0x00092c1a) vid6_indi_pane_t2

0xda1e,	// (0x00092c42) vid6_indi_pane_t3_ParamLimits

0xda1e,	// (0x00092c42) vid6_indi_pane_t3

0xda46,	// (0x00092c6a) vid6_indi_pane_t4_ParamLimits

0xda46,	// (0x00092c6a) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00094e00) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00094e00) vid6_indi_pane_t

0xda6a,	// (0x00092c8e) wait_bar_pane_cp08

0x9661,	// (0x0008e885) main_cset_text2_pane_t1_ParamLimits

0x9661,	// (0x0008e885) main_cset_text2_pane_t1

0x95d9,	// (0x0008e7fd) listscroll_gen_pane_cp06_t1_ParamLimits

0x95d9,	// (0x0008e7fd) listscroll_gen_pane_cp06_t1

0x07a0,	// (0x000859c4) main_cam6_set_pane

0x805e,	// (0x0008d282) bg_tb_trans_pane_cp06_ParamLimits

0x806c,	// (0x0008d290) cam4_indicators_pane_g1_ParamLimits

0x8079,	// (0x0008d29d) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00094b74) cam4_indicators_pane_g_ParamLimits

0x8091,	// (0x0008d2b5) cam4_indicators_pane_t1_ParamLimits

0xefc9,	// (0x000941ed) bg_tb_trans_pane_cp07_ParamLimits

0x806c,	// (0x0008d290) vid4_indicators_pane_g1_ParamLimits

0x8171,	// (0x0008d395) vid4_indicators_pane_g2_ParamLimits

0x817e,	// (0x0008d3a2) vid4_indicators_pane_g3_ParamLimits

0x818b,	// (0x0008d3af) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00094b86) vid4_indicators_pane_g_ParamLimits

0x8197,	// (0x0008d3bb) vid4_indicators_pane_t1_ParamLimits

0xf082,	// (0x000942a6) vid4_progress_pane_g1_ParamLimits

0xf08e,	// (0x000942b2) vid4_progress_pane_g2_ParamLimits

0xf09a,	// (0x000942be) vid4_progress_pane_g3_ParamLimits

0xf0a9,	// (0x000942cd) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00094d31) vid4_progress_pane_g_ParamLimits

0xf0c7,	// (0x000942eb) vid4_progress_pane_t1_ParamLimits

0xf0dd,	// (0x00094301) vid4_progress_pane_t2_ParamLimits

0xf0f3,	// (0x00094317) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00094d3c) vid4_progress_pane_t_ParamLimits

0xf108,	// (0x0009432c) wait_bar_pane_cp07_ParamLimits

0x9681,	// (0x0008e8a5) main_cam6_set_pane_g2_ParamLimits

0x9681,	// (0x0008e8a5) main_cam6_set_pane_g2

0x96a5,	// (0x0008e8c9) main_cset6_listscroll_pane_ParamLimits

0x96a5,	// (0x0008e8c9) main_cset6_listscroll_pane

0x96c1,	// (0x0008e8e5) main_cset6_slider_pane_ParamLimits

0x96c1,	// (0x0008e8e5) main_cset6_slider_pane

0x96d7,	// (0x0008e8fb) main_cset6_text2_pane_ParamLimits

0x96d7,	// (0x0008e8fb) main_cset6_text2_pane

0xda79,	// (0x00092c9d) main_cset6_text_pane

0xda81,	// (0x00092ca5) main_cset_list_pane_copy1_ParamLimits

0xda81,	// (0x00092ca5) main_cset_list_pane_copy1

0xda91,	// (0x00092cb5) scroll_pane_cp028_copy1

0x96e5,	// (0x0008e909) cset_list_set_pane_copy1

0x96f8,	// (0x0008e91c) aid_position_infowindow_above_copy1

0x9700,	// (0x0008e924) aid_position_infowindow_below_copy1

0xda9a,	// (0x00092cbe) cset_list_set_pane_g1_copy1

0x8a49,	// (0x0008dc6d) cset_list_set_pane_g3_copy1_ParamLimits

0x8a49,	// (0x0008dc6d) cset_list_set_pane_g3_copy1

0x8a58,	// (0x0008dc7c) cset_list_set_pane_t1_copy1_ParamLimits

0x8a58,	// (0x0008dc7c) cset_list_set_pane_t1_copy1

0x10b1,	// (0x000862d5) list_highlight_pane_cp021_copy1_ParamLimits

0x10b1,	// (0x000862d5) list_highlight_pane_cp021_copy1

0xdaa2,	// (0x00092cc6) cset6_slider_pane_ParamLimits

0xdaa2,	// (0x00092cc6) cset6_slider_pane

0xdace,	// (0x00092cf2) main_cset6_slider_pane_g1_ParamLimits

0xdace,	// (0x00092cf2) main_cset6_slider_pane_g1

0x9708,	// (0x0008e92c) main_cset6_slider_pane_g2_ParamLimits

0x9708,	// (0x0008e92c) main_cset6_slider_pane_g2

0xd292,	// (0x000924b6) main_cset6_slider_pane_g3_ParamLimits

0xd292,	// (0x000924b6) main_cset6_slider_pane_g3

0x8836,	// (0x0008da5a) main_cset6_slider_pane_g4_ParamLimits

0x8836,	// (0x0008da5a) main_cset6_slider_pane_g4

0x887e,	// (0x0008daa2) main_cset6_slider_pane_g5_ParamLimits

0x887e,	// (0x0008daa2) main_cset6_slider_pane_g5

0xd292,	// (0x000924b6) main_cset6_slider_pane_g7_ParamLimits

0xd292,	// (0x000924b6) main_cset6_slider_pane_g7

0xd29e,	// (0x000924c2) main_cset6_slider_pane_g8_ParamLimits

0xd29e,	// (0x000924c2) main_cset6_slider_pane_g8

0x881e,	// (0x0008da42) main_cset6_slider_pane_g9_ParamLimits

0x881e,	// (0x0008da42) main_cset6_slider_pane_g9

0x882a,	// (0x0008da4e) main_cset6_slider_pane_g10_ParamLimits

0x882a,	// (0x0008da4e) main_cset6_slider_pane_g10

0x8836,	// (0x0008da5a) main_cset6_slider_pane_g11_ParamLimits

0x8836,	// (0x0008da5a) main_cset6_slider_pane_g11

0x8842,	// (0x0008da66) main_cset6_slider_pane_g12_ParamLimits

0x8842,	// (0x0008da66) main_cset6_slider_pane_g12

0x884e,	// (0x0008da72) main_cset6_slider_pane_g13_ParamLimits

0x884e,	// (0x0008da72) main_cset6_slider_pane_g13

0x885a,	// (0x0008da7e) main_cset6_slider_pane_g14_ParamLimits

0x885a,	// (0x0008da7e) main_cset6_slider_pane_g14

0x9730,	// (0x0008e954) main_cset6_slider_pane_g15_ParamLimits

0x9730,	// (0x0008e954) main_cset6_slider_pane_g15

0x887e,	// (0x0008daa2) main_cset6_slider_pane_g16_ParamLimits

0x887e,	// (0x0008daa2) main_cset6_slider_pane_g16

0x888a,	// (0x0008daae) main_cset6_slider_pane_g17_ParamLimits

0x888a,	// (0x0008daae) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00094e09) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00094e09) main_cset6_slider_pane_g

0xdaf6,	// (0x00092d1a) main_cset6_slider_pane_t1_ParamLimits

0xdaf6,	// (0x00092d1a) main_cset6_slider_pane_t1

0x9748,	// (0x0008e96c) main_cset6_slider_pane_t2_ParamLimits

0x9748,	// (0x0008e96c) main_cset6_slider_pane_t2

0x9773,	// (0x0008e997) main_cset6_slider_pane_t3_ParamLimits

0x9773,	// (0x0008e997) main_cset6_slider_pane_t3

0x979e,	// (0x0008e9c2) main_cset6_slider_pane_t4_ParamLimits

0x979e,	// (0x0008e9c2) main_cset6_slider_pane_t4

0x97c9,	// (0x0008e9ed) main_cset6_slider_pane_t5_ParamLimits

0x97c9,	// (0x0008e9ed) main_cset6_slider_pane_t5

0xdb37,	// (0x00092d5b) main_cset6_slider_pane_t7_ParamLimits

0xdb37,	// (0x00092d5b) main_cset6_slider_pane_t7

0x97f4,	// (0x0008ea18) main_cset6_slider_pane_t8_ParamLimits

0x97f4,	// (0x0008ea18) main_cset6_slider_pane_t8

0x9818,	// (0x0008ea3c) main_cset6_slider_pane_t9_ParamLimits

0x9818,	// (0x0008ea3c) main_cset6_slider_pane_t9

0x983c,	// (0x0008ea60) main_cset6_slider_pane_t10_ParamLimits

0x983c,	// (0x0008ea60) main_cset6_slider_pane_t10

0x9860,	// (0x0008ea84) main_cset6_slider_pane_t11_ParamLimits

0x9860,	// (0x0008ea84) main_cset6_slider_pane_t11

0xdb6d,	// (0x00092d91) main_cset6_slider_pane_t14_ParamLimits

0xdb6d,	// (0x00092d91) main_cset6_slider_pane_t14

0xdba6,	// (0x00092dca) main_cset6_slider_pane_t15_ParamLimits

0xdba6,	// (0x00092dca) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00094e2e) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00094e2e) main_cset6_slider_pane_t

0xdbdf,	// (0x00092e03) cset_slider_pane_g1_copy1

0xdbe8,	// (0x00092e0c) cset_slider_pane_g2_copy1

0xdbf1,	// (0x00092e15) cset_slider_pane_g3_copy1

0x07a0,	// (0x000859c4) bg_popup_sub_pane_cp011_copy1

0xd3ee,	// (0x00092612) main_cset_text_pane_g1_copy1

0xd3f6,	// (0x0009261a) main_cset_text_pane_t1_copy1

0xd404,	// (0x00092628) main_cset_text_pane_t2_copy1

0xd412,	// (0x00092636) main_cset_text_pane_t3_copy1

0xd420,	// (0x00092644) main_cset_text_pane_t4_copy1

0xd42e,	// (0x00092652) main_cset_text_pane_t5_copy1

0xd43c,	// (0x00092660) main_cset_text_pane_t6_copy1

0xd44a,	// (0x0009266e) main_cset_text_pane_t7_copy1

0x9661,	// (0x0008e885) main_cset_text2_pane_t1_copy1

0x07a0,	// (0x000859c4) main_ncimui_pane

0x5ed0,	// (0x0008b0f4) popup_query_ncimui_window_ParamLimits

0x5ed0,	// (0x0008b0f4) popup_query_ncimui_window

0xcd15,	// (0x00091f39) field_cale_ev2_pane_g4_ParamLimits

0xcd15,	// (0x00091f39) field_cale_ev2_pane_g4

0x7a92,	// (0x0008ccb6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7a92,	// (0x0008ccb6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00094b1b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00094b1b) cell_video_dialer_keypad_pane_g

0x7aaa,	// (0x0008ccce) cell_video_dialer_keypad_pane_t1

0x07a0,	// (0x000859c4) bg_popup_window_pane_cp012

0xb8a6,	// (0x00090aca) heading_pane_cp06

0xdce9,	// (0x00092f0d) ncim_query_content_pane

0x07a0,	// (0x000859c4) bg_popup_heading_pane_cp01

0xdcf1,	// (0x00092f15) ncim_heading_pane_t1

0xdcff,	// (0x00092f23) ncim_indicator_popup_pane

0xdd11,	// (0x00092f35) ncim_query_button_pane

0xdd25,	// (0x00092f49) ncim_query_content_pane_t1

0xdd37,	// (0x00092f5b) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00094e6d) ncim_query_content_pane_t

0xdd71,	// (0x00092f95) ncim_query_list_pane

0xdd83,	// (0x00092fa7) ncim_query_popup_pane

0xdcff,	// (0x00092f23) ncim_indicator_popup_pane_ParamLimits

0x994a,	// (0x0008eb6e) ncim_query_content_pane_g1_ParamLimits

0x994a,	// (0x0008eb6e) ncim_query_content_pane_g1

0xdd25,	// (0x00092f49) ncim_query_content_pane_t1_ParamLimits

0xdd37,	// (0x00092f5b) ncim_query_content_pane_t2_ParamLimits

0x9956,	// (0x0008eb7a) ncim_query_content_pane_t3_ParamLimits

0x9956,	// (0x0008eb7a) ncim_query_content_pane_t3

0x997e,	// (0x0008eba2) ncim_query_content_pane_t4_ParamLimits

0x997e,	// (0x0008eba2) ncim_query_content_pane_t4

0x99a6,	// (0x0008ebca) ncim_query_content_pane_t5_ParamLimits

0x99a6,	// (0x0008ebca) ncim_query_content_pane_t5

0xdd49,	// (0x00092f6d) ncim_query_content_pane_t6_ParamLimits

0xdd49,	// (0x00092f6d) ncim_query_content_pane_t6

0xfc49,	// (0x00094e6d) ncim_query_content_pane_t_ParamLimits

0xdd71,	// (0x00092f95) ncim_query_list_pane_ParamLimits

0xdd83,	// (0x00092fa7) ncim_query_popup_pane_ParamLimits

0xdd97,	// (0x00092fbb) wait_bar_pane_cp04

0x07a0,	// (0x000859c4) input_focus_pane_cp011

0xdd9f,	// (0x00092fc3) ncim_query_popup_pane_t1

0xddad,	// (0x00092fd1) ncim_list_query_list_pane_ParamLimits

0xddad,	// (0x00092fd1) ncim_list_query_list_pane

0x07a0,	// (0x000859c4) bg_button_pane_cp027

0xddc0,	// (0x00092fe4) ncim_query_button_pane_g1

0x07a0,	// (0x000859c4) list_highlight_pane_cp012

0xddca,	// (0x00092fee) ncim_list_query_list_pane_g1

0xddd2,	// (0x00092ff6) ncim_list_query_list_pane_t1

0x8085,	// (0x0008d2a9) cam4_indicators_pane_g3_ParamLimits

0x8085,	// (0x0008d2a9) cam4_indicators_pane_g3

0x8085,	// (0x0008d2a9) vid4_indicators_pane_g5_ParamLimits

0x8085,	// (0x0008d2a9) vid4_indicators_pane_g5

0xf0b8,	// (0x000942dc) vid4_progress_pane_g5_ParamLimits

0xf0b8,	// (0x000942dc) vid4_progress_pane_g5

0x9892,	// (0x0008eab6) main_ncimui_pane_g1

0x98d8,	// (0x0008eafc) ncimui_group_query_pane_ParamLimits

0x98d8,	// (0x0008eafc) ncimui_group_query_pane

0x990c,	// (0x0008eb30) ncimui_list_pane_ParamLimits

0x990c,	// (0x0008eb30) ncimui_list_pane

0x9926,	// (0x0008eb4a) ncimui_text_pane_ParamLimits

0x9926,	// (0x0008eb4a) ncimui_text_pane

0x99ce,	// (0x0008ebf2) ncimui_text_pane_t1_ParamLimits

0x99ce,	// (0x0008ebf2) ncimui_text_pane_t1

0xdde0,	// (0x00093004) ncimui_list_single_graphic_pane_ParamLimits

0xdde0,	// (0x00093004) ncimui_list_single_graphic_pane

0x99eb,	// (0x0008ec0f) ncimui_query_pane_ParamLimits

0x99eb,	// (0x0008ec0f) ncimui_query_pane

0x07a0,	// (0x000859c4) list_highlight_pane_cp013

0xddf0,	// (0x00093014) ncim_list_query_list_pane_t1_copy1

0xddca,	// (0x00092fee) ncim_list_single_graphic_pane_g1

0xddfe,	// (0x00093022) ncim_query_button_pane_cp01

0xde06,	// (0x0009302a) ncim_query_entry_pane_ParamLimits

0xde06,	// (0x0009302a) ncim_query_entry_pane

0xde16,	// (0x0009303a) ncimui_query_pane_g1

0xde1e,	// (0x00093042) ncimui_query_pane_t1_ParamLimits

0xde1e,	// (0x00093042) ncimui_query_pane_t1

0x07a0,	// (0x000859c4) input_focus_pane_cp012

0xdd9f,	// (0x00092fc3) ncim_query_entry_pane_t1

0x318b,	// (0x000883af) main_im_pane_ParamLimits

0x10b1,	// (0x000862d5) main_mobtv_pane_ParamLimits

0x10b1,	// (0x000862d5) main_mobtv_pane

0x881e,	// (0x0008da42) main_cset6_slider_pane_g18_ParamLimits

0x881e,	// (0x0008da42) main_cset6_slider_pane_g18

0x884e,	// (0x0008da72) main_cset6_slider_pane_g19_ParamLimits

0x884e,	// (0x0008da72) main_cset6_slider_pane_g19

0xde34,	// (0x00093058) bg_main_mobtv_pane_ParamLimits

0xde34,	// (0x00093058) bg_main_mobtv_pane

0x99fb,	// (0x0008ec1f) main_mobtv_info_pane

0x9a04,	// (0x0008ec28) main_mobtv_loading_pane_ParamLimits

0x9a04,	// (0x0008ec28) main_mobtv_loading_pane

0xde42,	// (0x00093066) main_mobtv_pg_channel_list_pane

0xde4c,	// (0x00093070) main_mobtv_pg_hdr_pane

0x9a11,	// (0x0008ec35) main_mobtv_programe_curr_pane_ParamLimits

0x9a11,	// (0x0008ec35) main_mobtv_programe_curr_pane

0x9a1e,	// (0x0008ec42) main_mobtv_programe_next_pane_ParamLimits

0x9a1e,	// (0x0008ec42) main_mobtv_programe_next_pane

0xde55,	// (0x00093079) popup_mobtv_noti_window

0x14fa,	// (0x0008671e) main_tv_pg_hdr_pane_g1

0xde5d,	// (0x00093081) main_tv_pg_hdr_pane_g2

0xde65,	// (0x00093089) main_tv_pg_hdr_pane_g3

0xde6d,	// (0x00093091) main_tv_pg_hdr_pane_g4

0xde75,	// (0x00093099) main_tv_pg_hdr_pane_g5

0xde7f,	// (0x000930a3) main_tv_pg_hdr_pane_g6

0xde89,	// (0x000930ad) main_tv_pg_hdr_pane_g7

0xde93,	// (0x000930b7) main_tv_pg_hdr_pane_g8

0xde9d,	// (0x000930c1) main_tv_pg_hdr_pane_g9

0xdea7,	// (0x000930cb) main_tv_pg_hdr_pane_g10

0xdeb1,	// (0x000930d5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x00094e7a) main_tv_pg_hdr_pane_g

0xdebb,	// (0x000930df) main_tv_pg_hdr_pane_t1

0xdec9,	// (0x000930ed) main_tv_pg_hdr_pane_t2

0xded7,	// (0x000930fb) main_tv_pg_hdr_pane_t3

0xdee7,	// (0x0009310b) main_tv_pg_hdr_pane_t4

0xdef7,	// (0x0009311b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00094e91) main_tv_pg_hdr_pane_t

0xdf07,	// (0x0009312b) single_mobtv_pg_channel_pane_ParamLimits

0xdf07,	// (0x0009312b) single_mobtv_pg_channel_pane

0xdf19,	// (0x0009313d) single_mobtv_pg_channel_table_pane

0xdf22,	// (0x00093146) single_mobtv_pg_channel_thumb_pane

0xdf2b,	// (0x0009314f) single_tv_pg_channel_pane_g1

0xdf34,	// (0x00093158) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00094e9c) single_tv_pg_channel_pane_g

0x1761,	// (0x00086985) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1761,	// (0x00086985) bg_single_mobtv_pg_channel_thumb_pane

0xdf3d,	// (0x00093161) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf3d,	// (0x00093161) single_mobtv_pg_channel_thumb_pane_g1

0xdf4b,	// (0x0009316f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf4b,	// (0x0009316f) single_mobtv_pg_channel_thumb_pane_g2

0xdf57,	// (0x0009317b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf57,	// (0x0009317b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00094ea1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00094ea1) single_mobtv_pg_channel_thumb_pane_g

0xdf63,	// (0x00093187) single_mobtv_pg_channel_thumb_pane_t1

0xdf71,	// (0x00093195) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x00094ea8) single_mobtv_pg_channel_thumb_pane_t

0x14fa,	// (0x0008671e) bg_single_mobtv_pg_channel_table_pane_g1

0x14fa,	// (0x0008671e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00094967) bg_single_mobtv_pg_channel_table_pane_g

0xdf7f,	// (0x000931a3) single_mobtv_pg_channel_table_pane_t1

0xdf8d,	// (0x000931b1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00094ead) single_mobtv_pg_channel_table_pane_t

0x9a33,	// (0x0008ec57) main_mobtv_info_pane_g1_ParamLimits

0x9a33,	// (0x0008ec57) main_mobtv_info_pane_g1

0x9a51,	// (0x0008ec75) main_mobtv_info_pane_t1_ParamLimits

0x9a51,	// (0x0008ec75) main_mobtv_info_pane_t1

0x9ac9,	// (0x0008eced) main_mobtv_info_pane_t2_ParamLimits

0x9ac9,	// (0x0008eced) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00094eb7) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00094eb7) main_mobtv_info_pane_t

0x9b58,	// (0x0008ed7c) wait_bar_pane_cp05

0x9b6a,	// (0x0008ed8e) main_mobtv_loading_pane_g1_ParamLimits

0x9b6a,	// (0x0008ed8e) main_mobtv_loading_pane_g1

0x9b7d,	// (0x0008eda1) main_mobtv_loading_pane_g2_ParamLimits

0x9b7d,	// (0x0008eda1) main_mobtv_loading_pane_g2

0x9b89,	// (0x0008edad) main_mobtv_loading_pane_g3_ParamLimits

0x9b89,	// (0x0008edad) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00094ebe) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00094ebe) main_mobtv_loading_pane_g

0xdf9b,	// (0x000931bf) main_mobtv_loading_pane_t1_ParamLimits

0xdf9b,	// (0x000931bf) main_mobtv_loading_pane_t1

0xdfb3,	// (0x000931d7) main_mobtv_loading_pane_t2_ParamLimits

0xdfb3,	// (0x000931d7) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00094ec5) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00094ec5) main_mobtv_loading_pane_t

0x9b9c,	// (0x0008edc0) wait_bar_pane_cp06_ParamLimits

0x9b9c,	// (0x0008edc0) wait_bar_pane_cp06

0xdfd7,	// (0x000931fb) main_mobtv_programe_curr_pane_t1

0xdfe5,	// (0x00093209) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00094eca) main_mobtv_programe_curr_pane_t

0xdff3,	// (0x00093217) main_mobtv_programe_next_pane_t1

0xe001,	// (0x00093225) main_mobtv_programe_next_pane_t2

0xe00f,	// (0x00093233) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00094ecf) main_mobtv_programe_next_pane_t

0x07a0,	// (0x000859c4) bg_popup_mobtv_noti_window_pane

0xe01d,	// (0x00093241) popup_mobtv_noti_window_g1

0xe025,	// (0x00093249) popup_mobtv_noti_window_t1

0xe033,	// (0x00093257) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00094ed6) popup_mobtv_noti_window_t

0x14fa,	// (0x0008671e) bg_popup_mobtv_noti_window_pane_g1

0x07a0,	// (0x000859c4) sc_clock_pane

0x07a0,	// (0x000859c4) main_fs_bigclock_pane

0x9397,	// (0x0008e5bb) blid2_tripm_pane_t4_ParamLimits

0x9397,	// (0x0008e5bb) blid2_tripm_pane_t4

0x9bab,	// (0x0008edcf) sc_clock_pane_g1_ParamLimits

0x9bab,	// (0x0008edcf) sc_clock_pane_g1

0x9bbd,	// (0x0008ede1) sc_clock_pane_t1_ParamLimits

0x9bbd,	// (0x0008ede1) sc_clock_pane_t1

0x9bdf,	// (0x0008ee03) sc_clock_pane_t2_ParamLimits

0x9bdf,	// (0x0008ee03) sc_clock_pane_t2

0x9bf7,	// (0x0008ee1b) sc_clock_pane_t3_ParamLimits

0x9bf7,	// (0x0008ee1b) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00094edb) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00094edb) sc_clock_pane_t

0xa9d2,	// (0x0008fbf6) main_fs_bigclock_indicator_pane_ParamLimits

0xa9d2,	// (0x0008fbf6) main_fs_bigclock_indicator_pane

0x1731,	// (0x00086955) main_fs_bigclock_pane_g1_ParamLimits

0x1731,	// (0x00086955) main_fs_bigclock_pane_g1

0xa9de,	// (0x0008fc02) main_fs_bigclock_pane_t1_ParamLimits

0xa9de,	// (0x0008fc02) main_fs_bigclock_pane_t1

0xa9f0,	// (0x0008fc14) main_fs_bigclock_pane_t2_ParamLimits

0xa9f0,	// (0x0008fc14) main_fs_bigclock_pane_t2

0xaa02,	// (0x0008fc26) main_fs_bigclock_pane_t3_ParamLimits

0xaa02,	// (0x0008fc26) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x000950da) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x000950da) main_fs_bigclock_pane_t

0xec31,	// (0x00093e55) main_fs_bigclock_indicator_pane_g1

0xdd19,	// (0x00092f3d) ncim_query_content_pane_g2_ParamLimits

0xdd19,	// (0x00092f3d) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x00094e68) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x00094e68) ncim_query_content_pane_g

0x9c0e,	// (0x0008ee32) sc_clock_pane_t4_ParamLimits

0x9c0e,	// (0x0008ee32) sc_clock_pane_t4

0x10b1,	// (0x000862d5) main_radioblah_pane

0xd079,	// (0x0009229d) cell_call4_button_pane_t1_copy1_ParamLimits

0xd079,	// (0x0009229d) cell_call4_button_pane_t1_copy1

0x989a,	// (0x0008eabe) main_ncimui_pane_t1_ParamLimits

0x989a,	// (0x0008eabe) main_ncimui_pane_t1

0x98ac,	// (0x0008ead0) main_ncimui_pane_t2_ParamLimits

0x98ac,	// (0x0008ead0) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00094e61) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00094e61) main_ncimui_pane_t

0xe163,	// (0x00093387) main_radioblah_anim_pane_ParamLimits

0xe163,	// (0x00093387) main_radioblah_anim_pane

0xe174,	// (0x00093398) main_radioblah_info_pane_ParamLimits

0xe174,	// (0x00093398) main_radioblah_info_pane

0xe188,	// (0x000933ac) main_radioblah_pane_t1_ParamLimits

0xe188,	// (0x000933ac) main_radioblah_pane_t1

0xe1a4,	// (0x000933c8) main_radioblah_pane_t2_ParamLimits

0xe1a4,	// (0x000933c8) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00094efc) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00094efc) main_radioblah_pane_t

0x9cb7,	// (0x0008eedb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9cb7,	// (0x0008eedb) main_radioblah_rocker_ctrl_pane

0xe1ec,	// (0x00093410) main_radioblah_info_pane_t1_ParamLimits

0xe1ec,	// (0x00093410) main_radioblah_info_pane_t1

0x9d0f,	// (0x0008ef33) main_radioblah_info_pane_t2_ParamLimits

0x9d0f,	// (0x0008ef33) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00094f05) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00094f05) main_radioblah_info_pane_t

0x14fa,	// (0x0008671e) main_radioblah_rocker_ctrl_pane_g1

0x9dc1,	// (0x0008efe5) main_radioblah_rocker_ctrl_pane_g2

0x9dc9,	// (0x0008efed) main_radioblah_rocker_ctrl_pane_g3

0x9dd1,	// (0x0008eff5) main_radioblah_rocker_ctrl_pane_g4

0x9dd9,	// (0x0008effd) main_radioblah_rocker_ctrl_pane_g5

0x9de1,	// (0x0008f005) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00094f0e) main_radioblah_rocker_ctrl_pane_g

0x9661,	// (0x0008e885) main_cset_text2_pane_t1_copy1_ParamLimits

0xefb1,	// (0x000941d5) cam4_image_uncrop_qvga_pane

0xefc1,	// (0x000941e5) vid4_image_uncrop_qcif_pane

0xf118,	// (0x0009433c) cam6_image_uncrop_qvga_pane_ParamLimits

0xf118,	// (0x0009433c) cam6_image_uncrop_qvga_pane

0xd95c,	// (0x00092b80) vid6_image_uncrop_qcif_pane_ParamLimits

0xd95c,	// (0x00092b80) vid6_image_uncrop_qcif_pane

0x07a0,	// (0x000859c4) bg_popup_preview_window_pane_cp03

0xdccb,	// (0x00092eef) list_cset_text2_pane

0xdcd3,	// (0x00092ef7) main_cset6_text2_pane_g1

0xdcdb,	// (0x00092eff) main_cset6_text2_pane_t1

0x9de9,	// (0x0008f00d) list_cset_text2_pane_t1_ParamLimits

0x9de9,	// (0x0008f00d) list_cset_text2_pane_t1

0x10b1,	// (0x000862d5) main_radioblah_pane_ParamLimits

0x9b44,	// (0x0008ed68) main_mobtv_info_pane_t3_ParamLimits

0x9b44,	// (0x0008ed68) main_mobtv_info_pane_t3

0x9ca5,	// (0x0008eec9) main_radioblah_pane_g1

0x9cdf,	// (0x0008ef03) main_radioblah_info_pane_g1

0x9d66,	// (0x0008ef8a) main_radioblah_info_pane_t3_ParamLimits

0x9d66,	// (0x0008ef8a) main_radioblah_info_pane_t3

0x4831,	// (0x00089a55) highlight_cell_cale_month_pane_ParamLimits

0x4831,	// (0x00089a55) highlight_cell_cale_month_pane

0x07a0,	// (0x000859c4) main_phob_fisheye_pane

0x1843,	// (0x00086a67) scroll_pane_cp0031_ParamLimits

0x1843,	// (0x00086a67) scroll_pane_cp0031

0xda6a,	// (0x00092c8e) wait_bar_pane_cp08_ParamLimits

0x96e5,	// (0x0008e909) cset_list_set_pane_copy1_ParamLimits

0xe226,	// (0x0009344a) highlight_cell_cale_month_pane_g1

0x9e06,	// (0x0008f02a) highlight_cell_cale_month_pane_t1

0xd6ae,	// (0x000928d2) list_gen_pane_cp01

0xd27d,	// (0x000924a1) scroll_pane_01

0x1b70,	// (0x00086d94) list_single_double_fisheye_pane

0x9e14,	// (0x0008f038) list_double_fisheye_pane_g1_ParamLimits

0x9e14,	// (0x0008f038) list_double_fisheye_pane_g1

0x9e20,	// (0x0008f044) list_double_fisheye_pane_g2_ParamLimits

0x9e20,	// (0x0008f044) list_double_fisheye_pane_g2

0x9e34,	// (0x0008f058) list_double_fisheye_pane_g3_ParamLimits

0x9e34,	// (0x0008f058) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00094f1b) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00094f1b) list_double_fisheye_pane_g

0x9e5d,	// (0x0008f081) list_double_fisheye_pane_t1_ParamLimits

0x9e5d,	// (0x0008f081) list_double_fisheye_pane_t1

0x9e78,	// (0x0008f09c) list_double_fisheye_pane_t2_ParamLimits

0x9e78,	// (0x0008f09c) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00094f26) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00094f26) list_double_fisheye_pane_t

0x07a0,	// (0x000859c4) main_call5_pane

0x9c39,	// (0x0008ee5d) sc_swipe_pane_ParamLimits

0x9c39,	// (0x0008ee5d) sc_swipe_pane

0x9ead,	// (0x0008f0d1) call5_image_pane_ParamLimits

0x9ead,	// (0x0008f0d1) call5_image_pane

0x9eca,	// (0x0008f0ee) call5_swipe_1_pane_ParamLimits

0x9eca,	// (0x0008f0ee) call5_swipe_1_pane

0x9edd,	// (0x0008f101) call5_swipe_2_pane_ParamLimits

0x9edd,	// (0x0008f101) call5_swipe_2_pane

0x9f08,	// (0x0008f12c) popup_call5_audio_first_window_ParamLimits

0x9f08,	// (0x0008f12c) popup_call5_audio_first_window

0x1761,	// (0x00086985) call5_swipe_1_pane_g1_ParamLimits

0x1761,	// (0x00086985) call5_swipe_1_pane_g1

0xe22e,	// (0x00093452) call5_swipe_1_pane_g2_ParamLimits

0xe22e,	// (0x00093452) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00094f2b) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00094f2b) call5_swipe_1_pane_g

0xe23a,	// (0x0009345e) call5_swipe_1_pane_t1_ParamLimits

0xe23a,	// (0x0009345e) call5_swipe_1_pane_t1

0x1761,	// (0x00086985) call5_swipe_2_pane_g1_ParamLimits

0x1761,	// (0x00086985) call5_swipe_2_pane_g1

0xe24f,	// (0x00093473) call5_swipe_2_pane_g2_ParamLimits

0xe24f,	// (0x00093473) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00094f30) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00094f30) call5_swipe_2_pane_g

0xe25b,	// (0x0009347f) call5_swipe_2_pane_t1_ParamLimits

0xe25b,	// (0x0009347f) call5_swipe_2_pane_t1

0xe270,	// (0x00093494) sc_swipe_pane_g1_ParamLimits

0xe270,	// (0x00093494) sc_swipe_pane_g1

0xe27d,	// (0x000934a1) sc_swipe_pane_g2_ParamLimits

0xe27d,	// (0x000934a1) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00094f35) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00094f35) sc_swipe_pane_g

0xe289,	// (0x000934ad) sc_swipe_pane_t1_ParamLimits

0xe289,	// (0x000934ad) sc_swipe_pane_t1

0x07a0,	// (0x000859c4) main_cmail_launcher_pane

0x9f19,	// (0x0008f13d) aid_size_cell_cmail_l_ParamLimits

0x9f19,	// (0x0008f13d) aid_size_cell_cmail_l

0x9f33,	// (0x0008f157) grid_cmail_l_pane_ParamLimits

0x9f33,	// (0x0008f157) grid_cmail_l_pane

0x9f4e,	// (0x0008f172) cell_cmail_l_pane_ParamLimits

0x9f4e,	// (0x0008f172) cell_cmail_l_pane

0x9f74,	// (0x0008f198) cell_cmail_l_pane_g1_ParamLimits

0x9f74,	// (0x0008f198) cell_cmail_l_pane_g1

0x9f80,	// (0x0008f1a4) cell_cmail_l_pane_t1_ParamLimits

0x9f80,	// (0x0008f1a4) cell_cmail_l_pane_t1

0xe29e,	// (0x000934c2) cell_cmail_l_pane_t2_ParamLimits

0xe29e,	// (0x000934c2) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00094f3a) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00094f3a) cell_cmail_l_pane_t

0x10b1,	// (0x000862d5) grid_highlight_pane_cp018_ParamLimits

0x10b1,	// (0x000862d5) grid_highlight_pane_cp018

0x2ba0,	// (0x00087dc4) main2_pane_ParamLimits

0x2ba0,	// (0x00087dc4) main2_pane

0x33ac,	// (0x000885d0) popup_sp_fs_action_menu_bg_pane_g1

0x33b4,	// (0x000885d8) popup_sp_fs_action_menu_bg_pane_g2

0x33bc,	// (0x000885e0) popup_sp_fs_action_menu_bg_pane_g3

0x33c4,	// (0x000885e8) popup_sp_fs_action_menu_bg_pane_g4

0x33cc,	// (0x000885f0) popup_sp_fs_action_menu_bg_pane_g5

0x33d4,	// (0x000885f8) popup_sp_fs_action_menu_bg_pane_g6

0x33dc,	// (0x00088600) popup_sp_fs_action_menu_bg_pane_g7

0x33e4,	// (0x00088608) popup_sp_fs_action_menu_bg_pane_g8

0x33ec,	// (0x00088610) popup_sp_fs_action_menu_bg_pane_g9

0x33f4,	// (0x00088618) popup_sp_fs_action_menu_bg_pane_g10

0x33f4,	// (0x00088618) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00094413) popup_sp_fs_action_menu_bg_pane_g

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g3_g1

0x3be2,	// (0x00088e06) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_t3_g3_g2

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x000944c3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x000944c3) list_medium_line_x2_t3_g3_g

0x3bfa,	// (0x00088e1e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3bfa,	// (0x00088e1e) list_medium_line_x2_t3_g3_t1

0x3c0f,	// (0x00088e33) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3c0f,	// (0x00088e33) list_medium_line_x2_t3_g3_t2

0x3c23,	// (0x00088e47) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x000944ca) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x000944ca) list_medium_line_x2_t3_g3_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g2_g1

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x000944d1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x000944d1) list_medium_line_x2_t3_g2_g

0x3c38,	// (0x00088e5c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3c38,	// (0x00088e5c) list_medium_line_x2_t3_g2_t1

0x3c4e,	// (0x00088e72) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3c4e,	// (0x00088e72) list_medium_line_x2_t3_g2_t2

0x3c60,	// (0x00088e84) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3c60,	// (0x00088e84) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x000944d6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x000944d6) list_medium_line_x2_t3_g2_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t4_g4_g1

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t4_g4_g2

0x3be2,	// (0x00088e06) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_t4_g4_g3

0x3c8a,	// (0x00088eae) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3c8a,	// (0x00088eae) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x000944dd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x000944dd) list_medium_line_x2_t4_g4_g

0x3c96,	// (0x00088eba) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3c96,	// (0x00088eba) list_medium_line_x2_t4_g4_t1

0x3cad,	// (0x00088ed1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3cad,	// (0x00088ed1) list_medium_line_x2_t4_g4_t2

0x3cc2,	// (0x00088ee6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3cc2,	// (0x00088ee6) list_medium_line_x2_t4_g4_t3

0x3cd4,	// (0x00088ef8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3cd4,	// (0x00088ef8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x000944e6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x000944e6) list_medium_line_x2_t4_g4_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g4_g1

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t2_g4_g2

0x3be2,	// (0x00088e06) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_t2_g4_g3

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0009454d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0009454d) list_medium_line_x2_t2_g4_g

0xb45c,	// (0x00090680) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb45c,	// (0x00090680) list_medium_line_x2_t2_g4_t1

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00094556) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00094556) list_medium_line_x2_t2_g4_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g3_g1

0x3be2,	// (0x00088e06) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_t2_g3_g2

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x000944c3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x000944c3) list_medium_line_x2_t2_g3_g

0xb471,	// (0x00090695) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb471,	// (0x00090695) list_medium_line_x2_t2_g3_t1

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0009455b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0009455b) list_medium_line_x2_t2_g3_t

0x4a17,	// (0x00089c3b) main_sp_fs_list_pane_ParamLimits

0x4a17,	// (0x00089c3b) main_sp_fs_list_pane

0x4a23,	// (0x00089c47) sp_fs_scroll_pane_ParamLimits

0x4a23,	// (0x00089c47) sp_fs_scroll_pane

0x4a2f,	// (0x00089c53) list_medium_line_x2_t3_t1

0x4a3f,	// (0x00089c63) list_medium_line_x2_t3_t2

0xb649,	// (0x0009086d) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000945a6) list_medium_line_x2_t3_t

0x4a4d,	// (0x00089c71) list_medium_line_x3_t4_t1

0x4a5d,	// (0x00089c81) list_medium_line_x3_t4_t2

0xb657,	// (0x0009087b) list_medium_line_x3_t4_t3

0xb649,	// (0x0009086d) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000945ad) list_medium_line_x3_t4_t

0x4a6b,	// (0x00089c8f) list_medium_line_x4_t5_t1

0x4a7b,	// (0x00089c9f) list_medium_line_x4_t5_t2

0xb657,	// (0x0009087b) list_medium_line_x4_t5_t3

0xb665,	// (0x00090889) list_medium_line_x4_t5_t4

0xb649,	// (0x0009086d) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000945b6) list_medium_line_x4_t5_t

0x3bd6,	// (0x00088dfa) list_medium_line_t4_g4_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_t4_g4_g1

0x3c8a,	// (0x00088eae) list_medium_line_t4_g4_g2_ParamLimits

0x3c8a,	// (0x00088eae) list_medium_line_t4_g4_g2

0xb673,	// (0x00090897) list_medium_line_t4_g4_g3_ParamLimits

0xb673,	// (0x00090897) list_medium_line_t4_g4_g3

0x3bee,	// (0x00088e12) list_medium_line_t4_g4_g4_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000945c1) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000945c1) list_medium_line_t4_g4_g

0xb67f,	// (0x000908a3) list_medium_line_t4_g4_t1_ParamLimits

0xb67f,	// (0x000908a3) list_medium_line_t4_g4_t1

0xb694,	// (0x000908b8) list_medium_line_t4_g4_t2_ParamLimits

0xb694,	// (0x000908b8) list_medium_line_t4_g4_t2

0xb6aa,	// (0x000908ce) list_medium_line_t4_g4_t3_ParamLimits

0xb6aa,	// (0x000908ce) list_medium_line_t4_g4_t3

0x3c23,	// (0x00088e47) list_medium_line_t4_g4_t4_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000945ca) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000945ca) list_medium_line_t4_g4_t

0x4b27,	// (0x00089d4b) chi_dic_find_pane_g1

0x5cae,	// (0x0008aed2) main_tport_pane

0xd37f,	// (0x000925a3) list_medium_line_plain_t1

0xd395,	// (0x000925b9) list_medium_line_t2_g2_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t2_g2_g1

0xd3a1,	// (0x000925c5) list_medium_line_t2_g2_g2_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00094c7d) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00094c7d) list_medium_line_t2_g2_g

0x8bfc,	// (0x0008de20) list_medium_line_t2_g2_t1_ParamLimits

0x8bfc,	// (0x0008de20) list_medium_line_t2_g2_t1

0x8c16,	// (0x0008de3a) list_medium_line_t2_g2_t2_ParamLimits

0x8c16,	// (0x0008de3a) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00094c82) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00094c82) list_medium_line_t2_g2_t

0xd6b7,	// (0x000928db) aid_sp_fs_list_icon_a_sm

0xd6bf,	// (0x000928e3) aid_sp_fs_list_icon_d

0xd6c7,	// (0x000928eb) aid_sp_fs_text_primary

0xd6d0,	// (0x000928f4) aid_sp_fs_text_secondary

0xd6d9,	// (0x000928fd) list_medium_line

0xd6d9,	// (0x000928fd) list_medium_line_g2

0xd6d9,	// (0x000928fd) list_medium_line_g3

0xd6d9,	// (0x000928fd) list_medium_line_plain

0xd6d9,	// (0x000928fd) list_medium_line_plain_t2

0xd6d9,	// (0x000928fd) list_medium_line_plain_t3

0xd6d9,	// (0x000928fd) list_medium_line_right_icon

0xd6d9,	// (0x000928fd) list_medium_line_right_iconx2

0xd6d9,	// (0x000928fd) list_medium_line_t2

0xd6d9,	// (0x000928fd) list_medium_line_t2_g2

0xd6d9,	// (0x000928fd) list_medium_line_t2_g3

0xd6d9,	// (0x000928fd) list_medium_line_t2_right_icon

0xd6d9,	// (0x000928fd) list_medium_line_t2_right_iconx2

0xd6d9,	// (0x000928fd) list_medium_line_t3

0xd6d9,	// (0x000928fd) list_medium_line_t3_g2

0xd6d9,	// (0x000928fd) list_medium_line_t3_g3

0xd6d9,	// (0x000928fd) list_medium_line_t3_right_iconx2

0xd6e2,	// (0x00092906) list_medium_line_t4_g4

0x1b70,	// (0x00086d94) list_medium_line_x2

0x1b70,	// (0x00086d94) list_medium_line_x2_t2_g2

0x1b70,	// (0x00086d94) list_medium_line_x2_t2_g3

0x1b70,	// (0x00086d94) list_medium_line_x2_t2_g4

0x1b70,	// (0x00086d94) list_medium_line_x2_t3

0x1b70,	// (0x00086d94) list_medium_line_x2_t3_g2

0x1b70,	// (0x00086d94) list_medium_line_x2_t3_g3

0x1b70,	// (0x00086d94) list_medium_line_x2_t3_g4

0x1b70,	// (0x00086d94) list_medium_line_x2_t4_g2

0x1b70,	// (0x00086d94) list_medium_line_x2_t4_g4

0xd6eb,	// (0x0009290f) list_medium_line_x3

0xd6eb,	// (0x0009290f) list_medium_line_x3_t4

0xd6eb,	// (0x0009290f) list_medium_line_x3_t4_g4

0xd6e2,	// (0x00092906) list_medium_line_x4_t4

0xd6e2,	// (0x00092906) list_medium_line_x4_t4_g7

0xd6e2,	// (0x00092906) list_medium_line_x4_t5

0xd6f4,	// (0x00092918) list_single_fs_dyc_pane_ParamLimits

0xd6f4,	// (0x00092918) list_single_fs_dyc_pane

0x3bd6,	// (0x00088dfa) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x4_t4_g7_g1

0xdbfa,	// (0x00092e1e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbfa,	// (0x00092e1e) list_medium_line_x4_t4_g7_g2

0xdc06,	// (0x00092e2a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc06,	// (0x00092e2a) list_medium_line_x4_t4_g7_g3

0xdc15,	// (0x00092e39) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc15,	// (0x00092e39) list_medium_line_x4_t4_g7_g4

0xdc21,	// (0x00092e45) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc21,	// (0x00092e45) list_medium_line_x4_t4_g7_g5

0xdc30,	// (0x00092e54) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc30,	// (0x00092e54) list_medium_line_x4_t4_g7_g6

0xdc3f,	// (0x00092e63) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc3f,	// (0x00092e63) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00094e47) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00094e47) list_medium_line_x4_t4_g7_g

0xdc4b,	// (0x00092e6f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc4b,	// (0x00092e6f) list_medium_line_x4_t4_g7_t1

0xdc60,	// (0x00092e84) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc60,	// (0x00092e84) list_medium_line_x4_t4_g7_t2

0xdc75,	// (0x00092e99) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc75,	// (0x00092e99) list_medium_line_x4_t4_g7_t3

0xdc8a,	// (0x00092eae) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc8a,	// (0x00092eae) list_medium_line_x4_t4_g7_t4

0xdc9c,	// (0x00092ec0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc9c,	// (0x00092ec0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x00094e56) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x00094e56) list_medium_line_x4_t4_g7_t

0xdcae,	// (0x00092ed2) list_single_dyc_row_pane_ParamLimits

0xdcae,	// (0x00092ed2) list_single_dyc_row_pane

0x9e9a,	// (0x0008f0be) call5_gesture_pane_ParamLimits

0x9e9a,	// (0x0008f0be) call5_gesture_pane

0x9ef0,	// (0x0008f114) call5_windows_pane_ParamLimits

0x9ef0,	// (0x0008f114) call5_windows_pane

0x9f96,	// (0x0008f1ba) call5_swipe_1_pane_cp_ParamLimits

0x9f96,	// (0x0008f1ba) call5_swipe_1_pane_cp

0x9fa2,	// (0x0008f1c6) call5_swipe_2_pane_cp_ParamLimits

0x9fa2,	// (0x0008f1c6) call5_swipe_2_pane_cp

0xbb23,	// (0x00090d47) call5_image_pane_cp

0x9fae,	// (0x0008f1d2) popup_call5_audio_first_window_cp_ParamLimits

0x9fae,	// (0x0008f1d2) popup_call5_audio_first_window_cp

0xe270,	// (0x00093494) call5_swipe_1_pane_g1_cp_ParamLimits

0xe270,	// (0x00093494) call5_swipe_1_pane_g1_cp

0xe2b0,	// (0x000934d4) call5_swipe_1_pane_g2_cp

0xe289,	// (0x000934ad) call5_swipe_1_pane_t1_cp_ParamLimits

0xe289,	// (0x000934ad) call5_swipe_1_pane_t1_cp

0xe270,	// (0x00093494) call5_swipe_2_pane_g1_cp_ParamLimits

0xe270,	// (0x00093494) call5_swipe_2_pane_g1_cp

0xe2b8,	// (0x000934dc) call5_swipe_2_pane_g2_cp

0xe2c0,	// (0x000934e4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2c0,	// (0x000934e4) call5_swipe_2_pane_t1_cp

0x10b1,	// (0x000862d5) main_sp_fs_email_pane

0xe2d5,	// (0x000934f9) main_sp_fs_listscroll_pane_te

0xe2de,	// (0x00093502) popup_sp_fs_action_menu_pane_ParamLimits

0xe2de,	// (0x00093502) popup_sp_fs_action_menu_pane

0x14fa,	// (0x0008671e) bg_sp_fs_ctrlbar_pane_g1

0xe320,	// (0x00093544) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe329,	// (0x0009354d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe332,	// (0x00093556) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x14fa,	// (0x0008671e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00094f3f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x12dd,	// (0x00086501) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x12dd,	// (0x00086501) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33b,	// (0x0009355f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33b,	// (0x0009355f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe347,	// (0x0009356b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe347,	// (0x0009356b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00094f48) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00094f48) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe353,	// (0x00093577) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe353,	// (0x00093577) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe36d,	// (0x00093591) list_medium_line_t2_right_icon_g1

0x9fba,	// (0x0008f1de) list_medium_line_t2_right_icon_t1

0x9fca,	// (0x0008f1ee) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00094f4d) list_medium_line_t2_right_icon_t

0x10a3,	// (0x000862c7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x10a3,	// (0x000862c7) bg_sp_fs_ctrlbar_pane

0xa022,	// (0x0008f246) main_sp_fs_ctrlbar_button_pane_cp01

0xa02a,	// (0x0008f24e) main_sp_fs_ctrlbar_ddmenu_pane

0x1b79,	// (0x00086d9d) main_sp_fs_ctrlbar_pane_g1

0xe3ad,	// (0x000935d1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00094f52) main_sp_fs_ctrlbar_pane_g

0xe3b9,	// (0x000935dd) main_sp_fs_ctrlbar_pane_t1

0xa034,	// (0x0008f258) main_sp_fs_ctrlbar_pane

0xa058,	// (0x0008f27c) main_sp_fs_listscroll_pane_te_cp01

0xa078,	// (0x0008f29c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa078,	// (0x0008f29c) popup_sp_fs_action_menu_pane_cp01

0x10b1,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x10b1,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp01

0xe3ce,	// (0x000935f2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3ce,	// (0x000935f2) sp_fs_action_menu_list_gene_pane_g1

0xe3dd,	// (0x00093601) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3dd,	// (0x00093601) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00094f57) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00094f57) sp_fs_action_menu_list_gene_pane_g

0xe3ea,	// (0x0009360e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ea,	// (0x0009360e) sp_fs_action_menu_list_gene_pane_t1

0xe402,	// (0x00093626) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe402,	// (0x00093626) sp_fs_action_menu_list_gene_pane

0xe421,	// (0x00093645) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe421,	// (0x00093645) popup_sp_fs_action_menu_bg_pane

0xe42f,	// (0x00093653) sp_fs_action_menu_list_pane_ParamLimits

0xe42f,	// (0x00093653) sp_fs_action_menu_list_pane

0xe44f,	// (0x00093673) sp_fs_scroll_pane_cp01_ParamLimits

0xe44f,	// (0x00093673) sp_fs_scroll_pane_cp01

0xa092,	// (0x0008f2b6) list_medium_line_plain_t2_t1

0xa0a2,	// (0x0008f2c6) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00094f5c) list_medium_line_plain_t2_t

0xa0b2,	// (0x0008f2d6) list_medium_line_plain_t3_t1

0xa0c2,	// (0x0008f2e6) list_medium_line_plain_t3_t2

0xa0d0,	// (0x0008f2f4) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00094f61) list_medium_line_plain_t3_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t2_g2_g1

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x000944d1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x000944d1) list_medium_line_x2_t2_g2_g

0xb67f,	// (0x000908a3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb67f,	// (0x000908a3) list_medium_line_x2_t2_g2_t1

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00094f68) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00094f68) list_medium_line_x2_t2_g2_t

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t4_g2_g1

0xe475,	// (0x00093699) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe475,	// (0x00093699) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x00094f6d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x00094f6d) list_medium_line_x2_t4_g2_g

0xa0de,	// (0x0008f302) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa0de,	// (0x0008f302) list_medium_line_x2_t4_g2_t1

0xa0f5,	// (0x0008f319) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa0f5,	// (0x0008f319) list_medium_line_x2_t4_g2_t2

0xa10a,	// (0x0008f32e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa10a,	// (0x0008f32e) list_medium_line_x2_t4_g2_t3

0x3c23,	// (0x00088e47) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00094f72) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00094f72) list_medium_line_x2_t4_g2_t

0xe487,	// (0x000936ab) list_medium_line_t3_right_iconx2_g1

0xe36d,	// (0x00093591) list_medium_line_t3_right_iconx2_g2

0xa11c,	// (0x0008f340) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x00094f7b) list_medium_line_t3_right_iconx2_g

0xa126,	// (0x0008f34a) list_medium_line_t3_right_iconx2_t1

0xa136,	// (0x0008f35a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x00094f82) list_medium_line_t3_right_iconx2_t

0x3bd6,	// (0x00088dfa) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x3_t4_g4_g1

0x3be2,	// (0x00088e06) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x3_t4_g4_g2

0x3c8a,	// (0x00088eae) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3c8a,	// (0x00088eae) list_medium_line_x3_t4_g4_g3

0xe48f,	// (0x000936b3) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe48f,	// (0x000936b3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x00094f87) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x00094f87) list_medium_line_x3_t4_g4_g

0xa144,	// (0x0008f368) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa144,	// (0x0008f368) list_medium_line_x3_t4_g4_t1

0xa15b,	// (0x0008f37f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa15b,	// (0x0008f37f) list_medium_line_x3_t4_g4_t2

0xe49b,	// (0x000936bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe49b,	// (0x000936bf) list_medium_line_x3_t4_g4_t3

0xe4b0,	// (0x000936d4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4b0,	// (0x000936d4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x00094f90) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x00094f90) list_medium_line_x3_t4_g4_t

0xa174,	// (0x0008f398) list_single_dyc_row_text_pane_t1_ParamLimits

0xa174,	// (0x0008f398) list_single_dyc_row_text_pane_t1

0xa1bd,	// (0x0008f3e1) list_single_dyc_row_text_pane_t2_ParamLimits

0xa1bd,	// (0x0008f3e1) list_single_dyc_row_text_pane_t2

0xe4cd,	// (0x000936f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cd,	// (0x000936f1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x00094f99) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x00094f99) list_single_dyc_row_text_pane_t

0xe4df,	// (0x00093703) list_single_dyc_row_pane_g1_ParamLimits

0xe4df,	// (0x00093703) list_single_dyc_row_pane_g1

0xe4eb,	// (0x0009370f) list_single_dyc_row_pane_g2_ParamLimits

0xe4eb,	// (0x0009370f) list_single_dyc_row_pane_g2

0xe4f7,	// (0x0009371b) list_single_dyc_row_pane_g3_ParamLimits

0xe4f7,	// (0x0009371b) list_single_dyc_row_pane_g3

0xe503,	// (0x00093727) list_single_dyc_row_pane_g4_ParamLimits

0xe503,	// (0x00093727) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x00094fa0) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x00094fa0) list_single_dyc_row_pane_g

0xe50f,	// (0x00093733) list_single_dyc_row_text_pane_ParamLimits

0xe50f,	// (0x00093733) list_single_dyc_row_text_pane

0x07a0,	// (0x000859c4) bg_sp_fs_scroll_pane

0xe52e,	// (0x00093752) thumb_sp_fs_scroll_pane

0xd395,	// (0x000925b9) list_medium_line_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_g1

0xe537,	// (0x0009375b) list_medium_line_t1_ParamLimits

0xe537,	// (0x0009375b) list_medium_line_t1

0x3bd6,	// (0x00088dfa) list_medium_line_x2_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_g1

0x3be2,	// (0x00088e06) list_medium_line_x2_g2_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x00094fa9) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x00094fa9) list_medium_line_x2_g

0xe54c,	// (0x00093770) list_medium_line_x2_t1_ParamLimits

0xe54c,	// (0x00093770) list_medium_line_x2_t1

0x3bd6,	// (0x00088dfa) list_medium_line_x3_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x3_g1

0x3be2,	// (0x00088e06) list_medium_line_x3_g2_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x00094fa9) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x00094fa9) list_medium_line_x3_g

0xe54c,	// (0x00093770) list_medium_line_x3_t1_ParamLimits

0xe54c,	// (0x00093770) list_medium_line_x3_t1

0xe562,	// (0x00093786) thumb_sp_fs_scroll_pane_g1

0xe56b,	// (0x0009378f) thumb_sp_fs_scroll_pane_g2

0xe574,	// (0x00093798) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00094fae) thumb_sp_fs_scroll_pane_g

0xe562,	// (0x00093786) bg_sp_fs_scroll_pane_g1

0xe56b,	// (0x0009378f) bg_sp_fs_scroll_pane_g2

0xe574,	// (0x00093798) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00094fae) bg_sp_fs_scroll_pane_g

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3bd6,	// (0x00088dfa) list_medium_line_x2_t3_g4_g1

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3c7e,	// (0x00088ea2) list_medium_line_x2_t3_g4_g2

0x3be2,	// (0x00088e06) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3be2,	// (0x00088e06) list_medium_line_x2_t3_g4_g3

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3bee,	// (0x00088e12) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0009454d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0009454d) list_medium_line_x2_t3_g4_g

0xa217,	// (0x0008f43b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa217,	// (0x0008f43b) list_medium_line_x2_t3_g4_t1

0xa22d,	// (0x0008f451) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa22d,	// (0x0008f451) list_medium_line_x2_t3_g4_t2

0x3c23,	// (0x00088e47) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3c23,	// (0x00088e47) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x00094fb5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x00094fb5) list_medium_line_x2_t3_g4_t

0xd395,	// (0x000925b9) list_medium_line_g2_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_g2_g1

0xd3a1,	// (0x000925c5) list_medium_line_g2_g2_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00094c7d) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00094c7d) list_medium_line_g2_g

0xe57d,	// (0x000937a1) list_medium_line_g2_t1_ParamLimits

0xe57d,	// (0x000937a1) list_medium_line_g2_t1

0xd395,	// (0x000925b9) list_medium_line_t3_g2_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t3_g2_g1

0xd3a1,	// (0x000925c5) list_medium_line_t3_g2_g2_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00094c7d) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00094c7d) list_medium_line_t3_g2_g

0xa246,	// (0x0008f46a) list_medium_line_t3_g2_t1_ParamLimits

0xa246,	// (0x0008f46a) list_medium_line_t3_g2_t1

0xa25d,	// (0x0008f481) list_medium_line_t3_g2_t2_ParamLimits

0xa25d,	// (0x0008f481) list_medium_line_t3_g2_t2

0xa272,	// (0x0008f496) list_medium_line_t3_g2_t3_ParamLimits

0xa272,	// (0x0008f496) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x00094fbc) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x00094fbc) list_medium_line_t3_g2_t

0xe36d,	// (0x00093591) list_medium_line_right_icon_g1

0xe592,	// (0x000937b6) list_medium_line_right_icon_t1

0xd395,	// (0x000925b9) list_medium_line_t2_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t2_g1

0xa28b,	// (0x0008f4af) list_medium_line_t2_t1_ParamLimits

0xa28b,	// (0x0008f4af) list_medium_line_t2_t1

0xa2a5,	// (0x0008f4c9) list_medium_line_t2_t2_ParamLimits

0xa2a5,	// (0x0008f4c9) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x00094fc3) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x00094fc3) list_medium_line_t2_t

0xd395,	// (0x000925b9) list_medium_line_t3_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t3_g1

0xa2ba,	// (0x0008f4de) list_medium_line_t3_t1_ParamLimits

0xa2ba,	// (0x0008f4de) list_medium_line_t3_t1

0xa2d4,	// (0x0008f4f8) list_medium_line_t3_t2_ParamLimits

0xa2d4,	// (0x0008f4f8) list_medium_line_t3_t2

0xa2e9,	// (0x0008f50d) list_medium_line_t3_t3_ParamLimits

0xa2e9,	// (0x0008f50d) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00094fc8) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00094fc8) list_medium_line_t3_t

0xd395,	// (0x000925b9) list_medium_line_g3_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_g3_g1

0xe5a0,	// (0x000937c4) list_medium_line_g3_g2_ParamLimits

0xe5a0,	// (0x000937c4) list_medium_line_g3_g2

0xd3a1,	// (0x000925c5) list_medium_line_g3_g3_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x00094fcf) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x00094fcf) list_medium_line_g3_g

0xe5ac,	// (0x000937d0) list_medium_line_g3_t1_ParamLimits

0xe5ac,	// (0x000937d0) list_medium_line_g3_t1

0xd395,	// (0x000925b9) list_medium_line_t2_g3_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t2_g3_g1

0xe5a0,	// (0x000937c4) list_medium_line_t2_g3_g2_ParamLimits

0xe5a0,	// (0x000937c4) list_medium_line_t2_g3_g2

0xd3a1,	// (0x000925c5) list_medium_line_t2_g3_g3_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x00094fcf) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x00094fcf) list_medium_line_t2_g3_g

0xa2fe,	// (0x0008f522) list_medium_line_t2_g3_t1_ParamLimits

0xa2fe,	// (0x0008f522) list_medium_line_t2_g3_t1

0xa315,	// (0x0008f539) list_medium_line_t2_g3_t2_ParamLimits

0xa315,	// (0x0008f539) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x00094fd6) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x00094fd6) list_medium_line_t2_g3_t

0xd395,	// (0x000925b9) list_medium_line_t3_g3_g1_ParamLimits

0xd395,	// (0x000925b9) list_medium_line_t3_g3_g1

0xe5a0,	// (0x000937c4) list_medium_line_t3_g3_g2_ParamLimits

0xe5a0,	// (0x000937c4) list_medium_line_t3_g3_g2

0xd3a1,	// (0x000925c5) list_medium_line_t3_g3_g3_ParamLimits

0xd3a1,	// (0x000925c5) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x00094fcf) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x00094fcf) list_medium_line_t3_g3_g

0xa32e,	// (0x0008f552) list_medium_line_t3_g3_t1_ParamLimits

0xa32e,	// (0x0008f552) list_medium_line_t3_g3_t1

0xa347,	// (0x0008f56b) list_medium_line_t3_g3_t2_ParamLimits

0xa347,	// (0x0008f56b) list_medium_line_t3_g3_t2

0xa35d,	// (0x0008f581) list_medium_line_t3_g3_t3_ParamLimits

0xa35d,	// (0x0008f581) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00094fdb) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00094fdb) list_medium_line_t3_g3_t

0xe487,	// (0x000936ab) list_medium_line_right_iconx2_g1

0xe36d,	// (0x00093591) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00094fe2) list_medium_line_right_iconx2_g

0xe5c1,	// (0x000937e5) list_medium_line_right_iconx2_t1

0xe487,	// (0x000936ab) list_medium_line_t2_right_iconx2_g1

0xe36d,	// (0x00093591) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00094fe2) list_medium_line_t2_right_iconx2_g

0xa377,	// (0x0008f59b) list_medium_line_t2_right_iconx2_t1

0xa387,	// (0x0008f5ab) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00094fe7) list_medium_line_t2_right_iconx2_t

0xe5cf,	// (0x000937f3) list_medium_line_x4_t4_t1

0xa395,	// (0x0008f5b9) list_medium_line_x4_t4_t2

0xa3a5,	// (0x0008f5c9) list_medium_line_x4_t4_t3

0xa3b5,	// (0x0008f5d9) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00094fec) list_medium_line_x4_t4_t

0xa408,	// (0x0008f62c) tport_appsw_pane_ParamLimits

0xa408,	// (0x0008f62c) tport_appsw_pane

0xa419,	// (0x0008f63d) tport_contact_pane_ParamLimits

0xa419,	// (0x0008f63d) tport_contact_pane

0xa432,	// (0x0008f656) tport_listscroll_pane_ParamLimits

0xa432,	// (0x0008f656) tport_listscroll_pane

0xa44d,	// (0x0008f671) cell_tport_appsw_pane_ParamLimits

0xa44d,	// (0x0008f671) cell_tport_appsw_pane

0xd108,	// (0x0009232c) tport_appsw_pane_g1_ParamLimits

0xd108,	// (0x0009232c) tport_appsw_pane_g1

0xe5dd,	// (0x00093801) tport_contact_pane_g1

0xe5e6,	// (0x0009380a) tport_contact_pane_t1

0xe5f4,	// (0x00093818) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00094ff5) tport_contact_pane_t

0xe602,	// (0x00093826) list_tport_pane

0xe60b,	// (0x0009382f) scroll_pane_cp_030

0xa468,	// (0x0008f68c) cell_tport_appsw_pane_g1

0xe614,	// (0x00093838) cell_tport_appsw_pane_t1

0x07a0,	// (0x000859c4) grid_highlight_pane_cp019

0xa480,	// (0x0008f6a4) list_tport_double_graphic_pane_ParamLimits

0xa480,	// (0x0008f6a4) list_tport_double_graphic_pane

0x10b1,	// (0x000862d5) list_highlight_pane_cp023_ParamLimits

0x10b1,	// (0x000862d5) list_highlight_pane_cp023

0xa48d,	// (0x0008f6b1) list_tport_double_graphic_pane_g1_ParamLimits

0xa48d,	// (0x0008f6b1) list_tport_double_graphic_pane_g1

0xa49a,	// (0x0008f6be) list_tport_double_graphic_pane_t1_ParamLimits

0xa49a,	// (0x0008f6be) list_tport_double_graphic_pane_t1

0xa4af,	// (0x0008f6d3) list_tport_double_graphic_pane_t2_ParamLimits

0xa4af,	// (0x0008f6d3) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00095001) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00095001) list_tport_double_graphic_pane_t

0x07a0,	// (0x000859c4) main_cale_note_pane

0x83aa,	// (0x0008d5ce) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x83aa,	// (0x0008d5ce) cell_vitu2_function_top_wide_pane_cp01

0x9b58,	// (0x0008ed7c) wait_bar_pane_cp05_ParamLimits

0x07a0,	// (0x000859c4) listscroll_cmail_pane

0xe62a,	// (0x0009384e) list_cmail_pane

0xa4cb,	// (0x0008f6ef) list_cmail_body_pane

0xa4e3,	// (0x0008f707) list_single_cmail_header_caption_pane

0xa4ff,	// (0x0008f723) list_single_cmail_header_detail_pane_ParamLimits

0xa4ff,	// (0x0008f723) list_single_cmail_header_detail_pane

0xa52b,	// (0x0008f74f) list_single_cmail_header_caption_pane_t1

0xa53b,	// (0x0008f75f) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa53b,	// (0x0008f75f) list_single_cmail_header_detail_pane_g1

0xe64a,	// (0x0009386e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe64a,	// (0x0009386e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00095006) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00095006) list_single_cmail_header_detail_pane_g

0xe663,	// (0x00093887) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe663,	// (0x00093887) list_single_cmail_header_detail_pane_t1

0xe695,	// (0x000938b9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe695,	// (0x000938b9) list_single_cmail_header_editor_pane_bg

0xe6a7,	// (0x000938cb) list_cmail_body_pane_g1

0xe6b0,	// (0x000938d4) list_cmail_body_pane_t1

0xd163,	// (0x00092387) list_single_cmail_header_editor_pane_bg_g1

0xb37b,	// (0x0009059f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd173,	// (0x00092397) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd16b,	// (0x0009238f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd38d,	// (0x000925b1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd193,	// (0x000923b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd183,	// (0x000923a7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd18b,	// (0x000923af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb35b,	// (0x0009057f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa579,	// (0x0008f79d) calenote_gesture_pane_ParamLimits

0xa579,	// (0x0008f79d) calenote_gesture_pane

0xa599,	// (0x0008f7bd) calenote_window_pane_ParamLimits

0xa599,	// (0x0008f7bd) calenote_window_pane

0xe6be,	// (0x000938e2) popup_note_window_cp01

0xa5b5,	// (0x0008f7d9) calenote_swipe_1_pane_ParamLimits

0xa5b5,	// (0x0008f7d9) calenote_swipe_1_pane

0x9fa2,	// (0x0008f1c6) calenote_swipe_2_pane_ParamLimits

0x9fa2,	// (0x0008f1c6) calenote_swipe_2_pane

0xe270,	// (0x00093494) calenote_swipe_1_pane_g1_ParamLimits

0xe270,	// (0x00093494) calenote_swipe_1_pane_g1

0xe27d,	// (0x000934a1) calenote_swipe_1_pane_g2_ParamLimits

0xe27d,	// (0x000934a1) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00094f35) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00094f35) calenote_swipe_1_pane_g

0xe6d0,	// (0x000938f4) calenote_swipe_1_pane_t1_ParamLimits

0xe6d0,	// (0x000938f4) calenote_swipe_1_pane_t1

0xe270,	// (0x00093494) calenote_swipe_2_pane_g1_ParamLimits

0xe270,	// (0x00093494) calenote_swipe_2_pane_g1

0xe6ef,	// (0x00093913) calenote_swipe_2_pane_g2_ParamLimits

0xe6ef,	// (0x00093913) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00095012) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00095012) calenote_swipe_2_pane_g

0xe6fb,	// (0x0009391f) calenote_swipe_2_pane_t1_ParamLimits

0xe6fb,	// (0x0009391f) calenote_swipe_2_pane_t1

0x07a0,	// (0x000859c4) main_mup_navstr_pane

0x7055,	// (0x0008c279) main_mup3_pane_t7_ParamLimits

0x7055,	// (0x0008c279) main_mup3_pane_t7

0xede9,	// (0x0009400d) main_mp4_pane_g6_ParamLimits

0xede9,	// (0x0009400d) main_mp4_pane_g6

0xef7f,	// (0x000941a3) main_image3_pane_t4_ParamLimits

0xef7f,	// (0x000941a3) main_image3_pane_t4

0xa5ca,	// (0x0008f7ee) popup_navstr_preview_pane_ParamLimits

0xa5ca,	// (0x0008f7ee) popup_navstr_preview_pane

0xa5de,	// (0x0008f802) scroll_navstr_pane_ParamLimits

0xa5de,	// (0x0008f802) scroll_navstr_pane

0x07a0,	// (0x000859c4) bg_popup_preview_window_pane_cp04

0xe722,	// (0x00093946) popup_navstr_preview_pane_t1

0xa5f2,	// (0x0008f816) scroll_navstr_pane_g1_ParamLimits

0xa5f2,	// (0x0008f816) scroll_navstr_pane_g1

0xa606,	// (0x0008f82a) scroll_navstr_pane_t1_ParamLimits

0xa606,	// (0x0008f82a) scroll_navstr_pane_t1

0xe6c7,	// (0x000938eb) bg_button_pane_cp014

0xe6c7,	// (0x000938eb) bg_button_pane_cp030

0x9e40,	// (0x0008f064) list_double_fisheye_pane_g4_ParamLimits

0x9e40,	// (0x0008f064) list_double_fisheye_pane_g4

0x9e4c,	// (0x0008f070) list_double_fisheye_pane_g5_ParamLimits

0x9e4c,	// (0x0008f070) list_double_fisheye_pane_g5

0xe632,	// (0x00093856) sp_fs_scroll_pane_cp03

0x1b79,	// (0x00086d9d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3ad,	// (0x000935d1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00094f52) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3b9,	// (0x000935dd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa4c1,	// (0x0008f6e5) sp_fs_scroll_pane_cp02

0x3445,	// (0x00088669) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3445,	// (0x00088669) popup_sp_fs_calendar_preview_list_single_pane

0x07a0,	// (0x000859c4) main_cam6_pano_pane

0x10b1,	// (0x000862d5) main_mup3_pane_ParamLimits

0x07a0,	// (0x000859c4) main_phacti_pane

0x9a2b,	// (0x0008ec4f) bg_button_pane_cp11

0x9a45,	// (0x0008ec69) main_mobtv_info_pane_g2_ParamLimits

0x9a45,	// (0x0008ec69) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00094eb2) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00094eb2) main_mobtv_info_pane_g

0x9c20,	// (0x0008ee44) sc_clock_pane_t5_ParamLimits

0x9c20,	// (0x0008ee44) sc_clock_pane_t5

0x9ca5,	// (0x0008eec9) main_radioblah_pane_g1_ParamLimits

0xe1bc,	// (0x000933e0) main_radioblah_pane_t3_ParamLimits

0xe1bc,	// (0x000933e0) main_radioblah_pane_t3

0xe1d4,	// (0x000933f8) main_radioblah_pane_t4_ParamLimits

0xe1d4,	// (0x000933f8) main_radioblah_pane_t4

0x9ccd,	// (0x0008eef1) main_radioblah_text_pane_ParamLimits

0x9ccd,	// (0x0008eef1) main_radioblah_text_pane

0x9cdf,	// (0x0008ef03) main_radioblah_info_pane_g1_ParamLimits

0x9d7a,	// (0x0008ef9e) main_radioblah_info_pane_t4_ParamLimits

0x9d7a,	// (0x0008ef9e) main_radioblah_info_pane_t4

0x10b1,	// (0x000862d5) main_sp_fs_calendar_pane

0xa61c,	// (0x0008f840) main_phacti_pane_g1

0xa624,	// (0x0008f848) phacti_note_pane_ParamLimits

0xa624,	// (0x0008f848) phacti_note_pane

0xe739,	// (0x0009395d) phacti_term_pane_ParamLimits

0xe739,	// (0x0009395d) phacti_term_pane

0xe74e,	// (0x00093972) phacti_note_pane_t1_ParamLimits

0xe74e,	// (0x00093972) phacti_note_pane_t1

0xe765,	// (0x00093989) phacti_term_pane_g1

0xe76d,	// (0x00093991) phacti_term_pane_t1_ParamLimits

0xe76d,	// (0x00093991) phacti_term_pane_t1

0xe797,	// (0x000939bb) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe79f,	// (0x000939c3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0009501c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7a7,	// (0x000939cb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7a7,	// (0x000939cb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7bd,	// (0x000939e1) aid_popup_sp_fs_bg_corner_pane

0x14fa,	// (0x0008671e) popup_sp_fs_calendar_preview_bg_pane_g1

0x07a0,	// (0x000859c4) popup_sp_fs_calendar_preview_bg_pane

0xe7c5,	// (0x000939e9) popup_sp_fs_calendar_preview_list_pane

0x10b1,	// (0x000862d5) bg_main_sp_fs_cale_pane_ParamLimits

0x10b1,	// (0x000862d5) bg_main_sp_fs_cale_pane

0xe7d6,	// (0x000939fa) listscroll_cale_mrui_pane_ParamLimits

0xe7d6,	// (0x000939fa) listscroll_cale_mrui_pane

0xe7ea,	// (0x00093a0e) listscroll_sp_fs_schedule_track_pane

0xe7f3,	// (0x00093a17) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f3,	// (0x00093a17) main_sp_fs_ctrlbar_pane_cp01

0xe804,	// (0x00093a28) main_sp_fs_ribbon_pane

0xe80c,	// (0x00093a30) popup_sp_fs_cale_preview_window

0xa67f,	// (0x0008f8a3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa67f,	// (0x0008f8a3) list_single_sp_fs_schedule_track_pane

0x10b1,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x10b1,	// (0x000862d5) bg_sp_fs_highlight_list_pane_cp03

0xa695,	// (0x0008f8b9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa695,	// (0x0008f8b9) list_single_sp_fs_schedule_track_pane_g1

0xa6a1,	// (0x0008f8c5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6a1,	// (0x0008f8c5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00095021) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00095021) list_single_sp_fs_schedule_track_pane_g

0xa6ad,	// (0x0008f8d1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa6ad,	// (0x0008f8d1) list_single_sp_fs_schedule_track_pane_t1

0xa6c7,	// (0x0008f8eb) sp_fs_schedule_track_pane_ParamLimits

0xa6c7,	// (0x0008f8eb) sp_fs_schedule_track_pane

0xe81e,	// (0x00093a42) sp_fs_schedule_track_pane_g1

0xe826,	// (0x00093a4a) sp_fs_schedule_track_pane_g2

0xe82e,	// (0x00093a52) sp_fs_schedule_track_pane_g3

0xe836,	// (0x00093a5a) sp_fs_schedule_track_pane_g4

0xe83e,	// (0x00093a62) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00095026) sp_fs_schedule_track_pane_g

0xd163,	// (0x00092387) bg_sp_fs_schedule_viewer_highlight_g1

0xb37b,	// (0x0009059f) bg_sp_fs_schedule_viewer_highlight_g2

0xd16b,	// (0x0009238f) bg_sp_fs_schedule_viewer_highlight_g3

0xd173,	// (0x00092397) bg_sp_fs_schedule_viewer_highlight_g4

0xd38d,	// (0x000925b1) bg_sp_fs_schedule_viewer_highlight_g5

0xd183,	// (0x000923a7) bg_sp_fs_schedule_viewer_highlight_g6

0xd18b,	// (0x000923af) bg_sp_fs_schedule_viewer_highlight_g7

0xd193,	// (0x000923b7) bg_sp_fs_schedule_viewer_highlight_g8

0xb35b,	// (0x0009057f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00095031) bg_sp_fs_schedule_viewer_highlight_g

0x07a0,	// (0x000859c4) bg_main_sp_fs_ribbon_pane

0xa6d8,	// (0x0008f8fc) main_sp_fs_ribbon_pane_g1

0xe846,	// (0x00093a6a) main_sp_fs_ribbon_pane_t1

0xa6e1,	// (0x0008f905) main_sp_fs_ribbon_pane_t2

0xe855,	// (0x00093a79) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00095044) main_sp_fs_ribbon_pane_t

0xe864,	// (0x00093a88) main_sp_fs_ribbon_scheduler_pane

0xe86c,	// (0x00093a90) bg_main_sp_fs_ribbon_pane_g1

0xe875,	// (0x00093a99) bg_main_sp_fs_ribbon_pane_g2

0xe87e,	// (0x00093aa2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0009504b) bg_main_sp_fs_ribbon_pane_g

0xe886,	// (0x00093aaa) main_sp_fs_ribbon_scheduler_pane_g1

0xe88f,	// (0x00093ab3) main_sp_fs_ribbon_scheduler_pane_g2

0xe898,	// (0x00093abc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00095052) main_sp_fs_ribbon_scheduler_pane_g

0xe8a1,	// (0x00093ac5) list_cale_mrui_pane

0xa6f0,	// (0x0008f914) sp_fs_scroll_pane_cp07_ParamLimits

0xa6f0,	// (0x0008f914) sp_fs_scroll_pane_cp07

0xa706,	// (0x0008f92a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa706,	// (0x0008f92a) bg_sp_fs_schedule_viewer_highlight

0xe8aa,	// (0x00093ace) list_single_sp_fs_schedule_track_pane_cp01

0xe8b2,	// (0x00093ad6) list_sp_fs_schedule_track_pane

0xe8ba,	// (0x00093ade) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ba,	// (0x00093ade) sp_fs_scroll_pane_cp06

0x14fa,	// (0x0008671e) bgmain_sp_fs_calendar_pane_g1

0xa716,	// (0x0008f93a) list_single_cale_mrui_pane_ParamLimits

0xa716,	// (0x0008f93a) list_single_cale_mrui_pane

0xe8cc,	// (0x00093af0) list_single_cale_mrui_row_pane_ParamLimits

0xe8cc,	// (0x00093af0) list_single_cale_mrui_row_pane

0xe8d9,	// (0x00093afd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8d9,	// (0x00093afd) list_single_cale_mrui_row_pane_g1

0xe911,	// (0x00093b35) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe911,	// (0x00093b35) list_single_cale_mrui_row_pane_t1

0xa738,	// (0x0008f95c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa738,	// (0x0008f95c) list_single_cale_mrui_row_pane_t2

0xe923,	// (0x00093b47) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe923,	// (0x00093b47) list_single_cale_mrui_row_pane_t3

0xe952,	// (0x00093b76) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe952,	// (0x00093b76) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0009505e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0009505e) list_single_cale_mrui_row_pane_t

0xa7a0,	// (0x0008f9c4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa7a0,	// (0x0008f9c4) list_single_cmail_header_editor_pane_bg_cp01

0xa7c6,	// (0x0008f9ea) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa7c6,	// (0x0008f9ea) list_single_cmail_header_editor_pane_bg_cp02

0xa7e6,	// (0x0008fa0a) main_radioblah_text_pane_t1_ParamLimits

0xa7e6,	// (0x0008fa0a) main_radioblah_text_pane_t1

0xe981,	// (0x00093ba5) cam6_indi_pane_cp01

0xe989,	// (0x00093bad) cam6_mode_pane_cp01

0xe991,	// (0x00093bb5) cam6_pano_pane

0xe99a,	// (0x00093bbe) cam6_zoom_pane_cp01

0xe9a2,	// (0x00093bc6) cam6_pano_image_pane

0xe9ad,	// (0x00093bd1) cam6_pano_pane_g1

0xdf34,	// (0x00093158) cam6_pano_pane_g2

0xe9b6,	// (0x00093bda) cam6_pano_pane_g3

0xe9bf,	// (0x00093be3) cam6_pano_pane_g4

0x1aa3,	// (0x00086cc7) cam6_pano_pane_g5

0xe9c8,	// (0x00093bec) cam6_pano_pane_g6

0xe9d2,	// (0x00093bf6) cam6_pano_pane_g7

0xe9da,	// (0x00093bfe) cam6_pano_pane_g8

0xe9e3,	// (0x00093c07) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x00095067) cam6_pano_pane_g

0x07a0,	// (0x000859c4) main_browser_tag_pane

0xe71a,	// (0x0009393e) grid_navstr_albumart_pane

0xe9ee,	// (0x00093c12) cell_navstr_albumart_pane_ParamLimits

0xe9ee,	// (0x00093c12) cell_navstr_albumart_pane

0xbca4,	// (0x00090ec8) cell_navstr_albumart_pane_g1

0x0ec0,	// (0x000860e4) cell_navstr_albumart_pane_g2

0x0ed0,	// (0x000860f4) cell_navstr_albumart_pane_g3

0x0ec8,	// (0x000860ec) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0009507a) cell_navstr_albumart_pane_g

0xa801,	// (0x0008fa25) bt_list_pane_ParamLimits

0xa801,	// (0x0008fa25) bt_list_pane

0xa816,	// (0x0008fa3a) bt_list_pane_t1

0xa825,	// (0x0008fa49) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x00095083) bt_list_pane_t

0x07a0,	// (0x000859c4) main_cale_prevew_pane

0xa834,	// (0x0008fa58) popup_cale_preview_window_ParamLimits

0xa834,	// (0x0008fa58) popup_cale_preview_window

0x10b1,	// (0x000862d5) bg_popup_preview_window_pane_cp05_ParamLimits

0x10b1,	// (0x000862d5) bg_popup_preview_window_pane_cp05

0xea10,	// (0x00093c34) list_cale_preview_pane_ParamLimits

0xea10,	// (0x00093c34) list_cale_preview_pane

0xa849,	// (0x0008fa6d) list_double_cale_preview_pane_ParamLimits

0xa849,	// (0x0008fa6d) list_double_cale_preview_pane

0xa85b,	// (0x0008fa7f) list_single_cale_preview_pane_ParamLimits

0xa85b,	// (0x0008fa7f) list_single_cale_preview_pane

0xa86f,	// (0x0008fa93) list_single_cale_preview_pane_g1

0xa877,	// (0x0008fa9b) list_single_cale_preview_pane_t1_ParamLimits

0xa877,	// (0x0008fa9b) list_single_cale_preview_pane_t1

0xa88c,	// (0x0008fab0) list_double_cale_preview_pane_g1

0xa894,	// (0x0008fab8) list_double_cale_preview_pane_t1_ParamLimits

0xa894,	// (0x0008fab8) list_double_cale_preview_pane_t1

0xa8a9,	// (0x0008facd) list_double_cale_preview_pane_t2_ParamLimits

0xa8a9,	// (0x0008facd) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x00095088) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x00095088) list_double_cale_preview_pane_t

0x07a0,	// (0x000859c4) main_ezdial_pane

0x10b1,	// (0x000862d5) main_sp_fs_email_pane_ParamLimits

0x9fda,	// (0x0008f1fe) cmail_ddmenu_btn01_pane_ParamLimits

0x9fda,	// (0x0008f1fe) cmail_ddmenu_btn01_pane

0x9fed,	// (0x0008f211) cmail_ddmenu_btn02_pane_ParamLimits

0x9fed,	// (0x0008f211) cmail_ddmenu_btn02_pane

0xa010,	// (0x0008f234) cmail_ddmenu_btn03_pane_ParamLimits

0xa010,	// (0x0008f234) cmail_ddmenu_btn03_pane

0xa034,	// (0x0008f258) main_sp_fs_ctrlbar_pane_ParamLimits

0xa058,	// (0x0008f27c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa4cb,	// (0x0008f6ef) list_cmail_body_pane_ParamLimits

0xe641,	// (0x00093865) bg_button_pane_cp12

0xe656,	// (0x0009387a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe656,	// (0x0009387a) list_single_cmail_header_detail_pane_g3

0xa553,	// (0x0008f777) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa553,	// (0x0008f777) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0009500d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0009500d) list_single_cmail_header_detail_pane_t

0xe782,	// (0x000939a6) phacti_term_pane_t2_ParamLimits

0xe782,	// (0x000939a6) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00095017) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00095017) phacti_term_pane_t

0xea1c,	// (0x00093c40) aid_size_list_single_double

0xa8c1,	// (0x0008fae5) popup_ezdial_listscroll_window

0xa8dd,	// (0x0008fb01) popup_number_entry_window_cp01

0xbb23,	// (0x00090d47) bg_popup_call_pane_cp09

0xea28,	// (0x00093c4c) ezdial_list_pane

0xea30,	// (0x00093c54) scroll_pane_cp23

0x10a3,	// (0x000862c7) bg_button_pane_cp028_ParamLimits

0x10a3,	// (0x000862c7) bg_button_pane_cp028

0xa8eb,	// (0x0008fb0f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa8eb,	// (0x0008fb0f) cmail_ddmenu_btn01_pane_g1

0xa8f7,	// (0x0008fb1b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa8f7,	// (0x0008fb1b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0009508d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0009508d) cmail_ddmenu_btn01_pane_g

0xea38,	// (0x00093c5c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea38,	// (0x00093c5c) cmail_ddmenu_btn01_pane_t1

0x10a3,	// (0x000862c7) bg_button_pane_cp029_ParamLimits

0x10a3,	// (0x000862c7) bg_button_pane_cp029

0xa903,	// (0x0008fb27) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa903,	// (0x0008fb27) cmail_ddmenu_btn02_pane_g1

0xa91b,	// (0x0008fb3f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa91b,	// (0x0008fb3f) cmail_ddmenu_btn02_pane_t1

0x10b1,	// (0x000862d5) bg_button_pane_cp031_ParamLimits

0x10b1,	// (0x000862d5) bg_button_pane_cp031

0xa903,	// (0x0008fb27) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa903,	// (0x0008fb27) cmail_ddmenu_btn03_pane_g1

0xa91b,	// (0x0008fb3f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa91b,	// (0x0008fb3f) cmail_ddmenu_btn03_pane_t1

0x7bd6,	// (0x0008cdfa) cell_dialer2_keypad_pane_t1_ParamLimits

0x7bf0,	// (0x0008ce14) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7bf0,	// (0x0008ce14) cell_dialer2_keypad_pane_t1_copy1

0x98d0,	// (0x0008eaf4) ncimui_group_button_pane

0x10b1,	// (0x000862d5) main_sp_fs_calendar_pane_ParamLimits

0xa4e3,	// (0x0008f707) list_single_cmail_header_caption_pane_ParamLimits

0xe7cd,	// (0x000939f1) aid_recal_txt_sm_pane

0x07a0,	// (0x000859c4) mian_recal_day_pane

0xe80c,	// (0x00093a30) popup_sp_fs_cale_preview_window_ParamLimits

0x07a0,	// (0x000859c4) list_recal_day_pane

0xea6f,	// (0x00093c93) list_single_recal_day_pane_ParamLimits

0xea6f,	// (0x00093c93) list_single_recal_day_pane

0xea81,	// (0x00093ca5) list_single_recal_day_pane_g1_ParamLimits

0xea81,	// (0x00093ca5) list_single_recal_day_pane_g1

0xea8d,	// (0x00093cb1) list_single_recal_day_pane_g2_ParamLimits

0xea8d,	// (0x00093cb1) list_single_recal_day_pane_g2

0xea9c,	// (0x00093cc0) list_single_recal_day_pane_g3_ParamLimits

0xea9c,	// (0x00093cc0) list_single_recal_day_pane_g3

0xa93f,	// (0x0008fb63) list_single_recal_day_pane_g4_ParamLimits

0xa93f,	// (0x0008fb63) list_single_recal_day_pane_g4

0xeaa8,	// (0x00093ccc) list_single_recal_day_pane_g5_ParamLimits

0xeaa8,	// (0x00093ccc) list_single_recal_day_pane_g5

0xeab7,	// (0x00093cdb) list_single_recal_day_pane_g6_ParamLimits

0xeab7,	// (0x00093cdb) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0009509c) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0009509c) list_single_recal_day_pane_g

0xeac3,	// (0x00093ce7) list_single_recal_day_pane_t1

0xead1,	// (0x00093cf5) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x000950a9) list_single_recal_day_pane_t

0xa952,	// (0x0008fb76) ncimui_query_button_pane_ParamLimits

0xa952,	// (0x0008fb76) ncimui_query_button_pane

0xa962,	// (0x0008fb86) ncimui_query_button_pane_t1_ParamLimits

0xa962,	// (0x0008fb86) ncimui_query_button_pane_t1

0xeadf,	// (0x00093d03) ncimui_query_button_pane_t2_ParamLimits

0xeadf,	// (0x00093d03) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x000950ae) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x000950ae) ncimui_query_button_pane_t

0xa975,	// (0x0008fb99) query_button_pane_ParamLimits

0xa975,	// (0x0008fb99) query_button_pane

0x07a0,	// (0x000859c4) bg_button_pane_cp0028

0xeaf2,	// (0x00093d16) query_button_pane_t1

0x5cae,	// (0x0008aed2) main_tport_pane_ParamLimits

0xa3c5,	// (0x0008f5e9) bg_popup_window_pane_cp01_ParamLimits

0xa3c5,	// (0x0008f5e9) bg_popup_window_pane_cp01

0xa3df,	// (0x0008f603) heading_pane_cp08_ParamLimits

0xa3df,	// (0x0008f603) heading_pane_cp08

0xa3f3,	// (0x0008f617) heading_pane_cp07_ParamLimits

0xa3f3,	// (0x0008f617) heading_pane_cp07

0xa470,	// (0x0008f694) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00094ffa) cell_tport_appsw_pane_g

0x5252,	// (0x0008a476) input_candi_list_open_g1

0xb56e,	// (0x00090792) list_cale_time_pane_g6_ParamLimits

0xb56e,	// (0x00090792) list_cale_time_pane_g6

0x6a77,	// (0x0008bc9b) aid_size_touch_calib_1_ParamLimits

0x6a77,	// (0x0008bc9b) aid_size_touch_calib_1

0x6a83,	// (0x0008bca7) aid_size_touch_calib_2_ParamLimits

0x6a83,	// (0x0008bca7) aid_size_touch_calib_2

0x6a99,	// (0x0008bcbd) aid_size_touch_calib_3_ParamLimits

0x6a99,	// (0x0008bcbd) aid_size_touch_calib_3

0x6ab7,	// (0x0008bcdb) aid_size_touch_calib_4_ParamLimits

0x6ab7,	// (0x0008bcdb) aid_size_touch_calib_4

0x6acd,	// (0x0008bcf1) main_touch_calib_button_group_pane_ParamLimits

0x6acd,	// (0x0008bcf1) main_touch_calib_button_group_pane

0x6ae4,	// (0x0008bd08) main_touch_calib_pane_g1_ParamLimits

0x6af0,	// (0x0008bd14) main_touch_calib_pane_g2_ParamLimits

0x6afc,	// (0x0008bd20) main_touch_calib_pane_g3_ParamLimits

0x6b08,	// (0x0008bd2c) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x000949dc) main_touch_calib_pane_g_ParamLimits

0x6b14,	// (0x0008bd38) main_touch_calib_pane_t1_ParamLimits

0x6b2e,	// (0x0008bd52) main_touch_calib_pane_t2_ParamLimits

0x6b48,	// (0x0008bd6c) main_touch_calib_pane_t3_ParamLimits

0x6b5c,	// (0x0008bd80) main_touch_calib_pane_t4_ParamLimits

0x6b70,	// (0x0008bd94) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x000949e5) main_touch_calib_pane_t_ParamLimits

0x1867,	// (0x00086a8b) list_single_fp_cale_pane_g3_ParamLimits

0x1867,	// (0x00086a8b) list_single_fp_cale_pane_g3

0xefdf,	// (0x00094203) bg_button_pane_cp012_ParamLimits

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp03_ParamLimits

0x8bb2,	// (0x0008ddd6) cell_vitu2_function_top_pane_g1_ParamLimits

0xefdf,	// (0x00094203) bg_vkb2_func_pane_cp04_ParamLimits

0x9884,	// (0x0008eaa8) main_ncimui_button_group_pane_ParamLimits

0x9884,	// (0x0008eaa8) main_ncimui_button_group_pane

0x98be,	// (0x0008eae2) main_ncimui_pane_t3_ParamLimits

0x98be,	// (0x0008eae2) main_ncimui_pane_t3

0xe730,	// (0x00093954) phacti_button_group_pane

0xea1c,	// (0x00093c40) aid_size_list_single_double_ParamLimits

0xa8c1,	// (0x0008fae5) popup_ezdial_listscroll_window_ParamLimits

0xa8dd,	// (0x0008fb01) popup_number_entry_window_cp01_ParamLimits

0xa988,	// (0x0008fbac) phacti_button_pane_ParamLimits

0xa988,	// (0x0008fbac) phacti_button_pane

0x07a0,	// (0x000859c4) bg_button_pane_cp14

0xeb00,	// (0x00093d24) phacti_button_pane_t1

0xa999,	// (0x0008fbbd) main_touch_calib_button_pane_ParamLimits

0xa999,	// (0x0008fbbd) main_touch_calib_button_pane

0x318b,	// (0x000883af) bg_button_pane_cp18_ParamLimits

0x318b,	// (0x000883af) bg_button_pane_cp18

0xeb0e,	// (0x00093d32) main_touch_calib_button_pane_t1_ParamLimits

0xeb0e,	// (0x00093d32) main_touch_calib_button_pane_t1

0xeb24,	// (0x00093d48) main_touch_calib_button_pane_t2_ParamLimits

0xeb24,	// (0x00093d48) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x000950b3) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x000950b3) main_touch_calib_button_pane_t

0x07a0,	// (0x000859c4) cell_ncimui_button_pane

0x07a0,	// (0x000859c4) bg_button_pane_cp032

0xeb42,	// (0x00093d66) cell_ncimui_button_pane_t1

0xef5f,	// (0x00094183) image3_infobar_pane_ParamLimits

0xef5f,	// (0x00094183) image3_infobar_pane

0x9c4c,	// (0x0008ee70) fs_bigclock_status_pane_ParamLimits

0x9c4c,	// (0x0008ee70) fs_bigclock_status_pane

0x9c59,	// (0x0008ee7d) main_fs_bigclock_clock_pane_ParamLimits

0x9c59,	// (0x0008ee7d) main_fs_bigclock_clock_pane

0x9c6c,	// (0x0008ee90) main_fs_bigclock_indi_pane_ParamLimits

0x9c6c,	// (0x0008ee90) main_fs_bigclock_indi_pane

0x9c84,	// (0x0008eea8) main_fs_bigclock_swipe_pane_ParamLimits

0x9c84,	// (0x0008eea8) main_fs_bigclock_swipe_pane

0x07a0,	// (0x000859c4) main_fs_clock_dumped_data

0xe041,	// (0x00093265) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe041,	// (0x00093265) list_single_fs_bigclock_indicator_pane_g1

0xe05f,	// (0x00093283) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe05f,	// (0x00093283) list_single_fs_bigclock_indicator_pane_g2

0xe079,	// (0x0009329d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe079,	// (0x0009329d) list_single_fs_bigclock_indicator_pane_g3

0xe093,	// (0x000932b7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe093,	// (0x000932b7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00094ee6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00094ee6) list_single_fs_bigclock_indicator_pane_g

0xe0b9,	// (0x000932dd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0b9,	// (0x000932dd) list_single_fs_bigclock_indicator_pane_t1

0xe0e1,	// (0x00093305) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0e1,	// (0x00093305) list_single_fs_bigclock_indicator_pane_t2

0xe109,	// (0x0009332d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe109,	// (0x0009332d) list_single_fs_bigclock_indicator_pane_t3

0xe131,	// (0x00093355) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe131,	// (0x00093355) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00094ef1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00094ef1) list_single_fs_bigclock_indicator_pane_t

0xeb50,	// (0x00093d74) image3_infobar_fav_pane_ParamLimits

0xeb50,	// (0x00093d74) image3_infobar_fav_pane

0xeb60,	// (0x00093d84) image3_infobar_loc_pane_ParamLimits

0xeb60,	// (0x00093d84) image3_infobar_loc_pane

0xeb74,	// (0x00093d98) image3_infobar_time_pane_ParamLimits

0xeb74,	// (0x00093d98) image3_infobar_time_pane

0x14fa,	// (0x0008671e) image3_infobar_time_pane_g1

0xeb84,	// (0x00093da8) image3_infobar_time_pane_t1

0x14fa,	// (0x0008671e) image3_infobar_loc_pane_g1

0xeb92,	// (0x00093db6) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x000950b8) image3_infobar_loc_pane_g

0xeb9a,	// (0x00093dbe) image3_infobar_loc_pane_t1

0x14fa,	// (0x0008671e) image3_infobar_fav_pane_g1

0xeba8,	// (0x00093dcc) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x000950bd) image3_infobar_fav_pane_g

0xebb0,	// (0x00093dd4) fs_bigclock_status_battery_pane

0xebb9,	// (0x00093ddd) fs_bigclock_status_signal_pane

0xebc2,	// (0x00093de6) fs_bigclock_status_title_pane

0xebcb,	// (0x00093def) fs_bigclock_status_signal_pane_g1

0xebd4,	// (0x00093df8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x000950c2) fs_bigclock_status_signal_pane_g

0xebdc,	// (0x00093e00) fs_bigclock_status_battery_pane_g1

0xebe5,	// (0x00093e09) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x000950c7) fs_bigclock_status_battery_pane_g

0xebed,	// (0x00093e11) fs_bigclock_status_title_pane_t1

0x14fa,	// (0x0008671e) main_fs_bigclock_clock_pane_g1

0xebfb,	// (0x00093e1f) main_fs_bigclock_clock_pane_g2

0xebfb,	// (0x00093e1f) main_fs_bigclock_clock_pane_g3

0xebfb,	// (0x00093e1f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x000950cc) main_fs_bigclock_clock_pane_g

0xec03,	// (0x00093e27) main_fs_bigclock_clock_pane_t1

0xec11,	// (0x00093e35) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x000950d5) main_fs_bigclock_clock_pane_t

0xec20,	// (0x00093e44) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec20,	// (0x00093e44) list_single_fs_bigclock_indicator_pane

0xa9ae,	// (0x0008fbd2) list_single_fs_bigclock_pane_ParamLimits

0xa9ae,	// (0x0008fbd2) list_single_fs_bigclock_pane

0xec3a,	// (0x00093e5e) main_fs_bigclock_indicator_pane_t1

0xec49,	// (0x00093e6d) list_single_fs_bigclock_pane_g1

0xec51,	// (0x00093e75) list_single_fs_bigclock_pane_t1

0x14fa,	// (0x0008671e) main_fs_bigclock_swipe_pane_g1

0xec8f,	// (0x00093eb3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x000950e6) main_fs_bigclock_swipe_pane_g

0xec97,	// (0x00093ebb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec97,	// (0x00093ebb) main_fs_bigclock_swipe_pane_t1

0x4a89,	// (0x00089cad) call_type_pane_ParamLimits

0x07a0,	// (0x000859c4) main_btmg_pane

0xe905,	// (0x00093b29) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe905,	// (0x00093b29) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x00095059) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x00095059) list_single_cale_mrui_row_pane_g

0xea56,	// (0x00093c7a) list_recal_vselct_arw_lo_pane

0xea5e,	// (0x00093c82) list_recal_vselct_arw_up_pane

0xea66,	// (0x00093c8a) list_recal_vselct_pane

0xecb4,	// (0x00093ed8) btmg_button_pane

0xaa14,	// (0x0008fc38) main_btmg_pane_g1

0x07a0,	// (0x000859c4) bg_button_pane_cp044

0xecbe,	// (0x00093ee2) btmg_button_pane_t1

0x109b,	// (0x000862bf) aid_listscroll_gen

0x10b1,	// (0x000862d5) main_cntbar_detail_pane

0xe622,	// (0x00093846) list_cmail_folder_pane

0xe632,	// (0x00093856) sp_fs_scroll_pane_cp03_ParamLimits

0xaa1e,	// (0x0008fc42) list_single_fs_dyc_pane_cp01_ParamLimits

0xaa1e,	// (0x0008fc42) list_single_fs_dyc_pane_cp01

0xf126,	// (0x0009434a) aid_size_cmail_indent

0xeccc,	// (0x00093ef0) list_single_dyc_row_pane_cp01

0xaa67,	// (0x0008fc8b) cntbar_detail_list_pane_ParamLimits

0xaa67,	// (0x0008fc8b) cntbar_detail_list_pane

0xaab3,	// (0x0008fcd7) main_cntbar_detail_cont_pane_ParamLimits

0xaab3,	// (0x0008fcd7) main_cntbar_detail_cont_pane

0x4a23,	// (0x00089c47) scroll_pane_cp032_ParamLimits

0x4a23,	// (0x00089c47) scroll_pane_cp032

0xaac7,	// (0x0008fceb) cntbar_detail_list_event_pane_ParamLimits

0xaac7,	// (0x0008fceb) cntbar_detail_list_event_pane

0xaa77,	// (0x0008fc9b) cntbar_detail_list_shct_pane

0xb3c9,	// (0x000905ed) aid_list_gen

0x004d,	// (0x00085271) aid_scroll

0x0056,	// (0x0008527a) aid_size_touch_scroll_bar

0xaad7,	// (0x0008fcfb) aid_list_double

0x005f,	// (0x00085283) aid_list_single

0x1b85,	// (0x00086da9) aid_list_single_lg

0xecd5,	// (0x00093ef9) aid_list_z_g_a_sm

0x0068,	// (0x0008528c) aid_list_z_g_d

0xecdd,	// (0x00093f01) aid_txt_z_prm

0xaae0,	// (0x0008fd04) aid_txt_z_prm_cp01

0xaaee,	// (0x0008fd12) aid_txt_z_sec

0xaafc,	// (0x0008fd20) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaafc,	// (0x0008fd20) main_cntbar_detail_cont_pane_g1

0xab10,	// (0x0008fd34) main_cntbar_detail_cont_pane_g2_ParamLimits

0xab10,	// (0x0008fd34) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x000950eb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x000950eb) main_cntbar_detail_cont_pane_g

0x00a5,	// (0x000852c9) main_cntbar_detail_cont_pane_t1

0x00b3,	// (0x000852d7) main_cntbar_detail_cont_pane_t2

0x00c1,	// (0x000852e5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x000950f0) main_cntbar_detail_cont_pane_t

0xab20,	// (0x0008fd44) cell_cntbar_detail_list_shct_pane_ParamLimits

0xab20,	// (0x0008fd44) cell_cntbar_detail_list_shct_pane

0x00e3,	// (0x00085307) cntbar_detail_list_shct_pane_g1

0x00ec,	// (0x00085310) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x000950f7) cntbar_detail_list_shct_pane_g

0xab34,	// (0x0008fd58) cntbar_detail_list_event_pane_g1_ParamLimits

0xab34,	// (0x0008fd58) cntbar_detail_list_event_pane_g1

0xab40,	// (0x0008fd64) cntbar_detail_list_event_pane_g2_ParamLimits

0xab40,	// (0x0008fd64) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x000950fc) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x000950fc) cntbar_detail_list_event_pane_g

0xabac,	// (0x0008fdd0) cntbar_detail_list_event_pane_t1_ParamLimits

0xabac,	// (0x0008fdd0) cntbar_detail_list_event_pane_t1

0xabc1,	// (0x0008fde5) cntbar_detail_list_event_pane_t2_ParamLimits

0xabc1,	// (0x0008fde5) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00095109) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00095109) cntbar_detail_list_event_pane_t

0x14fa,	// (0x0008671e) cell_cntbar_detail_list_shct_pane_g1

0x4ddc,	// (0x0008a000) navi_pane_mv_g3

0x10b1,	// (0x000862d5) main_cntbar_detail_pane_ParamLimits

0x07a0,	// (0x000859c4) main_notif_wgt_pane

0xed9f,	// (0x00093fc3) aid_tch_main_mp4_pane_g4

0xef57,	// (0x0009417b) popup_slider_window_cp02

0xea4d,	// (0x00093c71) list_recal_day_event_pane

0xaa3b,	// (0x0008fc5f) cntbar_detail_btn_pane_ParamLimits

0xaa3b,	// (0x0008fc5f) cntbar_detail_btn_pane

0xaa51,	// (0x0008fc75) cntbar_detail_btn_pane_cp01_ParamLimits

0xaa51,	// (0x0008fc75) cntbar_detail_btn_pane_cp01

0xaa77,	// (0x0008fc9b) cntbar_detail_list_shct_pane_ParamLimits

0xaa87,	// (0x0008fcab) cntbar_detail_pane_g1_ParamLimits

0xaa87,	// (0x0008fcab) cntbar_detail_pane_g1

0xaa97,	// (0x0008fcbb) cntbar_detail_pane_t1_ParamLimits

0xaa97,	// (0x0008fcbb) cntbar_detail_pane_t1

0xab4c,	// (0x0008fd70) cntbar_detail_list_event_pane_g3_ParamLimits

0xab4c,	// (0x0008fd70) cntbar_detail_list_event_pane_g3

0xab64,	// (0x0008fd88) cntbar_detail_list_event_pane_g4_ParamLimits

0xab64,	// (0x0008fd88) cntbar_detail_list_event_pane_g4

0xab7c,	// (0x0008fda0) cntbar_detail_list_event_pane_g5_ParamLimits

0xab7c,	// (0x0008fda0) cntbar_detail_list_event_pane_g5

0xab94,	// (0x0008fdb8) cntbar_detail_list_event_pane_g6_ParamLimits

0xab94,	// (0x0008fdb8) cntbar_detail_list_event_pane_g6

0xabd6,	// (0x0008fdfa) cntbar_detail_list_event_pane_t3_ParamLimits

0xabd6,	// (0x0008fdfa) cntbar_detail_list_event_pane_t3

0xabe8,	// (0x0008fe0c) popup_notif_wgt_window_ParamLimits

0xabe8,	// (0x0008fe0c) popup_notif_wgt_window

0xac01,	// (0x0008fe25) popup_submenu_window_cp01_ParamLimits

0xac01,	// (0x0008fe25) popup_submenu_window_cp01

0xbb23,	// (0x00090d47) bg_popup_window_pane_cp10

0x01c7,	// (0x000853eb) listscroll_notif_wgt_pane

0x01d1,	// (0x000853f5) list_notif_wgt_window

0x01da,	// (0x000853fe) scroll_pane_cp033

0x01e3,	// (0x00085407) list_notif_wgt_row_pane_ParamLimits

0x01e3,	// (0x00085407) list_notif_wgt_row_pane

0x01f7,	// (0x0008541b) aid_size_list_notif_wgt_del

0x0200,	// (0x00085424) list_notif_wgt_row_pane_g1

0x0208,	// (0x0008542c) list_notif_wgt_row_pane_g2

0x0210,	// (0x00085434) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00095110) list_notif_wgt_row_pane_g

0x0219,	// (0x0008543d) list_notif_wgt_row_pane_t1

0x0227,	// (0x0008544b) list_notif_wgt_row_pane_t2

0x0235,	// (0x00085459) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00095117) list_notif_wgt_row_pane_t

0xd3bf,	// (0x000925e3) list_recal_day_event_pane_g1

0x0243,	// (0x00085467) list_recal_day_event_pane_t1

0x07a0,	// (0x000859c4) bg_button_pane_cp045

0x0252,	// (0x00085476) cntbar_detail_btn_pane_t1

0x10a3,	// (0x000862c7) main_callh_pane_ParamLimits

0x10a3,	// (0x000862c7) main_callh_pane

0x07a0,	// (0x000859c4) main_coverflow0_pane

0x07a0,	// (0x000859c4) main_wgtman_pane

0x9c92,	// (0x0008eeb6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9c92,	// (0x0008eeb6) main_fs_bigclock_unlock_btn_pane

0xa460,	// (0x0008f684) bg_button_pane_cp16

0xa478,	// (0x0008f69c) cell_tport_appsw_pane_g3

0xac13,	// (0x0008fe37) cf0_flow_pane_ParamLimits

0xac13,	// (0x0008fe37) cf0_flow_pane

0x026f,	// (0x00085493) listscroll_cf0_pane

0x0278,	// (0x0008549c) main_cf0_pane_g1

0xac28,	// (0x0008fe4c) main_cf0_pane_t1_ParamLimits

0xac28,	// (0x0008fe4c) main_cf0_pane_t1

0xac40,	// (0x0008fe64) main_cf0_pane_t2_ParamLimits

0xac40,	// (0x0008fe64) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0009511e) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0009511e) main_cf0_pane_t

0x02aa,	// (0x000854ce) scroll_pane_cp11

0xac58,	// (0x0008fe7c) cf0_flow_pane_g1

0xac60,	// (0x0008fe84) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00095123) cf0_flow_pane_g

0xac68,	// (0x0008fe8c) cf0_flow_pane_t1

0x07a0,	// (0x000859c4) main_call6_pane

0x07a0,	// (0x000859c4) main_calllock_pane

0xac76,	// (0x0008fe9a) call6_btn_grp_pane_ParamLimits

0xac76,	// (0x0008fe9a) call6_btn_grp_pane

0xac90,	// (0x0008feb4) call6_pane_g1_ParamLimits

0xac90,	// (0x0008feb4) call6_pane_g1

0xaca5,	// (0x0008fec9) popup_call6_1st_window_ParamLimits

0xaca5,	// (0x0008fec9) popup_call6_1st_window

0xacb6,	// (0x0008feda) popup_call6_2nd_window_ParamLimits

0xacb6,	// (0x0008feda) popup_call6_2nd_window

0xacc7,	// (0x0008feeb) cell_call6_btn_pane_ParamLimits

0xacc7,	// (0x0008feeb) cell_call6_btn_pane

0xbb23,	// (0x00090d47) bg_popup_call2_in_pane_cp03

0x031c,	// (0x00085540) popup_call6_1st_window_g1

0x0324,	// (0x00085548) popup_call6_1st_window_g2

0x032c,	// (0x00085550) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00095128) popup_call6_1st_window_g

0x0334,	// (0x00085558) popup_call6_1st_window_t1

0x0343,	// (0x00085567) popup_call6_1st_window_t2

0x0353,	// (0x00085577) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0009512f) popup_call6_1st_window_t

0xbb23,	// (0x00090d47) bg_popup_call2_in_pane_cp04

0x031c,	// (0x00085540) popup_call6_2nd_window_g1

0x0324,	// (0x00085548) popup_call6_2nd_window_g2

0x032c,	// (0x00085550) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00095128) popup_call6_2nd_window_g

0x0334,	// (0x00085558) popup_call6_2nd_window_t1

0x07a0,	// (0x000859c4) bg_button_pane_cp15

0x0363,	// (0x00085587) cell_call6_btn_pane_g1

0x036c,	// (0x00085590) cell_call6_btn_pane_t1

0xacdb,	// (0x0008feff) listscroll_wgtman_pane_ParamLimits

0xacdb,	// (0x0008feff) listscroll_wgtman_pane

0xacf3,	// (0x0008ff17) wgtman_btn_pane_ParamLimits

0xacf3,	// (0x0008ff17) wgtman_btn_pane

0xb9d6,	// (0x00090bfa) aid_scroll_copy1

0x0398,	// (0x000855bc) list_wgtman_pane

0xad0c,	// (0x0008ff30) wgtman_btn_pane_g1_ParamLimits

0xad0c,	// (0x0008ff30) wgtman_btn_pane_g1

0xad20,	// (0x0008ff44) wgtman_btn_pane_t1_ParamLimits

0xad20,	// (0x0008ff44) wgtman_btn_pane_t1

0x03c0,	// (0x000855e4) wgtman_btn_pane_t2_ParamLimits

0x03c0,	// (0x000855e4) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00095136) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00095136) wgtman_btn_pane_t

0xad3b,	// (0x0008ff5f) listrow_wgtman_pane_ParamLimits

0xad3b,	// (0x0008ff5f) listrow_wgtman_pane

0xad4e,	// (0x0008ff72) listrow_wgtman_pane_g1

0xad57,	// (0x0008ff7b) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0009513b) listrow_wgtman_pane_g

0xad61,	// (0x0008ff85) listrow_wgtman_pane_t1

0xad6f,	// (0x0008ff93) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00095140) listrow_wgtman_pane_t

0xad7d,	// (0x0008ffa1) wait_bar_pane_cp09

0x0425,	// (0x00085649) main_calllock_btn_pane

0x042f,	// (0x00085653) main_calllock_pane_g1

0x07a0,	// (0x000859c4) bg_button_pane_cp17

0x043a,	// (0x0008565e) main_calllock_btn_pane_g1

0x0443,	// (0x00085667) main_calllock_btn_pane_t1

0x07a0,	// (0x000859c4) main_dialer3_pane

0x07a0,	// (0x000859c4) main_fmrd2_pane

0x14fa,	// (0x0008671e) main_fs_bigclock_unlock_btn_pane_g1

0x045a,	// (0x0008567e) main_fs_bigclock_unlock_btn_pane_t1

0xad85,	// (0x0008ffa9) area_fmrd2_info_pane_ParamLimits

0xad85,	// (0x0008ffa9) area_fmrd2_info_pane

0xad97,	// (0x0008ffbb) area_fmrd2_visual_pane_ParamLimits

0xad97,	// (0x0008ffbb) area_fmrd2_visual_pane

0xada5,	// (0x0008ffc9) fmrd2_indi_pane_ParamLimits

0xada5,	// (0x0008ffc9) fmrd2_indi_pane

0xadb2,	// (0x0008ffd6) area_fmrd2_visual_pane_g1

0xadba,	// (0x0008ffde) area_fmrd2_visual_pane_t1

0xadca,	// (0x0008ffee) area_fmrd2_visual_pane_t2

0xadda,	// (0x0008fffe) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0009514a) area_fmrd2_visual_pane_t

0xadea,	// (0x0009000e) area_fmrd2_info_pane_g1

0xadf2,	// (0x00090016) area_fmrd2_info_pane_t1

0xae02,	// (0x00090026) area_fmrd2_info_pane_t2

0xae12,	// (0x00090036) area_fmrd2_info_pane_t3

0xae22,	// (0x00090046) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00095151) area_fmrd2_info_pane_t

0xae30,	// (0x00090054) fmrd2_indi_pane_t1

0xae40,	// (0x00090064) fmrd2_indi_pane_t2

0xae50,	// (0x00090074) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0009515a) fmrd2_indi_pane_t

0xe0a2,	// (0x000932c6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0a2,	// (0x000932c6) list_single_fs_bigclock_indicator_pane_g5

0xe146,	// (0x0009336a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe146,	// (0x0009336a) list_single_fs_bigclock_indicator_pane_t5

0xa638,	// (0x0008f85c) aid_cell_bcale_month_pane_ParamLimits

0xa638,	// (0x0008f85c) aid_cell_bcale_month_pane

0xa64a,	// (0x0008f86e) bcale_month_pane_ParamLimits

0xa64a,	// (0x0008f86e) bcale_month_pane

0xa664,	// (0x0008f888) bcale_preview_pane_ParamLimits

0xa664,	// (0x0008f888) bcale_preview_pane

0xec51,	// (0x00093e75) list_single_fs_bigclock_pane_t1_ParamLimits

0xec6b,	// (0x00093e8f) list_single_fs_bigclock_pane_t2_ParamLimits

0xec6b,	// (0x00093e8f) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x000950e1) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x000950e1) list_single_fs_bigclock_pane_t

0x0452,	// (0x00085676) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00095145) main_fs_bigclock_unlock_btn_pane_g

0xae60,	// (0x00090084) aid_dia3_key_size_ParamLimits

0xae60,	// (0x00090084) aid_dia3_key_size

0xae6f,	// (0x00090093) aid_dia3_listrow_size_ParamLimits

0xae6f,	// (0x00090093) aid_dia3_listrow_size

0xae7d,	// (0x000900a1) dia3_keypad_fun_pane_ParamLimits

0xae7d,	// (0x000900a1) dia3_keypad_fun_pane

0xae97,	// (0x000900bb) dia3_keypad_num_pane_ParamLimits

0xae97,	// (0x000900bb) dia3_keypad_num_pane

0xaeb0,	// (0x000900d4) dia3_listscroll_pane_ParamLimits

0xaeb0,	// (0x000900d4) dia3_listscroll_pane

0xaec3,	// (0x000900e7) dia3_numentry_pane_ParamLimits

0xaec3,	// (0x000900e7) dia3_numentry_pane

0x0594,	// (0x000857b8) dia3_list_pane

0x059f,	// (0x000857c3) scroll_pane_cp12

0x07a0,	// (0x000859c4) bg_dia3_numentry_pane

0x05aa,	// (0x000857ce) dia3_numentry_pane_t1

0xaed4,	// (0x000900f8) cell_dia3_key_num_pane

0xaedc,	// (0x00090100) cell_dia3_key0_fun_pane_ParamLimits

0xaedc,	// (0x00090100) cell_dia3_key0_fun_pane

0xaef0,	// (0x00090114) cell_dia3_key1_fun_pane_ParamLimits

0xaef0,	// (0x00090114) cell_dia3_key1_fun_pane

0xd731,	// (0x00092955) dia3_listrow_pane

0xddc0,	// (0x00092fe4) bg_dia3_numentry_pane_g1

0x07a0,	// (0x000859c4) bg_button_pane_cp21

0x05e4,	// (0x00085808) cell_dia3_key_num_pane_t1

0x05f2,	// (0x00085816) cell_dia3_key_num_pane_t2

0x0601,	// (0x00085825) cell_dia3_key_num_pane_t3

0x0610,	// (0x00085834) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00095161) cell_dia3_key_num_pane_t

0x07a0,	// (0x000859c4) bg_button_pane_cp19

0xaf08,	// (0x0009012c) cell_dia3_key0_fun_pane_g1

0x07a0,	// (0x000859c4) bg_button_pane_cp20

0xaf10,	// (0x00090134) cell_dia3_key1_fun_pane_g1

0xaf18,	// (0x0009013c) area_left_week_number_pane

0xaf21,	// (0x00090145) area_top_day_name_pane

0xaf2a,	// (0x0009014e) frame_month_view_pane

0xaf36,	// (0x0009015a) grid_month_view_pane

0xaf40,	// (0x00090164) cell_top_day_name_pane_ParamLimits

0xaf40,	// (0x00090164) cell_top_day_name_pane

0xaf58,	// (0x0009017c) cell_area_left_week_number_pane_ParamLimits

0xaf58,	// (0x0009017c) cell_area_left_week_number_pane

0xaf6c,	// (0x00090190) cell_month_view_pane_ParamLimits

0xaf6c,	// (0x00090190) cell_month_view_pane

0x06a0,	// (0x000858c4) frm_month_g1

0xaf87,	// (0x000901ab) frm_month_g2

0xaf91,	// (0x000901b5) frm_month_g3

0xaf9b,	// (0x000901bf) frm_month_g4

0xafa5,	// (0x000901c9) frm_month_g5

0xafaf,	// (0x000901d3) frm_month_g6

0xafb9,	// (0x000901dd) frm_month_g7

0x06e5,	// (0x00085909) frm_month_g8

0xafc5,	// (0x000901e9) frm_month_g9

0xafce,	// (0x000901f2) frm_month_g10

0xafd7,	// (0x000901fb) frm_month_g11

0xafe0,	// (0x00090204) frm_month_g12

0xafe9,	// (0x0009020d) frm_month_g13

0xaff2,	// (0x00090216) frm_month_g14

0xaffb,	// (0x0009021f) frm_month_g15

0xb004,	// (0x00090228) frm_month_g16

0x000f,

0xff46,	// (0x0009516a) frm_month_g

0xb00f,	// (0x00090233) cell_top_day_name_pane_t1

0xb01e,	// (0x00090242) cell_area_left_week_number_pane_g1

0xb00f,	// (0x00090233) cell_area_left_week_number_pane_t1

0x14fa,	// (0x0008671e) cell_month_view_pane_g1

0xb026,	// (0x0009024a) cell_month_view_pane_t1

0x07a0,	// (0x000859c4) main_fps_pane

0xe375,	// (0x00093599) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe375,	// (0x00093599) cmail_ddmenu_btn02_pane_cp1

0xe391,	// (0x000935b5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe391,	// (0x000935b5) cmail_ddmenu_btn02_pane_cp2

0xa90f,	// (0x0008fb33) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa90f,	// (0x0008fb33) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x00095092) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x00095092) cmail_ddmenu_btn02_pane_g

0xa92d,	// (0x0008fb51) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa92d,	// (0x0008fb51) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x00095097) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x00095097) cmail_ddmenu_btn02_pane_t

0xb035,	// (0x00090259) fps_text_pane_ParamLimits

0xb035,	// (0x00090259) fps_text_pane

0xb04c,	// (0x00090270) main_fps_pane_g1_ParamLimits

0xb04c,	// (0x00090270) main_fps_pane_g1

0xb066,	// (0x0009028a) wait_bar_pane_cp010_ParamLimits

0xb066,	// (0x0009028a) wait_bar_pane_cp010

0xb077,	// (0x0009029b) fps_text_pane_t1_ParamLimits

0xb077,	// (0x0009029b) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
