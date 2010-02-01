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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008c9bd };

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
0x0da4,	// (0x0008d761) Screen

0x0db0,	// (0x0008d76d) application_window

0x0e22,	// (0x0008d7df) area_bottom_pane_ParamLimits

0x0e22,	// (0x0008d7df) area_bottom_pane

0x0e7f,	// (0x0008d83c) area_top_pane_ParamLimits

0x0e7f,	// (0x0008d83c) area_top_pane

0x9e75,	// (0x00096832) call_video_uplink_pane_ParamLimits

0x9e75,	// (0x00096832) call_video_uplink_pane

0x0ef4,	// (0x0008d8b1) main_pane_ParamLimits

0x0ef4,	// (0x0008d8b1) main_pane

0xae0e,	// (0x000977cb) context_pane

0x492c,	// (0x000912e9) navi_pane

0x4954,	// (0x00091311) popup_cale_events_window_ParamLimits

0x4954,	// (0x00091311) popup_cale_events_window

0xae21,	// (0x000977de) popup_mup_playback_window

0x496c,	// (0x00091329) signal_pane

0xa612,	// (0x00096fcf) main_browser_pane

0xe52f,	// (0x0009aeec) main_burst_pane

0x467e,	// (0x0009103b) main_calc_pane

0xe52f,	// (0x0009aeec) main_cale_day_pane

0xa612,	// (0x00096fcf) main_cale_month_pane

0xe52f,	// (0x0009aeec) main_cale_week_pane

0xe52f,	// (0x0009aeec) main_call_pane

0xa2b4,	// (0x00096c71) main_call_poc_pane

0xe52f,	// (0x0009aeec) main_camera_pane

0xe52f,	// (0x0009aeec) main_chi_dic_pane

0xe3a6,	// (0x0009ad63) main_clock_pane

0xa2b4,	// (0x00096c71) main_fmradio_pane

0xe52f,	// (0x0009aeec) main_graph_messa_pane

0xa2b4,	// (0x00096c71) main_help_pane

0xa612,	// (0x00096fcf) main_im_pane

0xa50f,	// (0x00096ecc) main_image_pane_ParamLimits

0xa50f,	// (0x00096ecc) main_image_pane

0xa2b4,	// (0x00096c71) main_location2_pane

0xe52f,	// (0x0009aeec) main_location_pane

0xa2b4,	// (0x00096c71) main_messa_pane

0xa2b4,	// (0x00096c71) main_mp2_pane

0xe52f,	// (0x0009aeec) main_mp_pane

0xa2b4,	// (0x00096c71) main_msg_pane

0xa2b4,	// (0x00096c71) main_mup_eq_pane

0xa2b4,	// (0x00096c71) main_mup_pane

0xe52f,	// (0x0009aeec) main_notes_pane

0xa2b4,	// (0x00096c71) main_pec_pane

0xa2b4,	// (0x00096c71) main_phob_pane

0xa2b4,	// (0x00096c71) main_pinb_pane

0xa2b4,	// (0x00096c71) main_postcard_pane

0xa2b4,	// (0x00096c71) main_qdial_pane

0xe52f,	// (0x0009aeec) main_skin_pane

0xa2b4,	// (0x00096c71) main_smil2_pane

0xe52f,	// (0x0009aeec) main_smil_pane

0xe52f,	// (0x0009aeec) main_video_pane

0xe52f,	// (0x0009aeec) main_video_tele_pane

0xa50f,	// (0x00096ecc) main_viewer_pane_ParamLimits

0xa50f,	// (0x00096ecc) main_viewer_pane

0xe52f,	// (0x0009aeec) main_vorec_pane

0x46d2,	// (0x0009108f) popup_blid_sat_info_window_ParamLimits

0x46d2,	// (0x0009108f) popup_blid_sat_info_window

0x472a,	// (0x000910e7) popup_dyc_status_message_window_ParamLimits

0x472a,	// (0x000910e7) popup_dyc_status_message_window

0x4744,	// (0x00091101) popup_grid_large_graphic_window_ParamLimits

0x4744,	// (0x00091101) popup_grid_large_graphic_window

0x4800,	// (0x000911bd) popup_loc_request_window_ParamLimits

0x4800,	// (0x000911bd) popup_loc_request_window

0x4904,	// (0x000912c1) popup_wml_address_window_ParamLimits

0x4904,	// (0x000912c1) popup_wml_address_window

0x44b8,	// (0x00090e75) call_muted_g1

0x3944,	// (0x00090301) popup_call_audio_conf_window_ParamLimits

0x3944,	// (0x00090301) popup_call_audio_conf_window

0x44cc,	// (0x00090e89) popup_call_audio_first_window_ParamLimits

0x44cc,	// (0x00090e89) popup_call_audio_first_window

0x4542,	// (0x00090eff) popup_call_audio_in_window_ParamLimits

0x4542,	// (0x00090eff) popup_call_audio_in_window

0x457e,	// (0x00090f3b) popup_call_audio_out_window_ParamLimits

0x457e,	// (0x00090f3b) popup_call_audio_out_window

0x45b8,	// (0x00090f75) popup_call_audio_second_window_ParamLimits

0x45b8,	// (0x00090f75) popup_call_audio_second_window

0x460e,	// (0x00090fcb) popup_call_audio_wait_window_ParamLimits

0x460e,	// (0x00090fcb) popup_call_audio_wait_window

0x4643,	// (0x00091000) popup_number_entry_window_ParamLimits

0x4643,	// (0x00091000) popup_number_entry_window

0x9ea1,	// (0x0009685e) bg_popup_call_pane_cp05_ParamLimits

0x9ea1,	// (0x0009685e) bg_popup_call_pane_cp05

0x9ec1,	// (0x0009687e) popup_number_entry_window_t1

0x9ed4,	// (0x00096891) popup_number_entry_window_t2

0x9ee6,	// (0x000968a3) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009baa9) popup_number_entry_window_t

0x9ef8,	// (0x000968b5) text_title_cp2

0x9f0b,	// (0x000968c8) bg_popup_call_pane_cp_ParamLimits

0x9f0b,	// (0x000968c8) bg_popup_call_pane_cp

0x9f19,	// (0x000968d6) call_thumbnail_pane

0x9f21,	// (0x000968de) popup_call_audio_in_window_g1_ParamLimits

0x9f21,	// (0x000968de) popup_call_audio_in_window_g1

0x9f2d,	// (0x000968ea) popup_call_audio_in_window_g2_ParamLimits

0x9f2d,	// (0x000968ea) popup_call_audio_in_window_g2

0x9f39,	// (0x000968f6) popup_call_audio_in_window_g3_ParamLimits

0x9f39,	// (0x000968f6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009bab2) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009bab2) popup_call_audio_in_window_g

0x9f45,	// (0x00096902) popup_call_audio_in_window_t1_ParamLimits

0x9f45,	// (0x00096902) popup_call_audio_in_window_t1

0x9f61,	// (0x0009691e) popup_call_audio_in_window_t2_ParamLimits

0x9f61,	// (0x0009691e) popup_call_audio_in_window_t2

0x9f7d,	// (0x0009693a) popup_call_audio_in_window_t3_ParamLimits

0x9f7d,	// (0x0009693a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009bab9) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009bab9) popup_call_audio_in_window_t

0x9f0b,	// (0x000968c8) bg_popup_call_pane_cp01_ParamLimits

0x9f0b,	// (0x000968c8) bg_popup_call_pane_cp01

0x9f19,	// (0x000968d6) call_thumbnail_pane_cp02

0x9f90,	// (0x0009694d) call_type_pane_cp022

0x9f98,	// (0x00096955) popup_call_audio_out_window_g1_ParamLimits

0x9f98,	// (0x00096955) popup_call_audio_out_window_g1

0x9faa,	// (0x00096967) popup_call_audio_out_window_g2_ParamLimits

0x9faa,	// (0x00096967) popup_call_audio_out_window_g2

0x9fb6,	// (0x00096973) popup_call_audio_out_window_g3_ParamLimits

0x9fb6,	// (0x00096973) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009bac0) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009bac0) popup_call_audio_out_window_g

0x9fc8,	// (0x00096985) popup_call_audio_out_window_t1_ParamLimits

0x9fc8,	// (0x00096985) popup_call_audio_out_window_t1

0x9fe0,	// (0x0009699d) popup_call_audio_out_window_t2_ParamLimits

0x9fe0,	// (0x0009699d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009bac7) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009bac7) popup_call_audio_out_window_t

0x9ff5,	// (0x000969b2) bg_popup_call_pane_ParamLimits

0x9ff5,	// (0x000969b2) bg_popup_call_pane

0x109e,	// (0x0008da5b) call_thumbnail_pane_cp_ParamLimits

0x109e,	// (0x0008da5b) call_thumbnail_pane_cp

0xa079,	// (0x00096a36) call_type_pane_cp01_ParamLimits

0xa079,	// (0x00096a36) call_type_pane_cp01

0xa0bd,	// (0x00096a7a) popup_call_audio_first_window_g1_ParamLimits

0xa0bd,	// (0x00096a7a) popup_call_audio_first_window_g1

0xa109,	// (0x00096ac6) popup_call_audio_first_window_g2_ParamLimits

0xa109,	// (0x00096ac6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009bacc) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009bacc) popup_call_audio_first_window_g

0xa14d,	// (0x00096b0a) popup_call_audio_first_window_t1_ParamLimits

0xa14d,	// (0x00096b0a) popup_call_audio_first_window_t1

0xa1f9,	// (0x00096bb6) popup_call_audio_first_window_t4_ParamLimits

0xa1f9,	// (0x00096bb6) popup_call_audio_first_window_t4

0xa285,	// (0x00096c42) popup_call_audio_first_window_t5_ParamLimits

0xa285,	// (0x00096c42) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009bad1) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009bad1) popup_call_audio_first_window_t

0xa2b4,	// (0x00096c71) bg_popup_call_pane_cp02

0xa2be,	// (0x00096c7b) call_type_pane_cp023

0xa2c6,	// (0x00096c83) popup_call_audio_wait_window_g1

0xa2ce,	// (0x00096c8b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009bad8) popup_call_audio_wait_window_g

0xa2d6,	// (0x00096c93) popup_call_audio_wait_window_t3

0xa2e4,	// (0x00096ca1) bg_popup_call_pane_cp03_ParamLimits

0xa2e4,	// (0x00096ca1) bg_popup_call_pane_cp03

0xa344,	// (0x00096d01) call_thumbnail_pane_cp011_ParamLimits

0xa344,	// (0x00096d01) call_thumbnail_pane_cp011

0xa350,	// (0x00096d0d) call_type_pane_cp034_ParamLimits

0xa350,	// (0x00096d0d) call_type_pane_cp034

0xa38c,	// (0x00096d49) popup_call_audio_second_window_g1_ParamLimits

0xa38c,	// (0x00096d49) popup_call_audio_second_window_g1

0xa3c8,	// (0x00096d85) popup_call_audio_second_window_g2_ParamLimits

0xa3c8,	// (0x00096d85) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009badd) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009badd) popup_call_audio_second_window_g

0xa404,	// (0x00096dc1) popup_call_audio_second_window_t1_ParamLimits

0xa404,	// (0x00096dc1) popup_call_audio_second_window_t1

0xa485,	// (0x00096e42) popup_call_audio_second_window_t2_ParamLimits

0xa485,	// (0x00096e42) popup_call_audio_second_window_t2

0xa4bb,	// (0x00096e78) popup_call_audio_second_window_t3_ParamLimits

0xa4bb,	// (0x00096e78) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009bae2) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009bae2) popup_call_audio_second_window_t

0xa2b4,	// (0x00096c71) bg_popup_call_pane_cp04

0xa4f1,	// (0x00096eae) list_conf_pane

0xa4f9,	// (0x00096eb6) popup_call_audio_conf_window_t1

0xa507,	// (0x00096ec4) call_thumbnail_pane_g1

0xa50f,	// (0x00096ecc) bg_pinb_pane_ParamLimits

0xa50f,	// (0x00096ecc) bg_pinb_pane

0xa51d,	// (0x00096eda) find_pinb_pane

0xa526,	// (0x00096ee3) listscroll_pinb_pane_ParamLimits

0xa526,	// (0x00096ee3) listscroll_pinb_pane

0xa535,	// (0x00096ef2) pinb_bg_pane_g1

0x10c2,	// (0x0008da7f) pinb_bg_pane_g2

0x10ce,	// (0x0008da8b) pinb_bg_pane_g3

0x10da,	// (0x0008da97) pinb_bg_pane_g4

0x10e6,	// (0x0008daa3) pinb_bg_pane_g5

0x10f2,	// (0x0008daaf) pinb_bg_pane_g6

0x10fd,	// (0x0008daba) pinb_bg_pane_g7

0x1108,	// (0x0008dac5) pinb_bg_pane_g8

0x1113,	// (0x0008dad0) pinb_bg_pane_g9

0x111d,	// (0x0008dada) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009bae9) pinb_bg_pane_g

0x113a,	// (0x0008daf7) grid_pinb_pane

0x1143,	// (0x0008db00) list_pinb_pane

0x114c,	// (0x0008db09) scroll_pane_cp01_ParamLimits

0x114c,	// (0x0008db09) scroll_pane_cp01

0xa53f,	// (0x00096efc) find_pinb_pane_g1_ParamLimits

0xa53f,	// (0x00096efc) find_pinb_pane_g1

0xa557,	// (0x00096f14) find_pinb_pane_t1

0xa569,	// (0x00096f26) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009bb03) find_pinb_pane_t

0xa57e,	// (0x00096f3b) input_focus_pane_cp01_ParamLimits

0xa57e,	// (0x00096f3b) input_focus_pane_cp01

0x115e,	// (0x0008db1b) cell_pinb_pane_ParamLimits

0x115e,	// (0x0008db1b) cell_pinb_pane

0x1187,	// (0x0008db44) cell_pinb_pane_g1_ParamLimits

0x1187,	// (0x0008db44) cell_pinb_pane_g1

0x1197,	// (0x0008db54) cell_pinb_pane_g2_ParamLimits

0x1197,	// (0x0008db54) cell_pinb_pane_g2

0xa58a,	// (0x00096f47) cell_pinb_pane_g3_ParamLimits

0xa58a,	// (0x00096f47) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009bb08) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009bb08) cell_pinb_pane_g

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp01

0x11a3,	// (0x0008db60) list_pinb_item_pane_ParamLimits

0x11a3,	// (0x0008db60) list_pinb_item_pane

0xa2b4,	// (0x00096c71) list_highlight_pane_cp02

0x11b5,	// (0x0008db72) list_pinb_item_pane_g1_ParamLimits

0x11b5,	// (0x0008db72) list_pinb_item_pane_g1

0xa596,	// (0x00096f53) list_pinb_item_pane_g2_ParamLimits

0xa596,	// (0x00096f53) list_pinb_item_pane_g2

0x11c2,	// (0x0008db7f) list_pinb_item_pane_g3_ParamLimits

0x11c2,	// (0x0008db7f) list_pinb_item_pane_g3

0x11d3,	// (0x0008db90) list_pinb_item_pane_g4_ParamLimits

0x11d3,	// (0x0008db90) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009bb0f) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009bb0f) list_pinb_item_pane_g

0x11df,	// (0x0008db9c) list_pinb_item_pane_t1_ParamLimits

0x11df,	// (0x0008db9c) list_pinb_item_pane_t1

0x1214,	// (0x0008dbd1) calc_display_pane

0x123c,	// (0x0008dbf9) calc_paper_pane

0x125f,	// (0x0008dc1c) grid_calc_pane

0xa2b4,	// (0x00096c71) bg_list_pane_cp01

0x1289,	// (0x0008dc46) clock_g1

0x1291,	// (0x0008dc4e) clock_g2

0x0001,

0xf15b,	// (0x0009bb18) clock_g

0x1299,	// (0x0008dc56) clock_t1_ParamLimits

0x1299,	// (0x0008dc56) clock_t1

0x12ae,	// (0x0008dc6b) clock_t2_ParamLimits

0x12ae,	// (0x0008dc6b) clock_t2

0x12c0,	// (0x0008dc7d) clock_t3_ParamLimits

0x12c0,	// (0x0008dc7d) clock_t3

0x12d2,	// (0x0008dc8f) clock_t4_ParamLimits

0x12d2,	// (0x0008dc8f) clock_t4

0x12e4,	// (0x0008dca1) clock_t5_ParamLimits

0x12e4,	// (0x0008dca1) clock_t5

0x12f9,	// (0x0008dcb6) clock_t6_ParamLimits

0x12f9,	// (0x0008dcb6) clock_t6

0x130b,	// (0x0008dcc8) clock_t7_ParamLimits

0x130b,	// (0x0008dcc8) clock_t7

0x131d,	// (0x0008dcda) clock_t8_ParamLimits

0x131d,	// (0x0008dcda) clock_t8

0x1331,	// (0x0008dcee) clock_t9_ParamLimits

0x1331,	// (0x0008dcee) clock_t9

0x0008,

0xf160,	// (0x0009bb1d) clock_t_ParamLimits

0xf160,	// (0x0009bb1d) clock_t

0xa5aa,	// (0x00096f67) popup_clock_analogue_window_cp02

0xa5aa,	// (0x00096f67) popup_clock_digital_window_cp01

0xa5b2,	// (0x00096f6f) listscroll_help_pane

0xa2b4,	// (0x00096c71) phob_pre_status_pane

0xa5bc,	// (0x00096f79) grid_qdial_pane

0xa2b4,	// (0x00096c71) listscroll_mce_pane

0xa5c6,	// (0x00096f83) bg_notes_pane

0xa5d0,	// (0x00096f8d) list_notes_pane

0x1345,	// (0x0008dd02) scroll_pane_cp06

0xa5da,	// (0x00096f97) bg_calc_paper_pane

0xa5f8,	// (0x00096fb5) list_calc_pane

0xa612,	// (0x00096fcf) bg_calc_display_pane

0x1350,	// (0x0008dd0d) calc_display_pane_t1

0x1362,	// (0x0008dd1f) calc_display_pane_t2

0xa61e,	// (0x00096fdb) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009bb30) calc_display_pane_t

0x1374,	// (0x0008dd31) cell_calc_pane_ParamLimits

0x1374,	// (0x0008dd31) cell_calc_pane

0xa630,	// (0x00096fed) bg_calc_paper_pane_g1

0xa63c,	// (0x00096ff9) bg_calc_paper_pane_g2

0xa648,	// (0x00097005) bg_calc_paper_pane_g3

0xa654,	// (0x00097011) bg_calc_paper_pane_g4

0xa660,	// (0x0009701d) bg_calc_paper_pane_g5

0x13a9,	// (0x0008dd66) bg_calc_paper_pane_g6

0x13b8,	// (0x0008dd75) bg_calc_paper_pane_g7

0x13c7,	// (0x0008dd84) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009bb37) bg_calc_paper_pane_g

0x13da,	// (0x0008dd97) calc_bg_paper_pane_g9

0x13ed,	// (0x0008ddaa) list_calc_item_pane_ParamLimits

0x13ed,	// (0x0008ddaa) list_calc_item_pane

0xa66c,	// (0x00097029) list_calc_item_pane_g1

0xa679,	// (0x00097036) list_calc_item_pane_t1_ParamLimits

0xa679,	// (0x00097036) list_calc_item_pane_t1

0x1400,	// (0x0008ddbd) list_calc_item_pane_t2_ParamLimits

0x1400,	// (0x0008ddbd) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009bb48) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009bb48) list_calc_item_pane_t

0xa68b,	// (0x00097048) cell_calc_pane_g1

0xa695,	// (0x00097052) grid_highlight_pane_cp02

0x1432,	// (0x0008ddef) bg_calc_display_pane_g1

0x143b,	// (0x0008ddf8) bg_calc_display_pane_g2

0x1445,	// (0x0008de02) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009bb52) bg_calc_display_pane_g

0x144e,	// (0x0008de0b) cell_qdial_pane_ParamLimits

0x144e,	// (0x0008de0b) cell_qdial_pane

0x1462,	// (0x0008de1f) cell_qdial_pane_g1_ParamLimits

0x1462,	// (0x0008de1f) cell_qdial_pane_g1

0x1478,	// (0x0008de35) cell_qdial_pane_g2_ParamLimits

0x1478,	// (0x0008de35) cell_qdial_pane_g2

0xa6b7,	// (0x00097074) cell_qdial_pane_g3_ParamLimits

0xa6b7,	// (0x00097074) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009bb59) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009bb59) cell_qdial_pane_g

0x149f,	// (0x0008de5c) cell_qdial_pane_t1_ParamLimits

0x149f,	// (0x0008de5c) cell_qdial_pane_t1

0x14b7,	// (0x0008de74) cell_qdial_pane_t2_ParamLimits

0x14b7,	// (0x0008de74) cell_qdial_pane_t2

0x14ca,	// (0x0008de87) cell_qdial_pane_t3_ParamLimits

0x14ca,	// (0x0008de87) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009bb62) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009bb62) cell_qdial_pane_t

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp04

0xa6c3,	// (0x00097080) thumbnail_qdial_pane_ParamLimits

0xa6c3,	// (0x00097080) thumbnail_qdial_pane

0xa71f,	// (0x000970dc) list_help_pane

0xa728,	// (0x000970e5) scroll_pane_cp02

0x14dd,	// (0x0008de9a) help_list_pane_t1_ParamLimits

0x14dd,	// (0x0008de9a) help_list_pane_t1

0xa731,	// (0x000970ee) bg_notes_pane_g2

0xa739,	// (0x000970f6) bg_notes_pane_g3

0xa741,	// (0x000970fe) notes_bg_pane_g1

0xa749,	// (0x00097106) notes_bg_pane_g4

0xa751,	// (0x0009710e) notes_bg_pane_g5

0xa759,	// (0x00097116) notes_bg_pane_g6

0xa761,	// (0x0009711e) notes_bg_pane_g7

0xa769,	// (0x00097126) notes_bg_pane_g8

0xa771,	// (0x0009712e) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009bb80) notes_bg_pane_g

0x14fa,	// (0x0008deb7) list_notes_text_pane_ParamLimits

0x14fa,	// (0x0008deb7) list_notes_text_pane

0xdb4b,	// (0x0009a508) list_notes_text_pane_g1

0x150f,	// (0x0008decc) list_notes_text_pane_t1

0xa612,	// (0x00096fcf) listscroll_cale_week_pane

0x153a,	// (0x0008def7) bg_cale_heading_pane

0xdb65,	// (0x0009a522) bg_cale_pane_cp01

0x154e,	// (0x0008df0b) cale_week_corner_pane

0x1564,	// (0x0008df21) cale_week_day_heading_pane

0x1578,	// (0x0008df35) cale_week_scroll_pane_g1

0x1589,	// (0x0008df46) cale_week_scroll_pane_g2

0x159a,	// (0x0008df57) cale_week_scroll_pane_g3

0x15ab,	// (0x0008df68) cale_week_scroll_pane_g4

0x15bc,	// (0x0008df79) cale_week_scroll_pane_g5

0x15cf,	// (0x0008df8c) cale_week_scroll_pane_g6

0x15e2,	// (0x0008df9f) cale_week_scroll_pane_g7

0x15f5,	// (0x0008dfb2) cale_week_scroll_pane_g8

0x1608,	// (0x0008dfc5) cale_week_scroll_pane_g9

0x1619,	// (0x0008dfd6) cale_week_scroll_pane_g10

0x162a,	// (0x0008dfe7) cale_week_scroll_pane_g11

0x163b,	// (0x0008dff8) cale_week_scroll_pane_g12

0x164c,	// (0x0008e009) cale_week_scroll_pane_g13

0x165d,	// (0x0008e01a) cale_week_scroll_pane_g14

0x166e,	// (0x0008e02b) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009bb8f) cale_week_scroll_pane_g

0x167f,	// (0x0008e03c) cale_week_time_pane

0x1692,	// (0x0008e04f) grid_cale_week_pane

0x16a7,	// (0x0008e064) scroll_pane_cp08

0x16c1,	// (0x0008e07e) cell_cale_week_pane_ParamLimits

0x16c1,	// (0x0008e07e) cell_cale_week_pane

0x1701,	// (0x0008e0be) cale_week_day_heading_pane_t1

0x172e,	// (0x0008e0eb) cale_week_day_heading_pane_t2

0x175b,	// (0x0008e118) cale_week_day_heading_pane_t3

0x1788,	// (0x0008e145) cale_week_day_heading_pane_t4

0x17b5,	// (0x0008e172) cale_week_day_heading_pane_t5

0x17e2,	// (0x0008e19f) cale_week_day_heading_pane_t6

0x1811,	// (0x0008e1ce) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009bbae) cale_week_day_heading_pane_t

0xdb90,	// (0x0009a54d) bg_cale_side_pane

0x183e,	// (0x0008e1fb) cale_week_time_pane_t1

0x1856,	// (0x0008e213) cale_week_time_pane_t2

0x186e,	// (0x0008e22b) cale_week_time_pane_t3

0x1886,	// (0x0008e243) cale_week_time_pane_t4

0x189e,	// (0x0008e25b) cale_week_time_pane_t5

0x18b6,	// (0x0008e273) cale_week_time_pane_t6

0x18ce,	// (0x0008e28b) cale_week_time_pane_t7

0x18e6,	// (0x0008e2a3) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009bbbd) cale_week_time_pane_t

0x18fe,	// (0x0008e2bb) cell_cale_week_pane_g2

0x1917,	// (0x0008e2d4) cell_cale_week_pane_g3_ParamLimits

0x1917,	// (0x0008e2d4) cell_cale_week_pane_g3

0xdb9e,	// (0x0009a55b) grid_highlight_pane_cp07

0xdba6,	// (0x0009a563) listscroll_gms_pane

0xdbb0,	// (0x0009a56d) grid_gms_pane

0xdbb9,	// (0x0009a576) listscroll_gms_pane_g1

0xdbc1,	// (0x0009a57e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009bbce) listscroll_gms_pane_g

0x192f,	// (0x0008e2ec) scroll_pane_cp010

0x193a,	// (0x0008e2f7) cell_gms_pane_ParamLimits

0x193a,	// (0x0008e2f7) cell_gms_pane

0x194d,	// (0x0008e30a) cell_gms_pane_g1

0xdbc9,	// (0x0009a586) cell_gms_pane_g2

0xdbd1,	// (0x0009a58e) cell_gms_pane_g3

0xdbda,	// (0x0009a597) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009bbd3) cell_gms_pane_g

0xdbe3,	// (0x0009a5a0) grid_highlight_pane_cp09

0x4462,	// (0x00090e1f) phob_pre_status_pane_g1

0x446a,	// (0x00090e27) phob_pre_status_pane_g2

0x4472,	// (0x00090e2f) phob_pre_status_pane_g3

0x447a,	// (0x00090e37) phob_pre_status_pane_g4

0x0004,

0xf586,	// (0x0009bf43) phob_pre_status_pane_g

0x448a,	// (0x00090e47) phob_pre_status_pane_t1

0x4498,	// (0x00090e55) phob_pre_status_pane_t2

0x44a8,	// (0x00090e65) phob_pre_status_pane_t3

0x0002,

0xf591,	// (0x0009bf4e) phob_pre_status_pane_t

0xa2b4,	// (0x00096c71) bg_list_pane_cp05

0x195d,	// (0x0008e31a) grid_vorec_pane

0xa779,	// (0x00097136) vorec_t1

0xa787,	// (0x00097144) vorec_t2

0xa795,	// (0x00097152) vorec_t3

0xa7a3,	// (0x00097160) vorec_t4

0xa7b1,	// (0x0009716e) vorec_t5

0xa7bf,	// (0x0009717c) vorec_t6

0x0006,

0xf21f,	// (0x0009bbdc) vorec_t

0xa7db,	// (0x00097198) wait_bar_pane_cp01

0x1965,	// (0x0008e322) cell_vorec_pane_ParamLimits

0x1965,	// (0x0008e322) cell_vorec_pane

0xdbeb,	// (0x0009a5a8) cell_vorec_pane_g1

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp05

0x1990,	// (0x0008e34d) cams_zoom_pane

0x199f,	// (0x0008e35c) image_vga_pane

0x19b9,	// (0x0008e376) main_camera_pane_g1

0x19cb,	// (0x0008e388) main_camera_pane_g2

0x19db,	// (0x0008e398) main_camera_pane_g3

0x19eb,	// (0x0008e3a8) main_camera_pane_g4

0x19fb,	// (0x0008e3b8) main_camera_pane_g5

0x1a0b,	// (0x0008e3c8) main_camera_pane_g6

0x1a1d,	// (0x0008e3da) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009bbeb) main_camera_pane_g

0x1a2d,	// (0x0008e3ea) main_camera_pane_t1

0x1a43,	// (0x0008e400) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009bbfc) main_camera_pane_t

0x1a7d,	// (0x0008e43a) cams_zoom_pane_cp_ParamLimits

0x1a7d,	// (0x0008e43a) cams_zoom_pane_cp

0x1aa5,	// (0x0008e462) image_cif_pane_ParamLimits

0x1aa5,	// (0x0008e462) image_cif_pane

0x1ae0,	// (0x0008e49d) image_subqcif_pane

0x1ae8,	// (0x0008e4a5) main_video_pane_g1_ParamLimits

0x1ae8,	// (0x0008e4a5) main_video_pane_g1

0x1b0c,	// (0x0008e4c9) main_video_pane_g2_ParamLimits

0x1b0c,	// (0x0008e4c9) main_video_pane_g2

0x1b40,	// (0x0008e4fd) main_video_pane_g3_ParamLimits

0x1b40,	// (0x0008e4fd) main_video_pane_g3

0x1b6e,	// (0x0008e52b) main_video_pane_g4_ParamLimits

0x1b6e,	// (0x0008e52b) main_video_pane_g4

0x1b9c,	// (0x0008e559) main_video_pane_g5_ParamLimits

0x1b9c,	// (0x0008e559) main_video_pane_g5

0xdc01,	// (0x0009a5be) main_video_pane_g6_ParamLimits

0xdc01,	// (0x0009a5be) main_video_pane_g6

0x0006,

0xf244,	// (0x0009bc01) main_video_pane_g_ParamLimits

0xf244,	// (0x0009bc01) main_video_pane_g

0x1bc9,	// (0x0008e586) main_video_pane_t1_ParamLimits

0x1bc9,	// (0x0008e586) main_video_pane_t1

0xdc1b,	// (0x0009a5d8) cams_zoom_pane_g1

0xdc24,	// (0x0009a5e1) cams_zoom_pane_g2

0xdc2d,	// (0x0009a5ea) cams_zoom_pane_g3

0xdc36,	// (0x0009a5f3) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0009bc10) cams_zoom_pane_g

0x1c26,	// (0x0008e5e3) grid_cams_pane

0x1c40,	// (0x0008e5fd) linegrid_cams_pane

0x1c54,	// (0x0008e611) cell_cams_pane_ParamLimits

0x1c54,	// (0x0008e611) cell_cams_pane

0xdc3f,	// (0x0009a5fc) cams_burst_image_pane

0xdc47,	// (0x0009a604) cell_cams_pane_g1

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp03

0xa68b,	// (0x00097048) mp_bg_pane_g1

0xa2b4,	// (0x00096c71) bg_list_pane_cp03

0xace6,	// (0x000976a3) bg_mp_pane

0xacee,	// (0x000976ab) grid_mp_pane

0xacf6,	// (0x000976b3) media_player_g1

0xacfe,	// (0x000976bb) media_player_t1

0xad0c,	// (0x000976c9) media_player_t2

0xad1a,	// (0x000976d7) media_player_t3

0xad28,	// (0x000976e5) media_player_t4

0xad36,	// (0x000976f3) media_player_t5

0xad44,	// (0x00097701) media_player_t6

0xad52,	// (0x0009770f) media_player_t7

0x0006,

0xf570,	// (0x0009bf2d) media_player_t

0xad60,	// (0x0009771d) wait_bar_pane_cp02

0xf555,	// (0x0009bf12) main_usb_pane_t

0x4459,	// (0x00090e16) cell_mp_pane

0xa68b,	// (0x00097048) cell_mp_pane_g1

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp06

0xdc4f,	// (0x0009a60c) grid_skin_colour_pane

0xdc57,	// (0x0009a614) list_highlight_pane_cp03

0x1d8a,	// (0x0008e747) skin_g1

0xdc5f,	// (0x0009a61c) skin_t1

0xdc6e,	// (0x0009a62b) skin_t2

0x0001,

0xf288,	// (0x0009bc45) skin_t

0x1d92,	// (0x0008e74f) cell_skin_colour_pane_ParamLimits

0x1d92,	// (0x0008e74f) cell_skin_colour_pane

0xdc7c,	// (0x0009a639) cell_skin_colour_pane_g1

0x1e09,	// (0x0008e7c6) call_video_g1_ParamLimits

0x1e09,	// (0x0008e7c6) call_video_g1

0x1e25,	// (0x0008e7e2) call_video_g2_ParamLimits

0x1e25,	// (0x0008e7e2) call_video_g2

0x0001,

0xf28d,	// (0x0009bc4a) call_video_g_ParamLimits

0xf28d,	// (0x0009bc4a) call_video_g

0x1e77,	// (0x0008e834) call_video_uplink_pane_cp1_ParamLimits

0x1e77,	// (0x0008e834) call_video_uplink_pane_cp1

0xdc8e,	// (0x0009a64b) call_video_uplink_pane_cp2

0x1f16,	// (0x0008e8d3) video_down_crop_pane_ParamLimits

0x1f16,	// (0x0008e8d3) video_down_crop_pane

0x200d,	// (0x0008e9ca) video_down_pane_ParamLimits

0x200d,	// (0x0008e9ca) video_down_pane

0xdc96,	// (0x0009a653) video_down_subqcif_pane_ParamLimits

0xdc96,	// (0x0009a653) video_down_subqcif_pane

0xdcae,	// (0x0009a66b) video_down_subqcif_pane_cp_ParamLimits

0xdcae,	// (0x0009a66b) video_down_subqcif_pane_cp

0xdcd2,	// (0x0009a68f) im_reading_pane_ParamLimits

0xdcd2,	// (0x0009a68f) im_reading_pane

0x211b,	// (0x0008ead8) im_writing_pane_ParamLimits

0x211b,	// (0x0008ead8) im_writing_pane

0x2131,	// (0x0008eaee) im_reading_pane_t1

0xdcec,	// (0x0009a6a9) list_im_pane

0xdcfd,	// (0x0009a6ba) scroll_pane_cp07

0x216a,	// (0x0008eb27) im_writing_pane_t1_ParamLimits

0x216a,	// (0x0008eb27) im_writing_pane_t1

0xdd16,	// (0x0009a6d3) im_writing_pane_t2_ParamLimits

0xdd16,	// (0x0009a6d3) im_writing_pane_t2

0x0001,

0xf297,	// (0x0009bc54) im_writing_pane_t_ParamLimits

0xf297,	// (0x0009bc54) im_writing_pane_t

0xa2b4,	// (0x00096c71) input_focus_pane_cp04

0xa2b4,	// (0x00096c71) input_focus_pane_cp05

0x217f,	// (0x0008eb3c) list_im_single_pane_ParamLimits

0x217f,	// (0x0008eb3c) list_im_single_pane

0x2193,	// (0x0008eb50) list_single_im_pane_t1

0x4419,	// (0x00090dd6) blid_accuracy_pane

0x4421,	// (0x00090dde) blid_compass_pane

0x442b,	// (0x00090de8) main_location_t1

0x443b,	// (0x00090df8) main_location_t2

0x444b,	// (0x00090e08) main_location_t3

0x0002,

0xf57f,	// (0x0009bf3c) main_location_t

0xa2b4,	// (0x00096c71) aid_levels_location

0xa68b,	// (0x00097048) blid_accuracy_pane_g1

0xa68b,	// (0x00097048) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0009bcb6) blid_accuracy_pane_g

0xdd5e,	// (0x0009a71b) wml_content_pane

0xdd9c,	// (0x0009a759) wml_button_pane_ParamLimits

0xdd9c,	// (0x0009a759) wml_button_pane

0x21a2,	// (0x0008eb5f) wml_list_single_large_pane_ParamLimits

0x21a2,	// (0x0008eb5f) wml_list_single_large_pane

0x21b7,	// (0x0008eb74) wml_list_single_medium_pane_ParamLimits

0x21b7,	// (0x0008eb74) wml_list_single_medium_pane

0x21cd,	// (0x0008eb8a) wml_list_single_small_pane_ParamLimits

0x21cd,	// (0x0008eb8a) wml_list_single_small_pane

0xddb0,	// (0x0009a76d) wml_selection_box_pane_ParamLimits

0xddb0,	// (0x0009a76d) wml_selection_box_pane

0xddc3,	// (0x0009a780) wml_list_single_pane_t1

0xddd2,	// (0x0009a78f) wml_list_single_medium_pane_t1

0xdde1,	// (0x0009a79e) wml_list_single_large_pane_t1

0xddf0,	// (0x0009a7ad) input_focus_pane_cp02_ParamLimits

0xddf0,	// (0x0009a7ad) input_focus_pane_cp02

0xde03,	// (0x0009a7c0) wml_selection_box_pane_g1

0xde0c,	// (0x0009a7c9) wml_selection_box_pane_t1_ParamLimits

0xde0c,	// (0x0009a7c9) wml_selection_box_pane_t1

0xa50f,	// (0x00096ecc) bg_wml_button_pane_ParamLimits

0xa50f,	// (0x00096ecc) bg_wml_button_pane

0xde24,	// (0x0009a7e1) wml_button_pane_g1

0xde2c,	// (0x0009a7e9) wml_button_pane_t1

0xde24,	// (0x0009a7e1) wml_button_bg_pane_g1

0xde3c,	// (0x0009a7f9) wml_button_bg_pane_g2

0xde44,	// (0x0009a801) wml_button_bg_pane_g3

0xde4c,	// (0x0009a809) wml_button_bg_pane_g4

0xde54,	// (0x0009a811) wml_button_bg_pane_g5

0xde5c,	// (0x0009a819) wml_button_bg_pane_g6

0xde64,	// (0x0009a821) wml_button_bg_pane_g7

0xde6c,	// (0x0009a829) wml_button_bg_pane_g8

0xde74,	// (0x0009a831) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0009bc59) wml_button_bg_pane_g

0x21e5,	// (0x0008eba2) bg_list_pane_cp02

0xde7c,	// (0x0009a839) mce_header_pane_ParamLimits

0xde7c,	// (0x0009a839) mce_header_pane

0xde92,	// (0x0009a84f) mce_icon_pane

0xde92,	// (0x0009a84f) mce_image_pane

0xde9b,	// (0x0009a858) mce_text_pane_ParamLimits

0xde9b,	// (0x0009a858) mce_text_pane

0x21ed,	// (0x0008ebaa) scroll_pane_cp03

0xdd94,	// (0x0009a751) scroll_pane_cp04

0xdeae,	// (0x0009a86b) scroll_pane_cp05_ParamLimits

0xdeae,	// (0x0009a86b) scroll_pane_cp05

0x21f7,	// (0x0008ebb4) mce_header_field_pane_ParamLimits

0x21f7,	// (0x0008ebb4) mce_header_field_pane

0x220e,	// (0x0008ebcb) mce_header_field_pane_2_ParamLimits

0x220e,	// (0x0008ebcb) mce_header_field_pane_2

0x2224,	// (0x0008ebe1) mce_header_field_pane_3

0x222c,	// (0x0008ebe9) list_single_mce_message_pane_ParamLimits

0x222c,	// (0x0008ebe9) list_single_mce_message_pane

0x2241,	// (0x0008ebfe) list_single_mce_smart_pane_ParamLimits

0x2241,	// (0x0008ebfe) list_single_mce_smart_pane

0xdeba,	// (0x0009a877) input_focus_pane_cp03

0xdec3,	// (0x0009a880) list_header_data_pane

0x2261,	// (0x0008ec1e) mce_header_field_pane_t1

0x2271,	// (0x0008ec2e) list_single_mce_header_pane_ParamLimits

0x2271,	// (0x0008ec2e) list_single_mce_header_pane

0xdecb,	// (0x0009a888) list_single_mce_header_pane_t1

0xdeda,	// (0x0009a897) list_single_mce_message_pane_g1

0xdee2,	// (0x0009a89f) list_single_mce_message_pane_t1

0x22a3,	// (0x0008ec60) bg_cale_heading_pane_cp01_ParamLimits

0x22a3,	// (0x0008ec60) bg_cale_heading_pane_cp01

0xdef0,	// (0x0009a8ad) bg_cale_pane_cp02_ParamLimits

0xdef0,	// (0x0009a8ad) bg_cale_pane_cp02

0x22c6,	// (0x0008ec83) cale_month_corner_pane

0x22dc,	// (0x0008ec99) cale_month_day_heading_pane_ParamLimits

0x22dc,	// (0x0008ec99) cale_month_day_heading_pane

0x230f,	// (0x0008eccc) cale_month_pane_g1_ParamLimits

0x230f,	// (0x0008eccc) cale_month_pane_g1

0x232b,	// (0x0008ece8) cale_month_pane_g2_ParamLimits

0x232b,	// (0x0008ece8) cale_month_pane_g2

0x2346,	// (0x0008ed03) cale_month_pane_g3_ParamLimits

0x2346,	// (0x0008ed03) cale_month_pane_g3

0x2372,	// (0x0008ed2f) cale_month_pane_g4_ParamLimits

0x2372,	// (0x0008ed2f) cale_month_pane_g4

0x239e,	// (0x0008ed5b) cale_month_pane_g5_ParamLimits

0x239e,	// (0x0008ed5b) cale_month_pane_g5

0x23d2,	// (0x0008ed8f) cale_month_pane_g6_ParamLimits

0x23d2,	// (0x0008ed8f) cale_month_pane_g6

0x240e,	// (0x0008edcb) cale_month_pane_g7_ParamLimits

0x240e,	// (0x0008edcb) cale_month_pane_g7

0x244a,	// (0x0008ee07) cale_month_pane_g8_ParamLimits

0x244a,	// (0x0008ee07) cale_month_pane_g8

0x2486,	// (0x0008ee43) cale_month_pane_g9_ParamLimits

0x2486,	// (0x0008ee43) cale_month_pane_g9

0x24c0,	// (0x0008ee7d) cale_month_pane_g10_ParamLimits

0x24c0,	// (0x0008ee7d) cale_month_pane_g10

0x24fa,	// (0x0008eeb7) cale_month_pane_g11_ParamLimits

0x24fa,	// (0x0008eeb7) cale_month_pane_g11

0x2534,	// (0x0008eef1) cale_month_pane_g12_ParamLimits

0x2534,	// (0x0008eef1) cale_month_pane_g12

0x256e,	// (0x0008ef2b) cale_month_pane_g13_ParamLimits

0x256e,	// (0x0008ef2b) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0009bc6c) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0009bc6c) cale_month_pane_g

0x25a8,	// (0x0008ef65) cale_month_week_pane

0x25bb,	// (0x0008ef78) grid_cale_month_pane_ParamLimits

0x25bb,	// (0x0008ef78) grid_cale_month_pane

0x25e9,	// (0x0008efa6) cale_month_day_heading_pane_t1

0x2647,	// (0x0008f004) cale_month_day_heading_pane_t2

0x26ac,	// (0x0008f069) cale_month_day_heading_pane_t3

0x2711,	// (0x0008f0ce) cale_month_day_heading_pane_t4

0x2776,	// (0x0008f133) cale_month_day_heading_pane_t5

0x27eb,	// (0x0008f1a8) cale_month_day_heading_pane_t6

0x2860,	// (0x0008f21d) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0009bc87) cale_month_day_heading_pane_t

0xdb90,	// (0x0009a54d) bg_cale_side_pane_cp01

0x28d5,	// (0x0008f292) cale_month_week_pane_t1

0x28ec,	// (0x0008f2a9) cale_month_week_pane_t2

0x2903,	// (0x0008f2c0) cale_month_week_pane_t3

0x291a,	// (0x0008f2d7) cale_month_week_pane_t4

0x2931,	// (0x0008f2ee) cale_month_week_pane_t5

0x2948,	// (0x0008f305) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0009bc96) cale_month_week_pane_t

0x295f,	// (0x0008f31c) cell_cale_month_pane_ParamLimits

0x295f,	// (0x0008f31c) cell_cale_month_pane

0xa7e3,	// (0x000971a0) cell_cale_month_pane_g1

0x2a5f,	// (0x0008f41c) cell_cale_month_pane_t1_ParamLimits

0x2a5f,	// (0x0008f41c) cell_cale_month_pane_t1

0xdb9e,	// (0x0009a55b) grid_highlight_pane_cp08

0xa68b,	// (0x00097048) main_smil_g1

0x2a7b,	// (0x0008f438) smil_status_pane

0xdf25,	// (0x0009a8e2) smil_text_pane

0xac06,	// (0x000975c3) bg_popup_call3_rect_pane_g8

0xac0e,	// (0x000975cb) bg_popup_call3_rect_pane_g9

0x0008,

0xf513,	// (0x0009bed0) bg_popup_call3_rect_pane_g

0xae88,	// (0x00097845) smil_status_volume_pane_g1

0xdf2f,	// (0x0009a8ec) smil_status_pane_t1

0xaebb,	// (0x00097878) volume_smil_pane

0xdf46,	// (0x0009a903) list_smil_text_pane

0x2a8e,	// (0x0008f44b) scroll_pane_cp011

0x2a99,	// (0x0008f456) smil_text_list_pane_t1_ParamLimits

0x2a99,	// (0x0008f456) smil_text_list_pane_t1

0xa7ef,	// (0x000971ac) aid_volume_smil_ParamLimits

0xa7ef,	// (0x000971ac) aid_volume_smil

0xa68b,	// (0x00097048) smil_volume_pane_g1

0xa68b,	// (0x00097048) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0009bcb6) smil_volume_pane_g

0xa612,	// (0x00096fcf) listscroll_cale_day_pane

0xdf50,	// (0x0009a90d) bg_cale_pane

0xdf68,	// (0x0009a925) list_cale_pane

0xdf79,	// (0x0009a936) scroll_pane_cp09

0xdf8a,	// (0x0009a947) cale_bg_pane_g1

0xdf92,	// (0x0009a94f) cale_bg_pane_g2

0xdf9a,	// (0x0009a957) cale_bg_pane_g3

0xdfa2,	// (0x0009a95f) cale_bg_pane_g4

0xdfaa,	// (0x0009a967) cale_bg_pane_g5

0xdfb2,	// (0x0009a96f) cale_bg_pane_g6

0xdfba,	// (0x0009a977) cale_bg_pane_g7

0xdfc2,	// (0x0009a97f) cale_bg_pane_g8

0xdfca,	// (0x0009a987) cale_bg_pane_g9

0x0008,

0x005f,	// (0x0008ca1c) cale_bg_pane_g

0x1965,	// (0x0008e322) list_cale_time_pane_ParamLimits

0x1965,	// (0x0008e322) list_cale_time_pane

0xdfd2,	// (0x0009a98f) list_cale_time_pane_g1_ParamLimits

0xdfd2,	// (0x0009a98f) list_cale_time_pane_g1

0xdfde,	// (0x0009a99b) list_cale_time_pane_g2_ParamLimits

0xdfde,	// (0x0009a99b) list_cale_time_pane_g2

0x2adf,	// (0x0008f49c) list_cale_time_pane_g3_ParamLimits

0x2adf,	// (0x0008f49c) list_cale_time_pane_g3

0x2aed,	// (0x0008f4aa) list_cale_time_pane_g4_ParamLimits

0x2aed,	// (0x0008f4aa) list_cale_time_pane_g4

0x2afb,	// (0x0008f4b8) list_cale_time_pane_g5_ParamLimits

0x2afb,	// (0x0008f4b8) list_cale_time_pane_g5

0x0005,

0xf2fe,	// (0x0009bcbb) list_cale_time_pane_g_ParamLimits

0xf2fe,	// (0x0009bcbb) list_cale_time_pane_g

0xdff8,	// (0x0009a9b5) list_cale_time_pane_t1_ParamLimits

0xdff8,	// (0x0009a9b5) list_cale_time_pane_t1

0xe020,	// (0x0009a9dd) list_cale_time_pane_t2_ParamLimits

0xe020,	// (0x0009a9dd) list_cale_time_pane_t2

0x2e6c,	// (0x0008f829) aid_blid_cardinal_pane

0x2eaa,	// (0x0008f867) compass_pane_t4

0xe048,	// (0x0009aa05) list_cale_time_pane_t4_ParamLimits

0xe048,	// (0x0009aa05) list_cale_time_pane_t4

0x2eb8,	// (0x0008f875) compass_pane_t5

0x2ec6,	// (0x0008f883) compass_pane_t6

0x2ed4,	// (0x0008f891) compass_pane_t7

0xe481,	// (0x0009ae3e) navi_pane_cc_t1

0xe5d6,	// (0x0009af93) aid_phob_thumbnail_center_pane

0x3608,	// (0x0008ffc5) main_postcard_pane_g4_ParamLimits

0x0002,

0x007f,	// (0x0008ca3c) list_cale_time_pane_t_ParamLimits

0x007f,	// (0x0008ca3c) list_cale_time_pane_t

0x9f0b,	// (0x000968c8) bg_popup_window_pane_cp02_ParamLimits

0x9f0b,	// (0x000968c8) bg_popup_window_pane_cp02

0xe070,	// (0x0009aa2d) heading_pane_cp01_ParamLimits

0xe070,	// (0x0009aa2d) heading_pane_cp01

0xe07c,	// (0x0009aa39) loc_req_pane_ParamLimits

0xe07c,	// (0x0009aa39) loc_req_pane

0xe08c,	// (0x0009aa49) loc_type_pane_ParamLimits

0xe08c,	// (0x0009aa49) loc_type_pane

0xe09e,	// (0x0009aa5b) loc_type_pane_t1_ParamLimits

0xe09e,	// (0x0009aa5b) loc_type_pane_t1

0xe0b0,	// (0x0009aa6d) loc_type_pane_t2_ParamLimits

0xe0b0,	// (0x0009aa6d) loc_type_pane_t2

0xe0c2,	// (0x0009aa7f) loc_type_pane_t3_ParamLimits

0xe0c2,	// (0x0009aa7f) loc_type_pane_t3

0x0002,

0x0086,	// (0x0008ca43) loc_type_pane_t_ParamLimits

0x0086,	// (0x0008ca43) loc_type_pane_t

0xe0d4,	// (0x0009aa91) list_loc_req_pane

0xe0de,	// (0x0009aa9b) scroll_pane_cp012

0x2b09,	// (0x0008f4c6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b09,	// (0x0008f4c6) list_single_loc_request_popup_menu_pane

0xe0e9,	// (0x0009aaa6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe0e9,	// (0x0009aaa6) list_single_loc_request_popup_menu_pane_g1

0xe0f5,	// (0x0009aab2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe0f5,	// (0x0009aab2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x008d,	// (0x0008ca4a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x008d,	// (0x0008ca4a) list_single_loc_request_popup_menu_pane_g

0xe101,	// (0x0009aabe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe101,	// (0x0009aabe) list_single_loc_request_popup_menu_pane_t1

0xa50f,	// (0x00096ecc) bg_popup_window_pane_cp03_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_window_pane_cp03

0xeb31,	// (0x0009b4ee) heading_loc_req_pane_ParamLimits

0xeb31,	// (0x0009b4ee) heading_loc_req_pane

0x2b16,	// (0x0008f4d3) popup_dyc_status_message_window_g1_ParamLimits

0x2b16,	// (0x0008f4d3) popup_dyc_status_message_window_g1

0x2b2a,	// (0x0008f4e7) popup_dyc_status_message_window_t1_ParamLimits

0x2b2a,	// (0x0008f4e7) popup_dyc_status_message_window_t1

0x2b3f,	// (0x0008f4fc) popup_dyc_status_message_window_t2_ParamLimits

0x2b3f,	// (0x0008f4fc) popup_dyc_status_message_window_t2

0x2b54,	// (0x0008f511) popup_dyc_status_message_window_t3_ParamLimits

0x2b54,	// (0x0008f511) popup_dyc_status_message_window_t3

0x0002,

0xf30b,	// (0x0009bcc8) popup_dyc_status_message_window_t_ParamLimits

0xf30b,	// (0x0009bcc8) popup_dyc_status_message_window_t

0xa2b4,	// (0x00096c71) bg_heading_pane_cp01

0xe117,	// (0x0009aad4) heading_loc_req_pane_g1

0xe11f,	// (0x0009aadc) heading_loc_req_pane_g2

0xe127,	// (0x0009aae4) heading_loc_req_pane_g3

0x0002,

0x0099,	// (0x0008ca56) heading_loc_req_pane_g

0xe12f,	// (0x0009aaec) heading_loc_req_pane_t1

0xe13e,	// (0x0009aafb) bg_popup_sub_pane_cp01_ParamLimits

0xe13e,	// (0x0009aafb) bg_popup_sub_pane_cp01

0xe14c,	// (0x0009ab09) popup_cale_events_window_g1_ParamLimits

0xe14c,	// (0x0009ab09) popup_cale_events_window_g1

0xe16c,	// (0x0009ab29) popup_cale_events_window_g2_ParamLimits

0xe16c,	// (0x0009ab29) popup_cale_events_window_g2

0x0001,

0x00cd,	// (0x0008ca8a) popup_cale_events_window_g_ParamLimits

0x00cd,	// (0x0008ca8a) popup_cale_events_window_g

0xe18c,	// (0x0009ab49) popup_cale_events_window_t1_ParamLimits

0xe18c,	// (0x0009ab49) popup_cale_events_window_t1

0xe19e,	// (0x0009ab5b) popup_cale_events_window_t2_ParamLimits

0xe19e,	// (0x0009ab5b) popup_cale_events_window_t2

0xe1dc,	// (0x0009ab99) popup_cale_events_window_t3_ParamLimits

0xe1dc,	// (0x0009ab99) popup_cale_events_window_t3

0xe216,	// (0x0009abd3) popup_cale_events_window_t4_ParamLimits

0xe216,	// (0x0009abd3) popup_cale_events_window_t4

0x0003,

0x00d2,	// (0x0008ca8f) popup_cale_events_window_t_ParamLimits

0x00d2,	// (0x0008ca8f) popup_cale_events_window_t

0x2c57,	// (0x0008f614) call_type_pane

0x2c67,	// (0x0008f624) popup_call_status_window_g1

0x2c7b,	// (0x0008f638) popup_call_status_window_g2

0x2c8f,	// (0x0008f64c) popup_call_status_window_g3

0x0002,

0xf33f,	// (0x0009bcfc) popup_call_status_window_g

0xe24c,	// (0x0009ac09) call_type_pane_g1

0xe255,	// (0x0009ac12) call_type_pane_g2

0x0001,

0xf346,	// (0x0009bd03) call_type_pane_g

0xa2b4,	// (0x00096c71) bg_popup_sub_pane_cp02

0xe25e,	// (0x0009ac1b) listscroll_popup_wml_pane

0xe266,	// (0x0009ac23) list_wml_pane

0xe270,	// (0x0009ac2d) scroll_pane_cp013

0xe27b,	// (0x0009ac38) list_single_graphic_popup_wml_pane_ParamLimits

0xe27b,	// (0x0009ac38) list_single_graphic_popup_wml_pane

0xa68b,	// (0x00097048) list_single_graphic_popup_wml_pane_g1

0xe28f,	// (0x0009ac4c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf34b,	// (0x0009bd08) list_single_graphic_popup_wml_pane_g

0xe297,	// (0x0009ac54) list_single_graphic_popup_wml_pane_t1

0xe2ad,	// (0x0009ac6a) aid_call_pane

0xa507,	// (0x00096ec4) popup_clock_analogue_window_g1

0xa507,	// (0x00096ec4) popup_clock_analogue_window_g2

0xa811,	// (0x000971ce) popup_clock_analogue_window_g3

0xa811,	// (0x000971ce) popup_clock_analogue_window_g4

0xa68b,	// (0x00097048) popup_clock_analogue_window_g5

0x0004,

0xf350,	// (0x0009bd0d) popup_clock_analogue_window_g

0xa819,	// (0x000971d6) popup_clock_analogue_window_t1

0xa827,	// (0x000971e4) clock_digital_number_pane_ParamLimits

0xa827,	// (0x000971e4) clock_digital_number_pane

0xa833,	// (0x000971f0) clock_digital_number_pane_cp02_ParamLimits

0xa833,	// (0x000971f0) clock_digital_number_pane_cp02

0xa83f,	// (0x000971fc) clock_digital_number_pane_cp03_ParamLimits

0xa83f,	// (0x000971fc) clock_digital_number_pane_cp03

0xa84b,	// (0x00097208) clock_digital_number_pane_cp04_ParamLimits

0xa84b,	// (0x00097208) clock_digital_number_pane_cp04

0xa85b,	// (0x00097218) clock_digital_separator_pane_ParamLimits

0xa85b,	// (0x00097218) clock_digital_separator_pane

0xa867,	// (0x00097224) popup_clock_digital_window_t1

0xa68b,	// (0x00097048) clock_digital_number_pane_g1

0xa68b,	// (0x00097048) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0009bcb6) clock_digital_number_pane_g

0xa68b,	// (0x00097048) clock_digital_separator_pane_g1

0xa68b,	// (0x00097048) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0009bcb6) clock_digital_separator_pane_g

0xa2b4,	// (0x00096c71) bg_popup_window_pane_cp04

0xe2b5,	// (0x0009ac72) heading_pane_cp03

0xe2bd,	// (0x0009ac7a) listscroll_popup_gms_pane

0xe2c5,	// (0x0009ac82) grid_large_graphic_popup_pane

0xe2cf,	// (0x0009ac8c) listscroll_popup_gms_pane_g1

0xe2d7,	// (0x0009ac94) listscroll_popup_gms_pane_g2

0x0001,

0xf35b,	// (0x0009bd18) listscroll_popup_gms_pane_g

0xdd94,	// (0x0009a751) scroll_pane_cp014

0x2c9e,	// (0x0008f65b) cell_large_graphic_popup_pane_ParamLimits

0x2c9e,	// (0x0008f65b) cell_large_graphic_popup_pane

0x2cb6,	// (0x0008f673) cell_large_graphic_popup_pane_g1_ParamLimits

0x2cb6,	// (0x0008f673) cell_large_graphic_popup_pane_g1

0xe2df,	// (0x0009ac9c) cell_large_graphic_popup_pane_g2_ParamLimits

0xe2df,	// (0x0009ac9c) cell_large_graphic_popup_pane_g2

0xe2eb,	// (0x0009aca8) cell_large_graphic_popup_pane_g3_ParamLimits

0xe2eb,	// (0x0009aca8) cell_large_graphic_popup_pane_g3

0xe2f8,	// (0x0009acb5) cell_large_graphic_popup_pane_g4_ParamLimits

0xe2f8,	// (0x0009acb5) cell_large_graphic_popup_pane_g4

0x0003,

0xf360,	// (0x0009bd1d) cell_large_graphic_popup_pane_g_ParamLimits

0xf360,	// (0x0009bd1d) cell_large_graphic_popup_pane_g

0xe308,	// (0x0009acc5) grid_highlight_pane_cp010

0xa68b,	// (0x00097048) bg_popup_call_pane_g1

0xe312,	// (0x0009accf) list_single_graphic_popup_conf_pane_ParamLimits

0xe312,	// (0x0009accf) list_single_graphic_popup_conf_pane

0xe325,	// (0x0009ace2) list_highlight_pane_cp01

0xe32e,	// (0x0009aceb) list_single_graphic_popup_conf_pane_g1

0xe336,	// (0x0009acf3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf369,	// (0x0009bd26) list_single_graphic_popup_conf_pane_g

0xe33e,	// (0x0009acfb) list_single_graphic_popup_conf_pane_t1

0xe34c,	// (0x0009ad09) linegrid_cams_pane_g1

0x2cc2,	// (0x0008f67f) linegrid_cams_pane_g2

0xdbd1,	// (0x0009a58e) linegrid_cams_pane_g3

0xe355,	// (0x0009ad12) linegrid_cams_pane_g4

0x2ccb,	// (0x0008f688) linegrid_cams_pane_g5

0x2cd4,	// (0x0008f691) linegrid_cams_pane_g6

0xdbda,	// (0x0009a597) linegrid_cams_pane_g7

0x0006,

0xf36e,	// (0x0009bd2b) linegrid_cams_pane_g

0xe35e,	// (0x0009ad1b) popup_clock_analogue_window

0xe35e,	// (0x0009ad1b) popup_clock_digital_window

0xa2b4,	// (0x00096c71) popup_phob_thumbnail_window

0xa68b,	// (0x00097048) call_video_uplink_pane_g1

0xe367,	// (0x0009ad24) call_video_uplink_pane_g2

0x0001,

0xf37d,	// (0x0009bd3a) call_video_uplink_pane_g

0xe36f,	// (0x0009ad2c) video_uplink_pane

0xe377,	// (0x0009ad34) mce_image_pane_g1

0x2cdf,	// (0x0008f69c) mce_image_pane_g2

0x2ce9,	// (0x0008f6a6) mce_image_pane_g3

0x2cf1,	// (0x0008f6ae) mce_image_pane_g4

0x2cf9,	// (0x0008f6b6) mce_image_pane_g5

0x0004,

0xf382,	// (0x0009bd3f) mce_image_pane_g

0xe381,	// (0x0009ad3e) control_top_pane_stacon_cp01_ParamLimits

0xe381,	// (0x0009ad3e) control_top_pane_stacon_cp01

0xe395,	// (0x0009ad52) uni_indicator_pane_stacon_cp01_ParamLimits

0xe395,	// (0x0009ad52) uni_indicator_pane_stacon_cp01

0xe3a6,	// (0x0009ad63) bg_popup_sub_pane_cp03

0x2d01,	// (0x0008f6be) chi_dic_find_pane

0x2d09,	// (0x0008f6c6) listscroll_chi_dic_pane

0x2d12,	// (0x0008f6cf) main_pane_chidic_g1

0xe3b0,	// (0x0009ad6d) chi_dic_find_pane_t1

0xe3be,	// (0x0009ad7b) find_chidic_pane

0xe3c7,	// (0x0009ad84) chi_dic_list_pane_ParamLimits

0xe3c7,	// (0x0009ad84) chi_dic_list_pane

0xe3d8,	// (0x0009ad95) scroll_pane_cp020

0xe3e0,	// (0x0009ad9d) find_chidic_pane_t1

0xa2b4,	// (0x00096c71) input_focus_pane_cp06

0x2d25,	// (0x0008f6e2) list_chi_dic_pane_ParamLimits

0x2d25,	// (0x0008f6e2) list_chi_dic_pane

0x2d37,	// (0x0008f6f4) list_chi_dic_pane_t1_ParamLimits

0x2d37,	// (0x0008f6f4) list_chi_dic_pane_t1

0xa2b4,	// (0x00096c71) list_highlight_pane_cp020

0xe3ef,	// (0x0009adac) bg_cale_heading_pane_g1

0x2d4a,	// (0x0008f707) bg_cale_heading_pane_g2

0x2d52,	// (0x0008f70f) bg_cale_heading_pane_g3

0x2d5a,	// (0x0008f717) bg_cale_heading_pane_g4

0x2d64,	// (0x0008f721) bg_cale_heading_pane_g5

0x2d6e,	// (0x0008f72b) bg_cale_heading_pane_g6

0x2d76,	// (0x0008f733) bg_cale_heading_pane_g7

0x2d7e,	// (0x0008f73b) bg_cale_heading_pane_g8

0x2d88,	// (0x0008f745) bg_cale_heading_pane_g9

0x0008,

0xf38d,	// (0x0009bd4a) bg_cale_heading_pane_g

0xe3ef,	// (0x0009adac) bg_cale_side_pane_g1

0x2d92,	// (0x0008f74f) bg_cale_side_pane_g2

0x2d9a,	// (0x0008f757) bg_cale_side_pane_g3

0x2da2,	// (0x0008f75f) bg_cale_side_pane_g4

0x2daa,	// (0x0008f767) bg_cale_side_pane_g5

0x2db2,	// (0x0008f76f) bg_cale_side_pane_g6

0x2dba,	// (0x0008f777) bg_cale_side_pane_g7

0x2dc2,	// (0x0008f77f) bg_cale_side_pane_g8

0x2dca,	// (0x0008f787) bg_cale_side_pane_g9

0x0008,

0xf3a0,	// (0x0009bd5d) bg_cale_side_pane_g

0x2dd2,	// (0x0008f78f) popup_call_status_window_ParamLimits

0x2dd2,	// (0x0008f78f) popup_call_status_window

0xe405,	// (0x0009adc2) stacon_top_pane

0xe40d,	// (0x0009adca) status_pane_ParamLimits

0xe40d,	// (0x0009adca) status_pane

0xe422,	// (0x0009addf) status_small_pane

0xe42a,	// (0x0009ade7) control_pane

0xa2b4,	// (0x00096c71) stacon_bottom_pane

0xe432,	// (0x0009adef) list_single_mce_smart_pane_t1_ParamLimits

0xe432,	// (0x0009adef) list_single_mce_smart_pane_t1

0xe445,	// (0x0009ae02) list_single_mce_smart_pane_t2_ParamLimits

0xe445,	// (0x0009ae02) list_single_mce_smart_pane_t2

0x0001,

0x014f,	// (0x0008cb0c) list_single_mce_smart_pane_t_ParamLimits

0x014f,	// (0x0008cb0c) list_single_mce_smart_pane_t

0x2e1b,	// (0x0008f7d8) compass_pane

0x2e24,	// (0x0008f7e1) main_location2_pane_t1

0x2e36,	// (0x0008f7f3) main_location2_pane_t2

0x2e48,	// (0x0008f805) main_location2_pane_t3

0x0003,

0xf3b3,	// (0x0009bd70) main_location2_pane_t

0xe464,	// (0x0009ae21) compass_pane_g1_ParamLimits

0xe464,	// (0x0009ae21) compass_pane_g1

0x2e8c,	// (0x0008f849) compass_pane_t1

0x2e9b,	// (0x0008f858) compass_pane_t2

0x0005,

0xf3bc,	// (0x0009bd79) compass_pane_t

0x2ee2,	// (0x0008f89f) text_secondary_cp61

0xe478,	// (0x0009ae35) navi_pane_cams_g5

0xe49b,	// (0x0009ae58) navi_pane_im_t1

0xe4a9,	// (0x0009ae66) navi_pane_mp_g1_ParamLimits

0xe4a9,	// (0x0009ae66) navi_pane_mp_g1

0xe4bd,	// (0x0009ae7a) navi_pane_mp_g2_ParamLimits

0xe4bd,	// (0x0009ae7a) navi_pane_mp_g2

0xe4c9,	// (0x0009ae86) navi_pane_mp_g3_ParamLimits

0xe4c9,	// (0x0009ae86) navi_pane_mp_g3

0x0002,

0x0171,	// (0x0008cb2e) navi_pane_mp_g_ParamLimits

0x0171,	// (0x0008cb2e) navi_pane_mp_g

0xe4d5,	// (0x0009ae92) navi_pane_mp_t1

0xe4e3,	// (0x0009aea0) navi_pane_mp_t2

0x0002,

0x0178,	// (0x0008cb35) navi_pane_mp_t

0xe51f,	// (0x0009aedc) navi_pane_vt_g1

0xe4d5,	// (0x0009ae92) navi_pane_vt_t1

0xe527,	// (0x0009aee4) navi_slider_pane

0xe52f,	// (0x0009aeec) zooming_pane

0xe537,	// (0x0009aef4) navi_slider_pane_g1

0xa884,	// (0x00097241) navi_slider_pane_g2

0x0006,

0xf3d0,	// (0x0009bd8d) navi_slider_pane_g

0xe55b,	// (0x0009af18) aid_levels_zoom

0xe563,	// (0x0009af20) zooming_pane_g1

0xe56b,	// (0x0009af28) zooming_pane_g2

0xe56b,	// (0x0009af28) zooming_pane_g3

0x0002,

0x018e,	// (0x0008cb4b) zooming_pane_g

0xe573,	// (0x0009af30) level_10_zoom

0xe57c,	// (0x0009af39) level_11_zoom

0xe585,	// (0x0009af42) level_1_zoom

0xe58e,	// (0x0009af4b) level_2_zoom

0xe597,	// (0x0009af54) level_3_zoom

0xe5a0,	// (0x0009af5d) level_4_zoom

0xe5a9,	// (0x0009af66) level_5_zoom

0xe5b2,	// (0x0009af6f) level_6_zoom

0xe5bb,	// (0x0009af78) level_7_zoom

0xe5c4,	// (0x0009af81) level_8_zoom

0xe5cd,	// (0x0009af8a) level_9_zoom

0xe5de,	// (0x0009af9b) popup_phob_thumbnail_window_g1

0xe5e6,	// (0x0009afa3) popup_phob_thumbnail_window_g2

0x0001,

0x0195,	// (0x0008cb52) popup_phob_thumbnail_window_g

0xad68,	// (0x00097725) level_1_location

0xad70,	// (0x0009772d) level_2_location

0xad78,	// (0x00097735) level_3_location

0xad80,	// (0x0009773d) level_4_location

0xe52f,	// (0x0009aeec) level_5_location

0x3007,	// (0x0008f9c4) mce_icon_pane_g1

0x300f,	// (0x0008f9cc) mce_icon_pane_g2

0x0001,

0xf3df,	// (0x0009bd9c) mce_icon_pane_g

0x3017,	// (0x0008f9d4) main_mup_pane_g1_ParamLimits

0x3017,	// (0x0008f9d4) main_mup_pane_g1

0x302d,	// (0x0008f9ea) main_mup_pane_g2_ParamLimits

0x302d,	// (0x0008f9ea) main_mup_pane_g2

0x3045,	// (0x0008fa02) main_mup_pane_g3_ParamLimits

0x3045,	// (0x0008fa02) main_mup_pane_g3

0x305d,	// (0x0008fa1a) main_mup_pane_g4_ParamLimits

0x305d,	// (0x0008fa1a) main_mup_pane_g4

0x3075,	// (0x0008fa32) main_mup_pane_g5_ParamLimits

0x3075,	// (0x0008fa32) main_mup_pane_g5

0x3091,	// (0x0008fa4e) main_mup_pane_g6_ParamLimits

0x3091,	// (0x0008fa4e) main_mup_pane_g6

0x30a9,	// (0x0008fa66) main_mup_pane_g7_ParamLimits

0x30a9,	// (0x0008fa66) main_mup_pane_g7

0x30c1,	// (0x0008fa7e) main_mup_pane_g8_ParamLimits

0x30c1,	// (0x0008fa7e) main_mup_pane_g8

0x30db,	// (0x0008fa98) main_mup_pane_g9_ParamLimits

0x30db,	// (0x0008fa98) main_mup_pane_g9

0x30f5,	// (0x0008fab2) main_mup_pane_g10_ParamLimits

0x30f5,	// (0x0008fab2) main_mup_pane_g10

0x310f,	// (0x0008facc) main_mup_pane_g11_ParamLimits

0x310f,	// (0x0008facc) main_mup_pane_g11

0x3123,	// (0x0008fae0) main_mup_pane_g12_ParamLimits

0x3123,	// (0x0008fae0) main_mup_pane_g12

0x3139,	// (0x0008faf6) main_mup_pane_g13_ParamLimits

0x3139,	// (0x0008faf6) main_mup_pane_g13

0x000c,

0xf3e4,	// (0x0009bda1) main_mup_pane_g_ParamLimits

0xf3e4,	// (0x0009bda1) main_mup_pane_g

0x314d,	// (0x0008fb0a) main_mup_pane_t1_ParamLimits

0x314d,	// (0x0008fb0a) main_mup_pane_t1

0x3167,	// (0x0008fb24) main_mup_pane_t2_ParamLimits

0x3167,	// (0x0008fb24) main_mup_pane_t2

0x317f,	// (0x0008fb3c) main_mup_pane_t3_ParamLimits

0x317f,	// (0x0008fb3c) main_mup_pane_t3

0x3197,	// (0x0008fb54) main_mup_pane_t4_ParamLimits

0x3197,	// (0x0008fb54) main_mup_pane_t4

0x31b5,	// (0x0008fb72) main_mup_pane_t5_ParamLimits

0x31b5,	// (0x0008fb72) main_mup_pane_t5

0x31ca,	// (0x0008fb87) main_mup_pane_t6_ParamLimits

0x31ca,	// (0x0008fb87) main_mup_pane_t6

0x0005,

0xf3ff,	// (0x0009bdbc) main_mup_pane_t_ParamLimits

0xf3ff,	// (0x0009bdbc) main_mup_pane_t

0x31dc,	// (0x0008fb99) mup_progress_pane_ParamLimits

0x31dc,	// (0x0008fb99) mup_progress_pane

0x31e8,	// (0x0008fba5) mup_visualizer_pane_ParamLimits

0x31e8,	// (0x0008fba5) mup_visualizer_pane

0x3218,	// (0x0008fbd5) mup_volume_pane_ParamLimits

0x3218,	// (0x0008fbd5) mup_volume_pane

0xe3f7,	// (0x0009adb4) mup_visualizer_pane_g1_ParamLimits

0xe3f7,	// (0x0009adb4) mup_visualizer_pane_g1

0xe3f7,	// (0x0009adb4) mup_visualizer_pane_g2_ParamLimits

0xe3f7,	// (0x0009adb4) mup_visualizer_pane_g2

0xe464,	// (0x0009ae21) mup_visualizer_pane_g3_ParamLimits

0xe464,	// (0x0009ae21) mup_visualizer_pane_g3

0x0002,

0xf40c,	// (0x0009bdc9) mup_visualizer_pane_g_ParamLimits

0xf40c,	// (0x0009bdc9) mup_visualizer_pane_g

0xa68b,	// (0x00097048) mup_volume_pane_g1

0xe5f6,	// (0x0009afb3) mup_volume_pane_g2

0x0001,

0xf413,	// (0x0009bdd0) mup_volume_pane_g

0xa68b,	// (0x00097048) mup_progress_pane_g1

0xe5ff,	// (0x0009afbc) mup_progress_pane_g2

0xe608,	// (0x0009afc5) mup_progress_pane_g3

0x0002,

0xf418,	// (0x0009bdd5) mup_progress_pane_g

0xa2b4,	// (0x00096c71) bg_popup_window_pane_cp05

0xe611,	// (0x0009afce) heading_pane_cp02_ParamLimits

0xe611,	// (0x0009afce) heading_pane_cp02

0xe62b,	// (0x0009afe8) list_popup_blid_pane

0xe633,	// (0x0009aff0) list_blid_sat_info_pane_ParamLimits

0xe633,	// (0x0009aff0) list_blid_sat_info_pane

0xe646,	// (0x0009b003) list_blid_sat_info_pane_g1

0xe64e,	// (0x0009b00b) list_blid_sat_info_pane_t1

0x332e,	// (0x0008fceb) mup_equalizer_pane_ParamLimits

0x332e,	// (0x0008fceb) mup_equalizer_pane

0x3347,	// (0x0008fd04) mup_equalizer_pane_cp1_ParamLimits

0x3347,	// (0x0008fd04) mup_equalizer_pane_cp1

0x3364,	// (0x0008fd21) mup_equalizer_pane_cp2_ParamLimits

0x3364,	// (0x0008fd21) mup_equalizer_pane_cp2

0x3381,	// (0x0008fd3e) mup_equalizer_pane_cp3_ParamLimits

0x3381,	// (0x0008fd3e) mup_equalizer_pane_cp3

0x33a2,	// (0x0008fd5f) mup_equalizer_pane_cp4_ParamLimits

0x33a2,	// (0x0008fd5f) mup_equalizer_pane_cp4

0x33c3,	// (0x0008fd80) mup_equalizer_pane_cp5

0x33d7,	// (0x0008fd94) mup_equalizer_pane_cp6

0x33eb,	// (0x0008fda8) mup_equalizer_pane_cp7

0xac86,	// (0x00097643) bg_popup_call_poc_act_pane_g9

0xac8e,	// (0x0009764b) bg_popup_call_poc_act_pane_g10

0xac96,	// (0x00097653) bg_popup_call_poc_act_pane_g11

0x000a,

0xa50f,	// (0x00096ecc) mup_scale_pane

0xa68b,	// (0x00097048) mup_scale_pane_g1

0xe65c,	// (0x0009b019) mup_scale_pane_g2

0x0006,

0xf434,	// (0x0009bdf1) mup_scale_pane_g

0xe680,	// (0x0009b03d) msg_data_pane

0xe688,	// (0x0009b045) scroll_pane_cp017

0x3411,	// (0x0008fdce) bg_list_pane_cp04_ParamLimits

0x3411,	// (0x0008fdce) bg_list_pane_cp04

0xe690,	// (0x0009b04d) msg_data_pane_g1

0x3431,	// (0x0008fdee) msg_data_pane_g2

0x343b,	// (0x0008fdf8) msg_data_pane_g3

0x3443,	// (0x0008fe00) msg_data_pane_g4

0x344b,	// (0x0008fe08) msg_data_pane_g5

0x3453,	// (0x0008fe10) msg_data_pane_g6

0x345b,	// (0x0008fe18) msg_data_pane_g7

0x0006,

0xf443,	// (0x0009be00) msg_data_pane_g

0x3463,	// (0x0008fe20) msg_text_pane_ParamLimits

0x3463,	// (0x0008fe20) msg_text_pane

0x3485,	// (0x0008fe42) qrid_highlight_pane_cp011_ParamLimits

0x3485,	// (0x0008fe42) qrid_highlight_pane_cp011

0xa2b4,	// (0x00096c71) msg_body_pane

0xa2b4,	// (0x00096c71) msg_header_pane

0xe6a1,	// (0x0009b05e) input_focus_pane_cp07

0x34a9,	// (0x0008fe66) msg_header_pane_t1_ParamLimits

0x34a9,	// (0x0008fe66) msg_header_pane_t1

0x34bd,	// (0x0008fe7a) msg_header_pane_t2_ParamLimits

0x34bd,	// (0x0008fe7a) msg_header_pane_t2

0x0001,

0xf457,	// (0x0009be14) msg_header_pane_t_ParamLimits

0xf457,	// (0x0009be14) msg_header_pane_t

0xe6b6,	// (0x0009b073) msg_body_pane_g1

0x34cf,	// (0x0008fe8c) msg_body_pane_t1_ParamLimits

0x34cf,	// (0x0008fe8c) msg_body_pane_t1

0x3500,	// (0x0008febd) msg_body_pane_t2_ParamLimits

0x3500,	// (0x0008febd) msg_body_pane_t2

0x3512,	// (0x0008fecf) msg_body_pane_t3_ParamLimits

0x3512,	// (0x0008fecf) msg_body_pane_t3

0x0002,

0xf45c,	// (0x0009be19) msg_body_pane_t_ParamLimits

0xf45c,	// (0x0009be19) msg_body_pane_t

0x355e,	// (0x0008ff1b) main_viewer_pane_g1_ParamLimits

0x355e,	// (0x0008ff1b) main_viewer_pane_g1

0x356c,	// (0x0008ff29) main_viewer_pane_g2_ParamLimits

0x356c,	// (0x0008ff29) main_viewer_pane_g2

0x357a,	// (0x0008ff37) main_viewer_pane_g3_ParamLimits

0x357a,	// (0x0008ff37) main_viewer_pane_g3

0x3589,	// (0x0008ff46) main_viewer_pane_g4_ParamLimits

0x3589,	// (0x0008ff46) main_viewer_pane_g4

0xa8ae,	// (0x0009726b) main_viewer_pane_g5_ParamLimits

0xa8ae,	// (0x0009726b) main_viewer_pane_g5

0xa8ae,	// (0x0009726b) main_viewer_pane_g7_ParamLimits

0xa8ae,	// (0x0009726b) main_viewer_pane_g7

0xe0e9,	// (0x0009aaa6) main_viewer_pane_g8_ParamLimits

0xe0e9,	// (0x0009aaa6) main_viewer_pane_g8

0x0007,

0xf46c,	// (0x0009be29) main_viewer_pane_g_ParamLimits

0xf46c,	// (0x0009be29) main_viewer_pane_g

0xe6be,	// (0x0009b07b) viewer_content_pane_ParamLimits

0xe6be,	// (0x0009b07b) viewer_content_pane

0x35c5,	// (0x0008ff82) main_postcard_pane_g1_ParamLimits

0x35c5,	// (0x0008ff82) main_postcard_pane_g1

0x35db,	// (0x0008ff98) main_postcard_pane_g2_ParamLimits

0x35db,	// (0x0008ff98) main_postcard_pane_g2

0x35f1,	// (0x0008ffae) main_postcard_pane_g3_ParamLimits

0x35f1,	// (0x0008ffae) main_postcard_pane_g3

0x0005,

0xf47d,	// (0x0009be3a) main_postcard_pane_g_ParamLimits

0xf47d,	// (0x0009be3a) main_postcard_pane_g

0x3608,	// (0x0008ffc5) main_postcard_pane_g4

0xae9b,	// (0x00097858) smil_status_volume_pane_g2

0x364b,	// (0x00090008) postcard_pane_ParamLimits

0x364b,	// (0x00090008) postcard_pane

0xe6cc,	// (0x0009b089) postcard_pane_g1_ParamLimits

0xe6cc,	// (0x0009b089) postcard_pane_g1

0x368d,	// (0x0009004a) postcard_pane_g2_ParamLimits

0x368d,	// (0x0009004a) postcard_pane_g2

0x3699,	// (0x00090056) postcard_pane_g3_ParamLimits

0x3699,	// (0x00090056) postcard_pane_g3

0xe6da,	// (0x0009b097) postcard_pane_g4_ParamLimits

0xe6da,	// (0x0009b097) postcard_pane_g4

0x36a5,	// (0x00090062) postcard_pane_g5_ParamLimits

0x36a5,	// (0x00090062) postcard_pane_g5

0x36ba,	// (0x00090077) postcard_pane_g6_ParamLimits

0x36ba,	// (0x00090077) postcard_pane_g6

0xe6cc,	// (0x0009b089) postcard_pane_g7_ParamLimits

0xe6cc,	// (0x0009b089) postcard_pane_g7

0x0006,

0xf48a,	// (0x0009be47) postcard_pane_g_ParamLimits

0xf48a,	// (0x0009be47) postcard_pane_g

0x36ce,	// (0x0009008b) main_mp2_pane_g1_ParamLimits

0x36ce,	// (0x0009008b) main_mp2_pane_g1

0x36da,	// (0x00090097) main_mp2_pane_g2_ParamLimits

0x36da,	// (0x00090097) main_mp2_pane_g2

0x36e6,	// (0x000900a3) main_mp2_pane_g3_ParamLimits

0x36e6,	// (0x000900a3) main_mp2_pane_g3

0x0002,

0xf499,	// (0x0009be56) main_mp2_pane_g_ParamLimits

0xf499,	// (0x0009be56) main_mp2_pane_g

0x36f2,	// (0x000900af) main_mp2_pane_t1_ParamLimits

0x36f2,	// (0x000900af) main_mp2_pane_t1

0x3707,	// (0x000900c4) main_mp2_pane_t2_ParamLimits

0x3707,	// (0x000900c4) main_mp2_pane_t2

0x3719,	// (0x000900d6) main_mp2_pane_t3_ParamLimits

0x3719,	// (0x000900d6) main_mp2_pane_t3

0x0002,

0xf4a0,	// (0x0009be5d) main_mp2_pane_t_ParamLimits

0xf4a0,	// (0x0009be5d) main_mp2_pane_t

0xe6e8,	// (0x0009b0a5) pec_content_pane_ParamLimits

0xe6e8,	// (0x0009b0a5) pec_content_pane

0xdd94,	// (0x0009a751) scroll_pane_cp015

0xe6fa,	// (0x0009b0b7) pec_attribute_pane_ParamLimits

0xe6fa,	// (0x0009b0b7) pec_attribute_pane

0x372b,	// (0x000900e8) pec_content_pane_g1_ParamLimits

0x372b,	// (0x000900e8) pec_content_pane_g1

0xe70a,	// (0x0009b0c7) pec_content_pane_t1_ParamLimits

0xe70a,	// (0x0009b0c7) pec_content_pane_t1

0xe71c,	// (0x0009b0d9) pec_content_pane_t2_ParamLimits

0xe71c,	// (0x0009b0d9) pec_content_pane_t2

0x0001,

0x0262,	// (0x0008cc1f) pec_content_pane_t_ParamLimits

0x0262,	// (0x0008cc1f) pec_content_pane_t

0x3737,	// (0x000900f4) list_single_graphic_pane_cp01_ParamLimits

0x3737,	// (0x000900f4) list_single_graphic_pane_cp01

0xa50f,	// (0x00096ecc) bg_popup_sub_pane_cp04

0xe72e,	// (0x0009b0eb) popup_mup_playback_window_g1

0xe73a,	// (0x0009b0f7) popup_mup_playback_window_t1

0xe74f,	// (0x0009b10c) popup_mup_playback_window_t2

0x0001,

0x0267,	// (0x0008cc24) popup_mup_playback_window_t

0xe786,	// (0x0009b143) main_image_pane_g1_ParamLimits

0xe786,	// (0x0009b143) main_image_pane_g1

0xe7c9,	// (0x0009b186) scroll_pane_cp018_ParamLimits

0xe7c9,	// (0x0009b186) scroll_pane_cp018

0xe7e1,	// (0x0009b19e) scroll_pane_cp016_ParamLimits

0xe7e1,	// (0x0009b19e) scroll_pane_cp016

0x3804,	// (0x000901c1) smil2_image_pane_ParamLimits

0x3804,	// (0x000901c1) smil2_image_pane

0x3834,	// (0x000901f1) smil2_root_pane_ParamLimits

0x3834,	// (0x000901f1) smil2_root_pane

0x386c,	// (0x00090229) smil2_text_pane_ParamLimits

0x386c,	// (0x00090229) smil2_text_pane

0xa2b4,	// (0x00096c71) bg_list_pane_cp06

0xe81d,	// (0x0009b1da) grid_radio_pane

0xa2b4,	// (0x00096c71) bg_popup_window_pane_cp06

0xe825,	// (0x0009b1e2) main_fmradio_pane_t1

0xe2b5,	// (0x0009ac72) heading_pane_cp04

0xe833,	// (0x0009b1f0) main_fmradio_pane_t2

0xac9e,	// (0x0009765b) popup_cale_lunar_info_window_g1

0xe841,	// (0x0009b1fe) main_fmradio_pane_t3

0xaca6,	// (0x00097663) popup_cale_lunar_info_window_g2

0xe84f,	// (0x0009b20c) main_fmradio_pane_t4

0x0001,

0xe85d,	// (0x0009b21a) main_fmradio_pane_t5

0x0004,

0xf562,	// (0x0009bf1f) popup_cale_lunar_info_window_g

0x027c,	// (0x0008cc39) main_fmradio_pane_t

0xe86b,	// (0x0009b228) wait_bar_pane_cp03

0xe873,	// (0x0009b230) cell_fmradio_pane_ParamLimits

0xe873,	// (0x0009b230) cell_fmradio_pane

0xe6cc,	// (0x0009b089) cell_fmradio_pane_g1_ParamLimits

0xe6cc,	// (0x0009b089) cell_fmradio_pane_g1

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp011

0xe886,	// (0x0009b243) poc_content_pane_ParamLimits

0xe886,	// (0x0009b243) poc_content_pane

0xe898,	// (0x0009b255) scroll_pane_cp019

0x38ec,	// (0x000902a9) popup_call_poc_act_window_ParamLimits

0x38ec,	// (0x000902a9) popup_call_poc_act_window

0x3910,	// (0x000902cd) popup_call_poc_inact_window_ParamLimits

0x3910,	// (0x000902cd) popup_call_poc_inact_window

0xf539,	// (0x0009bef6) bg_popup_call_poc_act_pane_g

0xac16,	// (0x000975d3) bg_popup_call_poc_inact_pane_g1

0xac1e,	// (0x000975db) bg_popup_call_poc_inact_pane_g2

0xe8a0,	// (0x0009b25d) popup_call_poc_act_window_g2

0xac26,	// (0x000975e3) bg_popup_call_poc_inact_pane_g3

0xac2e,	// (0x000975eb) bg_popup_call_poc_inact_pane_g4

0xac36,	// (0x000975f3) bg_popup_call_poc_inact_pane_g5

0xe8a8,	// (0x0009b265) popup_call_poc_act_window_t1_ParamLimits

0xe8a8,	// (0x0009b265) popup_call_poc_act_window_t1

0xe8d0,	// (0x0009b28d) popup_call_poc_act_window_t2_ParamLimits

0xe8d0,	// (0x0009b28d) popup_call_poc_act_window_t2

0xe8f8,	// (0x0009b2b5) popup_call_poc_act_window_t3_ParamLimits

0xe8f8,	// (0x0009b2b5) popup_call_poc_act_window_t3

0xe920,	// (0x0009b2dd) popup_call_poc_act_window_t4_ParamLimits

0xe920,	// (0x0009b2dd) popup_call_poc_act_window_t4

0x0003,

0x0287,	// (0x0008cc44) popup_call_poc_act_window_t_ParamLimits

0x0287,	// (0x0008cc44) popup_call_poc_act_window_t

0xac3e,	// (0x000975fb) bg_popup_call_poc_inact_pane_g6

0xac46,	// (0x00097603) bg_popup_call_poc_inact_pane_g7

0xac4e,	// (0x0009760b) bg_popup_call_poc_inact_pane_g8

0xe932,	// (0x0009b2ef) popup_call_poc_inact_window_g2

0xac56,	// (0x00097613) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf526,	// (0x0009bee3) bg_popup_call_poc_inact_pane_g

0xe93a,	// (0x0009b2f7) popup_call_poc_inact_window_t1_ParamLimits

0xe93a,	// (0x0009b2f7) popup_call_poc_inact_window_t1

0xe94f,	// (0x0009b30c) popup_call_poc_inact_window_t2_ParamLimits

0xe94f,	// (0x0009b30c) popup_call_poc_inact_window_t2

0xe964,	// (0x0009b321) popup_call_poc_inact_window_t3_ParamLimits

0xe964,	// (0x0009b321) popup_call_poc_inact_window_t3

0x0002,

0x0290,	// (0x0008cc4d) popup_call_poc_inact_window_t_ParamLimits

0x0290,	// (0x0008cc4d) popup_call_poc_inact_window_t

0xae0e,	// (0x000977cb) context_pane_ParamLimits

0x496c,	// (0x00091329) signal_pane_ParamLimits

0xe52f,	// (0x0009aeec) main_call2_pane

0xadfc,	// (0x000977b9) popup_phob_thumbnail2_window_ParamLimits

0xadfc,	// (0x000977b9) popup_phob_thumbnail2_window

0xa896,	// (0x00097253) aid_hotspot_pointer_arrow_pane

0xa89e,	// (0x0009725b) aid_hotspot_pointer_hand_pane

0x4482,	// (0x00090e3f) phob_pre_status_pane_g5

0x1990,	// (0x0008e34d) cams_zoom_pane_ParamLimits

0x199f,	// (0x0008e35c) image_vga_pane_ParamLimits

0x19b9,	// (0x0008e376) main_camera_pane_g1_ParamLimits

0x19cb,	// (0x0008e388) main_camera_pane_g2_ParamLimits

0x19db,	// (0x0008e398) main_camera_pane_g3_ParamLimits

0x19eb,	// (0x0008e3a8) main_camera_pane_g4_ParamLimits

0x19fb,	// (0x0008e3b8) main_camera_pane_g5_ParamLimits

0x1a0b,	// (0x0008e3c8) main_camera_pane_g6_ParamLimits

0x1a1d,	// (0x0008e3da) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009bbeb) main_camera_pane_g_ParamLimits

0x1a2d,	// (0x0008e3ea) main_camera_pane_t1_ParamLimits

0x1a43,	// (0x0008e400) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009bbfc) main_camera_pane_t_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_preview_window_pane_cp01_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_preview_window_pane_cp01

0xe979,	// (0x0009b336) popup_phob_thumbnail2_window_g1_ParamLimits

0xe979,	// (0x0009b336) popup_phob_thumbnail2_window_g1

0xa2b4,	// (0x00096c71) call2_cli_visual_pane

0x3944,	// (0x00090301) popup_call2_audio_conf_window_ParamLimits

0x3944,	// (0x00090301) popup_call2_audio_conf_window

0x3964,	// (0x00090321) popup_call2_audio_first_window_ParamLimits

0x3964,	// (0x00090321) popup_call2_audio_first_window

0x39fa,	// (0x000903b7) popup_call2_audio_in_window_ParamLimits

0x39fa,	// (0x000903b7) popup_call2_audio_in_window

0x3a42,	// (0x000903ff) popup_call2_audio_out_window_ParamLimits

0x3a42,	// (0x000903ff) popup_call2_audio_out_window

0x3aac,	// (0x00090469) popup_call2_audio_second_window_ParamLimits

0x3aac,	// (0x00090469) popup_call2_audio_second_window

0x3b12,	// (0x000904cf) popup_call2_audio_wait_window_ParamLimits

0x3b12,	// (0x000904cf) popup_call2_audio_wait_window

0xa2b4,	// (0x00096c71) bg_popup_call2_act_pane_cp03

0xa4f1,	// (0x00096eae) list_conf_pane_cp

0xe985,	// (0x0009b342) popup_call2_audio_conf_window_t1

0xe312,	// (0x0009accf) list_single_graphic_popup_conf2_pane_ParamLimits

0xe312,	// (0x0009accf) list_single_graphic_popup_conf2_pane

0xe325,	// (0x0009ace2) list_highlight_pane_cp04

0xe993,	// (0x0009b350) list_single_graphic_popup_conf2_pane_g1

0xe336,	// (0x0009acf3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b7,	// (0x0009be74) list_single_graphic_popup_conf2_pane_g

0xe99d,	// (0x0009b35a) list_single_graphic_popup_conf2_pane_t1

0xe9ab,	// (0x0009b368) bg_popup_call2_act_pane_cp01_ParamLimits

0xe9ab,	// (0x0009b368) bg_popup_call2_act_pane_cp01

0xea35,	// (0x0009b3f2) call_type_pane_cp05_ParamLimits

0xea35,	// (0x0009b3f2) call_type_pane_cp05

0xea89,	// (0x0009b446) popup_call2_audio_second_window_g1_ParamLimits

0xea89,	// (0x0009b446) popup_call2_audio_second_window_g1

0xeadd,	// (0x0009b49a) popup_call2_audio_second_window_g2_ParamLimits

0xeadd,	// (0x0009b49a) popup_call2_audio_second_window_g2

0x0002,

0xf4bc,	// (0x0009be79) popup_call2_audio_second_window_g_ParamLimits

0xf4bc,	// (0x0009be79) popup_call2_audio_second_window_g

0xeb4e,	// (0x0009b50b) popup_call2_audio_second_window_t1_ParamLimits

0xeb4e,	// (0x0009b50b) popup_call2_audio_second_window_t1

0x3b4c,	// (0x00090509) popup_call2_audio_second_window_t2_ParamLimits

0x3b4c,	// (0x00090509) popup_call2_audio_second_window_t2

0x3b9f,	// (0x0009055c) popup_call2_audio_second_window_t3_ParamLimits

0x3b9f,	// (0x0009055c) popup_call2_audio_second_window_t3

0x0003,

0xf4c3,	// (0x0009be80) popup_call2_audio_second_window_t_ParamLimits

0xf4c3,	// (0x0009be80) popup_call2_audio_second_window_t

0xa2b4,	// (0x00096c71) bg_popup_call2_in_pane_cp02

0xa2be,	// (0x00096c7b) call_type_pane_cp04

0xa2c6,	// (0x00096c83) popup_call2_audio_wait_window_g1

0xa2ce,	// (0x00096c8b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009bad8) popup_call2_audio_wait_window_g

0xa2d6,	// (0x00096c93) popup_call2_audio_wait_window_t3

0x3c92,	// (0x0009064f) bg_popup_call2_act_pane_ParamLimits

0x3c92,	// (0x0009064f) bg_popup_call2_act_pane

0x3d52,	// (0x0009070f) call_type_pane_cp03_ParamLimits

0x3d52,	// (0x0009070f) call_type_pane_cp03

0x3db6,	// (0x00090773) popup_call2_audio_first_window_g1_ParamLimits

0x3db6,	// (0x00090773) popup_call2_audio_first_window_g1

0x3e26,	// (0x000907e3) popup_call2_audio_first_window_g2_ParamLimits

0x3e26,	// (0x000907e3) popup_call2_audio_first_window_g2

0xe3f7,	// (0x0009adb4) popup_call2_audio_first_window_g3_ParamLimits

0xe3f7,	// (0x0009adb4) popup_call2_audio_first_window_g3

0x0004,

0xf4cc,	// (0x0009be89) popup_call2_audio_first_window_g_ParamLimits

0xf4cc,	// (0x0009be89) popup_call2_audio_first_window_g

0x3f04,	// (0x000908c1) popup_call2_audio_first_window_t1_ParamLimits

0x3f04,	// (0x000908c1) popup_call2_audio_first_window_t1

0x4007,	// (0x000909c4) popup_call2_audio_first_window_t4_ParamLimits

0x4007,	// (0x000909c4) popup_call2_audio_first_window_t4

0x40ea,	// (0x00090aa7) popup_call2_audio_first_window_t5_ParamLimits

0x40ea,	// (0x00090aa7) popup_call2_audio_first_window_t5

0x0003,

0xf4d7,	// (0x0009be94) popup_call2_audio_first_window_t_ParamLimits

0xf4d7,	// (0x0009be94) popup_call2_audio_first_window_t

0xa507,	// (0x00096ec4) bg_popup_call2_act_pane_g1

0xacae,	// (0x0009766b) popup_cale_lunar_info_window_t1

0xacbc,	// (0x00097679) popup_cale_lunar_info_window_t2

0xacca,	// (0x00097687) popup_cale_lunar_info_window_t3

0xa2b4,	// (0x00096c71) bg_popup_call2_bubble_pane

0x41eb,	// (0x00090ba8) bg_popup_call2_in_pane_cp01_ParamLimits

0x41eb,	// (0x00090ba8) bg_popup_call2_in_pane_cp01

0x9f90,	// (0x0009694d) call_type_pane_cp02

0x4233,	// (0x00090bf0) popup_call2_audio_out_window_g1_ParamLimits

0x4233,	// (0x00090bf0) popup_call2_audio_out_window_g1

0x425f,	// (0x00090c1c) popup_call2_audio_out_window_g2_ParamLimits

0x425f,	// (0x00090c1c) popup_call2_audio_out_window_g2

0x4287,	// (0x00090c44) popup_call2_audio_out_window_g3_ParamLimits

0x4287,	// (0x00090c44) popup_call2_audio_out_window_g3

0x0003,

0xf4e0,	// (0x0009be9d) popup_call2_audio_out_window_g_ParamLimits

0xf4e0,	// (0x0009be9d) popup_call2_audio_out_window_g

0x42c2,	// (0x00090c7f) popup_call2_audio_out_window_t1_ParamLimits

0x42c2,	// (0x00090c7f) popup_call2_audio_out_window_t1

0x4321,	// (0x00090cde) popup_call2_audio_out_window_t2_ParamLimits

0x4321,	// (0x00090cde) popup_call2_audio_out_window_t2

0xa8cc,	// (0x00097289) popup_call2_audio_out_window_t3_ParamLimits

0xa8cc,	// (0x00097289) popup_call2_audio_out_window_t3

0xa8e2,	// (0x0009729f) popup_call2_audio_out_window_t4_ParamLimits

0xa8e2,	// (0x0009729f) popup_call2_audio_out_window_t4

0xa8f8,	// (0x000972b5) popup_call2_audio_out_window_t5_ParamLimits

0xa8f8,	// (0x000972b5) popup_call2_audio_out_window_t5

0x0005,

0xf4e9,	// (0x0009bea6) popup_call2_audio_out_window_t_ParamLimits

0xf4e9,	// (0x0009bea6) popup_call2_audio_out_window_t

0xa95c,	// (0x00097319) bg_popup_call2_in_pane_ParamLimits

0xa95c,	// (0x00097319) bg_popup_call2_in_pane

0xa9b8,	// (0x00097375) popup_call2_audio_in_window_g1_ParamLimits

0xa9b8,	// (0x00097375) popup_call2_audio_in_window_g1

0xa9f0,	// (0x000973ad) popup_call2_audio_in_window_g2_ParamLimits

0xa9f0,	// (0x000973ad) popup_call2_audio_in_window_g2

0xaa28,	// (0x000973e5) popup_call2_audio_in_window_g3_ParamLimits

0xaa28,	// (0x000973e5) popup_call2_audio_in_window_g3

0x0003,

0xf4f6,	// (0x0009beb3) popup_call2_audio_in_window_g_ParamLimits

0xf4f6,	// (0x0009beb3) popup_call2_audio_in_window_g

0xaa80,	// (0x0009743d) popup_call2_audio_in_window_t1_ParamLimits

0xaa80,	// (0x0009743d) popup_call2_audio_in_window_t1

0xab00,	// (0x000974bd) popup_call2_audio_in_window_t2_ParamLimits

0xab00,	// (0x000974bd) popup_call2_audio_in_window_t2

0xab80,	// (0x0009753d) popup_call2_audio_in_window_t3_ParamLimits

0xab80,	// (0x0009753d) popup_call2_audio_in_window_t3

0xab9a,	// (0x00097557) popup_call2_audio_in_window_t4_ParamLimits

0xab9a,	// (0x00097557) popup_call2_audio_in_window_t4

0xabac,	// (0x00097569) popup_call2_audio_in_window_t5_ParamLimits

0xabac,	// (0x00097569) popup_call2_audio_in_window_t5

0xabc1,	// (0x0009757e) popup_call2_audio_in_window_t6_ParamLimits

0xabc1,	// (0x0009757e) popup_call2_audio_in_window_t6

0x0005,

0xf4ff,	// (0x0009bebc) popup_call2_audio_in_window_t_ParamLimits

0xf4ff,	// (0x0009bebc) popup_call2_audio_in_window_t

0xa507,	// (0x00096ec4) bg_popup_call2_in_pane_g1

0xacd8,	// (0x00097695) popup_cale_lunar_info_window_t4

0x0003,

0xf567,	// (0x0009bf24) popup_cale_lunar_info_window_t

0xa50f,	// (0x00096ecc) bg_popup_call2_rect_pane_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_call2_rect_pane

0xa2b4,	// (0x00096c71) call2_cli_visual_graphic_pane

0xa2b4,	// (0x00096c71) call2_cli_visual_text_pane

0xaeae,	// (0x0009786b) smil_status_volume_pane_g3

0x0002,

0xa68b,	// (0x00097048) call2_cli_visual_graphic_pane_g1

0xa68b,	// (0x00097048) call2_cli_visual_graphic_pane_g2

0xa68b,	// (0x00097048) call2_cli_visual_graphic_pane_g3

0x0002,

0xf50c,	// (0x0009bec9) call2_cli_visual_graphic_pane_g

0xabd6,	// (0x00097593) bg_popup_call2_rect_pane_g1

0xa717,	// (0x000970d4) bg_popup_call2_rect_pane_g2

0xabde,	// (0x0009759b) bg_popup_call2_rect_pane_g3

0xabe6,	// (0x000975a3) bg_popup_call2_rect_pane_g4

0xabee,	// (0x000975ab) bg_popup_call2_rect_pane_g5

0xabf6,	// (0x000975b3) bg_popup_call2_rect_pane_g6

0xabfe,	// (0x000975bb) bg_popup_call2_rect_pane_g7

0xac06,	// (0x000975c3) bg_popup_call2_rect_pane_g8

0xac0e,	// (0x000975cb) bg_popup_call2_rect_pane_g9

0x0008,

0xf513,	// (0x0009bed0) bg_popup_call2_rect_pane_g

0xac16,	// (0x000975d3) bg_popup_call2_bubble_pane_g1

0xac1e,	// (0x000975db) bg_popup_call2_bubble_pane_g2

0xac26,	// (0x000975e3) bg_popup_call2_bubble_pane_g3

0xac2e,	// (0x000975eb) bg_popup_call2_bubble_pane_g4

0xac36,	// (0x000975f3) bg_popup_call2_bubble_pane_g5

0xac3e,	// (0x000975fb) bg_popup_call2_bubble_pane_g6

0xac46,	// (0x00097603) bg_popup_call2_bubble_pane_g7

0xac4e,	// (0x0009760b) bg_popup_call2_bubble_pane_g8

0xac56,	// (0x00097613) bg_popup_call2_bubble_pane_g9

0x0008,

0xf526,	// (0x0009bee3) bg_popup_call2_bubble_pane_g

0x1527,	// (0x0008dee4) aid_cale_week_size_cell_pane

0x1a59,	// (0x0008e416) aid_cams_cif_uncrop_pane_ParamLimits

0x1a59,	// (0x0008e416) aid_cams_cif_uncrop_pane

0x1c12,	// (0x0008e5cf) aid_cams_size_cell_ParamLimits

0x1c12,	// (0x0008e5cf) aid_cams_size_cell

0x1c26,	// (0x0008e5e3) grid_cams_pane_ParamLimits

0x1c40,	// (0x0008e5fd) linegrid_cams_pane_ParamLimits

0x1e3b,	// (0x0008e7f8) call_video_pane_t1

0x1e59,	// (0x0008e816) call_video_pane_t2

0x0001,

0xf292,	// (0x0009bc4f) call_video_pane_t

0x2285,	// (0x0008ec42) aid_cale_month_size_cell_pane_ParamLimits

0x2285,	// (0x0008ec42) aid_cale_month_size_cell_pane

0xf5b0,	// (0x0009bf6d) smil_status_volume_pane_g

0xaebb,	// (0x00097878) volume_smil_pane_ParamLimits

0x0dce,	// (0x0008d78b) aid_popup2_width_pane

0x1489,	// (0x0008de46) cell_qdial_pane_g4_ParamLimits

0x1489,	// (0x0008de46) cell_qdial_pane_g4

0x2e6c,	// (0x0008f829) aid_blid_cardinal_pane_ParamLimits

0x2e78,	// (0x0008f835) aid_blid_destination_pane_ParamLimits

0x2e78,	// (0x0008f835) aid_blid_destination_pane

0xa50f,	// (0x00096ecc) bg_popup_call_poc_act_pane_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_call_poc_act_pane

0xa50f,	// (0x00096ecc) bg_popup_call_poc_inact_pane_ParamLimits

0xa50f,	// (0x00096ecc) bg_popup_call_poc_inact_pane

0xac5e,	// (0x0009761b) bg_popup_call_poc_act_pane_g1

0xac66,	// (0x00097623) bg_popup_call_poc_act_pane_g2

0xac6e,	// (0x0009762b) bg_popup_call_poc_act_pane_g3

0xac2e,	// (0x000975eb) bg_popup_call_poc_act_pane_g4

0xac36,	// (0x000975f3) bg_popup_call_poc_act_pane_g5

0xac76,	// (0x00097633) bg_popup_call_poc_act_pane_g6

0xac46,	// (0x00097603) bg_popup_call_poc_act_pane_g7

0xac7e,	// (0x0009763b) bg_popup_call_poc_act_pane_g8

0xa2b4,	// (0x00096c71) main_usb_pane

0xadd7,	// (0x00097794) popup_cale_lunar_info_window

0x2131,	// (0x0008eaee) im_reading_pane_t1_ParamLimits

0xdcec,	// (0x0009a6a9) list_im_pane_ParamLimits

0xdcfd,	// (0x0009a6ba) scroll_pane_cp07_ParamLimits

0xa2b4,	// (0x00096c71) grid_highlight_pane_cp012

0xa50f,	// (0x00096ecc) mup_scale_pane_ParamLimits

0xe6cc,	// (0x0009b089) main_usb_pane_g1_ParamLimits

0xe6cc,	// (0x0009b089) main_usb_pane_g1

0x4397,	// (0x00090d54) main_usb_pane_g2_ParamLimits

0x4397,	// (0x00090d54) main_usb_pane_g2

0x0001,

0xf550,	// (0x0009bf0d) main_usb_pane_g_ParamLimits

0xf550,	// (0x0009bf0d) main_usb_pane_g

0x43ad,	// (0x00090d6a) main_usb_pane_t1_ParamLimits

0x43ad,	// (0x00090d6a) main_usb_pane_t1

0x43bf,	// (0x00090d7c) main_usb_pane_t2_ParamLimits

0x43bf,	// (0x00090d7c) main_usb_pane_t2

0x43d1,	// (0x00090d8e) main_usb_pane_t3_ParamLimits

0x43d1,	// (0x00090d8e) main_usb_pane_t3

0x43e3,	// (0x00090da0) main_usb_pane_t4_ParamLimits

0x43e3,	// (0x00090da0) main_usb_pane_t4

0x43f5,	// (0x00090db2) main_usb_pane_t5_ParamLimits

0x43f5,	// (0x00090db2) main_usb_pane_t5

0x4407,	// (0x00090dc4) main_usb_pane_t6_ParamLimits

0x4407,	// (0x00090dc4) main_usb_pane_t6

0x0005,

0xf555,	// (0x0009bf12) main_usb_pane_t_ParamLimits

0x2e1b,	// (0x0008f7d8) aid_text_placing

0x2e24,	// (0x0008f7e1) main_location2_pane_t1_ParamLimits

0x2e36,	// (0x0008f7f3) main_location2_pane_t2_ParamLimits

0x2e48,	// (0x0008f805) main_location2_pane_t3_ParamLimits

0x2e5a,	// (0x0008f817) main_location2_pane_t4_ParamLimits

0x2e5a,	// (0x0008f817) main_location2_pane_t4

0xf3b3,	// (0x0009bd70) main_location2_pane_t_ParamLimits

0xa54b,	// (0x00096f08) find_pinb_pane_g2_ParamLimits

0xa54b,	// (0x00096f08) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009bafe) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009bafe) find_pinb_pane_g

0xa557,	// (0x00096f14) find_pinb_pane_t1_ParamLimits

0xa569,	// (0x00096f26) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009bb03) find_pinb_pane_t_ParamLimits

0xa2b4,	// (0x00096c71) main_call3_pane

0x25e9,	// (0x0008efa6) cale_month_day_heading_pane_t1_ParamLimits

0x2647,	// (0x0008f004) cale_month_day_heading_pane_t2_ParamLimits

0x26ac,	// (0x0008f069) cale_month_day_heading_pane_t3_ParamLimits

0x2711,	// (0x0008f0ce) cale_month_day_heading_pane_t4_ParamLimits

0x2776,	// (0x0008f133) cale_month_day_heading_pane_t5_ParamLimits

0x27eb,	// (0x0008f1a8) cale_month_day_heading_pane_t6_ParamLimits

0x2860,	// (0x0008f21d) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0009bc87) cale_month_day_heading_pane_t_ParamLimits

0xdf3d,	// (0x0009a8fa) smil_status_volume_pane

0x3669,	// (0x00090026) postcard_address_pane_ParamLimits

0x3669,	// (0x00090026) postcard_address_pane

0x367b,	// (0x00090038) postcard_message_pane_ParamLimits

0x367b,	// (0x00090038) postcard_message_pane

0x4375,	// (0x00090d32) call2_cli_visual_pane_t1_ParamLimits

0x4375,	// (0x00090d32) call2_cli_visual_pane_t1

0x4b99,	// (0x00091556) postcard_message_pane_t1_ParamLimits

0x4b99,	// (0x00091556) postcard_message_pane_t1

0x4b82,	// (0x0009153f) postcard_address_pane_t1_ParamLimits

0x4b82,	// (0x0009153f) postcard_address_pane_t1

0x4b6e,	// (0x0009152b) popup_call3_audio_in_window_ParamLimits

0x4b6e,	// (0x0009152b) popup_call3_audio_in_window

0x49f9,	// (0x000913b6) bg_popup_call3_in_pane_ParamLimits

0x49f9,	// (0x000913b6) bg_popup_call3_in_pane

0x4a6f,	// (0x0009142c) popup_call3_audio_in_window_g1_ParamLimits

0x4a6f,	// (0x0009142c) popup_call3_audio_in_window_g1

0x4a8f,	// (0x0009144c) popup_call3_audio_in_window_g2_ParamLimits

0x4a8f,	// (0x0009144c) popup_call3_audio_in_window_g2

0x4aaf,	// (0x0009146c) popup_call3_audio_in_window_g3_ParamLimits

0x4aaf,	// (0x0009146c) popup_call3_audio_in_window_g3

0x0003,

0xf5b7,	// (0x0009bf74) popup_call3_audio_in_window_g_ParamLimits

0xf5b7,	// (0x0009bf74) popup_call3_audio_in_window_g

0x4ae0,	// (0x0009149d) popup_call3_audio_in_window_t1_ParamLimits

0x4ae0,	// (0x0009149d) popup_call3_audio_in_window_t1

0x4b1e,	// (0x000914db) popup_call3_audio_in_window_t2_ParamLimits

0x4b1e,	// (0x000914db) popup_call3_audio_in_window_t2

0x4b5c,	// (0x00091519) popup_call3_audio_in_window_t3_ParamLimits

0x4b5c,	// (0x00091519) popup_call3_audio_in_window_t3

0x0002,

0xf5c0,	// (0x0009bf7d) popup_call3_audio_in_window_t_ParamLimits

0xf5c0,	// (0x0009bf7d) popup_call3_audio_in_window_t

0xe52f,	// (0x0009aeec) bg_popup_call3_rect_pane

0xabd6,	// (0x00097593) bg_popup_call3_rect_pane_g1

0xa717,	// (0x000970d4) bg_popup_call3_rect_pane_g2

0xabde,	// (0x0009759b) bg_popup_call3_rect_pane_g3

0xabe6,	// (0x000975a3) bg_popup_call3_rect_pane_g4

0xabee,	// (0x000975ab) bg_popup_call3_rect_pane_g5

0xabf6,	// (0x000975b3) bg_popup_call3_rect_pane_g6

0xabfe,	// (0x000975bb) bg_popup_call3_rect_pane_g7

0x322e,	// (0x0008fbeb) mup_visualizer_osc_pane

0xe5ee,	// (0x0009afab) mup_visualizer_spec_pane

0x4a29,	// (0x000913e6) call3_video_qcif_pane_ParamLimits

0x4a29,	// (0x000913e6) call3_video_qcif_pane

0x4a3c,	// (0x000913f9) call3_video_qcif_uncrop_pane_ParamLimits

0x4a3c,	// (0x000913f9) call3_video_qcif_uncrop_pane

0x4a4a,	// (0x00091407) call3_video_subqcif_pane_ParamLimits

0x4a4a,	// (0x00091407) call3_video_subqcif_pane

0x4a5e,	// (0x0009141b) call3_video_subqcif_uncrop_pane_ParamLimits

0x4a5e,	// (0x0009141b) call3_video_subqcif_uncrop_pane

0x4acf,	// (0x0009148c) popup_call3_audio_in_window_g4_ParamLimits

0x4acf,	// (0x0009148c) popup_call3_audio_in_window_g4

0x49e8,	// (0x000913a5) mup_spec_half_pane

0x49f1,	// (0x000913ae) mup_spec_half_pane_cp

0xae6e,	// (0x0009782b) mup_osc_middle_pane

0xae77,	// (0x00097834) mup_visualizer_osc_pane_g1

0x49c8,	// (0x00091385) mup_spec_bar_pane_ParamLimits

0x49c8,	// (0x00091385) mup_spec_bar_pane

0xae5b,	// (0x00097818) mup_spec_bar_pane_g1

0xae65,	// (0x00097822) mup_spec_bar_pane_g2

0x0001,

0xf5ab,	// (0x0009bf68) mup_spec_bar_pane_g

0x1527,	// (0x0008dee4) aid_cale_week_size_cell_pane_ParamLimits

0x153a,	// (0x0008def7) bg_cale_heading_pane_ParamLimits

0xdb65,	// (0x0009a522) bg_cale_pane_cp01_ParamLimits

0x154e,	// (0x0008df0b) cale_week_corner_pane_ParamLimits

0x1564,	// (0x0008df21) cale_week_day_heading_pane_ParamLimits

0x1578,	// (0x0008df35) cale_week_scroll_pane_g1_ParamLimits

0x1589,	// (0x0008df46) cale_week_scroll_pane_g2_ParamLimits

0x159a,	// (0x0008df57) cale_week_scroll_pane_g3_ParamLimits

0x15ab,	// (0x0008df68) cale_week_scroll_pane_g4_ParamLimits

0x15bc,	// (0x0008df79) cale_week_scroll_pane_g5_ParamLimits

0x15cf,	// (0x0008df8c) cale_week_scroll_pane_g6_ParamLimits

0x15e2,	// (0x0008df9f) cale_week_scroll_pane_g7_ParamLimits

0x15f5,	// (0x0008dfb2) cale_week_scroll_pane_g8_ParamLimits

0x1608,	// (0x0008dfc5) cale_week_scroll_pane_g9_ParamLimits

0x1619,	// (0x0008dfd6) cale_week_scroll_pane_g10_ParamLimits

0x162a,	// (0x0008dfe7) cale_week_scroll_pane_g11_ParamLimits

0x163b,	// (0x0008dff8) cale_week_scroll_pane_g12_ParamLimits

0x164c,	// (0x0008e009) cale_week_scroll_pane_g13_ParamLimits

0x165d,	// (0x0008e01a) cale_week_scroll_pane_g14_ParamLimits

0x166e,	// (0x0008e02b) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009bb8f) cale_week_scroll_pane_g_ParamLimits

0x167f,	// (0x0008e03c) cale_week_time_pane_ParamLimits

0x1692,	// (0x0008e04f) grid_cale_week_pane_ParamLimits

0xdb7e,	// (0x0009a53b) listscroll_cale_week_pane_t1

0x16a7,	// (0x0008e064) scroll_pane_cp08_ParamLimits

0x22c6,	// (0x0008ec83) cale_month_corner_pane_ParamLimits

0xdf13,	// (0x0009a8d0) cale_month_pane_t1

0x25a8,	// (0x0008ef65) cale_month_week_pane_ParamLimits

0x2c67,	// (0x0008f624) popup_call_status_window_g1_ParamLimits

0x2c7b,	// (0x0008f638) popup_call_status_window_g2_ParamLimits

0x2c8f,	// (0x0008f64c) popup_call_status_window_g3_ParamLimits

0xf33f,	// (0x0009bcfc) popup_call_status_window_g_ParamLimits

0xe2a5,	// (0x0009ac62) aid_call2_pane

0x349b,	// (0x0008fe58) msg_header_pane_g1

0x3669,	// (0x00090026) postcard_address2_pane_ParamLimits

0x3669,	// (0x00090026) postcard_address2_pane

0x367b,	// (0x00090038) postcard_message2_pane_ParamLimits

0x367b,	// (0x00090038) postcard_message2_pane

0x497a,	// (0x00091337) message2_row_pane_ParamLimits

0x497a,	// (0x00091337) message2_row_pane

0x4996,	// (0x00091353) address2_row_pane_ParamLimits

0x4996,	// (0x00091353) address2_row_pane

0xae29,	// (0x000977e6) postcard_message2_row_pane_g1

0xae31,	// (0x000977ee) postcard_message2_row_pane_t1

0xae29,	// (0x000977e6) address2_row_pane_g1

0xae31,	// (0x000977ee) address2_row_pane_t1

0x1955,	// (0x0008e312) aid_size_cell_vorec

0xa2b4,	// (0x00096c71) main_rss_pane

0x49a9,	// (0x00091366) rss_list_single_pane_ParamLimits

0x49a9,	// (0x00091366) rss_list_single_pane

0xae3f,	// (0x000977fc) rss_list_single_pane_t1

0xae4d,	// (0x0009780a) rss_list_single_pane_t2

0x0001,

0xf5a6,	// (0x0009bf63) rss_list_single_pane_t

0xa2b4,	// (0x00096c71) main_camera2_pane

0xa2b4,	// (0x00096c71) main_video2_pane

0x4c12,	// (0x000915cf) cams_zoom_pane_cp2_ParamLimits

0x4c12,	// (0x000915cf) cams_zoom_pane_cp2

0x4c32,	// (0x000915ef) image2_vga_pane_ParamLimits

0x4c32,	// (0x000915ef) image2_vga_pane

0x4c83,	// (0x00091640) main_camera2_pane_g1_ParamLimits

0x4c83,	// (0x00091640) main_camera2_pane_g1

0x4ca3,	// (0x00091660) main_camera2_pane_g2_ParamLimits

0x4ca3,	// (0x00091660) main_camera2_pane_g2

0x4cc3,	// (0x00091680) main_camera2_pane_g3_ParamLimits

0x4cc3,	// (0x00091680) main_camera2_pane_g3

0x4ce3,	// (0x000916a0) main_camera2_pane_g4_ParamLimits

0x4ce3,	// (0x000916a0) main_camera2_pane_g4

0x4d03,	// (0x000916c0) main_camera2_pane_g5_ParamLimits

0x4d03,	// (0x000916c0) main_camera2_pane_g5

0x4d23,	// (0x000916e0) main_camera2_pane_g6_ParamLimits

0x4d23,	// (0x000916e0) main_camera2_pane_g6

0x4d43,	// (0x00091700) main_camera2_pane_g7_ParamLimits

0x4d43,	// (0x00091700) main_camera2_pane_g7

0x4d63,	// (0x00091720) main_camera2_pane_g8_ParamLimits

0x4d63,	// (0x00091720) main_camera2_pane_g8

0x0008,

0xf5c7,	// (0x0009bf84) main_camera2_pane_g_ParamLimits

0xf5c7,	// (0x0009bf84) main_camera2_pane_g

0x4da3,	// (0x00091760) main_camera2_pane_t1_ParamLimits

0x4da3,	// (0x00091760) main_camera2_pane_t1

0x4dd8,	// (0x00091795) main_camera2_pane_t2_ParamLimits

0x4dd8,	// (0x00091795) main_camera2_pane_t2

0x4dfe,	// (0x000917bb) main_camera2_pane_t3_ParamLimits

0x4dfe,	// (0x000917bb) main_camera2_pane_t3

0x4e5c,	// (0x00091819) main_camera2_pane_t4_ParamLimits

0x4e5c,	// (0x00091819) main_camera2_pane_t4

0x0006,

0xf5da,	// (0x0009bf97) main_camera2_pane_t_ParamLimits

0xf5da,	// (0x0009bf97) main_camera2_pane_t

0x4eee,	// (0x000918ab) cams_zoom_pane_cp4_ParamLimits

0x4eee,	// (0x000918ab) cams_zoom_pane_cp4

0x4f04,	// (0x000918c1) image2_cif_pane_ParamLimits

0x4f04,	// (0x000918c1) image2_cif_pane

0x4f2f,	// (0x000918ec) image2_subqcif_pane_ParamLimits

0x4f2f,	// (0x000918ec) image2_subqcif_pane

0x4f49,	// (0x00091906) main_video2_pane_g1_ParamLimits

0x4f49,	// (0x00091906) main_video2_pane_g1

0x4f63,	// (0x00091920) main_video2_pane_g2_ParamLimits

0x4f63,	// (0x00091920) main_video2_pane_g2

0x4f79,	// (0x00091936) main_video2_pane_g3_ParamLimits

0x4f79,	// (0x00091936) main_video2_pane_g3

0x4f8f,	// (0x0009194c) main_video2_pane_g4_ParamLimits

0x4f8f,	// (0x0009194c) main_video2_pane_g4

0x4fa5,	// (0x00091962) main_video2_pane_g5_ParamLimits

0x4fa5,	// (0x00091962) main_video2_pane_g5

0x4fbb,	// (0x00091978) main_video2_pane_g6_ParamLimits

0x4fbb,	// (0x00091978) main_video2_pane_g6

0x0005,

0xf5e9,	// (0x0009bfa6) main_video2_pane_g_ParamLimits

0xf5e9,	// (0x0009bfa6) main_video2_pane_g

0x4fd5,	// (0x00091992) main_video2_pane_t1_ParamLimits

0x4fd5,	// (0x00091992) main_video2_pane_t1

0x4ff9,	// (0x000919b6) main_video2_pane_t2_ParamLimits

0x4ff9,	// (0x000919b6) main_video2_pane_t2

0x5047,	// (0x00091a04) main_video2_pane_t3_ParamLimits

0x5047,	// (0x00091a04) main_video2_pane_t3

0x0002,

0xf5f6,	// (0x0009bfb3) main_video2_pane_t_ParamLimits

0xf5f6,	// (0x0009bfb3) main_video2_pane_t

0x44c2,	// (0x00090e7f) call_muted_g2

0x0001,

0xf598,	// (0x0009bf55) call_muted_g

0xa2b4,	// (0x00096c71) main_mup2_pane

0x508b,	// (0x00091a48) main_mup2_pane_g1_ParamLimits

0x508b,	// (0x00091a48) main_mup2_pane_g1

0x5097,	// (0x00091a54) main_mup2_pane_g2_ParamLimits

0x5097,	// (0x00091a54) main_mup2_pane_g2

0xafdf,	// (0x0009799c) main_mup_pane_g13_cp1

0xafe7,	// (0x000979a4) mup_volume_pane_cp1

0x50b3,	// (0x00091a70) main_mup2_pane_g4_ParamLimits

0x50b3,	// (0x00091a70) main_mup2_pane_g4

0x50c5,	// (0x00091a82) main_mup2_pane_g5_ParamLimits

0x50c5,	// (0x00091a82) main_mup2_pane_g5

0x50d7,	// (0x00091a94) main_mup2_pane_g6_ParamLimits

0x50d7,	// (0x00091a94) main_mup2_pane_g6

0x50e9,	// (0x00091aa6) main_mup2_pane_g7_ParamLimits

0x50e9,	// (0x00091aa6) main_mup2_pane_g7

0x0006,

0xf5fd,	// (0x0009bfba) main_mup2_pane_g_ParamLimits

0xf5fd,	// (0x0009bfba) main_mup2_pane_g

0x5101,	// (0x00091abe) main_mup2_pane_t1_ParamLimits

0x5101,	// (0x00091abe) main_mup2_pane_t1

0x5117,	// (0x00091ad4) main_mup2_pane_t2_ParamLimits

0x5117,	// (0x00091ad4) main_mup2_pane_t2

0x512d,	// (0x00091aea) main_mup2_pane_t3_ParamLimits

0x512d,	// (0x00091aea) main_mup2_pane_t3

0x5143,	// (0x00091b00) main_mup2_pane_t4_ParamLimits

0x5143,	// (0x00091b00) main_mup2_pane_t4

0x515b,	// (0x00091b18) main_mup2_pane_t5_ParamLimits

0x515b,	// (0x00091b18) main_mup2_pane_t5

0x5173,	// (0x00091b30) main_mup2_pane_t6_ParamLimits

0x5173,	// (0x00091b30) main_mup2_pane_t6

0x0005,

0xf60c,	// (0x0009bfc9) main_mup2_pane_t_ParamLimits

0xf60c,	// (0x0009bfc9) main_mup2_pane_t

0x51a3,	// (0x00091b60) mup2_visualizer_pane_ParamLimits

0x51a3,	// (0x00091b60) mup2_visualizer_pane

0x51d1,	// (0x00091b8e) mup_progress_pane_cp_ParamLimits

0x51d1,	// (0x00091b8e) mup_progress_pane_cp

0xafc1,	// (0x0009797e) mup_volume_pane_cp_ParamLimits

0xafc1,	// (0x0009797e) mup_volume_pane_cp

0x51e5,	// (0x00091ba2) mup2_visualizer_pane_g1_ParamLimits

0x51e5,	// (0x00091ba2) mup2_visualizer_pane_g1

0xaf00,	// (0x000978bd) mup2_visualizer_pane_g2_ParamLimits

0xaf00,	// (0x000978bd) mup2_visualizer_pane_g2

0x51fc,	// (0x00091bb9) mup2_visualizer_pane_g3_ParamLimits

0x51fc,	// (0x00091bb9) mup2_visualizer_pane_g3

0x0002,

0xf619,	// (0x0009bfd6) mup2_visualizer_pane_g_ParamLimits

0xf619,	// (0x0009bfd6) mup2_visualizer_pane_g

0xe815,	// (0x0009b1d2) aid_size_cell_fmradio

0x4674,	// (0x00091031) aid_height_parent_landcape

0xdd7b,	// (0x0009a738) wml_content_pane_cp

0xdd83,	// (0x0009a740) wml_tabs_pane

0xdd8c,	// (0x0009a749) popup_wml_miniature_window

0xdd94,	// (0x0009a751) scroll_pane_cp021

0xdda8,	// (0x0009a765) wml_content_pane_comp8

0xa2b4,	// (0x00096c71) bg_popup_sub_pane_cp05

0xaf1e,	// (0x000978db) popup_wml_miniature_window_g1

0xaf26,	// (0x000978e3) wml_miniature_view_pane

0x5208,	// (0x00091bc5) aid_size_wml_view

0x5210,	// (0x00091bcd) wml_miniature_view_pane_g1

0x5219,	// (0x00091bd6) wml_miniature_view_pane_g2

0x5222,	// (0x00091bdf) wml_miniature_view_pane_g3

0x522a,	// (0x00091be7) wml_miniature_view_pane_g4

0x5232,	// (0x00091bef) wml_miniature_view_pane_g5

0x523a,	// (0x00091bf7) wml_miniature_view_pane_g6

0x5242,	// (0x00091bff) wml_miniature_view_pane_g7

0x524a,	// (0x00091c07) wml_miniature_view_pane_g8

0x0007,

0xf620,	// (0x0009bfdd) wml_miniature_view_pane_g

0xaf2e,	// (0x000978eb) background_graphic_ParamLimits

0xaf2e,	// (0x000978eb) background_graphic

0xaf3a,	// (0x000978f7) wml_tabs_2_pane

0xaf43,	// (0x00097900) wml_tabs_3_pane_ParamLimits

0xaf43,	// (0x00097900) wml_tabs_3_pane

0xaf55,	// (0x00097912) wml_tabs_4_pane_ParamLimits

0xaf55,	// (0x00097912) wml_tabs_4_pane

0xaf6b,	// (0x00097928) wml_tabs_5_pane_ParamLimits

0xaf6b,	// (0x00097928) wml_tabs_5_pane

0xaf85,	// (0x00097942) wml_tabs_pane_g2_ParamLimits

0xaf85,	// (0x00097942) wml_tabs_pane_g2

0xaf99,	// (0x00097956) wml_tabs_pane_g3_ParamLimits

0xaf99,	// (0x00097956) wml_tabs_pane_g3

0x5252,	// (0x00091c0f) wml_tabs_2_active_pane_ParamLimits

0x5252,	// (0x00091c0f) wml_tabs_2_active_pane

0x5266,	// (0x00091c23) wml_tabs_2_passive_pane_ParamLimits

0x5266,	// (0x00091c23) wml_tabs_2_passive_pane

0x527a,	// (0x00091c37) wml_tabs_3_active_pane_cp_ParamLimits

0x527a,	// (0x00091c37) wml_tabs_3_active_pane_cp

0x528f,	// (0x00091c4c) wml_tabs_3_passive_pane_ParamLimits

0x528f,	// (0x00091c4c) wml_tabs_3_passive_pane

0x52a2,	// (0x00091c5f) wml_tabs_3_passive_pane_cp_ParamLimits

0x52a2,	// (0x00091c5f) wml_tabs_3_passive_pane_cp

0x52b9,	// (0x00091c76) tabs_4_active_pane

0x52c1,	// (0x00091c7e) tabs_4_passive_pane

0x52cb,	// (0x00091c88) tabs_4_passive_pane_cp

0x52d3,	// (0x00091c90) tabs_4_passive_pane_cp2

0x438f,	// (0x00090d4c) aid_height_text

0x3204,	// (0x0008fbc1) mup_volume_cont_pane_ParamLimits

0x3204,	// (0x0008fbc1) mup_volume_cont_pane

0x1128,	// (0x0008dae5) aid_size_cell_pinb

0x1132,	// (0x0008daef) aid_size_list_pinb

0x51bd,	// (0x00091b7a) mup2_volume_cont_pane_ParamLimits

0x51bd,	// (0x00091b7a) mup2_volume_cont_pane

0xafad,	// (0x0009796a) mup2_volume_cont_pane_g1_ParamLimits

0xafad,	// (0x0009796a) mup2_volume_cont_pane_g1

0x0dda,	// (0x0008d797) aid_size_cell_touch_ParamLimits

0x0dda,	// (0x0008d797) aid_size_cell_touch

0x1018,	// (0x0008d9d5) touch_pane_ParamLimits

0x1018,	// (0x0008d9d5) touch_pane

0x0dbc,	// (0x0008d779) main_rss2_pane

0xafef,	// (0x000979ac) listscroll_rss2_pane

0xaff8,	// (0x000979b5) rss2_navigation_pane

0xb000,	// (0x000979bd) list_rss2_pane

0xe3d8,	// (0x0009ad95) scroll_pane_cp22

0xb008,	// (0x000979c5) rss2_navigation_pane_g1

0xb011,	// (0x000979ce) rss2_navigation_pane_g2

0xb019,	// (0x000979d6) rss2_navigation_pane_g3

0x0002,

0xf631,	// (0x0009bfee) rss2_navigation_pane_g

0xb021,	// (0x000979de) rss2_navigation_pane_t1

0x52dd,	// (0x00091c9a) rss2_list_single_pane_ParamLimits

0x52dd,	// (0x00091c9a) rss2_list_single_pane

0xb02f,	// (0x000979ec) rss2_list_single_pane_t2

0xb03d,	// (0x000979fa) rss2_list_single_pane_t3_ParamLimits

0xb03d,	// (0x000979fa) rss2_list_single_pane_t3

0xb05a,	// (0x00097a17) rss2_list_single_pane_t4

0x2a84,	// (0x0008f441) smil_status_pane_g1

0x9e93,	// (0x00096850) main_image2_pane_ParamLimits

0x9e93,	// (0x00096850) main_image2_pane

0x4d83,	// (0x00091740) main_camera2_pane_g9_ParamLimits

0x4d83,	// (0x00091740) main_camera2_pane_g9

0x4eb1,	// (0x0009186e) main_camera2_pane_t5_ParamLimits

0x4eb1,	// (0x0009186e) main_camera2_pane_t5

0xaed0,	// (0x0009788d) main_camera2_pane_t6_ParamLimits

0xaed0,	// (0x0009788d) main_camera2_pane_t6

0x52f2,	// (0x00091caf) main_image2_pane_g1_ParamLimits

0x52f2,	// (0x00091caf) main_image2_pane_g1

0x38a2,	// (0x0009025f) smil2_video_pane_ParamLimits

0x38a2,	// (0x0009025f) smil2_video_pane

0x0e1a,	// (0x0008d7d7) aid_zoom_text_primary_cp

0x9e89,	// (0x00096846) popup_preview_fixed_window

0xdce4,	// (0x0009a6a1) im_reading_pane_g1

0x4bfa,	// (0x000915b7) cams2_bc_adjust_pane_cp_ParamLimits

0x4bfa,	// (0x000915b7) cams2_bc_adjust_pane_cp

0x4ee0,	// (0x0009189d) cams2_bc_adjust_pane_ParamLimits

0x4ee0,	// (0x0009189d) cams2_bc_adjust_pane

0xb068,	// (0x00097a25) cams2_bc_adjust_pane_g1

0xb070,	// (0x00097a2d) cams2_slider_pane

0xb079,	// (0x00097a36) cams2_slider_pane_g1

0xb082,	// (0x00097a3f) cams2_slider_pane_g2

0x0006,

0xf638,	// (0x0009bff5) cams2_slider_pane_g

0x1214,	// (0x0008dbd1) calc_display_pane_ParamLimits

0x123c,	// (0x0008dbf9) calc_paper_pane_ParamLimits

0x125f,	// (0x0008dc1c) grid_calc_pane_ParamLimits

0xa867,	// (0x00097224) popup_clock_digital_window_t1_ParamLimits

0xe7b2,	// (0x0009b16f) main_image_pane_t1

0x11f6,	// (0x0008dbb3) aid_size_cell_calc_ParamLimits

0x11f6,	// (0x0008dbb3) aid_size_cell_calc

0x46ba,	// (0x00091077) popup_blid_sat_info2_window_ParamLimits

0x46ba,	// (0x00091077) popup_blid_sat_info2_window

0xb0a4,	// (0x00097a61) aid_size_cell_blid

0xb0ac,	// (0x00097a69) bg_popup_window_pane_cp07

0xb0cf,	// (0x00097a8c) grid_popup_blid_pane

0xb0d9,	// (0x00097a96) heading_pane_cp05_ParamLimits

0xb0d9,	// (0x00097a96) heading_pane_cp05

0xb1a3,	// (0x00097b60) cell_popup_blid_pane_ParamLimits

0xb1a3,	// (0x00097b60) cell_popup_blid_pane

0xb1c7,	// (0x00097b84) cell_popup_blid_pane_g1

0xb1cf,	// (0x00097b8c) cell_popup_blid_pane_t1

0x518d,	// (0x00091b4a) mup2_indicator_pane_ParamLimits

0x518d,	// (0x00091b4a) mup2_indicator_pane

0xe52f,	// (0x0009aeec) mup2_visualizer_osc_pane

0xaf0c,	// (0x000978c9) mup2_visualizer_spec_pane_ParamLimits

0xaf0c,	// (0x000978c9) mup2_visualizer_spec_pane

0x5308,	// (0x00091cc5) mup2_spec_half_pane

0x5311,	// (0x00091cce) mup2_spec_half_pane_cp

0x5319,	// (0x00091cd6) mup2_spec_bar_pane_ParamLimits

0x5319,	// (0x00091cd6) mup2_spec_bar_pane

0xae5b,	// (0x00097818) mup2_spec_bar_pane_g1

0xae65,	// (0x00097822) mup2_spec_bar_pane_g2

0x0001,

0xf5ab,	// (0x0009bf68) mup2_spec_bar_pane_g

0x5339,	// (0x00091cf6) mup2_osc_middle_pane

0xae77,	// (0x00097834) mup2_visualizer_osc_pane_g1

0x9ec1,	// (0x0009687e) popup_number_entry_window_t1_ParamLimits

0x9ed4,	// (0x00096891) popup_number_entry_window_t2_ParamLimits

0x9ee6,	// (0x000968a3) popup_number_entry_window_t3_ParamLimits

0x106a,	// (0x0008da27) popup_number_entry_window_t5_ParamLimits

0x106a,	// (0x0008da27) popup_number_entry_window_t5

0xf0ec,	// (0x0009baa9) popup_number_entry_window_t_ParamLimits

0x9ef8,	// (0x000968b5) text_title_cp2_ParamLimits

0xa8a6,	// (0x00097263) aid_hotspot_pointer_text2_pane

0xa8c0,	// (0x0009727d) main_viewer_pane_g9_ParamLimits

0xa8c0,	// (0x0009727d) main_viewer_pane_g9

0xdf13,	// (0x0009a8d0) cale_month_pane_t1_ParamLimits

0xdf50,	// (0x0009a90d) bg_cale_pane_ParamLimits

0xdf68,	// (0x0009a925) list_cale_pane_ParamLimits

0xdb7e,	// (0x0009a53b) listscroll_cale_day_pane_t1

0xdf79,	// (0x0009a936) scroll_pane_cp09_ParamLimits

0x3236,	// (0x0008fbf3) main_mup_eq_pane_t1_ParamLimits

0x3236,	// (0x0008fbf3) main_mup_eq_pane_t1

0x3250,	// (0x0008fc0d) main_mup_eq_pane_t2_ParamLimits

0x3250,	// (0x0008fc0d) main_mup_eq_pane_t2

0x326a,	// (0x0008fc27) main_mup_eq_pane_t3_ParamLimits

0x326a,	// (0x0008fc27) main_mup_eq_pane_t3

0x3286,	// (0x0008fc43) main_mup_eq_pane_t4_ParamLimits

0x3286,	// (0x0008fc43) main_mup_eq_pane_t4

0x32a2,	// (0x0008fc5f) main_mup_eq_pane_t5_ParamLimits

0x32a2,	// (0x0008fc5f) main_mup_eq_pane_t5

0x32be,	// (0x0008fc7b) main_mup_eq_pane_t6_ParamLimits

0x32be,	// (0x0008fc7b) main_mup_eq_pane_t6

0x32d2,	// (0x0008fc8f) main_mup_eq_pane_t7_ParamLimits

0x32d2,	// (0x0008fc8f) main_mup_eq_pane_t7

0x32e6,	// (0x0008fca3) main_mup_eq_pane_t8_ParamLimits

0x32e6,	// (0x0008fca3) main_mup_eq_pane_t8

0x32fa,	// (0x0008fcb7) main_mup_eq_pane_t9_ParamLimits

0x32fa,	// (0x0008fcb7) main_mup_eq_pane_t9

0x3314,	// (0x0008fcd1) main_mup_eq_pane_t10_ParamLimits

0x3314,	// (0x0008fcd1) main_mup_eq_pane_t10

0x0009,

0xf41f,	// (0x0009bddc) main_mup_eq_pane_t_ParamLimits

0xf41f,	// (0x0009bddc) main_mup_eq_pane_t

0x33c3,	// (0x0008fd80) mup_equalizer_pane_cp5_ParamLimits

0x33d7,	// (0x0008fd94) mup_equalizer_pane_cp6_ParamLimits

0x33eb,	// (0x0008fda8) mup_equalizer_pane_cp7_ParamLimits

0x0dbc,	// (0x0008d779) main_gallery_pane

0xae80,	// (0x0009783d) smil2_volume_pane

0xae88,	// (0x00097845) smil_status_volume_pane_g1_ParamLimits

0xae9b,	// (0x00097858) smil_status_volume_pane_g2_ParamLimits

0xaeae,	// (0x0009786b) smil_status_volume_pane_g3_ParamLimits

0xf5b0,	// (0x0009bf6d) smil_status_volume_pane_g_ParamLimits

0xb0ac,	// (0x00097a69) bg_popup_window_pane_cp07_ParamLimits

0xb0ba,	// (0x00097a77) blid_firmament_pane

0x5342,	// (0x00091cff) aid_size_cell_gallery_ParamLimits

0x5342,	// (0x00091cff) aid_size_cell_gallery

0x5358,	// (0x00091d15) grid_gallery_pane_ParamLimits

0x5358,	// (0x00091d15) grid_gallery_pane

0x5371,	// (0x00091d2e) cell_gallery_pane_ParamLimits

0x5371,	// (0x00091d2e) cell_gallery_pane

0xb1dd,	// (0x00097b9a) bg_cell_gallery_focus_pane_ParamLimits

0xb1dd,	// (0x00097b9a) bg_cell_gallery_focus_pane

0xb1ef,	// (0x00097bac) cell_gallery_pane_g1_ParamLimits

0xb1ef,	// (0x00097bac) cell_gallery_pane_g1

0x53ba,	// (0x00091d77) cell_gallery_pane_g2_ParamLimits

0x53ba,	// (0x00091d77) cell_gallery_pane_g2

0x53c7,	// (0x00091d84) cell_gallery_pane_g3_ParamLimits

0x53c7,	// (0x00091d84) cell_gallery_pane_g3

0xb1fb,	// (0x00097bb8) cell_gallery_pane_g4_ParamLimits

0xb1fb,	// (0x00097bb8) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x0009c01b) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x0009c01b) cell_gallery_pane_g

0xb207,	// (0x00097bc4) bg_cell_gallery_focus_pane_g1

0xb20f,	// (0x00097bcc) bg_cell_gallery_focus_pane_g2

0xb217,	// (0x00097bd4) bg_cell_gallery_focus_pane_g3

0xb21f,	// (0x00097bdc) bg_cell_gallery_focus_pane_g4

0xb227,	// (0x00097be4) bg_cell_gallery_focus_pane_g5

0xb22f,	// (0x00097bec) bg_cell_gallery_focus_pane_g6

0xb237,	// (0x00097bf4) bg_cell_gallery_focus_pane_g7

0xb23f,	// (0x00097bfc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x0009c024) bg_cell_gallery_focus_pane_g

0xb247,	// (0x00097c04) aid_firma_cardinal

0xb25b,	// (0x00097c18) blid_firmament_pane_t1

0xb272,	// (0x00097c2f) blid_firmament_pane_t2

0xb289,	// (0x00097c46) blid_firmament_pane_t3

0xb2a0,	// (0x00097c5d) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x0009c035) blid_firmament_pane_t

0xb2b7,	// (0x00097c74) blid_sat_info_pane

0xb2c7,	// (0x00097c84) blid_sat_info_pane_g1

0xb2c7,	// (0x00097c84) blid_sat_info_pane_g2

0x0001,

0xf681,	// (0x0009c03e) blid_sat_info_pane_g

0xb2d1,	// (0x00097c8e) blid_sat_info_pane_t1

0xb2df,	// (0x00097c9c) smil2_volume_content_pane

0xb2e8,	// (0x00097ca5) smil2_volume_pane_g1

0xb2f0,	// (0x00097cad) smil2_volume_content_pane_g1

0xb2f9,	// (0x00097cb6) smil2_volume_content_pane_g2

0xb302,	// (0x00097cbf) smil2_volume_content_pane_g3

0xb30b,	// (0x00097cc8) smil2_volume_content_pane_g4

0xb314,	// (0x00097cd1) smil2_volume_content_pane_g5

0xb31d,	// (0x00097cda) smil2_volume_content_pane_g6

0xb326,	// (0x00097ce3) smil2_volume_content_pane_g7

0xb32f,	// (0x00097cec) smil2_volume_content_pane_g8

0xb338,	// (0x00097cf5) smil2_volume_content_pane_g9

0xb341,	// (0x00097cfe) smil2_volume_content_pane_g10

0x0009,

0xf686,	// (0x0009c043) smil2_volume_content_pane_g

0x1701,	// (0x0008e0be) cale_week_day_heading_pane_t1_ParamLimits

0x172e,	// (0x0008e0eb) cale_week_day_heading_pane_t2_ParamLimits

0x175b,	// (0x0008e118) cale_week_day_heading_pane_t3_ParamLimits

0x1788,	// (0x0008e145) cale_week_day_heading_pane_t4_ParamLimits

0x17b5,	// (0x0008e172) cale_week_day_heading_pane_t5_ParamLimits

0x17e2,	// (0x0008e19f) cale_week_day_heading_pane_t6_ParamLimits

0x1811,	// (0x0008e1ce) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009bbae) cale_week_day_heading_pane_t_ParamLimits

0xdb90,	// (0x0009a54d) bg_cale_side_pane_ParamLimits

0x183e,	// (0x0008e1fb) cale_week_time_pane_t1_ParamLimits

0x1856,	// (0x0008e213) cale_week_time_pane_t2_ParamLimits

0x186e,	// (0x0008e22b) cale_week_time_pane_t3_ParamLimits

0x1886,	// (0x0008e243) cale_week_time_pane_t4_ParamLimits

0x189e,	// (0x0008e25b) cale_week_time_pane_t5_ParamLimits

0x18b6,	// (0x0008e273) cale_week_time_pane_t6_ParamLimits

0x18ce,	// (0x0008e28b) cale_week_time_pane_t7_ParamLimits

0x18e6,	// (0x0008e2a3) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009bbbd) cale_week_time_pane_t_ParamLimits

0x18fe,	// (0x0008e2bb) cell_cale_week_pane_g2_ParamLimits

0xdb90,	// (0x0009a54d) bg_cale_side_pane_cp01_ParamLimits

0x28d5,	// (0x0008f292) cale_month_week_pane_t1_ParamLimits

0x28ec,	// (0x0008f2a9) cale_month_week_pane_t2_ParamLimits

0x2903,	// (0x0008f2c0) cale_month_week_pane_t3_ParamLimits

0x291a,	// (0x0008f2d7) cale_month_week_pane_t4_ParamLimits

0x2931,	// (0x0008f2ee) cale_month_week_pane_t5_ParamLimits

0x2948,	// (0x0008f305) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0009bc96) cale_month_week_pane_t_ParamLimits

0xa7e3,	// (0x000971a0) cell_cale_month_pane_g1_ParamLimits

0x0dbc,	// (0x0008d779) main_cale_event_viewer_pane

0x0dbc,	// (0x0008d779) listscroll_cale_event_viewer_pane

0xb34a,	// (0x00097d07) list_cale_ev_pane

0xb352,	// (0x00097d0f) scroll_pane_cp023

0xb35e,	// (0x00097d1b) field_cale_ev_pane_ParamLimits

0xb35e,	// (0x00097d1b) field_cale_ev_pane

0xb37c,	// (0x00097d39) field_cale_ev_content_pane_ParamLimits

0xb37c,	// (0x00097d39) field_cale_ev_content_pane

0xb388,	// (0x00097d45) field_cale_ev_pane_g1_ParamLimits

0xb388,	// (0x00097d45) field_cale_ev_pane_g1

0xb394,	// (0x00097d51) field_cale_ev_pane_g2_ParamLimits

0xb394,	// (0x00097d51) field_cale_ev_pane_g2

0xb3ac,	// (0x00097d69) field_cale_ev_pane_g3_ParamLimits

0xb3ac,	// (0x00097d69) field_cale_ev_pane_g3

0x0002,

0xf69b,	// (0x0009c058) field_cale_ev_pane_g_ParamLimits

0xf69b,	// (0x0009c058) field_cale_ev_pane_g

0xb3c4,	// (0x00097d81) field_cale_ev_pane_t1_ParamLimits

0xb3c4,	// (0x00097d81) field_cale_ev_pane_t1

0xb3db,	// (0x00097d98) field_cale_ev_content_pane_t1_ParamLimits

0xb3db,	// (0x00097d98) field_cale_ev_content_pane_t1

0xe698,	// (0x0009b055) bg_button_pane_cp01

0xa612,	// (0x00096fcf) listscroll_cale_week_pane_ParamLimits

0x151d,	// (0x0008deda) popup_toolbar_window_cp01

0xdb7e,	// (0x0009a53b) listscroll_cale_week_pane_t1_ParamLimits

0xa612,	// (0x00096fcf) listscroll_cale_day_pane_ParamLimits

0x2ad5,	// (0x0008f492) popup_toolbar_window_cp02

0xdb7e,	// (0x0009a53b) listscroll_cale_day_pane_t1_ParamLimits

0xa612,	// (0x00096fcf) main_cale_month_pane_ParamLimits

0x48ee,	// (0x000912ab) popup_toolbar_window_cp03_ParamLimits

0x48ee,	// (0x000912ab) popup_toolbar_window_cp03

0x376a,	// (0x00090127) main_image_pane_g2_ParamLimits

0x376a,	// (0x00090127) main_image_pane_g2

0x377b,	// (0x00090138) main_image_pane_g3_ParamLimits

0x377b,	// (0x00090138) main_image_pane_g3

0x0002,

0xf4a7,	// (0x0009be64) main_image_pane_g_ParamLimits

0xf4a7,	// (0x0009be64) main_image_pane_g

0xe7b2,	// (0x0009b16f) main_image_pane_t1_ParamLimits

0x378c,	// (0x00090149) main_image_pane_t2_ParamLimits

0x378c,	// (0x00090149) main_image_pane_t2

0x379e,	// (0x0009015b) main_image_pane_t3_ParamLimits

0x379e,	// (0x0009015b) main_image_pane_t3

0x37c6,	// (0x00090183) main_image_pane_t4_ParamLimits

0x37c6,	// (0x00090183) main_image_pane_t4

0x0003,

0xf4ae,	// (0x0009be6b) main_image_pane_t_ParamLimits

0xf4ae,	// (0x0009be6b) main_image_pane_t

0x37e6,	// (0x000901a3) popup_image_details_window_cp01

0x37f0,	// (0x000901ad) popup_toobar_trans_pane_cp01_ParamLimits

0x37f0,	// (0x000901ad) popup_toobar_trans_pane_cp01

0x4799,	// (0x00091156) popup_image_details_window_ParamLimits

0x4799,	// (0x00091156) popup_image_details_window

0xade1,	// (0x0009779e) popup_image_focus_window

0x4bb4,	// (0x00091571) camera2_autofocus_pane_ParamLimits

0x4bb4,	// (0x00091571) camera2_autofocus_pane

0x0dbc,	// (0x0008d779) bg_popup_sub_pane_cp06

0xb3f9,	// (0x00097db6) popup_image_focus_window_g1

0xb401,	// (0x00097dbe) popup_image_focus_window_g2

0xb409,	// (0x00097dc6) popup_image_focus_window_g3

0xb411,	// (0x00097dce) popup_image_focus_window_g4

0x0003,

0xf6a2,	// (0x0009c05f) popup_image_focus_window_g

0xb419,	// (0x00097dd6) popup_image_focus_window_t1

0xb427,	// (0x00097de4) popup_image_focus_window_t2

0xb437,	// (0x00097df4) popup_image_focus_window_t3

0x0002,

0xf6ab,	// (0x0009c068) popup_image_focus_window_t

0xb445,	// (0x00097e02) camera2_autofocus_pane_g1

0x9e93,	// (0x00096850) bg_tb_trans_pane_cp01

0xb453,	// (0x00097e10) popup_image_details_window_g1

0xb466,	// (0x00097e23) popup_image_details_window_g2

0x0002,

0xf6bd,	// (0x0009c07a) popup_image_details_window_g

0xb48f,	// (0x00097e4c) popup_image_details_window_t1

0xb4a1,	// (0x00097e5e) popup_image_details_window_t2

0xb4ba,	// (0x00097e77) popup_image_details_window_t3

0xb4ce,	// (0x00097e8b) popup_image_details_window_t4

0xb4e9,	// (0x00097ea6) popup_image_details_window_t5

0x0004,

0xf6c4,	// (0x0009c081) popup_image_details_window_t

0xa5da,	// (0x00096f97) bg_calc_paper_pane_ParamLimits

0xa5ee,	// (0x00096fab) grid_highlight_pane_cp013

0xa5f8,	// (0x00096fb5) list_calc_pane_ParamLimits

0xa60a,	// (0x00096fc7) scroll_pane_cp024

0xa612,	// (0x00096fcf) bg_calc_display_pane_ParamLimits

0x1350,	// (0x0008dd0d) calc_display_pane_t1_ParamLimits

0x1362,	// (0x0008dd1f) calc_display_pane_t2_ParamLimits

0xa61e,	// (0x00096fdb) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009bb30) calc_display_pane_t_ParamLimits

0x141a,	// (0x0008ddd7) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009bb4d) cell_calc_pane_g

0x1423,	// (0x0008dde0) cell_calc_pane_t1

0xa695,	// (0x00097052) grid_highlight_pane_cp02_ParamLimits

0xa6ab,	// (0x00097068) toolbar_button_pane_cp01_ParamLimits

0xa6ab,	// (0x00097068) toolbar_button_pane_cp01

0xe7f7,	// (0x0009b1b4) temp_image_control_pane_ParamLimits

0xe7f7,	// (0x0009b1b4) temp_image_control_pane

0x9e93,	// (0x00096850) main_mp3_pane

0xb503,	// (0x00097ec0) temp_image_control_pane_g1_ParamLimits

0xb503,	// (0x00097ec0) temp_image_control_pane_g1

0xb511,	// (0x00097ece) temp_image_control_pane_g2_ParamLimits

0xb511,	// (0x00097ece) temp_image_control_pane_g2

0xb523,	// (0x00097ee0) temp_image_control_pane_g3_ParamLimits

0xb523,	// (0x00097ee0) temp_image_control_pane_g3

0x5404,	// (0x00091dc1) temp_image_control_pane_g4_ParamLimits

0x5404,	// (0x00091dc1) temp_image_control_pane_g4

0x0003,

0xf6cf,	// (0x0009c08c) temp_image_control_pane_g_ParamLimits

0xf6cf,	// (0x0009c08c) temp_image_control_pane_g

0xb503,	// (0x00097ec0) main_mp3_pane_g1

0x5417,	// (0x00091dd4) main_mp3_pane_g2

0x0007,

0xf6d8,	// (0x0009c095) main_mp3_pane_g

0xb566,	// (0x00097f23) main_mp3_pane_t1

0xdbf5,	// (0x0009a5b2) main_camera_pane_g8_ParamLimits

0xdbf5,	// (0x0009a5b2) main_camera_pane_g8

0x1bb8,	// (0x0008e575) main_video_pane_g7_ParamLimits

0x1bb8,	// (0x0008e575) main_video_pane_g7

0xaeee,	// (0x000978ab) main_camera2_pane_t7_ParamLimits

0xaeee,	// (0x000978ab) main_camera2_pane_t7

0xdd3b,	// (0x0009a6f8) scroll_pane_cp025_ParamLimits

0xdd3b,	// (0x0009a6f8) scroll_pane_cp025

0xdd4f,	// (0x0009a70c) scroll_pane_cp026_ParamLimits

0xdd4f,	// (0x0009a70c) scroll_pane_cp026

0xdd5e,	// (0x0009a71b) wml_content_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_touch_calib_pane

0x54e1,	// (0x00091e9e) main_touch_calib_pane_g1

0x54ed,	// (0x00091eaa) main_touch_calib_pane_g2

0x54f9,	// (0x00091eb6) main_touch_calib_pane_g3

0x5505,	// (0x00091ec2) main_touch_calib_pane_g4

0x0003,

0xf6f6,	// (0x0009c0b3) main_touch_calib_pane_g

0x5511,	// (0x00091ece) main_touch_calib_pane_t1

0x552b,	// (0x00091ee8) main_touch_calib_pane_t2

0x0004,

0xf6ff,	// (0x0009c0bc) main_touch_calib_pane_t

0xe470,	// (0x0009ae2d) mup_progress_pane_cp02

0xe48f,	// (0x0009ae4c) navi_pane_g1

0xe4f1,	// (0x0009aeae) navi_pane_mp_t3

0x9e93,	// (0x00096850) main_mp3_pane_ParamLimits

0x492c,	// (0x000912e9) navi_pane_ParamLimits

0xb503,	// (0x00097ec0) main_mp3_pane_g1_ParamLimits

0x5417,	// (0x00091dd4) main_mp3_pane_g2_ParamLimits

0x5425,	// (0x00091de2) main_mp3_pane_g3_ParamLimits

0x5425,	// (0x00091de2) main_mp3_pane_g3

0x5433,	// (0x00091df0) main_mp3_pane_g4_ParamLimits

0x5433,	// (0x00091df0) main_mp3_pane_g4

0xb533,	// (0x00097ef0) main_mp3_pane_g5_ParamLimits

0xb533,	// (0x00097ef0) main_mp3_pane_g5

0xb541,	// (0x00097efe) main_mp3_pane_g6_ParamLimits

0xb541,	// (0x00097efe) main_mp3_pane_g6

0xb54e,	// (0x00097f0b) main_mp3_pane_g7_ParamLimits

0xb54e,	// (0x00097f0b) main_mp3_pane_g7

0xb55a,	// (0x00097f17) main_mp3_pane_g8_ParamLimits

0xb55a,	// (0x00097f17) main_mp3_pane_g8

0xf6d8,	// (0x0009c095) main_mp3_pane_g_ParamLimits

0x543f,	// (0x00091dfc) main_mp3_pane_t2

0x544d,	// (0x00091e0a) main_mp3_pane_t3

0xb574,	// (0x00097f31) main_mp3_pane_t4

0xb582,	// (0x00097f3f) main_mp3_pane_t5

0x0005,

0xf6e9,	// (0x0009c0a6) main_mp3_pane_t

0xb590,	// (0x00097f4d) mup_progress_pane_cp01

0x0e1a,	// (0x0008d7d7) aid_zoom_text_secondary2

0xb34a,	// (0x00097d07) list_cale_ev2_pane

0xb352,	// (0x00097d0f) scroll_pane_cp023_ParamLimits

0x5581,	// (0x00091f3e) field_cale_ev2_pane_ParamLimits

0x5581,	// (0x00091f3e) field_cale_ev2_pane

0x55a1,	// (0x00091f5e) field_cale_ev2_pane_g1_ParamLimits

0x55a1,	// (0x00091f5e) field_cale_ev2_pane_g1

0x55ad,	// (0x00091f6a) field_cale_ev2_pane_g2_ParamLimits

0x55ad,	// (0x00091f6a) field_cale_ev2_pane_g2

0x55c5,	// (0x00091f82) field_cale_ev2_pane_g3_ParamLimits

0x55c5,	// (0x00091f82) field_cale_ev2_pane_g3

0x0003,

0xf70a,	// (0x0009c0c7) field_cale_ev2_pane_g_ParamLimits

0xf70a,	// (0x0009c0c7) field_cale_ev2_pane_g

0xb5a4,	// (0x00097f61) field_cale_ev2_pane_t1_ParamLimits

0xb5a4,	// (0x00097f61) field_cale_ev2_pane_t1

0xb5bb,	// (0x00097f78) field_cale_ev2_pane_t2_ParamLimits

0xb5bb,	// (0x00097f78) field_cale_ev2_pane_t2

0x0001,

0xf713,	// (0x0009c0d0) field_cale_ev2_pane_t_ParamLimits

0xf713,	// (0x0009c0d0) field_cale_ev2_pane_t

0x361f,	// (0x0008ffdc) main_postcard_pane_g5_ParamLimits

0x361f,	// (0x0008ffdc) main_postcard_pane_g5

0x3635,	// (0x0008fff2) main_postcard_pane_g6_ParamLimits

0x3635,	// (0x0008fff2) main_postcard_pane_g6

0x1978,	// (0x0008e335) camera2_autofocus_pane_cp_ParamLimits

0x1978,	// (0x0008e335) camera2_autofocus_pane_cp

0x9e93,	// (0x00096850) main_mup3_pane

0x55fd,	// (0x00091fba) main_mup3_pane_g1_ParamLimits

0x55fd,	// (0x00091fba) main_mup3_pane_g1

0x561f,	// (0x00091fdc) main_mup3_pane_g2_ParamLimits

0x561f,	// (0x00091fdc) main_mup3_pane_g2

0x569d,	// (0x0009205a) main_mup3_pane_g3_ParamLimits

0x569d,	// (0x0009205a) main_mup3_pane_g3

0x56df,	// (0x0009209c) main_mup3_pane_g4_ParamLimits

0x56df,	// (0x0009209c) main_mup3_pane_g4

0x5721,	// (0x000920de) main_mup3_pane_g5_ParamLimits

0x5721,	// (0x000920de) main_mup3_pane_g5

0x5763,	// (0x00092120) main_mup3_pane_g6_ParamLimits

0x5763,	// (0x00092120) main_mup3_pane_g6

0xb5d0,	// (0x00097f8d) main_mup3_pane_g7_ParamLimits

0xb5d0,	// (0x00097f8d) main_mup3_pane_g7

0x0007,

0xf723,	// (0x0009c0e0) main_mup3_pane_g_ParamLimits

0xf723,	// (0x0009c0e0) main_mup3_pane_g

0x57dd,	// (0x0009219a) main_mup3_pane_t1_ParamLimits

0x57dd,	// (0x0009219a) main_mup3_pane_t1

0x584d,	// (0x0009220a) main_mup3_pane_t2_ParamLimits

0x584d,	// (0x0009220a) main_mup3_pane_t2

0x591d,	// (0x000922da) main_mup3_pane_t4_ParamLimits

0x591d,	// (0x000922da) main_mup3_pane_t4

0x5973,	// (0x00092330) main_mup3_pane_t5_ParamLimits

0x5973,	// (0x00092330) main_mup3_pane_t5

0x5a27,	// (0x000923e4) main_mup3_pane_t6_ParamLimits

0x5a27,	// (0x000923e4) main_mup3_pane_t6

0x0005,

0xf734,	// (0x0009c0f1) main_mup3_pane_t_ParamLimits

0xf734,	// (0x0009c0f1) main_mup3_pane_t

0x5adb,	// (0x00092498) mup3_progress_pane_ParamLimits

0x5adb,	// (0x00092498) mup3_progress_pane

0x5b5d,	// (0x0009251a) popup_mup3_control_window_ParamLimits

0x5b5d,	// (0x0009251a) popup_mup3_control_window

0xb5de,	// (0x00097f9b) popup_mup3_text_window

0x5b8f,	// (0x0009254c) mup3_progress_pane_t1

0x5ba6,	// (0x00092563) mup3_progress_pane_t2

0xb5e6,	// (0x00097fa3) mup3_progress_pane_t3

0x0002,

0xf741,	// (0x0009c0fe) mup3_progress_pane_t

0xb5fd,	// (0x00097fba) mup_progress_pane_cp03

0x0dbc,	// (0x0008d779) bg_tb_trans_pane_cp04

0x5bbd,	// (0x0009257a) mup3_volume_pane

0x5bc5,	// (0x00092582) popup_mup3_control_window_g1

0x5bce,	// (0x0009258b) mup3_volume_pane_g1

0x5bd7,	// (0x00092594) mup3_volume_pane_g2

0x5be0,	// (0x0009259d) mup3_volume_pane_g3

0x0002,

0xf748,	// (0x0009c105) mup3_volume_pane_g

0x0dbc,	// (0x0008d779) bg_tb_trans_pane_cp03

0xb60d,	// (0x00097fca) popup_mup3_text_window_g1

0xb615,	// (0x00097fd2) popup_mup3_text_window_t1

0xa66c,	// (0x00097029) list_calc_item_pane_g1_ParamLimits

0xafd6,	// (0x00097993) mup_volume_pane_cp_g1

0x5545,	// (0x00091f02) main_touch_calib_pane_t3

0x5559,	// (0x00091f16) main_touch_calib_pane_t4

0x556d,	// (0x00091f2a) main_touch_calib_pane_t5

0x0dc6,	// (0x0008d783) aid_cell_size_toolbar2

0x0dce,	// (0x0008d78b) aid_popup3_width_pane

0x0e0a,	// (0x0008d7c7) aid_zoom_text_msg_primary

0xa7cd,	// (0x0009718a) vorec_t7

0xa630,	// (0x00096fed) bg_calc_paper_pane_g1_ParamLimits

0xa63c,	// (0x00096ff9) bg_calc_paper_pane_g2_ParamLimits

0xa648,	// (0x00097005) bg_calc_paper_pane_g3_ParamLimits

0xa654,	// (0x00097011) bg_calc_paper_pane_g4_ParamLimits

0xa660,	// (0x0009701d) bg_calc_paper_pane_g5_ParamLimits

0x13a9,	// (0x0008dd66) bg_calc_paper_pane_g6_ParamLimits

0x13b8,	// (0x0008dd75) bg_calc_paper_pane_g7_ParamLimits

0x13c7,	// (0x0008dd84) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009bb37) bg_calc_paper_pane_g_ParamLimits

0x13da,	// (0x0008dd97) calc_bg_paper_pane_g9_ParamLimits

0x1ac6,	// (0x0008e483) image_qvga_pane_ParamLimits

0x1ac6,	// (0x0008e483) image_qvga_pane

0xa50f,	// (0x00096ecc) bg_popup_sub_pane_cp04_ParamLimits

0xe72e,	// (0x0009b0eb) popup_mup_playback_window_g1_ParamLimits

0xe73a,	// (0x0009b0f7) popup_mup_playback_window_t1_ParamLimits

0xe74f,	// (0x0009b10c) popup_mup_playback_window_t2_ParamLimits

0x0267,	// (0x0008cc24) popup_mup_playback_window_t_ParamLimits

0x50a7,	// (0x00091a64) main_mup2_pane_g3_ParamLimits

0x50a7,	// (0x00091a64) main_mup2_pane_g3

0x1edc,	// (0x0008e899) popup_toolbar_window_cp04

0xeb3d,	// (0x0009b4fa) popup_call2_audio_second_window_g3_ParamLimits

0xeb3d,	// (0x0009b4fa) popup_call2_audio_second_window_g3

0x3e8a,	// (0x00090847) popup_call2_audio_first_window_g4_ParamLimits

0x3e8a,	// (0x00090847) popup_call2_audio_first_window_g4

0xaa60,	// (0x0009741d) popup_call2_audio_in_window_g4_ParamLimits

0xaa60,	// (0x0009741d) popup_call2_audio_in_window_g4

0x374c,	// (0x00090109) aid_area_sk_bg_cut_ParamLimits

0x374c,	// (0x00090109) aid_area_sk_bg_cut

0xe764,	// (0x0009b121) aid_area_sk_bg_cut_2_ParamLimits

0xe764,	// (0x0009b121) aid_area_sk_bg_cut_2

0x53aa,	// (0x00091d67) aid_placing_details_win

0x53b2,	// (0x00091d6f) aid_placing_details_win_2

0xb445,	// (0x00097e02) camera2_autofocus_pane_g1_ParamLimits

0x0fc3,	// (0x0008d980) popup_fixed_preview_cale_window_ParamLimits

0x0fc3,	// (0x0008d980) popup_fixed_preview_cale_window

0xe540,	// (0x0009aefd) navi_slider_pane_g3

0xe549,	// (0x0009af06) navi_slider_pane_g4

0xe552,	// (0x0009af0f) navi_slider_pane_g5

0xe540,	// (0x0009aefd) navi_slider_pane_g6

0xa88d,	// (0x0009724a) navi_slider_pane_g7

0xe665,	// (0x0009b022) mup_scale_pane_g3

0xe66e,	// (0x0009b02b) mup_scale_pane_g4

0xe677,	// (0x0009b034) mup_scale_pane_g5

0x33ff,	// (0x0008fdbc) mup_scale_pane_g6

0x3408,	// (0x0008fdc5) mup_scale_pane_g7

0xe540,	// (0x0009aefd) cams2_slider_pane_g3

0xb08b,	// (0x00097a48) cams2_slider_pane_g4

0xb093,	// (0x00097a50) cams2_slider_pane_g5

0xe540,	// (0x0009aefd) cams2_slider_pane_g6

0xb09b,	// (0x00097a58) cams2_slider_pane_g7

0xb2c7,	// (0x00097c84) camera2_autofocus_pane_cp_g1

0xb623,	// (0x00097fe0) bg_popup_preview_window_pane_cp02_ParamLimits

0xb623,	// (0x00097fe0) bg_popup_preview_window_pane_cp02

0xb62f,	// (0x00097fec) list_fp_cale_pane_ParamLimits

0xb62f,	// (0x00097fec) list_fp_cale_pane

0xb63b,	// (0x00097ff8) popup_fixed_preview_cale_window_t1_ParamLimits

0xb63b,	// (0x00097ff8) popup_fixed_preview_cale_window_t1

0x5be9,	// (0x000925a6) popup_fixed_preview_cale_window_t2_ParamLimits

0x5be9,	// (0x000925a6) popup_fixed_preview_cale_window_t2

0x5bfe,	// (0x000925bb) popup_fixed_preview_cale_window_t3_ParamLimits

0x5bfe,	// (0x000925bb) popup_fixed_preview_cale_window_t3

0x0002,

0xf74f,	// (0x0009c10c) popup_fixed_preview_cale_window_t_ParamLimits

0xf74f,	// (0x0009c10c) popup_fixed_preview_cale_window_t

0x5c13,	// (0x000925d0) list_single_fp_cale_pane_ParamLimits

0x5c13,	// (0x000925d0) list_single_fp_cale_pane

0xb659,	// (0x00098016) list_single_fp_cale_pane_g1_ParamLimits

0xb659,	// (0x00098016) list_single_fp_cale_pane_g1

0xb665,	// (0x00098022) list_single_fp_cale_pane_g2_ParamLimits

0xb665,	// (0x00098022) list_single_fp_cale_pane_g2

0x0002,

0xf756,	// (0x0009c113) list_single_fp_cale_pane_g_ParamLimits

0xf756,	// (0x0009c113) list_single_fp_cale_pane_g

0xb67e,	// (0x0009803b) list_single_fp_cale_pane_t1_ParamLimits

0xb67e,	// (0x0009803b) list_single_fp_cale_pane_t1

0xb690,	// (0x0009804d) list_single_fp_cale_pane_t2_ParamLimits

0xb690,	// (0x0009804d) list_single_fp_cale_pane_t2

0x0001,

0xf75d,	// (0x0009c11a) list_single_fp_cale_pane_t_ParamLimits

0xf75d,	// (0x0009c11a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0dbc,	// (0x0008d779) main_dialer_pane

0x5c28,	// (0x000925e5) aid_cell_size_keypad

0x5c32,	// (0x000925ef) dialer_ne_pane

0x5c3a,	// (0x000925f7) grid_dialer_command_1_pane

0x5c42,	// (0x000925ff) grid_dialer_command_2_pane

0x5c4a,	// (0x00092607) grid_dialer_keypad_pane

0x5c5c,	// (0x00092619) bg_popup_call_pane_cp06_ParamLimits

0x5c5c,	// (0x00092619) bg_popup_call_pane_cp06

0x5c68,	// (0x00092625) dialer_ne_clear_pane_ParamLimits

0x5c68,	// (0x00092625) dialer_ne_clear_pane

0xb6c3,	// (0x00098080) dialer_ne_pane_g1

0xb6cb,	// (0x00098088) dialer_ne_pane_t1_ParamLimits

0xb6cb,	// (0x00098088) dialer_ne_pane_t1

0x5c74,	// (0x00092631) dialer_ne_pane_t2_ParamLimits

0x5c74,	// (0x00092631) dialer_ne_pane_t2

0x5c9e,	// (0x0009265b) dialer_ne_pane_t3_ParamLimits

0x5c9e,	// (0x0009265b) dialer_ne_pane_t3

0x0002,

0xf762,	// (0x0009c11f) dialer_ne_pane_t_ParamLimits

0xf762,	// (0x0009c11f) dialer_ne_pane_t

0x5cce,	// (0x0009268b) dialer_ne_pane_t3_copy1_ParamLimits

0x5cce,	// (0x0009268b) dialer_ne_pane_t3_copy1

0x5cfd,	// (0x000926ba) cell_dialer_keypad_pane_ParamLimits

0x5cfd,	// (0x000926ba) cell_dialer_keypad_pane

0x5d14,	// (0x000926d1) cell_dialer_command_1_pane_ParamLimits

0x5d14,	// (0x000926d1) cell_dialer_command_1_pane

0x5d2a,	// (0x000926e7) cell_dialer_command_2_pane_ParamLimits

0x5d2a,	// (0x000926e7) cell_dialer_command_2_pane

0xb6dd,	// (0x0009809a) bg_button_pane_cp02_ParamLimits

0xb6dd,	// (0x0009809a) bg_button_pane_cp02

0x5d39,	// (0x000926f6) cell_dialer_keypad_pane_g1_ParamLimits

0x5d39,	// (0x000926f6) cell_dialer_keypad_pane_g1

0xb6dd,	// (0x0009809a) bg_button_pane_cp03_ParamLimits

0xb6dd,	// (0x0009809a) bg_button_pane_cp03

0x5d4d,	// (0x0009270a) cell_dialer_command_1_pane_g1_ParamLimits

0x5d4d,	// (0x0009270a) cell_dialer_command_1_pane_g1

0xb6e9,	// (0x000980a6) bg_button_pane_cp04

0x5d61,	// (0x0009271e) cell_dialer_command_2_pane_g1

0xe52f,	// (0x0009aeec) bg_button_pane_cp06

0xb6f1,	// (0x000980ae) dialer_ne_clear_pane_g1

0x2f43,	// (0x0008f900) navi_pane_g2

0x2f71,	// (0x0008f92e) navi_pane_g3

0x0002,

0xf3c9,	// (0x0009bd86) navi_pane_g

0x2f9a,	// (0x0008f957) navi_pane_mv_g2

0x2fc1,	// (0x0008f97e) navi_pane_mv_g5

0x2fc9,	// (0x0008f986) navi_pane_mv_t1

0xa612,	// (0x00096fcf) main_clock2_pane

0x5d95,	// (0x00092752) main_clock2_list_pane_ParamLimits

0x5d95,	// (0x00092752) main_clock2_list_pane

0x5dcb,	// (0x00092788) main_clock2_pane_t1_ParamLimits

0x5dcb,	// (0x00092788) main_clock2_pane_t1

0x5e07,	// (0x000927c4) main_clock2_pane_t2_ParamLimits

0x5e07,	// (0x000927c4) main_clock2_pane_t2

0x0004,

0xf769,	// (0x0009c126) main_clock2_pane_t_ParamLimits

0xf769,	// (0x0009c126) main_clock2_pane_t

0x5e91,	// (0x0009284e) popup_clock_analogue_window_cp03_ParamLimits

0x5e91,	// (0x0009284e) popup_clock_analogue_window_cp03

0x5eb6,	// (0x00092873) popup_clock_digital_window_cp02_ParamLimits

0x5eb6,	// (0x00092873) popup_clock_digital_window_cp02

0x5f27,	// (0x000928e4) main_clock2_list_single_pane_ParamLimits

0x5f27,	// (0x000928e4) main_clock2_list_single_pane

0xe52f,	// (0x0009aeec) list_highlight_pane_cp05

0xb6f9,	// (0x000980b6) main_clock2_list_single_pane_t1

0x1edc,	// (0x0008e899) popup_toolbar_window_cp04_ParamLimits

0x53d4,	// (0x00091d91) camera2_autofocus_pane_g2_ParamLimits

0x53d4,	// (0x00091d91) camera2_autofocus_pane_g2

0x53e0,	// (0x00091d9d) camera2_autofocus_pane_g3_ParamLimits

0x53e0,	// (0x00091d9d) camera2_autofocus_pane_g3

0x53ec,	// (0x00091da9) camera2_autofocus_pane_g4_ParamLimits

0x53ec,	// (0x00091da9) camera2_autofocus_pane_g4

0x53f8,	// (0x00091db5) camera2_autofocus_pane_g5_ParamLimits

0x53f8,	// (0x00091db5) camera2_autofocus_pane_g5

0x0004,

0xf6b2,	// (0x0009c06f) camera2_autofocus_pane_g_ParamLimits

0xf6b2,	// (0x0009c06f) camera2_autofocus_pane_g

0x55dd,	// (0x00091f9a) camera2_autofocus_pane_cp_g2

0x55e5,	// (0x00091fa2) camera2_autofocus_pane_cp_g3

0x55ed,	// (0x00091faa) camera2_autofocus_pane_cp_g4

0x55f5,	// (0x00091fb2) camera2_autofocus_pane_cp_g5

0x0004,

0xf718,	// (0x0009c0d5) camera2_autofocus_pane_cp_g

0x5c54,	// (0x00092611) popup_dialer_spcha_window

0x0dbc,	// (0x0008d779) bg_popup_sub_pane_cp07

0xb707,	// (0x000980c4) list_spcha_pane

0xb70f,	// (0x000980cc) list_single_spcha_pane_ParamLimits

0xb70f,	// (0x000980cc) list_single_spcha_pane

0x0dbc,	// (0x0008d779) list_highlight_pane_cp06

0xb720,	// (0x000980dd) list_single_spcha_pane_t1

0x42b3,	// (0x00090c70) popup_call2_audio_out_window_g4_ParamLimits

0x42b3,	// (0x00090c70) popup_call2_audio_out_window_g4

0x0dbc,	// (0x0008d779) main_imed2_pane

0xade9,	// (0x000977a6) popup_imed_adjust2_window

0x47b1,	// (0x0009116e) popup_imed_trans_window_ParamLimits

0x47b1,	// (0x0009116e) popup_imed_trans_window

0xb105,	// (0x00097ac2) popup_blid_sat_info2_window_t1

0xb113,	// (0x00097ad0) popup_blid_sat_info2_window_t2

0x000a,

0xf647,	// (0x0009c004) popup_blid_sat_info2_window_t

0x5fd1,	// (0x0009298e) aid_size_cell_colour_35

0x5ff1,	// (0x000929ae) aid_size_cell_colour_112

0x6011,	// (0x000929ce) aid_size_cell_effect

0xadc1,	// (0x0009777e) bg_tb_trans_pane_cp02

0xe070,	// (0x0009aa2d) heading_imed_pane

0x6031,	// (0x000929ee) listscroll_imed_pane

0xb72e,	// (0x000980eb) heading_imed_pane_g1

0xb736,	// (0x000980f3) heading_imed_pane_t1

0xb744,	// (0x00098101) grid_imed_colour_35_pane_ParamLimits

0xb744,	// (0x00098101) grid_imed_colour_35_pane

0x603d,	// (0x000929fa) grid_imed_effect_pane

0xb75b,	// (0x00098118) list_imed_aspect_pane

0x6053,	// (0x00092a10) scroll_pane_cp027_ParamLimits

0x6053,	// (0x00092a10) scroll_pane_cp027

0x6064,	// (0x00092a21) cell_imed_effect_pane_ParamLimits

0x6064,	// (0x00092a21) cell_imed_effect_pane

0xb763,	// (0x00098120) cell_imed_colour_pane_ParamLimits

0xb763,	// (0x00098120) cell_imed_colour_pane

0xb7a5,	// (0x00098162) cell_imed_colour_pane_g1_ParamLimits

0xb7a5,	// (0x00098162) cell_imed_colour_pane_g1

0xb7b6,	// (0x00098173) hgihlgiht_grid_pane_cp016_ParamLimits

0xb7b6,	// (0x00098173) hgihlgiht_grid_pane_cp016

0x608b,	// (0x00092a48) cell_imed_effect_pane_g1

0x6093,	// (0x00092a50) grid_highlight_pane_cp017

0xb7c7,	// (0x00098184) list_imed_single_pane_ParamLimits

0xb7c7,	// (0x00098184) list_imed_single_pane

0x0dbc,	// (0x0008d779) list_highlight_pane_cp07

0xb7dc,	// (0x00098199) list_imed_aspect_pane_comp1_t1

0xadc1,	// (0x0009777e) bg_tb_trans_pane_cp05

0xb7fe,	// (0x000981bb) popup_imed_adjust2_window_g1

0xb825,	// (0x000981e2) popup_imed_adjust2_window_t1

0xb83d,	// (0x000981fa) slider_imed_adjust_pane

0xb851,	// (0x0009820e) slider_imed_adjust_pane_g1

0xb861,	// (0x0009821e) slider_imed_adjust_pane_g2

0xb871,	// (0x0009822e) slider_imed_adjust_pane_g3

0xb882,	// (0x0009823f) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x0009c143) slider_imed_adjust_pane_g

0x609c,	// (0x00092a59) aid_size_cell_clipart2

0x60a8,	// (0x00092a65) grid_imed_clipart_pane

0xb893,	// (0x00098250) scroll_pane_cp031

0x60b2,	// (0x00092a6f) cell_imed_clipart_pane_ParamLimits

0x60b2,	// (0x00092a6f) cell_imed_clipart_pane

0x60d4,	// (0x00092a91) cell_imed_clipart_pane_g1

0x0dbc,	// (0x0008d779) grid_highlight_pane_cp014

0x5daa,	// (0x00092767) main_clock2_pane_g1_ParamLimits

0x5daa,	// (0x00092767) main_clock2_pane_g1

0x5ed2,	// (0x0009288f) aid_call2_pane_cp10

0x5ee4,	// (0x000928a1) aid_call_pane_cp10

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g1

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g2

0x5ef6,	// (0x000928b3) popup_clock_analogue_window_cp10_g3

0x5ef6,	// (0x000928b3) popup_clock_analogue_window_cp10_g4

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x0009c131) popup_clock_analogue_window_cp10_g

0x5f08,	// (0x000928c5) popup_clock_analogue_window_cp10_t1

0x5f39,	// (0x000928f6) clock_digital_number_pane_cp10_ParamLimits

0x5f39,	// (0x000928f6) clock_digital_number_pane_cp10

0x5f51,	// (0x0009290e) clock_digital_number_pane_cp11_ParamLimits

0x5f51,	// (0x0009290e) clock_digital_number_pane_cp11

0x5f69,	// (0x00092926) clock_digital_number_pane_cp12_ParamLimits

0x5f69,	// (0x00092926) clock_digital_number_pane_cp12

0x5f81,	// (0x0009293e) clock_digital_number_pane_cp13_ParamLimits

0x5f81,	// (0x0009293e) clock_digital_number_pane_cp13

0x5f99,	// (0x00092956) clock_digital_separator_pane_cp10_ParamLimits

0x5f99,	// (0x00092956) clock_digital_separator_pane_cp10

0x5fb1,	// (0x0009296e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5fb1,	// (0x0009296e) popup_clock_digital_window_cp02_t1

0xa507,	// (0x00096ec4) clock_digital_number_pane_cp10_g1

0xa507,	// (0x00096ec4) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x0009c14c) clock_digital_number_pane_cp10_g

0xa507,	// (0x00096ec4) clock_digital_separator_pane_cp10_g1

0xa507,	// (0x00096ec4) clock_digital_separator_pane_g2_cp10

0xe4ff,	// (0x0009aebc) navi_pane_vded_g4

0xe508,	// (0x0009aec5) navi_pane_vded_g5

0xe511,	// (0x0009aece) navi_pane_vded_t1

0x0dbc,	// (0x0008d779) main_vded_pane

0x60dd,	// (0x00092a9a) main_vded_pane_g1

0x60e7,	// (0x00092aa4) main_vded_pane_g2

0x60f1,	// (0x00092aae) main_vded_pane_g3

0x0002,

0xf794,	// (0x0009c151) main_vded_pane_g

0x60fb,	// (0x00092ab8) main_vded_pane_t1

0x6109,	// (0x00092ac6) main_vded_pane_t2

0x0001,

0xf79b,	// (0x0009c158) main_vded_pane_t

0x6117,	// (0x00092ad4) vded_slider_pane

0x611f,	// (0x00092adc) vded_video_pane

0xb89b,	// (0x00098258) vded_video_pane_g1

0x6127,	// (0x00092ae4) vded_video_pane_g2

0xb2c7,	// (0x00097c84) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x0009c15d) vded_video_pane_g

0xb8a5,	// (0x00098262) vded_slider_pane_g1

0xafd6,	// (0x00097993) vded_slider_pane_g2

0xb8ae,	// (0x0009826b) vded_slider_pane_g3

0xb8b7,	// (0x00098274) vded_slider_pane_g4

0xb8c0,	// (0x0009827d) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x0009c164) vded_slider_pane_g

0x5b45,	// (0x00092502) mup3_rocker_pane_ParamLimits

0x5b45,	// (0x00092502) mup3_rocker_pane

0x6130,	// (0x00092aed) mup3_control_keys_pane_g1

0x6138,	// (0x00092af5) mup3_control_keys_pane_g2

0x6140,	// (0x00092afd) mup3_control_keys_pane_g3

0x6148,	// (0x00092b05) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x0009c16f) mup3_control_keys_pane_g

0x0ffa,	// (0x0008d9b7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ffa,	// (0x0008d9b7) popup_toolbar2_fixed_window_cp01

0x5b79,	// (0x00092536) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5b79,	// (0x00092536) popup_toolbar2_fixed_window_cp02

0x3bf2,	// (0x000905af) popup_call2_audio_second_window_t4_ParamLimits

0x3bf2,	// (0x000905af) popup_call2_audio_second_window_t4

0x4120,	// (0x00090add) popup_call2_audio_first_window_t6_ParamLimits

0x4120,	// (0x00090add) popup_call2_audio_first_window_t6

0xa90d,	// (0x000972ca) popup_call2_audio_out_window_t6_ParamLimits

0xa90d,	// (0x000972ca) popup_call2_audio_out_window_t6

0x0dbc,	// (0x0008d779) main_vitu_pane

0x6158,	// (0x00092b15) aid_size_cell_itu_ParamLimits

0x6158,	// (0x00092b15) aid_size_cell_itu

0x9e93,	// (0x00096850) bg_popup_window_pane_cp08_ParamLimits

0x9e93,	// (0x00096850) bg_popup_window_pane_cp08

0x616e,	// (0x00092b2b) field_vitu_entry_pane_ParamLimits

0x616e,	// (0x00092b2b) field_vitu_entry_pane

0x6185,	// (0x00092b42) grid_vitu_function_pane_ParamLimits

0x6185,	// (0x00092b42) grid_vitu_function_pane

0x61a0,	// (0x00092b5d) grid_vitu_itu_pane_ParamLimits

0x61a0,	// (0x00092b5d) grid_vitu_itu_pane

0x61be,	// (0x00092b7b) cell_vitu_itu_pane_ParamLimits

0x61be,	// (0x00092b7b) cell_vitu_itu_pane

0x61e0,	// (0x00092b9d) cell_vitu_function_pane_ParamLimits

0x61e0,	// (0x00092b9d) cell_vitu_function_pane

0x9e93,	// (0x00096850) bg_popup_sub_pane_cp08_ParamLimits

0x9e93,	// (0x00096850) bg_popup_sub_pane_cp08

0x61f9,	// (0x00092bb6) field_vitu_entry_pane_t1_ParamLimits

0x61f9,	// (0x00092bb6) field_vitu_entry_pane_t1

0xb8e1,	// (0x0009829e) field_vitu_entry_pane_t2_ParamLimits

0xb8e1,	// (0x0009829e) field_vitu_entry_pane_t2

0x0001,

0xf7c0,	// (0x0009c17d) field_vitu_entry_pane_t_ParamLimits

0xf7c0,	// (0x0009c17d) field_vitu_entry_pane_t

0xb8fe,	// (0x000982bb) bg_button_pane_cp05_ParamLimits

0xb8fe,	// (0x000982bb) bg_button_pane_cp05

0x6217,	// (0x00092bd4) cell_vitu_itu_pane_g1

0x622f,	// (0x00092bec) cell_vitu_itu_pane_t1_ParamLimits

0x622f,	// (0x00092bec) cell_vitu_itu_pane_t1

0x6241,	// (0x00092bfe) cell_vitu_itu_pane_t2_ParamLimits

0x6241,	// (0x00092bfe) cell_vitu_itu_pane_t2

0x0002,

0xf7c5,	// (0x0009c182) cell_vitu_itu_pane_t_ParamLimits

0xf7c5,	// (0x0009c182) cell_vitu_itu_pane_t

0xb90c,	// (0x000982c9) bg_button_pane_cp07

0x6276,	// (0x00092c33) cell_vitu_function_pane_g1

0xa5a2,	// (0x00096f5f) main_calc_pane_g1

0x0dfe,	// (0x0008d7bb) aid_visual_content_pane

0x0dbc,	// (0x0008d779) main_vradio_pane

0x627f,	// (0x00092c3c) main_vradio_pane_g1_ParamLimits

0x627f,	// (0x00092c3c) main_vradio_pane_g1

0xb916,	// (0x000982d3) main_vradio_pane_g2_ParamLimits

0xb916,	// (0x000982d3) main_vradio_pane_g2

0x0001,

0xf7cc,	// (0x0009c189) main_vradio_pane_g_ParamLimits

0xf7cc,	// (0x0009c189) main_vradio_pane_g

0x6298,	// (0x00092c55) main_vradio_pane_t1_ParamLimits

0x6298,	// (0x00092c55) main_vradio_pane_t1

0x62ad,	// (0x00092c6a) main_vradio_pane_t2_ParamLimits

0x62ad,	// (0x00092c6a) main_vradio_pane_t2

0xb923,	// (0x000982e0) main_vradio_pane_t3_ParamLimits

0xb923,	// (0x000982e0) main_vradio_pane_t3

0x0002,

0xf7d1,	// (0x0009c18e) main_vradio_pane_t_ParamLimits

0xf7d1,	// (0x0009c18e) main_vradio_pane_t

0x62c2,	// (0x00092c7f) vradio_rocker_control_pane_ParamLimits

0x62c2,	// (0x00092c7f) vradio_rocker_control_pane

0x62d4,	// (0x00092c91) vradio_station_info_pane_ParamLimits

0x62d4,	// (0x00092c91) vradio_station_info_pane

0xb937,	// (0x000982f4) vradio_frequency_info_pane_ParamLimits

0xb937,	// (0x000982f4) vradio_frequency_info_pane

0xb2c7,	// (0x00097c84) vradio_station_info_pane_g1

0xb946,	// (0x00098303) vradio_station_info_pane_t1_ParamLimits

0xb946,	// (0x00098303) vradio_station_info_pane_t1

0xb968,	// (0x00098325) vradio_station_info_pane_t2_ParamLimits

0xb968,	// (0x00098325) vradio_station_info_pane_t2

0x0001,

0xf7d8,	// (0x0009c195) vradio_station_info_pane_t_ParamLimits

0xf7d8,	// (0x0009c195) vradio_station_info_pane_t

0xb97a,	// (0x00098337) vradio_tuning_pane

0xb982,	// (0x0009833f) vradio_rocker_control_pane_g1

0xb98a,	// (0x00098347) vradio_rocker_control_pane_g2

0xb992,	// (0x0009834f) vradio_rocker_control_pane_g3

0xb99a,	// (0x00098357) vradio_rocker_control_pane_g4

0xb9a2,	// (0x0009835f) vradio_rocker_control_pane_g5

0x0004,

0xf7dd,	// (0x0009c19a) vradio_rocker_control_pane_g

0x62e6,	// (0x00092ca3) vradio_frequency_info_pane_g1

0xb9aa,	// (0x00098367) vradio_frequency_info_pane_t1_ParamLimits

0xb9aa,	// (0x00098367) vradio_frequency_info_pane_t1

0x62f0,	// (0x00092cad) vradio_tuning_pane_g1

0x62fb,	// (0x00092cb8) vradio_tuning_pane_t1

0x0e5b,	// (0x0008d818) area_side_right_pane_ParamLimits

0x0e5b,	// (0x0008d818) area_side_right_pane

0xad88,	// (0x00097745) status_small_pane_g1

0xad90,	// (0x0009774d) status_small_pane_g2

0xad99,	// (0x00097756) status_small_pane_g3

0xada2,	// (0x0009775f) status_small_pane_g4

0x0003,

0xf59d,	// (0x0009bf5a) status_small_pane_g

0xadab,	// (0x00097768) status_small_pane_t1

0x0dbc,	// (0x0008d779) main_video3_pane

0xb9be,	// (0x0009837b) cams_zoom_vslider_pane

0xb9c6,	// (0x00098383) image3_wide_pane_ParamLimits

0xb9c6,	// (0x00098383) image3_wide_pane

0xb9e0,	// (0x0009839d) image3_wide_small_pane

0xb9ec,	// (0x000983a9) main_video3_pane_g1_ParamLimits

0xb9ec,	// (0x000983a9) main_video3_pane_g1

0xba08,	// (0x000983c5) main_video3_pane_g2_ParamLimits

0xba08,	// (0x000983c5) main_video3_pane_g2

0x0001,

0xf7e8,	// (0x0009c1a5) main_video3_pane_g_ParamLimits

0xf7e8,	// (0x0009c1a5) main_video3_pane_g

0xba24,	// (0x000983e1) main_video3_pane_t1_ParamLimits

0xba24,	// (0x000983e1) main_video3_pane_t1

0xba4f,	// (0x0009840c) main_video3_pane_t2_ParamLimits

0xba4f,	// (0x0009840c) main_video3_pane_t2

0xba7a,	// (0x00098437) main_video3_pane_t3_ParamLimits

0xba7a,	// (0x00098437) main_video3_pane_t3

0x0002,

0xf7ed,	// (0x0009c1aa) main_video3_pane_t_ParamLimits

0xf7ed,	// (0x0009c1aa) main_video3_pane_t

0xbaa7,	// (0x00098464) cams_zoom_vslider_pane_g1

0xbab0,	// (0x0009846d) cams_zoom_vslider_pane_g2

0x0001,

0xf7f4,	// (0x0009c1b1) cams_zoom_vslider_pane_g

0xbab8,	// (0x00098475) small_slider_vertical_pane

0xb2c7,	// (0x00097c84) small_slider_vertical_pane_g1

0xb2c7,	// (0x00097c84) small_slider_vertical_pane_g2

0xbac0,	// (0x0009847d) small_slider_vertical_pane_g3

0x0002,

0xf7f9,	// (0x0009c1b6) small_slider_vertical_pane_g

0x0dbc,	// (0x0008d779) main_hwr_training_pane

0xbac9,	// (0x00098486) hwr_training_instruct_pane_ParamLimits

0xbac9,	// (0x00098486) hwr_training_instruct_pane

0x630a,	// (0x00092cc7) hwr_training_navi_pane_ParamLimits

0x630a,	// (0x00092cc7) hwr_training_navi_pane

0x6329,	// (0x00092ce6) hwr_training_write_pane_ParamLimits

0x6329,	// (0x00092ce6) hwr_training_write_pane

0x0dbc,	// (0x0008d779) bg_frame_shadow_pane

0xbb00,	// (0x000984bd) hwr_training_write_pane_g1

0xbb08,	// (0x000984c5) hwr_training_write_pane_g2

0xbb10,	// (0x000984cd) hwr_training_write_pane_g3

0xbb18,	// (0x000984d5) hwr_training_write_pane_g4

0xbb20,	// (0x000984dd) hwr_training_write_pane_g5

0xbb28,	// (0x000984e5) hwr_training_write_pane_g6

0xbb30,	// (0x000984ed) hwr_training_write_pane_g7

0x0006,

0xf800,	// (0x0009c1bd) hwr_training_write_pane_g

0xd6fa,	// (0x0009a0b7) hwr_training_navi_pane_g1_ParamLimits

0xd6fa,	// (0x0009a0b7) hwr_training_navi_pane_g1

0xd70c,	// (0x0009a0c9) hwr_training_navi_pane_g2_ParamLimits

0xd70c,	// (0x0009a0c9) hwr_training_navi_pane_g2

0xd71e,	// (0x0009a0db) hwr_training_navi_pane_g3_ParamLimits

0xd71e,	// (0x0009a0db) hwr_training_navi_pane_g3

0xd72e,	// (0x0009a0eb) hwr_training_navi_pane_g4_ParamLimits

0xd72e,	// (0x0009a0eb) hwr_training_navi_pane_g4

0x0004,

0xf80f,	// (0x0009c1cc) hwr_training_navi_pane_g_ParamLimits

0xf80f,	// (0x0009c1cc) hwr_training_navi_pane_g

0xd73b,	// (0x0009a0f8) hwr_training_navi_pane_t1

0x6371,	// (0x00092d2e) list_single_hwr_training_instruct_pane_ParamLimits

0x6371,	// (0x00092d2e) list_single_hwr_training_instruct_pane

0xbb38,	// (0x000984f5) list_single_hwr_training_instruct_pane_t1

0xb207,	// (0x00097bc4) bg_frame_shadow_pane_g1

0xbb47,	// (0x00098504) bg_frame_shadow_pane_g2

0xbb4f,	// (0x0009850c) bg_frame_shadow_pane_g3

0xbb57,	// (0x00098514) bg_frame_shadow_pane_g4

0xbb5f,	// (0x0009851c) bg_frame_shadow_pane_g5

0xbb67,	// (0x00098524) bg_frame_shadow_pane_g6

0xbb6f,	// (0x0009852c) bg_frame_shadow_pane_g7

0xa6ef,	// (0x000970ac) bg_frame_shadow_pane_g8

0x0007,

0xf81a,	// (0x0009c1d7) bg_frame_shadow_pane_g

0x0dbc,	// (0x0008d779) main_video_tele_dialer_pane

0x6386,	// (0x00092d43) aid_size_cell_video_keypad_ParamLimits

0x6386,	// (0x00092d43) aid_size_cell_video_keypad

0x63a0,	// (0x00092d5d) grid_video_dialer_keypad_pane_ParamLimits

0x63a0,	// (0x00092d5d) grid_video_dialer_keypad_pane

0x63ea,	// (0x00092da7) video_down_pane_cp_ParamLimits

0x63ea,	// (0x00092da7) video_down_pane_cp

0x63fa,	// (0x00092db7) cell_video_dialer_keypad_pane_ParamLimits

0x63fa,	// (0x00092db7) cell_video_dialer_keypad_pane

0xbb93,	// (0x00098550) bg_button_pane_cp08_ParamLimits

0xbb93,	// (0x00098550) bg_button_pane_cp08

0x641c,	// (0x00092dd9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x641c,	// (0x00092dd9) cell_video_dialer_keypad_pane_g1

0x5b2f,	// (0x000924ec) mup3_rocker2_pane_ParamLimits

0x5b2f,	// (0x000924ec) mup3_rocker2_pane

0xb2c7,	// (0x00097c84) mup3_rocker2_pane_g1

0x4692,	// (0x0009104f) main_dialer2_pane

0x0dbc,	// (0x0008d779) main_mp4_pane

0xd751,	// (0x0009a10e) main_mp4_pane_g1_ParamLimits

0xd751,	// (0x0009a10e) main_mp4_pane_g1

0xd751,	// (0x0009a10e) main_mp4_pane_g2_ParamLimits

0xd751,	// (0x0009a10e) main_mp4_pane_g2

0x6456,	// (0x00092e13) main_mp4_pane_g3_ParamLimits

0x6456,	// (0x00092e13) main_mp4_pane_g3

0xd75f,	// (0x0009a11c) main_mp4_pane_g4_ParamLimits

0xd75f,	// (0x0009a11c) main_mp4_pane_g4

0xd787,	// (0x0009a144) main_mp4_pane_g5_ParamLimits

0xd787,	// (0x0009a144) main_mp4_pane_g5

0x0005,

0xf83a,	// (0x0009c1f7) main_mp4_pane_g_ParamLimits

0xf83a,	// (0x0009c1f7) main_mp4_pane_g

0xd7d7,	// (0x0009a194) main_mp4_pane_t1_ParamLimits

0xd7d7,	// (0x0009a194) main_mp4_pane_t1

0xd833,	// (0x0009a1f0) main_mp4_pane_t2_ParamLimits

0xd833,	// (0x0009a1f0) main_mp4_pane_t2

0xbb9f,	// (0x0009855c) main_mp4_pane_t3_ParamLimits

0xbb9f,	// (0x0009855c) main_mp4_pane_t3

0xd885,	// (0x0009a242) main_mp4_pane_t4_ParamLimits

0xd885,	// (0x0009a242) main_mp4_pane_t4

0x0003,

0xf847,	// (0x0009c204) main_mp4_pane_t_ParamLimits

0xf847,	// (0x0009c204) main_mp4_pane_t

0xd8c9,	// (0x0009a286) mp4_progress_pane_ParamLimits

0xd8c9,	// (0x0009a286) mp4_progress_pane

0xd913,	// (0x0009a2d0) mp4_rocker_pane_ParamLimits

0xd913,	// (0x0009a2d0) mp4_rocker_pane

0xbbc7,	// (0x00098584) mp4_progress_pane_t1

0xbbe0,	// (0x0009859d) mp4_progress_pane_t2

0x0001,

0xf850,	// (0x0009c20d) mp4_progress_pane_t

0xbbf9,	// (0x000985b6) mup_progress_pane_cp04

0xec09,	// (0x0009b5c6) mp4_rocker_pane_g1

0x6492,	// (0x00092e4f) aid_cell_size_keypad2_ParamLimits

0x6492,	// (0x00092e4f) aid_cell_size_keypad2

0x64a8,	// (0x00092e65) dialer2_ne_pane_ParamLimits

0x64a8,	// (0x00092e65) dialer2_ne_pane

0x64c2,	// (0x00092e7f) grid_dialer2_keypad_pane_ParamLimits

0x64c2,	// (0x00092e7f) grid_dialer2_keypad_pane

0xb0ac,	// (0x00097a69) bg_popup_call_pane_cp07_ParamLimits

0xb0ac,	// (0x00097a69) bg_popup_call_pane_cp07

0x64de,	// (0x00092e9b) dialer2_ne_pane_t1_ParamLimits

0x64de,	// (0x00092e9b) dialer2_ne_pane_t1

0x6519,	// (0x00092ed6) cell_dialer2_keypad_pane_ParamLimits

0x6519,	// (0x00092ed6) cell_dialer2_keypad_pane

0xbc17,	// (0x000985d4) bg_button_pane_pane_cp04_ParamLimits

0xbc17,	// (0x000985d4) bg_button_pane_pane_cp04

0x653b,	// (0x00092ef8) cell_dialer2_keypad_pane_g1_ParamLimits

0x653b,	// (0x00092ef8) cell_dialer2_keypad_pane_g1

0x1db2,	// (0x0008e76f) aid_placing_vt_set_content_ParamLimits

0x1db2,	// (0x0008e76f) aid_placing_vt_set_content

0x1dd8,	// (0x0008e795) aid_placing_vt_set_title_ParamLimits

0x1dd8,	// (0x0008e795) aid_placing_vt_set_title

0x0dbc,	// (0x0008d779) main_image3_pane

0x6601,	// (0x00092fbe) area_side_right_pane_cp01_ParamLimits

0x6601,	// (0x00092fbe) area_side_right_pane_cp01

0xd751,	// (0x0009a10e) main_image3_pane_g1_ParamLimits

0xd751,	// (0x0009a10e) main_image3_pane_g1

0x6618,	// (0x00092fd5) main_image3_pane_g2_ParamLimits

0x6618,	// (0x00092fd5) main_image3_pane_g2

0x6640,	// (0x00092ffd) main_image3_pane_g3_ParamLimits

0x6640,	// (0x00092ffd) main_image3_pane_g3

0x666a,	// (0x00093027) main_image3_pane_g4_ParamLimits

0x666a,	// (0x00093027) main_image3_pane_g4

0x0003,

0xf85f,	// (0x0009c21c) main_image3_pane_g_ParamLimits

0xf85f,	// (0x0009c21c) main_image3_pane_g

0x6694,	// (0x00093051) main_image3_pane_t1_ParamLimits

0x6694,	// (0x00093051) main_image3_pane_t1

0x66ec,	// (0x000930a9) main_image3_pane_t2_ParamLimits

0x66ec,	// (0x000930a9) main_image3_pane_t2

0x673e,	// (0x000930fb) main_image3_pane_t3_ParamLimits

0x673e,	// (0x000930fb) main_image3_pane_t3

0x0003,

0xf868,	// (0x0009c225) main_image3_pane_t_ParamLimits

0xf868,	// (0x0009c225) main_image3_pane_t

0x9e93,	// (0x00096850) grid_sctrl_middle_pane_cp01_ParamLimits

0x9e93,	// (0x00096850) grid_sctrl_middle_pane_cp01

0x67c6,	// (0x00093183) cell_sctrl_middle_pane_cp01_ParamLimits

0x67c6,	// (0x00093183) cell_sctrl_middle_pane_cp01

0x67e3,	// (0x000931a0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x67e3,	// (0x000931a0) cell_sctrl_middle_pane_cp01_g1

0x0dbc,	// (0x0008d779) main_call4_pane

0x67f9,	// (0x000931b6) aid_size_button_call4_ParamLimits

0x67f9,	// (0x000931b6) aid_size_button_call4

0x682a,	// (0x000931e7) call4_windows_pane_ParamLimits

0x682a,	// (0x000931e7) call4_windows_pane

0x684a,	// (0x00093207) grid_call4_button_pane_ParamLimits

0x684a,	// (0x00093207) grid_call4_button_pane

0xbc23,	// (0x000985e0) call4_windows_conf_pane

0xbc3a,	// (0x000985f7) popup_call4_audio_first_window_ParamLimits

0xbc3a,	// (0x000985f7) popup_call4_audio_first_window

0xbc86,	// (0x00098643) popup_call4_audio_second_window_ParamLimits

0xbc86,	// (0x00098643) popup_call4_audio_second_window

0xbc9a,	// (0x00098657) popup_call4_audio_wait_window_ParamLimits

0xbc9a,	// (0x00098657) popup_call4_audio_wait_window

0x6877,	// (0x00093234) cell_call4_button_pane_ParamLimits

0x6877,	// (0x00093234) cell_call4_button_pane

0x68a0,	// (0x0009325d) bg_button_pane_cp09_ParamLimits

0x68a0,	// (0x0009325d) bg_button_pane_cp09

0x68ac,	// (0x00093269) cell_call4_button_pane_g1_ParamLimits

0x68ac,	// (0x00093269) cell_call4_button_pane_g1

0x68d2,	// (0x0009328f) cell_call4_button_pane_t1_ParamLimits

0x68d2,	// (0x0009328f) cell_call4_button_pane_t1

0xbce2,	// (0x0009869f) popup_call4_audio_conf_window_ParamLimits

0xbce2,	// (0x0009869f) popup_call4_audio_conf_window

0x5b8f,	// (0x0009254c) mup3_progress_pane_t1_ParamLimits

0x5ba6,	// (0x00092563) mup3_progress_pane_t2_ParamLimits

0xb5e6,	// (0x00097fa3) mup3_progress_pane_t3_ParamLimits

0xf741,	// (0x0009c0fe) mup3_progress_pane_t_ParamLimits

0xb5fd,	// (0x00097fba) mup_progress_pane_cp03_ParamLimits

0x6150,	// (0x00092b0d) mup3_control_keys_pane_g4_copy1

0xd8f7,	// (0x0009a2b4) mp4_rocker2_pane_ParamLimits

0xd8f7,	// (0x0009a2b4) mp4_rocker2_pane

0xbcf6,	// (0x000986b3) mp4_rocker2_pane_g1

0xbcfe,	// (0x000986bb) mp4_rocker2_pane_g2

0xd965,	// (0x0009a322) mp4_rocker2_pane_g3

0xd96d,	// (0x0009a32a) mp4_rocker2_pane_g4

0xd975,	// (0x0009a332) mp4_rocker2_pane_g5

0x0004,

0xf871,	// (0x0009c22e) mp4_rocker2_pane_g

0x0dbc,	// (0x0008d779) main_camera4_pane

0x0dbc,	// (0x0008d779) main_video4_pane

0x63b8,	// (0x00092d75) main_video_tele_dialer_pane_t1_ParamLimits

0x63b8,	// (0x00092d75) main_video_tele_dialer_pane_t1

0x63d1,	// (0x00092d8e) main_video_tele_dialer_pane_t2_ParamLimits

0x63d1,	// (0x00092d8e) main_video_tele_dialer_pane_t2

0x0001,

0xf82b,	// (0x0009c1e8) main_video_tele_dialer_pane_t_ParamLimits

0xf82b,	// (0x0009c1e8) main_video_tele_dialer_pane_t

0x6910,	// (0x000932cd) cam4_autofocus_pane_ParamLimits

0x6910,	// (0x000932cd) cam4_autofocus_pane

0x6926,	// (0x000932e3) cam4_image_uncrop_pane_ParamLimits

0x6926,	// (0x000932e3) cam4_image_uncrop_pane

0x6940,	// (0x000932fd) cam4_indicators_pane_ParamLimits

0x6940,	// (0x000932fd) cam4_indicators_pane

0x696b,	// (0x00093328) main_camera4_pane_g1_ParamLimits

0x696b,	// (0x00093328) main_camera4_pane_g1

0x697e,	// (0x0009333b) main_camera4_pane_g2_ParamLimits

0x697e,	// (0x0009333b) main_camera4_pane_g2

0x6991,	// (0x0009334e) main_camera4_pane_g3_ParamLimits

0x6991,	// (0x0009334e) main_camera4_pane_g3

0x69a4,	// (0x00093361) main_camera4_pane_g4_ParamLimits

0x69a4,	// (0x00093361) main_camera4_pane_g4

0x69b7,	// (0x00093374) main_camera4_pane_g5_ParamLimits

0x69b7,	// (0x00093374) main_camera4_pane_g5

0x0005,

0xf87c,	// (0x0009c239) main_camera4_pane_g_ParamLimits

0xf87c,	// (0x0009c239) main_camera4_pane_g

0x69db,	// (0x00093398) main_camera4_pane_t1_ParamLimits

0x69db,	// (0x00093398) main_camera4_pane_t1

0xd999,	// (0x0009a356) bg_tb_trans_pane_cp06

0xd9af,	// (0x0009a36c) cam4_indicators_pane_g1

0xd9c0,	// (0x0009a37d) cam4_indicators_pane_g2

0x0002,

0xf897,	// (0x0009c254) cam4_indicators_pane_g

0xd9de,	// (0x0009a39b) cam4_indicators_pane_t1

0x6a3f,	// (0x000933fc) main_video4_pane_g1_ParamLimits

0x6a3f,	// (0x000933fc) main_video4_pane_g1

0x6a52,	// (0x0009340f) main_video4_pane_g2_ParamLimits

0x6a52,	// (0x0009340f) main_video4_pane_g2

0x6a66,	// (0x00093423) main_video4_pane_g3_ParamLimits

0x6a66,	// (0x00093423) main_video4_pane_g3

0x6a7a,	// (0x00093437) main_video4_pane_g4_ParamLimits

0x6a7a,	// (0x00093437) main_video4_pane_g4

0x0004,

0xf89e,	// (0x0009c25b) main_video4_pane_g_ParamLimits

0xf89e,	// (0x0009c25b) main_video4_pane_g

0x6aa2,	// (0x0009345f) vid4_indicators_pane_ParamLimits

0x6aa2,	// (0x0009345f) vid4_indicators_pane

0x6ad2,	// (0x0009348f) video4_image_uncrop_cif_pane_ParamLimits

0x6ad2,	// (0x0009348f) video4_image_uncrop_cif_pane

0x6aec,	// (0x000934a9) video4_image_uncrop_nhd_pane_ParamLimits

0x6aec,	// (0x000934a9) video4_image_uncrop_nhd_pane

0x6926,	// (0x000932e3) video4_image_uncrop_vga_pane_ParamLimits

0x6926,	// (0x000932e3) video4_image_uncrop_vga_pane

0xda00,	// (0x0009a3bd) bg_tb_trans_pane_cp07

0x6b00,	// (0x000934bd) vid4_indicators_pane_g1

0x6b0d,	// (0x000934ca) vid4_indicators_pane_g2

0x6b1a,	// (0x000934d7) vid4_indicators_pane_g3

0x0004,

0xf8a9,	// (0x0009c266) vid4_indicators_pane_g

0x6b3f,	// (0x000934fc) vid4_indicators_pane_t1

0x6b51,	// (0x0009350e) cam4_autofocus_pane_g1

0x6b59,	// (0x00093516) cam4_autofocus_pane_g2

0x6b61,	// (0x0009351e) cam4_autofocus_pane_g3

0x0002,

0xf8b4,	// (0x0009c271) cam4_autofocus_pane_g

0x6b69,	// (0x00093526) cam4_autofocus_pane_g3_copy1

0xbb77,	// (0x00098534) video_down_pane_cp_t1

0xbb85,	// (0x00098542) video_down_pane_cp_t2

0x0001,

0xf830,	// (0x0009c1ed) video_down_pane_cp_t

0x9e93,	// (0x00096850) popup_vitu2_window_ParamLimits

0x9e93,	// (0x00096850) popup_vitu2_window

0x6b71,	// (0x0009352e) aid_size_cell2_itu2_ParamLimits

0x6b71,	// (0x0009352e) aid_size_cell2_itu2

0x6b97,	// (0x00093554) aid_size_cell_itu2_ParamLimits

0x6b97,	// (0x00093554) aid_size_cell_itu2

0x6bf3,	// (0x000935b0) bg_popup_window_pane_cp09_ParamLimits

0x6bf3,	// (0x000935b0) bg_popup_window_pane_cp09

0x6c01,	// (0x000935be) field_vitu2_entry_pane_ParamLimits

0x6c01,	// (0x000935be) field_vitu2_entry_pane

0x6c27,	// (0x000935e4) grid_vitu2_function_pane_ParamLimits

0x6c27,	// (0x000935e4) grid_vitu2_function_pane

0x6c78,	// (0x00093635) grid_vitu2_itu_pane_ParamLimits

0x6c78,	// (0x00093635) grid_vitu2_itu_pane

0x6d0b,	// (0x000936c8) cell_vitu2_itu_pane_ParamLimits

0x6d0b,	// (0x000936c8) cell_vitu2_itu_pane

0x6d2f,	// (0x000936ec) cell_vitu2_function_pane_ParamLimits

0x6d2f,	// (0x000936ec) cell_vitu2_function_pane

0xbd18,	// (0x000986d5) bg_popup_call_pane_cp08_ParamLimits

0xbd18,	// (0x000986d5) bg_popup_call_pane_cp08

0xbd31,	// (0x000986ee) field_vitu2_entry_pane_g1

0xbd3d,	// (0x000986fa) field_vitu2_entry_pane_g2

0x0002,

0xf8bb,	// (0x0009c278) field_vitu2_entry_pane_g

0xbd57,	// (0x00098714) field_vitu2_entry_pane_t1_ParamLimits

0xbd57,	// (0x00098714) field_vitu2_entry_pane_t1

0xbd86,	// (0x00098743) field_vitu2_entry_pane_t2_ParamLimits

0xbd86,	// (0x00098743) field_vitu2_entry_pane_t2

0x0001,

0xf8c2,	// (0x0009c27f) field_vitu2_entry_pane_t_ParamLimits

0xf8c2,	// (0x0009c27f) field_vitu2_entry_pane_t

0x6d6e,	// (0x0009372b) bg_button_pane_cp010_ParamLimits

0x6d6e,	// (0x0009372b) bg_button_pane_cp010

0x6d7c,	// (0x00093739) cell_vitu2_itu_pane_g1

0x6d9a,	// (0x00093757) cell_vitu2_itu_pane_t1_ParamLimits

0x6d9a,	// (0x00093757) cell_vitu2_itu_pane_t1

0x0cc8,	// (0x0008d685) cell_vitu2_itu_pane_t2_ParamLimits

0x0cc8,	// (0x0008d685) cell_vitu2_itu_pane_t2

0x0002,

0xf8cc,	// (0x0009c289) cell_vitu2_itu_pane_t_ParamLimits

0xf8cc,	// (0x0009c289) cell_vitu2_itu_pane_t

0xda18,	// (0x0009a3d5) bg_button_pane_cp011

0x6e00,	// (0x000937bd) cell_vitu2_function_pane_g1

0x0dbc,	// (0x0008d779) main_myfav_hc_pane

0x678e,	// (0x0009314b) popup_image3_note_pane_ParamLimits

0x678e,	// (0x0009314b) popup_image3_note_pane

0x67aa,	// (0x00093167) popup_image3_tool_bar_pane_ParamLimits

0x67aa,	// (0x00093167) popup_image3_tool_bar_pane

0x0d4c,	// (0x0008d709) cell_vitu2_itu_pane_t3_ParamLimits

0x0d4c,	// (0x0008d709) cell_vitu2_itu_pane_t3

0x0dbc,	// (0x0008d779) bg_popup_trans_pane

0xec13,	// (0x0009b5d0) grid_image3_tool_bar_pane

0xec1d,	// (0x0009b5da) bg_popup_trans_pane_g1

0xde44,	// (0x0009a801) bg_popup_trans_pane_g2

0xec25,	// (0x0009b5e2) bg_popup_trans_pane_g3

0xec2d,	// (0x0009b5ea) bg_popup_trans_pane_g4

0xec35,	// (0x0009b5f2) bg_popup_trans_pane_g5

0xec3d,	// (0x0009b5fa) bg_popup_trans_pane_g6

0xec45,	// (0x0009b602) bg_popup_trans_pane_g7

0xec4d,	// (0x0009b60a) bg_popup_trans_pane_g8

0xde24,	// (0x0009a7e1) bg_popup_trans_pane_g9

0x0008,

0x06b3,	// (0x0008d070) bg_popup_trans_pane_g

0xec55,	// (0x0009b612) cell_image3_tool_bar_pane_ParamLimits

0xec55,	// (0x0009b612) cell_image3_tool_bar_pane

0xb2c7,	// (0x00097c84) cell_image3_tool_bar_pane_g1

0x0dbc,	// (0x0008d779) bg_popup_trans_pane_cp1

0xec69,	// (0x0009b626) popup_image3_note_pane_t1

0xec77,	// (0x0009b634) popup_image3_note_pane_t2

0xec85,	// (0x0009b642) popup_image3_note_pane_t3

0x0002,

0x06c6,	// (0x0008d083) popup_image3_note_pane_t

0xec93,	// (0x0009b650) popup_image3_note_pane_t3_copy1

0x6e14,	// (0x000937d1) bg_myfav_hc_instruction_pane_ParamLimits

0x6e14,	// (0x000937d1) bg_myfav_hc_instruction_pane

0x6e28,	// (0x000937e5) cell_myfav_contact_pane_ParamLimits

0x6e28,	// (0x000937e5) cell_myfav_contact_pane

0x6e46,	// (0x00093803) cell_myfav_contact_pane_cp1_ParamLimits

0x6e46,	// (0x00093803) cell_myfav_contact_pane_cp1

0x6e5e,	// (0x0009381b) cell_myfav_contact_pane_cp2_ParamLimits

0x6e5e,	// (0x0009381b) cell_myfav_contact_pane_cp2

0x6e76,	// (0x00093833) cell_myfav_contact_pane_cp3_ParamLimits

0x6e76,	// (0x00093833) cell_myfav_contact_pane_cp3

0x6e8d,	// (0x0009384a) cell_myfav_contact_pane_cp4_ParamLimits

0x6e8d,	// (0x0009384a) cell_myfav_contact_pane_cp4

0x6ea5,	// (0x00093862) cell_myfav_contact_pane_cp5_ParamLimits

0x6ea5,	// (0x00093862) cell_myfav_contact_pane_cp5

0x6eb9,	// (0x00093876) cell_myfav_contact_pane_cp6_ParamLimits

0x6eb9,	// (0x00093876) cell_myfav_contact_pane_cp6

0x6ecf,	// (0x0009388c) cell_myfav_contact_pane_cp7_ParamLimits

0x6ecf,	// (0x0009388c) cell_myfav_contact_pane_cp7

0xeca1,	// (0x0009b65e) listscroll_gen_pane_cp05

0x6ee9,	// (0x000938a6) main_myfav_hc_pane_g1_ParamLimits

0x6ee9,	// (0x000938a6) main_myfav_hc_pane_g1

0x6f03,	// (0x000938c0) main_myfav_hc_pane_g2_ParamLimits

0x6f03,	// (0x000938c0) main_myfav_hc_pane_g2

0x0002,

0xf8d3,	// (0x0009c290) main_myfav_hc_pane_g_ParamLimits

0xf8d3,	// (0x0009c290) main_myfav_hc_pane_g

0x6f35,	// (0x000938f2) main_myfav_hc_pane_t1_ParamLimits

0x6f35,	// (0x000938f2) main_myfav_hc_pane_t1

0xecaa,	// (0x0009b667) main_myfav_hc_pane_t2_ParamLimits

0xecaa,	// (0x0009b667) main_myfav_hc_pane_t2

0xecbc,	// (0x0009b679) main_myfav_hc_pane_t3_ParamLimits

0xecbc,	// (0x0009b679) main_myfav_hc_pane_t3

0x6f4c,	// (0x00093909) main_myfav_hc_pane_t4_ParamLimits

0x6f4c,	// (0x00093909) main_myfav_hc_pane_t4

0x0004,

0xf8da,	// (0x0009c297) main_myfav_hc_pane_t_ParamLimits

0xf8da,	// (0x0009c297) main_myfav_hc_pane_t

0xb2c7,	// (0x00097c84) bg_myfav_hc_instruction_pane_g1

0xecce,	// (0x0009b68b) cell_myfav_contact_pane_g1_ParamLimits

0xecce,	// (0x0009b68b) cell_myfav_contact_pane_g1

0xecce,	// (0x0009b68b) cell_myfav_contact_pane_g2_ParamLimits

0xecce,	// (0x0009b68b) cell_myfav_contact_pane_g2

0xecda,	// (0x0009b697) cell_myfav_contact_pane_g3_ParamLimits

0xecda,	// (0x0009b697) cell_myfav_contact_pane_g3

0xb5d0,	// (0x00097f8d) cell_myfav_contact_pane_g4_ParamLimits

0xb5d0,	// (0x00097f8d) cell_myfav_contact_pane_g4

0xece7,	// (0x0009b6a4) cell_myfav_contact_pane_g5_ParamLimits

0xece7,	// (0x0009b6a4) cell_myfav_contact_pane_g5

0x0004,

0xf8e5,	// (0x0009c2a2) cell_myfav_contact_pane_g_ParamLimits

0xf8e5,	// (0x0009c2a2) cell_myfav_contact_pane_g

0x6f1d,	// (0x000938da) main_myfav_hc_pane_g3_ParamLimits

0x6f1d,	// (0x000938da) main_myfav_hc_pane_g3

0x0f5c,	// (0x0008d919) popup_adpt_find_window

0x6f74,	// (0x00093931) afind_page_pane_ParamLimits

0x6f74,	// (0x00093931) afind_page_pane

0x6f89,	// (0x00093946) aid_size_cell_afind_ParamLimits

0x6f89,	// (0x00093946) aid_size_cell_afind

0x6fa7,	// (0x00093964) bg_popup_sub_pane_cp09_ParamLimits

0x6fa7,	// (0x00093964) bg_popup_sub_pane_cp09

0x6fb4,	// (0x00093971) find_pane_cp01_ParamLimits

0x6fb4,	// (0x00093971) find_pane_cp01

0xecf3,	// (0x0009b6b0) grid_afind_control_pane_ParamLimits

0xecf3,	// (0x0009b6b0) grid_afind_control_pane

0x6fc1,	// (0x0009397e) grid_afind_pane_ParamLimits

0x6fc1,	// (0x0009397e) grid_afind_pane

0x6fe3,	// (0x000939a0) cell_afind_pane_ParamLimits

0x6fe3,	// (0x000939a0) cell_afind_pane

0xb2c7,	// (0x00097c84) afind_page_pane_g1

0x7044,	// (0x00093a01) afind_page_pane_g2

0x704d,	// (0x00093a0a) afind_page_pane_g3

0x0002,

0xf8f0,	// (0x0009c2ad) afind_page_pane_g

0x7056,	// (0x00093a13) afind_page_pane_t1

0xed07,	// (0x0009b6c4) cell_afind_grid_control_pane_ParamLimits

0xed07,	// (0x0009b6c4) cell_afind_grid_control_pane

0xbc17,	// (0x000985d4) bg_button_pane_cp69_ParamLimits

0xbc17,	// (0x000985d4) bg_button_pane_cp69

0x7076,	// (0x00093a33) cell_afind_pane_g1_ParamLimits

0x7076,	// (0x00093a33) cell_afind_pane_g1

0x7083,	// (0x00093a40) cell_afind_pane_t1_ParamLimits

0x7083,	// (0x00093a40) cell_afind_pane_t1

0xdc3f,	// (0x0009a5fc) bg_button_pane_cp72

0xed16,	// (0x0009b6d3) cell_afind_grid_control_pane_g1

0x3929,	// (0x000902e6) aid_image_placing_area_ParamLimits

0x3929,	// (0x000902e6) aid_image_placing_area

0xb8c9,	// (0x00098286) field_vitu_entry_pane_g1_ParamLimits

0xb8c9,	// (0x00098286) field_vitu_entry_pane_g1

0xb8d5,	// (0x00098292) field_vitu_entry_pane_g2_ParamLimits

0xb8d5,	// (0x00098292) field_vitu_entry_pane_g2

0x0001,

0xf7bb,	// (0x0009c178) field_vitu_entry_pane_g_ParamLimits

0xf7bb,	// (0x0009c178) field_vitu_entry_pane_g

0x6217,	// (0x00092bd4) cell_vitu_itu_pane_g1_ParamLimits

0x6259,	// (0x00092c16) cell_vitu_itu_pane_t3_ParamLimits

0x6259,	// (0x00092c16) cell_vitu_itu_pane_t3

0xbbc7,	// (0x00098584) mp4_progress_pane_t1_ParamLimits

0xbbe0,	// (0x0009859d) mp4_progress_pane_t2_ParamLimits

0xf850,	// (0x0009c20d) mp4_progress_pane_t_ParamLimits

0xbbf9,	// (0x000985b6) mup_progress_pane_cp04_ParamLimits

0x6f60,	// (0x0009391d) main_myfav_hc_pane_t5_ParamLimits

0x6f60,	// (0x0009391d) main_myfav_hc_pane_t5

0x0e12,	// (0x0008d7cf) aid_zoom_text_primary

0x0f5c,	// (0x0008d919) popup_adpt_find_window_ParamLimits

0x9e93,	// (0x00096850) main_cam_set_pane

0x6957,	// (0x00093314) cam4_zoom_pane_ParamLimits

0x6957,	// (0x00093314) cam4_zoom_pane

0x7095,	// (0x00093a52) main_cam_set_pane_g1_ParamLimits

0x7095,	// (0x00093a52) main_cam_set_pane_g1

0x70a3,	// (0x00093a60) main_cam_set_pane_g2_ParamLimits

0x70a3,	// (0x00093a60) main_cam_set_pane_g2

0x0001,

0xf8f7,	// (0x0009c2b4) main_cam_set_pane_g_ParamLimits

0xf8f7,	// (0x0009c2b4) main_cam_set_pane_g

0x70c4,	// (0x00093a81) main_cam_set_pane_t1_ParamLimits

0x70c4,	// (0x00093a81) main_cam_set_pane_t1

0x70df,	// (0x00093a9c) main_cset_listscroll_pane_ParamLimits

0x70df,	// (0x00093a9c) main_cset_listscroll_pane

0x70ff,	// (0x00093abc) main_cset_slider_pane_ParamLimits

0x70ff,	// (0x00093abc) main_cset_slider_pane

0xed27,	// (0x0009b6e4) main_cset_list_pane_ParamLimits

0xed27,	// (0x0009b6e4) main_cset_list_pane

0xed37,	// (0x0009b6f4) scroll_pane_cp028

0x7125,	// (0x00093ae2) aid_area_touch_slider

0x7141,	// (0x00093afe) cset_slider_pane

0x716b,	// (0x00093b28) main_cset_slider_pane_g1

0x7180,	// (0x00093b3d) main_cset_slider_pane_g2

0x0011,

0xf8fc,	// (0x0009c2b9) main_cset_slider_pane_g

0xed70,	// (0x0009b72d) main_cset_slider_pane_t1

0x723c,	// (0x00093bf9) main_cset_slider_pane_t2

0x7256,	// (0x00093c13) main_cset_slider_pane_t3

0x7270,	// (0x00093c2d) main_cset_slider_pane_t4

0x728a,	// (0x00093c47) main_cset_slider_pane_t5

0x72a4,	// (0x00093c61) main_cset_slider_pane_t6

0x72b9,	// (0x00093c76) main_cset_slider_pane_t7

0x000e,

0xf921,	// (0x0009c2de) main_cset_slider_pane_t

0x73bd,	// (0x00093d7a) cset_list_set_pane_ParamLimits

0x73bd,	// (0x00093d7a) cset_list_set_pane

0x73cf,	// (0x00093d8c) aid_position_infowindow_above

0x73d7,	// (0x00093d94) aid_position_infowindow_below

0x73df,	// (0x00093d9c) cset_list_set_pane_g1_ParamLimits

0x73df,	// (0x00093d9c) cset_list_set_pane_g1

0xbdab,	// (0x00098768) cset_list_set_pane_g3_ParamLimits

0xbdab,	// (0x00098768) cset_list_set_pane_g3

0x0001,

0xf940,	// (0x0009c2fd) cset_list_set_pane_g_ParamLimits

0xf940,	// (0x0009c2fd) cset_list_set_pane_g

0xbdba,	// (0x00098777) cset_list_set_pane_t1_ParamLimits

0xbdba,	// (0x00098777) cset_list_set_pane_t1

0x9e93,	// (0x00096850) list_highlight_pane_cp021_ParamLimits

0x9e93,	// (0x00096850) list_highlight_pane_cp021

0xe665,	// (0x0009b022) cset_slider_pane_g1

0xe677,	// (0x0009b034) cset_slider_pane_g2

0xe66e,	// (0x0009b02b) cset_slider_pane_g3

0x0002,

0x073f,	// (0x0008d0fc) cset_slider_pane_g

0xda26,	// (0x0009a3e3) aid_area_touch_cam4_zoom

0xda2e,	// (0x0009a3eb) cam4_zoom_cont_pane

0xda36,	// (0x0009a3f3) cam4_zoom_pane_g1

0xda3e,	// (0x0009a3fb) cam4_zoom_pane_g2

0x73eb,	// (0x00093da8) cam4_zoom_pane_g3

0x0002,

0xf945,	// (0x0009c302) cam4_zoom_pane_g

0xda46,	// (0x0009a403) cam4_zoom_cont_pane_g1

0xda4f,	// (0x0009a40c) cam4_zoom_cont_pane_g2

0xda58,	// (0x0009a415) cam4_zoom_cont_pane_g3

0x0002,

0xf94c,	// (0x0009c309) cam4_zoom_cont_pane_g

0x6817,	// (0x000931d4) call4_image_pane_ParamLimits

0x6817,	// (0x000931d4) call4_image_pane

0xbc23,	// (0x000985e0) call4_windows_conf_pane_ParamLimits

0xbc64,	// (0x00098621) popup_call4_audio_in_window_ParamLimits

0xbc64,	// (0x00098621) popup_call4_audio_in_window

0x0dbc,	// (0x0008d779) bg_popup_call2_act_pane_cp02

0xbcda,	// (0x00098697) call4_list_conf_pane

0xb2c7,	// (0x00097c84) call4_image_pane_g1

0xb2c7,	// (0x00097c84) call4_image_pane_g2

0x0001,

0xf681,	// (0x0009c03e) call4_image_pane_g

0xee10,	// (0x0009b7cd) list_single_graphic_popup_conf4_pane_ParamLimits

0xee10,	// (0x0009b7cd) list_single_graphic_popup_conf4_pane

0x0dbc,	// (0x0008d779) list_highlight_pane_cp022

0xee23,	// (0x0009b7e0) list_single_graphic_popup_conf4_pane_g1

0xe336,	// (0x0009acf3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf953,	// (0x0009c310) list_single_graphic_popup_conf4_pane_g

0xee2b,	// (0x0009b7e8) list_single_graphic_popup_conf4_pane_t1

0x1efc,	// (0x0008e8b9) popup_vtel_slider_window_ParamLimits

0x1efc,	// (0x0008e8b9) popup_vtel_slider_window

0xbc05,	// (0x000985c2) dialer2_ne_pane_t2_ParamLimits

0xbc05,	// (0x000985c2) dialer2_ne_pane_t2

0x0001,

0xf855,	// (0x0009c212) dialer2_ne_pane_t_ParamLimits

0xf855,	// (0x0009c212) dialer2_ne_pane_t

0xb0ac,	// (0x00097a69) bg_popup_sub_pane_cp010_ParamLimits

0xb0ac,	// (0x00097a69) bg_popup_sub_pane_cp010

0x73f3,	// (0x00093db0) popup_vtel_slider_window_g1_ParamLimits

0x73f3,	// (0x00093db0) popup_vtel_slider_window_g1

0x7406,	// (0x00093dc3) popup_vtel_slider_window_g2_ParamLimits

0x7406,	// (0x00093dc3) popup_vtel_slider_window_g2

0x0003,

0xf958,	// (0x0009c315) popup_vtel_slider_window_g_ParamLimits

0xf958,	// (0x0009c315) popup_vtel_slider_window_g

0x745c,	// (0x00093e19) vtel_slider_pane_ParamLimits

0x745c,	// (0x00093e19) vtel_slider_pane

0x747e,	// (0x00093e3b) vtel_slider_pane_g1_ParamLimits

0x747e,	// (0x00093e3b) vtel_slider_pane_g1

0x7492,	// (0x00093e4f) vtel_slider_pane_g2_ParamLimits

0x7492,	// (0x00093e4f) vtel_slider_pane_g2

0x74aa,	// (0x00093e67) vtel_slider_pane_g3_ParamLimits

0x74aa,	// (0x00093e67) vtel_slider_pane_g3

0x747e,	// (0x00093e3b) vtel_slider_pane_g4_ParamLimits

0x747e,	// (0x00093e3b) vtel_slider_pane_g4

0x74c0,	// (0x00093e7d) vtel_slider_pane_g5_ParamLimits

0x74c0,	// (0x00093e7d) vtel_slider_pane_g5

0x0004,

0xf961,	// (0x0009c31e) vtel_slider_pane_g_ParamLimits

0xf961,	// (0x0009c31e) vtel_slider_pane_g

0x0dbc,	// (0x0008d779) main_gallery2_pane

0x6bc3,	// (0x00093580) aid_size_row_itut2_dropdow_list_ParamLimits

0x6bc3,	// (0x00093580) aid_size_row_itut2_dropdow_list

0x6c4f,	// (0x0009360c) grid_vitu2_function_top_pane_ParamLimits

0x6c4f,	// (0x0009360c) grid_vitu2_function_top_pane

0x6cb4,	// (0x00093671) popup_vitu2_dropdown_list_window_ParamLimits

0x6cb4,	// (0x00093671) popup_vitu2_dropdown_list_window

0x6cdd,	// (0x0009369a) popup_vitu2_match_list_window

0x74d6,	// (0x00093e93) cell_vitu2_function_top_pane_ParamLimits

0x74d6,	// (0x00093e93) cell_vitu2_function_top_pane

0x74f4,	// (0x00093eb1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x74f4,	// (0x00093eb1) cell_vitu2_function_top_pane_cp01

0x7512,	// (0x00093ecf) cell_vitu2_function_top_wide_pane_ParamLimits

0x7512,	// (0x00093ecf) cell_vitu2_function_top_wide_pane

0xda18,	// (0x0009a3d5) bg_button_pane_cp012

0x7530,	// (0x00093eed) cell_vitu2_function_top_pane_g1

0xda61,	// (0x0009a41e) bg_button_pane_cp013_ParamLimits

0xda61,	// (0x0009a41e) bg_button_pane_cp013

0x7544,	// (0x00093f01) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7544,	// (0x00093f01) cell_vitu2_function_top_wide_pane_g1

0xda18,	// (0x0009a3d5) bg_popup_sub_pane_cp20

0x755c,	// (0x00093f19) list_vitu2_match_list_pane

0xec1d,	// (0x0009b5da) bg_popup_sub_pane_cp20_g1

0xec25,	// (0x0009b5e2) bg_popup_sub_pane_cp20_g2

0xde44,	// (0x0009a801) bg_popup_sub_pane_cp20_g3

0xec2d,	// (0x0009b5ea) bg_popup_sub_pane_cp20_g4

0xde24,	// (0x0009a7e1) bg_popup_sub_pane_cp20_g5

0xee41,	// (0x0009b7fe) bg_popup_sub_pane_cp20_g6

0xec3d,	// (0x0009b5fa) bg_popup_sub_pane_cp20_g7

0xec45,	// (0x0009b602) bg_popup_sub_pane_cp20_g8

0xec4d,	// (0x0009b60a) bg_popup_sub_pane_cp20_g9

0x0008,

0x076d,	// (0x0008d12a) bg_popup_sub_pane_cp20_g

0xda7d,	// (0x0009a43a) list_vitu2_match_list_item_pane_ParamLimits

0xda7d,	// (0x0009a43a) list_vitu2_match_list_item_pane

0xda8f,	// (0x0009a44c) list_vitu2_match_list_item_pane_t1

0xa5ee,	// (0x00096fab) bg_popup_sub_pane_cp21

0xda9d,	// (0x0009a45a) grid_vitu2_dropdown_list_pane

0x75af,	// (0x00093f6c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75af,	// (0x00093f6c) cell_vitu2_dropdown_list_char_pane

0x75d0,	// (0x00093f8d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x75d0,	// (0x00093f8d) cell_vitu2_dropdown_list_ctrl_pane

0xee49,	// (0x0009b806) cell_vitu2_dropdown_list_char_pane_g1

0xee52,	// (0x0009b80f) cell_vitu2_dropdown_list_char_pane_g2

0xee5b,	// (0x0009b818) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x078a,	// (0x0008d147) cell_vitu2_dropdown_list_char_pane_g

0x75fc,	// (0x00093fb9) cell_vitu2_dropdown_list_char_pane_t1

0x760a,	// (0x00093fc7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x760a,	// (0x00093fc7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7617,	// (0x00093fd4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7617,	// (0x00093fd4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7624,	// (0x00093fe1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7624,	// (0x00093fe1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7631,	// (0x00093fee) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7631,	// (0x00093fee) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd999,	// (0x0009a356) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd999,	// (0x0009a356) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf976,	// (0x0009c333) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf976,	// (0x0009c333) cell_vitu2_dropdown_list_ctrl_pane_g

0x764d,	// (0x0009400a) aid_size_cell_gallery2_ParamLimits

0x764d,	// (0x0009400a) aid_size_cell_gallery2

0x7663,	// (0x00094020) grid_gallery2_pane_ParamLimits

0x7663,	// (0x00094020) grid_gallery2_pane

0x7677,	// (0x00094034) scroll_pane_cp029_ParamLimits

0x7677,	// (0x00094034) scroll_pane_cp029

0x7683,	// (0x00094040) cell_gallery2_pane_ParamLimits

0x7683,	// (0x00094040) cell_gallery2_pane

0xee64,	// (0x0009b821) cell_gallery2_pane_g2

0x76b9,	// (0x00094076) cell_gallery2_pane_g3

0xee6e,	// (0x0009b82b) cell_gallery2_pane_g4

0xee76,	// (0x0009b833) cell_gallery2_pane_g5

0xe52f,	// (0x0009aeec) grid_highlight_pane_cp10

0x6cdd,	// (0x0009369a) popup_vitu2_match_list_window_ParamLimits

0x6cf4,	// (0x000936b1) popup_vitu2_query_window_ParamLimits

0x6cf4,	// (0x000936b1) popup_vitu2_query_window

0xa5ee,	// (0x00096fab) bg_vitu2_candi_button_pane

0xee49,	// (0x0009b806) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee52,	// (0x0009b80f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee5b,	// (0x0009b818) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x76c1,	// (0x0009407e) bg_button_pane_cp015

0x76d3,	// (0x00094090) bg_button_pane_cp016

0x76e6,	// (0x000940a3) bg_button_pane_cp017

0xadc1,	// (0x0009777e) bg_popup_sub_pane_cp22

0xee7e,	// (0x0009b83b) popup_vitu2_query_window_g1

0x772b,	// (0x000940e8) popup_vitu2_query_window_g2

0x0002,

0xf981,	// (0x0009c33e) popup_vitu2_query_window_g

0x774a,	// (0x00094107) popup_vitu2_query_window_t1_ParamLimits

0x774a,	// (0x00094107) popup_vitu2_query_window_t1

0x777f,	// (0x0009413c) popup_vitu2_query_window_t2_ParamLimits

0x777f,	// (0x0009413c) popup_vitu2_query_window_t2

0x7791,	// (0x0009414e) popup_vitu2_query_window_t3_ParamLimits

0x7791,	// (0x0009414e) popup_vitu2_query_window_t3

0x77b9,	// (0x00094176) popup_vitu2_query_window_t4_ParamLimits

0x77b9,	// (0x00094176) popup_vitu2_query_window_t4

0x77da,	// (0x00094197) popup_vitu2_query_window_t5_ParamLimits

0x77da,	// (0x00094197) popup_vitu2_query_window_t5

0x0006,

0xf988,	// (0x0009c345) popup_vitu2_query_window_t_ParamLimits

0xf988,	// (0x0009c345) popup_vitu2_query_window_t

0xed1f,	// (0x0009b6dc) main_cset_text_pane

0x7125,	// (0x00093ae2) aid_area_touch_slider_ParamLimits

0x7141,	// (0x00093afe) cset_slider_pane_ParamLimits

0x716b,	// (0x00093b28) main_cset_slider_pane_g1_ParamLimits

0x7180,	// (0x00093b3d) main_cset_slider_pane_g2_ParamLimits

0xed40,	// (0x0009b6fd) main_cset_slider_pane_g3_ParamLimits

0xed40,	// (0x0009b6fd) main_cset_slider_pane_g3

0x7195,	// (0x00093b52) main_cset_slider_pane_g4_ParamLimits

0x7195,	// (0x00093b52) main_cset_slider_pane_g4

0x71a4,	// (0x00093b61) main_cset_slider_pane_g5_ParamLimits

0x71a4,	// (0x00093b61) main_cset_slider_pane_g5

0x71b0,	// (0x00093b6d) main_cset_slider_pane_g6_ParamLimits

0x71b0,	// (0x00093b6d) main_cset_slider_pane_g6

0xf8fc,	// (0x0009c2b9) main_cset_slider_pane_g_ParamLimits

0xed70,	// (0x0009b72d) main_cset_slider_pane_t1_ParamLimits

0x723c,	// (0x00093bf9) main_cset_slider_pane_t2_ParamLimits

0x7256,	// (0x00093c13) main_cset_slider_pane_t3_ParamLimits

0x7270,	// (0x00093c2d) main_cset_slider_pane_t4_ParamLimits

0x728a,	// (0x00093c47) main_cset_slider_pane_t5_ParamLimits

0x72a4,	// (0x00093c61) main_cset_slider_pane_t6_ParamLimits

0x72b9,	// (0x00093c76) main_cset_slider_pane_t7_ParamLimits

0x72e3,	// (0x00093ca0) main_cset_slider_pane_t8_ParamLimits

0x72e3,	// (0x00093ca0) main_cset_slider_pane_t8

0x730b,	// (0x00093cc8) main_cset_slider_pane_t9_ParamLimits

0x730b,	// (0x00093cc8) main_cset_slider_pane_t9

0x7333,	// (0x00093cf0) main_cset_slider_pane_t10_ParamLimits

0x7333,	// (0x00093cf0) main_cset_slider_pane_t10

0x735b,	// (0x00093d18) main_cset_slider_pane_t11_ParamLimits

0x735b,	// (0x00093d18) main_cset_slider_pane_t11

0x7383,	// (0x00093d40) main_cset_slider_pane_t12_ParamLimits

0x7383,	// (0x00093d40) main_cset_slider_pane_t12

0x73a0,	// (0x00093d5d) main_cset_slider_pane_t13_ParamLimits

0x73a0,	// (0x00093d5d) main_cset_slider_pane_t13

0xf921,	// (0x0009c2de) main_cset_slider_pane_t_ParamLimits

0x0dbc,	// (0x0008d779) bg_popup_sub_pane_cp011

0xee8a,	// (0x0009b847) main_cset_text_pane_g1

0xee92,	// (0x0009b84f) main_cset_text_pane_t1

0xeea0,	// (0x0009b85d) main_cset_text_pane_t2

0xeeae,	// (0x0009b86b) main_cset_text_pane_t3

0xeebc,	// (0x0009b879) main_cset_text_pane_t4

0xeeca,	// (0x0009b887) main_cset_text_pane_t5

0xeed8,	// (0x0009b895) main_cset_text_pane_t6

0xeee6,	// (0x0009b8a3) main_cset_text_pane_t7

0x0006,

0x07b2,	// (0x0008d16f) main_cset_text_pane_t

0x0dbc,	// (0x0008d779) main_cam4_burst_pane

0x0dbc,	// (0x0008d779) main_cam5_pane

0x7064,	// (0x00093a21) bg_button_pane_cp019

0x706d,	// (0x00093a2a) bg_button_pane_cp020

0xed4c,	// (0x0009b709) main_cset_slider_pane_g7_ParamLimits

0xed4c,	// (0x0009b709) main_cset_slider_pane_g7

0xed58,	// (0x0009b715) main_cset_slider_pane_g8_ParamLimits

0xed58,	// (0x0009b715) main_cset_slider_pane_g8

0x71c4,	// (0x00093b81) main_cset_slider_pane_g9_ParamLimits

0x71c4,	// (0x00093b81) main_cset_slider_pane_g9

0x71d0,	// (0x00093b8d) main_cset_slider_pane_g10_ParamLimits

0x71d0,	// (0x00093b8d) main_cset_slider_pane_g10

0x71dc,	// (0x00093b99) main_cset_slider_pane_g11_ParamLimits

0x71dc,	// (0x00093b99) main_cset_slider_pane_g11

0x71e8,	// (0x00093ba5) main_cset_slider_pane_g12_ParamLimits

0x71e8,	// (0x00093ba5) main_cset_slider_pane_g12

0x71f4,	// (0x00093bb1) main_cset_slider_pane_g13_ParamLimits

0x71f4,	// (0x00093bb1) main_cset_slider_pane_g13

0x7200,	// (0x00093bbd) main_cset_slider_pane_g14_ParamLimits

0x7200,	// (0x00093bbd) main_cset_slider_pane_g14

0x720c,	// (0x00093bc9) main_cset_slider_pane_g15_ParamLimits

0x720c,	// (0x00093bc9) main_cset_slider_pane_g15

0xed9e,	// (0x0009b75b) main_cset_slider_pane_t14_ParamLimits

0xed9e,	// (0x0009b75b) main_cset_slider_pane_t14

0xedd7,	// (0x0009b794) main_cset_slider_pane_t15_ParamLimits

0xedd7,	// (0x0009b794) main_cset_slider_pane_t15

0x7851,	// (0x0009420e) aid_cam4_burst_size_cell_ParamLimits

0x7851,	// (0x0009420e) aid_cam4_burst_size_cell

0x7871,	// (0x0009422e) grid_cam4_burst_pane_ParamLimits

0x7871,	// (0x0009422e) grid_cam4_burst_pane

0x78a9,	// (0x00094266) linegrid_cam4_burst_pane_ParamLimits

0x78a9,	// (0x00094266) linegrid_cam4_burst_pane

0xf05e,	// (0x0009ba1b) scroll_pane_cp30_ParamLimits

0xf05e,	// (0x0009ba1b) scroll_pane_cp30

0x78cd,	// (0x0009428a) cell_cam4_burst_pane_ParamLimits

0x78cd,	// (0x0009428a) cell_cam4_burst_pane

0xeef4,	// (0x0009b8b1) linegrid_cam4_burst_pane_g1_ParamLimits

0xeef4,	// (0x0009b8b1) linegrid_cam4_burst_pane_g1

0x791a,	// (0x000942d7) linegrid_cam4_burst_pane_g2_ParamLimits

0x791a,	// (0x000942d7) linegrid_cam4_burst_pane_g2

0xef01,	// (0x0009b8be) linegrid_cam4_burst_pane_g3_ParamLimits

0xef01,	// (0x0009b8be) linegrid_cam4_burst_pane_g3

0x0002,

0xf997,	// (0x0009c354) linegrid_cam4_burst_pane_g_ParamLimits

0xf997,	// (0x0009c354) linegrid_cam4_burst_pane_g

0x792b,	// (0x000942e8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x792b,	// (0x000942e8) linegrid_cam4_burst_pane_g3_copy1

0xef0e,	// (0x0009b8cb) linegrid_cam4_burst_pane_g4_ParamLimits

0xef0e,	// (0x0009b8cb) linegrid_cam4_burst_pane_g4

0x7945,	// (0x00094302) linegrid_cam4_burst_pane_g5_ParamLimits

0x7945,	// (0x00094302) linegrid_cam4_burst_pane_g5

0x7956,	// (0x00094313) linegrid_cam4_burst_pane_g6_ParamLimits

0x7956,	// (0x00094313) linegrid_cam4_burst_pane_g6

0xef1b,	// (0x0009b8d8) linegrid_cam4_burst_pane_g7_ParamLimits

0xef1b,	// (0x0009b8d8) linegrid_cam4_burst_pane_g7

0x796d,	// (0x0009432a) cell_cam4_burst_pane_g1

0xef34,	// (0x0009b8f1) main_cam5_pane_t1_ParamLimits

0xef34,	// (0x0009b8f1) main_cam5_pane_t1

0xef46,	// (0x0009b903) main_cam5_pane_t2_ParamLimits

0xef46,	// (0x0009b903) main_cam5_pane_t2

0xef58,	// (0x0009b915) main_cam5_pane_t3_ParamLimits

0xef58,	// (0x0009b915) main_cam5_pane_t3

0xef6a,	// (0x0009b927) main_cam5_pane_t4_ParamLimits

0xef6a,	// (0x0009b927) main_cam5_pane_t4

0xef82,	// (0x0009b93f) main_cam5_pane_t5_ParamLimits

0xef82,	// (0x0009b93f) main_cam5_pane_t5

0xef96,	// (0x0009b953) main_cam5_pane_t6_ParamLimits

0xef96,	// (0x0009b953) main_cam5_pane_t6

0xefaa,	// (0x0009b967) main_cam5_pane_t7_ParamLimits

0xefaa,	// (0x0009b967) main_cam5_pane_t7

0xefbc,	// (0x0009b979) main_cam5_pane_t8_ParamLimits

0xefbc,	// (0x0009b979) main_cam5_pane_t8

0xefd8,	// (0x0009b995) main_cam5_pane_t9_ParamLimits

0xefd8,	// (0x0009b995) main_cam5_pane_t9

0xefea,	// (0x0009b9a7) main_cam5_pane_t10_ParamLimits

0xefea,	// (0x0009b9a7) main_cam5_pane_t10

0xeffc,	// (0x0009b9b9) main_cam5_pane_t11_ParamLimits

0xeffc,	// (0x0009b9b9) main_cam5_pane_t11

0xf00e,	// (0x0009b9cb) main_cam5_pane_t12_ParamLimits

0xf00e,	// (0x0009b9cb) main_cam5_pane_t12

0xf023,	// (0x0009b9e0) main_cam5_pane_t13_ParamLimits

0xf023,	// (0x0009b9e0) main_cam5_pane_t13

0x000c,

0x07cd,	// (0x0008d18a) main_cam5_pane_t_ParamLimits

0x07cd,	// (0x0008d18a) main_cam5_pane_t

0x0fde,	// (0x0008d99b) popup_scut_keymap_window_ParamLimits

0x0fde,	// (0x0008d99b) popup_scut_keymap_window

0x7980,	// (0x0009433d) aid_size_cell_brow_shortcut

0xe52f,	// (0x0009aeec) bg_popup_window_pane_cp010

0x798c,	// (0x00094349) grid_scut_pane

0x7998,	// (0x00094355) cell_scut_pane_ParamLimits

0x7998,	// (0x00094355) cell_scut_pane

0x79af,	// (0x0009436c) cell_scut_pane_g1

0xf040,	// (0x0009b9fd) cell_scut_pane_t1

0xf04f,	// (0x0009ba0c) cell_scut_pane_t2

0x79b8,	// (0x00094375) cell_scut_pane_t3

0x0002,

0xf9a3,	// (0x0009c360) cell_scut_pane_t

0x5774,	// (0x00092131) main_mup3_pane_g8_ParamLimits

0x5774,	// (0x00092131) main_mup3_pane_g8

0x6bdb,	// (0x00093598) area_vitu2_query_pane_ParamLimits

0x6bdb,	// (0x00093598) area_vitu2_query_pane

0x76f9,	// (0x000940b6) input_focus_pane_cp08

0xf06a,	// (0x0009ba27) area_vitu2_query_pane_g1

0x79c6,	// (0x00094383) area_vitu2_query_pane_g2

0x0001,

0xf9aa,	// (0x0009c367) area_vitu2_query_pane_g

0x79d7,	// (0x00094394) area_vitu2_query_pane_t1_ParamLimits

0x79d7,	// (0x00094394) area_vitu2_query_pane_t1

0x79eb,	// (0x000943a8) area_vitu2_query_pane_t2_ParamLimits

0x79eb,	// (0x000943a8) area_vitu2_query_pane_t2

0x79ff,	// (0x000943bc) area_vitu2_query_pane_t3_ParamLimits

0x79ff,	// (0x000943bc) area_vitu2_query_pane_t3

0xbdf5,	// (0x000987b2) area_vitu2_query_pane_t4_ParamLimits

0xbdf5,	// (0x000987b2) area_vitu2_query_pane_t4

0xbe1d,	// (0x000987da) area_vitu2_query_pane_t5_ParamLimits

0xbe1d,	// (0x000987da) area_vitu2_query_pane_t5

0xbe45,	// (0x00098802) area_vitu2_query_pane_t6_ParamLimits

0xbe45,	// (0x00098802) area_vitu2_query_pane_t6

0x0006,

0xf9af,	// (0x0009c36c) area_vitu2_query_pane_t_ParamLimits

0xf9af,	// (0x0009c36c) area_vitu2_query_pane_t

0x7a27,	// (0x000943e4) bg_button_pane_cp018

0x7a35,	// (0x000943f2) bg_button_pane_cp021

0x7a41,	// (0x000943fe) bg_button_pane_cp022

0x7a50,	// (0x0009440d) input_focus_pane_cp09

0x2ef1,	// (0x0008f8ae) aid_size_touch_mv_arrow_left

0x2f1a,	// (0x0008f8d7) aid_size_touch_mv_arrow_right

0x7224,	// (0x00093be1) main_cset_slider_pane_g16_ParamLimits

0x7224,	// (0x00093be1) main_cset_slider_pane_g16

0x7230,	// (0x00093bed) main_cset_slider_pane_g17_ParamLimits

0x7230,	// (0x00093bed) main_cset_slider_pane_g17

0x796d,	// (0x0009432a) cell_cam4_burst_pane_g1_ParamLimits

0x0dbc,	// (0x0008d779) compa_mode_pane

0x7416,	// (0x00093dd3) popup_vtel_slider_window_g3_ParamLimits

0x7416,	// (0x00093dd3) popup_vtel_slider_window_g3

0x742d,	// (0x00093dea) popup_vtel_slider_window_g4_ParamLimits

0x742d,	// (0x00093dea) popup_vtel_slider_window_g4

0x7444,	// (0x00093e01) popup_vtel_slider_window_t1_ParamLimits

0x7444,	// (0x00093e01) popup_vtel_slider_window_t1

0x0dbc,	// (0x0008d779) main_cl_pane

0xade9,	// (0x000977a6) popup_imed_adjust2_window_ParamLimits

0xadc1,	// (0x0009777e) bg_tb_trans_pane_cp05_ParamLimits

0xb7fe,	// (0x000981bb) popup_imed_adjust2_window_g1_ParamLimits

0xb80d,	// (0x000981ca) popup_imed_adjust2_window_g2_ParamLimits

0xb80d,	// (0x000981ca) popup_imed_adjust2_window_g2

0xb819,	// (0x000981d6) popup_imed_adjust2_window_g3_ParamLimits

0xb819,	// (0x000981d6) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x0009c13c) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x0009c13c) popup_imed_adjust2_window_g

0xb825,	// (0x000981e2) popup_imed_adjust2_window_t1_ParamLimits

0xb83d,	// (0x000981fa) slider_imed_adjust_pane_ParamLimits

0xb851,	// (0x0009820e) slider_imed_adjust_pane_g1_ParamLimits

0xb861,	// (0x0009821e) slider_imed_adjust_pane_g2_ParamLimits

0xb871,	// (0x0009822e) slider_imed_adjust_pane_g3_ParamLimits

0xb882,	// (0x0009823f) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x0009c143) slider_imed_adjust_pane_g_ParamLimits

0x68f8,	// (0x000932b5) aid_touch_area_cam4_ParamLimits

0x68f8,	// (0x000932b5) aid_touch_area_cam4

0xd97d,	// (0x0009a33a) battery_pane_cp01

0x69c8,	// (0x00093385) main_camera4_pane_g6_ParamLimits

0x69c8,	// (0x00093385) main_camera4_pane_g6

0x69f2,	// (0x000933af) main_camera4_pane_t2_ParamLimits

0x69f2,	// (0x000933af) main_camera4_pane_t2

0x0001,

0xf889,	// (0x0009c246) main_camera4_pane_t_ParamLimits

0xf889,	// (0x0009c246) main_camera4_pane_t

0x6a27,	// (0x000933e4) aid_touch_area_vid4_ParamLimits

0x6a27,	// (0x000933e4) aid_touch_area_vid4

0x6a8e,	// (0x0009344b) main_video4_pane_g5_ParamLimits

0x6a8e,	// (0x0009344b) main_video4_pane_g5

0x6ab9,	// (0x00093476) vid4_progress_pane_ParamLimits

0x6ab9,	// (0x00093476) vid4_progress_pane

0xed64,	// (0x0009b721) main_cset_slider_pane_g18_ParamLimits

0xed64,	// (0x0009b721) main_cset_slider_pane_g18

0xef28,	// (0x0009b8e5) cell_cam4_burst_pane_g2_ParamLimits

0xef28,	// (0x0009b8e5) cell_cam4_burst_pane_g2

0x0001,

0xf99e,	// (0x0009c35b) cell_cam4_burst_pane_g_ParamLimits

0xf99e,	// (0x0009c35b) cell_cam4_burst_pane_g

0xa612,	// (0x00096fcf) bg_cl_pane_ParamLimits

0xa612,	// (0x00096fcf) bg_cl_pane

0x7a5f,	// (0x0009441c) cl_header_pane_ParamLimits

0x7a5f,	// (0x0009441c) cl_header_pane

0x7a73,	// (0x00094430) cl_listscroll_pane_ParamLimits

0x7a73,	// (0x00094430) cl_listscroll_pane

0xf076,	// (0x0009ba33) bg_cl_pane_g1

0xf07e,	// (0x0009ba3b) bg_cl_pane_g2

0xf086,	// (0x0009ba43) bg_cl_pane_g3

0xf08e,	// (0x0009ba4b) bg_cl_pane_g4

0xf096,	// (0x0009ba53) bg_cl_pane_g5

0xf09e,	// (0x0009ba5b) bg_cl_pane_g6

0xf0a6,	// (0x0009ba63) bg_cl_pane_g7

0xf0ae,	// (0x0009ba6b) bg_cl_pane_g8

0xf0b6,	// (0x0009ba73) bg_cl_pane_g9

0x0008,

0xf9be,	// (0x0009c37b) bg_cl_pane_g

0x7a83,	// (0x00094440) aid_height_cl_leading_ParamLimits

0x7a83,	// (0x00094440) aid_height_cl_leading

0x7a8f,	// (0x0009444c) aid_height_cl_text_ParamLimits

0x7a8f,	// (0x0009444c) aid_height_cl_text

0x9e93,	// (0x00096850) bg_cl_header_pane_ParamLimits

0x9e93,	// (0x00096850) bg_cl_header_pane

0x7aae,	// (0x0009446b) cl_header_pane_g1_ParamLimits

0x7aae,	// (0x0009446b) cl_header_pane_g1

0x7ac4,	// (0x00094481) cl_header_pane_t1_ParamLimits

0x7ac4,	// (0x00094481) cl_header_pane_t1

0xf0be,	// (0x0009ba7b) cl_list_pane

0xed37,	// (0x0009b6f4) hc_scroll_pane_cp01

0xde24,	// (0x0009a7e1) bg_cl_header_pane_g1

0xec1d,	// (0x0009b5da) bg_cl_header_pane_g2

0xde44,	// (0x0009a801) bg_cl_header_pane_g3

0xec2d,	// (0x0009b5ea) bg_cl_header_pane_g4

0xec25,	// (0x0009b5e2) bg_cl_header_pane_g5

0xee41,	// (0x0009b7fe) bg_cl_header_pane_g6

0xec45,	// (0x0009b602) bg_cl_header_pane_g7

0xec4d,	// (0x0009b60a) bg_cl_header_pane_g8

0xec3d,	// (0x0009b5fa) bg_cl_header_pane_g9

0x0008,

0x0816,	// (0x0008d1d3) bg_cl_header_pane_g

0x7add,	// (0x0009449a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7add,	// (0x0009449a) hc_cl_list_double_graphic_heading_pane

0x7aee,	// (0x000944ab) hc_cl_list_single_graphic_pane_ParamLimits

0x7aee,	// (0x000944ab) hc_cl_list_single_graphic_pane

0x7b04,	// (0x000944c1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b04,	// (0x000944c1) hc_cl_list_single_graphic_pane_g1

0x7b10,	// (0x000944cd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b10,	// (0x000944cd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9d1,	// (0x0009c38e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9d1,	// (0x0009c38e) hc_cl_list_single_graphic_pane_g

0x7b24,	// (0x000944e1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b24,	// (0x000944e1) hc_cl_list_single_graphic_pane_t1

0x7b04,	// (0x000944c1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b04,	// (0x000944c1) hc_cl_list_double_graphic_heading_pane_g1

0x7b39,	// (0x000944f6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b39,	// (0x000944f6) hc_cl_list_double_graphic_heading_pane_g2

0x7b4d,	// (0x0009450a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b4d,	// (0x0009450a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d6,	// (0x0009c393) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d6,	// (0x0009c393) hc_cl_list_double_graphic_heading_pane_g

0x7b61,	// (0x0009451e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b61,	// (0x0009451e) hc_cl_list_double_graphic_heading_pane_t1

0x7b76,	// (0x00094533) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7b76,	// (0x00094533) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9dd,	// (0x0009c39a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9dd,	// (0x0009c39a) hc_cl_list_double_graphic_heading_pane_t

0xdaad,	// (0x0009a46a) vid4_progress_pane_g1

0xdabd,	// (0x0009a47a) vid4_progress_pane_g2

0xe0e9,	// (0x0009aaa6) vid4_progress_pane_g3

0xdacd,	// (0x0009a48a) vid4_progress_pane_g4

0x0004,

0xf9e2,	// (0x0009c39f) vid4_progress_pane_g

0xdaeb,	// (0x0009a4a8) vid4_progress_pane_t1

0xdb00,	// (0x0009a4bd) vid4_progress_pane_t2

0x0002,

0xf9ed,	// (0x0009c3aa) vid4_progress_pane_t

0xdb2b,	// (0x0009a4e8) wait_bar_pane_cp07

0xb0ba,	// (0x00097a77) blid_firmament_pane_ParamLimits

0xb0fd,	// (0x00097aba) popup_blid_sat_info2_window_g1

0xb121,	// (0x00097ade) popup_blid_sat_info2_window_t3

0xb12f,	// (0x00097aec) popup_blid_sat_info2_window_t4

0xb13d,	// (0x00097afa) popup_blid_sat_info2_window_t5

0xb14b,	// (0x00097b08) popup_blid_sat_info2_window_t6

0xb15b,	// (0x00097b18) popup_blid_sat_info2_window_t7

0xb169,	// (0x00097b26) popup_blid_sat_info2_window_t8

0xb177,	// (0x00097b34) popup_blid_sat_info2_window_t9

0xb185,	// (0x00097b42) popup_blid_sat_info2_window_t10

0xb247,	// (0x00097c04) aid_firma_cardinal_ParamLimits

0xb25b,	// (0x00097c18) blid_firmament_pane_t1_ParamLimits

0xb272,	// (0x00097c2f) blid_firmament_pane_t2_ParamLimits

0xb289,	// (0x00097c46) blid_firmament_pane_t3_ParamLimits

0xb2a0,	// (0x00097c5d) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x0009c035) blid_firmament_pane_t_ParamLimits

0xb2b7,	// (0x00097c74) blid_sat_info_pane_ParamLimits

0x9e93,	// (0x00096850) main_cam_set_pane_ParamLimits

0x5fd1,	// (0x0009298e) aid_size_cell_colour_35_ParamLimits

0x5ff1,	// (0x000929ae) aid_size_cell_colour_112_ParamLimits

0x6011,	// (0x000929ce) aid_size_cell_effect_ParamLimits

0xadc1,	// (0x0009777e) bg_tb_trans_pane_cp02_ParamLimits

0xe070,	// (0x0009aa2d) heading_imed_pane_ParamLimits

0x6031,	// (0x000929ee) listscroll_imed_pane_ParamLimits

0x3e9c,	// (0x00090859) popup_call2_audio_first_window_g5_ParamLimits

0x3e9c,	// (0x00090859) popup_call2_audio_first_window_g5

0x65a3,	// (0x00092f60) aid_size_touch_image3_arrow_left_ParamLimits

0x65a3,	// (0x00092f60) aid_size_touch_image3_arrow_left

0x65cf,	// (0x00092f8c) aid_size_touch_image3_arrow_right_ParamLimits

0x65cf,	// (0x00092f8c) aid_size_touch_image3_arrow_right

0xdb16,	// (0x0009a4d3) vid4_progress_pane_t3

0x6344,	// (0x00092d01) main_hwr_training_symbol_option_pane_ParamLimits

0x6344,	// (0x00092d01) main_hwr_training_symbol_option_pane

0xbaeb,	// (0x000984a8) popup_hwr_training_preview_window_ParamLimits

0xbaeb,	// (0x000984a8) popup_hwr_training_preview_window

0x6364,	// (0x00092d21) hwr_training_navi_pane_g5_ParamLimits

0x6364,	// (0x00092d21) hwr_training_navi_pane_g5

0xbda3,	// (0x00098760) popup_char_count_window

0xda18,	// (0x0009a3d5) bg_popup_sub_pane_cp20_ParamLimits

0x755c,	// (0x00093f19) list_vitu2_match_list_pane_ParamLimits

0x756b,	// (0x00093f28) vitu2_page_scroll_pane_ParamLimits

0x756b,	// (0x00093f28) vitu2_page_scroll_pane

0xf0c7,	// (0x0009ba84) list_single_hwr_training_symbol_option_pane_ParamLimits

0xf0c7,	// (0x0009ba84) list_single_hwr_training_symbol_option_pane

0xbeeb,	// (0x000988a8) list_single_hwr_training_symbol_option_pane_g1

0xbef3,	// (0x000988b0) list_single_hwr_training_symbol_option_pane_t1

0xbf01,	// (0x000988be) bg_button_pane_cp023

0xbf0a,	// (0x000988c7) bg_button_pane_cp024

0x7b8b,	// (0x00094548) vitu2_page_scroll_pane_g1

0x7b93,	// (0x00094550) vitu2_page_scroll_pane_g2

0x0001,

0xf9f4,	// (0x0009c3b1) vitu2_page_scroll_pane_g

0x7b9b,	// (0x00094558) vitu2_page_scroll_pane_t1

0xbf3d,	// (0x000988fa) popup_char_count_window_g1

0xbf46,	// (0x00098903) popup_char_count_window_g2

0xbf4f,	// (0x0009890c) popup_char_count_window_g3

0x0002,

0xf9f9,	// (0x0009c3b6) popup_char_count_window_g

0xbf58,	// (0x00098915) popup_char_count_window_t1

0x0dbc,	// (0x0008d779) main_vded2_pane

0xb7ea,	// (0x000981a7) aid_size_cell_imed_line

0xb7f4,	// (0x000981b1) grid_imed_line_width_pane

0x6b27,	// (0x000934e4) vid4_indicators_pane_g4

0xbf66,	// (0x00098923) cell_imed_line_width_pane_ParamLimits

0xbf66,	// (0x00098923) cell_imed_line_width_pane

0xbf7a,	// (0x00098937) cell_imed_line_width_pane_g1

0xb068,	// (0x00097a25) cell_imed_line_width_pane_g2

0x0001,

0xfa00,	// (0x0009c3bd) cell_imed_line_width_pane_g

0x7baa,	// (0x00094567) main_vded2_pane_g1_ParamLimits

0x7baa,	// (0x00094567) main_vded2_pane_g1

0x7bc0,	// (0x0009457d) main_vded2_pane_g2_ParamLimits

0x7bc0,	// (0x0009457d) main_vded2_pane_g2

0x0001,

0xfa05,	// (0x0009c3c2) main_vded2_pane_g_ParamLimits

0xfa05,	// (0x0009c3c2) main_vded2_pane_g

0x7bd2,	// (0x0009458f) vded2_slider_pane_ParamLimits

0x7bd2,	// (0x0009458f) vded2_slider_pane

0x7be2,	// (0x0009459f) aid_size_touch_vded2_end

0x7bec,	// (0x000945a9) aid_size_touch_vded2_playhead

0xbf83,	// (0x00098940) aid_size_touch_vded2_start

0xbf8b,	// (0x00098948) vded2_slider_bg_pane

0xbf94,	// (0x00098951) vded2_slider_pane_g1

0xbf9d,	// (0x0009895a) vded2_slider_pane_g2

0x7bf6,	// (0x000945b3) vded2_slider_pane_g3

0x0002,

0xfa0a,	// (0x0009c3c7) vded2_slider_pane_g

0xbfa5,	// (0x00098962) vded2_slider_bg_pane_g1

0xbfae,	// (0x0009896b) vded2_slider_bg_pane_g2

0xbfb7,	// (0x00098974) vded2_slider_bg_pane_g3

0x0002,

0xfa11,	// (0x0009c3ce) vded2_slider_bg_pane_g

0x3598,	// (0x0008ff55) aid_postcard_touch_down_pane_ParamLimits

0x3598,	// (0x0008ff55) aid_postcard_touch_down_pane

0x35ae,	// (0x0008ff6b) aid_postcard_touch_up_pane_ParamLimits

0x35ae,	// (0x0008ff6b) aid_postcard_touch_up_pane

0x0dbc,	// (0x0008d779) main_blid2_pane

0xadcf,	// (0x0009778c) popup_blid2_search_window

0x0dbc,	// (0x0008d779) blid2_gps_pane

0x0dbc,	// (0x0008d779) blid2_navig_pane

0x0dbc,	// (0x0008d779) blid2_search_pane

0x0dbc,	// (0x0008d779) blid2_tripm_pane

0x7c01,	// (0x000945be) blid2_search_pane_g1_ParamLimits

0x7c01,	// (0x000945be) blid2_search_pane_g1

0x7c1b,	// (0x000945d8) blid2_search_pane_t1_ParamLimits

0x7c1b,	// (0x000945d8) blid2_search_pane_t1

0x7c2d,	// (0x000945ea) aid_size_cell_blid2_gps_ParamLimits

0x7c2d,	// (0x000945ea) aid_size_cell_blid2_gps

0x7c45,	// (0x00094602) blid2_gps_pane_g1_ParamLimits

0x7c45,	// (0x00094602) blid2_gps_pane_g1

0x7c59,	// (0x00094616) grid_blid2_satellite_pane_ParamLimits

0x7c59,	// (0x00094616) grid_blid2_satellite_pane

0x7c73,	// (0x00094630) blid2_navig_pane_g1_ParamLimits

0x7c73,	// (0x00094630) blid2_navig_pane_g1

0x7c7f,	// (0x0009463c) blid2_navig_pane_t1_ParamLimits

0x7c7f,	// (0x0009463c) blid2_navig_pane_t1

0x7c9a,	// (0x00094657) blid2_navig_pane_t2_ParamLimits

0x7c9a,	// (0x00094657) blid2_navig_pane_t2

0x0001,

0xfa18,	// (0x0009c3d5) blid2_navig_pane_t_ParamLimits

0xfa18,	// (0x0009c3d5) blid2_navig_pane_t

0x7cb5,	// (0x00094672) blid2_navig_ring_pane_ParamLimits

0x7cb5,	// (0x00094672) blid2_navig_ring_pane

0x7cce,	// (0x0009468b) blid2_speed_pane_ParamLimits

0x7cce,	// (0x0009468b) blid2_speed_pane

0x7cda,	// (0x00094697) blid2_tripm_pane_g1_ParamLimits

0x7cda,	// (0x00094697) blid2_tripm_pane_g1

0x7cf3,	// (0x000946b0) blid2_tripm_pane_g2_ParamLimits

0x7cf3,	// (0x000946b0) blid2_tripm_pane_g2

0x7d07,	// (0x000946c4) blid2_tripm_pane_g3_ParamLimits

0x7d07,	// (0x000946c4) blid2_tripm_pane_g3

0x7d1b,	// (0x000946d8) blid2_tripm_pane_g4_ParamLimits

0x7d1b,	// (0x000946d8) blid2_tripm_pane_g4

0x7d2f,	// (0x000946ec) blid2_tripm_pane_g5_ParamLimits

0x7d2f,	// (0x000946ec) blid2_tripm_pane_g5

0x0005,

0xfa1d,	// (0x0009c3da) blid2_tripm_pane_g_ParamLimits

0xfa1d,	// (0x0009c3da) blid2_tripm_pane_g

0x7d55,	// (0x00094712) blid2_tripm_pane_t1_ParamLimits

0x7d55,	// (0x00094712) blid2_tripm_pane_t1

0x7d70,	// (0x0009472d) blid2_tripm_pane_t2_ParamLimits

0x7d70,	// (0x0009472d) blid2_tripm_pane_t2

0x7d89,	// (0x00094746) blid2_tripm_pane_t3_ParamLimits

0x7d89,	// (0x00094746) blid2_tripm_pane_t3

0x0003,

0xfa2a,	// (0x0009c3e7) blid2_tripm_pane_t_ParamLimits

0xfa2a,	// (0x0009c3e7) blid2_tripm_pane_t

0x7dd0,	// (0x0009478d) cell_blid2_satellite_pane_ParamLimits

0x7dd0,	// (0x0009478d) cell_blid2_satellite_pane

0x7dee,	// (0x000947ab) cell_blid2_satellite_pane_g1

0xbfc0,	// (0x0009897d) cell_blid2_satellite_pane_t1

0xb2c7,	// (0x00097c84) blid2_speed_pane_g1

0xbfce,	// (0x0009898b) blid2_speed_pane_t1

0xbfdc,	// (0x00098999) blid2_speed_pane_t2

0x0001,

0xfa33,	// (0x0009c3f0) blid2_speed_pane_t

0xb2c7,	// (0x00097c84) blid2_navig_ring_pane_g1

0x7df7,	// (0x000947b4) blid2_navig_ring_pane_g2

0x7dff,	// (0x000947bc) blid2_navig_ring_pane_g3

0x7e07,	// (0x000947c4) blid2_navig_ring_pane_g4

0x7e0f,	// (0x000947cc) blid2_navig_ring_pane_g5

0x0004,

0xfa38,	// (0x0009c3f5) blid2_navig_ring_pane_g

0x0dbc,	// (0x0008d779) bg_popup_window_pane_cp011

0xbfea,	// (0x000989a7) popup_blid2_search_window_g1

0xbff2,	// (0x000989af) popup_blid2_search_window_t1

0xc000,	// (0x000989bd) popup_blid2_search_window_t2

0x0001,

0xfa43,	// (0x0009c400) popup_blid2_search_window_t

0xdd33,	// (0x0009a6f0) main_browser_pane_g1

0xa612,	// (0x00096fcf) main_browser_pane_ParamLimits

0xda18,	// (0x0009a3d5) bg_button_pane_cp011_ParamLimits

0x6e00,	// (0x000937bd) cell_vitu2_function_pane_g1_ParamLimits

0xadc1,	// (0x0009777e) bg_popup_sub_pane_cp22_ParamLimits

0x76f9,	// (0x000940b6) input_focus_pane_cp08_ParamLimits

0x7710,	// (0x000940cd) popup_vitu2_query_button_pane_ParamLimits

0x7710,	// (0x000940cd) popup_vitu2_query_button_pane

0x7721,	// (0x000940de) popup_vitu2_query_input_button_pane

0xee7e,	// (0x0009b83b) popup_vitu2_query_window_g1_ParamLimits

0x772b,	// (0x000940e8) popup_vitu2_query_window_g2_ParamLimits

0xf981,	// (0x0009c33e) popup_vitu2_query_window_g_ParamLimits

0x0dbc,	// (0x0008d779) bg_button_pane_cp026

0x7e17,	// (0x000947d4) popup_vitu2_query_input_button_pane_g1

0x0dbc,	// (0x0008d779) bg_button_pane_cp025

0xc00e,	// (0x000989cb) popup_vitu2_query_button_pane_t1

0x545b,	// (0x00091e18) main_mp3_pane_t6

0x5469,	// (0x00091e26) popup_slider_window_cp01

0xd9a7,	// (0x0009a364) cam4_battery_pane

0xda0e,	// (0x0009a3cb) cam4_battery_pane_cp02

0xdaa5,	// (0x0009a462) cam4_battery_pane_cp01

0xdaa5,	// (0x0009a462) cam4_battery_pane_cp03

0xec09,	// (0x0009b5c6) cam4_battery_pane_g1

0xb2c7,	// (0x00097c84) cam4_battery_pane_g2

0x0001,

0xfa48,	// (0x0009c405) cam4_battery_pane_g

0xb193,	// (0x00097b50) popup_blid_sat_info2_window_t11

0x2ef1,	// (0x0008f8ae) aid_size_touch_mv_arrow_left_ParamLimits

0x2f1a,	// (0x0008f8d7) aid_size_touch_mv_arrow_right_ParamLimits

0xe48f,	// (0x0009ae4c) navi_pane_g1_ParamLimits

0x2f43,	// (0x0008f900) navi_pane_g2_ParamLimits

0x2f71,	// (0x0008f92e) navi_pane_g3_ParamLimits

0xf3c9,	// (0x0009bd86) navi_pane_g_ParamLimits

0x2fc9,	// (0x0008f986) navi_pane_mv_t1_ParamLimits

0x603d,	// (0x000929fa) grid_imed_effect_pane_ParamLimits

0x1df9,	// (0x0008e7b6) aid_placing_vt_slider_lsc

0xdc84,	// (0x0009a641) aid_placing_vt_slider_prt

0x9e93,	// (0x00096850) bg_tb_trans_pane_cp01_ParamLimits

0xb453,	// (0x00097e10) popup_image_details_window_g1_ParamLimits

0xb466,	// (0x00097e23) popup_image_details_window_g2_ParamLimits

0xb47b,	// (0x00097e38) popup_image_details_window_g3_ParamLimits

0xb47b,	// (0x00097e38) popup_image_details_window_g3

0xf6bd,	// (0x0009c07a) popup_image_details_window_g_ParamLimits

0xb48f,	// (0x00097e4c) popup_image_details_window_t1_ParamLimits

0xb4a1,	// (0x00097e5e) popup_image_details_window_t2_ParamLimits

0xb4ba,	// (0x00097e77) popup_image_details_window_t3_ParamLimits

0xb4ce,	// (0x00097e8b) popup_image_details_window_t4_ParamLimits

0xb4e9,	// (0x00097ea6) popup_image_details_window_t5_ParamLimits

0xf6c4,	// (0x0009c081) popup_image_details_window_t_ParamLimits

0x7a9b,	// (0x00094458) cl_header_name_pane_ParamLimits

0x7a9b,	// (0x00094458) cl_header_name_pane

0x7e1f,	// (0x000947dc) cl_header_name_pane_t1_ParamLimits

0x7e1f,	// (0x000947dc) cl_header_name_pane_t1

0x7e40,	// (0x000947fd) cl_header_name_pane_t2_ParamLimits

0x7e40,	// (0x000947fd) cl_header_name_pane_t2

0x7e82,	// (0x0009483f) cl_header_name_pane_t3_ParamLimits

0x7e82,	// (0x0009483f) cl_header_name_pane_t3

0x0002,

0xfa4d,	// (0x0009c40a) cl_header_name_pane_t_ParamLimits

0xfa4d,	// (0x0009c40a) cl_header_name_pane_t

0x2f9a,	// (0x0008f957) navi_pane_mv_g2_ParamLimits

0xbd31,	// (0x000986ee) field_vitu2_entry_pane_g1_ParamLimits

0xbd3d,	// (0x000986fa) field_vitu2_entry_pane_g2_ParamLimits

0xbd49,	// (0x00098706) field_vitu2_entry_pane_g3_ParamLimits

0xbd49,	// (0x00098706) field_vitu2_entry_pane_g3

0xf8bb,	// (0x0009c278) field_vitu2_entry_pane_g_ParamLimits

0x6d7c,	// (0x00093739) cell_vitu2_itu_pane_g1_ParamLimits

0x6d8c,	// (0x00093749) cell_vitu2_itu_pane_g2_ParamLimits

0x6d8c,	// (0x00093749) cell_vitu2_itu_pane_g2

0x0001,

0xf8c7,	// (0x0009c284) cell_vitu2_itu_pane_g_ParamLimits

0xf8c7,	// (0x0009c284) cell_vitu2_itu_pane_g

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp05_ParamLimits

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp05

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp03

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp04

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp10_ParamLimits

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp10

0x7a41,	// (0x000943fe) bg_vkb2_func_pane_cp08

0x7a27,	// (0x000943e4) bg_vkb2_func_pane_cp06

0x7a35,	// (0x000943f2) bg_vkb2_func_pane_cp07

0xbf13,	// (0x000988d0) bg_vkb2_func_pane_cp11_ParamLimits

0xbf13,	// (0x000988d0) bg_vkb2_func_pane_cp11

0xbf28,	// (0x000988e5) bg_vkb2_func_pane_cp12_ParamLimits

0xbf28,	// (0x000988e5) bg_vkb2_func_pane_cp12

0x0dbc,	// (0x0008d779) bg_vkb2_func_pane_cp09

0xec1d,	// (0x0009b5da) bg_vkb2_func_pane_g1

0xde44,	// (0x0009a801) bg_vkb2_func_pane_g2

0xec25,	// (0x0009b5e2) bg_vkb2_func_pane_g3

0xec2d,	// (0x0009b5ea) bg_vkb2_func_pane_g4

0xee41,	// (0x0009b7fe) bg_vkb2_func_pane_g5

0xec45,	// (0x0009b602) bg_vkb2_func_pane_g6

0xec4d,	// (0x0009b60a) bg_vkb2_func_pane_g7

0xec3d,	// (0x0009b5fa) bg_vkb2_func_pane_g8

0xde24,	// (0x0009a7e1) bg_vkb2_func_pane_g9

0x0008,

0x08ac,	// (0x0008d269) bg_vkb2_func_pane_g

0x7d43,	// (0x00094700) blid2_tripm_pane_g6_ParamLimits

0x7d43,	// (0x00094700) blid2_tripm_pane_g6

0xbbbf,	// (0x0009857c) mp4_progress_pane_g1

0x7dbc,	// (0x00094779) blid2_tripm_values_pane_ParamLimits

0x7dbc,	// (0x00094779) blid2_tripm_values_pane

0x7eb3,	// (0x00094870) blid2_tripm_values_pane_t1

0x7ec1,	// (0x0009487e) blid2_tripm_values_pane_t2

0x7ecf,	// (0x0009488c) blid2_tripm_values_pane_t3

0x7edd,	// (0x0009489a) blid2_tripm_values_pane_t4

0x7eeb,	// (0x000948a8) blid2_tripm_values_pane_t5

0x7ef9,	// (0x000948b6) blid2_tripm_values_pane_t6

0x7f07,	// (0x000948c4) blid2_tripm_values_pane_t7

0x7f15,	// (0x000948d2) blid2_tripm_values_pane_t8

0x7f23,	// (0x000948e0) blid2_tripm_values_pane_t9

0x0008,

0xfa54,	// (0x0009c411) blid2_tripm_values_pane_t

0x1e3b,	// (0x0008e7f8) call_video_pane_t1_ParamLimits

0x1e59,	// (0x0008e816) call_video_pane_t2_ParamLimits

0xf292,	// (0x0009bc4f) call_video_pane_t_ParamLimits

0x349b,	// (0x0008fe58) msg_header_pane_g1_ParamLimits

0xe6aa,	// (0x0009b067) msg_header_pane_g2_ParamLimits

0xe6aa,	// (0x0009b067) msg_header_pane_g2

0x0001,

0xf452,	// (0x0009be0f) msg_header_pane_g_ParamLimits

0xf452,	// (0x0009be0f) msg_header_pane_g

0xa612,	// (0x00096fcf) main_clock2_pane_ParamLimits

0x5d69,	// (0x00092726) grid_clock2_toolbar_pane_ParamLimits

0x5d69,	// (0x00092726) grid_clock2_toolbar_pane

0x5d69,	// (0x00092726) listscroll_clock2_pane_ParamLimits

0x5d69,	// (0x00092726) listscroll_clock2_pane

0x5e45,	// (0x00092802) main_clock2_pane_t3_ParamLimits

0x5e45,	// (0x00092802) main_clock2_pane_t3

0x5e60,	// (0x0009281d) main_clock2_pane_t4_ParamLimits

0x5e60,	// (0x0009281d) main_clock2_pane_t4

0xc01c,	// (0x000989d9) cell_clock2_toolbar_pane

0xc024,	// (0x000989e1) cell_clock2_toolbar_pane_cp01

0xc024,	// (0x000989e1) cell_clock2_toolbar_pane_cp02

0xc02c,	// (0x000989e9) cell_clock2_toolbar_pane_cp03

0xc034,	// (0x000989f1) list_clock2_pane

0xe3d8,	// (0x0009ad95) scroll_pane_cp10

0xc03c,	// (0x000989f9) list_single_clock2_pane_ParamLimits

0xc03c,	// (0x000989f9) list_single_clock2_pane

0xe52f,	// (0x0009aeec) list_highlight_pane_cp08

0xc049,	// (0x00098a06) list_single_clock2_pane_t1

0xc057,	// (0x00098a14) list_single_clock2_pane_t2

0x0001,

0xfa67,	// (0x0009c424) list_single_clock2_pane_t

0x0dbc,	// (0x0008d779) bg_button_pane_cp10

0xc065,	// (0x00098a22) cell_clock2_toolbar_pane_g1

0x3524,	// (0x0008fee1) aid_main_viewer_pane_g1_ParamLimits

0x3524,	// (0x0008fee1) aid_main_viewer_pane_g1

0x3532,	// (0x0008feef) aid_main_viewer_pane_g2_ParamLimits

0x3532,	// (0x0008feef) aid_main_viewer_pane_g2

0x3540,	// (0x0008fefd) aid_main_viewer_pane_g3_ParamLimits

0x3540,	// (0x0008fefd) aid_main_viewer_pane_g3

0x354f,	// (0x0008ff0c) aid_main_viewer_pane_g4_ParamLimits

0x354f,	// (0x0008ff0c) aid_main_viewer_pane_g4

0x0003,

0xf463,	// (0x0009be20) aid_main_viewer_pane_g_ParamLimits

0xf463,	// (0x0009be20) aid_main_viewer_pane_g

0x467e,	// (0x0009103b) main_calc_pane_ParamLimits

0x4692,	// (0x0009104f) main_dialer2_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_cam6_pane

0x0dbc,	// (0x0008d779) main_vid6_pane

0x5d75,	// (0x00092732) listscroll_gen_pane_cp06_ParamLimits

0x5d75,	// (0x00092732) listscroll_gen_pane_cp06

0x5e7b,	// (0x00092838) main_clock2_pane_t5_ParamLimits

0x5e7b,	// (0x00092838) main_clock2_pane_t5

0x5ed2,	// (0x0009288f) aid_call2_pane_cp10_ParamLimits

0x5ee4,	// (0x000928a1) aid_call_pane_cp10_ParamLimits

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ef6,	// (0x000928b3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ef6,	// (0x000928b3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe464,	// (0x0009ae21) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x0009c131) popup_clock_analogue_window_cp10_g_ParamLimits

0x5f08,	// (0x000928c5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6550,	// (0x00092f0d) cell_dialer2_keypad_pane_g2_ParamLimits

0x6550,	// (0x00092f0d) cell_dialer2_keypad_pane_g2

0x0001,

0xf85a,	// (0x0009c217) cell_dialer2_keypad_pane_g_ParamLimits

0xf85a,	// (0x0009c217) cell_dialer2_keypad_pane_g

0x656c,	// (0x00092f29) cell_dialer2_keypad_pane_t1

0x7117,	// (0x00093ad4) main_cset_text2_pane_ParamLimits

0x7117,	// (0x00093ad4) main_cset_text2_pane

0xf06a,	// (0x0009ba27) area_vitu2_query_pane_g1_ParamLimits

0x79c6,	// (0x00094383) area_vitu2_query_pane_g2_ParamLimits

0xf9aa,	// (0x0009c367) area_vitu2_query_pane_g_ParamLimits

0xbe6d,	// (0x0009882a) area_vitu2_query_pane_t7_ParamLimits

0xbe6d,	// (0x0009882a) area_vitu2_query_pane_t7

0x7a27,	// (0x000943e4) bg_button_pane_cp018_ParamLimits

0x7a35,	// (0x000943f2) bg_button_pane_cp021_ParamLimits

0x7a41,	// (0x000943fe) bg_button_pane_cp022_ParamLimits

0x7a41,	// (0x000943fe) bg_vkb2_func_pane_cp08_ParamLimits

0x7a27,	// (0x000943e4) bg_vkb2_func_pane_cp06_ParamLimits

0x7a35,	// (0x000943f2) bg_vkb2_func_pane_cp07_ParamLimits

0x7a50,	// (0x0009440d) input_focus_pane_cp09_ParamLimits

0xdb3d,	// (0x0009a4fa) cam6_autofocus_pane_ParamLimits

0xdb3d,	// (0x0009a4fa) cam6_autofocus_pane

0x7f31,	// (0x000948ee) cam6_image_uncrop_pane_ParamLimits

0x7f31,	// (0x000948ee) cam6_image_uncrop_pane

0x7f40,	// (0x000948fd) cam6_indi_pane_ParamLimits

0x7f40,	// (0x000948fd) cam6_indi_pane

0x7f56,	// (0x00094913) cam6_mode_pane_ParamLimits

0x7f56,	// (0x00094913) cam6_mode_pane

0x7f68,	// (0x00094925) cam6_timer_pane_ParamLimits

0x7f68,	// (0x00094925) cam6_timer_pane

0x7f74,	// (0x00094931) cam6_zoom_pane_ParamLimits

0x7f74,	// (0x00094931) cam6_zoom_pane

0x7f80,	// (0x0009493d) cam6_mode_pane_g1_ParamLimits

0x7f80,	// (0x0009493d) cam6_mode_pane_g1

0x7f90,	// (0x0009494d) cam6_mode_pane_g2_ParamLimits

0x7f90,	// (0x0009494d) cam6_mode_pane_g2

0x7fa0,	// (0x0009495d) cam6_mode_pane_g3_ParamLimits

0x7fa0,	// (0x0009495d) cam6_mode_pane_g3

0x7fb0,	// (0x0009496d) cam6_mode_pane_g4_ParamLimits

0x7fb0,	// (0x0009496d) cam6_mode_pane_g4

0x0003,

0xfa6c,	// (0x0009c429) cam6_mode_pane_g_ParamLimits

0xfa6c,	// (0x0009c429) cam6_mode_pane_g

0xc06d,	// (0x00098a2a) bg_tb_trans_pane_cp08_ParamLimits

0xc06d,	// (0x00098a2a) bg_tb_trans_pane_cp08

0xc07b,	// (0x00098a38) cam6_battery_pane_ParamLimits

0xc07b,	// (0x00098a38) cam6_battery_pane

0xc091,	// (0x00098a4e) cam6_indi_pane_g1_ParamLimits

0xc091,	// (0x00098a4e) cam6_indi_pane_g1

0xc0a3,	// (0x00098a60) cam6_indi_pane_g2_ParamLimits

0xc0a3,	// (0x00098a60) cam6_indi_pane_g2

0xc0b5,	// (0x00098a72) cam6_indi_pane_g3_ParamLimits

0xc0b5,	// (0x00098a72) cam6_indi_pane_g3

0x0002,

0xfa75,	// (0x0009c432) cam6_indi_pane_g_ParamLimits

0xfa75,	// (0x0009c432) cam6_indi_pane_g

0xc0c7,	// (0x00098a84) cam6_indi_pane_t1_ParamLimits

0xc0c7,	// (0x00098a84) cam6_indi_pane_t1

0x7fc0,	// (0x0009497d) cam6_autofocus_pane_g1

0x7fc8,	// (0x00094985) cam6_autofocus_pane_g2

0x7fd0,	// (0x0009498d) cam6_autofocus_pane_g3

0x7fd8,	// (0x00094995) cam6_autofocus_pane_g4

0x0003,

0xfa7c,	// (0x0009c439) cam6_autofocus_pane_g

0xc0ed,	// (0x00098aaa) cam6_timer_pane_g1

0xc0f5,	// (0x00098ab2) cam6_timer_pane_t1

0xc103,	// (0x00098ac0) cam6_zoom_cont_pane

0xc10b,	// (0x00098ac8) cam6_zoom_pane_g1

0xc113,	// (0x00098ad0) cam6_zoom_pane_g2

0x7fe0,	// (0x0009499d) cam6_zoom_pane_g3

0x0002,

0xfa85,	// (0x0009c442) cam6_zoom_pane_g

0xb2c7,	// (0x00097c84) cam6_battery_pane_g1

0xb2c7,	// (0x00097c84) cam6_battery_pane_g2

0x0001,

0xf681,	// (0x0009c03e) cam6_battery_pane_g

0xc11b,	// (0x00098ad8) cam6_zoom_cont_pane_g1

0xc124,	// (0x00098ae1) cam6_zoom_cont_pane_g2

0xc12d,	// (0x00098aea) cam6_zoom_cont_pane_g3

0x0002,

0xfa8c,	// (0x0009c449) cam6_zoom_cont_pane_g

0x7ffd,	// (0x000949ba) cam6_mode_pane_cp_ParamLimits

0x7ffd,	// (0x000949ba) cam6_mode_pane_cp

0x800f,	// (0x000949cc) cam6_zoom_pane_cp_ParamLimits

0x800f,	// (0x000949cc) cam6_zoom_pane_cp

0x801b,	// (0x000949d8) vid6_image_uncrop_cif_pane_ParamLimits

0x801b,	// (0x000949d8) vid6_image_uncrop_cif_pane

0x802b,	// (0x000949e8) vid6_image_uncrop_nhd_pane_ParamLimits

0x802b,	// (0x000949e8) vid6_image_uncrop_nhd_pane

0x803a,	// (0x000949f7) vid6_image_uncrop_vga_pane_ParamLimits

0x803a,	// (0x000949f7) vid6_image_uncrop_vga_pane

0x8049,	// (0x00094a06) vid6_image_uncrop_wvga_pane_ParamLimits

0x8049,	// (0x00094a06) vid6_image_uncrop_wvga_pane

0x8058,	// (0x00094a15) vid6_indi_pane_ParamLimits

0x8058,	// (0x00094a15) vid6_indi_pane

0xc06d,	// (0x00098a2a) bg_tb_trans_pane_cp09_ParamLimits

0xc06d,	// (0x00098a2a) bg_tb_trans_pane_cp09

0xc145,	// (0x00098b02) cam6_battery_pane_cp_ParamLimits

0xc145,	// (0x00098b02) cam6_battery_pane_cp

0xc151,	// (0x00098b0e) vid6_indi_pane_g1_ParamLimits

0xc151,	// (0x00098b0e) vid6_indi_pane_g1

0xc163,	// (0x00098b20) vid6_indi_pane_g2_ParamLimits

0xc163,	// (0x00098b20) vid6_indi_pane_g2

0xc175,	// (0x00098b32) vid6_indi_pane_g3_ParamLimits

0xc175,	// (0x00098b32) vid6_indi_pane_g3

0xc18a,	// (0x00098b47) vid6_indi_pane_g4_ParamLimits

0xc18a,	// (0x00098b47) vid6_indi_pane_g4

0xc19f,	// (0x00098b5c) vid6_indi_pane_g5_ParamLimits

0xc19f,	// (0x00098b5c) vid6_indi_pane_g5

0x0004,

0xfa93,	// (0x0009c450) vid6_indi_pane_g_ParamLimits

0xfa93,	// (0x0009c450) vid6_indi_pane_g

0xc1b9,	// (0x00098b76) vid6_indi_pane_t1_ParamLimits

0xc1b9,	// (0x00098b76) vid6_indi_pane_t1

0xc1cf,	// (0x00098b8c) vid6_indi_pane_t2_ParamLimits

0xc1cf,	// (0x00098b8c) vid6_indi_pane_t2

0xc1f7,	// (0x00098bb4) vid6_indi_pane_t3_ParamLimits

0xc1f7,	// (0x00098bb4) vid6_indi_pane_t3

0xc21f,	// (0x00098bdc) vid6_indi_pane_t4_ParamLimits

0xc21f,	// (0x00098bdc) vid6_indi_pane_t4

0x0003,

0xfa9e,	// (0x0009c45b) vid6_indi_pane_t_ParamLimits

0xfa9e,	// (0x0009c45b) vid6_indi_pane_t

0xc243,	// (0x00098c00) wait_bar_pane_cp08

0x8070,	// (0x00094a2d) main_cset_text2_pane_t1_ParamLimits

0x8070,	// (0x00094a2d) main_cset_text2_pane_t1

0x7fe8,	// (0x000949a5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7fe8,	// (0x000949a5) listscroll_gen_pane_cp06_t1

0x0dbc,	// (0x0008d779) main_cam6_set_pane

0xd999,	// (0x0009a356) bg_tb_trans_pane_cp06_ParamLimits

0xd9af,	// (0x0009a36c) cam4_indicators_pane_g1_ParamLimits

0xd9c0,	// (0x0009a37d) cam4_indicators_pane_g2_ParamLimits

0xf897,	// (0x0009c254) cam4_indicators_pane_g_ParamLimits

0xd9de,	// (0x0009a39b) cam4_indicators_pane_t1_ParamLimits

0xda00,	// (0x0009a3bd) bg_tb_trans_pane_cp07_ParamLimits

0x6b00,	// (0x000934bd) vid4_indicators_pane_g1_ParamLimits

0x6b0d,	// (0x000934ca) vid4_indicators_pane_g2_ParamLimits

0x6b1a,	// (0x000934d7) vid4_indicators_pane_g3_ParamLimits

0x6b27,	// (0x000934e4) vid4_indicators_pane_g4_ParamLimits

0xf8a9,	// (0x0009c266) vid4_indicators_pane_g_ParamLimits

0x6b3f,	// (0x000934fc) vid4_indicators_pane_t1_ParamLimits

0xdaad,	// (0x0009a46a) vid4_progress_pane_g1_ParamLimits

0xdabd,	// (0x0009a47a) vid4_progress_pane_g2_ParamLimits

0xe0e9,	// (0x0009aaa6) vid4_progress_pane_g3_ParamLimits

0xdacd,	// (0x0009a48a) vid4_progress_pane_g4_ParamLimits

0xf9e2,	// (0x0009c39f) vid4_progress_pane_g_ParamLimits

0xdaeb,	// (0x0009a4a8) vid4_progress_pane_t1_ParamLimits

0xdb00,	// (0x0009a4bd) vid4_progress_pane_t2_ParamLimits

0xdb16,	// (0x0009a4d3) vid4_progress_pane_t3_ParamLimits

0xf9ed,	// (0x0009c3aa) vid4_progress_pane_t_ParamLimits

0xdb2b,	// (0x0009a4e8) wait_bar_pane_cp07_ParamLimits

0x808d,	// (0x00094a4a) main_cam6_set_pane_g2_ParamLimits

0x808d,	// (0x00094a4a) main_cam6_set_pane_g2

0x80b1,	// (0x00094a6e) main_cset6_listscroll_pane_ParamLimits

0x80b1,	// (0x00094a6e) main_cset6_listscroll_pane

0x80d1,	// (0x00094a8e) main_cset6_slider_pane_ParamLimits

0x80d1,	// (0x00094a8e) main_cset6_slider_pane

0x80e7,	// (0x00094aa4) main_cset6_text2_pane_ParamLimits

0x80e7,	// (0x00094aa4) main_cset6_text2_pane

0xc252,	// (0x00098c0f) main_cset6_text_pane

0xc25a,	// (0x00098c17) main_cset_list_pane_copy1_ParamLimits

0xc25a,	// (0x00098c17) main_cset_list_pane_copy1

0xc26a,	// (0x00098c27) scroll_pane_cp028_copy1

0x80f5,	// (0x00094ab2) cset_list_set_pane_copy1

0x8106,	// (0x00094ac3) aid_position_infowindow_above_copy1

0x810e,	// (0x00094acb) aid_position_infowindow_below_copy1

0x8116,	// (0x00094ad3) cset_list_set_pane_g1_copy1

0x811e,	// (0x00094adb) cset_list_set_pane_g3_copy1_ParamLimits

0x811e,	// (0x00094adb) cset_list_set_pane_g3_copy1

0x812d,	// (0x00094aea) cset_list_set_pane_t1_copy1_ParamLimits

0x812d,	// (0x00094aea) cset_list_set_pane_t1_copy1

0x9e93,	// (0x00096850) list_highlight_pane_cp021_copy1_ParamLimits

0x9e93,	// (0x00096850) list_highlight_pane_cp021_copy1

0xc273,	// (0x00098c30) cset6_slider_pane_ParamLimits

0xc273,	// (0x00098c30) cset6_slider_pane

0xc29f,	// (0x00098c5c) main_cset6_slider_pane_g1_ParamLimits

0xc29f,	// (0x00098c5c) main_cset6_slider_pane_g1

0x8142,	// (0x00094aff) main_cset6_slider_pane_g2_ParamLimits

0x8142,	// (0x00094aff) main_cset6_slider_pane_g2

0xc2c7,	// (0x00098c84) main_cset6_slider_pane_g3_ParamLimits

0xc2c7,	// (0x00098c84) main_cset6_slider_pane_g3

0x816a,	// (0x00094b27) main_cset6_slider_pane_g4_ParamLimits

0x816a,	// (0x00094b27) main_cset6_slider_pane_g4

0x8176,	// (0x00094b33) main_cset6_slider_pane_g5_ParamLimits

0x8176,	// (0x00094b33) main_cset6_slider_pane_g5

0xed4c,	// (0x0009b709) main_cset6_slider_pane_g7_ParamLimits

0xed4c,	// (0x0009b709) main_cset6_slider_pane_g7

0xed58,	// (0x0009b715) main_cset6_slider_pane_g8_ParamLimits

0xed58,	// (0x0009b715) main_cset6_slider_pane_g8

0x71c4,	// (0x00093b81) main_cset6_slider_pane_g9_ParamLimits

0x71c4,	// (0x00093b81) main_cset6_slider_pane_g9

0x71d0,	// (0x00093b8d) main_cset6_slider_pane_g10_ParamLimits

0x71d0,	// (0x00093b8d) main_cset6_slider_pane_g10

0x71dc,	// (0x00093b99) main_cset6_slider_pane_g11_ParamLimits

0x71dc,	// (0x00093b99) main_cset6_slider_pane_g11

0x71e8,	// (0x00093ba5) main_cset6_slider_pane_g12_ParamLimits

0x71e8,	// (0x00093ba5) main_cset6_slider_pane_g12

0x71f4,	// (0x00093bb1) main_cset6_slider_pane_g13_ParamLimits

0x71f4,	// (0x00093bb1) main_cset6_slider_pane_g13

0x7200,	// (0x00093bbd) main_cset6_slider_pane_g14_ParamLimits

0x7200,	// (0x00093bbd) main_cset6_slider_pane_g14

0x8182,	// (0x00094b3f) main_cset6_slider_pane_g15_ParamLimits

0x8182,	// (0x00094b3f) main_cset6_slider_pane_g15

0x7224,	// (0x00093be1) main_cset6_slider_pane_g16_ParamLimits

0x7224,	// (0x00093be1) main_cset6_slider_pane_g16

0x7230,	// (0x00093bed) main_cset6_slider_pane_g17_ParamLimits

0x7230,	// (0x00093bed) main_cset6_slider_pane_g17

0x0011,

0xfaa7,	// (0x0009c464) main_cset6_slider_pane_g_ParamLimits

0xfaa7,	// (0x0009c464) main_cset6_slider_pane_g

0xc2d3,	// (0x00098c90) main_cset6_slider_pane_t1_ParamLimits

0xc2d3,	// (0x00098c90) main_cset6_slider_pane_t1

0x81b2,	// (0x00094b6f) main_cset6_slider_pane_t2_ParamLimits

0x81b2,	// (0x00094b6f) main_cset6_slider_pane_t2

0x81dd,	// (0x00094b9a) main_cset6_slider_pane_t3_ParamLimits

0x81dd,	// (0x00094b9a) main_cset6_slider_pane_t3

0x8208,	// (0x00094bc5) main_cset6_slider_pane_t4_ParamLimits

0x8208,	// (0x00094bc5) main_cset6_slider_pane_t4

0x8233,	// (0x00094bf0) main_cset6_slider_pane_t5_ParamLimits

0x8233,	// (0x00094bf0) main_cset6_slider_pane_t5

0xc314,	// (0x00098cd1) main_cset6_slider_pane_t7_ParamLimits

0xc314,	// (0x00098cd1) main_cset6_slider_pane_t7

0x825e,	// (0x00094c1b) main_cset6_slider_pane_t8_ParamLimits

0x825e,	// (0x00094c1b) main_cset6_slider_pane_t8

0x8282,	// (0x00094c3f) main_cset6_slider_pane_t9_ParamLimits

0x8282,	// (0x00094c3f) main_cset6_slider_pane_t9

0x82a6,	// (0x00094c63) main_cset6_slider_pane_t10_ParamLimits

0x82a6,	// (0x00094c63) main_cset6_slider_pane_t10

0x82ca,	// (0x00094c87) main_cset6_slider_pane_t11_ParamLimits

0x82ca,	// (0x00094c87) main_cset6_slider_pane_t11

0xc34a,	// (0x00098d07) main_cset6_slider_pane_t14_ParamLimits

0xc34a,	// (0x00098d07) main_cset6_slider_pane_t14

0xc383,	// (0x00098d40) main_cset6_slider_pane_t15_ParamLimits

0xc383,	// (0x00098d40) main_cset6_slider_pane_t15

0x000b,

0xfacc,	// (0x0009c489) main_cset6_slider_pane_t_ParamLimits

0xfacc,	// (0x0009c489) main_cset6_slider_pane_t

0xc3bc,	// (0x00098d79) cset_slider_pane_g1_copy1

0xc3c5,	// (0x00098d82) cset_slider_pane_g2_copy1

0xc3ce,	// (0x00098d8b) cset_slider_pane_g3_copy1

0x0dbc,	// (0x0008d779) bg_popup_sub_pane_cp011_copy1

0xee8a,	// (0x0009b847) main_cset_text_pane_g1_copy1

0xee92,	// (0x0009b84f) main_cset_text_pane_t1_copy1

0xeea0,	// (0x0009b85d) main_cset_text_pane_t2_copy1

0xeeae,	// (0x0009b86b) main_cset_text_pane_t3_copy1

0xeebc,	// (0x0009b879) main_cset_text_pane_t4_copy1

0xeeca,	// (0x0009b887) main_cset_text_pane_t5_copy1

0xeed8,	// (0x0009b895) main_cset_text_pane_t6_copy1

0xeee6,	// (0x0009b8a3) main_cset_text_pane_t7_copy1

0x82ee,	// (0x00094cab) main_cset_text2_pane_t1_copy1

0x0dbc,	// (0x0008d779) main_ncimui_pane

0x48d4,	// (0x00091291) popup_query_ncimui_window_ParamLimits

0x48d4,	// (0x00091291) popup_query_ncimui_window

0xb598,	// (0x00097f55) field_cale_ev2_pane_g4_ParamLimits

0xb598,	// (0x00097f55) field_cale_ev2_pane_g4

0x6430,	// (0x00092ded) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6430,	// (0x00092ded) cell_video_dialer_keypad_pane_g2

0x0001,

0xf835,	// (0x0009c1f2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf835,	// (0x0009c1f2) cell_video_dialer_keypad_pane_g

0x6448,	// (0x00092e05) cell_video_dialer_keypad_pane_t1

0x0dbc,	// (0x0008d779) bg_popup_window_pane_cp012

0xe2b5,	// (0x0009ac72) heading_pane_cp06

0xc4c6,	// (0x00098e83) ncim_query_content_pane

0x0dbc,	// (0x0008d779) bg_popup_heading_pane_cp01

0xc4ce,	// (0x00098e8b) ncim_heading_pane_t1

0xc4dc,	// (0x00098e99) ncim_indicator_popup_pane

0xc4ee,	// (0x00098eab) ncim_query_button_pane

0xc502,	// (0x00098ebf) ncim_query_content_pane_t1

0xc514,	// (0x00098ed1) ncim_query_content_pane_t2

0x0005,

0xfb0b,	// (0x0009c4c8) ncim_query_content_pane_t

0xc54e,	// (0x00098f0b) ncim_query_list_pane

0xc560,	// (0x00098f1d) ncim_query_popup_pane

0xc4dc,	// (0x00098e99) ncim_indicator_popup_pane_ParamLimits

0x8403,	// (0x00094dc0) ncim_query_content_pane_g1_ParamLimits

0x8403,	// (0x00094dc0) ncim_query_content_pane_g1

0xc502,	// (0x00098ebf) ncim_query_content_pane_t1_ParamLimits

0xc514,	// (0x00098ed1) ncim_query_content_pane_t2_ParamLimits

0x840f,	// (0x00094dcc) ncim_query_content_pane_t3_ParamLimits

0x840f,	// (0x00094dcc) ncim_query_content_pane_t3

0x8437,	// (0x00094df4) ncim_query_content_pane_t4_ParamLimits

0x8437,	// (0x00094df4) ncim_query_content_pane_t4

0x845f,	// (0x00094e1c) ncim_query_content_pane_t5_ParamLimits

0x845f,	// (0x00094e1c) ncim_query_content_pane_t5

0xc526,	// (0x00098ee3) ncim_query_content_pane_t6_ParamLimits

0xc526,	// (0x00098ee3) ncim_query_content_pane_t6

0xfb0b,	// (0x0009c4c8) ncim_query_content_pane_t_ParamLimits

0xc54e,	// (0x00098f0b) ncim_query_list_pane_ParamLimits

0xc560,	// (0x00098f1d) ncim_query_popup_pane_ParamLimits

0xc574,	// (0x00098f31) wait_bar_pane_cp04

0x0dbc,	// (0x0008d779) input_focus_pane_cp011

0xc57c,	// (0x00098f39) ncim_query_popup_pane_t1

0xc58a,	// (0x00098f47) ncim_list_query_list_pane_ParamLimits

0xc58a,	// (0x00098f47) ncim_list_query_list_pane

0x0dbc,	// (0x0008d779) bg_button_pane_cp027

0xc597,	// (0x00098f54) ncim_query_button_pane_g1

0x0dbc,	// (0x0008d779) list_highlight_pane_cp012

0xc5a1,	// (0x00098f5e) ncim_list_query_list_pane_g1

0xc5a9,	// (0x00098f66) ncim_list_query_list_pane_t1

0xd9cf,	// (0x0009a38c) cam4_indicators_pane_g3_ParamLimits

0xd9cf,	// (0x0009a38c) cam4_indicators_pane_g3

0x6b33,	// (0x000934f0) vid4_indicators_pane_g5_ParamLimits

0x6b33,	// (0x000934f0) vid4_indicators_pane_g5

0xdadc,	// (0x0009a499) vid4_progress_pane_g5_ParamLimits

0xdadc,	// (0x0009a499) vid4_progress_pane_g5

0x831c,	// (0x00094cd9) main_ncimui_pane_g1

0x8372,	// (0x00094d2f) ncimui_group_query_pane_ParamLimits

0x8372,	// (0x00094d2f) ncimui_group_query_pane

0x83ae,	// (0x00094d6b) ncimui_list_pane_ParamLimits

0x83ae,	// (0x00094d6b) ncimui_list_pane

0x83cf,	// (0x00094d8c) ncimui_text_pane_ParamLimits

0x83cf,	// (0x00094d8c) ncimui_text_pane

0x8487,	// (0x00094e44) ncimui_text_pane_t1_ParamLimits

0x8487,	// (0x00094e44) ncimui_text_pane_t1

0xc5b7,	// (0x00098f74) ncimui_list_single_graphic_pane_ParamLimits

0xc5b7,	// (0x00098f74) ncimui_list_single_graphic_pane

0x84a5,	// (0x00094e62) ncimui_query_pane_ParamLimits

0x84a5,	// (0x00094e62) ncimui_query_pane

0x0dbc,	// (0x0008d779) list_highlight_pane_cp013

0xc5c7,	// (0x00098f84) ncim_list_query_list_pane_t1_copy1

0xc5a1,	// (0x00098f5e) ncim_list_single_graphic_pane_g1

0xc5d5,	// (0x00098f92) ncim_query_button_pane_cp01

0xc5e1,	// (0x00098f9e) ncim_query_entry_pane_ParamLimits

0xc5e1,	// (0x00098f9e) ncim_query_entry_pane

0xc5f4,	// (0x00098fb1) ncimui_query_pane_g1

0xc600,	// (0x00098fbd) ncimui_query_pane_t1_ParamLimits

0xc600,	// (0x00098fbd) ncimui_query_pane_t1

0x9e93,	// (0x00096850) input_focus_pane_cp012

0xc619,	// (0x00098fd6) ncim_query_entry_pane_t1

0xa612,	// (0x00096fcf) main_im_pane_ParamLimits

0x9e93,	// (0x00096850) main_mobtv_pane_ParamLimits

0x9e93,	// (0x00096850) main_mobtv_pane

0x819a,	// (0x00094b57) main_cset6_slider_pane_g18_ParamLimits

0x819a,	// (0x00094b57) main_cset6_slider_pane_g18

0x81a6,	// (0x00094b63) main_cset6_slider_pane_g19_ParamLimits

0x81a6,	// (0x00094b63) main_cset6_slider_pane_g19

0xc62b,	// (0x00098fe8) bg_main_mobtv_pane_ParamLimits

0xc62b,	// (0x00098fe8) bg_main_mobtv_pane

0x84b8,	// (0x00094e75) main_mobtv_info_pane

0x84c1,	// (0x00094e7e) main_mobtv_loading_pane_ParamLimits

0x84c1,	// (0x00094e7e) main_mobtv_loading_pane

0xc639,	// (0x00098ff6) main_mobtv_pg_channel_list_pane

0xc643,	// (0x00099000) main_mobtv_pg_hdr_pane

0x84ce,	// (0x00094e8b) main_mobtv_programe_curr_pane_ParamLimits

0x84ce,	// (0x00094e8b) main_mobtv_programe_curr_pane

0x84db,	// (0x00094e98) main_mobtv_programe_next_pane_ParamLimits

0x84db,	// (0x00094e98) main_mobtv_programe_next_pane

0xc64c,	// (0x00099009) popup_mobtv_noti_window

0xb2c7,	// (0x00097c84) main_tv_pg_hdr_pane_g1

0xc654,	// (0x00099011) main_tv_pg_hdr_pane_g2

0xc65c,	// (0x00099019) main_tv_pg_hdr_pane_g3

0xc664,	// (0x00099021) main_tv_pg_hdr_pane_g4

0xc66c,	// (0x00099029) main_tv_pg_hdr_pane_g5

0xc676,	// (0x00099033) main_tv_pg_hdr_pane_g6

0xc680,	// (0x0009903d) main_tv_pg_hdr_pane_g7

0xc68a,	// (0x00099047) main_tv_pg_hdr_pane_g8

0xc694,	// (0x00099051) main_tv_pg_hdr_pane_g9

0xc69e,	// (0x0009905b) main_tv_pg_hdr_pane_g10

0xc6a8,	// (0x00099065) main_tv_pg_hdr_pane_g11

0x000a,

0xfb18,	// (0x0009c4d5) main_tv_pg_hdr_pane_g

0xc6b2,	// (0x0009906f) main_tv_pg_hdr_pane_t1

0xc6c0,	// (0x0009907d) main_tv_pg_hdr_pane_t2

0xc6ce,	// (0x0009908b) main_tv_pg_hdr_pane_t3

0xc6de,	// (0x0009909b) main_tv_pg_hdr_pane_t4

0xc6ee,	// (0x000990ab) main_tv_pg_hdr_pane_t5

0x0004,

0xfb2f,	// (0x0009c4ec) main_tv_pg_hdr_pane_t

0xc6fe,	// (0x000990bb) single_mobtv_pg_channel_pane_ParamLimits

0xc6fe,	// (0x000990bb) single_mobtv_pg_channel_pane

0xc710,	// (0x000990cd) single_mobtv_pg_channel_table_pane

0xc719,	// (0x000990d6) single_mobtv_pg_channel_thumb_pane

0xc722,	// (0x000990df) single_tv_pg_channel_pane_g1

0xc72b,	// (0x000990e8) single_tv_pg_channel_pane_g2

0x0001,

0xfb3a,	// (0x0009c4f7) single_tv_pg_channel_pane_g

0xb533,	// (0x00097ef0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb533,	// (0x00097ef0) bg_single_mobtv_pg_channel_thumb_pane

0xc734,	// (0x000990f1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc734,	// (0x000990f1) single_mobtv_pg_channel_thumb_pane_g1

0xc742,	// (0x000990ff) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc742,	// (0x000990ff) single_mobtv_pg_channel_thumb_pane_g2

0xc74e,	// (0x0009910b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc74e,	// (0x0009910b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb3f,	// (0x0009c4fc) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb3f,	// (0x0009c4fc) single_mobtv_pg_channel_thumb_pane_g

0xc75a,	// (0x00099117) single_mobtv_pg_channel_thumb_pane_t1

0xc768,	// (0x00099125) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb46,	// (0x0009c503) single_mobtv_pg_channel_thumb_pane_t

0xb2c7,	// (0x00097c84) bg_single_mobtv_pg_channel_table_pane_g1

0xb2c7,	// (0x00097c84) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf681,	// (0x0009c03e) bg_single_mobtv_pg_channel_table_pane_g

0xc776,	// (0x00099133) single_mobtv_pg_channel_table_pane_t1

0xc784,	// (0x00099141) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb4b,	// (0x0009c508) single_mobtv_pg_channel_table_pane_t

0x84f0,	// (0x00094ead) main_mobtv_info_pane_g1_ParamLimits

0x84f0,	// (0x00094ead) main_mobtv_info_pane_g1

0x850e,	// (0x00094ecb) main_mobtv_info_pane_t1_ParamLimits

0x850e,	// (0x00094ecb) main_mobtv_info_pane_t1

0x8586,	// (0x00094f43) main_mobtv_info_pane_t2_ParamLimits

0x8586,	// (0x00094f43) main_mobtv_info_pane_t2

0x0002,

0xfb55,	// (0x0009c512) main_mobtv_info_pane_t_ParamLimits

0xfb55,	// (0x0009c512) main_mobtv_info_pane_t

0x8615,	// (0x00094fd2) wait_bar_pane_cp05

0x8627,	// (0x00094fe4) main_mobtv_loading_pane_g1_ParamLimits

0x8627,	// (0x00094fe4) main_mobtv_loading_pane_g1

0x863a,	// (0x00094ff7) main_mobtv_loading_pane_g2_ParamLimits

0x863a,	// (0x00094ff7) main_mobtv_loading_pane_g2

0x8646,	// (0x00095003) main_mobtv_loading_pane_g3_ParamLimits

0x8646,	// (0x00095003) main_mobtv_loading_pane_g3

0x0002,

0xfb5c,	// (0x0009c519) main_mobtv_loading_pane_g_ParamLimits

0xfb5c,	// (0x0009c519) main_mobtv_loading_pane_g

0xc792,	// (0x0009914f) main_mobtv_loading_pane_t1_ParamLimits

0xc792,	// (0x0009914f) main_mobtv_loading_pane_t1

0xc7aa,	// (0x00099167) main_mobtv_loading_pane_t2_ParamLimits

0xc7aa,	// (0x00099167) main_mobtv_loading_pane_t2

0x0001,

0xfb63,	// (0x0009c520) main_mobtv_loading_pane_t_ParamLimits

0xfb63,	// (0x0009c520) main_mobtv_loading_pane_t

0x8659,	// (0x00095016) wait_bar_pane_cp06_ParamLimits

0x8659,	// (0x00095016) wait_bar_pane_cp06

0xc7ce,	// (0x0009918b) main_mobtv_programe_curr_pane_t1

0xc7dc,	// (0x00099199) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb68,	// (0x0009c525) main_mobtv_programe_curr_pane_t

0xc7ea,	// (0x000991a7) main_mobtv_programe_next_pane_t1

0xc7f8,	// (0x000991b5) main_mobtv_programe_next_pane_t2

0xc806,	// (0x000991c3) main_mobtv_programe_next_pane_t3

0x0002,

0xfb6d,	// (0x0009c52a) main_mobtv_programe_next_pane_t

0x0dbc,	// (0x0008d779) bg_popup_mobtv_noti_window_pane

0xc814,	// (0x000991d1) popup_mobtv_noti_window_g1

0xc81c,	// (0x000991d9) popup_mobtv_noti_window_t1

0xc82a,	// (0x000991e7) popup_mobtv_noti_window_t2

0x0001,

0xfb74,	// (0x0009c531) popup_mobtv_noti_window_t

0xb2c7,	// (0x00097c84) bg_popup_mobtv_noti_window_pane_g1

0x0dbc,	// (0x0008d779) sc_clock_pane

0x0dbc,	// (0x0008d779) main_fs_bigclock_pane

0x7da6,	// (0x00094763) blid2_tripm_pane_t4_ParamLimits

0x7da6,	// (0x00094763) blid2_tripm_pane_t4

0x8668,	// (0x00095025) sc_clock_pane_g1_ParamLimits

0x8668,	// (0x00095025) sc_clock_pane_g1

0x867a,	// (0x00095037) sc_clock_pane_t1_ParamLimits

0x867a,	// (0x00095037) sc_clock_pane_t1

0x869c,	// (0x00095059) sc_clock_pane_t2_ParamLimits

0x869c,	// (0x00095059) sc_clock_pane_t2

0x86b4,	// (0x00095071) sc_clock_pane_t3_ParamLimits

0x86b4,	// (0x00095071) sc_clock_pane_t3

0x0004,

0xfb79,	// (0x0009c536) sc_clock_pane_t_ParamLimits

0xfb79,	// (0x0009c536) sc_clock_pane_t

0x95cb,	// (0x00095f88) main_fs_bigclock_indicator_pane_ParamLimits

0x95cb,	// (0x00095f88) main_fs_bigclock_indicator_pane

0xb503,	// (0x00097ec0) main_fs_bigclock_pane_g1_ParamLimits

0xb503,	// (0x00097ec0) main_fs_bigclock_pane_g1

0x95d7,	// (0x00095f94) main_fs_bigclock_pane_t1_ParamLimits

0x95d7,	// (0x00095f94) main_fs_bigclock_pane_t1

0x95e9,	// (0x00095fa6) main_fs_bigclock_pane_t2_ParamLimits

0x95e9,	// (0x00095fa6) main_fs_bigclock_pane_t2

0x95fd,	// (0x00095fba) main_fs_bigclock_pane_t3_ParamLimits

0x95fd,	// (0x00095fba) main_fs_bigclock_pane_t3

0x0002,

0xfd65,	// (0x0009c722) main_fs_bigclock_pane_t_ParamLimits

0xfd65,	// (0x0009c722) main_fs_bigclock_pane_t

0xd2de,	// (0x00099c9b) main_fs_bigclock_indicator_pane_g1

0xc4f6,	// (0x00098eb3) ncim_query_content_pane_g2_ParamLimits

0xc4f6,	// (0x00098eb3) ncim_query_content_pane_g2

0x0001,

0xfb06,	// (0x0009c4c3) ncim_query_content_pane_g_ParamLimits

0xfb06,	// (0x0009c4c3) ncim_query_content_pane_g

0x86cd,	// (0x0009508a) sc_clock_pane_t4_ParamLimits

0x86cd,	// (0x0009508a) sc_clock_pane_t4

0x9e93,	// (0x00096850) main_radioblah_pane

0xbca8,	// (0x00098665) cell_call4_button_pane_t1_copy1_ParamLimits

0xbca8,	// (0x00098665) cell_call4_button_pane_t1_copy1

0x8324,	// (0x00094ce1) main_ncimui_pane_t1_ParamLimits

0x8324,	// (0x00094ce1) main_ncimui_pane_t1

0x833e,	// (0x00094cfb) main_ncimui_pane_t2_ParamLimits

0x833e,	// (0x00094cfb) main_ncimui_pane_t2

0x0002,

0xfaff,	// (0x0009c4bc) main_ncimui_pane_t_ParamLimits

0xfaff,	// (0x0009c4bc) main_ncimui_pane_t

0xc838,	// (0x000991f5) main_radioblah_anim_pane_ParamLimits

0xc838,	// (0x000991f5) main_radioblah_anim_pane

0xc849,	// (0x00099206) main_radioblah_info_pane_ParamLimits

0xc849,	// (0x00099206) main_radioblah_info_pane

0xc85d,	// (0x0009921a) main_radioblah_pane_t1_ParamLimits

0xc85d,	// (0x0009921a) main_radioblah_pane_t1

0xc879,	// (0x00099236) main_radioblah_pane_t2_ParamLimits

0xc879,	// (0x00099236) main_radioblah_pane_t2

0x0003,

0xfb9a,	// (0x0009c557) main_radioblah_pane_t_ParamLimits

0xfb9a,	// (0x0009c557) main_radioblah_pane_t

0x8899,	// (0x00095256) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8899,	// (0x00095256) main_radioblah_rocker_ctrl_pane

0xc8c1,	// (0x0009927e) main_radioblah_info_pane_t1_ParamLimits

0xc8c1,	// (0x0009927e) main_radioblah_info_pane_t1

0x88f1,	// (0x000952ae) main_radioblah_info_pane_t2_ParamLimits

0x88f1,	// (0x000952ae) main_radioblah_info_pane_t2

0x0003,

0xfba3,	// (0x0009c560) main_radioblah_info_pane_t_ParamLimits

0xfba3,	// (0x0009c560) main_radioblah_info_pane_t

0xb2c7,	// (0x00097c84) main_radioblah_rocker_ctrl_pane_g1

0x89a1,	// (0x0009535e) main_radioblah_rocker_ctrl_pane_g2

0x89a9,	// (0x00095366) main_radioblah_rocker_ctrl_pane_g3

0x89b1,	// (0x0009536e) main_radioblah_rocker_ctrl_pane_g4

0x89b9,	// (0x00095376) main_radioblah_rocker_ctrl_pane_g5

0x89c1,	// (0x0009537e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbac,	// (0x0009c569) main_radioblah_rocker_ctrl_pane_g

0x82ee,	// (0x00094cab) main_cset_text2_pane_t1_copy1_ParamLimits

0xd991,	// (0x0009a34e) cam4_image_uncrop_qvga_pane

0xd9f8,	// (0x0009a3b5) vid4_image_uncrop_qcif_pane

0xdb3d,	// (0x0009a4fa) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb3d,	// (0x0009a4fa) cam6_image_uncrop_qvga_pane

0xc135,	// (0x00098af2) vid6_image_uncrop_qcif_pane_ParamLimits

0xc135,	// (0x00098af2) vid6_image_uncrop_qcif_pane

0x0dbc,	// (0x0008d779) bg_popup_preview_window_pane_cp03

0xc4a8,	// (0x00098e65) list_cset_text2_pane

0xc4b0,	// (0x00098e6d) main_cset6_text2_pane_g1

0xc4b8,	// (0x00098e75) main_cset6_text2_pane_t1

0x89c9,	// (0x00095386) list_cset_text2_pane_t1_ParamLimits

0x89c9,	// (0x00095386) list_cset_text2_pane_t1

0x9e93,	// (0x00096850) main_radioblah_pane_ParamLimits

0x8601,	// (0x00094fbe) main_mobtv_info_pane_t3_ParamLimits

0x8601,	// (0x00094fbe) main_mobtv_info_pane_t3

0x8887,	// (0x00095244) main_radioblah_pane_g1

0x88c1,	// (0x0009527e) main_radioblah_info_pane_g1

0x8946,	// (0x00095303) main_radioblah_info_pane_t3_ParamLimits

0x8946,	// (0x00095303) main_radioblah_info_pane_t3

0x2a17,	// (0x0008f3d4) highlight_cell_cale_month_pane_ParamLimits

0x2a17,	// (0x0008f3d4) highlight_cell_cale_month_pane

0x0dbc,	// (0x0008d779) main_phob_fisheye_pane

0xb64d,	// (0x0009800a) scroll_pane_cp0031_ParamLimits

0xb64d,	// (0x0009800a) scroll_pane_cp0031

0xc243,	// (0x00098c00) wait_bar_pane_cp08_ParamLimits

0x80f5,	// (0x00094ab2) cset_list_set_pane_copy1_ParamLimits

0xc8fb,	// (0x000992b8) highlight_cell_cale_month_pane_g1

0x89e2,	// (0x0009539f) highlight_cell_cale_month_pane_t1

0xf0be,	// (0x0009ba7b) list_gen_pane_cp01

0xed37,	// (0x0009b6f4) scroll_pane_01

0x89f0,	// (0x000953ad) list_single_double_fisheye_pane

0x89f9,	// (0x000953b6) list_double_fisheye_pane_g1_ParamLimits

0x89f9,	// (0x000953b6) list_double_fisheye_pane_g1

0x8a05,	// (0x000953c2) list_double_fisheye_pane_g2_ParamLimits

0x8a05,	// (0x000953c2) list_double_fisheye_pane_g2

0x8a19,	// (0x000953d6) list_double_fisheye_pane_g3_ParamLimits

0x8a19,	// (0x000953d6) list_double_fisheye_pane_g3

0x0004,

0xfbb9,	// (0x0009c576) list_double_fisheye_pane_g_ParamLimits

0xfbb9,	// (0x0009c576) list_double_fisheye_pane_g

0x8a42,	// (0x000953ff) list_double_fisheye_pane_t1_ParamLimits

0x8a42,	// (0x000953ff) list_double_fisheye_pane_t1

0x8a5d,	// (0x0009541a) list_double_fisheye_pane_t2_ParamLimits

0x8a5d,	// (0x0009541a) list_double_fisheye_pane_t2

0x0001,

0xfbc4,	// (0x0009c581) list_double_fisheye_pane_t_ParamLimits

0xfbc4,	// (0x0009c581) list_double_fisheye_pane_t

0x0dbc,	// (0x0008d779) main_call5_pane

0x86f8,	// (0x000950b5) sc_swipe_pane_ParamLimits

0x86f8,	// (0x000950b5) sc_swipe_pane

0x8a92,	// (0x0009544f) call5_image_pane_ParamLimits

0x8a92,	// (0x0009544f) call5_image_pane

0x8aaf,	// (0x0009546c) call5_swipe_1_pane_ParamLimits

0x8aaf,	// (0x0009546c) call5_swipe_1_pane

0x8ac2,	// (0x0009547f) call5_swipe_2_pane_ParamLimits

0x8ac2,	// (0x0009547f) call5_swipe_2_pane

0x8aed,	// (0x000954aa) popup_call5_audio_first_window_ParamLimits

0x8aed,	// (0x000954aa) popup_call5_audio_first_window

0xb533,	// (0x00097ef0) call5_swipe_1_pane_g1_ParamLimits

0xb533,	// (0x00097ef0) call5_swipe_1_pane_g1

0xc903,	// (0x000992c0) call5_swipe_1_pane_g2_ParamLimits

0xc903,	// (0x000992c0) call5_swipe_1_pane_g2

0x0001,

0xfbc9,	// (0x0009c586) call5_swipe_1_pane_g_ParamLimits

0xfbc9,	// (0x0009c586) call5_swipe_1_pane_g

0xc90f,	// (0x000992cc) call5_swipe_1_pane_t1_ParamLimits

0xc90f,	// (0x000992cc) call5_swipe_1_pane_t1

0xb533,	// (0x00097ef0) call5_swipe_2_pane_g1_ParamLimits

0xb533,	// (0x00097ef0) call5_swipe_2_pane_g1

0xc924,	// (0x000992e1) call5_swipe_2_pane_g2_ParamLimits

0xc924,	// (0x000992e1) call5_swipe_2_pane_g2

0x0001,

0xfbce,	// (0x0009c58b) call5_swipe_2_pane_g_ParamLimits

0xfbce,	// (0x0009c58b) call5_swipe_2_pane_g

0xc930,	// (0x000992ed) call5_swipe_2_pane_t1_ParamLimits

0xc930,	// (0x000992ed) call5_swipe_2_pane_t1

0xc945,	// (0x00099302) sc_swipe_pane_g1_ParamLimits

0xc945,	// (0x00099302) sc_swipe_pane_g1

0xc952,	// (0x0009930f) sc_swipe_pane_g2_ParamLimits

0xc952,	// (0x0009930f) sc_swipe_pane_g2

0x0001,

0xfbd3,	// (0x0009c590) sc_swipe_pane_g_ParamLimits

0xfbd3,	// (0x0009c590) sc_swipe_pane_g

0xc95e,	// (0x0009931b) sc_swipe_pane_t1_ParamLimits

0xc95e,	// (0x0009931b) sc_swipe_pane_t1

0x0dbc,	// (0x0008d779) main_cmail_launcher_pane

0x8afe,	// (0x000954bb) aid_size_cell_cmail_l_ParamLimits

0x8afe,	// (0x000954bb) aid_size_cell_cmail_l

0x8b18,	// (0x000954d5) grid_cmail_l_pane_ParamLimits

0x8b18,	// (0x000954d5) grid_cmail_l_pane

0x8b33,	// (0x000954f0) cell_cmail_l_pane_ParamLimits

0x8b33,	// (0x000954f0) cell_cmail_l_pane

0x8b59,	// (0x00095516) cell_cmail_l_pane_g1_ParamLimits

0x8b59,	// (0x00095516) cell_cmail_l_pane_g1

0x8b65,	// (0x00095522) cell_cmail_l_pane_t1_ParamLimits

0x8b65,	// (0x00095522) cell_cmail_l_pane_t1

0xc973,	// (0x00099330) cell_cmail_l_pane_t2_ParamLimits

0xc973,	// (0x00099330) cell_cmail_l_pane_t2

0x0001,

0xfbd8,	// (0x0009c595) cell_cmail_l_pane_t_ParamLimits

0xfbd8,	// (0x0009c595) cell_cmail_l_pane_t

0x9e93,	// (0x00096850) grid_highlight_pane_cp018_ParamLimits

0x9e93,	// (0x00096850) grid_highlight_pane_cp018

0x0edc,	// (0x0008d899) main2_pane_ParamLimits

0x0edc,	// (0x0008d899) main2_pane

0xa6cf,	// (0x0009708c) popup_sp_fs_action_menu_bg_pane_g1

0xa6d7,	// (0x00097094) popup_sp_fs_action_menu_bg_pane_g2

0xa6df,	// (0x0009709c) popup_sp_fs_action_menu_bg_pane_g3

0xa6e7,	// (0x000970a4) popup_sp_fs_action_menu_bg_pane_g4

0xa6ef,	// (0x000970ac) popup_sp_fs_action_menu_bg_pane_g5

0xa6f7,	// (0x000970b4) popup_sp_fs_action_menu_bg_pane_g6

0xa6ff,	// (0x000970bc) popup_sp_fs_action_menu_bg_pane_g7

0xa707,	// (0x000970c4) popup_sp_fs_action_menu_bg_pane_g8

0xa70f,	// (0x000970cc) popup_sp_fs_action_menu_bg_pane_g9

0xa717,	// (0x000970d4) popup_sp_fs_action_menu_bg_pane_g10

0xa717,	// (0x000970d4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009bb69) popup_sp_fs_action_menu_bg_pane_g

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g3_g1

0x1c80,	// (0x0008e63d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_t3_g3_g2

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0009bc19) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0009bc19) list_medium_line_x2_t3_g3_g

0x1c98,	// (0x0008e655) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c98,	// (0x0008e655) list_medium_line_x2_t3_g3_t1

0x1cad,	// (0x0008e66a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cad,	// (0x0008e66a) list_medium_line_x2_t3_g3_t2

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0009bc20) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0009bc20) list_medium_line_x2_t3_g3_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g2_g1

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0009bc27) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0009bc27) list_medium_line_x2_t3_g2_g

0x1cd6,	// (0x0008e693) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1cd6,	// (0x0008e693) list_medium_line_x2_t3_g2_t1

0x1cec,	// (0x0008e6a9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1cec,	// (0x0008e6a9) list_medium_line_x2_t3_g2_t2

0x1cfe,	// (0x0008e6bb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cfe,	// (0x0008e6bb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0009bc2c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0009bc2c) list_medium_line_x2_t3_g2_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t4_g4_g1

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t4_g4_g2

0x1c80,	// (0x0008e63d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_t4_g4_g3

0x1d27,	// (0x0008e6e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d27,	// (0x0008e6e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0009bc33) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0009bc33) list_medium_line_x2_t4_g4_g

0x1d33,	// (0x0008e6f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d33,	// (0x0008e6f0) list_medium_line_x2_t4_g4_t1

0x1d4d,	// (0x0008e70a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d4d,	// (0x0008e70a) list_medium_line_x2_t4_g4_t2

0x1d63,	// (0x0008e720) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d63,	// (0x0008e720) list_medium_line_x2_t4_g4_t3

0x1d78,	// (0x0008e735) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d78,	// (0x0008e735) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0009bc3c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0009bc3c) list_medium_line_x2_t4_g4_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g4_g1

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t2_g4_g2

0x1c80,	// (0x0008e63d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_t2_g4_g3

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0009bca3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0009bca3) list_medium_line_x2_t2_g4_g

0x2a35,	// (0x0008f3f2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2a35,	// (0x0008f3f2) list_medium_line_x2_t2_g4_t1

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0009bcac) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0009bcac) list_medium_line_x2_t2_g4_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g3_g1

0x1c80,	// (0x0008e63d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_t2_g3_g2

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0009bc19) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0009bc19) list_medium_line_x2_t2_g3_g

0x2a4a,	// (0x0008f407) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a4a,	// (0x0008f407) list_medium_line_x2_t2_g3_t1

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0009bcb1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0009bcb1) list_medium_line_x2_t2_g3_t

0x2b70,	// (0x0008f52d) main_sp_fs_list_pane_ParamLimits

0x2b70,	// (0x0008f52d) main_sp_fs_list_pane

0x2b7c,	// (0x0008f539) sp_fs_scroll_pane_ParamLimits

0x2b7c,	// (0x0008f539) sp_fs_scroll_pane

0x2b88,	// (0x0008f545) list_medium_line_x2_t3_t1

0x2b98,	// (0x0008f555) list_medium_line_x2_t3_t2

0x2ba6,	// (0x0008f563) list_medium_line_x2_t3_t3

0x0002,

0xf312,	// (0x0009bccf) list_medium_line_x2_t3_t

0x2bb4,	// (0x0008f571) list_medium_line_x3_t4_t1

0x2bc4,	// (0x0008f581) list_medium_line_x3_t4_t2

0x2bd2,	// (0x0008f58f) list_medium_line_x3_t4_t3

0x2ba6,	// (0x0008f563) list_medium_line_x3_t4_t4

0x0003,

0xf319,	// (0x0009bcd6) list_medium_line_x3_t4_t

0x2be0,	// (0x0008f59d) list_medium_line_x4_t5_t1

0x2bf0,	// (0x0008f5ad) list_medium_line_x4_t5_t2

0x2bd2,	// (0x0008f58f) list_medium_line_x4_t5_t3

0x2bfe,	// (0x0008f5bb) list_medium_line_x4_t5_t4

0x2ba6,	// (0x0008f563) list_medium_line_x4_t5_t5

0x0004,

0xf322,	// (0x0009bcdf) list_medium_line_x4_t5_t

0x1c74,	// (0x0008e631) list_medium_line_t4_g4_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_t4_g4_g1

0x1d27,	// (0x0008e6e4) list_medium_line_t4_g4_g2_ParamLimits

0x1d27,	// (0x0008e6e4) list_medium_line_t4_g4_g2

0x2c0c,	// (0x0008f5c9) list_medium_line_t4_g4_g3_ParamLimits

0x2c0c,	// (0x0008f5c9) list_medium_line_t4_g4_g3

0x1c8c,	// (0x0008e649) list_medium_line_t4_g4_g4_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_t4_g4_g4

0x0003,

0xf32d,	// (0x0009bcea) list_medium_line_t4_g4_g_ParamLimits

0xf32d,	// (0x0009bcea) list_medium_line_t4_g4_g

0x2c18,	// (0x0008f5d5) list_medium_line_t4_g4_t1_ParamLimits

0x2c18,	// (0x0008f5d5) list_medium_line_t4_g4_t1

0x2c2d,	// (0x0008f5ea) list_medium_line_t4_g4_t2_ParamLimits

0x2c2d,	// (0x0008f5ea) list_medium_line_t4_g4_t2

0x2c42,	// (0x0008f5ff) list_medium_line_t4_g4_t3_ParamLimits

0x2c42,	// (0x0008f5ff) list_medium_line_t4_g4_t3

0x1cc1,	// (0x0008e67e) list_medium_line_t4_g4_t4_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_t4_g4_t4

0x0003,

0xf336,	// (0x0009bcf3) list_medium_line_t4_g4_t_ParamLimits

0xf336,	// (0x0009bcf3) list_medium_line_t4_g4_t

0x2d1a,	// (0x0008f6d7) chi_dic_find_pane_g1

0x46a6,	// (0x00091063) main_tport_pane

0xbdcf,	// (0x0009878c) list_medium_line_plain_t1

0xbddd,	// (0x0009879a) list_medium_line_t2_g2_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t2_g2_g1

0xbde9,	// (0x000987a6) list_medium_line_t2_g2_g2_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_t2_g2_g2

0x0001,

0xf96c,	// (0x0009c329) list_medium_line_t2_g2_g_ParamLimits

0xf96c,	// (0x0009c329) list_medium_line_t2_g2_g

0x757a,	// (0x00093f37) list_medium_line_t2_g2_t1_ParamLimits

0x757a,	// (0x00093f37) list_medium_line_t2_g2_t1

0x7594,	// (0x00093f51) list_medium_line_t2_g2_t2_ParamLimits

0x7594,	// (0x00093f51) list_medium_line_t2_g2_t2

0x0001,

0xf971,	// (0x0009c32e) list_medium_line_t2_g2_t_ParamLimits

0xf971,	// (0x0009c32e) list_medium_line_t2_g2_t

0xbe91,	// (0x0009884e) aid_sp_fs_list_icon_a_sm

0xbe99,	// (0x00098856) aid_sp_fs_list_icon_d

0xbea1,	// (0x0009885e) aid_sp_fs_text_primary

0xbeaa,	// (0x00098867) aid_sp_fs_text_secondary

0xbeb3,	// (0x00098870) list_medium_line

0xbeb3,	// (0x00098870) list_medium_line_g2

0xbeb3,	// (0x00098870) list_medium_line_g3

0xbeb3,	// (0x00098870) list_medium_line_plain

0xbeb3,	// (0x00098870) list_medium_line_plain_t2

0xbeb3,	// (0x00098870) list_medium_line_plain_t3

0xbeb3,	// (0x00098870) list_medium_line_right_icon

0xbeb3,	// (0x00098870) list_medium_line_right_iconx2

0xbeb3,	// (0x00098870) list_medium_line_t2

0xbeb3,	// (0x00098870) list_medium_line_t2_g2

0xbeb3,	// (0x00098870) list_medium_line_t2_g3

0xbeb3,	// (0x00098870) list_medium_line_t2_right_icon

0xbeb3,	// (0x00098870) list_medium_line_t2_right_iconx2

0xbeb3,	// (0x00098870) list_medium_line_t3

0xbeb3,	// (0x00098870) list_medium_line_t3_g2

0xbeb3,	// (0x00098870) list_medium_line_t3_g3

0xbeb3,	// (0x00098870) list_medium_line_t3_right_iconx2

0xbebc,	// (0x00098879) list_medium_line_t4_g4

0xbec5,	// (0x00098882) list_medium_line_x2

0xbec5,	// (0x00098882) list_medium_line_x2_t2_g2

0xbec5,	// (0x00098882) list_medium_line_x2_t2_g3

0xbec5,	// (0x00098882) list_medium_line_x2_t2_g4

0xbec5,	// (0x00098882) list_medium_line_x2_t3

0xbec5,	// (0x00098882) list_medium_line_x2_t3_g2

0xbec5,	// (0x00098882) list_medium_line_x2_t3_g3

0xbec5,	// (0x00098882) list_medium_line_x2_t3_g4

0xbec5,	// (0x00098882) list_medium_line_x2_t4_g2

0xbec5,	// (0x00098882) list_medium_line_x2_t4_g4

0xbece,	// (0x0009888b) list_medium_line_x3

0xbece,	// (0x0009888b) list_medium_line_x3_t4

0xbece,	// (0x0009888b) list_medium_line_x3_t4_g4

0xbebc,	// (0x00098879) list_medium_line_x4_t4

0xbebc,	// (0x00098879) list_medium_line_x4_t4_g7

0xbebc,	// (0x00098879) list_medium_line_x4_t5

0xbed7,	// (0x00098894) list_single_fs_dyc_pane_ParamLimits

0xbed7,	// (0x00098894) list_single_fs_dyc_pane

0x1c74,	// (0x0008e631) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x4_t4_g7_g1

0xc3d7,	// (0x00098d94) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc3d7,	// (0x00098d94) list_medium_line_x4_t4_g7_g2

0xc3e3,	// (0x00098da0) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc3e3,	// (0x00098da0) list_medium_line_x4_t4_g7_g3

0xc3f2,	// (0x00098daf) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc3f2,	// (0x00098daf) list_medium_line_x4_t4_g7_g4

0xc3fe,	// (0x00098dbb) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc3fe,	// (0x00098dbb) list_medium_line_x4_t4_g7_g5

0xc40d,	// (0x00098dca) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc40d,	// (0x00098dca) list_medium_line_x4_t4_g7_g6

0xc41c,	// (0x00098dd9) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc41c,	// (0x00098dd9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfae5,	// (0x0009c4a2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfae5,	// (0x0009c4a2) list_medium_line_x4_t4_g7_g

0xc428,	// (0x00098de5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc428,	// (0x00098de5) list_medium_line_x4_t4_g7_t1

0xc43d,	// (0x00098dfa) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc43d,	// (0x00098dfa) list_medium_line_x4_t4_g7_t2

0xc452,	// (0x00098e0f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc452,	// (0x00098e0f) list_medium_line_x4_t4_g7_t3

0xc467,	// (0x00098e24) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc467,	// (0x00098e24) list_medium_line_x4_t4_g7_t4

0xc479,	// (0x00098e36) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc479,	// (0x00098e36) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaf4,	// (0x0009c4b1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaf4,	// (0x0009c4b1) list_medium_line_x4_t4_g7_t

0xc48b,	// (0x00098e48) list_single_dyc_row_pane_ParamLimits

0xc48b,	// (0x00098e48) list_single_dyc_row_pane

0x8a7f,	// (0x0009543c) call5_gesture_pane_ParamLimits

0x8a7f,	// (0x0009543c) call5_gesture_pane

0x8ad5,	// (0x00095492) call5_windows_pane_ParamLimits

0x8ad5,	// (0x00095492) call5_windows_pane

0x8b7b,	// (0x00095538) call5_swipe_1_pane_cp_ParamLimits

0x8b7b,	// (0x00095538) call5_swipe_1_pane_cp

0x8b87,	// (0x00095544) call5_swipe_2_pane_cp_ParamLimits

0x8b87,	// (0x00095544) call5_swipe_2_pane_cp

0xe52f,	// (0x0009aeec) call5_image_pane_cp

0x8b93,	// (0x00095550) popup_call5_audio_first_window_cp_ParamLimits

0x8b93,	// (0x00095550) popup_call5_audio_first_window_cp

0xc945,	// (0x00099302) call5_swipe_1_pane_g1_cp_ParamLimits

0xc945,	// (0x00099302) call5_swipe_1_pane_g1_cp

0xc985,	// (0x00099342) call5_swipe_1_pane_g2_cp

0xc95e,	// (0x0009931b) call5_swipe_1_pane_t1_cp_ParamLimits

0xc95e,	// (0x0009931b) call5_swipe_1_pane_t1_cp

0xc945,	// (0x00099302) call5_swipe_2_pane_g1_cp_ParamLimits

0xc945,	// (0x00099302) call5_swipe_2_pane_g1_cp

0xc98d,	// (0x0009934a) call5_swipe_2_pane_g2_cp

0xc995,	// (0x00099352) call5_swipe_2_pane_t1_cp_ParamLimits

0xc995,	// (0x00099352) call5_swipe_2_pane_t1_cp

0x9e93,	// (0x00096850) main_sp_fs_email_pane

0xc9aa,	// (0x00099367) main_sp_fs_listscroll_pane_te

0xc9b3,	// (0x00099370) popup_sp_fs_action_menu_pane_ParamLimits

0xc9b3,	// (0x00099370) popup_sp_fs_action_menu_pane

0xb2c7,	// (0x00097c84) bg_sp_fs_ctrlbar_pane_g1

0xc9f7,	// (0x000993b4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca00,	// (0x000993bd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca09,	// (0x000993c6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb2c7,	// (0x00097c84) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbdd,	// (0x0009c59a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb0ac,	// (0x00097a69) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb0ac,	// (0x00097a69) bg_sp_fs_ctrlbar_ddmenu_pane

0xca12,	// (0x000993cf) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xca12,	// (0x000993cf) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca1e,	// (0x000993db) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca1e,	// (0x000993db) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe6,	// (0x0009c5a3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe6,	// (0x0009c5a3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca2a,	// (0x000993e7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca2a,	// (0x000993e7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xca44,	// (0x00099401) list_medium_line_t2_right_icon_g1

0x8ba1,	// (0x0009555e) list_medium_line_t2_right_icon_t1

0x8bb1,	// (0x0009556e) list_medium_line_t2_right_icon_t2

0x0001,

0xfbeb,	// (0x0009c5a8) list_medium_line_t2_right_icon_t

0xadc1,	// (0x0009777e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xadc1,	// (0x0009777e) bg_sp_fs_ctrlbar_pane

0x8c0b,	// (0x000955c8) main_sp_fs_ctrlbar_button_pane_cp01

0x8c15,	// (0x000955d2) main_sp_fs_ctrlbar_ddmenu_pane

0xca84,	// (0x00099441) main_sp_fs_ctrlbar_pane_g1

0xca90,	// (0x0009944d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfbf0,	// (0x0009c5ad) main_sp_fs_ctrlbar_pane_g

0xca9c,	// (0x00099459) main_sp_fs_ctrlbar_pane_t1

0x8c1f,	// (0x000955dc) main_sp_fs_ctrlbar_pane

0x8c43,	// (0x00095600) main_sp_fs_listscroll_pane_te_cp01

0x8c63,	// (0x00095620) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8c63,	// (0x00095620) popup_sp_fs_action_menu_pane_cp01

0x9e93,	// (0x00096850) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9e93,	// (0x00096850) bg_sp_fs_highlight_list_pane_cp01

0xcab1,	// (0x0009946e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcab1,	// (0x0009946e) sp_fs_action_menu_list_gene_pane_g1

0xcac0,	// (0x0009947d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcac0,	// (0x0009947d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbf5,	// (0x0009c5b2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbf5,	// (0x0009c5b2) sp_fs_action_menu_list_gene_pane_g

0xcacd,	// (0x0009948a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcacd,	// (0x0009948a) sp_fs_action_menu_list_gene_pane_t1

0xcae5,	// (0x000994a2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcae5,	// (0x000994a2) sp_fs_action_menu_list_gene_pane

0xcb06,	// (0x000994c3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb06,	// (0x000994c3) popup_sp_fs_action_menu_bg_pane

0xcb14,	// (0x000994d1) sp_fs_action_menu_list_pane_ParamLimits

0xcb14,	// (0x000994d1) sp_fs_action_menu_list_pane

0xcb36,	// (0x000994f3) sp_fs_scroll_pane_cp01_ParamLimits

0xcb36,	// (0x000994f3) sp_fs_scroll_pane_cp01

0x8c7f,	// (0x0009563c) list_medium_line_plain_t2_t1

0x8c8f,	// (0x0009564c) list_medium_line_plain_t2_t2

0x0001,

0xfbfa,	// (0x0009c5b7) list_medium_line_plain_t2_t

0x8c9f,	// (0x0009565c) list_medium_line_plain_t3_t1

0x8caf,	// (0x0009566c) list_medium_line_plain_t3_t2

0x8cbd,	// (0x0009567a) list_medium_line_plain_t3_t3

0x0002,

0xfbff,	// (0x0009c5bc) list_medium_line_plain_t3_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t2_g2_g1

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0009bc27) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0009bc27) list_medium_line_x2_t2_g2_g

0x2c18,	// (0x0008f5d5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c18,	// (0x0008f5d5) list_medium_line_x2_t2_g2_t1

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc06,	// (0x0009c5c3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc06,	// (0x0009c5c3) list_medium_line_x2_t2_g2_t

0x1c74,	// (0x0008e631) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t4_g2_g1

0xcb5c,	// (0x00099519) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb5c,	// (0x00099519) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc0b,	// (0x0009c5c8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc0b,	// (0x0009c5c8) list_medium_line_x2_t4_g2_g

0x8ccb,	// (0x00095688) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8ccb,	// (0x00095688) list_medium_line_x2_t4_g2_t1

0x8ce5,	// (0x000956a2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8ce5,	// (0x000956a2) list_medium_line_x2_t4_g2_t2

0x8cfa,	// (0x000956b7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8cfa,	// (0x000956b7) list_medium_line_x2_t4_g2_t3

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc10,	// (0x0009c5cd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc10,	// (0x0009c5cd) list_medium_line_x2_t4_g2_t

0xcb6e,	// (0x0009952b) list_medium_line_t3_right_iconx2_g1

0xca44,	// (0x00099401) list_medium_line_t3_right_iconx2_g2

0x8d0f,	// (0x000956cc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc19,	// (0x0009c5d6) list_medium_line_t3_right_iconx2_g

0x8d19,	// (0x000956d6) list_medium_line_t3_right_iconx2_t1

0x8d29,	// (0x000956e6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc20,	// (0x0009c5dd) list_medium_line_t3_right_iconx2_t

0x1c74,	// (0x0008e631) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x3_t4_g4_g1

0x1c80,	// (0x0008e63d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x3_t4_g4_g2

0x1d27,	// (0x0008e6e4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d27,	// (0x0008e6e4) list_medium_line_x3_t4_g4_g3

0xcb76,	// (0x00099533) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb76,	// (0x00099533) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc25,	// (0x0009c5e2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc25,	// (0x0009c5e2) list_medium_line_x3_t4_g4_g

0x8d37,	// (0x000956f4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8d37,	// (0x000956f4) list_medium_line_x3_t4_g4_t1

0x8d4e,	// (0x0009570b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8d4e,	// (0x0009570b) list_medium_line_x3_t4_g4_t2

0x2c2d,	// (0x0008f5ea) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c2d,	// (0x0008f5ea) list_medium_line_x3_t4_g4_t3

0xcb82,	// (0x0009953f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb82,	// (0x0009953f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc2e,	// (0x0009c5eb) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc2e,	// (0x0009c5eb) list_medium_line_x3_t4_g4_t

0x8d69,	// (0x00095726) list_single_dyc_row_text_pane_t1_ParamLimits

0x8d69,	// (0x00095726) list_single_dyc_row_text_pane_t1

0x8db2,	// (0x0009576f) list_single_dyc_row_text_pane_t2_ParamLimits

0x8db2,	// (0x0009576f) list_single_dyc_row_text_pane_t2

0xcb9f,	// (0x0009955c) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb9f,	// (0x0009955c) list_single_dyc_row_text_pane_t3

0x0002,

0xfc37,	// (0x0009c5f4) list_single_dyc_row_text_pane_t_ParamLimits

0xfc37,	// (0x0009c5f4) list_single_dyc_row_text_pane_t

0xcbb1,	// (0x0009956e) list_single_dyc_row_pane_g1_ParamLimits

0xcbb1,	// (0x0009956e) list_single_dyc_row_pane_g1

0xcbbd,	// (0x0009957a) list_single_dyc_row_pane_g2_ParamLimits

0xcbbd,	// (0x0009957a) list_single_dyc_row_pane_g2

0xcbc9,	// (0x00099586) list_single_dyc_row_pane_g3_ParamLimits

0xcbc9,	// (0x00099586) list_single_dyc_row_pane_g3

0xcbd5,	// (0x00099592) list_single_dyc_row_pane_g4_ParamLimits

0xcbd5,	// (0x00099592) list_single_dyc_row_pane_g4

0x0003,

0xfc3e,	// (0x0009c5fb) list_single_dyc_row_pane_g_ParamLimits

0xfc3e,	// (0x0009c5fb) list_single_dyc_row_pane_g

0xcbe1,	// (0x0009959e) list_single_dyc_row_text_pane_ParamLimits

0xcbe1,	// (0x0009959e) list_single_dyc_row_text_pane

0x0dbc,	// (0x0008d779) bg_sp_fs_scroll_pane

0xcc00,	// (0x000995bd) thumb_sp_fs_scroll_pane

0xbddd,	// (0x0009879a) list_medium_line_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_g1

0xcc09,	// (0x000995c6) list_medium_line_t1_ParamLimits

0xcc09,	// (0x000995c6) list_medium_line_t1

0x1c74,	// (0x0008e631) list_medium_line_x2_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_g1

0x1c80,	// (0x0008e63d) list_medium_line_x2_g2_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_g2

0x0001,

0xfc47,	// (0x0009c604) list_medium_line_x2_g_ParamLimits

0xfc47,	// (0x0009c604) list_medium_line_x2_g

0xcc1e,	// (0x000995db) list_medium_line_x2_t1_ParamLimits

0xcc1e,	// (0x000995db) list_medium_line_x2_t1

0x1c74,	// (0x0008e631) list_medium_line_x3_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x3_g1

0x1c80,	// (0x0008e63d) list_medium_line_x3_g2_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x3_g2

0x0001,

0xfc47,	// (0x0009c604) list_medium_line_x3_g_ParamLimits

0xfc47,	// (0x0009c604) list_medium_line_x3_g

0xcc1e,	// (0x000995db) list_medium_line_x3_t1_ParamLimits

0xcc1e,	// (0x000995db) list_medium_line_x3_t1

0xcc34,	// (0x000995f1) thumb_sp_fs_scroll_pane_g1

0xcc3d,	// (0x000995fa) thumb_sp_fs_scroll_pane_g2

0xcc46,	// (0x00099603) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4c,	// (0x0009c609) thumb_sp_fs_scroll_pane_g

0xcc34,	// (0x000995f1) bg_sp_fs_scroll_pane_g1

0xcc3d,	// (0x000995fa) bg_sp_fs_scroll_pane_g2

0xcc46,	// (0x00099603) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4c,	// (0x0009c609) bg_sp_fs_scroll_pane_g

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c74,	// (0x0008e631) list_medium_line_x2_t3_g4_g1

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d1b,	// (0x0008e6d8) list_medium_line_x2_t3_g4_g2

0x1c80,	// (0x0008e63d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c80,	// (0x0008e63d) list_medium_line_x2_t3_g4_g3

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c8c,	// (0x0008e649) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0009bca3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0009bca3) list_medium_line_x2_t3_g4_g

0x8e0c,	// (0x000957c9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e0c,	// (0x000957c9) list_medium_line_x2_t3_g4_t1

0x8e26,	// (0x000957e3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8e26,	// (0x000957e3) list_medium_line_x2_t3_g4_t2

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1cc1,	// (0x0008e67e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc53,	// (0x0009c610) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc53,	// (0x0009c610) list_medium_line_x2_t3_g4_t

0xbddd,	// (0x0009879a) list_medium_line_g2_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_g2_g1

0xbde9,	// (0x000987a6) list_medium_line_g2_g2_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_g2_g2

0x0001,

0xf96c,	// (0x0009c329) list_medium_line_g2_g_ParamLimits

0xf96c,	// (0x0009c329) list_medium_line_g2_g

0xcc4f,	// (0x0009960c) list_medium_line_g2_t1_ParamLimits

0xcc4f,	// (0x0009960c) list_medium_line_g2_t1

0xbddd,	// (0x0009879a) list_medium_line_t3_g2_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t3_g2_g1

0xbde9,	// (0x000987a6) list_medium_line_t3_g2_g2_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_t3_g2_g2

0x0001,

0xf96c,	// (0x0009c329) list_medium_line_t3_g2_g_ParamLimits

0xf96c,	// (0x0009c329) list_medium_line_t3_g2_g

0x8e40,	// (0x000957fd) list_medium_line_t3_g2_t1_ParamLimits

0x8e40,	// (0x000957fd) list_medium_line_t3_g2_t1

0x8e57,	// (0x00095814) list_medium_line_t3_g2_t2_ParamLimits

0x8e57,	// (0x00095814) list_medium_line_t3_g2_t2

0x8e6c,	// (0x00095829) list_medium_line_t3_g2_t3_ParamLimits

0x8e6c,	// (0x00095829) list_medium_line_t3_g2_t3

0x0002,

0xfc5a,	// (0x0009c617) list_medium_line_t3_g2_t_ParamLimits

0xfc5a,	// (0x0009c617) list_medium_line_t3_g2_t

0xca44,	// (0x00099401) list_medium_line_right_icon_g1

0xcc64,	// (0x00099621) list_medium_line_right_icon_t1

0xbddd,	// (0x0009879a) list_medium_line_t2_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t2_g1

0x8e85,	// (0x00095842) list_medium_line_t2_t1_ParamLimits

0x8e85,	// (0x00095842) list_medium_line_t2_t1

0x8e9f,	// (0x0009585c) list_medium_line_t2_t2_ParamLimits

0x8e9f,	// (0x0009585c) list_medium_line_t2_t2

0x0001,

0xfc61,	// (0x0009c61e) list_medium_line_t2_t_ParamLimits

0xfc61,	// (0x0009c61e) list_medium_line_t2_t

0xbddd,	// (0x0009879a) list_medium_line_t3_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t3_g1

0x8eb8,	// (0x00095875) list_medium_line_t3_t1_ParamLimits

0x8eb8,	// (0x00095875) list_medium_line_t3_t1

0x8ed2,	// (0x0009588f) list_medium_line_t3_t2_ParamLimits

0x8ed2,	// (0x0009588f) list_medium_line_t3_t2

0x8ee7,	// (0x000958a4) list_medium_line_t3_t3_ParamLimits

0x8ee7,	// (0x000958a4) list_medium_line_t3_t3

0x0002,

0xfc66,	// (0x0009c623) list_medium_line_t3_t_ParamLimits

0xfc66,	// (0x0009c623) list_medium_line_t3_t

0xbddd,	// (0x0009879a) list_medium_line_g3_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_g3_g1

0xcc72,	// (0x0009962f) list_medium_line_g3_g2_ParamLimits

0xcc72,	// (0x0009962f) list_medium_line_g3_g2

0xbde9,	// (0x000987a6) list_medium_line_g3_g3_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_g3_g3

0x0002,

0xfc6d,	// (0x0009c62a) list_medium_line_g3_g_ParamLimits

0xfc6d,	// (0x0009c62a) list_medium_line_g3_g

0xcc7e,	// (0x0009963b) list_medium_line_g3_t1_ParamLimits

0xcc7e,	// (0x0009963b) list_medium_line_g3_t1

0xbddd,	// (0x0009879a) list_medium_line_t2_g3_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t2_g3_g1

0xcc72,	// (0x0009962f) list_medium_line_t2_g3_g2_ParamLimits

0xcc72,	// (0x0009962f) list_medium_line_t2_g3_g2

0xbde9,	// (0x000987a6) list_medium_line_t2_g3_g3_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_t2_g3_g3

0x0002,

0xfc6d,	// (0x0009c62a) list_medium_line_t2_g3_g_ParamLimits

0xfc6d,	// (0x0009c62a) list_medium_line_t2_g3_g

0x8efc,	// (0x000958b9) list_medium_line_t2_g3_t1_ParamLimits

0x8efc,	// (0x000958b9) list_medium_line_t2_g3_t1

0x8f16,	// (0x000958d3) list_medium_line_t2_g3_t2_ParamLimits

0x8f16,	// (0x000958d3) list_medium_line_t2_g3_t2

0x0001,

0xfc74,	// (0x0009c631) list_medium_line_t2_g3_t_ParamLimits

0xfc74,	// (0x0009c631) list_medium_line_t2_g3_t

0xbddd,	// (0x0009879a) list_medium_line_t3_g3_g1_ParamLimits

0xbddd,	// (0x0009879a) list_medium_line_t3_g3_g1

0xcc72,	// (0x0009962f) list_medium_line_t3_g3_g2_ParamLimits

0xcc72,	// (0x0009962f) list_medium_line_t3_g3_g2

0xbde9,	// (0x000987a6) list_medium_line_t3_g3_g3_ParamLimits

0xbde9,	// (0x000987a6) list_medium_line_t3_g3_g3

0x0002,

0xfc6d,	// (0x0009c62a) list_medium_line_t3_g3_g_ParamLimits

0xfc6d,	// (0x0009c62a) list_medium_line_t3_g3_g

0x8f31,	// (0x000958ee) list_medium_line_t3_g3_t1_ParamLimits

0x8f31,	// (0x000958ee) list_medium_line_t3_g3_t1

0x8f45,	// (0x00095902) list_medium_line_t3_g3_t2_ParamLimits

0x8f45,	// (0x00095902) list_medium_line_t3_g3_t2

0x8f57,	// (0x00095914) list_medium_line_t3_g3_t3_ParamLimits

0x8f57,	// (0x00095914) list_medium_line_t3_g3_t3

0x0002,

0xfc79,	// (0x0009c636) list_medium_line_t3_g3_t_ParamLimits

0xfc79,	// (0x0009c636) list_medium_line_t3_g3_t

0xcb6e,	// (0x0009952b) list_medium_line_right_iconx2_g1

0xca44,	// (0x00099401) list_medium_line_right_iconx2_g2

0x0001,

0xfc80,	// (0x0009c63d) list_medium_line_right_iconx2_g

0xcc93,	// (0x00099650) list_medium_line_right_iconx2_t1

0xcb6e,	// (0x0009952b) list_medium_line_t2_right_iconx2_g1

0xca44,	// (0x00099401) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc80,	// (0x0009c63d) list_medium_line_t2_right_iconx2_g

0x8f6b,	// (0x00095928) list_medium_line_t2_right_iconx2_t1

0x8f7b,	// (0x00095938) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc85,	// (0x0009c642) list_medium_line_t2_right_iconx2_t

0xcca1,	// (0x0009965e) list_medium_line_x4_t4_t1

0x8f8d,	// (0x0009594a) list_medium_line_x4_t4_t2

0x8f9d,	// (0x0009595a) list_medium_line_x4_t4_t3

0x8fad,	// (0x0009596a) list_medium_line_x4_t4_t4

0x0003,

0xfc8a,	// (0x0009c647) list_medium_line_x4_t4_t

0x9000,	// (0x000959bd) tport_appsw_pane_ParamLimits

0x9000,	// (0x000959bd) tport_appsw_pane

0x9011,	// (0x000959ce) tport_contact_pane_ParamLimits

0x9011,	// (0x000959ce) tport_contact_pane

0x902a,	// (0x000959e7) tport_listscroll_pane_ParamLimits

0x902a,	// (0x000959e7) tport_listscroll_pane

0x9045,	// (0x00095a02) cell_tport_appsw_pane_ParamLimits

0x9045,	// (0x00095a02) cell_tport_appsw_pane

0xbd49,	// (0x00098706) tport_appsw_pane_g1_ParamLimits

0xbd49,	// (0x00098706) tport_appsw_pane_g1

0xccaf,	// (0x0009966c) tport_contact_pane_g1

0xc57c,	// (0x00098f39) tport_contact_pane_t1

0xccb8,	// (0x00099675) tport_contact_pane_t2

0x0001,

0xfc93,	// (0x0009c650) tport_contact_pane_t

0xccc6,	// (0x00099683) list_tport_pane

0xcccf,	// (0x0009968c) scroll_pane_cp_030

0xcce0,	// (0x0009969d) cell_tport_appsw_pane_g1

0xccf0,	// (0x000996ad) cell_tport_appsw_pane_t1

0x0dbc,	// (0x0008d779) grid_highlight_pane_cp019

0x9085,	// (0x00095a42) list_tport_double_graphic_pane_ParamLimits

0x9085,	// (0x00095a42) list_tport_double_graphic_pane

0x9e93,	// (0x00096850) list_highlight_pane_cp023_ParamLimits

0x9e93,	// (0x00096850) list_highlight_pane_cp023

0x9092,	// (0x00095a4f) list_tport_double_graphic_pane_g1_ParamLimits

0x9092,	// (0x00095a4f) list_tport_double_graphic_pane_g1

0x909f,	// (0x00095a5c) list_tport_double_graphic_pane_t1_ParamLimits

0x909f,	// (0x00095a5c) list_tport_double_graphic_pane_t1

0x90b4,	// (0x00095a71) list_tport_double_graphic_pane_t2_ParamLimits

0x90b4,	// (0x00095a71) list_tport_double_graphic_pane_t2

0x0001,

0xfc9f,	// (0x0009c65c) list_tport_double_graphic_pane_t_ParamLimits

0xfc9f,	// (0x0009c65c) list_tport_double_graphic_pane_t

0x0dbc,	// (0x0008d779) main_cale_note_pane

0x6d54,	// (0x00093711) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d54,	// (0x00093711) cell_vitu2_function_top_wide_pane_cp01

0x8615,	// (0x00094fd2) wait_bar_pane_cp05_ParamLimits

0x0dbc,	// (0x0008d779) listscroll_cmail_pane

0xcd06,	// (0x000996c3) list_cmail_pane

0xee10,	// (0x0009b7cd) list_cmail_body_pane

0x90d0,	// (0x00095a8d) list_single_cmail_header_caption_pane

0x90e6,	// (0x00095aa3) list_single_cmail_header_detail_pane_ParamLimits

0x90e6,	// (0x00095aa3) list_single_cmail_header_detail_pane

0x910f,	// (0x00095acc) list_single_cmail_header_caption_pane_t1

0x911f,	// (0x00095adc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x911f,	// (0x00095adc) list_single_cmail_header_detail_pane_g1

0xcd27,	// (0x000996e4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd27,	// (0x000996e4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca4,	// (0x0009c661) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca4,	// (0x0009c661) list_single_cmail_header_detail_pane_g

0xcd40,	// (0x000996fd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd40,	// (0x000996fd) list_single_cmail_header_detail_pane_t1

0xcd7a,	// (0x00099737) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd7a,	// (0x00099737) list_single_cmail_header_editor_pane_bg

0xc72b,	// (0x000990e8) list_cmail_body_pane_g1

0xcd8c,	// (0x00099749) list_cmail_body_pane_t1

0xec1d,	// (0x0009b5da) list_single_cmail_header_editor_pane_bg_g1

0xde44,	// (0x0009a801) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec2d,	// (0x0009b5ea) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec25,	// (0x0009b5e2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee41,	// (0x0009b7fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec4d,	// (0x0009b60a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec3d,	// (0x0009b5fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec45,	// (0x0009b602) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xde24,	// (0x0009a7e1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x915d,	// (0x00095b1a) calenote_gesture_pane_ParamLimits

0x915d,	// (0x00095b1a) calenote_gesture_pane

0x917d,	// (0x00095b3a) calenote_window_pane_ParamLimits

0x917d,	// (0x00095b3a) calenote_window_pane

0xcd9a,	// (0x00099757) popup_note_window_cp01

0x9199,	// (0x00095b56) calenote_swipe_1_pane_ParamLimits

0x9199,	// (0x00095b56) calenote_swipe_1_pane

0x8b87,	// (0x00095544) calenote_swipe_2_pane_ParamLimits

0x8b87,	// (0x00095544) calenote_swipe_2_pane

0xc945,	// (0x00099302) calenote_swipe_1_pane_g1_ParamLimits

0xc945,	// (0x00099302) calenote_swipe_1_pane_g1

0xc952,	// (0x0009930f) calenote_swipe_1_pane_g2_ParamLimits

0xc952,	// (0x0009930f) calenote_swipe_1_pane_g2

0x0001,

0xfbd3,	// (0x0009c590) calenote_swipe_1_pane_g_ParamLimits

0xfbd3,	// (0x0009c590) calenote_swipe_1_pane_g

0xcdac,	// (0x00099769) calenote_swipe_1_pane_t1_ParamLimits

0xcdac,	// (0x00099769) calenote_swipe_1_pane_t1

0xc945,	// (0x00099302) calenote_swipe_2_pane_g1_ParamLimits

0xc945,	// (0x00099302) calenote_swipe_2_pane_g1

0xcdcb,	// (0x00099788) calenote_swipe_2_pane_g2_ParamLimits

0xcdcb,	// (0x00099788) calenote_swipe_2_pane_g2

0x0001,

0xfcb0,	// (0x0009c66d) calenote_swipe_2_pane_g_ParamLimits

0xfcb0,	// (0x0009c66d) calenote_swipe_2_pane_g

0xcdd7,	// (0x00099794) calenote_swipe_2_pane_t1_ParamLimits

0xcdd7,	// (0x00099794) calenote_swipe_2_pane_t1

0x0dbc,	// (0x0008d779) main_mup_navstr_pane

0x5a39,	// (0x000923f6) main_mup3_pane_t7_ParamLimits

0x5a39,	// (0x000923f6) main_mup3_pane_t7

0xd7af,	// (0x0009a16c) main_mp4_pane_g6_ParamLimits

0xd7af,	// (0x0009a16c) main_mp4_pane_g6

0xd953,	// (0x0009a310) main_image3_pane_t4_ParamLimits

0xd953,	// (0x0009a310) main_image3_pane_t4

0x91ae,	// (0x00095b6b) popup_navstr_preview_pane_ParamLimits

0x91ae,	// (0x00095b6b) popup_navstr_preview_pane

0x91c2,	// (0x00095b7f) scroll_navstr_pane_ParamLimits

0x91c2,	// (0x00095b7f) scroll_navstr_pane

0x0dbc,	// (0x0008d779) bg_popup_preview_window_pane_cp04

0xcdfe,	// (0x000997bb) popup_navstr_preview_pane_t1

0x91d6,	// (0x00095b93) scroll_navstr_pane_g1_ParamLimits

0x91d6,	// (0x00095b93) scroll_navstr_pane_g1

0x91ea,	// (0x00095ba7) scroll_navstr_pane_t1_ParamLimits

0x91ea,	// (0x00095ba7) scroll_navstr_pane_t1

0xcda3,	// (0x00099760) bg_button_pane_cp014

0xcda3,	// (0x00099760) bg_button_pane_cp030

0x8a25,	// (0x000953e2) list_double_fisheye_pane_g4_ParamLimits

0x8a25,	// (0x000953e2) list_double_fisheye_pane_g4

0x8a31,	// (0x000953ee) list_double_fisheye_pane_g5_ParamLimits

0x8a31,	// (0x000953ee) list_double_fisheye_pane_g5

0xcd0e,	// (0x000996cb) sp_fs_scroll_pane_cp03

0xca84,	// (0x00099441) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca90,	// (0x0009944d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf0,	// (0x0009c5ad) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca9c,	// (0x00099459) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x90c6,	// (0x00095a83) sp_fs_scroll_pane_cp02

0xdb54,	// (0x0009a511) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdb54,	// (0x0009a511) popup_sp_fs_calendar_preview_list_single_pane

0x0dbc,	// (0x0008d779) main_cam6_pano_pane

0x9e93,	// (0x00096850) main_mup3_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_phacti_pane

0x84e8,	// (0x00094ea5) bg_button_pane_cp11

0x8502,	// (0x00094ebf) main_mobtv_info_pane_g2_ParamLimits

0x8502,	// (0x00094ebf) main_mobtv_info_pane_g2

0x0001,

0xfb50,	// (0x0009c50d) main_mobtv_info_pane_g_ParamLimits

0xfb50,	// (0x0009c50d) main_mobtv_info_pane_g

0x86df,	// (0x0009509c) sc_clock_pane_t5_ParamLimits

0x86df,	// (0x0009509c) sc_clock_pane_t5

0x8887,	// (0x00095244) main_radioblah_pane_g1_ParamLimits

0xc891,	// (0x0009924e) main_radioblah_pane_t3_ParamLimits

0xc891,	// (0x0009924e) main_radioblah_pane_t3

0xc8a9,	// (0x00099266) main_radioblah_pane_t4_ParamLimits

0xc8a9,	// (0x00099266) main_radioblah_pane_t4

0x88af,	// (0x0009526c) main_radioblah_text_pane_ParamLimits

0x88af,	// (0x0009526c) main_radioblah_text_pane

0x88c1,	// (0x0009527e) main_radioblah_info_pane_g1_ParamLimits

0x895a,	// (0x00095317) main_radioblah_info_pane_t4_ParamLimits

0x895a,	// (0x00095317) main_radioblah_info_pane_t4

0x9e93,	// (0x00096850) main_sp_fs_calendar_pane

0x9201,	// (0x00095bbe) main_phacti_pane_g1

0x9209,	// (0x00095bc6) phacti_note_pane_ParamLimits

0x9209,	// (0x00095bc6) phacti_note_pane

0xce15,	// (0x000997d2) phacti_term_pane_ParamLimits

0xce15,	// (0x000997d2) phacti_term_pane

0xce2a,	// (0x000997e7) phacti_note_pane_t1_ParamLimits

0xce2a,	// (0x000997e7) phacti_note_pane_t1

0xce41,	// (0x000997fe) phacti_term_pane_g1

0xce49,	// (0x00099806) phacti_term_pane_t1_ParamLimits

0xce49,	// (0x00099806) phacti_term_pane_t1

0xce73,	// (0x00099830) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdc47,	// (0x0009a604) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcba,	// (0x0009c677) popup_sp_fs_calendar_preview_list_single_pane_g

0xce7b,	// (0x00099838) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce7b,	// (0x00099838) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce90,	// (0x0009984d) aid_popup_sp_fs_bg_corner_pane

0xb2c7,	// (0x00097c84) popup_sp_fs_calendar_preview_bg_pane_g1

0x0dbc,	// (0x0008d779) popup_sp_fs_calendar_preview_bg_pane

0xce98,	// (0x00099855) popup_sp_fs_calendar_preview_list_pane

0x9e93,	// (0x00096850) bg_main_sp_fs_cale_pane_ParamLimits

0x9e93,	// (0x00096850) bg_main_sp_fs_cale_pane

0xcea0,	// (0x0009985d) listscroll_cale_mrui_pane_ParamLimits

0xcea0,	// (0x0009985d) listscroll_cale_mrui_pane

0xceb4,	// (0x00099871) listscroll_sp_fs_schedule_track_pane

0xcebd,	// (0x0009987a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcebd,	// (0x0009987a) main_sp_fs_ctrlbar_pane_cp01

0xcece,	// (0x0009988b) main_sp_fs_ribbon_pane

0xced6,	// (0x00099893) popup_sp_fs_cale_preview_window

0x9260,	// (0x00095c1d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9260,	// (0x00095c1d) list_single_sp_fs_schedule_track_pane

0x9e93,	// (0x00096850) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9e93,	// (0x00096850) bg_sp_fs_highlight_list_pane_cp03

0x9272,	// (0x00095c2f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9272,	// (0x00095c2f) list_single_sp_fs_schedule_track_pane_g1

0x927e,	// (0x00095c3b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x927e,	// (0x00095c3b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbf,	// (0x0009c67c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbf,	// (0x0009c67c) list_single_sp_fs_schedule_track_pane_g

0x928a,	// (0x00095c47) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x928a,	// (0x00095c47) list_single_sp_fs_schedule_track_pane_t1

0x92a4,	// (0x00095c61) sp_fs_schedule_track_pane_ParamLimits

0x92a4,	// (0x00095c61) sp_fs_schedule_track_pane

0xcee8,	// (0x000998a5) sp_fs_schedule_track_pane_g1

0xcef0,	// (0x000998ad) sp_fs_schedule_track_pane_g2

0xcef8,	// (0x000998b5) sp_fs_schedule_track_pane_g3

0xcf00,	// (0x000998bd) sp_fs_schedule_track_pane_g4

0xcf08,	// (0x000998c5) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc4,	// (0x0009c681) sp_fs_schedule_track_pane_g

0xec1d,	// (0x0009b5da) bg_sp_fs_schedule_viewer_highlight_g1

0xde44,	// (0x0009a801) bg_sp_fs_schedule_viewer_highlight_g2

0xec25,	// (0x0009b5e2) bg_sp_fs_schedule_viewer_highlight_g3

0xec2d,	// (0x0009b5ea) bg_sp_fs_schedule_viewer_highlight_g4

0xee41,	// (0x0009b7fe) bg_sp_fs_schedule_viewer_highlight_g5

0xec3d,	// (0x0009b5fa) bg_sp_fs_schedule_viewer_highlight_g6

0xec45,	// (0x0009b602) bg_sp_fs_schedule_viewer_highlight_g7

0xec4d,	// (0x0009b60a) bg_sp_fs_schedule_viewer_highlight_g8

0xde24,	// (0x0009a7e1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x0b3a,	// (0x0008d4f7) bg_sp_fs_schedule_viewer_highlight_g

0x0dbc,	// (0x0008d779) bg_main_sp_fs_ribbon_pane

0x92b5,	// (0x00095c72) main_sp_fs_ribbon_pane_g1

0xcf10,	// (0x000998cd) main_sp_fs_ribbon_pane_t1

0x92be,	// (0x00095c7b) main_sp_fs_ribbon_pane_t2

0xcf1f,	// (0x000998dc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfccf,	// (0x0009c68c) main_sp_fs_ribbon_pane_t

0xcf2e,	// (0x000998eb) main_sp_fs_ribbon_scheduler_pane

0xcf36,	// (0x000998f3) bg_main_sp_fs_ribbon_pane_g1

0xcf3f,	// (0x000998fc) bg_main_sp_fs_ribbon_pane_g2

0xcf48,	// (0x00099905) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcd6,	// (0x0009c693) bg_main_sp_fs_ribbon_pane_g

0xcf50,	// (0x0009990d) main_sp_fs_ribbon_scheduler_pane_g1

0xcf59,	// (0x00099916) main_sp_fs_ribbon_scheduler_pane_g2

0xcf62,	// (0x0009991f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcdd,	// (0x0009c69a) main_sp_fs_ribbon_scheduler_pane_g

0xcf6b,	// (0x00099928) list_cale_mrui_pane

0x92cd,	// (0x00095c8a) sp_fs_scroll_pane_cp07_ParamLimits

0x92cd,	// (0x00095c8a) sp_fs_scroll_pane_cp07

0x92e1,	// (0x00095c9e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x92e1,	// (0x00095c9e) bg_sp_fs_schedule_viewer_highlight

0xcf74,	// (0x00099931) list_single_sp_fs_schedule_track_pane_cp01

0xcf7c,	// (0x00099939) list_sp_fs_schedule_track_pane

0xcf84,	// (0x00099941) sp_fs_scroll_pane_cp06_ParamLimits

0xcf84,	// (0x00099941) sp_fs_scroll_pane_cp06

0xb2c7,	// (0x00097c84) bgmain_sp_fs_calendar_pane_g1

0x92f1,	// (0x00095cae) list_single_cale_mrui_pane_ParamLimits

0x92f1,	// (0x00095cae) list_single_cale_mrui_pane

0xcf96,	// (0x00099953) list_single_cale_mrui_row_pane_ParamLimits

0xcf96,	// (0x00099953) list_single_cale_mrui_row_pane

0xcfa3,	// (0x00099960) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcfa3,	// (0x00099960) list_single_cale_mrui_row_pane_g1

0xcfdb,	// (0x00099998) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcfdb,	// (0x00099998) list_single_cale_mrui_row_pane_t1

0x9311,	// (0x00095cce) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9311,	// (0x00095cce) list_single_cale_mrui_row_pane_t2

0xcfed,	// (0x000999aa) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcfed,	// (0x000999aa) list_single_cale_mrui_row_pane_t3

0xd01c,	// (0x000999d9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd01c,	// (0x000999d9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce9,	// (0x0009c6a6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce9,	// (0x0009c6a6) list_single_cale_mrui_row_pane_t

0x9379,	// (0x00095d36) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9379,	// (0x00095d36) list_single_cmail_header_editor_pane_bg_cp01

0x939f,	// (0x00095d5c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x939f,	// (0x00095d5c) list_single_cmail_header_editor_pane_bg_cp02

0x93bf,	// (0x00095d7c) main_radioblah_text_pane_t1_ParamLimits

0x93bf,	// (0x00095d7c) main_radioblah_text_pane_t1

0xd04b,	// (0x00099a08) cam6_indi_pane_cp01

0xd053,	// (0x00099a10) cam6_mode_pane_cp01

0xd05b,	// (0x00099a18) cam6_pano_pane

0xd064,	// (0x00099a21) cam6_zoom_pane_cp01

0xd06c,	// (0x00099a29) cam6_pano_image_pane

0xd077,	// (0x00099a34) cam6_pano_pane_g1

0xc72b,	// (0x000990e8) cam6_pano_pane_g2

0xd080,	// (0x00099a3d) cam6_pano_pane_g3

0xd089,	// (0x00099a46) cam6_pano_pane_g4

0xb89b,	// (0x00098258) cam6_pano_pane_g5

0xd092,	// (0x00099a4f) cam6_pano_pane_g6

0xd09c,	// (0x00099a59) cam6_pano_pane_g7

0xd0a4,	// (0x00099a61) cam6_pano_pane_g8

0xd0ad,	// (0x00099a6a) cam6_pano_pane_g9

0x0008,

0xfcf2,	// (0x0009c6af) cam6_pano_pane_g

0x0dbc,	// (0x0008d779) main_browser_tag_pane

0xcdf6,	// (0x000997b3) grid_navstr_albumart_pane

0xd0b8,	// (0x00099a75) cell_navstr_albumart_pane_ParamLimits

0xd0b8,	// (0x00099a75) cell_navstr_albumart_pane

0xd0db,	// (0x00099a98) cell_navstr_albumart_pane_g1

0xabde,	// (0x0009759b) cell_navstr_albumart_pane_g2

0xabee,	// (0x000975ab) cell_navstr_albumart_pane_g3

0xabe6,	// (0x000975a3) cell_navstr_albumart_pane_g4

0x0003,

0xfd05,	// (0x0009c6c2) cell_navstr_albumart_pane_g

0x93d9,	// (0x00095d96) bt_list_pane_ParamLimits

0x93d9,	// (0x00095d96) bt_list_pane

0x93ed,	// (0x00095daa) bt_list_pane_t1

0x93fc,	// (0x00095db9) bt_list_pane_t2

0x0001,

0xfd0e,	// (0x0009c6cb) bt_list_pane_t

0x0dbc,	// (0x0008d779) main_cale_prevew_pane

0x940b,	// (0x00095dc8) popup_cale_preview_window_ParamLimits

0x940b,	// (0x00095dc8) popup_cale_preview_window

0x9e93,	// (0x00096850) bg_popup_preview_window_pane_cp05_ParamLimits

0x9e93,	// (0x00096850) bg_popup_preview_window_pane_cp05

0xd0e3,	// (0x00099aa0) list_cale_preview_pane_ParamLimits

0xd0e3,	// (0x00099aa0) list_cale_preview_pane

0x9426,	// (0x00095de3) list_double_cale_preview_pane_ParamLimits

0x9426,	// (0x00095de3) list_double_cale_preview_pane

0x9438,	// (0x00095df5) list_single_cale_preview_pane_ParamLimits

0x9438,	// (0x00095df5) list_single_cale_preview_pane

0x944e,	// (0x00095e0b) list_single_cale_preview_pane_g1

0x9456,	// (0x00095e13) list_single_cale_preview_pane_t1_ParamLimits

0x9456,	// (0x00095e13) list_single_cale_preview_pane_t1

0x946b,	// (0x00095e28) list_double_cale_preview_pane_g1

0x9473,	// (0x00095e30) list_double_cale_preview_pane_t1_ParamLimits

0x9473,	// (0x00095e30) list_double_cale_preview_pane_t1

0x9488,	// (0x00095e45) list_double_cale_preview_pane_t2_ParamLimits

0x9488,	// (0x00095e45) list_double_cale_preview_pane_t2

0x0001,

0xfd13,	// (0x0009c6d0) list_double_cale_preview_pane_t_ParamLimits

0xfd13,	// (0x0009c6d0) list_double_cale_preview_pane_t

0x0dbc,	// (0x0008d779) main_ezdial_pane

0x9e93,	// (0x00096850) main_sp_fs_email_pane_ParamLimits

0x8bc3,	// (0x00095580) cmail_ddmenu_btn01_pane_ParamLimits

0x8bc3,	// (0x00095580) cmail_ddmenu_btn01_pane

0x8bd6,	// (0x00095593) cmail_ddmenu_btn02_pane_ParamLimits

0x8bd6,	// (0x00095593) cmail_ddmenu_btn02_pane

0x8bf9,	// (0x000955b6) cmail_ddmenu_btn03_pane_ParamLimits

0x8bf9,	// (0x000955b6) cmail_ddmenu_btn03_pane

0x8c1f,	// (0x000955dc) main_sp_fs_ctrlbar_pane_ParamLimits

0x8c43,	// (0x00095600) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xee10,	// (0x0009b7cd) list_cmail_body_pane_ParamLimits

0xcd1e,	// (0x000996db) bg_button_pane_cp12

0xcd33,	// (0x000996f0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd33,	// (0x000996f0) list_single_cmail_header_detail_pane_g3

0x9137,	// (0x00095af4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9137,	// (0x00095af4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcab,	// (0x0009c668) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcab,	// (0x0009c668) list_single_cmail_header_detail_pane_t

0xce5e,	// (0x0009981b) phacti_term_pane_t2_ParamLimits

0xce5e,	// (0x0009981b) phacti_term_pane_t2

0x0001,

0xfcb5,	// (0x0009c672) phacti_term_pane_t_ParamLimits

0xfcb5,	// (0x0009c672) phacti_term_pane_t

0xd0ef,	// (0x00099aac) aid_size_list_single_double

0x94a0,	// (0x00095e5d) popup_ezdial_listscroll_window

0x94bc,	// (0x00095e79) popup_number_entry_window_cp01

0xe52f,	// (0x0009aeec) bg_popup_call_pane_cp09

0xd0fb,	// (0x00099ab8) ezdial_list_pane

0xd103,	// (0x00099ac0) scroll_pane_cp23

0xadc1,	// (0x0009777e) bg_button_pane_cp028_ParamLimits

0xadc1,	// (0x0009777e) bg_button_pane_cp028

0x94ca,	// (0x00095e87) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x94ca,	// (0x00095e87) cmail_ddmenu_btn01_pane_g1

0x94d6,	// (0x00095e93) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x94d6,	// (0x00095e93) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd18,	// (0x0009c6d5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd18,	// (0x0009c6d5) cmail_ddmenu_btn01_pane_g

0xd10b,	// (0x00099ac8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd10b,	// (0x00099ac8) cmail_ddmenu_btn01_pane_t1

0xadc1,	// (0x0009777e) bg_button_pane_cp029_ParamLimits

0xadc1,	// (0x0009777e) bg_button_pane_cp029

0x94e2,	// (0x00095e9f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x94e2,	// (0x00095e9f) cmail_ddmenu_btn02_pane_g1

0x94fa,	// (0x00095eb7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x94fa,	// (0x00095eb7) cmail_ddmenu_btn02_pane_t1

0x9e93,	// (0x00096850) bg_button_pane_cp031_ParamLimits

0x9e93,	// (0x00096850) bg_button_pane_cp031

0x94e2,	// (0x00095e9f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x94e2,	// (0x00095e9f) cmail_ddmenu_btn03_pane_g1

0x94fa,	// (0x00095eb7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x94fa,	// (0x00095eb7) cmail_ddmenu_btn03_pane_t1

0x656c,	// (0x00092f29) cell_dialer2_keypad_pane_t1_ParamLimits

0x6586,	// (0x00092f43) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6586,	// (0x00092f43) cell_dialer2_keypad_pane_t1_copy1

0x836a,	// (0x00094d27) ncimui_group_button_pane

0x9e93,	// (0x00096850) main_sp_fs_calendar_pane_ParamLimits

0x90d0,	// (0x00095a8d) list_single_cmail_header_caption_pane_ParamLimits

0xf0da,	// (0x0009ba97) aid_recal_txt_sm_pane

0x0dbc,	// (0x0008d779) mian_recal_day_pane

0xced6,	// (0x00099893) popup_sp_fs_cale_preview_window_ParamLimits

0x0dbc,	// (0x0008d779) list_recal_day_pane

0xd139,	// (0x00099af6) list_single_recal_day_pane_ParamLimits

0xd139,	// (0x00099af6) list_single_recal_day_pane

0xd14b,	// (0x00099b08) list_single_recal_day_pane_g1_ParamLimits

0xd14b,	// (0x00099b08) list_single_recal_day_pane_g1

0xd157,	// (0x00099b14) list_single_recal_day_pane_g2_ParamLimits

0xd157,	// (0x00099b14) list_single_recal_day_pane_g2

0xd166,	// (0x00099b23) list_single_recal_day_pane_g3_ParamLimits

0xd166,	// (0x00099b23) list_single_recal_day_pane_g3

0x951e,	// (0x00095edb) list_single_recal_day_pane_g4_ParamLimits

0x951e,	// (0x00095edb) list_single_recal_day_pane_g4

0xd172,	// (0x00099b2f) list_single_recal_day_pane_g5_ParamLimits

0xd172,	// (0x00099b2f) list_single_recal_day_pane_g5

0xd181,	// (0x00099b3e) list_single_recal_day_pane_g6_ParamLimits

0xd181,	// (0x00099b3e) list_single_recal_day_pane_g6

0x0005,

0xfd27,	// (0x0009c6e4) list_single_recal_day_pane_g_ParamLimits

0xfd27,	// (0x0009c6e4) list_single_recal_day_pane_g

0xd18d,	// (0x00099b4a) list_single_recal_day_pane_t1

0xd19b,	// (0x00099b58) list_single_recal_day_pane_t2

0x0001,

0xfd34,	// (0x0009c6f1) list_single_recal_day_pane_t

0x9531,	// (0x00095eee) ncimui_query_button_pane_ParamLimits

0x9531,	// (0x00095eee) ncimui_query_button_pane

0x9541,	// (0x00095efe) ncimui_query_button_pane_t1_ParamLimits

0x9541,	// (0x00095efe) ncimui_query_button_pane_t1

0xd1a9,	// (0x00099b66) ncimui_query_button_pane_t2_ParamLimits

0xd1a9,	// (0x00099b66) ncimui_query_button_pane_t2

0x0001,

0xfd39,	// (0x0009c6f6) ncimui_query_button_pane_t_ParamLimits

0xfd39,	// (0x0009c6f6) ncimui_query_button_pane_t

0x9554,	// (0x00095f11) query_button_pane_ParamLimits

0x9554,	// (0x00095f11) query_button_pane

0x0dbc,	// (0x0008d779) bg_button_pane_cp0028

0xd1bc,	// (0x00099b79) query_button_pane_t1

0x46a6,	// (0x00091063) main_tport_pane_ParamLimits

0x8fbd,	// (0x0009597a) bg_popup_window_pane_cp01_ParamLimits

0x8fbd,	// (0x0009597a) bg_popup_window_pane_cp01

0x8fd7,	// (0x00095994) heading_pane_cp08_ParamLimits

0x8fd7,	// (0x00095994) heading_pane_cp08

0x8feb,	// (0x000959a8) heading_pane_cp07_ParamLimits

0x8feb,	// (0x000959a8) heading_pane_cp07

0xcce0,	// (0x0009969d) cell_tport_appsw_pane_g2

0x0002,

0xfc98,	// (0x0009c655) cell_tport_appsw_pane_g

0x3429,	// (0x0008fde6) input_candi_list_open_g1

0xdfeb,	// (0x0009a9a8) list_cale_time_pane_g6_ParamLimits

0xdfeb,	// (0x0009a9a8) list_cale_time_pane_g6

0x5473,	// (0x00091e30) aid_size_touch_calib_1_ParamLimits

0x5473,	// (0x00091e30) aid_size_touch_calib_1

0x547f,	// (0x00091e3c) aid_size_touch_calib_2_ParamLimits

0x547f,	// (0x00091e3c) aid_size_touch_calib_2

0x5495,	// (0x00091e52) aid_size_touch_calib_3_ParamLimits

0x5495,	// (0x00091e52) aid_size_touch_calib_3

0x54b3,	// (0x00091e70) aid_size_touch_calib_4_ParamLimits

0x54b3,	// (0x00091e70) aid_size_touch_calib_4

0x54c9,	// (0x00091e86) main_touch_calib_button_group_pane_ParamLimits

0x54c9,	// (0x00091e86) main_touch_calib_button_group_pane

0x54e1,	// (0x00091e9e) main_touch_calib_pane_g1_ParamLimits

0x54ed,	// (0x00091eaa) main_touch_calib_pane_g2_ParamLimits

0x54f9,	// (0x00091eb6) main_touch_calib_pane_g3_ParamLimits

0x5505,	// (0x00091ec2) main_touch_calib_pane_g4_ParamLimits

0xf6f6,	// (0x0009c0b3) main_touch_calib_pane_g_ParamLimits

0x5511,	// (0x00091ece) main_touch_calib_pane_t1_ParamLimits

0x552b,	// (0x00091ee8) main_touch_calib_pane_t2_ParamLimits

0x5545,	// (0x00091f02) main_touch_calib_pane_t3_ParamLimits

0x5559,	// (0x00091f16) main_touch_calib_pane_t4_ParamLimits

0x556d,	// (0x00091f2a) main_touch_calib_pane_t5_ParamLimits

0xf6ff,	// (0x0009c0bc) main_touch_calib_pane_t_ParamLimits

0xb671,	// (0x0009802e) list_single_fp_cale_pane_g3_ParamLimits

0xb671,	// (0x0009802e) list_single_fp_cale_pane_g3

0xda18,	// (0x0009a3d5) bg_button_pane_cp012_ParamLimits

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp03_ParamLimits

0x7530,	// (0x00093eed) cell_vitu2_function_top_pane_g1_ParamLimits

0xda18,	// (0x0009a3d5) bg_vkb2_func_pane_cp04_ParamLimits

0x830a,	// (0x00094cc7) main_ncimui_button_group_pane_ParamLimits

0x830a,	// (0x00094cc7) main_ncimui_button_group_pane

0x8358,	// (0x00094d15) main_ncimui_pane_t3_ParamLimits

0x8358,	// (0x00094d15) main_ncimui_pane_t3

0xce0c,	// (0x000997c9) phacti_button_group_pane

0xd0ef,	// (0x00099aac) aid_size_list_single_double_ParamLimits

0x94a0,	// (0x00095e5d) popup_ezdial_listscroll_window_ParamLimits

0x94bc,	// (0x00095e79) popup_number_entry_window_cp01_ParamLimits

0x9567,	// (0x00095f24) phacti_button_pane_ParamLimits

0x9567,	// (0x00095f24) phacti_button_pane

0x0dbc,	// (0x0008d779) bg_button_pane_cp14

0xd1ca,	// (0x00099b87) phacti_button_pane_t1

0x9578,	// (0x00095f35) main_touch_calib_button_pane_ParamLimits

0x9578,	// (0x00095f35) main_touch_calib_button_pane

0xa612,	// (0x00096fcf) bg_button_pane_cp18_ParamLimits

0xa612,	// (0x00096fcf) bg_button_pane_cp18

0xd1d8,	// (0x00099b95) main_touch_calib_button_pane_t1_ParamLimits

0xd1d8,	// (0x00099b95) main_touch_calib_button_pane_t1

0xd1ee,	// (0x00099bab) main_touch_calib_button_pane_t2_ParamLimits

0xd1ee,	// (0x00099bab) main_touch_calib_button_pane_t2

0x0001,

0xfd3e,	// (0x0009c6fb) main_touch_calib_button_pane_t_ParamLimits

0xfd3e,	// (0x0009c6fb) main_touch_calib_button_pane_t

0x0dbc,	// (0x0008d779) cell_ncimui_button_pane

0x0dbc,	// (0x0008d779) bg_button_pane_cp032

0xd20c,	// (0x00099bc9) cell_ncimui_button_pane_t1

0xd933,	// (0x0009a2f0) image3_infobar_pane_ParamLimits

0xd933,	// (0x0009a2f0) image3_infobar_pane

0x870b,	// (0x000950c8) fs_bigclock_status_pane_ParamLimits

0x870b,	// (0x000950c8) fs_bigclock_status_pane

0x8718,	// (0x000950d5) main_fs_bigclock_clock_pane_ParamLimits

0x8718,	// (0x000950d5) main_fs_bigclock_clock_pane

0x872b,	// (0x000950e8) main_fs_bigclock_indi_pane_ParamLimits

0x872b,	// (0x000950e8) main_fs_bigclock_indi_pane

0x8746,	// (0x00095103) main_fs_bigclock_swipe_pane_ParamLimits

0x8746,	// (0x00095103) main_fs_bigclock_swipe_pane

0x0dbc,	// (0x0008d779) main_fs_clock_dumped_data

0x8767,	// (0x00095124) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8767,	// (0x00095124) list_single_fs_bigclock_indicator_pane_g1

0x8783,	// (0x00095140) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8783,	// (0x00095140) list_single_fs_bigclock_indicator_pane_g2

0x879d,	// (0x0009515a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x879d,	// (0x0009515a) list_single_fs_bigclock_indicator_pane_g3

0x87b7,	// (0x00095174) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x87b7,	// (0x00095174) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb84,	// (0x0009c541) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb84,	// (0x0009c541) list_single_fs_bigclock_indicator_pane_g

0x87dd,	// (0x0009519a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x87dd,	// (0x0009519a) list_single_fs_bigclock_indicator_pane_t1

0x8805,	// (0x000951c2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8805,	// (0x000951c2) list_single_fs_bigclock_indicator_pane_t2

0x882d,	// (0x000951ea) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x882d,	// (0x000951ea) list_single_fs_bigclock_indicator_pane_t3

0x8855,	// (0x00095212) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8855,	// (0x00095212) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb8f,	// (0x0009c54c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb8f,	// (0x0009c54c) list_single_fs_bigclock_indicator_pane_t

0xd21a,	// (0x00099bd7) image3_infobar_fav_pane_ParamLimits

0xd21a,	// (0x00099bd7) image3_infobar_fav_pane

0xd22a,	// (0x00099be7) image3_infobar_loc_pane_ParamLimits

0xd22a,	// (0x00099be7) image3_infobar_loc_pane

0xd23e,	// (0x00099bfb) image3_infobar_time_pane_ParamLimits

0xd23e,	// (0x00099bfb) image3_infobar_time_pane

0xb2c7,	// (0x00097c84) image3_infobar_time_pane_g1

0xd24e,	// (0x00099c0b) image3_infobar_time_pane_t1

0xb2c7,	// (0x00097c84) image3_infobar_loc_pane_g1

0xd25c,	// (0x00099c19) image3_infobar_loc_pane_g2

0x0001,

0xfd43,	// (0x0009c700) image3_infobar_loc_pane_g

0xd264,	// (0x00099c21) image3_infobar_loc_pane_t1

0xb2c7,	// (0x00097c84) image3_infobar_fav_pane_g1

0xd272,	// (0x00099c2f) image3_infobar_fav_pane_g2

0x0001,

0xfd48,	// (0x0009c705) image3_infobar_fav_pane_g

0xd27a,	// (0x00099c37) fs_bigclock_status_battery_pane

0xd283,	// (0x00099c40) fs_bigclock_status_signal_pane

0xd28c,	// (0x00099c49) fs_bigclock_status_title_pane

0xd295,	// (0x00099c52) fs_bigclock_status_signal_pane_g1

0xd29e,	// (0x00099c5b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd4d,	// (0x0009c70a) fs_bigclock_status_signal_pane_g

0xd2a6,	// (0x00099c63) fs_bigclock_status_battery_pane_g1

0xd2af,	// (0x00099c6c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd52,	// (0x0009c70f) fs_bigclock_status_battery_pane_g

0xd2b7,	// (0x00099c74) fs_bigclock_status_title_pane_t1

0xb2c7,	// (0x00097c84) main_fs_bigclock_clock_pane_g1

0xd2c5,	// (0x00099c82) main_fs_bigclock_clock_pane_g2

0xd2c5,	// (0x00099c82) main_fs_bigclock_clock_pane_g3

0xd2c5,	// (0x00099c82) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd57,	// (0x0009c714) main_fs_bigclock_clock_pane_g

0x958d,	// (0x00095f4a) main_fs_bigclock_clock_pane_t1

0x959b,	// (0x00095f58) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd60,	// (0x0009c71d) main_fs_bigclock_clock_pane_t

0xd2cd,	// (0x00099c8a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd2cd,	// (0x00099c8a) list_single_fs_bigclock_indicator_pane

0x95aa,	// (0x00095f67) list_single_fs_bigclock_pane_ParamLimits

0x95aa,	// (0x00095f67) list_single_fs_bigclock_pane

0xd2e7,	// (0x00099ca4) main_fs_bigclock_indicator_pane_t1

0xd2f6,	// (0x00099cb3) list_single_fs_bigclock_pane_g1

0xd2fe,	// (0x00099cbb) list_single_fs_bigclock_pane_t1

0xb2c7,	// (0x00097c84) main_fs_bigclock_swipe_pane_g1

0xd33e,	// (0x00099cfb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd71,	// (0x0009c72e) main_fs_bigclock_swipe_pane_g

0xd346,	// (0x00099d03) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd346,	// (0x00099d03) main_fs_bigclock_swipe_pane_t1

0x2c57,	// (0x0008f614) call_type_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_btmg_pane

0xcfcf,	// (0x0009998c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcfcf,	// (0x0009998c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfce4,	// (0x0009c6a1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfce4,	// (0x0009c6a1) list_single_cale_mrui_row_pane_g

0xd129,	// (0x00099ae6) list_recal_vselct_arw_lo_pane

0xd131,	// (0x00099aee) list_recal_vselct_arw_up_pane

0xf0e3,	// (0x0009baa0) list_recal_vselct_pane

0xd363,	// (0x00099d20) btmg_button_pane

0x960f,	// (0x00095fcc) main_btmg_pane_g1

0x0dbc,	// (0x0008d779) bg_button_pane_cp044

0xd36d,	// (0x00099d2a) btmg_button_pane_t1

0xadb9,	// (0x00097776) aid_listscroll_gen

0x9e93,	// (0x00096850) main_cntbar_detail_pane

0xccfe,	// (0x000996bb) list_cmail_folder_pane

0xcd0e,	// (0x000996cb) sp_fs_scroll_pane_cp03_ParamLimits

0x9619,	// (0x00095fd6) list_single_fs_dyc_pane_cp01_ParamLimits

0x9619,	// (0x00095fd6) list_single_fs_dyc_pane_cp01

0xd37b,	// (0x00099d38) aid_size_cmail_indent

0xd384,	// (0x00099d41) list_single_dyc_row_pane_cp01

0x965a,	// (0x00096017) cntbar_detail_list_pane_ParamLimits

0x965a,	// (0x00096017) cntbar_detail_list_pane

0x96a6,	// (0x00096063) main_cntbar_detail_cont_pane_ParamLimits

0x96a6,	// (0x00096063) main_cntbar_detail_cont_pane

0x2b7c,	// (0x0008f539) scroll_pane_cp032_ParamLimits

0x2b7c,	// (0x0008f539) scroll_pane_cp032

0x96ba,	// (0x00096077) cntbar_detail_list_event_pane_ParamLimits

0x96ba,	// (0x00096077) cntbar_detail_list_event_pane

0x966a,	// (0x00096027) cntbar_detail_list_shct_pane

0xde92,	// (0x0009a84f) aid_list_gen

0xd38d,	// (0x00099d4a) aid_scroll

0xd396,	// (0x00099d53) aid_size_touch_scroll_bar

0x96ca,	// (0x00096087) aid_list_double

0xd39f,	// (0x00099d5c) aid_list_single

0x96d3,	// (0x00096090) aid_list_single_lg

0xd3a8,	// (0x00099d65) aid_list_z_g_a_sm

0xd3b0,	// (0x00099d6d) aid_list_z_g_d

0xd3b8,	// (0x00099d75) aid_txt_z_prm

0x96dc,	// (0x00096099) aid_txt_z_prm_cp01

0x96ea,	// (0x000960a7) aid_txt_z_sec

0x96f8,	// (0x000960b5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x96f8,	// (0x000960b5) main_cntbar_detail_cont_pane_g1

0x970c,	// (0x000960c9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x970c,	// (0x000960c9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd76,	// (0x0009c733) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd76,	// (0x0009c733) main_cntbar_detail_cont_pane_g

0xd3c6,	// (0x00099d83) main_cntbar_detail_cont_pane_t1

0xd3d4,	// (0x00099d91) main_cntbar_detail_cont_pane_t2

0xd3e2,	// (0x00099d9f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd7b,	// (0x0009c738) main_cntbar_detail_cont_pane_t

0x971c,	// (0x000960d9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x971c,	// (0x000960d9) cell_cntbar_detail_list_shct_pane

0xd3f0,	// (0x00099dad) cntbar_detail_list_shct_pane_g1

0xd3f9,	// (0x00099db6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd82,	// (0x0009c73f) cntbar_detail_list_shct_pane_g

0x9730,	// (0x000960ed) cntbar_detail_list_event_pane_g1_ParamLimits

0x9730,	// (0x000960ed) cntbar_detail_list_event_pane_g1

0x973c,	// (0x000960f9) cntbar_detail_list_event_pane_g2_ParamLimits

0x973c,	// (0x000960f9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd87,	// (0x0009c744) cntbar_detail_list_event_pane_g_ParamLimits

0xfd87,	// (0x0009c744) cntbar_detail_list_event_pane_g

0x97a8,	// (0x00096165) cntbar_detail_list_event_pane_t1_ParamLimits

0x97a8,	// (0x00096165) cntbar_detail_list_event_pane_t1

0x97bd,	// (0x0009617a) cntbar_detail_list_event_pane_t2_ParamLimits

0x97bd,	// (0x0009617a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd94,	// (0x0009c751) cntbar_detail_list_event_pane_t_ParamLimits

0xfd94,	// (0x0009c751) cntbar_detail_list_event_pane_t

0xb2c7,	// (0x00097c84) cell_cntbar_detail_list_shct_pane_g1

0x2fb9,	// (0x0008f976) navi_pane_mv_g3

0x9e93,	// (0x00096850) main_cntbar_detail_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_notif_wgt_pane

0xd749,	// (0x0009a106) aid_tch_main_mp4_pane_g4

0xd92b,	// (0x0009a2e8) popup_slider_window_cp02

0xd120,	// (0x00099add) list_recal_day_event_pane

0x962e,	// (0x00095feb) cntbar_detail_btn_pane_ParamLimits

0x962e,	// (0x00095feb) cntbar_detail_btn_pane

0x9644,	// (0x00096001) cntbar_detail_btn_pane_cp01_ParamLimits

0x9644,	// (0x00096001) cntbar_detail_btn_pane_cp01

0x966a,	// (0x00096027) cntbar_detail_list_shct_pane_ParamLimits

0x967a,	// (0x00096037) cntbar_detail_pane_g1_ParamLimits

0x967a,	// (0x00096037) cntbar_detail_pane_g1

0x968a,	// (0x00096047) cntbar_detail_pane_t1_ParamLimits

0x968a,	// (0x00096047) cntbar_detail_pane_t1

0x9748,	// (0x00096105) cntbar_detail_list_event_pane_g3_ParamLimits

0x9748,	// (0x00096105) cntbar_detail_list_event_pane_g3

0x9760,	// (0x0009611d) cntbar_detail_list_event_pane_g4_ParamLimits

0x9760,	// (0x0009611d) cntbar_detail_list_event_pane_g4

0x9778,	// (0x00096135) cntbar_detail_list_event_pane_g5_ParamLimits

0x9778,	// (0x00096135) cntbar_detail_list_event_pane_g5

0x9790,	// (0x0009614d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9790,	// (0x0009614d) cntbar_detail_list_event_pane_g6

0x97d2,	// (0x0009618f) cntbar_detail_list_event_pane_t3_ParamLimits

0x97d2,	// (0x0009618f) cntbar_detail_list_event_pane_t3

0x97e4,	// (0x000961a1) popup_notif_wgt_window_ParamLimits

0x97e4,	// (0x000961a1) popup_notif_wgt_window

0x97fd,	// (0x000961ba) popup_submenu_window_cp01_ParamLimits

0x97fd,	// (0x000961ba) popup_submenu_window_cp01

0xe52f,	// (0x0009aeec) bg_popup_window_pane_cp10

0xd402,	// (0x00099dbf) listscroll_notif_wgt_pane

0xd40c,	// (0x00099dc9) list_notif_wgt_window

0xd415,	// (0x00099dd2) scroll_pane_cp033

0xd41e,	// (0x00099ddb) list_notif_wgt_row_pane_ParamLimits

0xd41e,	// (0x00099ddb) list_notif_wgt_row_pane

0xd430,	// (0x00099ded) aid_size_list_notif_wgt_del

0xd439,	// (0x00099df6) list_notif_wgt_row_pane_g1

0xd441,	// (0x00099dfe) list_notif_wgt_row_pane_g2

0xd449,	// (0x00099e06) list_notif_wgt_row_pane_g3

0x0002,

0xfd9b,	// (0x0009c758) list_notif_wgt_row_pane_g

0xd452,	// (0x00099e0f) list_notif_wgt_row_pane_t1

0xd460,	// (0x00099e1d) list_notif_wgt_row_pane_t2

0xd46e,	// (0x00099e2b) list_notif_wgt_row_pane_t3

0x0002,

0xfda2,	// (0x0009c75f) list_notif_wgt_row_pane_t

0xee5b,	// (0x0009b818) list_recal_day_event_pane_g1

0xd47c,	// (0x00099e39) list_recal_day_event_pane_t1

0x0dbc,	// (0x0008d779) bg_button_pane_cp045

0xd48b,	// (0x00099e48) cntbar_detail_btn_pane_t1

0xadc1,	// (0x0009777e) main_callh_pane_ParamLimits

0xadc1,	// (0x0009777e) main_callh_pane

0x0dbc,	// (0x0008d779) main_coverflow0_pane

0x0dbc,	// (0x0008d779) main_wgtman_pane

0x8754,	// (0x00095111) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8754,	// (0x00095111) main_fs_bigclock_unlock_btn_pane

0xccd8,	// (0x00099695) bg_button_pane_cp16

0xcce8,	// (0x000996a5) cell_tport_appsw_pane_g3

0x980f,	// (0x000961cc) cf0_flow_pane_ParamLimits

0x980f,	// (0x000961cc) cf0_flow_pane

0xd499,	// (0x00099e56) listscroll_cf0_pane

0xd4a2,	// (0x00099e5f) main_cf0_pane_g1

0x9824,	// (0x000961e1) main_cf0_pane_t1_ParamLimits

0x9824,	// (0x000961e1) main_cf0_pane_t1

0x983b,	// (0x000961f8) main_cf0_pane_t2_ParamLimits

0x983b,	// (0x000961f8) main_cf0_pane_t2

0x0001,

0xfda9,	// (0x0009c766) main_cf0_pane_t_ParamLimits

0xfda9,	// (0x0009c766) main_cf0_pane_t

0xd4ac,	// (0x00099e69) scroll_pane_cp11

0x9852,	// (0x0009620f) cf0_flow_pane_g1

0x985a,	// (0x00096217) cf0_flow_pane_g2

0x0001,

0xfdae,	// (0x0009c76b) cf0_flow_pane_g

0x9862,	// (0x0009621f) cf0_flow_pane_t1

0x0dbc,	// (0x0008d779) main_call6_pane

0x0dbc,	// (0x0008d779) main_calllock_pane

0x9870,	// (0x0009622d) call6_btn_grp_pane_ParamLimits

0x9870,	// (0x0009622d) call6_btn_grp_pane

0x988a,	// (0x00096247) call6_pane_g1_ParamLimits

0x988a,	// (0x00096247) call6_pane_g1

0x989f,	// (0x0009625c) popup_call6_1st_window_ParamLimits

0x989f,	// (0x0009625c) popup_call6_1st_window

0x98b0,	// (0x0009626d) popup_call6_2nd_window_ParamLimits

0x98b0,	// (0x0009626d) popup_call6_2nd_window

0x98c1,	// (0x0009627e) cell_call6_btn_pane_ParamLimits

0x98c1,	// (0x0009627e) cell_call6_btn_pane

0xe52f,	// (0x0009aeec) bg_popup_call2_in_pane_cp03

0xd4b7,	// (0x00099e74) popup_call6_1st_window_g1

0xd4bf,	// (0x00099e7c) popup_call6_1st_window_g2

0xd4c7,	// (0x00099e84) popup_call6_1st_window_g3

0x0002,

0xfdb3,	// (0x0009c770) popup_call6_1st_window_g

0xd4cf,	// (0x00099e8c) popup_call6_1st_window_t1

0xd4de,	// (0x00099e9b) popup_call6_1st_window_t2

0xd4ee,	// (0x00099eab) popup_call6_1st_window_t3

0x0002,

0xfdba,	// (0x0009c777) popup_call6_1st_window_t

0xe52f,	// (0x0009aeec) bg_popup_call2_in_pane_cp04

0xd4b7,	// (0x00099e74) popup_call6_2nd_window_g1

0xd4bf,	// (0x00099e7c) popup_call6_2nd_window_g2

0xd4c7,	// (0x00099e84) popup_call6_2nd_window_g3

0x0002,

0xfdb3,	// (0x0009c770) popup_call6_2nd_window_g

0xd4cf,	// (0x00099e8c) popup_call6_2nd_window_t1

0x0dbc,	// (0x0008d779) bg_button_pane_cp15

0xd4fe,	// (0x00099ebb) cell_call6_btn_pane_g1

0xd507,	// (0x00099ec4) cell_call6_btn_pane_t1

0x98d5,	// (0x00096292) listscroll_wgtman_pane_ParamLimits

0x98d5,	// (0x00096292) listscroll_wgtman_pane

0x98f8,	// (0x000962b5) wgtman_btn_pane_ParamLimits

0x98f8,	// (0x000962b5) wgtman_btn_pane

0xe3d8,	// (0x0009ad95) aid_scroll_copy1

0xd516,	// (0x00099ed3) list_wgtman_pane

0x993b,	// (0x000962f8) wgtman_btn_pane_g1_ParamLimits

0x993b,	// (0x000962f8) wgtman_btn_pane_g1

0x9967,	// (0x00096324) wgtman_btn_pane_t1_ParamLimits

0x9967,	// (0x00096324) wgtman_btn_pane_t1

0xd520,	// (0x00099edd) wgtman_btn_pane_t2_ParamLimits

0xd520,	// (0x00099edd) wgtman_btn_pane_t2

0x0001,

0xfdc1,	// (0x0009c77e) wgtman_btn_pane_t_ParamLimits

0xfdc1,	// (0x0009c77e) wgtman_btn_pane_t

0x99a4,	// (0x00096361) listrow_wgtman_pane_ParamLimits

0x99a4,	// (0x00096361) listrow_wgtman_pane

0x99b6,	// (0x00096373) listrow_wgtman_pane_g1

0x99bf,	// (0x0009637c) listrow_wgtman_pane_g2

0x0001,

0xfdc6,	// (0x0009c783) listrow_wgtman_pane_g

0x99c9,	// (0x00096386) listrow_wgtman_pane_t1

0x99d7,	// (0x00096394) listrow_wgtman_pane_t2

0x0001,

0xfdcb,	// (0x0009c788) listrow_wgtman_pane_t

0x99e5,	// (0x000963a2) wait_bar_pane_cp09

0xd537,	// (0x00099ef4) main_calllock_btn_pane

0xd541,	// (0x00099efe) main_calllock_pane_g1

0x0dbc,	// (0x0008d779) bg_button_pane_cp17

0xd54d,	// (0x00099f0a) main_calllock_btn_pane_g1

0xd556,	// (0x00099f13) main_calllock_btn_pane_t1

0x0dbc,	// (0x0008d779) main_dialer3_pane

0x0dbc,	// (0x0008d779) main_fmrd2_pane

0xb2c7,	// (0x00097c84) main_fs_bigclock_unlock_btn_pane_g1

0xd56d,	// (0x00099f2a) main_fs_bigclock_unlock_btn_pane_t1

0x99ed,	// (0x000963aa) area_fmrd2_info_pane_ParamLimits

0x99ed,	// (0x000963aa) area_fmrd2_info_pane

0x99fe,	// (0x000963bb) area_fmrd2_visual_pane_ParamLimits

0x99fe,	// (0x000963bb) area_fmrd2_visual_pane

0x9a0c,	// (0x000963c9) fmrd2_indi_pane_ParamLimits

0x9a0c,	// (0x000963c9) fmrd2_indi_pane

0x9a19,	// (0x000963d6) area_fmrd2_visual_pane_g1

0x9a21,	// (0x000963de) area_fmrd2_visual_pane_t1

0x9a31,	// (0x000963ee) area_fmrd2_visual_pane_t2

0x9a41,	// (0x000963fe) area_fmrd2_visual_pane_t3

0x0002,

0xfdd5,	// (0x0009c792) area_fmrd2_visual_pane_t

0x9a51,	// (0x0009640e) area_fmrd2_info_pane_g1

0x9a59,	// (0x00096416) area_fmrd2_info_pane_t1

0x9a69,	// (0x00096426) area_fmrd2_info_pane_t2

0x9a79,	// (0x00096436) area_fmrd2_info_pane_t3

0x9a89,	// (0x00096446) area_fmrd2_info_pane_t4

0x0003,

0xfddc,	// (0x0009c799) area_fmrd2_info_pane_t

0x9a97,	// (0x00096454) fmrd2_indi_pane_t1

0x9aa7,	// (0x00096464) fmrd2_indi_pane_t2

0x9ab7,	// (0x00096474) fmrd2_indi_pane_t3

0x0002,

0xfde5,	// (0x0009c7a2) fmrd2_indi_pane_t

0x87c6,	// (0x00095183) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x87c6,	// (0x00095183) list_single_fs_bigclock_indicator_pane_g5

0x886a,	// (0x00095227) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x886a,	// (0x00095227) list_single_fs_bigclock_indicator_pane_t5

0x921d,	// (0x00095bda) aid_cell_bcale_month_pane_ParamLimits

0x921d,	// (0x00095bda) aid_cell_bcale_month_pane

0x922f,	// (0x00095bec) bcale_month_pane_ParamLimits

0x922f,	// (0x00095bec) bcale_month_pane

0x9247,	// (0x00095c04) bcale_preview_pane_ParamLimits

0x9247,	// (0x00095c04) bcale_preview_pane

0xd2fe,	// (0x00099cbb) list_single_fs_bigclock_pane_t1_ParamLimits

0xd31a,	// (0x00099cd7) list_single_fs_bigclock_pane_t2_ParamLimits

0xd31a,	// (0x00099cd7) list_single_fs_bigclock_pane_t2

0x0001,

0xfd6c,	// (0x0009c729) list_single_fs_bigclock_pane_t_ParamLimits

0xfd6c,	// (0x0009c729) list_single_fs_bigclock_pane_t

0xd565,	// (0x00099f22) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd0,	// (0x0009c78d) main_fs_bigclock_unlock_btn_pane_g

0x9ac7,	// (0x00096484) aid_dia3_key_size_ParamLimits

0x9ac7,	// (0x00096484) aid_dia3_key_size

0x9ad6,	// (0x00096493) aid_dia3_listrow_size_ParamLimits

0x9ad6,	// (0x00096493) aid_dia3_listrow_size

0x9aeb,	// (0x000964a8) dia3_keypad_fun_pane_ParamLimits

0x9aeb,	// (0x000964a8) dia3_keypad_fun_pane

0x9b07,	// (0x000964c4) dia3_keypad_num_pane_ParamLimits

0x9b07,	// (0x000964c4) dia3_keypad_num_pane

0x9b22,	// (0x000964df) dia3_listscroll_pane_ParamLimits

0x9b22,	// (0x000964df) dia3_listscroll_pane

0x9b35,	// (0x000964f2) dia3_numentry_pane_ParamLimits

0x9b35,	// (0x000964f2) dia3_numentry_pane

0xd57b,	// (0x00099f38) dia3_list_pane

0xd586,	// (0x00099f43) scroll_pane_cp12

0x0dbc,	// (0x0008d779) bg_dia3_numentry_pane

0x9b49,	// (0x00096506) dia3_numentry_pane_t1

0x9b58,	// (0x00096515) cell_dia3_key_num_pane

0x9b60,	// (0x0009651d) cell_dia3_key0_fun_pane_ParamLimits

0x9b60,	// (0x0009651d) cell_dia3_key0_fun_pane

0x9b74,	// (0x00096531) cell_dia3_key1_fun_pane_ParamLimits

0x9b74,	// (0x00096531) cell_dia3_key1_fun_pane

0x9b8c,	// (0x00096549) dia3_listrow_pane

0xc597,	// (0x00098f54) bg_dia3_numentry_pane_g1

0x0dbc,	// (0x0008d779) bg_button_pane_cp21

0xd591,	// (0x00099f4e) cell_dia3_key_num_pane_t1

0xd59f,	// (0x00099f5c) cell_dia3_key_num_pane_t2

0xd5ae,	// (0x00099f6b) cell_dia3_key_num_pane_t3

0xd5bd,	// (0x00099f7a) cell_dia3_key_num_pane_t4

0x0003,

0xfdec,	// (0x0009c7a9) cell_dia3_key_num_pane_t

0x0dbc,	// (0x0008d779) bg_button_pane_cp19

0x9b9e,	// (0x0009655b) cell_dia3_key0_fun_pane_g1

0x0dbc,	// (0x0008d779) bg_button_pane_cp20

0x9ba6,	// (0x00096563) cell_dia3_key1_fun_pane_g1

0x9bae,	// (0x0009656b) area_left_week_number_pane

0x9bb7,	// (0x00096574) area_top_day_name_pane

0x9bc0,	// (0x0009657d) frame_month_view_pane

0x9bc8,	// (0x00096585) grid_month_view_pane

0x9bd2,	// (0x0009658f) cell_top_day_name_pane_ParamLimits

0x9bd2,	// (0x0009658f) cell_top_day_name_pane

0x9be8,	// (0x000965a5) cell_area_left_week_number_pane_ParamLimits

0x9be8,	// (0x000965a5) cell_area_left_week_number_pane

0x9bfc,	// (0x000965b9) cell_month_view_pane_ParamLimits

0x9bfc,	// (0x000965b9) cell_month_view_pane

0xd5cc,	// (0x00099f89) frm_month_g1

0x9c17,	// (0x000965d4) frm_month_g2

0x9c1f,	// (0x000965dc) frm_month_g3

0x9c27,	// (0x000965e4) frm_month_g4

0x9c2f,	// (0x000965ec) frm_month_g5

0x9c37,	// (0x000965f4) frm_month_g6

0x9c3f,	// (0x000965fc) frm_month_g7

0xd5d5,	// (0x00099f92) frm_month_g8

0x9c47,	// (0x00096604) frm_month_g9

0x9c50,	// (0x0009660d) frm_month_g10

0x9c59,	// (0x00096616) frm_month_g11

0x9c62,	// (0x0009661f) frm_month_g12

0x9c6b,	// (0x00096628) frm_month_g13

0x9c74,	// (0x00096631) frm_month_g14

0x9c7d,	// (0x0009663a) frm_month_g15

0x9c86,	// (0x00096643) frm_month_g16

0x000f,

0xfdf5,	// (0x0009c7b2) frm_month_g

0x9c8f,	// (0x0009664c) cell_top_day_name_pane_t1

0x9c9e,	// (0x0009665b) cell_area_left_week_number_pane_g1

0x9c8f,	// (0x0009664c) cell_area_left_week_number_pane_t1

0xb2c7,	// (0x00097c84) cell_month_view_pane_g1

0x9ca6,	// (0x00096663) cell_month_view_pane_t1

0x0dbc,	// (0x0008d779) main_fps_pane

0xca4c,	// (0x00099409) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca4c,	// (0x00099409) cmail_ddmenu_btn02_pane_cp1

0xca68,	// (0x00099425) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca68,	// (0x00099425) cmail_ddmenu_btn02_pane_cp2

0x94ee,	// (0x00095eab) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x94ee,	// (0x00095eab) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd1d,	// (0x0009c6da) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd1d,	// (0x0009c6da) cmail_ddmenu_btn02_pane_g

0x950c,	// (0x00095ec9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x950c,	// (0x00095ec9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd22,	// (0x0009c6df) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd22,	// (0x0009c6df) cmail_ddmenu_btn02_pane_t

0x9cb5,	// (0x00096672) fps_text_pane_ParamLimits

0x9cb5,	// (0x00096672) fps_text_pane

0x9ccc,	// (0x00096689) main_fps_pane_g1_ParamLimits

0x9ccc,	// (0x00096689) main_fps_pane_g1

0x9ce6,	// (0x000966a3) wait_bar_pane_cp010_ParamLimits

0x9ce6,	// (0x000966a3) wait_bar_pane_cp010

0x9cf7,	// (0x000966b4) fps_text_pane_t1_ParamLimits

0x9cf7,	// (0x000966b4) fps_text_pane_t1

0xbd06,	// (0x000986c3) cam4_image_uncrop_pane_g1

0xbd0f,	// (0x000986cc) cam4_image_uncrop_pane_g2

0x6a13,	// (0x000933d0) cam4_image_uncrop_pane_g3

0x6a1c,	// (0x000933d9) cam4_image_uncrop_pane_g4

0x0003,

0xf88e,	// (0x0009c24b) cam4_image_uncrop_pane_g

0x9b8c,	// (0x00096549) dia3_listrow_pane_ParamLimits

0x0dbc,	// (0x0008d779) main_phob2_pane

0x9056,	// (0x00095a13) cell_tport_appsw_pane_cp02_ParamLimits

0x9056,	// (0x00095a13) cell_tport_appsw_pane_cp02

0x906a,	// (0x00095a27) cell_tport_appsw_pane_cp03_ParamLimits

0x906a,	// (0x00095a27) cell_tport_appsw_pane_cp03

0x0dbc,	// (0x0008d779) phob2_contact_card_pane

0x0dbc,	// (0x0008d779) phob2_listscroll_pane

0xd5de,	// (0x00099f9b) phob2_list_pane

0xd5e6,	// (0x00099fa3) scroll_pane_cp034

0x9d0f,	// (0x000966cc) phob2_cc_data_pane_ParamLimits

0x9d0f,	// (0x000966cc) phob2_cc_data_pane

0x9d2e,	// (0x000966eb) phob2_cc_listscroll_pane_ParamLimits

0x9d2e,	// (0x000966eb) phob2_cc_listscroll_pane

0x9d4c,	// (0x00096709) list_double_large_graphic_phob2_pane_ParamLimits

0x9d4c,	// (0x00096709) list_double_large_graphic_phob2_pane

0xd5ee,	// (0x00099fab) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd5ee,	// (0x00099fab) list_double_large_graphic_phob2_pane_g1

0xd5fb,	// (0x00099fb8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd5fb,	// (0x00099fb8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe16,	// (0x0009c7d3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe16,	// (0x0009c7d3) list_double_large_graphic_phob2_pane_g

0xd607,	// (0x00099fc4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd607,	// (0x00099fc4) list_double_large_graphic_phob2_pane_t1

0xd61c,	// (0x00099fd9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd61c,	// (0x00099fd9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe1b,	// (0x0009c7d8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe1b,	// (0x0009c7d8) list_double_large_graphic_phob2_pane_t

0x0dbc,	// (0x0008d779) list_highlight_pane_cp024

0xd62e,	// (0x00099feb) phob2_cc_button_pane

0x9d5e,	// (0x0009671b) phob2_cc_data_pane_g1_ParamLimits

0x9d5e,	// (0x0009671b) phob2_cc_data_pane_g1

0x9d73,	// (0x00096730) phob2_cc_data_pane_g2_ParamLimits

0x9d73,	// (0x00096730) phob2_cc_data_pane_g2

0x0001,

0xfe20,	// (0x0009c7dd) phob2_cc_data_pane_g_ParamLimits

0xfe20,	// (0x0009c7dd) phob2_cc_data_pane_g

0x9d85,	// (0x00096742) phob2_cc_data_pane_t1_ParamLimits

0x9d85,	// (0x00096742) phob2_cc_data_pane_t1

0x9d9d,	// (0x0009675a) phob2_cc_data_pane_t2_ParamLimits

0x9d9d,	// (0x0009675a) phob2_cc_data_pane_t2

0x9db5,	// (0x00096772) phob2_cc_data_pane_t3_ParamLimits

0x9db5,	// (0x00096772) phob2_cc_data_pane_t3

0x0002,

0xfe25,	// (0x0009c7e2) phob2_cc_data_pane_t_ParamLimits

0xfe25,	// (0x0009c7e2) phob2_cc_data_pane_t

0xd636,	// (0x00099ff3) phob2_cc_list_pane_ParamLimits

0xd636,	// (0x00099ff3) phob2_cc_list_pane

0xf05e,	// (0x0009ba1b) scroll_pane_cp035_ParamLimits

0xf05e,	// (0x0009ba1b) scroll_pane_cp035

0x9e93,	// (0x00096850) bg_button_pane_cp033

0xd642,	// (0x00099fff) phob2_cc_button_pane_g1

0xd64e,	// (0x0009a00b) phob2_cc_button_pane_t1

0xd663,	// (0x0009a020) phob2_cc_button_pane_t2

0x0001,

0xfe2c,	// (0x0009c7e9) phob2_cc_button_pane_t

0x9dcd,	// (0x0009678a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9dcd,	// (0x0009678a) list_double_large_graphic_phob2_cc_pane

0x9ddf,	// (0x0009679c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ddf,	// (0x0009679c) list_double_large_graphic_phob2_cc_pane_g1

0x9deb,	// (0x000967a8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9deb,	// (0x000967a8) list_double_large_graphic_phob2_cc_pane_g2

0x9df7,	// (0x000967b4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9df7,	// (0x000967b4) list_double_large_graphic_phob2_cc_pane_g3

0x9e03,	// (0x000967c0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e03,	// (0x000967c0) list_double_large_graphic_phob2_cc_pane_g4

0x9e0f,	// (0x000967cc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e0f,	// (0x000967cc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe31,	// (0x0009c7ee) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe31,	// (0x0009c7ee) list_double_large_graphic_phob2_cc_pane_g

0x9e1b,	// (0x000967d8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e1b,	// (0x000967d8) list_double_large_graphic_phob2_cc_pane_t1

0x9e44,	// (0x00096801) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9e44,	// (0x00096801) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3c,	// (0x0009c7f9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3c,	// (0x0009c7f9) list_double_large_graphic_phob2_cc_pane_t

0xd675,	// (0x0009a032) list_highlight_pane_cp025_ParamLimits

0xd675,	// (0x0009a032) list_highlight_pane_cp025

0x9e93,	// (0x00096850) bg_button_pane_cp033_ParamLimits

0xd642,	// (0x00099fff) phob2_cc_button_pane_g1_ParamLimits

0xd64e,	// (0x0009a00b) phob2_cc_button_pane_t1_ParamLimits

0xd663,	// (0x0009a020) phob2_cc_button_pane_t2_ParamLimits

0xfe2c,	// (0x0009c7e9) phob2_cc_button_pane_t_ParamLimits

0x0dfe,	// (0x0008d7bb) popup_wgtman_window

0xed37,	// (0x0009b6f4) scroll_pane_cp038

0x991d,	// (0x000962da) wgtman_btn_pane_cp_01_ParamLimits

0x991d,	// (0x000962da) wgtman_btn_pane_cp_01

0xd683,	// (0x0009a040) wgtman_content_pane

0xd68c,	// (0x0009a049) wgtman_heading_pane

0x0dbc,	// (0x0008d779) bg_heading_pane_cp02

0xd695,	// (0x0009a052) wgtman_heading_pane_g1

0xd69d,	// (0x0009a05a) wgtman_heading_pane_t1

0xd6ab,	// (0x0009a068) scroll_pane_cp036

0xd6b3,	// (0x0009a070) wgtman_list_pane

0xd6bb,	// (0x0009a078) wgtman_list_pane_t1_ParamLimits

0xd6bb,	// (0x0009a078) wgtman_list_pane_t1

0xd985,	// (0x0009a342) cam4_grid_pane

0x76c1,	// (0x0009407e) bg_button_pane_cp015_ParamLimits

0x76d3,	// (0x00094090) bg_button_pane_cp016_ParamLimits

0x76e6,	// (0x000940a3) bg_button_pane_cp017_ParamLimits

0x773e,	// (0x000940fb) popup_vitu2_query_window_g3_ParamLimits

0x773e,	// (0x000940fb) popup_vitu2_query_window_g3

0x77fb,	// (0x000941b8) popup_vitu2_query_window_t6_ParamLimits

0x77fb,	// (0x000941b8) popup_vitu2_query_window_t6

0x7826,	// (0x000941e3) popup_vitu2_query_window_t7_ParamLimits

0x7826,	// (0x000941e3) popup_vitu2_query_window_t7

0xbd06,	// (0x000986c3) cam4_grid_pane_g1

0xbd0f,	// (0x000986cc) cam4_grid_pane_g2

0xd6d8,	// (0x0009a095) cam4_grid_pane_g3

0xd6e1,	// (0x0009a09e) cam4_grid_pane_g4

0x0003,

0xfe41,	// (0x0009c7fe) cam4_grid_pane_g

0x1df9,	// (0x0008e7b6) aid_placing_vt_slider_lsc_ParamLimits

0x2104,	// (0x0008eac1) vidtel_button_pane_ParamLimits

0x2104,	// (0x0008eac1) vidtel_button_pane

0x0dbc,	// (0x0008d779) bg_button_pane_cp034

0x9e6d,	// (0x0009682a) vidtel_button_pane_g1

0xd6ec,	// (0x0009a0a9) vidtel_button_pane_t1

0xee39,	// (0x0009b7f6) aid_size_vtel_slider_touch

0xf05e,	// (0x0009ba1b) scroll_pane_cp039

0xc5d5,	// (0x00098f92) ncim_query_button_pane_cp01_ParamLimits

0xc5f4,	// (0x00098fb1) ncimui_query_pane_g1_ParamLimits

0x9e93,	// (0x00096850) input_focus_pane_cp012_ParamLimits

0xc619,	// (0x00098fd6) ncim_query_entry_pane_t1_ParamLimits

0xf05e,	// (0x0009ba1b) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
