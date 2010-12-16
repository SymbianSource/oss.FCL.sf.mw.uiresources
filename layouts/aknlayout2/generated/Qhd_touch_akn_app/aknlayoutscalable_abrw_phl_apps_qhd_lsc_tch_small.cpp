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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005e5d9 };

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
0x08e6,	// (0x0005eebf) Screen

0x08f2,	// (0x0005eecb) application_window

0x092e,	// (0x0005ef07) area_bottom_pane_ParamLimits

0x092e,	// (0x0005ef07) area_bottom_pane

0x0967,	// (0x0005ef40) area_top_pane_ParamLimits

0x0967,	// (0x0005ef40) area_top_pane

0xa033,	// (0x0006860c) call_video_uplink_pane_ParamLimits

0xa033,	// (0x0006860c) call_video_uplink_pane

0x09f5,	// (0x0005efce) main_pane_ParamLimits

0x09f5,	// (0x0005efce) main_pane

0xa5f8,	// (0x00068bd1) context_pane

0x4528,	// (0x00062b01) navi_pane

0x455a,	// (0x00062b33) popup_cale_events_window_ParamLimits

0x455a,	// (0x00062b33) popup_cale_events_window

0xa60b,	// (0x00068be4) popup_mup_playback_window

0x4572,	// (0x00062b4b) signal_pane

0xe3ed,	// (0x0006c9c6) main_browser_pane

0xe605,	// (0x0006cbde) main_burst_pane

0x4288,	// (0x00062861) main_calc_pane

0xa598,	// (0x00068b71) main_cale_day_pane

0x0dc8,	// (0x0005f3a1) main_cale_month_pane

0xa598,	// (0x00068b71) main_cale_week_pane

0xe605,	// (0x0006cbde) main_call_pane

0xe07b,	// (0x0006c654) main_call_poc_pane

0xe605,	// (0x0006cbde) main_camera_pane

0xe605,	// (0x0006cbde) main_chi_dic_pane

0xed76,	// (0x0006d34f) main_clock_pane

0xe07b,	// (0x0006c654) main_fmradio_pane

0xe605,	// (0x0006cbde) main_graph_messa_pane

0xe07b,	// (0x0006c654) main_help_pane

0xe3ed,	// (0x0006c9c6) main_im_pane

0xe2d6,	// (0x0006c8af) main_image_pane_ParamLimits

0xe2d6,	// (0x0006c8af) main_image_pane

0xe07b,	// (0x0006c654) main_location2_pane

0xe605,	// (0x0006cbde) main_location_pane

0xe2d6,	// (0x0006c8af) main_messa_pane

0xe07b,	// (0x0006c654) main_mp2_pane

0xe605,	// (0x0006cbde) main_mp_pane

0xe07b,	// (0x0006c654) main_msg_pane

0xe07b,	// (0x0006c654) main_mup_eq_pane

0xe07b,	// (0x0006c654) main_mup_pane

0xe3ed,	// (0x0006c9c6) main_notes_pane

0xe07b,	// (0x0006c654) main_pec_pane

0xe07b,	// (0x0006c654) main_phob_pane

0xe07b,	// (0x0006c654) main_pinb_pane

0xe07b,	// (0x0006c654) main_postcard_pane

0xe07b,	// (0x0006c654) main_qdial_pane

0xe605,	// (0x0006cbde) main_skin_pane

0xe07b,	// (0x0006c654) main_smil2_pane

0xe605,	// (0x0006cbde) main_smil_pane

0xe605,	// (0x0006cbde) main_video_pane

0xe605,	// (0x0006cbde) main_video_tele_pane

0xe2d6,	// (0x0006c8af) main_viewer_pane_ParamLimits

0xe2d6,	// (0x0006c8af) main_viewer_pane

0xe605,	// (0x0006cbde) main_vorec_pane

0x42dc,	// (0x000628b5) popup_blid_sat_info_window_ParamLimits

0x42dc,	// (0x000628b5) popup_blid_sat_info_window

0x4334,	// (0x0006290d) popup_dyc_status_message_window_ParamLimits

0x4334,	// (0x0006290d) popup_dyc_status_message_window

0x434e,	// (0x00062927) popup_grid_large_graphic_window_ParamLimits

0x434e,	// (0x00062927) popup_grid_large_graphic_window

0x440a,	// (0x000629e3) popup_loc_request_window_ParamLimits

0x440a,	// (0x000629e3) popup_loc_request_window

0x4500,	// (0x00062ad9) popup_wml_address_window_ParamLimits

0x4500,	// (0x00062ad9) popup_wml_address_window

0x40c2,	// (0x0006269b) call_muted_g1

0x3320,	// (0x000618f9) popup_call_audio_conf_window_ParamLimits

0x3320,	// (0x000618f9) popup_call_audio_conf_window

0x40d6,	// (0x000626af) popup_call_audio_first_window_ParamLimits

0x40d6,	// (0x000626af) popup_call_audio_first_window

0x414c,	// (0x00062725) popup_call_audio_in_window_ParamLimits

0x414c,	// (0x00062725) popup_call_audio_in_window

0x4188,	// (0x00062761) popup_call_audio_out_window_ParamLimits

0x4188,	// (0x00062761) popup_call_audio_out_window

0x41c2,	// (0x0006279b) popup_call_audio_second_window_ParamLimits

0x41c2,	// (0x0006279b) popup_call_audio_second_window

0x4218,	// (0x000627f1) popup_call_audio_wait_window_ParamLimits

0x4218,	// (0x000627f1) popup_call_audio_wait_window

0x424d,	// (0x00062826) popup_number_entry_window_ParamLimits

0x424d,	// (0x00062826) popup_number_entry_window

0xd92d,	// (0x0006bf06) bg_popup_call_pane_cp05_ParamLimits

0xd92d,	// (0x0006bf06) bg_popup_call_pane_cp05

0xd94d,	// (0x0006bf26) popup_number_entry_window_t1

0xd960,	// (0x0006bf39) popup_number_entry_window_t2

0xd972,	// (0x0006bf4b) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0006d5f6) popup_number_entry_window_t

0xd984,	// (0x0006bf5d) text_title_cp2

0xd997,	// (0x0006bf70) bg_popup_call_pane_cp_ParamLimits

0xd997,	// (0x0006bf70) bg_popup_call_pane_cp

0xd9a5,	// (0x0006bf7e) call_thumbnail_pane

0xd9ad,	// (0x0006bf86) popup_call_audio_in_window_g1_ParamLimits

0xd9ad,	// (0x0006bf86) popup_call_audio_in_window_g1

0xd9b9,	// (0x0006bf92) popup_call_audio_in_window_g2_ParamLimits

0xd9b9,	// (0x0006bf92) popup_call_audio_in_window_g2

0xd9c5,	// (0x0006bf9e) popup_call_audio_in_window_g3_ParamLimits

0xd9c5,	// (0x0006bf9e) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0006d5ff) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0006d5ff) popup_call_audio_in_window_g

0xd9d1,	// (0x0006bfaa) popup_call_audio_in_window_t1_ParamLimits

0xd9d1,	// (0x0006bfaa) popup_call_audio_in_window_t1

0xd9ed,	// (0x0006bfc6) popup_call_audio_in_window_t2_ParamLimits

0xd9ed,	// (0x0006bfc6) popup_call_audio_in_window_t2

0xda09,	// (0x0006bfe2) popup_call_audio_in_window_t3_ParamLimits

0xda09,	// (0x0006bfe2) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0006d606) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0006d606) popup_call_audio_in_window_t

0xd997,	// (0x0006bf70) bg_popup_call_pane_cp01_ParamLimits

0xd997,	// (0x0006bf70) bg_popup_call_pane_cp01

0xd9a5,	// (0x0006bf7e) call_thumbnail_pane_cp02

0xda1c,	// (0x0006bff5) call_type_pane_cp022

0xda24,	// (0x0006bffd) popup_call_audio_out_window_g1_ParamLimits

0xda24,	// (0x0006bffd) popup_call_audio_out_window_g1

0xda36,	// (0x0006c00f) popup_call_audio_out_window_g2_ParamLimits

0xda36,	// (0x0006c00f) popup_call_audio_out_window_g2

0xda42,	// (0x0006c01b) popup_call_audio_out_window_g3_ParamLimits

0xda42,	// (0x0006c01b) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0006d60d) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0006d60d) popup_call_audio_out_window_g

0xda54,	// (0x0006c02d) popup_call_audio_out_window_t1_ParamLimits

0xda54,	// (0x0006c02d) popup_call_audio_out_window_t1

0xda6c,	// (0x0006c045) popup_call_audio_out_window_t2_ParamLimits

0xda6c,	// (0x0006c045) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0006d614) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0006d614) popup_call_audio_out_window_t

0xda81,	// (0x0006c05a) bg_popup_call_pane_ParamLimits

0xda81,	// (0x0006c05a) bg_popup_call_pane

0x0b4a,	// (0x0005f123) call_thumbnail_pane_cp_ParamLimits

0x0b4a,	// (0x0005f123) call_thumbnail_pane_cp

0xdb05,	// (0x0006c0de) call_type_pane_cp01_ParamLimits

0xdb05,	// (0x0006c0de) call_type_pane_cp01

0xdb49,	// (0x0006c122) popup_call_audio_first_window_g1_ParamLimits

0xdb49,	// (0x0006c122) popup_call_audio_first_window_g1

0xdb95,	// (0x0006c16e) popup_call_audio_first_window_g2_ParamLimits

0xdb95,	// (0x0006c16e) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0006d619) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0006d619) popup_call_audio_first_window_g

0xdf14,	// (0x0006c4ed) popup_call_audio_first_window_t1_ParamLimits

0xdf14,	// (0x0006c4ed) popup_call_audio_first_window_t1

0xdfc0,	// (0x0006c599) popup_call_audio_first_window_t4_ParamLimits

0xdfc0,	// (0x0006c599) popup_call_audio_first_window_t4

0xe04c,	// (0x0006c625) popup_call_audio_first_window_t5_ParamLimits

0xe04c,	// (0x0006c625) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0006d61e) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0006d61e) popup_call_audio_first_window_t

0xe07b,	// (0x0006c654) bg_popup_call_pane_cp02

0xe085,	// (0x0006c65e) call_type_pane_cp023

0xe08d,	// (0x0006c666) popup_call_audio_wait_window_g1

0xe095,	// (0x0006c66e) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0006d625) popup_call_audio_wait_window_g

0xe09d,	// (0x0006c676) popup_call_audio_wait_window_t3

0xe0ab,	// (0x0006c684) bg_popup_call_pane_cp03_ParamLimits

0xe0ab,	// (0x0006c684) bg_popup_call_pane_cp03

0xe10b,	// (0x0006c6e4) call_thumbnail_pane_cp011_ParamLimits

0xe10b,	// (0x0006c6e4) call_thumbnail_pane_cp011

0xe117,	// (0x0006c6f0) call_type_pane_cp034_ParamLimits

0xe117,	// (0x0006c6f0) call_type_pane_cp034

0xe153,	// (0x0006c72c) popup_call_audio_second_window_g1_ParamLimits

0xe153,	// (0x0006c72c) popup_call_audio_second_window_g1

0xe18f,	// (0x0006c768) popup_call_audio_second_window_g2_ParamLimits

0xe18f,	// (0x0006c768) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0006d62a) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0006d62a) popup_call_audio_second_window_g

0xe1cb,	// (0x0006c7a4) popup_call_audio_second_window_t1_ParamLimits

0xe1cb,	// (0x0006c7a4) popup_call_audio_second_window_t1

0xe24c,	// (0x0006c825) popup_call_audio_second_window_t2_ParamLimits

0xe24c,	// (0x0006c825) popup_call_audio_second_window_t2

0xe282,	// (0x0006c85b) popup_call_audio_second_window_t3_ParamLimits

0xe282,	// (0x0006c85b) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0006d62f) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0006d62f) popup_call_audio_second_window_t

0xe07b,	// (0x0006c654) bg_popup_call_pane_cp04

0xe2b8,	// (0x0006c891) list_conf_pane

0xe2c0,	// (0x0006c899) popup_call_audio_conf_window_t1

0xe2ce,	// (0x0006c8a7) call_thumbnail_pane_g1

0xe2d6,	// (0x0006c8af) bg_pinb_pane_ParamLimits

0xe2d6,	// (0x0006c8af) bg_pinb_pane

0xe2e4,	// (0x0006c8bd) find_pinb_pane

0xe2d6,	// (0x0006c8af) listscroll_pinb_pane_ParamLimits

0xe2d6,	// (0x0006c8af) listscroll_pinb_pane

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g1

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g2

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g3

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g4

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g5

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g6

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g7

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g8

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g9

0xe2ee,	// (0x0006c8c7) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0006d636) pinb_bg_pane_g

0xd923,	// (0x0006befc) grid_pinb_pane

0xd923,	// (0x0006befc) list_pinb_pane

0xdbd9,	// (0x0006c1b2) scroll_pane_cp01_ParamLimits

0xdbd9,	// (0x0006c1b2) scroll_pane_cp01

0xe2f8,	// (0x0006c8d1) find_pinb_pane_g1_ParamLimits

0xe2f8,	// (0x0006c8d1) find_pinb_pane_g1

0xe310,	// (0x0006c8e9) find_pinb_pane_t1

0xe322,	// (0x0006c8fb) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0006d650) find_pinb_pane_t

0xe337,	// (0x0006c910) input_focus_pane_cp01_ParamLimits

0xe337,	// (0x0006c910) input_focus_pane_cp01

0xe343,	// (0x0006c91c) cell_pinb_pane_ParamLimits

0xe343,	// (0x0006c91c) cell_pinb_pane

0xe351,	// (0x0006c92a) cell_pinb_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_pinb_pane_g1

0xe35f,	// (0x0006c938) cell_pinb_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) cell_pinb_pane_g2

0xe35f,	// (0x0006c938) cell_pinb_pane_g3_ParamLimits

0xe35f,	// (0x0006c938) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0006d655) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0006d655) cell_pinb_pane_g

0xe07b,	// (0x0006c654) grid_highlight_pane_cp01

0xe343,	// (0x0006c91c) list_pinb_item_pane_ParamLimits

0xe343,	// (0x0006c91c) list_pinb_item_pane

0xd923,	// (0x0006befc) list_highlight_pane_cp02

0xe36d,	// (0x0006c946) list_pinb_item_pane_g1_ParamLimits

0xe36d,	// (0x0006c946) list_pinb_item_pane_g1

0xe35f,	// (0x0006c938) list_pinb_item_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) list_pinb_item_pane_g2

0xe351,	// (0x0006c92a) list_pinb_item_pane_g3_ParamLimits

0xe351,	// (0x0006c92a) list_pinb_item_pane_g3

0xe35f,	// (0x0006c938) list_pinb_item_pane_g4_ParamLimits

0xe35f,	// (0x0006c938) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0006d65c) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0006d65c) list_pinb_item_pane_g

0xe37b,	// (0x0006c954) list_pinb_item_pane_t1_ParamLimits

0xe37b,	// (0x0006c954) list_pinb_item_pane_t1

0x0b8c,	// (0x0005f165) calc_display_pane

0x0bb1,	// (0x0005f18a) calc_paper_pane

0x0bd4,	// (0x0005f1ad) grid_calc_pane

0xd923,	// (0x0006befc) bg_list_pane_cp01

0xe38f,	// (0x0006c968) clock_g1

0xe38f,	// (0x0006c968) clock_g2

0x0001,

0xf08c,	// (0x0006d665) clock_g

0xe399,	// (0x0006c972) clock_t1_ParamLimits

0xe399,	// (0x0006c972) clock_t1

0xe3ad,	// (0x0006c986) clock_t2_ParamLimits

0xe3ad,	// (0x0006c986) clock_t2

0xe3ad,	// (0x0006c986) clock_t3_ParamLimits

0xe3ad,	// (0x0006c986) clock_t3

0xe3ad,	// (0x0006c986) clock_t4_ParamLimits

0xe3ad,	// (0x0006c986) clock_t4

0xe399,	// (0x0006c972) clock_t5_ParamLimits

0xe399,	// (0x0006c972) clock_t5

0xe3ad,	// (0x0006c986) clock_t6_ParamLimits

0xe3ad,	// (0x0006c986) clock_t6

0xe3ad,	// (0x0006c986) clock_t7_ParamLimits

0xe3ad,	// (0x0006c986) clock_t7

0xe3ad,	// (0x0006c986) clock_t8_ParamLimits

0xe3ad,	// (0x0006c986) clock_t8

0xe3ad,	// (0x0006c986) clock_t9_ParamLimits

0xe3ad,	// (0x0006c986) clock_t9

0x0008,

0xf091,	// (0x0006d66a) clock_t_ParamLimits

0xf091,	// (0x0006d66a) clock_t

0xd923,	// (0x0006befc) popup_clock_analogue_window_cp02

0xd923,	// (0x0006befc) popup_clock_digital_window_cp01

0xe07b,	// (0x0006c654) listscroll_help_pane

0xe07b,	// (0x0006c654) phob_pre_status_pane

0xe3c1,	// (0x0006c99a) grid_qdial_pane

0xe2d6,	// (0x0006c8af) listscroll_mce_pane

0xe2d6,	// (0x0006c8af) bg_notes_pane

0xe3cb,	// (0x0006c9a4) list_notes_pane

0x0c02,	// (0x0005f1db) scroll_pane_cp06

0xe3d9,	// (0x0006c9b2) bg_calc_paper_pane

0xa071,	// (0x0006864a) list_calc_pane

0xe3ed,	// (0x0006c9c6) bg_calc_display_pane

0x0c16,	// (0x0005f1ef) calc_display_pane_t1

0x0c2b,	// (0x0005f204) calc_display_pane_t2

0xa08b,	// (0x00068664) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0006d67d) calc_display_pane_t

0x0c40,	// (0x0005f219) cell_calc_pane_ParamLimits

0x0c40,	// (0x0005f219) cell_calc_pane

0xe3f9,	// (0x0006c9d2) bg_calc_paper_pane_g1

0xe405,	// (0x0006c9de) bg_calc_paper_pane_g2

0xe411,	// (0x0006c9ea) bg_calc_paper_pane_g3

0xe41d,	// (0x0006c9f6) bg_calc_paper_pane_g4

0xe429,	// (0x0006ca02) bg_calc_paper_pane_g5

0x0c75,	// (0x0005f24e) bg_calc_paper_pane_g6

0x0c84,	// (0x0005f25d) bg_calc_paper_pane_g7

0x0c93,	// (0x0005f26c) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0006d684) bg_calc_paper_pane_g

0x0ca6,	// (0x0005f27f) calc_bg_paper_pane_g9

0x0cb9,	// (0x0005f292) list_calc_item_pane_ParamLimits

0x0cb9,	// (0x0005f292) list_calc_item_pane

0xe435,	// (0x0006ca0e) list_calc_item_pane_g1

0xa09d,	// (0x00068676) list_calc_item_pane_t1_ParamLimits

0xa09d,	// (0x00068676) list_calc_item_pane_t1

0x0cd1,	// (0x0005f2aa) list_calc_item_pane_t2_ParamLimits

0x0cd1,	// (0x0005f2aa) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0006d695) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0006d695) list_calc_item_pane_t

0xe2ee,	// (0x0006c8c7) cell_calc_pane_g1

0xe442,	// (0x0006ca1b) grid_highlight_pane_cp02

0x0d03,	// (0x0005f2dc) bg_calc_display_pane_g1

0x0d0c,	// (0x0005f2e5) bg_calc_display_pane_g2

0xe464,	// (0x0006ca3d) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0006d69f) bg_calc_display_pane_g

0x0d16,	// (0x0005f2ef) cell_qdial_pane_ParamLimits

0x0d16,	// (0x0005f2ef) cell_qdial_pane

0x0d2a,	// (0x0005f303) cell_qdial_pane_g1_ParamLimits

0x0d2a,	// (0x0005f303) cell_qdial_pane_g1

0x0d40,	// (0x0005f319) cell_qdial_pane_g2_ParamLimits

0x0d40,	// (0x0005f319) cell_qdial_pane_g2

0xe46d,	// (0x0006ca46) cell_qdial_pane_g3_ParamLimits

0xe46d,	// (0x0006ca46) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0006d6a6) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0006d6a6) cell_qdial_pane_g

0x0d67,	// (0x0005f340) cell_qdial_pane_t1_ParamLimits

0x0d67,	// (0x0005f340) cell_qdial_pane_t1

0x0d7f,	// (0x0005f358) cell_qdial_pane_t2_ParamLimits

0x0d7f,	// (0x0005f358) cell_qdial_pane_t2

0x0d92,	// (0x0005f36b) cell_qdial_pane_t3_ParamLimits

0x0d92,	// (0x0005f36b) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0006d6af) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0006d6af) cell_qdial_pane_t

0xe07b,	// (0x0006c654) grid_highlight_pane_cp04

0xe479,	// (0x0006ca52) thumbnail_qdial_pane_ParamLimits

0xe479,	// (0x0006ca52) thumbnail_qdial_pane

0xe4d5,	// (0x0006caae) list_help_pane

0xe4de,	// (0x0006cab7) scroll_pane_cp02

0xe4f7,	// (0x0006cad0) help_list_pane_t1_ParamLimits

0xe4f7,	// (0x0006cad0) help_list_pane_t1

0xe4e7,	// (0x0006cac0) bg_notes_pane_g2

0xe4ef,	// (0x0006cac8) bg_notes_pane_g3

0xe515,	// (0x0006caee) notes_bg_pane_g1

0xe51d,	// (0x0006caf6) notes_bg_pane_g4

0xe525,	// (0x0006cafe) notes_bg_pane_g5

0xe52d,	// (0x0006cb06) notes_bg_pane_g6

0xe535,	// (0x0006cb0e) notes_bg_pane_g7

0xe53d,	// (0x0006cb16) notes_bg_pane_g8

0xe545,	// (0x0006cb1e) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0006d6cd) notes_bg_pane_g

0x0da5,	// (0x0005f37e) list_notes_text_pane_ParamLimits

0x0da5,	// (0x0005f37e) list_notes_text_pane

0xe54d,	// (0x0006cb26) list_notes_text_pane_g1

0x0dba,	// (0x0005f393) list_notes_text_pane_t1

0x0dc8,	// (0x0005f3a1) listscroll_cale_week_pane

0x0df4,	// (0x0005f3cd) bg_cale_heading_pane

0xe567,	// (0x0006cb40) bg_cale_pane_cp01

0x0e0c,	// (0x0005f3e5) cale_week_corner_pane

0x0e2b,	// (0x0005f404) cale_week_day_heading_pane

0x0e48,	// (0x0005f421) cale_week_scroll_pane_g1

0x0e5b,	// (0x0005f434) cale_week_scroll_pane_g2

0x0e73,	// (0x0005f44c) cale_week_scroll_pane_g3

0x0e8b,	// (0x0005f464) cale_week_scroll_pane_g4

0x0ea3,	// (0x0005f47c) cale_week_scroll_pane_g5

0x0ec3,	// (0x0005f49c) cale_week_scroll_pane_g6

0x0ee3,	// (0x0005f4bc) cale_week_scroll_pane_g7

0x0f03,	// (0x0005f4dc) cale_week_scroll_pane_g8

0x0f27,	// (0x0005f500) cale_week_scroll_pane_g9

0x0f3f,	// (0x0005f518) cale_week_scroll_pane_g10

0x0f57,	// (0x0005f530) cale_week_scroll_pane_g11

0x0f6f,	// (0x0005f548) cale_week_scroll_pane_g12

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g13

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g14

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0006d6dc) cale_week_scroll_pane_g

0x0fc3,	// (0x0005f59c) cale_week_time_pane

0x0fe7,	// (0x0005f5c0) grid_cale_week_pane

0xe596,	// (0x0006cb6f) scroll_pane_cp08

0x100d,	// (0x0005f5e6) cell_cale_week_pane_ParamLimits

0x100d,	// (0x0005f5e6) cell_cale_week_pane

0x109b,	// (0x0005f674) cale_week_day_heading_pane_t1

0x10c5,	// (0x0005f69e) cale_week_day_heading_pane_t2

0x10f4,	// (0x0005f6cd) cale_week_day_heading_pane_t3

0x1123,	// (0x0005f6fc) cale_week_day_heading_pane_t4

0x1152,	// (0x0005f72b) cale_week_day_heading_pane_t5

0x1189,	// (0x0005f762) cale_week_day_heading_pane_t6

0x11c0,	// (0x0005f799) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0006d6fd) cale_week_day_heading_pane_t

0xe5b3,	// (0x0006cb8c) bg_cale_side_pane

0x11ea,	// (0x0005f7c3) cale_week_time_pane_t1

0x1204,	// (0x0005f7dd) cale_week_time_pane_t2

0x121e,	// (0x0005f7f7) cale_week_time_pane_t3

0x1238,	// (0x0005f811) cale_week_time_pane_t4

0x1252,	// (0x0005f82b) cale_week_time_pane_t5

0x126c,	// (0x0005f845) cale_week_time_pane_t6

0x1286,	// (0x0005f85f) cale_week_time_pane_t7

0x12a0,	// (0x0005f879) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0006d70c) cale_week_time_pane_t

0x12ba,	// (0x0005f893) cell_cale_week_pane_g2

0x12d9,	// (0x0005f8b2) cell_cale_week_pane_g3_ParamLimits

0x12d9,	// (0x0005f8b2) cell_cale_week_pane_g3

0xe5c1,	// (0x0006cb9a) grid_highlight_pane_cp07

0xe5c9,	// (0x0006cba2) listscroll_gms_pane

0xe5d3,	// (0x0006cbac) grid_gms_pane

0xe5dc,	// (0x0006cbb5) listscroll_gms_pane_g1

0xe5e4,	// (0x0006cbbd) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0006d71d) listscroll_gms_pane_g

0x12f1,	// (0x0005f8ca) scroll_pane_cp010

0x12fc,	// (0x0005f8d5) cell_gms_pane_ParamLimits

0x12fc,	// (0x0005f8d5) cell_gms_pane

0x130f,	// (0x0005f8e8) cell_gms_pane_g1

0xe5ec,	// (0x0006cbc5) cell_gms_pane_g2

0xe54d,	// (0x0006cb26) cell_gms_pane_g3

0xe5f4,	// (0x0006cbcd) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0006d722) cell_gms_pane_g

0xe5fd,	// (0x0006cbd6) grid_highlight_pane_cp09

0x404a,	// (0x00062623) phob_pre_status_pane_g1

0x4052,	// (0x0006262b) phob_pre_status_pane_g2

0x405a,	// (0x00062633) phob_pre_status_pane_g3

0x4062,	// (0x0006263b) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0006dabe) phob_pre_status_pane_g

0x4072,	// (0x0006264b) phob_pre_status_pane_t1

0x4080,	// (0x00062659) phob_pre_status_pane_t2

0x4090,	// (0x00062669) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0006dac9) phob_pre_status_pane_t

0xe605,	// (0x0006cbde) bg_list_pane_cp05

0x131f,	// (0x0005f8f8) grid_vorec_pane

0x1327,	// (0x0005f900) vorec_t1

0x1335,	// (0x0005f90e) vorec_t2

0x1343,	// (0x0005f91c) vorec_t3

0x1351,	// (0x0005f92a) vorec_t4

0xd329,	// (0x0006b902) vorec_t5

0x9165,	// (0x0006773e) vorec_t6

0x0004,

0xf152,	// (0x0006d72b) vorec_t

0x9173,	// (0x0006774c) wait_bar_pane_cp01

0x136d,	// (0x0005f946) cell_vorec_pane_ParamLimits

0x136d,	// (0x0005f946) cell_vorec_pane

0xa0b8,	// (0x00068691) cell_vorec_pane_g1

0xe07b,	// (0x0006c654) grid_highlight_pane_cp05

0xdbd9,	// (0x0006c1b2) cams_zoom_pane

0xdbd9,	// (0x0006c1b2) image_vga_pane

0xe351,	// (0x0006c92a) main_camera_pane_g1

0xe351,	// (0x0006c92a) main_camera_pane_g2

0xe351,	// (0x0006c92a) main_camera_pane_g3

0xe351,	// (0x0006c92a) main_camera_pane_g4

0xe351,	// (0x0006c92a) main_camera_pane_g5

0xe351,	// (0x0006c92a) main_camera_pane_g6

0xe351,	// (0x0006c92a) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0006d736) main_camera_pane_g

0xe399,	// (0x0006c972) main_camera_pane_t1

0xe399,	// (0x0006c972) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0006d747) main_camera_pane_t

0x1394,	// (0x0005f96d) cams_zoom_pane_cp_ParamLimits

0x1394,	// (0x0005f96d) cams_zoom_pane_cp

0x13c8,	// (0x0005f9a1) image_cif_pane_ParamLimits

0x13c8,	// (0x0005f9a1) image_cif_pane

0xd923,	// (0x0006befc) image_subqcif_pane

0x13da,	// (0x0005f9b3) main_video_pane_g1_ParamLimits

0x13da,	// (0x0005f9b3) main_video_pane_g1

0x1408,	// (0x0005f9e1) main_video_pane_g2_ParamLimits

0x1408,	// (0x0005f9e1) main_video_pane_g2

0x1442,	// (0x0005fa1b) main_video_pane_g3_ParamLimits

0x1442,	// (0x0005fa1b) main_video_pane_g3

0x1442,	// (0x0005fa1b) main_video_pane_g4_ParamLimits

0x1442,	// (0x0005fa1b) main_video_pane_g4

0x1476,	// (0x0005fa4f) main_video_pane_g5_ParamLimits

0x1476,	// (0x0005fa4f) main_video_pane_g5

0xe60d,	// (0x0006cbe6) main_video_pane_g6_ParamLimits

0xe60d,	// (0x0006cbe6) main_video_pane_g6

0x0006,

0xf173,	// (0x0006d74c) main_video_pane_g_ParamLimits

0xf173,	// (0x0006d74c) main_video_pane_g

0x1492,	// (0x0005fa6b) main_video_pane_t1_ParamLimits

0x1492,	// (0x0005fa6b) main_video_pane_t1

0xe38f,	// (0x0006c968) cams_zoom_pane_g1

0xe38f,	// (0x0006c968) cams_zoom_pane_g2

0xe38f,	// (0x0006c968) cams_zoom_pane_g3

0xe38f,	// (0x0006c968) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0006d75b) cams_zoom_pane_g

0xdbd9,	// (0x0006c1b2) grid_cams_pane

0xdbd9,	// (0x0006c1b2) linegrid_cams_pane

0x14d6,	// (0x0005faaf) cell_cams_pane_ParamLimits

0x14d6,	// (0x0005faaf) cell_cams_pane

0xd923,	// (0x0006befc) cams_burst_image_pane

0xe38f,	// (0x0006c968) cell_cams_pane_g1

0xd923,	// (0x0006befc) grid_highlight_pane_cp03

0xe2ee,	// (0x0006c8c7) mp_bg_pane_g1

0xd923,	// (0x0006befc) bg_list_pane_cp03

0xd923,	// (0x0006befc) bg_mp_pane

0xd923,	// (0x0006befc) grid_mp_pane

0xe38f,	// (0x0006c968) media_player_g1

0xeb0b,	// (0x0006d0e4) media_player_t1

0xeb0b,	// (0x0006d0e4) media_player_t2

0xeb0b,	// (0x0006d0e4) media_player_t3

0xeb0b,	// (0x0006d0e4) media_player_t4

0xeb0b,	// (0x0006d0e4) media_player_t5

0xeb0b,	// (0x0006d0e4) media_player_t6

0xeb0b,	// (0x0006d0e4) media_player_t7

0x0006,

0xf4cf,	// (0x0006daa8) media_player_t

0xd923,	// (0x0006befc) wait_bar_pane_cp02

0xf4b4,	// (0x0006da8d) main_usb_pane_t

0xed76,	// (0x0006d34f) cell_mp_pane

0xe2ee,	// (0x0006c8c7) cell_mp_pane_g1

0xe07b,	// (0x0006c654) grid_highlight_pane_cp06

0xe627,	// (0x0006cc00) grid_skin_colour_pane

0xe62f,	// (0x0006cc08) list_highlight_pane_cp03

0x14eb,	// (0x0005fac4) skin_g1

0xe637,	// (0x0006cc10) skin_t1

0xe646,	// (0x0006cc1f) skin_t2

0x0001,

0xf1b0,	// (0x0006d789) skin_t

0x14f3,	// (0x0005facc) cell_skin_colour_pane_ParamLimits

0x14f3,	// (0x0005facc) cell_skin_colour_pane

0xe654,	// (0x0006cc2d) cell_skin_colour_pane_g1

0x156c,	// (0x0005fb45) call_video_g1_ParamLimits

0x156c,	// (0x0005fb45) call_video_g1

0x1588,	// (0x0005fb61) call_video_g2_ParamLimits

0x1588,	// (0x0005fb61) call_video_g2

0x0001,

0xf1b5,	// (0x0006d78e) call_video_g_ParamLimits

0xf1b5,	// (0x0006d78e) call_video_g

0x15da,	// (0x0005fbb3) call_video_uplink_pane_cp1_ParamLimits

0x15da,	// (0x0005fbb3) call_video_uplink_pane_cp1

0xe666,	// (0x0006cc3f) call_video_uplink_pane_cp2

0x1679,	// (0x0005fc52) video_down_crop_pane_ParamLimits

0x1679,	// (0x0005fc52) video_down_crop_pane

0x1770,	// (0x0005fd49) video_down_pane_ParamLimits

0x1770,	// (0x0005fd49) video_down_pane

0xe66e,	// (0x0006cc47) video_down_subqcif_pane_ParamLimits

0xe66e,	// (0x0006cc47) video_down_subqcif_pane

0xe686,	// (0x0006cc5f) video_down_subqcif_pane_cp_ParamLimits

0xe686,	// (0x0006cc5f) video_down_subqcif_pane_cp

0xe6ac,	// (0x0006cc85) im_reading_pane_ParamLimits

0xe6ac,	// (0x0006cc85) im_reading_pane

0x1880,	// (0x0005fe59) im_writing_pane_ParamLimits

0x1880,	// (0x0005fe59) im_writing_pane

0x1896,	// (0x0005fe6f) im_reading_pane_t1

0xe6c6,	// (0x0006cc9f) list_im_pane

0xe6d7,	// (0x0006ccb0) scroll_pane_cp07

0x18cf,	// (0x0005fea8) im_writing_pane_t1_ParamLimits

0x18cf,	// (0x0005fea8) im_writing_pane_t1

0xe6f0,	// (0x0006ccc9) im_writing_pane_t2_ParamLimits

0xe6f0,	// (0x0006ccc9) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0006d798) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0006d798) im_writing_pane_t

0xe07b,	// (0x0006c654) input_focus_pane_cp04

0xe07b,	// (0x0006c654) input_focus_pane_cp05

0x18e4,	// (0x0005febd) list_im_single_pane_ParamLimits

0x18e4,	// (0x0005febd) list_im_single_pane

0x18f8,	// (0x0005fed1) list_single_im_pane_t1

0xe605,	// (0x0006cbde) blid_accuracy_pane

0xe605,	// (0x0006cbde) blid_compass_pane

0xa550,	// (0x00068b29) main_location_t1

0xa550,	// (0x00068b29) main_location_t2

0xa550,	// (0x00068b29) main_location_t3

0x0002,

0xf4de,	// (0x0006dab7) main_location_t

0xe07b,	// (0x0006c654) aid_levels_location

0xe2ee,	// (0x0006c8c7) blid_accuracy_pane_g1

0xe2ee,	// (0x0006c8c7) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0006d7e7) blid_accuracy_pane_g

0xe738,	// (0x0006cd11) wml_content_pane

0xe776,	// (0x0006cd4f) wml_button_pane_ParamLimits

0xe776,	// (0x0006cd4f) wml_button_pane

0x1907,	// (0x0005fee0) wml_list_single_large_pane_ParamLimits

0x1907,	// (0x0005fee0) wml_list_single_large_pane

0x191c,	// (0x0005fef5) wml_list_single_medium_pane_ParamLimits

0x191c,	// (0x0005fef5) wml_list_single_medium_pane

0x1932,	// (0x0005ff0b) wml_list_single_small_pane_ParamLimits

0x1932,	// (0x0005ff0b) wml_list_single_small_pane

0xe78a,	// (0x0006cd63) wml_selection_box_pane_ParamLimits

0xe78a,	// (0x0006cd63) wml_selection_box_pane

0xe79d,	// (0x0006cd76) wml_list_single_pane_t1

0xe7ac,	// (0x0006cd85) wml_list_single_medium_pane_t1

0xe7bb,	// (0x0006cd94) wml_list_single_large_pane_t1

0xe7ca,	// (0x0006cda3) input_focus_pane_cp02_ParamLimits

0xe7ca,	// (0x0006cda3) input_focus_pane_cp02

0xe7dd,	// (0x0006cdb6) wml_selection_box_pane_g1

0xe7e6,	// (0x0006cdbf) wml_selection_box_pane_t1_ParamLimits

0xe7e6,	// (0x0006cdbf) wml_selection_box_pane_t1

0xe2d6,	// (0x0006c8af) bg_wml_button_pane_ParamLimits

0xe2d6,	// (0x0006c8af) bg_wml_button_pane

0xe7fe,	// (0x0006cdd7) wml_button_pane_g1

0xe806,	// (0x0006cddf) wml_button_pane_t1

0xe7fe,	// (0x0006cdd7) wml_button_bg_pane_g1

0xe816,	// (0x0006cdef) wml_button_bg_pane_g2

0xe81e,	// (0x0006cdf7) wml_button_bg_pane_g3

0xe826,	// (0x0006cdff) wml_button_bg_pane_g4

0xe82e,	// (0x0006ce07) wml_button_bg_pane_g5

0xe836,	// (0x0006ce0f) wml_button_bg_pane_g6

0xe83e,	// (0x0006ce17) wml_button_bg_pane_g7

0xe846,	// (0x0006ce1f) wml_button_bg_pane_g8

0xe84e,	// (0x0006ce27) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0006d79d) wml_button_bg_pane_g

0x194a,	// (0x0005ff23) bg_list_pane_cp02

0xe856,	// (0x0006ce2f) mce_header_pane_ParamLimits

0xe856,	// (0x0006ce2f) mce_header_pane

0xe86c,	// (0x0006ce45) mce_icon_pane

0xe86c,	// (0x0006ce45) mce_image_pane

0xe875,	// (0x0006ce4e) mce_text_pane_ParamLimits

0xe875,	// (0x0006ce4e) mce_text_pane

0x1952,	// (0x0005ff2b) scroll_pane_cp03

0xe76e,	// (0x0006cd47) scroll_pane_cp04

0xe888,	// (0x0006ce61) scroll_pane_cp05_ParamLimits

0xe888,	// (0x0006ce61) scroll_pane_cp05

0x195c,	// (0x0005ff35) mce_header_field_pane_ParamLimits

0x195c,	// (0x0005ff35) mce_header_field_pane

0x1973,	// (0x0005ff4c) mce_header_field_pane_2_ParamLimits

0x1973,	// (0x0005ff4c) mce_header_field_pane_2

0x1989,	// (0x0005ff62) mce_header_field_pane_3

0x1991,	// (0x0005ff6a) list_single_mce_message_pane_ParamLimits

0x1991,	// (0x0005ff6a) list_single_mce_message_pane

0x19a6,	// (0x0005ff7f) list_single_mce_smart_pane_ParamLimits

0x19a6,	// (0x0005ff7f) list_single_mce_smart_pane

0xe894,	// (0x0006ce6d) input_focus_pane_cp03

0xe89d,	// (0x0006ce76) list_header_data_pane

0x19c6,	// (0x0005ff9f) mce_header_field_pane_t1

0x19d6,	// (0x0005ffaf) list_single_mce_header_pane_ParamLimits

0x19d6,	// (0x0005ffaf) list_single_mce_header_pane

0xe8a5,	// (0x0006ce7e) list_single_mce_header_pane_t1

0xe8b4,	// (0x0006ce8d) list_single_mce_message_pane_g1

0xe8bc,	// (0x0006ce95) list_single_mce_message_pane_t1

0x1a10,	// (0x0005ffe9) bg_cale_heading_pane_cp01_ParamLimits

0x1a10,	// (0x0005ffe9) bg_cale_heading_pane_cp01

0xe8ca,	// (0x0006cea3) bg_cale_pane_cp02_ParamLimits

0xe8ca,	// (0x0006cea3) bg_cale_pane_cp02

0x1a4a,	// (0x00060023) cale_month_corner_pane

0x1a69,	// (0x00060042) cale_month_day_heading_pane_ParamLimits

0x1a69,	// (0x00060042) cale_month_day_heading_pane

0x1abb,	// (0x00060094) cale_month_pane_g1_ParamLimits

0x1abb,	// (0x00060094) cale_month_pane_g1

0x1aea,	// (0x000600c3) cale_month_pane_g2_ParamLimits

0x1aea,	// (0x000600c3) cale_month_pane_g2

0x1b1a,	// (0x000600f3) cale_month_pane_g3_ParamLimits

0x1b1a,	// (0x000600f3) cale_month_pane_g3

0x1b56,	// (0x0006012f) cale_month_pane_g4_ParamLimits

0x1b56,	// (0x0006012f) cale_month_pane_g4

0x1b92,	// (0x0006016b) cale_month_pane_g5_ParamLimits

0x1b92,	// (0x0006016b) cale_month_pane_g5

0x1bda,	// (0x000601b3) cale_month_pane_g6_ParamLimits

0x1bda,	// (0x000601b3) cale_month_pane_g6

0x1c26,	// (0x000601ff) cale_month_pane_g7_ParamLimits

0x1c26,	// (0x000601ff) cale_month_pane_g7

0x1c7a,	// (0x00060253) cale_month_pane_g8_ParamLimits

0x1c7a,	// (0x00060253) cale_month_pane_g8

0x1cce,	// (0x000602a7) cale_month_pane_g9_ParamLimits

0x1cce,	// (0x000602a7) cale_month_pane_g9

0x1d20,	// (0x000602f9) cale_month_pane_g10_ParamLimits

0x1d20,	// (0x000602f9) cale_month_pane_g10

0x1d72,	// (0x0006034b) cale_month_pane_g11_ParamLimits

0x1d72,	// (0x0006034b) cale_month_pane_g11

0x1dc4,	// (0x0006039d) cale_month_pane_g12_ParamLimits

0x1dc4,	// (0x0006039d) cale_month_pane_g12

0x1e16,	// (0x000603ef) cale_month_pane_g13_ParamLimits

0x1e16,	// (0x000603ef) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0006d7b0) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0006d7b0) cale_month_pane_g

0x1e68,	// (0x00060441) cale_month_week_pane

0x1e8c,	// (0x00060465) grid_cale_month_pane_ParamLimits

0x1e8c,	// (0x00060465) grid_cale_month_pane

0x1ed5,	// (0x000604ae) cale_month_day_heading_pane_t1

0x1f5b,	// (0x00060534) cale_month_day_heading_pane_t2

0x1fd4,	// (0x000605ad) cale_month_day_heading_pane_t3

0x204d,	// (0x00060626) cale_month_day_heading_pane_t4

0x20ce,	// (0x000606a7) cale_month_day_heading_pane_t5

0x2157,	// (0x00060730) cale_month_day_heading_pane_t6

0x21e0,	// (0x000607b9) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0006d7cb) cale_month_day_heading_pane_t

0xe5b3,	// (0x0006cb8c) bg_cale_side_pane_cp01

0x2271,	// (0x0006084a) cale_month_week_pane_t1

0x228a,	// (0x00060863) cale_month_week_pane_t2

0x22a3,	// (0x0006087c) cale_month_week_pane_t3

0x22bc,	// (0x00060895) cale_month_week_pane_t4

0x22d5,	// (0x000608ae) cale_month_week_pane_t5

0x22ee,	// (0x000608c7) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0006d7da) cale_month_week_pane_t

0x2307,	// (0x000608e0) cell_cale_month_pane_ParamLimits

0x2307,	// (0x000608e0) cell_cale_month_pane

0xa0c2,	// (0x0006869b) cell_cale_month_pane_g1

0x2435,	// (0x00060a0e) cell_cale_month_pane_t1_ParamLimits

0x2435,	// (0x00060a0e) cell_cale_month_pane_t1

0xe5c1,	// (0x0006cb9a) grid_highlight_pane_cp08

0xe2ee,	// (0x0006c8c7) main_smil_g1

0x2461,	// (0x00060a3a) smil_status_pane

0xe909,	// (0x0006cee2) smil_text_pane

0xe545,	// (0x0006cb1e) bg_popup_call3_rect_pane_g8

0xe53d,	// (0x0006cb16) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0006d7ec) bg_popup_call3_rect_pane_g

0xa66d,	// (0x00068c46) smil_status_volume_pane_g1

0xe913,	// (0x0006ceec) smil_status_pane_t1

0xa6a0,	// (0x00068c79) volume_smil_pane

0xe92a,	// (0x0006cf03) list_smil_text_pane

0x2474,	// (0x00060a4d) scroll_pane_cp011

0x247f,	// (0x00060a58) smil_text_list_pane_t1_ParamLimits

0x247f,	// (0x00060a58) smil_text_list_pane_t1

0xa0ce,	// (0x000686a7) aid_volume_smil_ParamLimits

0xa0ce,	// (0x000686a7) aid_volume_smil

0xe2ee,	// (0x0006c8c7) smil_volume_pane_g1

0xe2ee,	// (0x0006c8c7) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0006d7e7) smil_volume_pane_g

0x24bb,	// (0x00060a94) listscroll_cale_day_pane

0xe93d,	// (0x0006cf16) bg_cale_pane

0xe955,	// (0x0006cf2e) list_cale_pane

0xe978,	// (0x0006cf51) scroll_pane_cp09

0xe515,	// (0x0006caee) cale_bg_pane_g1

0xe4ef,	// (0x0006cac8) cale_bg_pane_g2

0xe4e7,	// (0x0006cac0) cale_bg_pane_g3

0xe525,	// (0x0006cafe) cale_bg_pane_g4

0xe51d,	// (0x0006caf6) cale_bg_pane_g5

0xe52d,	// (0x0006cb06) cale_bg_pane_g6

0xe535,	// (0x0006cb0e) cale_bg_pane_g7

0xe545,	// (0x0006cb1e) cale_bg_pane_g8

0xe53d,	// (0x0006cb16) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0006d7ec) cale_bg_pane_g

0x24cd,	// (0x00060aa6) list_cale_time_pane_ParamLimits

0x24cd,	// (0x00060aa6) list_cale_time_pane

0xe991,	// (0x0006cf6a) list_cale_time_pane_g1_ParamLimits

0xe991,	// (0x0006cf6a) list_cale_time_pane_g1

0xe99d,	// (0x0006cf76) list_cale_time_pane_g2_ParamLimits

0xe99d,	// (0x0006cf76) list_cale_time_pane_g2

0x24e2,	// (0x00060abb) list_cale_time_pane_g3_ParamLimits

0x24e2,	// (0x00060abb) list_cale_time_pane_g3

0x24f0,	// (0x00060ac9) list_cale_time_pane_g4_ParamLimits

0x24f0,	// (0x00060ac9) list_cale_time_pane_g4

0x24fe,	// (0x00060ad7) list_cale_time_pane_g5_ParamLimits

0x24fe,	// (0x00060ad7) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0006d7ff) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0006d7ff) list_cale_time_pane_g

0xe9b7,	// (0x0006cf90) list_cale_time_pane_t1_ParamLimits

0xe9b7,	// (0x0006cf90) list_cale_time_pane_t1

0xe9df,	// (0x0006cfb8) list_cale_time_pane_t2_ParamLimits

0xe9df,	// (0x0006cfb8) list_cale_time_pane_t2

0x2760,	// (0x00060d39) aid_blid_cardinal_pane

0x279e,	// (0x00060d77) compass_pane_t4

0xea07,	// (0x0006cfe0) list_cale_time_pane_t4_ParamLimits

0xea07,	// (0x0006cfe0) list_cale_time_pane_t4

0x27ac,	// (0x00060d85) compass_pane_t5

0x27ba,	// (0x00060d93) compass_pane_t6

0x27c8,	// (0x00060da1) compass_pane_t7

0xeebb,	// (0x0006d494) navi_pane_cc_t1

0x28a2,	// (0x00060e7b) aid_phob_thumbnail_center_pane

0x2ddb,	// (0x000613b4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0006d80c) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0006d80c) list_cale_time_pane_t

0xd997,	// (0x0006bf70) bg_popup_window_pane_cp02_ParamLimits

0xd997,	// (0x0006bf70) bg_popup_window_pane_cp02

0xea2f,	// (0x0006d008) heading_pane_cp01_ParamLimits

0xea2f,	// (0x0006d008) heading_pane_cp01

0xea3b,	// (0x0006d014) loc_req_pane_ParamLimits

0xea3b,	// (0x0006d014) loc_req_pane

0xea4d,	// (0x0006d026) loc_type_pane_ParamLimits

0xea4d,	// (0x0006d026) loc_type_pane

0xea5f,	// (0x0006d038) loc_type_pane_t1_ParamLimits

0xea5f,	// (0x0006d038) loc_type_pane_t1

0xea71,	// (0x0006d04a) loc_type_pane_t2_ParamLimits

0xea71,	// (0x0006d04a) loc_type_pane_t2

0xea83,	// (0x0006d05c) loc_type_pane_t3_ParamLimits

0xea83,	// (0x0006d05c) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0006d813) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0006d813) loc_type_pane_t

0xea95,	// (0x0006d06e) list_loc_req_pane

0xea9f,	// (0x0006d078) scroll_pane_cp012

0x250c,	// (0x00060ae5) list_single_loc_request_popup_menu_pane_ParamLimits

0x250c,	// (0x00060ae5) list_single_loc_request_popup_menu_pane

0xeaaa,	// (0x0006d083) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xeaaa,	// (0x0006d083) list_single_loc_request_popup_menu_pane_g1

0xeab6,	// (0x0006d08f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xeab6,	// (0x0006d08f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0006d81a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0006d81a) list_single_loc_request_popup_menu_pane_g

0xeac2,	// (0x0006d09b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeac2,	// (0x0006d09b) list_single_loc_request_popup_menu_pane_t1

0xe2d6,	// (0x0006c8af) bg_popup_window_pane_cp03_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_window_pane_cp03

0xead8,	// (0x0006d0b1) heading_loc_req_pane_ParamLimits

0xead8,	// (0x0006d0b1) heading_loc_req_pane

0x2519,	// (0x00060af2) popup_dyc_status_message_window_g1_ParamLimits

0x2519,	// (0x00060af2) popup_dyc_status_message_window_g1

0x252d,	// (0x00060b06) popup_dyc_status_message_window_t1_ParamLimits

0x252d,	// (0x00060b06) popup_dyc_status_message_window_t1

0x2542,	// (0x00060b1b) popup_dyc_status_message_window_t2_ParamLimits

0x2542,	// (0x00060b1b) popup_dyc_status_message_window_t2

0x2557,	// (0x00060b30) popup_dyc_status_message_window_t3_ParamLimits

0x2557,	// (0x00060b30) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0006d81f) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0006d81f) popup_dyc_status_message_window_t

0xe07b,	// (0x0006c654) bg_heading_pane_cp01

0xeae4,	// (0x0006d0bd) heading_loc_req_pane_g1

0xeaec,	// (0x0006d0c5) heading_loc_req_pane_g2

0xeaf4,	// (0x0006d0cd) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0006d826) heading_loc_req_pane_g

0xeafc,	// (0x0006d0d5) heading_loc_req_pane_t1

0xeb1b,	// (0x0006d0f4) bg_popup_sub_pane_cp01_ParamLimits

0xeb1b,	// (0x0006d0f4) bg_popup_sub_pane_cp01

0xeb29,	// (0x0006d102) popup_cale_events_window_g1_ParamLimits

0xeb29,	// (0x0006d102) popup_cale_events_window_g1

0xeb49,	// (0x0006d122) popup_cale_events_window_g2_ParamLimits

0xeb49,	// (0x0006d122) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0006d848) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0006d848) popup_cale_events_window_g

0xeb69,	// (0x0006d142) popup_cale_events_window_t1_ParamLimits

0xeb69,	// (0x0006d142) popup_cale_events_window_t1

0xeb7b,	// (0x0006d154) popup_cale_events_window_t2_ParamLimits

0xeb7b,	// (0x0006d154) popup_cale_events_window_t2

0xebb9,	// (0x0006d192) popup_cale_events_window_t3_ParamLimits

0xebb9,	// (0x0006d192) popup_cale_events_window_t3

0xebf3,	// (0x0006d1cc) popup_cale_events_window_t4_ParamLimits

0xebf3,	// (0x0006d1cc) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0006d84d) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0006d84d) popup_cale_events_window_t

0x257f,	// (0x00060b58) call_type_pane

0x258f,	// (0x00060b68) popup_call_status_window_g1

0x25a3,	// (0x00060b7c) popup_call_status_window_g2

0x25b7,	// (0x00060b90) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0006d856) popup_call_status_window_g

0xec29,	// (0x0006d202) call_type_pane_g1

0xec32,	// (0x0006d20b) call_type_pane_g2

0x0001,

0xf284,	// (0x0006d85d) call_type_pane_g

0xe07b,	// (0x0006c654) bg_popup_sub_pane_cp02

0xec3b,	// (0x0006d214) listscroll_popup_wml_pane

0xec43,	// (0x0006d21c) list_wml_pane

0xec4d,	// (0x0006d226) scroll_pane_cp013

0xec58,	// (0x0006d231) list_single_graphic_popup_wml_pane_ParamLimits

0xec58,	// (0x0006d231) list_single_graphic_popup_wml_pane

0xe2ee,	// (0x0006c8c7) list_single_graphic_popup_wml_pane_g1

0xec6c,	// (0x0006d245) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0006d862) list_single_graphic_popup_wml_pane_g

0xec74,	// (0x0006d24d) list_single_graphic_popup_wml_pane_t1

0xec8a,	// (0x0006d263) aid_call_pane

0xe2ce,	// (0x0006c8a7) popup_clock_analogue_window_g1

0xe2ce,	// (0x0006c8a7) popup_clock_analogue_window_g2

0xa0fc,	// (0x000686d5) popup_clock_analogue_window_g3

0xa0fc,	// (0x000686d5) popup_clock_analogue_window_g4

0xe2ee,	// (0x0006c8c7) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0006d867) popup_clock_analogue_window_g

0xa104,	// (0x000686dd) popup_clock_analogue_window_t1

0xa112,	// (0x000686eb) clock_digital_number_pane_ParamLimits

0xa112,	// (0x000686eb) clock_digital_number_pane

0xa11e,	// (0x000686f7) clock_digital_number_pane_cp02_ParamLimits

0xa11e,	// (0x000686f7) clock_digital_number_pane_cp02

0xa12a,	// (0x00068703) clock_digital_number_pane_cp03_ParamLimits

0xa12a,	// (0x00068703) clock_digital_number_pane_cp03

0xa136,	// (0x0006870f) clock_digital_number_pane_cp04_ParamLimits

0xa136,	// (0x0006870f) clock_digital_number_pane_cp04

0xa146,	// (0x0006871f) clock_digital_separator_pane_ParamLimits

0xa146,	// (0x0006871f) clock_digital_separator_pane

0xa152,	// (0x0006872b) popup_clock_digital_window_t1

0xe2ee,	// (0x0006c8c7) clock_digital_number_pane_g1

0xe2ee,	// (0x0006c8c7) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0006d7e7) clock_digital_number_pane_g

0xe2ee,	// (0x0006c8c7) clock_digital_separator_pane_g1

0xe2ee,	// (0x0006c8c7) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0006d7e7) clock_digital_separator_pane_g

0xe07b,	// (0x0006c654) bg_popup_window_pane_cp04

0xec92,	// (0x0006d26b) heading_pane_cp03

0xe605,	// (0x0006cbde) listscroll_popup_gms_pane

0xe07b,	// (0x0006c654) grid_large_graphic_popup_pane

0xec9a,	// (0x0006d273) listscroll_popup_gms_pane_g1

0xeca3,	// (0x0006d27c) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0006d872) listscroll_popup_gms_pane_g

0xecac,	// (0x0006d285) scroll_pane_cp014

0xe343,	// (0x0006c91c) cell_large_graphic_popup_pane_ParamLimits

0xe343,	// (0x0006c91c) cell_large_graphic_popup_pane

0xe351,	// (0x0006c92a) cell_large_graphic_popup_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_large_graphic_popup_pane_g1

0xecb5,	// (0x0006d28e) cell_large_graphic_popup_pane_g2_ParamLimits

0xecb5,	// (0x0006d28e) cell_large_graphic_popup_pane_g2

0xecc3,	// (0x0006d29c) cell_large_graphic_popup_pane_g3_ParamLimits

0xecc3,	// (0x0006d29c) cell_large_graphic_popup_pane_g3

0xecd1,	// (0x0006d2aa) cell_large_graphic_popup_pane_g4_ParamLimits

0xecd1,	// (0x0006d2aa) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0006d877) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0006d877) cell_large_graphic_popup_pane_g

0xe07b,	// (0x0006c654) grid_highlight_pane_cp010

0xe2ee,	// (0x0006c8c7) bg_popup_call_pane_g1

0xece2,	// (0x0006d2bb) list_single_graphic_popup_conf_pane_ParamLimits

0xece2,	// (0x0006d2bb) list_single_graphic_popup_conf_pane

0xecf5,	// (0x0006d2ce) list_highlight_pane_cp01

0xecfe,	// (0x0006d2d7) list_single_graphic_popup_conf_pane_g1

0xed06,	// (0x0006d2df) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0006d880) list_single_graphic_popup_conf_pane_g

0xed0e,	// (0x0006d2e7) list_single_graphic_popup_conf_pane_t1

0xed1c,	// (0x0006d2f5) linegrid_cams_pane_g1

0x25c6,	// (0x00060b9f) linegrid_cams_pane_g2

0xe54d,	// (0x0006cb26) linegrid_cams_pane_g3

0xed25,	// (0x0006d2fe) linegrid_cams_pane_g4

0x25cf,	// (0x00060ba8) linegrid_cams_pane_g5

0x25d8,	// (0x00060bb1) linegrid_cams_pane_g6

0xe5f4,	// (0x0006cbcd) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0006d885) linegrid_cams_pane_g

0xed2e,	// (0x0006d307) popup_clock_analogue_window

0xed2e,	// (0x0006d307) popup_clock_digital_window

0xe07b,	// (0x0006c654) popup_phob_thumbnail_window

0xe2ee,	// (0x0006c8c7) call_video_uplink_pane_g1

0xed37,	// (0x0006d310) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0006d894) call_video_uplink_pane_g

0xed3f,	// (0x0006d318) video_uplink_pane

0xed47,	// (0x0006d320) mce_image_pane_g1

0x25e3,	// (0x00060bbc) mce_image_pane_g2

0x25ed,	// (0x00060bc6) mce_image_pane_g3

0x25f5,	// (0x00060bce) mce_image_pane_g4

0x25fd,	// (0x00060bd6) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0006d899) mce_image_pane_g

0xed51,	// (0x0006d32a) control_top_pane_stacon_cp01_ParamLimits

0xed51,	// (0x0006d32a) control_top_pane_stacon_cp01

0xed65,	// (0x0006d33e) uni_indicator_pane_stacon_cp01_ParamLimits

0xed65,	// (0x0006d33e) uni_indicator_pane_stacon_cp01

0xed76,	// (0x0006d34f) bg_popup_sub_pane_cp03

0xed80,	// (0x0006d359) chi_dic_find_pane

0x2605,	// (0x00060bde) listscroll_chi_dic_pane

0xed88,	// (0x0006d361) main_pane_chidic_g1

0xed90,	// (0x0006d369) chi_dic_find_pane_t1

0xed9e,	// (0x0006d377) find_chidic_pane

0xeda7,	// (0x0006d380) chi_dic_list_pane_ParamLimits

0xeda7,	// (0x0006d380) chi_dic_list_pane

0xedb8,	// (0x0006d391) scroll_pane_cp020

0xedc0,	// (0x0006d399) find_chidic_pane_t1

0xe07b,	// (0x0006c654) input_focus_pane_cp06

0x2619,	// (0x00060bf2) list_chi_dic_pane_ParamLimits

0x2619,	// (0x00060bf2) list_chi_dic_pane

0x262b,	// (0x00060c04) list_chi_dic_pane_t1_ParamLimits

0x262b,	// (0x00060c04) list_chi_dic_pane_t1

0xe07b,	// (0x0006c654) list_highlight_pane_cp020

0xedcf,	// (0x0006d3a8) bg_cale_heading_pane_g1

0x263e,	// (0x00060c17) bg_cale_heading_pane_g2

0x2646,	// (0x00060c1f) bg_cale_heading_pane_g3

0x264e,	// (0x00060c27) bg_cale_heading_pane_g4

0x2658,	// (0x00060c31) bg_cale_heading_pane_g5

0x2662,	// (0x00060c3b) bg_cale_heading_pane_g6

0x266a,	// (0x00060c43) bg_cale_heading_pane_g7

0x2672,	// (0x00060c4b) bg_cale_heading_pane_g8

0x267c,	// (0x00060c55) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0006d8a4) bg_cale_heading_pane_g

0xedcf,	// (0x0006d3a8) bg_cale_side_pane_g1

0x2686,	// (0x00060c5f) bg_cale_side_pane_g2

0x268e,	// (0x00060c67) bg_cale_side_pane_g3

0x2696,	// (0x00060c6f) bg_cale_side_pane_g4

0x269e,	// (0x00060c77) bg_cale_side_pane_g5

0x26a6,	// (0x00060c7f) bg_cale_side_pane_g6

0x26ae,	// (0x00060c87) bg_cale_side_pane_g7

0x26b6,	// (0x00060c8f) bg_cale_side_pane_g8

0x26be,	// (0x00060c97) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0006d8b7) bg_cale_side_pane_g

0x26c6,	// (0x00060c9f) popup_call_status_window_ParamLimits

0x26c6,	// (0x00060c9f) popup_call_status_window

0xedd7,	// (0x0006d3b0) stacon_top_pane

0xeddf,	// (0x0006d3b8) status_pane_ParamLimits

0xeddf,	// (0x0006d3b8) status_pane

0xedf4,	// (0x0006d3cd) status_small_pane

0xedfc,	// (0x0006d3d5) control_pane

0xe07b,	// (0x0006c654) stacon_bottom_pane

0xee04,	// (0x0006d3dd) list_single_mce_smart_pane_t1_ParamLimits

0xee04,	// (0x0006d3dd) list_single_mce_smart_pane_t1

0xee17,	// (0x0006d3f0) list_single_mce_smart_pane_t2_ParamLimits

0xee17,	// (0x0006d3f0) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0006d8ca) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0006d8ca) list_single_mce_smart_pane_t

0x270f,	// (0x00060ce8) compass_pane

0x2718,	// (0x00060cf1) main_location2_pane_t1

0x272a,	// (0x00060d03) main_location2_pane_t2

0x273c,	// (0x00060d15) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0006d8cf) main_location2_pane_t

0xee36,	// (0x0006d40f) compass_pane_g1_ParamLimits

0xee36,	// (0x0006d40f) compass_pane_g1

0x2780,	// (0x00060d59) compass_pane_t1

0x278f,	// (0x00060d68) compass_pane_t2

0x0005,

0xf2ff,	// (0x0006d8d8) compass_pane_t

0x27d6,	// (0x00060daf) text_secondary_cp61

0xeeb2,	// (0x0006d48b) navi_pane_cams_g5

0xef2e,	// (0x0006d507) navi_pane_im_t1

0xef3c,	// (0x0006d515) navi_pane_mp_g1_ParamLimits

0xef3c,	// (0x0006d515) navi_pane_mp_g1

0xef50,	// (0x0006d529) navi_pane_mp_g2_ParamLimits

0xef50,	// (0x0006d529) navi_pane_mp_g2

0xef5c,	// (0x0006d535) navi_pane_mp_g3_ParamLimits

0xef5c,	// (0x0006d535) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0006d8ec) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0006d8ec) navi_pane_mp_g

0xef68,	// (0x0006d541) navi_pane_mp_t1

0xef76,	// (0x0006d54f) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0006d8f3) navi_pane_mp_t

0xefe1,	// (0x0006d5ba) navi_pane_vt_g1

0xef68,	// (0x0006d541) navi_pane_vt_t1

0xefe9,	// (0x0006d5c2) navi_slider_pane

0xe605,	// (0x0006cbde) zooming_pane

0xeff9,	// (0x0006d5d2) navi_slider_pane_g1

0xa16f,	// (0x00068748) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0006d8fa) navi_slider_pane_g

0x2827,	// (0x00060e00) aid_levels_zoom

0x282f,	// (0x00060e08) zooming_pane_g1

0x2837,	// (0x00060e10) zooming_pane_g2

0x2837,	// (0x00060e10) zooming_pane_g3

0x0002,

0xf330,	// (0x0006d909) zooming_pane_g

0x283f,	// (0x00060e18) level_10_zoom

0x2848,	// (0x00060e21) level_11_zoom

0x2851,	// (0x00060e2a) level_1_zoom

0x285a,	// (0x00060e33) level_2_zoom

0x2863,	// (0x00060e3c) level_3_zoom

0x286c,	// (0x00060e45) level_4_zoom

0x2875,	// (0x00060e4e) level_5_zoom

0x287e,	// (0x00060e57) level_6_zoom

0x2887,	// (0x00060e60) level_7_zoom

0x2890,	// (0x00060e69) level_8_zoom

0x2899,	// (0x00060e72) level_9_zoom

0x28aa,	// (0x00060e83) popup_phob_thumbnail_window_g1

0x28b2,	// (0x00060e8b) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0006d910) popup_phob_thumbnail_window_g

0x40a0,	// (0x00062679) level_1_location

0x40a8,	// (0x00062681) level_2_location

0x40b0,	// (0x00062689) level_3_location

0x40b8,	// (0x00062691) level_4_location

0xe605,	// (0x0006cbde) level_5_location

0x28ba,	// (0x00060e93) mce_icon_pane_g1

0x28c4,	// (0x00060e9d) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0006d915) mce_icon_pane_g

0x28cc,	// (0x00060ea5) main_mup_pane_g1_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g1

0x28cc,	// (0x00060ea5) main_mup_pane_g2_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g2

0x28cc,	// (0x00060ea5) main_mup_pane_g3_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g3

0x28cc,	// (0x00060ea5) main_mup_pane_g4_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g4

0x28cc,	// (0x00060ea5) main_mup_pane_g5_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g5

0x28cc,	// (0x00060ea5) main_mup_pane_g6_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g6

0x28cc,	// (0x00060ea5) main_mup_pane_g7_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g7

0x28cc,	// (0x00060ea5) main_mup_pane_g8_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g8

0x28cc,	// (0x00060ea5) main_mup_pane_g9_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g9

0x28cc,	// (0x00060ea5) main_mup_pane_g10_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g10

0x28cc,	// (0x00060ea5) main_mup_pane_g11_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g11

0xe351,	// (0x0006c92a) main_mup_pane_g12_ParamLimits

0xe351,	// (0x0006c92a) main_mup_pane_g12

0x28cc,	// (0x00060ea5) main_mup_pane_g13_ParamLimits

0x28cc,	// (0x00060ea5) main_mup_pane_g13

0x000c,

0xf341,	// (0x0006d91a) main_mup_pane_g_ParamLimits

0xf341,	// (0x0006d91a) main_mup_pane_g

0x28da,	// (0x00060eb3) main_mup_pane_t1_ParamLimits

0x28da,	// (0x00060eb3) main_mup_pane_t1

0x28da,	// (0x00060eb3) main_mup_pane_t2_ParamLimits

0x28da,	// (0x00060eb3) main_mup_pane_t2

0x28da,	// (0x00060eb3) main_mup_pane_t3_ParamLimits

0x28da,	// (0x00060eb3) main_mup_pane_t3

0xe399,	// (0x0006c972) main_mup_pane_t4_ParamLimits

0xe399,	// (0x0006c972) main_mup_pane_t4

0xe399,	// (0x0006c972) main_mup_pane_t5_ParamLimits

0xe399,	// (0x0006c972) main_mup_pane_t5

0xe3ad,	// (0x0006c986) main_mup_pane_t6_ParamLimits

0xe3ad,	// (0x0006c986) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0006d935) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0006d935) main_mup_pane_t

0xe343,	// (0x0006c91c) mup_progress_pane_ParamLimits

0xe343,	// (0x0006c91c) mup_progress_pane

0x28ee,	// (0x00060ec7) mup_visualizer_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup_visualizer_pane

0x28ee,	// (0x00060ec7) mup_volume_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup_volume_pane

0xe35f,	// (0x0006c938) mup_visualizer_pane_g1_ParamLimits

0xe35f,	// (0x0006c938) mup_visualizer_pane_g1

0x28fc,	// (0x00060ed5) mup_visualizer_pane_g2_ParamLimits

0x28fc,	// (0x00060ed5) mup_visualizer_pane_g2

0xe351,	// (0x0006c92a) mup_visualizer_pane_g3_ParamLimits

0xe351,	// (0x0006c92a) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0006d942) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0006d942) mup_visualizer_pane_g

0xe38f,	// (0x0006c968) mup_volume_pane_g1

0xe38f,	// (0x0006c968) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0006d665) mup_volume_pane_g

0xe38f,	// (0x0006c968) mup_progress_pane_g1

0xe38f,	// (0x0006c968) mup_progress_pane_g2

0xe38f,	// (0x0006c968) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0006d949) mup_progress_pane_g

0xe07b,	// (0x0006c654) bg_popup_window_pane_cp05

0x290a,	// (0x00060ee3) heading_pane_cp02_ParamLimits

0x290a,	// (0x00060ee3) heading_pane_cp02

0x2924,	// (0x00060efd) list_popup_blid_pane

0x292c,	// (0x00060f05) list_blid_sat_info_pane_ParamLimits

0x292c,	// (0x00060f05) list_blid_sat_info_pane

0x293f,	// (0x00060f18) list_blid_sat_info_pane_g1

0x2947,	// (0x00060f20) list_blid_sat_info_pane_t1

0x2a4d,	// (0x00061026) mup_equalizer_pane_ParamLimits

0x2a4d,	// (0x00061026) mup_equalizer_pane

0x2a66,	// (0x0006103f) mup_equalizer_pane_cp1_ParamLimits

0x2a66,	// (0x0006103f) mup_equalizer_pane_cp1

0x2a83,	// (0x0006105c) mup_equalizer_pane_cp2_ParamLimits

0x2a83,	// (0x0006105c) mup_equalizer_pane_cp2

0x2aa0,	// (0x00061079) mup_equalizer_pane_cp3_ParamLimits

0x2aa0,	// (0x00061079) mup_equalizer_pane_cp3

0x2ac1,	// (0x0006109a) mup_equalizer_pane_cp4_ParamLimits

0x2ac1,	// (0x0006109a) mup_equalizer_pane_cp4

0x2ae2,	// (0x000610bb) mup_equalizer_pane_cp5

0x2af6,	// (0x000610cf) mup_equalizer_pane_cp6

0x2b0a,	// (0x000610e3) mup_equalizer_pane_cp7

0xa4f0,	// (0x00068ac9) bg_popup_call_poc_act_pane_g9

0xa4f8,	// (0x00068ad1) bg_popup_call_poc_act_pane_g10

0xa500,	// (0x00068ad9) bg_popup_call_poc_act_pane_g11

0x000a,

0xe2d6,	// (0x0006c8af) mup_scale_pane

0xe2ee,	// (0x0006c8c7) mup_scale_pane_g1

0x2b1e,	// (0x000610f7) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0006d965) mup_scale_pane_g

0x2b54,	// (0x0006112d) msg_data_pane

0x2b5c,	// (0x00061135) scroll_pane_cp017

0x2b64,	// (0x0006113d) bg_list_pane_cp04_ParamLimits

0x2b64,	// (0x0006113d) bg_list_pane_cp04

0x2b88,	// (0x00061161) msg_data_pane_g1

0x2b90,	// (0x00061169) msg_data_pane_g2

0x2b9a,	// (0x00061173) msg_data_pane_g3

0x2ba2,	// (0x0006117b) msg_data_pane_g4

0x2baa,	// (0x00061183) msg_data_pane_g5

0x2bb2,	// (0x0006118b) msg_data_pane_g6

0x2bba,	// (0x00061193) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0006d974) msg_data_pane_g

0x2bc2,	// (0x0006119b) msg_text_pane_ParamLimits

0x2bc2,	// (0x0006119b) msg_text_pane

0x2bf7,	// (0x000611d0) qrid_highlight_pane_cp011_ParamLimits

0x2bf7,	// (0x000611d0) qrid_highlight_pane_cp011

0xe07b,	// (0x0006c654) msg_body_pane

0xe2d6,	// (0x0006c8af) msg_header_pane

0x2c21,	// (0x000611fa) input_focus_pane_cp07

0x2c50,	// (0x00061229) msg_header_pane_t1_ParamLimits

0x2c50,	// (0x00061229) msg_header_pane_t1

0x2c6c,	// (0x00061245) msg_header_pane_t2_ParamLimits

0x2c6c,	// (0x00061245) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0006d988) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0006d988) msg_header_pane_t

0x2c8c,	// (0x00061265) msg_body_pane_g1

0x2c94,	// (0x0006126d) msg_body_pane_t1_ParamLimits

0x2c94,	// (0x0006126d) msg_body_pane_t1

0x2cc5,	// (0x0006129e) msg_body_pane_t2_ParamLimits

0x2cc5,	// (0x0006129e) msg_body_pane_t2

0x2cd7,	// (0x000612b0) msg_body_pane_t3_ParamLimits

0x2cd7,	// (0x000612b0) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0006d98d) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0006d98d) msg_body_pane_t

0x2d23,	// (0x000612fc) main_viewer_pane_g1_ParamLimits

0x2d23,	// (0x000612fc) main_viewer_pane_g1

0x2d31,	// (0x0006130a) main_viewer_pane_g2_ParamLimits

0x2d31,	// (0x0006130a) main_viewer_pane_g2

0x2d3f,	// (0x00061318) main_viewer_pane_g3_ParamLimits

0x2d3f,	// (0x00061318) main_viewer_pane_g3

0x2d4e,	// (0x00061327) main_viewer_pane_g4_ParamLimits

0x2d4e,	// (0x00061327) main_viewer_pane_g4

0xa199,	// (0x00068772) main_viewer_pane_g5_ParamLimits

0xa199,	// (0x00068772) main_viewer_pane_g5

0xa199,	// (0x00068772) main_viewer_pane_g7_ParamLimits

0xa199,	// (0x00068772) main_viewer_pane_g7

0xeaaa,	// (0x0006d083) main_viewer_pane_g8_ParamLimits

0xeaaa,	// (0x0006d083) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0006d99d) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0006d99d) main_viewer_pane_g

0x2d5d,	// (0x00061336) viewer_content_pane_ParamLimits

0x2d5d,	// (0x00061336) viewer_content_pane

0x2d98,	// (0x00061371) main_postcard_pane_g1_ParamLimits

0x2d98,	// (0x00061371) main_postcard_pane_g1

0x2dae,	// (0x00061387) main_postcard_pane_g2_ParamLimits

0x2dae,	// (0x00061387) main_postcard_pane_g2

0x2dc4,	// (0x0006139d) main_postcard_pane_g3_ParamLimits

0x2dc4,	// (0x0006139d) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0006d9ae) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0006d9ae) main_postcard_pane_g

0x2ddb,	// (0x000613b4) main_postcard_pane_g4

0xa680,	// (0x00068c59) smil_status_volume_pane_g2

0x2e1e,	// (0x000613f7) postcard_pane_ParamLimits

0x2e1e,	// (0x000613f7) postcard_pane

0x2e60,	// (0x00061439) postcard_pane_g1_ParamLimits

0x2e60,	// (0x00061439) postcard_pane_g1

0x2e6e,	// (0x00061447) postcard_pane_g2_ParamLimits

0x2e6e,	// (0x00061447) postcard_pane_g2

0x2e7a,	// (0x00061453) postcard_pane_g3_ParamLimits

0x2e7a,	// (0x00061453) postcard_pane_g3

0x2e86,	// (0x0006145f) postcard_pane_g4_ParamLimits

0x2e86,	// (0x0006145f) postcard_pane_g4

0x2e94,	// (0x0006146d) postcard_pane_g5_ParamLimits

0x2e94,	// (0x0006146d) postcard_pane_g5

0x2ea9,	// (0x00061482) postcard_pane_g6_ParamLimits

0x2ea9,	// (0x00061482) postcard_pane_g6

0x2e60,	// (0x00061439) postcard_pane_g7_ParamLimits

0x2e60,	// (0x00061439) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0006d9bb) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0006d9bb) postcard_pane_g

0x2ebd,	// (0x00061496) main_mp2_pane_g1_ParamLimits

0x2ebd,	// (0x00061496) main_mp2_pane_g1

0x2ec9,	// (0x000614a2) main_mp2_pane_g2_ParamLimits

0x2ec9,	// (0x000614a2) main_mp2_pane_g2

0x2ed5,	// (0x000614ae) main_mp2_pane_g3_ParamLimits

0x2ed5,	// (0x000614ae) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0006d9ca) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0006d9ca) main_mp2_pane_g

0x2ee1,	// (0x000614ba) main_mp2_pane_t1_ParamLimits

0x2ee1,	// (0x000614ba) main_mp2_pane_t1

0x2ef6,	// (0x000614cf) main_mp2_pane_t2_ParamLimits

0x2ef6,	// (0x000614cf) main_mp2_pane_t2

0x2f08,	// (0x000614e1) main_mp2_pane_t3_ParamLimits

0x2f08,	// (0x000614e1) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0006d9d1) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0006d9d1) main_mp2_pane_t

0xdbd9,	// (0x0006c1b2) pec_content_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) pec_content_pane

0xd923,	// (0x0006befc) scroll_pane_cp015

0x28ee,	// (0x00060ec7) pec_attribute_pane_ParamLimits

0x28ee,	// (0x00060ec7) pec_attribute_pane

0xe351,	// (0x0006c92a) pec_content_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) pec_content_pane_g1

0x2f1a,	// (0x000614f3) pec_content_pane_t1_ParamLimits

0x2f1a,	// (0x000614f3) pec_content_pane_t1

0x2f2e,	// (0x00061507) pec_content_pane_t2_ParamLimits

0x2f2e,	// (0x00061507) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0006d9d8) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0006d9d8) pec_content_pane_t

0xe343,	// (0x0006c91c) list_single_graphic_pane_cp01_ParamLimits

0xe343,	// (0x0006c91c) list_single_graphic_pane_cp01

0xe2d6,	// (0x0006c8af) bg_popup_sub_pane_cp04

0x2f42,	// (0x0006151b) popup_mup_playback_window_g1

0x2f4e,	// (0x00061527) popup_mup_playback_window_t1

0x2f63,	// (0x0006153c) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0006d9dd) popup_mup_playback_window_t

0x2fb8,	// (0x00061591) main_image_pane_g1_ParamLimits

0x2fb8,	// (0x00061591) main_image_pane_g1

0x3095,	// (0x0006166e) scroll_pane_cp018_ParamLimits

0x3095,	// (0x0006166e) scroll_pane_cp018

0x30ad,	// (0x00061686) scroll_pane_cp016_ParamLimits

0x30ad,	// (0x00061686) scroll_pane_cp016

0x30e1,	// (0x000616ba) smil2_image_pane_ParamLimits

0x30e1,	// (0x000616ba) smil2_image_pane

0x3111,	// (0x000616ea) smil2_root_pane_ParamLimits

0x3111,	// (0x000616ea) smil2_root_pane

0x3149,	// (0x00061722) smil2_text_pane_ParamLimits

0x3149,	// (0x00061722) smil2_text_pane

0xd923,	// (0x0006befc) bg_list_pane_cp06

0xd923,	// (0x0006befc) grid_radio_pane

0xe07b,	// (0x0006c654) bg_popup_window_pane_cp06

0xeb0b,	// (0x0006d0e4) main_fmradio_pane_t1

0xec92,	// (0x0006d26b) heading_pane_cp04

0xeb0b,	// (0x0006d0e4) main_fmradio_pane_t2

0xa508,	// (0x00068ae1) popup_cale_lunar_info_window_g1

0xeb0b,	// (0x0006d0e4) main_fmradio_pane_t3

0xa510,	// (0x00068ae9) popup_cale_lunar_info_window_g2

0xeb0b,	// (0x0006d0e4) main_fmradio_pane_t4

0x0001,

0xeb0b,	// (0x0006d0e4) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0006da9a) popup_cale_lunar_info_window_g

0xf264,	// (0x0006d83d) main_fmradio_pane_t

0xd923,	// (0x0006befc) wait_bar_pane_cp03

0xe343,	// (0x0006c91c) cell_fmradio_pane_ParamLimits

0xe343,	// (0x0006c91c) cell_fmradio_pane

0xe351,	// (0x0006c92a) cell_fmradio_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_fmradio_pane_g1

0xd923,	// (0x0006befc) grid_highlight_pane_cp011

0x31c9,	// (0x000617a2) poc_content_pane_ParamLimits

0x31c9,	// (0x000617a2) poc_content_pane

0x31db,	// (0x000617b4) scroll_pane_cp019

0x31e3,	// (0x000617bc) popup_call_poc_act_window_ParamLimits

0x31e3,	// (0x000617bc) popup_call_poc_act_window

0x3207,	// (0x000617e0) popup_call_poc_inact_window_ParamLimits

0x3207,	// (0x000617e0) popup_call_poc_inact_window

0xf49d,	// (0x0006da76) bg_popup_call_poc_act_pane_g

0xa480,	// (0x00068a59) bg_popup_call_poc_inact_pane_g1

0xa488,	// (0x00068a61) bg_popup_call_poc_inact_pane_g2

0x3220,	// (0x000617f9) popup_call_poc_act_window_g2

0xa490,	// (0x00068a69) bg_popup_call_poc_inact_pane_g3

0xa498,	// (0x00068a71) bg_popup_call_poc_inact_pane_g4

0xa4a0,	// (0x00068a79) bg_popup_call_poc_inact_pane_g5

0x3228,	// (0x00061801) popup_call_poc_act_window_t1_ParamLimits

0x3228,	// (0x00061801) popup_call_poc_act_window_t1

0x3250,	// (0x00061829) popup_call_poc_act_window_t2_ParamLimits

0x3250,	// (0x00061829) popup_call_poc_act_window_t2

0x3278,	// (0x00061851) popup_call_poc_act_window_t3_ParamLimits

0x3278,	// (0x00061851) popup_call_poc_act_window_t3

0x32a0,	// (0x00061879) popup_call_poc_act_window_t4_ParamLimits

0x32a0,	// (0x00061879) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0006d9f2) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0006d9f2) popup_call_poc_act_window_t

0xa4a8,	// (0x00068a81) bg_popup_call_poc_inact_pane_g6

0xa4b0,	// (0x00068a89) bg_popup_call_poc_inact_pane_g7

0xa4b8,	// (0x00068a91) bg_popup_call_poc_inact_pane_g8

0x32b2,	// (0x0006188b) popup_call_poc_inact_window_g2

0xa4c0,	// (0x00068a99) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x0006da63) bg_popup_call_poc_inact_pane_g

0x32ba,	// (0x00061893) popup_call_poc_inact_window_t1_ParamLimits

0x32ba,	// (0x00061893) popup_call_poc_inact_window_t1

0x32cf,	// (0x000618a8) popup_call_poc_inact_window_t2_ParamLimits

0x32cf,	// (0x000618a8) popup_call_poc_inact_window_t2

0x32e4,	// (0x000618bd) popup_call_poc_inact_window_t3_ParamLimits

0x32e4,	// (0x000618bd) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0006d9fb) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0006d9fb) popup_call_poc_inact_window_t

0xa5f8,	// (0x00068bd1) context_pane_ParamLimits

0x4572,	// (0x00062b4b) signal_pane_ParamLimits

0xe605,	// (0x0006cbde) main_call2_pane

0xa5d1,	// (0x00068baa) popup_phob_thumbnail2_window_ParamLimits

0xa5d1,	// (0x00068baa) popup_phob_thumbnail2_window

0xa181,	// (0x0006875a) aid_hotspot_pointer_arrow_pane

0xa189,	// (0x00068762) aid_hotspot_pointer_hand_pane

0x406a,	// (0x00062643) phob_pre_status_pane_g5

0xdbd9,	// (0x0006c1b2) cams_zoom_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) image_vga_pane_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g2_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g3_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g4_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g5_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g6_ParamLimits

0xe351,	// (0x0006c92a) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0006d736) main_camera_pane_g_ParamLimits

0xe399,	// (0x0006c972) main_camera_pane_t1_ParamLimits

0xe399,	// (0x0006c972) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0006d747) main_camera_pane_t_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_preview_window_pane_cp01_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_preview_window_pane_cp01

0x32f9,	// (0x000618d2) popup_phob_thumbnail2_window_g1_ParamLimits

0x32f9,	// (0x000618d2) popup_phob_thumbnail2_window_g1

0xe07b,	// (0x0006c654) call2_cli_visual_pane

0x3320,	// (0x000618f9) popup_call2_audio_conf_window_ParamLimits

0x3320,	// (0x000618f9) popup_call2_audio_conf_window

0x3340,	// (0x00061919) popup_call2_audio_first_window_ParamLimits

0x3340,	// (0x00061919) popup_call2_audio_first_window

0x33d6,	// (0x000619af) popup_call2_audio_in_window_ParamLimits

0x33d6,	// (0x000619af) popup_call2_audio_in_window

0x341e,	// (0x000619f7) popup_call2_audio_out_window_ParamLimits

0x341e,	// (0x000619f7) popup_call2_audio_out_window

0x3488,	// (0x00061a61) popup_call2_audio_second_window_ParamLimits

0x3488,	// (0x00061a61) popup_call2_audio_second_window

0x34ee,	// (0x00061ac7) popup_call2_audio_wait_window_ParamLimits

0x34ee,	// (0x00061ac7) popup_call2_audio_wait_window

0xe07b,	// (0x0006c654) bg_popup_call2_act_pane_cp03

0xe2b8,	// (0x0006c891) list_conf_pane_cp

0x3528,	// (0x00061b01) popup_call2_audio_conf_window_t1

0xece2,	// (0x0006d2bb) list_single_graphic_popup_conf2_pane_ParamLimits

0xece2,	// (0x0006d2bb) list_single_graphic_popup_conf2_pane

0xecf5,	// (0x0006d2ce) list_highlight_pane_cp04

0x3536,	// (0x00061b0f) list_single_graphic_popup_conf2_pane_g1

0xed06,	// (0x0006d2df) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0006da02) list_single_graphic_popup_conf2_pane_g

0x3540,	// (0x00061b19) list_single_graphic_popup_conf2_pane_t1

0x354e,	// (0x00061b27) bg_popup_call2_act_pane_cp01_ParamLimits

0x354e,	// (0x00061b27) bg_popup_call2_act_pane_cp01

0x35d8,	// (0x00061bb1) call_type_pane_cp05_ParamLimits

0x35d8,	// (0x00061bb1) call_type_pane_cp05

0x362c,	// (0x00061c05) popup_call2_audio_second_window_g1_ParamLimits

0x362c,	// (0x00061c05) popup_call2_audio_second_window_g1

0x3680,	// (0x00061c59) popup_call2_audio_second_window_g2_ParamLimits

0x3680,	// (0x00061c59) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0006da07) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0006da07) popup_call2_audio_second_window_g

0x36e5,	// (0x00061cbe) popup_call2_audio_second_window_t1_ParamLimits

0x36e5,	// (0x00061cbe) popup_call2_audio_second_window_t1

0x37a0,	// (0x00061d79) popup_call2_audio_second_window_t2_ParamLimits

0x37a0,	// (0x00061d79) popup_call2_audio_second_window_t2

0x37f3,	// (0x00061dcc) popup_call2_audio_second_window_t3_ParamLimits

0x37f3,	// (0x00061dcc) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0006da0e) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0006da0e) popup_call2_audio_second_window_t

0xe07b,	// (0x0006c654) bg_popup_call2_in_pane_cp02

0xe085,	// (0x0006c65e) call_type_pane_cp04

0x38e6,	// (0x00061ebf) popup_call2_audio_wait_window_g1

0x38ee,	// (0x00061ec7) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0006da17) popup_call2_audio_wait_window_g

0xe09d,	// (0x0006c676) popup_call2_audio_wait_window_t3

0x38f6,	// (0x00061ecf) bg_popup_call2_act_pane_ParamLimits

0x38f6,	// (0x00061ecf) bg_popup_call2_act_pane

0x39b6,	// (0x00061f8f) call_type_pane_cp03_ParamLimits

0x39b6,	// (0x00061f8f) call_type_pane_cp03

0x3a1a,	// (0x00061ff3) popup_call2_audio_first_window_g1_ParamLimits

0x3a1a,	// (0x00061ff3) popup_call2_audio_first_window_g1

0x3a8a,	// (0x00062063) popup_call2_audio_first_window_g2_ParamLimits

0x3a8a,	// (0x00062063) popup_call2_audio_first_window_g2

0x3aee,	// (0x000620c7) popup_call2_audio_first_window_g3_ParamLimits

0x3aee,	// (0x000620c7) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0006da1c) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0006da1c) popup_call2_audio_first_window_g

0x3b76,	// (0x0006214f) popup_call2_audio_first_window_t1_ParamLimits

0x3b76,	// (0x0006214f) popup_call2_audio_first_window_t1

0x3c79,	// (0x00062252) popup_call2_audio_first_window_t4_ParamLimits

0x3c79,	// (0x00062252) popup_call2_audio_first_window_t4

0x3d5c,	// (0x00062335) popup_call2_audio_first_window_t5_ParamLimits

0x3d5c,	// (0x00062335) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0006da27) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0006da27) popup_call2_audio_first_window_t

0xe2ce,	// (0x0006c8a7) bg_popup_call2_act_pane_g1

0xa518,	// (0x00068af1) popup_cale_lunar_info_window_t1

0xa526,	// (0x00068aff) popup_cale_lunar_info_window_t2

0xa534,	// (0x00068b0d) popup_cale_lunar_info_window_t3

0xe07b,	// (0x0006c654) bg_popup_call2_bubble_pane

0x3e5d,	// (0x00062436) bg_popup_call2_in_pane_cp01_ParamLimits

0x3e5d,	// (0x00062436) bg_popup_call2_in_pane_cp01

0xda1c,	// (0x0006bff5) call_type_pane_cp02

0x3ea5,	// (0x0006247e) popup_call2_audio_out_window_g1_ParamLimits

0x3ea5,	// (0x0006247e) popup_call2_audio_out_window_g1

0x3ed1,	// (0x000624aa) popup_call2_audio_out_window_g2_ParamLimits

0x3ed1,	// (0x000624aa) popup_call2_audio_out_window_g2

0x3ef9,	// (0x000624d2) popup_call2_audio_out_window_g3_ParamLimits

0x3ef9,	// (0x000624d2) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0006da30) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0006da30) popup_call2_audio_out_window_g

0x3f34,	// (0x0006250d) popup_call2_audio_out_window_t1_ParamLimits

0x3f34,	// (0x0006250d) popup_call2_audio_out_window_t1

0x3f93,	// (0x0006256c) popup_call2_audio_out_window_t2_ParamLimits

0x3f93,	// (0x0006256c) popup_call2_audio_out_window_t2

0x3fe7,	// (0x000625c0) popup_call2_audio_out_window_t3_ParamLimits

0x3fe7,	// (0x000625c0) popup_call2_audio_out_window_t3

0x3ffd,	// (0x000625d6) popup_call2_audio_out_window_t4_ParamLimits

0x3ffd,	// (0x000625d6) popup_call2_audio_out_window_t4

0x4013,	// (0x000625ec) popup_call2_audio_out_window_t5_ParamLimits

0x4013,	// (0x000625ec) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0006da39) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0006da39) popup_call2_audio_out_window_t

0xa206,	// (0x000687df) bg_popup_call2_in_pane_ParamLimits

0xa206,	// (0x000687df) bg_popup_call2_in_pane

0xa262,	// (0x0006883b) popup_call2_audio_in_window_g1_ParamLimits

0xa262,	// (0x0006883b) popup_call2_audio_in_window_g1

0xa29a,	// (0x00068873) popup_call2_audio_in_window_g2_ParamLimits

0xa29a,	// (0x00068873) popup_call2_audio_in_window_g2

0xa2d2,	// (0x000688ab) popup_call2_audio_in_window_g3_ParamLimits

0xa2d2,	// (0x000688ab) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0006da46) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0006da46) popup_call2_audio_in_window_g

0xa32a,	// (0x00068903) popup_call2_audio_in_window_t1_ParamLimits

0xa32a,	// (0x00068903) popup_call2_audio_in_window_t1

0xa3aa,	// (0x00068983) popup_call2_audio_in_window_t2_ParamLimits

0xa3aa,	// (0x00068983) popup_call2_audio_in_window_t2

0xa42a,	// (0x00068a03) popup_call2_audio_in_window_t3_ParamLimits

0xa42a,	// (0x00068a03) popup_call2_audio_in_window_t3

0xa444,	// (0x00068a1d) popup_call2_audio_in_window_t4_ParamLimits

0xa444,	// (0x00068a1d) popup_call2_audio_in_window_t4

0xa456,	// (0x00068a2f) popup_call2_audio_in_window_t5_ParamLimits

0xa456,	// (0x00068a2f) popup_call2_audio_in_window_t5

0xa46b,	// (0x00068a44) popup_call2_audio_in_window_t6_ParamLimits

0xa46b,	// (0x00068a44) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0006da4f) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0006da4f) popup_call2_audio_in_window_t

0xe2ce,	// (0x0006c8a7) bg_popup_call2_in_pane_g1

0xa542,	// (0x00068b1b) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0006da9f) popup_cale_lunar_info_window_t

0xe2d6,	// (0x0006c8af) bg_popup_call2_rect_pane_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_call2_rect_pane

0xe07b,	// (0x0006c654) call2_cli_visual_graphic_pane

0xe07b,	// (0x0006c654) call2_cli_visual_text_pane

0xa693,	// (0x00068c6c) smil_status_volume_pane_g3

0x0002,

0xe2ee,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g1

0xe2ee,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g2

0xe2ee,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0006da5c) call2_cli_visual_graphic_pane_g

0xe515,	// (0x0006caee) bg_popup_call2_rect_pane_g1

0xe4ef,	// (0x0006cac8) bg_popup_call2_rect_pane_g2

0xe4e7,	// (0x0006cac0) bg_popup_call2_rect_pane_g3

0xe525,	// (0x0006cafe) bg_popup_call2_rect_pane_g4

0xe51d,	// (0x0006caf6) bg_popup_call2_rect_pane_g5

0xe52d,	// (0x0006cb06) bg_popup_call2_rect_pane_g6

0xe535,	// (0x0006cb0e) bg_popup_call2_rect_pane_g7

0xe545,	// (0x0006cb1e) bg_popup_call2_rect_pane_g8

0xe53d,	// (0x0006cb16) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0006d7ec) bg_popup_call2_rect_pane_g

0xa480,	// (0x00068a59) bg_popup_call2_bubble_pane_g1

0xa488,	// (0x00068a61) bg_popup_call2_bubble_pane_g2

0xa490,	// (0x00068a69) bg_popup_call2_bubble_pane_g3

0xa498,	// (0x00068a71) bg_popup_call2_bubble_pane_g4

0xa4a0,	// (0x00068a79) bg_popup_call2_bubble_pane_g5

0xa4a8,	// (0x00068a81) bg_popup_call2_bubble_pane_g6

0xa4b0,	// (0x00068a89) bg_popup_call2_bubble_pane_g7

0xa4b8,	// (0x00068a91) bg_popup_call2_bubble_pane_g8

0xa4c0,	// (0x00068a99) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0006da63) bg_popup_call2_bubble_pane_g

0x0dda,	// (0x0005f3b3) aid_cale_week_size_cell_pane

0x1380,	// (0x0005f959) aid_cams_cif_uncrop_pane_ParamLimits

0x1380,	// (0x0005f959) aid_cams_cif_uncrop_pane

0xdbd9,	// (0x0006c1b2) aid_cams_size_cell_ParamLimits

0xdbd9,	// (0x0006c1b2) aid_cams_size_cell

0xdbd9,	// (0x0006c1b2) grid_cams_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) linegrid_cams_pane_ParamLimits

0x159e,	// (0x0005fb77) call_video_pane_t1

0x15bc,	// (0x0005fb95) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0006d793) call_video_pane_t

0x19ea,	// (0x0005ffc3) aid_cale_month_size_cell_pane_ParamLimits

0x19ea,	// (0x0005ffc3) aid_cale_month_size_cell_pane

0xf50a,	// (0x0006dae3) smil_status_volume_pane_g

0xa6a0,	// (0x00068c79) volume_smil_pane_ParamLimits

0x9fec,	// (0x000685c5) aid_popup2_width_pane

0x0d51,	// (0x0005f32a) cell_qdial_pane_g4_ParamLimits

0x0d51,	// (0x0005f32a) cell_qdial_pane_g4

0x2760,	// (0x00060d39) aid_blid_cardinal_pane_ParamLimits

0x276c,	// (0x00060d45) aid_blid_destination_pane_ParamLimits

0x276c,	// (0x00060d45) aid_blid_destination_pane

0xe2d6,	// (0x0006c8af) bg_popup_call_poc_act_pane_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_call_poc_act_pane

0xe2d6,	// (0x0006c8af) bg_popup_call_poc_inact_pane_ParamLimits

0xe2d6,	// (0x0006c8af) bg_popup_call_poc_inact_pane

0xa4c8,	// (0x00068aa1) bg_popup_call_poc_act_pane_g1

0xa4d0,	// (0x00068aa9) bg_popup_call_poc_act_pane_g2

0xa4d8,	// (0x00068ab1) bg_popup_call_poc_act_pane_g3

0xa498,	// (0x00068a71) bg_popup_call_poc_act_pane_g4

0xa4a0,	// (0x00068a79) bg_popup_call_poc_act_pane_g5

0xa4e0,	// (0x00068ab9) bg_popup_call_poc_act_pane_g6

0xa4b0,	// (0x00068a89) bg_popup_call_poc_act_pane_g7

0xa4e8,	// (0x00068ac1) bg_popup_call_poc_act_pane_g8

0xe07b,	// (0x0006c654) main_usb_pane

0xa5ac,	// (0x00068b85) popup_cale_lunar_info_window

0x1896,	// (0x0005fe6f) im_reading_pane_t1_ParamLimits

0xe6c6,	// (0x0006cc9f) list_im_pane_ParamLimits

0xe6d7,	// (0x0006ccb0) scroll_pane_cp07_ParamLimits

0xe07b,	// (0x0006c654) grid_highlight_pane_cp012

0xe2d6,	// (0x0006c8af) mup_scale_pane_ParamLimits

0xe351,	// (0x0006c92a) main_usb_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) main_usb_pane_g1

0xe351,	// (0x0006c92a) main_usb_pane_g2_ParamLimits

0xe351,	// (0x0006c92a) main_usb_pane_g2

0x0001,

0xf199,	// (0x0006d772) main_usb_pane_g_ParamLimits

0xf199,	// (0x0006d772) main_usb_pane_g

0xe399,	// (0x0006c972) main_usb_pane_t1_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t1

0xe399,	// (0x0006c972) main_usb_pane_t2_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t2

0xe399,	// (0x0006c972) main_usb_pane_t3_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t3

0xe399,	// (0x0006c972) main_usb_pane_t4_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t4

0xe399,	// (0x0006c972) main_usb_pane_t5_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t5

0xe399,	// (0x0006c972) main_usb_pane_t6_ParamLimits

0xe399,	// (0x0006c972) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0006da8d) main_usb_pane_t_ParamLimits

0x270f,	// (0x00060ce8) aid_text_placing

0x2718,	// (0x00060cf1) main_location2_pane_t1_ParamLimits

0x272a,	// (0x00060d03) main_location2_pane_t2_ParamLimits

0x273c,	// (0x00060d15) main_location2_pane_t3_ParamLimits

0x274e,	// (0x00060d27) main_location2_pane_t4_ParamLimits

0x274e,	// (0x00060d27) main_location2_pane_t4

0xf2f6,	// (0x0006d8cf) main_location2_pane_t_ParamLimits

0xe304,	// (0x0006c8dd) find_pinb_pane_g2_ParamLimits

0xe304,	// (0x0006c8dd) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0006d64b) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0006d64b) find_pinb_pane_g

0xe310,	// (0x0006c8e9) find_pinb_pane_t1_ParamLimits

0xe322,	// (0x0006c8fb) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0006d650) find_pinb_pane_t_ParamLimits

0xe07b,	// (0x0006c654) main_call3_pane

0x1ed5,	// (0x000604ae) cale_month_day_heading_pane_t1_ParamLimits

0x1f5b,	// (0x00060534) cale_month_day_heading_pane_t2_ParamLimits

0x1fd4,	// (0x000605ad) cale_month_day_heading_pane_t3_ParamLimits

0x204d,	// (0x00060626) cale_month_day_heading_pane_t4_ParamLimits

0x20ce,	// (0x000606a7) cale_month_day_heading_pane_t5_ParamLimits

0x2157,	// (0x00060730) cale_month_day_heading_pane_t6_ParamLimits

0x21e0,	// (0x000607b9) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0006d7cb) cale_month_day_heading_pane_t_ParamLimits

0xe921,	// (0x0006cefa) smil_status_volume_pane

0x2e3c,	// (0x00061415) postcard_address_pane_ParamLimits

0x2e3c,	// (0x00061415) postcard_address_pane

0x2e4e,	// (0x00061427) postcard_message_pane_ParamLimits

0x2e4e,	// (0x00061427) postcard_message_pane

0x4028,	// (0x00062601) call2_cli_visual_pane_t1_ParamLimits

0x4028,	// (0x00062601) call2_cli_visual_pane_t1

0xa6cd,	// (0x00068ca6) postcard_message_pane_t1_ParamLimits

0xa6cd,	// (0x00068ca6) postcard_message_pane_t1

0xa6b5,	// (0x00068c8e) postcard_address_pane_t1_ParamLimits

0xa6b5,	// (0x00068c8e) postcard_address_pane_t1

0x4724,	// (0x00062cfd) popup_call3_audio_in_window_ParamLimits

0x4724,	// (0x00062cfd) popup_call3_audio_in_window

0x45af,	// (0x00062b88) bg_popup_call3_in_pane_ParamLimits

0x45af,	// (0x00062b88) bg_popup_call3_in_pane

0x4625,	// (0x00062bfe) popup_call3_audio_in_window_g1_ParamLimits

0x4625,	// (0x00062bfe) popup_call3_audio_in_window_g1

0x4645,	// (0x00062c1e) popup_call3_audio_in_window_g2_ParamLimits

0x4645,	// (0x00062c1e) popup_call3_audio_in_window_g2

0x4665,	// (0x00062c3e) popup_call3_audio_in_window_g3_ParamLimits

0x4665,	// (0x00062c3e) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0006daea) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0006daea) popup_call3_audio_in_window_g

0x4696,	// (0x00062c6f) popup_call3_audio_in_window_t1_ParamLimits

0x4696,	// (0x00062c6f) popup_call3_audio_in_window_t1

0x46d4,	// (0x00062cad) popup_call3_audio_in_window_t2_ParamLimits

0x46d4,	// (0x00062cad) popup_call3_audio_in_window_t2

0x4712,	// (0x00062ceb) popup_call3_audio_in_window_t3_ParamLimits

0x4712,	// (0x00062ceb) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x0006daf3) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x0006daf3) popup_call3_audio_in_window_t

0xe605,	// (0x0006cbde) bg_popup_call3_rect_pane

0xe515,	// (0x0006caee) bg_popup_call3_rect_pane_g1

0xe4ef,	// (0x0006cac8) bg_popup_call3_rect_pane_g2

0xe4e7,	// (0x0006cac0) bg_popup_call3_rect_pane_g3

0xe525,	// (0x0006cafe) bg_popup_call3_rect_pane_g4

0xe51d,	// (0x0006caf6) bg_popup_call3_rect_pane_g5

0xe52d,	// (0x0006cb06) bg_popup_call3_rect_pane_g6

0xe535,	// (0x0006cb0e) bg_popup_call3_rect_pane_g7

0xd923,	// (0x0006befc) mup_visualizer_osc_pane

0xd923,	// (0x0006befc) mup_visualizer_spec_pane

0x45df,	// (0x00062bb8) call3_video_qcif_pane_ParamLimits

0x45df,	// (0x00062bb8) call3_video_qcif_pane

0x45f2,	// (0x00062bcb) call3_video_qcif_uncrop_pane_ParamLimits

0x45f2,	// (0x00062bcb) call3_video_qcif_uncrop_pane

0x4600,	// (0x00062bd9) call3_video_subqcif_pane_ParamLimits

0x4600,	// (0x00062bd9) call3_video_subqcif_pane

0x4614,	// (0x00062bed) call3_video_subqcif_uncrop_pane_ParamLimits

0x4614,	// (0x00062bed) call3_video_subqcif_uncrop_pane

0x4685,	// (0x00062c5e) popup_call3_audio_in_window_g4_ParamLimits

0x4685,	// (0x00062c5e) popup_call3_audio_in_window_g4

0xd923,	// (0x0006befc) mup_spec_half_pane

0xd923,	// (0x0006befc) mup_spec_half_pane_cp

0xd923,	// (0x0006befc) mup_osc_middle_pane

0xe38f,	// (0x0006c968) mup_visualizer_osc_pane_g1

0xa646,	// (0x00068c1f) mup_spec_bar_pane_ParamLimits

0xa646,	// (0x00068c1f) mup_spec_bar_pane

0xe38f,	// (0x0006c968) mup_spec_bar_pane_g1

0xe38f,	// (0x0006c968) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0006d665) mup_spec_bar_pane_g

0x0dda,	// (0x0005f3b3) aid_cale_week_size_cell_pane_ParamLimits

0x0df4,	// (0x0005f3cd) bg_cale_heading_pane_ParamLimits

0xe567,	// (0x0006cb40) bg_cale_pane_cp01_ParamLimits

0x0e0c,	// (0x0005f3e5) cale_week_corner_pane_ParamLimits

0x0e2b,	// (0x0005f404) cale_week_day_heading_pane_ParamLimits

0x0e48,	// (0x0005f421) cale_week_scroll_pane_g1_ParamLimits

0x0e5b,	// (0x0005f434) cale_week_scroll_pane_g2_ParamLimits

0x0e73,	// (0x0005f44c) cale_week_scroll_pane_g3_ParamLimits

0x0e8b,	// (0x0005f464) cale_week_scroll_pane_g4_ParamLimits

0x0ea3,	// (0x0005f47c) cale_week_scroll_pane_g5_ParamLimits

0x0ec3,	// (0x0005f49c) cale_week_scroll_pane_g6_ParamLimits

0x0ee3,	// (0x0005f4bc) cale_week_scroll_pane_g7_ParamLimits

0x0f03,	// (0x0005f4dc) cale_week_scroll_pane_g8_ParamLimits

0x0f27,	// (0x0005f500) cale_week_scroll_pane_g9_ParamLimits

0x0f3f,	// (0x0005f518) cale_week_scroll_pane_g10_ParamLimits

0x0f57,	// (0x0005f530) cale_week_scroll_pane_g11_ParamLimits

0x0f6f,	// (0x0005f548) cale_week_scroll_pane_g12_ParamLimits

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g13_ParamLimits

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g14_ParamLimits

0x0f87,	// (0x0005f560) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0006d6dc) cale_week_scroll_pane_g_ParamLimits

0x0fc3,	// (0x0005f59c) cale_week_time_pane_ParamLimits

0x0fe7,	// (0x0005f5c0) grid_cale_week_pane_ParamLimits

0xe584,	// (0x0006cb5d) listscroll_cale_week_pane_t1

0xe596,	// (0x0006cb6f) scroll_pane_cp08_ParamLimits

0x1a4a,	// (0x00060023) cale_month_corner_pane_ParamLimits

0xe8f7,	// (0x0006ced0) cale_month_pane_t1

0x1e68,	// (0x00060441) cale_month_week_pane_ParamLimits

0x258f,	// (0x00060b68) popup_call_status_window_g1_ParamLimits

0x25a3,	// (0x00060b7c) popup_call_status_window_g2_ParamLimits

0x25b7,	// (0x00060b90) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0006d856) popup_call_status_window_g_ParamLimits

0xec82,	// (0x0006d25b) aid_call2_pane

0x2c36,	// (0x0006120f) msg_header_pane_g1

0x2e3c,	// (0x00061415) postcard_address2_pane_ParamLimits

0x2e3c,	// (0x00061415) postcard_address2_pane

0x2e4e,	// (0x00061427) postcard_message2_pane_ParamLimits

0x2e4e,	// (0x00061427) postcard_message2_pane

0x4580,	// (0x00062b59) message2_row_pane_ParamLimits

0x4580,	// (0x00062b59) message2_row_pane

0x459c,	// (0x00062b75) address2_row_pane_ParamLimits

0x459c,	// (0x00062b75) address2_row_pane

0xa613,	// (0x00068bec) postcard_message2_row_pane_g1

0xa61b,	// (0x00068bf4) postcard_message2_row_pane_t1

0xa613,	// (0x00068bec) address2_row_pane_g1

0xa61b,	// (0x00068bf4) address2_row_pane_t1

0x1317,	// (0x0005f8f0) aid_size_cell_vorec

0xe07b,	// (0x0006c654) main_rss_pane

0xa629,	// (0x00068c02) rss_list_single_pane_ParamLimits

0xa629,	// (0x00068c02) rss_list_single_pane

0xa637,	// (0x00068c10) rss_list_single_pane_t1

0xa637,	// (0x00068c10) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x0006dade) rss_list_single_pane_t

0xe07b,	// (0x0006c654) main_camera2_pane

0xe07b,	// (0x0006c654) main_video2_pane

0xa6e9,	// (0x00068cc2) cams_zoom_pane_cp2_ParamLimits

0xa6e9,	// (0x00068cc2) cams_zoom_pane_cp2

0xa6e9,	// (0x00068cc2) image2_vga_pane_ParamLimits

0xa6e9,	// (0x00068cc2) image2_vga_pane

0xa6f7,	// (0x00068cd0) main_camera2_pane_g1_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g1

0xa6f7,	// (0x00068cd0) main_camera2_pane_g2_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g2

0xa6f7,	// (0x00068cd0) main_camera2_pane_g3_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g3

0xa6f7,	// (0x00068cd0) main_camera2_pane_g4_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g4

0xa6f7,	// (0x00068cd0) main_camera2_pane_g5_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g5

0xa6f7,	// (0x00068cd0) main_camera2_pane_g6_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g6

0xa6f7,	// (0x00068cd0) main_camera2_pane_g7_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g7

0xa6f7,	// (0x00068cd0) main_camera2_pane_g8_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0006dafa) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0006dafa) main_camera2_pane_g

0x4746,	// (0x00062d1f) main_camera2_pane_t1_ParamLimits

0x4746,	// (0x00062d1f) main_camera2_pane_t1

0x4746,	// (0x00062d1f) main_camera2_pane_t2_ParamLimits

0x4746,	// (0x00062d1f) main_camera2_pane_t2

0x4746,	// (0x00062d1f) main_camera2_pane_t3_ParamLimits

0x4746,	// (0x00062d1f) main_camera2_pane_t3

0x4746,	// (0x00062d1f) main_camera2_pane_t4_ParamLimits

0x4746,	// (0x00062d1f) main_camera2_pane_t4

0x0006,

0xf534,	// (0x0006db0d) main_camera2_pane_t_ParamLimits

0xf534,	// (0x0006db0d) main_camera2_pane_t

0xa73b,	// (0x00068d14) cams_zoom_pane_cp4_ParamLimits

0xa73b,	// (0x00068d14) cams_zoom_pane_cp4

0x475a,	// (0x00062d33) image2_cif_pane_ParamLimits

0x475a,	// (0x00062d33) image2_cif_pane

0xa051,	// (0x0006862a) image2_subqcif_pane_ParamLimits

0xa051,	// (0x0006862a) image2_subqcif_pane

0x4768,	// (0x00062d41) main_video2_pane_g1_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g1

0x4768,	// (0x00062d41) main_video2_pane_g2_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g2

0x4768,	// (0x00062d41) main_video2_pane_g3_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g3

0x4768,	// (0x00062d41) main_video2_pane_g4_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g4

0x4768,	// (0x00062d41) main_video2_pane_g5_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g5

0x4768,	// (0x00062d41) main_video2_pane_g6_ParamLimits

0x4768,	// (0x00062d41) main_video2_pane_g6

0x0005,

0xf543,	// (0x0006db1c) main_video2_pane_g_ParamLimits

0xf543,	// (0x0006db1c) main_video2_pane_g

0x4776,	// (0x00062d4f) main_video2_pane_t1_ParamLimits

0x4776,	// (0x00062d4f) main_video2_pane_t1

0x4776,	// (0x00062d4f) main_video2_pane_t2_ParamLimits

0x4776,	// (0x00062d4f) main_video2_pane_t2

0x4776,	// (0x00062d4f) main_video2_pane_t3_ParamLimits

0x4776,	// (0x00062d4f) main_video2_pane_t3

0x0002,

0xf550,	// (0x0006db29) main_video2_pane_t_ParamLimits

0xf550,	// (0x0006db29) main_video2_pane_t

0x40cc,	// (0x000626a5) call_muted_g2

0x0001,

0xf4f7,	// (0x0006dad0) call_muted_g

0xe07b,	// (0x0006c654) main_mup2_pane

0x28cc,	// (0x00060ea5) main_mup2_pane_g1_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g1

0x28cc,	// (0x00060ea5) main_mup2_pane_g2_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g2

0xa833,	// (0x00068e0c) main_mup_pane_g13_cp1

0xa05f,	// (0x00068638) mup_volume_pane_cp1

0x28cc,	// (0x00060ea5) main_mup2_pane_g4_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g4

0x28cc,	// (0x00060ea5) main_mup2_pane_g5_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g5

0x28cc,	// (0x00060ea5) main_mup2_pane_g6_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g6

0x28cc,	// (0x00060ea5) main_mup2_pane_g7_ParamLimits

0x28cc,	// (0x00060ea5) main_mup2_pane_g7

0x0006,

0xf557,	// (0x0006db30) main_mup2_pane_g_ParamLimits

0xf557,	// (0x0006db30) main_mup2_pane_g

0x28da,	// (0x00060eb3) main_mup2_pane_t1_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t1

0x28da,	// (0x00060eb3) main_mup2_pane_t2_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t2

0x28da,	// (0x00060eb3) main_mup2_pane_t3_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t3

0x28da,	// (0x00060eb3) main_mup2_pane_t4_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t4

0x28da,	// (0x00060eb3) main_mup2_pane_t5_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t5

0x28da,	// (0x00060eb3) main_mup2_pane_t6_ParamLimits

0x28da,	// (0x00060eb3) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0006db3f) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0006db3f) main_mup2_pane_t

0x28ee,	// (0x00060ec7) mup2_visualizer_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup2_visualizer_pane

0x28ee,	// (0x00060ec7) mup_progress_pane_cp_ParamLimits

0x28ee,	// (0x00060ec7) mup_progress_pane_cp

0xa814,	// (0x00068ded) mup_volume_pane_cp_ParamLimits

0xa814,	// (0x00068ded) mup_volume_pane_cp

0xe351,	// (0x0006c92a) mup2_visualizer_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) mup2_visualizer_pane_g1

0xe35f,	// (0x0006c938) mup2_visualizer_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) mup2_visualizer_pane_g2

0xe35f,	// (0x0006c938) mup2_visualizer_pane_g3_ParamLimits

0xe35f,	// (0x0006c938) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0006d655) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0006d655) mup2_visualizer_pane_g

0xd923,	// (0x0006befc) aid_size_cell_fmradio

0x427e,	// (0x00062857) aid_height_parent_landcape

0xe755,	// (0x0006cd2e) wml_content_pane_cp

0xe75d,	// (0x0006cd36) wml_tabs_pane

0xe766,	// (0x0006cd3f) popup_wml_miniature_window

0xe76e,	// (0x0006cd47) scroll_pane_cp021

0xe782,	// (0x0006cd5b) wml_content_pane_comp8

0xe07b,	// (0x0006c654) bg_popup_sub_pane_cp05

0xa75f,	// (0x00068d38) popup_wml_miniature_window_g1

0xa767,	// (0x00068d40) wml_miniature_view_pane

0x478a,	// (0x00062d63) aid_size_wml_view

0x4792,	// (0x00062d6b) wml_miniature_view_pane_g1

0x479b,	// (0x00062d74) wml_miniature_view_pane_g2

0x47a4,	// (0x00062d7d) wml_miniature_view_pane_g3

0x47ac,	// (0x00062d85) wml_miniature_view_pane_g4

0x47b4,	// (0x00062d8d) wml_miniature_view_pane_g5

0x47bc,	// (0x00062d95) wml_miniature_view_pane_g6

0x47c4,	// (0x00062d9d) wml_miniature_view_pane_g7

0x47cc,	// (0x00062da5) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0006db4c) wml_miniature_view_pane_g

0xa76f,	// (0x00068d48) background_graphic_ParamLimits

0xa76f,	// (0x00068d48) background_graphic

0xa77b,	// (0x00068d54) wml_tabs_2_pane

0xa784,	// (0x00068d5d) wml_tabs_3_pane_ParamLimits

0xa784,	// (0x00068d5d) wml_tabs_3_pane

0xa796,	// (0x00068d6f) wml_tabs_4_pane_ParamLimits

0xa796,	// (0x00068d6f) wml_tabs_4_pane

0xa7ac,	// (0x00068d85) wml_tabs_5_pane_ParamLimits

0xa7ac,	// (0x00068d85) wml_tabs_5_pane

0xa7c6,	// (0x00068d9f) wml_tabs_pane_g2_ParamLimits

0xa7c6,	// (0x00068d9f) wml_tabs_pane_g2

0xa7db,	// (0x00068db4) wml_tabs_pane_g3_ParamLimits

0xa7db,	// (0x00068db4) wml_tabs_pane_g3

0xa7f0,	// (0x00068dc9) wml_tabs_2_active_pane_ParamLimits

0xa7f0,	// (0x00068dc9) wml_tabs_2_active_pane

0xa7f0,	// (0x00068dc9) wml_tabs_2_passive_pane_ParamLimits

0xa7f0,	// (0x00068dc9) wml_tabs_2_passive_pane

0x47d4,	// (0x00062dad) wml_tabs_3_active_pane_cp_ParamLimits

0x47d4,	// (0x00062dad) wml_tabs_3_active_pane_cp

0x47e9,	// (0x00062dc2) wml_tabs_3_passive_pane_ParamLimits

0x47e9,	// (0x00062dc2) wml_tabs_3_passive_pane

0x47fc,	// (0x00062dd5) wml_tabs_3_passive_pane_cp_ParamLimits

0x47fc,	// (0x00062dd5) wml_tabs_3_passive_pane_cp

0x4813,	// (0x00062dec) tabs_4_active_pane

0x481b,	// (0x00062df4) tabs_4_passive_pane

0x4825,	// (0x00062dfe) tabs_4_passive_pane_cp

0x482d,	// (0x00062e06) tabs_4_passive_pane_cp2

0x4042,	// (0x0006261b) aid_height_text

0x28ee,	// (0x00060ec7) mup_volume_cont_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup_volume_cont_pane

0xd923,	// (0x0006befc) aid_size_cell_pinb

0xd923,	// (0x0006befc) aid_size_list_pinb

0x28ee,	// (0x00060ec7) mup2_volume_cont_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup2_volume_cont_pane

0xa7fe,	// (0x00068dd7) mup2_volume_cont_pane_g1_ParamLimits

0xa7fe,	// (0x00068dd7) mup2_volume_cont_pane_g1

0x08fe,	// (0x0005eed7) aid_size_cell_touch_ParamLimits

0x08fe,	// (0x0005eed7) aid_size_cell_touch

0x0ac4,	// (0x0005f09d) touch_pane_ParamLimits

0x0ac4,	// (0x0005f09d) touch_pane

0xa05f,	// (0x00068638) main_rss2_pane

0xa83d,	// (0x00068e16) listscroll_rss2_pane

0xa846,	// (0x00068e1f) rss2_navigation_pane

0xa84e,	// (0x00068e27) list_rss2_pane

0xedb8,	// (0x0006d391) scroll_pane_cp22

0xa856,	// (0x00068e2f) rss2_navigation_pane_g1

0xa85f,	// (0x00068e38) rss2_navigation_pane_g2

0xa867,	// (0x00068e40) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0006db5d) rss2_navigation_pane_g

0xa86f,	// (0x00068e48) rss2_navigation_pane_t1

0x4837,	// (0x00062e10) rss2_list_single_pane_ParamLimits

0x4837,	// (0x00062e10) rss2_list_single_pane

0xa87d,	// (0x00068e56) rss2_list_single_pane_t2

0xa88b,	// (0x00068e64) rss2_list_single_pane_t3_ParamLimits

0xa88b,	// (0x00068e64) rss2_list_single_pane_t3

0xa8a8,	// (0x00068e81) rss2_list_single_pane_t4

0x246a,	// (0x00060a43) smil_status_pane_g1

0xa051,	// (0x0006862a) main_image2_pane_ParamLimits

0xa051,	// (0x0006862a) main_image2_pane

0xa6f7,	// (0x00068cd0) main_camera2_pane_g9_ParamLimits

0xa6f7,	// (0x00068cd0) main_camera2_pane_g9

0x4746,	// (0x00062d1f) main_camera2_pane_t5_ParamLimits

0x4746,	// (0x00062d1f) main_camera2_pane_t5

0xa705,	// (0x00068cde) main_camera2_pane_t6_ParamLimits

0xa705,	// (0x00068cde) main_camera2_pane_t6

0x484c,	// (0x00062e25) main_image2_pane_g1_ParamLimits

0x484c,	// (0x00062e25) main_image2_pane_g1

0x317f,	// (0x00061758) smil2_video_pane_ParamLimits

0x317f,	// (0x00061758) smil2_video_pane

0xa008,	// (0x000685e1) aid_zoom_text_primary_cp

0xa047,	// (0x00068620) popup_preview_fixed_window

0xe6be,	// (0x0006cc97) im_reading_pane_g1

0x4738,	// (0x00062d11) cams2_bc_adjust_pane_cp_ParamLimits

0x4738,	// (0x00062d11) cams2_bc_adjust_pane_cp

0xa72d,	// (0x00068d06) cams2_bc_adjust_pane_ParamLimits

0xa72d,	// (0x00068d06) cams2_bc_adjust_pane

0xa833,	// (0x00068e0c) cams2_bc_adjust_pane_g1

0xa05f,	// (0x00068638) cams2_slider_pane

0xa833,	// (0x00068e0c) cams2_slider_pane_g1

0xa833,	// (0x00068e0c) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x0006db64) cams2_slider_pane_g

0x0b8c,	// (0x0005f165) calc_display_pane_ParamLimits

0x0bb1,	// (0x0005f18a) calc_paper_pane_ParamLimits

0x0bd4,	// (0x0005f1ad) grid_calc_pane_ParamLimits

0xa152,	// (0x0006872b) popup_clock_digital_window_t1_ParamLimits

0x3006,	// (0x000615df) main_image_pane_t1

0x0b6e,	// (0x0005f147) aid_size_cell_calc_ParamLimits

0x0b6e,	// (0x0005f147) aid_size_cell_calc

0x42c4,	// (0x0006289d) popup_blid_sat_info2_window_ParamLimits

0x42c4,	// (0x0006289d) popup_blid_sat_info2_window

0xa8b6,	// (0x00068e8f) aid_size_cell_blid

0xa8be,	// (0x00068e97) bg_popup_window_pane_cp07

0xa8e1,	// (0x00068eba) grid_popup_blid_pane

0xa8eb,	// (0x00068ec4) heading_pane_cp05_ParamLimits

0xa8eb,	// (0x00068ec4) heading_pane_cp05

0xa9b5,	// (0x00068f8e) cell_popup_blid_pane_ParamLimits

0xa9b5,	// (0x00068f8e) cell_popup_blid_pane

0xa9d9,	// (0x00068fb2) cell_popup_blid_pane_g1

0xa9e1,	// (0x00068fba) cell_popup_blid_pane_t1

0x28ee,	// (0x00060ec7) mup2_indicator_pane_ParamLimits

0x28ee,	// (0x00060ec7) mup2_indicator_pane

0xd923,	// (0x0006befc) mup2_visualizer_osc_pane

0xa749,	// (0x00068d22) mup2_visualizer_spec_pane_ParamLimits

0xa749,	// (0x00068d22) mup2_visualizer_spec_pane

0xd923,	// (0x0006befc) mup2_spec_half_pane

0xd923,	// (0x0006befc) mup2_spec_half_pane_cp

0xa9ef,	// (0x00068fc8) mup2_spec_bar_pane_ParamLimits

0xa9ef,	// (0x00068fc8) mup2_spec_bar_pane

0xe38f,	// (0x0006c968) mup2_spec_bar_pane_g1

0xaa0e,	// (0x00068fe7) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0006db8a) mup2_spec_bar_pane_g

0xd923,	// (0x0006befc) mup2_osc_middle_pane

0xe38f,	// (0x0006c968) mup2_visualizer_osc_pane_g1

0xd94d,	// (0x0006bf26) popup_number_entry_window_t1_ParamLimits

0xd960,	// (0x0006bf39) popup_number_entry_window_t2_ParamLimits

0xd972,	// (0x0006bf4b) popup_number_entry_window_t3_ParamLimits

0x0b16,	// (0x0005f0ef) popup_number_entry_window_t5_ParamLimits

0x0b16,	// (0x0005f0ef) popup_number_entry_window_t5

0xf01d,	// (0x0006d5f6) popup_number_entry_window_t_ParamLimits

0xd984,	// (0x0006bf5d) text_title_cp2_ParamLimits

0xa191,	// (0x0006876a) aid_hotspot_pointer_text2_pane

0xa1ab,	// (0x00068784) main_viewer_pane_g9_ParamLimits

0xa1ab,	// (0x00068784) main_viewer_pane_g9

0xe8f7,	// (0x0006ced0) cale_month_pane_t1_ParamLimits

0xe93d,	// (0x0006cf16) bg_cale_pane_ParamLimits

0xe955,	// (0x0006cf2e) list_cale_pane_ParamLimits

0xe966,	// (0x0006cf3f) listscroll_cale_day_pane_t1

0xe978,	// (0x0006cf51) scroll_pane_cp09_ParamLimits

0x2955,	// (0x00060f2e) main_mup_eq_pane_t1_ParamLimits

0x2955,	// (0x00060f2e) main_mup_eq_pane_t1

0x296f,	// (0x00060f48) main_mup_eq_pane_t2_ParamLimits

0x296f,	// (0x00060f48) main_mup_eq_pane_t2

0x2989,	// (0x00060f62) main_mup_eq_pane_t3_ParamLimits

0x2989,	// (0x00060f62) main_mup_eq_pane_t3

0x29a5,	// (0x00060f7e) main_mup_eq_pane_t4_ParamLimits

0x29a5,	// (0x00060f7e) main_mup_eq_pane_t4

0x29c1,	// (0x00060f9a) main_mup_eq_pane_t5_ParamLimits

0x29c1,	// (0x00060f9a) main_mup_eq_pane_t5

0x29dd,	// (0x00060fb6) main_mup_eq_pane_t6_ParamLimits

0x29dd,	// (0x00060fb6) main_mup_eq_pane_t6

0x29f1,	// (0x00060fca) main_mup_eq_pane_t7_ParamLimits

0x29f1,	// (0x00060fca) main_mup_eq_pane_t7

0x2a05,	// (0x00060fde) main_mup_eq_pane_t8_ParamLimits

0x2a05,	// (0x00060fde) main_mup_eq_pane_t8

0x2a19,	// (0x00060ff2) main_mup_eq_pane_t9_ParamLimits

0x2a19,	// (0x00060ff2) main_mup_eq_pane_t9

0x2a33,	// (0x0006100c) main_mup_eq_pane_t10_ParamLimits

0x2a33,	// (0x0006100c) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0006d950) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0006d950) main_mup_eq_pane_t

0x2ae2,	// (0x000610bb) mup_equalizer_pane_cp5_ParamLimits

0x2af6,	// (0x000610cf) mup_equalizer_pane_cp6_ParamLimits

0x2b0a,	// (0x000610e3) mup_equalizer_pane_cp7_ParamLimits

0xa05f,	// (0x00068638) main_gallery_pane

0xa665,	// (0x00068c3e) smil2_volume_pane

0xa66d,	// (0x00068c46) smil_status_volume_pane_g1_ParamLimits

0xa680,	// (0x00068c59) smil_status_volume_pane_g2_ParamLimits

0xa693,	// (0x00068c6c) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x0006dae3) smil_status_volume_pane_g_ParamLimits

0xa8be,	// (0x00068e97) bg_popup_window_pane_cp07_ParamLimits

0xa8cc,	// (0x00068ea5) blid_firmament_pane

0xdbd9,	// (0x0006c1b2) aid_size_cell_gallery_ParamLimits

0xdbd9,	// (0x0006c1b2) aid_size_cell_gallery

0xdbd9,	// (0x0006c1b2) grid_gallery_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) grid_gallery_pane

0xa8be,	// (0x00068e97) cell_gallery_pane_ParamLimits

0xa8be,	// (0x00068e97) cell_gallery_pane

0xdbd9,	// (0x0006c1b2) bg_cell_gallery_focus_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_cell_gallery_focus_pane

0xe351,	// (0x0006c92a) cell_gallery_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_gallery_pane_g1

0xe351,	// (0x0006c92a) cell_gallery_pane_g2_ParamLimits

0xe351,	// (0x0006c92a) cell_gallery_pane_g2

0xe351,	// (0x0006c92a) cell_gallery_pane_g3_ParamLimits

0xe351,	// (0x0006c92a) cell_gallery_pane_g3

0xe35f,	// (0x0006c938) cell_gallery_pane_g4_ParamLimits

0xe35f,	// (0x0006c938) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0006db8f) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0006db8f) cell_gallery_pane_g

0xaa18,	// (0x00068ff1) bg_cell_gallery_focus_pane_g1

0xaa20,	// (0x00068ff9) bg_cell_gallery_focus_pane_g2

0xaa28,	// (0x00069001) bg_cell_gallery_focus_pane_g3

0xaa30,	// (0x00069009) bg_cell_gallery_focus_pane_g4

0xaa38,	// (0x00069011) bg_cell_gallery_focus_pane_g5

0xaa40,	// (0x00069019) bg_cell_gallery_focus_pane_g6

0xaa48,	// (0x00069021) bg_cell_gallery_focus_pane_g7

0xaa50,	// (0x00069029) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x0006db98) bg_cell_gallery_focus_pane_g

0xaa58,	// (0x00069031) aid_firma_cardinal

0xaa6c,	// (0x00069045) blid_firmament_pane_t1

0xaa83,	// (0x0006905c) blid_firmament_pane_t2

0xaa9a,	// (0x00069073) blid_firmament_pane_t3

0xaab1,	// (0x0006908a) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x0006dba9) blid_firmament_pane_t

0xaac8,	// (0x000690a1) blid_sat_info_pane

0xe38f,	// (0x0006c968) blid_sat_info_pane_g1

0xe38f,	// (0x0006c968) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0006d665) blid_sat_info_pane_g

0xaad8,	// (0x000690b1) blid_sat_info_pane_t1

0xaae6,	// (0x000690bf) smil2_volume_content_pane

0xaaef,	// (0x000690c8) smil2_volume_pane_g1

0xe464,	// (0x0006ca3d) smil2_volume_content_pane_g1

0xaaf7,	// (0x000690d0) smil2_volume_content_pane_g2

0xab00,	// (0x000690d9) smil2_volume_content_pane_g3

0xab09,	// (0x000690e2) smil2_volume_content_pane_g4

0xab12,	// (0x000690eb) smil2_volume_content_pane_g5

0xab1b,	// (0x000690f4) smil2_volume_content_pane_g6

0xab24,	// (0x000690fd) smil2_volume_content_pane_g7

0xab2d,	// (0x00069106) smil2_volume_content_pane_g8

0xab36,	// (0x0006910f) smil2_volume_content_pane_g9

0xab3f,	// (0x00069118) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x0006dbb2) smil2_volume_content_pane_g

0x109b,	// (0x0005f674) cale_week_day_heading_pane_t1_ParamLimits

0x10c5,	// (0x0005f69e) cale_week_day_heading_pane_t2_ParamLimits

0x10f4,	// (0x0005f6cd) cale_week_day_heading_pane_t3_ParamLimits

0x1123,	// (0x0005f6fc) cale_week_day_heading_pane_t4_ParamLimits

0x1152,	// (0x0005f72b) cale_week_day_heading_pane_t5_ParamLimits

0x1189,	// (0x0005f762) cale_week_day_heading_pane_t6_ParamLimits

0x11c0,	// (0x0005f799) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0006d6fd) cale_week_day_heading_pane_t_ParamLimits

0xe5b3,	// (0x0006cb8c) bg_cale_side_pane_ParamLimits

0x11ea,	// (0x0005f7c3) cale_week_time_pane_t1_ParamLimits

0x1204,	// (0x0005f7dd) cale_week_time_pane_t2_ParamLimits

0x121e,	// (0x0005f7f7) cale_week_time_pane_t3_ParamLimits

0x1238,	// (0x0005f811) cale_week_time_pane_t4_ParamLimits

0x1252,	// (0x0005f82b) cale_week_time_pane_t5_ParamLimits

0x126c,	// (0x0005f845) cale_week_time_pane_t6_ParamLimits

0x1286,	// (0x0005f85f) cale_week_time_pane_t7_ParamLimits

0x12a0,	// (0x0005f879) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0006d70c) cale_week_time_pane_t_ParamLimits

0x12ba,	// (0x0005f893) cell_cale_week_pane_g2_ParamLimits

0xe5b3,	// (0x0006cb8c) bg_cale_side_pane_cp01_ParamLimits

0x2271,	// (0x0006084a) cale_month_week_pane_t1_ParamLimits

0x228a,	// (0x00060863) cale_month_week_pane_t2_ParamLimits

0x22a3,	// (0x0006087c) cale_month_week_pane_t3_ParamLimits

0x22bc,	// (0x00060895) cale_month_week_pane_t4_ParamLimits

0x22d5,	// (0x000608ae) cale_month_week_pane_t5_ParamLimits

0x22ee,	// (0x000608c7) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0006d7da) cale_month_week_pane_t_ParamLimits

0xa0c2,	// (0x0006869b) cell_cale_month_pane_g1_ParamLimits

0xa05f,	// (0x00068638) main_cale_event_viewer_pane

0xd923,	// (0x0006befc) listscroll_cale_event_viewer_pane

0xab48,	// (0x00069121) list_cale_ev_pane

0xab50,	// (0x00069129) scroll_pane_cp023

0xab5c,	// (0x00069135) field_cale_ev_pane_ParamLimits

0xab5c,	// (0x00069135) field_cale_ev_pane

0xab7a,	// (0x00069153) field_cale_ev_content_pane_ParamLimits

0xab7a,	// (0x00069153) field_cale_ev_content_pane

0xab86,	// (0x0006915f) field_cale_ev_pane_g1_ParamLimits

0xab86,	// (0x0006915f) field_cale_ev_pane_g1

0xab92,	// (0x0006916b) field_cale_ev_pane_g2_ParamLimits

0xab92,	// (0x0006916b) field_cale_ev_pane_g2

0xabaa,	// (0x00069183) field_cale_ev_pane_g3_ParamLimits

0xabaa,	// (0x00069183) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0006dbc7) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0006dbc7) field_cale_ev_pane_g

0xabc2,	// (0x0006919b) field_cale_ev_pane_t1_ParamLimits

0xabc2,	// (0x0006919b) field_cale_ev_pane_t1

0xe4f7,	// (0x0006cad0) field_cale_ev_content_pane_t1_ParamLimits

0xe4f7,	// (0x0006cad0) field_cale_ev_content_pane_t1

0x2c0d,	// (0x000611e6) bg_button_pane_cp01

0x0dc8,	// (0x0005f3a1) listscroll_cale_week_pane_ParamLimits

0xa0af,	// (0x00068688) popup_toolbar_window_cp01

0xe584,	// (0x0006cb5d) listscroll_cale_week_pane_t1_ParamLimits

0x24bb,	// (0x00060a94) listscroll_cale_day_pane_ParamLimits

0xe934,	// (0x0006cf0d) popup_toolbar_window_cp02

0xe966,	// (0x0006cf3f) listscroll_cale_day_pane_t1_ParamLimits

0x0dc8,	// (0x0005f3a1) main_cale_month_pane_ParamLimits

0xa5e3,	// (0x00068bbc) popup_toolbar_window_cp03_ParamLimits

0xa5e3,	// (0x00068bbc) popup_toolbar_window_cp03

0x2fe4,	// (0x000615bd) main_image_pane_g2_ParamLimits

0x2fe4,	// (0x000615bd) main_image_pane_g2

0x2ff5,	// (0x000615ce) main_image_pane_g3_ParamLimits

0x2ff5,	// (0x000615ce) main_image_pane_g3

0x0002,

0xf409,	// (0x0006d9e2) main_image_pane_g_ParamLimits

0xf409,	// (0x0006d9e2) main_image_pane_g

0x3006,	// (0x000615df) main_image_pane_t1_ParamLimits

0x301d,	// (0x000615f6) main_image_pane_t2_ParamLimits

0x301d,	// (0x000615f6) main_image_pane_t2

0x302f,	// (0x00061608) main_image_pane_t3_ParamLimits

0x302f,	// (0x00061608) main_image_pane_t3

0x3057,	// (0x00061630) main_image_pane_t4_ParamLimits

0x3057,	// (0x00061630) main_image_pane_t4

0x0003,

0xf410,	// (0x0006d9e9) main_image_pane_t_ParamLimits

0xf410,	// (0x0006d9e9) main_image_pane_t

0x3077,	// (0x00061650) popup_image_details_window_cp01

0x3081,	// (0x0006165a) popup_toobar_trans_pane_cp01_ParamLimits

0x3081,	// (0x0006165a) popup_toobar_trans_pane_cp01

0x43a3,	// (0x0006297c) popup_image_details_window_ParamLimits

0x43a3,	// (0x0006297c) popup_image_details_window

0xa5b6,	// (0x00068b8f) popup_image_focus_window

0xa6e9,	// (0x00068cc2) camera2_autofocus_pane_ParamLimits

0xa6e9,	// (0x00068cc2) camera2_autofocus_pane

0xd923,	// (0x0006befc) bg_popup_sub_pane_cp06

0xabd9,	// (0x000691b2) popup_image_focus_window_g1

0xabe1,	// (0x000691ba) popup_image_focus_window_g2

0xabe9,	// (0x000691c2) popup_image_focus_window_g3

0xabf1,	// (0x000691ca) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0006dbce) popup_image_focus_window_g

0xabf9,	// (0x000691d2) popup_image_focus_window_t1

0xac07,	// (0x000691e0) popup_image_focus_window_t2

0xac17,	// (0x000691f0) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0006dbd7) popup_image_focus_window_t

0xe351,	// (0x0006c92a) camera2_autofocus_pane_g1

0xdbd9,	// (0x0006c1b2) bg_tb_trans_pane_cp01

0xac25,	// (0x000691fe) popup_image_details_window_g1

0xac38,	// (0x00069211) popup_image_details_window_g2

0x0002,

0xf605,	// (0x0006dbde) popup_image_details_window_g

0xac61,	// (0x0006923a) popup_image_details_window_t1

0xac73,	// (0x0006924c) popup_image_details_window_t2

0xac8c,	// (0x00069265) popup_image_details_window_t3

0xaca0,	// (0x00069279) popup_image_details_window_t4

0xacbb,	// (0x00069294) popup_image_details_window_t5

0x0004,

0xf60c,	// (0x0006dbe5) popup_image_details_window_t

0xe3d9,	// (0x0006c9b2) bg_calc_paper_pane_ParamLimits

0xa05f,	// (0x00068638) grid_highlight_pane_cp013

0xa071,	// (0x0006864a) list_calc_pane_ParamLimits

0xa083,	// (0x0006865c) scroll_pane_cp024

0xe3ed,	// (0x0006c9c6) bg_calc_display_pane_ParamLimits

0x0c16,	// (0x0005f1ef) calc_display_pane_t1_ParamLimits

0x0c2b,	// (0x0005f204) calc_display_pane_t2_ParamLimits

0xa08b,	// (0x00068664) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0006d67d) calc_display_pane_t_ParamLimits

0x0ceb,	// (0x0005f2c4) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0006d69a) cell_calc_pane_g

0x0cf4,	// (0x0005f2cd) cell_calc_pane_t1

0xe442,	// (0x0006ca1b) grid_highlight_pane_cp02_ParamLimits

0xe458,	// (0x0006ca31) toolbar_button_pane_cp01_ParamLimits

0xe458,	// (0x0006ca31) toolbar_button_pane_cp01

0x30c3,	// (0x0006169c) temp_image_control_pane_ParamLimits

0x30c3,	// (0x0006169c) temp_image_control_pane

0xa051,	// (0x0006862a) main_mp3_pane

0xacd5,	// (0x000692ae) temp_image_control_pane_g1_ParamLimits

0xacd5,	// (0x000692ae) temp_image_control_pane_g1

0xace3,	// (0x000692bc) temp_image_control_pane_g2_ParamLimits

0xace3,	// (0x000692bc) temp_image_control_pane_g2

0xacf5,	// (0x000692ce) temp_image_control_pane_g3_ParamLimits

0xacf5,	// (0x000692ce) temp_image_control_pane_g3

0x4862,	// (0x00062e3b) temp_image_control_pane_g4_ParamLimits

0x4862,	// (0x00062e3b) temp_image_control_pane_g4

0x0003,

0xf617,	// (0x0006dbf0) temp_image_control_pane_g_ParamLimits

0xf617,	// (0x0006dbf0) temp_image_control_pane_g

0xacd5,	// (0x000692ae) main_mp3_pane_g1

0x4875,	// (0x00062e4e) main_mp3_pane_g2

0x0007,

0xf620,	// (0x0006dbf9) main_mp3_pane_g

0xad2a,	// (0x00069303) main_mp3_pane_t1

0xe35f,	// (0x0006c938) main_camera_pane_g8_ParamLimits

0xe35f,	// (0x0006c938) main_camera_pane_g8

0x1484,	// (0x0005fa5d) main_video_pane_g7_ParamLimits

0x1484,	// (0x0005fa5d) main_video_pane_g7

0xa719,	// (0x00068cf2) main_camera2_pane_t7_ParamLimits

0xa719,	// (0x00068cf2) main_camera2_pane_t7

0xe715,	// (0x0006ccee) scroll_pane_cp025_ParamLimits

0xe715,	// (0x0006ccee) scroll_pane_cp025

0xe729,	// (0x0006cd02) scroll_pane_cp026_ParamLimits

0xe729,	// (0x0006cd02) scroll_pane_cp026

0xe738,	// (0x0006cd11) wml_content_pane_ParamLimits

0xa05f,	// (0x00068638) main_touch_calib_pane

0x4949,	// (0x00062f22) main_touch_calib_pane_g1

0x495b,	// (0x00062f34) main_touch_calib_pane_g2

0x496d,	// (0x00062f46) main_touch_calib_pane_g3

0x497f,	// (0x00062f58) main_touch_calib_pane_g4

0x0003,

0xf63e,	// (0x0006dc17) main_touch_calib_pane_g

0x4991,	// (0x00062f6a) main_touch_calib_pane_t1

0x49ab,	// (0x00062f84) main_touch_calib_pane_t2

0x0004,

0xf647,	// (0x0006dc20) main_touch_calib_pane_t

0xee94,	// (0x0006d46d) mup_progress_pane_cp02

0xeec9,	// (0x0006d4a2) navi_pane_g1

0xef84,	// (0x0006d55d) navi_pane_mp_t3

0xa051,	// (0x0006862a) main_mp3_pane_ParamLimits

0x4528,	// (0x00062b01) navi_pane_ParamLimits

0xacd5,	// (0x000692ae) main_mp3_pane_g1_ParamLimits

0x4875,	// (0x00062e4e) main_mp3_pane_g2_ParamLimits

0x4883,	// (0x00062e5c) main_mp3_pane_g3_ParamLimits

0x4883,	// (0x00062e5c) main_mp3_pane_g3

0x4891,	// (0x00062e6a) main_mp3_pane_g4_ParamLimits

0x4891,	// (0x00062e6a) main_mp3_pane_g4

0xe351,	// (0x0006c92a) main_mp3_pane_g5_ParamLimits

0xe351,	// (0x0006c92a) main_mp3_pane_g5

0xad05,	// (0x000692de) main_mp3_pane_g6_ParamLimits

0xad05,	// (0x000692de) main_mp3_pane_g6

0xad12,	// (0x000692eb) main_mp3_pane_g7_ParamLimits

0xad12,	// (0x000692eb) main_mp3_pane_g7

0xad1e,	// (0x000692f7) main_mp3_pane_g8_ParamLimits

0xad1e,	// (0x000692f7) main_mp3_pane_g8

0xf620,	// (0x0006dbf9) main_mp3_pane_g_ParamLimits

0x489d,	// (0x00062e76) main_mp3_pane_t2

0x48ab,	// (0x00062e84) main_mp3_pane_t3

0xad38,	// (0x00069311) main_mp3_pane_t4

0xad46,	// (0x0006931f) main_mp3_pane_t5

0x0005,

0xf631,	// (0x0006dc0a) main_mp3_pane_t

0xad54,	// (0x0006932d) mup_progress_pane_cp01

0xa000,	// (0x000685d9) aid_zoom_text_secondary2

0xab48,	// (0x00069121) list_cale_ev2_pane

0xab50,	// (0x00069129) scroll_pane_cp023_ParamLimits

0x4a01,	// (0x00062fda) field_cale_ev2_pane_ParamLimits

0x4a01,	// (0x00062fda) field_cale_ev2_pane

0xad5c,	// (0x00069335) field_cale_ev2_pane_g1_ParamLimits

0xad5c,	// (0x00069335) field_cale_ev2_pane_g1

0xad68,	// (0x00069341) field_cale_ev2_pane_g2_ParamLimits

0xad68,	// (0x00069341) field_cale_ev2_pane_g2

0xad80,	// (0x00069359) field_cale_ev2_pane_g3_ParamLimits

0xad80,	// (0x00069359) field_cale_ev2_pane_g3

0x0003,

0xf652,	// (0x0006dc2b) field_cale_ev2_pane_g_ParamLimits

0xf652,	// (0x0006dc2b) field_cale_ev2_pane_g

0x4a21,	// (0x00062ffa) field_cale_ev2_pane_t1_ParamLimits

0x4a21,	// (0x00062ffa) field_cale_ev2_pane_t1

0x4a38,	// (0x00063011) field_cale_ev2_pane_t2_ParamLimits

0x4a38,	// (0x00063011) field_cale_ev2_pane_t2

0x0001,

0xf65b,	// (0x0006dc34) field_cale_ev2_pane_t_ParamLimits

0xf65b,	// (0x0006dc34) field_cale_ev2_pane_t

0x2df2,	// (0x000613cb) main_postcard_pane_g5_ParamLimits

0x2df2,	// (0x000613cb) main_postcard_pane_g5

0x2e08,	// (0x000613e1) main_postcard_pane_g6_ParamLimits

0x2e08,	// (0x000613e1) main_postcard_pane_g6

0xdbd9,	// (0x0006c1b2) camera2_autofocus_pane_cp_ParamLimits

0xdbd9,	// (0x0006c1b2) camera2_autofocus_pane_cp

0xa051,	// (0x0006862a) main_mup3_pane

0x4a91,	// (0x0006306a) main_mup3_pane_g1_ParamLimits

0x4a91,	// (0x0006306a) main_mup3_pane_g1

0x4ae3,	// (0x000630bc) main_mup3_pane_g2_ParamLimits

0x4ae3,	// (0x000630bc) main_mup3_pane_g2

0x4b4b,	// (0x00063124) main_mup3_pane_g3_ParamLimits

0x4b4b,	// (0x00063124) main_mup3_pane_g3

0x4baf,	// (0x00063188) main_mup3_pane_g4_ParamLimits

0x4baf,	// (0x00063188) main_mup3_pane_g4

0x4c13,	// (0x000631ec) main_mup3_pane_g5_ParamLimits

0x4c13,	// (0x000631ec) main_mup3_pane_g5

0xada4,	// (0x0006937d) main_mup3_pane_g6_ParamLimits

0xada4,	// (0x0006937d) main_mup3_pane_g6

0xe35f,	// (0x0006c938) main_mup3_pane_g7_ParamLimits

0xe35f,	// (0x0006c938) main_mup3_pane_g7

0x0007,

0xf66b,	// (0x0006dc44) main_mup3_pane_g_ParamLimits

0xf66b,	// (0x0006dc44) main_mup3_pane_g

0x4ce0,	// (0x000632b9) main_mup3_pane_t1_ParamLimits

0x4ce0,	// (0x000632b9) main_mup3_pane_t1

0x4dce,	// (0x000633a7) main_mup3_pane_t2_ParamLimits

0x4dce,	// (0x000633a7) main_mup3_pane_t2

0x4ebc,	// (0x00063495) main_mup3_pane_t4_ParamLimits

0x4ebc,	// (0x00063495) main_mup3_pane_t4

0x4ece,	// (0x000634a7) main_mup3_pane_t5_ParamLimits

0x4ece,	// (0x000634a7) main_mup3_pane_t5

0x4fa0,	// (0x00063579) main_mup3_pane_t6_ParamLimits

0x4fa0,	// (0x00063579) main_mup3_pane_t6

0x0005,

0xf67c,	// (0x0006dc55) main_mup3_pane_t_ParamLimits

0xf67c,	// (0x0006dc55) main_mup3_pane_t

0x5048,	// (0x00063621) mup3_progress_pane_ParamLimits

0x5048,	// (0x00063621) mup3_progress_pane

0x50b0,	// (0x00063689) popup_mup3_control_window_ParamLimits

0x50b0,	// (0x00063689) popup_mup3_control_window

0xadbc,	// (0x00069395) popup_mup3_text_window

0x50c8,	// (0x000636a1) mup3_progress_pane_t1

0x50e7,	// (0x000636c0) mup3_progress_pane_t2

0xadc4,	// (0x0006939d) mup3_progress_pane_t3

0x0002,

0xf689,	// (0x0006dc62) mup3_progress_pane_t

0xade1,	// (0x000693ba) mup_progress_pane_cp03

0xadf1,	// (0x000693ca) bg_tb_trans_pane_cp04

0xadf1,	// (0x000693ca) mup3_volume_pane

0xadf9,	// (0x000693d2) popup_mup3_control_window_g1

0xadf9,	// (0x000693d2) mup3_volume_pane_g1

0xadf9,	// (0x000693d2) mup3_volume_pane_g2

0xadf9,	// (0x000693d2) mup3_volume_pane_g3

0x0002,

0xf690,	// (0x0006dc69) mup3_volume_pane_g

0xd923,	// (0x0006befc) bg_tb_trans_pane_cp03

0xae01,	// (0x000693da) popup_mup3_text_window_g1

0xae09,	// (0x000693e2) popup_mup3_text_window_t1

0xe435,	// (0x0006ca0e) list_calc_item_pane_g1_ParamLimits

0xa82a,	// (0x00068e03) mup_volume_pane_cp_g1

0x49c5,	// (0x00062f9e) main_touch_calib_pane_t3

0x49d9,	// (0x00062fb2) main_touch_calib_pane_t4

0x49ed,	// (0x00062fc6) main_touch_calib_pane_t5

0x9fe4,	// (0x000685bd) aid_cell_size_toolbar2

0x9fec,	// (0x000685c5) aid_popup3_width_pane

0x9ff8,	// (0x000685d1) aid_zoom_text_msg_primary

0x135f,	// (0x0005f938) vorec_t7

0xe3f9,	// (0x0006c9d2) bg_calc_paper_pane_g1_ParamLimits

0xe405,	// (0x0006c9de) bg_calc_paper_pane_g2_ParamLimits

0xe411,	// (0x0006c9ea) bg_calc_paper_pane_g3_ParamLimits

0xe41d,	// (0x0006c9f6) bg_calc_paper_pane_g4_ParamLimits

0xe429,	// (0x0006ca02) bg_calc_paper_pane_g5_ParamLimits

0x0c75,	// (0x0005f24e) bg_calc_paper_pane_g6_ParamLimits

0x0c84,	// (0x0005f25d) bg_calc_paper_pane_g7_ParamLimits

0x0c93,	// (0x0005f26c) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0006d684) bg_calc_paper_pane_g_ParamLimits

0x0ca6,	// (0x0005f27f) calc_bg_paper_pane_g9_ParamLimits

0xdbd9,	// (0x0006c1b2) image_qvga_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) image_qvga_pane

0xe2d6,	// (0x0006c8af) bg_popup_sub_pane_cp04_ParamLimits

0x2f42,	// (0x0006151b) popup_mup_playback_window_g1_ParamLimits

0x2f4e,	// (0x00061527) popup_mup_playback_window_t1_ParamLimits

0x2f63,	// (0x0006153c) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0006d9dd) popup_mup_playback_window_t_ParamLimits

0xe35f,	// (0x0006c938) main_mup2_pane_g3_ParamLimits

0xe35f,	// (0x0006c938) main_mup2_pane_g3

0x163f,	// (0x0005fc18) popup_toolbar_window_cp04

0x36d4,	// (0x00061cad) popup_call2_audio_second_window_g3_ParamLimits

0x36d4,	// (0x00061cad) popup_call2_audio_second_window_g3

0x3afc,	// (0x000620d5) popup_call2_audio_first_window_g4_ParamLimits

0x3afc,	// (0x000620d5) popup_call2_audio_first_window_g4

0xa30a,	// (0x000688e3) popup_call2_audio_in_window_g4_ParamLimits

0xa30a,	// (0x000688e3) popup_call2_audio_in_window_g4

0x2f78,	// (0x00061551) aid_area_sk_bg_cut_ParamLimits

0x2f78,	// (0x00061551) aid_area_sk_bg_cut

0x2f96,	// (0x0006156f) aid_area_sk_bg_cut_2_ParamLimits

0x2f96,	// (0x0006156f) aid_area_sk_bg_cut_2

0xd923,	// (0x0006befc) aid_placing_details_win

0xd923,	// (0x0006befc) aid_placing_details_win_2

0xe351,	// (0x0006c92a) camera2_autofocus_pane_g1_ParamLimits

0x0a5d,	// (0x0005f036) popup_fixed_preview_cale_window_ParamLimits

0x0a5d,	// (0x0005f036) popup_fixed_preview_cale_window

0xf002,	// (0x0006d5db) navi_slider_pane_g3

0xf00b,	// (0x0006d5e4) navi_slider_pane_g4

0xf014,	// (0x0006d5ed) navi_slider_pane_g5

0xf002,	// (0x0006d5db) navi_slider_pane_g6

0xa178,	// (0x00068751) navi_slider_pane_g7

0x2b27,	// (0x00061100) mup_scale_pane_g3

0x2b30,	// (0x00061109) mup_scale_pane_g4

0x2b39,	// (0x00061112) mup_scale_pane_g5

0x2b42,	// (0x0006111b) mup_scale_pane_g6

0x2b4b,	// (0x00061124) mup_scale_pane_g7

0xa833,	// (0x00068e0c) cams2_slider_pane_g3

0xa833,	// (0x00068e0c) cams2_slider_pane_g4

0xa833,	// (0x00068e0c) cams2_slider_pane_g5

0xa833,	// (0x00068e0c) cams2_slider_pane_g6

0xa833,	// (0x00068e0c) cams2_slider_pane_g7

0xe38f,	// (0x0006c968) camera2_autofocus_pane_cp_g1

0xa598,	// (0x00068b71) bg_popup_preview_window_pane_cp02_ParamLimits

0xa598,	// (0x00068b71) bg_popup_preview_window_pane_cp02

0xae17,	// (0x000693f0) list_fp_cale_pane_ParamLimits

0xae17,	// (0x000693f0) list_fp_cale_pane

0xae23,	// (0x000693fc) popup_fixed_preview_cale_window_t1_ParamLimits

0xae23,	// (0x000693fc) popup_fixed_preview_cale_window_t1

0x5106,	// (0x000636df) popup_fixed_preview_cale_window_t2_ParamLimits

0x5106,	// (0x000636df) popup_fixed_preview_cale_window_t2

0x511b,	// (0x000636f4) popup_fixed_preview_cale_window_t3_ParamLimits

0x511b,	// (0x000636f4) popup_fixed_preview_cale_window_t3

0x0002,

0xf697,	// (0x0006dc70) popup_fixed_preview_cale_window_t_ParamLimits

0xf697,	// (0x0006dc70) popup_fixed_preview_cale_window_t

0x5130,	// (0x00063709) list_single_fp_cale_pane_ParamLimits

0x5130,	// (0x00063709) list_single_fp_cale_pane

0xae41,	// (0x0006941a) list_single_fp_cale_pane_g1_ParamLimits

0xae41,	// (0x0006941a) list_single_fp_cale_pane_g1

0xae4d,	// (0x00069426) list_single_fp_cale_pane_g2_ParamLimits

0xae4d,	// (0x00069426) list_single_fp_cale_pane_g2

0x0002,

0xf69e,	// (0x0006dc77) list_single_fp_cale_pane_g_ParamLimits

0xf69e,	// (0x0006dc77) list_single_fp_cale_pane_g

0xae66,	// (0x0006943f) list_single_fp_cale_pane_t1_ParamLimits

0xae66,	// (0x0006943f) list_single_fp_cale_pane_t1

0xae78,	// (0x00069451) list_single_fp_cale_pane_t2_ParamLimits

0xae78,	// (0x00069451) list_single_fp_cale_pane_t2

0x0001,

0xf6a5,	// (0x0006dc7e) list_single_fp_cale_pane_t_ParamLimits

0xf6a5,	// (0x0006dc7e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa05f,	// (0x00068638) main_dialer_pane

0xd923,	// (0x0006befc) aid_cell_size_keypad

0xd923,	// (0x0006befc) dialer_ne_pane

0xd923,	// (0x0006befc) grid_dialer_command_1_pane

0xd923,	// (0x0006befc) grid_dialer_command_2_pane

0xd923,	// (0x0006befc) grid_dialer_keypad_pane

0x5145,	// (0x0006371e) bg_popup_call_pane_cp06_ParamLimits

0x5145,	// (0x0006371e) bg_popup_call_pane_cp06

0x5145,	// (0x0006371e) dialer_ne_clear_pane_ParamLimits

0x5145,	// (0x0006371e) dialer_ne_clear_pane

0xe38f,	// (0x0006c968) dialer_ne_pane_g1

0xe3ad,	// (0x0006c986) dialer_ne_pane_t1_ParamLimits

0xe3ad,	// (0x0006c986) dialer_ne_pane_t1

0x5153,	// (0x0006372c) dialer_ne_pane_t2_ParamLimits

0x5153,	// (0x0006372c) dialer_ne_pane_t2

0x517b,	// (0x00063754) dialer_ne_pane_t3_ParamLimits

0x517b,	// (0x00063754) dialer_ne_pane_t3

0x0002,

0xf6aa,	// (0x0006dc83) dialer_ne_pane_t_ParamLimits

0xf6aa,	// (0x0006dc83) dialer_ne_pane_t

0x517b,	// (0x00063754) dialer_ne_pane_t3_copy1_ParamLimits

0x517b,	// (0x00063754) dialer_ne_pane_t3_copy1

0xaeab,	// (0x00069484) cell_dialer_keypad_pane_ParamLimits

0xaeab,	// (0x00069484) cell_dialer_keypad_pane

0xdbd9,	// (0x0006c1b2) cell_dialer_command_1_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) cell_dialer_command_1_pane

0xaec2,	// (0x0006949b) cell_dialer_command_2_pane_ParamLimits

0xaec2,	// (0x0006949b) cell_dialer_command_2_pane

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp02_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp02

0xe351,	// (0x0006c92a) cell_dialer_keypad_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_dialer_keypad_pane_g1

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp03_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp03

0xe351,	// (0x0006c92a) cell_dialer_command_1_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_dialer_command_1_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp04

0xe38f,	// (0x0006c968) cell_dialer_command_2_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp06

0xe38f,	// (0x0006c968) dialer_ne_clear_pane_g1

0xeed5,	// (0x0006d4ae) navi_pane_g2

0xef03,	// (0x0006d4dc) navi_pane_g3

0x0002,

0xf30c,	// (0x0006d8e5) navi_pane_g

0xef92,	// (0x0006d56b) navi_pane_mv_g2

0xefb9,	// (0x0006d592) navi_pane_mv_g5

0x27e5,	// (0x00060dbe) navi_pane_mv_t1

0xe3ed,	// (0x0006c9c6) main_clock2_pane

0xdbd9,	// (0x0006c1b2) main_clock2_list_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) main_clock2_list_pane

0x5211,	// (0x000637ea) main_clock2_pane_t1_ParamLimits

0x5211,	// (0x000637ea) main_clock2_pane_t1

0x524c,	// (0x00063825) main_clock2_pane_t2_ParamLimits

0x524c,	// (0x00063825) main_clock2_pane_t2

0x0004,

0xf6b6,	// (0x0006dc8f) main_clock2_pane_t_ParamLimits

0xf6b6,	// (0x0006dc8f) main_clock2_pane_t

0x52ec,	// (0x000638c5) popup_clock_analogue_window_cp03_ParamLimits

0x52ec,	// (0x000638c5) popup_clock_analogue_window_cp03

0x5311,	// (0x000638ea) popup_clock_digital_window_cp02_ParamLimits

0x5311,	// (0x000638ea) popup_clock_digital_window_cp02

0x538a,	// (0x00063963) main_clock2_list_single_pane_ParamLimits

0x538a,	// (0x00063963) main_clock2_list_single_pane

0xe605,	// (0x0006cbde) list_highlight_pane_cp05

0xaf07,	// (0x000694e0) main_clock2_list_single_pane_t1

0x163f,	// (0x0005fc18) popup_toolbar_window_cp04_ParamLimits

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g2

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g3_ParamLimits

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g3

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g4_ParamLimits

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g4

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g5_ParamLimits

0xe35f,	// (0x0006c938) camera2_autofocus_pane_g5

0x0004,

0x0011,	// (0x0005e5ea) camera2_autofocus_pane_g_ParamLimits

0x0011,	// (0x0005e5ea) camera2_autofocus_pane_g

0x4a4d,	// (0x00063026) camera2_autofocus_pane_cp_g2

0x4a55,	// (0x0006302e) camera2_autofocus_pane_cp_g3

0x4a5d,	// (0x00063036) camera2_autofocus_pane_cp_g4

0x4a65,	// (0x0006303e) camera2_autofocus_pane_cp_g5

0x0004,

0xf660,	// (0x0006dc39) camera2_autofocus_pane_cp_g

0xd923,	// (0x0006befc) popup_dialer_spcha_window

0xd923,	// (0x0006befc) bg_popup_sub_pane_cp07

0xd923,	// (0x0006befc) list_spcha_pane

0xaf15,	// (0x000694ee) list_single_spcha_pane_ParamLimits

0xaf15,	// (0x000694ee) list_single_spcha_pane

0xd923,	// (0x0006befc) list_highlight_pane_cp06

0xeb0b,	// (0x0006d0e4) list_single_spcha_pane_t1

0x3f25,	// (0x000624fe) popup_call2_audio_out_window_g4_ParamLimits

0x3f25,	// (0x000624fe) popup_call2_audio_out_window_g4

0xa05f,	// (0x00068638) main_imed2_pane

0xa5be,	// (0x00068b97) popup_imed_adjust2_window

0x43bb,	// (0x00062994) popup_imed_trans_window_ParamLimits

0x43bb,	// (0x00062994) popup_imed_trans_window

0xa917,	// (0x00068ef0) popup_blid_sat_info2_window_t1

0xa925,	// (0x00068efe) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x0006db73) popup_blid_sat_info2_window_t

0x543b,	// (0x00063a14) aid_size_cell_colour_35

0x545b,	// (0x00063a34) aid_size_cell_colour_112

0x547b,	// (0x00063a54) aid_size_cell_effect

0x28ee,	// (0x00060ec7) bg_tb_trans_pane_cp02

0x549b,	// (0x00063a74) heading_imed_pane

0x54a7,	// (0x00063a80) listscroll_imed_pane

0xaf27,	// (0x00069500) heading_imed_pane_g1

0xaf2f,	// (0x00069508) heading_imed_pane_t1

0xaf3d,	// (0x00069516) grid_imed_colour_35_pane_ParamLimits

0xaf3d,	// (0x00069516) grid_imed_colour_35_pane

0x54b3,	// (0x00063a8c) grid_imed_effect_pane

0xaf54,	// (0x0006952d) list_imed_aspect_pane

0x54c9,	// (0x00063aa2) scroll_pane_cp027_ParamLimits

0x54c9,	// (0x00063aa2) scroll_pane_cp027

0x54da,	// (0x00063ab3) cell_imed_effect_pane_ParamLimits

0x54da,	// (0x00063ab3) cell_imed_effect_pane

0xaf5c,	// (0x00069535) cell_imed_colour_pane_ParamLimits

0xaf5c,	// (0x00069535) cell_imed_colour_pane

0xaf9e,	// (0x00069577) cell_imed_colour_pane_g1_ParamLimits

0xaf9e,	// (0x00069577) cell_imed_colour_pane_g1

0xafaf,	// (0x00069588) hgihlgiht_grid_pane_cp016_ParamLimits

0xafaf,	// (0x00069588) hgihlgiht_grid_pane_cp016

0x5501,	// (0x00063ada) cell_imed_effect_pane_g1

0x5509,	// (0x00063ae2) grid_highlight_pane_cp017

0xafc0,	// (0x00069599) list_imed_single_pane_ParamLimits

0xafc0,	// (0x00069599) list_imed_single_pane

0xd923,	// (0x0006befc) list_highlight_pane_cp07

0xafd5,	// (0x000695ae) list_imed_aspect_pane_comp1_t1

0x28ee,	// (0x00060ec7) bg_tb_trans_pane_cp05

0xaff7,	// (0x000695d0) popup_imed_adjust2_window_g1

0xb01e,	// (0x000695f7) popup_imed_adjust2_window_t1

0xb036,	// (0x0006960f) slider_imed_adjust_pane

0xb04a,	// (0x00069623) slider_imed_adjust_pane_g1

0xb05a,	// (0x00069633) slider_imed_adjust_pane_g2

0xb06a,	// (0x00069643) slider_imed_adjust_pane_g3

0xb07b,	// (0x00069654) slider_imed_adjust_pane_g4

0x0003,

0xf6d3,	// (0x0006dcac) slider_imed_adjust_pane_g

0x5512,	// (0x00063aeb) aid_size_cell_clipart2

0x551e,	// (0x00063af7) grid_imed_clipart_pane

0x2b5c,	// (0x00061135) scroll_pane_cp031

0x5528,	// (0x00063b01) cell_imed_clipart_pane_ParamLimits

0x5528,	// (0x00063b01) cell_imed_clipart_pane

0x554a,	// (0x00063b23) cell_imed_clipart_pane_g1

0xd923,	// (0x0006befc) grid_highlight_pane_cp014

0x51ed,	// (0x000637c6) main_clock2_pane_g1_ParamLimits

0x51ed,	// (0x000637c6) main_clock2_pane_g1

0x5331,	// (0x0006390a) aid_call2_pane_cp10

0x5343,	// (0x0006391c) aid_call_pane_cp10

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g1

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g2

0x5355,	// (0x0006392e) popup_clock_analogue_window_cp10_g3

0x5355,	// (0x0006392e) popup_clock_analogue_window_cp10_g4

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6c1,	// (0x0006dc9a) popup_clock_analogue_window_cp10_g

0x536b,	// (0x00063944) popup_clock_analogue_window_cp10_t1

0x539c,	// (0x00063975) clock_digital_number_pane_cp10_ParamLimits

0x539c,	// (0x00063975) clock_digital_number_pane_cp10

0x53b4,	// (0x0006398d) clock_digital_number_pane_cp11_ParamLimits

0x53b4,	// (0x0006398d) clock_digital_number_pane_cp11

0x53cc,	// (0x000639a5) clock_digital_number_pane_cp12_ParamLimits

0x53cc,	// (0x000639a5) clock_digital_number_pane_cp12

0x53e6,	// (0x000639bf) clock_digital_number_pane_cp13_ParamLimits

0x53e6,	// (0x000639bf) clock_digital_number_pane_cp13

0x5400,	// (0x000639d9) clock_digital_separator_pane_cp10_ParamLimits

0x5400,	// (0x000639d9) clock_digital_separator_pane_cp10

0x541a,	// (0x000639f3) popup_clock_digital_window_cp02_t1_ParamLimits

0x541a,	// (0x000639f3) popup_clock_digital_window_cp02_t1

0xe2ce,	// (0x0006c8a7) clock_digital_number_pane_cp10_g1

0xe2ce,	// (0x0006c8a7) clock_digital_number_pane_cp10_g2

0x0001,

0x00f3,	// (0x0005e6cc) clock_digital_number_pane_cp10_g

0xe2ce,	// (0x0006c8a7) clock_digital_separator_pane_cp10_g1

0xe2ce,	// (0x0006c8a7) clock_digital_separator_pane_g2_cp10

0xefc1,	// (0x0006d59a) navi_pane_vded_g4

0xefca,	// (0x0006d5a3) navi_pane_vded_g5

0xefd3,	// (0x0006d5ac) navi_pane_vded_t1

0xa05f,	// (0x00068638) main_vded_pane

0x5553,	// (0x00063b2c) main_vded_pane_g1

0x555d,	// (0x00063b36) main_vded_pane_g2

0x5567,	// (0x00063b40) main_vded_pane_g3

0x0002,

0xf6dc,	// (0x0006dcb5) main_vded_pane_g

0x5571,	// (0x00063b4a) main_vded_pane_t1

0x557f,	// (0x00063b58) main_vded_pane_t2

0x0001,

0xf6e3,	// (0x0006dcbc) main_vded_pane_t

0x558d,	// (0x00063b66) vded_slider_pane

0x5595,	// (0x00063b6e) vded_video_pane

0xb08c,	// (0x00069665) vded_video_pane_g1

0x559d,	// (0x00063b76) vded_video_pane_g2

0xe38f,	// (0x0006c968) vded_video_pane_g3

0x0002,

0xf6e8,	// (0x0006dcc1) vded_video_pane_g

0xb096,	// (0x0006966f) vded_slider_pane_g1

0xa82a,	// (0x00068e03) vded_slider_pane_g2

0xb09f,	// (0x00069678) vded_slider_pane_g3

0xb0a8,	// (0x00069681) vded_slider_pane_g4

0xb0b1,	// (0x0006968a) vded_slider_pane_g5

0x0004,

0xf6ef,	// (0x0006dcc8) vded_slider_pane_g

0xadb0,	// (0x00069389) mup3_rocker_pane_ParamLimits

0xadb0,	// (0x00069389) mup3_rocker_pane

0xadf9,	// (0x000693d2) mup3_control_keys_pane_g1

0xb0ba,	// (0x00069693) mup3_control_keys_pane_g2

0xadf9,	// (0x000693d2) mup3_control_keys_pane_g3

0xb0c2,	// (0x0006969b) mup3_control_keys_pane_g4

0x0003,

0xf6fa,	// (0x0006dcd3) mup3_control_keys_pane_g

0x0a94,	// (0x0005f06d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a94,	// (0x0005f06d) popup_toolbar2_fixed_window_cp01

0xadb0,	// (0x00069389) popup_toolbar2_fixed_window_cp02_ParamLimits

0xadb0,	// (0x00069389) popup_toolbar2_fixed_window_cp02

0x3846,	// (0x00061e1f) popup_call2_audio_second_window_t4_ParamLimits

0x3846,	// (0x00061e1f) popup_call2_audio_second_window_t4

0x3d92,	// (0x0006236b) popup_call2_audio_first_window_t6_ParamLimits

0x3d92,	// (0x0006236b) popup_call2_audio_first_window_t6

0xa1b7,	// (0x00068790) popup_call2_audio_out_window_t6_ParamLimits

0xa1b7,	// (0x00068790) popup_call2_audio_out_window_t6

0xa05f,	// (0x00068638) main_vitu_pane

0xdbd9,	// (0x0006c1b2) aid_size_cell_itu_ParamLimits

0xdbd9,	// (0x0006c1b2) aid_size_cell_itu

0xdbd9,	// (0x0006c1b2) bg_popup_window_pane_cp08_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_popup_window_pane_cp08

0xdbd9,	// (0x0006c1b2) field_vitu_entry_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) field_vitu_entry_pane

0xdbd9,	// (0x0006c1b2) grid_vitu_function_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) grid_vitu_function_pane

0xdbd9,	// (0x0006c1b2) grid_vitu_itu_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) grid_vitu_itu_pane

0xdbd9,	// (0x0006c1b2) cell_vitu_itu_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) cell_vitu_itu_pane

0xdbd9,	// (0x0006c1b2) cell_vitu_function_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) cell_vitu_function_pane

0xdbd9,	// (0x0006c1b2) bg_popup_sub_pane_cp08_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_popup_sub_pane_cp08

0xe399,	// (0x0006c972) field_vitu_entry_pane_t1_ParamLimits

0xe399,	// (0x0006c972) field_vitu_entry_pane_t1

0xb0ca,	// (0x000696a3) field_vitu_entry_pane_t2_ParamLimits

0xb0ca,	// (0x000696a3) field_vitu_entry_pane_t2

0x0001,

0xf703,	// (0x0006dcdc) field_vitu_entry_pane_t_ParamLimits

0xf703,	// (0x0006dcdc) field_vitu_entry_pane_t

0xa8be,	// (0x00068e97) bg_button_pane_cp05_ParamLimits

0xa8be,	// (0x00068e97) bg_button_pane_cp05

0xb0e7,	// (0x000696c0) cell_vitu_itu_pane_g1

0x28da,	// (0x00060eb3) cell_vitu_itu_pane_t1_ParamLimits

0x28da,	// (0x00060eb3) cell_vitu_itu_pane_t1

0x28da,	// (0x00060eb3) cell_vitu_itu_pane_t2_ParamLimits

0x28da,	// (0x00060eb3) cell_vitu_itu_pane_t2

0x0002,

0xf708,	// (0x0006dce1) cell_vitu_itu_pane_t_ParamLimits

0xf708,	// (0x0006dce1) cell_vitu_itu_pane_t

0xd923,	// (0x0006befc) bg_button_pane_cp07

0xe38f,	// (0x0006c968) cell_vitu_function_pane_g1

0xa069,	// (0x00068642) main_calc_pane_g1

0x0922,	// (0x0005eefb) aid_visual_content_pane

0xa05f,	// (0x00068638) main_vradio_pane

0xe351,	// (0x0006c92a) main_vradio_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) main_vradio_pane_g1

0xe35f,	// (0x0006c938) main_vradio_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) main_vradio_pane_g2

0x0001,

0x05b2,	// (0x0005eb8b) main_vradio_pane_g_ParamLimits

0x05b2,	// (0x0005eb8b) main_vradio_pane_g

0xe399,	// (0x0006c972) main_vradio_pane_t1_ParamLimits

0xe399,	// (0x0006c972) main_vradio_pane_t1

0xe399,	// (0x0006c972) main_vradio_pane_t2_ParamLimits

0xe399,	// (0x0006c972) main_vradio_pane_t2

0xe3ad,	// (0x0006c986) main_vradio_pane_t3_ParamLimits

0xe3ad,	// (0x0006c986) main_vradio_pane_t3

0x0002,

0xf70f,	// (0x0006dce8) main_vradio_pane_t_ParamLimits

0xf70f,	// (0x0006dce8) main_vradio_pane_t

0xdbd9,	// (0x0006c1b2) vradio_rocker_control_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) vradio_rocker_control_pane

0xdbd9,	// (0x0006c1b2) vradio_station_info_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) vradio_station_info_pane

0xdbd9,	// (0x0006c1b2) vradio_frequency_info_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) vradio_frequency_info_pane

0xe38f,	// (0x0006c968) vradio_station_info_pane_g1

0x28da,	// (0x00060eb3) vradio_station_info_pane_t1_ParamLimits

0x28da,	// (0x00060eb3) vradio_station_info_pane_t1

0xe3ad,	// (0x0006c986) vradio_station_info_pane_t2_ParamLimits

0xe3ad,	// (0x0006c986) vradio_station_info_pane_t2

0x0001,

0xf716,	// (0x0006dcef) vradio_station_info_pane_t_ParamLimits

0xf716,	// (0x0006dcef) vradio_station_info_pane_t

0xd923,	// (0x0006befc) vradio_tuning_pane

0x55a6,	// (0x00063b7f) vradio_rocker_control_pane_g1

0xb103,	// (0x000696dc) vradio_rocker_control_pane_g2

0x55b0,	// (0x00063b89) vradio_rocker_control_pane_g3

0x55ba,	// (0x00063b93) vradio_rocker_control_pane_g4

0x55c4,	// (0x00063b9d) vradio_rocker_control_pane_g5

0x0004,

0xf71b,	// (0x0006dcf4) vradio_rocker_control_pane_g

0xe38f,	// (0x0006c968) vradio_frequency_info_pane_g1

0xe399,	// (0x0006c972) vradio_frequency_info_pane_t1_ParamLimits

0xe399,	// (0x0006c972) vradio_frequency_info_pane_t1

0x55ce,	// (0x00063ba7) vradio_tuning_pane_g1

0x55db,	// (0x00063bb4) vradio_tuning_pane_t1

0xa010,	// (0x000685e9) area_side_right_pane_ParamLimits

0xa010,	// (0x000685e9) area_side_right_pane

0xa55f,	// (0x00068b38) status_small_pane_g1

0xa567,	// (0x00068b40) status_small_pane_g2

0xa570,	// (0x00068b49) status_small_pane_g3

0xa579,	// (0x00068b52) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0006dad5) status_small_pane_g

0xa582,	// (0x00068b5b) status_small_pane_t1

0xa05f,	// (0x00068638) main_video3_pane

0xd923,	// (0x0006befc) cams_zoom_vslider_pane

0xb10b,	// (0x000696e4) image3_wide_pane_ParamLimits

0xb10b,	// (0x000696e4) image3_wide_pane

0xd923,	// (0x0006befc) image3_wide_small_pane

0xb125,	// (0x000696fe) main_video3_pane_g1_ParamLimits

0xb125,	// (0x000696fe) main_video3_pane_g1

0xb125,	// (0x000696fe) main_video3_pane_g2_ParamLimits

0xb125,	// (0x000696fe) main_video3_pane_g2

0x0001,

0xf726,	// (0x0006dcff) main_video3_pane_g_ParamLimits

0xf726,	// (0x0006dcff) main_video3_pane_g

0xb143,	// (0x0006971c) main_video3_pane_t1_ParamLimits

0xb143,	// (0x0006971c) main_video3_pane_t1

0xb143,	// (0x0006971c) main_video3_pane_t2_ParamLimits

0xb143,	// (0x0006971c) main_video3_pane_t2

0xb143,	// (0x0006971c) main_video3_pane_t3_ParamLimits

0xb143,	// (0x0006971c) main_video3_pane_t3

0x0002,

0xf72b,	// (0x0006dd04) main_video3_pane_t_ParamLimits

0xf72b,	// (0x0006dd04) main_video3_pane_t

0xe38f,	// (0x0006c968) cams_zoom_vslider_pane_g1

0xe38f,	// (0x0006c968) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0006d665) cams_zoom_vslider_pane_g

0xd923,	// (0x0006befc) small_slider_vertical_pane

0xe38f,	// (0x0006c968) small_slider_vertical_pane_g1

0xe38f,	// (0x0006c968) small_slider_vertical_pane_g2

0xb16a,	// (0x00069743) small_slider_vertical_pane_g3

0x0002,

0xf732,	// (0x0006dd0b) small_slider_vertical_pane_g

0xa05f,	// (0x00068638) main_hwr_training_pane

0xb173,	// (0x0006974c) hwr_training_instruct_pane_ParamLimits

0xb173,	// (0x0006974c) hwr_training_instruct_pane

0x55ea,	// (0x00063bc3) hwr_training_navi_pane_ParamLimits

0x55ea,	// (0x00063bc3) hwr_training_navi_pane

0x5609,	// (0x00063be2) hwr_training_write_pane_ParamLimits

0x5609,	// (0x00063be2) hwr_training_write_pane

0xd923,	// (0x0006befc) bg_frame_shadow_pane

0xb1aa,	// (0x00069783) hwr_training_write_pane_g1

0xb1b2,	// (0x0006978b) hwr_training_write_pane_g2

0xb1ba,	// (0x00069793) hwr_training_write_pane_g3

0xb1c2,	// (0x0006979b) hwr_training_write_pane_g4

0xb1ca,	// (0x000697a3) hwr_training_write_pane_g5

0xb1d2,	// (0x000697ab) hwr_training_write_pane_g6

0xb1da,	// (0x000697b3) hwr_training_write_pane_g7

0x0006,

0xf739,	// (0x0006dd12) hwr_training_write_pane_g

0xb1e2,	// (0x000697bb) hwr_training_navi_pane_g1_ParamLimits

0xb1e2,	// (0x000697bb) hwr_training_navi_pane_g1

0xb1f4,	// (0x000697cd) hwr_training_navi_pane_g2_ParamLimits

0xb1f4,	// (0x000697cd) hwr_training_navi_pane_g2

0xb206,	// (0x000697df) hwr_training_navi_pane_g3_ParamLimits

0xb206,	// (0x000697df) hwr_training_navi_pane_g3

0xb216,	// (0x000697ef) hwr_training_navi_pane_g4_ParamLimits

0xb216,	// (0x000697ef) hwr_training_navi_pane_g4

0x0004,

0xf748,	// (0x0006dd21) hwr_training_navi_pane_g_ParamLimits

0xf748,	// (0x0006dd21) hwr_training_navi_pane_g

0xb223,	// (0x000697fc) hwr_training_navi_pane_t1

0x5651,	// (0x00063c2a) list_single_hwr_training_instruct_pane_ParamLimits

0x5651,	// (0x00063c2a) list_single_hwr_training_instruct_pane

0xb231,	// (0x0006980a) list_single_hwr_training_instruct_pane_t1

0xaa18,	// (0x00068ff1) bg_frame_shadow_pane_g1

0xb240,	// (0x00069819) bg_frame_shadow_pane_g2

0xb248,	// (0x00069821) bg_frame_shadow_pane_g3

0xb250,	// (0x00069829) bg_frame_shadow_pane_g4

0xb258,	// (0x00069831) bg_frame_shadow_pane_g5

0xb260,	// (0x00069839) bg_frame_shadow_pane_g6

0xb268,	// (0x00069841) bg_frame_shadow_pane_g7

0xe4a5,	// (0x0006ca7e) bg_frame_shadow_pane_g8

0x0007,

0xf753,	// (0x0006dd2c) bg_frame_shadow_pane_g

0xa05f,	// (0x00068638) main_video_tele_dialer_pane

0x5666,	// (0x00063c3f) aid_size_cell_video_keypad_ParamLimits

0x5666,	// (0x00063c3f) aid_size_cell_video_keypad

0x5680,	// (0x00063c59) grid_video_dialer_keypad_pane_ParamLimits

0x5680,	// (0x00063c59) grid_video_dialer_keypad_pane

0x56cc,	// (0x00063ca5) video_down_pane_cp_ParamLimits

0x56cc,	// (0x00063ca5) video_down_pane_cp

0x56fe,	// (0x00063cd7) cell_video_dialer_keypad_pane_ParamLimits

0x56fe,	// (0x00063cd7) cell_video_dialer_keypad_pane

0xb270,	// (0x00069849) bg_button_pane_cp08_ParamLimits

0xb270,	// (0x00069849) bg_button_pane_cp08

0x5720,	// (0x00063cf9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5720,	// (0x00063cf9) cell_video_dialer_keypad_pane_g1

0xadb0,	// (0x00069389) mup3_rocker2_pane_ParamLimits

0xadb0,	// (0x00069389) mup3_rocker2_pane

0xe38f,	// (0x0006c968) mup3_rocker2_pane_g1

0x429c,	// (0x00062875) main_dialer2_pane

0xa05f,	// (0x00068638) main_mp4_pane

0xb29a,	// (0x00069873) main_mp4_pane_g1_ParamLimits

0xb29a,	// (0x00069873) main_mp4_pane_g1

0xb29a,	// (0x00069873) main_mp4_pane_g2_ParamLimits

0xb29a,	// (0x00069873) main_mp4_pane_g2

0x5757,	// (0x00063d30) main_mp4_pane_g3_ParamLimits

0x5757,	// (0x00063d30) main_mp4_pane_g3

0xb2b8,	// (0x00069891) main_mp4_pane_g4_ParamLimits

0xb2b8,	// (0x00069891) main_mp4_pane_g4

0xb2e0,	// (0x000698b9) main_mp4_pane_g5_ParamLimits

0xb2e0,	// (0x000698b9) main_mp4_pane_g5

0x0007,

0xf773,	// (0x0006dd4c) main_mp4_pane_g_ParamLimits

0xf773,	// (0x0006dd4c) main_mp4_pane_g

0xb348,	// (0x00069921) main_mp4_pane_t1_ParamLimits

0xb348,	// (0x00069921) main_mp4_pane_t1

0xb3aa,	// (0x00069983) main_mp4_pane_t2_ParamLimits

0xb3aa,	// (0x00069983) main_mp4_pane_t2

0xb40e,	// (0x000699e7) main_mp4_pane_t3_ParamLimits

0xb40e,	// (0x000699e7) main_mp4_pane_t3

0xb46c,	// (0x00069a45) main_mp4_pane_t4_ParamLimits

0xb46c,	// (0x00069a45) main_mp4_pane_t4

0x0003,

0xf784,	// (0x0006dd5d) main_mp4_pane_t_ParamLimits

0xf784,	// (0x0006dd5d) main_mp4_pane_t

0xb4ca,	// (0x00069aa3) mp4_progress_pane_ParamLimits

0xb4ca,	// (0x00069aa3) mp4_progress_pane

0xb4fe,	// (0x00069ad7) mp4_rocker_pane_ParamLimits

0xb4fe,	// (0x00069ad7) mp4_rocker_pane

0xb51a,	// (0x00069af3) mp4_progress_pane_t1

0xb539,	// (0x00069b12) mp4_progress_pane_t2

0x0001,

0xf78d,	// (0x0006dd66) mp4_progress_pane_t

0xb558,	// (0x00069b31) mup_progress_pane_cp04

0xa833,	// (0x00068e0c) mp4_rocker_pane_g1

0xa051,	// (0x0006862a) aid_cell_size_keypad2_ParamLimits

0xa051,	// (0x0006862a) aid_cell_size_keypad2

0xa051,	// (0x0006862a) dialer2_ne_pane_ParamLimits

0xa051,	// (0x0006862a) dialer2_ne_pane

0xa051,	// (0x0006862a) grid_dialer2_keypad_pane_ParamLimits

0xa051,	// (0x0006862a) grid_dialer2_keypad_pane

0xa8be,	// (0x00068e97) bg_popup_call_pane_cp07_ParamLimits

0xa8be,	// (0x00068e97) bg_popup_call_pane_cp07

0x5787,	// (0x00063d60) dialer2_ne_pane_t1_ParamLimits

0x5787,	// (0x00063d60) dialer2_ne_pane_t1

0x57c5,	// (0x00063d9e) cell_dialer2_keypad_pane_ParamLimits

0x57c5,	// (0x00063d9e) cell_dialer2_keypad_pane

0xa8be,	// (0x00068e97) bg_button_pane_pane_cp04_ParamLimits

0xa8be,	// (0x00068e97) bg_button_pane_pane_cp04

0xe351,	// (0x0006c92a) cell_dialer2_keypad_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) cell_dialer2_keypad_pane_g1

0x1513,	// (0x0005faec) aid_placing_vt_set_content_ParamLimits

0x1513,	// (0x0005faec) aid_placing_vt_set_content

0x153b,	// (0x0005fb14) aid_placing_vt_set_title_ParamLimits

0x153b,	// (0x0005fb14) aid_placing_vt_set_title

0xa05f,	// (0x00068638) main_image3_pane

0x583a,	// (0x00063e13) area_side_right_pane_cp01_ParamLimits

0x583a,	// (0x00063e13) area_side_right_pane_cp01

0x5851,	// (0x00063e2a) main_image3_pane_g1_ParamLimits

0x5851,	// (0x00063e2a) main_image3_pane_g1

0x585f,	// (0x00063e38) main_image3_pane_g2_ParamLimits

0x585f,	// (0x00063e38) main_image3_pane_g2

0x5887,	// (0x00063e60) main_image3_pane_g3_ParamLimits

0x5887,	// (0x00063e60) main_image3_pane_g3

0x58b1,	// (0x00063e8a) main_image3_pane_g4_ParamLimits

0x58b1,	// (0x00063e8a) main_image3_pane_g4

0x0003,

0xf79c,	// (0x0006dd75) main_image3_pane_g_ParamLimits

0xf79c,	// (0x0006dd75) main_image3_pane_g

0x58db,	// (0x00063eb4) main_image3_pane_t1_ParamLimits

0x58db,	// (0x00063eb4) main_image3_pane_t1

0x5933,	// (0x00063f0c) main_image3_pane_t2_ParamLimits

0x5933,	// (0x00063f0c) main_image3_pane_t2

0x5985,	// (0x00063f5e) main_image3_pane_t3_ParamLimits

0x5985,	// (0x00063f5e) main_image3_pane_t3

0x0003,

0xf7a5,	// (0x0006dd7e) main_image3_pane_t_ParamLimits

0xf7a5,	// (0x0006dd7e) main_image3_pane_t

0xdbd9,	// (0x0006c1b2) grid_sctrl_middle_pane_cp01_ParamLimits

0xdbd9,	// (0x0006c1b2) grid_sctrl_middle_pane_cp01

0x5a0d,	// (0x00063fe6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a0d,	// (0x00063fe6) cell_sctrl_middle_pane_cp01

0x5a2a,	// (0x00064003) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a2a,	// (0x00064003) cell_sctrl_middle_pane_cp01_g1

0xa05f,	// (0x00068638) main_call4_pane

0x5a40,	// (0x00064019) aid_size_button_call4_ParamLimits

0x5a40,	// (0x00064019) aid_size_button_call4

0x5a73,	// (0x0006404c) call4_windows_pane_ParamLimits

0x5a73,	// (0x0006404c) call4_windows_pane

0x5a92,	// (0x0006406b) grid_call4_button_pane_ParamLimits

0x5a92,	// (0x0006406b) grid_call4_button_pane

0x5ac5,	// (0x0006409e) call4_windows_conf_pane

0x5adc,	// (0x000640b5) popup_call4_audio_first_window_ParamLimits

0x5adc,	// (0x000640b5) popup_call4_audio_first_window

0x5b2c,	// (0x00064105) popup_call4_audio_second_window_ParamLimits

0x5b2c,	// (0x00064105) popup_call4_audio_second_window

0x5b43,	// (0x0006411c) popup_call4_audio_wait_window_ParamLimits

0x5b43,	// (0x0006411c) popup_call4_audio_wait_window

0x5b51,	// (0x0006412a) cell_call4_button_pane_ParamLimits

0x5b51,	// (0x0006412a) cell_call4_button_pane

0x5b76,	// (0x0006414f) bg_button_pane_cp09_ParamLimits

0x5b76,	// (0x0006414f) bg_button_pane_cp09

0x5b82,	// (0x0006415b) cell_call4_button_pane_g1_ParamLimits

0x5b82,	// (0x0006415b) cell_call4_button_pane_g1

0x5ba8,	// (0x00064181) cell_call4_button_pane_t1_ParamLimits

0x5ba8,	// (0x00064181) cell_call4_button_pane_t1

0xb605,	// (0x00069bde) popup_call4_audio_conf_window_ParamLimits

0xb605,	// (0x00069bde) popup_call4_audio_conf_window

0x50c8,	// (0x000636a1) mup3_progress_pane_t1_ParamLimits

0x50e7,	// (0x000636c0) mup3_progress_pane_t2_ParamLimits

0xadc4,	// (0x0006939d) mup3_progress_pane_t3_ParamLimits

0xf689,	// (0x0006dc62) mup3_progress_pane_t_ParamLimits

0xade1,	// (0x000693ba) mup_progress_pane_cp03_ParamLimits

0xadf9,	// (0x000693d2) mup3_control_keys_pane_g4_copy1

0xb4fe,	// (0x00069ad7) mp4_rocker2_pane_ParamLimits

0xb4fe,	// (0x00069ad7) mp4_rocker2_pane

0xb0ba,	// (0x00069693) mp4_rocker2_pane_g1

0xb0ba,	// (0x00069693) mp4_rocker2_pane_g2

0xb0ba,	// (0x00069693) mp4_rocker2_pane_g3

0xb0ba,	// (0x00069693) mp4_rocker2_pane_g4

0xb0ba,	// (0x00069693) mp4_rocker2_pane_g5

0x0004,

0xf7ae,	// (0x0006dd87) mp4_rocker2_pane_g

0xa05f,	// (0x00068638) main_camera4_pane

0xa05f,	// (0x00068638) main_video4_pane

0x569a,	// (0x00063c73) main_video_tele_dialer_pane_t1_ParamLimits

0x569a,	// (0x00063c73) main_video_tele_dialer_pane_t1

0x56b3,	// (0x00063c8c) main_video_tele_dialer_pane_t2_ParamLimits

0x56b3,	// (0x00063c8c) main_video_tele_dialer_pane_t2

0x0001,

0xf764,	// (0x0006dd3d) main_video_tele_dialer_pane_t_ParamLimits

0xf764,	// (0x0006dd3d) main_video_tele_dialer_pane_t

0x5be6,	// (0x000641bf) cam4_autofocus_pane_ParamLimits

0x5be6,	// (0x000641bf) cam4_autofocus_pane

0x5bfc,	// (0x000641d5) cam4_image_uncrop_pane_ParamLimits

0x5bfc,	// (0x000641d5) cam4_image_uncrop_pane

0x5c16,	// (0x000641ef) cam4_indicators_pane_ParamLimits

0x5c16,	// (0x000641ef) cam4_indicators_pane

0x5c41,	// (0x0006421a) main_camera4_pane_g1_ParamLimits

0x5c41,	// (0x0006421a) main_camera4_pane_g1

0x5c53,	// (0x0006422c) main_camera4_pane_g2_ParamLimits

0x5c53,	// (0x0006422c) main_camera4_pane_g2

0x5c66,	// (0x0006423f) main_camera4_pane_g3_ParamLimits

0x5c66,	// (0x0006423f) main_camera4_pane_g3

0x5c79,	// (0x00064252) main_camera4_pane_g4_ParamLimits

0x5c79,	// (0x00064252) main_camera4_pane_g4

0x5c8c,	// (0x00064265) main_camera4_pane_g5_ParamLimits

0x5c8c,	// (0x00064265) main_camera4_pane_g5

0x0005,

0xf7b9,	// (0x0006dd92) main_camera4_pane_g_ParamLimits

0xf7b9,	// (0x0006dd92) main_camera4_pane_g

0x5cb0,	// (0x00064289) main_camera4_pane_t1_ParamLimits

0x5cb0,	// (0x00064289) main_camera4_pane_t1

0xcd56,	// (0x0006b32f) bg_tb_trans_pane_cp06

0xb63d,	// (0x00069c16) cam4_indicators_pane_g1

0xb64e,	// (0x00069c27) cam4_indicators_pane_g2

0x0002,

0xf7d4,	// (0x0006ddad) cam4_indicators_pane_g

0xb66c,	// (0x00069c45) cam4_indicators_pane_t1

0x5d14,	// (0x000642ed) main_video4_pane_g1_ParamLimits

0x5d14,	// (0x000642ed) main_video4_pane_g1

0x5d23,	// (0x000642fc) main_video4_pane_g2_ParamLimits

0x5d23,	// (0x000642fc) main_video4_pane_g2

0x5d32,	// (0x0006430b) main_video4_pane_g3_ParamLimits

0x5d32,	// (0x0006430b) main_video4_pane_g3

0x5d41,	// (0x0006431a) main_video4_pane_g4_ParamLimits

0x5d41,	// (0x0006431a) main_video4_pane_g4

0x0004,

0xf7db,	// (0x0006ddb4) main_video4_pane_g_ParamLimits

0xf7db,	// (0x0006ddb4) main_video4_pane_g

0x5d5f,	// (0x00064338) vid4_indicators_pane_ParamLimits

0x5d5f,	// (0x00064338) vid4_indicators_pane

0x5d8d,	// (0x00064366) video4_image_uncrop_cif_pane_ParamLimits

0x5d8d,	// (0x00064366) video4_image_uncrop_cif_pane

0x5da7,	// (0x00064380) video4_image_uncrop_nhd_pane_ParamLimits

0x5da7,	// (0x00064380) video4_image_uncrop_nhd_pane

0x5bfc,	// (0x000641d5) video4_image_uncrop_vga_pane_ParamLimits

0x5bfc,	// (0x000641d5) video4_image_uncrop_vga_pane

0xa051,	// (0x0006862a) bg_tb_trans_pane_cp07

0xb698,	// (0x00069c71) vid4_indicators_pane_g1

0xb6ac,	// (0x00069c85) vid4_indicators_pane_g2

0xb6c0,	// (0x00069c99) vid4_indicators_pane_g3

0x0004,

0xf7e6,	// (0x0006ddbf) vid4_indicators_pane_g

0xb6ef,	// (0x00069cc8) vid4_indicators_pane_t1

0x5dbb,	// (0x00064394) cam4_autofocus_pane_g1

0x5dc3,	// (0x0006439c) cam4_autofocus_pane_g2

0x5dcb,	// (0x000643a4) cam4_autofocus_pane_g3

0x0002,

0xf7f1,	// (0x0006ddca) cam4_autofocus_pane_g

0x5dd3,	// (0x000643ac) cam4_autofocus_pane_g3_copy1

0x56e2,	// (0x00063cbb) video_down_pane_cp_t1

0x56f0,	// (0x00063cc9) video_down_pane_cp_t2

0x0001,

0xf769,	// (0x0006dd42) video_down_pane_cp_t

0xa051,	// (0x0006862a) popup_vitu2_window_ParamLimits

0xa051,	// (0x0006862a) popup_vitu2_window

0x5ddb,	// (0x000643b4) aid_size_cell2_itu2_ParamLimits

0x5ddb,	// (0x000643b4) aid_size_cell2_itu2

0x5e01,	// (0x000643da) aid_size_cell_itu2_ParamLimits

0x5e01,	// (0x000643da) aid_size_cell_itu2

0x5e5d,	// (0x00064436) bg_popup_window_pane_cp09_ParamLimits

0x5e5d,	// (0x00064436) bg_popup_window_pane_cp09

0x5e6b,	// (0x00064444) field_vitu2_entry_pane_ParamLimits

0x5e6b,	// (0x00064444) field_vitu2_entry_pane

0x5e91,	// (0x0006446a) grid_vitu2_function_pane_ParamLimits

0x5e91,	// (0x0006446a) grid_vitu2_function_pane

0x5ee2,	// (0x000644bb) grid_vitu2_itu_pane_ParamLimits

0x5ee2,	// (0x000644bb) grid_vitu2_itu_pane

0x5f78,	// (0x00064551) cell_vitu2_itu_pane_ParamLimits

0x5f78,	// (0x00064551) cell_vitu2_itu_pane

0x5fa4,	// (0x0006457d) cell_vitu2_function_pane_ParamLimits

0x5fa4,	// (0x0006457d) cell_vitu2_function_pane

0xb706,	// (0x00069cdf) bg_popup_call_pane_cp08_ParamLimits

0xb706,	// (0x00069cdf) bg_popup_call_pane_cp08

0xb71d,	// (0x00069cf6) field_vitu2_entry_pane_g1

0xb729,	// (0x00069d02) field_vitu2_entry_pane_g2

0x0002,

0xf7f8,	// (0x0006ddd1) field_vitu2_entry_pane_g

0x5fe3,	// (0x000645bc) field_vitu2_entry_pane_t1_ParamLimits

0x5fe3,	// (0x000645bc) field_vitu2_entry_pane_t1

0xb735,	// (0x00069d0e) field_vitu2_entry_pane_t2_ParamLimits

0xb735,	// (0x00069d0e) field_vitu2_entry_pane_t2

0x0001,

0xf7ff,	// (0x0006ddd8) field_vitu2_entry_pane_t_ParamLimits

0xf7ff,	// (0x0006ddd8) field_vitu2_entry_pane_t

0x6012,	// (0x000645eb) bg_button_pane_cp010_ParamLimits

0x6012,	// (0x000645eb) bg_button_pane_cp010

0x6020,	// (0x000645f9) cell_vitu2_itu_pane_g1

0x6046,	// (0x0006461f) cell_vitu2_itu_pane_t1_ParamLimits

0x6046,	// (0x0006461f) cell_vitu2_itu_pane_t1

0x60a4,	// (0x0006467d) cell_vitu2_itu_pane_t2_ParamLimits

0x60a4,	// (0x0006467d) cell_vitu2_itu_pane_t2

0x0002,

0xf809,	// (0x0006dde2) cell_vitu2_itu_pane_t_ParamLimits

0xf809,	// (0x0006dde2) cell_vitu2_itu_pane_t

0xa051,	// (0x0006862a) bg_button_pane_cp011

0x6190,	// (0x00064769) cell_vitu2_function_pane_g1

0xa05f,	// (0x00068638) main_myfav_hc_pane

0x59d5,	// (0x00063fae) popup_image3_note_pane_ParamLimits

0x59d5,	// (0x00063fae) popup_image3_note_pane

0x59f1,	// (0x00063fca) popup_image3_tool_bar_pane_ParamLimits

0x59f1,	// (0x00063fca) popup_image3_tool_bar_pane

0x6132,	// (0x0006470b) cell_vitu2_itu_pane_t3_ParamLimits

0x6132,	// (0x0006470b) cell_vitu2_itu_pane_t3

0xd923,	// (0x0006befc) bg_popup_trans_pane

0xb75a,	// (0x00069d33) grid_image3_tool_bar_pane

0xb764,	// (0x00069d3d) bg_popup_trans_pane_g1

0xe81e,	// (0x0006cdf7) bg_popup_trans_pane_g2

0xb76c,	// (0x00069d45) bg_popup_trans_pane_g3

0xb774,	// (0x00069d4d) bg_popup_trans_pane_g4

0xb77c,	// (0x00069d55) bg_popup_trans_pane_g5

0xb784,	// (0x00069d5d) bg_popup_trans_pane_g6

0xb78c,	// (0x00069d65) bg_popup_trans_pane_g7

0xb794,	// (0x00069d6d) bg_popup_trans_pane_g8

0xe7fe,	// (0x0006cdd7) bg_popup_trans_pane_g9

0x0008,

0xf810,	// (0x0006dde9) bg_popup_trans_pane_g

0xb79c,	// (0x00069d75) cell_image3_tool_bar_pane_ParamLimits

0xb79c,	// (0x00069d75) cell_image3_tool_bar_pane

0xe38f,	// (0x0006c968) cell_image3_tool_bar_pane_g1

0xd923,	// (0x0006befc) bg_popup_trans_pane_cp1

0xb7b0,	// (0x00069d89) popup_image3_note_pane_t1

0xb7be,	// (0x00069d97) popup_image3_note_pane_t2

0xb7cc,	// (0x00069da5) popup_image3_note_pane_t3

0x0002,

0xf823,	// (0x0006ddfc) popup_image3_note_pane_t

0xb7da,	// (0x00069db3) popup_image3_note_pane_t3_copy1

0x61a4,	// (0x0006477d) bg_myfav_hc_instruction_pane_ParamLimits

0x61a4,	// (0x0006477d) bg_myfav_hc_instruction_pane

0x61b8,	// (0x00064791) cell_myfav_contact_pane_ParamLimits

0x61b8,	// (0x00064791) cell_myfav_contact_pane

0x61d6,	// (0x000647af) cell_myfav_contact_pane_cp1_ParamLimits

0x61d6,	// (0x000647af) cell_myfav_contact_pane_cp1

0x61ee,	// (0x000647c7) cell_myfav_contact_pane_cp2_ParamLimits

0x61ee,	// (0x000647c7) cell_myfav_contact_pane_cp2

0x6206,	// (0x000647df) cell_myfav_contact_pane_cp3_ParamLimits

0x6206,	// (0x000647df) cell_myfav_contact_pane_cp3

0x621d,	// (0x000647f6) cell_myfav_contact_pane_cp4_ParamLimits

0x621d,	// (0x000647f6) cell_myfav_contact_pane_cp4

0x6235,	// (0x0006480e) cell_myfav_contact_pane_cp5_ParamLimits

0x6235,	// (0x0006480e) cell_myfav_contact_pane_cp5

0x6249,	// (0x00064822) cell_myfav_contact_pane_cp6_ParamLimits

0x6249,	// (0x00064822) cell_myfav_contact_pane_cp6

0x625f,	// (0x00064838) cell_myfav_contact_pane_cp7_ParamLimits

0x625f,	// (0x00064838) cell_myfav_contact_pane_cp7

0xb7e8,	// (0x00069dc1) listscroll_gen_pane_cp05

0x6279,	// (0x00064852) main_myfav_hc_pane_g1_ParamLimits

0x6279,	// (0x00064852) main_myfav_hc_pane_g1

0x6293,	// (0x0006486c) main_myfav_hc_pane_g2_ParamLimits

0x6293,	// (0x0006486c) main_myfav_hc_pane_g2

0x0002,

0xf82a,	// (0x0006de03) main_myfav_hc_pane_g_ParamLimits

0xf82a,	// (0x0006de03) main_myfav_hc_pane_g

0x62c5,	// (0x0006489e) main_myfav_hc_pane_t1_ParamLimits

0x62c5,	// (0x0006489e) main_myfav_hc_pane_t1

0xb7f1,	// (0x00069dca) main_myfav_hc_pane_t2_ParamLimits

0xb7f1,	// (0x00069dca) main_myfav_hc_pane_t2

0xb803,	// (0x00069ddc) main_myfav_hc_pane_t3_ParamLimits

0xb803,	// (0x00069ddc) main_myfav_hc_pane_t3

0x62dc,	// (0x000648b5) main_myfav_hc_pane_t4_ParamLimits

0x62dc,	// (0x000648b5) main_myfav_hc_pane_t4

0x0004,

0xf831,	// (0x0006de0a) main_myfav_hc_pane_t_ParamLimits

0xf831,	// (0x0006de0a) main_myfav_hc_pane_t

0xe38f,	// (0x0006c968) bg_myfav_hc_instruction_pane_g1

0xb815,	// (0x00069dee) cell_myfav_contact_pane_g1_ParamLimits

0xb815,	// (0x00069dee) cell_myfav_contact_pane_g1

0xb815,	// (0x00069dee) cell_myfav_contact_pane_g2_ParamLimits

0xb815,	// (0x00069dee) cell_myfav_contact_pane_g2

0xb821,	// (0x00069dfa) cell_myfav_contact_pane_g3_ParamLimits

0xb821,	// (0x00069dfa) cell_myfav_contact_pane_g3

0xe35f,	// (0x0006c938) cell_myfav_contact_pane_g4_ParamLimits

0xe35f,	// (0x0006c938) cell_myfav_contact_pane_g4

0xb82e,	// (0x00069e07) cell_myfav_contact_pane_g5_ParamLimits

0xb82e,	// (0x00069e07) cell_myfav_contact_pane_g5

0x0004,

0xf83c,	// (0x0006de15) cell_myfav_contact_pane_g_ParamLimits

0xf83c,	// (0x0006de15) cell_myfav_contact_pane_g

0x62ad,	// (0x00064886) main_myfav_hc_pane_g3_ParamLimits

0x62ad,	// (0x00064886) main_myfav_hc_pane_g3

0x0880,	// (0x0005ee59) popup_adpt_find_window

0x6304,	// (0x000648dd) afind_page_pane_ParamLimits

0x6304,	// (0x000648dd) afind_page_pane

0x6319,	// (0x000648f2) aid_size_cell_afind_ParamLimits

0x6319,	// (0x000648f2) aid_size_cell_afind

0x6337,	// (0x00064910) bg_popup_sub_pane_cp09_ParamLimits

0x6337,	// (0x00064910) bg_popup_sub_pane_cp09

0x6344,	// (0x0006491d) find_pane_cp01_ParamLimits

0x6344,	// (0x0006491d) find_pane_cp01

0xb83a,	// (0x00069e13) grid_afind_control_pane_ParamLimits

0xb83a,	// (0x00069e13) grid_afind_control_pane

0x6351,	// (0x0006492a) grid_afind_pane_ParamLimits

0x6351,	// (0x0006492a) grid_afind_pane

0x6373,	// (0x0006494c) cell_afind_pane_ParamLimits

0x6373,	// (0x0006494c) cell_afind_pane

0xe38f,	// (0x0006c968) afind_page_pane_g1

0x63da,	// (0x000649b3) afind_page_pane_g2

0x63e2,	// (0x000649bb) afind_page_pane_g3

0x0002,

0xf847,	// (0x0006de20) afind_page_pane_g

0x63ea,	// (0x000649c3) afind_page_pane_t1

0xb860,	// (0x00069e39) cell_afind_grid_control_pane_ParamLimits

0xb860,	// (0x00069e39) cell_afind_grid_control_pane

0xb86f,	// (0x00069e48) bg_button_pane_cp69_ParamLimits

0xb86f,	// (0x00069e48) bg_button_pane_cp69

0x63f8,	// (0x000649d1) cell_afind_pane_g1_ParamLimits

0x63f8,	// (0x000649d1) cell_afind_pane_g1

0x6405,	// (0x000649de) cell_afind_pane_t1_ParamLimits

0x6405,	// (0x000649de) cell_afind_pane_t1

0xb87b,	// (0x00069e54) bg_button_pane_cp72

0xb883,	// (0x00069e5c) cell_afind_grid_control_pane_g1

0x3305,	// (0x000618de) aid_image_placing_area_ParamLimits

0x3305,	// (0x000618de) aid_image_placing_area

0xe351,	// (0x0006c92a) field_vitu_entry_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) field_vitu_entry_pane_g1

0xe351,	// (0x0006c92a) field_vitu_entry_pane_g2_ParamLimits

0xe351,	// (0x0006c92a) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0006d772) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0006d772) field_vitu_entry_pane_g

0xb0e7,	// (0x000696c0) cell_vitu_itu_pane_g1_ParamLimits

0xb0ca,	// (0x000696a3) cell_vitu_itu_pane_t3_ParamLimits

0xb0ca,	// (0x000696a3) cell_vitu_itu_pane_t3

0xb51a,	// (0x00069af3) mp4_progress_pane_t1_ParamLimits

0xb539,	// (0x00069b12) mp4_progress_pane_t2_ParamLimits

0xf78d,	// (0x0006dd66) mp4_progress_pane_t_ParamLimits

0xb558,	// (0x00069b31) mup_progress_pane_cp04_ParamLimits

0x62f0,	// (0x000648c9) main_myfav_hc_pane_t5_ParamLimits

0x62f0,	// (0x000648c9) main_myfav_hc_pane_t5

0xa000,	// (0x000685d9) aid_zoom_text_primary

0x0880,	// (0x0005ee59) popup_adpt_find_window_ParamLimits

0xa051,	// (0x0006862a) main_cam_set_pane

0x5c2d,	// (0x00064206) cam4_zoom_pane_ParamLimits

0x5c2d,	// (0x00064206) cam4_zoom_pane

0x6417,	// (0x000649f0) main_cam_set_pane_g1_ParamLimits

0x6417,	// (0x000649f0) main_cam_set_pane_g1

0x6425,	// (0x000649fe) main_cam_set_pane_g2_ParamLimits

0x6425,	// (0x000649fe) main_cam_set_pane_g2

0x0001,

0xf84e,	// (0x0006de27) main_cam_set_pane_g_ParamLimits

0xf84e,	// (0x0006de27) main_cam_set_pane_g

0x6446,	// (0x00064a1f) main_cam_set_pane_t1_ParamLimits

0x6446,	// (0x00064a1f) main_cam_set_pane_t1

0x6461,	// (0x00064a3a) main_cset_listscroll_pane_ParamLimits

0x6461,	// (0x00064a3a) main_cset_listscroll_pane

0x6487,	// (0x00064a60) main_cset_slider_pane_ParamLimits

0x6487,	// (0x00064a60) main_cset_slider_pane

0xb894,	// (0x00069e6d) main_cset_list_pane_ParamLimits

0xb894,	// (0x00069e6d) main_cset_list_pane

0xb8a4,	// (0x00069e7d) scroll_pane_cp028

0x64ad,	// (0x00064a86) aid_area_touch_slider

0x64c9,	// (0x00064aa2) cset_slider_pane

0x64ec,	// (0x00064ac5) main_cset_slider_pane_g1

0x6501,	// (0x00064ada) main_cset_slider_pane_g2

0x0011,

0xf853,	// (0x0006de2c) main_cset_slider_pane_g

0xb8dd,	// (0x00069eb6) main_cset_slider_pane_t1

0x65bd,	// (0x00064b96) main_cset_slider_pane_t2

0x65d7,	// (0x00064bb0) main_cset_slider_pane_t3

0x65f1,	// (0x00064bca) main_cset_slider_pane_t4

0x660b,	// (0x00064be4) main_cset_slider_pane_t5

0x6625,	// (0x00064bfe) main_cset_slider_pane_t6

0x663a,	// (0x00064c13) main_cset_slider_pane_t7

0x000e,

0xf878,	// (0x0006de51) main_cset_slider_pane_t

0x673e,	// (0x00064d17) cset_list_set_pane_ParamLimits

0x673e,	// (0x00064d17) cset_list_set_pane

0xb977,	// (0x00069f50) aid_position_infowindow_above

0xb97f,	// (0x00069f58) aid_position_infowindow_below

0xb987,	// (0x00069f60) cset_list_set_pane_g1_ParamLimits

0xb987,	// (0x00069f60) cset_list_set_pane_g1

0xb993,	// (0x00069f6c) cset_list_set_pane_g3_ParamLimits

0xb993,	// (0x00069f6c) cset_list_set_pane_g3

0x0001,

0xf897,	// (0x0006de70) cset_list_set_pane_g_ParamLimits

0xf897,	// (0x0006de70) cset_list_set_pane_g

0xb9a2,	// (0x00069f7b) cset_list_set_pane_t1_ParamLimits

0xb9a2,	// (0x00069f7b) cset_list_set_pane_t1

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp021_ParamLimits

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp021

0x2b27,	// (0x00061100) cset_slider_pane_g1

0x2b39,	// (0x00061112) cset_slider_pane_g2

0x2b30,	// (0x00061109) cset_slider_pane_g3

0x0002,

0xf89c,	// (0x0006de75) cset_slider_pane_g

0xb9b7,	// (0x00069f90) aid_area_touch_cam4_zoom

0xb9bf,	// (0x00069f98) cam4_zoom_cont_pane

0xb9c7,	// (0x00069fa0) cam4_zoom_pane_g1

0xb9cf,	// (0x00069fa8) cam4_zoom_pane_g2

0x6750,	// (0x00064d29) cam4_zoom_pane_g3

0x0002,

0xf8a3,	// (0x0006de7c) cam4_zoom_pane_g

0xb9d7,	// (0x00069fb0) cam4_zoom_cont_pane_g1

0xb9e0,	// (0x00069fb9) cam4_zoom_cont_pane_g2

0xb9e9,	// (0x00069fc2) cam4_zoom_cont_pane_g3

0x0002,

0xf8aa,	// (0x0006de83) cam4_zoom_cont_pane_g

0x5a5e,	// (0x00064037) call4_image_pane_ParamLimits

0x5a5e,	// (0x00064037) call4_image_pane

0x5ac5,	// (0x0006409e) call4_windows_conf_pane_ParamLimits

0x5b0a,	// (0x000640e3) popup_call4_audio_in_window_ParamLimits

0x5b0a,	// (0x000640e3) popup_call4_audio_in_window

0xd923,	// (0x0006befc) bg_popup_call2_act_pane_cp02

0xb5fd,	// (0x00069bd6) call4_list_conf_pane

0xe38f,	// (0x0006c968) call4_image_pane_g1

0xe38f,	// (0x0006c968) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0006d665) call4_image_pane_g

0xb9f2,	// (0x00069fcb) list_single_graphic_popup_conf4_pane_ParamLimits

0xb9f2,	// (0x00069fcb) list_single_graphic_popup_conf4_pane

0xd923,	// (0x0006befc) list_highlight_pane_cp022

0xba05,	// (0x00069fde) list_single_graphic_popup_conf4_pane_g1

0xed06,	// (0x0006d2df) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8b1,	// (0x0006de8a) list_single_graphic_popup_conf4_pane_g

0xba0d,	// (0x00069fe6) list_single_graphic_popup_conf4_pane_t1

0x165f,	// (0x0005fc38) popup_vtel_slider_window_ParamLimits

0x165f,	// (0x0005fc38) popup_vtel_slider_window

0xb56b,	// (0x00069b44) dialer2_ne_pane_t2_ParamLimits

0xb56b,	// (0x00069b44) dialer2_ne_pane_t2

0x0001,

0xf792,	// (0x0006dd6b) dialer2_ne_pane_t_ParamLimits

0xf792,	// (0x0006dd6b) dialer2_ne_pane_t

0xa8be,	// (0x00068e97) bg_popup_sub_pane_cp010_ParamLimits

0xa8be,	// (0x00068e97) bg_popup_sub_pane_cp010

0x6758,	// (0x00064d31) popup_vtel_slider_window_g1_ParamLimits

0x6758,	// (0x00064d31) popup_vtel_slider_window_g1

0x676b,	// (0x00064d44) popup_vtel_slider_window_g2_ParamLimits

0x676b,	// (0x00064d44) popup_vtel_slider_window_g2

0x0003,

0xf8b6,	// (0x0006de8f) popup_vtel_slider_window_g_ParamLimits

0xf8b6,	// (0x0006de8f) popup_vtel_slider_window_g

0x67c1,	// (0x00064d9a) vtel_slider_pane_ParamLimits

0x67c1,	// (0x00064d9a) vtel_slider_pane

0x67e3,	// (0x00064dbc) vtel_slider_pane_g1_ParamLimits

0x67e3,	// (0x00064dbc) vtel_slider_pane_g1

0x67f7,	// (0x00064dd0) vtel_slider_pane_g2_ParamLimits

0x67f7,	// (0x00064dd0) vtel_slider_pane_g2

0x680f,	// (0x00064de8) vtel_slider_pane_g3_ParamLimits

0x680f,	// (0x00064de8) vtel_slider_pane_g3

0x67e3,	// (0x00064dbc) vtel_slider_pane_g4_ParamLimits

0x67e3,	// (0x00064dbc) vtel_slider_pane_g4

0x6825,	// (0x00064dfe) vtel_slider_pane_g5_ParamLimits

0x6825,	// (0x00064dfe) vtel_slider_pane_g5

0x0004,

0xf8bf,	// (0x0006de98) vtel_slider_pane_g_ParamLimits

0xf8bf,	// (0x0006de98) vtel_slider_pane_g

0xa051,	// (0x0006862a) main_gallery2_pane

0x5e2d,	// (0x00064406) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e2d,	// (0x00064406) aid_size_row_itut2_dropdow_list

0x5eb9,	// (0x00064492) grid_vitu2_function_top_pane_ParamLimits

0x5eb9,	// (0x00064492) grid_vitu2_function_top_pane

0x5f23,	// (0x000644fc) popup_vitu2_dropdown_list_window_ParamLimits

0x5f23,	// (0x000644fc) popup_vitu2_dropdown_list_window

0x5f4a,	// (0x00064523) popup_vitu2_match_list_window

0x683b,	// (0x00064e14) cell_vitu2_function_top_pane_ParamLimits

0x683b,	// (0x00064e14) cell_vitu2_function_top_pane

0x6853,	// (0x00064e2c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6853,	// (0x00064e2c) cell_vitu2_function_top_pane_cp01

0x686f,	// (0x00064e48) cell_vitu2_function_top_wide_pane_ParamLimits

0x686f,	// (0x00064e48) cell_vitu2_function_top_wide_pane

0xa051,	// (0x0006862a) bg_button_pane_cp012

0x688d,	// (0x00064e66) cell_vitu2_function_top_pane_g1

0xba23,	// (0x00069ffc) bg_button_pane_cp013_ParamLimits

0xba23,	// (0x00069ffc) bg_button_pane_cp013

0x68a1,	// (0x00064e7a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68a1,	// (0x00064e7a) cell_vitu2_function_top_wide_pane_g1

0xa051,	// (0x0006862a) bg_popup_sub_pane_cp20

0x68b9,	// (0x00064e92) list_vitu2_match_list_pane

0xb764,	// (0x00069d3d) bg_popup_sub_pane_cp20_g1

0xb76c,	// (0x00069d45) bg_popup_sub_pane_cp20_g2

0xe81e,	// (0x0006cdf7) bg_popup_sub_pane_cp20_g3

0xb774,	// (0x00069d4d) bg_popup_sub_pane_cp20_g4

0xe7fe,	// (0x0006cdd7) bg_popup_sub_pane_cp20_g5

0xba3f,	// (0x0006a018) bg_popup_sub_pane_cp20_g6

0xb784,	// (0x00069d5d) bg_popup_sub_pane_cp20_g7

0xb78c,	// (0x00069d65) bg_popup_sub_pane_cp20_g8

0xb794,	// (0x00069d6d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8ca,	// (0x0006dea3) bg_popup_sub_pane_cp20_g

0xba47,	// (0x0006a020) list_vitu2_match_list_item_pane_ParamLimits

0xba47,	// (0x0006a020) list_vitu2_match_list_item_pane

0xba59,	// (0x0006a032) list_vitu2_match_list_item_pane_t1

0xa05f,	// (0x00068638) bg_popup_sub_pane_cp21

0xe605,	// (0x0006cbde) grid_vitu2_dropdown_list_pane

0x68d1,	// (0x00064eaa) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x68d1,	// (0x00064eaa) cell_vitu2_dropdown_list_char_pane

0x68f1,	// (0x00064eca) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x68f1,	// (0x00064eca) cell_vitu2_dropdown_list_ctrl_pane

0xba67,	// (0x0006a040) cell_vitu2_dropdown_list_char_pane_g1

0xba70,	// (0x0006a049) cell_vitu2_dropdown_list_char_pane_g2

0xba79,	// (0x0006a052) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8dd,	// (0x0006deb6) cell_vitu2_dropdown_list_char_pane_g

0x6919,	// (0x00064ef2) cell_vitu2_dropdown_list_char_pane_t1

0x6927,	// (0x00064f00) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6927,	// (0x00064f00) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6934,	// (0x00064f0d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6934,	// (0x00064f0d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6941,	// (0x00064f1a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6941,	// (0x00064f1a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x694e,	// (0x00064f27) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x694e,	// (0x00064f27) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcd56,	// (0x0006b32f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcd56,	// (0x0006b32f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8e4,	// (0x0006debd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8e4,	// (0x0006debd) cell_vitu2_dropdown_list_ctrl_pane_g

0x696a,	// (0x00064f43) aid_size_cell_gallery2_ParamLimits

0x696a,	// (0x00064f43) aid_size_cell_gallery2

0x6988,	// (0x00064f61) grid_gallery2_pane_ParamLimits

0x6988,	// (0x00064f61) grid_gallery2_pane

0x69a2,	// (0x00064f7b) scroll_pane_cp029_ParamLimits

0x69a2,	// (0x00064f7b) scroll_pane_cp029

0x69b3,	// (0x00064f8c) cell_gallery2_pane_ParamLimits

0x69b3,	// (0x00064f8c) cell_gallery2_pane

0xba82,	// (0x0006a05b) cell_gallery2_pane_g2

0x6a12,	// (0x00064feb) cell_gallery2_pane_g3

0xba8a,	// (0x0006a063) cell_gallery2_pane_g4

0xba92,	// (0x0006a06b) cell_gallery2_pane_g5

0xe605,	// (0x0006cbde) grid_highlight_pane_cp10

0x5f4a,	// (0x00064523) popup_vitu2_match_list_window_ParamLimits

0x5f5f,	// (0x00064538) popup_vitu2_query_window_ParamLimits

0x5f5f,	// (0x00064538) popup_vitu2_query_window

0xa05f,	// (0x00068638) bg_vitu2_candi_button_pane

0xba67,	// (0x0006a040) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xba70,	// (0x0006a049) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xba79,	// (0x0006a052) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a1a,	// (0x00064ff3) bg_button_pane_cp015

0x6a2b,	// (0x00065004) bg_button_pane_cp016

0x6a37,	// (0x00065010) bg_button_pane_cp017

0x28ee,	// (0x00060ec7) bg_popup_sub_pane_cp22

0xba9a,	// (0x0006a073) popup_vitu2_query_window_g1

0x6a75,	// (0x0006504e) popup_vitu2_query_window_g2

0x0002,

0xf8ef,	// (0x0006dec8) popup_vitu2_query_window_g

0x6a97,	// (0x00065070) popup_vitu2_query_window_t1_ParamLimits

0x6a97,	// (0x00065070) popup_vitu2_query_window_t1

0x6aca,	// (0x000650a3) popup_vitu2_query_window_t2_ParamLimits

0x6aca,	// (0x000650a3) popup_vitu2_query_window_t2

0x6adc,	// (0x000650b5) popup_vitu2_query_window_t3_ParamLimits

0x6adc,	// (0x000650b5) popup_vitu2_query_window_t3

0x6b04,	// (0x000650dd) popup_vitu2_query_window_t4_ParamLimits

0x6b04,	// (0x000650dd) popup_vitu2_query_window_t4

0x6b18,	// (0x000650f1) popup_vitu2_query_window_t5_ParamLimits

0x6b18,	// (0x000650f1) popup_vitu2_query_window_t5

0x0006,

0xf8f6,	// (0x0006decf) popup_vitu2_query_window_t_ParamLimits

0xf8f6,	// (0x0006decf) popup_vitu2_query_window_t

0xb88c,	// (0x00069e65) main_cset_text_pane

0x64ad,	// (0x00064a86) aid_area_touch_slider_ParamLimits

0x64c9,	// (0x00064aa2) cset_slider_pane_ParamLimits

0x64ec,	// (0x00064ac5) main_cset_slider_pane_g1_ParamLimits

0x6501,	// (0x00064ada) main_cset_slider_pane_g2_ParamLimits

0xb8ad,	// (0x00069e86) main_cset_slider_pane_g3_ParamLimits

0xb8ad,	// (0x00069e86) main_cset_slider_pane_g3

0x6516,	// (0x00064aef) main_cset_slider_pane_g4_ParamLimits

0x6516,	// (0x00064aef) main_cset_slider_pane_g4

0x6525,	// (0x00064afe) main_cset_slider_pane_g5_ParamLimits

0x6525,	// (0x00064afe) main_cset_slider_pane_g5

0x6531,	// (0x00064b0a) main_cset_slider_pane_g6_ParamLimits

0x6531,	// (0x00064b0a) main_cset_slider_pane_g6

0xf853,	// (0x0006de2c) main_cset_slider_pane_g_ParamLimits

0xb8dd,	// (0x00069eb6) main_cset_slider_pane_t1_ParamLimits

0x65bd,	// (0x00064b96) main_cset_slider_pane_t2_ParamLimits

0x65d7,	// (0x00064bb0) main_cset_slider_pane_t3_ParamLimits

0x65f1,	// (0x00064bca) main_cset_slider_pane_t4_ParamLimits

0x660b,	// (0x00064be4) main_cset_slider_pane_t5_ParamLimits

0x6625,	// (0x00064bfe) main_cset_slider_pane_t6_ParamLimits

0x663a,	// (0x00064c13) main_cset_slider_pane_t7_ParamLimits

0x6664,	// (0x00064c3d) main_cset_slider_pane_t8_ParamLimits

0x6664,	// (0x00064c3d) main_cset_slider_pane_t8

0x668c,	// (0x00064c65) main_cset_slider_pane_t9_ParamLimits

0x668c,	// (0x00064c65) main_cset_slider_pane_t9

0x66b4,	// (0x00064c8d) main_cset_slider_pane_t10_ParamLimits

0x66b4,	// (0x00064c8d) main_cset_slider_pane_t10

0x66dc,	// (0x00064cb5) main_cset_slider_pane_t11_ParamLimits

0x66dc,	// (0x00064cb5) main_cset_slider_pane_t11

0x6704,	// (0x00064cdd) main_cset_slider_pane_t12_ParamLimits

0x6704,	// (0x00064cdd) main_cset_slider_pane_t12

0x6721,	// (0x00064cfa) main_cset_slider_pane_t13_ParamLimits

0x6721,	// (0x00064cfa) main_cset_slider_pane_t13

0xf878,	// (0x0006de51) main_cset_slider_pane_t_ParamLimits

0xd923,	// (0x0006befc) bg_popup_sub_pane_cp011

0xbaa6,	// (0x0006a07f) main_cset_text_pane_g1

0xbaae,	// (0x0006a087) main_cset_text_pane_t1

0xbabc,	// (0x0006a095) main_cset_text_pane_t2

0xbaca,	// (0x0006a0a3) main_cset_text_pane_t3

0xbad8,	// (0x0006a0b1) main_cset_text_pane_t4

0xbae6,	// (0x0006a0bf) main_cset_text_pane_t5

0xbaf4,	// (0x0006a0cd) main_cset_text_pane_t6

0xbb02,	// (0x0006a0db) main_cset_text_pane_t7

0x0006,

0xf905,	// (0x0006dede) main_cset_text_pane_t

0xa05f,	// (0x00068638) main_cam4_burst_pane

0xa05f,	// (0x00068638) main_cam5_pane

0xb84e,	// (0x00069e27) bg_button_pane_cp019

0xb857,	// (0x00069e30) bg_button_pane_cp020

0xb8b9,	// (0x00069e92) main_cset_slider_pane_g7_ParamLimits

0xb8b9,	// (0x00069e92) main_cset_slider_pane_g7

0xb8c5,	// (0x00069e9e) main_cset_slider_pane_g8_ParamLimits

0xb8c5,	// (0x00069e9e) main_cset_slider_pane_g8

0x6545,	// (0x00064b1e) main_cset_slider_pane_g9_ParamLimits

0x6545,	// (0x00064b1e) main_cset_slider_pane_g9

0x6551,	// (0x00064b2a) main_cset_slider_pane_g10_ParamLimits

0x6551,	// (0x00064b2a) main_cset_slider_pane_g10

0x655d,	// (0x00064b36) main_cset_slider_pane_g11_ParamLimits

0x655d,	// (0x00064b36) main_cset_slider_pane_g11

0x6569,	// (0x00064b42) main_cset_slider_pane_g12_ParamLimits

0x6569,	// (0x00064b42) main_cset_slider_pane_g12

0x6575,	// (0x00064b4e) main_cset_slider_pane_g13_ParamLimits

0x6575,	// (0x00064b4e) main_cset_slider_pane_g13

0x6581,	// (0x00064b5a) main_cset_slider_pane_g14_ParamLimits

0x6581,	// (0x00064b5a) main_cset_slider_pane_g14

0x658d,	// (0x00064b66) main_cset_slider_pane_g15_ParamLimits

0x658d,	// (0x00064b66) main_cset_slider_pane_g15

0xb905,	// (0x00069ede) main_cset_slider_pane_t14_ParamLimits

0xb905,	// (0x00069ede) main_cset_slider_pane_t14

0xb93e,	// (0x00069f17) main_cset_slider_pane_t15_ParamLimits

0xb93e,	// (0x00069f17) main_cset_slider_pane_t15

0x6b82,	// (0x0006515b) aid_cam4_burst_size_cell_ParamLimits

0x6b82,	// (0x0006515b) aid_cam4_burst_size_cell

0x6ba2,	// (0x0006517b) grid_cam4_burst_pane_ParamLimits

0x6ba2,	// (0x0006517b) grid_cam4_burst_pane

0x6bda,	// (0x000651b3) linegrid_cam4_burst_pane_ParamLimits

0x6bda,	// (0x000651b3) linegrid_cam4_burst_pane

0xbb10,	// (0x0006a0e9) scroll_pane_cp30_ParamLimits

0xbb10,	// (0x0006a0e9) scroll_pane_cp30

0x6bfe,	// (0x000651d7) cell_cam4_burst_pane_ParamLimits

0x6bfe,	// (0x000651d7) cell_cam4_burst_pane

0xbb1c,	// (0x0006a0f5) linegrid_cam4_burst_pane_g1_ParamLimits

0xbb1c,	// (0x0006a0f5) linegrid_cam4_burst_pane_g1

0x6c4b,	// (0x00065224) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c4b,	// (0x00065224) linegrid_cam4_burst_pane_g2

0xbb29,	// (0x0006a102) linegrid_cam4_burst_pane_g3_ParamLimits

0xbb29,	// (0x0006a102) linegrid_cam4_burst_pane_g3

0x0002,

0xf914,	// (0x0006deed) linegrid_cam4_burst_pane_g_ParamLimits

0xf914,	// (0x0006deed) linegrid_cam4_burst_pane_g

0x6c5c,	// (0x00065235) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6c5c,	// (0x00065235) linegrid_cam4_burst_pane_g3_copy1

0xbb36,	// (0x0006a10f) linegrid_cam4_burst_pane_g4_ParamLimits

0xbb36,	// (0x0006a10f) linegrid_cam4_burst_pane_g4

0x6c76,	// (0x0006524f) linegrid_cam4_burst_pane_g5_ParamLimits

0x6c76,	// (0x0006524f) linegrid_cam4_burst_pane_g5

0x6c87,	// (0x00065260) linegrid_cam4_burst_pane_g6_ParamLimits

0x6c87,	// (0x00065260) linegrid_cam4_burst_pane_g6

0xbb43,	// (0x0006a11c) linegrid_cam4_burst_pane_g7_ParamLimits

0xbb43,	// (0x0006a11c) linegrid_cam4_burst_pane_g7

0x6c9e,	// (0x00065277) cell_cam4_burst_pane_g1

0xbb5c,	// (0x0006a135) main_cam5_pane_t1_ParamLimits

0xbb5c,	// (0x0006a135) main_cam5_pane_t1

0xbb6e,	// (0x0006a147) main_cam5_pane_t2_ParamLimits

0xbb6e,	// (0x0006a147) main_cam5_pane_t2

0xbb80,	// (0x0006a159) main_cam5_pane_t3_ParamLimits

0xbb80,	// (0x0006a159) main_cam5_pane_t3

0xbb92,	// (0x0006a16b) main_cam5_pane_t4_ParamLimits

0xbb92,	// (0x0006a16b) main_cam5_pane_t4

0xbbaa,	// (0x0006a183) main_cam5_pane_t5_ParamLimits

0xbbaa,	// (0x0006a183) main_cam5_pane_t5

0xbbbe,	// (0x0006a197) main_cam5_pane_t6_ParamLimits

0xbbbe,	// (0x0006a197) main_cam5_pane_t6

0xbbd2,	// (0x0006a1ab) main_cam5_pane_t7_ParamLimits

0xbbd2,	// (0x0006a1ab) main_cam5_pane_t7

0xbbe4,	// (0x0006a1bd) main_cam5_pane_t8_ParamLimits

0xbbe4,	// (0x0006a1bd) main_cam5_pane_t8

0xbc00,	// (0x0006a1d9) main_cam5_pane_t9_ParamLimits

0xbc00,	// (0x0006a1d9) main_cam5_pane_t9

0xbc12,	// (0x0006a1eb) main_cam5_pane_t10_ParamLimits

0xbc12,	// (0x0006a1eb) main_cam5_pane_t10

0xbc24,	// (0x0006a1fd) main_cam5_pane_t11_ParamLimits

0xbc24,	// (0x0006a1fd) main_cam5_pane_t11

0xbc36,	// (0x0006a20f) main_cam5_pane_t12_ParamLimits

0xbc36,	// (0x0006a20f) main_cam5_pane_t12

0xbc4b,	// (0x0006a224) main_cam5_pane_t13_ParamLimits

0xbc4b,	// (0x0006a224) main_cam5_pane_t13

0x000c,

0xf920,	// (0x0006def9) main_cam5_pane_t_ParamLimits

0xf920,	// (0x0006def9) main_cam5_pane_t

0x0a78,	// (0x0005f051) popup_scut_keymap_window_ParamLimits

0x0a78,	// (0x0005f051) popup_scut_keymap_window

0x6cb1,	// (0x0006528a) aid_size_cell_brow_shortcut

0xe605,	// (0x0006cbde) bg_popup_window_pane_cp010

0x6cbd,	// (0x00065296) grid_scut_pane

0x6cc9,	// (0x000652a2) cell_scut_pane_ParamLimits

0x6cc9,	// (0x000652a2) cell_scut_pane

0x6ce0,	// (0x000652b9) cell_scut_pane_g1

0xbc68,	// (0x0006a241) cell_scut_pane_t1

0xbc77,	// (0x0006a250) cell_scut_pane_t2

0x6ce9,	// (0x000652c2) cell_scut_pane_t3

0x0002,

0xf93b,	// (0x0006df14) cell_scut_pane_t

0x4c77,	// (0x00063250) main_mup3_pane_g8_ParamLimits

0x4c77,	// (0x00063250) main_mup3_pane_g8

0x5e45,	// (0x0006441e) area_vitu2_query_pane_ParamLimits

0x5e45,	// (0x0006441e) area_vitu2_query_pane

0x6a43,	// (0x0006501c) input_focus_pane_cp08

0xbc86,	// (0x0006a25f) area_vitu2_query_pane_g1

0x6cf7,	// (0x000652d0) area_vitu2_query_pane_g2

0x0001,

0xf942,	// (0x0006df1b) area_vitu2_query_pane_g

0x6d06,	// (0x000652df) area_vitu2_query_pane_t1_ParamLimits

0x6d06,	// (0x000652df) area_vitu2_query_pane_t1

0x6d1a,	// (0x000652f3) area_vitu2_query_pane_t2_ParamLimits

0x6d1a,	// (0x000652f3) area_vitu2_query_pane_t2

0x6d2e,	// (0x00065307) area_vitu2_query_pane_t3_ParamLimits

0x6d2e,	// (0x00065307) area_vitu2_query_pane_t3

0xbc92,	// (0x0006a26b) area_vitu2_query_pane_t4_ParamLimits

0xbc92,	// (0x0006a26b) area_vitu2_query_pane_t4

0xbcba,	// (0x0006a293) area_vitu2_query_pane_t5_ParamLimits

0xbcba,	// (0x0006a293) area_vitu2_query_pane_t5

0xbce2,	// (0x0006a2bb) area_vitu2_query_pane_t6_ParamLimits

0xbce2,	// (0x0006a2bb) area_vitu2_query_pane_t6

0x0006,

0xf947,	// (0x0006df20) area_vitu2_query_pane_t_ParamLimits

0xf947,	// (0x0006df20) area_vitu2_query_pane_t

0x6d56,	// (0x0006532f) bg_button_pane_cp018

0x6d62,	// (0x0006533b) bg_button_pane_cp021

0x6d6e,	// (0x00065347) bg_button_pane_cp022

0x6d8d,	// (0x00065366) input_focus_pane_cp09

0xee42,	// (0x0006d41b) aid_size_touch_mv_arrow_left

0xee6b,	// (0x0006d444) aid_size_touch_mv_arrow_right

0x65a5,	// (0x00064b7e) main_cset_slider_pane_g16_ParamLimits

0x65a5,	// (0x00064b7e) main_cset_slider_pane_g16

0x65b1,	// (0x00064b8a) main_cset_slider_pane_g17_ParamLimits

0x65b1,	// (0x00064b8a) main_cset_slider_pane_g17

0x6c9e,	// (0x00065277) cell_cam4_burst_pane_g1_ParamLimits

0xd923,	// (0x0006befc) compa_mode_pane

0x677b,	// (0x00064d54) popup_vtel_slider_window_g3_ParamLimits

0x677b,	// (0x00064d54) popup_vtel_slider_window_g3

0x6792,	// (0x00064d6b) popup_vtel_slider_window_g4_ParamLimits

0x6792,	// (0x00064d6b) popup_vtel_slider_window_g4

0x67a9,	// (0x00064d82) popup_vtel_slider_window_t1_ParamLimits

0x67a9,	// (0x00064d82) popup_vtel_slider_window_t1

0xa05f,	// (0x00068638) main_cl_pane

0xa5be,	// (0x00068b97) popup_imed_adjust2_window_ParamLimits

0x28ee,	// (0x00060ec7) bg_tb_trans_pane_cp05_ParamLimits

0xaff7,	// (0x000695d0) popup_imed_adjust2_window_g1_ParamLimits

0xb006,	// (0x000695df) popup_imed_adjust2_window_g2_ParamLimits

0xb006,	// (0x000695df) popup_imed_adjust2_window_g2

0xb012,	// (0x000695eb) popup_imed_adjust2_window_g3_ParamLimits

0xb012,	// (0x000695eb) popup_imed_adjust2_window_g3

0x0002,

0xf6cc,	// (0x0006dca5) popup_imed_adjust2_window_g_ParamLimits

0xf6cc,	// (0x0006dca5) popup_imed_adjust2_window_g

0xb01e,	// (0x000695f7) popup_imed_adjust2_window_t1_ParamLimits

0xb036,	// (0x0006960f) slider_imed_adjust_pane_ParamLimits

0xb04a,	// (0x00069623) slider_imed_adjust_pane_g1_ParamLimits

0xb05a,	// (0x00069633) slider_imed_adjust_pane_g2_ParamLimits

0xb06a,	// (0x00069643) slider_imed_adjust_pane_g3_ParamLimits

0xb07b,	// (0x00069654) slider_imed_adjust_pane_g4_ParamLimits

0xf6d3,	// (0x0006dcac) slider_imed_adjust_pane_g_ParamLimits

0x5bce,	// (0x000641a7) aid_touch_area_cam4_ParamLimits

0x5bce,	// (0x000641a7) aid_touch_area_cam4

0xb619,	// (0x00069bf2) battery_pane_cp01

0x5c9d,	// (0x00064276) main_camera4_pane_g6_ParamLimits

0x5c9d,	// (0x00064276) main_camera4_pane_g6

0x5cc7,	// (0x000642a0) main_camera4_pane_t2_ParamLimits

0x5cc7,	// (0x000642a0) main_camera4_pane_t2

0x0001,

0xf7c6,	// (0x0006dd9f) main_camera4_pane_t_ParamLimits

0xf7c6,	// (0x0006dd9f) main_camera4_pane_t

0x5cfc,	// (0x000642d5) aid_touch_area_vid4_ParamLimits

0x5cfc,	// (0x000642d5) aid_touch_area_vid4

0x5d50,	// (0x00064329) main_video4_pane_g5_ParamLimits

0x5d50,	// (0x00064329) main_video4_pane_g5

0x5d75,	// (0x0006434e) vid4_progress_pane_ParamLimits

0x5d75,	// (0x0006434e) vid4_progress_pane

0xb8d1,	// (0x00069eaa) main_cset_slider_pane_g18_ParamLimits

0xb8d1,	// (0x00069eaa) main_cset_slider_pane_g18

0xbb50,	// (0x0006a129) cell_cam4_burst_pane_g2_ParamLimits

0xbb50,	// (0x0006a129) cell_cam4_burst_pane_g2

0x0001,

0xf91b,	// (0x0006def4) cell_cam4_burst_pane_g_ParamLimits

0xf91b,	// (0x0006def4) cell_cam4_burst_pane_g

0xe3ed,	// (0x0006c9c6) bg_cl_pane_ParamLimits

0xe3ed,	// (0x0006c9c6) bg_cl_pane

0x6d9d,	// (0x00065376) cl_header_pane_ParamLimits

0x6d9d,	// (0x00065376) cl_header_pane

0x6db1,	// (0x0006538a) cl_listscroll_pane_ParamLimits

0x6db1,	// (0x0006538a) cl_listscroll_pane

0xbd2e,	// (0x0006a307) bg_cl_pane_g1

0xbd36,	// (0x0006a30f) bg_cl_pane_g2

0xbd3e,	// (0x0006a317) bg_cl_pane_g3

0xbd46,	// (0x0006a31f) bg_cl_pane_g4

0xbd4e,	// (0x0006a327) bg_cl_pane_g5

0xbd56,	// (0x0006a32f) bg_cl_pane_g6

0xbd5e,	// (0x0006a337) bg_cl_pane_g7

0xbd66,	// (0x0006a33f) bg_cl_pane_g8

0xbd6e,	// (0x0006a347) bg_cl_pane_g9

0x0008,

0xf956,	// (0x0006df2f) bg_cl_pane_g

0x6dc1,	// (0x0006539a) aid_height_cl_leading_ParamLimits

0x6dc1,	// (0x0006539a) aid_height_cl_leading

0x6dcd,	// (0x000653a6) aid_height_cl_text_ParamLimits

0x6dcd,	// (0x000653a6) aid_height_cl_text

0xdbd9,	// (0x0006c1b2) bg_cl_header_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_cl_header_pane

0x6dec,	// (0x000653c5) cl_header_pane_g1_ParamLimits

0x6dec,	// (0x000653c5) cl_header_pane_g1

0x6e02,	// (0x000653db) cl_header_pane_t1_ParamLimits

0x6e02,	// (0x000653db) cl_header_pane_t1

0xbd76,	// (0x0006a34f) cl_list_pane

0xb8a4,	// (0x00069e7d) hc_scroll_pane_cp01

0xe7fe,	// (0x0006cdd7) bg_cl_header_pane_g1

0xb764,	// (0x00069d3d) bg_cl_header_pane_g2

0xe81e,	// (0x0006cdf7) bg_cl_header_pane_g3

0xb774,	// (0x00069d4d) bg_cl_header_pane_g4

0xb76c,	// (0x00069d45) bg_cl_header_pane_g5

0xba3f,	// (0x0006a018) bg_cl_header_pane_g6

0xb78c,	// (0x00069d65) bg_cl_header_pane_g7

0xb794,	// (0x00069d6d) bg_cl_header_pane_g8

0xb784,	// (0x00069d5d) bg_cl_header_pane_g9

0x0008,

0xf969,	// (0x0006df42) bg_cl_header_pane_g

0x6e1b,	// (0x000653f4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e1b,	// (0x000653f4) hc_cl_list_double_graphic_heading_pane

0x6e2c,	// (0x00065405) hc_cl_list_single_graphic_pane_ParamLimits

0x6e2c,	// (0x00065405) hc_cl_list_single_graphic_pane

0x6e42,	// (0x0006541b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e42,	// (0x0006541b) hc_cl_list_single_graphic_pane_g1

0x6e4e,	// (0x00065427) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e4e,	// (0x00065427) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf97c,	// (0x0006df55) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf97c,	// (0x0006df55) hc_cl_list_single_graphic_pane_g

0x6e62,	// (0x0006543b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6e62,	// (0x0006543b) hc_cl_list_single_graphic_pane_t1

0x6e42,	// (0x0006541b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e42,	// (0x0006541b) hc_cl_list_double_graphic_heading_pane_g1

0x6e77,	// (0x00065450) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6e77,	// (0x00065450) hc_cl_list_double_graphic_heading_pane_g2

0x6e8b,	// (0x00065464) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6e8b,	// (0x00065464) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf981,	// (0x0006df5a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf981,	// (0x0006df5a) hc_cl_list_double_graphic_heading_pane_g

0x6e9f,	// (0x00065478) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6e9f,	// (0x00065478) hc_cl_list_double_graphic_heading_pane_t1

0x6eb4,	// (0x0006548d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6eb4,	// (0x0006548d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf988,	// (0x0006df61) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf988,	// (0x0006df61) hc_cl_list_double_graphic_heading_pane_t

0xbd87,	// (0x0006a360) vid4_progress_pane_g1

0xbd97,	// (0x0006a370) vid4_progress_pane_g2

0x6ec9,	// (0x000654a2) vid4_progress_pane_g3

0xbda7,	// (0x0006a380) vid4_progress_pane_g4

0x0004,

0xf98d,	// (0x0006df66) vid4_progress_pane_g

0x6edb,	// (0x000654b4) vid4_progress_pane_t1

0xbdbf,	// (0x0006a398) vid4_progress_pane_t2

0x0002,

0xf998,	// (0x0006df71) vid4_progress_pane_t

0x6ef3,	// (0x000654cc) wait_bar_pane_cp07

0xa8cc,	// (0x00068ea5) blid_firmament_pane_ParamLimits

0xa90f,	// (0x00068ee8) popup_blid_sat_info2_window_g1

0xa933,	// (0x00068f0c) popup_blid_sat_info2_window_t3

0xa941,	// (0x00068f1a) popup_blid_sat_info2_window_t4

0xa94f,	// (0x00068f28) popup_blid_sat_info2_window_t5

0xa95d,	// (0x00068f36) popup_blid_sat_info2_window_t6

0xa96d,	// (0x00068f46) popup_blid_sat_info2_window_t7

0xa97b,	// (0x00068f54) popup_blid_sat_info2_window_t8

0xa989,	// (0x00068f62) popup_blid_sat_info2_window_t9

0xa997,	// (0x00068f70) popup_blid_sat_info2_window_t10

0xaa58,	// (0x00069031) aid_firma_cardinal_ParamLimits

0xaa6c,	// (0x00069045) blid_firmament_pane_t1_ParamLimits

0xaa83,	// (0x0006905c) blid_firmament_pane_t2_ParamLimits

0xaa9a,	// (0x00069073) blid_firmament_pane_t3_ParamLimits

0xaab1,	// (0x0006908a) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x0006dba9) blid_firmament_pane_t_ParamLimits

0xaac8,	// (0x000690a1) blid_sat_info_pane_ParamLimits

0xa051,	// (0x0006862a) main_cam_set_pane_ParamLimits

0x543b,	// (0x00063a14) aid_size_cell_colour_35_ParamLimits

0x545b,	// (0x00063a34) aid_size_cell_colour_112_ParamLimits

0x547b,	// (0x00063a54) aid_size_cell_effect_ParamLimits

0x28ee,	// (0x00060ec7) bg_tb_trans_pane_cp02_ParamLimits

0x549b,	// (0x00063a74) heading_imed_pane_ParamLimits

0x54a7,	// (0x00063a80) listscroll_imed_pane_ParamLimits

0x3b0e,	// (0x000620e7) popup_call2_audio_first_window_g5_ParamLimits

0x3b0e,	// (0x000620e7) popup_call2_audio_first_window_g5

0x57dc,	// (0x00063db5) aid_size_touch_image3_arrow_left_ParamLimits

0x57dc,	// (0x00063db5) aid_size_touch_image3_arrow_left

0x5808,	// (0x00063de1) aid_size_touch_image3_arrow_right_ParamLimits

0x5808,	// (0x00063de1) aid_size_touch_image3_arrow_right

0xbdd4,	// (0x0006a3ad) vid4_progress_pane_t3

0x5624,	// (0x00063bfd) main_hwr_training_symbol_option_pane_ParamLimits

0x5624,	// (0x00063bfd) main_hwr_training_symbol_option_pane

0xb195,	// (0x0006976e) popup_hwr_training_preview_window_ParamLimits

0xb195,	// (0x0006976e) popup_hwr_training_preview_window

0x5644,	// (0x00063c1d) hwr_training_navi_pane_g5_ParamLimits

0x5644,	// (0x00063c1d) hwr_training_navi_pane_g5

0xb752,	// (0x00069d2b) popup_char_count_window

0xa051,	// (0x0006862a) bg_popup_sub_pane_cp20_ParamLimits

0x68b9,	// (0x00064e92) list_vitu2_match_list_pane_ParamLimits

0x68c5,	// (0x00064e9e) vitu2_page_scroll_pane_ParamLimits

0x68c5,	// (0x00064e9e) vitu2_page_scroll_pane

0xbe0b,	// (0x0006a3e4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbe0b,	// (0x0006a3e4) list_single_hwr_training_symbol_option_pane

0xbe1e,	// (0x0006a3f7) list_single_hwr_training_symbol_option_pane_g1

0xbe26,	// (0x0006a3ff) list_single_hwr_training_symbol_option_pane_t1

0xbe34,	// (0x0006a40d) bg_button_pane_cp023

0xbe3d,	// (0x0006a416) bg_button_pane_cp024

0xbe70,	// (0x0006a449) vitu2_page_scroll_pane_g1

0xbe78,	// (0x0006a451) vitu2_page_scroll_pane_g2

0x0001,

0xf99f,	// (0x0006df78) vitu2_page_scroll_pane_g

0xbe80,	// (0x0006a459) vitu2_page_scroll_pane_t1

0xa82a,	// (0x00068e03) popup_char_count_window_g1

0xbe8f,	// (0x0006a468) popup_char_count_window_g2

0xbe98,	// (0x0006a471) popup_char_count_window_g3

0x0002,

0xf9a4,	// (0x0006df7d) popup_char_count_window_g

0xbea1,	// (0x0006a47a) popup_char_count_window_t1

0xa05f,	// (0x00068638) main_vded2_pane

0xafe3,	// (0x000695bc) aid_size_cell_imed_line

0xafed,	// (0x000695c6) grid_imed_line_width_pane

0xb6d1,	// (0x00069caa) vid4_indicators_pane_g4

0xbeaf,	// (0x0006a488) cell_imed_line_width_pane_ParamLimits

0xbeaf,	// (0x0006a488) cell_imed_line_width_pane

0xbec3,	// (0x0006a49c) cell_imed_line_width_pane_g1

0xbecc,	// (0x0006a4a5) cell_imed_line_width_pane_g2

0x0001,

0xf9ab,	// (0x0006df84) cell_imed_line_width_pane_g

0x6f1a,	// (0x000654f3) main_vded2_pane_g1_ParamLimits

0x6f1a,	// (0x000654f3) main_vded2_pane_g1

0x6f30,	// (0x00065509) main_vded2_pane_g2_ParamLimits

0x6f30,	// (0x00065509) main_vded2_pane_g2

0x0001,

0xf9b0,	// (0x0006df89) main_vded2_pane_g_ParamLimits

0xf9b0,	// (0x0006df89) main_vded2_pane_g

0x6f42,	// (0x0006551b) vded2_slider_pane_ParamLimits

0x6f42,	// (0x0006551b) vded2_slider_pane

0x6f52,	// (0x0006552b) aid_size_touch_vded2_end

0x6f5c,	// (0x00065535) aid_size_touch_vded2_playhead

0xbed4,	// (0x0006a4ad) aid_size_touch_vded2_start

0xbedc,	// (0x0006a4b5) vded2_slider_bg_pane

0xbee5,	// (0x0006a4be) vded2_slider_pane_g1

0xbeee,	// (0x0006a4c7) vded2_slider_pane_g2

0x6f66,	// (0x0006553f) vded2_slider_pane_g3

0x0002,

0xf9b5,	// (0x0006df8e) vded2_slider_pane_g

0xbef6,	// (0x0006a4cf) vded2_slider_bg_pane_g1

0xbeff,	// (0x0006a4d8) vded2_slider_bg_pane_g2

0xbf08,	// (0x0006a4e1) vded2_slider_bg_pane_g3

0x0002,

0xf9bc,	// (0x0006df95) vded2_slider_bg_pane_g

0x2d6b,	// (0x00061344) aid_postcard_touch_down_pane_ParamLimits

0x2d6b,	// (0x00061344) aid_postcard_touch_down_pane

0x2d81,	// (0x0006135a) aid_postcard_touch_up_pane_ParamLimits

0x2d81,	// (0x0006135a) aid_postcard_touch_up_pane

0xa05f,	// (0x00068638) main_blid2_pane

0xa5a4,	// (0x00068b7d) popup_blid2_search_window

0xd923,	// (0x0006befc) blid2_gps_pane

0xd923,	// (0x0006befc) blid2_navig_pane

0xd923,	// (0x0006befc) blid2_search_pane

0xd923,	// (0x0006befc) blid2_tripm_pane

0x6f71,	// (0x0006554a) blid2_search_pane_g1_ParamLimits

0x6f71,	// (0x0006554a) blid2_search_pane_g1

0x6f8b,	// (0x00065564) blid2_search_pane_t1_ParamLimits

0x6f8b,	// (0x00065564) blid2_search_pane_t1

0x6f9d,	// (0x00065576) aid_size_cell_blid2_gps_ParamLimits

0x6f9d,	// (0x00065576) aid_size_cell_blid2_gps

0x6fb5,	// (0x0006558e) blid2_gps_pane_g1_ParamLimits

0x6fb5,	// (0x0006558e) blid2_gps_pane_g1

0x6fc9,	// (0x000655a2) grid_blid2_satellite_pane_ParamLimits

0x6fc9,	// (0x000655a2) grid_blid2_satellite_pane

0x6fe3,	// (0x000655bc) blid2_navig_pane_g1_ParamLimits

0x6fe3,	// (0x000655bc) blid2_navig_pane_g1

0x6fef,	// (0x000655c8) blid2_navig_pane_t1_ParamLimits

0x6fef,	// (0x000655c8) blid2_navig_pane_t1

0x700a,	// (0x000655e3) blid2_navig_pane_t2_ParamLimits

0x700a,	// (0x000655e3) blid2_navig_pane_t2

0x0001,

0xf9c3,	// (0x0006df9c) blid2_navig_pane_t_ParamLimits

0xf9c3,	// (0x0006df9c) blid2_navig_pane_t

0x7025,	// (0x000655fe) blid2_navig_ring_pane_ParamLimits

0x7025,	// (0x000655fe) blid2_navig_ring_pane

0x703e,	// (0x00065617) blid2_speed_pane_ParamLimits

0x703e,	// (0x00065617) blid2_speed_pane

0x704a,	// (0x00065623) blid2_tripm_pane_g1_ParamLimits

0x704a,	// (0x00065623) blid2_tripm_pane_g1

0x7063,	// (0x0006563c) blid2_tripm_pane_g2_ParamLimits

0x7063,	// (0x0006563c) blid2_tripm_pane_g2

0x7077,	// (0x00065650) blid2_tripm_pane_g3_ParamLimits

0x7077,	// (0x00065650) blid2_tripm_pane_g3

0x708b,	// (0x00065664) blid2_tripm_pane_g4_ParamLimits

0x708b,	// (0x00065664) blid2_tripm_pane_g4

0x709f,	// (0x00065678) blid2_tripm_pane_g5_ParamLimits

0x709f,	// (0x00065678) blid2_tripm_pane_g5

0x0005,

0xf9c8,	// (0x0006dfa1) blid2_tripm_pane_g_ParamLimits

0xf9c8,	// (0x0006dfa1) blid2_tripm_pane_g

0x70c5,	// (0x0006569e) blid2_tripm_pane_t1_ParamLimits

0x70c5,	// (0x0006569e) blid2_tripm_pane_t1

0x70e0,	// (0x000656b9) blid2_tripm_pane_t2_ParamLimits

0x70e0,	// (0x000656b9) blid2_tripm_pane_t2

0x70f9,	// (0x000656d2) blid2_tripm_pane_t3_ParamLimits

0x70f9,	// (0x000656d2) blid2_tripm_pane_t3

0x0003,

0xf9d5,	// (0x0006dfae) blid2_tripm_pane_t_ParamLimits

0xf9d5,	// (0x0006dfae) blid2_tripm_pane_t

0x7140,	// (0x00065719) cell_blid2_satellite_pane_ParamLimits

0x7140,	// (0x00065719) cell_blid2_satellite_pane

0x715e,	// (0x00065737) cell_blid2_satellite_pane_g1

0xbf11,	// (0x0006a4ea) cell_blid2_satellite_pane_t1

0xe38f,	// (0x0006c968) blid2_speed_pane_g1

0xbf1f,	// (0x0006a4f8) blid2_speed_pane_t1

0xbf2d,	// (0x0006a506) blid2_speed_pane_t2

0x0001,

0xf9de,	// (0x0006dfb7) blid2_speed_pane_t

0xe38f,	// (0x0006c968) blid2_navig_ring_pane_g1

0x7167,	// (0x00065740) blid2_navig_ring_pane_g2

0x716f,	// (0x00065748) blid2_navig_ring_pane_g3

0x7177,	// (0x00065750) blid2_navig_ring_pane_g4

0x717f,	// (0x00065758) blid2_navig_ring_pane_g5

0x0004,

0xf9e3,	// (0x0006dfbc) blid2_navig_ring_pane_g

0xd923,	// (0x0006befc) bg_popup_window_pane_cp011

0xbf3b,	// (0x0006a514) popup_blid2_search_window_g1

0xbf43,	// (0x0006a51c) popup_blid2_search_window_t1

0xbf51,	// (0x0006a52a) popup_blid2_search_window_t2

0x0001,

0xf9ee,	// (0x0006dfc7) popup_blid2_search_window_t

0xe70d,	// (0x0006cce6) main_browser_pane_g1

0xe3ed,	// (0x0006c9c6) main_browser_pane_ParamLimits

0xa051,	// (0x0006862a) bg_button_pane_cp011_ParamLimits

0x6190,	// (0x00064769) cell_vitu2_function_pane_g1_ParamLimits

0x28ee,	// (0x00060ec7) bg_popup_sub_pane_cp22_ParamLimits

0x6a43,	// (0x0006501c) input_focus_pane_cp08_ParamLimits

0x6a5e,	// (0x00065037) popup_vitu2_query_button_pane_ParamLimits

0x6a5e,	// (0x00065037) popup_vitu2_query_button_pane

0x6a6d,	// (0x00065046) popup_vitu2_query_input_button_pane

0xba9a,	// (0x0006a073) popup_vitu2_query_window_g1_ParamLimits

0x6a75,	// (0x0006504e) popup_vitu2_query_window_g2_ParamLimits

0xf8ef,	// (0x0006dec8) popup_vitu2_query_window_g_ParamLimits

0xd923,	// (0x0006befc) bg_button_pane_cp026

0x7187,	// (0x00065760) popup_vitu2_query_input_button_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp025

0xbf5f,	// (0x0006a538) popup_vitu2_query_button_pane_t1

0x48b9,	// (0x00062e92) main_mp3_pane_t6

0x48c7,	// (0x00062ea0) popup_slider_window_cp01

0xb635,	// (0x00069c0e) cam4_battery_pane

0xb68e,	// (0x00069c67) cam4_battery_pane_cp02

0xbd7f,	// (0x0006a358) cam4_battery_pane_cp01

0xbd7f,	// (0x0006a358) cam4_battery_pane_cp03

0xa833,	// (0x00068e0c) cam4_battery_pane_g1

0xe38f,	// (0x0006c968) cam4_battery_pane_g2

0x0001,

0xf9f3,	// (0x0006dfcc) cam4_battery_pane_g

0xa9a5,	// (0x00068f7e) popup_blid_sat_info2_window_t11

0xee42,	// (0x0006d41b) aid_size_touch_mv_arrow_left_ParamLimits

0xee6b,	// (0x0006d444) aid_size_touch_mv_arrow_right_ParamLimits

0xeec9,	// (0x0006d4a2) navi_pane_g1_ParamLimits

0xeed5,	// (0x0006d4ae) navi_pane_g2_ParamLimits

0xef03,	// (0x0006d4dc) navi_pane_g3_ParamLimits

0xf30c,	// (0x0006d8e5) navi_pane_g_ParamLimits

0x27e5,	// (0x00060dbe) navi_pane_mv_t1_ParamLimits

0x54b3,	// (0x00063a8c) grid_imed_effect_pane_ParamLimits

0x155c,	// (0x0005fb35) aid_placing_vt_slider_lsc

0xe65c,	// (0x0006cc35) aid_placing_vt_slider_prt

0xdbd9,	// (0x0006c1b2) bg_tb_trans_pane_cp01_ParamLimits

0xac25,	// (0x000691fe) popup_image_details_window_g1_ParamLimits

0xac38,	// (0x00069211) popup_image_details_window_g2_ParamLimits

0xac4d,	// (0x00069226) popup_image_details_window_g3_ParamLimits

0xac4d,	// (0x00069226) popup_image_details_window_g3

0xf605,	// (0x0006dbde) popup_image_details_window_g_ParamLimits

0xac61,	// (0x0006923a) popup_image_details_window_t1_ParamLimits

0xac73,	// (0x0006924c) popup_image_details_window_t2_ParamLimits

0xac8c,	// (0x00069265) popup_image_details_window_t3_ParamLimits

0xaca0,	// (0x00069279) popup_image_details_window_t4_ParamLimits

0xacbb,	// (0x00069294) popup_image_details_window_t5_ParamLimits

0xf60c,	// (0x0006dbe5) popup_image_details_window_t_ParamLimits

0x6dd9,	// (0x000653b2) cl_header_name_pane_ParamLimits

0x6dd9,	// (0x000653b2) cl_header_name_pane

0x718f,	// (0x00065768) cl_header_name_pane_t1_ParamLimits

0x718f,	// (0x00065768) cl_header_name_pane_t1

0x71b0,	// (0x00065789) cl_header_name_pane_t2_ParamLimits

0x71b0,	// (0x00065789) cl_header_name_pane_t2

0x71f2,	// (0x000657cb) cl_header_name_pane_t3_ParamLimits

0x71f2,	// (0x000657cb) cl_header_name_pane_t3

0x0002,

0xf9f8,	// (0x0006dfd1) cl_header_name_pane_t_ParamLimits

0xf9f8,	// (0x0006dfd1) cl_header_name_pane_t

0xef92,	// (0x0006d56b) navi_pane_mv_g2_ParamLimits

0xb71d,	// (0x00069cf6) field_vitu2_entry_pane_g1_ParamLimits

0xb729,	// (0x00069d02) field_vitu2_entry_pane_g2_ParamLimits

0x28cc,	// (0x00060ea5) field_vitu2_entry_pane_g3_ParamLimits

0x28cc,	// (0x00060ea5) field_vitu2_entry_pane_g3

0xf7f8,	// (0x0006ddd1) field_vitu2_entry_pane_g_ParamLimits

0x6020,	// (0x000645f9) cell_vitu2_itu_pane_g1_ParamLimits

0x6038,	// (0x00064611) cell_vitu2_itu_pane_g2_ParamLimits

0x6038,	// (0x00064611) cell_vitu2_itu_pane_g2

0x0001,

0xf804,	// (0x0006dddd) cell_vitu2_itu_pane_g_ParamLimits

0xf804,	// (0x0006dddd) cell_vitu2_itu_pane_g

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp05_ParamLimits

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp05

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp03

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp04

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp10_ParamLimits

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp10

0x6d7d,	// (0x00065356) bg_vkb2_func_pane_cp08

0x6d56,	// (0x0006532f) bg_vkb2_func_pane_cp06

0x6d62,	// (0x0006533b) bg_vkb2_func_pane_cp07

0xbe46,	// (0x0006a41f) bg_vkb2_func_pane_cp11_ParamLimits

0xbe46,	// (0x0006a41f) bg_vkb2_func_pane_cp11

0xbe5b,	// (0x0006a434) bg_vkb2_func_pane_cp12_ParamLimits

0xbe5b,	// (0x0006a434) bg_vkb2_func_pane_cp12

0xd923,	// (0x0006befc) bg_vkb2_func_pane_cp09

0xb764,	// (0x00069d3d) bg_vkb2_func_pane_g1

0xe81e,	// (0x0006cdf7) bg_vkb2_func_pane_g2

0xb76c,	// (0x00069d45) bg_vkb2_func_pane_g3

0xb774,	// (0x00069d4d) bg_vkb2_func_pane_g4

0xba3f,	// (0x0006a018) bg_vkb2_func_pane_g5

0xb78c,	// (0x00069d65) bg_vkb2_func_pane_g6

0xb794,	// (0x00069d6d) bg_vkb2_func_pane_g7

0xb784,	// (0x00069d5d) bg_vkb2_func_pane_g8

0xe7fe,	// (0x0006cdd7) bg_vkb2_func_pane_g9

0x0008,

0xf9ff,	// (0x0006dfd8) bg_vkb2_func_pane_g

0x70b3,	// (0x0006568c) blid2_tripm_pane_g6_ParamLimits

0x70b3,	// (0x0006568c) blid2_tripm_pane_g6

0xb512,	// (0x00069aeb) mp4_progress_pane_g1

0x712c,	// (0x00065705) blid2_tripm_values_pane_ParamLimits

0x712c,	// (0x00065705) blid2_tripm_values_pane

0x7223,	// (0x000657fc) blid2_tripm_values_pane_t1

0x7231,	// (0x0006580a) blid2_tripm_values_pane_t2

0x723f,	// (0x00065818) blid2_tripm_values_pane_t3

0x724d,	// (0x00065826) blid2_tripm_values_pane_t4

0x725b,	// (0x00065834) blid2_tripm_values_pane_t5

0x7269,	// (0x00065842) blid2_tripm_values_pane_t6

0x7277,	// (0x00065850) blid2_tripm_values_pane_t7

0x7285,	// (0x0006585e) blid2_tripm_values_pane_t8

0x7293,	// (0x0006586c) blid2_tripm_values_pane_t9

0x0008,

0xfa12,	// (0x0006dfeb) blid2_tripm_values_pane_t

0x159e,	// (0x0005fb77) call_video_pane_t1_ParamLimits

0x15bc,	// (0x0005fb95) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0006d793) call_video_pane_t_ParamLimits

0x2c36,	// (0x0006120f) msg_header_pane_g1_ParamLimits

0x2c44,	// (0x0006121d) msg_header_pane_g2_ParamLimits

0x2c44,	// (0x0006121d) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0006d983) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0006d983) msg_header_pane_g

0xe3ed,	// (0x0006c9c6) main_clock2_pane_ParamLimits

0x51a8,	// (0x00063781) grid_clock2_toolbar_pane_ParamLimits

0x51a8,	// (0x00063781) grid_clock2_toolbar_pane

0x51a8,	// (0x00063781) listscroll_clock2_pane_ParamLimits

0x51a8,	// (0x00063781) listscroll_clock2_pane

0x528c,	// (0x00063865) main_clock2_pane_t3_ParamLimits

0x528c,	// (0x00063865) main_clock2_pane_t3

0x52b0,	// (0x00063889) main_clock2_pane_t4_ParamLimits

0x52b0,	// (0x00063889) main_clock2_pane_t4

0xbf6d,	// (0x0006a546) cell_clock2_toolbar_pane

0xbf75,	// (0x0006a54e) cell_clock2_toolbar_pane_cp01

0xbf75,	// (0x0006a54e) cell_clock2_toolbar_pane_cp02

0xbf7d,	// (0x0006a556) cell_clock2_toolbar_pane_cp03

0xbf85,	// (0x0006a55e) list_clock2_pane

0xedb8,	// (0x0006d391) scroll_pane_cp10

0xbf8d,	// (0x0006a566) list_single_clock2_pane_ParamLimits

0xbf8d,	// (0x0006a566) list_single_clock2_pane

0xe605,	// (0x0006cbde) list_highlight_pane_cp08

0xbf9a,	// (0x0006a573) list_single_clock2_pane_t1

0xbfa8,	// (0x0006a581) list_single_clock2_pane_t2

0x0001,

0xfa25,	// (0x0006dffe) list_single_clock2_pane_t

0xd923,	// (0x0006befc) bg_button_pane_cp10

0xbfb6,	// (0x0006a58f) cell_clock2_toolbar_pane_g1

0x2ce9,	// (0x000612c2) aid_main_viewer_pane_g1_ParamLimits

0x2ce9,	// (0x000612c2) aid_main_viewer_pane_g1

0x2cf7,	// (0x000612d0) aid_main_viewer_pane_g2_ParamLimits

0x2cf7,	// (0x000612d0) aid_main_viewer_pane_g2

0x2d05,	// (0x000612de) aid_main_viewer_pane_g3_ParamLimits

0x2d05,	// (0x000612de) aid_main_viewer_pane_g3

0x2d14,	// (0x000612ed) aid_main_viewer_pane_g4_ParamLimits

0x2d14,	// (0x000612ed) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0006d994) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0006d994) aid_main_viewer_pane_g

0x4288,	// (0x00062861) main_calc_pane_ParamLimits

0x429c,	// (0x00062875) main_dialer2_pane_ParamLimits

0xa05f,	// (0x00068638) main_cam6_pane

0xa05f,	// (0x00068638) main_vid6_pane

0x51b4,	// (0x0006378d) listscroll_gen_pane_cp06_ParamLimits

0x51b4,	// (0x0006378d) listscroll_gen_pane_cp06

0x52d3,	// (0x000638ac) main_clock2_pane_t5_ParamLimits

0x52d3,	// (0x000638ac) main_clock2_pane_t5

0x5331,	// (0x0006390a) aid_call2_pane_cp10_ParamLimits

0x5343,	// (0x0006391c) aid_call_pane_cp10_ParamLimits

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5355,	// (0x0006392e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5355,	// (0x0006392e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee36,	// (0x0006d40f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6c1,	// (0x0006dc9a) popup_clock_analogue_window_cp10_g_ParamLimits

0x536b,	// (0x00063944) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb57d,	// (0x00069b56) cell_dialer2_keypad_pane_g2_ParamLimits

0xb57d,	// (0x00069b56) cell_dialer2_keypad_pane_g2

0x0001,

0xf797,	// (0x0006dd70) cell_dialer2_keypad_pane_g_ParamLimits

0xf797,	// (0x0006dd70) cell_dialer2_keypad_pane_g

0xe399,	// (0x0006c972) cell_dialer2_keypad_pane_t1

0x649f,	// (0x00064a78) main_cset_text2_pane_ParamLimits

0x649f,	// (0x00064a78) main_cset_text2_pane

0xbc86,	// (0x0006a25f) area_vitu2_query_pane_g1_ParamLimits

0x6cf7,	// (0x000652d0) area_vitu2_query_pane_g2_ParamLimits

0xf942,	// (0x0006df1b) area_vitu2_query_pane_g_ParamLimits

0xbd0a,	// (0x0006a2e3) area_vitu2_query_pane_t7_ParamLimits

0xbd0a,	// (0x0006a2e3) area_vitu2_query_pane_t7

0x6d56,	// (0x0006532f) bg_button_pane_cp018_ParamLimits

0x6d62,	// (0x0006533b) bg_button_pane_cp021_ParamLimits

0x6d6e,	// (0x00065347) bg_button_pane_cp022_ParamLimits

0x6d7d,	// (0x00065356) bg_vkb2_func_pane_cp08_ParamLimits

0x6d56,	// (0x0006532f) bg_vkb2_func_pane_cp06_ParamLimits

0x6d62,	// (0x0006533b) bg_vkb2_func_pane_cp07_ParamLimits

0x6d8d,	// (0x00065366) input_focus_pane_cp09_ParamLimits

0x72a1,	// (0x0006587a) cam6_autofocus_pane_ParamLimits

0x72a1,	// (0x0006587a) cam6_autofocus_pane

0x72ad,	// (0x00065886) cam6_image_uncrop_pane_ParamLimits

0x72ad,	// (0x00065886) cam6_image_uncrop_pane

0x72bd,	// (0x00065896) cam6_indi_pane_ParamLimits

0x72bd,	// (0x00065896) cam6_indi_pane

0x72d3,	// (0x000658ac) cam6_mode_pane_ParamLimits

0x72d3,	// (0x000658ac) cam6_mode_pane

0x72e5,	// (0x000658be) cam6_timer_pane_ParamLimits

0x72e5,	// (0x000658be) cam6_timer_pane

0x72f1,	// (0x000658ca) cam6_zoom_pane_ParamLimits

0x72f1,	// (0x000658ca) cam6_zoom_pane

0x72fe,	// (0x000658d7) cam6_mode_pane_g1_ParamLimits

0x72fe,	// (0x000658d7) cam6_mode_pane_g1

0x730e,	// (0x000658e7) cam6_mode_pane_g2_ParamLimits

0x730e,	// (0x000658e7) cam6_mode_pane_g2

0x731e,	// (0x000658f7) cam6_mode_pane_g3_ParamLimits

0x731e,	// (0x000658f7) cam6_mode_pane_g3

0x732e,	// (0x00065907) cam6_mode_pane_g4_ParamLimits

0x732e,	// (0x00065907) cam6_mode_pane_g4

0x0003,

0xfa2a,	// (0x0006e003) cam6_mode_pane_g_ParamLimits

0xfa2a,	// (0x0006e003) cam6_mode_pane_g

0xbfcc,	// (0x0006a5a5) bg_tb_trans_pane_cp08_ParamLimits

0xbfcc,	// (0x0006a5a5) bg_tb_trans_pane_cp08

0xbfda,	// (0x0006a5b3) cam6_battery_pane_ParamLimits

0xbfda,	// (0x0006a5b3) cam6_battery_pane

0xbff0,	// (0x0006a5c9) cam6_indi_pane_g1_ParamLimits

0xbff0,	// (0x0006a5c9) cam6_indi_pane_g1

0xc002,	// (0x0006a5db) cam6_indi_pane_g2_ParamLimits

0xc002,	// (0x0006a5db) cam6_indi_pane_g2

0xc014,	// (0x0006a5ed) cam6_indi_pane_g3_ParamLimits

0xc014,	// (0x0006a5ed) cam6_indi_pane_g3

0x0002,

0xfa33,	// (0x0006e00c) cam6_indi_pane_g_ParamLimits

0xfa33,	// (0x0006e00c) cam6_indi_pane_g

0xc026,	// (0x0006a5ff) cam6_indi_pane_t1_ParamLimits

0xc026,	// (0x0006a5ff) cam6_indi_pane_t1

0x5dc3,	// (0x0006439c) cam6_autofocus_pane_g1

0x5dbb,	// (0x00064394) cam6_autofocus_pane_g2

0x5dd3,	// (0x000643ac) cam6_autofocus_pane_g3

0x5dcb,	// (0x000643a4) cam6_autofocus_pane_g4

0x0003,

0xfa3a,	// (0x0006e013) cam6_autofocus_pane_g

0xc04c,	// (0x0006a625) cam6_timer_pane_g1

0xc054,	// (0x0006a62d) cam6_timer_pane_t1

0xc062,	// (0x0006a63b) cam6_zoom_cont_pane

0xc06a,	// (0x0006a643) cam6_zoom_pane_g1

0xc073,	// (0x0006a64c) cam6_zoom_pane_g2

0x733e,	// (0x00065917) cam6_zoom_pane_g3

0x0002,

0xfa43,	// (0x0006e01c) cam6_zoom_pane_g

0xe38f,	// (0x0006c968) cam6_battery_pane_g1

0xe38f,	// (0x0006c968) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0006d665) cam6_battery_pane_g

0xc06a,	// (0x0006a643) cam6_zoom_cont_pane_g1

0xc073,	// (0x0006a64c) cam6_zoom_cont_pane_g2

0xc07c,	// (0x0006a655) cam6_zoom_cont_pane_g3

0x0002,

0xfa4a,	// (0x0006e023) cam6_zoom_cont_pane_g

0x7359,	// (0x00065932) cam6_mode_pane_cp_ParamLimits

0x7359,	// (0x00065932) cam6_mode_pane_cp

0x736b,	// (0x00065944) cam6_zoom_pane_cp_ParamLimits

0x736b,	// (0x00065944) cam6_zoom_pane_cp

0x7377,	// (0x00065950) vid6_image_uncrop_cif_pane_ParamLimits

0x7377,	// (0x00065950) vid6_image_uncrop_cif_pane

0x7387,	// (0x00065960) vid6_image_uncrop_nhd_pane_ParamLimits

0x7387,	// (0x00065960) vid6_image_uncrop_nhd_pane

0x7396,	// (0x0006596f) vid6_image_uncrop_vga_pane_ParamLimits

0x7396,	// (0x0006596f) vid6_image_uncrop_vga_pane

0x73a5,	// (0x0006597e) vid6_image_uncrop_wvga_pane_ParamLimits

0x73a5,	// (0x0006597e) vid6_image_uncrop_wvga_pane

0x73b4,	// (0x0006598d) vid6_indi_pane_ParamLimits

0x73b4,	// (0x0006598d) vid6_indi_pane

0xbfcc,	// (0x0006a5a5) bg_tb_trans_pane_cp09_ParamLimits

0xbfcc,	// (0x0006a5a5) bg_tb_trans_pane_cp09

0xc094,	// (0x0006a66d) cam6_battery_pane_cp_ParamLimits

0xc094,	// (0x0006a66d) cam6_battery_pane_cp

0xc0a0,	// (0x0006a679) vid6_indi_pane_g1_ParamLimits

0xc0a0,	// (0x0006a679) vid6_indi_pane_g1

0xc0b2,	// (0x0006a68b) vid6_indi_pane_g2_ParamLimits

0xc0b2,	// (0x0006a68b) vid6_indi_pane_g2

0xc0c4,	// (0x0006a69d) vid6_indi_pane_g3_ParamLimits

0xc0c4,	// (0x0006a69d) vid6_indi_pane_g3

0xc0d9,	// (0x0006a6b2) vid6_indi_pane_g4_ParamLimits

0xc0d9,	// (0x0006a6b2) vid6_indi_pane_g4

0xc0ee,	// (0x0006a6c7) vid6_indi_pane_g5_ParamLimits

0xc0ee,	// (0x0006a6c7) vid6_indi_pane_g5

0x0004,

0xfa51,	// (0x0006e02a) vid6_indi_pane_g_ParamLimits

0xfa51,	// (0x0006e02a) vid6_indi_pane_g

0xc108,	// (0x0006a6e1) vid6_indi_pane_t1_ParamLimits

0xc108,	// (0x0006a6e1) vid6_indi_pane_t1

0xc11e,	// (0x0006a6f7) vid6_indi_pane_t2_ParamLimits

0xc11e,	// (0x0006a6f7) vid6_indi_pane_t2

0xc146,	// (0x0006a71f) vid6_indi_pane_t3_ParamLimits

0xc146,	// (0x0006a71f) vid6_indi_pane_t3

0xc16e,	// (0x0006a747) vid6_indi_pane_t4_ParamLimits

0xc16e,	// (0x0006a747) vid6_indi_pane_t4

0x0003,

0xfa5c,	// (0x0006e035) vid6_indi_pane_t_ParamLimits

0xfa5c,	// (0x0006e035) vid6_indi_pane_t

0xc192,	// (0x0006a76b) wait_bar_pane_cp08

0x73cc,	// (0x000659a5) main_cset_text2_pane_t1_ParamLimits

0x73cc,	// (0x000659a5) main_cset_text2_pane_t1

0x7347,	// (0x00065920) listscroll_gen_pane_cp06_t1_ParamLimits

0x7347,	// (0x00065920) listscroll_gen_pane_cp06_t1

0xa05f,	// (0x00068638) main_cam6_set_pane

0xcd56,	// (0x0006b32f) bg_tb_trans_pane_cp06_ParamLimits

0xb63d,	// (0x00069c16) cam4_indicators_pane_g1_ParamLimits

0xb64e,	// (0x00069c27) cam4_indicators_pane_g2_ParamLimits

0xf7d4,	// (0x0006ddad) cam4_indicators_pane_g_ParamLimits

0xb66c,	// (0x00069c45) cam4_indicators_pane_t1_ParamLimits

0xa051,	// (0x0006862a) bg_tb_trans_pane_cp07_ParamLimits

0xb698,	// (0x00069c71) vid4_indicators_pane_g1_ParamLimits

0xb6ac,	// (0x00069c85) vid4_indicators_pane_g2_ParamLimits

0xb6c0,	// (0x00069c99) vid4_indicators_pane_g3_ParamLimits

0xb6d1,	// (0x00069caa) vid4_indicators_pane_g4_ParamLimits

0xf7e6,	// (0x0006ddbf) vid4_indicators_pane_g_ParamLimits

0xb6ef,	// (0x00069cc8) vid4_indicators_pane_t1_ParamLimits

0xbd87,	// (0x0006a360) vid4_progress_pane_g1_ParamLimits

0xbd97,	// (0x0006a370) vid4_progress_pane_g2_ParamLimits

0x6ec9,	// (0x000654a2) vid4_progress_pane_g3_ParamLimits

0xbda7,	// (0x0006a380) vid4_progress_pane_g4_ParamLimits

0xf98d,	// (0x0006df66) vid4_progress_pane_g_ParamLimits

0x6edb,	// (0x000654b4) vid4_progress_pane_t1_ParamLimits

0xbdbf,	// (0x0006a398) vid4_progress_pane_t2_ParamLimits

0xbdd4,	// (0x0006a3ad) vid4_progress_pane_t3_ParamLimits

0xf998,	// (0x0006df71) vid4_progress_pane_t_ParamLimits

0x6ef3,	// (0x000654cc) wait_bar_pane_cp07_ParamLimits

0x73e9,	// (0x000659c2) main_cam6_set_pane_g2_ParamLimits

0x73e9,	// (0x000659c2) main_cam6_set_pane_g2

0x740d,	// (0x000659e6) main_cset6_listscroll_pane_ParamLimits

0x740d,	// (0x000659e6) main_cset6_listscroll_pane

0x742d,	// (0x00065a06) main_cset6_slider_pane_ParamLimits

0x742d,	// (0x00065a06) main_cset6_slider_pane

0x7443,	// (0x00065a1c) main_cset6_text2_pane_ParamLimits

0x7443,	// (0x00065a1c) main_cset6_text2_pane

0xc1a1,	// (0x0006a77a) main_cset6_text_pane

0xc1a9,	// (0x0006a782) main_cset_list_pane_copy1_ParamLimits

0xc1a9,	// (0x0006a782) main_cset_list_pane_copy1

0xc1b9,	// (0x0006a792) scroll_pane_cp028_copy1

0x7451,	// (0x00065a2a) cset_list_set_pane_copy1

0x7462,	// (0x00065a3b) aid_position_infowindow_above_copy1

0x746a,	// (0x00065a43) aid_position_infowindow_below_copy1

0x7472,	// (0x00065a4b) cset_list_set_pane_g1_copy1

0x747a,	// (0x00065a53) cset_list_set_pane_g3_copy1_ParamLimits

0x747a,	// (0x00065a53) cset_list_set_pane_g3_copy1

0x7489,	// (0x00065a62) cset_list_set_pane_t1_copy1_ParamLimits

0x7489,	// (0x00065a62) cset_list_set_pane_t1_copy1

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp021_copy1_ParamLimits

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp021_copy1

0xc1c2,	// (0x0006a79b) cset6_slider_pane_ParamLimits

0xc1c2,	// (0x0006a79b) cset6_slider_pane

0xc1ee,	// (0x0006a7c7) main_cset6_slider_pane_g1_ParamLimits

0xc1ee,	// (0x0006a7c7) main_cset6_slider_pane_g1

0x749e,	// (0x00065a77) main_cset6_slider_pane_g2_ParamLimits

0x749e,	// (0x00065a77) main_cset6_slider_pane_g2

0xc216,	// (0x0006a7ef) main_cset6_slider_pane_g3_ParamLimits

0xc216,	// (0x0006a7ef) main_cset6_slider_pane_g3

0x74c6,	// (0x00065a9f) main_cset6_slider_pane_g4_ParamLimits

0x74c6,	// (0x00065a9f) main_cset6_slider_pane_g4

0x74d2,	// (0x00065aab) main_cset6_slider_pane_g5_ParamLimits

0x74d2,	// (0x00065aab) main_cset6_slider_pane_g5

0xb8b9,	// (0x00069e92) main_cset6_slider_pane_g7_ParamLimits

0xb8b9,	// (0x00069e92) main_cset6_slider_pane_g7

0xb8c5,	// (0x00069e9e) main_cset6_slider_pane_g8_ParamLimits

0xb8c5,	// (0x00069e9e) main_cset6_slider_pane_g8

0x6545,	// (0x00064b1e) main_cset6_slider_pane_g9_ParamLimits

0x6545,	// (0x00064b1e) main_cset6_slider_pane_g9

0x6551,	// (0x00064b2a) main_cset6_slider_pane_g10_ParamLimits

0x6551,	// (0x00064b2a) main_cset6_slider_pane_g10

0x655d,	// (0x00064b36) main_cset6_slider_pane_g11_ParamLimits

0x655d,	// (0x00064b36) main_cset6_slider_pane_g11

0x6569,	// (0x00064b42) main_cset6_slider_pane_g12_ParamLimits

0x6569,	// (0x00064b42) main_cset6_slider_pane_g12

0x6575,	// (0x00064b4e) main_cset6_slider_pane_g13_ParamLimits

0x6575,	// (0x00064b4e) main_cset6_slider_pane_g13

0x6581,	// (0x00064b5a) main_cset6_slider_pane_g14_ParamLimits

0x6581,	// (0x00064b5a) main_cset6_slider_pane_g14

0x74de,	// (0x00065ab7) main_cset6_slider_pane_g15_ParamLimits

0x74de,	// (0x00065ab7) main_cset6_slider_pane_g15

0x65a5,	// (0x00064b7e) main_cset6_slider_pane_g16_ParamLimits

0x65a5,	// (0x00064b7e) main_cset6_slider_pane_g16

0x65b1,	// (0x00064b8a) main_cset6_slider_pane_g17_ParamLimits

0x65b1,	// (0x00064b8a) main_cset6_slider_pane_g17

0x0011,

0xfa65,	// (0x0006e03e) main_cset6_slider_pane_g_ParamLimits

0xfa65,	// (0x0006e03e) main_cset6_slider_pane_g

0xc222,	// (0x0006a7fb) main_cset6_slider_pane_t1_ParamLimits

0xc222,	// (0x0006a7fb) main_cset6_slider_pane_t1

0x750e,	// (0x00065ae7) main_cset6_slider_pane_t2_ParamLimits

0x750e,	// (0x00065ae7) main_cset6_slider_pane_t2

0x7539,	// (0x00065b12) main_cset6_slider_pane_t3_ParamLimits

0x7539,	// (0x00065b12) main_cset6_slider_pane_t3

0x7564,	// (0x00065b3d) main_cset6_slider_pane_t4_ParamLimits

0x7564,	// (0x00065b3d) main_cset6_slider_pane_t4

0x758f,	// (0x00065b68) main_cset6_slider_pane_t5_ParamLimits

0x758f,	// (0x00065b68) main_cset6_slider_pane_t5

0xc263,	// (0x0006a83c) main_cset6_slider_pane_t7_ParamLimits

0xc263,	// (0x0006a83c) main_cset6_slider_pane_t7

0x75ba,	// (0x00065b93) main_cset6_slider_pane_t8_ParamLimits

0x75ba,	// (0x00065b93) main_cset6_slider_pane_t8

0x75de,	// (0x00065bb7) main_cset6_slider_pane_t9_ParamLimits

0x75de,	// (0x00065bb7) main_cset6_slider_pane_t9

0x7602,	// (0x00065bdb) main_cset6_slider_pane_t10_ParamLimits

0x7602,	// (0x00065bdb) main_cset6_slider_pane_t10

0x7626,	// (0x00065bff) main_cset6_slider_pane_t11_ParamLimits

0x7626,	// (0x00065bff) main_cset6_slider_pane_t11

0xc299,	// (0x0006a872) main_cset6_slider_pane_t14_ParamLimits

0xc299,	// (0x0006a872) main_cset6_slider_pane_t14

0xc2d2,	// (0x0006a8ab) main_cset6_slider_pane_t15_ParamLimits

0xc2d2,	// (0x0006a8ab) main_cset6_slider_pane_t15

0x000b,

0xfa8a,	// (0x0006e063) main_cset6_slider_pane_t_ParamLimits

0xfa8a,	// (0x0006e063) main_cset6_slider_pane_t

0xc30b,	// (0x0006a8e4) cset_slider_pane_g1_copy1

0xc314,	// (0x0006a8ed) cset_slider_pane_g2_copy1

0xc31d,	// (0x0006a8f6) cset_slider_pane_g3_copy1

0xd923,	// (0x0006befc) bg_popup_sub_pane_cp011_copy1

0xc326,	// (0x0006a8ff) main_cset_text_pane_g1_copy1

0xbaae,	// (0x0006a087) main_cset_text_pane_t1_copy1

0xbabc,	// (0x0006a095) main_cset_text_pane_t2_copy1

0xbaca,	// (0x0006a0a3) main_cset_text_pane_t3_copy1

0xbad8,	// (0x0006a0b1) main_cset_text_pane_t4_copy1

0xbae6,	// (0x0006a0bf) main_cset_text_pane_t5_copy1

0xc32e,	// (0x0006a907) main_cset_text_pane_t6_copy1

0xc33c,	// (0x0006a915) main_cset_text_pane_t7_copy1

0x73cc,	// (0x000659a5) main_cset_text2_pane_t1_copy1

0xa051,	// (0x0006862a) main_ncimui_pane

0x44e6,	// (0x00062abf) popup_query_ncimui_window_ParamLimits

0x44e6,	// (0x00062abf) popup_query_ncimui_window

0xad98,	// (0x00069371) field_cale_ev2_pane_g4_ParamLimits

0xad98,	// (0x00069371) field_cale_ev2_pane_g4

0x5731,	// (0x00063d0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5731,	// (0x00063d0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf76e,	// (0x0006dd47) cell_video_dialer_keypad_pane_g_ParamLimits

0xf76e,	// (0x0006dd47) cell_video_dialer_keypad_pane_g

0x5749,	// (0x00063d22) cell_video_dialer_keypad_pane_t1

0xd923,	// (0x0006befc) bg_popup_window_pane_cp012

0xec92,	// (0x0006d26b) heading_pane_cp06

0xc368,	// (0x0006a941) ncim_query_content_pane

0xd923,	// (0x0006befc) bg_popup_heading_pane_cp01

0xc370,	// (0x0006a949) ncim_heading_pane_t1

0xc37e,	// (0x0006a957) ncim_indicator_popup_pane

0xc390,	// (0x0006a969) ncim_query_button_pane

0xc3a4,	// (0x0006a97d) ncim_query_content_pane_t1

0xc3b6,	// (0x0006a98f) ncim_query_content_pane_t2

0x0005,

0xfab4,	// (0x0006e08d) ncim_query_content_pane_t

0xc3f0,	// (0x0006a9c9) ncim_query_list_pane

0xc402,	// (0x0006a9db) ncim_query_popup_pane

0xc37e,	// (0x0006a957) ncim_indicator_popup_pane_ParamLimits

0x7790,	// (0x00065d69) ncim_query_content_pane_g1_ParamLimits

0x7790,	// (0x00065d69) ncim_query_content_pane_g1

0xc3a4,	// (0x0006a97d) ncim_query_content_pane_t1_ParamLimits

0xc3b6,	// (0x0006a98f) ncim_query_content_pane_t2_ParamLimits

0x779c,	// (0x00065d75) ncim_query_content_pane_t3_ParamLimits

0x779c,	// (0x00065d75) ncim_query_content_pane_t3

0x77c4,	// (0x00065d9d) ncim_query_content_pane_t4_ParamLimits

0x77c4,	// (0x00065d9d) ncim_query_content_pane_t4

0x77ec,	// (0x00065dc5) ncim_query_content_pane_t5_ParamLimits

0x77ec,	// (0x00065dc5) ncim_query_content_pane_t5

0xc3c8,	// (0x0006a9a1) ncim_query_content_pane_t6_ParamLimits

0xc3c8,	// (0x0006a9a1) ncim_query_content_pane_t6

0xfab4,	// (0x0006e08d) ncim_query_content_pane_t_ParamLimits

0xc3f0,	// (0x0006a9c9) ncim_query_list_pane_ParamLimits

0xc402,	// (0x0006a9db) ncim_query_popup_pane_ParamLimits

0xc416,	// (0x0006a9ef) wait_bar_pane_cp04

0xd923,	// (0x0006befc) input_focus_pane_cp011

0xc41e,	// (0x0006a9f7) ncim_query_popup_pane_t1

0xc42c,	// (0x0006aa05) ncim_list_query_list_pane_ParamLimits

0xc42c,	// (0x0006aa05) ncim_list_query_list_pane

0xd923,	// (0x0006befc) bg_button_pane_cp027

0xc439,	// (0x0006aa12) ncim_query_button_pane_g1

0xd923,	// (0x0006befc) list_highlight_pane_cp012

0xc443,	// (0x0006aa1c) ncim_list_query_list_pane_g1

0xc44b,	// (0x0006aa24) ncim_list_query_list_pane_t1

0xb65d,	// (0x00069c36) cam4_indicators_pane_g3_ParamLimits

0xb65d,	// (0x00069c36) cam4_indicators_pane_g3

0xb6dd,	// (0x00069cb6) vid4_indicators_pane_g5_ParamLimits

0xb6dd,	// (0x00069cb6) vid4_indicators_pane_g5

0xbdb3,	// (0x0006a38c) vid4_progress_pane_g5_ParamLimits

0xbdb3,	// (0x0006a38c) vid4_progress_pane_g5

0x767b,	// (0x00065c54) main_ncimui_pane_g1

0x76e4,	// (0x00065cbd) ncimui_group_query_pane_ParamLimits

0x76e4,	// (0x00065cbd) ncimui_group_query_pane

0x772c,	// (0x00065d05) ncimui_list_pane_ParamLimits

0x772c,	// (0x00065d05) ncimui_list_pane

0x7753,	// (0x00065d2c) ncimui_text_pane_ParamLimits

0x7753,	// (0x00065d2c) ncimui_text_pane

0x7814,	// (0x00065ded) ncimui_text_pane_t1_ParamLimits

0x7814,	// (0x00065ded) ncimui_text_pane_t1

0xc459,	// (0x0006aa32) ncimui_list_single_graphic_pane_ParamLimits

0xc459,	// (0x0006aa32) ncimui_list_single_graphic_pane

0x7832,	// (0x00065e0b) ncimui_query_pane_ParamLimits

0x7832,	// (0x00065e0b) ncimui_query_pane

0xd923,	// (0x0006befc) list_highlight_pane_cp013

0xc469,	// (0x0006aa42) ncim_list_query_list_pane_t1_copy1

0xc443,	// (0x0006aa1c) ncim_list_single_graphic_pane_g1

0x7845,	// (0x00065e1e) ncim_query_button_pane_cp01

0x7851,	// (0x00065e2a) ncim_query_entry_pane_ParamLimits

0x7851,	// (0x00065e2a) ncim_query_entry_pane

0x7864,	// (0x00065e3d) ncimui_query_pane_g1

0x7870,	// (0x00065e49) ncimui_query_pane_t1_ParamLimits

0x7870,	// (0x00065e49) ncimui_query_pane_t1

0xdbd9,	// (0x0006c1b2) input_focus_pane_cp012

0xc477,	// (0x0006aa50) ncim_query_entry_pane_t1

0xe3ed,	// (0x0006c9c6) main_im_pane_ParamLimits

0xa051,	// (0x0006862a) main_mobtv_pane_ParamLimits

0xa051,	// (0x0006862a) main_mobtv_pane

0x74f6,	// (0x00065acf) main_cset6_slider_pane_g18_ParamLimits

0x74f6,	// (0x00065acf) main_cset6_slider_pane_g18

0x7502,	// (0x00065adb) main_cset6_slider_pane_g19_ParamLimits

0x7502,	// (0x00065adb) main_cset6_slider_pane_g19

0xe36d,	// (0x0006c946) bg_main_mobtv_pane_ParamLimits

0xe36d,	// (0x0006c946) bg_main_mobtv_pane

0x7889,	// (0x00065e62) main_mobtv_info_pane

0x7892,	// (0x00065e6b) main_mobtv_loading_pane_ParamLimits

0x7892,	// (0x00065e6b) main_mobtv_loading_pane

0xc489,	// (0x0006aa62) main_mobtv_pg_channel_list_pane

0xc493,	// (0x0006aa6c) main_mobtv_pg_hdr_pane

0x789f,	// (0x00065e78) main_mobtv_programe_curr_pane_ParamLimits

0x789f,	// (0x00065e78) main_mobtv_programe_curr_pane

0x78ac,	// (0x00065e85) main_mobtv_programe_next_pane_ParamLimits

0x78ac,	// (0x00065e85) main_mobtv_programe_next_pane

0xc49c,	// (0x0006aa75) popup_mobtv_noti_window

0xe38f,	// (0x0006c968) main_tv_pg_hdr_pane_g1

0xc4a4,	// (0x0006aa7d) main_tv_pg_hdr_pane_g2

0xc4ac,	// (0x0006aa85) main_tv_pg_hdr_pane_g3

0xc4b4,	// (0x0006aa8d) main_tv_pg_hdr_pane_g4

0xc4bc,	// (0x0006aa95) main_tv_pg_hdr_pane_g5

0xc4c6,	// (0x0006aa9f) main_tv_pg_hdr_pane_g6

0xc4d0,	// (0x0006aaa9) main_tv_pg_hdr_pane_g7

0xc4da,	// (0x0006aab3) main_tv_pg_hdr_pane_g8

0xc4e4,	// (0x0006aabd) main_tv_pg_hdr_pane_g9

0xc4ee,	// (0x0006aac7) main_tv_pg_hdr_pane_g10

0xc4f8,	// (0x0006aad1) main_tv_pg_hdr_pane_g11

0x000a,

0xfac1,	// (0x0006e09a) main_tv_pg_hdr_pane_g

0xc502,	// (0x0006aadb) main_tv_pg_hdr_pane_t1

0xc510,	// (0x0006aae9) main_tv_pg_hdr_pane_t2

0xc51e,	// (0x0006aaf7) main_tv_pg_hdr_pane_t3

0xc52e,	// (0x0006ab07) main_tv_pg_hdr_pane_t4

0xc53e,	// (0x0006ab17) main_tv_pg_hdr_pane_t5

0x0004,

0xfad8,	// (0x0006e0b1) main_tv_pg_hdr_pane_t

0xc54e,	// (0x0006ab27) single_mobtv_pg_channel_pane_ParamLimits

0xc54e,	// (0x0006ab27) single_mobtv_pg_channel_pane

0xc560,	// (0x0006ab39) single_mobtv_pg_channel_table_pane

0xc569,	// (0x0006ab42) single_mobtv_pg_channel_thumb_pane

0xc572,	// (0x0006ab4b) single_tv_pg_channel_pane_g1

0xc57b,	// (0x0006ab54) single_tv_pg_channel_pane_g2

0x0001,

0xfae3,	// (0x0006e0bc) single_tv_pg_channel_pane_g

0xe351,	// (0x0006c92a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe351,	// (0x0006c92a) bg_single_mobtv_pg_channel_thumb_pane

0xc584,	// (0x0006ab5d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc584,	// (0x0006ab5d) single_mobtv_pg_channel_thumb_pane_g1

0xc592,	// (0x0006ab6b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc592,	// (0x0006ab6b) single_mobtv_pg_channel_thumb_pane_g2

0xc59e,	// (0x0006ab77) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc59e,	// (0x0006ab77) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfae8,	// (0x0006e0c1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfae8,	// (0x0006e0c1) single_mobtv_pg_channel_thumb_pane_g

0xc5aa,	// (0x0006ab83) single_mobtv_pg_channel_thumb_pane_t1

0xc5b8,	// (0x0006ab91) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaef,	// (0x0006e0c8) single_mobtv_pg_channel_thumb_pane_t

0xe38f,	// (0x0006c968) bg_single_mobtv_pg_channel_table_pane_g1

0xe38f,	// (0x0006c968) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0006d665) bg_single_mobtv_pg_channel_table_pane_g

0xc5c6,	// (0x0006ab9f) single_mobtv_pg_channel_table_pane_t1

0xc5d4,	// (0x0006abad) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaf4,	// (0x0006e0cd) single_mobtv_pg_channel_table_pane_t

0x78c1,	// (0x00065e9a) main_mobtv_info_pane_g1_ParamLimits

0x78c1,	// (0x00065e9a) main_mobtv_info_pane_g1

0x78df,	// (0x00065eb8) main_mobtv_info_pane_t1_ParamLimits

0x78df,	// (0x00065eb8) main_mobtv_info_pane_t1

0x7957,	// (0x00065f30) main_mobtv_info_pane_t2_ParamLimits

0x7957,	// (0x00065f30) main_mobtv_info_pane_t2

0x0002,

0xfafe,	// (0x0006e0d7) main_mobtv_info_pane_t_ParamLimits

0xfafe,	// (0x0006e0d7) main_mobtv_info_pane_t

0x79e6,	// (0x00065fbf) wait_bar_pane_cp05

0x79f8,	// (0x00065fd1) main_mobtv_loading_pane_g1_ParamLimits

0x79f8,	// (0x00065fd1) main_mobtv_loading_pane_g1

0x7a0b,	// (0x00065fe4) main_mobtv_loading_pane_g2_ParamLimits

0x7a0b,	// (0x00065fe4) main_mobtv_loading_pane_g2

0x7a17,	// (0x00065ff0) main_mobtv_loading_pane_g3_ParamLimits

0x7a17,	// (0x00065ff0) main_mobtv_loading_pane_g3

0x0002,

0xfb05,	// (0x0006e0de) main_mobtv_loading_pane_g_ParamLimits

0xfb05,	// (0x0006e0de) main_mobtv_loading_pane_g

0xc5e2,	// (0x0006abbb) main_mobtv_loading_pane_t1_ParamLimits

0xc5e2,	// (0x0006abbb) main_mobtv_loading_pane_t1

0xc5fa,	// (0x0006abd3) main_mobtv_loading_pane_t2_ParamLimits

0xc5fa,	// (0x0006abd3) main_mobtv_loading_pane_t2

0x0001,

0xfb0c,	// (0x0006e0e5) main_mobtv_loading_pane_t_ParamLimits

0xfb0c,	// (0x0006e0e5) main_mobtv_loading_pane_t

0x7a2a,	// (0x00066003) wait_bar_pane_cp06_ParamLimits

0x7a2a,	// (0x00066003) wait_bar_pane_cp06

0xc61e,	// (0x0006abf7) main_mobtv_programe_curr_pane_t1

0xc62c,	// (0x0006ac05) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb11,	// (0x0006e0ea) main_mobtv_programe_curr_pane_t

0xc63a,	// (0x0006ac13) main_mobtv_programe_next_pane_t1

0xc648,	// (0x0006ac21) main_mobtv_programe_next_pane_t2

0xc656,	// (0x0006ac2f) main_mobtv_programe_next_pane_t3

0x0002,

0xfb16,	// (0x0006e0ef) main_mobtv_programe_next_pane_t

0xd923,	// (0x0006befc) bg_popup_mobtv_noti_window_pane

0xc664,	// (0x0006ac3d) popup_mobtv_noti_window_g1

0xc66c,	// (0x0006ac45) popup_mobtv_noti_window_t1

0xc67a,	// (0x0006ac53) popup_mobtv_noti_window_t2

0x0001,

0xfb1d,	// (0x0006e0f6) popup_mobtv_noti_window_t

0xe38f,	// (0x0006c968) bg_popup_mobtv_noti_window_pane_g1

0xa05f,	// (0x00068638) sc_clock_pane

0xa05f,	// (0x00068638) main_fs_bigclock_pane

0x7116,	// (0x000656ef) blid2_tripm_pane_t4_ParamLimits

0x7116,	// (0x000656ef) blid2_tripm_pane_t4

0xe351,	// (0x0006c92a) sc_clock_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) sc_clock_pane_g1

0xe399,	// (0x0006c972) sc_clock_pane_t1_ParamLimits

0xe399,	// (0x0006c972) sc_clock_pane_t1

0xe399,	// (0x0006c972) sc_clock_pane_t2_ParamLimits

0xe399,	// (0x0006c972) sc_clock_pane_t2

0xe399,	// (0x0006c972) sc_clock_pane_t3_ParamLimits

0xe399,	// (0x0006c972) sc_clock_pane_t3

0x0004,

0xfb22,	// (0x0006e0fb) sc_clock_pane_t_ParamLimits

0xfb22,	// (0x0006e0fb) sc_clock_pane_t

0x855e,	// (0x00066b37) main_fs_bigclock_indicator_pane_ParamLimits

0x855e,	// (0x00066b37) main_fs_bigclock_indicator_pane

0x7a88,	// (0x00066061) main_fs_bigclock_pane_g1_ParamLimits

0x7a88,	// (0x00066061) main_fs_bigclock_pane_g1

0x856a,	// (0x00066b43) main_fs_bigclock_pane_t1_ParamLimits

0x856a,	// (0x00066b43) main_fs_bigclock_pane_t1

0x857c,	// (0x00066b55) main_fs_bigclock_pane_t2_ParamLimits

0x857c,	// (0x00066b55) main_fs_bigclock_pane_t2

0x8590,	// (0x00066b69) main_fs_bigclock_pane_t3_ParamLimits

0x8590,	// (0x00066b69) main_fs_bigclock_pane_t3

0x0002,

0xfc99,	// (0x0006e272) main_fs_bigclock_pane_t_ParamLimits

0xfc99,	// (0x0006e272) main_fs_bigclock_pane_t

0xd200,	// (0x0006b7d9) main_fs_bigclock_indicator_pane_g1

0xc398,	// (0x0006a971) ncim_query_content_pane_g2_ParamLimits

0xc398,	// (0x0006a971) ncim_query_content_pane_g2

0x0001,

0xfaaf,	// (0x0006e088) ncim_query_content_pane_g_ParamLimits

0xfaaf,	// (0x0006e088) ncim_query_content_pane_g

0xe399,	// (0x0006c972) sc_clock_pane_t4_ParamLimits

0xe399,	// (0x0006c972) sc_clock_pane_t4

0xa051,	// (0x0006862a) main_radioblah_pane

0xb5cb,	// (0x00069ba4) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5cb,	// (0x00069ba4) cell_call4_button_pane_t1_copy1

0x7693,	// (0x00065c6c) main_ncimui_pane_t1_ParamLimits

0x7693,	// (0x00065c6c) main_ncimui_pane_t1

0x76ad,	// (0x00065c86) main_ncimui_pane_t2_ParamLimits

0x76ad,	// (0x00065c86) main_ncimui_pane_t2

0x0002,

0xfaa8,	// (0x0006e081) main_ncimui_pane_t_ParamLimits

0xfaa8,	// (0x0006e081) main_ncimui_pane_t

0x28ee,	// (0x00060ec7) main_radioblah_anim_pane_ParamLimits

0x28ee,	// (0x00060ec7) main_radioblah_anim_pane

0x28ee,	// (0x00060ec7) main_radioblah_info_pane_ParamLimits

0x28ee,	// (0x00060ec7) main_radioblah_info_pane

0x28da,	// (0x00060eb3) main_radioblah_pane_t1_ParamLimits

0x28da,	// (0x00060eb3) main_radioblah_pane_t1

0x28da,	// (0x00060eb3) main_radioblah_pane_t2_ParamLimits

0x28da,	// (0x00060eb3) main_radioblah_pane_t2

0x0003,

0xfb43,	// (0x0006e11c) main_radioblah_pane_t_ParamLimits

0xfb43,	// (0x0006e11c) main_radioblah_pane_t

0xdbd9,	// (0x0006c1b2) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) main_radioblah_rocker_ctrl_pane

0xc7ef,	// (0x0006adc8) main_radioblah_info_pane_t1_ParamLimits

0xc7ef,	// (0x0006adc8) main_radioblah_info_pane_t1

0xc803,	// (0x0006addc) main_radioblah_info_pane_t2_ParamLimits

0xc803,	// (0x0006addc) main_radioblah_info_pane_t2

0x0003,

0xfb4c,	// (0x0006e125) main_radioblah_info_pane_t_ParamLimits

0xfb4c,	// (0x0006e125) main_radioblah_info_pane_t

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g1

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g2

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g3

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g4

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g5

0xe38f,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x058b,	// (0x0005eb64) main_radioblah_rocker_ctrl_pane_g

0x73cc,	// (0x000659a5) main_cset_text2_pane_t1_copy1_ParamLimits

0xb62d,	// (0x00069c06) cam4_image_uncrop_qvga_pane

0xb686,	// (0x00069c5f) vid4_image_uncrop_qcif_pane

0xbfbe,	// (0x0006a597) cam6_image_uncrop_qvga_pane_ParamLimits

0xbfbe,	// (0x0006a597) cam6_image_uncrop_qvga_pane

0xc084,	// (0x0006a65d) vid6_image_uncrop_qcif_pane_ParamLimits

0xc084,	// (0x0006a65d) vid6_image_uncrop_qcif_pane

0xd923,	// (0x0006befc) bg_popup_preview_window_pane_cp03

0xc34a,	// (0x0006a923) list_cset_text2_pane

0xc352,	// (0x0006a92b) main_cset6_text2_pane_g1

0xc35a,	// (0x0006a933) main_cset6_text2_pane_t1

0x7ad5,	// (0x000660ae) list_cset_text2_pane_t1_ParamLimits

0x7ad5,	// (0x000660ae) list_cset_text2_pane_t1

0xa051,	// (0x0006862a) main_radioblah_pane_ParamLimits

0x79d2,	// (0x00065fab) main_mobtv_info_pane_t3_ParamLimits

0x79d2,	// (0x00065fab) main_mobtv_info_pane_t3

0x28cc,	// (0x00060ea5) main_radioblah_pane_g1

0xc7bf,	// (0x0006ad98) main_radioblah_info_pane_g1

0xe3ad,	// (0x0006c986) main_radioblah_info_pane_t3_ParamLimits

0xe3ad,	// (0x0006c986) main_radioblah_info_pane_t3

0x240f,	// (0x000609e8) highlight_cell_cale_month_pane_ParamLimits

0x240f,	// (0x000609e8) highlight_cell_cale_month_pane

0xa05f,	// (0x00068638) main_phob_fisheye_pane

0xae35,	// (0x0006940e) scroll_pane_cp0031_ParamLimits

0xae35,	// (0x0006940e) scroll_pane_cp0031

0xc192,	// (0x0006a76b) wait_bar_pane_cp08_ParamLimits

0x7451,	// (0x00065a2a) cset_list_set_pane_copy1_ParamLimits

0xc852,	// (0x0006ae2b) highlight_cell_cale_month_pane_g1

0x7aee,	// (0x000660c7) highlight_cell_cale_month_pane_t1

0xbd76,	// (0x0006a34f) list_gen_pane_cp01

0xb8a4,	// (0x00069e7d) scroll_pane_01

0x7afc,	// (0x000660d5) list_single_double_fisheye_pane

0x7b05,	// (0x000660de) list_double_fisheye_pane_g1_ParamLimits

0x7b05,	// (0x000660de) list_double_fisheye_pane_g1

0x7b11,	// (0x000660ea) list_double_fisheye_pane_g2_ParamLimits

0x7b11,	// (0x000660ea) list_double_fisheye_pane_g2

0x7b25,	// (0x000660fe) list_double_fisheye_pane_g3_ParamLimits

0x7b25,	// (0x000660fe) list_double_fisheye_pane_g3

0x0004,

0xfb55,	// (0x0006e12e) list_double_fisheye_pane_g_ParamLimits

0xfb55,	// (0x0006e12e) list_double_fisheye_pane_g

0x7b4e,	// (0x00066127) list_double_fisheye_pane_t1_ParamLimits

0x7b4e,	// (0x00066127) list_double_fisheye_pane_t1

0x7b69,	// (0x00066142) list_double_fisheye_pane_t2_ParamLimits

0x7b69,	// (0x00066142) list_double_fisheye_pane_t2

0x0001,

0xfb60,	// (0x0006e139) list_double_fisheye_pane_t_ParamLimits

0xfb60,	// (0x0006e139) list_double_fisheye_pane_t

0xa05f,	// (0x00068638) main_call5_pane

0xdbd9,	// (0x0006c1b2) sc_swipe_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) sc_swipe_pane

0x7b9e,	// (0x00066177) call5_image_pane_ParamLimits

0x7b9e,	// (0x00066177) call5_image_pane

0x7bbb,	// (0x00066194) call5_swipe_1_pane_ParamLimits

0x7bbb,	// (0x00066194) call5_swipe_1_pane

0x7bce,	// (0x000661a7) call5_swipe_2_pane_ParamLimits

0x7bce,	// (0x000661a7) call5_swipe_2_pane

0x7bf9,	// (0x000661d2) popup_call5_audio_first_window_ParamLimits

0x7bf9,	// (0x000661d2) popup_call5_audio_first_window

0xe351,	// (0x0006c92a) call5_swipe_1_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) call5_swipe_1_pane_g1

0xc85a,	// (0x0006ae33) call5_swipe_1_pane_g2_ParamLimits

0xc85a,	// (0x0006ae33) call5_swipe_1_pane_g2

0x0001,

0xfb65,	// (0x0006e13e) call5_swipe_1_pane_g_ParamLimits

0xfb65,	// (0x0006e13e) call5_swipe_1_pane_g

0xc866,	// (0x0006ae3f) call5_swipe_1_pane_t1_ParamLimits

0xc866,	// (0x0006ae3f) call5_swipe_1_pane_t1

0xe351,	// (0x0006c92a) call5_swipe_2_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) call5_swipe_2_pane_g1

0xc87b,	// (0x0006ae54) call5_swipe_2_pane_g2_ParamLimits

0xc87b,	// (0x0006ae54) call5_swipe_2_pane_g2

0x0001,

0xfb6a,	// (0x0006e143) call5_swipe_2_pane_g_ParamLimits

0xfb6a,	// (0x0006e143) call5_swipe_2_pane_g

0xc887,	// (0x0006ae60) call5_swipe_2_pane_t1_ParamLimits

0xc887,	// (0x0006ae60) call5_swipe_2_pane_t1

0xe351,	// (0x0006c92a) sc_swipe_pane_g1_ParamLimits

0xe351,	// (0x0006c92a) sc_swipe_pane_g1

0xe35f,	// (0x0006c938) sc_swipe_pane_g2_ParamLimits

0xe35f,	// (0x0006c938) sc_swipe_pane_g2

0x0001,

0x05b2,	// (0x0005eb8b) sc_swipe_pane_g_ParamLimits

0x05b2,	// (0x0005eb8b) sc_swipe_pane_g

0xe399,	// (0x0006c972) sc_swipe_pane_t1_ParamLimits

0xe399,	// (0x0006c972) sc_swipe_pane_t1

0xa05f,	// (0x00068638) main_cmail_launcher_pane

0x7c0a,	// (0x000661e3) aid_size_cell_cmail_l_ParamLimits

0x7c0a,	// (0x000661e3) aid_size_cell_cmail_l

0x7c18,	// (0x000661f1) grid_cmail_l_pane_ParamLimits

0x7c18,	// (0x000661f1) grid_cmail_l_pane

0x7c32,	// (0x0006620b) cell_cmail_l_pane_ParamLimits

0x7c32,	// (0x0006620b) cell_cmail_l_pane

0xc89c,	// (0x0006ae75) cell_cmail_l_pane_g1_ParamLimits

0xc89c,	// (0x0006ae75) cell_cmail_l_pane_g1

0xc8a8,	// (0x0006ae81) cell_cmail_l_pane_t1_ParamLimits

0xc8a8,	// (0x0006ae81) cell_cmail_l_pane_t1

0xc8be,	// (0x0006ae97) cell_cmail_l_pane_t2_ParamLimits

0xc8be,	// (0x0006ae97) cell_cmail_l_pane_t2

0x0001,

0xfb6f,	// (0x0006e148) cell_cmail_l_pane_t_ParamLimits

0xfb6f,	// (0x0006e148) cell_cmail_l_pane_t

0xdbd9,	// (0x0006c1b2) grid_highlight_pane_cp018_ParamLimits

0xdbd9,	// (0x0006c1b2) grid_highlight_pane_cp018

0x09c4,	// (0x0005ef9d) main2_pane_ParamLimits

0x09c4,	// (0x0005ef9d) main2_pane

0xe485,	// (0x0006ca5e) popup_sp_fs_action_menu_bg_pane_g1

0xe48d,	// (0x0006ca66) popup_sp_fs_action_menu_bg_pane_g2

0xe495,	// (0x0006ca6e) popup_sp_fs_action_menu_bg_pane_g3

0xe49d,	// (0x0006ca76) popup_sp_fs_action_menu_bg_pane_g4

0xe4a5,	// (0x0006ca7e) popup_sp_fs_action_menu_bg_pane_g5

0xe4ad,	// (0x0006ca86) popup_sp_fs_action_menu_bg_pane_g6

0xe4b5,	// (0x0006ca8e) popup_sp_fs_action_menu_bg_pane_g7

0xe4bd,	// (0x0006ca96) popup_sp_fs_action_menu_bg_pane_g8

0xe4c5,	// (0x0006ca9e) popup_sp_fs_action_menu_bg_pane_g9

0xe4cd,	// (0x0006caa6) popup_sp_fs_action_menu_bg_pane_g10

0xe4cd,	// (0x0006caa6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0006d6b6) popup_sp_fs_action_menu_bg_pane_g

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g2

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0006d764) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0006d764) list_medium_line_x2_t3_g3_g

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t2

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g3_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_x2_t3_g2_g

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t2

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g2_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g2

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g3

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0006d777) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0006d777) list_medium_line_x2_t4_g4_g

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t2

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t3

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006d780) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006d780) list_medium_line_x2_t4_g4_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g2

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g3

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0006d777) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0006d777) list_medium_line_x2_t2_g4_g

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g4_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g4_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g2

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0006d764) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0006d764) list_medium_line_x2_t2_g3_g

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g3_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g3_t

0x2573,	// (0x00060b4c) main_sp_fs_list_pane_ParamLimits

0x2573,	// (0x00060b4c) main_sp_fs_list_pane

0xa0f0,	// (0x000686c9) sp_fs_scroll_pane_ParamLimits

0xa0f0,	// (0x000686c9) sp_fs_scroll_pane

0xeb0b,	// (0x0006d0e4) list_medium_line_x2_t3_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_x2_t3_t2

0xeb0b,	// (0x0006d0e4) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0006d82d) list_medium_line_x2_t3_t

0xeb0b,	// (0x0006d0e4) list_medium_line_x3_t4_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_x3_t4_t2

0xeb0b,	// (0x0006d0e4) list_medium_line_x3_t4_t3

0xeb0b,	// (0x0006d0e4) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0006d834) list_medium_line_x3_t4_t

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t5_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t5_t2

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t5_t3

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t5_t4

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0006d83d) list_medium_line_x4_t5_t

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g1

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g2

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g3

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0006d777) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0006d777) list_medium_line_t4_g4_g

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t1

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t2

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t3

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t4_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006d780) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006d780) list_medium_line_t4_g4_t

0x260e,	// (0x00060be7) chi_dic_find_pane_g1

0x42b0,	// (0x00062889) main_tport_pane

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t1

0xe351,	// (0x0006c92a) list_medium_line_t2_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_t2_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_t2_g2_g

0xe399,	// (0x0006c972) list_medium_line_t2_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_g2_t1

0xe399,	// (0x0006c972) list_medium_line_t2_g2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_t2_g2_t

0xbde9,	// (0x0006a3c2) aid_sp_fs_list_icon_a_sm

0xbdf1,	// (0x0006a3ca) aid_sp_fs_list_icon_d

0xbdf9,	// (0x0006a3d2) aid_sp_fs_text_primary

0xbe02,	// (0x0006a3db) aid_sp_fs_text_secondary

0xd923,	// (0x0006befc) list_medium_line

0xd923,	// (0x0006befc) list_medium_line_g2

0xd923,	// (0x0006befc) list_medium_line_g3

0xd923,	// (0x0006befc) list_medium_line_plain

0xd923,	// (0x0006befc) list_medium_line_plain_t2

0xd923,	// (0x0006befc) list_medium_line_plain_t3

0xd923,	// (0x0006befc) list_medium_line_right_icon

0xd923,	// (0x0006befc) list_medium_line_right_iconx2

0xd923,	// (0x0006befc) list_medium_line_t2

0xd923,	// (0x0006befc) list_medium_line_t2_g2

0xd923,	// (0x0006befc) list_medium_line_t2_g3

0xd923,	// (0x0006befc) list_medium_line_t2_right_icon

0xd923,	// (0x0006befc) list_medium_line_t2_right_iconx2

0xd923,	// (0x0006befc) list_medium_line_t3

0xd923,	// (0x0006befc) list_medium_line_t3_g2

0xd923,	// (0x0006befc) list_medium_line_t3_g3

0xd923,	// (0x0006befc) list_medium_line_t3_right_iconx2

0xd923,	// (0x0006befc) list_medium_line_t4_g4

0xd923,	// (0x0006befc) list_medium_line_x2

0xd923,	// (0x0006befc) list_medium_line_x2_t2_g2

0xd923,	// (0x0006befc) list_medium_line_x2_t2_g3

0xd923,	// (0x0006befc) list_medium_line_x2_t2_g4

0xd923,	// (0x0006befc) list_medium_line_x2_t3

0xd923,	// (0x0006befc) list_medium_line_x2_t3_g2

0xd923,	// (0x0006befc) list_medium_line_x2_t3_g3

0xd923,	// (0x0006befc) list_medium_line_x2_t3_g4

0xd923,	// (0x0006befc) list_medium_line_x2_t4_g2

0xd923,	// (0x0006befc) list_medium_line_x2_t4_g4

0xd923,	// (0x0006befc) list_medium_line_x3

0xd923,	// (0x0006befc) list_medium_line_x3_t4

0xd923,	// (0x0006befc) list_medium_line_x3_t4_g4

0xd923,	// (0x0006befc) list_medium_line_x4_t4

0xd923,	// (0x0006befc) list_medium_line_x4_t4_g7

0xd923,	// (0x0006befc) list_medium_line_x4_t5

0x6f06,	// (0x000654df) list_single_fs_dyc_pane_ParamLimits

0x6f06,	// (0x000654df) list_single_fs_dyc_pane

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g1

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g2

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g3

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g4

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g5

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x4_t4_g7_g6

0xe35f,	// (0x0006c938) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe35f,	// (0x0006c938) list_medium_line_x4_t4_g7_g7

0x0006,

0x04bf,	// (0x0005ea98) list_medium_line_x4_t4_g7_g_ParamLimits

0x04bf,	// (0x0005ea98) list_medium_line_x4_t4_g7_g

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t1

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t2

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x4_t4_g7_t3

0xe3ad,	// (0x0006c986) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe3ad,	// (0x0006c986) list_medium_line_x4_t4_g7_t4

0xe3ad,	// (0x0006c986) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe3ad,	// (0x0006c986) list_medium_line_x4_t4_g7_t5

0x0004,

0x04ce,	// (0x0005eaa7) list_medium_line_x4_t4_g7_t_ParamLimits

0x04ce,	// (0x0005eaa7) list_medium_line_x4_t4_g7_t

0x764a,	// (0x00065c23) list_single_dyc_row_pane_ParamLimits

0x764a,	// (0x00065c23) list_single_dyc_row_pane

0x7b8b,	// (0x00066164) call5_gesture_pane_ParamLimits

0x7b8b,	// (0x00066164) call5_gesture_pane

0x7be1,	// (0x000661ba) call5_windows_pane_ParamLimits

0x7be1,	// (0x000661ba) call5_windows_pane

0x7c4c,	// (0x00066225) call5_swipe_1_pane_cp_ParamLimits

0x7c4c,	// (0x00066225) call5_swipe_1_pane_cp

0x7c58,	// (0x00066231) call5_swipe_2_pane_cp_ParamLimits

0x7c58,	// (0x00066231) call5_swipe_2_pane_cp

0xe605,	// (0x0006cbde) call5_image_pane_cp

0x7c64,	// (0x0006623d) popup_call5_audio_first_window_cp_ParamLimits

0x7c64,	// (0x0006623d) popup_call5_audio_first_window_cp

0xc8db,	// (0x0006aeb4) call5_swipe_1_pane_g1_cp_ParamLimits

0xc8db,	// (0x0006aeb4) call5_swipe_1_pane_g1_cp

0xc8e8,	// (0x0006aec1) call5_swipe_1_pane_g2_cp

0xc8f0,	// (0x0006aec9) call5_swipe_1_pane_t1_cp_ParamLimits

0xc8f0,	// (0x0006aec9) call5_swipe_1_pane_t1_cp

0xc8db,	// (0x0006aeb4) call5_swipe_2_pane_g1_cp_ParamLimits

0xc8db,	// (0x0006aeb4) call5_swipe_2_pane_g1_cp

0xc905,	// (0x0006aede) call5_swipe_2_pane_g2_cp

0xc90d,	// (0x0006aee6) call5_swipe_2_pane_t1_cp_ParamLimits

0xc90d,	// (0x0006aee6) call5_swipe_2_pane_t1_cp

0xdbd9,	// (0x0006c1b2) main_sp_fs_email_pane

0xc922,	// (0x0006aefb) main_sp_fs_listscroll_pane_te

0x7c72,	// (0x0006624b) popup_sp_fs_action_menu_pane_ParamLimits

0x7c72,	// (0x0006624b) popup_sp_fs_action_menu_pane

0xe38f,	// (0x0006c968) bg_sp_fs_ctrlbar_pane_g1

0xc92b,	// (0x0006af04) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc934,	// (0x0006af0d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc93d,	// (0x0006af16) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe38f,	// (0x0006c968) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb74,	// (0x0006e14d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa8be,	// (0x00068e97) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa8be,	// (0x00068e97) bg_sp_fs_ctrlbar_ddmenu_pane

0xc946,	// (0x0006af1f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc946,	// (0x0006af1f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc952,	// (0x0006af2b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc952,	// (0x0006af2b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb7d,	// (0x0006e156) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb7d,	// (0x0006e156) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc95e,	// (0x0006af37) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc95e,	// (0x0006af37) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe38f,	// (0x0006c968) list_medium_line_t2_right_icon_g1

0xeb0b,	// (0x0006d0e4) list_medium_line_t2_right_icon_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_t2_right_icon_t2

0x0001,

0x05ca,	// (0x0005eba3) list_medium_line_t2_right_icon_t

0x28ee,	// (0x00060ec7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x28ee,	// (0x00060ec7) bg_sp_fs_ctrlbar_pane

0x7cfc,	// (0x000662d5) main_sp_fs_ctrlbar_button_pane_cp01

0x7d06,	// (0x000662df) main_sp_fs_ctrlbar_ddmenu_pane

0xc9b0,	// (0x0006af89) main_sp_fs_ctrlbar_pane_g1

0xc9bc,	// (0x0006af95) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb82,	// (0x0006e15b) main_sp_fs_ctrlbar_pane_g

0x7d44,	// (0x0006631d) main_sp_fs_ctrlbar_pane_t1

0x7d83,	// (0x0006635c) main_sp_fs_ctrlbar_pane

0x7da7,	// (0x00066380) main_sp_fs_listscroll_pane_te_cp01

0x7dd1,	// (0x000663aa) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7dd1,	// (0x000663aa) popup_sp_fs_action_menu_pane_cp01

0xdbd9,	// (0x0006c1b2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_sp_fs_highlight_list_pane_cp01

0xc9e3,	// (0x0006afbc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc9e3,	// (0x0006afbc) sp_fs_action_menu_list_gene_pane_g1

0xc9f2,	// (0x0006afcb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc9f2,	// (0x0006afcb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb90,	// (0x0006e169) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb90,	// (0x0006e169) sp_fs_action_menu_list_gene_pane_g

0xc9ff,	// (0x0006afd8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc9ff,	// (0x0006afd8) sp_fs_action_menu_list_gene_pane_t1

0xca17,	// (0x0006aff0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xca17,	// (0x0006aff0) sp_fs_action_menu_list_gene_pane

0xcd64,	// (0x0006b33d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcd64,	// (0x0006b33d) popup_sp_fs_action_menu_bg_pane

0xca36,	// (0x0006b00f) sp_fs_action_menu_list_pane_ParamLimits

0xca36,	// (0x0006b00f) sp_fs_action_menu_list_pane

0x7df6,	// (0x000663cf) sp_fs_scroll_pane_cp01_ParamLimits

0x7df6,	// (0x000663cf) sp_fs_scroll_pane_cp01

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t2_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t2_t2

0x0001,

0x05ca,	// (0x0005eba3) list_medium_line_plain_t2_t

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t3_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t3_t2

0xeb0b,	// (0x0006d0e4) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0006d82d) list_medium_line_plain_t3_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_x2_t2_g2_g

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g2_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_x2_t2_g2_t

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_x2_t4_g2_g

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t2

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t3

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0006d780) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0006d780) list_medium_line_x2_t4_g2_t

0xe38f,	// (0x0006c968) list_medium_line_t3_right_iconx2_g1

0xe38f,	// (0x0006c968) list_medium_line_t3_right_iconx2_g2

0xe38f,	// (0x0006c968) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0006d949) list_medium_line_t3_right_iconx2_g

0xeb0b,	// (0x0006d0e4) list_medium_line_t3_right_iconx2_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_t3_right_iconx2_t2

0x0001,

0x05ca,	// (0x0005eba3) list_medium_line_t3_right_iconx2_t

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g1

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g2

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g3

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0006d777) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0006d777) list_medium_line_x3_t4_g4_g

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t1

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t2

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t3

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0006d780) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0006d780) list_medium_line_x3_t4_g4_t

0x7e1c,	// (0x000663f5) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e1c,	// (0x000663f5) list_single_dyc_row_text_pane_t1

0x7e65,	// (0x0006643e) list_single_dyc_row_text_pane_t2_ParamLimits

0x7e65,	// (0x0006643e) list_single_dyc_row_text_pane_t2

0xca56,	// (0x0006b02f) list_single_dyc_row_text_pane_t3_ParamLimits

0xca56,	// (0x0006b02f) list_single_dyc_row_text_pane_t3

0x0005,

0xfb95,	// (0x0006e16e) list_single_dyc_row_text_pane_t_ParamLimits

0xfb95,	// (0x0006e16e) list_single_dyc_row_text_pane_t

0xca7a,	// (0x0006b053) list_single_dyc_row_pane_g1_ParamLimits

0xca7a,	// (0x0006b053) list_single_dyc_row_pane_g1

0xca86,	// (0x0006b05f) list_single_dyc_row_pane_g2_ParamLimits

0xca86,	// (0x0006b05f) list_single_dyc_row_pane_g2

0xca92,	// (0x0006b06b) list_single_dyc_row_pane_g3_ParamLimits

0xca92,	// (0x0006b06b) list_single_dyc_row_pane_g3

0xcaa5,	// (0x0006b07e) list_single_dyc_row_pane_g4_ParamLimits

0xcaa5,	// (0x0006b07e) list_single_dyc_row_pane_g4

0x0006,

0xfba2,	// (0x0006e17b) list_single_dyc_row_pane_g_ParamLimits

0xfba2,	// (0x0006e17b) list_single_dyc_row_pane_g

0xcaf7,	// (0x0006b0d0) list_single_dyc_row_text_pane_ParamLimits

0xcaf7,	// (0x0006b0d0) list_single_dyc_row_text_pane

0xd923,	// (0x0006befc) bg_sp_fs_scroll_pane

0xcd72,	// (0x0006b34b) thumb_sp_fs_scroll_pane

0xe351,	// (0x0006c92a) list_medium_line_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g1

0xe399,	// (0x0006c972) list_medium_line_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t1

0xe351,	// (0x0006c92a) list_medium_line_x2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_x2_g

0xe399,	// (0x0006c972) list_medium_line_x2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t1

0xe351,	// (0x0006c92a) list_medium_line_x3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x3_g1

0xcd56,	// (0x0006b32f) list_medium_line_x3_g2_ParamLimits

0xcd56,	// (0x0006b32f) list_medium_line_x3_g2

0x0001,

0xfbb1,	// (0x0006e18a) list_medium_line_x3_g_ParamLimits

0xfbb1,	// (0x0006e18a) list_medium_line_x3_g

0xcd7b,	// (0x0006b354) list_medium_line_x3_t1_ParamLimits

0xcd7b,	// (0x0006b354) list_medium_line_x3_t1

0xcd8f,	// (0x0006b368) thumb_sp_fs_scroll_pane_g1

0xcd98,	// (0x0006b371) thumb_sp_fs_scroll_pane_g2

0xcda1,	// (0x0006b37a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbb6,	// (0x0006e18f) thumb_sp_fs_scroll_pane_g

0xcd8f,	// (0x0006b368) bg_sp_fs_scroll_pane_g1

0xcd98,	// (0x0006b371) bg_sp_fs_scroll_pane_g2

0xcda1,	// (0x0006b37a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbb6,	// (0x0006e18f) bg_sp_fs_scroll_pane_g

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g1

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g2

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g3

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0006d777) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0006d777) list_medium_line_x2_t3_g4_g

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t1

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t2

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_x2_t3_g4_t

0xe351,	// (0x0006c92a) list_medium_line_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_g2_g

0xe399,	// (0x0006c972) list_medium_line_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_g2_t1

0xe351,	// (0x0006c92a) list_medium_line_t3_g2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g2_g1

0xe351,	// (0x0006c92a) list_medium_line_t3_g2_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0006d772) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0006d772) list_medium_line_t3_g2_g

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t1

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t2

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_t3_g2_t

0xe38f,	// (0x0006c968) list_medium_line_right_icon_g1

0xeb0b,	// (0x0006d0e4) list_medium_line_right_icon_t1

0xe351,	// (0x0006c92a) list_medium_line_t2_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g1

0xe399,	// (0x0006c972) list_medium_line_t2_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_t1

0xe399,	// (0x0006c972) list_medium_line_t2_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_t2_t

0xe351,	// (0x0006c92a) list_medium_line_t3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g1

0xe399,	// (0x0006c972) list_medium_line_t3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_t1

0xe399,	// (0x0006c972) list_medium_line_t3_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_t2

0xe399,	// (0x0006c972) list_medium_line_t3_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_t3_t

0xe351,	// (0x0006c92a) list_medium_line_g3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g3_g1

0xe351,	// (0x0006c92a) list_medium_line_g3_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g3_g2

0xe351,	// (0x0006c92a) list_medium_line_g3_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0006d764) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0006d764) list_medium_line_g3_g

0xe399,	// (0x0006c972) list_medium_line_g3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_g3_t1

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g1

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g2

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0006d764) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0006d764) list_medium_line_t2_g3_g

0xe399,	// (0x0006c972) list_medium_line_t2_g3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_g3_t1

0xe399,	// (0x0006c972) list_medium_line_t2_g3_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0006d747) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0006d747) list_medium_line_t2_g3_t

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g1_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g1

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g2_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g2

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g3_ParamLimits

0xe351,	// (0x0006c92a) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0006d764) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0006d764) list_medium_line_t3_g3_g

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t1_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t1

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t2_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t2

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t3_ParamLimits

0xe399,	// (0x0006c972) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0006d76b) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0006d76b) list_medium_line_t3_g3_t

0xe38f,	// (0x0006c968) list_medium_line_right_iconx2_g1

0xe38f,	// (0x0006c968) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0006d665) list_medium_line_right_iconx2_g

0xeb0b,	// (0x0006d0e4) list_medium_line_right_iconx2_t1

0xe38f,	// (0x0006c968) list_medium_line_t2_right_iconx2_g1

0xe38f,	// (0x0006c968) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0006d665) list_medium_line_t2_right_iconx2_g

0xeb0b,	// (0x0006d0e4) list_medium_line_t2_right_iconx2_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_t2_right_iconx2_t2

0x0001,

0x05ca,	// (0x0005eba3) list_medium_line_t2_right_iconx2_t

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t4_t1

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t4_t2

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t4_t3

0xeb0b,	// (0x0006d0e4) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0006d834) list_medium_line_x4_t4_t

0x7fdd,	// (0x000665b6) tport_appsw_pane_ParamLimits

0x7fdd,	// (0x000665b6) tport_appsw_pane

0x7ff5,	// (0x000665ce) tport_contact_pane_ParamLimits

0x7ff5,	// (0x000665ce) tport_contact_pane

0x800d,	// (0x000665e6) tport_listscroll_pane_ParamLimits

0x800d,	// (0x000665e6) tport_listscroll_pane

0x8027,	// (0x00066600) cell_tport_appsw_pane_ParamLimits

0x8027,	// (0x00066600) cell_tport_appsw_pane

0x28cc,	// (0x00060ea5) tport_appsw_pane_g1_ParamLimits

0x28cc,	// (0x00060ea5) tport_appsw_pane_g1

0xcdaa,	// (0x0006b383) tport_contact_pane_g1

0xc41e,	// (0x0006a9f7) tport_contact_pane_t1

0xcdb3,	// (0x0006b38c) tport_contact_pane_t2

0x0001,

0xfbbd,	// (0x0006e196) tport_contact_pane_t

0xcdc1,	// (0x0006b39a) list_tport_pane

0xcdca,	// (0x0006b3a3) scroll_pane_cp_030

0x806f,	// (0x00066648) cell_tport_appsw_pane_g1

0x807f,	// (0x00066658) cell_tport_appsw_pane_t1

0x808d,	// (0x00066666) grid_highlight_pane_cp019

0x8095,	// (0x0006666e) list_tport_double_graphic_pane_ParamLimits

0x8095,	// (0x0006666e) list_tport_double_graphic_pane

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp023_ParamLimits

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp023

0x80a2,	// (0x0006667b) list_tport_double_graphic_pane_g1_ParamLimits

0x80a2,	// (0x0006667b) list_tport_double_graphic_pane_g1

0x80af,	// (0x00066688) list_tport_double_graphic_pane_t1_ParamLimits

0x80af,	// (0x00066688) list_tport_double_graphic_pane_t1

0x80c4,	// (0x0006669d) list_tport_double_graphic_pane_t2_ParamLimits

0x80c4,	// (0x0006669d) list_tport_double_graphic_pane_t2

0x0001,

0xfbc9,	// (0x0006e1a2) list_tport_double_graphic_pane_t_ParamLimits

0xfbc9,	// (0x0006e1a2) list_tport_double_graphic_pane_t

0xd923,	// (0x0006befc) main_cale_note_pane

0x5fc9,	// (0x000645a2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5fc9,	// (0x000645a2) cell_vitu2_function_top_wide_pane_cp01

0x79e6,	// (0x00065fbf) wait_bar_pane_cp05_ParamLimits

0xdbd9,	// (0x0006c1b2) listscroll_cmail_pane

0xcddb,	// (0x0006b3b4) list_cmail_pane

0x80d6,	// (0x000666af) list_cmail_body_pane

0x80eb,	// (0x000666c4) list_single_cmail_header_caption_pane

0x8101,	// (0x000666da) list_single_cmail_header_detail_pane_ParamLimits

0x8101,	// (0x000666da) list_single_cmail_header_detail_pane

0xcdf2,	// (0x0006b3cb) list_single_cmail_header_caption_pane_t1

0x812e,	// (0x00066707) list_single_cmail_header_detail_pane_g1_ParamLimits

0x812e,	// (0x00066707) list_single_cmail_header_detail_pane_g1

0xcb1c,	// (0x0006b0f5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcb1c,	// (0x0006b0f5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbce,	// (0x0006e1a7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbce,	// (0x0006e1a7) list_single_cmail_header_detail_pane_g

0x8146,	// (0x0006671f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8146,	// (0x0006671f) list_single_cmail_header_detail_pane_t1

0x8184,	// (0x0006675d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8184,	// (0x0006675d) list_single_cmail_header_editor_pane_bg

0xc57b,	// (0x0006ab54) list_cmail_body_pane_g1

0xce16,	// (0x0006b3ef) list_cmail_body_pane_t1

0xb764,	// (0x00069d3d) list_single_cmail_header_editor_pane_bg_g1

0xe81e,	// (0x0006cdf7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb774,	// (0x00069d4d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb76c,	// (0x00069d45) list_single_cmail_header_editor_pane_bg_g1_copy3

0xba3f,	// (0x0006a018) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb794,	// (0x00069d6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb784,	// (0x00069d5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb78c,	// (0x00069d65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe7fe,	// (0x0006cdd7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x819d,	// (0x00066776) calenote_gesture_pane_ParamLimits

0x819d,	// (0x00066776) calenote_gesture_pane

0x81bd,	// (0x00066796) calenote_window_pane_ParamLimits

0x81bd,	// (0x00066796) calenote_window_pane

0xce24,	// (0x0006b3fd) popup_note_window_cp01

0x81d9,	// (0x000667b2) calenote_swipe_1_pane_ParamLimits

0x81d9,	// (0x000667b2) calenote_swipe_1_pane

0x7c58,	// (0x00066231) calenote_swipe_2_pane_ParamLimits

0x7c58,	// (0x00066231) calenote_swipe_2_pane

0xc8db,	// (0x0006aeb4) calenote_swipe_1_pane_g1_ParamLimits

0xc8db,	// (0x0006aeb4) calenote_swipe_1_pane_g1

0xce36,	// (0x0006b40f) calenote_swipe_1_pane_g2_ParamLimits

0xce36,	// (0x0006b40f) calenote_swipe_1_pane_g2

0x0001,

0xfbda,	// (0x0006e1b3) calenote_swipe_1_pane_g_ParamLimits

0xfbda,	// (0x0006e1b3) calenote_swipe_1_pane_g

0xce42,	// (0x0006b41b) calenote_swipe_1_pane_t1_ParamLimits

0xce42,	// (0x0006b41b) calenote_swipe_1_pane_t1

0xc8db,	// (0x0006aeb4) calenote_swipe_2_pane_g1_ParamLimits

0xc8db,	// (0x0006aeb4) calenote_swipe_2_pane_g1

0xce61,	// (0x0006b43a) calenote_swipe_2_pane_g2_ParamLimits

0xce61,	// (0x0006b43a) calenote_swipe_2_pane_g2

0x0001,

0xfbdf,	// (0x0006e1b8) calenote_swipe_2_pane_g_ParamLimits

0xfbdf,	// (0x0006e1b8) calenote_swipe_2_pane_g

0xce6d,	// (0x0006b446) calenote_swipe_2_pane_t1_ParamLimits

0xce6d,	// (0x0006b446) calenote_swipe_2_pane_t1

0xd923,	// (0x0006befc) main_mup_navstr_pane

0x4fb2,	// (0x0006358b) main_mup3_pane_t7_ParamLimits

0x4fb2,	// (0x0006358b) main_mup3_pane_t7

0xb308,	// (0x000698e1) main_mp4_pane_g6_ParamLimits

0xb308,	// (0x000698e1) main_mp4_pane_g6

0xb5b9,	// (0x00069b92) main_image3_pane_t4_ParamLimits

0xb5b9,	// (0x00069b92) main_image3_pane_t4

0x81ee,	// (0x000667c7) popup_navstr_preview_pane_ParamLimits

0x81ee,	// (0x000667c7) popup_navstr_preview_pane

0x8202,	// (0x000667db) scroll_navstr_pane_ParamLimits

0x8202,	// (0x000667db) scroll_navstr_pane

0xd923,	// (0x0006befc) bg_popup_preview_window_pane_cp04

0xce94,	// (0x0006b46d) popup_navstr_preview_pane_t1

0x8216,	// (0x000667ef) scroll_navstr_pane_g1_ParamLimits

0x8216,	// (0x000667ef) scroll_navstr_pane_g1

0x822a,	// (0x00066803) scroll_navstr_pane_t1_ParamLimits

0x822a,	// (0x00066803) scroll_navstr_pane_t1

0xce2d,	// (0x0006b406) bg_button_pane_cp014

0xce2d,	// (0x0006b406) bg_button_pane_cp030

0x7b31,	// (0x0006610a) list_double_fisheye_pane_g4_ParamLimits

0x7b31,	// (0x0006610a) list_double_fisheye_pane_g4

0x7b3d,	// (0x00066116) list_double_fisheye_pane_g5_ParamLimits

0x7b3d,	// (0x00066116) list_double_fisheye_pane_g5

0xa0f0,	// (0x000686c9) sp_fs_scroll_pane_cp03

0xc9b0,	// (0x0006af89) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc9bc,	// (0x0006af95) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb82,	// (0x0006e15b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7d44,	// (0x0006631d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcdea,	// (0x0006b3c3) sp_fs_scroll_pane_cp02

0xe556,	// (0x0006cb2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe556,	// (0x0006cb2f) popup_sp_fs_calendar_preview_list_single_pane

0xd923,	// (0x0006befc) main_cam6_pano_pane

0xa051,	// (0x0006862a) main_mup3_pane_ParamLimits

0xd923,	// (0x0006befc) main_phacti_pane

0x78b9,	// (0x00065e92) bg_button_pane_cp11

0x78d3,	// (0x00065eac) main_mobtv_info_pane_g2_ParamLimits

0x78d3,	// (0x00065eac) main_mobtv_info_pane_g2

0x0001,

0xfaf9,	// (0x0006e0d2) main_mobtv_info_pane_g_ParamLimits

0xfaf9,	// (0x0006e0d2) main_mobtv_info_pane_g

0xe399,	// (0x0006c972) sc_clock_pane_t5_ParamLimits

0xe399,	// (0x0006c972) sc_clock_pane_t5

0x28cc,	// (0x00060ea5) main_radioblah_pane_g1_ParamLimits

0x28da,	// (0x00060eb3) main_radioblah_pane_t3_ParamLimits

0x28da,	// (0x00060eb3) main_radioblah_pane_t3

0x28da,	// (0x00060eb3) main_radioblah_pane_t4_ParamLimits

0x28da,	// (0x00060eb3) main_radioblah_pane_t4

0xdbd9,	// (0x0006c1b2) main_radioblah_text_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) main_radioblah_text_pane

0xc7bf,	// (0x0006ad98) main_radioblah_info_pane_g1_ParamLimits

0xc817,	// (0x0006adf0) main_radioblah_info_pane_t4_ParamLimits

0xc817,	// (0x0006adf0) main_radioblah_info_pane_t4

0xdbd9,	// (0x0006c1b2) main_sp_fs_calendar_pane

0x8241,	// (0x0006681a) main_phacti_pane_g1

0x8249,	// (0x00066822) phacti_note_pane_ParamLimits

0x8249,	// (0x00066822) phacti_note_pane

0xceab,	// (0x0006b484) phacti_term_pane_ParamLimits

0xceab,	// (0x0006b484) phacti_term_pane

0xcec0,	// (0x0006b499) phacti_note_pane_t1_ParamLimits

0xcec0,	// (0x0006b499) phacti_note_pane_t1

0xcb4c,	// (0x0006b125) phacti_term_pane_g1

0xcb54,	// (0x0006b12d) phacti_term_pane_t1_ParamLimits

0xcb54,	// (0x0006b12d) phacti_term_pane_t1

0xced7,	// (0x0006b4b0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5ec,	// (0x0006cbc5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbe9,	// (0x0006e1c2) popup_sp_fs_calendar_preview_list_single_pane_g

0xcedf,	// (0x0006b4b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcedf,	// (0x0006b4b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcef5,	// (0x0006b4ce) aid_popup_sp_fs_bg_corner_pane

0xe38f,	// (0x0006c968) popup_sp_fs_calendar_preview_bg_pane_g1

0xd923,	// (0x0006befc) popup_sp_fs_calendar_preview_bg_pane

0xcefd,	// (0x0006b4d6) popup_sp_fs_calendar_preview_list_pane

0xcf05,	// (0x0006b4de) bg_main_sp_fs_cale_pane_ParamLimits

0xcf05,	// (0x0006b4de) bg_main_sp_fs_cale_pane

0xcf1d,	// (0x0006b4f6) listscroll_cale_mrui_pane_ParamLimits

0xcf1d,	// (0x0006b4f6) listscroll_cale_mrui_pane

0xadf1,	// (0x000693ca) listscroll_sp_fs_schedule_track_pane

0xcb93,	// (0x0006b16c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcb93,	// (0x0006b16c) main_sp_fs_ctrlbar_pane_cp01

0xadf1,	// (0x000693ca) main_sp_fs_ribbon_pane

0xcba9,	// (0x0006b182) popup_sp_fs_cale_preview_window

0xcbbb,	// (0x0006b194) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcbbb,	// (0x0006b194) list_single_sp_fs_schedule_track_pane

0xadb0,	// (0x00069389) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xadb0,	// (0x00069389) bg_sp_fs_highlight_list_pane_cp03

0xada4,	// (0x0006937d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xada4,	// (0x0006937d) list_single_sp_fs_schedule_track_pane_g1

0xada4,	// (0x0006937d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xada4,	// (0x0006937d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbee,	// (0x0006e1c7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbee,	// (0x0006e1c7) list_single_sp_fs_schedule_track_pane_g

0x825d,	// (0x00066836) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x825d,	// (0x00066836) list_single_sp_fs_schedule_track_pane_t1

0x826f,	// (0x00066848) sp_fs_schedule_track_pane_ParamLimits

0x826f,	// (0x00066848) sp_fs_schedule_track_pane

0xadf9,	// (0x000693d2) sp_fs_schedule_track_pane_g1

0xadf9,	// (0x000693d2) sp_fs_schedule_track_pane_g2

0xadf9,	// (0x000693d2) sp_fs_schedule_track_pane_g3

0xadf9,	// (0x000693d2) sp_fs_schedule_track_pane_g4

0xadf9,	// (0x000693d2) sp_fs_schedule_track_pane_g5

0x0004,

0xfbf3,	// (0x0006e1cc) sp_fs_schedule_track_pane_g

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g1

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g2

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g3

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g4

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g5

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g6

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g7

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g8

0xadf9,	// (0x000693d2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbfe,	// (0x0006e1d7) bg_sp_fs_schedule_viewer_highlight_g

0xadf1,	// (0x000693ca) bg_main_sp_fs_ribbon_pane

0xadf9,	// (0x000693d2) main_sp_fs_ribbon_pane_g1

0xcf35,	// (0x0006b50e) main_sp_fs_ribbon_pane_t1

0xcf35,	// (0x0006b50e) main_sp_fs_ribbon_pane_t2

0xcf35,	// (0x0006b50e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc11,	// (0x0006e1ea) main_sp_fs_ribbon_pane_t

0xadf1,	// (0x000693ca) main_sp_fs_ribbon_scheduler_pane

0xadf9,	// (0x000693d2) bg_main_sp_fs_ribbon_pane_g1

0xadf9,	// (0x000693d2) bg_main_sp_fs_ribbon_pane_g2

0xadf9,	// (0x000693d2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf690,	// (0x0006dc69) bg_main_sp_fs_ribbon_pane_g

0xadf9,	// (0x000693d2) main_sp_fs_ribbon_scheduler_pane_g1

0xadf9,	// (0x000693d2) main_sp_fs_ribbon_scheduler_pane_g2

0xadf9,	// (0x000693d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf690,	// (0x0006dc69) main_sp_fs_ribbon_scheduler_pane_g

0xcf43,	// (0x0006b51c) list_cale_mrui_pane

0x827b,	// (0x00066854) sp_fs_scroll_pane_cp07_ParamLimits

0x827b,	// (0x00066854) sp_fs_scroll_pane_cp07

0xadb0,	// (0x00069389) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xadb0,	// (0x00069389) bg_sp_fs_schedule_viewer_highlight

0xadf1,	// (0x000693ca) list_single_sp_fs_schedule_track_pane_cp01

0xadf1,	// (0x000693ca) list_sp_fs_schedule_track_pane

0xcf50,	// (0x0006b529) sp_fs_scroll_pane_cp06_ParamLimits

0xcf50,	// (0x0006b529) sp_fs_scroll_pane_cp06

0xe38f,	// (0x0006c968) bgmain_sp_fs_calendar_pane_g1

0x8297,	// (0x00066870) list_single_cale_mrui_pane_ParamLimits

0x8297,	// (0x00066870) list_single_cale_mrui_pane

0xcbc7,	// (0x0006b1a0) list_single_cale_mrui_row_pane_ParamLimits

0xcbc7,	// (0x0006b1a0) list_single_cale_mrui_row_pane

0xcbd4,	// (0x0006b1ad) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcbd4,	// (0x0006b1ad) list_single_cale_mrui_row_pane_g1

0xcc0c,	// (0x0006b1e5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcc0c,	// (0x0006b1e5) list_single_cale_mrui_row_pane_t1

0x82b8,	// (0x00066891) list_single_cale_mrui_row_pane_t2_ParamLimits

0x82b8,	// (0x00066891) list_single_cale_mrui_row_pane_t2

0xcc1e,	// (0x0006b1f7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcc1e,	// (0x0006b1f7) list_single_cale_mrui_row_pane_t3

0xcc4d,	// (0x0006b226) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcc4d,	// (0x0006b226) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc1f,	// (0x0006e1f8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc1f,	// (0x0006e1f8) list_single_cale_mrui_row_pane_t

0x8320,	// (0x000668f9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8320,	// (0x000668f9) list_single_cmail_header_editor_pane_bg_cp01

0x834e,	// (0x00066927) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x834e,	// (0x00066927) list_single_cmail_header_editor_pane_bg_cp02

0xcf71,	// (0x0006b54a) main_radioblah_text_pane_t1_ParamLimits

0xcf71,	// (0x0006b54a) main_radioblah_text_pane_t1

0xcf8b,	// (0x0006b564) cam6_indi_pane_cp01

0xcf93,	// (0x0006b56c) cam6_mode_pane_cp01

0xcf9b,	// (0x0006b574) cam6_pano_pane

0xcfa4,	// (0x0006b57d) cam6_zoom_pane_cp01

0xcfac,	// (0x0006b585) cam6_pano_image_pane

0xcfb7,	// (0x0006b590) cam6_pano_pane_g1

0xc57b,	// (0x0006ab54) cam6_pano_pane_g2

0xcfc0,	// (0x0006b599) cam6_pano_pane_g3

0xcfc9,	// (0x0006b5a2) cam6_pano_pane_g4

0xb08c,	// (0x00069665) cam6_pano_pane_g5

0xcfd2,	// (0x0006b5ab) cam6_pano_pane_g6

0xcfdc,	// (0x0006b5b5) cam6_pano_pane_g7

0xcfe4,	// (0x0006b5bd) cam6_pano_pane_g8

0xcfed,	// (0x0006b5c6) cam6_pano_pane_g9

0x0008,

0xfc28,	// (0x0006e201) cam6_pano_pane_g

0xd923,	// (0x0006befc) main_browser_tag_pane

0xce8c,	// (0x0006b465) grid_navstr_albumart_pane

0xcff8,	// (0x0006b5d1) cell_navstr_albumart_pane_ParamLimits

0xcff8,	// (0x0006b5d1) cell_navstr_albumart_pane

0xd018,	// (0x0006b5f1) cell_navstr_albumart_pane_g1

0xd020,	// (0x0006b5f9) cell_navstr_albumart_pane_g2

0xd028,	// (0x0006b601) cell_navstr_albumart_pane_g3

0xd030,	// (0x0006b609) cell_navstr_albumart_pane_g4

0x0003,

0xfc3b,	// (0x0006e214) cell_navstr_albumart_pane_g

0x836e,	// (0x00066947) bt_list_pane_ParamLimits

0x836e,	// (0x00066947) bt_list_pane

0x8382,	// (0x0006695b) bt_list_pane_t1

0x8391,	// (0x0006696a) bt_list_pane_t2

0x0001,

0xfc44,	// (0x0006e21d) bt_list_pane_t

0xd923,	// (0x0006befc) main_cale_prevew_pane

0x83a0,	// (0x00066979) popup_cale_preview_window_ParamLimits

0x83a0,	// (0x00066979) popup_cale_preview_window

0xdbd9,	// (0x0006c1b2) bg_popup_preview_window_pane_cp05_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_popup_preview_window_pane_cp05

0xd038,	// (0x0006b611) list_cale_preview_pane_ParamLimits

0xd038,	// (0x0006b611) list_cale_preview_pane

0x83bb,	// (0x00066994) list_double_cale_preview_pane_ParamLimits

0x83bb,	// (0x00066994) list_double_cale_preview_pane

0x83cd,	// (0x000669a6) list_single_cale_preview_pane_ParamLimits

0x83cd,	// (0x000669a6) list_single_cale_preview_pane

0x83e3,	// (0x000669bc) list_single_cale_preview_pane_g1

0x83eb,	// (0x000669c4) list_single_cale_preview_pane_t1_ParamLimits

0x83eb,	// (0x000669c4) list_single_cale_preview_pane_t1

0x8400,	// (0x000669d9) list_double_cale_preview_pane_g1

0x8408,	// (0x000669e1) list_double_cale_preview_pane_t1_ParamLimits

0x8408,	// (0x000669e1) list_double_cale_preview_pane_t1

0x841d,	// (0x000669f6) list_double_cale_preview_pane_t2_ParamLimits

0x841d,	// (0x000669f6) list_double_cale_preview_pane_t2

0x0001,

0xfc49,	// (0x0006e222) list_double_cale_preview_pane_t_ParamLimits

0xfc49,	// (0x0006e222) list_double_cale_preview_pane_t

0xd923,	// (0x0006befc) main_ezdial_pane

0xdbd9,	// (0x0006c1b2) main_sp_fs_email_pane_ParamLimits

0x7cb4,	// (0x0006628d) cmail_ddmenu_btn01_pane_ParamLimits

0x7cb4,	// (0x0006628d) cmail_ddmenu_btn01_pane

0x7cc7,	// (0x000662a0) cmail_ddmenu_btn02_pane_ParamLimits

0x7cc7,	// (0x000662a0) cmail_ddmenu_btn02_pane

0x7cea,	// (0x000662c3) cmail_ddmenu_btn03_pane_ParamLimits

0x7cea,	// (0x000662c3) cmail_ddmenu_btn03_pane

0x7d83,	// (0x0006635c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7da7,	// (0x00066380) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x80d6,	// (0x000666af) list_cmail_body_pane_ParamLimits

0xce00,	// (0x0006b3d9) bg_button_pane_cp12

0xce09,	// (0x0006b3e2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xce09,	// (0x0006b3e2) list_single_cmail_header_detail_pane_g3

0xcb28,	// (0x0006b101) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcb28,	// (0x0006b101) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbd5,	// (0x0006e1ae) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbd5,	// (0x0006e1ae) list_single_cmail_header_detail_pane_t

0xcb69,	// (0x0006b142) phacti_term_pane_t2_ParamLimits

0xcb69,	// (0x0006b142) phacti_term_pane_t2

0x0001,

0xfbe4,	// (0x0006e1bd) phacti_term_pane_t_ParamLimits

0xfbe4,	// (0x0006e1bd) phacti_term_pane_t

0xd044,	// (0x0006b61d) aid_size_list_single_double

0x8435,	// (0x00066a0e) popup_ezdial_listscroll_window

0xd050,	// (0x0006b629) popup_number_entry_window_cp01

0xe605,	// (0x0006cbde) bg_popup_call_pane_cp09

0xd05d,	// (0x0006b636) ezdial_list_pane

0xd065,	// (0x0006b63e) scroll_pane_cp23

0x28ee,	// (0x00060ec7) bg_button_pane_cp028_ParamLimits

0x28ee,	// (0x00060ec7) bg_button_pane_cp028

0x844c,	// (0x00066a25) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x844c,	// (0x00066a25) cmail_ddmenu_btn01_pane_g1

0x8458,	// (0x00066a31) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8458,	// (0x00066a31) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc4e,	// (0x0006e227) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc4e,	// (0x0006e227) cmail_ddmenu_btn01_pane_g

0xd06d,	// (0x0006b646) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd06d,	// (0x0006b646) cmail_ddmenu_btn01_pane_t1

0x28ee,	// (0x00060ec7) bg_button_pane_cp029_ParamLimits

0x28ee,	// (0x00060ec7) bg_button_pane_cp029

0x846c,	// (0x00066a45) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x846c,	// (0x00066a45) cmail_ddmenu_btn02_pane_g1

0x8484,	// (0x00066a5d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8484,	// (0x00066a5d) cmail_ddmenu_btn02_pane_t1

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp031_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp031

0x846c,	// (0x00066a45) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x846c,	// (0x00066a45) cmail_ddmenu_btn03_pane_g1

0x8484,	// (0x00066a5d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8484,	// (0x00066a5d) cmail_ddmenu_btn03_pane_t1

0xe399,	// (0x0006c972) cell_dialer2_keypad_pane_t1_ParamLimits

0xb0ca,	// (0x000696a3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb0ca,	// (0x000696a3) cell_dialer2_keypad_pane_t1_copy1

0x76dc,	// (0x00065cb5) ncimui_group_button_pane

0xdbd9,	// (0x0006c1b2) main_sp_fs_calendar_pane_ParamLimits

0x80eb,	// (0x000666c4) list_single_cmail_header_caption_pane_ParamLimits

0xcb8a,	// (0x0006b163) aid_recal_txt_sm_pane

0xd923,	// (0x0006befc) mian_recal_day_pane

0xcba9,	// (0x0006b182) popup_sp_fs_cale_preview_window_ParamLimits

0xd083,	// (0x0006b65c) list_recal_day_pane

0xcc97,	// (0x0006b270) list_single_recal_day_pane_ParamLimits

0xcc97,	// (0x0006b270) list_single_recal_day_pane

0xd0aa,	// (0x0006b683) list_single_recal_day_pane_g1_ParamLimits

0xd0aa,	// (0x0006b683) list_single_recal_day_pane_g1

0xcca9,	// (0x0006b282) list_single_recal_day_pane_g2_ParamLimits

0xcca9,	// (0x0006b282) list_single_recal_day_pane_g2

0xccb5,	// (0x0006b28e) list_single_recal_day_pane_g3_ParamLimits

0xccb5,	// (0x0006b28e) list_single_recal_day_pane_g3

0x84a8,	// (0x00066a81) list_single_recal_day_pane_g4_ParamLimits

0x84a8,	// (0x00066a81) list_single_recal_day_pane_g4

0xccc1,	// (0x0006b29a) list_single_recal_day_pane_g5_ParamLimits

0xccc1,	// (0x0006b29a) list_single_recal_day_pane_g5

0xcccd,	// (0x0006b2a6) list_single_recal_day_pane_g6_ParamLimits

0xcccd,	// (0x0006b2a6) list_single_recal_day_pane_g6

0x0004,

0xfc5d,	// (0x0006e236) list_single_recal_day_pane_g_ParamLimits

0xfc5d,	// (0x0006e236) list_single_recal_day_pane_g

0xcce1,	// (0x0006b2ba) list_single_recal_day_pane_t1

0xccf3,	// (0x0006b2cc) list_single_recal_day_pane_t2

0x0001,

0xfc68,	// (0x0006e241) list_single_recal_day_pane_t

0x84c0,	// (0x00066a99) ncimui_query_button_pane_ParamLimits

0x84c0,	// (0x00066a99) ncimui_query_button_pane

0x84d0,	// (0x00066aa9) ncimui_query_button_pane_t1_ParamLimits

0x84d0,	// (0x00066aa9) ncimui_query_button_pane_t1

0xd0b6,	// (0x0006b68f) ncimui_query_button_pane_t2_ParamLimits

0xd0b6,	// (0x0006b68f) ncimui_query_button_pane_t2

0x0001,

0xfc6d,	// (0x0006e246) ncimui_query_button_pane_t_ParamLimits

0xfc6d,	// (0x0006e246) ncimui_query_button_pane_t

0x84e3,	// (0x00066abc) query_button_pane_ParamLimits

0x84e3,	// (0x00066abc) query_button_pane

0xd923,	// (0x0006befc) bg_button_pane_cp0028

0xd0c9,	// (0x0006b6a2) query_button_pane_t1

0x42b0,	// (0x00062889) main_tport_pane_ParamLimits

0x7f9a,	// (0x00066573) bg_popup_window_pane_cp01_ParamLimits

0x7f9a,	// (0x00066573) bg_popup_window_pane_cp01

0x7fb5,	// (0x0006658e) heading_pane_cp08_ParamLimits

0x7fb5,	// (0x0006658e) heading_pane_cp08

0x7fc8,	// (0x000665a1) heading_pane_cp07_ParamLimits

0x7fc8,	// (0x000665a1) heading_pane_cp07

0x806f,	// (0x00066648) cell_tport_appsw_pane_g2

0x0002,

0xfbc2,	// (0x0006e19b) cell_tport_appsw_pane_g

0x2b80,	// (0x00061159) input_candi_list_open_g1

0xe9aa,	// (0x0006cf83) list_cale_time_pane_g6_ParamLimits

0xe9aa,	// (0x0006cf83) list_cale_time_pane_g6

0x48d1,	// (0x00062eaa) aid_size_touch_calib_1_ParamLimits

0x48d1,	// (0x00062eaa) aid_size_touch_calib_1

0x48e3,	// (0x00062ebc) aid_size_touch_calib_2_ParamLimits

0x48e3,	// (0x00062ebc) aid_size_touch_calib_2

0x48fb,	// (0x00062ed4) aid_size_touch_calib_3_ParamLimits

0x48fb,	// (0x00062ed4) aid_size_touch_calib_3

0x4919,	// (0x00062ef2) aid_size_touch_calib_4_ParamLimits

0x4919,	// (0x00062ef2) aid_size_touch_calib_4

0x4931,	// (0x00062f0a) main_touch_calib_button_group_pane_ParamLimits

0x4931,	// (0x00062f0a) main_touch_calib_button_group_pane

0x4949,	// (0x00062f22) main_touch_calib_pane_g1_ParamLimits

0x495b,	// (0x00062f34) main_touch_calib_pane_g2_ParamLimits

0x496d,	// (0x00062f46) main_touch_calib_pane_g3_ParamLimits

0x497f,	// (0x00062f58) main_touch_calib_pane_g4_ParamLimits

0xf63e,	// (0x0006dc17) main_touch_calib_pane_g_ParamLimits

0x4991,	// (0x00062f6a) main_touch_calib_pane_t1_ParamLimits

0x49ab,	// (0x00062f84) main_touch_calib_pane_t2_ParamLimits

0x49c5,	// (0x00062f9e) main_touch_calib_pane_t3_ParamLimits

0x49d9,	// (0x00062fb2) main_touch_calib_pane_t4_ParamLimits

0x49ed,	// (0x00062fc6) main_touch_calib_pane_t5_ParamLimits

0xf647,	// (0x0006dc20) main_touch_calib_pane_t_ParamLimits

0xae59,	// (0x00069432) list_single_fp_cale_pane_g3_ParamLimits

0xae59,	// (0x00069432) list_single_fp_cale_pane_g3

0xa051,	// (0x0006862a) bg_button_pane_cp012_ParamLimits

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp03_ParamLimits

0x688d,	// (0x00064e66) cell_vitu2_function_top_pane_g1_ParamLimits

0xa051,	// (0x0006862a) bg_vkb2_func_pane_cp04_ParamLimits

0x7667,	// (0x00065c40) main_ncimui_button_group_pane_ParamLimits

0x7667,	// (0x00065c40) main_ncimui_button_group_pane

0x76c7,	// (0x00065ca0) main_ncimui_pane_t3_ParamLimits

0x76c7,	// (0x00065ca0) main_ncimui_pane_t3

0xcea2,	// (0x0006b47b) phacti_button_group_pane

0xd044,	// (0x0006b61d) aid_size_list_single_double_ParamLimits

0x8435,	// (0x00066a0e) popup_ezdial_listscroll_window_ParamLimits

0xd050,	// (0x0006b629) popup_number_entry_window_cp01_ParamLimits

0x84f6,	// (0x00066acf) phacti_button_pane_ParamLimits

0x84f6,	// (0x00066acf) phacti_button_pane

0xd923,	// (0x0006befc) bg_button_pane_cp14

0xd0d7,	// (0x0006b6b0) phacti_button_pane_t1

0x8507,	// (0x00066ae0) main_touch_calib_button_pane_ParamLimits

0x8507,	// (0x00066ae0) main_touch_calib_button_pane

0xe3ed,	// (0x0006c9c6) bg_button_pane_cp18_ParamLimits

0xe3ed,	// (0x0006c9c6) bg_button_pane_cp18

0xd0e5,	// (0x0006b6be) main_touch_calib_button_pane_t1_ParamLimits

0xd0e5,	// (0x0006b6be) main_touch_calib_button_pane_t1

0xd0fb,	// (0x0006b6d4) main_touch_calib_button_pane_t2_ParamLimits

0xd0fb,	// (0x0006b6d4) main_touch_calib_button_pane_t2

0x0001,

0xfc72,	// (0x0006e24b) main_touch_calib_button_pane_t_ParamLimits

0xfc72,	// (0x0006e24b) main_touch_calib_button_pane_t

0xd923,	// (0x0006befc) cell_ncimui_button_pane

0xd923,	// (0x0006befc) bg_button_pane_cp032

0xd119,	// (0x0006b6f2) cell_ncimui_button_pane_t1

0xb599,	// (0x00069b72) image3_infobar_pane_ParamLimits

0xb599,	// (0x00069b72) image3_infobar_pane

0x7a39,	// (0x00066012) fs_bigclock_status_pane_ParamLimits

0x7a39,	// (0x00066012) fs_bigclock_status_pane

0x7a46,	// (0x0006601f) main_fs_bigclock_clock_pane_ParamLimits

0x7a46,	// (0x0006601f) main_fs_bigclock_clock_pane

0x7a64,	// (0x0006603d) main_fs_bigclock_indi_pane_ParamLimits

0x7a64,	// (0x0006603d) main_fs_bigclock_indi_pane

0x7a96,	// (0x0006606f) main_fs_bigclock_swipe_pane_ParamLimits

0x7a96,	// (0x0006606f) main_fs_bigclock_swipe_pane

0xd923,	// (0x0006befc) main_fs_clock_dumped_data

0xc688,	// (0x0006ac61) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc688,	// (0x0006ac61) list_single_fs_bigclock_indicator_pane_g1

0xc6a3,	// (0x0006ac7c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc6a3,	// (0x0006ac7c) list_single_fs_bigclock_indicator_pane_g2

0xc6bd,	// (0x0006ac96) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc6bd,	// (0x0006ac96) list_single_fs_bigclock_indicator_pane_g3

0xc6d7,	// (0x0006acb0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc6d7,	// (0x0006acb0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb2d,	// (0x0006e106) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb2d,	// (0x0006e106) list_single_fs_bigclock_indicator_pane_g

0xc702,	// (0x0006acdb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc702,	// (0x0006acdb) list_single_fs_bigclock_indicator_pane_t1

0xc72a,	// (0x0006ad03) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc72a,	// (0x0006ad03) list_single_fs_bigclock_indicator_pane_t2

0xc752,	// (0x0006ad2b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc752,	// (0x0006ad2b) list_single_fs_bigclock_indicator_pane_t3

0xc77a,	// (0x0006ad53) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc77a,	// (0x0006ad53) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb38,	// (0x0006e111) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb38,	// (0x0006e111) list_single_fs_bigclock_indicator_pane_t

0xd127,	// (0x0006b700) image3_infobar_fav_pane_ParamLimits

0xd127,	// (0x0006b700) image3_infobar_fav_pane

0xd137,	// (0x0006b710) image3_infobar_loc_pane_ParamLimits

0xd137,	// (0x0006b710) image3_infobar_loc_pane

0xd14b,	// (0x0006b724) image3_infobar_time_pane_ParamLimits

0xd14b,	// (0x0006b724) image3_infobar_time_pane

0xe38f,	// (0x0006c968) image3_infobar_time_pane_g1

0xd15b,	// (0x0006b734) image3_infobar_time_pane_t1

0xe38f,	// (0x0006c968) image3_infobar_loc_pane_g1

0xd169,	// (0x0006b742) image3_infobar_loc_pane_g2

0x0001,

0xfc77,	// (0x0006e250) image3_infobar_loc_pane_g

0xd171,	// (0x0006b74a) image3_infobar_loc_pane_t1

0xe38f,	// (0x0006c968) image3_infobar_fav_pane_g1

0xd17f,	// (0x0006b758) image3_infobar_fav_pane_g2

0x0001,

0xfc7c,	// (0x0006e255) image3_infobar_fav_pane_g

0xd187,	// (0x0006b760) fs_bigclock_status_battery_pane

0xd190,	// (0x0006b769) fs_bigclock_status_signal_pane

0xd199,	// (0x0006b772) fs_bigclock_status_title_pane

0xd1a2,	// (0x0006b77b) fs_bigclock_status_signal_pane_g1

0xd1ab,	// (0x0006b784) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc81,	// (0x0006e25a) fs_bigclock_status_signal_pane_g

0xd1b3,	// (0x0006b78c) fs_bigclock_status_battery_pane_g1

0xd1bc,	// (0x0006b795) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc86,	// (0x0006e25f) fs_bigclock_status_battery_pane_g

0xd1c4,	// (0x0006b79d) fs_bigclock_status_title_pane_t1

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g1

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g2

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g3

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc8b,	// (0x0006e264) main_fs_bigclock_clock_pane_g

0x852f,	// (0x00066b08) main_fs_bigclock_clock_pane_t1

0x8548,	// (0x00066b21) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc94,	// (0x0006e26d) main_fs_bigclock_clock_pane_t

0xd1d2,	// (0x0006b7ab) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1d2,	// (0x0006b7ab) list_single_fs_bigclock_indicator_pane

0xd1e3,	// (0x0006b7bc) list_single_fs_bigclock_pane_ParamLimits

0xd1e3,	// (0x0006b7bc) list_single_fs_bigclock_pane

0xd209,	// (0x0006b7e2) main_fs_bigclock_indicator_pane_t1

0xd218,	// (0x0006b7f1) list_single_fs_bigclock_pane_g1

0xd220,	// (0x0006b7f9) list_single_fs_bigclock_pane_t1

0xe38f,	// (0x0006c968) main_fs_bigclock_swipe_pane_g1

0xd263,	// (0x0006b83c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfca5,	// (0x0006e27e) main_fs_bigclock_swipe_pane_g

0xd26b,	// (0x0006b844) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd26b,	// (0x0006b844) main_fs_bigclock_swipe_pane_t1

0x257f,	// (0x00060b58) call_type_pane_ParamLimits

0xd923,	// (0x0006befc) main_btmg_pane

0xcc00,	// (0x0006b1d9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcc00,	// (0x0006b1d9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc18,	// (0x0006e1f1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc18,	// (0x0006e1f1) list_single_cale_mrui_row_pane_g

0xcc86,	// (0x0006b25f) list_recal_vselct_arw_lo_pane

0xd0a2,	// (0x0006b67b) list_recal_vselct_arw_up_pane

0xcc8e,	// (0x0006b267) list_recal_vselct_pane

0x85a2,	// (0x00066b7b) btmg_button_pane

0x85ac,	// (0x00066b85) main_btmg_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp044

0xd288,	// (0x0006b861) btmg_button_pane_t1

0xa590,	// (0x00068b69) aid_listscroll_gen

0xdbd9,	// (0x0006c1b2) main_cntbar_detail_pane

0xcdd3,	// (0x0006b3ac) list_cmail_folder_pane

0xa0f0,	// (0x000686c9) sp_fs_scroll_pane_cp03_ParamLimits

0x85b6,	// (0x00066b8f) list_single_fs_dyc_pane_cp01_ParamLimits

0x85b6,	// (0x00066b8f) list_single_fs_dyc_pane_cp01

0xd296,	// (0x0006b86f) aid_size_cmail_indent

0xcd05,	// (0x0006b2de) list_single_dyc_row_pane_cp01

0x85f9,	// (0x00066bd2) cntbar_detail_list_pane_ParamLimits

0x85f9,	// (0x00066bd2) cntbar_detail_list_pane

0x8645,	// (0x00066c1e) main_cntbar_detail_cont_pane_ParamLimits

0x8645,	// (0x00066c1e) main_cntbar_detail_cont_pane

0xa0f0,	// (0x000686c9) scroll_pane_cp032_ParamLimits

0xa0f0,	// (0x000686c9) scroll_pane_cp032

0x8659,	// (0x00066c32) cntbar_detail_list_event_pane_ParamLimits

0x8659,	// (0x00066c32) cntbar_detail_list_event_pane

0x8609,	// (0x00066be2) cntbar_detail_list_shct_pane

0xe86c,	// (0x0006ce45) aid_list_gen

0xd29f,	// (0x0006b878) aid_scroll

0xd2a8,	// (0x0006b881) aid_size_touch_scroll_bar

0x7afc,	// (0x000660d5) aid_list_double

0x8669,	// (0x00066c42) aid_list_single

0xd2b1,	// (0x0006b88a) aid_list_single_lg

0x8672,	// (0x00066c4b) aid_list_z_g_a_sm

0x867a,	// (0x00066c53) aid_list_z_g_d

0x8682,	// (0x00066c5b) aid_txt_z_prm

0x8690,	// (0x00066c69) aid_txt_z_prm_cp01

0x869e,	// (0x00066c77) aid_txt_z_sec

0x86ac,	// (0x00066c85) main_cntbar_detail_cont_pane_g1_ParamLimits

0x86ac,	// (0x00066c85) main_cntbar_detail_cont_pane_g1

0x86c0,	// (0x00066c99) main_cntbar_detail_cont_pane_g2_ParamLimits

0x86c0,	// (0x00066c99) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcaa,	// (0x0006e283) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcaa,	// (0x0006e283) main_cntbar_detail_cont_pane_g

0xd2ba,	// (0x0006b893) main_cntbar_detail_cont_pane_t1

0xd2c8,	// (0x0006b8a1) main_cntbar_detail_cont_pane_t2

0xd2d6,	// (0x0006b8af) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcaf,	// (0x0006e288) main_cntbar_detail_cont_pane_t

0x86d0,	// (0x00066ca9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x86d0,	// (0x00066ca9) cell_cntbar_detail_list_shct_pane

0xd2e4,	// (0x0006b8bd) cntbar_detail_list_shct_pane_g1

0xd2ed,	// (0x0006b8c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcb6,	// (0x0006e28f) cntbar_detail_list_shct_pane_g

0x86e4,	// (0x00066cbd) cntbar_detail_list_event_pane_g1_ParamLimits

0x86e4,	// (0x00066cbd) cntbar_detail_list_event_pane_g1

0x86f0,	// (0x00066cc9) cntbar_detail_list_event_pane_g2_ParamLimits

0x86f0,	// (0x00066cc9) cntbar_detail_list_event_pane_g2

0x0005,

0xfcbb,	// (0x0006e294) cntbar_detail_list_event_pane_g_ParamLimits

0xfcbb,	// (0x0006e294) cntbar_detail_list_event_pane_g

0x875c,	// (0x00066d35) cntbar_detail_list_event_pane_t1_ParamLimits

0x875c,	// (0x00066d35) cntbar_detail_list_event_pane_t1

0x8771,	// (0x00066d4a) cntbar_detail_list_event_pane_t2_ParamLimits

0x8771,	// (0x00066d4a) cntbar_detail_list_event_pane_t2

0x0002,

0xfcc8,	// (0x0006e2a1) cntbar_detail_list_event_pane_t_ParamLimits

0xfcc8,	// (0x0006e2a1) cntbar_detail_list_event_pane_t

0xe38f,	// (0x0006c968) cell_cntbar_detail_list_shct_pane_g1

0xefb1,	// (0x0006d58a) navi_pane_mv_g3

0xdbd9,	// (0x0006c1b2) main_cntbar_detail_pane_ParamLimits

0xd923,	// (0x0006befc) main_notif_wgt_pane

0xb292,	// (0x0006986b) aid_tch_main_mp4_pane_g4

0xb50a,	// (0x00069ae3) popup_slider_window_cp02

0xcc7c,	// (0x0006b255) list_recal_day_event_pane

0x85cd,	// (0x00066ba6) cntbar_detail_btn_pane_ParamLimits

0x85cd,	// (0x00066ba6) cntbar_detail_btn_pane

0x85e3,	// (0x00066bbc) cntbar_detail_btn_pane_cp01_ParamLimits

0x85e3,	// (0x00066bbc) cntbar_detail_btn_pane_cp01

0x8609,	// (0x00066be2) cntbar_detail_list_shct_pane_ParamLimits

0x8619,	// (0x00066bf2) cntbar_detail_pane_g1_ParamLimits

0x8619,	// (0x00066bf2) cntbar_detail_pane_g1

0x8629,	// (0x00066c02) cntbar_detail_pane_t1_ParamLimits

0x8629,	// (0x00066c02) cntbar_detail_pane_t1

0x86fc,	// (0x00066cd5) cntbar_detail_list_event_pane_g3_ParamLimits

0x86fc,	// (0x00066cd5) cntbar_detail_list_event_pane_g3

0x8714,	// (0x00066ced) cntbar_detail_list_event_pane_g4_ParamLimits

0x8714,	// (0x00066ced) cntbar_detail_list_event_pane_g4

0x872c,	// (0x00066d05) cntbar_detail_list_event_pane_g5_ParamLimits

0x872c,	// (0x00066d05) cntbar_detail_list_event_pane_g5

0x8744,	// (0x00066d1d) cntbar_detail_list_event_pane_g6_ParamLimits

0x8744,	// (0x00066d1d) cntbar_detail_list_event_pane_g6

0x8786,	// (0x00066d5f) cntbar_detail_list_event_pane_t3_ParamLimits

0x8786,	// (0x00066d5f) cntbar_detail_list_event_pane_t3

0x8798,	// (0x00066d71) popup_notif_wgt_window_ParamLimits

0x8798,	// (0x00066d71) popup_notif_wgt_window

0x87b1,	// (0x00066d8a) popup_submenu_window_cp01_ParamLimits

0x87b1,	// (0x00066d8a) popup_submenu_window_cp01

0xe605,	// (0x0006cbde) bg_popup_window_pane_cp10

0xd2f6,	// (0x0006b8cf) listscroll_notif_wgt_pane

0xd308,	// (0x0006b8e1) list_notif_wgt_window

0xd349,	// (0x0006b922) scroll_pane_cp033

0x87c7,	// (0x00066da0) list_notif_wgt_row_pane_ParamLimits

0x87c7,	// (0x00066da0) list_notif_wgt_row_pane

0xd352,	// (0x0006b92b) aid_size_list_notif_wgt_del

0xd35f,	// (0x0006b938) list_notif_wgt_row_pane_g1

0xd36b,	// (0x0006b944) list_notif_wgt_row_pane_g2

0xd37a,	// (0x0006b953) list_notif_wgt_row_pane_g3

0x0002,

0xfccf,	// (0x0006e2a8) list_notif_wgt_row_pane_g

0xd387,	// (0x0006b960) list_notif_wgt_row_pane_t1

0xd39d,	// (0x0006b976) list_notif_wgt_row_pane_t2

0xd3af,	// (0x0006b988) list_notif_wgt_row_pane_t3

0x0002,

0xfcd6,	// (0x0006e2af) list_notif_wgt_row_pane_t

0xba79,	// (0x0006a052) list_recal_day_event_pane_g1

0xd3c1,	// (0x0006b99a) list_recal_day_event_pane_t1

0xd923,	// (0x0006befc) bg_button_pane_cp045

0xd3d0,	// (0x0006b9a9) cntbar_detail_btn_pane_t1

0x28ee,	// (0x00060ec7) main_callh_pane_ParamLimits

0x28ee,	// (0x00060ec7) main_callh_pane

0xd923,	// (0x0006befc) main_coverflow0_pane

0xd923,	// (0x0006befc) main_wgtman_pane

0x7aae,	// (0x00066087) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aae,	// (0x00066087) main_fs_bigclock_unlock_btn_pane

0x8067,	// (0x00066640) bg_button_pane_cp16

0x8077,	// (0x00066650) cell_tport_appsw_pane_g3

0x87d7,	// (0x00066db0) cf0_flow_pane_ParamLimits

0x87d7,	// (0x00066db0) cf0_flow_pane

0xd3de,	// (0x0006b9b7) listscroll_cf0_pane

0xd3e9,	// (0x0006b9c2) main_cf0_pane_g1

0x87ec,	// (0x00066dc5) main_cf0_pane_t1_ParamLimits

0x87ec,	// (0x00066dc5) main_cf0_pane_t1

0x8803,	// (0x00066ddc) main_cf0_pane_t2_ParamLimits

0x8803,	// (0x00066ddc) main_cf0_pane_t2

0x0001,

0xfce2,	// (0x0006e2bb) main_cf0_pane_t_ParamLimits

0xfce2,	// (0x0006e2bb) main_cf0_pane_t

0xd3fb,	// (0x0006b9d4) scroll_pane_cp11

0x881a,	// (0x00066df3) cf0_flow_pane_g1

0x8822,	// (0x00066dfb) cf0_flow_pane_g2

0x0001,

0xfce7,	// (0x0006e2c0) cf0_flow_pane_g

0x882a,	// (0x00066e03) cf0_flow_pane_t1

0xd923,	// (0x0006befc) main_call6_pane

0xd923,	// (0x0006befc) main_calllock_pane

0x8838,	// (0x00066e11) call6_btn_grp_pane_ParamLimits

0x8838,	// (0x00066e11) call6_btn_grp_pane

0x8852,	// (0x00066e2b) call6_pane_g1_ParamLimits

0x8852,	// (0x00066e2b) call6_pane_g1

0x8868,	// (0x00066e41) popup_call6_1st_window_ParamLimits

0x8868,	// (0x00066e41) popup_call6_1st_window

0x8879,	// (0x00066e52) popup_call6_2nd_window_ParamLimits

0x8879,	// (0x00066e52) popup_call6_2nd_window

0x888a,	// (0x00066e63) cell_call6_btn_pane_ParamLimits

0x888a,	// (0x00066e63) cell_call6_btn_pane

0xe605,	// (0x0006cbde) bg_popup_call2_in_pane_cp03

0xd406,	// (0x0006b9df) popup_call6_1st_window_g1

0xd40e,	// (0x0006b9e7) popup_call6_1st_window_g2

0xd416,	// (0x0006b9ef) popup_call6_1st_window_g3

0x0002,

0xfcec,	// (0x0006e2c5) popup_call6_1st_window_g

0xd41e,	// (0x0006b9f7) popup_call6_1st_window_t1

0xd42d,	// (0x0006ba06) popup_call6_1st_window_t2

0xd43b,	// (0x0006ba14) popup_call6_1st_window_t3

0x0002,

0xfcf3,	// (0x0006e2cc) popup_call6_1st_window_t

0xe605,	// (0x0006cbde) bg_popup_call2_in_pane_cp04

0xd449,	// (0x0006ba22) popup_call6_2nd_window_g1

0xd451,	// (0x0006ba2a) popup_call6_2nd_window_g2

0xd459,	// (0x0006ba32) popup_call6_2nd_window_g3

0x0002,

0xfcfa,	// (0x0006e2d3) popup_call6_2nd_window_g

0xd461,	// (0x0006ba3a) popup_call6_2nd_window_t1

0xa05f,	// (0x00068638) bg_button_pane_cp15

0xd311,	// (0x0006b8ea) cell_call6_btn_pane_g1

0xd31a,	// (0x0006b8f3) cell_call6_btn_pane_t1

0x889d,	// (0x00066e76) listscroll_wgtman_pane_ParamLimits

0x889d,	// (0x00066e76) listscroll_wgtman_pane

0x88be,	// (0x00066e97) wgtman_btn_pane_ParamLimits

0x88be,	// (0x00066e97) wgtman_btn_pane

0xedb8,	// (0x0006d391) aid_scroll_copy1

0xd470,	// (0x0006ba49) list_wgtman_pane

0x8901,	// (0x00066eda) wgtman_btn_pane_g1_ParamLimits

0x8901,	// (0x00066eda) wgtman_btn_pane_g1

0x892d,	// (0x00066f06) wgtman_btn_pane_t1_ParamLimits

0x892d,	// (0x00066f06) wgtman_btn_pane_t1

0xd47a,	// (0x0006ba53) wgtman_btn_pane_t2_ParamLimits

0xd47a,	// (0x0006ba53) wgtman_btn_pane_t2

0x0001,

0xfd01,	// (0x0006e2da) wgtman_btn_pane_t_ParamLimits

0xfd01,	// (0x0006e2da) wgtman_btn_pane_t

0x896a,	// (0x00066f43) listrow_wgtman_pane_ParamLimits

0x896a,	// (0x00066f43) listrow_wgtman_pane

0x897c,	// (0x00066f55) listrow_wgtman_pane_g1

0x8989,	// (0x00066f62) listrow_wgtman_pane_g2

0x0001,

0xfd06,	// (0x0006e2df) listrow_wgtman_pane_g

0x89a7,	// (0x00066f80) listrow_wgtman_pane_t1

0x89bf,	// (0x00066f98) listrow_wgtman_pane_t2

0x0001,

0xfd0b,	// (0x0006e2e4) listrow_wgtman_pane_t

0x89e5,	// (0x00066fbe) wait_bar_pane_cp09

0xd491,	// (0x0006ba6a) main_calllock_btn_pane

0xd49b,	// (0x0006ba74) main_calllock_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp17

0xd4a3,	// (0x0006ba7c) main_calllock_btn_pane_g1

0xd4ac,	// (0x0006ba85) main_calllock_btn_pane_t1

0xd923,	// (0x0006befc) main_dialer3_pane

0xd923,	// (0x0006befc) main_fmrd2_pane

0xe38f,	// (0x0006c968) main_fs_bigclock_unlock_btn_pane_g1

0x89ff,	// (0x00066fd8) main_fs_bigclock_unlock_btn_pane_t1

0x8a0d,	// (0x00066fe6) area_fmrd2_info_pane_ParamLimits

0x8a0d,	// (0x00066fe6) area_fmrd2_info_pane

0x8a1e,	// (0x00066ff7) area_fmrd2_visual_pane_ParamLimits

0x8a1e,	// (0x00066ff7) area_fmrd2_visual_pane

0x8a2c,	// (0x00067005) fmrd2_indi_pane_ParamLimits

0x8a2c,	// (0x00067005) fmrd2_indi_pane

0x8a39,	// (0x00067012) area_fmrd2_visual_pane_g1

0x8a41,	// (0x0006701a) area_fmrd2_visual_pane_t1

0x8a51,	// (0x0006702a) area_fmrd2_visual_pane_t2

0x8a61,	// (0x0006703a) area_fmrd2_visual_pane_t3

0x0002,

0xfd15,	// (0x0006e2ee) area_fmrd2_visual_pane_t

0x8a71,	// (0x0006704a) area_fmrd2_info_pane_g1

0x8a79,	// (0x00067052) area_fmrd2_info_pane_t1

0x8a89,	// (0x00067062) area_fmrd2_info_pane_t2

0x8a99,	// (0x00067072) area_fmrd2_info_pane_t3

0x8aa9,	// (0x00067082) area_fmrd2_info_pane_t4

0x0003,

0xfd1c,	// (0x0006e2f5) area_fmrd2_info_pane_t

0x8ab7,	// (0x00067090) fmrd2_indi_pane_t1

0x8ac7,	// (0x000670a0) fmrd2_indi_pane_t2

0x8ad7,	// (0x000670b0) fmrd2_indi_pane_t3

0x0002,

0xfd25,	// (0x0006e2fe) fmrd2_indi_pane_t

0xc6e6,	// (0x0006acbf) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc6e6,	// (0x0006acbf) list_single_fs_bigclock_indicator_pane_g5

0xc797,	// (0x0006ad70) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc797,	// (0x0006ad70) list_single_fs_bigclock_indicator_pane_t5

0xcb7e,	// (0x0006b157) aid_cell_bcale_month_pane_ParamLimits

0xcb7e,	// (0x0006b157) aid_cell_bcale_month_pane

0xcb7e,	// (0x0006b157) bcale_month_pane_ParamLimits

0xcb7e,	// (0x0006b157) bcale_month_pane

0xadb0,	// (0x00069389) bcale_preview_pane_ParamLimits

0xadb0,	// (0x00069389) bcale_preview_pane

0xd220,	// (0x0006b7f9) list_single_fs_bigclock_pane_t1_ParamLimits

0xd23f,	// (0x0006b818) list_single_fs_bigclock_pane_t2_ParamLimits

0xd23f,	// (0x0006b818) list_single_fs_bigclock_pane_t2

0x0001,

0xfca0,	// (0x0006e279) list_single_fs_bigclock_pane_t_ParamLimits

0xfca0,	// (0x0006e279) list_single_fs_bigclock_pane_t

0x89f7,	// (0x00066fd0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd10,	// (0x0006e2e9) main_fs_bigclock_unlock_btn_pane_g

0x8ae7,	// (0x000670c0) aid_dia3_key_size_ParamLimits

0x8ae7,	// (0x000670c0) aid_dia3_key_size

0x8af6,	// (0x000670cf) aid_dia3_listrow_size_ParamLimits

0x8af6,	// (0x000670cf) aid_dia3_listrow_size

0x8b0b,	// (0x000670e4) dia3_keypad_fun_pane_ParamLimits

0x8b0b,	// (0x000670e4) dia3_keypad_fun_pane

0x8b27,	// (0x00067100) dia3_keypad_num_pane_ParamLimits

0x8b27,	// (0x00067100) dia3_keypad_num_pane

0x8b42,	// (0x0006711b) dia3_listscroll_pane_ParamLimits

0x8b42,	// (0x0006711b) dia3_listscroll_pane

0x8b55,	// (0x0006712e) dia3_numentry_pane_ParamLimits

0x8b55,	// (0x0006712e) dia3_numentry_pane

0xd4bb,	// (0x0006ba94) dia3_list_pane

0xd4c6,	// (0x0006ba9f) scroll_pane_cp12

0xd923,	// (0x0006befc) bg_dia3_numentry_pane

0x8b6d,	// (0x00067146) dia3_numentry_pane_t1

0x8b7c,	// (0x00067155) cell_dia3_key_num_pane

0x8b84,	// (0x0006715d) cell_dia3_key0_fun_pane_ParamLimits

0x8b84,	// (0x0006715d) cell_dia3_key0_fun_pane

0x8b98,	// (0x00067171) cell_dia3_key1_fun_pane_ParamLimits

0x8b98,	// (0x00067171) cell_dia3_key1_fun_pane

0x8bb0,	// (0x00067189) dia3_listrow_pane

0xc439,	// (0x0006aa12) bg_dia3_numentry_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp21

0xd4d1,	// (0x0006baaa) cell_dia3_key_num_pane_t1

0xd4df,	// (0x0006bab8) cell_dia3_key_num_pane_t2

0xd4ee,	// (0x0006bac7) cell_dia3_key_num_pane_t3

0xd4fd,	// (0x0006bad6) cell_dia3_key_num_pane_t4

0x0003,

0xfd2c,	// (0x0006e305) cell_dia3_key_num_pane_t

0xd923,	// (0x0006befc) bg_button_pane_cp19

0x8bc2,	// (0x0006719b) cell_dia3_key0_fun_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp20

0x8bca,	// (0x000671a3) cell_dia3_key1_fun_pane_g1

0xadb0,	// (0x00069389) area_left_week_number_pane

0xadb0,	// (0x00069389) area_top_day_name_pane

0xadb0,	// (0x00069389) frame_month_view_pane

0xadb0,	// (0x00069389) grid_month_view_pane

0xadb0,	// (0x00069389) cell_top_day_name_pane_ParamLimits

0xadb0,	// (0x00069389) cell_top_day_name_pane

0xadb0,	// (0x00069389) cell_area_left_week_number_pane_ParamLimits

0xadb0,	// (0x00069389) cell_area_left_week_number_pane

0xadb0,	// (0x00069389) cell_month_view_pane_ParamLimits

0xadb0,	// (0x00069389) cell_month_view_pane

0xada4,	// (0x0006937d) frm_month_g1

0xada4,	// (0x0006937d) frm_month_g2

0xada4,	// (0x0006937d) frm_month_g3

0xada4,	// (0x0006937d) frm_month_g4

0xada4,	// (0x0006937d) frm_month_g5

0xada4,	// (0x0006937d) frm_month_g6

0xada4,	// (0x0006937d) frm_month_g7

0xada4,	// (0x0006937d) frm_month_g8

0xada4,	// (0x0006937d) frm_month_g9

0xada4,	// (0x0006937d) frm_month_g10

0xada4,	// (0x0006937d) frm_month_g11

0xada4,	// (0x0006937d) frm_month_g12

0xada4,	// (0x0006937d) frm_month_g13

0xada4,	// (0x0006937d) frm_month_g14

0xada4,	// (0x0006937d) frm_month_g15

0xada4,	// (0x0006937d) frm_month_g16

0x000f,

0xfd35,	// (0x0006e30e) frm_month_g

0xd50c,	// (0x0006bae5) cell_top_day_name_pane_t1

0xada4,	// (0x0006937d) cell_area_left_week_number_pane_g1

0xd50c,	// (0x0006bae5) cell_area_left_week_number_pane_t1

0xada4,	// (0x0006937d) cell_month_view_pane_g1

0xd50c,	// (0x0006bae5) cell_month_view_pane_t1

0xd923,	// (0x0006befc) main_fps_pane

0xc978,	// (0x0006af51) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc978,	// (0x0006af51) cmail_ddmenu_btn02_pane_cp1

0xc994,	// (0x0006af6d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc994,	// (0x0006af6d) cmail_ddmenu_btn02_pane_cp2

0x8478,	// (0x00066a51) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8478,	// (0x00066a51) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc53,	// (0x0006e22c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc53,	// (0x0006e22c) cmail_ddmenu_btn02_pane_g

0x8496,	// (0x00066a6f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8496,	// (0x00066a6f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc58,	// (0x0006e231) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc58,	// (0x0006e231) cmail_ddmenu_btn02_pane_t

0x8bd2,	// (0x000671ab) fps_text_pane_ParamLimits

0x8bd2,	// (0x000671ab) fps_text_pane

0x8be9,	// (0x000671c2) main_fps_pane_g1_ParamLimits

0x8be9,	// (0x000671c2) main_fps_pane_g1

0x8c03,	// (0x000671dc) wait_bar_pane_cp010_ParamLimits

0x8c03,	// (0x000671dc) wait_bar_pane_cp010

0x8c14,	// (0x000671ed) fps_text_pane_t1_ParamLimits

0x8c14,	// (0x000671ed) fps_text_pane_t1

0xd337,	// (0x0006b910) cam4_image_uncrop_pane_g1

0xd340,	// (0x0006b919) cam4_image_uncrop_pane_g2

0x5ce8,	// (0x000642c1) cam4_image_uncrop_pane_g3

0x5cf1,	// (0x000642ca) cam4_image_uncrop_pane_g4

0x0003,

0xf7cb,	// (0x0006dda4) cam4_image_uncrop_pane_g

0x8bb0,	// (0x00067189) dia3_listrow_pane_ParamLimits

0xd923,	// (0x0006befc) main_phob2_pane

0x8038,	// (0x00066611) cell_tport_appsw_pane_cp02_ParamLimits

0x8038,	// (0x00066611) cell_tport_appsw_pane_cp02

0x804c,	// (0x00066625) cell_tport_appsw_pane_cp03_ParamLimits

0x804c,	// (0x00066625) cell_tport_appsw_pane_cp03

0xd923,	// (0x0006befc) phob2_contact_card_pane

0xd923,	// (0x0006befc) phob2_listscroll_pane

0xd51e,	// (0x0006baf7) phob2_list_pane

0xd065,	// (0x0006b63e) scroll_pane_cp034

0x8c2c,	// (0x00067205) phob2_cc_data_pane_ParamLimits

0x8c2c,	// (0x00067205) phob2_cc_data_pane

0x8c4b,	// (0x00067224) phob2_cc_listscroll_pane_ParamLimits

0x8c4b,	// (0x00067224) phob2_cc_listscroll_pane

0x8c69,	// (0x00067242) list_double_large_graphic_phob2_pane_ParamLimits

0x8c69,	// (0x00067242) list_double_large_graphic_phob2_pane

0x8c88,	// (0x00067261) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8c88,	// (0x00067261) list_double_large_graphic_phob2_pane_g1

0x8c9a,	// (0x00067273) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8c9a,	// (0x00067273) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd56,	// (0x0006e32f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd56,	// (0x0006e32f) list_double_large_graphic_phob2_pane_g

0x8cce,	// (0x000672a7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8cce,	// (0x000672a7) list_double_large_graphic_phob2_pane_t1

0x8cf2,	// (0x000672cb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8cf2,	// (0x000672cb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd5f,	// (0x0006e338) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd5f,	// (0x0006e338) list_double_large_graphic_phob2_pane_t

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp024

0xd526,	// (0x0006baff) phob2_cc_button_pane

0x8d13,	// (0x000672ec) phob2_cc_data_pane_g1_ParamLimits

0x8d13,	// (0x000672ec) phob2_cc_data_pane_g1

0x8d2a,	// (0x00067303) phob2_cc_data_pane_g2_ParamLimits

0x8d2a,	// (0x00067303) phob2_cc_data_pane_g2

0x0001,

0xfd64,	// (0x0006e33d) phob2_cc_data_pane_g_ParamLimits

0xfd64,	// (0x0006e33d) phob2_cc_data_pane_g

0x8d3c,	// (0x00067315) phob2_cc_data_pane_t1_ParamLimits

0x8d3c,	// (0x00067315) phob2_cc_data_pane_t1

0x8d54,	// (0x0006732d) phob2_cc_data_pane_t2_ParamLimits

0x8d54,	// (0x0006732d) phob2_cc_data_pane_t2

0x8d6c,	// (0x00067345) phob2_cc_data_pane_t3_ParamLimits

0x8d6c,	// (0x00067345) phob2_cc_data_pane_t3

0x0002,

0xfd69,	// (0x0006e342) phob2_cc_data_pane_t_ParamLimits

0xfd69,	// (0x0006e342) phob2_cc_data_pane_t

0xd52e,	// (0x0006bb07) phob2_cc_list_pane_ParamLimits

0xd52e,	// (0x0006bb07) phob2_cc_list_pane

0xbb10,	// (0x0006a0e9) scroll_pane_cp035_ParamLimits

0xbb10,	// (0x0006a0e9) scroll_pane_cp035

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp033

0xd53a,	// (0x0006bb13) phob2_cc_button_pane_g1

0xd546,	// (0x0006bb1f) phob2_cc_button_pane_t1

0xd55b,	// (0x0006bb34) phob2_cc_button_pane_t2

0x0001,

0xfd70,	// (0x0006e349) phob2_cc_button_pane_t

0x8d84,	// (0x0006735d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8d84,	// (0x0006735d) list_double_large_graphic_phob2_cc_pane

0x8db4,	// (0x0006738d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8db4,	// (0x0006738d) list_double_large_graphic_phob2_cc_pane_g1

0x8dc0,	// (0x00067399) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8dc0,	// (0x00067399) list_double_large_graphic_phob2_cc_pane_g2

0x8dcc,	// (0x000673a5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8dcc,	// (0x000673a5) list_double_large_graphic_phob2_cc_pane_g3

0x8dd8,	// (0x000673b1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8dd8,	// (0x000673b1) list_double_large_graphic_phob2_cc_pane_g4

0xcd0e,	// (0x0006b2e7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xcd0e,	// (0x0006b2e7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd75,	// (0x0006e34e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd75,	// (0x0006e34e) list_double_large_graphic_phob2_cc_pane_g

0x8de4,	// (0x000673bd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8de4,	// (0x000673bd) list_double_large_graphic_phob2_cc_pane_t1

0x8e0d,	// (0x000673e6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8e0d,	// (0x000673e6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd80,	// (0x0006e359) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd80,	// (0x0006e359) list_double_large_graphic_phob2_cc_pane_t

0xd56d,	// (0x0006bb46) list_highlight_pane_cp025_ParamLimits

0xd56d,	// (0x0006bb46) list_highlight_pane_cp025

0xdbd9,	// (0x0006c1b2) bg_button_pane_cp033_ParamLimits

0xd53a,	// (0x0006bb13) phob2_cc_button_pane_g1_ParamLimits

0xd546,	// (0x0006bb1f) phob2_cc_button_pane_t1_ParamLimits

0xd55b,	// (0x0006bb34) phob2_cc_button_pane_t2_ParamLimits

0xfd70,	// (0x0006e349) phob2_cc_button_pane_t_ParamLimits

0x0ab8,	// (0x0005f091) popup_wgtman_window

0xb8a4,	// (0x00069e7d) scroll_pane_cp038

0x88e3,	// (0x00066ebc) wgtman_btn_pane_cp_01_ParamLimits

0x88e3,	// (0x00066ebc) wgtman_btn_pane_cp_01

0xd57b,	// (0x0006bb54) wgtman_content_pane

0xd584,	// (0x0006bb5d) wgtman_heading_pane

0xd923,	// (0x0006befc) bg_heading_pane_cp02

0xd58d,	// (0x0006bb66) wgtman_heading_pane_g1

0xd595,	// (0x0006bb6e) wgtman_heading_pane_t1

0xd5a3,	// (0x0006bb7c) scroll_pane_cp036

0xd5ab,	// (0x0006bb84) wgtman_list_pane

0xd5b3,	// (0x0006bb8c) wgtman_list_pane_t1_ParamLimits

0xd5b3,	// (0x0006bb8c) wgtman_list_pane_t1

0xb621,	// (0x00069bfa) cam4_grid_pane

0x6a1a,	// (0x00064ff3) bg_button_pane_cp015_ParamLimits

0x6a2b,	// (0x00065004) bg_button_pane_cp016_ParamLimits

0x6a37,	// (0x00065010) bg_button_pane_cp017_ParamLimits

0x6a8b,	// (0x00065064) popup_vitu2_query_window_g3_ParamLimits

0x6a8b,	// (0x00065064) popup_vitu2_query_window_g3

0x6b2c,	// (0x00065105) popup_vitu2_query_window_t6_ParamLimits

0x6b2c,	// (0x00065105) popup_vitu2_query_window_t6

0x6b57,	// (0x00065130) popup_vitu2_query_window_t7_ParamLimits

0x6b57,	// (0x00065130) popup_vitu2_query_window_t7

0xd337,	// (0x0006b910) cam4_grid_pane_g1

0xd340,	// (0x0006b919) cam4_grid_pane_g2

0xd5cd,	// (0x0006bba6) cam4_grid_pane_g3

0xd5d6,	// (0x0006bbaf) cam4_grid_pane_g4

0x0003,

0xfd85,	// (0x0006e35e) cam4_grid_pane_g

0x155c,	// (0x0005fb35) aid_placing_vt_slider_lsc_ParamLimits

0x1867,	// (0x0005fe40) vidtel_button_pane_ParamLimits

0x1867,	// (0x0005fe40) vidtel_button_pane

0xd923,	// (0x0006befc) bg_button_pane_cp034

0xd5e1,	// (0x0006bbba) vidtel_button_pane_g1

0xd5e9,	// (0x0006bbc2) vidtel_button_pane_t1

0xba1b,	// (0x00069ff4) aid_size_vtel_slider_touch

0xbb10,	// (0x0006a0e9) scroll_pane_cp039

0x7845,	// (0x00065e1e) ncim_query_button_pane_cp01_ParamLimits

0x7864,	// (0x00065e3d) ncimui_query_pane_g1_ParamLimits

0xdbd9,	// (0x0006c1b2) input_focus_pane_cp012_ParamLimits

0xc477,	// (0x0006aa50) ncim_query_entry_pane_t1_ParamLimits

0xbb10,	// (0x0006a0e9) scroll_pane_cp039_ParamLimits

0xee9c,	// (0x0006d475) navi_pane_bcale_mc_g1

0xeea4,	// (0x0006d47d) navi_pane_bcale_mc_t1

0xc9c8,	// (0x0006afa1) main_sp_fs_email_pane_g1

0xc9d4,	// (0x0006afad) main_sp_fs_email_pane_g2

0x0001,

0xfb8b,	// (0x0006e164) main_sp_fs_email_pane_g

0xcf64,	// (0x0006b53d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf64,	// (0x0006b53d) list_single_cale_mrui_row_pane_g3

0x84b6,	// (0x00066a8f) list_single_recal_day_pane_g5_event_pane

0xccd9,	// (0x0006b2b2) list_single_recal_day_pane_g7

0xd5ff,	// (0x0006bbd8) list_recal_day_event_pane_cp01

0xd608,	// (0x0006bbe1) list_recal_vselct_arw_lo_pane_cp01

0xd610,	// (0x0006bbe9) list_recal_vselct_arw_up_pane_cp01

0xd618,	// (0x0006bbf1) list_recal_vselct_pane_cp01

0xba79,	// (0x0006a052) list_recal_day_event_pane_cp01_g1

0xcd1a,	// (0x0006b2f3) list_recal_day_event_pane_cp01_t1

0xcce1,	// (0x0006b2ba) list_single_recal_day_pane_t1_ParamLimits

0xccf3,	// (0x0006b2cc) list_single_recal_day_pane_t2_ParamLimits

0xfc68,	// (0x0006e241) list_single_recal_day_pane_t_ParamLimits

0xe2d6,	// (0x0006c8af) bg_notes_pane_ParamLimits

0xe3cb,	// (0x0006c9a4) list_notes_pane_ParamLimits

0x0c02,	// (0x0005f1db) scroll_pane_cp06_ParamLimits

0xe3ed,	// (0x0006c9c6) main_notes_pane_ParamLimits

0xdbd9,	// (0x0006c1b2) main_welc_pane

0x8e6f,	// (0x00067448) main_welc_body_pane_ParamLimits

0x8e6f,	// (0x00067448) main_welc_body_pane

0x8e8d,	// (0x00067466) main_welc_opti_pane_ParamLimits

0x8e8d,	// (0x00067466) main_welc_opti_pane

0x8efd,	// (0x000674d6) main_welc_pane_t1_ParamLimits

0x8efd,	// (0x000674d6) main_welc_pane_t1

0x90fd,	// (0x000676d6) main_welc_body_row_pane_ParamLimits

0x90fd,	// (0x000676d6) main_welc_body_row_pane

0xe343,	// (0x0006c91c) main_welc_opti_row_pane_ParamLimits

0xe343,	// (0x0006c91c) main_welc_opti_row_pane

0xd62a,	// (0x0006bc03) main_welc_opti_row_pane_g1

0x9111,	// (0x000676ea) main_welc_opti_row_pane_t1

0xd632,	// (0x0006bc0b) main_welc_body_row_pane_t1

0xd300,	// (0x0006b8d9) popup_notif_wgt_heading_pane

0xd352,	// (0x0006b92b) aid_size_list_notif_wgt_del_ParamLimits

0xd35f,	// (0x0006b938) list_notif_wgt_row_pane_g1_ParamLimits

0xd36b,	// (0x0006b944) list_notif_wgt_row_pane_g2_ParamLimits

0xd37a,	// (0x0006b953) list_notif_wgt_row_pane_g3_ParamLimits

0xfccf,	// (0x0006e2a8) list_notif_wgt_row_pane_g_ParamLimits

0xd387,	// (0x0006b960) list_notif_wgt_row_pane_t1_ParamLimits

0xd39d,	// (0x0006b976) list_notif_wgt_row_pane_t2_ParamLimits

0xd3af,	// (0x0006b988) list_notif_wgt_row_pane_t3_ParamLimits

0xfcd6,	// (0x0006e2af) list_notif_wgt_row_pane_t_ParamLimits

0x897c,	// (0x00066f55) listrow_wgtman_pane_g1_ParamLimits

0x8989,	// (0x00066f62) listrow_wgtman_pane_g2_ParamLimits

0xfd06,	// (0x0006e2df) listrow_wgtman_pane_g_ParamLimits

0x89a7,	// (0x00066f80) listrow_wgtman_pane_t1_ParamLimits

0x89bf,	// (0x00066f98) listrow_wgtman_pane_t2_ParamLimits

0xfd0b,	// (0x0006e2e4) listrow_wgtman_pane_t_ParamLimits

0x89e5,	// (0x00066fbe) wait_bar_pane_cp09_ParamLimits

0xd923,	// (0x0006befc) bg_popup_heading_pane_cp02

0xd641,	// (0x0006bc1a) popup_notif_wgt_heading_pane_g1

0xd649,	// (0x0006bc22) popup_notif_wgt_heading_pane_t1

0xd923,	// (0x0006befc) main_vids_pane

0xd923,	// (0x0006befc) vids_listscroll_pane

0x9120,	// (0x000676f9) scroll_pane_cp040

0xd923,	// (0x0006befc) vids_list_pane

0x912b,	// (0x00067704) vids_list_double_pane_ParamLimits

0x912b,	// (0x00067704) vids_list_double_pane

0x913c,	// (0x00067715) vids_list_double_pane_g1

0x9145,	// (0x0006771e) vids_list_double_pane_t1

0x9155,	// (0x0006772e) vids_list_double_pane_t2

0x0001,

0xfda4,	// (0x0006e37d) vids_list_double_pane_t

0xa051,	// (0x0006862a) main_ncimui_pane_ParamLimits

0x767b,	// (0x00065c54) main_ncimui_pane_g1_ParamLimits

0x7687,	// (0x00065c60) main_ncimui_pane_g2_ParamLimits

0x7687,	// (0x00065c60) main_ncimui_pane_g2

0x0001,

0xfaa3,	// (0x0006e07c) main_ncimui_pane_g_ParamLimits

0xfaa3,	// (0x0006e07c) main_ncimui_pane_g

0x8ea8,	// (0x00067481) main_welc_pane_g1_ParamLimits

0x8ea8,	// (0x00067481) main_welc_pane_g1

0x8ebd,	// (0x00067496) main_welc_pane_g2_ParamLimits

0x8ebd,	// (0x00067496) main_welc_pane_g2

0x0003,

0xfd8e,	// (0x0006e367) main_welc_pane_g_ParamLimits

0xfd8e,	// (0x0006e367) main_welc_pane_g

0xe2d6,	// (0x0006c8af) listscroll_mce_pane_ParamLimits

0xeff1,	// (0x0006d5ca) wait_bar_pane_cp10

0xa598,	// (0x00068b71) main_cale_day_pane_ParamLimits

0xa598,	// (0x00068b71) main_cale_week_pane_ParamLimits

0xe2d6,	// (0x0006c8af) main_messa_pane_ParamLimits

0x51d9,	// (0x000637b2) main_clock2_btn_pane_ParamLimits

0x51d9,	// (0x000637b2) main_clock2_btn_pane

0xaed3,	// (0x000694ac) main_clock2_btn_pane_cp01_ParamLimits

0xaed3,	// (0x000694ac) main_clock2_btn_pane_cp01

0xcf43,	// (0x0006b51c) list_cale_mrui_pane_ParamLimits

0xd3f3,	// (0x0006b9cc) main_cf0_pane_g2

0x0001,

0xfcdd,	// (0x0006e2b6) main_cf0_pane_g

0xadb0,	// (0x00069389) area_left_week_number_pane_ParamLimits

0xadb0,	// (0x00069389) area_top_day_name_pane_ParamLimits

0xadb0,	// (0x00069389) frame_month_view_pane_ParamLimits

0xadb0,	// (0x00069389) grid_month_view_pane_ParamLimits

0xada4,	// (0x0006937d) frm_month_g1_ParamLimits

0xada4,	// (0x0006937d) frm_month_g2_ParamLimits

0xada4,	// (0x0006937d) frm_month_g3_ParamLimits

0xada4,	// (0x0006937d) frm_month_g4_ParamLimits

0xada4,	// (0x0006937d) frm_month_g5_ParamLimits

0xada4,	// (0x0006937d) frm_month_g6_ParamLimits

0xada4,	// (0x0006937d) frm_month_g7_ParamLimits

0xada4,	// (0x0006937d) frm_month_g8_ParamLimits

0xada4,	// (0x0006937d) frm_month_g9_ParamLimits

0xada4,	// (0x0006937d) frm_month_g10_ParamLimits

0xada4,	// (0x0006937d) frm_month_g11_ParamLimits

0xada4,	// (0x0006937d) frm_month_g12_ParamLimits

0xada4,	// (0x0006937d) frm_month_g13_ParamLimits

0xada4,	// (0x0006937d) frm_month_g14_ParamLimits

0xada4,	// (0x0006937d) frm_month_g15_ParamLimits

0xada4,	// (0x0006937d) frm_month_g16_ParamLimits

0xfd35,	// (0x0006e30e) frm_month_g_ParamLimits

0xd50c,	// (0x0006bae5) cell_top_day_name_pane_t1_ParamLimits

0xada4,	// (0x0006937d) cell_area_left_week_number_pane_g1_ParamLimits

0xd50c,	// (0x0006bae5) cell_area_left_week_number_pane_t1_ParamLimits

0xada4,	// (0x0006937d) cell_month_view_pane_g1_ParamLimits

0xd50c,	// (0x0006bae5) cell_month_view_pane_t1_ParamLimits

0xe2ce,	// (0x0006c8a7) main_clock2_btn_pane_g1

0xd657,	// (0x0006bc30) main_clock2_btn_pane_t1

0xdbd9,	// (0x0006c1b2) listscroll_cmail_pane_ParamLimits

0xc9c8,	// (0x0006afa1) main_sp_fs_email_pane_g1_ParamLimits

0xc9d4,	// (0x0006afad) main_sp_fs_email_pane_g2_ParamLimits

0xfb8b,	// (0x0006e164) main_sp_fs_email_pane_g_ParamLimits

0xd083,	// (0x0006b65c) list_recal_day_pane_ParamLimits

0xd094,	// (0x0006b66d) mian_recal_day_pane_t1

0x7edb,	// (0x000664b4) list_single_dyc_row_text_pane_t4_ParamLimits

0x7edb,	// (0x000664b4) list_single_dyc_row_text_pane_t4

0x7f24,	// (0x000664fd) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f24,	// (0x000664fd) list_single_dyc_row_text_pane_t5

0xca68,	// (0x0006b041) list_single_dyc_row_text_pane_t6_ParamLimits

0xca68,	// (0x0006b041) list_single_dyc_row_text_pane_t6

0xe989,	// (0x0006cf62) aid_mgn_list_cale_time_pane

0xa051,	// (0x0006862a) main_gallery2_pane_ParamLimits

0xaee9,	// (0x000694c2) main_clock2_pane_cp01_t1

0xaef9,	// (0x000694d2) main_clock2_pane_cp01_t3

0x0001,

0xf6b1,	// (0x0006dc8a) main_clock2_pane_cp01_t

0x0f9f,	// (0x0005f578) cale_week_scroll_pane_g16_ParamLimits

0x0f9f,	// (0x0005f578) cale_week_scroll_pane_g16

0xe605,	// (0x0006cbde) vorec_slider_pane

0xd5e9,	// (0x0006bbc2) vidtel_button_pane_t1_ParamLimits

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g1_ParamLimits

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g2_ParamLimits

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g3_ParamLimits

0x851c,	// (0x00066af5) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc8b,	// (0x0006e264) main_fs_bigclock_clock_pane_g_ParamLimits

0x852f,	// (0x00066b08) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8548,	// (0x00066b21) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc94,	// (0x0006e26d) main_fs_bigclock_clock_pane_t_ParamLimits

0x4a6d,	// (0x00063046) main_mup3_lyrics_pane_ParamLimits

0x4a6d,	// (0x00063046) main_mup3_lyrics_pane

0x917d,	// (0x00067756) main_mup3_lyrics_pane_t1_ParamLimits

0x917d,	// (0x00067756) main_mup3_lyrics_pane_t1

0xb27c,	// (0x00069855) aid_main_mp4_pane_t1_area

0xb286,	// (0x0006985f) aid_main_mp4_pane_t2_area

0xb330,	// (0x00069909) main_mp4_pane_g7_ParamLimits

0xb330,	// (0x00069909) main_mp4_pane_g7

0xb33c,	// (0x00069915) main_mp4_pane_g8_ParamLimits

0xb33c,	// (0x00069915) main_mp4_pane_g8

0x5abb,	// (0x00064094) aid_call6_pane_g1_size

0x8d9e,	// (0x00067377) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8d9e,	// (0x00067377) list_double_large_graphic_phob2_other_pane

0xe515,	// (0x0006caee) list_double_large_graphic_phob2_other_pane_g1

0xd923,	// (0x0006befc) list_highlight_pane_cp026

0xdbd9,	// (0x0006c1b2) main_welc_pane_ParamLimits

0x7d10,	// (0x000662e9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7d10,	// (0x000662e9) main_sp_fs_ctrlbar_pane_g3

0x7d2a,	// (0x00066303) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7d2a,	// (0x00066303) main_sp_fs_ctrlbar_pane_g4

0x7d5e,	// (0x00066337) toolbar2_fixed_button_pane_cp01

0x7d69,	// (0x00066342) toolbar2_fixed_button_pane_cp02

0x7d76,	// (0x0006634f) toolbar2_fixed_button_pane_cp03

0x8e49,	// (0x00067422) list_welc_entry_pane_ParamLimits

0x8e49,	// (0x00067422) list_welc_entry_pane

0x8ed2,	// (0x000674ab) main_welc_pane_g3_ParamLimits

0x8ed2,	// (0x000674ab) main_welc_pane_g3

0x8f1b,	// (0x000674f4) main_welc_pane_t2_ParamLimits

0x8f1b,	// (0x000674f4) main_welc_pane_t2

0x8f36,	// (0x0006750f) main_welc_pane_t3_ParamLimits

0x8f36,	// (0x0006750f) main_welc_pane_t3

0x0005,

0xfd97,	// (0x0006e370) main_welc_pane_t_ParamLimits

0xfd97,	// (0x0006e370) main_welc_pane_t

0x906e,	// (0x00067647) welc_button_pane_ParamLimits

0x906e,	// (0x00067647) welc_button_pane

0x90e8,	// (0x000676c1) welc_service_logo_pane_ParamLimits

0x90e8,	// (0x000676c1) welc_service_logo_pane

0x9199,	// (0x00067772) list_single_welc_entry_pane_ParamLimits

0x9199,	// (0x00067772) list_single_welc_entry_pane

0x91aa,	// (0x00067783) list_single_welc_entry_pane_g1

0x91b2,	// (0x0006778b) list_single_welc_entry_pane_t1

0x91c0,	// (0x00067799) list_single_welc_entry_pane_t2

0x0001,

0xfda9,	// (0x0006e382) list_single_welc_entry_pane_t

0xd923,	// (0x0006befc) bg_button_pane_cp035

0x91ce,	// (0x000677a7) welc_button_pane_t1

0xd665,	// (0x0006bc3e) welc_service_logo_pane_g1

0xd66e,	// (0x0006bc47) welc_service_logo_pane_g2

0x0001,

0x07fb,	// (0x0005edd4) welc_service_logo_pane_g

0xa05f,	// (0x00068638) main_int_radio_pane

0xe464,	// (0x0006ca3d) list_single_fs_dyc_pane_g1

0x8ca9,	// (0x00067282) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8ca9,	// (0x00067282) list_double_large_graphic_phob2_pane_g3

0x8cbb,	// (0x00067294) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8cbb,	// (0x00067294) list_double_large_graphic_phob2_pane_g4

0x91dc,	// (0x000677b5) main_int_radio1_pane_ParamLimits

0x91dc,	// (0x000677b5) main_int_radio1_pane

0xd677,	// (0x0006bc50) find_pane_cp02

0x91f9,	// (0x000677d2) input_focus_pane_cp12_ParamLimits

0x91f9,	// (0x000677d2) input_focus_pane_cp12

0x9209,	// (0x000677e2) input_focus_pane_cp13_ParamLimits

0x9209,	// (0x000677e2) input_focus_pane_cp13

0x921d,	// (0x000677f6) input_focus_pane_cp14_ParamLimits

0x921d,	// (0x000677f6) input_focus_pane_cp14

0xd680,	// (0x0006bc59) int_radio1_listscroll_pane

0x9231,	// (0x0006780a) main_int_radio1_pane_g1_ParamLimits

0x9231,	// (0x0006780a) main_int_radio1_pane_g1

0x9249,	// (0x00067822) main_int_radio1_pane_t1_ParamLimits

0x9249,	// (0x00067822) main_int_radio1_pane_t1

0x9264,	// (0x0006783d) main_int_radio1_pane_t2_ParamLimits

0x9264,	// (0x0006783d) main_int_radio1_pane_t2

0x927f,	// (0x00067858) main_int_radio1_pane_t3_ParamLimits

0x927f,	// (0x00067858) main_int_radio1_pane_t3

0x929a,	// (0x00067873) main_int_radio1_pane_t4_ParamLimits

0x929a,	// (0x00067873) main_int_radio1_pane_t4

0xd68a,	// (0x0006bc63) main_int_radio1_pane_t5_ParamLimits

0xd68a,	// (0x0006bc63) main_int_radio1_pane_t5

0x92ac,	// (0x00067885) main_int_radio1_pane_t6_ParamLimits

0x92ac,	// (0x00067885) main_int_radio1_pane_t6

0x92c1,	// (0x0006789a) main_int_radio1_pane_t7_ParamLimits

0x92c1,	// (0x0006789a) main_int_radio1_pane_t7

0x92d6,	// (0x000678af) main_int_radio1_pane_t8_ParamLimits

0x92d6,	// (0x000678af) main_int_radio1_pane_t8

0x92f5,	// (0x000678ce) main_int_radio1_pane_t9_ParamLimits

0x92f5,	// (0x000678ce) main_int_radio1_pane_t9

0x9307,	// (0x000678e0) main_int_radio1_pane_t10_ParamLimits

0x9307,	// (0x000678e0) main_int_radio1_pane_t10

0x932d,	// (0x00067906) main_int_radio1_pane_t11_ParamLimits

0x932d,	// (0x00067906) main_int_radio1_pane_t11

0x9353,	// (0x0006792c) main_int_radio1_pane_t12_ParamLimits

0x9353,	// (0x0006792c) main_int_radio1_pane_t12

0x000b,

0xfdae,	// (0x0006e387) main_int_radio1_pane_t_ParamLimits

0xfdae,	// (0x0006e387) main_int_radio1_pane_t

0xd69c,	// (0x0006bc75) int_radio_list_pane

0xd065,	// (0x0006b63e) scroll_pane_cp037

0xd6a4,	// (0x0006bc7d) list_double_large_graphic_int_radio_pane_ParamLimits

0xd6a4,	// (0x0006bc7d) list_double_large_graphic_int_radio_pane

0xd6bc,	// (0x0006bc95) list_double_large_graphic_int_radio_pane_g1

0xcd28,	// (0x0006b301) list_double_large_graphic_int_radio_pane_t1

0xcd36,	// (0x0006b30f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdc7,	// (0x0006e3a0) list_double_large_graphic_int_radio_pane_t

0xd923,	// (0x0006befc) list_highlight_pane_cp027

0xd622,	// (0x0006bbfb) main_button_pane_4

0x8ee5,	// (0x000674be) main_welc_pane_g4_ParamLimits

0x8ee5,	// (0x000674be) main_welc_pane_g4

0x8f4f,	// (0x00067528) main_welc_pane_t4_ParamLimits

0x8f4f,	// (0x00067528) main_welc_pane_t4

0x8f6a,	// (0x00067543) main_welc_pane_t5_ParamLimits

0x8f6a,	// (0x00067543) main_welc_pane_t5

0x8fab,	// (0x00067584) main_welc_pane_t6_ParamLimits

0x8fab,	// (0x00067584) main_welc_pane_t6

0x9085,	// (0x0006765e) welc_button_pane_2_ParamLimits

0x9085,	// (0x0006765e) welc_button_pane_2

0x90a1,	// (0x0006767a) welc_button_pane_3_ParamLimits

0x90a1,	// (0x0006767a) welc_button_pane_3

0xd622,	// (0x0006bbfb) welc_button_pane_4

0x90c0,	// (0x00067699) welc_button_pane_5_ParamLimits

0x90c0,	// (0x00067699) welc_button_pane_5

0x0922,	// (0x0005eefb) main_popup_welc_pane

0xd6dd,	// (0x0006bcb6) main_welc_sk_g3

0xd6e7,	// (0x0006bcc0) main_welc_sk_g4

0xd6f1,	// (0x0006bcca) main_welc_sk_t3

0xd701,	// (0x0006bcda) main_welc_sk_t4

0xd711,	// (0x0006bcea) popup_welc_pane_t4

0xd71f,	// (0x0006bcf8) popup_welc_pane_t5

0xd72d,	// (0x0006bd06) popup_welc_pane_t6

0xa05f,	// (0x00068638) main_acti_pane

0xd923,	// (0x0006befc) main_sso_pane

0x9365,	// (0x0006793e) sso_body_pane_ParamLimits

0x9365,	// (0x0006793e) sso_body_pane

0x9385,	// (0x0006795e) sso_logo_pane_ParamLimits

0x9385,	// (0x0006795e) sso_logo_pane

0x93be,	// (0x00067997) sso_sk_pane_ParamLimits

0x93be,	// (0x00067997) sso_sk_pane

0xd76b,	// (0x0006bd44) main_sso_logo_pane_g1

0x93d0,	// (0x000679a9) sso_sk_pane_t1_ParamLimits

0x93d0,	// (0x000679a9) sso_sk_pane_t1

0x93ea,	// (0x000679c3) sso_sk_pane_t2_ParamLimits

0x93ea,	// (0x000679c3) sso_sk_pane_t2

0x0001,

0xfdcc,	// (0x0006e3a5) sso_sk_pane_t_ParamLimits

0xfdcc,	// (0x0006e3a5) sso_sk_pane_t

0xd774,	// (0x0006bd4d) aid_sso_gap

0xd77d,	// (0x0006bd56) aid_sso_txt1

0xd787,	// (0x0006bd60) aid_sso_txt2

0xd791,	// (0x0006bd6a) aid_sso_txt3

0x0002,

0x0823,	// (0x0005edfc) aid_sso_txt

0xd79b,	// (0x0006bd74) aid_sso_widget

0x9454,	// (0x00067a2d) sso_btn_pane_ParamLimits

0x9454,	// (0x00067a2d) sso_btn_pane

0x94e8,	// (0x00067ac1) sso_option_pane_ParamLimits

0x94e8,	// (0x00067ac1) sso_option_pane

0x959c,	// (0x00067b75) sso_query_pane_ParamLimits

0x959c,	// (0x00067b75) sso_query_pane

0x95f2,	// (0x00067bcb) sso_query_pane_cp01_ParamLimits

0x95f2,	// (0x00067bcb) sso_query_pane_cp01

0x964a,	// (0x00067c23) sso_t_hdr_pane_ParamLimits

0x964a,	// (0x00067c23) sso_t_hdr_pane

0x9674,	// (0x00067c4d) sso_t_nml_pane_ParamLimits

0x9674,	// (0x00067c4d) sso_t_nml_pane

0x96ca,	// (0x00067ca3) sso_t_sub_pane

0x9392,	// (0x0006796b) sso_popup_window_ParamLimits

0x9392,	// (0x0006796b) sso_popup_window

0x9400,	// (0x000679d9) sso_apps_pane_ParamLimits

0x9400,	// (0x000679d9) sso_apps_pane

0x942a,	// (0x00067a03) sso_body_pane_g1

0x9434,	// (0x00067a0d) sso_body_pane_t1

0x9444,	// (0x00067a1d) sso_body_pane_t2

0x0001,

0xfdd1,	// (0x0006e3aa) sso_body_pane_t

0x94a0,	// (0x00067a79) sso_btn_pane_cp01_ParamLimits

0x94a0,	// (0x00067a79) sso_btn_pane_cp01

0x9570,	// (0x00067b49) sso_prog_pane_ParamLimits

0x9570,	// (0x00067b49) sso_prog_pane

0x96f9,	// (0x00067cd2) sso_t_hdr_pane_t1_ParamLimits

0x96f9,	// (0x00067cd2) sso_t_hdr_pane_t1

0xd7a5,	// (0x0006bd7e) input_focus_pane_cp10_ParamLimits

0xd7a5,	// (0x0006bd7e) input_focus_pane_cp10

0xd7b9,	// (0x0006bd92) sso_query_pane_t1_ParamLimits

0xd7b9,	// (0x0006bd92) sso_query_pane_t1

0xd7cc,	// (0x0006bda5) sso_query_pane_t2_ParamLimits

0xd7cc,	// (0x0006bda5) sso_query_pane_t2

0xd7e5,	// (0x0006bdbe) sso_query_pane_t3_ParamLimits

0xd7e5,	// (0x0006bdbe) sso_query_pane_t3

0xd80f,	// (0x0006bde8) sso_query_pane_t4_ParamLimits

0xd80f,	// (0x0006bde8) sso_query_pane_t4

0x0003,

0xfdd6,	// (0x0006e3af) sso_query_pane_t_ParamLimits

0xfdd6,	// (0x0006e3af) sso_query_pane_t

0xd2b1,	// (0x0006b88a) bg_button_pane_cp22

0xd6c5,	// (0x0006bc9e) sso_btn_pane_t1

0x970c,	// (0x00067ce5) sso_t_nml_pane_t1_ParamLimits

0x970c,	// (0x00067ce5) sso_t_nml_pane_t1

0xd833,	// (0x0006be0c) sso_option_row_pane_ParamLimits

0xd833,	// (0x0006be0c) sso_option_row_pane

0xd840,	// (0x0006be19) sso_t_sub_pane_t1_ParamLimits

0xd840,	// (0x0006be19) sso_t_sub_pane_t1

0xdbd9,	// (0x0006c1b2) bg_popup_window_pane_cp11_ParamLimits

0xdbd9,	// (0x0006c1b2) bg_popup_window_pane_cp11

0xd85d,	// (0x0006be36) popup_sk_window_cp01_ParamLimits

0xd85d,	// (0x0006be36) popup_sk_window_cp01

0xd86a,	// (0x0006be43) sso_popup_body_pane_ParamLimits

0xd86a,	// (0x0006be43) sso_popup_body_pane

0xd877,	// (0x0006be50) scroll_pane_cp21_ParamLimits

0xd877,	// (0x0006be50) scroll_pane_cp21

0xd884,	// (0x0006be5d) sso_popup_body_t_pane_ParamLimits

0xd884,	// (0x0006be5d) sso_popup_body_t_pane

0xd891,	// (0x0006be6a) sso_popup_body_t_hdr_pane_ParamLimits

0xd891,	// (0x0006be6a) sso_popup_body_t_hdr_pane

0x9727,	// (0x00067d00) sso_popup_body_t_nml_pane_ParamLimits

0x9727,	// (0x00067d00) sso_popup_body_t_nml_pane

0x974e,	// (0x00067d27) sso_popup_body_t_sub_pane_ParamLimits

0x974e,	// (0x00067d27) sso_popup_body_t_sub_pane

0xd8a3,	// (0x0006be7c) sso_popup_body_t_hdr_pane_t1

0x9771,	// (0x00067d4a) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9771,	// (0x00067d4a) sso_popup_body_t_nml_pane_t1

0xd8b3,	// (0x0006be8c) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd8b3,	// (0x0006be8c) sso_popup_body_t_sub_pane_t1

0xe38f,	// (0x0006c968) sso_prog_pane_g1

0x97a9,	// (0x00067d82) sso_apps_pane_comp1_ParamLimits

0x97a9,	// (0x00067d82) sso_apps_pane_comp1

0xd8d8,	// (0x0006beb1) sso_apps_pane_comp1_g1

0xd8e0,	// (0x0006beb9) sso_apps_pane_comp1_t1

0xd8fc,	// (0x0006bed5) sso_option_row_pane_g1

0xdbe7,	// (0x0006c1c0) sso_option_row_pane_t1

0xcddb,	// (0x0006b3b4) list_cmail_pane_ParamLimits

0xd923,	// (0x0006befc) main_call7_pane

0x8e36,	// (0x0006740f) bg_welc_area_ParamLimits

0x8e36,	// (0x0006740f) bg_welc_area

0x8fe9,	// (0x000675c2) sso_t_hdr_pane_a_t1_ParamLimits

0x8fe9,	// (0x000675c2) sso_t_hdr_pane_a_t1

0x9004,	// (0x000675dd) sso_t_nml_pane_a_t1_ParamLimits

0x9004,	// (0x000675dd) sso_t_nml_pane_a_t1

0x9033,	// (0x0006760c) sso_t_sub_pane_a_t1_ParamLimits

0x9033,	// (0x0006760c) sso_t_sub_pane_a_t1

0x90d6,	// (0x000676af) welc_button_pane_cp01_ParamLimits

0x90d6,	// (0x000676af) welc_button_pane_cp01

0xd6c5,	// (0x0006bc9e) sso_btn_pane_t1_copy1

0xd6d4,	// (0x0006bcad) welc_button_pane_2_comp1

0xd73b,	// (0x0006bd14) sso_t_hdr_pane_p_t1

0xd74b,	// (0x0006bd24) sso_t_nml_pane_p_t1

0xd75b,	// (0x0006bd34) sso_t_sub_pane_p_t1

0xd923,	// (0x0006befc) main_att_pane

0xd923,	// (0x0006befc) main_vod_pane

0x96ca,	// (0x00067ca3) sso_t_sub_pane_ParamLimits

0xd8ee,	// (0x0006bec7) input_focus_pane_cp10_t1

0xdbe7,	// (0x0006c1c0) sso_option_row_pane_t1_ParamLimits

0x97c3,	// (0x00067d9c) main_att_body_pane_ParamLimits

0x97c3,	// (0x00067d9c) main_att_body_pane

0x97d9,	// (0x00067db2) att_btn_emg_pane_ParamLimits

0x97d9,	// (0x00067db2) att_btn_emg_pane

0x97f8,	// (0x00067dd1) att_btn_pane_ParamLimits

0x97f8,	// (0x00067dd1) att_btn_pane

0x9867,	// (0x00067e40) att_btn_pane_cp01_ParamLimits

0x9867,	// (0x00067e40) att_btn_pane_cp01

0x98a7,	// (0x00067e80) att_li_srv_pane_ParamLimits

0x98a7,	// (0x00067e80) att_li_srv_pane

0x98c4,	// (0x00067e9d) att_opt_pane_ParamLimits

0x98c4,	// (0x00067e9d) att_opt_pane

0x990e,	// (0x00067ee7) att_query_pane_ParamLimits

0x990e,	// (0x00067ee7) att_query_pane

0x9987,	// (0x00067f60) att_query_pane_cp01_ParamLimits

0x9987,	// (0x00067f60) att_query_pane_cp01

0x99d3,	// (0x00067fac) att_t_hdr_pane_ParamLimits

0x99d3,	// (0x00067fac) att_t_hdr_pane

0x9a3f,	// (0x00068018) att_t_nml_pane_ParamLimits

0x9a3f,	// (0x00068018) att_t_nml_pane

0x9aaf,	// (0x00068088) att_t_nml_pane_cp01_ParamLimits

0x9aaf,	// (0x00068088) att_t_nml_pane_cp01

0x9add,	// (0x000680b6) att_t_nmlb_pane_ParamLimits

0x9add,	// (0x000680b6) att_t_nmlb_pane

0x9b4a,	// (0x00068123) att_term_pane_ParamLimits

0x9b4a,	// (0x00068123) att_term_pane

0x9b94,	// (0x0006816d) main_att_body_pane_g1_ParamLimits

0x9b94,	// (0x0006816d) main_att_body_pane_g1

0xdc03,	// (0x0006c1dc) att_t_hdr_pane_t1_ParamLimits

0xdc03,	// (0x0006c1dc) att_t_hdr_pane_t1

0xdc1c,	// (0x0006c1f5) att_t_nml_pane_t1_ParamLimits

0xdc1c,	// (0x0006c1f5) att_t_nml_pane_t1

0xdc41,	// (0x0006c21a) att_btn_pane_t1

0xd2b1,	// (0x0006b88a) bg_button_pane_cp23

0x9bc0,	// (0x00068199) att_li_srv_row_pane_ParamLimits

0x9bc0,	// (0x00068199) att_li_srv_row_pane

0xdc50,	// (0x0006c229) att_t_nmlb_pane_t1_ParamLimits

0xdc50,	// (0x0006c229) att_t_nmlb_pane_t1

0xdc6c,	// (0x0006c245) att_query_pane_t1

0xdc7b,	// (0x0006c254) att_query_pane_t2

0xdc8a,	// (0x0006c263) att_query_pane_t3

0x0002,

0xfde4,	// (0x0006e3bd) att_query_pane_t

0xdc99,	// (0x0006c272) input_focus_pane_cp11

0xdca2,	// (0x0006c27b) att_term_pane_t1_ParamLimits

0xdca2,	// (0x0006c27b) att_term_pane_t1

0xd923,	// (0x0006befc) att_opt_row_pane

0xdcbf,	// (0x0006c298) att_opt_row_pane_g1

0xdcc7,	// (0x0006c2a0) att_opt_row_pane_t1_ParamLimits

0xdcc7,	// (0x0006c2a0) att_opt_row_pane_t1

0x9bd0,	// (0x000681a9) att_li_srv_row_pane_g1

0x9bd8,	// (0x000681b1) att_li_srv_row_pane_t1_ParamLimits

0x9bd8,	// (0x000681b1) att_li_srv_row_pane_t1

0x9bd8,	// (0x000681b1) att_li_srv_row_pane_t2_ParamLimits

0x9bd8,	// (0x000681b1) att_li_srv_row_pane_t2

0x0001,

0xfdeb,	// (0x0006e3c4) att_li_srv_row_pane_t_ParamLimits

0xfdeb,	// (0x0006e3c4) att_li_srv_row_pane_t

0xdce0,	// (0x0006c2b9) att_btn_close_pane_g1

0xd923,	// (0x0006befc) bg_button_pane_cp24

0x9bed,	// (0x000681c6) main_vod_body_pane_ParamLimits

0x9bed,	// (0x000681c6) main_vod_body_pane

0x9c01,	// (0x000681da) main_vod_body_pane_g1_ParamLimits

0x9c01,	// (0x000681da) main_vod_body_pane_g1

0x9c35,	// (0x0006820e) scroll_pane_cp24_ParamLimits

0x9c35,	// (0x0006820e) scroll_pane_cp24

0x9c83,	// (0x0006825c) vod_btn_pane_ParamLimits

0x9c83,	// (0x0006825c) vod_btn_pane

0x9cc9,	// (0x000682a2) vod_det_pane_ParamLimits

0x9cc9,	// (0x000682a2) vod_det_pane

0x9cf9,	// (0x000682d2) vod_logo_g1_ParamLimits

0x9cf9,	// (0x000682d2) vod_logo_g1

0x9d37,	// (0x00068310) vod_opt_pane_ParamLimits

0x9d37,	// (0x00068310) vod_opt_pane

0x9d6a,	// (0x00068343) vod_opt_pane_cp01_ParamLimits

0x9d6a,	// (0x00068343) vod_opt_pane_cp01

0x9d96,	// (0x0006836f) vod_query_pane_ParamLimits

0x9d96,	// (0x0006836f) vod_query_pane

0x9dc1,	// (0x0006839a) vod_query_pane_cp01_ParamLimits

0x9dc1,	// (0x0006839a) vod_query_pane_cp01

0x9dcd,	// (0x000683a6) vod_t_nml_pane_ParamLimits

0x9dcd,	// (0x000683a6) vod_t_nml_pane

0x9e7a,	// (0x00068453) vod_t_nml_pane_cp01_ParamLimits

0x9e7a,	// (0x00068453) vod_t_nml_pane_cp01

0x9eb6,	// (0x0006848f) vod_t_sub_pane_ParamLimits

0x9eb6,	// (0x0006848f) vod_t_sub_pane

0x9ee7,	// (0x000684c0) vod_t_sub_pane_cp01_ParamLimits

0x9ee7,	// (0x000684c0) vod_t_sub_pane_cp01

0xdc99,	// (0x0006c272) vod_query_field_pane

0xdce8,	// (0x0006c2c1) vod_query_pane_t1

0xdcf7,	// (0x0006c2d0) bg_button_pane_cp25

0xd6c5,	// (0x0006bc9e) sso_btn_pane_t1_copy2

0x9f13,	// (0x000684ec) vod_t_nml_pane_t1_ParamLimits

0x9f13,	// (0x000684ec) vod_t_nml_pane_t1

0xdd00,	// (0x0006c2d9) vod_opt_row_pane_ParamLimits

0xdd00,	// (0x0006c2d9) vod_opt_row_pane

0xdd12,	// (0x0006c2eb) vod_t_sub_pane_t1_ParamLimits

0xdd12,	// (0x0006c2eb) vod_t_sub_pane_t1

0xdd2b,	// (0x0006c304) vod_det_cell_pane_ParamLimits

0xdd2b,	// (0x0006c304) vod_det_cell_pane

0xd923,	// (0x0006befc) input_focus_pane_cp15

0xdd3c,	// (0x0006c315) vod_query_field_pane_t1

0xdd4a,	// (0x0006c323) vod_opt_row_pane_g1_ParamLimits

0xdd4a,	// (0x0006c323) vod_opt_row_pane_g1

0xdd56,	// (0x0006c32f) vod_opt_row_pane_t1_ParamLimits

0xdd56,	// (0x0006c32f) vod_opt_row_pane_t1

0xdd76,	// (0x0006c34f) vod_det_cell_field_pane

0xdd7f,	// (0x0006c358) vod_det_cell_pane_g1

0xdd87,	// (0x0006c360) vod_det_cell_pane_t1

0xd923,	// (0x0006befc) input_focus_pane_cp16

0xdd96,	// (0x0006c36f) vod_det_cell_field_pane_t1

0x9f44,	// (0x0006851d) call7_btn_grp_pane_ParamLimits

0x9f44,	// (0x0006851d) call7_btn_grp_pane

0x9f5e,	// (0x00068537) call7_bubble_pane_ParamLimits

0x9f5e,	// (0x00068537) call7_bubble_pane

0x9f75,	// (0x0006854e) cell_call7_btn_pane_ParamLimits

0x9f75,	// (0x0006854e) cell_call7_btn_pane

0x9f88,	// (0x00068561) call7_pane_g1_ParamLimits

0x9f88,	// (0x00068561) call7_pane_g1

0x9f97,	// (0x00068570) call7_windows_conf_pane_ParamLimits

0x9f97,	// (0x00068570) call7_windows_conf_pane

0x9fb1,	// (0x0006858a) popup_call7_1st_window_ParamLimits

0x9fb1,	// (0x0006858a) popup_call7_1st_window

0x9fc2,	// (0x0006859b) popup_call7_2nd_window_ParamLimits

0x9fc2,	// (0x0006859b) popup_call7_2nd_window

0x9fd3,	// (0x000685ac) popup_call7_3rd_window_ParamLimits

0x9fd3,	// (0x000685ac) popup_call7_3rd_window

0xd923,	// (0x0006befc) bg_button_pane_cp26

0xd4a3,	// (0x0006ba7c) cell_call7_btn_pane_g1

0xd914,	// (0x0006beed) cell_call7_btn_pane_t1

0xd923,	// (0x0006befc) bg_popup_window_pane_cp12

0xdda4,	// (0x0006c37d) popup_call7_1st_window_g1

0xddac,	// (0x0006c385) popup_call7_1st_window_g2

0xddb4,	// (0x0006c38d) popup_call7_1st_window_g3

0x0002,

0xfdf0,	// (0x0006e3c9) popup_call7_1st_window_g

0xddbc,	// (0x0006c395) popup_call7_1st_window_t1

0xddcb,	// (0x0006c3a4) popup_call7_1st_window_t2

0xddd9,	// (0x0006c3b2) popup_call7_1st_window_t3

0x0002,

0xfdf7,	// (0x0006e3d0) popup_call7_1st_window_t

0xd923,	// (0x0006befc) bg_popup_window_pane_cp13

0xdde7,	// (0x0006c3c0) popup_call7_2nd_window_g1

0xddef,	// (0x0006c3c8) popup_call7_2nd_window_g2

0xddf7,	// (0x0006c3d0) popup_call7_2nd_window_g3

0x0002,

0xfdfe,	// (0x0006e3d7) popup_call7_2nd_window_g

0xddff,	// (0x0006c3d8) popup_call7_2nd_window_t1

0xd923,	// (0x0006befc) bg_popup_window_pane_cp14

0xde0e,	// (0x0006c3e7) call7_list_conf_pane

0xde16,	// (0x0006c3ef) call7_list_conf_row_pane_ParamLimits

0xde16,	// (0x0006c3ef) call7_list_conf_row_pane

0xde29,	// (0x0006c402) call7_list_conf_row_pane_g1

0xde31,	// (0x0006c40a) call7_list_conf_row_pane_g2

0x0001,

0xfe05,	// (0x0006e3de) call7_list_conf_row_pane_g

0xde39,	// (0x0006c412) call7_list_conf_row_pane_t1

0xd923,	// (0x0006befc) list_highlight_pane_cp22

0x953c,	// (0x00067b15) sso_option_pane_cp01_ParamLimits

0x953c,	// (0x00067b15) sso_option_pane_cp01

0xe2d6,	// (0x0006c8af) msg_header_pane_ParamLimits

0x2c0d,	// (0x000611e6) bg_button_pane_cp01_ParamLimits

0x2c21,	// (0x000611fa) input_focus_pane_cp07_ParamLimits

0x7dc7,	// (0x000663a0) popup_email_progress_window

0xe38f,	// (0x0006c968) popup_email_progress_window_g1

0xde47,	// (0x0006c420) popup_email_progress_window_g2

0x0001,

0xfe0a,	// (0x0006e3e3) popup_email_progress_window_g

0xde4f,	// (0x0006c428) popup_email_progress_window_t1

0xd923,	// (0x0006befc) cmail_conv_pane

0xcabb,	// (0x0006b094) list_single_dyc_row_pane_g5_ParamLimits

0xcabb,	// (0x0006b094) list_single_dyc_row_pane_g5

0xcac7,	// (0x0006b0a0) list_single_dyc_row_pane_g6_ParamLimits

0xcac7,	// (0x0006b0a0) list_single_dyc_row_pane_g6

0xcadf,	// (0x0006b0b8) list_single_dyc_row_pane_g7_ParamLimits

0xcadf,	// (0x0006b0b8) list_single_dyc_row_pane_g7

0x8e63,	// (0x0006743c) main_button_pane_5_ParamLimits

0x8e63,	// (0x0006743c) main_button_pane_5

0x9379,	// (0x00067952) sso_emg_call_btn_pane_ParamLimits

0x9379,	// (0x00067952) sso_emg_call_btn_pane

0x96df,	// (0x00067cb8) sso_t_sub_pane_cp01_ParamLimits

0x96df,	// (0x00067cb8) sso_t_sub_pane_cp01

0xd8fc,	// (0x0006bed5) sso_option_row_pane_g1_ParamLimits

0xd908,	// (0x0006bee1) sso_option_row_pane_g2_ParamLimits

0xd908,	// (0x0006bee1) sso_option_row_pane_g2

0x0001,

0xfddf,	// (0x0006e3b8) sso_option_row_pane_g_ParamLimits

0xfddf,	// (0x0006e3b8) sso_option_row_pane_g

0x9885,	// (0x00067e5e) att_btn_pane_cp02_ParamLimits

0x9885,	// (0x00067e5e) att_btn_pane_cp02

0xde5d,	// (0x0006c436) cmail_conv_hdr_pane

0xde66,	// (0x0006c43f) list_cmail_conv_pane

0xde70,	// (0x0006c449) scroll_pane_cp31

0xde78,	// (0x0006c451) cmail_conv_hdr_pane_t1

0xde86,	// (0x0006c45f) cmail_conv_hdr_pane_t2

0x0001,

0xfe0f,	// (0x0006e3e8) cmail_conv_hdr_pane_t

0xde94,	// (0x0006c46d) bubble_cmail_conv_pane_ParamLimits

0xde94,	// (0x0006c46d) bubble_cmail_conv_pane

0xdeac,	// (0x0006c485) aid_size_colorization_pane

0xe605,	// (0x0006cbde) bg_bubble_cmail_conv_pane

0xdeb4,	// (0x0006c48d) body_bubble_cmail_conv_pane

0xdebc,	// (0x0006c495) bubble_cmail_conv_pane_g1

0xdec4,	// (0x0006c49d) bubble_cmail_conv_pane_g2

0xdecc,	// (0x0006c4a5) bubble_cmail_conv_pane_g3

0x0002,

0xfe14,	// (0x0006e3ed) bubble_cmail_conv_pane_g

0xded4,	// (0x0006c4ad) bubble_cmail_conv_pane_t1

0xdee2,	// (0x0006c4bb) bg_bubble_cmail_conv_pane_g1

0xdeeb,	// (0x0006c4c4) bg_bubble_cmail_conv_pane_g2

0xdef4,	// (0x0006c4cd) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe1b,	// (0x0006e3f4) bg_bubble_cmail_conv_pane_g

0xdefd,	// (0x0006c4d6) body_bubble_cmail_conv_pane_t1_ParamLimits

0xdefd,	// (0x0006c4d6) body_bubble_cmail_conv_pane_t1

0xcd44,	// (0x0006b31d) body_bubble_cmail_conv_pane_t2_ParamLimits

0xcd44,	// (0x0006b31d) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe22,	// (0x0006e3fb) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe22,	// (0x0006e3fb) body_bubble_cmail_conv_pane_t

0xdbd9,	// (0x0006c1b2) list_highlight_pane_cp024_ParamLimits
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
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
