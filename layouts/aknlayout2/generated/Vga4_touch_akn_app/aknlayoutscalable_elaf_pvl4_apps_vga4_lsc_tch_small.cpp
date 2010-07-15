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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004ef4c };

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
0x0a4a,	// (0x0004f996) Screen

0x0a56,	// (0x0004f9a2) application_window

0x0abe,	// (0x0004fa0a) area_bottom_pane_ParamLimits

0x0abe,	// (0x0004fa0a) area_bottom_pane

0x0b20,	// (0x0004fa6c) area_top_pane_ParamLimits

0x0b20,	// (0x0004fa6c) area_top_pane

0x9a46,	// (0x00058992) call_video_uplink_pane_ParamLimits

0x9a46,	// (0x00058992) call_video_uplink_pane

0x0bae,	// (0x0004fafa) main_pane_ParamLimits

0x0bae,	// (0x0004fafa) main_pane

0xc975,	// (0x0005b8c1) context_pane

0x415c,	// (0x000530a8) navi_pane

0x4190,	// (0x000530dc) popup_cale_events_window_ParamLimits

0x4190,	// (0x000530dc) popup_cale_events_window

0xc988,	// (0x0005b8d4) popup_mup_playback_window

0x41a8,	// (0x000530f4) signal_pane

0xa1ee,	// (0x0005913a) main_browser_pane

0xa40b,	// (0x00059357) main_burst_pane

0x3e74,	// (0x00052dc0) main_calc_pane

0xc95b,	// (0x0005b8a7) main_cale_day_pane

0x11cd,	// (0x00050119) main_cale_month_pane

0xc95b,	// (0x0005b8a7) main_cale_week_pane

0xa40b,	// (0x00059357) main_call_pane

0x9eac,	// (0x00058df8) main_call_poc_pane

0xa40b,	// (0x00059357) main_camera_pane

0xa40b,	// (0x00059357) main_chi_dic_pane

0xb2ea,	// (0x0005a236) main_clock_pane

0x9eac,	// (0x00058df8) main_fmradio_pane

0xa40b,	// (0x00059357) main_graph_messa_pane

0x9eac,	// (0x00058df8) main_help_pane

0xa1ee,	// (0x0005913a) main_im_pane

0xa107,	// (0x00059053) main_image_pane_ParamLimits

0xa107,	// (0x00059053) main_image_pane

0x9eac,	// (0x00058df8) main_location2_pane

0xa40b,	// (0x00059357) main_location_pane

0xa107,	// (0x00059053) main_messa_pane

0x9eac,	// (0x00058df8) main_mp2_pane

0xa40b,	// (0x00059357) main_mp_pane

0x9eac,	// (0x00058df8) main_msg_pane

0x9eac,	// (0x00058df8) main_mup_eq_pane

0x9eac,	// (0x00058df8) main_mup_pane

0xa1ee,	// (0x0005913a) main_notes_pane

0x9eac,	// (0x00058df8) main_pec_pane

0x9eac,	// (0x00058df8) main_phob_pane

0x9eac,	// (0x00058df8) main_pinb_pane

0x9eac,	// (0x00058df8) main_postcard_pane

0x9eac,	// (0x00058df8) main_qdial_pane

0xa40b,	// (0x00059357) main_skin_pane

0x9eac,	// (0x00058df8) main_smil2_pane

0xa40b,	// (0x00059357) main_smil_pane

0xa40b,	// (0x00059357) main_video_pane

0xa40b,	// (0x00059357) main_video_tele_pane

0xa107,	// (0x00059053) main_viewer_pane_ParamLimits

0xa107,	// (0x00059053) main_viewer_pane

0xa40b,	// (0x00059357) main_vorec_pane

0x3eca,	// (0x00052e16) popup_blid_sat_info_window_ParamLimits

0x3eca,	// (0x00052e16) popup_blid_sat_info_window

0x3f2e,	// (0x00052e7a) popup_dyc_status_message_window_ParamLimits

0x3f2e,	// (0x00052e7a) popup_dyc_status_message_window

0x3f48,	// (0x00052e94) popup_grid_large_graphic_window_ParamLimits

0x3f48,	// (0x00052e94) popup_grid_large_graphic_window

0x400a,	// (0x00052f56) popup_loc_request_window_ParamLimits

0x400a,	// (0x00052f56) popup_loc_request_window

0x4130,	// (0x0005307c) popup_wml_address_window_ParamLimits

0x4130,	// (0x0005307c) popup_wml_address_window

0x3cb2,	// (0x00052bfe) call_muted_g1

0x3943,	// (0x0005288f) popup_call_audio_conf_window_ParamLimits

0x3943,	// (0x0005288f) popup_call_audio_conf_window

0x3cc2,	// (0x00052c0e) popup_call_audio_first_window_ParamLimits

0x3cc2,	// (0x00052c0e) popup_call_audio_first_window

0x3d38,	// (0x00052c84) popup_call_audio_in_window_ParamLimits

0x3d38,	// (0x00052c84) popup_call_audio_in_window

0x3d74,	// (0x00052cc0) popup_call_audio_out_window_ParamLimits

0x3d74,	// (0x00052cc0) popup_call_audio_out_window

0x3dae,	// (0x00052cfa) popup_call_audio_second_window_ParamLimits

0x3dae,	// (0x00052cfa) popup_call_audio_second_window

0x3e04,	// (0x00052d50) popup_call_audio_wait_window_ParamLimits

0x3e04,	// (0x00052d50) popup_call_audio_wait_window

0x3e39,	// (0x00052d85) popup_number_entry_window_ParamLimits

0x3e39,	// (0x00052d85) popup_number_entry_window

0x9a64,	// (0x000589b0) bg_popup_call_pane_cp05_ParamLimits

0x9a64,	// (0x000589b0) bg_popup_call_pane_cp05

0x9a84,	// (0x000589d0) popup_number_entry_window_t1

0x9a97,	// (0x000589e3) popup_number_entry_window_t2

0x9aa9,	// (0x000589f5) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0005dffb) popup_number_entry_window_t

0x9af0,	// (0x00058a3c) text_title_cp2

0x9b03,	// (0x00058a4f) bg_popup_call_pane_cp_ParamLimits

0x9b03,	// (0x00058a4f) bg_popup_call_pane_cp

0x9b11,	// (0x00058a5d) call_thumbnail_pane

0x9b19,	// (0x00058a65) popup_call_audio_in_window_g1_ParamLimits

0x9b19,	// (0x00058a65) popup_call_audio_in_window_g1

0x9b25,	// (0x00058a71) popup_call_audio_in_window_g2_ParamLimits

0x9b25,	// (0x00058a71) popup_call_audio_in_window_g2

0x9b31,	// (0x00058a7d) popup_call_audio_in_window_g3_ParamLimits

0x9b31,	// (0x00058a7d) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0005e004) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0005e004) popup_call_audio_in_window_g

0x9b3d,	// (0x00058a89) popup_call_audio_in_window_t1_ParamLimits

0x9b3d,	// (0x00058a89) popup_call_audio_in_window_t1

0x9b59,	// (0x00058aa5) popup_call_audio_in_window_t2_ParamLimits

0x9b59,	// (0x00058aa5) popup_call_audio_in_window_t2

0x9b75,	// (0x00058ac1) popup_call_audio_in_window_t3_ParamLimits

0x9b75,	// (0x00058ac1) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0005e00b) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0005e00b) popup_call_audio_in_window_t

0x9b03,	// (0x00058a4f) bg_popup_call_pane_cp01_ParamLimits

0x9b03,	// (0x00058a4f) bg_popup_call_pane_cp01

0x9b11,	// (0x00058a5d) call_thumbnail_pane_cp02

0x9b88,	// (0x00058ad4) call_type_pane_cp022

0x9b90,	// (0x00058adc) popup_call_audio_out_window_g1_ParamLimits

0x9b90,	// (0x00058adc) popup_call_audio_out_window_g1

0x9ba2,	// (0x00058aee) popup_call_audio_out_window_g2_ParamLimits

0x9ba2,	// (0x00058aee) popup_call_audio_out_window_g2

0x9bae,	// (0x00058afa) popup_call_audio_out_window_g3_ParamLimits

0x9bae,	// (0x00058afa) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0005e012) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0005e012) popup_call_audio_out_window_g

0x9bc0,	// (0x00058b0c) popup_call_audio_out_window_t1_ParamLimits

0x9bc0,	// (0x00058b0c) popup_call_audio_out_window_t1

0x9bd8,	// (0x00058b24) popup_call_audio_out_window_t2_ParamLimits

0x9bd8,	// (0x00058b24) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0005e019) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0005e019) popup_call_audio_out_window_t

0x9bed,	// (0x00058b39) bg_popup_call_pane_ParamLimits

0x9bed,	// (0x00058b39) bg_popup_call_pane

0x0d37,	// (0x0004fc83) call_thumbnail_pane_cp_ParamLimits

0x0d37,	// (0x0004fc83) call_thumbnail_pane_cp

0x9c71,	// (0x00058bbd) call_type_pane_cp01_ParamLimits

0x9c71,	// (0x00058bbd) call_type_pane_cp01

0x9cb5,	// (0x00058c01) popup_call_audio_first_window_g1_ParamLimits

0x9cb5,	// (0x00058c01) popup_call_audio_first_window_g1

0x9d01,	// (0x00058c4d) popup_call_audio_first_window_g2_ParamLimits

0x9d01,	// (0x00058c4d) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0005e01e) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0005e01e) popup_call_audio_first_window_g

0x9d45,	// (0x00058c91) popup_call_audio_first_window_t1_ParamLimits

0x9d45,	// (0x00058c91) popup_call_audio_first_window_t1

0x9df1,	// (0x00058d3d) popup_call_audio_first_window_t4_ParamLimits

0x9df1,	// (0x00058d3d) popup_call_audio_first_window_t4

0x9e7d,	// (0x00058dc9) popup_call_audio_first_window_t5_ParamLimits

0x9e7d,	// (0x00058dc9) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0005e023) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0005e023) popup_call_audio_first_window_t

0x9eac,	// (0x00058df8) bg_popup_call_pane_cp02

0x9eb6,	// (0x00058e02) call_type_pane_cp023

0x9ebe,	// (0x00058e0a) popup_call_audio_wait_window_g1

0x9ec6,	// (0x00058e12) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005e02a) popup_call_audio_wait_window_g

0x9ece,	// (0x00058e1a) popup_call_audio_wait_window_t3

0x9edc,	// (0x00058e28) bg_popup_call_pane_cp03_ParamLimits

0x9edc,	// (0x00058e28) bg_popup_call_pane_cp03

0x9f3c,	// (0x00058e88) call_thumbnail_pane_cp011_ParamLimits

0x9f3c,	// (0x00058e88) call_thumbnail_pane_cp011

0x9f48,	// (0x00058e94) call_type_pane_cp034_ParamLimits

0x9f48,	// (0x00058e94) call_type_pane_cp034

0x9f84,	// (0x00058ed0) popup_call_audio_second_window_g1_ParamLimits

0x9f84,	// (0x00058ed0) popup_call_audio_second_window_g1

0x9fc0,	// (0x00058f0c) popup_call_audio_second_window_g2_ParamLimits

0x9fc0,	// (0x00058f0c) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0005e02f) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0005e02f) popup_call_audio_second_window_g

0x9ffc,	// (0x00058f48) popup_call_audio_second_window_t1_ParamLimits

0x9ffc,	// (0x00058f48) popup_call_audio_second_window_t1

0xa07d,	// (0x00058fc9) popup_call_audio_second_window_t2_ParamLimits

0xa07d,	// (0x00058fc9) popup_call_audio_second_window_t2

0xa0b3,	// (0x00058fff) popup_call_audio_second_window_t3_ParamLimits

0xa0b3,	// (0x00058fff) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0005e034) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0005e034) popup_call_audio_second_window_t

0x9eac,	// (0x00058df8) bg_popup_call_pane_cp04

0xa0e9,	// (0x00059035) list_conf_pane

0xa0f1,	// (0x0005903d) popup_call_audio_conf_window_t1

0xa0ff,	// (0x0005904b) call_thumbnail_pane_g1

0xa107,	// (0x00059053) bg_pinb_pane_ParamLimits

0xa107,	// (0x00059053) bg_pinb_pane

0xa115,	// (0x00059061) find_pinb_pane

0xa11e,	// (0x0005906a) listscroll_pinb_pane_ParamLimits

0xa11e,	// (0x0005906a) listscroll_pinb_pane

0xa12d,	// (0x00059079) pinb_bg_pane_g1

0x0d5b,	// (0x0004fca7) pinb_bg_pane_g2

0x0d67,	// (0x0004fcb3) pinb_bg_pane_g3

0x0d73,	// (0x0004fcbf) pinb_bg_pane_g4

0x0d7f,	// (0x0004fccb) pinb_bg_pane_g5

0x0d8b,	// (0x0004fcd7) pinb_bg_pane_g6

0x0d96,	// (0x0004fce2) pinb_bg_pane_g7

0x0da1,	// (0x0004fced) pinb_bg_pane_g8

0x0dac,	// (0x0004fcf8) pinb_bg_pane_g9

0x0db6,	// (0x0004fd02) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0005e03b) pinb_bg_pane_g

0x0dd3,	// (0x0004fd1f) grid_pinb_pane

0x0dde,	// (0x0004fd2a) list_pinb_pane

0x0de9,	// (0x0004fd35) scroll_pane_cp01_ParamLimits

0x0de9,	// (0x0004fd35) scroll_pane_cp01

0xa137,	// (0x00059083) find_pinb_pane_g1_ParamLimits

0xa137,	// (0x00059083) find_pinb_pane_g1

0xa14f,	// (0x0005909b) find_pinb_pane_t1

0xa161,	// (0x000590ad) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0005e055) find_pinb_pane_t

0xa176,	// (0x000590c2) input_focus_pane_cp01_ParamLimits

0xa176,	// (0x000590c2) input_focus_pane_cp01

0x0dfb,	// (0x0004fd47) cell_pinb_pane_ParamLimits

0x0dfb,	// (0x0004fd47) cell_pinb_pane

0x0e1d,	// (0x0004fd69) cell_pinb_pane_g1_ParamLimits

0x0e1d,	// (0x0004fd69) cell_pinb_pane_g1

0x0e31,	// (0x0004fd7d) cell_pinb_pane_g2_ParamLimits

0x0e31,	// (0x0004fd7d) cell_pinb_pane_g2

0xa182,	// (0x000590ce) cell_pinb_pane_g3_ParamLimits

0xa182,	// (0x000590ce) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0005e05a) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0005e05a) cell_pinb_pane_g

0x9eac,	// (0x00058df8) grid_highlight_pane_cp01

0x0e3d,	// (0x0004fd89) list_pinb_item_pane_ParamLimits

0x0e3d,	// (0x0004fd89) list_pinb_item_pane

0x9eac,	// (0x00058df8) list_highlight_pane_cp02

0x0e50,	// (0x0004fd9c) list_pinb_item_pane_g1_ParamLimits

0x0e50,	// (0x0004fd9c) list_pinb_item_pane_g1

0x0e5d,	// (0x0004fda9) list_pinb_item_pane_g2_ParamLimits

0x0e5d,	// (0x0004fda9) list_pinb_item_pane_g2

0x0e69,	// (0x0004fdb5) list_pinb_item_pane_g3_ParamLimits

0x0e69,	// (0x0004fdb5) list_pinb_item_pane_g3

0x0e7a,	// (0x0004fdc6) list_pinb_item_pane_g4_ParamLimits

0x0e7a,	// (0x0004fdc6) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0005e061) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0005e061) list_pinb_item_pane_g

0x0e86,	// (0x0004fdd2) list_pinb_item_pane_t1_ParamLimits

0x0e86,	// (0x0004fdd2) list_pinb_item_pane_t1

0x0ebd,	// (0x0004fe09) calc_display_pane

0x0ee2,	// (0x0004fe2e) calc_paper_pane

0x0f05,	// (0x0004fe51) grid_calc_pane

0x9eac,	// (0x00058df8) bg_list_pane_cp01

0x0f33,	// (0x0004fe7f) clock_g1

0x0f3b,	// (0x0004fe87) clock_g2

0x0001,

0xf11e,	// (0x0005e06a) clock_g

0x0f43,	// (0x0004fe8f) clock_t1_ParamLimits

0x0f43,	// (0x0004fe8f) clock_t1

0x0f58,	// (0x0004fea4) clock_t2_ParamLimits

0x0f58,	// (0x0004fea4) clock_t2

0x0f6a,	// (0x0004feb6) clock_t3_ParamLimits

0x0f6a,	// (0x0004feb6) clock_t3

0x0f7c,	// (0x0004fec8) clock_t4_ParamLimits

0x0f7c,	// (0x0004fec8) clock_t4

0x0f8e,	// (0x0004feda) clock_t5_ParamLimits

0x0f8e,	// (0x0004feda) clock_t5

0x0fa3,	// (0x0004feef) clock_t6_ParamLimits

0x0fa3,	// (0x0004feef) clock_t6

0x0fb5,	// (0x0004ff01) clock_t7_ParamLimits

0x0fb5,	// (0x0004ff01) clock_t7

0x0fc7,	// (0x0004ff13) clock_t8_ParamLimits

0x0fc7,	// (0x0004ff13) clock_t8

0x0fdb,	// (0x0004ff27) clock_t9_ParamLimits

0x0fdb,	// (0x0004ff27) clock_t9

0x0008,

0xf123,	// (0x0005e06f) clock_t_ParamLimits

0xf123,	// (0x0005e06f) clock_t

0xa196,	// (0x000590e2) popup_clock_analogue_window_cp02

0xa196,	// (0x000590e2) popup_clock_digital_window_cp01

0xa19e,	// (0x000590ea) listscroll_help_pane

0x9eac,	// (0x00058df8) phob_pre_status_pane

0xa1a8,	// (0x000590f4) grid_qdial_pane

0xa107,	// (0x00059053) listscroll_mce_pane

0xa107,	// (0x00059053) bg_notes_pane

0xa1b2,	// (0x000590fe) list_notes_pane

0x0ff1,	// (0x0004ff3d) scroll_pane_cp06

0xa1c0,	// (0x0005910c) bg_calc_paper_pane

0xa1d4,	// (0x00059120) list_calc_pane

0xa1ee,	// (0x0005913a) bg_calc_display_pane

0x1005,	// (0x0004ff51) calc_display_pane_t1

0x1017,	// (0x0004ff63) calc_display_pane_t2

0xa1fa,	// (0x00059146) calc_display_pane_t3

0x0002,

0xf136,	// (0x0005e082) calc_display_pane_t

0x1029,	// (0x0004ff75) cell_calc_pane_ParamLimits

0x1029,	// (0x0004ff75) cell_calc_pane

0xa20c,	// (0x00059158) bg_calc_paper_pane_g1

0xa218,	// (0x00059164) bg_calc_paper_pane_g2

0xa224,	// (0x00059170) bg_calc_paper_pane_g3

0xa230,	// (0x0005917c) bg_calc_paper_pane_g4

0xa23c,	// (0x00059188) bg_calc_paper_pane_g5

0x1064,	// (0x0004ffb0) bg_calc_paper_pane_g6

0x1072,	// (0x0004ffbe) bg_calc_paper_pane_g7

0x1080,	// (0x0004ffcc) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0005e089) bg_calc_paper_pane_g

0x1093,	// (0x0004ffdf) calc_bg_paper_pane_g9

0x10a6,	// (0x0004fff2) list_calc_item_pane_ParamLimits

0x10a6,	// (0x0004fff2) list_calc_item_pane

0xa248,	// (0x00059194) list_calc_item_pane_g1

0xa255,	// (0x000591a1) list_calc_item_pane_t1_ParamLimits

0xa255,	// (0x000591a1) list_calc_item_pane_t1

0x10be,	// (0x0005000a) list_calc_item_pane_t2_ParamLimits

0x10be,	// (0x0005000a) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0005e09a) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0005e09a) list_calc_item_pane_t

0xa267,	// (0x000591b3) cell_calc_pane_g1

0xa271,	// (0x000591bd) grid_highlight_pane_cp02

0xa293,	// (0x000591df) bg_calc_display_pane_g1

0x10f0,	// (0x0005003c) bg_calc_display_pane_g2

0x10fa,	// (0x00050046) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0005e0a4) bg_calc_display_pane_g

0x1103,	// (0x0005004f) cell_qdial_pane_ParamLimits

0x1103,	// (0x0005004f) cell_qdial_pane

0x1117,	// (0x00050063) cell_qdial_pane_g1_ParamLimits

0x1117,	// (0x00050063) cell_qdial_pane_g1

0x112d,	// (0x00050079) cell_qdial_pane_g2_ParamLimits

0x112d,	// (0x00050079) cell_qdial_pane_g2

0xa29c,	// (0x000591e8) cell_qdial_pane_g3_ParamLimits

0xa29c,	// (0x000591e8) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0005e0ab) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0005e0ab) cell_qdial_pane_g

0x1154,	// (0x000500a0) cell_qdial_pane_t1_ParamLimits

0x1154,	// (0x000500a0) cell_qdial_pane_t1

0x116c,	// (0x000500b8) cell_qdial_pane_t2_ParamLimits

0x116c,	// (0x000500b8) cell_qdial_pane_t2

0x117f,	// (0x000500cb) cell_qdial_pane_t3_ParamLimits

0x117f,	// (0x000500cb) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0005e0b4) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0005e0b4) cell_qdial_pane_t

0x9eac,	// (0x00058df8) grid_highlight_pane_cp04

0xa2a8,	// (0x000591f4) thumbnail_qdial_pane_ParamLimits

0xa2a8,	// (0x000591f4) thumbnail_qdial_pane

0xa304,	// (0x00059250) list_help_pane

0xa30d,	// (0x00059259) scroll_pane_cp02

0x1192,	// (0x000500de) help_list_pane_t1_ParamLimits

0x1192,	// (0x000500de) help_list_pane_t1

0xa316,	// (0x00059262) bg_notes_pane_g2

0xa31e,	// (0x0005926a) bg_notes_pane_g3

0xa326,	// (0x00059272) notes_bg_pane_g1

0xa32e,	// (0x0005927a) notes_bg_pane_g4

0xa336,	// (0x00059282) notes_bg_pane_g5

0xa33e,	// (0x0005928a) notes_bg_pane_g6

0xa346,	// (0x00059292) notes_bg_pane_g7

0xa34e,	// (0x0005929a) notes_bg_pane_g8

0xa356,	// (0x000592a2) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0005e0d2) notes_bg_pane_g

0x11b6,	// (0x00050102) list_notes_text_pane_ParamLimits

0x11b6,	// (0x00050102) list_notes_text_pane

0xa35e,	// (0x000592aa) list_notes_text_pane_g1

0xfa03,	// (0x0004e94f) list_notes_text_pane_t1

0x11cd,	// (0x00050119) listscroll_cale_week_pane

0x11f7,	// (0x00050143) bg_cale_heading_pane

0x121b,	// (0x00050167) bg_cale_pane_cp01

0x1238,	// (0x00050184) cale_week_corner_pane

0x1257,	// (0x000501a3) cale_week_day_heading_pane

0x1280,	// (0x000501cc) cale_week_scroll_pane_g1

0x129f,	// (0x000501eb) cale_week_scroll_pane_g2

0x12b7,	// (0x00050203) cale_week_scroll_pane_g3

0x12cf,	// (0x0005021b) cale_week_scroll_pane_g4

0x12e7,	// (0x00050233) cale_week_scroll_pane_g5

0x1307,	// (0x00050253) cale_week_scroll_pane_g6

0x1327,	// (0x00050273) cale_week_scroll_pane_g7

0x134b,	// (0x00050297) cale_week_scroll_pane_g8

0x136f,	// (0x000502bb) cale_week_scroll_pane_g9

0x1387,	// (0x000502d3) cale_week_scroll_pane_g10

0x139f,	// (0x000502eb) cale_week_scroll_pane_g11

0x13b7,	// (0x00050303) cale_week_scroll_pane_g12

0x13db,	// (0x00050327) cale_week_scroll_pane_g13

0x13db,	// (0x00050327) cale_week_scroll_pane_g14

0x13db,	// (0x00050327) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0005e0e1) cale_week_scroll_pane_g

0x1423,	// (0x0005036f) cale_week_time_pane

0x1447,	// (0x00050393) grid_cale_week_pane

0xa393,	// (0x000592df) scroll_pane_cp08

0x1479,	// (0x000503c5) cell_cale_week_pane_ParamLimits

0x1479,	// (0x000503c5) cell_cale_week_pane

0x1515,	// (0x00050461) cale_week_day_heading_pane_t1

0x153f,	// (0x0005048b) cale_week_day_heading_pane_t2

0x156e,	// (0x000504ba) cale_week_day_heading_pane_t3

0x159d,	// (0x000504e9) cale_week_day_heading_pane_t4

0x15cc,	// (0x00050518) cale_week_day_heading_pane_t5

0x15ff,	// (0x0005054b) cale_week_day_heading_pane_t6

0x1636,	// (0x00050582) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0005e102) cale_week_day_heading_pane_t

0xa3b0,	// (0x000592fc) bg_cale_side_pane

0x1660,	// (0x000505ac) cale_week_time_pane_t1

0x167a,	// (0x000505c6) cale_week_time_pane_t2

0x1694,	// (0x000505e0) cale_week_time_pane_t3

0x16ae,	// (0x000505fa) cale_week_time_pane_t4

0x16c8,	// (0x00050614) cale_week_time_pane_t5

0x16e2,	// (0x0005062e) cale_week_time_pane_t6

0x1702,	// (0x0005064e) cale_week_time_pane_t7

0x1728,	// (0x00050674) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0005e111) cale_week_time_pane_t

0x174e,	// (0x0005069a) cell_cale_week_pane_g2

0x1772,	// (0x000506be) cell_cale_week_pane_g3_ParamLimits

0x1772,	// (0x000506be) cell_cale_week_pane_g3

0xa3be,	// (0x0005930a) grid_highlight_pane_cp07

0xa3c6,	// (0x00059312) listscroll_gms_pane

0xa3d0,	// (0x0005931c) grid_gms_pane

0xa3d9,	// (0x00059325) listscroll_gms_pane_g1

0xa3e1,	// (0x0005932d) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0005e122) listscroll_gms_pane_g

0x178a,	// (0x000506d6) scroll_pane_cp010

0x1795,	// (0x000506e1) cell_gms_pane_ParamLimits

0x1795,	// (0x000506e1) cell_gms_pane

0x17ac,	// (0x000506f8) cell_gms_pane_g1

0xa3e9,	// (0x00059335) cell_gms_pane_g2

0xa3f1,	// (0x0005933d) cell_gms_pane_g3

0xa3fa,	// (0x00059346) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0005e127) cell_gms_pane_g

0xa403,	// (0x0005934f) grid_highlight_pane_cp09

0x3c5a,	// (0x00052ba6) phob_pre_status_pane_g1

0x3c62,	// (0x00052bae) phob_pre_status_pane_g2

0x3c6a,	// (0x00052bb6) phob_pre_status_pane_g3

0x3c72,	// (0x00052bbe) phob_pre_status_pane_g4

0x0004,

0xf5cd,	// (0x0005e519) phob_pre_status_pane_g

0x3c82,	// (0x00052bce) phob_pre_status_pane_t1

0x3c92,	// (0x00052bde) phob_pre_status_pane_t2

0x3ca2,	// (0x00052bee) phob_pre_status_pane_t3

0x0002,

0xf5d8,	// (0x0005e524) phob_pre_status_pane_t

0xa40b,	// (0x00059357) bg_list_pane_cp05

0x17bc,	// (0x00050708) grid_vorec_pane

0x17c6,	// (0x00050712) vorec_t1

0x17d4,	// (0x00050720) vorec_t2

0x17e2,	// (0x0005072e) vorec_t3

0x17f0,	// (0x0005073c) vorec_t4

0x99f3,	// (0x0005893f) vorec_t5

0x9a01,	// (0x0005894d) vorec_t6

0x0004,

0xf1e4,	// (0x0005e130) vorec_t

0x9a0f,	// (0x0005895b) wait_bar_pane_cp01

0xae79,	// (0x00059dc5) cell_vorec_pane_ParamLimits

0xae79,	// (0x00059dc5) cell_vorec_pane

0xa413,	// (0x0005935f) cell_vorec_pane_g1

0x9eac,	// (0x00058df8) grid_highlight_pane_cp05

0x1822,	// (0x0005076e) cams_zoom_pane

0x1831,	// (0x0005077d) image_vga_pane

0x184b,	// (0x00050797) main_camera_pane_g1

0x185d,	// (0x000507a9) main_camera_pane_g2

0x186d,	// (0x000507b9) main_camera_pane_g3

0x1881,	// (0x000507cd) main_camera_pane_g4

0x1895,	// (0x000507e1) main_camera_pane_g5

0x18a9,	// (0x000507f5) main_camera_pane_g6

0x18bd,	// (0x00050809) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0005e13b) main_camera_pane_g

0x18d1,	// (0x0005081d) main_camera_pane_t1

0x18e7,	// (0x00050833) main_camera_pane_t2

0x0001,

0xf200,	// (0x0005e14c) main_camera_pane_t

0x1925,	// (0x00050871) cams_zoom_pane_cp_ParamLimits

0x1925,	// (0x00050871) cams_zoom_pane_cp

0x194d,	// (0x00050899) image_cif_pane_ParamLimits

0x194d,	// (0x00050899) image_cif_pane

0x1988,	// (0x000508d4) image_subqcif_pane

0x1992,	// (0x000508de) main_video_pane_g1_ParamLimits

0x1992,	// (0x000508de) main_video_pane_g1

0x19b6,	// (0x00050902) main_video_pane_g2_ParamLimits

0x19b6,	// (0x00050902) main_video_pane_g2

0x19ec,	// (0x00050938) main_video_pane_g3_ParamLimits

0x19ec,	// (0x00050938) main_video_pane_g3

0x1a1a,	// (0x00050966) main_video_pane_g4_ParamLimits

0x1a1a,	// (0x00050966) main_video_pane_g4

0x1a48,	// (0x00050994) main_video_pane_g5_ParamLimits

0x1a48,	// (0x00050994) main_video_pane_g5

0xa429,	// (0x00059375) main_video_pane_g6_ParamLimits

0xa429,	// (0x00059375) main_video_pane_g6

0x0006,

0xf205,	// (0x0005e151) main_video_pane_g_ParamLimits

0xf205,	// (0x0005e151) main_video_pane_g

0x1a71,	// (0x000509bd) main_video_pane_t1_ParamLimits

0x1a71,	// (0x000509bd) main_video_pane_t1

0xa443,	// (0x0005938f) cams_zoom_pane_g1

0xa44c,	// (0x00059398) cams_zoom_pane_g2

0xa455,	// (0x000593a1) cams_zoom_pane_g3

0xa45e,	// (0x000593aa) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0005e160) cams_zoom_pane_g

0x1ace,	// (0x00050a1a) grid_cams_pane

0x1ae8,	// (0x00050a34) linegrid_cams_pane

0x1afa,	// (0x00050a46) cell_cams_pane_ParamLimits

0x1afa,	// (0x00050a46) cell_cams_pane

0xa467,	// (0x000593b3) cams_burst_image_pane

0xa46f,	// (0x000593bb) cell_cams_pane_g1

0x9eac,	// (0x00058df8) grid_highlight_pane_cp03

0xa267,	// (0x000591b3) mp_bg_pane_g1

0x9eac,	// (0x00058df8) bg_list_pane_cp03

0xc87e,	// (0x0005b7ca) bg_mp_pane

0xc886,	// (0x0005b7d2) grid_mp_pane

0xc88e,	// (0x0005b7da) media_player_g1

0xc898,	// (0x0005b7e4) media_player_t1

0xc8a6,	// (0x0005b7f2) media_player_t2

0xc8b4,	// (0x0005b800) media_player_t3

0xc8c2,	// (0x0005b80e) media_player_t4

0xc8d0,	// (0x0005b81c) media_player_t5

0xc8de,	// (0x0005b82a) media_player_t6

0xc8ec,	// (0x0005b838) media_player_t7

0x0006,

0xf5b7,	// (0x0005e503) media_player_t

0xc8fa,	// (0x0005b846) wait_bar_pane_cp02

0xf59c,	// (0x0005e4e8) main_usb_pane_t

0x3c51,	// (0x00052b9d) cell_mp_pane

0xa267,	// (0x000591b3) cell_mp_pane_g1

0x9eac,	// (0x00058df8) grid_highlight_pane_cp06

0xa477,	// (0x000593c3) grid_skin_colour_pane

0xa47f,	// (0x000593cb) list_highlight_pane_cp03

0x1b1c,	// (0x00050a68) skin_g1

0xa487,	// (0x000593d3) skin_t1

0xa496,	// (0x000593e2) skin_t2

0x0001,

0xf249,	// (0x0005e195) skin_t

0x1b26,	// (0x00050a72) cell_skin_colour_pane_ParamLimits

0x1b26,	// (0x00050a72) cell_skin_colour_pane

0xa4a4,	// (0x000593f0) cell_skin_colour_pane_g1

0x1b99,	// (0x00050ae5) call_video_g1_ParamLimits

0x1b99,	// (0x00050ae5) call_video_g1

0x1bb5,	// (0x00050b01) call_video_g2_ParamLimits

0x1bb5,	// (0x00050b01) call_video_g2

0x0001,

0xf24e,	// (0x0005e19a) call_video_g_ParamLimits

0xf24e,	// (0x0005e19a) call_video_g

0x1bfa,	// (0x00050b46) call_video_uplink_pane_cp1_ParamLimits

0x1bfa,	// (0x00050b46) call_video_uplink_pane_cp1

0xa4b6,	// (0x00059402) call_video_uplink_pane_cp2

0x1c9b,	// (0x00050be7) video_down_crop_pane_ParamLimits

0x1c9b,	// (0x00050be7) video_down_crop_pane

0x1d84,	// (0x00050cd0) video_down_pane_ParamLimits

0x1d84,	// (0x00050cd0) video_down_pane

0xa4be,	// (0x0005940a) video_down_subqcif_pane_ParamLimits

0xa4be,	// (0x0005940a) video_down_subqcif_pane

0xa4d8,	// (0x00059424) video_down_subqcif_pane_cp_ParamLimits

0xa4d8,	// (0x00059424) video_down_subqcif_pane_cp

0xa500,	// (0x0005944c) im_reading_pane_ParamLimits

0xa500,	// (0x0005944c) im_reading_pane

0x1e8f,	// (0x00050ddb) im_writing_pane_ParamLimits

0x1e8f,	// (0x00050ddb) im_writing_pane

0x1ead,	// (0x00050df9) im_reading_pane_t1

0xa51a,	// (0x00059466) list_im_pane

0xa52b,	// (0x00059477) scroll_pane_cp07

0x1eec,	// (0x00050e38) im_writing_pane_t1_ParamLimits

0x1eec,	// (0x00050e38) im_writing_pane_t1

0xa544,	// (0x00059490) im_writing_pane_t2_ParamLimits

0xa544,	// (0x00059490) im_writing_pane_t2

0x0001,

0xf258,	// (0x0005e1a4) im_writing_pane_t_ParamLimits

0xf258,	// (0x0005e1a4) im_writing_pane_t

0x9eac,	// (0x00058df8) input_focus_pane_cp04

0x9eac,	// (0x00058df8) input_focus_pane_cp05

0x1f01,	// (0x00050e4d) list_im_single_pane_ParamLimits

0x1f01,	// (0x00050e4d) list_im_single_pane

0x1f1a,	// (0x00050e66) list_single_im_pane_t1

0x3c11,	// (0x00052b5d) blid_accuracy_pane

0x3c19,	// (0x00052b65) blid_compass_pane

0x3c23,	// (0x00052b6f) main_location_t1

0x3c33,	// (0x00052b7f) main_location_t2

0x3c43,	// (0x00052b8f) main_location_t3

0x0002,

0xf5c6,	// (0x0005e512) main_location_t

0x9eac,	// (0x00058df8) aid_levels_location

0xa267,	// (0x000591b3) blid_accuracy_pane_g1

0xa267,	// (0x000591b3) blid_accuracy_pane_g2

0x0001,

0xf2c1,	// (0x0005e20d) blid_accuracy_pane_g

0xa58c,	// (0x000594d8) wml_content_pane

0xa5ca,	// (0x00059516) wml_button_pane_ParamLimits

0xa5ca,	// (0x00059516) wml_button_pane

0x1f29,	// (0x00050e75) wml_list_single_large_pane_ParamLimits

0x1f29,	// (0x00050e75) wml_list_single_large_pane

0x1f42,	// (0x00050e8e) wml_list_single_medium_pane_ParamLimits

0x1f42,	// (0x00050e8e) wml_list_single_medium_pane

0x1f5c,	// (0x00050ea8) wml_list_single_small_pane_ParamLimits

0x1f5c,	// (0x00050ea8) wml_list_single_small_pane

0xa5de,	// (0x0005952a) wml_selection_box_pane_ParamLimits

0xa5de,	// (0x0005952a) wml_selection_box_pane

0xa5f1,	// (0x0005953d) wml_list_single_pane_t1

0xa600,	// (0x0005954c) wml_list_single_medium_pane_t1

0xa60f,	// (0x0005955b) wml_list_single_large_pane_t1

0xa61e,	// (0x0005956a) input_focus_pane_cp02_ParamLimits

0xa61e,	// (0x0005956a) input_focus_pane_cp02

0xa631,	// (0x0005957d) wml_selection_box_pane_g1

0xa63a,	// (0x00059586) wml_selection_box_pane_t1_ParamLimits

0xa63a,	// (0x00059586) wml_selection_box_pane_t1

0xa107,	// (0x00059053) bg_wml_button_pane_ParamLimits

0xa107,	// (0x00059053) bg_wml_button_pane

0xa652,	// (0x0005959e) wml_button_pane_g1

0xa65a,	// (0x000595a6) wml_button_pane_t1

0xa652,	// (0x0005959e) wml_button_bg_pane_g1

0xa66a,	// (0x000595b6) wml_button_bg_pane_g2

0xa672,	// (0x000595be) wml_button_bg_pane_g3

0xa67a,	// (0x000595c6) wml_button_bg_pane_g4

0xa682,	// (0x000595ce) wml_button_bg_pane_g5

0xa68a,	// (0x000595d6) wml_button_bg_pane_g6

0xa692,	// (0x000595de) wml_button_bg_pane_g7

0xa69a,	// (0x000595e6) wml_button_bg_pane_g8

0xa6a2,	// (0x000595ee) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0005e1a9) wml_button_bg_pane_g

0x1f7b,	// (0x00050ec7) bg_list_pane_cp02

0xa6aa,	// (0x000595f6) mce_header_pane_ParamLimits

0xa6aa,	// (0x000595f6) mce_header_pane

0xa6c0,	// (0x0005960c) mce_icon_pane

0xa6c0,	// (0x0005960c) mce_image_pane

0xa6c9,	// (0x00059615) mce_text_pane_ParamLimits

0xa6c9,	// (0x00059615) mce_text_pane

0x1f85,	// (0x00050ed1) scroll_pane_cp03

0xa5c2,	// (0x0005950e) scroll_pane_cp04

0xa6dc,	// (0x00059628) scroll_pane_cp05_ParamLimits

0xa6dc,	// (0x00059628) scroll_pane_cp05

0x1f8f,	// (0x00050edb) mce_header_field_pane_ParamLimits

0x1f8f,	// (0x00050edb) mce_header_field_pane

0x1fa8,	// (0x00050ef4) mce_header_field_pane_2_ParamLimits

0x1fa8,	// (0x00050ef4) mce_header_field_pane_2

0x1fbe,	// (0x00050f0a) mce_header_field_pane_3

0x1fc6,	// (0x00050f12) list_single_mce_message_pane_ParamLimits

0x1fc6,	// (0x00050f12) list_single_mce_message_pane

0x1fe2,	// (0x00050f2e) list_single_mce_smart_pane_ParamLimits

0x1fe2,	// (0x00050f2e) list_single_mce_smart_pane

0xa6e8,	// (0x00059634) input_focus_pane_cp03

0xa6f1,	// (0x0005963d) list_header_data_pane

0x2009,	// (0x00050f55) mce_header_field_pane_t1

0x2019,	// (0x00050f65) list_single_mce_header_pane_ParamLimits

0x2019,	// (0x00050f65) list_single_mce_header_pane

0xa6f9,	// (0x00059645) list_single_mce_header_pane_t1

0xa708,	// (0x00059654) list_single_mce_message_pane_g1

0xa710,	// (0x0005965c) list_single_mce_message_pane_t1

0x2053,	// (0x00050f9f) bg_cale_heading_pane_cp01_ParamLimits

0x2053,	// (0x00050f9f) bg_cale_heading_pane_cp01

0xa71e,	// (0x0005966a) bg_cale_pane_cp02_ParamLimits

0xa71e,	// (0x0005966a) bg_cale_pane_cp02

0x20a5,	// (0x00050ff1) cale_month_corner_pane

0x20c4,	// (0x00051010) cale_month_day_heading_pane_ParamLimits

0x20c4,	// (0x00051010) cale_month_day_heading_pane

0x212e,	// (0x0005107a) cale_month_pane_g1_ParamLimits

0x212e,	// (0x0005107a) cale_month_pane_g1

0x2175,	// (0x000510c1) cale_month_pane_g2_ParamLimits

0x2175,	// (0x000510c1) cale_month_pane_g2

0x21b1,	// (0x000510fd) cale_month_pane_g3_ParamLimits

0x21b1,	// (0x000510fd) cale_month_pane_g3

0x2205,	// (0x00051151) cale_month_pane_g4_ParamLimits

0x2205,	// (0x00051151) cale_month_pane_g4

0x2259,	// (0x000511a5) cale_month_pane_g5_ParamLimits

0x2259,	// (0x000511a5) cale_month_pane_g5

0x22b5,	// (0x00051201) cale_month_pane_g6_ParamLimits

0x22b5,	// (0x00051201) cale_month_pane_g6

0x231d,	// (0x00051269) cale_month_pane_g7_ParamLimits

0x231d,	// (0x00051269) cale_month_pane_g7

0x2389,	// (0x000512d5) cale_month_pane_g8_ParamLimits

0x2389,	// (0x000512d5) cale_month_pane_g8

0x23f5,	// (0x00051341) cale_month_pane_g9_ParamLimits

0x23f5,	// (0x00051341) cale_month_pane_g9

0x2459,	// (0x000513a5) cale_month_pane_g10_ParamLimits

0x2459,	// (0x000513a5) cale_month_pane_g10

0x24ab,	// (0x000513f7) cale_month_pane_g11_ParamLimits

0x24ab,	// (0x000513f7) cale_month_pane_g11

0x24fd,	// (0x00051449) cale_month_pane_g12_ParamLimits

0x24fd,	// (0x00051449) cale_month_pane_g12

0x2555,	// (0x000514a1) cale_month_pane_g13_ParamLimits

0x2555,	// (0x000514a1) cale_month_pane_g13

0x000c,

0xf270,	// (0x0005e1bc) cale_month_pane_g_ParamLimits

0xf270,	// (0x0005e1bc) cale_month_pane_g

0x25ad,	// (0x000514f9) cale_month_week_pane

0x25d1,	// (0x0005151d) grid_cale_month_pane_ParamLimits

0x25d1,	// (0x0005151d) grid_cale_month_pane

0x2632,	// (0x0005157e) cale_month_day_heading_pane_t1

0x26b8,	// (0x00051604) cale_month_day_heading_pane_t2

0x2731,	// (0x0005167d) cale_month_day_heading_pane_t3

0x27aa,	// (0x000516f6) cale_month_day_heading_pane_t4

0x282b,	// (0x00051777) cale_month_day_heading_pane_t5

0x28b4,	// (0x00051800) cale_month_day_heading_pane_t6

0x2945,	// (0x00051891) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0005e1d7) cale_month_day_heading_pane_t

0xa3b0,	// (0x000592fc) bg_cale_side_pane_cp01

0x29d6,	// (0x00051922) cale_month_week_pane_t1

0x29ef,	// (0x0005193b) cale_month_week_pane_t2

0x2a08,	// (0x00051954) cale_month_week_pane_t3

0x2a21,	// (0x0005196d) cale_month_week_pane_t4

0x2a3a,	// (0x00051986) cale_month_week_pane_t5

0x2a53,	// (0x0005199f) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0005e1e6) cale_month_week_pane_t

0x2a78,	// (0x000519c4) cell_cale_month_pane_ParamLimits

0x2a78,	// (0x000519c4) cell_cale_month_pane

0xa75d,	// (0x000596a9) cell_cale_month_pane_g1

0x2bc2,	// (0x00051b0e) cell_cale_month_pane_t1_ParamLimits

0x2bc2,	// (0x00051b0e) cell_cale_month_pane_t1

0xa3be,	// (0x0005930a) grid_highlight_pane_cp08

0xa267,	// (0x000591b3) main_smil_g1

0x2bee,	// (0x00051b3a) smil_status_pane

0xa769,	// (0x000596b5) smil_text_pane

0xc79c,	// (0x0005b6e8) bg_popup_call3_rect_pane_g8

0xc7a4,	// (0x0005b6f0) bg_popup_call3_rect_pane_g9

0x0008,

0xf55a,	// (0x0005e4a6) bg_popup_call3_rect_pane_g

0xca02,	// (0x0005b94e) smil_status_volume_pane_g1

0xa773,	// (0x000596bf) smil_status_pane_t1

0xa8f6,	// (0x00059842) volume_smil_pane

0xa78a,	// (0x000596d6) list_smil_text_pane

0x2c03,	// (0x00051b4f) scroll_pane_cp011

0x2c0e,	// (0x00051b5a) smil_text_list_pane_t1_ParamLimits

0x2c0e,	// (0x00051b5a) smil_text_list_pane_t1

0xa794,	// (0x000596e0) aid_volume_smil_ParamLimits

0xa794,	// (0x000596e0) aid_volume_smil

0xa267,	// (0x000591b3) smil_volume_pane_g1

0xa267,	// (0x000591b3) smil_volume_pane_g2

0x0001,

0xf2c1,	// (0x0005e20d) smil_volume_pane_g

0x11cd,	// (0x00050119) listscroll_cale_day_pane

0xa7b6,	// (0x00059702) bg_cale_pane

0xae8e,	// (0x00059dda) list_cale_pane

0xaeb1,	// (0x00059dfd) scroll_pane_cp09

0xaec2,	// (0x00059e0e) cale_bg_pane_g1

0xaeca,	// (0x00059e16) cale_bg_pane_g2

0xaed2,	// (0x00059e1e) cale_bg_pane_g3

0xaeda,	// (0x00059e26) cale_bg_pane_g4

0xaee2,	// (0x00059e2e) cale_bg_pane_g5

0xaeea,	// (0x00059e36) cale_bg_pane_g6

0xaef2,	// (0x00059e3e) cale_bg_pane_g7

0xaefa,	// (0x00059e46) cale_bg_pane_g8

0xaf02,	// (0x00059e4e) cale_bg_pane_g9

0x0008,

0xf2c6,	// (0x0005e212) cale_bg_pane_g

0x2c61,	// (0x00051bad) list_cale_time_pane_ParamLimits

0x2c61,	// (0x00051bad) list_cale_time_pane

0xaf0a,	// (0x00059e56) list_cale_time_pane_g1_ParamLimits

0xaf0a,	// (0x00059e56) list_cale_time_pane_g1

0xaf16,	// (0x00059e62) list_cale_time_pane_g2_ParamLimits

0xaf16,	// (0x00059e62) list_cale_time_pane_g2

0x2c7b,	// (0x00051bc7) list_cale_time_pane_g3_ParamLimits

0x2c7b,	// (0x00051bc7) list_cale_time_pane_g3

0x2c89,	// (0x00051bd5) list_cale_time_pane_g4_ParamLimits

0x2c89,	// (0x00051bd5) list_cale_time_pane_g4

0x2c97,	// (0x00051be3) list_cale_time_pane_g5_ParamLimits

0x2c97,	// (0x00051be3) list_cale_time_pane_g5

0x0005,

0xf2d9,	// (0x0005e225) list_cale_time_pane_g_ParamLimits

0xf2d9,	// (0x0005e225) list_cale_time_pane_g

0xaf30,	// (0x00059e7c) list_cale_time_pane_t1_ParamLimits

0xaf30,	// (0x00059e7c) list_cale_time_pane_t1

0xaf58,	// (0x00059ea4) list_cale_time_pane_t2_ParamLimits

0xaf58,	// (0x00059ea4) list_cale_time_pane_t2

0x2f6d,	// (0x00051eb9) aid_blid_cardinal_pane

0x2faf,	// (0x00051efb) compass_pane_t4

0xaf80,	// (0x00059ecc) list_cale_time_pane_t4_ParamLimits

0xaf80,	// (0x00059ecc) list_cale_time_pane_t4

0x2fbd,	// (0x00051f09) compass_pane_t5

0x2fcd,	// (0x00051f19) compass_pane_t6

0x2fdb,	// (0x00051f27) compass_pane_t7

0xb404,	// (0x0005a350) navi_pane_cc_t1

0xb5e3,	// (0x0005a52f) aid_phob_thumbnail_center_pane

0x35d4,	// (0x00052520) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2e6,	// (0x0005e232) list_cale_time_pane_t_ParamLimits

0xf2e6,	// (0x0005e232) list_cale_time_pane_t

0x9b03,	// (0x00058a4f) bg_popup_window_pane_cp02_ParamLimits

0x9b03,	// (0x00058a4f) bg_popup_window_pane_cp02

0xafa8,	// (0x00059ef4) heading_pane_cp01_ParamLimits

0xafa8,	// (0x00059ef4) heading_pane_cp01

0xafb4,	// (0x00059f00) loc_req_pane_ParamLimits

0xafb4,	// (0x00059f00) loc_req_pane

0xafc4,	// (0x00059f10) loc_type_pane_ParamLimits

0xafc4,	// (0x00059f10) loc_type_pane

0xafd6,	// (0x00059f22) loc_type_pane_t1_ParamLimits

0xafd6,	// (0x00059f22) loc_type_pane_t1

0xafe8,	// (0x00059f34) loc_type_pane_t2_ParamLimits

0xafe8,	// (0x00059f34) loc_type_pane_t2

0xaffa,	// (0x00059f46) loc_type_pane_t3_ParamLimits

0xaffa,	// (0x00059f46) loc_type_pane_t3

0x0002,

0xf2ed,	// (0x0005e239) loc_type_pane_t_ParamLimits

0xf2ed,	// (0x0005e239) loc_type_pane_t

0xb00c,	// (0x00059f58) list_loc_req_pane

0xb016,	// (0x00059f62) scroll_pane_cp012

0x2ca5,	// (0x00051bf1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ca5,	// (0x00051bf1) list_single_loc_request_popup_menu_pane

0xb021,	// (0x00059f6d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb021,	// (0x00059f6d) list_single_loc_request_popup_menu_pane_g1

0xb02d,	// (0x00059f79) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb02d,	// (0x00059f79) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2f4,	// (0x0005e240) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2f4,	// (0x0005e240) list_single_loc_request_popup_menu_pane_g

0xb039,	// (0x00059f85) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb039,	// (0x00059f85) list_single_loc_request_popup_menu_pane_t1

0xa107,	// (0x00059053) bg_popup_window_pane_cp03_ParamLimits

0xa107,	// (0x00059053) bg_popup_window_pane_cp03

0xb04f,	// (0x00059f9b) heading_loc_req_pane_ParamLimits

0xb04f,	// (0x00059f9b) heading_loc_req_pane

0x2cb2,	// (0x00051bfe) popup_dyc_status_message_window_g1_ParamLimits

0x2cb2,	// (0x00051bfe) popup_dyc_status_message_window_g1

0x2cc6,	// (0x00051c12) popup_dyc_status_message_window_t1_ParamLimits

0x2cc6,	// (0x00051c12) popup_dyc_status_message_window_t1

0x2cdb,	// (0x00051c27) popup_dyc_status_message_window_t2_ParamLimits

0x2cdb,	// (0x00051c27) popup_dyc_status_message_window_t2

0x2cf0,	// (0x00051c3c) popup_dyc_status_message_window_t3_ParamLimits

0x2cf0,	// (0x00051c3c) popup_dyc_status_message_window_t3

0x0002,

0xf2f9,	// (0x0005e245) popup_dyc_status_message_window_t_ParamLimits

0xf2f9,	// (0x0005e245) popup_dyc_status_message_window_t

0x9eac,	// (0x00058df8) bg_heading_pane_cp01

0xb05b,	// (0x00059fa7) heading_loc_req_pane_g1

0xb063,	// (0x00059faf) heading_loc_req_pane_g2

0xb06b,	// (0x00059fb7) heading_loc_req_pane_g3

0x0002,

0xf300,	// (0x0005e24c) heading_loc_req_pane_g

0xb073,	// (0x00059fbf) heading_loc_req_pane_t1

0xb083,	// (0x00059fcf) bg_popup_sub_pane_cp01_ParamLimits

0xb083,	// (0x00059fcf) bg_popup_sub_pane_cp01

0xb091,	// (0x00059fdd) popup_cale_events_window_g1_ParamLimits

0xb091,	// (0x00059fdd) popup_cale_events_window_g1

0xb0b1,	// (0x00059ffd) popup_cale_events_window_g2_ParamLimits

0xb0b1,	// (0x00059ffd) popup_cale_events_window_g2

0x0001,

0xf334,	// (0x0005e280) popup_cale_events_window_g_ParamLimits

0xf334,	// (0x0005e280) popup_cale_events_window_g

0xb0d1,	// (0x0005a01d) popup_cale_events_window_t1_ParamLimits

0xb0d1,	// (0x0005a01d) popup_cale_events_window_t1

0xb0e3,	// (0x0005a02f) popup_cale_events_window_t2_ParamLimits

0xb0e3,	// (0x0005a02f) popup_cale_events_window_t2

0xb121,	// (0x0005a06d) popup_cale_events_window_t3_ParamLimits

0xb121,	// (0x0005a06d) popup_cale_events_window_t3

0xb15b,	// (0x0005a0a7) popup_cale_events_window_t4_ParamLimits

0xb15b,	// (0x0005a0a7) popup_cale_events_window_t4

0x0003,

0xf339,	// (0x0005e285) popup_cale_events_window_t_ParamLimits

0xf339,	// (0x0005e285) popup_cale_events_window_t

0x2d18,	// (0x00051c64) call_type_pane

0x2d28,	// (0x00051c74) popup_call_status_window_g1

0x2d3c,	// (0x00051c88) popup_call_status_window_g2

0x2d50,	// (0x00051c9c) popup_call_status_window_g3

0x0002,

0xf342,	// (0x0005e28e) popup_call_status_window_g

0xb191,	// (0x0005a0dd) call_type_pane_g1

0xb19a,	// (0x0005a0e6) call_type_pane_g2

0x0001,

0xf349,	// (0x0005e295) call_type_pane_g

0x9eac,	// (0x00058df8) bg_popup_sub_pane_cp02

0xb1a3,	// (0x0005a0ef) listscroll_popup_wml_pane

0xb1ab,	// (0x0005a0f7) list_wml_pane

0xb1b5,	// (0x0005a101) scroll_pane_cp013

0xb1c0,	// (0x0005a10c) list_single_graphic_popup_wml_pane_ParamLimits

0xb1c0,	// (0x0005a10c) list_single_graphic_popup_wml_pane

0xa267,	// (0x000591b3) list_single_graphic_popup_wml_pane_g1

0xb1d4,	// (0x0005a120) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf34e,	// (0x0005e29a) list_single_graphic_popup_wml_pane_g

0xb1dc,	// (0x0005a128) list_single_graphic_popup_wml_pane_t1

0xb1f2,	// (0x0005a13e) aid_call_pane

0xa0ff,	// (0x0005904b) popup_clock_analogue_window_g1

0xa0ff,	// (0x0005904b) popup_clock_analogue_window_g2

0xa7ce,	// (0x0005971a) popup_clock_analogue_window_g3

0xa7ce,	// (0x0005971a) popup_clock_analogue_window_g4

0xa267,	// (0x000591b3) popup_clock_analogue_window_g5

0x0004,

0xf353,	// (0x0005e29f) popup_clock_analogue_window_g

0xa7d6,	// (0x00059722) popup_clock_analogue_window_t1

0xa7e4,	// (0x00059730) clock_digital_number_pane_ParamLimits

0xa7e4,	// (0x00059730) clock_digital_number_pane

0xa7f0,	// (0x0005973c) clock_digital_number_pane_cp02_ParamLimits

0xa7f0,	// (0x0005973c) clock_digital_number_pane_cp02

0xa7fc,	// (0x00059748) clock_digital_number_pane_cp03_ParamLimits

0xa7fc,	// (0x00059748) clock_digital_number_pane_cp03

0xa808,	// (0x00059754) clock_digital_number_pane_cp04_ParamLimits

0xa808,	// (0x00059754) clock_digital_number_pane_cp04

0xa814,	// (0x00059760) clock_digital_separator_pane_ParamLimits

0xa814,	// (0x00059760) clock_digital_separator_pane

0xa820,	// (0x0005976c) popup_clock_digital_window_t1

0xa267,	// (0x000591b3) clock_digital_number_pane_g1

0xa267,	// (0x000591b3) clock_digital_number_pane_g2

0x0001,

0xf2c1,	// (0x0005e20d) clock_digital_number_pane_g

0xa267,	// (0x000591b3) clock_digital_separator_pane_g1

0xa267,	// (0x000591b3) clock_digital_separator_pane_g2

0x0001,

0xf2c1,	// (0x0005e20d) clock_digital_separator_pane_g

0x9eac,	// (0x00058df8) bg_popup_window_pane_cp04

0xb1fa,	// (0x0005a146) heading_pane_cp03

0xb202,	// (0x0005a14e) listscroll_popup_gms_pane

0xb20a,	// (0x0005a156) grid_large_graphic_popup_pane

0xb214,	// (0x0005a160) listscroll_popup_gms_pane_g1

0xb21c,	// (0x0005a168) listscroll_popup_gms_pane_g2

0x0001,

0xf35e,	// (0x0005e2aa) listscroll_popup_gms_pane_g

0xa5c2,	// (0x0005950e) scroll_pane_cp014

0x2d60,	// (0x00051cac) cell_large_graphic_popup_pane_ParamLimits

0x2d60,	// (0x00051cac) cell_large_graphic_popup_pane

0x2d78,	// (0x00051cc4) cell_large_graphic_popup_pane_g1_ParamLimits

0x2d78,	// (0x00051cc4) cell_large_graphic_popup_pane_g1

0xb224,	// (0x0005a170) cell_large_graphic_popup_pane_g2_ParamLimits

0xb224,	// (0x0005a170) cell_large_graphic_popup_pane_g2

0xb230,	// (0x0005a17c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb230,	// (0x0005a17c) cell_large_graphic_popup_pane_g3

0xb23d,	// (0x0005a189) cell_large_graphic_popup_pane_g4_ParamLimits

0xb23d,	// (0x0005a189) cell_large_graphic_popup_pane_g4

0x0003,

0xf363,	// (0x0005e2af) cell_large_graphic_popup_pane_g_ParamLimits

0xf363,	// (0x0005e2af) cell_large_graphic_popup_pane_g

0xb24d,	// (0x0005a199) grid_highlight_pane_cp010

0xa267,	// (0x000591b3) bg_popup_call_pane_g1

0xb257,	// (0x0005a1a3) list_single_graphic_popup_conf_pane_ParamLimits

0xb257,	// (0x0005a1a3) list_single_graphic_popup_conf_pane

0xb269,	// (0x0005a1b5) list_highlight_pane_cp01

0xb272,	// (0x0005a1be) list_single_graphic_popup_conf_pane_g1

0xb27a,	// (0x0005a1c6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf36c,	// (0x0005e2b8) list_single_graphic_popup_conf_pane_g

0xb282,	// (0x0005a1ce) list_single_graphic_popup_conf_pane_t1

0xb290,	// (0x0005a1dc) linegrid_cams_pane_g1

0x2d84,	// (0x00051cd0) linegrid_cams_pane_g2

0xa3f1,	// (0x0005933d) linegrid_cams_pane_g3

0xb299,	// (0x0005a1e5) linegrid_cams_pane_g4

0x2d8d,	// (0x00051cd9) linegrid_cams_pane_g5

0x2d96,	// (0x00051ce2) linegrid_cams_pane_g6

0xa3fa,	// (0x00059346) linegrid_cams_pane_g7

0x0006,

0xf371,	// (0x0005e2bd) linegrid_cams_pane_g

0xb2a2,	// (0x0005a1ee) popup_clock_analogue_window

0xb2a2,	// (0x0005a1ee) popup_clock_digital_window

0x9eac,	// (0x00058df8) popup_phob_thumbnail_window

0xa267,	// (0x000591b3) call_video_uplink_pane_g1

0xb2ab,	// (0x0005a1f7) call_video_uplink_pane_g2

0x0001,

0xf380,	// (0x0005e2cc) call_video_uplink_pane_g

0xb2b3,	// (0x0005a1ff) video_uplink_pane

0xb2bb,	// (0x0005a207) mce_image_pane_g1

0x2da1,	// (0x00051ced) mce_image_pane_g2

0x2dab,	// (0x00051cf7) mce_image_pane_g3

0x2db5,	// (0x00051d01) mce_image_pane_g4

0x2dbd,	// (0x00051d09) mce_image_pane_g5

0x0004,

0xf385,	// (0x0005e2d1) mce_image_pane_g

0xb2c5,	// (0x0005a211) control_top_pane_stacon_cp01_ParamLimits

0xb2c5,	// (0x0005a211) control_top_pane_stacon_cp01

0xb2d9,	// (0x0005a225) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2d9,	// (0x0005a225) uni_indicator_pane_stacon_cp01

0xb2ea,	// (0x0005a236) bg_popup_sub_pane_cp03

0x2dc5,	// (0x00051d11) chi_dic_find_pane

0x2dcd,	// (0x00051d19) listscroll_chi_dic_pane

0x2dd6,	// (0x00051d22) main_pane_chidic_g1

0x2de9,	// (0x00051d35) chi_dic_find_pane_t1

0xb2f4,	// (0x0005a240) find_chidic_pane

0xb2fd,	// (0x0005a249) chi_dic_list_pane_ParamLimits

0xb2fd,	// (0x0005a249) chi_dic_list_pane

0xb30e,	// (0x0005a25a) scroll_pane_cp020

0x2df7,	// (0x00051d43) find_chidic_pane_t1

0x9eac,	// (0x00058df8) input_focus_pane_cp06

0x2e06,	// (0x00051d52) list_chi_dic_pane_ParamLimits

0x2e06,	// (0x00051d52) list_chi_dic_pane

0x2e18,	// (0x00051d64) list_chi_dic_pane_t1_ParamLimits

0x2e18,	// (0x00051d64) list_chi_dic_pane_t1

0x9eac,	// (0x00058df8) list_highlight_pane_cp020

0xb316,	// (0x0005a262) bg_cale_heading_pane_g1

0x2e2b,	// (0x00051d77) bg_cale_heading_pane_g2

0x2e33,	// (0x00051d7f) bg_cale_heading_pane_g3

0x2e3b,	// (0x00051d87) bg_cale_heading_pane_g4

0x2e45,	// (0x00051d91) bg_cale_heading_pane_g5

0x2e4f,	// (0x00051d9b) bg_cale_heading_pane_g6

0x2e57,	// (0x00051da3) bg_cale_heading_pane_g7

0x2e5f,	// (0x00051dab) bg_cale_heading_pane_g8

0x2e69,	// (0x00051db5) bg_cale_heading_pane_g9

0x0008,

0xf390,	// (0x0005e2dc) bg_cale_heading_pane_g

0xb316,	// (0x0005a262) bg_cale_side_pane_g1

0x2e73,	// (0x00051dbf) bg_cale_side_pane_g2

0x2e7d,	// (0x00051dc9) bg_cale_side_pane_g3

0x2e87,	// (0x00051dd3) bg_cale_side_pane_g4

0x2e91,	// (0x00051ddd) bg_cale_side_pane_g5

0x2e9b,	// (0x00051de7) bg_cale_side_pane_g6

0x2ea5,	// (0x00051df1) bg_cale_side_pane_g7

0x2eaf,	// (0x00051dfb) bg_cale_side_pane_g8

0x2eb7,	// (0x00051e03) bg_cale_side_pane_g9

0x0008,

0xf3a3,	// (0x0005e2ef) bg_cale_side_pane_g

0x2ebf,	// (0x00051e0b) popup_call_status_window_ParamLimits

0x2ebf,	// (0x00051e0b) popup_call_status_window

0xb31e,	// (0x0005a26a) stacon_top_pane

0xb326,	// (0x0005a272) status_pane_ParamLimits

0xb326,	// (0x0005a272) status_pane

0xb33b,	// (0x0005a287) status_small_pane

0xb343,	// (0x0005a28f) control_pane

0x9eac,	// (0x00058df8) stacon_bottom_pane

0xb34b,	// (0x0005a297) list_single_mce_smart_pane_t1_ParamLimits

0xb34b,	// (0x0005a297) list_single_mce_smart_pane_t1

0xb35e,	// (0x0005a2aa) list_single_mce_smart_pane_t2_ParamLimits

0xb35e,	// (0x0005a2aa) list_single_mce_smart_pane_t2

0x0001,

0xf3b6,	// (0x0005e302) list_single_mce_smart_pane_t_ParamLimits

0xf3b6,	// (0x0005e302) list_single_mce_smart_pane_t

0x2f0c,	// (0x00051e58) compass_pane

0x2f17,	// (0x00051e63) main_location2_pane_t1

0x2f2d,	// (0x00051e79) main_location2_pane_t2

0x2f43,	// (0x00051e8f) main_location2_pane_t3

0x0003,

0xf3bb,	// (0x0005e307) main_location2_pane_t

0xb37d,	// (0x0005a2c9) compass_pane_g1_ParamLimits

0xb37d,	// (0x0005a2c9) compass_pane_g1

0x2f91,	// (0x00051edd) compass_pane_t1

0x2fa0,	// (0x00051eec) compass_pane_t2

0x0005,

0xf3c4,	// (0x0005e310) compass_pane_t

0x2feb,	// (0x00051f37) text_secondary_cp61

0xb3fb,	// (0x0005a347) navi_pane_cams_g5

0xb477,	// (0x0005a3c3) navi_pane_im_t1

0xb485,	// (0x0005a3d1) navi_pane_mp_g1_ParamLimits

0xb485,	// (0x0005a3d1) navi_pane_mp_g1

0xb499,	// (0x0005a3e5) navi_pane_mp_g2_ParamLimits

0xb499,	// (0x0005a3e5) navi_pane_mp_g2

0xb4a5,	// (0x0005a3f1) navi_pane_mp_g3_ParamLimits

0xb4a5,	// (0x0005a3f1) navi_pane_mp_g3

0x0002,

0xf3d8,	// (0x0005e324) navi_pane_mp_g_ParamLimits

0xf3d8,	// (0x0005e324) navi_pane_mp_g

0xb4b1,	// (0x0005a3fd) navi_pane_mp_t1

0xb4bf,	// (0x0005a40b) navi_pane_mp_t2

0x0002,

0xf3df,	// (0x0005e32b) navi_pane_mp_t

0xb52c,	// (0x0005a478) navi_pane_vt_g1

0xb4b1,	// (0x0005a3fd) navi_pane_vt_t1

0xb534,	// (0x0005a480) navi_slider_pane

0xa40b,	// (0x00059357) zooming_pane

0xb544,	// (0x0005a490) navi_slider_pane_g1

0xa83d,	// (0x00059789) navi_slider_pane_g2

0x0006,

0xf3e6,	// (0x0005e332) navi_slider_pane_g

0xb568,	// (0x0005a4b4) aid_levels_zoom

0xb570,	// (0x0005a4bc) zooming_pane_g1

0xb578,	// (0x0005a4c4) zooming_pane_g2

0xb578,	// (0x0005a4c4) zooming_pane_g3

0x0002,

0xf3f5,	// (0x0005e341) zooming_pane_g

0xb580,	// (0x0005a4cc) level_10_zoom

0xb589,	// (0x0005a4d5) level_11_zoom

0xb592,	// (0x0005a4de) level_1_zoom

0xb59b,	// (0x0005a4e7) level_2_zoom

0xb5a4,	// (0x0005a4f0) level_3_zoom

0xb5ad,	// (0x0005a4f9) level_4_zoom

0xb5b6,	// (0x0005a502) level_5_zoom

0xb5bf,	// (0x0005a50b) level_6_zoom

0xb5c8,	// (0x0005a514) level_7_zoom

0xb5d1,	// (0x0005a51d) level_8_zoom

0xb5da,	// (0x0005a526) level_9_zoom

0xb5eb,	// (0x0005a537) popup_phob_thumbnail_window_g1

0xb5f3,	// (0x0005a53f) popup_phob_thumbnail_window_g2

0x0001,

0xf3fc,	// (0x0005e348) popup_phob_thumbnail_window_g

0xc902,	// (0x0005b84e) level_1_location

0xc90a,	// (0x0005b856) level_2_location

0xc912,	// (0x0005b85e) level_3_location

0xc91a,	// (0x0005b866) level_4_location

0xa40b,	// (0x00059357) level_5_location

0x303c,	// (0x00051f88) mce_icon_pane_g1

0x3046,	// (0x00051f92) mce_icon_pane_g2

0x0001,

0xf401,	// (0x0005e34d) mce_icon_pane_g

0x304e,	// (0x00051f9a) main_mup_pane_g1_ParamLimits

0x304e,	// (0x00051f9a) main_mup_pane_g1

0x3064,	// (0x00051fb0) main_mup_pane_g2_ParamLimits

0x3064,	// (0x00051fb0) main_mup_pane_g2

0x307c,	// (0x00051fc8) main_mup_pane_g3_ParamLimits

0x307c,	// (0x00051fc8) main_mup_pane_g3

0x3094,	// (0x00051fe0) main_mup_pane_g4_ParamLimits

0x3094,	// (0x00051fe0) main_mup_pane_g4

0x30a6,	// (0x00051ff2) main_mup_pane_g5_ParamLimits

0x30a6,	// (0x00051ff2) main_mup_pane_g5

0x30c2,	// (0x0005200e) main_mup_pane_g6_ParamLimits

0x30c2,	// (0x0005200e) main_mup_pane_g6

0x30dc,	// (0x00052028) main_mup_pane_g7_ParamLimits

0x30dc,	// (0x00052028) main_mup_pane_g7

0x30fa,	// (0x00052046) main_mup_pane_g8_ParamLimits

0x30fa,	// (0x00052046) main_mup_pane_g8

0x3118,	// (0x00052064) main_mup_pane_g9_ParamLimits

0x3118,	// (0x00052064) main_mup_pane_g9

0x3134,	// (0x00052080) main_mup_pane_g10_ParamLimits

0x3134,	// (0x00052080) main_mup_pane_g10

0x3152,	// (0x0005209e) main_mup_pane_g11_ParamLimits

0x3152,	// (0x0005209e) main_mup_pane_g11

0x316c,	// (0x000520b8) main_mup_pane_g12_ParamLimits

0x316c,	// (0x000520b8) main_mup_pane_g12

0x3182,	// (0x000520ce) main_mup_pane_g13_ParamLimits

0x3182,	// (0x000520ce) main_mup_pane_g13

0x000c,

0xf406,	// (0x0005e352) main_mup_pane_g_ParamLimits

0xf406,	// (0x0005e352) main_mup_pane_g

0x3196,	// (0x000520e2) main_mup_pane_t1_ParamLimits

0x3196,	// (0x000520e2) main_mup_pane_t1

0x31b2,	// (0x000520fe) main_mup_pane_t2_ParamLimits

0x31b2,	// (0x000520fe) main_mup_pane_t2

0x31ca,	// (0x00052116) main_mup_pane_t3_ParamLimits

0x31ca,	// (0x00052116) main_mup_pane_t3

0x31e2,	// (0x0005212e) main_mup_pane_t4_ParamLimits

0x31e2,	// (0x0005212e) main_mup_pane_t4

0x3200,	// (0x0005214c) main_mup_pane_t5_ParamLimits

0x3200,	// (0x0005214c) main_mup_pane_t5

0x3215,	// (0x00052161) main_mup_pane_t6_ParamLimits

0x3215,	// (0x00052161) main_mup_pane_t6

0x0005,

0xf421,	// (0x0005e36d) main_mup_pane_t_ParamLimits

0xf421,	// (0x0005e36d) main_mup_pane_t

0x3227,	// (0x00052173) mup_progress_pane_ParamLimits

0x3227,	// (0x00052173) mup_progress_pane

0x3233,	// (0x0005217f) mup_visualizer_pane_ParamLimits

0x3233,	// (0x0005217f) mup_visualizer_pane

0x3267,	// (0x000521b3) mup_volume_pane_ParamLimits

0x3267,	// (0x000521b3) mup_volume_pane

0xb5fb,	// (0x0005a547) mup_visualizer_pane_g1_ParamLimits

0xb5fb,	// (0x0005a547) mup_visualizer_pane_g1

0xb5fb,	// (0x0005a547) mup_visualizer_pane_g2_ParamLimits

0xb5fb,	// (0x0005a547) mup_visualizer_pane_g2

0xb37d,	// (0x0005a2c9) mup_visualizer_pane_g3_ParamLimits

0xb37d,	// (0x0005a2c9) mup_visualizer_pane_g3

0x0002,

0xf42e,	// (0x0005e37a) mup_visualizer_pane_g_ParamLimits

0xf42e,	// (0x0005e37a) mup_visualizer_pane_g

0xa267,	// (0x000591b3) mup_volume_pane_g1

0xb611,	// (0x0005a55d) mup_volume_pane_g2

0x0001,

0xf435,	// (0x0005e381) mup_volume_pane_g

0xa267,	// (0x000591b3) mup_progress_pane_g1

0xb61a,	// (0x0005a566) mup_progress_pane_g2

0xb623,	// (0x0005a56f) mup_progress_pane_g3

0x0002,

0xf43a,	// (0x0005e386) mup_progress_pane_g

0x9eac,	// (0x00058df8) bg_popup_window_pane_cp05

0xb62c,	// (0x0005a578) heading_pane_cp02_ParamLimits

0xb62c,	// (0x0005a578) heading_pane_cp02

0xb648,	// (0x0005a594) list_popup_blid_pane

0xb650,	// (0x0005a59c) list_blid_sat_info_pane_ParamLimits

0xb650,	// (0x0005a59c) list_blid_sat_info_pane

0xb663,	// (0x0005a5af) list_blid_sat_info_pane_g1

0xb66b,	// (0x0005a5b7) list_blid_sat_info_pane_t1

0x3391,	// (0x000522dd) mup_equalizer_pane_ParamLimits

0x3391,	// (0x000522dd) mup_equalizer_pane

0x33b2,	// (0x000522fe) mup_equalizer_pane_cp1_ParamLimits

0x33b2,	// (0x000522fe) mup_equalizer_pane_cp1

0x33d3,	// (0x0005231f) mup_equalizer_pane_cp2_ParamLimits

0x33d3,	// (0x0005231f) mup_equalizer_pane_cp2

0x33f8,	// (0x00052344) mup_equalizer_pane_cp3_ParamLimits

0x33f8,	// (0x00052344) mup_equalizer_pane_cp3

0x3421,	// (0x0005236d) mup_equalizer_pane_cp4_ParamLimits

0x3421,	// (0x0005236d) mup_equalizer_pane_cp4

0x344a,	// (0x00052396) mup_equalizer_pane_cp5

0x3462,	// (0x000523ae) mup_equalizer_pane_cp6

0x347a,	// (0x000523c6) mup_equalizer_pane_cp7

0xc81c,	// (0x0005b768) bg_popup_call_poc_act_pane_g9

0xc824,	// (0x0005b770) bg_popup_call_poc_act_pane_g10

0xc82c,	// (0x0005b778) bg_popup_call_poc_act_pane_g11

0x000a,

0xa107,	// (0x00059053) mup_scale_pane

0xa267,	// (0x000591b3) mup_scale_pane_g1

0xb679,	// (0x0005a5c5) mup_scale_pane_g2

0x0006,

0xf456,	// (0x0005e3a2) mup_scale_pane_g

0xb69d,	// (0x0005a5e9) msg_data_pane

0xb6a5,	// (0x0005a5f1) scroll_pane_cp017

0xfc23,	// (0x0004eb6f) bg_list_pane_cp04_ParamLimits

0xfc23,	// (0x0004eb6f) bg_list_pane_cp04

0xb6ad,	// (0x0005a5f9) msg_data_pane_g1

0x34a4,	// (0x000523f0) msg_data_pane_g2

0x34ae,	// (0x000523fa) msg_data_pane_g3

0x34b8,	// (0x00052404) msg_data_pane_g4

0x34c0,	// (0x0005240c) msg_data_pane_g5

0x34c8,	// (0x00052414) msg_data_pane_g6

0x34d0,	// (0x0005241c) msg_data_pane_g7

0x0006,

0xf465,	// (0x0005e3b1) msg_data_pane_g

0xfc49,	// (0x0004eb95) msg_text_pane_ParamLimits

0xfc49,	// (0x0004eb95) msg_text_pane

0x34d8,	// (0x00052424) qrid_highlight_pane_cp011_ParamLimits

0x34d8,	// (0x00052424) qrid_highlight_pane_cp011

0x9eac,	// (0x00058df8) msg_body_pane

0x9eac,	// (0x00058df8) msg_header_pane

0xb6be,	// (0x0005a60a) input_focus_pane_cp07

0xfc94,	// (0x0004ebe0) msg_header_pane_t1_ParamLimits

0xfc94,	// (0x0004ebe0) msg_header_pane_t1

0xfca6,	// (0x0004ebf2) msg_header_pane_t2_ParamLimits

0xfca6,	// (0x0004ebf2) msg_header_pane_t2

0x0001,

0xf479,	// (0x0005e3c5) msg_header_pane_t_ParamLimits

0xf479,	// (0x0005e3c5) msg_header_pane_t

0xb6d3,	// (0x0005a61f) msg_body_pane_g1

0xfcb8,	// (0x0004ec04) msg_body_pane_t1_ParamLimits

0xfcb8,	// (0x0004ec04) msg_body_pane_t1

0xfce9,	// (0x0004ec35) msg_body_pane_t2_ParamLimits

0xfce9,	// (0x0004ec35) msg_body_pane_t2

0xfcfb,	// (0x0004ec47) msg_body_pane_t3_ParamLimits

0xfcfb,	// (0x0004ec47) msg_body_pane_t3

0x0002,

0xf47e,	// (0x0005e3ca) msg_body_pane_t_ParamLimits

0xf47e,	// (0x0005e3ca) msg_body_pane_t

0x3528,	// (0x00052474) main_viewer_pane_g1_ParamLimits

0x3528,	// (0x00052474) main_viewer_pane_g1

0x3536,	// (0x00052482) main_viewer_pane_g2_ParamLimits

0x3536,	// (0x00052482) main_viewer_pane_g2

0x3544,	// (0x00052490) main_viewer_pane_g3_ParamLimits

0x3544,	// (0x00052490) main_viewer_pane_g3

0x3553,	// (0x0005249f) main_viewer_pane_g4_ParamLimits

0x3553,	// (0x0005249f) main_viewer_pane_g4

0xa867,	// (0x000597b3) main_viewer_pane_g5_ParamLimits

0xa867,	// (0x000597b3) main_viewer_pane_g5

0xa867,	// (0x000597b3) main_viewer_pane_g7_ParamLimits

0xa867,	// (0x000597b3) main_viewer_pane_g7

0xa879,	// (0x000597c5) main_viewer_pane_g8_ParamLimits

0xa879,	// (0x000597c5) main_viewer_pane_g8

0x0007,

0xf48e,	// (0x0005e3da) main_viewer_pane_g_ParamLimits

0xf48e,	// (0x0005e3da) main_viewer_pane_g

0xb6db,	// (0x0005a627) viewer_content_pane_ParamLimits

0xb6db,	// (0x0005a627) viewer_content_pane

0x3591,	// (0x000524dd) main_postcard_pane_g1_ParamLimits

0x3591,	// (0x000524dd) main_postcard_pane_g1

0x35a7,	// (0x000524f3) main_postcard_pane_g2_ParamLimits

0x35a7,	// (0x000524f3) main_postcard_pane_g2

0x35bd,	// (0x00052509) main_postcard_pane_g3_ParamLimits

0x35bd,	// (0x00052509) main_postcard_pane_g3

0x0005,

0xf49f,	// (0x0005e3eb) main_postcard_pane_g_ParamLimits

0xf49f,	// (0x0005e3eb) main_postcard_pane_g

0x35d4,	// (0x00052520) main_postcard_pane_g4

0xca15,	// (0x0005b961) smil_status_volume_pane_g2

0x3617,	// (0x00052563) postcard_pane_ParamLimits

0x3617,	// (0x00052563) postcard_pane

0xb6e9,	// (0x0005a635) postcard_pane_g1_ParamLimits

0xb6e9,	// (0x0005a635) postcard_pane_g1

0x3667,	// (0x000525b3) postcard_pane_g2_ParamLimits

0x3667,	// (0x000525b3) postcard_pane_g2

0x3673,	// (0x000525bf) postcard_pane_g3_ParamLimits

0x3673,	// (0x000525bf) postcard_pane_g3

0xb6f7,	// (0x0005a643) postcard_pane_g4_ParamLimits

0xb6f7,	// (0x0005a643) postcard_pane_g4

0x367f,	// (0x000525cb) postcard_pane_g5_ParamLimits

0x367f,	// (0x000525cb) postcard_pane_g5

0x3694,	// (0x000525e0) postcard_pane_g6_ParamLimits

0x3694,	// (0x000525e0) postcard_pane_g6

0xb6e9,	// (0x0005a635) postcard_pane_g7_ParamLimits

0xb6e9,	// (0x0005a635) postcard_pane_g7

0x0006,

0xf4ac,	// (0x0005e3f8) postcard_pane_g_ParamLimits

0xf4ac,	// (0x0005e3f8) postcard_pane_g

0x36ac,	// (0x000525f8) main_mp2_pane_g1_ParamLimits

0x36ac,	// (0x000525f8) main_mp2_pane_g1

0x36ba,	// (0x00052606) main_mp2_pane_g2_ParamLimits

0x36ba,	// (0x00052606) main_mp2_pane_g2

0x36c6,	// (0x00052612) main_mp2_pane_g3_ParamLimits

0x36c6,	// (0x00052612) main_mp2_pane_g3

0x0002,

0xf4bb,	// (0x0005e407) main_mp2_pane_g_ParamLimits

0xf4bb,	// (0x0005e407) main_mp2_pane_g

0x36d2,	// (0x0005261e) main_mp2_pane_t1_ParamLimits

0x36d2,	// (0x0005261e) main_mp2_pane_t1

0x36e9,	// (0x00052635) main_mp2_pane_t2_ParamLimits

0x36e9,	// (0x00052635) main_mp2_pane_t2

0x36fd,	// (0x00052649) main_mp2_pane_t3_ParamLimits

0x36fd,	// (0x00052649) main_mp2_pane_t3

0x0002,

0xf4c2,	// (0x0005e40e) main_mp2_pane_t_ParamLimits

0xf4c2,	// (0x0005e40e) main_mp2_pane_t

0xb705,	// (0x0005a651) pec_content_pane_ParamLimits

0xb705,	// (0x0005a651) pec_content_pane

0xa5c2,	// (0x0005950e) scroll_pane_cp015

0xb717,	// (0x0005a663) pec_attribute_pane_ParamLimits

0xb717,	// (0x0005a663) pec_attribute_pane

0x370f,	// (0x0005265b) pec_content_pane_g1_ParamLimits

0x370f,	// (0x0005265b) pec_content_pane_g1

0xb727,	// (0x0005a673) pec_content_pane_t1_ParamLimits

0xb727,	// (0x0005a673) pec_content_pane_t1

0xb739,	// (0x0005a685) pec_content_pane_t2_ParamLimits

0xb739,	// (0x0005a685) pec_content_pane_t2

0x0001,

0xf4c9,	// (0x0005e415) pec_content_pane_t_ParamLimits

0xf4c9,	// (0x0005e415) pec_content_pane_t

0x371b,	// (0x00052667) list_single_graphic_pane_cp01_ParamLimits

0x371b,	// (0x00052667) list_single_graphic_pane_cp01

0xa107,	// (0x00059053) bg_popup_sub_pane_cp04

0xb74b,	// (0x0005a697) popup_mup_playback_window_g1

0xb757,	// (0x0005a6a3) popup_mup_playback_window_t1

0xb76c,	// (0x0005a6b8) popup_mup_playback_window_t2

0x0001,

0xf4ce,	// (0x0005e41a) popup_mup_playback_window_t

0xb7a3,	// (0x0005a6ef) main_image_pane_g1_ParamLimits

0xb7a3,	// (0x0005a6ef) main_image_pane_g1

0xb7e6,	// (0x0005a732) scroll_pane_cp018_ParamLimits

0xb7e6,	// (0x0005a732) scroll_pane_cp018

0xb7fe,	// (0x0005a74a) scroll_pane_cp016_ParamLimits

0xb7fe,	// (0x0005a74a) scroll_pane_cp016

0x37ed,	// (0x00052739) smil2_image_pane_ParamLimits

0x37ed,	// (0x00052739) smil2_image_pane

0x3823,	// (0x0005276f) smil2_root_pane_ParamLimits

0x3823,	// (0x0005276f) smil2_root_pane

0x385b,	// (0x000527a7) smil2_text_pane_ParamLimits

0x385b,	// (0x000527a7) smil2_text_pane

0x9eac,	// (0x00058df8) bg_list_pane_cp06

0xb83a,	// (0x0005a786) grid_radio_pane

0x9eac,	// (0x00058df8) bg_popup_window_pane_cp06

0xb844,	// (0x0005a790) main_fmradio_pane_t1

0xb1fa,	// (0x0005a146) heading_pane_cp04

0xb852,	// (0x0005a79e) main_fmradio_pane_t2

0xc834,	// (0x0005b780) popup_cale_lunar_info_window_g1

0xb860,	// (0x0005a7ac) main_fmradio_pane_t3

0xc83c,	// (0x0005b788) popup_cale_lunar_info_window_g2

0xb870,	// (0x0005a7bc) main_fmradio_pane_t4

0x0001,

0xb87e,	// (0x0005a7ca) main_fmradio_pane_t5

0x0004,

0xf5a9,	// (0x0005e4f5) popup_cale_lunar_info_window_g

0xf4e3,	// (0x0005e42f) main_fmradio_pane_t

0xb88c,	// (0x0005a7d8) wait_bar_pane_cp03

0xb894,	// (0x0005a7e0) cell_fmradio_pane_ParamLimits

0xb894,	// (0x0005a7e0) cell_fmradio_pane

0xb6e9,	// (0x0005a635) cell_fmradio_pane_g1_ParamLimits

0xb6e9,	// (0x0005a635) cell_fmradio_pane_g1

0x9eac,	// (0x00058df8) grid_highlight_pane_cp011

0xb8a9,	// (0x0005a7f5) poc_content_pane_ParamLimits

0xb8a9,	// (0x0005a7f5) poc_content_pane

0xb8bb,	// (0x0005a807) scroll_pane_cp019

0x38eb,	// (0x00052837) popup_call_poc_act_window_ParamLimits

0x38eb,	// (0x00052837) popup_call_poc_act_window

0x390f,	// (0x0005285b) popup_call_poc_inact_window_ParamLimits

0x390f,	// (0x0005285b) popup_call_poc_inact_window

0xf580,	// (0x0005e4cc) bg_popup_call_poc_act_pane_g

0xc7ac,	// (0x0005b6f8) bg_popup_call_poc_inact_pane_g1

0xc7b4,	// (0x0005b700) bg_popup_call_poc_inact_pane_g2

0xb8c3,	// (0x0005a80f) popup_call_poc_act_window_g2

0xc7bc,	// (0x0005b708) bg_popup_call_poc_inact_pane_g3

0xc7c4,	// (0x0005b710) bg_popup_call_poc_inact_pane_g4

0xc7cc,	// (0x0005b718) bg_popup_call_poc_inact_pane_g5

0xb8cb,	// (0x0005a817) popup_call_poc_act_window_t1_ParamLimits

0xb8cb,	// (0x0005a817) popup_call_poc_act_window_t1

0xb8f3,	// (0x0005a83f) popup_call_poc_act_window_t2_ParamLimits

0xb8f3,	// (0x0005a83f) popup_call_poc_act_window_t2

0xb91b,	// (0x0005a867) popup_call_poc_act_window_t3_ParamLimits

0xb91b,	// (0x0005a867) popup_call_poc_act_window_t3

0xb943,	// (0x0005a88f) popup_call_poc_act_window_t4_ParamLimits

0xb943,	// (0x0005a88f) popup_call_poc_act_window_t4

0x0003,

0xf4ee,	// (0x0005e43a) popup_call_poc_act_window_t_ParamLimits

0xf4ee,	// (0x0005e43a) popup_call_poc_act_window_t

0xc7d4,	// (0x0005b720) bg_popup_call_poc_inact_pane_g6

0xc7dc,	// (0x0005b728) bg_popup_call_poc_inact_pane_g7

0xc7e4,	// (0x0005b730) bg_popup_call_poc_inact_pane_g8

0xb955,	// (0x0005a8a1) popup_call_poc_inact_window_g2

0xc7ec,	// (0x0005b738) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf56d,	// (0x0005e4b9) bg_popup_call_poc_inact_pane_g

0xb95d,	// (0x0005a8a9) popup_call_poc_inact_window_t1_ParamLimits

0xb95d,	// (0x0005a8a9) popup_call_poc_inact_window_t1

0xb972,	// (0x0005a8be) popup_call_poc_inact_window_t2_ParamLimits

0xb972,	// (0x0005a8be) popup_call_poc_inact_window_t2

0xb987,	// (0x0005a8d3) popup_call_poc_inact_window_t3_ParamLimits

0xb987,	// (0x0005a8d3) popup_call_poc_inact_window_t3

0x0002,

0xf4f7,	// (0x0005e443) popup_call_poc_inact_window_t_ParamLimits

0xf4f7,	// (0x0005e443) popup_call_poc_inact_window_t

0xc975,	// (0x0005b8c1) context_pane_ParamLimits

0x41a8,	// (0x000530f4) signal_pane_ParamLimits

0xa40b,	// (0x00059357) main_call2_pane

0xa8c2,	// (0x0005980e) popup_phob_thumbnail2_window_ParamLimits

0xa8c2,	// (0x0005980e) popup_phob_thumbnail2_window

0xa84f,	// (0x0005979b) aid_hotspot_pointer_arrow_pane

0xa857,	// (0x000597a3) aid_hotspot_pointer_hand_pane

0x3c7a,	// (0x00052bc6) phob_pre_status_pane_g5

0x1822,	// (0x0005076e) cams_zoom_pane_ParamLimits

0x1831,	// (0x0005077d) image_vga_pane_ParamLimits

0x184b,	// (0x00050797) main_camera_pane_g1_ParamLimits

0x185d,	// (0x000507a9) main_camera_pane_g2_ParamLimits

0x186d,	// (0x000507b9) main_camera_pane_g3_ParamLimits

0x1881,	// (0x000507cd) main_camera_pane_g4_ParamLimits

0x1895,	// (0x000507e1) main_camera_pane_g5_ParamLimits

0x18a9,	// (0x000507f5) main_camera_pane_g6_ParamLimits

0x18bd,	// (0x00050809) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0005e13b) main_camera_pane_g_ParamLimits

0x18d1,	// (0x0005081d) main_camera_pane_t1_ParamLimits

0x18e7,	// (0x00050833) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0005e14c) main_camera_pane_t_ParamLimits

0xa107,	// (0x00059053) bg_popup_preview_window_pane_cp01_ParamLimits

0xa107,	// (0x00059053) bg_popup_preview_window_pane_cp01

0xb99c,	// (0x0005a8e8) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99c,	// (0x0005a8e8) popup_phob_thumbnail2_window_g1

0x9eac,	// (0x00058df8) call2_cli_visual_pane

0x3943,	// (0x0005288f) popup_call2_audio_conf_window_ParamLimits

0x3943,	// (0x0005288f) popup_call2_audio_conf_window

0x396b,	// (0x000528b7) popup_call2_audio_first_window_ParamLimits

0x396b,	// (0x000528b7) popup_call2_audio_first_window

0x3a01,	// (0x0005294d) popup_call2_audio_in_window_ParamLimits

0x3a01,	// (0x0005294d) popup_call2_audio_in_window

0x3a4d,	// (0x00052999) popup_call2_audio_out_window_ParamLimits

0x3a4d,	// (0x00052999) popup_call2_audio_out_window

0x3abf,	// (0x00052a0b) popup_call2_audio_second_window_ParamLimits

0x3abf,	// (0x00052a0b) popup_call2_audio_second_window

0x3b25,	// (0x00052a71) popup_call2_audio_wait_window_ParamLimits

0x3b25,	// (0x00052a71) popup_call2_audio_wait_window

0x9eac,	// (0x00058df8) bg_popup_call2_act_pane_cp03

0xa0e9,	// (0x00059035) list_conf_pane_cp

0xb9a8,	// (0x0005a8f4) popup_call2_audio_conf_window_t1

0xb9b6,	// (0x0005a902) list_single_graphic_popup_conf2_pane_ParamLimits

0xb9b6,	// (0x0005a902) list_single_graphic_popup_conf2_pane

0xb269,	// (0x0005a1b5) list_highlight_pane_cp04

0xb9c9,	// (0x0005a915) list_single_graphic_popup_conf2_pane_g1

0xb27a,	// (0x0005a1c6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4fe,	// (0x0005e44a) list_single_graphic_popup_conf2_pane_g

0xb9d3,	// (0x0005a91f) list_single_graphic_popup_conf2_pane_t1

0xb9e1,	// (0x0005a92d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9e1,	// (0x0005a92d) bg_popup_call2_act_pane_cp01

0xba6b,	// (0x0005a9b7) call_type_pane_cp05_ParamLimits

0xba6b,	// (0x0005a9b7) call_type_pane_cp05

0xbabf,	// (0x0005aa0b) popup_call2_audio_second_window_g1_ParamLimits

0xbabf,	// (0x0005aa0b) popup_call2_audio_second_window_g1

0xbb13,	// (0x0005aa5f) popup_call2_audio_second_window_g2_ParamLimits

0xbb13,	// (0x0005aa5f) popup_call2_audio_second_window_g2

0x0002,

0xf503,	// (0x0005e44f) popup_call2_audio_second_window_g_ParamLimits

0xf503,	// (0x0005e44f) popup_call2_audio_second_window_g

0xbb78,	// (0x0005aac4) popup_call2_audio_second_window_t1_ParamLimits

0xbb78,	// (0x0005aac4) popup_call2_audio_second_window_t1

0xbc33,	// (0x0005ab7f) popup_call2_audio_second_window_t2_ParamLimits

0xbc33,	// (0x0005ab7f) popup_call2_audio_second_window_t2

0xbc86,	// (0x0005abd2) popup_call2_audio_second_window_t3_ParamLimits

0xbc86,	// (0x0005abd2) popup_call2_audio_second_window_t3

0x0003,

0xf50a,	// (0x0005e456) popup_call2_audio_second_window_t_ParamLimits

0xf50a,	// (0x0005e456) popup_call2_audio_second_window_t

0x9eac,	// (0x00058df8) bg_popup_call2_in_pane_cp02

0x9eb6,	// (0x00058e02) call_type_pane_cp04

0x9ebe,	// (0x00058e0a) popup_call2_audio_wait_window_g1

0x9ec6,	// (0x00058e12) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005e02a) popup_call2_audio_wait_window_g

0x9ece,	// (0x00058e1a) popup_call2_audio_wait_window_t3

0xbd79,	// (0x0005acc5) bg_popup_call2_act_pane_ParamLimits

0xbd79,	// (0x0005acc5) bg_popup_call2_act_pane

0xbe39,	// (0x0005ad85) call_type_pane_cp03_ParamLimits

0xbe39,	// (0x0005ad85) call_type_pane_cp03

0xbe9d,	// (0x0005ade9) popup_call2_audio_first_window_g1_ParamLimits

0xbe9d,	// (0x0005ade9) popup_call2_audio_first_window_g1

0xbf0d,	// (0x0005ae59) popup_call2_audio_first_window_g2_ParamLimits

0xbf0d,	// (0x0005ae59) popup_call2_audio_first_window_g2

0xb5fb,	// (0x0005a547) popup_call2_audio_first_window_g3_ParamLimits

0xb5fb,	// (0x0005a547) popup_call2_audio_first_window_g3

0x0004,

0xf513,	// (0x0005e45f) popup_call2_audio_first_window_g_ParamLimits

0xf513,	// (0x0005e45f) popup_call2_audio_first_window_g

0xbfeb,	// (0x0005af37) popup_call2_audio_first_window_t1_ParamLimits

0xbfeb,	// (0x0005af37) popup_call2_audio_first_window_t1

0xc0ee,	// (0x0005b03a) popup_call2_audio_first_window_t4_ParamLimits

0xc0ee,	// (0x0005b03a) popup_call2_audio_first_window_t4

0xc1d1,	// (0x0005b11d) popup_call2_audio_first_window_t5_ParamLimits

0xc1d1,	// (0x0005b11d) popup_call2_audio_first_window_t5

0x0003,

0xf51e,	// (0x0005e46a) popup_call2_audio_first_window_t_ParamLimits

0xf51e,	// (0x0005e46a) popup_call2_audio_first_window_t

0xa0ff,	// (0x0005904b) bg_popup_call2_act_pane_g1

0xc846,	// (0x0005b792) popup_cale_lunar_info_window_t1

0xc854,	// (0x0005b7a0) popup_cale_lunar_info_window_t2

0xc862,	// (0x0005b7ae) popup_cale_lunar_info_window_t3

0x9eac,	// (0x00058df8) bg_popup_call2_bubble_pane

0xc2de,	// (0x0005b22a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2de,	// (0x0005b22a) bg_popup_call2_in_pane_cp01

0x9b88,	// (0x00058ad4) call_type_pane_cp02

0xc326,	// (0x0005b272) popup_call2_audio_out_window_g1_ParamLimits

0xc326,	// (0x0005b272) popup_call2_audio_out_window_g1

0xc352,	// (0x0005b29e) popup_call2_audio_out_window_g2_ParamLimits

0xc352,	// (0x0005b29e) popup_call2_audio_out_window_g2

0xc37a,	// (0x0005b2c6) popup_call2_audio_out_window_g3_ParamLimits

0xc37a,	// (0x0005b2c6) popup_call2_audio_out_window_g3

0x0003,

0xf527,	// (0x0005e473) popup_call2_audio_out_window_g_ParamLimits

0xf527,	// (0x0005e473) popup_call2_audio_out_window_g

0xc3b5,	// (0x0005b301) popup_call2_audio_out_window_t1_ParamLimits

0xc3b5,	// (0x0005b301) popup_call2_audio_out_window_t1

0xc414,	// (0x0005b360) popup_call2_audio_out_window_t2_ParamLimits

0xc414,	// (0x0005b360) popup_call2_audio_out_window_t2

0xc468,	// (0x0005b3b4) popup_call2_audio_out_window_t3_ParamLimits

0xc468,	// (0x0005b3b4) popup_call2_audio_out_window_t3

0xc47e,	// (0x0005b3ca) popup_call2_audio_out_window_t4_ParamLimits

0xc47e,	// (0x0005b3ca) popup_call2_audio_out_window_t4

0xc494,	// (0x0005b3e0) popup_call2_audio_out_window_t5_ParamLimits

0xc494,	// (0x0005b3e0) popup_call2_audio_out_window_t5

0x0005,

0xf530,	// (0x0005e47c) popup_call2_audio_out_window_t_ParamLimits

0xf530,	// (0x0005e47c) popup_call2_audio_out_window_t

0xc4f8,	// (0x0005b444) bg_popup_call2_in_pane_ParamLimits

0xc4f8,	// (0x0005b444) bg_popup_call2_in_pane

0xc554,	// (0x0005b4a0) popup_call2_audio_in_window_g1_ParamLimits

0xc554,	// (0x0005b4a0) popup_call2_audio_in_window_g1

0xc58c,	// (0x0005b4d8) popup_call2_audio_in_window_g2_ParamLimits

0xc58c,	// (0x0005b4d8) popup_call2_audio_in_window_g2

0xc5c4,	// (0x0005b510) popup_call2_audio_in_window_g3_ParamLimits

0xc5c4,	// (0x0005b510) popup_call2_audio_in_window_g3

0x0003,

0xf53d,	// (0x0005e489) popup_call2_audio_in_window_g_ParamLimits

0xf53d,	// (0x0005e489) popup_call2_audio_in_window_g

0xc61c,	// (0x0005b568) popup_call2_audio_in_window_t1_ParamLimits

0xc61c,	// (0x0005b568) popup_call2_audio_in_window_t1

0xc69c,	// (0x0005b5e8) popup_call2_audio_in_window_t2_ParamLimits

0xc69c,	// (0x0005b5e8) popup_call2_audio_in_window_t2

0xc71c,	// (0x0005b668) popup_call2_audio_in_window_t3_ParamLimits

0xc71c,	// (0x0005b668) popup_call2_audio_in_window_t3

0xc736,	// (0x0005b682) popup_call2_audio_in_window_t4_ParamLimits

0xc736,	// (0x0005b682) popup_call2_audio_in_window_t4

0xc748,	// (0x0005b694) popup_call2_audio_in_window_t5_ParamLimits

0xc748,	// (0x0005b694) popup_call2_audio_in_window_t5

0xc75a,	// (0x0005b6a6) popup_call2_audio_in_window_t6_ParamLimits

0xc75a,	// (0x0005b6a6) popup_call2_audio_in_window_t6

0x0005,

0xf546,	// (0x0005e492) popup_call2_audio_in_window_t_ParamLimits

0xf546,	// (0x0005e492) popup_call2_audio_in_window_t

0xa0ff,	// (0x0005904b) bg_popup_call2_in_pane_g1

0xc870,	// (0x0005b7bc) popup_cale_lunar_info_window_t4

0x0003,

0xf5ae,	// (0x0005e4fa) popup_cale_lunar_info_window_t

0xa107,	// (0x00059053) bg_popup_call2_rect_pane_ParamLimits

0xa107,	// (0x00059053) bg_popup_call2_rect_pane

0x9eac,	// (0x00058df8) call2_cli_visual_graphic_pane

0x9eac,	// (0x00058df8) call2_cli_visual_text_pane

0xa8e9,	// (0x00059835) smil_status_volume_pane_g3

0x0002,

0xa267,	// (0x000591b3) call2_cli_visual_graphic_pane_g1

0xa267,	// (0x000591b3) call2_cli_visual_graphic_pane_g2

0xa267,	// (0x000591b3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf553,	// (0x0005e49f) call2_cli_visual_graphic_pane_g

0xc76c,	// (0x0005b6b8) bg_popup_call2_rect_pane_g1

0xa2fc,	// (0x00059248) bg_popup_call2_rect_pane_g2

0xc774,	// (0x0005b6c0) bg_popup_call2_rect_pane_g3

0xc77c,	// (0x0005b6c8) bg_popup_call2_rect_pane_g4

0xc784,	// (0x0005b6d0) bg_popup_call2_rect_pane_g5

0xc78c,	// (0x0005b6d8) bg_popup_call2_rect_pane_g6

0xc794,	// (0x0005b6e0) bg_popup_call2_rect_pane_g7

0xc79c,	// (0x0005b6e8) bg_popup_call2_rect_pane_g8

0xc7a4,	// (0x0005b6f0) bg_popup_call2_rect_pane_g9

0x0008,

0xf55a,	// (0x0005e4a6) bg_popup_call2_rect_pane_g

0xc7ac,	// (0x0005b6f8) bg_popup_call2_bubble_pane_g1

0xc7b4,	// (0x0005b700) bg_popup_call2_bubble_pane_g2

0xc7bc,	// (0x0005b708) bg_popup_call2_bubble_pane_g3

0xc7c4,	// (0x0005b710) bg_popup_call2_bubble_pane_g4

0xc7cc,	// (0x0005b718) bg_popup_call2_bubble_pane_g5

0xc7d4,	// (0x0005b720) bg_popup_call2_bubble_pane_g6

0xc7dc,	// (0x0005b728) bg_popup_call2_bubble_pane_g7

0xc7e4,	// (0x0005b730) bg_popup_call2_bubble_pane_g8

0xc7ec,	// (0x0005b738) bg_popup_call2_bubble_pane_g9

0x0008,

0xf56d,	// (0x0005e4b9) bg_popup_call2_bubble_pane_g

0x11dd,	// (0x00050129) aid_cale_week_size_cell_pane

0x1901,	// (0x0005084d) aid_cams_cif_uncrop_pane_ParamLimits

0x1901,	// (0x0005084d) aid_cams_cif_uncrop_pane

0x1aba,	// (0x00050a06) aid_cams_size_cell_ParamLimits

0x1aba,	// (0x00050a06) aid_cams_size_cell

0x1ace,	// (0x00050a1a) grid_cams_pane_ParamLimits

0x1ae8,	// (0x00050a34) linegrid_cams_pane_ParamLimits

0x1bc6,	// (0x00050b12) call_video_pane_t1

0x1be0,	// (0x00050b2c) call_video_pane_t2

0x0001,

0xf253,	// (0x0005e19f) call_video_pane_t

0x202d,	// (0x00050f79) aid_cale_month_size_cell_pane_ParamLimits

0x202d,	// (0x00050f79) aid_cale_month_size_cell_pane

0xf5f7,	// (0x0005e543) smil_status_volume_pane_g

0xa8f6,	// (0x00059842) volume_smil_pane_ParamLimits

0x0a6a,	// (0x0004f9b6) aid_popup2_width_pane

0x113e,	// (0x0005008a) cell_qdial_pane_g4_ParamLimits

0x113e,	// (0x0005008a) cell_qdial_pane_g4

0x2f6d,	// (0x00051eb9) aid_blid_cardinal_pane_ParamLimits

0x2f7d,	// (0x00051ec9) aid_blid_destination_pane_ParamLimits

0x2f7d,	// (0x00051ec9) aid_blid_destination_pane

0xa107,	// (0x00059053) bg_popup_call_poc_act_pane_ParamLimits

0xa107,	// (0x00059053) bg_popup_call_poc_act_pane

0xa107,	// (0x00059053) bg_popup_call_poc_inact_pane_ParamLimits

0xa107,	// (0x00059053) bg_popup_call_poc_inact_pane

0xc7f4,	// (0x0005b740) bg_popup_call_poc_act_pane_g1

0xc7fc,	// (0x0005b748) bg_popup_call_poc_act_pane_g2

0xc804,	// (0x0005b750) bg_popup_call_poc_act_pane_g3

0xc7c4,	// (0x0005b710) bg_popup_call_poc_act_pane_g4

0xc7cc,	// (0x0005b718) bg_popup_call_poc_act_pane_g5

0xc80c,	// (0x0005b758) bg_popup_call_poc_act_pane_g6

0xc7dc,	// (0x0005b728) bg_popup_call_poc_act_pane_g7

0xc814,	// (0x0005b760) bg_popup_call_poc_act_pane_g8

0x9eac,	// (0x00058df8) main_usb_pane

0xa899,	// (0x000597e5) popup_cale_lunar_info_window

0x1ead,	// (0x00050df9) im_reading_pane_t1_ParamLimits

0xa51a,	// (0x00059466) list_im_pane_ParamLimits

0xa52b,	// (0x00059477) scroll_pane_cp07_ParamLimits

0x9eac,	// (0x00058df8) grid_highlight_pane_cp012

0xa107,	// (0x00059053) mup_scale_pane_ParamLimits

0xb6e9,	// (0x0005a635) main_usb_pane_g1_ParamLimits

0xb6e9,	// (0x0005a635) main_usb_pane_g1

0x3b86,	// (0x00052ad2) main_usb_pane_g2_ParamLimits

0x3b86,	// (0x00052ad2) main_usb_pane_g2

0x0001,

0xf597,	// (0x0005e4e3) main_usb_pane_g_ParamLimits

0xf597,	// (0x0005e4e3) main_usb_pane_g

0x3b9c,	// (0x00052ae8) main_usb_pane_t1_ParamLimits

0x3b9c,	// (0x00052ae8) main_usb_pane_t1

0x3bae,	// (0x00052afa) main_usb_pane_t2_ParamLimits

0x3bae,	// (0x00052afa) main_usb_pane_t2

0x3bc0,	// (0x00052b0c) main_usb_pane_t3_ParamLimits

0x3bc0,	// (0x00052b0c) main_usb_pane_t3

0x3bd2,	// (0x00052b1e) main_usb_pane_t4_ParamLimits

0x3bd2,	// (0x00052b1e) main_usb_pane_t4

0x3be7,	// (0x00052b33) main_usb_pane_t5_ParamLimits

0x3be7,	// (0x00052b33) main_usb_pane_t5

0x3bfc,	// (0x00052b48) main_usb_pane_t6_ParamLimits

0x3bfc,	// (0x00052b48) main_usb_pane_t6

0x0005,

0xf59c,	// (0x0005e4e8) main_usb_pane_t_ParamLimits

0x2f0c,	// (0x00051e58) aid_text_placing

0x2f17,	// (0x00051e63) main_location2_pane_t1_ParamLimits

0x2f2d,	// (0x00051e79) main_location2_pane_t2_ParamLimits

0x2f43,	// (0x00051e8f) main_location2_pane_t3_ParamLimits

0x2f59,	// (0x00051ea5) main_location2_pane_t4_ParamLimits

0x2f59,	// (0x00051ea5) main_location2_pane_t4

0xf3bb,	// (0x0005e307) main_location2_pane_t_ParamLimits

0xa143,	// (0x0005908f) find_pinb_pane_g2_ParamLimits

0xa143,	// (0x0005908f) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0005e050) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0005e050) find_pinb_pane_g

0xa14f,	// (0x0005909b) find_pinb_pane_t1_ParamLimits

0xa161,	// (0x000590ad) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0005e055) find_pinb_pane_t_ParamLimits

0x9eac,	// (0x00058df8) main_call3_pane

0x2632,	// (0x0005157e) cale_month_day_heading_pane_t1_ParamLimits

0x26b8,	// (0x00051604) cale_month_day_heading_pane_t2_ParamLimits

0x2731,	// (0x0005167d) cale_month_day_heading_pane_t3_ParamLimits

0x27aa,	// (0x000516f6) cale_month_day_heading_pane_t4_ParamLimits

0x282b,	// (0x00051777) cale_month_day_heading_pane_t5_ParamLimits

0x28b4,	// (0x00051800) cale_month_day_heading_pane_t6_ParamLimits

0x2945,	// (0x00051891) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0005e1d7) cale_month_day_heading_pane_t_ParamLimits

0xa781,	// (0x000596cd) smil_status_volume_pane

0x363b,	// (0x00052587) postcard_address_pane_ParamLimits

0x363b,	// (0x00052587) postcard_address_pane

0x3651,	// (0x0005259d) postcard_message_pane_ParamLimits

0x3651,	// (0x0005259d) postcard_message_pane

0x3b5f,	// (0x00052aab) call2_cli_visual_pane_t1_ParamLimits

0x3b5f,	// (0x00052aab) call2_cli_visual_pane_t1

0x43b9,	// (0x00053305) postcard_message_pane_t1_ParamLimits

0x43b9,	// (0x00053305) postcard_message_pane_t1

0xca28,	// (0x0005b974) postcard_address_pane_t1_ParamLimits

0xca28,	// (0x0005b974) postcard_address_pane_t1

0x43a5,	// (0x000532f1) popup_call3_audio_in_window_ParamLimits

0x43a5,	// (0x000532f1) popup_call3_audio_in_window

0x422a,	// (0x00053176) bg_popup_call3_in_pane_ParamLimits

0x422a,	// (0x00053176) bg_popup_call3_in_pane

0x42a6,	// (0x000531f2) popup_call3_audio_in_window_g1_ParamLimits

0x42a6,	// (0x000531f2) popup_call3_audio_in_window_g1

0x42c6,	// (0x00053212) popup_call3_audio_in_window_g2_ParamLimits

0x42c6,	// (0x00053212) popup_call3_audio_in_window_g2

0x42e6,	// (0x00053232) popup_call3_audio_in_window_g3_ParamLimits

0x42e6,	// (0x00053232) popup_call3_audio_in_window_g3

0x0003,

0xf5fe,	// (0x0005e54a) popup_call3_audio_in_window_g_ParamLimits

0xf5fe,	// (0x0005e54a) popup_call3_audio_in_window_g

0x4317,	// (0x00053263) popup_call3_audio_in_window_t1_ParamLimits

0x4317,	// (0x00053263) popup_call3_audio_in_window_t1

0x4355,	// (0x000532a1) popup_call3_audio_in_window_t2_ParamLimits

0x4355,	// (0x000532a1) popup_call3_audio_in_window_t2

0x4393,	// (0x000532df) popup_call3_audio_in_window_t3_ParamLimits

0x4393,	// (0x000532df) popup_call3_audio_in_window_t3

0x0002,

0xf607,	// (0x0005e553) popup_call3_audio_in_window_t_ParamLimits

0xf607,	// (0x0005e553) popup_call3_audio_in_window_t

0xa40b,	// (0x00059357) bg_popup_call3_rect_pane

0xc76c,	// (0x0005b6b8) bg_popup_call3_rect_pane_g1

0xa2fc,	// (0x00059248) bg_popup_call3_rect_pane_g2

0xc774,	// (0x0005b6c0) bg_popup_call3_rect_pane_g3

0xc77c,	// (0x0005b6c8) bg_popup_call3_rect_pane_g4

0xc784,	// (0x0005b6d0) bg_popup_call3_rect_pane_g5

0xc78c,	// (0x0005b6d8) bg_popup_call3_rect_pane_g6

0xc794,	// (0x0005b6e0) bg_popup_call3_rect_pane_g7

0x327d,	// (0x000521c9) mup_visualizer_osc_pane

0xb609,	// (0x0005a555) mup_visualizer_spec_pane

0x425a,	// (0x000531a6) call3_video_qcif_pane_ParamLimits

0x425a,	// (0x000531a6) call3_video_qcif_pane

0x426d,	// (0x000531b9) call3_video_qcif_uncrop_pane_ParamLimits

0x426d,	// (0x000531b9) call3_video_qcif_uncrop_pane

0x427d,	// (0x000531c9) call3_video_subqcif_pane_ParamLimits

0x427d,	// (0x000531c9) call3_video_subqcif_pane

0x4293,	// (0x000531df) call3_video_subqcif_uncrop_pane_ParamLimits

0x4293,	// (0x000531df) call3_video_subqcif_uncrop_pane

0x4306,	// (0x00053252) popup_call3_audio_in_window_g4_ParamLimits

0x4306,	// (0x00053252) popup_call3_audio_in_window_g4

0x4219,	// (0x00053165) mup_spec_half_pane

0x4222,	// (0x0005316e) mup_spec_half_pane_cp

0xc9e8,	// (0x0005b934) mup_osc_middle_pane

0xc9f1,	// (0x0005b93d) mup_visualizer_osc_pane_g1

0x41f9,	// (0x00053145) mup_spec_bar_pane_ParamLimits

0x41f9,	// (0x00053145) mup_spec_bar_pane

0xc9d5,	// (0x0005b921) mup_spec_bar_pane_g1

0xc9df,	// (0x0005b92b) mup_spec_bar_pane_g2

0x0001,

0xf5f2,	// (0x0005e53e) mup_spec_bar_pane_g

0x11dd,	// (0x00050129) aid_cale_week_size_cell_pane_ParamLimits

0x11f7,	// (0x00050143) bg_cale_heading_pane_ParamLimits

0x121b,	// (0x00050167) bg_cale_pane_cp01_ParamLimits

0x1238,	// (0x00050184) cale_week_corner_pane_ParamLimits

0x1257,	// (0x000501a3) cale_week_day_heading_pane_ParamLimits

0x1280,	// (0x000501cc) cale_week_scroll_pane_g1_ParamLimits

0x129f,	// (0x000501eb) cale_week_scroll_pane_g2_ParamLimits

0x12b7,	// (0x00050203) cale_week_scroll_pane_g3_ParamLimits

0x12cf,	// (0x0005021b) cale_week_scroll_pane_g4_ParamLimits

0x12e7,	// (0x00050233) cale_week_scroll_pane_g5_ParamLimits

0x1307,	// (0x00050253) cale_week_scroll_pane_g6_ParamLimits

0x1327,	// (0x00050273) cale_week_scroll_pane_g7_ParamLimits

0x134b,	// (0x00050297) cale_week_scroll_pane_g8_ParamLimits

0x136f,	// (0x000502bb) cale_week_scroll_pane_g9_ParamLimits

0x1387,	// (0x000502d3) cale_week_scroll_pane_g10_ParamLimits

0x139f,	// (0x000502eb) cale_week_scroll_pane_g11_ParamLimits

0x13b7,	// (0x00050303) cale_week_scroll_pane_g12_ParamLimits

0x13db,	// (0x00050327) cale_week_scroll_pane_g13_ParamLimits

0x13db,	// (0x00050327) cale_week_scroll_pane_g14_ParamLimits

0x13db,	// (0x00050327) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0005e0e1) cale_week_scroll_pane_g_ParamLimits

0x1423,	// (0x0005036f) cale_week_time_pane_ParamLimits

0x1447,	// (0x00050393) grid_cale_week_pane_ParamLimits

0xa381,	// (0x000592cd) listscroll_cale_week_pane_t1

0xa393,	// (0x000592df) scroll_pane_cp08_ParamLimits

0x20a5,	// (0x00050ff1) cale_month_corner_pane_ParamLimits

0xa74b,	// (0x00059697) cale_month_pane_t1

0x25ad,	// (0x000514f9) cale_month_week_pane_ParamLimits

0x2d28,	// (0x00051c74) popup_call_status_window_g1_ParamLimits

0x2d3c,	// (0x00051c88) popup_call_status_window_g2_ParamLimits

0x2d50,	// (0x00051c9c) popup_call_status_window_g3_ParamLimits

0xf342,	// (0x0005e28e) popup_call_status_window_g_ParamLimits

0xb1ea,	// (0x0005a136) aid_call2_pane

0xfc86,	// (0x0004ebd2) msg_header_pane_g1

0x363b,	// (0x00052587) postcard_address2_pane_ParamLimits

0x363b,	// (0x00052587) postcard_address2_pane

0x3651,	// (0x0005259d) postcard_message2_pane_ParamLimits

0x3651,	// (0x0005259d) postcard_message2_pane

0x41b6,	// (0x00053102) message2_row_pane_ParamLimits

0x41b6,	// (0x00053102) message2_row_pane

0xc990,	// (0x0005b8dc) address2_row_pane_ParamLimits

0xc990,	// (0x0005b8dc) address2_row_pane

0xc9a3,	// (0x0005b8ef) postcard_message2_row_pane_g1

0xc9ab,	// (0x0005b8f7) postcard_message2_row_pane_t1

0xc9a3,	// (0x0005b8ef) address2_row_pane_g1

0xc9ab,	// (0x0005b8f7) address2_row_pane_t1

0x17b4,	// (0x00050700) aid_size_cell_vorec

0x9eac,	// (0x00058df8) main_rss_pane

0x41d9,	// (0x00053125) rss_list_single_pane_ParamLimits

0x41d9,	// (0x00053125) rss_list_single_pane

0xc9b9,	// (0x0005b905) rss_list_single_pane_t1

0xc9c7,	// (0x0005b913) rss_list_single_pane_t2

0x0001,

0xf5ed,	// (0x0005e539) rss_list_single_pane_t

0x9eac,	// (0x00058df8) main_camera2_pane

0x9eac,	// (0x00058df8) main_video2_pane

0x4428,	// (0x00053374) cams_zoom_pane_cp2_ParamLimits

0x4428,	// (0x00053374) cams_zoom_pane_cp2

0x443f,	// (0x0005338b) image2_vga_pane_ParamLimits

0x443f,	// (0x0005338b) image2_vga_pane

0x4487,	// (0x000533d3) main_camera2_pane_g1_ParamLimits

0x4487,	// (0x000533d3) main_camera2_pane_g1

0x44a7,	// (0x000533f3) main_camera2_pane_g2_ParamLimits

0x44a7,	// (0x000533f3) main_camera2_pane_g2

0x44be,	// (0x0005340a) main_camera2_pane_g3_ParamLimits

0x44be,	// (0x0005340a) main_camera2_pane_g3

0x44d5,	// (0x00053421) main_camera2_pane_g4_ParamLimits

0x44d5,	// (0x00053421) main_camera2_pane_g4

0x44ec,	// (0x00053438) main_camera2_pane_g5_ParamLimits

0x44ec,	// (0x00053438) main_camera2_pane_g5

0x4503,	// (0x0005344f) main_camera2_pane_g6_ParamLimits

0x4503,	// (0x0005344f) main_camera2_pane_g6

0x451a,	// (0x00053466) main_camera2_pane_g7_ParamLimits

0x451a,	// (0x00053466) main_camera2_pane_g7

0x4531,	// (0x0005347d) main_camera2_pane_g8_ParamLimits

0x4531,	// (0x0005347d) main_camera2_pane_g8

0x0008,

0xf60e,	// (0x0005e55a) main_camera2_pane_g_ParamLimits

0xf60e,	// (0x0005e55a) main_camera2_pane_g

0x455f,	// (0x000534ab) main_camera2_pane_t1_ParamLimits

0x455f,	// (0x000534ab) main_camera2_pane_t1

0x4594,	// (0x000534e0) main_camera2_pane_t2_ParamLimits

0x4594,	// (0x000534e0) main_camera2_pane_t2

0x45b1,	// (0x000534fd) main_camera2_pane_t3_ParamLimits

0x45b1,	// (0x000534fd) main_camera2_pane_t3

0x460f,	// (0x0005355b) main_camera2_pane_t4_ParamLimits

0x460f,	// (0x0005355b) main_camera2_pane_t4

0x0006,

0xf621,	// (0x0005e56d) main_camera2_pane_t_ParamLimits

0xf621,	// (0x0005e56d) main_camera2_pane_t

0x4698,	// (0x000535e4) cams_zoom_pane_cp4_ParamLimits

0x4698,	// (0x000535e4) cams_zoom_pane_cp4

0x46ae,	// (0x000535fa) image2_cif_pane_ParamLimits

0x46ae,	// (0x000535fa) image2_cif_pane

0x46d9,	// (0x00053625) image2_subqcif_pane_ParamLimits

0x46d9,	// (0x00053625) image2_subqcif_pane

0x46f4,	// (0x00053640) main_video2_pane_g1_ParamLimits

0x46f4,	// (0x00053640) main_video2_pane_g1

0x470e,	// (0x0005365a) main_video2_pane_g2_ParamLimits

0x470e,	// (0x0005365a) main_video2_pane_g2

0x4724,	// (0x00053670) main_video2_pane_g3_ParamLimits

0x4724,	// (0x00053670) main_video2_pane_g3

0x473a,	// (0x00053686) main_video2_pane_g4_ParamLimits

0x473a,	// (0x00053686) main_video2_pane_g4

0x4750,	// (0x0005369c) main_video2_pane_g5_ParamLimits

0x4750,	// (0x0005369c) main_video2_pane_g5

0x4766,	// (0x000536b2) main_video2_pane_g6_ParamLimits

0x4766,	// (0x000536b2) main_video2_pane_g6

0x0005,

0xf630,	// (0x0005e57c) main_video2_pane_g_ParamLimits

0xf630,	// (0x0005e57c) main_video2_pane_g

0x4780,	// (0x000536cc) main_video2_pane_t1_ParamLimits

0x4780,	// (0x000536cc) main_video2_pane_t1

0x47a4,	// (0x000536f0) main_video2_pane_t2_ParamLimits

0x47a4,	// (0x000536f0) main_video2_pane_t2

0x47f4,	// (0x00053740) main_video2_pane_t3_ParamLimits

0x47f4,	// (0x00053740) main_video2_pane_t3

0x0002,

0xf63d,	// (0x0005e589) main_video2_pane_t_ParamLimits

0xf63d,	// (0x0005e589) main_video2_pane_t

0x3cba,	// (0x00052c06) call_muted_g2

0x0001,

0xf5df,	// (0x0005e52b) call_muted_g

0x9eac,	// (0x00058df8) main_mup2_pane

0x483c,	// (0x00053788) main_mup2_pane_g1_ParamLimits

0x483c,	// (0x00053788) main_mup2_pane_g1

0x4848,	// (0x00053794) main_mup2_pane_g2_ParamLimits

0x4848,	// (0x00053794) main_mup2_pane_g2

0xa95f,	// (0x000598ab) main_mup_pane_g13_cp1

0xa967,	// (0x000598b3) mup_volume_pane_cp1

0x4866,	// (0x000537b2) main_mup2_pane_g4_ParamLimits

0x4866,	// (0x000537b2) main_mup2_pane_g4

0x4878,	// (0x000537c4) main_mup2_pane_g5_ParamLimits

0x4878,	// (0x000537c4) main_mup2_pane_g5

0x488a,	// (0x000537d6) main_mup2_pane_g6_ParamLimits

0x488a,	// (0x000537d6) main_mup2_pane_g6

0x489c,	// (0x000537e8) main_mup2_pane_g7_ParamLimits

0x489c,	// (0x000537e8) main_mup2_pane_g7

0x0006,

0xf644,	// (0x0005e590) main_mup2_pane_g_ParamLimits

0xf644,	// (0x0005e590) main_mup2_pane_g

0x48b4,	// (0x00053800) main_mup2_pane_t1_ParamLimits

0x48b4,	// (0x00053800) main_mup2_pane_t1

0x48ca,	// (0x00053816) main_mup2_pane_t2_ParamLimits

0x48ca,	// (0x00053816) main_mup2_pane_t2

0x48e0,	// (0x0005382c) main_mup2_pane_t3_ParamLimits

0x48e0,	// (0x0005382c) main_mup2_pane_t3

0x48f6,	// (0x00053842) main_mup2_pane_t4_ParamLimits

0x48f6,	// (0x00053842) main_mup2_pane_t4

0x490e,	// (0x0005385a) main_mup2_pane_t5_ParamLimits

0x490e,	// (0x0005385a) main_mup2_pane_t5

0x4926,	// (0x00053872) main_mup2_pane_t6_ParamLimits

0x4926,	// (0x00053872) main_mup2_pane_t6

0x0005,

0xf653,	// (0x0005e59f) main_mup2_pane_t_ParamLimits

0xf653,	// (0x0005e59f) main_mup2_pane_t

0x4956,	// (0x000538a2) mup2_visualizer_pane_ParamLimits

0x4956,	// (0x000538a2) mup2_visualizer_pane

0x4984,	// (0x000538d0) mup_progress_pane_cp_ParamLimits

0x4984,	// (0x000538d0) mup_progress_pane_cp

0xa94a,	// (0x00059896) mup_volume_pane_cp_ParamLimits

0xa94a,	// (0x00059896) mup_volume_pane_cp

0x499a,	// (0x000538e6) mup2_visualizer_pane_g1_ParamLimits

0x499a,	// (0x000538e6) mup2_visualizer_pane_g1

0xca3f,	// (0x0005b98b) mup2_visualizer_pane_g2_ParamLimits

0xca3f,	// (0x0005b98b) mup2_visualizer_pane_g2

0x49af,	// (0x000538fb) mup2_visualizer_pane_g3_ParamLimits

0x49af,	// (0x000538fb) mup2_visualizer_pane_g3

0x0002,

0xf660,	// (0x0005e5ac) mup2_visualizer_pane_g_ParamLimits

0xf660,	// (0x0005e5ac) mup2_visualizer_pane_g

0xb832,	// (0x0005a77e) aid_size_cell_fmradio

0x3e6a,	// (0x00052db6) aid_height_parent_landcape

0xa5a9,	// (0x000594f5) wml_content_pane_cp

0xa5b1,	// (0x000594fd) wml_tabs_pane

0xa5ba,	// (0x00059506) popup_wml_miniature_window

0xa5c2,	// (0x0005950e) scroll_pane_cp021

0xa5d6,	// (0x00059522) wml_content_pane_comp8

0x9eac,	// (0x00058df8) bg_popup_sub_pane_cp05

0xca5d,	// (0x0005b9a9) popup_wml_miniature_window_g1

0xca65,	// (0x0005b9b1) wml_miniature_view_pane

0x49bb,	// (0x00053907) aid_size_wml_view

0x49c3,	// (0x0005390f) wml_miniature_view_pane_g1

0x49cc,	// (0x00053918) wml_miniature_view_pane_g2

0x49d5,	// (0x00053921) wml_miniature_view_pane_g3

0x49dd,	// (0x00053929) wml_miniature_view_pane_g4

0x49e5,	// (0x00053931) wml_miniature_view_pane_g5

0x49ed,	// (0x00053939) wml_miniature_view_pane_g6

0x49f5,	// (0x00053941) wml_miniature_view_pane_g7

0x49fd,	// (0x00053949) wml_miniature_view_pane_g8

0x0007,

0xf667,	// (0x0005e5b3) wml_miniature_view_pane_g

0xca6d,	// (0x0005b9b9) background_graphic_ParamLimits

0xca6d,	// (0x0005b9b9) background_graphic

0xca79,	// (0x0005b9c5) wml_tabs_2_pane

0xca82,	// (0x0005b9ce) wml_tabs_3_pane_ParamLimits

0xca82,	// (0x0005b9ce) wml_tabs_3_pane

0xca94,	// (0x0005b9e0) wml_tabs_4_pane_ParamLimits

0xca94,	// (0x0005b9e0) wml_tabs_4_pane

0xcaaa,	// (0x0005b9f6) wml_tabs_5_pane_ParamLimits

0xcaaa,	// (0x0005b9f6) wml_tabs_5_pane

0xcac4,	// (0x0005ba10) wml_tabs_pane_g2_ParamLimits

0xcac4,	// (0x0005ba10) wml_tabs_pane_g2

0xcad8,	// (0x0005ba24) wml_tabs_pane_g3_ParamLimits

0xcad8,	// (0x0005ba24) wml_tabs_pane_g3

0x4a05,	// (0x00053951) wml_tabs_2_active_pane_ParamLimits

0x4a05,	// (0x00053951) wml_tabs_2_active_pane

0x4a19,	// (0x00053965) wml_tabs_2_passive_pane_ParamLimits

0x4a19,	// (0x00053965) wml_tabs_2_passive_pane

0x4a2d,	// (0x00053979) wml_tabs_3_active_pane_cp_ParamLimits

0x4a2d,	// (0x00053979) wml_tabs_3_active_pane_cp

0x4a42,	// (0x0005398e) wml_tabs_3_passive_pane_ParamLimits

0x4a42,	// (0x0005398e) wml_tabs_3_passive_pane

0x4a55,	// (0x000539a1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a55,	// (0x000539a1) wml_tabs_3_passive_pane_cp

0x4a6c,	// (0x000539b8) tabs_4_active_pane

0x4a74,	// (0x000539c0) tabs_4_passive_pane

0x4a7e,	// (0x000539ca) tabs_4_passive_pane_cp

0x4a86,	// (0x000539d2) tabs_4_passive_pane_cp2

0x3b7e,	// (0x00052aca) aid_height_text

0x324f,	// (0x0005219b) mup_volume_cont_pane_ParamLimits

0x324f,	// (0x0005219b) mup_volume_cont_pane

0x0dc1,	// (0x0004fd0d) aid_size_cell_pinb

0x0dcb,	// (0x0004fd17) aid_size_list_pinb

0x4970,	// (0x000538bc) mup2_volume_cont_pane_ParamLimits

0x4970,	// (0x000538bc) mup2_volume_cont_pane

0xa936,	// (0x00059882) mup2_volume_cont_pane_g1_ParamLimits

0xa936,	// (0x00059882) mup2_volume_cont_pane_g1

0x0a76,	// (0x0004f9c2) aid_size_cell_touch_ParamLimits

0x0a76,	// (0x0004f9c2) aid_size_cell_touch

0x0ce5,	// (0x0004fc31) touch_pane_ParamLimits

0x0ce5,	// (0x0004fc31) touch_pane

0x9a3c,	// (0x00058988) main_rss2_pane

0xcaf5,	// (0x0005ba41) listscroll_rss2_pane

0xcafe,	// (0x0005ba4a) rss2_navigation_pane

0xcb06,	// (0x0005ba52) list_rss2_pane

0xb30e,	// (0x0005a25a) scroll_pane_cp22

0xcb0e,	// (0x0005ba5a) rss2_navigation_pane_g1

0xcb17,	// (0x0005ba63) rss2_navigation_pane_g2

0xcb1f,	// (0x0005ba6b) rss2_navigation_pane_g3

0x0002,

0xf678,	// (0x0005e5c4) rss2_navigation_pane_g

0xcb27,	// (0x0005ba73) rss2_navigation_pane_t1

0x4a90,	// (0x000539dc) rss2_list_single_pane_ParamLimits

0x4a90,	// (0x000539dc) rss2_list_single_pane

0xcb35,	// (0x0005ba81) rss2_list_single_pane_t2

0xcb43,	// (0x0005ba8f) rss2_list_single_pane_t3_ParamLimits

0xcb43,	// (0x0005ba8f) rss2_list_single_pane_t3

0xcb60,	// (0x0005baac) rss2_list_single_pane_t4

0x2bf9,	// (0x00051b45) smil_status_pane_g1

0xae6b,	// (0x00059db7) main_image2_pane_ParamLimits

0xae6b,	// (0x00059db7) main_image2_pane

0x4548,	// (0x00053494) main_camera2_pane_g9_ParamLimits

0x4548,	// (0x00053494) main_camera2_pane_g9

0x4664,	// (0x000535b0) main_camera2_pane_t5_ParamLimits

0x4664,	// (0x000535b0) main_camera2_pane_t5

0xa90b,	// (0x00059857) main_camera2_pane_t6_ParamLimits

0xa90b,	// (0x00059857) main_camera2_pane_t6

0x4aaa,	// (0x000539f6) main_image2_pane_g1_ParamLimits

0x4aaa,	// (0x000539f6) main_image2_pane_g1

0x3895,	// (0x000527e1) smil2_video_pane_ParamLimits

0x3895,	// (0x000527e1) smil2_video_pane

0x0ab6,	// (0x0004fa02) aid_zoom_text_primary_cp

0x9a5a,	// (0x000589a6) popup_preview_fixed_window

0xa512,	// (0x0005945e) im_reading_pane_g1

0x441a,	// (0x00053366) cams2_bc_adjust_pane_cp_ParamLimits

0x441a,	// (0x00053366) cams2_bc_adjust_pane_cp

0x468a,	// (0x000535d6) cams2_bc_adjust_pane_ParamLimits

0x468a,	// (0x000535d6) cams2_bc_adjust_pane

0xa96f,	// (0x000598bb) cams2_bc_adjust_pane_g1

0xa977,	// (0x000598c3) cams2_slider_pane

0xa980,	// (0x000598cc) cams2_slider_pane_g1

0xa989,	// (0x000598d5) cams2_slider_pane_g2

0x0006,

0xf67f,	// (0x0005e5cb) cams2_slider_pane_g

0x0ebd,	// (0x0004fe09) calc_display_pane_ParamLimits

0x0ee2,	// (0x0004fe2e) calc_paper_pane_ParamLimits

0x0f05,	// (0x0004fe51) grid_calc_pane_ParamLimits

0xa820,	// (0x0005976c) popup_clock_digital_window_t1_ParamLimits

0xb7cf,	// (0x0005a71b) main_image_pane_t1

0x0e9d,	// (0x0004fde9) aid_size_cell_calc_ParamLimits

0x0e9d,	// (0x0004fde9) aid_size_cell_calc

0x3eb0,	// (0x00052dfc) popup_blid_sat_info2_window_ParamLimits

0x3eb0,	// (0x00052dfc) popup_blid_sat_info2_window

0xcb76,	// (0x0005bac2) aid_size_cell_blid

0xcb7e,	// (0x0005baca) bg_popup_window_pane_cp07

0xcba1,	// (0x0005baed) grid_popup_blid_pane

0xcbab,	// (0x0005baf7) heading_pane_cp05_ParamLimits

0xcbab,	// (0x0005baf7) heading_pane_cp05

0xcc75,	// (0x0005bbc1) cell_popup_blid_pane_ParamLimits

0xcc75,	// (0x0005bbc1) cell_popup_blid_pane

0xcc9f,	// (0x0005bbeb) cell_popup_blid_pane_g1

0xcca7,	// (0x0005bbf3) cell_popup_blid_pane_t1

0x4940,	// (0x0005388c) mup2_indicator_pane_ParamLimits

0x4940,	// (0x0005388c) mup2_indicator_pane

0xa40b,	// (0x00059357) mup2_visualizer_osc_pane

0xca4b,	// (0x0005b997) mup2_visualizer_spec_pane_ParamLimits

0xca4b,	// (0x0005b997) mup2_visualizer_spec_pane

0x4ac0,	// (0x00053a0c) mup2_spec_half_pane

0x4ac9,	// (0x00053a15) mup2_spec_half_pane_cp

0x4ad1,	// (0x00053a1d) mup2_spec_bar_pane_ParamLimits

0x4ad1,	// (0x00053a1d) mup2_spec_bar_pane

0xc9d5,	// (0x0005b921) mup2_spec_bar_pane_g1

0xc9df,	// (0x0005b92b) mup2_spec_bar_pane_g2

0x0001,

0xf5f2,	// (0x0005e53e) mup2_spec_bar_pane_g

0x4af1,	// (0x00053a3d) mup2_osc_middle_pane

0xc9f1,	// (0x0005b93d) mup2_visualizer_osc_pane_g1

0x9a84,	// (0x000589d0) popup_number_entry_window_t1_ParamLimits

0x9a97,	// (0x000589e3) popup_number_entry_window_t2_ParamLimits

0x9aa9,	// (0x000589f5) popup_number_entry_window_t3_ParamLimits

0x9abb,	// (0x00058a07) popup_number_entry_window_t5_ParamLimits

0x9abb,	// (0x00058a07) popup_number_entry_window_t5

0xf0af,	// (0x0005dffb) popup_number_entry_window_t_ParamLimits

0x9af0,	// (0x00058a3c) text_title_cp2_ParamLimits

0xa85f,	// (0x000597ab) aid_hotspot_pointer_text2_pane

0xa885,	// (0x000597d1) main_viewer_pane_g9_ParamLimits

0xa885,	// (0x000597d1) main_viewer_pane_g9

0xa74b,	// (0x00059697) cale_month_pane_t1_ParamLimits

0xa7b6,	// (0x00059702) bg_cale_pane_ParamLimits

0xae8e,	// (0x00059dda) list_cale_pane_ParamLimits

0xae9f,	// (0x00059deb) listscroll_cale_day_pane_t1

0xaeb1,	// (0x00059dfd) scroll_pane_cp09_ParamLimits

0x3285,	// (0x000521d1) main_mup_eq_pane_t1_ParamLimits

0x3285,	// (0x000521d1) main_mup_eq_pane_t1

0x32a1,	// (0x000521ed) main_mup_eq_pane_t2_ParamLimits

0x32a1,	// (0x000521ed) main_mup_eq_pane_t2

0x32bd,	// (0x00052209) main_mup_eq_pane_t3_ParamLimits

0x32bd,	// (0x00052209) main_mup_eq_pane_t3

0x32db,	// (0x00052227) main_mup_eq_pane_t4_ParamLimits

0x32db,	// (0x00052227) main_mup_eq_pane_t4

0x32f9,	// (0x00052245) main_mup_eq_pane_t5_ParamLimits

0x32f9,	// (0x00052245) main_mup_eq_pane_t5

0x3317,	// (0x00052263) main_mup_eq_pane_t6_ParamLimits

0x3317,	// (0x00052263) main_mup_eq_pane_t6

0x332d,	// (0x00052279) main_mup_eq_pane_t7_ParamLimits

0x332d,	// (0x00052279) main_mup_eq_pane_t7

0x3343,	// (0x0005228f) main_mup_eq_pane_t8_ParamLimits

0x3343,	// (0x0005228f) main_mup_eq_pane_t8

0x3359,	// (0x000522a5) main_mup_eq_pane_t9_ParamLimits

0x3359,	// (0x000522a5) main_mup_eq_pane_t9

0x3375,	// (0x000522c1) main_mup_eq_pane_t10_ParamLimits

0x3375,	// (0x000522c1) main_mup_eq_pane_t10

0x0009,

0xf441,	// (0x0005e38d) main_mup_eq_pane_t_ParamLimits

0xf441,	// (0x0005e38d) main_mup_eq_pane_t

0x344a,	// (0x00052396) mup_equalizer_pane_cp5_ParamLimits

0x3462,	// (0x000523ae) mup_equalizer_pane_cp6_ParamLimits

0x347a,	// (0x000523c6) mup_equalizer_pane_cp7_ParamLimits

0x9a3c,	// (0x00058988) main_gallery_pane

0xc9fa,	// (0x0005b946) smil2_volume_pane

0xca02,	// (0x0005b94e) smil_status_volume_pane_g1_ParamLimits

0xca15,	// (0x0005b961) smil_status_volume_pane_g2_ParamLimits

0xa8e9,	// (0x00059835) smil_status_volume_pane_g3_ParamLimits

0xf5f7,	// (0x0005e543) smil_status_volume_pane_g_ParamLimits

0xcb7e,	// (0x0005baca) bg_popup_window_pane_cp07_ParamLimits

0xcb8c,	// (0x0005bad8) blid_firmament_pane

0x4afa,	// (0x00053a46) aid_size_cell_gallery_ParamLimits

0x4afa,	// (0x00053a46) aid_size_cell_gallery

0x4b10,	// (0x00053a5c) grid_gallery_pane_ParamLimits

0x4b10,	// (0x00053a5c) grid_gallery_pane

0x4b2b,	// (0x00053a77) cell_gallery_pane_ParamLimits

0x4b2b,	// (0x00053a77) cell_gallery_pane

0xccb5,	// (0x0005bc01) bg_cell_gallery_focus_pane_ParamLimits

0xccb5,	// (0x0005bc01) bg_cell_gallery_focus_pane

0xccc7,	// (0x0005bc13) cell_gallery_pane_g1_ParamLimits

0xccc7,	// (0x0005bc13) cell_gallery_pane_g1

0x4b7c,	// (0x00053ac8) cell_gallery_pane_g2_ParamLimits

0x4b7c,	// (0x00053ac8) cell_gallery_pane_g2

0x4b89,	// (0x00053ad5) cell_gallery_pane_g3_ParamLimits

0x4b89,	// (0x00053ad5) cell_gallery_pane_g3

0xccd3,	// (0x0005bc1f) cell_gallery_pane_g4_ParamLimits

0xccd3,	// (0x0005bc1f) cell_gallery_pane_g4

0x0003,

0xf6a5,	// (0x0005e5f1) cell_gallery_pane_g_ParamLimits

0xf6a5,	// (0x0005e5f1) cell_gallery_pane_g

0xccdf,	// (0x0005bc2b) bg_cell_gallery_focus_pane_g1

0xcce7,	// (0x0005bc33) bg_cell_gallery_focus_pane_g2

0xccef,	// (0x0005bc3b) bg_cell_gallery_focus_pane_g3

0xccf7,	// (0x0005bc43) bg_cell_gallery_focus_pane_g4

0xccff,	// (0x0005bc4b) bg_cell_gallery_focus_pane_g5

0xcd07,	// (0x0005bc53) bg_cell_gallery_focus_pane_g6

0xcd0f,	// (0x0005bc5b) bg_cell_gallery_focus_pane_g7

0xcd17,	// (0x0005bc63) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ae,	// (0x0005e5fa) bg_cell_gallery_focus_pane_g

0xcd1f,	// (0x0005bc6b) aid_firma_cardinal

0xcd33,	// (0x0005bc7f) blid_firmament_pane_t1

0xcd4a,	// (0x0005bc96) blid_firmament_pane_t2

0xcd61,	// (0x0005bcad) blid_firmament_pane_t3

0xcd78,	// (0x0005bcc4) blid_firmament_pane_t4

0x0003,

0xf6bf,	// (0x0005e60b) blid_firmament_pane_t

0xcd8f,	// (0x0005bcdb) blid_sat_info_pane

0xcd9f,	// (0x0005bceb) blid_sat_info_pane_g1

0xcd9f,	// (0x0005bceb) blid_sat_info_pane_g2

0x0001,

0xf6c8,	// (0x0005e614) blid_sat_info_pane_g

0xcda9,	// (0x0005bcf5) blid_sat_info_pane_t1

0xcdb7,	// (0x0005bd03) smil2_volume_content_pane

0xcdc0,	// (0x0005bd0c) smil2_volume_pane_g1

0xa293,	// (0x000591df) smil2_volume_content_pane_g1

0xcdc8,	// (0x0005bd14) smil2_volume_content_pane_g2

0xcdd1,	// (0x0005bd1d) smil2_volume_content_pane_g3

0xcdda,	// (0x0005bd26) smil2_volume_content_pane_g4

0xcde3,	// (0x0005bd2f) smil2_volume_content_pane_g5

0xcdec,	// (0x0005bd38) smil2_volume_content_pane_g6

0xcdf5,	// (0x0005bd41) smil2_volume_content_pane_g7

0xcdfe,	// (0x0005bd4a) smil2_volume_content_pane_g8

0xce07,	// (0x0005bd53) smil2_volume_content_pane_g9

0xce10,	// (0x0005bd5c) smil2_volume_content_pane_g10

0x0009,

0xf6cd,	// (0x0005e619) smil2_volume_content_pane_g

0x1515,	// (0x00050461) cale_week_day_heading_pane_t1_ParamLimits

0x153f,	// (0x0005048b) cale_week_day_heading_pane_t2_ParamLimits

0x156e,	// (0x000504ba) cale_week_day_heading_pane_t3_ParamLimits

0x159d,	// (0x000504e9) cale_week_day_heading_pane_t4_ParamLimits

0x15cc,	// (0x00050518) cale_week_day_heading_pane_t5_ParamLimits

0x15ff,	// (0x0005054b) cale_week_day_heading_pane_t6_ParamLimits

0x1636,	// (0x00050582) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0005e102) cale_week_day_heading_pane_t_ParamLimits

0xa3b0,	// (0x000592fc) bg_cale_side_pane_ParamLimits

0x1660,	// (0x000505ac) cale_week_time_pane_t1_ParamLimits

0x167a,	// (0x000505c6) cale_week_time_pane_t2_ParamLimits

0x1694,	// (0x000505e0) cale_week_time_pane_t3_ParamLimits

0x16ae,	// (0x000505fa) cale_week_time_pane_t4_ParamLimits

0x16c8,	// (0x00050614) cale_week_time_pane_t5_ParamLimits

0x16e2,	// (0x0005062e) cale_week_time_pane_t6_ParamLimits

0x1702,	// (0x0005064e) cale_week_time_pane_t7_ParamLimits

0x1728,	// (0x00050674) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0005e111) cale_week_time_pane_t_ParamLimits

0x174e,	// (0x0005069a) cell_cale_week_pane_g2_ParamLimits

0xa3b0,	// (0x000592fc) bg_cale_side_pane_cp01_ParamLimits

0x29d6,	// (0x00051922) cale_month_week_pane_t1_ParamLimits

0x29ef,	// (0x0005193b) cale_month_week_pane_t2_ParamLimits

0x2a08,	// (0x00051954) cale_month_week_pane_t3_ParamLimits

0x2a21,	// (0x0005196d) cale_month_week_pane_t4_ParamLimits

0x2a3a,	// (0x00051986) cale_month_week_pane_t5_ParamLimits

0x2a53,	// (0x0005199f) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0005e1e6) cale_month_week_pane_t_ParamLimits

0xa75d,	// (0x000596a9) cell_cale_month_pane_g1_ParamLimits

0x9a3c,	// (0x00058988) main_cale_event_viewer_pane

0x9a3c,	// (0x00058988) listscroll_cale_event_viewer_pane

0xce19,	// (0x0005bd65) list_cale_ev_pane

0xce21,	// (0x0005bd6d) scroll_pane_cp023

0x4b96,	// (0x00053ae2) field_cale_ev_pane_ParamLimits

0x4b96,	// (0x00053ae2) field_cale_ev_pane

0xce2d,	// (0x0005bd79) field_cale_ev_content_pane_ParamLimits

0xce2d,	// (0x0005bd79) field_cale_ev_content_pane

0xce39,	// (0x0005bd85) field_cale_ev_pane_g1_ParamLimits

0xce39,	// (0x0005bd85) field_cale_ev_pane_g1

0xce45,	// (0x0005bd91) field_cale_ev_pane_g2_ParamLimits

0xce45,	// (0x0005bd91) field_cale_ev_pane_g2

0xce5d,	// (0x0005bda9) field_cale_ev_pane_g3_ParamLimits

0xce5d,	// (0x0005bda9) field_cale_ev_pane_g3

0x0002,

0xf6e2,	// (0x0005e62e) field_cale_ev_pane_g_ParamLimits

0xf6e2,	// (0x0005e62e) field_cale_ev_pane_g

0xce75,	// (0x0005bdc1) field_cale_ev_pane_t1_ParamLimits

0xce75,	// (0x0005bdc1) field_cale_ev_pane_t1

0x4bba,	// (0x00053b06) field_cale_ev_content_pane_t1_ParamLimits

0x4bba,	// (0x00053b06) field_cale_ev_content_pane_t1

0xb6b5,	// (0x0005a601) bg_button_pane_cp01

0x11cd,	// (0x00050119) listscroll_cale_week_pane_ParamLimits

0xa378,	// (0x000592c4) popup_toolbar_window_cp01

0xa381,	// (0x000592cd) listscroll_cale_week_pane_t1_ParamLimits

0x11cd,	// (0x00050119) listscroll_cale_day_pane_ParamLimits

0xa378,	// (0x000592c4) popup_toolbar_window_cp02

0xae9f,	// (0x00059deb) listscroll_cale_day_pane_t1_ParamLimits

0x11cd,	// (0x00050119) main_cale_month_pane_ParamLimits

0xa8d4,	// (0x00059820) popup_toolbar_window_cp03_ParamLimits

0xa8d4,	// (0x00059820) popup_toolbar_window_cp03

0x3753,	// (0x0005269f) main_image_pane_g2_ParamLimits

0x3753,	// (0x0005269f) main_image_pane_g2

0x3764,	// (0x000526b0) main_image_pane_g3_ParamLimits

0x3764,	// (0x000526b0) main_image_pane_g3

0x0002,

0xf4d3,	// (0x0005e41f) main_image_pane_g_ParamLimits

0xf4d3,	// (0x0005e41f) main_image_pane_g

0xb7cf,	// (0x0005a71b) main_image_pane_t1_ParamLimits

0x3775,	// (0x000526c1) main_image_pane_t2_ParamLimits

0x3775,	// (0x000526c1) main_image_pane_t2

0x3787,	// (0x000526d3) main_image_pane_t3_ParamLimits

0x3787,	// (0x000526d3) main_image_pane_t3

0x37af,	// (0x000526fb) main_image_pane_t4_ParamLimits

0x37af,	// (0x000526fb) main_image_pane_t4

0x0003,

0xf4da,	// (0x0005e426) main_image_pane_t_ParamLimits

0xf4da,	// (0x0005e426) main_image_pane_t

0x37cf,	// (0x0005271b) popup_image_details_window_cp01

0x37d9,	// (0x00052725) popup_toobar_trans_pane_cp01_ParamLimits

0x37d9,	// (0x00052725) popup_toobar_trans_pane_cp01

0x3fa3,	// (0x00052eef) popup_image_details_window_ParamLimits

0x3fa3,	// (0x00052eef) popup_image_details_window

0xa8a5,	// (0x000597f1) popup_image_focus_window

0x43d4,	// (0x00053320) camera2_autofocus_pane_ParamLimits

0x43d4,	// (0x00053320) camera2_autofocus_pane

0x9a3c,	// (0x00058988) bg_popup_sub_pane_cp06

0xce8c,	// (0x0005bdd8) popup_image_focus_window_g1

0xce94,	// (0x0005bde0) popup_image_focus_window_g2

0xce9c,	// (0x0005bde8) popup_image_focus_window_g3

0xcea4,	// (0x0005bdf0) popup_image_focus_window_g4

0x0003,

0xf6e9,	// (0x0005e635) popup_image_focus_window_g

0xceac,	// (0x0005bdf8) popup_image_focus_window_t1

0xceba,	// (0x0005be06) popup_image_focus_window_t2

0xceca,	// (0x0005be16) popup_image_focus_window_t3

0x0002,

0xf6f2,	// (0x0005e63e) popup_image_focus_window_t

0xced8,	// (0x0005be24) camera2_autofocus_pane_g1

0xae6b,	// (0x00059db7) bg_tb_trans_pane_cp01

0xcee6,	// (0x0005be32) popup_image_details_window_g1

0xcef9,	// (0x0005be45) popup_image_details_window_g2

0x0002,

0xf704,	// (0x0005e650) popup_image_details_window_g

0xcf22,	// (0x0005be6e) popup_image_details_window_t1

0xcf34,	// (0x0005be80) popup_image_details_window_t2

0xcf4d,	// (0x0005be99) popup_image_details_window_t3

0xcf61,	// (0x0005bead) popup_image_details_window_t4

0xcf7c,	// (0x0005bec8) popup_image_details_window_t5

0x0004,

0xf70b,	// (0x0005e657) popup_image_details_window_t

0xa1c0,	// (0x0005910c) bg_calc_paper_pane_ParamLimits

0x9a3c,	// (0x00058988) grid_highlight_pane_cp013

0xa1d4,	// (0x00059120) list_calc_pane_ParamLimits

0xa1e6,	// (0x00059132) scroll_pane_cp024

0xa1ee,	// (0x0005913a) bg_calc_display_pane_ParamLimits

0x1005,	// (0x0004ff51) calc_display_pane_t1_ParamLimits

0x1017,	// (0x0004ff63) calc_display_pane_t2_ParamLimits

0xa1fa,	// (0x00059146) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0005e082) calc_display_pane_t_ParamLimits

0x10d8,	// (0x00050024) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0005e09f) cell_calc_pane_g

0x10e1,	// (0x0005002d) cell_calc_pane_t1

0xa271,	// (0x000591bd) grid_highlight_pane_cp02_ParamLimits

0xa287,	// (0x000591d3) toolbar_button_pane_cp01_ParamLimits

0xa287,	// (0x000591d3) toolbar_button_pane_cp01

0xb814,	// (0x0005a760) temp_image_control_pane_ParamLimits

0xb814,	// (0x0005a760) temp_image_control_pane

0xae6b,	// (0x00059db7) main_mp3_pane

0xcf96,	// (0x0005bee2) temp_image_control_pane_g1_ParamLimits

0xcf96,	// (0x0005bee2) temp_image_control_pane_g1

0xcfa4,	// (0x0005bef0) temp_image_control_pane_g2_ParamLimits

0xcfa4,	// (0x0005bef0) temp_image_control_pane_g2

0xcfb6,	// (0x0005bf02) temp_image_control_pane_g3_ParamLimits

0xcfb6,	// (0x0005bf02) temp_image_control_pane_g3

0x4c0b,	// (0x00053b57) temp_image_control_pane_g4_ParamLimits

0x4c0b,	// (0x00053b57) temp_image_control_pane_g4

0x0003,

0xf716,	// (0x0005e662) temp_image_control_pane_g_ParamLimits

0xf716,	// (0x0005e662) temp_image_control_pane_g

0xcf96,	// (0x0005bee2) main_mp3_pane_g1

0x4c1e,	// (0x00053b6a) main_mp3_pane_g2

0x0007,

0xf71f,	// (0x0005e66b) main_mp3_pane_g

0xcff9,	// (0x0005bf45) main_mp3_pane_t1

0xa41d,	// (0x00059369) main_camera_pane_g8_ParamLimits

0xa41d,	// (0x00059369) main_camera_pane_g8

0x1a60,	// (0x000509ac) main_video_pane_g7_ParamLimits

0x1a60,	// (0x000509ac) main_video_pane_g7

0xa924,	// (0x00059870) main_camera2_pane_t7_ParamLimits

0xa924,	// (0x00059870) main_camera2_pane_t7

0xa569,	// (0x000594b5) scroll_pane_cp025_ParamLimits

0xa569,	// (0x000594b5) scroll_pane_cp025

0xa57d,	// (0x000594c9) scroll_pane_cp026_ParamLimits

0xa57d,	// (0x000594c9) scroll_pane_cp026

0xa58c,	// (0x000594d8) wml_content_pane_ParamLimits

0x9a3c,	// (0x00058988) main_touch_calib_pane

0x4cf0,	// (0x00053c3c) main_touch_calib_pane_g1

0x4d02,	// (0x00053c4e) main_touch_calib_pane_g2

0x4d14,	// (0x00053c60) main_touch_calib_pane_g3

0x4d26,	// (0x00053c72) main_touch_calib_pane_g4

0x0003,

0xf73d,	// (0x0005e689) main_touch_calib_pane_g

0x4d38,	// (0x00053c84) main_touch_calib_pane_t1

0x4d52,	// (0x00053c9e) main_touch_calib_pane_t2

0x0004,

0xf746,	// (0x0005e692) main_touch_calib_pane_t

0xb3dd,	// (0x0005a329) mup_progress_pane_cp02

0xb412,	// (0x0005a35e) navi_pane_g1

0xb4cd,	// (0x0005a419) navi_pane_mp_t3

0xae6b,	// (0x00059db7) main_mp3_pane_ParamLimits

0x415c,	// (0x000530a8) navi_pane_ParamLimits

0xcf96,	// (0x0005bee2) main_mp3_pane_g1_ParamLimits

0x4c1e,	// (0x00053b6a) main_mp3_pane_g2_ParamLimits

0x4c2a,	// (0x00053b76) main_mp3_pane_g3_ParamLimits

0x4c2a,	// (0x00053b76) main_mp3_pane_g3

0x4c38,	// (0x00053b84) main_mp3_pane_g4_ParamLimits

0x4c38,	// (0x00053b84) main_mp3_pane_g4

0xcfc6,	// (0x0005bf12) main_mp3_pane_g5_ParamLimits

0xcfc6,	// (0x0005bf12) main_mp3_pane_g5

0xcfd4,	// (0x0005bf20) main_mp3_pane_g6_ParamLimits

0xcfd4,	// (0x0005bf20) main_mp3_pane_g6

0xcfe1,	// (0x0005bf2d) main_mp3_pane_g7_ParamLimits

0xcfe1,	// (0x0005bf2d) main_mp3_pane_g7

0xcfed,	// (0x0005bf39) main_mp3_pane_g8_ParamLimits

0xcfed,	// (0x0005bf39) main_mp3_pane_g8

0xf71f,	// (0x0005e66b) main_mp3_pane_g_ParamLimits

0x4c44,	// (0x00053b90) main_mp3_pane_t2

0x4c52,	// (0x00053b9e) main_mp3_pane_t3

0xd007,	// (0x0005bf53) main_mp3_pane_t4

0xd015,	// (0x0005bf61) main_mp3_pane_t5

0x0005,

0xf730,	// (0x0005e67c) main_mp3_pane_t

0xd023,	// (0x0005bf6f) mup_progress_pane_cp01

0x0ab6,	// (0x0004fa02) aid_zoom_text_secondary2

0xce19,	// (0x0005bd65) list_cale_ev2_pane

0xce21,	// (0x0005bd6d) scroll_pane_cp023_ParamLimits

0x4dac,	// (0x00053cf8) field_cale_ev2_pane_ParamLimits

0x4dac,	// (0x00053cf8) field_cale_ev2_pane

0xfd0d,	// (0x0004ec59) field_cale_ev2_pane_g1_ParamLimits

0xfd0d,	// (0x0004ec59) field_cale_ev2_pane_g1

0xfd19,	// (0x0004ec65) field_cale_ev2_pane_g2_ParamLimits

0xfd19,	// (0x0004ec65) field_cale_ev2_pane_g2

0xfd31,	// (0x0004ec7d) field_cale_ev2_pane_g3_ParamLimits

0xfd31,	// (0x0004ec7d) field_cale_ev2_pane_g3

0x0003,

0xf751,	// (0x0005e69d) field_cale_ev2_pane_g_ParamLimits

0xf751,	// (0x0005e69d) field_cale_ev2_pane_g

0xfd49,	// (0x0004ec95) field_cale_ev2_pane_t1_ParamLimits

0xfd49,	// (0x0004ec95) field_cale_ev2_pane_t1

0xfd60,	// (0x0004ecac) field_cale_ev2_pane_t2_ParamLimits

0xfd60,	// (0x0004ecac) field_cale_ev2_pane_t2

0x0001,

0xf75a,	// (0x0005e6a6) field_cale_ev2_pane_t_ParamLimits

0xf75a,	// (0x0005e6a6) field_cale_ev2_pane_t

0x35eb,	// (0x00052537) main_postcard_pane_g5_ParamLimits

0x35eb,	// (0x00052537) main_postcard_pane_g5

0x3601,	// (0x0005254d) main_postcard_pane_g6_ParamLimits

0x3601,	// (0x0005254d) main_postcard_pane_g6

0x180c,	// (0x00050758) camera2_autofocus_pane_cp_ParamLimits

0x180c,	// (0x00050758) camera2_autofocus_pane_cp

0xae6b,	// (0x00059db7) main_mup3_pane

0x4e26,	// (0x00053d72) main_mup3_pane_g1_ParamLimits

0x4e26,	// (0x00053d72) main_mup3_pane_g1

0x4e48,	// (0x00053d94) main_mup3_pane_g2_ParamLimits

0x4e48,	// (0x00053d94) main_mup3_pane_g2

0x4ec3,	// (0x00053e0f) main_mup3_pane_g3_ParamLimits

0x4ec3,	// (0x00053e0f) main_mup3_pane_g3

0x4f2d,	// (0x00053e79) main_mup3_pane_g4_ParamLimits

0x4f2d,	// (0x00053e79) main_mup3_pane_g4

0x4f97,	// (0x00053ee3) main_mup3_pane_g5_ParamLimits

0x4f97,	// (0x00053ee3) main_mup3_pane_g5

0x5001,	// (0x00053f4d) main_mup3_pane_g6_ParamLimits

0x5001,	// (0x00053f4d) main_mup3_pane_g6

0xd02b,	// (0x0005bf77) main_mup3_pane_g7_ParamLimits

0xd02b,	// (0x0005bf77) main_mup3_pane_g7

0x0007,

0xf76a,	// (0x0005e6b6) main_mup3_pane_g_ParamLimits

0xf76a,	// (0x0005e6b6) main_mup3_pane_g

0x5081,	// (0x00053fcd) main_mup3_pane_t1_ParamLimits

0x5081,	// (0x00053fcd) main_mup3_pane_t1

0x50f3,	// (0x0005403f) main_mup3_pane_t2_ParamLimits

0x50f3,	// (0x0005403f) main_mup3_pane_t2

0x51c5,	// (0x00054111) main_mup3_pane_t4_ParamLimits

0x51c5,	// (0x00054111) main_mup3_pane_t4

0x5223,	// (0x0005416f) main_mup3_pane_t5_ParamLimits

0x5223,	// (0x0005416f) main_mup3_pane_t5

0x52df,	// (0x0005422b) main_mup3_pane_t6_ParamLimits

0x52df,	// (0x0005422b) main_mup3_pane_t6

0x0005,

0xf77b,	// (0x0005e6c7) main_mup3_pane_t_ParamLimits

0xf77b,	// (0x0005e6c7) main_mup3_pane_t

0x5397,	// (0x000542e3) mup3_progress_pane_ParamLimits

0x5397,	// (0x000542e3) mup3_progress_pane

0x542f,	// (0x0005437b) popup_mup3_control_window_ParamLimits

0x542f,	// (0x0005437b) popup_mup3_control_window

0xd039,	// (0x0005bf85) popup_mup3_text_window

0x5465,	// (0x000543b1) mup3_progress_pane_t1

0x5484,	// (0x000543d0) mup3_progress_pane_t2

0xd041,	// (0x0005bf8d) mup3_progress_pane_t3

0x0002,

0xf788,	// (0x0005e6d4) mup3_progress_pane_t

0xd05e,	// (0x0005bfaa) mup_progress_pane_cp03

0x9a3c,	// (0x00058988) bg_tb_trans_pane_cp04

0x54a3,	// (0x000543ef) mup3_volume_pane

0x54ab,	// (0x000543f7) popup_mup3_control_window_g1

0x54b4,	// (0x00054400) mup3_volume_pane_g1

0x54bd,	// (0x00054409) mup3_volume_pane_g2

0x54c6,	// (0x00054412) mup3_volume_pane_g3

0x0002,

0xf78f,	// (0x0005e6db) mup3_volume_pane_g

0x9a3c,	// (0x00058988) bg_tb_trans_pane_cp03

0xd06e,	// (0x0005bfba) popup_mup3_text_window_g1

0xd076,	// (0x0005bfc2) popup_mup3_text_window_t1

0xa248,	// (0x00059194) list_calc_item_pane_g1_ParamLimits

0xcaec,	// (0x0005ba38) mup_volume_pane_cp_g1

0x4d6c,	// (0x00053cb8) main_touch_calib_pane_t3

0x4d80,	// (0x00053ccc) main_touch_calib_pane_t4

0x4d96,	// (0x00053ce2) main_touch_calib_pane_t5

0x0a62,	// (0x0004f9ae) aid_cell_size_toolbar2

0x0a6a,	// (0x0004f9b6) aid_popup3_width_pane

0x0aa6,	// (0x0004f9f2) aid_zoom_text_msg_primary

0x17fe,	// (0x0005074a) vorec_t7

0xa20c,	// (0x00059158) bg_calc_paper_pane_g1_ParamLimits

0xa218,	// (0x00059164) bg_calc_paper_pane_g2_ParamLimits

0xa224,	// (0x00059170) bg_calc_paper_pane_g3_ParamLimits

0xa230,	// (0x0005917c) bg_calc_paper_pane_g4_ParamLimits

0xa23c,	// (0x00059188) bg_calc_paper_pane_g5_ParamLimits

0x1064,	// (0x0004ffb0) bg_calc_paper_pane_g6_ParamLimits

0x1072,	// (0x0004ffbe) bg_calc_paper_pane_g7_ParamLimits

0x1080,	// (0x0004ffcc) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0005e089) bg_calc_paper_pane_g_ParamLimits

0x1093,	// (0x0004ffdf) calc_bg_paper_pane_g9_ParamLimits

0x196e,	// (0x000508ba) image_qvga_pane_ParamLimits

0x196e,	// (0x000508ba) image_qvga_pane

0xa107,	// (0x00059053) bg_popup_sub_pane_cp04_ParamLimits

0xb74b,	// (0x0005a697) popup_mup_playback_window_g1_ParamLimits

0xb757,	// (0x0005a6a3) popup_mup_playback_window_t1_ParamLimits

0xb76c,	// (0x0005a6b8) popup_mup_playback_window_t2_ParamLimits

0xf4ce,	// (0x0005e41a) popup_mup_playback_window_t_ParamLimits

0x4858,	// (0x000537a4) main_mup2_pane_g3_ParamLimits

0x4858,	// (0x000537a4) main_mup2_pane_g3

0x1c5f,	// (0x00050bab) popup_toolbar_window_cp04

0xbb67,	// (0x0005aab3) popup_call2_audio_second_window_g3_ParamLimits

0xbb67,	// (0x0005aab3) popup_call2_audio_second_window_g3

0xbf71,	// (0x0005aebd) popup_call2_audio_first_window_g4_ParamLimits

0xbf71,	// (0x0005aebd) popup_call2_audio_first_window_g4

0xc5fc,	// (0x0005b548) popup_call2_audio_in_window_g4_ParamLimits

0xc5fc,	// (0x0005b548) popup_call2_audio_in_window_g4

0x3735,	// (0x00052681) aid_area_sk_bg_cut_ParamLimits

0x3735,	// (0x00052681) aid_area_sk_bg_cut

0xb781,	// (0x0005a6cd) aid_area_sk_bg_cut_2_ParamLimits

0xb781,	// (0x0005a6cd) aid_area_sk_bg_cut_2

0x4b6c,	// (0x00053ab8) aid_placing_details_win

0x4b74,	// (0x00053ac0) aid_placing_details_win_2

0xced8,	// (0x0005be24) camera2_autofocus_pane_g1_ParamLimits

0x0c80,	// (0x0004fbcc) popup_fixed_preview_cale_window_ParamLimits

0x0c80,	// (0x0004fbcc) popup_fixed_preview_cale_window

0xb54d,	// (0x0005a499) navi_slider_pane_g3

0xb556,	// (0x0005a4a2) navi_slider_pane_g4

0xb55f,	// (0x0005a4ab) navi_slider_pane_g5

0xb54d,	// (0x0005a499) navi_slider_pane_g6

0xa846,	// (0x00059792) navi_slider_pane_g7

0xb682,	// (0x0005a5ce) mup_scale_pane_g3

0xb68b,	// (0x0005a5d7) mup_scale_pane_g4

0xb694,	// (0x0005a5e0) mup_scale_pane_g5

0x3492,	// (0x000523de) mup_scale_pane_g6

0x349b,	// (0x000523e7) mup_scale_pane_g7

0xb54d,	// (0x0005a499) cams2_slider_pane_g3

0xcb6e,	// (0x0005baba) cams2_slider_pane_g4

0xa992,	// (0x000598de) cams2_slider_pane_g5

0xb54d,	// (0x0005a499) cams2_slider_pane_g6

0xa99a,	// (0x000598e6) cams2_slider_pane_g7

0xcd9f,	// (0x0005bceb) camera2_autofocus_pane_cp_g1

0xc95b,	// (0x0005b8a7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc95b,	// (0x0005b8a7) bg_popup_preview_window_pane_cp02

0xd084,	// (0x0005bfd0) list_fp_cale_pane_ParamLimits

0xd084,	// (0x0005bfd0) list_fp_cale_pane

0xd090,	// (0x0005bfdc) popup_fixed_preview_cale_window_t1_ParamLimits

0xd090,	// (0x0005bfdc) popup_fixed_preview_cale_window_t1

0x54cf,	// (0x0005441b) popup_fixed_preview_cale_window_t2_ParamLimits

0x54cf,	// (0x0005441b) popup_fixed_preview_cale_window_t2

0x54e4,	// (0x00054430) popup_fixed_preview_cale_window_t3_ParamLimits

0x54e4,	// (0x00054430) popup_fixed_preview_cale_window_t3

0x0002,

0xf796,	// (0x0005e6e2) popup_fixed_preview_cale_window_t_ParamLimits

0xf796,	// (0x0005e6e2) popup_fixed_preview_cale_window_t

0x54fb,	// (0x00054447) list_single_fp_cale_pane_ParamLimits

0x54fb,	// (0x00054447) list_single_fp_cale_pane

0xd0ae,	// (0x0005bffa) list_single_fp_cale_pane_g1_ParamLimits

0xd0ae,	// (0x0005bffa) list_single_fp_cale_pane_g1

0xd0ba,	// (0x0005c006) list_single_fp_cale_pane_g2_ParamLimits

0xd0ba,	// (0x0005c006) list_single_fp_cale_pane_g2

0x0002,

0xf79d,	// (0x0005e6e9) list_single_fp_cale_pane_g_ParamLimits

0xf79d,	// (0x0005e6e9) list_single_fp_cale_pane_g

0xd0d3,	// (0x0005c01f) list_single_fp_cale_pane_t1_ParamLimits

0xd0d3,	// (0x0005c01f) list_single_fp_cale_pane_t1

0xd0e5,	// (0x0005c031) list_single_fp_cale_pane_t2_ParamLimits

0xd0e5,	// (0x0005c031) list_single_fp_cale_pane_t2

0x0001,

0xf7a4,	// (0x0005e6f0) list_single_fp_cale_pane_t_ParamLimits

0xf7a4,	// (0x0005e6f0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a3c,	// (0x00058988) main_dialer_pane

0x5513,	// (0x0005445f) aid_cell_size_keypad

0x551d,	// (0x00054469) dialer_ne_pane

0x5527,	// (0x00054473) grid_dialer_command_1_pane

0x552f,	// (0x0005447b) grid_dialer_command_2_pane

0x5537,	// (0x00054483) grid_dialer_keypad_pane

0x554b,	// (0x00054497) bg_popup_call_pane_cp06_ParamLimits

0x554b,	// (0x00054497) bg_popup_call_pane_cp06

0x5557,	// (0x000544a3) dialer_ne_clear_pane_ParamLimits

0x5557,	// (0x000544a3) dialer_ne_clear_pane

0xd118,	// (0x0005c064) dialer_ne_pane_g1

0xd120,	// (0x0005c06c) dialer_ne_pane_t1_ParamLimits

0xd120,	// (0x0005c06c) dialer_ne_pane_t1

0x5563,	// (0x000544af) dialer_ne_pane_t2_ParamLimits

0x5563,	// (0x000544af) dialer_ne_pane_t2

0x558d,	// (0x000544d9) dialer_ne_pane_t3_ParamLimits

0x558d,	// (0x000544d9) dialer_ne_pane_t3

0x0002,

0xf7a9,	// (0x0005e6f5) dialer_ne_pane_t_ParamLimits

0xf7a9,	// (0x0005e6f5) dialer_ne_pane_t

0x55bd,	// (0x00054509) dialer_ne_pane_t3_copy1_ParamLimits

0x55bd,	// (0x00054509) dialer_ne_pane_t3_copy1

0x55ec,	// (0x00054538) cell_dialer_keypad_pane_ParamLimits

0x55ec,	// (0x00054538) cell_dialer_keypad_pane

0x5603,	// (0x0005454f) cell_dialer_command_1_pane_ParamLimits

0x5603,	// (0x0005454f) cell_dialer_command_1_pane

0x5619,	// (0x00054565) cell_dialer_command_2_pane_ParamLimits

0x5619,	// (0x00054565) cell_dialer_command_2_pane

0xd132,	// (0x0005c07e) bg_button_pane_cp02_ParamLimits

0xd132,	// (0x0005c07e) bg_button_pane_cp02

0x5628,	// (0x00054574) cell_dialer_keypad_pane_g1_ParamLimits

0x5628,	// (0x00054574) cell_dialer_keypad_pane_g1

0xd132,	// (0x0005c07e) bg_button_pane_cp03_ParamLimits

0xd132,	// (0x0005c07e) bg_button_pane_cp03

0x5639,	// (0x00054585) cell_dialer_command_1_pane_g1_ParamLimits

0x5639,	// (0x00054585) cell_dialer_command_1_pane_g1

0xd13e,	// (0x0005c08a) bg_button_pane_cp04

0x564d,	// (0x00054599) cell_dialer_command_2_pane_g1

0xa40b,	// (0x00059357) bg_button_pane_cp06

0xd146,	// (0x0005c092) dialer_ne_clear_pane_g1

0xb41e,	// (0x0005a36a) navi_pane_g2

0xb44c,	// (0x0005a398) navi_pane_g3

0x0002,

0xf3d1,	// (0x0005e31d) navi_pane_g

0xb4db,	// (0x0005a427) navi_pane_mv_g2

0xb504,	// (0x0005a450) navi_pane_mv_g5

0x2ffa,	// (0x00051f46) navi_pane_mv_t1

0xa1ee,	// (0x0005913a) main_clock2_pane

0xae6b,	// (0x00059db7) main_clock2_list_pane_ParamLimits

0xae6b,	// (0x00059db7) main_clock2_list_pane

0x56b9,	// (0x00054605) main_clock2_pane_t1_ParamLimits

0x56b9,	// (0x00054605) main_clock2_pane_t1

0x56f4,	// (0x00054640) main_clock2_pane_t2_ParamLimits

0x56f4,	// (0x00054640) main_clock2_pane_t2

0x0004,

0xf7b5,	// (0x0005e701) main_clock2_pane_t_ParamLimits

0xf7b5,	// (0x0005e701) main_clock2_pane_t

0x5793,	// (0x000546df) popup_clock_analogue_window_cp03_ParamLimits

0x5793,	// (0x000546df) popup_clock_analogue_window_cp03

0x57b8,	// (0x00054704) popup_clock_digital_window_cp02_ParamLimits

0x57b8,	// (0x00054704) popup_clock_digital_window_cp02

0x5831,	// (0x0005477d) main_clock2_list_single_pane_ParamLimits

0x5831,	// (0x0005477d) main_clock2_list_single_pane

0xa40b,	// (0x00059357) list_highlight_pane_cp05

0xd17e,	// (0x0005c0ca) main_clock2_list_single_pane_t1

0x1c5f,	// (0x00050bab) popup_toolbar_window_cp04_ParamLimits

0x4bdb,	// (0x00053b27) camera2_autofocus_pane_g2_ParamLimits

0x4bdb,	// (0x00053b27) camera2_autofocus_pane_g2

0x4be7,	// (0x00053b33) camera2_autofocus_pane_g3_ParamLimits

0x4be7,	// (0x00053b33) camera2_autofocus_pane_g3

0x4bf3,	// (0x00053b3f) camera2_autofocus_pane_g4_ParamLimits

0x4bf3,	// (0x00053b3f) camera2_autofocus_pane_g4

0x4bff,	// (0x00053b4b) camera2_autofocus_pane_g5_ParamLimits

0x4bff,	// (0x00053b4b) camera2_autofocus_pane_g5

0x0004,

0xf6f9,	// (0x0005e645) camera2_autofocus_pane_g_ParamLimits

0xf6f9,	// (0x0005e645) camera2_autofocus_pane_g

0x4ddc,	// (0x00053d28) camera2_autofocus_pane_cp_g2

0x4de4,	// (0x00053d30) camera2_autofocus_pane_cp_g3

0x4dec,	// (0x00053d38) camera2_autofocus_pane_cp_g4

0x4df4,	// (0x00053d40) camera2_autofocus_pane_cp_g5

0x0004,

0xf75f,	// (0x0005e6ab) camera2_autofocus_pane_cp_g

0x5543,	// (0x0005448f) popup_dialer_spcha_window

0x9a3c,	// (0x00058988) bg_popup_sub_pane_cp07

0xd18c,	// (0x0005c0d8) list_spcha_pane

0xd194,	// (0x0005c0e0) list_single_spcha_pane_ParamLimits

0xd194,	// (0x0005c0e0) list_single_spcha_pane

0x9a3c,	// (0x00058988) list_highlight_pane_cp06

0xd1a5,	// (0x0005c0f1) list_single_spcha_pane_t1

0xc3a6,	// (0x0005b2f2) popup_call2_audio_out_window_g4_ParamLimits

0xc3a6,	// (0x0005b2f2) popup_call2_audio_out_window_g4

0x9a3c,	// (0x00058988) main_imed2_pane

0xa8af,	// (0x000597fb) popup_imed_adjust2_window

0x3fbb,	// (0x00052f07) popup_imed_trans_window_ParamLimits

0x3fbb,	// (0x00052f07) popup_imed_trans_window

0xcbd7,	// (0x0005bb23) popup_blid_sat_info2_window_t1

0xcbe5,	// (0x0005bb31) popup_blid_sat_info2_window_t2

0x000a,

0xf68e,	// (0x0005e5da) popup_blid_sat_info2_window_t

0x58ec,	// (0x00054838) aid_size_cell_colour_35

0x590c,	// (0x00054858) aid_size_cell_colour_112

0x592c,	// (0x00054878) aid_size_cell_effect

0xc967,	// (0x0005b8b3) bg_tb_trans_pane_cp02

0xafa8,	// (0x00059ef4) heading_imed_pane

0x594c,	// (0x00054898) listscroll_imed_pane

0xd1b3,	// (0x0005c0ff) heading_imed_pane_g1

0xd1bb,	// (0x0005c107) heading_imed_pane_t1

0xd1c9,	// (0x0005c115) grid_imed_colour_35_pane_ParamLimits

0xd1c9,	// (0x0005c115) grid_imed_colour_35_pane

0x5958,	// (0x000548a4) grid_imed_effect_pane

0xd1e5,	// (0x0005c131) list_imed_aspect_pane

0x596f,	// (0x000548bb) scroll_pane_cp027_ParamLimits

0x596f,	// (0x000548bb) scroll_pane_cp027

0x5980,	// (0x000548cc) cell_imed_effect_pane_ParamLimits

0x5980,	// (0x000548cc) cell_imed_effect_pane

0xd1ed,	// (0x0005c139) cell_imed_colour_pane_ParamLimits

0xd1ed,	// (0x0005c139) cell_imed_colour_pane

0xd237,	// (0x0005c183) cell_imed_colour_pane_g1_ParamLimits

0xd237,	// (0x0005c183) cell_imed_colour_pane_g1

0xd248,	// (0x0005c194) hgihlgiht_grid_pane_cp016_ParamLimits

0xd248,	// (0x0005c194) hgihlgiht_grid_pane_cp016

0x59ab,	// (0x000548f7) cell_imed_effect_pane_g1

0x59b3,	// (0x000548ff) grid_highlight_pane_cp017

0xd259,	// (0x0005c1a5) list_imed_single_pane_ParamLimits

0xd259,	// (0x0005c1a5) list_imed_single_pane

0x9a3c,	// (0x00058988) list_highlight_pane_cp07

0xd26d,	// (0x0005c1b9) list_imed_aspect_pane_comp1_t1

0xc967,	// (0x0005b8b3) bg_tb_trans_pane_cp05

0xd28f,	// (0x0005c1db) popup_imed_adjust2_window_g1

0xd2b6,	// (0x0005c202) popup_imed_adjust2_window_t1

0xd2ce,	// (0x0005c21a) slider_imed_adjust_pane

0xd2e2,	// (0x0005c22e) slider_imed_adjust_pane_g1

0xd2f2,	// (0x0005c23e) slider_imed_adjust_pane_g2

0xd302,	// (0x0005c24e) slider_imed_adjust_pane_g3

0xd313,	// (0x0005c25f) slider_imed_adjust_pane_g4

0x0003,

0xf7d2,	// (0x0005e71e) slider_imed_adjust_pane_g

0x59bc,	// (0x00054908) aid_size_cell_clipart2

0xd324,	// (0x0005c270) grid_imed_clipart_pane

0xd32e,	// (0x0005c27a) scroll_pane_cp031

0x59c8,	// (0x00054914) cell_imed_clipart_pane_ParamLimits

0x59c8,	// (0x00054914) cell_imed_clipart_pane

0x59e5,	// (0x00054931) cell_imed_clipart_pane_g1

0x9a3c,	// (0x00058988) grid_highlight_pane_cp014

0x5697,	// (0x000545e3) main_clock2_pane_g1_ParamLimits

0x5697,	// (0x000545e3) main_clock2_pane_g1

0x57d8,	// (0x00054724) aid_call2_pane_cp10

0x57ea,	// (0x00054736) aid_call_pane_cp10

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g1

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g2

0x57fc,	// (0x00054748) popup_clock_analogue_window_cp10_g3

0x57fc,	// (0x00054748) popup_clock_analogue_window_cp10_g4

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c0,	// (0x0005e70c) popup_clock_analogue_window_cp10_g

0x5812,	// (0x0005475e) popup_clock_analogue_window_cp10_t1

0x5843,	// (0x0005478f) clock_digital_number_pane_cp10_ParamLimits

0x5843,	// (0x0005478f) clock_digital_number_pane_cp10

0x585d,	// (0x000547a9) clock_digital_number_pane_cp11_ParamLimits

0x585d,	// (0x000547a9) clock_digital_number_pane_cp11

0x5877,	// (0x000547c3) clock_digital_number_pane_cp12_ParamLimits

0x5877,	// (0x000547c3) clock_digital_number_pane_cp12

0x5893,	// (0x000547df) clock_digital_number_pane_cp13_ParamLimits

0x5893,	// (0x000547df) clock_digital_number_pane_cp13

0x58af,	// (0x000547fb) clock_digital_separator_pane_cp10_ParamLimits

0x58af,	// (0x000547fb) clock_digital_separator_pane_cp10

0x58cb,	// (0x00054817) popup_clock_digital_window_cp02_t1_ParamLimits

0x58cb,	// (0x00054817) popup_clock_digital_window_cp02_t1

0xa0ff,	// (0x0005904b) clock_digital_number_pane_cp10_g1

0xa0ff,	// (0x0005904b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7db,	// (0x0005e727) clock_digital_number_pane_cp10_g

0xa0ff,	// (0x0005904b) clock_digital_separator_pane_cp10_g1

0xa0ff,	// (0x0005904b) clock_digital_separator_pane_g2_cp10

0xb50c,	// (0x0005a458) navi_pane_vded_g4

0xb515,	// (0x0005a461) navi_pane_vded_g5

0xb51e,	// (0x0005a46a) navi_pane_vded_t1

0x9a3c,	// (0x00058988) main_vded_pane

0x59ee,	// (0x0005493a) main_vded_pane_g1

0x59fa,	// (0x00054946) main_vded_pane_g2

0x5a06,	// (0x00054952) main_vded_pane_g3

0x0002,

0xf7e0,	// (0x0005e72c) main_vded_pane_g

0x5a12,	// (0x0005495e) main_vded_pane_t1

0x5a20,	// (0x0005496c) main_vded_pane_t2

0x0001,

0xf7e7,	// (0x0005e733) main_vded_pane_t

0x5a2e,	// (0x0005497a) vded_slider_pane

0x5a38,	// (0x00054984) vded_video_pane

0xd336,	// (0x0005c282) vded_video_pane_g1

0x5a44,	// (0x00054990) vded_video_pane_g2

0xcd9f,	// (0x0005bceb) vded_video_pane_g3

0x0002,

0xf7ec,	// (0x0005e738) vded_video_pane_g

0xd340,	// (0x0005c28c) vded_slider_pane_g1

0xcaec,	// (0x0005ba38) vded_slider_pane_g2

0xd349,	// (0x0005c295) vded_slider_pane_g3

0xd352,	// (0x0005c29e) vded_slider_pane_g4

0xd35b,	// (0x0005c2a7) vded_slider_pane_g5

0x0004,

0xf7f3,	// (0x0005e73f) vded_slider_pane_g

0x5419,	// (0x00054365) mup3_rocker_pane_ParamLimits

0x5419,	// (0x00054365) mup3_rocker_pane

0x5a4d,	// (0x00054999) mup3_control_keys_pane_g1

0x5a55,	// (0x000549a1) mup3_control_keys_pane_g2

0x5a5d,	// (0x000549a9) mup3_control_keys_pane_g3

0x5a65,	// (0x000549b1) mup3_control_keys_pane_g4

0x0003,

0xf7fe,	// (0x0005e74a) mup3_control_keys_pane_g

0x0cb5,	// (0x0004fc01) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0cb5,	// (0x0004fc01) popup_toolbar2_fixed_window_cp01

0x544f,	// (0x0005439b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x544f,	// (0x0005439b) popup_toolbar2_fixed_window_cp02

0xbcd9,	// (0x0005ac25) popup_call2_audio_second_window_t4_ParamLimits

0xbcd9,	// (0x0005ac25) popup_call2_audio_second_window_t4

0xc207,	// (0x0005b153) popup_call2_audio_first_window_t6_ParamLimits

0xc207,	// (0x0005b153) popup_call2_audio_first_window_t6

0xc4a9,	// (0x0005b3f5) popup_call2_audio_out_window_t6_ParamLimits

0xc4a9,	// (0x0005b3f5) popup_call2_audio_out_window_t6

0x9a3c,	// (0x00058988) main_vitu_pane

0x5a75,	// (0x000549c1) aid_size_cell_itu_ParamLimits

0x5a75,	// (0x000549c1) aid_size_cell_itu

0xae6b,	// (0x00059db7) bg_popup_window_pane_cp08_ParamLimits

0xae6b,	// (0x00059db7) bg_popup_window_pane_cp08

0x5a8b,	// (0x000549d7) field_vitu_entry_pane_ParamLimits

0x5a8b,	// (0x000549d7) field_vitu_entry_pane

0x5aa2,	// (0x000549ee) grid_vitu_function_pane_ParamLimits

0x5aa2,	// (0x000549ee) grid_vitu_function_pane

0x5abd,	// (0x00054a09) grid_vitu_itu_pane_ParamLimits

0x5abd,	// (0x00054a09) grid_vitu_itu_pane

0x5adb,	// (0x00054a27) cell_vitu_itu_pane_ParamLimits

0x5adb,	// (0x00054a27) cell_vitu_itu_pane

0x5b01,	// (0x00054a4d) cell_vitu_function_pane_ParamLimits

0x5b01,	// (0x00054a4d) cell_vitu_function_pane

0xae6b,	// (0x00059db7) bg_popup_sub_pane_cp08_ParamLimits

0xae6b,	// (0x00059db7) bg_popup_sub_pane_cp08

0x5b1c,	// (0x00054a68) field_vitu_entry_pane_t1_ParamLimits

0x5b1c,	// (0x00054a68) field_vitu_entry_pane_t1

0xd37c,	// (0x0005c2c8) field_vitu_entry_pane_t2_ParamLimits

0xd37c,	// (0x0005c2c8) field_vitu_entry_pane_t2

0x0001,

0xf80c,	// (0x0005e758) field_vitu_entry_pane_t_ParamLimits

0xf80c,	// (0x0005e758) field_vitu_entry_pane_t

0xd399,	// (0x0005c2e5) bg_button_pane_cp05_ParamLimits

0xd399,	// (0x0005c2e5) bg_button_pane_cp05

0x5b3c,	// (0x00054a88) cell_vitu_itu_pane_g1

0x5b54,	// (0x00054aa0) cell_vitu_itu_pane_t1_ParamLimits

0x5b54,	// (0x00054aa0) cell_vitu_itu_pane_t1

0x5b66,	// (0x00054ab2) cell_vitu_itu_pane_t2_ParamLimits

0x5b66,	// (0x00054ab2) cell_vitu_itu_pane_t2

0x0002,

0xf811,	// (0x0005e75d) cell_vitu_itu_pane_t_ParamLimits

0xf811,	// (0x0005e75d) cell_vitu_itu_pane_t

0xd3a7,	// (0x0005c2f3) bg_button_pane_cp07

0x5b9b,	// (0x00054ae7) cell_vitu_function_pane_g1

0xa18e,	// (0x000590da) main_calc_pane_g1

0x0a9a,	// (0x0004f9e6) aid_visual_content_pane

0x9a3c,	// (0x00058988) main_vradio_pane

0x5ba4,	// (0x00054af0) main_vradio_pane_g1_ParamLimits

0x5ba4,	// (0x00054af0) main_vradio_pane_g1

0xd3b1,	// (0x0005c2fd) main_vradio_pane_g2_ParamLimits

0xd3b1,	// (0x0005c2fd) main_vradio_pane_g2

0x0001,

0xf818,	// (0x0005e764) main_vradio_pane_g_ParamLimits

0xf818,	// (0x0005e764) main_vradio_pane_g

0x5bbb,	// (0x00054b07) main_vradio_pane_t1_ParamLimits

0x5bbb,	// (0x00054b07) main_vradio_pane_t1

0x5bd0,	// (0x00054b1c) main_vradio_pane_t2_ParamLimits

0x5bd0,	// (0x00054b1c) main_vradio_pane_t2

0xd3be,	// (0x0005c30a) main_vradio_pane_t3_ParamLimits

0xd3be,	// (0x0005c30a) main_vradio_pane_t3

0x0002,

0xf81d,	// (0x0005e769) main_vradio_pane_t_ParamLimits

0xf81d,	// (0x0005e769) main_vradio_pane_t

0x5be5,	// (0x00054b31) vradio_rocker_control_pane_ParamLimits

0x5be5,	// (0x00054b31) vradio_rocker_control_pane

0x5bf7,	// (0x00054b43) vradio_station_info_pane_ParamLimits

0x5bf7,	// (0x00054b43) vradio_station_info_pane

0xd3d2,	// (0x0005c31e) vradio_frequency_info_pane_ParamLimits

0xd3d2,	// (0x0005c31e) vradio_frequency_info_pane

0xcd9f,	// (0x0005bceb) vradio_station_info_pane_g1

0xd3e1,	// (0x0005c32d) vradio_station_info_pane_t1_ParamLimits

0xd3e1,	// (0x0005c32d) vradio_station_info_pane_t1

0xd403,	// (0x0005c34f) vradio_station_info_pane_t2_ParamLimits

0xd403,	// (0x0005c34f) vradio_station_info_pane_t2

0x0001,

0xf824,	// (0x0005e770) vradio_station_info_pane_t_ParamLimits

0xf824,	// (0x0005e770) vradio_station_info_pane_t

0xd415,	// (0x0005c361) vradio_tuning_pane

0xd41d,	// (0x0005c369) vradio_rocker_control_pane_g1

0xd425,	// (0x0005c371) vradio_rocker_control_pane_g2

0xd42d,	// (0x0005c379) vradio_rocker_control_pane_g3

0xd435,	// (0x0005c381) vradio_rocker_control_pane_g4

0xd43d,	// (0x0005c389) vradio_rocker_control_pane_g5

0x0004,

0xf829,	// (0x0005e775) vradio_rocker_control_pane_g

0x5c07,	// (0x00054b53) vradio_frequency_info_pane_g1

0xd445,	// (0x0005c391) vradio_frequency_info_pane_t1_ParamLimits

0xd445,	// (0x0005c391) vradio_frequency_info_pane_t1

0x5c11,	// (0x00054b5d) vradio_tuning_pane_g1

0x5c1c,	// (0x00054b68) vradio_tuning_pane_t1

0x0af7,	// (0x0004fa43) area_side_right_pane_ParamLimits

0x0af7,	// (0x0004fa43) area_side_right_pane

0xc922,	// (0x0005b86e) status_small_pane_g1

0xc92a,	// (0x0005b876) status_small_pane_g2

0xc933,	// (0x0005b87f) status_small_pane_g3

0xc93c,	// (0x0005b888) status_small_pane_g4

0x0003,

0xf5e4,	// (0x0005e530) status_small_pane_g

0xc945,	// (0x0005b891) status_small_pane_t1

0x9a3c,	// (0x00058988) main_video3_pane

0xd459,	// (0x0005c3a5) cams_zoom_vslider_pane

0xd461,	// (0x0005c3ad) image3_wide_pane_ParamLimits

0xd461,	// (0x0005c3ad) image3_wide_pane

0xd47b,	// (0x0005c3c7) image3_wide_small_pane

0xd487,	// (0x0005c3d3) main_video3_pane_g1_ParamLimits

0xd487,	// (0x0005c3d3) main_video3_pane_g1

0xd4a3,	// (0x0005c3ef) main_video3_pane_g2_ParamLimits

0xd4a3,	// (0x0005c3ef) main_video3_pane_g2

0x0001,

0xf834,	// (0x0005e780) main_video3_pane_g_ParamLimits

0xf834,	// (0x0005e780) main_video3_pane_g

0xd4bf,	// (0x0005c40b) main_video3_pane_t1_ParamLimits

0xd4bf,	// (0x0005c40b) main_video3_pane_t1

0xd4ea,	// (0x0005c436) main_video3_pane_t2_ParamLimits

0xd4ea,	// (0x0005c436) main_video3_pane_t2

0xd517,	// (0x0005c463) main_video3_pane_t3_ParamLimits

0xd517,	// (0x0005c463) main_video3_pane_t3

0x0002,

0xf839,	// (0x0005e785) main_video3_pane_t_ParamLimits

0xf839,	// (0x0005e785) main_video3_pane_t

0xd544,	// (0x0005c490) cams_zoom_vslider_pane_g1

0xd54d,	// (0x0005c499) cams_zoom_vslider_pane_g2

0x0001,

0xf840,	// (0x0005e78c) cams_zoom_vslider_pane_g

0xd555,	// (0x0005c4a1) small_slider_vertical_pane

0xcd9f,	// (0x0005bceb) small_slider_vertical_pane_g1

0xcd9f,	// (0x0005bceb) small_slider_vertical_pane_g2

0xd55d,	// (0x0005c4a9) small_slider_vertical_pane_g3

0x0002,

0xf845,	// (0x0005e791) small_slider_vertical_pane_g

0x9a3c,	// (0x00058988) main_hwr_training_pane

0xd566,	// (0x0005c4b2) hwr_training_instruct_pane_ParamLimits

0xd566,	// (0x0005c4b2) hwr_training_instruct_pane

0x5c2b,	// (0x00054b77) hwr_training_navi_pane_ParamLimits

0x5c2b,	// (0x00054b77) hwr_training_navi_pane

0x5c4a,	// (0x00054b96) hwr_training_write_pane_ParamLimits

0x5c4a,	// (0x00054b96) hwr_training_write_pane

0x9a3c,	// (0x00058988) bg_frame_shadow_pane

0xd59d,	// (0x0005c4e9) hwr_training_write_pane_g1

0xd5a5,	// (0x0005c4f1) hwr_training_write_pane_g2

0xd5ad,	// (0x0005c4f9) hwr_training_write_pane_g3

0xd5b5,	// (0x0005c501) hwr_training_write_pane_g4

0xd5bd,	// (0x0005c509) hwr_training_write_pane_g5

0xd5c5,	// (0x0005c511) hwr_training_write_pane_g6

0xd5cd,	// (0x0005c519) hwr_training_write_pane_g7

0x0006,

0xf84c,	// (0x0005e798) hwr_training_write_pane_g

0xa9a3,	// (0x000598ef) hwr_training_navi_pane_g1_ParamLimits

0xa9a3,	// (0x000598ef) hwr_training_navi_pane_g1

0xa9b5,	// (0x00059901) hwr_training_navi_pane_g2_ParamLimits

0xa9b5,	// (0x00059901) hwr_training_navi_pane_g2

0xa9c7,	// (0x00059913) hwr_training_navi_pane_g3_ParamLimits

0xa9c7,	// (0x00059913) hwr_training_navi_pane_g3

0xa9d7,	// (0x00059923) hwr_training_navi_pane_g4_ParamLimits

0xa9d7,	// (0x00059923) hwr_training_navi_pane_g4

0x0004,

0xf85b,	// (0x0005e7a7) hwr_training_navi_pane_g_ParamLimits

0xf85b,	// (0x0005e7a7) hwr_training_navi_pane_g

0xa9e4,	// (0x00059930) hwr_training_navi_pane_t1

0x5c92,	// (0x00054bde) list_single_hwr_training_instruct_pane_ParamLimits

0x5c92,	// (0x00054bde) list_single_hwr_training_instruct_pane

0xd5d5,	// (0x0005c521) list_single_hwr_training_instruct_pane_t1

0xccdf,	// (0x0005bc2b) bg_frame_shadow_pane_g1

0xd5e4,	// (0x0005c530) bg_frame_shadow_pane_g2

0xd5ec,	// (0x0005c538) bg_frame_shadow_pane_g3

0xd5f4,	// (0x0005c540) bg_frame_shadow_pane_g4

0xd5fc,	// (0x0005c548) bg_frame_shadow_pane_g5

0xd604,	// (0x0005c550) bg_frame_shadow_pane_g6

0xd60c,	// (0x0005c558) bg_frame_shadow_pane_g7

0xa2d4,	// (0x00059220) bg_frame_shadow_pane_g8

0x0007,

0xf866,	// (0x0005e7b2) bg_frame_shadow_pane_g

0x9a3c,	// (0x00058988) main_video_tele_dialer_pane

0x5cae,	// (0x00054bfa) aid_size_cell_video_keypad_ParamLimits

0x5cae,	// (0x00054bfa) aid_size_cell_video_keypad

0x5cc8,	// (0x00054c14) grid_video_dialer_keypad_pane_ParamLimits

0x5cc8,	// (0x00054c14) grid_video_dialer_keypad_pane

0x5d14,	// (0x00054c60) video_down_pane_cp_ParamLimits

0x5d14,	// (0x00054c60) video_down_pane_cp

0x5d46,	// (0x00054c92) cell_video_dialer_keypad_pane_ParamLimits

0x5d46,	// (0x00054c92) cell_video_dialer_keypad_pane

0xd614,	// (0x0005c560) bg_button_pane_cp08_ParamLimits

0xd614,	// (0x0005c560) bg_button_pane_cp08

0x5d6c,	// (0x00054cb8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5d6c,	// (0x00054cb8) cell_video_dialer_keypad_pane_g1

0x5403,	// (0x0005434f) mup3_rocker2_pane_ParamLimits

0x5403,	// (0x0005434f) mup3_rocker2_pane

0xcd9f,	// (0x0005bceb) mup3_rocker2_pane_g1

0x3e88,	// (0x00052dd4) main_dialer2_pane

0x9a3c,	// (0x00058988) main_mp4_pane

0xaa10,	// (0x0005995c) main_mp4_pane_g1_ParamLimits

0xaa10,	// (0x0005995c) main_mp4_pane_g1

0xaa10,	// (0x0005995c) main_mp4_pane_g2_ParamLimits

0xaa10,	// (0x0005995c) main_mp4_pane_g2

0x5da7,	// (0x00054cf3) main_mp4_pane_g3_ParamLimits

0x5da7,	// (0x00054cf3) main_mp4_pane_g3

0xaa1e,	// (0x0005996a) main_mp4_pane_g4_ParamLimits

0xaa1e,	// (0x0005996a) main_mp4_pane_g4

0xaa4c,	// (0x00059998) main_mp4_pane_g5_ParamLimits

0xaa4c,	// (0x00059998) main_mp4_pane_g5

0x0007,

0xf886,	// (0x0005e7d2) main_mp4_pane_g_ParamLimits

0xf886,	// (0x0005e7d2) main_mp4_pane_g

0xaac0,	// (0x00059a0c) main_mp4_pane_t1_ParamLimits

0xaac0,	// (0x00059a0c) main_mp4_pane_t1

0xab1c,	// (0x00059a68) main_mp4_pane_t2_ParamLimits

0xab1c,	// (0x00059a68) main_mp4_pane_t2

0xd620,	// (0x0005c56c) main_mp4_pane_t3_ParamLimits

0xd620,	// (0x0005c56c) main_mp4_pane_t3

0xab6e,	// (0x00059aba) main_mp4_pane_t4_ParamLimits

0xab6e,	// (0x00059aba) main_mp4_pane_t4

0x0003,

0xf897,	// (0x0005e7e3) main_mp4_pane_t_ParamLimits

0xf897,	// (0x0005e7e3) main_mp4_pane_t

0xabae,	// (0x00059afa) mp4_progress_pane_ParamLimits

0xabae,	// (0x00059afa) mp4_progress_pane

0xabf8,	// (0x00059b44) mp4_rocker_pane_ParamLimits

0xabf8,	// (0x00059b44) mp4_rocker_pane

0xd64e,	// (0x0005c59a) mp4_progress_pane_t1

0xd667,	// (0x0005c5b3) mp4_progress_pane_t2

0x0001,

0xf8a0,	// (0x0005e7ec) mp4_progress_pane_t

0xd680,	// (0x0005c5cc) mup_progress_pane_cp04

0xcd9f,	// (0x0005bceb) mp4_rocker_pane_g1

0x5df1,	// (0x00054d3d) aid_cell_size_keypad2_ParamLimits

0x5df1,	// (0x00054d3d) aid_cell_size_keypad2

0x5e07,	// (0x00054d53) dialer2_ne_pane_ParamLimits

0x5e07,	// (0x00054d53) dialer2_ne_pane

0x5e1f,	// (0x00054d6b) grid_dialer2_keypad_pane_ParamLimits

0x5e1f,	// (0x00054d6b) grid_dialer2_keypad_pane

0xcb7e,	// (0x0005baca) bg_popup_call_pane_cp07_ParamLimits

0xcb7e,	// (0x0005baca) bg_popup_call_pane_cp07

0x5e3b,	// (0x00054d87) dialer2_ne_pane_t1_ParamLimits

0x5e3b,	// (0x00054d87) dialer2_ne_pane_t1

0x5e7b,	// (0x00054dc7) cell_dialer2_keypad_pane_ParamLimits

0x5e7b,	// (0x00054dc7) cell_dialer2_keypad_pane

0xd6f6,	// (0x0005c642) bg_button_pane_pane_cp04_ParamLimits

0xd6f6,	// (0x0005c642) bg_button_pane_pane_cp04

0x5ea1,	// (0x00054ded) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ea1,	// (0x00054ded) cell_dialer2_keypad_pane_g1

0x1b46,	// (0x00050a92) aid_placing_vt_set_content_ParamLimits

0x1b46,	// (0x00050a92) aid_placing_vt_set_content

0x1b6a,	// (0x00050ab6) aid_placing_vt_set_title_ParamLimits

0x1b6a,	// (0x00050ab6) aid_placing_vt_set_title

0x9a3c,	// (0x00058988) main_image3_pane

0x5f67,	// (0x00054eb3) area_side_right_pane_cp01_ParamLimits

0x5f67,	// (0x00054eb3) area_side_right_pane_cp01

0xaa10,	// (0x0005995c) main_image3_pane_g1_ParamLimits

0xaa10,	// (0x0005995c) main_image3_pane_g1

0x5f80,	// (0x00054ecc) main_image3_pane_g2_ParamLimits

0x5f80,	// (0x00054ecc) main_image3_pane_g2

0x5fa8,	// (0x00054ef4) main_image3_pane_g3_ParamLimits

0x5fa8,	// (0x00054ef4) main_image3_pane_g3

0x5fd2,	// (0x00054f1e) main_image3_pane_g4_ParamLimits

0x5fd2,	// (0x00054f1e) main_image3_pane_g4

0x0003,

0xf8af,	// (0x0005e7fb) main_image3_pane_g_ParamLimits

0xf8af,	// (0x0005e7fb) main_image3_pane_g

0x5ffc,	// (0x00054f48) main_image3_pane_t1_ParamLimits

0x5ffc,	// (0x00054f48) main_image3_pane_t1

0x6054,	// (0x00054fa0) main_image3_pane_t2_ParamLimits

0x6054,	// (0x00054fa0) main_image3_pane_t2

0x60a6,	// (0x00054ff2) main_image3_pane_t3_ParamLimits

0x60a6,	// (0x00054ff2) main_image3_pane_t3

0x0003,

0xf8b8,	// (0x0005e804) main_image3_pane_t_ParamLimits

0xf8b8,	// (0x0005e804) main_image3_pane_t

0xae6b,	// (0x00059db7) grid_sctrl_middle_pane_cp01_ParamLimits

0xae6b,	// (0x00059db7) grid_sctrl_middle_pane_cp01

0x612e,	// (0x0005507a) cell_sctrl_middle_pane_cp01_ParamLimits

0x612e,	// (0x0005507a) cell_sctrl_middle_pane_cp01

0x614b,	// (0x00055097) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x614b,	// (0x00055097) cell_sctrl_middle_pane_cp01_g1

0x9a3c,	// (0x00058988) main_call4_pane

0x6160,	// (0x000550ac) aid_size_button_call4_ParamLimits

0x6160,	// (0x000550ac) aid_size_button_call4

0x6193,	// (0x000550df) call4_windows_pane_ParamLimits

0x6193,	// (0x000550df) call4_windows_pane

0x61b2,	// (0x000550fe) grid_call4_button_pane_ParamLimits

0x61b2,	// (0x000550fe) grid_call4_button_pane

0x61e9,	// (0x00055135) call4_windows_conf_pane

0x6204,	// (0x00055150) popup_call4_audio_first_window_ParamLimits

0x6204,	// (0x00055150) popup_call4_audio_first_window

0x6256,	// (0x000551a2) popup_call4_audio_second_window_ParamLimits

0x6256,	// (0x000551a2) popup_call4_audio_second_window

0x626f,	// (0x000551bb) popup_call4_audio_wait_window_ParamLimits

0x626f,	// (0x000551bb) popup_call4_audio_wait_window

0x627d,	// (0x000551c9) cell_call4_button_pane_ParamLimits

0x627d,	// (0x000551c9) cell_call4_button_pane

0x62a4,	// (0x000551f0) bg_button_pane_cp09_ParamLimits

0x62a4,	// (0x000551f0) bg_button_pane_cp09

0x62b0,	// (0x000551fc) cell_call4_button_pane_g1_ParamLimits

0x62b0,	// (0x000551fc) cell_call4_button_pane_g1

0x62d6,	// (0x00055222) cell_call4_button_pane_t1_ParamLimits

0x62d6,	// (0x00055222) cell_call4_button_pane_t1

0xd70a,	// (0x0005c656) popup_call4_audio_conf_window_ParamLimits

0xd70a,	// (0x0005c656) popup_call4_audio_conf_window

0x5465,	// (0x000543b1) mup3_progress_pane_t1_ParamLimits

0x5484,	// (0x000543d0) mup3_progress_pane_t2_ParamLimits

0xd041,	// (0x0005bf8d) mup3_progress_pane_t3_ParamLimits

0xf788,	// (0x0005e6d4) mup3_progress_pane_t_ParamLimits

0xd05e,	// (0x0005bfaa) mup_progress_pane_cp03_ParamLimits

0x5a6d,	// (0x000549b9) mup3_control_keys_pane_g4_copy1

0xabdc,	// (0x00059b28) mp4_rocker2_pane_ParamLimits

0xabdc,	// (0x00059b28) mp4_rocker2_pane

0xd724,	// (0x0005c670) mp4_rocker2_pane_g1

0xd72c,	// (0x0005c678) mp4_rocker2_pane_g2

0xac7e,	// (0x00059bca) mp4_rocker2_pane_g3

0xac86,	// (0x00059bd2) mp4_rocker2_pane_g4

0xac8e,	// (0x00059bda) mp4_rocker2_pane_g5

0x0004,

0xf8c1,	// (0x0005e80d) mp4_rocker2_pane_g

0x9a3c,	// (0x00058988) main_camera4_pane

0x9a3c,	// (0x00058988) main_video4_pane

0x5ce2,	// (0x00054c2e) main_video_tele_dialer_pane_t1_ParamLimits

0x5ce2,	// (0x00054c2e) main_video_tele_dialer_pane_t1

0x5cfb,	// (0x00054c47) main_video_tele_dialer_pane_t2_ParamLimits

0x5cfb,	// (0x00054c47) main_video_tele_dialer_pane_t2

0x0001,

0xf877,	// (0x0005e7c3) main_video_tele_dialer_pane_t_ParamLimits

0xf877,	// (0x0005e7c3) main_video_tele_dialer_pane_t

0x6314,	// (0x00055260) cam4_autofocus_pane_ParamLimits

0x6314,	// (0x00055260) cam4_autofocus_pane

0x632a,	// (0x00055276) cam4_image_uncrop_pane_ParamLimits

0x632a,	// (0x00055276) cam4_image_uncrop_pane

0x6343,	// (0x0005528f) cam4_indicators_pane_ParamLimits

0x6343,	// (0x0005528f) cam4_indicators_pane

0x6373,	// (0x000552bf) main_camera4_pane_g1_ParamLimits

0x6373,	// (0x000552bf) main_camera4_pane_g1

0x6385,	// (0x000552d1) main_camera4_pane_g2_ParamLimits

0x6385,	// (0x000552d1) main_camera4_pane_g2

0x6398,	// (0x000552e4) main_camera4_pane_g3_ParamLimits

0x6398,	// (0x000552e4) main_camera4_pane_g3

0x63ab,	// (0x000552f7) main_camera4_pane_g4_ParamLimits

0x63ab,	// (0x000552f7) main_camera4_pane_g4

0x63be,	// (0x0005530a) main_camera4_pane_g5_ParamLimits

0x63be,	// (0x0005530a) main_camera4_pane_g5

0x0005,

0xf8cc,	// (0x0005e818) main_camera4_pane_g_ParamLimits

0xf8cc,	// (0x0005e818) main_camera4_pane_g

0x63e2,	// (0x0005532e) main_camera4_pane_t1_ParamLimits

0x63e2,	// (0x0005532e) main_camera4_pane_t1

0xcfc6,	// (0x0005bf12) bg_tb_trans_pane_cp06

0xacbc,	// (0x00059c08) cam4_indicators_pane_g1

0xaccd,	// (0x00059c19) cam4_indicators_pane_g2

0x0002,

0xf8e7,	// (0x0005e833) cam4_indicators_pane_g

0xace5,	// (0x00059c31) cam4_indicators_pane_t1

0x6446,	// (0x00055392) main_video4_pane_g1_ParamLimits

0x6446,	// (0x00055392) main_video4_pane_g1

0x6455,	// (0x000553a1) main_video4_pane_g2_ParamLimits

0x6455,	// (0x000553a1) main_video4_pane_g2

0x6464,	// (0x000553b0) main_video4_pane_g3_ParamLimits

0x6464,	// (0x000553b0) main_video4_pane_g3

0x6473,	// (0x000553bf) main_video4_pane_g4_ParamLimits

0x6473,	// (0x000553bf) main_video4_pane_g4

0x0004,

0xf8ee,	// (0x0005e83a) main_video4_pane_g_ParamLimits

0xf8ee,	// (0x0005e83a) main_video4_pane_g

0x6491,	// (0x000553dd) vid4_indicators_pane_ParamLimits

0x6491,	// (0x000553dd) vid4_indicators_pane

0x64bf,	// (0x0005540b) video4_image_uncrop_cif_pane_ParamLimits

0x64bf,	// (0x0005540b) video4_image_uncrop_cif_pane

0x64d9,	// (0x00055425) video4_image_uncrop_nhd_pane_ParamLimits

0x64d9,	// (0x00055425) video4_image_uncrop_nhd_pane

0x632a,	// (0x00055276) video4_image_uncrop_vga_pane_ParamLimits

0x632a,	// (0x00055276) video4_image_uncrop_vga_pane

0xae6b,	// (0x00059db7) bg_tb_trans_pane_cp07

0xad13,	// (0x00059c5f) vid4_indicators_pane_g1

0xad29,	// (0x00059c75) vid4_indicators_pane_g2

0xad3d,	// (0x00059c89) vid4_indicators_pane_g3

0x0004,

0xf8f9,	// (0x0005e845) vid4_indicators_pane_g

0xad6e,	// (0x00059cba) vid4_indicators_pane_t1

0x64ef,	// (0x0005543b) cam4_autofocus_pane_g1

0x64f7,	// (0x00055443) cam4_autofocus_pane_g2

0x64ff,	// (0x0005544b) cam4_autofocus_pane_g3

0x0002,

0xf904,	// (0x0005e850) cam4_autofocus_pane_g

0x6507,	// (0x00055453) cam4_autofocus_pane_g3_copy1

0x5d2a,	// (0x00054c76) video_down_pane_cp_t1

0x5d38,	// (0x00054c84) video_down_pane_cp_t2

0x0001,

0xf87c,	// (0x0005e7c8) video_down_pane_cp_t

0xae6b,	// (0x00059db7) popup_vitu2_window_ParamLimits

0xae6b,	// (0x00059db7) popup_vitu2_window

0x650f,	// (0x0005545b) aid_size_cell2_itu2_ParamLimits

0x650f,	// (0x0005545b) aid_size_cell2_itu2

0x6535,	// (0x00055481) aid_size_cell_itu2_ParamLimits

0x6535,	// (0x00055481) aid_size_cell_itu2

0x6595,	// (0x000554e1) bg_popup_window_pane_cp09_ParamLimits

0x6595,	// (0x000554e1) bg_popup_window_pane_cp09

0x65a3,	// (0x000554ef) field_vitu2_entry_pane_ParamLimits

0x65a3,	// (0x000554ef) field_vitu2_entry_pane

0x65cb,	// (0x00055517) grid_vitu2_function_pane_ParamLimits

0x65cb,	// (0x00055517) grid_vitu2_function_pane

0x661c,	// (0x00055568) grid_vitu2_itu_pane_ParamLimits

0x661c,	// (0x00055568) grid_vitu2_itu_pane

0x66ac,	// (0x000555f8) cell_vitu2_itu_pane_ParamLimits

0x66ac,	// (0x000555f8) cell_vitu2_itu_pane

0x66d9,	// (0x00055625) cell_vitu2_function_pane_ParamLimits

0x66d9,	// (0x00055625) cell_vitu2_function_pane

0xd734,	// (0x0005c680) bg_popup_call_pane_cp08_ParamLimits

0xd734,	// (0x0005c680) bg_popup_call_pane_cp08

0xd74b,	// (0x0005c697) field_vitu2_entry_pane_g1

0xd757,	// (0x0005c6a3) field_vitu2_entry_pane_g2

0x0002,

0xf90b,	// (0x0005e857) field_vitu2_entry_pane_g

0xfd75,	// (0x0004ecc1) field_vitu2_entry_pane_t1_ParamLimits

0xfd75,	// (0x0004ecc1) field_vitu2_entry_pane_t1

0x671d,	// (0x00055669) field_vitu2_entry_pane_t2_ParamLimits

0x671d,	// (0x00055669) field_vitu2_entry_pane_t2

0x0001,

0xf912,	// (0x0005e85e) field_vitu2_entry_pane_t_ParamLimits

0xf912,	// (0x0005e85e) field_vitu2_entry_pane_t

0x673a,	// (0x00055686) bg_button_pane_cp010_ParamLimits

0x673a,	// (0x00055686) bg_button_pane_cp010

0xad85,	// (0x00059cd1) cell_vitu2_itu_pane_g1

0x6756,	// (0x000556a2) cell_vitu2_itu_pane_t1_ParamLimits

0x6756,	// (0x000556a2) cell_vitu2_itu_pane_t1

0xfda4,	// (0x0004ecf0) cell_vitu2_itu_pane_t2_ParamLimits

0xfda4,	// (0x0004ecf0) cell_vitu2_itu_pane_t2

0x0002,

0xf91c,	// (0x0005e868) cell_vitu2_itu_pane_t_ParamLimits

0xf91c,	// (0x0005e868) cell_vitu2_itu_pane_t

0xae6b,	// (0x00059db7) bg_button_pane_cp011

0x67b4,	// (0x00055700) cell_vitu2_function_pane_g1

0x9a3c,	// (0x00058988) main_myfav_hc_pane

0x60f6,	// (0x00055042) popup_image3_note_pane_ParamLimits

0x60f6,	// (0x00055042) popup_image3_note_pane

0x6112,	// (0x0005505e) popup_image3_tool_bar_pane_ParamLimits

0x6112,	// (0x0005505e) popup_image3_tool_bar_pane

0xfe32,	// (0x0004ed7e) cell_vitu2_itu_pane_t3_ParamLimits

0xfe32,	// (0x0004ed7e) cell_vitu2_itu_pane_t3

0x9a3c,	// (0x00058988) bg_popup_trans_pane

0xd779,	// (0x0005c6c5) grid_image3_tool_bar_pane

0xd783,	// (0x0005c6cf) bg_popup_trans_pane_g1

0xa672,	// (0x000595be) bg_popup_trans_pane_g2

0xd78b,	// (0x0005c6d7) bg_popup_trans_pane_g3

0xd793,	// (0x0005c6df) bg_popup_trans_pane_g4

0xd79b,	// (0x0005c6e7) bg_popup_trans_pane_g5

0xd7a3,	// (0x0005c6ef) bg_popup_trans_pane_g6

0xd7ab,	// (0x0005c6f7) bg_popup_trans_pane_g7

0xd7b3,	// (0x0005c6ff) bg_popup_trans_pane_g8

0xa652,	// (0x0005959e) bg_popup_trans_pane_g9

0x0008,

0xf923,	// (0x0005e86f) bg_popup_trans_pane_g

0xd7bb,	// (0x0005c707) cell_image3_tool_bar_pane_ParamLimits

0xd7bb,	// (0x0005c707) cell_image3_tool_bar_pane

0xcd9f,	// (0x0005bceb) cell_image3_tool_bar_pane_g1

0x9a3c,	// (0x00058988) bg_popup_trans_pane_cp1

0xd7d1,	// (0x0005c71d) popup_image3_note_pane_t1

0xd7df,	// (0x0005c72b) popup_image3_note_pane_t2

0xd7ed,	// (0x0005c739) popup_image3_note_pane_t3

0x0002,

0xf936,	// (0x0005e882) popup_image3_note_pane_t

0xd7fd,	// (0x0005c749) popup_image3_note_pane_t3_copy1

0x67c8,	// (0x00055714) bg_myfav_hc_instruction_pane_ParamLimits

0x67c8,	// (0x00055714) bg_myfav_hc_instruction_pane

0x67e0,	// (0x0005572c) cell_myfav_contact_pane_ParamLimits

0x67e0,	// (0x0005572c) cell_myfav_contact_pane

0x67fc,	// (0x00055748) cell_myfav_contact_pane_cp1_ParamLimits

0x67fc,	// (0x00055748) cell_myfav_contact_pane_cp1

0x6814,	// (0x00055760) cell_myfav_contact_pane_cp2_ParamLimits

0x6814,	// (0x00055760) cell_myfav_contact_pane_cp2

0x682c,	// (0x00055778) cell_myfav_contact_pane_cp3_ParamLimits

0x682c,	// (0x00055778) cell_myfav_contact_pane_cp3

0x6843,	// (0x0005578f) cell_myfav_contact_pane_cp4_ParamLimits

0x6843,	// (0x0005578f) cell_myfav_contact_pane_cp4

0x685b,	// (0x000557a7) cell_myfav_contact_pane_cp5_ParamLimits

0x685b,	// (0x000557a7) cell_myfav_contact_pane_cp5

0x686f,	// (0x000557bb) cell_myfav_contact_pane_cp6_ParamLimits

0x686f,	// (0x000557bb) cell_myfav_contact_pane_cp6

0x6885,	// (0x000557d1) cell_myfav_contact_pane_cp7_ParamLimits

0x6885,	// (0x000557d1) cell_myfav_contact_pane_cp7

0xd80b,	// (0x0005c757) listscroll_gen_pane_cp05

0x689d,	// (0x000557e9) main_myfav_hc_pane_g1_ParamLimits

0x689d,	// (0x000557e9) main_myfav_hc_pane_g1

0x68b7,	// (0x00055803) main_myfav_hc_pane_g2_ParamLimits

0x68b7,	// (0x00055803) main_myfav_hc_pane_g2

0x0002,

0xf93d,	// (0x0005e889) main_myfav_hc_pane_g_ParamLimits

0xf93d,	// (0x0005e889) main_myfav_hc_pane_g

0x68eb,	// (0x00055837) main_myfav_hc_pane_t1_ParamLimits

0x68eb,	// (0x00055837) main_myfav_hc_pane_t1

0xd814,	// (0x0005c760) main_myfav_hc_pane_t2_ParamLimits

0xd814,	// (0x0005c760) main_myfav_hc_pane_t2

0xd826,	// (0x0005c772) main_myfav_hc_pane_t3_ParamLimits

0xd826,	// (0x0005c772) main_myfav_hc_pane_t3

0x6902,	// (0x0005584e) main_myfav_hc_pane_t4_ParamLimits

0x6902,	// (0x0005584e) main_myfav_hc_pane_t4

0x0004,

0xf944,	// (0x0005e890) main_myfav_hc_pane_t_ParamLimits

0xf944,	// (0x0005e890) main_myfav_hc_pane_t

0xcd9f,	// (0x0005bceb) bg_myfav_hc_instruction_pane_g1

0xd838,	// (0x0005c784) cell_myfav_contact_pane_g1_ParamLimits

0xd838,	// (0x0005c784) cell_myfav_contact_pane_g1

0xd838,	// (0x0005c784) cell_myfav_contact_pane_g2_ParamLimits

0xd838,	// (0x0005c784) cell_myfav_contact_pane_g2

0xd844,	// (0x0005c790) cell_myfav_contact_pane_g3_ParamLimits

0xd844,	// (0x0005c790) cell_myfav_contact_pane_g3

0xd02b,	// (0x0005bf77) cell_myfav_contact_pane_g4_ParamLimits

0xd02b,	// (0x0005bf77) cell_myfav_contact_pane_g4

0xd851,	// (0x0005c79d) cell_myfav_contact_pane_g5_ParamLimits

0xd851,	// (0x0005c79d) cell_myfav_contact_pane_g5

0x0004,

0xf94f,	// (0x0005e89b) cell_myfav_contact_pane_g_ParamLimits

0xf94f,	// (0x0005e89b) cell_myfav_contact_pane_g

0x68d1,	// (0x0005581d) main_myfav_hc_pane_g3_ParamLimits

0x68d1,	// (0x0005581d) main_myfav_hc_pane_g3

0x0c18,	// (0x0004fb64) popup_adpt_find_window

0x692c,	// (0x00055878) afind_page_pane_ParamLimits

0x692c,	// (0x00055878) afind_page_pane

0x6941,	// (0x0005588d) aid_size_cell_afind_ParamLimits

0x6941,	// (0x0005588d) aid_size_cell_afind

0x695f,	// (0x000558ab) bg_popup_sub_pane_cp09_ParamLimits

0x695f,	// (0x000558ab) bg_popup_sub_pane_cp09

0x696c,	// (0x000558b8) find_pane_cp01_ParamLimits

0x696c,	// (0x000558b8) find_pane_cp01

0xd85d,	// (0x0005c7a9) grid_afind_control_pane_ParamLimits

0xd85d,	// (0x0005c7a9) grid_afind_control_pane

0x6979,	// (0x000558c5) grid_afind_pane_ParamLimits

0x6979,	// (0x000558c5) grid_afind_pane

0x699b,	// (0x000558e7) cell_afind_pane_ParamLimits

0x699b,	// (0x000558e7) cell_afind_pane

0xcd9f,	// (0x0005bceb) afind_page_pane_g1

0x6a08,	// (0x00055954) afind_page_pane_g2

0x6a11,	// (0x0005595d) afind_page_pane_g3

0x0002,

0xf95a,	// (0x0005e8a6) afind_page_pane_g

0x6a1a,	// (0x00055966) afind_page_pane_t1

0xd871,	// (0x0005c7bd) cell_afind_grid_control_pane_ParamLimits

0xd871,	// (0x0005c7bd) cell_afind_grid_control_pane

0xd6f6,	// (0x0005c642) bg_button_pane_cp69_ParamLimits

0xd6f6,	// (0x0005c642) bg_button_pane_cp69

0x6a3a,	// (0x00055986) cell_afind_pane_g1_ParamLimits

0x6a3a,	// (0x00055986) cell_afind_pane_g1

0x6a47,	// (0x00055993) cell_afind_pane_t1_ParamLimits

0x6a47,	// (0x00055993) cell_afind_pane_t1

0xa467,	// (0x000593b3) bg_button_pane_cp72

0xd880,	// (0x0005c7cc) cell_afind_grid_control_pane_g1

0x3928,	// (0x00052874) aid_image_placing_area_ParamLimits

0x3928,	// (0x00052874) aid_image_placing_area

0xd364,	// (0x0005c2b0) field_vitu_entry_pane_g1_ParamLimits

0xd364,	// (0x0005c2b0) field_vitu_entry_pane_g1

0xd370,	// (0x0005c2bc) field_vitu_entry_pane_g2_ParamLimits

0xd370,	// (0x0005c2bc) field_vitu_entry_pane_g2

0x0001,

0xf807,	// (0x0005e753) field_vitu_entry_pane_g_ParamLimits

0xf807,	// (0x0005e753) field_vitu_entry_pane_g

0x5b3c,	// (0x00054a88) cell_vitu_itu_pane_g1_ParamLimits

0x5b7e,	// (0x00054aca) cell_vitu_itu_pane_t3_ParamLimits

0x5b7e,	// (0x00054aca) cell_vitu_itu_pane_t3

0xd64e,	// (0x0005c59a) mp4_progress_pane_t1_ParamLimits

0xd667,	// (0x0005c5b3) mp4_progress_pane_t2_ParamLimits

0xf8a0,	// (0x0005e7ec) mp4_progress_pane_t_ParamLimits

0xd680,	// (0x0005c5cc) mup_progress_pane_cp04_ParamLimits

0x6916,	// (0x00055862) main_myfav_hc_pane_t5_ParamLimits

0x6916,	// (0x00055862) main_myfav_hc_pane_t5

0x0aae,	// (0x0004f9fa) aid_zoom_text_primary

0x0c18,	// (0x0004fb64) popup_adpt_find_window_ParamLimits

0xae6b,	// (0x00059db7) main_cam_set_pane

0x635c,	// (0x000552a8) cam4_zoom_pane_ParamLimits

0x635c,	// (0x000552a8) cam4_zoom_pane

0x6a59,	// (0x000559a5) main_cam_set_pane_g1_ParamLimits

0x6a59,	// (0x000559a5) main_cam_set_pane_g1

0x6a67,	// (0x000559b3) main_cam_set_pane_g2_ParamLimits

0x6a67,	// (0x000559b3) main_cam_set_pane_g2

0x0001,

0xf961,	// (0x0005e8ad) main_cam_set_pane_g_ParamLimits

0xf961,	// (0x0005e8ad) main_cam_set_pane_g

0x6a88,	// (0x000559d4) main_cam_set_pane_t1_ParamLimits

0x6a88,	// (0x000559d4) main_cam_set_pane_t1

0x6aa3,	// (0x000559ef) main_cset_listscroll_pane_ParamLimits

0x6aa3,	// (0x000559ef) main_cset_listscroll_pane

0x6ac7,	// (0x00055a13) main_cset_slider_pane_ParamLimits

0x6ac7,	// (0x00055a13) main_cset_slider_pane

0xd891,	// (0x0005c7dd) main_cset_list_pane_ParamLimits

0xd891,	// (0x0005c7dd) main_cset_list_pane

0xd8a1,	// (0x0005c7ed) scroll_pane_cp028

0x6af1,	// (0x00055a3d) aid_area_touch_slider

0x6b0d,	// (0x00055a59) cset_slider_pane

0x6b37,	// (0x00055a83) main_cset_slider_pane_g1

0x6b4c,	// (0x00055a98) main_cset_slider_pane_g2

0x0011,

0xf966,	// (0x0005e8b2) main_cset_slider_pane_g

0xd8da,	// (0x0005c826) main_cset_slider_pane_t1

0x6c0e,	// (0x00055b5a) main_cset_slider_pane_t2

0x6c28,	// (0x00055b74) main_cset_slider_pane_t3

0x6c42,	// (0x00055b8e) main_cset_slider_pane_t4

0x6c5c,	// (0x00055ba8) main_cset_slider_pane_t5

0x6c7a,	// (0x00055bc6) main_cset_slider_pane_t6

0x6c91,	// (0x00055bdd) main_cset_slider_pane_t7

0x000e,

0xf98b,	// (0x0005e8d7) main_cset_slider_pane_t

0x6d9d,	// (0x00055ce9) cset_list_set_pane_ParamLimits

0x6d9d,	// (0x00055ce9) cset_list_set_pane

0x6db1,	// (0x00055cfd) aid_position_infowindow_above

0x6db9,	// (0x00055d05) aid_position_infowindow_below

0xfe90,	// (0x0004eddc) cset_list_set_pane_g1_ParamLimits

0xfe90,	// (0x0004eddc) cset_list_set_pane_g1

0xfe9c,	// (0x0004ede8) cset_list_set_pane_g3_ParamLimits

0xfe9c,	// (0x0004ede8) cset_list_set_pane_g3

0x0001,

0xf9aa,	// (0x0005e8f6) cset_list_set_pane_g_ParamLimits

0xf9aa,	// (0x0005e8f6) cset_list_set_pane_g

0xfeab,	// (0x0004edf7) cset_list_set_pane_t1_ParamLimits

0xfeab,	// (0x0004edf7) cset_list_set_pane_t1

0xae6b,	// (0x00059db7) list_highlight_pane_cp021_ParamLimits

0xae6b,	// (0x00059db7) list_highlight_pane_cp021

0xb682,	// (0x0005a5ce) cset_slider_pane_g1

0xb694,	// (0x0005a5e0) cset_slider_pane_g2

0xb68b,	// (0x0005a5d7) cset_slider_pane_g3

0x0002,

0xf9af,	// (0x0005e8fb) cset_slider_pane_g

0xd97a,	// (0x0005c8c6) aid_area_touch_cam4_zoom

0x6dc1,	// (0x00055d0d) cam4_zoom_cont_pane

0x6dc9,	// (0x00055d15) cam4_zoom_pane_g1

0x6dd1,	// (0x00055d1d) cam4_zoom_pane_g2

0x6dd9,	// (0x00055d25) cam4_zoom_pane_g3

0x0002,

0xf9b6,	// (0x0005e902) cam4_zoom_pane_g

0xad97,	// (0x00059ce3) cam4_zoom_cont_pane_g1

0xada0,	// (0x00059cec) cam4_zoom_cont_pane_g2

0xada9,	// (0x00059cf5) cam4_zoom_cont_pane_g3

0x0002,

0xf9bd,	// (0x0005e909) cam4_zoom_cont_pane_g

0x617e,	// (0x000550ca) call4_image_pane_ParamLimits

0x617e,	// (0x000550ca) call4_image_pane

0x61e9,	// (0x00055135) call4_windows_conf_pane_ParamLimits

0x6234,	// (0x00055180) popup_call4_audio_in_window_ParamLimits

0x6234,	// (0x00055180) popup_call4_audio_in_window

0x9a3c,	// (0x00058988) bg_popup_call2_act_pane_cp02

0xd702,	// (0x0005c64e) call4_list_conf_pane

0xcd9f,	// (0x0005bceb) call4_image_pane_g1

0xcd9f,	// (0x0005bceb) call4_image_pane_g2

0x0001,

0xf6c8,	// (0x0005e614) call4_image_pane_g

0xd983,	// (0x0005c8cf) list_single_graphic_popup_conf4_pane_ParamLimits

0xd983,	// (0x0005c8cf) list_single_graphic_popup_conf4_pane

0x9a3c,	// (0x00058988) list_highlight_pane_cp022

0xd998,	// (0x0005c8e4) list_single_graphic_popup_conf4_pane_g1

0xb27a,	// (0x0005a1c6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c4,	// (0x0005e910) list_single_graphic_popup_conf4_pane_g

0xd9a0,	// (0x0005c8ec) list_single_graphic_popup_conf4_pane_t1

0x1c81,	// (0x00050bcd) popup_vtel_slider_window_ParamLimits

0x1c81,	// (0x00050bcd) popup_vtel_slider_window

0xd6e4,	// (0x0005c630) dialer2_ne_pane_t2_ParamLimits

0xd6e4,	// (0x0005c630) dialer2_ne_pane_t2

0x0001,

0xf8a5,	// (0x0005e7f1) dialer2_ne_pane_t_ParamLimits

0xf8a5,	// (0x0005e7f1) dialer2_ne_pane_t

0xcb7e,	// (0x0005baca) bg_popup_sub_pane_cp010_ParamLimits

0xcb7e,	// (0x0005baca) bg_popup_sub_pane_cp010

0x6de2,	// (0x00055d2e) popup_vtel_slider_window_g1_ParamLimits

0x6de2,	// (0x00055d2e) popup_vtel_slider_window_g1

0x6df5,	// (0x00055d41) popup_vtel_slider_window_g2_ParamLimits

0x6df5,	// (0x00055d41) popup_vtel_slider_window_g2

0x0003,

0xf9c9,	// (0x0005e915) popup_vtel_slider_window_g_ParamLimits

0xf9c9,	// (0x0005e915) popup_vtel_slider_window_g

0x6e4b,	// (0x00055d97) vtel_slider_pane_ParamLimits

0x6e4b,	// (0x00055d97) vtel_slider_pane

0x6e6d,	// (0x00055db9) vtel_slider_pane_g1_ParamLimits

0x6e6d,	// (0x00055db9) vtel_slider_pane_g1

0x6e81,	// (0x00055dcd) vtel_slider_pane_g2_ParamLimits

0x6e81,	// (0x00055dcd) vtel_slider_pane_g2

0x6e99,	// (0x00055de5) vtel_slider_pane_g3_ParamLimits

0x6e99,	// (0x00055de5) vtel_slider_pane_g3

0x6e6d,	// (0x00055db9) vtel_slider_pane_g4_ParamLimits

0x6e6d,	// (0x00055db9) vtel_slider_pane_g4

0x6eaf,	// (0x00055dfb) vtel_slider_pane_g5_ParamLimits

0x6eaf,	// (0x00055dfb) vtel_slider_pane_g5

0x0004,

0xf9d2,	// (0x0005e91e) vtel_slider_pane_g_ParamLimits

0xf9d2,	// (0x0005e91e) vtel_slider_pane_g

0xae6b,	// (0x00059db7) main_gallery2_pane

0x6561,	// (0x000554ad) aid_size_row_itut2_dropdow_list_ParamLimits

0x6561,	// (0x000554ad) aid_size_row_itut2_dropdow_list

0x65f3,	// (0x0005553f) grid_vitu2_function_top_pane_ParamLimits

0x65f3,	// (0x0005553f) grid_vitu2_function_top_pane

0x6657,	// (0x000555a3) popup_vitu2_dropdown_list_window_ParamLimits

0x6657,	// (0x000555a3) popup_vitu2_dropdown_list_window

0x6680,	// (0x000555cc) popup_vitu2_match_list_window

0x6ec5,	// (0x00055e11) cell_vitu2_function_top_pane_ParamLimits

0x6ec5,	// (0x00055e11) cell_vitu2_function_top_pane

0x6ee7,	// (0x00055e33) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ee7,	// (0x00055e33) cell_vitu2_function_top_pane_cp01

0x6f03,	// (0x00055e4f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f03,	// (0x00055e4f) cell_vitu2_function_top_wide_pane

0xae6b,	// (0x00059db7) bg_button_pane_cp012

0x6f1f,	// (0x00055e6b) cell_vitu2_function_top_pane_g1

0xadb2,	// (0x00059cfe) bg_button_pane_cp013_ParamLimits

0xadb2,	// (0x00059cfe) bg_button_pane_cp013

0x6f33,	// (0x00055e7f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f33,	// (0x00055e7f) cell_vitu2_function_top_wide_pane_g1

0xae6b,	// (0x00059db7) bg_popup_sub_pane_cp20

0x6f4b,	// (0x00055e97) list_vitu2_match_list_pane

0xd783,	// (0x0005c6cf) bg_popup_sub_pane_cp20_g1

0xd78b,	// (0x0005c6d7) bg_popup_sub_pane_cp20_g2

0xa672,	// (0x000595be) bg_popup_sub_pane_cp20_g3

0xd793,	// (0x0005c6df) bg_popup_sub_pane_cp20_g4

0xa652,	// (0x0005959e) bg_popup_sub_pane_cp20_g5

0xd9b6,	// (0x0005c902) bg_popup_sub_pane_cp20_g6

0xd7a3,	// (0x0005c6ef) bg_popup_sub_pane_cp20_g7

0xd7ab,	// (0x0005c6f7) bg_popup_sub_pane_cp20_g8

0xd7b3,	// (0x0005c6ff) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9dd,	// (0x0005e929) bg_popup_sub_pane_cp20_g

0xadce,	// (0x00059d1a) list_vitu2_match_list_item_pane_ParamLimits

0xadce,	// (0x00059d1a) list_vitu2_match_list_item_pane

0xade0,	// (0x00059d2c) list_vitu2_match_list_item_pane_t1

0x9a3c,	// (0x00058988) bg_popup_sub_pane_cp21

0xb1a3,	// (0x0005a0ef) grid_vitu2_dropdown_list_pane

0x6f69,	// (0x00055eb5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f69,	// (0x00055eb5) cell_vitu2_dropdown_list_char_pane

0x6f8c,	// (0x00055ed8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f8c,	// (0x00055ed8) cell_vitu2_dropdown_list_ctrl_pane

0xd9be,	// (0x0005c90a) cell_vitu2_dropdown_list_char_pane_g1

0xd9c7,	// (0x0005c913) cell_vitu2_dropdown_list_char_pane_g2

0xd9d0,	// (0x0005c91c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9fa,	// (0x0005e946) cell_vitu2_dropdown_list_char_pane_g

0x6fba,	// (0x00055f06) cell_vitu2_dropdown_list_char_pane_t1

0x6fc8,	// (0x00055f14) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6fc8,	// (0x00055f14) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6fd8,	// (0x00055f24) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6fd8,	// (0x00055f24) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fe9,	// (0x00055f35) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fe9,	// (0x00055f35) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6ff9,	// (0x00055f45) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6ff9,	// (0x00055f45) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfc6,	// (0x0005bf12) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfc6,	// (0x0005bf12) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa01,	// (0x0005e94d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa01,	// (0x0005e94d) cell_vitu2_dropdown_list_ctrl_pane_g

0x7015,	// (0x00055f61) aid_size_cell_gallery2_ParamLimits

0x7015,	// (0x00055f61) aid_size_cell_gallery2

0x7033,	// (0x00055f7f) grid_gallery2_pane_ParamLimits

0x7033,	// (0x00055f7f) grid_gallery2_pane

0x704d,	// (0x00055f99) scroll_pane_cp029_ParamLimits

0x704d,	// (0x00055f99) scroll_pane_cp029

0x705e,	// (0x00055faa) cell_gallery2_pane_ParamLimits

0x705e,	// (0x00055faa) cell_gallery2_pane

0xd9d9,	// (0x0005c925) cell_gallery2_pane_g2

0x70c2,	// (0x0005600e) cell_gallery2_pane_g3

0xd9e1,	// (0x0005c92d) cell_gallery2_pane_g4

0xd9e9,	// (0x0005c935) cell_gallery2_pane_g5

0xa40b,	// (0x00059357) grid_highlight_pane_cp10

0x6680,	// (0x000555cc) popup_vitu2_match_list_window_ParamLimits

0x6697,	// (0x000555e3) popup_vitu2_query_window_ParamLimits

0x6697,	// (0x000555e3) popup_vitu2_query_window

0x9a3c,	// (0x00058988) bg_vitu2_candi_button_pane

0xd9be,	// (0x0005c90a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9c7,	// (0x0005c913) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd9d0,	// (0x0005c91c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff1a,	// (0x0004ee66) bg_button_pane_cp015

0x70ca,	// (0x00056016) bg_button_pane_cp016

0x70dd,	// (0x00056029) bg_button_pane_cp017

0xc967,	// (0x0005b8b3) bg_popup_sub_pane_cp22

0xd9f1,	// (0x0005c93d) popup_vitu2_query_window_g1

0xff4f,	// (0x0004ee9b) popup_vitu2_query_window_g2

0x0002,

0xfa0c,	// (0x0005e958) popup_vitu2_query_window_g

0xff6e,	// (0x0004eeba) popup_vitu2_query_window_t1_ParamLimits

0xff6e,	// (0x0004eeba) popup_vitu2_query_window_t1

0xffa3,	// (0x0004eeef) popup_vitu2_query_window_t2_ParamLimits

0xffa3,	// (0x0004eeef) popup_vitu2_query_window_t2

0xffb5,	// (0x0004ef01) popup_vitu2_query_window_t3_ParamLimits

0xffb5,	// (0x0004ef01) popup_vitu2_query_window_t3

0x7101,	// (0x0005604d) popup_vitu2_query_window_t4_ParamLimits

0x7101,	// (0x0005604d) popup_vitu2_query_window_t4

0x7122,	// (0x0005606e) popup_vitu2_query_window_t5_ParamLimits

0x7122,	// (0x0005606e) popup_vitu2_query_window_t5

0x0006,

0xfa13,	// (0x0005e95f) popup_vitu2_query_window_t_ParamLimits

0xfa13,	// (0x0005e95f) popup_vitu2_query_window_t

0xd889,	// (0x0005c7d5) main_cset_text_pane

0x6af1,	// (0x00055a3d) aid_area_touch_slider_ParamLimits

0x6b0d,	// (0x00055a59) cset_slider_pane_ParamLimits

0x6b37,	// (0x00055a83) main_cset_slider_pane_g1_ParamLimits

0x6b4c,	// (0x00055a98) main_cset_slider_pane_g2_ParamLimits

0xd8aa,	// (0x0005c7f6) main_cset_slider_pane_g3_ParamLimits

0xd8aa,	// (0x0005c7f6) main_cset_slider_pane_g3

0x6b61,	// (0x00055aad) main_cset_slider_pane_g4_ParamLimits

0x6b61,	// (0x00055aad) main_cset_slider_pane_g4

0x6b70,	// (0x00055abc) main_cset_slider_pane_g5_ParamLimits

0x6b70,	// (0x00055abc) main_cset_slider_pane_g5

0x6b7e,	// (0x00055aca) main_cset_slider_pane_g6_ParamLimits

0x6b7e,	// (0x00055aca) main_cset_slider_pane_g6

0xf966,	// (0x0005e8b2) main_cset_slider_pane_g_ParamLimits

0xd8da,	// (0x0005c826) main_cset_slider_pane_t1_ParamLimits

0x6c0e,	// (0x00055b5a) main_cset_slider_pane_t2_ParamLimits

0x6c28,	// (0x00055b74) main_cset_slider_pane_t3_ParamLimits

0x6c42,	// (0x00055b8e) main_cset_slider_pane_t4_ParamLimits

0x6c5c,	// (0x00055ba8) main_cset_slider_pane_t5_ParamLimits

0x6c7a,	// (0x00055bc6) main_cset_slider_pane_t6_ParamLimits

0x6c91,	// (0x00055bdd) main_cset_slider_pane_t7_ParamLimits

0x6cbf,	// (0x00055c0b) main_cset_slider_pane_t8_ParamLimits

0x6cbf,	// (0x00055c0b) main_cset_slider_pane_t8

0x6ce7,	// (0x00055c33) main_cset_slider_pane_t9_ParamLimits

0x6ce7,	// (0x00055c33) main_cset_slider_pane_t9

0x6d0f,	// (0x00055c5b) main_cset_slider_pane_t10_ParamLimits

0x6d0f,	// (0x00055c5b) main_cset_slider_pane_t10

0x6d37,	// (0x00055c83) main_cset_slider_pane_t11_ParamLimits

0x6d37,	// (0x00055c83) main_cset_slider_pane_t11

0x6d61,	// (0x00055cad) main_cset_slider_pane_t12_ParamLimits

0x6d61,	// (0x00055cad) main_cset_slider_pane_t12

0x6d7e,	// (0x00055cca) main_cset_slider_pane_t13_ParamLimits

0x6d7e,	// (0x00055cca) main_cset_slider_pane_t13

0xf98b,	// (0x0005e8d7) main_cset_slider_pane_t_ParamLimits

0x9a3c,	// (0x00058988) bg_popup_sub_pane_cp011

0xd9fd,	// (0x0005c949) main_cset_text_pane_g1

0xda05,	// (0x0005c951) main_cset_text_pane_t1

0xda13,	// (0x0005c95f) main_cset_text_pane_t2

0xda21,	// (0x0005c96d) main_cset_text_pane_t3

0xda2f,	// (0x0005c97b) main_cset_text_pane_t4

0xda3d,	// (0x0005c989) main_cset_text_pane_t5

0xda4b,	// (0x0005c997) main_cset_text_pane_t6

0xda59,	// (0x0005c9a5) main_cset_text_pane_t7

0x0006,

0xfa22,	// (0x0005e96e) main_cset_text_pane_t

0x9a3c,	// (0x00058988) main_cam4_burst_pane

0x9a3c,	// (0x00058988) main_cam5_pane

0x6a28,	// (0x00055974) bg_button_pane_cp019

0x6a31,	// (0x0005597d) bg_button_pane_cp020

0xd8b6,	// (0x0005c802) main_cset_slider_pane_g7_ParamLimits

0xd8b6,	// (0x0005c802) main_cset_slider_pane_g7

0xd8c2,	// (0x0005c80e) main_cset_slider_pane_g8_ParamLimits

0xd8c2,	// (0x0005c80e) main_cset_slider_pane_g8

0x6b92,	// (0x00055ade) main_cset_slider_pane_g9_ParamLimits

0x6b92,	// (0x00055ade) main_cset_slider_pane_g9

0x6b9e,	// (0x00055aea) main_cset_slider_pane_g10_ParamLimits

0x6b9e,	// (0x00055aea) main_cset_slider_pane_g10

0x6baa,	// (0x00055af6) main_cset_slider_pane_g11_ParamLimits

0x6baa,	// (0x00055af6) main_cset_slider_pane_g11

0x6bb6,	// (0x00055b02) main_cset_slider_pane_g12_ParamLimits

0x6bb6,	// (0x00055b02) main_cset_slider_pane_g12

0x6bc2,	// (0x00055b0e) main_cset_slider_pane_g13_ParamLimits

0x6bc2,	// (0x00055b0e) main_cset_slider_pane_g13

0x6bce,	// (0x00055b1a) main_cset_slider_pane_g14_ParamLimits

0x6bce,	// (0x00055b1a) main_cset_slider_pane_g14

0x6bda,	// (0x00055b26) main_cset_slider_pane_g15_ParamLimits

0x6bda,	// (0x00055b26) main_cset_slider_pane_g15

0xd908,	// (0x0005c854) main_cset_slider_pane_t14_ParamLimits

0xd908,	// (0x0005c854) main_cset_slider_pane_t14

0xd941,	// (0x0005c88d) main_cset_slider_pane_t15_ParamLimits

0xd941,	// (0x0005c88d) main_cset_slider_pane_t15

0x7143,	// (0x0005608f) aid_cam4_burst_size_cell_ParamLimits

0x7143,	// (0x0005608f) aid_cam4_burst_size_cell

0x7163,	// (0x000560af) grid_cam4_burst_pane_ParamLimits

0x7163,	// (0x000560af) grid_cam4_burst_pane

0x719d,	// (0x000560e9) linegrid_cam4_burst_pane_ParamLimits

0x719d,	// (0x000560e9) linegrid_cam4_burst_pane

0xda67,	// (0x0005c9b3) scroll_pane_cp30_ParamLimits

0xda67,	// (0x0005c9b3) scroll_pane_cp30

0x71bf,	// (0x0005610b) cell_cam4_burst_pane_ParamLimits

0x71bf,	// (0x0005610b) cell_cam4_burst_pane

0xda73,	// (0x0005c9bf) linegrid_cam4_burst_pane_g1_ParamLimits

0xda73,	// (0x0005c9bf) linegrid_cam4_burst_pane_g1

0x7214,	// (0x00056160) linegrid_cam4_burst_pane_g2_ParamLimits

0x7214,	// (0x00056160) linegrid_cam4_burst_pane_g2

0xda80,	// (0x0005c9cc) linegrid_cam4_burst_pane_g3_ParamLimits

0xda80,	// (0x0005c9cc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa31,	// (0x0005e97d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0005e97d) linegrid_cam4_burst_pane_g

0x7225,	// (0x00056171) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7225,	// (0x00056171) linegrid_cam4_burst_pane_g3_copy1

0xda8d,	// (0x0005c9d9) linegrid_cam4_burst_pane_g4_ParamLimits

0xda8d,	// (0x0005c9d9) linegrid_cam4_burst_pane_g4

0x7243,	// (0x0005618f) linegrid_cam4_burst_pane_g5_ParamLimits

0x7243,	// (0x0005618f) linegrid_cam4_burst_pane_g5

0x7254,	// (0x000561a0) linegrid_cam4_burst_pane_g6_ParamLimits

0x7254,	// (0x000561a0) linegrid_cam4_burst_pane_g6

0xda9a,	// (0x0005c9e6) linegrid_cam4_burst_pane_g7_ParamLimits

0xda9a,	// (0x0005c9e6) linegrid_cam4_burst_pane_g7

0x726b,	// (0x000561b7) cell_cam4_burst_pane_g1

0xdab3,	// (0x0005c9ff) main_cam5_pane_t1_ParamLimits

0xdab3,	// (0x0005c9ff) main_cam5_pane_t1

0xdac5,	// (0x0005ca11) main_cam5_pane_t2_ParamLimits

0xdac5,	// (0x0005ca11) main_cam5_pane_t2

0xdad7,	// (0x0005ca23) main_cam5_pane_t3_ParamLimits

0xdad7,	// (0x0005ca23) main_cam5_pane_t3

0xdae9,	// (0x0005ca35) main_cam5_pane_t4_ParamLimits

0xdae9,	// (0x0005ca35) main_cam5_pane_t4

0xdb01,	// (0x0005ca4d) main_cam5_pane_t5_ParamLimits

0xdb01,	// (0x0005ca4d) main_cam5_pane_t5

0xdb15,	// (0x0005ca61) main_cam5_pane_t6_ParamLimits

0xdb15,	// (0x0005ca61) main_cam5_pane_t6

0xdb29,	// (0x0005ca75) main_cam5_pane_t7_ParamLimits

0xdb29,	// (0x0005ca75) main_cam5_pane_t7

0xdb3b,	// (0x0005ca87) main_cam5_pane_t8_ParamLimits

0xdb3b,	// (0x0005ca87) main_cam5_pane_t8

0xdb59,	// (0x0005caa5) main_cam5_pane_t9_ParamLimits

0xdb59,	// (0x0005caa5) main_cam5_pane_t9

0xdb6b,	// (0x0005cab7) main_cam5_pane_t10_ParamLimits

0xdb6b,	// (0x0005cab7) main_cam5_pane_t10

0xdb7d,	// (0x0005cac9) main_cam5_pane_t11_ParamLimits

0xdb7d,	// (0x0005cac9) main_cam5_pane_t11

0xdb91,	// (0x0005cadd) main_cam5_pane_t12_ParamLimits

0xdb91,	// (0x0005cadd) main_cam5_pane_t12

0xdba8,	// (0x0005caf4) main_cam5_pane_t13_ParamLimits

0xdba8,	// (0x0005caf4) main_cam5_pane_t13

0x000c,

0xfa3d,	// (0x0005e989) main_cam5_pane_t_ParamLimits

0xfa3d,	// (0x0005e989) main_cam5_pane_t

0x0c99,	// (0x0004fbe5) popup_scut_keymap_window_ParamLimits

0x0c99,	// (0x0004fbe5) popup_scut_keymap_window

0x727e,	// (0x000561ca) aid_size_cell_brow_shortcut

0xa40b,	// (0x00059357) bg_popup_window_pane_cp010

0x728a,	// (0x000561d6) grid_scut_pane

0x7296,	// (0x000561e2) cell_scut_pane_ParamLimits

0x7296,	// (0x000561e2) cell_scut_pane

0x72af,	// (0x000561fb) cell_scut_pane_g1

0xdbcb,	// (0x0005cb17) cell_scut_pane_t1

0xdbda,	// (0x0005cb26) cell_scut_pane_t2

0x72b8,	// (0x00056204) cell_scut_pane_t3

0x0002,

0xfa58,	// (0x0005e9a4) cell_scut_pane_t

0x5014,	// (0x00053f60) main_mup3_pane_g8_ParamLimits

0x5014,	// (0x00053f60) main_mup3_pane_g8

0x657d,	// (0x000554c9) area_vitu2_query_pane_ParamLimits

0x657d,	// (0x000554c9) area_vitu2_query_pane

0xff2e,	// (0x0004ee7a) input_focus_pane_cp08

0xdbe9,	// (0x0005cb35) area_vitu2_query_pane_g1

0x0033,	// (0x0004ef7f) area_vitu2_query_pane_g2

0x0001,

0xfa5f,	// (0x0005e9ab) area_vitu2_query_pane_g

0x72c6,	// (0x00056212) area_vitu2_query_pane_t1_ParamLimits

0x72c6,	// (0x00056212) area_vitu2_query_pane_t1

0x72da,	// (0x00056226) area_vitu2_query_pane_t2_ParamLimits

0x72da,	// (0x00056226) area_vitu2_query_pane_t2

0x0044,	// (0x0004ef90) area_vitu2_query_pane_t3_ParamLimits

0x0044,	// (0x0004ef90) area_vitu2_query_pane_t3

0x72ee,	// (0x0005623a) area_vitu2_query_pane_t4_ParamLimits

0x72ee,	// (0x0005623a) area_vitu2_query_pane_t4

0x7316,	// (0x00056262) area_vitu2_query_pane_t5_ParamLimits

0x7316,	// (0x00056262) area_vitu2_query_pane_t5

0x733e,	// (0x0005628a) area_vitu2_query_pane_t6_ParamLimits

0x733e,	// (0x0005628a) area_vitu2_query_pane_t6

0x0006,

0xfa64,	// (0x0005e9b0) area_vitu2_query_pane_t_ParamLimits

0xfa64,	// (0x0005e9b0) area_vitu2_query_pane_t

0x738a,	// (0x000562d6) bg_button_pane_cp018

0x7398,	// (0x000562e4) bg_button_pane_cp021

0x006c,	// (0x0004efb8) bg_button_pane_cp022

0x007d,	// (0x0004efc9) input_focus_pane_cp09

0xb389,	// (0x0005a2d5) aid_size_touch_mv_arrow_left

0xb3b4,	// (0x0005a300) aid_size_touch_mv_arrow_right

0x6bf2,	// (0x00055b3e) main_cset_slider_pane_g16_ParamLimits

0x6bf2,	// (0x00055b3e) main_cset_slider_pane_g16

0x6c00,	// (0x00055b4c) main_cset_slider_pane_g17_ParamLimits

0x6c00,	// (0x00055b4c) main_cset_slider_pane_g17

0x726b,	// (0x000561b7) cell_cam4_burst_pane_g1_ParamLimits

0x9a3c,	// (0x00058988) compa_mode_pane

0x6e05,	// (0x00055d51) popup_vtel_slider_window_g3_ParamLimits

0x6e05,	// (0x00055d51) popup_vtel_slider_window_g3

0x6e1c,	// (0x00055d68) popup_vtel_slider_window_g4_ParamLimits

0x6e1c,	// (0x00055d68) popup_vtel_slider_window_g4

0x6e33,	// (0x00055d7f) popup_vtel_slider_window_t1_ParamLimits

0x6e33,	// (0x00055d7f) popup_vtel_slider_window_t1

0x9a3c,	// (0x00058988) main_cl_pane

0xa8af,	// (0x000597fb) popup_imed_adjust2_window_ParamLimits

0xc967,	// (0x0005b8b3) bg_tb_trans_pane_cp05_ParamLimits

0xd28f,	// (0x0005c1db) popup_imed_adjust2_window_g1_ParamLimits

0xd29e,	// (0x0005c1ea) popup_imed_adjust2_window_g2_ParamLimits

0xd29e,	// (0x0005c1ea) popup_imed_adjust2_window_g2

0xd2aa,	// (0x0005c1f6) popup_imed_adjust2_window_g3_ParamLimits

0xd2aa,	// (0x0005c1f6) popup_imed_adjust2_window_g3

0x0002,

0xf7cb,	// (0x0005e717) popup_imed_adjust2_window_g_ParamLimits

0xf7cb,	// (0x0005e717) popup_imed_adjust2_window_g

0xd2b6,	// (0x0005c202) popup_imed_adjust2_window_t1_ParamLimits

0xd2ce,	// (0x0005c21a) slider_imed_adjust_pane_ParamLimits

0xd2e2,	// (0x0005c22e) slider_imed_adjust_pane_g1_ParamLimits

0xd2f2,	// (0x0005c23e) slider_imed_adjust_pane_g2_ParamLimits

0xd302,	// (0x0005c24e) slider_imed_adjust_pane_g3_ParamLimits

0xd313,	// (0x0005c25f) slider_imed_adjust_pane_g4_ParamLimits

0xf7d2,	// (0x0005e71e) slider_imed_adjust_pane_g_ParamLimits

0x62fc,	// (0x00055248) aid_touch_area_cam4_ParamLimits

0x62fc,	// (0x00055248) aid_touch_area_cam4

0xac96,	// (0x00059be2) battery_pane_cp01

0x63cf,	// (0x0005531b) main_camera4_pane_g6_ParamLimits

0x63cf,	// (0x0005531b) main_camera4_pane_g6

0x63f9,	// (0x00055345) main_camera4_pane_t2_ParamLimits

0x63f9,	// (0x00055345) main_camera4_pane_t2

0x0001,

0xf8d9,	// (0x0005e825) main_camera4_pane_t_ParamLimits

0xf8d9,	// (0x0005e825) main_camera4_pane_t

0x642e,	// (0x0005537a) aid_touch_area_vid4_ParamLimits

0x642e,	// (0x0005537a) aid_touch_area_vid4

0x6482,	// (0x000553ce) main_video4_pane_g5_ParamLimits

0x6482,	// (0x000553ce) main_video4_pane_g5

0x64a7,	// (0x000553f3) vid4_progress_pane_ParamLimits

0x64a7,	// (0x000553f3) vid4_progress_pane

0xd8ce,	// (0x0005c81a) main_cset_slider_pane_g18_ParamLimits

0xd8ce,	// (0x0005c81a) main_cset_slider_pane_g18

0xdaa7,	// (0x0005c9f3) cell_cam4_burst_pane_g2_ParamLimits

0xdaa7,	// (0x0005c9f3) cell_cam4_burst_pane_g2

0x0001,

0xfa38,	// (0x0005e984) cell_cam4_burst_pane_g_ParamLimits

0xfa38,	// (0x0005e984) cell_cam4_burst_pane_g

0xa1ee,	// (0x0005913a) bg_cl_pane_ParamLimits

0xa1ee,	// (0x0005913a) bg_cl_pane

0x73a4,	// (0x000562f0) cl_header_pane_ParamLimits

0x73a4,	// (0x000562f0) cl_header_pane

0x73b8,	// (0x00056304) cl_listscroll_pane_ParamLimits

0x73b8,	// (0x00056304) cl_listscroll_pane

0xdbf5,	// (0x0005cb41) bg_cl_pane_g1

0xdbfd,	// (0x0005cb49) bg_cl_pane_g2

0xdc05,	// (0x0005cb51) bg_cl_pane_g3

0xdc0d,	// (0x0005cb59) bg_cl_pane_g4

0xdc15,	// (0x0005cb61) bg_cl_pane_g5

0xdc1d,	// (0x0005cb69) bg_cl_pane_g6

0xdc25,	// (0x0005cb71) bg_cl_pane_g7

0xdc2d,	// (0x0005cb79) bg_cl_pane_g8

0xdc35,	// (0x0005cb81) bg_cl_pane_g9

0x0008,

0xfa73,	// (0x0005e9bf) bg_cl_pane_g

0x73c8,	// (0x00056314) aid_height_cl_leading_ParamLimits

0x73c8,	// (0x00056314) aid_height_cl_leading

0x73d4,	// (0x00056320) aid_height_cl_text_ParamLimits

0x73d4,	// (0x00056320) aid_height_cl_text

0xae6b,	// (0x00059db7) bg_cl_header_pane_ParamLimits

0xae6b,	// (0x00059db7) bg_cl_header_pane

0x73f3,	// (0x0005633f) cl_header_pane_g1_ParamLimits

0x73f3,	// (0x0005633f) cl_header_pane_g1

0x7409,	// (0x00056355) cl_header_pane_t1_ParamLimits

0x7409,	// (0x00056355) cl_header_pane_t1

0xdc3d,	// (0x0005cb89) cl_list_pane

0xd8a1,	// (0x0005c7ed) hc_scroll_pane_cp01

0xa652,	// (0x0005959e) bg_cl_header_pane_g1

0xd783,	// (0x0005c6cf) bg_cl_header_pane_g2

0xa672,	// (0x000595be) bg_cl_header_pane_g3

0xd793,	// (0x0005c6df) bg_cl_header_pane_g4

0xd78b,	// (0x0005c6d7) bg_cl_header_pane_g5

0xd9b6,	// (0x0005c902) bg_cl_header_pane_g6

0xd7ab,	// (0x0005c6f7) bg_cl_header_pane_g7

0xd7b3,	// (0x0005c6ff) bg_cl_header_pane_g8

0xd7a3,	// (0x0005c6ef) bg_cl_header_pane_g9

0x0008,

0xfa86,	// (0x0005e9d2) bg_cl_header_pane_g

0x7422,	// (0x0005636e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7422,	// (0x0005636e) hc_cl_list_double_graphic_heading_pane

0x7435,	// (0x00056381) hc_cl_list_single_graphic_pane_ParamLimits

0x7435,	// (0x00056381) hc_cl_list_single_graphic_pane

0x744d,	// (0x00056399) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x744d,	// (0x00056399) hc_cl_list_single_graphic_pane_g1

0x7459,	// (0x000563a5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7459,	// (0x000563a5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa99,	// (0x0005e9e5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa99,	// (0x0005e9e5) hc_cl_list_single_graphic_pane_g

0x746d,	// (0x000563b9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x746d,	// (0x000563b9) hc_cl_list_single_graphic_pane_t1

0x744d,	// (0x00056399) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x744d,	// (0x00056399) hc_cl_list_double_graphic_heading_pane_g1

0x7482,	// (0x000563ce) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7482,	// (0x000563ce) hc_cl_list_double_graphic_heading_pane_g2

0x7496,	// (0x000563e2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7496,	// (0x000563e2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9e,	// (0x0005e9ea) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9e,	// (0x0005e9ea) hc_cl_list_double_graphic_heading_pane_g

0x74aa,	// (0x000563f6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74aa,	// (0x000563f6) hc_cl_list_double_graphic_heading_pane_t1

0x74bf,	// (0x0005640b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74bf,	// (0x0005640b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa5,	// (0x0005e9f1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa5,	// (0x0005e9f1) hc_cl_list_double_graphic_heading_pane_t

0xadf6,	// (0x00059d42) vid4_progress_pane_g1

0xae06,	// (0x00059d52) vid4_progress_pane_g2

0x74d4,	// (0x00056420) vid4_progress_pane_g3

0xaccd,	// (0x00059c19) vid4_progress_pane_g4

0x0004,

0xfaaa,	// (0x0005e9f6) vid4_progress_pane_g

0x74e6,	// (0x00056432) vid4_progress_pane_t1

0xae16,	// (0x00059d62) vid4_progress_pane_t2

0x0002,

0xfab5,	// (0x0005ea01) vid4_progress_pane_t

0x74fe,	// (0x0005644a) wait_bar_pane_cp07

0xcb8c,	// (0x0005bad8) blid_firmament_pane_ParamLimits

0xcbcf,	// (0x0005bb1b) popup_blid_sat_info2_window_g1

0xcbf3,	// (0x0005bb3f) popup_blid_sat_info2_window_t3

0xcc01,	// (0x0005bb4d) popup_blid_sat_info2_window_t4

0xcc0f,	// (0x0005bb5b) popup_blid_sat_info2_window_t5

0xcc1d,	// (0x0005bb69) popup_blid_sat_info2_window_t6

0xcc2d,	// (0x0005bb79) popup_blid_sat_info2_window_t7

0xcc3b,	// (0x0005bb87) popup_blid_sat_info2_window_t8

0xcc49,	// (0x0005bb95) popup_blid_sat_info2_window_t9

0xcc57,	// (0x0005bba3) popup_blid_sat_info2_window_t10

0xcd1f,	// (0x0005bc6b) aid_firma_cardinal_ParamLimits

0xcd33,	// (0x0005bc7f) blid_firmament_pane_t1_ParamLimits

0xcd4a,	// (0x0005bc96) blid_firmament_pane_t2_ParamLimits

0xcd61,	// (0x0005bcad) blid_firmament_pane_t3_ParamLimits

0xcd78,	// (0x0005bcc4) blid_firmament_pane_t4_ParamLimits

0xf6bf,	// (0x0005e60b) blid_firmament_pane_t_ParamLimits

0xcd8f,	// (0x0005bcdb) blid_sat_info_pane_ParamLimits

0xae6b,	// (0x00059db7) main_cam_set_pane_ParamLimits

0x58ec,	// (0x00054838) aid_size_cell_colour_35_ParamLimits

0x590c,	// (0x00054858) aid_size_cell_colour_112_ParamLimits

0x592c,	// (0x00054878) aid_size_cell_effect_ParamLimits

0xc967,	// (0x0005b8b3) bg_tb_trans_pane_cp02_ParamLimits

0xafa8,	// (0x00059ef4) heading_imed_pane_ParamLimits

0x594c,	// (0x00054898) listscroll_imed_pane_ParamLimits

0xbf83,	// (0x0005aecf) popup_call2_audio_first_window_g5_ParamLimits

0xbf83,	// (0x0005aecf) popup_call2_audio_first_window_g5

0x5f09,	// (0x00054e55) aid_size_touch_image3_arrow_left_ParamLimits

0x5f09,	// (0x00054e55) aid_size_touch_image3_arrow_left

0x5f35,	// (0x00054e81) aid_size_touch_image3_arrow_right_ParamLimits

0x5f35,	// (0x00054e81) aid_size_touch_image3_arrow_right

0xae2b,	// (0x00059d77) vid4_progress_pane_t3

0x5c65,	// (0x00054bb1) main_hwr_training_symbol_option_pane_ParamLimits

0x5c65,	// (0x00054bb1) main_hwr_training_symbol_option_pane

0xd588,	// (0x0005c4d4) popup_hwr_training_preview_window_ParamLimits

0xd588,	// (0x0005c4d4) popup_hwr_training_preview_window

0x5c85,	// (0x00054bd1) hwr_training_navi_pane_g5_ParamLimits

0x5c85,	// (0x00054bd1) hwr_training_navi_pane_g5

0xd771,	// (0x0005c6bd) popup_char_count_window

0xae6b,	// (0x00059db7) bg_popup_sub_pane_cp20_ParamLimits

0x6f4b,	// (0x00055e97) list_vitu2_match_list_pane_ParamLimits

0x6f5a,	// (0x00055ea6) vitu2_page_scroll_pane_ParamLimits

0x6f5a,	// (0x00055ea6) vitu2_page_scroll_pane

0xdc4f,	// (0x0005cb9b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc4f,	// (0x0005cb9b) list_single_hwr_training_symbol_option_pane

0xdc62,	// (0x0005cbae) list_single_hwr_training_symbol_option_pane_g1

0xdc6a,	// (0x0005cbb6) list_single_hwr_training_symbol_option_pane_t1

0xdc78,	// (0x0005cbc4) bg_button_pane_cp023

0xdc81,	// (0x0005cbcd) bg_button_pane_cp024

0x7533,	// (0x0005647f) vitu2_page_scroll_pane_g1

0x753b,	// (0x00056487) vitu2_page_scroll_pane_g2

0x0001,

0xfabc,	// (0x0005ea08) vitu2_page_scroll_pane_g

0x7545,	// (0x00056491) vitu2_page_scroll_pane_t1

0xd693,	// (0x0005c5df) popup_char_count_window_g1

0xdcb4,	// (0x0005cc00) popup_char_count_window_g2

0xd69c,	// (0x0005c5e8) popup_char_count_window_g3

0x0002,

0xfac1,	// (0x0005ea0d) popup_char_count_window_g

0xdcbd,	// (0x0005cc09) popup_char_count_window_t1

0x9a3c,	// (0x00058988) main_vded2_pane

0xd27b,	// (0x0005c1c7) aid_size_cell_imed_line

0xd285,	// (0x0005c1d1) grid_imed_line_width_pane

0xad50,	// (0x00059c9c) vid4_indicators_pane_g4

0xdccb,	// (0x0005cc17) cell_imed_line_width_pane_ParamLimits

0xdccb,	// (0x0005cc17) cell_imed_line_width_pane

0xdce1,	// (0x0005cc2d) cell_imed_line_width_pane_g1

0xd6a5,	// (0x0005c5f1) cell_imed_line_width_pane_g2

0x0001,

0xfac8,	// (0x0005ea14) cell_imed_line_width_pane_g

0x7554,	// (0x000564a0) main_vded2_pane_g1_ParamLimits

0x7554,	// (0x000564a0) main_vded2_pane_g1

0x756f,	// (0x000564bb) main_vded2_pane_g2_ParamLimits

0x756f,	// (0x000564bb) main_vded2_pane_g2

0x0001,

0xfacd,	// (0x0005ea19) main_vded2_pane_g_ParamLimits

0xfacd,	// (0x0005ea19) main_vded2_pane_g

0x7581,	// (0x000564cd) vded2_slider_pane_ParamLimits

0x7581,	// (0x000564cd) vded2_slider_pane

0x7591,	// (0x000564dd) aid_size_touch_vded2_end

0x759b,	// (0x000564e7) aid_size_touch_vded2_playhead

0xdcea,	// (0x0005cc36) aid_size_touch_vded2_start

0xdcf2,	// (0x0005cc3e) vded2_slider_bg_pane

0xdcfb,	// (0x0005cc47) vded2_slider_pane_g1

0xdd04,	// (0x0005cc50) vded2_slider_pane_g2

0x75a5,	// (0x000564f1) vded2_slider_pane_g3

0x0002,

0xfad2,	// (0x0005ea1e) vded2_slider_pane_g

0xd6ad,	// (0x0005c5f9) vded2_slider_bg_pane_g1

0xd6b6,	// (0x0005c602) vded2_slider_bg_pane_g2

0xd6bf,	// (0x0005c60b) vded2_slider_bg_pane_g3

0x0002,

0xfad9,	// (0x0005ea25) vded2_slider_bg_pane_g

0x3562,	// (0x000524ae) aid_postcard_touch_down_pane_ParamLimits

0x3562,	// (0x000524ae) aid_postcard_touch_down_pane

0x357a,	// (0x000524c6) aid_postcard_touch_up_pane_ParamLimits

0x357a,	// (0x000524c6) aid_postcard_touch_up_pane

0x9a3c,	// (0x00058988) main_blid2_pane

0xa891,	// (0x000597dd) popup_blid2_search_window

0x9a3c,	// (0x00058988) blid2_gps_pane

0x9a3c,	// (0x00058988) blid2_navig_pane

0x9a3c,	// (0x00058988) blid2_search_pane

0x9a3c,	// (0x00058988) blid2_tripm_pane

0x75b0,	// (0x000564fc) blid2_search_pane_g1_ParamLimits

0x75b0,	// (0x000564fc) blid2_search_pane_g1

0x75c3,	// (0x0005650f) blid2_search_pane_t1_ParamLimits

0x75c3,	// (0x0005650f) blid2_search_pane_t1

0x75d5,	// (0x00056521) aid_size_cell_blid2_gps_ParamLimits

0x75d5,	// (0x00056521) aid_size_cell_blid2_gps

0x75ed,	// (0x00056539) blid2_gps_pane_g1_ParamLimits

0x75ed,	// (0x00056539) blid2_gps_pane_g1

0x7601,	// (0x0005654d) grid_blid2_satellite_pane_ParamLimits

0x7601,	// (0x0005654d) grid_blid2_satellite_pane

0x7619,	// (0x00056565) blid2_navig_pane_g1_ParamLimits

0x7619,	// (0x00056565) blid2_navig_pane_g1

0x7625,	// (0x00056571) blid2_navig_pane_t1_ParamLimits

0x7625,	// (0x00056571) blid2_navig_pane_t1

0x7640,	// (0x0005658c) blid2_navig_pane_t2_ParamLimits

0x7640,	// (0x0005658c) blid2_navig_pane_t2

0x0001,

0xfae0,	// (0x0005ea2c) blid2_navig_pane_t_ParamLimits

0xfae0,	// (0x0005ea2c) blid2_navig_pane_t

0x765b,	// (0x000565a7) blid2_navig_ring_pane_ParamLimits

0x765b,	// (0x000565a7) blid2_navig_ring_pane

0x7676,	// (0x000565c2) blid2_speed_pane_ParamLimits

0x7676,	// (0x000565c2) blid2_speed_pane

0x7682,	// (0x000565ce) blid2_tripm_pane_g1_ParamLimits

0x7682,	// (0x000565ce) blid2_tripm_pane_g1

0x769d,	// (0x000565e9) blid2_tripm_pane_g2_ParamLimits

0x769d,	// (0x000565e9) blid2_tripm_pane_g2

0x76b1,	// (0x000565fd) blid2_tripm_pane_g3_ParamLimits

0x76b1,	// (0x000565fd) blid2_tripm_pane_g3

0x76c5,	// (0x00056611) blid2_tripm_pane_g4_ParamLimits

0x76c5,	// (0x00056611) blid2_tripm_pane_g4

0x76d9,	// (0x00056625) blid2_tripm_pane_g5_ParamLimits

0x76d9,	// (0x00056625) blid2_tripm_pane_g5

0x0005,

0xfae5,	// (0x0005ea31) blid2_tripm_pane_g_ParamLimits

0xfae5,	// (0x0005ea31) blid2_tripm_pane_g

0x76ff,	// (0x0005664b) blid2_tripm_pane_t1_ParamLimits

0x76ff,	// (0x0005664b) blid2_tripm_pane_t1

0x7718,	// (0x00056664) blid2_tripm_pane_t2_ParamLimits

0x7718,	// (0x00056664) blid2_tripm_pane_t2

0x7731,	// (0x0005667d) blid2_tripm_pane_t3_ParamLimits

0x7731,	// (0x0005667d) blid2_tripm_pane_t3

0x0003,

0xfaf2,	// (0x0005ea3e) blid2_tripm_pane_t_ParamLimits

0xfaf2,	// (0x0005ea3e) blid2_tripm_pane_t

0x7778,	// (0x000566c4) cell_blid2_satellite_pane_ParamLimits

0x7778,	// (0x000566c4) cell_blid2_satellite_pane

0x7794,	// (0x000566e0) cell_blid2_satellite_pane_g1

0xdd0c,	// (0x0005cc58) cell_blid2_satellite_pane_t1

0xcd9f,	// (0x0005bceb) blid2_speed_pane_g1

0xdd1a,	// (0x0005cc66) blid2_speed_pane_t1

0xdd28,	// (0x0005cc74) blid2_speed_pane_t2

0x0001,

0xfafb,	// (0x0005ea47) blid2_speed_pane_t

0xcd9f,	// (0x0005bceb) blid2_navig_ring_pane_g1

0x779d,	// (0x000566e9) blid2_navig_ring_pane_g2

0x77a5,	// (0x000566f1) blid2_navig_ring_pane_g3

0x77ad,	// (0x000566f9) blid2_navig_ring_pane_g4

0x77b5,	// (0x00056701) blid2_navig_ring_pane_g5

0x0004,

0xfb00,	// (0x0005ea4c) blid2_navig_ring_pane_g

0x9a3c,	// (0x00058988) bg_popup_window_pane_cp011

0xdd36,	// (0x0005cc82) popup_blid2_search_window_g1

0xdd3e,	// (0x0005cc8a) popup_blid2_search_window_t1

0xdd4c,	// (0x0005cc98) popup_blid2_search_window_t2

0x0001,

0xfb0b,	// (0x0005ea57) popup_blid2_search_window_t

0xa561,	// (0x000594ad) main_browser_pane_g1

0xa1ee,	// (0x0005913a) main_browser_pane_ParamLimits

0xae6b,	// (0x00059db7) bg_button_pane_cp011_ParamLimits

0x67b4,	// (0x00055700) cell_vitu2_function_pane_g1_ParamLimits

0xc967,	// (0x0005b8b3) bg_popup_sub_pane_cp22_ParamLimits

0xff2e,	// (0x0004ee7a) input_focus_pane_cp08_ParamLimits

0x70f0,	// (0x0005603c) popup_vitu2_query_button_pane_ParamLimits

0x70f0,	// (0x0005603c) popup_vitu2_query_button_pane

0xff45,	// (0x0004ee91) popup_vitu2_query_input_button_pane

0xd9f1,	// (0x0005c93d) popup_vitu2_query_window_g1_ParamLimits

0xff4f,	// (0x0004ee9b) popup_vitu2_query_window_g2_ParamLimits

0xfa0c,	// (0x0005e958) popup_vitu2_query_window_g_ParamLimits

0x9a3c,	// (0x00058988) bg_button_pane_cp026

0x77bd,	// (0x00056709) popup_vitu2_query_input_button_pane_g1

0x9a3c,	// (0x00058988) bg_button_pane_cp025

0xdd5a,	// (0x0005cca6) popup_vitu2_query_button_pane_t1

0x4c60,	// (0x00053bac) main_mp3_pane_t6

0x4c6e,	// (0x00053bba) popup_slider_window_cp01

0xacb4,	// (0x00059c00) cam4_battery_pane

0xad09,	// (0x00059c55) cam4_battery_pane_cp02

0xadee,	// (0x00059d3a) cam4_battery_pane_cp01

0xadee,	// (0x00059d3a) cam4_battery_pane_cp03

0xcd9f,	// (0x0005bceb) cam4_battery_pane_g1

0xdd68,	// (0x0005ccb4) cam4_battery_pane_g2

0x0001,

0xfb10,	// (0x0005ea5c) cam4_battery_pane_g

0xcc65,	// (0x0005bbb1) popup_blid_sat_info2_window_t11

0xb389,	// (0x0005a2d5) aid_size_touch_mv_arrow_left_ParamLimits

0xb3b4,	// (0x0005a300) aid_size_touch_mv_arrow_right_ParamLimits

0xb412,	// (0x0005a35e) navi_pane_g1_ParamLimits

0xb41e,	// (0x0005a36a) navi_pane_g2_ParamLimits

0xb44c,	// (0x0005a398) navi_pane_g3_ParamLimits

0xf3d1,	// (0x0005e31d) navi_pane_g_ParamLimits

0x2ffa,	// (0x00051f46) navi_pane_mv_t1_ParamLimits

0x5958,	// (0x000548a4) grid_imed_effect_pane_ParamLimits

0x1b89,	// (0x00050ad5) aid_placing_vt_slider_lsc

0xa4ac,	// (0x000593f8) aid_placing_vt_slider_prt

0xae6b,	// (0x00059db7) bg_tb_trans_pane_cp01_ParamLimits

0xcee6,	// (0x0005be32) popup_image_details_window_g1_ParamLimits

0xcef9,	// (0x0005be45) popup_image_details_window_g2_ParamLimits

0xcf0e,	// (0x0005be5a) popup_image_details_window_g3_ParamLimits

0xcf0e,	// (0x0005be5a) popup_image_details_window_g3

0xf704,	// (0x0005e650) popup_image_details_window_g_ParamLimits

0xcf22,	// (0x0005be6e) popup_image_details_window_t1_ParamLimits

0xcf34,	// (0x0005be80) popup_image_details_window_t2_ParamLimits

0xcf4d,	// (0x0005be99) popup_image_details_window_t3_ParamLimits

0xcf61,	// (0x0005bead) popup_image_details_window_t4_ParamLimits

0xcf7c,	// (0x0005bec8) popup_image_details_window_t5_ParamLimits

0xf70b,	// (0x0005e657) popup_image_details_window_t_ParamLimits

0x73e0,	// (0x0005632c) cl_header_name_pane_ParamLimits

0x73e0,	// (0x0005632c) cl_header_name_pane

0x77c5,	// (0x00056711) cl_header_name_pane_t1_ParamLimits

0x77c5,	// (0x00056711) cl_header_name_pane_t1

0x77e6,	// (0x00056732) cl_header_name_pane_t2_ParamLimits

0x77e6,	// (0x00056732) cl_header_name_pane_t2

0x7828,	// (0x00056774) cl_header_name_pane_t3_ParamLimits

0x7828,	// (0x00056774) cl_header_name_pane_t3

0x0002,

0xfb15,	// (0x0005ea61) cl_header_name_pane_t_ParamLimits

0xfb15,	// (0x0005ea61) cl_header_name_pane_t

0xb4db,	// (0x0005a427) navi_pane_mv_g2_ParamLimits

0xd74b,	// (0x0005c697) field_vitu2_entry_pane_g1_ParamLimits

0xd757,	// (0x0005c6a3) field_vitu2_entry_pane_g2_ParamLimits

0xd763,	// (0x0005c6af) field_vitu2_entry_pane_g3_ParamLimits

0xd763,	// (0x0005c6af) field_vitu2_entry_pane_g3

0xf90b,	// (0x0005e857) field_vitu2_entry_pane_g_ParamLimits

0xad85,	// (0x00059cd1) cell_vitu2_itu_pane_g1_ParamLimits

0x6748,	// (0x00055694) cell_vitu2_itu_pane_g2_ParamLimits

0x6748,	// (0x00055694) cell_vitu2_itu_pane_g2

0x0001,

0xf917,	// (0x0005e863) cell_vitu2_itu_pane_g_ParamLimits

0xf917,	// (0x0005e863) cell_vitu2_itu_pane_g

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp05_ParamLimits

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp05

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp03

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp04

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp10_ParamLimits

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp10

0x006c,	// (0x0004efb8) bg_vkb2_func_pane_cp08

0x738a,	// (0x000562d6) bg_vkb2_func_pane_cp06

0x7398,	// (0x000562e4) bg_vkb2_func_pane_cp07

0xdc8a,	// (0x0005cbd6) bg_vkb2_func_pane_cp11_ParamLimits

0xdc8a,	// (0x0005cbd6) bg_vkb2_func_pane_cp11

0xdc9f,	// (0x0005cbeb) bg_vkb2_func_pane_cp12_ParamLimits

0xdc9f,	// (0x0005cbeb) bg_vkb2_func_pane_cp12

0x9a3c,	// (0x00058988) bg_vkb2_func_pane_cp09

0xd783,	// (0x0005c6cf) bg_vkb2_func_pane_g1

0xa672,	// (0x000595be) bg_vkb2_func_pane_g2

0xd78b,	// (0x0005c6d7) bg_vkb2_func_pane_g3

0xd793,	// (0x0005c6df) bg_vkb2_func_pane_g4

0xd9b6,	// (0x0005c902) bg_vkb2_func_pane_g5

0xd7ab,	// (0x0005c6f7) bg_vkb2_func_pane_g6

0xd7b3,	// (0x0005c6ff) bg_vkb2_func_pane_g7

0xd7a3,	// (0x0005c6ef) bg_vkb2_func_pane_g8

0xa652,	// (0x0005959e) bg_vkb2_func_pane_g9

0x0008,

0xfb1c,	// (0x0005ea68) bg_vkb2_func_pane_g

0x76ed,	// (0x00056639) blid2_tripm_pane_g6_ParamLimits

0x76ed,	// (0x00056639) blid2_tripm_pane_g6

0xd646,	// (0x0005c592) mp4_progress_pane_g1

0x7764,	// (0x000566b0) blid2_tripm_values_pane_ParamLimits

0x7764,	// (0x000566b0) blid2_tripm_values_pane

0x7859,	// (0x000567a5) blid2_tripm_values_pane_t1

0x7867,	// (0x000567b3) blid2_tripm_values_pane_t2

0x7875,	// (0x000567c1) blid2_tripm_values_pane_t3

0x7883,	// (0x000567cf) blid2_tripm_values_pane_t4

0x7891,	// (0x000567dd) blid2_tripm_values_pane_t5

0x789f,	// (0x000567eb) blid2_tripm_values_pane_t6

0x78ad,	// (0x000567f9) blid2_tripm_values_pane_t7

0x78bb,	// (0x00056807) blid2_tripm_values_pane_t8

0x78c9,	// (0x00056815) blid2_tripm_values_pane_t9

0x0008,

0xfb2f,	// (0x0005ea7b) blid2_tripm_values_pane_t

0x1bc6,	// (0x00050b12) call_video_pane_t1_ParamLimits

0x1be0,	// (0x00050b2c) call_video_pane_t2_ParamLimits

0xf253,	// (0x0005e19f) call_video_pane_t_ParamLimits

0xfc86,	// (0x0004ebd2) msg_header_pane_g1_ParamLimits

0xb6c7,	// (0x0005a613) msg_header_pane_g2_ParamLimits

0xb6c7,	// (0x0005a613) msg_header_pane_g2

0x0001,

0xf474,	// (0x0005e3c0) msg_header_pane_g_ParamLimits

0xf474,	// (0x0005e3c0) msg_header_pane_g

0xa1ee,	// (0x0005913a) main_clock2_pane_ParamLimits

0x5655,	// (0x000545a1) grid_clock2_toolbar_pane_ParamLimits

0x5655,	// (0x000545a1) grid_clock2_toolbar_pane

0x5655,	// (0x000545a1) listscroll_clock2_pane_ParamLimits

0x5655,	// (0x000545a1) listscroll_clock2_pane

0x5734,	// (0x00054680) main_clock2_pane_t3_ParamLimits

0x5734,	// (0x00054680) main_clock2_pane_t3

0x5757,	// (0x000546a3) main_clock2_pane_t4_ParamLimits

0x5757,	// (0x000546a3) main_clock2_pane_t4

0xdd72,	// (0x0005ccbe) cell_clock2_toolbar_pane

0xdd7a,	// (0x0005ccc6) cell_clock2_toolbar_pane_cp01

0xdd7a,	// (0x0005ccc6) cell_clock2_toolbar_pane_cp02

0xdd82,	// (0x0005ccce) cell_clock2_toolbar_pane_cp03

0xdd8a,	// (0x0005ccd6) list_clock2_pane

0xb30e,	// (0x0005a25a) scroll_pane_cp10

0xdd92,	// (0x0005ccde) list_single_clock2_pane_ParamLimits

0xdd92,	// (0x0005ccde) list_single_clock2_pane

0xa40b,	// (0x00059357) list_highlight_pane_cp08

0xdd9f,	// (0x0005cceb) list_single_clock2_pane_t1

0xddad,	// (0x0005ccf9) list_single_clock2_pane_t2

0x0001,

0xfb42,	// (0x0005ea8e) list_single_clock2_pane_t

0x9a3c,	// (0x00058988) bg_button_pane_cp10

0xddbb,	// (0x0005cd07) cell_clock2_toolbar_pane_g1

0x34ee,	// (0x0005243a) aid_main_viewer_pane_g1_ParamLimits

0x34ee,	// (0x0005243a) aid_main_viewer_pane_g1

0x34fc,	// (0x00052448) aid_main_viewer_pane_g2_ParamLimits

0x34fc,	// (0x00052448) aid_main_viewer_pane_g2

0x350a,	// (0x00052456) aid_main_viewer_pane_g3_ParamLimits

0x350a,	// (0x00052456) aid_main_viewer_pane_g3

0x3519,	// (0x00052465) aid_main_viewer_pane_g4_ParamLimits

0x3519,	// (0x00052465) aid_main_viewer_pane_g4

0x0003,

0xf485,	// (0x0005e3d1) aid_main_viewer_pane_g_ParamLimits

0xf485,	// (0x0005e3d1) aid_main_viewer_pane_g

0x3e74,	// (0x00052dc0) main_calc_pane_ParamLimits

0x3e88,	// (0x00052dd4) main_dialer2_pane_ParamLimits

0x9a3c,	// (0x00058988) main_cam6_pane

0x9a3c,	// (0x00058988) main_vid6_pane

0x5661,	// (0x000545ad) listscroll_gen_pane_cp06_ParamLimits

0x5661,	// (0x000545ad) listscroll_gen_pane_cp06

0x577a,	// (0x000546c6) main_clock2_pane_t5_ParamLimits

0x577a,	// (0x000546c6) main_clock2_pane_t5

0x57d8,	// (0x00054724) aid_call2_pane_cp10_ParamLimits

0x57ea,	// (0x00054736) aid_call_pane_cp10_ParamLimits

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57fc,	// (0x00054748) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57fc,	// (0x00054748) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb37d,	// (0x0005a2c9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c0,	// (0x0005e70c) popup_clock_analogue_window_cp10_g_ParamLimits

0x5812,	// (0x0005475e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5eb6,	// (0x00054e02) cell_dialer2_keypad_pane_g2_ParamLimits

0x5eb6,	// (0x00054e02) cell_dialer2_keypad_pane_g2

0x0001,

0xf8aa,	// (0x0005e7f6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8aa,	// (0x0005e7f6) cell_dialer2_keypad_pane_g

0x5ed2,	// (0x00054e1e) cell_dialer2_keypad_pane_t1

0x6ae3,	// (0x00055a2f) main_cset_text2_pane_ParamLimits

0x6ae3,	// (0x00055a2f) main_cset_text2_pane

0xdbe9,	// (0x0005cb35) area_vitu2_query_pane_g1_ParamLimits

0x0033,	// (0x0004ef7f) area_vitu2_query_pane_g2_ParamLimits

0xfa5f,	// (0x0005e9ab) area_vitu2_query_pane_g_ParamLimits

0x7366,	// (0x000562b2) area_vitu2_query_pane_t7_ParamLimits

0x7366,	// (0x000562b2) area_vitu2_query_pane_t7

0x738a,	// (0x000562d6) bg_button_pane_cp018_ParamLimits

0x7398,	// (0x000562e4) bg_button_pane_cp021_ParamLimits

0x006c,	// (0x0004efb8) bg_button_pane_cp022_ParamLimits

0x006c,	// (0x0004efb8) bg_vkb2_func_pane_cp08_ParamLimits

0x738a,	// (0x000562d6) bg_vkb2_func_pane_cp06_ParamLimits

0x7398,	// (0x000562e4) bg_vkb2_func_pane_cp07_ParamLimits

0x007d,	// (0x0004efc9) input_focus_pane_cp09_ParamLimits

0xae40,	// (0x00059d8c) cam6_autofocus_pane_ParamLimits

0xae40,	// (0x00059d8c) cam6_autofocus_pane

0x78d7,	// (0x00056823) cam6_image_uncrop_pane_ParamLimits

0x78d7,	// (0x00056823) cam6_image_uncrop_pane

0x78e6,	// (0x00056832) cam6_indi_pane_ParamLimits

0x78e6,	// (0x00056832) cam6_indi_pane

0x78fc,	// (0x00056848) cam6_mode_pane_ParamLimits

0x78fc,	// (0x00056848) cam6_mode_pane

0x790e,	// (0x0005685a) cam6_timer_pane_ParamLimits

0x790e,	// (0x0005685a) cam6_timer_pane

0x791a,	// (0x00056866) cam6_zoom_pane_ParamLimits

0x791a,	// (0x00056866) cam6_zoom_pane

0x7928,	// (0x00056874) cam6_mode_pane_g1_ParamLimits

0x7928,	// (0x00056874) cam6_mode_pane_g1

0x7938,	// (0x00056884) cam6_mode_pane_g2_ParamLimits

0x7938,	// (0x00056884) cam6_mode_pane_g2

0x7948,	// (0x00056894) cam6_mode_pane_g3_ParamLimits

0x7948,	// (0x00056894) cam6_mode_pane_g3

0x7958,	// (0x000568a4) cam6_mode_pane_g4_ParamLimits

0x7958,	// (0x000568a4) cam6_mode_pane_g4

0x0003,

0xfb47,	// (0x0005ea93) cam6_mode_pane_g_ParamLimits

0xfb47,	// (0x0005ea93) cam6_mode_pane_g

0xd6c8,	// (0x0005c614) bg_tb_trans_pane_cp08_ParamLimits

0xd6c8,	// (0x0005c614) bg_tb_trans_pane_cp08

0xddc3,	// (0x0005cd0f) cam6_battery_pane_ParamLimits

0xddc3,	// (0x0005cd0f) cam6_battery_pane

0xddd9,	// (0x0005cd25) cam6_indi_pane_g1_ParamLimits

0xddd9,	// (0x0005cd25) cam6_indi_pane_g1

0xddeb,	// (0x0005cd37) cam6_indi_pane_g2_ParamLimits

0xddeb,	// (0x0005cd37) cam6_indi_pane_g2

0xddfd,	// (0x0005cd49) cam6_indi_pane_g3_ParamLimits

0xddfd,	// (0x0005cd49) cam6_indi_pane_g3

0x0002,

0xfb50,	// (0x0005ea9c) cam6_indi_pane_g_ParamLimits

0xfb50,	// (0x0005ea9c) cam6_indi_pane_g

0xde0f,	// (0x0005cd5b) cam6_indi_pane_t1_ParamLimits

0xde0f,	// (0x0005cd5b) cam6_indi_pane_t1

0x64ef,	// (0x0005543b) cam6_autofocus_pane_g1

0x64f7,	// (0x00055443) cam6_autofocus_pane_g2

0x64ff,	// (0x0005544b) cam6_autofocus_pane_g3

0x6507,	// (0x00055453) cam6_autofocus_pane_g4

0x0003,

0xfb57,	// (0x0005eaa3) cam6_autofocus_pane_g

0xde35,	// (0x0005cd81) cam6_timer_pane_g1

0xde3d,	// (0x0005cd89) cam6_timer_pane_t1

0xde4b,	// (0x0005cd97) cam6_zoom_cont_pane

0xde53,	// (0x0005cd9f) cam6_zoom_pane_g1

0xde5b,	// (0x0005cda7) cam6_zoom_pane_g2

0x7968,	// (0x000568b4) cam6_zoom_pane_g3

0x0002,

0xfb60,	// (0x0005eaac) cam6_zoom_pane_g

0xcd9f,	// (0x0005bceb) cam6_battery_pane_g1

0xcd9f,	// (0x0005bceb) cam6_battery_pane_g2

0x0001,

0xf6c8,	// (0x0005e614) cam6_battery_pane_g

0xde63,	// (0x0005cdaf) cam6_zoom_cont_pane_g1

0xde6c,	// (0x0005cdb8) cam6_zoom_cont_pane_g2

0xde75,	// (0x0005cdc1) cam6_zoom_cont_pane_g3

0x0002,

0xfb67,	// (0x0005eab3) cam6_zoom_cont_pane_g

0x7985,	// (0x000568d1) cam6_mode_pane_cp_ParamLimits

0x7985,	// (0x000568d1) cam6_mode_pane_cp

0x791a,	// (0x00056866) cam6_zoom_pane_cp_ParamLimits

0x791a,	// (0x00056866) cam6_zoom_pane_cp

0x7997,	// (0x000568e3) vid6_image_uncrop_cif_pane_ParamLimits

0x7997,	// (0x000568e3) vid6_image_uncrop_cif_pane

0x79a7,	// (0x000568f3) vid6_image_uncrop_nhd_pane_ParamLimits

0x79a7,	// (0x000568f3) vid6_image_uncrop_nhd_pane

0x78d7,	// (0x00056823) vid6_image_uncrop_vga_pane_ParamLimits

0x78d7,	// (0x00056823) vid6_image_uncrop_vga_pane

0x79b6,	// (0x00056902) vid6_image_uncrop_wvga_pane_ParamLimits

0x79b6,	// (0x00056902) vid6_image_uncrop_wvga_pane

0x79c5,	// (0x00056911) vid6_indi_pane_ParamLimits

0x79c5,	// (0x00056911) vid6_indi_pane

0xd6c8,	// (0x0005c614) bg_tb_trans_pane_cp09_ParamLimits

0xd6c8,	// (0x0005c614) bg_tb_trans_pane_cp09

0xde8d,	// (0x0005cdd9) cam6_battery_pane_cp_ParamLimits

0xde8d,	// (0x0005cdd9) cam6_battery_pane_cp

0xde99,	// (0x0005cde5) vid6_indi_pane_g1_ParamLimits

0xde99,	// (0x0005cde5) vid6_indi_pane_g1

0xdeab,	// (0x0005cdf7) vid6_indi_pane_g2_ParamLimits

0xdeab,	// (0x0005cdf7) vid6_indi_pane_g2

0xdebd,	// (0x0005ce09) vid6_indi_pane_g3_ParamLimits

0xdebd,	// (0x0005ce09) vid6_indi_pane_g3

0xded4,	// (0x0005ce20) vid6_indi_pane_g4_ParamLimits

0xded4,	// (0x0005ce20) vid6_indi_pane_g4

0xdeeb,	// (0x0005ce37) vid6_indi_pane_g5_ParamLimits

0xdeeb,	// (0x0005ce37) vid6_indi_pane_g5

0x0004,

0xfb6e,	// (0x0005eaba) vid6_indi_pane_g_ParamLimits

0xfb6e,	// (0x0005eaba) vid6_indi_pane_g

0xdf05,	// (0x0005ce51) vid6_indi_pane_t1_ParamLimits

0xdf05,	// (0x0005ce51) vid6_indi_pane_t1

0xdf1b,	// (0x0005ce67) vid6_indi_pane_t2_ParamLimits

0xdf1b,	// (0x0005ce67) vid6_indi_pane_t2

0xdf43,	// (0x0005ce8f) vid6_indi_pane_t3_ParamLimits

0xdf43,	// (0x0005ce8f) vid6_indi_pane_t3

0xdf6b,	// (0x0005ceb7) vid6_indi_pane_t4_ParamLimits

0xdf6b,	// (0x0005ceb7) vid6_indi_pane_t4

0x0003,

0xfb79,	// (0x0005eac5) vid6_indi_pane_t_ParamLimits

0xfb79,	// (0x0005eac5) vid6_indi_pane_t

0xdf8f,	// (0x0005cedb) wait_bar_pane_cp08

0x79dd,	// (0x00056929) main_cset_text2_pane_t1_ParamLimits

0x79dd,	// (0x00056929) main_cset_text2_pane_t1

0x7970,	// (0x000568bc) listscroll_gen_pane_cp06_t1_ParamLimits

0x7970,	// (0x000568bc) listscroll_gen_pane_cp06_t1

0x9a3c,	// (0x00058988) main_cam6_set_pane

0xcfc6,	// (0x0005bf12) bg_tb_trans_pane_cp06_ParamLimits

0xacbc,	// (0x00059c08) cam4_indicators_pane_g1_ParamLimits

0xaccd,	// (0x00059c19) cam4_indicators_pane_g2_ParamLimits

0xf8e7,	// (0x0005e833) cam4_indicators_pane_g_ParamLimits

0xace5,	// (0x00059c31) cam4_indicators_pane_t1_ParamLimits

0xae6b,	// (0x00059db7) bg_tb_trans_pane_cp07_ParamLimits

0xad13,	// (0x00059c5f) vid4_indicators_pane_g1_ParamLimits

0xad29,	// (0x00059c75) vid4_indicators_pane_g2_ParamLimits

0xad3d,	// (0x00059c89) vid4_indicators_pane_g3_ParamLimits

0xad50,	// (0x00059c9c) vid4_indicators_pane_g4_ParamLimits

0xf8f9,	// (0x0005e845) vid4_indicators_pane_g_ParamLimits

0xad6e,	// (0x00059cba) vid4_indicators_pane_t1_ParamLimits

0xadf6,	// (0x00059d42) vid4_progress_pane_g1_ParamLimits

0xae06,	// (0x00059d52) vid4_progress_pane_g2_ParamLimits

0x74d4,	// (0x00056420) vid4_progress_pane_g3_ParamLimits

0xaccd,	// (0x00059c19) vid4_progress_pane_g4_ParamLimits

0xfaaa,	// (0x0005e9f6) vid4_progress_pane_g_ParamLimits

0x74e6,	// (0x00056432) vid4_progress_pane_t1_ParamLimits

0xae16,	// (0x00059d62) vid4_progress_pane_t2_ParamLimits

0xae2b,	// (0x00059d77) vid4_progress_pane_t3_ParamLimits

0xfab5,	// (0x0005ea01) vid4_progress_pane_t_ParamLimits

0x74fe,	// (0x0005644a) wait_bar_pane_cp07_ParamLimits

0x79fe,	// (0x0005694a) main_cam6_set_pane_g2_ParamLimits

0x79fe,	// (0x0005694a) main_cam6_set_pane_g2

0x7a24,	// (0x00056970) main_cset6_listscroll_pane_ParamLimits

0x7a24,	// (0x00056970) main_cset6_listscroll_pane

0x7a42,	// (0x0005698e) main_cset6_slider_pane_ParamLimits

0x7a42,	// (0x0005698e) main_cset6_slider_pane

0x7a58,	// (0x000569a4) main_cset6_text2_pane_ParamLimits

0x7a58,	// (0x000569a4) main_cset6_text2_pane

0xdf9e,	// (0x0005ceea) main_cset6_text_pane

0xdfa6,	// (0x0005cef2) main_cset_list_pane_copy1_ParamLimits

0xdfa6,	// (0x0005cef2) main_cset_list_pane_copy1

0xdfb6,	// (0x0005cf02) scroll_pane_cp028_copy1

0x7a66,	// (0x000569b2) cset_list_set_pane_copy1

0x7a7a,	// (0x000569c6) aid_position_infowindow_above_copy1

0x7a82,	// (0x000569ce) aid_position_infowindow_below_copy1

0x00b4,	// (0x0004f000) cset_list_set_pane_g1_copy1

0x00bc,	// (0x0004f008) cset_list_set_pane_g3_copy1_ParamLimits

0x00bc,	// (0x0004f008) cset_list_set_pane_g3_copy1

0x00cb,	// (0x0004f017) cset_list_set_pane_t1_copy1_ParamLimits

0x00cb,	// (0x0004f017) cset_list_set_pane_t1_copy1

0xae6b,	// (0x00059db7) list_highlight_pane_cp021_copy1_ParamLimits

0xae6b,	// (0x00059db7) list_highlight_pane_cp021_copy1

0xdfbf,	// (0x0005cf0b) cset6_slider_pane_ParamLimits

0xdfbf,	// (0x0005cf0b) cset6_slider_pane

0xdfeb,	// (0x0005cf37) main_cset6_slider_pane_g1_ParamLimits

0xdfeb,	// (0x0005cf37) main_cset6_slider_pane_g1

0x7a8a,	// (0x000569d6) main_cset6_slider_pane_g2_ParamLimits

0x7a8a,	// (0x000569d6) main_cset6_slider_pane_g2

0xe013,	// (0x0005cf5f) main_cset6_slider_pane_g3_ParamLimits

0xe013,	// (0x0005cf5f) main_cset6_slider_pane_g3

0x7ab2,	// (0x000569fe) main_cset6_slider_pane_g4_ParamLimits

0x7ab2,	// (0x000569fe) main_cset6_slider_pane_g4

0x7abe,	// (0x00056a0a) main_cset6_slider_pane_g5_ParamLimits

0x7abe,	// (0x00056a0a) main_cset6_slider_pane_g5

0xd8b6,	// (0x0005c802) main_cset6_slider_pane_g7_ParamLimits

0xd8b6,	// (0x0005c802) main_cset6_slider_pane_g7

0xd8c2,	// (0x0005c80e) main_cset6_slider_pane_g8_ParamLimits

0xd8c2,	// (0x0005c80e) main_cset6_slider_pane_g8

0x6b92,	// (0x00055ade) main_cset6_slider_pane_g9_ParamLimits

0x6b92,	// (0x00055ade) main_cset6_slider_pane_g9

0x6b9e,	// (0x00055aea) main_cset6_slider_pane_g10_ParamLimits

0x6b9e,	// (0x00055aea) main_cset6_slider_pane_g10

0x6baa,	// (0x00055af6) main_cset6_slider_pane_g11_ParamLimits

0x6baa,	// (0x00055af6) main_cset6_slider_pane_g11

0x6bb6,	// (0x00055b02) main_cset6_slider_pane_g12_ParamLimits

0x6bb6,	// (0x00055b02) main_cset6_slider_pane_g12

0x6bc2,	// (0x00055b0e) main_cset6_slider_pane_g13_ParamLimits

0x6bc2,	// (0x00055b0e) main_cset6_slider_pane_g13

0x6bce,	// (0x00055b1a) main_cset6_slider_pane_g14_ParamLimits

0x6bce,	// (0x00055b1a) main_cset6_slider_pane_g14

0x7acc,	// (0x00056a18) main_cset6_slider_pane_g15_ParamLimits

0x7acc,	// (0x00056a18) main_cset6_slider_pane_g15

0x6bf2,	// (0x00055b3e) main_cset6_slider_pane_g16_ParamLimits

0x6bf2,	// (0x00055b3e) main_cset6_slider_pane_g16

0x6c00,	// (0x00055b4c) main_cset6_slider_pane_g17_ParamLimits

0x6c00,	// (0x00055b4c) main_cset6_slider_pane_g17

0x0011,

0xfb82,	// (0x0005eace) main_cset6_slider_pane_g_ParamLimits

0xfb82,	// (0x0005eace) main_cset6_slider_pane_g

0xe01f,	// (0x0005cf6b) main_cset6_slider_pane_t1_ParamLimits

0xe01f,	// (0x0005cf6b) main_cset6_slider_pane_t1

0x7afc,	// (0x00056a48) main_cset6_slider_pane_t2_ParamLimits

0x7afc,	// (0x00056a48) main_cset6_slider_pane_t2

0x7b27,	// (0x00056a73) main_cset6_slider_pane_t3_ParamLimits

0x7b27,	// (0x00056a73) main_cset6_slider_pane_t3

0x7b52,	// (0x00056a9e) main_cset6_slider_pane_t4_ParamLimits

0x7b52,	// (0x00056a9e) main_cset6_slider_pane_t4

0x7b7f,	// (0x00056acb) main_cset6_slider_pane_t5_ParamLimits

0x7b7f,	// (0x00056acb) main_cset6_slider_pane_t5

0xe060,	// (0x0005cfac) main_cset6_slider_pane_t7_ParamLimits

0xe060,	// (0x0005cfac) main_cset6_slider_pane_t7

0x7bac,	// (0x00056af8) main_cset6_slider_pane_t8_ParamLimits

0x7bac,	// (0x00056af8) main_cset6_slider_pane_t8

0x7bd0,	// (0x00056b1c) main_cset6_slider_pane_t9_ParamLimits

0x7bd0,	// (0x00056b1c) main_cset6_slider_pane_t9

0x7bf4,	// (0x00056b40) main_cset6_slider_pane_t10_ParamLimits

0x7bf4,	// (0x00056b40) main_cset6_slider_pane_t10

0x7c18,	// (0x00056b64) main_cset6_slider_pane_t11_ParamLimits

0x7c18,	// (0x00056b64) main_cset6_slider_pane_t11

0xe096,	// (0x0005cfe2) main_cset6_slider_pane_t14_ParamLimits

0xe096,	// (0x0005cfe2) main_cset6_slider_pane_t14

0xe0cf,	// (0x0005d01b) main_cset6_slider_pane_t15_ParamLimits

0xe0cf,	// (0x0005d01b) main_cset6_slider_pane_t15

0x000b,

0xfba7,	// (0x0005eaf3) main_cset6_slider_pane_t_ParamLimits

0xfba7,	// (0x0005eaf3) main_cset6_slider_pane_t

0xe108,	// (0x0005d054) cset_slider_pane_g1_copy1

0xe111,	// (0x0005d05d) cset_slider_pane_g2_copy1

0xe11a,	// (0x0005d066) cset_slider_pane_g3_copy1

0x9a3c,	// (0x00058988) bg_popup_sub_pane_cp011_copy1

0xe123,	// (0x0005d06f) main_cset_text_pane_g1_copy1

0xda05,	// (0x0005c951) main_cset_text_pane_t1_copy1

0xda13,	// (0x0005c95f) main_cset_text_pane_t2_copy1

0xda21,	// (0x0005c96d) main_cset_text_pane_t3_copy1

0xda2f,	// (0x0005c97b) main_cset_text_pane_t4_copy1

0xda3d,	// (0x0005c989) main_cset_text_pane_t5_copy1

0xe12b,	// (0x0005d077) main_cset_text_pane_t6_copy1

0xe139,	// (0x0005d085) main_cset_text_pane_t7_copy1

0x79dd,	// (0x00056929) main_cset_text2_pane_t1_copy1

0xae6b,	// (0x00059db7) main_ncimui_pane

0x4116,	// (0x00053062) popup_query_ncimui_window_ParamLimits

0x4116,	// (0x00053062) popup_query_ncimui_window

0x4dd0,	// (0x00053d1c) field_cale_ev2_pane_g4_ParamLimits

0x4dd0,	// (0x00053d1c) field_cale_ev2_pane_g4

0x5d81,	// (0x00054ccd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5d81,	// (0x00054ccd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf881,	// (0x0005e7cd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf881,	// (0x0005e7cd) cell_video_dialer_keypad_pane_g

0x5d99,	// (0x00054ce5) cell_video_dialer_keypad_pane_t1

0x9a3c,	// (0x00058988) bg_popup_window_pane_cp012

0xb1fa,	// (0x0005a146) heading_pane_cp06

0xe165,	// (0x0005d0b1) ncim_query_content_pane

0x9a3c,	// (0x00058988) bg_popup_heading_pane_cp01

0xe16d,	// (0x0005d0b9) ncim_heading_pane_t1

0xe17b,	// (0x0005d0c7) ncim_indicator_popup_pane

0xe18d,	// (0x0005d0d9) ncim_query_button_pane

0xe1a3,	// (0x0005d0ef) ncim_query_content_pane_t1

0xe1b5,	// (0x0005d101) ncim_query_content_pane_t2

0x0005,

0xfbeb,	// (0x0005eb37) ncim_query_content_pane_t

0xe1ef,	// (0x0005d13b) ncim_query_list_pane

0xe201,	// (0x0005d14d) ncim_query_popup_pane

0xe17b,	// (0x0005d0c7) ncim_indicator_popup_pane_ParamLimits

0x7d67,	// (0x00056cb3) ncim_query_content_pane_g1_ParamLimits

0x7d67,	// (0x00056cb3) ncim_query_content_pane_g1

0xe1a3,	// (0x0005d0ef) ncim_query_content_pane_t1_ParamLimits

0xe1b5,	// (0x0005d101) ncim_query_content_pane_t2_ParamLimits

0x7d73,	// (0x00056cbf) ncim_query_content_pane_t3_ParamLimits

0x7d73,	// (0x00056cbf) ncim_query_content_pane_t3

0x7d9b,	// (0x00056ce7) ncim_query_content_pane_t4_ParamLimits

0x7d9b,	// (0x00056ce7) ncim_query_content_pane_t4

0x7dc3,	// (0x00056d0f) ncim_query_content_pane_t5_ParamLimits

0x7dc3,	// (0x00056d0f) ncim_query_content_pane_t5

0xe1c7,	// (0x0005d113) ncim_query_content_pane_t6_ParamLimits

0xe1c7,	// (0x0005d113) ncim_query_content_pane_t6

0xfbeb,	// (0x0005eb37) ncim_query_content_pane_t_ParamLimits

0xe1ef,	// (0x0005d13b) ncim_query_list_pane_ParamLimits

0xe201,	// (0x0005d14d) ncim_query_popup_pane_ParamLimits

0xe215,	// (0x0005d161) wait_bar_pane_cp04

0x9a3c,	// (0x00058988) input_focus_pane_cp011

0xe21d,	// (0x0005d169) ncim_query_popup_pane_t1

0xe22b,	// (0x0005d177) ncim_list_query_list_pane_ParamLimits

0xe22b,	// (0x0005d177) ncim_list_query_list_pane

0x9a3c,	// (0x00058988) bg_button_pane_cp027

0xe23e,	// (0x0005d18a) ncim_query_button_pane_g1

0x9a3c,	// (0x00058988) list_highlight_pane_cp012

0xe248,	// (0x0005d194) ncim_list_query_list_pane_g1

0xe250,	// (0x0005d19c) ncim_list_query_list_pane_t1

0xacd9,	// (0x00059c25) cam4_indicators_pane_g3_ParamLimits

0xacd9,	// (0x00059c25) cam4_indicators_pane_g3

0xad5c,	// (0x00059ca8) vid4_indicators_pane_g5_ParamLimits

0xad5c,	// (0x00059ca8) vid4_indicators_pane_g5

0xacd9,	// (0x00059c25) vid4_progress_pane_g5_ParamLimits

0xacd9,	// (0x00059c25) vid4_progress_pane_g5

0x7c52,	// (0x00056b9e) main_ncimui_pane_g1

0x7cbb,	// (0x00056c07) ncimui_group_query_pane_ParamLimits

0x7cbb,	// (0x00056c07) ncimui_group_query_pane

0x7d03,	// (0x00056c4f) ncimui_list_pane_ParamLimits

0x7d03,	// (0x00056c4f) ncimui_list_pane

0x7d2a,	// (0x00056c76) ncimui_text_pane_ParamLimits

0x7d2a,	// (0x00056c76) ncimui_text_pane

0x7deb,	// (0x00056d37) ncimui_text_pane_t1_ParamLimits

0x7deb,	// (0x00056d37) ncimui_text_pane_t1

0xe25e,	// (0x0005d1aa) ncimui_list_single_graphic_pane_ParamLimits

0xe25e,	// (0x0005d1aa) ncimui_list_single_graphic_pane

0x7e09,	// (0x00056d55) ncimui_query_pane_ParamLimits

0x7e09,	// (0x00056d55) ncimui_query_pane

0x9a3c,	// (0x00058988) list_highlight_pane_cp013

0xe26e,	// (0x0005d1ba) ncim_list_query_list_pane_t1_copy1

0xe248,	// (0x0005d194) ncim_list_single_graphic_pane_g1

0x7e1c,	// (0x00056d68) ncim_query_button_pane_cp01

0x7e28,	// (0x00056d74) ncim_query_entry_pane_ParamLimits

0x7e28,	// (0x00056d74) ncim_query_entry_pane

0x7e3b,	// (0x00056d87) ncimui_query_pane_g1

0x7e47,	// (0x00056d93) ncimui_query_pane_t1_ParamLimits

0x7e47,	// (0x00056d93) ncimui_query_pane_t1

0xae6b,	// (0x00059db7) input_focus_pane_cp012

0xe27c,	// (0x0005d1c8) ncim_query_entry_pane_t1

0xa1ee,	// (0x0005913a) main_im_pane_ParamLimits

0xae6b,	// (0x00059db7) main_mobtv_pane_ParamLimits

0xae6b,	// (0x00059db7) main_mobtv_pane

0x7ae4,	// (0x00056a30) main_cset6_slider_pane_g18_ParamLimits

0x7ae4,	// (0x00056a30) main_cset6_slider_pane_g18

0x7af0,	// (0x00056a3c) main_cset6_slider_pane_g19_ParamLimits

0x7af0,	// (0x00056a3c) main_cset6_slider_pane_g19

0xae4e,	// (0x00059d9a) bg_main_mobtv_pane_ParamLimits

0xae4e,	// (0x00059d9a) bg_main_mobtv_pane

0x7e60,	// (0x00056dac) main_mobtv_info_pane

0x7e6b,	// (0x00056db7) main_mobtv_loading_pane_ParamLimits

0x7e6b,	// (0x00056db7) main_mobtv_loading_pane

0xe28e,	// (0x0005d1da) main_mobtv_pg_channel_list_pane

0xe298,	// (0x0005d1e4) main_mobtv_pg_hdr_pane

0x7e78,	// (0x00056dc4) main_mobtv_programe_curr_pane_ParamLimits

0x7e78,	// (0x00056dc4) main_mobtv_programe_curr_pane

0x7e85,	// (0x00056dd1) main_mobtv_programe_next_pane_ParamLimits

0x7e85,	// (0x00056dd1) main_mobtv_programe_next_pane

0xe2a1,	// (0x0005d1ed) popup_mobtv_noti_window

0xcd9f,	// (0x0005bceb) main_tv_pg_hdr_pane_g1

0xe2ab,	// (0x0005d1f7) main_tv_pg_hdr_pane_g2

0xe2b3,	// (0x0005d1ff) main_tv_pg_hdr_pane_g3

0xe2bb,	// (0x0005d207) main_tv_pg_hdr_pane_g4

0xe2c3,	// (0x0005d20f) main_tv_pg_hdr_pane_g5

0xe2cd,	// (0x0005d219) main_tv_pg_hdr_pane_g6

0xe2d7,	// (0x0005d223) main_tv_pg_hdr_pane_g7

0xe2e1,	// (0x0005d22d) main_tv_pg_hdr_pane_g8

0xe2eb,	// (0x0005d237) main_tv_pg_hdr_pane_g9

0xe2f5,	// (0x0005d241) main_tv_pg_hdr_pane_g10

0xe2ff,	// (0x0005d24b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf8,	// (0x0005eb44) main_tv_pg_hdr_pane_g

0xe309,	// (0x0005d255) main_tv_pg_hdr_pane_t1

0xe317,	// (0x0005d263) main_tv_pg_hdr_pane_t2

0xe325,	// (0x0005d271) main_tv_pg_hdr_pane_t3

0xe335,	// (0x0005d281) main_tv_pg_hdr_pane_t4

0xe345,	// (0x0005d291) main_tv_pg_hdr_pane_t5

0x0004,

0xfc0f,	// (0x0005eb5b) main_tv_pg_hdr_pane_t

0xe355,	// (0x0005d2a1) single_mobtv_pg_channel_pane_ParamLimits

0xe355,	// (0x0005d2a1) single_mobtv_pg_channel_pane

0xe367,	// (0x0005d2b3) single_mobtv_pg_channel_table_pane

0xe370,	// (0x0005d2bc) single_mobtv_pg_channel_thumb_pane

0xe379,	// (0x0005d2c5) single_tv_pg_channel_pane_g1

0xe382,	// (0x0005d2ce) single_tv_pg_channel_pane_g2

0x0001,

0xfc1a,	// (0x0005eb66) single_tv_pg_channel_pane_g

0xcfc6,	// (0x0005bf12) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfc6,	// (0x0005bf12) bg_single_mobtv_pg_channel_thumb_pane

0xe38b,	// (0x0005d2d7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe38b,	// (0x0005d2d7) single_mobtv_pg_channel_thumb_pane_g1

0xe399,	// (0x0005d2e5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe399,	// (0x0005d2e5) single_mobtv_pg_channel_thumb_pane_g2

0xe3a5,	// (0x0005d2f1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe3a5,	// (0x0005d2f1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc1f,	// (0x0005eb6b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc1f,	// (0x0005eb6b) single_mobtv_pg_channel_thumb_pane_g

0xe3b1,	// (0x0005d2fd) single_mobtv_pg_channel_thumb_pane_t1

0xe3bf,	// (0x0005d30b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc26,	// (0x0005eb72) single_mobtv_pg_channel_thumb_pane_t

0xcd9f,	// (0x0005bceb) bg_single_mobtv_pg_channel_table_pane_g1

0xcd9f,	// (0x0005bceb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c8,	// (0x0005e614) bg_single_mobtv_pg_channel_table_pane_g

0xe3cd,	// (0x0005d319) single_mobtv_pg_channel_table_pane_t1

0xe3db,	// (0x0005d327) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc2b,	// (0x0005eb77) single_mobtv_pg_channel_table_pane_t

0x7e9a,	// (0x00056de6) main_mobtv_info_pane_g1_ParamLimits

0x7e9a,	// (0x00056de6) main_mobtv_info_pane_g1

0x7eb8,	// (0x00056e04) main_mobtv_info_pane_t1_ParamLimits

0x7eb8,	// (0x00056e04) main_mobtv_info_pane_t1

0x7f30,	// (0x00056e7c) main_mobtv_info_pane_t2_ParamLimits

0x7f30,	// (0x00056e7c) main_mobtv_info_pane_t2

0x0002,

0xfc35,	// (0x0005eb81) main_mobtv_info_pane_t_ParamLimits

0xfc35,	// (0x0005eb81) main_mobtv_info_pane_t

0x7fc1,	// (0x00056f0d) wait_bar_pane_cp05

0x7fd3,	// (0x00056f1f) main_mobtv_loading_pane_g1_ParamLimits

0x7fd3,	// (0x00056f1f) main_mobtv_loading_pane_g1

0x7fe4,	// (0x00056f30) main_mobtv_loading_pane_g2_ParamLimits

0x7fe4,	// (0x00056f30) main_mobtv_loading_pane_g2

0x7ff0,	// (0x00056f3c) main_mobtv_loading_pane_g3_ParamLimits

0x7ff0,	// (0x00056f3c) main_mobtv_loading_pane_g3

0x0002,

0xfc3c,	// (0x0005eb88) main_mobtv_loading_pane_g_ParamLimits

0xfc3c,	// (0x0005eb88) main_mobtv_loading_pane_g

0xe3e9,	// (0x0005d335) main_mobtv_loading_pane_t1_ParamLimits

0xe3e9,	// (0x0005d335) main_mobtv_loading_pane_t1

0xe401,	// (0x0005d34d) main_mobtv_loading_pane_t2_ParamLimits

0xe401,	// (0x0005d34d) main_mobtv_loading_pane_t2

0x0001,

0xfc43,	// (0x0005eb8f) main_mobtv_loading_pane_t_ParamLimits

0xfc43,	// (0x0005eb8f) main_mobtv_loading_pane_t

0x8003,	// (0x00056f4f) wait_bar_pane_cp06_ParamLimits

0x8003,	// (0x00056f4f) wait_bar_pane_cp06

0xe425,	// (0x0005d371) main_mobtv_programe_curr_pane_t1

0xe433,	// (0x0005d37f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc48,	// (0x0005eb94) main_mobtv_programe_curr_pane_t

0xe441,	// (0x0005d38d) main_mobtv_programe_next_pane_t1

0xe44f,	// (0x0005d39b) main_mobtv_programe_next_pane_t2

0xe45d,	// (0x0005d3a9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc4d,	// (0x0005eb99) main_mobtv_programe_next_pane_t

0x9a3c,	// (0x00058988) bg_popup_mobtv_noti_window_pane

0xe46b,	// (0x0005d3b7) popup_mobtv_noti_window_g1

0xe473,	// (0x0005d3bf) popup_mobtv_noti_window_t1

0xe481,	// (0x0005d3cd) popup_mobtv_noti_window_t2

0x0001,

0xfc54,	// (0x0005eba0) popup_mobtv_noti_window_t

0xcd9f,	// (0x0005bceb) bg_popup_mobtv_noti_window_pane_g1

0x9a3c,	// (0x00058988) sc_clock_pane

0x9a3c,	// (0x00058988) main_fs_bigclock_pane

0x774e,	// (0x0005669a) blid2_tripm_pane_t4_ParamLimits

0x774e,	// (0x0005669a) blid2_tripm_pane_t4

0x8012,	// (0x00056f5e) sc_clock_pane_g1_ParamLimits

0x8012,	// (0x00056f5e) sc_clock_pane_g1

0x8024,	// (0x00056f70) sc_clock_pane_t1_ParamLimits

0x8024,	// (0x00056f70) sc_clock_pane_t1

0x8048,	// (0x00056f94) sc_clock_pane_t2_ParamLimits

0x8048,	// (0x00056f94) sc_clock_pane_t2

0x8060,	// (0x00056fac) sc_clock_pane_t3_ParamLimits

0x8060,	// (0x00056fac) sc_clock_pane_t3

0x0004,

0xfc59,	// (0x0005eba5) sc_clock_pane_t_ParamLimits

0xfc59,	// (0x0005eba5) sc_clock_pane_t

0x8ebb,	// (0x00057e07) main_fs_bigclock_indicator_pane_ParamLimits

0x8ebb,	// (0x00057e07) main_fs_bigclock_indicator_pane

0x8126,	// (0x00057072) main_fs_bigclock_pane_g1_ParamLimits

0x8126,	// (0x00057072) main_fs_bigclock_pane_g1

0x8ec7,	// (0x00057e13) main_fs_bigclock_pane_t1_ParamLimits

0x8ec7,	// (0x00057e13) main_fs_bigclock_pane_t1

0x8ed9,	// (0x00057e25) main_fs_bigclock_pane_t2_ParamLimits

0x8ed9,	// (0x00057e25) main_fs_bigclock_pane_t2

0x8eed,	// (0x00057e39) main_fs_bigclock_pane_t3_ParamLimits

0x8eed,	// (0x00057e39) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0005edb8) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0005edb8) main_fs_bigclock_pane_t

0xec2a,	// (0x0005db76) main_fs_bigclock_indicator_pane_g1

0xe195,	// (0x0005d0e1) ncim_query_content_pane_g2_ParamLimits

0xe195,	// (0x0005d0e1) ncim_query_content_pane_g2

0x0001,

0xfbe6,	// (0x0005eb32) ncim_query_content_pane_g_ParamLimits

0xfbe6,	// (0x0005eb32) ncim_query_content_pane_g

0x8077,	// (0x00056fc3) sc_clock_pane_t4_ParamLimits

0x8077,	// (0x00056fc3) sc_clock_pane_t4

0xae6b,	// (0x00059db7) main_radioblah_pane

0xac4c,	// (0x00059b98) cell_call4_button_pane_t1_copy1_ParamLimits

0xac4c,	// (0x00059b98) cell_call4_button_pane_t1_copy1

0x7c6a,	// (0x00056bb6) main_ncimui_pane_t1_ParamLimits

0x7c6a,	// (0x00056bb6) main_ncimui_pane_t1

0x7c84,	// (0x00056bd0) main_ncimui_pane_t2_ParamLimits

0x7c84,	// (0x00056bd0) main_ncimui_pane_t2

0x0002,

0xfbdf,	// (0x0005eb2b) main_ncimui_pane_t_ParamLimits

0xfbdf,	// (0x0005eb2b) main_ncimui_pane_t

0xe48f,	// (0x0005d3db) main_radioblah_anim_pane_ParamLimits

0xe48f,	// (0x0005d3db) main_radioblah_anim_pane

0xe4a0,	// (0x0005d3ec) main_radioblah_info_pane_ParamLimits

0xe4a0,	// (0x0005d3ec) main_radioblah_info_pane

0xe4b4,	// (0x0005d400) main_radioblah_pane_t1_ParamLimits

0xe4b4,	// (0x0005d400) main_radioblah_pane_t1

0xe4d0,	// (0x0005d41c) main_radioblah_pane_t2_ParamLimits

0xe4d0,	// (0x0005d41c) main_radioblah_pane_t2

0x0003,

0xfc7a,	// (0x0005ebc6) main_radioblah_pane_t_ParamLimits

0xfc7a,	// (0x0005ebc6) main_radioblah_pane_t

0x82cf,	// (0x0005721b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82cf,	// (0x0005721b) main_radioblah_rocker_ctrl_pane

0xe518,	// (0x0005d464) main_radioblah_info_pane_t1_ParamLimits

0xe518,	// (0x0005d464) main_radioblah_info_pane_t1

0x8327,	// (0x00057273) main_radioblah_info_pane_t2_ParamLimits

0x8327,	// (0x00057273) main_radioblah_info_pane_t2

0x0003,

0xfc83,	// (0x0005ebcf) main_radioblah_info_pane_t_ParamLimits

0xfc83,	// (0x0005ebcf) main_radioblah_info_pane_t

0xcd9f,	// (0x0005bceb) main_radioblah_rocker_ctrl_pane_g1

0x83d7,	// (0x00057323) main_radioblah_rocker_ctrl_pane_g2

0x83df,	// (0x0005732b) main_radioblah_rocker_ctrl_pane_g3

0x83e7,	// (0x00057333) main_radioblah_rocker_ctrl_pane_g4

0x83ef,	// (0x0005733b) main_radioblah_rocker_ctrl_pane_g5

0x83f7,	// (0x00057343) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc8c,	// (0x0005ebd8) main_radioblah_rocker_ctrl_pane_g

0x79dd,	// (0x00056929) main_cset_text2_pane_t1_copy1_ParamLimits

0xacaa,	// (0x00059bf6) cam4_image_uncrop_qvga_pane

0xacff,	// (0x00059c4b) vid4_image_uncrop_qcif_pane

0xae40,	// (0x00059d8c) cam6_image_uncrop_qvga_pane_ParamLimits

0xae40,	// (0x00059d8c) cam6_image_uncrop_qvga_pane

0xde7d,	// (0x0005cdc9) vid6_image_uncrop_qcif_pane_ParamLimits

0xde7d,	// (0x0005cdc9) vid6_image_uncrop_qcif_pane

0x9a3c,	// (0x00058988) bg_popup_preview_window_pane_cp03

0xe147,	// (0x0005d093) list_cset_text2_pane

0xe14f,	// (0x0005d09b) main_cset6_text2_pane_g1

0xe157,	// (0x0005d0a3) main_cset6_text2_pane_t1

0xeb27,	// (0x0005da73) list_cset_text2_pane_t1_ParamLimits

0xeb27,	// (0x0005da73) list_cset_text2_pane_t1

0xae6b,	// (0x00059db7) main_radioblah_pane_ParamLimits

0x7fad,	// (0x00056ef9) main_mobtv_info_pane_t3_ParamLimits

0x7fad,	// (0x00056ef9) main_mobtv_info_pane_t3

0x82bd,	// (0x00057209) main_radioblah_pane_g1

0x82f7,	// (0x00057243) main_radioblah_info_pane_g1

0x837c,	// (0x000572c8) main_radioblah_info_pane_t3_ParamLimits

0x837c,	// (0x000572c8) main_radioblah_info_pane_t3

0x2b9c,	// (0x00051ae8) highlight_cell_cale_month_pane_ParamLimits

0x2b9c,	// (0x00051ae8) highlight_cell_cale_month_pane

0x9a3c,	// (0x00058988) main_phob_fisheye_pane

0xd0a2,	// (0x0005bfee) scroll_pane_cp0031_ParamLimits

0xd0a2,	// (0x0005bfee) scroll_pane_cp0031

0xdf8f,	// (0x0005cedb) wait_bar_pane_cp08_ParamLimits

0x7a66,	// (0x000569b2) cset_list_set_pane_copy1_ParamLimits

0xe552,	// (0x0005d49e) highlight_cell_cale_month_pane_g1

0x83ff,	// (0x0005734b) highlight_cell_cale_month_pane_t1

0xdc3d,	// (0x0005cb89) list_gen_pane_cp01

0xd8a1,	// (0x0005c7ed) scroll_pane_01

0x840d,	// (0x00057359) list_single_double_fisheye_pane

0x01b6,	// (0x0004f102) list_double_fisheye_pane_g1_ParamLimits

0x01b6,	// (0x0004f102) list_double_fisheye_pane_g1

0x01c2,	// (0x0004f10e) list_double_fisheye_pane_g2_ParamLimits

0x01c2,	// (0x0004f10e) list_double_fisheye_pane_g2

0x8416,	// (0x00057362) list_double_fisheye_pane_g3_ParamLimits

0x8416,	// (0x00057362) list_double_fisheye_pane_g3

0x0004,

0xfc99,	// (0x0005ebe5) list_double_fisheye_pane_g_ParamLimits

0xfc99,	// (0x0005ebe5) list_double_fisheye_pane_g

0x01f3,	// (0x0004f13f) list_double_fisheye_pane_t1_ParamLimits

0x01f3,	// (0x0004f13f) list_double_fisheye_pane_t1

0x020e,	// (0x0004f15a) list_double_fisheye_pane_t2_ParamLimits

0x020e,	// (0x0004f15a) list_double_fisheye_pane_t2

0x0001,

0xfca4,	// (0x0005ebf0) list_double_fisheye_pane_t_ParamLimits

0xfca4,	// (0x0005ebf0) list_double_fisheye_pane_t

0x9a3c,	// (0x00058988) main_call5_pane

0x80a2,	// (0x00056fee) sc_swipe_pane_ParamLimits

0x80a2,	// (0x00056fee) sc_swipe_pane

0x8435,	// (0x00057381) call5_image_pane_ParamLimits

0x8435,	// (0x00057381) call5_image_pane

0x8452,	// (0x0005739e) call5_swipe_1_pane_ParamLimits

0x8452,	// (0x0005739e) call5_swipe_1_pane

0x8465,	// (0x000573b1) call5_swipe_2_pane_ParamLimits

0x8465,	// (0x000573b1) call5_swipe_2_pane

0x8490,	// (0x000573dc) popup_call5_audio_first_window_ParamLimits

0x8490,	// (0x000573dc) popup_call5_audio_first_window

0xcfc6,	// (0x0005bf12) call5_swipe_1_pane_g1_ParamLimits

0xcfc6,	// (0x0005bf12) call5_swipe_1_pane_g1

0xe55a,	// (0x0005d4a6) call5_swipe_1_pane_g2_ParamLimits

0xe55a,	// (0x0005d4a6) call5_swipe_1_pane_g2

0x0001,

0xfca9,	// (0x0005ebf5) call5_swipe_1_pane_g_ParamLimits

0xfca9,	// (0x0005ebf5) call5_swipe_1_pane_g

0xe566,	// (0x0005d4b2) call5_swipe_1_pane_t1_ParamLimits

0xe566,	// (0x0005d4b2) call5_swipe_1_pane_t1

0xcfc6,	// (0x0005bf12) call5_swipe_2_pane_g1_ParamLimits

0xcfc6,	// (0x0005bf12) call5_swipe_2_pane_g1

0xe57b,	// (0x0005d4c7) call5_swipe_2_pane_g2_ParamLimits

0xe57b,	// (0x0005d4c7) call5_swipe_2_pane_g2

0x0001,

0xfcae,	// (0x0005ebfa) call5_swipe_2_pane_g_ParamLimits

0xfcae,	// (0x0005ebfa) call5_swipe_2_pane_g

0xe587,	// (0x0005d4d3) call5_swipe_2_pane_t1_ParamLimits

0xe587,	// (0x0005d4d3) call5_swipe_2_pane_t1

0xe59c,	// (0x0005d4e8) sc_swipe_pane_g1_ParamLimits

0xe59c,	// (0x0005d4e8) sc_swipe_pane_g1

0xe5a9,	// (0x0005d4f5) sc_swipe_pane_g2_ParamLimits

0xe5a9,	// (0x0005d4f5) sc_swipe_pane_g2

0x0001,

0xfcb3,	// (0x0005ebff) sc_swipe_pane_g_ParamLimits

0xfcb3,	// (0x0005ebff) sc_swipe_pane_g

0xe5b5,	// (0x0005d501) sc_swipe_pane_t1_ParamLimits

0xe5b5,	// (0x0005d501) sc_swipe_pane_t1

0x9a3c,	// (0x00058988) main_cmail_launcher_pane

0x84a5,	// (0x000573f1) aid_size_cell_cmail_l_ParamLimits

0x84a5,	// (0x000573f1) aid_size_cell_cmail_l

0x84b3,	// (0x000573ff) grid_cmail_l_pane_ParamLimits

0x84b3,	// (0x000573ff) grid_cmail_l_pane

0x84cc,	// (0x00057418) cell_cmail_l_pane_ParamLimits

0x84cc,	// (0x00057418) cell_cmail_l_pane

0xe5ca,	// (0x0005d516) cell_cmail_l_pane_g1_ParamLimits

0xe5ca,	// (0x0005d516) cell_cmail_l_pane_g1

0xe5d6,	// (0x0005d522) cell_cmail_l_pane_t1_ParamLimits

0xe5d6,	// (0x0005d522) cell_cmail_l_pane_t1

0xe5ec,	// (0x0005d538) cell_cmail_l_pane_t2_ParamLimits

0xe5ec,	// (0x0005d538) cell_cmail_l_pane_t2

0x0001,

0xfcb8,	// (0x0005ec04) cell_cmail_l_pane_t_ParamLimits

0xfcb8,	// (0x0005ec04) cell_cmail_l_pane_t

0xae6b,	// (0x00059db7) grid_highlight_pane_cp018_ParamLimits

0xae6b,	// (0x00059db7) grid_highlight_pane_cp018

0x0b7d,	// (0x0004fac9) main2_pane_ParamLimits

0x0b7d,	// (0x0004fac9) main2_pane

0xa2b4,	// (0x00059200) popup_sp_fs_action_menu_bg_pane_g1

0xa2bc,	// (0x00059208) popup_sp_fs_action_menu_bg_pane_g2

0xa2c4,	// (0x00059210) popup_sp_fs_action_menu_bg_pane_g3

0xa2cc,	// (0x00059218) popup_sp_fs_action_menu_bg_pane_g4

0xa2d4,	// (0x00059220) popup_sp_fs_action_menu_bg_pane_g5

0xa2dc,	// (0x00059228) popup_sp_fs_action_menu_bg_pane_g6

0xa2e4,	// (0x00059230) popup_sp_fs_action_menu_bg_pane_g7

0xa2ec,	// (0x00059238) popup_sp_fs_action_menu_bg_pane_g8

0xa2f4,	// (0x00059240) popup_sp_fs_action_menu_bg_pane_g9

0xa2fc,	// (0x00059248) popup_sp_fs_action_menu_bg_pane_g10

0xa2fc,	// (0x00059248) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0005e0bb) popup_sp_fs_action_menu_bg_pane_g

0xfa11,	// (0x0004e95d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfa11,	// (0x0004e95d) list_medium_line_x2_t3_g3_g1

0xfa1d,	// (0x0004e969) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfa1d,	// (0x0004e969) list_medium_line_x2_t3_g3_g2

0xfa29,	// (0x0004e975) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfa29,	// (0x0004e975) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0005e169) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0005e169) list_medium_line_x2_t3_g3_g

0xfa35,	// (0x0004e981) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfa35,	// (0x0004e981) list_medium_line_x2_t3_g3_t1

0xfa4a,	// (0x0004e996) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfa4a,	// (0x0004e996) list_medium_line_x2_t3_g3_t2

0xfa5e,	// (0x0004e9aa) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfa5e,	// (0x0004e9aa) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0005e170) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0005e170) list_medium_line_x2_t3_g3_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t3_g2_g1

0xeafb,	// (0x0005da47) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0005e177) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0005e177) list_medium_line_x2_t3_g2_g

0xfa73,	// (0x0004e9bf) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfa73,	// (0x0004e9bf) list_medium_line_x2_t3_g2_t1

0xfa89,	// (0x0004e9d5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfa89,	// (0x0004e9d5) list_medium_line_x2_t3_g2_t2

0xfa9b,	// (0x0004e9e7) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfa9b,	// (0x0004e9e7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0005e17c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0005e17c) list_medium_line_x2_t3_g2_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t4_g4_g1

0xfab9,	// (0x0004ea05) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfab9,	// (0x0004ea05) list_medium_line_x2_t4_g4_g2

0xeb07,	// (0x0005da53) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x2_t4_g4_g3

0xfac5,	// (0x0004ea11) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfac5,	// (0x0004ea11) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0005e183) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0005e183) list_medium_line_x2_t4_g4_g

0xfad1,	// (0x0004ea1d) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfad1,	// (0x0004ea1d) list_medium_line_x2_t4_g4_t1

0xfaeb,	// (0x0004ea37) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfaeb,	// (0x0004ea37) list_medium_line_x2_t4_g4_t2

0xfb01,	// (0x0004ea4d) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfb01,	// (0x0004ea4d) list_medium_line_x2_t4_g4_t3

0xfb16,	// (0x0004ea62) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfb16,	// (0x0004ea62) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0005e18c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0005e18c) list_medium_line_x2_t4_g4_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g4_g1

0xf039,	// (0x0005df85) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf039,	// (0x0005df85) list_medium_line_x2_t2_g4_g2

0xeb07,	// (0x0005da53) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x2_t2_g4_g3

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0005e1f3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0005e1f3) list_medium_line_x2_t2_g4_g

0xfb28,	// (0x0004ea74) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfb28,	// (0x0004ea74) list_medium_line_x2_t2_g4_t1

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0005e1fc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0005e1fc) list_medium_line_x2_t2_g4_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g3_g1

0xeb07,	// (0x0005da53) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x2_t2_g3_g2

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2b5,	// (0x0005e201) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2b5,	// (0x0005e201) list_medium_line_x2_t2_g3_g

0xfb3d,	// (0x0004ea89) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfb3d,	// (0x0004ea89) list_medium_line_x2_t2_g3_t1

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2bc,	// (0x0005e208) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2bc,	// (0x0005e208) list_medium_line_x2_t2_g3_t

0x2d0c,	// (0x00051c58) main_sp_fs_list_pane_ParamLimits

0x2d0c,	// (0x00051c58) main_sp_fs_list_pane

0xc2d2,	// (0x0005b21e) sp_fs_scroll_pane_ParamLimits

0xc2d2,	// (0x0005b21e) sp_fs_scroll_pane

0xfb52,	// (0x0004ea9e) list_medium_line_x2_t3_t1

0xfb62,	// (0x0004eaae) list_medium_line_x2_t3_t2

0xfb70,	// (0x0004eabc) list_medium_line_x2_t3_t3

0x0002,

0xf307,	// (0x0005e253) list_medium_line_x2_t3_t

0xfb7e,	// (0x0004eaca) list_medium_line_x3_t4_t1

0xfb8e,	// (0x0004eada) list_medium_line_x3_t4_t2

0xfb9c,	// (0x0004eae8) list_medium_line_x3_t4_t3

0xf05a,	// (0x0005dfa6) list_medium_line_x3_t4_t4

0x0003,

0xf30e,	// (0x0005e25a) list_medium_line_x3_t4_t

0xfbaa,	// (0x0004eaf6) list_medium_line_x4_t5_t1

0xfbba,	// (0x0004eb06) list_medium_line_x4_t5_t2

0xf068,	// (0x0005dfb4) list_medium_line_x4_t5_t3

0xfbc8,	// (0x0004eb14) list_medium_line_x4_t5_t4

0xf05a,	// (0x0005dfa6) list_medium_line_x4_t5_t5

0x0004,

0xf317,	// (0x0005e263) list_medium_line_x4_t5_t

0xeaef,	// (0x0005da3b) list_medium_line_t4_g4_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_t4_g4_g1

0xf076,	// (0x0005dfc2) list_medium_line_t4_g4_g2_ParamLimits

0xf076,	// (0x0005dfc2) list_medium_line_t4_g4_g2

0xfbd6,	// (0x0004eb22) list_medium_line_t4_g4_g3_ParamLimits

0xfbd6,	// (0x0004eb22) list_medium_line_t4_g4_g3

0xeafb,	// (0x0005da47) list_medium_line_t4_g4_g4_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_t4_g4_g4

0x0003,

0xf322,	// (0x0005e26e) list_medium_line_t4_g4_g_ParamLimits

0xf322,	// (0x0005e26e) list_medium_line_t4_g4_g

0xfbe2,	// (0x0004eb2e) list_medium_line_t4_g4_t1_ParamLimits

0xfbe2,	// (0x0004eb2e) list_medium_line_t4_g4_t1

0xfbf7,	// (0x0004eb43) list_medium_line_t4_g4_t2_ParamLimits

0xfbf7,	// (0x0004eb43) list_medium_line_t4_g4_t2

0xfc0d,	// (0x0004eb59) list_medium_line_t4_g4_t3_ParamLimits

0xfc0d,	// (0x0004eb59) list_medium_line_t4_g4_t3

0xf045,	// (0x0005df91) list_medium_line_t4_g4_t4_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_t4_g4_t4

0x0003,

0xf32b,	// (0x0005e277) list_medium_line_t4_g4_t_ParamLimits

0xf32b,	// (0x0005e277) list_medium_line_t4_g4_t

0x2dde,	// (0x00051d2a) chi_dic_find_pane_g1

0x3e9c,	// (0x00052de8) main_tport_pane

0xfec0,	// (0x0004ee0c) list_medium_line_plain_t1

0xfece,	// (0x0004ee1a) list_medium_line_t2_g2_g1_ParamLimits

0xfece,	// (0x0004ee1a) list_medium_line_t2_g2_g1

0xfeda,	// (0x0004ee26) list_medium_line_t2_g2_g2_ParamLimits

0xfeda,	// (0x0004ee26) list_medium_line_t2_g2_g2

0x0001,

0xf9f0,	// (0x0005e93c) list_medium_line_t2_g2_g_ParamLimits

0xf9f0,	// (0x0005e93c) list_medium_line_t2_g2_g

0xfee6,	// (0x0004ee32) list_medium_line_t2_g2_t1_ParamLimits

0xfee6,	// (0x0004ee32) list_medium_line_t2_g2_t1

0xff00,	// (0x0004ee4c) list_medium_line_t2_g2_t2_ParamLimits

0xff00,	// (0x0004ee4c) list_medium_line_t2_g2_t2

0x0001,

0xf9f5,	// (0x0005e941) list_medium_line_t2_g2_t_ParamLimits

0xf9f5,	// (0x0005e941) list_medium_line_t2_g2_t

0x7511,	// (0x0005645d) aid_sp_fs_list_icon_a_sm

0x7519,	// (0x00056465) aid_sp_fs_list_icon_d

0x7521,	// (0x0005646d) aid_sp_fs_text_primary

0xdc46,	// (0x0005cb92) aid_sp_fs_text_secondary

0x752a,	// (0x00056476) list_medium_line

0x752a,	// (0x00056476) list_medium_line_g2

0x752a,	// (0x00056476) list_medium_line_g3

0x752a,	// (0x00056476) list_medium_line_plain

0x752a,	// (0x00056476) list_medium_line_plain_t2

0x752a,	// (0x00056476) list_medium_line_plain_t3

0x752a,	// (0x00056476) list_medium_line_right_icon

0x752a,	// (0x00056476) list_medium_line_right_iconx2

0x752a,	// (0x00056476) list_medium_line_t2

0x752a,	// (0x00056476) list_medium_line_t2_g2

0x752a,	// (0x00056476) list_medium_line_t2_g3

0x752a,	// (0x00056476) list_medium_line_t2_right_icon

0x752a,	// (0x00056476) list_medium_line_t2_right_iconx2

0x752a,	// (0x00056476) list_medium_line_t3

0x752a,	// (0x00056476) list_medium_line_t3_g2

0x752a,	// (0x00056476) list_medium_line_t3_g3

0x752a,	// (0x00056476) list_medium_line_t3_right_iconx2

0x008e,	// (0x0004efda) list_medium_line_t4_g4

0x752a,	// (0x00056476) list_medium_line_x2

0x752a,	// (0x00056476) list_medium_line_x2_t2_g2

0x752a,	// (0x00056476) list_medium_line_x2_t2_g3

0x752a,	// (0x00056476) list_medium_line_x2_t2_g4

0x752a,	// (0x00056476) list_medium_line_x2_t3

0x752a,	// (0x00056476) list_medium_line_x2_t3_g2

0x752a,	// (0x00056476) list_medium_line_x2_t3_g3

0x752a,	// (0x00056476) list_medium_line_x2_t3_g4

0x752a,	// (0x00056476) list_medium_line_x2_t4_g2

0x752a,	// (0x00056476) list_medium_line_x2_t4_g4

0x0097,	// (0x0004efe3) list_medium_line_x3

0x0097,	// (0x0004efe3) list_medium_line_x3_t4

0x0097,	// (0x0004efe3) list_medium_line_x3_t4_g4

0x008e,	// (0x0004efda) list_medium_line_x4_t4

0x008e,	// (0x0004efda) list_medium_line_x4_t4_g7

0x008e,	// (0x0004efda) list_medium_line_x4_t5

0x00a0,	// (0x0004efec) list_single_fs_dyc_pane_ParamLimits

0x00a0,	// (0x0004efec) list_single_fs_dyc_pane

0xeaef,	// (0x0005da3b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x4_t4_g7_g1

0x00e0,	// (0x0004f02c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x00e0,	// (0x0004f02c) list_medium_line_x4_t4_g7_g2

0x00ec,	// (0x0004f038) list_medium_line_x4_t4_g7_g3_ParamLimits

0x00ec,	// (0x0004f038) list_medium_line_x4_t4_g7_g3

0x00fb,	// (0x0004f047) list_medium_line_x4_t4_g7_g4_ParamLimits

0x00fb,	// (0x0004f047) list_medium_line_x4_t4_g7_g4

0x0107,	// (0x0004f053) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0107,	// (0x0004f053) list_medium_line_x4_t4_g7_g5

0x0116,	// (0x0004f062) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0116,	// (0x0004f062) list_medium_line_x4_t4_g7_g6

0x0125,	// (0x0004f071) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0125,	// (0x0004f071) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc0,	// (0x0005eb0c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc0,	// (0x0005eb0c) list_medium_line_x4_t4_g7_g

0x0131,	// (0x0004f07d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0131,	// (0x0004f07d) list_medium_line_x4_t4_g7_t1

0x0146,	// (0x0004f092) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0146,	// (0x0004f092) list_medium_line_x4_t4_g7_t2

0x015b,	// (0x0004f0a7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x015b,	// (0x0004f0a7) list_medium_line_x4_t4_g7_t3

0x0170,	// (0x0004f0bc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0170,	// (0x0004f0bc) list_medium_line_x4_t4_g7_t4

0x0182,	// (0x0004f0ce) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0182,	// (0x0004f0ce) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbcf,	// (0x0005eb1b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbcf,	// (0x0005eb1b) list_medium_line_x4_t4_g7_t

0x0194,	// (0x0004f0e0) list_single_dyc_row_pane_ParamLimits

0x0194,	// (0x0004f0e0) list_single_dyc_row_pane

0x8422,	// (0x0005736e) call5_gesture_pane_ParamLimits

0x8422,	// (0x0005736e) call5_gesture_pane

0x8478,	// (0x000573c4) call5_windows_pane_ParamLimits

0x8478,	// (0x000573c4) call5_windows_pane

0x84de,	// (0x0005742a) call5_swipe_1_pane_cp_ParamLimits

0x84de,	// (0x0005742a) call5_swipe_1_pane_cp

0x84ea,	// (0x00057436) call5_swipe_2_pane_cp_ParamLimits

0x84ea,	// (0x00057436) call5_swipe_2_pane_cp

0xa40b,	// (0x00059357) call5_image_pane_cp

0x84f6,	// (0x00057442) popup_call5_audio_first_window_cp_ParamLimits

0x84f6,	// (0x00057442) popup_call5_audio_first_window_cp

0xe59c,	// (0x0005d4e8) call5_swipe_1_pane_g1_cp_ParamLimits

0xe59c,	// (0x0005d4e8) call5_swipe_1_pane_g1_cp

0xe609,	// (0x0005d555) call5_swipe_1_pane_g2_cp

0xe5b5,	// (0x0005d501) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5b5,	// (0x0005d501) call5_swipe_1_pane_t1_cp

0xe59c,	// (0x0005d4e8) call5_swipe_2_pane_g1_cp_ParamLimits

0xe59c,	// (0x0005d4e8) call5_swipe_2_pane_g1_cp

0xe611,	// (0x0005d55d) call5_swipe_2_pane_g2_cp

0xe619,	// (0x0005d565) call5_swipe_2_pane_t1_cp_ParamLimits

0xe619,	// (0x0005d565) call5_swipe_2_pane_t1_cp

0xae6b,	// (0x00059db7) main_sp_fs_email_pane

0xd97a,	// (0x0005c8c6) main_sp_fs_listscroll_pane_te

0x0230,	// (0x0004f17c) popup_sp_fs_action_menu_pane_ParamLimits

0x0230,	// (0x0004f17c) popup_sp_fs_action_menu_pane

0xcd9f,	// (0x0005bceb) bg_sp_fs_ctrlbar_pane_g1

0xe62e,	// (0x0005d57a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe637,	// (0x0005d583) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe640,	// (0x0005d58c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd9f,	// (0x0005bceb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcbd,	// (0x0005ec09) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb7e,	// (0x0005baca) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb7e,	// (0x0005baca) bg_sp_fs_ctrlbar_ddmenu_pane

0xe649,	// (0x0005d595) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe649,	// (0x0005d595) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe655,	// (0x0005d5a1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe655,	// (0x0005d5a1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc6,	// (0x0005ec12) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc6,	// (0x0005ec12) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe661,	// (0x0005d5ad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe661,	// (0x0005d5ad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0276,	// (0x0004f1c2) list_medium_line_t2_right_icon_g1

0x027e,	// (0x0004f1ca) list_medium_line_t2_right_icon_t1

0x028e,	// (0x0004f1da) list_medium_line_t2_right_icon_t2

0x0001,

0xfccb,	// (0x0005ec17) list_medium_line_t2_right_icon_t

0xc967,	// (0x0005b8b3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc967,	// (0x0005b8b3) bg_sp_fs_ctrlbar_pane

0x8551,	// (0x0005749d) main_sp_fs_ctrlbar_button_pane_cp01

0x855b,	// (0x000574a7) main_sp_fs_ctrlbar_ddmenu_pane

0xe6b5,	// (0x0005d601) main_sp_fs_ctrlbar_pane_g1

0xe6c1,	// (0x0005d60d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcd0,	// (0x0005ec1c) main_sp_fs_ctrlbar_pane_g

0x8599,	// (0x000574e5) main_sp_fs_ctrlbar_pane_t1

0x85d8,	// (0x00057524) main_sp_fs_ctrlbar_pane

0x85fc,	// (0x00057548) main_sp_fs_listscroll_pane_te_cp01

0x02a0,	// (0x0004f1ec) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02a0,	// (0x0004f1ec) popup_sp_fs_action_menu_pane_cp01

0xae6b,	// (0x00059db7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xae6b,	// (0x00059db7) bg_sp_fs_highlight_list_pane_cp01

0x861c,	// (0x00057568) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x861c,	// (0x00057568) sp_fs_action_menu_list_gene_pane_g1

0xe6e8,	// (0x0005d634) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe6e8,	// (0x0005d634) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcde,	// (0x0005ec2a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcde,	// (0x0005ec2a) sp_fs_action_menu_list_gene_pane_g

0x862b,	// (0x00057577) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x862b,	// (0x00057577) sp_fs_action_menu_list_gene_pane_t1

0x8643,	// (0x0005758f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8643,	// (0x0005758f) sp_fs_action_menu_list_gene_pane

0xe6f5,	// (0x0005d641) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe6f5,	// (0x0005d641) popup_sp_fs_action_menu_bg_pane

0x8666,	// (0x000575b2) sp_fs_action_menu_list_pane_ParamLimits

0x8666,	// (0x000575b2) sp_fs_action_menu_list_pane

0x02d0,	// (0x0004f21c) sp_fs_scroll_pane_cp01_ParamLimits

0x02d0,	// (0x0004f21c) sp_fs_scroll_pane_cp01

0x02f6,	// (0x0004f242) list_medium_line_plain_t2_t1

0x0306,	// (0x0004f252) list_medium_line_plain_t2_t2

0x0001,

0xfce3,	// (0x0005ec2f) list_medium_line_plain_t2_t

0x0316,	// (0x0004f262) list_medium_line_plain_t3_t1

0x0326,	// (0x0004f272) list_medium_line_plain_t3_t2

0x0334,	// (0x0004f280) list_medium_line_plain_t3_t3

0x0002,

0xfce8,	// (0x0005ec34) list_medium_line_plain_t3_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t2_g2_g1

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0005e177) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0005e177) list_medium_line_x2_t2_g2_g

0xf082,	// (0x0005dfce) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf082,	// (0x0005dfce) list_medium_line_x2_t2_g2_t1

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcef,	// (0x0005ec3b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcef,	// (0x0005ec3b) list_medium_line_x2_t2_g2_t

0xeaef,	// (0x0005da3b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t4_g2_g1

0x0342,	// (0x0004f28e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0342,	// (0x0004f28e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf4,	// (0x0005ec40) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf4,	// (0x0005ec40) list_medium_line_x2_t4_g2_g

0x0354,	// (0x0004f2a0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0354,	// (0x0004f2a0) list_medium_line_x2_t4_g2_t1

0x036e,	// (0x0004f2ba) list_medium_line_x2_t4_g2_t2_ParamLimits

0x036e,	// (0x0004f2ba) list_medium_line_x2_t4_g2_t2

0x0384,	// (0x0004f2d0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0384,	// (0x0004f2d0) list_medium_line_x2_t4_g2_t3

0xf045,	// (0x0005df91) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0005ec45) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0005ec45) list_medium_line_x2_t4_g2_t

0x0399,	// (0x0004f2e5) list_medium_line_t3_right_iconx2_g1

0x0276,	// (0x0004f1c2) list_medium_line_t3_right_iconx2_g2

0x03a1,	// (0x0004f2ed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0005ec4e) list_medium_line_t3_right_iconx2_g

0x03ab,	// (0x0004f2f7) list_medium_line_t3_right_iconx2_t1

0x03bb,	// (0x0004f307) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0005ec55) list_medium_line_t3_right_iconx2_t

0xeaef,	// (0x0005da3b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x3_t4_g4_g1

0xeb07,	// (0x0005da53) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x3_t4_g4_g2

0xf076,	// (0x0005dfc2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf076,	// (0x0005dfc2) list_medium_line_x3_t4_g4_g3

0x03c9,	// (0x0004f315) list_medium_line_x3_t4_g4_g4_ParamLimits

0x03c9,	// (0x0004f315) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0005ec5a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0005ec5a) list_medium_line_x3_t4_g4_g

0x03d5,	// (0x0004f321) list_medium_line_x3_t4_g4_t1_ParamLimits

0x03d5,	// (0x0004f321) list_medium_line_x3_t4_g4_t1

0x03ec,	// (0x0004f338) list_medium_line_x3_t4_g4_t2_ParamLimits

0x03ec,	// (0x0004f338) list_medium_line_x3_t4_g4_t2

0x0405,	// (0x0004f351) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0405,	// (0x0004f351) list_medium_line_x3_t4_g4_t3

0x041a,	// (0x0004f366) list_medium_line_x3_t4_g4_t4_ParamLimits

0x041a,	// (0x0004f366) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0005ec63) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0005ec63) list_medium_line_x3_t4_g4_t

0x0437,	// (0x0004f383) list_single_dyc_row_text_pane_t1_ParamLimits

0x0437,	// (0x0004f383) list_single_dyc_row_text_pane_t1

0x0480,	// (0x0004f3cc) list_single_dyc_row_text_pane_t2_ParamLimits

0x0480,	// (0x0004f3cc) list_single_dyc_row_text_pane_t2

0x868a,	// (0x000575d6) list_single_dyc_row_text_pane_t3_ParamLimits

0x868a,	// (0x000575d6) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0005ec6c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0005ec6c) list_single_dyc_row_text_pane_t

0x86ae,	// (0x000575fa) list_single_dyc_row_pane_g1_ParamLimits

0x86ae,	// (0x000575fa) list_single_dyc_row_pane_g1

0x86ba,	// (0x00057606) list_single_dyc_row_pane_g2_ParamLimits

0x86ba,	// (0x00057606) list_single_dyc_row_pane_g2

0x86c6,	// (0x00057612) list_single_dyc_row_pane_g3_ParamLimits

0x86c6,	// (0x00057612) list_single_dyc_row_pane_g3

0x86d2,	// (0x0005761e) list_single_dyc_row_pane_g4_ParamLimits

0x86d2,	// (0x0005761e) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0005ec79) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0005ec79) list_single_dyc_row_pane_g

0x86de,	// (0x0005762a) list_single_dyc_row_text_pane_ParamLimits

0x86de,	// (0x0005762a) list_single_dyc_row_text_pane

0x9a3c,	// (0x00058988) bg_sp_fs_scroll_pane

0xe703,	// (0x0005d64f) thumb_sp_fs_scroll_pane

0xf097,	// (0x0005dfe3) list_medium_line_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_g1

0x05b5,	// (0x0004f501) list_medium_line_t1_ParamLimits

0x05b5,	// (0x0004f501) list_medium_line_t1

0xeaef,	// (0x0005da3b) list_medium_line_x2_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_g1

0xeb07,	// (0x0005da53) list_medium_line_x2_g2_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0005ec82) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0005ec82) list_medium_line_x2_g

0x86fd,	// (0x00057649) list_medium_line_x2_t1_ParamLimits

0x86fd,	// (0x00057649) list_medium_line_x2_t1

0xeaef,	// (0x0005da3b) list_medium_line_x3_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x3_g1

0xeb07,	// (0x0005da53) list_medium_line_x3_g2_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0005ec82) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0005ec82) list_medium_line_x3_g

0x86fd,	// (0x00057649) list_medium_line_x3_t1_ParamLimits

0x86fd,	// (0x00057649) list_medium_line_x3_t1

0xe70c,	// (0x0005d658) thumb_sp_fs_scroll_pane_g1

0xe715,	// (0x0005d661) thumb_sp_fs_scroll_pane_g2

0xe71e,	// (0x0005d66a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0005ec87) thumb_sp_fs_scroll_pane_g

0xe70c,	// (0x0005d658) bg_sp_fs_scroll_pane_g1

0xe715,	// (0x0005d661) bg_sp_fs_scroll_pane_g2

0xe71e,	// (0x0005d66a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0005ec87) bg_sp_fs_scroll_pane_g

0xeaef,	// (0x0005da3b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeaef,	// (0x0005da3b) list_medium_line_x2_t3_g4_g1

0xf039,	// (0x0005df85) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf039,	// (0x0005df85) list_medium_line_x2_t3_g4_g2

0xeb07,	// (0x0005da53) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeb07,	// (0x0005da53) list_medium_line_x2_t3_g4_g3

0xeafb,	// (0x0005da47) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeafb,	// (0x0005da47) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0005e1f3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0005e1f3) list_medium_line_x2_t3_g4_g

0x05ca,	// (0x0004f516) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05ca,	// (0x0004f516) list_medium_line_x2_t3_g4_t1

0x05e0,	// (0x0004f52c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x05e0,	// (0x0004f52c) list_medium_line_x2_t3_g4_t2

0xf045,	// (0x0005df91) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf045,	// (0x0005df91) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0005ec8e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0005ec8e) list_medium_line_x2_t3_g4_t

0xf097,	// (0x0005dfe3) list_medium_line_g2_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_g2_g1

0xf0a3,	// (0x0005dfef) list_medium_line_g2_g2_ParamLimits

0xf0a3,	// (0x0005dfef) list_medium_line_g2_g2

0x0001,

0xfd49,	// (0x0005ec95) list_medium_line_g2_g_ParamLimits

0xfd49,	// (0x0005ec95) list_medium_line_g2_g

0x05fa,	// (0x0004f546) list_medium_line_g2_t1_ParamLimits

0x05fa,	// (0x0004f546) list_medium_line_g2_t1

0xf097,	// (0x0005dfe3) list_medium_line_t3_g2_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_t3_g2_g1

0xf0a3,	// (0x0005dfef) list_medium_line_t3_g2_g2_ParamLimits

0xf0a3,	// (0x0005dfef) list_medium_line_t3_g2_g2

0x0001,

0xfd49,	// (0x0005ec95) list_medium_line_t3_g2_g_ParamLimits

0xfd49,	// (0x0005ec95) list_medium_line_t3_g2_g

0x060f,	// (0x0004f55b) list_medium_line_t3_g2_t1_ParamLimits

0x060f,	// (0x0004f55b) list_medium_line_t3_g2_t1

0x0629,	// (0x0004f575) list_medium_line_t3_g2_t2_ParamLimits

0x0629,	// (0x0004f575) list_medium_line_t3_g2_t2

0x063f,	// (0x0004f58b) list_medium_line_t3_g2_t3_ParamLimits

0x063f,	// (0x0004f58b) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0005ec9a) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0005ec9a) list_medium_line_t3_g2_t

0x0276,	// (0x0004f1c2) list_medium_line_right_icon_g1

0x0659,	// (0x0004f5a5) list_medium_line_right_icon_t1

0xf097,	// (0x0005dfe3) list_medium_line_t2_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_t2_g1

0x0667,	// (0x0004f5b3) list_medium_line_t2_t1_ParamLimits

0x0667,	// (0x0004f5b3) list_medium_line_t2_t1

0x0681,	// (0x0004f5cd) list_medium_line_t2_t2_ParamLimits

0x0681,	// (0x0004f5cd) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0005eca1) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0005eca1) list_medium_line_t2_t

0xf097,	// (0x0005dfe3) list_medium_line_t3_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_t3_g1

0x069a,	// (0x0004f5e6) list_medium_line_t3_t1_ParamLimits

0x069a,	// (0x0004f5e6) list_medium_line_t3_t1

0x06b4,	// (0x0004f600) list_medium_line_t3_t2_ParamLimits

0x06b4,	// (0x0004f600) list_medium_line_t3_t2

0x06ca,	// (0x0004f616) list_medium_line_t3_t3_ParamLimits

0x06ca,	// (0x0004f616) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0005eca6) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0005eca6) list_medium_line_t3_t

0xf097,	// (0x0005dfe3) list_medium_line_g3_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_g3_g1

0x06df,	// (0x0004f62b) list_medium_line_g3_g2_ParamLimits

0x06df,	// (0x0004f62b) list_medium_line_g3_g2

0xf0a3,	// (0x0005dfef) list_medium_line_g3_g3_ParamLimits

0xf0a3,	// (0x0005dfef) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0005ecad) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0005ecad) list_medium_line_g3_g

0x06eb,	// (0x0004f637) list_medium_line_g3_t1_ParamLimits

0x06eb,	// (0x0004f637) list_medium_line_g3_t1

0xf097,	// (0x0005dfe3) list_medium_line_t2_g3_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_t2_g3_g1

0x06df,	// (0x0004f62b) list_medium_line_t2_g3_g2_ParamLimits

0x06df,	// (0x0004f62b) list_medium_line_t2_g3_g2

0xf0a3,	// (0x0005dfef) list_medium_line_t2_g3_g3_ParamLimits

0xf0a3,	// (0x0005dfef) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0005ecad) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0005ecad) list_medium_line_t2_g3_g

0x0700,	// (0x0004f64c) list_medium_line_t2_g3_t1_ParamLimits

0x0700,	// (0x0004f64c) list_medium_line_t2_g3_t1

0x071a,	// (0x0004f666) list_medium_line_t2_g3_t2_ParamLimits

0x071a,	// (0x0004f666) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0005ecb4) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0005ecb4) list_medium_line_t2_g3_t

0xf097,	// (0x0005dfe3) list_medium_line_t3_g3_g1_ParamLimits

0xf097,	// (0x0005dfe3) list_medium_line_t3_g3_g1

0x06df,	// (0x0004f62b) list_medium_line_t3_g3_g2_ParamLimits

0x06df,	// (0x0004f62b) list_medium_line_t3_g3_g2

0xf0a3,	// (0x0005dfef) list_medium_line_t3_g3_g3_ParamLimits

0xf0a3,	// (0x0005dfef) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0005ecad) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0005ecad) list_medium_line_t3_g3_g

0x0734,	// (0x0004f680) list_medium_line_t3_g3_t1_ParamLimits

0x0734,	// (0x0004f680) list_medium_line_t3_g3_t1

0x074d,	// (0x0004f699) list_medium_line_t3_g3_t2_ParamLimits

0x074d,	// (0x0004f699) list_medium_line_t3_g3_t2

0x0763,	// (0x0004f6af) list_medium_line_t3_g3_t3_ParamLimits

0x0763,	// (0x0004f6af) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0005ecb9) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0005ecb9) list_medium_line_t3_g3_t

0x0399,	// (0x0004f2e5) list_medium_line_right_iconx2_g1

0x0276,	// (0x0004f1c2) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0005ecc0) list_medium_line_right_iconx2_g

0x077d,	// (0x0004f6c9) list_medium_line_right_iconx2_t1

0x0399,	// (0x0004f2e5) list_medium_line_t2_right_iconx2_g1

0x0276,	// (0x0004f1c2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0005ecc0) list_medium_line_t2_right_iconx2_g

0x078b,	// (0x0004f6d7) list_medium_line_t2_right_iconx2_t1

0x079b,	// (0x0004f6e7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0005ecc5) list_medium_line_t2_right_iconx2_t

0x07ad,	// (0x0004f6f9) list_medium_line_x4_t4_t1

0x07bb,	// (0x0004f707) list_medium_line_x4_t4_t2

0x07cb,	// (0x0004f717) list_medium_line_x4_t4_t3

0x07db,	// (0x0004f727) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0005ecca) list_medium_line_x4_t4_t

0x8754,	// (0x000576a0) tport_appsw_pane_ParamLimits

0x8754,	// (0x000576a0) tport_appsw_pane

0x876b,	// (0x000576b7) tport_contact_pane_ParamLimits

0x876b,	// (0x000576b7) tport_contact_pane

0x8783,	// (0x000576cf) tport_listscroll_pane_ParamLimits

0x8783,	// (0x000576cf) tport_listscroll_pane

0x8797,	// (0x000576e3) cell_tport_appsw_pane_ParamLimits

0x8797,	// (0x000576e3) cell_tport_appsw_pane

0xd763,	// (0x0005c6af) tport_appsw_pane_g1_ParamLimits

0xd763,	// (0x0005c6af) tport_appsw_pane_g1

0xe727,	// (0x0005d673) tport_contact_pane_g1

0xe730,	// (0x0005d67c) tport_contact_pane_t1

0xe73e,	// (0x0005d68a) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0005ecd3) tport_contact_pane_t

0xe74c,	// (0x0005d698) list_tport_pane

0xe755,	// (0x0005d6a1) scroll_pane_cp_030

0x87e1,	// (0x0005772d) cell_tport_appsw_pane_g1

0x87f1,	// (0x0005773d) cell_tport_appsw_pane_t1

0x87ff,	// (0x0005774b) grid_highlight_pane_cp019

0x8807,	// (0x00057753) list_tport_double_graphic_pane_ParamLimits

0x8807,	// (0x00057753) list_tport_double_graphic_pane

0xae6b,	// (0x00059db7) list_highlight_pane_cp023_ParamLimits

0xae6b,	// (0x00059db7) list_highlight_pane_cp023

0x881e,	// (0x0005776a) list_tport_double_graphic_pane_g1_ParamLimits

0x881e,	// (0x0005776a) list_tport_double_graphic_pane_g1

0x882b,	// (0x00057777) list_tport_double_graphic_pane_t1_ParamLimits

0x882b,	// (0x00057777) list_tport_double_graphic_pane_t1

0x8840,	// (0x0005778c) list_tport_double_graphic_pane_t2_ParamLimits

0x8840,	// (0x0005778c) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0005ecdf) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0005ecdf) list_tport_double_graphic_pane_t

0x9a3c,	// (0x00058988) main_cale_note_pane

0x6702,	// (0x0005564e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6702,	// (0x0005564e) cell_vitu2_function_top_wide_pane_cp01

0x7fc1,	// (0x00056f0d) wait_bar_pane_cp05_ParamLimits

0xae6b,	// (0x00059db7) listscroll_cmail_pane

0xe75e,	// (0x0005d6aa) list_cmail_pane

0x8852,	// (0x0005779e) list_cmail_body_pane

0x8869,	// (0x000577b5) list_single_cmail_header_caption_pane

0xe76e,	// (0x0005d6ba) list_single_cmail_header_detail_pane_ParamLimits

0xe76e,	// (0x0005d6ba) list_single_cmail_header_detail_pane

0xe7a0,	// (0x0005d6ec) list_single_cmail_header_caption_pane_t1

0x07eb,	// (0x0004f737) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07eb,	// (0x0004f737) list_single_cmail_header_detail_pane_g1

0x8886,	// (0x000577d2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8886,	// (0x000577d2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0005ece4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0005ece4) list_single_cmail_header_detail_pane_g

0x8892,	// (0x000577de) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8892,	// (0x000577de) list_single_cmail_header_detail_pane_t1

0x88f2,	// (0x0005783e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x88f2,	// (0x0005783e) list_single_cmail_header_editor_pane_bg

0xe382,	// (0x0005d2ce) list_cmail_body_pane_g1

0xe7c4,	// (0x0005d710) list_cmail_body_pane_t1

0xd783,	// (0x0005c6cf) list_single_cmail_header_editor_pane_bg_g1

0xa672,	// (0x000595be) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd793,	// (0x0005c6df) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd78b,	// (0x0005c6d7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd9b6,	// (0x0005c902) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd7b3,	// (0x0005c6ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd7a3,	// (0x0005c6ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd7ab,	// (0x0005c6f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa652,	// (0x0005959e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8909,	// (0x00057855) calenote_gesture_pane_ParamLimits

0x8909,	// (0x00057855) calenote_gesture_pane

0x8929,	// (0x00057875) calenote_window_pane_ParamLimits

0x8929,	// (0x00057875) calenote_window_pane

0xe7d2,	// (0x0005d71e) popup_note_window_cp01

0x8945,	// (0x00057891) calenote_swipe_1_pane_ParamLimits

0x8945,	// (0x00057891) calenote_swipe_1_pane

0x84ea,	// (0x00057436) calenote_swipe_2_pane_ParamLimits

0x84ea,	// (0x00057436) calenote_swipe_2_pane

0xe59c,	// (0x0005d4e8) calenote_swipe_1_pane_g1_ParamLimits

0xe59c,	// (0x0005d4e8) calenote_swipe_1_pane_g1

0xe5a9,	// (0x0005d4f5) calenote_swipe_1_pane_g2_ParamLimits

0xe5a9,	// (0x0005d4f5) calenote_swipe_1_pane_g2

0x0001,

0xfcb3,	// (0x0005ebff) calenote_swipe_1_pane_g_ParamLimits

0xfcb3,	// (0x0005ebff) calenote_swipe_1_pane_g

0xe7e4,	// (0x0005d730) calenote_swipe_1_pane_t1_ParamLimits

0xe7e4,	// (0x0005d730) calenote_swipe_1_pane_t1

0xe59c,	// (0x0005d4e8) calenote_swipe_2_pane_g1_ParamLimits

0xe59c,	// (0x0005d4e8) calenote_swipe_2_pane_g1

0xe803,	// (0x0005d74f) calenote_swipe_2_pane_g2_ParamLimits

0xe803,	// (0x0005d74f) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0005ecf0) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0005ecf0) calenote_swipe_2_pane_g

0xe80f,	// (0x0005d75b) calenote_swipe_2_pane_t1_ParamLimits

0xe80f,	// (0x0005d75b) calenote_swipe_2_pane_t1

0x9a3c,	// (0x00058988) main_mup_navstr_pane

0x52f1,	// (0x0005423d) main_mup3_pane_t7_ParamLimits

0x52f1,	// (0x0005423d) main_mup3_pane_t7

0xaa7a,	// (0x000599c6) main_mp4_pane_g6_ParamLimits

0xaa7a,	// (0x000599c6) main_mp4_pane_g6

0xac3a,	// (0x00059b86) main_image3_pane_t4_ParamLimits

0xac3a,	// (0x00059b86) main_image3_pane_t4

0x895a,	// (0x000578a6) popup_navstr_preview_pane_ParamLimits

0x895a,	// (0x000578a6) popup_navstr_preview_pane

0x896a,	// (0x000578b6) scroll_navstr_pane_ParamLimits

0x896a,	// (0x000578b6) scroll_navstr_pane

0x9a3c,	// (0x00058988) bg_popup_preview_window_pane_cp04

0xe836,	// (0x0005d782) popup_navstr_preview_pane_t1

0x897e,	// (0x000578ca) scroll_navstr_pane_g1_ParamLimits

0x897e,	// (0x000578ca) scroll_navstr_pane_g1

0x8992,	// (0x000578de) scroll_navstr_pane_t1_ParamLimits

0x8992,	// (0x000578de) scroll_navstr_pane_t1

0xe7db,	// (0x0005d727) bg_button_pane_cp014

0xe7db,	// (0x0005d727) bg_button_pane_cp030

0x01d6,	// (0x0004f122) list_double_fisheye_pane_g4_ParamLimits

0x01d6,	// (0x0004f122) list_double_fisheye_pane_g4

0x01e2,	// (0x0004f12e) list_double_fisheye_pane_g5_ParamLimits

0x01e2,	// (0x0004f12e) list_double_fisheye_pane_g5

0xc2d2,	// (0x0005b21e) sp_fs_scroll_pane_cp03

0xe6b5,	// (0x0005d601) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6c1,	// (0x0005d60d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd0,	// (0x0005ec1c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8599,	// (0x000574e5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe766,	// (0x0005d6b2) sp_fs_scroll_pane_cp02

0xa367,	// (0x000592b3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa367,	// (0x000592b3) popup_sp_fs_calendar_preview_list_single_pane

0x9a3c,	// (0x00058988) main_cam6_pano_pane

0xae6b,	// (0x00059db7) main_mup3_pane_ParamLimits

0x9a3c,	// (0x00058988) main_phacti_pane

0x7e92,	// (0x00056dde) bg_button_pane_cp11

0x7eac,	// (0x00056df8) main_mobtv_info_pane_g2_ParamLimits

0x7eac,	// (0x00056df8) main_mobtv_info_pane_g2

0x0001,

0xfc30,	// (0x0005eb7c) main_mobtv_info_pane_g_ParamLimits

0xfc30,	// (0x0005eb7c) main_mobtv_info_pane_g

0x8089,	// (0x00056fd5) sc_clock_pane_t5_ParamLimits

0x8089,	// (0x00056fd5) sc_clock_pane_t5

0x82bd,	// (0x00057209) main_radioblah_pane_g1_ParamLimits

0xe4e8,	// (0x0005d434) main_radioblah_pane_t3_ParamLimits

0xe4e8,	// (0x0005d434) main_radioblah_pane_t3

0xe500,	// (0x0005d44c) main_radioblah_pane_t4_ParamLimits

0xe500,	// (0x0005d44c) main_radioblah_pane_t4

0x82e5,	// (0x00057231) main_radioblah_text_pane_ParamLimits

0x82e5,	// (0x00057231) main_radioblah_text_pane

0x82f7,	// (0x00057243) main_radioblah_info_pane_g1_ParamLimits

0x8390,	// (0x000572dc) main_radioblah_info_pane_t4_ParamLimits

0x8390,	// (0x000572dc) main_radioblah_info_pane_t4

0xae6b,	// (0x00059db7) main_sp_fs_calendar_pane

0x89a9,	// (0x000578f5) main_phacti_pane_g1

0x89b1,	// (0x000578fd) phacti_note_pane_ParamLimits

0x89b1,	// (0x000578fd) phacti_note_pane

0xe84d,	// (0x0005d799) phacti_term_pane_ParamLimits

0xe84d,	// (0x0005d799) phacti_term_pane

0xe862,	// (0x0005d7ae) phacti_note_pane_t1_ParamLimits

0xe862,	// (0x0005d7ae) phacti_note_pane_t1

0x89c5,	// (0x00057911) phacti_term_pane_g1

0x89cd,	// (0x00057919) phacti_term_pane_t1_ParamLimits

0x89cd,	// (0x00057919) phacti_term_pane_t1

0xe879,	// (0x0005d7c5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe881,	// (0x0005d7cd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0005ecfa) popup_sp_fs_calendar_preview_list_single_pane_g

0xe889,	// (0x0005d7d5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe889,	// (0x0005d7d5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe89f,	// (0x0005d7eb) aid_popup_sp_fs_bg_corner_pane

0xcd9f,	// (0x0005bceb) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a3c,	// (0x00058988) popup_sp_fs_calendar_preview_bg_pane

0xe8a7,	// (0x0005d7f3) popup_sp_fs_calendar_preview_list_pane

0xc967,	// (0x0005b8b3) bg_main_sp_fs_cale_pane_ParamLimits

0xc967,	// (0x0005b8b3) bg_main_sp_fs_cale_pane

0x8a61,	// (0x000579ad) listscroll_cale_mrui_pane_ParamLimits

0x8a61,	// (0x000579ad) listscroll_cale_mrui_pane

0x8a76,	// (0x000579c2) listscroll_sp_fs_schedule_track_pane

0x8a7f,	// (0x000579cb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a7f,	// (0x000579cb) main_sp_fs_ctrlbar_pane_cp01

0xe8af,	// (0x0005d7fb) main_sp_fs_ribbon_pane

0x8a92,	// (0x000579de) popup_sp_fs_cale_preview_window

0x8aa4,	// (0x000579f0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8aa4,	// (0x000579f0) list_single_sp_fs_schedule_track_pane

0xae6b,	// (0x00059db7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xae6b,	// (0x00059db7) bg_sp_fs_highlight_list_pane_cp03

0x8ab8,	// (0x00057a04) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ab8,	// (0x00057a04) list_single_sp_fs_schedule_track_pane_g1

0x8ac4,	// (0x00057a10) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ac4,	// (0x00057a10) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0005ecff) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0005ecff) list_single_sp_fs_schedule_track_pane_g

0x8ad0,	// (0x00057a1c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ad0,	// (0x00057a1c) list_single_sp_fs_schedule_track_pane_t1

0x8af2,	// (0x00057a3e) sp_fs_schedule_track_pane_ParamLimits

0x8af2,	// (0x00057a3e) sp_fs_schedule_track_pane

0xe8b7,	// (0x0005d803) sp_fs_schedule_track_pane_g1

0xe8bf,	// (0x0005d80b) sp_fs_schedule_track_pane_g2

0xe8c7,	// (0x0005d813) sp_fs_schedule_track_pane_g3

0xe8cf,	// (0x0005d81b) sp_fs_schedule_track_pane_g4

0xe8d7,	// (0x0005d823) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0005ed04) sp_fs_schedule_track_pane_g

0xd783,	// (0x0005c6cf) bg_sp_fs_schedule_viewer_highlight_g1

0xa672,	// (0x000595be) bg_sp_fs_schedule_viewer_highlight_g2

0xd78b,	// (0x0005c6d7) bg_sp_fs_schedule_viewer_highlight_g3

0xd793,	// (0x0005c6df) bg_sp_fs_schedule_viewer_highlight_g4

0xd9b6,	// (0x0005c902) bg_sp_fs_schedule_viewer_highlight_g5

0xd7a3,	// (0x0005c6ef) bg_sp_fs_schedule_viewer_highlight_g6

0xd7ab,	// (0x0005c6f7) bg_sp_fs_schedule_viewer_highlight_g7

0xd7b3,	// (0x0005c6ff) bg_sp_fs_schedule_viewer_highlight_g8

0xa652,	// (0x0005959e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0005ed0f) bg_sp_fs_schedule_viewer_highlight_g

0x9a3c,	// (0x00058988) bg_main_sp_fs_ribbon_pane

0x8b07,	// (0x00057a53) main_sp_fs_ribbon_pane_g1

0xe8df,	// (0x0005d82b) main_sp_fs_ribbon_pane_t1

0x8b10,	// (0x00057a5c) main_sp_fs_ribbon_pane_t2

0xe8ee,	// (0x0005d83a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0005ed22) main_sp_fs_ribbon_pane_t

0xe8fd,	// (0x0005d849) main_sp_fs_ribbon_scheduler_pane

0xe905,	// (0x0005d851) bg_main_sp_fs_ribbon_pane_g1

0xe90e,	// (0x0005d85a) bg_main_sp_fs_ribbon_pane_g2

0xe917,	// (0x0005d863) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0005ed29) bg_main_sp_fs_ribbon_pane_g

0xe91f,	// (0x0005d86b) main_sp_fs_ribbon_scheduler_pane_g1

0xe928,	// (0x0005d874) main_sp_fs_ribbon_scheduler_pane_g2

0xe931,	// (0x0005d87d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0005ed30) main_sp_fs_ribbon_scheduler_pane_g

0xe93a,	// (0x0005d886) list_cale_mrui_pane

0x8b1f,	// (0x00057a6b) sp_fs_scroll_pane_cp07_ParamLimits

0x8b1f,	// (0x00057a6b) sp_fs_scroll_pane_cp07

0x8b3b,	// (0x00057a87) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b3b,	// (0x00057a87) bg_sp_fs_schedule_viewer_highlight

0xe947,	// (0x0005d893) list_single_sp_fs_schedule_track_pane_cp01

0xe94f,	// (0x0005d89b) list_sp_fs_schedule_track_pane

0xe957,	// (0x0005d8a3) sp_fs_scroll_pane_cp06_ParamLimits

0xe957,	// (0x0005d8a3) sp_fs_scroll_pane_cp06

0xcd9f,	// (0x0005bceb) bgmain_sp_fs_calendar_pane_g1

0x0803,	// (0x0004f74f) list_single_cale_mrui_pane_ParamLimits

0x0803,	// (0x0004f74f) list_single_cale_mrui_pane

0x8b4d,	// (0x00057a99) list_single_cale_mrui_row_pane_ParamLimits

0x8b4d,	// (0x00057a99) list_single_cale_mrui_row_pane

0x8b5a,	// (0x00057aa6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b5a,	// (0x00057aa6) list_single_cale_mrui_row_pane_g1

0x8b92,	// (0x00057ade) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b92,	// (0x00057ade) list_single_cale_mrui_row_pane_t1

0x0827,	// (0x0004f773) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0827,	// (0x0004f773) list_single_cale_mrui_row_pane_t2

0x8ba4,	// (0x00057af0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8ba4,	// (0x00057af0) list_single_cale_mrui_row_pane_t3

0x8bd3,	// (0x00057b1f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8bd3,	// (0x00057b1f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0005ed3e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0005ed3e) list_single_cale_mrui_row_pane_t

0x088d,	// (0x0004f7d9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x088d,	// (0x0004f7d9) list_single_cmail_header_editor_pane_bg_cp01

0x08b1,	// (0x0004f7fd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x08b1,	// (0x0004f7fd) list_single_cmail_header_editor_pane_bg_cp02

0x8c02,	// (0x00057b4e) main_radioblah_text_pane_t1_ParamLimits

0x8c02,	// (0x00057b4e) main_radioblah_text_pane_t1

0xe976,	// (0x0005d8c2) cam6_indi_pane_cp01

0xe97e,	// (0x0005d8ca) cam6_mode_pane_cp01

0xe986,	// (0x0005d8d2) cam6_pano_pane

0xe98f,	// (0x0005d8db) cam6_zoom_pane_cp01

0xe999,	// (0x0005d8e5) cam6_pano_image_pane

0xe9a2,	// (0x0005d8ee) cam6_pano_pane_g1

0xe382,	// (0x0005d2ce) cam6_pano_pane_g2

0xe9ab,	// (0x0005d8f7) cam6_pano_pane_g3

0xe9b4,	// (0x0005d900) cam6_pano_pane_g4

0xd336,	// (0x0005c282) cam6_pano_pane_g5

0xe9bd,	// (0x0005d909) cam6_pano_pane_g6

0xe9c5,	// (0x0005d911) cam6_pano_pane_g7

0xe9cd,	// (0x0005d919) cam6_pano_pane_g8

0xe9d6,	// (0x0005d922) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0005ed47) cam6_pano_pane_g

0x9a3c,	// (0x00058988) main_browser_tag_pane

0xe82e,	// (0x0005d77a) grid_navstr_albumart_pane

0xe9e1,	// (0x0005d92d) cell_navstr_albumart_pane_ParamLimits

0xe9e1,	// (0x0005d92d) cell_navstr_albumart_pane

0xe9fd,	// (0x0005d949) cell_navstr_albumart_pane_g1

0xc774,	// (0x0005b6c0) cell_navstr_albumart_pane_g2

0xc784,	// (0x0005b6d0) cell_navstr_albumart_pane_g3

0xc77c,	// (0x0005b6c8) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0005ed5a) cell_navstr_albumart_pane_g

0x8c1d,	// (0x00057b69) bt_list_pane_ParamLimits

0x8c1d,	// (0x00057b69) bt_list_pane

0x8c33,	// (0x00057b7f) bt_list_pane_t1

0x8c42,	// (0x00057b8e) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0005ed63) bt_list_pane_t

0x9a3c,	// (0x00058988) main_cale_prevew_pane

0x8c51,	// (0x00057b9d) popup_cale_preview_window_ParamLimits

0x8c51,	// (0x00057b9d) popup_cale_preview_window

0xae6b,	// (0x00059db7) bg_popup_preview_window_pane_cp05_ParamLimits

0xae6b,	// (0x00059db7) bg_popup_preview_window_pane_cp05

0xea05,	// (0x0005d951) list_cale_preview_pane_ParamLimits

0xea05,	// (0x0005d951) list_cale_preview_pane

0x8c6e,	// (0x00057bba) list_double_cale_preview_pane_ParamLimits

0x8c6e,	// (0x00057bba) list_double_cale_preview_pane

0x8c82,	// (0x00057bce) list_single_cale_preview_pane_ParamLimits

0x8c82,	// (0x00057bce) list_single_cale_preview_pane

0x8c9a,	// (0x00057be6) list_single_cale_preview_pane_g1

0x8ca2,	// (0x00057bee) list_single_cale_preview_pane_t1_ParamLimits

0x8ca2,	// (0x00057bee) list_single_cale_preview_pane_t1

0x8cb7,	// (0x00057c03) list_double_cale_preview_pane_g1

0x8cbf,	// (0x00057c0b) list_double_cale_preview_pane_t1_ParamLimits

0x8cbf,	// (0x00057c0b) list_double_cale_preview_pane_t1

0x8cd4,	// (0x00057c20) list_double_cale_preview_pane_t2_ParamLimits

0x8cd4,	// (0x00057c20) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0005ed68) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0005ed68) list_double_cale_preview_pane_t

0x9a3c,	// (0x00058988) main_ezdial_pane

0xae6b,	// (0x00059db7) main_sp_fs_email_pane_ParamLimits

0x8504,	// (0x00057450) cmail_ddmenu_btn01_pane_ParamLimits

0x8504,	// (0x00057450) cmail_ddmenu_btn01_pane

0x8517,	// (0x00057463) cmail_ddmenu_btn02_pane_ParamLimits

0x8517,	// (0x00057463) cmail_ddmenu_btn02_pane

0x853a,	// (0x00057486) cmail_ddmenu_btn03_pane_ParamLimits

0x853a,	// (0x00057486) cmail_ddmenu_btn03_pane

0x85d8,	// (0x00057524) main_sp_fs_ctrlbar_pane_ParamLimits

0x85fc,	// (0x00057548) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8852,	// (0x0005779e) list_cmail_body_pane_ParamLimits

0xe7ae,	// (0x0005d6fa) bg_button_pane_cp12

0xe7b7,	// (0x0005d703) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7b7,	// (0x0005d703) list_single_cmail_header_detail_pane_g3

0x88ce,	// (0x0005781a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x88ce,	// (0x0005781a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0005eceb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0005eceb) list_single_cmail_header_detail_pane_t

0x89e2,	// (0x0005792e) phacti_term_pane_t2_ParamLimits

0x89e2,	// (0x0005792e) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0005ecf5) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0005ecf5) phacti_term_pane_t

0xea11,	// (0x0005d95d) aid_size_list_single_double

0x8cec,	// (0x00057c38) popup_ezdial_listscroll_window

0x8d08,	// (0x00057c54) popup_number_entry_window_cp01

0xa40b,	// (0x00059357) bg_popup_call_pane_cp09

0xea1d,	// (0x0005d969) ezdial_list_pane

0xea25,	// (0x0005d971) scroll_pane_cp23

0xc967,	// (0x0005b8b3) bg_button_pane_cp028_ParamLimits

0xc967,	// (0x0005b8b3) bg_button_pane_cp028

0x8d16,	// (0x00057c62) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8d16,	// (0x00057c62) cmail_ddmenu_btn01_pane_g1

0x8d25,	// (0x00057c71) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8d25,	// (0x00057c71) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0005ed6d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0005ed6d) cmail_ddmenu_btn01_pane_g

0xea2d,	// (0x0005d979) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2d,	// (0x0005d979) cmail_ddmenu_btn01_pane_t1

0xc967,	// (0x0005b8b3) bg_button_pane_cp029_ParamLimits

0xc967,	// (0x0005b8b3) bg_button_pane_cp029

0x8d35,	// (0x00057c81) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8d35,	// (0x00057c81) cmail_ddmenu_btn02_pane_g1

0x8d50,	// (0x00057c9c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8d50,	// (0x00057c9c) cmail_ddmenu_btn02_pane_t1

0xae6b,	// (0x00059db7) bg_button_pane_cp031_ParamLimits

0xae6b,	// (0x00059db7) bg_button_pane_cp031

0x8d35,	// (0x00057c81) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8d35,	// (0x00057c81) cmail_ddmenu_btn03_pane_g1

0x8d50,	// (0x00057c9c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8d50,	// (0x00057c9c) cmail_ddmenu_btn03_pane_t1

0x5ed2,	// (0x00054e1e) cell_dialer2_keypad_pane_t1_ParamLimits

0x5eec,	// (0x00054e38) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5eec,	// (0x00054e38) cell_dialer2_keypad_pane_t1_copy1

0x7cb3,	// (0x00056bff) ncimui_group_button_pane

0xae6b,	// (0x00059db7) main_sp_fs_calendar_pane_ParamLimits

0x8869,	// (0x000577b5) list_single_cmail_header_caption_pane_ParamLimits

0x8a15,	// (0x00057961) aid_recal_txt_sm_pane

0x9a3c,	// (0x00058988) mian_recal_day_pane

0x8a92,	// (0x000579de) popup_sp_fs_cale_preview_window_ParamLimits

0xea42,	// (0x0005d98e) list_recal_day_pane

0x8d93,	// (0x00057cdf) list_single_recal_day_pane_ParamLimits

0x8d93,	// (0x00057cdf) list_single_recal_day_pane

0xea69,	// (0x0005d9b5) list_single_recal_day_pane_g1_ParamLimits

0xea69,	// (0x0005d9b5) list_single_recal_day_pane_g1

0x8da5,	// (0x00057cf1) list_single_recal_day_pane_g2_ParamLimits

0x8da5,	// (0x00057cf1) list_single_recal_day_pane_g2

0x8db1,	// (0x00057cfd) list_single_recal_day_pane_g3_ParamLimits

0x8db1,	// (0x00057cfd) list_single_recal_day_pane_g3

0x08cf,	// (0x0004f81b) list_single_recal_day_pane_g4_ParamLimits

0x08cf,	// (0x0004f81b) list_single_recal_day_pane_g4

0x8dbd,	// (0x00057d09) list_single_recal_day_pane_g5_ParamLimits

0x8dbd,	// (0x00057d09) list_single_recal_day_pane_g5

0x8dc9,	// (0x00057d15) list_single_recal_day_pane_g6_ParamLimits

0x8dc9,	// (0x00057d15) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0005ed7c) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0005ed7c) list_single_recal_day_pane_g

0x8ddd,	// (0x00057d29) list_single_recal_day_pane_t1

0x8def,	// (0x00057d3b) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0005ed87) list_single_recal_day_pane_t

0x8e01,	// (0x00057d4d) ncimui_query_button_pane_ParamLimits

0x8e01,	// (0x00057d4d) ncimui_query_button_pane

0x8e11,	// (0x00057d5d) ncimui_query_button_pane_t1_ParamLimits

0x8e11,	// (0x00057d5d) ncimui_query_button_pane_t1

0xea75,	// (0x0005d9c1) ncimui_query_button_pane_t2_ParamLimits

0xea75,	// (0x0005d9c1) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0005ed8c) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0005ed8c) ncimui_query_button_pane_t

0x8e24,	// (0x00057d70) query_button_pane_ParamLimits

0x8e24,	// (0x00057d70) query_button_pane

0x9a3c,	// (0x00058988) bg_button_pane_cp0028

0xea88,	// (0x0005d9d4) query_button_pane_t1

0x3e9c,	// (0x00052de8) main_tport_pane_ParamLimits

0x8713,	// (0x0005765f) bg_popup_window_pane_cp01_ParamLimits

0x8713,	// (0x0005765f) bg_popup_window_pane_cp01

0x872c,	// (0x00057678) heading_pane_cp08_ParamLimits

0x872c,	// (0x00057678) heading_pane_cp08

0x873f,	// (0x0005768b) heading_pane_cp07_ParamLimits

0x873f,	// (0x0005768b) heading_pane_cp07

0x87e1,	// (0x0005772d) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0005ecd8) cell_tport_appsw_pane_g

0xfc41,	// (0x0004eb8d) input_candi_list_open_g1

0xaf23,	// (0x00059e6f) list_cale_time_pane_g6_ParamLimits

0xaf23,	// (0x00059e6f) list_cale_time_pane_g6

0x4c78,	// (0x00053bc4) aid_size_touch_calib_1_ParamLimits

0x4c78,	// (0x00053bc4) aid_size_touch_calib_1

0x4c8a,	// (0x00053bd6) aid_size_touch_calib_2_ParamLimits

0x4c8a,	// (0x00053bd6) aid_size_touch_calib_2

0x4ca2,	// (0x00053bee) aid_size_touch_calib_3_ParamLimits

0x4ca2,	// (0x00053bee) aid_size_touch_calib_3

0x4cc0,	// (0x00053c0c) aid_size_touch_calib_4_ParamLimits

0x4cc0,	// (0x00053c0c) aid_size_touch_calib_4

0x4cd8,	// (0x00053c24) main_touch_calib_button_group_pane_ParamLimits

0x4cd8,	// (0x00053c24) main_touch_calib_button_group_pane

0x4cf0,	// (0x00053c3c) main_touch_calib_pane_g1_ParamLimits

0x4d02,	// (0x00053c4e) main_touch_calib_pane_g2_ParamLimits

0x4d14,	// (0x00053c60) main_touch_calib_pane_g3_ParamLimits

0x4d26,	// (0x00053c72) main_touch_calib_pane_g4_ParamLimits

0xf73d,	// (0x0005e689) main_touch_calib_pane_g_ParamLimits

0x4d38,	// (0x00053c84) main_touch_calib_pane_t1_ParamLimits

0x4d52,	// (0x00053c9e) main_touch_calib_pane_t2_ParamLimits

0x4d6c,	// (0x00053cb8) main_touch_calib_pane_t3_ParamLimits

0x4d80,	// (0x00053ccc) main_touch_calib_pane_t4_ParamLimits

0x4d96,	// (0x00053ce2) main_touch_calib_pane_t5_ParamLimits

0xf746,	// (0x0005e692) main_touch_calib_pane_t_ParamLimits

0xd0c6,	// (0x0005c012) list_single_fp_cale_pane_g3_ParamLimits

0xd0c6,	// (0x0005c012) list_single_fp_cale_pane_g3

0xae6b,	// (0x00059db7) bg_button_pane_cp012_ParamLimits

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp03_ParamLimits

0x6f1f,	// (0x00055e6b) cell_vitu2_function_top_pane_g1_ParamLimits

0xae6b,	// (0x00059db7) bg_vkb2_func_pane_cp04_ParamLimits

0x7c3e,	// (0x00056b8a) main_ncimui_button_group_pane_ParamLimits

0x7c3e,	// (0x00056b8a) main_ncimui_button_group_pane

0x7c9e,	// (0x00056bea) main_ncimui_pane_t3_ParamLimits

0x7c9e,	// (0x00056bea) main_ncimui_pane_t3

0xe844,	// (0x0005d790) phacti_button_group_pane

0xea11,	// (0x0005d95d) aid_size_list_single_double_ParamLimits

0x8cec,	// (0x00057c38) popup_ezdial_listscroll_window_ParamLimits

0x8d08,	// (0x00057c54) popup_number_entry_window_cp01_ParamLimits

0x8e37,	// (0x00057d83) phacti_button_pane_ParamLimits

0x8e37,	// (0x00057d83) phacti_button_pane

0x9a3c,	// (0x00058988) bg_button_pane_cp14

0xea96,	// (0x0005d9e2) phacti_button_pane_t1

0x8e48,	// (0x00057d94) main_touch_calib_button_pane_ParamLimits

0x8e48,	// (0x00057d94) main_touch_calib_button_pane

0xa1ee,	// (0x0005913a) bg_button_pane_cp18_ParamLimits

0xa1ee,	// (0x0005913a) bg_button_pane_cp18

0xeaa4,	// (0x0005d9f0) main_touch_calib_button_pane_t1_ParamLimits

0xeaa4,	// (0x0005d9f0) main_touch_calib_button_pane_t1

0xeaba,	// (0x0005da06) main_touch_calib_button_pane_t2_ParamLimits

0xeaba,	// (0x0005da06) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0005ed91) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0005ed91) main_touch_calib_button_pane_t

0x9a3c,	// (0x00058988) cell_ncimui_button_pane

0x9a3c,	// (0x00058988) bg_button_pane_cp032

0xeb41,	// (0x0005da8d) cell_ncimui_button_pane_t1

0xac18,	// (0x00059b64) image3_infobar_pane_ParamLimits

0xac18,	// (0x00059b64) image3_infobar_pane

0x80b5,	// (0x00057001) fs_bigclock_status_pane_ParamLimits

0x80b5,	// (0x00057001) fs_bigclock_status_pane

0x80c2,	// (0x0005700e) main_fs_bigclock_clock_pane_ParamLimits

0x80c2,	// (0x0005700e) main_fs_bigclock_clock_pane

0x80f4,	// (0x00057040) main_fs_bigclock_indi_pane_ParamLimits

0x80f4,	// (0x00057040) main_fs_bigclock_indi_pane

0x8134,	// (0x00057080) main_fs_bigclock_swipe_pane_ParamLimits

0x8134,	// (0x00057080) main_fs_bigclock_swipe_pane

0x9a3c,	// (0x00058988) main_fs_clock_dumped_data

0x8180,	// (0x000570cc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8180,	// (0x000570cc) list_single_fs_bigclock_indicator_pane_g1

0x8199,	// (0x000570e5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8199,	// (0x000570e5) list_single_fs_bigclock_indicator_pane_g2

0x81b3,	// (0x000570ff) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x81b3,	// (0x000570ff) list_single_fs_bigclock_indicator_pane_g3

0x81cd,	// (0x00057119) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x81cd,	// (0x00057119) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc64,	// (0x0005ebb0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc64,	// (0x0005ebb0) list_single_fs_bigclock_indicator_pane_g

0x81fc,	// (0x00057148) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x81fc,	// (0x00057148) list_single_fs_bigclock_indicator_pane_t1

0x8224,	// (0x00057170) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8224,	// (0x00057170) list_single_fs_bigclock_indicator_pane_t2

0x824c,	// (0x00057198) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x824c,	// (0x00057198) list_single_fs_bigclock_indicator_pane_t3

0x8274,	// (0x000571c0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8274,	// (0x000571c0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc6f,	// (0x0005ebbb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc6f,	// (0x0005ebbb) list_single_fs_bigclock_indicator_pane_t

0xeb4f,	// (0x0005da9b) image3_infobar_fav_pane_ParamLimits

0xeb4f,	// (0x0005da9b) image3_infobar_fav_pane

0xeb5f,	// (0x0005daab) image3_infobar_loc_pane_ParamLimits

0xeb5f,	// (0x0005daab) image3_infobar_loc_pane

0xeb75,	// (0x0005dac1) image3_infobar_time_pane_ParamLimits

0xeb75,	// (0x0005dac1) image3_infobar_time_pane

0xcd9f,	// (0x0005bceb) image3_infobar_time_pane_g1

0xeb85,	// (0x0005dad1) image3_infobar_time_pane_t1

0xcd9f,	// (0x0005bceb) image3_infobar_loc_pane_g1

0xeb93,	// (0x0005dadf) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0005ed96) image3_infobar_loc_pane_g

0xeb9b,	// (0x0005dae7) image3_infobar_loc_pane_t1

0xcd9f,	// (0x0005bceb) image3_infobar_fav_pane_g1

0xeba9,	// (0x0005daf5) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0005ed9b) image3_infobar_fav_pane_g

0xebb1,	// (0x0005dafd) fs_bigclock_status_battery_pane

0xebba,	// (0x0005db06) fs_bigclock_status_signal_pane

0xebc3,	// (0x0005db0f) fs_bigclock_status_title_pane

0xebcc,	// (0x0005db18) fs_bigclock_status_signal_pane_g1

0xebd5,	// (0x0005db21) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0005eda0) fs_bigclock_status_signal_pane_g

0xebdd,	// (0x0005db29) fs_bigclock_status_battery_pane_g1

0xebe6,	// (0x0005db32) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0005eda5) fs_bigclock_status_battery_pane_g

0xebee,	// (0x0005db3a) fs_bigclock_status_title_pane_t1

0x8e5d,	// (0x00057da9) main_fs_bigclock_clock_pane_g1

0x8e5d,	// (0x00057da9) main_fs_bigclock_clock_pane_g2

0x8e70,	// (0x00057dbc) main_fs_bigclock_clock_pane_g3

0x8e70,	// (0x00057dbc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0005edaa) main_fs_bigclock_clock_pane_g

0x8e87,	// (0x00057dd3) main_fs_bigclock_clock_pane_t1

0x8e9d,	// (0x00057de9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0005edb3) main_fs_bigclock_clock_pane_t

0xebfc,	// (0x0005db48) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebfc,	// (0x0005db48) list_single_fs_bigclock_indicator_pane

0xec0d,	// (0x0005db59) list_single_fs_bigclock_pane_ParamLimits

0xec0d,	// (0x0005db59) list_single_fs_bigclock_pane

0xec33,	// (0x0005db7f) main_fs_bigclock_indicator_pane_t1

0xec42,	// (0x0005db8e) list_single_fs_bigclock_pane_g1

0xec4a,	// (0x0005db96) list_single_fs_bigclock_pane_t1

0xcd9f,	// (0x0005bceb) main_fs_bigclock_swipe_pane_g1

0xec8d,	// (0x0005dbd9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0005edc4) main_fs_bigclock_swipe_pane_g

0xec95,	// (0x0005dbe1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec95,	// (0x0005dbe1) main_fs_bigclock_swipe_pane_t1

0x2d18,	// (0x00051c64) call_type_pane_ParamLimits

0x9a3c,	// (0x00058988) main_btmg_pane

0x8b86,	// (0x00057ad2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b86,	// (0x00057ad2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0005ed37) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0005ed37) list_single_cale_mrui_row_pane_g

0x8d81,	// (0x00057ccd) list_recal_vselct_arw_lo_pane

0xea61,	// (0x0005d9ad) list_recal_vselct_arw_up_pane

0x8d89,	// (0x00057cd5) list_recal_vselct_pane

0x8eff,	// (0x00057e4b) btmg_button_pane

0x8f09,	// (0x00057e55) main_btmg_pane_g1

0x9a3c,	// (0x00058988) bg_button_pane_cp044

0xecb2,	// (0x0005dbfe) btmg_button_pane_t1

0xc953,	// (0x0005b89f) aid_listscroll_gen

0xae6b,	// (0x00059db7) main_cntbar_detail_pane

0xe75e,	// (0x0005d6aa) list_cmail_folder_pane

0xc2d2,	// (0x0005b21e) sp_fs_scroll_pane_cp03_ParamLimits

0x08e7,	// (0x0004f833) list_single_fs_dyc_pane_cp01_ParamLimits

0x08e7,	// (0x0004f833) list_single_fs_dyc_pane_cp01

0xecc0,	// (0x0005dc0c) aid_size_cmail_indent

0x8f13,	// (0x00057e5f) list_single_dyc_row_pane_cp01

0x8f50,	// (0x00057e9c) cntbar_detail_list_pane_ParamLimits

0x8f50,	// (0x00057e9c) cntbar_detail_list_pane

0x8fa2,	// (0x00057eee) main_cntbar_detail_cont_pane_ParamLimits

0x8fa2,	// (0x00057eee) main_cntbar_detail_cont_pane

0xc2d2,	// (0x0005b21e) scroll_pane_cp032_ParamLimits

0xc2d2,	// (0x0005b21e) scroll_pane_cp032

0x8fb6,	// (0x00057f02) cntbar_detail_list_event_pane_ParamLimits

0x8fb6,	// (0x00057f02) cntbar_detail_list_event_pane

0x8f62,	// (0x00057eae) cntbar_detail_list_shct_pane

0xa6c0,	// (0x0005960c) aid_list_gen

0xecc9,	// (0x0005dc15) aid_scroll

0xecd2,	// (0x0005dc1e) aid_size_touch_scroll_bar

0x752a,	// (0x00056476) aid_list_double

0x0902,	// (0x0004f84e) aid_list_single

0x752a,	// (0x00056476) aid_list_single_lg

0x090b,	// (0x0004f857) aid_list_z_g_a_sm

0x0913,	// (0x0004f85f) aid_list_z_g_d

0x091b,	// (0x0004f867) aid_txt_z_prm

0x0929,	// (0x0004f875) aid_txt_z_prm_cp01

0x0937,	// (0x0004f883) aid_txt_z_sec

0x8fc6,	// (0x00057f12) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8fc6,	// (0x00057f12) main_cntbar_detail_cont_pane_g1

0x8fda,	// (0x00057f26) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8fda,	// (0x00057f26) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0005edc9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0005edc9) main_cntbar_detail_cont_pane_g

0xecdb,	// (0x0005dc27) main_cntbar_detail_cont_pane_t1

0xece9,	// (0x0005dc35) main_cntbar_detail_cont_pane_t2

0xecf7,	// (0x0005dc43) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0005edce) main_cntbar_detail_cont_pane_t

0x8fea,	// (0x00057f36) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8fea,	// (0x00057f36) cell_cntbar_detail_list_shct_pane

0xed05,	// (0x0005dc51) cntbar_detail_list_shct_pane_g1

0xed0e,	// (0x0005dc5a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0005edd5) cntbar_detail_list_shct_pane_g

0x8ffc,	// (0x00057f48) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ffc,	// (0x00057f48) cntbar_detail_list_event_pane_g1

0x9008,	// (0x00057f54) cntbar_detail_list_event_pane_g2_ParamLimits

0x9008,	// (0x00057f54) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0005edda) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0005edda) cntbar_detail_list_event_pane_g

0x9076,	// (0x00057fc2) cntbar_detail_list_event_pane_t1_ParamLimits

0x9076,	// (0x00057fc2) cntbar_detail_list_event_pane_t1

0x908b,	// (0x00057fd7) cntbar_detail_list_event_pane_t2_ParamLimits

0x908b,	// (0x00057fd7) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0005ede7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0005ede7) cntbar_detail_list_event_pane_t

0xcd9f,	// (0x0005bceb) cell_cntbar_detail_list_shct_pane_g1

0xb4fc,	// (0x0005a448) navi_pane_mv_g3

0xae6b,	// (0x00059db7) main_cntbar_detail_pane_ParamLimits

0x9a3c,	// (0x00058988) main_notif_wgt_pane

0xaa08,	// (0x00059954) aid_tch_main_mp4_pane_g4

0xac10,	// (0x00059b5c) popup_slider_window_cp02

0x8d77,	// (0x00057cc3) list_recal_day_event_pane

0x8f1c,	// (0x00057e68) cntbar_detail_btn_pane_ParamLimits

0x8f1c,	// (0x00057e68) cntbar_detail_btn_pane

0x8f35,	// (0x00057e81) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f35,	// (0x00057e81) cntbar_detail_btn_pane_cp01

0x8f62,	// (0x00057eae) cntbar_detail_list_shct_pane_ParamLimits

0x8f72,	// (0x00057ebe) cntbar_detail_pane_g1_ParamLimits

0x8f72,	// (0x00057ebe) cntbar_detail_pane_g1

0x8f86,	// (0x00057ed2) cntbar_detail_pane_t1_ParamLimits

0x8f86,	// (0x00057ed2) cntbar_detail_pane_t1

0x9014,	// (0x00057f60) cntbar_detail_list_event_pane_g3_ParamLimits

0x9014,	// (0x00057f60) cntbar_detail_list_event_pane_g3

0x902c,	// (0x00057f78) cntbar_detail_list_event_pane_g4_ParamLimits

0x902c,	// (0x00057f78) cntbar_detail_list_event_pane_g4

0x9044,	// (0x00057f90) cntbar_detail_list_event_pane_g5_ParamLimits

0x9044,	// (0x00057f90) cntbar_detail_list_event_pane_g5

0x905c,	// (0x00057fa8) cntbar_detail_list_event_pane_g6_ParamLimits

0x905c,	// (0x00057fa8) cntbar_detail_list_event_pane_g6

0x90a0,	// (0x00057fec) cntbar_detail_list_event_pane_t3_ParamLimits

0x90a0,	// (0x00057fec) cntbar_detail_list_event_pane_t3

0x90b2,	// (0x00057ffe) popup_notif_wgt_window_ParamLimits

0x90b2,	// (0x00057ffe) popup_notif_wgt_window

0x90cb,	// (0x00058017) popup_submenu_window_cp01_ParamLimits

0x90cb,	// (0x00058017) popup_submenu_window_cp01

0xa40b,	// (0x00059357) bg_popup_window_pane_cp10

0xed17,	// (0x0005dc63) listscroll_notif_wgt_pane

0xed29,	// (0x0005dc75) list_notif_wgt_window

0xed32,	// (0x0005dc7e) scroll_pane_cp033

0x90df,	// (0x0005802b) list_notif_wgt_row_pane_ParamLimits

0x90df,	// (0x0005802b) list_notif_wgt_row_pane

0xed3b,	// (0x0005dc87) aid_size_list_notif_wgt_del

0xed48,	// (0x0005dc94) list_notif_wgt_row_pane_g1

0xed54,	// (0x0005dca0) list_notif_wgt_row_pane_g2

0xed63,	// (0x0005dcaf) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0005edee) list_notif_wgt_row_pane_g

0xed70,	// (0x0005dcbc) list_notif_wgt_row_pane_t1

0xed86,	// (0x0005dcd2) list_notif_wgt_row_pane_t2

0xed98,	// (0x0005dce4) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0005edf5) list_notif_wgt_row_pane_t

0xd9be,	// (0x0005c90a) list_recal_day_event_pane_g1

0xedaa,	// (0x0005dcf6) list_recal_day_event_pane_t1

0x9a3c,	// (0x00058988) bg_button_pane_cp045

0x90ef,	// (0x0005803b) cntbar_detail_btn_pane_t1

0xc967,	// (0x0005b8b3) main_callh_pane_ParamLimits

0xc967,	// (0x0005b8b3) main_callh_pane

0x9a3c,	// (0x00058988) main_coverflow0_pane

0x9a3c,	// (0x00058988) main_wgtman_pane

0x8155,	// (0x000570a1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8155,	// (0x000570a1) main_fs_bigclock_unlock_btn_pane

0x87d9,	// (0x00057725) bg_button_pane_cp16

0x87e9,	// (0x00057735) cell_tport_appsw_pane_g3

0x90fd,	// (0x00058049) cf0_flow_pane_ParamLimits

0x90fd,	// (0x00058049) cf0_flow_pane

0xedb9,	// (0x0005dd05) listscroll_cf0_pane

0xedc4,	// (0x0005dd10) main_cf0_pane_g1

0x9112,	// (0x0005805e) main_cf0_pane_t1_ParamLimits

0x9112,	// (0x0005805e) main_cf0_pane_t1

0x9129,	// (0x00058075) main_cf0_pane_t2_ParamLimits

0x9129,	// (0x00058075) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0005ee01) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0005ee01) main_cf0_pane_t

0xedd6,	// (0x0005dd22) scroll_pane_cp11

0x9140,	// (0x0005808c) cf0_flow_pane_g1

0x914c,	// (0x00058098) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0005ee06) cf0_flow_pane_g

0x9158,	// (0x000580a4) cf0_flow_pane_t1

0x9a3c,	// (0x00058988) main_call6_pane

0x9a3c,	// (0x00058988) main_calllock_pane

0x916a,	// (0x000580b6) call6_btn_grp_pane_ParamLimits

0x916a,	// (0x000580b6) call6_btn_grp_pane

0x9184,	// (0x000580d0) call6_pane_g1_ParamLimits

0x9184,	// (0x000580d0) call6_pane_g1

0x919d,	// (0x000580e9) popup_call6_1st_window_ParamLimits

0x919d,	// (0x000580e9) popup_call6_1st_window

0x91b1,	// (0x000580fd) popup_call6_2nd_window_ParamLimits

0x91b1,	// (0x000580fd) popup_call6_2nd_window

0x91c5,	// (0x00058111) cell_call6_btn_pane_ParamLimits

0x91c5,	// (0x00058111) cell_call6_btn_pane

0xa40b,	// (0x00059357) bg_popup_call2_in_pane_cp03

0xede1,	// (0x0005dd2d) popup_call6_1st_window_g1

0xede9,	// (0x0005dd35) popup_call6_1st_window_g2

0xedf1,	// (0x0005dd3d) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0005ee0b) popup_call6_1st_window_g

0xedf9,	// (0x0005dd45) popup_call6_1st_window_t1

0xee08,	// (0x0005dd54) popup_call6_1st_window_t2

0xee18,	// (0x0005dd64) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0005ee12) popup_call6_1st_window_t

0xa40b,	// (0x00059357) bg_popup_call2_in_pane_cp04

0xede1,	// (0x0005dd2d) popup_call6_2nd_window_g1

0xede9,	// (0x0005dd35) popup_call6_2nd_window_g2

0xedf1,	// (0x0005dd3d) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0005ee0b) popup_call6_2nd_window_g

0xedf9,	// (0x0005dd45) popup_call6_2nd_window_t1

0x9a3c,	// (0x00058988) bg_button_pane_cp15

0xee28,	// (0x0005dd74) cell_call6_btn_pane_g1

0xae5c,	// (0x00059da8) cell_call6_btn_pane_t1

0x91d9,	// (0x00058125) listscroll_wgtman_pane_ParamLimits

0x91d9,	// (0x00058125) listscroll_wgtman_pane

0x91fa,	// (0x00058146) wgtman_btn_pane_ParamLimits

0x91fa,	// (0x00058146) wgtman_btn_pane

0xb30e,	// (0x0005a25a) aid_scroll_copy1

0xee31,	// (0x0005dd7d) list_wgtman_pane

0x923d,	// (0x00058189) wgtman_btn_pane_g1_ParamLimits

0x923d,	// (0x00058189) wgtman_btn_pane_g1

0x9269,	// (0x000581b5) wgtman_btn_pane_t1_ParamLimits

0x9269,	// (0x000581b5) wgtman_btn_pane_t1

0xee3b,	// (0x0005dd87) wgtman_btn_pane_t2_ParamLimits

0xee3b,	// (0x0005dd87) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0005ee19) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0005ee19) wgtman_btn_pane_t

0x92a6,	// (0x000581f2) listrow_wgtman_pane_ParamLimits

0x92a6,	// (0x000581f2) listrow_wgtman_pane

0x92ba,	// (0x00058206) listrow_wgtman_pane_g1

0x92c7,	// (0x00058213) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0005ee1e) listrow_wgtman_pane_g

0x0945,	// (0x0004f891) listrow_wgtman_pane_t1

0x095d,	// (0x0004f8a9) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0005ee23) listrow_wgtman_pane_t

0x0983,	// (0x0004f8cf) wait_bar_pane_cp09

0xee52,	// (0x0005dd9e) main_calllock_btn_pane

0xee5c,	// (0x0005dda8) main_calllock_pane_g1

0x9a3c,	// (0x00058988) bg_button_pane_cp17

0xee28,	// (0x0005dd74) main_calllock_btn_pane_g1

0xee68,	// (0x0005ddb4) main_calllock_btn_pane_t1

0x9a3c,	// (0x00058988) main_dialer3_pane

0x9a3c,	// (0x00058988) main_fmrd2_pane

0xcd9f,	// (0x0005bceb) main_fs_bigclock_unlock_btn_pane_g1

0x92ed,	// (0x00058239) main_fs_bigclock_unlock_btn_pane_t1

0x92fb,	// (0x00058247) area_fmrd2_info_pane_ParamLimits

0x92fb,	// (0x00058247) area_fmrd2_info_pane

0x930c,	// (0x00058258) area_fmrd2_visual_pane_ParamLimits

0x930c,	// (0x00058258) area_fmrd2_visual_pane

0x931a,	// (0x00058266) fmrd2_indi_pane_ParamLimits

0x931a,	// (0x00058266) fmrd2_indi_pane

0x9327,	// (0x00058273) area_fmrd2_visual_pane_g1

0x932f,	// (0x0005827b) area_fmrd2_visual_pane_t1

0x933f,	// (0x0005828b) area_fmrd2_visual_pane_t2

0x934f,	// (0x0005829b) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0005ee2d) area_fmrd2_visual_pane_t

0x935f,	// (0x000582ab) area_fmrd2_info_pane_g1

0x9367,	// (0x000582b3) area_fmrd2_info_pane_t1

0x9377,	// (0x000582c3) area_fmrd2_info_pane_t2

0x9387,	// (0x000582d3) area_fmrd2_info_pane_t3

0x9397,	// (0x000582e3) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0005ee34) area_fmrd2_info_pane_t

0x93a7,	// (0x000582f3) fmrd2_indi_pane_t1

0x93b7,	// (0x00058303) fmrd2_indi_pane_t2

0x93c7,	// (0x00058313) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0005ee3d) fmrd2_indi_pane_t

0x81de,	// (0x0005712a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x81de,	// (0x0005712a) list_single_fs_bigclock_indicator_pane_g5

0x8293,	// (0x000571df) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8293,	// (0x000571df) list_single_fs_bigclock_indicator_pane_t5

0x89f7,	// (0x00057943) aid_cell_bcale_month_pane_ParamLimits

0x89f7,	// (0x00057943) aid_cell_bcale_month_pane

0x8a1e,	// (0x0005796a) bcale_month_pane_ParamLimits

0x8a1e,	// (0x0005796a) bcale_month_pane

0x8a42,	// (0x0005798e) bcale_preview_pane_ParamLimits

0x8a42,	// (0x0005798e) bcale_preview_pane

0xec4a,	// (0x0005db96) list_single_fs_bigclock_pane_t1_ParamLimits

0xec69,	// (0x0005dbb5) list_single_fs_bigclock_pane_t2_ParamLimits

0xec69,	// (0x0005dbb5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0005edbf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005edbf) list_single_fs_bigclock_pane_t

0x92e5,	// (0x00058231) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0005ee28) main_fs_bigclock_unlock_btn_pane_g

0x93d7,	// (0x00058323) aid_dia3_key_size_ParamLimits

0x93d7,	// (0x00058323) aid_dia3_key_size

0x93eb,	// (0x00058337) aid_dia3_listrow_size_ParamLimits

0x93eb,	// (0x00058337) aid_dia3_listrow_size

0x9405,	// (0x00058351) dia3_keypad_fun_pane_ParamLimits

0x9405,	// (0x00058351) dia3_keypad_fun_pane

0x9421,	// (0x0005836d) dia3_keypad_num_pane_ParamLimits

0x9421,	// (0x0005836d) dia3_keypad_num_pane

0x943d,	// (0x00058389) dia3_listscroll_pane_ParamLimits

0x943d,	// (0x00058389) dia3_listscroll_pane

0x9453,	// (0x0005839f) dia3_numentry_pane_ParamLimits

0x9453,	// (0x0005839f) dia3_numentry_pane

0xee77,	// (0x0005ddc3) dia3_list_pane

0x946c,	// (0x000583b8) scroll_pane_cp12

0x9a3c,	// (0x00058988) bg_dia3_numentry_pane

0x9477,	// (0x000583c3) dia3_numentry_pane_t1

0x9486,	// (0x000583d2) cell_dia3_key_num_pane

0x948e,	// (0x000583da) cell_dia3_key0_fun_pane_ParamLimits

0x948e,	// (0x000583da) cell_dia3_key0_fun_pane

0x94a2,	// (0x000583ee) cell_dia3_key1_fun_pane_ParamLimits

0x94a2,	// (0x000583ee) cell_dia3_key1_fun_pane

0x94b9,	// (0x00058405) dia3_listrow_pane

0xe23e,	// (0x0005d18a) bg_dia3_numentry_pane_g1

0x9a3c,	// (0x00058988) bg_button_pane_cp21

0x94cb,	// (0x00058417) cell_dia3_key_num_pane_t1

0x94d9,	// (0x00058425) cell_dia3_key_num_pane_t2

0x94e8,	// (0x00058434) cell_dia3_key_num_pane_t3

0x94f7,	// (0x00058443) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0005ee44) cell_dia3_key_num_pane_t

0x9a3c,	// (0x00058988) bg_button_pane_cp19

0x9506,	// (0x00058452) cell_dia3_key0_fun_pane_g1

0x9a3c,	// (0x00058988) bg_button_pane_cp20

0x9506,	// (0x00058452) cell_dia3_key1_fun_pane_g1

0x950e,	// (0x0005845a) area_left_week_number_pane

0x951c,	// (0x00058468) area_top_day_name_pane

0x952f,	// (0x0005847b) frame_month_view_pane

0xee82,	// (0x0005ddce) grid_month_view_pane

0x9544,	// (0x00058490) cell_top_day_name_pane_ParamLimits

0x9544,	// (0x00058490) cell_top_day_name_pane

0x9573,	// (0x000584bf) cell_area_left_week_number_pane_ParamLimits

0x9573,	// (0x000584bf) cell_area_left_week_number_pane

0x9589,	// (0x000584d5) cell_month_view_pane_ParamLimits

0x9589,	// (0x000584d5) cell_month_view_pane

0xee90,	// (0x0005dddc) frm_month_g1

0x95ba,	// (0x00058506) frm_month_g2

0x95cd,	// (0x00058519) frm_month_g3

0x95e0,	// (0x0005852c) frm_month_g4

0x95f3,	// (0x0005853f) frm_month_g5

0x9606,	// (0x00058552) frm_month_g6

0x961b,	// (0x00058567) frm_month_g7

0xee9d,	// (0x0005dde9) frm_month_g8

0x9630,	// (0x0005857c) frm_month_g9

0x9640,	// (0x0005858c) frm_month_g10

0x9650,	// (0x0005859c) frm_month_g11

0x9660,	// (0x000585ac) frm_month_g12

0x9672,	// (0x000585be) frm_month_g13

0x9686,	// (0x000585d2) frm_month_g14

0x969a,	// (0x000585e6) frm_month_g15

0x96ae,	// (0x000585fa) frm_month_g16

0x000f,

0xff01,	// (0x0005ee4d) frm_month_g

0xeeaa,	// (0x0005ddf6) cell_top_day_name_pane_t1

0x96c2,	// (0x0005860e) cell_area_left_week_number_pane_g1

0x96ce,	// (0x0005861a) cell_area_left_week_number_pane_t1

0xcfc6,	// (0x0005bf12) cell_month_view_pane_g1

0x96e1,	// (0x0005862d) cell_month_view_pane_t1

0x9a3c,	// (0x00058988) main_fps_pane

0xe67b,	// (0x0005d5c7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe67b,	// (0x0005d5c7) cmail_ddmenu_btn02_pane_cp1

0xe697,	// (0x0005d5e3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe697,	// (0x0005d5e3) cmail_ddmenu_btn02_pane_cp2

0x8d44,	// (0x00057c90) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8d44,	// (0x00057c90) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0005ed72) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0005ed72) cmail_ddmenu_btn02_pane_g

0x8d65,	// (0x00057cb1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d65,	// (0x00057cb1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0005ed77) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0005ed77) cmail_ddmenu_btn02_pane_t

0x96f4,	// (0x00058640) fps_text_pane_ParamLimits

0x96f4,	// (0x00058640) fps_text_pane

0x970b,	// (0x00058657) main_fps_pane_g1_ParamLimits

0x970b,	// (0x00058657) main_fps_pane_g1

0x9723,	// (0x0005866f) wait_bar_pane_cp010_ParamLimits

0x9723,	// (0x0005866f) wait_bar_pane_cp010

0x9736,	// (0x00058682) fps_text_pane_t1_ParamLimits

0x9736,	// (0x00058682) fps_text_pane_t1

0xeb13,	// (0x0005da5f) cam4_image_uncrop_pane_g1

0xeb1c,	// (0x0005da68) cam4_image_uncrop_pane_g2

0x641a,	// (0x00055366) cam4_image_uncrop_pane_g3

0x6423,	// (0x0005536f) cam4_image_uncrop_pane_g4

0x0003,

0xf8de,	// (0x0005e82a) cam4_image_uncrop_pane_g

0x94b9,	// (0x00058405) dia3_listrow_pane_ParamLimits

0x9a3c,	// (0x00058988) main_phob2_pane

0x87ac,	// (0x000576f8) cell_tport_appsw_pane_cp02_ParamLimits

0x87ac,	// (0x000576f8) cell_tport_appsw_pane_cp02

0x87c0,	// (0x0005770c) cell_tport_appsw_pane_cp03_ParamLimits

0x87c0,	// (0x0005770c) cell_tport_appsw_pane_cp03

0x9a3c,	// (0x00058988) phob2_contact_card_pane

0x9a3c,	// (0x00058988) phob2_listscroll_pane

0xeebd,	// (0x0005de09) phob2_list_pane

0xeec5,	// (0x0005de11) scroll_pane_cp034

0x974e,	// (0x0005869a) phob2_cc_data_pane_ParamLimits

0x974e,	// (0x0005869a) phob2_cc_data_pane

0x9767,	// (0x000586b3) phob2_cc_listscroll_pane_ParamLimits

0x9767,	// (0x000586b3) phob2_cc_listscroll_pane

0x92a6,	// (0x000581f2) list_double_large_graphic_phob2_pane_ParamLimits

0x92a6,	// (0x000581f2) list_double_large_graphic_phob2_pane

0x9789,	// (0x000586d5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9789,	// (0x000586d5) list_double_large_graphic_phob2_pane_g1

0x0995,	// (0x0004f8e1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0995,	// (0x0004f8e1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0005ee6e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0005ee6e) list_double_large_graphic_phob2_pane_g

0x09a1,	// (0x0004f8ed) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x09a1,	// (0x0004f8ed) list_double_large_graphic_phob2_pane_t1

0x09b6,	// (0x0004f902) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x09b6,	// (0x0004f902) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0005ee73) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0005ee73) list_double_large_graphic_phob2_pane_t

0x9a3c,	// (0x00058988) list_highlight_pane_cp024

0x979f,	// (0x000586eb) phob2_cc_button_pane

0x97a9,	// (0x000586f5) phob2_cc_data_pane_g1_ParamLimits

0x97a9,	// (0x000586f5) phob2_cc_data_pane_g1

0x97c1,	// (0x0005870d) phob2_cc_data_pane_g2_ParamLimits

0x97c1,	// (0x0005870d) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0005ee78) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0005ee78) phob2_cc_data_pane_g

0x97d1,	// (0x0005871d) phob2_cc_data_pane_t1_ParamLimits

0x97d1,	// (0x0005871d) phob2_cc_data_pane_t1

0x97f3,	// (0x0005873f) phob2_cc_data_pane_t2_ParamLimits

0x97f3,	// (0x0005873f) phob2_cc_data_pane_t2

0x9815,	// (0x00058761) phob2_cc_data_pane_t3_ParamLimits

0x9815,	// (0x00058761) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0005ee7d) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0005ee7d) phob2_cc_data_pane_t

0xeecd,	// (0x0005de19) phob2_cc_list_pane_ParamLimits

0xeecd,	// (0x0005de19) phob2_cc_list_pane

0xda67,	// (0x0005c9b3) scroll_pane_cp035_ParamLimits

0xda67,	// (0x0005c9b3) scroll_pane_cp035

0xae6b,	// (0x00059db7) bg_button_pane_cp033

0xeed9,	// (0x0005de25) phob2_cc_button_pane_g1

0xeee5,	// (0x0005de31) phob2_cc_button_pane_t1

0xeefa,	// (0x0005de46) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0005ee84) phob2_cc_button_pane_t

0x9837,	// (0x00058783) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9837,	// (0x00058783) list_double_large_graphic_phob2_cc_pane

0x9875,	// (0x000587c1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9875,	// (0x000587c1) list_double_large_graphic_phob2_cc_pane_g1

0x09c8,	// (0x0004f914) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09c8,	// (0x0004f914) list_double_large_graphic_phob2_cc_pane_g2

0x09d4,	// (0x0004f920) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09d4,	// (0x0004f920) list_double_large_graphic_phob2_cc_pane_g3

0x09e0,	// (0x0004f92c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09e0,	// (0x0004f92c) list_double_large_graphic_phob2_cc_pane_g4

0x09ec,	// (0x0004f938) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x09ec,	// (0x0004f938) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0005ee89) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0005ee89) list_double_large_graphic_phob2_cc_pane_g

0x09f8,	// (0x0004f944) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x09f8,	// (0x0004f944) list_double_large_graphic_phob2_cc_pane_t1

0x0a21,	// (0x0004f96d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0a21,	// (0x0004f96d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0005ee94) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0005ee94) list_double_large_graphic_phob2_cc_pane_t

0xef0c,	// (0x0005de58) list_highlight_pane_cp025_ParamLimits

0xef0c,	// (0x0005de58) list_highlight_pane_cp025

0xae6b,	// (0x00059db7) bg_button_pane_cp033_ParamLimits

0xeed9,	// (0x0005de25) phob2_cc_button_pane_g1_ParamLimits

0xeee5,	// (0x0005de31) phob2_cc_button_pane_t1_ParamLimits

0xeefa,	// (0x0005de46) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0005ee84) phob2_cc_button_pane_t_ParamLimits

0x0cd9,	// (0x0004fc25) popup_wgtman_window

0xd8a1,	// (0x0005c7ed) scroll_pane_cp038

0x921f,	// (0x0005816b) wgtman_btn_pane_cp_01_ParamLimits

0x921f,	// (0x0005816b) wgtman_btn_pane_cp_01

0xef1a,	// (0x0005de66) wgtman_content_pane

0xef23,	// (0x0005de6f) wgtman_heading_pane

0x9a3c,	// (0x00058988) bg_heading_pane_cp02

0xef2c,	// (0x0005de78) wgtman_heading_pane_g1

0xef34,	// (0x0005de80) wgtman_heading_pane_t1

0xef42,	// (0x0005de8e) scroll_pane_cp036

0xef4a,	// (0x0005de96) wgtman_list_pane

0xeb27,	// (0x0005da73) wgtman_list_pane_t1_ParamLimits

0xeb27,	// (0x0005da73) wgtman_list_pane_t1

0xac9e,	// (0x00059bea) cam4_grid_pane

0xff1a,	// (0x0004ee66) bg_button_pane_cp015_ParamLimits

0x70ca,	// (0x00056016) bg_button_pane_cp016_ParamLimits

0x70dd,	// (0x00056029) bg_button_pane_cp017_ParamLimits

0xff62,	// (0x0004eeae) popup_vitu2_query_window_g3_ParamLimits

0xff62,	// (0x0004eeae) popup_vitu2_query_window_g3

0xffdd,	// (0x0004ef29) popup_vitu2_query_window_t6_ParamLimits

0xffdd,	// (0x0004ef29) popup_vitu2_query_window_t6

0x0008,	// (0x0004ef54) popup_vitu2_query_window_t7_ParamLimits

0x0008,	// (0x0004ef54) popup_vitu2_query_window_t7

0xeb13,	// (0x0005da5f) cam4_grid_pane_g1

0xeb1c,	// (0x0005da68) cam4_grid_pane_g2

0xef52,	// (0x0005de9e) cam4_grid_pane_g3

0xef5b,	// (0x0005dea7) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0005ee99) cam4_grid_pane_g

0x1b89,	// (0x00050ad5) aid_placing_vt_slider_lsc_ParamLimits

0x1e76,	// (0x00050dc2) vidtel_button_pane_ParamLimits

0x1e76,	// (0x00050dc2) vidtel_button_pane

0x9a3c,	// (0x00058988) bg_button_pane_cp034

0xef66,	// (0x0005deb2) vidtel_button_pane_g1

0xef6e,	// (0x0005deba) vidtel_button_pane_t1

0xd9ae,	// (0x0005c8fa) aid_size_vtel_slider_touch

0xda67,	// (0x0005c9b3) scroll_pane_cp039

0x7e1c,	// (0x00056d68) ncim_query_button_pane_cp01_ParamLimits

0x7e3b,	// (0x00056d87) ncimui_query_pane_g1_ParamLimits

0xae6b,	// (0x00059db7) input_focus_pane_cp012_ParamLimits

0xe27c,	// (0x0005d1c8) ncim_query_entry_pane_t1_ParamLimits

0xda67,	// (0x0005c9b3) scroll_pane_cp039_ParamLimits

0xb3e5,	// (0x0005a331) navi_pane_bcale_mc_g1

0xb3ed,	// (0x0005a339) navi_pane_bcale_mc_t1

0xe6cd,	// (0x0005d619) main_sp_fs_email_pane_g1

0xe6d9,	// (0x0005d625) main_sp_fs_email_pane_g2

0x0001,

0xfcd9,	// (0x0005ec25) main_sp_fs_email_pane_g

0xe969,	// (0x0005d8b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe969,	// (0x0005d8b5) list_single_cale_mrui_row_pane_g3

0x08dd,	// (0x0004f829) list_single_recal_day_pane_g5_event_pane

0x8dd5,	// (0x00057d21) list_single_recal_day_pane_g7

0xef84,	// (0x0005ded0) list_recal_day_event_pane_cp01

0xef8d,	// (0x0005ded9) list_recal_vselct_arw_lo_pane_cp01

0xef95,	// (0x0005dee1) list_recal_vselct_arw_up_pane_cp01

0xef9d,	// (0x0005dee9) list_recal_vselct_pane_cp01

0xd9be,	// (0x0005c90a) list_recal_day_event_pane_cp01_g1

0x9881,	// (0x000587cd) list_recal_day_event_pane_cp01_t1

0x8ddd,	// (0x00057d29) list_single_recal_day_pane_t1_ParamLimits

0x8def,	// (0x00057d3b) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0005ed87) list_single_recal_day_pane_t_ParamLimits

0xa107,	// (0x00059053) bg_notes_pane_ParamLimits

0xa1b2,	// (0x000590fe) list_notes_pane_ParamLimits

0x0ff1,	// (0x0004ff3d) scroll_pane_cp06_ParamLimits

0xa1ee,	// (0x0005913a) main_notes_pane_ParamLimits

0xae6b,	// (0x00059db7) main_welc_pane

0x98a6,	// (0x000587f2) main_welc_body_pane_ParamLimits

0x98a6,	// (0x000587f2) main_welc_body_pane

0x98c5,	// (0x00058811) main_welc_opti_pane_ParamLimits

0x98c5,	// (0x00058811) main_welc_opti_pane

0x991d,	// (0x00058869) main_welc_pane_t1_ParamLimits

0x991d,	// (0x00058869) main_welc_pane_t1

0xead8,	// (0x0005da24) main_welc_body_row_pane_ParamLimits

0xead8,	// (0x0005da24) main_welc_body_row_pane

0xd6d6,	// (0x0005c622) main_welc_opti_row_pane_ParamLimits

0xd6d6,	// (0x0005c622) main_welc_opti_row_pane

0xefa7,	// (0x0005def3) main_welc_opti_row_pane_g1

0x999f,	// (0x000588eb) main_welc_opti_row_pane_t1

0xefaf,	// (0x0005defb) main_welc_body_row_pane_t1

0xed21,	// (0x0005dc6d) popup_notif_wgt_heading_pane

0xed3b,	// (0x0005dc87) aid_size_list_notif_wgt_del_ParamLimits

0xed48,	// (0x0005dc94) list_notif_wgt_row_pane_g1_ParamLimits

0xed54,	// (0x0005dca0) list_notif_wgt_row_pane_g2_ParamLimits

0xed63,	// (0x0005dcaf) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0005edee) list_notif_wgt_row_pane_g_ParamLimits

0xed70,	// (0x0005dcbc) list_notif_wgt_row_pane_t1_ParamLimits

0xed86,	// (0x0005dcd2) list_notif_wgt_row_pane_t2_ParamLimits

0xed98,	// (0x0005dce4) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0005edf5) list_notif_wgt_row_pane_t_ParamLimits

0x92ba,	// (0x00058206) listrow_wgtman_pane_g1_ParamLimits

0x92c7,	// (0x00058213) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0005ee1e) listrow_wgtman_pane_g_ParamLimits

0x0945,	// (0x0004f891) listrow_wgtman_pane_t1_ParamLimits

0x095d,	// (0x0004f8a9) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0005ee23) listrow_wgtman_pane_t_ParamLimits

0x0983,	// (0x0004f8cf) wait_bar_pane_cp09_ParamLimits

0x9a3c,	// (0x00058988) bg_popup_heading_pane_cp02

0xefbe,	// (0x0005df0a) popup_notif_wgt_heading_pane_g1

0xefc6,	// (0x0005df12) popup_notif_wgt_heading_pane_t1

0x9a3c,	// (0x00058988) main_vids_pane

0x9a3c,	// (0x00058988) vids_listscroll_pane

0x99ae,	// (0x000588fa) scroll_pane_cp040

0x9a3c,	// (0x00058988) vids_list_pane

0x99b9,	// (0x00058905) vids_list_double_pane_ParamLimits

0x99b9,	// (0x00058905) vids_list_double_pane

0x99ca,	// (0x00058916) vids_list_double_pane_g1

0x99d3,	// (0x0005891f) vids_list_double_pane_t1

0x99e3,	// (0x0005892f) vids_list_double_pane_t2

0x0001,

0xff64,	// (0x0005eeb0) vids_list_double_pane_t

0xae6b,	// (0x00059db7) main_ncimui_pane_ParamLimits

0x7c52,	// (0x00056b9e) main_ncimui_pane_g1_ParamLimits

0x7c5e,	// (0x00056baa) main_ncimui_pane_g2_ParamLimits

0x7c5e,	// (0x00056baa) main_ncimui_pane_g2

0x0001,

0xfbda,	// (0x0005eb26) main_ncimui_pane_g_ParamLimits

0xfbda,	// (0x0005eb26) main_ncimui_pane_g

0x98e4,	// (0x00058830) main_welc_pane_g1_ParamLimits

0x98e4,	// (0x00058830) main_welc_pane_g1

0x98f9,	// (0x00058845) main_welc_pane_g2_ParamLimits

0x98f9,	// (0x00058845) main_welc_pane_g2

0x0002,

0xff56,	// (0x0005eea2) main_welc_pane_g_ParamLimits

0xff56,	// (0x0005eea2) main_welc_pane_g

0xa107,	// (0x00059053) listscroll_mce_pane_ParamLimits

0xb53c,	// (0x0005a488) wait_bar_pane_cp10

0xc95b,	// (0x0005b8a7) main_cale_day_pane_ParamLimits

0xc95b,	// (0x0005b8a7) main_cale_week_pane_ParamLimits

0xa107,	// (0x00059053) main_messa_pane_ParamLimits

0x5685,	// (0x000545d1) main_clock2_btn_pane_ParamLimits

0x5685,	// (0x000545d1) main_clock2_btn_pane

0xd14e,	// (0x0005c09a) main_clock2_btn_pane_cp01_ParamLimits

0xd14e,	// (0x0005c09a) main_clock2_btn_pane_cp01

0xe93a,	// (0x0005d886) list_cale_mrui_pane_ParamLimits

0xedce,	// (0x0005dd1a) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0005edfc) main_cf0_pane_g

0x950e,	// (0x0005845a) area_left_week_number_pane_ParamLimits

0x951c,	// (0x00058468) area_top_day_name_pane_ParamLimits

0x952f,	// (0x0005847b) frame_month_view_pane_ParamLimits

0xee82,	// (0x0005ddce) grid_month_view_pane_ParamLimits

0xee90,	// (0x0005dddc) frm_month_g1_ParamLimits

0x95ba,	// (0x00058506) frm_month_g2_ParamLimits

0x95cd,	// (0x00058519) frm_month_g3_ParamLimits

0x95e0,	// (0x0005852c) frm_month_g4_ParamLimits

0x95f3,	// (0x0005853f) frm_month_g5_ParamLimits

0x9606,	// (0x00058552) frm_month_g6_ParamLimits

0x961b,	// (0x00058567) frm_month_g7_ParamLimits

0xee9d,	// (0x0005dde9) frm_month_g8_ParamLimits

0x9630,	// (0x0005857c) frm_month_g9_ParamLimits

0x9640,	// (0x0005858c) frm_month_g10_ParamLimits

0x9650,	// (0x0005859c) frm_month_g11_ParamLimits

0x9660,	// (0x000585ac) frm_month_g12_ParamLimits

0x9672,	// (0x000585be) frm_month_g13_ParamLimits

0x9686,	// (0x000585d2) frm_month_g14_ParamLimits

0x969a,	// (0x000585e6) frm_month_g15_ParamLimits

0x96ae,	// (0x000585fa) frm_month_g16_ParamLimits

0xff01,	// (0x0005ee4d) frm_month_g_ParamLimits

0xeeaa,	// (0x0005ddf6) cell_top_day_name_pane_t1_ParamLimits

0x96c2,	// (0x0005860e) cell_area_left_week_number_pane_g1_ParamLimits

0x96ce,	// (0x0005861a) cell_area_left_week_number_pane_t1_ParamLimits

0xcfc6,	// (0x0005bf12) cell_month_view_pane_g1_ParamLimits

0x96e1,	// (0x0005862d) cell_month_view_pane_t1_ParamLimits

0xa0ff,	// (0x0005904b) main_clock2_btn_pane_g1

0xefd4,	// (0x0005df20) main_clock2_btn_pane_t1

0xae6b,	// (0x00059db7) listscroll_cmail_pane_ParamLimits

0xe6cd,	// (0x0005d619) main_sp_fs_email_pane_g1_ParamLimits

0xe6d9,	// (0x0005d625) main_sp_fs_email_pane_g2_ParamLimits

0xfcd9,	// (0x0005ec25) main_sp_fs_email_pane_g_ParamLimits

0xea42,	// (0x0005d98e) list_recal_day_pane_ParamLimits

0xea53,	// (0x0005d99f) mian_recal_day_pane_t1

0x04f6,	// (0x0004f442) list_single_dyc_row_text_pane_t4_ParamLimits

0x04f6,	// (0x0004f442) list_single_dyc_row_text_pane_t4

0x053f,	// (0x0004f48b) list_single_dyc_row_text_pane_t5_ParamLimits

0x053f,	// (0x0004f48b) list_single_dyc_row_text_pane_t5

0x869c,	// (0x000575e8) list_single_dyc_row_text_pane_t6_ParamLimits

0x869c,	// (0x000575e8) list_single_dyc_row_text_pane_t6

0x2c59,	// (0x00051ba5) aid_mgn_list_cale_time_pane

0xae6b,	// (0x00059db7) main_gallery2_pane_ParamLimits

0xd162,	// (0x0005c0ae) main_clock2_pane_cp01_t1

0xd170,	// (0x0005c0bc) main_clock2_pane_cp01_t3

0x0001,

0xf7b0,	// (0x0005e6fc) main_clock2_pane_cp01_t

0x13ff,	// (0x0005034b) cale_week_scroll_pane_g16_ParamLimits

0x13ff,	// (0x0005034b) cale_week_scroll_pane_g16

0xa40b,	// (0x00059357) vorec_slider_pane

0xef6e,	// (0x0005deba) vidtel_button_pane_t1_ParamLimits

0x8e5d,	// (0x00057da9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8e5d,	// (0x00057da9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8e70,	// (0x00057dbc) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8e70,	// (0x00057dbc) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0005edaa) main_fs_bigclock_clock_pane_g_ParamLimits

0x8e87,	// (0x00057dd3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8e9d,	// (0x00057de9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0005edb3) main_fs_bigclock_clock_pane_t_ParamLimits

0x4dfc,	// (0x00053d48) main_mup3_lyrics_pane_ParamLimits

0x4dfc,	// (0x00053d48) main_mup3_lyrics_pane

0x9a19,	// (0x00058965) main_mup3_lyrics_pane_t1_ParamLimits

0x9a19,	// (0x00058965) main_mup3_lyrics_pane_t1

0xa9f2,	// (0x0005993e) aid_main_mp4_pane_t1_area

0xa9fc,	// (0x00059948) aid_main_mp4_pane_t2_area

0xaaa8,	// (0x000599f4) main_mp4_pane_g7_ParamLimits

0xaaa8,	// (0x000599f4) main_mp4_pane_g7

0xaab4,	// (0x00059a00) main_mp4_pane_g8_ParamLimits

0xaab4,	// (0x00059a00) main_mp4_pane_g8

0x61dd,	// (0x00055129) aid_call6_pane_g1_size

0x9865,	// (0x000587b1) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9865,	// (0x000587b1) list_double_large_graphic_phob2_other_pane

0x9a34,	// (0x00058980) list_double_large_graphic_phob2_other_pane_g1

0x9a3c,	// (0x00058988) list_highlight_pane_cp026

0xae6b,	// (0x00059db7) main_welc_pane_ParamLimits

0x8565,	// (0x000574b1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8565,	// (0x000574b1) main_sp_fs_ctrlbar_pane_g3

0x857f,	// (0x000574cb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x857f,	// (0x000574cb) main_sp_fs_ctrlbar_pane_g4

0x85b3,	// (0x000574ff) toolbar2_fixed_button_pane_cp01

0x85be,	// (0x0005750a) toolbar2_fixed_button_pane_cp02

0x85cb,	// (0x00057517) toolbar2_fixed_button_pane_cp03

0x988f,	// (0x000587db) list_welc_entry_pane_ParamLimits

0x988f,	// (0x000587db) list_welc_entry_pane

0x990e,	// (0x0005885a) main_welc_pane_g3_ParamLimits

0x990e,	// (0x0005885a) main_welc_pane_g3

0x993f,	// (0x0005888b) main_welc_pane_t2_ParamLimits

0x993f,	// (0x0005888b) main_welc_pane_t2

0x995a,	// (0x000588a6) main_welc_pane_t3_ParamLimits

0x995a,	// (0x000588a6) main_welc_pane_t3

0x0002,

0xff5d,	// (0x0005eea9) main_welc_pane_t_ParamLimits

0xff5d,	// (0x0005eea9) main_welc_pane_t

0x9974,	// (0x000588c0) welc_button_pane_ParamLimits

0x9974,	// (0x000588c0) welc_button_pane

0x998b,	// (0x000588d7) welc_service_logo_pane_ParamLimits

0x998b,	// (0x000588d7) welc_service_logo_pane

0xefe2,	// (0x0005df2e) list_single_welc_entry_pane_ParamLimits

0xefe2,	// (0x0005df2e) list_single_welc_entry_pane

0xeff5,	// (0x0005df41) list_single_welc_entry_pane_g1

0xeffd,	// (0x0005df49) list_single_welc_entry_pane_t1

0xf00b,	// (0x0005df57) list_single_welc_entry_pane_t2

0x0001,

0xff69,	// (0x0005eeb5) list_single_welc_entry_pane_t

0x9a3c,	// (0x00058988) bg_button_pane_cp035

0xf019,	// (0x0005df65) welc_button_pane_t1

0xf027,	// (0x0005df73) welc_service_logo_pane_g1

0xf030,	// (0x0005df7c) welc_service_logo_pane_g2

0x0001,

0xff6e,	// (0x0005eeba) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
