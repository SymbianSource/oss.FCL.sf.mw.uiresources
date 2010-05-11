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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00076256 };

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
0x6789,	// (0x0007c9df) Screen

0x6795,	// (0x0007c9eb) application_window

0x67f1,	// (0x0007ca47) area_bottom_pane_ParamLimits

0x67f1,	// (0x0007ca47) area_bottom_pane

0x684a,	// (0x0007caa0) area_top_pane_ParamLimits

0x684a,	// (0x0007caa0) area_top_pane

0x68ae,	// (0x0007cb04) call_video_uplink_pane_ParamLimits

0x68ae,	// (0x0007cb04) call_video_uplink_pane

0x68ed,	// (0x0007cb43) main_pane_ParamLimits

0x68ed,	// (0x0007cb43) main_pane

0x1e86,	// (0x000780dc) context_pane

0x9c1d,	// (0x0007fe73) navi_pane

0x9c43,	// (0x0007fe99) popup_cale_events_window_ParamLimits

0x9c43,	// (0x0007fe99) popup_cale_events_window

0x1e99,	// (0x000780ef) popup_mup_playback_window

0x9c5b,	// (0x0007feb1) signal_pane

0xeeae,	// (0x00085104) main_browser_pane

0xf073,	// (0x000852c9) main_burst_pane

0x9aa9,	// (0x0007fcff) main_calc_pane

0x1e6c,	// (0x000780c2) main_cale_day_pane

0x702a,	// (0x0007d280) main_cale_month_pane

0x1e6c,	// (0x000780c2) main_cale_week_pane

0xf073,	// (0x000852c9) main_call_pane

0xeb77,	// (0x00084dcd) main_call_poc_pane

0xf073,	// (0x000852c9) main_camera_pane

0xf073,	// (0x000852c9) main_chi_dic_pane

0x07f7,	// (0x00076a4d) main_clock_pane

0xeb77,	// (0x00084dcd) main_fmradio_pane

0xf073,	// (0x000852c9) main_graph_messa_pane

0xeb77,	// (0x00084dcd) main_help_pane

0xeeae,	// (0x00085104) main_im_pane

0xede9,	// (0x0008503f) main_image_pane_ParamLimits

0xede9,	// (0x0008503f) main_image_pane

0xeb77,	// (0x00084dcd) main_location2_pane

0xf073,	// (0x000852c9) main_location_pane

0xede9,	// (0x0008503f) main_messa_pane

0xeb77,	// (0x00084dcd) main_mp2_pane

0xf073,	// (0x000852c9) main_mp_pane

0xeb77,	// (0x00084dcd) main_msg_pane

0xeb77,	// (0x00084dcd) main_mup_eq_pane

0xeb77,	// (0x00084dcd) main_mup_pane

0xeeae,	// (0x00085104) main_notes_pane

0xeb77,	// (0x00084dcd) main_pec_pane

0xeb77,	// (0x00084dcd) main_phob_pane

0xeb77,	// (0x00084dcd) main_pinb_pane

0xeb77,	// (0x00084dcd) main_postcard_pane

0xeb77,	// (0x00084dcd) main_qdial_pane

0xf073,	// (0x000852c9) main_skin_pane

0xeb77,	// (0x00084dcd) main_smil2_pane

0xf073,	// (0x000852c9) main_smil_pane

0xf073,	// (0x000852c9) main_video_pane

0xf073,	// (0x000852c9) main_video_tele_pane

0xede9,	// (0x0008503f) main_viewer_pane_ParamLimits

0xede9,	// (0x0008503f) main_viewer_pane

0xf073,	// (0x000852c9) main_vorec_pane

0x9ae7,	// (0x0007fd3d) popup_blid_sat_info_window_ParamLimits

0x9ae7,	// (0x0007fd3d) popup_blid_sat_info_window

0x9b07,	// (0x0007fd5d) popup_dyc_status_message_window_ParamLimits

0x9b07,	// (0x0007fd5d) popup_dyc_status_message_window

0x9b17,	// (0x0007fd6d) popup_grid_large_graphic_window_ParamLimits

0x9b17,	// (0x0007fd6d) popup_grid_large_graphic_window

0x9ba8,	// (0x0007fdfe) popup_loc_request_window_ParamLimits

0x9ba8,	// (0x0007fdfe) popup_loc_request_window

0x9bf5,	// (0x0007fe4b) popup_wml_address_window_ParamLimits

0x9bf5,	// (0x0007fe4b) popup_wml_address_window

0x9981,	// (0x0007fbd7) call_muted_g1

0x9643,	// (0x0007f899) popup_call_audio_conf_window_ParamLimits

0x9643,	// (0x0007f899) popup_call_audio_conf_window

0x9991,	// (0x0007fbe7) popup_call_audio_first_window_ParamLimits

0x9991,	// (0x0007fbe7) popup_call_audio_first_window

0x99d1,	// (0x0007fc27) popup_call_audio_in_window_ParamLimits

0x99d1,	// (0x0007fc27) popup_call_audio_in_window

0x99f5,	// (0x0007fc4b) popup_call_audio_out_window_ParamLimits

0x99f5,	// (0x0007fc4b) popup_call_audio_out_window

0x9a17,	// (0x0007fc6d) popup_call_audio_second_window_ParamLimits

0x9a17,	// (0x0007fc6d) popup_call_audio_second_window

0x9a47,	// (0x0007fc9d) popup_call_audio_wait_window_ParamLimits

0x9a47,	// (0x0007fc9d) popup_call_audio_wait_window

0x9a68,	// (0x0007fcbe) popup_number_entry_window_ParamLimits

0x9a68,	// (0x0007fcbe) popup_number_entry_window

0xe764,	// (0x000849ba) bg_popup_call_pane_cp05_ParamLimits

0xe764,	// (0x000849ba) bg_popup_call_pane_cp05

0xe784,	// (0x000849da) popup_number_entry_window_t1

0xe797,	// (0x000849ed) popup_number_entry_window_t2

0xe7a9,	// (0x000849ff) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00085320) popup_number_entry_window_t

0xe7bb,	// (0x00084a11) text_title_cp2

0xe7ce,	// (0x00084a24) bg_popup_call_pane_cp_ParamLimits

0xe7ce,	// (0x00084a24) bg_popup_call_pane_cp

0xe7dc,	// (0x00084a32) call_thumbnail_pane

0xe7e4,	// (0x00084a3a) popup_call_audio_in_window_g1_ParamLimits

0xe7e4,	// (0x00084a3a) popup_call_audio_in_window_g1

0xe7f0,	// (0x00084a46) popup_call_audio_in_window_g2_ParamLimits

0xe7f0,	// (0x00084a46) popup_call_audio_in_window_g2

0xe7fc,	// (0x00084a52) popup_call_audio_in_window_g3_ParamLimits

0xe7fc,	// (0x00084a52) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00085329) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00085329) popup_call_audio_in_window_g

0xe808,	// (0x00084a5e) popup_call_audio_in_window_t1_ParamLimits

0xe808,	// (0x00084a5e) popup_call_audio_in_window_t1

0xe824,	// (0x00084a7a) popup_call_audio_in_window_t2_ParamLimits

0xe824,	// (0x00084a7a) popup_call_audio_in_window_t2

0xe840,	// (0x00084a96) popup_call_audio_in_window_t3_ParamLimits

0xe840,	// (0x00084a96) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00085330) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00085330) popup_call_audio_in_window_t

0xe7ce,	// (0x00084a24) bg_popup_call_pane_cp01_ParamLimits

0xe7ce,	// (0x00084a24) bg_popup_call_pane_cp01

0xe7dc,	// (0x00084a32) call_thumbnail_pane_cp02

0xe853,	// (0x00084aa9) call_type_pane_cp022

0xe85b,	// (0x00084ab1) popup_call_audio_out_window_g1_ParamLimits

0xe85b,	// (0x00084ab1) popup_call_audio_out_window_g1

0xe86d,	// (0x00084ac3) popup_call_audio_out_window_g2_ParamLimits

0xe86d,	// (0x00084ac3) popup_call_audio_out_window_g2

0xe879,	// (0x00084acf) popup_call_audio_out_window_g3_ParamLimits

0xe879,	// (0x00084acf) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00085337) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00085337) popup_call_audio_out_window_g

0xe88b,	// (0x00084ae1) popup_call_audio_out_window_t1_ParamLimits

0xe88b,	// (0x00084ae1) popup_call_audio_out_window_t1

0xe8a3,	// (0x00084af9) popup_call_audio_out_window_t2_ParamLimits

0xe8a3,	// (0x00084af9) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008533e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008533e) popup_call_audio_out_window_t

0xe8b8,	// (0x00084b0e) bg_popup_call_pane_ParamLimits

0xe8b8,	// (0x00084b0e) bg_popup_call_pane

0x6aee,	// (0x0007cd44) call_thumbnail_pane_cp_ParamLimits

0x6aee,	// (0x0007cd44) call_thumbnail_pane_cp

0xe93c,	// (0x00084b92) call_type_pane_cp01_ParamLimits

0xe93c,	// (0x00084b92) call_type_pane_cp01

0xe980,	// (0x00084bd6) popup_call_audio_first_window_g1_ParamLimits

0xe980,	// (0x00084bd6) popup_call_audio_first_window_g1

0xe9cc,	// (0x00084c22) popup_call_audio_first_window_g2_ParamLimits

0xe9cc,	// (0x00084c22) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00085343) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00085343) popup_call_audio_first_window_g

0xea10,	// (0x00084c66) popup_call_audio_first_window_t1_ParamLimits

0xea10,	// (0x00084c66) popup_call_audio_first_window_t1

0xeabc,	// (0x00084d12) popup_call_audio_first_window_t4_ParamLimits

0xeabc,	// (0x00084d12) popup_call_audio_first_window_t4

0xeb48,	// (0x00084d9e) popup_call_audio_first_window_t5_ParamLimits

0xeb48,	// (0x00084d9e) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00085348) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00085348) popup_call_audio_first_window_t

0xeb77,	// (0x00084dcd) bg_popup_call_pane_cp02

0xeb81,	// (0x00084dd7) call_type_pane_cp023

0xeb89,	// (0x00084ddf) popup_call_audio_wait_window_g1

0xeb91,	// (0x00084de7) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008534f) popup_call_audio_wait_window_g

0xeb99,	// (0x00084def) popup_call_audio_wait_window_t3

0xeba7,	// (0x00084dfd) bg_popup_call_pane_cp03_ParamLimits

0xeba7,	// (0x00084dfd) bg_popup_call_pane_cp03

0xec1e,	// (0x00084e74) call_thumbnail_pane_cp011_ParamLimits

0xec1e,	// (0x00084e74) call_thumbnail_pane_cp011

0xec2a,	// (0x00084e80) call_type_pane_cp034_ParamLimits

0xec2a,	// (0x00084e80) call_type_pane_cp034

0xec66,	// (0x00084ebc) popup_call_audio_second_window_g1_ParamLimits

0xec66,	// (0x00084ebc) popup_call_audio_second_window_g1

0xeca2,	// (0x00084ef8) popup_call_audio_second_window_g2_ParamLimits

0xeca2,	// (0x00084ef8) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00085354) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00085354) popup_call_audio_second_window_g

0xecde,	// (0x00084f34) popup_call_audio_second_window_t1_ParamLimits

0xecde,	// (0x00084f34) popup_call_audio_second_window_t1

0xed5f,	// (0x00084fb5) popup_call_audio_second_window_t2_ParamLimits

0xed5f,	// (0x00084fb5) popup_call_audio_second_window_t2

0xed95,	// (0x00084feb) popup_call_audio_second_window_t3_ParamLimits

0xed95,	// (0x00084feb) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00085359) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00085359) popup_call_audio_second_window_t

0xeb77,	// (0x00084dcd) bg_popup_call_pane_cp04

0xedcb,	// (0x00085021) list_conf_pane

0xedd3,	// (0x00085029) popup_call_audio_conf_window_t1

0xede1,	// (0x00085037) call_thumbnail_pane_g1

0xede9,	// (0x0008503f) bg_pinb_pane_ParamLimits

0xede9,	// (0x0008503f) bg_pinb_pane

0xedf7,	// (0x0008504d) find_pinb_pane

0xee00,	// (0x00085056) listscroll_pinb_pane_ParamLimits

0xee00,	// (0x00085056) listscroll_pinb_pane

0xee0f,	// (0x00085065) pinb_bg_pane_g1

0x6b12,	// (0x0007cd68) pinb_bg_pane_g2

0x6b1e,	// (0x0007cd74) pinb_bg_pane_g3

0x6b2a,	// (0x0007cd80) pinb_bg_pane_g4

0x6b36,	// (0x0007cd8c) pinb_bg_pane_g5

0x6b42,	// (0x0007cd98) pinb_bg_pane_g6

0x6b4d,	// (0x0007cda3) pinb_bg_pane_g7

0x6b58,	// (0x0007cdae) pinb_bg_pane_g8

0x6b63,	// (0x0007cdb9) pinb_bg_pane_g9

0x6b6d,	// (0x0007cdc3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00085360) pinb_bg_pane_g

0x6b8a,	// (0x0007cde0) grid_pinb_pane

0x6b95,	// (0x0007cdeb) list_pinb_pane

0x6ba0,	// (0x0007cdf6) scroll_pane_cp01_ParamLimits

0x6ba0,	// (0x0007cdf6) scroll_pane_cp01

0xee19,	// (0x0008506f) find_pinb_pane_g1_ParamLimits

0xee19,	// (0x0008506f) find_pinb_pane_g1

0xee31,	// (0x00085087) find_pinb_pane_t1

0xee43,	// (0x00085099) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008537a) find_pinb_pane_t

0xee58,	// (0x000850ae) input_focus_pane_cp01_ParamLimits

0xee58,	// (0x000850ae) input_focus_pane_cp01

0x6bb2,	// (0x0007ce08) cell_pinb_pane_ParamLimits

0x6bb2,	// (0x0007ce08) cell_pinb_pane

0x6bda,	// (0x0007ce30) cell_pinb_pane_g1_ParamLimits

0x6bda,	// (0x0007ce30) cell_pinb_pane_g1

0x6bef,	// (0x0007ce45) cell_pinb_pane_g2_ParamLimits

0x6bef,	// (0x0007ce45) cell_pinb_pane_g2

0xee64,	// (0x000850ba) cell_pinb_pane_g3_ParamLimits

0xee64,	// (0x000850ba) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008537f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008537f) cell_pinb_pane_g

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp01

0x6bfb,	// (0x0007ce51) list_pinb_item_pane_ParamLimits

0x6bfb,	// (0x0007ce51) list_pinb_item_pane

0xeb77,	// (0x00084dcd) list_highlight_pane_cp02

0x6c21,	// (0x0007ce77) list_pinb_item_pane_g1_ParamLimits

0x6c21,	// (0x0007ce77) list_pinb_item_pane_g1

0x6c2e,	// (0x0007ce84) list_pinb_item_pane_g2_ParamLimits

0x6c2e,	// (0x0007ce84) list_pinb_item_pane_g2

0x6c3a,	// (0x0007ce90) list_pinb_item_pane_g3_ParamLimits

0x6c3a,	// (0x0007ce90) list_pinb_item_pane_g3

0x6c4b,	// (0x0007cea1) list_pinb_item_pane_g4_ParamLimits

0x6c4b,	// (0x0007cea1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00085386) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00085386) list_pinb_item_pane_g

0x6c57,	// (0x0007cead) list_pinb_item_pane_t1_ParamLimits

0x6c57,	// (0x0007cead) list_pinb_item_pane_t1

0x6c88,	// (0x0007cede) calc_display_pane

0x6ca6,	// (0x0007cefc) calc_paper_pane

0x6cc2,	// (0x0007cf18) grid_calc_pane

0xeb77,	// (0x00084dcd) bg_list_pane_cp01

0x6cee,	// (0x0007cf44) clock_g1

0x6cf6,	// (0x0007cf4c) clock_g2

0x0001,

0xf139,	// (0x0008538f) clock_g

0x6d00,	// (0x0007cf56) clock_t1_ParamLimits

0x6d00,	// (0x0007cf56) clock_t1

0x6d15,	// (0x0007cf6b) clock_t2_ParamLimits

0x6d15,	// (0x0007cf6b) clock_t2

0x6d27,	// (0x0007cf7d) clock_t3_ParamLimits

0x6d27,	// (0x0007cf7d) clock_t3

0x6d39,	// (0x0007cf8f) clock_t4_ParamLimits

0x6d39,	// (0x0007cf8f) clock_t4

0x6d4b,	// (0x0007cfa1) clock_t5_ParamLimits

0x6d4b,	// (0x0007cfa1) clock_t5

0x6d60,	// (0x0007cfb6) clock_t6_ParamLimits

0x6d60,	// (0x0007cfb6) clock_t6

0x6d72,	// (0x0007cfc8) clock_t7_ParamLimits

0x6d72,	// (0x0007cfc8) clock_t7

0x6d84,	// (0x0007cfda) clock_t8_ParamLimits

0x6d84,	// (0x0007cfda) clock_t8

0x6d9a,	// (0x0007cff0) clock_t9_ParamLimits

0x6d9a,	// (0x0007cff0) clock_t9

0x0008,

0xf13e,	// (0x00085394) clock_t_ParamLimits

0xf13e,	// (0x00085394) clock_t

0xee70,	// (0x000850c6) popup_clock_analogue_window_cp02

0xee70,	// (0x000850c6) popup_clock_digital_window_cp01

0xee78,	// (0x000850ce) listscroll_help_pane

0xeb77,	// (0x00084dcd) phob_pre_status_pane

0xee82,	// (0x000850d8) grid_qdial_pane

0xede9,	// (0x0008503f) listscroll_mce_pane

0xede9,	// (0x0008503f) bg_notes_pane

0xee8c,	// (0x000850e2) list_notes_pane

0x6db0,	// (0x0007d006) scroll_pane_cp06

0xee9a,	// (0x000850f0) bg_calc_paper_pane

0x6dbf,	// (0x0007d015) list_calc_pane

0xeeae,	// (0x00085104) bg_calc_display_pane

0x6dd9,	// (0x0007d02f) calc_display_pane_t1

0x6dee,	// (0x0007d044) calc_display_pane_t2

0x6e03,	// (0x0007d059) calc_display_pane_t3

0x0002,

0xf151,	// (0x000853a7) calc_display_pane_t

0x6e15,	// (0x0007d06b) cell_calc_pane_ParamLimits

0x6e15,	// (0x0007d06b) cell_calc_pane

0xeeba,	// (0x00085110) bg_calc_paper_pane_g1

0xeec6,	// (0x0008511c) bg_calc_paper_pane_g2

0xeed2,	// (0x00085128) bg_calc_paper_pane_g3

0xeede,	// (0x00085134) bg_calc_paper_pane_g4

0xeeea,	// (0x00085140) bg_calc_paper_pane_g5

0x6e42,	// (0x0007d098) bg_calc_paper_pane_g6

0x6e53,	// (0x0007d0a9) bg_calc_paper_pane_g7

0x6e64,	// (0x0007d0ba) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000853ae) bg_calc_paper_pane_g

0x6e75,	// (0x0007d0cb) calc_bg_paper_pane_g9

0x6e86,	// (0x0007d0dc) list_calc_item_pane_ParamLimits

0x6e86,	// (0x0007d0dc) list_calc_item_pane

0xeef6,	// (0x0008514c) list_calc_item_pane_g1

0x6eb5,	// (0x0007d10b) list_calc_item_pane_t1_ParamLimits

0x6eb5,	// (0x0007d10b) list_calc_item_pane_t1

0x6ec7,	// (0x0007d11d) list_calc_item_pane_t2_ParamLimits

0x6ec7,	// (0x0007d11d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000853bf) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000853bf) list_calc_item_pane_t

0xef03,	// (0x00085159) cell_calc_pane_g1

0xef0d,	// (0x00085163) grid_highlight_pane_cp02

0x22b5,	// (0x0007850b) bg_calc_display_pane_g1

0x6ef7,	// (0x0007d14d) bg_calc_display_pane_g2

0x6f01,	// (0x0007d157) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000853c9) bg_calc_display_pane_g

0x6f0a,	// (0x0007d160) cell_qdial_pane_ParamLimits

0x6f0a,	// (0x0007d160) cell_qdial_pane

0x6f1e,	// (0x0007d174) cell_qdial_pane_g1_ParamLimits

0x6f1e,	// (0x0007d174) cell_qdial_pane_g1

0x6f2b,	// (0x0007d181) cell_qdial_pane_g2_ParamLimits

0x6f2b,	// (0x0007d181) cell_qdial_pane_g2

0xef2f,	// (0x00085185) cell_qdial_pane_g3_ParamLimits

0xef2f,	// (0x00085185) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000853d0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000853d0) cell_qdial_pane_g

0x6f49,	// (0x0007d19f) cell_qdial_pane_t1_ParamLimits

0x6f49,	// (0x0007d19f) cell_qdial_pane_t1

0x6f61,	// (0x0007d1b7) cell_qdial_pane_t2_ParamLimits

0x6f61,	// (0x0007d1b7) cell_qdial_pane_t2

0x6f74,	// (0x0007d1ca) cell_qdial_pane_t3_ParamLimits

0x6f74,	// (0x0007d1ca) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000853d9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000853d9) cell_qdial_pane_t

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp04

0xef3b,	// (0x00085191) thumbnail_qdial_pane_ParamLimits

0xef3b,	// (0x00085191) thumbnail_qdial_pane

0xef97,	// (0x000851ed) list_help_pane

0xefa0,	// (0x000851f6) scroll_pane_cp02

0x6f87,	// (0x0007d1dd) help_list_pane_t1_ParamLimits

0x6f87,	// (0x0007d1dd) help_list_pane_t1

0x6fba,	// (0x0007d210) bg_notes_pane_g2

0x6fc2,	// (0x0007d218) bg_notes_pane_g3

0x6fca,	// (0x0007d220) notes_bg_pane_g1

0x6fd2,	// (0x0007d228) notes_bg_pane_g4

0x6fda,	// (0x0007d230) notes_bg_pane_g5

0x6fe2,	// (0x0007d238) notes_bg_pane_g6

0x6fea,	// (0x0007d240) notes_bg_pane_g7

0x6ff2,	// (0x0007d248) notes_bg_pane_g8

0x6ffa,	// (0x0007d250) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000853f7) notes_bg_pane_g

0x7002,	// (0x0007d258) list_notes_text_pane_ParamLimits

0x7002,	// (0x0007d258) list_notes_text_pane

0xefa9,	// (0x000851ff) list_notes_text_pane_g1

0x5572,	// (0x0007b7c8) list_notes_text_pane_t1

0x702a,	// (0x0007d280) listscroll_cale_week_pane

0x704f,	// (0x0007d2a5) bg_cale_heading_pane

0xefcc,	// (0x00085222) bg_cale_pane_cp01

0x7071,	// (0x0007d2c7) cale_week_corner_pane

0x708b,	// (0x0007d2e1) cale_week_day_heading_pane

0x70ad,	// (0x0007d303) cale_week_scroll_pane_g1

0x70ca,	// (0x0007d320) cale_week_scroll_pane_g2

0x70dd,	// (0x0007d333) cale_week_scroll_pane_g3

0x70f0,	// (0x0007d346) cale_week_scroll_pane_g4

0x7103,	// (0x0007d359) cale_week_scroll_pane_g5

0x7116,	// (0x0007d36c) cale_week_scroll_pane_g6

0x7129,	// (0x0007d37f) cale_week_scroll_pane_g7

0x713c,	// (0x0007d392) cale_week_scroll_pane_g8

0x7151,	// (0x0007d3a7) cale_week_scroll_pane_g9

0x7164,	// (0x0007d3ba) cale_week_scroll_pane_g10

0x7177,	// (0x0007d3cd) cale_week_scroll_pane_g11

0x718a,	// (0x0007d3e0) cale_week_scroll_pane_g12

0x71a1,	// (0x0007d3f7) cale_week_scroll_pane_g13

0x71bc,	// (0x0007d412) cale_week_scroll_pane_g14

0x71d7,	// (0x0007d42d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00085406) cale_week_scroll_pane_g

0x7207,	// (0x0007d45d) cale_week_time_pane

0x721c,	// (0x0007d472) grid_cale_week_pane

0xeffb,	// (0x00085251) scroll_pane_cp08

0x723b,	// (0x0007d491) cell_cale_week_pane_ParamLimits

0x723b,	// (0x0007d491) cell_cale_week_pane

0x729d,	// (0x0007d4f3) cale_week_day_heading_pane_t1

0x72d8,	// (0x0007d52e) cale_week_day_heading_pane_t2

0x7313,	// (0x0007d569) cale_week_day_heading_pane_t3

0x734e,	// (0x0007d5a4) cale_week_day_heading_pane_t4

0x7389,	// (0x0007d5df) cale_week_day_heading_pane_t5

0x73c4,	// (0x0007d61a) cale_week_day_heading_pane_t6

0x73ff,	// (0x0007d655) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00085427) cale_week_day_heading_pane_t

0xf018,	// (0x0008526e) bg_cale_side_pane

0x743a,	// (0x0007d690) cale_week_time_pane_t1

0x7454,	// (0x0007d6aa) cale_week_time_pane_t2

0x746e,	// (0x0007d6c4) cale_week_time_pane_t3

0x7488,	// (0x0007d6de) cale_week_time_pane_t4

0x74a2,	// (0x0007d6f8) cale_week_time_pane_t5

0x74bc,	// (0x0007d712) cale_week_time_pane_t6

0x74dc,	// (0x0007d732) cale_week_time_pane_t7

0x74fe,	// (0x0007d754) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00085436) cale_week_time_pane_t

0x7522,	// (0x0007d778) cell_cale_week_pane_g2

0x7546,	// (0x0007d79c) cell_cale_week_pane_g3_ParamLimits

0x7546,	// (0x0007d79c) cell_cale_week_pane_g3

0xf026,	// (0x0008527c) grid_highlight_pane_cp07

0xf02e,	// (0x00085284) listscroll_gms_pane

0xf038,	// (0x0008528e) grid_gms_pane

0xf041,	// (0x00085297) listscroll_gms_pane_g1

0xf049,	// (0x0008529f) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00085447) listscroll_gms_pane_g

0x755e,	// (0x0007d7b4) scroll_pane_cp010

0x7569,	// (0x0007d7bf) cell_gms_pane_ParamLimits

0x7569,	// (0x0007d7bf) cell_gms_pane

0x757c,	// (0x0007d7d2) cell_gms_pane_g1

0xf051,	// (0x000852a7) cell_gms_pane_g2

0xf059,	// (0x000852af) cell_gms_pane_g3

0xf062,	// (0x000852b8) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008544c) cell_gms_pane_g

0xf06b,	// (0x000852c1) grid_highlight_pane_cp09

0x9929,	// (0x0007fb7f) phob_pre_status_pane_g1

0x9931,	// (0x0007fb87) phob_pre_status_pane_g2

0x9939,	// (0x0007fb8f) phob_pre_status_pane_g3

0x9941,	// (0x0007fb97) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00085837) phob_pre_status_pane_g

0x9951,	// (0x0007fba7) phob_pre_status_pane_t1

0x9961,	// (0x0007fbb7) phob_pre_status_pane_t2

0x9971,	// (0x0007fbc7) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00085842) phob_pre_status_pane_t

0xf073,	// (0x000852c9) bg_list_pane_cp05

0x758c,	// (0x0007d7e2) grid_vorec_pane

0x7596,	// (0x0007d7ec) vorec_t1

0x75a4,	// (0x0007d7fa) vorec_t2

0x75b2,	// (0x0007d808) vorec_t3

0x75c0,	// (0x0007d816) vorec_t4

0xe734,	// (0x0008498a) vorec_t5

0xe742,	// (0x00084998) vorec_t6

0x0004,

0xf1ff,	// (0x00085455) vorec_t

0xe750,	// (0x000849a6) wait_bar_pane_cp01

0x75dc,	// (0x0007d832) cell_vorec_pane_ParamLimits

0x75dc,	// (0x0007d832) cell_vorec_pane

0x75ef,	// (0x0007d845) cell_vorec_pane_g1

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp05

0x7609,	// (0x0007d85f) cams_zoom_pane

0x7615,	// (0x0007d86b) image_vga_pane

0x7624,	// (0x0007d87a) main_camera_pane_g1

0x7632,	// (0x0007d888) main_camera_pane_g2

0x763e,	// (0x0007d894) main_camera_pane_g3

0x764a,	// (0x0007d8a0) main_camera_pane_g4

0x7656,	// (0x0007d8ac) main_camera_pane_g5

0x7662,	// (0x0007d8b8) main_camera_pane_g6

0x766e,	// (0x0007d8c4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00085460) main_camera_pane_g

0x767a,	// (0x0007d8d0) main_camera_pane_t1

0x768c,	// (0x0007d8e2) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00085471) main_camera_pane_t

0x76ad,	// (0x0007d903) cams_zoom_pane_cp_ParamLimits

0x76ad,	// (0x0007d903) cams_zoom_pane_cp

0x76d1,	// (0x0007d927) image_cif_pane_ParamLimits

0x76d1,	// (0x0007d927) image_cif_pane

0x76ef,	// (0x0007d945) image_subqcif_pane

0x76f7,	// (0x0007d94d) main_video_pane_g1_ParamLimits

0x76f7,	// (0x0007d94d) main_video_pane_g1

0x7717,	// (0x0007d96d) main_video_pane_g2_ParamLimits

0x7717,	// (0x0007d96d) main_video_pane_g2

0x7747,	// (0x0007d99d) main_video_pane_g3_ParamLimits

0x7747,	// (0x0007d99d) main_video_pane_g3

0x7770,	// (0x0007d9c6) main_video_pane_g4_ParamLimits

0x7770,	// (0x0007d9c6) main_video_pane_g4

0x7799,	// (0x0007d9ef) main_video_pane_g5_ParamLimits

0x7799,	// (0x0007d9ef) main_video_pane_g5

0xf087,	// (0x000852dd) main_video_pane_g6_ParamLimits

0xf087,	// (0x000852dd) main_video_pane_g6

0x0006,

0xf220,	// (0x00085476) main_video_pane_g_ParamLimits

0xf220,	// (0x00085476) main_video_pane_g

0x77bb,	// (0x0007da11) main_video_pane_t1_ParamLimits

0x77bb,	// (0x0007da11) main_video_pane_t1

0xf0a1,	// (0x000852f7) cams_zoom_pane_g1

0xf0aa,	// (0x00085300) cams_zoom_pane_g2

0xf0b3,	// (0x00085309) cams_zoom_pane_g3

0x005d,	// (0x000762b3) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00085485) cams_zoom_pane_g

0x7805,	// (0x0007da5b) grid_cams_pane

0x7813,	// (0x0007da69) linegrid_cams_pane

0x7821,	// (0x0007da77) cell_cams_pane_ParamLimits

0x7821,	// (0x0007da77) cell_cams_pane

0x0066,	// (0x000762bc) cams_burst_image_pane

0x006e,	// (0x000762c4) cell_cams_pane_g1

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp03

0xef03,	// (0x00085159) mp_bg_pane_g1

0xeb77,	// (0x00084dcd) bg_list_pane_cp03

0x1d91,	// (0x00077fe7) bg_mp_pane

0x1d99,	// (0x00077fef) grid_mp_pane

0x1da1,	// (0x00077ff7) media_player_g1

0x1da9,	// (0x00077fff) media_player_t1

0x1db7,	// (0x0007800d) media_player_t2

0x1dc5,	// (0x0007801b) media_player_t3

0x1dd3,	// (0x00078029) media_player_t4

0x1de1,	// (0x00078037) media_player_t5

0x1def,	// (0x00078045) media_player_t6

0x1dfd,	// (0x00078053) media_player_t7

0x0006,

0xf5cb,	// (0x00085821) media_player_t

0x1e0b,	// (0x00078061) wait_bar_pane_cp02

0xf5b0,	// (0x00085806) main_usb_pane_t

0x9920,	// (0x0007fb76) cell_mp_pane

0xef03,	// (0x00085159) cell_mp_pane_g1

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp06

0x0076,	// (0x000762cc) grid_skin_colour_pane

0x007e,	// (0x000762d4) list_highlight_pane_cp03

0x784c,	// (0x0007daa2) skin_g1

0x0086,	// (0x000762dc) skin_t1

0x0095,	// (0x000762eb) skin_t2

0x0001,

0xf264,	// (0x000854ba) skin_t

0x7856,	// (0x0007daac) cell_skin_colour_pane_ParamLimits

0x7856,	// (0x0007daac) cell_skin_colour_pane

0x00a3,	// (0x000762f9) cell_skin_colour_pane_g1

0x78da,	// (0x0007db30) call_video_g1_ParamLimits

0x78da,	// (0x0007db30) call_video_g1

0x78ea,	// (0x0007db40) call_video_g2_ParamLimits

0x78ea,	// (0x0007db40) call_video_g2

0x0001,

0xf269,	// (0x000854bf) call_video_g_ParamLimits

0xf269,	// (0x000854bf) call_video_g

0x7944,	// (0x0007db9a) call_video_uplink_pane_cp1_ParamLimits

0x7944,	// (0x0007db9a) call_video_uplink_pane_cp1

0x00b5,	// (0x0007630b) call_video_uplink_pane_cp2

0x7a10,	// (0x0007dc66) video_down_crop_pane_ParamLimits

0x7a10,	// (0x0007dc66) video_down_crop_pane

0x7b0e,	// (0x0007dd64) video_down_pane_ParamLimits

0x7b0e,	// (0x0007dd64) video_down_pane

0x00bd,	// (0x00076313) video_down_subqcif_pane_ParamLimits

0x00bd,	// (0x00076313) video_down_subqcif_pane

0x00d5,	// (0x0007632b) video_down_subqcif_pane_cp_ParamLimits

0x00d5,	// (0x0007632b) video_down_subqcif_pane_cp

0x00fb,	// (0x00076351) im_reading_pane_ParamLimits

0x00fb,	// (0x00076351) im_reading_pane

0x7c2e,	// (0x0007de84) im_writing_pane_ParamLimits

0x7c2e,	// (0x0007de84) im_writing_pane

0x7c4c,	// (0x0007dea2) im_reading_pane_t1

0x0115,	// (0x0007636b) list_im_pane

0x0126,	// (0x0007637c) scroll_pane_cp07

0x7ca0,	// (0x0007def6) im_writing_pane_t1_ParamLimits

0x7ca0,	// (0x0007def6) im_writing_pane_t1

0x013f,	// (0x00076395) im_writing_pane_t2_ParamLimits

0x013f,	// (0x00076395) im_writing_pane_t2

0x0001,

0xf273,	// (0x000854c9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000854c9) im_writing_pane_t

0xeb77,	// (0x00084dcd) input_focus_pane_cp04

0xeb77,	// (0x00084dcd) input_focus_pane_cp05

0x7cb5,	// (0x0007df0b) list_im_single_pane_ParamLimits

0x7cb5,	// (0x0007df0b) list_im_single_pane

0x7cd9,	// (0x0007df2f) list_single_im_pane_t1

0x98e4,	// (0x0007fb3a) blid_accuracy_pane

0x98ec,	// (0x0007fb42) blid_compass_pane

0x98f6,	// (0x0007fb4c) main_location_t1

0x9904,	// (0x0007fb5a) main_location_t2

0x9912,	// (0x0007fb68) main_location_t3

0x0002,

0xf5da,	// (0x00085830) main_location_t

0xeb77,	// (0x00084dcd) aid_levels_location

0xef03,	// (0x00085159) blid_accuracy_pane_g1

0xef03,	// (0x00085159) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008552b) blid_accuracy_pane_g

0x0187,	// (0x000763dd) wml_content_pane

0x01c5,	// (0x0007641b) wml_button_pane_ParamLimits

0x01c5,	// (0x0007641b) wml_button_pane

0x7ce8,	// (0x0007df3e) wml_list_single_large_pane_ParamLimits

0x7ce8,	// (0x0007df3e) wml_list_single_large_pane

0x7d12,	// (0x0007df68) wml_list_single_medium_pane_ParamLimits

0x7d12,	// (0x0007df68) wml_list_single_medium_pane

0x7d43,	// (0x0007df99) wml_list_single_small_pane_ParamLimits

0x7d43,	// (0x0007df99) wml_list_single_small_pane

0x01d9,	// (0x0007642f) wml_selection_box_pane_ParamLimits

0x01d9,	// (0x0007642f) wml_selection_box_pane

0x01ec,	// (0x00076442) wml_list_single_pane_t1

0x01fb,	// (0x00076451) wml_list_single_medium_pane_t1

0x020a,	// (0x00076460) wml_list_single_large_pane_t1

0x0219,	// (0x0007646f) input_focus_pane_cp02_ParamLimits

0x0219,	// (0x0007646f) input_focus_pane_cp02

0x022c,	// (0x00076482) wml_selection_box_pane_g1

0x0235,	// (0x0007648b) wml_selection_box_pane_t1_ParamLimits

0x0235,	// (0x0007648b) wml_selection_box_pane_t1

0xede9,	// (0x0008503f) bg_wml_button_pane_ParamLimits

0xede9,	// (0x0008503f) bg_wml_button_pane

0x024d,	// (0x000764a3) wml_button_pane_g1

0x0255,	// (0x000764ab) wml_button_pane_t1

0x024d,	// (0x000764a3) wml_button_bg_pane_g1

0x0265,	// (0x000764bb) wml_button_bg_pane_g2

0x026d,	// (0x000764c3) wml_button_bg_pane_g3

0x0275,	// (0x000764cb) wml_button_bg_pane_g4

0x027d,	// (0x000764d3) wml_button_bg_pane_g5

0x0285,	// (0x000764db) wml_button_bg_pane_g6

0x028d,	// (0x000764e3) wml_button_bg_pane_g7

0x0295,	// (0x000764eb) wml_button_bg_pane_g8

0x029d,	// (0x000764f3) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000854ce) wml_button_bg_pane_g

0x7d7d,	// (0x0007dfd3) bg_list_pane_cp02

0x02a5,	// (0x000764fb) mce_header_pane_ParamLimits

0x02a5,	// (0x000764fb) mce_header_pane

0x02bb,	// (0x00076511) mce_icon_pane

0x02bb,	// (0x00076511) mce_image_pane

0x02c4,	// (0x0007651a) mce_text_pane_ParamLimits

0x02c4,	// (0x0007651a) mce_text_pane

0x7d87,	// (0x0007dfdd) scroll_pane_cp03

0x01bd,	// (0x00076413) scroll_pane_cp04

0x02d7,	// (0x0007652d) scroll_pane_cp05_ParamLimits

0x02d7,	// (0x0007652d) scroll_pane_cp05

0x7d91,	// (0x0007dfe7) mce_header_field_pane_ParamLimits

0x7d91,	// (0x0007dfe7) mce_header_field_pane

0x7db1,	// (0x0007e007) mce_header_field_pane_2_ParamLimits

0x7db1,	// (0x0007e007) mce_header_field_pane_2

0x7dc7,	// (0x0007e01d) mce_header_field_pane_3

0x7dcf,	// (0x0007e025) list_single_mce_message_pane_ParamLimits

0x7dcf,	// (0x0007e025) list_single_mce_message_pane

0x7dfa,	// (0x0007e050) list_single_mce_smart_pane_ParamLimits

0x7dfa,	// (0x0007e050) list_single_mce_smart_pane

0x02e3,	// (0x00076539) input_focus_pane_cp03

0x02ec,	// (0x00076542) list_header_data_pane

0x7e30,	// (0x0007e086) mce_header_field_pane_t1

0x7e3e,	// (0x0007e094) list_single_mce_header_pane_ParamLimits

0x7e3e,	// (0x0007e094) list_single_mce_header_pane

0x02f4,	// (0x0007654a) list_single_mce_header_pane_t1

0x0303,	// (0x00076559) list_single_mce_message_pane_g1

0x030b,	// (0x00076561) list_single_mce_message_pane_t1

0x7e90,	// (0x0007e0e6) bg_cale_heading_pane_cp01_ParamLimits

0x7e90,	// (0x0007e0e6) bg_cale_heading_pane_cp01

0x0319,	// (0x0007656f) bg_cale_pane_cp02_ParamLimits

0x0319,	// (0x0007656f) bg_cale_pane_cp02

0x7ed3,	// (0x0007e129) cale_month_corner_pane

0x7eed,	// (0x0007e143) cale_month_day_heading_pane_ParamLimits

0x7eed,	// (0x0007e143) cale_month_day_heading_pane

0x7f48,	// (0x0007e19e) cale_month_pane_g1_ParamLimits

0x7f48,	// (0x0007e19e) cale_month_pane_g1

0x7f80,	// (0x0007e1d6) cale_month_pane_g2_ParamLimits

0x7f80,	// (0x0007e1d6) cale_month_pane_g2

0x7fa9,	// (0x0007e1ff) cale_month_pane_g3_ParamLimits

0x7fa9,	// (0x0007e1ff) cale_month_pane_g3

0x7ff5,	// (0x0007e24b) cale_month_pane_g4_ParamLimits

0x7ff5,	// (0x0007e24b) cale_month_pane_g4

0x8041,	// (0x0007e297) cale_month_pane_g5_ParamLimits

0x8041,	// (0x0007e297) cale_month_pane_g5

0x808d,	// (0x0007e2e3) cale_month_pane_g6_ParamLimits

0x808d,	// (0x0007e2e3) cale_month_pane_g6

0x80d9,	// (0x0007e32f) cale_month_pane_g7_ParamLimits

0x80d9,	// (0x0007e32f) cale_month_pane_g7

0x813d,	// (0x0007e393) cale_month_pane_g8_ParamLimits

0x813d,	// (0x0007e393) cale_month_pane_g8

0x81a1,	// (0x0007e3f7) cale_month_pane_g9_ParamLimits

0x81a1,	// (0x0007e3f7) cale_month_pane_g9

0x81ff,	// (0x0007e455) cale_month_pane_g10_ParamLimits

0x81ff,	// (0x0007e455) cale_month_pane_g10

0x825b,	// (0x0007e4b1) cale_month_pane_g11_ParamLimits

0x825b,	// (0x0007e4b1) cale_month_pane_g11

0x82af,	// (0x0007e505) cale_month_pane_g12_ParamLimits

0x82af,	// (0x0007e505) cale_month_pane_g12

0x8305,	// (0x0007e55b) cale_month_pane_g13_ParamLimits

0x8305,	// (0x0007e55b) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000854e1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000854e1) cale_month_pane_g

0x835b,	// (0x0007e5b1) cale_month_week_pane

0x8370,	// (0x0007e5c6) grid_cale_month_pane_ParamLimits

0x8370,	// (0x0007e5c6) grid_cale_month_pane

0x83be,	// (0x0007e614) cale_month_day_heading_pane_t1

0x8444,	// (0x0007e69a) cale_month_day_heading_pane_t2

0x84d5,	// (0x0007e72b) cale_month_day_heading_pane_t3

0x8566,	// (0x0007e7bc) cale_month_day_heading_pane_t4

0x85f7,	// (0x0007e84d) cale_month_day_heading_pane_t5

0x8688,	// (0x0007e8de) cale_month_day_heading_pane_t6

0x8719,	// (0x0007e96f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000854fc) cale_month_day_heading_pane_t

0xf018,	// (0x0008526e) bg_cale_side_pane_cp01

0x87c2,	// (0x0007ea18) cale_month_week_pane_t1

0x87db,	// (0x0007ea31) cale_month_week_pane_t2

0x87f4,	// (0x0007ea4a) cale_month_week_pane_t3

0x880d,	// (0x0007ea63) cale_month_week_pane_t4

0x8826,	// (0x0007ea7c) cale_month_week_pane_t5

0x8847,	// (0x0007ea9d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008550b) cale_month_week_pane_t

0x8868,	// (0x0007eabe) cell_cale_month_pane_ParamLimits

0x8868,	// (0x0007eabe) cell_cale_month_pane

0x898a,	// (0x0007ebe0) cell_cale_month_pane_g1

0x8996,	// (0x0007ebec) cell_cale_month_pane_t1_ParamLimits

0x8996,	// (0x0007ebec) cell_cale_month_pane_t1

0xf026,	// (0x0008527c) grid_highlight_pane_cp08

0xef03,	// (0x00085159) main_smil_g1

0x89c2,	// (0x0007ec18) smil_status_pane

0x0358,	// (0x000765ae) smil_text_pane

0x1cb1,	// (0x00077f07) bg_popup_call3_rect_pane_g8

0x1cb9,	// (0x00077f0f) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000857c4) bg_popup_call3_rect_pane_g

0x1f13,	// (0x00078169) smil_status_volume_pane_g1

0x0362,	// (0x000765b8) smil_status_pane_t1

0x9d0e,	// (0x0007ff64) volume_smil_pane

0x0379,	// (0x000765cf) list_smil_text_pane

0x89d5,	// (0x0007ec2b) scroll_pane_cp011

0x89e0,	// (0x0007ec36) smil_text_list_pane_t1_ParamLimits

0x89e0,	// (0x0007ec36) smil_text_list_pane_t1

0x8a58,	// (0x0007ecae) aid_volume_smil_ParamLimits

0x8a58,	// (0x0007ecae) aid_volume_smil

0xef03,	// (0x00085159) smil_volume_pane_g1

0xef03,	// (0x00085159) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008552b) smil_volume_pane_g

0x702a,	// (0x0007d280) listscroll_cale_day_pane

0x0383,	// (0x000765d9) bg_cale_pane

0x039b,	// (0x000765f1) list_cale_pane

0x03be,	// (0x00076614) scroll_pane_cp09

0x03cf,	// (0x00076625) cale_bg_pane_g1

0x03d7,	// (0x0007662d) cale_bg_pane_g2

0x03df,	// (0x00076635) cale_bg_pane_g3

0x03e7,	// (0x0007663d) cale_bg_pane_g4

0x03ef,	// (0x00076645) cale_bg_pane_g5

0x03f7,	// (0x0007664d) cale_bg_pane_g6

0x03ff,	// (0x00076655) cale_bg_pane_g7

0x0407,	// (0x0007665d) cale_bg_pane_g8

0x040f,	// (0x00076665) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00085530) cale_bg_pane_g

0x8a82,	// (0x0007ecd8) list_cale_time_pane_ParamLimits

0x8a82,	// (0x0007ecd8) list_cale_time_pane

0x0417,	// (0x0007666d) list_cale_time_pane_g1_ParamLimits

0x0417,	// (0x0007666d) list_cale_time_pane_g1

0x0423,	// (0x00076679) list_cale_time_pane_g2_ParamLimits

0x0423,	// (0x00076679) list_cale_time_pane_g2

0x8aa4,	// (0x0007ecfa) list_cale_time_pane_g3_ParamLimits

0x8aa4,	// (0x0007ecfa) list_cale_time_pane_g3

0x8ab2,	// (0x0007ed08) list_cale_time_pane_g4_ParamLimits

0x8ab2,	// (0x0007ed08) list_cale_time_pane_g4

0x8ac0,	// (0x0007ed16) list_cale_time_pane_g5_ParamLimits

0x8ac0,	// (0x0007ed16) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00085543) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00085543) list_cale_time_pane_g

0x043d,	// (0x00076693) list_cale_time_pane_t1_ParamLimits

0x043d,	// (0x00076693) list_cale_time_pane_t1

0x0465,	// (0x000766bb) list_cale_time_pane_t2_ParamLimits

0x0465,	// (0x000766bb) list_cale_time_pane_t2

0x8d87,	// (0x0007efdd) aid_blid_cardinal_pane

0x8dc9,	// (0x0007f01f) compass_pane_t4

0x048d,	// (0x000766e3) list_cale_time_pane_t4_ParamLimits

0x048d,	// (0x000766e3) list_cale_time_pane_t4

0x8dd7,	// (0x0007f02d) compass_pane_t5

0x8de7,	// (0x0007f03d) compass_pane_t6

0x8df5,	// (0x0007f04b) compass_pane_t7

0x093c,	// (0x00076b92) navi_pane_cc_t1

0x0b27,	// (0x00076d7d) aid_phob_thumbnail_center_pane

0x93ea,	// (0x0007f640) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00085550) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00085550) list_cale_time_pane_t

0xe7ce,	// (0x00084a24) bg_popup_window_pane_cp02_ParamLimits

0xe7ce,	// (0x00084a24) bg_popup_window_pane_cp02

0x04b5,	// (0x0007670b) heading_pane_cp01_ParamLimits

0x04b5,	// (0x0007670b) heading_pane_cp01

0x04c1,	// (0x00076717) loc_req_pane_ParamLimits

0x04c1,	// (0x00076717) loc_req_pane

0x04d1,	// (0x00076727) loc_type_pane_ParamLimits

0x04d1,	// (0x00076727) loc_type_pane

0x04e3,	// (0x00076739) loc_type_pane_t1_ParamLimits

0x04e3,	// (0x00076739) loc_type_pane_t1

0x04f5,	// (0x0007674b) loc_type_pane_t2_ParamLimits

0x04f5,	// (0x0007674b) loc_type_pane_t2

0x0507,	// (0x0007675d) loc_type_pane_t3_ParamLimits

0x0507,	// (0x0007675d) loc_type_pane_t3

0x0002,

0xf301,	// (0x00085557) loc_type_pane_t_ParamLimits

0xf301,	// (0x00085557) loc_type_pane_t

0x0519,	// (0x0007676f) list_loc_req_pane

0x0523,	// (0x00076779) scroll_pane_cp012

0x8ace,	// (0x0007ed24) list_single_loc_request_popup_menu_pane_ParamLimits

0x8ace,	// (0x0007ed24) list_single_loc_request_popup_menu_pane

0x052e,	// (0x00076784) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x052e,	// (0x00076784) list_single_loc_request_popup_menu_pane_g1

0x053a,	// (0x00076790) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x053a,	// (0x00076790) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008555e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008555e) list_single_loc_request_popup_menu_pane_g

0x0546,	// (0x0007679c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0546,	// (0x0007679c) list_single_loc_request_popup_menu_pane_t1

0x8ae0,	// (0x0007ed36) bg_popup_window_pane_cp03_ParamLimits

0x8ae0,	// (0x0007ed36) bg_popup_window_pane_cp03

0x8aee,	// (0x0007ed44) heading_loc_req_pane_ParamLimits

0x8aee,	// (0x0007ed44) heading_loc_req_pane

0x8afa,	// (0x0007ed50) popup_dyc_status_message_window_g1_ParamLimits

0x8afa,	// (0x0007ed50) popup_dyc_status_message_window_g1

0x8b06,	// (0x0007ed5c) popup_dyc_status_message_window_t1_ParamLimits

0x8b06,	// (0x0007ed5c) popup_dyc_status_message_window_t1

0x8b18,	// (0x0007ed6e) popup_dyc_status_message_window_t2_ParamLimits

0x8b18,	// (0x0007ed6e) popup_dyc_status_message_window_t2

0x8b2a,	// (0x0007ed80) popup_dyc_status_message_window_t3_ParamLimits

0x8b2a,	// (0x0007ed80) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00085563) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00085563) popup_dyc_status_message_window_t

0xeb77,	// (0x00084dcd) bg_heading_pane_cp01

0x0568,	// (0x000767be) heading_loc_req_pane_g1

0x0570,	// (0x000767c6) heading_loc_req_pane_g2

0x0578,	// (0x000767ce) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008556a) heading_loc_req_pane_g

0x0580,	// (0x000767d6) heading_loc_req_pane_t1

0x058f,	// (0x000767e5) bg_popup_sub_pane_cp01_ParamLimits

0x058f,	// (0x000767e5) bg_popup_sub_pane_cp01

0x059d,	// (0x000767f3) popup_cale_events_window_g1_ParamLimits

0x059d,	// (0x000767f3) popup_cale_events_window_g1

0x05bd,	// (0x00076813) popup_cale_events_window_g2_ParamLimits

0x05bd,	// (0x00076813) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008559e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008559e) popup_cale_events_window_g

0x05dd,	// (0x00076833) popup_cale_events_window_t1_ParamLimits

0x05dd,	// (0x00076833) popup_cale_events_window_t1

0x05ef,	// (0x00076845) popup_cale_events_window_t2_ParamLimits

0x05ef,	// (0x00076845) popup_cale_events_window_t2

0x062d,	// (0x00076883) popup_cale_events_window_t3_ParamLimits

0x062d,	// (0x00076883) popup_cale_events_window_t3

0x0667,	// (0x000768bd) popup_cale_events_window_t4_ParamLimits

0x0667,	// (0x000768bd) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000855a3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000855a3) popup_cale_events_window_t

0x8b54,	// (0x0007edaa) call_type_pane

0x0b19,	// (0x00076d6f) popup_call_status_window_g1

0x8b60,	// (0x0007edb6) popup_call_status_window_g2

0x8b6c,	// (0x0007edc2) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000855ac) popup_call_status_window_g

0x069d,	// (0x000768f3) call_type_pane_g1

0x06a6,	// (0x000768fc) call_type_pane_g2

0x0001,

0xf35d,	// (0x000855b3) call_type_pane_g

0xeb77,	// (0x00084dcd) bg_popup_sub_pane_cp02

0x06af,	// (0x00076905) listscroll_popup_wml_pane

0x06b7,	// (0x0007690d) list_wml_pane

0x06c1,	// (0x00076917) scroll_pane_cp013

0x06cc,	// (0x00076922) list_single_graphic_popup_wml_pane_ParamLimits

0x06cc,	// (0x00076922) list_single_graphic_popup_wml_pane

0xef03,	// (0x00085159) list_single_graphic_popup_wml_pane_g1

0x06e0,	// (0x00076936) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000855b8) list_single_graphic_popup_wml_pane_g

0x06e8,	// (0x0007693e) list_single_graphic_popup_wml_pane_t1

0x06f6,	// (0x0007694c) aid_call_pane

0xede1,	// (0x00085037) popup_clock_analogue_window_g1

0xede1,	// (0x00085037) popup_clock_analogue_window_g2

0x8b78,	// (0x0007edce) popup_clock_analogue_window_g3

0x8b78,	// (0x0007edce) popup_clock_analogue_window_g4

0xef03,	// (0x00085159) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000855bd) popup_clock_analogue_window_g

0x8b80,	// (0x0007edd6) popup_clock_analogue_window_t1

0x8b8e,	// (0x0007ede4) clock_digital_number_pane_ParamLimits

0x8b8e,	// (0x0007ede4) clock_digital_number_pane

0x8b9a,	// (0x0007edf0) clock_digital_number_pane_cp02_ParamLimits

0x8b9a,	// (0x0007edf0) clock_digital_number_pane_cp02

0x8ba6,	// (0x0007edfc) clock_digital_number_pane_cp03_ParamLimits

0x8ba6,	// (0x0007edfc) clock_digital_number_pane_cp03

0x8bb2,	// (0x0007ee08) clock_digital_number_pane_cp04_ParamLimits

0x8bb2,	// (0x0007ee08) clock_digital_number_pane_cp04

0x8bc2,	// (0x0007ee18) clock_digital_separator_pane_ParamLimits

0x8bc2,	// (0x0007ee18) clock_digital_separator_pane

0x8bce,	// (0x0007ee24) popup_clock_digital_window_t1

0xef03,	// (0x00085159) clock_digital_number_pane_g1

0xef03,	// (0x00085159) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008552b) clock_digital_number_pane_g

0xef03,	// (0x00085159) clock_digital_separator_pane_g1

0xef03,	// (0x00085159) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008552b) clock_digital_separator_pane_g

0xeb77,	// (0x00084dcd) bg_popup_window_pane_cp04

0x0706,	// (0x0007695c) heading_pane_cp03

0x070e,	// (0x00076964) listscroll_popup_gms_pane

0x0716,	// (0x0007696c) grid_large_graphic_popup_pane

0x0720,	// (0x00076976) listscroll_popup_gms_pane_g1

0x0728,	// (0x0007697e) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000855c8) listscroll_popup_gms_pane_g

0x01bd,	// (0x00076413) scroll_pane_cp014

0x8beb,	// (0x0007ee41) cell_large_graphic_popup_pane_ParamLimits

0x8beb,	// (0x0007ee41) cell_large_graphic_popup_pane

0x8c03,	// (0x0007ee59) cell_large_graphic_popup_pane_g1_ParamLimits

0x8c03,	// (0x0007ee59) cell_large_graphic_popup_pane_g1

0x0730,	// (0x00076986) cell_large_graphic_popup_pane_g2_ParamLimits

0x0730,	// (0x00076986) cell_large_graphic_popup_pane_g2

0x073c,	// (0x00076992) cell_large_graphic_popup_pane_g3_ParamLimits

0x073c,	// (0x00076992) cell_large_graphic_popup_pane_g3

0x0749,	// (0x0007699f) cell_large_graphic_popup_pane_g4_ParamLimits

0x0749,	// (0x0007699f) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000855cd) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000855cd) cell_large_graphic_popup_pane_g

0x0759,	// (0x000769af) grid_highlight_pane_cp010

0xef03,	// (0x00085159) bg_popup_call_pane_g1

0x0763,	// (0x000769b9) list_single_graphic_popup_conf_pane_ParamLimits

0x0763,	// (0x000769b9) list_single_graphic_popup_conf_pane

0x0776,	// (0x000769cc) list_highlight_pane_cp01

0x077f,	// (0x000769d5) list_single_graphic_popup_conf_pane_g1

0x0787,	// (0x000769dd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000855d6) list_single_graphic_popup_conf_pane_g

0x078f,	// (0x000769e5) list_single_graphic_popup_conf_pane_t1

0x079d,	// (0x000769f3) linegrid_cams_pane_g1

0x8c0f,	// (0x0007ee65) linegrid_cams_pane_g2

0xf059,	// (0x000852af) linegrid_cams_pane_g3

0x07a6,	// (0x000769fc) linegrid_cams_pane_g4

0x8c18,	// (0x0007ee6e) linegrid_cams_pane_g5

0x8c21,	// (0x0007ee77) linegrid_cams_pane_g6

0xf062,	// (0x000852b8) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000855db) linegrid_cams_pane_g

0x07af,	// (0x00076a05) popup_clock_analogue_window

0x07af,	// (0x00076a05) popup_clock_digital_window

0xeb77,	// (0x00084dcd) popup_phob_thumbnail_window

0xef03,	// (0x00085159) call_video_uplink_pane_g1

0x07b8,	// (0x00076a0e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000855ea) call_video_uplink_pane_g

0x07c0,	// (0x00076a16) video_uplink_pane

0x07c8,	// (0x00076a1e) mce_image_pane_g1

0x8c2a,	// (0x0007ee80) mce_image_pane_g2

0x8c34,	// (0x0007ee8a) mce_image_pane_g3

0x8c3c,	// (0x0007ee92) mce_image_pane_g4

0x8c44,	// (0x0007ee9a) mce_image_pane_g5

0x0004,

0xf399,	// (0x000855ef) mce_image_pane_g

0x07d2,	// (0x00076a28) control_top_pane_stacon_cp01_ParamLimits

0x07d2,	// (0x00076a28) control_top_pane_stacon_cp01

0x07e6,	// (0x00076a3c) uni_indicator_pane_stacon_cp01_ParamLimits

0x07e6,	// (0x00076a3c) uni_indicator_pane_stacon_cp01

0x07f7,	// (0x00076a4d) bg_popup_sub_pane_cp03

0x0801,	// (0x00076a57) chi_dic_find_pane

0x8c4c,	// (0x0007eea2) listscroll_chi_dic_pane

0x0809,	// (0x00076a5f) main_pane_chidic_g1

0x0811,	// (0x00076a67) chi_dic_find_pane_t1

0x081f,	// (0x00076a75) find_chidic_pane

0x0828,	// (0x00076a7e) chi_dic_list_pane_ParamLimits

0x0828,	// (0x00076a7e) chi_dic_list_pane

0x0839,	// (0x00076a8f) scroll_pane_cp020

0x0841,	// (0x00076a97) find_chidic_pane_t1

0xeb77,	// (0x00084dcd) input_focus_pane_cp06

0x8c60,	// (0x0007eeb6) list_chi_dic_pane_ParamLimits

0x8c60,	// (0x0007eeb6) list_chi_dic_pane

0x8c7a,	// (0x0007eed0) list_chi_dic_pane_t1_ParamLimits

0x8c7a,	// (0x0007eed0) list_chi_dic_pane_t1

0xeb77,	// (0x00084dcd) list_highlight_pane_cp020

0x0850,	// (0x00076aa6) bg_cale_heading_pane_g1

0x8c8d,	// (0x0007eee3) bg_cale_heading_pane_g2

0x8c95,	// (0x0007eeeb) bg_cale_heading_pane_g3

0x8c9d,	// (0x0007eef3) bg_cale_heading_pane_g4

0x8ca7,	// (0x0007eefd) bg_cale_heading_pane_g5

0x8cb1,	// (0x0007ef07) bg_cale_heading_pane_g6

0x8cb9,	// (0x0007ef0f) bg_cale_heading_pane_g7

0x8cc1,	// (0x0007ef17) bg_cale_heading_pane_g8

0x8ccb,	// (0x0007ef21) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000855fa) bg_cale_heading_pane_g

0x0850,	// (0x00076aa6) bg_cale_side_pane_g1

0x8cd5,	// (0x0007ef2b) bg_cale_side_pane_g2

0x8cdf,	// (0x0007ef35) bg_cale_side_pane_g3

0x8ce9,	// (0x0007ef3f) bg_cale_side_pane_g4

0x8cf3,	// (0x0007ef49) bg_cale_side_pane_g5

0x8cfd,	// (0x0007ef53) bg_cale_side_pane_g6

0x8d07,	// (0x0007ef5d) bg_cale_side_pane_g7

0x8d11,	// (0x0007ef67) bg_cale_side_pane_g8

0x8d19,	// (0x0007ef6f) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008560d) bg_cale_side_pane_g

0x8d21,	// (0x0007ef77) popup_call_status_window_ParamLimits

0x8d21,	// (0x0007ef77) popup_call_status_window

0x0858,	// (0x00076aae) stacon_top_pane

0x0860,	// (0x00076ab6) status_pane_ParamLimits

0x0860,	// (0x00076ab6) status_pane

0x0875,	// (0x00076acb) status_small_pane

0x087d,	// (0x00076ad3) control_pane

0xeb77,	// (0x00084dcd) stacon_bottom_pane

0x0885,	// (0x00076adb) list_single_mce_smart_pane_t1_ParamLimits

0x0885,	// (0x00076adb) list_single_mce_smart_pane_t1

0x0898,	// (0x00076aee) list_single_mce_smart_pane_t2_ParamLimits

0x0898,	// (0x00076aee) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00085620) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00085620) list_single_mce_smart_pane_t

0x8d2d,	// (0x0007ef83) compass_pane

0x8d39,	// (0x0007ef8f) main_location2_pane_t1

0x8d4d,	// (0x0007efa3) main_location2_pane_t2

0x8d61,	// (0x0007efb7) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00085625) main_location2_pane_t

0x08b7,	// (0x00076b0d) compass_pane_g1_ParamLimits

0x08b7,	// (0x00076b0d) compass_pane_g1

0x8dab,	// (0x0007f001) compass_pane_t1

0x8dba,	// (0x0007f010) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008562e) compass_pane_t

0x8e05,	// (0x0007f05b) text_secondary_cp61

0x0933,	// (0x00076b89) navi_pane_cams_g5

0x09af,	// (0x00076c05) navi_pane_im_t1

0x09bd,	// (0x00076c13) navi_pane_mp_g1_ParamLimits

0x09bd,	// (0x00076c13) navi_pane_mp_g1

0x09d1,	// (0x00076c27) navi_pane_mp_g2_ParamLimits

0x09d1,	// (0x00076c27) navi_pane_mp_g2

0x09dd,	// (0x00076c33) navi_pane_mp_g3_ParamLimits

0x09dd,	// (0x00076c33) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00085642) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00085642) navi_pane_mp_g

0x09e9,	// (0x00076c3f) navi_pane_mp_t1

0x09f7,	// (0x00076c4d) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00085649) navi_pane_mp_t

0x0a62,	// (0x00076cb8) navi_pane_vt_g1

0x09e9,	// (0x00076c3f) navi_pane_vt_t1

0x0a6a,	// (0x00076cc0) navi_slider_pane

0xf073,	// (0x000852c9) zooming_pane

0x0a7a,	// (0x00076cd0) navi_slider_pane_g1

0x8e40,	// (0x0007f096) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00085650) navi_slider_pane_g

0x0a9e,	// (0x00076cf4) aid_levels_zoom

0x0aa6,	// (0x00076cfc) zooming_pane_g1

0x0aae,	// (0x00076d04) zooming_pane_g2

0x0aae,	// (0x00076d04) zooming_pane_g3

0x0002,

0xf409,	// (0x0008565f) zooming_pane_g

0x0ab6,	// (0x00076d0c) level_10_zoom

0x0abf,	// (0x00076d15) level_11_zoom

0x0ac8,	// (0x00076d1e) level_1_zoom

0x0ad1,	// (0x00076d27) level_2_zoom

0x0ada,	// (0x00076d30) level_3_zoom

0x0ae3,	// (0x00076d39) level_4_zoom

0x0aec,	// (0x00076d42) level_5_zoom

0x0af5,	// (0x00076d4b) level_6_zoom

0x0afe,	// (0x00076d54) level_7_zoom

0x0b07,	// (0x00076d5d) level_8_zoom

0x0b10,	// (0x00076d66) level_9_zoom

0x0b2f,	// (0x00076d85) popup_phob_thumbnail_window_g1

0x0b37,	// (0x00076d8d) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00085666) popup_phob_thumbnail_window_g

0x1e13,	// (0x00078069) level_1_location

0x1e1b,	// (0x00078071) level_2_location

0x1e23,	// (0x00078079) level_3_location

0x1e2b,	// (0x00078081) level_4_location

0xf073,	// (0x000852c9) level_5_location

0x8e52,	// (0x0007f0a8) mce_icon_pane_g1

0x8e5a,	// (0x0007f0b0) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008566b) mce_icon_pane_g

0x8e62,	// (0x0007f0b8) main_mup_pane_g1_ParamLimits

0x8e62,	// (0x0007f0b8) main_mup_pane_g1

0x8e7a,	// (0x0007f0d0) main_mup_pane_g2_ParamLimits

0x8e7a,	// (0x0007f0d0) main_mup_pane_g2

0x8e96,	// (0x0007f0ec) main_mup_pane_g3_ParamLimits

0x8e96,	// (0x0007f0ec) main_mup_pane_g3

0x8eb2,	// (0x0007f108) main_mup_pane_g4_ParamLimits

0x8eb2,	// (0x0007f108) main_mup_pane_g4

0x8ece,	// (0x0007f124) main_mup_pane_g5_ParamLimits

0x8ece,	// (0x0007f124) main_mup_pane_g5

0x8eef,	// (0x0007f145) main_mup_pane_g6_ParamLimits

0x8eef,	// (0x0007f145) main_mup_pane_g6

0x8f0b,	// (0x0007f161) main_mup_pane_g7_ParamLimits

0x8f0b,	// (0x0007f161) main_mup_pane_g7

0x8f27,	// (0x0007f17d) main_mup_pane_g8_ParamLimits

0x8f27,	// (0x0007f17d) main_mup_pane_g8

0x8f47,	// (0x0007f19d) main_mup_pane_g9_ParamLimits

0x8f47,	// (0x0007f19d) main_mup_pane_g9

0x8f66,	// (0x0007f1bc) main_mup_pane_g10_ParamLimits

0x8f66,	// (0x0007f1bc) main_mup_pane_g10

0x8f85,	// (0x0007f1db) main_mup_pane_g11_ParamLimits

0x8f85,	// (0x0007f1db) main_mup_pane_g11

0x8f9d,	// (0x0007f1f3) main_mup_pane_g12_ParamLimits

0x8f9d,	// (0x0007f1f3) main_mup_pane_g12

0x8fab,	// (0x0007f201) main_mup_pane_g13_ParamLimits

0x8fab,	// (0x0007f201) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00085670) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00085670) main_mup_pane_g

0x8fc1,	// (0x0007f217) main_mup_pane_t1_ParamLimits

0x8fc1,	// (0x0007f217) main_mup_pane_t1

0x8fde,	// (0x0007f234) main_mup_pane_t2_ParamLimits

0x8fde,	// (0x0007f234) main_mup_pane_t2

0x8ff8,	// (0x0007f24e) main_mup_pane_t3_ParamLimits

0x8ff8,	// (0x0007f24e) main_mup_pane_t3

0x9012,	// (0x0007f268) main_mup_pane_t4_ParamLimits

0x9012,	// (0x0007f268) main_mup_pane_t4

0x9024,	// (0x0007f27a) main_mup_pane_t5_ParamLimits

0x9024,	// (0x0007f27a) main_mup_pane_t5

0x9036,	// (0x0007f28c) main_mup_pane_t6_ParamLimits

0x9036,	// (0x0007f28c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008568b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008568b) main_mup_pane_t

0x904c,	// (0x0007f2a2) mup_progress_pane_ParamLimits

0x904c,	// (0x0007f2a2) mup_progress_pane

0x9058,	// (0x0007f2ae) mup_visualizer_pane_ParamLimits

0x9058,	// (0x0007f2ae) mup_visualizer_pane

0x9092,	// (0x0007f2e8) mup_volume_pane_ParamLimits

0x9092,	// (0x0007f2e8) mup_volume_pane

0x0b19,	// (0x00076d6f) mup_visualizer_pane_g1_ParamLimits

0x0b19,	// (0x00076d6f) mup_visualizer_pane_g1

0x0b19,	// (0x00076d6f) mup_visualizer_pane_g2_ParamLimits

0x0b19,	// (0x00076d6f) mup_visualizer_pane_g2

0x08b7,	// (0x00076b0d) mup_visualizer_pane_g3_ParamLimits

0x08b7,	// (0x00076b0d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00085698) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00085698) mup_visualizer_pane_g

0xef03,	// (0x00085159) mup_volume_pane_g1

0x0b47,	// (0x00076d9d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008569f) mup_volume_pane_g

0xef03,	// (0x00085159) mup_progress_pane_g1

0x0b50,	// (0x00076da6) mup_progress_pane_g2

0x0b59,	// (0x00076daf) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000856a4) mup_progress_pane_g

0xeb77,	// (0x00084dcd) bg_popup_window_pane_cp05

0x0b62,	// (0x00076db8) heading_pane_cp02_ParamLimits

0x0b62,	// (0x00076db8) heading_pane_cp02

0x0b7c,	// (0x00076dd2) list_popup_blid_pane

0x0b84,	// (0x00076dda) list_blid_sat_info_pane_ParamLimits

0x0b84,	// (0x00076dda) list_blid_sat_info_pane

0x0b97,	// (0x00076ded) list_blid_sat_info_pane_g1

0x0b9f,	// (0x00076df5) list_blid_sat_info_pane_t1

0x919f,	// (0x0007f3f5) mup_equalizer_pane_ParamLimits

0x919f,	// (0x0007f3f5) mup_equalizer_pane

0x91c0,	// (0x0007f416) mup_equalizer_pane_cp1_ParamLimits

0x91c0,	// (0x0007f416) mup_equalizer_pane_cp1

0x91e1,	// (0x0007f437) mup_equalizer_pane_cp2_ParamLimits

0x91e1,	// (0x0007f437) mup_equalizer_pane_cp2

0x9202,	// (0x0007f458) mup_equalizer_pane_cp3_ParamLimits

0x9202,	// (0x0007f458) mup_equalizer_pane_cp3

0x9223,	// (0x0007f479) mup_equalizer_pane_cp4_ParamLimits

0x9223,	// (0x0007f479) mup_equalizer_pane_cp4

0x9244,	// (0x0007f49a) mup_equalizer_pane_cp5

0x925a,	// (0x0007f4b0) mup_equalizer_pane_cp6

0x9272,	// (0x0007f4c8) mup_equalizer_pane_cp7

0x1d31,	// (0x00077f87) bg_popup_call_poc_act_pane_g9

0x1d39,	// (0x00077f8f) bg_popup_call_poc_act_pane_g10

0x1d41,	// (0x00077f97) bg_popup_call_poc_act_pane_g11

0x000a,

0xede9,	// (0x0008503f) mup_scale_pane

0xef03,	// (0x00085159) mup_scale_pane_g1

0x0bad,	// (0x00076e03) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000856c0) mup_scale_pane_g

0x0bd1,	// (0x00076e27) msg_data_pane

0x0bd9,	// (0x00076e2f) scroll_pane_cp017

0x5764,	// (0x0007b9ba) bg_list_pane_cp04_ParamLimits

0x5764,	// (0x0007b9ba) bg_list_pane_cp04

0x0be1,	// (0x00076e37) msg_data_pane_g1

0x929c,	// (0x0007f4f2) msg_data_pane_g2

0x92a6,	// (0x0007f4fc) msg_data_pane_g3

0x92ae,	// (0x0007f504) msg_data_pane_g4

0x92b6,	// (0x0007f50c) msg_data_pane_g5

0x92be,	// (0x0007f514) msg_data_pane_g6

0x92c6,	// (0x0007f51c) msg_data_pane_g7

0x0006,

0xf479,	// (0x000856cf) msg_data_pane_g

0x578a,	// (0x0007b9e0) msg_text_pane_ParamLimits

0x578a,	// (0x0007b9e0) msg_text_pane

0x92ce,	// (0x0007f524) qrid_highlight_pane_cp011_ParamLimits

0x92ce,	// (0x0007f524) qrid_highlight_pane_cp011

0xeb77,	// (0x00084dcd) msg_body_pane

0xeb77,	// (0x00084dcd) msg_header_pane

0x0bf2,	// (0x00076e48) input_focus_pane_cp07

0x57cd,	// (0x0007ba23) msg_header_pane_t1_ParamLimits

0x57cd,	// (0x0007ba23) msg_header_pane_t1

0x57df,	// (0x0007ba35) msg_header_pane_t2_ParamLimits

0x57df,	// (0x0007ba35) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000856e3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000856e3) msg_header_pane_t

0x0c07,	// (0x00076e5d) msg_body_pane_g1

0x57f1,	// (0x0007ba47) msg_body_pane_t1_ParamLimits

0x57f1,	// (0x0007ba47) msg_body_pane_t1

0x5822,	// (0x0007ba78) msg_body_pane_t2_ParamLimits

0x5822,	// (0x0007ba78) msg_body_pane_t2

0x5834,	// (0x0007ba8a) msg_body_pane_t3_ParamLimits

0x5834,	// (0x0007ba8a) msg_body_pane_t3

0x0002,

0xf492,	// (0x000856e8) msg_body_pane_t_ParamLimits

0xf492,	// (0x000856e8) msg_body_pane_t

0x933a,	// (0x0007f590) main_viewer_pane_g1_ParamLimits

0x933a,	// (0x0007f590) main_viewer_pane_g1

0x9346,	// (0x0007f59c) main_viewer_pane_g2_ParamLimits

0x9346,	// (0x0007f59c) main_viewer_pane_g2

0x9352,	// (0x0007f5a8) main_viewer_pane_g3_ParamLimits

0x9352,	// (0x0007f5a8) main_viewer_pane_g3

0x9363,	// (0x0007f5b9) main_viewer_pane_g4_ParamLimits

0x9363,	// (0x0007f5b9) main_viewer_pane_g4

0x9374,	// (0x0007f5ca) main_viewer_pane_g5_ParamLimits

0x9374,	// (0x0007f5ca) main_viewer_pane_g5

0x9374,	// (0x0007f5ca) main_viewer_pane_g7_ParamLimits

0x9374,	// (0x0007f5ca) main_viewer_pane_g7

0x9386,	// (0x0007f5dc) main_viewer_pane_g8_ParamLimits

0x9386,	// (0x0007f5dc) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000856f8) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000856f8) main_viewer_pane_g

0x0c0f,	// (0x00076e65) viewer_content_pane_ParamLimits

0x0c0f,	// (0x00076e65) viewer_content_pane

0x93be,	// (0x0007f614) main_postcard_pane_g1_ParamLimits

0x93be,	// (0x0007f614) main_postcard_pane_g1

0x93cc,	// (0x0007f622) main_postcard_pane_g2_ParamLimits

0x93cc,	// (0x0007f622) main_postcard_pane_g2

0x93da,	// (0x0007f630) main_postcard_pane_g3_ParamLimits

0x93da,	// (0x0007f630) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00085709) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00085709) main_postcard_pane_g

0x93ea,	// (0x0007f640) main_postcard_pane_g4

0x1f00,	// (0x00078156) smil_status_volume_pane_g2

0x9416,	// (0x0007f66c) postcard_pane_ParamLimits

0x9416,	// (0x0007f66c) postcard_pane

0x0b19,	// (0x00076d6f) postcard_pane_g1_ParamLimits

0x0b19,	// (0x00076d6f) postcard_pane_g1

0x9448,	// (0x0007f69e) postcard_pane_g2_ParamLimits

0x9448,	// (0x0007f69e) postcard_pane_g2

0x9454,	// (0x0007f6aa) postcard_pane_g3_ParamLimits

0x9454,	// (0x0007f6aa) postcard_pane_g3

0x0c2b,	// (0x00076e81) postcard_pane_g4_ParamLimits

0x0c2b,	// (0x00076e81) postcard_pane_g4

0x9460,	// (0x0007f6b6) postcard_pane_g5_ParamLimits

0x9460,	// (0x0007f6b6) postcard_pane_g5

0x946c,	// (0x0007f6c2) postcard_pane_g6_ParamLimits

0x946c,	// (0x0007f6c2) postcard_pane_g6

0x0c1d,	// (0x00076e73) postcard_pane_g7_ParamLimits

0x0c1d,	// (0x00076e73) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00085716) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00085716) postcard_pane_g

0x9478,	// (0x0007f6ce) main_mp2_pane_g1_ParamLimits

0x9478,	// (0x0007f6ce) main_mp2_pane_g1

0x9484,	// (0x0007f6da) main_mp2_pane_g2_ParamLimits

0x9484,	// (0x0007f6da) main_mp2_pane_g2

0x9490,	// (0x0007f6e6) main_mp2_pane_g3_ParamLimits

0x9490,	// (0x0007f6e6) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00085725) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00085725) main_mp2_pane_g

0x949c,	// (0x0007f6f2) main_mp2_pane_t1_ParamLimits

0x949c,	// (0x0007f6f2) main_mp2_pane_t1

0x94b3,	// (0x0007f709) main_mp2_pane_t2_ParamLimits

0x94b3,	// (0x0007f709) main_mp2_pane_t2

0x94c7,	// (0x0007f71d) main_mp2_pane_t3_ParamLimits

0x94c7,	// (0x0007f71d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008572c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008572c) main_mp2_pane_t

0x0c39,	// (0x00076e8f) pec_content_pane_ParamLimits

0x0c39,	// (0x00076e8f) pec_content_pane

0x01bd,	// (0x00076413) scroll_pane_cp015

0x0c4b,	// (0x00076ea1) pec_attribute_pane_ParamLimits

0x0c4b,	// (0x00076ea1) pec_attribute_pane

0x94d9,	// (0x0007f72f) pec_content_pane_g1_ParamLimits

0x94d9,	// (0x0007f72f) pec_content_pane_g1

0x0c5b,	// (0x00076eb1) pec_content_pane_t1_ParamLimits

0x0c5b,	// (0x00076eb1) pec_content_pane_t1

0x0c6d,	// (0x00076ec3) pec_content_pane_t2_ParamLimits

0x0c6d,	// (0x00076ec3) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00085733) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00085733) pec_content_pane_t

0x94e5,	// (0x0007f73b) list_single_graphic_pane_cp01_ParamLimits

0x94e5,	// (0x0007f73b) list_single_graphic_pane_cp01

0xede9,	// (0x0008503f) bg_popup_sub_pane_cp04

0x0c7f,	// (0x00076ed5) popup_mup_playback_window_g1

0x0c8b,	// (0x00076ee1) popup_mup_playback_window_t1

0x0ca0,	// (0x00076ef6) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00085738) popup_mup_playback_window_t

0x0cd7,	// (0x00076f2d) main_image_pane_g1_ParamLimits

0x0cd7,	// (0x00076f2d) main_image_pane_g1

0x0d1a,	// (0x00076f70) scroll_pane_cp018_ParamLimits

0x0d1a,	// (0x00076f70) scroll_pane_cp018

0x0d32,	// (0x00076f88) scroll_pane_cp016_ParamLimits

0x0d32,	// (0x00076f88) scroll_pane_cp016

0x957e,	// (0x0007f7d4) smil2_image_pane_ParamLimits

0x957e,	// (0x0007f7d4) smil2_image_pane

0x95ae,	// (0x0007f804) smil2_root_pane_ParamLimits

0x95ae,	// (0x0007f804) smil2_root_pane

0x95da,	// (0x0007f830) smil2_text_pane_ParamLimits

0x95da,	// (0x0007f830) smil2_text_pane

0xeb77,	// (0x00084dcd) bg_list_pane_cp06

0x0d6e,	// (0x00076fc4) grid_radio_pane

0xeb77,	// (0x00084dcd) bg_popup_window_pane_cp06

0x0d76,	// (0x00076fcc) main_fmradio_pane_t1

0x0706,	// (0x0007695c) heading_pane_cp04

0x0d84,	// (0x00076fda) main_fmradio_pane_t2

0x1d49,	// (0x00077f9f) popup_cale_lunar_info_window_g1

0x0d92,	// (0x00076fe8) main_fmradio_pane_t3

0x1d51,	// (0x00077fa7) popup_cale_lunar_info_window_g2

0x0da0,	// (0x00076ff6) main_fmradio_pane_t4

0x0001,

0x0dae,	// (0x00077004) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00085813) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008574d) main_fmradio_pane_t

0x0dbc,	// (0x00077012) wait_bar_pane_cp03

0x0dc4,	// (0x0007701a) cell_fmradio_pane_ParamLimits

0x0dc4,	// (0x0007701a) cell_fmradio_pane

0x0c1d,	// (0x00076e73) cell_fmradio_pane_g1_ParamLimits

0x0c1d,	// (0x00076e73) cell_fmradio_pane_g1

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp011

0x0dd7,	// (0x0007702d) poc_content_pane_ParamLimits

0x0dd7,	// (0x0007702d) poc_content_pane

0x0de9,	// (0x0007703f) scroll_pane_cp019

0x961a,	// (0x0007f870) popup_call_poc_act_window_ParamLimits

0x961a,	// (0x0007f870) popup_call_poc_act_window

0x9627,	// (0x0007f87d) popup_call_poc_inact_window_ParamLimits

0x9627,	// (0x0007f87d) popup_call_poc_inact_window

0xf594,	// (0x000857ea) bg_popup_call_poc_act_pane_g

0x1cc1,	// (0x00077f17) bg_popup_call_poc_inact_pane_g1

0x1cc9,	// (0x00077f1f) bg_popup_call_poc_inact_pane_g2

0x0df1,	// (0x00077047) popup_call_poc_act_window_g2

0x1cd1,	// (0x00077f27) bg_popup_call_poc_inact_pane_g3

0x1cd9,	// (0x00077f2f) bg_popup_call_poc_inact_pane_g4

0x1ce1,	// (0x00077f37) bg_popup_call_poc_inact_pane_g5

0x0df9,	// (0x0007704f) popup_call_poc_act_window_t1_ParamLimits

0x0df9,	// (0x0007704f) popup_call_poc_act_window_t1

0x0e21,	// (0x00077077) popup_call_poc_act_window_t2_ParamLimits

0x0e21,	// (0x00077077) popup_call_poc_act_window_t2

0x0e49,	// (0x0007709f) popup_call_poc_act_window_t3_ParamLimits

0x0e49,	// (0x0007709f) popup_call_poc_act_window_t3

0x0e71,	// (0x000770c7) popup_call_poc_act_window_t4_ParamLimits

0x0e71,	// (0x000770c7) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00085758) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00085758) popup_call_poc_act_window_t

0x1ce9,	// (0x00077f3f) bg_popup_call_poc_inact_pane_g6

0x1cf1,	// (0x00077f47) bg_popup_call_poc_inact_pane_g7

0x1cf9,	// (0x00077f4f) bg_popup_call_poc_inact_pane_g8

0x0e83,	// (0x000770d9) popup_call_poc_inact_window_g2

0x1d01,	// (0x00077f57) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000857d7) bg_popup_call_poc_inact_pane_g

0x0e8b,	// (0x000770e1) popup_call_poc_inact_window_t1_ParamLimits

0x0e8b,	// (0x000770e1) popup_call_poc_inact_window_t1

0x0ea0,	// (0x000770f6) popup_call_poc_inact_window_t2_ParamLimits

0x0ea0,	// (0x000770f6) popup_call_poc_inact_window_t2

0x0eb5,	// (0x0007710b) popup_call_poc_inact_window_t3_ParamLimits

0x0eb5,	// (0x0007710b) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00085761) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00085761) popup_call_poc_inact_window_t

0x1e86,	// (0x000780dc) context_pane_ParamLimits

0x9c5b,	// (0x0007feb1) signal_pane_ParamLimits

0xf073,	// (0x000852c9) main_call2_pane

0x9bce,	// (0x0007fe24) popup_phob_thumbnail2_window_ParamLimits

0x9bce,	// (0x0007fe24) popup_phob_thumbnail2_window

0x92e8,	// (0x0007f53e) aid_hotspot_pointer_arrow_pane

0x92f0,	// (0x0007f546) aid_hotspot_pointer_hand_pane

0x9949,	// (0x0007fb9f) phob_pre_status_pane_g5

0x7609,	// (0x0007d85f) cams_zoom_pane_ParamLimits

0x7615,	// (0x0007d86b) image_vga_pane_ParamLimits

0x7624,	// (0x0007d87a) main_camera_pane_g1_ParamLimits

0x7632,	// (0x0007d888) main_camera_pane_g2_ParamLimits

0x763e,	// (0x0007d894) main_camera_pane_g3_ParamLimits

0x764a,	// (0x0007d8a0) main_camera_pane_g4_ParamLimits

0x7656,	// (0x0007d8ac) main_camera_pane_g5_ParamLimits

0x7662,	// (0x0007d8b8) main_camera_pane_g6_ParamLimits

0x766e,	// (0x0007d8c4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00085460) main_camera_pane_g_ParamLimits

0x767a,	// (0x0007d8d0) main_camera_pane_t1_ParamLimits

0x768c,	// (0x0007d8e2) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00085471) main_camera_pane_t_ParamLimits

0xede9,	// (0x0008503f) bg_popup_preview_window_pane_cp01_ParamLimits

0xede9,	// (0x0008503f) bg_popup_preview_window_pane_cp01

0x0eca,	// (0x00077120) popup_phob_thumbnail2_window_g1_ParamLimits

0x0eca,	// (0x00077120) popup_phob_thumbnail2_window_g1

0xeb77,	// (0x00084dcd) call2_cli_visual_pane

0x9643,	// (0x0007f899) popup_call2_audio_conf_window_ParamLimits

0x9643,	// (0x0007f899) popup_call2_audio_conf_window

0x9658,	// (0x0007f8ae) popup_call2_audio_first_window_ParamLimits

0x9658,	// (0x0007f8ae) popup_call2_audio_first_window

0x96f6,	// (0x0007f94c) popup_call2_audio_in_window_ParamLimits

0x96f6,	// (0x0007f94c) popup_call2_audio_in_window

0x9738,	// (0x0007f98e) popup_call2_audio_out_window_ParamLimits

0x9738,	// (0x0007f98e) popup_call2_audio_out_window

0x979a,	// (0x0007f9f0) popup_call2_audio_second_window_ParamLimits

0x979a,	// (0x0007f9f0) popup_call2_audio_second_window

0x97f8,	// (0x0007fa4e) popup_call2_audio_wait_window_ParamLimits

0x97f8,	// (0x0007fa4e) popup_call2_audio_wait_window

0xeb77,	// (0x00084dcd) bg_popup_call2_act_pane_cp03

0xedcb,	// (0x00085021) list_conf_pane_cp

0x0ed6,	// (0x0007712c) popup_call2_audio_conf_window_t1

0x0763,	// (0x000769b9) list_single_graphic_popup_conf2_pane_ParamLimits

0x0763,	// (0x000769b9) list_single_graphic_popup_conf2_pane

0x0776,	// (0x000769cc) list_highlight_pane_cp04

0x0ee4,	// (0x0007713a) list_single_graphic_popup_conf2_pane_g1

0x0787,	// (0x000769dd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00085768) list_single_graphic_popup_conf2_pane_g

0x0eee,	// (0x00077144) list_single_graphic_popup_conf2_pane_t1

0x0efc,	// (0x00077152) bg_popup_call2_act_pane_cp01_ParamLimits

0x0efc,	// (0x00077152) bg_popup_call2_act_pane_cp01

0x0f86,	// (0x000771dc) call_type_pane_cp05_ParamLimits

0x0f86,	// (0x000771dc) call_type_pane_cp05

0x0fda,	// (0x00077230) popup_call2_audio_second_window_g1_ParamLimits

0x0fda,	// (0x00077230) popup_call2_audio_second_window_g1

0x102e,	// (0x00077284) popup_call2_audio_second_window_g2_ParamLimits

0x102e,	// (0x00077284) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008576d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008576d) popup_call2_audio_second_window_g

0x1093,	// (0x000772e9) popup_call2_audio_second_window_t1_ParamLimits

0x1093,	// (0x000772e9) popup_call2_audio_second_window_t1

0x114e,	// (0x000773a4) popup_call2_audio_second_window_t2_ParamLimits

0x114e,	// (0x000773a4) popup_call2_audio_second_window_t2

0x11a1,	// (0x000773f7) popup_call2_audio_second_window_t3_ParamLimits

0x11a1,	// (0x000773f7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00085774) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00085774) popup_call2_audio_second_window_t

0xeb77,	// (0x00084dcd) bg_popup_call2_in_pane_cp02

0xeb81,	// (0x00084dd7) call_type_pane_cp04

0xeb89,	// (0x00084ddf) popup_call2_audio_wait_window_g1

0xeb91,	// (0x00084de7) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008534f) popup_call2_audio_wait_window_g

0xeb99,	// (0x00084def) popup_call2_audio_wait_window_t3

0x1294,	// (0x000774ea) bg_popup_call2_act_pane_ParamLimits

0x1294,	// (0x000774ea) bg_popup_call2_act_pane

0x1354,	// (0x000775aa) call_type_pane_cp03_ParamLimits

0x1354,	// (0x000775aa) call_type_pane_cp03

0x13b8,	// (0x0007760e) popup_call2_audio_first_window_g1_ParamLimits

0x13b8,	// (0x0007760e) popup_call2_audio_first_window_g1

0x1428,	// (0x0007767e) popup_call2_audio_first_window_g2_ParamLimits

0x1428,	// (0x0007767e) popup_call2_audio_first_window_g2

0x0b19,	// (0x00076d6f) popup_call2_audio_first_window_g3_ParamLimits

0x0b19,	// (0x00076d6f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008577d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008577d) popup_call2_audio_first_window_g

0x1506,	// (0x0007775c) popup_call2_audio_first_window_t1_ParamLimits

0x1506,	// (0x0007775c) popup_call2_audio_first_window_t1

0x1609,	// (0x0007785f) popup_call2_audio_first_window_t4_ParamLimits

0x1609,	// (0x0007785f) popup_call2_audio_first_window_t4

0x16ec,	// (0x00077942) popup_call2_audio_first_window_t5_ParamLimits

0x16ec,	// (0x00077942) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00085788) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00085788) popup_call2_audio_first_window_t

0xede1,	// (0x00085037) bg_popup_call2_act_pane_g1

0x1d59,	// (0x00077faf) popup_cale_lunar_info_window_t1

0x1d67,	// (0x00077fbd) popup_cale_lunar_info_window_t2

0x1d75,	// (0x00077fcb) popup_cale_lunar_info_window_t3

0xeb77,	// (0x00084dcd) bg_popup_call2_bubble_pane

0x17ed,	// (0x00077a43) bg_popup_call2_in_pane_cp01_ParamLimits

0x17ed,	// (0x00077a43) bg_popup_call2_in_pane_cp01

0xe853,	// (0x00084aa9) call_type_pane_cp02

0x1835,	// (0x00077a8b) popup_call2_audio_out_window_g1_ParamLimits

0x1835,	// (0x00077a8b) popup_call2_audio_out_window_g1

0x1861,	// (0x00077ab7) popup_call2_audio_out_window_g2_ParamLimits

0x1861,	// (0x00077ab7) popup_call2_audio_out_window_g2

0x1889,	// (0x00077adf) popup_call2_audio_out_window_g3_ParamLimits

0x1889,	// (0x00077adf) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00085791) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00085791) popup_call2_audio_out_window_g

0x18c4,	// (0x00077b1a) popup_call2_audio_out_window_t1_ParamLimits

0x18c4,	// (0x00077b1a) popup_call2_audio_out_window_t1

0x1923,	// (0x00077b79) popup_call2_audio_out_window_t2_ParamLimits

0x1923,	// (0x00077b79) popup_call2_audio_out_window_t2

0x1977,	// (0x00077bcd) popup_call2_audio_out_window_t3_ParamLimits

0x1977,	// (0x00077bcd) popup_call2_audio_out_window_t3

0x198d,	// (0x00077be3) popup_call2_audio_out_window_t4_ParamLimits

0x198d,	// (0x00077be3) popup_call2_audio_out_window_t4

0x19a3,	// (0x00077bf9) popup_call2_audio_out_window_t5_ParamLimits

0x19a3,	// (0x00077bf9) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008579a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008579a) popup_call2_audio_out_window_t

0x1a07,	// (0x00077c5d) bg_popup_call2_in_pane_ParamLimits

0x1a07,	// (0x00077c5d) bg_popup_call2_in_pane

0x1a63,	// (0x00077cb9) popup_call2_audio_in_window_g1_ParamLimits

0x1a63,	// (0x00077cb9) popup_call2_audio_in_window_g1

0x1a9b,	// (0x00077cf1) popup_call2_audio_in_window_g2_ParamLimits

0x1a9b,	// (0x00077cf1) popup_call2_audio_in_window_g2

0x1ad3,	// (0x00077d29) popup_call2_audio_in_window_g3_ParamLimits

0x1ad3,	// (0x00077d29) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000857a7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000857a7) popup_call2_audio_in_window_g

0x1b2b,	// (0x00077d81) popup_call2_audio_in_window_t1_ParamLimits

0x1b2b,	// (0x00077d81) popup_call2_audio_in_window_t1

0x1bab,	// (0x00077e01) popup_call2_audio_in_window_t2_ParamLimits

0x1bab,	// (0x00077e01) popup_call2_audio_in_window_t2

0x1c2b,	// (0x00077e81) popup_call2_audio_in_window_t3_ParamLimits

0x1c2b,	// (0x00077e81) popup_call2_audio_in_window_t3

0x1c45,	// (0x00077e9b) popup_call2_audio_in_window_t4_ParamLimits

0x1c45,	// (0x00077e9b) popup_call2_audio_in_window_t4

0x1c57,	// (0x00077ead) popup_call2_audio_in_window_t5_ParamLimits

0x1c57,	// (0x00077ead) popup_call2_audio_in_window_t5

0x1c6c,	// (0x00077ec2) popup_call2_audio_in_window_t6_ParamLimits

0x1c6c,	// (0x00077ec2) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000857b0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000857b0) popup_call2_audio_in_window_t

0xede1,	// (0x00085037) bg_popup_call2_in_pane_g1

0x1d83,	// (0x00077fd9) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00085818) popup_cale_lunar_info_window_t

0xede9,	// (0x0008503f) bg_popup_call2_rect_pane_ParamLimits

0xede9,	// (0x0008503f) bg_popup_call2_rect_pane

0xeb77,	// (0x00084dcd) call2_cli_visual_graphic_pane

0xeb77,	// (0x00084dcd) call2_cli_visual_text_pane

0x9d01,	// (0x0007ff57) smil_status_volume_pane_g3

0x0002,

0xef03,	// (0x00085159) call2_cli_visual_graphic_pane_g1

0xef03,	// (0x00085159) call2_cli_visual_graphic_pane_g2

0xef03,	// (0x00085159) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000857bd) call2_cli_visual_graphic_pane_g

0x1c81,	// (0x00077ed7) bg_popup_call2_rect_pane_g1

0xef8f,	// (0x000851e5) bg_popup_call2_rect_pane_g2

0x1c89,	// (0x00077edf) bg_popup_call2_rect_pane_g3

0x1c91,	// (0x00077ee7) bg_popup_call2_rect_pane_g4

0x1c99,	// (0x00077eef) bg_popup_call2_rect_pane_g5

0x1ca1,	// (0x00077ef7) bg_popup_call2_rect_pane_g6

0x1ca9,	// (0x00077eff) bg_popup_call2_rect_pane_g7

0x1cb1,	// (0x00077f07) bg_popup_call2_rect_pane_g8

0x1cb9,	// (0x00077f0f) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000857c4) bg_popup_call2_rect_pane_g

0x1cc1,	// (0x00077f17) bg_popup_call2_bubble_pane_g1

0x1cc9,	// (0x00077f1f) bg_popup_call2_bubble_pane_g2

0x1cd1,	// (0x00077f27) bg_popup_call2_bubble_pane_g3

0x1cd9,	// (0x00077f2f) bg_popup_call2_bubble_pane_g4

0x1ce1,	// (0x00077f37) bg_popup_call2_bubble_pane_g5

0x1ce9,	// (0x00077f3f) bg_popup_call2_bubble_pane_g6

0x1cf1,	// (0x00077f47) bg_popup_call2_bubble_pane_g7

0x1cf9,	// (0x00077f4f) bg_popup_call2_bubble_pane_g8

0x1d01,	// (0x00077f57) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000857d7) bg_popup_call2_bubble_pane_g

0x703a,	// (0x0007d290) aid_cale_week_size_cell_pane

0x769e,	// (0x0007d8f4) aid_cams_cif_uncrop_pane_ParamLimits

0x769e,	// (0x0007d8f4) aid_cams_cif_uncrop_pane

0x77f9,	// (0x0007da4f) aid_cams_size_cell_ParamLimits

0x77f9,	// (0x0007da4f) aid_cams_size_cell

0x7805,	// (0x0007da5b) grid_cams_pane_ParamLimits

0x7813,	// (0x0007da69) linegrid_cams_pane_ParamLimits

0x7902,	// (0x0007db58) call_video_pane_t1

0x7923,	// (0x0007db79) call_video_pane_t2

0x0001,

0xf26e,	// (0x000854c4) call_video_pane_t

0x7e6a,	// (0x0007e0c0) aid_cale_month_size_cell_pane_ParamLimits

0x7e6a,	// (0x0007e0c0) aid_cale_month_size_cell_pane

0xf60b,	// (0x00085861) smil_status_volume_pane_g

0x9d0e,	// (0x0007ff64) volume_smil_pane_ParamLimits

0x67a9,	// (0x0007c9ff) aid_popup2_width_pane

0x6f3c,	// (0x0007d192) cell_qdial_pane_g4_ParamLimits

0x6f3c,	// (0x0007d192) cell_qdial_pane_g4

0x8d87,	// (0x0007efdd) aid_blid_cardinal_pane_ParamLimits

0x8d97,	// (0x0007efed) aid_blid_destination_pane_ParamLimits

0x8d97,	// (0x0007efed) aid_blid_destination_pane

0xede9,	// (0x0008503f) bg_popup_call_poc_act_pane_ParamLimits

0xede9,	// (0x0008503f) bg_popup_call_poc_act_pane

0xede9,	// (0x0008503f) bg_popup_call_poc_inact_pane_ParamLimits

0xede9,	// (0x0008503f) bg_popup_call_poc_inact_pane

0x1d09,	// (0x00077f5f) bg_popup_call_poc_act_pane_g1

0x1d11,	// (0x00077f67) bg_popup_call_poc_act_pane_g2

0x1d19,	// (0x00077f6f) bg_popup_call_poc_act_pane_g3

0x1cd9,	// (0x00077f2f) bg_popup_call_poc_act_pane_g4

0x1ce1,	// (0x00077f37) bg_popup_call_poc_act_pane_g5

0x1d21,	// (0x00077f77) bg_popup_call_poc_act_pane_g6

0x1cf1,	// (0x00077f47) bg_popup_call_poc_act_pane_g7

0x1d29,	// (0x00077f7f) bg_popup_call_poc_act_pane_g8

0xeb77,	// (0x00084dcd) main_usb_pane

0x9afd,	// (0x0007fd53) popup_cale_lunar_info_window

0x7c4c,	// (0x0007dea2) im_reading_pane_t1_ParamLimits

0x0115,	// (0x0007636b) list_im_pane_ParamLimits

0x0126,	// (0x0007637c) scroll_pane_cp07_ParamLimits

0xeb77,	// (0x00084dcd) grid_highlight_pane_cp012

0xede9,	// (0x0008503f) mup_scale_pane_ParamLimits

0x0b19,	// (0x00076d6f) main_usb_pane_g1_ParamLimits

0x0b19,	// (0x00076d6f) main_usb_pane_g1

0x986c,	// (0x0007fac2) main_usb_pane_g2_ParamLimits

0x986c,	// (0x0007fac2) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00085801) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00085801) main_usb_pane_g

0x9878,	// (0x0007face) main_usb_pane_t1_ParamLimits

0x9878,	// (0x0007face) main_usb_pane_t1

0x988a,	// (0x0007fae0) main_usb_pane_t2_ParamLimits

0x988a,	// (0x0007fae0) main_usb_pane_t2

0x989c,	// (0x0007faf2) main_usb_pane_t3_ParamLimits

0x989c,	// (0x0007faf2) main_usb_pane_t3

0x98ae,	// (0x0007fb04) main_usb_pane_t4_ParamLimits

0x98ae,	// (0x0007fb04) main_usb_pane_t4

0x98c0,	// (0x0007fb16) main_usb_pane_t5_ParamLimits

0x98c0,	// (0x0007fb16) main_usb_pane_t5

0x98d2,	// (0x0007fb28) main_usb_pane_t6_ParamLimits

0x98d2,	// (0x0007fb28) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00085806) main_usb_pane_t_ParamLimits

0x8d2d,	// (0x0007ef83) aid_text_placing

0x8d39,	// (0x0007ef8f) main_location2_pane_t1_ParamLimits

0x8d4d,	// (0x0007efa3) main_location2_pane_t2_ParamLimits

0x8d61,	// (0x0007efb7) main_location2_pane_t3_ParamLimits

0x8d75,	// (0x0007efcb) main_location2_pane_t4_ParamLimits

0x8d75,	// (0x0007efcb) main_location2_pane_t4

0xf3cf,	// (0x00085625) main_location2_pane_t_ParamLimits

0xee25,	// (0x0008507b) find_pinb_pane_g2_ParamLimits

0xee25,	// (0x0008507b) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00085375) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00085375) find_pinb_pane_g

0xee31,	// (0x00085087) find_pinb_pane_t1_ParamLimits

0xee43,	// (0x00085099) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008537a) find_pinb_pane_t_ParamLimits

0xeb77,	// (0x00084dcd) main_call3_pane

0x83be,	// (0x0007e614) cale_month_day_heading_pane_t1_ParamLimits

0x8444,	// (0x0007e69a) cale_month_day_heading_pane_t2_ParamLimits

0x84d5,	// (0x0007e72b) cale_month_day_heading_pane_t3_ParamLimits

0x8566,	// (0x0007e7bc) cale_month_day_heading_pane_t4_ParamLimits

0x85f7,	// (0x0007e84d) cale_month_day_heading_pane_t5_ParamLimits

0x8688,	// (0x0007e8de) cale_month_day_heading_pane_t6_ParamLimits

0x8719,	// (0x0007e96f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000854fc) cale_month_day_heading_pane_t_ParamLimits

0x0370,	// (0x000765c6) smil_status_volume_pane

0x9430,	// (0x0007f686) postcard_address_pane_ParamLimits

0x9430,	// (0x0007f686) postcard_address_pane

0x943c,	// (0x0007f692) postcard_message_pane_ParamLimits

0x943c,	// (0x0007f692) postcard_message_pane

0x9837,	// (0x0007fa8d) call2_cli_visual_pane_t1_ParamLimits

0x9837,	// (0x0007fa8d) call2_cli_visual_pane_t1

0x9e65,	// (0x000800bb) postcard_message_pane_t1_ParamLimits

0x9e65,	// (0x000800bb) postcard_message_pane_t1

0x9e4e,	// (0x000800a4) postcard_address_pane_t1_ParamLimits

0x9e4e,	// (0x000800a4) postcard_address_pane_t1

0x9e3f,	// (0x00080095) popup_call3_audio_in_window_ParamLimits

0x9e3f,	// (0x00080095) popup_call3_audio_in_window

0x9d23,	// (0x0007ff79) bg_popup_call3_in_pane_ParamLimits

0x9d23,	// (0x0007ff79) bg_popup_call3_in_pane

0x9d85,	// (0x0007ffdb) popup_call3_audio_in_window_g1_ParamLimits

0x9d85,	// (0x0007ffdb) popup_call3_audio_in_window_g1

0x9d9d,	// (0x0007fff3) popup_call3_audio_in_window_g2_ParamLimits

0x9d9d,	// (0x0007fff3) popup_call3_audio_in_window_g2

0x9db5,	// (0x0008000b) popup_call3_audio_in_window_g3_ParamLimits

0x9db5,	// (0x0008000b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00085868) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00085868) popup_call3_audio_in_window_g

0x9ddd,	// (0x00080033) popup_call3_audio_in_window_t1_ParamLimits

0x9ddd,	// (0x00080033) popup_call3_audio_in_window_t1

0x9e05,	// (0x0008005b) popup_call3_audio_in_window_t2_ParamLimits

0x9e05,	// (0x0008005b) popup_call3_audio_in_window_t2

0x9e2d,	// (0x00080083) popup_call3_audio_in_window_t3_ParamLimits

0x9e2d,	// (0x00080083) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00085871) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00085871) popup_call3_audio_in_window_t

0xf073,	// (0x000852c9) bg_popup_call3_rect_pane

0x1c81,	// (0x00077ed7) bg_popup_call3_rect_pane_g1

0xef8f,	// (0x000851e5) bg_popup_call3_rect_pane_g2

0x1c89,	// (0x00077edf) bg_popup_call3_rect_pane_g3

0x1c91,	// (0x00077ee7) bg_popup_call3_rect_pane_g4

0x1c99,	// (0x00077eef) bg_popup_call3_rect_pane_g5

0x1ca1,	// (0x00077ef7) bg_popup_call3_rect_pane_g6

0x1ca9,	// (0x00077eff) bg_popup_call3_rect_pane_g7

0x90ad,	// (0x0007f303) mup_visualizer_osc_pane

0x0b3f,	// (0x00076d95) mup_visualizer_spec_pane

0x9d43,	// (0x0007ff99) call3_video_qcif_pane_ParamLimits

0x9d43,	// (0x0007ff99) call3_video_qcif_pane

0x9d55,	// (0x0007ffab) call3_video_qcif_uncrop_pane_ParamLimits

0x9d55,	// (0x0007ffab) call3_video_qcif_uncrop_pane

0x9d63,	// (0x0007ffb9) call3_video_subqcif_pane_ParamLimits

0x9d63,	// (0x0007ffb9) call3_video_subqcif_pane

0x9d75,	// (0x0007ffcb) call3_video_subqcif_uncrop_pane_ParamLimits

0x9d75,	// (0x0007ffcb) call3_video_subqcif_uncrop_pane

0x9dcd,	// (0x00080023) popup_call3_audio_in_window_g4_ParamLimits

0x9dcd,	// (0x00080023) popup_call3_audio_in_window_g4

0x9cf0,	// (0x0007ff46) mup_spec_half_pane

0x9cf9,	// (0x0007ff4f) mup_spec_half_pane_cp

0x1ee6,	// (0x0007813c) mup_osc_middle_pane

0x1eef,	// (0x00078145) mup_visualizer_osc_pane_g1

0x9cd1,	// (0x0007ff27) mup_spec_bar_pane_ParamLimits

0x9cd1,	// (0x0007ff27) mup_spec_bar_pane

0x1ed3,	// (0x00078129) mup_spec_bar_pane_g1

0x1edd,	// (0x00078133) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008585c) mup_spec_bar_pane_g

0x703a,	// (0x0007d290) aid_cale_week_size_cell_pane_ParamLimits

0x704f,	// (0x0007d2a5) bg_cale_heading_pane_ParamLimits

0xefcc,	// (0x00085222) bg_cale_pane_cp01_ParamLimits

0x7071,	// (0x0007d2c7) cale_week_corner_pane_ParamLimits

0x708b,	// (0x0007d2e1) cale_week_day_heading_pane_ParamLimits

0x70ad,	// (0x0007d303) cale_week_scroll_pane_g1_ParamLimits

0x70ca,	// (0x0007d320) cale_week_scroll_pane_g2_ParamLimits

0x70dd,	// (0x0007d333) cale_week_scroll_pane_g3_ParamLimits

0x70f0,	// (0x0007d346) cale_week_scroll_pane_g4_ParamLimits

0x7103,	// (0x0007d359) cale_week_scroll_pane_g5_ParamLimits

0x7116,	// (0x0007d36c) cale_week_scroll_pane_g6_ParamLimits

0x7129,	// (0x0007d37f) cale_week_scroll_pane_g7_ParamLimits

0x713c,	// (0x0007d392) cale_week_scroll_pane_g8_ParamLimits

0x7151,	// (0x0007d3a7) cale_week_scroll_pane_g9_ParamLimits

0x7164,	// (0x0007d3ba) cale_week_scroll_pane_g10_ParamLimits

0x7177,	// (0x0007d3cd) cale_week_scroll_pane_g11_ParamLimits

0x718a,	// (0x0007d3e0) cale_week_scroll_pane_g12_ParamLimits

0x71a1,	// (0x0007d3f7) cale_week_scroll_pane_g13_ParamLimits

0x71bc,	// (0x0007d412) cale_week_scroll_pane_g14_ParamLimits

0x71d7,	// (0x0007d42d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00085406) cale_week_scroll_pane_g_ParamLimits

0x7207,	// (0x0007d45d) cale_week_time_pane_ParamLimits

0x721c,	// (0x0007d472) grid_cale_week_pane_ParamLimits

0xefe9,	// (0x0008523f) listscroll_cale_week_pane_t1

0xeffb,	// (0x00085251) scroll_pane_cp08_ParamLimits

0x7ed3,	// (0x0007e129) cale_month_corner_pane_ParamLimits

0x0346,	// (0x0007659c) cale_month_pane_t1

0x835b,	// (0x0007e5b1) cale_month_week_pane_ParamLimits

0x0b19,	// (0x00076d6f) popup_call_status_window_g1_ParamLimits

0x8b60,	// (0x0007edb6) popup_call_status_window_g2_ParamLimits

0x8b6c,	// (0x0007edc2) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000855ac) popup_call_status_window_g_ParamLimits

0x06fe,	// (0x00076954) aid_call2_pane

0x57c1,	// (0x0007ba17) msg_header_pane_g1

0x9430,	// (0x0007f686) postcard_address2_pane_ParamLimits

0x9430,	// (0x0007f686) postcard_address2_pane

0x943c,	// (0x0007f692) postcard_message2_pane_ParamLimits

0x943c,	// (0x0007f692) postcard_message2_pane

0x9c69,	// (0x0007febf) message2_row_pane_ParamLimits

0x9c69,	// (0x0007febf) message2_row_pane

0x9c84,	// (0x0007feda) address2_row_pane_ParamLimits

0x9c84,	// (0x0007feda) address2_row_pane

0x1ea1,	// (0x000780f7) postcard_message2_row_pane_g1

0x1ea9,	// (0x000780ff) postcard_message2_row_pane_t1

0x1ea1,	// (0x000780f7) address2_row_pane_g1

0x1ea9,	// (0x000780ff) address2_row_pane_t1

0x7584,	// (0x0007d7da) aid_size_cell_vorec

0xeb77,	// (0x00084dcd) main_rss_pane

0x9c97,	// (0x0007feed) rss_list_single_pane_ParamLimits

0x9c97,	// (0x0007feed) rss_list_single_pane

0x1eb7,	// (0x0007810d) rss_list_single_pane_t1

0x1ec5,	// (0x0007811b) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00085857) rss_list_single_pane_t

0xeb77,	// (0x00084dcd) main_camera2_pane

0xeb77,	// (0x00084dcd) main_video2_pane

0x9ec9,	// (0x0008011f) cams_zoom_pane_cp2_ParamLimits

0x9ec9,	// (0x0008011f) cams_zoom_pane_cp2

0x9ed5,	// (0x0008012b) image2_vga_pane_ParamLimits

0x9ed5,	// (0x0008012b) image2_vga_pane

0x9ee4,	// (0x0008013a) main_camera2_pane_g1_ParamLimits

0x9ee4,	// (0x0008013a) main_camera2_pane_g1

0x9ef0,	// (0x00080146) main_camera2_pane_g2_ParamLimits

0x9ef0,	// (0x00080146) main_camera2_pane_g2

0x9efc,	// (0x00080152) main_camera2_pane_g3_ParamLimits

0x9efc,	// (0x00080152) main_camera2_pane_g3

0x9f08,	// (0x0008015e) main_camera2_pane_g4_ParamLimits

0x9f08,	// (0x0008015e) main_camera2_pane_g4

0x9f14,	// (0x0008016a) main_camera2_pane_g5_ParamLimits

0x9f14,	// (0x0008016a) main_camera2_pane_g5

0x9f20,	// (0x00080176) main_camera2_pane_g6_ParamLimits

0x9f20,	// (0x00080176) main_camera2_pane_g6

0x9f2c,	// (0x00080182) main_camera2_pane_g7_ParamLimits

0x9f2c,	// (0x00080182) main_camera2_pane_g7

0x9f38,	// (0x0008018e) main_camera2_pane_g8_ParamLimits

0x9f38,	// (0x0008018e) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00085878) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00085878) main_camera2_pane_g

0x9f50,	// (0x000801a6) main_camera2_pane_t1_ParamLimits

0x9f50,	// (0x000801a6) main_camera2_pane_t1

0x9f62,	// (0x000801b8) main_camera2_pane_t2_ParamLimits

0x9f62,	// (0x000801b8) main_camera2_pane_t2

0x9f74,	// (0x000801ca) main_camera2_pane_t3_ParamLimits

0x9f74,	// (0x000801ca) main_camera2_pane_t3

0x9f86,	// (0x000801dc) main_camera2_pane_t4_ParamLimits

0x9f86,	// (0x000801dc) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008588b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008588b) main_camera2_pane_t

0x9fe8,	// (0x0008023e) cams_zoom_pane_cp4_ParamLimits

0x9fe8,	// (0x0008023e) cams_zoom_pane_cp4

0x9ff8,	// (0x0008024e) image2_cif_pane_ParamLimits

0x9ff8,	// (0x0008024e) image2_cif_pane

0xa00d,	// (0x00080263) image2_subqcif_pane_ParamLimits

0xa00d,	// (0x00080263) image2_subqcif_pane

0xa01c,	// (0x00080272) main_video2_pane_g1_ParamLimits

0xa01c,	// (0x00080272) main_video2_pane_g1

0xa02e,	// (0x00080284) main_video2_pane_g2_ParamLimits

0xa02e,	// (0x00080284) main_video2_pane_g2

0xa03e,	// (0x00080294) main_video2_pane_g3_ParamLimits

0xa03e,	// (0x00080294) main_video2_pane_g3

0xa04e,	// (0x000802a4) main_video2_pane_g4_ParamLimits

0xa04e,	// (0x000802a4) main_video2_pane_g4

0xa05e,	// (0x000802b4) main_video2_pane_g5_ParamLimits

0xa05e,	// (0x000802b4) main_video2_pane_g5

0xa06e,	// (0x000802c4) main_video2_pane_g6_ParamLimits

0xa06e,	// (0x000802c4) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008589a) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008589a) main_video2_pane_g

0xa080,	// (0x000802d6) main_video2_pane_t1_ParamLimits

0xa080,	// (0x000802d6) main_video2_pane_t1

0xa09a,	// (0x000802f0) main_video2_pane_t2_ParamLimits

0xa09a,	// (0x000802f0) main_video2_pane_t2

0xa0c0,	// (0x00080316) main_video2_pane_t3_ParamLimits

0xa0c0,	// (0x00080316) main_video2_pane_t3

0x0002,

0xf651,	// (0x000858a7) main_video2_pane_t_ParamLimits

0xf651,	// (0x000858a7) main_video2_pane_t

0x9989,	// (0x0007fbdf) call_muted_g2

0x0001,

0xf5f3,	// (0x00085849) call_muted_g

0xeb77,	// (0x00084dcd) main_mup2_pane

0x1f54,	// (0x000781aa) main_mup2_pane_g1_ParamLimits

0x1f54,	// (0x000781aa) main_mup2_pane_g1

0xa0e6,	// (0x0008033c) main_mup2_pane_g2_ParamLimits

0xa0e6,	// (0x0008033c) main_mup2_pane_g2

0xa368,	// (0x000805be) main_mup_pane_g13_cp1

0xa370,	// (0x000805c6) mup_volume_pane_cp1

0xa106,	// (0x0008035c) main_mup2_pane_g4_ParamLimits

0xa106,	// (0x0008035c) main_mup2_pane_g4

0xa11b,	// (0x00080371) main_mup2_pane_g5_ParamLimits

0xa11b,	// (0x00080371) main_mup2_pane_g5

0xa130,	// (0x00080386) main_mup2_pane_g6_ParamLimits

0xa130,	// (0x00080386) main_mup2_pane_g6

0xa145,	// (0x0008039b) main_mup2_pane_g7_ParamLimits

0xa145,	// (0x0008039b) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000858ae) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000858ae) main_mup2_pane_g

0xa161,	// (0x000803b7) main_mup2_pane_t1_ParamLimits

0xa161,	// (0x000803b7) main_mup2_pane_t1

0xa178,	// (0x000803ce) main_mup2_pane_t2_ParamLimits

0xa178,	// (0x000803ce) main_mup2_pane_t2

0xa18f,	// (0x000803e5) main_mup2_pane_t3_ParamLimits

0xa18f,	// (0x000803e5) main_mup2_pane_t3

0xa1a6,	// (0x000803fc) main_mup2_pane_t4_ParamLimits

0xa1a6,	// (0x000803fc) main_mup2_pane_t4

0xa1c0,	// (0x00080416) main_mup2_pane_t5_ParamLimits

0xa1c0,	// (0x00080416) main_mup2_pane_t5

0xa1da,	// (0x00080430) main_mup2_pane_t6_ParamLimits

0xa1da,	// (0x00080430) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000858bd) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000858bd) main_mup2_pane_t

0xa212,	// (0x00080468) mup2_visualizer_pane_ParamLimits

0xa212,	// (0x00080468) mup2_visualizer_pane

0xa248,	// (0x0008049e) mup_progress_pane_cp_ParamLimits

0xa248,	// (0x0008049e) mup_progress_pane_cp

0xa353,	// (0x000805a9) mup_volume_pane_cp_ParamLimits

0xa353,	// (0x000805a9) mup_volume_pane_cp

0xa25f,	// (0x000804b5) mup2_visualizer_pane_g1_ParamLimits

0xa25f,	// (0x000804b5) mup2_visualizer_pane_g1

0x1f26,	// (0x0007817c) mup2_visualizer_pane_g2_ParamLimits

0x1f26,	// (0x0007817c) mup2_visualizer_pane_g2

0xa274,	// (0x000804ca) mup2_visualizer_pane_g3_ParamLimits

0xa274,	// (0x000804ca) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000858ca) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000858ca) mup2_visualizer_pane_g

0x0d66,	// (0x00076fbc) aid_size_cell_fmradio

0x9a9f,	// (0x0007fcf5) aid_height_parent_landcape

0x01a4,	// (0x000763fa) wml_content_pane_cp

0x01ac,	// (0x00076402) wml_tabs_pane

0x01b5,	// (0x0007640b) popup_wml_miniature_window

0x01bd,	// (0x00076413) scroll_pane_cp021

0x01d1,	// (0x00076427) wml_content_pane_comp8

0xeb77,	// (0x00084dcd) bg_popup_sub_pane_cp05

0x1f44,	// (0x0007819a) popup_wml_miniature_window_g1

0x1f4c,	// (0x000781a2) wml_miniature_view_pane

0xa282,	// (0x000804d8) aid_size_wml_view

0xa28a,	// (0x000804e0) wml_miniature_view_pane_g1

0xa293,	// (0x000804e9) wml_miniature_view_pane_g2

0xa29c,	// (0x000804f2) wml_miniature_view_pane_g3

0xa2a4,	// (0x000804fa) wml_miniature_view_pane_g4

0xa2ac,	// (0x00080502) wml_miniature_view_pane_g5

0xa2b4,	// (0x0008050a) wml_miniature_view_pane_g6

0xa2bc,	// (0x00080512) wml_miniature_view_pane_g7

0xa2c4,	// (0x0008051a) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000858d1) wml_miniature_view_pane_g

0x1f54,	// (0x000781aa) background_graphic_ParamLimits

0x1f54,	// (0x000781aa) background_graphic

0x1f60,	// (0x000781b6) wml_tabs_2_pane

0x1f69,	// (0x000781bf) wml_tabs_3_pane_ParamLimits

0x1f69,	// (0x000781bf) wml_tabs_3_pane

0x1f7b,	// (0x000781d1) wml_tabs_4_pane_ParamLimits

0x1f7b,	// (0x000781d1) wml_tabs_4_pane

0x1f91,	// (0x000781e7) wml_tabs_5_pane_ParamLimits

0x1f91,	// (0x000781e7) wml_tabs_5_pane

0x1fab,	// (0x00078201) wml_tabs_pane_g2_ParamLimits

0x1fab,	// (0x00078201) wml_tabs_pane_g2

0x1fbf,	// (0x00078215) wml_tabs_pane_g3_ParamLimits

0x1fbf,	// (0x00078215) wml_tabs_pane_g3

0xa2cc,	// (0x00080522) wml_tabs_2_active_pane_ParamLimits

0xa2cc,	// (0x00080522) wml_tabs_2_active_pane

0xa2dc,	// (0x00080532) wml_tabs_2_passive_pane_ParamLimits

0xa2dc,	// (0x00080532) wml_tabs_2_passive_pane

0xa2ec,	// (0x00080542) wml_tabs_3_active_pane_cp_ParamLimits

0xa2ec,	// (0x00080542) wml_tabs_3_active_pane_cp

0xa2fd,	// (0x00080553) wml_tabs_3_passive_pane_ParamLimits

0xa2fd,	// (0x00080553) wml_tabs_3_passive_pane

0xa30e,	// (0x00080564) wml_tabs_3_passive_pane_cp_ParamLimits

0xa30e,	// (0x00080564) wml_tabs_3_passive_pane_cp

0xa31f,	// (0x00080575) tabs_4_active_pane

0xa327,	// (0x0008057d) tabs_4_passive_pane

0xa32f,	// (0x00080585) tabs_4_passive_pane_cp

0xa337,	// (0x0008058d) tabs_4_passive_pane_cp2

0x9864,	// (0x0007faba) aid_height_text

0x907a,	// (0x0007f2d0) mup_volume_cont_pane_ParamLimits

0x907a,	// (0x0007f2d0) mup_volume_cont_pane

0x6b78,	// (0x0007cdce) aid_size_cell_pinb

0x6b82,	// (0x0007cdd8) aid_size_list_pinb

0xa231,	// (0x00080487) mup2_volume_cont_pane_ParamLimits

0xa231,	// (0x00080487) mup2_volume_cont_pane

0xa33f,	// (0x00080595) mup2_volume_cont_pane_g1_ParamLimits

0xa33f,	// (0x00080595) mup2_volume_cont_pane_g1

0x67b5,	// (0x0007ca0b) aid_size_cell_touch_ParamLimits

0x67b5,	// (0x0007ca0b) aid_size_cell_touch

0x6a5e,	// (0x0007ccb4) touch_pane_ParamLimits

0x6a5e,	// (0x0007ccb4) touch_pane

0xe75a,	// (0x000849b0) main_rss2_pane

0x1fdc,	// (0x00078232) listscroll_rss2_pane

0x1fe5,	// (0x0007823b) rss2_navigation_pane

0x1fed,	// (0x00078243) list_rss2_pane

0x0839,	// (0x00076a8f) scroll_pane_cp22

0x1ff5,	// (0x0007824b) rss2_navigation_pane_g1

0x1ffe,	// (0x00078254) rss2_navigation_pane_g2

0x2006,	// (0x0007825c) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000858e2) rss2_navigation_pane_g

0x200e,	// (0x00078264) rss2_navigation_pane_t1

0xa378,	// (0x000805ce) rss2_list_single_pane_ParamLimits

0xa378,	// (0x000805ce) rss2_list_single_pane

0x201c,	// (0x00078272) rss2_list_single_pane_t2

0x202a,	// (0x00078280) rss2_list_single_pane_t3_ParamLimits

0x202a,	// (0x00078280) rss2_list_single_pane_t3

0x2047,	// (0x0007829d) rss2_list_single_pane_t4

0x89cd,	// (0x0007ec23) smil_status_pane_g1

0xf0bc,	// (0x00085312) main_image2_pane_ParamLimits

0xf0bc,	// (0x00085312) main_image2_pane

0x9f44,	// (0x0008019a) main_camera2_pane_g9_ParamLimits

0x9f44,	// (0x0008019a) main_camera2_pane_g9

0x9f98,	// (0x000801ee) main_camera2_pane_t5_ParamLimits

0x9f98,	// (0x000801ee) main_camera2_pane_t5

0x9faa,	// (0x00080200) main_camera2_pane_t6_ParamLimits

0x9faa,	// (0x00080200) main_camera2_pane_t6

0xa3a9,	// (0x000805ff) main_image2_pane_g1_ParamLimits

0xa3a9,	// (0x000805ff) main_image2_pane_g1

0x9604,	// (0x0007f85a) smil2_video_pane_ParamLimits

0x9604,	// (0x0007f85a) smil2_video_pane

0x67e9,	// (0x0007ca3f) aid_zoom_text_primary_cp

0x6a07,	// (0x0007cc5d) popup_preview_fixed_window

0x010d,	// (0x00076363) im_reading_pane_g1

0x9e8e,	// (0x000800e4) cams2_bc_adjust_pane_cp_ParamLimits

0x9e8e,	// (0x000800e4) cams2_bc_adjust_pane_cp

0x9fda,	// (0x00080230) cams2_bc_adjust_pane_ParamLimits

0x9fda,	// (0x00080230) cams2_bc_adjust_pane

0xa3b5,	// (0x0008060b) cams2_bc_adjust_pane_g1

0xa3bd,	// (0x00080613) cams2_slider_pane

0xa3c6,	// (0x0008061c) cams2_slider_pane_g1

0xa3cf,	// (0x00080625) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000858e9) cams2_slider_pane_g

0x6c88,	// (0x0007cede) calc_display_pane_ParamLimits

0x6ca6,	// (0x0007cefc) calc_paper_pane_ParamLimits

0x6cc2,	// (0x0007cf18) grid_calc_pane_ParamLimits

0x8bce,	// (0x0007ee24) popup_clock_digital_window_t1_ParamLimits

0x0d03,	// (0x00076f59) main_image_pane_t1

0x6c6e,	// (0x0007cec4) aid_size_cell_calc_ParamLimits

0x6c6e,	// (0x0007cec4) aid_size_cell_calc

0x9ad9,	// (0x0007fd2f) popup_blid_sat_info2_window_ParamLimits

0x9ad9,	// (0x0007fd2f) popup_blid_sat_info2_window

0x205d,	// (0x000782b3) aid_size_cell_blid

0x2065,	// (0x000782bb) bg_popup_window_pane_cp07

0x2088,	// (0x000782de) grid_popup_blid_pane

0x2092,	// (0x000782e8) heading_pane_cp05_ParamLimits

0x2092,	// (0x000782e8) heading_pane_cp05

0x2168,	// (0x000783be) cell_popup_blid_pane_ParamLimits

0x2168,	// (0x000783be) cell_popup_blid_pane

0x218c,	// (0x000783e2) cell_popup_blid_pane_g1

0x2194,	// (0x000783ea) cell_popup_blid_pane_t1

0xa1f7,	// (0x0008044d) mup2_indicator_pane_ParamLimits

0xa1f7,	// (0x0008044d) mup2_indicator_pane

0xf073,	// (0x000852c9) mup2_visualizer_osc_pane

0x1f32,	// (0x00078188) mup2_visualizer_spec_pane_ParamLimits

0x1f32,	// (0x00078188) mup2_visualizer_spec_pane

0xa3e9,	// (0x0008063f) mup2_spec_half_pane

0xa3f2,	// (0x00080648) mup2_spec_half_pane_cp

0xa3fc,	// (0x00080652) mup2_spec_bar_pane_ParamLimits

0xa3fc,	// (0x00080652) mup2_spec_bar_pane

0x1ed3,	// (0x00078129) mup2_spec_bar_pane_g1

0x1edd,	// (0x00078133) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008585c) mup2_spec_bar_pane_g

0xa41b,	// (0x00080671) mup2_osc_middle_pane

0x1eef,	// (0x00078145) mup2_visualizer_osc_pane_g1

0xe784,	// (0x000849da) popup_number_entry_window_t1_ParamLimits

0xe797,	// (0x000849ed) popup_number_entry_window_t2_ParamLimits

0xe7a9,	// (0x000849ff) popup_number_entry_window_t3_ParamLimits

0x6ab5,	// (0x0007cd0b) popup_number_entry_window_t5_ParamLimits

0x6ab5,	// (0x0007cd0b) popup_number_entry_window_t5

0xf0ca,	// (0x00085320) popup_number_entry_window_t_ParamLimits

0xe7bb,	// (0x00084a11) text_title_cp2_ParamLimits

0x92f8,	// (0x0007f54e) aid_hotspot_pointer_text2_pane

0x9392,	// (0x0007f5e8) main_viewer_pane_g9_ParamLimits

0x9392,	// (0x0007f5e8) main_viewer_pane_g9

0x0346,	// (0x0007659c) cale_month_pane_t1_ParamLimits

0x0383,	// (0x000765d9) bg_cale_pane_ParamLimits

0x039b,	// (0x000765f1) list_cale_pane_ParamLimits

0x03ac,	// (0x00076602) listscroll_cale_day_pane_t1

0x03be,	// (0x00076614) scroll_pane_cp09_ParamLimits

0x90b5,	// (0x0007f30b) main_mup_eq_pane_t1_ParamLimits

0x90b5,	// (0x0007f30b) main_mup_eq_pane_t1

0x90cf,	// (0x0007f325) main_mup_eq_pane_t2_ParamLimits

0x90cf,	// (0x0007f325) main_mup_eq_pane_t2

0x90e9,	// (0x0007f33f) main_mup_eq_pane_t3_ParamLimits

0x90e9,	// (0x0007f33f) main_mup_eq_pane_t3

0x9101,	// (0x0007f357) main_mup_eq_pane_t4_ParamLimits

0x9101,	// (0x0007f357) main_mup_eq_pane_t4

0x9119,	// (0x0007f36f) main_mup_eq_pane_t5_ParamLimits

0x9119,	// (0x0007f36f) main_mup_eq_pane_t5

0x9131,	// (0x0007f387) main_mup_eq_pane_t6_ParamLimits

0x9131,	// (0x0007f387) main_mup_eq_pane_t6

0x9145,	// (0x0007f39b) main_mup_eq_pane_t7_ParamLimits

0x9145,	// (0x0007f39b) main_mup_eq_pane_t7

0x9159,	// (0x0007f3af) main_mup_eq_pane_t8_ParamLimits

0x9159,	// (0x0007f3af) main_mup_eq_pane_t8

0x916f,	// (0x0007f3c5) main_mup_eq_pane_t9_ParamLimits

0x916f,	// (0x0007f3c5) main_mup_eq_pane_t9

0x9187,	// (0x0007f3dd) main_mup_eq_pane_t10_ParamLimits

0x9187,	// (0x0007f3dd) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000856ab) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000856ab) main_mup_eq_pane_t

0x9244,	// (0x0007f49a) mup_equalizer_pane_cp5_ParamLimits

0x925a,	// (0x0007f4b0) mup_equalizer_pane_cp6_ParamLimits

0x9272,	// (0x0007f4c8) mup_equalizer_pane_cp7_ParamLimits

0xe75a,	// (0x000849b0) main_gallery_pane

0x1ef8,	// (0x0007814e) smil2_volume_pane

0x1f13,	// (0x00078169) smil_status_volume_pane_g1_ParamLimits

0x1f00,	// (0x00078156) smil_status_volume_pane_g2_ParamLimits

0x9d01,	// (0x0007ff57) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00085861) smil_status_volume_pane_g_ParamLimits

0x2065,	// (0x000782bb) bg_popup_window_pane_cp07_ParamLimits

0x2073,	// (0x000782c9) blid_firmament_pane

0xa424,	// (0x0008067a) aid_size_cell_gallery_ParamLimits

0xa424,	// (0x0008067a) aid_size_cell_gallery

0xa432,	// (0x00080688) grid_gallery_pane_ParamLimits

0xa432,	// (0x00080688) grid_gallery_pane

0xa442,	// (0x00080698) cell_gallery_pane_ParamLimits

0xa442,	// (0x00080698) cell_gallery_pane

0x21a2,	// (0x000783f8) bg_cell_gallery_focus_pane_ParamLimits

0x21a2,	// (0x000783f8) bg_cell_gallery_focus_pane

0x21b4,	// (0x0007840a) cell_gallery_pane_g1_ParamLimits

0x21b4,	// (0x0007840a) cell_gallery_pane_g1

0xa490,	// (0x000806e6) cell_gallery_pane_g2_ParamLimits

0xa490,	// (0x000806e6) cell_gallery_pane_g2

0xa49d,	// (0x000806f3) cell_gallery_pane_g3_ParamLimits

0xa49d,	// (0x000806f3) cell_gallery_pane_g3

0x21c0,	// (0x00078416) cell_gallery_pane_g4_ParamLimits

0x21c0,	// (0x00078416) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008590f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008590f) cell_gallery_pane_g

0x21cc,	// (0x00078422) bg_cell_gallery_focus_pane_g1

0x21d4,	// (0x0007842a) bg_cell_gallery_focus_pane_g2

0x21dc,	// (0x00078432) bg_cell_gallery_focus_pane_g3

0x21e4,	// (0x0007843a) bg_cell_gallery_focus_pane_g4

0x21ec,	// (0x00078442) bg_cell_gallery_focus_pane_g5

0x21f4,	// (0x0007844a) bg_cell_gallery_focus_pane_g6

0x21fc,	// (0x00078452) bg_cell_gallery_focus_pane_g7

0x2204,	// (0x0007845a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00085918) bg_cell_gallery_focus_pane_g

0x220c,	// (0x00078462) aid_firma_cardinal

0x2220,	// (0x00078476) blid_firmament_pane_t1

0x2237,	// (0x0007848d) blid_firmament_pane_t2

0x224e,	// (0x000784a4) blid_firmament_pane_t3

0x2265,	// (0x000784bb) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00085929) blid_firmament_pane_t

0x227c,	// (0x000784d2) blid_sat_info_pane

0x228c,	// (0x000784e2) blid_sat_info_pane_g1

0x228c,	// (0x000784e2) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00085932) blid_sat_info_pane_g

0x2296,	// (0x000784ec) blid_sat_info_pane_t1

0x22a4,	// (0x000784fa) smil2_volume_content_pane

0x22ad,	// (0x00078503) smil2_volume_pane_g1

0x22b5,	// (0x0007850b) smil2_volume_content_pane_g1

0x22be,	// (0x00078514) smil2_volume_content_pane_g2

0x22c7,	// (0x0007851d) smil2_volume_content_pane_g3

0x22d0,	// (0x00078526) smil2_volume_content_pane_g4

0x22d9,	// (0x0007852f) smil2_volume_content_pane_g5

0x22e2,	// (0x00078538) smil2_volume_content_pane_g6

0x22eb,	// (0x00078541) smil2_volume_content_pane_g7

0x22f4,	// (0x0007854a) smil2_volume_content_pane_g8

0x22fd,	// (0x00078553) smil2_volume_content_pane_g9

0x2306,	// (0x0007855c) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00085937) smil2_volume_content_pane_g

0x729d,	// (0x0007d4f3) cale_week_day_heading_pane_t1_ParamLimits

0x72d8,	// (0x0007d52e) cale_week_day_heading_pane_t2_ParamLimits

0x7313,	// (0x0007d569) cale_week_day_heading_pane_t3_ParamLimits

0x734e,	// (0x0007d5a4) cale_week_day_heading_pane_t4_ParamLimits

0x7389,	// (0x0007d5df) cale_week_day_heading_pane_t5_ParamLimits

0x73c4,	// (0x0007d61a) cale_week_day_heading_pane_t6_ParamLimits

0x73ff,	// (0x0007d655) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00085427) cale_week_day_heading_pane_t_ParamLimits

0xf018,	// (0x0008526e) bg_cale_side_pane_ParamLimits

0x743a,	// (0x0007d690) cale_week_time_pane_t1_ParamLimits

0x7454,	// (0x0007d6aa) cale_week_time_pane_t2_ParamLimits

0x746e,	// (0x0007d6c4) cale_week_time_pane_t3_ParamLimits

0x7488,	// (0x0007d6de) cale_week_time_pane_t4_ParamLimits

0x74a2,	// (0x0007d6f8) cale_week_time_pane_t5_ParamLimits

0x74bc,	// (0x0007d712) cale_week_time_pane_t6_ParamLimits

0x74dc,	// (0x0007d732) cale_week_time_pane_t7_ParamLimits

0x74fe,	// (0x0007d754) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00085436) cale_week_time_pane_t_ParamLimits

0x7522,	// (0x0007d778) cell_cale_week_pane_g2_ParamLimits

0xf018,	// (0x0008526e) bg_cale_side_pane_cp01_ParamLimits

0x87c2,	// (0x0007ea18) cale_month_week_pane_t1_ParamLimits

0x87db,	// (0x0007ea31) cale_month_week_pane_t2_ParamLimits

0x87f4,	// (0x0007ea4a) cale_month_week_pane_t3_ParamLimits

0x880d,	// (0x0007ea63) cale_month_week_pane_t4_ParamLimits

0x8826,	// (0x0007ea7c) cale_month_week_pane_t5_ParamLimits

0x8847,	// (0x0007ea9d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008550b) cale_month_week_pane_t_ParamLimits

0x898a,	// (0x0007ebe0) cell_cale_month_pane_g1_ParamLimits

0xe75a,	// (0x000849b0) main_cale_event_viewer_pane

0xe75a,	// (0x000849b0) listscroll_cale_event_viewer_pane

0x230f,	// (0x00078565) list_cale_ev_pane

0x2317,	// (0x0007856d) scroll_pane_cp023

0x2323,	// (0x00078579) field_cale_ev_pane_ParamLimits

0x2323,	// (0x00078579) field_cale_ev_pane

0x2341,	// (0x00078597) field_cale_ev_content_pane_ParamLimits

0x2341,	// (0x00078597) field_cale_ev_content_pane

0x234d,	// (0x000785a3) field_cale_ev_pane_g1_ParamLimits

0x234d,	// (0x000785a3) field_cale_ev_pane_g1

0x2359,	// (0x000785af) field_cale_ev_pane_g2_ParamLimits

0x2359,	// (0x000785af) field_cale_ev_pane_g2

0x2371,	// (0x000785c7) field_cale_ev_pane_g3_ParamLimits

0x2371,	// (0x000785c7) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008594c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008594c) field_cale_ev_pane_g

0x2389,	// (0x000785df) field_cale_ev_pane_t1_ParamLimits

0x2389,	// (0x000785df) field_cale_ev_pane_t1

0x23a0,	// (0x000785f6) field_cale_ev_content_pane_t1_ParamLimits

0x23a0,	// (0x000785f6) field_cale_ev_content_pane_t1

0x0be9,	// (0x00076e3f) bg_button_pane_cp01

0x702a,	// (0x0007d280) listscroll_cale_week_pane_ParamLimits

0xefc3,	// (0x00085219) popup_toolbar_window_cp01

0xefe9,	// (0x0008523f) listscroll_cale_week_pane_t1_ParamLimits

0x702a,	// (0x0007d280) listscroll_cale_day_pane_ParamLimits

0xefc3,	// (0x00085219) popup_toolbar_window_cp02

0x03ac,	// (0x00076602) listscroll_cale_day_pane_t1_ParamLimits

0x702a,	// (0x0007d280) main_cale_month_pane_ParamLimits

0x9be0,	// (0x0007fe36) popup_toolbar_window_cp03_ParamLimits

0x9be0,	// (0x0007fe36) popup_toolbar_window_cp03

0x951a,	// (0x0007f770) main_image_pane_g2_ParamLimits

0x951a,	// (0x0007f770) main_image_pane_g2

0x9526,	// (0x0007f77c) main_image_pane_g3_ParamLimits

0x9526,	// (0x0007f77c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008573d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008573d) main_image_pane_g

0x0d03,	// (0x00076f59) main_image_pane_t1_ParamLimits

0x9532,	// (0x0007f788) main_image_pane_t2_ParamLimits

0x9532,	// (0x0007f788) main_image_pane_t2

0x9544,	// (0x0007f79a) main_image_pane_t3_ParamLimits

0x9544,	// (0x0007f79a) main_image_pane_t3

0x9556,	// (0x0007f7ac) main_image_pane_t4_ParamLimits

0x9556,	// (0x0007f7ac) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00085744) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00085744) main_image_pane_t

0x9568,	// (0x0007f7be) popup_image_details_window_cp01

0x9572,	// (0x0007f7c8) popup_toobar_trans_pane_cp01_ParamLimits

0x9572,	// (0x0007f7c8) popup_toobar_trans_pane_cp01

0x9b30,	// (0x0007fd86) popup_image_details_window_ParamLimits

0x9b30,	// (0x0007fd86) popup_image_details_window

0x9b3e,	// (0x0007fd94) popup_image_focus_window

0x9e80,	// (0x000800d6) camera2_autofocus_pane_ParamLimits

0x9e80,	// (0x000800d6) camera2_autofocus_pane

0xe75a,	// (0x000849b0) bg_popup_sub_pane_cp06

0x23be,	// (0x00078614) popup_image_focus_window_g1

0x23c6,	// (0x0007861c) popup_image_focus_window_g2

0x23ce,	// (0x00078624) popup_image_focus_window_g3

0x23d6,	// (0x0007862c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00085953) popup_image_focus_window_g

0x23de,	// (0x00078634) popup_image_focus_window_t1

0x23ec,	// (0x00078642) popup_image_focus_window_t2

0x23fc,	// (0x00078652) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008595c) popup_image_focus_window_t

0x240a,	// (0x00078660) camera2_autofocus_pane_g1

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp01

0x2418,	// (0x0007866e) popup_image_details_window_g1

0x242b,	// (0x00078681) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008596e) popup_image_details_window_g

0x2454,	// (0x000786aa) popup_image_details_window_t1

0x2466,	// (0x000786bc) popup_image_details_window_t2

0x247f,	// (0x000786d5) popup_image_details_window_t3

0x2493,	// (0x000786e9) popup_image_details_window_t4

0x24ae,	// (0x00078704) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x00085975) popup_image_details_window_t

0xee9a,	// (0x000850f0) bg_calc_paper_pane_ParamLimits

0xe75a,	// (0x000849b0) grid_highlight_pane_cp013

0x6dbf,	// (0x0007d015) list_calc_pane_ParamLimits

0x6dd1,	// (0x0007d027) scroll_pane_cp024

0xeeae,	// (0x00085104) bg_calc_display_pane_ParamLimits

0x6dd9,	// (0x0007d02f) calc_display_pane_t1_ParamLimits

0x6dee,	// (0x0007d044) calc_display_pane_t2_ParamLimits

0x6e03,	// (0x0007d059) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000853a7) calc_display_pane_t_ParamLimits

0x6edf,	// (0x0007d135) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000853c4) cell_calc_pane_g

0x6ee8,	// (0x0007d13e) cell_calc_pane_t1

0xef0d,	// (0x00085163) grid_highlight_pane_cp02_ParamLimits

0xef23,	// (0x00085179) toolbar_button_pane_cp01_ParamLimits

0xef23,	// (0x00085179) toolbar_button_pane_cp01

0x0d48,	// (0x00076f9e) temp_image_control_pane_ParamLimits

0x0d48,	// (0x00076f9e) temp_image_control_pane

0xf0bc,	// (0x00085312) main_mp3_pane

0x24c8,	// (0x0007871e) temp_image_control_pane_g1_ParamLimits

0x24c8,	// (0x0007871e) temp_image_control_pane_g1

0x24d6,	// (0x0007872c) temp_image_control_pane_g2_ParamLimits

0x24d6,	// (0x0007872c) temp_image_control_pane_g2

0x24e8,	// (0x0007873e) temp_image_control_pane_g3_ParamLimits

0x24e8,	// (0x0007873e) temp_image_control_pane_g3

0xa4da,	// (0x00080730) temp_image_control_pane_g4_ParamLimits

0xa4da,	// (0x00080730) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00085980) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00085980) temp_image_control_pane_g

0x24c8,	// (0x0007871e) main_mp3_pane_g1

0xa4eb,	// (0x00080741) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00085989) main_mp3_pane_g

0x252b,	// (0x00078781) main_mp3_pane_t1

0xf07b,	// (0x000852d1) main_camera_pane_g8_ParamLimits

0xf07b,	// (0x000852d1) main_camera_pane_g8

0x77af,	// (0x0007da05) main_video_pane_g7_ParamLimits

0x77af,	// (0x0007da05) main_video_pane_g7

0x9fc8,	// (0x0008021e) main_camera2_pane_t7_ParamLimits

0x9fc8,	// (0x0008021e) main_camera2_pane_t7

0x0164,	// (0x000763ba) scroll_pane_cp025_ParamLimits

0x0164,	// (0x000763ba) scroll_pane_cp025

0x0178,	// (0x000763ce) scroll_pane_cp026_ParamLimits

0x0178,	// (0x000763ce) scroll_pane_cp026

0x0187,	// (0x000763dd) wml_content_pane_ParamLimits

0xe75a,	// (0x000849b0) main_touch_calib_pane

0xa58f,	// (0x000807e5) main_touch_calib_pane_g1

0xa59b,	// (0x000807f1) main_touch_calib_pane_g2

0xa5a7,	// (0x000807fd) main_touch_calib_pane_g3

0xa5b3,	// (0x00080809) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000859a7) main_touch_calib_pane_g

0xa5bf,	// (0x00080815) main_touch_calib_pane_t1

0xa5d8,	// (0x0008082e) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000859b0) main_touch_calib_pane_t

0x0915,	// (0x00076b6b) mup_progress_pane_cp02

0x094a,	// (0x00076ba0) navi_pane_g1

0x0a05,	// (0x00076c5b) navi_pane_mp_t3

0xf0bc,	// (0x00085312) main_mp3_pane_ParamLimits

0x9c1d,	// (0x0007fe73) navi_pane_ParamLimits

0x24c8,	// (0x0007871e) main_mp3_pane_g1_ParamLimits

0xa4eb,	// (0x00080741) main_mp3_pane_g2_ParamLimits

0xa4f7,	// (0x0008074d) main_mp3_pane_g3_ParamLimits

0xa4f7,	// (0x0008074d) main_mp3_pane_g3

0xa503,	// (0x00080759) main_mp3_pane_g4_ParamLimits

0xa503,	// (0x00080759) main_mp3_pane_g4

0x24f8,	// (0x0007874e) main_mp3_pane_g5_ParamLimits

0x24f8,	// (0x0007874e) main_mp3_pane_g5

0x2506,	// (0x0007875c) main_mp3_pane_g6_ParamLimits

0x2506,	// (0x0007875c) main_mp3_pane_g6

0x2513,	// (0x00078769) main_mp3_pane_g7_ParamLimits

0x2513,	// (0x00078769) main_mp3_pane_g7

0x251f,	// (0x00078775) main_mp3_pane_g8_ParamLimits

0x251f,	// (0x00078775) main_mp3_pane_g8

0xf733,	// (0x00085989) main_mp3_pane_g_ParamLimits

0xa50f,	// (0x00080765) main_mp3_pane_t2

0xa51f,	// (0x00080775) main_mp3_pane_t3

0x2539,	// (0x0007878f) main_mp3_pane_t4

0x2547,	// (0x0007879d) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008599a) main_mp3_pane_t

0x2555,	// (0x000787ab) mup_progress_pane_cp01

0x67e9,	// (0x0007ca3f) aid_zoom_text_secondary2

0x230f,	// (0x00078565) list_cale_ev2_pane

0x2317,	// (0x0007856d) scroll_pane_cp023_ParamLimits

0xa633,	// (0x00080889) field_cale_ev2_pane_ParamLimits

0xa633,	// (0x00080889) field_cale_ev2_pane

0xa65c,	// (0x000808b2) field_cale_ev2_pane_g1_ParamLimits

0xa65c,	// (0x000808b2) field_cale_ev2_pane_g1

0xa668,	// (0x000808be) field_cale_ev2_pane_g2_ParamLimits

0xa668,	// (0x000808be) field_cale_ev2_pane_g2

0xa680,	// (0x000808d6) field_cale_ev2_pane_g3_ParamLimits

0xa680,	// (0x000808d6) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000859bb) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000859bb) field_cale_ev2_pane_g

0x5846,	// (0x0007ba9c) field_cale_ev2_pane_t1_ParamLimits

0x5846,	// (0x0007ba9c) field_cale_ev2_pane_t1

0x585d,	// (0x0007bab3) field_cale_ev2_pane_t2_ParamLimits

0x585d,	// (0x0007bab3) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000859c4) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000859c4) field_cale_ev2_pane_t

0x93fa,	// (0x0007f650) main_postcard_pane_g5_ParamLimits

0x93fa,	// (0x0007f650) main_postcard_pane_g5

0x9408,	// (0x0007f65e) main_postcard_pane_g6_ParamLimits

0x9408,	// (0x0007f65e) main_postcard_pane_g6

0x75f9,	// (0x0007d84f) camera2_autofocus_pane_cp_ParamLimits

0x75f9,	// (0x0007d84f) camera2_autofocus_pane_cp

0xf0bc,	// (0x00085312) main_mup3_pane

0xa6a4,	// (0x000808fa) main_mup3_pane_g1_ParamLimits

0xa6a4,	// (0x000808fa) main_mup3_pane_g1

0xa6c5,	// (0x0008091b) main_mup3_pane_g2_ParamLimits

0xa6c5,	// (0x0008091b) main_mup3_pane_g2

0xa73d,	// (0x00080993) main_mup3_pane_g3_ParamLimits

0xa73d,	// (0x00080993) main_mup3_pane_g3

0xa780,	// (0x000809d6) main_mup3_pane_g4_ParamLimits

0xa780,	// (0x000809d6) main_mup3_pane_g4

0xa7c3,	// (0x00080a19) main_mup3_pane_g5_ParamLimits

0xa7c3,	// (0x00080a19) main_mup3_pane_g5

0xa806,	// (0x00080a5c) main_mup3_pane_g6_ParamLimits

0xa806,	// (0x00080a5c) main_mup3_pane_g6

0x257d,	// (0x000787d3) main_mup3_pane_g7_ParamLimits

0x257d,	// (0x000787d3) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000859d4) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000859d4) main_mup3_pane_g

0xa87c,	// (0x00080ad2) main_mup3_pane_t1_ParamLimits

0xa87c,	// (0x00080ad2) main_mup3_pane_t1

0xa8eb,	// (0x00080b41) main_mup3_pane_t2_ParamLimits

0xa8eb,	// (0x00080b41) main_mup3_pane_t2

0xa9b4,	// (0x00080c0a) main_mup3_pane_t4_ParamLimits

0xa9b4,	// (0x00080c0a) main_mup3_pane_t4

0xaa02,	// (0x00080c58) main_mup3_pane_t5_ParamLimits

0xaa02,	// (0x00080c58) main_mup3_pane_t5

0xaab2,	// (0x00080d08) main_mup3_pane_t6_ParamLimits

0xaab2,	// (0x00080d08) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000859e5) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000859e5) main_mup3_pane_t

0xab5e,	// (0x00080db4) mup3_progress_pane_ParamLimits

0xab5e,	// (0x00080db4) mup3_progress_pane

0xabdc,	// (0x00080e32) popup_mup3_control_window_ParamLimits

0xabdc,	// (0x00080e32) popup_mup3_control_window

0x258b,	// (0x000787e1) popup_mup3_text_window

0xabf5,	// (0x00080e4b) mup3_progress_pane_t1

0xac14,	// (0x00080e6a) mup3_progress_pane_t2

0x2593,	// (0x000787e9) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000859f2) mup3_progress_pane_t

0x25b0,	// (0x00078806) mup_progress_pane_cp03

0xe75a,	// (0x000849b0) bg_tb_trans_pane_cp04

0xac33,	// (0x00080e89) mup3_volume_pane

0xac3b,	// (0x00080e91) popup_mup3_control_window_g1

0xac44,	// (0x00080e9a) mup3_volume_pane_g1

0xac4d,	// (0x00080ea3) mup3_volume_pane_g2

0xac56,	// (0x00080eac) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000859f9) mup3_volume_pane_g

0xe75a,	// (0x000849b0) bg_tb_trans_pane_cp03

0x25c0,	// (0x00078816) popup_mup3_text_window_g1

0x25c8,	// (0x0007881e) popup_mup3_text_window_t1

0xeef6,	// (0x0008514c) list_calc_item_pane_g1_ParamLimits

0x1fd3,	// (0x00078229) mup_volume_pane_cp_g1

0xa5f1,	// (0x00080847) main_touch_calib_pane_t3

0xa607,	// (0x0008085d) main_touch_calib_pane_t4

0xa61d,	// (0x00080873) main_touch_calib_pane_t5

0x67a1,	// (0x0007c9f7) aid_cell_size_toolbar2

0x67a9,	// (0x0007c9ff) aid_popup3_width_pane

0x5562,	// (0x0007b7b8) aid_zoom_text_msg_primary

0x75ce,	// (0x0007d824) vorec_t7

0xeeba,	// (0x00085110) bg_calc_paper_pane_g1_ParamLimits

0xeec6,	// (0x0008511c) bg_calc_paper_pane_g2_ParamLimits

0xeed2,	// (0x00085128) bg_calc_paper_pane_g3_ParamLimits

0xeede,	// (0x00085134) bg_calc_paper_pane_g4_ParamLimits

0xeeea,	// (0x00085140) bg_calc_paper_pane_g5_ParamLimits

0x6e42,	// (0x0007d098) bg_calc_paper_pane_g6_ParamLimits

0x6e53,	// (0x0007d0a9) bg_calc_paper_pane_g7_ParamLimits

0x6e64,	// (0x0007d0ba) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000853ae) bg_calc_paper_pane_g_ParamLimits

0x6e75,	// (0x0007d0cb) calc_bg_paper_pane_g9_ParamLimits

0x76e0,	// (0x0007d936) image_qvga_pane_ParamLimits

0x76e0,	// (0x0007d936) image_qvga_pane

0xede9,	// (0x0008503f) bg_popup_sub_pane_cp04_ParamLimits

0x0c7f,	// (0x00076ed5) popup_mup_playback_window_g1_ParamLimits

0x0c8b,	// (0x00076ee1) popup_mup_playback_window_t1_ParamLimits

0x0ca0,	// (0x00076ef6) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00085738) popup_mup_playback_window_t_ParamLimits

0xa0f7,	// (0x0008034d) main_mup2_pane_g3_ParamLimits

0xa0f7,	// (0x0008034d) main_mup2_pane_g3

0x79b0,	// (0x0007dc06) popup_toolbar_window_cp04

0x1082,	// (0x000772d8) popup_call2_audio_second_window_g3_ParamLimits

0x1082,	// (0x000772d8) popup_call2_audio_second_window_g3

0x148c,	// (0x000776e2) popup_call2_audio_first_window_g4_ParamLimits

0x148c,	// (0x000776e2) popup_call2_audio_first_window_g4

0x1b0b,	// (0x00077d61) popup_call2_audio_in_window_g4_ParamLimits

0x1b0b,	// (0x00077d61) popup_call2_audio_in_window_g4

0x950d,	// (0x0007f763) aid_area_sk_bg_cut_ParamLimits

0x950d,	// (0x0007f763) aid_area_sk_bg_cut

0x0cb5,	// (0x00076f0b) aid_area_sk_bg_cut_2_ParamLimits

0x0cb5,	// (0x00076f0b) aid_area_sk_bg_cut_2

0xa480,	// (0x000806d6) aid_placing_details_win

0xa488,	// (0x000806de) aid_placing_details_win_2

0x240a,	// (0x00078660) camera2_autofocus_pane_g1_ParamLimits

0x69f8,	// (0x0007cc4e) popup_fixed_preview_cale_window_ParamLimits

0x69f8,	// (0x0007cc4e) popup_fixed_preview_cale_window

0x0a95,	// (0x00076ceb) navi_slider_pane_g3

0x0a8c,	// (0x00076ce2) navi_slider_pane_g4

0x0a83,	// (0x00076cd9) navi_slider_pane_g5

0x0a95,	// (0x00076ceb) navi_slider_pane_g6

0x8e49,	// (0x0007f09f) navi_slider_pane_g7

0x0bb6,	// (0x00076e0c) mup_scale_pane_g3

0x0bbf,	// (0x00076e15) mup_scale_pane_g4

0x0bc8,	// (0x00076e1e) mup_scale_pane_g5

0x928a,	// (0x0007f4e0) mup_scale_pane_g6

0x9293,	// (0x0007f4e9) mup_scale_pane_g7

0x0a95,	// (0x00076ceb) cams2_slider_pane_g3

0x2055,	// (0x000782ab) cams2_slider_pane_g4

0xa3d8,	// (0x0008062e) cams2_slider_pane_g5

0x0a95,	// (0x00076ceb) cams2_slider_pane_g6

0xa3e0,	// (0x00080636) cams2_slider_pane_g7

0x228c,	// (0x000784e2) camera2_autofocus_pane_cp_g1

0x1e6c,	// (0x000780c2) bg_popup_preview_window_pane_cp02_ParamLimits

0x1e6c,	// (0x000780c2) bg_popup_preview_window_pane_cp02

0x25d6,	// (0x0007882c) list_fp_cale_pane_ParamLimits

0x25d6,	// (0x0007882c) list_fp_cale_pane

0x25e2,	// (0x00078838) popup_fixed_preview_cale_window_t1_ParamLimits

0x25e2,	// (0x00078838) popup_fixed_preview_cale_window_t1

0xac5f,	// (0x00080eb5) popup_fixed_preview_cale_window_t2_ParamLimits

0xac5f,	// (0x00080eb5) popup_fixed_preview_cale_window_t2

0xac74,	// (0x00080eca) popup_fixed_preview_cale_window_t3_ParamLimits

0xac74,	// (0x00080eca) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00085a00) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00085a00) popup_fixed_preview_cale_window_t

0xac89,	// (0x00080edf) list_single_fp_cale_pane_ParamLimits

0xac89,	// (0x00080edf) list_single_fp_cale_pane

0x2600,	// (0x00078856) list_single_fp_cale_pane_g1_ParamLimits

0x2600,	// (0x00078856) list_single_fp_cale_pane_g1

0x260c,	// (0x00078862) list_single_fp_cale_pane_g2_ParamLimits

0x260c,	// (0x00078862) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00085a07) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00085a07) list_single_fp_cale_pane_g

0x2625,	// (0x0007887b) list_single_fp_cale_pane_t1_ParamLimits

0x2625,	// (0x0007887b) list_single_fp_cale_pane_t1

0x2637,	// (0x0007888d) list_single_fp_cale_pane_t2_ParamLimits

0x2637,	// (0x0007888d) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x00085a0e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x00085a0e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe75a,	// (0x000849b0) main_dialer_pane

0xac9c,	// (0x00080ef2) aid_cell_size_keypad

0xaca6,	// (0x00080efc) dialer_ne_pane

0xacb0,	// (0x00080f06) grid_dialer_command_1_pane

0xacb8,	// (0x00080f0e) grid_dialer_command_2_pane

0xacc0,	// (0x00080f16) grid_dialer_keypad_pane

0xacd2,	// (0x00080f28) bg_popup_call_pane_cp06_ParamLimits

0xacd2,	// (0x00080f28) bg_popup_call_pane_cp06

0xacde,	// (0x00080f34) dialer_ne_clear_pane_ParamLimits

0xacde,	// (0x00080f34) dialer_ne_clear_pane

0x266a,	// (0x000788c0) dialer_ne_pane_g1

0x2672,	// (0x000788c8) dialer_ne_pane_t1_ParamLimits

0x2672,	// (0x000788c8) dialer_ne_pane_t1

0xacea,	// (0x00080f40) dialer_ne_pane_t2_ParamLimits

0xacea,	// (0x00080f40) dialer_ne_pane_t2

0xad07,	// (0x00080f5d) dialer_ne_pane_t3_ParamLimits

0xad07,	// (0x00080f5d) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00085a13) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00085a13) dialer_ne_pane_t

0xad2b,	// (0x00080f81) dialer_ne_pane_t3_copy1_ParamLimits

0xad2b,	// (0x00080f81) dialer_ne_pane_t3_copy1

0xad4f,	// (0x00080fa5) cell_dialer_keypad_pane_ParamLimits

0xad4f,	// (0x00080fa5) cell_dialer_keypad_pane

0xad66,	// (0x00080fbc) cell_dialer_command_1_pane_ParamLimits

0xad66,	// (0x00080fbc) cell_dialer_command_1_pane

0xad7c,	// (0x00080fd2) cell_dialer_command_2_pane_ParamLimits

0xad7c,	// (0x00080fd2) cell_dialer_command_2_pane

0x2684,	// (0x000788da) bg_button_pane_cp02_ParamLimits

0x2684,	// (0x000788da) bg_button_pane_cp02

0xad8b,	// (0x00080fe1) cell_dialer_keypad_pane_g1_ParamLimits

0xad8b,	// (0x00080fe1) cell_dialer_keypad_pane_g1

0x2684,	// (0x000788da) bg_button_pane_cp03_ParamLimits

0x2684,	// (0x000788da) bg_button_pane_cp03

0xada0,	// (0x00080ff6) cell_dialer_command_1_pane_g1_ParamLimits

0xada0,	// (0x00080ff6) cell_dialer_command_1_pane_g1

0x2690,	// (0x000788e6) bg_button_pane_cp04

0xadb4,	// (0x0008100a) cell_dialer_command_2_pane_g1

0xf073,	// (0x000852c9) bg_button_pane_cp06

0x2698,	// (0x000788ee) dialer_ne_clear_pane_g1

0x0956,	// (0x00076bac) navi_pane_g2

0x0984,	// (0x00076bda) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008563b) navi_pane_g

0x0a13,	// (0x00076c69) navi_pane_mv_g2

0x0a3a,	// (0x00076c90) navi_pane_mv_g5

0x8e14,	// (0x0007f06a) navi_pane_mv_t1

0xeeae,	// (0x00085104) main_clock2_pane

0xadf2,	// (0x00081048) main_clock2_list_pane_ParamLimits

0xadf2,	// (0x00081048) main_clock2_list_pane

0xae1a,	// (0x00081070) main_clock2_pane_t1_ParamLimits

0xae1a,	// (0x00081070) main_clock2_pane_t1

0xae3c,	// (0x00081092) main_clock2_pane_t2_ParamLimits

0xae3c,	// (0x00081092) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00085a1f) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00085a1f) main_clock2_pane_t

0xae97,	// (0x000810ed) popup_clock_analogue_window_cp03_ParamLimits

0xae97,	// (0x000810ed) popup_clock_analogue_window_cp03

0xaeb5,	// (0x0008110b) popup_clock_digital_window_cp02_ParamLimits

0xaeb5,	// (0x0008110b) popup_clock_digital_window_cp02

0xaf22,	// (0x00081178) main_clock2_list_single_pane_ParamLimits

0xaf22,	// (0x00081178) main_clock2_list_single_pane

0xf073,	// (0x000852c9) list_highlight_pane_cp05

0x26d6,	// (0x0007892c) main_clock2_list_single_pane_t1

0x79b0,	// (0x0007dc06) popup_toolbar_window_cp04_ParamLimits

0xa4aa,	// (0x00080700) camera2_autofocus_pane_g2_ParamLimits

0xa4aa,	// (0x00080700) camera2_autofocus_pane_g2

0xa4b6,	// (0x0008070c) camera2_autofocus_pane_g3_ParamLimits

0xa4b6,	// (0x0008070c) camera2_autofocus_pane_g3

0xa4c2,	// (0x00080718) camera2_autofocus_pane_g4_ParamLimits

0xa4c2,	// (0x00080718) camera2_autofocus_pane_g4

0xa4ce,	// (0x00080724) camera2_autofocus_pane_g5_ParamLimits

0xa4ce,	// (0x00080724) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00085963) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00085963) camera2_autofocus_pane_g

0x255d,	// (0x000787b3) camera2_autofocus_pane_cp_g2

0x2565,	// (0x000787bb) camera2_autofocus_pane_cp_g3

0x256d,	// (0x000787c3) camera2_autofocus_pane_cp_g4

0x2575,	// (0x000787cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000859c9) camera2_autofocus_pane_cp_g

0xacca,	// (0x00080f20) popup_dialer_spcha_window

0xe75a,	// (0x000849b0) bg_popup_sub_pane_cp07

0x26e4,	// (0x0007893a) list_spcha_pane

0x26ec,	// (0x00078942) list_single_spcha_pane_ParamLimits

0x26ec,	// (0x00078942) list_single_spcha_pane

0xe75a,	// (0x000849b0) list_highlight_pane_cp06

0x26fd,	// (0x00078953) list_single_spcha_pane_t1

0x18b5,	// (0x00077b0b) popup_call2_audio_out_window_g4_ParamLimits

0x18b5,	// (0x00077b0b) popup_call2_audio_out_window_g4

0xe75a,	// (0x000849b0) main_imed2_pane

0x9b46,	// (0x0007fd9c) popup_imed_adjust2_window

0x9b59,	// (0x0007fdaf) popup_imed_trans_window_ParamLimits

0x9b59,	// (0x0007fdaf) popup_imed_trans_window

0x20be,	// (0x00078314) popup_blid_sat_info2_window_t1

0x20cc,	// (0x00078322) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000858f8) popup_blid_sat_info2_window_t

0xafcc,	// (0x00081222) aid_size_cell_colour_35

0xafe6,	// (0x0008123c) aid_size_cell_colour_112

0xaffd,	// (0x00081253) aid_size_cell_effect

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp02

0x055c,	// (0x000767b2) heading_imed_pane

0xb017,	// (0x0008126d) listscroll_imed_pane

0x270b,	// (0x00078961) heading_imed_pane_g1

0x2713,	// (0x00078969) heading_imed_pane_t1

0x2721,	// (0x00078977) grid_imed_colour_35_pane_ParamLimits

0x2721,	// (0x00078977) grid_imed_colour_35_pane

0xb023,	// (0x00081279) grid_imed_effect_pane

0x2738,	// (0x0007898e) list_imed_aspect_pane

0xb033,	// (0x00081289) scroll_pane_cp027_ParamLimits

0xb033,	// (0x00081289) scroll_pane_cp027

0xb03f,	// (0x00081295) cell_imed_effect_pane_ParamLimits

0xb03f,	// (0x00081295) cell_imed_effect_pane

0x2740,	// (0x00078996) cell_imed_colour_pane_ParamLimits

0x2740,	// (0x00078996) cell_imed_colour_pane

0x2782,	// (0x000789d8) cell_imed_colour_pane_g1_ParamLimits

0x2782,	// (0x000789d8) cell_imed_colour_pane_g1

0x2793,	// (0x000789e9) hgihlgiht_grid_pane_cp016_ParamLimits

0x2793,	// (0x000789e9) hgihlgiht_grid_pane_cp016

0xb057,	// (0x000812ad) cell_imed_effect_pane_g1

0xb05f,	// (0x000812b5) grid_highlight_pane_cp017

0x27a4,	// (0x000789fa) list_imed_single_pane_ParamLimits

0x27a4,	// (0x000789fa) list_imed_single_pane

0xe75a,	// (0x000849b0) list_highlight_pane_cp07

0x27b9,	// (0x00078a0f) list_imed_aspect_pane_comp1_t1

0x1e78,	// (0x000780ce) bg_tb_trans_pane_cp05

0x27db,	// (0x00078a31) popup_imed_adjust2_window_g1

0x2802,	// (0x00078a58) popup_imed_adjust2_window_t1

0x281a,	// (0x00078a70) slider_imed_adjust_pane

0x282e,	// (0x00078a84) slider_imed_adjust_pane_g1

0x283e,	// (0x00078a94) slider_imed_adjust_pane_g2

0x284e,	// (0x00078aa4) slider_imed_adjust_pane_g3

0x285f,	// (0x00078ab5) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00085a3c) slider_imed_adjust_pane_g

0xb068,	// (0x000812be) aid_size_cell_clipart2

0xb074,	// (0x000812ca) grid_imed_clipart_pane

0x2870,	// (0x00078ac6) scroll_pane_cp031

0xb07e,	// (0x000812d4) cell_imed_clipart_pane_ParamLimits

0xb07e,	// (0x000812d4) cell_imed_clipart_pane

0xb0a0,	// (0x000812f6) cell_imed_clipart_pane_g1

0xe75a,	// (0x000849b0) grid_highlight_pane_cp014

0xadfe,	// (0x00081054) main_clock2_pane_g1_ParamLimits

0xadfe,	// (0x00081054) main_clock2_pane_g1

0xaecd,	// (0x00081123) aid_call2_pane_cp10

0xaedf,	// (0x00081135) aid_call_pane_cp10

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g1

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g2

0xaef1,	// (0x00081147) popup_clock_analogue_window_cp10_g3

0xaef1,	// (0x00081147) popup_clock_analogue_window_cp10_g4

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00085a2a) popup_clock_analogue_window_cp10_g

0xaf03,	// (0x00081159) popup_clock_analogue_window_cp10_t1

0xaf34,	// (0x0008118a) clock_digital_number_pane_cp10_ParamLimits

0xaf34,	// (0x0008118a) clock_digital_number_pane_cp10

0xaf4c,	// (0x000811a2) clock_digital_number_pane_cp11_ParamLimits

0xaf4c,	// (0x000811a2) clock_digital_number_pane_cp11

0xaf64,	// (0x000811ba) clock_digital_number_pane_cp12_ParamLimits

0xaf64,	// (0x000811ba) clock_digital_number_pane_cp12

0xaf7c,	// (0x000811d2) clock_digital_number_pane_cp13_ParamLimits

0xaf7c,	// (0x000811d2) clock_digital_number_pane_cp13

0xaf94,	// (0x000811ea) clock_digital_separator_pane_cp10_ParamLimits

0xaf94,	// (0x000811ea) clock_digital_separator_pane_cp10

0xafac,	// (0x00081202) popup_clock_digital_window_cp02_t1_ParamLimits

0xafac,	// (0x00081202) popup_clock_digital_window_cp02_t1

0xede1,	// (0x00085037) clock_digital_number_pane_cp10_g1

0xede1,	// (0x00085037) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00085a45) clock_digital_number_pane_cp10_g

0xede1,	// (0x00085037) clock_digital_separator_pane_cp10_g1

0xede1,	// (0x00085037) clock_digital_separator_pane_g2_cp10

0x0a42,	// (0x00076c98) navi_pane_vded_g4

0x0a4b,	// (0x00076ca1) navi_pane_vded_g5

0x0a54,	// (0x00076caa) navi_pane_vded_t1

0xe75a,	// (0x000849b0) main_vded_pane

0xb0a9,	// (0x000812ff) main_vded_pane_g1

0xb0b5,	// (0x0008130b) main_vded_pane_g2

0xb0bf,	// (0x00081315) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00085a4a) main_vded_pane_g

0xb0c9,	// (0x0008131f) main_vded_pane_t1

0xb0d7,	// (0x0008132d) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00085a51) main_vded_pane_t

0xb0e5,	// (0x0008133b) vded_slider_pane

0xb0ef,	// (0x00081345) vded_video_pane

0x2878,	// (0x00078ace) vded_video_pane_g1

0xb0f9,	// (0x0008134f) vded_video_pane_g2

0x228c,	// (0x000784e2) vded_video_pane_g3

0x0002,

0xf800,	// (0x00085a56) vded_video_pane_g

0x2882,	// (0x00078ad8) vded_slider_pane_g1

0x1fd3,	// (0x00078229) vded_slider_pane_g2

0x288b,	// (0x00078ae1) vded_slider_pane_g3

0x2894,	// (0x00078aea) vded_slider_pane_g4

0x289d,	// (0x00078af3) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00085a5d) vded_slider_pane_g

0xabce,	// (0x00080e24) mup3_rocker_pane_ParamLimits

0xabce,	// (0x00080e24) mup3_rocker_pane

0xb102,	// (0x00081358) mup3_control_keys_pane_g1

0xb10a,	// (0x00081360) mup3_control_keys_pane_g2

0xb112,	// (0x00081368) mup3_control_keys_pane_g3

0xb11a,	// (0x00081370) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00085a68) mup3_control_keys_pane_g

0x6a20,	// (0x0007cc76) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a20,	// (0x0007cc76) popup_toolbar2_fixed_window_cp01

0xabe8,	// (0x00080e3e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xabe8,	// (0x00080e3e) popup_toolbar2_fixed_window_cp02

0x11f4,	// (0x0007744a) popup_call2_audio_second_window_t4_ParamLimits

0x11f4,	// (0x0007744a) popup_call2_audio_second_window_t4

0x1722,	// (0x00077978) popup_call2_audio_first_window_t6_ParamLimits

0x1722,	// (0x00077978) popup_call2_audio_first_window_t6

0x19b8,	// (0x00077c0e) popup_call2_audio_out_window_t6_ParamLimits

0x19b8,	// (0x00077c0e) popup_call2_audio_out_window_t6

0xe75a,	// (0x000849b0) main_vitu_pane

0xb12a,	// (0x00081380) aid_size_cell_itu_ParamLimits

0xb12a,	// (0x00081380) aid_size_cell_itu

0x368d,	// (0x000798e3) bg_popup_window_pane_cp08_ParamLimits

0x368d,	// (0x000798e3) bg_popup_window_pane_cp08

0xb138,	// (0x0008138e) field_vitu_entry_pane_ParamLimits

0xb138,	// (0x0008138e) field_vitu_entry_pane

0xb147,	// (0x0008139d) grid_vitu_function_pane_ParamLimits

0xb147,	// (0x0008139d) grid_vitu_function_pane

0xb157,	// (0x000813ad) grid_vitu_itu_pane_ParamLimits

0xb157,	// (0x000813ad) grid_vitu_itu_pane

0xb167,	// (0x000813bd) cell_vitu_itu_pane_ParamLimits

0xb167,	// (0x000813bd) cell_vitu_itu_pane

0xb17c,	// (0x000813d2) cell_vitu_function_pane_ParamLimits

0xb17c,	// (0x000813d2) cell_vitu_function_pane

0xf0bc,	// (0x00085312) bg_popup_sub_pane_cp08_ParamLimits

0xf0bc,	// (0x00085312) bg_popup_sub_pane_cp08

0xb18e,	// (0x000813e4) field_vitu_entry_pane_t1_ParamLimits

0xb18e,	// (0x000813e4) field_vitu_entry_pane_t1

0x28be,	// (0x00078b14) field_vitu_entry_pane_t2_ParamLimits

0x28be,	// (0x00078b14) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00085a76) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00085a76) field_vitu_entry_pane_t

0x28db,	// (0x00078b31) bg_button_pane_cp05_ParamLimits

0x28db,	// (0x00078b31) bg_button_pane_cp05

0xb1aa,	// (0x00081400) cell_vitu_itu_pane_g1

0xb1c2,	// (0x00081418) cell_vitu_itu_pane_t1_ParamLimits

0xb1c2,	// (0x00081418) cell_vitu_itu_pane_t1

0xb1d4,	// (0x0008142a) cell_vitu_itu_pane_t2_ParamLimits

0xb1d4,	// (0x0008142a) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00085a7b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00085a7b) cell_vitu_itu_pane_t

0x28e9,	// (0x00078b3f) bg_button_pane_cp07

0xb209,	// (0x0008145f) cell_vitu_function_pane_g1

0x6ce6,	// (0x0007cf3c) main_calc_pane_g1

0x67dd,	// (0x0007ca33) aid_visual_content_pane

0xe75a,	// (0x000849b0) main_vradio_pane

0xb212,	// (0x00081468) main_vradio_pane_g1_ParamLimits

0xb212,	// (0x00081468) main_vradio_pane_g1

0x28f3,	// (0x00078b49) main_vradio_pane_g2_ParamLimits

0x28f3,	// (0x00078b49) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00085a82) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00085a82) main_vradio_pane_g

0xb222,	// (0x00081478) main_vradio_pane_t1_ParamLimits

0xb222,	// (0x00081478) main_vradio_pane_t1

0xb234,	// (0x0008148a) main_vradio_pane_t2_ParamLimits

0xb234,	// (0x0008148a) main_vradio_pane_t2

0x2900,	// (0x00078b56) main_vradio_pane_t3_ParamLimits

0x2900,	// (0x00078b56) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00085a87) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00085a87) main_vradio_pane_t

0xb246,	// (0x0008149c) vradio_rocker_control_pane_ParamLimits

0xb246,	// (0x0008149c) vradio_rocker_control_pane

0xb252,	// (0x000814a8) vradio_station_info_pane_ParamLimits

0xb252,	// (0x000814a8) vradio_station_info_pane

0x2914,	// (0x00078b6a) vradio_frequency_info_pane_ParamLimits

0x2914,	// (0x00078b6a) vradio_frequency_info_pane

0x228c,	// (0x000784e2) vradio_station_info_pane_g1

0x2923,	// (0x00078b79) vradio_station_info_pane_t1_ParamLimits

0x2923,	// (0x00078b79) vradio_station_info_pane_t1

0x2945,	// (0x00078b9b) vradio_station_info_pane_t2_ParamLimits

0x2945,	// (0x00078b9b) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00085a8e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00085a8e) vradio_station_info_pane_t

0x2957,	// (0x00078bad) vradio_tuning_pane

0x295f,	// (0x00078bb5) vradio_rocker_control_pane_g1

0x2967,	// (0x00078bbd) vradio_rocker_control_pane_g2

0x296f,	// (0x00078bc5) vradio_rocker_control_pane_g3

0x2977,	// (0x00078bcd) vradio_rocker_control_pane_g4

0x297f,	// (0x00078bd5) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00085a93) vradio_rocker_control_pane_g

0xb261,	// (0x000814b7) vradio_frequency_info_pane_g1

0x2987,	// (0x00078bdd) vradio_frequency_info_pane_t1_ParamLimits

0x2987,	// (0x00078bdd) vradio_frequency_info_pane_t1

0xb26b,	// (0x000814c1) vradio_tuning_pane_g1

0xb274,	// (0x000814ca) vradio_tuning_pane_t1

0x6826,	// (0x0007ca7c) area_side_right_pane_ParamLimits

0x6826,	// (0x0007ca7c) area_side_right_pane

0x1e33,	// (0x00078089) status_small_pane_g1

0x1e3b,	// (0x00078091) status_small_pane_g2

0x1e44,	// (0x0007809a) status_small_pane_g3

0x1e4d,	// (0x000780a3) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008584e) status_small_pane_g

0x1e56,	// (0x000780ac) status_small_pane_t1

0xe75a,	// (0x000849b0) main_video3_pane

0x299b,	// (0x00078bf1) cams_zoom_vslider_pane

0x29a3,	// (0x00078bf9) image3_wide_pane_ParamLimits

0x29a3,	// (0x00078bf9) image3_wide_pane

0x29bd,	// (0x00078c13) image3_wide_small_pane

0x29c9,	// (0x00078c1f) main_video3_pane_g1_ParamLimits

0x29c9,	// (0x00078c1f) main_video3_pane_g1

0x29e5,	// (0x00078c3b) main_video3_pane_g2_ParamLimits

0x29e5,	// (0x00078c3b) main_video3_pane_g2

0x0001,

0xf848,	// (0x00085a9e) main_video3_pane_g_ParamLimits

0xf848,	// (0x00085a9e) main_video3_pane_g

0x2a01,	// (0x00078c57) main_video3_pane_t1_ParamLimits

0x2a01,	// (0x00078c57) main_video3_pane_t1

0x2a2c,	// (0x00078c82) main_video3_pane_t2_ParamLimits

0x2a2c,	// (0x00078c82) main_video3_pane_t2

0x2a57,	// (0x00078cad) main_video3_pane_t3_ParamLimits

0x2a57,	// (0x00078cad) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00085aa3) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00085aa3) main_video3_pane_t

0x2a84,	// (0x00078cda) cams_zoom_vslider_pane_g1

0x2a8d,	// (0x00078ce3) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00085aaa) cams_zoom_vslider_pane_g

0x2a95,	// (0x00078ceb) small_slider_vertical_pane

0x228c,	// (0x000784e2) small_slider_vertical_pane_g1

0x228c,	// (0x000784e2) small_slider_vertical_pane_g2

0x2a9d,	// (0x00078cf3) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00085aaf) small_slider_vertical_pane_g

0xe75a,	// (0x000849b0) main_hwr_training_pane

0x2aa6,	// (0x00078cfc) hwr_training_instruct_pane_ParamLimits

0x2aa6,	// (0x00078cfc) hwr_training_instruct_pane

0xb283,	// (0x000814d9) hwr_training_navi_pane_ParamLimits

0xb283,	// (0x000814d9) hwr_training_navi_pane

0xb29d,	// (0x000814f3) hwr_training_write_pane_ParamLimits

0xb29d,	// (0x000814f3) hwr_training_write_pane

0xe75a,	// (0x000849b0) bg_frame_shadow_pane

0x2add,	// (0x00078d33) hwr_training_write_pane_g1

0x2ae5,	// (0x00078d3b) hwr_training_write_pane_g2

0x2aed,	// (0x00078d43) hwr_training_write_pane_g3

0x2af5,	// (0x00078d4b) hwr_training_write_pane_g4

0x2afd,	// (0x00078d53) hwr_training_write_pane_g5

0x2b05,	// (0x00078d5b) hwr_training_write_pane_g6

0x2b0d,	// (0x00078d63) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00085ab6) hwr_training_write_pane_g

0xb2d5,	// (0x0008152b) hwr_training_navi_pane_g1_ParamLimits

0xb2d5,	// (0x0008152b) hwr_training_navi_pane_g1

0xb2e7,	// (0x0008153d) hwr_training_navi_pane_g2_ParamLimits

0xb2e7,	// (0x0008153d) hwr_training_navi_pane_g2

0xb2f9,	// (0x0008154f) hwr_training_navi_pane_g3_ParamLimits

0xb2f9,	// (0x0008154f) hwr_training_navi_pane_g3

0xb309,	// (0x0008155f) hwr_training_navi_pane_g4_ParamLimits

0xb309,	// (0x0008155f) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00085ac5) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00085ac5) hwr_training_navi_pane_g

0xb323,	// (0x00081579) hwr_training_navi_pane_t1

0xb331,	// (0x00081587) list_single_hwr_training_instruct_pane_ParamLimits

0xb331,	// (0x00081587) list_single_hwr_training_instruct_pane

0x2b15,	// (0x00078d6b) list_single_hwr_training_instruct_pane_t1

0x21cc,	// (0x00078422) bg_frame_shadow_pane_g1

0x2b24,	// (0x00078d7a) bg_frame_shadow_pane_g2

0x2b2c,	// (0x00078d82) bg_frame_shadow_pane_g3

0x2b34,	// (0x00078d8a) bg_frame_shadow_pane_g4

0x2b3c,	// (0x00078d92) bg_frame_shadow_pane_g5

0x2b44,	// (0x00078d9a) bg_frame_shadow_pane_g6

0x2b4c,	// (0x00078da2) bg_frame_shadow_pane_g7

0xef67,	// (0x000851bd) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x00085ad0) bg_frame_shadow_pane_g

0xe75a,	// (0x000849b0) main_video_tele_dialer_pane

0xb356,	// (0x000815ac) aid_size_cell_video_keypad_ParamLimits

0xb356,	// (0x000815ac) aid_size_cell_video_keypad

0xb366,	// (0x000815bc) grid_video_dialer_keypad_pane_ParamLimits

0xb366,	// (0x000815bc) grid_video_dialer_keypad_pane

0xb39a,	// (0x000815f0) video_down_pane_cp_ParamLimits

0xb39a,	// (0x000815f0) video_down_pane_cp

0xb3c4,	// (0x0008161a) cell_video_dialer_keypad_pane_ParamLimits

0xb3c4,	// (0x0008161a) cell_video_dialer_keypad_pane

0x2b54,	// (0x00078daa) bg_button_pane_cp08_ParamLimits

0x2b54,	// (0x00078daa) bg_button_pane_cp08

0xb3d9,	// (0x0008162f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb3d9,	// (0x0008162f) cell_video_dialer_keypad_pane_g1

0xabc2,	// (0x00080e18) mup3_rocker2_pane_ParamLimits

0xabc2,	// (0x00080e18) mup3_rocker2_pane

0x228c,	// (0x000784e2) mup3_rocker2_pane_g1

0x9ab6,	// (0x0007fd0c) main_dialer2_pane

0xe75a,	// (0x000849b0) main_mp4_pane

0xb418,	// (0x0008166e) main_mp4_pane_g1_ParamLimits

0xb418,	// (0x0008166e) main_mp4_pane_g1

0xb426,	// (0x0008167c) main_mp4_pane_g2_ParamLimits

0xb426,	// (0x0008167c) main_mp4_pane_g2

0xb434,	// (0x0008168a) main_mp4_pane_g3_ParamLimits

0xb434,	// (0x0008168a) main_mp4_pane_g3

0xb479,	// (0x000816cf) main_mp4_pane_g4_ParamLimits

0xb479,	// (0x000816cf) main_mp4_pane_g4

0xb4a1,	// (0x000816f7) main_mp4_pane_g5_ParamLimits

0xb4a1,	// (0x000816f7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x00085af0) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x00085af0) main_mp4_pane_g

0xb4f1,	// (0x00081747) main_mp4_pane_t1_ParamLimits

0xb4f1,	// (0x00081747) main_mp4_pane_t1

0xb54d,	// (0x000817a3) main_mp4_pane_t2_ParamLimits

0xb54d,	// (0x000817a3) main_mp4_pane_t2

0x2b60,	// (0x00078db6) main_mp4_pane_t3_ParamLimits

0x2b60,	// (0x00078db6) main_mp4_pane_t3

0xb59f,	// (0x000817f5) main_mp4_pane_t4_ParamLimits

0xb59f,	// (0x000817f5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00085afd) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00085afd) main_mp4_pane_t

0xb5e3,	// (0x00081839) mp4_progress_pane_ParamLimits

0xb5e3,	// (0x00081839) mp4_progress_pane

0xb62d,	// (0x00081883) mp4_rocker_pane_ParamLimits

0xb62d,	// (0x00081883) mp4_rocker_pane

0x2b88,	// (0x00078dde) mp4_progress_pane_t1

0x2ba1,	// (0x00078df7) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00085b06) mp4_progress_pane_t

0x2bc2,	// (0x00078e18) mup_progress_pane_cp04

0x228c,	// (0x000784e2) mp4_rocker_pane_g1

0xb64d,	// (0x000818a3) aid_cell_size_keypad2_ParamLimits

0xb64d,	// (0x000818a3) aid_cell_size_keypad2

0xb65d,	// (0x000818b3) dialer2_ne_pane_ParamLimits

0xb65d,	// (0x000818b3) dialer2_ne_pane

0xb66b,	// (0x000818c1) grid_dialer2_keypad_pane_ParamLimits

0xb66b,	// (0x000818c1) grid_dialer2_keypad_pane

0x335c,	// (0x000795b2) bg_popup_call_pane_cp07_ParamLimits

0x335c,	// (0x000795b2) bg_popup_call_pane_cp07

0xb67b,	// (0x000818d1) dialer2_ne_pane_t1_ParamLimits

0xb67b,	// (0x000818d1) dialer2_ne_pane_t1

0xb6a0,	// (0x000818f6) cell_dialer2_keypad_pane_ParamLimits

0xb6a0,	// (0x000818f6) cell_dialer2_keypad_pane

0x2bea,	// (0x00078e40) bg_button_pane_pane_cp04_ParamLimits

0x2bea,	// (0x00078e40) bg_button_pane_pane_cp04

0xb6b5,	// (0x0008190b) cell_dialer2_keypad_pane_g1_ParamLimits

0xb6b5,	// (0x0008190b) cell_dialer2_keypad_pane_g1

0x7872,	// (0x0007dac8) aid_placing_vt_set_content_ParamLimits

0x7872,	// (0x0007dac8) aid_placing_vt_set_content

0x789e,	// (0x0007daf4) aid_placing_vt_set_title_ParamLimits

0x789e,	// (0x0007daf4) aid_placing_vt_set_title

0xe75a,	// (0x000849b0) main_image3_pane

0xb74f,	// (0x000819a5) area_side_right_pane_cp01_ParamLimits

0xb74f,	// (0x000819a5) area_side_right_pane_cp01

0xec07,	// (0x00084e5d) main_image3_pane_g1_ParamLimits

0xec07,	// (0x00084e5d) main_image3_pane_g1

0xb77c,	// (0x000819d2) main_image3_pane_g2_ParamLimits

0xb77c,	// (0x000819d2) main_image3_pane_g2

0xb795,	// (0x000819eb) main_image3_pane_g3_ParamLimits

0xb795,	// (0x000819eb) main_image3_pane_g3

0xb7ae,	// (0x00081a04) main_image3_pane_g4_ParamLimits

0xb7ae,	// (0x00081a04) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00085b15) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00085b15) main_image3_pane_g

0xb7c7,	// (0x00081a1d) main_image3_pane_t1_ParamLimits

0xb7c7,	// (0x00081a1d) main_image3_pane_t1

0xb7ec,	// (0x00081a42) main_image3_pane_t2_ParamLimits

0xb7ec,	// (0x00081a42) main_image3_pane_t2

0xb80b,	// (0x00081a61) main_image3_pane_t3_ParamLimits

0xb80b,	// (0x00081a61) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00085b1e) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00085b1e) main_image3_pane_t

0x368d,	// (0x000798e3) grid_sctrl_middle_pane_cp01_ParamLimits

0x368d,	// (0x000798e3) grid_sctrl_middle_pane_cp01

0xb86c,	// (0x00081ac2) cell_sctrl_middle_pane_cp01_ParamLimits

0xb86c,	// (0x00081ac2) cell_sctrl_middle_pane_cp01

0xb87d,	// (0x00081ad3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb87d,	// (0x00081ad3) cell_sctrl_middle_pane_cp01_g1

0xe75a,	// (0x000849b0) main_call4_pane

0xb88a,	// (0x00081ae0) aid_size_button_call4_ParamLimits

0xb88a,	// (0x00081ae0) aid_size_button_call4

0xb8ba,	// (0x00081b10) call4_windows_pane_ParamLimits

0xb8ba,	// (0x00081b10) call4_windows_pane

0xb8d4,	// (0x00081b2a) grid_call4_button_pane_ParamLimits

0xb8d4,	// (0x00081b2a) grid_call4_button_pane

0x2bf6,	// (0x00078e4c) call4_windows_conf_pane

0x2c0d,	// (0x00078e63) popup_call4_audio_first_window_ParamLimits

0x2c0d,	// (0x00078e63) popup_call4_audio_first_window

0x2c59,	// (0x00078eaf) popup_call4_audio_second_window_ParamLimits

0x2c59,	// (0x00078eaf) popup_call4_audio_second_window

0x2c6d,	// (0x00078ec3) popup_call4_audio_wait_window_ParamLimits

0x2c6d,	// (0x00078ec3) popup_call4_audio_wait_window

0xb8f8,	// (0x00081b4e) cell_call4_button_pane_ParamLimits

0xb8f8,	// (0x00081b4e) cell_call4_button_pane

0xb91d,	// (0x00081b73) bg_button_pane_cp09_ParamLimits

0xb91d,	// (0x00081b73) bg_button_pane_cp09

0xb929,	// (0x00081b7f) cell_call4_button_pane_g1_ParamLimits

0xb929,	// (0x00081b7f) cell_call4_button_pane_g1

0xb936,	// (0x00081b8c) cell_call4_button_pane_t1_ParamLimits

0xb936,	// (0x00081b8c) cell_call4_button_pane_t1

0x2cb5,	// (0x00078f0b) popup_call4_audio_conf_window_ParamLimits

0x2cb5,	// (0x00078f0b) popup_call4_audio_conf_window

0xabf5,	// (0x00080e4b) mup3_progress_pane_t1_ParamLimits

0xac14,	// (0x00080e6a) mup3_progress_pane_t2_ParamLimits

0x2593,	// (0x000787e9) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000859f2) mup3_progress_pane_t_ParamLimits

0x25b0,	// (0x00078806) mup_progress_pane_cp03_ParamLimits

0xb122,	// (0x00081378) mup3_control_keys_pane_g4_copy1

0xb611,	// (0x00081867) mp4_rocker2_pane_ParamLimits

0xb611,	// (0x00081867) mp4_rocker2_pane

0x2cd1,	// (0x00078f27) mp4_rocker2_pane_g1

0x2cc9,	// (0x00078f1f) mp4_rocker2_pane_g2

0xb948,	// (0x00081b9e) mp4_rocker2_pane_g3

0xb950,	// (0x00081ba6) mp4_rocker2_pane_g4

0xb958,	// (0x00081bae) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00085b27) mp4_rocker2_pane_g

0xe75a,	// (0x000849b0) main_camera4_pane

0xe75a,	// (0x000849b0) main_video4_pane

0xb376,	// (0x000815cc) main_video_tele_dialer_pane_t1_ParamLimits

0xb376,	// (0x000815cc) main_video_tele_dialer_pane_t1

0xb388,	// (0x000815de) main_video_tele_dialer_pane_t2_ParamLimits

0xb388,	// (0x000815de) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x00085ae1) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x00085ae1) main_video_tele_dialer_pane_t

0xb978,	// (0x00081bce) cam4_autofocus_pane_ParamLimits

0xb978,	// (0x00081bce) cam4_autofocus_pane

0xb992,	// (0x00081be8) cam4_image_uncrop_pane_ParamLimits

0xb992,	// (0x00081be8) cam4_image_uncrop_pane

0xb9a9,	// (0x00081bff) cam4_indicators_pane_ParamLimits

0xb9a9,	// (0x00081bff) cam4_indicators_pane

0xb9c5,	// (0x00081c1b) main_camera4_pane_g1_ParamLimits

0xb9c5,	// (0x00081c1b) main_camera4_pane_g1

0xb9d1,	// (0x00081c27) main_camera4_pane_g2_ParamLimits

0xb9d1,	// (0x00081c27) main_camera4_pane_g2

0xb9d1,	// (0x00081c27) main_camera4_pane_g3_ParamLimits

0xb9d1,	// (0x00081c27) main_camera4_pane_g3

0xb9dd,	// (0x00081c33) main_camera4_pane_g4_ParamLimits

0xb9dd,	// (0x00081c33) main_camera4_pane_g4

0xb9e9,	// (0x00081c3f) main_camera4_pane_g5_ParamLimits

0xb9e9,	// (0x00081c3f) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00085b32) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00085b32) main_camera4_pane_g

0xba03,	// (0x00081c59) main_camera4_pane_t1_ParamLimits

0xba03,	// (0x00081c59) main_camera4_pane_t1

0x24f8,	// (0x0007874e) bg_tb_trans_pane_cp06

0xba53,	// (0x00081ca9) cam4_indicators_pane_g1

0xba64,	// (0x00081cba) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00085b4d) cam4_indicators_pane_g

0xba82,	// (0x00081cd8) cam4_indicators_pane_t1

0xbaac,	// (0x00081d02) main_video4_pane_g1_ParamLimits

0xbaac,	// (0x00081d02) main_video4_pane_g1

0xbab8,	// (0x00081d0e) main_video4_pane_g2_ParamLimits

0xbab8,	// (0x00081d0e) main_video4_pane_g2

0xbac4,	// (0x00081d1a) main_video4_pane_g3_ParamLimits

0xbac4,	// (0x00081d1a) main_video4_pane_g3

0xbad0,	// (0x00081d26) main_video4_pane_g4_ParamLimits

0xbad0,	// (0x00081d26) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00085b54) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00085b54) main_video4_pane_g

0xbaf0,	// (0x00081d46) vid4_indicators_pane_ParamLimits

0xbaf0,	// (0x00081d46) vid4_indicators_pane

0xbb0f,	// (0x00081d65) video4_image_uncrop_cif_pane_ParamLimits

0xbb0f,	// (0x00081d65) video4_image_uncrop_cif_pane

0xbb1e,	// (0x00081d74) video4_image_uncrop_nhd_pane_ParamLimits

0xbb1e,	// (0x00081d74) video4_image_uncrop_nhd_pane

0xb992,	// (0x00081be8) video4_image_uncrop_vga_pane_ParamLimits

0xb992,	// (0x00081be8) video4_image_uncrop_vga_pane

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp07

0xbb35,	// (0x00081d8b) vid4_indicators_pane_g1

0xbb49,	// (0x00081d9f) vid4_indicators_pane_g2

0xbb5d,	// (0x00081db3) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00085b5f) vid4_indicators_pane_g

0xbb8c,	// (0x00081de2) vid4_indicators_pane_t1

0xbba3,	// (0x00081df9) cam4_autofocus_pane_g1

0xbbab,	// (0x00081e01) cam4_autofocus_pane_g2

0xbbb3,	// (0x00081e09) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00085b6a) cam4_autofocus_pane_g

0xbbbb,	// (0x00081e11) cam4_autofocus_pane_g3_copy1

0xb3a8,	// (0x000815fe) video_down_pane_cp_t1

0xb3b6,	// (0x0008160c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00085ae6) video_down_pane_cp_t

0x368d,	// (0x000798e3) popup_vitu2_window_ParamLimits

0x368d,	// (0x000798e3) popup_vitu2_window

0xbbc3,	// (0x00081e19) aid_size_cell2_itu2_ParamLimits

0xbbc3,	// (0x00081e19) aid_size_cell2_itu2

0xbbe5,	// (0x00081e3b) aid_size_cell_itu2_ParamLimits

0xbbe5,	// (0x00081e3b) aid_size_cell_itu2

0x335c,	// (0x000795b2) bg_popup_window_pane_cp09_ParamLimits

0x335c,	// (0x000795b2) bg_popup_window_pane_cp09

0xbc29,	// (0x00081e7f) field_vitu2_entry_pane_ParamLimits

0xbc29,	// (0x00081e7f) field_vitu2_entry_pane

0xbc49,	// (0x00081e9f) grid_vitu2_function_pane_ParamLimits

0xbc49,	// (0x00081e9f) grid_vitu2_function_pane

0xbc8d,	// (0x00081ee3) grid_vitu2_itu_pane_ParamLimits

0xbc8d,	// (0x00081ee3) grid_vitu2_itu_pane

0xbd09,	// (0x00081f5f) cell_vitu2_itu_pane_ParamLimits

0xbd09,	// (0x00081f5f) cell_vitu2_itu_pane

0xbd22,	// (0x00081f78) cell_vitu2_function_pane_ParamLimits

0xbd22,	// (0x00081f78) cell_vitu2_function_pane

0x2cd9,	// (0x00078f2f) bg_popup_call_pane_cp08_ParamLimits

0x2cd9,	// (0x00078f2f) bg_popup_call_pane_cp08

0x2cf0,	// (0x00078f46) field_vitu2_entry_pane_g1

0x2cfc,	// (0x00078f52) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00085b71) field_vitu2_entry_pane_g

0x5872,	// (0x0007bac8) field_vitu2_entry_pane_t1_ParamLimits

0x5872,	// (0x0007bac8) field_vitu2_entry_pane_t1

0x58a2,	// (0x0007baf8) field_vitu2_entry_pane_t2_ParamLimits

0x58a2,	// (0x0007baf8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00085b78) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00085b78) field_vitu2_entry_pane_t

0xbd63,	// (0x00081fb9) bg_button_pane_cp010_ParamLimits

0xbd63,	// (0x00081fb9) bg_button_pane_cp010

0xbd71,	// (0x00081fc7) cell_vitu2_itu_pane_g1

0xbd91,	// (0x00081fe7) cell_vitu2_itu_pane_t1_ParamLimits

0xbd91,	// (0x00081fe7) cell_vitu2_itu_pane_t1

0x58bf,	// (0x0007bb15) cell_vitu2_itu_pane_t2_ParamLimits

0x58bf,	// (0x0007bb15) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00085b82) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00085b82) cell_vitu2_itu_pane_t

0xf0bc,	// (0x00085312) bg_button_pane_cp011

0xbddd,	// (0x00082033) cell_vitu2_function_pane_g1

0xe75a,	// (0x000849b0) main_myfav_hc_pane

0xb84d,	// (0x00081aa3) popup_image3_note_pane_ParamLimits

0xb84d,	// (0x00081aa3) popup_image3_note_pane

0xb85b,	// (0x00081ab1) popup_image3_tool_bar_pane_ParamLimits

0xb85b,	// (0x00081ab1) popup_image3_tool_bar_pane

0x5935,	// (0x0007bb8b) cell_vitu2_itu_pane_t3_ParamLimits

0x5935,	// (0x0007bb8b) cell_vitu2_itu_pane_t3

0xe75a,	// (0x000849b0) bg_popup_trans_pane

0x2d1e,	// (0x00078f74) grid_image3_tool_bar_pane

0x2d28,	// (0x00078f7e) bg_popup_trans_pane_g1

0x026d,	// (0x000764c3) bg_popup_trans_pane_g2

0x2d30,	// (0x00078f86) bg_popup_trans_pane_g3

0x2d38,	// (0x00078f8e) bg_popup_trans_pane_g4

0x2d40,	// (0x00078f96) bg_popup_trans_pane_g5

0x2d48,	// (0x00078f9e) bg_popup_trans_pane_g6

0x2d50,	// (0x00078fa6) bg_popup_trans_pane_g7

0x2d58,	// (0x00078fae) bg_popup_trans_pane_g8

0x024d,	// (0x000764a3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00085b89) bg_popup_trans_pane_g

0x2d60,	// (0x00078fb6) cell_image3_tool_bar_pane_ParamLimits

0x2d60,	// (0x00078fb6) cell_image3_tool_bar_pane

0x228c,	// (0x000784e2) cell_image3_tool_bar_pane_g1

0xe75a,	// (0x000849b0) bg_popup_trans_pane_cp1

0x2d74,	// (0x00078fca) popup_image3_note_pane_t1

0x2d82,	// (0x00078fd8) popup_image3_note_pane_t2

0x2d90,	// (0x00078fe6) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00085b9c) popup_image3_note_pane_t

0x2d9e,	// (0x00078ff4) popup_image3_note_pane_t3_copy1

0xbdf1,	// (0x00082047) bg_myfav_hc_instruction_pane_ParamLimits

0xbdf1,	// (0x00082047) bg_myfav_hc_instruction_pane

0xbe09,	// (0x0008205f) cell_myfav_contact_pane_ParamLimits

0xbe09,	// (0x0008205f) cell_myfav_contact_pane

0xbe23,	// (0x00082079) cell_myfav_contact_pane_cp1_ParamLimits

0xbe23,	// (0x00082079) cell_myfav_contact_pane_cp1

0xbe3b,	// (0x00082091) cell_myfav_contact_pane_cp2_ParamLimits

0xbe3b,	// (0x00082091) cell_myfav_contact_pane_cp2

0xbe53,	// (0x000820a9) cell_myfav_contact_pane_cp3_ParamLimits

0xbe53,	// (0x000820a9) cell_myfav_contact_pane_cp3

0xbe6a,	// (0x000820c0) cell_myfav_contact_pane_cp4_ParamLimits

0xbe6a,	// (0x000820c0) cell_myfav_contact_pane_cp4

0xbe80,	// (0x000820d6) cell_myfav_contact_pane_cp5_ParamLimits

0xbe80,	// (0x000820d6) cell_myfav_contact_pane_cp5

0xbe94,	// (0x000820ea) cell_myfav_contact_pane_cp6_ParamLimits

0xbe94,	// (0x000820ea) cell_myfav_contact_pane_cp6

0xbea8,	// (0x000820fe) cell_myfav_contact_pane_cp7_ParamLimits

0xbea8,	// (0x000820fe) cell_myfav_contact_pane_cp7

0x2dac,	// (0x00079002) listscroll_gen_pane_cp05

0xbec0,	// (0x00082116) main_myfav_hc_pane_g1_ParamLimits

0xbec0,	// (0x00082116) main_myfav_hc_pane_g1

0xbed6,	// (0x0008212c) main_myfav_hc_pane_g2_ParamLimits

0xbed6,	// (0x0008212c) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00085ba3) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00085ba3) main_myfav_hc_pane_g

0xbf04,	// (0x0008215a) main_myfav_hc_pane_t1_ParamLimits

0xbf04,	// (0x0008215a) main_myfav_hc_pane_t1

0x2db5,	// (0x0007900b) main_myfav_hc_pane_t2_ParamLimits

0x2db5,	// (0x0007900b) main_myfav_hc_pane_t2

0x2dc7,	// (0x0007901d) main_myfav_hc_pane_t3_ParamLimits

0x2dc7,	// (0x0007901d) main_myfav_hc_pane_t3

0xbf1b,	// (0x00082171) main_myfav_hc_pane_t4_ParamLimits

0xbf1b,	// (0x00082171) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00085baa) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00085baa) main_myfav_hc_pane_t

0x228c,	// (0x000784e2) bg_myfav_hc_instruction_pane_g1

0x2dd9,	// (0x0007902f) cell_myfav_contact_pane_g1_ParamLimits

0x2dd9,	// (0x0007902f) cell_myfav_contact_pane_g1

0x2dd9,	// (0x0007902f) cell_myfav_contact_pane_g2_ParamLimits

0x2dd9,	// (0x0007902f) cell_myfav_contact_pane_g2

0x2de5,	// (0x0007903b) cell_myfav_contact_pane_g3_ParamLimits

0x2de5,	// (0x0007903b) cell_myfav_contact_pane_g3

0x257d,	// (0x000787d3) cell_myfav_contact_pane_g4_ParamLimits

0x257d,	// (0x000787d3) cell_myfav_contact_pane_g4

0x2df2,	// (0x00079048) cell_myfav_contact_pane_g5_ParamLimits

0x2df2,	// (0x00079048) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00085bb5) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00085bb5) cell_myfav_contact_pane_g

0xbeec,	// (0x00082142) main_myfav_hc_pane_g3_ParamLimits

0xbeec,	// (0x00082142) main_myfav_hc_pane_g3

0x695b,	// (0x0007cbb1) popup_adpt_find_window

0xbf45,	// (0x0008219b) afind_page_pane_ParamLimits

0xbf45,	// (0x0008219b) afind_page_pane

0xbf52,	// (0x000821a8) aid_size_cell_afind_ParamLimits

0xbf52,	// (0x000821a8) aid_size_cell_afind

0xbf6c,	// (0x000821c2) bg_popup_sub_pane_cp09_ParamLimits

0xbf6c,	// (0x000821c2) bg_popup_sub_pane_cp09

0xbf79,	// (0x000821cf) find_pane_cp01_ParamLimits

0xbf79,	// (0x000821cf) find_pane_cp01

0x2dfe,	// (0x00079054) grid_afind_control_pane_ParamLimits

0x2dfe,	// (0x00079054) grid_afind_control_pane

0xbf86,	// (0x000821dc) grid_afind_pane_ParamLimits

0xbf86,	// (0x000821dc) grid_afind_pane

0xbfa2,	// (0x000821f8) cell_afind_pane_ParamLimits

0xbfa2,	// (0x000821f8) cell_afind_pane

0x228c,	// (0x000784e2) afind_page_pane_g1

0xbfea,	// (0x00082240) afind_page_pane_g2

0xbff3,	// (0x00082249) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00085bc0) afind_page_pane_g

0xbffc,	// (0x00082252) afind_page_pane_t1

0x2e12,	// (0x00079068) cell_afind_grid_control_pane_ParamLimits

0x2e12,	// (0x00079068) cell_afind_grid_control_pane

0x2bea,	// (0x00078e40) bg_button_pane_cp69_ParamLimits

0x2bea,	// (0x00078e40) bg_button_pane_cp69

0xc01c,	// (0x00082272) cell_afind_pane_g1_ParamLimits

0xc01c,	// (0x00082272) cell_afind_pane_g1

0xc029,	// (0x0008227f) cell_afind_pane_t1_ParamLimits

0xc029,	// (0x0008227f) cell_afind_pane_t1

0x0066,	// (0x000762bc) bg_button_pane_cp72

0x2e21,	// (0x00079077) cell_afind_grid_control_pane_g1

0x9634,	// (0x0007f88a) aid_image_placing_area_ParamLimits

0x9634,	// (0x0007f88a) aid_image_placing_area

0x28a6,	// (0x00078afc) field_vitu_entry_pane_g1_ParamLimits

0x28a6,	// (0x00078afc) field_vitu_entry_pane_g1

0x28b2,	// (0x00078b08) field_vitu_entry_pane_g2_ParamLimits

0x28b2,	// (0x00078b08) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00085a71) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00085a71) field_vitu_entry_pane_g

0xb1aa,	// (0x00081400) cell_vitu_itu_pane_g1_ParamLimits

0xb1ec,	// (0x00081442) cell_vitu_itu_pane_t3_ParamLimits

0xb1ec,	// (0x00081442) cell_vitu_itu_pane_t3

0x2b88,	// (0x00078dde) mp4_progress_pane_t1_ParamLimits

0x2ba1,	// (0x00078df7) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00085b06) mp4_progress_pane_t_ParamLimits

0x2bc2,	// (0x00078e18) mup_progress_pane_cp04_ParamLimits

0xbf2f,	// (0x00082185) main_myfav_hc_pane_t5_ParamLimits

0xbf2f,	// (0x00082185) main_myfav_hc_pane_t5

0x556a,	// (0x0007b7c0) aid_zoom_text_primary

0x695b,	// (0x0007cbb1) popup_adpt_find_window_ParamLimits

0xf0bc,	// (0x00085312) main_cam_set_pane

0xb9b7,	// (0x00081c0d) cam4_zoom_pane_ParamLimits

0xb9b7,	// (0x00081c0d) cam4_zoom_pane

0xc03b,	// (0x00082291) main_cam_set_pane_g1_ParamLimits

0xc03b,	// (0x00082291) main_cam_set_pane_g1

0xc049,	// (0x0008229f) main_cam_set_pane_g2_ParamLimits

0xc049,	// (0x0008229f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00085bc7) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00085bc7) main_cam_set_pane_g

0xc055,	// (0x000822ab) main_cam_set_pane_t1_ParamLimits

0xc055,	// (0x000822ab) main_cam_set_pane_t1

0xc071,	// (0x000822c7) main_cset_listscroll_pane_ParamLimits

0xc071,	// (0x000822c7) main_cset_listscroll_pane

0xc09c,	// (0x000822f2) main_cset_slider_pane_ParamLimits

0xc09c,	// (0x000822f2) main_cset_slider_pane

0x2e32,	// (0x00079088) main_cset_list_pane_ParamLimits

0x2e32,	// (0x00079088) main_cset_list_pane

0x2e42,	// (0x00079098) scroll_pane_cp028

0xc0bb,	// (0x00082311) aid_area_touch_slider

0xc0d7,	// (0x0008232d) cset_slider_pane

0xc101,	// (0x00082357) main_cset_slider_pane_g1

0xc116,	// (0x0008236c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00085bcc) main_cset_slider_pane_g

0x2e7b,	// (0x000790d1) main_cset_slider_pane_t1

0xc1d8,	// (0x0008242e) main_cset_slider_pane_t2

0xc1f2,	// (0x00082448) main_cset_slider_pane_t3

0xc20c,	// (0x00082462) main_cset_slider_pane_t4

0xc226,	// (0x0008247c) main_cset_slider_pane_t5

0xc244,	// (0x0008249a) main_cset_slider_pane_t6

0xc25b,	// (0x000824b1) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00085bf1) main_cset_slider_pane_t

0xc367,	// (0x000825bd) cset_list_set_pane_ParamLimits

0xc367,	// (0x000825bd) cset_list_set_pane

0xc37d,	// (0x000825d3) aid_position_infowindow_above

0xc385,	// (0x000825db) aid_position_infowindow_below

0xc38d,	// (0x000825e3) cset_list_set_pane_g1_ParamLimits

0xc38d,	// (0x000825e3) cset_list_set_pane_g1

0x5987,	// (0x0007bbdd) cset_list_set_pane_g3_ParamLimits

0x5987,	// (0x0007bbdd) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00085c10) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00085c10) cset_list_set_pane_g

0x5996,	// (0x0007bbec) cset_list_set_pane_t1_ParamLimits

0x5996,	// (0x0007bbec) cset_list_set_pane_t1

0xf0bc,	// (0x00085312) list_highlight_pane_cp021_ParamLimits

0xf0bc,	// (0x00085312) list_highlight_pane_cp021

0x0bb6,	// (0x00076e0c) cset_slider_pane_g1

0x0bc8,	// (0x00076e1e) cset_slider_pane_g2

0x0bbf,	// (0x00076e15) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00085c15) cset_slider_pane_g

0xc399,	// (0x000825ef) aid_area_touch_cam4_zoom

0xc3a1,	// (0x000825f7) cam4_zoom_cont_pane

0xc3a9,	// (0x000825ff) cam4_zoom_pane_g1

0xc3b1,	// (0x00082607) cam4_zoom_pane_g2

0xc3b9,	// (0x0008260f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00085c1c) cam4_zoom_pane_g

0x3672,	// (0x000798c8) cam4_zoom_cont_pane_g1

0x367b,	// (0x000798d1) cam4_zoom_cont_pane_g2

0x3684,	// (0x000798da) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00085c23) cam4_zoom_cont_pane_g

0xb8a4,	// (0x00081afa) call4_image_pane_ParamLimits

0xb8a4,	// (0x00081afa) call4_image_pane

0x2bf6,	// (0x00078e4c) call4_windows_conf_pane_ParamLimits

0x2c37,	// (0x00078e8d) popup_call4_audio_in_window_ParamLimits

0x2c37,	// (0x00078e8d) popup_call4_audio_in_window

0xe75a,	// (0x000849b0) bg_popup_call2_act_pane_cp02

0x2cad,	// (0x00078f03) call4_list_conf_pane

0x228c,	// (0x000784e2) call4_image_pane_g1

0x228c,	// (0x000784e2) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00085932) call4_image_pane_g

0x2f1b,	// (0x00079171) list_single_graphic_popup_conf4_pane_ParamLimits

0x2f1b,	// (0x00079171) list_single_graphic_popup_conf4_pane

0xe75a,	// (0x000849b0) list_highlight_pane_cp022

0x2f2e,	// (0x00079184) list_single_graphic_popup_conf4_pane_g1

0x0787,	// (0x000769dd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00085c2a) list_single_graphic_popup_conf4_pane_g

0x2f36,	// (0x0007918c) list_single_graphic_popup_conf4_pane_t1

0x7a02,	// (0x0007dc58) popup_vtel_slider_window_ParamLimits

0x7a02,	// (0x0007dc58) popup_vtel_slider_window

0x2bd8,	// (0x00078e2e) dialer2_ne_pane_t2_ParamLimits

0x2bd8,	// (0x00078e2e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00085b0b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00085b0b) dialer2_ne_pane_t

0xf0bc,	// (0x00085312) bg_popup_sub_pane_cp010_ParamLimits

0xf0bc,	// (0x00085312) bg_popup_sub_pane_cp010

0xc3c1,	// (0x00082617) popup_vtel_slider_window_g1_ParamLimits

0xc3c1,	// (0x00082617) popup_vtel_slider_window_g1

0xc3cd,	// (0x00082623) popup_vtel_slider_window_g2_ParamLimits

0xc3cd,	// (0x00082623) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00085c2f) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00085c2f) popup_vtel_slider_window_g

0xc415,	// (0x0008266b) vtel_slider_pane_ParamLimits

0xc415,	// (0x0008266b) vtel_slider_pane

0xc424,	// (0x0008267a) vtel_slider_pane_g1_ParamLimits

0xc424,	// (0x0008267a) vtel_slider_pane_g1

0xc431,	// (0x00082687) vtel_slider_pane_g2_ParamLimits

0xc431,	// (0x00082687) vtel_slider_pane_g2

0xc43e,	// (0x00082694) vtel_slider_pane_g3_ParamLimits

0xc43e,	// (0x00082694) vtel_slider_pane_g3

0xc424,	// (0x0008267a) vtel_slider_pane_g4_ParamLimits

0xc424,	// (0x0008267a) vtel_slider_pane_g4

0xc44b,	// (0x000826a1) vtel_slider_pane_g5_ParamLimits

0xc44b,	// (0x000826a1) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00085c38) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00085c38) vtel_slider_pane_g

0xf0bc,	// (0x00085312) main_gallery2_pane

0xbc0b,	// (0x00081e61) aid_size_row_itut2_dropdow_list_ParamLimits

0xbc0b,	// (0x00081e61) aid_size_row_itut2_dropdow_list

0xbc6b,	// (0x00081ec1) grid_vitu2_function_top_pane_ParamLimits

0xbc6b,	// (0x00081ec1) grid_vitu2_function_top_pane

0xbcc5,	// (0x00081f1b) popup_vitu2_dropdown_list_window_ParamLimits

0xbcc5,	// (0x00081f1b) popup_vitu2_dropdown_list_window

0xbce5,	// (0x00081f3b) popup_vitu2_match_list_window

0xc458,	// (0x000826ae) cell_vitu2_function_top_pane_ParamLimits

0xc458,	// (0x000826ae) cell_vitu2_function_top_pane

0xc472,	// (0x000826c8) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc472,	// (0x000826c8) cell_vitu2_function_top_pane_cp01

0xc48e,	// (0x000826e4) cell_vitu2_function_top_wide_pane_ParamLimits

0xc48e,	// (0x000826e4) cell_vitu2_function_top_wide_pane

0xf0bc,	// (0x00085312) bg_button_pane_cp012

0xc4aa,	// (0x00082700) cell_vitu2_function_top_pane_g1

0xc4be,	// (0x00082714) bg_button_pane_cp013_ParamLimits

0xc4be,	// (0x00082714) bg_button_pane_cp013

0xc4da,	// (0x00082730) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc4da,	// (0x00082730) cell_vitu2_function_top_wide_pane_g1

0x368d,	// (0x000798e3) bg_popup_sub_pane_cp20

0xc4f2,	// (0x00082748) list_vitu2_match_list_pane

0x2d28,	// (0x00078f7e) bg_popup_sub_pane_cp20_g1

0x2d30,	// (0x00078f86) bg_popup_sub_pane_cp20_g2

0x026d,	// (0x000764c3) bg_popup_sub_pane_cp20_g3

0x2d38,	// (0x00078f8e) bg_popup_sub_pane_cp20_g4

0x024d,	// (0x000764a3) bg_popup_sub_pane_cp20_g5

0x2f4c,	// (0x000791a2) bg_popup_sub_pane_cp20_g6

0x2d48,	// (0x00078f9e) bg_popup_sub_pane_cp20_g7

0x2d50,	// (0x00078fa6) bg_popup_sub_pane_cp20_g8

0x2d58,	// (0x00078fae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00085c43) bg_popup_sub_pane_cp20_g

0xc50a,	// (0x00082760) list_vitu2_match_list_item_pane_ParamLimits

0xc50a,	// (0x00082760) list_vitu2_match_list_item_pane

0xc51c,	// (0x00082772) list_vitu2_match_list_item_pane_t1

0xe75a,	// (0x000849b0) bg_popup_sub_pane_cp21

0x06af,	// (0x00076905) grid_vitu2_dropdown_list_pane

0xc536,	// (0x0008278c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc536,	// (0x0008278c) cell_vitu2_dropdown_list_char_pane

0xc557,	// (0x000827ad) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc557,	// (0x000827ad) cell_vitu2_dropdown_list_ctrl_pane

0x2f66,	// (0x000791bc) cell_vitu2_dropdown_list_char_pane_g1

0x2f5d,	// (0x000791b3) cell_vitu2_dropdown_list_char_pane_g2

0x2f54,	// (0x000791aa) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00085c60) cell_vitu2_dropdown_list_char_pane_g

0xc583,	// (0x000827d9) cell_vitu2_dropdown_list_char_pane_t1

0xc591,	// (0x000827e7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc591,	// (0x000827e7) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc5a1,	// (0x000827f7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc5a1,	// (0x000827f7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc5b2,	// (0x00082808) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc5b2,	// (0x00082808) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc5c2,	// (0x00082818) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc5c2,	// (0x00082818) cell_vitu2_dropdown_list_ctrl_pane_g4

0x24f8,	// (0x0007874e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x24f8,	// (0x0007874e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00085c67) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00085c67) cell_vitu2_dropdown_list_ctrl_pane_g

0xc5de,	// (0x00082834) aid_size_cell_gallery2_ParamLimits

0xc5de,	// (0x00082834) aid_size_cell_gallery2

0xc5f8,	// (0x0008284e) grid_gallery2_pane_ParamLimits

0xc5f8,	// (0x0008284e) grid_gallery2_pane

0xb033,	// (0x00081289) scroll_pane_cp029_ParamLimits

0xb033,	// (0x00081289) scroll_pane_cp029

0xc60f,	// (0x00082865) cell_gallery2_pane_ParamLimits

0xc60f,	// (0x00082865) cell_gallery2_pane

0x2f6f,	// (0x000791c5) cell_gallery2_pane_g2

0x40aa,	// (0x0007a300) cell_gallery2_pane_g3

0x2f77,	// (0x000791cd) cell_gallery2_pane_g4

0x2f7f,	// (0x000791d5) cell_gallery2_pane_g5

0xf073,	// (0x000852c9) grid_highlight_pane_cp10

0xbce5,	// (0x00081f3b) popup_vitu2_match_list_window_ParamLimits

0xbcf9,	// (0x00081f4f) popup_vitu2_query_window_ParamLimits

0xbcf9,	// (0x00081f4f) popup_vitu2_query_window

0xe75a,	// (0x000849b0) bg_vitu2_candi_button_pane

0x2f66,	// (0x000791bc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2f5d,	// (0x000791b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2f54,	// (0x000791aa) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x59f5,	// (0x0007bc4b) bg_button_pane_cp015

0xc661,	// (0x000828b7) bg_button_pane_cp016

0xc674,	// (0x000828ca) bg_button_pane_cp017

0x1e78,	// (0x000780ce) bg_popup_sub_pane_cp22

0x2f87,	// (0x000791dd) popup_vitu2_query_window_g1

0x5a28,	// (0x0007bc7e) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00085c72) popup_vitu2_query_window_g

0x5a45,	// (0x0007bc9b) popup_vitu2_query_window_t1_ParamLimits

0x5a45,	// (0x0007bc9b) popup_vitu2_query_window_t1

0x5a78,	// (0x0007bcce) popup_vitu2_query_window_t2_ParamLimits

0x5a78,	// (0x0007bcce) popup_vitu2_query_window_t2

0x5a8a,	// (0x0007bce0) popup_vitu2_query_window_t3_ParamLimits

0x5a8a,	// (0x0007bce0) popup_vitu2_query_window_t3

0xc698,	// (0x000828ee) popup_vitu2_query_window_t4_ParamLimits

0xc698,	// (0x000828ee) popup_vitu2_query_window_t4

0xc6b9,	// (0x0008290f) popup_vitu2_query_window_t5_ParamLimits

0xc6b9,	// (0x0008290f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00085c79) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00085c79) popup_vitu2_query_window_t

0x2e2a,	// (0x00079080) main_cset_text_pane

0xc0bb,	// (0x00082311) aid_area_touch_slider_ParamLimits

0xc0d7,	// (0x0008232d) cset_slider_pane_ParamLimits

0xc101,	// (0x00082357) main_cset_slider_pane_g1_ParamLimits

0xc116,	// (0x0008236c) main_cset_slider_pane_g2_ParamLimits

0x2e4b,	// (0x000790a1) main_cset_slider_pane_g3_ParamLimits

0x2e4b,	// (0x000790a1) main_cset_slider_pane_g3

0xc12b,	// (0x00082381) main_cset_slider_pane_g4_ParamLimits

0xc12b,	// (0x00082381) main_cset_slider_pane_g4

0xc13a,	// (0x00082390) main_cset_slider_pane_g5_ParamLimits

0xc13a,	// (0x00082390) main_cset_slider_pane_g5

0xc148,	// (0x0008239e) main_cset_slider_pane_g6_ParamLimits

0xc148,	// (0x0008239e) main_cset_slider_pane_g6

0xf976,	// (0x00085bcc) main_cset_slider_pane_g_ParamLimits

0x2e7b,	// (0x000790d1) main_cset_slider_pane_t1_ParamLimits

0xc1d8,	// (0x0008242e) main_cset_slider_pane_t2_ParamLimits

0xc1f2,	// (0x00082448) main_cset_slider_pane_t3_ParamLimits

0xc20c,	// (0x00082462) main_cset_slider_pane_t4_ParamLimits

0xc226,	// (0x0008247c) main_cset_slider_pane_t5_ParamLimits

0xc244,	// (0x0008249a) main_cset_slider_pane_t6_ParamLimits

0xc25b,	// (0x000824b1) main_cset_slider_pane_t7_ParamLimits

0xc289,	// (0x000824df) main_cset_slider_pane_t8_ParamLimits

0xc289,	// (0x000824df) main_cset_slider_pane_t8

0xc2b1,	// (0x00082507) main_cset_slider_pane_t9_ParamLimits

0xc2b1,	// (0x00082507) main_cset_slider_pane_t9

0xc2d9,	// (0x0008252f) main_cset_slider_pane_t10_ParamLimits

0xc2d9,	// (0x0008252f) main_cset_slider_pane_t10

0xc301,	// (0x00082557) main_cset_slider_pane_t11_ParamLimits

0xc301,	// (0x00082557) main_cset_slider_pane_t11

0xc32b,	// (0x00082581) main_cset_slider_pane_t12_ParamLimits

0xc32b,	// (0x00082581) main_cset_slider_pane_t12

0xc348,	// (0x0008259e) main_cset_slider_pane_t13_ParamLimits

0xc348,	// (0x0008259e) main_cset_slider_pane_t13

0xf99b,	// (0x00085bf1) main_cset_slider_pane_t_ParamLimits

0xe75a,	// (0x000849b0) bg_popup_sub_pane_cp011

0x2f93,	// (0x000791e9) main_cset_text_pane_g1

0x2f9b,	// (0x000791f1) main_cset_text_pane_t1

0x2fa9,	// (0x000791ff) main_cset_text_pane_t2

0x2fb7,	// (0x0007920d) main_cset_text_pane_t3

0x2fc5,	// (0x0007921b) main_cset_text_pane_t4

0x2fd3,	// (0x00079229) main_cset_text_pane_t5

0x2fe1,	// (0x00079237) main_cset_text_pane_t6

0x2fef,	// (0x00079245) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00085c88) main_cset_text_pane_t

0xe75a,	// (0x000849b0) main_cam4_burst_pane

0xe75a,	// (0x000849b0) main_cam5_pane

0xc00a,	// (0x00082260) bg_button_pane_cp019

0xc013,	// (0x00082269) bg_button_pane_cp020

0x2e57,	// (0x000790ad) main_cset_slider_pane_g7_ParamLimits

0x2e57,	// (0x000790ad) main_cset_slider_pane_g7

0x2e63,	// (0x000790b9) main_cset_slider_pane_g8_ParamLimits

0x2e63,	// (0x000790b9) main_cset_slider_pane_g8

0xc15c,	// (0x000823b2) main_cset_slider_pane_g9_ParamLimits

0xc15c,	// (0x000823b2) main_cset_slider_pane_g9

0xc168,	// (0x000823be) main_cset_slider_pane_g10_ParamLimits

0xc168,	// (0x000823be) main_cset_slider_pane_g10

0xc174,	// (0x000823ca) main_cset_slider_pane_g11_ParamLimits

0xc174,	// (0x000823ca) main_cset_slider_pane_g11

0xc180,	// (0x000823d6) main_cset_slider_pane_g12_ParamLimits

0xc180,	// (0x000823d6) main_cset_slider_pane_g12

0xc18c,	// (0x000823e2) main_cset_slider_pane_g13_ParamLimits

0xc18c,	// (0x000823e2) main_cset_slider_pane_g13

0xc198,	// (0x000823ee) main_cset_slider_pane_g14_ParamLimits

0xc198,	// (0x000823ee) main_cset_slider_pane_g14

0xc1a4,	// (0x000823fa) main_cset_slider_pane_g15_ParamLimits

0xc1a4,	// (0x000823fa) main_cset_slider_pane_g15

0x2ea9,	// (0x000790ff) main_cset_slider_pane_t14_ParamLimits

0x2ea9,	// (0x000790ff) main_cset_slider_pane_t14

0x2ee2,	// (0x00079138) main_cset_slider_pane_t15_ParamLimits

0x2ee2,	// (0x00079138) main_cset_slider_pane_t15

0xc6da,	// (0x00082930) aid_cam4_burst_size_cell_ParamLimits

0xc6da,	// (0x00082930) aid_cam4_burst_size_cell

0xc6f6,	// (0x0008294c) grid_cam4_burst_pane_ParamLimits

0xc6f6,	// (0x0008294c) grid_cam4_burst_pane

0xc726,	// (0x0008297c) linegrid_cam4_burst_pane_ParamLimits

0xc726,	// (0x0008297c) linegrid_cam4_burst_pane

0xc746,	// (0x0008299c) scroll_pane_cp30_ParamLimits

0xc746,	// (0x0008299c) scroll_pane_cp30

0xc752,	// (0x000829a8) cell_cam4_burst_pane_ParamLimits

0xc752,	// (0x000829a8) cell_cam4_burst_pane

0x3009,	// (0x0007925f) linegrid_cam4_burst_pane_g1_ParamLimits

0x3009,	// (0x0007925f) linegrid_cam4_burst_pane_g1

0xc78e,	// (0x000829e4) linegrid_cam4_burst_pane_g2_ParamLimits

0xc78e,	// (0x000829e4) linegrid_cam4_burst_pane_g2

0x3016,	// (0x0007926c) linegrid_cam4_burst_pane_g3_ParamLimits

0x3016,	// (0x0007926c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00085c97) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00085c97) linegrid_cam4_burst_pane_g

0xc79f,	// (0x000829f5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc79f,	// (0x000829f5) linegrid_cam4_burst_pane_g3_copy1

0x3023,	// (0x00079279) linegrid_cam4_burst_pane_g4_ParamLimits

0x3023,	// (0x00079279) linegrid_cam4_burst_pane_g4

0xc7b9,	// (0x00082a0f) linegrid_cam4_burst_pane_g5_ParamLimits

0xc7b9,	// (0x00082a0f) linegrid_cam4_burst_pane_g5

0xc7ca,	// (0x00082a20) linegrid_cam4_burst_pane_g6_ParamLimits

0xc7ca,	// (0x00082a20) linegrid_cam4_burst_pane_g6

0x3030,	// (0x00079286) linegrid_cam4_burst_pane_g7_ParamLimits

0x3030,	// (0x00079286) linegrid_cam4_burst_pane_g7

0xc7db,	// (0x00082a31) cell_cam4_burst_pane_g1

0x3049,	// (0x0007929f) main_cam5_pane_t1_ParamLimits

0x3049,	// (0x0007929f) main_cam5_pane_t1

0x305b,	// (0x000792b1) main_cam5_pane_t2_ParamLimits

0x305b,	// (0x000792b1) main_cam5_pane_t2

0x306d,	// (0x000792c3) main_cam5_pane_t3_ParamLimits

0x306d,	// (0x000792c3) main_cam5_pane_t3

0x307f,	// (0x000792d5) main_cam5_pane_t4_ParamLimits

0x307f,	// (0x000792d5) main_cam5_pane_t4

0x3097,	// (0x000792ed) main_cam5_pane_t5_ParamLimits

0x3097,	// (0x000792ed) main_cam5_pane_t5

0x30ab,	// (0x00079301) main_cam5_pane_t6_ParamLimits

0x30ab,	// (0x00079301) main_cam5_pane_t6

0x30bf,	// (0x00079315) main_cam5_pane_t7_ParamLimits

0x30bf,	// (0x00079315) main_cam5_pane_t7

0x30d1,	// (0x00079327) main_cam5_pane_t8_ParamLimits

0x30d1,	// (0x00079327) main_cam5_pane_t8

0x30ed,	// (0x00079343) main_cam5_pane_t9_ParamLimits

0x30ed,	// (0x00079343) main_cam5_pane_t9

0x30ff,	// (0x00079355) main_cam5_pane_t10_ParamLimits

0x30ff,	// (0x00079355) main_cam5_pane_t10

0x3111,	// (0x00079367) main_cam5_pane_t11_ParamLimits

0x3111,	// (0x00079367) main_cam5_pane_t11

0x3123,	// (0x00079379) main_cam5_pane_t12_ParamLimits

0x3123,	// (0x00079379) main_cam5_pane_t12

0x3138,	// (0x0007938e) main_cam5_pane_t13_ParamLimits

0x3138,	// (0x0007938e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00085ca3) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00085ca3) main_cam5_pane_t

0x6a11,	// (0x0007cc67) popup_scut_keymap_window_ParamLimits

0x6a11,	// (0x0007cc67) popup_scut_keymap_window

0xc7ee,	// (0x00082a44) aid_size_cell_brow_shortcut

0xf073,	// (0x000852c9) bg_popup_window_pane_cp010

0xc7fa,	// (0x00082a50) grid_scut_pane

0xc806,	// (0x00082a5c) cell_scut_pane_ParamLimits

0xc806,	// (0x00082a5c) cell_scut_pane

0xc81d,	// (0x00082a73) cell_scut_pane_g1

0x3155,	// (0x000793ab) cell_scut_pane_t1

0x3164,	// (0x000793ba) cell_scut_pane_t2

0xc826,	// (0x00082a7c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00085cbe) cell_scut_pane_t

0xa814,	// (0x00080a6a) main_mup3_pane_g8_ParamLimits

0xa814,	// (0x00080a6a) main_mup3_pane_g8

0xbc19,	// (0x00081e6f) area_vitu2_query_pane_ParamLimits

0xbc19,	// (0x00081e6f) area_vitu2_query_pane

0x5a07,	// (0x0007bc5d) input_focus_pane_cp08

0x3173,	// (0x000793c9) area_vitu2_query_pane_g1

0x5b08,	// (0x0007bd5e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00085cc5) area_vitu2_query_pane_g

0xc834,	// (0x00082a8a) area_vitu2_query_pane_t1_ParamLimits

0xc834,	// (0x00082a8a) area_vitu2_query_pane_t1

0xc848,	// (0x00082a9e) area_vitu2_query_pane_t2_ParamLimits

0xc848,	// (0x00082a9e) area_vitu2_query_pane_t2

0x5b19,	// (0x0007bd6f) area_vitu2_query_pane_t3_ParamLimits

0x5b19,	// (0x0007bd6f) area_vitu2_query_pane_t3

0x5b41,	// (0x0007bd97) area_vitu2_query_pane_t4_ParamLimits

0x5b41,	// (0x0007bd97) area_vitu2_query_pane_t4

0x5b69,	// (0x0007bdbf) area_vitu2_query_pane_t5_ParamLimits

0x5b69,	// (0x0007bdbf) area_vitu2_query_pane_t5

0x5b91,	// (0x0007bde7) area_vitu2_query_pane_t6_ParamLimits

0x5b91,	// (0x0007bde7) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00085cca) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00085cca) area_vitu2_query_pane_t

0xc85c,	// (0x00082ab2) bg_button_pane_cp018

0xc86a,	// (0x00082ac0) bg_button_pane_cp021

0x5bdd,	// (0x0007be33) bg_button_pane_cp022

0x5bee,	// (0x0007be44) input_focus_pane_cp09

0x08c3,	// (0x00076b19) aid_size_touch_mv_arrow_left

0x08ec,	// (0x00076b42) aid_size_touch_mv_arrow_right

0xc1bc,	// (0x00082412) main_cset_slider_pane_g16_ParamLimits

0xc1bc,	// (0x00082412) main_cset_slider_pane_g16

0xc1ca,	// (0x00082420) main_cset_slider_pane_g17_ParamLimits

0xc1ca,	// (0x00082420) main_cset_slider_pane_g17

0xc7db,	// (0x00082a31) cell_cam4_burst_pane_g1_ParamLimits

0xe75a,	// (0x000849b0) compa_mode_pane

0xc3d9,	// (0x0008262f) popup_vtel_slider_window_g3_ParamLimits

0xc3d9,	// (0x0008262f) popup_vtel_slider_window_g3

0xc3ed,	// (0x00082643) popup_vtel_slider_window_g4_ParamLimits

0xc3ed,	// (0x00082643) popup_vtel_slider_window_g4

0xc401,	// (0x00082657) popup_vtel_slider_window_t1_ParamLimits

0xc401,	// (0x00082657) popup_vtel_slider_window_t1

0xe75a,	// (0x000849b0) main_cl_pane

0x9b46,	// (0x0007fd9c) popup_imed_adjust2_window_ParamLimits

0x1e78,	// (0x000780ce) bg_tb_trans_pane_cp05_ParamLimits

0x27db,	// (0x00078a31) popup_imed_adjust2_window_g1_ParamLimits

0x27ea,	// (0x00078a40) popup_imed_adjust2_window_g2_ParamLimits

0x27ea,	// (0x00078a40) popup_imed_adjust2_window_g2

0x27f6,	// (0x00078a4c) popup_imed_adjust2_window_g3_ParamLimits

0x27f6,	// (0x00078a4c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00085a35) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00085a35) popup_imed_adjust2_window_g

0x2802,	// (0x00078a58) popup_imed_adjust2_window_t1_ParamLimits

0x281a,	// (0x00078a70) slider_imed_adjust_pane_ParamLimits

0x282e,	// (0x00078a84) slider_imed_adjust_pane_g1_ParamLimits

0x283e,	// (0x00078a94) slider_imed_adjust_pane_g2_ParamLimits

0x284e,	// (0x00078aa4) slider_imed_adjust_pane_g3_ParamLimits

0x285f,	// (0x00078ab5) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00085a3c) slider_imed_adjust_pane_g_ParamLimits

0xb960,	// (0x00081bb6) aid_touch_area_cam4_ParamLimits

0xb960,	// (0x00081bb6) aid_touch_area_cam4

0xb970,	// (0x00081bc6) battery_pane_cp01

0xb9f7,	// (0x00081c4d) main_camera4_pane_g6_ParamLimits

0xb9f7,	// (0x00081c4d) main_camera4_pane_g6

0xba15,	// (0x00081c6b) main_camera4_pane_t2_ParamLimits

0xba15,	// (0x00081c6b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00085b3f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00085b3f) main_camera4_pane_t

0xba9c,	// (0x00081cf2) aid_touch_area_vid4_ParamLimits

0xba9c,	// (0x00081cf2) aid_touch_area_vid4

0xbadc,	// (0x00081d32) main_video4_pane_g5_ParamLimits

0xbadc,	// (0x00081d32) main_video4_pane_g5

0xbb00,	// (0x00081d56) vid4_progress_pane_ParamLimits

0xbb00,	// (0x00081d56) vid4_progress_pane

0x2e6f,	// (0x000790c5) main_cset_slider_pane_g18_ParamLimits

0x2e6f,	// (0x000790c5) main_cset_slider_pane_g18

0x303d,	// (0x00079293) cell_cam4_burst_pane_g2_ParamLimits

0x303d,	// (0x00079293) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00085c9e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00085c9e) cell_cam4_burst_pane_g

0xc876,	// (0x00082acc) bg_cl_pane_ParamLimits

0xc876,	// (0x00082acc) bg_cl_pane

0xc882,	// (0x00082ad8) cl_header_pane_ParamLimits

0xc882,	// (0x00082ad8) cl_header_pane

0xc88e,	// (0x00082ae4) cl_listscroll_pane_ParamLimits

0xc88e,	// (0x00082ae4) cl_listscroll_pane

0x317f,	// (0x000793d5) bg_cl_pane_g1

0x3187,	// (0x000793dd) bg_cl_pane_g2

0x318f,	// (0x000793e5) bg_cl_pane_g3

0x3197,	// (0x000793ed) bg_cl_pane_g4

0x319f,	// (0x000793f5) bg_cl_pane_g5

0x31a7,	// (0x000793fd) bg_cl_pane_g6

0x31af,	// (0x00079405) bg_cl_pane_g7

0x31b7,	// (0x0007940d) bg_cl_pane_g8

0x31bf,	// (0x00079415) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00085cd9) bg_cl_pane_g

0xc89a,	// (0x00082af0) aid_height_cl_leading_ParamLimits

0xc89a,	// (0x00082af0) aid_height_cl_leading

0xc8a6,	// (0x00082afc) aid_height_cl_text_ParamLimits

0xc8a6,	// (0x00082afc) aid_height_cl_text

0x368d,	// (0x000798e3) bg_cl_header_pane_ParamLimits

0x368d,	// (0x000798e3) bg_cl_header_pane

0xc8be,	// (0x00082b14) cl_header_pane_g1_ParamLimits

0xc8be,	// (0x00082b14) cl_header_pane_g1

0xc8cb,	// (0x00082b21) cl_header_pane_t1_ParamLimits

0xc8cb,	// (0x00082b21) cl_header_pane_t1

0x31c7,	// (0x0007941d) cl_list_pane

0x2e42,	// (0x00079098) hc_scroll_pane_cp01

0x024d,	// (0x000764a3) bg_cl_header_pane_g1

0x2d28,	// (0x00078f7e) bg_cl_header_pane_g2

0x026d,	// (0x000764c3) bg_cl_header_pane_g3

0x2d38,	// (0x00078f8e) bg_cl_header_pane_g4

0x2d30,	// (0x00078f86) bg_cl_header_pane_g5

0x2f4c,	// (0x000791a2) bg_cl_header_pane_g6

0x2d50,	// (0x00078fa6) bg_cl_header_pane_g7

0x2d58,	// (0x00078fae) bg_cl_header_pane_g8

0x2d48,	// (0x00078f9e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00085cec) bg_cl_header_pane_g

0xc8dd,	// (0x00082b33) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc8dd,	// (0x00082b33) hc_cl_list_double_graphic_heading_pane

0xc8ee,	// (0x00082b44) hc_cl_list_single_graphic_pane_ParamLimits

0xc8ee,	// (0x00082b44) hc_cl_list_single_graphic_pane

0xc907,	// (0x00082b5d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc907,	// (0x00082b5d) hc_cl_list_single_graphic_pane_g1

0xc913,	// (0x00082b69) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc913,	// (0x00082b69) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00085cff) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00085cff) hc_cl_list_single_graphic_pane_g

0xc927,	// (0x00082b7d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc927,	// (0x00082b7d) hc_cl_list_single_graphic_pane_t1

0xc907,	// (0x00082b5d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc907,	// (0x00082b5d) hc_cl_list_double_graphic_heading_pane_g1

0xc93c,	// (0x00082b92) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc93c,	// (0x00082b92) hc_cl_list_double_graphic_heading_pane_g2

0xc950,	// (0x00082ba6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc950,	// (0x00082ba6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00085d04) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00085d04) hc_cl_list_double_graphic_heading_pane_g

0xc964,	// (0x00082bba) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc964,	// (0x00082bba) hc_cl_list_double_graphic_heading_pane_t1

0xc979,	// (0x00082bcf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc979,	// (0x00082bcf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00085d0b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00085d0b) hc_cl_list_double_graphic_heading_pane_t

0xc996,	// (0x00082bec) vid4_progress_pane_g1

0xc9a6,	// (0x00082bfc) vid4_progress_pane_g2

0xc9b6,	// (0x00082c0c) vid4_progress_pane_g3

0xc9c8,	// (0x00082c1e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00085d10) vid4_progress_pane_g

0xc9e0,	// (0x00082c36) vid4_progress_pane_t1

0xc9f6,	// (0x00082c4c) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00085d1b) vid4_progress_pane_t

0xca20,	// (0x00082c76) wait_bar_pane_cp07

0x2073,	// (0x000782c9) blid_firmament_pane_ParamLimits

0x20b6,	// (0x0007830c) popup_blid_sat_info2_window_g1

0x20e6,	// (0x0007833c) popup_blid_sat_info2_window_t3

0x20f4,	// (0x0007834a) popup_blid_sat_info2_window_t4

0x2102,	// (0x00078358) popup_blid_sat_info2_window_t5

0x2110,	// (0x00078366) popup_blid_sat_info2_window_t6

0x2120,	// (0x00078376) popup_blid_sat_info2_window_t7

0x212e,	// (0x00078384) popup_blid_sat_info2_window_t8

0x213c,	// (0x00078392) popup_blid_sat_info2_window_t9

0x214a,	// (0x000783a0) popup_blid_sat_info2_window_t10

0x220c,	// (0x00078462) aid_firma_cardinal_ParamLimits

0x2220,	// (0x00078476) blid_firmament_pane_t1_ParamLimits

0x2237,	// (0x0007848d) blid_firmament_pane_t2_ParamLimits

0x224e,	// (0x000784a4) blid_firmament_pane_t3_ParamLimits

0x2265,	// (0x000784bb) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00085929) blid_firmament_pane_t_ParamLimits

0x227c,	// (0x000784d2) blid_sat_info_pane_ParamLimits

0xf0bc,	// (0x00085312) main_cam_set_pane_ParamLimits

0xafcc,	// (0x00081222) aid_size_cell_colour_35_ParamLimits

0xafe6,	// (0x0008123c) aid_size_cell_colour_112_ParamLimits

0xaffd,	// (0x00081253) aid_size_cell_effect_ParamLimits

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp02_ParamLimits

0x055c,	// (0x000767b2) heading_imed_pane_ParamLimits

0xb017,	// (0x0008126d) listscroll_imed_pane_ParamLimits

0x149e,	// (0x000776f4) popup_call2_audio_first_window_g5_ParamLimits

0x149e,	// (0x000776f4) popup_call2_audio_first_window_g5

0xb71d,	// (0x00081973) aid_size_touch_image3_arrow_left_ParamLimits

0xb71d,	// (0x00081973) aid_size_touch_image3_arrow_left

0xb733,	// (0x00081989) aid_size_touch_image3_arrow_right_ParamLimits

0xb733,	// (0x00081989) aid_size_touch_image3_arrow_right

0xca0b,	// (0x00082c61) vid4_progress_pane_t3

0xb2b5,	// (0x0008150b) main_hwr_training_symbol_option_pane_ParamLimits

0xb2b5,	// (0x0008150b) main_hwr_training_symbol_option_pane

0x2ac8,	// (0x00078d1e) popup_hwr_training_preview_window_ParamLimits

0x2ac8,	// (0x00078d1e) popup_hwr_training_preview_window

0xb316,	// (0x0008156c) hwr_training_navi_pane_g5_ParamLimits

0xb316,	// (0x0008156c) hwr_training_navi_pane_g5

0x2d16,	// (0x00078f6c) popup_char_count_window

0x368d,	// (0x000798e3) bg_popup_sub_pane_cp20_ParamLimits

0xc4f2,	// (0x00082748) list_vitu2_match_list_pane_ParamLimits

0xc4fe,	// (0x00082754) vitu2_page_scroll_pane_ParamLimits

0xc4fe,	// (0x00082754) vitu2_page_scroll_pane

0x31d0,	// (0x00079426) list_single_hwr_training_symbol_option_pane_ParamLimits

0x31d0,	// (0x00079426) list_single_hwr_training_symbol_option_pane

0x31e3,	// (0x00079439) list_single_hwr_training_symbol_option_pane_g1

0x31eb,	// (0x00079441) list_single_hwr_training_symbol_option_pane_t1

0x31f9,	// (0x0007944f) bg_button_pane_cp023

0x3202,	// (0x00079458) bg_button_pane_cp024

0xca56,	// (0x00082cac) vitu2_page_scroll_pane_g1

0xca5e,	// (0x00082cb4) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00085d22) vitu2_page_scroll_pane_g

0xca66,	// (0x00082cbc) vitu2_page_scroll_pane_t1

0x1fd3,	// (0x00078229) popup_char_count_window_g1

0x3235,	// (0x0007948b) popup_char_count_window_g2

0x323e,	// (0x00079494) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00085d27) popup_char_count_window_g

0x3247,	// (0x0007949d) popup_char_count_window_t1

0xe75a,	// (0x000849b0) main_vded2_pane

0x27c7,	// (0x00078a1d) aid_size_cell_imed_line

0x27d1,	// (0x00078a27) grid_imed_line_width_pane

0xbb6e,	// (0x00081dc4) vid4_indicators_pane_g4

0x3255,	// (0x000794ab) cell_imed_line_width_pane_ParamLimits

0x3255,	// (0x000794ab) cell_imed_line_width_pane

0x3269,	// (0x000794bf) cell_imed_line_width_pane_g1

0x2bba,	// (0x00078e10) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00085d2e) cell_imed_line_width_pane_g

0xca75,	// (0x00082ccb) main_vded2_pane_g1_ParamLimits

0xca75,	// (0x00082ccb) main_vded2_pane_g1

0xca82,	// (0x00082cd8) main_vded2_pane_g2_ParamLimits

0xca82,	// (0x00082cd8) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00085d33) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00085d33) main_vded2_pane_g

0xca90,	// (0x00082ce6) vded2_slider_pane_ParamLimits

0xca90,	// (0x00082ce6) vded2_slider_pane

0xca9d,	// (0x00082cf3) aid_size_touch_vded2_end

0xcaa7,	// (0x00082cfd) aid_size_touch_vded2_playhead

0x3272,	// (0x000794c8) aid_size_touch_vded2_start

0x327a,	// (0x000794d0) vded2_slider_bg_pane

0x3283,	// (0x000794d9) vded2_slider_pane_g1

0x328c,	// (0x000794e2) vded2_slider_pane_g2

0xcaaf,	// (0x00082d05) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00085d38) vded2_slider_pane_g

0x3294,	// (0x000794ea) vded2_slider_bg_pane_g1

0x329d,	// (0x000794f3) vded2_slider_bg_pane_g2

0x32a6,	// (0x000794fc) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00085d3f) vded2_slider_bg_pane_g

0x939e,	// (0x0007f5f4) aid_postcard_touch_down_pane_ParamLimits

0x939e,	// (0x0007f5f4) aid_postcard_touch_down_pane

0x93ae,	// (0x0007f604) aid_postcard_touch_up_pane_ParamLimits

0x93ae,	// (0x0007f604) aid_postcard_touch_up_pane

0xe75a,	// (0x000849b0) main_blid2_pane

0x9ad1,	// (0x0007fd27) popup_blid2_search_window

0xe75a,	// (0x000849b0) blid2_gps_pane

0xe75a,	// (0x000849b0) blid2_navig_pane

0xe75a,	// (0x000849b0) blid2_search_pane

0xe75a,	// (0x000849b0) blid2_tripm_pane

0xcab8,	// (0x00082d0e) blid2_search_pane_g1_ParamLimits

0xcab8,	// (0x00082d0e) blid2_search_pane_g1

0xcac8,	// (0x00082d1e) blid2_search_pane_t1_ParamLimits

0xcac8,	// (0x00082d1e) blid2_search_pane_t1

0xcada,	// (0x00082d30) aid_size_cell_blid2_gps_ParamLimits

0xcada,	// (0x00082d30) aid_size_cell_blid2_gps

0xcaea,	// (0x00082d40) blid2_gps_pane_g1_ParamLimits

0xcaea,	// (0x00082d40) blid2_gps_pane_g1

0xcaf6,	// (0x00082d4c) grid_blid2_satellite_pane_ParamLimits

0xcaf6,	// (0x00082d4c) grid_blid2_satellite_pane

0xcb06,	// (0x00082d5c) blid2_navig_pane_g1_ParamLimits

0xcb06,	// (0x00082d5c) blid2_navig_pane_g1

0xcb12,	// (0x00082d68) blid2_navig_pane_t1_ParamLimits

0xcb12,	// (0x00082d68) blid2_navig_pane_t1

0xcb24,	// (0x00082d7a) blid2_navig_pane_t2_ParamLimits

0xcb24,	// (0x00082d7a) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00085d46) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00085d46) blid2_navig_pane_t

0xcb36,	// (0x00082d8c) blid2_navig_ring_pane_ParamLimits

0xcb36,	// (0x00082d8c) blid2_navig_ring_pane

0xcb46,	// (0x00082d9c) blid2_speed_pane_ParamLimits

0xcb46,	// (0x00082d9c) blid2_speed_pane

0xcb52,	// (0x00082da8) blid2_tripm_pane_g1_ParamLimits

0xcb52,	// (0x00082da8) blid2_tripm_pane_g1

0xcb62,	// (0x00082db8) blid2_tripm_pane_g2_ParamLimits

0xcb62,	// (0x00082db8) blid2_tripm_pane_g2

0xcb6e,	// (0x00082dc4) blid2_tripm_pane_g3_ParamLimits

0xcb6e,	// (0x00082dc4) blid2_tripm_pane_g3

0xcb7a,	// (0x00082dd0) blid2_tripm_pane_g4_ParamLimits

0xcb7a,	// (0x00082dd0) blid2_tripm_pane_g4

0xcb86,	// (0x00082ddc) blid2_tripm_pane_g5_ParamLimits

0xcb86,	// (0x00082ddc) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00085d4b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00085d4b) blid2_tripm_pane_g

0xcba2,	// (0x00082df8) blid2_tripm_pane_t1_ParamLimits

0xcba2,	// (0x00082df8) blid2_tripm_pane_t1

0xcbb6,	// (0x00082e0c) blid2_tripm_pane_t2_ParamLimits

0xcbb6,	// (0x00082e0c) blid2_tripm_pane_t2

0xcbc8,	// (0x00082e1e) blid2_tripm_pane_t3_ParamLimits

0xcbc8,	// (0x00082e1e) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00085d58) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00085d58) blid2_tripm_pane_t

0xcbfa,	// (0x00082e50) cell_blid2_satellite_pane_ParamLimits

0xcbfa,	// (0x00082e50) cell_blid2_satellite_pane

0xcc14,	// (0x00082e6a) cell_blid2_satellite_pane_g1

0x32af,	// (0x00079505) cell_blid2_satellite_pane_t1

0x228c,	// (0x000784e2) blid2_speed_pane_g1

0x32bd,	// (0x00079513) blid2_speed_pane_t1

0x32cb,	// (0x00079521) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00085d61) blid2_speed_pane_t

0x228c,	// (0x000784e2) blid2_navig_ring_pane_g1

0xcc1d,	// (0x00082e73) blid2_navig_ring_pane_g2

0xcc25,	// (0x00082e7b) blid2_navig_ring_pane_g3

0xcc2d,	// (0x00082e83) blid2_navig_ring_pane_g4

0xcc35,	// (0x00082e8b) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00085d66) blid2_navig_ring_pane_g

0xe75a,	// (0x000849b0) bg_popup_window_pane_cp011

0x32d9,	// (0x0007952f) popup_blid2_search_window_g1

0x32e1,	// (0x00079537) popup_blid2_search_window_t1

0x32ef,	// (0x00079545) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00085d71) popup_blid2_search_window_t

0x015c,	// (0x000763b2) main_browser_pane_g1

0xeeae,	// (0x00085104) main_browser_pane_ParamLimits

0xf0bc,	// (0x00085312) bg_button_pane_cp011_ParamLimits

0xbddd,	// (0x00082033) cell_vitu2_function_pane_g1_ParamLimits

0x1e78,	// (0x000780ce) bg_popup_sub_pane_cp22_ParamLimits

0x5a07,	// (0x0007bc5d) input_focus_pane_cp08_ParamLimits

0xc687,	// (0x000828dd) popup_vitu2_query_button_pane_ParamLimits

0xc687,	// (0x000828dd) popup_vitu2_query_button_pane

0x5a1e,	// (0x0007bc74) popup_vitu2_query_input_button_pane

0x2f87,	// (0x000791dd) popup_vitu2_query_window_g1_ParamLimits

0x5a28,	// (0x0007bc7e) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00085c72) popup_vitu2_query_window_g_ParamLimits

0xe75a,	// (0x000849b0) bg_button_pane_cp026

0xcc3d,	// (0x00082e93) popup_vitu2_query_input_button_pane_g1

0xe75a,	// (0x000849b0) bg_button_pane_cp025

0x32fd,	// (0x00079553) popup_vitu2_query_button_pane_t1

0xa52f,	// (0x00080785) main_mp3_pane_t6

0xa53f,	// (0x00080795) popup_slider_window_cp01

0xba4b,	// (0x00081ca1) cam4_battery_pane

0xbb2b,	// (0x00081d81) cam4_battery_pane_cp02

0xc98e,	// (0x00082be4) cam4_battery_pane_cp01

0xc98e,	// (0x00082be4) cam4_battery_pane_cp03

0x228c,	// (0x000784e2) cam4_battery_pane_g1

0x2bce,	// (0x00078e24) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00085d76) cam4_battery_pane_g

0x2158,	// (0x000783ae) popup_blid_sat_info2_window_t11

0x08c3,	// (0x00076b19) aid_size_touch_mv_arrow_left_ParamLimits

0x08ec,	// (0x00076b42) aid_size_touch_mv_arrow_right_ParamLimits

0x094a,	// (0x00076ba0) navi_pane_g1_ParamLimits

0x0956,	// (0x00076bac) navi_pane_g2_ParamLimits

0x0984,	// (0x00076bda) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008563b) navi_pane_g_ParamLimits

0x8e14,	// (0x0007f06a) navi_pane_mv_t1_ParamLimits

0xb023,	// (0x00081279) grid_imed_effect_pane_ParamLimits

0x78c2,	// (0x0007db18) aid_placing_vt_slider_lsc

0x00ab,	// (0x00076301) aid_placing_vt_slider_prt

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp01_ParamLimits

0x2418,	// (0x0007866e) popup_image_details_window_g1_ParamLimits

0x242b,	// (0x00078681) popup_image_details_window_g2_ParamLimits

0x2440,	// (0x00078696) popup_image_details_window_g3_ParamLimits

0x2440,	// (0x00078696) popup_image_details_window_g3

0xf718,	// (0x0008596e) popup_image_details_window_g_ParamLimits

0x2454,	// (0x000786aa) popup_image_details_window_t1_ParamLimits

0x2466,	// (0x000786bc) popup_image_details_window_t2_ParamLimits

0x247f,	// (0x000786d5) popup_image_details_window_t3_ParamLimits

0x2493,	// (0x000786e9) popup_image_details_window_t4_ParamLimits

0x24ae,	// (0x00078704) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x00085975) popup_image_details_window_t_ParamLimits

0xc8b2,	// (0x00082b08) cl_header_name_pane_ParamLimits

0xc8b2,	// (0x00082b08) cl_header_name_pane

0xcc45,	// (0x00082e9b) cl_header_name_pane_t1_ParamLimits

0xcc45,	// (0x00082e9b) cl_header_name_pane_t1

0xcc5c,	// (0x00082eb2) cl_header_name_pane_t2_ParamLimits

0xcc5c,	// (0x00082eb2) cl_header_name_pane_t2

0xcc86,	// (0x00082edc) cl_header_name_pane_t3_ParamLimits

0xcc86,	// (0x00082edc) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00085d7b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00085d7b) cl_header_name_pane_t

0x0a13,	// (0x00076c69) navi_pane_mv_g2_ParamLimits

0x2cf0,	// (0x00078f46) field_vitu2_entry_pane_g1_ParamLimits

0x2cfc,	// (0x00078f52) field_vitu2_entry_pane_g2_ParamLimits

0x2d08,	// (0x00078f5e) field_vitu2_entry_pane_g3_ParamLimits

0x2d08,	// (0x00078f5e) field_vitu2_entry_pane_g3

0xf91b,	// (0x00085b71) field_vitu2_entry_pane_g_ParamLimits

0xbd71,	// (0x00081fc7) cell_vitu2_itu_pane_g1_ParamLimits

0xbd83,	// (0x00081fd9) cell_vitu2_itu_pane_g2_ParamLimits

0xbd83,	// (0x00081fd9) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00085b7d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00085b7d) cell_vitu2_itu_pane_g

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp05_ParamLimits

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp05

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp03

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp04

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp10_ParamLimits

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp10

0x5bdd,	// (0x0007be33) bg_vkb2_func_pane_cp08

0xc85c,	// (0x00082ab2) bg_vkb2_func_pane_cp06

0xc86a,	// (0x00082ac0) bg_vkb2_func_pane_cp07

0x320b,	// (0x00079461) bg_vkb2_func_pane_cp11_ParamLimits

0x320b,	// (0x00079461) bg_vkb2_func_pane_cp11

0x3220,	// (0x00079476) bg_vkb2_func_pane_cp12_ParamLimits

0x3220,	// (0x00079476) bg_vkb2_func_pane_cp12

0xe75a,	// (0x000849b0) bg_vkb2_func_pane_cp09

0x2d28,	// (0x00078f7e) bg_vkb2_func_pane_g1

0x026d,	// (0x000764c3) bg_vkb2_func_pane_g2

0x2d30,	// (0x00078f86) bg_vkb2_func_pane_g3

0x2d38,	// (0x00078f8e) bg_vkb2_func_pane_g4

0x2f4c,	// (0x000791a2) bg_vkb2_func_pane_g5

0x2d50,	// (0x00078fa6) bg_vkb2_func_pane_g6

0x2d58,	// (0x00078fae) bg_vkb2_func_pane_g7

0x2d48,	// (0x00078f9e) bg_vkb2_func_pane_g8

0x024d,	// (0x000764a3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00085d82) bg_vkb2_func_pane_g

0xcb94,	// (0x00082dea) blid2_tripm_pane_g6_ParamLimits

0xcb94,	// (0x00082dea) blid2_tripm_pane_g6

0x2b80,	// (0x00078dd6) mp4_progress_pane_g1

0xcbee,	// (0x00082e44) blid2_tripm_values_pane_ParamLimits

0xcbee,	// (0x00082e44) blid2_tripm_values_pane

0xccab,	// (0x00082f01) blid2_tripm_values_pane_t1

0xccb9,	// (0x00082f0f) blid2_tripm_values_pane_t2

0xccc7,	// (0x00082f1d) blid2_tripm_values_pane_t3

0xccd5,	// (0x00082f2b) blid2_tripm_values_pane_t4

0xcce3,	// (0x00082f39) blid2_tripm_values_pane_t5

0xccf1,	// (0x00082f47) blid2_tripm_values_pane_t6

0xccff,	// (0x00082f55) blid2_tripm_values_pane_t7

0xcd0d,	// (0x00082f63) blid2_tripm_values_pane_t8

0xcd1b,	// (0x00082f71) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00085d95) blid2_tripm_values_pane_t

0x7902,	// (0x0007db58) call_video_pane_t1_ParamLimits

0x7923,	// (0x0007db79) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000854c4) call_video_pane_t_ParamLimits

0x57c1,	// (0x0007ba17) msg_header_pane_g1_ParamLimits

0x0bfb,	// (0x00076e51) msg_header_pane_g2_ParamLimits

0x0bfb,	// (0x00076e51) msg_header_pane_g2

0x0001,

0xf488,	// (0x000856de) msg_header_pane_g_ParamLimits

0xf488,	// (0x000856de) msg_header_pane_g

0xeeae,	// (0x00085104) main_clock2_pane_ParamLimits

0xadbc,	// (0x00081012) grid_clock2_toolbar_pane_ParamLimits

0xadbc,	// (0x00081012) grid_clock2_toolbar_pane

0xadbc,	// (0x00081012) listscroll_clock2_pane_ParamLimits

0xadbc,	// (0x00081012) listscroll_clock2_pane

0xae60,	// (0x000810b6) main_clock2_pane_t3_ParamLimits

0xae60,	// (0x000810b6) main_clock2_pane_t3

0xae72,	// (0x000810c8) main_clock2_pane_t4_ParamLimits

0xae72,	// (0x000810c8) main_clock2_pane_t4

0x330b,	// (0x00079561) cell_clock2_toolbar_pane

0x3313,	// (0x00079569) cell_clock2_toolbar_pane_cp01

0x3313,	// (0x00079569) cell_clock2_toolbar_pane_cp02

0x331b,	// (0x00079571) cell_clock2_toolbar_pane_cp03

0x3323,	// (0x00079579) list_clock2_pane

0x0839,	// (0x00076a8f) scroll_pane_cp10

0x332b,	// (0x00079581) list_single_clock2_pane_ParamLimits

0x332b,	// (0x00079581) list_single_clock2_pane

0xf073,	// (0x000852c9) list_highlight_pane_cp08

0x3338,	// (0x0007958e) list_single_clock2_pane_t1

0x3346,	// (0x0007959c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00085da8) list_single_clock2_pane_t

0xe75a,	// (0x000849b0) bg_button_pane_cp10

0x3354,	// (0x000795aa) cell_clock2_toolbar_pane_g1

0x9300,	// (0x0007f556) aid_main_viewer_pane_g1_ParamLimits

0x9300,	// (0x0007f556) aid_main_viewer_pane_g1

0x930c,	// (0x0007f562) aid_main_viewer_pane_g2_ParamLimits

0x930c,	// (0x0007f562) aid_main_viewer_pane_g2

0x9318,	// (0x0007f56e) aid_main_viewer_pane_g3_ParamLimits

0x9318,	// (0x0007f56e) aid_main_viewer_pane_g3

0x9329,	// (0x0007f57f) aid_main_viewer_pane_g4_ParamLimits

0x9329,	// (0x0007f57f) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000856ef) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000856ef) aid_main_viewer_pane_g

0x9aa9,	// (0x0007fcff) main_calc_pane_ParamLimits

0x9ab6,	// (0x0007fd0c) main_dialer2_pane_ParamLimits

0xe75a,	// (0x000849b0) main_cam6_pane

0xe75a,	// (0x000849b0) main_vid6_pane

0xadc8,	// (0x0008101e) listscroll_gen_pane_cp06_ParamLimits

0xadc8,	// (0x0008101e) listscroll_gen_pane_cp06

0xae84,	// (0x000810da) main_clock2_pane_t5_ParamLimits

0xae84,	// (0x000810da) main_clock2_pane_t5

0xaecd,	// (0x00081123) aid_call2_pane_cp10_ParamLimits

0xaedf,	// (0x00081135) aid_call_pane_cp10_ParamLimits

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g2_ParamLimits

0xaef1,	// (0x00081147) popup_clock_analogue_window_cp10_g3_ParamLimits

0xaef1,	// (0x00081147) popup_clock_analogue_window_cp10_g4_ParamLimits

0x08b7,	// (0x00076b0d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00085a2a) popup_clock_analogue_window_cp10_g_ParamLimits

0xaf03,	// (0x00081159) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb6ca,	// (0x00081920) cell_dialer2_keypad_pane_g2_ParamLimits

0xb6ca,	// (0x00081920) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00085b10) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00085b10) cell_dialer2_keypad_pane_g

0xb6e6,	// (0x0008193c) cell_dialer2_keypad_pane_t1

0xc0a8,	// (0x000822fe) main_cset_text2_pane_ParamLimits

0xc0a8,	// (0x000822fe) main_cset_text2_pane

0x3173,	// (0x000793c9) area_vitu2_query_pane_g1_ParamLimits

0x5b08,	// (0x0007bd5e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00085cc5) area_vitu2_query_pane_g_ParamLimits

0x5bb9,	// (0x0007be0f) area_vitu2_query_pane_t7_ParamLimits

0x5bb9,	// (0x0007be0f) area_vitu2_query_pane_t7

0xc85c,	// (0x00082ab2) bg_button_pane_cp018_ParamLimits

0xc86a,	// (0x00082ac0) bg_button_pane_cp021_ParamLimits

0x5bdd,	// (0x0007be33) bg_button_pane_cp022_ParamLimits

0x5bdd,	// (0x0007be33) bg_vkb2_func_pane_cp08_ParamLimits

0xc85c,	// (0x00082ab2) bg_vkb2_func_pane_cp06_ParamLimits

0xc86a,	// (0x00082ac0) bg_vkb2_func_pane_cp07_ParamLimits

0x5bee,	// (0x0007be44) input_focus_pane_cp09_ParamLimits

0xcd29,	// (0x00082f7f) cam6_autofocus_pane_ParamLimits

0xcd29,	// (0x00082f7f) cam6_autofocus_pane

0xcd4b,	// (0x00082fa1) cam6_image_uncrop_pane_ParamLimits

0xcd4b,	// (0x00082fa1) cam6_image_uncrop_pane

0xcd78,	// (0x00082fce) cam6_indi_pane_ParamLimits

0xcd78,	// (0x00082fce) cam6_indi_pane

0xcd92,	// (0x00082fe8) cam6_mode_pane_ParamLimits

0xcd92,	// (0x00082fe8) cam6_mode_pane

0xcda6,	// (0x00082ffc) cam6_timer_pane_ParamLimits

0xcda6,	// (0x00082ffc) cam6_timer_pane

0xcdb2,	// (0x00083008) cam6_zoom_pane_ParamLimits

0xcdb2,	// (0x00083008) cam6_zoom_pane

0xcdca,	// (0x00083020) cam6_mode_pane_g1_ParamLimits

0xcdca,	// (0x00083020) cam6_mode_pane_g1

0xcdd6,	// (0x0008302c) cam6_mode_pane_g2_ParamLimits

0xcdd6,	// (0x0008302c) cam6_mode_pane_g2

0xcde2,	// (0x00083038) cam6_mode_pane_g3_ParamLimits

0xcde2,	// (0x00083038) cam6_mode_pane_g3

0xcdee,	// (0x00083044) cam6_mode_pane_g4_ParamLimits

0xcdee,	// (0x00083044) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00085dad) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00085dad) cam6_mode_pane_g

0x335c,	// (0x000795b2) bg_tb_trans_pane_cp08_ParamLimits

0x335c,	// (0x000795b2) bg_tb_trans_pane_cp08

0x336a,	// (0x000795c0) cam6_battery_pane_ParamLimits

0x336a,	// (0x000795c0) cam6_battery_pane

0x3380,	// (0x000795d6) cam6_indi_pane_g1_ParamLimits

0x3380,	// (0x000795d6) cam6_indi_pane_g1

0x3392,	// (0x000795e8) cam6_indi_pane_g2_ParamLimits

0x3392,	// (0x000795e8) cam6_indi_pane_g2

0x33a4,	// (0x000795fa) cam6_indi_pane_g3_ParamLimits

0x33a4,	// (0x000795fa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00085db6) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00085db6) cam6_indi_pane_g

0x33b6,	// (0x0007960c) cam6_indi_pane_t1_ParamLimits

0x33b6,	// (0x0007960c) cam6_indi_pane_t1

0xbba3,	// (0x00081df9) cam6_autofocus_pane_g1

0xbbab,	// (0x00081e01) cam6_autofocus_pane_g2

0xbbb3,	// (0x00081e09) cam6_autofocus_pane_g3

0xbbbb,	// (0x00081e11) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00085dbd) cam6_autofocus_pane_g

0x33dc,	// (0x00079632) cam6_timer_pane_g1

0x33e4,	// (0x0007963a) cam6_timer_pane_t1

0x33f2,	// (0x00079648) cam6_zoom_cont_pane

0x33fa,	// (0x00079650) cam6_zoom_pane_g1

0x3402,	// (0x00079658) cam6_zoom_pane_g2

0xcdfa,	// (0x00083050) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00085dc6) cam6_zoom_pane_g

0x228c,	// (0x000784e2) cam6_battery_pane_g1

0x228c,	// (0x000784e2) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00085932) cam6_battery_pane_g

0x340a,	// (0x00079660) cam6_zoom_cont_pane_g1

0x3413,	// (0x00079669) cam6_zoom_cont_pane_g2

0x341c,	// (0x00079672) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00085dcd) cam6_zoom_cont_pane_g

0xce17,	// (0x0008306d) cam6_mode_pane_cp_ParamLimits

0xce17,	// (0x0008306d) cam6_mode_pane_cp

0xcdb2,	// (0x00083008) cam6_zoom_pane_cp_ParamLimits

0xcdb2,	// (0x00083008) cam6_zoom_pane_cp

0xce2b,	// (0x00083081) vid6_image_uncrop_cif_pane_ParamLimits

0xce2b,	// (0x00083081) vid6_image_uncrop_cif_pane

0xce57,	// (0x000830ad) vid6_image_uncrop_nhd_pane_ParamLimits

0xce57,	// (0x000830ad) vid6_image_uncrop_nhd_pane

0xcd4b,	// (0x00082fa1) vid6_image_uncrop_vga_pane_ParamLimits

0xcd4b,	// (0x00082fa1) vid6_image_uncrop_vga_pane

0xce74,	// (0x000830ca) vid6_image_uncrop_wvga_pane_ParamLimits

0xce74,	// (0x000830ca) vid6_image_uncrop_wvga_pane

0xce91,	// (0x000830e7) vid6_indi_pane_ParamLimits

0xce91,	// (0x000830e7) vid6_indi_pane

0x335c,	// (0x000795b2) bg_tb_trans_pane_cp09_ParamLimits

0x335c,	// (0x000795b2) bg_tb_trans_pane_cp09

0x3434,	// (0x0007968a) cam6_battery_pane_cp_ParamLimits

0x3434,	// (0x0007968a) cam6_battery_pane_cp

0x3440,	// (0x00079696) vid6_indi_pane_g1_ParamLimits

0x3440,	// (0x00079696) vid6_indi_pane_g1

0x3452,	// (0x000796a8) vid6_indi_pane_g2_ParamLimits

0x3452,	// (0x000796a8) vid6_indi_pane_g2

0x3464,	// (0x000796ba) vid6_indi_pane_g3_ParamLimits

0x3464,	// (0x000796ba) vid6_indi_pane_g3

0x3479,	// (0x000796cf) vid6_indi_pane_g4_ParamLimits

0x3479,	// (0x000796cf) vid6_indi_pane_g4

0x348e,	// (0x000796e4) vid6_indi_pane_g5_ParamLimits

0x348e,	// (0x000796e4) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00085dd4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00085dd4) vid6_indi_pane_g

0x34a8,	// (0x000796fe) vid6_indi_pane_t1_ParamLimits

0x34a8,	// (0x000796fe) vid6_indi_pane_t1

0x34be,	// (0x00079714) vid6_indi_pane_t2_ParamLimits

0x34be,	// (0x00079714) vid6_indi_pane_t2

0x34e6,	// (0x0007973c) vid6_indi_pane_t3_ParamLimits

0x34e6,	// (0x0007973c) vid6_indi_pane_t3

0x350e,	// (0x00079764) vid6_indi_pane_t4_ParamLimits

0x350e,	// (0x00079764) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00085ddf) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00085ddf) vid6_indi_pane_t

0x3532,	// (0x00079788) wait_bar_pane_cp08

0xceb6,	// (0x0008310c) main_cset_text2_pane_t1_ParamLimits

0xceb6,	// (0x0008310c) main_cset_text2_pane_t1

0xce02,	// (0x00083058) listscroll_gen_pane_cp06_t1_ParamLimits

0xce02,	// (0x00083058) listscroll_gen_pane_cp06_t1

0xe75a,	// (0x000849b0) main_cam6_set_pane

0x24f8,	// (0x0007874e) bg_tb_trans_pane_cp06_ParamLimits

0xba53,	// (0x00081ca9) cam4_indicators_pane_g1_ParamLimits

0xba64,	// (0x00081cba) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00085b4d) cam4_indicators_pane_g_ParamLimits

0xba82,	// (0x00081cd8) cam4_indicators_pane_t1_ParamLimits

0xf0bc,	// (0x00085312) bg_tb_trans_pane_cp07_ParamLimits

0xbb35,	// (0x00081d8b) vid4_indicators_pane_g1_ParamLimits

0xbb49,	// (0x00081d9f) vid4_indicators_pane_g2_ParamLimits

0xbb5d,	// (0x00081db3) vid4_indicators_pane_g3_ParamLimits

0xbb6e,	// (0x00081dc4) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00085b5f) vid4_indicators_pane_g_ParamLimits

0xbb8c,	// (0x00081de2) vid4_indicators_pane_t1_ParamLimits

0xc996,	// (0x00082bec) vid4_progress_pane_g1_ParamLimits

0xc9a6,	// (0x00082bfc) vid4_progress_pane_g2_ParamLimits

0xc9b6,	// (0x00082c0c) vid4_progress_pane_g3_ParamLimits

0xc9c8,	// (0x00082c1e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00085d10) vid4_progress_pane_g_ParamLimits

0xc9e0,	// (0x00082c36) vid4_progress_pane_t1_ParamLimits

0xc9f6,	// (0x00082c4c) vid4_progress_pane_t2_ParamLimits

0xca0b,	// (0x00082c61) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00085d1b) vid4_progress_pane_t_ParamLimits

0xca20,	// (0x00082c76) wait_bar_pane_cp07_ParamLimits

0xcee9,	// (0x0008313f) main_cam6_set_pane_g2_ParamLimits

0xcee9,	// (0x0008313f) main_cam6_set_pane_g2

0xcef5,	// (0x0008314b) main_cset6_listscroll_pane_ParamLimits

0xcef5,	// (0x0008314b) main_cset6_listscroll_pane

0xcf20,	// (0x00083176) main_cset6_slider_pane_ParamLimits

0xcf20,	// (0x00083176) main_cset6_slider_pane

0xcf2c,	// (0x00083182) main_cset6_text2_pane_ParamLimits

0xcf2c,	// (0x00083182) main_cset6_text2_pane

0x3541,	// (0x00079797) main_cset6_text_pane

0x3549,	// (0x0007979f) main_cset_list_pane_copy1_ParamLimits

0x3549,	// (0x0007979f) main_cset_list_pane_copy1

0x3559,	// (0x000797af) scroll_pane_cp028_copy1

0xcf3f,	// (0x00083195) cset_list_set_pane_copy1

0xcf52,	// (0x000831a8) aid_position_infowindow_above_copy1

0xcf5a,	// (0x000831b0) aid_position_infowindow_below_copy1

0xcf62,	// (0x000831b8) cset_list_set_pane_g1_copy1

0x5987,	// (0x0007bbdd) cset_list_set_pane_g3_copy1_ParamLimits

0x5987,	// (0x0007bbdd) cset_list_set_pane_g3_copy1

0x5996,	// (0x0007bbec) cset_list_set_pane_t1_copy1_ParamLimits

0x5996,	// (0x0007bbec) cset_list_set_pane_t1_copy1

0xf0bc,	// (0x00085312) list_highlight_pane_cp021_copy1_ParamLimits

0xf0bc,	// (0x00085312) list_highlight_pane_cp021_copy1

0x3562,	// (0x000797b8) cset6_slider_pane_ParamLimits

0x3562,	// (0x000797b8) cset6_slider_pane

0x358e,	// (0x000797e4) main_cset6_slider_pane_g1_ParamLimits

0x358e,	// (0x000797e4) main_cset6_slider_pane_g1

0xcf6a,	// (0x000831c0) main_cset6_slider_pane_g2_ParamLimits

0xcf6a,	// (0x000831c0) main_cset6_slider_pane_g2

0x35b6,	// (0x0007980c) main_cset6_slider_pane_g3_ParamLimits

0x35b6,	// (0x0007980c) main_cset6_slider_pane_g3

0xcf92,	// (0x000831e8) main_cset6_slider_pane_g4_ParamLimits

0xcf92,	// (0x000831e8) main_cset6_slider_pane_g4

0xcf9e,	// (0x000831f4) main_cset6_slider_pane_g5_ParamLimits

0xcf9e,	// (0x000831f4) main_cset6_slider_pane_g5

0x2e57,	// (0x000790ad) main_cset6_slider_pane_g7_ParamLimits

0x2e57,	// (0x000790ad) main_cset6_slider_pane_g7

0x2e63,	// (0x000790b9) main_cset6_slider_pane_g8_ParamLimits

0x2e63,	// (0x000790b9) main_cset6_slider_pane_g8

0xcfac,	// (0x00083202) main_cset6_slider_pane_g9_ParamLimits

0xcfac,	// (0x00083202) main_cset6_slider_pane_g9

0xcfb8,	// (0x0008320e) main_cset6_slider_pane_g10_ParamLimits

0xcfb8,	// (0x0008320e) main_cset6_slider_pane_g10

0xcfc4,	// (0x0008321a) main_cset6_slider_pane_g11_ParamLimits

0xcfc4,	// (0x0008321a) main_cset6_slider_pane_g11

0xcfd0,	// (0x00083226) main_cset6_slider_pane_g12_ParamLimits

0xcfd0,	// (0x00083226) main_cset6_slider_pane_g12

0xcfdc,	// (0x00083232) main_cset6_slider_pane_g13_ParamLimits

0xcfdc,	// (0x00083232) main_cset6_slider_pane_g13

0xcfe8,	// (0x0008323e) main_cset6_slider_pane_g14_ParamLimits

0xcfe8,	// (0x0008323e) main_cset6_slider_pane_g14

0xcff4,	// (0x0008324a) main_cset6_slider_pane_g15_ParamLimits

0xcff4,	// (0x0008324a) main_cset6_slider_pane_g15

0xd00c,	// (0x00083262) main_cset6_slider_pane_g16_ParamLimits

0xd00c,	// (0x00083262) main_cset6_slider_pane_g16

0xd01a,	// (0x00083270) main_cset6_slider_pane_g17_ParamLimits

0xd01a,	// (0x00083270) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00085de8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00085de8) main_cset6_slider_pane_g

0x35c2,	// (0x00079818) main_cset6_slider_pane_t1_ParamLimits

0x35c2,	// (0x00079818) main_cset6_slider_pane_t1

0xd040,	// (0x00083296) main_cset6_slider_pane_t2_ParamLimits

0xd040,	// (0x00083296) main_cset6_slider_pane_t2

0xd06b,	// (0x000832c1) main_cset6_slider_pane_t3_ParamLimits

0xd06b,	// (0x000832c1) main_cset6_slider_pane_t3

0xd096,	// (0x000832ec) main_cset6_slider_pane_t4_ParamLimits

0xd096,	// (0x000832ec) main_cset6_slider_pane_t4

0xd0c1,	// (0x00083317) main_cset6_slider_pane_t5_ParamLimits

0xd0c1,	// (0x00083317) main_cset6_slider_pane_t5

0x3603,	// (0x00079859) main_cset6_slider_pane_t7_ParamLimits

0x3603,	// (0x00079859) main_cset6_slider_pane_t7

0xd0ee,	// (0x00083344) main_cset6_slider_pane_t8_ParamLimits

0xd0ee,	// (0x00083344) main_cset6_slider_pane_t8

0xd112,	// (0x00083368) main_cset6_slider_pane_t9_ParamLimits

0xd112,	// (0x00083368) main_cset6_slider_pane_t9

0xd136,	// (0x0008338c) main_cset6_slider_pane_t10_ParamLimits

0xd136,	// (0x0008338c) main_cset6_slider_pane_t10

0xd15a,	// (0x000833b0) main_cset6_slider_pane_t11_ParamLimits

0xd15a,	// (0x000833b0) main_cset6_slider_pane_t11

0x3639,	// (0x0007988f) main_cset6_slider_pane_t14_ParamLimits

0x3639,	// (0x0007988f) main_cset6_slider_pane_t14

0x36b6,	// (0x0007990c) main_cset6_slider_pane_t15_ParamLimits

0x36b6,	// (0x0007990c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00085e0d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00085e0d) main_cset6_slider_pane_t

0x3672,	// (0x000798c8) cset_slider_pane_g1_copy1

0x367b,	// (0x000798d1) cset_slider_pane_g2_copy1

0x3684,	// (0x000798da) cset_slider_pane_g3_copy1

0xe75a,	// (0x000849b0) bg_popup_sub_pane_cp011_copy1

0x36ef,	// (0x00079945) main_cset_text_pane_g1_copy1

0x2f9b,	// (0x000791f1) main_cset_text_pane_t1_copy1

0x2fa9,	// (0x000791ff) main_cset_text_pane_t2_copy1

0x2fb7,	// (0x0007920d) main_cset_text_pane_t3_copy1

0x2fc5,	// (0x0007921b) main_cset_text_pane_t4_copy1

0x2fd3,	// (0x00079229) main_cset_text_pane_t5_copy1

0x36f7,	// (0x0007994d) main_cset_text_pane_t6_copy1

0x3705,	// (0x0007995b) main_cset_text_pane_t7_copy1

0xd199,	// (0x000833ef) main_cset_text2_pane_t1_copy1

0xf0bc,	// (0x00085312) main_ncimui_pane

0x9b07,	// (0x0007fd5d) popup_query_ncimui_window_ParamLimits

0x9b07,	// (0x0007fd5d) popup_query_ncimui_window

0xa698,	// (0x000808ee) field_cale_ev2_pane_g4_ParamLimits

0xa698,	// (0x000808ee) field_cale_ev2_pane_g4

0xb3ea,	// (0x00081640) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb3ea,	// (0x00081640) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00085aeb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00085aeb) cell_video_dialer_keypad_pane_g

0xb402,	// (0x00081658) cell_video_dialer_keypad_pane_t1

0xe75a,	// (0x000849b0) bg_popup_window_pane_cp012

0x0706,	// (0x0007695c) heading_pane_cp06

0x3731,	// (0x00079987) ncim_query_content_pane

0xe75a,	// (0x000849b0) bg_popup_heading_pane_cp01

0x3739,	// (0x0007998f) ncim_heading_pane_t1

0x3747,	// (0x0007999d) ncim_indicator_popup_pane

0x3759,	// (0x000799af) ncim_query_button_pane

0x376d,	// (0x000799c3) ncim_query_content_pane_t1

0x377f,	// (0x000799d5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00085e51) ncim_query_content_pane_t

0x37b9,	// (0x00079a0f) ncim_query_list_pane

0x37cb,	// (0x00079a21) ncim_query_popup_pane

0x3747,	// (0x0007999d) ncim_indicator_popup_pane_ParamLimits

0xd2ec,	// (0x00083542) ncim_query_content_pane_g1_ParamLimits

0xd2ec,	// (0x00083542) ncim_query_content_pane_g1

0x376d,	// (0x000799c3) ncim_query_content_pane_t1_ParamLimits

0x377f,	// (0x000799d5) ncim_query_content_pane_t2_ParamLimits

0xd2f8,	// (0x0008354e) ncim_query_content_pane_t3_ParamLimits

0xd2f8,	// (0x0008354e) ncim_query_content_pane_t3

0xd315,	// (0x0008356b) ncim_query_content_pane_t4_ParamLimits

0xd315,	// (0x0008356b) ncim_query_content_pane_t4

0xd332,	// (0x00083588) ncim_query_content_pane_t5_ParamLimits

0xd332,	// (0x00083588) ncim_query_content_pane_t5

0x3791,	// (0x000799e7) ncim_query_content_pane_t6_ParamLimits

0x3791,	// (0x000799e7) ncim_query_content_pane_t6

0xfbfb,	// (0x00085e51) ncim_query_content_pane_t_ParamLimits

0x37b9,	// (0x00079a0f) ncim_query_list_pane_ParamLimits

0x37cb,	// (0x00079a21) ncim_query_popup_pane_ParamLimits

0x37df,	// (0x00079a35) wait_bar_pane_cp04

0xe75a,	// (0x000849b0) input_focus_pane_cp011

0x37e7,	// (0x00079a3d) ncim_query_popup_pane_t1

0x37f5,	// (0x00079a4b) ncim_list_query_list_pane_ParamLimits

0x37f5,	// (0x00079a4b) ncim_list_query_list_pane

0xe75a,	// (0x000849b0) bg_button_pane_cp027

0x3802,	// (0x00079a58) ncim_query_button_pane_g1

0xe75a,	// (0x000849b0) list_highlight_pane_cp012

0x380c,	// (0x00079a62) ncim_list_query_list_pane_g1

0x3814,	// (0x00079a6a) ncim_list_query_list_pane_t1

0xba73,	// (0x00081cc9) cam4_indicators_pane_g3_ParamLimits

0xba73,	// (0x00081cc9) cam4_indicators_pane_g3

0xbb7a,	// (0x00081dd0) vid4_indicators_pane_g5_ParamLimits

0xbb7a,	// (0x00081dd0) vid4_indicators_pane_g5

0xc9d4,	// (0x00082c2a) vid4_progress_pane_g5_ParamLimits

0xc9d4,	// (0x00082c2a) vid4_progress_pane_g5

0xd1d8,	// (0x0008342e) main_ncimui_pane_g1

0xd240,	// (0x00083496) ncimui_group_query_pane_ParamLimits

0xd240,	// (0x00083496) ncimui_group_query_pane

0xd288,	// (0x000834de) ncimui_list_pane_ParamLimits

0xd288,	// (0x000834de) ncimui_list_pane

0xd2af,	// (0x00083505) ncimui_text_pane_ParamLimits

0xd2af,	// (0x00083505) ncimui_text_pane

0xd34f,	// (0x000835a5) ncimui_text_pane_t1_ParamLimits

0xd34f,	// (0x000835a5) ncimui_text_pane_t1

0x3822,	// (0x00079a78) ncimui_list_single_graphic_pane_ParamLimits

0x3822,	// (0x00079a78) ncimui_list_single_graphic_pane

0xd36e,	// (0x000835c4) ncimui_query_pane_ParamLimits

0xd36e,	// (0x000835c4) ncimui_query_pane

0xe75a,	// (0x000849b0) list_highlight_pane_cp013

0x3832,	// (0x00079a88) ncim_list_query_list_pane_t1_copy1

0x380c,	// (0x00079a62) ncim_list_single_graphic_pane_g1

0x3840,	// (0x00079a96) ncim_query_button_pane_cp01

0x384c,	// (0x00079aa2) ncim_query_entry_pane_ParamLimits

0x384c,	// (0x00079aa2) ncim_query_entry_pane

0x385f,	// (0x00079ab5) ncimui_query_pane_g1

0x386b,	// (0x00079ac1) ncimui_query_pane_t1_ParamLimits

0x386b,	// (0x00079ac1) ncimui_query_pane_t1

0xf0bc,	// (0x00085312) input_focus_pane_cp012

0x3884,	// (0x00079ada) ncim_query_entry_pane_t1

0xeeae,	// (0x00085104) main_im_pane_ParamLimits

0xf0bc,	// (0x00085312) main_mobtv_pane_ParamLimits

0xf0bc,	// (0x00085312) main_mobtv_pane

0xd028,	// (0x0008327e) main_cset6_slider_pane_g18_ParamLimits

0xd028,	// (0x0008327e) main_cset6_slider_pane_g18

0xd034,	// (0x0008328a) main_cset6_slider_pane_g19_ParamLimits

0xd034,	// (0x0008328a) main_cset6_slider_pane_g19

0x2d08,	// (0x00078f5e) bg_main_mobtv_pane_ParamLimits

0x2d08,	// (0x00078f5e) bg_main_mobtv_pane

0xd381,	// (0x000835d7) main_mobtv_info_pane

0xd38c,	// (0x000835e2) main_mobtv_loading_pane_ParamLimits

0xd38c,	// (0x000835e2) main_mobtv_loading_pane

0x3896,	// (0x00079aec) main_mobtv_pg_channel_list_pane

0x38a0,	// (0x00079af6) main_mobtv_pg_hdr_pane

0xd399,	// (0x000835ef) main_mobtv_programe_curr_pane_ParamLimits

0xd399,	// (0x000835ef) main_mobtv_programe_curr_pane

0xd3a6,	// (0x000835fc) main_mobtv_programe_next_pane_ParamLimits

0xd3a6,	// (0x000835fc) main_mobtv_programe_next_pane

0x38a9,	// (0x00079aff) popup_mobtv_noti_window

0x228c,	// (0x000784e2) main_tv_pg_hdr_pane_g1

0x38b1,	// (0x00079b07) main_tv_pg_hdr_pane_g2

0x38b9,	// (0x00079b0f) main_tv_pg_hdr_pane_g3

0x38c1,	// (0x00079b17) main_tv_pg_hdr_pane_g4

0x38c9,	// (0x00079b1f) main_tv_pg_hdr_pane_g5

0x38d3,	// (0x00079b29) main_tv_pg_hdr_pane_g6

0x38dd,	// (0x00079b33) main_tv_pg_hdr_pane_g7

0x38e7,	// (0x00079b3d) main_tv_pg_hdr_pane_g8

0x38f1,	// (0x00079b47) main_tv_pg_hdr_pane_g9

0x38fb,	// (0x00079b51) main_tv_pg_hdr_pane_g10

0x3905,	// (0x00079b5b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00085e5e) main_tv_pg_hdr_pane_g

0x390f,	// (0x00079b65) main_tv_pg_hdr_pane_t1

0x391d,	// (0x00079b73) main_tv_pg_hdr_pane_t2

0x392b,	// (0x00079b81) main_tv_pg_hdr_pane_t3

0x393b,	// (0x00079b91) main_tv_pg_hdr_pane_t4

0x394b,	// (0x00079ba1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00085e75) main_tv_pg_hdr_pane_t

0x395b,	// (0x00079bb1) single_mobtv_pg_channel_pane_ParamLimits

0x395b,	// (0x00079bb1) single_mobtv_pg_channel_pane

0x396d,	// (0x00079bc3) single_mobtv_pg_channel_table_pane

0x3976,	// (0x00079bcc) single_mobtv_pg_channel_thumb_pane

0x397f,	// (0x00079bd5) single_tv_pg_channel_pane_g1

0x3988,	// (0x00079bde) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00085e80) single_tv_pg_channel_pane_g

0x24f8,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x24f8,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane

0x3991,	// (0x00079be7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3991,	// (0x00079be7) single_mobtv_pg_channel_thumb_pane_g1

0x399f,	// (0x00079bf5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x399f,	// (0x00079bf5) single_mobtv_pg_channel_thumb_pane_g2

0x39ab,	// (0x00079c01) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x39ab,	// (0x00079c01) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00085e85) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00085e85) single_mobtv_pg_channel_thumb_pane_g

0x39b7,	// (0x00079c0d) single_mobtv_pg_channel_thumb_pane_t1

0x39c5,	// (0x00079c1b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00085e8c) single_mobtv_pg_channel_thumb_pane_t

0x228c,	// (0x000784e2) bg_single_mobtv_pg_channel_table_pane_g1

0x228c,	// (0x000784e2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00085932) bg_single_mobtv_pg_channel_table_pane_g

0x39d3,	// (0x00079c29) single_mobtv_pg_channel_table_pane_t1

0x39e1,	// (0x00079c37) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00085e91) single_mobtv_pg_channel_table_pane_t

0xd3bb,	// (0x00083611) main_mobtv_info_pane_g1_ParamLimits

0xd3bb,	// (0x00083611) main_mobtv_info_pane_g1

0xd3d7,	// (0x0008362d) main_mobtv_info_pane_t1_ParamLimits

0xd3d7,	// (0x0008362d) main_mobtv_info_pane_t1

0xd44f,	// (0x000836a5) main_mobtv_info_pane_t2_ParamLimits

0xd44f,	// (0x000836a5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00085e9b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00085e9b) main_mobtv_info_pane_t

0xd4de,	// (0x00083734) wait_bar_pane_cp05

0xd4f0,	// (0x00083746) main_mobtv_loading_pane_g1_ParamLimits

0xd4f0,	// (0x00083746) main_mobtv_loading_pane_g1

0xd4fe,	// (0x00083754) main_mobtv_loading_pane_g2_ParamLimits

0xd4fe,	// (0x00083754) main_mobtv_loading_pane_g2

0xd50a,	// (0x00083760) main_mobtv_loading_pane_g3_ParamLimits

0xd50a,	// (0x00083760) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00085ea2) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00085ea2) main_mobtv_loading_pane_g

0x39ef,	// (0x00079c45) main_mobtv_loading_pane_t1_ParamLimits

0x39ef,	// (0x00079c45) main_mobtv_loading_pane_t1

0x3a07,	// (0x00079c5d) main_mobtv_loading_pane_t2_ParamLimits

0x3a07,	// (0x00079c5d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00085ea9) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00085ea9) main_mobtv_loading_pane_t

0xd518,	// (0x0008376e) wait_bar_pane_cp06_ParamLimits

0xd518,	// (0x0008376e) wait_bar_pane_cp06

0x3a2b,	// (0x00079c81) main_mobtv_programe_curr_pane_t1

0x3a39,	// (0x00079c8f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00085eae) main_mobtv_programe_curr_pane_t

0x3a47,	// (0x00079c9d) main_mobtv_programe_next_pane_t1

0x3a55,	// (0x00079cab) main_mobtv_programe_next_pane_t2

0x3a63,	// (0x00079cb9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00085eb3) main_mobtv_programe_next_pane_t

0xe75a,	// (0x000849b0) bg_popup_mobtv_noti_window_pane

0x3a71,	// (0x00079cc7) popup_mobtv_noti_window_g1

0x3a79,	// (0x00079ccf) popup_mobtv_noti_window_t1

0x3a87,	// (0x00079cdd) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00085eba) popup_mobtv_noti_window_t

0x228c,	// (0x000784e2) bg_popup_mobtv_noti_window_pane_g1

0xe75a,	// (0x000849b0) sc_clock_pane

0xe75a,	// (0x000849b0) main_fs_bigclock_pane

0xcbdc,	// (0x00082e32) blid2_tripm_pane_t4_ParamLimits

0xcbdc,	// (0x00082e32) blid2_tripm_pane_t4

0xd524,	// (0x0008377a) sc_clock_pane_g1_ParamLimits

0xd524,	// (0x0008377a) sc_clock_pane_g1

0xd532,	// (0x00083788) sc_clock_pane_t1_ParamLimits

0xd532,	// (0x00083788) sc_clock_pane_t1

0xd545,	// (0x0008379b) sc_clock_pane_t2_ParamLimits

0xd545,	// (0x0008379b) sc_clock_pane_t2

0xd557,	// (0x000837ad) sc_clock_pane_t3_ParamLimits

0xd557,	// (0x000837ad) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00085ebf) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00085ebf) sc_clock_pane_t

0xde54,	// (0x000840aa) main_fs_bigclock_indicator_pane_ParamLimits

0xde54,	// (0x000840aa) main_fs_bigclock_indicator_pane

0xd5e0,	// (0x00083836) main_fs_bigclock_pane_g1_ParamLimits

0xd5e0,	// (0x00083836) main_fs_bigclock_pane_g1

0xde60,	// (0x000840b6) main_fs_bigclock_pane_t1_ParamLimits

0xde60,	// (0x000840b6) main_fs_bigclock_pane_t1

0xde72,	// (0x000840c8) main_fs_bigclock_pane_t2_ParamLimits

0xde72,	// (0x000840c8) main_fs_bigclock_pane_t2

0xde86,	// (0x000840dc) main_fs_bigclock_pane_t3_ParamLimits

0xde86,	// (0x000840dc) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000860c9) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000860c9) main_fs_bigclock_pane_t

0x42c7,	// (0x0007a51d) main_fs_bigclock_indicator_pane_g1

0x3761,	// (0x000799b7) ncim_query_content_pane_g2_ParamLimits

0x3761,	// (0x000799b7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00085e4c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00085e4c) ncim_query_content_pane_g

0xd56b,	// (0x000837c1) sc_clock_pane_t4_ParamLimits

0xd56b,	// (0x000837c1) sc_clock_pane_t4

0xf0bc,	// (0x00085312) main_radioblah_pane

0x2c7b,	// (0x00078ed1) cell_call4_button_pane_t1_copy1_ParamLimits

0x2c7b,	// (0x00078ed1) cell_call4_button_pane_t1_copy1

0xd1f2,	// (0x00083448) main_ncimui_pane_t1_ParamLimits

0xd1f2,	// (0x00083448) main_ncimui_pane_t1

0xd20c,	// (0x00083462) main_ncimui_pane_t2_ParamLimits

0xd20c,	// (0x00083462) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00085e45) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00085e45) main_ncimui_pane_t

0x3bcb,	// (0x00079e21) main_radioblah_anim_pane_ParamLimits

0x3bcb,	// (0x00079e21) main_radioblah_anim_pane

0x3bdc,	// (0x00079e32) main_radioblah_info_pane_ParamLimits

0x3bdc,	// (0x00079e32) main_radioblah_info_pane

0x3bf0,	// (0x00079e46) main_radioblah_pane_t1_ParamLimits

0x3bf0,	// (0x00079e46) main_radioblah_pane_t1

0x3c0c,	// (0x00079e62) main_radioblah_pane_t2_ParamLimits

0x3c0c,	// (0x00079e62) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00085ee0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00085ee0) main_radioblah_pane_t

0xd632,	// (0x00083888) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd632,	// (0x00083888) main_radioblah_rocker_ctrl_pane

0x3c54,	// (0x00079eaa) main_radioblah_info_pane_t1_ParamLimits

0x3c54,	// (0x00079eaa) main_radioblah_info_pane_t1

0xd677,	// (0x000838cd) main_radioblah_info_pane_t2_ParamLimits

0xd677,	// (0x000838cd) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00085ee9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00085ee9) main_radioblah_info_pane_t

0x228c,	// (0x000784e2) main_radioblah_rocker_ctrl_pane_g1

0xd727,	// (0x0008397d) main_radioblah_rocker_ctrl_pane_g2

0xd72f,	// (0x00083985) main_radioblah_rocker_ctrl_pane_g3

0xd737,	// (0x0008398d) main_radioblah_rocker_ctrl_pane_g4

0xd73f,	// (0x00083995) main_radioblah_rocker_ctrl_pane_g5

0xd747,	// (0x0008399d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00085ef2) main_radioblah_rocker_ctrl_pane_g

0xd199,	// (0x000833ef) main_cset_text2_pane_t1_copy1_ParamLimits

0xb9a1,	// (0x00081bf7) cam4_image_uncrop_qvga_pane

0xbae8,	// (0x00081d3e) vid4_image_uncrop_qcif_pane

0xcd6a,	// (0x00082fc0) cam6_image_uncrop_qvga_pane_ParamLimits

0xcd6a,	// (0x00082fc0) cam6_image_uncrop_qvga_pane

0x3424,	// (0x0007967a) vid6_image_uncrop_qcif_pane_ParamLimits

0x3424,	// (0x0007967a) vid6_image_uncrop_qcif_pane

0xe75a,	// (0x000849b0) bg_popup_preview_window_pane_cp03

0x3713,	// (0x00079969) list_cset_text2_pane

0x371b,	// (0x00079971) main_cset6_text2_pane_g1

0x3723,	// (0x00079979) main_cset6_text2_pane_t1

0xd74f,	// (0x000839a5) list_cset_text2_pane_t1_ParamLimits

0xd74f,	// (0x000839a5) list_cset_text2_pane_t1

0xf0bc,	// (0x00085312) main_radioblah_pane_ParamLimits

0xd4ca,	// (0x00083720) main_mobtv_info_pane_t3_ParamLimits

0xd4ca,	// (0x00083720) main_mobtv_info_pane_t3

0xd620,	// (0x00083876) main_radioblah_pane_g1

0xd64b,	// (0x000838a1) main_radioblah_info_pane_g1

0xd6cc,	// (0x00083922) main_radioblah_info_pane_t3_ParamLimits

0xd6cc,	// (0x00083922) main_radioblah_info_pane_t3

0x8964,	// (0x0007ebba) highlight_cell_cale_month_pane_ParamLimits

0x8964,	// (0x0007ebba) highlight_cell_cale_month_pane

0xe75a,	// (0x000849b0) main_phob_fisheye_pane

0x25f4,	// (0x0007884a) scroll_pane_cp0031_ParamLimits

0x25f4,	// (0x0007884a) scroll_pane_cp0031

0x3532,	// (0x00079788) wait_bar_pane_cp08_ParamLimits

0xcf3f,	// (0x00083195) cset_list_set_pane_copy1_ParamLimits

0x3c8e,	// (0x00079ee4) highlight_cell_cale_month_pane_g1

0xd76c,	// (0x000839c2) highlight_cell_cale_month_pane_t1

0x31c7,	// (0x0007941d) list_gen_pane_cp01

0x2e42,	// (0x00079098) scroll_pane_01

0x5cd9,	// (0x0007bf2f) list_single_double_fisheye_pane

0x5ce2,	// (0x0007bf38) list_double_fisheye_pane_g1_ParamLimits

0x5ce2,	// (0x0007bf38) list_double_fisheye_pane_g1

0x5cee,	// (0x0007bf44) list_double_fisheye_pane_g2_ParamLimits

0x5cee,	// (0x0007bf44) list_double_fisheye_pane_g2

0x5d02,	// (0x0007bf58) list_double_fisheye_pane_g3_ParamLimits

0x5d02,	// (0x0007bf58) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00085eff) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00085eff) list_double_fisheye_pane_g

0x5d2b,	// (0x0007bf81) list_double_fisheye_pane_t1_ParamLimits

0x5d2b,	// (0x0007bf81) list_double_fisheye_pane_t1

0x5d46,	// (0x0007bf9c) list_double_fisheye_pane_t2_ParamLimits

0x5d46,	// (0x0007bf9c) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00085f0a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00085f0a) list_double_fisheye_pane_t

0xe75a,	// (0x000849b0) main_call5_pane

0xd591,	// (0x000837e7) sc_swipe_pane_ParamLimits

0xd591,	// (0x000837e7) sc_swipe_pane

0xd786,	// (0x000839dc) call5_image_pane_ParamLimits

0xd786,	// (0x000839dc) call5_image_pane

0xd796,	// (0x000839ec) call5_swipe_1_pane_ParamLimits

0xd796,	// (0x000839ec) call5_swipe_1_pane

0xd7a2,	// (0x000839f8) call5_swipe_2_pane_ParamLimits

0xd7a2,	// (0x000839f8) call5_swipe_2_pane

0xd7bc,	// (0x00083a12) popup_call5_audio_first_window_ParamLimits

0xd7bc,	// (0x00083a12) popup_call5_audio_first_window

0x24f8,	// (0x0007874e) call5_swipe_1_pane_g1_ParamLimits

0x24f8,	// (0x0007874e) call5_swipe_1_pane_g1

0x3c96,	// (0x00079eec) call5_swipe_1_pane_g2_ParamLimits

0x3c96,	// (0x00079eec) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00085f0f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00085f0f) call5_swipe_1_pane_g

0x3ca2,	// (0x00079ef8) call5_swipe_1_pane_t1_ParamLimits

0x3ca2,	// (0x00079ef8) call5_swipe_1_pane_t1

0x24f8,	// (0x0007874e) call5_swipe_2_pane_g1_ParamLimits

0x24f8,	// (0x0007874e) call5_swipe_2_pane_g1

0x3cb7,	// (0x00079f0d) call5_swipe_2_pane_g2_ParamLimits

0x3cb7,	// (0x00079f0d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00085f14) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00085f14) call5_swipe_2_pane_g

0x3cc3,	// (0x00079f19) call5_swipe_2_pane_t1_ParamLimits

0x3cc3,	// (0x00079f19) call5_swipe_2_pane_t1

0x3cd8,	// (0x00079f2e) sc_swipe_pane_g1_ParamLimits

0x3cd8,	// (0x00079f2e) sc_swipe_pane_g1

0x3ce5,	// (0x00079f3b) sc_swipe_pane_g2_ParamLimits

0x3ce5,	// (0x00079f3b) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00085f19) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00085f19) sc_swipe_pane_g

0x3cf1,	// (0x00079f47) sc_swipe_pane_t1_ParamLimits

0x3cf1,	// (0x00079f47) sc_swipe_pane_t1

0xe75a,	// (0x000849b0) main_cmail_launcher_pane

0xd7ca,	// (0x00083a20) aid_size_cell_cmail_l_ParamLimits

0xd7ca,	// (0x00083a20) aid_size_cell_cmail_l

0xd7da,	// (0x00083a30) grid_cmail_l_pane_ParamLimits

0xd7da,	// (0x00083a30) grid_cmail_l_pane

0xd7ea,	// (0x00083a40) cell_cmail_l_pane_ParamLimits

0xd7ea,	// (0x00083a40) cell_cmail_l_pane

0xd7fe,	// (0x00083a54) cell_cmail_l_pane_g1_ParamLimits

0xd7fe,	// (0x00083a54) cell_cmail_l_pane_g1

0xd80a,	// (0x00083a60) cell_cmail_l_pane_t1_ParamLimits

0xd80a,	// (0x00083a60) cell_cmail_l_pane_t1

0x3d06,	// (0x00079f5c) cell_cmail_l_pane_t2_ParamLimits

0x3d06,	// (0x00079f5c) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00085f1e) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00085f1e) cell_cmail_l_pane_t

0xf0bc,	// (0x00085312) grid_highlight_pane_cp018_ParamLimits

0xf0bc,	// (0x00085312) grid_highlight_pane_cp018

0x68c2,	// (0x0007cb18) main2_pane_ParamLimits

0x68c2,	// (0x0007cb18) main2_pane

0xef47,	// (0x0008519d) popup_sp_fs_action_menu_bg_pane_g1

0xef4f,	// (0x000851a5) popup_sp_fs_action_menu_bg_pane_g2

0xef57,	// (0x000851ad) popup_sp_fs_action_menu_bg_pane_g3

0xef5f,	// (0x000851b5) popup_sp_fs_action_menu_bg_pane_g4

0xef67,	// (0x000851bd) popup_sp_fs_action_menu_bg_pane_g5

0xef6f,	// (0x000851c5) popup_sp_fs_action_menu_bg_pane_g6

0xef77,	// (0x000851cd) popup_sp_fs_action_menu_bg_pane_g7

0xef7f,	// (0x000851d5) popup_sp_fs_action_menu_bg_pane_g8

0xef87,	// (0x000851dd) popup_sp_fs_action_menu_bg_pane_g9

0xef8f,	// (0x000851e5) popup_sp_fs_action_menu_bg_pane_g10

0xef8f,	// (0x000851e5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000853e0) popup_sp_fs_action_menu_bg_pane_g

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g3_g1

0x7834,	// (0x0007da8a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_t3_g3_g2

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008548e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008548e) list_medium_line_x2_t3_g3_g

0x5598,	// (0x0007b7ee) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5598,	// (0x0007b7ee) list_medium_line_x2_t3_g3_t1

0x55ad,	// (0x0007b803) list_medium_line_x2_t3_g3_t2_ParamLimits

0x55ad,	// (0x0007b803) list_medium_line_x2_t3_g3_t2

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g3_t3_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00085495) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00085495) list_medium_line_x2_t3_g3_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g2_g1

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008549c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008549c) list_medium_line_x2_t3_g2_g

0x55d4,	// (0x0007b82a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x55d4,	// (0x0007b82a) list_medium_line_x2_t3_g2_t1

0x55ea,	// (0x0007b840) list_medium_line_x2_t3_g2_t2_ParamLimits

0x55ea,	// (0x0007b840) list_medium_line_x2_t3_g2_t2

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g2_t3_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000854a1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000854a1) list_medium_line_x2_t3_g2_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t4_g4_g1

0x7840,	// (0x0007da96) list_medium_line_x2_t4_g4_g2_ParamLimits

0x7840,	// (0x0007da96) list_medium_line_x2_t4_g4_g2

0x7834,	// (0x0007da8a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_t4_g4_g3

0x55fc,	// (0x0007b852) list_medium_line_x2_t4_g4_g4_ParamLimits

0x55fc,	// (0x0007b852) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000854a8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000854a8) list_medium_line_x2_t4_g4_g

0x5608,	// (0x0007b85e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5608,	// (0x0007b85e) list_medium_line_x2_t4_g4_t1

0x5622,	// (0x0007b878) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5622,	// (0x0007b878) list_medium_line_x2_t4_g4_t2

0x5638,	// (0x0007b88e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5638,	// (0x0007b88e) list_medium_line_x2_t4_g4_t3

0x564d,	// (0x0007b8a3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x564d,	// (0x0007b8a3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000854b1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000854b1) list_medium_line_x2_t4_g4_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g4_g1

0x7840,	// (0x0007da96) list_medium_line_x2_t2_g4_g2_ParamLimits

0x7840,	// (0x0007da96) list_medium_line_x2_t2_g4_g2

0x7834,	// (0x0007da8a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_t2_g4_g3

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00085518) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00085518) list_medium_line_x2_t2_g4_g

0x565f,	// (0x0007b8b5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x565f,	// (0x0007b8b5) list_medium_line_x2_t2_g4_t1

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g4_t2_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00085521) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00085521) list_medium_line_x2_t2_g4_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g3_g1

0x7834,	// (0x0007da8a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_t2_g3_g2

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008548e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008548e) list_medium_line_x2_t2_g3_g

0x5674,	// (0x0007b8ca) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5674,	// (0x0007b8ca) list_medium_line_x2_t2_g3_t1

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g3_t2_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00085526) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00085526) list_medium_line_x2_t2_g3_t

0x8b3c,	// (0x0007ed92) main_sp_fs_list_pane_ParamLimits

0x8b3c,	// (0x0007ed92) main_sp_fs_list_pane

0x8b48,	// (0x0007ed9e) sp_fs_scroll_pane_ParamLimits

0x8b48,	// (0x0007ed9e) sp_fs_scroll_pane

0x5689,	// (0x0007b8df) list_medium_line_x2_t3_t1

0x5699,	// (0x0007b8ef) list_medium_line_x2_t3_t2

0x56a7,	// (0x0007b8fd) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00085571) list_medium_line_x2_t3_t

0x56b5,	// (0x0007b90b) list_medium_line_x3_t4_t1

0x56c5,	// (0x0007b91b) list_medium_line_x3_t4_t2

0x56d3,	// (0x0007b929) list_medium_line_x3_t4_t3

0x56a7,	// (0x0007b8fd) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00085578) list_medium_line_x3_t4_t

0x56e1,	// (0x0007b937) list_medium_line_x4_t5_t1

0x56f1,	// (0x0007b947) list_medium_line_x4_t5_t2

0x56d3,	// (0x0007b929) list_medium_line_x4_t5_t3

0x56ff,	// (0x0007b955) list_medium_line_x4_t5_t4

0x56a7,	// (0x0007b8fd) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00085581) list_medium_line_x4_t5_t

0x5580,	// (0x0007b7d6) list_medium_line_t4_g4_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_t4_g4_g1

0x570d,	// (0x0007b963) list_medium_line_t4_g4_g2_ParamLimits

0x570d,	// (0x0007b963) list_medium_line_t4_g4_g2

0x5719,	// (0x0007b96f) list_medium_line_t4_g4_g3_ParamLimits

0x5719,	// (0x0007b96f) list_medium_line_t4_g4_g3

0x558c,	// (0x0007b7e2) list_medium_line_t4_g4_g4_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008558c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008558c) list_medium_line_t4_g4_g

0x5725,	// (0x0007b97b) list_medium_line_t4_g4_t1_ParamLimits

0x5725,	// (0x0007b97b) list_medium_line_t4_g4_t1

0x573a,	// (0x0007b990) list_medium_line_t4_g4_t2_ParamLimits

0x573a,	// (0x0007b990) list_medium_line_t4_g4_t2

0x574f,	// (0x0007b9a5) list_medium_line_t4_g4_t3_ParamLimits

0x574f,	// (0x0007b9a5) list_medium_line_t4_g4_t3

0x55bf,	// (0x0007b815) list_medium_line_t4_g4_t4_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00085595) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00085595) list_medium_line_t4_g4_t

0x8c55,	// (0x0007eeab) chi_dic_find_pane_g1

0x9ac4,	// (0x0007fd1a) main_tport_pane

0x59ab,	// (0x0007bc01) list_medium_line_plain_t1

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g2_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g2_g1

0xc52a,	// (0x00082780) list_medium_line_t2_g2_g2_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00085c56) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00085c56) list_medium_line_t2_g2_g

0x59c5,	// (0x0007bc1b) list_medium_line_t2_g2_t1_ParamLimits

0x59c5,	// (0x0007bc1b) list_medium_line_t2_g2_t1

0x59df,	// (0x0007bc35) list_medium_line_t2_g2_t2_ParamLimits

0x59df,	// (0x0007bc35) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00085c5b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00085c5b) list_medium_line_t2_g2_t

0x5bff,	// (0x0007be55) aid_sp_fs_list_icon_a_sm

0xca33,	// (0x00082c89) aid_sp_fs_list_icon_d

0x003a,	// (0x00076290) aid_sp_fs_text_primary

0x5c07,	// (0x0007be5d) aid_sp_fs_text_secondary

0xca3b,	// (0x00082c91) list_medium_line

0xca3b,	// (0x00082c91) list_medium_line_g2

0xca3b,	// (0x00082c91) list_medium_line_g3

0xca3b,	// (0x00082c91) list_medium_line_plain

0xca3b,	// (0x00082c91) list_medium_line_plain_t2

0xca3b,	// (0x00082c91) list_medium_line_plain_t3

0xca3b,	// (0x00082c91) list_medium_line_right_icon

0xca3b,	// (0x00082c91) list_medium_line_right_iconx2

0xca3b,	// (0x00082c91) list_medium_line_t2

0xca3b,	// (0x00082c91) list_medium_line_t2_g2

0xca3b,	// (0x00082c91) list_medium_line_t2_g3

0xca3b,	// (0x00082c91) list_medium_line_t2_right_icon

0xca3b,	// (0x00082c91) list_medium_line_t2_right_iconx2

0xca3b,	// (0x00082c91) list_medium_line_t3

0xca3b,	// (0x00082c91) list_medium_line_t3_g2

0xca3b,	// (0x00082c91) list_medium_line_t3_g3

0xca3b,	// (0x00082c91) list_medium_line_t3_right_iconx2

0xca44,	// (0x00082c9a) list_medium_line_t4_g4

0xec15,	// (0x00084e6b) list_medium_line_x2

0xec15,	// (0x00084e6b) list_medium_line_x2_t2_g2

0xec15,	// (0x00084e6b) list_medium_line_x2_t2_g3

0xec15,	// (0x00084e6b) list_medium_line_x2_t2_g4

0xec15,	// (0x00084e6b) list_medium_line_x2_t3

0xec15,	// (0x00084e6b) list_medium_line_x2_t3_g2

0xec15,	// (0x00084e6b) list_medium_line_x2_t3_g3

0xec15,	// (0x00084e6b) list_medium_line_x2_t3_g4

0xec15,	// (0x00084e6b) list_medium_line_x2_t4_g2

0xec15,	// (0x00084e6b) list_medium_line_x2_t4_g4

0xca4d,	// (0x00082ca3) list_medium_line_x3

0xca4d,	// (0x00082ca3) list_medium_line_x3_t4

0xca4d,	// (0x00082ca3) list_medium_line_x3_t4_g4

0xca44,	// (0x00082c9a) list_medium_line_x4_t4

0xca44,	// (0x00082c9a) list_medium_line_x4_t4_g7

0xca44,	// (0x00082c9a) list_medium_line_x4_t5

0x5c10,	// (0x0007be66) list_single_fs_dyc_pane_ParamLimits

0x5c10,	// (0x0007be66) list_single_fs_dyc_pane

0x5580,	// (0x0007b7d6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x4_t4_g7_g1

0x5c24,	// (0x0007be7a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5c24,	// (0x0007be7a) list_medium_line_x4_t4_g7_g2

0xd17e,	// (0x000833d4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd17e,	// (0x000833d4) list_medium_line_x4_t4_g7_g3

0xd18d,	// (0x000833e3) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd18d,	// (0x000833e3) list_medium_line_x4_t4_g7_g4

0x5c30,	// (0x0007be86) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5c30,	// (0x0007be86) list_medium_line_x4_t4_g7_g5

0x5c3f,	// (0x0007be95) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5c3f,	// (0x0007be95) list_medium_line_x4_t4_g7_g6

0x5c4e,	// (0x0007bea4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5c4e,	// (0x0007bea4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00085e26) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00085e26) list_medium_line_x4_t4_g7_g

0x5c5a,	// (0x0007beb0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5c5a,	// (0x0007beb0) list_medium_line_x4_t4_g7_t1

0x5c6f,	// (0x0007bec5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5c6f,	// (0x0007bec5) list_medium_line_x4_t4_g7_t2

0x5c84,	// (0x0007beda) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5c84,	// (0x0007beda) list_medium_line_x4_t4_g7_t3

0x5c99,	// (0x0007beef) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5c99,	// (0x0007beef) list_medium_line_x4_t4_g7_t4

0x5cab,	// (0x0007bf01) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5cab,	// (0x0007bf01) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00085e35) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00085e35) list_medium_line_x4_t4_g7_t

0x5cbd,	// (0x0007bf13) list_single_dyc_row_pane_ParamLimits

0x5cbd,	// (0x0007bf13) list_single_dyc_row_pane

0xd77a,	// (0x000839d0) call5_gesture_pane_ParamLimits

0xd77a,	// (0x000839d0) call5_gesture_pane

0xd7ae,	// (0x00083a04) call5_windows_pane_ParamLimits

0xd7ae,	// (0x00083a04) call5_windows_pane

0xd820,	// (0x00083a76) call5_swipe_1_pane_cp_ParamLimits

0xd820,	// (0x00083a76) call5_swipe_1_pane_cp

0xd82c,	// (0x00083a82) call5_swipe_2_pane_cp_ParamLimits

0xd82c,	// (0x00083a82) call5_swipe_2_pane_cp

0xf073,	// (0x000852c9) call5_image_pane_cp

0xd838,	// (0x00083a8e) popup_call5_audio_first_window_cp_ParamLimits

0xd838,	// (0x00083a8e) popup_call5_audio_first_window_cp

0x3cd8,	// (0x00079f2e) call5_swipe_1_pane_g1_cp_ParamLimits

0x3cd8,	// (0x00079f2e) call5_swipe_1_pane_g1_cp

0x3d18,	// (0x00079f6e) call5_swipe_1_pane_g2_cp

0x3cf1,	// (0x00079f47) call5_swipe_1_pane_t1_cp_ParamLimits

0x3cf1,	// (0x00079f47) call5_swipe_1_pane_t1_cp

0x3cd8,	// (0x00079f2e) call5_swipe_2_pane_g1_cp_ParamLimits

0x3cd8,	// (0x00079f2e) call5_swipe_2_pane_g1_cp

0x3d20,	// (0x00079f76) call5_swipe_2_pane_g2_cp

0x3d28,	// (0x00079f7e) call5_swipe_2_pane_t1_cp_ParamLimits

0x3d28,	// (0x00079f7e) call5_swipe_2_pane_t1_cp

0xf0bc,	// (0x00085312) main_sp_fs_email_pane

0x3d3d,	// (0x00079f93) main_sp_fs_listscroll_pane_te

0xd846,	// (0x00083a9c) popup_sp_fs_action_menu_pane_ParamLimits

0xd846,	// (0x00083a9c) popup_sp_fs_action_menu_pane

0x228c,	// (0x000784e2) bg_sp_fs_ctrlbar_pane_g1

0x3d46,	// (0x00079f9c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d4f,	// (0x00079fa5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3d58,	// (0x00079fae) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x228c,	// (0x000784e2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00085f23) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2065,	// (0x000782bb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2065,	// (0x000782bb) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d61,	// (0x00079fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d61,	// (0x00079fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d6d,	// (0x00079fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3d6d,	// (0x00079fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00085f2c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00085f2c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d79,	// (0x00079fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d79,	// (0x00079fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd88a,	// (0x00083ae0) list_medium_line_t2_right_icon_g1

0x5d68,	// (0x0007bfbe) list_medium_line_t2_right_icon_t1

0x5d78,	// (0x0007bfce) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00085f31) list_medium_line_t2_right_icon_t

0x1e78,	// (0x000780ce) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1e78,	// (0x000780ce) bg_sp_fs_ctrlbar_pane

0xd8e9,	// (0x00083b3f) main_sp_fs_ctrlbar_button_pane_cp01

0xd8f1,	// (0x00083b47) main_sp_fs_ctrlbar_ddmenu_pane

0x3dcb,	// (0x0007a021) main_sp_fs_ctrlbar_pane_g1

0x3dd7,	// (0x0007a02d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00085f36) main_sp_fs_ctrlbar_pane_g

0x3de3,	// (0x0007a039) main_sp_fs_ctrlbar_pane_t1

0xd8fb,	// (0x00083b51) main_sp_fs_ctrlbar_pane

0xd911,	// (0x00083b67) main_sp_fs_listscroll_pane_te_cp01

0x5d86,	// (0x0007bfdc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5d86,	// (0x0007bfdc) popup_sp_fs_action_menu_pane_cp01

0xf0bc,	// (0x00085312) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0bc,	// (0x00085312) bg_sp_fs_highlight_list_pane_cp01

0x5db0,	// (0x0007c006) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5db0,	// (0x0007c006) sp_fs_action_menu_list_gene_pane_g1

0x3e13,	// (0x0007a069) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3e13,	// (0x0007a069) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00085f40) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00085f40) sp_fs_action_menu_list_gene_pane_g

0x5dbf,	// (0x0007c015) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5dbf,	// (0x0007c015) sp_fs_action_menu_list_gene_pane_t1

0x5dd7,	// (0x0007c02d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5dd7,	// (0x0007c02d) sp_fs_action_menu_list_gene_pane

0x3e20,	// (0x0007a076) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3e20,	// (0x0007a076) popup_sp_fs_action_menu_bg_pane

0x5df8,	// (0x0007c04e) sp_fs_action_menu_list_pane_ParamLimits

0x5df8,	// (0x0007c04e) sp_fs_action_menu_list_pane

0xd922,	// (0x00083b78) sp_fs_scroll_pane_cp01_ParamLimits

0xd922,	// (0x00083b78) sp_fs_scroll_pane_cp01

0x5e1a,	// (0x0007c070) list_medium_line_plain_t2_t1

0x5e2a,	// (0x0007c080) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00085f45) list_medium_line_plain_t2_t

0x5e38,	// (0x0007c08e) list_medium_line_plain_t3_t1

0x5e48,	// (0x0007c09e) list_medium_line_plain_t3_t2

0x5e56,	// (0x0007c0ac) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00085f4a) list_medium_line_plain_t3_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t2_g2_g1

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008549c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008549c) list_medium_line_x2_t2_g2_g

0x5725,	// (0x0007b97b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5725,	// (0x0007b97b) list_medium_line_x2_t2_g2_t1

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g2_t2_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00085f51) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00085f51) list_medium_line_x2_t2_g2_t

0x5580,	// (0x0007b7d6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t4_g2_g1

0x5e64,	// (0x0007c0ba) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5e64,	// (0x0007c0ba) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00085f56) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00085f56) list_medium_line_x2_t4_g2_g

0x5e76,	// (0x0007c0cc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5e76,	// (0x0007c0cc) list_medium_line_x2_t4_g2_t1

0x5e8d,	// (0x0007c0e3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5e8d,	// (0x0007c0e3) list_medium_line_x2_t4_g2_t2

0x5ea2,	// (0x0007c0f8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5ea2,	// (0x0007c0f8) list_medium_line_x2_t4_g2_t3

0x55bf,	// (0x0007b815) list_medium_line_x2_t4_g2_t4_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00085f5b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00085f5b) list_medium_line_x2_t4_g2_t

0xd948,	// (0x00083b9e) list_medium_line_t3_right_iconx2_g1

0xd88a,	// (0x00083ae0) list_medium_line_t3_right_iconx2_g2

0x5eb4,	// (0x0007c10a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00085f64) list_medium_line_t3_right_iconx2_g

0x5ebc,	// (0x0007c112) list_medium_line_t3_right_iconx2_t1

0x5ecc,	// (0x0007c122) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00085f6b) list_medium_line_t3_right_iconx2_t

0x5580,	// (0x0007b7d6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x3_t4_g4_g1

0x7834,	// (0x0007da8a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x3_t4_g4_g2

0x570d,	// (0x0007b963) list_medium_line_x3_t4_g4_g3_ParamLimits

0x570d,	// (0x0007b963) list_medium_line_x3_t4_g4_g3

0xd950,	// (0x00083ba6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd950,	// (0x00083ba6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00085f70) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00085f70) list_medium_line_x3_t4_g4_g

0x5eda,	// (0x0007c130) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5eda,	// (0x0007c130) list_medium_line_x3_t4_g4_t1

0x5ef1,	// (0x0007c147) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5ef1,	// (0x0007c147) list_medium_line_x3_t4_g4_t2

0x573a,	// (0x0007b990) list_medium_line_x3_t4_g4_t3_ParamLimits

0x573a,	// (0x0007b990) list_medium_line_x3_t4_g4_t3

0x5f06,	// (0x0007c15c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5f06,	// (0x0007c15c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00085f79) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00085f79) list_medium_line_x3_t4_g4_t

0x5f23,	// (0x0007c179) list_single_dyc_row_text_pane_t1_ParamLimits

0x5f23,	// (0x0007c179) list_single_dyc_row_text_pane_t1

0x5f5a,	// (0x0007c1b0) list_single_dyc_row_text_pane_t2_ParamLimits

0x5f5a,	// (0x0007c1b0) list_single_dyc_row_text_pane_t2

0x5fd0,	// (0x0007c226) list_single_dyc_row_text_pane_t3_ParamLimits

0x5fd0,	// (0x0007c226) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00085f82) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00085f82) list_single_dyc_row_text_pane_t

0x60a1,	// (0x0007c2f7) list_single_dyc_row_pane_g1_ParamLimits

0x60a1,	// (0x0007c2f7) list_single_dyc_row_pane_g1

0x60ad,	// (0x0007c303) list_single_dyc_row_pane_g2_ParamLimits

0x60ad,	// (0x0007c303) list_single_dyc_row_pane_g2

0x60b9,	// (0x0007c30f) list_single_dyc_row_pane_g3_ParamLimits

0x60b9,	// (0x0007c30f) list_single_dyc_row_pane_g3

0x60c5,	// (0x0007c31b) list_single_dyc_row_pane_g4_ParamLimits

0x60c5,	// (0x0007c31b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00085f8f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00085f8f) list_single_dyc_row_pane_g

0x60d1,	// (0x0007c327) list_single_dyc_row_text_pane_ParamLimits

0x60d1,	// (0x0007c327) list_single_dyc_row_text_pane

0xe75a,	// (0x000849b0) bg_sp_fs_scroll_pane

0x3e2e,	// (0x0007a084) thumb_sp_fs_scroll_pane

0x59b9,	// (0x0007bc0f) list_medium_line_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_g1

0x60f0,	// (0x0007c346) list_medium_line_t1_ParamLimits

0x60f0,	// (0x0007c346) list_medium_line_t1

0x5580,	// (0x0007b7d6) list_medium_line_x2_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_g1

0x7834,	// (0x0007da8a) list_medium_line_x2_g2_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00085f98) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00085f98) list_medium_line_x2_g

0x6105,	// (0x0007c35b) list_medium_line_x2_t1_ParamLimits

0x6105,	// (0x0007c35b) list_medium_line_x2_t1

0x5580,	// (0x0007b7d6) list_medium_line_x3_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x3_g1

0x7834,	// (0x0007da8a) list_medium_line_x3_g2_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00085f98) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00085f98) list_medium_line_x3_g

0x6105,	// (0x0007c35b) list_medium_line_x3_t1_ParamLimits

0x6105,	// (0x0007c35b) list_medium_line_x3_t1

0x3e37,	// (0x0007a08d) thumb_sp_fs_scroll_pane_g1

0x3e40,	// (0x0007a096) thumb_sp_fs_scroll_pane_g2

0x3e49,	// (0x0007a09f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f9d) thumb_sp_fs_scroll_pane_g

0x3e37,	// (0x0007a08d) bg_sp_fs_scroll_pane_g1

0x3e40,	// (0x0007a096) bg_sp_fs_scroll_pane_g2

0x3e49,	// (0x0007a09f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f9d) bg_sp_fs_scroll_pane_g

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5580,	// (0x0007b7d6) list_medium_line_x2_t3_g4_g1

0x7840,	// (0x0007da96) list_medium_line_x2_t3_g4_g2_ParamLimits

0x7840,	// (0x0007da96) list_medium_line_x2_t3_g4_g2

0x7834,	// (0x0007da8a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x7834,	// (0x0007da8a) list_medium_line_x2_t3_g4_g3

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x558c,	// (0x0007b7e2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00085518) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00085518) list_medium_line_x2_t3_g4_g

0x611b,	// (0x0007c371) list_medium_line_x2_t3_g4_t1_ParamLimits

0x611b,	// (0x0007c371) list_medium_line_x2_t3_g4_t1

0x6131,	// (0x0007c387) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6131,	// (0x0007c387) list_medium_line_x2_t3_g4_t2

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g4_t3_ParamLimits

0x55bf,	// (0x0007b815) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00085fa4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00085fa4) list_medium_line_x2_t3_g4_t

0x59b9,	// (0x0007bc0f) list_medium_line_g2_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_g2_g1

0xc52a,	// (0x00082780) list_medium_line_g2_g2_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00085c56) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00085c56) list_medium_line_g2_g

0x614a,	// (0x0007c3a0) list_medium_line_g2_t1_ParamLimits

0x614a,	// (0x0007c3a0) list_medium_line_g2_t1

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g2_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g2_g1

0xc52a,	// (0x00082780) list_medium_line_t3_g2_g2_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00085c56) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00085c56) list_medium_line_t3_g2_g

0x615f,	// (0x0007c3b5) list_medium_line_t3_g2_t1_ParamLimits

0x615f,	// (0x0007c3b5) list_medium_line_t3_g2_t1

0x6176,	// (0x0007c3cc) list_medium_line_t3_g2_t2_ParamLimits

0x6176,	// (0x0007c3cc) list_medium_line_t3_g2_t2

0x618b,	// (0x0007c3e1) list_medium_line_t3_g2_t3_ParamLimits

0x618b,	// (0x0007c3e1) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00085fab) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00085fab) list_medium_line_t3_g2_t

0xd88a,	// (0x00083ae0) list_medium_line_right_icon_g1

0x61a0,	// (0x0007c3f6) list_medium_line_right_icon_t1

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g1

0x61ae,	// (0x0007c404) list_medium_line_t2_t1_ParamLimits

0x61ae,	// (0x0007c404) list_medium_line_t2_t1

0x61c8,	// (0x0007c41e) list_medium_line_t2_t2_ParamLimits

0x61c8,	// (0x0007c41e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00085fb2) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00085fb2) list_medium_line_t2_t

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g1

0x61dd,	// (0x0007c433) list_medium_line_t3_t1_ParamLimits

0x61dd,	// (0x0007c433) list_medium_line_t3_t1

0x61f7,	// (0x0007c44d) list_medium_line_t3_t2_ParamLimits

0x61f7,	// (0x0007c44d) list_medium_line_t3_t2

0x620d,	// (0x0007c463) list_medium_line_t3_t3_ParamLimits

0x620d,	// (0x0007c463) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00085fb7) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00085fb7) list_medium_line_t3_t

0x59b9,	// (0x0007bc0f) list_medium_line_g3_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_g3_g1

0xd95c,	// (0x00083bb2) list_medium_line_g3_g2_ParamLimits

0xd95c,	// (0x00083bb2) list_medium_line_g3_g2

0xc52a,	// (0x00082780) list_medium_line_g3_g3_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00085fbe) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00085fbe) list_medium_line_g3_g

0x6222,	// (0x0007c478) list_medium_line_g3_t1_ParamLimits

0x6222,	// (0x0007c478) list_medium_line_g3_t1

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g3_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t2_g3_g1

0xd95c,	// (0x00083bb2) list_medium_line_t2_g3_g2_ParamLimits

0xd95c,	// (0x00083bb2) list_medium_line_t2_g3_g2

0xc52a,	// (0x00082780) list_medium_line_t2_g3_g3_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00085fbe) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00085fbe) list_medium_line_t2_g3_g

0x6237,	// (0x0007c48d) list_medium_line_t2_g3_t1_ParamLimits

0x6237,	// (0x0007c48d) list_medium_line_t2_g3_t1

0x6251,	// (0x0007c4a7) list_medium_line_t2_g3_t2_ParamLimits

0x6251,	// (0x0007c4a7) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00085fc5) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00085fc5) list_medium_line_t2_g3_t

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g3_g1_ParamLimits

0x59b9,	// (0x0007bc0f) list_medium_line_t3_g3_g1

0xd95c,	// (0x00083bb2) list_medium_line_t3_g3_g2_ParamLimits

0xd95c,	// (0x00083bb2) list_medium_line_t3_g3_g2

0xc52a,	// (0x00082780) list_medium_line_t3_g3_g3_ParamLimits

0xc52a,	// (0x00082780) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00085fbe) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00085fbe) list_medium_line_t3_g3_g

0x6267,	// (0x0007c4bd) list_medium_line_t3_g3_t1_ParamLimits

0x6267,	// (0x0007c4bd) list_medium_line_t3_g3_t1

0x627b,	// (0x0007c4d1) list_medium_line_t3_g3_t2_ParamLimits

0x627b,	// (0x0007c4d1) list_medium_line_t3_g3_t2

0x628d,	// (0x0007c4e3) list_medium_line_t3_g3_t3_ParamLimits

0x628d,	// (0x0007c4e3) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00085fca) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00085fca) list_medium_line_t3_g3_t

0xd948,	// (0x00083b9e) list_medium_line_right_iconx2_g1

0xd88a,	// (0x00083ae0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085fd1) list_medium_line_right_iconx2_g

0xd968,	// (0x00083bbe) list_medium_line_right_iconx2_t1

0xd948,	// (0x00083b9e) list_medium_line_t2_right_iconx2_g1

0xd88a,	// (0x00083ae0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085fd1) list_medium_line_t2_right_iconx2_g

0x629f,	// (0x0007c4f5) list_medium_line_t2_right_iconx2_t1

0x62af,	// (0x0007c505) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00085fd6) list_medium_line_t2_right_iconx2_t

0x62bd,	// (0x0007c513) list_medium_line_x4_t4_t1

0x62cb,	// (0x0007c521) list_medium_line_x4_t4_t2

0x62db,	// (0x0007c531) list_medium_line_x4_t4_t3

0x62eb,	// (0x0007c541) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00085fdb) list_medium_line_x4_t4_t

0xd9a0,	// (0x00083bf6) tport_appsw_pane_ParamLimits

0xd9a0,	// (0x00083bf6) tport_appsw_pane

0xd9ae,	// (0x00083c04) tport_contact_pane_ParamLimits

0xd9ae,	// (0x00083c04) tport_contact_pane

0xd9be,	// (0x00083c14) tport_listscroll_pane_ParamLimits

0xd9be,	// (0x00083c14) tport_listscroll_pane

0xd9ce,	// (0x00083c24) cell_tport_appsw_pane_ParamLimits

0xd9ce,	// (0x00083c24) cell_tport_appsw_pane

0x257d,	// (0x000787d3) tport_appsw_pane_g1_ParamLimits

0x257d,	// (0x000787d3) tport_appsw_pane_g1

0x3e52,	// (0x0007a0a8) tport_contact_pane_g1

0x37e7,	// (0x00079a3d) tport_contact_pane_t1

0x3e5b,	// (0x0007a0b1) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00085fe4) tport_contact_pane_t

0x3e69,	// (0x0007a0bf) list_tport_pane

0x3e72,	// (0x0007a0c8) scroll_pane_cp_030

0xda01,	// (0x00083c57) cell_tport_appsw_pane_g1

0xda11,	// (0x00083c67) cell_tport_appsw_pane_t1

0xda1f,	// (0x00083c75) grid_highlight_pane_cp019

0xda27,	// (0x00083c7d) list_tport_double_graphic_pane_ParamLimits

0xda27,	// (0x00083c7d) list_tport_double_graphic_pane

0xf0bc,	// (0x00085312) list_highlight_pane_cp023_ParamLimits

0xf0bc,	// (0x00085312) list_highlight_pane_cp023

0xda38,	// (0x00083c8e) list_tport_double_graphic_pane_g1_ParamLimits

0xda38,	// (0x00083c8e) list_tport_double_graphic_pane_g1

0xda45,	// (0x00083c9b) list_tport_double_graphic_pane_t1_ParamLimits

0xda45,	// (0x00083c9b) list_tport_double_graphic_pane_t1

0xda5a,	// (0x00083cb0) list_tport_double_graphic_pane_t2_ParamLimits

0xda5a,	// (0x00083cb0) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00085ff0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00085ff0) list_tport_double_graphic_pane_t

0xe75a,	// (0x000849b0) main_cale_note_pane

0xbd49,	// (0x00081f9f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbd49,	// (0x00081f9f) cell_vitu2_function_top_wide_pane_cp01

0xd4de,	// (0x00083734) wait_bar_pane_cp05_ParamLimits

0xf0bc,	// (0x00085312) listscroll_cmail_pane

0x3e7b,	// (0x0007a0d1) list_cmail_pane

0xda6c,	// (0x00083cc2) list_cmail_body_pane

0xda8c,	// (0x00083ce2) list_single_cmail_header_caption_pane

0xdab7,	// (0x00083d0d) list_single_cmail_header_detail_pane_ParamLimits

0xdab7,	// (0x00083d0d) list_single_cmail_header_detail_pane

0x3e8b,	// (0x0007a0e1) list_single_cmail_header_caption_pane_t1

0x62fb,	// (0x0007c551) list_single_cmail_header_detail_pane_g1_ParamLimits

0x62fb,	// (0x0007c551) list_single_cmail_header_detail_pane_g1

0xdaed,	// (0x00083d43) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdaed,	// (0x00083d43) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00085ff5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00085ff5) list_single_cmail_header_detail_pane_g

0x6311,	// (0x0007c567) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6311,	// (0x0007c567) list_single_cmail_header_detail_pane_t1

0x6371,	// (0x0007c5c7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6371,	// (0x0007c5c7) list_single_cmail_header_editor_pane_bg

0x3988,	// (0x00079bde) list_cmail_body_pane_g1

0x3eaf,	// (0x0007a105) list_cmail_body_pane_t1

0x2d28,	// (0x00078f7e) list_single_cmail_header_editor_pane_bg_g1

0x026d,	// (0x000764c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2d38,	// (0x00078f8e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2d30,	// (0x00078f86) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2f4c,	// (0x000791a2) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2d58,	// (0x00078fae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2d48,	// (0x00078f9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2d50,	// (0x00078fa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x024d,	// (0x000764a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdaf9,	// (0x00083d4f) calenote_gesture_pane_ParamLimits

0xdaf9,	// (0x00083d4f) calenote_gesture_pane

0xdb13,	// (0x00083d69) calenote_window_pane_ParamLimits

0xdb13,	// (0x00083d69) calenote_window_pane

0x3ebd,	// (0x0007a113) popup_note_window_cp01

0xdb2b,	// (0x00083d81) calenote_swipe_1_pane_ParamLimits

0xdb2b,	// (0x00083d81) calenote_swipe_1_pane

0xd82c,	// (0x00083a82) calenote_swipe_2_pane_ParamLimits

0xd82c,	// (0x00083a82) calenote_swipe_2_pane

0x3cd8,	// (0x00079f2e) calenote_swipe_1_pane_g1_ParamLimits

0x3cd8,	// (0x00079f2e) calenote_swipe_1_pane_g1

0x3ce5,	// (0x00079f3b) calenote_swipe_1_pane_g2_ParamLimits

0x3ce5,	// (0x00079f3b) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00085f19) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00085f19) calenote_swipe_1_pane_g

0x3ecf,	// (0x0007a125) calenote_swipe_1_pane_t1_ParamLimits

0x3ecf,	// (0x0007a125) calenote_swipe_1_pane_t1

0x3cd8,	// (0x00079f2e) calenote_swipe_2_pane_g1_ParamLimits

0x3cd8,	// (0x00079f2e) calenote_swipe_2_pane_g1

0x3eee,	// (0x0007a144) calenote_swipe_2_pane_g2_ParamLimits

0x3eee,	// (0x0007a144) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00086001) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00086001) calenote_swipe_2_pane_g

0x3efa,	// (0x0007a150) calenote_swipe_2_pane_t1_ParamLimits

0x3efa,	// (0x0007a150) calenote_swipe_2_pane_t1

0xe75a,	// (0x000849b0) main_mup_navstr_pane

0xaac4,	// (0x00080d1a) main_mup3_pane_t7_ParamLimits

0xaac4,	// (0x00080d1a) main_mup3_pane_t7

0xb4c9,	// (0x0008171f) main_mp4_pane_g6_ParamLimits

0xb4c9,	// (0x0008171f) main_mp4_pane_g6

0xb83b,	// (0x00081a91) main_image3_pane_t4_ParamLimits

0xb83b,	// (0x00081a91) main_image3_pane_t4

0xdb3e,	// (0x00083d94) popup_navstr_preview_pane_ParamLimits

0xdb3e,	// (0x00083d94) popup_navstr_preview_pane

0xdb4a,	// (0x00083da0) scroll_navstr_pane_ParamLimits

0xdb4a,	// (0x00083da0) scroll_navstr_pane

0xe75a,	// (0x000849b0) bg_popup_preview_window_pane_cp04

0x3f21,	// (0x0007a177) popup_navstr_preview_pane_t1

0xdb56,	// (0x00083dac) scroll_navstr_pane_g1_ParamLimits

0xdb56,	// (0x00083dac) scroll_navstr_pane_g1

0xdb63,	// (0x00083db9) scroll_navstr_pane_t1_ParamLimits

0xdb63,	// (0x00083db9) scroll_navstr_pane_t1

0x3ec6,	// (0x0007a11c) bg_button_pane_cp014

0x3ec6,	// (0x0007a11c) bg_button_pane_cp030

0x5d0e,	// (0x0007bf64) list_double_fisheye_pane_g4_ParamLimits

0x5d0e,	// (0x0007bf64) list_double_fisheye_pane_g4

0x5d1a,	// (0x0007bf70) list_double_fisheye_pane_g5_ParamLimits

0x5d1a,	// (0x0007bf70) list_double_fisheye_pane_g5

0x20da,	// (0x00078330) sp_fs_scroll_pane_cp03

0x3dcb,	// (0x0007a021) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3dd7,	// (0x0007a02d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00085f36) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3de3,	// (0x0007a039) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3e83,	// (0x0007a0d9) sp_fs_scroll_pane_cp02

0xefb2,	// (0x00085208) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xefb2,	// (0x00085208) popup_sp_fs_calendar_preview_list_single_pane

0xe75a,	// (0x000849b0) main_cam6_pano_pane

0xf0bc,	// (0x00085312) main_mup3_pane_ParamLimits

0xe75a,	// (0x000849b0) main_phacti_pane

0xd3b3,	// (0x00083609) bg_button_pane_cp11

0xd3cb,	// (0x00083621) main_mobtv_info_pane_g2_ParamLimits

0xd3cb,	// (0x00083621) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00085e96) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00085e96) main_mobtv_info_pane_g

0xd57d,	// (0x000837d3) sc_clock_pane_t5_ParamLimits

0xd57d,	// (0x000837d3) sc_clock_pane_t5

0xd620,	// (0x00083876) main_radioblah_pane_g1_ParamLimits

0x3c24,	// (0x00079e7a) main_radioblah_pane_t3_ParamLimits

0x3c24,	// (0x00079e7a) main_radioblah_pane_t3

0x3c3c,	// (0x00079e92) main_radioblah_pane_t4_ParamLimits

0x3c3c,	// (0x00079e92) main_radioblah_pane_t4

0xd63e,	// (0x00083894) main_radioblah_text_pane_ParamLimits

0xd63e,	// (0x00083894) main_radioblah_text_pane

0xd64b,	// (0x000838a1) main_radioblah_info_pane_g1_ParamLimits

0xd6e0,	// (0x00083936) main_radioblah_info_pane_t4_ParamLimits

0xd6e0,	// (0x00083936) main_radioblah_info_pane_t4

0xf0bc,	// (0x00085312) main_sp_fs_calendar_pane

0xdb75,	// (0x00083dcb) main_phacti_pane_g1

0xdb7d,	// (0x00083dd3) phacti_note_pane_ParamLimits

0xdb7d,	// (0x00083dd3) phacti_note_pane

0x3f38,	// (0x0007a18e) phacti_term_pane_ParamLimits

0x3f38,	// (0x0007a18e) phacti_term_pane

0x3f4d,	// (0x0007a1a3) phacti_note_pane_t1_ParamLimits

0x3f4d,	// (0x0007a1a3) phacti_note_pane_t1

0x6388,	// (0x0007c5de) phacti_term_pane_g1

0x6390,	// (0x0007c5e6) phacti_term_pane_t1_ParamLimits

0x6390,	// (0x0007c5e6) phacti_term_pane_t1

0x3f64,	// (0x0007a1ba) popup_sp_fs_calendar_preview_list_single_pane_g1

0x006e,	// (0x000762c4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0008600b) popup_sp_fs_calendar_preview_list_single_pane_g

0x3f6c,	// (0x0007a1c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3f6c,	// (0x0007a1c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3f82,	// (0x0007a1d8) aid_popup_sp_fs_bg_corner_pane

0x228c,	// (0x000784e2) popup_sp_fs_calendar_preview_bg_pane_g1

0xe75a,	// (0x000849b0) popup_sp_fs_calendar_preview_bg_pane

0x3f8a,	// (0x0007a1e0) popup_sp_fs_calendar_preview_list_pane

0x1e78,	// (0x000780ce) bg_main_sp_fs_cale_pane_ParamLimits

0x1e78,	// (0x000780ce) bg_main_sp_fs_cale_pane

0x63ba,	// (0x0007c610) listscroll_cale_mrui_pane_ParamLimits

0x63ba,	// (0x0007c610) listscroll_cale_mrui_pane

0x63cf,	// (0x0007c625) listscroll_sp_fs_schedule_track_pane

0x63d8,	// (0x0007c62e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x63d8,	// (0x0007c62e) main_sp_fs_ctrlbar_pane_cp01

0x3f92,	// (0x0007a1e8) main_sp_fs_ribbon_pane

0x63eb,	// (0x0007c641) popup_sp_fs_cale_preview_window

0xdbe9,	// (0x00083e3f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdbe9,	// (0x00083e3f) list_single_sp_fs_schedule_track_pane

0x368d,	// (0x000798e3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x368d,	// (0x000798e3) bg_sp_fs_highlight_list_pane_cp03

0xdc0b,	// (0x00083e61) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc0b,	// (0x00083e61) list_single_sp_fs_schedule_track_pane_g1

0xdc17,	// (0x00083e6d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc17,	// (0x00083e6d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00086010) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00086010) list_single_sp_fs_schedule_track_pane_g

0xdc23,	// (0x00083e79) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc23,	// (0x00083e79) list_single_sp_fs_schedule_track_pane_t1

0xdc3b,	// (0x00083e91) sp_fs_schedule_track_pane_ParamLimits

0xdc3b,	// (0x00083e91) sp_fs_schedule_track_pane

0x3f9a,	// (0x0007a1f0) sp_fs_schedule_track_pane_g1

0x3fa2,	// (0x0007a1f8) sp_fs_schedule_track_pane_g2

0x3faa,	// (0x0007a200) sp_fs_schedule_track_pane_g3

0x3fb2,	// (0x0007a208) sp_fs_schedule_track_pane_g4

0x3fba,	// (0x0007a210) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00086015) sp_fs_schedule_track_pane_g

0x2d28,	// (0x00078f7e) bg_sp_fs_schedule_viewer_highlight_g1

0x026d,	// (0x000764c3) bg_sp_fs_schedule_viewer_highlight_g2

0x2d30,	// (0x00078f86) bg_sp_fs_schedule_viewer_highlight_g3

0x2d38,	// (0x00078f8e) bg_sp_fs_schedule_viewer_highlight_g4

0x2f4c,	// (0x000791a2) bg_sp_fs_schedule_viewer_highlight_g5

0x2d48,	// (0x00078f9e) bg_sp_fs_schedule_viewer_highlight_g6

0x2d50,	// (0x00078fa6) bg_sp_fs_schedule_viewer_highlight_g7

0x2d58,	// (0x00078fae) bg_sp_fs_schedule_viewer_highlight_g8

0x024d,	// (0x000764a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00086020) bg_sp_fs_schedule_viewer_highlight_g

0xe75a,	// (0x000849b0) bg_main_sp_fs_ribbon_pane

0xdc4b,	// (0x00083ea1) main_sp_fs_ribbon_pane_g1

0x3fc2,	// (0x0007a218) main_sp_fs_ribbon_pane_t1

0xdc54,	// (0x00083eaa) main_sp_fs_ribbon_pane_t2

0x3fd1,	// (0x0007a227) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00086033) main_sp_fs_ribbon_pane_t

0x3fe0,	// (0x0007a236) main_sp_fs_ribbon_scheduler_pane

0x3fe8,	// (0x0007a23e) bg_main_sp_fs_ribbon_pane_g1

0x3ff1,	// (0x0007a247) bg_main_sp_fs_ribbon_pane_g2

0x3ffa,	// (0x0007a250) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0008603a) bg_main_sp_fs_ribbon_pane_g

0x4002,	// (0x0007a258) main_sp_fs_ribbon_scheduler_pane_g1

0x400b,	// (0x0007a261) main_sp_fs_ribbon_scheduler_pane_g2

0x4014,	// (0x0007a26a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00086041) main_sp_fs_ribbon_scheduler_pane_g

0x401d,	// (0x0007a273) list_cale_mrui_pane

0xdc63,	// (0x00083eb9) sp_fs_scroll_pane_cp07_ParamLimits

0xdc63,	// (0x00083eb9) sp_fs_scroll_pane_cp07

0xdc7f,	// (0x00083ed5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdc7f,	// (0x00083ed5) bg_sp_fs_schedule_viewer_highlight

0x402a,	// (0x0007a280) list_single_sp_fs_schedule_track_pane_cp01

0x4032,	// (0x0007a288) list_sp_fs_schedule_track_pane

0x403a,	// (0x0007a290) sp_fs_scroll_pane_cp06_ParamLimits

0x403a,	// (0x0007a290) sp_fs_scroll_pane_cp06

0x228c,	// (0x000784e2) bgmain_sp_fs_calendar_pane_g1

0x63fd,	// (0x0007c653) list_single_cale_mrui_pane_ParamLimits

0x63fd,	// (0x0007c653) list_single_cale_mrui_pane

0x642a,	// (0x0007c680) list_single_cale_mrui_row_pane_ParamLimits

0x642a,	// (0x0007c680) list_single_cale_mrui_row_pane

0x6437,	// (0x0007c68d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6437,	// (0x0007c68d) list_single_cale_mrui_row_pane_g1

0x646f,	// (0x0007c6c5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x646f,	// (0x0007c6c5) list_single_cale_mrui_row_pane_t1

0x6481,	// (0x0007c6d7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6481,	// (0x0007c6d7) list_single_cale_mrui_row_pane_t2

0x64e7,	// (0x0007c73d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x64e7,	// (0x0007c73d) list_single_cale_mrui_row_pane_t3

0x6516,	// (0x0007c76c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6516,	// (0x0007c76c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0008604f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0008604f) list_single_cale_mrui_row_pane_t

0x6545,	// (0x0007c79b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6545,	// (0x0007c79b) list_single_cmail_header_editor_pane_bg_cp01

0x6565,	// (0x0007c7bb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6565,	// (0x0007c7bb) list_single_cmail_header_editor_pane_bg_cp02

0xdc8c,	// (0x00083ee2) main_radioblah_text_pane_t1_ParamLimits

0xdc8c,	// (0x00083ee2) main_radioblah_text_pane_t1

0x4059,	// (0x0007a2af) cam6_indi_pane_cp01

0x4061,	// (0x0007a2b7) cam6_mode_pane_cp01

0x4069,	// (0x0007a2bf) cam6_pano_pane

0x4072,	// (0x0007a2c8) cam6_zoom_pane_cp01

0x407a,	// (0x0007a2d0) cam6_pano_image_pane

0x4085,	// (0x0007a2db) cam6_pano_pane_g1

0x3988,	// (0x00079bde) cam6_pano_pane_g2

0x408e,	// (0x0007a2e4) cam6_pano_pane_g3

0x4097,	// (0x0007a2ed) cam6_pano_pane_g4

0x2878,	// (0x00078ace) cam6_pano_pane_g5

0x40a0,	// (0x0007a2f6) cam6_pano_pane_g6

0x40aa,	// (0x0007a300) cam6_pano_pane_g7

0x40b2,	// (0x0007a308) cam6_pano_pane_g8

0x40bb,	// (0x0007a311) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00086058) cam6_pano_pane_g

0xe75a,	// (0x000849b0) main_browser_tag_pane

0x3f19,	// (0x0007a16f) grid_navstr_albumart_pane

0x40c6,	// (0x0007a31c) cell_navstr_albumart_pane_ParamLimits

0x40c6,	// (0x0007a31c) cell_navstr_albumart_pane

0x40e6,	// (0x0007a33c) cell_navstr_albumart_pane_g1

0x1c89,	// (0x00077edf) cell_navstr_albumart_pane_g2

0x1c99,	// (0x00077eef) cell_navstr_albumart_pane_g3

0x1c91,	// (0x00077ee7) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0008606b) cell_navstr_albumart_pane_g

0xdca7,	// (0x00083efd) bt_list_pane_ParamLimits

0xdca7,	// (0x00083efd) bt_list_pane

0xdcc7,	// (0x00083f1d) bt_list_pane_t1

0xdcd6,	// (0x00083f2c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00086074) bt_list_pane_t

0xe75a,	// (0x000849b0) main_cale_prevew_pane

0xdce5,	// (0x00083f3b) popup_cale_preview_window_ParamLimits

0xdce5,	// (0x00083f3b) popup_cale_preview_window

0xf0bc,	// (0x00085312) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0bc,	// (0x00085312) bg_popup_preview_window_pane_cp05

0x40ee,	// (0x0007a344) list_cale_preview_pane_ParamLimits

0x40ee,	// (0x0007a344) list_cale_preview_pane

0xdcfe,	// (0x00083f54) list_double_cale_preview_pane_ParamLimits

0xdcfe,	// (0x00083f54) list_double_cale_preview_pane

0xdd10,	// (0x00083f66) list_single_cale_preview_pane_ParamLimits

0xdd10,	// (0x00083f66) list_single_cale_preview_pane

0xdd26,	// (0x00083f7c) list_single_cale_preview_pane_g1

0xdd2e,	// (0x00083f84) list_single_cale_preview_pane_t1_ParamLimits

0xdd2e,	// (0x00083f84) list_single_cale_preview_pane_t1

0xdd43,	// (0x00083f99) list_double_cale_preview_pane_g1

0xdd4b,	// (0x00083fa1) list_double_cale_preview_pane_t1_ParamLimits

0xdd4b,	// (0x00083fa1) list_double_cale_preview_pane_t1

0xdd60,	// (0x00083fb6) list_double_cale_preview_pane_t2_ParamLimits

0xdd60,	// (0x00083fb6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00086079) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00086079) list_double_cale_preview_pane_t

0xe75a,	// (0x000849b0) main_ezdial_pane

0xf0bc,	// (0x00085312) main_sp_fs_email_pane_ParamLimits

0xd892,	// (0x00083ae8) cmail_ddmenu_btn01_pane_ParamLimits

0xd892,	// (0x00083ae8) cmail_ddmenu_btn01_pane

0xd8af,	// (0x00083b05) cmail_ddmenu_btn02_pane_ParamLimits

0xd8af,	// (0x00083b05) cmail_ddmenu_btn02_pane

0xd8cd,	// (0x00083b23) cmail_ddmenu_btn03_pane_ParamLimits

0xd8cd,	// (0x00083b23) cmail_ddmenu_btn03_pane

0xd8fb,	// (0x00083b51) main_sp_fs_ctrlbar_pane_ParamLimits

0xd911,	// (0x00083b67) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda6c,	// (0x00083cc2) list_cmail_body_pane_ParamLimits

0x3e99,	// (0x0007a0ef) bg_button_pane_cp12

0x3ea2,	// (0x0007a0f8) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3ea2,	// (0x0007a0f8) list_single_cmail_header_detail_pane_g3

0x634d,	// (0x0007c5a3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x634d,	// (0x0007c5a3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00085ffc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00085ffc) list_single_cmail_header_detail_pane_t

0x63a5,	// (0x0007c5fb) phacti_term_pane_t2_ParamLimits

0x63a5,	// (0x0007c5fb) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00086006) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00086006) phacti_term_pane_t

0x40fa,	// (0x0007a350) aid_size_list_single_double

0xdd78,	// (0x00083fce) popup_ezdial_listscroll_window

0xdd99,	// (0x00083fef) popup_number_entry_window_cp01

0xf073,	// (0x000852c9) bg_popup_call_pane_cp09

0x4106,	// (0x0007a35c) ezdial_list_pane

0x410e,	// (0x0007a364) scroll_pane_cp23

0x2065,	// (0x000782bb) bg_button_pane_cp028_ParamLimits

0x2065,	// (0x000782bb) bg_button_pane_cp028

0xdda7,	// (0x00083ffd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdda7,	// (0x00083ffd) cmail_ddmenu_btn01_pane_g1

0xddb7,	// (0x0008400d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xddb7,	// (0x0008400d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008607e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008607e) cmail_ddmenu_btn01_pane_g

0x4116,	// (0x0007a36c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4116,	// (0x0007a36c) cmail_ddmenu_btn01_pane_t1

0x1e78,	// (0x000780ce) bg_button_pane_cp029_ParamLimits

0x1e78,	// (0x000780ce) bg_button_pane_cp029

0xddb7,	// (0x0008400d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xddb7,	// (0x0008400d) cmail_ddmenu_btn02_pane_g1

0xddd0,	// (0x00084026) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xddd0,	// (0x00084026) cmail_ddmenu_btn02_pane_t1

0x368d,	// (0x000798e3) bg_button_pane_cp031_ParamLimits

0x368d,	// (0x000798e3) bg_button_pane_cp031

0xddb7,	// (0x0008400d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xddb7,	// (0x0008400d) cmail_ddmenu_btn03_pane_g1

0xddd0,	// (0x00084026) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xddd0,	// (0x00084026) cmail_ddmenu_btn03_pane_t1

0xb6e6,	// (0x0008193c) cell_dialer2_keypad_pane_t1_ParamLimits

0xb700,	// (0x00081956) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb700,	// (0x00081956) cell_dialer2_keypad_pane_t1_copy1

0xd238,	// (0x0008348e) ncimui_group_button_pane

0xf0bc,	// (0x00085312) main_sp_fs_calendar_pane_ParamLimits

0xda8c,	// (0x00083ce2) list_single_cmail_header_caption_pane_ParamLimits

0xdbb1,	// (0x00083e07) aid_recal_txt_sm_pane

0xe75a,	// (0x000849b0) mian_recal_day_pane

0x63eb,	// (0x0007c641) popup_sp_fs_cale_preview_window_ParamLimits

0x412b,	// (0x0007a381) list_recal_day_pane

0x659c,	// (0x0007c7f2) list_single_recal_day_pane_ParamLimits

0x659c,	// (0x0007c7f2) list_single_recal_day_pane

0x4152,	// (0x0007a3a8) list_single_recal_day_pane_g1_ParamLimits

0x4152,	// (0x0007a3a8) list_single_recal_day_pane_g1

0x65ae,	// (0x0007c804) list_single_recal_day_pane_g2_ParamLimits

0x65ae,	// (0x0007c804) list_single_recal_day_pane_g2

0x65ba,	// (0x0007c810) list_single_recal_day_pane_g3_ParamLimits

0x65ba,	// (0x0007c810) list_single_recal_day_pane_g3

0x65c6,	// (0x0007c81c) list_single_recal_day_pane_g4_ParamLimits

0x65c6,	// (0x0007c81c) list_single_recal_day_pane_g4

0x65d4,	// (0x0007c82a) list_single_recal_day_pane_g5_ParamLimits

0x65d4,	// (0x0007c82a) list_single_recal_day_pane_g5

0x65ea,	// (0x0007c840) list_single_recal_day_pane_g6_ParamLimits

0x65ea,	// (0x0007c840) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008608d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008608d) list_single_recal_day_pane_g

0x65fe,	// (0x0007c854) list_single_recal_day_pane_t1

0x6610,	// (0x0007c866) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00086098) list_single_recal_day_pane_t

0xddf4,	// (0x0008404a) ncimui_query_button_pane_ParamLimits

0xddf4,	// (0x0008404a) ncimui_query_button_pane

0xde04,	// (0x0008405a) ncimui_query_button_pane_t1_ParamLimits

0xde04,	// (0x0008405a) ncimui_query_button_pane_t1

0x415e,	// (0x0007a3b4) ncimui_query_button_pane_t2_ParamLimits

0x415e,	// (0x0007a3b4) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008609d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008609d) ncimui_query_button_pane_t

0xde17,	// (0x0008406d) query_button_pane_ParamLimits

0xde17,	// (0x0008406d) query_button_pane

0xe75a,	// (0x000849b0) bg_button_pane_cp0028

0x4171,	// (0x0007a3c7) query_button_pane_t1

0x9ac4,	// (0x0007fd1a) main_tport_pane_ParamLimits

0xd976,	// (0x00083bcc) bg_popup_window_pane_cp01_ParamLimits

0xd976,	// (0x00083bcc) bg_popup_window_pane_cp01

0xd984,	// (0x00083bda) heading_pane_cp08_ParamLimits

0xd984,	// (0x00083bda) heading_pane_cp08

0xd992,	// (0x00083be8) heading_pane_cp07_ParamLimits

0xd992,	// (0x00083be8) heading_pane_cp07

0xda01,	// (0x00083c57) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00085fe9) cell_tport_appsw_pane_g

0x5782,	// (0x0007b9d8) input_candi_list_open_g1

0x0430,	// (0x00076686) list_cale_time_pane_g6_ParamLimits

0x0430,	// (0x00076686) list_cale_time_pane_g6

0xa549,	// (0x0008079f) aid_size_touch_calib_1_ParamLimits

0xa549,	// (0x0008079f) aid_size_touch_calib_1

0xa555,	// (0x000807ab) aid_size_touch_calib_2_ParamLimits

0xa555,	// (0x000807ab) aid_size_touch_calib_2

0xa563,	// (0x000807b9) aid_size_touch_calib_3_ParamLimits

0xa563,	// (0x000807b9) aid_size_touch_calib_3

0xa573,	// (0x000807c9) aid_size_touch_calib_4_ParamLimits

0xa573,	// (0x000807c9) aid_size_touch_calib_4

0xa581,	// (0x000807d7) main_touch_calib_button_group_pane_ParamLimits

0xa581,	// (0x000807d7) main_touch_calib_button_group_pane

0xa58f,	// (0x000807e5) main_touch_calib_pane_g1_ParamLimits

0xa59b,	// (0x000807f1) main_touch_calib_pane_g2_ParamLimits

0xa5a7,	// (0x000807fd) main_touch_calib_pane_g3_ParamLimits

0xa5b3,	// (0x00080809) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000859a7) main_touch_calib_pane_g_ParamLimits

0xa5bf,	// (0x00080815) main_touch_calib_pane_t1_ParamLimits

0xa5d8,	// (0x0008082e) main_touch_calib_pane_t2_ParamLimits

0xa5f1,	// (0x00080847) main_touch_calib_pane_t3_ParamLimits

0xa607,	// (0x0008085d) main_touch_calib_pane_t4_ParamLimits

0xa61d,	// (0x00080873) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000859b0) main_touch_calib_pane_t_ParamLimits

0x2618,	// (0x0007886e) list_single_fp_cale_pane_g3_ParamLimits

0x2618,	// (0x0007886e) list_single_fp_cale_pane_g3

0xf0bc,	// (0x00085312) bg_button_pane_cp012_ParamLimits

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp03_ParamLimits

0xc4aa,	// (0x00082700) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0bc,	// (0x00085312) bg_vkb2_func_pane_cp04_ParamLimits

0xd1c0,	// (0x00083416) main_ncimui_button_group_pane_ParamLimits

0xd1c0,	// (0x00083416) main_ncimui_button_group_pane

0xd226,	// (0x0008347c) main_ncimui_pane_t3_ParamLimits

0xd226,	// (0x0008347c) main_ncimui_pane_t3

0x3f2f,	// (0x0007a185) phacti_button_group_pane

0x40fa,	// (0x0007a350) aid_size_list_single_double_ParamLimits

0xdd78,	// (0x00083fce) popup_ezdial_listscroll_window_ParamLimits

0xdd99,	// (0x00083fef) popup_number_entry_window_cp01_ParamLimits

0xde24,	// (0x0008407a) phacti_button_pane_ParamLimits

0xde24,	// (0x0008407a) phacti_button_pane

0xe75a,	// (0x000849b0) bg_button_pane_cp14

0x417f,	// (0x0007a3d5) phacti_button_pane_t1

0xde35,	// (0x0008408b) main_touch_calib_button_pane_ParamLimits

0xde35,	// (0x0008408b) main_touch_calib_button_pane

0xeeae,	// (0x00085104) bg_button_pane_cp18_ParamLimits

0xeeae,	// (0x00085104) bg_button_pane_cp18

0x418d,	// (0x0007a3e3) main_touch_calib_button_pane_t1_ParamLimits

0x418d,	// (0x0007a3e3) main_touch_calib_button_pane_t1

0x41a3,	// (0x0007a3f9) main_touch_calib_button_pane_t2_ParamLimits

0x41a3,	// (0x0007a3f9) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000860a2) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000860a2) main_touch_calib_button_pane_t

0xe75a,	// (0x000849b0) cell_ncimui_button_pane

0xe75a,	// (0x000849b0) bg_button_pane_cp032

0x41c1,	// (0x0007a417) cell_ncimui_button_pane_t1

0xb75c,	// (0x000819b2) image3_infobar_pane_ParamLimits

0xb75c,	// (0x000819b2) image3_infobar_pane

0xd59f,	// (0x000837f5) fs_bigclock_status_pane_ParamLimits

0xd59f,	// (0x000837f5) fs_bigclock_status_pane

0xd5ac,	// (0x00083802) main_fs_bigclock_clock_pane_ParamLimits

0xd5ac,	// (0x00083802) main_fs_bigclock_clock_pane

0xd5c6,	// (0x0008381c) main_fs_bigclock_indi_pane_ParamLimits

0xd5c6,	// (0x0008381c) main_fs_bigclock_indi_pane

0xd5ee,	// (0x00083844) main_fs_bigclock_swipe_pane_ParamLimits

0xd5ee,	// (0x00083844) main_fs_bigclock_swipe_pane

0xe75a,	// (0x000849b0) main_fs_clock_dumped_data

0x3a95,	// (0x00079ceb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a95,	// (0x00079ceb) list_single_fs_bigclock_indicator_pane_g1

0x3ab0,	// (0x00079d06) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3ab0,	// (0x00079d06) list_single_fs_bigclock_indicator_pane_g2

0x3aca,	// (0x00079d20) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3aca,	// (0x00079d20) list_single_fs_bigclock_indicator_pane_g3

0x3ae4,	// (0x00079d3a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3ae4,	// (0x00079d3a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00085eca) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00085eca) list_single_fs_bigclock_indicator_pane_g

0x3b0f,	// (0x00079d65) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3b0f,	// (0x00079d65) list_single_fs_bigclock_indicator_pane_t1

0x3b37,	// (0x00079d8d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3b37,	// (0x00079d8d) list_single_fs_bigclock_indicator_pane_t2

0x3b5f,	// (0x00079db5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b5f,	// (0x00079db5) list_single_fs_bigclock_indicator_pane_t3

0x3b87,	// (0x00079ddd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b87,	// (0x00079ddd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00085ed5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00085ed5) list_single_fs_bigclock_indicator_pane_t

0x41cf,	// (0x0007a425) image3_infobar_fav_pane_ParamLimits

0x41cf,	// (0x0007a425) image3_infobar_fav_pane

0x41df,	// (0x0007a435) image3_infobar_loc_pane_ParamLimits

0x41df,	// (0x0007a435) image3_infobar_loc_pane

0x41f3,	// (0x0007a449) image3_infobar_time_pane_ParamLimits

0x41f3,	// (0x0007a449) image3_infobar_time_pane

0x228c,	// (0x000784e2) image3_infobar_time_pane_g1

0x4203,	// (0x0007a459) image3_infobar_time_pane_t1

0x228c,	// (0x000784e2) image3_infobar_loc_pane_g1

0x4211,	// (0x0007a467) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000860a7) image3_infobar_loc_pane_g

0x4219,	// (0x0007a46f) image3_infobar_loc_pane_t1

0x228c,	// (0x000784e2) image3_infobar_fav_pane_g1

0x4227,	// (0x0007a47d) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000860ac) image3_infobar_fav_pane_g

0x422f,	// (0x0007a485) fs_bigclock_status_battery_pane

0x4238,	// (0x0007a48e) fs_bigclock_status_signal_pane

0x4241,	// (0x0007a497) fs_bigclock_status_title_pane

0x424a,	// (0x0007a4a0) fs_bigclock_status_signal_pane_g1

0x4253,	// (0x0007a4a9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000860b1) fs_bigclock_status_signal_pane_g

0x425b,	// (0x0007a4b1) fs_bigclock_status_battery_pane_g1

0x4264,	// (0x0007a4ba) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000860b6) fs_bigclock_status_battery_pane_g

0x426c,	// (0x0007a4c2) fs_bigclock_status_title_pane_t1

0x228c,	// (0x000784e2) main_fs_bigclock_clock_pane_g1

0x427a,	// (0x0007a4d0) main_fs_bigclock_clock_pane_g2

0x4283,	// (0x0007a4d9) main_fs_bigclock_clock_pane_g3

0x4283,	// (0x0007a4d9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000860bb) main_fs_bigclock_clock_pane_g

0x428b,	// (0x0007a4e1) main_fs_bigclock_clock_pane_t1

0xde45,	// (0x0008409b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000860c4) main_fs_bigclock_clock_pane_t

0x4299,	// (0x0007a4ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4299,	// (0x0007a4ef) list_single_fs_bigclock_indicator_pane

0x42aa,	// (0x0007a500) list_single_fs_bigclock_pane_ParamLimits

0x42aa,	// (0x0007a500) list_single_fs_bigclock_pane

0x42d0,	// (0x0007a526) main_fs_bigclock_indicator_pane_t1

0x42df,	// (0x0007a535) list_single_fs_bigclock_pane_g1

0x42e7,	// (0x0007a53d) list_single_fs_bigclock_pane_t1

0x228c,	// (0x000784e2) main_fs_bigclock_swipe_pane_g1

0x432a,	// (0x0007a580) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000860d5) main_fs_bigclock_swipe_pane_g

0x4332,	// (0x0007a588) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4332,	// (0x0007a588) main_fs_bigclock_swipe_pane_t1

0x8b54,	// (0x0007edaa) call_type_pane_ParamLimits

0xe75a,	// (0x000849b0) main_btmg_pane

0x6463,	// (0x0007c6b9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6463,	// (0x0007c6b9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00086048) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00086048) list_single_cale_mrui_row_pane_g

0x658b,	// (0x0007c7e1) list_recal_vselct_arw_lo_pane

0x414a,	// (0x0007a3a0) list_recal_vselct_arw_up_pane

0x6593,	// (0x0007c7e9) list_recal_vselct_pane

0xde98,	// (0x000840ee) btmg_button_pane

0xdea4,	// (0x000840fa) main_btmg_pane_g1

0xe75a,	// (0x000849b0) bg_button_pane_cp044

0x434f,	// (0x0007a5a5) btmg_button_pane_t1

0x1e64,	// (0x000780ba) aid_listscroll_gen

0xf0bc,	// (0x00085312) main_cntbar_detail_pane

0x3e7b,	// (0x0007a0d1) list_cmail_folder_pane

0x20da,	// (0x00078330) sp_fs_scroll_pane_cp03_ParamLimits

0x6622,	// (0x0007c878) list_single_fs_dyc_pane_cp01_ParamLimits

0x6622,	// (0x0007c878) list_single_fs_dyc_pane_cp01

0x435d,	// (0x0007a5b3) aid_size_cmail_indent

0x6647,	// (0x0007c89d) list_single_dyc_row_pane_cp01

0xdecc,	// (0x00084122) cntbar_detail_list_pane_ParamLimits

0xdecc,	// (0x00084122) cntbar_detail_list_pane

0xdf06,	// (0x0008415c) main_cntbar_detail_cont_pane_ParamLimits

0xdf06,	// (0x0008415c) main_cntbar_detail_cont_pane

0x8b48,	// (0x0007ed9e) scroll_pane_cp032_ParamLimits

0x8b48,	// (0x0007ed9e) scroll_pane_cp032

0xdf12,	// (0x00084168) cntbar_detail_list_event_pane_ParamLimits

0xdf12,	// (0x00084168) cntbar_detail_list_event_pane

0xded8,	// (0x0008412e) cntbar_detail_list_shct_pane

0x02bb,	// (0x00076511) aid_list_gen

0x4366,	// (0x0007a5bc) aid_scroll

0x436f,	// (0x0007a5c5) aid_size_touch_scroll_bar

0xec15,	// (0x00084e6b) aid_list_double

0xdf26,	// (0x0008417c) aid_list_single

0xca3b,	// (0x00082c91) aid_list_single_lg

0x6650,	// (0x0007c8a6) aid_list_z_g_a_sm

0xdf2f,	// (0x00084185) aid_list_z_g_d

0x6658,	// (0x0007c8ae) aid_txt_z_prm

0x6666,	// (0x0007c8bc) aid_txt_z_prm_cp01

0x6674,	// (0x0007c8ca) aid_txt_z_sec

0xdf37,	// (0x0008418d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdf37,	// (0x0008418d) main_cntbar_detail_cont_pane_g1

0xdf44,	// (0x0008419a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdf44,	// (0x0008419a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000860da) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000860da) main_cntbar_detail_cont_pane_g

0x4378,	// (0x0007a5ce) main_cntbar_detail_cont_pane_t1

0x4386,	// (0x0007a5dc) main_cntbar_detail_cont_pane_t2

0x4394,	// (0x0007a5ea) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000860df) main_cntbar_detail_cont_pane_t

0xdf50,	// (0x000841a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdf50,	// (0x000841a6) cell_cntbar_detail_list_shct_pane

0x43a2,	// (0x0007a5f8) cntbar_detail_list_shct_pane_g1

0x43ab,	// (0x0007a601) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000860e6) cntbar_detail_list_shct_pane_g

0xdf64,	// (0x000841ba) cntbar_detail_list_event_pane_g1_ParamLimits

0xdf64,	// (0x000841ba) cntbar_detail_list_event_pane_g1

0xdf70,	// (0x000841c6) cntbar_detail_list_event_pane_g2_ParamLimits

0xdf70,	// (0x000841c6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000860eb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000860eb) cntbar_detail_list_event_pane_g

0xdfdc,	// (0x00084232) cntbar_detail_list_event_pane_t1_ParamLimits

0xdfdc,	// (0x00084232) cntbar_detail_list_event_pane_t1

0xdff1,	// (0x00084247) cntbar_detail_list_event_pane_t2_ParamLimits

0xdff1,	// (0x00084247) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000860f8) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000860f8) cntbar_detail_list_event_pane_t

0x228c,	// (0x000784e2) cell_cntbar_detail_list_shct_pane_g1

0x0a32,	// (0x00076c88) navi_pane_mv_g3

0xf0bc,	// (0x00085312) main_cntbar_detail_pane_ParamLimits

0xe75a,	// (0x000849b0) main_notif_wgt_pane

0xb410,	// (0x00081666) aid_tch_main_mp4_pane_g4

0xb645,	// (0x0008189b) popup_slider_window_cp02

0x6581,	// (0x0007c7d7) list_recal_day_event_pane

0xdeac,	// (0x00084102) cntbar_detail_btn_pane_ParamLimits

0xdeac,	// (0x00084102) cntbar_detail_btn_pane

0xdebc,	// (0x00084112) cntbar_detail_btn_pane_cp01_ParamLimits

0xdebc,	// (0x00084112) cntbar_detail_btn_pane_cp01

0xded8,	// (0x0008412e) cntbar_detail_list_shct_pane_ParamLimits

0xdee4,	// (0x0008413a) cntbar_detail_pane_g1_ParamLimits

0xdee4,	// (0x0008413a) cntbar_detail_pane_g1

0xdef0,	// (0x00084146) cntbar_detail_pane_t1_ParamLimits

0xdef0,	// (0x00084146) cntbar_detail_pane_t1

0xdf7c,	// (0x000841d2) cntbar_detail_list_event_pane_g3_ParamLimits

0xdf7c,	// (0x000841d2) cntbar_detail_list_event_pane_g3

0xdf94,	// (0x000841ea) cntbar_detail_list_event_pane_g4_ParamLimits

0xdf94,	// (0x000841ea) cntbar_detail_list_event_pane_g4

0xdfac,	// (0x00084202) cntbar_detail_list_event_pane_g5_ParamLimits

0xdfac,	// (0x00084202) cntbar_detail_list_event_pane_g5

0xdfc4,	// (0x0008421a) cntbar_detail_list_event_pane_g6_ParamLimits

0xdfc4,	// (0x0008421a) cntbar_detail_list_event_pane_g6

0xe006,	// (0x0008425c) cntbar_detail_list_event_pane_t3_ParamLimits

0xe006,	// (0x0008425c) cntbar_detail_list_event_pane_t3

0xe018,	// (0x0008426e) popup_notif_wgt_window_ParamLimits

0xe018,	// (0x0008426e) popup_notif_wgt_window

0xe028,	// (0x0008427e) popup_submenu_window_cp01_ParamLimits

0xe028,	// (0x0008427e) popup_submenu_window_cp01

0xf073,	// (0x000852c9) bg_popup_window_pane_cp10

0x43b4,	// (0x0007a60a) listscroll_notif_wgt_pane

0x43c6,	// (0x0007a61c) list_notif_wgt_window

0x43cf,	// (0x0007a625) scroll_pane_cp033

0xe03a,	// (0x00084290) list_notif_wgt_row_pane_ParamLimits

0xe03a,	// (0x00084290) list_notif_wgt_row_pane

0x43d8,	// (0x0007a62e) aid_size_list_notif_wgt_del

0x43e5,	// (0x0007a63b) list_notif_wgt_row_pane_g1

0x43f1,	// (0x0007a647) list_notif_wgt_row_pane_g2

0x4405,	// (0x0007a65b) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000860ff) list_notif_wgt_row_pane_g

0x4412,	// (0x0007a668) list_notif_wgt_row_pane_t1

0x4428,	// (0x0007a67e) list_notif_wgt_row_pane_t2

0x443a,	// (0x0007a690) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00086106) list_notif_wgt_row_pane_t

0x2f66,	// (0x000791bc) list_recal_day_event_pane_g1

0x444c,	// (0x0007a6a2) list_recal_day_event_pane_t1

0xe75a,	// (0x000849b0) bg_button_pane_cp045

0xe04c,	// (0x000842a2) cntbar_detail_btn_pane_t1

0x1e78,	// (0x000780ce) main_callh_pane_ParamLimits

0x1e78,	// (0x000780ce) main_callh_pane

0xe75a,	// (0x000849b0) main_coverflow0_pane

0xe75a,	// (0x000849b0) main_wgtman_pane

0xd606,	// (0x0008385c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd606,	// (0x0008385c) main_fs_bigclock_unlock_btn_pane

0xd9f9,	// (0x00083c4f) bg_button_pane_cp16

0xda09,	// (0x00083c5f) cell_tport_appsw_pane_g3

0xe05a,	// (0x000842b0) cf0_flow_pane_ParamLimits

0xe05a,	// (0x000842b0) cf0_flow_pane

0x445b,	// (0x0007a6b1) listscroll_cf0_pane

0x4466,	// (0x0007a6bc) main_cf0_pane_g1

0xe069,	// (0x000842bf) main_cf0_pane_t1_ParamLimits

0xe069,	// (0x000842bf) main_cf0_pane_t1

0xe07d,	// (0x000842d3) main_cf0_pane_t2_ParamLimits

0xe07d,	// (0x000842d3) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00086112) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00086112) main_cf0_pane_t

0x4478,	// (0x0007a6ce) scroll_pane_cp11

0xe091,	// (0x000842e7) cf0_flow_pane_g1

0xe099,	// (0x000842ef) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00086117) cf0_flow_pane_g

0xe0a1,	// (0x000842f7) cf0_flow_pane_t1

0xe75a,	// (0x000849b0) main_call6_pane

0xe75a,	// (0x000849b0) main_calllock_pane

0xe0af,	// (0x00084305) call6_btn_grp_pane_ParamLimits

0xe0af,	// (0x00084305) call6_btn_grp_pane

0xe0be,	// (0x00084314) call6_pane_g1_ParamLimits

0xe0be,	// (0x00084314) call6_pane_g1

0xe0cd,	// (0x00084323) popup_call6_1st_window_ParamLimits

0xe0cd,	// (0x00084323) popup_call6_1st_window

0xe0db,	// (0x00084331) popup_call6_2nd_window_ParamLimits

0xe0db,	// (0x00084331) popup_call6_2nd_window

0xe0e9,	// (0x0008433f) cell_call6_btn_pane_ParamLimits

0xe0e9,	// (0x0008433f) cell_call6_btn_pane

0xf073,	// (0x000852c9) bg_popup_call2_in_pane_cp03

0x4483,	// (0x0007a6d9) popup_call6_1st_window_g1

0x448b,	// (0x0007a6e1) popup_call6_1st_window_g2

0x4493,	// (0x0007a6e9) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008611c) popup_call6_1st_window_g

0x449b,	// (0x0007a6f1) popup_call6_1st_window_t1

0x44aa,	// (0x0007a700) popup_call6_1st_window_t2

0x44ba,	// (0x0007a710) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00086123) popup_call6_1st_window_t

0xf073,	// (0x000852c9) bg_popup_call2_in_pane_cp04

0x4483,	// (0x0007a6d9) popup_call6_2nd_window_g1

0x448b,	// (0x0007a6e1) popup_call6_2nd_window_g2

0x4493,	// (0x0007a6e9) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008611c) popup_call6_2nd_window_g

0x449b,	// (0x0007a6f1) popup_call6_2nd_window_t1

0xe75a,	// (0x000849b0) bg_button_pane_cp15

0x44ca,	// (0x0007a720) cell_call6_btn_pane_g1

0x44d3,	// (0x0007a729) cell_call6_btn_pane_t1

0xe0f8,	// (0x0008434e) listscroll_wgtman_pane_ParamLimits

0xe0f8,	// (0x0008434e) listscroll_wgtman_pane

0xe114,	// (0x0008436a) wgtman_btn_pane_ParamLimits

0xe114,	// (0x0008436a) wgtman_btn_pane

0x0839,	// (0x00076a8f) aid_scroll_copy1

0x44e2,	// (0x0007a738) list_wgtman_pane

0xe149,	// (0x0008439f) wgtman_btn_pane_g1_ParamLimits

0xe149,	// (0x0008439f) wgtman_btn_pane_g1

0xe171,	// (0x000843c7) wgtman_btn_pane_t1_ParamLimits

0xe171,	// (0x000843c7) wgtman_btn_pane_t1

0x44ec,	// (0x0007a742) wgtman_btn_pane_t2_ParamLimits

0x44ec,	// (0x0007a742) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008612a) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008612a) wgtman_btn_pane_t

0xe1a8,	// (0x000843fe) listrow_wgtman_pane_ParamLimits

0xe1a8,	// (0x000843fe) listrow_wgtman_pane

0xe1c3,	// (0x00084419) listrow_wgtman_pane_g1

0xe1d0,	// (0x00084426) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008612f) listrow_wgtman_pane_g

0x6682,	// (0x0007c8d8) listrow_wgtman_pane_t1

0x669a,	// (0x0007c8f0) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00086134) listrow_wgtman_pane_t

0x66c0,	// (0x0007c916) wait_bar_pane_cp09

0x4503,	// (0x0007a759) main_calllock_btn_pane

0x450d,	// (0x0007a763) main_calllock_pane_g1

0xe75a,	// (0x000849b0) bg_button_pane_cp17

0x4519,	// (0x0007a76f) main_calllock_btn_pane_g1

0x4522,	// (0x0007a778) main_calllock_btn_pane_t1

0xe75a,	// (0x000849b0) main_dialer3_pane

0xe75a,	// (0x000849b0) main_fmrd2_pane

0x228c,	// (0x000784e2) main_fs_bigclock_unlock_btn_pane_g1

0x4539,	// (0x0007a78f) main_fs_bigclock_unlock_btn_pane_t1

0xe1ee,	// (0x00084444) area_fmrd2_info_pane_ParamLimits

0xe1ee,	// (0x00084444) area_fmrd2_info_pane

0xe1fc,	// (0x00084452) area_fmrd2_visual_pane_ParamLimits

0xe1fc,	// (0x00084452) area_fmrd2_visual_pane

0xe20a,	// (0x00084460) fmrd2_indi_pane_ParamLimits

0xe20a,	// (0x00084460) fmrd2_indi_pane

0xe217,	// (0x0008446d) area_fmrd2_visual_pane_g1

0xe21f,	// (0x00084475) area_fmrd2_visual_pane_t1

0xe22f,	// (0x00084485) area_fmrd2_visual_pane_t2

0xe23f,	// (0x00084495) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0008613e) area_fmrd2_visual_pane_t

0xe24f,	// (0x000844a5) area_fmrd2_info_pane_g1

0xe257,	// (0x000844ad) area_fmrd2_info_pane_t1

0xe267,	// (0x000844bd) area_fmrd2_info_pane_t2

0xe277,	// (0x000844cd) area_fmrd2_info_pane_t3

0xe287,	// (0x000844dd) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00086145) area_fmrd2_info_pane_t

0xe295,	// (0x000844eb) fmrd2_indi_pane_t1

0xe2a5,	// (0x000844fb) fmrd2_indi_pane_t2

0xe2b5,	// (0x0008450b) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008614e) fmrd2_indi_pane_t

0x3af3,	// (0x00079d49) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3af3,	// (0x00079d49) list_single_fs_bigclock_indicator_pane_g5

0x3ba3,	// (0x00079df9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3ba3,	// (0x00079df9) list_single_fs_bigclock_indicator_pane_t5

0xdb93,	// (0x00083de9) aid_cell_bcale_month_pane_ParamLimits

0xdb93,	// (0x00083de9) aid_cell_bcale_month_pane

0xdbba,	// (0x00083e10) bcale_month_pane_ParamLimits

0xdbba,	// (0x00083e10) bcale_month_pane

0xdbd8,	// (0x00083e2e) bcale_preview_pane_ParamLimits

0xdbd8,	// (0x00083e2e) bcale_preview_pane

0x42e7,	// (0x0007a53d) list_single_fs_bigclock_pane_t1_ParamLimits

0x4306,	// (0x0007a55c) list_single_fs_bigclock_pane_t2_ParamLimits

0x4306,	// (0x0007a55c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000860d0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000860d0) list_single_fs_bigclock_pane_t

0x4531,	// (0x0007a787) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00086139) main_fs_bigclock_unlock_btn_pane_g

0xe2c3,	// (0x00084519) aid_dia3_key_size_ParamLimits

0xe2c3,	// (0x00084519) aid_dia3_key_size

0xe2cf,	// (0x00084525) aid_dia3_listrow_size_ParamLimits

0xe2cf,	// (0x00084525) aid_dia3_listrow_size

0xe2df,	// (0x00084535) dia3_keypad_fun_pane_ParamLimits

0xe2df,	// (0x00084535) dia3_keypad_fun_pane

0xe2f1,	// (0x00084547) dia3_keypad_num_pane_ParamLimits

0xe2f1,	// (0x00084547) dia3_keypad_num_pane

0xe303,	// (0x00084559) dia3_listscroll_pane_ParamLimits

0xe303,	// (0x00084559) dia3_listscroll_pane

0xe311,	// (0x00084567) dia3_numentry_pane_ParamLimits

0xe311,	// (0x00084567) dia3_numentry_pane

0x4547,	// (0x0007a79d) dia3_list_pane

0x4552,	// (0x0007a7a8) scroll_pane_cp12

0xe75a,	// (0x000849b0) bg_dia3_numentry_pane

0xe31f,	// (0x00084575) dia3_numentry_pane_t1

0xe32e,	// (0x00084584) cell_dia3_key_num_pane

0xe336,	// (0x0008458c) cell_dia3_key0_fun_pane_ParamLimits

0xe336,	// (0x0008458c) cell_dia3_key0_fun_pane

0xe343,	// (0x00084599) cell_dia3_key1_fun_pane_ParamLimits

0xe343,	// (0x00084599) cell_dia3_key1_fun_pane

0xe350,	// (0x000845a6) dia3_listrow_pane

0x3802,	// (0x00079a58) bg_dia3_numentry_pane_g1

0xe75a,	// (0x000849b0) bg_button_pane_cp21

0x455d,	// (0x0007a7b3) cell_dia3_key_num_pane_t1

0x456b,	// (0x0007a7c1) cell_dia3_key_num_pane_t2

0x457a,	// (0x0007a7d0) cell_dia3_key_num_pane_t3

0x4589,	// (0x0007a7df) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00086155) cell_dia3_key_num_pane_t

0xe75a,	// (0x000849b0) bg_button_pane_cp19

0xe35d,	// (0x000845b3) cell_dia3_key0_fun_pane_g1

0xe75a,	// (0x000849b0) bg_button_pane_cp20

0xe365,	// (0x000845bb) cell_dia3_key1_fun_pane_g1

0xe36d,	// (0x000845c3) area_left_week_number_pane

0xe380,	// (0x000845d6) area_top_day_name_pane

0xe38e,	// (0x000845e4) frame_month_view_pane

0x4598,	// (0x0007a7ee) grid_month_view_pane

0xe3a3,	// (0x000845f9) cell_top_day_name_pane_ParamLimits

0xe3a3,	// (0x000845f9) cell_top_day_name_pane

0xe3bd,	// (0x00084613) cell_area_left_week_number_pane_ParamLimits

0xe3bd,	// (0x00084613) cell_area_left_week_number_pane

0xe3e0,	// (0x00084636) cell_month_view_pane_ParamLimits

0xe3e0,	// (0x00084636) cell_month_view_pane

0x45a6,	// (0x0007a7fc) frm_month_g1

0xe40c,	// (0x00084662) frm_month_g2

0xe41d,	// (0x00084673) frm_month_g3

0xe42e,	// (0x00084684) frm_month_g4

0xe43f,	// (0x00084695) frm_month_g5

0xe452,	// (0x000846a8) frm_month_g6

0xe465,	// (0x000846bb) frm_month_g7

0x45b3,	// (0x0007a809) frm_month_g8

0xe478,	// (0x000846ce) frm_month_g9

0xe485,	// (0x000846db) frm_month_g10

0xe492,	// (0x000846e8) frm_month_g11

0xe49f,	// (0x000846f5) frm_month_g12

0xe4ac,	// (0x00084702) frm_month_g13

0xe4b9,	// (0x0008470f) frm_month_g14

0xe4c8,	// (0x0008471e) frm_month_g15

0xe4d7,	// (0x0008472d) frm_month_g16

0x000f,

0xff08,	// (0x0008615e) frm_month_g

0x45c0,	// (0x0007a816) cell_top_day_name_pane_t1

0xe4e6,	// (0x0008473c) cell_area_left_week_number_pane_g1

0xe4f5,	// (0x0008474b) cell_area_left_week_number_pane_t1

0x24f8,	// (0x0007874e) cell_month_view_pane_g1

0xe50b,	// (0x00084761) cell_month_view_pane_t1

0xe75a,	// (0x000849b0) main_fps_pane

0x3d93,	// (0x00079fe9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3d93,	// (0x00079fe9) cmail_ddmenu_btn02_pane_cp1

0x3daf,	// (0x0007a005) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3daf,	// (0x0007a005) cmail_ddmenu_btn02_pane_cp2

0xddc3,	// (0x00084019) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xddc3,	// (0x00084019) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00086083) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00086083) cmail_ddmenu_btn02_pane_g

0xdde2,	// (0x00084038) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdde2,	// (0x00084038) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00086088) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00086088) cmail_ddmenu_btn02_pane_t

0xe521,	// (0x00084777) fps_text_pane_ParamLimits

0xe521,	// (0x00084777) fps_text_pane

0xe52e,	// (0x00084784) main_fps_pane_g1_ParamLimits

0xe52e,	// (0x00084784) main_fps_pane_g1

0xe53c,	// (0x00084792) wait_bar_pane_cp010_ParamLimits

0xe53c,	// (0x00084792) wait_bar_pane_cp010

0xe548,	// (0x0008479e) fps_text_pane_t1_ParamLimits

0xe548,	// (0x0008479e) fps_text_pane_t1

0xba27,	// (0x00081c7d) cam4_image_uncrop_pane_g1

0xba30,	// (0x00081c86) cam4_image_uncrop_pane_g2

0xba39,	// (0x00081c8f) cam4_image_uncrop_pane_g3

0xba42,	// (0x00081c98) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00085b44) cam4_image_uncrop_pane_g

0xe350,	// (0x000845a6) dia3_listrow_pane_ParamLimits

0xe75a,	// (0x000849b0) main_phob2_pane

0xd9db,	// (0x00083c31) cell_tport_appsw_pane_cp02_ParamLimits

0xd9db,	// (0x00083c31) cell_tport_appsw_pane_cp02

0xd9ea,	// (0x00083c40) cell_tport_appsw_pane_cp03_ParamLimits

0xd9ea,	// (0x00083c40) cell_tport_appsw_pane_cp03

0xe75a,	// (0x000849b0) phob2_contact_card_pane

0xe75a,	// (0x000849b0) phob2_listscroll_pane

0x45d3,	// (0x0007a829) phob2_list_pane

0x45db,	// (0x0007a831) scroll_pane_cp034

0xe561,	// (0x000847b7) phob2_cc_data_pane_ParamLimits

0xe561,	// (0x000847b7) phob2_cc_data_pane

0xe57b,	// (0x000847d1) phob2_cc_listscroll_pane_ParamLimits

0xe57b,	// (0x000847d1) phob2_cc_listscroll_pane

0xe1a8,	// (0x000843fe) list_double_large_graphic_phob2_pane_ParamLimits

0xe1a8,	// (0x000843fe) list_double_large_graphic_phob2_pane

0xe595,	// (0x000847eb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe595,	// (0x000847eb) list_double_large_graphic_phob2_pane_g1

0x66d2,	// (0x0007c928) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x66d2,	// (0x0007c928) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008617f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008617f) list_double_large_graphic_phob2_pane_g

0x66de,	// (0x0007c934) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x66de,	// (0x0007c934) list_double_large_graphic_phob2_pane_t1

0x66f3,	// (0x0007c949) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x66f3,	// (0x0007c949) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00086184) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00086184) list_double_large_graphic_phob2_pane_t

0xe75a,	// (0x000849b0) list_highlight_pane_cp024

0xe5ab,	// (0x00084801) phob2_cc_button_pane

0xe5b3,	// (0x00084809) phob2_cc_data_pane_g1_ParamLimits

0xe5b3,	// (0x00084809) phob2_cc_data_pane_g1

0xe5bf,	// (0x00084815) phob2_cc_data_pane_g2_ParamLimits

0xe5bf,	// (0x00084815) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00086189) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00086189) phob2_cc_data_pane_g

0xe5cb,	// (0x00084821) phob2_cc_data_pane_t1_ParamLimits

0xe5cb,	// (0x00084821) phob2_cc_data_pane_t1

0xe5dd,	// (0x00084833) phob2_cc_data_pane_t2_ParamLimits

0xe5dd,	// (0x00084833) phob2_cc_data_pane_t2

0xe5ef,	// (0x00084845) phob2_cc_data_pane_t3_ParamLimits

0xe5ef,	// (0x00084845) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008618e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008618e) phob2_cc_data_pane_t

0x45e3,	// (0x0007a839) phob2_cc_list_pane_ParamLimits

0x45e3,	// (0x0007a839) phob2_cc_list_pane

0x2ffd,	// (0x00079253) scroll_pane_cp035_ParamLimits

0x2ffd,	// (0x00079253) scroll_pane_cp035

0xf0bc,	// (0x00085312) bg_button_pane_cp033

0x45ef,	// (0x0007a845) phob2_cc_button_pane_g1

0x45fb,	// (0x0007a851) phob2_cc_button_pane_t1

0x4610,	// (0x0007a866) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00086195) phob2_cc_button_pane_t

0xe601,	// (0x00084857) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe601,	// (0x00084857) list_double_large_graphic_phob2_cc_pane

0xe628,	// (0x0008487e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe628,	// (0x0008487e) list_double_large_graphic_phob2_cc_pane_g1

0xe639,	// (0x0008488f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe639,	// (0x0008488f) list_double_large_graphic_phob2_cc_pane_g2

0x6705,	// (0x0007c95b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6705,	// (0x0007c95b) list_double_large_graphic_phob2_cc_pane_g3

0x6711,	// (0x0007c967) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6711,	// (0x0007c967) list_double_large_graphic_phob2_cc_pane_g4

0x671d,	// (0x0007c973) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x671d,	// (0x0007c973) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008619a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008619a) list_double_large_graphic_phob2_cc_pane_g

0x6729,	// (0x0007c97f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6729,	// (0x0007c97f) list_double_large_graphic_phob2_cc_pane_t1

0x6752,	// (0x0007c9a8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6752,	// (0x0007c9a8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000861a5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000861a5) list_double_large_graphic_phob2_cc_pane_t

0x4622,	// (0x0007a878) list_highlight_pane_cp025_ParamLimits

0x4622,	// (0x0007a878) list_highlight_pane_cp025

0xf0bc,	// (0x00085312) bg_button_pane_cp033_ParamLimits

0x45ef,	// (0x0007a845) phob2_cc_button_pane_g1_ParamLimits

0x45fb,	// (0x0007a851) phob2_cc_button_pane_t1_ParamLimits

0x4610,	// (0x0007a866) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00086195) phob2_cc_button_pane_t_ParamLimits

0x6a52,	// (0x0007cca8) popup_wgtman_window

0x2e42,	// (0x00079098) scroll_pane_cp038

0xe131,	// (0x00084387) wgtman_btn_pane_cp_01_ParamLimits

0xe131,	// (0x00084387) wgtman_btn_pane_cp_01

0x4630,	// (0x0007a886) wgtman_content_pane

0x4639,	// (0x0007a88f) wgtman_heading_pane

0xe75a,	// (0x000849b0) bg_heading_pane_cp02

0x4642,	// (0x0007a898) wgtman_heading_pane_g1

0x464a,	// (0x0007a8a0) wgtman_heading_pane_t1

0x4658,	// (0x0007a8ae) scroll_pane_cp036

0x4660,	// (0x0007a8b6) wgtman_list_pane

0x4668,	// (0x0007a8be) wgtman_list_pane_t1_ParamLimits

0x4668,	// (0x0007a8be) wgtman_list_pane_t1

0xb986,	// (0x00081bdc) cam4_grid_pane

0x59f5,	// (0x0007bc4b) bg_button_pane_cp015_ParamLimits

0xc661,	// (0x000828b7) bg_button_pane_cp016_ParamLimits

0xc674,	// (0x000828ca) bg_button_pane_cp017_ParamLimits

0x5a39,	// (0x0007bc8f) popup_vitu2_query_window_g3_ParamLimits

0x5a39,	// (0x0007bc8f) popup_vitu2_query_window_g3

0x5ab2,	// (0x0007bd08) popup_vitu2_query_window_t6_ParamLimits

0x5ab2,	// (0x0007bd08) popup_vitu2_query_window_t6

0x5add,	// (0x0007bd33) popup_vitu2_query_window_t7_ParamLimits

0x5add,	// (0x0007bd33) popup_vitu2_query_window_t7

0x369b,	// (0x000798f1) cam4_grid_pane_g1

0x36a4,	// (0x000798fa) cam4_grid_pane_g2

0x4682,	// (0x0007a8d8) cam4_grid_pane_g3

0x468b,	// (0x0007a8e1) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000861aa) cam4_grid_pane_g

0x78c2,	// (0x0007db18) aid_placing_vt_slider_lsc_ParamLimits

0x7c0e,	// (0x0007de64) vidtel_button_pane_ParamLimits

0x7c0e,	// (0x0007de64) vidtel_button_pane

0xe75a,	// (0x000849b0) bg_button_pane_cp034

0xe645,	// (0x0008489b) vidtel_button_pane_g1

0x4696,	// (0x0007a8ec) vidtel_button_pane_t1

0x2f44,	// (0x0007919a) aid_size_vtel_slider_touch

0x2ffd,	// (0x00079253) scroll_pane_cp039

0x3840,	// (0x00079a96) ncim_query_button_pane_cp01_ParamLimits

0x385f,	// (0x00079ab5) ncimui_query_pane_g1_ParamLimits

0xf0bc,	// (0x00085312) input_focus_pane_cp012_ParamLimits

0x3884,	// (0x00079ada) ncim_query_entry_pane_t1_ParamLimits

0x2ffd,	// (0x00079253) scroll_pane_cp039_ParamLimits

0x091d,	// (0x00076b73) navi_pane_bcale_mc_g1

0x0925,	// (0x00076b7b) navi_pane_bcale_mc_t1

0x3df8,	// (0x0007a04e) main_sp_fs_email_pane_g1

0x3e04,	// (0x0007a05a) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00085f3b) main_sp_fs_email_pane_g

0x404c,	// (0x0007a2a2) list_single_cale_mrui_row_pane_g3_ParamLimits

0x404c,	// (0x0007a2a2) list_single_cale_mrui_row_pane_g3

0x65e0,	// (0x0007c836) list_single_recal_day_pane_g5_event_pane

0x65f6,	// (0x0007c84c) list_single_recal_day_pane_g7

0x46ac,	// (0x0007a902) list_recal_day_event_pane_cp01

0x46b5,	// (0x0007a90b) list_recal_vselct_arw_lo_pane_cp01

0x46bd,	// (0x0007a913) list_recal_vselct_arw_up_pane_cp01

0x46c5,	// (0x0007a91b) list_recal_vselct_pane_cp01

0x2f66,	// (0x000791bc) list_recal_day_event_pane_cp01_g1

0x677b,	// (0x0007c9d1) list_recal_day_event_pane_cp01_t1

0x65fe,	// (0x0007c854) list_single_recal_day_pane_t1_ParamLimits

0x6610,	// (0x0007c866) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00086098) list_single_recal_day_pane_t_ParamLimits

0xede9,	// (0x0008503f) bg_notes_pane_ParamLimits

0xee8c,	// (0x000850e2) list_notes_pane_ParamLimits

0x6db0,	// (0x0007d006) scroll_pane_cp06_ParamLimits

0xeeae,	// (0x00085104) main_notes_pane_ParamLimits

0xe75a,	// (0x000849b0) main_welc_pane

0xe64d,	// (0x000848a3) main_welc_body_pane_ParamLimits

0xe64d,	// (0x000848a3) main_welc_body_pane

0xe667,	// (0x000848bd) main_welc_opti_pane_ParamLimits

0xe667,	// (0x000848bd) main_welc_opti_pane

0xe69a,	// (0x000848f0) main_welc_pane_t1_ParamLimits

0xe69a,	// (0x000848f0) main_welc_pane_t1

0xe6b4,	// (0x0008490a) main_welc_body_row_pane_ParamLimits

0xe6b4,	// (0x0008490a) main_welc_body_row_pane

0x368d,	// (0x000798e3) main_welc_opti_row_pane_ParamLimits

0x368d,	// (0x000798e3) main_welc_opti_row_pane

0x46cf,	// (0x0007a925) main_welc_opti_row_pane_g1

0xe6d9,	// (0x0008492f) main_welc_opti_row_pane_t1

0x46d7,	// (0x0007a92d) main_welc_body_row_pane_t1

0x43be,	// (0x0007a614) popup_notif_wgt_heading_pane

0x43d8,	// (0x0007a62e) aid_size_list_notif_wgt_del_ParamLimits

0x43e5,	// (0x0007a63b) list_notif_wgt_row_pane_g1_ParamLimits

0x43f1,	// (0x0007a647) list_notif_wgt_row_pane_g2_ParamLimits

0x4405,	// (0x0007a65b) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000860ff) list_notif_wgt_row_pane_g_ParamLimits

0x4412,	// (0x0007a668) list_notif_wgt_row_pane_t1_ParamLimits

0x4428,	// (0x0007a67e) list_notif_wgt_row_pane_t2_ParamLimits

0x443a,	// (0x0007a690) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00086106) list_notif_wgt_row_pane_t_ParamLimits

0xe1c3,	// (0x00084419) listrow_wgtman_pane_g1_ParamLimits

0xe1d0,	// (0x00084426) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008612f) listrow_wgtman_pane_g_ParamLimits

0x6682,	// (0x0007c8d8) listrow_wgtman_pane_t1_ParamLimits

0x669a,	// (0x0007c8f0) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00086134) listrow_wgtman_pane_t_ParamLimits

0x66c0,	// (0x0007c916) wait_bar_pane_cp09_ParamLimits

0xe75a,	// (0x000849b0) bg_popup_heading_pane_cp02

0x46e6,	// (0x0007a93c) popup_notif_wgt_heading_pane_g1

0x46ee,	// (0x0007a944) popup_notif_wgt_heading_pane_t1

0xe75a,	// (0x000849b0) main_vids_pane

0xe75a,	// (0x000849b0) vids_listscroll_pane

0xe6e8,	// (0x0008493e) scroll_pane_cp040

0xe75a,	// (0x000849b0) vids_list_pane

0xe6f3,	// (0x00084949) vids_list_double_pane_ParamLimits

0xe6f3,	// (0x00084949) vids_list_double_pane

0xe70d,	// (0x00084963) vids_list_double_pane_g1

0xe716,	// (0x0008496c) vids_list_double_pane_t1

0xe726,	// (0x0008497c) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000861b8) vids_list_double_pane_t

0xf0bc,	// (0x00085312) main_ncimui_pane_ParamLimits

0xd1d8,	// (0x0008342e) main_ncimui_pane_g1_ParamLimits

0xd1e4,	// (0x0008343a) main_ncimui_pane_g2_ParamLimits

0xd1e4,	// (0x0008343a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00085e40) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00085e40) main_ncimui_pane_g

0xe680,	// (0x000848d6) main_welc_pane_g1_ParamLimits

0xe680,	// (0x000848d6) main_welc_pane_g1

0xe68c,	// (0x000848e2) main_welc_pane_g2_ParamLimits

0xe68c,	// (0x000848e2) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000861b3) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000861b3) main_welc_pane_g

0xede9,	// (0x0008503f) listscroll_mce_pane_ParamLimits

0x0a72,	// (0x00076cc8) wait_bar_pane_cp10

0x1e6c,	// (0x000780c2) main_cale_day_pane_ParamLimits

0x1e6c,	// (0x000780c2) main_cale_week_pane_ParamLimits

0xede9,	// (0x0008503f) main_messa_pane_ParamLimits

0xade6,	// (0x0008103c) main_clock2_btn_pane_ParamLimits

0xade6,	// (0x0008103c) main_clock2_btn_pane

0x26a0,	// (0x000788f6) main_clock2_btn_pane_cp01_ParamLimits

0x26a0,	// (0x000788f6) main_clock2_btn_pane_cp01

0x401d,	// (0x0007a273) list_cale_mrui_pane_ParamLimits

0x4470,	// (0x0007a6c6) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0008610d) main_cf0_pane_g

0xe36d,	// (0x000845c3) area_left_week_number_pane_ParamLimits

0xe380,	// (0x000845d6) area_top_day_name_pane_ParamLimits

0xe38e,	// (0x000845e4) frame_month_view_pane_ParamLimits

0x4598,	// (0x0007a7ee) grid_month_view_pane_ParamLimits

0x45a6,	// (0x0007a7fc) frm_month_g1_ParamLimits

0xe40c,	// (0x00084662) frm_month_g2_ParamLimits

0xe41d,	// (0x00084673) frm_month_g3_ParamLimits

0xe42e,	// (0x00084684) frm_month_g4_ParamLimits

0xe43f,	// (0x00084695) frm_month_g5_ParamLimits

0xe452,	// (0x000846a8) frm_month_g6_ParamLimits

0xe465,	// (0x000846bb) frm_month_g7_ParamLimits

0x45b3,	// (0x0007a809) frm_month_g8_ParamLimits

0xe478,	// (0x000846ce) frm_month_g9_ParamLimits

0xe485,	// (0x000846db) frm_month_g10_ParamLimits

0xe492,	// (0x000846e8) frm_month_g11_ParamLimits

0xe49f,	// (0x000846f5) frm_month_g12_ParamLimits

0xe4ac,	// (0x00084702) frm_month_g13_ParamLimits

0xe4b9,	// (0x0008470f) frm_month_g14_ParamLimits

0xe4c8,	// (0x0008471e) frm_month_g15_ParamLimits

0xe4d7,	// (0x0008472d) frm_month_g16_ParamLimits

0xff08,	// (0x0008615e) frm_month_g_ParamLimits

0x45c0,	// (0x0007a816) cell_top_day_name_pane_t1_ParamLimits

0xe4e6,	// (0x0008473c) cell_area_left_week_number_pane_g1_ParamLimits

0xe4f5,	// (0x0008474b) cell_area_left_week_number_pane_t1_ParamLimits

0x24f8,	// (0x0007874e) cell_month_view_pane_g1_ParamLimits

0xe50b,	// (0x00084761) cell_month_view_pane_t1_ParamLimits

0xede1,	// (0x00085037) main_clock2_btn_pane_g1

0x46fc,	// (0x0007a952) main_clock2_btn_pane_t1

0xf0bc,	// (0x00085312) listscroll_cmail_pane_ParamLimits

0x3df8,	// (0x0007a04e) main_sp_fs_email_pane_g1_ParamLimits

0x3e04,	// (0x0007a05a) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00085f3b) main_sp_fs_email_pane_g_ParamLimits

0x412b,	// (0x0007a381) list_recal_day_pane_ParamLimits

0x413c,	// (0x0007a392) mian_recal_day_pane_t1

0x5fe2,	// (0x0007c238) list_single_dyc_row_text_pane_t4_ParamLimits

0x5fe2,	// (0x0007c238) list_single_dyc_row_text_pane_t4

0x6019,	// (0x0007c26f) list_single_dyc_row_text_pane_t5_ParamLimits

0x6019,	// (0x0007c26f) list_single_dyc_row_text_pane_t5

0x608f,	// (0x0007c2e5) list_single_dyc_row_text_pane_t6_ParamLimits

0x608f,	// (0x0007c2e5) list_single_dyc_row_text_pane_t6

0x8a7a,	// (0x0007ecd0) aid_mgn_list_cale_time_pane

0xf0bc,	// (0x00085312) main_gallery2_pane_ParamLimits

0x26b6,	// (0x0007890c) main_clock2_pane_cp01_t1

0x26c6,	// (0x0007891c) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00085a1a) main_clock2_pane_cp01_t

0x71f2,	// (0x0007d448) cale_week_scroll_pane_g16_ParamLimits

0x71f2,	// (0x0007d448) cale_week_scroll_pane_g16

0xf073,	// (0x000852c9) vorec_slider_pane

0x4696,	// (0x0007a8ec) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
