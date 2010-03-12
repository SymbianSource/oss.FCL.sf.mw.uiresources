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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000858ed };

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
0x44e1,	// (0x00089dce) Screen

0x44ed,	// (0x00089dda) application_window

0x4549,	// (0x00089e36) area_bottom_pane_ParamLimits

0x4549,	// (0x00089e36) area_bottom_pane

0x45a2,	// (0x00089e8f) area_top_pane_ParamLimits

0x45a2,	// (0x00089e8f) area_top_pane

0x4606,	// (0x00089ef3) call_video_uplink_pane_ParamLimits

0x4606,	// (0x00089ef3) call_video_uplink_pane

0x4643,	// (0x00089f30) main_pane_ParamLimits

0x4643,	// (0x00089f30) main_pane

0x12e5,	// (0x00086bd2) context_pane

0x788b,	// (0x0008d178) navi_pane

0x78ab,	// (0x0008d198) popup_cale_events_window_ParamLimits

0x78ab,	// (0x0008d198) popup_cale_events_window

0x12f8,	// (0x00086be5) popup_mup_playback_window

0x78c3,	// (0x0008d1b0) signal_pane

0xe31e,	// (0x00093c0b) main_browser_pane

0xef05,	// (0x000947f2) main_burst_pane

0x7714,	// (0x0008d001) main_calc_pane

0xef05,	// (0x000947f2) main_cale_day_pane

0xe31e,	// (0x00093c0b) main_cale_month_pane

0xef05,	// (0x000947f2) main_cale_week_pane

0xef05,	// (0x000947f2) main_call_pane

0xdfac,	// (0x00093899) main_call_poc_pane

0xef05,	// (0x000947f2) main_camera_pane

0xef05,	// (0x000947f2) main_chi_dic_pane

0xed94,	// (0x00094681) main_clock_pane

0xdfac,	// (0x00093899) main_fmradio_pane

0xef05,	// (0x000947f2) main_graph_messa_pane

0xdfac,	// (0x00093899) main_help_pane

0xe31e,	// (0x00093c0b) main_im_pane

0xe207,	// (0x00093af4) main_image_pane_ParamLimits

0xe207,	// (0x00093af4) main_image_pane

0xdfac,	// (0x00093899) main_location2_pane

0xef05,	// (0x000947f2) main_location_pane

0xdfac,	// (0x00093899) main_messa_pane

0xdfac,	// (0x00093899) main_mp2_pane

0xef05,	// (0x000947f2) main_mp_pane

0xdfac,	// (0x00093899) main_msg_pane

0xdfac,	// (0x00093899) main_mup_eq_pane

0xdfac,	// (0x00093899) main_mup_pane

0xe31e,	// (0x00093c0b) main_notes_pane

0xdfac,	// (0x00093899) main_pec_pane

0xdfac,	// (0x00093899) main_phob_pane

0xdfac,	// (0x00093899) main_pinb_pane

0xdfac,	// (0x00093899) main_postcard_pane

0xdfac,	// (0x00093899) main_qdial_pane

0xef05,	// (0x000947f2) main_skin_pane

0xdfac,	// (0x00093899) main_smil2_pane

0xef05,	// (0x000947f2) main_smil_pane

0xef05,	// (0x000947f2) main_video_pane

0xef05,	// (0x000947f2) main_video_tele_pane

0xe207,	// (0x00093af4) main_viewer_pane_ParamLimits

0xe207,	// (0x00093af4) main_viewer_pane

0xef05,	// (0x000947f2) main_vorec_pane

0x7760,	// (0x0008d04d) popup_blid_sat_info_window_ParamLimits

0x7760,	// (0x0008d04d) popup_blid_sat_info_window

0x7780,	// (0x0008d06d) popup_dyc_status_message_window_ParamLimits

0x7780,	// (0x0008d06d) popup_dyc_status_message_window

0x778e,	// (0x0008d07b) popup_grid_large_graphic_window_ParamLimits

0x778e,	// (0x0008d07b) popup_grid_large_graphic_window

0x781d,	// (0x0008d10a) popup_loc_request_window_ParamLimits

0x781d,	// (0x0008d10a) popup_loc_request_window

0x7863,	// (0x0008d150) popup_wml_address_window_ParamLimits

0x7863,	// (0x0008d150) popup_wml_address_window

0x75ec,	// (0x0008ced9) call_muted_g1

0x72ab,	// (0x0008cb98) popup_call_audio_conf_window_ParamLimits

0x72ab,	// (0x0008cb98) popup_call_audio_conf_window

0x75fc,	// (0x0008cee9) popup_call_audio_first_window_ParamLimits

0x75fc,	// (0x0008cee9) popup_call_audio_first_window

0x763c,	// (0x0008cf29) popup_call_audio_in_window_ParamLimits

0x763c,	// (0x0008cf29) popup_call_audio_in_window

0x7660,	// (0x0008cf4d) popup_call_audio_out_window_ParamLimits

0x7660,	// (0x0008cf4d) popup_call_audio_out_window

0x7682,	// (0x0008cf6f) popup_call_audio_second_window_ParamLimits

0x7682,	// (0x0008cf6f) popup_call_audio_second_window

0x76b2,	// (0x0008cf9f) popup_call_audio_wait_window_ParamLimits

0x76b2,	// (0x0008cf9f) popup_call_audio_wait_window

0x76d3,	// (0x0008cfc0) popup_number_entry_window_ParamLimits

0x76d3,	// (0x0008cfc0) popup_number_entry_window

0xca0d,	// (0x000922fa) bg_popup_call_pane_cp05_ParamLimits

0xca0d,	// (0x000922fa) bg_popup_call_pane_cp05

0xca2d,	// (0x0009231a) popup_number_entry_window_t1

0xca40,	// (0x0009232d) popup_number_entry_window_t2

0xca52,	// (0x0009233f) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000949c5) popup_number_entry_window_t

0xca64,	// (0x00092351) text_title_cp2

0xca77,	// (0x00092364) bg_popup_call_pane_cp_ParamLimits

0xca77,	// (0x00092364) bg_popup_call_pane_cp

0xca85,	// (0x00092372) call_thumbnail_pane

0xca8d,	// (0x0009237a) popup_call_audio_in_window_g1_ParamLimits

0xca8d,	// (0x0009237a) popup_call_audio_in_window_g1

0xca99,	// (0x00092386) popup_call_audio_in_window_g2_ParamLimits

0xca99,	// (0x00092386) popup_call_audio_in_window_g2

0xcaa5,	// (0x00092392) popup_call_audio_in_window_g3_ParamLimits

0xcaa5,	// (0x00092392) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000949ce) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000949ce) popup_call_audio_in_window_g

0xcab1,	// (0x0009239e) popup_call_audio_in_window_t1_ParamLimits

0xcab1,	// (0x0009239e) popup_call_audio_in_window_t1

0xcacc,	// (0x000923b9) popup_call_audio_in_window_t2_ParamLimits

0xcacc,	// (0x000923b9) popup_call_audio_in_window_t2

0xcae7,	// (0x000923d4) popup_call_audio_in_window_t3_ParamLimits

0xcae7,	// (0x000923d4) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000949d5) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000949d5) popup_call_audio_in_window_t

0xca77,	// (0x00092364) bg_popup_call_pane_cp01_ParamLimits

0xca77,	// (0x00092364) bg_popup_call_pane_cp01

0xca85,	// (0x00092372) call_thumbnail_pane_cp02

0xcafa,	// (0x000923e7) call_type_pane_cp022

0xcb02,	// (0x000923ef) popup_call_audio_out_window_g1_ParamLimits

0xcb02,	// (0x000923ef) popup_call_audio_out_window_g1

0xcb14,	// (0x00092401) popup_call_audio_out_window_g2_ParamLimits

0xcb14,	// (0x00092401) popup_call_audio_out_window_g2

0xcb20,	// (0x0009240d) popup_call_audio_out_window_g3_ParamLimits

0xcb20,	// (0x0009240d) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000949dc) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000949dc) popup_call_audio_out_window_g

0xcb32,	// (0x0009241f) popup_call_audio_out_window_t1_ParamLimits

0xcb32,	// (0x0009241f) popup_call_audio_out_window_t1

0xcb4a,	// (0x00092437) popup_call_audio_out_window_t2_ParamLimits

0xcb4a,	// (0x00092437) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000949e3) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000949e3) popup_call_audio_out_window_t

0xcb5f,	// (0x0009244c) bg_popup_call_pane_ParamLimits

0xcb5f,	// (0x0009244c) bg_popup_call_pane

0x4858,	// (0x0008a145) call_thumbnail_pane_cp_ParamLimits

0x4858,	// (0x0008a145) call_thumbnail_pane_cp

0xcbe3,	// (0x000924d0) call_type_pane_cp01_ParamLimits

0xcbe3,	// (0x000924d0) call_type_pane_cp01

0xcc27,	// (0x00092514) popup_call_audio_first_window_g1_ParamLimits

0xcc27,	// (0x00092514) popup_call_audio_first_window_g1

0xcc73,	// (0x00092560) popup_call_audio_first_window_g2_ParamLimits

0xcc73,	// (0x00092560) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000949e8) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000949e8) popup_call_audio_first_window_g

0xccb7,	// (0x000925a4) popup_call_audio_first_window_t1_ParamLimits

0xccb7,	// (0x000925a4) popup_call_audio_first_window_t1

0xdd28,	// (0x00093615) popup_call_audio_first_window_t4_ParamLimits

0xdd28,	// (0x00093615) popup_call_audio_first_window_t4

0xdf7d,	// (0x0009386a) popup_call_audio_first_window_t5_ParamLimits

0xdf7d,	// (0x0009386a) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x000949ed) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x000949ed) popup_call_audio_first_window_t

0xdfac,	// (0x00093899) bg_popup_call_pane_cp02

0xdfb6,	// (0x000938a3) call_type_pane_cp023

0xdfbe,	// (0x000938ab) popup_call_audio_wait_window_g1

0xdfc6,	// (0x000938b3) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x000949f4) popup_call_audio_wait_window_g

0xdfce,	// (0x000938bb) popup_call_audio_wait_window_t3

0xdfdc,	// (0x000938c9) bg_popup_call_pane_cp03_ParamLimits

0xdfdc,	// (0x000938c9) bg_popup_call_pane_cp03

0xe03c,	// (0x00093929) call_thumbnail_pane_cp011_ParamLimits

0xe03c,	// (0x00093929) call_thumbnail_pane_cp011

0xe048,	// (0x00093935) call_type_pane_cp034_ParamLimits

0xe048,	// (0x00093935) call_type_pane_cp034

0xe084,	// (0x00093971) popup_call_audio_second_window_g1_ParamLimits

0xe084,	// (0x00093971) popup_call_audio_second_window_g1

0xe0c0,	// (0x000939ad) popup_call_audio_second_window_g2_ParamLimits

0xe0c0,	// (0x000939ad) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000949f9) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000949f9) popup_call_audio_second_window_g

0xe0fc,	// (0x000939e9) popup_call_audio_second_window_t1_ParamLimits

0xe0fc,	// (0x000939e9) popup_call_audio_second_window_t1

0xe17d,	// (0x00093a6a) popup_call_audio_second_window_t2_ParamLimits

0xe17d,	// (0x00093a6a) popup_call_audio_second_window_t2

0xe1b3,	// (0x00093aa0) popup_call_audio_second_window_t3_ParamLimits

0xe1b3,	// (0x00093aa0) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x000949fe) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x000949fe) popup_call_audio_second_window_t

0xdfac,	// (0x00093899) bg_popup_call_pane_cp04

0xe1e9,	// (0x00093ad6) list_conf_pane

0xe1f1,	// (0x00093ade) popup_call_audio_conf_window_t1

0xe1ff,	// (0x00093aec) call_thumbnail_pane_g1

0xe207,	// (0x00093af4) bg_pinb_pane_ParamLimits

0xe207,	// (0x00093af4) bg_pinb_pane

0xe215,	// (0x00093b02) find_pinb_pane

0xe21e,	// (0x00093b0b) listscroll_pinb_pane_ParamLimits

0xe21e,	// (0x00093b0b) listscroll_pinb_pane

0xe22d,	// (0x00093b1a) pinb_bg_pane_g1

0x487c,	// (0x0008a169) pinb_bg_pane_g2

0x4888,	// (0x0008a175) pinb_bg_pane_g3

0x4894,	// (0x0008a181) pinb_bg_pane_g4

0x48a0,	// (0x0008a18d) pinb_bg_pane_g5

0x48ac,	// (0x0008a199) pinb_bg_pane_g6

0x48b7,	// (0x0008a1a4) pinb_bg_pane_g7

0x48c2,	// (0x0008a1af) pinb_bg_pane_g8

0x48cd,	// (0x0008a1ba) pinb_bg_pane_g9

0x48d7,	// (0x0008a1c4) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00094a05) pinb_bg_pane_g

0x48ec,	// (0x0008a1d9) grid_pinb_pane

0x48f7,	// (0x0008a1e4) list_pinb_pane

0x4902,	// (0x0008a1ef) scroll_pane_cp01_ParamLimits

0x4902,	// (0x0008a1ef) scroll_pane_cp01

0xe23f,	// (0x00093b2c) find_pinb_pane_g1_ParamLimits

0xe23f,	// (0x00093b2c) find_pinb_pane_g1

0xe257,	// (0x00093b44) find_pinb_pane_t1

0xe269,	// (0x00093b56) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00094a1f) find_pinb_pane_t

0xe27e,	// (0x00093b6b) input_focus_pane_cp01_ParamLimits

0xe27e,	// (0x00093b6b) input_focus_pane_cp01

0x4914,	// (0x0008a201) cell_pinb_pane_ParamLimits

0x4914,	// (0x0008a201) cell_pinb_pane

0x4948,	// (0x0008a235) cell_pinb_pane_g1_ParamLimits

0x4948,	// (0x0008a235) cell_pinb_pane_g1

0x495d,	// (0x0008a24a) cell_pinb_pane_g2_ParamLimits

0x495d,	// (0x0008a24a) cell_pinb_pane_g2

0xe28a,	// (0x00093b77) cell_pinb_pane_g3_ParamLimits

0xe28a,	// (0x00093b77) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00094a24) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00094a24) cell_pinb_pane_g

0xdfac,	// (0x00093899) grid_highlight_pane_cp01

0x4969,	// (0x0008a256) list_pinb_item_pane_ParamLimits

0x4969,	// (0x0008a256) list_pinb_item_pane

0xdfac,	// (0x00093899) list_highlight_pane_cp02

0xe296,	// (0x00093b83) list_pinb_item_pane_g1_ParamLimits

0xe296,	// (0x00093b83) list_pinb_item_pane_g1

0xe2a3,	// (0x00093b90) list_pinb_item_pane_g2_ParamLimits

0xe2a3,	// (0x00093b90) list_pinb_item_pane_g2

0x4996,	// (0x0008a283) list_pinb_item_pane_g3_ParamLimits

0x4996,	// (0x0008a283) list_pinb_item_pane_g3

0xe2af,	// (0x00093b9c) list_pinb_item_pane_g4_ParamLimits

0xe2af,	// (0x00093b9c) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00094a2b) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00094a2b) list_pinb_item_pane_g

0xe2bb,	// (0x00093ba8) list_pinb_item_pane_t1_ParamLimits

0xe2bb,	// (0x00093ba8) list_pinb_item_pane_t1

0x49c1,	// (0x0008a2ae) calc_display_pane

0x49df,	// (0x0008a2cc) calc_paper_pane

0x49fb,	// (0x0008a2e8) grid_calc_pane

0xdfac,	// (0x00093899) bg_list_pane_cp01

0x4a27,	// (0x0008a314) clock_g1

0x4a2f,	// (0x0008a31c) clock_g2

0x0001,

0xf147,	// (0x00094a34) clock_g

0x4a39,	// (0x0008a326) clock_t1_ParamLimits

0x4a39,	// (0x0008a326) clock_t1

0x4a4e,	// (0x0008a33b) clock_t2_ParamLimits

0x4a4e,	// (0x0008a33b) clock_t2

0x4a60,	// (0x0008a34d) clock_t3_ParamLimits

0x4a60,	// (0x0008a34d) clock_t3

0x4a72,	// (0x0008a35f) clock_t4_ParamLimits

0x4a72,	// (0x0008a35f) clock_t4

0x4a84,	// (0x0008a371) clock_t5_ParamLimits

0x4a84,	// (0x0008a371) clock_t5

0x4a99,	// (0x0008a386) clock_t6_ParamLimits

0x4a99,	// (0x0008a386) clock_t6

0x4aab,	// (0x0008a398) clock_t7_ParamLimits

0x4aab,	// (0x0008a398) clock_t7

0x4abd,	// (0x0008a3aa) clock_t8_ParamLimits

0x4abd,	// (0x0008a3aa) clock_t8

0x4ad3,	// (0x0008a3c0) clock_t9_ParamLimits

0x4ad3,	// (0x0008a3c0) clock_t9

0x0008,

0xf14c,	// (0x00094a39) clock_t_ParamLimits

0xf14c,	// (0x00094a39) clock_t

0xe2d2,	// (0x00093bbf) popup_clock_analogue_window_cp02

0xe2d2,	// (0x00093bbf) popup_clock_digital_window_cp01

0xe2da,	// (0x00093bc7) listscroll_help_pane

0xdfac,	// (0x00093899) phob_pre_status_pane

0xe2e4,	// (0x00093bd1) grid_qdial_pane

0xdfac,	// (0x00093899) listscroll_mce_pane

0xe2ee,	// (0x00093bdb) bg_notes_pane

0xe2fc,	// (0x00093be9) list_notes_pane

0x4ae9,	// (0x0008a3d6) scroll_pane_cp06

0xe30a,	// (0x00093bf7) bg_calc_paper_pane

0x4af8,	// (0x0008a3e5) list_calc_pane

0xe31e,	// (0x00093c0b) bg_calc_display_pane

0x4b12,	// (0x0008a3ff) calc_display_pane_t1

0x4b27,	// (0x0008a414) calc_display_pane_t2

0x4b3c,	// (0x0008a429) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00094a4c) calc_display_pane_t

0x4b4e,	// (0x0008a43b) cell_calc_pane_ParamLimits

0x4b4e,	// (0x0008a43b) cell_calc_pane

0xe32a,	// (0x00093c17) bg_calc_paper_pane_g1

0xe336,	// (0x00093c23) bg_calc_paper_pane_g2

0xe342,	// (0x00093c2f) bg_calc_paper_pane_g3

0xe34e,	// (0x00093c3b) bg_calc_paper_pane_g4

0xe35a,	// (0x00093c47) bg_calc_paper_pane_g5

0x4b7b,	// (0x0008a468) bg_calc_paper_pane_g6

0x4b8c,	// (0x0008a479) bg_calc_paper_pane_g7

0x4b9d,	// (0x0008a48a) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00094a53) bg_calc_paper_pane_g

0x4bae,	// (0x0008a49b) calc_bg_paper_pane_g9

0x4bbf,	// (0x0008a4ac) list_calc_item_pane_ParamLimits

0x4bbf,	// (0x0008a4ac) list_calc_item_pane

0xe366,	// (0x00093c53) list_calc_item_pane_g1

0x4bf9,	// (0x0008a4e6) list_calc_item_pane_t1_ParamLimits

0x4bf9,	// (0x0008a4e6) list_calc_item_pane_t1

0x4c0b,	// (0x0008a4f8) list_calc_item_pane_t2_ParamLimits

0x4c0b,	// (0x0008a4f8) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00094a64) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00094a64) list_calc_item_pane_t

0xe373,	// (0x00093c60) cell_calc_pane_g1

0xe37d,	// (0x00093c6a) grid_highlight_pane_cp02

0xe39f,	// (0x00093c8c) bg_calc_display_pane_g1

0x4c3b,	// (0x0008a528) bg_calc_display_pane_g2

0xe3a8,	// (0x00093c95) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00094a6e) bg_calc_display_pane_g

0x4c45,	// (0x0008a532) cell_qdial_pane_ParamLimits

0x4c45,	// (0x0008a532) cell_qdial_pane

0x4c59,	// (0x0008a546) cell_qdial_pane_g1_ParamLimits

0x4c59,	// (0x0008a546) cell_qdial_pane_g1

0x4c66,	// (0x0008a553) cell_qdial_pane_g2_ParamLimits

0x4c66,	// (0x0008a553) cell_qdial_pane_g2

0xe3b1,	// (0x00093c9e) cell_qdial_pane_g3_ParamLimits

0xe3b1,	// (0x00093c9e) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00094a75) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00094a75) cell_qdial_pane_g

0x4c84,	// (0x0008a571) cell_qdial_pane_t1_ParamLimits

0x4c84,	// (0x0008a571) cell_qdial_pane_t1

0x4c9c,	// (0x0008a589) cell_qdial_pane_t2_ParamLimits

0x4c9c,	// (0x0008a589) cell_qdial_pane_t2

0x4caf,	// (0x0008a59c) cell_qdial_pane_t3_ParamLimits

0x4caf,	// (0x0008a59c) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00094a7e) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00094a7e) cell_qdial_pane_t

0xdfac,	// (0x00093899) grid_highlight_pane_cp04

0xe3bd,	// (0x00093caa) thumbnail_qdial_pane_ParamLimits

0xe3bd,	// (0x00093caa) thumbnail_qdial_pane

0xe419,	// (0x00093d06) list_help_pane

0xe422,	// (0x00093d0f) scroll_pane_cp02

0x4cc2,	// (0x0008a5af) help_list_pane_t1_ParamLimits

0x4cc2,	// (0x0008a5af) help_list_pane_t1

0x4d00,	// (0x0008a5ed) bg_notes_pane_g2

0x4d08,	// (0x0008a5f5) bg_notes_pane_g3

0x4d10,	// (0x0008a5fd) notes_bg_pane_g1

0x4d18,	// (0x0008a605) notes_bg_pane_g4

0x4d20,	// (0x0008a60d) notes_bg_pane_g5

0x4d28,	// (0x0008a615) notes_bg_pane_g6

0x4d30,	// (0x0008a61d) notes_bg_pane_g7

0x4d38,	// (0x0008a625) notes_bg_pane_g8

0x4d40,	// (0x0008a62d) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00094a9c) notes_bg_pane_g

0x4d48,	// (0x0008a635) list_notes_text_pane_ParamLimits

0x4d48,	// (0x0008a635) list_notes_text_pane

0xe42b,	// (0x00093d18) list_notes_text_pane_g1

0x4d9c,	// (0x0008a689) list_notes_text_pane_t1

0xe31e,	// (0x00093c0b) listscroll_cale_week_pane

0x4dc7,	// (0x0008a6b4) bg_cale_heading_pane

0xe445,	// (0x00093d32) bg_cale_pane_cp01

0x4de3,	// (0x0008a6d0) cale_week_corner_pane

0x4df4,	// (0x0008a6e1) cale_week_day_heading_pane

0x4e10,	// (0x0008a6fd) cale_week_scroll_pane_g1

0x4e29,	// (0x0008a716) cale_week_scroll_pane_g2

0x4e3a,	// (0x0008a727) cale_week_scroll_pane_g3

0x4e4b,	// (0x0008a738) cale_week_scroll_pane_g4

0x4e5c,	// (0x0008a749) cale_week_scroll_pane_g5

0x4e6d,	// (0x0008a75a) cale_week_scroll_pane_g6

0x4e7e,	// (0x0008a76b) cale_week_scroll_pane_g7

0x4e91,	// (0x0008a77e) cale_week_scroll_pane_g8

0x4ea4,	// (0x0008a791) cale_week_scroll_pane_g9

0x4eb5,	// (0x0008a7a2) cale_week_scroll_pane_g10

0x4ec6,	// (0x0008a7b3) cale_week_scroll_pane_g11

0x4ed7,	// (0x0008a7c4) cale_week_scroll_pane_g12

0x4ef0,	// (0x0008a7dd) cale_week_scroll_pane_g13

0x4f09,	// (0x0008a7f6) cale_week_scroll_pane_g14

0x4f22,	// (0x0008a80f) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00094aab) cale_week_scroll_pane_g

0x4f3b,	// (0x0008a828) cale_week_time_pane

0x4f4e,	// (0x0008a83b) grid_cale_week_pane

0x4f6b,	// (0x0008a858) scroll_pane_cp08

0x4f85,	// (0x0008a872) cell_cale_week_pane_ParamLimits

0x4f85,	// (0x0008a872) cell_cale_week_pane

0x4fd5,	// (0x0008a8c2) cale_week_day_heading_pane_t1

0x4fe9,	// (0x0008a8d6) cale_week_day_heading_pane_t2

0x4ffd,	// (0x0008a8ea) cale_week_day_heading_pane_t3

0x5011,	// (0x0008a8fe) cale_week_day_heading_pane_t4

0x5025,	// (0x0008a912) cale_week_day_heading_pane_t5

0x5039,	// (0x0008a926) cale_week_day_heading_pane_t6

0x504d,	// (0x0008a93a) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00094aca) cale_week_day_heading_pane_t

0xe470,	// (0x00093d5d) bg_cale_side_pane

0x5061,	// (0x0008a94e) cale_week_time_pane_t1

0x5079,	// (0x0008a966) cale_week_time_pane_t2

0x5091,	// (0x0008a97e) cale_week_time_pane_t3

0x50a9,	// (0x0008a996) cale_week_time_pane_t4

0x50c1,	// (0x0008a9ae) cale_week_time_pane_t5

0x50d9,	// (0x0008a9c6) cale_week_time_pane_t6

0x50f9,	// (0x0008a9e6) cale_week_time_pane_t7

0x5119,	// (0x0008aa06) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00094ad9) cale_week_time_pane_t

0x5139,	// (0x0008aa26) cell_cale_week_pane_g2

0x514a,	// (0x0008aa37) cell_cale_week_pane_g3_ParamLimits

0x514a,	// (0x0008aa37) cell_cale_week_pane_g3

0xe47e,	// (0x00093d6b) grid_highlight_pane_cp07

0xe486,	// (0x00093d73) listscroll_gms_pane

0xe490,	// (0x00093d7d) grid_gms_pane

0xe499,	// (0x00093d86) listscroll_gms_pane_g1

0xe4a1,	// (0x00093d8e) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00094aea) listscroll_gms_pane_g

0x5162,	// (0x0008aa4f) scroll_pane_cp010

0x516d,	// (0x0008aa5a) cell_gms_pane_ParamLimits

0x516d,	// (0x0008aa5a) cell_gms_pane

0x517f,	// (0x0008aa6c) cell_gms_pane_g1

0xe4a9,	// (0x00093d96) cell_gms_pane_g2

0xe42b,	// (0x00093d18) cell_gms_pane_g3

0xe4b1,	// (0x00093d9e) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00094aef) cell_gms_pane_g

0xe4ba,	// (0x00093da7) grid_highlight_pane_cp09

0x7594,	// (0x0008ce81) phob_pre_status_pane_g1

0x759c,	// (0x0008ce89) phob_pre_status_pane_g2

0x75a4,	// (0x0008ce91) phob_pre_status_pane_g3

0x75ac,	// (0x0008ce99) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00094ede) phob_pre_status_pane_g

0x75bc,	// (0x0008cea9) phob_pre_status_pane_t1

0x75cc,	// (0x0008ceb9) phob_pre_status_pane_t2

0x75dc,	// (0x0008cec9) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00094ee9) phob_pre_status_pane_t

0xdfac,	// (0x00093899) bg_list_pane_cp05

0x518f,	// (0x0008aa7c) grid_vorec_pane

0x5199,	// (0x0008aa86) vorec_t1

0x51a7,	// (0x0008aa94) vorec_t2

0x51b5,	// (0x0008aaa2) vorec_t3

0x51c3,	// (0x0008aab0) vorec_t4

0x51d1,	// (0x0008aabe) vorec_t5

0x51df,	// (0x0008aacc) vorec_t6

0x0006,

0xf20b,	// (0x00094af8) vorec_t

0x51fb,	// (0x0008aae8) wait_bar_pane_cp01

0xe4c2,	// (0x00093daf) cell_vorec_pane_ParamLimits

0xe4c2,	// (0x00093daf) cell_vorec_pane

0xe4d5,	// (0x00093dc2) cell_vorec_pane_g1

0xdfac,	// (0x00093899) grid_highlight_pane_cp05

0x5213,	// (0x0008ab00) cams_zoom_pane

0x521f,	// (0x0008ab0c) image_vga_pane

0x522e,	// (0x0008ab1b) main_camera_pane_g1

0x523c,	// (0x0008ab29) main_camera_pane_g2

0x524a,	// (0x0008ab37) main_camera_pane_g3

0x5256,	// (0x0008ab43) main_camera_pane_g4

0x5262,	// (0x0008ab4f) main_camera_pane_g5

0x526e,	// (0x0008ab5b) main_camera_pane_g6

0x527a,	// (0x0008ab67) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00094b07) main_camera_pane_g

0x5286,	// (0x0008ab73) main_camera_pane_t1

0x5298,	// (0x0008ab85) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00094b18) main_camera_pane_t

0x52b9,	// (0x0008aba6) cams_zoom_pane_cp_ParamLimits

0x52b9,	// (0x0008aba6) cams_zoom_pane_cp

0x52dd,	// (0x0008abca) image_cif_pane_ParamLimits

0x52dd,	// (0x0008abca) image_cif_pane

0x52fb,	// (0x0008abe8) image_subqcif_pane

0x5303,	// (0x0008abf0) main_video_pane_g1_ParamLimits

0x5303,	// (0x0008abf0) main_video_pane_g1

0x5323,	// (0x0008ac10) main_video_pane_g2_ParamLimits

0x5323,	// (0x0008ac10) main_video_pane_g2

0x5355,	// (0x0008ac42) main_video_pane_g3_ParamLimits

0x5355,	// (0x0008ac42) main_video_pane_g3

0x5380,	// (0x0008ac6d) main_video_pane_g4_ParamLimits

0x5380,	// (0x0008ac6d) main_video_pane_g4

0x53ab,	// (0x0008ac98) main_video_pane_g5_ParamLimits

0x53ab,	// (0x0008ac98) main_video_pane_g5

0xe4eb,	// (0x00093dd8) main_video_pane_g6_ParamLimits

0xe4eb,	// (0x00093dd8) main_video_pane_g6

0x0006,

0xf230,	// (0x00094b1d) main_video_pane_g_ParamLimits

0xf230,	// (0x00094b1d) main_video_pane_g

0x53cf,	// (0x0008acbc) main_video_pane_t1_ParamLimits

0x53cf,	// (0x0008acbc) main_video_pane_t1

0xe505,	// (0x00093df2) cams_zoom_pane_g1

0xe50e,	// (0x00093dfb) cams_zoom_pane_g2

0xe517,	// (0x00093e04) cams_zoom_pane_g3

0xe520,	// (0x00093e0d) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00094b2c) cams_zoom_pane_g

0x5419,	// (0x0008ad06) grid_cams_pane

0x5427,	// (0x0008ad14) linegrid_cams_pane

0x5435,	// (0x0008ad22) cell_cams_pane_ParamLimits

0x5435,	// (0x0008ad22) cell_cams_pane

0xe529,	// (0x00093e16) cams_burst_image_pane

0xe531,	// (0x00093e1e) cell_cams_pane_g1

0xdfac,	// (0x00093899) grid_highlight_pane_cp03

0xe373,	// (0x00093c60) mp_bg_pane_g1

0xdfac,	// (0x00093899) bg_list_pane_cp03

0x11bd,	// (0x00086aaa) bg_mp_pane

0x11c5,	// (0x00086ab2) grid_mp_pane

0x11cd,	// (0x00086aba) media_player_g1

0x11d5,	// (0x00086ac2) media_player_t1

0x11e3,	// (0x00086ad0) media_player_t2

0x11f1,	// (0x00086ade) media_player_t3

0x11ff,	// (0x00086aec) media_player_t4

0x120d,	// (0x00086afa) media_player_t5

0x121b,	// (0x00086b08) media_player_t6

0x1229,	// (0x00086b16) media_player_t7

0x0006,

0xf5db,	// (0x00094ec8) media_player_t

0x1237,	// (0x00086b24) wait_bar_pane_cp02

0xf5c0,	// (0x00094ead) main_usb_pane_t

0x758b,	// (0x0008ce78) cell_mp_pane

0xe373,	// (0x00093c60) cell_mp_pane_g1

0xdfac,	// (0x00093899) grid_highlight_pane_cp06

0xe5f7,	// (0x00093ee4) grid_skin_colour_pane

0xe5ff,	// (0x00093eec) list_highlight_pane_cp03

0x5498,	// (0x0008ad85) skin_g1

0xe607,	// (0x00093ef4) skin_t1

0xe616,	// (0x00093f03) skin_t2

0x0001,

0xf274,	// (0x00094b61) skin_t

0x54a2,	// (0x0008ad8f) cell_skin_colour_pane_ParamLimits

0x54a2,	// (0x0008ad8f) cell_skin_colour_pane

0xe624,	// (0x00093f11) cell_skin_colour_pane_g1

0x5526,	// (0x0008ae13) call_video_g1_ParamLimits

0x5526,	// (0x0008ae13) call_video_g1

0x5536,	// (0x0008ae23) call_video_g2_ParamLimits

0x5536,	// (0x0008ae23) call_video_g2

0x0001,

0xf279,	// (0x00094b66) call_video_g_ParamLimits

0xf279,	// (0x00094b66) call_video_g

0x5590,	// (0x0008ae7d) call_video_uplink_pane_cp1_ParamLimits

0x5590,	// (0x0008ae7d) call_video_uplink_pane_cp1

0xe636,	// (0x00093f23) call_video_uplink_pane_cp2

0x565c,	// (0x0008af49) video_down_crop_pane_ParamLimits

0x565c,	// (0x0008af49) video_down_crop_pane

0x574e,	// (0x0008b03b) video_down_pane_ParamLimits

0x574e,	// (0x0008b03b) video_down_pane

0xe63e,	// (0x00093f2b) video_down_subqcif_pane_ParamLimits

0xe63e,	// (0x00093f2b) video_down_subqcif_pane

0xe656,	// (0x00093f43) video_down_subqcif_pane_cp_ParamLimits

0xe656,	// (0x00093f43) video_down_subqcif_pane_cp

0xe67c,	// (0x00093f69) im_reading_pane_ParamLimits

0xe67c,	// (0x00093f69) im_reading_pane

0x5870,	// (0x0008b15d) im_writing_pane_ParamLimits

0x5870,	// (0x0008b15d) im_writing_pane

0x588e,	// (0x0008b17b) im_reading_pane_t1

0xe696,	// (0x00093f83) list_im_pane

0xe6a7,	// (0x00093f94) scroll_pane_cp07

0x58ee,	// (0x0008b1db) im_writing_pane_t1_ParamLimits

0x58ee,	// (0x0008b1db) im_writing_pane_t1

0xe6c0,	// (0x00093fad) im_writing_pane_t2_ParamLimits

0xe6c0,	// (0x00093fad) im_writing_pane_t2

0x0001,

0xf283,	// (0x00094b70) im_writing_pane_t_ParamLimits

0xf283,	// (0x00094b70) im_writing_pane_t

0xdfac,	// (0x00093899) input_focus_pane_cp04

0xdfac,	// (0x00093899) input_focus_pane_cp05

0x5900,	// (0x0008b1ed) list_im_single_pane_ParamLimits

0x5900,	// (0x0008b1ed) list_im_single_pane

0x592c,	// (0x0008b219) list_single_im_pane_t1

0x754f,	// (0x0008ce3c) blid_accuracy_pane

0x7557,	// (0x0008ce44) blid_compass_pane

0x7561,	// (0x0008ce4e) main_location_t1

0x756f,	// (0x0008ce5c) main_location_t2

0x757d,	// (0x0008ce6a) main_location_t3

0x0002,

0xf5ea,	// (0x00094ed7) main_location_t

0xdfac,	// (0x00093899) aid_levels_location

0xe373,	// (0x00093c60) blid_accuracy_pane_g1

0xe373,	// (0x00093c60) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00094bd2) blid_accuracy_pane_g

0xe708,	// (0x00093ff5) wml_content_pane

0xe746,	// (0x00094033) wml_button_pane_ParamLimits

0xe746,	// (0x00094033) wml_button_pane

0x593b,	// (0x0008b228) wml_list_single_large_pane_ParamLimits

0x593b,	// (0x0008b228) wml_list_single_large_pane

0x596d,	// (0x0008b25a) wml_list_single_medium_pane_ParamLimits

0x596d,	// (0x0008b25a) wml_list_single_medium_pane

0x59a6,	// (0x0008b293) wml_list_single_small_pane_ParamLimits

0x59a6,	// (0x0008b293) wml_list_single_small_pane

0xe75a,	// (0x00094047) wml_selection_box_pane_ParamLimits

0xe75a,	// (0x00094047) wml_selection_box_pane

0xe76d,	// (0x0009405a) wml_list_single_pane_t1

0xe77c,	// (0x00094069) wml_list_single_medium_pane_t1

0xe78b,	// (0x00094078) wml_list_single_large_pane_t1

0xe79a,	// (0x00094087) input_focus_pane_cp02_ParamLimits

0xe79a,	// (0x00094087) input_focus_pane_cp02

0xe7ad,	// (0x0009409a) wml_selection_box_pane_g1

0xe7b6,	// (0x000940a3) wml_selection_box_pane_t1_ParamLimits

0xe7b6,	// (0x000940a3) wml_selection_box_pane_t1

0xe207,	// (0x00093af4) bg_wml_button_pane_ParamLimits

0xe207,	// (0x00093af4) bg_wml_button_pane

0xe7ce,	// (0x000940bb) wml_button_pane_g1

0xe7d6,	// (0x000940c3) wml_button_pane_t1

0xe7ce,	// (0x000940bb) wml_button_bg_pane_g1

0xe7e6,	// (0x000940d3) wml_button_bg_pane_g2

0xe7ee,	// (0x000940db) wml_button_bg_pane_g3

0xe7f6,	// (0x000940e3) wml_button_bg_pane_g4

0xe7fe,	// (0x000940eb) wml_button_bg_pane_g5

0xe806,	// (0x000940f3) wml_button_bg_pane_g6

0xe80e,	// (0x000940fb) wml_button_bg_pane_g7

0xe816,	// (0x00094103) wml_button_bg_pane_g8

0xe81e,	// (0x0009410b) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00094b75) wml_button_bg_pane_g

0x59ee,	// (0x0008b2db) bg_list_pane_cp02

0xe826,	// (0x00094113) mce_header_pane_ParamLimits

0xe826,	// (0x00094113) mce_header_pane

0xe83c,	// (0x00094129) mce_icon_pane

0xe83c,	// (0x00094129) mce_image_pane

0xe845,	// (0x00094132) mce_text_pane_ParamLimits

0xe845,	// (0x00094132) mce_text_pane

0x59f8,	// (0x0008b2e5) scroll_pane_cp03

0xe73e,	// (0x0009402b) scroll_pane_cp04

0xe858,	// (0x00094145) scroll_pane_cp05_ParamLimits

0xe858,	// (0x00094145) scroll_pane_cp05

0x5a02,	// (0x0008b2ef) mce_header_field_pane_ParamLimits

0x5a02,	// (0x0008b2ef) mce_header_field_pane

0x5a22,	// (0x0008b30f) mce_header_field_pane_2_ParamLimits

0x5a22,	// (0x0008b30f) mce_header_field_pane_2

0x5a38,	// (0x0008b325) mce_header_field_pane_3

0x5a40,	// (0x0008b32d) list_single_mce_message_pane_ParamLimits

0x5a40,	// (0x0008b32d) list_single_mce_message_pane

0x5a70,	// (0x0008b35d) list_single_mce_smart_pane_ParamLimits

0x5a70,	// (0x0008b35d) list_single_mce_smart_pane

0xe864,	// (0x00094151) input_focus_pane_cp03

0xe86d,	// (0x0009415a) list_header_data_pane

0x5aab,	// (0x0008b398) mce_header_field_pane_t1

0x5abb,	// (0x0008b3a8) list_single_mce_header_pane_ParamLimits

0x5abb,	// (0x0008b3a8) list_single_mce_header_pane

0xe875,	// (0x00094162) list_single_mce_header_pane_t1

0xe884,	// (0x00094171) list_single_mce_message_pane_g1

0xe88c,	// (0x00094179) list_single_mce_message_pane_t1

0x5b0d,	// (0x0008b3fa) bg_cale_heading_pane_cp01_ParamLimits

0x5b0d,	// (0x0008b3fa) bg_cale_heading_pane_cp01

0xe89a,	// (0x00094187) bg_cale_pane_cp02_ParamLimits

0xe89a,	// (0x00094187) bg_cale_pane_cp02

0x5b40,	// (0x0008b42d) cale_month_corner_pane

0x5b56,	// (0x0008b443) cale_month_day_heading_pane_ParamLimits

0x5b56,	// (0x0008b443) cale_month_day_heading_pane

0x5b99,	// (0x0008b486) cale_month_pane_g1_ParamLimits

0x5b99,	// (0x0008b486) cale_month_pane_g1

0x5bc5,	// (0x0008b4b2) cale_month_pane_g2_ParamLimits

0x5bc5,	// (0x0008b4b2) cale_month_pane_g2

0x5be8,	// (0x0008b4d5) cale_month_pane_g3_ParamLimits

0x5be8,	// (0x0008b4d5) cale_month_pane_g3

0x5c24,	// (0x0008b511) cale_month_pane_g4_ParamLimits

0x5c24,	// (0x0008b511) cale_month_pane_g4

0x5c60,	// (0x0008b54d) cale_month_pane_g5_ParamLimits

0x5c60,	// (0x0008b54d) cale_month_pane_g5

0x5c9c,	// (0x0008b589) cale_month_pane_g6_ParamLimits

0x5c9c,	// (0x0008b589) cale_month_pane_g6

0x5cd8,	// (0x0008b5c5) cale_month_pane_g7_ParamLimits

0x5cd8,	// (0x0008b5c5) cale_month_pane_g7

0x5d24,	// (0x0008b611) cale_month_pane_g8_ParamLimits

0x5d24,	// (0x0008b611) cale_month_pane_g8

0x5d70,	// (0x0008b65d) cale_month_pane_g9_ParamLimits

0x5d70,	// (0x0008b65d) cale_month_pane_g9

0x5db6,	// (0x0008b6a3) cale_month_pane_g10_ParamLimits

0x5db6,	// (0x0008b6a3) cale_month_pane_g10

0x5dfc,	// (0x0008b6e9) cale_month_pane_g11_ParamLimits

0x5dfc,	// (0x0008b6e9) cale_month_pane_g11

0x5e3a,	// (0x0008b727) cale_month_pane_g12_ParamLimits

0x5e3a,	// (0x0008b727) cale_month_pane_g12

0x5e78,	// (0x0008b765) cale_month_pane_g13_ParamLimits

0x5e78,	// (0x0008b765) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00094b88) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00094b88) cale_month_pane_g

0x5eb6,	// (0x0008b7a3) cale_month_week_pane

0x5ec9,	// (0x0008b7b6) grid_cale_month_pane_ParamLimits

0x5ec9,	// (0x0008b7b6) grid_cale_month_pane

0x5f07,	// (0x0008b7f4) cale_month_day_heading_pane_t1

0x5f65,	// (0x0008b852) cale_month_day_heading_pane_t2

0x5fca,	// (0x0008b8b7) cale_month_day_heading_pane_t3

0x602f,	// (0x0008b91c) cale_month_day_heading_pane_t4

0x6094,	// (0x0008b981) cale_month_day_heading_pane_t5

0x60f9,	// (0x0008b9e6) cale_month_day_heading_pane_t6

0x6166,	// (0x0008ba53) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00094ba3) cale_month_day_heading_pane_t

0xe470,	// (0x00093d5d) bg_cale_side_pane_cp01

0x61db,	// (0x0008bac8) cale_month_week_pane_t1

0x61f2,	// (0x0008badf) cale_month_week_pane_t2

0x6209,	// (0x0008baf6) cale_month_week_pane_t3

0x6220,	// (0x0008bb0d) cale_month_week_pane_t4

0x6237,	// (0x0008bb24) cale_month_week_pane_t5

0x6256,	// (0x0008bb43) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00094bb2) cale_month_week_pane_t

0x6275,	// (0x0008bb62) cell_cale_month_pane_ParamLimits

0x6275,	// (0x0008bb62) cell_cale_month_pane

0x6343,	// (0x0008bc30) cell_cale_month_pane_g1

0x634f,	// (0x0008bc3c) cell_cale_month_pane_t1_ParamLimits

0x634f,	// (0x0008bc3c) cell_cale_month_pane_t1

0xe47e,	// (0x00093d6b) grid_highlight_pane_cp08

0xe373,	// (0x00093c60) main_smil_g1

0x636b,	// (0x0008bc58) smil_status_pane

0xe8f9,	// (0x000941e6) smil_text_pane

0x10d5,	// (0x000869c2) bg_popup_call3_rect_pane_g8

0x10dd,	// (0x000869ca) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00094e6b) bg_popup_call3_rect_pane_g

0x1372,	// (0x00086c5f) smil_status_volume_pane_g1

0xe903,	// (0x000941f0) smil_status_pane_t1

0x7982,	// (0x0008d26f) volume_smil_pane

0xe91a,	// (0x00094207) list_smil_text_pane

0x637e,	// (0x0008bc6b) scroll_pane_cp011

0x6389,	// (0x0008bc76) smil_text_list_pane_t1_ParamLimits

0x6389,	// (0x0008bc76) smil_text_list_pane_t1

0x6434,	// (0x0008bd21) aid_volume_smil_ParamLimits

0x6434,	// (0x0008bd21) aid_volume_smil

0xe373,	// (0x00093c60) smil_volume_pane_g1

0xe373,	// (0x00093c60) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00094bd2) smil_volume_pane_g

0xe31e,	// (0x00093c0b) listscroll_cale_day_pane

0xe924,	// (0x00094211) bg_cale_pane

0xe93c,	// (0x00094229) list_cale_pane

0xe94d,	// (0x0009423a) scroll_pane_cp09

0xe95e,	// (0x0009424b) cale_bg_pane_g1

0xe966,	// (0x00094253) cale_bg_pane_g2

0xe96e,	// (0x0009425b) cale_bg_pane_g3

0xe976,	// (0x00094263) cale_bg_pane_g4

0xe97e,	// (0x0009426b) cale_bg_pane_g5

0xe986,	// (0x00094273) cale_bg_pane_g6

0xe98e,	// (0x0009427b) cale_bg_pane_g7

0xe996,	// (0x00094283) cale_bg_pane_g8

0xe99e,	// (0x0009428b) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00094bd7) cale_bg_pane_g

0x6456,	// (0x0008bd43) list_cale_time_pane_ParamLimits

0x6456,	// (0x0008bd43) list_cale_time_pane

0x6477,	// (0x0008bd64) list_cale_time_pane_g1_ParamLimits

0x6477,	// (0x0008bd64) list_cale_time_pane_g1

0xe9a6,	// (0x00094293) list_cale_time_pane_g2_ParamLimits

0xe9a6,	// (0x00094293) list_cale_time_pane_g2

0x6483,	// (0x0008bd70) list_cale_time_pane_g3_ParamLimits

0x6483,	// (0x0008bd70) list_cale_time_pane_g3

0x649f,	// (0x0008bd8c) list_cale_time_pane_g4_ParamLimits

0x649f,	// (0x0008bd8c) list_cale_time_pane_g4

0x64ad,	// (0x0008bd9a) list_cale_time_pane_g5_ParamLimits

0x64ad,	// (0x0008bd9a) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00094bea) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00094bea) list_cale_time_pane_g

0x64bb,	// (0x0008bda8) list_cale_time_pane_t1_ParamLimits

0x64bb,	// (0x0008bda8) list_cale_time_pane_t1

0x64e3,	// (0x0008bdd0) list_cale_time_pane_t2_ParamLimits

0x64e3,	// (0x0008bdd0) list_cale_time_pane_t2

0x683d,	// (0x0008c12a) aid_blid_cardinal_pane

0x687f,	// (0x0008c16c) compass_pane_t4

0x650b,	// (0x0008bdf8) list_cale_time_pane_t4_ParamLimits

0x650b,	// (0x0008bdf8) list_cale_time_pane_t4

0x688d,	// (0x0008c17a) compass_pane_t5

0x689d,	// (0x0008c18a) compass_pane_t6

0x68ab,	// (0x0008c198) compass_pane_t7

0xee57,	// (0x00094744) navi_pane_cc_t1

0xefac,	// (0x00094899) aid_phob_thumbnail_center_pane

0x7045,	// (0x0008c932) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00094bf7) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00094bf7) list_cale_time_pane_t

0xca77,	// (0x00092364) bg_popup_window_pane_cp02_ParamLimits

0xca77,	// (0x00092364) bg_popup_window_pane_cp02

0xe9c0,	// (0x000942ad) heading_pane_cp01_ParamLimits

0xe9c0,	// (0x000942ad) heading_pane_cp01

0xe9cc,	// (0x000942b9) loc_req_pane_ParamLimits

0xe9cc,	// (0x000942b9) loc_req_pane

0xe9dc,	// (0x000942c9) loc_type_pane_ParamLimits

0xe9dc,	// (0x000942c9) loc_type_pane

0xe9ee,	// (0x000942db) loc_type_pane_t1_ParamLimits

0xe9ee,	// (0x000942db) loc_type_pane_t1

0xea00,	// (0x000942ed) loc_type_pane_t2_ParamLimits

0xea00,	// (0x000942ed) loc_type_pane_t2

0xea12,	// (0x000942ff) loc_type_pane_t3_ParamLimits

0xea12,	// (0x000942ff) loc_type_pane_t3

0x0002,

0xf311,	// (0x00094bfe) loc_type_pane_t_ParamLimits

0xf311,	// (0x00094bfe) loc_type_pane_t

0xea24,	// (0x00094311) list_loc_req_pane

0xea2e,	// (0x0009431b) scroll_pane_cp012

0x6533,	// (0x0008be20) list_single_loc_request_popup_menu_pane_ParamLimits

0x6533,	// (0x0008be20) list_single_loc_request_popup_menu_pane

0xea39,	// (0x00094326) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea39,	// (0x00094326) list_single_loc_request_popup_menu_pane_g1

0xea45,	// (0x00094332) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea45,	// (0x00094332) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00094c05) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00094c05) list_single_loc_request_popup_menu_pane_g

0xea51,	// (0x0009433e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea51,	// (0x0009433e) list_single_loc_request_popup_menu_pane_t1

0x6545,	// (0x0008be32) bg_popup_window_pane_cp03_ParamLimits

0x6545,	// (0x0008be32) bg_popup_window_pane_cp03

0x6553,	// (0x0008be40) heading_loc_req_pane_ParamLimits

0x6553,	// (0x0008be40) heading_loc_req_pane

0x655f,	// (0x0008be4c) popup_dyc_status_message_window_g1_ParamLimits

0x655f,	// (0x0008be4c) popup_dyc_status_message_window_g1

0x656b,	// (0x0008be58) popup_dyc_status_message_window_t1_ParamLimits

0x656b,	// (0x0008be58) popup_dyc_status_message_window_t1

0x657d,	// (0x0008be6a) popup_dyc_status_message_window_t2_ParamLimits

0x657d,	// (0x0008be6a) popup_dyc_status_message_window_t2

0x658f,	// (0x0008be7c) popup_dyc_status_message_window_t3_ParamLimits

0x658f,	// (0x0008be7c) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00094c0a) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00094c0a) popup_dyc_status_message_window_t

0xdfac,	// (0x00093899) bg_heading_pane_cp01

0xea67,	// (0x00094354) heading_loc_req_pane_g1

0xea6f,	// (0x0009435c) heading_loc_req_pane_g2

0xea77,	// (0x00094364) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00094c11) heading_loc_req_pane_g

0xea7f,	// (0x0009436c) heading_loc_req_pane_t1

0xeb11,	// (0x000943fe) bg_popup_sub_pane_cp01_ParamLimits

0xeb11,	// (0x000943fe) bg_popup_sub_pane_cp01

0xeb1f,	// (0x0009440c) popup_cale_events_window_g1_ParamLimits

0xeb1f,	// (0x0009440c) popup_cale_events_window_g1

0xeb3f,	// (0x0009442c) popup_cale_events_window_g2_ParamLimits

0xeb3f,	// (0x0009442c) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00094c45) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00094c45) popup_cale_events_window_g

0xeb5f,	// (0x0009444c) popup_cale_events_window_t1_ParamLimits

0xeb5f,	// (0x0009444c) popup_cale_events_window_t1

0xeb71,	// (0x0009445e) popup_cale_events_window_t2_ParamLimits

0xeb71,	// (0x0009445e) popup_cale_events_window_t2

0xebaf,	// (0x0009449c) popup_cale_events_window_t3_ParamLimits

0xebaf,	// (0x0009449c) popup_cale_events_window_t3

0xebe9,	// (0x000944d6) popup_cale_events_window_t4_ParamLimits

0xebe9,	// (0x000944d6) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00094c4a) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00094c4a) popup_cale_events_window_t

0x6613,	// (0x0008bf00) call_type_pane

0xefbc,	// (0x000948a9) popup_call_status_window_g1

0x661f,	// (0x0008bf0c) popup_call_status_window_g2

0x662b,	// (0x0008bf18) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00094c53) popup_call_status_window_g

0xec1f,	// (0x0009450c) call_type_pane_g1

0xec28,	// (0x00094515) call_type_pane_g2

0x0001,

0xf36d,	// (0x00094c5a) call_type_pane_g

0xdfac,	// (0x00093899) bg_popup_sub_pane_cp02

0xec31,	// (0x0009451e) listscroll_popup_wml_pane

0xec39,	// (0x00094526) list_wml_pane

0xec43,	// (0x00094530) scroll_pane_cp013

0xec4e,	// (0x0009453b) list_single_graphic_popup_wml_pane_ParamLimits

0xec4e,	// (0x0009453b) list_single_graphic_popup_wml_pane

0xe373,	// (0x00093c60) list_single_graphic_popup_wml_pane_g1

0xec62,	// (0x0009454f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00094c5f) list_single_graphic_popup_wml_pane_g

0xec6a,	// (0x00094557) list_single_graphic_popup_wml_pane_t1

0xec80,	// (0x0009456d) aid_call_pane

0xe1ff,	// (0x00093aec) popup_clock_analogue_window_g1

0xe1ff,	// (0x00093aec) popup_clock_analogue_window_g2

0x6637,	// (0x0008bf24) popup_clock_analogue_window_g3

0x6637,	// (0x0008bf24) popup_clock_analogue_window_g4

0xe373,	// (0x00093c60) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00094c64) popup_clock_analogue_window_g

0x663f,	// (0x0008bf2c) popup_clock_analogue_window_t1

0x664d,	// (0x0008bf3a) clock_digital_number_pane_ParamLimits

0x664d,	// (0x0008bf3a) clock_digital_number_pane

0x6659,	// (0x0008bf46) clock_digital_number_pane_cp02_ParamLimits

0x6659,	// (0x0008bf46) clock_digital_number_pane_cp02

0x6665,	// (0x0008bf52) clock_digital_number_pane_cp03_ParamLimits

0x6665,	// (0x0008bf52) clock_digital_number_pane_cp03

0x6671,	// (0x0008bf5e) clock_digital_number_pane_cp04_ParamLimits

0x6671,	// (0x0008bf5e) clock_digital_number_pane_cp04

0x667d,	// (0x0008bf6a) clock_digital_separator_pane_ParamLimits

0x667d,	// (0x0008bf6a) clock_digital_separator_pane

0x6689,	// (0x0008bf76) popup_clock_digital_window_t1

0xe373,	// (0x00093c60) clock_digital_number_pane_g1

0xe373,	// (0x00093c60) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00094bd2) clock_digital_number_pane_g

0xe373,	// (0x00093c60) clock_digital_separator_pane_g1

0xe373,	// (0x00093c60) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00094bd2) clock_digital_separator_pane_g

0xdfac,	// (0x00093899) bg_popup_window_pane_cp04

0xec88,	// (0x00094575) heading_pane_cp03

0xec90,	// (0x0009457d) listscroll_popup_gms_pane

0xec98,	// (0x00094585) grid_large_graphic_popup_pane

0xeca2,	// (0x0009458f) listscroll_popup_gms_pane_g1

0xecaa,	// (0x00094597) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00094c6f) listscroll_popup_gms_pane_g

0xe73e,	// (0x0009402b) scroll_pane_cp014

0xecb2,	// (0x0009459f) cell_large_graphic_popup_pane_ParamLimits

0xecb2,	// (0x0009459f) cell_large_graphic_popup_pane

0xecca,	// (0x000945b7) cell_large_graphic_popup_pane_g1_ParamLimits

0xecca,	// (0x000945b7) cell_large_graphic_popup_pane_g1

0xecd6,	// (0x000945c3) cell_large_graphic_popup_pane_g2_ParamLimits

0xecd6,	// (0x000945c3) cell_large_graphic_popup_pane_g2

0xece2,	// (0x000945cf) cell_large_graphic_popup_pane_g3_ParamLimits

0xece2,	// (0x000945cf) cell_large_graphic_popup_pane_g3

0xecef,	// (0x000945dc) cell_large_graphic_popup_pane_g4_ParamLimits

0xecef,	// (0x000945dc) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00094c74) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00094c74) cell_large_graphic_popup_pane_g

0xecff,	// (0x000945ec) grid_highlight_pane_cp010

0xe373,	// (0x00093c60) bg_popup_call_pane_g1

0xed09,	// (0x000945f6) list_single_graphic_popup_conf_pane_ParamLimits

0xed09,	// (0x000945f6) list_single_graphic_popup_conf_pane

0xed1b,	// (0x00094608) list_highlight_pane_cp01

0xed24,	// (0x00094611) list_single_graphic_popup_conf_pane_g1

0xed2c,	// (0x00094619) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00094c7d) list_single_graphic_popup_conf_pane_g

0xed34,	// (0x00094621) list_single_graphic_popup_conf_pane_t1

0xed42,	// (0x0009462f) linegrid_cams_pane_g1

0x66a6,	// (0x0008bf93) linegrid_cams_pane_g2

0xe42b,	// (0x00093d18) linegrid_cams_pane_g3

0xed4b,	// (0x00094638) linegrid_cams_pane_g4

0x66af,	// (0x0008bf9c) linegrid_cams_pane_g5

0x66b8,	// (0x0008bfa5) linegrid_cams_pane_g6

0xe4b1,	// (0x00093d9e) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00094c82) linegrid_cams_pane_g

0xed54,	// (0x00094641) popup_clock_analogue_window

0xed54,	// (0x00094641) popup_clock_digital_window

0xdfac,	// (0x00093899) popup_phob_thumbnail_window

0xe373,	// (0x00093c60) call_video_uplink_pane_g1

0xed5d,	// (0x0009464a) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00094c91) call_video_uplink_pane_g

0xe47e,	// (0x00093d6b) video_uplink_pane

0xed65,	// (0x00094652) mce_image_pane_g1

0x66c1,	// (0x0008bfae) mce_image_pane_g2

0x66c9,	// (0x0008bfb6) mce_image_pane_g3

0x66d1,	// (0x0008bfbe) mce_image_pane_g4

0x66d9,	// (0x0008bfc6) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00094c96) mce_image_pane_g

0xed6f,	// (0x0009465c) control_top_pane_stacon_cp01_ParamLimits

0xed6f,	// (0x0009465c) control_top_pane_stacon_cp01

0xed83,	// (0x00094670) uni_indicator_pane_stacon_cp01_ParamLimits

0xed83,	// (0x00094670) uni_indicator_pane_stacon_cp01

0xed94,	// (0x00094681) bg_popup_sub_pane_cp03

0x66e1,	// (0x0008bfce) chi_dic_find_pane

0x66e9,	// (0x0008bfd6) listscroll_chi_dic_pane

0x66f2,	// (0x0008bfdf) main_pane_chidic_g1

0x6705,	// (0x0008bff2) chi_dic_find_pane_t1

0xed9e,	// (0x0009468b) find_chidic_pane

0xeda7,	// (0x00094694) chi_dic_list_pane_ParamLimits

0xeda7,	// (0x00094694) chi_dic_list_pane

0xedb8,	// (0x000946a5) scroll_pane_cp020

0x6713,	// (0x0008c000) find_chidic_pane_t1

0xdfac,	// (0x00093899) input_focus_pane_cp06

0x6722,	// (0x0008c00f) list_chi_dic_pane_ParamLimits

0x6722,	// (0x0008c00f) list_chi_dic_pane

0xedc0,	// (0x000946ad) list_chi_dic_pane_t1_ParamLimits

0xedc0,	// (0x000946ad) list_chi_dic_pane_t1

0xdfac,	// (0x00093899) list_highlight_pane_cp020

0xedd3,	// (0x000946c0) bg_cale_heading_pane_g1

0x6743,	// (0x0008c030) bg_cale_heading_pane_g2

0x674b,	// (0x0008c038) bg_cale_heading_pane_g3

0x6753,	// (0x0008c040) bg_cale_heading_pane_g4

0x675d,	// (0x0008c04a) bg_cale_heading_pane_g5

0x6767,	// (0x0008c054) bg_cale_heading_pane_g6

0x676f,	// (0x0008c05c) bg_cale_heading_pane_g7

0x6777,	// (0x0008c064) bg_cale_heading_pane_g8

0x6781,	// (0x0008c06e) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00094ca1) bg_cale_heading_pane_g

0xedd3,	// (0x000946c0) bg_cale_side_pane_g1

0x678b,	// (0x0008c078) bg_cale_side_pane_g2

0x6795,	// (0x0008c082) bg_cale_side_pane_g3

0x679f,	// (0x0008c08c) bg_cale_side_pane_g4

0x67a9,	// (0x0008c096) bg_cale_side_pane_g5

0x67b3,	// (0x0008c0a0) bg_cale_side_pane_g6

0x67bd,	// (0x0008c0aa) bg_cale_side_pane_g7

0x67c7,	// (0x0008c0b4) bg_cale_side_pane_g8

0x67cf,	// (0x0008c0bc) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00094cb4) bg_cale_side_pane_g

0x67d7,	// (0x0008c0c4) popup_call_status_window_ParamLimits

0x67d7,	// (0x0008c0c4) popup_call_status_window

0xeddb,	// (0x000946c8) stacon_top_pane

0xede3,	// (0x000946d0) status_pane_ParamLimits

0xede3,	// (0x000946d0) status_pane

0xedf8,	// (0x000946e5) status_small_pane

0xee00,	// (0x000946ed) control_pane

0xdfac,	// (0x00093899) stacon_bottom_pane

0xee08,	// (0x000946f5) list_single_mce_smart_pane_t1_ParamLimits

0xee08,	// (0x000946f5) list_single_mce_smart_pane_t1

0xee1b,	// (0x00094708) list_single_mce_smart_pane_t2_ParamLimits

0xee1b,	// (0x00094708) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00094cc7) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00094cc7) list_single_mce_smart_pane_t

0x67e3,	// (0x0008c0d0) compass_pane

0x67ef,	// (0x0008c0dc) main_location2_pane_t1

0x6803,	// (0x0008c0f0) main_location2_pane_t2

0x6817,	// (0x0008c104) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00094ccc) main_location2_pane_t

0xee3a,	// (0x00094727) compass_pane_g1_ParamLimits

0xee3a,	// (0x00094727) compass_pane_g1

0x6861,	// (0x0008c14e) compass_pane_t1

0x6870,	// (0x0008c15d) compass_pane_t2

0x0005,

0xf3e8,	// (0x00094cd5) compass_pane_t

0x68bb,	// (0x0008c1a8) text_secondary_cp61

0xee4e,	// (0x0009473b) navi_pane_cams_g5

0xee71,	// (0x0009475e) navi_pane_im_t1

0xee7f,	// (0x0009476c) navi_pane_mp_g1_ParamLimits

0xee7f,	// (0x0009476c) navi_pane_mp_g1

0xee93,	// (0x00094780) navi_pane_mp_g2_ParamLimits

0xee93,	// (0x00094780) navi_pane_mp_g2

0xee9f,	// (0x0009478c) navi_pane_mp_g3_ParamLimits

0xee9f,	// (0x0009478c) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00094ce9) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00094ce9) navi_pane_mp_g

0xeeab,	// (0x00094798) navi_pane_mp_t1

0xeeb9,	// (0x000947a6) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00094cf0) navi_pane_mp_t

0xeef5,	// (0x000947e2) navi_pane_vt_g1

0xeeab,	// (0x00094798) navi_pane_vt_t1

0xeefd,	// (0x000947ea) navi_slider_pane

0xef05,	// (0x000947f2) zooming_pane

0xef0d,	// (0x000947fa) navi_slider_pane_g1

0x69e8,	// (0x0008c2d5) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00094cf7) navi_slider_pane_g

0xef31,	// (0x0009481e) aid_levels_zoom

0xef39,	// (0x00094826) zooming_pane_g1

0xef41,	// (0x0009482e) zooming_pane_g2

0xef41,	// (0x0009482e) zooming_pane_g3

0x0002,

0xf419,	// (0x00094d06) zooming_pane_g

0xef49,	// (0x00094836) level_10_zoom

0xef52,	// (0x0009483f) level_11_zoom

0xef5b,	// (0x00094848) level_1_zoom

0xef64,	// (0x00094851) level_2_zoom

0xef6d,	// (0x0009485a) level_3_zoom

0xef76,	// (0x00094863) level_4_zoom

0xef7f,	// (0x0009486c) level_5_zoom

0xef88,	// (0x00094875) level_6_zoom

0xef91,	// (0x0009487e) level_7_zoom

0xef9a,	// (0x00094887) level_8_zoom

0xefa3,	// (0x00094890) level_9_zoom

0xefb4,	// (0x000948a1) popup_phob_thumbnail_window_g1

0xefca,	// (0x000948b7) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00094d0d) popup_phob_thumbnail_window_g

0x123f,	// (0x00086b2c) level_1_location

0x1247,	// (0x00086b34) level_2_location

0x124f,	// (0x00086b3c) level_3_location

0x1257,	// (0x00086b44) level_4_location

0xef05,	// (0x000947f2) level_5_location

0x69fa,	// (0x0008c2e7) mce_icon_pane_g1

0x6a02,	// (0x0008c2ef) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00094d12) mce_icon_pane_g

0x6a0a,	// (0x0008c2f7) main_mup_pane_g1_ParamLimits

0x6a0a,	// (0x0008c2f7) main_mup_pane_g1

0x6a22,	// (0x0008c30f) main_mup_pane_g2_ParamLimits

0x6a22,	// (0x0008c30f) main_mup_pane_g2

0x6a3e,	// (0x0008c32b) main_mup_pane_g3_ParamLimits

0x6a3e,	// (0x0008c32b) main_mup_pane_g3

0x6a5a,	// (0x0008c347) main_mup_pane_g4_ParamLimits

0x6a5a,	// (0x0008c347) main_mup_pane_g4

0x6a76,	// (0x0008c363) main_mup_pane_g5_ParamLimits

0x6a76,	// (0x0008c363) main_mup_pane_g5

0x6a97,	// (0x0008c384) main_mup_pane_g6_ParamLimits

0x6a97,	// (0x0008c384) main_mup_pane_g6

0x6ab3,	// (0x0008c3a0) main_mup_pane_g7_ParamLimits

0x6ab3,	// (0x0008c3a0) main_mup_pane_g7

0x6acf,	// (0x0008c3bc) main_mup_pane_g8_ParamLimits

0x6acf,	// (0x0008c3bc) main_mup_pane_g8

0x6aeb,	// (0x0008c3d8) main_mup_pane_g9_ParamLimits

0x6aeb,	// (0x0008c3d8) main_mup_pane_g9

0x6b0a,	// (0x0008c3f7) main_mup_pane_g10_ParamLimits

0x6b0a,	// (0x0008c3f7) main_mup_pane_g10

0x6b29,	// (0x0008c416) main_mup_pane_g11_ParamLimits

0x6b29,	// (0x0008c416) main_mup_pane_g11

0x6b41,	// (0x0008c42e) main_mup_pane_g12_ParamLimits

0x6b41,	// (0x0008c42e) main_mup_pane_g12

0x6b4f,	// (0x0008c43c) main_mup_pane_g13_ParamLimits

0x6b4f,	// (0x0008c43c) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00094d17) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00094d17) main_mup_pane_g

0x6b65,	// (0x0008c452) main_mup_pane_t1_ParamLimits

0x6b65,	// (0x0008c452) main_mup_pane_t1

0x6b82,	// (0x0008c46f) main_mup_pane_t2_ParamLimits

0x6b82,	// (0x0008c46f) main_mup_pane_t2

0x6b9c,	// (0x0008c489) main_mup_pane_t3_ParamLimits

0x6b9c,	// (0x0008c489) main_mup_pane_t3

0x6bb6,	// (0x0008c4a3) main_mup_pane_t4_ParamLimits

0x6bb6,	// (0x0008c4a3) main_mup_pane_t4

0x6bc8,	// (0x0008c4b5) main_mup_pane_t5_ParamLimits

0x6bc8,	// (0x0008c4b5) main_mup_pane_t5

0x6bda,	// (0x0008c4c7) main_mup_pane_t6_ParamLimits

0x6bda,	// (0x0008c4c7) main_mup_pane_t6

0x0005,

0xf445,	// (0x00094d32) main_mup_pane_t_ParamLimits

0xf445,	// (0x00094d32) main_mup_pane_t

0x6bf0,	// (0x0008c4dd) mup_progress_pane_ParamLimits

0x6bf0,	// (0x0008c4dd) mup_progress_pane

0x6bfc,	// (0x0008c4e9) mup_visualizer_pane_ParamLimits

0x6bfc,	// (0x0008c4e9) mup_visualizer_pane

0x6c3a,	// (0x0008c527) mup_volume_pane_ParamLimits

0x6c3a,	// (0x0008c527) mup_volume_pane

0xefbc,	// (0x000948a9) mup_visualizer_pane_g1_ParamLimits

0xefbc,	// (0x000948a9) mup_visualizer_pane_g1

0xefbc,	// (0x000948a9) mup_visualizer_pane_g2_ParamLimits

0xefbc,	// (0x000948a9) mup_visualizer_pane_g2

0xee3a,	// (0x00094727) mup_visualizer_pane_g3_ParamLimits

0xee3a,	// (0x00094727) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00094d3f) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00094d3f) mup_visualizer_pane_g

0xe373,	// (0x00093c60) mup_volume_pane_g1

0xefda,	// (0x000948c7) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00094d46) mup_volume_pane_g

0xe373,	// (0x00093c60) mup_progress_pane_g1

0xefe3,	// (0x000948d0) mup_progress_pane_g2

0xefec,	// (0x000948d9) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00094d4b) mup_progress_pane_g

0xdfac,	// (0x00093899) bg_popup_window_pane_cp05

0xeff5,	// (0x000948e2) heading_pane_cp02_ParamLimits

0xeff5,	// (0x000948e2) heading_pane_cp02

0xf00f,	// (0x000948fc) list_popup_blid_pane

0xf017,	// (0x00094904) list_blid_sat_info_pane_ParamLimits

0xf017,	// (0x00094904) list_blid_sat_info_pane

0xf02a,	// (0x00094917) list_blid_sat_info_pane_g1

0xf032,	// (0x0009491f) list_blid_sat_info_pane_t1

0x6d45,	// (0x0008c632) mup_equalizer_pane_ParamLimits

0x6d45,	// (0x0008c632) mup_equalizer_pane

0x6d66,	// (0x0008c653) mup_equalizer_pane_cp1_ParamLimits

0x6d66,	// (0x0008c653) mup_equalizer_pane_cp1

0x6d87,	// (0x0008c674) mup_equalizer_pane_cp2_ParamLimits

0x6d87,	// (0x0008c674) mup_equalizer_pane_cp2

0x6da8,	// (0x0008c695) mup_equalizer_pane_cp3_ParamLimits

0x6da8,	// (0x0008c695) mup_equalizer_pane_cp3

0x6dc9,	// (0x0008c6b6) mup_equalizer_pane_cp4_ParamLimits

0x6dc9,	// (0x0008c6b6) mup_equalizer_pane_cp4

0x6dea,	// (0x0008c6d7) mup_equalizer_pane_cp5

0x6e00,	// (0x0008c6ed) mup_equalizer_pane_cp6

0x6e18,	// (0x0008c705) mup_equalizer_pane_cp7

0x115d,	// (0x00086a4a) bg_popup_call_poc_act_pane_g9

0x1165,	// (0x00086a52) bg_popup_call_poc_act_pane_g10

0x116d,	// (0x00086a5a) bg_popup_call_poc_act_pane_g11

0x000a,

0xe207,	// (0x00093af4) mup_scale_pane

0xe373,	// (0x00093c60) mup_scale_pane_g1

0xf040,	// (0x0009492d) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00094d67) mup_scale_pane_g

0xf064,	// (0x00094951) msg_data_pane

0xf06c,	// (0x00094959) scroll_pane_cp017

0x6e42,	// (0x0008c72f) bg_list_pane_cp04_ParamLimits

0x6e42,	// (0x0008c72f) bg_list_pane_cp04

0xf074,	// (0x00094961) msg_data_pane_g1

0x6e62,	// (0x0008c74f) msg_data_pane_g2

0x66c9,	// (0x0008bfb6) msg_data_pane_g3

0x6e6a,	// (0x0008c757) msg_data_pane_g4

0x6e72,	// (0x0008c75f) msg_data_pane_g5

0x6e7a,	// (0x0008c767) msg_data_pane_g6

0x6e82,	// (0x0008c76f) msg_data_pane_g7

0x0006,

0xf489,	// (0x00094d76) msg_data_pane_g

0x6e8a,	// (0x0008c777) msg_text_pane_ParamLimits

0x6e8a,	// (0x0008c777) msg_text_pane

0x6ed4,	// (0x0008c7c1) qrid_highlight_pane_cp011_ParamLimits

0x6ed4,	// (0x0008c7c1) qrid_highlight_pane_cp011

0xdfac,	// (0x00093899) msg_body_pane

0xdfac,	// (0x00093899) msg_header_pane

0xf085,	// (0x00094972) input_focus_pane_cp07

0x6efe,	// (0x0008c7eb) msg_header_pane_t1_ParamLimits

0x6efe,	// (0x0008c7eb) msg_header_pane_t1

0xf09a,	// (0x00094987) msg_header_pane_t2_ParamLimits

0xf09a,	// (0x00094987) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00094d8a) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00094d8a) msg_header_pane_t

0xf0ac,	// (0x00094999) msg_body_pane_g1

0x6f12,	// (0x0008c7ff) msg_body_pane_t1_ParamLimits

0x6f12,	// (0x0008c7ff) msg_body_pane_t1

0xf0b4,	// (0x000949a1) msg_body_pane_t2_ParamLimits

0xf0b4,	// (0x000949a1) msg_body_pane_t2

0xf0c6,	// (0x000949b3) msg_body_pane_t3_ParamLimits

0xf0c6,	// (0x000949b3) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00094d8f) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00094d8f) msg_body_pane_t

0x6f95,	// (0x0008c882) main_viewer_pane_g1_ParamLimits

0x6f95,	// (0x0008c882) main_viewer_pane_g1

0x6fa1,	// (0x0008c88e) main_viewer_pane_g2_ParamLimits

0x6fa1,	// (0x0008c88e) main_viewer_pane_g2

0x6fad,	// (0x0008c89a) main_viewer_pane_g3_ParamLimits

0x6fad,	// (0x0008c89a) main_viewer_pane_g3

0x6fbe,	// (0x0008c8ab) main_viewer_pane_g4_ParamLimits

0x6fbe,	// (0x0008c8ab) main_viewer_pane_g4

0x6fcf,	// (0x0008c8bc) main_viewer_pane_g5_ParamLimits

0x6fcf,	// (0x0008c8bc) main_viewer_pane_g5

0x6fcf,	// (0x0008c8bc) main_viewer_pane_g7_ParamLimits

0x6fcf,	// (0x0008c8bc) main_viewer_pane_g7

0x6fe1,	// (0x0008c8ce) main_viewer_pane_g8_ParamLimits

0x6fe1,	// (0x0008c8ce) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00094d9f) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00094d9f) main_viewer_pane_g

0x0020,	// (0x0008590d) viewer_content_pane_ParamLimits

0x0020,	// (0x0008590d) viewer_content_pane

0x7019,	// (0x0008c906) main_postcard_pane_g1_ParamLimits

0x7019,	// (0x0008c906) main_postcard_pane_g1

0x7027,	// (0x0008c914) main_postcard_pane_g2_ParamLimits

0x7027,	// (0x0008c914) main_postcard_pane_g2

0x7035,	// (0x0008c922) main_postcard_pane_g3_ParamLimits

0x7035,	// (0x0008c922) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00094db0) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00094db0) main_postcard_pane_g

0x7045,	// (0x0008c932) main_postcard_pane_g4

0x135f,	// (0x00086c4c) smil_status_volume_pane_g2

0x7071,	// (0x0008c95e) postcard_pane_ParamLimits

0x7071,	// (0x0008c95e) postcard_pane

0xefbc,	// (0x000948a9) postcard_pane_g1_ParamLimits

0xefbc,	// (0x000948a9) postcard_pane_g1

0x70a3,	// (0x0008c990) postcard_pane_g2_ParamLimits

0x70a3,	// (0x0008c990) postcard_pane_g2

0x70af,	// (0x0008c99c) postcard_pane_g3_ParamLimits

0x70af,	// (0x0008c99c) postcard_pane_g3

0x003c,	// (0x00085929) postcard_pane_g4_ParamLimits

0x003c,	// (0x00085929) postcard_pane_g4

0x70bb,	// (0x0008c9a8) postcard_pane_g5_ParamLimits

0x70bb,	// (0x0008c9a8) postcard_pane_g5

0x70c7,	// (0x0008c9b4) postcard_pane_g6_ParamLimits

0x70c7,	// (0x0008c9b4) postcard_pane_g6

0x002e,	// (0x0008591b) postcard_pane_g7_ParamLimits

0x002e,	// (0x0008591b) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00094dbd) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00094dbd) postcard_pane_g

0x70d3,	// (0x0008c9c0) main_mp2_pane_g1_ParamLimits

0x70d3,	// (0x0008c9c0) main_mp2_pane_g1

0x70df,	// (0x0008c9cc) main_mp2_pane_g2_ParamLimits

0x70df,	// (0x0008c9cc) main_mp2_pane_g2

0x70eb,	// (0x0008c9d8) main_mp2_pane_g3_ParamLimits

0x70eb,	// (0x0008c9d8) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00094dcc) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00094dcc) main_mp2_pane_g

0x70f7,	// (0x0008c9e4) main_mp2_pane_t1_ParamLimits

0x70f7,	// (0x0008c9e4) main_mp2_pane_t1

0x710e,	// (0x0008c9fb) main_mp2_pane_t2_ParamLimits

0x710e,	// (0x0008c9fb) main_mp2_pane_t2

0x7120,	// (0x0008ca0d) main_mp2_pane_t3_ParamLimits

0x7120,	// (0x0008ca0d) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00094dd3) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00094dd3) main_mp2_pane_t

0x004a,	// (0x00085937) pec_content_pane_ParamLimits

0x004a,	// (0x00085937) pec_content_pane

0xe73e,	// (0x0009402b) scroll_pane_cp015

0x005c,	// (0x00085949) pec_attribute_pane_ParamLimits

0x005c,	// (0x00085949) pec_attribute_pane

0x7132,	// (0x0008ca1f) pec_content_pane_g1_ParamLimits

0x7132,	// (0x0008ca1f) pec_content_pane_g1

0x006c,	// (0x00085959) pec_content_pane_t1_ParamLimits

0x006c,	// (0x00085959) pec_content_pane_t1

0x007e,	// (0x0008596b) pec_content_pane_t2_ParamLimits

0x007e,	// (0x0008596b) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00094dda) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00094dda) pec_content_pane_t

0x713e,	// (0x0008ca2b) list_single_graphic_pane_cp01_ParamLimits

0x713e,	// (0x0008ca2b) list_single_graphic_pane_cp01

0xe207,	// (0x00093af4) bg_popup_sub_pane_cp04

0x0090,	// (0x0008597d) popup_mup_playback_window_g1

0x009c,	// (0x00085989) popup_mup_playback_window_t1

0x00b1,	// (0x0008599e) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00094ddf) popup_mup_playback_window_t

0x00e8,	// (0x000859d5) main_image_pane_g1_ParamLimits

0x00e8,	// (0x000859d5) main_image_pane_g1

0x012b,	// (0x00085a18) scroll_pane_cp018_ParamLimits

0x012b,	// (0x00085a18) scroll_pane_cp018

0x0143,	// (0x00085a30) scroll_pane_cp016_ParamLimits

0x0143,	// (0x00085a30) scroll_pane_cp016

0x71e2,	// (0x0008cacf) smil2_image_pane_ParamLimits

0x71e2,	// (0x0008cacf) smil2_image_pane

0x7216,	// (0x0008cb03) smil2_root_pane_ParamLimits

0x7216,	// (0x0008cb03) smil2_root_pane

0x7242,	// (0x0008cb2f) smil2_text_pane_ParamLimits

0x7242,	// (0x0008cb2f) smil2_text_pane

0xdfac,	// (0x00093899) bg_list_pane_cp06

0x017f,	// (0x00085a6c) grid_radio_pane

0xdfac,	// (0x00093899) bg_popup_window_pane_cp06

0x0187,	// (0x00085a74) main_fmradio_pane_t1

0xec88,	// (0x00094575) heading_pane_cp04

0x0195,	// (0x00085a82) main_fmradio_pane_t2

0x1175,	// (0x00086a62) popup_cale_lunar_info_window_g1

0x01a3,	// (0x00085a90) main_fmradio_pane_t3

0x117d,	// (0x00086a6a) popup_cale_lunar_info_window_g2

0x01b1,	// (0x00085a9e) main_fmradio_pane_t4

0x0001,

0x01bf,	// (0x00085aac) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00094eba) popup_cale_lunar_info_window_g

0xf507,	// (0x00094df4) main_fmradio_pane_t

0x01cd,	// (0x00085aba) wait_bar_pane_cp03

0x01d5,	// (0x00085ac2) cell_fmradio_pane_ParamLimits

0x01d5,	// (0x00085ac2) cell_fmradio_pane

0x002e,	// (0x0008591b) cell_fmradio_pane_g1_ParamLimits

0x002e,	// (0x0008591b) cell_fmradio_pane_g1

0xdfac,	// (0x00093899) grid_highlight_pane_cp011

0x01e8,	// (0x00085ad5) poc_content_pane_ParamLimits

0x01e8,	// (0x00085ad5) poc_content_pane

0x01fa,	// (0x00085ae7) scroll_pane_cp019

0x7282,	// (0x0008cb6f) popup_call_poc_act_window_ParamLimits

0x7282,	// (0x0008cb6f) popup_call_poc_act_window

0x728f,	// (0x0008cb7c) popup_call_poc_inact_window_ParamLimits

0x728f,	// (0x0008cb7c) popup_call_poc_inact_window

0xf5a4,	// (0x00094e91) bg_popup_call_poc_act_pane_g

0x10e5,	// (0x000869d2) bg_popup_call_poc_inact_pane_g1

0x10ed,	// (0x000869da) bg_popup_call_poc_inact_pane_g2

0x0202,	// (0x00085aef) popup_call_poc_act_window_g2

0x10f5,	// (0x000869e2) bg_popup_call_poc_inact_pane_g3

0x10fd,	// (0x000869ea) bg_popup_call_poc_inact_pane_g4

0x1105,	// (0x000869f2) bg_popup_call_poc_inact_pane_g5

0x020a,	// (0x00085af7) popup_call_poc_act_window_t1_ParamLimits

0x020a,	// (0x00085af7) popup_call_poc_act_window_t1

0x0232,	// (0x00085b1f) popup_call_poc_act_window_t2_ParamLimits

0x0232,	// (0x00085b1f) popup_call_poc_act_window_t2

0x025a,	// (0x00085b47) popup_call_poc_act_window_t3_ParamLimits

0x025a,	// (0x00085b47) popup_call_poc_act_window_t3

0x0282,	// (0x00085b6f) popup_call_poc_act_window_t4_ParamLimits

0x0282,	// (0x00085b6f) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00094dff) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00094dff) popup_call_poc_act_window_t

0x110d,	// (0x000869fa) bg_popup_call_poc_inact_pane_g6

0x1115,	// (0x00086a02) bg_popup_call_poc_inact_pane_g7

0x111d,	// (0x00086a0a) bg_popup_call_poc_inact_pane_g8

0x0294,	// (0x00085b81) popup_call_poc_inact_window_g2

0x1125,	// (0x00086a12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00094e7e) bg_popup_call_poc_inact_pane_g

0x029c,	// (0x00085b89) popup_call_poc_inact_window_t1_ParamLimits

0x029c,	// (0x00085b89) popup_call_poc_inact_window_t1

0x02b1,	// (0x00085b9e) popup_call_poc_inact_window_t2_ParamLimits

0x02b1,	// (0x00085b9e) popup_call_poc_inact_window_t2

0x02c6,	// (0x00085bb3) popup_call_poc_inact_window_t3_ParamLimits

0x02c6,	// (0x00085bb3) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00094e08) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00094e08) popup_call_poc_inact_window_t

0x12e5,	// (0x00086bd2) context_pane_ParamLimits

0x78c3,	// (0x0008d1b0) signal_pane_ParamLimits

0xef05,	// (0x000947f2) main_call2_pane

0x783b,	// (0x0008d128) popup_phob_thumbnail2_window_ParamLimits

0x783b,	// (0x0008d128) popup_phob_thumbnail2_window

0x6f43,	// (0x0008c830) aid_hotspot_pointer_arrow_pane

0x6f4b,	// (0x0008c838) aid_hotspot_pointer_hand_pane

0x75b4,	// (0x0008cea1) phob_pre_status_pane_g5

0x5213,	// (0x0008ab00) cams_zoom_pane_ParamLimits

0x521f,	// (0x0008ab0c) image_vga_pane_ParamLimits

0x522e,	// (0x0008ab1b) main_camera_pane_g1_ParamLimits

0x523c,	// (0x0008ab29) main_camera_pane_g2_ParamLimits

0x524a,	// (0x0008ab37) main_camera_pane_g3_ParamLimits

0x5256,	// (0x0008ab43) main_camera_pane_g4_ParamLimits

0x5262,	// (0x0008ab4f) main_camera_pane_g5_ParamLimits

0x526e,	// (0x0008ab5b) main_camera_pane_g6_ParamLimits

0x527a,	// (0x0008ab67) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00094b07) main_camera_pane_g_ParamLimits

0x5286,	// (0x0008ab73) main_camera_pane_t1_ParamLimits

0x5298,	// (0x0008ab85) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00094b18) main_camera_pane_t_ParamLimits

0xe207,	// (0x00093af4) bg_popup_preview_window_pane_cp01_ParamLimits

0xe207,	// (0x00093af4) bg_popup_preview_window_pane_cp01

0x02db,	// (0x00085bc8) popup_phob_thumbnail2_window_g1_ParamLimits

0x02db,	// (0x00085bc8) popup_phob_thumbnail2_window_g1

0xdfac,	// (0x00093899) call2_cli_visual_pane

0x72ab,	// (0x0008cb98) popup_call2_audio_conf_window_ParamLimits

0x72ab,	// (0x0008cb98) popup_call2_audio_conf_window

0x72c0,	// (0x0008cbad) popup_call2_audio_first_window_ParamLimits

0x72c0,	// (0x0008cbad) popup_call2_audio_first_window

0x735e,	// (0x0008cc4b) popup_call2_audio_in_window_ParamLimits

0x735e,	// (0x0008cc4b) popup_call2_audio_in_window

0x73a0,	// (0x0008cc8d) popup_call2_audio_out_window_ParamLimits

0x73a0,	// (0x0008cc8d) popup_call2_audio_out_window

0x7402,	// (0x0008ccef) popup_call2_audio_second_window_ParamLimits

0x7402,	// (0x0008ccef) popup_call2_audio_second_window

0x7460,	// (0x0008cd4d) popup_call2_audio_wait_window_ParamLimits

0x7460,	// (0x0008cd4d) popup_call2_audio_wait_window

0xdfac,	// (0x00093899) bg_popup_call2_act_pane_cp03

0xe1e9,	// (0x00093ad6) list_conf_pane_cp

0x02e7,	// (0x00085bd4) popup_call2_audio_conf_window_t1

0x02f5,	// (0x00085be2) list_single_graphic_popup_conf2_pane_ParamLimits

0x02f5,	// (0x00085be2) list_single_graphic_popup_conf2_pane

0xed1b,	// (0x00094608) list_highlight_pane_cp04

0x0308,	// (0x00085bf5) list_single_graphic_popup_conf2_pane_g1

0xed2c,	// (0x00094619) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00094e0f) list_single_graphic_popup_conf2_pane_g

0x0312,	// (0x00085bff) list_single_graphic_popup_conf2_pane_t1

0x0320,	// (0x00085c0d) bg_popup_call2_act_pane_cp01_ParamLimits

0x0320,	// (0x00085c0d) bg_popup_call2_act_pane_cp01

0x03aa,	// (0x00085c97) call_type_pane_cp05_ParamLimits

0x03aa,	// (0x00085c97) call_type_pane_cp05

0x03fe,	// (0x00085ceb) popup_call2_audio_second_window_g1_ParamLimits

0x03fe,	// (0x00085ceb) popup_call2_audio_second_window_g1

0x0452,	// (0x00085d3f) popup_call2_audio_second_window_g2_ParamLimits

0x0452,	// (0x00085d3f) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00094e14) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00094e14) popup_call2_audio_second_window_g

0x04b7,	// (0x00085da4) popup_call2_audio_second_window_t1_ParamLimits

0x04b7,	// (0x00085da4) popup_call2_audio_second_window_t1

0x0572,	// (0x00085e5f) popup_call2_audio_second_window_t2_ParamLimits

0x0572,	// (0x00085e5f) popup_call2_audio_second_window_t2

0x05c5,	// (0x00085eb2) popup_call2_audio_second_window_t3_ParamLimits

0x05c5,	// (0x00085eb2) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00094e1b) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00094e1b) popup_call2_audio_second_window_t

0xdfac,	// (0x00093899) bg_popup_call2_in_pane_cp02

0xdfb6,	// (0x000938a3) call_type_pane_cp04

0xdfbe,	// (0x000938ab) popup_call2_audio_wait_window_g1

0xdfc6,	// (0x000938b3) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x000949f4) popup_call2_audio_wait_window_g

0xdfce,	// (0x000938bb) popup_call2_audio_wait_window_t3

0x06b8,	// (0x00085fa5) bg_popup_call2_act_pane_ParamLimits

0x06b8,	// (0x00085fa5) bg_popup_call2_act_pane

0x0778,	// (0x00086065) call_type_pane_cp03_ParamLimits

0x0778,	// (0x00086065) call_type_pane_cp03

0x07dc,	// (0x000860c9) popup_call2_audio_first_window_g1_ParamLimits

0x07dc,	// (0x000860c9) popup_call2_audio_first_window_g1

0x084c,	// (0x00086139) popup_call2_audio_first_window_g2_ParamLimits

0x084c,	// (0x00086139) popup_call2_audio_first_window_g2

0xefbc,	// (0x000948a9) popup_call2_audio_first_window_g3_ParamLimits

0xefbc,	// (0x000948a9) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00094e24) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00094e24) popup_call2_audio_first_window_g

0x092a,	// (0x00086217) popup_call2_audio_first_window_t1_ParamLimits

0x092a,	// (0x00086217) popup_call2_audio_first_window_t1

0x0a2d,	// (0x0008631a) popup_call2_audio_first_window_t4_ParamLimits

0x0a2d,	// (0x0008631a) popup_call2_audio_first_window_t4

0x0b10,	// (0x000863fd) popup_call2_audio_first_window_t5_ParamLimits

0x0b10,	// (0x000863fd) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00094e2f) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00094e2f) popup_call2_audio_first_window_t

0xe1ff,	// (0x00093aec) bg_popup_call2_act_pane_g1

0x1185,	// (0x00086a72) popup_cale_lunar_info_window_t1

0x1193,	// (0x00086a80) popup_cale_lunar_info_window_t2

0x11a1,	// (0x00086a8e) popup_cale_lunar_info_window_t3

0xdfac,	// (0x00093899) bg_popup_call2_bubble_pane

0x0c11,	// (0x000864fe) bg_popup_call2_in_pane_cp01_ParamLimits

0x0c11,	// (0x000864fe) bg_popup_call2_in_pane_cp01

0xcafa,	// (0x000923e7) call_type_pane_cp02

0x0c59,	// (0x00086546) popup_call2_audio_out_window_g1_ParamLimits

0x0c59,	// (0x00086546) popup_call2_audio_out_window_g1

0x0c85,	// (0x00086572) popup_call2_audio_out_window_g2_ParamLimits

0x0c85,	// (0x00086572) popup_call2_audio_out_window_g2

0x0cad,	// (0x0008659a) popup_call2_audio_out_window_g3_ParamLimits

0x0cad,	// (0x0008659a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00094e38) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00094e38) popup_call2_audio_out_window_g

0x0ce8,	// (0x000865d5) popup_call2_audio_out_window_t1_ParamLimits

0x0ce8,	// (0x000865d5) popup_call2_audio_out_window_t1

0x0d47,	// (0x00086634) popup_call2_audio_out_window_t2_ParamLimits

0x0d47,	// (0x00086634) popup_call2_audio_out_window_t2

0x0d9b,	// (0x00086688) popup_call2_audio_out_window_t3_ParamLimits

0x0d9b,	// (0x00086688) popup_call2_audio_out_window_t3

0x0db1,	// (0x0008669e) popup_call2_audio_out_window_t4_ParamLimits

0x0db1,	// (0x0008669e) popup_call2_audio_out_window_t4

0x0dc7,	// (0x000866b4) popup_call2_audio_out_window_t5_ParamLimits

0x0dc7,	// (0x000866b4) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00094e41) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00094e41) popup_call2_audio_out_window_t

0x0e2b,	// (0x00086718) bg_popup_call2_in_pane_ParamLimits

0x0e2b,	// (0x00086718) bg_popup_call2_in_pane

0x0e87,	// (0x00086774) popup_call2_audio_in_window_g1_ParamLimits

0x0e87,	// (0x00086774) popup_call2_audio_in_window_g1

0x0ebf,	// (0x000867ac) popup_call2_audio_in_window_g2_ParamLimits

0x0ebf,	// (0x000867ac) popup_call2_audio_in_window_g2

0x0ef7,	// (0x000867e4) popup_call2_audio_in_window_g3_ParamLimits

0x0ef7,	// (0x000867e4) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00094e4e) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00094e4e) popup_call2_audio_in_window_g

0x0f4f,	// (0x0008683c) popup_call2_audio_in_window_t1_ParamLimits

0x0f4f,	// (0x0008683c) popup_call2_audio_in_window_t1

0x0fcf,	// (0x000868bc) popup_call2_audio_in_window_t2_ParamLimits

0x0fcf,	// (0x000868bc) popup_call2_audio_in_window_t2

0x104f,	// (0x0008693c) popup_call2_audio_in_window_t3_ParamLimits

0x104f,	// (0x0008693c) popup_call2_audio_in_window_t3

0x1069,	// (0x00086956) popup_call2_audio_in_window_t4_ParamLimits

0x1069,	// (0x00086956) popup_call2_audio_in_window_t4

0x107b,	// (0x00086968) popup_call2_audio_in_window_t5_ParamLimits

0x107b,	// (0x00086968) popup_call2_audio_in_window_t5

0x1090,	// (0x0008697d) popup_call2_audio_in_window_t6_ParamLimits

0x1090,	// (0x0008697d) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00094e57) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00094e57) popup_call2_audio_in_window_t

0xe1ff,	// (0x00093aec) bg_popup_call2_in_pane_g1

0x11af,	// (0x00086a9c) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00094ebf) popup_cale_lunar_info_window_t

0xe207,	// (0x00093af4) bg_popup_call2_rect_pane_ParamLimits

0xe207,	// (0x00093af4) bg_popup_call2_rect_pane

0xdfac,	// (0x00093899) call2_cli_visual_graphic_pane

0xdfac,	// (0x00093899) call2_cli_visual_text_pane

0x7975,	// (0x0008d262) smil_status_volume_pane_g3

0x0002,

0xe373,	// (0x00093c60) call2_cli_visual_graphic_pane_g1

0xe373,	// (0x00093c60) call2_cli_visual_graphic_pane_g2

0xe373,	// (0x00093c60) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00094e64) call2_cli_visual_graphic_pane_g

0x10a5,	// (0x00086992) bg_popup_call2_rect_pane_g1

0xe411,	// (0x00093cfe) bg_popup_call2_rect_pane_g2

0x10ad,	// (0x0008699a) bg_popup_call2_rect_pane_g3

0x10b5,	// (0x000869a2) bg_popup_call2_rect_pane_g4

0x10bd,	// (0x000869aa) bg_popup_call2_rect_pane_g5

0x10c5,	// (0x000869b2) bg_popup_call2_rect_pane_g6

0x10cd,	// (0x000869ba) bg_popup_call2_rect_pane_g7

0x10d5,	// (0x000869c2) bg_popup_call2_rect_pane_g8

0x10dd,	// (0x000869ca) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00094e6b) bg_popup_call2_rect_pane_g

0x10e5,	// (0x000869d2) bg_popup_call2_bubble_pane_g1

0x10ed,	// (0x000869da) bg_popup_call2_bubble_pane_g2

0x10f5,	// (0x000869e2) bg_popup_call2_bubble_pane_g3

0x10fd,	// (0x000869ea) bg_popup_call2_bubble_pane_g4

0x1105,	// (0x000869f2) bg_popup_call2_bubble_pane_g5

0x110d,	// (0x000869fa) bg_popup_call2_bubble_pane_g6

0x1115,	// (0x00086a02) bg_popup_call2_bubble_pane_g7

0x111d,	// (0x00086a0a) bg_popup_call2_bubble_pane_g8

0x1125,	// (0x00086a12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00094e7e) bg_popup_call2_bubble_pane_g

0x4db4,	// (0x0008a6a1) aid_cale_week_size_cell_pane

0x52aa,	// (0x0008ab97) aid_cams_cif_uncrop_pane_ParamLimits

0x52aa,	// (0x0008ab97) aid_cams_cif_uncrop_pane

0x540d,	// (0x0008acfa) aid_cams_size_cell_ParamLimits

0x540d,	// (0x0008acfa) aid_cams_size_cell

0x5419,	// (0x0008ad06) grid_cams_pane_ParamLimits

0x5427,	// (0x0008ad14) linegrid_cams_pane_ParamLimits

0x554e,	// (0x0008ae3b) call_video_pane_t1

0x556f,	// (0x0008ae5c) call_video_pane_t2

0x0001,

0xf27e,	// (0x00094b6b) call_video_pane_t

0x5aef,	// (0x0008b3dc) aid_cale_month_size_cell_pane_ParamLimits

0x5aef,	// (0x0008b3dc) aid_cale_month_size_cell_pane

0xf61b,	// (0x00094f08) smil_status_volume_pane_g

0x7982,	// (0x0008d26f) volume_smil_pane_ParamLimits

0x4501,	// (0x00089dee) aid_popup2_width_pane

0x4c77,	// (0x0008a564) cell_qdial_pane_g4_ParamLimits

0x4c77,	// (0x0008a564) cell_qdial_pane_g4

0x683d,	// (0x0008c12a) aid_blid_cardinal_pane_ParamLimits

0x684d,	// (0x0008c13a) aid_blid_destination_pane_ParamLimits

0x684d,	// (0x0008c13a) aid_blid_destination_pane

0xe207,	// (0x00093af4) bg_popup_call_poc_act_pane_ParamLimits

0xe207,	// (0x00093af4) bg_popup_call_poc_act_pane

0xe207,	// (0x00093af4) bg_popup_call_poc_inact_pane_ParamLimits

0xe207,	// (0x00093af4) bg_popup_call_poc_inact_pane

0x1135,	// (0x00086a22) bg_popup_call_poc_act_pane_g1

0x113d,	// (0x00086a2a) bg_popup_call_poc_act_pane_g2

0x1145,	// (0x00086a32) bg_popup_call_poc_act_pane_g3

0x10fd,	// (0x000869ea) bg_popup_call_poc_act_pane_g4

0x1105,	// (0x000869f2) bg_popup_call_poc_act_pane_g5

0x114d,	// (0x00086a3a) bg_popup_call_poc_act_pane_g6

0x1115,	// (0x00086a02) bg_popup_call_poc_act_pane_g7

0x1155,	// (0x00086a42) bg_popup_call_poc_act_pane_g8

0xdfac,	// (0x00093899) main_usb_pane

0x7776,	// (0x0008d063) popup_cale_lunar_info_window

0x588e,	// (0x0008b17b) im_reading_pane_t1_ParamLimits

0xe696,	// (0x00093f83) list_im_pane_ParamLimits

0xe6a7,	// (0x00093f94) scroll_pane_cp07_ParamLimits

0xdfac,	// (0x00093899) grid_highlight_pane_cp012

0xe207,	// (0x00093af4) mup_scale_pane_ParamLimits

0xefbc,	// (0x000948a9) main_usb_pane_g1_ParamLimits

0xefbc,	// (0x000948a9) main_usb_pane_g1

0x74d7,	// (0x0008cdc4) main_usb_pane_g2_ParamLimits

0x74d7,	// (0x0008cdc4) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00094ea8) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00094ea8) main_usb_pane_g

0x74e3,	// (0x0008cdd0) main_usb_pane_t1_ParamLimits

0x74e3,	// (0x0008cdd0) main_usb_pane_t1

0x74f5,	// (0x0008cde2) main_usb_pane_t2_ParamLimits

0x74f5,	// (0x0008cde2) main_usb_pane_t2

0x7507,	// (0x0008cdf4) main_usb_pane_t3_ParamLimits

0x7507,	// (0x0008cdf4) main_usb_pane_t3

0x7519,	// (0x0008ce06) main_usb_pane_t4_ParamLimits

0x7519,	// (0x0008ce06) main_usb_pane_t4

0x752b,	// (0x0008ce18) main_usb_pane_t5_ParamLimits

0x752b,	// (0x0008ce18) main_usb_pane_t5

0x753d,	// (0x0008ce2a) main_usb_pane_t6_ParamLimits

0x753d,	// (0x0008ce2a) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00094ead) main_usb_pane_t_ParamLimits

0x67e3,	// (0x0008c0d0) aid_text_placing

0x67ef,	// (0x0008c0dc) main_location2_pane_t1_ParamLimits

0x6803,	// (0x0008c0f0) main_location2_pane_t2_ParamLimits

0x6817,	// (0x0008c104) main_location2_pane_t3_ParamLimits

0x682b,	// (0x0008c118) main_location2_pane_t4_ParamLimits

0x682b,	// (0x0008c118) main_location2_pane_t4

0xf3df,	// (0x00094ccc) main_location2_pane_t_ParamLimits

0xe24b,	// (0x00093b38) find_pinb_pane_g2_ParamLimits

0xe24b,	// (0x00093b38) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00094a1a) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00094a1a) find_pinb_pane_g

0xe257,	// (0x00093b44) find_pinb_pane_t1_ParamLimits

0xe269,	// (0x00093b56) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00094a1f) find_pinb_pane_t_ParamLimits

0xdfac,	// (0x00093899) main_call3_pane

0x5f07,	// (0x0008b7f4) cale_month_day_heading_pane_t1_ParamLimits

0x5f65,	// (0x0008b852) cale_month_day_heading_pane_t2_ParamLimits

0x5fca,	// (0x0008b8b7) cale_month_day_heading_pane_t3_ParamLimits

0x602f,	// (0x0008b91c) cale_month_day_heading_pane_t4_ParamLimits

0x6094,	// (0x0008b981) cale_month_day_heading_pane_t5_ParamLimits

0x60f9,	// (0x0008b9e6) cale_month_day_heading_pane_t6_ParamLimits

0x6166,	// (0x0008ba53) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00094ba3) cale_month_day_heading_pane_t_ParamLimits

0xe911,	// (0x000941fe) smil_status_volume_pane

0x708b,	// (0x0008c978) postcard_address_pane_ParamLimits

0x708b,	// (0x0008c978) postcard_address_pane

0x7097,	// (0x0008c984) postcard_message_pane_ParamLimits

0x7097,	// (0x0008c984) postcard_message_pane

0x749f,	// (0x0008cd8c) call2_cli_visual_pane_t1_ParamLimits

0x749f,	// (0x0008cd8c) call2_cli_visual_pane_t1

0x7ad5,	// (0x0008d3c2) postcard_message_pane_t1_ParamLimits

0x7ad5,	// (0x0008d3c2) postcard_message_pane_t1

0x7abe,	// (0x0008d3ab) postcard_address_pane_t1_ParamLimits

0x7abe,	// (0x0008d3ab) postcard_address_pane_t1

0x7aaf,	// (0x0008d39c) popup_call3_audio_in_window_ParamLimits

0x7aaf,	// (0x0008d39c) popup_call3_audio_in_window

0x7997,	// (0x0008d284) bg_popup_call3_in_pane_ParamLimits

0x7997,	// (0x0008d284) bg_popup_call3_in_pane

0x79f5,	// (0x0008d2e2) popup_call3_audio_in_window_g1_ParamLimits

0x79f5,	// (0x0008d2e2) popup_call3_audio_in_window_g1

0x7a0d,	// (0x0008d2fa) popup_call3_audio_in_window_g2_ParamLimits

0x7a0d,	// (0x0008d2fa) popup_call3_audio_in_window_g2

0x7a25,	// (0x0008d312) popup_call3_audio_in_window_g3_ParamLimits

0x7a25,	// (0x0008d312) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00094f0f) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00094f0f) popup_call3_audio_in_window_g

0x7a4d,	// (0x0008d33a) popup_call3_audio_in_window_t1_ParamLimits

0x7a4d,	// (0x0008d33a) popup_call3_audio_in_window_t1

0x7a75,	// (0x0008d362) popup_call3_audio_in_window_t2_ParamLimits

0x7a75,	// (0x0008d362) popup_call3_audio_in_window_t2

0x7a9d,	// (0x0008d38a) popup_call3_audio_in_window_t3_ParamLimits

0x7a9d,	// (0x0008d38a) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00094f18) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00094f18) popup_call3_audio_in_window_t

0xef05,	// (0x000947f2) bg_popup_call3_rect_pane

0x10a5,	// (0x00086992) bg_popup_call3_rect_pane_g1

0xe411,	// (0x00093cfe) bg_popup_call3_rect_pane_g2

0x10ad,	// (0x0008699a) bg_popup_call3_rect_pane_g3

0x10b5,	// (0x000869a2) bg_popup_call3_rect_pane_g4

0x10bd,	// (0x000869aa) bg_popup_call3_rect_pane_g5

0x10c5,	// (0x000869b2) bg_popup_call3_rect_pane_g6

0x10cd,	// (0x000869ba) bg_popup_call3_rect_pane_g7

0x6c55,	// (0x0008c542) mup_visualizer_osc_pane

0xefd2,	// (0x000948bf) mup_visualizer_spec_pane

0x79b7,	// (0x0008d2a4) call3_video_qcif_pane_ParamLimits

0x79b7,	// (0x0008d2a4) call3_video_qcif_pane

0x79c7,	// (0x0008d2b4) call3_video_qcif_uncrop_pane_ParamLimits

0x79c7,	// (0x0008d2b4) call3_video_qcif_uncrop_pane

0x79d3,	// (0x0008d2c0) call3_video_subqcif_pane_ParamLimits

0x79d3,	// (0x0008d2c0) call3_video_subqcif_pane

0x79e5,	// (0x0008d2d2) call3_video_subqcif_uncrop_pane_ParamLimits

0x79e5,	// (0x0008d2d2) call3_video_subqcif_uncrop_pane

0x7a3d,	// (0x0008d32a) popup_call3_audio_in_window_g4_ParamLimits

0x7a3d,	// (0x0008d32a) popup_call3_audio_in_window_g4

0x7962,	// (0x0008d24f) mup_spec_half_pane

0x796b,	// (0x0008d258) mup_spec_half_pane_cp

0x1345,	// (0x00086c32) mup_osc_middle_pane

0x134e,	// (0x00086c3b) mup_visualizer_osc_pane_g1

0x7943,	// (0x0008d230) mup_spec_bar_pane_ParamLimits

0x7943,	// (0x0008d230) mup_spec_bar_pane

0x1332,	// (0x00086c1f) mup_spec_bar_pane_g1

0x133c,	// (0x00086c29) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00094f03) mup_spec_bar_pane_g

0x4db4,	// (0x0008a6a1) aid_cale_week_size_cell_pane_ParamLimits

0x4dc7,	// (0x0008a6b4) bg_cale_heading_pane_ParamLimits

0xe445,	// (0x00093d32) bg_cale_pane_cp01_ParamLimits

0x4de3,	// (0x0008a6d0) cale_week_corner_pane_ParamLimits

0x4df4,	// (0x0008a6e1) cale_week_day_heading_pane_ParamLimits

0x4e10,	// (0x0008a6fd) cale_week_scroll_pane_g1_ParamLimits

0x4e29,	// (0x0008a716) cale_week_scroll_pane_g2_ParamLimits

0x4e3a,	// (0x0008a727) cale_week_scroll_pane_g3_ParamLimits

0x4e4b,	// (0x0008a738) cale_week_scroll_pane_g4_ParamLimits

0x4e5c,	// (0x0008a749) cale_week_scroll_pane_g5_ParamLimits

0x4e6d,	// (0x0008a75a) cale_week_scroll_pane_g6_ParamLimits

0x4e7e,	// (0x0008a76b) cale_week_scroll_pane_g7_ParamLimits

0x4e91,	// (0x0008a77e) cale_week_scroll_pane_g8_ParamLimits

0x4ea4,	// (0x0008a791) cale_week_scroll_pane_g9_ParamLimits

0x4eb5,	// (0x0008a7a2) cale_week_scroll_pane_g10_ParamLimits

0x4ec6,	// (0x0008a7b3) cale_week_scroll_pane_g11_ParamLimits

0x4ed7,	// (0x0008a7c4) cale_week_scroll_pane_g12_ParamLimits

0x4ef0,	// (0x0008a7dd) cale_week_scroll_pane_g13_ParamLimits

0x4f09,	// (0x0008a7f6) cale_week_scroll_pane_g14_ParamLimits

0x4f22,	// (0x0008a80f) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00094aab) cale_week_scroll_pane_g_ParamLimits

0x4f3b,	// (0x0008a828) cale_week_time_pane_ParamLimits

0x4f4e,	// (0x0008a83b) grid_cale_week_pane_ParamLimits

0xe45e,	// (0x00093d4b) listscroll_cale_week_pane_t1

0x4f6b,	// (0x0008a858) scroll_pane_cp08_ParamLimits

0x5b40,	// (0x0008b42d) cale_month_corner_pane_ParamLimits

0xe8bd,	// (0x000941aa) cale_month_pane_t1

0x5eb6,	// (0x0008b7a3) cale_month_week_pane_ParamLimits

0xefbc,	// (0x000948a9) popup_call_status_window_g1_ParamLimits

0x661f,	// (0x0008bf0c) popup_call_status_window_g2_ParamLimits

0x662b,	// (0x0008bf18) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00094c53) popup_call_status_window_g_ParamLimits

0xec78,	// (0x00094565) aid_call2_pane

0x6ef0,	// (0x0008c7dd) msg_header_pane_g1

0x708b,	// (0x0008c978) postcard_address2_pane_ParamLimits

0x708b,	// (0x0008c978) postcard_address2_pane

0x7097,	// (0x0008c984) postcard_message2_pane_ParamLimits

0x7097,	// (0x0008c984) postcard_message2_pane

0x78d1,	// (0x0008d1be) message2_row_pane_ParamLimits

0x78d1,	// (0x0008d1be) message2_row_pane

0x78ee,	// (0x0008d1db) address2_row_pane_ParamLimits

0x78ee,	// (0x0008d1db) address2_row_pane

0x1300,	// (0x00086bed) postcard_message2_row_pane_g1

0x1308,	// (0x00086bf5) postcard_message2_row_pane_t1

0x1300,	// (0x00086bed) address2_row_pane_g1

0x1308,	// (0x00086bf5) address2_row_pane_t1

0x5187,	// (0x0008aa74) aid_size_cell_vorec

0xdfac,	// (0x00093899) main_rss_pane

0x7901,	// (0x0008d1ee) rss_list_single_pane_ParamLimits

0x7901,	// (0x0008d1ee) rss_list_single_pane

0x1316,	// (0x00086c03) rss_list_single_pane_t1

0x1324,	// (0x00086c11) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00094efe) rss_list_single_pane_t

0xdfac,	// (0x00093899) main_camera2_pane

0xdfac,	// (0x00093899) main_video2_pane

0x7b39,	// (0x0008d426) cams_zoom_pane_cp2_ParamLimits

0x7b39,	// (0x0008d426) cams_zoom_pane_cp2

0x7b45,	// (0x0008d432) image2_vga_pane_ParamLimits

0x7b45,	// (0x0008d432) image2_vga_pane

0x7b54,	// (0x0008d441) main_camera2_pane_g1_ParamLimits

0x7b54,	// (0x0008d441) main_camera2_pane_g1

0x7b60,	// (0x0008d44d) main_camera2_pane_g2_ParamLimits

0x7b60,	// (0x0008d44d) main_camera2_pane_g2

0x7b6c,	// (0x0008d459) main_camera2_pane_g3_ParamLimits

0x7b6c,	// (0x0008d459) main_camera2_pane_g3

0x7b78,	// (0x0008d465) main_camera2_pane_g4_ParamLimits

0x7b78,	// (0x0008d465) main_camera2_pane_g4

0x7b84,	// (0x0008d471) main_camera2_pane_g5_ParamLimits

0x7b84,	// (0x0008d471) main_camera2_pane_g5

0x7b90,	// (0x0008d47d) main_camera2_pane_g6_ParamLimits

0x7b90,	// (0x0008d47d) main_camera2_pane_g6

0x7b9c,	// (0x0008d489) main_camera2_pane_g7_ParamLimits

0x7b9c,	// (0x0008d489) main_camera2_pane_g7

0x7ba8,	// (0x0008d495) main_camera2_pane_g8_ParamLimits

0x7ba8,	// (0x0008d495) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00094f1f) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00094f1f) main_camera2_pane_g

0x7bc0,	// (0x0008d4ad) main_camera2_pane_t1_ParamLimits

0x7bc0,	// (0x0008d4ad) main_camera2_pane_t1

0x7bd2,	// (0x0008d4bf) main_camera2_pane_t2_ParamLimits

0x7bd2,	// (0x0008d4bf) main_camera2_pane_t2

0x7be4,	// (0x0008d4d1) main_camera2_pane_t3_ParamLimits

0x7be4,	// (0x0008d4d1) main_camera2_pane_t3

0x7bf6,	// (0x0008d4e3) main_camera2_pane_t4_ParamLimits

0x7bf6,	// (0x0008d4e3) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00094f32) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00094f32) main_camera2_pane_t

0x7c58,	// (0x0008d545) cams_zoom_pane_cp4_ParamLimits

0x7c58,	// (0x0008d545) cams_zoom_pane_cp4

0x7c68,	// (0x0008d555) image2_cif_pane_ParamLimits

0x7c68,	// (0x0008d555) image2_cif_pane

0x7c7d,	// (0x0008d56a) image2_subqcif_pane_ParamLimits

0x7c7d,	// (0x0008d56a) image2_subqcif_pane

0x7c8c,	// (0x0008d579) main_video2_pane_g1_ParamLimits

0x7c8c,	// (0x0008d579) main_video2_pane_g1

0x7c9e,	// (0x0008d58b) main_video2_pane_g2_ParamLimits

0x7c9e,	// (0x0008d58b) main_video2_pane_g2

0x7cae,	// (0x0008d59b) main_video2_pane_g3_ParamLimits

0x7cae,	// (0x0008d59b) main_video2_pane_g3

0x7cbe,	// (0x0008d5ab) main_video2_pane_g4_ParamLimits

0x7cbe,	// (0x0008d5ab) main_video2_pane_g4

0x7cce,	// (0x0008d5bb) main_video2_pane_g5_ParamLimits

0x7cce,	// (0x0008d5bb) main_video2_pane_g5

0x7cde,	// (0x0008d5cb) main_video2_pane_g6_ParamLimits

0x7cde,	// (0x0008d5cb) main_video2_pane_g6

0x0005,

0xf654,	// (0x00094f41) main_video2_pane_g_ParamLimits

0xf654,	// (0x00094f41) main_video2_pane_g

0x7cf0,	// (0x0008d5dd) main_video2_pane_t1_ParamLimits

0x7cf0,	// (0x0008d5dd) main_video2_pane_t1

0x7d0a,	// (0x0008d5f7) main_video2_pane_t2_ParamLimits

0x7d0a,	// (0x0008d5f7) main_video2_pane_t2

0x7d30,	// (0x0008d61d) main_video2_pane_t3_ParamLimits

0x7d30,	// (0x0008d61d) main_video2_pane_t3

0x0002,

0xf661,	// (0x00094f4e) main_video2_pane_t_ParamLimits

0xf661,	// (0x00094f4e) main_video2_pane_t

0x75f4,	// (0x0008cee1) call_muted_g2

0x0001,

0xf603,	// (0x00094ef0) call_muted_g

0xdfac,	// (0x00093899) main_mup2_pane

0x2605,	// (0x00087ef2) main_mup2_pane_g1_ParamLimits

0x2605,	// (0x00087ef2) main_mup2_pane_g1

0x7d56,	// (0x0008d643) main_mup2_pane_g2_ParamLimits

0x7d56,	// (0x0008d643) main_mup2_pane_g2

0x7fd8,	// (0x0008d8c5) main_mup_pane_g13_cp1

0x7fe0,	// (0x0008d8cd) mup_volume_pane_cp1

0x7d76,	// (0x0008d663) main_mup2_pane_g4_ParamLimits

0x7d76,	// (0x0008d663) main_mup2_pane_g4

0x7d8b,	// (0x0008d678) main_mup2_pane_g5_ParamLimits

0x7d8b,	// (0x0008d678) main_mup2_pane_g5

0x7da0,	// (0x0008d68d) main_mup2_pane_g6_ParamLimits

0x7da0,	// (0x0008d68d) main_mup2_pane_g6

0x7db5,	// (0x0008d6a2) main_mup2_pane_g7_ParamLimits

0x7db5,	// (0x0008d6a2) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00094f55) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00094f55) main_mup2_pane_g

0x7dd1,	// (0x0008d6be) main_mup2_pane_t1_ParamLimits

0x7dd1,	// (0x0008d6be) main_mup2_pane_t1

0x7de8,	// (0x0008d6d5) main_mup2_pane_t2_ParamLimits

0x7de8,	// (0x0008d6d5) main_mup2_pane_t2

0x7dff,	// (0x0008d6ec) main_mup2_pane_t3_ParamLimits

0x7dff,	// (0x0008d6ec) main_mup2_pane_t3

0x7e16,	// (0x0008d703) main_mup2_pane_t4_ParamLimits

0x7e16,	// (0x0008d703) main_mup2_pane_t4

0x7e30,	// (0x0008d71d) main_mup2_pane_t5_ParamLimits

0x7e30,	// (0x0008d71d) main_mup2_pane_t5

0x7e4a,	// (0x0008d737) main_mup2_pane_t6_ParamLimits

0x7e4a,	// (0x0008d737) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00094f64) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00094f64) main_mup2_pane_t

0x7e82,	// (0x0008d76f) mup2_visualizer_pane_ParamLimits

0x7e82,	// (0x0008d76f) mup2_visualizer_pane

0x7eb8,	// (0x0008d7a5) mup_progress_pane_cp_ParamLimits

0x7eb8,	// (0x0008d7a5) mup_progress_pane_cp

0x7fc3,	// (0x0008d8b0) mup_volume_pane_cp_ParamLimits

0x7fc3,	// (0x0008d8b0) mup_volume_pane_cp

0x7ecf,	// (0x0008d7bc) mup2_visualizer_pane_g1_ParamLimits

0x7ecf,	// (0x0008d7bc) mup2_visualizer_pane_g1

0x25d7,	// (0x00087ec4) mup2_visualizer_pane_g2_ParamLimits

0x25d7,	// (0x00087ec4) mup2_visualizer_pane_g2

0x7ee4,	// (0x0008d7d1) mup2_visualizer_pane_g3_ParamLimits

0x7ee4,	// (0x0008d7d1) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00094f71) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00094f71) mup2_visualizer_pane_g

0x0177,	// (0x00085a64) aid_size_cell_fmradio

0x770a,	// (0x0008cff7) aid_height_parent_landcape

0xe725,	// (0x00094012) wml_content_pane_cp

0xe72d,	// (0x0009401a) wml_tabs_pane

0xe736,	// (0x00094023) popup_wml_miniature_window

0xe73e,	// (0x0009402b) scroll_pane_cp021

0xe752,	// (0x0009403f) wml_content_pane_comp8

0xdfac,	// (0x00093899) bg_popup_sub_pane_cp05

0x25f5,	// (0x00087ee2) popup_wml_miniature_window_g1

0x25fd,	// (0x00087eea) wml_miniature_view_pane

0x7ef2,	// (0x0008d7df) aid_size_wml_view

0x7efa,	// (0x0008d7e7) wml_miniature_view_pane_g1

0x7f03,	// (0x0008d7f0) wml_miniature_view_pane_g2

0x7f0c,	// (0x0008d7f9) wml_miniature_view_pane_g3

0x7f14,	// (0x0008d801) wml_miniature_view_pane_g4

0x7f1c,	// (0x0008d809) wml_miniature_view_pane_g5

0x7f24,	// (0x0008d811) wml_miniature_view_pane_g6

0x7f2c,	// (0x0008d819) wml_miniature_view_pane_g7

0x7f34,	// (0x0008d821) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00094f78) wml_miniature_view_pane_g

0x2605,	// (0x00087ef2) background_graphic_ParamLimits

0x2605,	// (0x00087ef2) background_graphic

0x2611,	// (0x00087efe) wml_tabs_2_pane

0x261a,	// (0x00087f07) wml_tabs_3_pane_ParamLimits

0x261a,	// (0x00087f07) wml_tabs_3_pane

0x262c,	// (0x00087f19) wml_tabs_4_pane_ParamLimits

0x262c,	// (0x00087f19) wml_tabs_4_pane

0x2642,	// (0x00087f2f) wml_tabs_5_pane_ParamLimits

0x2642,	// (0x00087f2f) wml_tabs_5_pane

0x2b06,	// (0x000883f3) wml_tabs_pane_g2_ParamLimits

0x2b06,	// (0x000883f3) wml_tabs_pane_g2

0x2b1a,	// (0x00088407) wml_tabs_pane_g3_ParamLimits

0x2b1a,	// (0x00088407) wml_tabs_pane_g3

0x7f3c,	// (0x0008d829) wml_tabs_2_active_pane_ParamLimits

0x7f3c,	// (0x0008d829) wml_tabs_2_active_pane

0x7f4c,	// (0x0008d839) wml_tabs_2_passive_pane_ParamLimits

0x7f4c,	// (0x0008d839) wml_tabs_2_passive_pane

0x7f5c,	// (0x0008d849) wml_tabs_3_active_pane_cp_ParamLimits

0x7f5c,	// (0x0008d849) wml_tabs_3_active_pane_cp

0x7f6d,	// (0x0008d85a) wml_tabs_3_passive_pane_ParamLimits

0x7f6d,	// (0x0008d85a) wml_tabs_3_passive_pane

0x7f7e,	// (0x0008d86b) wml_tabs_3_passive_pane_cp_ParamLimits

0x7f7e,	// (0x0008d86b) wml_tabs_3_passive_pane_cp

0x7f8f,	// (0x0008d87c) tabs_4_active_pane

0x7f97,	// (0x0008d884) tabs_4_passive_pane

0x7f9f,	// (0x0008d88c) tabs_4_passive_pane_cp

0x7fa7,	// (0x0008d894) tabs_4_passive_pane_cp2

0x112d,	// (0x00086a1a) aid_height_text

0x6c1e,	// (0x0008c50b) mup_volume_cont_pane_ParamLimits

0x6c1e,	// (0x0008c50b) mup_volume_cont_pane

0x48e2,	// (0x0008a1cf) aid_size_cell_pinb

0xe237,	// (0x00093b24) aid_size_list_pinb

0x7ea1,	// (0x0008d78e) mup2_volume_cont_pane_ParamLimits

0x7ea1,	// (0x0008d78e) mup2_volume_cont_pane

0x7faf,	// (0x0008d89c) mup2_volume_cont_pane_g1_ParamLimits

0x7faf,	// (0x0008d89c) mup2_volume_cont_pane_g1

0x450d,	// (0x00089dfa) aid_size_cell_touch_ParamLimits

0x450d,	// (0x00089dfa) aid_size_cell_touch

0x47c2,	// (0x0008a0af) touch_pane_ParamLimits

0x47c2,	// (0x0008a0af) touch_pane

0x47b8,	// (0x0008a0a5) main_rss2_pane

0x2b37,	// (0x00088424) listscroll_rss2_pane

0x2b40,	// (0x0008842d) rss2_navigation_pane

0x2b48,	// (0x00088435) list_rss2_pane

0xedb8,	// (0x000946a5) scroll_pane_cp22

0x2b50,	// (0x0008843d) rss2_navigation_pane_g1

0x2b59,	// (0x00088446) rss2_navigation_pane_g2

0x2b61,	// (0x0008844e) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00094f89) rss2_navigation_pane_g

0x2b69,	// (0x00088456) rss2_navigation_pane_t1

0x7fe8,	// (0x0008d8d5) rss2_list_single_pane_ParamLimits

0x7fe8,	// (0x0008d8d5) rss2_list_single_pane

0x2b77,	// (0x00088464) rss2_list_single_pane_t2

0x2b85,	// (0x00088472) rss2_list_single_pane_t3_ParamLimits

0x2b85,	// (0x00088472) rss2_list_single_pane_t3

0x2ba2,	// (0x0008848f) rss2_list_single_pane_t4

0x6376,	// (0x0008bc63) smil_status_pane_g1

0x7721,	// (0x0008d00e) main_image2_pane_ParamLimits

0x7721,	// (0x0008d00e) main_image2_pane

0x7bb4,	// (0x0008d4a1) main_camera2_pane_g9_ParamLimits

0x7bb4,	// (0x0008d4a1) main_camera2_pane_g9

0x7c08,	// (0x0008d4f5) main_camera2_pane_t5_ParamLimits

0x7c08,	// (0x0008d4f5) main_camera2_pane_t5

0x7c1a,	// (0x0008d507) main_camera2_pane_t6_ParamLimits

0x7c1a,	// (0x0008d507) main_camera2_pane_t6

0x8024,	// (0x0008d911) main_image2_pane_g1_ParamLimits

0x8024,	// (0x0008d911) main_image2_pane_g1

0x726c,	// (0x0008cb59) smil2_video_pane_ParamLimits

0x726c,	// (0x0008cb59) smil2_video_pane

0x441e,	// (0x00089d0b) aid_zoom_text_primary_cp

0x475d,	// (0x0008a04a) popup_preview_fixed_window

0xe68e,	// (0x00093f7b) im_reading_pane_g1

0x7afe,	// (0x0008d3eb) cams2_bc_adjust_pane_cp_ParamLimits

0x7afe,	// (0x0008d3eb) cams2_bc_adjust_pane_cp

0x7c4a,	// (0x0008d537) cams2_bc_adjust_pane_ParamLimits

0x7c4a,	// (0x0008d537) cams2_bc_adjust_pane

0x301d,	// (0x0008890a) cams2_bc_adjust_pane_g1

0x8030,	// (0x0008d91d) cams2_slider_pane

0x8039,	// (0x0008d926) cams2_slider_pane_g1

0x8042,	// (0x0008d92f) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00094f90) cams2_slider_pane_g

0x49c1,	// (0x0008a2ae) calc_display_pane_ParamLimits

0x49df,	// (0x0008a2cc) calc_paper_pane_ParamLimits

0x49fb,	// (0x0008a2e8) grid_calc_pane_ParamLimits

0x6689,	// (0x0008bf76) popup_clock_digital_window_t1_ParamLimits

0x0114,	// (0x00085a01) main_image_pane_t1

0x49a7,	// (0x0008a294) aid_size_cell_calc_ParamLimits

0x49a7,	// (0x0008a294) aid_size_cell_calc

0x7752,	// (0x0008d03f) popup_blid_sat_info2_window_ParamLimits

0x7752,	// (0x0008d03f) popup_blid_sat_info2_window

0x2bb8,	// (0x000884a5) aid_size_cell_blid

0x2bc0,	// (0x000884ad) bg_popup_window_pane_cp07

0x2be3,	// (0x000884d0) grid_popup_blid_pane

0x2bed,	// (0x000884da) heading_pane_cp05_ParamLimits

0x2bed,	// (0x000884da) heading_pane_cp05

0x2cb7,	// (0x000885a4) cell_popup_blid_pane_ParamLimits

0x2cb7,	// (0x000885a4) cell_popup_blid_pane

0x2cdd,	// (0x000885ca) cell_popup_blid_pane_g1

0x2ce5,	// (0x000885d2) cell_popup_blid_pane_t1

0x7e67,	// (0x0008d754) mup2_indicator_pane_ParamLimits

0x7e67,	// (0x0008d754) mup2_indicator_pane

0xef05,	// (0x000947f2) mup2_visualizer_osc_pane

0x25e3,	// (0x00087ed0) mup2_visualizer_spec_pane_ParamLimits

0x25e3,	// (0x00087ed0) mup2_visualizer_spec_pane

0x805c,	// (0x0008d949) mup2_spec_half_pane

0x8065,	// (0x0008d952) mup2_spec_half_pane_cp

0x806f,	// (0x0008d95c) mup2_spec_bar_pane_ParamLimits

0x806f,	// (0x0008d95c) mup2_spec_bar_pane

0x1332,	// (0x00086c1f) mup2_spec_bar_pane_g1

0x133c,	// (0x00086c29) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00094f03) mup2_spec_bar_pane_g

0x808e,	// (0x0008d97b) mup2_osc_middle_pane

0x134e,	// (0x00086c3b) mup2_visualizer_osc_pane_g1

0xca2d,	// (0x0009231a) popup_number_entry_window_t1_ParamLimits

0xca40,	// (0x0009232d) popup_number_entry_window_t2_ParamLimits

0xca52,	// (0x0009233f) popup_number_entry_window_t3_ParamLimits

0x4819,	// (0x0008a106) popup_number_entry_window_t5_ParamLimits

0x4819,	// (0x0008a106) popup_number_entry_window_t5

0xf0d8,	// (0x000949c5) popup_number_entry_window_t_ParamLimits

0xca64,	// (0x00092351) text_title_cp2_ParamLimits

0x6f53,	// (0x0008c840) aid_hotspot_pointer_text2_pane

0x6fed,	// (0x0008c8da) main_viewer_pane_g9_ParamLimits

0x6fed,	// (0x0008c8da) main_viewer_pane_g9

0xe8bd,	// (0x000941aa) cale_month_pane_t1_ParamLimits

0xe924,	// (0x00094211) bg_cale_pane_ParamLimits

0xe93c,	// (0x00094229) list_cale_pane_ParamLimits

0xe45e,	// (0x00093d4b) listscroll_cale_day_pane_t1

0xe94d,	// (0x0009423a) scroll_pane_cp09_ParamLimits

0x6c5d,	// (0x0008c54a) main_mup_eq_pane_t1_ParamLimits

0x6c5d,	// (0x0008c54a) main_mup_eq_pane_t1

0x6c77,	// (0x0008c564) main_mup_eq_pane_t2_ParamLimits

0x6c77,	// (0x0008c564) main_mup_eq_pane_t2

0x6c8f,	// (0x0008c57c) main_mup_eq_pane_t3_ParamLimits

0x6c8f,	// (0x0008c57c) main_mup_eq_pane_t3

0x6ca7,	// (0x0008c594) main_mup_eq_pane_t4_ParamLimits

0x6ca7,	// (0x0008c594) main_mup_eq_pane_t4

0x6cbf,	// (0x0008c5ac) main_mup_eq_pane_t5_ParamLimits

0x6cbf,	// (0x0008c5ac) main_mup_eq_pane_t5

0x6cd7,	// (0x0008c5c4) main_mup_eq_pane_t6_ParamLimits

0x6cd7,	// (0x0008c5c4) main_mup_eq_pane_t6

0x6ceb,	// (0x0008c5d8) main_mup_eq_pane_t7_ParamLimits

0x6ceb,	// (0x0008c5d8) main_mup_eq_pane_t7

0x6cff,	// (0x0008c5ec) main_mup_eq_pane_t8_ParamLimits

0x6cff,	// (0x0008c5ec) main_mup_eq_pane_t8

0x6d15,	// (0x0008c602) main_mup_eq_pane_t9_ParamLimits

0x6d15,	// (0x0008c602) main_mup_eq_pane_t9

0x6d2d,	// (0x0008c61a) main_mup_eq_pane_t10_ParamLimits

0x6d2d,	// (0x0008c61a) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00094d52) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00094d52) main_mup_eq_pane_t

0x6dea,	// (0x0008c6d7) mup_equalizer_pane_cp5_ParamLimits

0x6e00,	// (0x0008c6ed) mup_equalizer_pane_cp6_ParamLimits

0x6e18,	// (0x0008c705) mup_equalizer_pane_cp7_ParamLimits

0x47b8,	// (0x0008a0a5) main_gallery_pane

0x1357,	// (0x00086c44) smil2_volume_pane

0x1372,	// (0x00086c5f) smil_status_volume_pane_g1_ParamLimits

0x135f,	// (0x00086c4c) smil_status_volume_pane_g2_ParamLimits

0x7975,	// (0x0008d262) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00094f08) smil_status_volume_pane_g_ParamLimits

0x2bc0,	// (0x000884ad) bg_popup_window_pane_cp07_ParamLimits

0x2bce,	// (0x000884bb) blid_firmament_pane

0x8097,	// (0x0008d984) aid_size_cell_gallery_ParamLimits

0x8097,	// (0x0008d984) aid_size_cell_gallery

0x80a5,	// (0x0008d992) grid_gallery_pane_ParamLimits

0x80a5,	// (0x0008d992) grid_gallery_pane

0x80b5,	// (0x0008d9a2) cell_gallery_pane_ParamLimits

0x80b5,	// (0x0008d9a2) cell_gallery_pane

0x2cf3,	// (0x000885e0) bg_cell_gallery_focus_pane_ParamLimits

0x2cf3,	// (0x000885e0) bg_cell_gallery_focus_pane

0x2d05,	// (0x000885f2) cell_gallery_pane_g1_ParamLimits

0x2d05,	// (0x000885f2) cell_gallery_pane_g1

0x8103,	// (0x0008d9f0) cell_gallery_pane_g2_ParamLimits

0x8103,	// (0x0008d9f0) cell_gallery_pane_g2

0x8110,	// (0x0008d9fd) cell_gallery_pane_g3_ParamLimits

0x8110,	// (0x0008d9fd) cell_gallery_pane_g3

0x2d11,	// (0x000885fe) cell_gallery_pane_g4_ParamLimits

0x2d11,	// (0x000885fe) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00094fb6) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00094fb6) cell_gallery_pane_g

0x2d1d,	// (0x0008860a) bg_cell_gallery_focus_pane_g1

0x2d25,	// (0x00088612) bg_cell_gallery_focus_pane_g2

0x2d2d,	// (0x0008861a) bg_cell_gallery_focus_pane_g3

0x2d35,	// (0x00088622) bg_cell_gallery_focus_pane_g4

0x2d3d,	// (0x0008862a) bg_cell_gallery_focus_pane_g5

0x2d45,	// (0x00088632) bg_cell_gallery_focus_pane_g6

0x2d4d,	// (0x0008863a) bg_cell_gallery_focus_pane_g7

0x2d55,	// (0x00088642) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00094fbf) bg_cell_gallery_focus_pane_g

0x2d5d,	// (0x0008864a) aid_firma_cardinal

0x2d71,	// (0x0008865e) blid_firmament_pane_t1

0x2d88,	// (0x00088675) blid_firmament_pane_t2

0x2d9f,	// (0x0008868c) blid_firmament_pane_t3

0x2db6,	// (0x000886a3) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00094fd0) blid_firmament_pane_t

0x2dcd,	// (0x000886ba) blid_sat_info_pane

0x2ddd,	// (0x000886ca) blid_sat_info_pane_g1

0x2ddd,	// (0x000886ca) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00094fd9) blid_sat_info_pane_g

0x2de7,	// (0x000886d4) blid_sat_info_pane_t1

0x2df5,	// (0x000886e2) smil2_volume_content_pane

0x2dfe,	// (0x000886eb) smil2_volume_pane_g1

0x2e06,	// (0x000886f3) smil2_volume_content_pane_g1

0x2e0f,	// (0x000886fc) smil2_volume_content_pane_g2

0x2e18,	// (0x00088705) smil2_volume_content_pane_g3

0x2e21,	// (0x0008870e) smil2_volume_content_pane_g4

0x2e2a,	// (0x00088717) smil2_volume_content_pane_g5

0x2e33,	// (0x00088720) smil2_volume_content_pane_g6

0x2e3c,	// (0x00088729) smil2_volume_content_pane_g7

0x2e45,	// (0x00088732) smil2_volume_content_pane_g8

0x2e4e,	// (0x0008873b) smil2_volume_content_pane_g9

0x2e57,	// (0x00088744) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00094fde) smil2_volume_content_pane_g

0x4fd5,	// (0x0008a8c2) cale_week_day_heading_pane_t1_ParamLimits

0x4fe9,	// (0x0008a8d6) cale_week_day_heading_pane_t2_ParamLimits

0x4ffd,	// (0x0008a8ea) cale_week_day_heading_pane_t3_ParamLimits

0x5011,	// (0x0008a8fe) cale_week_day_heading_pane_t4_ParamLimits

0x5025,	// (0x0008a912) cale_week_day_heading_pane_t5_ParamLimits

0x5039,	// (0x0008a926) cale_week_day_heading_pane_t6_ParamLimits

0x504d,	// (0x0008a93a) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00094aca) cale_week_day_heading_pane_t_ParamLimits

0xe470,	// (0x00093d5d) bg_cale_side_pane_ParamLimits

0x5061,	// (0x0008a94e) cale_week_time_pane_t1_ParamLimits

0x5079,	// (0x0008a966) cale_week_time_pane_t2_ParamLimits

0x5091,	// (0x0008a97e) cale_week_time_pane_t3_ParamLimits

0x50a9,	// (0x0008a996) cale_week_time_pane_t4_ParamLimits

0x50c1,	// (0x0008a9ae) cale_week_time_pane_t5_ParamLimits

0x50d9,	// (0x0008a9c6) cale_week_time_pane_t6_ParamLimits

0x50f9,	// (0x0008a9e6) cale_week_time_pane_t7_ParamLimits

0x5119,	// (0x0008aa06) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00094ad9) cale_week_time_pane_t_ParamLimits

0x5139,	// (0x0008aa26) cell_cale_week_pane_g2_ParamLimits

0xe470,	// (0x00093d5d) bg_cale_side_pane_cp01_ParamLimits

0x61db,	// (0x0008bac8) cale_month_week_pane_t1_ParamLimits

0x61f2,	// (0x0008badf) cale_month_week_pane_t2_ParamLimits

0x6209,	// (0x0008baf6) cale_month_week_pane_t3_ParamLimits

0x6220,	// (0x0008bb0d) cale_month_week_pane_t4_ParamLimits

0x6237,	// (0x0008bb24) cale_month_week_pane_t5_ParamLimits

0x6256,	// (0x0008bb43) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00094bb2) cale_month_week_pane_t_ParamLimits

0x6343,	// (0x0008bc30) cell_cale_month_pane_g1_ParamLimits

0x47b8,	// (0x0008a0a5) main_cale_event_viewer_pane

0xca03,	// (0x000922f0) listscroll_cale_event_viewer_pane

0x2e60,	// (0x0008874d) list_cale_ev_pane

0x2e68,	// (0x00088755) scroll_pane_cp023

0x2e74,	// (0x00088761) field_cale_ev_pane_ParamLimits

0x2e74,	// (0x00088761) field_cale_ev_pane

0x2e8e,	// (0x0008877b) field_cale_ev_content_pane_ParamLimits

0x2e8e,	// (0x0008877b) field_cale_ev_content_pane

0x2e9a,	// (0x00088787) field_cale_ev_pane_g1_ParamLimits

0x2e9a,	// (0x00088787) field_cale_ev_pane_g1

0x2ea6,	// (0x00088793) field_cale_ev_pane_g2_ParamLimits

0x2ea6,	// (0x00088793) field_cale_ev_pane_g2

0x2ebe,	// (0x000887ab) field_cale_ev_pane_g3_ParamLimits

0x2ebe,	// (0x000887ab) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00094ff3) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00094ff3) field_cale_ev_pane_g

0x2ed6,	// (0x000887c3) field_cale_ev_pane_t1_ParamLimits

0x2ed6,	// (0x000887c3) field_cale_ev_pane_t1

0x2eed,	// (0x000887da) field_cale_ev_content_pane_t1_ParamLimits

0x2eed,	// (0x000887da) field_cale_ev_content_pane_t1

0xf07c,	// (0x00094969) bg_button_pane_cp01

0xe31e,	// (0x00093c0b) listscroll_cale_week_pane_ParamLimits

0x4daa,	// (0x0008a697) popup_toolbar_window_cp01

0xe45e,	// (0x00093d4b) listscroll_cale_week_pane_t1_ParamLimits

0xe31e,	// (0x00093c0b) listscroll_cale_day_pane_ParamLimits

0x4daa,	// (0x0008a697) popup_toolbar_window_cp02

0xe45e,	// (0x00093d4b) listscroll_cale_day_pane_t1_ParamLimits

0xe31e,	// (0x00093c0b) main_cale_month_pane_ParamLimits

0x784d,	// (0x0008d13a) popup_toolbar_window_cp03_ParamLimits

0x784d,	// (0x0008d13a) popup_toolbar_window_cp03

0x717e,	// (0x0008ca6b) main_image_pane_g2_ParamLimits

0x717e,	// (0x0008ca6b) main_image_pane_g2

0x718a,	// (0x0008ca77) main_image_pane_g3_ParamLimits

0x718a,	// (0x0008ca77) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00094de4) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00094de4) main_image_pane_g

0x0114,	// (0x00085a01) main_image_pane_t1_ParamLimits

0x7196,	// (0x0008ca83) main_image_pane_t2_ParamLimits

0x7196,	// (0x0008ca83) main_image_pane_t2

0x71a8,	// (0x0008ca95) main_image_pane_t3_ParamLimits

0x71a8,	// (0x0008ca95) main_image_pane_t3

0x71ba,	// (0x0008caa7) main_image_pane_t4_ParamLimits

0x71ba,	// (0x0008caa7) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00094deb) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00094deb) main_image_pane_t

0x71cc,	// (0x0008cab9) popup_image_details_window_cp01

0x71d6,	// (0x0008cac3) popup_toobar_trans_pane_cp01_ParamLimits

0x71d6,	// (0x0008cac3) popup_toobar_trans_pane_cp01

0x77a5,	// (0x0008d092) popup_image_details_window_ParamLimits

0x77a5,	// (0x0008d092) popup_image_details_window

0x77b3,	// (0x0008d0a0) popup_image_focus_window

0x7af0,	// (0x0008d3dd) camera2_autofocus_pane_ParamLimits

0x7af0,	// (0x0008d3dd) camera2_autofocus_pane

0xca03,	// (0x000922f0) bg_popup_sub_pane_cp06

0x2f0a,	// (0x000887f7) popup_image_focus_window_g1

0x2f12,	// (0x000887ff) popup_image_focus_window_g2

0x2f1a,	// (0x00088807) popup_image_focus_window_g3

0x2f22,	// (0x0008880f) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00094ffa) popup_image_focus_window_g

0x2f2a,	// (0x00088817) popup_image_focus_window_t1

0x2f38,	// (0x00088825) popup_image_focus_window_t2

0x2f48,	// (0x00088835) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00095003) popup_image_focus_window_t

0x2f56,	// (0x00088843) camera2_autofocus_pane_g1

0xddb4,	// (0x000936a1) bg_tb_trans_pane_cp01

0x2f64,	// (0x00088851) popup_image_details_window_g1

0x2f77,	// (0x00088864) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00095015) popup_image_details_window_g

0x2fa0,	// (0x0008888d) popup_image_details_window_t1

0x2fb2,	// (0x0008889f) popup_image_details_window_t2

0x2fcb,	// (0x000888b8) popup_image_details_window_t3

0x2fdf,	// (0x000888cc) popup_image_details_window_t4

0x2ffa,	// (0x000888e7) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0009501c) popup_image_details_window_t

0xe30a,	// (0x00093bf7) bg_calc_paper_pane_ParamLimits

0x47b8,	// (0x0008a0a5) grid_highlight_pane_cp013

0x4af8,	// (0x0008a3e5) list_calc_pane_ParamLimits

0x4b0a,	// (0x0008a3f7) scroll_pane_cp024

0xe31e,	// (0x00093c0b) bg_calc_display_pane_ParamLimits

0x4b12,	// (0x0008a3ff) calc_display_pane_t1_ParamLimits

0x4b27,	// (0x0008a414) calc_display_pane_t2_ParamLimits

0x4b3c,	// (0x0008a429) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00094a4c) calc_display_pane_t_ParamLimits

0x4c23,	// (0x0008a510) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00094a69) cell_calc_pane_g

0x4c2c,	// (0x0008a519) cell_calc_pane_t1

0xe37d,	// (0x00093c6a) grid_highlight_pane_cp02_ParamLimits

0xe393,	// (0x00093c80) toolbar_button_pane_cp01_ParamLimits

0xe393,	// (0x00093c80) toolbar_button_pane_cp01

0x0159,	// (0x00085a46) temp_image_control_pane_ParamLimits

0x0159,	// (0x00085a46) temp_image_control_pane

0x7721,	// (0x0008d00e) main_mp3_pane

0x3043,	// (0x00088930) temp_image_control_pane_g1_ParamLimits

0x3043,	// (0x00088930) temp_image_control_pane_g1

0x3051,	// (0x0008893e) temp_image_control_pane_g2_ParamLimits

0x3051,	// (0x0008893e) temp_image_control_pane_g2

0x3063,	// (0x00088950) temp_image_control_pane_g3_ParamLimits

0x3063,	// (0x00088950) temp_image_control_pane_g3

0x814d,	// (0x0008da3a) temp_image_control_pane_g4_ParamLimits

0x814d,	// (0x0008da3a) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00095027) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00095027) temp_image_control_pane_g

0x3043,	// (0x00088930) main_mp3_pane_g1

0x815e,	// (0x0008da4b) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00095030) main_mp3_pane_g

0x30a6,	// (0x00088993) main_mp3_pane_t1

0xe4df,	// (0x00093dcc) main_camera_pane_g8_ParamLimits

0xe4df,	// (0x00093dcc) main_camera_pane_g8

0x53c3,	// (0x0008acb0) main_video_pane_g7_ParamLimits

0x53c3,	// (0x0008acb0) main_video_pane_g7

0x7c38,	// (0x0008d525) main_camera2_pane_t7_ParamLimits

0x7c38,	// (0x0008d525) main_camera2_pane_t7

0xe6e5,	// (0x00093fd2) scroll_pane_cp025_ParamLimits

0xe6e5,	// (0x00093fd2) scroll_pane_cp025

0xe6f9,	// (0x00093fe6) scroll_pane_cp026_ParamLimits

0xe6f9,	// (0x00093fe6) scroll_pane_cp026

0xe708,	// (0x00093ff5) wml_content_pane_ParamLimits

0x47b8,	// (0x0008a0a5) main_touch_calib_pane

0x8202,	// (0x0008daef) main_touch_calib_pane_g1

0x820e,	// (0x0008dafb) main_touch_calib_pane_g2

0x821a,	// (0x0008db07) main_touch_calib_pane_g3

0x8226,	// (0x0008db13) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0009504e) main_touch_calib_pane_g

0x8232,	// (0x0008db1f) main_touch_calib_pane_t1

0x8249,	// (0x0008db36) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00095057) main_touch_calib_pane_t

0xee46,	// (0x00094733) mup_progress_pane_cp02

0xee65,	// (0x00094752) navi_pane_g1

0xeec7,	// (0x000947b4) navi_pane_mp_t3

0x7721,	// (0x0008d00e) main_mp3_pane_ParamLimits

0x788b,	// (0x0008d178) navi_pane_ParamLimits

0x3043,	// (0x00088930) main_mp3_pane_g1_ParamLimits

0x815e,	// (0x0008da4b) main_mp3_pane_g2_ParamLimits

0x816a,	// (0x0008da57) main_mp3_pane_g3_ParamLimits

0x816a,	// (0x0008da57) main_mp3_pane_g3

0x8176,	// (0x0008da63) main_mp3_pane_g4_ParamLimits

0x8176,	// (0x0008da63) main_mp3_pane_g4

0x3073,	// (0x00088960) main_mp3_pane_g5_ParamLimits

0x3073,	// (0x00088960) main_mp3_pane_g5

0x3081,	// (0x0008896e) main_mp3_pane_g6_ParamLimits

0x3081,	// (0x0008896e) main_mp3_pane_g6

0x308e,	// (0x0008897b) main_mp3_pane_g7_ParamLimits

0x308e,	// (0x0008897b) main_mp3_pane_g7

0x309a,	// (0x00088987) main_mp3_pane_g8_ParamLimits

0x309a,	// (0x00088987) main_mp3_pane_g8

0xf743,	// (0x00095030) main_mp3_pane_g_ParamLimits

0x8182,	// (0x0008da6f) main_mp3_pane_t2

0x8192,	// (0x0008da7f) main_mp3_pane_t3

0x30b4,	// (0x000889a1) main_mp3_pane_t4

0x30c2,	// (0x000889af) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00095041) main_mp3_pane_t

0x30d0,	// (0x000889bd) mup_progress_pane_cp01

0x441e,	// (0x00089d0b) aid_zoom_text_secondary2

0x2e60,	// (0x0008874d) list_cale_ev2_pane

0x2e68,	// (0x00088755) scroll_pane_cp023_ParamLimits

0x829c,	// (0x0008db89) field_cale_ev2_pane_ParamLimits

0x829c,	// (0x0008db89) field_cale_ev2_pane

0x82d0,	// (0x0008dbbd) field_cale_ev2_pane_g1_ParamLimits

0x82d0,	// (0x0008dbbd) field_cale_ev2_pane_g1

0x82dc,	// (0x0008dbc9) field_cale_ev2_pane_g2_ParamLimits

0x82dc,	// (0x0008dbc9) field_cale_ev2_pane_g2

0x82f4,	// (0x0008dbe1) field_cale_ev2_pane_g3_ParamLimits

0x82f4,	// (0x0008dbe1) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00095062) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00095062) field_cale_ev2_pane_g

0x1450,	// (0x00086d3d) field_cale_ev2_pane_t1_ParamLimits

0x1450,	// (0x00086d3d) field_cale_ev2_pane_t1

0x1467,	// (0x00086d54) field_cale_ev2_pane_t2_ParamLimits

0x1467,	// (0x00086d54) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0009506b) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0009506b) field_cale_ev2_pane_t

0x7055,	// (0x0008c942) main_postcard_pane_g5_ParamLimits

0x7055,	// (0x0008c942) main_postcard_pane_g5

0x7063,	// (0x0008c950) main_postcard_pane_g6_ParamLimits

0x7063,	// (0x0008c950) main_postcard_pane_g6

0x5203,	// (0x0008aaf0) camera2_autofocus_pane_cp_ParamLimits

0x5203,	// (0x0008aaf0) camera2_autofocus_pane_cp

0x7721,	// (0x0008d00e) main_mup3_pane

0x832c,	// (0x0008dc19) main_mup3_pane_g1_ParamLimits

0x832c,	// (0x0008dc19) main_mup3_pane_g1

0x834d,	// (0x0008dc3a) main_mup3_pane_g2_ParamLimits

0x834d,	// (0x0008dc3a) main_mup3_pane_g2

0x83cc,	// (0x0008dcb9) main_mup3_pane_g3_ParamLimits

0x83cc,	// (0x0008dcb9) main_mup3_pane_g3

0x840f,	// (0x0008dcfc) main_mup3_pane_g4_ParamLimits

0x840f,	// (0x0008dcfc) main_mup3_pane_g4

0x8452,	// (0x0008dd3f) main_mup3_pane_g5_ParamLimits

0x8452,	// (0x0008dd3f) main_mup3_pane_g5

0x8497,	// (0x0008dd84) main_mup3_pane_g6_ParamLimits

0x8497,	// (0x0008dd84) main_mup3_pane_g6

0x30d8,	// (0x000889c5) main_mup3_pane_g7_ParamLimits

0x30d8,	// (0x000889c5) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0009507b) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0009507b) main_mup3_pane_g

0x850d,	// (0x0008ddfa) main_mup3_pane_t1_ParamLimits

0x850d,	// (0x0008ddfa) main_mup3_pane_t1

0x857c,	// (0x0008de69) main_mup3_pane_t2_ParamLimits

0x857c,	// (0x0008de69) main_mup3_pane_t2

0x8645,	// (0x0008df32) main_mup3_pane_t4_ParamLimits

0x8645,	// (0x0008df32) main_mup3_pane_t4

0x8699,	// (0x0008df86) main_mup3_pane_t5_ParamLimits

0x8699,	// (0x0008df86) main_mup3_pane_t5

0x8749,	// (0x0008e036) main_mup3_pane_t6_ParamLimits

0x8749,	// (0x0008e036) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0009508c) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0009508c) main_mup3_pane_t

0x87f5,	// (0x0008e0e2) mup3_progress_pane_ParamLimits

0x87f5,	// (0x0008e0e2) mup3_progress_pane

0x8869,	// (0x0008e156) popup_mup3_control_window_ParamLimits

0x8869,	// (0x0008e156) popup_mup3_control_window

0x30e6,	// (0x000889d3) popup_mup3_text_window

0x8882,	// (0x0008e16f) mup3_progress_pane_t1

0x88a1,	// (0x0008e18e) mup3_progress_pane_t2

0x30ee,	// (0x000889db) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00095099) mup3_progress_pane_t

0x310b,	// (0x000889f8) mup_progress_pane_cp03

0xca03,	// (0x000922f0) bg_tb_trans_pane_cp04

0x88c0,	// (0x0008e1ad) mup3_volume_pane

0x88c8,	// (0x0008e1b5) popup_mup3_control_window_g1

0x88d1,	// (0x0008e1be) mup3_volume_pane_g1

0x88da,	// (0x0008e1c7) mup3_volume_pane_g2

0x88e3,	// (0x0008e1d0) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000950a0) mup3_volume_pane_g

0xca03,	// (0x000922f0) bg_tb_trans_pane_cp03

0x311b,	// (0x00088a08) popup_mup3_text_window_g1

0x3123,	// (0x00088a10) popup_mup3_text_window_t1

0xe366,	// (0x00093c53) list_calc_item_pane_g1_ParamLimits

0x2b2e,	// (0x0008841b) mup_volume_pane_cp_g1

0x8260,	// (0x0008db4d) main_touch_calib_pane_t3

0x8274,	// (0x0008db61) main_touch_calib_pane_t4

0x8288,	// (0x0008db75) main_touch_calib_pane_t5

0x44f9,	// (0x00089de6) aid_cell_size_toolbar2

0x4501,	// (0x00089dee) aid_popup3_width_pane

0x4541,	// (0x00089e2e) aid_zoom_text_msg_primary

0x51ed,	// (0x0008aada) vorec_t7

0xe32a,	// (0x00093c17) bg_calc_paper_pane_g1_ParamLimits

0xe336,	// (0x00093c23) bg_calc_paper_pane_g2_ParamLimits

0xe342,	// (0x00093c2f) bg_calc_paper_pane_g3_ParamLimits

0xe34e,	// (0x00093c3b) bg_calc_paper_pane_g4_ParamLimits

0xe35a,	// (0x00093c47) bg_calc_paper_pane_g5_ParamLimits

0x4b7b,	// (0x0008a468) bg_calc_paper_pane_g6_ParamLimits

0x4b8c,	// (0x0008a479) bg_calc_paper_pane_g7_ParamLimits

0x4b9d,	// (0x0008a48a) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00094a53) bg_calc_paper_pane_g_ParamLimits

0x4bae,	// (0x0008a49b) calc_bg_paper_pane_g9_ParamLimits

0x52ec,	// (0x0008abd9) image_qvga_pane_ParamLimits

0x52ec,	// (0x0008abd9) image_qvga_pane

0xe207,	// (0x00093af4) bg_popup_sub_pane_cp04_ParamLimits

0x0090,	// (0x0008597d) popup_mup_playback_window_g1_ParamLimits

0x009c,	// (0x00085989) popup_mup_playback_window_t1_ParamLimits

0x00b1,	// (0x0008599e) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00094ddf) popup_mup_playback_window_t_ParamLimits

0x7d67,	// (0x0008d654) main_mup2_pane_g3_ParamLimits

0x7d67,	// (0x0008d654) main_mup2_pane_g3

0x55fc,	// (0x0008aee9) popup_toolbar_window_cp04

0x04a6,	// (0x00085d93) popup_call2_audio_second_window_g3_ParamLimits

0x04a6,	// (0x00085d93) popup_call2_audio_second_window_g3

0x08b0,	// (0x0008619d) popup_call2_audio_first_window_g4_ParamLimits

0x08b0,	// (0x0008619d) popup_call2_audio_first_window_g4

0x0f2f,	// (0x0008681c) popup_call2_audio_in_window_g4_ParamLimits

0x0f2f,	// (0x0008681c) popup_call2_audio_in_window_g4

0x7171,	// (0x0008ca5e) aid_area_sk_bg_cut_ParamLimits

0x7171,	// (0x0008ca5e) aid_area_sk_bg_cut

0x00c6,	// (0x000859b3) aid_area_sk_bg_cut_2_ParamLimits

0x00c6,	// (0x000859b3) aid_area_sk_bg_cut_2

0x80f3,	// (0x0008d9e0) aid_placing_details_win

0x80fb,	// (0x0008d9e8) aid_placing_details_win_2

0x2f56,	// (0x00088843) camera2_autofocus_pane_g1_ParamLimits

0x474e,	// (0x0008a03b) popup_fixed_preview_cale_window_ParamLimits

0x474e,	// (0x0008a03b) popup_fixed_preview_cale_window

0xef28,	// (0x00094815) navi_slider_pane_g3

0xef16,	// (0x00094803) navi_slider_pane_g4

0xef1f,	// (0x0009480c) navi_slider_pane_g5

0xef28,	// (0x00094815) navi_slider_pane_g6

0x69f1,	// (0x0008c2de) navi_slider_pane_g7

0xf049,	// (0x00094936) mup_scale_pane_g3

0xf052,	// (0x0009493f) mup_scale_pane_g4

0xf05b,	// (0x00094948) mup_scale_pane_g5

0x6e30,	// (0x0008c71d) mup_scale_pane_g6

0x6e39,	// (0x0008c726) mup_scale_pane_g7

0xef28,	// (0x00094815) cams2_slider_pane_g3

0x2bb0,	// (0x0008849d) cams2_slider_pane_g4

0x804b,	// (0x0008d938) cams2_slider_pane_g5

0xef28,	// (0x00094815) cams2_slider_pane_g6

0x8053,	// (0x0008d940) cams2_slider_pane_g7

0x2ddd,	// (0x000886ca) camera2_autofocus_pane_cp_g1

0x3131,	// (0x00088a1e) bg_popup_preview_window_pane_cp02_ParamLimits

0x3131,	// (0x00088a1e) bg_popup_preview_window_pane_cp02

0x313d,	// (0x00088a2a) list_fp_cale_pane_ParamLimits

0x313d,	// (0x00088a2a) list_fp_cale_pane

0x3149,	// (0x00088a36) popup_fixed_preview_cale_window_t1_ParamLimits

0x3149,	// (0x00088a36) popup_fixed_preview_cale_window_t1

0x88ec,	// (0x0008e1d9) popup_fixed_preview_cale_window_t2_ParamLimits

0x88ec,	// (0x0008e1d9) popup_fixed_preview_cale_window_t2

0x8901,	// (0x0008e1ee) popup_fixed_preview_cale_window_t3_ParamLimits

0x8901,	// (0x0008e1ee) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000950a7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000950a7) popup_fixed_preview_cale_window_t

0x8916,	// (0x0008e203) list_single_fp_cale_pane_ParamLimits

0x8916,	// (0x0008e203) list_single_fp_cale_pane

0x3167,	// (0x00088a54) list_single_fp_cale_pane_g1_ParamLimits

0x3167,	// (0x00088a54) list_single_fp_cale_pane_g1

0x3173,	// (0x00088a60) list_single_fp_cale_pane_g2_ParamLimits

0x3173,	// (0x00088a60) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000950ae) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000950ae) list_single_fp_cale_pane_g

0x318c,	// (0x00088a79) list_single_fp_cale_pane_t1_ParamLimits

0x318c,	// (0x00088a79) list_single_fp_cale_pane_t1

0x319e,	// (0x00088a8b) list_single_fp_cale_pane_t2_ParamLimits

0x319e,	// (0x00088a8b) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000950b5) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000950b5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47b8,	// (0x0008a0a5) main_dialer_pane

0x892b,	// (0x0008e218) aid_cell_size_keypad

0x8935,	// (0x0008e222) dialer_ne_pane

0x893f,	// (0x0008e22c) grid_dialer_command_1_pane

0x8947,	// (0x0008e234) grid_dialer_command_2_pane

0x894f,	// (0x0008e23c) grid_dialer_keypad_pane

0x8963,	// (0x0008e250) bg_popup_call_pane_cp06_ParamLimits

0x8963,	// (0x0008e250) bg_popup_call_pane_cp06

0x896f,	// (0x0008e25c) dialer_ne_clear_pane_ParamLimits

0x896f,	// (0x0008e25c) dialer_ne_clear_pane

0x31d1,	// (0x00088abe) dialer_ne_pane_g1

0x31d9,	// (0x00088ac6) dialer_ne_pane_t1_ParamLimits

0x31d9,	// (0x00088ac6) dialer_ne_pane_t1

0x897b,	// (0x0008e268) dialer_ne_pane_t2_ParamLimits

0x897b,	// (0x0008e268) dialer_ne_pane_t2

0x8998,	// (0x0008e285) dialer_ne_pane_t3_ParamLimits

0x8998,	// (0x0008e285) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000950ba) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000950ba) dialer_ne_pane_t

0x89bc,	// (0x0008e2a9) dialer_ne_pane_t3_copy1_ParamLimits

0x89bc,	// (0x0008e2a9) dialer_ne_pane_t3_copy1

0x89e0,	// (0x0008e2cd) cell_dialer_keypad_pane_ParamLimits

0x89e0,	// (0x0008e2cd) cell_dialer_keypad_pane

0x89f7,	// (0x0008e2e4) cell_dialer_command_1_pane_ParamLimits

0x89f7,	// (0x0008e2e4) cell_dialer_command_1_pane

0x8a0d,	// (0x0008e2fa) cell_dialer_command_2_pane_ParamLimits

0x8a0d,	// (0x0008e2fa) cell_dialer_command_2_pane

0x31eb,	// (0x00088ad8) bg_button_pane_cp02_ParamLimits

0x31eb,	// (0x00088ad8) bg_button_pane_cp02

0x8a1c,	// (0x0008e309) cell_dialer_keypad_pane_g1_ParamLimits

0x8a1c,	// (0x0008e309) cell_dialer_keypad_pane_g1

0x31eb,	// (0x00088ad8) bg_button_pane_cp03_ParamLimits

0x31eb,	// (0x00088ad8) bg_button_pane_cp03

0x8a31,	// (0x0008e31e) cell_dialer_command_1_pane_g1_ParamLimits

0x8a31,	// (0x0008e31e) cell_dialer_command_1_pane_g1

0x31f7,	// (0x00088ae4) bg_button_pane_cp04

0x8a45,	// (0x0008e332) cell_dialer_command_2_pane_g1

0xef05,	// (0x000947f2) bg_button_pane_cp06

0x31ff,	// (0x00088aec) dialer_ne_clear_pane_g1

0x6934,	// (0x0008c221) navi_pane_g2

0x6962,	// (0x0008c24f) navi_pane_g3

0x0002,

0xf3f5,	// (0x00094ce2) navi_pane_g

0x698d,	// (0x0008c27a) navi_pane_mv_g2

0x69b4,	// (0x0008c2a1) navi_pane_mv_g5

0x69bc,	// (0x0008c2a9) navi_pane_mv_t1

0xe31e,	// (0x00093c0b) main_clock2_pane

0x8a78,	// (0x0008e365) main_clock2_list_pane_ParamLimits

0x8a78,	// (0x0008e365) main_clock2_list_pane

0x8aa2,	// (0x0008e38f) main_clock2_pane_t1_ParamLimits

0x8aa2,	// (0x0008e38f) main_clock2_pane_t1

0x8ac6,	// (0x0008e3b3) main_clock2_pane_t2_ParamLimits

0x8ac6,	// (0x0008e3b3) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000950c1) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000950c1) main_clock2_pane_t

0x8b21,	// (0x0008e40e) popup_clock_analogue_window_cp03_ParamLimits

0x8b21,	// (0x0008e40e) popup_clock_analogue_window_cp03

0x8b41,	// (0x0008e42e) popup_clock_digital_window_cp02_ParamLimits

0x8b41,	// (0x0008e42e) popup_clock_digital_window_cp02

0x8bb6,	// (0x0008e4a3) main_clock2_list_single_pane_ParamLimits

0x8bb6,	// (0x0008e4a3) main_clock2_list_single_pane

0xef05,	// (0x000947f2) list_highlight_pane_cp05

0x3207,	// (0x00088af4) main_clock2_list_single_pane_t1

0x55fc,	// (0x0008aee9) popup_toolbar_window_cp04_ParamLimits

0x811d,	// (0x0008da0a) camera2_autofocus_pane_g2_ParamLimits

0x811d,	// (0x0008da0a) camera2_autofocus_pane_g2

0x8129,	// (0x0008da16) camera2_autofocus_pane_g3_ParamLimits

0x8129,	// (0x0008da16) camera2_autofocus_pane_g3

0x8135,	// (0x0008da22) camera2_autofocus_pane_g4_ParamLimits

0x8135,	// (0x0008da22) camera2_autofocus_pane_g4

0x8141,	// (0x0008da2e) camera2_autofocus_pane_g5_ParamLimits

0x8141,	// (0x0008da2e) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0009500a) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0009500a) camera2_autofocus_pane_g

0x830c,	// (0x0008dbf9) camera2_autofocus_pane_cp_g2

0x8314,	// (0x0008dc01) camera2_autofocus_pane_cp_g3

0x831c,	// (0x0008dc09) camera2_autofocus_pane_cp_g4

0x8324,	// (0x0008dc11) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00095070) camera2_autofocus_pane_cp_g

0x895b,	// (0x0008e248) popup_dialer_spcha_window

0xca03,	// (0x000922f0) bg_popup_sub_pane_cp07

0x3215,	// (0x00088b02) list_spcha_pane

0x321d,	// (0x00088b0a) list_single_spcha_pane_ParamLimits

0x321d,	// (0x00088b0a) list_single_spcha_pane

0xca03,	// (0x000922f0) list_highlight_pane_cp06

0x322e,	// (0x00088b1b) list_single_spcha_pane_t1

0x0cd9,	// (0x000865c6) popup_call2_audio_out_window_g4_ParamLimits

0x0cd9,	// (0x000865c6) popup_call2_audio_out_window_g4

0x47b8,	// (0x0008a0a5) main_imed2_pane

0x77bb,	// (0x0008d0a8) popup_imed_adjust2_window

0x77ce,	// (0x0008d0bb) popup_imed_trans_window_ParamLimits

0x77ce,	// (0x0008d0bb) popup_imed_trans_window

0x2c19,	// (0x00088506) popup_blid_sat_info2_window_t1

0x2c27,	// (0x00088514) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00094f9f) popup_blid_sat_info2_window_t

0x8c60,	// (0x0008e54d) aid_size_cell_colour_35

0x8c7a,	// (0x0008e567) aid_size_cell_colour_112

0x8c91,	// (0x0008e57e) aid_size_cell_effect

0xddb4,	// (0x000936a1) bg_tb_trans_pane_cp02

0xeaaa,	// (0x00094397) heading_imed_pane

0x8cab,	// (0x0008e598) listscroll_imed_pane

0x323c,	// (0x00088b29) heading_imed_pane_g1

0x3244,	// (0x00088b31) heading_imed_pane_t1

0x3252,	// (0x00088b3f) grid_imed_colour_35_pane_ParamLimits

0x3252,	// (0x00088b3f) grid_imed_colour_35_pane

0x8cb7,	// (0x0008e5a4) grid_imed_effect_pane

0x326d,	// (0x00088b5a) list_imed_aspect_pane

0x8cc7,	// (0x0008e5b4) scroll_pane_cp027_ParamLimits

0x8cc7,	// (0x0008e5b4) scroll_pane_cp027

0x8cd3,	// (0x0008e5c0) cell_imed_effect_pane_ParamLimits

0x8cd3,	// (0x0008e5c0) cell_imed_effect_pane

0x3275,	// (0x00088b62) cell_imed_colour_pane_ParamLimits

0x3275,	// (0x00088b62) cell_imed_colour_pane

0x32b7,	// (0x00088ba4) cell_imed_colour_pane_g1_ParamLimits

0x32b7,	// (0x00088ba4) cell_imed_colour_pane_g1

0x32c8,	// (0x00088bb5) hgihlgiht_grid_pane_cp016_ParamLimits

0x32c8,	// (0x00088bb5) hgihlgiht_grid_pane_cp016

0x8ceb,	// (0x0008e5d8) cell_imed_effect_pane_g1

0x8cf3,	// (0x0008e5e0) grid_highlight_pane_cp017

0x32d9,	// (0x00088bc6) list_imed_single_pane_ParamLimits

0x32d9,	// (0x00088bc6) list_imed_single_pane

0xca03,	// (0x000922f0) list_highlight_pane_cp07

0x32f0,	// (0x00088bdd) list_imed_aspect_pane_comp1_t1

0x1298,	// (0x00086b85) bg_tb_trans_pane_cp05

0x3312,	// (0x00088bff) popup_imed_adjust2_window_g1

0x3339,	// (0x00088c26) popup_imed_adjust2_window_t1

0x3351,	// (0x00088c3e) slider_imed_adjust_pane

0x3365,	// (0x00088c52) slider_imed_adjust_pane_g1

0x3375,	// (0x00088c62) slider_imed_adjust_pane_g2

0x3385,	// (0x00088c72) slider_imed_adjust_pane_g3

0x3396,	// (0x00088c83) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000950de) slider_imed_adjust_pane_g

0x8cfc,	// (0x0008e5e9) aid_size_cell_clipart2

0x8d08,	// (0x0008e5f5) grid_imed_clipart_pane

0x33a7,	// (0x00088c94) scroll_pane_cp031

0x8d12,	// (0x0008e5ff) cell_imed_clipart_pane_ParamLimits

0x8d12,	// (0x0008e5ff) cell_imed_clipart_pane

0x8d39,	// (0x0008e626) cell_imed_clipart_pane_g1

0xca03,	// (0x000922f0) grid_highlight_pane_cp014

0x8a84,	// (0x0008e371) main_clock2_pane_g1_ParamLimits

0x8a84,	// (0x0008e371) main_clock2_pane_g1

0x8b5d,	// (0x0008e44a) aid_call2_pane_cp10

0x8b6f,	// (0x0008e45c) aid_call_pane_cp10

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g1

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g2

0x8b81,	// (0x0008e46e) popup_clock_analogue_window_cp10_g3

0x8b81,	// (0x0008e46e) popup_clock_analogue_window_cp10_g4

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000950cc) popup_clock_analogue_window_cp10_g

0x8b97,	// (0x0008e484) popup_clock_analogue_window_cp10_t1

0x8bc8,	// (0x0008e4b5) clock_digital_number_pane_cp10_ParamLimits

0x8bc8,	// (0x0008e4b5) clock_digital_number_pane_cp10

0x8be0,	// (0x0008e4cd) clock_digital_number_pane_cp11_ParamLimits

0x8be0,	// (0x0008e4cd) clock_digital_number_pane_cp11

0x8bf8,	// (0x0008e4e5) clock_digital_number_pane_cp12_ParamLimits

0x8bf8,	// (0x0008e4e5) clock_digital_number_pane_cp12

0x8c10,	// (0x0008e4fd) clock_digital_number_pane_cp13_ParamLimits

0x8c10,	// (0x0008e4fd) clock_digital_number_pane_cp13

0x8c28,	// (0x0008e515) clock_digital_separator_pane_cp10_ParamLimits

0x8c28,	// (0x0008e515) clock_digital_separator_pane_cp10

0x8c40,	// (0x0008e52d) popup_clock_digital_window_cp02_t1_ParamLimits

0x8c40,	// (0x0008e52d) popup_clock_digital_window_cp02_t1

0xe1ff,	// (0x00093aec) clock_digital_number_pane_cp10_g1

0xe1ff,	// (0x00093aec) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x000950e7) clock_digital_number_pane_cp10_g

0xe1ff,	// (0x00093aec) clock_digital_separator_pane_cp10_g1

0xe1ff,	// (0x00093aec) clock_digital_separator_pane_g2_cp10

0xeed5,	// (0x000947c2) navi_pane_vded_g4

0xeede,	// (0x000947cb) navi_pane_vded_g5

0xeee7,	// (0x000947d4) navi_pane_vded_t1

0x47b8,	// (0x0008a0a5) main_vded_pane

0x8d42,	// (0x0008e62f) main_vded_pane_g1

0x8d4e,	// (0x0008e63b) main_vded_pane_g2

0x8d58,	// (0x0008e645) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x000950ec) main_vded_pane_g

0x8d62,	// (0x0008e64f) main_vded_pane_t1

0x8d70,	// (0x0008e65d) main_vded_pane_t2

0x0001,

0xf806,	// (0x000950f3) main_vded_pane_t

0x8d7e,	// (0x0008e66b) vded_slider_pane

0x8d88,	// (0x0008e675) vded_video_pane

0x33af,	// (0x00088c9c) vded_video_pane_g1

0x8d92,	// (0x0008e67f) vded_video_pane_g2

0x2ddd,	// (0x000886ca) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000950f8) vded_video_pane_g

0x33b9,	// (0x00088ca6) vded_slider_pane_g1

0x2b2e,	// (0x0008841b) vded_slider_pane_g2

0x33c2,	// (0x00088caf) vded_slider_pane_g3

0x33cb,	// (0x00088cb8) vded_slider_pane_g4

0x33d4,	// (0x00088cc1) vded_slider_pane_g5

0x0004,

0xf812,	// (0x000950ff) vded_slider_pane_g

0x885b,	// (0x0008e148) mup3_rocker_pane_ParamLimits

0x885b,	// (0x0008e148) mup3_rocker_pane

0x8d9b,	// (0x0008e688) mup3_control_keys_pane_g1

0x8da3,	// (0x0008e690) mup3_control_keys_pane_g2

0x8dab,	// (0x0008e698) mup3_control_keys_pane_g3

0x8db3,	// (0x0008e6a0) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0009510a) mup3_control_keys_pane_g

0x4776,	// (0x0008a063) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4776,	// (0x0008a063) popup_toolbar2_fixed_window_cp01

0x8875,	// (0x0008e162) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8875,	// (0x0008e162) popup_toolbar2_fixed_window_cp02

0x0618,	// (0x00085f05) popup_call2_audio_second_window_t4_ParamLimits

0x0618,	// (0x00085f05) popup_call2_audio_second_window_t4

0x0b46,	// (0x00086433) popup_call2_audio_first_window_t6_ParamLimits

0x0b46,	// (0x00086433) popup_call2_audio_first_window_t6

0x0ddc,	// (0x000866c9) popup_call2_audio_out_window_t6_ParamLimits

0x0ddc,	// (0x000866c9) popup_call2_audio_out_window_t6

0x47b8,	// (0x0008a0a5) main_vitu_pane

0x8dc3,	// (0x0008e6b0) aid_size_cell_itu_ParamLimits

0x8dc3,	// (0x0008e6b0) aid_size_cell_itu

0x8dd1,	// (0x0008e6be) bg_popup_window_pane_cp08_ParamLimits

0x8dd1,	// (0x0008e6be) bg_popup_window_pane_cp08

0x8ddf,	// (0x0008e6cc) field_vitu_entry_pane_ParamLimits

0x8ddf,	// (0x0008e6cc) field_vitu_entry_pane

0x8dee,	// (0x0008e6db) grid_vitu_function_pane_ParamLimits

0x8dee,	// (0x0008e6db) grid_vitu_function_pane

0x8dfe,	// (0x0008e6eb) grid_vitu_itu_pane_ParamLimits

0x8dfe,	// (0x0008e6eb) grid_vitu_itu_pane

0x8e0e,	// (0x0008e6fb) cell_vitu_itu_pane_ParamLimits

0x8e0e,	// (0x0008e6fb) cell_vitu_itu_pane

0x8e23,	// (0x0008e710) cell_vitu_function_pane_ParamLimits

0x8e23,	// (0x0008e710) cell_vitu_function_pane

0xddb4,	// (0x000936a1) bg_popup_sub_pane_cp08_ParamLimits

0xddb4,	// (0x000936a1) bg_popup_sub_pane_cp08

0x8e37,	// (0x0008e724) field_vitu_entry_pane_t1_ParamLimits

0x8e37,	// (0x0008e724) field_vitu_entry_pane_t1

0x33f5,	// (0x00088ce2) field_vitu_entry_pane_t2_ParamLimits

0x33f5,	// (0x00088ce2) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00095118) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00095118) field_vitu_entry_pane_t

0x3412,	// (0x00088cff) bg_button_pane_cp05_ParamLimits

0x3412,	// (0x00088cff) bg_button_pane_cp05

0x8e55,	// (0x0008e742) cell_vitu_itu_pane_g1

0x8e6d,	// (0x0008e75a) cell_vitu_itu_pane_t1_ParamLimits

0x8e6d,	// (0x0008e75a) cell_vitu_itu_pane_t1

0x8e7f,	// (0x0008e76c) cell_vitu_itu_pane_t2_ParamLimits

0x8e7f,	// (0x0008e76c) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0009511d) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0009511d) cell_vitu_itu_pane_t

0x3420,	// (0x00088d0d) bg_button_pane_cp07

0x8eb4,	// (0x0008e7a1) cell_vitu_function_pane_g1

0x4a1f,	// (0x0008a30c) main_calc_pane_g1

0x4535,	// (0x00089e22) aid_visual_content_pane

0x47b8,	// (0x0008a0a5) main_vradio_pane

0x8ebd,	// (0x0008e7aa) main_vradio_pane_g1_ParamLimits

0x8ebd,	// (0x0008e7aa) main_vradio_pane_g1

0x342a,	// (0x00088d17) main_vradio_pane_g2_ParamLimits

0x342a,	// (0x00088d17) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00095124) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00095124) main_vradio_pane_g

0x8ecd,	// (0x0008e7ba) main_vradio_pane_t1_ParamLimits

0x8ecd,	// (0x0008e7ba) main_vradio_pane_t1

0x8edf,	// (0x0008e7cc) main_vradio_pane_t2_ParamLimits

0x8edf,	// (0x0008e7cc) main_vradio_pane_t2

0x3437,	// (0x00088d24) main_vradio_pane_t3_ParamLimits

0x3437,	// (0x00088d24) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00095129) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00095129) main_vradio_pane_t

0x8ef1,	// (0x0008e7de) vradio_rocker_control_pane_ParamLimits

0x8ef1,	// (0x0008e7de) vradio_rocker_control_pane

0x8efd,	// (0x0008e7ea) vradio_station_info_pane_ParamLimits

0x8efd,	// (0x0008e7ea) vradio_station_info_pane

0x344b,	// (0x00088d38) vradio_frequency_info_pane_ParamLimits

0x344b,	// (0x00088d38) vradio_frequency_info_pane

0x2ddd,	// (0x000886ca) vradio_station_info_pane_g1

0x345a,	// (0x00088d47) vradio_station_info_pane_t1_ParamLimits

0x345a,	// (0x00088d47) vradio_station_info_pane_t1

0x347c,	// (0x00088d69) vradio_station_info_pane_t2_ParamLimits

0x347c,	// (0x00088d69) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00095130) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00095130) vradio_station_info_pane_t

0x348e,	// (0x00088d7b) vradio_tuning_pane

0x3496,	// (0x00088d83) vradio_rocker_control_pane_g1

0x349e,	// (0x00088d8b) vradio_rocker_control_pane_g2

0x34a6,	// (0x00088d93) vradio_rocker_control_pane_g3

0x34ae,	// (0x00088d9b) vradio_rocker_control_pane_g4

0x34b6,	// (0x00088da3) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00095135) vradio_rocker_control_pane_g

0x8f0c,	// (0x0008e7f9) vradio_frequency_info_pane_g1

0x34be,	// (0x00088dab) vradio_frequency_info_pane_t1_ParamLimits

0x34be,	// (0x00088dab) vradio_frequency_info_pane_t1

0x8f16,	// (0x0008e803) vradio_tuning_pane_g1

0x8f1f,	// (0x0008e80c) vradio_tuning_pane_t1

0x457e,	// (0x00089e6b) area_side_right_pane_ParamLimits

0x457e,	// (0x00089e6b) area_side_right_pane

0x125f,	// (0x00086b4c) status_small_pane_g1

0x1267,	// (0x00086b54) status_small_pane_g2

0x1270,	// (0x00086b5d) status_small_pane_g3

0x1279,	// (0x00086b66) status_small_pane_g4

0x0003,

0xf608,	// (0x00094ef5) status_small_pane_g

0x1282,	// (0x00086b6f) status_small_pane_t1

0x47b8,	// (0x0008a0a5) main_video3_pane

0x34d2,	// (0x00088dbf) cams_zoom_vslider_pane

0x34da,	// (0x00088dc7) image3_wide_pane_ParamLimits

0x34da,	// (0x00088dc7) image3_wide_pane

0x34f4,	// (0x00088de1) image3_wide_small_pane

0x3500,	// (0x00088ded) main_video3_pane_g1_ParamLimits

0x3500,	// (0x00088ded) main_video3_pane_g1

0x351c,	// (0x00088e09) main_video3_pane_g2_ParamLimits

0x351c,	// (0x00088e09) main_video3_pane_g2

0x0001,

0xf853,	// (0x00095140) main_video3_pane_g_ParamLimits

0xf853,	// (0x00095140) main_video3_pane_g

0x3538,	// (0x00088e25) main_video3_pane_t1_ParamLimits

0x3538,	// (0x00088e25) main_video3_pane_t1

0x3563,	// (0x00088e50) main_video3_pane_t2_ParamLimits

0x3563,	// (0x00088e50) main_video3_pane_t2

0x358e,	// (0x00088e7b) main_video3_pane_t3_ParamLimits

0x358e,	// (0x00088e7b) main_video3_pane_t3

0x0002,

0xf858,	// (0x00095145) main_video3_pane_t_ParamLimits

0xf858,	// (0x00095145) main_video3_pane_t

0x35bb,	// (0x00088ea8) cams_zoom_vslider_pane_g1

0x35c4,	// (0x00088eb1) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0009514c) cams_zoom_vslider_pane_g

0x35cc,	// (0x00088eb9) small_slider_vertical_pane

0x2ddd,	// (0x000886ca) small_slider_vertical_pane_g1

0x2ddd,	// (0x000886ca) small_slider_vertical_pane_g2

0x35d4,	// (0x00088ec1) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00095151) small_slider_vertical_pane_g

0x47b8,	// (0x0008a0a5) main_hwr_training_pane

0x35dd,	// (0x00088eca) hwr_training_instruct_pane_ParamLimits

0x35dd,	// (0x00088eca) hwr_training_instruct_pane

0x8f2e,	// (0x0008e81b) hwr_training_navi_pane_ParamLimits

0x8f2e,	// (0x0008e81b) hwr_training_navi_pane

0x8f48,	// (0x0008e835) hwr_training_write_pane_ParamLimits

0x8f48,	// (0x0008e835) hwr_training_write_pane

0xca03,	// (0x000922f0) bg_frame_shadow_pane

0x3614,	// (0x00088f01) hwr_training_write_pane_g1

0x361c,	// (0x00088f09) hwr_training_write_pane_g2

0x3624,	// (0x00088f11) hwr_training_write_pane_g3

0x362c,	// (0x00088f19) hwr_training_write_pane_g4

0x3634,	// (0x00088f21) hwr_training_write_pane_g5

0x363c,	// (0x00088f29) hwr_training_write_pane_g6

0x3644,	// (0x00088f31) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00095158) hwr_training_write_pane_g

0x8f80,	// (0x0008e86d) hwr_training_navi_pane_g1_ParamLimits

0x8f80,	// (0x0008e86d) hwr_training_navi_pane_g1

0x8f92,	// (0x0008e87f) hwr_training_navi_pane_g2_ParamLimits

0x8f92,	// (0x0008e87f) hwr_training_navi_pane_g2

0x8fa4,	// (0x0008e891) hwr_training_navi_pane_g3_ParamLimits

0x8fa4,	// (0x0008e891) hwr_training_navi_pane_g3

0x8fb4,	// (0x0008e8a1) hwr_training_navi_pane_g4_ParamLimits

0x8fb4,	// (0x0008e8a1) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00095167) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00095167) hwr_training_navi_pane_g

0x8fce,	// (0x0008e8bb) hwr_training_navi_pane_t1

0x8fdc,	// (0x0008e8c9) list_single_hwr_training_instruct_pane_ParamLimits

0x8fdc,	// (0x0008e8c9) list_single_hwr_training_instruct_pane

0xcd63,	// (0x00092650) list_single_hwr_training_instruct_pane_t1

0x2d1d,	// (0x0008860a) bg_frame_shadow_pane_g1

0xcd72,	// (0x0009265f) bg_frame_shadow_pane_g2

0xcd7a,	// (0x00092667) bg_frame_shadow_pane_g3

0xcd82,	// (0x0009266f) bg_frame_shadow_pane_g4

0xcd8a,	// (0x00092677) bg_frame_shadow_pane_g5

0xcd92,	// (0x0009267f) bg_frame_shadow_pane_g6

0xcd9a,	// (0x00092687) bg_frame_shadow_pane_g7

0xe3e9,	// (0x00093cd6) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00095172) bg_frame_shadow_pane_g

0x47b8,	// (0x0008a0a5) main_video_tele_dialer_pane

0x9012,	// (0x0008e8ff) aid_size_cell_video_keypad_ParamLimits

0x9012,	// (0x0008e8ff) aid_size_cell_video_keypad

0x9022,	// (0x0008e90f) grid_video_dialer_keypad_pane_ParamLimits

0x9022,	// (0x0008e90f) grid_video_dialer_keypad_pane

0x9054,	// (0x0008e941) video_down_pane_cp_ParamLimits

0x9054,	// (0x0008e941) video_down_pane_cp

0x907c,	// (0x0008e969) cell_video_dialer_keypad_pane_ParamLimits

0x907c,	// (0x0008e969) cell_video_dialer_keypad_pane

0xcda2,	// (0x0009268f) bg_button_pane_cp08_ParamLimits

0xcda2,	// (0x0009268f) bg_button_pane_cp08

0x9091,	// (0x0008e97e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9091,	// (0x0008e97e) cell_video_dialer_keypad_pane_g1

0x884f,	// (0x0008e13c) mup3_rocker2_pane_ParamLimits

0x884f,	// (0x0008e13c) mup3_rocker2_pane

0x2ddd,	// (0x000886ca) mup3_rocker2_pane_g1

0x772f,	// (0x0008d01c) main_dialer2_pane

0x47b8,	// (0x0008a0a5) main_mp4_pane

0x90d0,	// (0x0008e9bd) main_mp4_pane_g1_ParamLimits

0x90d0,	// (0x0008e9bd) main_mp4_pane_g1

0x90de,	// (0x0008e9cb) main_mp4_pane_g2_ParamLimits

0x90de,	// (0x0008e9cb) main_mp4_pane_g2

0x90ec,	// (0x0008e9d9) main_mp4_pane_g3_ParamLimits

0x90ec,	// (0x0008e9d9) main_mp4_pane_g3

0x9131,	// (0x0008ea1e) main_mp4_pane_g4_ParamLimits

0x9131,	// (0x0008ea1e) main_mp4_pane_g4

0x9159,	// (0x0008ea46) main_mp4_pane_g5_ParamLimits

0x9159,	// (0x0008ea46) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00095192) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00095192) main_mp4_pane_g

0x91a9,	// (0x0008ea96) main_mp4_pane_t1_ParamLimits

0x91a9,	// (0x0008ea96) main_mp4_pane_t1

0x9205,	// (0x0008eaf2) main_mp4_pane_t2_ParamLimits

0x9205,	// (0x0008eaf2) main_mp4_pane_t2

0xcdae,	// (0x0009269b) main_mp4_pane_t3_ParamLimits

0xcdae,	// (0x0009269b) main_mp4_pane_t3

0x9257,	// (0x0008eb44) main_mp4_pane_t4_ParamLimits

0x9257,	// (0x0008eb44) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0009519f) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0009519f) main_mp4_pane_t

0x929b,	// (0x0008eb88) mp4_progress_pane_ParamLimits

0x929b,	// (0x0008eb88) mp4_progress_pane

0x92e5,	// (0x0008ebd2) mp4_rocker_pane_ParamLimits

0x92e5,	// (0x0008ebd2) mp4_rocker_pane

0xcdd6,	// (0x000926c3) mp4_progress_pane_t1

0xcdef,	// (0x000926dc) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x000951a8) mp4_progress_pane_t

0xce08,	// (0x000926f5) mup_progress_pane_cp04

0xce14,	// (0x00092701) mp4_rocker_pane_g1

0x9305,	// (0x0008ebf2) aid_cell_size_keypad2_ParamLimits

0x9305,	// (0x0008ebf2) aid_cell_size_keypad2

0x9315,	// (0x0008ec02) dialer2_ne_pane_ParamLimits

0x9315,	// (0x0008ec02) dialer2_ne_pane

0x9323,	// (0x0008ec10) grid_dialer2_keypad_pane_ParamLimits

0x9323,	// (0x0008ec10) grid_dialer2_keypad_pane

0xce1e,	// (0x0009270b) bg_popup_call_pane_cp07_ParamLimits

0xce1e,	// (0x0009270b) bg_popup_call_pane_cp07

0x9333,	// (0x0008ec20) dialer2_ne_pane_t1_ParamLimits

0x9333,	// (0x0008ec20) dialer2_ne_pane_t1

0x9358,	// (0x0008ec45) cell_dialer2_keypad_pane_ParamLimits

0x9358,	// (0x0008ec45) cell_dialer2_keypad_pane

0xce3e,	// (0x0009272b) bg_button_pane_pane_cp04_ParamLimits

0xce3e,	// (0x0009272b) bg_button_pane_pane_cp04

0x936f,	// (0x0008ec5c) cell_dialer2_keypad_pane_g1_ParamLimits

0x936f,	// (0x0008ec5c) cell_dialer2_keypad_pane_g1

0x54be,	// (0x0008adab) aid_placing_vt_set_content_ParamLimits

0x54be,	// (0x0008adab) aid_placing_vt_set_content

0x54ea,	// (0x0008add7) aid_placing_vt_set_title_ParamLimits

0x54ea,	// (0x0008add7) aid_placing_vt_set_title

0x47b8,	// (0x0008a0a5) main_image3_pane

0x9409,	// (0x0008ecf6) area_side_right_pane_cp01_ParamLimits

0x9409,	// (0x0008ecf6) area_side_right_pane_cp01

0x9436,	// (0x0008ed23) main_image3_pane_g1_ParamLimits

0x9436,	// (0x0008ed23) main_image3_pane_g1

0x9444,	// (0x0008ed31) main_image3_pane_g2_ParamLimits

0x9444,	// (0x0008ed31) main_image3_pane_g2

0x945d,	// (0x0008ed4a) main_image3_pane_g3_ParamLimits

0x945d,	// (0x0008ed4a) main_image3_pane_g3

0x9476,	// (0x0008ed63) main_image3_pane_g4_ParamLimits

0x9476,	// (0x0008ed63) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000951b7) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000951b7) main_image3_pane_g

0x948f,	// (0x0008ed7c) main_image3_pane_t1_ParamLimits

0x948f,	// (0x0008ed7c) main_image3_pane_t1

0x94b4,	// (0x0008eda1) main_image3_pane_t2_ParamLimits

0x94b4,	// (0x0008eda1) main_image3_pane_t2

0x94d3,	// (0x0008edc0) main_image3_pane_t3_ParamLimits

0x94d3,	// (0x0008edc0) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000951c0) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000951c0) main_image3_pane_t

0x8dd1,	// (0x0008e6be) grid_sctrl_middle_pane_cp01_ParamLimits

0x8dd1,	// (0x0008e6be) grid_sctrl_middle_pane_cp01

0x9534,	// (0x0008ee21) cell_sctrl_middle_pane_cp01_ParamLimits

0x9534,	// (0x0008ee21) cell_sctrl_middle_pane_cp01

0x9545,	// (0x0008ee32) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9545,	// (0x0008ee32) cell_sctrl_middle_pane_cp01_g1

0x47b8,	// (0x0008a0a5) main_call4_pane

0x9552,	// (0x0008ee3f) aid_size_button_call4_ParamLimits

0x9552,	// (0x0008ee3f) aid_size_button_call4

0x9582,	// (0x0008ee6f) call4_windows_pane_ParamLimits

0x9582,	// (0x0008ee6f) call4_windows_pane

0x959c,	// (0x0008ee89) grid_call4_button_pane_ParamLimits

0x959c,	// (0x0008ee89) grid_call4_button_pane

0xce4a,	// (0x00092737) call4_windows_conf_pane

0xce5f,	// (0x0009274c) popup_call4_audio_first_window_ParamLimits

0xce5f,	// (0x0009274c) popup_call4_audio_first_window

0xceab,	// (0x00092798) popup_call4_audio_second_window_ParamLimits

0xceab,	// (0x00092798) popup_call4_audio_second_window

0xcebf,	// (0x000927ac) popup_call4_audio_wait_window_ParamLimits

0xcebf,	// (0x000927ac) popup_call4_audio_wait_window

0x95c0,	// (0x0008eead) cell_call4_button_pane_ParamLimits

0x95c0,	// (0x0008eead) cell_call4_button_pane

0x95e5,	// (0x0008eed2) bg_button_pane_cp09_ParamLimits

0x95e5,	// (0x0008eed2) bg_button_pane_cp09

0x95f1,	// (0x0008eede) cell_call4_button_pane_g1_ParamLimits

0x95f1,	// (0x0008eede) cell_call4_button_pane_g1

0x95fe,	// (0x0008eeeb) cell_call4_button_pane_t1_ParamLimits

0x95fe,	// (0x0008eeeb) cell_call4_button_pane_t1

0xcf07,	// (0x000927f4) popup_call4_audio_conf_window_ParamLimits

0xcf07,	// (0x000927f4) popup_call4_audio_conf_window

0x8882,	// (0x0008e16f) mup3_progress_pane_t1_ParamLimits

0x88a1,	// (0x0008e18e) mup3_progress_pane_t2_ParamLimits

0x30ee,	// (0x000889db) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00095099) mup3_progress_pane_t_ParamLimits

0x310b,	// (0x000889f8) mup_progress_pane_cp03_ParamLimits

0x8dbb,	// (0x0008e6a8) mup3_control_keys_pane_g4_copy1

0x92c9,	// (0x0008ebb6) mp4_rocker2_pane_ParamLimits

0x92c9,	// (0x0008ebb6) mp4_rocker2_pane

0xcf1b,	// (0x00092808) mp4_rocker2_pane_g1

0xcf23,	// (0x00092810) mp4_rocker2_pane_g2

0x9610,	// (0x0008eefd) mp4_rocker2_pane_g3

0x9618,	// (0x0008ef05) mp4_rocker2_pane_g4

0x9620,	// (0x0008ef0d) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000951c9) mp4_rocker2_pane_g

0x47b8,	// (0x0008a0a5) main_camera4_pane

0x47b8,	// (0x0008a0a5) main_video4_pane

0x9030,	// (0x0008e91d) main_video_tele_dialer_pane_t1_ParamLimits

0x9030,	// (0x0008e91d) main_video_tele_dialer_pane_t1

0x9042,	// (0x0008e92f) main_video_tele_dialer_pane_t2_ParamLimits

0x9042,	// (0x0008e92f) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00095183) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00095183) main_video_tele_dialer_pane_t

0x9640,	// (0x0008ef2d) cam4_autofocus_pane_ParamLimits

0x9640,	// (0x0008ef2d) cam4_autofocus_pane

0x965a,	// (0x0008ef47) cam4_image_uncrop_pane_ParamLimits

0x965a,	// (0x0008ef47) cam4_image_uncrop_pane

0x9671,	// (0x0008ef5e) cam4_indicators_pane_ParamLimits

0x9671,	// (0x0008ef5e) cam4_indicators_pane

0x968d,	// (0x0008ef7a) main_camera4_pane_g1_ParamLimits

0x968d,	// (0x0008ef7a) main_camera4_pane_g1

0x9699,	// (0x0008ef86) main_camera4_pane_g2_ParamLimits

0x9699,	// (0x0008ef86) main_camera4_pane_g2

0x9699,	// (0x0008ef86) main_camera4_pane_g3_ParamLimits

0x9699,	// (0x0008ef86) main_camera4_pane_g3

0x96a5,	// (0x0008ef92) main_camera4_pane_g4_ParamLimits

0x96a5,	// (0x0008ef92) main_camera4_pane_g4

0x96b1,	// (0x0008ef9e) main_camera4_pane_g5_ParamLimits

0x96b1,	// (0x0008ef9e) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x000951d4) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x000951d4) main_camera4_pane_g

0x96cb,	// (0x0008efb8) main_camera4_pane_t1_ParamLimits

0x96cb,	// (0x0008efb8) main_camera4_pane_t1

0x9713,	// (0x0008f000) bg_tb_trans_pane_cp06

0x9729,	// (0x0008f016) cam4_indicators_pane_g1

0x973a,	// (0x0008f027) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x000951ef) cam4_indicators_pane_g

0x9758,	// (0x0008f045) cam4_indicators_pane_t1

0x9782,	// (0x0008f06f) main_video4_pane_g1_ParamLimits

0x9782,	// (0x0008f06f) main_video4_pane_g1

0x978e,	// (0x0008f07b) main_video4_pane_g2_ParamLimits

0x978e,	// (0x0008f07b) main_video4_pane_g2

0x979a,	// (0x0008f087) main_video4_pane_g3_ParamLimits

0x979a,	// (0x0008f087) main_video4_pane_g3

0x97a6,	// (0x0008f093) main_video4_pane_g4_ParamLimits

0x97a6,	// (0x0008f093) main_video4_pane_g4

0x0004,

0xf909,	// (0x000951f6) main_video4_pane_g_ParamLimits

0xf909,	// (0x000951f6) main_video4_pane_g

0x97c6,	// (0x0008f0b3) vid4_indicators_pane_ParamLimits

0x97c6,	// (0x0008f0b3) vid4_indicators_pane

0x97e3,	// (0x0008f0d0) video4_image_uncrop_cif_pane_ParamLimits

0x97e3,	// (0x0008f0d0) video4_image_uncrop_cif_pane

0x97f2,	// (0x0008f0df) video4_image_uncrop_nhd_pane_ParamLimits

0x97f2,	// (0x0008f0df) video4_image_uncrop_nhd_pane

0x965a,	// (0x0008ef47) video4_image_uncrop_vga_pane_ParamLimits

0x965a,	// (0x0008ef47) video4_image_uncrop_vga_pane

0x7721,	// (0x0008d00e) bg_tb_trans_pane_cp07

0x9807,	// (0x0008f0f4) vid4_indicators_pane_g1

0x981b,	// (0x0008f108) vid4_indicators_pane_g2

0x982f,	// (0x0008f11c) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00095201) vid4_indicators_pane_g

0x985c,	// (0x0008f149) vid4_indicators_pane_t1

0x9873,	// (0x0008f160) cam4_autofocus_pane_g1

0x987b,	// (0x0008f168) cam4_autofocus_pane_g2

0x9883,	// (0x0008f170) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0009520c) cam4_autofocus_pane_g

0x988b,	// (0x0008f178) cam4_autofocus_pane_g3_copy1

0x9060,	// (0x0008e94d) video_down_pane_cp_t1

0x906e,	// (0x0008e95b) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00095188) video_down_pane_cp_t

0x479e,	// (0x0008a08b) popup_vitu2_window_ParamLimits

0x479e,	// (0x0008a08b) popup_vitu2_window

0x9893,	// (0x0008f180) aid_size_cell2_itu2_ParamLimits

0x9893,	// (0x0008f180) aid_size_cell2_itu2

0x98b5,	// (0x0008f1a2) aid_size_cell_itu2_ParamLimits

0x98b5,	// (0x0008f1a2) aid_size_cell_itu2

0x98f9,	// (0x0008f1e6) bg_popup_window_pane_cp09_ParamLimits

0x98f9,	// (0x0008f1e6) bg_popup_window_pane_cp09

0x9907,	// (0x0008f1f4) field_vitu2_entry_pane_ParamLimits

0x9907,	// (0x0008f1f4) field_vitu2_entry_pane

0x9927,	// (0x0008f214) grid_vitu2_function_pane_ParamLimits

0x9927,	// (0x0008f214) grid_vitu2_function_pane

0x996b,	// (0x0008f258) grid_vitu2_itu_pane_ParamLimits

0x996b,	// (0x0008f258) grid_vitu2_itu_pane

0x99e1,	// (0x0008f2ce) cell_vitu2_itu_pane_ParamLimits

0x99e1,	// (0x0008f2ce) cell_vitu2_itu_pane

0x99f6,	// (0x0008f2e3) cell_vitu2_function_pane_ParamLimits

0x99f6,	// (0x0008f2e3) cell_vitu2_function_pane

0xcf2b,	// (0x00092818) bg_popup_call_pane_cp08_ParamLimits

0xcf2b,	// (0x00092818) bg_popup_call_pane_cp08

0xcf44,	// (0x00092831) field_vitu2_entry_pane_g1

0xcf50,	// (0x0009283d) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00095213) field_vitu2_entry_pane_g

0x9a37,	// (0x0008f324) field_vitu2_entry_pane_t1_ParamLimits

0x9a37,	// (0x0008f324) field_vitu2_entry_pane_t1

0x147c,	// (0x00086d69) field_vitu2_entry_pane_t2_ParamLimits

0x147c,	// (0x00086d69) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0009521a) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0009521a) field_vitu2_entry_pane_t

0x9a67,	// (0x0008f354) bg_button_pane_cp010_ParamLimits

0x9a67,	// (0x0008f354) bg_button_pane_cp010

0x9a75,	// (0x0008f362) cell_vitu2_itu_pane_g1

0x9a93,	// (0x0008f380) cell_vitu2_itu_pane_t1_ParamLimits

0x9a93,	// (0x0008f380) cell_vitu2_itu_pane_t1

0x4426,	// (0x00089d13) cell_vitu2_itu_pane_t2_ParamLimits

0x4426,	// (0x00089d13) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00095224) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00095224) cell_vitu2_itu_pane_t

0x7721,	// (0x0008d00e) bg_button_pane_cp011

0x9ae5,	// (0x0008f3d2) cell_vitu2_function_pane_g1

0x47b8,	// (0x0008a0a5) main_myfav_hc_pane

0x9515,	// (0x0008ee02) popup_image3_note_pane_ParamLimits

0x9515,	// (0x0008ee02) popup_image3_note_pane

0x9523,	// (0x0008ee10) popup_image3_tool_bar_pane_ParamLimits

0x9523,	// (0x0008ee10) popup_image3_tool_bar_pane

0x4494,	// (0x00089d81) cell_vitu2_itu_pane_t3_ParamLimits

0x4494,	// (0x00089d81) cell_vitu2_itu_pane_t3

0xca03,	// (0x000922f0) bg_popup_trans_pane

0xcf72,	// (0x0009285f) grid_image3_tool_bar_pane

0xcf7c,	// (0x00092869) bg_popup_trans_pane_g1

0xe7ee,	// (0x000940db) bg_popup_trans_pane_g2

0xcf84,	// (0x00092871) bg_popup_trans_pane_g3

0xcf8c,	// (0x00092879) bg_popup_trans_pane_g4

0xcf94,	// (0x00092881) bg_popup_trans_pane_g5

0xcf9c,	// (0x00092889) bg_popup_trans_pane_g6

0xcfa4,	// (0x00092891) bg_popup_trans_pane_g7

0xcfac,	// (0x00092899) bg_popup_trans_pane_g8

0xe7ce,	// (0x000940bb) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0009522b) bg_popup_trans_pane_g

0xcfb4,	// (0x000928a1) cell_image3_tool_bar_pane_ParamLimits

0xcfb4,	// (0x000928a1) cell_image3_tool_bar_pane

0x2ddd,	// (0x000886ca) cell_image3_tool_bar_pane_g1

0xca03,	// (0x000922f0) bg_popup_trans_pane_cp1

0xcfc8,	// (0x000928b5) popup_image3_note_pane_t1

0xcfd6,	// (0x000928c3) popup_image3_note_pane_t2

0xcfe4,	// (0x000928d1) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0009523e) popup_image3_note_pane_t

0xcff2,	// (0x000928df) popup_image3_note_pane_t3_copy1

0x9af9,	// (0x0008f3e6) bg_myfav_hc_instruction_pane_ParamLimits

0x9af9,	// (0x0008f3e6) bg_myfav_hc_instruction_pane

0x9b11,	// (0x0008f3fe) cell_myfav_contact_pane_ParamLimits

0x9b11,	// (0x0008f3fe) cell_myfav_contact_pane

0x9b2b,	// (0x0008f418) cell_myfav_contact_pane_cp1_ParamLimits

0x9b2b,	// (0x0008f418) cell_myfav_contact_pane_cp1

0x9b43,	// (0x0008f430) cell_myfav_contact_pane_cp2_ParamLimits

0x9b43,	// (0x0008f430) cell_myfav_contact_pane_cp2

0x9b5b,	// (0x0008f448) cell_myfav_contact_pane_cp3_ParamLimits

0x9b5b,	// (0x0008f448) cell_myfav_contact_pane_cp3

0x9b72,	// (0x0008f45f) cell_myfav_contact_pane_cp4_ParamLimits

0x9b72,	// (0x0008f45f) cell_myfav_contact_pane_cp4

0x9b88,	// (0x0008f475) cell_myfav_contact_pane_cp5_ParamLimits

0x9b88,	// (0x0008f475) cell_myfav_contact_pane_cp5

0x9b9c,	// (0x0008f489) cell_myfav_contact_pane_cp6_ParamLimits

0x9b9c,	// (0x0008f489) cell_myfav_contact_pane_cp6

0x9bb0,	// (0x0008f49d) cell_myfav_contact_pane_cp7_ParamLimits

0x9bb0,	// (0x0008f49d) cell_myfav_contact_pane_cp7

0xd000,	// (0x000928ed) listscroll_gen_pane_cp05

0x9bc8,	// (0x0008f4b5) main_myfav_hc_pane_g1_ParamLimits

0x9bc8,	// (0x0008f4b5) main_myfav_hc_pane_g1

0x9be0,	// (0x0008f4cd) main_myfav_hc_pane_g2_ParamLimits

0x9be0,	// (0x0008f4cd) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00095245) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00095245) main_myfav_hc_pane_g

0x9c10,	// (0x0008f4fd) main_myfav_hc_pane_t1_ParamLimits

0x9c10,	// (0x0008f4fd) main_myfav_hc_pane_t1

0xd009,	// (0x000928f6) main_myfav_hc_pane_t2_ParamLimits

0xd009,	// (0x000928f6) main_myfav_hc_pane_t2

0xd01b,	// (0x00092908) main_myfav_hc_pane_t3_ParamLimits

0xd01b,	// (0x00092908) main_myfav_hc_pane_t3

0x9c27,	// (0x0008f514) main_myfav_hc_pane_t4_ParamLimits

0x9c27,	// (0x0008f514) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0009524c) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0009524c) main_myfav_hc_pane_t

0x2ddd,	// (0x000886ca) bg_myfav_hc_instruction_pane_g1

0xd02d,	// (0x0009291a) cell_myfav_contact_pane_g1_ParamLimits

0xd02d,	// (0x0009291a) cell_myfav_contact_pane_g1

0xd02d,	// (0x0009291a) cell_myfav_contact_pane_g2_ParamLimits

0xd02d,	// (0x0009291a) cell_myfav_contact_pane_g2

0xd039,	// (0x00092926) cell_myfav_contact_pane_g3_ParamLimits

0xd039,	// (0x00092926) cell_myfav_contact_pane_g3

0x30d8,	// (0x000889c5) cell_myfav_contact_pane_g4_ParamLimits

0x30d8,	// (0x000889c5) cell_myfav_contact_pane_g4

0xd046,	// (0x00092933) cell_myfav_contact_pane_g5_ParamLimits

0xd046,	// (0x00092933) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00095257) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00095257) cell_myfav_contact_pane_g

0x9bf8,	// (0x0008f4e5) main_myfav_hc_pane_g3_ParamLimits

0x9bf8,	// (0x0008f4e5) main_myfav_hc_pane_g3

0x46b1,	// (0x00089f9e) popup_adpt_find_window

0x9c51,	// (0x0008f53e) afind_page_pane_ParamLimits

0x9c51,	// (0x0008f53e) afind_page_pane

0x9c5e,	// (0x0008f54b) aid_size_cell_afind_ParamLimits

0x9c5e,	// (0x0008f54b) aid_size_cell_afind

0x9c78,	// (0x0008f565) bg_popup_sub_pane_cp09_ParamLimits

0x9c78,	// (0x0008f565) bg_popup_sub_pane_cp09

0x9c85,	// (0x0008f572) find_pane_cp01_ParamLimits

0x9c85,	// (0x0008f572) find_pane_cp01

0xd052,	// (0x0009293f) grid_afind_control_pane_ParamLimits

0xd052,	// (0x0009293f) grid_afind_control_pane

0x9c92,	// (0x0008f57f) grid_afind_pane_ParamLimits

0x9c92,	// (0x0008f57f) grid_afind_pane

0x9cae,	// (0x0008f59b) cell_afind_pane_ParamLimits

0x9cae,	// (0x0008f59b) cell_afind_pane

0x2ddd,	// (0x000886ca) afind_page_pane_g1

0x9cf6,	// (0x0008f5e3) afind_page_pane_g2

0x9cff,	// (0x0008f5ec) afind_page_pane_g3

0x0002,

0xf975,	// (0x00095262) afind_page_pane_g

0x9d08,	// (0x0008f5f5) afind_page_pane_t1

0xd066,	// (0x00092953) cell_afind_grid_control_pane_ParamLimits

0xd066,	// (0x00092953) cell_afind_grid_control_pane

0xce3e,	// (0x0009272b) bg_button_pane_cp69_ParamLimits

0xce3e,	// (0x0009272b) bg_button_pane_cp69

0x9d1f,	// (0x0008f60c) cell_afind_pane_g1_ParamLimits

0x9d1f,	// (0x0008f60c) cell_afind_pane_g1

0x9d2c,	// (0x0008f619) cell_afind_pane_t1_ParamLimits

0x9d2c,	// (0x0008f619) cell_afind_pane_t1

0xe529,	// (0x00093e16) bg_button_pane_cp72

0xd075,	// (0x00092962) cell_afind_grid_control_pane_g1

0x729c,	// (0x0008cb89) aid_image_placing_area_ParamLimits

0x729c,	// (0x0008cb89) aid_image_placing_area

0x33dd,	// (0x00088cca) field_vitu_entry_pane_g1_ParamLimits

0x33dd,	// (0x00088cca) field_vitu_entry_pane_g1

0x33e9,	// (0x00088cd6) field_vitu_entry_pane_g2_ParamLimits

0x33e9,	// (0x00088cd6) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00095113) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00095113) field_vitu_entry_pane_g

0x8e55,	// (0x0008e742) cell_vitu_itu_pane_g1_ParamLimits

0x8e97,	// (0x0008e784) cell_vitu_itu_pane_t3_ParamLimits

0x8e97,	// (0x0008e784) cell_vitu_itu_pane_t3

0xcdd6,	// (0x000926c3) mp4_progress_pane_t1_ParamLimits

0xcdef,	// (0x000926dc) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x000951a8) mp4_progress_pane_t_ParamLimits

0xce08,	// (0x000926f5) mup_progress_pane_cp04_ParamLimits

0x9c3b,	// (0x0008f528) main_myfav_hc_pane_t5_ParamLimits

0x9c3b,	// (0x0008f528) main_myfav_hc_pane_t5

0x4416,	// (0x00089d03) aid_zoom_text_primary

0x46b1,	// (0x00089f9e) popup_adpt_find_window_ParamLimits

0x7721,	// (0x0008d00e) main_cam_set_pane

0x967f,	// (0x0008ef6c) cam4_zoom_pane_ParamLimits

0x967f,	// (0x0008ef6c) cam4_zoom_pane

0x9d3e,	// (0x0008f62b) main_cam_set_pane_g1_ParamLimits

0x9d3e,	// (0x0008f62b) main_cam_set_pane_g1

0x9d4c,	// (0x0008f639) main_cam_set_pane_g2_ParamLimits

0x9d4c,	// (0x0008f639) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00095269) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00095269) main_cam_set_pane_g

0x9d58,	// (0x0008f645) main_cam_set_pane_t1_ParamLimits

0x9d58,	// (0x0008f645) main_cam_set_pane_t1

0x9d74,	// (0x0008f661) main_cset_listscroll_pane_ParamLimits

0x9d74,	// (0x0008f661) main_cset_listscroll_pane

0x9d9f,	// (0x0008f68c) main_cset_slider_pane_ParamLimits

0x9d9f,	// (0x0008f68c) main_cset_slider_pane

0xd086,	// (0x00092973) main_cset_list_pane_ParamLimits

0xd086,	// (0x00092973) main_cset_list_pane

0xd096,	// (0x00092983) scroll_pane_cp028

0x9dbe,	// (0x0008f6ab) aid_area_touch_slider

0x9dda,	// (0x0008f6c7) cset_slider_pane

0x9e04,	// (0x0008f6f1) main_cset_slider_pane_g1

0x9e19,	// (0x0008f706) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0009526e) main_cset_slider_pane_g

0xd0cf,	// (0x000929bc) main_cset_slider_pane_t1

0x9ee1,	// (0x0008f7ce) main_cset_slider_pane_t2

0x9efb,	// (0x0008f7e8) main_cset_slider_pane_t3

0x9f15,	// (0x0008f802) main_cset_slider_pane_t4

0x9f33,	// (0x0008f820) main_cset_slider_pane_t5

0x9f55,	// (0x0008f842) main_cset_slider_pane_t6

0x9f6c,	// (0x0008f859) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00095293) main_cset_slider_pane_t

0xa07a,	// (0x0008f967) cset_list_set_pane_ParamLimits

0xa07a,	// (0x0008f967) cset_list_set_pane

0xa097,	// (0x0008f984) aid_position_infowindow_above

0xa09f,	// (0x0008f98c) aid_position_infowindow_below

0xa0a7,	// (0x0008f994) cset_list_set_pane_g1_ParamLimits

0xa0a7,	// (0x0008f994) cset_list_set_pane_g1

0x159b,	// (0x00086e88) cset_list_set_pane_g3_ParamLimits

0x159b,	// (0x00086e88) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000952b2) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000952b2) cset_list_set_pane_g

0x15aa,	// (0x00086e97) cset_list_set_pane_t1_ParamLimits

0x15aa,	// (0x00086e97) cset_list_set_pane_t1

0xddb4,	// (0x000936a1) list_highlight_pane_cp021_ParamLimits

0xddb4,	// (0x000936a1) list_highlight_pane_cp021

0xf049,	// (0x00094936) cset_slider_pane_g1

0xf05b,	// (0x00094948) cset_slider_pane_g2

0xf052,	// (0x0009493f) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000952b7) cset_slider_pane_g

0xa0b3,	// (0x0008f9a0) aid_area_touch_cam4_zoom

0xa0bb,	// (0x0008f9a8) cam4_zoom_cont_pane

0xa0c3,	// (0x0008f9b0) cam4_zoom_pane_g1

0xa0cb,	// (0x0008f9b8) cam4_zoom_pane_g2

0xa0d3,	// (0x0008f9c0) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000952be) cam4_zoom_pane_g

0xa0db,	// (0x0008f9c8) cam4_zoom_cont_pane_g1

0xa0e4,	// (0x0008f9d1) cam4_zoom_cont_pane_g2

0xa0ed,	// (0x0008f9da) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000952c5) cam4_zoom_cont_pane_g

0x956c,	// (0x0008ee59) call4_image_pane_ParamLimits

0x956c,	// (0x0008ee59) call4_image_pane

0xce4a,	// (0x00092737) call4_windows_conf_pane_ParamLimits

0xce89,	// (0x00092776) popup_call4_audio_in_window_ParamLimits

0xce89,	// (0x00092776) popup_call4_audio_in_window

0xca03,	// (0x000922f0) bg_popup_call2_act_pane_cp02

0xceff,	// (0x000927ec) call4_list_conf_pane

0x2ddd,	// (0x000886ca) call4_image_pane_g1

0x2ddd,	// (0x000886ca) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00094fd9) call4_image_pane_g

0xd16f,	// (0x00092a5c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd16f,	// (0x00092a5c) list_single_graphic_popup_conf4_pane

0xca03,	// (0x000922f0) list_highlight_pane_cp022

0xd182,	// (0x00092a6f) list_single_graphic_popup_conf4_pane_g1

0xed2c,	// (0x00094619) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000952cc) list_single_graphic_popup_conf4_pane_g

0xd18a,	// (0x00092a77) list_single_graphic_popup_conf4_pane_t1

0x564e,	// (0x0008af3b) popup_vtel_slider_window_ParamLimits

0x564e,	// (0x0008af3b) popup_vtel_slider_window

0xce2c,	// (0x00092719) dialer2_ne_pane_t2_ParamLimits

0xce2c,	// (0x00092719) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x000951ad) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x000951ad) dialer2_ne_pane_t

0xddb4,	// (0x000936a1) bg_popup_sub_pane_cp010_ParamLimits

0xddb4,	// (0x000936a1) bg_popup_sub_pane_cp010

0xa0f6,	// (0x0008f9e3) popup_vtel_slider_window_g1_ParamLimits

0xa0f6,	// (0x0008f9e3) popup_vtel_slider_window_g1

0xa102,	// (0x0008f9ef) popup_vtel_slider_window_g2_ParamLimits

0xa102,	// (0x0008f9ef) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000952d1) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000952d1) popup_vtel_slider_window_g

0xa14a,	// (0x0008fa37) vtel_slider_pane_ParamLimits

0xa14a,	// (0x0008fa37) vtel_slider_pane

0xa159,	// (0x0008fa46) vtel_slider_pane_g1_ParamLimits

0xa159,	// (0x0008fa46) vtel_slider_pane_g1

0xa166,	// (0x0008fa53) vtel_slider_pane_g2_ParamLimits

0xa166,	// (0x0008fa53) vtel_slider_pane_g2

0xa173,	// (0x0008fa60) vtel_slider_pane_g3_ParamLimits

0xa173,	// (0x0008fa60) vtel_slider_pane_g3

0xa159,	// (0x0008fa46) vtel_slider_pane_g4_ParamLimits

0xa159,	// (0x0008fa46) vtel_slider_pane_g4

0xa180,	// (0x0008fa6d) vtel_slider_pane_g5_ParamLimits

0xa180,	// (0x0008fa6d) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000952da) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000952da) vtel_slider_pane_g

0x47b8,	// (0x0008a0a5) main_gallery2_pane

0x98db,	// (0x0008f1c8) aid_size_row_itut2_dropdow_list_ParamLimits

0x98db,	// (0x0008f1c8) aid_size_row_itut2_dropdow_list

0x9949,	// (0x0008f236) grid_vitu2_function_top_pane_ParamLimits

0x9949,	// (0x0008f236) grid_vitu2_function_top_pane

0x999f,	// (0x0008f28c) popup_vitu2_dropdown_list_window_ParamLimits

0x999f,	// (0x0008f28c) popup_vitu2_dropdown_list_window

0x99bf,	// (0x0008f2ac) popup_vitu2_match_list_window

0xa18d,	// (0x0008fa7a) cell_vitu2_function_top_pane_ParamLimits

0xa18d,	// (0x0008fa7a) cell_vitu2_function_top_pane

0xa1ad,	// (0x0008fa9a) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa1ad,	// (0x0008fa9a) cell_vitu2_function_top_pane_cp01

0xa1cb,	// (0x0008fab8) cell_vitu2_function_top_wide_pane_ParamLimits

0xa1cb,	// (0x0008fab8) cell_vitu2_function_top_wide_pane

0x7721,	// (0x0008d00e) bg_button_pane_cp012

0xa1e9,	// (0x0008fad6) cell_vitu2_function_top_pane_g1

0xa1f8,	// (0x0008fae5) bg_button_pane_cp013_ParamLimits

0xa1f8,	// (0x0008fae5) bg_button_pane_cp013

0xa214,	// (0x0008fb01) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa214,	// (0x0008fb01) cell_vitu2_function_top_wide_pane_g1

0x479e,	// (0x0008a08b) bg_popup_sub_pane_cp20

0xa22c,	// (0x0008fb19) list_vitu2_match_list_pane

0xcf7c,	// (0x00092869) bg_popup_sub_pane_cp20_g1

0xcf84,	// (0x00092871) bg_popup_sub_pane_cp20_g2

0xe7ee,	// (0x000940db) bg_popup_sub_pane_cp20_g3

0xcf8c,	// (0x00092879) bg_popup_sub_pane_cp20_g4

0xe7ce,	// (0x000940bb) bg_popup_sub_pane_cp20_g5

0xd1a0,	// (0x00092a8d) bg_popup_sub_pane_cp20_g6

0xcf9c,	// (0x00092889) bg_popup_sub_pane_cp20_g7

0xcfa4,	// (0x00092891) bg_popup_sub_pane_cp20_g8

0xcfac,	// (0x00092899) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000952e5) bg_popup_sub_pane_cp20_g

0xa244,	// (0x0008fb31) list_vitu2_match_list_item_pane_ParamLimits

0xa244,	// (0x0008fb31) list_vitu2_match_list_item_pane

0xa256,	// (0x0008fb43) list_vitu2_match_list_item_pane_t1

0x47b8,	// (0x0008a0a5) bg_popup_sub_pane_cp21

0xa293,	// (0x0008fb80) grid_vitu2_dropdown_list_pane

0xa29b,	// (0x0008fb88) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa29b,	// (0x0008fb88) cell_vitu2_dropdown_list_char_pane

0xa2bc,	// (0x0008fba9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa2bc,	// (0x0008fba9) cell_vitu2_dropdown_list_ctrl_pane

0xd1a8,	// (0x00092a95) cell_vitu2_dropdown_list_char_pane_g1

0xd1b1,	// (0x00092a9e) cell_vitu2_dropdown_list_char_pane_g2

0xd1ba,	// (0x00092aa7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00095302) cell_vitu2_dropdown_list_char_pane_g

0xa2e8,	// (0x0008fbd5) cell_vitu2_dropdown_list_char_pane_t1

0xa2f6,	// (0x0008fbe3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa2f6,	// (0x0008fbe3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa306,	// (0x0008fbf3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa306,	// (0x0008fbf3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa317,	// (0x0008fc04) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa317,	// (0x0008fc04) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa327,	// (0x0008fc14) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa327,	// (0x0008fc14) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9713,	// (0x0008f000) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9713,	// (0x0008f000) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00095309) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00095309) cell_vitu2_dropdown_list_ctrl_pane_g

0xa343,	// (0x0008fc30) aid_size_cell_gallery2_ParamLimits

0xa343,	// (0x0008fc30) aid_size_cell_gallery2

0xa351,	// (0x0008fc3e) grid_gallery2_pane_ParamLimits

0xa351,	// (0x0008fc3e) grid_gallery2_pane

0xa360,	// (0x0008fc4d) scroll_pane_cp029_ParamLimits

0xa360,	// (0x0008fc4d) scroll_pane_cp029

0xa36c,	// (0x0008fc59) cell_gallery2_pane_ParamLimits

0xa36c,	// (0x0008fc59) cell_gallery2_pane

0xd1c3,	// (0x00092ab0) cell_gallery2_pane_g2

0xa39d,	// (0x0008fc8a) cell_gallery2_pane_g3

0xd1cd,	// (0x00092aba) cell_gallery2_pane_g4

0xd1d5,	// (0x00092ac2) cell_gallery2_pane_g5

0xef05,	// (0x000947f2) grid_highlight_pane_cp10

0x99bf,	// (0x0008f2ac) popup_vitu2_match_list_window_ParamLimits

0x99d1,	// (0x0008f2be) popup_vitu2_query_window_ParamLimits

0x99d1,	// (0x0008f2be) popup_vitu2_query_window

0x47b8,	// (0x0008a0a5) bg_vitu2_candi_button_pane

0xd1a8,	// (0x00092a95) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1b1,	// (0x00092a9e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1ba,	// (0x00092aa7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa3a5,	// (0x0008fc92) bg_button_pane_cp015

0xa3b7,	// (0x0008fca4) bg_button_pane_cp016

0xa3ca,	// (0x0008fcb7) bg_button_pane_cp017

0x1298,	// (0x00086b85) bg_popup_sub_pane_cp22

0xd1dd,	// (0x00092aca) popup_vitu2_query_window_g1

0xa40f,	// (0x0008fcfc) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00095314) popup_vitu2_query_window_g

0xa42c,	// (0x0008fd19) popup_vitu2_query_window_t1_ParamLimits

0xa42c,	// (0x0008fd19) popup_vitu2_query_window_t1

0xa45f,	// (0x0008fd4c) popup_vitu2_query_window_t2_ParamLimits

0xa45f,	// (0x0008fd4c) popup_vitu2_query_window_t2

0xa471,	// (0x0008fd5e) popup_vitu2_query_window_t3_ParamLimits

0xa471,	// (0x0008fd5e) popup_vitu2_query_window_t3

0xa499,	// (0x0008fd86) popup_vitu2_query_window_t4_ParamLimits

0xa499,	// (0x0008fd86) popup_vitu2_query_window_t4

0xa4ba,	// (0x0008fda7) popup_vitu2_query_window_t5_ParamLimits

0xa4ba,	// (0x0008fda7) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0009531b) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0009531b) popup_vitu2_query_window_t

0xd07e,	// (0x0009296b) main_cset_text_pane

0x9dbe,	// (0x0008f6ab) aid_area_touch_slider_ParamLimits

0x9dda,	// (0x0008f6c7) cset_slider_pane_ParamLimits

0x9e04,	// (0x0008f6f1) main_cset_slider_pane_g1_ParamLimits

0x9e19,	// (0x0008f706) main_cset_slider_pane_g2_ParamLimits

0xd09f,	// (0x0009298c) main_cset_slider_pane_g3_ParamLimits

0xd09f,	// (0x0009298c) main_cset_slider_pane_g3

0x9e2e,	// (0x0008f71b) main_cset_slider_pane_g4_ParamLimits

0x9e2e,	// (0x0008f71b) main_cset_slider_pane_g4

0x9e3d,	// (0x0008f72a) main_cset_slider_pane_g5_ParamLimits

0x9e3d,	// (0x0008f72a) main_cset_slider_pane_g5

0x9e4b,	// (0x0008f738) main_cset_slider_pane_g6_ParamLimits

0x9e4b,	// (0x0008f738) main_cset_slider_pane_g6

0xf981,	// (0x0009526e) main_cset_slider_pane_g_ParamLimits

0xd0cf,	// (0x000929bc) main_cset_slider_pane_t1_ParamLimits

0x9ee1,	// (0x0008f7ce) main_cset_slider_pane_t2_ParamLimits

0x9efb,	// (0x0008f7e8) main_cset_slider_pane_t3_ParamLimits

0x9f15,	// (0x0008f802) main_cset_slider_pane_t4_ParamLimits

0x9f33,	// (0x0008f820) main_cset_slider_pane_t5_ParamLimits

0x9f55,	// (0x0008f842) main_cset_slider_pane_t6_ParamLimits

0x9f6c,	// (0x0008f859) main_cset_slider_pane_t7_ParamLimits

0x9f9a,	// (0x0008f887) main_cset_slider_pane_t8_ParamLimits

0x9f9a,	// (0x0008f887) main_cset_slider_pane_t8

0x9fc2,	// (0x0008f8af) main_cset_slider_pane_t9_ParamLimits

0x9fc2,	// (0x0008f8af) main_cset_slider_pane_t9

0x9fea,	// (0x0008f8d7) main_cset_slider_pane_t10_ParamLimits

0x9fea,	// (0x0008f8d7) main_cset_slider_pane_t10

0xa012,	// (0x0008f8ff) main_cset_slider_pane_t11_ParamLimits

0xa012,	// (0x0008f8ff) main_cset_slider_pane_t11

0xa03c,	// (0x0008f929) main_cset_slider_pane_t12_ParamLimits

0xa03c,	// (0x0008f929) main_cset_slider_pane_t12

0xa05b,	// (0x0008f948) main_cset_slider_pane_t13_ParamLimits

0xa05b,	// (0x0008f948) main_cset_slider_pane_t13

0xf9a6,	// (0x00095293) main_cset_slider_pane_t_ParamLimits

0xca03,	// (0x000922f0) bg_popup_sub_pane_cp011

0xd1e9,	// (0x00092ad6) main_cset_text_pane_g1

0xd1f1,	// (0x00092ade) main_cset_text_pane_t1

0xd1ff,	// (0x00092aec) main_cset_text_pane_t2

0xd20d,	// (0x00092afa) main_cset_text_pane_t3

0xd21b,	// (0x00092b08) main_cset_text_pane_t4

0xd229,	// (0x00092b16) main_cset_text_pane_t5

0xd237,	// (0x00092b24) main_cset_text_pane_t6

0xd245,	// (0x00092b32) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0009532a) main_cset_text_pane_t

0x47b8,	// (0x0008a0a5) main_cam4_burst_pane

0x47b8,	// (0x0008a0a5) main_cam5_pane

0xe911,	// (0x000941fe) bg_button_pane_cp019

0x9d16,	// (0x0008f603) bg_button_pane_cp020

0xd0ab,	// (0x00092998) main_cset_slider_pane_g7_ParamLimits

0xd0ab,	// (0x00092998) main_cset_slider_pane_g7

0xd0b7,	// (0x000929a4) main_cset_slider_pane_g8_ParamLimits

0xd0b7,	// (0x000929a4) main_cset_slider_pane_g8

0x9e61,	// (0x0008f74e) main_cset_slider_pane_g9_ParamLimits

0x9e61,	// (0x0008f74e) main_cset_slider_pane_g9

0x9e6d,	// (0x0008f75a) main_cset_slider_pane_g10_ParamLimits

0x9e6d,	// (0x0008f75a) main_cset_slider_pane_g10

0x9e79,	// (0x0008f766) main_cset_slider_pane_g11_ParamLimits

0x9e79,	// (0x0008f766) main_cset_slider_pane_g11

0x9e85,	// (0x0008f772) main_cset_slider_pane_g12_ParamLimits

0x9e85,	// (0x0008f772) main_cset_slider_pane_g12

0x9e91,	// (0x0008f77e) main_cset_slider_pane_g13_ParamLimits

0x9e91,	// (0x0008f77e) main_cset_slider_pane_g13

0x9e9f,	// (0x0008f78c) main_cset_slider_pane_g14_ParamLimits

0x9e9f,	// (0x0008f78c) main_cset_slider_pane_g14

0x9ead,	// (0x0008f79a) main_cset_slider_pane_g15_ParamLimits

0x9ead,	// (0x0008f79a) main_cset_slider_pane_g15

0xd0fd,	// (0x000929ea) main_cset_slider_pane_t14_ParamLimits

0xd0fd,	// (0x000929ea) main_cset_slider_pane_t14

0xd136,	// (0x00092a23) main_cset_slider_pane_t15_ParamLimits

0xd136,	// (0x00092a23) main_cset_slider_pane_t15

0xa531,	// (0x0008fe1e) aid_cam4_burst_size_cell_ParamLimits

0xa531,	// (0x0008fe1e) aid_cam4_burst_size_cell

0xa54d,	// (0x0008fe3a) grid_cam4_burst_pane_ParamLimits

0xa54d,	// (0x0008fe3a) grid_cam4_burst_pane

0xa57d,	// (0x0008fe6a) linegrid_cam4_burst_pane_ParamLimits

0xa57d,	// (0x0008fe6a) linegrid_cam4_burst_pane

0xa59f,	// (0x0008fe8c) scroll_pane_cp30_ParamLimits

0xa59f,	// (0x0008fe8c) scroll_pane_cp30

0xa5ab,	// (0x0008fe98) cell_cam4_burst_pane_ParamLimits

0xa5ab,	// (0x0008fe98) cell_cam4_burst_pane

0xd253,	// (0x00092b40) linegrid_cam4_burst_pane_g1_ParamLimits

0xd253,	// (0x00092b40) linegrid_cam4_burst_pane_g1

0xa5e7,	// (0x0008fed4) linegrid_cam4_burst_pane_g2_ParamLimits

0xa5e7,	// (0x0008fed4) linegrid_cam4_burst_pane_g2

0xd260,	// (0x00092b4d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd260,	// (0x00092b4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00095339) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00095339) linegrid_cam4_burst_pane_g

0xa5f8,	// (0x0008fee5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa5f8,	// (0x0008fee5) linegrid_cam4_burst_pane_g3_copy1

0xd26d,	// (0x00092b5a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd26d,	// (0x00092b5a) linegrid_cam4_burst_pane_g4

0xa612,	// (0x0008feff) linegrid_cam4_burst_pane_g5_ParamLimits

0xa612,	// (0x0008feff) linegrid_cam4_burst_pane_g5

0xa623,	// (0x0008ff10) linegrid_cam4_burst_pane_g6_ParamLimits

0xa623,	// (0x0008ff10) linegrid_cam4_burst_pane_g6

0xd27a,	// (0x00092b67) linegrid_cam4_burst_pane_g7_ParamLimits

0xd27a,	// (0x00092b67) linegrid_cam4_burst_pane_g7

0xa634,	// (0x0008ff21) cell_cam4_burst_pane_g1

0xd293,	// (0x00092b80) main_cam5_pane_t1_ParamLimits

0xd293,	// (0x00092b80) main_cam5_pane_t1

0xd2a5,	// (0x00092b92) main_cam5_pane_t2_ParamLimits

0xd2a5,	// (0x00092b92) main_cam5_pane_t2

0xd2b7,	// (0x00092ba4) main_cam5_pane_t3_ParamLimits

0xd2b7,	// (0x00092ba4) main_cam5_pane_t3

0xd2c9,	// (0x00092bb6) main_cam5_pane_t4_ParamLimits

0xd2c9,	// (0x00092bb6) main_cam5_pane_t4

0xd2df,	// (0x00092bcc) main_cam5_pane_t5_ParamLimits

0xd2df,	// (0x00092bcc) main_cam5_pane_t5

0xd2f1,	// (0x00092bde) main_cam5_pane_t6_ParamLimits

0xd2f1,	// (0x00092bde) main_cam5_pane_t6

0xd305,	// (0x00092bf2) main_cam5_pane_t7_ParamLimits

0xd305,	// (0x00092bf2) main_cam5_pane_t7

0xd317,	// (0x00092c04) main_cam5_pane_t8_ParamLimits

0xd317,	// (0x00092c04) main_cam5_pane_t8

0xd333,	// (0x00092c20) main_cam5_pane_t9_ParamLimits

0xd333,	// (0x00092c20) main_cam5_pane_t9

0xd345,	// (0x00092c32) main_cam5_pane_t10_ParamLimits

0xd345,	// (0x00092c32) main_cam5_pane_t10

0xd357,	// (0x00092c44) main_cam5_pane_t11_ParamLimits

0xd357,	// (0x00092c44) main_cam5_pane_t11

0xd369,	// (0x00092c56) main_cam5_pane_t12_ParamLimits

0xd369,	// (0x00092c56) main_cam5_pane_t12

0xd37e,	// (0x00092c6b) main_cam5_pane_t13_ParamLimits

0xd37e,	// (0x00092c6b) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00095345) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00095345) main_cam5_pane_t

0x4767,	// (0x0008a054) popup_scut_keymap_window_ParamLimits

0x4767,	// (0x0008a054) popup_scut_keymap_window

0xa647,	// (0x0008ff34) aid_size_cell_brow_shortcut

0xef05,	// (0x000947f2) bg_popup_window_pane_cp010

0xa653,	// (0x0008ff40) grid_scut_pane

0xa65f,	// (0x0008ff4c) cell_scut_pane_ParamLimits

0xa65f,	// (0x0008ff4c) cell_scut_pane

0xa676,	// (0x0008ff63) cell_scut_pane_g1

0xd39b,	// (0x00092c88) cell_scut_pane_t1

0xd3aa,	// (0x00092c97) cell_scut_pane_t2

0xa67f,	// (0x0008ff6c) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00095360) cell_scut_pane_t

0x84a5,	// (0x0008dd92) main_mup3_pane_g8_ParamLimits

0x84a5,	// (0x0008dd92) main_mup3_pane_g8

0x98e9,	// (0x0008f1d6) area_vitu2_query_pane_ParamLimits

0x98e9,	// (0x0008f1d6) area_vitu2_query_pane

0xa3dd,	// (0x0008fcca) input_focus_pane_cp08

0xd3b9,	// (0x00092ca6) area_vitu2_query_pane_g1

0xa68d,	// (0x0008ff7a) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00095367) area_vitu2_query_pane_g

0xa69e,	// (0x0008ff8b) area_vitu2_query_pane_t1_ParamLimits

0xa69e,	// (0x0008ff8b) area_vitu2_query_pane_t1

0xa6b2,	// (0x0008ff9f) area_vitu2_query_pane_t2_ParamLimits

0xa6b2,	// (0x0008ff9f) area_vitu2_query_pane_t2

0xa6c6,	// (0x0008ffb3) area_vitu2_query_pane_t3_ParamLimits

0xa6c6,	// (0x0008ffb3) area_vitu2_query_pane_t3

0x14bf,	// (0x00086dac) area_vitu2_query_pane_t4_ParamLimits

0x14bf,	// (0x00086dac) area_vitu2_query_pane_t4

0x14e7,	// (0x00086dd4) area_vitu2_query_pane_t5_ParamLimits

0x14e7,	// (0x00086dd4) area_vitu2_query_pane_t5

0x150f,	// (0x00086dfc) area_vitu2_query_pane_t6_ParamLimits

0x150f,	// (0x00086dfc) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0009536c) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0009536c) area_vitu2_query_pane_t

0xa6ee,	// (0x0008ffdb) bg_button_pane_cp018

0xa6fc,	// (0x0008ffe9) bg_button_pane_cp021

0xa708,	// (0x0008fff5) bg_button_pane_cp022

0xa719,	// (0x00090006) input_focus_pane_cp09

0x68ca,	// (0x0008c1b7) aid_size_touch_mv_arrow_left

0x68f5,	// (0x0008c1e2) aid_size_touch_mv_arrow_right

0x9ec5,	// (0x0008f7b2) main_cset_slider_pane_g16_ParamLimits

0x9ec5,	// (0x0008f7b2) main_cset_slider_pane_g16

0x9ed3,	// (0x0008f7c0) main_cset_slider_pane_g17_ParamLimits

0x9ed3,	// (0x0008f7c0) main_cset_slider_pane_g17

0xa634,	// (0x0008ff21) cell_cam4_burst_pane_g1_ParamLimits

0xca03,	// (0x000922f0) compa_mode_pane

0xa10e,	// (0x0008f9fb) popup_vtel_slider_window_g3_ParamLimits

0xa10e,	// (0x0008f9fb) popup_vtel_slider_window_g3

0xa122,	// (0x0008fa0f) popup_vtel_slider_window_g4_ParamLimits

0xa122,	// (0x0008fa0f) popup_vtel_slider_window_g4

0xa136,	// (0x0008fa23) popup_vtel_slider_window_t1_ParamLimits

0xa136,	// (0x0008fa23) popup_vtel_slider_window_t1

0x47b8,	// (0x0008a0a5) main_cl_pane

0x77bb,	// (0x0008d0a8) popup_imed_adjust2_window_ParamLimits

0x1298,	// (0x00086b85) bg_tb_trans_pane_cp05_ParamLimits

0x3312,	// (0x00088bff) popup_imed_adjust2_window_g1_ParamLimits

0x3321,	// (0x00088c0e) popup_imed_adjust2_window_g2_ParamLimits

0x3321,	// (0x00088c0e) popup_imed_adjust2_window_g2

0x332d,	// (0x00088c1a) popup_imed_adjust2_window_g3_ParamLimits

0x332d,	// (0x00088c1a) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000950d7) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000950d7) popup_imed_adjust2_window_g

0x3339,	// (0x00088c26) popup_imed_adjust2_window_t1_ParamLimits

0x3351,	// (0x00088c3e) slider_imed_adjust_pane_ParamLimits

0x3365,	// (0x00088c52) slider_imed_adjust_pane_g1_ParamLimits

0x3375,	// (0x00088c62) slider_imed_adjust_pane_g2_ParamLimits

0x3385,	// (0x00088c72) slider_imed_adjust_pane_g3_ParamLimits

0x3396,	// (0x00088c83) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000950de) slider_imed_adjust_pane_g_ParamLimits

0x9628,	// (0x0008ef15) aid_touch_area_cam4_ParamLimits

0x9628,	// (0x0008ef15) aid_touch_area_cam4

0x9638,	// (0x0008ef25) battery_pane_cp01

0x96bf,	// (0x0008efac) main_camera4_pane_g6_ParamLimits

0x96bf,	// (0x0008efac) main_camera4_pane_g6

0x96dd,	// (0x0008efca) main_camera4_pane_t2_ParamLimits

0x96dd,	// (0x0008efca) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x000951e1) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x000951e1) main_camera4_pane_t

0x9772,	// (0x0008f05f) aid_touch_area_vid4_ParamLimits

0x9772,	// (0x0008f05f) aid_touch_area_vid4

0x97b2,	// (0x0008f09f) main_video4_pane_g5_ParamLimits

0x97b2,	// (0x0008f09f) main_video4_pane_g5

0x97d4,	// (0x0008f0c1) vid4_progress_pane_ParamLimits

0x97d4,	// (0x0008f0c1) vid4_progress_pane

0xd0c3,	// (0x000929b0) main_cset_slider_pane_g18_ParamLimits

0xd0c3,	// (0x000929b0) main_cset_slider_pane_g18

0xd287,	// (0x00092b74) cell_cam4_burst_pane_g2_ParamLimits

0xd287,	// (0x00092b74) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00095340) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00095340) cell_cam4_burst_pane_g

0xa72a,	// (0x00090017) bg_cl_pane_ParamLimits

0xa72a,	// (0x00090017) bg_cl_pane

0xa736,	// (0x00090023) cl_header_pane_ParamLimits

0xa736,	// (0x00090023) cl_header_pane

0xa742,	// (0x0009002f) cl_listscroll_pane_ParamLimits

0xa742,	// (0x0009002f) cl_listscroll_pane

0xd3c5,	// (0x00092cb2) bg_cl_pane_g1

0xd3cd,	// (0x00092cba) bg_cl_pane_g2

0xd3d5,	// (0x00092cc2) bg_cl_pane_g3

0xd3dd,	// (0x00092cca) bg_cl_pane_g4

0xd3e5,	// (0x00092cd2) bg_cl_pane_g5

0xd3ed,	// (0x00092cda) bg_cl_pane_g6

0xd3f5,	// (0x00092ce2) bg_cl_pane_g7

0xd3fd,	// (0x00092cea) bg_cl_pane_g8

0xd405,	// (0x00092cf2) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0009537b) bg_cl_pane_g

0xa74e,	// (0x0009003b) aid_height_cl_leading_ParamLimits

0xa74e,	// (0x0009003b) aid_height_cl_leading

0xa75a,	// (0x00090047) aid_height_cl_text_ParamLimits

0xa75a,	// (0x00090047) aid_height_cl_text

0x8dd1,	// (0x0008e6be) bg_cl_header_pane_ParamLimits

0x8dd1,	// (0x0008e6be) bg_cl_header_pane

0xa772,	// (0x0009005f) cl_header_pane_g1_ParamLimits

0xa772,	// (0x0009005f) cl_header_pane_g1

0xa77f,	// (0x0009006c) cl_header_pane_t1_ParamLimits

0xa77f,	// (0x0009006c) cl_header_pane_t1

0xd40d,	// (0x00092cfa) cl_list_pane

0xd096,	// (0x00092983) hc_scroll_pane_cp01

0xe7ce,	// (0x000940bb) bg_cl_header_pane_g1

0xcf7c,	// (0x00092869) bg_cl_header_pane_g2

0xe7ee,	// (0x000940db) bg_cl_header_pane_g3

0xcf8c,	// (0x00092879) bg_cl_header_pane_g4

0xcf84,	// (0x00092871) bg_cl_header_pane_g5

0xd1a0,	// (0x00092a8d) bg_cl_header_pane_g6

0xcfa4,	// (0x00092891) bg_cl_header_pane_g7

0xcfac,	// (0x00092899) bg_cl_header_pane_g8

0xcf9c,	// (0x00092889) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0009538e) bg_cl_header_pane_g

0xa791,	// (0x0009007e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa791,	// (0x0009007e) hc_cl_list_double_graphic_heading_pane

0xa7a8,	// (0x00090095) hc_cl_list_single_graphic_pane_ParamLimits

0xa7a8,	// (0x00090095) hc_cl_list_single_graphic_pane

0xa7c8,	// (0x000900b5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa7c8,	// (0x000900b5) hc_cl_list_single_graphic_pane_g1

0xa7d4,	// (0x000900c1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa7d4,	// (0x000900c1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x000953a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x000953a1) hc_cl_list_single_graphic_pane_g

0xa7e8,	// (0x000900d5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa7e8,	// (0x000900d5) hc_cl_list_single_graphic_pane_t1

0xa7c8,	// (0x000900b5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa7c8,	// (0x000900b5) hc_cl_list_double_graphic_heading_pane_g1

0xa7fd,	// (0x000900ea) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa7fd,	// (0x000900ea) hc_cl_list_double_graphic_heading_pane_g2

0xa811,	// (0x000900fe) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa811,	// (0x000900fe) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x000953a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x000953a6) hc_cl_list_double_graphic_heading_pane_g

0xa825,	// (0x00090112) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa825,	// (0x00090112) hc_cl_list_double_graphic_heading_pane_t1

0xa83a,	// (0x00090127) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa83a,	// (0x00090127) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000953ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000953ad) hc_cl_list_double_graphic_heading_pane_t

0xa857,	// (0x00090144) vid4_progress_pane_g1

0xa869,	// (0x00090156) vid4_progress_pane_g2

0xea39,	// (0x00094326) vid4_progress_pane_g3

0xa87b,	// (0x00090168) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000953b2) vid4_progress_pane_g

0xa899,	// (0x00090186) vid4_progress_pane_t1

0xa8ae,	// (0x0009019b) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000953bd) vid4_progress_pane_t

0xa8d9,	// (0x000901c6) wait_bar_pane_cp07

0x2bce,	// (0x000884bb) blid_firmament_pane_ParamLimits

0x2c11,	// (0x000884fe) popup_blid_sat_info2_window_g1

0x2c35,	// (0x00088522) popup_blid_sat_info2_window_t3

0x2c43,	// (0x00088530) popup_blid_sat_info2_window_t4

0x2c51,	// (0x0008853e) popup_blid_sat_info2_window_t5

0x2c5f,	// (0x0008854c) popup_blid_sat_info2_window_t6

0x2c6f,	// (0x0008855c) popup_blid_sat_info2_window_t7

0x2c7d,	// (0x0008856a) popup_blid_sat_info2_window_t8

0x2c8b,	// (0x00088578) popup_blid_sat_info2_window_t9

0x2c99,	// (0x00088586) popup_blid_sat_info2_window_t10

0x2d5d,	// (0x0008864a) aid_firma_cardinal_ParamLimits

0x2d71,	// (0x0008865e) blid_firmament_pane_t1_ParamLimits

0x2d88,	// (0x00088675) blid_firmament_pane_t2_ParamLimits

0x2d9f,	// (0x0008868c) blid_firmament_pane_t3_ParamLimits

0x2db6,	// (0x000886a3) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00094fd0) blid_firmament_pane_t_ParamLimits

0x2dcd,	// (0x000886ba) blid_sat_info_pane_ParamLimits

0x7721,	// (0x0008d00e) main_cam_set_pane_ParamLimits

0x8c60,	// (0x0008e54d) aid_size_cell_colour_35_ParamLimits

0x8c7a,	// (0x0008e567) aid_size_cell_colour_112_ParamLimits

0x8c91,	// (0x0008e57e) aid_size_cell_effect_ParamLimits

0xddb4,	// (0x000936a1) bg_tb_trans_pane_cp02_ParamLimits

0xeaaa,	// (0x00094397) heading_imed_pane_ParamLimits

0x8cab,	// (0x0008e598) listscroll_imed_pane_ParamLimits

0x08c2,	// (0x000861af) popup_call2_audio_first_window_g5_ParamLimits

0x08c2,	// (0x000861af) popup_call2_audio_first_window_g5

0x93d7,	// (0x0008ecc4) aid_size_touch_image3_arrow_left_ParamLimits

0x93d7,	// (0x0008ecc4) aid_size_touch_image3_arrow_left

0x93ed,	// (0x0008ecda) aid_size_touch_image3_arrow_right_ParamLimits

0x93ed,	// (0x0008ecda) aid_size_touch_image3_arrow_right

0xa8c4,	// (0x000901b1) vid4_progress_pane_t3

0x8f60,	// (0x0008e84d) main_hwr_training_symbol_option_pane_ParamLimits

0x8f60,	// (0x0008e84d) main_hwr_training_symbol_option_pane

0x35ff,	// (0x00088eec) popup_hwr_training_preview_window_ParamLimits

0x35ff,	// (0x00088eec) popup_hwr_training_preview_window

0x8fc1,	// (0x0008e8ae) hwr_training_navi_pane_g5_ParamLimits

0x8fc1,	// (0x0008e8ae) hwr_training_navi_pane_g5

0xcf6a,	// (0x00092857) popup_char_count_window

0x479e,	// (0x0008a08b) bg_popup_sub_pane_cp20_ParamLimits

0xa22c,	// (0x0008fb19) list_vitu2_match_list_pane_ParamLimits

0xa238,	// (0x0008fb25) vitu2_page_scroll_pane_ParamLimits

0xa238,	// (0x0008fb25) vitu2_page_scroll_pane

0xd416,	// (0x00092d03) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd416,	// (0x00092d03) list_single_hwr_training_symbol_option_pane

0xd429,	// (0x00092d16) list_single_hwr_training_symbol_option_pane_g1

0xd431,	// (0x00092d1e) list_single_hwr_training_symbol_option_pane_t1

0xd43f,	// (0x00092d2c) bg_button_pane_cp023

0xd448,	// (0x00092d35) bg_button_pane_cp024

0xa8e9,	// (0x000901d6) vitu2_page_scroll_pane_g1

0xa8f1,	// (0x000901de) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000953c4) vitu2_page_scroll_pane_g

0xa8f9,	// (0x000901e6) vitu2_page_scroll_pane_t1

0x2b2e,	// (0x0008841b) popup_char_count_window_g1

0xd47b,	// (0x00092d68) popup_char_count_window_g2

0xd484,	// (0x00092d71) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000953c9) popup_char_count_window_g

0xd48d,	// (0x00092d7a) popup_char_count_window_t1

0x47b8,	// (0x0008a0a5) main_vded2_pane

0x32fe,	// (0x00088beb) aid_size_cell_imed_line

0x3308,	// (0x00088bf5) grid_imed_line_width_pane

0x9840,	// (0x0008f12d) vid4_indicators_pane_g4

0xd49b,	// (0x00092d88) cell_imed_line_width_pane_ParamLimits

0xd49b,	// (0x00092d88) cell_imed_line_width_pane

0xd4af,	// (0x00092d9c) cell_imed_line_width_pane_g1

0x301d,	// (0x0008890a) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000953d0) cell_imed_line_width_pane_g

0xa908,	// (0x000901f5) main_vded2_pane_g1_ParamLimits

0xa908,	// (0x000901f5) main_vded2_pane_g1

0xa915,	// (0x00090202) main_vded2_pane_g2_ParamLimits

0xa915,	// (0x00090202) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000953d5) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000953d5) main_vded2_pane_g

0xa923,	// (0x00090210) vded2_slider_pane_ParamLimits

0xa923,	// (0x00090210) vded2_slider_pane

0xa930,	// (0x0009021d) aid_size_touch_vded2_end

0xa93a,	// (0x00090227) aid_size_touch_vded2_playhead

0xd4b8,	// (0x00092da5) aid_size_touch_vded2_start

0xd4c0,	// (0x00092dad) vded2_slider_bg_pane

0xd4c9,	// (0x00092db6) vded2_slider_pane_g1

0xd4d2,	// (0x00092dbf) vded2_slider_pane_g2

0xa942,	// (0x0009022f) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000953da) vded2_slider_pane_g

0xd4da,	// (0x00092dc7) vded2_slider_bg_pane_g1

0xd4e3,	// (0x00092dd0) vded2_slider_bg_pane_g2

0xd4ec,	// (0x00092dd9) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x000953e1) vded2_slider_bg_pane_g

0x6ff9,	// (0x0008c8e6) aid_postcard_touch_down_pane_ParamLimits

0x6ff9,	// (0x0008c8e6) aid_postcard_touch_down_pane

0x7009,	// (0x0008c8f6) aid_postcard_touch_up_pane_ParamLimits

0x7009,	// (0x0008c8f6) aid_postcard_touch_up_pane

0x47b8,	// (0x0008a0a5) main_blid2_pane

0x774a,	// (0x0008d037) popup_blid2_search_window

0xca03,	// (0x000922f0) blid2_gps_pane

0xca03,	// (0x000922f0) blid2_navig_pane

0xca03,	// (0x000922f0) blid2_search_pane

0xca03,	// (0x000922f0) blid2_tripm_pane

0xa94b,	// (0x00090238) blid2_search_pane_g1_ParamLimits

0xa94b,	// (0x00090238) blid2_search_pane_g1

0xa95b,	// (0x00090248) blid2_search_pane_t1_ParamLimits

0xa95b,	// (0x00090248) blid2_search_pane_t1

0xa96d,	// (0x0009025a) aid_size_cell_blid2_gps_ParamLimits

0xa96d,	// (0x0009025a) aid_size_cell_blid2_gps

0xa97d,	// (0x0009026a) blid2_gps_pane_g1_ParamLimits

0xa97d,	// (0x0009026a) blid2_gps_pane_g1

0xa989,	// (0x00090276) grid_blid2_satellite_pane_ParamLimits

0xa989,	// (0x00090276) grid_blid2_satellite_pane

0xa999,	// (0x00090286) blid2_navig_pane_g1_ParamLimits

0xa999,	// (0x00090286) blid2_navig_pane_g1

0xa9a5,	// (0x00090292) blid2_navig_pane_t1_ParamLimits

0xa9a5,	// (0x00090292) blid2_navig_pane_t1

0xa9b7,	// (0x000902a4) blid2_navig_pane_t2_ParamLimits

0xa9b7,	// (0x000902a4) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x000953e8) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x000953e8) blid2_navig_pane_t

0xa9c9,	// (0x000902b6) blid2_navig_ring_pane_ParamLimits

0xa9c9,	// (0x000902b6) blid2_navig_ring_pane

0xa9d9,	// (0x000902c6) blid2_speed_pane_ParamLimits

0xa9d9,	// (0x000902c6) blid2_speed_pane

0xa9e5,	// (0x000902d2) blid2_tripm_pane_g1_ParamLimits

0xa9e5,	// (0x000902d2) blid2_tripm_pane_g1

0xa9f5,	// (0x000902e2) blid2_tripm_pane_g2_ParamLimits

0xa9f5,	// (0x000902e2) blid2_tripm_pane_g2

0xaa01,	// (0x000902ee) blid2_tripm_pane_g3_ParamLimits

0xaa01,	// (0x000902ee) blid2_tripm_pane_g3

0xaa0d,	// (0x000902fa) blid2_tripm_pane_g4_ParamLimits

0xaa0d,	// (0x000902fa) blid2_tripm_pane_g4

0xaa19,	// (0x00090306) blid2_tripm_pane_g5_ParamLimits

0xaa19,	// (0x00090306) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x000953ed) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x000953ed) blid2_tripm_pane_g

0xaa35,	// (0x00090322) blid2_tripm_pane_t1_ParamLimits

0xaa35,	// (0x00090322) blid2_tripm_pane_t1

0xaa49,	// (0x00090336) blid2_tripm_pane_t2_ParamLimits

0xaa49,	// (0x00090336) blid2_tripm_pane_t2

0xaa5d,	// (0x0009034a) blid2_tripm_pane_t3_ParamLimits

0xaa5d,	// (0x0009034a) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x000953fa) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x000953fa) blid2_tripm_pane_t

0xaa8f,	// (0x0009037c) cell_blid2_satellite_pane_ParamLimits

0xaa8f,	// (0x0009037c) cell_blid2_satellite_pane

0xaaa9,	// (0x00090396) cell_blid2_satellite_pane_g1

0xd4f5,	// (0x00092de2) cell_blid2_satellite_pane_t1

0x2ddd,	// (0x000886ca) blid2_speed_pane_g1

0xd503,	// (0x00092df0) blid2_speed_pane_t1

0xd511,	// (0x00092dfe) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00095403) blid2_speed_pane_t

0x2ddd,	// (0x000886ca) blid2_navig_ring_pane_g1

0xaab2,	// (0x0009039f) blid2_navig_ring_pane_g2

0xaaba,	// (0x000903a7) blid2_navig_ring_pane_g3

0xaac2,	// (0x000903af) blid2_navig_ring_pane_g4

0xaaca,	// (0x000903b7) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00095408) blid2_navig_ring_pane_g

0xca03,	// (0x000922f0) bg_popup_window_pane_cp011

0xd51f,	// (0x00092e0c) popup_blid2_search_window_g1

0xd527,	// (0x00092e14) popup_blid2_search_window_t1

0xd535,	// (0x00092e22) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00095413) popup_blid2_search_window_t

0xe6dd,	// (0x00093fca) main_browser_pane_g1

0xe31e,	// (0x00093c0b) main_browser_pane_ParamLimits

0x7721,	// (0x0008d00e) bg_button_pane_cp011_ParamLimits

0x9ae5,	// (0x0008f3d2) cell_vitu2_function_pane_g1_ParamLimits

0x1298,	// (0x00086b85) bg_popup_sub_pane_cp22_ParamLimits

0xa3dd,	// (0x0008fcca) input_focus_pane_cp08_ParamLimits

0xa3f4,	// (0x0008fce1) popup_vitu2_query_button_pane_ParamLimits

0xa3f4,	// (0x0008fce1) popup_vitu2_query_button_pane

0xa405,	// (0x0008fcf2) popup_vitu2_query_input_button_pane

0xd1dd,	// (0x00092aca) popup_vitu2_query_window_g1_ParamLimits

0xa40f,	// (0x0008fcfc) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00095314) popup_vitu2_query_window_g_ParamLimits

0xca03,	// (0x000922f0) bg_button_pane_cp026

0xaad2,	// (0x000903bf) popup_vitu2_query_input_button_pane_g1

0xca03,	// (0x000922f0) bg_button_pane_cp025

0xd543,	// (0x00092e30) popup_vitu2_query_button_pane_t1

0x81a2,	// (0x0008da8f) main_mp3_pane_t6

0x81b2,	// (0x0008da9f) popup_slider_window_cp01

0x9721,	// (0x0008f00e) cam4_battery_pane

0x97ff,	// (0x0008f0ec) cam4_battery_pane_cp02

0xa84f,	// (0x0009013c) cam4_battery_pane_cp01

0xa84f,	// (0x0009013c) cam4_battery_pane_cp03

0xce14,	// (0x00092701) cam4_battery_pane_g1

0x2ddd,	// (0x000886ca) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00095418) cam4_battery_pane_g

0x2ca7,	// (0x00088594) popup_blid_sat_info2_window_t11

0x68ca,	// (0x0008c1b7) aid_size_touch_mv_arrow_left_ParamLimits

0x68f5,	// (0x0008c1e2) aid_size_touch_mv_arrow_right_ParamLimits

0xee65,	// (0x00094752) navi_pane_g1_ParamLimits

0x6934,	// (0x0008c221) navi_pane_g2_ParamLimits

0x6962,	// (0x0008c24f) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00094ce2) navi_pane_g_ParamLimits

0x69bc,	// (0x0008c2a9) navi_pane_mv_t1_ParamLimits

0x8cb7,	// (0x0008e5a4) grid_imed_effect_pane_ParamLimits

0x550e,	// (0x0008adfb) aid_placing_vt_slider_lsc

0xe62c,	// (0x00093f19) aid_placing_vt_slider_prt

0xddb4,	// (0x000936a1) bg_tb_trans_pane_cp01_ParamLimits

0x2f64,	// (0x00088851) popup_image_details_window_g1_ParamLimits

0x2f77,	// (0x00088864) popup_image_details_window_g2_ParamLimits

0x2f8c,	// (0x00088879) popup_image_details_window_g3_ParamLimits

0x2f8c,	// (0x00088879) popup_image_details_window_g3

0xf728,	// (0x00095015) popup_image_details_window_g_ParamLimits

0x2fa0,	// (0x0008888d) popup_image_details_window_t1_ParamLimits

0x2fb2,	// (0x0008889f) popup_image_details_window_t2_ParamLimits

0x2fcb,	// (0x000888b8) popup_image_details_window_t3_ParamLimits

0x2fdf,	// (0x000888cc) popup_image_details_window_t4_ParamLimits

0x2ffa,	// (0x000888e7) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0009501c) popup_image_details_window_t_ParamLimits

0xa766,	// (0x00090053) cl_header_name_pane_ParamLimits

0xa766,	// (0x00090053) cl_header_name_pane

0xaada,	// (0x000903c7) cl_header_name_pane_t1_ParamLimits

0xaada,	// (0x000903c7) cl_header_name_pane_t1

0xaaf1,	// (0x000903de) cl_header_name_pane_t2_ParamLimits

0xaaf1,	// (0x000903de) cl_header_name_pane_t2

0xab1b,	// (0x00090408) cl_header_name_pane_t3_ParamLimits

0xab1b,	// (0x00090408) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0009541d) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0009541d) cl_header_name_pane_t

0x698d,	// (0x0008c27a) navi_pane_mv_g2_ParamLimits

0xcf44,	// (0x00092831) field_vitu2_entry_pane_g1_ParamLimits

0xcf50,	// (0x0009283d) field_vitu2_entry_pane_g2_ParamLimits

0xcf5c,	// (0x00092849) field_vitu2_entry_pane_g3_ParamLimits

0xcf5c,	// (0x00092849) field_vitu2_entry_pane_g3

0xf926,	// (0x00095213) field_vitu2_entry_pane_g_ParamLimits

0x9a75,	// (0x0008f362) cell_vitu2_itu_pane_g1_ParamLimits

0x9a85,	// (0x0008f372) cell_vitu2_itu_pane_g2_ParamLimits

0x9a85,	// (0x0008f372) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0009521f) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0009521f) cell_vitu2_itu_pane_g

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp05_ParamLimits

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp05

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp03

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp04

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp10_ParamLimits

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp10

0xa708,	// (0x0008fff5) bg_vkb2_func_pane_cp08

0xa6ee,	// (0x0008ffdb) bg_vkb2_func_pane_cp06

0xa6fc,	// (0x0008ffe9) bg_vkb2_func_pane_cp07

0xd451,	// (0x00092d3e) bg_vkb2_func_pane_cp11_ParamLimits

0xd451,	// (0x00092d3e) bg_vkb2_func_pane_cp11

0xd466,	// (0x00092d53) bg_vkb2_func_pane_cp12_ParamLimits

0xd466,	// (0x00092d53) bg_vkb2_func_pane_cp12

0xca03,	// (0x000922f0) bg_vkb2_func_pane_cp09

0xcf7c,	// (0x00092869) bg_vkb2_func_pane_g1

0xe7ee,	// (0x000940db) bg_vkb2_func_pane_g2

0xcf84,	// (0x00092871) bg_vkb2_func_pane_g3

0xcf8c,	// (0x00092879) bg_vkb2_func_pane_g4

0xd1a0,	// (0x00092a8d) bg_vkb2_func_pane_g5

0xcfa4,	// (0x00092891) bg_vkb2_func_pane_g6

0xcfac,	// (0x00092899) bg_vkb2_func_pane_g7

0xcf9c,	// (0x00092889) bg_vkb2_func_pane_g8

0xe7ce,	// (0x000940bb) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00095424) bg_vkb2_func_pane_g

0xaa27,	// (0x00090314) blid2_tripm_pane_g6_ParamLimits

0xaa27,	// (0x00090314) blid2_tripm_pane_g6

0xcdce,	// (0x000926bb) mp4_progress_pane_g1

0xaa83,	// (0x00090370) blid2_tripm_values_pane_ParamLimits

0xaa83,	// (0x00090370) blid2_tripm_values_pane

0xab40,	// (0x0009042d) blid2_tripm_values_pane_t1

0xab4e,	// (0x0009043b) blid2_tripm_values_pane_t2

0xab5c,	// (0x00090449) blid2_tripm_values_pane_t3

0xab6a,	// (0x00090457) blid2_tripm_values_pane_t4

0xab78,	// (0x00090465) blid2_tripm_values_pane_t5

0xab86,	// (0x00090473) blid2_tripm_values_pane_t6

0xab94,	// (0x00090481) blid2_tripm_values_pane_t7

0xaba2,	// (0x0009048f) blid2_tripm_values_pane_t8

0xabb0,	// (0x0009049d) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00095437) blid2_tripm_values_pane_t

0x554e,	// (0x0008ae3b) call_video_pane_t1_ParamLimits

0x556f,	// (0x0008ae5c) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00094b6b) call_video_pane_t_ParamLimits

0x6ef0,	// (0x0008c7dd) msg_header_pane_g1_ParamLimits

0xf08e,	// (0x0009497b) msg_header_pane_g2_ParamLimits

0xf08e,	// (0x0009497b) msg_header_pane_g2

0x0001,

0xf498,	// (0x00094d85) msg_header_pane_g_ParamLimits

0xf498,	// (0x00094d85) msg_header_pane_g

0xe31e,	// (0x00093c0b) main_clock2_pane_ParamLimits

0x8a4d,	// (0x0008e33a) grid_clock2_toolbar_pane_ParamLimits

0x8a4d,	// (0x0008e33a) grid_clock2_toolbar_pane

0x8a4d,	// (0x0008e33a) listscroll_clock2_pane_ParamLimits

0x8a4d,	// (0x0008e33a) listscroll_clock2_pane

0x8aea,	// (0x0008e3d7) main_clock2_pane_t3_ParamLimits

0x8aea,	// (0x0008e3d7) main_clock2_pane_t3

0x8afc,	// (0x0008e3e9) main_clock2_pane_t4_ParamLimits

0x8afc,	// (0x0008e3e9) main_clock2_pane_t4

0xd551,	// (0x00092e3e) cell_clock2_toolbar_pane

0xd559,	// (0x00092e46) cell_clock2_toolbar_pane_cp01

0xd559,	// (0x00092e46) cell_clock2_toolbar_pane_cp02

0xd561,	// (0x00092e4e) cell_clock2_toolbar_pane_cp03

0xd569,	// (0x00092e56) list_clock2_pane

0xedb8,	// (0x000946a5) scroll_pane_cp10

0xd571,	// (0x00092e5e) list_single_clock2_pane_ParamLimits

0xd571,	// (0x00092e5e) list_single_clock2_pane

0xef05,	// (0x000947f2) list_highlight_pane_cp08

0xd57e,	// (0x00092e6b) list_single_clock2_pane_t1

0xd58c,	// (0x00092e79) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0009544a) list_single_clock2_pane_t

0xca03,	// (0x000922f0) bg_button_pane_cp10

0xd59a,	// (0x00092e87) cell_clock2_toolbar_pane_g1

0x6f5b,	// (0x0008c848) aid_main_viewer_pane_g1_ParamLimits

0x6f5b,	// (0x0008c848) aid_main_viewer_pane_g1

0x6f67,	// (0x0008c854) aid_main_viewer_pane_g2_ParamLimits

0x6f67,	// (0x0008c854) aid_main_viewer_pane_g2

0x6f73,	// (0x0008c860) aid_main_viewer_pane_g3_ParamLimits

0x6f73,	// (0x0008c860) aid_main_viewer_pane_g3

0x6f84,	// (0x0008c871) aid_main_viewer_pane_g4_ParamLimits

0x6f84,	// (0x0008c871) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00094d96) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00094d96) aid_main_viewer_pane_g

0x7714,	// (0x0008d001) main_calc_pane_ParamLimits

0x772f,	// (0x0008d01c) main_dialer2_pane_ParamLimits

0x47b8,	// (0x0008a0a5) main_cam6_pane

0x47b8,	// (0x0008a0a5) main_vid6_pane

0x8a59,	// (0x0008e346) listscroll_gen_pane_cp06_ParamLimits

0x8a59,	// (0x0008e346) listscroll_gen_pane_cp06

0x8b0e,	// (0x0008e3fb) main_clock2_pane_t5_ParamLimits

0x8b0e,	// (0x0008e3fb) main_clock2_pane_t5

0x8b5d,	// (0x0008e44a) aid_call2_pane_cp10_ParamLimits

0x8b6f,	// (0x0008e45c) aid_call_pane_cp10_ParamLimits

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8b81,	// (0x0008e46e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8b81,	// (0x0008e46e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee3a,	// (0x00094727) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000950cc) popup_clock_analogue_window_cp10_g_ParamLimits

0x8b97,	// (0x0008e484) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9384,	// (0x0008ec71) cell_dialer2_keypad_pane_g2_ParamLimits

0x9384,	// (0x0008ec71) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x000951b2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x000951b2) cell_dialer2_keypad_pane_g

0x93a0,	// (0x0008ec8d) cell_dialer2_keypad_pane_t1

0x9dab,	// (0x0008f698) main_cset_text2_pane_ParamLimits

0x9dab,	// (0x0008f698) main_cset_text2_pane

0xd3b9,	// (0x00092ca6) area_vitu2_query_pane_g1_ParamLimits

0xa68d,	// (0x0008ff7a) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00095367) area_vitu2_query_pane_g_ParamLimits

0x1537,	// (0x00086e24) area_vitu2_query_pane_t7_ParamLimits

0x1537,	// (0x00086e24) area_vitu2_query_pane_t7

0xa6ee,	// (0x0008ffdb) bg_button_pane_cp018_ParamLimits

0xa6fc,	// (0x0008ffe9) bg_button_pane_cp021_ParamLimits

0xa708,	// (0x0008fff5) bg_button_pane_cp022_ParamLimits

0xa708,	// (0x0008fff5) bg_vkb2_func_pane_cp08_ParamLimits

0xa6ee,	// (0x0008ffdb) bg_vkb2_func_pane_cp06_ParamLimits

0xa6fc,	// (0x0008ffe9) bg_vkb2_func_pane_cp07_ParamLimits

0xa719,	// (0x00090006) input_focus_pane_cp09_ParamLimits

0xabbe,	// (0x000904ab) cam6_autofocus_pane_ParamLimits

0xabbe,	// (0x000904ab) cam6_autofocus_pane

0xabe0,	// (0x000904cd) cam6_image_uncrop_pane_ParamLimits

0xabe0,	// (0x000904cd) cam6_image_uncrop_pane

0xac0d,	// (0x000904fa) cam6_indi_pane_ParamLimits

0xac0d,	// (0x000904fa) cam6_indi_pane

0xac27,	// (0x00090514) cam6_mode_pane_ParamLimits

0xac27,	// (0x00090514) cam6_mode_pane

0xac3b,	// (0x00090528) cam6_timer_pane_ParamLimits

0xac3b,	// (0x00090528) cam6_timer_pane

0xac47,	// (0x00090534) cam6_zoom_pane_ParamLimits

0xac47,	// (0x00090534) cam6_zoom_pane

0xac5f,	// (0x0009054c) cam6_mode_pane_g1_ParamLimits

0xac5f,	// (0x0009054c) cam6_mode_pane_g1

0xac6b,	// (0x00090558) cam6_mode_pane_g2_ParamLimits

0xac6b,	// (0x00090558) cam6_mode_pane_g2

0xac77,	// (0x00090564) cam6_mode_pane_g3_ParamLimits

0xac77,	// (0x00090564) cam6_mode_pane_g3

0xac83,	// (0x00090570) cam6_mode_pane_g4_ParamLimits

0xac83,	// (0x00090570) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0009544f) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0009544f) cam6_mode_pane_g

0xce1e,	// (0x0009270b) bg_tb_trans_pane_cp08_ParamLimits

0xce1e,	// (0x0009270b) bg_tb_trans_pane_cp08

0xd5a2,	// (0x00092e8f) cam6_battery_pane_ParamLimits

0xd5a2,	// (0x00092e8f) cam6_battery_pane

0xd5b8,	// (0x00092ea5) cam6_indi_pane_g1_ParamLimits

0xd5b8,	// (0x00092ea5) cam6_indi_pane_g1

0xd5ca,	// (0x00092eb7) cam6_indi_pane_g2_ParamLimits

0xd5ca,	// (0x00092eb7) cam6_indi_pane_g2

0xd5dc,	// (0x00092ec9) cam6_indi_pane_g3_ParamLimits

0xd5dc,	// (0x00092ec9) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00095458) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00095458) cam6_indi_pane_g

0xd5ee,	// (0x00092edb) cam6_indi_pane_t1_ParamLimits

0xd5ee,	// (0x00092edb) cam6_indi_pane_t1

0x987b,	// (0x0008f168) cam6_autofocus_pane_g1

0x9873,	// (0x0008f160) cam6_autofocus_pane_g2

0x988b,	// (0x0008f178) cam6_autofocus_pane_g3

0x9883,	// (0x0008f170) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0009545f) cam6_autofocus_pane_g

0xd614,	// (0x00092f01) cam6_timer_pane_g1

0xd61c,	// (0x00092f09) cam6_timer_pane_t1

0xd62a,	// (0x00092f17) cam6_zoom_cont_pane

0xd632,	// (0x00092f1f) cam6_zoom_pane_g1

0xd63a,	// (0x00092f27) cam6_zoom_pane_g2

0xac8f,	// (0x0009057c) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00095468) cam6_zoom_pane_g

0x2ddd,	// (0x000886ca) cam6_battery_pane_g1

0x2ddd,	// (0x000886ca) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00094fd9) cam6_battery_pane_g

0xd642,	// (0x00092f2f) cam6_zoom_cont_pane_g1

0xd64b,	// (0x00092f38) cam6_zoom_cont_pane_g2

0xd654,	// (0x00092f41) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0009546f) cam6_zoom_cont_pane_g

0xacac,	// (0x00090599) cam6_mode_pane_cp_ParamLimits

0xacac,	// (0x00090599) cam6_mode_pane_cp

0xacc0,	// (0x000905ad) cam6_zoom_pane_cp_ParamLimits

0xacc0,	// (0x000905ad) cam6_zoom_pane_cp

0xacd8,	// (0x000905c5) vid6_image_uncrop_cif_pane_ParamLimits

0xacd8,	// (0x000905c5) vid6_image_uncrop_cif_pane

0xad04,	// (0x000905f1) vid6_image_uncrop_nhd_pane_ParamLimits

0xad04,	// (0x000905f1) vid6_image_uncrop_nhd_pane

0xad21,	// (0x0009060e) vid6_image_uncrop_vga_pane_ParamLimits

0xad21,	// (0x0009060e) vid6_image_uncrop_vga_pane

0xad40,	// (0x0009062d) vid6_image_uncrop_wvga_pane_ParamLimits

0xad40,	// (0x0009062d) vid6_image_uncrop_wvga_pane

0xad5d,	// (0x0009064a) vid6_indi_pane_ParamLimits

0xad5d,	// (0x0009064a) vid6_indi_pane

0xce1e,	// (0x0009270b) bg_tb_trans_pane_cp09_ParamLimits

0xce1e,	// (0x0009270b) bg_tb_trans_pane_cp09

0xd66c,	// (0x00092f59) cam6_battery_pane_cp_ParamLimits

0xd66c,	// (0x00092f59) cam6_battery_pane_cp

0xd678,	// (0x00092f65) vid6_indi_pane_g1_ParamLimits

0xd678,	// (0x00092f65) vid6_indi_pane_g1

0xd68a,	// (0x00092f77) vid6_indi_pane_g2_ParamLimits

0xd68a,	// (0x00092f77) vid6_indi_pane_g2

0xd69c,	// (0x00092f89) vid6_indi_pane_g3_ParamLimits

0xd69c,	// (0x00092f89) vid6_indi_pane_g3

0xd6b1,	// (0x00092f9e) vid6_indi_pane_g4_ParamLimits

0xd6b1,	// (0x00092f9e) vid6_indi_pane_g4

0xd6c6,	// (0x00092fb3) vid6_indi_pane_g5_ParamLimits

0xd6c6,	// (0x00092fb3) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00095476) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00095476) vid6_indi_pane_g

0xd6e0,	// (0x00092fcd) vid6_indi_pane_t1_ParamLimits

0xd6e0,	// (0x00092fcd) vid6_indi_pane_t1

0xd6f6,	// (0x00092fe3) vid6_indi_pane_t2_ParamLimits

0xd6f6,	// (0x00092fe3) vid6_indi_pane_t2

0xd71e,	// (0x0009300b) vid6_indi_pane_t3_ParamLimits

0xd71e,	// (0x0009300b) vid6_indi_pane_t3

0xd746,	// (0x00093033) vid6_indi_pane_t4_ParamLimits

0xd746,	// (0x00093033) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00095481) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00095481) vid6_indi_pane_t

0xd76a,	// (0x00093057) wait_bar_pane_cp08

0xad80,	// (0x0009066d) main_cset_text2_pane_t1_ParamLimits

0xad80,	// (0x0009066d) main_cset_text2_pane_t1

0xac97,	// (0x00090584) listscroll_gen_pane_cp06_t1_ParamLimits

0xac97,	// (0x00090584) listscroll_gen_pane_cp06_t1

0x47b8,	// (0x0008a0a5) main_cam6_set_pane

0x9713,	// (0x0008f000) bg_tb_trans_pane_cp06_ParamLimits

0x9729,	// (0x0008f016) cam4_indicators_pane_g1_ParamLimits

0x973a,	// (0x0008f027) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x000951ef) cam4_indicators_pane_g_ParamLimits

0x9758,	// (0x0008f045) cam4_indicators_pane_t1_ParamLimits

0x7721,	// (0x0008d00e) bg_tb_trans_pane_cp07_ParamLimits

0x9807,	// (0x0008f0f4) vid4_indicators_pane_g1_ParamLimits

0x981b,	// (0x0008f108) vid4_indicators_pane_g2_ParamLimits

0x982f,	// (0x0008f11c) vid4_indicators_pane_g3_ParamLimits

0x9840,	// (0x0008f12d) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00095201) vid4_indicators_pane_g_ParamLimits

0x985c,	// (0x0008f149) vid4_indicators_pane_t1_ParamLimits

0xa857,	// (0x00090144) vid4_progress_pane_g1_ParamLimits

0xa869,	// (0x00090156) vid4_progress_pane_g2_ParamLimits

0xea39,	// (0x00094326) vid4_progress_pane_g3_ParamLimits

0xa87b,	// (0x00090168) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000953b2) vid4_progress_pane_g_ParamLimits

0xa899,	// (0x00090186) vid4_progress_pane_t1_ParamLimits

0xa8ae,	// (0x0009019b) vid4_progress_pane_t2_ParamLimits

0xa8c4,	// (0x000901b1) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000953bd) vid4_progress_pane_t_ParamLimits

0xa8d9,	// (0x000901c6) wait_bar_pane_cp07_ParamLimits

0xadbe,	// (0x000906ab) main_cam6_set_pane_g2_ParamLimits

0xadbe,	// (0x000906ab) main_cam6_set_pane_g2

0xadca,	// (0x000906b7) main_cset6_listscroll_pane_ParamLimits

0xadca,	// (0x000906b7) main_cset6_listscroll_pane

0xadf5,	// (0x000906e2) main_cset6_slider_pane_ParamLimits

0xadf5,	// (0x000906e2) main_cset6_slider_pane

0xae01,	// (0x000906ee) main_cset6_text2_pane_ParamLimits

0xae01,	// (0x000906ee) main_cset6_text2_pane

0xd779,	// (0x00093066) main_cset6_text_pane

0xd781,	// (0x0009306e) main_cset_list_pane_copy1_ParamLimits

0xd781,	// (0x0009306e) main_cset_list_pane_copy1

0xd791,	// (0x0009307e) scroll_pane_cp028_copy1

0xae14,	// (0x00090701) cset_list_set_pane_copy1

0xae2e,	// (0x0009071b) aid_position_infowindow_above_copy1

0xae36,	// (0x00090723) aid_position_infowindow_below_copy1

0x2ac5,	// (0x000883b2) cset_list_set_pane_g1_copy1

0x159b,	// (0x00086e88) cset_list_set_pane_g3_copy1_ParamLimits

0x159b,	// (0x00086e88) cset_list_set_pane_g3_copy1

0x15aa,	// (0x00086e97) cset_list_set_pane_t1_copy1_ParamLimits

0x15aa,	// (0x00086e97) cset_list_set_pane_t1_copy1

0xddb4,	// (0x000936a1) list_highlight_pane_cp021_copy1_ParamLimits

0xddb4,	// (0x000936a1) list_highlight_pane_cp021_copy1

0xd79a,	// (0x00093087) cset6_slider_pane_ParamLimits

0xd79a,	// (0x00093087) cset6_slider_pane

0xd7c6,	// (0x000930b3) main_cset6_slider_pane_g1_ParamLimits

0xd7c6,	// (0x000930b3) main_cset6_slider_pane_g1

0xae3e,	// (0x0009072b) main_cset6_slider_pane_g2_ParamLimits

0xae3e,	// (0x0009072b) main_cset6_slider_pane_g2

0xd0ab,	// (0x00092998) main_cset6_slider_pane_g3_ParamLimits

0xd0ab,	// (0x00092998) main_cset6_slider_pane_g3

0xae66,	// (0x00090753) main_cset6_slider_pane_g4_ParamLimits

0xae66,	// (0x00090753) main_cset6_slider_pane_g4

0xae72,	// (0x0009075f) main_cset6_slider_pane_g5_ParamLimits

0xae72,	// (0x0009075f) main_cset6_slider_pane_g5

0xd0ab,	// (0x00092998) main_cset6_slider_pane_g7_ParamLimits

0xd0ab,	// (0x00092998) main_cset6_slider_pane_g7

0xd0b7,	// (0x000929a4) main_cset6_slider_pane_g8_ParamLimits

0xd0b7,	// (0x000929a4) main_cset6_slider_pane_g8

0xae80,	// (0x0009076d) main_cset6_slider_pane_g9_ParamLimits

0xae80,	// (0x0009076d) main_cset6_slider_pane_g9

0xae8c,	// (0x00090779) main_cset6_slider_pane_g10_ParamLimits

0xae8c,	// (0x00090779) main_cset6_slider_pane_g10

0xae66,	// (0x00090753) main_cset6_slider_pane_g11_ParamLimits

0xae66,	// (0x00090753) main_cset6_slider_pane_g11

0xae98,	// (0x00090785) main_cset6_slider_pane_g12_ParamLimits

0xae98,	// (0x00090785) main_cset6_slider_pane_g12

0xaea4,	// (0x00090791) main_cset6_slider_pane_g13_ParamLimits

0xaea4,	// (0x00090791) main_cset6_slider_pane_g13

0xaeb2,	// (0x0009079f) main_cset6_slider_pane_g14_ParamLimits

0xaeb2,	// (0x0009079f) main_cset6_slider_pane_g14

0xaec0,	// (0x000907ad) main_cset6_slider_pane_g15_ParamLimits

0xaec0,	// (0x000907ad) main_cset6_slider_pane_g15

0xae72,	// (0x0009075f) main_cset6_slider_pane_g16_ParamLimits

0xae72,	// (0x0009075f) main_cset6_slider_pane_g16

0xaed8,	// (0x000907c5) main_cset6_slider_pane_g17_ParamLimits

0xaed8,	// (0x000907c5) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0009548a) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0009548a) main_cset6_slider_pane_g

0xd7ee,	// (0x000930db) main_cset6_slider_pane_t1_ParamLimits

0xd7ee,	// (0x000930db) main_cset6_slider_pane_t1

0xaee6,	// (0x000907d3) main_cset6_slider_pane_t2_ParamLimits

0xaee6,	// (0x000907d3) main_cset6_slider_pane_t2

0xaf11,	// (0x000907fe) main_cset6_slider_pane_t3_ParamLimits

0xaf11,	// (0x000907fe) main_cset6_slider_pane_t3

0xaf3c,	// (0x00090829) main_cset6_slider_pane_t4_ParamLimits

0xaf3c,	// (0x00090829) main_cset6_slider_pane_t4

0xaf69,	// (0x00090856) main_cset6_slider_pane_t5_ParamLimits

0xaf69,	// (0x00090856) main_cset6_slider_pane_t5

0xd82f,	// (0x0009311c) main_cset6_slider_pane_t7_ParamLimits

0xd82f,	// (0x0009311c) main_cset6_slider_pane_t7

0xaf96,	// (0x00090883) main_cset6_slider_pane_t8_ParamLimits

0xaf96,	// (0x00090883) main_cset6_slider_pane_t8

0xafba,	// (0x000908a7) main_cset6_slider_pane_t9_ParamLimits

0xafba,	// (0x000908a7) main_cset6_slider_pane_t9

0xafde,	// (0x000908cb) main_cset6_slider_pane_t10_ParamLimits

0xafde,	// (0x000908cb) main_cset6_slider_pane_t10

0xb002,	// (0x000908ef) main_cset6_slider_pane_t11_ParamLimits

0xb002,	// (0x000908ef) main_cset6_slider_pane_t11

0xd865,	// (0x00093152) main_cset6_slider_pane_t14_ParamLimits

0xd865,	// (0x00093152) main_cset6_slider_pane_t14

0xd89e,	// (0x0009318b) main_cset6_slider_pane_t15_ParamLimits

0xd89e,	// (0x0009318b) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x000954af) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x000954af) main_cset6_slider_pane_t

0xd8d7,	// (0x000931c4) cset_slider_pane_g1_copy1

0xd8e0,	// (0x000931cd) cset_slider_pane_g2_copy1

0xd8e9,	// (0x000931d6) cset_slider_pane_g3_copy1

0xca03,	// (0x000922f0) bg_popup_sub_pane_cp011_copy1

0xd8f2,	// (0x000931df) main_cset_text_pane_g1_copy1

0xd1f1,	// (0x00092ade) main_cset_text_pane_t1_copy1

0xd1ff,	// (0x00092aec) main_cset_text_pane_t2_copy1

0xd20d,	// (0x00092afa) main_cset_text_pane_t3_copy1

0xd21b,	// (0x00092b08) main_cset_text_pane_t4_copy1

0xd229,	// (0x00092b16) main_cset_text_pane_t5_copy1

0xd8fa,	// (0x000931e7) main_cset_text_pane_t6_copy1

0xd908,	// (0x000931f5) main_cset_text_pane_t7_copy1

0xb028,	// (0x00090915) main_cset_text2_pane_t1_copy1

0x7721,	// (0x0008d00e) main_ncimui_pane

0x7780,	// (0x0008d06d) popup_query_ncimui_window_ParamLimits

0x7780,	// (0x0008d06d) popup_query_ncimui_window

0x1444,	// (0x00086d31) field_cale_ev2_pane_g4_ParamLimits

0x1444,	// (0x00086d31) field_cale_ev2_pane_g4

0x90a2,	// (0x0008e98f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x90a2,	// (0x0008e98f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0009518d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0009518d) cell_video_dialer_keypad_pane_g

0x90ba,	// (0x0008e9a7) cell_video_dialer_keypad_pane_t1

0xca03,	// (0x000922f0) bg_popup_window_pane_cp012

0xec88,	// (0x00094575) heading_pane_cp06

0xd940,	// (0x0009322d) ncim_query_content_pane

0xca03,	// (0x000922f0) bg_popup_heading_pane_cp01

0xd948,	// (0x00093235) ncim_heading_pane_t1

0xd956,	// (0x00093243) ncim_indicator_popup_pane

0xd968,	// (0x00093255) ncim_query_button_pane

0xd97c,	// (0x00093269) ncim_query_content_pane_t1

0xd98e,	// (0x0009327b) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x000954f3) ncim_query_content_pane_t

0xd9c8,	// (0x000932b5) ncim_query_list_pane

0xd9da,	// (0x000932c7) ncim_query_popup_pane

0xd956,	// (0x00093243) ncim_indicator_popup_pane_ParamLimits

0xb186,	// (0x00090a73) ncim_query_content_pane_g1_ParamLimits

0xb186,	// (0x00090a73) ncim_query_content_pane_g1

0xd97c,	// (0x00093269) ncim_query_content_pane_t1_ParamLimits

0xd98e,	// (0x0009327b) ncim_query_content_pane_t2_ParamLimits

0xb192,	// (0x00090a7f) ncim_query_content_pane_t3_ParamLimits

0xb192,	// (0x00090a7f) ncim_query_content_pane_t3

0xb1af,	// (0x00090a9c) ncim_query_content_pane_t4_ParamLimits

0xb1af,	// (0x00090a9c) ncim_query_content_pane_t4

0xb1cc,	// (0x00090ab9) ncim_query_content_pane_t5_ParamLimits

0xb1cc,	// (0x00090ab9) ncim_query_content_pane_t5

0xd9a0,	// (0x0009328d) ncim_query_content_pane_t6_ParamLimits

0xd9a0,	// (0x0009328d) ncim_query_content_pane_t6

0xfc06,	// (0x000954f3) ncim_query_content_pane_t_ParamLimits

0xd9c8,	// (0x000932b5) ncim_query_list_pane_ParamLimits

0xd9da,	// (0x000932c7) ncim_query_popup_pane_ParamLimits

0xd9ee,	// (0x000932db) wait_bar_pane_cp04

0xca03,	// (0x000922f0) input_focus_pane_cp011

0xd9f6,	// (0x000932e3) ncim_query_popup_pane_t1

0xda04,	// (0x000932f1) ncim_list_query_list_pane_ParamLimits

0xda04,	// (0x000932f1) ncim_list_query_list_pane

0xca03,	// (0x000922f0) bg_button_pane_cp027

0xda17,	// (0x00093304) ncim_query_button_pane_g1

0xca03,	// (0x000922f0) list_highlight_pane_cp012

0xda21,	// (0x0009330e) ncim_list_query_list_pane_g1

0xda29,	// (0x00093316) ncim_list_query_list_pane_t1

0x9749,	// (0x0008f036) cam4_indicators_pane_g3_ParamLimits

0x9749,	// (0x0008f036) cam4_indicators_pane_g3

0x984c,	// (0x0008f139) vid4_indicators_pane_g5_ParamLimits

0x984c,	// (0x0008f139) vid4_indicators_pane_g5

0xa88a,	// (0x00090177) vid4_progress_pane_g5_ParamLimits

0xa88a,	// (0x00090177) vid4_progress_pane_g5

0xb072,	// (0x0009095f) main_ncimui_pane_g1

0xb0da,	// (0x000909c7) ncimui_group_query_pane_ParamLimits

0xb0da,	// (0x000909c7) ncimui_group_query_pane

0xb122,	// (0x00090a0f) ncimui_list_pane_ParamLimits

0xb122,	// (0x00090a0f) ncimui_list_pane

0xb149,	// (0x00090a36) ncimui_text_pane_ParamLimits

0xb149,	// (0x00090a36) ncimui_text_pane

0xb1e9,	// (0x00090ad6) ncimui_text_pane_t1_ParamLimits

0xb1e9,	// (0x00090ad6) ncimui_text_pane_t1

0xda37,	// (0x00093324) ncimui_list_single_graphic_pane_ParamLimits

0xda37,	// (0x00093324) ncimui_list_single_graphic_pane

0xb208,	// (0x00090af5) ncimui_query_pane_ParamLimits

0xb208,	// (0x00090af5) ncimui_query_pane

0xca03,	// (0x000922f0) list_highlight_pane_cp013

0xda47,	// (0x00093334) ncim_list_query_list_pane_t1_copy1

0xda21,	// (0x0009330e) ncim_list_single_graphic_pane_g1

0xda55,	// (0x00093342) ncim_query_button_pane_cp01

0xda61,	// (0x0009334e) ncim_query_entry_pane_ParamLimits

0xda61,	// (0x0009334e) ncim_query_entry_pane

0xda74,	// (0x00093361) ncimui_query_pane_g1

0xda80,	// (0x0009336d) ncimui_query_pane_t1_ParamLimits

0xda80,	// (0x0009336d) ncimui_query_pane_t1

0xddb4,	// (0x000936a1) input_focus_pane_cp012

0xda99,	// (0x00093386) ncim_query_entry_pane_t1

0xe31e,	// (0x00093c0b) main_im_pane_ParamLimits

0x7721,	// (0x0008d00e) main_mobtv_pane_ParamLimits

0x7721,	// (0x0008d00e) main_mobtv_pane

0xae80,	// (0x0009076d) main_cset6_slider_pane_g18_ParamLimits

0xae80,	// (0x0009076d) main_cset6_slider_pane_g18

0xaea4,	// (0x00090791) main_cset6_slider_pane_g19_ParamLimits

0xaea4,	// (0x00090791) main_cset6_slider_pane_g19

0xcf5c,	// (0x00092849) bg_main_mobtv_pane_ParamLimits

0xcf5c,	// (0x00092849) bg_main_mobtv_pane

0xb21b,	// (0x00090b08) main_mobtv_info_pane

0xb226,	// (0x00090b13) main_mobtv_loading_pane_ParamLimits

0xb226,	// (0x00090b13) main_mobtv_loading_pane

0xdaab,	// (0x00093398) main_mobtv_pg_channel_list_pane

0xdab5,	// (0x000933a2) main_mobtv_pg_hdr_pane

0xb233,	// (0x00090b20) main_mobtv_programe_curr_pane_ParamLimits

0xb233,	// (0x00090b20) main_mobtv_programe_curr_pane

0xb240,	// (0x00090b2d) main_mobtv_programe_next_pane_ParamLimits

0xb240,	// (0x00090b2d) main_mobtv_programe_next_pane

0xdabe,	// (0x000933ab) popup_mobtv_noti_window

0x2ddd,	// (0x000886ca) main_tv_pg_hdr_pane_g1

0xdac6,	// (0x000933b3) main_tv_pg_hdr_pane_g2

0xdace,	// (0x000933bb) main_tv_pg_hdr_pane_g3

0xdad6,	// (0x000933c3) main_tv_pg_hdr_pane_g4

0xdade,	// (0x000933cb) main_tv_pg_hdr_pane_g5

0xdae8,	// (0x000933d5) main_tv_pg_hdr_pane_g6

0xdaf2,	// (0x000933df) main_tv_pg_hdr_pane_g7

0xdafc,	// (0x000933e9) main_tv_pg_hdr_pane_g8

0xdb06,	// (0x000933f3) main_tv_pg_hdr_pane_g9

0xdb10,	// (0x000933fd) main_tv_pg_hdr_pane_g10

0xdb1a,	// (0x00093407) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00095500) main_tv_pg_hdr_pane_g

0xdb24,	// (0x00093411) main_tv_pg_hdr_pane_t1

0xdb32,	// (0x0009341f) main_tv_pg_hdr_pane_t2

0xdb40,	// (0x0009342d) main_tv_pg_hdr_pane_t3

0xdb50,	// (0x0009343d) main_tv_pg_hdr_pane_t4

0xdb60,	// (0x0009344d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00095517) main_tv_pg_hdr_pane_t

0xdb70,	// (0x0009345d) single_mobtv_pg_channel_pane_ParamLimits

0xdb70,	// (0x0009345d) single_mobtv_pg_channel_pane

0xdb82,	// (0x0009346f) single_mobtv_pg_channel_table_pane

0xdb8b,	// (0x00093478) single_mobtv_pg_channel_thumb_pane

0xdb94,	// (0x00093481) single_tv_pg_channel_pane_g1

0xdb9d,	// (0x0009348a) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00095522) single_tv_pg_channel_pane_g

0x3073,	// (0x00088960) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3073,	// (0x00088960) bg_single_mobtv_pg_channel_thumb_pane

0xdba6,	// (0x00093493) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdba6,	// (0x00093493) single_mobtv_pg_channel_thumb_pane_g1

0xdbb4,	// (0x000934a1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdbb4,	// (0x000934a1) single_mobtv_pg_channel_thumb_pane_g2

0xdbc0,	// (0x000934ad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdbc0,	// (0x000934ad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00095527) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00095527) single_mobtv_pg_channel_thumb_pane_g

0xdbcc,	// (0x000934b9) single_mobtv_pg_channel_thumb_pane_t1

0xdbda,	// (0x000934c7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0009552e) single_mobtv_pg_channel_thumb_pane_t

0x2ddd,	// (0x000886ca) bg_single_mobtv_pg_channel_table_pane_g1

0x2ddd,	// (0x000886ca) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00094fd9) bg_single_mobtv_pg_channel_table_pane_g

0xdbe8,	// (0x000934d5) single_mobtv_pg_channel_table_pane_t1

0xdbf6,	// (0x000934e3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00095533) single_mobtv_pg_channel_table_pane_t

0xb255,	// (0x00090b42) main_mobtv_info_pane_g1_ParamLimits

0xb255,	// (0x00090b42) main_mobtv_info_pane_g1

0xb271,	// (0x00090b5e) main_mobtv_info_pane_t1_ParamLimits

0xb271,	// (0x00090b5e) main_mobtv_info_pane_t1

0xb2e9,	// (0x00090bd6) main_mobtv_info_pane_t2_ParamLimits

0xb2e9,	// (0x00090bd6) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0009553d) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0009553d) main_mobtv_info_pane_t

0xb378,	// (0x00090c65) wait_bar_pane_cp05

0xb38a,	// (0x00090c77) main_mobtv_loading_pane_g1_ParamLimits

0xb38a,	// (0x00090c77) main_mobtv_loading_pane_g1

0xb398,	// (0x00090c85) main_mobtv_loading_pane_g2_ParamLimits

0xb398,	// (0x00090c85) main_mobtv_loading_pane_g2

0xb3a4,	// (0x00090c91) main_mobtv_loading_pane_g3_ParamLimits

0xb3a4,	// (0x00090c91) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00095544) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00095544) main_mobtv_loading_pane_g

0xdc04,	// (0x000934f1) main_mobtv_loading_pane_t1_ParamLimits

0xdc04,	// (0x000934f1) main_mobtv_loading_pane_t1

0xdc1c,	// (0x00093509) main_mobtv_loading_pane_t2_ParamLimits

0xdc1c,	// (0x00093509) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0009554b) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0009554b) main_mobtv_loading_pane_t

0xb3b2,	// (0x00090c9f) wait_bar_pane_cp06_ParamLimits

0xb3b2,	// (0x00090c9f) wait_bar_pane_cp06

0xdc40,	// (0x0009352d) main_mobtv_programe_curr_pane_t1

0xdc4e,	// (0x0009353b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00095550) main_mobtv_programe_curr_pane_t

0xdc5c,	// (0x00093549) main_mobtv_programe_next_pane_t1

0xdc6a,	// (0x00093557) main_mobtv_programe_next_pane_t2

0xdc78,	// (0x00093565) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00095555) main_mobtv_programe_next_pane_t

0xca03,	// (0x000922f0) bg_popup_mobtv_noti_window_pane

0xdc86,	// (0x00093573) popup_mobtv_noti_window_g1

0xdc8e,	// (0x0009357b) popup_mobtv_noti_window_t1

0xdc9c,	// (0x00093589) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0009555c) popup_mobtv_noti_window_t

0x2ddd,	// (0x000886ca) bg_popup_mobtv_noti_window_pane_g1

0x47b8,	// (0x0008a0a5) sc_clock_pane

0x47b8,	// (0x0008a0a5) main_fs_bigclock_pane

0xaa71,	// (0x0009035e) blid2_tripm_pane_t4_ParamLimits

0xaa71,	// (0x0009035e) blid2_tripm_pane_t4

0xb3be,	// (0x00090cab) sc_clock_pane_g1_ParamLimits

0xb3be,	// (0x00090cab) sc_clock_pane_g1

0xb3cc,	// (0x00090cb9) sc_clock_pane_t1_ParamLimits

0xb3cc,	// (0x00090cb9) sc_clock_pane_t1

0xb3df,	// (0x00090ccc) sc_clock_pane_t2_ParamLimits

0xb3df,	// (0x00090ccc) sc_clock_pane_t2

0xb3f1,	// (0x00090cde) sc_clock_pane_t3_ParamLimits

0xb3f1,	// (0x00090cde) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00095561) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00095561) sc_clock_pane_t

0xc0b9,	// (0x000919a6) main_fs_bigclock_indicator_pane_ParamLimits

0xc0b9,	// (0x000919a6) main_fs_bigclock_indicator_pane

0xb47d,	// (0x00090d6a) main_fs_bigclock_pane_g1_ParamLimits

0xb47d,	// (0x00090d6a) main_fs_bigclock_pane_g1

0xc0c5,	// (0x000919b2) main_fs_bigclock_pane_t1_ParamLimits

0xc0c5,	// (0x000919b2) main_fs_bigclock_pane_t1

0xc0d7,	// (0x000919c4) main_fs_bigclock_pane_t2_ParamLimits

0xc0d7,	// (0x000919c4) main_fs_bigclock_pane_t2

0xc0e9,	// (0x000919d6) main_fs_bigclock_pane_t3_ParamLimits

0xc0e9,	// (0x000919d6) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x00095765) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x00095765) main_fs_bigclock_pane_t

0x2115,	// (0x00087a02) main_fs_bigclock_indicator_pane_g1

0xd970,	// (0x0009325d) ncim_query_content_pane_g2_ParamLimits

0xd970,	// (0x0009325d) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x000954ee) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x000954ee) ncim_query_content_pane_g

0xb405,	// (0x00090cf2) sc_clock_pane_t4_ParamLimits

0xb405,	// (0x00090cf2) sc_clock_pane_t4

0x7721,	// (0x0008d00e) main_radioblah_pane

0xcecd,	// (0x000927ba) cell_call4_button_pane_t1_copy1_ParamLimits

0xcecd,	// (0x000927ba) cell_call4_button_pane_t1_copy1

0xb08c,	// (0x00090979) main_ncimui_pane_t1_ParamLimits

0xb08c,	// (0x00090979) main_ncimui_pane_t1

0xb0a6,	// (0x00090993) main_ncimui_pane_t2_ParamLimits

0xb0a6,	// (0x00090993) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x000954e7) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x000954e7) main_ncimui_pane_t

0xde91,	// (0x0009377e) main_radioblah_anim_pane_ParamLimits

0xde91,	// (0x0009377e) main_radioblah_anim_pane

0xdea2,	// (0x0009378f) main_radioblah_info_pane_ParamLimits

0xdea2,	// (0x0009378f) main_radioblah_info_pane

0xdeb6,	// (0x000937a3) main_radioblah_pane_t1_ParamLimits

0xdeb6,	// (0x000937a3) main_radioblah_pane_t1

0xded2,	// (0x000937bf) main_radioblah_pane_t2_ParamLimits

0xded2,	// (0x000937bf) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00095582) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00095582) main_radioblah_pane_t

0xb4cf,	// (0x00090dbc) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb4cf,	// (0x00090dbc) main_radioblah_rocker_ctrl_pane

0xdf1a,	// (0x00093807) main_radioblah_info_pane_t1_ParamLimits

0xdf1a,	// (0x00093807) main_radioblah_info_pane_t1

0xb514,	// (0x00090e01) main_radioblah_info_pane_t2_ParamLimits

0xb514,	// (0x00090e01) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0009558b) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0009558b) main_radioblah_info_pane_t

0x2ddd,	// (0x000886ca) main_radioblah_rocker_ctrl_pane_g1

0xb5c4,	// (0x00090eb1) main_radioblah_rocker_ctrl_pane_g2

0xb5cc,	// (0x00090eb9) main_radioblah_rocker_ctrl_pane_g3

0xb5d4,	// (0x00090ec1) main_radioblah_rocker_ctrl_pane_g4

0xb5dc,	// (0x00090ec9) main_radioblah_rocker_ctrl_pane_g5

0xb5e4,	// (0x00090ed1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00095594) main_radioblah_rocker_ctrl_pane_g

0xb028,	// (0x00090915) main_cset_text2_pane_t1_copy1_ParamLimits

0x9669,	// (0x0008ef56) cam4_image_uncrop_qvga_pane

0x97be,	// (0x0008f0ab) vid4_image_uncrop_qcif_pane

0xabff,	// (0x000904ec) cam6_image_uncrop_qvga_pane_ParamLimits

0xabff,	// (0x000904ec) cam6_image_uncrop_qvga_pane

0xd65c,	// (0x00092f49) vid6_image_uncrop_qcif_pane_ParamLimits

0xd65c,	// (0x00092f49) vid6_image_uncrop_qcif_pane

0xca03,	// (0x000922f0) bg_popup_preview_window_pane_cp03

0xd916,	// (0x00093203) list_cset_text2_pane

0xd91e,	// (0x0009320b) main_cset6_text2_pane_g1

0xd926,	// (0x00093213) main_cset6_text2_pane_t1

0xb5ec,	// (0x00090ed9) list_cset_text2_pane_t1_ParamLimits

0xb5ec,	// (0x00090ed9) list_cset_text2_pane_t1

0x7721,	// (0x0008d00e) main_radioblah_pane_ParamLimits

0xb364,	// (0x00090c51) main_mobtv_info_pane_t3_ParamLimits

0xb364,	// (0x00090c51) main_mobtv_info_pane_t3

0xb4bd,	// (0x00090daa) main_radioblah_pane_g1

0xb4e8,	// (0x00090dd5) main_radioblah_info_pane_g1

0xb569,	// (0x00090e56) main_radioblah_info_pane_t3_ParamLimits

0xb569,	// (0x00090e56) main_radioblah_info_pane_t3

0x6325,	// (0x0008bc12) highlight_cell_cale_month_pane_ParamLimits

0x6325,	// (0x0008bc12) highlight_cell_cale_month_pane

0x47b8,	// (0x0008a0a5) main_phob_fisheye_pane

0x315b,	// (0x00088a48) scroll_pane_cp0031_ParamLimits

0x315b,	// (0x00088a48) scroll_pane_cp0031

0xd76a,	// (0x00093057) wait_bar_pane_cp08_ParamLimits

0xae14,	// (0x00090701) cset_list_set_pane_copy1_ParamLimits

0xdf54,	// (0x00093841) highlight_cell_cale_month_pane_g1

0xb617,	// (0x00090f04) highlight_cell_cale_month_pane_t1

0xd40d,	// (0x00092cfa) list_gen_pane_cp01

0xd096,	// (0x00092983) scroll_pane_01

0x3025,	// (0x00088912) list_single_double_fisheye_pane

0x1690,	// (0x00086f7d) list_double_fisheye_pane_g1_ParamLimits

0x1690,	// (0x00086f7d) list_double_fisheye_pane_g1

0x2acd,	// (0x000883ba) list_double_fisheye_pane_g2_ParamLimits

0x2acd,	// (0x000883ba) list_double_fisheye_pane_g2

0x302e,	// (0x0008891b) list_double_fisheye_pane_g3_ParamLimits

0x302e,	// (0x0008891b) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x000955a1) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x000955a1) list_double_fisheye_pane_g

0x16a8,	// (0x00086f95) list_double_fisheye_pane_t1_ParamLimits

0x16a8,	// (0x00086f95) list_double_fisheye_pane_t1

0x16c3,	// (0x00086fb0) list_double_fisheye_pane_t2_ParamLimits

0x16c3,	// (0x00086fb0) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x000955ac) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x000955ac) list_double_fisheye_pane_t

0x47b8,	// (0x0008a0a5) main_call5_pane

0xb42b,	// (0x00090d18) sc_swipe_pane_ParamLimits

0xb42b,	// (0x00090d18) sc_swipe_pane

0xb631,	// (0x00090f1e) call5_image_pane_ParamLimits

0xb631,	// (0x00090f1e) call5_image_pane

0xb641,	// (0x00090f2e) call5_swipe_1_pane_ParamLimits

0xb641,	// (0x00090f2e) call5_swipe_1_pane

0xb64d,	// (0x00090f3a) call5_swipe_2_pane_ParamLimits

0xb64d,	// (0x00090f3a) call5_swipe_2_pane

0xb667,	// (0x00090f54) popup_call5_audio_first_window_ParamLimits

0xb667,	// (0x00090f54) popup_call5_audio_first_window

0x3073,	// (0x00088960) call5_swipe_1_pane_g1_ParamLimits

0x3073,	// (0x00088960) call5_swipe_1_pane_g1

0xdf5c,	// (0x00093849) call5_swipe_1_pane_g2_ParamLimits

0xdf5c,	// (0x00093849) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x000955b1) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x000955b1) call5_swipe_1_pane_g

0xdf68,	// (0x00093855) call5_swipe_1_pane_t1_ParamLimits

0xdf68,	// (0x00093855) call5_swipe_1_pane_t1

0x3073,	// (0x00088960) call5_swipe_2_pane_g1_ParamLimits

0x3073,	// (0x00088960) call5_swipe_2_pane_g1

0x16e5,	// (0x00086fd2) call5_swipe_2_pane_g2_ParamLimits

0x16e5,	// (0x00086fd2) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000955b6) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000955b6) call5_swipe_2_pane_g

0x16f1,	// (0x00086fde) call5_swipe_2_pane_t1_ParamLimits

0x16f1,	// (0x00086fde) call5_swipe_2_pane_t1

0x1706,	// (0x00086ff3) sc_swipe_pane_g1_ParamLimits

0x1706,	// (0x00086ff3) sc_swipe_pane_g1

0x1713,	// (0x00087000) sc_swipe_pane_g2_ParamLimits

0x1713,	// (0x00087000) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000955bb) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000955bb) sc_swipe_pane_g

0x171f,	// (0x0008700c) sc_swipe_pane_t1_ParamLimits

0x171f,	// (0x0008700c) sc_swipe_pane_t1

0x47b8,	// (0x0008a0a5) main_cmail_launcher_pane

0xb675,	// (0x00090f62) aid_size_cell_cmail_l_ParamLimits

0xb675,	// (0x00090f62) aid_size_cell_cmail_l

0xb685,	// (0x00090f72) grid_cmail_l_pane_ParamLimits

0xb685,	// (0x00090f72) grid_cmail_l_pane

0xb695,	// (0x00090f82) cell_cmail_l_pane_ParamLimits

0xb695,	// (0x00090f82) cell_cmail_l_pane

0xb6a9,	// (0x00090f96) cell_cmail_l_pane_g1_ParamLimits

0xb6a9,	// (0x00090f96) cell_cmail_l_pane_g1

0xb6b5,	// (0x00090fa2) cell_cmail_l_pane_t1_ParamLimits

0xb6b5,	// (0x00090fa2) cell_cmail_l_pane_t1

0x1734,	// (0x00087021) cell_cmail_l_pane_t2_ParamLimits

0x1734,	// (0x00087021) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000955c0) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000955c0) cell_cmail_l_pane_t

0xddb4,	// (0x000936a1) grid_highlight_pane_cp018_ParamLimits

0xddb4,	// (0x000936a1) grid_highlight_pane_cp018

0x461a,	// (0x00089f07) main2_pane_ParamLimits

0x461a,	// (0x00089f07) main2_pane

0xe3c9,	// (0x00093cb6) popup_sp_fs_action_menu_bg_pane_g1

0xe3d1,	// (0x00093cbe) popup_sp_fs_action_menu_bg_pane_g2

0xe3d9,	// (0x00093cc6) popup_sp_fs_action_menu_bg_pane_g3

0xe3e1,	// (0x00093cce) popup_sp_fs_action_menu_bg_pane_g4

0xe3e9,	// (0x00093cd6) popup_sp_fs_action_menu_bg_pane_g5

0xe3f1,	// (0x00093cde) popup_sp_fs_action_menu_bg_pane_g6

0xe3f9,	// (0x00093ce6) popup_sp_fs_action_menu_bg_pane_g7

0xe401,	// (0x00093cee) popup_sp_fs_action_menu_bg_pane_g8

0xe409,	// (0x00093cf6) popup_sp_fs_action_menu_bg_pane_g9

0xe411,	// (0x00093cfe) popup_sp_fs_action_menu_bg_pane_g10

0xe411,	// (0x00093cfe) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00094a85) popup_sp_fs_action_menu_bg_pane_g

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g3_g1

0xe545,	// (0x00093e32) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_t3_g3_g2

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00094b35) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00094b35) list_medium_line_x2_t3_g3_g

0xe55d,	// (0x00093e4a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe55d,	// (0x00093e4a) list_medium_line_x2_t3_g3_t1

0x5448,	// (0x0008ad35) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5448,	// (0x0008ad35) list_medium_line_x2_t3_g3_t2

0xe572,	// (0x00093e5f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00094b3c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00094b3c) list_medium_line_x2_t3_g3_t

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g2_g1

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00094b43) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00094b43) list_medium_line_x2_t3_g2_g

0xe587,	// (0x00093e74) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe587,	// (0x00093e74) list_medium_line_x2_t3_g2_t1

0xe59d,	// (0x00093e8a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe59d,	// (0x00093e8a) list_medium_line_x2_t3_g2_t2

0xe5af,	// (0x00093e9c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe5af,	// (0x00093e9c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00094b48) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00094b48) list_medium_line_x2_t3_g2_t

0xe539,	// (0x00093e26) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t4_g4_g1

0xe5cd,	// (0x00093eba) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe5cd,	// (0x00093eba) list_medium_line_x2_t4_g4_g2

0xe545,	// (0x00093e32) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_t4_g4_g3

0xe5d9,	// (0x00093ec6) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe5d9,	// (0x00093ec6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00094b4f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00094b4f) list_medium_line_x2_t4_g4_g

0x545a,	// (0x0008ad47) list_medium_line_x2_t4_g4_t1_ParamLimits

0x545a,	// (0x0008ad47) list_medium_line_x2_t4_g4_t1

0x5471,	// (0x0008ad5e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5471,	// (0x0008ad5e) list_medium_line_x2_t4_g4_t2

0x5486,	// (0x0008ad73) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5486,	// (0x0008ad73) list_medium_line_x2_t4_g4_t3

0xe5e5,	// (0x00093ed2) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe5e5,	// (0x00093ed2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00094b58) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00094b58) list_medium_line_x2_t4_g4_t

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g4_g1

0xe5cd,	// (0x00093eba) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe5cd,	// (0x00093eba) list_medium_line_x2_t2_g4_g2

0xe545,	// (0x00093e32) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_t2_g4_g3

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00094bbf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00094bbf) list_medium_line_x2_t2_g4_g

0xe8cf,	// (0x000941bc) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe8cf,	// (0x000941bc) list_medium_line_x2_t2_g4_t1

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00094bc8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00094bc8) list_medium_line_x2_t2_g4_t

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g3_g1

0xe545,	// (0x00093e32) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_t2_g3_g2

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00094b35) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00094b35) list_medium_line_x2_t2_g3_g

0xe8e4,	// (0x000941d1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe8e4,	// (0x000941d1) list_medium_line_x2_t2_g3_t1

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00094bcd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00094bcd) list_medium_line_x2_t2_g3_t

0x65a1,	// (0x0008be8e) main_sp_fs_list_pane_ParamLimits

0x65a1,	// (0x0008be8e) main_sp_fs_list_pane

0x65ad,	// (0x0008be9a) sp_fs_scroll_pane_ParamLimits

0x65ad,	// (0x0008be9a) sp_fs_scroll_pane

0x65b9,	// (0x0008bea6) list_medium_line_x2_t3_t1

0x65c9,	// (0x0008beb6) list_medium_line_x2_t3_t2

0xea8e,	// (0x0009437b) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00094c18) list_medium_line_x2_t3_t

0x65d7,	// (0x0008bec4) list_medium_line_x3_t4_t1

0x65e7,	// (0x0008bed4) list_medium_line_x3_t4_t2

0xea9c,	// (0x00094389) list_medium_line_x3_t4_t3

0xea8e,	// (0x0009437b) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00094c1f) list_medium_line_x3_t4_t

0x65f5,	// (0x0008bee2) list_medium_line_x4_t5_t1

0x6605,	// (0x0008bef2) list_medium_line_x4_t5_t2

0xea9c,	// (0x00094389) list_medium_line_x4_t5_t3

0xeab6,	// (0x000943a3) list_medium_line_x4_t5_t4

0xea8e,	// (0x0009437b) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00094c28) list_medium_line_x4_t5_t

0xe539,	// (0x00093e26) list_medium_line_t4_g4_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_t4_g4_g1

0xe5d9,	// (0x00093ec6) list_medium_line_t4_g4_g2_ParamLimits

0xe5d9,	// (0x00093ec6) list_medium_line_t4_g4_g2

0xeac4,	// (0x000943b1) list_medium_line_t4_g4_g3_ParamLimits

0xeac4,	// (0x000943b1) list_medium_line_t4_g4_g3

0xe551,	// (0x00093e3e) list_medium_line_t4_g4_g4_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00094c33) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00094c33) list_medium_line_t4_g4_g

0xead0,	// (0x000943bd) list_medium_line_t4_g4_t1_ParamLimits

0xead0,	// (0x000943bd) list_medium_line_t4_g4_t1

0xeae5,	// (0x000943d2) list_medium_line_t4_g4_t2_ParamLimits

0xeae5,	// (0x000943d2) list_medium_line_t4_g4_t2

0xeafb,	// (0x000943e8) list_medium_line_t4_g4_t3_ParamLimits

0xeafb,	// (0x000943e8) list_medium_line_t4_g4_t3

0xe572,	// (0x00093e5f) list_medium_line_t4_g4_t4_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00094c3c) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00094c3c) list_medium_line_t4_g4_t

0x66fa,	// (0x0008bfe7) chi_dic_find_pane_g1

0x773d,	// (0x0008d02a) main_tport_pane

0x1499,	// (0x00086d86) list_medium_line_plain_t1

0x14a7,	// (0x00086d94) list_medium_line_t2_g2_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t2_g2_g1

0x14b3,	// (0x00086da0) list_medium_line_t2_g2_g2_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000952f8) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000952f8) list_medium_line_t2_g2_g

0xa264,	// (0x0008fb51) list_medium_line_t2_g2_t1_ParamLimits

0xa264,	// (0x0008fb51) list_medium_line_t2_g2_t1

0xa27e,	// (0x0008fb6b) list_medium_line_t2_g2_t2_ParamLimits

0xa27e,	// (0x0008fb6b) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x000952fd) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x000952fd) list_medium_line_t2_g2_t

0x155b,	// (0x00086e48) aid_sp_fs_list_icon_a_sm

0x2aa6,	// (0x00088393) aid_sp_fs_list_icon_d

0x3014,	// (0x00088901) aid_sp_fs_text_primary

0x1563,	// (0x00086e50) aid_sp_fs_text_secondary

0x156c,	// (0x00086e59) list_medium_line

0x156c,	// (0x00086e59) list_medium_line_g2

0x156c,	// (0x00086e59) list_medium_line_g3

0x156c,	// (0x00086e59) list_medium_line_plain

0x156c,	// (0x00086e59) list_medium_line_plain_t2

0x156c,	// (0x00086e59) list_medium_line_plain_t3

0x156c,	// (0x00086e59) list_medium_line_right_icon

0x156c,	// (0x00086e59) list_medium_line_right_iconx2

0x156c,	// (0x00086e59) list_medium_line_t2

0x156c,	// (0x00086e59) list_medium_line_t2_g2

0x156c,	// (0x00086e59) list_medium_line_t2_g3

0x156c,	// (0x00086e59) list_medium_line_t2_right_icon

0x156c,	// (0x00086e59) list_medium_line_t2_right_iconx2

0x156c,	// (0x00086e59) list_medium_line_t3

0x156c,	// (0x00086e59) list_medium_line_t3_g2

0x156c,	// (0x00086e59) list_medium_line_t3_g3

0x156c,	// (0x00086e59) list_medium_line_t3_right_iconx2

0x1575,	// (0x00086e62) list_medium_line_t4_g4

0x2aae,	// (0x0008839b) list_medium_line_x2

0x2aae,	// (0x0008839b) list_medium_line_x2_t2_g2

0x2aae,	// (0x0008839b) list_medium_line_x2_t2_g3

0x2aae,	// (0x0008839b) list_medium_line_x2_t2_g4

0x2aae,	// (0x0008839b) list_medium_line_x2_t3

0x2aae,	// (0x0008839b) list_medium_line_x2_t3_g2

0x2aae,	// (0x0008839b) list_medium_line_x2_t3_g3

0x2aae,	// (0x0008839b) list_medium_line_x2_t3_g4

0x2aae,	// (0x0008839b) list_medium_line_x2_t4_g2

0x2aae,	// (0x0008839b) list_medium_line_x2_t4_g4

0x157e,	// (0x00086e6b) list_medium_line_x3

0x157e,	// (0x00086e6b) list_medium_line_x3_t4

0x157e,	// (0x00086e6b) list_medium_line_x3_t4_g4

0x1575,	// (0x00086e62) list_medium_line_x4_t4

0x1575,	// (0x00086e62) list_medium_line_x4_t4_g7

0x1575,	// (0x00086e62) list_medium_line_x4_t5

0x1587,	// (0x00086e74) list_single_fs_dyc_pane_ParamLimits

0x1587,	// (0x00086e74) list_single_fs_dyc_pane

0xe539,	// (0x00093e26) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x4_t4_g7_g1

0x15bf,	// (0x00086eac) list_medium_line_x4_t4_g7_g2_ParamLimits

0x15bf,	// (0x00086eac) list_medium_line_x4_t4_g7_g2

0x15cb,	// (0x00086eb8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x15cb,	// (0x00086eb8) list_medium_line_x4_t4_g7_g3

0x15da,	// (0x00086ec7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x15da,	// (0x00086ec7) list_medium_line_x4_t4_g7_g4

0x15e6,	// (0x00086ed3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x15e6,	// (0x00086ed3) list_medium_line_x4_t4_g7_g5

0x15f5,	// (0x00086ee2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x15f5,	// (0x00086ee2) list_medium_line_x4_t4_g7_g6

0x1604,	// (0x00086ef1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1604,	// (0x00086ef1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000954c8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000954c8) list_medium_line_x4_t4_g7_g

0x1610,	// (0x00086efd) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1610,	// (0x00086efd) list_medium_line_x4_t4_g7_t1

0x1625,	// (0x00086f12) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1625,	// (0x00086f12) list_medium_line_x4_t4_g7_t2

0x163a,	// (0x00086f27) list_medium_line_x4_t4_g7_t3_ParamLimits

0x163a,	// (0x00086f27) list_medium_line_x4_t4_g7_t3

0x164f,	// (0x00086f3c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x164f,	// (0x00086f3c) list_medium_line_x4_t4_g7_t4

0x1661,	// (0x00086f4e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1661,	// (0x00086f4e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x000954d7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x000954d7) list_medium_line_x4_t4_g7_t

0x1673,	// (0x00086f60) list_single_dyc_row_pane_ParamLimits

0x1673,	// (0x00086f60) list_single_dyc_row_pane

0xb625,	// (0x00090f12) call5_gesture_pane_ParamLimits

0xb625,	// (0x00090f12) call5_gesture_pane

0xb659,	// (0x00090f46) call5_windows_pane_ParamLimits

0xb659,	// (0x00090f46) call5_windows_pane

0xb6cb,	// (0x00090fb8) call5_swipe_1_pane_cp_ParamLimits

0xb6cb,	// (0x00090fb8) call5_swipe_1_pane_cp

0xb6d7,	// (0x00090fc4) call5_swipe_2_pane_cp_ParamLimits

0xb6d7,	// (0x00090fc4) call5_swipe_2_pane_cp

0xef05,	// (0x000947f2) call5_image_pane_cp

0xb6e3,	// (0x00090fd0) popup_call5_audio_first_window_cp_ParamLimits

0xb6e3,	// (0x00090fd0) popup_call5_audio_first_window_cp

0x1706,	// (0x00086ff3) call5_swipe_1_pane_g1_cp_ParamLimits

0x1706,	// (0x00086ff3) call5_swipe_1_pane_g1_cp

0x1746,	// (0x00087033) call5_swipe_1_pane_g2_cp

0x171f,	// (0x0008700c) call5_swipe_1_pane_t1_cp_ParamLimits

0x171f,	// (0x0008700c) call5_swipe_1_pane_t1_cp

0x1706,	// (0x00086ff3) call5_swipe_2_pane_g1_cp_ParamLimits

0x1706,	// (0x00086ff3) call5_swipe_2_pane_g1_cp

0x174e,	// (0x0008703b) call5_swipe_2_pane_g2_cp

0x1756,	// (0x00087043) call5_swipe_2_pane_t1_cp_ParamLimits

0x1756,	// (0x00087043) call5_swipe_2_pane_t1_cp

0xddb4,	// (0x000936a1) main_sp_fs_email_pane

0x176b,	// (0x00087058) main_sp_fs_listscroll_pane_te

0x1774,	// (0x00087061) popup_sp_fs_action_menu_pane_ParamLimits

0x1774,	// (0x00087061) popup_sp_fs_action_menu_pane

0x2ddd,	// (0x000886ca) bg_sp_fs_ctrlbar_pane_g1

0x17b6,	// (0x000870a3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x17bf,	// (0x000870ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x17c8,	// (0x000870b5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2ddd,	// (0x000886ca) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000955c5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2bc0,	// (0x000884ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2bc0,	// (0x000884ad) bg_sp_fs_ctrlbar_ddmenu_pane

0x17d1,	// (0x000870be) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x17d1,	// (0x000870be) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x17dd,	// (0x000870ca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x17dd,	// (0x000870ca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000955ce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000955ce) main_sp_fs_ctrlbar_ddmenu_pane_g

0x17e9,	// (0x000870d6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x17e9,	// (0x000870d6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1803,	// (0x000870f0) list_medium_line_t2_right_icon_g1

0xb6ef,	// (0x00090fdc) list_medium_line_t2_right_icon_t1

0xb6ff,	// (0x00090fec) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000955d3) list_medium_line_t2_right_icon_t

0x1298,	// (0x00086b85) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1298,	// (0x00086b85) bg_sp_fs_ctrlbar_pane

0xb764,	// (0x00091051) main_sp_fs_ctrlbar_button_pane_cp01

0xb76c,	// (0x00091059) main_sp_fs_ctrlbar_ddmenu_pane

0x1843,	// (0x00087130) main_sp_fs_ctrlbar_pane_g1

0x184f,	// (0x0008713c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000955d8) main_sp_fs_ctrlbar_pane_g

0x185b,	// (0x00087148) main_sp_fs_ctrlbar_pane_t1

0xb776,	// (0x00091063) main_sp_fs_ctrlbar_pane

0xb790,	// (0x0009107d) main_sp_fs_listscroll_pane_te_cp01

0xb7a1,	// (0x0009108e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb7a1,	// (0x0009108e) popup_sp_fs_action_menu_pane_cp01

0xddb4,	// (0x000936a1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xddb4,	// (0x000936a1) bg_sp_fs_highlight_list_pane_cp01

0x1880,	// (0x0008716d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1880,	// (0x0008716d) sp_fs_action_menu_list_gene_pane_g1

0x188f,	// (0x0008717c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x188f,	// (0x0008717c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x000955e2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x000955e2) sp_fs_action_menu_list_gene_pane_g

0x189c,	// (0x00087189) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x189c,	// (0x00087189) sp_fs_action_menu_list_gene_pane_t1

0x18b4,	// (0x000871a1) sp_fs_action_menu_list_gene_pane_ParamLimits

0x18b4,	// (0x000871a1) sp_fs_action_menu_list_gene_pane

0x18d3,	// (0x000871c0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x18d3,	// (0x000871c0) popup_sp_fs_action_menu_bg_pane

0x18e1,	// (0x000871ce) sp_fs_action_menu_list_pane_ParamLimits

0x18e1,	// (0x000871ce) sp_fs_action_menu_list_pane

0x1901,	// (0x000871ee) sp_fs_scroll_pane_cp01_ParamLimits

0x1901,	// (0x000871ee) sp_fs_scroll_pane_cp01

0xb7cb,	// (0x000910b8) list_medium_line_plain_t2_t1

0xb7db,	// (0x000910c8) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x000955e7) list_medium_line_plain_t2_t

0xb7e9,	// (0x000910d6) list_medium_line_plain_t3_t1

0xb7f9,	// (0x000910e6) list_medium_line_plain_t3_t2

0xb807,	// (0x000910f4) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x000955ec) list_medium_line_plain_t3_t

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t2_g2_g1

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00094b43) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00094b43) list_medium_line_x2_t2_g2_g

0xead0,	// (0x000943bd) list_medium_line_x2_t2_g2_t1_ParamLimits

0xead0,	// (0x000943bd) list_medium_line_x2_t2_g2_t1

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x000955f3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x000955f3) list_medium_line_x2_t2_g2_t

0xe539,	// (0x00093e26) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t4_g2_g1

0x1927,	// (0x00087214) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1927,	// (0x00087214) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x000955f8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x000955f8) list_medium_line_x2_t4_g2_g

0xb815,	// (0x00091102) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb815,	// (0x00091102) list_medium_line_x2_t4_g2_t1

0xb82c,	// (0x00091119) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb82c,	// (0x00091119) list_medium_line_x2_t4_g2_t2

0xb841,	// (0x0009112e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb841,	// (0x0009112e) list_medium_line_x2_t4_g2_t3

0xe572,	// (0x00093e5f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x000955fd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x000955fd) list_medium_line_x2_t4_g2_t

0x1939,	// (0x00087226) list_medium_line_t3_right_iconx2_g1

0x1803,	// (0x000870f0) list_medium_line_t3_right_iconx2_g2

0xb853,	// (0x00091140) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00095606) list_medium_line_t3_right_iconx2_g

0xb85b,	// (0x00091148) list_medium_line_t3_right_iconx2_t1

0xb86b,	// (0x00091158) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0009560d) list_medium_line_t3_right_iconx2_t

0xe539,	// (0x00093e26) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x3_t4_g4_g1

0xe545,	// (0x00093e32) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x3_t4_g4_g2

0xe5d9,	// (0x00093ec6) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe5d9,	// (0x00093ec6) list_medium_line_x3_t4_g4_g3

0x1941,	// (0x0008722e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1941,	// (0x0008722e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x00095612) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x00095612) list_medium_line_x3_t4_g4_g

0xb879,	// (0x00091166) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb879,	// (0x00091166) list_medium_line_x3_t4_g4_t1

0xb890,	// (0x0009117d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb890,	// (0x0009117d) list_medium_line_x3_t4_g4_t2

0x194d,	// (0x0008723a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x194d,	// (0x0008723a) list_medium_line_x3_t4_g4_t3

0x1962,	// (0x0008724f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1962,	// (0x0008724f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x0009561b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x0009561b) list_medium_line_x3_t4_g4_t

0xb8a5,	// (0x00091192) list_single_dyc_row_text_pane_t1_ParamLimits

0xb8a5,	// (0x00091192) list_single_dyc_row_text_pane_t1

0xb8dc,	// (0x000911c9) list_single_dyc_row_text_pane_t2_ParamLimits

0xb8dc,	// (0x000911c9) list_single_dyc_row_text_pane_t2

0x197f,	// (0x0008726c) list_single_dyc_row_text_pane_t3_ParamLimits

0x197f,	// (0x0008726c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00095624) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00095624) list_single_dyc_row_text_pane_t

0x1991,	// (0x0008727e) list_single_dyc_row_pane_g1_ParamLimits

0x1991,	// (0x0008727e) list_single_dyc_row_pane_g1

0x199d,	// (0x0008728a) list_single_dyc_row_pane_g2_ParamLimits

0x199d,	// (0x0008728a) list_single_dyc_row_pane_g2

0x19a9,	// (0x00087296) list_single_dyc_row_pane_g3_ParamLimits

0x19a9,	// (0x00087296) list_single_dyc_row_pane_g3

0x19b5,	// (0x000872a2) list_single_dyc_row_pane_g4_ParamLimits

0x19b5,	// (0x000872a2) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x0009562b) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x0009562b) list_single_dyc_row_pane_g

0x19c1,	// (0x000872ae) list_single_dyc_row_text_pane_ParamLimits

0x19c1,	// (0x000872ae) list_single_dyc_row_text_pane

0xca03,	// (0x000922f0) bg_sp_fs_scroll_pane

0x19e0,	// (0x000872cd) thumb_sp_fs_scroll_pane

0x14a7,	// (0x00086d94) list_medium_line_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_g1

0x19e9,	// (0x000872d6) list_medium_line_t1_ParamLimits

0x19e9,	// (0x000872d6) list_medium_line_t1

0xe539,	// (0x00093e26) list_medium_line_x2_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_g1

0xe545,	// (0x00093e32) list_medium_line_x2_g2_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00095634) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00095634) list_medium_line_x2_g

0x19fe,	// (0x000872eb) list_medium_line_x2_t1_ParamLimits

0x19fe,	// (0x000872eb) list_medium_line_x2_t1

0xe539,	// (0x00093e26) list_medium_line_x3_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x3_g1

0xe545,	// (0x00093e32) list_medium_line_x3_g2_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00095634) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00095634) list_medium_line_x3_g

0x19fe,	// (0x000872eb) list_medium_line_x3_t1_ParamLimits

0x19fe,	// (0x000872eb) list_medium_line_x3_t1

0x1a14,	// (0x00087301) thumb_sp_fs_scroll_pane_g1

0x1a1d,	// (0x0008730a) thumb_sp_fs_scroll_pane_g2

0x1a26,	// (0x00087313) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00095639) thumb_sp_fs_scroll_pane_g

0x1a14,	// (0x00087301) bg_sp_fs_scroll_pane_g1

0x1a1d,	// (0x0008730a) bg_sp_fs_scroll_pane_g2

0x1a26,	// (0x00087313) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00095639) bg_sp_fs_scroll_pane_g

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe539,	// (0x00093e26) list_medium_line_x2_t3_g4_g1

0xe5cd,	// (0x00093eba) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe5cd,	// (0x00093eba) list_medium_line_x2_t3_g4_g2

0xe545,	// (0x00093e32) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe545,	// (0x00093e32) list_medium_line_x2_t3_g4_g3

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe551,	// (0x00093e3e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00094bbf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00094bbf) list_medium_line_x2_t3_g4_g

0xb936,	// (0x00091223) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb936,	// (0x00091223) list_medium_line_x2_t3_g4_t1

0xb94c,	// (0x00091239) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb94c,	// (0x00091239) list_medium_line_x2_t3_g4_t2

0xe572,	// (0x00093e5f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe572,	// (0x00093e5f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00095640) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00095640) list_medium_line_x2_t3_g4_t

0x14a7,	// (0x00086d94) list_medium_line_g2_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_g2_g1

0x14b3,	// (0x00086da0) list_medium_line_g2_g2_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000952f8) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000952f8) list_medium_line_g2_g

0x1a2f,	// (0x0008731c) list_medium_line_g2_t1_ParamLimits

0x1a2f,	// (0x0008731c) list_medium_line_g2_t1

0x14a7,	// (0x00086d94) list_medium_line_t3_g2_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t3_g2_g1

0x14b3,	// (0x00086da0) list_medium_line_t3_g2_g2_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000952f8) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000952f8) list_medium_line_t3_g2_g

0xb965,	// (0x00091252) list_medium_line_t3_g2_t1_ParamLimits

0xb965,	// (0x00091252) list_medium_line_t3_g2_t1

0xb97f,	// (0x0009126c) list_medium_line_t3_g2_t2_ParamLimits

0xb97f,	// (0x0009126c) list_medium_line_t3_g2_t2

0xb994,	// (0x00091281) list_medium_line_t3_g2_t3_ParamLimits

0xb994,	// (0x00091281) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x00095647) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x00095647) list_medium_line_t3_g2_t

0x1803,	// (0x000870f0) list_medium_line_right_icon_g1

0x1a44,	// (0x00087331) list_medium_line_right_icon_t1

0x14a7,	// (0x00086d94) list_medium_line_t2_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t2_g1

0xb9aa,	// (0x00091297) list_medium_line_t2_t1_ParamLimits

0xb9aa,	// (0x00091297) list_medium_line_t2_t1

0xb9c4,	// (0x000912b1) list_medium_line_t2_t2_ParamLimits

0xb9c4,	// (0x000912b1) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x0009564e) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x0009564e) list_medium_line_t2_t

0x14a7,	// (0x00086d94) list_medium_line_t3_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t3_g1

0xb9d9,	// (0x000912c6) list_medium_line_t3_t1_ParamLimits

0xb9d9,	// (0x000912c6) list_medium_line_t3_t1

0xb9f0,	// (0x000912dd) list_medium_line_t3_t2_ParamLimits

0xb9f0,	// (0x000912dd) list_medium_line_t3_t2

0xba05,	// (0x000912f2) list_medium_line_t3_t3_ParamLimits

0xba05,	// (0x000912f2) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00095653) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00095653) list_medium_line_t3_t

0x14a7,	// (0x00086d94) list_medium_line_g3_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_g3_g1

0x1a52,	// (0x0008733f) list_medium_line_g3_g2_ParamLimits

0x1a52,	// (0x0008733f) list_medium_line_g3_g2

0x14b3,	// (0x00086da0) list_medium_line_g3_g3_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0009565a) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0009565a) list_medium_line_g3_g

0x1a5e,	// (0x0008734b) list_medium_line_g3_t1_ParamLimits

0x1a5e,	// (0x0008734b) list_medium_line_g3_t1

0x14a7,	// (0x00086d94) list_medium_line_t2_g3_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t2_g3_g1

0x1a52,	// (0x0008733f) list_medium_line_t2_g3_g2_ParamLimits

0x1a52,	// (0x0008733f) list_medium_line_t2_g3_g2

0x14b3,	// (0x00086da0) list_medium_line_t2_g3_g3_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0009565a) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0009565a) list_medium_line_t2_g3_g

0xba17,	// (0x00091304) list_medium_line_t2_g3_t1_ParamLimits

0xba17,	// (0x00091304) list_medium_line_t2_g3_t1

0xba2e,	// (0x0009131b) list_medium_line_t2_g3_t2_ParamLimits

0xba2e,	// (0x0009131b) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00095661) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00095661) list_medium_line_t2_g3_t

0x14a7,	// (0x00086d94) list_medium_line_t3_g3_g1_ParamLimits

0x14a7,	// (0x00086d94) list_medium_line_t3_g3_g1

0x1a52,	// (0x0008733f) list_medium_line_t3_g3_g2_ParamLimits

0x1a52,	// (0x0008733f) list_medium_line_t3_g3_g2

0x14b3,	// (0x00086da0) list_medium_line_t3_g3_g3_ParamLimits

0x14b3,	// (0x00086da0) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0009565a) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0009565a) list_medium_line_t3_g3_g

0xba43,	// (0x00091330) list_medium_line_t3_g3_t1_ParamLimits

0xba43,	// (0x00091330) list_medium_line_t3_g3_t1

0xba57,	// (0x00091344) list_medium_line_t3_g3_t2_ParamLimits

0xba57,	// (0x00091344) list_medium_line_t3_g3_t2

0xba69,	// (0x00091356) list_medium_line_t3_g3_t3_ParamLimits

0xba69,	// (0x00091356) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x00095666) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x00095666) list_medium_line_t3_g3_t

0x1939,	// (0x00087226) list_medium_line_right_iconx2_g1

0x1803,	// (0x000870f0) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x0009566d) list_medium_line_right_iconx2_g

0x1a73,	// (0x00087360) list_medium_line_right_iconx2_t1

0x1939,	// (0x00087226) list_medium_line_t2_right_iconx2_g1

0x1803,	// (0x000870f0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x0009566d) list_medium_line_t2_right_iconx2_g

0xba7b,	// (0x00091368) list_medium_line_t2_right_iconx2_t1

0xba8b,	// (0x00091378) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00095672) list_medium_line_t2_right_iconx2_t

0x1a81,	// (0x0008736e) list_medium_line_x4_t4_t1

0xba99,	// (0x00091386) list_medium_line_x4_t4_t2

0xbaa9,	// (0x00091396) list_medium_line_x4_t4_t3

0xbab9,	// (0x000913a6) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x00095677) list_medium_line_x4_t4_t

0xbaf2,	// (0x000913df) tport_appsw_pane_ParamLimits

0xbaf2,	// (0x000913df) tport_appsw_pane

0xbafe,	// (0x000913eb) tport_contact_pane_ParamLimits

0xbafe,	// (0x000913eb) tport_contact_pane

0xbb0e,	// (0x000913fb) tport_listscroll_pane_ParamLimits

0xbb0e,	// (0x000913fb) tport_listscroll_pane

0xbb1e,	// (0x0009140b) cell_tport_appsw_pane_ParamLimits

0xbb1e,	// (0x0009140b) cell_tport_appsw_pane

0x30d8,	// (0x000889c5) tport_appsw_pane_g1_ParamLimits

0x30d8,	// (0x000889c5) tport_appsw_pane_g1

0x1a8f,	// (0x0008737c) tport_contact_pane_g1

0x1a98,	// (0x00087385) tport_contact_pane_t1

0x1aa6,	// (0x00087393) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x00095680) tport_contact_pane_t

0x1ab4,	// (0x000873a1) list_tport_pane

0x1abd,	// (0x000873aa) scroll_pane_cp_030

0x1ace,	// (0x000873bb) cell_tport_appsw_pane_g1

0x1ade,	// (0x000873cb) cell_tport_appsw_pane_t1

0xca03,	// (0x000922f0) grid_highlight_pane_cp019

0xbb49,	// (0x00091436) list_tport_double_graphic_pane_ParamLimits

0xbb49,	// (0x00091436) list_tport_double_graphic_pane

0xddb4,	// (0x000936a1) list_highlight_pane_cp023_ParamLimits

0xddb4,	// (0x000936a1) list_highlight_pane_cp023

0xbb5c,	// (0x00091449) list_tport_double_graphic_pane_g1_ParamLimits

0xbb5c,	// (0x00091449) list_tport_double_graphic_pane_g1

0xbb69,	// (0x00091456) list_tport_double_graphic_pane_t1_ParamLimits

0xbb69,	// (0x00091456) list_tport_double_graphic_pane_t1

0xbb7e,	// (0x0009146b) list_tport_double_graphic_pane_t2_ParamLimits

0xbb7e,	// (0x0009146b) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x0009568c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x0009568c) list_tport_double_graphic_pane_t

0xca03,	// (0x000922f0) main_cale_note_pane

0x9a1d,	// (0x0008f30a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9a1d,	// (0x0008f30a) cell_vitu2_function_top_wide_pane_cp01

0xb378,	// (0x00090c65) wait_bar_pane_cp05_ParamLimits

0xca03,	// (0x000922f0) listscroll_cmail_pane

0x1af4,	// (0x000873e1) list_cmail_pane

0xbb9a,	// (0x00091487) list_cmail_body_pane

0xbbbe,	// (0x000914ab) list_single_cmail_header_caption_pane

0xbbec,	// (0x000914d9) list_single_cmail_header_detail_pane_ParamLimits

0xbbec,	// (0x000914d9) list_single_cmail_header_detail_pane

0xbc24,	// (0x00091511) list_single_cmail_header_caption_pane_t1

0xbc34,	// (0x00091521) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbc34,	// (0x00091521) list_single_cmail_header_detail_pane_g1

0x2af2,	// (0x000883df) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2af2,	// (0x000883df) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00095691) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00095691) list_single_cmail_header_detail_pane_g

0x1b21,	// (0x0008740e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b21,	// (0x0008740e) list_single_cmail_header_detail_pane_t1

0x1b53,	// (0x00087440) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1b53,	// (0x00087440) list_single_cmail_header_editor_pane_bg

0x1b65,	// (0x00087452) list_cmail_body_pane_g1

0x1b6e,	// (0x0008745b) list_cmail_body_pane_t1

0xcf7c,	// (0x00092869) list_single_cmail_header_editor_pane_bg_g1

0xe7ee,	// (0x000940db) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf8c,	// (0x00092879) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf84,	// (0x00092871) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1a0,	// (0x00092a8d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfac,	// (0x00092899) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf9c,	// (0x00092889) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfa4,	// (0x00092891) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe7ce,	// (0x000940bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbc72,	// (0x0009155f) calenote_gesture_pane_ParamLimits

0xbc72,	// (0x0009155f) calenote_gesture_pane

0xbc8c,	// (0x00091579) calenote_window_pane_ParamLimits

0xbc8c,	// (0x00091579) calenote_window_pane

0x1b7c,	// (0x00087469) popup_note_window_cp01

0xbca4,	// (0x00091591) calenote_swipe_1_pane_ParamLimits

0xbca4,	// (0x00091591) calenote_swipe_1_pane

0xb6d7,	// (0x00090fc4) calenote_swipe_2_pane_ParamLimits

0xb6d7,	// (0x00090fc4) calenote_swipe_2_pane

0x1706,	// (0x00086ff3) calenote_swipe_1_pane_g1_ParamLimits

0x1706,	// (0x00086ff3) calenote_swipe_1_pane_g1

0x1713,	// (0x00087000) calenote_swipe_1_pane_g2_ParamLimits

0x1713,	// (0x00087000) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000955bb) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000955bb) calenote_swipe_1_pane_g

0x1b8e,	// (0x0008747b) calenote_swipe_1_pane_t1_ParamLimits

0x1b8e,	// (0x0008747b) calenote_swipe_1_pane_t1

0x1706,	// (0x00086ff3) calenote_swipe_2_pane_g1_ParamLimits

0x1706,	// (0x00086ff3) calenote_swipe_2_pane_g1

0x1bad,	// (0x0008749a) calenote_swipe_2_pane_g2_ParamLimits

0x1bad,	// (0x0008749a) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0009569d) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0009569d) calenote_swipe_2_pane_g

0x1bb9,	// (0x000874a6) calenote_swipe_2_pane_t1_ParamLimits

0x1bb9,	// (0x000874a6) calenote_swipe_2_pane_t1

0xca03,	// (0x000922f0) main_mup_navstr_pane

0x875b,	// (0x0008e048) main_mup3_pane_t7_ParamLimits

0x875b,	// (0x0008e048) main_mup3_pane_t7

0x9181,	// (0x0008ea6e) main_mp4_pane_g6_ParamLimits

0x9181,	// (0x0008ea6e) main_mp4_pane_g6

0x9503,	// (0x0008edf0) main_image3_pane_t4_ParamLimits

0x9503,	// (0x0008edf0) main_image3_pane_t4

0xbcb7,	// (0x000915a4) popup_navstr_preview_pane_ParamLimits

0xbcb7,	// (0x000915a4) popup_navstr_preview_pane

0xbcc3,	// (0x000915b0) scroll_navstr_pane_ParamLimits

0xbcc3,	// (0x000915b0) scroll_navstr_pane

0xca03,	// (0x000922f0) bg_popup_preview_window_pane_cp04

0x1be0,	// (0x000874cd) popup_navstr_preview_pane_t1

0xbccf,	// (0x000915bc) scroll_navstr_pane_g1_ParamLimits

0xbccf,	// (0x000915bc) scroll_navstr_pane_g1

0xbcdc,	// (0x000915c9) scroll_navstr_pane_t1_ParamLimits

0xbcdc,	// (0x000915c9) scroll_navstr_pane_t1

0x1b85,	// (0x00087472) bg_button_pane_cp014

0x1b85,	// (0x00087472) bg_button_pane_cp030

0x169c,	// (0x00086f89) list_double_fisheye_pane_g4_ParamLimits

0x169c,	// (0x00086f89) list_double_fisheye_pane_g4

0x2ae1,	// (0x000883ce) list_double_fisheye_pane_g5_ParamLimits

0x2ae1,	// (0x000883ce) list_double_fisheye_pane_g5

0x1afc,	// (0x000873e9) sp_fs_scroll_pane_cp03

0x1843,	// (0x00087130) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x184f,	// (0x0008713c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000955d8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x185b,	// (0x00087148) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbb90,	// (0x0009147d) sp_fs_scroll_pane_cp02

0xe434,	// (0x00093d21) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe434,	// (0x00093d21) popup_sp_fs_calendar_preview_list_single_pane

0xca03,	// (0x000922f0) main_cam6_pano_pane

0x7721,	// (0x0008d00e) main_mup3_pane_ParamLimits

0xca03,	// (0x000922f0) main_phacti_pane

0xb24d,	// (0x00090b3a) bg_button_pane_cp11

0xb265,	// (0x00090b52) main_mobtv_info_pane_g2_ParamLimits

0xb265,	// (0x00090b52) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00095538) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00095538) main_mobtv_info_pane_g

0xb417,	// (0x00090d04) sc_clock_pane_t5_ParamLimits

0xb417,	// (0x00090d04) sc_clock_pane_t5

0xb4bd,	// (0x00090daa) main_radioblah_pane_g1_ParamLimits

0xdeea,	// (0x000937d7) main_radioblah_pane_t3_ParamLimits

0xdeea,	// (0x000937d7) main_radioblah_pane_t3

0xdf02,	// (0x000937ef) main_radioblah_pane_t4_ParamLimits

0xdf02,	// (0x000937ef) main_radioblah_pane_t4

0xb4db,	// (0x00090dc8) main_radioblah_text_pane_ParamLimits

0xb4db,	// (0x00090dc8) main_radioblah_text_pane

0xb4e8,	// (0x00090dd5) main_radioblah_info_pane_g1_ParamLimits

0xb57d,	// (0x00090e6a) main_radioblah_info_pane_t4_ParamLimits

0xb57d,	// (0x00090e6a) main_radioblah_info_pane_t4

0xddb4,	// (0x000936a1) main_sp_fs_calendar_pane

0xbcee,	// (0x000915db) main_phacti_pane_g1

0xbcf6,	// (0x000915e3) phacti_note_pane_ParamLimits

0xbcf6,	// (0x000915e3) phacti_note_pane

0x1bf7,	// (0x000874e4) phacti_term_pane_ParamLimits

0x1bf7,	// (0x000874e4) phacti_term_pane

0x1c0c,	// (0x000874f9) phacti_note_pane_t1_ParamLimits

0x1c0c,	// (0x000874f9) phacti_note_pane_t1

0x1c23,	// (0x00087510) phacti_term_pane_g1

0x1c2b,	// (0x00087518) phacti_term_pane_t1_ParamLimits

0x1c2b,	// (0x00087518) phacti_term_pane_t1

0x1c55,	// (0x00087542) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1c5d,	// (0x0008754a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x000956a7) popup_sp_fs_calendar_preview_list_single_pane_g

0x1c65,	// (0x00087552) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1c65,	// (0x00087552) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1c7b,	// (0x00087568) aid_popup_sp_fs_bg_corner_pane

0x2ddd,	// (0x000886ca) popup_sp_fs_calendar_preview_bg_pane_g1

0xca03,	// (0x000922f0) popup_sp_fs_calendar_preview_bg_pane

0x1c83,	// (0x00087570) popup_sp_fs_calendar_preview_list_pane

0xddb4,	// (0x000936a1) bg_main_sp_fs_cale_pane_ParamLimits

0xddb4,	// (0x000936a1) bg_main_sp_fs_cale_pane

0x1c94,	// (0x00087581) listscroll_cale_mrui_pane_ParamLimits

0x1c94,	// (0x00087581) listscroll_cale_mrui_pane

0x1ca8,	// (0x00087595) listscroll_sp_fs_schedule_track_pane

0x1cb1,	// (0x0008759e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1cb1,	// (0x0008759e) main_sp_fs_ctrlbar_pane_cp01

0x1cc2,	// (0x000875af) main_sp_fs_ribbon_pane

0x1cca,	// (0x000875b7) popup_sp_fs_cale_preview_window

0xbd3d,	// (0x0009162a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbd3d,	// (0x0009162a) list_single_sp_fs_schedule_track_pane

0x8dd1,	// (0x0008e6be) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x8dd1,	// (0x0008e6be) bg_sp_fs_highlight_list_pane_cp03

0xbd65,	// (0x00091652) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbd65,	// (0x00091652) list_single_sp_fs_schedule_track_pane_g1

0xbd71,	// (0x0009165e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbd71,	// (0x0009165e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x000956ac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x000956ac) list_single_sp_fs_schedule_track_pane_g

0xbd7d,	// (0x0009166a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbd7d,	// (0x0009166a) list_single_sp_fs_schedule_track_pane_t1

0xbd95,	// (0x00091682) sp_fs_schedule_track_pane_ParamLimits

0xbd95,	// (0x00091682) sp_fs_schedule_track_pane

0x1cdc,	// (0x000875c9) sp_fs_schedule_track_pane_g1

0x1ce4,	// (0x000875d1) sp_fs_schedule_track_pane_g2

0x1cec,	// (0x000875d9) sp_fs_schedule_track_pane_g3

0x1cf4,	// (0x000875e1) sp_fs_schedule_track_pane_g4

0x1cfc,	// (0x000875e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x000956b1) sp_fs_schedule_track_pane_g

0xcf7c,	// (0x00092869) bg_sp_fs_schedule_viewer_highlight_g1

0xe7ee,	// (0x000940db) bg_sp_fs_schedule_viewer_highlight_g2

0xcf84,	// (0x00092871) bg_sp_fs_schedule_viewer_highlight_g3

0xcf8c,	// (0x00092879) bg_sp_fs_schedule_viewer_highlight_g4

0xd1a0,	// (0x00092a8d) bg_sp_fs_schedule_viewer_highlight_g5

0xcf9c,	// (0x00092889) bg_sp_fs_schedule_viewer_highlight_g6

0xcfa4,	// (0x00092891) bg_sp_fs_schedule_viewer_highlight_g7

0xcfac,	// (0x00092899) bg_sp_fs_schedule_viewer_highlight_g8

0xe7ce,	// (0x000940bb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x000956bc) bg_sp_fs_schedule_viewer_highlight_g

0xca03,	// (0x000922f0) bg_main_sp_fs_ribbon_pane

0xbda5,	// (0x00091692) main_sp_fs_ribbon_pane_g1

0x1d04,	// (0x000875f1) main_sp_fs_ribbon_pane_t1

0xbdb0,	// (0x0009169d) main_sp_fs_ribbon_pane_t2

0x1d13,	// (0x00087600) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x000956cf) main_sp_fs_ribbon_pane_t

0x1d22,	// (0x0008760f) main_sp_fs_ribbon_scheduler_pane

0x1d2a,	// (0x00087617) bg_main_sp_fs_ribbon_pane_g1

0x1d33,	// (0x00087620) bg_main_sp_fs_ribbon_pane_g2

0x1d3c,	// (0x00087629) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x000956d6) bg_main_sp_fs_ribbon_pane_g

0x1d44,	// (0x00087631) main_sp_fs_ribbon_scheduler_pane_g1

0x1d4d,	// (0x0008763a) main_sp_fs_ribbon_scheduler_pane_g2

0x1d56,	// (0x00087643) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x000956dd) main_sp_fs_ribbon_scheduler_pane_g

0x1d5f,	// (0x0008764c) list_cale_mrui_pane

0xbdc1,	// (0x000916ae) sp_fs_scroll_pane_cp07_ParamLimits

0xbdc1,	// (0x000916ae) sp_fs_scroll_pane_cp07

0xbdd7,	// (0x000916c4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbdd7,	// (0x000916c4) bg_sp_fs_schedule_viewer_highlight

0x1d68,	// (0x00087655) list_single_sp_fs_schedule_track_pane_cp01

0x1d70,	// (0x0008765d) list_sp_fs_schedule_track_pane

0x1d78,	// (0x00087665) sp_fs_scroll_pane_cp06_ParamLimits

0x1d78,	// (0x00087665) sp_fs_scroll_pane_cp06

0x2ddd,	// (0x000886ca) bgmain_sp_fs_calendar_pane_g1

0xbde4,	// (0x000916d1) list_single_cale_mrui_pane_ParamLimits

0xbde4,	// (0x000916d1) list_single_cale_mrui_pane

0x1d8a,	// (0x00087677) list_single_cale_mrui_row_pane_ParamLimits

0x1d8a,	// (0x00087677) list_single_cale_mrui_row_pane

0x1d97,	// (0x00087684) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d97,	// (0x00087684) list_single_cale_mrui_row_pane_g1

0x1ddc,	// (0x000876c9) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ddc,	// (0x000876c9) list_single_cale_mrui_row_pane_t1

0xbe13,	// (0x00091700) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbe13,	// (0x00091700) list_single_cale_mrui_row_pane_t2

0x1dee,	// (0x000876db) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1dee,	// (0x000876db) list_single_cale_mrui_row_pane_t3

0x1e1d,	// (0x0008770a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e1d,	// (0x0008770a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x000956eb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x000956eb) list_single_cale_mrui_row_pane_t

0xbe79,	// (0x00091766) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbe79,	// (0x00091766) list_single_cmail_header_editor_pane_bg_cp01

0xbe9b,	// (0x00091788) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbe9b,	// (0x00091788) list_single_cmail_header_editor_pane_bg_cp02

0xbeb7,	// (0x000917a4) main_radioblah_text_pane_t1_ParamLimits

0xbeb7,	// (0x000917a4) main_radioblah_text_pane_t1

0x1e4c,	// (0x00087739) cam6_indi_pane_cp01

0x1e54,	// (0x00087741) cam6_mode_pane_cp01

0x1e5c,	// (0x00087749) cam6_pano_pane

0x1e65,	// (0x00087752) cam6_zoom_pane_cp01

0x1e6d,	// (0x0008775a) cam6_pano_image_pane

0x1e78,	// (0x00087765) cam6_pano_pane_g1

0xdb9d,	// (0x0009348a) cam6_pano_pane_g2

0x1e81,	// (0x0008776e) cam6_pano_pane_g3

0x1e8a,	// (0x00087777) cam6_pano_pane_g4

0x33af,	// (0x00088c9c) cam6_pano_pane_g5

0x1e93,	// (0x00087780) cam6_pano_pane_g6

0x1e9d,	// (0x0008778a) cam6_pano_pane_g7

0x1ea5,	// (0x00087792) cam6_pano_pane_g8

0x1eae,	// (0x0008779b) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x000956f4) cam6_pano_pane_g

0xca03,	// (0x000922f0) main_browser_tag_pane

0x1bd8,	// (0x000874c5) grid_navstr_albumart_pane

0x1eb9,	// (0x000877a6) cell_navstr_albumart_pane_ParamLimits

0x1eb9,	// (0x000877a6) cell_navstr_albumart_pane

0xf074,	// (0x00094961) cell_navstr_albumart_pane_g1

0x10ad,	// (0x0008699a) cell_navstr_albumart_pane_g2

0x10bd,	// (0x000869aa) cell_navstr_albumart_pane_g3

0x10b5,	// (0x000869a2) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00095707) cell_navstr_albumart_pane_g

0xbed4,	// (0x000917c1) bt_list_pane_ParamLimits

0xbed4,	// (0x000917c1) bt_list_pane

0xbefb,	// (0x000917e8) bt_list_pane_t1

0xbf0a,	// (0x000917f7) bt_list_pane_t2

0x0001,

0xfe23,	// (0x00095710) bt_list_pane_t

0xca03,	// (0x000922f0) main_cale_prevew_pane

0xbf19,	// (0x00091806) popup_cale_preview_window_ParamLimits

0xbf19,	// (0x00091806) popup_cale_preview_window

0xddb4,	// (0x000936a1) bg_popup_preview_window_pane_cp05_ParamLimits

0xddb4,	// (0x000936a1) bg_popup_preview_window_pane_cp05

0x1edb,	// (0x000877c8) list_cale_preview_pane_ParamLimits

0x1edb,	// (0x000877c8) list_cale_preview_pane

0xbf30,	// (0x0009181d) list_double_cale_preview_pane_ParamLimits

0xbf30,	// (0x0009181d) list_double_cale_preview_pane

0xbf42,	// (0x0009182f) list_single_cale_preview_pane_ParamLimits

0xbf42,	// (0x0009182f) list_single_cale_preview_pane

0xbf56,	// (0x00091843) list_single_cale_preview_pane_g1

0xbf5e,	// (0x0009184b) list_single_cale_preview_pane_t1_ParamLimits

0xbf5e,	// (0x0009184b) list_single_cale_preview_pane_t1

0xbf73,	// (0x00091860) list_double_cale_preview_pane_g1

0xbf7b,	// (0x00091868) list_double_cale_preview_pane_t1_ParamLimits

0xbf7b,	// (0x00091868) list_double_cale_preview_pane_t1

0xbf90,	// (0x0009187d) list_double_cale_preview_pane_t2_ParamLimits

0xbf90,	// (0x0009187d) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x00095715) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x00095715) list_double_cale_preview_pane_t

0xca03,	// (0x000922f0) main_ezdial_pane

0xddb4,	// (0x000936a1) main_sp_fs_email_pane_ParamLimits

0xb70d,	// (0x00090ffa) cmail_ddmenu_btn01_pane_ParamLimits

0xb70d,	// (0x00090ffa) cmail_ddmenu_btn01_pane

0xb72a,	// (0x00091017) cmail_ddmenu_btn02_pane_ParamLimits

0xb72a,	// (0x00091017) cmail_ddmenu_btn02_pane

0xb748,	// (0x00091035) cmail_ddmenu_btn03_pane_ParamLimits

0xb748,	// (0x00091035) cmail_ddmenu_btn03_pane

0xb776,	// (0x00091063) main_sp_fs_ctrlbar_pane_ParamLimits

0xb790,	// (0x0009107d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbb9a,	// (0x00091487) list_cmail_body_pane_ParamLimits

0x1b0b,	// (0x000873f8) bg_button_pane_cp12

0x1b14,	// (0x00087401) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1b14,	// (0x00087401) list_single_cmail_header_detail_pane_g3

0xbc4c,	// (0x00091539) list_single_cmail_header_detail_pane_t2_ParamLimits

0xbc4c,	// (0x00091539) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00095698) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00095698) list_single_cmail_header_detail_pane_t

0x1c40,	// (0x0008752d) phacti_term_pane_t2_ParamLimits

0x1c40,	// (0x0008752d) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x000956a2) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x000956a2) phacti_term_pane_t

0x1ee7,	// (0x000877d4) aid_size_list_single_double

0xbfa8,	// (0x00091895) popup_ezdial_listscroll_window

0xbfcb,	// (0x000918b8) popup_number_entry_window_cp01

0xef05,	// (0x000947f2) bg_popup_call_pane_cp09

0x1ef3,	// (0x000877e0) ezdial_list_pane

0x1efb,	// (0x000877e8) scroll_pane_cp23

0x2bc0,	// (0x000884ad) bg_button_pane_cp028_ParamLimits

0x2bc0,	// (0x000884ad) bg_button_pane_cp028

0xbfd9,	// (0x000918c6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbfd9,	// (0x000918c6) cmail_ddmenu_btn01_pane_g1

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x0009571a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x0009571a) cmail_ddmenu_btn01_pane_g

0x1f03,	// (0x000877f0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1f03,	// (0x000877f0) cmail_ddmenu_btn01_pane_t1

0x1298,	// (0x00086b85) bg_button_pane_cp029_ParamLimits

0x1298,	// (0x00086b85) bg_button_pane_cp029

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn02_pane_g1

0xc003,	// (0x000918f0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc003,	// (0x000918f0) cmail_ddmenu_btn02_pane_t1

0x8dd1,	// (0x0008e6be) bg_button_pane_cp031_ParamLimits

0x8dd1,	// (0x0008e6be) bg_button_pane_cp031

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbfeb,	// (0x000918d8) cmail_ddmenu_btn03_pane_g1

0xc003,	// (0x000918f0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc003,	// (0x000918f0) cmail_ddmenu_btn03_pane_t1

0x93a0,	// (0x0008ec8d) cell_dialer2_keypad_pane_t1_ParamLimits

0x93ba,	// (0x0008eca7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x93ba,	// (0x0008eca7) cell_dialer2_keypad_pane_t1_copy1

0xb0d2,	// (0x000909bf) ncimui_group_button_pane

0xddb4,	// (0x000936a1) main_sp_fs_calendar_pane_ParamLimits

0xbbbe,	// (0x000914ab) list_single_cmail_header_caption_pane_ParamLimits

0x1c8b,	// (0x00087578) aid_recal_txt_sm_pane

0xca03,	// (0x000922f0) mian_recal_day_pane

0x1cca,	// (0x000875b7) popup_sp_fs_cale_preview_window_ParamLimits

0xca03,	// (0x000922f0) list_recal_day_pane

0x1f3b,	// (0x00087828) list_single_recal_day_pane_ParamLimits

0x1f3b,	// (0x00087828) list_single_recal_day_pane

0x1f4d,	// (0x0008783a) list_single_recal_day_pane_g1_ParamLimits

0x1f4d,	// (0x0008783a) list_single_recal_day_pane_g1

0x1f59,	// (0x00087846) list_single_recal_day_pane_g2_ParamLimits

0x1f59,	// (0x00087846) list_single_recal_day_pane_g2

0x1f69,	// (0x00087856) list_single_recal_day_pane_g3_ParamLimits

0x1f69,	// (0x00087856) list_single_recal_day_pane_g3

0xc027,	// (0x00091914) list_single_recal_day_pane_g4_ParamLimits

0xc027,	// (0x00091914) list_single_recal_day_pane_g4

0x1f75,	// (0x00087862) list_single_recal_day_pane_g5_ParamLimits

0x1f75,	// (0x00087862) list_single_recal_day_pane_g5

0x1f85,	// (0x00087872) list_single_recal_day_pane_g6_ParamLimits

0x1f85,	// (0x00087872) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x00095729) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x00095729) list_single_recal_day_pane_g

0x1f9c,	// (0x00087889) list_single_recal_day_pane_t1

0x1fae,	// (0x0008789b) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x00095734) list_single_recal_day_pane_t

0xc047,	// (0x00091934) ncimui_query_button_pane_ParamLimits

0xc047,	// (0x00091934) ncimui_query_button_pane

0xc057,	// (0x00091944) ncimui_query_button_pane_t1_ParamLimits

0xc057,	// (0x00091944) ncimui_query_button_pane_t1

0x1fc3,	// (0x000878b0) ncimui_query_button_pane_t2_ParamLimits

0x1fc3,	// (0x000878b0) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x00095739) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x00095739) ncimui_query_button_pane_t

0xc06a,	// (0x00091957) query_button_pane_ParamLimits

0xc06a,	// (0x00091957) query_button_pane

0xca03,	// (0x000922f0) bg_button_pane_cp0028

0x1fd6,	// (0x000878c3) query_button_pane_t1

0x773d,	// (0x0008d02a) main_tport_pane_ParamLimits

0xbac9,	// (0x000913b6) bg_popup_window_pane_cp01_ParamLimits

0xbac9,	// (0x000913b6) bg_popup_window_pane_cp01

0xbad6,	// (0x000913c3) heading_pane_cp08_ParamLimits

0xbad6,	// (0x000913c3) heading_pane_cp08

0xbae4,	// (0x000913d1) heading_pane_cp07_ParamLimits

0xbae4,	// (0x000913d1) heading_pane_cp07

0x1ace,	// (0x000873bb) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00095685) cell_tport_appsw_pane_g

0x6e5a,	// (0x0008c747) input_candi_list_open_g1

0xe9b3,	// (0x000942a0) list_cale_time_pane_g6_ParamLimits

0xe9b3,	// (0x000942a0) list_cale_time_pane_g6

0x81bc,	// (0x0008daa9) aid_size_touch_calib_1_ParamLimits

0x81bc,	// (0x0008daa9) aid_size_touch_calib_1

0x81c8,	// (0x0008dab5) aid_size_touch_calib_2_ParamLimits

0x81c8,	// (0x0008dab5) aid_size_touch_calib_2

0x81d6,	// (0x0008dac3) aid_size_touch_calib_3_ParamLimits

0x81d6,	// (0x0008dac3) aid_size_touch_calib_3

0x81e6,	// (0x0008dad3) aid_size_touch_calib_4_ParamLimits

0x81e6,	// (0x0008dad3) aid_size_touch_calib_4

0x81f4,	// (0x0008dae1) main_touch_calib_button_group_pane_ParamLimits

0x81f4,	// (0x0008dae1) main_touch_calib_button_group_pane

0x8202,	// (0x0008daef) main_touch_calib_pane_g1_ParamLimits

0x820e,	// (0x0008dafb) main_touch_calib_pane_g2_ParamLimits

0x821a,	// (0x0008db07) main_touch_calib_pane_g3_ParamLimits

0x8226,	// (0x0008db13) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0009504e) main_touch_calib_pane_g_ParamLimits

0x8232,	// (0x0008db1f) main_touch_calib_pane_t1_ParamLimits

0x8249,	// (0x0008db36) main_touch_calib_pane_t2_ParamLimits

0x8260,	// (0x0008db4d) main_touch_calib_pane_t3_ParamLimits

0x8274,	// (0x0008db61) main_touch_calib_pane_t4_ParamLimits

0x8288,	// (0x0008db75) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00095057) main_touch_calib_pane_t_ParamLimits

0x317f,	// (0x00088a6c) list_single_fp_cale_pane_g3_ParamLimits

0x317f,	// (0x00088a6c) list_single_fp_cale_pane_g3

0x7721,	// (0x0008d00e) bg_button_pane_cp012_ParamLimits

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp03_ParamLimits

0xa1e9,	// (0x0008fad6) cell_vitu2_function_top_pane_g1_ParamLimits

0x7721,	// (0x0008d00e) bg_vkb2_func_pane_cp04_ParamLimits

0xb05a,	// (0x00090947) main_ncimui_button_group_pane_ParamLimits

0xb05a,	// (0x00090947) main_ncimui_button_group_pane

0xb0c0,	// (0x000909ad) main_ncimui_pane_t3_ParamLimits

0xb0c0,	// (0x000909ad) main_ncimui_pane_t3

0x1bee,	// (0x000874db) phacti_button_group_pane

0x1ee7,	// (0x000877d4) aid_size_list_single_double_ParamLimits

0xbfa8,	// (0x00091895) popup_ezdial_listscroll_window_ParamLimits

0xbfcb,	// (0x000918b8) popup_number_entry_window_cp01_ParamLimits

0xc077,	// (0x00091964) phacti_button_pane_ParamLimits

0xc077,	// (0x00091964) phacti_button_pane

0xca03,	// (0x000922f0) bg_button_pane_cp14

0x1fe4,	// (0x000878d1) phacti_button_pane_t1

0xc088,	// (0x00091975) main_touch_calib_button_pane_ParamLimits

0xc088,	// (0x00091975) main_touch_calib_button_pane

0xe31e,	// (0x00093c0b) bg_button_pane_cp18_ParamLimits

0xe31e,	// (0x00093c0b) bg_button_pane_cp18

0x1ff2,	// (0x000878df) main_touch_calib_button_pane_t1_ParamLimits

0x1ff2,	// (0x000878df) main_touch_calib_button_pane_t1

0x2008,	// (0x000878f5) main_touch_calib_button_pane_t2_ParamLimits

0x2008,	// (0x000878f5) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x0009573e) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x0009573e) main_touch_calib_button_pane_t

0xca03,	// (0x000922f0) cell_ncimui_button_pane

0xca03,	// (0x000922f0) bg_button_pane_cp032

0x2026,	// (0x00087913) cell_ncimui_button_pane_t1

0x9416,	// (0x0008ed03) image3_infobar_pane_ParamLimits

0x9416,	// (0x0008ed03) image3_infobar_pane

0xb439,	// (0x00090d26) fs_bigclock_status_pane_ParamLimits

0xb439,	// (0x00090d26) fs_bigclock_status_pane

0xb446,	// (0x00090d33) main_fs_bigclock_clock_pane_ParamLimits

0xb446,	// (0x00090d33) main_fs_bigclock_clock_pane

0xb45c,	// (0x00090d49) main_fs_bigclock_indi_pane_ParamLimits

0xb45c,	// (0x00090d49) main_fs_bigclock_indi_pane

0xb48b,	// (0x00090d78) main_fs_bigclock_swipe_pane_ParamLimits

0xb48b,	// (0x00090d78) main_fs_bigclock_swipe_pane

0xca03,	// (0x000922f0) main_fs_clock_dumped_data

0xdcaa,	// (0x00093597) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdcaa,	// (0x00093597) list_single_fs_bigclock_indicator_pane_g1

0xdcd3,	// (0x000935c0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdcd3,	// (0x000935c0) list_single_fs_bigclock_indicator_pane_g2

0xdced,	// (0x000935da) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdced,	// (0x000935da) list_single_fs_bigclock_indicator_pane_g3

0xdd07,	// (0x000935f4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd07,	// (0x000935f4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0009556c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0009556c) list_single_fs_bigclock_indicator_pane_g

0xdddc,	// (0x000936c9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdddc,	// (0x000936c9) list_single_fs_bigclock_indicator_pane_t1

0xde04,	// (0x000936f1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde04,	// (0x000936f1) list_single_fs_bigclock_indicator_pane_t2

0xde2c,	// (0x00093719) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde2c,	// (0x00093719) list_single_fs_bigclock_indicator_pane_t3

0xde54,	// (0x00093741) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde54,	// (0x00093741) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00095577) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00095577) list_single_fs_bigclock_indicator_pane_t

0x2034,	// (0x00087921) image3_infobar_fav_pane_ParamLimits

0x2034,	// (0x00087921) image3_infobar_fav_pane

0x2044,	// (0x00087931) image3_infobar_loc_pane_ParamLimits

0x2044,	// (0x00087931) image3_infobar_loc_pane

0x2058,	// (0x00087945) image3_infobar_time_pane_ParamLimits

0x2058,	// (0x00087945) image3_infobar_time_pane

0x2ddd,	// (0x000886ca) image3_infobar_time_pane_g1

0x2068,	// (0x00087955) image3_infobar_time_pane_t1

0x2ddd,	// (0x000886ca) image3_infobar_loc_pane_g1

0x2076,	// (0x00087963) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x00095743) image3_infobar_loc_pane_g

0x207e,	// (0x0008796b) image3_infobar_loc_pane_t1

0x2ddd,	// (0x000886ca) image3_infobar_fav_pane_g1

0x208c,	// (0x00087979) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x00095748) image3_infobar_fav_pane_g

0x2094,	// (0x00087981) fs_bigclock_status_battery_pane

0x209d,	// (0x0008798a) fs_bigclock_status_signal_pane

0x20a6,	// (0x00087993) fs_bigclock_status_title_pane

0x20af,	// (0x0008799c) fs_bigclock_status_signal_pane_g1

0x20b8,	// (0x000879a5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x0009574d) fs_bigclock_status_signal_pane_g

0x20c0,	// (0x000879ad) fs_bigclock_status_battery_pane_g1

0x20c9,	// (0x000879b6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x00095752) fs_bigclock_status_battery_pane_g

0x20d1,	// (0x000879be) fs_bigclock_status_title_pane_t1

0x2ddd,	// (0x000886ca) main_fs_bigclock_clock_pane_g1

0x20df,	// (0x000879cc) main_fs_bigclock_clock_pane_g2

0x20df,	// (0x000879cc) main_fs_bigclock_clock_pane_g3

0x20df,	// (0x000879cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x00095757) main_fs_bigclock_clock_pane_g

0x20e7,	// (0x000879d4) main_fs_bigclock_clock_pane_t1

0x20f5,	// (0x000879e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x00095760) main_fs_bigclock_clock_pane_t

0x2104,	// (0x000879f1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2104,	// (0x000879f1) list_single_fs_bigclock_indicator_pane

0xc098,	// (0x00091985) list_single_fs_bigclock_pane_ParamLimits

0xc098,	// (0x00091985) list_single_fs_bigclock_pane

0x211e,	// (0x00087a0b) main_fs_bigclock_indicator_pane_t1

0x212d,	// (0x00087a1a) list_single_fs_bigclock_pane_g1

0x2135,	// (0x00087a22) list_single_fs_bigclock_pane_t1

0x2ddd,	// (0x000886ca) main_fs_bigclock_swipe_pane_g1

0x2178,	// (0x00087a65) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00095771) main_fs_bigclock_swipe_pane_g

0x2180,	// (0x00087a6d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2180,	// (0x00087a6d) main_fs_bigclock_swipe_pane_t1

0x6613,	// (0x0008bf00) call_type_pane_ParamLimits

0xca03,	// (0x000922f0) main_btmg_pane

0x1dc3,	// (0x000876b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1dc3,	// (0x000876b0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x000956e4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x000956e4) list_single_cale_mrui_row_pane_g

0x1f22,	// (0x0008780f) list_recal_vselct_arw_lo_pane

0x1f2a,	// (0x00087817) list_recal_vselct_arw_up_pane

0x1f32,	// (0x0008781f) list_recal_vselct_pane

0xc0fb,	// (0x000919e8) btmg_button_pane

0xc107,	// (0x000919f4) main_btmg_pane_g1

0xca03,	// (0x000922f0) bg_button_pane_cp044

0x219d,	// (0x00087a8a) btmg_button_pane_t1

0x1290,	// (0x00086b7d) aid_listscroll_gen

0xddb4,	// (0x000936a1) main_cntbar_detail_pane

0x1aec,	// (0x000873d9) list_cmail_folder_pane

0x1afc,	// (0x000873e9) sp_fs_scroll_pane_cp03_ParamLimits

0xc10f,	// (0x000919fc) list_single_fs_dyc_pane_cp01_ParamLimits

0xc10f,	// (0x000919fc) list_single_fs_dyc_pane_cp01

0x21ab,	// (0x00087a98) aid_size_cmail_indent

0x21b4,	// (0x00087aa1) list_single_dyc_row_pane_cp01

0xc15b,	// (0x00091a48) cntbar_detail_list_pane_ParamLimits

0xc15b,	// (0x00091a48) cntbar_detail_list_pane

0xc195,	// (0x00091a82) main_cntbar_detail_cont_pane_ParamLimits

0xc195,	// (0x00091a82) main_cntbar_detail_cont_pane

0x65ad,	// (0x0008be9a) scroll_pane_cp032_ParamLimits

0x65ad,	// (0x0008be9a) scroll_pane_cp032

0xc1a1,	// (0x00091a8e) cntbar_detail_list_event_pane_ParamLimits

0xc1a1,	// (0x00091a8e) cntbar_detail_list_event_pane

0xc167,	// (0x00091a54) cntbar_detail_list_shct_pane

0xe83c,	// (0x00094129) aid_list_gen

0x21bd,	// (0x00087aaa) aid_scroll

0x21c6,	// (0x00087ab3) aid_size_touch_scroll_bar

0x2aae,	// (0x0008839b) aid_list_double

0x21d8,	// (0x00087ac5) aid_list_single

0x303a,	// (0x00088927) aid_list_single_lg

0x21e1,	// (0x00087ace) aid_list_z_g_a_sm

0x2afe,	// (0x000883eb) aid_list_z_g_d

0x21e9,	// (0x00087ad6) aid_txt_z_prm

0xc1b5,	// (0x00091aa2) aid_txt_z_prm_cp01

0xc1c3,	// (0x00091ab0) aid_txt_z_sec

0xc1d1,	// (0x00091abe) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc1d1,	// (0x00091abe) main_cntbar_detail_cont_pane_g1

0xc1de,	// (0x00091acb) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc1de,	// (0x00091acb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x00095776) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x00095776) main_cntbar_detail_cont_pane_g

0x21f7,	// (0x00087ae4) main_cntbar_detail_cont_pane_t1

0x2205,	// (0x00087af2) main_cntbar_detail_cont_pane_t2

0x2213,	// (0x00087b00) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0009577b) main_cntbar_detail_cont_pane_t

0xc1ea,	// (0x00091ad7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc1ea,	// (0x00091ad7) cell_cntbar_detail_list_shct_pane

0x2221,	// (0x00087b0e) cntbar_detail_list_shct_pane_g1

0x222a,	// (0x00087b17) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00095782) cntbar_detail_list_shct_pane_g

0xc1fe,	// (0x00091aeb) cntbar_detail_list_event_pane_g1_ParamLimits

0xc1fe,	// (0x00091aeb) cntbar_detail_list_event_pane_g1

0xc20a,	// (0x00091af7) cntbar_detail_list_event_pane_g2_ParamLimits

0xc20a,	// (0x00091af7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x00095787) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x00095787) cntbar_detail_list_event_pane_g

0xc276,	// (0x00091b63) cntbar_detail_list_event_pane_t1_ParamLimits

0xc276,	// (0x00091b63) cntbar_detail_list_event_pane_t1

0xc28b,	// (0x00091b78) cntbar_detail_list_event_pane_t2_ParamLimits

0xc28b,	// (0x00091b78) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00095794) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00095794) cntbar_detail_list_event_pane_t

0x2ddd,	// (0x000886ca) cell_cntbar_detail_list_shct_pane_g1

0x69ac,	// (0x0008c299) navi_pane_mv_g3

0xddb4,	// (0x000936a1) main_cntbar_detail_pane_ParamLimits

0xca03,	// (0x000922f0) main_notif_wgt_pane

0x90c8,	// (0x0008e9b5) aid_tch_main_mp4_pane_g4

0x92fd,	// (0x0008ebea) popup_slider_window_cp02

0x1f18,	// (0x00087805) list_recal_day_event_pane

0xc13b,	// (0x00091a28) cntbar_detail_btn_pane_ParamLimits

0xc13b,	// (0x00091a28) cntbar_detail_btn_pane

0xc14b,	// (0x00091a38) cntbar_detail_btn_pane_cp01_ParamLimits

0xc14b,	// (0x00091a38) cntbar_detail_btn_pane_cp01

0xc167,	// (0x00091a54) cntbar_detail_list_shct_pane_ParamLimits

0xc173,	// (0x00091a60) cntbar_detail_pane_g1_ParamLimits

0xc173,	// (0x00091a60) cntbar_detail_pane_g1

0xc17f,	// (0x00091a6c) cntbar_detail_pane_t1_ParamLimits

0xc17f,	// (0x00091a6c) cntbar_detail_pane_t1

0xc216,	// (0x00091b03) cntbar_detail_list_event_pane_g3_ParamLimits

0xc216,	// (0x00091b03) cntbar_detail_list_event_pane_g3

0xc22e,	// (0x00091b1b) cntbar_detail_list_event_pane_g4_ParamLimits

0xc22e,	// (0x00091b1b) cntbar_detail_list_event_pane_g4

0xc246,	// (0x00091b33) cntbar_detail_list_event_pane_g5_ParamLimits

0xc246,	// (0x00091b33) cntbar_detail_list_event_pane_g5

0xc25e,	// (0x00091b4b) cntbar_detail_list_event_pane_g6_ParamLimits

0xc25e,	// (0x00091b4b) cntbar_detail_list_event_pane_g6

0xc2a0,	// (0x00091b8d) cntbar_detail_list_event_pane_t3_ParamLimits

0xc2a0,	// (0x00091b8d) cntbar_detail_list_event_pane_t3

0xc2b2,	// (0x00091b9f) popup_notif_wgt_window_ParamLimits

0xc2b2,	// (0x00091b9f) popup_notif_wgt_window

0xc2c2,	// (0x00091baf) popup_submenu_window_cp01_ParamLimits

0xc2c2,	// (0x00091baf) popup_submenu_window_cp01

0xef05,	// (0x000947f2) bg_popup_window_pane_cp10

0x2233,	// (0x00087b20) listscroll_notif_wgt_pane

0x2244,	// (0x00087b31) list_notif_wgt_window

0x224d,	// (0x00087b3a) scroll_pane_cp033

0xc2d0,	// (0x00091bbd) list_notif_wgt_row_pane_ParamLimits

0xc2d0,	// (0x00091bbd) list_notif_wgt_row_pane

0x2256,	// (0x00087b43) aid_size_list_notif_wgt_del

0x2263,	// (0x00087b50) list_notif_wgt_row_pane_g1

0x226f,	// (0x00087b5c) list_notif_wgt_row_pane_g2

0x227b,	// (0x00087b68) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0009579b) list_notif_wgt_row_pane_g

0x2288,	// (0x00087b75) list_notif_wgt_row_pane_t1

0x229d,	// (0x00087b8a) list_notif_wgt_row_pane_t2

0x22af,	// (0x00087b9c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x000957a2) list_notif_wgt_row_pane_t

0xd1ba,	// (0x00092aa7) list_recal_day_event_pane_g1

0x22c1,	// (0x00087bae) list_recal_day_event_pane_t1

0xca03,	// (0x000922f0) bg_button_pane_cp045

0x22d0,	// (0x00087bbd) cntbar_detail_btn_pane_t1

0x1298,	// (0x00086b85) main_callh_pane_ParamLimits

0x1298,	// (0x00086b85) main_callh_pane

0xca03,	// (0x000922f0) main_coverflow0_pane

0xca03,	// (0x000922f0) main_wgtman_pane

0xb4a3,	// (0x00090d90) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb4a3,	// (0x00090d90) main_fs_bigclock_unlock_btn_pane

0x1ac6,	// (0x000873b3) bg_button_pane_cp16

0x1ad6,	// (0x000873c3) cell_tport_appsw_pane_g3

0xc2e4,	// (0x00091bd1) cf0_flow_pane_ParamLimits

0xc2e4,	// (0x00091bd1) cf0_flow_pane

0x22de,	// (0x00087bcb) listscroll_cf0_pane

0x22e9,	// (0x00087bd6) main_cf0_pane_g1

0xc2f3,	// (0x00091be0) main_cf0_pane_t1_ParamLimits

0xc2f3,	// (0x00091be0) main_cf0_pane_t1

0xc307,	// (0x00091bf4) main_cf0_pane_t2_ParamLimits

0xc307,	// (0x00091bf4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000957a9) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000957a9) main_cf0_pane_t

0x22f3,	// (0x00087be0) scroll_pane_cp11

0xc31b,	// (0x00091c08) cf0_flow_pane_g1

0xc323,	// (0x00091c10) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000957ae) cf0_flow_pane_g

0xc32b,	// (0x00091c18) cf0_flow_pane_t1

0xca03,	// (0x000922f0) main_call6_pane

0xca03,	// (0x000922f0) main_calllock_pane

0xc339,	// (0x00091c26) call6_btn_grp_pane_ParamLimits

0xc339,	// (0x00091c26) call6_btn_grp_pane

0xc348,	// (0x00091c35) call6_pane_g1_ParamLimits

0xc348,	// (0x00091c35) call6_pane_g1

0xc357,	// (0x00091c44) popup_call6_1st_window_ParamLimits

0xc357,	// (0x00091c44) popup_call6_1st_window

0xc365,	// (0x00091c52) popup_call6_2nd_window_ParamLimits

0xc365,	// (0x00091c52) popup_call6_2nd_window

0xc373,	// (0x00091c60) cell_call6_btn_pane_ParamLimits

0xc373,	// (0x00091c60) cell_call6_btn_pane

0xef05,	// (0x000947f2) bg_popup_call2_in_pane_cp03

0x22fe,	// (0x00087beb) popup_call6_1st_window_g1

0x2306,	// (0x00087bf3) popup_call6_1st_window_g2

0x230e,	// (0x00087bfb) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000957b3) popup_call6_1st_window_g

0x2316,	// (0x00087c03) popup_call6_1st_window_t1

0x2325,	// (0x00087c12) popup_call6_1st_window_t2

0x2335,	// (0x00087c22) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000957ba) popup_call6_1st_window_t

0xef05,	// (0x000947f2) bg_popup_call2_in_pane_cp04

0x22fe,	// (0x00087beb) popup_call6_2nd_window_g1

0x2306,	// (0x00087bf3) popup_call6_2nd_window_g2

0x230e,	// (0x00087bfb) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000957b3) popup_call6_2nd_window_g

0x2316,	// (0x00087c03) popup_call6_2nd_window_t1

0xca03,	// (0x000922f0) bg_button_pane_cp15

0x2345,	// (0x00087c32) cell_call6_btn_pane_g1

0x234e,	// (0x00087c3b) cell_call6_btn_pane_t1

0xc382,	// (0x00091c6f) listscroll_wgtman_pane_ParamLimits

0xc382,	// (0x00091c6f) listscroll_wgtman_pane

0xc3a0,	// (0x00091c8d) wgtman_btn_pane_ParamLimits

0xc3a0,	// (0x00091c8d) wgtman_btn_pane

0xedb8,	// (0x000946a5) aid_scroll_copy1

0x235d,	// (0x00087c4a) list_wgtman_pane

0xc3d5,	// (0x00091cc2) wgtman_btn_pane_g1_ParamLimits

0xc3d5,	// (0x00091cc2) wgtman_btn_pane_g1

0xc3fd,	// (0x00091cea) wgtman_btn_pane_t1_ParamLimits

0xc3fd,	// (0x00091cea) wgtman_btn_pane_t1

0x2367,	// (0x00087c54) wgtman_btn_pane_t2_ParamLimits

0x2367,	// (0x00087c54) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000957c1) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000957c1) wgtman_btn_pane_t

0xc434,	// (0x00091d21) listrow_wgtman_pane_ParamLimits

0xc434,	// (0x00091d21) listrow_wgtman_pane

0xc450,	// (0x00091d3d) listrow_wgtman_pane_g1

0xc45d,	// (0x00091d4a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000957c6) listrow_wgtman_pane_g

0xc47b,	// (0x00091d68) listrow_wgtman_pane_t1

0xc493,	// (0x00091d80) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000957cb) listrow_wgtman_pane_t

0xc4b9,	// (0x00091da6) wait_bar_pane_cp09

0x237e,	// (0x00087c6b) main_calllock_btn_pane

0x2388,	// (0x00087c75) main_calllock_pane_g1

0xca03,	// (0x000922f0) bg_button_pane_cp17

0x2393,	// (0x00087c80) main_calllock_btn_pane_g1

0x239c,	// (0x00087c89) main_calllock_btn_pane_t1

0xca03,	// (0x000922f0) main_dialer3_pane

0xca03,	// (0x000922f0) main_fmrd2_pane

0x2ddd,	// (0x000886ca) main_fs_bigclock_unlock_btn_pane_g1

0x23b3,	// (0x00087ca0) main_fs_bigclock_unlock_btn_pane_t1

0xc4cb,	// (0x00091db8) area_fmrd2_info_pane_ParamLimits

0xc4cb,	// (0x00091db8) area_fmrd2_info_pane

0xc4d9,	// (0x00091dc6) area_fmrd2_visual_pane_ParamLimits

0xc4d9,	// (0x00091dc6) area_fmrd2_visual_pane

0xc4e7,	// (0x00091dd4) fmrd2_indi_pane_ParamLimits

0xc4e7,	// (0x00091dd4) fmrd2_indi_pane

0xc4f4,	// (0x00091de1) area_fmrd2_visual_pane_g1

0xc4fc,	// (0x00091de9) area_fmrd2_visual_pane_t1

0xc50c,	// (0x00091df9) area_fmrd2_visual_pane_t2

0xc51c,	// (0x00091e09) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000957d5) area_fmrd2_visual_pane_t

0xc52c,	// (0x00091e19) area_fmrd2_info_pane_g1

0xc534,	// (0x00091e21) area_fmrd2_info_pane_t1

0xc544,	// (0x00091e31) area_fmrd2_info_pane_t2

0xc554,	// (0x00091e41) area_fmrd2_info_pane_t3

0xc564,	// (0x00091e51) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000957dc) area_fmrd2_info_pane_t

0xc572,	// (0x00091e5f) fmrd2_indi_pane_t1

0xc582,	// (0x00091e6f) fmrd2_indi_pane_t2

0xc592,	// (0x00091e7f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000957e5) fmrd2_indi_pane_t

0xddc2,	// (0x000936af) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddc2,	// (0x000936af) list_single_fs_bigclock_indicator_pane_g5

0xde69,	// (0x00093756) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde69,	// (0x00093756) list_single_fs_bigclock_indicator_pane_t5

0xbd0c,	// (0x000915f9) aid_cell_bcale_month_pane_ParamLimits

0xbd0c,	// (0x000915f9) aid_cell_bcale_month_pane

0xbd1c,	// (0x00091609) bcale_month_pane_ParamLimits

0xbd1c,	// (0x00091609) bcale_month_pane

0xbd2c,	// (0x00091619) bcale_preview_pane_ParamLimits

0xbd2c,	// (0x00091619) bcale_preview_pane

0x2135,	// (0x00087a22) list_single_fs_bigclock_pane_t1_ParamLimits

0x2154,	// (0x00087a41) list_single_fs_bigclock_pane_t2_ParamLimits

0x2154,	// (0x00087a41) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x0009576c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0009576c) list_single_fs_bigclock_pane_t

0x23ab,	// (0x00087c98) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000957d0) main_fs_bigclock_unlock_btn_pane_g

0xc5a0,	// (0x00091e8d) aid_dia3_key_size_ParamLimits

0xc5a0,	// (0x00091e8d) aid_dia3_key_size

0xc5ac,	// (0x00091e99) aid_dia3_listrow_size_ParamLimits

0xc5ac,	// (0x00091e99) aid_dia3_listrow_size

0xc5bc,	// (0x00091ea9) dia3_keypad_fun_pane_ParamLimits

0xc5bc,	// (0x00091ea9) dia3_keypad_fun_pane

0xc5ce,	// (0x00091ebb) dia3_keypad_num_pane_ParamLimits

0xc5ce,	// (0x00091ebb) dia3_keypad_num_pane

0xc5e0,	// (0x00091ecd) dia3_listscroll_pane_ParamLimits

0xc5e0,	// (0x00091ecd) dia3_listscroll_pane

0xc5ee,	// (0x00091edb) dia3_numentry_pane_ParamLimits

0xc5ee,	// (0x00091edb) dia3_numentry_pane

0x23c1,	// (0x00087cae) dia3_list_pane

0x23cc,	// (0x00087cb9) scroll_pane_cp12

0xca03,	// (0x000922f0) bg_dia3_numentry_pane

0xc5fc,	// (0x00091ee9) dia3_numentry_pane_t1

0xc60b,	// (0x00091ef8) cell_dia3_key_num_pane

0xc613,	// (0x00091f00) cell_dia3_key0_fun_pane_ParamLimits

0xc613,	// (0x00091f00) cell_dia3_key0_fun_pane

0xc620,	// (0x00091f0d) cell_dia3_key1_fun_pane_ParamLimits

0xc620,	// (0x00091f0d) cell_dia3_key1_fun_pane

0xc62d,	// (0x00091f1a) dia3_listrow_pane

0xda17,	// (0x00093304) bg_dia3_numentry_pane_g1

0xca03,	// (0x000922f0) bg_button_pane_cp21

0x23d7,	// (0x00087cc4) cell_dia3_key_num_pane_t1

0x23e5,	// (0x00087cd2) cell_dia3_key_num_pane_t2

0x23f4,	// (0x00087ce1) cell_dia3_key_num_pane_t3

0x2403,	// (0x00087cf0) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000957ec) cell_dia3_key_num_pane_t

0xca03,	// (0x000922f0) bg_button_pane_cp19

0xc63a,	// (0x00091f27) cell_dia3_key0_fun_pane_g1

0xca03,	// (0x000922f0) bg_button_pane_cp20

0xc642,	// (0x00091f2f) cell_dia3_key1_fun_pane_g1

0xc64a,	// (0x00091f37) area_left_week_number_pane

0xc656,	// (0x00091f43) area_top_day_name_pane

0xc662,	// (0x00091f4f) frame_month_view_pane

0xc66e,	// (0x00091f5b) grid_month_view_pane

0x2412,	// (0x00087cff) cell_top_day_name_pane_ParamLimits

0x2412,	// (0x00087cff) cell_top_day_name_pane

0xbf42,	// (0x0009182f) cell_area_left_week_number_pane_ParamLimits

0xbf42,	// (0x0009182f) cell_area_left_week_number_pane

0xc67a,	// (0x00091f67) cell_month_view_pane_ParamLimits

0xc67a,	// (0x00091f67) cell_month_view_pane

0x242c,	// (0x00087d19) frm_month_g1

0xc697,	// (0x00091f84) frm_month_g2

0xc6a1,	// (0x00091f8e) frm_month_g3

0xc6ab,	// (0x00091f98) frm_month_g4

0xc6b5,	// (0x00091fa2) frm_month_g5

0xc6bf,	// (0x00091fac) frm_month_g6

0xc6c9,	// (0x00091fb6) frm_month_g7

0x2435,	// (0x00087d22) frm_month_g8

0x243e,	// (0x00087d2b) frm_month_g9

0x2447,	// (0x00087d34) frm_month_g10

0x2450,	// (0x00087d3d) frm_month_g11

0x2459,	// (0x00087d46) frm_month_g12

0x2462,	// (0x00087d4f) frm_month_g13

0x246b,	// (0x00087d58) frm_month_g14

0x2476,	// (0x00087d63) frm_month_g15

0x2481,	// (0x00087d6e) frm_month_g16

0x000f,

0xff08,	// (0x000957f5) frm_month_g

0xc6d5,	// (0x00091fc2) cell_top_day_name_pane_t1

0xc6e4,	// (0x00091fd1) cell_area_left_week_number_pane_g1

0xc6ec,	// (0x00091fd9) cell_area_left_week_number_pane_t1

0x2ddd,	// (0x000886ca) cell_month_view_pane_g1

0xc6fb,	// (0x00091fe8) cell_month_view_pane_t1

0xca03,	// (0x000922f0) main_fps_pane

0x180b,	// (0x000870f8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x180b,	// (0x000870f8) cmail_ddmenu_btn02_pane_cp1

0x1827,	// (0x00087114) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1827,	// (0x00087114) cmail_ddmenu_btn02_pane_cp2

0xbff7,	// (0x000918e4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbff7,	// (0x000918e4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0009571f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0009571f) cmail_ddmenu_btn02_pane_g

0xc015,	// (0x00091902) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc015,	// (0x00091902) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x00095724) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x00095724) cmail_ddmenu_btn02_pane_t

0xc70a,	// (0x00091ff7) fps_text_pane_ParamLimits

0xc70a,	// (0x00091ff7) fps_text_pane

0xc717,	// (0x00092004) main_fps_pane_g1_ParamLimits

0xc717,	// (0x00092004) main_fps_pane_g1

0xc725,	// (0x00092012) wait_bar_pane_cp010_ParamLimits

0xc725,	// (0x00092012) wait_bar_pane_cp010

0xc731,	// (0x0009201e) fps_text_pane_t1_ParamLimits

0xc731,	// (0x0009201e) fps_text_pane_t1

0x96ef,	// (0x0008efdc) cam4_image_uncrop_pane_g1

0x96f8,	// (0x0008efe5) cam4_image_uncrop_pane_g2

0x9701,	// (0x0008efee) cam4_image_uncrop_pane_g3

0x970a,	// (0x0008eff7) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x000951e6) cam4_image_uncrop_pane_g

0xc62d,	// (0x00091f1a) dia3_listrow_pane_ParamLimits

0xca03,	// (0x000922f0) main_phob2_pane

0xbb2b,	// (0x00091418) cell_tport_appsw_pane_cp02_ParamLimits

0xbb2b,	// (0x00091418) cell_tport_appsw_pane_cp02

0xbb3a,	// (0x00091427) cell_tport_appsw_pane_cp03_ParamLimits

0xbb3a,	// (0x00091427) cell_tport_appsw_pane_cp03

0xca03,	// (0x000922f0) phob2_contact_card_pane

0xca03,	// (0x000922f0) phob2_listscroll_pane

0x248c,	// (0x00087d79) phob2_list_pane

0x2494,	// (0x00087d81) scroll_pane_cp034

0xc74a,	// (0x00092037) phob2_cc_data_pane_ParamLimits

0xc74a,	// (0x00092037) phob2_cc_data_pane

0xc764,	// (0x00092051) phob2_cc_listscroll_pane_ParamLimits

0xc764,	// (0x00092051) phob2_cc_listscroll_pane

0xc77e,	// (0x0009206b) list_double_large_graphic_phob2_pane_ParamLimits

0xc77e,	// (0x0009206b) list_double_large_graphic_phob2_pane

0xc7a1,	// (0x0009208e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc7a1,	// (0x0009208e) list_double_large_graphic_phob2_pane_g1

0xc7ae,	// (0x0009209b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc7ae,	// (0x0009209b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00095816) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00095816) list_double_large_graphic_phob2_pane_g

0xc7ba,	// (0x000920a7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc7ba,	// (0x000920a7) list_double_large_graphic_phob2_pane_t1

0xc7cf,	// (0x000920bc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc7cf,	// (0x000920bc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009581b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009581b) list_double_large_graphic_phob2_pane_t

0xca03,	// (0x000922f0) list_highlight_pane_cp024

0x249c,	// (0x00087d89) phob2_cc_button_pane

0xc7e1,	// (0x000920ce) phob2_cc_data_pane_g1_ParamLimits

0xc7e1,	// (0x000920ce) phob2_cc_data_pane_g1

0xc7ed,	// (0x000920da) phob2_cc_data_pane_g2_ParamLimits

0xc7ed,	// (0x000920da) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00095820) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00095820) phob2_cc_data_pane_g

0xc7f9,	// (0x000920e6) phob2_cc_data_pane_t1_ParamLimits

0xc7f9,	// (0x000920e6) phob2_cc_data_pane_t1

0xc80b,	// (0x000920f8) phob2_cc_data_pane_t2_ParamLimits

0xc80b,	// (0x000920f8) phob2_cc_data_pane_t2

0xc81d,	// (0x0009210a) phob2_cc_data_pane_t3_ParamLimits

0xc81d,	// (0x0009210a) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00095825) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00095825) phob2_cc_data_pane_t

0x24a4,	// (0x00087d91) phob2_cc_list_pane_ParamLimits

0x24a4,	// (0x00087d91) phob2_cc_list_pane

0xd934,	// (0x00093221) scroll_pane_cp035_ParamLimits

0xd934,	// (0x00093221) scroll_pane_cp035

0xddb4,	// (0x000936a1) bg_button_pane_cp033

0x24b0,	// (0x00087d9d) phob2_cc_button_pane_g1

0x24bc,	// (0x00087da9) phob2_cc_button_pane_t1

0x24d1,	// (0x00087dbe) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009582c) phob2_cc_button_pane_t

0xc82f,	// (0x0009211c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc82f,	// (0x0009211c) list_double_large_graphic_phob2_cc_pane

0xc85f,	// (0x0009214c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc85f,	// (0x0009214c) list_double_large_graphic_phob2_cc_pane_g1

0xc870,	// (0x0009215d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc870,	// (0x0009215d) list_double_large_graphic_phob2_cc_pane_g2

0xc87f,	// (0x0009216c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc87f,	// (0x0009216c) list_double_large_graphic_phob2_cc_pane_g3

0xc88e,	// (0x0009217b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc88e,	// (0x0009217b) list_double_large_graphic_phob2_cc_pane_g4

0xc89f,	// (0x0009218c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc89f,	// (0x0009218c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00095831) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00095831) list_double_large_graphic_phob2_cc_pane_g

0xc8ae,	// (0x0009219b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc8ae,	// (0x0009219b) list_double_large_graphic_phob2_cc_pane_t1

0xc8d7,	// (0x000921c4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc8d7,	// (0x000921c4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009583c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009583c) list_double_large_graphic_phob2_cc_pane_t

0x24e3,	// (0x00087dd0) list_highlight_pane_cp025_ParamLimits

0x24e3,	// (0x00087dd0) list_highlight_pane_cp025

0xddb4,	// (0x000936a1) bg_button_pane_cp033_ParamLimits

0x24b0,	// (0x00087d9d) phob2_cc_button_pane_g1_ParamLimits

0x24bc,	// (0x00087da9) phob2_cc_button_pane_t1_ParamLimits

0x24d1,	// (0x00087dbe) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009582c) phob2_cc_button_pane_t_ParamLimits

0x47ac,	// (0x0008a099) popup_wgtman_window

0xd096,	// (0x00092983) scroll_pane_cp038

0xc3bd,	// (0x00091caa) wgtman_btn_pane_cp_01_ParamLimits

0xc3bd,	// (0x00091caa) wgtman_btn_pane_cp_01

0x24f1,	// (0x00087dde) wgtman_content_pane

0x21cf,	// (0x00087abc) wgtman_heading_pane

0xca03,	// (0x000922f0) bg_heading_pane_cp02

0x24fa,	// (0x00087de7) wgtman_heading_pane_g1

0x2502,	// (0x00087def) wgtman_heading_pane_t1

0x2510,	// (0x00087dfd) scroll_pane_cp036

0x2518,	// (0x00087e05) wgtman_list_pane

0x2520,	// (0x00087e0d) wgtman_list_pane_t1_ParamLimits

0x2520,	// (0x00087e0d) wgtman_list_pane_t1

0x964e,	// (0x0008ef3b) cam4_grid_pane

0xa3a5,	// (0x0008fc92) bg_button_pane_cp015_ParamLimits

0xa3b7,	// (0x0008fca4) bg_button_pane_cp016_ParamLimits

0xa3ca,	// (0x0008fcb7) bg_button_pane_cp017_ParamLimits

0xa420,	// (0x0008fd0d) popup_vitu2_query_window_g3_ParamLimits

0xa420,	// (0x0008fd0d) popup_vitu2_query_window_g3

0xa4db,	// (0x0008fdc8) popup_vitu2_query_window_t6_ParamLimits

0xa4db,	// (0x0008fdc8) popup_vitu2_query_window_t6

0xa506,	// (0x0008fdf3) popup_vitu2_query_window_t7_ParamLimits

0xa506,	// (0x0008fdf3) popup_vitu2_query_window_t7

0xdd16,	// (0x00093603) cam4_grid_pane_g1

0xdd1f,	// (0x0009360c) cam4_grid_pane_g2

0x253e,	// (0x00087e2b) cam4_grid_pane_g3

0x2547,	// (0x00087e34) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00095841) cam4_grid_pane_g

0x550e,	// (0x0008adfb) aid_placing_vt_slider_lsc_ParamLimits

0x584e,	// (0x0008b13b) vidtel_button_pane_ParamLimits

0x584e,	// (0x0008b13b) vidtel_button_pane

0x2552,	// (0x00087e3f) bg_button_pane_cp034

0xc900,	// (0x000921ed) vidtel_button_pane_g1

0x255c,	// (0x00087e49) vidtel_button_pane_t1

0xd198,	// (0x00092a85) aid_size_vtel_slider_touch

0xd934,	// (0x00093221) scroll_pane_cp039

0xda55,	// (0x00093342) ncim_query_button_pane_cp01_ParamLimits

0xda74,	// (0x00093361) ncimui_query_pane_g1_ParamLimits

0xddb4,	// (0x000936a1) input_focus_pane_cp012_ParamLimits

0xda99,	// (0x00093386) ncim_query_entry_pane_t1_ParamLimits

0xd934,	// (0x00093221) scroll_pane_cp039_ParamLimits

0x691e,	// (0x0008c20b) navi_pane_bcale_mc_g1

0x6926,	// (0x0008c213) navi_pane_bcale_mc_t1

0x1870,	// (0x0008715d) main_sp_fs_email_pane_g1

0x1878,	// (0x00087165) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000955dd) main_sp_fs_email_pane_g

0x1dcf,	// (0x000876bc) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1dcf,	// (0x000876bc) list_single_cale_mrui_row_pane_g3

0xc03d,	// (0x0009192a) list_single_recal_day_pane_g5_event_pane

0x1f94,	// (0x00087881) list_single_recal_day_pane_g7

0x256a,	// (0x00087e57) list_recal_day_event_pane_cp01

0x2573,	// (0x00087e60) list_recal_vselct_arw_lo_pane_cp01

0x257b,	// (0x00087e68) list_recal_vselct_arw_up_pane_cp01

0x2583,	// (0x00087e70) list_recal_vselct_pane_cp01

0xd1ba,	// (0x00092aa7) list_recal_day_event_pane_cp01_g1

0x258d,	// (0x00087e7a) list_recal_day_event_pane_cp01_t1

0x1f9c,	// (0x00087889) list_single_recal_day_pane_t1_ParamLimits

0x1fae,	// (0x0008789b) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x00095734) list_single_recal_day_pane_t_ParamLimits

0xe2ee,	// (0x00093bdb) bg_notes_pane_ParamLimits

0xe2fc,	// (0x00093be9) list_notes_pane_ParamLimits

0x4ae9,	// (0x0008a3d6) scroll_pane_cp06_ParamLimits

0xe31e,	// (0x00093c0b) main_notes_pane_ParamLimits

0xca03,	// (0x000922f0) main_welc_pane

0xc908,	// (0x000921f5) main_welc_body_pane_ParamLimits

0xc908,	// (0x000921f5) main_welc_body_pane

0xc921,	// (0x0009220e) main_welc_opti_pane_ParamLimits

0xc921,	// (0x0009220e) main_welc_opti_pane

0xc956,	// (0x00092243) main_welc_pane_t1_ParamLimits

0xc956,	// (0x00092243) main_welc_pane_t1

0xc974,	// (0x00092261) main_welc_body_row_pane_ParamLimits

0xc974,	// (0x00092261) main_welc_body_row_pane

0xc9a5,	// (0x00092292) main_welc_opti_row_pane_ParamLimits

0xc9a5,	// (0x00092292) main_welc_opti_row_pane

0x259b,	// (0x00087e88) main_welc_opti_row_pane_g1

0x25a3,	// (0x00087e90) main_welc_opti_row_pane_t1

0x25b2,	// (0x00087e9f) main_welc_body_row_pane_t1

0x223c,	// (0x00087b29) popup_notif_wgt_heading_pane

0x2256,	// (0x00087b43) aid_size_list_notif_wgt_del_ParamLimits

0x2263,	// (0x00087b50) list_notif_wgt_row_pane_g1_ParamLimits

0x226f,	// (0x00087b5c) list_notif_wgt_row_pane_g2_ParamLimits

0x227b,	// (0x00087b68) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0009579b) list_notif_wgt_row_pane_g_ParamLimits

0x2288,	// (0x00087b75) list_notif_wgt_row_pane_t1_ParamLimits

0x229d,	// (0x00087b8a) list_notif_wgt_row_pane_t2_ParamLimits

0x22af,	// (0x00087b9c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x000957a2) list_notif_wgt_row_pane_t_ParamLimits

0xc450,	// (0x00091d3d) listrow_wgtman_pane_g1_ParamLimits

0xc45d,	// (0x00091d4a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000957c6) listrow_wgtman_pane_g_ParamLimits

0xc47b,	// (0x00091d68) listrow_wgtman_pane_t1_ParamLimits

0xc493,	// (0x00091d80) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000957cb) listrow_wgtman_pane_t_ParamLimits

0xc4b9,	// (0x00091da6) wait_bar_pane_cp09_ParamLimits

0xca03,	// (0x000922f0) bg_popup_heading_pane_cp02

0x25c1,	// (0x00087eae) popup_notif_wgt_heading_pane_g1

0x25c9,	// (0x00087eb6) popup_notif_wgt_heading_pane_t1

0xca03,	// (0x000922f0) main_vids_pane

0xca03,	// (0x000922f0) vids_listscroll_pane

0xc9b6,	// (0x000922a3) scroll_pane_cp040

0xca03,	// (0x000922f0) vids_list_pane

0xc9c1,	// (0x000922ae) vids_list_double_pane_ParamLimits

0xc9c1,	// (0x000922ae) vids_list_double_pane

0xc9dc,	// (0x000922c9) vids_list_double_pane_g1

0xc9e5,	// (0x000922d2) vids_list_double_pane_t1

0xc9f5,	// (0x000922e2) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009584f) vids_list_double_pane_t

0x7721,	// (0x0008d00e) main_ncimui_pane_ParamLimits

0xb072,	// (0x0009095f) main_ncimui_pane_g1_ParamLimits

0xb07e,	// (0x0009096b) main_ncimui_pane_g2_ParamLimits

0xb07e,	// (0x0009096b) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x000954e2) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x000954e2) main_ncimui_pane_g

0xc93c,	// (0x00092229) main_welc_pane_g1_ParamLimits

0xc93c,	// (0x00092229) main_welc_pane_g1

0xc948,	// (0x00092235) main_welc_pane_g2_ParamLimits

0xc948,	// (0x00092235) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009584a) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009584a) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
