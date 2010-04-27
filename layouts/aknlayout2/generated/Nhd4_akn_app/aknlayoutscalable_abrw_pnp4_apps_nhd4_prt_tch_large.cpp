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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0009a931 };

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
0x0cfe,	// (0x0009b62f) Screen

0x0d0a,	// (0x0009b63b) application_window

0x0d66,	// (0x0009b697) area_bottom_pane_ParamLimits

0x0d66,	// (0x0009b697) area_bottom_pane

0x0dbf,	// (0x0009b6f0) area_top_pane_ParamLimits

0x0dbf,	// (0x0009b6f0) area_top_pane

0x0e23,	// (0x0009b754) call_video_uplink_pane_ParamLimits

0x0e23,	// (0x0009b754) call_video_uplink_pane

0x0e62,	// (0x0009b793) main_pane_ParamLimits

0x0e62,	// (0x0009b793) main_pane

0xc7c8,	// (0x000a70f9) context_pane

0x44e5,	// (0x0009ee16) navi_pane

0x450b,	// (0x0009ee3c) popup_cale_events_window_ParamLimits

0x450b,	// (0x0009ee3c) popup_cale_events_window

0xc7db,	// (0x000a710c) popup_mup_playback_window

0x4523,	// (0x0009ee54) signal_pane

0xa708,	// (0x000a5039) main_browser_pane

0xa8d6,	// (0x000a5207) main_burst_pane

0x436d,	// (0x0009ec9e) main_calc_pane

0xc7ae,	// (0x000a70df) main_cale_day_pane

0x15ad,	// (0x0009bede) main_cale_month_pane

0xc7ae,	// (0x000a70df) main_cale_week_pane

0xa8d6,	// (0x000a5207) main_call_pane

0x9eaa,	// (0x000a47db) main_call_poc_pane

0xa8d6,	// (0x000a5207) main_camera_pane

0xa8d6,	// (0x000a5207) main_chi_dic_pane

0xb0dd,	// (0x000a5a0e) main_clock_pane

0x9eaa,	// (0x000a47db) main_fmradio_pane

0xa8d6,	// (0x000a5207) main_graph_messa_pane

0x9eaa,	// (0x000a47db) main_help_pane

0xa708,	// (0x000a5039) main_im_pane

0xa624,	// (0x000a4f55) main_image_pane_ParamLimits

0xa624,	// (0x000a4f55) main_image_pane

0x9eaa,	// (0x000a47db) main_location2_pane

0xa8d6,	// (0x000a5207) main_location_pane

0xa624,	// (0x000a4f55) main_messa_pane

0x9eaa,	// (0x000a47db) main_mp2_pane

0xa8d6,	// (0x000a5207) main_mp_pane

0x9eaa,	// (0x000a47db) main_msg_pane

0x9eaa,	// (0x000a47db) main_mup_eq_pane

0x9eaa,	// (0x000a47db) main_mup_pane

0xa708,	// (0x000a5039) main_notes_pane

0x9eaa,	// (0x000a47db) main_pec_pane

0x9eaa,	// (0x000a47db) main_phob_pane

0x9eaa,	// (0x000a47db) main_pinb_pane

0x9eaa,	// (0x000a47db) main_postcard_pane

0x9eaa,	// (0x000a47db) main_qdial_pane

0xa8d6,	// (0x000a5207) main_skin_pane

0x9eaa,	// (0x000a47db) main_smil2_pane

0xa8d6,	// (0x000a5207) main_smil_pane

0xa8d6,	// (0x000a5207) main_video_pane

0xa8d6,	// (0x000a5207) main_video_tele_pane

0xa624,	// (0x000a4f55) main_viewer_pane_ParamLimits

0xa624,	// (0x000a4f55) main_viewer_pane

0xa8d6,	// (0x000a5207) main_vorec_pane

0x43b9,	// (0x0009ecea) popup_blid_sat_info_window_ParamLimits

0x43b9,	// (0x0009ecea) popup_blid_sat_info_window

0x43d9,	// (0x0009ed0a) popup_dyc_status_message_window_ParamLimits

0x43d9,	// (0x0009ed0a) popup_dyc_status_message_window

0x43e7,	// (0x0009ed18) popup_grid_large_graphic_window_ParamLimits

0x43e7,	// (0x0009ed18) popup_grid_large_graphic_window

0x4476,	// (0x0009eda7) popup_loc_request_window_ParamLimits

0x4476,	// (0x0009eda7) popup_loc_request_window

0x44bd,	// (0x0009edee) popup_wml_address_window_ParamLimits

0x44bd,	// (0x0009edee) popup_wml_address_window

0x4245,	// (0x0009eb76) call_muted_g1

0x3f03,	// (0x0009e834) popup_call_audio_conf_window_ParamLimits

0x3f03,	// (0x0009e834) popup_call_audio_conf_window

0x4255,	// (0x0009eb86) popup_call_audio_first_window_ParamLimits

0x4255,	// (0x0009eb86) popup_call_audio_first_window

0x4295,	// (0x0009ebc6) popup_call_audio_in_window_ParamLimits

0x4295,	// (0x0009ebc6) popup_call_audio_in_window

0x42b9,	// (0x0009ebea) popup_call_audio_out_window_ParamLimits

0x42b9,	// (0x0009ebea) popup_call_audio_out_window

0x42db,	// (0x0009ec0c) popup_call_audio_second_window_ParamLimits

0x42db,	// (0x0009ec0c) popup_call_audio_second_window

0x430b,	// (0x0009ec3c) popup_call_audio_wait_window_ParamLimits

0x430b,	// (0x0009ec3c) popup_call_audio_wait_window

0x432c,	// (0x0009ec5d) popup_number_entry_window_ParamLimits

0x432c,	// (0x0009ec5d) popup_number_entry_window

0x9a97,	// (0x000a43c8) bg_popup_call_pane_cp05_ParamLimits

0x9a97,	// (0x000a43c8) bg_popup_call_pane_cp05

0x9ab7,	// (0x000a43e8) popup_number_entry_window_t1

0x9aca,	// (0x000a43fb) popup_number_entry_window_t2

0x9adc,	// (0x000a440d) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a99fb) popup_number_entry_window_t

0x9aee,	// (0x000a441f) text_title_cp2

0x9b01,	// (0x000a4432) bg_popup_call_pane_cp_ParamLimits

0x9b01,	// (0x000a4432) bg_popup_call_pane_cp

0x9b0f,	// (0x000a4440) call_thumbnail_pane

0x9b17,	// (0x000a4448) popup_call_audio_in_window_g1_ParamLimits

0x9b17,	// (0x000a4448) popup_call_audio_in_window_g1

0x9b23,	// (0x000a4454) popup_call_audio_in_window_g2_ParamLimits

0x9b23,	// (0x000a4454) popup_call_audio_in_window_g2

0x9b2f,	// (0x000a4460) popup_call_audio_in_window_g3_ParamLimits

0x9b2f,	// (0x000a4460) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a9a04) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a9a04) popup_call_audio_in_window_g

0x9b3b,	// (0x000a446c) popup_call_audio_in_window_t1_ParamLimits

0x9b3b,	// (0x000a446c) popup_call_audio_in_window_t1

0x9b57,	// (0x000a4488) popup_call_audio_in_window_t2_ParamLimits

0x9b57,	// (0x000a4488) popup_call_audio_in_window_t2

0x9b73,	// (0x000a44a4) popup_call_audio_in_window_t3_ParamLimits

0x9b73,	// (0x000a44a4) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a9a0b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a9a0b) popup_call_audio_in_window_t

0x9b01,	// (0x000a4432) bg_popup_call_pane_cp01_ParamLimits

0x9b01,	// (0x000a4432) bg_popup_call_pane_cp01

0x9b0f,	// (0x000a4440) call_thumbnail_pane_cp02

0x9b86,	// (0x000a44b7) call_type_pane_cp022

0x9b8e,	// (0x000a44bf) popup_call_audio_out_window_g1_ParamLimits

0x9b8e,	// (0x000a44bf) popup_call_audio_out_window_g1

0x9ba0,	// (0x000a44d1) popup_call_audio_out_window_g2_ParamLimits

0x9ba0,	// (0x000a44d1) popup_call_audio_out_window_g2

0x9bac,	// (0x000a44dd) popup_call_audio_out_window_g3_ParamLimits

0x9bac,	// (0x000a44dd) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a9a12) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a9a12) popup_call_audio_out_window_g

0x9bbe,	// (0x000a44ef) popup_call_audio_out_window_t1_ParamLimits

0x9bbe,	// (0x000a44ef) popup_call_audio_out_window_t1

0x9bd6,	// (0x000a4507) popup_call_audio_out_window_t2_ParamLimits

0x9bd6,	// (0x000a4507) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a9a19) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a9a19) popup_call_audio_out_window_t

0x9beb,	// (0x000a451c) bg_popup_call_pane_ParamLimits

0x9beb,	// (0x000a451c) bg_popup_call_pane

0x107e,	// (0x0009b9af) call_thumbnail_pane_cp_ParamLimits

0x107e,	// (0x0009b9af) call_thumbnail_pane_cp

0x9c6f,	// (0x000a45a0) call_type_pane_cp01_ParamLimits

0x9c6f,	// (0x000a45a0) call_type_pane_cp01

0x9cb3,	// (0x000a45e4) popup_call_audio_first_window_g1_ParamLimits

0x9cb3,	// (0x000a45e4) popup_call_audio_first_window_g1

0x9cff,	// (0x000a4630) popup_call_audio_first_window_g2_ParamLimits

0x9cff,	// (0x000a4630) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a9a1e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a9a1e) popup_call_audio_first_window_g

0x9d43,	// (0x000a4674) popup_call_audio_first_window_t1_ParamLimits

0x9d43,	// (0x000a4674) popup_call_audio_first_window_t1

0x9def,	// (0x000a4720) popup_call_audio_first_window_t4_ParamLimits

0x9def,	// (0x000a4720) popup_call_audio_first_window_t4

0x9e7b,	// (0x000a47ac) popup_call_audio_first_window_t5_ParamLimits

0x9e7b,	// (0x000a47ac) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a9a23) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a9a23) popup_call_audio_first_window_t

0x9eaa,	// (0x000a47db) bg_popup_call_pane_cp02

0x9eb4,	// (0x000a47e5) call_type_pane_cp023

0x9ebc,	// (0x000a47ed) popup_call_audio_wait_window_g1

0x9ec4,	// (0x000a47f5) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a9a2a) popup_call_audio_wait_window_g

0x9ecc,	// (0x000a47fd) popup_call_audio_wait_window_t3

0x9eda,	// (0x000a480b) bg_popup_call_pane_cp03_ParamLimits

0x9eda,	// (0x000a480b) bg_popup_call_pane_cp03

0x9f3a,	// (0x000a486b) call_thumbnail_pane_cp011_ParamLimits

0x9f3a,	// (0x000a486b) call_thumbnail_pane_cp011

0x9f46,	// (0x000a4877) call_type_pane_cp034_ParamLimits

0x9f46,	// (0x000a4877) call_type_pane_cp034

0x9f82,	// (0x000a48b3) popup_call_audio_second_window_g1_ParamLimits

0x9f82,	// (0x000a48b3) popup_call_audio_second_window_g1

0xa375,	// (0x000a4ca6) popup_call_audio_second_window_g2_ParamLimits

0xa375,	// (0x000a4ca6) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a9a2f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a9a2f) popup_call_audio_second_window_g

0xa3b1,	// (0x000a4ce2) popup_call_audio_second_window_t1_ParamLimits

0xa3b1,	// (0x000a4ce2) popup_call_audio_second_window_t1

0xa432,	// (0x000a4d63) popup_call_audio_second_window_t2_ParamLimits

0xa432,	// (0x000a4d63) popup_call_audio_second_window_t2

0xa468,	// (0x000a4d99) popup_call_audio_second_window_t3_ParamLimits

0xa468,	// (0x000a4d99) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a9a34) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a9a34) popup_call_audio_second_window_t

0x9eaa,	// (0x000a47db) bg_popup_call_pane_cp04

0xa606,	// (0x000a4f37) list_conf_pane

0xa60e,	// (0x000a4f3f) popup_call_audio_conf_window_t1

0xa61c,	// (0x000a4f4d) call_thumbnail_pane_g1

0xa624,	// (0x000a4f55) bg_pinb_pane_ParamLimits

0xa624,	// (0x000a4f55) bg_pinb_pane

0xa632,	// (0x000a4f63) find_pinb_pane

0xa63b,	// (0x000a4f6c) listscroll_pinb_pane_ParamLimits

0xa63b,	// (0x000a4f6c) listscroll_pinb_pane

0xa64a,	// (0x000a4f7b) pinb_bg_pane_g1

0x10a2,	// (0x0009b9d3) pinb_bg_pane_g2

0x10ae,	// (0x0009b9df) pinb_bg_pane_g3

0x10ba,	// (0x0009b9eb) pinb_bg_pane_g4

0x10c6,	// (0x0009b9f7) pinb_bg_pane_g5

0x10d2,	// (0x0009ba03) pinb_bg_pane_g6

0x10dd,	// (0x0009ba0e) pinb_bg_pane_g7

0x10e8,	// (0x0009ba19) pinb_bg_pane_g8

0x10f3,	// (0x0009ba24) pinb_bg_pane_g9

0x10fd,	// (0x0009ba2e) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a9a3b) pinb_bg_pane_g

0x111a,	// (0x0009ba4b) grid_pinb_pane

0x1125,	// (0x0009ba56) list_pinb_pane

0x1130,	// (0x0009ba61) scroll_pane_cp01_ParamLimits

0x1130,	// (0x0009ba61) scroll_pane_cp01

0xa654,	// (0x000a4f85) find_pinb_pane_g1_ParamLimits

0xa654,	// (0x000a4f85) find_pinb_pane_g1

0xa66c,	// (0x000a4f9d) find_pinb_pane_t1

0xa67e,	// (0x000a4faf) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a9a55) find_pinb_pane_t

0xa693,	// (0x000a4fc4) input_focus_pane_cp01_ParamLimits

0xa693,	// (0x000a4fc4) input_focus_pane_cp01

0x1142,	// (0x0009ba73) cell_pinb_pane_ParamLimits

0x1142,	// (0x0009ba73) cell_pinb_pane

0xa69f,	// (0x000a4fd0) cell_pinb_pane_g1_ParamLimits

0xa69f,	// (0x000a4fd0) cell_pinb_pane_g1

0xa6b2,	// (0x000a4fe3) cell_pinb_pane_g2_ParamLimits

0xa6b2,	// (0x000a4fe3) cell_pinb_pane_g2

0xa6be,	// (0x000a4fef) cell_pinb_pane_g3_ParamLimits

0xa6be,	// (0x000a4fef) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a9a5a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a9a5a) cell_pinb_pane_g

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp01

0x1171,	// (0x0009baa2) list_pinb_item_pane_ParamLimits

0x1171,	// (0x0009baa2) list_pinb_item_pane

0x9eaa,	// (0x000a47db) list_highlight_pane_cp02

0x119b,	// (0x0009bacc) list_pinb_item_pane_g1_ParamLimits

0x119b,	// (0x0009bacc) list_pinb_item_pane_g1

0x11a8,	// (0x0009bad9) list_pinb_item_pane_g2_ParamLimits

0x11a8,	// (0x0009bad9) list_pinb_item_pane_g2

0x11b4,	// (0x0009bae5) list_pinb_item_pane_g3_ParamLimits

0x11b4,	// (0x0009bae5) list_pinb_item_pane_g3

0x11c5,	// (0x0009baf6) list_pinb_item_pane_g4_ParamLimits

0x11c5,	// (0x0009baf6) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a9a61) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a9a61) list_pinb_item_pane_g

0x11d1,	// (0x0009bb02) list_pinb_item_pane_t1_ParamLimits

0x11d1,	// (0x0009bb02) list_pinb_item_pane_t1

0x1202,	// (0x0009bb33) calc_display_pane

0x1220,	// (0x0009bb51) calc_paper_pane

0x123c,	// (0x0009bb6d) grid_calc_pane

0x9eaa,	// (0x000a47db) bg_list_pane_cp01

0x1268,	// (0x0009bb99) clock_g1

0x1270,	// (0x0009bba1) clock_g2

0x0001,

0xf139,	// (0x000a9a6a) clock_g

0x127a,	// (0x0009bbab) clock_t1_ParamLimits

0x127a,	// (0x0009bbab) clock_t1

0x128f,	// (0x0009bbc0) clock_t2_ParamLimits

0x128f,	// (0x0009bbc0) clock_t2

0x12a1,	// (0x0009bbd2) clock_t3_ParamLimits

0x12a1,	// (0x0009bbd2) clock_t3

0x12b3,	// (0x0009bbe4) clock_t4_ParamLimits

0x12b3,	// (0x0009bbe4) clock_t4

0x12c5,	// (0x0009bbf6) clock_t5_ParamLimits

0x12c5,	// (0x0009bbf6) clock_t5

0x12da,	// (0x0009bc0b) clock_t6_ParamLimits

0x12da,	// (0x0009bc0b) clock_t6

0x12ec,	// (0x0009bc1d) clock_t7_ParamLimits

0x12ec,	// (0x0009bc1d) clock_t7

0x12fe,	// (0x0009bc2f) clock_t8_ParamLimits

0x12fe,	// (0x0009bc2f) clock_t8

0x1314,	// (0x0009bc45) clock_t9_ParamLimits

0x1314,	// (0x0009bc45) clock_t9

0x0008,

0xf13e,	// (0x000a9a6f) clock_t_ParamLimits

0xf13e,	// (0x000a9a6f) clock_t

0xa6ca,	// (0x000a4ffb) popup_clock_analogue_window_cp02

0xa6ca,	// (0x000a4ffb) popup_clock_digital_window_cp01

0xa6d2,	// (0x000a5003) listscroll_help_pane

0x9eaa,	// (0x000a47db) phob_pre_status_pane

0xa6dc,	// (0x000a500d) grid_qdial_pane

0xa624,	// (0x000a4f55) listscroll_mce_pane

0xa624,	// (0x000a4f55) bg_notes_pane

0xa6e6,	// (0x000a5017) list_notes_pane

0x132a,	// (0x0009bc5b) scroll_pane_cp06

0xa6f4,	// (0x000a5025) bg_calc_paper_pane

0x1339,	// (0x0009bc6a) list_calc_pane

0xa708,	// (0x000a5039) bg_calc_display_pane

0x1353,	// (0x0009bc84) calc_display_pane_t1

0x1368,	// (0x0009bc99) calc_display_pane_t2

0x137d,	// (0x0009bcae) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a9a82) calc_display_pane_t

0x138f,	// (0x0009bcc0) cell_calc_pane_ParamLimits

0x138f,	// (0x0009bcc0) cell_calc_pane

0xa714,	// (0x000a5045) bg_calc_paper_pane_g1

0xa720,	// (0x000a5051) bg_calc_paper_pane_g2

0xa72c,	// (0x000a505d) bg_calc_paper_pane_g3

0xa738,	// (0x000a5069) bg_calc_paper_pane_g4

0xa744,	// (0x000a5075) bg_calc_paper_pane_g5

0x13bc,	// (0x0009bced) bg_calc_paper_pane_g6

0x13cd,	// (0x0009bcfe) bg_calc_paper_pane_g7

0x13de,	// (0x0009bd0f) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a9a89) bg_calc_paper_pane_g

0x13ef,	// (0x0009bd20) calc_bg_paper_pane_g9

0x1400,	// (0x0009bd31) list_calc_item_pane_ParamLimits

0x1400,	// (0x0009bd31) list_calc_item_pane

0xa750,	// (0x000a5081) list_calc_item_pane_g1

0x1434,	// (0x0009bd65) list_calc_item_pane_t1_ParamLimits

0x1434,	// (0x0009bd65) list_calc_item_pane_t1

0x1446,	// (0x0009bd77) list_calc_item_pane_t2_ParamLimits

0x1446,	// (0x0009bd77) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a9a9a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a9a9a) list_calc_item_pane_t

0xa75d,	// (0x000a508e) cell_calc_pane_g1

0xa767,	// (0x000a5098) grid_highlight_pane_cp02

0xa789,	// (0x000a50ba) bg_calc_display_pane_g1

0x1476,	// (0x0009bda7) bg_calc_display_pane_g2

0xa792,	// (0x000a50c3) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a9aa4) bg_calc_display_pane_g

0x1480,	// (0x0009bdb1) cell_qdial_pane_ParamLimits

0x1480,	// (0x0009bdb1) cell_qdial_pane

0x1494,	// (0x0009bdc5) cell_qdial_pane_g1_ParamLimits

0x1494,	// (0x0009bdc5) cell_qdial_pane_g1

0x14a1,	// (0x0009bdd2) cell_qdial_pane_g2_ParamLimits

0x14a1,	// (0x0009bdd2) cell_qdial_pane_g2

0xa79b,	// (0x000a50cc) cell_qdial_pane_g3_ParamLimits

0xa79b,	// (0x000a50cc) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a9aab) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a9aab) cell_qdial_pane_g

0x14be,	// (0x0009bdef) cell_qdial_pane_t1_ParamLimits

0x14be,	// (0x0009bdef) cell_qdial_pane_t1

0x14d6,	// (0x0009be07) cell_qdial_pane_t2_ParamLimits

0x14d6,	// (0x0009be07) cell_qdial_pane_t2

0x14e9,	// (0x0009be1a) cell_qdial_pane_t3_ParamLimits

0x14e9,	// (0x0009be1a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a9ab4) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a9ab4) cell_qdial_pane_t

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp04

0xa7a7,	// (0x000a50d8) thumbnail_qdial_pane_ParamLimits

0xa7a7,	// (0x000a50d8) thumbnail_qdial_pane

0xa803,	// (0x000a5134) list_help_pane

0xa80c,	// (0x000a513d) scroll_pane_cp02

0x14fc,	// (0x0009be2d) help_list_pane_t1_ParamLimits

0x14fc,	// (0x0009be2d) help_list_pane_t1

0x1536,	// (0x0009be67) bg_notes_pane_g2

0x153e,	// (0x0009be6f) bg_notes_pane_g3

0x1546,	// (0x0009be77) notes_bg_pane_g1

0x154e,	// (0x0009be7f) notes_bg_pane_g4

0x1556,	// (0x0009be87) notes_bg_pane_g5

0x155e,	// (0x0009be8f) notes_bg_pane_g6

0x1566,	// (0x0009be97) notes_bg_pane_g7

0x156e,	// (0x0009be9f) notes_bg_pane_g8

0x1576,	// (0x0009bea7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a9ad2) notes_bg_pane_g

0x157e,	// (0x0009beaf) list_notes_text_pane_ParamLimits

0x157e,	// (0x0009beaf) list_notes_text_pane

0xa815,	// (0x000a5146) list_notes_text_pane_g1

0x9fbe,	// (0x000a48ef) list_notes_text_pane_t1

0x15ad,	// (0x0009bede) listscroll_cale_week_pane

0x15d2,	// (0x0009bf03) bg_cale_heading_pane

0xa838,	// (0x000a5169) bg_cale_pane_cp01

0x15f4,	// (0x0009bf25) cale_week_corner_pane

0x160e,	// (0x0009bf3f) cale_week_day_heading_pane

0x1630,	// (0x0009bf61) cale_week_scroll_pane_g1

0x164d,	// (0x0009bf7e) cale_week_scroll_pane_g2

0x1660,	// (0x0009bf91) cale_week_scroll_pane_g3

0x1673,	// (0x0009bfa4) cale_week_scroll_pane_g4

0x1686,	// (0x0009bfb7) cale_week_scroll_pane_g5

0x1699,	// (0x0009bfca) cale_week_scroll_pane_g6

0x16ac,	// (0x0009bfdd) cale_week_scroll_pane_g7

0x16bf,	// (0x0009bff0) cale_week_scroll_pane_g8

0x16d4,	// (0x0009c005) cale_week_scroll_pane_g9

0x16e7,	// (0x0009c018) cale_week_scroll_pane_g10

0x16fa,	// (0x0009c02b) cale_week_scroll_pane_g11

0x170d,	// (0x0009c03e) cale_week_scroll_pane_g12

0x1724,	// (0x0009c055) cale_week_scroll_pane_g13

0x173f,	// (0x0009c070) cale_week_scroll_pane_g14

0x175a,	// (0x0009c08b) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a9ae1) cale_week_scroll_pane_g

0x178a,	// (0x0009c0bb) cale_week_time_pane

0x179f,	// (0x0009c0d0) grid_cale_week_pane

0xa867,	// (0x000a5198) scroll_pane_cp08

0x17c0,	// (0x0009c0f1) cell_cale_week_pane_ParamLimits

0x17c0,	// (0x0009c0f1) cell_cale_week_pane

0x1824,	// (0x0009c155) cale_week_day_heading_pane_t1

0x185f,	// (0x0009c190) cale_week_day_heading_pane_t2

0x189a,	// (0x0009c1cb) cale_week_day_heading_pane_t3

0x18d5,	// (0x0009c206) cale_week_day_heading_pane_t4

0x1910,	// (0x0009c241) cale_week_day_heading_pane_t5

0x194b,	// (0x0009c27c) cale_week_day_heading_pane_t6

0x1986,	// (0x0009c2b7) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a9b02) cale_week_day_heading_pane_t

0xa884,	// (0x000a51b5) bg_cale_side_pane

0x19c1,	// (0x0009c2f2) cale_week_time_pane_t1

0x19db,	// (0x0009c30c) cale_week_time_pane_t2

0x19f5,	// (0x0009c326) cale_week_time_pane_t3

0x1a0f,	// (0x0009c340) cale_week_time_pane_t4

0x1a29,	// (0x0009c35a) cale_week_time_pane_t5

0x1a45,	// (0x0009c376) cale_week_time_pane_t6

0x1a67,	// (0x0009c398) cale_week_time_pane_t7

0x1a8b,	// (0x0009c3bc) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a9b11) cale_week_time_pane_t

0x1ab1,	// (0x0009c3e2) cell_cale_week_pane_g2

0x1ad5,	// (0x0009c406) cell_cale_week_pane_g3_ParamLimits

0x1ad5,	// (0x0009c406) cell_cale_week_pane_g3

0xa892,	// (0x000a51c3) grid_highlight_pane_cp07

0xa89a,	// (0x000a51cb) listscroll_gms_pane

0xa8a4,	// (0x000a51d5) grid_gms_pane

0xa8ad,	// (0x000a51de) listscroll_gms_pane_g1

0xa8b5,	// (0x000a51e6) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a9b22) listscroll_gms_pane_g

0x1aed,	// (0x0009c41e) scroll_pane_cp010

0x1af8,	// (0x0009c429) cell_gms_pane_ParamLimits

0x1af8,	// (0x0009c429) cell_gms_pane

0x1b08,	// (0x0009c439) cell_gms_pane_g1

0xa8bd,	// (0x000a51ee) cell_gms_pane_g2

0xa815,	// (0x000a5146) cell_gms_pane_g3

0xa8c5,	// (0x000a51f6) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a9b27) cell_gms_pane_g

0xa8ce,	// (0x000a51ff) grid_highlight_pane_cp09

0x41ed,	// (0x0009eb1e) phob_pre_status_pane_g1

0x41f5,	// (0x0009eb26) phob_pre_status_pane_g2

0x41fd,	// (0x0009eb2e) phob_pre_status_pane_g3

0x4205,	// (0x0009eb36) phob_pre_status_pane_g4

0x0004,

0xf54f,	// (0x000a9e80) phob_pre_status_pane_g

0x4215,	// (0x0009eb46) phob_pre_status_pane_t1

0x4225,	// (0x0009eb56) phob_pre_status_pane_t2

0x4235,	// (0x0009eb66) phob_pre_status_pane_t3

0x0002,

0xf55a,	// (0x000a9e8b) phob_pre_status_pane_t

0xa8d6,	// (0x000a5207) bg_list_pane_cp05

0x1b18,	// (0x0009c449) grid_vorec_pane

0x1b22,	// (0x0009c453) vorec_t1

0x1b30,	// (0x0009c461) vorec_t2

0x1b3e,	// (0x0009c46f) vorec_t3

0x1b4c,	// (0x0009c47d) vorec_t4

0x9a67,	// (0x000a4398) vorec_t5

0x9a75,	// (0x000a43a6) vorec_t6

0x0004,

0xf1ff,	// (0x000a9b30) vorec_t

0x9a83,	// (0x000a43b4) wait_bar_pane_cp01

0x1b68,	// (0x0009c499) cell_vorec_pane_ParamLimits

0x1b68,	// (0x0009c499) cell_vorec_pane

0x1b7b,	// (0x0009c4ac) cell_vorec_pane_g1

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp05

0x1b95,	// (0x0009c4c6) cams_zoom_pane

0x1ba1,	// (0x0009c4d2) image_vga_pane

0x1bb0,	// (0x0009c4e1) main_camera_pane_g1

0x1bbe,	// (0x0009c4ef) main_camera_pane_g2

0x1bca,	// (0x0009c4fb) main_camera_pane_g3

0x1bd6,	// (0x0009c507) main_camera_pane_g4

0x1be2,	// (0x0009c513) main_camera_pane_g5

0x1bee,	// (0x0009c51f) main_camera_pane_g6

0x1bfa,	// (0x0009c52b) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a9b3b) main_camera_pane_g

0x1c06,	// (0x0009c537) main_camera_pane_t1

0x1c18,	// (0x0009c549) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a9b4c) main_camera_pane_t

0x1c39,	// (0x0009c56a) cams_zoom_pane_cp_ParamLimits

0x1c39,	// (0x0009c56a) cams_zoom_pane_cp

0x1c5d,	// (0x0009c58e) image_cif_pane_ParamLimits

0x1c5d,	// (0x0009c58e) image_cif_pane

0x1c7b,	// (0x0009c5ac) image_subqcif_pane

0x1c83,	// (0x0009c5b4) main_video_pane_g1_ParamLimits

0x1c83,	// (0x0009c5b4) main_video_pane_g1

0x1ca3,	// (0x0009c5d4) main_video_pane_g2_ParamLimits

0x1ca3,	// (0x0009c5d4) main_video_pane_g2

0x1cd3,	// (0x0009c604) main_video_pane_g3_ParamLimits

0x1cd3,	// (0x0009c604) main_video_pane_g3

0x1cfc,	// (0x0009c62d) main_video_pane_g4_ParamLimits

0x1cfc,	// (0x0009c62d) main_video_pane_g4

0x1d25,	// (0x0009c656) main_video_pane_g5_ParamLimits

0x1d25,	// (0x0009c656) main_video_pane_g5

0xa8ea,	// (0x000a521b) main_video_pane_g6_ParamLimits

0xa8ea,	// (0x000a521b) main_video_pane_g6

0x0006,

0xf220,	// (0x000a9b51) main_video_pane_g_ParamLimits

0xf220,	// (0x000a9b51) main_video_pane_g

0x1d47,	// (0x0009c678) main_video_pane_t1_ParamLimits

0x1d47,	// (0x0009c678) main_video_pane_t1

0xa904,	// (0x000a5235) cams_zoom_pane_g1

0xa90d,	// (0x000a523e) cams_zoom_pane_g2

0xa916,	// (0x000a5247) cams_zoom_pane_g3

0xa91f,	// (0x000a5250) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a9b60) cams_zoom_pane_g

0x1d91,	// (0x0009c6c2) grid_cams_pane

0x1d9f,	// (0x0009c6d0) linegrid_cams_pane

0x1dad,	// (0x0009c6de) cell_cams_pane_ParamLimits

0x1dad,	// (0x0009c6de) cell_cams_pane

0xa928,	// (0x000a5259) cams_burst_image_pane

0xa930,	// (0x000a5261) cell_cams_pane_g1

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp03

0xa75d,	// (0x000a508e) mp_bg_pane_g1

0x9eaa,	// (0x000a47db) bg_list_pane_cp03

0xc6d3,	// (0x000a7004) bg_mp_pane

0xc6db,	// (0x000a700c) grid_mp_pane

0xc6e3,	// (0x000a7014) media_player_g1

0xc6eb,	// (0x000a701c) media_player_t1

0xc6f9,	// (0x000a702a) media_player_t2

0xc707,	// (0x000a7038) media_player_t3

0xc715,	// (0x000a7046) media_player_t4

0xc723,	// (0x000a7054) media_player_t5

0xc731,	// (0x000a7062) media_player_t6

0xc73f,	// (0x000a7070) media_player_t7

0x0006,

0x028a,	// (0x0009abbb) media_player_t

0xc74d,	// (0x000a707e) wait_bar_pane_cp02

0xf53b,	// (0x000a9e6c) main_usb_pane_t

0x41e4,	// (0x0009eb15) cell_mp_pane

0xa75d,	// (0x000a508e) cell_mp_pane_g1

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp06

0xa938,	// (0x000a5269) grid_skin_colour_pane

0xa940,	// (0x000a5271) list_highlight_pane_cp03

0x1ece,	// (0x0009c7ff) skin_g1

0xa948,	// (0x000a5279) skin_t1

0xa957,	// (0x000a5288) skin_t2

0x0001,

0xf264,	// (0x000a9b95) skin_t

0x1ed8,	// (0x0009c809) cell_skin_colour_pane_ParamLimits

0x1ed8,	// (0x0009c809) cell_skin_colour_pane

0xa965,	// (0x000a5296) cell_skin_colour_pane_g1

0x1f5c,	// (0x0009c88d) call_video_g1_ParamLimits

0x1f5c,	// (0x0009c88d) call_video_g1

0x1f6c,	// (0x0009c89d) call_video_g2_ParamLimits

0x1f6c,	// (0x0009c89d) call_video_g2

0x0001,

0xf269,	// (0x000a9b9a) call_video_g_ParamLimits

0xf269,	// (0x000a9b9a) call_video_g

0x1fc6,	// (0x0009c8f7) call_video_uplink_pane_cp1_ParamLimits

0x1fc6,	// (0x0009c8f7) call_video_uplink_pane_cp1

0xa977,	// (0x000a52a8) call_video_uplink_pane_cp2

0x2092,	// (0x0009c9c3) video_down_crop_pane_ParamLimits

0x2092,	// (0x0009c9c3) video_down_crop_pane

0x2184,	// (0x0009cab5) video_down_pane_ParamLimits

0x2184,	// (0x0009cab5) video_down_pane

0xa97f,	// (0x000a52b0) video_down_subqcif_pane_ParamLimits

0xa97f,	// (0x000a52b0) video_down_subqcif_pane

0xa997,	// (0x000a52c8) video_down_subqcif_pane_cp_ParamLimits

0xa997,	// (0x000a52c8) video_down_subqcif_pane_cp

0xa9bd,	// (0x000a52ee) im_reading_pane_ParamLimits

0xa9bd,	// (0x000a52ee) im_reading_pane

0x22a6,	// (0x0009cbd7) im_writing_pane_ParamLimits

0x22a6,	// (0x0009cbd7) im_writing_pane

0x22c4,	// (0x0009cbf5) im_reading_pane_t1

0xa9d7,	// (0x000a5308) list_im_pane

0xa9e8,	// (0x000a5319) scroll_pane_cp07

0x231f,	// (0x0009cc50) im_writing_pane_t1_ParamLimits

0x231f,	// (0x0009cc50) im_writing_pane_t1

0xaa01,	// (0x000a5332) im_writing_pane_t2_ParamLimits

0xaa01,	// (0x000a5332) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a9ba4) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a9ba4) im_writing_pane_t

0x9eaa,	// (0x000a47db) input_focus_pane_cp04

0x9eaa,	// (0x000a47db) input_focus_pane_cp05

0x2331,	// (0x0009cc62) list_im_single_pane_ParamLimits

0x2331,	// (0x0009cc62) list_im_single_pane

0x2359,	// (0x0009cc8a) list_single_im_pane_t1

0x41a8,	// (0x0009ead9) blid_accuracy_pane

0x41b0,	// (0x0009eae1) blid_compass_pane

0x41ba,	// (0x0009eaeb) main_location_t1

0x41c8,	// (0x0009eaf9) main_location_t2

0x41d6,	// (0x0009eb07) main_location_t3

0x0002,

0xf548,	// (0x000a9e79) main_location_t

0x9eaa,	// (0x000a47db) aid_levels_location

0xa75d,	// (0x000a508e) blid_accuracy_pane_g1

0xa75d,	// (0x000a508e) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a9c06) blid_accuracy_pane_g

0xaa49,	// (0x000a537a) wml_content_pane

0xaa87,	// (0x000a53b8) wml_button_pane_ParamLimits

0xaa87,	// (0x000a53b8) wml_button_pane

0x2368,	// (0x0009cc99) wml_list_single_large_pane_ParamLimits

0x2368,	// (0x0009cc99) wml_list_single_large_pane

0x2399,	// (0x0009ccca) wml_list_single_medium_pane_ParamLimits

0x2399,	// (0x0009ccca) wml_list_single_medium_pane

0x23d1,	// (0x0009cd02) wml_list_single_small_pane_ParamLimits

0x23d1,	// (0x0009cd02) wml_list_single_small_pane

0xaa9b,	// (0x000a53cc) wml_selection_box_pane_ParamLimits

0xaa9b,	// (0x000a53cc) wml_selection_box_pane

0xaaae,	// (0x000a53df) wml_list_single_pane_t1

0xaabd,	// (0x000a53ee) wml_list_single_medium_pane_t1

0xaacc,	// (0x000a53fd) wml_list_single_large_pane_t1

0xaadb,	// (0x000a540c) input_focus_pane_cp02_ParamLimits

0xaadb,	// (0x000a540c) input_focus_pane_cp02

0xaaee,	// (0x000a541f) wml_selection_box_pane_g1

0xaaf7,	// (0x000a5428) wml_selection_box_pane_t1_ParamLimits

0xaaf7,	// (0x000a5428) wml_selection_box_pane_t1

0xa624,	// (0x000a4f55) bg_wml_button_pane_ParamLimits

0xa624,	// (0x000a4f55) bg_wml_button_pane

0xab0f,	// (0x000a5440) wml_button_pane_g1

0xab17,	// (0x000a5448) wml_button_pane_t1

0xab0f,	// (0x000a5440) wml_button_bg_pane_g1

0xab27,	// (0x000a5458) wml_button_bg_pane_g2

0xab2f,	// (0x000a5460) wml_button_bg_pane_g3

0xab37,	// (0x000a5468) wml_button_bg_pane_g4

0xab3f,	// (0x000a5470) wml_button_bg_pane_g5

0xab47,	// (0x000a5478) wml_button_bg_pane_g6

0xab4f,	// (0x000a5480) wml_button_bg_pane_g7

0xab57,	// (0x000a5488) wml_button_bg_pane_g8

0xab5f,	// (0x000a5490) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a9ba9) wml_button_bg_pane_g

0x2412,	// (0x0009cd43) bg_list_pane_cp02

0xab67,	// (0x000a5498) mce_header_pane_ParamLimits

0xab67,	// (0x000a5498) mce_header_pane

0xab7d,	// (0x000a54ae) mce_icon_pane

0xab7d,	// (0x000a54ae) mce_image_pane

0xab86,	// (0x000a54b7) mce_text_pane_ParamLimits

0xab86,	// (0x000a54b7) mce_text_pane

0x241c,	// (0x0009cd4d) scroll_pane_cp03

0xaa7f,	// (0x000a53b0) scroll_pane_cp04

0xab99,	// (0x000a54ca) scroll_pane_cp05_ParamLimits

0xab99,	// (0x000a54ca) scroll_pane_cp05

0x2426,	// (0x0009cd57) mce_header_field_pane_ParamLimits

0x2426,	// (0x0009cd57) mce_header_field_pane

0x2446,	// (0x0009cd77) mce_header_field_pane_2_ParamLimits

0x2446,	// (0x0009cd77) mce_header_field_pane_2

0x245c,	// (0x0009cd8d) mce_header_field_pane_3

0x2464,	// (0x0009cd95) list_single_mce_message_pane_ParamLimits

0x2464,	// (0x0009cd95) list_single_mce_message_pane

0x2496,	// (0x0009cdc7) list_single_mce_smart_pane_ParamLimits

0x2496,	// (0x0009cdc7) list_single_mce_smart_pane

0xaba5,	// (0x000a54d6) input_focus_pane_cp03

0xabae,	// (0x000a54df) list_header_data_pane

0x24d3,	// (0x0009ce04) mce_header_field_pane_t1

0x24e3,	// (0x0009ce14) list_single_mce_header_pane_ParamLimits

0x24e3,	// (0x0009ce14) list_single_mce_header_pane

0xabb6,	// (0x000a54e7) list_single_mce_header_pane_t1

0xabc5,	// (0x000a54f6) list_single_mce_message_pane_g1

0xabcd,	// (0x000a54fe) list_single_mce_message_pane_t1

0x253a,	// (0x0009ce6b) bg_cale_heading_pane_cp01_ParamLimits

0x253a,	// (0x0009ce6b) bg_cale_heading_pane_cp01

0xabdb,	// (0x000a550c) bg_cale_pane_cp02_ParamLimits

0xabdb,	// (0x000a550c) bg_cale_pane_cp02

0x257d,	// (0x0009ceae) cale_month_corner_pane

0x2597,	// (0x0009cec8) cale_month_day_heading_pane_ParamLimits

0x2597,	// (0x0009cec8) cale_month_day_heading_pane

0x25f2,	// (0x0009cf23) cale_month_pane_g1_ParamLimits

0x25f2,	// (0x0009cf23) cale_month_pane_g1

0x262a,	// (0x0009cf5b) cale_month_pane_g2_ParamLimits

0x262a,	// (0x0009cf5b) cale_month_pane_g2

0x2655,	// (0x0009cf86) cale_month_pane_g3_ParamLimits

0x2655,	// (0x0009cf86) cale_month_pane_g3

0x26a5,	// (0x0009cfd6) cale_month_pane_g4_ParamLimits

0x26a5,	// (0x0009cfd6) cale_month_pane_g4

0x26f5,	// (0x0009d026) cale_month_pane_g5_ParamLimits

0x26f5,	// (0x0009d026) cale_month_pane_g5

0x2745,	// (0x0009d076) cale_month_pane_g6_ParamLimits

0x2745,	// (0x0009d076) cale_month_pane_g6

0x2795,	// (0x0009d0c6) cale_month_pane_g7_ParamLimits

0x2795,	// (0x0009d0c6) cale_month_pane_g7

0x27fd,	// (0x0009d12e) cale_month_pane_g8_ParamLimits

0x27fd,	// (0x0009d12e) cale_month_pane_g8

0x2865,	// (0x0009d196) cale_month_pane_g9_ParamLimits

0x2865,	// (0x0009d196) cale_month_pane_g9

0x28c3,	// (0x0009d1f4) cale_month_pane_g10_ParamLimits

0x28c3,	// (0x0009d1f4) cale_month_pane_g10

0x2921,	// (0x0009d252) cale_month_pane_g11_ParamLimits

0x2921,	// (0x0009d252) cale_month_pane_g11

0x2975,	// (0x0009d2a6) cale_month_pane_g12_ParamLimits

0x2975,	// (0x0009d2a6) cale_month_pane_g12

0x29cb,	// (0x0009d2fc) cale_month_pane_g13_ParamLimits

0x29cb,	// (0x0009d2fc) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a9bbc) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a9bbc) cale_month_pane_g

0x2a21,	// (0x0009d352) cale_month_week_pane

0x2a36,	// (0x0009d367) grid_cale_month_pane_ParamLimits

0x2a36,	// (0x0009d367) grid_cale_month_pane

0x2a88,	// (0x0009d3b9) cale_month_day_heading_pane_t1

0x2b0e,	// (0x0009d43f) cale_month_day_heading_pane_t2

0x2b9f,	// (0x0009d4d0) cale_month_day_heading_pane_t3

0x2c30,	// (0x0009d561) cale_month_day_heading_pane_t4

0x2cc1,	// (0x0009d5f2) cale_month_day_heading_pane_t5

0x2d52,	// (0x0009d683) cale_month_day_heading_pane_t6

0x2def,	// (0x0009d720) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a9bd7) cale_month_day_heading_pane_t

0xa884,	// (0x000a51b5) bg_cale_side_pane_cp01

0x2e98,	// (0x0009d7c9) cale_month_week_pane_t1

0x2eb1,	// (0x0009d7e2) cale_month_week_pane_t2

0x2eca,	// (0x0009d7fb) cale_month_week_pane_t3

0x2ee3,	// (0x0009d814) cale_month_week_pane_t4

0x2f00,	// (0x0009d831) cale_month_week_pane_t5

0x2f21,	// (0x0009d852) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a9be6) cale_month_week_pane_t

0x2f42,	// (0x0009d873) cell_cale_month_pane_ParamLimits

0x2f42,	// (0x0009d873) cell_cale_month_pane

0x3092,	// (0x0009d9c3) cell_cale_month_pane_g1

0x309e,	// (0x0009d9cf) cell_cale_month_pane_t1_ParamLimits

0x309e,	// (0x0009d9cf) cell_cale_month_pane_t1

0xa892,	// (0x000a51c3) grid_highlight_pane_cp08

0xa75d,	// (0x000a508e) main_smil_g1

0x30be,	// (0x0009d9ef) smil_status_pane

0xac1a,	// (0x000a554b) smil_text_pane

0xc5f3,	// (0x000a6f24) bg_popup_call3_rect_pane_g8

0xc5fb,	// (0x000a6f2c) bg_popup_call3_rect_pane_g9

0x0008,

0xf523,	// (0x000a9e54) bg_popup_call3_rect_pane_g

0xc842,	// (0x000a7173) smil_status_volume_pane_g1

0xac24,	// (0x000a5555) smil_status_pane_t1

0x45de,	// (0x0009ef0f) volume_smil_pane

0xac3b,	// (0x000a556c) list_smil_text_pane

0x30d1,	// (0x0009da02) scroll_pane_cp011

0x30dc,	// (0x0009da0d) smil_text_list_pane_t1_ParamLimits

0x30dc,	// (0x0009da0d) smil_text_list_pane_t1

0x3170,	// (0x0009daa1) aid_volume_smil_ParamLimits

0x3170,	// (0x0009daa1) aid_volume_smil

0xa75d,	// (0x000a508e) smil_volume_pane_g1

0xa75d,	// (0x000a508e) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a9c06) smil_volume_pane_g

0x15ad,	// (0x0009bede) listscroll_cale_day_pane

0xac45,	// (0x000a5576) bg_cale_pane

0xac5d,	// (0x000a558e) list_cale_pane

0xac80,	// (0x000a55b1) scroll_pane_cp09

0xac91,	// (0x000a55c2) cale_bg_pane_g1

0xac99,	// (0x000a55ca) cale_bg_pane_g2

0xaca1,	// (0x000a55d2) cale_bg_pane_g3

0xaca9,	// (0x000a55da) cale_bg_pane_g4

0xacb1,	// (0x000a55e2) cale_bg_pane_g5

0xacb9,	// (0x000a55ea) cale_bg_pane_g6

0xacc1,	// (0x000a55f2) cale_bg_pane_g7

0xacc9,	// (0x000a55fa) cale_bg_pane_g8

0xacd1,	// (0x000a5602) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a9c0b) cale_bg_pane_g

0x3192,	// (0x0009dac3) list_cale_time_pane_ParamLimits

0x3192,	// (0x0009dac3) list_cale_time_pane

0xace1,	// (0x000a5612) list_cale_time_pane_g1_ParamLimits

0xace1,	// (0x000a5612) list_cale_time_pane_g1

0xaced,	// (0x000a561e) list_cale_time_pane_g2_ParamLimits

0xaced,	// (0x000a561e) list_cale_time_pane_g2

0x31be,	// (0x0009daef) list_cale_time_pane_g3_ParamLimits

0x31be,	// (0x0009daef) list_cale_time_pane_g3

0x31cc,	// (0x0009dafd) list_cale_time_pane_g4_ParamLimits

0x31cc,	// (0x0009dafd) list_cale_time_pane_g4

0x31da,	// (0x0009db0b) list_cale_time_pane_g5_ParamLimits

0x31da,	// (0x0009db0b) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a9c1e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a9c1e) list_cale_time_pane_g

0xad07,	// (0x000a5638) list_cale_time_pane_t1_ParamLimits

0xad07,	// (0x000a5638) list_cale_time_pane_t1

0xad2f,	// (0x000a5660) list_cale_time_pane_t2_ParamLimits

0xad2f,	// (0x000a5660) list_cale_time_pane_t2

0x3567,	// (0x0009de98) aid_blid_cardinal_pane

0x35a9,	// (0x0009deda) compass_pane_t4

0xad57,	// (0x000a5688) list_cale_time_pane_t4_ParamLimits

0xad57,	// (0x000a5688) list_cale_time_pane_t4

0x35b7,	// (0x0009dee8) compass_pane_t5

0x35c7,	// (0x0009def8) compass_pane_t6

0x35d5,	// (0x0009df06) compass_pane_t7

0xb214,	// (0x000a5b45) navi_pane_cc_t1

0xb44a,	// (0x000a5d7b) aid_phob_thumbnail_center_pane

0x3ca1,	// (0x0009e5d2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a9c2b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a9c2b) list_cale_time_pane_t

0x9b01,	// (0x000a4432) bg_popup_window_pane_cp02_ParamLimits

0x9b01,	// (0x000a4432) bg_popup_window_pane_cp02

0xad7f,	// (0x000a56b0) heading_pane_cp01_ParamLimits

0xad7f,	// (0x000a56b0) heading_pane_cp01

0xad8b,	// (0x000a56bc) loc_req_pane_ParamLimits

0xad8b,	// (0x000a56bc) loc_req_pane

0xad9b,	// (0x000a56cc) loc_type_pane_ParamLimits

0xad9b,	// (0x000a56cc) loc_type_pane

0xadad,	// (0x000a56de) loc_type_pane_t1_ParamLimits

0xadad,	// (0x000a56de) loc_type_pane_t1

0xadbf,	// (0x000a56f0) loc_type_pane_t2_ParamLimits

0xadbf,	// (0x000a56f0) loc_type_pane_t2

0xadd1,	// (0x000a5702) loc_type_pane_t3_ParamLimits

0xadd1,	// (0x000a5702) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a9c32) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a9c32) loc_type_pane_t

0xade3,	// (0x000a5714) list_loc_req_pane

0xaded,	// (0x000a571e) scroll_pane_cp012

0x31e8,	// (0x0009db19) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e8,	// (0x0009db19) list_single_loc_request_popup_menu_pane

0xadf8,	// (0x000a5729) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadf8,	// (0x000a5729) list_single_loc_request_popup_menu_pane_g1

0xae04,	// (0x000a5735) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae04,	// (0x000a5735) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a9c39) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a9c39) list_single_loc_request_popup_menu_pane_g

0xae10,	// (0x000a5741) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae10,	// (0x000a5741) list_single_loc_request_popup_menu_pane_t1

0x3202,	// (0x0009db33) bg_popup_window_pane_cp03_ParamLimits

0x3202,	// (0x0009db33) bg_popup_window_pane_cp03

0x3210,	// (0x0009db41) heading_loc_req_pane_ParamLimits

0x3210,	// (0x0009db41) heading_loc_req_pane

0x321c,	// (0x0009db4d) popup_dyc_status_message_window_g1_ParamLimits

0x321c,	// (0x0009db4d) popup_dyc_status_message_window_g1

0x3228,	// (0x0009db59) popup_dyc_status_message_window_t1_ParamLimits

0x3228,	// (0x0009db59) popup_dyc_status_message_window_t1

0x323a,	// (0x0009db6b) popup_dyc_status_message_window_t2_ParamLimits

0x323a,	// (0x0009db6b) popup_dyc_status_message_window_t2

0x324c,	// (0x0009db7d) popup_dyc_status_message_window_t3_ParamLimits

0x324c,	// (0x0009db7d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a9c3e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a9c3e) popup_dyc_status_message_window_t

0x9eaa,	// (0x000a47db) bg_heading_pane_cp01

0xae26,	// (0x000a5757) heading_loc_req_pane_g1

0xae2e,	// (0x000a575f) heading_loc_req_pane_g2

0xae36,	// (0x000a5767) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a9c45) heading_loc_req_pane_g

0xae3e,	// (0x000a576f) heading_loc_req_pane_t1

0xae4d,	// (0x000a577e) bg_popup_sub_pane_cp01_ParamLimits

0xae4d,	// (0x000a577e) bg_popup_sub_pane_cp01

0xae5b,	// (0x000a578c) popup_cale_events_window_g1_ParamLimits

0xae5b,	// (0x000a578c) popup_cale_events_window_g1

0xae7b,	// (0x000a57ac) popup_cale_events_window_g2_ParamLimits

0xae7b,	// (0x000a57ac) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a9c79) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a9c79) popup_cale_events_window_g

0xae9b,	// (0x000a57cc) popup_cale_events_window_t1_ParamLimits

0xae9b,	// (0x000a57cc) popup_cale_events_window_t1

0xaead,	// (0x000a57de) popup_cale_events_window_t2_ParamLimits

0xaead,	// (0x000a57de) popup_cale_events_window_t2

0xaeeb,	// (0x000a581c) popup_cale_events_window_t3_ParamLimits

0xaeeb,	// (0x000a581c) popup_cale_events_window_t3

0xaf25,	// (0x000a5856) popup_cale_events_window_t4_ParamLimits

0xaf25,	// (0x000a5856) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a9c7e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a9c7e) popup_cale_events_window_t

0x3347,	// (0x0009dc78) call_type_pane

0xb2d2,	// (0x000a5c03) popup_call_status_window_g1

0x3353,	// (0x0009dc84) popup_call_status_window_g2

0x335f,	// (0x0009dc90) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a9c87) popup_call_status_window_g

0xaf5b,	// (0x000a588c) call_type_pane_g1

0xaf64,	// (0x000a5895) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a9c8e) call_type_pane_g

0x9eaa,	// (0x000a47db) bg_popup_sub_pane_cp02

0xaf6d,	// (0x000a589e) listscroll_popup_wml_pane

0xaf75,	// (0x000a58a6) list_wml_pane

0xaf7f,	// (0x000a58b0) scroll_pane_cp013

0xaf8a,	// (0x000a58bb) list_single_graphic_popup_wml_pane_ParamLimits

0xaf8a,	// (0x000a58bb) list_single_graphic_popup_wml_pane

0xa75d,	// (0x000a508e) list_single_graphic_popup_wml_pane_g1

0xaf9e,	// (0x000a58cf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a9c93) list_single_graphic_popup_wml_pane_g

0xafa6,	// (0x000a58d7) list_single_graphic_popup_wml_pane_t1

0xafbc,	// (0x000a58ed) aid_call_pane

0xa61c,	// (0x000a4f4d) popup_clock_analogue_window_g1

0xa61c,	// (0x000a4f4d) popup_clock_analogue_window_g2

0x336b,	// (0x0009dc9c) popup_clock_analogue_window_g3

0x336b,	// (0x0009dc9c) popup_clock_analogue_window_g4

0xa75d,	// (0x000a508e) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a9c98) popup_clock_analogue_window_g

0x3373,	// (0x0009dca4) popup_clock_analogue_window_t1

0x3381,	// (0x0009dcb2) clock_digital_number_pane_ParamLimits

0x3381,	// (0x0009dcb2) clock_digital_number_pane

0x338d,	// (0x0009dcbe) clock_digital_number_pane_cp02_ParamLimits

0x338d,	// (0x0009dcbe) clock_digital_number_pane_cp02

0x3399,	// (0x0009dcca) clock_digital_number_pane_cp03_ParamLimits

0x3399,	// (0x0009dcca) clock_digital_number_pane_cp03

0x33a5,	// (0x0009dcd6) clock_digital_number_pane_cp04_ParamLimits

0x33a5,	// (0x0009dcd6) clock_digital_number_pane_cp04

0x33b5,	// (0x0009dce6) clock_digital_separator_pane_ParamLimits

0x33b5,	// (0x0009dce6) clock_digital_separator_pane

0x33c1,	// (0x0009dcf2) popup_clock_digital_window_t1

0xa75d,	// (0x000a508e) clock_digital_number_pane_g1

0xa75d,	// (0x000a508e) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a9c06) clock_digital_number_pane_g

0xa75d,	// (0x000a508e) clock_digital_separator_pane_g1

0xa75d,	// (0x000a508e) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a9c06) clock_digital_separator_pane_g

0x9eaa,	// (0x000a47db) bg_popup_window_pane_cp04

0xafc4,	// (0x000a58f5) heading_pane_cp03

0xafcc,	// (0x000a58fd) listscroll_popup_gms_pane

0xafd4,	// (0x000a5905) grid_large_graphic_popup_pane

0xafde,	// (0x000a590f) listscroll_popup_gms_pane_g1

0xafe6,	// (0x000a5917) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a9ca3) listscroll_popup_gms_pane_g

0xaa7f,	// (0x000a53b0) scroll_pane_cp014

0xafee,	// (0x000a591f) cell_large_graphic_popup_pane_ParamLimits

0xafee,	// (0x000a591f) cell_large_graphic_popup_pane

0xb006,	// (0x000a5937) cell_large_graphic_popup_pane_g1_ParamLimits

0xb006,	// (0x000a5937) cell_large_graphic_popup_pane_g1

0xb012,	// (0x000a5943) cell_large_graphic_popup_pane_g2_ParamLimits

0xb012,	// (0x000a5943) cell_large_graphic_popup_pane_g2

0xb01e,	// (0x000a594f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb01e,	// (0x000a594f) cell_large_graphic_popup_pane_g3

0xb037,	// (0x000a5968) cell_large_graphic_popup_pane_g4_ParamLimits

0xb037,	// (0x000a5968) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a9ca8) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a9ca8) cell_large_graphic_popup_pane_g

0xb047,	// (0x000a5978) grid_highlight_pane_cp010

0xa75d,	// (0x000a508e) bg_popup_call_pane_g1

0xb051,	// (0x000a5982) list_single_graphic_popup_conf_pane_ParamLimits

0xb051,	// (0x000a5982) list_single_graphic_popup_conf_pane

0xb064,	// (0x000a5995) list_highlight_pane_cp01

0xb06d,	// (0x000a599e) list_single_graphic_popup_conf_pane_g1

0xb075,	// (0x000a59a6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a9cb1) list_single_graphic_popup_conf_pane_g

0xb07d,	// (0x000a59ae) list_single_graphic_popup_conf_pane_t1

0xb08b,	// (0x000a59bc) linegrid_cams_pane_g1

0x33de,	// (0x0009dd0f) linegrid_cams_pane_g2

0xa815,	// (0x000a5146) linegrid_cams_pane_g3

0xb094,	// (0x000a59c5) linegrid_cams_pane_g4

0x33e7,	// (0x0009dd18) linegrid_cams_pane_g5

0x33f0,	// (0x0009dd21) linegrid_cams_pane_g6

0xa8c5,	// (0x000a51f6) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a9cb6) linegrid_cams_pane_g

0xb09d,	// (0x000a59ce) popup_clock_analogue_window

0xb09d,	// (0x000a59ce) popup_clock_digital_window

0x9eaa,	// (0x000a47db) popup_phob_thumbnail_window

0xa75d,	// (0x000a508e) call_video_uplink_pane_g1

0xb0a6,	// (0x000a59d7) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a9cc5) call_video_uplink_pane_g

0xa892,	// (0x000a51c3) video_uplink_pane

0xb0ae,	// (0x000a59df) mce_image_pane_g1

0x33f9,	// (0x0009dd2a) mce_image_pane_g2

0x3401,	// (0x0009dd32) mce_image_pane_g3

0x3409,	// (0x0009dd3a) mce_image_pane_g4

0x3411,	// (0x0009dd42) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a9cca) mce_image_pane_g

0xb0b8,	// (0x000a59e9) control_top_pane_stacon_cp01_ParamLimits

0xb0b8,	// (0x000a59e9) control_top_pane_stacon_cp01

0xb0cc,	// (0x000a59fd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0cc,	// (0x000a59fd) uni_indicator_pane_stacon_cp01

0xb0dd,	// (0x000a5a0e) bg_popup_sub_pane_cp03

0x3419,	// (0x0009dd4a) chi_dic_find_pane

0x3421,	// (0x0009dd52) listscroll_chi_dic_pane

0x342a,	// (0x0009dd5b) main_pane_chidic_g1

0xb0e7,	// (0x000a5a18) chi_dic_find_pane_t1

0xb0f5,	// (0x000a5a26) find_chidic_pane

0xb0fe,	// (0x000a5a2f) chi_dic_list_pane_ParamLimits

0xb0fe,	// (0x000a5a2f) chi_dic_list_pane

0xb10f,	// (0x000a5a40) scroll_pane_cp020

0xb117,	// (0x000a5a48) find_chidic_pane_t1

0x9eaa,	// (0x000a47db) input_focus_pane_cp06

0x343d,	// (0x0009dd6e) list_chi_dic_pane_ParamLimits

0x343d,	// (0x0009dd6e) list_chi_dic_pane

0x345a,	// (0x0009dd8b) list_chi_dic_pane_t1_ParamLimits

0x345a,	// (0x0009dd8b) list_chi_dic_pane_t1

0x9eaa,	// (0x000a47db) list_highlight_pane_cp020

0xb126,	// (0x000a5a57) bg_cale_heading_pane_g1

0x346d,	// (0x0009dd9e) bg_cale_heading_pane_g2

0x3475,	// (0x0009dda6) bg_cale_heading_pane_g3

0x347d,	// (0x0009ddae) bg_cale_heading_pane_g4

0x3487,	// (0x0009ddb8) bg_cale_heading_pane_g5

0x3491,	// (0x0009ddc2) bg_cale_heading_pane_g6

0x3499,	// (0x0009ddca) bg_cale_heading_pane_g7

0x34a1,	// (0x0009ddd2) bg_cale_heading_pane_g8

0x34ab,	// (0x0009dddc) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a9cd5) bg_cale_heading_pane_g

0xb126,	// (0x000a5a57) bg_cale_side_pane_g1

0x34b5,	// (0x0009dde6) bg_cale_side_pane_g2

0x34bf,	// (0x0009ddf0) bg_cale_side_pane_g3

0x34c9,	// (0x0009ddfa) bg_cale_side_pane_g4

0x34d3,	// (0x0009de04) bg_cale_side_pane_g5

0x34dd,	// (0x0009de0e) bg_cale_side_pane_g6

0x34e7,	// (0x0009de18) bg_cale_side_pane_g7

0x34f1,	// (0x0009de22) bg_cale_side_pane_g8

0x34f9,	// (0x0009de2a) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a9ce8) bg_cale_side_pane_g

0x3501,	// (0x0009de32) popup_call_status_window_ParamLimits

0x3501,	// (0x0009de32) popup_call_status_window

0xb12e,	// (0x000a5a5f) stacon_top_pane

0xb136,	// (0x000a5a67) status_pane_ParamLimits

0xb136,	// (0x000a5a67) status_pane

0xb14b,	// (0x000a5a7c) status_small_pane

0xb153,	// (0x000a5a84) control_pane

0x9eaa,	// (0x000a47db) stacon_bottom_pane

0xb15b,	// (0x000a5a8c) list_single_mce_smart_pane_t1_ParamLimits

0xb15b,	// (0x000a5a8c) list_single_mce_smart_pane_t1

0xb16e,	// (0x000a5a9f) list_single_mce_smart_pane_t2_ParamLimits

0xb16e,	// (0x000a5a9f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a9cfb) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a9cfb) list_single_mce_smart_pane_t

0x350d,	// (0x0009de3e) compass_pane

0x3519,	// (0x0009de4a) main_location2_pane_t1

0x352d,	// (0x0009de5e) main_location2_pane_t2

0x3541,	// (0x0009de72) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a9d00) main_location2_pane_t

0xb18d,	// (0x000a5abe) compass_pane_g1_ParamLimits

0xb18d,	// (0x000a5abe) compass_pane_g1

0x358b,	// (0x0009debc) compass_pane_t1

0x359a,	// (0x0009decb) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a9d09) compass_pane_t

0x35e5,	// (0x0009df16) text_secondary_cp61

0xb20b,	// (0x000a5b3c) navi_pane_cams_g5

0xb2e0,	// (0x000a5c11) navi_pane_im_t1

0xb2ee,	// (0x000a5c1f) navi_pane_mp_g1_ParamLimits

0xb2ee,	// (0x000a5c1f) navi_pane_mp_g1

0xb302,	// (0x000a5c33) navi_pane_mp_g2_ParamLimits

0xb302,	// (0x000a5c33) navi_pane_mp_g2

0xb30e,	// (0x000a5c3f) navi_pane_mp_g3_ParamLimits

0xb30e,	// (0x000a5c3f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a9d1d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a9d1d) navi_pane_mp_g

0xb31a,	// (0x000a5c4b) navi_pane_mp_t1

0xb328,	// (0x000a5c59) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a9d24) navi_pane_mp_t

0xb393,	// (0x000a5cc4) navi_pane_vt_g1

0xb31a,	// (0x000a5c4b) navi_pane_vt_t1

0xb39b,	// (0x000a5ccc) navi_slider_pane

0xa8d6,	// (0x000a5207) zooming_pane

0xb3ab,	// (0x000a5cdc) navi_slider_pane_g1

0x3620,	// (0x0009df51) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a9d2b) navi_slider_pane_g

0xb3cf,	// (0x000a5d00) aid_levels_zoom

0xb3d7,	// (0x000a5d08) zooming_pane_g1

0xb3df,	// (0x000a5d10) zooming_pane_g2

0xb3df,	// (0x000a5d10) zooming_pane_g3

0x0002,

0xf409,	// (0x000a9d3a) zooming_pane_g

0xb3e7,	// (0x000a5d18) level_10_zoom

0xb3f0,	// (0x000a5d21) level_11_zoom

0xb3f9,	// (0x000a5d2a) level_1_zoom

0xb402,	// (0x000a5d33) level_2_zoom

0xb40b,	// (0x000a5d3c) level_3_zoom

0xb414,	// (0x000a5d45) level_4_zoom

0xb41d,	// (0x000a5d4e) level_5_zoom

0xb426,	// (0x000a5d57) level_6_zoom

0xb42f,	// (0x000a5d60) level_7_zoom

0xb438,	// (0x000a5d69) level_8_zoom

0xb441,	// (0x000a5d72) level_9_zoom

0xb452,	// (0x000a5d83) popup_phob_thumbnail_window_g1

0xb45a,	// (0x000a5d8b) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a9d41) popup_phob_thumbnail_window_g

0xc755,	// (0x000a7086) level_1_location

0xc75d,	// (0x000a708e) level_2_location

0xc765,	// (0x000a7096) level_3_location

0xc76d,	// (0x000a709e) level_4_location

0xa8d6,	// (0x000a5207) level_5_location

0x3632,	// (0x0009df63) mce_icon_pane_g1

0x363a,	// (0x0009df6b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a9d46) mce_icon_pane_g

0x3642,	// (0x0009df73) main_mup_pane_g1_ParamLimits

0x3642,	// (0x0009df73) main_mup_pane_g1

0x365a,	// (0x0009df8b) main_mup_pane_g2_ParamLimits

0x365a,	// (0x0009df8b) main_mup_pane_g2

0x3676,	// (0x0009dfa7) main_mup_pane_g3_ParamLimits

0x3676,	// (0x0009dfa7) main_mup_pane_g3

0x3692,	// (0x0009dfc3) main_mup_pane_g4_ParamLimits

0x3692,	// (0x0009dfc3) main_mup_pane_g4

0x36ae,	// (0x0009dfdf) main_mup_pane_g5_ParamLimits

0x36ae,	// (0x0009dfdf) main_mup_pane_g5

0x36cf,	// (0x0009e000) main_mup_pane_g6_ParamLimits

0x36cf,	// (0x0009e000) main_mup_pane_g6

0x36eb,	// (0x0009e01c) main_mup_pane_g7_ParamLimits

0x36eb,	// (0x0009e01c) main_mup_pane_g7

0x3707,	// (0x0009e038) main_mup_pane_g8_ParamLimits

0x3707,	// (0x0009e038) main_mup_pane_g8

0x3723,	// (0x0009e054) main_mup_pane_g9_ParamLimits

0x3723,	// (0x0009e054) main_mup_pane_g9

0x3742,	// (0x0009e073) main_mup_pane_g10_ParamLimits

0x3742,	// (0x0009e073) main_mup_pane_g10

0x3761,	// (0x0009e092) main_mup_pane_g11_ParamLimits

0x3761,	// (0x0009e092) main_mup_pane_g11

0x3779,	// (0x0009e0aa) main_mup_pane_g12_ParamLimits

0x3779,	// (0x0009e0aa) main_mup_pane_g12

0x3787,	// (0x0009e0b8) main_mup_pane_g13_ParamLimits

0x3787,	// (0x0009e0b8) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a9d4b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a9d4b) main_mup_pane_g

0x379d,	// (0x0009e0ce) main_mup_pane_t1_ParamLimits

0x379d,	// (0x0009e0ce) main_mup_pane_t1

0x37ba,	// (0x0009e0eb) main_mup_pane_t2_ParamLimits

0x37ba,	// (0x0009e0eb) main_mup_pane_t2

0x37d4,	// (0x0009e105) main_mup_pane_t3_ParamLimits

0x37d4,	// (0x0009e105) main_mup_pane_t3

0x37ee,	// (0x0009e11f) main_mup_pane_t4_ParamLimits

0x37ee,	// (0x0009e11f) main_mup_pane_t4

0x3800,	// (0x0009e131) main_mup_pane_t5_ParamLimits

0x3800,	// (0x0009e131) main_mup_pane_t5

0x3812,	// (0x0009e143) main_mup_pane_t6_ParamLimits

0x3812,	// (0x0009e143) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a9d66) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a9d66) main_mup_pane_t

0x3828,	// (0x0009e159) mup_progress_pane_ParamLimits

0x3828,	// (0x0009e159) mup_progress_pane

0x3834,	// (0x0009e165) mup_visualizer_pane_ParamLimits

0x3834,	// (0x0009e165) mup_visualizer_pane

0x3872,	// (0x0009e1a3) mup_volume_pane_ParamLimits

0x3872,	// (0x0009e1a3) mup_volume_pane

0xb2d2,	// (0x000a5c03) mup_visualizer_pane_g1_ParamLimits

0xb2d2,	// (0x000a5c03) mup_visualizer_pane_g1

0xb2d2,	// (0x000a5c03) mup_visualizer_pane_g2_ParamLimits

0xb2d2,	// (0x000a5c03) mup_visualizer_pane_g2

0xb18d,	// (0x000a5abe) mup_visualizer_pane_g3_ParamLimits

0xb18d,	// (0x000a5abe) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a9d73) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a9d73) mup_visualizer_pane_g

0xa75d,	// (0x000a508e) mup_volume_pane_g1

0xb46a,	// (0x000a5d9b) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a9d7a) mup_volume_pane_g

0xa75d,	// (0x000a508e) mup_progress_pane_g1

0xb473,	// (0x000a5da4) mup_progress_pane_g2

0xb47c,	// (0x000a5dad) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a9d7f) mup_progress_pane_g

0x9eaa,	// (0x000a47db) bg_popup_window_pane_cp05

0xb485,	// (0x000a5db6) heading_pane_cp02_ParamLimits

0xb485,	// (0x000a5db6) heading_pane_cp02

0xb49f,	// (0x000a5dd0) list_popup_blid_pane

0xb4a7,	// (0x000a5dd8) list_blid_sat_info_pane_ParamLimits

0xb4a7,	// (0x000a5dd8) list_blid_sat_info_pane

0xb4ba,	// (0x000a5deb) list_blid_sat_info_pane_g1

0xb4c2,	// (0x000a5df3) list_blid_sat_info_pane_t1

0x397d,	// (0x0009e2ae) mup_equalizer_pane_ParamLimits

0x397d,	// (0x0009e2ae) mup_equalizer_pane

0x399e,	// (0x0009e2cf) mup_equalizer_pane_cp1_ParamLimits

0x399e,	// (0x0009e2cf) mup_equalizer_pane_cp1

0x39bf,	// (0x0009e2f0) mup_equalizer_pane_cp2_ParamLimits

0x39bf,	// (0x0009e2f0) mup_equalizer_pane_cp2

0x39e0,	// (0x0009e311) mup_equalizer_pane_cp3_ParamLimits

0x39e0,	// (0x0009e311) mup_equalizer_pane_cp3

0x3a01,	// (0x0009e332) mup_equalizer_pane_cp4_ParamLimits

0x3a01,	// (0x0009e332) mup_equalizer_pane_cp4

0x3a22,	// (0x0009e353) mup_equalizer_pane_cp5

0x3a38,	// (0x0009e369) mup_equalizer_pane_cp6

0x3a50,	// (0x0009e381) mup_equalizer_pane_cp7

0xc673,	// (0x000a6fa4) bg_popup_call_poc_act_pane_g9

0xc67b,	// (0x000a6fac) bg_popup_call_poc_act_pane_g10

0xc683,	// (0x000a6fb4) bg_popup_call_poc_act_pane_g11

0x000a,

0xa624,	// (0x000a4f55) mup_scale_pane

0xa75d,	// (0x000a508e) mup_scale_pane_g1

0xb4d0,	// (0x000a5e01) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a9d9b) mup_scale_pane_g

0xb4f4,	// (0x000a5e25) msg_data_pane

0xb4fc,	// (0x000a5e2d) scroll_pane_cp017

0x3a7a,	// (0x0009e3ab) bg_list_pane_cp04_ParamLimits

0x3a7a,	// (0x0009e3ab) bg_list_pane_cp04

0xb504,	// (0x000a5e35) msg_data_pane_g1

0x3a9e,	// (0x0009e3cf) msg_data_pane_g2

0x3401,	// (0x0009dd32) msg_data_pane_g3

0x3aa6,	// (0x0009e3d7) msg_data_pane_g4

0x3aae,	// (0x0009e3df) msg_data_pane_g5

0x3ab6,	// (0x0009e3e7) msg_data_pane_g6

0x3abe,	// (0x0009e3ef) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a9daa) msg_data_pane_g

0x3ac6,	// (0x0009e3f7) msg_text_pane_ParamLimits

0x3ac6,	// (0x0009e3f7) msg_text_pane

0x3b08,	// (0x0009e439) qrid_highlight_pane_cp011_ParamLimits

0x3b08,	// (0x0009e439) qrid_highlight_pane_cp011

0x9eaa,	// (0x000a47db) msg_body_pane

0x9eaa,	// (0x000a47db) msg_header_pane

0xb515,	// (0x000a5e46) input_focus_pane_cp07

0x3b32,	// (0x0009e463) msg_header_pane_t1_ParamLimits

0x3b32,	// (0x0009e463) msg_header_pane_t1

0x3b44,	// (0x0009e475) msg_header_pane_t2_ParamLimits

0x3b44,	// (0x0009e475) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a9dbe) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a9dbe) msg_header_pane_t

0xb52a,	// (0x000a5e5b) msg_body_pane_g1

0x3b56,	// (0x0009e487) msg_body_pane_t1_ParamLimits

0x3b56,	// (0x0009e487) msg_body_pane_t1

0x3b87,	// (0x0009e4b8) msg_body_pane_t2_ParamLimits

0x3b87,	// (0x0009e4b8) msg_body_pane_t2

0x3b99,	// (0x0009e4ca) msg_body_pane_t3_ParamLimits

0x3b99,	// (0x0009e4ca) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a9dc3) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a9dc3) msg_body_pane_t

0x3bfd,	// (0x0009e52e) main_viewer_pane_g1_ParamLimits

0x3bfd,	// (0x0009e52e) main_viewer_pane_g1

0x3c09,	// (0x0009e53a) main_viewer_pane_g2_ParamLimits

0x3c09,	// (0x0009e53a) main_viewer_pane_g2

0x3c15,	// (0x0009e546) main_viewer_pane_g3_ParamLimits

0x3c15,	// (0x0009e546) main_viewer_pane_g3

0x3c26,	// (0x0009e557) main_viewer_pane_g4_ParamLimits

0x3c26,	// (0x0009e557) main_viewer_pane_g4

0x3c37,	// (0x0009e568) main_viewer_pane_g5_ParamLimits

0x3c37,	// (0x0009e568) main_viewer_pane_g5

0x3c37,	// (0x0009e568) main_viewer_pane_g7_ParamLimits

0x3c37,	// (0x0009e568) main_viewer_pane_g7

0xadf8,	// (0x000a5729) main_viewer_pane_g8_ParamLimits

0xadf8,	// (0x000a5729) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a9dd3) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a9dd3) main_viewer_pane_g

0xb532,	// (0x000a5e63) viewer_content_pane_ParamLimits

0xb532,	// (0x000a5e63) viewer_content_pane

0x3c75,	// (0x0009e5a6) main_postcard_pane_g1_ParamLimits

0x3c75,	// (0x0009e5a6) main_postcard_pane_g1

0x3c83,	// (0x0009e5b4) main_postcard_pane_g2_ParamLimits

0x3c83,	// (0x0009e5b4) main_postcard_pane_g2

0x3c91,	// (0x0009e5c2) main_postcard_pane_g3_ParamLimits

0x3c91,	// (0x0009e5c2) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a9de4) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a9de4) main_postcard_pane_g

0x3ca1,	// (0x0009e5d2) main_postcard_pane_g4

0xc855,	// (0x000a7186) smil_status_volume_pane_g2

0x3ccd,	// (0x0009e5fe) postcard_pane_ParamLimits

0x3ccd,	// (0x0009e5fe) postcard_pane

0xb2d2,	// (0x000a5c03) postcard_pane_g1_ParamLimits

0xb2d2,	// (0x000a5c03) postcard_pane_g1

0x3cff,	// (0x0009e630) postcard_pane_g2_ParamLimits

0x3cff,	// (0x0009e630) postcard_pane_g2

0x3d0b,	// (0x0009e63c) postcard_pane_g3_ParamLimits

0x3d0b,	// (0x0009e63c) postcard_pane_g3

0xb54e,	// (0x000a5e7f) postcard_pane_g4_ParamLimits

0xb54e,	// (0x000a5e7f) postcard_pane_g4

0x3d17,	// (0x0009e648) postcard_pane_g5_ParamLimits

0x3d17,	// (0x0009e648) postcard_pane_g5

0x3d23,	// (0x0009e654) postcard_pane_g6_ParamLimits

0x3d23,	// (0x0009e654) postcard_pane_g6

0xb540,	// (0x000a5e71) postcard_pane_g7_ParamLimits

0xb540,	// (0x000a5e71) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a9df1) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a9df1) postcard_pane_g

0x3d2f,	// (0x0009e660) main_mp2_pane_g1_ParamLimits

0x3d2f,	// (0x0009e660) main_mp2_pane_g1

0x3d3b,	// (0x0009e66c) main_mp2_pane_g2_ParamLimits

0x3d3b,	// (0x0009e66c) main_mp2_pane_g2

0x3d47,	// (0x0009e678) main_mp2_pane_g3_ParamLimits

0x3d47,	// (0x0009e678) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a9e00) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a9e00) main_mp2_pane_g

0x3d53,	// (0x0009e684) main_mp2_pane_t1_ParamLimits

0x3d53,	// (0x0009e684) main_mp2_pane_t1

0x3d6a,	// (0x0009e69b) main_mp2_pane_t2_ParamLimits

0x3d6a,	// (0x0009e69b) main_mp2_pane_t2

0x3d7c,	// (0x0009e6ad) main_mp2_pane_t3_ParamLimits

0x3d7c,	// (0x0009e6ad) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a9e07) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a9e07) main_mp2_pane_t

0xb55c,	// (0x000a5e8d) pec_content_pane_ParamLimits

0xb55c,	// (0x000a5e8d) pec_content_pane

0xaa7f,	// (0x000a53b0) scroll_pane_cp015

0xb56e,	// (0x000a5e9f) pec_attribute_pane_ParamLimits

0xb56e,	// (0x000a5e9f) pec_attribute_pane

0x3d8e,	// (0x0009e6bf) pec_content_pane_g1_ParamLimits

0x3d8e,	// (0x0009e6bf) pec_content_pane_g1

0xb57e,	// (0x000a5eaf) pec_content_pane_t1_ParamLimits

0xb57e,	// (0x000a5eaf) pec_content_pane_t1

0xb590,	// (0x000a5ec1) pec_content_pane_t2_ParamLimits

0xb590,	// (0x000a5ec1) pec_content_pane_t2

0x0001,

0x019c,	// (0x0009aacd) pec_content_pane_t_ParamLimits

0x019c,	// (0x0009aacd) pec_content_pane_t

0x3d9a,	// (0x0009e6cb) list_single_graphic_pane_cp01_ParamLimits

0x3d9a,	// (0x0009e6cb) list_single_graphic_pane_cp01

0xa624,	// (0x000a4f55) bg_popup_sub_pane_cp04

0xb5a2,	// (0x000a5ed3) popup_mup_playback_window_g1

0xb5ae,	// (0x000a5edf) popup_mup_playback_window_t1

0xb5c3,	// (0x000a5ef4) popup_mup_playback_window_t2

0x0001,

0x01a1,	// (0x0009aad2) popup_mup_playback_window_t

0xb5fa,	// (0x000a5f2b) main_image_pane_g1_ParamLimits

0xb5fa,	// (0x000a5f2b) main_image_pane_g1

0xb63d,	// (0x000a5f6e) scroll_pane_cp018_ParamLimits

0xb63d,	// (0x000a5f6e) scroll_pane_cp018

0xb655,	// (0x000a5f86) scroll_pane_cp016_ParamLimits

0xb655,	// (0x000a5f86) scroll_pane_cp016

0x3e3a,	// (0x0009e76b) smil2_image_pane_ParamLimits

0x3e3a,	// (0x0009e76b) smil2_image_pane

0x3e6e,	// (0x0009e79f) smil2_root_pane_ParamLimits

0x3e6e,	// (0x0009e79f) smil2_root_pane

0x3e9a,	// (0x0009e7cb) smil2_text_pane_ParamLimits

0x3e9a,	// (0x0009e7cb) smil2_text_pane

0x9eaa,	// (0x000a47db) bg_list_pane_cp06

0xb691,	// (0x000a5fc2) grid_radio_pane

0x9eaa,	// (0x000a47db) bg_popup_window_pane_cp06

0xb699,	// (0x000a5fca) main_fmradio_pane_t1

0xafc4,	// (0x000a58f5) heading_pane_cp04

0xb6a7,	// (0x000a5fd8) main_fmradio_pane_t2

0xc68b,	// (0x000a6fbc) popup_cale_lunar_info_window_g1

0xb6b5,	// (0x000a5fe6) main_fmradio_pane_t3

0xc693,	// (0x000a6fc4) popup_cale_lunar_info_window_g2

0xb6c3,	// (0x000a5ff4) main_fmradio_pane_t4

0x0001,

0xb6d1,	// (0x000a6002) main_fmradio_pane_t5

0x0004,

0x027c,	// (0x0009abad) popup_cale_lunar_info_window_g

0x01b6,	// (0x0009aae7) main_fmradio_pane_t

0xb6df,	// (0x000a6010) wait_bar_pane_cp03

0xb6e7,	// (0x000a6018) cell_fmradio_pane_ParamLimits

0xb6e7,	// (0x000a6018) cell_fmradio_pane

0xb540,	// (0x000a5e71) cell_fmradio_pane_g1_ParamLimits

0xb540,	// (0x000a5e71) cell_fmradio_pane_g1

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp011

0xb6fa,	// (0x000a602b) poc_content_pane_ParamLimits

0xb6fa,	// (0x000a602b) poc_content_pane

0xb70c,	// (0x000a603d) scroll_pane_cp019

0x3eda,	// (0x0009e80b) popup_call_poc_act_window_ParamLimits

0x3eda,	// (0x0009e80b) popup_call_poc_act_window

0x3ee7,	// (0x0009e818) popup_call_poc_inact_window_ParamLimits

0x3ee7,	// (0x0009e818) popup_call_poc_inact_window

0x0253,	// (0x0009ab84) bg_popup_call_poc_act_pane_g

0xc603,	// (0x000a6f34) bg_popup_call_poc_inact_pane_g1

0xc60b,	// (0x000a6f3c) bg_popup_call_poc_inact_pane_g2

0xb714,	// (0x000a6045) popup_call_poc_act_window_g2

0xc613,	// (0x000a6f44) bg_popup_call_poc_inact_pane_g3

0xc61b,	// (0x000a6f4c) bg_popup_call_poc_inact_pane_g4

0xc623,	// (0x000a6f54) bg_popup_call_poc_inact_pane_g5

0xb71c,	// (0x000a604d) popup_call_poc_act_window_t1_ParamLimits

0xb71c,	// (0x000a604d) popup_call_poc_act_window_t1

0xb744,	// (0x000a6075) popup_call_poc_act_window_t2_ParamLimits

0xb744,	// (0x000a6075) popup_call_poc_act_window_t2

0xb76c,	// (0x000a609d) popup_call_poc_act_window_t3_ParamLimits

0xb76c,	// (0x000a609d) popup_call_poc_act_window_t3

0xb794,	// (0x000a60c5) popup_call_poc_act_window_t4_ParamLimits

0xb794,	// (0x000a60c5) popup_call_poc_act_window_t4

0x0003,

0x01c1,	// (0x0009aaf2) popup_call_poc_act_window_t_ParamLimits

0x01c1,	// (0x0009aaf2) popup_call_poc_act_window_t

0xc62b,	// (0x000a6f5c) bg_popup_call_poc_inact_pane_g6

0xc633,	// (0x000a6f64) bg_popup_call_poc_inact_pane_g7

0xc63b,	// (0x000a6f6c) bg_popup_call_poc_inact_pane_g8

0xb7a6,	// (0x000a60d7) popup_call_poc_inact_window_g2

0xc643,	// (0x000a6f74) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0240,	// (0x0009ab71) bg_popup_call_poc_inact_pane_g

0xb7ae,	// (0x000a60df) popup_call_poc_inact_window_t1_ParamLimits

0xb7ae,	// (0x000a60df) popup_call_poc_inact_window_t1

0xb7c3,	// (0x000a60f4) popup_call_poc_inact_window_t2_ParamLimits

0xb7c3,	// (0x000a60f4) popup_call_poc_inact_window_t2

0xb7d8,	// (0x000a6109) popup_call_poc_inact_window_t3_ParamLimits

0xb7d8,	// (0x000a6109) popup_call_poc_inact_window_t3

0x0002,

0x01ca,	// (0x0009aafb) popup_call_poc_inact_window_t_ParamLimits

0x01ca,	// (0x0009aafb) popup_call_poc_inact_window_t

0xc7c8,	// (0x000a70f9) context_pane_ParamLimits

0x4523,	// (0x0009ee54) signal_pane_ParamLimits

0xa8d6,	// (0x000a5207) main_call2_pane

0x4496,	// (0x0009edc7) popup_phob_thumbnail2_window_ParamLimits

0x4496,	// (0x0009edc7) popup_phob_thumbnail2_window

0x3bab,	// (0x0009e4dc) aid_hotspot_pointer_arrow_pane

0x3bb3,	// (0x0009e4e4) aid_hotspot_pointer_hand_pane

0x420d,	// (0x0009eb3e) phob_pre_status_pane_g5

0x1b95,	// (0x0009c4c6) cams_zoom_pane_ParamLimits

0x1ba1,	// (0x0009c4d2) image_vga_pane_ParamLimits

0x1bb0,	// (0x0009c4e1) main_camera_pane_g1_ParamLimits

0x1bbe,	// (0x0009c4ef) main_camera_pane_g2_ParamLimits

0x1bca,	// (0x0009c4fb) main_camera_pane_g3_ParamLimits

0x1bd6,	// (0x0009c507) main_camera_pane_g4_ParamLimits

0x1be2,	// (0x0009c513) main_camera_pane_g5_ParamLimits

0x1bee,	// (0x0009c51f) main_camera_pane_g6_ParamLimits

0x1bfa,	// (0x0009c52b) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a9b3b) main_camera_pane_g_ParamLimits

0x1c06,	// (0x0009c537) main_camera_pane_t1_ParamLimits

0x1c18,	// (0x0009c549) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a9b4c) main_camera_pane_t_ParamLimits

0xa624,	// (0x000a4f55) bg_popup_preview_window_pane_cp01_ParamLimits

0xa624,	// (0x000a4f55) bg_popup_preview_window_pane_cp01

0xb7ed,	// (0x000a611e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7ed,	// (0x000a611e) popup_phob_thumbnail2_window_g1

0x9eaa,	// (0x000a47db) call2_cli_visual_pane

0x3f03,	// (0x0009e834) popup_call2_audio_conf_window_ParamLimits

0x3f03,	// (0x0009e834) popup_call2_audio_conf_window

0x3f18,	// (0x0009e849) popup_call2_audio_first_window_ParamLimits

0x3f18,	// (0x0009e849) popup_call2_audio_first_window

0x3fb6,	// (0x0009e8e7) popup_call2_audio_in_window_ParamLimits

0x3fb6,	// (0x0009e8e7) popup_call2_audio_in_window

0x3ff8,	// (0x0009e929) popup_call2_audio_out_window_ParamLimits

0x3ff8,	// (0x0009e929) popup_call2_audio_out_window

0x405a,	// (0x0009e98b) popup_call2_audio_second_window_ParamLimits

0x405a,	// (0x0009e98b) popup_call2_audio_second_window

0x40b8,	// (0x0009e9e9) popup_call2_audio_wait_window_ParamLimits

0x40b8,	// (0x0009e9e9) popup_call2_audio_wait_window

0x9eaa,	// (0x000a47db) bg_popup_call2_act_pane_cp03

0xa606,	// (0x000a4f37) list_conf_pane_cp

0xb7f9,	// (0x000a612a) popup_call2_audio_conf_window_t1

0xb807,	// (0x000a6138) list_single_graphic_popup_conf2_pane_ParamLimits

0xb807,	// (0x000a6138) list_single_graphic_popup_conf2_pane

0xb064,	// (0x000a5995) list_highlight_pane_cp04

0xb81a,	// (0x000a614b) list_single_graphic_popup_conf2_pane_g1

0xb075,	// (0x000a59a6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4ed,	// (0x000a9e1e) list_single_graphic_popup_conf2_pane_g

0xb824,	// (0x000a6155) list_single_graphic_popup_conf2_pane_t1

0xb832,	// (0x000a6163) bg_popup_call2_act_pane_cp01_ParamLimits

0xb832,	// (0x000a6163) bg_popup_call2_act_pane_cp01

0xb8bc,	// (0x000a61ed) call_type_pane_cp05_ParamLimits

0xb8bc,	// (0x000a61ed) call_type_pane_cp05

0xb910,	// (0x000a6241) popup_call2_audio_second_window_g1_ParamLimits

0xb910,	// (0x000a6241) popup_call2_audio_second_window_g1

0xb964,	// (0x000a6295) popup_call2_audio_second_window_g2_ParamLimits

0xb964,	// (0x000a6295) popup_call2_audio_second_window_g2

0x0002,

0x01d6,	// (0x0009ab07) popup_call2_audio_second_window_g_ParamLimits

0x01d6,	// (0x0009ab07) popup_call2_audio_second_window_g

0xb9c9,	// (0x000a62fa) popup_call2_audio_second_window_t1_ParamLimits

0xb9c9,	// (0x000a62fa) popup_call2_audio_second_window_t1

0xba84,	// (0x000a63b5) popup_call2_audio_second_window_t2_ParamLimits

0xba84,	// (0x000a63b5) popup_call2_audio_second_window_t2

0xbad7,	// (0x000a6408) popup_call2_audio_second_window_t3_ParamLimits

0xbad7,	// (0x000a6408) popup_call2_audio_second_window_t3

0x0003,

0x01dd,	// (0x0009ab0e) popup_call2_audio_second_window_t_ParamLimits

0x01dd,	// (0x0009ab0e) popup_call2_audio_second_window_t

0x9eaa,	// (0x000a47db) bg_popup_call2_in_pane_cp02

0x9eb4,	// (0x000a47e5) call_type_pane_cp04

0x9ebc,	// (0x000a47ed) popup_call2_audio_wait_window_g1

0x9ec4,	// (0x000a47f5) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a9a2a) popup_call2_audio_wait_window_g

0x9ecc,	// (0x000a47fd) popup_call2_audio_wait_window_t3

0xbbca,	// (0x000a64fb) bg_popup_call2_act_pane_ParamLimits

0xbbca,	// (0x000a64fb) bg_popup_call2_act_pane

0xbc8a,	// (0x000a65bb) call_type_pane_cp03_ParamLimits

0xbc8a,	// (0x000a65bb) call_type_pane_cp03

0xbcee,	// (0x000a661f) popup_call2_audio_first_window_g1_ParamLimits

0xbcee,	// (0x000a661f) popup_call2_audio_first_window_g1

0xbd5e,	// (0x000a668f) popup_call2_audio_first_window_g2_ParamLimits

0xbd5e,	// (0x000a668f) popup_call2_audio_first_window_g2

0xb2d2,	// (0x000a5c03) popup_call2_audio_first_window_g3_ParamLimits

0xb2d2,	// (0x000a5c03) popup_call2_audio_first_window_g3

0x0004,

0xf4f2,	// (0x000a9e23) popup_call2_audio_first_window_g_ParamLimits

0xf4f2,	// (0x000a9e23) popup_call2_audio_first_window_g

0xbe3c,	// (0x000a676d) popup_call2_audio_first_window_t1_ParamLimits

0xbe3c,	// (0x000a676d) popup_call2_audio_first_window_t1

0xbf3f,	// (0x000a6870) popup_call2_audio_first_window_t4_ParamLimits

0xbf3f,	// (0x000a6870) popup_call2_audio_first_window_t4

0xc022,	// (0x000a6953) popup_call2_audio_first_window_t5_ParamLimits

0xc022,	// (0x000a6953) popup_call2_audio_first_window_t5

0x0003,

0xf4fd,	// (0x000a9e2e) popup_call2_audio_first_window_t_ParamLimits

0xf4fd,	// (0x000a9e2e) popup_call2_audio_first_window_t

0xa61c,	// (0x000a4f4d) bg_popup_call2_act_pane_g1

0xc69b,	// (0x000a6fcc) popup_cale_lunar_info_window_t1

0xc6a9,	// (0x000a6fda) popup_cale_lunar_info_window_t2

0xc6b7,	// (0x000a6fe8) popup_cale_lunar_info_window_t3

0x9eaa,	// (0x000a47db) bg_popup_call2_bubble_pane

0xc123,	// (0x000a6a54) bg_popup_call2_in_pane_cp01_ParamLimits

0xc123,	// (0x000a6a54) bg_popup_call2_in_pane_cp01

0x9b86,	// (0x000a44b7) call_type_pane_cp02

0xc16b,	// (0x000a6a9c) popup_call2_audio_out_window_g1_ParamLimits

0xc16b,	// (0x000a6a9c) popup_call2_audio_out_window_g1

0xc197,	// (0x000a6ac8) popup_call2_audio_out_window_g2_ParamLimits

0xc197,	// (0x000a6ac8) popup_call2_audio_out_window_g2

0xc1bf,	// (0x000a6af0) popup_call2_audio_out_window_g3_ParamLimits

0xc1bf,	// (0x000a6af0) popup_call2_audio_out_window_g3

0x0003,

0xf506,	// (0x000a9e37) popup_call2_audio_out_window_g_ParamLimits

0xf506,	// (0x000a9e37) popup_call2_audio_out_window_g

0xc1fa,	// (0x000a6b2b) popup_call2_audio_out_window_t1_ParamLimits

0xc1fa,	// (0x000a6b2b) popup_call2_audio_out_window_t1

0xc259,	// (0x000a6b8a) popup_call2_audio_out_window_t2_ParamLimits

0xc259,	// (0x000a6b8a) popup_call2_audio_out_window_t2

0xc2b9,	// (0x000a6bea) popup_call2_audio_out_window_t3_ParamLimits

0xc2b9,	// (0x000a6bea) popup_call2_audio_out_window_t3

0xc2cf,	// (0x000a6c00) popup_call2_audio_out_window_t4_ParamLimits

0xc2cf,	// (0x000a6c00) popup_call2_audio_out_window_t4

0xc2e5,	// (0x000a6c16) popup_call2_audio_out_window_t5_ParamLimits

0xc2e5,	// (0x000a6c16) popup_call2_audio_out_window_t5

0x0005,

0xf50f,	// (0x000a9e40) popup_call2_audio_out_window_t_ParamLimits

0xf50f,	// (0x000a9e40) popup_call2_audio_out_window_t

0xc349,	// (0x000a6c7a) bg_popup_call2_in_pane_ParamLimits

0xc349,	// (0x000a6c7a) bg_popup_call2_in_pane

0xc3a5,	// (0x000a6cd6) popup_call2_audio_in_window_g1_ParamLimits

0xc3a5,	// (0x000a6cd6) popup_call2_audio_in_window_g1

0xc3dd,	// (0x000a6d0e) popup_call2_audio_in_window_g2_ParamLimits

0xc3dd,	// (0x000a6d0e) popup_call2_audio_in_window_g2

0xc415,	// (0x000a6d46) popup_call2_audio_in_window_g3_ParamLimits

0xc415,	// (0x000a6d46) popup_call2_audio_in_window_g3

0x0003,

0x0210,	// (0x0009ab41) popup_call2_audio_in_window_g_ParamLimits

0x0210,	// (0x0009ab41) popup_call2_audio_in_window_g

0xc46d,	// (0x000a6d9e) popup_call2_audio_in_window_t1_ParamLimits

0xc46d,	// (0x000a6d9e) popup_call2_audio_in_window_t1

0xc4ed,	// (0x000a6e1e) popup_call2_audio_in_window_t2_ParamLimits

0xc4ed,	// (0x000a6e1e) popup_call2_audio_in_window_t2

0xc56d,	// (0x000a6e9e) popup_call2_audio_in_window_t3_ParamLimits

0xc56d,	// (0x000a6e9e) popup_call2_audio_in_window_t3

0xc587,	// (0x000a6eb8) popup_call2_audio_in_window_t4_ParamLimits

0xc587,	// (0x000a6eb8) popup_call2_audio_in_window_t4

0xc599,	// (0x000a6eca) popup_call2_audio_in_window_t5_ParamLimits

0xc599,	// (0x000a6eca) popup_call2_audio_in_window_t5

0xc5ae,	// (0x000a6edf) popup_call2_audio_in_window_t6_ParamLimits

0xc5ae,	// (0x000a6edf) popup_call2_audio_in_window_t6

0x0005,

0x0219,	// (0x0009ab4a) popup_call2_audio_in_window_t_ParamLimits

0x0219,	// (0x0009ab4a) popup_call2_audio_in_window_t

0xa61c,	// (0x000a4f4d) bg_popup_call2_in_pane_g1

0xc6c5,	// (0x000a6ff6) popup_cale_lunar_info_window_t4

0x0003,

0x0281,	// (0x0009abb2) popup_cale_lunar_info_window_t

0xa624,	// (0x000a4f55) bg_popup_call2_rect_pane_ParamLimits

0xa624,	// (0x000a4f55) bg_popup_call2_rect_pane

0x9eaa,	// (0x000a47db) call2_cli_visual_graphic_pane

0x9eaa,	// (0x000a47db) call2_cli_visual_text_pane

0x45d1,	// (0x0009ef02) smil_status_volume_pane_g3

0x0002,

0xa75d,	// (0x000a508e) call2_cli_visual_graphic_pane_g1

0xa75d,	// (0x000a508e) call2_cli_visual_graphic_pane_g2

0xa75d,	// (0x000a508e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf51c,	// (0x000a9e4d) call2_cli_visual_graphic_pane_g

0xc5c3,	// (0x000a6ef4) bg_popup_call2_rect_pane_g1

0xa7fb,	// (0x000a512c) bg_popup_call2_rect_pane_g2

0xc5cb,	// (0x000a6efc) bg_popup_call2_rect_pane_g3

0xc5d3,	// (0x000a6f04) bg_popup_call2_rect_pane_g4

0xc5db,	// (0x000a6f0c) bg_popup_call2_rect_pane_g5

0xc5e3,	// (0x000a6f14) bg_popup_call2_rect_pane_g6

0xc5eb,	// (0x000a6f1c) bg_popup_call2_rect_pane_g7

0xc5f3,	// (0x000a6f24) bg_popup_call2_rect_pane_g8

0xc5fb,	// (0x000a6f2c) bg_popup_call2_rect_pane_g9

0x0008,

0xf523,	// (0x000a9e54) bg_popup_call2_rect_pane_g

0xc603,	// (0x000a6f34) bg_popup_call2_bubble_pane_g1

0xc60b,	// (0x000a6f3c) bg_popup_call2_bubble_pane_g2

0xc613,	// (0x000a6f44) bg_popup_call2_bubble_pane_g3

0xc61b,	// (0x000a6f4c) bg_popup_call2_bubble_pane_g4

0xc623,	// (0x000a6f54) bg_popup_call2_bubble_pane_g5

0xc62b,	// (0x000a6f5c) bg_popup_call2_bubble_pane_g6

0xc633,	// (0x000a6f64) bg_popup_call2_bubble_pane_g7

0xc63b,	// (0x000a6f6c) bg_popup_call2_bubble_pane_g8

0xc643,	// (0x000a6f74) bg_popup_call2_bubble_pane_g9

0x0008,

0x0240,	// (0x0009ab71) bg_popup_call2_bubble_pane_g

0x15bd,	// (0x0009beee) aid_cale_week_size_cell_pane

0x1c2a,	// (0x0009c55b) aid_cams_cif_uncrop_pane_ParamLimits

0x1c2a,	// (0x0009c55b) aid_cams_cif_uncrop_pane

0x1d85,	// (0x0009c6b6) aid_cams_size_cell_ParamLimits

0x1d85,	// (0x0009c6b6) aid_cams_size_cell

0x1d91,	// (0x0009c6c2) grid_cams_pane_ParamLimits

0x1d9f,	// (0x0009c6d0) linegrid_cams_pane_ParamLimits

0x1f84,	// (0x0009c8b5) call_video_pane_t1

0x1fa5,	// (0x0009c8d6) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a9b9f) call_video_pane_t

0x2514,	// (0x0009ce45) aid_cale_month_size_cell_pane_ParamLimits

0x2514,	// (0x0009ce45) aid_cale_month_size_cell_pane

0xf566,	// (0x000a9e97) smil_status_volume_pane_g

0x45de,	// (0x0009ef0f) volume_smil_pane_ParamLimits

0x0d1e,	// (0x0009b64f) aid_popup2_width_pane

0x14b1,	// (0x0009bde2) cell_qdial_pane_g4_ParamLimits

0x14b1,	// (0x0009bde2) cell_qdial_pane_g4

0x3567,	// (0x0009de98) aid_blid_cardinal_pane_ParamLimits

0x3577,	// (0x0009dea8) aid_blid_destination_pane_ParamLimits

0x3577,	// (0x0009dea8) aid_blid_destination_pane

0xa624,	// (0x000a4f55) bg_popup_call_poc_act_pane_ParamLimits

0xa624,	// (0x000a4f55) bg_popup_call_poc_act_pane

0xa624,	// (0x000a4f55) bg_popup_call_poc_inact_pane_ParamLimits

0xa624,	// (0x000a4f55) bg_popup_call_poc_inact_pane

0xc64b,	// (0x000a6f7c) bg_popup_call_poc_act_pane_g1

0xc653,	// (0x000a6f84) bg_popup_call_poc_act_pane_g2

0xc65b,	// (0x000a6f8c) bg_popup_call_poc_act_pane_g3

0xc61b,	// (0x000a6f4c) bg_popup_call_poc_act_pane_g4

0xc623,	// (0x000a6f54) bg_popup_call_poc_act_pane_g5

0xc663,	// (0x000a6f94) bg_popup_call_poc_act_pane_g6

0xc633,	// (0x000a6f64) bg_popup_call_poc_act_pane_g7

0xc66b,	// (0x000a6f9c) bg_popup_call_poc_act_pane_g8

0x9eaa,	// (0x000a47db) main_usb_pane

0x43cf,	// (0x0009ed00) popup_cale_lunar_info_window

0x22c4,	// (0x0009cbf5) im_reading_pane_t1_ParamLimits

0xa9d7,	// (0x000a5308) list_im_pane_ParamLimits

0xa9e8,	// (0x000a5319) scroll_pane_cp07_ParamLimits

0x9eaa,	// (0x000a47db) grid_highlight_pane_cp012

0xa624,	// (0x000a4f55) mup_scale_pane_ParamLimits

0xb2d2,	// (0x000a5c03) main_usb_pane_g1_ParamLimits

0xb2d2,	// (0x000a5c03) main_usb_pane_g1

0x4130,	// (0x0009ea61) main_usb_pane_g2_ParamLimits

0x4130,	// (0x0009ea61) main_usb_pane_g2

0x0001,

0xf536,	// (0x000a9e67) main_usb_pane_g_ParamLimits

0xf536,	// (0x000a9e67) main_usb_pane_g

0x413c,	// (0x0009ea6d) main_usb_pane_t1_ParamLimits

0x413c,	// (0x0009ea6d) main_usb_pane_t1

0x414e,	// (0x0009ea7f) main_usb_pane_t2_ParamLimits

0x414e,	// (0x0009ea7f) main_usb_pane_t2

0x4160,	// (0x0009ea91) main_usb_pane_t3_ParamLimits

0x4160,	// (0x0009ea91) main_usb_pane_t3

0x4172,	// (0x0009eaa3) main_usb_pane_t4_ParamLimits

0x4172,	// (0x0009eaa3) main_usb_pane_t4

0x4184,	// (0x0009eab5) main_usb_pane_t5_ParamLimits

0x4184,	// (0x0009eab5) main_usb_pane_t5

0x4196,	// (0x0009eac7) main_usb_pane_t6_ParamLimits

0x4196,	// (0x0009eac7) main_usb_pane_t6

0x0005,

0xf53b,	// (0x000a9e6c) main_usb_pane_t_ParamLimits

0x350d,	// (0x0009de3e) aid_text_placing

0x3519,	// (0x0009de4a) main_location2_pane_t1_ParamLimits

0x352d,	// (0x0009de5e) main_location2_pane_t2_ParamLimits

0x3541,	// (0x0009de72) main_location2_pane_t3_ParamLimits

0x3555,	// (0x0009de86) main_location2_pane_t4_ParamLimits

0x3555,	// (0x0009de86) main_location2_pane_t4

0xf3cf,	// (0x000a9d00) main_location2_pane_t_ParamLimits

0xa660,	// (0x000a4f91) find_pinb_pane_g2_ParamLimits

0xa660,	// (0x000a4f91) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a9a50) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a9a50) find_pinb_pane_g

0xa66c,	// (0x000a4f9d) find_pinb_pane_t1_ParamLimits

0xa67e,	// (0x000a4faf) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a9a55) find_pinb_pane_t_ParamLimits

0x9eaa,	// (0x000a47db) main_call3_pane

0x2a88,	// (0x0009d3b9) cale_month_day_heading_pane_t1_ParamLimits

0x2b0e,	// (0x0009d43f) cale_month_day_heading_pane_t2_ParamLimits

0x2b9f,	// (0x0009d4d0) cale_month_day_heading_pane_t3_ParamLimits

0x2c30,	// (0x0009d561) cale_month_day_heading_pane_t4_ParamLimits

0x2cc1,	// (0x0009d5f2) cale_month_day_heading_pane_t5_ParamLimits

0x2d52,	// (0x0009d683) cale_month_day_heading_pane_t6_ParamLimits

0x2def,	// (0x0009d720) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a9bd7) cale_month_day_heading_pane_t_ParamLimits

0xac32,	// (0x000a5563) smil_status_volume_pane

0x3ce7,	// (0x0009e618) postcard_address_pane_ParamLimits

0x3ce7,	// (0x0009e618) postcard_address_pane

0x3cf3,	// (0x0009e624) postcard_message_pane_ParamLimits

0x3cf3,	// (0x0009e624) postcard_message_pane

0x40f7,	// (0x0009ea28) call2_cli_visual_pane_t1_ParamLimits

0x40f7,	// (0x0009ea28) call2_cli_visual_pane_t1

0x4733,	// (0x0009f064) postcard_message_pane_t1_ParamLimits

0x4733,	// (0x0009f064) postcard_message_pane_t1

0x471c,	// (0x0009f04d) postcard_address_pane_t1_ParamLimits

0x471c,	// (0x0009f04d) postcard_address_pane_t1

0x470d,	// (0x0009f03e) popup_call3_audio_in_window_ParamLimits

0x470d,	// (0x0009f03e) popup_call3_audio_in_window

0x45f3,	// (0x0009ef24) bg_popup_call3_in_pane_ParamLimits

0x45f3,	// (0x0009ef24) bg_popup_call3_in_pane

0x4653,	// (0x0009ef84) popup_call3_audio_in_window_g1_ParamLimits

0x4653,	// (0x0009ef84) popup_call3_audio_in_window_g1

0x466b,	// (0x0009ef9c) popup_call3_audio_in_window_g2_ParamLimits

0x466b,	// (0x0009ef9c) popup_call3_audio_in_window_g2

0x4683,	// (0x0009efb4) popup_call3_audio_in_window_g3_ParamLimits

0x4683,	// (0x0009efb4) popup_call3_audio_in_window_g3

0x0003,

0xf56d,	// (0x000a9e9e) popup_call3_audio_in_window_g_ParamLimits

0xf56d,	// (0x000a9e9e) popup_call3_audio_in_window_g

0x46ab,	// (0x0009efdc) popup_call3_audio_in_window_t1_ParamLimits

0x46ab,	// (0x0009efdc) popup_call3_audio_in_window_t1

0x46d3,	// (0x0009f004) popup_call3_audio_in_window_t2_ParamLimits

0x46d3,	// (0x0009f004) popup_call3_audio_in_window_t2

0x46fb,	// (0x0009f02c) popup_call3_audio_in_window_t3_ParamLimits

0x46fb,	// (0x0009f02c) popup_call3_audio_in_window_t3

0x0002,

0xf576,	// (0x000a9ea7) popup_call3_audio_in_window_t_ParamLimits

0xf576,	// (0x000a9ea7) popup_call3_audio_in_window_t

0xa8d6,	// (0x000a5207) bg_popup_call3_rect_pane

0xc5c3,	// (0x000a6ef4) bg_popup_call3_rect_pane_g1

0xa7fb,	// (0x000a512c) bg_popup_call3_rect_pane_g2

0xc5cb,	// (0x000a6efc) bg_popup_call3_rect_pane_g3

0xc5d3,	// (0x000a6f04) bg_popup_call3_rect_pane_g4

0xc5db,	// (0x000a6f0c) bg_popup_call3_rect_pane_g5

0xc5e3,	// (0x000a6f14) bg_popup_call3_rect_pane_g6

0xc5eb,	// (0x000a6f1c) bg_popup_call3_rect_pane_g7

0x388d,	// (0x0009e1be) mup_visualizer_osc_pane

0xb462,	// (0x000a5d93) mup_visualizer_spec_pane

0x4613,	// (0x0009ef44) call3_video_qcif_pane_ParamLimits

0x4613,	// (0x0009ef44) call3_video_qcif_pane

0x4623,	// (0x0009ef54) call3_video_qcif_uncrop_pane_ParamLimits

0x4623,	// (0x0009ef54) call3_video_qcif_uncrop_pane

0x4631,	// (0x0009ef62) call3_video_subqcif_pane_ParamLimits

0x4631,	// (0x0009ef62) call3_video_subqcif_pane

0x4643,	// (0x0009ef74) call3_video_subqcif_uncrop_pane_ParamLimits

0x4643,	// (0x0009ef74) call3_video_subqcif_uncrop_pane

0x469b,	// (0x0009efcc) popup_call3_audio_in_window_g4_ParamLimits

0x469b,	// (0x0009efcc) popup_call3_audio_in_window_g4

0x45be,	// (0x0009eeef) mup_spec_half_pane

0x45c7,	// (0x0009eef8) mup_spec_half_pane_cp

0xc828,	// (0x000a7159) mup_osc_middle_pane

0xc831,	// (0x000a7162) mup_visualizer_osc_pane_g1

0x459f,	// (0x0009eed0) mup_spec_bar_pane_ParamLimits

0x459f,	// (0x0009eed0) mup_spec_bar_pane

0xc815,	// (0x000a7146) mup_spec_bar_pane_g1

0xc81f,	// (0x000a7150) mup_spec_bar_pane_g2

0x0001,

0x02c5,	// (0x0009abf6) mup_spec_bar_pane_g

0x15bd,	// (0x0009beee) aid_cale_week_size_cell_pane_ParamLimits

0x15d2,	// (0x0009bf03) bg_cale_heading_pane_ParamLimits

0xa838,	// (0x000a5169) bg_cale_pane_cp01_ParamLimits

0x15f4,	// (0x0009bf25) cale_week_corner_pane_ParamLimits

0x160e,	// (0x0009bf3f) cale_week_day_heading_pane_ParamLimits

0x1630,	// (0x0009bf61) cale_week_scroll_pane_g1_ParamLimits

0x164d,	// (0x0009bf7e) cale_week_scroll_pane_g2_ParamLimits

0x1660,	// (0x0009bf91) cale_week_scroll_pane_g3_ParamLimits

0x1673,	// (0x0009bfa4) cale_week_scroll_pane_g4_ParamLimits

0x1686,	// (0x0009bfb7) cale_week_scroll_pane_g5_ParamLimits

0x1699,	// (0x0009bfca) cale_week_scroll_pane_g6_ParamLimits

0x16ac,	// (0x0009bfdd) cale_week_scroll_pane_g7_ParamLimits

0x16bf,	// (0x0009bff0) cale_week_scroll_pane_g8_ParamLimits

0x16d4,	// (0x0009c005) cale_week_scroll_pane_g9_ParamLimits

0x16e7,	// (0x0009c018) cale_week_scroll_pane_g10_ParamLimits

0x16fa,	// (0x0009c02b) cale_week_scroll_pane_g11_ParamLimits

0x170d,	// (0x0009c03e) cale_week_scroll_pane_g12_ParamLimits

0x1724,	// (0x0009c055) cale_week_scroll_pane_g13_ParamLimits

0x173f,	// (0x0009c070) cale_week_scroll_pane_g14_ParamLimits

0x175a,	// (0x0009c08b) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a9ae1) cale_week_scroll_pane_g_ParamLimits

0x178a,	// (0x0009c0bb) cale_week_time_pane_ParamLimits

0x179f,	// (0x0009c0d0) grid_cale_week_pane_ParamLimits

0xa855,	// (0x000a5186) listscroll_cale_week_pane_t1

0xa867,	// (0x000a5198) scroll_pane_cp08_ParamLimits

0x257d,	// (0x0009ceae) cale_month_corner_pane_ParamLimits

0xac08,	// (0x000a5539) cale_month_pane_t1

0x2a21,	// (0x0009d352) cale_month_week_pane_ParamLimits

0xb2d2,	// (0x000a5c03) popup_call_status_window_g1_ParamLimits

0x3353,	// (0x0009dc84) popup_call_status_window_g2_ParamLimits

0x335f,	// (0x0009dc90) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a9c87) popup_call_status_window_g_ParamLimits

0xafb4,	// (0x000a58e5) aid_call2_pane

0x3b24,	// (0x0009e455) msg_header_pane_g1

0x3ce7,	// (0x0009e618) postcard_address2_pane_ParamLimits

0x3ce7,	// (0x0009e618) postcard_address2_pane

0x3cf3,	// (0x0009e624) postcard_message2_pane_ParamLimits

0x3cf3,	// (0x0009e624) postcard_message2_pane

0x4531,	// (0x0009ee62) message2_row_pane_ParamLimits

0x4531,	// (0x0009ee62) message2_row_pane

0x454e,	// (0x0009ee7f) address2_row_pane_ParamLimits

0x454e,	// (0x0009ee7f) address2_row_pane

0xc7e3,	// (0x000a7114) postcard_message2_row_pane_g1

0xc7eb,	// (0x000a711c) postcard_message2_row_pane_t1

0xc7e3,	// (0x000a7114) address2_row_pane_g1

0xc7eb,	// (0x000a711c) address2_row_pane_t1

0x1b10,	// (0x0009c441) aid_size_cell_vorec

0x9eaa,	// (0x000a47db) main_rss_pane

0x4561,	// (0x0009ee92) rss_list_single_pane_ParamLimits

0x4561,	// (0x0009ee92) rss_list_single_pane

0xc7f9,	// (0x000a712a) rss_list_single_pane_t1

0xc807,	// (0x000a7138) rss_list_single_pane_t2

0x0001,

0x02c0,	// (0x0009abf1) rss_list_single_pane_t

0x9eaa,	// (0x000a47db) main_camera2_pane

0x9eaa,	// (0x000a47db) main_video2_pane

0x4797,	// (0x0009f0c8) cams_zoom_pane_cp2_ParamLimits

0x4797,	// (0x0009f0c8) cams_zoom_pane_cp2

0x47a3,	// (0x0009f0d4) image2_vga_pane_ParamLimits

0x47a3,	// (0x0009f0d4) image2_vga_pane

0x47b2,	// (0x0009f0e3) main_camera2_pane_g1_ParamLimits

0x47b2,	// (0x0009f0e3) main_camera2_pane_g1

0x47be,	// (0x0009f0ef) main_camera2_pane_g2_ParamLimits

0x47be,	// (0x0009f0ef) main_camera2_pane_g2

0x47ca,	// (0x0009f0fb) main_camera2_pane_g3_ParamLimits

0x47ca,	// (0x0009f0fb) main_camera2_pane_g3

0x47d6,	// (0x0009f107) main_camera2_pane_g4_ParamLimits

0x47d6,	// (0x0009f107) main_camera2_pane_g4

0x47e2,	// (0x0009f113) main_camera2_pane_g5_ParamLimits

0x47e2,	// (0x0009f113) main_camera2_pane_g5

0x47ee,	// (0x0009f11f) main_camera2_pane_g6_ParamLimits

0x47ee,	// (0x0009f11f) main_camera2_pane_g6

0x47fa,	// (0x0009f12b) main_camera2_pane_g7_ParamLimits

0x47fa,	// (0x0009f12b) main_camera2_pane_g7

0x4806,	// (0x0009f137) main_camera2_pane_g8_ParamLimits

0x4806,	// (0x0009f137) main_camera2_pane_g8

0x0008,

0xf57d,	// (0x000a9eae) main_camera2_pane_g_ParamLimits

0xf57d,	// (0x000a9eae) main_camera2_pane_g

0x481e,	// (0x0009f14f) main_camera2_pane_t1_ParamLimits

0x481e,	// (0x0009f14f) main_camera2_pane_t1

0x4830,	// (0x0009f161) main_camera2_pane_t2_ParamLimits

0x4830,	// (0x0009f161) main_camera2_pane_t2

0x4842,	// (0x0009f173) main_camera2_pane_t3_ParamLimits

0x4842,	// (0x0009f173) main_camera2_pane_t3

0x4854,	// (0x0009f185) main_camera2_pane_t4_ParamLimits

0x4854,	// (0x0009f185) main_camera2_pane_t4

0x0006,

0xf590,	// (0x000a9ec1) main_camera2_pane_t_ParamLimits

0xf590,	// (0x000a9ec1) main_camera2_pane_t

0x48b6,	// (0x0009f1e7) cams_zoom_pane_cp4_ParamLimits

0x48b6,	// (0x0009f1e7) cams_zoom_pane_cp4

0x48c6,	// (0x0009f1f7) image2_cif_pane_ParamLimits

0x48c6,	// (0x0009f1f7) image2_cif_pane

0x48db,	// (0x0009f20c) image2_subqcif_pane_ParamLimits

0x48db,	// (0x0009f20c) image2_subqcif_pane

0x48ea,	// (0x0009f21b) main_video2_pane_g1_ParamLimits

0x48ea,	// (0x0009f21b) main_video2_pane_g1

0x48fc,	// (0x0009f22d) main_video2_pane_g2_ParamLimits

0x48fc,	// (0x0009f22d) main_video2_pane_g2

0x490c,	// (0x0009f23d) main_video2_pane_g3_ParamLimits

0x490c,	// (0x0009f23d) main_video2_pane_g3

0x491c,	// (0x0009f24d) main_video2_pane_g4_ParamLimits

0x491c,	// (0x0009f24d) main_video2_pane_g4

0x492c,	// (0x0009f25d) main_video2_pane_g5_ParamLimits

0x492c,	// (0x0009f25d) main_video2_pane_g5

0x493c,	// (0x0009f26d) main_video2_pane_g6_ParamLimits

0x493c,	// (0x0009f26d) main_video2_pane_g6

0x0005,

0xf59f,	// (0x000a9ed0) main_video2_pane_g_ParamLimits

0xf59f,	// (0x000a9ed0) main_video2_pane_g

0x494e,	// (0x0009f27f) main_video2_pane_t1_ParamLimits

0x494e,	// (0x0009f27f) main_video2_pane_t1

0x4968,	// (0x0009f299) main_video2_pane_t2_ParamLimits

0x4968,	// (0x0009f299) main_video2_pane_t2

0x498e,	// (0x0009f2bf) main_video2_pane_t3_ParamLimits

0x498e,	// (0x0009f2bf) main_video2_pane_t3

0x0002,

0xf5ac,	// (0x000a9edd) main_video2_pane_t_ParamLimits

0xf5ac,	// (0x000a9edd) main_video2_pane_t

0x424d,	// (0x0009eb7e) call_muted_g2

0x0001,

0xf561,	// (0x000a9e92) call_muted_g

0x9eaa,	// (0x000a47db) main_mup2_pane

0xc868,	// (0x000a7199) main_mup2_pane_g1_ParamLimits

0xc868,	// (0x000a7199) main_mup2_pane_g1

0x49b4,	// (0x0009f2e5) main_mup2_pane_g2_ParamLimits

0x49b4,	// (0x0009f2e5) main_mup2_pane_g2

0x4c36,	// (0x0009f567) main_mup_pane_g13_cp1

0x4c3e,	// (0x0009f56f) mup_volume_pane_cp1

0x49d4,	// (0x0009f305) main_mup2_pane_g4_ParamLimits

0x49d4,	// (0x0009f305) main_mup2_pane_g4

0x49e9,	// (0x0009f31a) main_mup2_pane_g5_ParamLimits

0x49e9,	// (0x0009f31a) main_mup2_pane_g5

0x49fe,	// (0x0009f32f) main_mup2_pane_g6_ParamLimits

0x49fe,	// (0x0009f32f) main_mup2_pane_g6

0x4a13,	// (0x0009f344) main_mup2_pane_g7_ParamLimits

0x4a13,	// (0x0009f344) main_mup2_pane_g7

0x0006,

0xf5b3,	// (0x000a9ee4) main_mup2_pane_g_ParamLimits

0xf5b3,	// (0x000a9ee4) main_mup2_pane_g

0x4a2f,	// (0x0009f360) main_mup2_pane_t1_ParamLimits

0x4a2f,	// (0x0009f360) main_mup2_pane_t1

0x4a46,	// (0x0009f377) main_mup2_pane_t2_ParamLimits

0x4a46,	// (0x0009f377) main_mup2_pane_t2

0x4a5d,	// (0x0009f38e) main_mup2_pane_t3_ParamLimits

0x4a5d,	// (0x0009f38e) main_mup2_pane_t3

0x4a74,	// (0x0009f3a5) main_mup2_pane_t4_ParamLimits

0x4a74,	// (0x0009f3a5) main_mup2_pane_t4

0x4a8e,	// (0x0009f3bf) main_mup2_pane_t5_ParamLimits

0x4a8e,	// (0x0009f3bf) main_mup2_pane_t5

0x4aa8,	// (0x0009f3d9) main_mup2_pane_t6_ParamLimits

0x4aa8,	// (0x0009f3d9) main_mup2_pane_t6

0x0005,

0xf5c2,	// (0x000a9ef3) main_mup2_pane_t_ParamLimits

0xf5c2,	// (0x000a9ef3) main_mup2_pane_t

0x4ae0,	// (0x0009f411) mup2_visualizer_pane_ParamLimits

0x4ae0,	// (0x0009f411) mup2_visualizer_pane

0x4b16,	// (0x0009f447) mup_progress_pane_cp_ParamLimits

0x4b16,	// (0x0009f447) mup_progress_pane_cp

0x4c21,	// (0x0009f552) mup_volume_pane_cp_ParamLimits

0x4c21,	// (0x0009f552) mup_volume_pane_cp

0x4b2d,	// (0x0009f45e) mup2_visualizer_pane_g1_ParamLimits

0x4b2d,	// (0x0009f45e) mup2_visualizer_pane_g1

0xc874,	// (0x000a71a5) mup2_visualizer_pane_g2_ParamLimits

0xc874,	// (0x000a71a5) mup2_visualizer_pane_g2

0x4b42,	// (0x0009f473) mup2_visualizer_pane_g3_ParamLimits

0x4b42,	// (0x0009f473) mup2_visualizer_pane_g3

0x0002,

0xf5cf,	// (0x000a9f00) mup2_visualizer_pane_g_ParamLimits

0xf5cf,	// (0x000a9f00) mup2_visualizer_pane_g

0xb689,	// (0x000a5fba) aid_size_cell_fmradio

0x4363,	// (0x0009ec94) aid_height_parent_landcape

0xaa66,	// (0x000a5397) wml_content_pane_cp

0xaa6e,	// (0x000a539f) wml_tabs_pane

0xaa77,	// (0x000a53a8) popup_wml_miniature_window

0xaa7f,	// (0x000a53b0) scroll_pane_cp021

0xaa93,	// (0x000a53c4) wml_content_pane_comp8

0x9eaa,	// (0x000a47db) bg_popup_sub_pane_cp05

0xc892,	// (0x000a71c3) popup_wml_miniature_window_g1

0xc89a,	// (0x000a71cb) wml_miniature_view_pane

0x4b50,	// (0x0009f481) aid_size_wml_view

0x4b58,	// (0x0009f489) wml_miniature_view_pane_g1

0x4b61,	// (0x0009f492) wml_miniature_view_pane_g2

0x4b6a,	// (0x0009f49b) wml_miniature_view_pane_g3

0x4b72,	// (0x0009f4a3) wml_miniature_view_pane_g4

0x4b7a,	// (0x0009f4ab) wml_miniature_view_pane_g5

0x4b82,	// (0x0009f4b3) wml_miniature_view_pane_g6

0x4b8a,	// (0x0009f4bb) wml_miniature_view_pane_g7

0x4b92,	// (0x0009f4c3) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x000a9f07) wml_miniature_view_pane_g

0xc868,	// (0x000a7199) background_graphic_ParamLimits

0xc868,	// (0x000a7199) background_graphic

0xc8a2,	// (0x000a71d3) wml_tabs_2_pane

0xc8ab,	// (0x000a71dc) wml_tabs_3_pane_ParamLimits

0xc8ab,	// (0x000a71dc) wml_tabs_3_pane

0xc8bd,	// (0x000a71ee) wml_tabs_4_pane_ParamLimits

0xc8bd,	// (0x000a71ee) wml_tabs_4_pane

0xc8d3,	// (0x000a7204) wml_tabs_5_pane_ParamLimits

0xc8d3,	// (0x000a7204) wml_tabs_5_pane

0xc8ed,	// (0x000a721e) wml_tabs_pane_g2_ParamLimits

0xc8ed,	// (0x000a721e) wml_tabs_pane_g2

0xc901,	// (0x000a7232) wml_tabs_pane_g3_ParamLimits

0xc901,	// (0x000a7232) wml_tabs_pane_g3

0x4b9a,	// (0x0009f4cb) wml_tabs_2_active_pane_ParamLimits

0x4b9a,	// (0x0009f4cb) wml_tabs_2_active_pane

0x4baa,	// (0x0009f4db) wml_tabs_2_passive_pane_ParamLimits

0x4baa,	// (0x0009f4db) wml_tabs_2_passive_pane

0x4bba,	// (0x0009f4eb) wml_tabs_3_active_pane_cp_ParamLimits

0x4bba,	// (0x0009f4eb) wml_tabs_3_active_pane_cp

0x4bcb,	// (0x0009f4fc) wml_tabs_3_passive_pane_ParamLimits

0x4bcb,	// (0x0009f4fc) wml_tabs_3_passive_pane

0x4bdc,	// (0x0009f50d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4bdc,	// (0x0009f50d) wml_tabs_3_passive_pane_cp

0x4bed,	// (0x0009f51e) tabs_4_active_pane

0x4bf5,	// (0x0009f526) tabs_4_passive_pane

0x4bfd,	// (0x0009f52e) tabs_4_passive_pane_cp

0x4c05,	// (0x0009f536) tabs_4_passive_pane_cp2

0x4128,	// (0x0009ea59) aid_height_text

0x3856,	// (0x0009e187) mup_volume_cont_pane_ParamLimits

0x3856,	// (0x0009e187) mup_volume_cont_pane

0x1108,	// (0x0009ba39) aid_size_cell_pinb

0x1112,	// (0x0009ba43) aid_size_list_pinb

0x4aff,	// (0x0009f430) mup2_volume_cont_pane_ParamLimits

0x4aff,	// (0x0009f430) mup2_volume_cont_pane

0x4c0d,	// (0x0009f53e) mup2_volume_cont_pane_g1_ParamLimits

0x4c0d,	// (0x0009f53e) mup2_volume_cont_pane_g1

0x0d2a,	// (0x0009b65b) aid_size_cell_touch_ParamLimits

0x0d2a,	// (0x0009b65b) aid_size_cell_touch

0x0feb,	// (0x0009b91c) touch_pane_ParamLimits

0x0feb,	// (0x0009b91c) touch_pane

0x0fe1,	// (0x0009b912) main_rss2_pane

0xc91e,	// (0x000a724f) listscroll_rss2_pane

0xc927,	// (0x000a7258) rss2_navigation_pane

0xc92f,	// (0x000a7260) list_rss2_pane

0xb10f,	// (0x000a5a40) scroll_pane_cp22

0xc937,	// (0x000a7268) rss2_navigation_pane_g1

0xc940,	// (0x000a7271) rss2_navigation_pane_g2

0xc948,	// (0x000a7279) rss2_navigation_pane_g3

0x0002,

0x034b,	// (0x0009ac7c) rss2_navigation_pane_g

0xc950,	// (0x000a7281) rss2_navigation_pane_t1

0x4c46,	// (0x0009f577) rss2_list_single_pane_ParamLimits

0x4c46,	// (0x0009f577) rss2_list_single_pane

0xc95e,	// (0x000a728f) rss2_list_single_pane_t2

0xc96c,	// (0x000a729d) rss2_list_single_pane_t3_ParamLimits

0xc96c,	// (0x000a729d) rss2_list_single_pane_t3

0xc989,	// (0x000a72ba) rss2_list_single_pane_t4

0x30c9,	// (0x0009d9fa) smil_status_pane_g1

0x437a,	// (0x0009ecab) main_image2_pane_ParamLimits

0x437a,	// (0x0009ecab) main_image2_pane

0x4812,	// (0x0009f143) main_camera2_pane_g9_ParamLimits

0x4812,	// (0x0009f143) main_camera2_pane_g9

0x4866,	// (0x0009f197) main_camera2_pane_t5_ParamLimits

0x4866,	// (0x0009f197) main_camera2_pane_t5

0x4878,	// (0x0009f1a9) main_camera2_pane_t6_ParamLimits

0x4878,	// (0x0009f1a9) main_camera2_pane_t6

0x4c7e,	// (0x0009f5af) main_image2_pane_g1_ParamLimits

0x4c7e,	// (0x0009f5af) main_image2_pane_g1

0x3ec4,	// (0x0009e7f5) smil2_video_pane_ParamLimits

0x3ec4,	// (0x0009e7f5) smil2_video_pane

0x0c2e,	// (0x0009b55f) aid_zoom_text_primary_cp

0x0f7c,	// (0x0009b8ad) popup_preview_fixed_window

0xa9cf,	// (0x000a5300) im_reading_pane_g1

0x475c,	// (0x0009f08d) cams2_bc_adjust_pane_cp_ParamLimits

0x475c,	// (0x0009f08d) cams2_bc_adjust_pane_cp

0x48a8,	// (0x0009f1d9) cams2_bc_adjust_pane_ParamLimits

0x48a8,	// (0x0009f1d9) cams2_bc_adjust_pane

0xd96c,	// (0x000a829d) cams2_bc_adjust_pane_g1

0x4c8a,	// (0x0009f5bb) cams2_slider_pane

0x4c93,	// (0x0009f5c4) cams2_slider_pane_g1

0x4c9c,	// (0x0009f5cd) cams2_slider_pane_g2

0x0006,

0xf5e7,	// (0x000a9f18) cams2_slider_pane_g

0x1202,	// (0x0009bb33) calc_display_pane_ParamLimits

0x1220,	// (0x0009bb51) calc_paper_pane_ParamLimits

0x123c,	// (0x0009bb6d) grid_calc_pane_ParamLimits

0x33c1,	// (0x0009dcf2) popup_clock_digital_window_t1_ParamLimits

0xb626,	// (0x000a5f57) main_image_pane_t1

0x11e8,	// (0x0009bb19) aid_size_cell_calc_ParamLimits

0x11e8,	// (0x0009bb19) aid_size_cell_calc

0x43ab,	// (0x0009ecdc) popup_blid_sat_info2_window_ParamLimits

0x43ab,	// (0x0009ecdc) popup_blid_sat_info2_window

0xc99f,	// (0x000a72d0) aid_size_cell_blid

0xc9a7,	// (0x000a72d8) bg_popup_window_pane_cp07

0xc9ca,	// (0x000a72fb) grid_popup_blid_pane

0xc9d4,	// (0x000a7305) heading_pane_cp05_ParamLimits

0xc9d4,	// (0x000a7305) heading_pane_cp05

0xca9e,	// (0x000a73cf) cell_popup_blid_pane_ParamLimits

0xca9e,	// (0x000a73cf) cell_popup_blid_pane

0xcac4,	// (0x000a73f5) cell_popup_blid_pane_g1

0xcacc,	// (0x000a73fd) cell_popup_blid_pane_t1

0x4ac5,	// (0x0009f3f6) mup2_indicator_pane_ParamLimits

0x4ac5,	// (0x0009f3f6) mup2_indicator_pane

0xa8d6,	// (0x000a5207) mup2_visualizer_osc_pane

0xc880,	// (0x000a71b1) mup2_visualizer_spec_pane_ParamLimits

0xc880,	// (0x000a71b1) mup2_visualizer_spec_pane

0x4cb6,	// (0x0009f5e7) mup2_spec_half_pane

0x4cbf,	// (0x0009f5f0) mup2_spec_half_pane_cp

0x4cc9,	// (0x0009f5fa) mup2_spec_bar_pane_ParamLimits

0x4cc9,	// (0x0009f5fa) mup2_spec_bar_pane

0xc815,	// (0x000a7146) mup2_spec_bar_pane_g1

0xc81f,	// (0x000a7150) mup2_spec_bar_pane_g2

0x0001,

0x02c5,	// (0x0009abf6) mup2_spec_bar_pane_g

0x4ce8,	// (0x0009f619) mup2_osc_middle_pane

0xc831,	// (0x000a7162) mup2_visualizer_osc_pane_g1

0x9ab7,	// (0x000a43e8) popup_number_entry_window_t1_ParamLimits

0x9aca,	// (0x000a43fb) popup_number_entry_window_t2_ParamLimits

0x9adc,	// (0x000a440d) popup_number_entry_window_t3_ParamLimits

0x1042,	// (0x0009b973) popup_number_entry_window_t5_ParamLimits

0x1042,	// (0x0009b973) popup_number_entry_window_t5

0xf0ca,	// (0x000a99fb) popup_number_entry_window_t_ParamLimits

0x9aee,	// (0x000a441f) text_title_cp2_ParamLimits

0x3bbb,	// (0x0009e4ec) aid_hotspot_pointer_text2_pane

0x3c49,	// (0x0009e57a) main_viewer_pane_g9_ParamLimits

0x3c49,	// (0x0009e57a) main_viewer_pane_g9

0xac08,	// (0x000a5539) cale_month_pane_t1_ParamLimits

0xac45,	// (0x000a5576) bg_cale_pane_ParamLimits

0xac5d,	// (0x000a558e) list_cale_pane_ParamLimits

0xac6e,	// (0x000a559f) listscroll_cale_day_pane_t1

0xac80,	// (0x000a55b1) scroll_pane_cp09_ParamLimits

0x3895,	// (0x0009e1c6) main_mup_eq_pane_t1_ParamLimits

0x3895,	// (0x0009e1c6) main_mup_eq_pane_t1

0x38af,	// (0x0009e1e0) main_mup_eq_pane_t2_ParamLimits

0x38af,	// (0x0009e1e0) main_mup_eq_pane_t2

0x38c7,	// (0x0009e1f8) main_mup_eq_pane_t3_ParamLimits

0x38c7,	// (0x0009e1f8) main_mup_eq_pane_t3

0x38df,	// (0x0009e210) main_mup_eq_pane_t4_ParamLimits

0x38df,	// (0x0009e210) main_mup_eq_pane_t4

0x38f7,	// (0x0009e228) main_mup_eq_pane_t5_ParamLimits

0x38f7,	// (0x0009e228) main_mup_eq_pane_t5

0x390f,	// (0x0009e240) main_mup_eq_pane_t6_ParamLimits

0x390f,	// (0x0009e240) main_mup_eq_pane_t6

0x3923,	// (0x0009e254) main_mup_eq_pane_t7_ParamLimits

0x3923,	// (0x0009e254) main_mup_eq_pane_t7

0x3937,	// (0x0009e268) main_mup_eq_pane_t8_ParamLimits

0x3937,	// (0x0009e268) main_mup_eq_pane_t8

0x394d,	// (0x0009e27e) main_mup_eq_pane_t9_ParamLimits

0x394d,	// (0x0009e27e) main_mup_eq_pane_t9

0x3965,	// (0x0009e296) main_mup_eq_pane_t10_ParamLimits

0x3965,	// (0x0009e296) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a9d86) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a9d86) main_mup_eq_pane_t

0x3a22,	// (0x0009e353) mup_equalizer_pane_cp5_ParamLimits

0x3a38,	// (0x0009e369) mup_equalizer_pane_cp6_ParamLimits

0x3a50,	// (0x0009e381) mup_equalizer_pane_cp7_ParamLimits

0x0fe1,	// (0x0009b912) main_gallery_pane

0xc83a,	// (0x000a716b) smil2_volume_pane

0xc842,	// (0x000a7173) smil_status_volume_pane_g1_ParamLimits

0xc855,	// (0x000a7186) smil_status_volume_pane_g2_ParamLimits

0x45d1,	// (0x0009ef02) smil_status_volume_pane_g3_ParamLimits

0xf566,	// (0x000a9e97) smil_status_volume_pane_g_ParamLimits

0xc9a7,	// (0x000a72d8) bg_popup_window_pane_cp07_ParamLimits

0xc9b5,	// (0x000a72e6) blid_firmament_pane

0x4cf1,	// (0x0009f622) aid_size_cell_gallery_ParamLimits

0x4cf1,	// (0x0009f622) aid_size_cell_gallery

0x4cff,	// (0x0009f630) grid_gallery_pane_ParamLimits

0x4cff,	// (0x0009f630) grid_gallery_pane

0x4d0f,	// (0x0009f640) cell_gallery_pane_ParamLimits

0x4d0f,	// (0x0009f640) cell_gallery_pane

0xcada,	// (0x000a740b) bg_cell_gallery_focus_pane_ParamLimits

0xcada,	// (0x000a740b) bg_cell_gallery_focus_pane

0xcaec,	// (0x000a741d) cell_gallery_pane_g1_ParamLimits

0xcaec,	// (0x000a741d) cell_gallery_pane_g1

0x4d5d,	// (0x0009f68e) cell_gallery_pane_g2_ParamLimits

0x4d5d,	// (0x0009f68e) cell_gallery_pane_g2

0x4d6a,	// (0x0009f69b) cell_gallery_pane_g3_ParamLimits

0x4d6a,	// (0x0009f69b) cell_gallery_pane_g3

0xcaf8,	// (0x000a7429) cell_gallery_pane_g4_ParamLimits

0xcaf8,	// (0x000a7429) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x000a9f27) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x000a9f27) cell_gallery_pane_g

0xcb04,	// (0x000a7435) bg_cell_gallery_focus_pane_g1

0xcb0c,	// (0x000a743d) bg_cell_gallery_focus_pane_g2

0xcb14,	// (0x000a7445) bg_cell_gallery_focus_pane_g3

0xcb1c,	// (0x000a744d) bg_cell_gallery_focus_pane_g4

0xcb24,	// (0x000a7455) bg_cell_gallery_focus_pane_g5

0xcb2c,	// (0x000a745d) bg_cell_gallery_focus_pane_g6

0xcb34,	// (0x000a7465) bg_cell_gallery_focus_pane_g7

0xcb3c,	// (0x000a746d) bg_cell_gallery_focus_pane_g8

0x0007,

0x0381,	// (0x0009acb2) bg_cell_gallery_focus_pane_g

0xcb44,	// (0x000a7475) aid_firma_cardinal

0xcb58,	// (0x000a7489) blid_firmament_pane_t1

0xcb6f,	// (0x000a74a0) blid_firmament_pane_t2

0xcb86,	// (0x000a74b7) blid_firmament_pane_t3

0xcb9d,	// (0x000a74ce) blid_firmament_pane_t4

0x0003,

0x0392,	// (0x0009acc3) blid_firmament_pane_t

0xcbb4,	// (0x000a74e5) blid_sat_info_pane

0xcbc4,	// (0x000a74f5) blid_sat_info_pane_g1

0xcbc4,	// (0x000a74f5) blid_sat_info_pane_g2

0x0001,

0x039b,	// (0x0009accc) blid_sat_info_pane_g

0xcbce,	// (0x000a74ff) blid_sat_info_pane_t1

0xcbdc,	// (0x000a750d) smil2_volume_content_pane

0xcbe5,	// (0x000a7516) smil2_volume_pane_g1

0xa792,	// (0x000a50c3) smil2_volume_content_pane_g1

0xcbed,	// (0x000a751e) smil2_volume_content_pane_g2

0xcbf6,	// (0x000a7527) smil2_volume_content_pane_g3

0xcbff,	// (0x000a7530) smil2_volume_content_pane_g4

0xcc08,	// (0x000a7539) smil2_volume_content_pane_g5

0xcc11,	// (0x000a7542) smil2_volume_content_pane_g6

0xcc1a,	// (0x000a754b) smil2_volume_content_pane_g7

0xcc23,	// (0x000a7554) smil2_volume_content_pane_g8

0xcc2c,	// (0x000a755d) smil2_volume_content_pane_g9

0xcc35,	// (0x000a7566) smil2_volume_content_pane_g10

0x0009,

0xf5ff,	// (0x000a9f30) smil2_volume_content_pane_g

0x1824,	// (0x0009c155) cale_week_day_heading_pane_t1_ParamLimits

0x185f,	// (0x0009c190) cale_week_day_heading_pane_t2_ParamLimits

0x189a,	// (0x0009c1cb) cale_week_day_heading_pane_t3_ParamLimits

0x18d5,	// (0x0009c206) cale_week_day_heading_pane_t4_ParamLimits

0x1910,	// (0x0009c241) cale_week_day_heading_pane_t5_ParamLimits

0x194b,	// (0x0009c27c) cale_week_day_heading_pane_t6_ParamLimits

0x1986,	// (0x0009c2b7) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a9b02) cale_week_day_heading_pane_t_ParamLimits

0xa884,	// (0x000a51b5) bg_cale_side_pane_ParamLimits

0x19c1,	// (0x0009c2f2) cale_week_time_pane_t1_ParamLimits

0x19db,	// (0x0009c30c) cale_week_time_pane_t2_ParamLimits

0x19f5,	// (0x0009c326) cale_week_time_pane_t3_ParamLimits

0x1a0f,	// (0x0009c340) cale_week_time_pane_t4_ParamLimits

0x1a29,	// (0x0009c35a) cale_week_time_pane_t5_ParamLimits

0x1a45,	// (0x0009c376) cale_week_time_pane_t6_ParamLimits

0x1a67,	// (0x0009c398) cale_week_time_pane_t7_ParamLimits

0x1a8b,	// (0x0009c3bc) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a9b11) cale_week_time_pane_t_ParamLimits

0x1ab1,	// (0x0009c3e2) cell_cale_week_pane_g2_ParamLimits

0xa884,	// (0x000a51b5) bg_cale_side_pane_cp01_ParamLimits

0x2e98,	// (0x0009d7c9) cale_month_week_pane_t1_ParamLimits

0x2eb1,	// (0x0009d7e2) cale_month_week_pane_t2_ParamLimits

0x2eca,	// (0x0009d7fb) cale_month_week_pane_t3_ParamLimits

0x2ee3,	// (0x0009d814) cale_month_week_pane_t4_ParamLimits

0x2f00,	// (0x0009d831) cale_month_week_pane_t5_ParamLimits

0x2f21,	// (0x0009d852) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a9be6) cale_month_week_pane_t_ParamLimits

0x3092,	// (0x0009d9c3) cell_cale_month_pane_g1_ParamLimits

0x0fe1,	// (0x0009b912) main_cale_event_viewer_pane

0x9a8d,	// (0x000a43be) listscroll_cale_event_viewer_pane

0xcc3e,	// (0x000a756f) list_cale_ev_pane

0xcc46,	// (0x000a7577) scroll_pane_cp023

0xcc52,	// (0x000a7583) field_cale_ev_pane_ParamLimits

0xcc52,	// (0x000a7583) field_cale_ev_pane

0xcc6e,	// (0x000a759f) field_cale_ev_content_pane_ParamLimits

0xcc6e,	// (0x000a759f) field_cale_ev_content_pane

0xcc7a,	// (0x000a75ab) field_cale_ev_pane_g1_ParamLimits

0xcc7a,	// (0x000a75ab) field_cale_ev_pane_g1

0xcc86,	// (0x000a75b7) field_cale_ev_pane_g2_ParamLimits

0xcc86,	// (0x000a75b7) field_cale_ev_pane_g2

0xcc9e,	// (0x000a75cf) field_cale_ev_pane_g3_ParamLimits

0xcc9e,	// (0x000a75cf) field_cale_ev_pane_g3

0x0002,

0x03b5,	// (0x0009ace6) field_cale_ev_pane_g_ParamLimits

0x03b5,	// (0x0009ace6) field_cale_ev_pane_g

0xccb6,	// (0x000a75e7) field_cale_ev_pane_t1_ParamLimits

0xccb6,	// (0x000a75e7) field_cale_ev_pane_t1

0xcccd,	// (0x000a75fe) field_cale_ev_content_pane_t1_ParamLimits

0xcccd,	// (0x000a75fe) field_cale_ev_content_pane_t1

0xb50c,	// (0x000a5e3d) bg_button_pane_cp01

0x15ad,	// (0x0009bede) listscroll_cale_week_pane_ParamLimits

0xa82f,	// (0x000a5160) popup_toolbar_window_cp01

0xa855,	// (0x000a5186) listscroll_cale_week_pane_t1_ParamLimits

0x15ad,	// (0x0009bede) listscroll_cale_day_pane_ParamLimits

0xa82f,	// (0x000a5160) popup_toolbar_window_cp02

0xac6e,	// (0x000a559f) listscroll_cale_day_pane_t1_ParamLimits

0x15ad,	// (0x0009bede) main_cale_month_pane_ParamLimits

0x44a8,	// (0x0009edd9) popup_toolbar_window_cp03_ParamLimits

0x44a8,	// (0x0009edd9) popup_toolbar_window_cp03

0x3dd6,	// (0x0009e707) main_image_pane_g2_ParamLimits

0x3dd6,	// (0x0009e707) main_image_pane_g2

0x3de2,	// (0x0009e713) main_image_pane_g3_ParamLimits

0x3de2,	// (0x0009e713) main_image_pane_g3

0x0002,

0xf4dd,	// (0x000a9e0e) main_image_pane_g_ParamLimits

0xf4dd,	// (0x000a9e0e) main_image_pane_g

0xb626,	// (0x000a5f57) main_image_pane_t1_ParamLimits

0x3dee,	// (0x0009e71f) main_image_pane_t2_ParamLimits

0x3dee,	// (0x0009e71f) main_image_pane_t2

0x3e00,	// (0x0009e731) main_image_pane_t3_ParamLimits

0x3e00,	// (0x0009e731) main_image_pane_t3

0x3e12,	// (0x0009e743) main_image_pane_t4_ParamLimits

0x3e12,	// (0x0009e743) main_image_pane_t4

0x0003,

0xf4e4,	// (0x000a9e15) main_image_pane_t_ParamLimits

0xf4e4,	// (0x000a9e15) main_image_pane_t

0x3e24,	// (0x0009e755) popup_image_details_window_cp01

0x3e2e,	// (0x0009e75f) popup_toobar_trans_pane_cp01_ParamLimits

0x3e2e,	// (0x0009e75f) popup_toobar_trans_pane_cp01

0x43fe,	// (0x0009ed2f) popup_image_details_window_ParamLimits

0x43fe,	// (0x0009ed2f) popup_image_details_window

0x440c,	// (0x0009ed3d) popup_image_focus_window

0x474e,	// (0x0009f07f) camera2_autofocus_pane_ParamLimits

0x474e,	// (0x0009f07f) camera2_autofocus_pane

0x9a8d,	// (0x000a43be) bg_popup_sub_pane_cp06

0xccea,	// (0x000a761b) popup_image_focus_window_g1

0xccf2,	// (0x000a7623) popup_image_focus_window_g2

0xccfa,	// (0x000a762b) popup_image_focus_window_g3

0xcd02,	// (0x000a7633) popup_image_focus_window_g4

0x0003,

0x03bc,	// (0x0009aced) popup_image_focus_window_g

0xcd0a,	// (0x000a763b) popup_image_focus_window_t1

0xcd18,	// (0x000a7649) popup_image_focus_window_t2

0xcd28,	// (0x000a7659) popup_image_focus_window_t3

0x0002,

0x03c5,	// (0x0009acf6) popup_image_focus_window_t

0xcd36,	// (0x000a7667) camera2_autofocus_pane_g1

0xa49e,	// (0x000a4dcf) bg_tb_trans_pane_cp01

0xcd44,	// (0x000a7675) popup_image_details_window_g1

0xcd57,	// (0x000a7688) popup_image_details_window_g2

0x0002,

0x03d7,	// (0x0009ad08) popup_image_details_window_g

0xcd80,	// (0x000a76b1) popup_image_details_window_t1

0xcd92,	// (0x000a76c3) popup_image_details_window_t2

0xcdab,	// (0x000a76dc) popup_image_details_window_t3

0xcdbf,	// (0x000a76f0) popup_image_details_window_t4

0xcdda,	// (0x000a770b) popup_image_details_window_t5

0x0004,

0x03de,	// (0x0009ad0f) popup_image_details_window_t

0xa6f4,	// (0x000a5025) bg_calc_paper_pane_ParamLimits

0x0fe1,	// (0x0009b912) grid_highlight_pane_cp013

0x1339,	// (0x0009bc6a) list_calc_pane_ParamLimits

0x134b,	// (0x0009bc7c) scroll_pane_cp024

0xa708,	// (0x000a5039) bg_calc_display_pane_ParamLimits

0x1353,	// (0x0009bc84) calc_display_pane_t1_ParamLimits

0x1368,	// (0x0009bc99) calc_display_pane_t2_ParamLimits

0x137d,	// (0x0009bcae) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a9a82) calc_display_pane_t_ParamLimits

0x145e,	// (0x0009bd8f) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a9a9f) cell_calc_pane_g

0x1467,	// (0x0009bd98) cell_calc_pane_t1

0xa767,	// (0x000a5098) grid_highlight_pane_cp02_ParamLimits

0xa77d,	// (0x000a50ae) toolbar_button_pane_cp01_ParamLimits

0xa77d,	// (0x000a50ae) toolbar_button_pane_cp01

0xb66b,	// (0x000a5f9c) temp_image_control_pane_ParamLimits

0xb66b,	// (0x000a5f9c) temp_image_control_pane

0x437a,	// (0x0009ecab) main_mp3_pane

0xcdf4,	// (0x000a7725) temp_image_control_pane_g1_ParamLimits

0xcdf4,	// (0x000a7725) temp_image_control_pane_g1

0xce02,	// (0x000a7733) temp_image_control_pane_g2_ParamLimits

0xce02,	// (0x000a7733) temp_image_control_pane_g2

0xce14,	// (0x000a7745) temp_image_control_pane_g3_ParamLimits

0xce14,	// (0x000a7745) temp_image_control_pane_g3

0x4da7,	// (0x0009f6d8) temp_image_control_pane_g4_ParamLimits

0x4da7,	// (0x0009f6d8) temp_image_control_pane_g4

0x0003,

0xf61f,	// (0x000a9f50) temp_image_control_pane_g_ParamLimits

0xf61f,	// (0x000a9f50) temp_image_control_pane_g

0xcdf4,	// (0x000a7725) main_mp3_pane_g1

0x4db8,	// (0x0009f6e9) main_mp3_pane_g2

0x0007,

0xf628,	// (0x000a9f59) main_mp3_pane_g

0xce57,	// (0x000a7788) main_mp3_pane_t1

0xa8de,	// (0x000a520f) main_camera_pane_g8_ParamLimits

0xa8de,	// (0x000a520f) main_camera_pane_g8

0x1d3b,	// (0x0009c66c) main_video_pane_g7_ParamLimits

0x1d3b,	// (0x0009c66c) main_video_pane_g7

0x4896,	// (0x0009f1c7) main_camera2_pane_t7_ParamLimits

0x4896,	// (0x0009f1c7) main_camera2_pane_t7

0xaa26,	// (0x000a5357) scroll_pane_cp025_ParamLimits

0xaa26,	// (0x000a5357) scroll_pane_cp025

0xaa3a,	// (0x000a536b) scroll_pane_cp026_ParamLimits

0xaa3a,	// (0x000a536b) scroll_pane_cp026

0xaa49,	// (0x000a537a) wml_content_pane_ParamLimits

0x0fe1,	// (0x0009b912) main_touch_calib_pane

0x4e5c,	// (0x0009f78d) main_touch_calib_pane_g1

0x4e68,	// (0x0009f799) main_touch_calib_pane_g2

0x4e74,	// (0x0009f7a5) main_touch_calib_pane_g3

0x4e80,	// (0x0009f7b1) main_touch_calib_pane_g4

0x0003,

0xf646,	// (0x000a9f77) main_touch_calib_pane_g

0x4e8c,	// (0x0009f7bd) main_touch_calib_pane_t1

0x4ea5,	// (0x0009f7d6) main_touch_calib_pane_t2

0x0004,

0xf64f,	// (0x000a9f80) main_touch_calib_pane_t

0xb1ed,	// (0x000a5b1e) mup_progress_pane_cp02

0xb222,	// (0x000a5b53) navi_pane_g1

0xb336,	// (0x000a5c67) navi_pane_mp_t3

0x437a,	// (0x0009ecab) main_mp3_pane_ParamLimits

0x44e5,	// (0x0009ee16) navi_pane_ParamLimits

0xcdf4,	// (0x000a7725) main_mp3_pane_g1_ParamLimits

0x4db8,	// (0x0009f6e9) main_mp3_pane_g2_ParamLimits

0x4dc4,	// (0x0009f6f5) main_mp3_pane_g3_ParamLimits

0x4dc4,	// (0x0009f6f5) main_mp3_pane_g3

0x4dd0,	// (0x0009f701) main_mp3_pane_g4_ParamLimits

0x4dd0,	// (0x0009f701) main_mp3_pane_g4

0xce24,	// (0x000a7755) main_mp3_pane_g5_ParamLimits

0xce24,	// (0x000a7755) main_mp3_pane_g5

0xce32,	// (0x000a7763) main_mp3_pane_g6_ParamLimits

0xce32,	// (0x000a7763) main_mp3_pane_g6

0xce3f,	// (0x000a7770) main_mp3_pane_g7_ParamLimits

0xce3f,	// (0x000a7770) main_mp3_pane_g7

0xce4b,	// (0x000a777c) main_mp3_pane_g8_ParamLimits

0xce4b,	// (0x000a777c) main_mp3_pane_g8

0xf628,	// (0x000a9f59) main_mp3_pane_g_ParamLimits

0x4ddc,	// (0x0009f70d) main_mp3_pane_t2

0x4dec,	// (0x0009f71d) main_mp3_pane_t3

0xce65,	// (0x000a7796) main_mp3_pane_t4

0xce73,	// (0x000a77a4) main_mp3_pane_t5

0x0005,

0xf639,	// (0x000a9f6a) main_mp3_pane_t

0xce81,	// (0x000a77b2) mup_progress_pane_cp01

0x0c2e,	// (0x0009b55f) aid_zoom_text_secondary2

0xcc3e,	// (0x000a756f) list_cale_ev2_pane

0xcc46,	// (0x000a7577) scroll_pane_cp023_ParamLimits

0x4f00,	// (0x0009f831) field_cale_ev2_pane_ParamLimits

0x4f00,	// (0x0009f831) field_cale_ev2_pane

0xa4ac,	// (0x000a4ddd) field_cale_ev2_pane_g1_ParamLimits

0xa4ac,	// (0x000a4ddd) field_cale_ev2_pane_g1

0xa4b8,	// (0x000a4de9) field_cale_ev2_pane_g2_ParamLimits

0xa4b8,	// (0x000a4de9) field_cale_ev2_pane_g2

0xa4d0,	// (0x000a4e01) field_cale_ev2_pane_g3_ParamLimits

0xa4d0,	// (0x000a4e01) field_cale_ev2_pane_g3

0x0003,

0xf65a,	// (0x000a9f8b) field_cale_ev2_pane_g_ParamLimits

0xf65a,	// (0x000a9f8b) field_cale_ev2_pane_g

0x9fcc,	// (0x000a48fd) field_cale_ev2_pane_t1_ParamLimits

0x9fcc,	// (0x000a48fd) field_cale_ev2_pane_t1

0x9fe3,	// (0x000a4914) field_cale_ev2_pane_t2_ParamLimits

0x9fe3,	// (0x000a4914) field_cale_ev2_pane_t2

0x0001,

0xf663,	// (0x000a9f94) field_cale_ev2_pane_t_ParamLimits

0xf663,	// (0x000a9f94) field_cale_ev2_pane_t

0x3cb1,	// (0x0009e5e2) main_postcard_pane_g5_ParamLimits

0x3cb1,	// (0x0009e5e2) main_postcard_pane_g5

0x3cbf,	// (0x0009e5f0) main_postcard_pane_g6_ParamLimits

0x3cbf,	// (0x0009e5f0) main_postcard_pane_g6

0x1b85,	// (0x0009c4b6) camera2_autofocus_pane_cp_ParamLimits

0x1b85,	// (0x0009c4b6) camera2_autofocus_pane_cp

0x437a,	// (0x0009ecab) main_mup3_pane

0x4f4e,	// (0x0009f87f) main_mup3_pane_g1_ParamLimits

0x4f4e,	// (0x0009f87f) main_mup3_pane_g1

0x4f6f,	// (0x0009f8a0) main_mup3_pane_g2_ParamLimits

0x4f6f,	// (0x0009f8a0) main_mup3_pane_g2

0x4feb,	// (0x0009f91c) main_mup3_pane_g3_ParamLimits

0x4feb,	// (0x0009f91c) main_mup3_pane_g3

0x502e,	// (0x0009f95f) main_mup3_pane_g4_ParamLimits

0x502e,	// (0x0009f95f) main_mup3_pane_g4

0x5071,	// (0x0009f9a2) main_mup3_pane_g5_ParamLimits

0x5071,	// (0x0009f9a2) main_mup3_pane_g5

0x50b6,	// (0x0009f9e7) main_mup3_pane_g6_ParamLimits

0x50b6,	// (0x0009f9e7) main_mup3_pane_g6

0xce89,	// (0x000a77ba) main_mup3_pane_g7_ParamLimits

0xce89,	// (0x000a77ba) main_mup3_pane_g7

0x0007,

0xf673,	// (0x000a9fa4) main_mup3_pane_g_ParamLimits

0xf673,	// (0x000a9fa4) main_mup3_pane_g

0x512c,	// (0x0009fa5d) main_mup3_pane_t1_ParamLimits

0x512c,	// (0x0009fa5d) main_mup3_pane_t1

0x519b,	// (0x0009facc) main_mup3_pane_t2_ParamLimits

0x519b,	// (0x0009facc) main_mup3_pane_t2

0x5264,	// (0x0009fb95) main_mup3_pane_t4_ParamLimits

0x5264,	// (0x0009fb95) main_mup3_pane_t4

0x52b2,	// (0x0009fbe3) main_mup3_pane_t5_ParamLimits

0x52b2,	// (0x0009fbe3) main_mup3_pane_t5

0x5362,	// (0x0009fc93) main_mup3_pane_t6_ParamLimits

0x5362,	// (0x0009fc93) main_mup3_pane_t6

0x0005,

0xf684,	// (0x000a9fb5) main_mup3_pane_t_ParamLimits

0xf684,	// (0x000a9fb5) main_mup3_pane_t

0x540e,	// (0x0009fd3f) mup3_progress_pane_ParamLimits

0x540e,	// (0x0009fd3f) mup3_progress_pane

0x5482,	// (0x0009fdb3) popup_mup3_control_window_ParamLimits

0x5482,	// (0x0009fdb3) popup_mup3_control_window

0xce97,	// (0x000a77c8) popup_mup3_text_window

0x549b,	// (0x0009fdcc) mup3_progress_pane_t1

0x54ba,	// (0x0009fdeb) mup3_progress_pane_t2

0xce9f,	// (0x000a77d0) mup3_progress_pane_t3

0x0002,

0xf691,	// (0x000a9fc2) mup3_progress_pane_t

0xcebc,	// (0x000a77ed) mup_progress_pane_cp03

0x9a8d,	// (0x000a43be) bg_tb_trans_pane_cp04

0x54d9,	// (0x0009fe0a) mup3_volume_pane

0x54e1,	// (0x0009fe12) popup_mup3_control_window_g1

0x54ea,	// (0x0009fe1b) mup3_volume_pane_g1

0x54f3,	// (0x0009fe24) mup3_volume_pane_g2

0x54fc,	// (0x0009fe2d) mup3_volume_pane_g3

0x0002,

0xf698,	// (0x000a9fc9) mup3_volume_pane_g

0x9a8d,	// (0x000a43be) bg_tb_trans_pane_cp03

0xcecc,	// (0x000a77fd) popup_mup3_text_window_g1

0xced4,	// (0x000a7805) popup_mup3_text_window_t1

0xa750,	// (0x000a5081) list_calc_item_pane_g1_ParamLimits

0xc915,	// (0x000a7246) mup_volume_pane_cp_g1

0x4ebe,	// (0x0009f7ef) main_touch_calib_pane_t3

0x4ed4,	// (0x0009f805) main_touch_calib_pane_t4

0x4eea,	// (0x0009f81b) main_touch_calib_pane_t5

0x0d16,	// (0x0009b647) aid_cell_size_toolbar2

0x0d1e,	// (0x0009b64f) aid_popup3_width_pane

0x0d5e,	// (0x0009b68f) aid_zoom_text_msg_primary

0x1b5a,	// (0x0009c48b) vorec_t7

0xa714,	// (0x000a5045) bg_calc_paper_pane_g1_ParamLimits

0xa720,	// (0x000a5051) bg_calc_paper_pane_g2_ParamLimits

0xa72c,	// (0x000a505d) bg_calc_paper_pane_g3_ParamLimits

0xa738,	// (0x000a5069) bg_calc_paper_pane_g4_ParamLimits

0xa744,	// (0x000a5075) bg_calc_paper_pane_g5_ParamLimits

0x13bc,	// (0x0009bced) bg_calc_paper_pane_g6_ParamLimits

0x13cd,	// (0x0009bcfe) bg_calc_paper_pane_g7_ParamLimits

0x13de,	// (0x0009bd0f) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a9a89) bg_calc_paper_pane_g_ParamLimits

0x13ef,	// (0x0009bd20) calc_bg_paper_pane_g9_ParamLimits

0x1c6c,	// (0x0009c59d) image_qvga_pane_ParamLimits

0x1c6c,	// (0x0009c59d) image_qvga_pane

0xa624,	// (0x000a4f55) bg_popup_sub_pane_cp04_ParamLimits

0xb5a2,	// (0x000a5ed3) popup_mup_playback_window_g1_ParamLimits

0xb5ae,	// (0x000a5edf) popup_mup_playback_window_t1_ParamLimits

0xb5c3,	// (0x000a5ef4) popup_mup_playback_window_t2_ParamLimits

0x01a1,	// (0x0009aad2) popup_mup_playback_window_t_ParamLimits

0x49c5,	// (0x0009f2f6) main_mup2_pane_g3_ParamLimits

0x49c5,	// (0x0009f2f6) main_mup2_pane_g3

0x2032,	// (0x0009c963) popup_toolbar_window_cp04

0xb9b8,	// (0x000a62e9) popup_call2_audio_second_window_g3_ParamLimits

0xb9b8,	// (0x000a62e9) popup_call2_audio_second_window_g3

0xbdc2,	// (0x000a66f3) popup_call2_audio_first_window_g4_ParamLimits

0xbdc2,	// (0x000a66f3) popup_call2_audio_first_window_g4

0xc44d,	// (0x000a6d7e) popup_call2_audio_in_window_g4_ParamLimits

0xc44d,	// (0x000a6d7e) popup_call2_audio_in_window_g4

0x3dc9,	// (0x0009e6fa) aid_area_sk_bg_cut_ParamLimits

0x3dc9,	// (0x0009e6fa) aid_area_sk_bg_cut

0xb5d8,	// (0x000a5f09) aid_area_sk_bg_cut_2_ParamLimits

0xb5d8,	// (0x000a5f09) aid_area_sk_bg_cut_2

0x4d4d,	// (0x0009f67e) aid_placing_details_win

0x4d55,	// (0x0009f686) aid_placing_details_win_2

0xcd36,	// (0x000a7667) camera2_autofocus_pane_g1_ParamLimits

0x0f6d,	// (0x0009b89e) popup_fixed_preview_cale_window_ParamLimits

0x0f6d,	// (0x0009b89e) popup_fixed_preview_cale_window

0xb3b4,	// (0x000a5ce5) navi_slider_pane_g3

0xb3bd,	// (0x000a5cee) navi_slider_pane_g4

0xb3c6,	// (0x000a5cf7) navi_slider_pane_g5

0xb3b4,	// (0x000a5ce5) navi_slider_pane_g6

0x3629,	// (0x0009df5a) navi_slider_pane_g7

0xb4d9,	// (0x000a5e0a) mup_scale_pane_g3

0xb4e2,	// (0x000a5e13) mup_scale_pane_g4

0xb4eb,	// (0x000a5e1c) mup_scale_pane_g5

0x3a68,	// (0x0009e399) mup_scale_pane_g6

0x3a71,	// (0x0009e3a2) mup_scale_pane_g7

0xb3b4,	// (0x000a5ce5) cams2_slider_pane_g3

0xc997,	// (0x000a72c8) cams2_slider_pane_g4

0x4ca5,	// (0x0009f5d6) cams2_slider_pane_g5

0xb3b4,	// (0x000a5ce5) cams2_slider_pane_g6

0x4cad,	// (0x0009f5de) cams2_slider_pane_g7

0xcbc4,	// (0x000a74f5) camera2_autofocus_pane_cp_g1

0xc7ae,	// (0x000a70df) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7ae,	// (0x000a70df) bg_popup_preview_window_pane_cp02

0xcee2,	// (0x000a7813) list_fp_cale_pane_ParamLimits

0xcee2,	// (0x000a7813) list_fp_cale_pane

0xceee,	// (0x000a781f) popup_fixed_preview_cale_window_t1_ParamLimits

0xceee,	// (0x000a781f) popup_fixed_preview_cale_window_t1

0x5505,	// (0x0009fe36) popup_fixed_preview_cale_window_t2_ParamLimits

0x5505,	// (0x0009fe36) popup_fixed_preview_cale_window_t2

0x551a,	// (0x0009fe4b) popup_fixed_preview_cale_window_t3_ParamLimits

0x551a,	// (0x0009fe4b) popup_fixed_preview_cale_window_t3

0x0002,

0xf69f,	// (0x000a9fd0) popup_fixed_preview_cale_window_t_ParamLimits

0xf69f,	// (0x000a9fd0) popup_fixed_preview_cale_window_t

0x552f,	// (0x0009fe60) list_single_fp_cale_pane_ParamLimits

0x552f,	// (0x0009fe60) list_single_fp_cale_pane

0xcf0c,	// (0x000a783d) list_single_fp_cale_pane_g1_ParamLimits

0xcf0c,	// (0x000a783d) list_single_fp_cale_pane_g1

0xcf18,	// (0x000a7849) list_single_fp_cale_pane_g2_ParamLimits

0xcf18,	// (0x000a7849) list_single_fp_cale_pane_g2

0x0002,

0x0470,	// (0x0009ada1) list_single_fp_cale_pane_g_ParamLimits

0x0470,	// (0x0009ada1) list_single_fp_cale_pane_g

0xcf31,	// (0x000a7862) list_single_fp_cale_pane_t1_ParamLimits

0xcf31,	// (0x000a7862) list_single_fp_cale_pane_t1

0xcf43,	// (0x000a7874) list_single_fp_cale_pane_t2_ParamLimits

0xcf43,	// (0x000a7874) list_single_fp_cale_pane_t2

0x0001,

0x0477,	// (0x0009ada8) list_single_fp_cale_pane_t_ParamLimits

0x0477,	// (0x0009ada8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fe1,	// (0x0009b912) main_dialer_pane

0x5543,	// (0x0009fe74) aid_cell_size_keypad

0x554d,	// (0x0009fe7e) dialer_ne_pane

0x5557,	// (0x0009fe88) grid_dialer_command_1_pane

0x555f,	// (0x0009fe90) grid_dialer_command_2_pane

0x5567,	// (0x0009fe98) grid_dialer_keypad_pane

0x557b,	// (0x0009feac) bg_popup_call_pane_cp06_ParamLimits

0x557b,	// (0x0009feac) bg_popup_call_pane_cp06

0x5587,	// (0x0009feb8) dialer_ne_clear_pane_ParamLimits

0x5587,	// (0x0009feb8) dialer_ne_clear_pane

0xcf76,	// (0x000a78a7) dialer_ne_pane_g1

0xcf7e,	// (0x000a78af) dialer_ne_pane_t1_ParamLimits

0xcf7e,	// (0x000a78af) dialer_ne_pane_t1

0x5593,	// (0x0009fec4) dialer_ne_pane_t2_ParamLimits

0x5593,	// (0x0009fec4) dialer_ne_pane_t2

0x55b0,	// (0x0009fee1) dialer_ne_pane_t3_ParamLimits

0x55b0,	// (0x0009fee1) dialer_ne_pane_t3

0x0002,

0xf6a6,	// (0x000a9fd7) dialer_ne_pane_t_ParamLimits

0xf6a6,	// (0x000a9fd7) dialer_ne_pane_t

0x55d4,	// (0x0009ff05) dialer_ne_pane_t3_copy1_ParamLimits

0x55d4,	// (0x0009ff05) dialer_ne_pane_t3_copy1

0x55f8,	// (0x0009ff29) cell_dialer_keypad_pane_ParamLimits

0x55f8,	// (0x0009ff29) cell_dialer_keypad_pane

0x560f,	// (0x0009ff40) cell_dialer_command_1_pane_ParamLimits

0x560f,	// (0x0009ff40) cell_dialer_command_1_pane

0x5625,	// (0x0009ff56) cell_dialer_command_2_pane_ParamLimits

0x5625,	// (0x0009ff56) cell_dialer_command_2_pane

0xcf90,	// (0x000a78c1) bg_button_pane_cp02_ParamLimits

0xcf90,	// (0x000a78c1) bg_button_pane_cp02

0x5634,	// (0x0009ff65) cell_dialer_keypad_pane_g1_ParamLimits

0x5634,	// (0x0009ff65) cell_dialer_keypad_pane_g1

0xcf90,	// (0x000a78c1) bg_button_pane_cp03_ParamLimits

0xcf90,	// (0x000a78c1) bg_button_pane_cp03

0x5649,	// (0x0009ff7a) cell_dialer_command_1_pane_g1_ParamLimits

0x5649,	// (0x0009ff7a) cell_dialer_command_1_pane_g1

0xcf9c,	// (0x000a78cd) bg_button_pane_cp04

0x565d,	// (0x0009ff8e) cell_dialer_command_2_pane_g1

0xa8d6,	// (0x000a5207) bg_button_pane_cp06

0xcfa4,	// (0x000a78d5) dialer_ne_clear_pane_g1

0xb22e,	// (0x000a5b5f) navi_pane_g2

0xb25c,	// (0x000a5b8d) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a9d16) navi_pane_g

0xb344,	// (0x000a5c75) navi_pane_mv_g2

0xb36b,	// (0x000a5c9c) navi_pane_mv_g5

0x35f4,	// (0x0009df25) navi_pane_mv_t1

0xa708,	// (0x000a5039) main_clock2_pane

0x569d,	// (0x0009ffce) main_clock2_list_pane_ParamLimits

0x569d,	// (0x0009ffce) main_clock2_list_pane

0x56c7,	// (0x0009fff8) main_clock2_pane_t1_ParamLimits

0x56c7,	// (0x0009fff8) main_clock2_pane_t1

0x56eb,	// (0x000a001c) main_clock2_pane_t2_ParamLimits

0x56eb,	// (0x000a001c) main_clock2_pane_t2

0x0004,

0xf6ad,	// (0x000a9fde) main_clock2_pane_t_ParamLimits

0xf6ad,	// (0x000a9fde) main_clock2_pane_t

0x5746,	// (0x000a0077) popup_clock_analogue_window_cp03_ParamLimits

0x5746,	// (0x000a0077) popup_clock_analogue_window_cp03

0x5764,	// (0x000a0095) popup_clock_digital_window_cp02_ParamLimits

0x5764,	// (0x000a0095) popup_clock_digital_window_cp02

0x57d3,	// (0x000a0104) main_clock2_list_single_pane_ParamLimits

0x57d3,	// (0x000a0104) main_clock2_list_single_pane

0xa8d6,	// (0x000a5207) list_highlight_pane_cp05

0xcfde,	// (0x000a790f) main_clock2_list_single_pane_t1

0x2032,	// (0x0009c963) popup_toolbar_window_cp04_ParamLimits

0x4d77,	// (0x0009f6a8) camera2_autofocus_pane_g2_ParamLimits

0x4d77,	// (0x0009f6a8) camera2_autofocus_pane_g2

0x4d83,	// (0x0009f6b4) camera2_autofocus_pane_g3_ParamLimits

0x4d83,	// (0x0009f6b4) camera2_autofocus_pane_g3

0x4d8f,	// (0x0009f6c0) camera2_autofocus_pane_g4_ParamLimits

0x4d8f,	// (0x0009f6c0) camera2_autofocus_pane_g4

0x4d9b,	// (0x0009f6cc) camera2_autofocus_pane_g5_ParamLimits

0x4d9b,	// (0x0009f6cc) camera2_autofocus_pane_g5

0x0004,

0xf614,	// (0x000a9f45) camera2_autofocus_pane_g_ParamLimits

0xf614,	// (0x000a9f45) camera2_autofocus_pane_g

0x4f2e,	// (0x0009f85f) camera2_autofocus_pane_cp_g2

0x4f36,	// (0x0009f867) camera2_autofocus_pane_cp_g3

0x4f3e,	// (0x0009f86f) camera2_autofocus_pane_cp_g4

0x4f46,	// (0x0009f877) camera2_autofocus_pane_cp_g5

0x0004,

0xf668,	// (0x000a9f99) camera2_autofocus_pane_cp_g

0x5573,	// (0x0009fea4) popup_dialer_spcha_window

0x9a8d,	// (0x000a43be) bg_popup_sub_pane_cp07

0xcfec,	// (0x000a791d) list_spcha_pane

0xcff4,	// (0x000a7925) list_single_spcha_pane_ParamLimits

0xcff4,	// (0x000a7925) list_single_spcha_pane

0x9a8d,	// (0x000a43be) list_highlight_pane_cp06

0xd005,	// (0x000a7936) list_single_spcha_pane_t1

0xc1eb,	// (0x000a6b1c) popup_call2_audio_out_window_g4_ParamLimits

0xc1eb,	// (0x000a6b1c) popup_call2_audio_out_window_g4

0x0fe1,	// (0x0009b912) main_imed2_pane

0x4414,	// (0x0009ed45) popup_imed_adjust2_window

0x4427,	// (0x0009ed58) popup_imed_trans_window_ParamLimits

0x4427,	// (0x0009ed58) popup_imed_trans_window

0xca00,	// (0x000a7331) popup_blid_sat_info2_window_t1

0xca0e,	// (0x000a733f) popup_blid_sat_info2_window_t2

0x000a,

0x0361,	// (0x0009ac92) popup_blid_sat_info2_window_t

0x587d,	// (0x000a01ae) aid_size_cell_colour_35

0x5897,	// (0x000a01c8) aid_size_cell_colour_112

0x58ae,	// (0x000a01df) aid_size_cell_effect

0xa49e,	// (0x000a4dcf) bg_tb_trans_pane_cp02

0xb02b,	// (0x000a595c) heading_imed_pane

0x58c8,	// (0x000a01f9) listscroll_imed_pane

0xd013,	// (0x000a7944) heading_imed_pane_g1

0xd01b,	// (0x000a794c) heading_imed_pane_t1

0xd029,	// (0x000a795a) grid_imed_colour_35_pane_ParamLimits

0xd029,	// (0x000a795a) grid_imed_colour_35_pane

0x58d4,	// (0x000a0205) grid_imed_effect_pane

0xd041,	// (0x000a7972) list_imed_aspect_pane

0x58e4,	// (0x000a0215) scroll_pane_cp027_ParamLimits

0x58e4,	// (0x000a0215) scroll_pane_cp027

0x58f0,	// (0x000a0221) cell_imed_effect_pane_ParamLimits

0x58f0,	// (0x000a0221) cell_imed_effect_pane

0xd049,	// (0x000a797a) cell_imed_colour_pane_ParamLimits

0xd049,	// (0x000a797a) cell_imed_colour_pane

0xd08b,	// (0x000a79bc) cell_imed_colour_pane_g1_ParamLimits

0xd08b,	// (0x000a79bc) cell_imed_colour_pane_g1

0xd09c,	// (0x000a79cd) hgihlgiht_grid_pane_cp016_ParamLimits

0xd09c,	// (0x000a79cd) hgihlgiht_grid_pane_cp016

0x5908,	// (0x000a0239) cell_imed_effect_pane_g1

0x5910,	// (0x000a0241) grid_highlight_pane_cp017

0xd0ad,	// (0x000a79de) list_imed_single_pane_ParamLimits

0xd0ad,	// (0x000a79de) list_imed_single_pane

0x9a8d,	// (0x000a43be) list_highlight_pane_cp07

0xd0c3,	// (0x000a79f4) list_imed_aspect_pane_comp1_t1

0xc7ba,	// (0x000a70eb) bg_tb_trans_pane_cp05

0xd0e5,	// (0x000a7a16) popup_imed_adjust2_window_g1

0xd10c,	// (0x000a7a3d) popup_imed_adjust2_window_t1

0xd124,	// (0x000a7a55) slider_imed_adjust_pane

0xd138,	// (0x000a7a69) slider_imed_adjust_pane_g1

0xd148,	// (0x000a7a79) slider_imed_adjust_pane_g2

0xd158,	// (0x000a7a89) slider_imed_adjust_pane_g3

0xd169,	// (0x000a7a9a) slider_imed_adjust_pane_g4

0x0003,

0x04a5,	// (0x0009add6) slider_imed_adjust_pane_g

0x5919,	// (0x000a024a) aid_size_cell_clipart2

0x5925,	// (0x000a0256) grid_imed_clipart_pane

0xd17a,	// (0x000a7aab) scroll_pane_cp031

0x592f,	// (0x000a0260) cell_imed_clipart_pane_ParamLimits

0x592f,	// (0x000a0260) cell_imed_clipart_pane

0x5956,	// (0x000a0287) cell_imed_clipart_pane_g1

0x9a8d,	// (0x000a43be) grid_highlight_pane_cp014

0x56a9,	// (0x0009ffda) main_clock2_pane_g1_ParamLimits

0x56a9,	// (0x0009ffda) main_clock2_pane_g1

0x577e,	// (0x000a00af) aid_call2_pane_cp10

0x5790,	// (0x000a00c1) aid_call_pane_cp10

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g1

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g2

0x57a2,	// (0x000a00d3) popup_clock_analogue_window_cp10_g3

0x57a2,	// (0x000a00d3) popup_clock_analogue_window_cp10_g4

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b8,	// (0x000a9fe9) popup_clock_analogue_window_cp10_g

0x57b4,	// (0x000a00e5) popup_clock_analogue_window_cp10_t1

0x57e5,	// (0x000a0116) clock_digital_number_pane_cp10_ParamLimits

0x57e5,	// (0x000a0116) clock_digital_number_pane_cp10

0x57fd,	// (0x000a012e) clock_digital_number_pane_cp11_ParamLimits

0x57fd,	// (0x000a012e) clock_digital_number_pane_cp11

0x5815,	// (0x000a0146) clock_digital_number_pane_cp12_ParamLimits

0x5815,	// (0x000a0146) clock_digital_number_pane_cp12

0x582d,	// (0x000a015e) clock_digital_number_pane_cp13_ParamLimits

0x582d,	// (0x000a015e) clock_digital_number_pane_cp13

0x5845,	// (0x000a0176) clock_digital_separator_pane_cp10_ParamLimits

0x5845,	// (0x000a0176) clock_digital_separator_pane_cp10

0x585d,	// (0x000a018e) popup_clock_digital_window_cp02_t1_ParamLimits

0x585d,	// (0x000a018e) popup_clock_digital_window_cp02_t1

0xa61c,	// (0x000a4f4d) clock_digital_number_pane_cp10_g1

0xa61c,	// (0x000a4f4d) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c3,	// (0x000a9ff4) clock_digital_number_pane_cp10_g

0xa61c,	// (0x000a4f4d) clock_digital_separator_pane_cp10_g1

0xa61c,	// (0x000a4f4d) clock_digital_separator_pane_g2_cp10

0xb373,	// (0x000a5ca4) navi_pane_vded_g4

0xb37c,	// (0x000a5cad) navi_pane_vded_g5

0xb385,	// (0x000a5cb6) navi_pane_vded_t1

0x0fe1,	// (0x0009b912) main_vded_pane

0x595f,	// (0x000a0290) main_vded_pane_g1

0x596b,	// (0x000a029c) main_vded_pane_g2

0x5975,	// (0x000a02a6) main_vded_pane_g3

0x0002,

0xf6c8,	// (0x000a9ff9) main_vded_pane_g

0x597f,	// (0x000a02b0) main_vded_pane_t1

0x598d,	// (0x000a02be) main_vded_pane_t2

0x0001,

0xf6cf,	// (0x000aa000) main_vded_pane_t

0x599b,	// (0x000a02cc) vded_slider_pane

0x59a5,	// (0x000a02d6) vded_video_pane

0xd182,	// (0x000a7ab3) vded_video_pane_g1

0x59af,	// (0x000a02e0) vded_video_pane_g2

0xcbc4,	// (0x000a74f5) vded_video_pane_g3

0x0002,

0xf6d4,	// (0x000aa005) vded_video_pane_g

0xd18c,	// (0x000a7abd) vded_slider_pane_g1

0xd195,	// (0x000a7ac6) vded_slider_pane_g2

0xd19e,	// (0x000a7acf) vded_slider_pane_g3

0xd1a7,	// (0x000a7ad8) vded_slider_pane_g4

0xd1b0,	// (0x000a7ae1) vded_slider_pane_g5

0x0004,

0x04c6,	// (0x0009adf7) vded_slider_pane_g

0x5474,	// (0x0009fda5) mup3_rocker_pane_ParamLimits

0x5474,	// (0x0009fda5) mup3_rocker_pane

0x59b8,	// (0x000a02e9) mup3_control_keys_pane_g1

0x59c0,	// (0x000a02f1) mup3_control_keys_pane_g2

0x59c8,	// (0x000a02f9) mup3_control_keys_pane_g3

0x59d0,	// (0x000a0301) mup3_control_keys_pane_g4

0x0003,

0xf6db,	// (0x000aa00c) mup3_control_keys_pane_g

0x0f95,	// (0x0009b8c6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f95,	// (0x0009b8c6) popup_toolbar2_fixed_window_cp01

0x548e,	// (0x0009fdbf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x548e,	// (0x0009fdbf) popup_toolbar2_fixed_window_cp02

0xbb2a,	// (0x000a645b) popup_call2_audio_second_window_t4_ParamLimits

0xbb2a,	// (0x000a645b) popup_call2_audio_second_window_t4

0xc058,	// (0x000a6989) popup_call2_audio_first_window_t6_ParamLimits

0xc058,	// (0x000a6989) popup_call2_audio_first_window_t6

0xc2fa,	// (0x000a6c2b) popup_call2_audio_out_window_t6_ParamLimits

0xc2fa,	// (0x000a6c2b) popup_call2_audio_out_window_t6

0x0fe1,	// (0x0009b912) main_vitu_pane

0x59e0,	// (0x000a0311) aid_size_cell_itu_ParamLimits

0x59e0,	// (0x000a0311) aid_size_cell_itu

0xe87b,	// (0x000a91ac) bg_popup_window_pane_cp08_ParamLimits

0xe87b,	// (0x000a91ac) bg_popup_window_pane_cp08

0x59ee,	// (0x000a031f) field_vitu_entry_pane_ParamLimits

0x59ee,	// (0x000a031f) field_vitu_entry_pane

0x59fd,	// (0x000a032e) grid_vitu_function_pane_ParamLimits

0x59fd,	// (0x000a032e) grid_vitu_function_pane

0x5a0d,	// (0x000a033e) grid_vitu_itu_pane_ParamLimits

0x5a0d,	// (0x000a033e) grid_vitu_itu_pane

0x5a1d,	// (0x000a034e) cell_vitu_itu_pane_ParamLimits

0x5a1d,	// (0x000a034e) cell_vitu_itu_pane

0x5a32,	// (0x000a0363) cell_vitu_function_pane_ParamLimits

0x5a32,	// (0x000a0363) cell_vitu_function_pane

0xa49e,	// (0x000a4dcf) bg_popup_sub_pane_cp08_ParamLimits

0xa49e,	// (0x000a4dcf) bg_popup_sub_pane_cp08

0x5a46,	// (0x000a0377) field_vitu_entry_pane_t1_ParamLimits

0x5a46,	// (0x000a0377) field_vitu_entry_pane_t1

0xd1d1,	// (0x000a7b02) field_vitu_entry_pane_t2_ParamLimits

0xd1d1,	// (0x000a7b02) field_vitu_entry_pane_t2

0x0001,

0xf6e4,	// (0x000aa015) field_vitu_entry_pane_t_ParamLimits

0xf6e4,	// (0x000aa015) field_vitu_entry_pane_t

0xd1ee,	// (0x000a7b1f) bg_button_pane_cp05_ParamLimits

0xd1ee,	// (0x000a7b1f) bg_button_pane_cp05

0x5a63,	// (0x000a0394) cell_vitu_itu_pane_g1

0x5a7b,	// (0x000a03ac) cell_vitu_itu_pane_t1_ParamLimits

0x5a7b,	// (0x000a03ac) cell_vitu_itu_pane_t1

0x5a8d,	// (0x000a03be) cell_vitu_itu_pane_t2_ParamLimits

0x5a8d,	// (0x000a03be) cell_vitu_itu_pane_t2

0x0002,

0xf6e9,	// (0x000aa01a) cell_vitu_itu_pane_t_ParamLimits

0xf6e9,	// (0x000aa01a) cell_vitu_itu_pane_t

0xd1fc,	// (0x000a7b2d) bg_button_pane_cp07

0x5ad0,	// (0x000a0401) cell_vitu_function_pane_g1

0x1260,	// (0x0009bb91) main_calc_pane_g1

0x0d52,	// (0x0009b683) aid_visual_content_pane

0x0fe1,	// (0x0009b912) main_vradio_pane

0x5ad9,	// (0x000a040a) main_vradio_pane_g1_ParamLimits

0x5ad9,	// (0x000a040a) main_vradio_pane_g1

0xd206,	// (0x000a7b37) main_vradio_pane_g2_ParamLimits

0xd206,	// (0x000a7b37) main_vradio_pane_g2

0x0001,

0xf6f0,	// (0x000aa021) main_vradio_pane_g_ParamLimits

0xf6f0,	// (0x000aa021) main_vradio_pane_g

0x5ae9,	// (0x000a041a) main_vradio_pane_t1_ParamLimits

0x5ae9,	// (0x000a041a) main_vradio_pane_t1

0x5afb,	// (0x000a042c) main_vradio_pane_t2_ParamLimits

0x5afb,	// (0x000a042c) main_vradio_pane_t2

0xd213,	// (0x000a7b44) main_vradio_pane_t3_ParamLimits

0xd213,	// (0x000a7b44) main_vradio_pane_t3

0x0002,

0xf6f5,	// (0x000aa026) main_vradio_pane_t_ParamLimits

0xf6f5,	// (0x000aa026) main_vradio_pane_t

0x5b0d,	// (0x000a043e) vradio_rocker_control_pane_ParamLimits

0x5b0d,	// (0x000a043e) vradio_rocker_control_pane

0x5b19,	// (0x000a044a) vradio_station_info_pane_ParamLimits

0x5b19,	// (0x000a044a) vradio_station_info_pane

0xd227,	// (0x000a7b58) vradio_frequency_info_pane_ParamLimits

0xd227,	// (0x000a7b58) vradio_frequency_info_pane

0xcbc4,	// (0x000a74f5) vradio_station_info_pane_g1

0xd236,	// (0x000a7b67) vradio_station_info_pane_t1_ParamLimits

0xd236,	// (0x000a7b67) vradio_station_info_pane_t1

0xd258,	// (0x000a7b89) vradio_station_info_pane_t2_ParamLimits

0xd258,	// (0x000a7b89) vradio_station_info_pane_t2

0x0001,

0x04f7,	// (0x0009ae28) vradio_station_info_pane_t_ParamLimits

0x04f7,	// (0x0009ae28) vradio_station_info_pane_t

0xd26a,	// (0x000a7b9b) vradio_tuning_pane

0xd272,	// (0x000a7ba3) vradio_rocker_control_pane_g1

0xd27a,	// (0x000a7bab) vradio_rocker_control_pane_g2

0xd282,	// (0x000a7bb3) vradio_rocker_control_pane_g3

0xd28a,	// (0x000a7bbb) vradio_rocker_control_pane_g4

0xd292,	// (0x000a7bc3) vradio_rocker_control_pane_g5

0x0004,

0x04fc,	// (0x0009ae2d) vradio_rocker_control_pane_g

0x5b28,	// (0x000a0459) vradio_frequency_info_pane_g1

0xd29a,	// (0x000a7bcb) vradio_frequency_info_pane_t1_ParamLimits

0xd29a,	// (0x000a7bcb) vradio_frequency_info_pane_t1

0x5b32,	// (0x000a0463) vradio_tuning_pane_g1

0x5b3b,	// (0x000a046c) vradio_tuning_pane_t1

0x0d9b,	// (0x0009b6cc) area_side_right_pane_ParamLimits

0x0d9b,	// (0x0009b6cc) area_side_right_pane

0xc775,	// (0x000a70a6) status_small_pane_g1

0xc77d,	// (0x000a70ae) status_small_pane_g2

0xc786,	// (0x000a70b7) status_small_pane_g3

0xc78f,	// (0x000a70c0) status_small_pane_g4

0x0003,

0x02b7,	// (0x0009abe8) status_small_pane_g

0xc798,	// (0x000a70c9) status_small_pane_t1

0x0fe1,	// (0x0009b912) main_video3_pane

0xd2ae,	// (0x000a7bdf) cams_zoom_vslider_pane

0xd2b6,	// (0x000a7be7) image3_wide_pane_ParamLimits

0xd2b6,	// (0x000a7be7) image3_wide_pane

0xd2d0,	// (0x000a7c01) image3_wide_small_pane

0xd2dc,	// (0x000a7c0d) main_video3_pane_g1_ParamLimits

0xd2dc,	// (0x000a7c0d) main_video3_pane_g1

0xd2f8,	// (0x000a7c29) main_video3_pane_g2_ParamLimits

0xd2f8,	// (0x000a7c29) main_video3_pane_g2

0x0001,

0x0507,	// (0x0009ae38) main_video3_pane_g_ParamLimits

0x0507,	// (0x0009ae38) main_video3_pane_g

0xd314,	// (0x000a7c45) main_video3_pane_t1_ParamLimits

0xd314,	// (0x000a7c45) main_video3_pane_t1

0xd33f,	// (0x000a7c70) main_video3_pane_t2_ParamLimits

0xd33f,	// (0x000a7c70) main_video3_pane_t2

0xd36a,	// (0x000a7c9b) main_video3_pane_t3_ParamLimits

0xd36a,	// (0x000a7c9b) main_video3_pane_t3

0x0002,

0x050c,	// (0x0009ae3d) main_video3_pane_t_ParamLimits

0x050c,	// (0x0009ae3d) main_video3_pane_t

0xd397,	// (0x000a7cc8) cams_zoom_vslider_pane_g1

0xd3a0,	// (0x000a7cd1) cams_zoom_vslider_pane_g2

0x0001,

0x0513,	// (0x0009ae44) cams_zoom_vslider_pane_g

0xd3a8,	// (0x000a7cd9) small_slider_vertical_pane

0xcbc4,	// (0x000a74f5) small_slider_vertical_pane_g1

0xcbc4,	// (0x000a74f5) small_slider_vertical_pane_g2

0xd3b0,	// (0x000a7ce1) small_slider_vertical_pane_g3

0x0002,

0x0518,	// (0x0009ae49) small_slider_vertical_pane_g

0x0fe1,	// (0x0009b912) main_hwr_training_pane

0xd3b9,	// (0x000a7cea) hwr_training_instruct_pane_ParamLimits

0xd3b9,	// (0x000a7cea) hwr_training_instruct_pane

0x5b4a,	// (0x000a047b) hwr_training_navi_pane_ParamLimits

0x5b4a,	// (0x000a047b) hwr_training_navi_pane

0x5b64,	// (0x000a0495) hwr_training_write_pane_ParamLimits

0x5b64,	// (0x000a0495) hwr_training_write_pane

0x9a8d,	// (0x000a43be) bg_frame_shadow_pane

0xd3f0,	// (0x000a7d21) hwr_training_write_pane_g1

0xd3f8,	// (0x000a7d29) hwr_training_write_pane_g2

0xd400,	// (0x000a7d31) hwr_training_write_pane_g3

0xd408,	// (0x000a7d39) hwr_training_write_pane_g4

0xd410,	// (0x000a7d41) hwr_training_write_pane_g5

0xd418,	// (0x000a7d49) hwr_training_write_pane_g6

0xd420,	// (0x000a7d51) hwr_training_write_pane_g7

0x0006,

0x051f,	// (0x0009ae50) hwr_training_write_pane_g

0x5b9c,	// (0x000a04cd) hwr_training_navi_pane_g1_ParamLimits

0x5b9c,	// (0x000a04cd) hwr_training_navi_pane_g1

0x5bae,	// (0x000a04df) hwr_training_navi_pane_g2_ParamLimits

0x5bae,	// (0x000a04df) hwr_training_navi_pane_g2

0x5bc0,	// (0x000a04f1) hwr_training_navi_pane_g3_ParamLimits

0x5bc0,	// (0x000a04f1) hwr_training_navi_pane_g3

0x5bd0,	// (0x000a0501) hwr_training_navi_pane_g4_ParamLimits

0x5bd0,	// (0x000a0501) hwr_training_navi_pane_g4

0x0004,

0xf6fc,	// (0x000aa02d) hwr_training_navi_pane_g_ParamLimits

0xf6fc,	// (0x000aa02d) hwr_training_navi_pane_g

0x5bea,	// (0x000a051b) hwr_training_navi_pane_t1

0x5bf8,	// (0x000a0529) list_single_hwr_training_instruct_pane_ParamLimits

0x5bf8,	// (0x000a0529) list_single_hwr_training_instruct_pane

0xd428,	// (0x000a7d59) list_single_hwr_training_instruct_pane_t1

0xcb04,	// (0x000a7435) bg_frame_shadow_pane_g1

0xd437,	// (0x000a7d68) bg_frame_shadow_pane_g2

0xd43f,	// (0x000a7d70) bg_frame_shadow_pane_g3

0xd447,	// (0x000a7d78) bg_frame_shadow_pane_g4

0xd44f,	// (0x000a7d80) bg_frame_shadow_pane_g5

0xd457,	// (0x000a7d88) bg_frame_shadow_pane_g6

0xd45f,	// (0x000a7d90) bg_frame_shadow_pane_g7

0xa7d3,	// (0x000a5104) bg_frame_shadow_pane_g8

0x0007,

0xf707,	// (0x000aa038) bg_frame_shadow_pane_g

0x0fe1,	// (0x0009b912) main_video_tele_dialer_pane

0x5c27,	// (0x000a0558) aid_size_cell_video_keypad_ParamLimits

0x5c27,	// (0x000a0558) aid_size_cell_video_keypad

0x5c37,	// (0x000a0568) grid_video_dialer_keypad_pane_ParamLimits

0x5c37,	// (0x000a0568) grid_video_dialer_keypad_pane

0x5c6b,	// (0x000a059c) video_down_pane_cp_ParamLimits

0x5c6b,	// (0x000a059c) video_down_pane_cp

0x5c95,	// (0x000a05c6) cell_video_dialer_keypad_pane_ParamLimits

0x5c95,	// (0x000a05c6) cell_video_dialer_keypad_pane

0xd467,	// (0x000a7d98) bg_button_pane_cp08_ParamLimits

0xd467,	// (0x000a7d98) bg_button_pane_cp08

0x5caa,	// (0x000a05db) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5caa,	// (0x000a05db) cell_video_dialer_keypad_pane_g1

0x5468,	// (0x0009fd99) mup3_rocker2_pane_ParamLimits

0x5468,	// (0x0009fd99) mup3_rocker2_pane

0xcbc4,	// (0x000a74f5) mup3_rocker2_pane_g1

0x4388,	// (0x0009ecb9) main_dialer2_pane

0x0fe1,	// (0x0009b912) main_mp4_pane

0x5ced,	// (0x000a061e) main_mp4_pane_g1_ParamLimits

0x5ced,	// (0x000a061e) main_mp4_pane_g1

0x5cfb,	// (0x000a062c) main_mp4_pane_g2_ParamLimits

0x5cfb,	// (0x000a062c) main_mp4_pane_g2

0x5d09,	// (0x000a063a) main_mp4_pane_g3_ParamLimits

0x5d09,	// (0x000a063a) main_mp4_pane_g3

0x5d4e,	// (0x000a067f) main_mp4_pane_g4_ParamLimits

0x5d4e,	// (0x000a067f) main_mp4_pane_g4

0x5d76,	// (0x000a06a7) main_mp4_pane_g5_ParamLimits

0x5d76,	// (0x000a06a7) main_mp4_pane_g5

0x0005,

0xf727,	// (0x000aa058) main_mp4_pane_g_ParamLimits

0xf727,	// (0x000aa058) main_mp4_pane_g

0x5dc6,	// (0x000a06f7) main_mp4_pane_t1_ParamLimits

0x5dc6,	// (0x000a06f7) main_mp4_pane_t1

0x5e22,	// (0x000a0753) main_mp4_pane_t2_ParamLimits

0x5e22,	// (0x000a0753) main_mp4_pane_t2

0xd473,	// (0x000a7da4) main_mp4_pane_t3_ParamLimits

0xd473,	// (0x000a7da4) main_mp4_pane_t3

0x5e74,	// (0x000a07a5) main_mp4_pane_t4_ParamLimits

0x5e74,	// (0x000a07a5) main_mp4_pane_t4

0x0003,

0xf734,	// (0x000aa065) main_mp4_pane_t_ParamLimits

0xf734,	// (0x000aa065) main_mp4_pane_t

0x5eb8,	// (0x000a07e9) mp4_progress_pane_ParamLimits

0x5eb8,	// (0x000a07e9) mp4_progress_pane

0x5f02,	// (0x000a0833) mp4_rocker_pane_ParamLimits

0x5f02,	// (0x000a0833) mp4_rocker_pane

0xd49b,	// (0x000a7dcc) mp4_progress_pane_t1

0xd4b4,	// (0x000a7de5) mp4_progress_pane_t2

0x0001,

0x056f,	// (0x0009aea0) mp4_progress_pane_t

0xd4cd,	// (0x000a7dfe) mup_progress_pane_cp04

0xd974,	// (0x000a82a5) mp4_rocker_pane_g1

0x5f22,	// (0x000a0853) aid_cell_size_keypad2_ParamLimits

0x5f22,	// (0x000a0853) aid_cell_size_keypad2

0x5f32,	// (0x000a0863) dialer2_ne_pane_ParamLimits

0x5f32,	// (0x000a0863) dialer2_ne_pane

0x5f40,	// (0x000a0871) grid_dialer2_keypad_pane_ParamLimits

0x5f40,	// (0x000a0871) grid_dialer2_keypad_pane

0xd97e,	// (0x000a82af) bg_popup_call_pane_cp07_ParamLimits

0xd97e,	// (0x000a82af) bg_popup_call_pane_cp07

0x5f50,	// (0x000a0881) dialer2_ne_pane_t1_ParamLimits

0x5f50,	// (0x000a0881) dialer2_ne_pane_t1

0x5f75,	// (0x000a08a6) cell_dialer2_keypad_pane_ParamLimits

0x5f75,	// (0x000a08a6) cell_dialer2_keypad_pane

0xd4eb,	// (0x000a7e1c) bg_button_pane_pane_cp04_ParamLimits

0xd4eb,	// (0x000a7e1c) bg_button_pane_pane_cp04

0x5f8a,	// (0x000a08bb) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f8a,	// (0x000a08bb) cell_dialer2_keypad_pane_g1

0x1ef4,	// (0x0009c825) aid_placing_vt_set_content_ParamLimits

0x1ef4,	// (0x0009c825) aid_placing_vt_set_content

0x1f20,	// (0x0009c851) aid_placing_vt_set_title_ParamLimits

0x1f20,	// (0x0009c851) aid_placing_vt_set_title

0x0fe1,	// (0x0009b912) main_image3_pane

0x6024,	// (0x000a0955) area_side_right_pane_cp01_ParamLimits

0x6024,	// (0x000a0955) area_side_right_pane_cp01

0x6051,	// (0x000a0982) main_image3_pane_g1_ParamLimits

0x6051,	// (0x000a0982) main_image3_pane_g1

0x605f,	// (0x000a0990) main_image3_pane_g2_ParamLimits

0x605f,	// (0x000a0990) main_image3_pane_g2

0x6078,	// (0x000a09a9) main_image3_pane_g3_ParamLimits

0x6078,	// (0x000a09a9) main_image3_pane_g3

0x6091,	// (0x000a09c2) main_image3_pane_g4_ParamLimits

0x6091,	// (0x000a09c2) main_image3_pane_g4

0x0003,

0xf747,	// (0x000aa078) main_image3_pane_g_ParamLimits

0xf747,	// (0x000aa078) main_image3_pane_g

0x60aa,	// (0x000a09db) main_image3_pane_t1_ParamLimits

0x60aa,	// (0x000a09db) main_image3_pane_t1

0x60cf,	// (0x000a0a00) main_image3_pane_t2_ParamLimits

0x60cf,	// (0x000a0a00) main_image3_pane_t2

0x60ee,	// (0x000a0a1f) main_image3_pane_t3_ParamLimits

0x60ee,	// (0x000a0a1f) main_image3_pane_t3

0x0003,

0xf750,	// (0x000aa081) main_image3_pane_t_ParamLimits

0xf750,	// (0x000aa081) main_image3_pane_t

0xe87b,	// (0x000a91ac) grid_sctrl_middle_pane_cp01_ParamLimits

0xe87b,	// (0x000a91ac) grid_sctrl_middle_pane_cp01

0x614f,	// (0x000a0a80) cell_sctrl_middle_pane_cp01_ParamLimits

0x614f,	// (0x000a0a80) cell_sctrl_middle_pane_cp01

0x6160,	// (0x000a0a91) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6160,	// (0x000a0a91) cell_sctrl_middle_pane_cp01_g1

0x0fe1,	// (0x0009b912) main_call4_pane

0x616d,	// (0x000a0a9e) aid_size_button_call4_ParamLimits

0x616d,	// (0x000a0a9e) aid_size_button_call4

0x619d,	// (0x000a0ace) call4_windows_pane_ParamLimits

0x619d,	// (0x000a0ace) call4_windows_pane

0x61b7,	// (0x000a0ae8) grid_call4_button_pane_ParamLimits

0x61b7,	// (0x000a0ae8) grid_call4_button_pane

0xd4f7,	// (0x000a7e28) call4_windows_conf_pane

0xd50c,	// (0x000a7e3d) popup_call4_audio_first_window_ParamLimits

0xd50c,	// (0x000a7e3d) popup_call4_audio_first_window

0xd558,	// (0x000a7e89) popup_call4_audio_second_window_ParamLimits

0xd558,	// (0x000a7e89) popup_call4_audio_second_window

0xd56c,	// (0x000a7e9d) popup_call4_audio_wait_window_ParamLimits

0xd56c,	// (0x000a7e9d) popup_call4_audio_wait_window

0x61db,	// (0x000a0b0c) cell_call4_button_pane_ParamLimits

0x61db,	// (0x000a0b0c) cell_call4_button_pane

0x6200,	// (0x000a0b31) bg_button_pane_cp09_ParamLimits

0x6200,	// (0x000a0b31) bg_button_pane_cp09

0x620c,	// (0x000a0b3d) cell_call4_button_pane_g1_ParamLimits

0x620c,	// (0x000a0b3d) cell_call4_button_pane_g1

0x6219,	// (0x000a0b4a) cell_call4_button_pane_t1_ParamLimits

0x6219,	// (0x000a0b4a) cell_call4_button_pane_t1

0xd5b4,	// (0x000a7ee5) popup_call4_audio_conf_window_ParamLimits

0xd5b4,	// (0x000a7ee5) popup_call4_audio_conf_window

0x549b,	// (0x0009fdcc) mup3_progress_pane_t1_ParamLimits

0x54ba,	// (0x0009fdeb) mup3_progress_pane_t2_ParamLimits

0xce9f,	// (0x000a77d0) mup3_progress_pane_t3_ParamLimits

0xf691,	// (0x000a9fc2) mup3_progress_pane_t_ParamLimits

0xcebc,	// (0x000a77ed) mup_progress_pane_cp03_ParamLimits

0x59d8,	// (0x000a0309) mup3_control_keys_pane_g4_copy1

0x5ee6,	// (0x000a0817) mp4_rocker2_pane_ParamLimits

0x5ee6,	// (0x000a0817) mp4_rocker2_pane

0xd5c8,	// (0x000a7ef9) mp4_rocker2_pane_g1

0xd5d0,	// (0x000a7f01) mp4_rocker2_pane_g2

0x622b,	// (0x000a0b5c) mp4_rocker2_pane_g3

0x6233,	// (0x000a0b64) mp4_rocker2_pane_g4

0x623b,	// (0x000a0b6c) mp4_rocker2_pane_g5

0x0004,

0xf759,	// (0x000aa08a) mp4_rocker2_pane_g

0x0fe1,	// (0x0009b912) main_camera4_pane

0x0fe1,	// (0x0009b912) main_video4_pane

0x5c47,	// (0x000a0578) main_video_tele_dialer_pane_t1_ParamLimits

0x5c47,	// (0x000a0578) main_video_tele_dialer_pane_t1

0x5c59,	// (0x000a058a) main_video_tele_dialer_pane_t2_ParamLimits

0x5c59,	// (0x000a058a) main_video_tele_dialer_pane_t2

0x0001,

0xf718,	// (0x000aa049) main_video_tele_dialer_pane_t_ParamLimits

0xf718,	// (0x000aa049) main_video_tele_dialer_pane_t

0x625b,	// (0x000a0b8c) cam4_autofocus_pane_ParamLimits

0x625b,	// (0x000a0b8c) cam4_autofocus_pane

0x6275,	// (0x000a0ba6) cam4_image_uncrop_pane_ParamLimits

0x6275,	// (0x000a0ba6) cam4_image_uncrop_pane

0x628c,	// (0x000a0bbd) cam4_indicators_pane_ParamLimits

0x628c,	// (0x000a0bbd) cam4_indicators_pane

0x62a8,	// (0x000a0bd9) main_camera4_pane_g1_ParamLimits

0x62a8,	// (0x000a0bd9) main_camera4_pane_g1

0x62b4,	// (0x000a0be5) main_camera4_pane_g2_ParamLimits

0x62b4,	// (0x000a0be5) main_camera4_pane_g2

0x62b4,	// (0x000a0be5) main_camera4_pane_g3_ParamLimits

0x62b4,	// (0x000a0be5) main_camera4_pane_g3

0x62c0,	// (0x000a0bf1) main_camera4_pane_g4_ParamLimits

0x62c0,	// (0x000a0bf1) main_camera4_pane_g4

0x62cc,	// (0x000a0bfd) main_camera4_pane_g5_ParamLimits

0x62cc,	// (0x000a0bfd) main_camera4_pane_g5

0x0005,

0xf764,	// (0x000aa095) main_camera4_pane_g_ParamLimits

0xf764,	// (0x000aa095) main_camera4_pane_g

0x62e6,	// (0x000a0c17) main_camera4_pane_t1_ParamLimits

0x62e6,	// (0x000a0c17) main_camera4_pane_t1

0x632e,	// (0x000a0c5f) bg_tb_trans_pane_cp06

0x6344,	// (0x000a0c75) cam4_indicators_pane_g1

0x6355,	// (0x000a0c86) cam4_indicators_pane_g2

0x0002,

0xf77f,	// (0x000aa0b0) cam4_indicators_pane_g

0x6373,	// (0x000a0ca4) cam4_indicators_pane_t1

0x639d,	// (0x000a0cce) main_video4_pane_g1_ParamLimits

0x639d,	// (0x000a0cce) main_video4_pane_g1

0x63a9,	// (0x000a0cda) main_video4_pane_g2_ParamLimits

0x63a9,	// (0x000a0cda) main_video4_pane_g2

0x63b5,	// (0x000a0ce6) main_video4_pane_g3_ParamLimits

0x63b5,	// (0x000a0ce6) main_video4_pane_g3

0x63c1,	// (0x000a0cf2) main_video4_pane_g4_ParamLimits

0x63c1,	// (0x000a0cf2) main_video4_pane_g4

0x0004,

0xf786,	// (0x000aa0b7) main_video4_pane_g_ParamLimits

0xf786,	// (0x000aa0b7) main_video4_pane_g

0x63e1,	// (0x000a0d12) vid4_indicators_pane_ParamLimits

0x63e1,	// (0x000a0d12) vid4_indicators_pane

0x6400,	// (0x000a0d31) video4_image_uncrop_cif_pane_ParamLimits

0x6400,	// (0x000a0d31) video4_image_uncrop_cif_pane

0x640f,	// (0x000a0d40) video4_image_uncrop_nhd_pane_ParamLimits

0x640f,	// (0x000a0d40) video4_image_uncrop_nhd_pane

0x6275,	// (0x000a0ba6) video4_image_uncrop_vga_pane_ParamLimits

0x6275,	// (0x000a0ba6) video4_image_uncrop_vga_pane

0x437a,	// (0x0009ecab) bg_tb_trans_pane_cp07

0x6424,	// (0x000a0d55) vid4_indicators_pane_g1

0x6438,	// (0x000a0d69) vid4_indicators_pane_g2

0x644c,	// (0x000a0d7d) vid4_indicators_pane_g3

0x0004,

0xf791,	// (0x000aa0c2) vid4_indicators_pane_g

0x6479,	// (0x000a0daa) vid4_indicators_pane_t1

0x6490,	// (0x000a0dc1) cam4_autofocus_pane_g1

0x6498,	// (0x000a0dc9) cam4_autofocus_pane_g2

0x64a0,	// (0x000a0dd1) cam4_autofocus_pane_g3

0x0002,

0xf79c,	// (0x000aa0cd) cam4_autofocus_pane_g

0x64a8,	// (0x000a0dd9) cam4_autofocus_pane_g3_copy1

0x5c79,	// (0x000a05aa) video_down_pane_cp_t1

0x5c87,	// (0x000a05b8) video_down_pane_cp_t2

0x0001,

0xf71d,	// (0x000aa04e) video_down_pane_cp_t

0x0fc7,	// (0x0009b8f8) popup_vitu2_window_ParamLimits

0x0fc7,	// (0x0009b8f8) popup_vitu2_window

0x64b0,	// (0x000a0de1) aid_size_cell2_itu2_ParamLimits

0x64b0,	// (0x000a0de1) aid_size_cell2_itu2

0x64d2,	// (0x000a0e03) aid_size_cell_itu2_ParamLimits

0x64d2,	// (0x000a0e03) aid_size_cell_itu2

0x6516,	// (0x000a0e47) bg_popup_window_pane_cp09_ParamLimits

0x6516,	// (0x000a0e47) bg_popup_window_pane_cp09

0x6524,	// (0x000a0e55) field_vitu2_entry_pane_ParamLimits

0x6524,	// (0x000a0e55) field_vitu2_entry_pane

0x6542,	// (0x000a0e73) grid_vitu2_function_pane_ParamLimits

0x6542,	// (0x000a0e73) grid_vitu2_function_pane

0x6582,	// (0x000a0eb3) grid_vitu2_itu_pane_ParamLimits

0x6582,	// (0x000a0eb3) grid_vitu2_itu_pane

0x65fa,	// (0x000a0f2b) cell_vitu2_itu_pane_ParamLimits

0x65fa,	// (0x000a0f2b) cell_vitu2_itu_pane

0x6613,	// (0x000a0f44) cell_vitu2_function_pane_ParamLimits

0x6613,	// (0x000a0f44) cell_vitu2_function_pane

0xd5d8,	// (0x000a7f09) bg_popup_call_pane_cp08_ParamLimits

0xd5d8,	// (0x000a7f09) bg_popup_call_pane_cp08

0xd5ef,	// (0x000a7f20) field_vitu2_entry_pane_g1

0xd5fb,	// (0x000a7f2c) field_vitu2_entry_pane_g2

0x0002,

0xf7a3,	// (0x000aa0d4) field_vitu2_entry_pane_g

0x6654,	// (0x000a0f85) field_vitu2_entry_pane_t1_ParamLimits

0x6654,	// (0x000a0f85) field_vitu2_entry_pane_t1

0x9ff8,	// (0x000a4929) field_vitu2_entry_pane_t2_ParamLimits

0x9ff8,	// (0x000a4929) field_vitu2_entry_pane_t2

0x0001,

0xf7aa,	// (0x000aa0db) field_vitu2_entry_pane_t_ParamLimits

0xf7aa,	// (0x000aa0db) field_vitu2_entry_pane_t

0x6685,	// (0x000a0fb6) bg_button_pane_cp010_ParamLimits

0x6685,	// (0x000a0fb6) bg_button_pane_cp010

0x6693,	// (0x000a0fc4) cell_vitu2_itu_pane_g1

0x66b3,	// (0x000a0fe4) cell_vitu2_itu_pane_t1_ParamLimits

0x66b3,	// (0x000a0fe4) cell_vitu2_itu_pane_t1

0x0c36,	// (0x0009b567) cell_vitu2_itu_pane_t2_ParamLimits

0x0c36,	// (0x0009b567) cell_vitu2_itu_pane_t2

0x0002,

0xf7b4,	// (0x000aa0e5) cell_vitu2_itu_pane_t_ParamLimits

0xf7b4,	// (0x000aa0e5) cell_vitu2_itu_pane_t

0x437a,	// (0x0009ecab) bg_button_pane_cp011

0x66ff,	// (0x000a1030) cell_vitu2_function_pane_g1

0x0fe1,	// (0x0009b912) main_myfav_hc_pane

0x6130,	// (0x000a0a61) popup_image3_note_pane_ParamLimits

0x6130,	// (0x000a0a61) popup_image3_note_pane

0x613e,	// (0x000a0a6f) popup_image3_tool_bar_pane_ParamLimits

0x613e,	// (0x000a0a6f) popup_image3_tool_bar_pane

0x0cac,	// (0x0009b5dd) cell_vitu2_itu_pane_t3_ParamLimits

0x0cac,	// (0x0009b5dd) cell_vitu2_itu_pane_t3

0x9a8d,	// (0x000a43be) bg_popup_trans_pane

0xd61d,	// (0x000a7f4e) grid_image3_tool_bar_pane

0xd627,	// (0x000a7f58) bg_popup_trans_pane_g1

0xab2f,	// (0x000a5460) bg_popup_trans_pane_g2

0xd62f,	// (0x000a7f60) bg_popup_trans_pane_g3

0xd637,	// (0x000a7f68) bg_popup_trans_pane_g4

0xd63f,	// (0x000a7f70) bg_popup_trans_pane_g5

0xd647,	// (0x000a7f78) bg_popup_trans_pane_g6

0xd64f,	// (0x000a7f80) bg_popup_trans_pane_g7

0xd657,	// (0x000a7f88) bg_popup_trans_pane_g8

0xab0f,	// (0x000a5440) bg_popup_trans_pane_g9

0x0008,

0xf7bb,	// (0x000aa0ec) bg_popup_trans_pane_g

0xd65f,	// (0x000a7f90) cell_image3_tool_bar_pane_ParamLimits

0xd65f,	// (0x000a7f90) cell_image3_tool_bar_pane

0xcbc4,	// (0x000a74f5) cell_image3_tool_bar_pane_g1

0x9a8d,	// (0x000a43be) bg_popup_trans_pane_cp1

0xd673,	// (0x000a7fa4) popup_image3_note_pane_t1

0xd681,	// (0x000a7fb2) popup_image3_note_pane_t2

0xd68f,	// (0x000a7fc0) popup_image3_note_pane_t3

0x0002,

0xf7ce,	// (0x000aa0ff) popup_image3_note_pane_t

0xd69d,	// (0x000a7fce) popup_image3_note_pane_t3_copy1

0x6713,	// (0x000a1044) bg_myfav_hc_instruction_pane_ParamLimits

0x6713,	// (0x000a1044) bg_myfav_hc_instruction_pane

0x672b,	// (0x000a105c) cell_myfav_contact_pane_ParamLimits

0x672b,	// (0x000a105c) cell_myfav_contact_pane

0x6745,	// (0x000a1076) cell_myfav_contact_pane_cp1_ParamLimits

0x6745,	// (0x000a1076) cell_myfav_contact_pane_cp1

0x675d,	// (0x000a108e) cell_myfav_contact_pane_cp2_ParamLimits

0x675d,	// (0x000a108e) cell_myfav_contact_pane_cp2

0x6775,	// (0x000a10a6) cell_myfav_contact_pane_cp3_ParamLimits

0x6775,	// (0x000a10a6) cell_myfav_contact_pane_cp3

0x678c,	// (0x000a10bd) cell_myfav_contact_pane_cp4_ParamLimits

0x678c,	// (0x000a10bd) cell_myfav_contact_pane_cp4

0x67a2,	// (0x000a10d3) cell_myfav_contact_pane_cp5_ParamLimits

0x67a2,	// (0x000a10d3) cell_myfav_contact_pane_cp5

0x67b6,	// (0x000a10e7) cell_myfav_contact_pane_cp6_ParamLimits

0x67b6,	// (0x000a10e7) cell_myfav_contact_pane_cp6

0x67ca,	// (0x000a10fb) cell_myfav_contact_pane_cp7_ParamLimits

0x67ca,	// (0x000a10fb) cell_myfav_contact_pane_cp7

0xd6ab,	// (0x000a7fdc) listscroll_gen_pane_cp05

0x67e2,	// (0x000a1113) main_myfav_hc_pane_g1_ParamLimits

0x67e2,	// (0x000a1113) main_myfav_hc_pane_g1

0x67fa,	// (0x000a112b) main_myfav_hc_pane_g2_ParamLimits

0x67fa,	// (0x000a112b) main_myfav_hc_pane_g2

0x0002,

0xf7d5,	// (0x000aa106) main_myfav_hc_pane_g_ParamLimits

0xf7d5,	// (0x000aa106) main_myfav_hc_pane_g

0x682a,	// (0x000a115b) main_myfav_hc_pane_t1_ParamLimits

0x682a,	// (0x000a115b) main_myfav_hc_pane_t1

0xd6b4,	// (0x000a7fe5) main_myfav_hc_pane_t2_ParamLimits

0xd6b4,	// (0x000a7fe5) main_myfav_hc_pane_t2

0xd6c6,	// (0x000a7ff7) main_myfav_hc_pane_t3_ParamLimits

0xd6c6,	// (0x000a7ff7) main_myfav_hc_pane_t3

0x6841,	// (0x000a1172) main_myfav_hc_pane_t4_ParamLimits

0x6841,	// (0x000a1172) main_myfav_hc_pane_t4

0x0004,

0xf7dc,	// (0x000aa10d) main_myfav_hc_pane_t_ParamLimits

0xf7dc,	// (0x000aa10d) main_myfav_hc_pane_t

0xcbc4,	// (0x000a74f5) bg_myfav_hc_instruction_pane_g1

0xd6ea,	// (0x000a801b) cell_myfav_contact_pane_g1_ParamLimits

0xd6ea,	// (0x000a801b) cell_myfav_contact_pane_g1

0xd6ea,	// (0x000a801b) cell_myfav_contact_pane_g2_ParamLimits

0xd6ea,	// (0x000a801b) cell_myfav_contact_pane_g2

0xd6f6,	// (0x000a8027) cell_myfav_contact_pane_g3_ParamLimits

0xd6f6,	// (0x000a8027) cell_myfav_contact_pane_g3

0xce89,	// (0x000a77ba) cell_myfav_contact_pane_g4_ParamLimits

0xce89,	// (0x000a77ba) cell_myfav_contact_pane_g4

0xd703,	// (0x000a8034) cell_myfav_contact_pane_g5_ParamLimits

0xd703,	// (0x000a8034) cell_myfav_contact_pane_g5

0x0004,

0x061e,	// (0x0009af4f) cell_myfav_contact_pane_g_ParamLimits

0x061e,	// (0x0009af4f) cell_myfav_contact_pane_g

0x6812,	// (0x000a1143) main_myfav_hc_pane_g3_ParamLimits

0x6812,	// (0x000a1143) main_myfav_hc_pane_g3

0x0ed0,	// (0x0009b801) popup_adpt_find_window

0x686b,	// (0x000a119c) afind_page_pane_ParamLimits

0x686b,	// (0x000a119c) afind_page_pane

0x6878,	// (0x000a11a9) aid_size_cell_afind_ParamLimits

0x6878,	// (0x000a11a9) aid_size_cell_afind

0x6892,	// (0x000a11c3) bg_popup_sub_pane_cp09_ParamLimits

0x6892,	// (0x000a11c3) bg_popup_sub_pane_cp09

0x689f,	// (0x000a11d0) find_pane_cp01_ParamLimits

0x689f,	// (0x000a11d0) find_pane_cp01

0xd70f,	// (0x000a8040) grid_afind_control_pane_ParamLimits

0xd70f,	// (0x000a8040) grid_afind_control_pane

0x68ac,	// (0x000a11dd) grid_afind_pane_ParamLimits

0x68ac,	// (0x000a11dd) grid_afind_pane

0x68c6,	// (0x000a11f7) cell_afind_pane_ParamLimits

0x68c6,	// (0x000a11f7) cell_afind_pane

0xcbc4,	// (0x000a74f5) afind_page_pane_g1

0x690e,	// (0x000a123f) afind_page_pane_g2

0x6917,	// (0x000a1248) afind_page_pane_g3

0x0002,

0xf7e7,	// (0x000aa118) afind_page_pane_g

0x6920,	// (0x000a1251) afind_page_pane_t1

0xd723,	// (0x000a8054) cell_afind_grid_control_pane_ParamLimits

0xd723,	// (0x000a8054) cell_afind_grid_control_pane

0xd4eb,	// (0x000a7e1c) bg_button_pane_cp69_ParamLimits

0xd4eb,	// (0x000a7e1c) bg_button_pane_cp69

0x6940,	// (0x000a1271) cell_afind_pane_g1_ParamLimits

0x6940,	// (0x000a1271) cell_afind_pane_g1

0x694d,	// (0x000a127e) cell_afind_pane_t1_ParamLimits

0x694d,	// (0x000a127e) cell_afind_pane_t1

0xa928,	// (0x000a5259) bg_button_pane_cp72

0xd732,	// (0x000a8063) cell_afind_grid_control_pane_g1

0x3ef4,	// (0x0009e825) aid_image_placing_area_ParamLimits

0x3ef4,	// (0x0009e825) aid_image_placing_area

0xd1b9,	// (0x000a7aea) field_vitu_entry_pane_g1_ParamLimits

0xd1b9,	// (0x000a7aea) field_vitu_entry_pane_g1

0xd1c5,	// (0x000a7af6) field_vitu_entry_pane_g2_ParamLimits

0xd1c5,	// (0x000a7af6) field_vitu_entry_pane_g2

0x0001,

0x04da,	// (0x0009ae0b) field_vitu_entry_pane_g_ParamLimits

0x04da,	// (0x0009ae0b) field_vitu_entry_pane_g

0x5a63,	// (0x000a0394) cell_vitu_itu_pane_g1_ParamLimits

0x5ab3,	// (0x000a03e4) cell_vitu_itu_pane_t3_ParamLimits

0x5ab3,	// (0x000a03e4) cell_vitu_itu_pane_t3

0xd49b,	// (0x000a7dcc) mp4_progress_pane_t1_ParamLimits

0xd4b4,	// (0x000a7de5) mp4_progress_pane_t2_ParamLimits

0x056f,	// (0x0009aea0) mp4_progress_pane_t_ParamLimits

0xd4cd,	// (0x000a7dfe) mup_progress_pane_cp04_ParamLimits

0x6855,	// (0x000a1186) main_myfav_hc_pane_t5_ParamLimits

0x6855,	// (0x000a1186) main_myfav_hc_pane_t5

0x0c26,	// (0x0009b557) aid_zoom_text_primary

0x0ed0,	// (0x0009b801) popup_adpt_find_window_ParamLimits

0x437a,	// (0x0009ecab) main_cam_set_pane

0x629a,	// (0x000a0bcb) cam4_zoom_pane_ParamLimits

0x629a,	// (0x000a0bcb) cam4_zoom_pane

0x695f,	// (0x000a1290) main_cam_set_pane_g1_ParamLimits

0x695f,	// (0x000a1290) main_cam_set_pane_g1

0x696d,	// (0x000a129e) main_cam_set_pane_g2_ParamLimits

0x696d,	// (0x000a129e) main_cam_set_pane_g2

0x0001,

0xf7ee,	// (0x000aa11f) main_cam_set_pane_g_ParamLimits

0xf7ee,	// (0x000aa11f) main_cam_set_pane_g

0x6979,	// (0x000a12aa) main_cam_set_pane_t1_ParamLimits

0x6979,	// (0x000a12aa) main_cam_set_pane_t1

0x6995,	// (0x000a12c6) main_cset_listscroll_pane_ParamLimits

0x6995,	// (0x000a12c6) main_cset_listscroll_pane

0x69c0,	// (0x000a12f1) main_cset_slider_pane_ParamLimits

0x69c0,	// (0x000a12f1) main_cset_slider_pane

0xd743,	// (0x000a8074) main_cset_list_pane_ParamLimits

0xd743,	// (0x000a8074) main_cset_list_pane

0xd753,	// (0x000a8084) scroll_pane_cp028

0x69df,	// (0x000a1310) aid_area_touch_slider

0x69fb,	// (0x000a132c) cset_slider_pane

0x6a25,	// (0x000a1356) main_cset_slider_pane_g1

0x6a3a,	// (0x000a136b) main_cset_slider_pane_g2

0x0011,

0xf7f3,	// (0x000aa124) main_cset_slider_pane_g

0xd78c,	// (0x000a80bd) main_cset_slider_pane_t1

0x6b00,	// (0x000a1431) main_cset_slider_pane_t2

0x6b1a,	// (0x000a144b) main_cset_slider_pane_t3

0x6b34,	// (0x000a1465) main_cset_slider_pane_t4

0x6b52,	// (0x000a1483) main_cset_slider_pane_t5

0x6b70,	// (0x000a14a1) main_cset_slider_pane_t6

0x6b87,	// (0x000a14b8) main_cset_slider_pane_t7

0x000e,

0xf818,	// (0x000aa149) main_cset_slider_pane_t

0x6c95,	// (0x000a15c6) cset_list_set_pane_ParamLimits

0x6c95,	// (0x000a15c6) cset_list_set_pane

0x6cb1,	// (0x000a15e2) aid_position_infowindow_above

0x6cb9,	// (0x000a15ea) aid_position_infowindow_below

0x6cc1,	// (0x000a15f2) cset_list_set_pane_g1_ParamLimits

0x6cc1,	// (0x000a15f2) cset_list_set_pane_g1

0xa015,	// (0x000a4946) cset_list_set_pane_g3_ParamLimits

0xa015,	// (0x000a4946) cset_list_set_pane_g3

0x0001,

0xf837,	// (0x000aa168) cset_list_set_pane_g_ParamLimits

0xf837,	// (0x000aa168) cset_list_set_pane_g

0xa024,	// (0x000a4955) cset_list_set_pane_t1_ParamLimits

0xa024,	// (0x000a4955) cset_list_set_pane_t1

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp021_ParamLimits

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp021

0xb4d9,	// (0x000a5e0a) cset_slider_pane_g1

0xb4eb,	// (0x000a5e1c) cset_slider_pane_g2

0xb4e2,	// (0x000a5e13) cset_slider_pane_g3

0x0002,

0x067e,	// (0x0009afaf) cset_slider_pane_g

0x6ccd,	// (0x000a15fe) aid_area_touch_cam4_zoom

0x6cd5,	// (0x000a1606) cam4_zoom_cont_pane

0x6cdd,	// (0x000a160e) cam4_zoom_pane_g1

0x6ce5,	// (0x000a1616) cam4_zoom_pane_g2

0x6ced,	// (0x000a161e) cam4_zoom_pane_g3

0x0002,

0xf83c,	// (0x000aa16d) cam4_zoom_pane_g

0x6cf5,	// (0x000a1626) cam4_zoom_cont_pane_g1

0x6cfe,	// (0x000a162f) cam4_zoom_cont_pane_g2

0x6d07,	// (0x000a1638) cam4_zoom_cont_pane_g3

0x0002,

0xf843,	// (0x000aa174) cam4_zoom_cont_pane_g

0x6187,	// (0x000a0ab8) call4_image_pane_ParamLimits

0x6187,	// (0x000a0ab8) call4_image_pane

0xd4f7,	// (0x000a7e28) call4_windows_conf_pane_ParamLimits

0xd536,	// (0x000a7e67) popup_call4_audio_in_window_ParamLimits

0xd536,	// (0x000a7e67) popup_call4_audio_in_window

0x9a8d,	// (0x000a43be) bg_popup_call2_act_pane_cp02

0xd5ac,	// (0x000a7edd) call4_list_conf_pane

0xcbc4,	// (0x000a74f5) call4_image_pane_g1

0xcbc4,	// (0x000a74f5) call4_image_pane_g2

0x0001,

0x039b,	// (0x0009accc) call4_image_pane_g

0xd82c,	// (0x000a815d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd82c,	// (0x000a815d) list_single_graphic_popup_conf4_pane

0x9a8d,	// (0x000a43be) list_highlight_pane_cp022

0xd83f,	// (0x000a8170) list_single_graphic_popup_conf4_pane_g1

0xb075,	// (0x000a59a6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf84a,	// (0x000aa17b) list_single_graphic_popup_conf4_pane_g

0xd847,	// (0x000a8178) list_single_graphic_popup_conf4_pane_t1

0x2084,	// (0x0009c9b5) popup_vtel_slider_window_ParamLimits

0x2084,	// (0x0009c9b5) popup_vtel_slider_window

0xd4d9,	// (0x000a7e0a) dialer2_ne_pane_t2_ParamLimits

0xd4d9,	// (0x000a7e0a) dialer2_ne_pane_t2

0x0001,

0xf73d,	// (0x000aa06e) dialer2_ne_pane_t_ParamLimits

0xf73d,	// (0x000aa06e) dialer2_ne_pane_t

0xa49e,	// (0x000a4dcf) bg_popup_sub_pane_cp010_ParamLimits

0xa49e,	// (0x000a4dcf) bg_popup_sub_pane_cp010

0x6d10,	// (0x000a1641) popup_vtel_slider_window_g1_ParamLimits

0x6d10,	// (0x000a1641) popup_vtel_slider_window_g1

0x6d1c,	// (0x000a164d) popup_vtel_slider_window_g2_ParamLimits

0x6d1c,	// (0x000a164d) popup_vtel_slider_window_g2

0x0003,

0xf84f,	// (0x000aa180) popup_vtel_slider_window_g_ParamLimits

0xf84f,	// (0x000aa180) popup_vtel_slider_window_g

0x6d64,	// (0x000a1695) vtel_slider_pane_ParamLimits

0x6d64,	// (0x000a1695) vtel_slider_pane

0x6d73,	// (0x000a16a4) vtel_slider_pane_g1_ParamLimits

0x6d73,	// (0x000a16a4) vtel_slider_pane_g1

0x6d80,	// (0x000a16b1) vtel_slider_pane_g2_ParamLimits

0x6d80,	// (0x000a16b1) vtel_slider_pane_g2

0x6d8d,	// (0x000a16be) vtel_slider_pane_g3_ParamLimits

0x6d8d,	// (0x000a16be) vtel_slider_pane_g3

0x6d73,	// (0x000a16a4) vtel_slider_pane_g4_ParamLimits

0x6d73,	// (0x000a16a4) vtel_slider_pane_g4

0x6d9a,	// (0x000a16cb) vtel_slider_pane_g5_ParamLimits

0x6d9a,	// (0x000a16cb) vtel_slider_pane_g5

0x0004,

0xf858,	// (0x000aa189) vtel_slider_pane_g_ParamLimits

0xf858,	// (0x000aa189) vtel_slider_pane_g

0x437a,	// (0x0009ecab) main_gallery2_pane

0x64f8,	// (0x000a0e29) aid_size_row_itut2_dropdow_list_ParamLimits

0x64f8,	// (0x000a0e29) aid_size_row_itut2_dropdow_list

0x6562,	// (0x000a0e93) grid_vitu2_function_top_pane_ParamLimits

0x6562,	// (0x000a0e93) grid_vitu2_function_top_pane

0x65ba,	// (0x000a0eeb) popup_vitu2_dropdown_list_window_ParamLimits

0x65ba,	// (0x000a0eeb) popup_vitu2_dropdown_list_window

0x65d8,	// (0x000a0f09) popup_vitu2_match_list_window

0x6db5,	// (0x000a16e6) cell_vitu2_function_top_pane_ParamLimits

0x6db5,	// (0x000a16e6) cell_vitu2_function_top_pane

0x6dd7,	// (0x000a1708) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dd7,	// (0x000a1708) cell_vitu2_function_top_pane_cp01

0x6df3,	// (0x000a1724) cell_vitu2_function_top_wide_pane_ParamLimits

0x6df3,	// (0x000a1724) cell_vitu2_function_top_wide_pane

0x437a,	// (0x0009ecab) bg_button_pane_cp012

0x6e0f,	// (0x000a1740) cell_vitu2_function_top_pane_g1

0x6e23,	// (0x000a1754) bg_button_pane_cp013_ParamLimits

0x6e23,	// (0x000a1754) bg_button_pane_cp013

0x6e3f,	// (0x000a1770) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e3f,	// (0x000a1770) cell_vitu2_function_top_wide_pane_g1

0x0fc7,	// (0x0009b8f8) bg_popup_sub_pane_cp20

0x6e57,	// (0x000a1788) list_vitu2_match_list_pane

0xd627,	// (0x000a7f58) bg_popup_sub_pane_cp20_g1

0xd62f,	// (0x000a7f60) bg_popup_sub_pane_cp20_g2

0xab2f,	// (0x000a5460) bg_popup_sub_pane_cp20_g3

0xd637,	// (0x000a7f68) bg_popup_sub_pane_cp20_g4

0xab0f,	// (0x000a5440) bg_popup_sub_pane_cp20_g5

0xd85d,	// (0x000a818e) bg_popup_sub_pane_cp20_g6

0xd647,	// (0x000a7f78) bg_popup_sub_pane_cp20_g7

0xd64f,	// (0x000a7f80) bg_popup_sub_pane_cp20_g8

0xd657,	// (0x000a7f88) bg_popup_sub_pane_cp20_g9

0x0008,

0xf863,	// (0x000aa194) bg_popup_sub_pane_cp20_g

0x6e6f,	// (0x000a17a0) list_vitu2_match_list_item_pane_ParamLimits

0x6e6f,	// (0x000a17a0) list_vitu2_match_list_item_pane

0x6e81,	// (0x000a17b2) list_vitu2_match_list_item_pane_t1

0x0fe1,	// (0x0009b912) bg_popup_sub_pane_cp21

0x6ed3,	// (0x000a1804) grid_vitu2_dropdown_list_pane

0x6edb,	// (0x000a180c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6edb,	// (0x000a180c) cell_vitu2_dropdown_list_char_pane

0x6efc,	// (0x000a182d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6efc,	// (0x000a182d) cell_vitu2_dropdown_list_ctrl_pane

0xd865,	// (0x000a8196) cell_vitu2_dropdown_list_char_pane_g1

0xd86e,	// (0x000a819f) cell_vitu2_dropdown_list_char_pane_g2

0xd877,	// (0x000a81a8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x06c9,	// (0x0009affa) cell_vitu2_dropdown_list_char_pane_g

0x6f28,	// (0x000a1859) cell_vitu2_dropdown_list_char_pane_t1

0x6f36,	// (0x000a1867) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f36,	// (0x000a1867) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f46,	// (0x000a1877) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f46,	// (0x000a1877) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f57,	// (0x000a1888) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f57,	// (0x000a1888) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f67,	// (0x000a1898) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f67,	// (0x000a1898) cell_vitu2_dropdown_list_ctrl_pane_g4

0x632e,	// (0x000a0c5f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x632e,	// (0x000a0c5f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf880,	// (0x000aa1b1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf880,	// (0x000aa1b1) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f83,	// (0x000a18b4) aid_size_cell_gallery2_ParamLimits

0x6f83,	// (0x000a18b4) aid_size_cell_gallery2

0x6f9d,	// (0x000a18ce) grid_gallery2_pane_ParamLimits

0x6f9d,	// (0x000a18ce) grid_gallery2_pane

0x58e4,	// (0x000a0215) scroll_pane_cp029_ParamLimits

0x58e4,	// (0x000a0215) scroll_pane_cp029

0x6fb4,	// (0x000a18e5) cell_gallery2_pane_ParamLimits

0x6fb4,	// (0x000a18e5) cell_gallery2_pane

0xd880,	// (0x000a81b1) cell_gallery2_pane_g2

0x7009,	// (0x000a193a) cell_gallery2_pane_g3

0xd888,	// (0x000a81b9) cell_gallery2_pane_g4

0xd890,	// (0x000a81c1) cell_gallery2_pane_g5

0xa8d6,	// (0x000a5207) grid_highlight_pane_cp10

0x65d8,	// (0x000a0f09) popup_vitu2_match_list_window_ParamLimits

0x65ea,	// (0x000a0f1b) popup_vitu2_query_window_ParamLimits

0x65ea,	// (0x000a0f1b) popup_vitu2_query_window

0x0fe1,	// (0x0009b912) bg_vitu2_candi_button_pane

0xd865,	// (0x000a8196) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86e,	// (0x000a819f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd877,	// (0x000a81a8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7011,	// (0x000a1942) bg_button_pane_cp015

0x7023,	// (0x000a1954) bg_button_pane_cp016

0x7036,	// (0x000a1967) bg_button_pane_cp017

0xc7ba,	// (0x000a70eb) bg_popup_sub_pane_cp22

0xd898,	// (0x000a81c9) popup_vitu2_query_window_g1

0x707b,	// (0x000a19ac) popup_vitu2_query_window_g2

0x0002,

0xf88b,	// (0x000aa1bc) popup_vitu2_query_window_g

0x7098,	// (0x000a19c9) popup_vitu2_query_window_t1_ParamLimits

0x7098,	// (0x000a19c9) popup_vitu2_query_window_t1

0x70cb,	// (0x000a19fc) popup_vitu2_query_window_t2_ParamLimits

0x70cb,	// (0x000a19fc) popup_vitu2_query_window_t2

0x70dd,	// (0x000a1a0e) popup_vitu2_query_window_t3_ParamLimits

0x70dd,	// (0x000a1a0e) popup_vitu2_query_window_t3

0x7105,	// (0x000a1a36) popup_vitu2_query_window_t4_ParamLimits

0x7105,	// (0x000a1a36) popup_vitu2_query_window_t4

0x7126,	// (0x000a1a57) popup_vitu2_query_window_t5_ParamLimits

0x7126,	// (0x000a1a57) popup_vitu2_query_window_t5

0x0006,

0xf892,	// (0x000aa1c3) popup_vitu2_query_window_t_ParamLimits

0xf892,	// (0x000aa1c3) popup_vitu2_query_window_t

0xd73b,	// (0x000a806c) main_cset_text_pane

0x69df,	// (0x000a1310) aid_area_touch_slider_ParamLimits

0x69fb,	// (0x000a132c) cset_slider_pane_ParamLimits

0x6a25,	// (0x000a1356) main_cset_slider_pane_g1_ParamLimits

0x6a3a,	// (0x000a136b) main_cset_slider_pane_g2_ParamLimits

0xd75c,	// (0x000a808d) main_cset_slider_pane_g3_ParamLimits

0xd75c,	// (0x000a808d) main_cset_slider_pane_g3

0x6a4f,	// (0x000a1380) main_cset_slider_pane_g4_ParamLimits

0x6a4f,	// (0x000a1380) main_cset_slider_pane_g4

0x6a5e,	// (0x000a138f) main_cset_slider_pane_g5_ParamLimits

0x6a5e,	// (0x000a138f) main_cset_slider_pane_g5

0x6a6c,	// (0x000a139d) main_cset_slider_pane_g6_ParamLimits

0x6a6c,	// (0x000a139d) main_cset_slider_pane_g6

0xf7f3,	// (0x000aa124) main_cset_slider_pane_g_ParamLimits

0xd78c,	// (0x000a80bd) main_cset_slider_pane_t1_ParamLimits

0x6b00,	// (0x000a1431) main_cset_slider_pane_t2_ParamLimits

0x6b1a,	// (0x000a144b) main_cset_slider_pane_t3_ParamLimits

0x6b34,	// (0x000a1465) main_cset_slider_pane_t4_ParamLimits

0x6b52,	// (0x000a1483) main_cset_slider_pane_t5_ParamLimits

0x6b70,	// (0x000a14a1) main_cset_slider_pane_t6_ParamLimits

0x6b87,	// (0x000a14b8) main_cset_slider_pane_t7_ParamLimits

0x6bb5,	// (0x000a14e6) main_cset_slider_pane_t8_ParamLimits

0x6bb5,	// (0x000a14e6) main_cset_slider_pane_t8

0x6bdd,	// (0x000a150e) main_cset_slider_pane_t9_ParamLimits

0x6bdd,	// (0x000a150e) main_cset_slider_pane_t9

0x6c05,	// (0x000a1536) main_cset_slider_pane_t10_ParamLimits

0x6c05,	// (0x000a1536) main_cset_slider_pane_t10

0x6c2d,	// (0x000a155e) main_cset_slider_pane_t11_ParamLimits

0x6c2d,	// (0x000a155e) main_cset_slider_pane_t11

0x6c57,	// (0x000a1588) main_cset_slider_pane_t12_ParamLimits

0x6c57,	// (0x000a1588) main_cset_slider_pane_t12

0x6c76,	// (0x000a15a7) main_cset_slider_pane_t13_ParamLimits

0x6c76,	// (0x000a15a7) main_cset_slider_pane_t13

0xf818,	// (0x000aa149) main_cset_slider_pane_t_ParamLimits

0x9a8d,	// (0x000a43be) bg_popup_sub_pane_cp011

0xd8a4,	// (0x000a81d5) main_cset_text_pane_g1

0xd8ac,	// (0x000a81dd) main_cset_text_pane_t1

0xd8ba,	// (0x000a81eb) main_cset_text_pane_t2

0xd8c8,	// (0x000a81f9) main_cset_text_pane_t3

0xd8d6,	// (0x000a8207) main_cset_text_pane_t4

0xd8e4,	// (0x000a8215) main_cset_text_pane_t5

0xd8f2,	// (0x000a8223) main_cset_text_pane_t6

0xd900,	// (0x000a8231) main_cset_text_pane_t7

0x0006,

0x06f1,	// (0x0009b022) main_cset_text_pane_t

0x0fe1,	// (0x0009b912) main_cam4_burst_pane

0x0fe1,	// (0x0009b912) main_cam5_pane

0x692e,	// (0x000a125f) bg_button_pane_cp019

0x6937,	// (0x000a1268) bg_button_pane_cp020

0xd768,	// (0x000a8099) main_cset_slider_pane_g7_ParamLimits

0xd768,	// (0x000a8099) main_cset_slider_pane_g7

0xd774,	// (0x000a80a5) main_cset_slider_pane_g8_ParamLimits

0xd774,	// (0x000a80a5) main_cset_slider_pane_g8

0x6a80,	// (0x000a13b1) main_cset_slider_pane_g9_ParamLimits

0x6a80,	// (0x000a13b1) main_cset_slider_pane_g9

0x6a8c,	// (0x000a13bd) main_cset_slider_pane_g10_ParamLimits

0x6a8c,	// (0x000a13bd) main_cset_slider_pane_g10

0x6a98,	// (0x000a13c9) main_cset_slider_pane_g11_ParamLimits

0x6a98,	// (0x000a13c9) main_cset_slider_pane_g11

0x6aa4,	// (0x000a13d5) main_cset_slider_pane_g12_ParamLimits

0x6aa4,	// (0x000a13d5) main_cset_slider_pane_g12

0x6ab0,	// (0x000a13e1) main_cset_slider_pane_g13_ParamLimits

0x6ab0,	// (0x000a13e1) main_cset_slider_pane_g13

0x6abe,	// (0x000a13ef) main_cset_slider_pane_g14_ParamLimits

0x6abe,	// (0x000a13ef) main_cset_slider_pane_g14

0x6acc,	// (0x000a13fd) main_cset_slider_pane_g15_ParamLimits

0x6acc,	// (0x000a13fd) main_cset_slider_pane_g15

0xd7ba,	// (0x000a80eb) main_cset_slider_pane_t14_ParamLimits

0xd7ba,	// (0x000a80eb) main_cset_slider_pane_t14

0xd7f3,	// (0x000a8124) main_cset_slider_pane_t15_ParamLimits

0xd7f3,	// (0x000a8124) main_cset_slider_pane_t15

0x719d,	// (0x000a1ace) aid_cam4_burst_size_cell_ParamLimits

0x719d,	// (0x000a1ace) aid_cam4_burst_size_cell

0x71b9,	// (0x000a1aea) grid_cam4_burst_pane_ParamLimits

0x71b9,	// (0x000a1aea) grid_cam4_burst_pane

0x71e9,	// (0x000a1b1a) linegrid_cam4_burst_pane_ParamLimits

0x71e9,	// (0x000a1b1a) linegrid_cam4_burst_pane

0x720b,	// (0x000a1b3c) scroll_pane_cp30_ParamLimits

0x720b,	// (0x000a1b3c) scroll_pane_cp30

0x7217,	// (0x000a1b48) cell_cam4_burst_pane_ParamLimits

0x7217,	// (0x000a1b48) cell_cam4_burst_pane

0xd90e,	// (0x000a823f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd90e,	// (0x000a823f) linegrid_cam4_burst_pane_g1

0x7253,	// (0x000a1b84) linegrid_cam4_burst_pane_g2_ParamLimits

0x7253,	// (0x000a1b84) linegrid_cam4_burst_pane_g2

0xd91b,	// (0x000a824c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd91b,	// (0x000a824c) linegrid_cam4_burst_pane_g3

0x0002,

0xf8a1,	// (0x000aa1d2) linegrid_cam4_burst_pane_g_ParamLimits

0xf8a1,	// (0x000aa1d2) linegrid_cam4_burst_pane_g

0x7264,	// (0x000a1b95) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7264,	// (0x000a1b95) linegrid_cam4_burst_pane_g3_copy1

0xd928,	// (0x000a8259) linegrid_cam4_burst_pane_g4_ParamLimits

0xd928,	// (0x000a8259) linegrid_cam4_burst_pane_g4

0x727e,	// (0x000a1baf) linegrid_cam4_burst_pane_g5_ParamLimits

0x727e,	// (0x000a1baf) linegrid_cam4_burst_pane_g5

0x728f,	// (0x000a1bc0) linegrid_cam4_burst_pane_g6_ParamLimits

0x728f,	// (0x000a1bc0) linegrid_cam4_burst_pane_g6

0xd935,	// (0x000a8266) linegrid_cam4_burst_pane_g7_ParamLimits

0xd935,	// (0x000a8266) linegrid_cam4_burst_pane_g7

0x72a0,	// (0x000a1bd1) cell_cam4_burst_pane_g1

0xd94e,	// (0x000a827f) main_cam5_pane_t1_ParamLimits

0xd94e,	// (0x000a827f) main_cam5_pane_t1

0xd98c,	// (0x000a82bd) main_cam5_pane_t2_ParamLimits

0xd98c,	// (0x000a82bd) main_cam5_pane_t2

0xd99e,	// (0x000a82cf) main_cam5_pane_t3_ParamLimits

0xd99e,	// (0x000a82cf) main_cam5_pane_t3

0xd9b0,	// (0x000a82e1) main_cam5_pane_t4_ParamLimits

0xd9b0,	// (0x000a82e1) main_cam5_pane_t4

0xd9c8,	// (0x000a82f9) main_cam5_pane_t5_ParamLimits

0xd9c8,	// (0x000a82f9) main_cam5_pane_t5

0xd9dc,	// (0x000a830d) main_cam5_pane_t6_ParamLimits

0xd9dc,	// (0x000a830d) main_cam5_pane_t6

0xd9f0,	// (0x000a8321) main_cam5_pane_t7_ParamLimits

0xd9f0,	// (0x000a8321) main_cam5_pane_t7

0xda02,	// (0x000a8333) main_cam5_pane_t8_ParamLimits

0xda02,	// (0x000a8333) main_cam5_pane_t8

0xda1e,	// (0x000a834f) main_cam5_pane_t9_ParamLimits

0xda1e,	// (0x000a834f) main_cam5_pane_t9

0xda30,	// (0x000a8361) main_cam5_pane_t10_ParamLimits

0xda30,	// (0x000a8361) main_cam5_pane_t10

0xda42,	// (0x000a8373) main_cam5_pane_t11_ParamLimits

0xda42,	// (0x000a8373) main_cam5_pane_t11

0xda54,	// (0x000a8385) main_cam5_pane_t12_ParamLimits

0xda54,	// (0x000a8385) main_cam5_pane_t12

0xda69,	// (0x000a839a) main_cam5_pane_t13_ParamLimits

0xda69,	// (0x000a839a) main_cam5_pane_t13

0x000c,

0xf8ad,	// (0x000aa1de) main_cam5_pane_t_ParamLimits

0xf8ad,	// (0x000aa1de) main_cam5_pane_t

0x0f86,	// (0x0009b8b7) popup_scut_keymap_window_ParamLimits

0x0f86,	// (0x0009b8b7) popup_scut_keymap_window

0x72b5,	// (0x000a1be6) aid_size_cell_brow_shortcut

0xa8d6,	// (0x000a5207) bg_popup_window_pane_cp010

0x72c1,	// (0x000a1bf2) grid_scut_pane

0x72cd,	// (0x000a1bfe) cell_scut_pane_ParamLimits

0x72cd,	// (0x000a1bfe) cell_scut_pane

0x72e4,	// (0x000a1c15) cell_scut_pane_g1

0xda86,	// (0x000a83b7) cell_scut_pane_t1

0xda95,	// (0x000a83c6) cell_scut_pane_t2

0x72ed,	// (0x000a1c1e) cell_scut_pane_t3

0x0002,

0xf8c8,	// (0x000aa1f9) cell_scut_pane_t

0x50c4,	// (0x0009f9f5) main_mup3_pane_g8_ParamLimits

0x50c4,	// (0x0009f9f5) main_mup3_pane_g8

0x6506,	// (0x000a0e37) area_vitu2_query_pane_ParamLimits

0x6506,	// (0x000a0e37) area_vitu2_query_pane

0x7049,	// (0x000a197a) input_focus_pane_cp08

0xdaa4,	// (0x000a83d5) area_vitu2_query_pane_g1

0x72fb,	// (0x000a1c2c) area_vitu2_query_pane_g2

0x0001,

0xf8cf,	// (0x000aa200) area_vitu2_query_pane_g

0x730c,	// (0x000a1c3d) area_vitu2_query_pane_t1_ParamLimits

0x730c,	// (0x000a1c3d) area_vitu2_query_pane_t1

0x7320,	// (0x000a1c51) area_vitu2_query_pane_t2_ParamLimits

0x7320,	// (0x000a1c51) area_vitu2_query_pane_t2

0x7334,	// (0x000a1c65) area_vitu2_query_pane_t3_ParamLimits

0x7334,	// (0x000a1c65) area_vitu2_query_pane_t3

0xa039,	// (0x000a496a) area_vitu2_query_pane_t4_ParamLimits

0xa039,	// (0x000a496a) area_vitu2_query_pane_t4

0xa061,	// (0x000a4992) area_vitu2_query_pane_t5_ParamLimits

0xa061,	// (0x000a4992) area_vitu2_query_pane_t5

0xa089,	// (0x000a49ba) area_vitu2_query_pane_t6_ParamLimits

0xa089,	// (0x000a49ba) area_vitu2_query_pane_t6

0x0006,

0xf8d4,	// (0x000aa205) area_vitu2_query_pane_t_ParamLimits

0xf8d4,	// (0x000aa205) area_vitu2_query_pane_t

0x735c,	// (0x000a1c8d) bg_button_pane_cp018

0x736a,	// (0x000a1c9b) bg_button_pane_cp021

0x7376,	// (0x000a1ca7) bg_button_pane_cp022

0x7387,	// (0x000a1cb8) input_focus_pane_cp09

0xb199,	// (0x000a5aca) aid_size_touch_mv_arrow_left

0xb1c4,	// (0x000a5af5) aid_size_touch_mv_arrow_right

0x6ae4,	// (0x000a1415) main_cset_slider_pane_g16_ParamLimits

0x6ae4,	// (0x000a1415) main_cset_slider_pane_g16

0x6af2,	// (0x000a1423) main_cset_slider_pane_g17_ParamLimits

0x6af2,	// (0x000a1423) main_cset_slider_pane_g17

0x72a0,	// (0x000a1bd1) cell_cam4_burst_pane_g1_ParamLimits

0x9a8d,	// (0x000a43be) compa_mode_pane

0x6d28,	// (0x000a1659) popup_vtel_slider_window_g3_ParamLimits

0x6d28,	// (0x000a1659) popup_vtel_slider_window_g3

0x6d3c,	// (0x000a166d) popup_vtel_slider_window_g4_ParamLimits

0x6d3c,	// (0x000a166d) popup_vtel_slider_window_g4

0x6d50,	// (0x000a1681) popup_vtel_slider_window_t1_ParamLimits

0x6d50,	// (0x000a1681) popup_vtel_slider_window_t1

0x0fe1,	// (0x0009b912) main_cl_pane

0x4414,	// (0x0009ed45) popup_imed_adjust2_window_ParamLimits

0xc7ba,	// (0x000a70eb) bg_tb_trans_pane_cp05_ParamLimits

0xd0e5,	// (0x000a7a16) popup_imed_adjust2_window_g1_ParamLimits

0xd0f4,	// (0x000a7a25) popup_imed_adjust2_window_g2_ParamLimits

0xd0f4,	// (0x000a7a25) popup_imed_adjust2_window_g2

0xd100,	// (0x000a7a31) popup_imed_adjust2_window_g3_ParamLimits

0xd100,	// (0x000a7a31) popup_imed_adjust2_window_g3

0x0002,

0x049e,	// (0x0009adcf) popup_imed_adjust2_window_g_ParamLimits

0x049e,	// (0x0009adcf) popup_imed_adjust2_window_g

0xd10c,	// (0x000a7a3d) popup_imed_adjust2_window_t1_ParamLimits

0xd124,	// (0x000a7a55) slider_imed_adjust_pane_ParamLimits

0xd138,	// (0x000a7a69) slider_imed_adjust_pane_g1_ParamLimits

0xd148,	// (0x000a7a79) slider_imed_adjust_pane_g2_ParamLimits

0xd158,	// (0x000a7a89) slider_imed_adjust_pane_g3_ParamLimits

0xd169,	// (0x000a7a9a) slider_imed_adjust_pane_g4_ParamLimits

0x04a5,	// (0x0009add6) slider_imed_adjust_pane_g_ParamLimits

0x6243,	// (0x000a0b74) aid_touch_area_cam4_ParamLimits

0x6243,	// (0x000a0b74) aid_touch_area_cam4

0x6253,	// (0x000a0b84) battery_pane_cp01

0x62da,	// (0x000a0c0b) main_camera4_pane_g6_ParamLimits

0x62da,	// (0x000a0c0b) main_camera4_pane_g6

0x62f8,	// (0x000a0c29) main_camera4_pane_t2_ParamLimits

0x62f8,	// (0x000a0c29) main_camera4_pane_t2

0x0001,

0xf771,	// (0x000aa0a2) main_camera4_pane_t_ParamLimits

0xf771,	// (0x000aa0a2) main_camera4_pane_t

0x638d,	// (0x000a0cbe) aid_touch_area_vid4_ParamLimits

0x638d,	// (0x000a0cbe) aid_touch_area_vid4

0x63cd,	// (0x000a0cfe) main_video4_pane_g5_ParamLimits

0x63cd,	// (0x000a0cfe) main_video4_pane_g5

0x63f1,	// (0x000a0d22) vid4_progress_pane_ParamLimits

0x63f1,	// (0x000a0d22) vid4_progress_pane

0xd780,	// (0x000a80b1) main_cset_slider_pane_g18_ParamLimits

0xd780,	// (0x000a80b1) main_cset_slider_pane_g18

0xd942,	// (0x000a8273) cell_cam4_burst_pane_g2_ParamLimits

0xd942,	// (0x000a8273) cell_cam4_burst_pane_g2

0x0001,

0xf8a8,	// (0x000aa1d9) cell_cam4_burst_pane_g_ParamLimits

0xf8a8,	// (0x000aa1d9) cell_cam4_burst_pane_g

0x7398,	// (0x000a1cc9) bg_cl_pane_ParamLimits

0x7398,	// (0x000a1cc9) bg_cl_pane

0x73a4,	// (0x000a1cd5) cl_header_pane_ParamLimits

0x73a4,	// (0x000a1cd5) cl_header_pane

0x73b0,	// (0x000a1ce1) cl_listscroll_pane_ParamLimits

0x73b0,	// (0x000a1ce1) cl_listscroll_pane

0xdab0,	// (0x000a83e1) bg_cl_pane_g1

0xdab8,	// (0x000a83e9) bg_cl_pane_g2

0xdac0,	// (0x000a83f1) bg_cl_pane_g3

0xdac8,	// (0x000a83f9) bg_cl_pane_g4

0xdad0,	// (0x000a8401) bg_cl_pane_g5

0xdad8,	// (0x000a8409) bg_cl_pane_g6

0xdae0,	// (0x000a8411) bg_cl_pane_g7

0xdae8,	// (0x000a8419) bg_cl_pane_g8

0xdaf0,	// (0x000a8421) bg_cl_pane_g9

0x0008,

0xf8e3,	// (0x000aa214) bg_cl_pane_g

0x73bc,	// (0x000a1ced) aid_height_cl_leading_ParamLimits

0x73bc,	// (0x000a1ced) aid_height_cl_leading

0x73c8,	// (0x000a1cf9) aid_height_cl_text_ParamLimits

0x73c8,	// (0x000a1cf9) aid_height_cl_text

0xe87b,	// (0x000a91ac) bg_cl_header_pane_ParamLimits

0xe87b,	// (0x000a91ac) bg_cl_header_pane

0x73e0,	// (0x000a1d11) cl_header_pane_g1_ParamLimits

0x73e0,	// (0x000a1d11) cl_header_pane_g1

0x73ed,	// (0x000a1d1e) cl_header_pane_t1_ParamLimits

0x73ed,	// (0x000a1d1e) cl_header_pane_t1

0xdaf8,	// (0x000a8429) cl_list_pane

0xd753,	// (0x000a8084) hc_scroll_pane_cp01

0xab0f,	// (0x000a5440) bg_cl_header_pane_g1

0xd627,	// (0x000a7f58) bg_cl_header_pane_g2

0xab2f,	// (0x000a5460) bg_cl_header_pane_g3

0xd637,	// (0x000a7f68) bg_cl_header_pane_g4

0xd62f,	// (0x000a7f60) bg_cl_header_pane_g5

0xd85d,	// (0x000a818e) bg_cl_header_pane_g6

0xd64f,	// (0x000a7f80) bg_cl_header_pane_g7

0xd657,	// (0x000a7f88) bg_cl_header_pane_g8

0xd647,	// (0x000a7f78) bg_cl_header_pane_g9

0x0008,

0xf8f6,	// (0x000aa227) bg_cl_header_pane_g

0x73ff,	// (0x000a1d30) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73ff,	// (0x000a1d30) hc_cl_list_double_graphic_heading_pane

0x7413,	// (0x000a1d44) hc_cl_list_single_graphic_pane_ParamLimits

0x7413,	// (0x000a1d44) hc_cl_list_single_graphic_pane

0x742d,	// (0x000a1d5e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x742d,	// (0x000a1d5e) hc_cl_list_single_graphic_pane_g1

0x7439,	// (0x000a1d6a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7439,	// (0x000a1d6a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf909,	// (0x000aa23a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf909,	// (0x000aa23a) hc_cl_list_single_graphic_pane_g

0x744d,	// (0x000a1d7e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x744d,	// (0x000a1d7e) hc_cl_list_single_graphic_pane_t1

0x742d,	// (0x000a1d5e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x742d,	// (0x000a1d5e) hc_cl_list_double_graphic_heading_pane_g1

0x7462,	// (0x000a1d93) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7462,	// (0x000a1d93) hc_cl_list_double_graphic_heading_pane_g2

0x7476,	// (0x000a1da7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7476,	// (0x000a1da7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf90e,	// (0x000aa23f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf90e,	// (0x000aa23f) hc_cl_list_double_graphic_heading_pane_g

0x748a,	// (0x000a1dbb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x748a,	// (0x000a1dbb) hc_cl_list_double_graphic_heading_pane_t1

0x749f,	// (0x000a1dd0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x749f,	// (0x000a1dd0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf915,	// (0x000aa246) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf915,	// (0x000aa246) hc_cl_list_double_graphic_heading_pane_t

0x74bc,	// (0x000a1ded) vid4_progress_pane_g1

0x74cc,	// (0x000a1dfd) vid4_progress_pane_g2

0x74dc,	// (0x000a1e0d) vid4_progress_pane_g3

0x74ee,	// (0x000a1e1f) vid4_progress_pane_g4

0x0004,

0xf91a,	// (0x000aa24b) vid4_progress_pane_g

0x750c,	// (0x000a1e3d) vid4_progress_pane_t1

0x7522,	// (0x000a1e53) vid4_progress_pane_t2

0x0002,

0xf925,	// (0x000aa256) vid4_progress_pane_t

0x754d,	// (0x000a1e7e) wait_bar_pane_cp07

0xc9b5,	// (0x000a72e6) blid_firmament_pane_ParamLimits

0xc9f8,	// (0x000a7329) popup_blid_sat_info2_window_g1

0xca1c,	// (0x000a734d) popup_blid_sat_info2_window_t3

0xca2a,	// (0x000a735b) popup_blid_sat_info2_window_t4

0xca38,	// (0x000a7369) popup_blid_sat_info2_window_t5

0xca46,	// (0x000a7377) popup_blid_sat_info2_window_t6

0xca56,	// (0x000a7387) popup_blid_sat_info2_window_t7

0xca64,	// (0x000a7395) popup_blid_sat_info2_window_t8

0xca72,	// (0x000a73a3) popup_blid_sat_info2_window_t9

0xca80,	// (0x000a73b1) popup_blid_sat_info2_window_t10

0xcb44,	// (0x000a7475) aid_firma_cardinal_ParamLimits

0xcb58,	// (0x000a7489) blid_firmament_pane_t1_ParamLimits

0xcb6f,	// (0x000a74a0) blid_firmament_pane_t2_ParamLimits

0xcb86,	// (0x000a74b7) blid_firmament_pane_t3_ParamLimits

0xcb9d,	// (0x000a74ce) blid_firmament_pane_t4_ParamLimits

0x0392,	// (0x0009acc3) blid_firmament_pane_t_ParamLimits

0xcbb4,	// (0x000a74e5) blid_sat_info_pane_ParamLimits

0x437a,	// (0x0009ecab) main_cam_set_pane_ParamLimits

0x587d,	// (0x000a01ae) aid_size_cell_colour_35_ParamLimits

0x5897,	// (0x000a01c8) aid_size_cell_colour_112_ParamLimits

0x58ae,	// (0x000a01df) aid_size_cell_effect_ParamLimits

0xa49e,	// (0x000a4dcf) bg_tb_trans_pane_cp02_ParamLimits

0xb02b,	// (0x000a595c) heading_imed_pane_ParamLimits

0x58c8,	// (0x000a01f9) listscroll_imed_pane_ParamLimits

0xbdd4,	// (0x000a6705) popup_call2_audio_first_window_g5_ParamLimits

0xbdd4,	// (0x000a6705) popup_call2_audio_first_window_g5

0x5ff2,	// (0x000a0923) aid_size_touch_image3_arrow_left_ParamLimits

0x5ff2,	// (0x000a0923) aid_size_touch_image3_arrow_left

0x6008,	// (0x000a0939) aid_size_touch_image3_arrow_right_ParamLimits

0x6008,	// (0x000a0939) aid_size_touch_image3_arrow_right

0x7537,	// (0x000a1e68) vid4_progress_pane_t3

0x5b7c,	// (0x000a04ad) main_hwr_training_symbol_option_pane_ParamLimits

0x5b7c,	// (0x000a04ad) main_hwr_training_symbol_option_pane

0xd3db,	// (0x000a7d0c) popup_hwr_training_preview_window_ParamLimits

0xd3db,	// (0x000a7d0c) popup_hwr_training_preview_window

0x5bdd,	// (0x000a050e) hwr_training_navi_pane_g5_ParamLimits

0x5bdd,	// (0x000a050e) hwr_training_navi_pane_g5

0xd615,	// (0x000a7f46) popup_char_count_window

0x0fc7,	// (0x0009b8f8) bg_popup_sub_pane_cp20_ParamLimits

0x6e57,	// (0x000a1788) list_vitu2_match_list_pane_ParamLimits

0x6e63,	// (0x000a1794) vitu2_page_scroll_pane_ParamLimits

0x6e63,	// (0x000a1794) vitu2_page_scroll_pane

0xdb01,	// (0x000a8432) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb01,	// (0x000a8432) list_single_hwr_training_symbol_option_pane

0xdb14,	// (0x000a8445) list_single_hwr_training_symbol_option_pane_g1

0xdb1c,	// (0x000a844d) list_single_hwr_training_symbol_option_pane_t1

0xdb2a,	// (0x000a845b) bg_button_pane_cp023

0xdb33,	// (0x000a8464) bg_button_pane_cp024

0x7596,	// (0x000a1ec7) vitu2_page_scroll_pane_g1

0x759e,	// (0x000a1ecf) vitu2_page_scroll_pane_g2

0x0001,

0xf92c,	// (0x000aa25d) vitu2_page_scroll_pane_g

0x75a6,	// (0x000a1ed7) vitu2_page_scroll_pane_t1

0xc915,	// (0x000a7246) popup_char_count_window_g1

0xdb66,	// (0x000a8497) popup_char_count_window_g2

0xdb6f,	// (0x000a84a0) popup_char_count_window_g3

0x0002,

0xf931,	// (0x000aa262) popup_char_count_window_g

0xdb78,	// (0x000a84a9) popup_char_count_window_t1

0x0fe1,	// (0x0009b912) main_vded2_pane

0xd0d1,	// (0x000a7a02) aid_size_cell_imed_line

0xd0db,	// (0x000a7a0c) grid_imed_line_width_pane

0x645d,	// (0x000a0d8e) vid4_indicators_pane_g4

0xdb86,	// (0x000a84b7) cell_imed_line_width_pane_ParamLimits

0xdb86,	// (0x000a84b7) cell_imed_line_width_pane

0xdb9a,	// (0x000a84cb) cell_imed_line_width_pane_g1

0xd96c,	// (0x000a829d) cell_imed_line_width_pane_g2

0x0001,

0xf938,	// (0x000aa269) cell_imed_line_width_pane_g

0x75b5,	// (0x000a1ee6) main_vded2_pane_g1_ParamLimits

0x75b5,	// (0x000a1ee6) main_vded2_pane_g1

0x75c2,	// (0x000a1ef3) main_vded2_pane_g2_ParamLimits

0x75c2,	// (0x000a1ef3) main_vded2_pane_g2

0x0001,

0xf93d,	// (0x000aa26e) main_vded2_pane_g_ParamLimits

0xf93d,	// (0x000aa26e) main_vded2_pane_g

0x75d0,	// (0x000a1f01) vded2_slider_pane_ParamLimits

0x75d0,	// (0x000a1f01) vded2_slider_pane

0x75dd,	// (0x000a1f0e) aid_size_touch_vded2_end

0x75e7,	// (0x000a1f18) aid_size_touch_vded2_playhead

0xdba3,	// (0x000a84d4) aid_size_touch_vded2_start

0xdbab,	// (0x000a84dc) vded2_slider_bg_pane

0xdbb4,	// (0x000a84e5) vded2_slider_pane_g1

0xdbbd,	// (0x000a84ee) vded2_slider_pane_g2

0x75ef,	// (0x000a1f20) vded2_slider_pane_g3

0x0002,

0xf942,	// (0x000aa273) vded2_slider_pane_g

0xdbe9,	// (0x000a851a) vded2_slider_bg_pane_g1

0xdbf2,	// (0x000a8523) vded2_slider_bg_pane_g2

0xdbfb,	// (0x000a852c) vded2_slider_bg_pane_g3

0x0002,

0x07a8,	// (0x0009b0d9) vded2_slider_bg_pane_g

0x3c55,	// (0x0009e586) aid_postcard_touch_down_pane_ParamLimits

0x3c55,	// (0x0009e586) aid_postcard_touch_down_pane

0x3c65,	// (0x0009e596) aid_postcard_touch_up_pane_ParamLimits

0x3c65,	// (0x0009e596) aid_postcard_touch_up_pane

0x0fe1,	// (0x0009b912) main_blid2_pane

0x43a3,	// (0x0009ecd4) popup_blid2_search_window

0x9a8d,	// (0x000a43be) blid2_gps_pane

0x9a8d,	// (0x000a43be) blid2_navig_pane

0x9a8d,	// (0x000a43be) blid2_search_pane

0x9a8d,	// (0x000a43be) blid2_tripm_pane

0x75f8,	// (0x000a1f29) blid2_search_pane_g1_ParamLimits

0x75f8,	// (0x000a1f29) blid2_search_pane_g1

0x7608,	// (0x000a1f39) blid2_search_pane_t1_ParamLimits

0x7608,	// (0x000a1f39) blid2_search_pane_t1

0x761a,	// (0x000a1f4b) aid_size_cell_blid2_gps_ParamLimits

0x761a,	// (0x000a1f4b) aid_size_cell_blid2_gps

0x762a,	// (0x000a1f5b) blid2_gps_pane_g1_ParamLimits

0x762a,	// (0x000a1f5b) blid2_gps_pane_g1

0x7636,	// (0x000a1f67) grid_blid2_satellite_pane_ParamLimits

0x7636,	// (0x000a1f67) grid_blid2_satellite_pane

0x7646,	// (0x000a1f77) blid2_navig_pane_g1_ParamLimits

0x7646,	// (0x000a1f77) blid2_navig_pane_g1

0x7652,	// (0x000a1f83) blid2_navig_pane_t1_ParamLimits

0x7652,	// (0x000a1f83) blid2_navig_pane_t1

0x7664,	// (0x000a1f95) blid2_navig_pane_t2_ParamLimits

0x7664,	// (0x000a1f95) blid2_navig_pane_t2

0x0001,

0xf949,	// (0x000aa27a) blid2_navig_pane_t_ParamLimits

0xf949,	// (0x000aa27a) blid2_navig_pane_t

0x7676,	// (0x000a1fa7) blid2_navig_ring_pane_ParamLimits

0x7676,	// (0x000a1fa7) blid2_navig_ring_pane

0x7686,	// (0x000a1fb7) blid2_speed_pane_ParamLimits

0x7686,	// (0x000a1fb7) blid2_speed_pane

0x7692,	// (0x000a1fc3) blid2_tripm_pane_g1_ParamLimits

0x7692,	// (0x000a1fc3) blid2_tripm_pane_g1

0x76a2,	// (0x000a1fd3) blid2_tripm_pane_g2_ParamLimits

0x76a2,	// (0x000a1fd3) blid2_tripm_pane_g2

0x76ae,	// (0x000a1fdf) blid2_tripm_pane_g3_ParamLimits

0x76ae,	// (0x000a1fdf) blid2_tripm_pane_g3

0x76ba,	// (0x000a1feb) blid2_tripm_pane_g4_ParamLimits

0x76ba,	// (0x000a1feb) blid2_tripm_pane_g4

0x76c6,	// (0x000a1ff7) blid2_tripm_pane_g5_ParamLimits

0x76c6,	// (0x000a1ff7) blid2_tripm_pane_g5

0x0005,

0xf94e,	// (0x000aa27f) blid2_tripm_pane_g_ParamLimits

0xf94e,	// (0x000aa27f) blid2_tripm_pane_g

0x76e2,	// (0x000a2013) blid2_tripm_pane_t1_ParamLimits

0x76e2,	// (0x000a2013) blid2_tripm_pane_t1

0x76f6,	// (0x000a2027) blid2_tripm_pane_t2_ParamLimits

0x76f6,	// (0x000a2027) blid2_tripm_pane_t2

0x7708,	// (0x000a2039) blid2_tripm_pane_t3_ParamLimits

0x7708,	// (0x000a2039) blid2_tripm_pane_t3

0x0003,

0xf95b,	// (0x000aa28c) blid2_tripm_pane_t_ParamLimits

0xf95b,	// (0x000aa28c) blid2_tripm_pane_t

0x773a,	// (0x000a206b) cell_blid2_satellite_pane_ParamLimits

0x773a,	// (0x000a206b) cell_blid2_satellite_pane

0x7754,	// (0x000a2085) cell_blid2_satellite_pane_g1

0xdc04,	// (0x000a8535) cell_blid2_satellite_pane_t1

0xcbc4,	// (0x000a74f5) blid2_speed_pane_g1

0xdc12,	// (0x000a8543) blid2_speed_pane_t1

0xdc20,	// (0x000a8551) blid2_speed_pane_t2

0x0001,

0x07ca,	// (0x0009b0fb) blid2_speed_pane_t

0xcbc4,	// (0x000a74f5) blid2_navig_ring_pane_g1

0x775d,	// (0x000a208e) blid2_navig_ring_pane_g2

0x7765,	// (0x000a2096) blid2_navig_ring_pane_g3

0x776d,	// (0x000a209e) blid2_navig_ring_pane_g4

0x7775,	// (0x000a20a6) blid2_navig_ring_pane_g5

0x0004,

0xf964,	// (0x000aa295) blid2_navig_ring_pane_g

0x9a8d,	// (0x000a43be) bg_popup_window_pane_cp011

0xdc2e,	// (0x000a855f) popup_blid2_search_window_g1

0xdc36,	// (0x000a8567) popup_blid2_search_window_t1

0xdc44,	// (0x000a8575) popup_blid2_search_window_t2

0x0001,

0x07da,	// (0x0009b10b) popup_blid2_search_window_t

0xaa1e,	// (0x000a534f) main_browser_pane_g1

0xa708,	// (0x000a5039) main_browser_pane_ParamLimits

0x437a,	// (0x0009ecab) bg_button_pane_cp011_ParamLimits

0x66ff,	// (0x000a1030) cell_vitu2_function_pane_g1_ParamLimits

0xc7ba,	// (0x000a70eb) bg_popup_sub_pane_cp22_ParamLimits

0x7049,	// (0x000a197a) input_focus_pane_cp08_ParamLimits

0x7060,	// (0x000a1991) popup_vitu2_query_button_pane_ParamLimits

0x7060,	// (0x000a1991) popup_vitu2_query_button_pane

0x7071,	// (0x000a19a2) popup_vitu2_query_input_button_pane

0xd898,	// (0x000a81c9) popup_vitu2_query_window_g1_ParamLimits

0x707b,	// (0x000a19ac) popup_vitu2_query_window_g2_ParamLimits

0xf88b,	// (0x000aa1bc) popup_vitu2_query_window_g_ParamLimits

0x9a8d,	// (0x000a43be) bg_button_pane_cp026

0x777d,	// (0x000a20ae) popup_vitu2_query_input_button_pane_g1

0x9a8d,	// (0x000a43be) bg_button_pane_cp025

0xdc52,	// (0x000a8583) popup_vitu2_query_button_pane_t1

0x4dfc,	// (0x0009f72d) main_mp3_pane_t6

0x4e0c,	// (0x0009f73d) popup_slider_window_cp01

0x633c,	// (0x000a0c6d) cam4_battery_pane

0x641c,	// (0x000a0d4d) cam4_battery_pane_cp02

0x74b4,	// (0x000a1de5) cam4_battery_pane_cp01

0x74b4,	// (0x000a1de5) cam4_battery_pane_cp03

0xd974,	// (0x000a82a5) cam4_battery_pane_g1

0xcbc4,	// (0x000a74f5) cam4_battery_pane_g2

0x0001,

0xf96f,	// (0x000aa2a0) cam4_battery_pane_g

0xca8e,	// (0x000a73bf) popup_blid_sat_info2_window_t11

0xb199,	// (0x000a5aca) aid_size_touch_mv_arrow_left_ParamLimits

0xb1c4,	// (0x000a5af5) aid_size_touch_mv_arrow_right_ParamLimits

0xb222,	// (0x000a5b53) navi_pane_g1_ParamLimits

0xb22e,	// (0x000a5b5f) navi_pane_g2_ParamLimits

0xb25c,	// (0x000a5b8d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a9d16) navi_pane_g_ParamLimits

0x35f4,	// (0x0009df25) navi_pane_mv_t1_ParamLimits

0x58d4,	// (0x000a0205) grid_imed_effect_pane_ParamLimits

0x1f44,	// (0x0009c875) aid_placing_vt_slider_lsc

0xa96d,	// (0x000a529e) aid_placing_vt_slider_prt

0xa49e,	// (0x000a4dcf) bg_tb_trans_pane_cp01_ParamLimits

0xcd44,	// (0x000a7675) popup_image_details_window_g1_ParamLimits

0xcd57,	// (0x000a7688) popup_image_details_window_g2_ParamLimits

0xcd6c,	// (0x000a769d) popup_image_details_window_g3_ParamLimits

0xcd6c,	// (0x000a769d) popup_image_details_window_g3

0x03d7,	// (0x0009ad08) popup_image_details_window_g_ParamLimits

0xcd80,	// (0x000a76b1) popup_image_details_window_t1_ParamLimits

0xcd92,	// (0x000a76c3) popup_image_details_window_t2_ParamLimits

0xcdab,	// (0x000a76dc) popup_image_details_window_t3_ParamLimits

0xcdbf,	// (0x000a76f0) popup_image_details_window_t4_ParamLimits

0xcdda,	// (0x000a770b) popup_image_details_window_t5_ParamLimits

0x03de,	// (0x0009ad0f) popup_image_details_window_t_ParamLimits

0x73d4,	// (0x000a1d05) cl_header_name_pane_ParamLimits

0x73d4,	// (0x000a1d05) cl_header_name_pane

0x7785,	// (0x000a20b6) cl_header_name_pane_t1_ParamLimits

0x7785,	// (0x000a20b6) cl_header_name_pane_t1

0x779c,	// (0x000a20cd) cl_header_name_pane_t2_ParamLimits

0x779c,	// (0x000a20cd) cl_header_name_pane_t2

0x77c6,	// (0x000a20f7) cl_header_name_pane_t3_ParamLimits

0x77c6,	// (0x000a20f7) cl_header_name_pane_t3

0x0002,

0xf974,	// (0x000aa2a5) cl_header_name_pane_t_ParamLimits

0xf974,	// (0x000aa2a5) cl_header_name_pane_t

0xb344,	// (0x000a5c75) navi_pane_mv_g2_ParamLimits

0xd5ef,	// (0x000a7f20) field_vitu2_entry_pane_g1_ParamLimits

0xd5fb,	// (0x000a7f2c) field_vitu2_entry_pane_g2_ParamLimits

0xd607,	// (0x000a7f38) field_vitu2_entry_pane_g3_ParamLimits

0xd607,	// (0x000a7f38) field_vitu2_entry_pane_g3

0xf7a3,	// (0x000aa0d4) field_vitu2_entry_pane_g_ParamLimits

0x6693,	// (0x000a0fc4) cell_vitu2_itu_pane_g1_ParamLimits

0x66a5,	// (0x000a0fd6) cell_vitu2_itu_pane_g2_ParamLimits

0x66a5,	// (0x000a0fd6) cell_vitu2_itu_pane_g2

0x0001,

0xf7af,	// (0x000aa0e0) cell_vitu2_itu_pane_g_ParamLimits

0xf7af,	// (0x000aa0e0) cell_vitu2_itu_pane_g

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp05_ParamLimits

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp05

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp03

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp04

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp10_ParamLimits

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp10

0x7376,	// (0x000a1ca7) bg_vkb2_func_pane_cp08

0x735c,	// (0x000a1c8d) bg_vkb2_func_pane_cp06

0x736a,	// (0x000a1c9b) bg_vkb2_func_pane_cp07

0xdb3c,	// (0x000a846d) bg_vkb2_func_pane_cp11_ParamLimits

0xdb3c,	// (0x000a846d) bg_vkb2_func_pane_cp11

0xdb51,	// (0x000a8482) bg_vkb2_func_pane_cp12_ParamLimits

0xdb51,	// (0x000a8482) bg_vkb2_func_pane_cp12

0x9a8d,	// (0x000a43be) bg_vkb2_func_pane_cp09

0xd627,	// (0x000a7f58) bg_vkb2_func_pane_g1

0xab2f,	// (0x000a5460) bg_vkb2_func_pane_g2

0xd62f,	// (0x000a7f60) bg_vkb2_func_pane_g3

0xd637,	// (0x000a7f68) bg_vkb2_func_pane_g4

0xd85d,	// (0x000a818e) bg_vkb2_func_pane_g5

0xd64f,	// (0x000a7f80) bg_vkb2_func_pane_g6

0xd657,	// (0x000a7f88) bg_vkb2_func_pane_g7

0xd647,	// (0x000a7f78) bg_vkb2_func_pane_g8

0xab0f,	// (0x000a5440) bg_vkb2_func_pane_g9

0x0008,

0xf97b,	// (0x000aa2ac) bg_vkb2_func_pane_g

0x76d4,	// (0x000a2005) blid2_tripm_pane_g6_ParamLimits

0x76d4,	// (0x000a2005) blid2_tripm_pane_g6

0xd493,	// (0x000a7dc4) mp4_progress_pane_g1

0x772e,	// (0x000a205f) blid2_tripm_values_pane_ParamLimits

0x772e,	// (0x000a205f) blid2_tripm_values_pane

0x77eb,	// (0x000a211c) blid2_tripm_values_pane_t1

0x77f9,	// (0x000a212a) blid2_tripm_values_pane_t2

0x7807,	// (0x000a2138) blid2_tripm_values_pane_t3

0x7815,	// (0x000a2146) blid2_tripm_values_pane_t4

0x7823,	// (0x000a2154) blid2_tripm_values_pane_t5

0x7831,	// (0x000a2162) blid2_tripm_values_pane_t6

0x783f,	// (0x000a2170) blid2_tripm_values_pane_t7

0x784d,	// (0x000a217e) blid2_tripm_values_pane_t8

0x785b,	// (0x000a218c) blid2_tripm_values_pane_t9

0x0008,

0xf98e,	// (0x000aa2bf) blid2_tripm_values_pane_t

0x1f84,	// (0x0009c8b5) call_video_pane_t1_ParamLimits

0x1fa5,	// (0x0009c8d6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a9b9f) call_video_pane_t_ParamLimits

0x3b24,	// (0x0009e455) msg_header_pane_g1_ParamLimits

0xb51e,	// (0x000a5e4f) msg_header_pane_g2_ParamLimits

0xb51e,	// (0x000a5e4f) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a9db9) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a9db9) msg_header_pane_g

0xa708,	// (0x000a5039) main_clock2_pane_ParamLimits

0x5665,	// (0x0009ff96) grid_clock2_toolbar_pane_ParamLimits

0x5665,	// (0x0009ff96) grid_clock2_toolbar_pane

0x5665,	// (0x0009ff96) listscroll_clock2_pane_ParamLimits

0x5665,	// (0x0009ff96) listscroll_clock2_pane

0x570f,	// (0x000a0040) main_clock2_pane_t3_ParamLimits

0x570f,	// (0x000a0040) main_clock2_pane_t3

0x5721,	// (0x000a0052) main_clock2_pane_t4_ParamLimits

0x5721,	// (0x000a0052) main_clock2_pane_t4

0xdc60,	// (0x000a8591) cell_clock2_toolbar_pane

0xdc68,	// (0x000a8599) cell_clock2_toolbar_pane_cp01

0xdc68,	// (0x000a8599) cell_clock2_toolbar_pane_cp02

0xdc70,	// (0x000a85a1) cell_clock2_toolbar_pane_cp03

0xdc78,	// (0x000a85a9) list_clock2_pane

0xb10f,	// (0x000a5a40) scroll_pane_cp10

0xdc80,	// (0x000a85b1) list_single_clock2_pane_ParamLimits

0xdc80,	// (0x000a85b1) list_single_clock2_pane

0xa8d6,	// (0x000a5207) list_highlight_pane_cp08

0xdc8d,	// (0x000a85be) list_single_clock2_pane_t1

0xdc9b,	// (0x000a85cc) list_single_clock2_pane_t2

0x0001,

0x0811,	// (0x0009b142) list_single_clock2_pane_t

0x9a8d,	// (0x000a43be) bg_button_pane_cp10

0xdca9,	// (0x000a85da) cell_clock2_toolbar_pane_g1

0x3bc3,	// (0x0009e4f4) aid_main_viewer_pane_g1_ParamLimits

0x3bc3,	// (0x0009e4f4) aid_main_viewer_pane_g1

0x3bcf,	// (0x0009e500) aid_main_viewer_pane_g2_ParamLimits

0x3bcf,	// (0x0009e500) aid_main_viewer_pane_g2

0x3bdb,	// (0x0009e50c) aid_main_viewer_pane_g3_ParamLimits

0x3bdb,	// (0x0009e50c) aid_main_viewer_pane_g3

0x3bec,	// (0x0009e51d) aid_main_viewer_pane_g4_ParamLimits

0x3bec,	// (0x0009e51d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a9dca) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a9dca) aid_main_viewer_pane_g

0x436d,	// (0x0009ec9e) main_calc_pane_ParamLimits

0x4388,	// (0x0009ecb9) main_dialer2_pane_ParamLimits

0x0fe1,	// (0x0009b912) main_cam6_pane

0x0fe1,	// (0x0009b912) main_vid6_pane

0x5671,	// (0x0009ffa2) listscroll_gen_pane_cp06_ParamLimits

0x5671,	// (0x0009ffa2) listscroll_gen_pane_cp06

0x5733,	// (0x000a0064) main_clock2_pane_t5_ParamLimits

0x5733,	// (0x000a0064) main_clock2_pane_t5

0x577e,	// (0x000a00af) aid_call2_pane_cp10_ParamLimits

0x5790,	// (0x000a00c1) aid_call_pane_cp10_ParamLimits

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57a2,	// (0x000a00d3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57a2,	// (0x000a00d3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb18d,	// (0x000a5abe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b8,	// (0x000a9fe9) popup_clock_analogue_window_cp10_g_ParamLimits

0x57b4,	// (0x000a00e5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f9f,	// (0x000a08d0) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f9f,	// (0x000a08d0) cell_dialer2_keypad_pane_g2

0x0001,

0xf742,	// (0x000aa073) cell_dialer2_keypad_pane_g_ParamLimits

0xf742,	// (0x000aa073) cell_dialer2_keypad_pane_g

0x5fbb,	// (0x000a08ec) cell_dialer2_keypad_pane_t1

0x69cc,	// (0x000a12fd) main_cset_text2_pane_ParamLimits

0x69cc,	// (0x000a12fd) main_cset_text2_pane

0xdaa4,	// (0x000a83d5) area_vitu2_query_pane_g1_ParamLimits

0x72fb,	// (0x000a1c2c) area_vitu2_query_pane_g2_ParamLimits

0xf8cf,	// (0x000aa200) area_vitu2_query_pane_g_ParamLimits

0xa0b1,	// (0x000a49e2) area_vitu2_query_pane_t7_ParamLimits

0xa0b1,	// (0x000a49e2) area_vitu2_query_pane_t7

0x735c,	// (0x000a1c8d) bg_button_pane_cp018_ParamLimits

0x736a,	// (0x000a1c9b) bg_button_pane_cp021_ParamLimits

0x7376,	// (0x000a1ca7) bg_button_pane_cp022_ParamLimits

0x7376,	// (0x000a1ca7) bg_vkb2_func_pane_cp08_ParamLimits

0x735c,	// (0x000a1c8d) bg_vkb2_func_pane_cp06_ParamLimits

0x736a,	// (0x000a1c9b) bg_vkb2_func_pane_cp07_ParamLimits

0x7387,	// (0x000a1cb8) input_focus_pane_cp09_ParamLimits

0x7869,	// (0x000a219a) cam6_autofocus_pane_ParamLimits

0x7869,	// (0x000a219a) cam6_autofocus_pane

0x788b,	// (0x000a21bc) cam6_image_uncrop_pane_ParamLimits

0x788b,	// (0x000a21bc) cam6_image_uncrop_pane

0x78b8,	// (0x000a21e9) cam6_indi_pane_ParamLimits

0x78b8,	// (0x000a21e9) cam6_indi_pane

0x78d2,	// (0x000a2203) cam6_mode_pane_ParamLimits

0x78d2,	// (0x000a2203) cam6_mode_pane

0x78e6,	// (0x000a2217) cam6_timer_pane_ParamLimits

0x78e6,	// (0x000a2217) cam6_timer_pane

0x78f2,	// (0x000a2223) cam6_zoom_pane_ParamLimits

0x78f2,	// (0x000a2223) cam6_zoom_pane

0x790a,	// (0x000a223b) cam6_mode_pane_g1_ParamLimits

0x790a,	// (0x000a223b) cam6_mode_pane_g1

0x7916,	// (0x000a2247) cam6_mode_pane_g2_ParamLimits

0x7916,	// (0x000a2247) cam6_mode_pane_g2

0x7922,	// (0x000a2253) cam6_mode_pane_g3_ParamLimits

0x7922,	// (0x000a2253) cam6_mode_pane_g3

0x792e,	// (0x000a225f) cam6_mode_pane_g4_ParamLimits

0x792e,	// (0x000a225f) cam6_mode_pane_g4

0x0003,

0xf9a1,	// (0x000aa2d2) cam6_mode_pane_g_ParamLimits

0xf9a1,	// (0x000aa2d2) cam6_mode_pane_g

0xd97e,	// (0x000a82af) bg_tb_trans_pane_cp08_ParamLimits

0xd97e,	// (0x000a82af) bg_tb_trans_pane_cp08

0xdcb1,	// (0x000a85e2) cam6_battery_pane_ParamLimits

0xdcb1,	// (0x000a85e2) cam6_battery_pane

0xdcc7,	// (0x000a85f8) cam6_indi_pane_g1_ParamLimits

0xdcc7,	// (0x000a85f8) cam6_indi_pane_g1

0xdcd9,	// (0x000a860a) cam6_indi_pane_g2_ParamLimits

0xdcd9,	// (0x000a860a) cam6_indi_pane_g2

0xdceb,	// (0x000a861c) cam6_indi_pane_g3_ParamLimits

0xdceb,	// (0x000a861c) cam6_indi_pane_g3

0x0002,

0x081f,	// (0x0009b150) cam6_indi_pane_g_ParamLimits

0x081f,	// (0x0009b150) cam6_indi_pane_g

0xdcfd,	// (0x000a862e) cam6_indi_pane_t1_ParamLimits

0xdcfd,	// (0x000a862e) cam6_indi_pane_t1

0x6498,	// (0x000a0dc9) cam6_autofocus_pane_g1

0x6490,	// (0x000a0dc1) cam6_autofocus_pane_g2

0x64a8,	// (0x000a0dd9) cam6_autofocus_pane_g3

0x64a0,	// (0x000a0dd1) cam6_autofocus_pane_g4

0x0003,

0xf9aa,	// (0x000aa2db) cam6_autofocus_pane_g

0xdd23,	// (0x000a8654) cam6_timer_pane_g1

0xdd2b,	// (0x000a865c) cam6_timer_pane_t1

0xdd39,	// (0x000a866a) cam6_zoom_cont_pane

0xdd41,	// (0x000a8672) cam6_zoom_pane_g1

0xdd49,	// (0x000a867a) cam6_zoom_pane_g2

0x793a,	// (0x000a226b) cam6_zoom_pane_g3

0x0002,

0xf9b3,	// (0x000aa2e4) cam6_zoom_pane_g

0xcbc4,	// (0x000a74f5) cam6_battery_pane_g1

0xcbc4,	// (0x000a74f5) cam6_battery_pane_g2

0x0001,

0x039b,	// (0x0009accc) cam6_battery_pane_g

0xdd51,	// (0x000a8682) cam6_zoom_cont_pane_g1

0xdd5a,	// (0x000a868b) cam6_zoom_cont_pane_g2

0xdd63,	// (0x000a8694) cam6_zoom_cont_pane_g3

0x0002,

0x0836,	// (0x0009b167) cam6_zoom_cont_pane_g

0x7957,	// (0x000a2288) cam6_mode_pane_cp_ParamLimits

0x7957,	// (0x000a2288) cam6_mode_pane_cp

0x796b,	// (0x000a229c) cam6_zoom_pane_cp_ParamLimits

0x796b,	// (0x000a229c) cam6_zoom_pane_cp

0x7983,	// (0x000a22b4) vid6_image_uncrop_cif_pane_ParamLimits

0x7983,	// (0x000a22b4) vid6_image_uncrop_cif_pane

0x79af,	// (0x000a22e0) vid6_image_uncrop_nhd_pane_ParamLimits

0x79af,	// (0x000a22e0) vid6_image_uncrop_nhd_pane

0x79cc,	// (0x000a22fd) vid6_image_uncrop_vga_pane_ParamLimits

0x79cc,	// (0x000a22fd) vid6_image_uncrop_vga_pane

0x79eb,	// (0x000a231c) vid6_image_uncrop_wvga_pane_ParamLimits

0x79eb,	// (0x000a231c) vid6_image_uncrop_wvga_pane

0x7a08,	// (0x000a2339) vid6_indi_pane_ParamLimits

0x7a08,	// (0x000a2339) vid6_indi_pane

0xd97e,	// (0x000a82af) bg_tb_trans_pane_cp09_ParamLimits

0xd97e,	// (0x000a82af) bg_tb_trans_pane_cp09

0xdd7b,	// (0x000a86ac) cam6_battery_pane_cp_ParamLimits

0xdd7b,	// (0x000a86ac) cam6_battery_pane_cp

0xdd87,	// (0x000a86b8) vid6_indi_pane_g1_ParamLimits

0xdd87,	// (0x000a86b8) vid6_indi_pane_g1

0xdd99,	// (0x000a86ca) vid6_indi_pane_g2_ParamLimits

0xdd99,	// (0x000a86ca) vid6_indi_pane_g2

0xddab,	// (0x000a86dc) vid6_indi_pane_g3_ParamLimits

0xddab,	// (0x000a86dc) vid6_indi_pane_g3

0xddc0,	// (0x000a86f1) vid6_indi_pane_g4_ParamLimits

0xddc0,	// (0x000a86f1) vid6_indi_pane_g4

0xddd5,	// (0x000a8706) vid6_indi_pane_g5_ParamLimits

0xddd5,	// (0x000a8706) vid6_indi_pane_g5

0x0004,

0x083d,	// (0x0009b16e) vid6_indi_pane_g_ParamLimits

0x083d,	// (0x0009b16e) vid6_indi_pane_g

0xddef,	// (0x000a8720) vid6_indi_pane_t1_ParamLimits

0xddef,	// (0x000a8720) vid6_indi_pane_t1

0xde05,	// (0x000a8736) vid6_indi_pane_t2_ParamLimits

0xde05,	// (0x000a8736) vid6_indi_pane_t2

0xde2d,	// (0x000a875e) vid6_indi_pane_t3_ParamLimits

0xde2d,	// (0x000a875e) vid6_indi_pane_t3

0xde55,	// (0x000a8786) vid6_indi_pane_t4_ParamLimits

0xde55,	// (0x000a8786) vid6_indi_pane_t4

0x0003,

0x0848,	// (0x0009b179) vid6_indi_pane_t_ParamLimits

0x0848,	// (0x0009b179) vid6_indi_pane_t

0xde79,	// (0x000a87aa) wait_bar_pane_cp08

0x7a2b,	// (0x000a235c) main_cset_text2_pane_t1_ParamLimits

0x7a2b,	// (0x000a235c) main_cset_text2_pane_t1

0x7942,	// (0x000a2273) listscroll_gen_pane_cp06_t1_ParamLimits

0x7942,	// (0x000a2273) listscroll_gen_pane_cp06_t1

0x0fe1,	// (0x0009b912) main_cam6_set_pane

0x632e,	// (0x000a0c5f) bg_tb_trans_pane_cp06_ParamLimits

0x6344,	// (0x000a0c75) cam4_indicators_pane_g1_ParamLimits

0x6355,	// (0x000a0c86) cam4_indicators_pane_g2_ParamLimits

0xf77f,	// (0x000aa0b0) cam4_indicators_pane_g_ParamLimits

0x6373,	// (0x000a0ca4) cam4_indicators_pane_t1_ParamLimits

0x437a,	// (0x0009ecab) bg_tb_trans_pane_cp07_ParamLimits

0x6424,	// (0x000a0d55) vid4_indicators_pane_g1_ParamLimits

0x6438,	// (0x000a0d69) vid4_indicators_pane_g2_ParamLimits

0x644c,	// (0x000a0d7d) vid4_indicators_pane_g3_ParamLimits

0x645d,	// (0x000a0d8e) vid4_indicators_pane_g4_ParamLimits

0xf791,	// (0x000aa0c2) vid4_indicators_pane_g_ParamLimits

0x6479,	// (0x000a0daa) vid4_indicators_pane_t1_ParamLimits

0x74bc,	// (0x000a1ded) vid4_progress_pane_g1_ParamLimits

0x74cc,	// (0x000a1dfd) vid4_progress_pane_g2_ParamLimits

0x74dc,	// (0x000a1e0d) vid4_progress_pane_g3_ParamLimits

0x74ee,	// (0x000a1e1f) vid4_progress_pane_g4_ParamLimits

0xf91a,	// (0x000aa24b) vid4_progress_pane_g_ParamLimits

0x750c,	// (0x000a1e3d) vid4_progress_pane_t1_ParamLimits

0x7522,	// (0x000a1e53) vid4_progress_pane_t2_ParamLimits

0x7537,	// (0x000a1e68) vid4_progress_pane_t3_ParamLimits

0xf925,	// (0x000aa256) vid4_progress_pane_t_ParamLimits

0x754d,	// (0x000a1e7e) wait_bar_pane_cp07_ParamLimits

0x7a65,	// (0x000a2396) main_cam6_set_pane_g2_ParamLimits

0x7a65,	// (0x000a2396) main_cam6_set_pane_g2

0x7a71,	// (0x000a23a2) main_cset6_listscroll_pane_ParamLimits

0x7a71,	// (0x000a23a2) main_cset6_listscroll_pane

0x7a9c,	// (0x000a23cd) main_cset6_slider_pane_ParamLimits

0x7a9c,	// (0x000a23cd) main_cset6_slider_pane

0x7aa8,	// (0x000a23d9) main_cset6_text2_pane_ParamLimits

0x7aa8,	// (0x000a23d9) main_cset6_text2_pane

0xde88,	// (0x000a87b9) main_cset6_text_pane

0xde90,	// (0x000a87c1) main_cset_list_pane_copy1_ParamLimits

0xde90,	// (0x000a87c1) main_cset_list_pane_copy1

0xdea0,	// (0x000a87d1) scroll_pane_cp028_copy1

0x7abb,	// (0x000a23ec) cset_list_set_pane_copy1

0x7ad4,	// (0x000a2405) aid_position_infowindow_above_copy1

0x7adc,	// (0x000a240d) aid_position_infowindow_below_copy1

0x7ae4,	// (0x000a2415) cset_list_set_pane_g1_copy1

0xa015,	// (0x000a4946) cset_list_set_pane_g3_copy1_ParamLimits

0xa015,	// (0x000a4946) cset_list_set_pane_g3_copy1

0xa024,	// (0x000a4955) cset_list_set_pane_t1_copy1_ParamLimits

0xa024,	// (0x000a4955) cset_list_set_pane_t1_copy1

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp021_copy1_ParamLimits

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp021_copy1

0xdea9,	// (0x000a87da) cset6_slider_pane_ParamLimits

0xdea9,	// (0x000a87da) cset6_slider_pane

0xded5,	// (0x000a8806) main_cset6_slider_pane_g1_ParamLimits

0xded5,	// (0x000a8806) main_cset6_slider_pane_g1

0x7aec,	// (0x000a241d) main_cset6_slider_pane_g2_ParamLimits

0x7aec,	// (0x000a241d) main_cset6_slider_pane_g2

0xdefd,	// (0x000a882e) main_cset6_slider_pane_g3_ParamLimits

0xdefd,	// (0x000a882e) main_cset6_slider_pane_g3

0x7b14,	// (0x000a2445) main_cset6_slider_pane_g4_ParamLimits

0x7b14,	// (0x000a2445) main_cset6_slider_pane_g4

0x7b20,	// (0x000a2451) main_cset6_slider_pane_g5_ParamLimits

0x7b20,	// (0x000a2451) main_cset6_slider_pane_g5

0xd768,	// (0x000a8099) main_cset6_slider_pane_g7_ParamLimits

0xd768,	// (0x000a8099) main_cset6_slider_pane_g7

0xd774,	// (0x000a80a5) main_cset6_slider_pane_g8_ParamLimits

0xd774,	// (0x000a80a5) main_cset6_slider_pane_g8

0x7b2e,	// (0x000a245f) main_cset6_slider_pane_g9_ParamLimits

0x7b2e,	// (0x000a245f) main_cset6_slider_pane_g9

0x7b3a,	// (0x000a246b) main_cset6_slider_pane_g10_ParamLimits

0x7b3a,	// (0x000a246b) main_cset6_slider_pane_g10

0x7b46,	// (0x000a2477) main_cset6_slider_pane_g11_ParamLimits

0x7b46,	// (0x000a2477) main_cset6_slider_pane_g11

0x7b52,	// (0x000a2483) main_cset6_slider_pane_g12_ParamLimits

0x7b52,	// (0x000a2483) main_cset6_slider_pane_g12

0x7b5e,	// (0x000a248f) main_cset6_slider_pane_g13_ParamLimits

0x7b5e,	// (0x000a248f) main_cset6_slider_pane_g13

0x7b6a,	// (0x000a249b) main_cset6_slider_pane_g14_ParamLimits

0x7b6a,	// (0x000a249b) main_cset6_slider_pane_g14

0x7b76,	// (0x000a24a7) main_cset6_slider_pane_g15_ParamLimits

0x7b76,	// (0x000a24a7) main_cset6_slider_pane_g15

0x7b8e,	// (0x000a24bf) main_cset6_slider_pane_g16_ParamLimits

0x7b8e,	// (0x000a24bf) main_cset6_slider_pane_g16

0x7b9c,	// (0x000a24cd) main_cset6_slider_pane_g17_ParamLimits

0x7b9c,	// (0x000a24cd) main_cset6_slider_pane_g17

0x0011,

0xf9ba,	// (0x000aa2eb) main_cset6_slider_pane_g_ParamLimits

0xf9ba,	// (0x000aa2eb) main_cset6_slider_pane_g

0xdf09,	// (0x000a883a) main_cset6_slider_pane_t1_ParamLimits

0xdf09,	// (0x000a883a) main_cset6_slider_pane_t1

0x7bc2,	// (0x000a24f3) main_cset6_slider_pane_t2_ParamLimits

0x7bc2,	// (0x000a24f3) main_cset6_slider_pane_t2

0x7bed,	// (0x000a251e) main_cset6_slider_pane_t3_ParamLimits

0x7bed,	// (0x000a251e) main_cset6_slider_pane_t3

0x7c18,	// (0x000a2549) main_cset6_slider_pane_t4_ParamLimits

0x7c18,	// (0x000a2549) main_cset6_slider_pane_t4

0x7c43,	// (0x000a2574) main_cset6_slider_pane_t5_ParamLimits

0x7c43,	// (0x000a2574) main_cset6_slider_pane_t5

0xdf4a,	// (0x000a887b) main_cset6_slider_pane_t7_ParamLimits

0xdf4a,	// (0x000a887b) main_cset6_slider_pane_t7

0x7c70,	// (0x000a25a1) main_cset6_slider_pane_t8_ParamLimits

0x7c70,	// (0x000a25a1) main_cset6_slider_pane_t8

0x7c94,	// (0x000a25c5) main_cset6_slider_pane_t9_ParamLimits

0x7c94,	// (0x000a25c5) main_cset6_slider_pane_t9

0x7cb8,	// (0x000a25e9) main_cset6_slider_pane_t10_ParamLimits

0x7cb8,	// (0x000a25e9) main_cset6_slider_pane_t10

0x7cdc,	// (0x000a260d) main_cset6_slider_pane_t11_ParamLimits

0x7cdc,	// (0x000a260d) main_cset6_slider_pane_t11

0xdf80,	// (0x000a88b1) main_cset6_slider_pane_t14_ParamLimits

0xdf80,	// (0x000a88b1) main_cset6_slider_pane_t14

0xdfb9,	// (0x000a88ea) main_cset6_slider_pane_t15_ParamLimits

0xdfb9,	// (0x000a88ea) main_cset6_slider_pane_t15

0x000b,

0xf9df,	// (0x000aa310) main_cset6_slider_pane_t_ParamLimits

0xf9df,	// (0x000aa310) main_cset6_slider_pane_t

0xdbc5,	// (0x000a84f6) cset_slider_pane_g1_copy1

0xdbce,	// (0x000a84ff) cset_slider_pane_g2_copy1

0xdbd7,	// (0x000a8508) cset_slider_pane_g3_copy1

0x9a8d,	// (0x000a43be) bg_popup_sub_pane_cp011_copy1

0xdff2,	// (0x000a8923) main_cset_text_pane_g1_copy1

0xd8ac,	// (0x000a81dd) main_cset_text_pane_t1_copy1

0xd8ba,	// (0x000a81eb) main_cset_text_pane_t2_copy1

0xd8c8,	// (0x000a81f9) main_cset_text_pane_t3_copy1

0xd8d6,	// (0x000a8207) main_cset_text_pane_t4_copy1

0xd8e4,	// (0x000a8215) main_cset_text_pane_t5_copy1

0xdffa,	// (0x000a892b) main_cset_text_pane_t6_copy1

0xe008,	// (0x000a8939) main_cset_text_pane_t7_copy1

0x7dd1,	// (0x000a2702) main_cset_text2_pane_t1_copy1

0x437a,	// (0x0009ecab) main_ncimui_pane

0x43d9,	// (0x0009ed0a) popup_query_ncimui_window_ParamLimits

0x43d9,	// (0x0009ed0a) popup_query_ncimui_window

0xa4e8,	// (0x000a4e19) field_cale_ev2_pane_g4_ParamLimits

0xa4e8,	// (0x000a4e19) field_cale_ev2_pane_g4

0x5cbf,	// (0x000a05f0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cbf,	// (0x000a05f0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf722,	// (0x000aa053) cell_video_dialer_keypad_pane_g_ParamLimits

0xf722,	// (0x000aa053) cell_video_dialer_keypad_pane_g

0x5cd7,	// (0x000a0608) cell_video_dialer_keypad_pane_t1

0x9a8d,	// (0x000a43be) bg_popup_window_pane_cp012

0xafc4,	// (0x000a58f5) heading_pane_cp06

0xe034,	// (0x000a8965) ncim_query_content_pane

0x9a8d,	// (0x000a43be) bg_popup_heading_pane_cp01

0xe03c,	// (0x000a896d) ncim_heading_pane_t1

0xe04a,	// (0x000a897b) ncim_indicator_popup_pane

0xe05c,	// (0x000a898d) ncim_query_button_pane

0xe070,	// (0x000a89a1) ncim_query_content_pane_t1

0xe082,	// (0x000a89b3) ncim_query_content_pane_t2

0x0005,

0xfa23,	// (0x000aa354) ncim_query_content_pane_t

0xe0bc,	// (0x000a89ed) ncim_query_list_pane

0xe0ce,	// (0x000a89ff) ncim_query_popup_pane

0xe04a,	// (0x000a897b) ncim_indicator_popup_pane_ParamLimits

0x7f2b,	// (0x000a285c) ncim_query_content_pane_g1_ParamLimits

0x7f2b,	// (0x000a285c) ncim_query_content_pane_g1

0xe070,	// (0x000a89a1) ncim_query_content_pane_t1_ParamLimits

0xe082,	// (0x000a89b3) ncim_query_content_pane_t2_ParamLimits

0x7f37,	// (0x000a2868) ncim_query_content_pane_t3_ParamLimits

0x7f37,	// (0x000a2868) ncim_query_content_pane_t3

0x7f54,	// (0x000a2885) ncim_query_content_pane_t4_ParamLimits

0x7f54,	// (0x000a2885) ncim_query_content_pane_t4

0x7f71,	// (0x000a28a2) ncim_query_content_pane_t5_ParamLimits

0x7f71,	// (0x000a28a2) ncim_query_content_pane_t5

0xe094,	// (0x000a89c5) ncim_query_content_pane_t6_ParamLimits

0xe094,	// (0x000a89c5) ncim_query_content_pane_t6

0xfa23,	// (0x000aa354) ncim_query_content_pane_t_ParamLimits

0xe0bc,	// (0x000a89ed) ncim_query_list_pane_ParamLimits

0xe0ce,	// (0x000a89ff) ncim_query_popup_pane_ParamLimits

0xe0e2,	// (0x000a8a13) wait_bar_pane_cp04

0x9a8d,	// (0x000a43be) input_focus_pane_cp011

0xe0ea,	// (0x000a8a1b) ncim_query_popup_pane_t1

0xe0f8,	// (0x000a8a29) ncim_list_query_list_pane_ParamLimits

0xe0f8,	// (0x000a8a29) ncim_list_query_list_pane

0x9a8d,	// (0x000a43be) bg_button_pane_cp027

0xe10b,	// (0x000a8a3c) ncim_query_button_pane_g1

0x9a8d,	// (0x000a43be) list_highlight_pane_cp012

0xe115,	// (0x000a8a46) ncim_list_query_list_pane_g1

0xe11d,	// (0x000a8a4e) ncim_list_query_list_pane_t1

0x6364,	// (0x000a0c95) cam4_indicators_pane_g3_ParamLimits

0x6364,	// (0x000a0c95) cam4_indicators_pane_g3

0x6469,	// (0x000a0d9a) vid4_indicators_pane_g5_ParamLimits

0x6469,	// (0x000a0d9a) vid4_indicators_pane_g5

0x74fd,	// (0x000a1e2e) vid4_progress_pane_g5_ParamLimits

0x74fd,	// (0x000a1e2e) vid4_progress_pane_g5

0x7e17,	// (0x000a2748) main_ncimui_pane_g1

0x7e7f,	// (0x000a27b0) ncimui_group_query_pane_ParamLimits

0x7e7f,	// (0x000a27b0) ncimui_group_query_pane

0x7ec7,	// (0x000a27f8) ncimui_list_pane_ParamLimits

0x7ec7,	// (0x000a27f8) ncimui_list_pane

0x7eee,	// (0x000a281f) ncimui_text_pane_ParamLimits

0x7eee,	// (0x000a281f) ncimui_text_pane

0x7f8e,	// (0x000a28bf) ncimui_text_pane_t1_ParamLimits

0x7f8e,	// (0x000a28bf) ncimui_text_pane_t1

0xe12b,	// (0x000a8a5c) ncimui_list_single_graphic_pane_ParamLimits

0xe12b,	// (0x000a8a5c) ncimui_list_single_graphic_pane

0x7fad,	// (0x000a28de) ncimui_query_pane_ParamLimits

0x7fad,	// (0x000a28de) ncimui_query_pane

0x9a8d,	// (0x000a43be) list_highlight_pane_cp013

0xe13b,	// (0x000a8a6c) ncim_list_query_list_pane_t1_copy1

0xe115,	// (0x000a8a46) ncim_list_single_graphic_pane_g1

0xe149,	// (0x000a8a7a) ncim_query_button_pane_cp01

0xe155,	// (0x000a8a86) ncim_query_entry_pane_ParamLimits

0xe155,	// (0x000a8a86) ncim_query_entry_pane

0xe168,	// (0x000a8a99) ncimui_query_pane_g1

0xe174,	// (0x000a8aa5) ncimui_query_pane_t1_ParamLimits

0xe174,	// (0x000a8aa5) ncimui_query_pane_t1

0xa49e,	// (0x000a4dcf) input_focus_pane_cp012

0xe18d,	// (0x000a8abe) ncim_query_entry_pane_t1

0xa708,	// (0x000a5039) main_im_pane_ParamLimits

0x437a,	// (0x0009ecab) main_mobtv_pane_ParamLimits

0x437a,	// (0x0009ecab) main_mobtv_pane

0x7baa,	// (0x000a24db) main_cset6_slider_pane_g18_ParamLimits

0x7baa,	// (0x000a24db) main_cset6_slider_pane_g18

0x7bb6,	// (0x000a24e7) main_cset6_slider_pane_g19_ParamLimits

0x7bb6,	// (0x000a24e7) main_cset6_slider_pane_g19

0xd607,	// (0x000a7f38) bg_main_mobtv_pane_ParamLimits

0xd607,	// (0x000a7f38) bg_main_mobtv_pane

0x7fc0,	// (0x000a28f1) main_mobtv_info_pane

0x7fcb,	// (0x000a28fc) main_mobtv_loading_pane_ParamLimits

0x7fcb,	// (0x000a28fc) main_mobtv_loading_pane

0xe19f,	// (0x000a8ad0) main_mobtv_pg_channel_list_pane

0xe1a9,	// (0x000a8ada) main_mobtv_pg_hdr_pane

0x7fd8,	// (0x000a2909) main_mobtv_programe_curr_pane_ParamLimits

0x7fd8,	// (0x000a2909) main_mobtv_programe_curr_pane

0x7fe5,	// (0x000a2916) main_mobtv_programe_next_pane_ParamLimits

0x7fe5,	// (0x000a2916) main_mobtv_programe_next_pane

0xe1b2,	// (0x000a8ae3) popup_mobtv_noti_window

0xcbc4,	// (0x000a74f5) main_tv_pg_hdr_pane_g1

0xe1ba,	// (0x000a8aeb) main_tv_pg_hdr_pane_g2

0xe1c2,	// (0x000a8af3) main_tv_pg_hdr_pane_g3

0xe1ca,	// (0x000a8afb) main_tv_pg_hdr_pane_g4

0xe1d2,	// (0x000a8b03) main_tv_pg_hdr_pane_g5

0xe1dc,	// (0x000a8b0d) main_tv_pg_hdr_pane_g6

0xe1e6,	// (0x000a8b17) main_tv_pg_hdr_pane_g7

0xe1f0,	// (0x000a8b21) main_tv_pg_hdr_pane_g8

0xe1fa,	// (0x000a8b2b) main_tv_pg_hdr_pane_g9

0xe204,	// (0x000a8b35) main_tv_pg_hdr_pane_g10

0xe20e,	// (0x000a8b3f) main_tv_pg_hdr_pane_g11

0x000a,

0x08c7,	// (0x0009b1f8) main_tv_pg_hdr_pane_g

0xe218,	// (0x000a8b49) main_tv_pg_hdr_pane_t1

0xe226,	// (0x000a8b57) main_tv_pg_hdr_pane_t2

0xe234,	// (0x000a8b65) main_tv_pg_hdr_pane_t3

0xe244,	// (0x000a8b75) main_tv_pg_hdr_pane_t4

0xe254,	// (0x000a8b85) main_tv_pg_hdr_pane_t5

0x0004,

0x08de,	// (0x0009b20f) main_tv_pg_hdr_pane_t

0xe264,	// (0x000a8b95) single_mobtv_pg_channel_pane_ParamLimits

0xe264,	// (0x000a8b95) single_mobtv_pg_channel_pane

0xe276,	// (0x000a8ba7) single_mobtv_pg_channel_table_pane

0xe27f,	// (0x000a8bb0) single_mobtv_pg_channel_thumb_pane

0xe288,	// (0x000a8bb9) single_tv_pg_channel_pane_g1

0xe291,	// (0x000a8bc2) single_tv_pg_channel_pane_g2

0x0001,

0x08e9,	// (0x0009b21a) single_tv_pg_channel_pane_g

0xce24,	// (0x000a7755) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce24,	// (0x000a7755) bg_single_mobtv_pg_channel_thumb_pane

0xe29a,	// (0x000a8bcb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29a,	// (0x000a8bcb) single_mobtv_pg_channel_thumb_pane_g1

0xe2a8,	// (0x000a8bd9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2a8,	// (0x000a8bd9) single_mobtv_pg_channel_thumb_pane_g2

0xe2b4,	// (0x000a8be5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b4,	// (0x000a8be5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x08ee,	// (0x0009b21f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x08ee,	// (0x0009b21f) single_mobtv_pg_channel_thumb_pane_g

0xe2c0,	// (0x000a8bf1) single_mobtv_pg_channel_thumb_pane_t1

0xe2ce,	// (0x000a8bff) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x08f5,	// (0x0009b226) single_mobtv_pg_channel_thumb_pane_t

0xcbc4,	// (0x000a74f5) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc4,	// (0x000a74f5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x039b,	// (0x0009accc) bg_single_mobtv_pg_channel_table_pane_g

0xe2dc,	// (0x000a8c0d) single_mobtv_pg_channel_table_pane_t1

0xe2ea,	// (0x000a8c1b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x08fa,	// (0x0009b22b) single_mobtv_pg_channel_table_pane_t

0x7ffa,	// (0x000a292b) main_mobtv_info_pane_g1_ParamLimits

0x7ffa,	// (0x000a292b) main_mobtv_info_pane_g1

0x8016,	// (0x000a2947) main_mobtv_info_pane_t1_ParamLimits

0x8016,	// (0x000a2947) main_mobtv_info_pane_t1

0x808e,	// (0x000a29bf) main_mobtv_info_pane_t2_ParamLimits

0x808e,	// (0x000a29bf) main_mobtv_info_pane_t2

0x0002,

0xfa35,	// (0x000aa366) main_mobtv_info_pane_t_ParamLimits

0xfa35,	// (0x000aa366) main_mobtv_info_pane_t

0x811d,	// (0x000a2a4e) wait_bar_pane_cp05

0x812f,	// (0x000a2a60) main_mobtv_loading_pane_g1_ParamLimits

0x812f,	// (0x000a2a60) main_mobtv_loading_pane_g1

0x813d,	// (0x000a2a6e) main_mobtv_loading_pane_g2_ParamLimits

0x813d,	// (0x000a2a6e) main_mobtv_loading_pane_g2

0x8149,	// (0x000a2a7a) main_mobtv_loading_pane_g3_ParamLimits

0x8149,	// (0x000a2a7a) main_mobtv_loading_pane_g3

0x0002,

0xfa3c,	// (0x000aa36d) main_mobtv_loading_pane_g_ParamLimits

0xfa3c,	// (0x000aa36d) main_mobtv_loading_pane_g

0xe2f8,	// (0x000a8c29) main_mobtv_loading_pane_t1_ParamLimits

0xe2f8,	// (0x000a8c29) main_mobtv_loading_pane_t1

0xe310,	// (0x000a8c41) main_mobtv_loading_pane_t2_ParamLimits

0xe310,	// (0x000a8c41) main_mobtv_loading_pane_t2

0x0001,

0x0912,	// (0x0009b243) main_mobtv_loading_pane_t_ParamLimits

0x0912,	// (0x0009b243) main_mobtv_loading_pane_t

0x8157,	// (0x000a2a88) wait_bar_pane_cp06_ParamLimits

0x8157,	// (0x000a2a88) wait_bar_pane_cp06

0xe334,	// (0x000a8c65) main_mobtv_programe_curr_pane_t1

0xe342,	// (0x000a8c73) main_mobtv_programe_curr_pane_t2

0x0001,

0x0917,	// (0x0009b248) main_mobtv_programe_curr_pane_t

0xe350,	// (0x000a8c81) main_mobtv_programe_next_pane_t1

0xe35e,	// (0x000a8c8f) main_mobtv_programe_next_pane_t2

0xe36c,	// (0x000a8c9d) main_mobtv_programe_next_pane_t3

0x0002,

0x091c,	// (0x0009b24d) main_mobtv_programe_next_pane_t

0x9a8d,	// (0x000a43be) bg_popup_mobtv_noti_window_pane

0xe37a,	// (0x000a8cab) popup_mobtv_noti_window_g1

0xe382,	// (0x000a8cb3) popup_mobtv_noti_window_t1

0xe390,	// (0x000a8cc1) popup_mobtv_noti_window_t2

0x0001,

0x0923,	// (0x0009b254) popup_mobtv_noti_window_t

0xcbc4,	// (0x000a74f5) bg_popup_mobtv_noti_window_pane_g1

0x0fe1,	// (0x0009b912) sc_clock_pane

0x0fe1,	// (0x0009b912) main_fs_bigclock_pane

0x771c,	// (0x000a204d) blid2_tripm_pane_t4_ParamLimits

0x771c,	// (0x000a204d) blid2_tripm_pane_t4

0x8163,	// (0x000a2a94) sc_clock_pane_g1_ParamLimits

0x8163,	// (0x000a2a94) sc_clock_pane_g1

0x8171,	// (0x000a2aa2) sc_clock_pane_t1_ParamLimits

0x8171,	// (0x000a2aa2) sc_clock_pane_t1

0x8184,	// (0x000a2ab5) sc_clock_pane_t2_ParamLimits

0x8184,	// (0x000a2ab5) sc_clock_pane_t2

0x8196,	// (0x000a2ac7) sc_clock_pane_t3_ParamLimits

0x8196,	// (0x000a2ac7) sc_clock_pane_t3

0x0004,

0xfa43,	// (0x000aa374) sc_clock_pane_t_ParamLimits

0xfa43,	// (0x000aa374) sc_clock_pane_t

0x9020,	// (0x000a3951) main_fs_bigclock_indicator_pane_ParamLimits

0x9020,	// (0x000a3951) main_fs_bigclock_indicator_pane

0x821f,	// (0x000a2b50) main_fs_bigclock_pane_g1_ParamLimits

0x821f,	// (0x000a2b50) main_fs_bigclock_pane_g1

0x902c,	// (0x000a395d) main_fs_bigclock_pane_t1_ParamLimits

0x902c,	// (0x000a395d) main_fs_bigclock_pane_t1

0x903e,	// (0x000a396f) main_fs_bigclock_pane_t2_ParamLimits

0x903e,	// (0x000a396f) main_fs_bigclock_pane_t2

0x9050,	// (0x000a3981) main_fs_bigclock_pane_t3_ParamLimits

0x9050,	// (0x000a3981) main_fs_bigclock_pane_t3

0x0002,

0xfbb8,	// (0x000aa4e9) main_fs_bigclock_pane_t_ParamLimits

0xfbb8,	// (0x000aa4e9) main_fs_bigclock_pane_t

0xec93,	// (0x000a95c4) main_fs_bigclock_indicator_pane_g1

0xe064,	// (0x000a8995) ncim_query_content_pane_g2_ParamLimits

0xe064,	// (0x000a8995) ncim_query_content_pane_g2

0x0001,

0xfa1e,	// (0x000aa34f) ncim_query_content_pane_g_ParamLimits

0xfa1e,	// (0x000aa34f) ncim_query_content_pane_g

0x81aa,	// (0x000a2adb) sc_clock_pane_t4_ParamLimits

0x81aa,	// (0x000a2adb) sc_clock_pane_t4

0x437a,	// (0x0009ecab) main_radioblah_pane

0xd57a,	// (0x000a7eab) cell_call4_button_pane_t1_copy1_ParamLimits

0xd57a,	// (0x000a7eab) cell_call4_button_pane_t1_copy1

0x7e31,	// (0x000a2762) main_ncimui_pane_t1_ParamLimits

0x7e31,	// (0x000a2762) main_ncimui_pane_t1

0x7e4b,	// (0x000a277c) main_ncimui_pane_t2_ParamLimits

0x7e4b,	// (0x000a277c) main_ncimui_pane_t2

0x0002,

0xfa17,	// (0x000aa348) main_ncimui_pane_t_ParamLimits

0xfa17,	// (0x000aa348) main_ncimui_pane_t

0xe4d5,	// (0x000a8e06) main_radioblah_anim_pane_ParamLimits

0xe4d5,	// (0x000a8e06) main_radioblah_anim_pane

0xe4e6,	// (0x000a8e17) main_radioblah_info_pane_ParamLimits

0xe4e6,	// (0x000a8e17) main_radioblah_info_pane

0xe4fa,	// (0x000a8e2b) main_radioblah_pane_t1_ParamLimits

0xe4fa,	// (0x000a8e2b) main_radioblah_pane_t1

0xe516,	// (0x000a8e47) main_radioblah_pane_t2_ParamLimits

0xe516,	// (0x000a8e47) main_radioblah_pane_t2

0x0003,

0x0949,	// (0x0009b27a) main_radioblah_pane_t_ParamLimits

0x0949,	// (0x0009b27a) main_radioblah_pane_t

0x8271,	// (0x000a2ba2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8271,	// (0x000a2ba2) main_radioblah_rocker_ctrl_pane

0xe55e,	// (0x000a8e8f) main_radioblah_info_pane_t1_ParamLimits

0xe55e,	// (0x000a8e8f) main_radioblah_info_pane_t1

0x82b6,	// (0x000a2be7) main_radioblah_info_pane_t2_ParamLimits

0x82b6,	// (0x000a2be7) main_radioblah_info_pane_t2

0x0003,

0xfa4e,	// (0x000aa37f) main_radioblah_info_pane_t_ParamLimits

0xfa4e,	// (0x000aa37f) main_radioblah_info_pane_t

0xcbc4,	// (0x000a74f5) main_radioblah_rocker_ctrl_pane_g1

0x8366,	// (0x000a2c97) main_radioblah_rocker_ctrl_pane_g2

0x836e,	// (0x000a2c9f) main_radioblah_rocker_ctrl_pane_g3

0x8376,	// (0x000a2ca7) main_radioblah_rocker_ctrl_pane_g4

0x837e,	// (0x000a2caf) main_radioblah_rocker_ctrl_pane_g5

0x8386,	// (0x000a2cb7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa57,	// (0x000aa388) main_radioblah_rocker_ctrl_pane_g

0x7dd1,	// (0x000a2702) main_cset_text2_pane_t1_copy1_ParamLimits

0x6284,	// (0x000a0bb5) cam4_image_uncrop_qvga_pane

0x63d9,	// (0x000a0d0a) vid4_image_uncrop_qcif_pane

0x78aa,	// (0x000a21db) cam6_image_uncrop_qvga_pane_ParamLimits

0x78aa,	// (0x000a21db) cam6_image_uncrop_qvga_pane

0xdd6b,	// (0x000a869c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd6b,	// (0x000a869c) vid6_image_uncrop_qcif_pane

0x9a8d,	// (0x000a43be) bg_popup_preview_window_pane_cp03

0xe016,	// (0x000a8947) list_cset_text2_pane

0xe01e,	// (0x000a894f) main_cset6_text2_pane_g1

0xe026,	// (0x000a8957) main_cset6_text2_pane_t1

0x838e,	// (0x000a2cbf) list_cset_text2_pane_t1_ParamLimits

0x838e,	// (0x000a2cbf) list_cset_text2_pane_t1

0x437a,	// (0x0009ecab) main_radioblah_pane_ParamLimits

0x8109,	// (0x000a2a3a) main_mobtv_info_pane_t3_ParamLimits

0x8109,	// (0x000a2a3a) main_mobtv_info_pane_t3

0x825f,	// (0x000a2b90) main_radioblah_pane_g1

0x828a,	// (0x000a2bbb) main_radioblah_info_pane_g1

0x830b,	// (0x000a2c3c) main_radioblah_info_pane_t3_ParamLimits

0x830b,	// (0x000a2c3c) main_radioblah_info_pane_t3

0x3042,	// (0x0009d973) highlight_cell_cale_month_pane_ParamLimits

0x3042,	// (0x0009d973) highlight_cell_cale_month_pane

0x0fe1,	// (0x0009b912) main_phob_fisheye_pane

0xcf00,	// (0x000a7831) scroll_pane_cp0031_ParamLimits

0xcf00,	// (0x000a7831) scroll_pane_cp0031

0xde79,	// (0x000a87aa) wait_bar_pane_cp08_ParamLimits

0x7abb,	// (0x000a23ec) cset_list_set_pane_copy1_ParamLimits

0xe598,	// (0x000a8ec9) highlight_cell_cale_month_pane_g1

0x83b5,	// (0x000a2ce6) highlight_cell_cale_month_pane_t1

0xdaf8,	// (0x000a8429) list_gen_pane_cp01

0xd753,	// (0x000a8084) scroll_pane_01

0x83c3,	// (0x000a2cf4) list_single_double_fisheye_pane

0x83cc,	// (0x000a2cfd) list_double_fisheye_pane_g1_ParamLimits

0x83cc,	// (0x000a2cfd) list_double_fisheye_pane_g1

0x83d8,	// (0x000a2d09) list_double_fisheye_pane_g2_ParamLimits

0x83d8,	// (0x000a2d09) list_double_fisheye_pane_g2

0x83ec,	// (0x000a2d1d) list_double_fisheye_pane_g3_ParamLimits

0x83ec,	// (0x000a2d1d) list_double_fisheye_pane_g3

0x0004,

0xfa64,	// (0x000aa395) list_double_fisheye_pane_g_ParamLimits

0xfa64,	// (0x000aa395) list_double_fisheye_pane_g

0x8415,	// (0x000a2d46) list_double_fisheye_pane_t1_ParamLimits

0x8415,	// (0x000a2d46) list_double_fisheye_pane_t1

0x8430,	// (0x000a2d61) list_double_fisheye_pane_t2_ParamLimits

0x8430,	// (0x000a2d61) list_double_fisheye_pane_t2

0x0001,

0xfa6f,	// (0x000aa3a0) list_double_fisheye_pane_t_ParamLimits

0xfa6f,	// (0x000aa3a0) list_double_fisheye_pane_t

0x0fe1,	// (0x0009b912) main_call5_pane

0x81d0,	// (0x000a2b01) sc_swipe_pane_ParamLimits

0x81d0,	// (0x000a2b01) sc_swipe_pane

0x845e,	// (0x000a2d8f) call5_image_pane_ParamLimits

0x845e,	// (0x000a2d8f) call5_image_pane

0x846e,	// (0x000a2d9f) call5_swipe_1_pane_ParamLimits

0x846e,	// (0x000a2d9f) call5_swipe_1_pane

0x847a,	// (0x000a2dab) call5_swipe_2_pane_ParamLimits

0x847a,	// (0x000a2dab) call5_swipe_2_pane

0x8494,	// (0x000a2dc5) popup_call5_audio_first_window_ParamLimits

0x8494,	// (0x000a2dc5) popup_call5_audio_first_window

0xce24,	// (0x000a7755) call5_swipe_1_pane_g1_ParamLimits

0xce24,	// (0x000a7755) call5_swipe_1_pane_g1

0xe5a0,	// (0x000a8ed1) call5_swipe_1_pane_g2_ParamLimits

0xe5a0,	// (0x000a8ed1) call5_swipe_1_pane_g2

0x0001,

0xfa74,	// (0x000aa3a5) call5_swipe_1_pane_g_ParamLimits

0xfa74,	// (0x000aa3a5) call5_swipe_1_pane_g

0xe5ac,	// (0x000a8edd) call5_swipe_1_pane_t1_ParamLimits

0xe5ac,	// (0x000a8edd) call5_swipe_1_pane_t1

0xce24,	// (0x000a7755) call5_swipe_2_pane_g1_ParamLimits

0xce24,	// (0x000a7755) call5_swipe_2_pane_g1

0xe5c1,	// (0x000a8ef2) call5_swipe_2_pane_g2_ParamLimits

0xe5c1,	// (0x000a8ef2) call5_swipe_2_pane_g2

0x0001,

0xfa79,	// (0x000aa3aa) call5_swipe_2_pane_g_ParamLimits

0xfa79,	// (0x000aa3aa) call5_swipe_2_pane_g

0xe5cd,	// (0x000a8efe) call5_swipe_2_pane_t1_ParamLimits

0xe5cd,	// (0x000a8efe) call5_swipe_2_pane_t1

0xe5fd,	// (0x000a8f2e) sc_swipe_pane_g1_ParamLimits

0xe5fd,	// (0x000a8f2e) sc_swipe_pane_g1

0xe60a,	// (0x000a8f3b) sc_swipe_pane_g2_ParamLimits

0xe60a,	// (0x000a8f3b) sc_swipe_pane_g2

0x0001,

0x0982,	// (0x0009b2b3) sc_swipe_pane_g_ParamLimits

0x0982,	// (0x0009b2b3) sc_swipe_pane_g

0xe616,	// (0x000a8f47) sc_swipe_pane_t1_ParamLimits

0xe616,	// (0x000a8f47) sc_swipe_pane_t1

0x0fe1,	// (0x0009b912) main_cmail_launcher_pane

0x84a2,	// (0x000a2dd3) aid_size_cell_cmail_l_ParamLimits

0x84a2,	// (0x000a2dd3) aid_size_cell_cmail_l

0x84b2,	// (0x000a2de3) grid_cmail_l_pane_ParamLimits

0x84b2,	// (0x000a2de3) grid_cmail_l_pane

0x84c2,	// (0x000a2df3) cell_cmail_l_pane_ParamLimits

0x84c2,	// (0x000a2df3) cell_cmail_l_pane

0x84d6,	// (0x000a2e07) cell_cmail_l_pane_g1_ParamLimits

0x84d6,	// (0x000a2e07) cell_cmail_l_pane_g1

0x84e7,	// (0x000a2e18) cell_cmail_l_pane_t1_ParamLimits

0x84e7,	// (0x000a2e18) cell_cmail_l_pane_t1

0xe62b,	// (0x000a8f5c) cell_cmail_l_pane_t2_ParamLimits

0xe62b,	// (0x000a8f5c) cell_cmail_l_pane_t2

0x0001,

0xfa7e,	// (0x000aa3af) cell_cmail_l_pane_t_ParamLimits

0xfa7e,	// (0x000aa3af) cell_cmail_l_pane_t

0xa49e,	// (0x000a4dcf) grid_highlight_pane_cp018_ParamLimits

0xa49e,	// (0x000a4dcf) grid_highlight_pane_cp018

0x0e37,	// (0x0009b768) main2_pane_ParamLimits

0x0e37,	// (0x0009b768) main2_pane

0xa7b3,	// (0x000a50e4) popup_sp_fs_action_menu_bg_pane_g1

0xa7bb,	// (0x000a50ec) popup_sp_fs_action_menu_bg_pane_g2

0xa7c3,	// (0x000a50f4) popup_sp_fs_action_menu_bg_pane_g3

0xa7cb,	// (0x000a50fc) popup_sp_fs_action_menu_bg_pane_g4

0xa7d3,	// (0x000a5104) popup_sp_fs_action_menu_bg_pane_g5

0xa7db,	// (0x000a510c) popup_sp_fs_action_menu_bg_pane_g6

0xa7e3,	// (0x000a5114) popup_sp_fs_action_menu_bg_pane_g7

0xa7eb,	// (0x000a511c) popup_sp_fs_action_menu_bg_pane_g8

0xa7f3,	// (0x000a5124) popup_sp_fs_action_menu_bg_pane_g9

0xa7fb,	// (0x000a512c) popup_sp_fs_action_menu_bg_pane_g10

0xa7fb,	// (0x000a512c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a9abb) popup_sp_fs_action_menu_bg_pane_g

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g3_g1

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t3_g3_g2

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a9b69) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a9b69) list_medium_line_x2_t3_g3_g

0x1de4,	// (0x0009c715) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1de4,	// (0x0009c715) list_medium_line_x2_t3_g3_t1

0x1df9,	// (0x0009c72a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1df9,	// (0x0009c72a) list_medium_line_x2_t3_g3_t2

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a9b70) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a9b70) list_medium_line_x2_t3_g3_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g2_g1

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a9b77) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a9b77) list_medium_line_x2_t3_g2_g

0x1e20,	// (0x0009c751) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e20,	// (0x0009c751) list_medium_line_x2_t3_g2_t1

0x1e36,	// (0x0009c767) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e36,	// (0x0009c767) list_medium_line_x2_t3_g2_t2

0x1e48,	// (0x0009c779) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e48,	// (0x0009c779) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a9b7c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a9b7c) list_medium_line_x2_t3_g2_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t4_g4_g1

0x1e66,	// (0x0009c797) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e66,	// (0x0009c797) list_medium_line_x2_t4_g4_g2

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t4_g4_g3

0x1e72,	// (0x0009c7a3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e72,	// (0x0009c7a3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a9b83) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a9b83) list_medium_line_x2_t4_g4_g

0x1e7e,	// (0x0009c7af) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e7e,	// (0x0009c7af) list_medium_line_x2_t4_g4_t1

0x1e95,	// (0x0009c7c6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e95,	// (0x0009c7c6) list_medium_line_x2_t4_g4_t2

0x1eaa,	// (0x0009c7db) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1eaa,	// (0x0009c7db) list_medium_line_x2_t4_g4_t3

0x1ebc,	// (0x0009c7ed) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1ebc,	// (0x0009c7ed) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a9b8c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a9b8c) list_medium_line_x2_t4_g4_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g4_g1

0x1e66,	// (0x0009c797) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e66,	// (0x0009c797) list_medium_line_x2_t2_g4_g2

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t2_g4_g3

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a9bf3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a9bf3) list_medium_line_x2_t2_g4_g

0x3068,	// (0x0009d999) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3068,	// (0x0009d999) list_medium_line_x2_t2_g4_t1

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a9bfc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a9bfc) list_medium_line_x2_t2_g4_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g3_g1

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t2_g3_g2

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a9b69) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a9b69) list_medium_line_x2_t2_g3_g

0x307d,	// (0x0009d9ae) list_medium_line_x2_t2_g3_t1_ParamLimits

0x307d,	// (0x0009d9ae) list_medium_line_x2_t2_g3_t1

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a9c01) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a9c01) list_medium_line_x2_t2_g3_t

0x325e,	// (0x0009db8f) main_sp_fs_list_pane_ParamLimits

0x325e,	// (0x0009db8f) main_sp_fs_list_pane

0x326a,	// (0x0009db9b) sp_fs_scroll_pane_ParamLimits

0x326a,	// (0x0009db9b) sp_fs_scroll_pane

0x3276,	// (0x0009dba7) list_medium_line_x2_t3_t1

0x3286,	// (0x0009dbb7) list_medium_line_x2_t3_t2

0x3294,	// (0x0009dbc5) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a9c4c) list_medium_line_x2_t3_t

0x32a2,	// (0x0009dbd3) list_medium_line_x3_t4_t1

0x32b2,	// (0x0009dbe3) list_medium_line_x3_t4_t2

0x32c0,	// (0x0009dbf1) list_medium_line_x3_t4_t3

0x3294,	// (0x0009dbc5) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a9c53) list_medium_line_x3_t4_t

0x32ce,	// (0x0009dbff) list_medium_line_x4_t5_t1

0x32de,	// (0x0009dc0f) list_medium_line_x4_t5_t2

0x32c0,	// (0x0009dbf1) list_medium_line_x4_t5_t3

0x32ec,	// (0x0009dc1d) list_medium_line_x4_t5_t4

0x3294,	// (0x0009dbc5) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a9c5c) list_medium_line_x4_t5_t

0x1dc0,	// (0x0009c6f1) list_medium_line_t4_g4_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_t4_g4_g1

0x1e72,	// (0x0009c7a3) list_medium_line_t4_g4_g2_ParamLimits

0x1e72,	// (0x0009c7a3) list_medium_line_t4_g4_g2

0x32fa,	// (0x0009dc2b) list_medium_line_t4_g4_g3_ParamLimits

0x32fa,	// (0x0009dc2b) list_medium_line_t4_g4_g3

0x1dd8,	// (0x0009c709) list_medium_line_t4_g4_g4_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a9c67) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a9c67) list_medium_line_t4_g4_g

0x3306,	// (0x0009dc37) list_medium_line_t4_g4_t1_ParamLimits

0x3306,	// (0x0009dc37) list_medium_line_t4_g4_t1

0x331b,	// (0x0009dc4c) list_medium_line_t4_g4_t2_ParamLimits

0x331b,	// (0x0009dc4c) list_medium_line_t4_g4_t2

0x3331,	// (0x0009dc62) list_medium_line_t4_g4_t3_ParamLimits

0x3331,	// (0x0009dc62) list_medium_line_t4_g4_t3

0x1e0b,	// (0x0009c73c) list_medium_line_t4_g4_t4_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a9c70) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a9c70) list_medium_line_t4_g4_t

0x3432,	// (0x0009dd63) chi_dic_find_pane_g1

0x4396,	// (0x0009ecc7) main_tport_pane

0x6da7,	// (0x000a16d8) list_medium_line_plain_t1

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g2_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g2_g1

0x6e9b,	// (0x000a17cc) list_medium_line_t2_g2_g2_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_t2_g2_g2

0x0001,

0xf876,	// (0x000aa1a7) list_medium_line_t2_g2_g_ParamLimits

0xf876,	// (0x000aa1a7) list_medium_line_t2_g2_g

0x6ea7,	// (0x000a17d8) list_medium_line_t2_g2_t1_ParamLimits

0x6ea7,	// (0x000a17d8) list_medium_line_t2_g2_t1

0x6ebe,	// (0x000a17ef) list_medium_line_t2_g2_t2_ParamLimits

0x6ebe,	// (0x000a17ef) list_medium_line_t2_g2_t2

0x0001,

0xf87b,	// (0x000aa1ac) list_medium_line_t2_g2_t_ParamLimits

0xf87b,	// (0x000aa1ac) list_medium_line_t2_g2_t

0xa0d5,	// (0x000a4a06) aid_sp_fs_list_icon_a_sm

0xa4f4,	// (0x000a4e25) aid_sp_fs_list_icon_d

0xb287,	// (0x000a5bb8) aid_sp_fs_text_primary

0xa4fc,	// (0x000a4e2d) aid_sp_fs_text_secondary

0x755e,	// (0x000a1e8f) list_medium_line

0x755e,	// (0x000a1e8f) list_medium_line_g2

0x755e,	// (0x000a1e8f) list_medium_line_g3

0x755e,	// (0x000a1e8f) list_medium_line_plain

0x755e,	// (0x000a1e8f) list_medium_line_plain_t2

0x755e,	// (0x000a1e8f) list_medium_line_plain_t3

0x755e,	// (0x000a1e8f) list_medium_line_right_icon

0x755e,	// (0x000a1e8f) list_medium_line_right_iconx2

0x755e,	// (0x000a1e8f) list_medium_line_t2

0x755e,	// (0x000a1e8f) list_medium_line_t2_g2

0x755e,	// (0x000a1e8f) list_medium_line_t2_g3

0x755e,	// (0x000a1e8f) list_medium_line_t2_right_icon

0x755e,	// (0x000a1e8f) list_medium_line_t2_right_iconx2

0x755e,	// (0x000a1e8f) list_medium_line_t3

0x755e,	// (0x000a1e8f) list_medium_line_t3_g2

0x755e,	// (0x000a1e8f) list_medium_line_t3_g3

0x755e,	// (0x000a1e8f) list_medium_line_t3_right_iconx2

0x7567,	// (0x000a1e98) list_medium_line_t4_g4

0x7570,	// (0x000a1ea1) list_medium_line_x2

0x7570,	// (0x000a1ea1) list_medium_line_x2_t2_g2

0x7570,	// (0x000a1ea1) list_medium_line_x2_t2_g3

0x7570,	// (0x000a1ea1) list_medium_line_x2_t2_g4

0x7570,	// (0x000a1ea1) list_medium_line_x2_t3

0x7570,	// (0x000a1ea1) list_medium_line_x2_t3_g2

0x7570,	// (0x000a1ea1) list_medium_line_x2_t3_g3

0x7570,	// (0x000a1ea1) list_medium_line_x2_t3_g4

0x7570,	// (0x000a1ea1) list_medium_line_x2_t4_g2

0x7570,	// (0x000a1ea1) list_medium_line_x2_t4_g4

0x7579,	// (0x000a1eaa) list_medium_line_x3

0x7579,	// (0x000a1eaa) list_medium_line_x3_t4

0x7579,	// (0x000a1eaa) list_medium_line_x3_t4_g4

0x7567,	// (0x000a1e98) list_medium_line_x4_t4

0x7567,	// (0x000a1e98) list_medium_line_x4_t4_g7

0x7567,	// (0x000a1e98) list_medium_line_x4_t5

0x7582,	// (0x000a1eb3) list_single_fs_dyc_pane_ParamLimits

0x7582,	// (0x000a1eb3) list_single_fs_dyc_pane

0x1dc0,	// (0x0009c6f1) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x4_t4_g7_g1

0x7d02,	// (0x000a2633) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d02,	// (0x000a2633) list_medium_line_x4_t4_g7_g2

0x7d0e,	// (0x000a263f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d0e,	// (0x000a263f) list_medium_line_x4_t4_g7_g3

0x7d1d,	// (0x000a264e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d1d,	// (0x000a264e) list_medium_line_x4_t4_g7_g4

0x7d29,	// (0x000a265a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d29,	// (0x000a265a) list_medium_line_x4_t4_g7_g5

0x7d38,	// (0x000a2669) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d38,	// (0x000a2669) list_medium_line_x4_t4_g7_g6

0x7d47,	// (0x000a2678) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d47,	// (0x000a2678) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9f8,	// (0x000aa329) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9f8,	// (0x000aa329) list_medium_line_x4_t4_g7_g

0x7d53,	// (0x000a2684) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d53,	// (0x000a2684) list_medium_line_x4_t4_g7_t1

0x7d68,	// (0x000a2699) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d68,	// (0x000a2699) list_medium_line_x4_t4_g7_t2

0x7d7d,	// (0x000a26ae) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d7d,	// (0x000a26ae) list_medium_line_x4_t4_g7_t3

0x7d92,	// (0x000a26c3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d92,	// (0x000a26c3) list_medium_line_x4_t4_g7_t4

0x7da4,	// (0x000a26d5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7da4,	// (0x000a26d5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa07,	// (0x000aa338) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa07,	// (0x000aa338) list_medium_line_x4_t4_g7_t

0x7db6,	// (0x000a26e7) list_single_dyc_row_pane_ParamLimits

0x7db6,	// (0x000a26e7) list_single_dyc_row_pane

0x8452,	// (0x000a2d83) call5_gesture_pane_ParamLimits

0x8452,	// (0x000a2d83) call5_gesture_pane

0x8486,	// (0x000a2db7) call5_windows_pane_ParamLimits

0x8486,	// (0x000a2db7) call5_windows_pane

0x84fd,	// (0x000a2e2e) call5_swipe_1_pane_cp_ParamLimits

0x84fd,	// (0x000a2e2e) call5_swipe_1_pane_cp

0x8509,	// (0x000a2e3a) call5_swipe_2_pane_cp_ParamLimits

0x8509,	// (0x000a2e3a) call5_swipe_2_pane_cp

0xa8d6,	// (0x000a5207) call5_image_pane_cp

0x8515,	// (0x000a2e46) popup_call5_audio_first_window_cp_ParamLimits

0x8515,	// (0x000a2e46) popup_call5_audio_first_window_cp

0xe5fd,	// (0x000a8f2e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5fd,	// (0x000a8f2e) call5_swipe_1_pane_g1_cp

0xe63d,	// (0x000a8f6e) call5_swipe_1_pane_g2_cp

0xe616,	// (0x000a8f47) call5_swipe_1_pane_t1_cp_ParamLimits

0xe616,	// (0x000a8f47) call5_swipe_1_pane_t1_cp

0xe5fd,	// (0x000a8f2e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5fd,	// (0x000a8f2e) call5_swipe_2_pane_g1_cp

0xe645,	// (0x000a8f76) call5_swipe_2_pane_g2_cp

0xe64d,	// (0x000a8f7e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe64d,	// (0x000a8f7e) call5_swipe_2_pane_t1_cp

0xa49e,	// (0x000a4dcf) main_sp_fs_email_pane

0xe662,	// (0x000a8f93) main_sp_fs_listscroll_pane_te

0xb290,	// (0x000a5bc1) popup_sp_fs_action_menu_pane_ParamLimits

0xb290,	// (0x000a5bc1) popup_sp_fs_action_menu_pane

0xcbc4,	// (0x000a74f5) bg_sp_fs_ctrlbar_pane_g1

0xe66b,	// (0x000a8f9c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe674,	// (0x000a8fa5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe67d,	// (0x000a8fae) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc4,	// (0x000a74f5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x098c,	// (0x0009b2bd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a7,	// (0x000a72d8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a7,	// (0x000a72d8) bg_sp_fs_ctrlbar_ddmenu_pane

0xe686,	// (0x000a8fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe686,	// (0x000a8fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe692,	// (0x000a8fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe692,	// (0x000a8fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0995,	// (0x0009b2c6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0995,	// (0x0009b2c6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x000a8fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe69e,	// (0x000a8fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8523,	// (0x000a2e54) list_medium_line_t2_right_icon_g1

0x852b,	// (0x000a2e5c) list_medium_line_t2_right_icon_t1

0x853b,	// (0x000a2e6c) list_medium_line_t2_right_icon_t2

0x0001,

0xfa83,	// (0x000aa3b4) list_medium_line_t2_right_icon_t

0xc7ba,	// (0x000a70eb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7ba,	// (0x000a70eb) bg_sp_fs_ctrlbar_pane

0x85a0,	// (0x000a2ed1) main_sp_fs_ctrlbar_button_pane_cp01

0x85a8,	// (0x000a2ed9) main_sp_fs_ctrlbar_ddmenu_pane

0xe6f0,	// (0x000a9021) main_sp_fs_ctrlbar_pane_g1

0xe6fc,	// (0x000a902d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x099f,	// (0x0009b2d0) main_sp_fs_ctrlbar_pane_g

0xe708,	// (0x000a9039) main_sp_fs_ctrlbar_pane_t1

0x85b2,	// (0x000a2ee3) main_sp_fs_ctrlbar_pane

0x85c8,	// (0x000a2ef9) main_sp_fs_listscroll_pane_te_cp01

0x85d9,	// (0x000a2f0a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85d9,	// (0x000a2f0a) popup_sp_fs_action_menu_pane_cp01

0xa49e,	// (0x000a4dcf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa49e,	// (0x000a4dcf) bg_sp_fs_highlight_list_pane_cp01

0xa0dd,	// (0x000a4a0e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa0dd,	// (0x000a4a0e) sp_fs_action_menu_list_gene_pane_g1

0xe738,	// (0x000a9069) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe738,	// (0x000a9069) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa88,	// (0x000aa3b9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa88,	// (0x000aa3b9) sp_fs_action_menu_list_gene_pane_g

0xa0ec,	// (0x000a4a1d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa0ec,	// (0x000a4a1d) sp_fs_action_menu_list_gene_pane_t1

0xa104,	// (0x000a4a35) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa104,	// (0x000a4a35) sp_fs_action_menu_list_gene_pane

0xe745,	// (0x000a9076) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe745,	// (0x000a9076) popup_sp_fs_action_menu_bg_pane

0xa123,	// (0x000a4a54) sp_fs_action_menu_list_pane_ParamLimits

0xa123,	// (0x000a4a54) sp_fs_action_menu_list_pane

0xa505,	// (0x000a4e36) sp_fs_scroll_pane_cp01_ParamLimits

0xa505,	// (0x000a4e36) sp_fs_scroll_pane_cp01

0x8603,	// (0x000a2f34) list_medium_line_plain_t2_t1

0x8613,	// (0x000a2f44) list_medium_line_plain_t2_t2

0x0001,

0xfa8d,	// (0x000aa3be) list_medium_line_plain_t2_t

0x8621,	// (0x000a2f52) list_medium_line_plain_t3_t1

0x8631,	// (0x000a2f62) list_medium_line_plain_t3_t2

0x863f,	// (0x000a2f70) list_medium_line_plain_t3_t3

0x0002,

0xfa92,	// (0x000aa3c3) list_medium_line_plain_t3_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t2_g2_g1

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a9b77) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a9b77) list_medium_line_x2_t2_g2_g

0x3306,	// (0x0009dc37) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3306,	// (0x0009dc37) list_medium_line_x2_t2_g2_t1

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa99,	// (0x000aa3ca) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa99,	// (0x000aa3ca) list_medium_line_x2_t2_g2_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t4_g2_g1

0x864d,	// (0x000a2f7e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x864d,	// (0x000a2f7e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa9e,	// (0x000aa3cf) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa9e,	// (0x000aa3cf) list_medium_line_x2_t4_g2_g

0x865f,	// (0x000a2f90) list_medium_line_x2_t4_g2_t1_ParamLimits

0x865f,	// (0x000a2f90) list_medium_line_x2_t4_g2_t1

0x8679,	// (0x000a2faa) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8679,	// (0x000a2faa) list_medium_line_x2_t4_g2_t2

0x868e,	// (0x000a2fbf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x868e,	// (0x000a2fbf) list_medium_line_x2_t4_g2_t3

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfaa3,	// (0x000aa3d4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfaa3,	// (0x000aa3d4) list_medium_line_x2_t4_g2_t

0x86a3,	// (0x000a2fd4) list_medium_line_t3_right_iconx2_g1

0x8523,	// (0x000a2e54) list_medium_line_t3_right_iconx2_g2

0x86ab,	// (0x000a2fdc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfaac,	// (0x000aa3dd) list_medium_line_t3_right_iconx2_g

0x86b3,	// (0x000a2fe4) list_medium_line_t3_right_iconx2_t1

0x86c3,	// (0x000a2ff4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfab3,	// (0x000aa3e4) list_medium_line_t3_right_iconx2_t

0x1dc0,	// (0x0009c6f1) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x3_t4_g4_g1

0x1dcc,	// (0x0009c6fd) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x3_t4_g4_g2

0x1e72,	// (0x0009c7a3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e72,	// (0x0009c7a3) list_medium_line_x3_t4_g4_g3

0x86d1,	// (0x000a3002) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86d1,	// (0x000a3002) list_medium_line_x3_t4_g4_g4

0x0003,

0xfab8,	// (0x000aa3e9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfab8,	// (0x000aa3e9) list_medium_line_x3_t4_g4_g

0x86dd,	// (0x000a300e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86dd,	// (0x000a300e) list_medium_line_x3_t4_g4_t1

0x86f4,	// (0x000a3025) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86f4,	// (0x000a3025) list_medium_line_x3_t4_g4_t2

0x8709,	// (0x000a303a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8709,	// (0x000a303a) list_medium_line_x3_t4_g4_t3

0x871e,	// (0x000a304f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x871e,	// (0x000a304f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfac1,	// (0x000aa3f2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfac1,	// (0x000aa3f2) list_medium_line_x3_t4_g4_t

0x873b,	// (0x000a306c) list_single_dyc_row_text_pane_t1_ParamLimits

0x873b,	// (0x000a306c) list_single_dyc_row_text_pane_t1

0x8772,	// (0x000a30a3) list_single_dyc_row_text_pane_t2_ParamLimits

0x8772,	// (0x000a30a3) list_single_dyc_row_text_pane_t2

0xa143,	// (0x000a4a74) list_single_dyc_row_text_pane_t3_ParamLimits

0xa143,	// (0x000a4a74) list_single_dyc_row_text_pane_t3

0x0005,

0xfaca,	// (0x000aa3fb) list_single_dyc_row_text_pane_t_ParamLimits

0xfaca,	// (0x000aa3fb) list_single_dyc_row_text_pane_t

0xa167,	// (0x000a4a98) list_single_dyc_row_pane_g1_ParamLimits

0xa167,	// (0x000a4a98) list_single_dyc_row_pane_g1

0xa173,	// (0x000a4aa4) list_single_dyc_row_pane_g2_ParamLimits

0xa173,	// (0x000a4aa4) list_single_dyc_row_pane_g2

0xa17f,	// (0x000a4ab0) list_single_dyc_row_pane_g3_ParamLimits

0xa17f,	// (0x000a4ab0) list_single_dyc_row_pane_g3

0xa18b,	// (0x000a4abc) list_single_dyc_row_pane_g4_ParamLimits

0xa18b,	// (0x000a4abc) list_single_dyc_row_pane_g4

0x0003,

0xfad7,	// (0x000aa408) list_single_dyc_row_pane_g_ParamLimits

0xfad7,	// (0x000aa408) list_single_dyc_row_pane_g

0xa197,	// (0x000a4ac8) list_single_dyc_row_text_pane_ParamLimits

0xa197,	// (0x000a4ac8) list_single_dyc_row_text_pane

0x9a8d,	// (0x000a43be) bg_sp_fs_scroll_pane

0xe753,	// (0x000a9084) thumb_sp_fs_scroll_pane

0x6e8f,	// (0x000a17c0) list_medium_line_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_g1

0x8895,	// (0x000a31c6) list_medium_line_t1_ParamLimits

0x8895,	// (0x000a31c6) list_medium_line_t1

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_g1

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_g2_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_g2

0x0001,

0xfae0,	// (0x000aa411) list_medium_line_x2_g_ParamLimits

0xfae0,	// (0x000aa411) list_medium_line_x2_g

0xa1b6,	// (0x000a4ae7) list_medium_line_x2_t1_ParamLimits

0xa1b6,	// (0x000a4ae7) list_medium_line_x2_t1

0x1dc0,	// (0x0009c6f1) list_medium_line_x3_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x3_g1

0x1dcc,	// (0x0009c6fd) list_medium_line_x3_g2_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x3_g2

0x0001,

0xfae0,	// (0x000aa411) list_medium_line_x3_g_ParamLimits

0xfae0,	// (0x000aa411) list_medium_line_x3_g

0xa1b6,	// (0x000a4ae7) list_medium_line_x3_t1_ParamLimits

0xa1b6,	// (0x000a4ae7) list_medium_line_x3_t1

0xe75c,	// (0x000a908d) thumb_sp_fs_scroll_pane_g1

0xe765,	// (0x000a9096) thumb_sp_fs_scroll_pane_g2

0xe76e,	// (0x000a909f) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a06,	// (0x0009b337) thumb_sp_fs_scroll_pane_g

0xe75c,	// (0x000a908d) bg_sp_fs_scroll_pane_g1

0xe765,	// (0x000a9096) bg_sp_fs_scroll_pane_g2

0xe76e,	// (0x000a909f) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a06,	// (0x0009b337) bg_sp_fs_scroll_pane_g

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1dc0,	// (0x0009c6f1) list_medium_line_x2_t3_g4_g1

0x1e66,	// (0x0009c797) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e66,	// (0x0009c797) list_medium_line_x2_t3_g4_g2

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1dcc,	// (0x0009c6fd) list_medium_line_x2_t3_g4_g3

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1dd8,	// (0x0009c709) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a9bf3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a9bf3) list_medium_line_x2_t3_g4_g

0x88aa,	// (0x000a31db) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88aa,	// (0x000a31db) list_medium_line_x2_t3_g4_t1

0x88c0,	// (0x000a31f1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88c0,	// (0x000a31f1) list_medium_line_x2_t3_g4_t2

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e0b,	// (0x0009c73c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfae5,	// (0x000aa416) list_medium_line_x2_t3_g4_t_ParamLimits

0xfae5,	// (0x000aa416) list_medium_line_x2_t3_g4_t

0x6e8f,	// (0x000a17c0) list_medium_line_g2_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_g2_g1

0x6e9b,	// (0x000a17cc) list_medium_line_g2_g2_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_g2_g2

0x0001,

0xf876,	// (0x000aa1a7) list_medium_line_g2_g_ParamLimits

0xf876,	// (0x000aa1a7) list_medium_line_g2_g

0x88d9,	// (0x000a320a) list_medium_line_g2_t1_ParamLimits

0x88d9,	// (0x000a320a) list_medium_line_g2_t1

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g2_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g2_g1

0x6e9b,	// (0x000a17cc) list_medium_line_t3_g2_g2_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_t3_g2_g2

0x0001,

0xf876,	// (0x000aa1a7) list_medium_line_t3_g2_g_ParamLimits

0xf876,	// (0x000aa1a7) list_medium_line_t3_g2_g

0x88ee,	// (0x000a321f) list_medium_line_t3_g2_t1_ParamLimits

0x88ee,	// (0x000a321f) list_medium_line_t3_g2_t1

0x8905,	// (0x000a3236) list_medium_line_t3_g2_t2_ParamLimits

0x8905,	// (0x000a3236) list_medium_line_t3_g2_t2

0x891a,	// (0x000a324b) list_medium_line_t3_g2_t3_ParamLimits

0x891a,	// (0x000a324b) list_medium_line_t3_g2_t3

0x0002,

0xfaec,	// (0x000aa41d) list_medium_line_t3_g2_t_ParamLimits

0xfaec,	// (0x000aa41d) list_medium_line_t3_g2_t

0x8523,	// (0x000a2e54) list_medium_line_right_icon_g1

0x892f,	// (0x000a3260) list_medium_line_right_icon_t1

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g1

0x893d,	// (0x000a326e) list_medium_line_t2_t1_ParamLimits

0x893d,	// (0x000a326e) list_medium_line_t2_t1

0x8957,	// (0x000a3288) list_medium_line_t2_t2_ParamLimits

0x8957,	// (0x000a3288) list_medium_line_t2_t2

0x0001,

0xfaf3,	// (0x000aa424) list_medium_line_t2_t_ParamLimits

0xfaf3,	// (0x000aa424) list_medium_line_t2_t

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g1

0x896c,	// (0x000a329d) list_medium_line_t3_t1_ParamLimits

0x896c,	// (0x000a329d) list_medium_line_t3_t1

0x8986,	// (0x000a32b7) list_medium_line_t3_t2_ParamLimits

0x8986,	// (0x000a32b7) list_medium_line_t3_t2

0x899b,	// (0x000a32cc) list_medium_line_t3_t3_ParamLimits

0x899b,	// (0x000a32cc) list_medium_line_t3_t3

0x0002,

0xfaf8,	// (0x000aa429) list_medium_line_t3_t_ParamLimits

0xfaf8,	// (0x000aa429) list_medium_line_t3_t

0x6e8f,	// (0x000a17c0) list_medium_line_g3_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_g3_g1

0x89b0,	// (0x000a32e1) list_medium_line_g3_g2_ParamLimits

0x89b0,	// (0x000a32e1) list_medium_line_g3_g2

0x6e9b,	// (0x000a17cc) list_medium_line_g3_g3_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_g3_g3

0x0002,

0xfaff,	// (0x000aa430) list_medium_line_g3_g_ParamLimits

0xfaff,	// (0x000aa430) list_medium_line_g3_g

0x89bc,	// (0x000a32ed) list_medium_line_g3_t1_ParamLimits

0x89bc,	// (0x000a32ed) list_medium_line_g3_t1

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g3_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t2_g3_g1

0x89b0,	// (0x000a32e1) list_medium_line_t2_g3_g2_ParamLimits

0x89b0,	// (0x000a32e1) list_medium_line_t2_g3_g2

0x6e9b,	// (0x000a17cc) list_medium_line_t2_g3_g3_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_t2_g3_g3

0x0002,

0xfaff,	// (0x000aa430) list_medium_line_t2_g3_g_ParamLimits

0xfaff,	// (0x000aa430) list_medium_line_t2_g3_g

0x89d1,	// (0x000a3302) list_medium_line_t2_g3_t1_ParamLimits

0x89d1,	// (0x000a3302) list_medium_line_t2_g3_t1

0x89eb,	// (0x000a331c) list_medium_line_t2_g3_t2_ParamLimits

0x89eb,	// (0x000a331c) list_medium_line_t2_g3_t2

0x0001,

0xfb06,	// (0x000aa437) list_medium_line_t2_g3_t_ParamLimits

0xfb06,	// (0x000aa437) list_medium_line_t2_g3_t

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g3_g1_ParamLimits

0x6e8f,	// (0x000a17c0) list_medium_line_t3_g3_g1

0x89b0,	// (0x000a32e1) list_medium_line_t3_g3_g2_ParamLimits

0x89b0,	// (0x000a32e1) list_medium_line_t3_g3_g2

0x6e9b,	// (0x000a17cc) list_medium_line_t3_g3_g3_ParamLimits

0x6e9b,	// (0x000a17cc) list_medium_line_t3_g3_g3

0x0002,

0xfaff,	// (0x000aa430) list_medium_line_t3_g3_g_ParamLimits

0xfaff,	// (0x000aa430) list_medium_line_t3_g3_g

0x8a00,	// (0x000a3331) list_medium_line_t3_g3_t1_ParamLimits

0x8a00,	// (0x000a3331) list_medium_line_t3_g3_t1

0x8a19,	// (0x000a334a) list_medium_line_t3_g3_t2_ParamLimits

0x8a19,	// (0x000a334a) list_medium_line_t3_g3_t2

0x8a2f,	// (0x000a3360) list_medium_line_t3_g3_t3_ParamLimits

0x8a2f,	// (0x000a3360) list_medium_line_t3_g3_t3

0x0002,

0xfb0b,	// (0x000aa43c) list_medium_line_t3_g3_t_ParamLimits

0xfb0b,	// (0x000aa43c) list_medium_line_t3_g3_t

0x86a3,	// (0x000a2fd4) list_medium_line_right_iconx2_g1

0x8523,	// (0x000a2e54) list_medium_line_right_iconx2_g2

0x0001,

0xfb12,	// (0x000aa443) list_medium_line_right_iconx2_g

0x8a45,	// (0x000a3376) list_medium_line_right_iconx2_t1

0x86a3,	// (0x000a2fd4) list_medium_line_t2_right_iconx2_g1

0x8523,	// (0x000a2e54) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb12,	// (0x000aa443) list_medium_line_t2_right_iconx2_g

0x8a53,	// (0x000a3384) list_medium_line_t2_right_iconx2_t1

0x8a63,	// (0x000a3394) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb17,	// (0x000aa448) list_medium_line_t2_right_iconx2_t

0x8a71,	// (0x000a33a2) list_medium_line_x4_t4_t1

0x8a7f,	// (0x000a33b0) list_medium_line_x4_t4_t2

0x8a8f,	// (0x000a33c0) list_medium_line_x4_t4_t3

0x8a9f,	// (0x000a33d0) list_medium_line_x4_t4_t4

0x0003,

0xfb1c,	// (0x000aa44d) list_medium_line_x4_t4_t

0x8ad9,	// (0x000a340a) tport_appsw_pane_ParamLimits

0x8ad9,	// (0x000a340a) tport_appsw_pane

0x8ae7,	// (0x000a3418) tport_contact_pane_ParamLimits

0x8ae7,	// (0x000a3418) tport_contact_pane

0x8af7,	// (0x000a3428) tport_listscroll_pane_ParamLimits

0x8af7,	// (0x000a3428) tport_listscroll_pane

0x8b07,	// (0x000a3438) cell_tport_appsw_pane_ParamLimits

0x8b07,	// (0x000a3438) cell_tport_appsw_pane

0xce89,	// (0x000a77ba) tport_appsw_pane_g1_ParamLimits

0xce89,	// (0x000a77ba) tport_appsw_pane_g1

0xe777,	// (0x000a90a8) tport_contact_pane_g1

0xe0ea,	// (0x000a8a1b) tport_contact_pane_t1

0xe780,	// (0x000a90b1) tport_contact_pane_t2

0x0001,

0x0a4d,	// (0x0009b37e) tport_contact_pane_t

0xe78e,	// (0x000a90bf) list_tport_pane

0xe797,	// (0x000a90c8) scroll_pane_cp_030

0x8b3a,	// (0x000a346b) cell_tport_appsw_pane_g1

0x8b4a,	// (0x000a347b) cell_tport_appsw_pane_t1

0x8b58,	// (0x000a3489) grid_highlight_pane_cp019

0x8b60,	// (0x000a3491) list_tport_double_graphic_pane_ParamLimits

0x8b60,	// (0x000a3491) list_tport_double_graphic_pane

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp023_ParamLimits

0xa49e,	// (0x000a4dcf) list_highlight_pane_cp023

0x8b72,	// (0x000a34a3) list_tport_double_graphic_pane_g1_ParamLimits

0x8b72,	// (0x000a34a3) list_tport_double_graphic_pane_g1

0x8b7f,	// (0x000a34b0) list_tport_double_graphic_pane_t1_ParamLimits

0x8b7f,	// (0x000a34b0) list_tport_double_graphic_pane_t1

0x8b94,	// (0x000a34c5) list_tport_double_graphic_pane_t2_ParamLimits

0x8b94,	// (0x000a34c5) list_tport_double_graphic_pane_t2

0x0001,

0xfb2c,	// (0x000aa45d) list_tport_double_graphic_pane_t_ParamLimits

0xfb2c,	// (0x000aa45d) list_tport_double_graphic_pane_t

0x9a8d,	// (0x000a43be) main_cale_note_pane

0x663a,	// (0x000a0f6b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x663a,	// (0x000a0f6b) cell_vitu2_function_top_wide_pane_cp01

0x811d,	// (0x000a2a4e) wait_bar_pane_cp05_ParamLimits

0xa49e,	// (0x000a4dcf) listscroll_cmail_pane

0xe7a0,	// (0x000a90d1) list_cmail_pane

0x8ba6,	// (0x000a34d7) list_cmail_body_pane

0x8bcd,	// (0x000a34fe) list_single_cmail_header_caption_pane

0x8c01,	// (0x000a3532) list_single_cmail_header_detail_pane_ParamLimits

0x8c01,	// (0x000a3532) list_single_cmail_header_detail_pane

0xe7b0,	// (0x000a90e1) list_single_cmail_header_caption_pane_t1

0x8c3c,	// (0x000a356d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c3c,	// (0x000a356d) list_single_cmail_header_detail_pane_g1

0xa52b,	// (0x000a4e5c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa52b,	// (0x000a4e5c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb31,	// (0x000aa462) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb31,	// (0x000aa462) list_single_cmail_header_detail_pane_g

0xa1cc,	// (0x000a4afd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa1cc,	// (0x000a4afd) list_single_cmail_header_detail_pane_t1

0xa22c,	// (0x000a4b5d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa22c,	// (0x000a4b5d) list_single_cmail_header_editor_pane_bg

0xe7d4,	// (0x000a9105) list_cmail_body_pane_g1

0xe7dd,	// (0x000a910e) list_cmail_body_pane_t1

0xd627,	// (0x000a7f58) list_single_cmail_header_editor_pane_bg_g1

0xab2f,	// (0x000a5460) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd637,	// (0x000a7f68) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd62f,	// (0x000a7f60) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd85d,	// (0x000a818e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd657,	// (0x000a7f88) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd647,	// (0x000a7f78) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd64f,	// (0x000a7f80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab0f,	// (0x000a5440) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c52,	// (0x000a3583) calenote_gesture_pane_ParamLimits

0x8c52,	// (0x000a3583) calenote_gesture_pane

0x8c6c,	// (0x000a359d) calenote_window_pane_ParamLimits

0x8c6c,	// (0x000a359d) calenote_window_pane

0xe7eb,	// (0x000a911c) popup_note_window_cp01

0x8c84,	// (0x000a35b5) calenote_swipe_1_pane_ParamLimits

0x8c84,	// (0x000a35b5) calenote_swipe_1_pane

0x8509,	// (0x000a2e3a) calenote_swipe_2_pane_ParamLimits

0x8509,	// (0x000a2e3a) calenote_swipe_2_pane

0xe5fd,	// (0x000a8f2e) calenote_swipe_1_pane_g1_ParamLimits

0xe5fd,	// (0x000a8f2e) calenote_swipe_1_pane_g1

0xe60a,	// (0x000a8f3b) calenote_swipe_1_pane_g2_ParamLimits

0xe60a,	// (0x000a8f3b) calenote_swipe_1_pane_g2

0x0001,

0x0982,	// (0x0009b2b3) calenote_swipe_1_pane_g_ParamLimits

0x0982,	// (0x0009b2b3) calenote_swipe_1_pane_g

0xe7fd,	// (0x000a912e) calenote_swipe_1_pane_t1_ParamLimits

0xe7fd,	// (0x000a912e) calenote_swipe_1_pane_t1

0xe5fd,	// (0x000a8f2e) calenote_swipe_2_pane_g1_ParamLimits

0xe5fd,	// (0x000a8f2e) calenote_swipe_2_pane_g1

0xe81c,	// (0x000a914d) calenote_swipe_2_pane_g2_ParamLimits

0xe81c,	// (0x000a914d) calenote_swipe_2_pane_g2

0x0001,

0x0a6a,	// (0x0009b39b) calenote_swipe_2_pane_g_ParamLimits

0x0a6a,	// (0x0009b39b) calenote_swipe_2_pane_g

0xe828,	// (0x000a9159) calenote_swipe_2_pane_t1_ParamLimits

0xe828,	// (0x000a9159) calenote_swipe_2_pane_t1

0x9a8d,	// (0x000a43be) main_mup_navstr_pane

0x5374,	// (0x0009fca5) main_mup3_pane_t7_ParamLimits

0x5374,	// (0x0009fca5) main_mup3_pane_t7

0x5d9e,	// (0x000a06cf) main_mp4_pane_g6_ParamLimits

0x5d9e,	// (0x000a06cf) main_mp4_pane_g6

0x611e,	// (0x000a0a4f) main_image3_pane_t4_ParamLimits

0x611e,	// (0x000a0a4f) main_image3_pane_t4

0x8c97,	// (0x000a35c8) popup_navstr_preview_pane_ParamLimits

0x8c97,	// (0x000a35c8) popup_navstr_preview_pane

0x8ca3,	// (0x000a35d4) scroll_navstr_pane_ParamLimits

0x8ca3,	// (0x000a35d4) scroll_navstr_pane

0x9a8d,	// (0x000a43be) bg_popup_preview_window_pane_cp04

0xe84f,	// (0x000a9180) popup_navstr_preview_pane_t1

0x8caf,	// (0x000a35e0) scroll_navstr_pane_g1_ParamLimits

0x8caf,	// (0x000a35e0) scroll_navstr_pane_g1

0x8cbc,	// (0x000a35ed) scroll_navstr_pane_t1_ParamLimits

0x8cbc,	// (0x000a35ed) scroll_navstr_pane_t1

0xe7f4,	// (0x000a9125) bg_button_pane_cp014

0xe7f4,	// (0x000a9125) bg_button_pane_cp030

0x83f8,	// (0x000a2d29) list_double_fisheye_pane_g4_ParamLimits

0x83f8,	// (0x000a2d29) list_double_fisheye_pane_g4

0x8404,	// (0x000a2d35) list_double_fisheye_pane_g5_ParamLimits

0x8404,	// (0x000a2d35) list_double_fisheye_pane_g5

0xc2ad,	// (0x000a6bde) sp_fs_scroll_pane_cp03

0xe6f0,	// (0x000a9021) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6fc,	// (0x000a902d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x099f,	// (0x0009b2d0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe708,	// (0x000a9039) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7a8,	// (0x000a90d9) sp_fs_scroll_pane_cp02

0xa81e,	// (0x000a514f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa81e,	// (0x000a514f) popup_sp_fs_calendar_preview_list_single_pane

0x9a8d,	// (0x000a43be) main_cam6_pano_pane

0x437a,	// (0x0009ecab) main_mup3_pane_ParamLimits

0x9a8d,	// (0x000a43be) main_phacti_pane

0x7ff2,	// (0x000a2923) bg_button_pane_cp11

0x800a,	// (0x000a293b) main_mobtv_info_pane_g2_ParamLimits

0x800a,	// (0x000a293b) main_mobtv_info_pane_g2

0x0001,

0xfa30,	// (0x000aa361) main_mobtv_info_pane_g_ParamLimits

0xfa30,	// (0x000aa361) main_mobtv_info_pane_g

0x81bc,	// (0x000a2aed) sc_clock_pane_t5_ParamLimits

0x81bc,	// (0x000a2aed) sc_clock_pane_t5

0x825f,	// (0x000a2b90) main_radioblah_pane_g1_ParamLimits

0xe52e,	// (0x000a8e5f) main_radioblah_pane_t3_ParamLimits

0xe52e,	// (0x000a8e5f) main_radioblah_pane_t3

0xe546,	// (0x000a8e77) main_radioblah_pane_t4_ParamLimits

0xe546,	// (0x000a8e77) main_radioblah_pane_t4

0x827d,	// (0x000a2bae) main_radioblah_text_pane_ParamLimits

0x827d,	// (0x000a2bae) main_radioblah_text_pane

0x828a,	// (0x000a2bbb) main_radioblah_info_pane_g1_ParamLimits

0x831f,	// (0x000a2c50) main_radioblah_info_pane_t4_ParamLimits

0x831f,	// (0x000a2c50) main_radioblah_info_pane_t4

0xa49e,	// (0x000a4dcf) main_sp_fs_calendar_pane

0x8cce,	// (0x000a35ff) main_phacti_pane_g1

0x8cd6,	// (0x000a3607) phacti_note_pane_ParamLimits

0x8cd6,	// (0x000a3607) phacti_note_pane

0xe866,	// (0x000a9197) phacti_term_pane_ParamLimits

0xe866,	// (0x000a9197) phacti_term_pane

0xe889,	// (0x000a91ba) phacti_note_pane_t1_ParamLimits

0xe889,	// (0x000a91ba) phacti_note_pane_t1

0xa243,	// (0x000a4b74) phacti_term_pane_g1

0xa24b,	// (0x000a4b7c) phacti_term_pane_t1_ParamLimits

0xa24b,	// (0x000a4b7c) phacti_term_pane_t1

0xe8a0,	// (0x000a91d1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a8,	// (0x000a91d9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb42,	// (0x000aa473) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b0,	// (0x000a91e1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b0,	// (0x000a91e1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c6,	// (0x000a91f7) aid_popup_sp_fs_bg_corner_pane

0xcbc4,	// (0x000a74f5) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a8d,	// (0x000a43be) popup_sp_fs_calendar_preview_bg_pane

0xa275,	// (0x000a4ba6) popup_sp_fs_calendar_preview_list_pane

0xc7ba,	// (0x000a70eb) bg_main_sp_fs_cale_pane_ParamLimits

0xc7ba,	// (0x000a70eb) bg_main_sp_fs_cale_pane

0xa27d,	// (0x000a4bae) listscroll_cale_mrui_pane_ParamLimits

0xa27d,	// (0x000a4bae) listscroll_cale_mrui_pane

0xa292,	// (0x000a4bc3) listscroll_sp_fs_schedule_track_pane

0xa29b,	// (0x000a4bcc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa29b,	// (0x000a4bcc) main_sp_fs_ctrlbar_pane_cp01

0xe8ce,	// (0x000a91ff) main_sp_fs_ribbon_pane

0xa2ae,	// (0x000a4bdf) popup_sp_fs_cale_preview_window

0x8d39,	// (0x000a366a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d39,	// (0x000a366a) list_single_sp_fs_schedule_track_pane

0xe87b,	// (0x000a91ac) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe87b,	// (0x000a91ac) bg_sp_fs_highlight_list_pane_cp03

0x8d67,	// (0x000a3698) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d67,	// (0x000a3698) list_single_sp_fs_schedule_track_pane_g1

0x8d73,	// (0x000a36a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d73,	// (0x000a36a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb47,	// (0x000aa478) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb47,	// (0x000aa478) list_single_sp_fs_schedule_track_pane_g

0x8d7f,	// (0x000a36b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d7f,	// (0x000a36b0) list_single_sp_fs_schedule_track_pane_t1

0x8d97,	// (0x000a36c8) sp_fs_schedule_track_pane_ParamLimits

0x8d97,	// (0x000a36c8) sp_fs_schedule_track_pane

0xe8d6,	// (0x000a9207) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x000a920f) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x000a9217) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x000a921f) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x000a9227) sp_fs_schedule_track_pane_g5

0x0004,

0xfb4c,	// (0x000aa47d) sp_fs_schedule_track_pane_g

0xd627,	// (0x000a7f58) bg_sp_fs_schedule_viewer_highlight_g1

0xab2f,	// (0x000a5460) bg_sp_fs_schedule_viewer_highlight_g2

0xd62f,	// (0x000a7f60) bg_sp_fs_schedule_viewer_highlight_g3

0xd637,	// (0x000a7f68) bg_sp_fs_schedule_viewer_highlight_g4

0xd85d,	// (0x000a818e) bg_sp_fs_schedule_viewer_highlight_g5

0xd647,	// (0x000a7f78) bg_sp_fs_schedule_viewer_highlight_g6

0xd64f,	// (0x000a7f80) bg_sp_fs_schedule_viewer_highlight_g7

0xd657,	// (0x000a7f88) bg_sp_fs_schedule_viewer_highlight_g8

0xab0f,	// (0x000a5440) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb57,	// (0x000aa488) bg_sp_fs_schedule_viewer_highlight_g

0x9a8d,	// (0x000a43be) bg_main_sp_fs_ribbon_pane

0x8da7,	// (0x000a36d8) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x000a922f) main_sp_fs_ribbon_pane_t1

0x8db0,	// (0x000a36e1) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x000a923e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb6a,	// (0x000aa49b) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x000a924d) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x000a9255) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x000a925e) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x000a9267) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb71,	// (0x000aa4a2) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x000a926f) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x000a9278) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x000a9281) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb78,	// (0x000aa4a9) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x000a928a) list_cale_mrui_pane

0x8dc1,	// (0x000a36f2) sp_fs_scroll_pane_cp07_ParamLimits

0x8dc1,	// (0x000a36f2) sp_fs_scroll_pane_cp07

0x8ddd,	// (0x000a370e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ddd,	// (0x000a370e) bg_sp_fs_schedule_viewer_highlight

0xe966,	// (0x000a9297) list_single_sp_fs_schedule_track_pane_cp01

0xe96e,	// (0x000a929f) list_sp_fs_schedule_track_pane

0xe976,	// (0x000a92a7) sp_fs_scroll_pane_cp06_ParamLimits

0xe976,	// (0x000a92a7) sp_fs_scroll_pane_cp06

0xcbc4,	// (0x000a74f5) bgmain_sp_fs_calendar_pane_g1

0x8dea,	// (0x000a371b) list_single_cale_mrui_pane_ParamLimits

0x8dea,	// (0x000a371b) list_single_cale_mrui_pane

0xa2c0,	// (0x000a4bf1) list_single_cale_mrui_row_pane_ParamLimits

0xa2c0,	// (0x000a4bf1) list_single_cale_mrui_row_pane

0xa2cd,	// (0x000a4bfe) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2cd,	// (0x000a4bfe) list_single_cale_mrui_row_pane_g1

0xa305,	// (0x000a4c36) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa305,	// (0x000a4c36) list_single_cale_mrui_row_pane_t1

0x8e1b,	// (0x000a374c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e1b,	// (0x000a374c) list_single_cale_mrui_row_pane_t2

0xa317,	// (0x000a4c48) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa317,	// (0x000a4c48) list_single_cale_mrui_row_pane_t3

0xa346,	// (0x000a4c77) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa346,	// (0x000a4c77) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb86,	// (0x000aa4b7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb86,	// (0x000aa4b7) list_single_cale_mrui_row_pane_t

0x8e81,	// (0x000a37b2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e81,	// (0x000a37b2) list_single_cmail_header_editor_pane_bg_cp01

0x8ea3,	// (0x000a37d4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ea3,	// (0x000a37d4) list_single_cmail_header_editor_pane_bg_cp02

0x8ebf,	// (0x000a37f0) main_radioblah_text_pane_t1_ParamLimits

0x8ebf,	// (0x000a37f0) main_radioblah_text_pane_t1

0xe995,	// (0x000a92c6) cam6_indi_pane_cp01

0xe99d,	// (0x000a92ce) cam6_mode_pane_cp01

0xe9a5,	// (0x000a92d6) cam6_pano_pane

0xe9ae,	// (0x000a92df) cam6_zoom_pane_cp01

0xe9b6,	// (0x000a92e7) cam6_pano_image_pane

0xe9c1,	// (0x000a92f2) cam6_pano_pane_g1

0xe291,	// (0x000a8bc2) cam6_pano_pane_g2

0xe9ca,	// (0x000a92fb) cam6_pano_pane_g3

0xe9d3,	// (0x000a9304) cam6_pano_pane_g4

0xd182,	// (0x000a7ab3) cam6_pano_pane_g5

0xe9dc,	// (0x000a930d) cam6_pano_pane_g6

0xe9e6,	// (0x000a9317) cam6_pano_pane_g7

0xe9ee,	// (0x000a931f) cam6_pano_pane_g8

0xe9f7,	// (0x000a9328) cam6_pano_pane_g9

0x0008,

0x0ac1,	// (0x0009b3f2) cam6_pano_pane_g

0x9a8d,	// (0x000a43be) main_browser_tag_pane

0xe847,	// (0x000a9178) grid_navstr_albumart_pane

0xea02,	// (0x000a9333) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x000a9333) cell_navstr_albumart_pane

0xb504,	// (0x000a5e35) cell_navstr_albumart_pane_g1

0xc5cb,	// (0x000a6efc) cell_navstr_albumart_pane_g2

0xc5db,	// (0x000a6f0c) cell_navstr_albumart_pane_g3

0xc5d3,	// (0x000a6f04) cell_navstr_albumart_pane_g4

0x0003,

0x0ad4,	// (0x0009b405) cell_navstr_albumart_pane_g

0x8eda,	// (0x000a380b) bt_list_pane_ParamLimits

0x8eda,	// (0x000a380b) bt_list_pane

0xea24,	// (0x000a9355) bt_list_pane_t1

0xea33,	// (0x000a9364) bt_list_pane_t2

0x0001,

0x0add,	// (0x0009b40e) bt_list_pane_t

0x9a8d,	// (0x000a43be) main_cale_prevew_pane

0x8efe,	// (0x000a382f) popup_cale_preview_window_ParamLimits

0x8efe,	// (0x000a382f) popup_cale_preview_window

0xa49e,	// (0x000a4dcf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa49e,	// (0x000a4dcf) bg_popup_preview_window_pane_cp05

0xea42,	// (0x000a9373) list_cale_preview_pane_ParamLimits

0xea42,	// (0x000a9373) list_cale_preview_pane

0xea4e,	// (0x000a937f) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x000a937f) list_double_cale_preview_pane

0xea60,	// (0x000a9391) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x000a9391) list_single_cale_preview_pane

0xea74,	// (0x000a93a5) list_single_cale_preview_pane_g1

0xea7c,	// (0x000a93ad) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x000a93ad) list_single_cale_preview_pane_t1

0xea91,	// (0x000a93c2) list_double_cale_preview_pane_g1

0xea99,	// (0x000a93ca) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x000a93ca) list_double_cale_preview_pane_t1

0xeaae,	// (0x000a93df) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x000a93df) list_double_cale_preview_pane_t2

0x0001,

0x0ae2,	// (0x0009b413) list_double_cale_preview_pane_t_ParamLimits

0x0ae2,	// (0x0009b413) list_double_cale_preview_pane_t

0x9a8d,	// (0x000a43be) main_ezdial_pane

0xa49e,	// (0x000a4dcf) main_sp_fs_email_pane_ParamLimits

0x8549,	// (0x000a2e7a) cmail_ddmenu_btn01_pane_ParamLimits

0x8549,	// (0x000a2e7a) cmail_ddmenu_btn01_pane

0x8566,	// (0x000a2e97) cmail_ddmenu_btn02_pane_ParamLimits

0x8566,	// (0x000a2e97) cmail_ddmenu_btn02_pane

0x8584,	// (0x000a2eb5) cmail_ddmenu_btn03_pane_ParamLimits

0x8584,	// (0x000a2eb5) cmail_ddmenu_btn03_pane

0x85b2,	// (0x000a2ee3) main_sp_fs_ctrlbar_pane_ParamLimits

0x85c8,	// (0x000a2ef9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ba6,	// (0x000a34d7) list_cmail_body_pane_ParamLimits

0xe7be,	// (0x000a90ef) bg_button_pane_cp12

0xe7c7,	// (0x000a90f8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7c7,	// (0x000a90f8) list_single_cmail_header_detail_pane_g3

0xa208,	// (0x000a4b39) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa208,	// (0x000a4b39) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb38,	// (0x000aa469) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb38,	// (0x000aa469) list_single_cmail_header_detail_pane_t

0xa260,	// (0x000a4b91) phacti_term_pane_t2_ParamLimits

0xa260,	// (0x000a4b91) phacti_term_pane_t2

0x0001,

0xfb3d,	// (0x000aa46e) phacti_term_pane_t_ParamLimits

0xfb3d,	// (0x000aa46e) phacti_term_pane_t

0xeac6,	// (0x000a93f7) aid_size_list_single_double

0x8f15,	// (0x000a3846) popup_ezdial_listscroll_window

0x8f38,	// (0x000a3869) popup_number_entry_window_cp01

0xa8d6,	// (0x000a5207) bg_popup_call_pane_cp09

0xead2,	// (0x000a9403) ezdial_list_pane

0xeada,	// (0x000a940b) scroll_pane_cp23

0xc9a7,	// (0x000a72d8) bg_button_pane_cp028_ParamLimits

0xc9a7,	// (0x000a72d8) bg_button_pane_cp028

0x8f46,	// (0x000a3877) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f46,	// (0x000a3877) cmail_ddmenu_btn01_pane_g1

0x8f58,	// (0x000a3889) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f58,	// (0x000a3889) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb8f,	// (0x000aa4c0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb8f,	// (0x000aa4c0) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x000a9413) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x000a9413) cmail_ddmenu_btn01_pane_t1

0xc7ba,	// (0x000a70eb) bg_button_pane_cp029_ParamLimits

0xc7ba,	// (0x000a70eb) bg_button_pane_cp029

0x8f64,	// (0x000a3895) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f64,	// (0x000a3895) cmail_ddmenu_btn02_pane_g1

0x8f7c,	// (0x000a38ad) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f7c,	// (0x000a38ad) cmail_ddmenu_btn02_pane_t1

0xe87b,	// (0x000a91ac) bg_button_pane_cp031_ParamLimits

0xe87b,	// (0x000a91ac) bg_button_pane_cp031

0x8f64,	// (0x000a3895) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f64,	// (0x000a3895) cmail_ddmenu_btn03_pane_g1

0x8f7c,	// (0x000a38ad) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f7c,	// (0x000a38ad) cmail_ddmenu_btn03_pane_t1

0x5fbb,	// (0x000a08ec) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fd5,	// (0x000a0906) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fd5,	// (0x000a0906) cell_dialer2_keypad_pane_t1_copy1

0x7e77,	// (0x000a27a8) ncimui_group_button_pane

0xa49e,	// (0x000a4dcf) main_sp_fs_calendar_pane_ParamLimits

0x8bcd,	// (0x000a34fe) list_single_cmail_header_caption_pane_ParamLimits

0xa537,	// (0x000a4e68) aid_recal_txt_sm_pane

0x9a8d,	// (0x000a43be) mian_recal_day_pane

0xa2ae,	// (0x000a4bdf) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x000a9428) list_recal_day_pane

0xa55b,	// (0x000a4e8c) list_single_recal_day_pane_ParamLimits

0xa55b,	// (0x000a4e8c) list_single_recal_day_pane

0xeb1e,	// (0x000a944f) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x000a944f) list_single_recal_day_pane_g1

0xa56d,	// (0x000a4e9e) list_single_recal_day_pane_g2_ParamLimits

0xa56d,	// (0x000a4e9e) list_single_recal_day_pane_g2

0xa57d,	// (0x000a4eae) list_single_recal_day_pane_g3_ParamLimits

0xa57d,	// (0x000a4eae) list_single_recal_day_pane_g3

0x8fa0,	// (0x000a38d1) list_single_recal_day_pane_g4_ParamLimits

0x8fa0,	// (0x000a38d1) list_single_recal_day_pane_g4

0xa589,	// (0x000a4eba) list_single_recal_day_pane_g5_ParamLimits

0xa589,	// (0x000a4eba) list_single_recal_day_pane_g5

0xa599,	// (0x000a4eca) list_single_recal_day_pane_g6_ParamLimits

0xa599,	// (0x000a4eca) list_single_recal_day_pane_g6

0x0004,

0xfb9e,	// (0x000aa4cf) list_single_recal_day_pane_g_ParamLimits

0xfb9e,	// (0x000aa4cf) list_single_recal_day_pane_g

0xa5ad,	// (0x000a4ede) list_single_recal_day_pane_t1

0xa5bf,	// (0x000a4ef0) list_single_recal_day_pane_t2

0x0001,

0xfba9,	// (0x000aa4da) list_single_recal_day_pane_t

0x8fc0,	// (0x000a38f1) ncimui_query_button_pane_ParamLimits

0x8fc0,	// (0x000a38f1) ncimui_query_button_pane

0x8fd0,	// (0x000a3901) ncimui_query_button_pane_t1_ParamLimits

0x8fd0,	// (0x000a3901) ncimui_query_button_pane_t1

0xeb2a,	// (0x000a945b) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x000a945b) ncimui_query_button_pane_t2

0x0001,

0xfbae,	// (0x000aa4df) ncimui_query_button_pane_t_ParamLimits

0xfbae,	// (0x000aa4df) ncimui_query_button_pane_t

0x8fe3,	// (0x000a3914) query_button_pane_ParamLimits

0x8fe3,	// (0x000a3914) query_button_pane

0x9a8d,	// (0x000a43be) bg_button_pane_cp0028

0xeb3d,	// (0x000a946e) query_button_pane_t1

0x4396,	// (0x0009ecc7) main_tport_pane_ParamLimits

0x8aaf,	// (0x000a33e0) bg_popup_window_pane_cp01_ParamLimits

0x8aaf,	// (0x000a33e0) bg_popup_window_pane_cp01

0x8abd,	// (0x000a33ee) heading_pane_cp08_ParamLimits

0x8abd,	// (0x000a33ee) heading_pane_cp08

0x8acb,	// (0x000a33fc) heading_pane_cp07_ParamLimits

0x8acb,	// (0x000a33fc) heading_pane_cp07

0x8b3a,	// (0x000a346b) cell_tport_appsw_pane_g2

0x0002,

0xfb25,	// (0x000aa456) cell_tport_appsw_pane_g

0x3a96,	// (0x0009e3c7) input_candi_list_open_g1

0xacfa,	// (0x000a562b) list_cale_time_pane_g6_ParamLimits

0xacfa,	// (0x000a562b) list_cale_time_pane_g6

0x4e16,	// (0x0009f747) aid_size_touch_calib_1_ParamLimits

0x4e16,	// (0x0009f747) aid_size_touch_calib_1

0x4e22,	// (0x0009f753) aid_size_touch_calib_2_ParamLimits

0x4e22,	// (0x0009f753) aid_size_touch_calib_2

0x4e30,	// (0x0009f761) aid_size_touch_calib_3_ParamLimits

0x4e30,	// (0x0009f761) aid_size_touch_calib_3

0x4e40,	// (0x0009f771) aid_size_touch_calib_4_ParamLimits

0x4e40,	// (0x0009f771) aid_size_touch_calib_4

0x4e4e,	// (0x0009f77f) main_touch_calib_button_group_pane_ParamLimits

0x4e4e,	// (0x0009f77f) main_touch_calib_button_group_pane

0x4e5c,	// (0x0009f78d) main_touch_calib_pane_g1_ParamLimits

0x4e68,	// (0x0009f799) main_touch_calib_pane_g2_ParamLimits

0x4e74,	// (0x0009f7a5) main_touch_calib_pane_g3_ParamLimits

0x4e80,	// (0x0009f7b1) main_touch_calib_pane_g4_ParamLimits

0xf646,	// (0x000a9f77) main_touch_calib_pane_g_ParamLimits

0x4e8c,	// (0x0009f7bd) main_touch_calib_pane_t1_ParamLimits

0x4ea5,	// (0x0009f7d6) main_touch_calib_pane_t2_ParamLimits

0x4ebe,	// (0x0009f7ef) main_touch_calib_pane_t3_ParamLimits

0x4ed4,	// (0x0009f805) main_touch_calib_pane_t4_ParamLimits

0x4eea,	// (0x0009f81b) main_touch_calib_pane_t5_ParamLimits

0xf64f,	// (0x000a9f80) main_touch_calib_pane_t_ParamLimits

0xcf24,	// (0x000a7855) list_single_fp_cale_pane_g3_ParamLimits

0xcf24,	// (0x000a7855) list_single_fp_cale_pane_g3

0x437a,	// (0x0009ecab) bg_button_pane_cp012_ParamLimits

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp03_ParamLimits

0x6e0f,	// (0x000a1740) cell_vitu2_function_top_pane_g1_ParamLimits

0x437a,	// (0x0009ecab) bg_vkb2_func_pane_cp04_ParamLimits

0x7dff,	// (0x000a2730) main_ncimui_button_group_pane_ParamLimits

0x7dff,	// (0x000a2730) main_ncimui_button_group_pane

0x7e65,	// (0x000a2796) main_ncimui_pane_t3_ParamLimits

0x7e65,	// (0x000a2796) main_ncimui_pane_t3

0xe85d,	// (0x000a918e) phacti_button_group_pane

0xeac6,	// (0x000a93f7) aid_size_list_single_double_ParamLimits

0x8f15,	// (0x000a3846) popup_ezdial_listscroll_window_ParamLimits

0x8f38,	// (0x000a3869) popup_number_entry_window_cp01_ParamLimits

0x8ff0,	// (0x000a3921) phacti_button_pane_ParamLimits

0x8ff0,	// (0x000a3921) phacti_button_pane

0x9a8d,	// (0x000a43be) bg_button_pane_cp14

0xeb4b,	// (0x000a947c) phacti_button_pane_t1

0x9001,	// (0x000a3932) main_touch_calib_button_pane_ParamLimits

0x9001,	// (0x000a3932) main_touch_calib_button_pane

0xa708,	// (0x000a5039) bg_button_pane_cp18_ParamLimits

0xa708,	// (0x000a5039) bg_button_pane_cp18

0xeb59,	// (0x000a948a) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x000a948a) main_touch_calib_button_pane_t1

0xeb6f,	// (0x000a94a0) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x000a94a0) main_touch_calib_button_pane_t2

0x0001,

0x0b0b,	// (0x0009b43c) main_touch_calib_button_pane_t_ParamLimits

0x0b0b,	// (0x0009b43c) main_touch_calib_button_pane_t

0x9a8d,	// (0x000a43be) cell_ncimui_button_pane

0x9a8d,	// (0x000a43be) bg_button_pane_cp032

0xeb8d,	// (0x000a94be) cell_ncimui_button_pane_t1

0x6031,	// (0x000a0962) image3_infobar_pane_ParamLimits

0x6031,	// (0x000a0962) image3_infobar_pane

0x81de,	// (0x000a2b0f) fs_bigclock_status_pane_ParamLimits

0x81de,	// (0x000a2b0f) fs_bigclock_status_pane

0x81eb,	// (0x000a2b1c) main_fs_bigclock_clock_pane_ParamLimits

0x81eb,	// (0x000a2b1c) main_fs_bigclock_clock_pane

0x8205,	// (0x000a2b36) main_fs_bigclock_indi_pane_ParamLimits

0x8205,	// (0x000a2b36) main_fs_bigclock_indi_pane

0x822d,	// (0x000a2b5e) main_fs_bigclock_swipe_pane_ParamLimits

0x822d,	// (0x000a2b5e) main_fs_bigclock_swipe_pane

0x9a8d,	// (0x000a43be) main_fs_clock_dumped_data

0xe39e,	// (0x000a8ccf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe39e,	// (0x000a8ccf) list_single_fs_bigclock_indicator_pane_g1

0xe3ba,	// (0x000a8ceb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ba,	// (0x000a8ceb) list_single_fs_bigclock_indicator_pane_g2

0xe3d4,	// (0x000a8d05) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3d4,	// (0x000a8d05) list_single_fs_bigclock_indicator_pane_g3

0xe3ee,	// (0x000a8d1f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3ee,	// (0x000a8d1f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0933,	// (0x0009b264) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0933,	// (0x0009b264) list_single_fs_bigclock_indicator_pane_g

0xe419,	// (0x000a8d4a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe419,	// (0x000a8d4a) list_single_fs_bigclock_indicator_pane_t1

0xe441,	// (0x000a8d72) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe441,	// (0x000a8d72) list_single_fs_bigclock_indicator_pane_t2

0xe469,	// (0x000a8d9a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe469,	// (0x000a8d9a) list_single_fs_bigclock_indicator_pane_t3

0xe491,	// (0x000a8dc2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe491,	// (0x000a8dc2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x093e,	// (0x0009b26f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x093e,	// (0x0009b26f) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x000a94cc) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x000a94cc) image3_infobar_fav_pane

0xebab,	// (0x000a94dc) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x000a94dc) image3_infobar_loc_pane

0xebbf,	// (0x000a94f0) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x000a94f0) image3_infobar_time_pane

0xcbc4,	// (0x000a74f5) image3_infobar_time_pane_g1

0xebcf,	// (0x000a9500) image3_infobar_time_pane_t1

0xcbc4,	// (0x000a74f5) image3_infobar_loc_pane_g1

0xebdd,	// (0x000a950e) image3_infobar_loc_pane_g2

0x0001,

0x0b10,	// (0x0009b441) image3_infobar_loc_pane_g

0xebe5,	// (0x000a9516) image3_infobar_loc_pane_t1

0xcbc4,	// (0x000a74f5) image3_infobar_fav_pane_g1

0xebf3,	// (0x000a9524) image3_infobar_fav_pane_g2

0x0001,

0x0b15,	// (0x0009b446) image3_infobar_fav_pane_g

0xebfb,	// (0x000a952c) fs_bigclock_status_battery_pane

0xec04,	// (0x000a9535) fs_bigclock_status_signal_pane

0xec0d,	// (0x000a953e) fs_bigclock_status_title_pane

0xec16,	// (0x000a9547) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x000a9550) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b1a,	// (0x0009b44b) fs_bigclock_status_signal_pane_g

0xec27,	// (0x000a9558) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x000a9561) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b1f,	// (0x0009b450) fs_bigclock_status_battery_pane_g

0xec38,	// (0x000a9569) fs_bigclock_status_title_pane_t1

0xcbc4,	// (0x000a74f5) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x000a9577) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x000a9580) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x000a9580) main_fs_bigclock_clock_pane_g4

0x0003,

0x0b24,	// (0x0009b455) main_fs_bigclock_clock_pane_g

0xec57,	// (0x000a9588) main_fs_bigclock_clock_pane_t1

0x9011,	// (0x000a3942) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbb3,	// (0x000aa4e4) main_fs_bigclock_clock_pane_t

0xec65,	// (0x000a9596) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x000a9596) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x000a95a7) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x000a95a7) list_single_fs_bigclock_pane

0xec9c,	// (0x000a95cd) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x000a95dc) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x000a95e4) list_single_fs_bigclock_pane_t1

0xcbc4,	// (0x000a74f5) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x000a9627) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b3e,	// (0x0009b46f) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x000a962f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x000a962f) main_fs_bigclock_swipe_pane_t1

0x3347,	// (0x0009dc78) call_type_pane_ParamLimits

0x9a8d,	// (0x000a43be) main_btmg_pane

0xa2f9,	// (0x000a4c2a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa2f9,	// (0x000a4c2a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb7f,	// (0x000aa4b0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb7f,	// (0x000aa4b0) list_single_cale_mrui_row_pane_g

0xa54a,	// (0x000a4e7b) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x000a9447) list_recal_vselct_arw_up_pane

0xa552,	// (0x000a4e83) list_recal_vselct_pane

0x9062,	// (0x000a3993) btmg_button_pane

0x906e,	// (0x000a399f) main_btmg_pane_g1

0x9a8d,	// (0x000a43be) bg_button_pane_cp044

0xed1b,	// (0x000a964c) btmg_button_pane_t1

0xc7a6,	// (0x000a70d7) aid_listscroll_gen

0xa49e,	// (0x000a4dcf) main_cntbar_detail_pane

0xe7a0,	// (0x000a90d1) list_cmail_folder_pane

0xc2ad,	// (0x000a6bde) sp_fs_scroll_pane_cp03_ParamLimits

0x9076,	// (0x000a39a7) list_single_fs_dyc_pane_cp01_ParamLimits

0x9076,	// (0x000a39a7) list_single_fs_dyc_pane_cp01

0xed29,	// (0x000a965a) aid_size_cmail_indent

0xa5d1,	// (0x000a4f02) list_single_dyc_row_pane_cp01

0x90c6,	// (0x000a39f7) cntbar_detail_list_pane_ParamLimits

0x90c6,	// (0x000a39f7) cntbar_detail_list_pane

0x9100,	// (0x000a3a31) main_cntbar_detail_cont_pane_ParamLimits

0x9100,	// (0x000a3a31) main_cntbar_detail_cont_pane

0x326a,	// (0x0009db9b) scroll_pane_cp032_ParamLimits

0x326a,	// (0x0009db9b) scroll_pane_cp032

0x910c,	// (0x000a3a3d) cntbar_detail_list_event_pane_ParamLimits

0x910c,	// (0x000a3a3d) cntbar_detail_list_event_pane

0x90d2,	// (0x000a3a03) cntbar_detail_list_shct_pane

0xab7d,	// (0x000a54ae) aid_list_gen

0xed32,	// (0x000a9663) aid_scroll

0xed3b,	// (0x000a966c) aid_size_touch_scroll_bar

0x7570,	// (0x000a1ea1) aid_list_double

0xdbe0,	// (0x000a8511) aid_list_single

0x755e,	// (0x000a1e8f) aid_list_single_lg

0xa5da,	// (0x000a4f0b) aid_list_z_g_a_sm

0xa5e2,	// (0x000a4f13) aid_list_z_g_d

0xa5ea,	// (0x000a4f1b) aid_txt_z_prm

0x9120,	// (0x000a3a51) aid_txt_z_prm_cp01

0x912e,	// (0x000a3a5f) aid_txt_z_sec

0x913c,	// (0x000a3a6d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x913c,	// (0x000a3a6d) main_cntbar_detail_cont_pane_g1

0x9149,	// (0x000a3a7a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9149,	// (0x000a3a7a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbbf,	// (0x000aa4f0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbbf,	// (0x000aa4f0) main_cntbar_detail_cont_pane_g

0xed44,	// (0x000a9675) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x000a9683) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x000a9691) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b48,	// (0x0009b479) main_cntbar_detail_cont_pane_t

0x9155,	// (0x000a3a86) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9155,	// (0x000a3a86) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x000a969f) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x000a96a8) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b4f,	// (0x0009b480) cntbar_detail_list_shct_pane_g

0x9169,	// (0x000a3a9a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9169,	// (0x000a3a9a) cntbar_detail_list_event_pane_g1

0x9175,	// (0x000a3aa6) cntbar_detail_list_event_pane_g2_ParamLimits

0x9175,	// (0x000a3aa6) cntbar_detail_list_event_pane_g2

0x0005,

0xfbc4,	// (0x000aa4f5) cntbar_detail_list_event_pane_g_ParamLimits

0xfbc4,	// (0x000aa4f5) cntbar_detail_list_event_pane_g

0x91e1,	// (0x000a3b12) cntbar_detail_list_event_pane_t1_ParamLimits

0x91e1,	// (0x000a3b12) cntbar_detail_list_event_pane_t1

0x91f6,	// (0x000a3b27) cntbar_detail_list_event_pane_t2_ParamLimits

0x91f6,	// (0x000a3b27) cntbar_detail_list_event_pane_t2

0x0002,

0xfbd1,	// (0x000aa502) cntbar_detail_list_event_pane_t_ParamLimits

0xfbd1,	// (0x000aa502) cntbar_detail_list_event_pane_t

0xcbc4,	// (0x000a74f5) cell_cntbar_detail_list_shct_pane_g1

0xb363,	// (0x000a5c94) navi_pane_mv_g3

0xa49e,	// (0x000a4dcf) main_cntbar_detail_pane_ParamLimits

0x9a8d,	// (0x000a43be) main_notif_wgt_pane

0x5ce5,	// (0x000a0616) aid_tch_main_mp4_pane_g4

0x5f1a,	// (0x000a084b) popup_slider_window_cp02

0xa540,	// (0x000a4e71) list_recal_day_event_pane

0x90a6,	// (0x000a39d7) cntbar_detail_btn_pane_ParamLimits

0x90a6,	// (0x000a39d7) cntbar_detail_btn_pane

0x90b6,	// (0x000a39e7) cntbar_detail_btn_pane_cp01_ParamLimits

0x90b6,	// (0x000a39e7) cntbar_detail_btn_pane_cp01

0x90d2,	// (0x000a3a03) cntbar_detail_list_shct_pane_ParamLimits

0x90de,	// (0x000a3a0f) cntbar_detail_pane_g1_ParamLimits

0x90de,	// (0x000a3a0f) cntbar_detail_pane_g1

0x90ea,	// (0x000a3a1b) cntbar_detail_pane_t1_ParamLimits

0x90ea,	// (0x000a3a1b) cntbar_detail_pane_t1

0x9181,	// (0x000a3ab2) cntbar_detail_list_event_pane_g3_ParamLimits

0x9181,	// (0x000a3ab2) cntbar_detail_list_event_pane_g3

0x9199,	// (0x000a3aca) cntbar_detail_list_event_pane_g4_ParamLimits

0x9199,	// (0x000a3aca) cntbar_detail_list_event_pane_g4

0x91b1,	// (0x000a3ae2) cntbar_detail_list_event_pane_g5_ParamLimits

0x91b1,	// (0x000a3ae2) cntbar_detail_list_event_pane_g5

0x91c9,	// (0x000a3afa) cntbar_detail_list_event_pane_g6_ParamLimits

0x91c9,	// (0x000a3afa) cntbar_detail_list_event_pane_g6

0x920b,	// (0x000a3b3c) cntbar_detail_list_event_pane_t3_ParamLimits

0x920b,	// (0x000a3b3c) cntbar_detail_list_event_pane_t3

0x921d,	// (0x000a3b4e) popup_notif_wgt_window_ParamLimits

0x921d,	// (0x000a3b4e) popup_notif_wgt_window

0x922d,	// (0x000a3b5e) popup_submenu_window_cp01_ParamLimits

0x922d,	// (0x000a3b5e) popup_submenu_window_cp01

0xa8d6,	// (0x000a5207) bg_popup_window_pane_cp10

0xed80,	// (0x000a96b1) listscroll_notif_wgt_pane

0xed91,	// (0x000a96c2) list_notif_wgt_window

0xed9a,	// (0x000a96cb) scroll_pane_cp033

0x923b,	// (0x000a3b6c) list_notif_wgt_row_pane_ParamLimits

0x923b,	// (0x000a3b6c) list_notif_wgt_row_pane

0xeda3,	// (0x000a96d4) aid_size_list_notif_wgt_del

0xedb0,	// (0x000a96e1) list_notif_wgt_row_pane_g1

0xedbc,	// (0x000a96ed) list_notif_wgt_row_pane_g2

0xedd0,	// (0x000a9701) list_notif_wgt_row_pane_g3

0x0002,

0x0b68,	// (0x0009b499) list_notif_wgt_row_pane_g

0xeddd,	// (0x000a970e) list_notif_wgt_row_pane_t1

0xedf3,	// (0x000a9724) list_notif_wgt_row_pane_t2

0xee05,	// (0x000a9736) list_notif_wgt_row_pane_t3

0x0002,

0x0b6f,	// (0x0009b4a0) list_notif_wgt_row_pane_t

0xd877,	// (0x000a81a8) list_recal_day_event_pane_g1

0xee17,	// (0x000a9748) list_recal_day_event_pane_t1

0x9a8d,	// (0x000a43be) bg_button_pane_cp045

0xee26,	// (0x000a9757) cntbar_detail_btn_pane_t1

0xc7ba,	// (0x000a70eb) main_callh_pane_ParamLimits

0xc7ba,	// (0x000a70eb) main_callh_pane

0x9a8d,	// (0x000a43be) main_coverflow0_pane

0x9a8d,	// (0x000a43be) main_wgtman_pane

0x8245,	// (0x000a2b76) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8245,	// (0x000a2b76) main_fs_bigclock_unlock_btn_pane

0x8b32,	// (0x000a3463) bg_button_pane_cp16

0x8b42,	// (0x000a3473) cell_tport_appsw_pane_g3

0x924d,	// (0x000a3b7e) cf0_flow_pane_ParamLimits

0x924d,	// (0x000a3b7e) cf0_flow_pane

0xee34,	// (0x000a9765) listscroll_cf0_pane

0xee3f,	// (0x000a9770) main_cf0_pane_g1

0x925c,	// (0x000a3b8d) main_cf0_pane_t1_ParamLimits

0x925c,	// (0x000a3b8d) main_cf0_pane_t1

0x9270,	// (0x000a3ba1) main_cf0_pane_t2_ParamLimits

0x9270,	// (0x000a3ba1) main_cf0_pane_t2

0x0001,

0xfbd8,	// (0x000aa509) main_cf0_pane_t_ParamLimits

0xfbd8,	// (0x000aa509) main_cf0_pane_t

0xee51,	// (0x000a9782) scroll_pane_cp11

0x9284,	// (0x000a3bb5) cf0_flow_pane_g1

0x928c,	// (0x000a3bbd) cf0_flow_pane_g2

0x0001,

0xfbdd,	// (0x000aa50e) cf0_flow_pane_g

0x9294,	// (0x000a3bc5) cf0_flow_pane_t1

0x9a8d,	// (0x000a43be) main_call6_pane

0x9a8d,	// (0x000a43be) main_calllock_pane

0x92a2,	// (0x000a3bd3) call6_btn_grp_pane_ParamLimits

0x92a2,	// (0x000a3bd3) call6_btn_grp_pane

0x92b1,	// (0x000a3be2) call6_pane_g1_ParamLimits

0x92b1,	// (0x000a3be2) call6_pane_g1

0x92c0,	// (0x000a3bf1) popup_call6_1st_window_ParamLimits

0x92c0,	// (0x000a3bf1) popup_call6_1st_window

0x92ce,	// (0x000a3bff) popup_call6_2nd_window_ParamLimits

0x92ce,	// (0x000a3bff) popup_call6_2nd_window

0x92dc,	// (0x000a3c0d) cell_call6_btn_pane_ParamLimits

0x92dc,	// (0x000a3c0d) cell_call6_btn_pane

0xa8d6,	// (0x000a5207) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x000a978d) popup_call6_1st_window_g1

0xee64,	// (0x000a9795) popup_call6_1st_window_g2

0xee6c,	// (0x000a979d) popup_call6_1st_window_g3

0x0002,

0x0b85,	// (0x0009b4b6) popup_call6_1st_window_g

0xee74,	// (0x000a97a5) popup_call6_1st_window_t1

0xee83,	// (0x000a97b4) popup_call6_1st_window_t2

0xee93,	// (0x000a97c4) popup_call6_1st_window_t3

0x0002,

0x0b8c,	// (0x0009b4bd) popup_call6_1st_window_t

0xa8d6,	// (0x000a5207) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x000a978d) popup_call6_2nd_window_g1

0xee64,	// (0x000a9795) popup_call6_2nd_window_g2

0xee6c,	// (0x000a979d) popup_call6_2nd_window_g3

0x0002,

0x0b85,	// (0x0009b4b6) popup_call6_2nd_window_g

0xee74,	// (0x000a97a5) popup_call6_2nd_window_t1

0x9a8d,	// (0x000a43be) bg_button_pane_cp15

0xeea3,	// (0x000a97d4) cell_call6_btn_pane_g1

0xeeac,	// (0x000a97dd) cell_call6_btn_pane_t1

0x92eb,	// (0x000a3c1c) listscroll_wgtman_pane_ParamLimits

0x92eb,	// (0x000a3c1c) listscroll_wgtman_pane

0x9307,	// (0x000a3c38) wgtman_btn_pane_ParamLimits

0x9307,	// (0x000a3c38) wgtman_btn_pane

0xb10f,	// (0x000a5a40) aid_scroll_copy1

0xeebb,	// (0x000a97ec) list_wgtman_pane

0x933c,	// (0x000a3c6d) wgtman_btn_pane_g1_ParamLimits

0x933c,	// (0x000a3c6d) wgtman_btn_pane_g1

0x9364,	// (0x000a3c95) wgtman_btn_pane_t1_ParamLimits

0x9364,	// (0x000a3c95) wgtman_btn_pane_t1

0xeec5,	// (0x000a97f6) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x000a97f6) wgtman_btn_pane_t2

0x0001,

0xfbe2,	// (0x000aa513) wgtman_btn_pane_t_ParamLimits

0xfbe2,	// (0x000aa513) wgtman_btn_pane_t

0x939b,	// (0x000a3ccc) listrow_wgtman_pane_ParamLimits

0x939b,	// (0x000a3ccc) listrow_wgtman_pane

0x93b7,	// (0x000a3ce8) listrow_wgtman_pane_g1

0x93c4,	// (0x000a3cf5) listrow_wgtman_pane_g2

0x0001,

0xfbe7,	// (0x000aa518) listrow_wgtman_pane_g

0x93e2,	// (0x000a3d13) listrow_wgtman_pane_t1

0x93fa,	// (0x000a3d2b) listrow_wgtman_pane_t2

0x0001,

0xfbec,	// (0x000aa51d) listrow_wgtman_pane_t

0x9420,	// (0x000a3d51) wait_bar_pane_cp09

0xeedc,	// (0x000a980d) main_calllock_btn_pane

0xeee6,	// (0x000a9817) main_calllock_pane_g1

0x9a8d,	// (0x000a43be) bg_button_pane_cp17

0xeef1,	// (0x000a9822) main_calllock_btn_pane_g1

0xeefa,	// (0x000a982b) main_calllock_btn_pane_t1

0x9a8d,	// (0x000a43be) main_dialer3_pane

0x9a8d,	// (0x000a43be) main_fmrd2_pane

0xcbc4,	// (0x000a74f5) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x000a9842) main_fs_bigclock_unlock_btn_pane_t1

0x9432,	// (0x000a3d63) area_fmrd2_info_pane_ParamLimits

0x9432,	// (0x000a3d63) area_fmrd2_info_pane

0x9440,	// (0x000a3d71) area_fmrd2_visual_pane_ParamLimits

0x9440,	// (0x000a3d71) area_fmrd2_visual_pane

0x944e,	// (0x000a3d7f) fmrd2_indi_pane_ParamLimits

0x944e,	// (0x000a3d7f) fmrd2_indi_pane

0x945b,	// (0x000a3d8c) area_fmrd2_visual_pane_g1

0x9463,	// (0x000a3d94) area_fmrd2_visual_pane_t1

0x9473,	// (0x000a3da4) area_fmrd2_visual_pane_t2

0x9483,	// (0x000a3db4) area_fmrd2_visual_pane_t3

0x0002,

0xfbf1,	// (0x000aa522) area_fmrd2_visual_pane_t

0x9493,	// (0x000a3dc4) area_fmrd2_info_pane_g1

0x949b,	// (0x000a3dcc) area_fmrd2_info_pane_t1

0x94ab,	// (0x000a3ddc) area_fmrd2_info_pane_t2

0x94bb,	// (0x000a3dec) area_fmrd2_info_pane_t3

0x94cb,	// (0x000a3dfc) area_fmrd2_info_pane_t4

0x0003,

0xfbf8,	// (0x000aa529) area_fmrd2_info_pane_t

0x94d9,	// (0x000a3e0a) fmrd2_indi_pane_t1

0x94e9,	// (0x000a3e1a) fmrd2_indi_pane_t2

0x94f9,	// (0x000a3e2a) fmrd2_indi_pane_t3

0x0002,

0xfc01,	// (0x000aa532) fmrd2_indi_pane_t

0xe3fd,	// (0x000a8d2e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3fd,	// (0x000a8d2e) list_single_fs_bigclock_indicator_pane_g5

0xe4ad,	// (0x000a8dde) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4ad,	// (0x000a8dde) list_single_fs_bigclock_indicator_pane_t5

0x8cec,	// (0x000a361d) aid_cell_bcale_month_pane_ParamLimits

0x8cec,	// (0x000a361d) aid_cell_bcale_month_pane

0x8d0a,	// (0x000a363b) bcale_month_pane_ParamLimits

0x8d0a,	// (0x000a363b) bcale_month_pane

0x8d28,	// (0x000a3659) bcale_preview_pane_ParamLimits

0x8d28,	// (0x000a3659) bcale_preview_pane

0xecb3,	// (0x000a95e4) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x000a9603) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x000a9603) list_single_fs_bigclock_pane_t2

0x0001,

0x0b39,	// (0x0009b46a) list_single_fs_bigclock_pane_t_ParamLimits

0x0b39,	// (0x0009b46a) list_single_fs_bigclock_pane_t

0xef09,	// (0x000a983a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0ba2,	// (0x0009b4d3) main_fs_bigclock_unlock_btn_pane_g

0x9507,	// (0x000a3e38) aid_dia3_key_size_ParamLimits

0x9507,	// (0x000a3e38) aid_dia3_key_size

0x9513,	// (0x000a3e44) aid_dia3_listrow_size_ParamLimits

0x9513,	// (0x000a3e44) aid_dia3_listrow_size

0x9523,	// (0x000a3e54) dia3_keypad_fun_pane_ParamLimits

0x9523,	// (0x000a3e54) dia3_keypad_fun_pane

0x9535,	// (0x000a3e66) dia3_keypad_num_pane_ParamLimits

0x9535,	// (0x000a3e66) dia3_keypad_num_pane

0x9547,	// (0x000a3e78) dia3_listscroll_pane_ParamLimits

0x9547,	// (0x000a3e78) dia3_listscroll_pane

0x9555,	// (0x000a3e86) dia3_numentry_pane_ParamLimits

0x9555,	// (0x000a3e86) dia3_numentry_pane

0xef1f,	// (0x000a9850) dia3_list_pane

0xef2a,	// (0x000a985b) scroll_pane_cp12

0x9a8d,	// (0x000a43be) bg_dia3_numentry_pane

0x9563,	// (0x000a3e94) dia3_numentry_pane_t1

0x9572,	// (0x000a3ea3) cell_dia3_key_num_pane

0x957a,	// (0x000a3eab) cell_dia3_key0_fun_pane_ParamLimits

0x957a,	// (0x000a3eab) cell_dia3_key0_fun_pane

0x9587,	// (0x000a3eb8) cell_dia3_key1_fun_pane_ParamLimits

0x9587,	// (0x000a3eb8) cell_dia3_key1_fun_pane

0x9594,	// (0x000a3ec5) dia3_listrow_pane

0xe10b,	// (0x000a8a3c) bg_dia3_numentry_pane_g1

0x9a8d,	// (0x000a43be) bg_button_pane_cp21

0xef35,	// (0x000a9866) cell_dia3_key_num_pane_t1

0xef43,	// (0x000a9874) cell_dia3_key_num_pane_t2

0xef52,	// (0x000a9883) cell_dia3_key_num_pane_t3

0xef61,	// (0x000a9892) cell_dia3_key_num_pane_t4

0x0003,

0x0bbe,	// (0x0009b4ef) cell_dia3_key_num_pane_t

0x9a8d,	// (0x000a43be) bg_button_pane_cp19

0x95a1,	// (0x000a3ed2) cell_dia3_key0_fun_pane_g1

0x9a8d,	// (0x000a43be) bg_button_pane_cp20

0x95a9,	// (0x000a3eda) cell_dia3_key1_fun_pane_g1

0x95b1,	// (0x000a3ee2) area_left_week_number_pane

0x95c4,	// (0x000a3ef5) area_top_day_name_pane

0x95d2,	// (0x000a3f03) frame_month_view_pane

0xef70,	// (0x000a98a1) grid_month_view_pane

0x95e7,	// (0x000a3f18) cell_top_day_name_pane_ParamLimits

0x95e7,	// (0x000a3f18) cell_top_day_name_pane

0x9601,	// (0x000a3f32) cell_area_left_week_number_pane_ParamLimits

0x9601,	// (0x000a3f32) cell_area_left_week_number_pane

0x9624,	// (0x000a3f55) cell_month_view_pane_ParamLimits

0x9624,	// (0x000a3f55) cell_month_view_pane

0xef7e,	// (0x000a98af) frm_month_g1

0x9650,	// (0x000a3f81) frm_month_g2

0x9661,	// (0x000a3f92) frm_month_g3

0x9672,	// (0x000a3fa3) frm_month_g4

0x9683,	// (0x000a3fb4) frm_month_g5

0x9696,	// (0x000a3fc7) frm_month_g6

0x96a9,	// (0x000a3fda) frm_month_g7

0xef8b,	// (0x000a98bc) frm_month_g8

0x96bc,	// (0x000a3fed) frm_month_g9

0x96c9,	// (0x000a3ffa) frm_month_g10

0x96d6,	// (0x000a4007) frm_month_g11

0x96e3,	// (0x000a4014) frm_month_g12

0x96f0,	// (0x000a4021) frm_month_g13

0x96fd,	// (0x000a402e) frm_month_g14

0x970c,	// (0x000a403d) frm_month_g15

0x971b,	// (0x000a404c) frm_month_g16

0x000f,

0xfc08,	// (0x000aa539) frm_month_g

0xef98,	// (0x000a98c9) cell_top_day_name_pane_t1

0x972a,	// (0x000a405b) cell_area_left_week_number_pane_g1

0x9739,	// (0x000a406a) cell_area_left_week_number_pane_t1

0xce24,	// (0x000a7755) cell_month_view_pane_g1

0x974f,	// (0x000a4080) cell_month_view_pane_t1

0x9a8d,	// (0x000a43be) main_fps_pane

0xe6b8,	// (0x000a8fe9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6b8,	// (0x000a8fe9) cmail_ddmenu_btn02_pane_cp1

0xe6d4,	// (0x000a9005) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6d4,	// (0x000a9005) cmail_ddmenu_btn02_pane_cp2

0x8f70,	// (0x000a38a1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f70,	// (0x000a38a1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb94,	// (0x000aa4c5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb94,	// (0x000aa4c5) cmail_ddmenu_btn02_pane_g

0x8f8e,	// (0x000a38bf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f8e,	// (0x000a38bf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb99,	// (0x000aa4ca) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb99,	// (0x000aa4ca) cmail_ddmenu_btn02_pane_t

0x9765,	// (0x000a4096) fps_text_pane_ParamLimits

0x9765,	// (0x000a4096) fps_text_pane

0x9772,	// (0x000a40a3) main_fps_pane_g1_ParamLimits

0x9772,	// (0x000a40a3) main_fps_pane_g1

0x9780,	// (0x000a40b1) wait_bar_pane_cp010_ParamLimits

0x9780,	// (0x000a40b1) wait_bar_pane_cp010

0x978c,	// (0x000a40bd) fps_text_pane_t1_ParamLimits

0x978c,	// (0x000a40bd) fps_text_pane_t1

0x630a,	// (0x000a0c3b) cam4_image_uncrop_pane_g1

0x6313,	// (0x000a0c44) cam4_image_uncrop_pane_g2

0x631c,	// (0x000a0c4d) cam4_image_uncrop_pane_g3

0x6325,	// (0x000a0c56) cam4_image_uncrop_pane_g4

0x0003,

0xf776,	// (0x000aa0a7) cam4_image_uncrop_pane_g

0x9594,	// (0x000a3ec5) dia3_listrow_pane_ParamLimits

0x9a8d,	// (0x000a43be) main_phob2_pane

0x8b14,	// (0x000a3445) cell_tport_appsw_pane_cp02_ParamLimits

0x8b14,	// (0x000a3445) cell_tport_appsw_pane_cp02

0x8b23,	// (0x000a3454) cell_tport_appsw_pane_cp03_ParamLimits

0x8b23,	// (0x000a3454) cell_tport_appsw_pane_cp03

0x9a8d,	// (0x000a43be) phob2_contact_card_pane

0x9a8d,	// (0x000a43be) phob2_listscroll_pane

0xefab,	// (0x000a98dc) phob2_list_pane

0xefb3,	// (0x000a98e4) scroll_pane_cp034

0x97a5,	// (0x000a40d6) phob2_cc_data_pane_ParamLimits

0x97a5,	// (0x000a40d6) phob2_cc_data_pane

0x97bf,	// (0x000a40f0) phob2_cc_listscroll_pane_ParamLimits

0x97bf,	// (0x000a40f0) phob2_cc_listscroll_pane

0x97d9,	// (0x000a410a) list_double_large_graphic_phob2_pane_ParamLimits

0x97d9,	// (0x000a410a) list_double_large_graphic_phob2_pane

0x97fb,	// (0x000a412c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97fb,	// (0x000a412c) list_double_large_graphic_phob2_pane_g1

0x9811,	// (0x000a4142) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9811,	// (0x000a4142) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc29,	// (0x000aa55a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc29,	// (0x000aa55a) list_double_large_graphic_phob2_pane_g

0x981d,	// (0x000a414e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x981d,	// (0x000a414e) list_double_large_graphic_phob2_pane_t1

0x9833,	// (0x000a4164) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9833,	// (0x000a4164) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc2e,	// (0x000aa55f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc2e,	// (0x000aa55f) list_double_large_graphic_phob2_pane_t

0x9a8d,	// (0x000a43be) list_highlight_pane_cp024

0x9848,	// (0x000a4179) phob2_cc_button_pane

0x9850,	// (0x000a4181) phob2_cc_data_pane_g1_ParamLimits

0x9850,	// (0x000a4181) phob2_cc_data_pane_g1

0x985c,	// (0x000a418d) phob2_cc_data_pane_g2_ParamLimits

0x985c,	// (0x000a418d) phob2_cc_data_pane_g2

0x0001,

0xfc33,	// (0x000aa564) phob2_cc_data_pane_g_ParamLimits

0xfc33,	// (0x000aa564) phob2_cc_data_pane_g

0x9868,	// (0x000a4199) phob2_cc_data_pane_t1_ParamLimits

0x9868,	// (0x000a4199) phob2_cc_data_pane_t1

0x987a,	// (0x000a41ab) phob2_cc_data_pane_t2_ParamLimits

0x987a,	// (0x000a41ab) phob2_cc_data_pane_t2

0x988c,	// (0x000a41bd) phob2_cc_data_pane_t3_ParamLimits

0x988c,	// (0x000a41bd) phob2_cc_data_pane_t3

0x0002,

0xfc38,	// (0x000aa569) phob2_cc_data_pane_t_ParamLimits

0xfc38,	// (0x000aa569) phob2_cc_data_pane_t

0xefbb,	// (0x000a98ec) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x000a98ec) phob2_cc_list_pane

0xd960,	// (0x000a8291) scroll_pane_cp035_ParamLimits

0xd960,	// (0x000a8291) scroll_pane_cp035

0xa49e,	// (0x000a4dcf) bg_button_pane_cp033

0xefc7,	// (0x000a98f8) phob2_cc_button_pane_g1

0xefd3,	// (0x000a9904) phob2_cc_button_pane_t1

0xefe8,	// (0x000a9919) phob2_cc_button_pane_t2

0x0001,

0x0bfe,	// (0x0009b52f) phob2_cc_button_pane_t

0x989e,	// (0x000a41cf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x989e,	// (0x000a41cf) list_double_large_graphic_phob2_cc_pane

0x98cd,	// (0x000a41fe) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98cd,	// (0x000a41fe) list_double_large_graphic_phob2_cc_pane_g1

0x98de,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x98de,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g2

0x98ed,	// (0x000a421e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x98ed,	// (0x000a421e) list_double_large_graphic_phob2_cc_pane_g3

0x98fc,	// (0x000a422d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x98fc,	// (0x000a422d) list_double_large_graphic_phob2_cc_pane_g4

0x990d,	// (0x000a423e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x990d,	// (0x000a423e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc3f,	// (0x000aa570) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc3f,	// (0x000aa570) list_double_large_graphic_phob2_cc_pane_g

0x991c,	// (0x000a424d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x991c,	// (0x000a424d) list_double_large_graphic_phob2_cc_pane_t1

0x9945,	// (0x000a4276) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9945,	// (0x000a4276) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc4a,	// (0x000aa57b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc4a,	// (0x000aa57b) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x000a992b) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x000a992b) list_highlight_pane_cp025

0xa49e,	// (0x000a4dcf) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x000a98f8) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x000a9904) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x000a9919) phob2_cc_button_pane_t2_ParamLimits

0x0bfe,	// (0x0009b52f) phob2_cc_button_pane_t_ParamLimits

0x0fd5,	// (0x0009b906) popup_wgtman_window

0xd753,	// (0x000a8084) scroll_pane_cp038

0x9324,	// (0x000a3c55) wgtman_btn_pane_cp_01_ParamLimits

0x9324,	// (0x000a3c55) wgtman_btn_pane_cp_01

0xf008,	// (0x000a9939) wgtman_content_pane

0xf011,	// (0x000a9942) wgtman_heading_pane

0x9a8d,	// (0x000a43be) bg_heading_pane_cp02

0xf01a,	// (0x000a994b) wgtman_heading_pane_g1

0xf022,	// (0x000a9953) wgtman_heading_pane_t1

0xf030,	// (0x000a9961) scroll_pane_cp036

0xf038,	// (0x000a9969) wgtman_list_pane

0xe5e2,	// (0x000a8f13) wgtman_list_pane_t1_ParamLimits

0xe5e2,	// (0x000a8f13) wgtman_list_pane_t1

0x6269,	// (0x000a0b9a) cam4_grid_pane

0x7011,	// (0x000a1942) bg_button_pane_cp015_ParamLimits

0x7023,	// (0x000a1954) bg_button_pane_cp016_ParamLimits

0x7036,	// (0x000a1967) bg_button_pane_cp017_ParamLimits

0x708c,	// (0x000a19bd) popup_vitu2_query_window_g3_ParamLimits

0x708c,	// (0x000a19bd) popup_vitu2_query_window_g3

0x7147,	// (0x000a1a78) popup_vitu2_query_window_t6_ParamLimits

0x7147,	// (0x000a1a78) popup_vitu2_query_window_t6

0x7172,	// (0x000a1aa3) popup_vitu2_query_window_t7_ParamLimits

0x7172,	// (0x000a1aa3) popup_vitu2_query_window_t7

0xd6d8,	// (0x000a8009) cam4_grid_pane_g1

0xd6e1,	// (0x000a8012) cam4_grid_pane_g2

0xf040,	// (0x000a9971) cam4_grid_pane_g3

0xf049,	// (0x000a997a) cam4_grid_pane_g4

0x0003,

0xfc4f,	// (0x000aa580) cam4_grid_pane_g

0x1f44,	// (0x0009c875) aid_placing_vt_slider_lsc_ParamLimits

0x2284,	// (0x0009cbb5) vidtel_button_pane_ParamLimits

0x2284,	// (0x0009cbb5) vidtel_button_pane

0xf054,	// (0x000a9985) bg_button_pane_cp034

0x996e,	// (0x000a429f) vidtel_button_pane_g1

0xf05e,	// (0x000a998f) vidtel_button_pane_t1

0xd855,	// (0x000a8186) aid_size_vtel_slider_touch

0xd960,	// (0x000a8291) scroll_pane_cp039

0xe149,	// (0x000a8a7a) ncim_query_button_pane_cp01_ParamLimits

0xe168,	// (0x000a8a99) ncimui_query_pane_g1_ParamLimits

0xa49e,	// (0x000a4dcf) input_focus_pane_cp012_ParamLimits

0xe18d,	// (0x000a8abe) ncim_query_entry_pane_t1_ParamLimits

0xd960,	// (0x000a8291) scroll_pane_cp039_ParamLimits

0xb1f5,	// (0x000a5b26) navi_pane_bcale_mc_g1

0xb1fd,	// (0x000a5b2e) navi_pane_bcale_mc_t1

0xe71d,	// (0x000a904e) main_sp_fs_email_pane_g1

0xe729,	// (0x000a905a) main_sp_fs_email_pane_g2

0x0001,

0x09a4,	// (0x0009b2d5) main_sp_fs_email_pane_g

0xe988,	// (0x000a92b9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x000a92b9) list_single_cale_mrui_row_pane_g3

0x8fb6,	// (0x000a38e7) list_single_recal_day_pane_g5_event_pane

0xa5a5,	// (0x000a4ed6) list_single_recal_day_pane_g7

0xf06c,	// (0x000a999d) list_recal_day_event_pane_cp01

0xf075,	// (0x000a99a6) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000a99ae) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000a99b6) list_recal_vselct_pane_cp01

0xd877,	// (0x000a81a8) list_recal_day_event_pane_cp01_g1

0xa5f8,	// (0x000a4f29) list_recal_day_event_pane_cp01_t1

0xa5ad,	// (0x000a4ede) list_single_recal_day_pane_t1_ParamLimits

0xa5bf,	// (0x000a4ef0) list_single_recal_day_pane_t2_ParamLimits

0xfba9,	// (0x000aa4da) list_single_recal_day_pane_t_ParamLimits

0xa624,	// (0x000a4f55) bg_notes_pane_ParamLimits

0xa6e6,	// (0x000a5017) list_notes_pane_ParamLimits

0x132a,	// (0x0009bc5b) scroll_pane_cp06_ParamLimits

0xa708,	// (0x000a5039) main_notes_pane_ParamLimits

0x9a8d,	// (0x000a43be) main_welc_pane

0x9976,	// (0x000a42a7) main_welc_body_pane_ParamLimits

0x9976,	// (0x000a42a7) main_welc_body_pane

0x998f,	// (0x000a42c0) main_welc_opti_pane_ParamLimits

0x998f,	// (0x000a42c0) main_welc_opti_pane

0x99c4,	// (0x000a42f5) main_welc_pane_t1_ParamLimits

0x99c4,	// (0x000a42f5) main_welc_pane_t1

0x99e2,	// (0x000a4313) main_welc_body_row_pane_ParamLimits

0x99e2,	// (0x000a4313) main_welc_body_row_pane

0xe87b,	// (0x000a91ac) main_welc_opti_row_pane_ParamLimits

0xe87b,	// (0x000a91ac) main_welc_opti_row_pane

0xf08f,	// (0x000a99c0) main_welc_opti_row_pane_g1

0x9a0e,	// (0x000a433f) main_welc_opti_row_pane_t1

0xf097,	// (0x000a99c8) main_welc_body_row_pane_t1

0xed89,	// (0x000a96ba) popup_notif_wgt_heading_pane

0xeda3,	// (0x000a96d4) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x000a96e1) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x000a96ed) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x000a9701) list_notif_wgt_row_pane_g3_ParamLimits

0x0b68,	// (0x0009b499) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x000a970e) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x000a9724) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x000a9736) list_notif_wgt_row_pane_t3_ParamLimits

0x0b6f,	// (0x0009b4a0) list_notif_wgt_row_pane_t_ParamLimits

0x93b7,	// (0x000a3ce8) listrow_wgtman_pane_g1_ParamLimits

0x93c4,	// (0x000a3cf5) listrow_wgtman_pane_g2_ParamLimits

0xfbe7,	// (0x000aa518) listrow_wgtman_pane_g_ParamLimits

0x93e2,	// (0x000a3d13) listrow_wgtman_pane_t1_ParamLimits

0x93fa,	// (0x000a3d2b) listrow_wgtman_pane_t2_ParamLimits

0xfbec,	// (0x000aa51d) listrow_wgtman_pane_t_ParamLimits

0x9420,	// (0x000a3d51) wait_bar_pane_cp09_ParamLimits

0x9a8d,	// (0x000a43be) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000a99d7) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000a99df) popup_notif_wgt_heading_pane_t1

0x9a8d,	// (0x000a43be) main_vids_pane

0x9a8d,	// (0x000a43be) vids_listscroll_pane

0x9a1d,	// (0x000a434e) scroll_pane_cp040

0x9a8d,	// (0x000a43be) vids_list_pane

0x9a28,	// (0x000a4359) vids_list_double_pane_ParamLimits

0x9a28,	// (0x000a4359) vids_list_double_pane

0x9a40,	// (0x000a4371) vids_list_double_pane_g1

0x9a49,	// (0x000a437a) vids_list_double_pane_t1

0x9a59,	// (0x000a438a) vids_list_double_pane_t2

0x0001,

0xfc5d,	// (0x000aa58e) vids_list_double_pane_t

0x437a,	// (0x0009ecab) main_ncimui_pane_ParamLimits

0x7e17,	// (0x000a2748) main_ncimui_pane_g1_ParamLimits

0x7e23,	// (0x000a2754) main_ncimui_pane_g2_ParamLimits

0x7e23,	// (0x000a2754) main_ncimui_pane_g2

0x0001,

0xfa12,	// (0x000aa343) main_ncimui_pane_g_ParamLimits

0xfa12,	// (0x000aa343) main_ncimui_pane_g

0x99aa,	// (0x000a42db) main_welc_pane_g1_ParamLimits

0x99aa,	// (0x000a42db) main_welc_pane_g1

0x99b6,	// (0x000a42e7) main_welc_pane_g2_ParamLimits

0x99b6,	// (0x000a42e7) main_welc_pane_g2

0x0001,

0xfc58,	// (0x000aa589) main_welc_pane_g_ParamLimits

0xfc58,	// (0x000aa589) main_welc_pane_g

0xa624,	// (0x000a4f55) listscroll_mce_pane_ParamLimits

0xb3a3,	// (0x000a5cd4) wait_bar_pane_cp10

0xc7ae,	// (0x000a70df) main_cale_day_pane_ParamLimits

0xc7ae,	// (0x000a70df) main_cale_week_pane_ParamLimits

0xa624,	// (0x000a4f55) main_messa_pane_ParamLimits

0x568f,	// (0x0009ffc0) main_clock2_btn_pane_ParamLimits

0x568f,	// (0x0009ffc0) main_clock2_btn_pane

0xcfac,	// (0x000a78dd) main_clock2_btn_pane_cp01_ParamLimits

0xcfac,	// (0x000a78dd) main_clock2_btn_pane_cp01

0xe959,	// (0x000a928a) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x000a977a) main_cf0_pane_g2

0x0001,

0x0b76,	// (0x0009b4a7) main_cf0_pane_g

0x95b1,	// (0x000a3ee2) area_left_week_number_pane_ParamLimits

0x95c4,	// (0x000a3ef5) area_top_day_name_pane_ParamLimits

0x95d2,	// (0x000a3f03) frame_month_view_pane_ParamLimits

0xef70,	// (0x000a98a1) grid_month_view_pane_ParamLimits

0xef7e,	// (0x000a98af) frm_month_g1_ParamLimits

0x9650,	// (0x000a3f81) frm_month_g2_ParamLimits

0x9661,	// (0x000a3f92) frm_month_g3_ParamLimits

0x9672,	// (0x000a3fa3) frm_month_g4_ParamLimits

0x9683,	// (0x000a3fb4) frm_month_g5_ParamLimits

0x9696,	// (0x000a3fc7) frm_month_g6_ParamLimits

0x96a9,	// (0x000a3fda) frm_month_g7_ParamLimits

0xef8b,	// (0x000a98bc) frm_month_g8_ParamLimits

0x96bc,	// (0x000a3fed) frm_month_g9_ParamLimits

0x96c9,	// (0x000a3ffa) frm_month_g10_ParamLimits

0x96d6,	// (0x000a4007) frm_month_g11_ParamLimits

0x96e3,	// (0x000a4014) frm_month_g12_ParamLimits

0x96f0,	// (0x000a4021) frm_month_g13_ParamLimits

0x96fd,	// (0x000a402e) frm_month_g14_ParamLimits

0x970c,	// (0x000a403d) frm_month_g15_ParamLimits

0x971b,	// (0x000a404c) frm_month_g16_ParamLimits

0xfc08,	// (0x000aa539) frm_month_g_ParamLimits

0xef98,	// (0x000a98c9) cell_top_day_name_pane_t1_ParamLimits

0x972a,	// (0x000a405b) cell_area_left_week_number_pane_g1_ParamLimits

0x9739,	// (0x000a406a) cell_area_left_week_number_pane_t1_ParamLimits

0xce24,	// (0x000a7755) cell_month_view_pane_g1_ParamLimits

0x974f,	// (0x000a4080) cell_month_view_pane_t1_ParamLimits

0xa61c,	// (0x000a4f4d) main_clock2_btn_pane_g1

0xf0bc,	// (0x000a99ed) main_clock2_btn_pane_t1

0xa49e,	// (0x000a4dcf) listscroll_cmail_pane_ParamLimits

0xe71d,	// (0x000a904e) main_sp_fs_email_pane_g1_ParamLimits

0xe729,	// (0x000a905a) main_sp_fs_email_pane_g2_ParamLimits

0x09a4,	// (0x0009b2d5) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x000a9428) list_recal_day_pane_ParamLimits

0xeb08,	// (0x000a9439) mian_recal_day_pane_t1

0x87e8,	// (0x000a3119) list_single_dyc_row_text_pane_t4_ParamLimits

0x87e8,	// (0x000a3119) list_single_dyc_row_text_pane_t4

0x881f,	// (0x000a3150) list_single_dyc_row_text_pane_t5_ParamLimits

0x881f,	// (0x000a3150) list_single_dyc_row_text_pane_t5

0xa155,	// (0x000a4a86) list_single_dyc_row_text_pane_t6_ParamLimits

0xa155,	// (0x000a4a86) list_single_dyc_row_text_pane_t6

0xacd9,	// (0x000a560a) aid_mgn_list_cale_time_pane

0x437a,	// (0x0009ecab) main_gallery2_pane_ParamLimits

0xcfc2,	// (0x000a78f3) main_clock2_pane_cp01_t1

0xcfd0,	// (0x000a7901) main_clock2_pane_cp01_t3

0x0001,

0x0483,	// (0x0009adb4) main_clock2_pane_cp01_t

0x1775,	// (0x0009c0a6) cale_week_scroll_pane_g16_ParamLimits

0x1775,	// (0x0009c0a6) cale_week_scroll_pane_g16

0xa8d6,	// (0x000a5207) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
