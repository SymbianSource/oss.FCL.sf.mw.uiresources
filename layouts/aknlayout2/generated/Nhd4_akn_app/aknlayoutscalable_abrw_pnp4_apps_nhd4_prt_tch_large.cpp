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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0009a8e9 };

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
0x0cf5,	// (0x0009b5de) Screen

0x0d01,	// (0x0009b5ea) application_window

0x0d5d,	// (0x0009b646) area_bottom_pane_ParamLimits

0x0d5d,	// (0x0009b646) area_bottom_pane

0x0db6,	// (0x0009b69f) area_top_pane_ParamLimits

0x0db6,	// (0x0009b69f) area_top_pane

0x0e1a,	// (0x0009b703) call_video_uplink_pane_ParamLimits

0x0e1a,	// (0x0009b703) call_video_uplink_pane

0x0e59,	// (0x0009b742) main_pane_ParamLimits

0x0e59,	// (0x0009b742) main_pane

0xc7c4,	// (0x000a70ad) context_pane

0x4500,	// (0x0009ede9) navi_pane

0x4526,	// (0x0009ee0f) popup_cale_events_window_ParamLimits

0x4526,	// (0x0009ee0f) popup_cale_events_window

0xc7d7,	// (0x000a70c0) popup_mup_playback_window

0x453e,	// (0x0009ee27) signal_pane

0xa703,	// (0x000a4fec) main_browser_pane

0xb39f,	// (0x000a5c88) main_burst_pane

0x4388,	// (0x0009ec71) main_calc_pane

0xc7aa,	// (0x000a7093) main_cale_day_pane

0x15a4,	// (0x0009be8d) main_cale_month_pane

0xc7aa,	// (0x000a7093) main_cale_week_pane

0xb39f,	// (0x000a5c88) main_call_pane

0x9ecc,	// (0x000a47b5) main_call_poc_pane

0xb39f,	// (0x000a5c88) main_camera_pane

0xb39f,	// (0x000a5c88) main_chi_dic_pane

0xb0d1,	// (0x000a59ba) main_clock_pane

0x9ecc,	// (0x000a47b5) main_fmradio_pane

0xb39f,	// (0x000a5c88) main_graph_messa_pane

0x9ecc,	// (0x000a47b5) main_help_pane

0xa703,	// (0x000a4fec) main_im_pane

0xa61f,	// (0x000a4f08) main_image_pane_ParamLimits

0xa61f,	// (0x000a4f08) main_image_pane

0x9ecc,	// (0x000a47b5) main_location2_pane

0xb39f,	// (0x000a5c88) main_location_pane

0xa61f,	// (0x000a4f08) main_messa_pane

0x9ecc,	// (0x000a47b5) main_mp2_pane

0xb39f,	// (0x000a5c88) main_mp_pane

0x9ecc,	// (0x000a47b5) main_msg_pane

0x9ecc,	// (0x000a47b5) main_mup_eq_pane

0x9ecc,	// (0x000a47b5) main_mup_pane

0xa703,	// (0x000a4fec) main_notes_pane

0x9ecc,	// (0x000a47b5) main_pec_pane

0x9ecc,	// (0x000a47b5) main_phob_pane

0x9ecc,	// (0x000a47b5) main_pinb_pane

0x9ecc,	// (0x000a47b5) main_postcard_pane

0x9ecc,	// (0x000a47b5) main_qdial_pane

0xb39f,	// (0x000a5c88) main_skin_pane

0x9ecc,	// (0x000a47b5) main_smil2_pane

0xb39f,	// (0x000a5c88) main_smil_pane

0xb39f,	// (0x000a5c88) main_video_pane

0xb39f,	// (0x000a5c88) main_video_tele_pane

0xa61f,	// (0x000a4f08) main_viewer_pane_ParamLimits

0xa61f,	// (0x000a4f08) main_viewer_pane

0xb39f,	// (0x000a5c88) main_vorec_pane

0x43d4,	// (0x0009ecbd) popup_blid_sat_info_window_ParamLimits

0x43d4,	// (0x0009ecbd) popup_blid_sat_info_window

0x43f4,	// (0x0009ecdd) popup_dyc_status_message_window_ParamLimits

0x43f4,	// (0x0009ecdd) popup_dyc_status_message_window

0x4402,	// (0x0009eceb) popup_grid_large_graphic_window_ParamLimits

0x4402,	// (0x0009eceb) popup_grid_large_graphic_window

0x4491,	// (0x0009ed7a) popup_loc_request_window_ParamLimits

0x4491,	// (0x0009ed7a) popup_loc_request_window

0x44d8,	// (0x0009edc1) popup_wml_address_window_ParamLimits

0x44d8,	// (0x0009edc1) popup_wml_address_window

0x4260,	// (0x0009eb49) call_muted_g1

0x3f1e,	// (0x0009e807) popup_call_audio_conf_window_ParamLimits

0x3f1e,	// (0x0009e807) popup_call_audio_conf_window

0x4270,	// (0x0009eb59) popup_call_audio_first_window_ParamLimits

0x4270,	// (0x0009eb59) popup_call_audio_first_window

0x42b0,	// (0x0009eb99) popup_call_audio_in_window_ParamLimits

0x42b0,	// (0x0009eb99) popup_call_audio_in_window

0x42d4,	// (0x0009ebbd) popup_call_audio_out_window_ParamLimits

0x42d4,	// (0x0009ebbd) popup_call_audio_out_window

0x42f6,	// (0x0009ebdf) popup_call_audio_second_window_ParamLimits

0x42f6,	// (0x0009ebdf) popup_call_audio_second_window

0x4326,	// (0x0009ec0f) popup_call_audio_wait_window_ParamLimits

0x4326,	// (0x0009ec0f) popup_call_audio_wait_window

0x4347,	// (0x0009ec30) popup_number_entry_window_ParamLimits

0x4347,	// (0x0009ec30) popup_number_entry_window

0x9ab9,	// (0x000a43a2) bg_popup_call_pane_cp05_ParamLimits

0x9ab9,	// (0x000a43a2) bg_popup_call_pane_cp05

0x9ad9,	// (0x000a43c2) popup_number_entry_window_t1

0x9aec,	// (0x000a43d5) popup_number_entry_window_t2

0x9afe,	// (0x000a43e7) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000a99af) popup_number_entry_window_t

0x9b10,	// (0x000a43f9) text_title_cp2

0x9b23,	// (0x000a440c) bg_popup_call_pane_cp_ParamLimits

0x9b23,	// (0x000a440c) bg_popup_call_pane_cp

0x9b31,	// (0x000a441a) call_thumbnail_pane

0x9b39,	// (0x000a4422) popup_call_audio_in_window_g1_ParamLimits

0x9b39,	// (0x000a4422) popup_call_audio_in_window_g1

0x9b45,	// (0x000a442e) popup_call_audio_in_window_g2_ParamLimits

0x9b45,	// (0x000a442e) popup_call_audio_in_window_g2

0x9b51,	// (0x000a443a) popup_call_audio_in_window_g3_ParamLimits

0x9b51,	// (0x000a443a) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000a99b8) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000a99b8) popup_call_audio_in_window_g

0x9b5d,	// (0x000a4446) popup_call_audio_in_window_t1_ParamLimits

0x9b5d,	// (0x000a4446) popup_call_audio_in_window_t1

0x9b79,	// (0x000a4462) popup_call_audio_in_window_t2_ParamLimits

0x9b79,	// (0x000a4462) popup_call_audio_in_window_t2

0x9b95,	// (0x000a447e) popup_call_audio_in_window_t3_ParamLimits

0x9b95,	// (0x000a447e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000a99bf) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000a99bf) popup_call_audio_in_window_t

0x9b23,	// (0x000a440c) bg_popup_call_pane_cp01_ParamLimits

0x9b23,	// (0x000a440c) bg_popup_call_pane_cp01

0x9b31,	// (0x000a441a) call_thumbnail_pane_cp02

0x9ba8,	// (0x000a4491) call_type_pane_cp022

0x9bb0,	// (0x000a4499) popup_call_audio_out_window_g1_ParamLimits

0x9bb0,	// (0x000a4499) popup_call_audio_out_window_g1

0x9bc2,	// (0x000a44ab) popup_call_audio_out_window_g2_ParamLimits

0x9bc2,	// (0x000a44ab) popup_call_audio_out_window_g2

0x9bce,	// (0x000a44b7) popup_call_audio_out_window_g3_ParamLimits

0x9bce,	// (0x000a44b7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000a99c6) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000a99c6) popup_call_audio_out_window_g

0x9be0,	// (0x000a44c9) popup_call_audio_out_window_t1_ParamLimits

0x9be0,	// (0x000a44c9) popup_call_audio_out_window_t1

0x9bf8,	// (0x000a44e1) popup_call_audio_out_window_t2_ParamLimits

0x9bf8,	// (0x000a44e1) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000a99cd) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000a99cd) popup_call_audio_out_window_t

0x9c0d,	// (0x000a44f6) bg_popup_call_pane_ParamLimits

0x9c0d,	// (0x000a44f6) bg_popup_call_pane

0x1075,	// (0x0009b95e) call_thumbnail_pane_cp_ParamLimits

0x1075,	// (0x0009b95e) call_thumbnail_pane_cp

0x9c91,	// (0x000a457a) call_type_pane_cp01_ParamLimits

0x9c91,	// (0x000a457a) call_type_pane_cp01

0x9cd5,	// (0x000a45be) popup_call_audio_first_window_g1_ParamLimits

0x9cd5,	// (0x000a45be) popup_call_audio_first_window_g1

0x9d21,	// (0x000a460a) popup_call_audio_first_window_g2_ParamLimits

0x9d21,	// (0x000a460a) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000a99d2) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000a99d2) popup_call_audio_first_window_g

0x9d65,	// (0x000a464e) popup_call_audio_first_window_t1_ParamLimits

0x9d65,	// (0x000a464e) popup_call_audio_first_window_t1

0x9e11,	// (0x000a46fa) popup_call_audio_first_window_t4_ParamLimits

0x9e11,	// (0x000a46fa) popup_call_audio_first_window_t4

0x9e9d,	// (0x000a4786) popup_call_audio_first_window_t5_ParamLimits

0x9e9d,	// (0x000a4786) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000a99d7) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000a99d7) popup_call_audio_first_window_t

0x9ecc,	// (0x000a47b5) bg_popup_call_pane_cp02

0x9ed6,	// (0x000a47bf) call_type_pane_cp023

0x9ede,	// (0x000a47c7) popup_call_audio_wait_window_g1

0x9ee6,	// (0x000a47cf) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a99de) popup_call_audio_wait_window_g

0x9eee,	// (0x000a47d7) popup_call_audio_wait_window_t3

0x9efc,	// (0x000a47e5) bg_popup_call_pane_cp03_ParamLimits

0x9efc,	// (0x000a47e5) bg_popup_call_pane_cp03

0x9f5c,	// (0x000a4845) call_thumbnail_pane_cp011_ParamLimits

0x9f5c,	// (0x000a4845) call_thumbnail_pane_cp011

0x9f68,	// (0x000a4851) call_type_pane_cp034_ParamLimits

0x9f68,	// (0x000a4851) call_type_pane_cp034

0xa334,	// (0x000a4c1d) popup_call_audio_second_window_g1_ParamLimits

0xa334,	// (0x000a4c1d) popup_call_audio_second_window_g1

0xa370,	// (0x000a4c59) popup_call_audio_second_window_g2_ParamLimits

0xa370,	// (0x000a4c59) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000a99e3) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000a99e3) popup_call_audio_second_window_g

0xa3ac,	// (0x000a4c95) popup_call_audio_second_window_t1_ParamLimits

0xa3ac,	// (0x000a4c95) popup_call_audio_second_window_t1

0xa42d,	// (0x000a4d16) popup_call_audio_second_window_t2_ParamLimits

0xa42d,	// (0x000a4d16) popup_call_audio_second_window_t2

0xa5cb,	// (0x000a4eb4) popup_call_audio_second_window_t3_ParamLimits

0xa5cb,	// (0x000a4eb4) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000a99e8) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000a99e8) popup_call_audio_second_window_t

0x9ecc,	// (0x000a47b5) bg_popup_call_pane_cp04

0xa601,	// (0x000a4eea) list_conf_pane

0xa609,	// (0x000a4ef2) popup_call_audio_conf_window_t1

0xa617,	// (0x000a4f00) call_thumbnail_pane_g1

0xa61f,	// (0x000a4f08) bg_pinb_pane_ParamLimits

0xa61f,	// (0x000a4f08) bg_pinb_pane

0xa62d,	// (0x000a4f16) find_pinb_pane

0xa636,	// (0x000a4f1f) listscroll_pinb_pane_ParamLimits

0xa636,	// (0x000a4f1f) listscroll_pinb_pane

0xa645,	// (0x000a4f2e) pinb_bg_pane_g1

0x1099,	// (0x0009b982) pinb_bg_pane_g2

0x10a5,	// (0x0009b98e) pinb_bg_pane_g3

0x10b1,	// (0x0009b99a) pinb_bg_pane_g4

0x10bd,	// (0x0009b9a6) pinb_bg_pane_g5

0x10c9,	// (0x0009b9b2) pinb_bg_pane_g6

0x10d4,	// (0x0009b9bd) pinb_bg_pane_g7

0x10df,	// (0x0009b9c8) pinb_bg_pane_g8

0x10ea,	// (0x0009b9d3) pinb_bg_pane_g9

0x10f4,	// (0x0009b9dd) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000a99ef) pinb_bg_pane_g

0x1111,	// (0x0009b9fa) grid_pinb_pane

0x111c,	// (0x0009ba05) list_pinb_pane

0x1127,	// (0x0009ba10) scroll_pane_cp01_ParamLimits

0x1127,	// (0x0009ba10) scroll_pane_cp01

0xa64f,	// (0x000a4f38) find_pinb_pane_g1_ParamLimits

0xa64f,	// (0x000a4f38) find_pinb_pane_g1

0xa667,	// (0x000a4f50) find_pinb_pane_t1

0xa679,	// (0x000a4f62) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000a9a09) find_pinb_pane_t

0xa68e,	// (0x000a4f77) input_focus_pane_cp01_ParamLimits

0xa68e,	// (0x000a4f77) input_focus_pane_cp01

0x1139,	// (0x0009ba22) cell_pinb_pane_ParamLimits

0x1139,	// (0x0009ba22) cell_pinb_pane

0xa69a,	// (0x000a4f83) cell_pinb_pane_g1_ParamLimits

0xa69a,	// (0x000a4f83) cell_pinb_pane_g1

0xa6ad,	// (0x000a4f96) cell_pinb_pane_g2_ParamLimits

0xa6ad,	// (0x000a4f96) cell_pinb_pane_g2

0xa6b9,	// (0x000a4fa2) cell_pinb_pane_g3_ParamLimits

0xa6b9,	// (0x000a4fa2) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000a9a0e) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000a9a0e) cell_pinb_pane_g

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp01

0x1168,	// (0x0009ba51) list_pinb_item_pane_ParamLimits

0x1168,	// (0x0009ba51) list_pinb_item_pane

0x9ecc,	// (0x000a47b5) list_highlight_pane_cp02

0x1192,	// (0x0009ba7b) list_pinb_item_pane_g1_ParamLimits

0x1192,	// (0x0009ba7b) list_pinb_item_pane_g1

0x119f,	// (0x0009ba88) list_pinb_item_pane_g2_ParamLimits

0x119f,	// (0x0009ba88) list_pinb_item_pane_g2

0x11ab,	// (0x0009ba94) list_pinb_item_pane_g3_ParamLimits

0x11ab,	// (0x0009ba94) list_pinb_item_pane_g3

0x11bc,	// (0x0009baa5) list_pinb_item_pane_g4_ParamLimits

0x11bc,	// (0x0009baa5) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000a9a15) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000a9a15) list_pinb_item_pane_g

0x11c8,	// (0x0009bab1) list_pinb_item_pane_t1_ParamLimits

0x11c8,	// (0x0009bab1) list_pinb_item_pane_t1

0x11f9,	// (0x0009bae2) calc_display_pane

0x1217,	// (0x0009bb00) calc_paper_pane

0x1233,	// (0x0009bb1c) grid_calc_pane

0x9ecc,	// (0x000a47b5) bg_list_pane_cp01

0x125f,	// (0x0009bb48) clock_g1

0x1267,	// (0x0009bb50) clock_g2

0x0001,

0xf135,	// (0x000a9a1e) clock_g

0x1271,	// (0x0009bb5a) clock_t1_ParamLimits

0x1271,	// (0x0009bb5a) clock_t1

0x1286,	// (0x0009bb6f) clock_t2_ParamLimits

0x1286,	// (0x0009bb6f) clock_t2

0x1298,	// (0x0009bb81) clock_t3_ParamLimits

0x1298,	// (0x0009bb81) clock_t3

0x12aa,	// (0x0009bb93) clock_t4_ParamLimits

0x12aa,	// (0x0009bb93) clock_t4

0x12bc,	// (0x0009bba5) clock_t5_ParamLimits

0x12bc,	// (0x0009bba5) clock_t5

0x12d1,	// (0x0009bbba) clock_t6_ParamLimits

0x12d1,	// (0x0009bbba) clock_t6

0x12e3,	// (0x0009bbcc) clock_t7_ParamLimits

0x12e3,	// (0x0009bbcc) clock_t7

0x12f5,	// (0x0009bbde) clock_t8_ParamLimits

0x12f5,	// (0x0009bbde) clock_t8

0x130b,	// (0x0009bbf4) clock_t9_ParamLimits

0x130b,	// (0x0009bbf4) clock_t9

0x0008,

0xf13a,	// (0x000a9a23) clock_t_ParamLimits

0xf13a,	// (0x000a9a23) clock_t

0xa6c5,	// (0x000a4fae) popup_clock_analogue_window_cp02

0xa6c5,	// (0x000a4fae) popup_clock_digital_window_cp01

0xa6cd,	// (0x000a4fb6) listscroll_help_pane

0x9ecc,	// (0x000a47b5) phob_pre_status_pane

0xa6d7,	// (0x000a4fc0) grid_qdial_pane

0xa61f,	// (0x000a4f08) listscroll_mce_pane

0xa61f,	// (0x000a4f08) bg_notes_pane

0xa6e1,	// (0x000a4fca) list_notes_pane

0x1321,	// (0x0009bc0a) scroll_pane_cp06

0xa6ef,	// (0x000a4fd8) bg_calc_paper_pane

0x1330,	// (0x0009bc19) list_calc_pane

0xa703,	// (0x000a4fec) bg_calc_display_pane

0x134a,	// (0x0009bc33) calc_display_pane_t1

0x135f,	// (0x0009bc48) calc_display_pane_t2

0x1374,	// (0x0009bc5d) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000a9a36) calc_display_pane_t

0x1386,	// (0x0009bc6f) cell_calc_pane_ParamLimits

0x1386,	// (0x0009bc6f) cell_calc_pane

0xa70f,	// (0x000a4ff8) bg_calc_paper_pane_g1

0xa71b,	// (0x000a5004) bg_calc_paper_pane_g2

0xa727,	// (0x000a5010) bg_calc_paper_pane_g3

0xa733,	// (0x000a501c) bg_calc_paper_pane_g4

0xa73f,	// (0x000a5028) bg_calc_paper_pane_g5

0x13b3,	// (0x0009bc9c) bg_calc_paper_pane_g6

0x13c4,	// (0x0009bcad) bg_calc_paper_pane_g7

0x13d5,	// (0x0009bcbe) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000a9a3d) bg_calc_paper_pane_g

0x13e6,	// (0x0009bccf) calc_bg_paper_pane_g9

0x13f7,	// (0x0009bce0) list_calc_item_pane_ParamLimits

0x13f7,	// (0x0009bce0) list_calc_item_pane

0xa74b,	// (0x000a5034) list_calc_item_pane_g1

0x142b,	// (0x0009bd14) list_calc_item_pane_t1_ParamLimits

0x142b,	// (0x0009bd14) list_calc_item_pane_t1

0x143d,	// (0x0009bd26) list_calc_item_pane_t2_ParamLimits

0x143d,	// (0x0009bd26) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000a9a4e) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000a9a4e) list_calc_item_pane_t

0xa758,	// (0x000a5041) cell_calc_pane_g1

0xa762,	// (0x000a504b) grid_highlight_pane_cp02

0xa784,	// (0x000a506d) bg_calc_display_pane_g1

0x146d,	// (0x0009bd56) bg_calc_display_pane_g2

0xa78d,	// (0x000a5076) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000a9a58) bg_calc_display_pane_g

0x1477,	// (0x0009bd60) cell_qdial_pane_ParamLimits

0x1477,	// (0x0009bd60) cell_qdial_pane

0x148b,	// (0x0009bd74) cell_qdial_pane_g1_ParamLimits

0x148b,	// (0x0009bd74) cell_qdial_pane_g1

0x1498,	// (0x0009bd81) cell_qdial_pane_g2_ParamLimits

0x1498,	// (0x0009bd81) cell_qdial_pane_g2

0xa796,	// (0x000a507f) cell_qdial_pane_g3_ParamLimits

0xa796,	// (0x000a507f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000a9a5f) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000a9a5f) cell_qdial_pane_g

0x14b5,	// (0x0009bd9e) cell_qdial_pane_t1_ParamLimits

0x14b5,	// (0x0009bd9e) cell_qdial_pane_t1

0x14cd,	// (0x0009bdb6) cell_qdial_pane_t2_ParamLimits

0x14cd,	// (0x0009bdb6) cell_qdial_pane_t2

0x14e0,	// (0x0009bdc9) cell_qdial_pane_t3_ParamLimits

0x14e0,	// (0x0009bdc9) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000a9a68) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000a9a68) cell_qdial_pane_t

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp04

0xa7a2,	// (0x000a508b) thumbnail_qdial_pane_ParamLimits

0xa7a2,	// (0x000a508b) thumbnail_qdial_pane

0xa7fe,	// (0x000a50e7) list_help_pane

0xa807,	// (0x000a50f0) scroll_pane_cp02

0x14f3,	// (0x0009bddc) help_list_pane_t1_ParamLimits

0x14f3,	// (0x0009bddc) help_list_pane_t1

0x152d,	// (0x0009be16) bg_notes_pane_g2

0x1535,	// (0x0009be1e) bg_notes_pane_g3

0x153d,	// (0x0009be26) notes_bg_pane_g1

0x1545,	// (0x0009be2e) notes_bg_pane_g4

0x154d,	// (0x0009be36) notes_bg_pane_g5

0x1555,	// (0x0009be3e) notes_bg_pane_g6

0x155d,	// (0x0009be46) notes_bg_pane_g7

0x1565,	// (0x0009be4e) notes_bg_pane_g8

0x156d,	// (0x0009be56) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000a9a86) notes_bg_pane_g

0x1575,	// (0x0009be5e) list_notes_text_pane_ParamLimits

0x1575,	// (0x0009be5e) list_notes_text_pane

0xa810,	// (0x000a50f9) list_notes_text_pane_g1

0x9fa4,	// (0x000a488d) list_notes_text_pane_t1

0x15a4,	// (0x0009be8d) listscroll_cale_week_pane

0x15c9,	// (0x0009beb2) bg_cale_heading_pane

0xa833,	// (0x000a511c) bg_cale_pane_cp01

0x15eb,	// (0x0009bed4) cale_week_corner_pane

0x1605,	// (0x0009beee) cale_week_day_heading_pane

0x1627,	// (0x0009bf10) cale_week_scroll_pane_g1

0x1644,	// (0x0009bf2d) cale_week_scroll_pane_g2

0x1657,	// (0x0009bf40) cale_week_scroll_pane_g3

0x166a,	// (0x0009bf53) cale_week_scroll_pane_g4

0x167d,	// (0x0009bf66) cale_week_scroll_pane_g5

0x1690,	// (0x0009bf79) cale_week_scroll_pane_g6

0x16a3,	// (0x0009bf8c) cale_week_scroll_pane_g7

0x16b6,	// (0x0009bf9f) cale_week_scroll_pane_g8

0x16cb,	// (0x0009bfb4) cale_week_scroll_pane_g9

0x16de,	// (0x0009bfc7) cale_week_scroll_pane_g10

0x16f1,	// (0x0009bfda) cale_week_scroll_pane_g11

0x1704,	// (0x0009bfed) cale_week_scroll_pane_g12

0x171b,	// (0x0009c004) cale_week_scroll_pane_g13

0x1736,	// (0x0009c01f) cale_week_scroll_pane_g14

0x1751,	// (0x0009c03a) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000a9a95) cale_week_scroll_pane_g

0x1781,	// (0x0009c06a) cale_week_time_pane

0x1796,	// (0x0009c07f) grid_cale_week_pane

0xa863,	// (0x000a514c) scroll_pane_cp08

0x17b7,	// (0x0009c0a0) cell_cale_week_pane_ParamLimits

0x17b7,	// (0x0009c0a0) cell_cale_week_pane

0x181b,	// (0x0009c104) cale_week_day_heading_pane_t1

0x1856,	// (0x0009c13f) cale_week_day_heading_pane_t2

0x1891,	// (0x0009c17a) cale_week_day_heading_pane_t3

0x18cc,	// (0x0009c1b5) cale_week_day_heading_pane_t4

0x1907,	// (0x0009c1f0) cale_week_day_heading_pane_t5

0x1942,	// (0x0009c22b) cale_week_day_heading_pane_t6

0x197d,	// (0x0009c266) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000a9ab6) cale_week_day_heading_pane_t

0xa880,	// (0x000a5169) bg_cale_side_pane

0x19b8,	// (0x0009c2a1) cale_week_time_pane_t1

0x19d2,	// (0x0009c2bb) cale_week_time_pane_t2

0x19ec,	// (0x0009c2d5) cale_week_time_pane_t3

0x1a06,	// (0x0009c2ef) cale_week_time_pane_t4

0x1a20,	// (0x0009c309) cale_week_time_pane_t5

0x1a3c,	// (0x0009c325) cale_week_time_pane_t6

0x1a5e,	// (0x0009c347) cale_week_time_pane_t7

0x1a82,	// (0x0009c36b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000a9ac5) cale_week_time_pane_t

0x1aa8,	// (0x0009c391) cell_cale_week_pane_g2

0x1acc,	// (0x0009c3b5) cell_cale_week_pane_g3_ParamLimits

0x1acc,	// (0x0009c3b5) cell_cale_week_pane_g3

0xa88e,	// (0x000a5177) grid_highlight_pane_cp07

0xa896,	// (0x000a517f) listscroll_gms_pane

0xa8a0,	// (0x000a5189) grid_gms_pane

0xa8a9,	// (0x000a5192) listscroll_gms_pane_g1

0xa8b1,	// (0x000a519a) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000a9ad6) listscroll_gms_pane_g

0x1ae4,	// (0x0009c3cd) scroll_pane_cp010

0x1aef,	// (0x0009c3d8) cell_gms_pane_ParamLimits

0x1aef,	// (0x0009c3d8) cell_gms_pane

0x1aff,	// (0x0009c3e8) cell_gms_pane_g1

0xa8b9,	// (0x000a51a2) cell_gms_pane_g2

0xa810,	// (0x000a50f9) cell_gms_pane_g3

0xa8c1,	// (0x000a51aa) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000a9adb) cell_gms_pane_g

0xa8ca,	// (0x000a51b3) grid_highlight_pane_cp09

0x4208,	// (0x0009eaf1) phob_pre_status_pane_g1

0x4210,	// (0x0009eaf9) phob_pre_status_pane_g2

0x4218,	// (0x0009eb01) phob_pre_status_pane_g3

0x4220,	// (0x0009eb09) phob_pre_status_pane_g4

0x0004,

0xf54f,	// (0x000a9e38) phob_pre_status_pane_g

0x4230,	// (0x0009eb19) phob_pre_status_pane_t1

0x4240,	// (0x0009eb29) phob_pre_status_pane_t2

0x4250,	// (0x0009eb39) phob_pre_status_pane_t3

0x0002,

0xf55a,	// (0x000a9e43) phob_pre_status_pane_t

0x9ecc,	// (0x000a47b5) bg_list_pane_cp05

0x1b0f,	// (0x0009c3f8) grid_vorec_pane

0x1b19,	// (0x0009c402) vorec_t1

0x1b27,	// (0x0009c410) vorec_t2

0x1b35,	// (0x0009c41e) vorec_t3

0x1b43,	// (0x0009c42c) vorec_t4

0x1b51,	// (0x0009c43a) vorec_t5

0x1b5f,	// (0x0009c448) vorec_t6

0x0006,

0xf1fb,	// (0x000a9ae4) vorec_t

0x1b7b,	// (0x0009c464) wait_bar_pane_cp01

0x1b83,	// (0x0009c46c) cell_vorec_pane_ParamLimits

0x1b83,	// (0x0009c46c) cell_vorec_pane

0x1b96,	// (0x0009c47f) cell_vorec_pane_g1

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp05

0x1bb0,	// (0x0009c499) cams_zoom_pane

0x1bbc,	// (0x0009c4a5) image_vga_pane

0x1bcb,	// (0x0009c4b4) main_camera_pane_g1

0x1bd9,	// (0x0009c4c2) main_camera_pane_g2

0x1be5,	// (0x0009c4ce) main_camera_pane_g3

0x1bf1,	// (0x0009c4da) main_camera_pane_g4

0x1bfd,	// (0x0009c4e6) main_camera_pane_g5

0x1c09,	// (0x0009c4f2) main_camera_pane_g6

0x1c15,	// (0x0009c4fe) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a9af3) main_camera_pane_g

0x1c21,	// (0x0009c50a) main_camera_pane_t1

0x1c33,	// (0x0009c51c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a9b04) main_camera_pane_t

0x1c54,	// (0x0009c53d) cams_zoom_pane_cp_ParamLimits

0x1c54,	// (0x0009c53d) cams_zoom_pane_cp

0x1c78,	// (0x0009c561) image_cif_pane_ParamLimits

0x1c78,	// (0x0009c561) image_cif_pane

0x1c96,	// (0x0009c57f) image_subqcif_pane

0x1c9e,	// (0x0009c587) main_video_pane_g1_ParamLimits

0x1c9e,	// (0x0009c587) main_video_pane_g1

0x1cbe,	// (0x0009c5a7) main_video_pane_g2_ParamLimits

0x1cbe,	// (0x0009c5a7) main_video_pane_g2

0x1cee,	// (0x0009c5d7) main_video_pane_g3_ParamLimits

0x1cee,	// (0x0009c5d7) main_video_pane_g3

0x1d17,	// (0x0009c600) main_video_pane_g4_ParamLimits

0x1d17,	// (0x0009c600) main_video_pane_g4

0x1d40,	// (0x0009c629) main_video_pane_g5_ParamLimits

0x1d40,	// (0x0009c629) main_video_pane_g5

0xa8de,	// (0x000a51c7) main_video_pane_g6_ParamLimits

0xa8de,	// (0x000a51c7) main_video_pane_g6

0x0006,

0xf220,	// (0x000a9b09) main_video_pane_g_ParamLimits

0xf220,	// (0x000a9b09) main_video_pane_g

0x1d62,	// (0x0009c64b) main_video_pane_t1_ParamLimits

0x1d62,	// (0x0009c64b) main_video_pane_t1

0xa8f8,	// (0x000a51e1) cams_zoom_pane_g1

0xa901,	// (0x000a51ea) cams_zoom_pane_g2

0xa90a,	// (0x000a51f3) cams_zoom_pane_g3

0xa913,	// (0x000a51fc) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a9b18) cams_zoom_pane_g

0x1dac,	// (0x0009c695) grid_cams_pane

0x1dba,	// (0x0009c6a3) linegrid_cams_pane

0x1dc8,	// (0x0009c6b1) cell_cams_pane_ParamLimits

0x1dc8,	// (0x0009c6b1) cell_cams_pane

0xa91c,	// (0x000a5205) cams_burst_image_pane

0xa924,	// (0x000a520d) cell_cams_pane_g1

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp03

0xa758,	// (0x000a5041) mp_bg_pane_g1

0x9ecc,	// (0x000a47b5) bg_list_pane_cp03

0xc6cf,	// (0x000a6fb8) bg_mp_pane

0xc6d7,	// (0x000a6fc0) grid_mp_pane

0xc6df,	// (0x000a6fc8) media_player_g1

0xc6e7,	// (0x000a6fd0) media_player_t1

0xc6f5,	// (0x000a6fde) media_player_t2

0xc703,	// (0x000a6fec) media_player_t3

0xc711,	// (0x000a6ffa) media_player_t4

0xc71f,	// (0x000a7008) media_player_t5

0xc72d,	// (0x000a7016) media_player_t6

0xc73b,	// (0x000a7024) media_player_t7

0x0006,

0x028e,	// (0x0009ab77) media_player_t

0xc749,	// (0x000a7032) wait_bar_pane_cp02

0xf53b,	// (0x000a9e24) main_usb_pane_t

0x41ff,	// (0x0009eae8) cell_mp_pane

0xa758,	// (0x000a5041) cell_mp_pane_g1

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp06

0xa92c,	// (0x000a5215) grid_skin_colour_pane

0xa934,	// (0x000a521d) list_highlight_pane_cp03

0x1ee9,	// (0x0009c7d2) skin_g1

0xa93c,	// (0x000a5225) skin_t1

0xa94b,	// (0x000a5234) skin_t2

0x0001,

0xf264,	// (0x000a9b4d) skin_t

0x1ef3,	// (0x0009c7dc) cell_skin_colour_pane_ParamLimits

0x1ef3,	// (0x0009c7dc) cell_skin_colour_pane

0xa959,	// (0x000a5242) cell_skin_colour_pane_g1

0x1f77,	// (0x0009c860) call_video_g1_ParamLimits

0x1f77,	// (0x0009c860) call_video_g1

0x1f87,	// (0x0009c870) call_video_g2_ParamLimits

0x1f87,	// (0x0009c870) call_video_g2

0x0001,

0xf269,	// (0x000a9b52) call_video_g_ParamLimits

0xf269,	// (0x000a9b52) call_video_g

0x1fe1,	// (0x0009c8ca) call_video_uplink_pane_cp1_ParamLimits

0x1fe1,	// (0x0009c8ca) call_video_uplink_pane_cp1

0xa96b,	// (0x000a5254) call_video_uplink_pane_cp2

0x20ad,	// (0x0009c996) video_down_crop_pane_ParamLimits

0x20ad,	// (0x0009c996) video_down_crop_pane

0x219f,	// (0x0009ca88) video_down_pane_ParamLimits

0x219f,	// (0x0009ca88) video_down_pane

0xa973,	// (0x000a525c) video_down_subqcif_pane_ParamLimits

0xa973,	// (0x000a525c) video_down_subqcif_pane

0xa98b,	// (0x000a5274) video_down_subqcif_pane_cp_ParamLimits

0xa98b,	// (0x000a5274) video_down_subqcif_pane_cp

0xa9b1,	// (0x000a529a) im_reading_pane_ParamLimits

0xa9b1,	// (0x000a529a) im_reading_pane

0x22c1,	// (0x0009cbaa) im_writing_pane_ParamLimits

0x22c1,	// (0x0009cbaa) im_writing_pane

0x22df,	// (0x0009cbc8) im_reading_pane_t1

0xa9cb,	// (0x000a52b4) list_im_pane

0xa9dc,	// (0x000a52c5) scroll_pane_cp07

0x233a,	// (0x0009cc23) im_writing_pane_t1_ParamLimits

0x233a,	// (0x0009cc23) im_writing_pane_t1

0xa9f5,	// (0x000a52de) im_writing_pane_t2_ParamLimits

0xa9f5,	// (0x000a52de) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a9b5c) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a9b5c) im_writing_pane_t

0x9ecc,	// (0x000a47b5) input_focus_pane_cp04

0x9ecc,	// (0x000a47b5) input_focus_pane_cp05

0x234c,	// (0x0009cc35) list_im_single_pane_ParamLimits

0x234c,	// (0x0009cc35) list_im_single_pane

0x2374,	// (0x0009cc5d) list_single_im_pane_t1

0x41c3,	// (0x0009eaac) blid_accuracy_pane

0x41cb,	// (0x0009eab4) blid_compass_pane

0x41d5,	// (0x0009eabe) main_location_t1

0x41e3,	// (0x0009eacc) main_location_t2

0x41f1,	// (0x0009eada) main_location_t3

0x0002,

0xf548,	// (0x000a9e31) main_location_t

0x9ecc,	// (0x000a47b5) aid_levels_location

0xa758,	// (0x000a5041) blid_accuracy_pane_g1

0xa758,	// (0x000a5041) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a9bbe) blid_accuracy_pane_g

0xaa3d,	// (0x000a5326) wml_content_pane

0xaa7b,	// (0x000a5364) wml_button_pane_ParamLimits

0xaa7b,	// (0x000a5364) wml_button_pane

0x2383,	// (0x0009cc6c) wml_list_single_large_pane_ParamLimits

0x2383,	// (0x0009cc6c) wml_list_single_large_pane

0x23b4,	// (0x0009cc9d) wml_list_single_medium_pane_ParamLimits

0x23b4,	// (0x0009cc9d) wml_list_single_medium_pane

0x23ec,	// (0x0009ccd5) wml_list_single_small_pane_ParamLimits

0x23ec,	// (0x0009ccd5) wml_list_single_small_pane

0xaa8f,	// (0x000a5378) wml_selection_box_pane_ParamLimits

0xaa8f,	// (0x000a5378) wml_selection_box_pane

0xaaa2,	// (0x000a538b) wml_list_single_pane_t1

0xaab1,	// (0x000a539a) wml_list_single_medium_pane_t1

0xaac0,	// (0x000a53a9) wml_list_single_large_pane_t1

0xaacf,	// (0x000a53b8) input_focus_pane_cp02_ParamLimits

0xaacf,	// (0x000a53b8) input_focus_pane_cp02

0xaae2,	// (0x000a53cb) wml_selection_box_pane_g1

0xaaeb,	// (0x000a53d4) wml_selection_box_pane_t1_ParamLimits

0xaaeb,	// (0x000a53d4) wml_selection_box_pane_t1

0xa61f,	// (0x000a4f08) bg_wml_button_pane_ParamLimits

0xa61f,	// (0x000a4f08) bg_wml_button_pane

0xab03,	// (0x000a53ec) wml_button_pane_g1

0xab0b,	// (0x000a53f4) wml_button_pane_t1

0xab03,	// (0x000a53ec) wml_button_bg_pane_g1

0xab1b,	// (0x000a5404) wml_button_bg_pane_g2

0xab23,	// (0x000a540c) wml_button_bg_pane_g3

0xab2b,	// (0x000a5414) wml_button_bg_pane_g4

0xab33,	// (0x000a541c) wml_button_bg_pane_g5

0xab3b,	// (0x000a5424) wml_button_bg_pane_g6

0xab43,	// (0x000a542c) wml_button_bg_pane_g7

0xab4b,	// (0x000a5434) wml_button_bg_pane_g8

0xab53,	// (0x000a543c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a9b61) wml_button_bg_pane_g

0x242d,	// (0x0009cd16) bg_list_pane_cp02

0xab5b,	// (0x000a5444) mce_header_pane_ParamLimits

0xab5b,	// (0x000a5444) mce_header_pane

0xab71,	// (0x000a545a) mce_icon_pane

0xab71,	// (0x000a545a) mce_image_pane

0xab7a,	// (0x000a5463) mce_text_pane_ParamLimits

0xab7a,	// (0x000a5463) mce_text_pane

0x2437,	// (0x0009cd20) scroll_pane_cp03

0xaa73,	// (0x000a535c) scroll_pane_cp04

0xab8d,	// (0x000a5476) scroll_pane_cp05_ParamLimits

0xab8d,	// (0x000a5476) scroll_pane_cp05

0x2441,	// (0x0009cd2a) mce_header_field_pane_ParamLimits

0x2441,	// (0x0009cd2a) mce_header_field_pane

0x2461,	// (0x0009cd4a) mce_header_field_pane_2_ParamLimits

0x2461,	// (0x0009cd4a) mce_header_field_pane_2

0x2477,	// (0x0009cd60) mce_header_field_pane_3

0x247f,	// (0x0009cd68) list_single_mce_message_pane_ParamLimits

0x247f,	// (0x0009cd68) list_single_mce_message_pane

0x24b1,	// (0x0009cd9a) list_single_mce_smart_pane_ParamLimits

0x24b1,	// (0x0009cd9a) list_single_mce_smart_pane

0xab99,	// (0x000a5482) input_focus_pane_cp03

0xaba2,	// (0x000a548b) list_header_data_pane

0x24ee,	// (0x0009cdd7) mce_header_field_pane_t1

0x24fe,	// (0x0009cde7) list_single_mce_header_pane_ParamLimits

0x24fe,	// (0x0009cde7) list_single_mce_header_pane

0xabaa,	// (0x000a5493) list_single_mce_header_pane_t1

0xabb9,	// (0x000a54a2) list_single_mce_message_pane_g1

0xabc1,	// (0x000a54aa) list_single_mce_message_pane_t1

0x2555,	// (0x0009ce3e) bg_cale_heading_pane_cp01_ParamLimits

0x2555,	// (0x0009ce3e) bg_cale_heading_pane_cp01

0xabcf,	// (0x000a54b8) bg_cale_pane_cp02_ParamLimits

0xabcf,	// (0x000a54b8) bg_cale_pane_cp02

0x2598,	// (0x0009ce81) cale_month_corner_pane

0x25b2,	// (0x0009ce9b) cale_month_day_heading_pane_ParamLimits

0x25b2,	// (0x0009ce9b) cale_month_day_heading_pane

0x260d,	// (0x0009cef6) cale_month_pane_g1_ParamLimits

0x260d,	// (0x0009cef6) cale_month_pane_g1

0x2645,	// (0x0009cf2e) cale_month_pane_g2_ParamLimits

0x2645,	// (0x0009cf2e) cale_month_pane_g2

0x2670,	// (0x0009cf59) cale_month_pane_g3_ParamLimits

0x2670,	// (0x0009cf59) cale_month_pane_g3

0x26c0,	// (0x0009cfa9) cale_month_pane_g4_ParamLimits

0x26c0,	// (0x0009cfa9) cale_month_pane_g4

0x2710,	// (0x0009cff9) cale_month_pane_g5_ParamLimits

0x2710,	// (0x0009cff9) cale_month_pane_g5

0x2760,	// (0x0009d049) cale_month_pane_g6_ParamLimits

0x2760,	// (0x0009d049) cale_month_pane_g6

0x27b0,	// (0x0009d099) cale_month_pane_g7_ParamLimits

0x27b0,	// (0x0009d099) cale_month_pane_g7

0x2818,	// (0x0009d101) cale_month_pane_g8_ParamLimits

0x2818,	// (0x0009d101) cale_month_pane_g8

0x2880,	// (0x0009d169) cale_month_pane_g9_ParamLimits

0x2880,	// (0x0009d169) cale_month_pane_g9

0x28de,	// (0x0009d1c7) cale_month_pane_g10_ParamLimits

0x28de,	// (0x0009d1c7) cale_month_pane_g10

0x293c,	// (0x0009d225) cale_month_pane_g11_ParamLimits

0x293c,	// (0x0009d225) cale_month_pane_g11

0x2990,	// (0x0009d279) cale_month_pane_g12_ParamLimits

0x2990,	// (0x0009d279) cale_month_pane_g12

0x29e6,	// (0x0009d2cf) cale_month_pane_g13_ParamLimits

0x29e6,	// (0x0009d2cf) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a9b74) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a9b74) cale_month_pane_g

0x2a3c,	// (0x0009d325) cale_month_week_pane

0x2a51,	// (0x0009d33a) grid_cale_month_pane_ParamLimits

0x2a51,	// (0x0009d33a) grid_cale_month_pane

0x2aa3,	// (0x0009d38c) cale_month_day_heading_pane_t1

0x2b29,	// (0x0009d412) cale_month_day_heading_pane_t2

0x2bba,	// (0x0009d4a3) cale_month_day_heading_pane_t3

0x2c4b,	// (0x0009d534) cale_month_day_heading_pane_t4

0x2cdc,	// (0x0009d5c5) cale_month_day_heading_pane_t5

0x2d6d,	// (0x0009d656) cale_month_day_heading_pane_t6

0x2e0a,	// (0x0009d6f3) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a9b8f) cale_month_day_heading_pane_t

0xa880,	// (0x000a5169) bg_cale_side_pane_cp01

0x2eb3,	// (0x0009d79c) cale_month_week_pane_t1

0x2ecc,	// (0x0009d7b5) cale_month_week_pane_t2

0x2ee5,	// (0x0009d7ce) cale_month_week_pane_t3

0x2efe,	// (0x0009d7e7) cale_month_week_pane_t4

0x2f1b,	// (0x0009d804) cale_month_week_pane_t5

0x2f3c,	// (0x0009d825) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a9b9e) cale_month_week_pane_t

0x2f5d,	// (0x0009d846) cell_cale_month_pane_ParamLimits

0x2f5d,	// (0x0009d846) cell_cale_month_pane

0x30ad,	// (0x0009d996) cell_cale_month_pane_g1

0x30b9,	// (0x0009d9a2) cell_cale_month_pane_t1_ParamLimits

0x30b9,	// (0x0009d9a2) cell_cale_month_pane_t1

0xa88e,	// (0x000a5177) grid_highlight_pane_cp08

0xa758,	// (0x000a5041) main_smil_g1

0x30d9,	// (0x0009d9c2) smil_status_pane

0xac0e,	// (0x000a54f7) smil_text_pane

0xc5ef,	// (0x000a6ed8) bg_popup_call3_rect_pane_g8

0xc5f7,	// (0x000a6ee0) bg_popup_call3_rect_pane_g9

0x0008,

0xf523,	// (0x000a9e0c) bg_popup_call3_rect_pane_g

0xc83e,	// (0x000a7127) smil_status_volume_pane_g1

0xac18,	// (0x000a5501) smil_status_pane_t1

0x45f9,	// (0x0009eee2) volume_smil_pane

0xac2f,	// (0x000a5518) list_smil_text_pane

0x30ec,	// (0x0009d9d5) scroll_pane_cp011

0x30f7,	// (0x0009d9e0) smil_text_list_pane_t1_ParamLimits

0x30f7,	// (0x0009d9e0) smil_text_list_pane_t1

0x318b,	// (0x0009da74) aid_volume_smil_ParamLimits

0x318b,	// (0x0009da74) aid_volume_smil

0xa758,	// (0x000a5041) smil_volume_pane_g1

0xa758,	// (0x000a5041) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a9bbe) smil_volume_pane_g

0x15a4,	// (0x0009be8d) listscroll_cale_day_pane

0xac39,	// (0x000a5522) bg_cale_pane

0xac51,	// (0x000a553a) list_cale_pane

0xac74,	// (0x000a555d) scroll_pane_cp09

0xac85,	// (0x000a556e) cale_bg_pane_g1

0xac8d,	// (0x000a5576) cale_bg_pane_g2

0xac95,	// (0x000a557e) cale_bg_pane_g3

0xac9d,	// (0x000a5586) cale_bg_pane_g4

0xaca5,	// (0x000a558e) cale_bg_pane_g5

0xacad,	// (0x000a5596) cale_bg_pane_g6

0xacb5,	// (0x000a559e) cale_bg_pane_g7

0xacbd,	// (0x000a55a6) cale_bg_pane_g8

0xacc5,	// (0x000a55ae) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a9bc3) cale_bg_pane_g

0x31ad,	// (0x0009da96) list_cale_time_pane_ParamLimits

0x31ad,	// (0x0009da96) list_cale_time_pane

0xacd5,	// (0x000a55be) list_cale_time_pane_g1_ParamLimits

0xacd5,	// (0x000a55be) list_cale_time_pane_g1

0xace1,	// (0x000a55ca) list_cale_time_pane_g2_ParamLimits

0xace1,	// (0x000a55ca) list_cale_time_pane_g2

0x31d9,	// (0x0009dac2) list_cale_time_pane_g3_ParamLimits

0x31d9,	// (0x0009dac2) list_cale_time_pane_g3

0x31e7,	// (0x0009dad0) list_cale_time_pane_g4_ParamLimits

0x31e7,	// (0x0009dad0) list_cale_time_pane_g4

0x31f5,	// (0x0009dade) list_cale_time_pane_g5_ParamLimits

0x31f5,	// (0x0009dade) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a9bd6) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a9bd6) list_cale_time_pane_g

0xacfb,	// (0x000a55e4) list_cale_time_pane_t1_ParamLimits

0xacfb,	// (0x000a55e4) list_cale_time_pane_t1

0xad23,	// (0x000a560c) list_cale_time_pane_t2_ParamLimits

0xad23,	// (0x000a560c) list_cale_time_pane_t2

0x3582,	// (0x0009de6b) aid_blid_cardinal_pane

0x35c4,	// (0x0009dead) compass_pane_t4

0xad4b,	// (0x000a5634) list_cale_time_pane_t4_ParamLimits

0xad4b,	// (0x000a5634) list_cale_time_pane_t4

0x35d2,	// (0x0009debb) compass_pane_t5

0x35e2,	// (0x0009decb) compass_pane_t6

0x35f0,	// (0x0009ded9) compass_pane_t7

0xb208,	// (0x000a5af1) navi_pane_cc_t1

0xb446,	// (0x000a5d2f) aid_phob_thumbnail_center_pane

0x3cbc,	// (0x0009e5a5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a9be3) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a9be3) list_cale_time_pane_t

0x9b23,	// (0x000a440c) bg_popup_window_pane_cp02_ParamLimits

0x9b23,	// (0x000a440c) bg_popup_window_pane_cp02

0xad73,	// (0x000a565c) heading_pane_cp01_ParamLimits

0xad73,	// (0x000a565c) heading_pane_cp01

0xad7f,	// (0x000a5668) loc_req_pane_ParamLimits

0xad7f,	// (0x000a5668) loc_req_pane

0xad8f,	// (0x000a5678) loc_type_pane_ParamLimits

0xad8f,	// (0x000a5678) loc_type_pane

0xada1,	// (0x000a568a) loc_type_pane_t1_ParamLimits

0xada1,	// (0x000a568a) loc_type_pane_t1

0xadb3,	// (0x000a569c) loc_type_pane_t2_ParamLimits

0xadb3,	// (0x000a569c) loc_type_pane_t2

0xadc5,	// (0x000a56ae) loc_type_pane_t3_ParamLimits

0xadc5,	// (0x000a56ae) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a9bea) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a9bea) loc_type_pane_t

0xadd7,	// (0x000a56c0) list_loc_req_pane

0xade1,	// (0x000a56ca) scroll_pane_cp012

0x3203,	// (0x0009daec) list_single_loc_request_popup_menu_pane_ParamLimits

0x3203,	// (0x0009daec) list_single_loc_request_popup_menu_pane

0xadec,	// (0x000a56d5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadec,	// (0x000a56d5) list_single_loc_request_popup_menu_pane_g1

0xadf8,	// (0x000a56e1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xadf8,	// (0x000a56e1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a9bf1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a9bf1) list_single_loc_request_popup_menu_pane_g

0xae04,	// (0x000a56ed) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae04,	// (0x000a56ed) list_single_loc_request_popup_menu_pane_t1

0x321d,	// (0x0009db06) bg_popup_window_pane_cp03_ParamLimits

0x321d,	// (0x0009db06) bg_popup_window_pane_cp03

0x322b,	// (0x0009db14) heading_loc_req_pane_ParamLimits

0x322b,	// (0x0009db14) heading_loc_req_pane

0x3237,	// (0x0009db20) popup_dyc_status_message_window_g1_ParamLimits

0x3237,	// (0x0009db20) popup_dyc_status_message_window_g1

0x3243,	// (0x0009db2c) popup_dyc_status_message_window_t1_ParamLimits

0x3243,	// (0x0009db2c) popup_dyc_status_message_window_t1

0x3255,	// (0x0009db3e) popup_dyc_status_message_window_t2_ParamLimits

0x3255,	// (0x0009db3e) popup_dyc_status_message_window_t2

0x3267,	// (0x0009db50) popup_dyc_status_message_window_t3_ParamLimits

0x3267,	// (0x0009db50) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a9bf6) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a9bf6) popup_dyc_status_message_window_t

0x9ecc,	// (0x000a47b5) bg_heading_pane_cp01

0xae1a,	// (0x000a5703) heading_loc_req_pane_g1

0xae22,	// (0x000a570b) heading_loc_req_pane_g2

0xae2a,	// (0x000a5713) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a9bfd) heading_loc_req_pane_g

0xae32,	// (0x000a571b) heading_loc_req_pane_t1

0xae41,	// (0x000a572a) bg_popup_sub_pane_cp01_ParamLimits

0xae41,	// (0x000a572a) bg_popup_sub_pane_cp01

0xae4f,	// (0x000a5738) popup_cale_events_window_g1_ParamLimits

0xae4f,	// (0x000a5738) popup_cale_events_window_g1

0xae6f,	// (0x000a5758) popup_cale_events_window_g2_ParamLimits

0xae6f,	// (0x000a5758) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a9c31) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a9c31) popup_cale_events_window_g

0xae8f,	// (0x000a5778) popup_cale_events_window_t1_ParamLimits

0xae8f,	// (0x000a5778) popup_cale_events_window_t1

0xaea1,	// (0x000a578a) popup_cale_events_window_t2_ParamLimits

0xaea1,	// (0x000a578a) popup_cale_events_window_t2

0xaedf,	// (0x000a57c8) popup_cale_events_window_t3_ParamLimits

0xaedf,	// (0x000a57c8) popup_cale_events_window_t3

0xaf19,	// (0x000a5802) popup_cale_events_window_t4_ParamLimits

0xaf19,	// (0x000a5802) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a9c36) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a9c36) popup_cale_events_window_t

0x3362,	// (0x0009dc4b) call_type_pane

0xb29b,	// (0x000a5b84) popup_call_status_window_g1

0x336e,	// (0x0009dc57) popup_call_status_window_g2

0x337a,	// (0x0009dc63) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a9c3f) popup_call_status_window_g

0xaf4f,	// (0x000a5838) call_type_pane_g1

0xaf58,	// (0x000a5841) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a9c46) call_type_pane_g

0x9ecc,	// (0x000a47b5) bg_popup_sub_pane_cp02

0xaf61,	// (0x000a584a) listscroll_popup_wml_pane

0xaf69,	// (0x000a5852) list_wml_pane

0xaf73,	// (0x000a585c) scroll_pane_cp013

0xaf7e,	// (0x000a5867) list_single_graphic_popup_wml_pane_ParamLimits

0xaf7e,	// (0x000a5867) list_single_graphic_popup_wml_pane

0xa758,	// (0x000a5041) list_single_graphic_popup_wml_pane_g1

0xaf92,	// (0x000a587b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a9c4b) list_single_graphic_popup_wml_pane_g

0xaf9a,	// (0x000a5883) list_single_graphic_popup_wml_pane_t1

0xafb0,	// (0x000a5899) aid_call_pane

0xa617,	// (0x000a4f00) popup_clock_analogue_window_g1

0xa617,	// (0x000a4f00) popup_clock_analogue_window_g2

0x3386,	// (0x0009dc6f) popup_clock_analogue_window_g3

0x3386,	// (0x0009dc6f) popup_clock_analogue_window_g4

0xa758,	// (0x000a5041) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a9c50) popup_clock_analogue_window_g

0x338e,	// (0x0009dc77) popup_clock_analogue_window_t1

0x339c,	// (0x0009dc85) clock_digital_number_pane_ParamLimits

0x339c,	// (0x0009dc85) clock_digital_number_pane

0x33a8,	// (0x0009dc91) clock_digital_number_pane_cp02_ParamLimits

0x33a8,	// (0x0009dc91) clock_digital_number_pane_cp02

0x33b4,	// (0x0009dc9d) clock_digital_number_pane_cp03_ParamLimits

0x33b4,	// (0x0009dc9d) clock_digital_number_pane_cp03

0x33c0,	// (0x0009dca9) clock_digital_number_pane_cp04_ParamLimits

0x33c0,	// (0x0009dca9) clock_digital_number_pane_cp04

0x33d0,	// (0x0009dcb9) clock_digital_separator_pane_ParamLimits

0x33d0,	// (0x0009dcb9) clock_digital_separator_pane

0x33dc,	// (0x0009dcc5) popup_clock_digital_window_t1

0xa758,	// (0x000a5041) clock_digital_number_pane_g1

0xa758,	// (0x000a5041) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a9bbe) clock_digital_number_pane_g

0xa758,	// (0x000a5041) clock_digital_separator_pane_g1

0xa758,	// (0x000a5041) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a9bbe) clock_digital_separator_pane_g

0x9ecc,	// (0x000a47b5) bg_popup_window_pane_cp04

0xafb8,	// (0x000a58a1) heading_pane_cp03

0xafc0,	// (0x000a58a9) listscroll_popup_gms_pane

0xafc8,	// (0x000a58b1) grid_large_graphic_popup_pane

0xafd2,	// (0x000a58bb) listscroll_popup_gms_pane_g1

0xafda,	// (0x000a58c3) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a9c5b) listscroll_popup_gms_pane_g

0xaa73,	// (0x000a535c) scroll_pane_cp014

0xafe2,	// (0x000a58cb) cell_large_graphic_popup_pane_ParamLimits

0xafe2,	// (0x000a58cb) cell_large_graphic_popup_pane

0xb006,	// (0x000a58ef) cell_large_graphic_popup_pane_g1_ParamLimits

0xb006,	// (0x000a58ef) cell_large_graphic_popup_pane_g1

0xb012,	// (0x000a58fb) cell_large_graphic_popup_pane_g2_ParamLimits

0xb012,	// (0x000a58fb) cell_large_graphic_popup_pane_g2

0xb01e,	// (0x000a5907) cell_large_graphic_popup_pane_g3_ParamLimits

0xb01e,	// (0x000a5907) cell_large_graphic_popup_pane_g3

0xb02b,	// (0x000a5914) cell_large_graphic_popup_pane_g4_ParamLimits

0xb02b,	// (0x000a5914) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a9c60) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a9c60) cell_large_graphic_popup_pane_g

0xb03b,	// (0x000a5924) grid_highlight_pane_cp010

0xa758,	// (0x000a5041) bg_popup_call_pane_g1

0xb045,	// (0x000a592e) list_single_graphic_popup_conf_pane_ParamLimits

0xb045,	// (0x000a592e) list_single_graphic_popup_conf_pane

0xb058,	// (0x000a5941) list_highlight_pane_cp01

0xb061,	// (0x000a594a) list_single_graphic_popup_conf_pane_g1

0xb069,	// (0x000a5952) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a9c69) list_single_graphic_popup_conf_pane_g

0xb071,	// (0x000a595a) list_single_graphic_popup_conf_pane_t1

0xb07f,	// (0x000a5968) linegrid_cams_pane_g1

0x33f9,	// (0x0009dce2) linegrid_cams_pane_g2

0xa810,	// (0x000a50f9) linegrid_cams_pane_g3

0xb088,	// (0x000a5971) linegrid_cams_pane_g4

0x3402,	// (0x0009dceb) linegrid_cams_pane_g5

0x340b,	// (0x0009dcf4) linegrid_cams_pane_g6

0xa8c1,	// (0x000a51aa) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a9c6e) linegrid_cams_pane_g

0xb091,	// (0x000a597a) popup_clock_analogue_window

0xb091,	// (0x000a597a) popup_clock_digital_window

0x9ecc,	// (0x000a47b5) popup_phob_thumbnail_window

0xa758,	// (0x000a5041) call_video_uplink_pane_g1

0xb09a,	// (0x000a5983) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a9c7d) call_video_uplink_pane_g

0xa88e,	// (0x000a5177) video_uplink_pane

0xb0a2,	// (0x000a598b) mce_image_pane_g1

0x3414,	// (0x0009dcfd) mce_image_pane_g2

0x341c,	// (0x0009dd05) mce_image_pane_g3

0x3424,	// (0x0009dd0d) mce_image_pane_g4

0x342c,	// (0x0009dd15) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a9c82) mce_image_pane_g

0xb0ac,	// (0x000a5995) control_top_pane_stacon_cp01_ParamLimits

0xb0ac,	// (0x000a5995) control_top_pane_stacon_cp01

0xb0c0,	// (0x000a59a9) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0c0,	// (0x000a59a9) uni_indicator_pane_stacon_cp01

0xb0d1,	// (0x000a59ba) bg_popup_sub_pane_cp03

0x3434,	// (0x0009dd1d) chi_dic_find_pane

0x343c,	// (0x0009dd25) listscroll_chi_dic_pane

0x3445,	// (0x0009dd2e) main_pane_chidic_g1

0xb0db,	// (0x000a59c4) chi_dic_find_pane_t1

0xb0e9,	// (0x000a59d2) find_chidic_pane

0xb0f2,	// (0x000a59db) chi_dic_list_pane_ParamLimits

0xb0f2,	// (0x000a59db) chi_dic_list_pane

0xb103,	// (0x000a59ec) scroll_pane_cp020

0xb10b,	// (0x000a59f4) find_chidic_pane_t1

0x9ecc,	// (0x000a47b5) input_focus_pane_cp06

0x3458,	// (0x0009dd41) list_chi_dic_pane_ParamLimits

0x3458,	// (0x0009dd41) list_chi_dic_pane

0x3475,	// (0x0009dd5e) list_chi_dic_pane_t1_ParamLimits

0x3475,	// (0x0009dd5e) list_chi_dic_pane_t1

0x9ecc,	// (0x000a47b5) list_highlight_pane_cp020

0xb11a,	// (0x000a5a03) bg_cale_heading_pane_g1

0x3488,	// (0x0009dd71) bg_cale_heading_pane_g2

0x3490,	// (0x0009dd79) bg_cale_heading_pane_g3

0x3498,	// (0x0009dd81) bg_cale_heading_pane_g4

0x34a2,	// (0x0009dd8b) bg_cale_heading_pane_g5

0x34ac,	// (0x0009dd95) bg_cale_heading_pane_g6

0x34b4,	// (0x0009dd9d) bg_cale_heading_pane_g7

0x34bc,	// (0x0009dda5) bg_cale_heading_pane_g8

0x34c6,	// (0x0009ddaf) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a9c8d) bg_cale_heading_pane_g

0xb11a,	// (0x000a5a03) bg_cale_side_pane_g1

0x34d0,	// (0x0009ddb9) bg_cale_side_pane_g2

0x34da,	// (0x0009ddc3) bg_cale_side_pane_g3

0x34e4,	// (0x0009ddcd) bg_cale_side_pane_g4

0x34ee,	// (0x0009ddd7) bg_cale_side_pane_g5

0x34f8,	// (0x0009dde1) bg_cale_side_pane_g6

0x3502,	// (0x0009ddeb) bg_cale_side_pane_g7

0x350c,	// (0x0009ddf5) bg_cale_side_pane_g8

0x3514,	// (0x0009ddfd) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a9ca0) bg_cale_side_pane_g

0x351c,	// (0x0009de05) popup_call_status_window_ParamLimits

0x351c,	// (0x0009de05) popup_call_status_window

0xb122,	// (0x000a5a0b) stacon_top_pane

0xb12a,	// (0x000a5a13) status_pane_ParamLimits

0xb12a,	// (0x000a5a13) status_pane

0xb13f,	// (0x000a5a28) status_small_pane

0xb147,	// (0x000a5a30) control_pane

0x9ecc,	// (0x000a47b5) stacon_bottom_pane

0xb14f,	// (0x000a5a38) list_single_mce_smart_pane_t1_ParamLimits

0xb14f,	// (0x000a5a38) list_single_mce_smart_pane_t1

0xb162,	// (0x000a5a4b) list_single_mce_smart_pane_t2_ParamLimits

0xb162,	// (0x000a5a4b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a9cb3) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a9cb3) list_single_mce_smart_pane_t

0x3528,	// (0x0009de11) compass_pane

0x3534,	// (0x0009de1d) main_location2_pane_t1

0x3548,	// (0x0009de31) main_location2_pane_t2

0x355c,	// (0x0009de45) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a9cb8) main_location2_pane_t

0xb181,	// (0x000a5a6a) compass_pane_g1_ParamLimits

0xb181,	// (0x000a5a6a) compass_pane_g1

0x35a6,	// (0x0009de8f) compass_pane_t1

0x35b5,	// (0x0009de9e) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a9cc1) compass_pane_t

0x3600,	// (0x0009dee9) text_secondary_cp61

0xb1ff,	// (0x000a5ae8) navi_pane_cams_g5

0xb2d4,	// (0x000a5bbd) navi_pane_im_t1

0xb2e2,	// (0x000a5bcb) navi_pane_mp_g1_ParamLimits

0xb2e2,	// (0x000a5bcb) navi_pane_mp_g1

0xb2f6,	// (0x000a5bdf) navi_pane_mp_g2_ParamLimits

0xb2f6,	// (0x000a5bdf) navi_pane_mp_g2

0xb302,	// (0x000a5beb) navi_pane_mp_g3_ParamLimits

0xb302,	// (0x000a5beb) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a9cd5) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a9cd5) navi_pane_mp_g

0xb30e,	// (0x000a5bf7) navi_pane_mp_t1

0xb31c,	// (0x000a5c05) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a9cdc) navi_pane_mp_t

0xb387,	// (0x000a5c70) navi_pane_vt_g1

0xb30e,	// (0x000a5bf7) navi_pane_vt_t1

0xb38f,	// (0x000a5c78) navi_slider_pane

0xb39f,	// (0x000a5c88) zooming_pane

0xb3a7,	// (0x000a5c90) navi_slider_pane_g1

0x363b,	// (0x0009df24) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a9ce3) navi_slider_pane_g

0xb3cb,	// (0x000a5cb4) aid_levels_zoom

0xb3d3,	// (0x000a5cbc) zooming_pane_g1

0xb3db,	// (0x000a5cc4) zooming_pane_g2

0xb3db,	// (0x000a5cc4) zooming_pane_g3

0x0002,

0xf409,	// (0x000a9cf2) zooming_pane_g

0xb3e3,	// (0x000a5ccc) level_10_zoom

0xb3ec,	// (0x000a5cd5) level_11_zoom

0xb3f5,	// (0x000a5cde) level_1_zoom

0xb3fe,	// (0x000a5ce7) level_2_zoom

0xb407,	// (0x000a5cf0) level_3_zoom

0xb410,	// (0x000a5cf9) level_4_zoom

0xb419,	// (0x000a5d02) level_5_zoom

0xb422,	// (0x000a5d0b) level_6_zoom

0xb42b,	// (0x000a5d14) level_7_zoom

0xb434,	// (0x000a5d1d) level_8_zoom

0xb43d,	// (0x000a5d26) level_9_zoom

0xb44e,	// (0x000a5d37) popup_phob_thumbnail_window_g1

0xb456,	// (0x000a5d3f) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a9cf9) popup_phob_thumbnail_window_g

0xc751,	// (0x000a703a) level_1_location

0xc759,	// (0x000a7042) level_2_location

0xc761,	// (0x000a704a) level_3_location

0xc769,	// (0x000a7052) level_4_location

0xb39f,	// (0x000a5c88) level_5_location

0x364d,	// (0x0009df36) mce_icon_pane_g1

0x3655,	// (0x0009df3e) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a9cfe) mce_icon_pane_g

0x365d,	// (0x0009df46) main_mup_pane_g1_ParamLimits

0x365d,	// (0x0009df46) main_mup_pane_g1

0x3675,	// (0x0009df5e) main_mup_pane_g2_ParamLimits

0x3675,	// (0x0009df5e) main_mup_pane_g2

0x3691,	// (0x0009df7a) main_mup_pane_g3_ParamLimits

0x3691,	// (0x0009df7a) main_mup_pane_g3

0x36ad,	// (0x0009df96) main_mup_pane_g4_ParamLimits

0x36ad,	// (0x0009df96) main_mup_pane_g4

0x36c9,	// (0x0009dfb2) main_mup_pane_g5_ParamLimits

0x36c9,	// (0x0009dfb2) main_mup_pane_g5

0x36ea,	// (0x0009dfd3) main_mup_pane_g6_ParamLimits

0x36ea,	// (0x0009dfd3) main_mup_pane_g6

0x3706,	// (0x0009dfef) main_mup_pane_g7_ParamLimits

0x3706,	// (0x0009dfef) main_mup_pane_g7

0x3722,	// (0x0009e00b) main_mup_pane_g8_ParamLimits

0x3722,	// (0x0009e00b) main_mup_pane_g8

0x373e,	// (0x0009e027) main_mup_pane_g9_ParamLimits

0x373e,	// (0x0009e027) main_mup_pane_g9

0x375d,	// (0x0009e046) main_mup_pane_g10_ParamLimits

0x375d,	// (0x0009e046) main_mup_pane_g10

0x377c,	// (0x0009e065) main_mup_pane_g11_ParamLimits

0x377c,	// (0x0009e065) main_mup_pane_g11

0x3794,	// (0x0009e07d) main_mup_pane_g12_ParamLimits

0x3794,	// (0x0009e07d) main_mup_pane_g12

0x37a2,	// (0x0009e08b) main_mup_pane_g13_ParamLimits

0x37a2,	// (0x0009e08b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a9d03) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a9d03) main_mup_pane_g

0x37b8,	// (0x0009e0a1) main_mup_pane_t1_ParamLimits

0x37b8,	// (0x0009e0a1) main_mup_pane_t1

0x37d5,	// (0x0009e0be) main_mup_pane_t2_ParamLimits

0x37d5,	// (0x0009e0be) main_mup_pane_t2

0x37ef,	// (0x0009e0d8) main_mup_pane_t3_ParamLimits

0x37ef,	// (0x0009e0d8) main_mup_pane_t3

0x3809,	// (0x0009e0f2) main_mup_pane_t4_ParamLimits

0x3809,	// (0x0009e0f2) main_mup_pane_t4

0x381b,	// (0x0009e104) main_mup_pane_t5_ParamLimits

0x381b,	// (0x0009e104) main_mup_pane_t5

0x382d,	// (0x0009e116) main_mup_pane_t6_ParamLimits

0x382d,	// (0x0009e116) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a9d1e) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a9d1e) main_mup_pane_t

0x3843,	// (0x0009e12c) mup_progress_pane_ParamLimits

0x3843,	// (0x0009e12c) mup_progress_pane

0x384f,	// (0x0009e138) mup_visualizer_pane_ParamLimits

0x384f,	// (0x0009e138) mup_visualizer_pane

0x388d,	// (0x0009e176) mup_volume_pane_ParamLimits

0x388d,	// (0x0009e176) mup_volume_pane

0xb29b,	// (0x000a5b84) mup_visualizer_pane_g1_ParamLimits

0xb29b,	// (0x000a5b84) mup_visualizer_pane_g1

0xb29b,	// (0x000a5b84) mup_visualizer_pane_g2_ParamLimits

0xb29b,	// (0x000a5b84) mup_visualizer_pane_g2

0xb181,	// (0x000a5a6a) mup_visualizer_pane_g3_ParamLimits

0xb181,	// (0x000a5a6a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a9d2b) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a9d2b) mup_visualizer_pane_g

0xa758,	// (0x000a5041) mup_volume_pane_g1

0xb466,	// (0x000a5d4f) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a9d32) mup_volume_pane_g

0xa758,	// (0x000a5041) mup_progress_pane_g1

0xb46f,	// (0x000a5d58) mup_progress_pane_g2

0xb478,	// (0x000a5d61) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a9d37) mup_progress_pane_g

0x9ecc,	// (0x000a47b5) bg_popup_window_pane_cp05

0xb481,	// (0x000a5d6a) heading_pane_cp02_ParamLimits

0xb481,	// (0x000a5d6a) heading_pane_cp02

0xb49b,	// (0x000a5d84) list_popup_blid_pane

0xb4a3,	// (0x000a5d8c) list_blid_sat_info_pane_ParamLimits

0xb4a3,	// (0x000a5d8c) list_blid_sat_info_pane

0xb4b6,	// (0x000a5d9f) list_blid_sat_info_pane_g1

0xb4be,	// (0x000a5da7) list_blid_sat_info_pane_t1

0x3998,	// (0x0009e281) mup_equalizer_pane_ParamLimits

0x3998,	// (0x0009e281) mup_equalizer_pane

0x39b9,	// (0x0009e2a2) mup_equalizer_pane_cp1_ParamLimits

0x39b9,	// (0x0009e2a2) mup_equalizer_pane_cp1

0x39da,	// (0x0009e2c3) mup_equalizer_pane_cp2_ParamLimits

0x39da,	// (0x0009e2c3) mup_equalizer_pane_cp2

0x39fb,	// (0x0009e2e4) mup_equalizer_pane_cp3_ParamLimits

0x39fb,	// (0x0009e2e4) mup_equalizer_pane_cp3

0x3a1c,	// (0x0009e305) mup_equalizer_pane_cp4_ParamLimits

0x3a1c,	// (0x0009e305) mup_equalizer_pane_cp4

0x3a3d,	// (0x0009e326) mup_equalizer_pane_cp5

0x3a53,	// (0x0009e33c) mup_equalizer_pane_cp6

0x3a6b,	// (0x0009e354) mup_equalizer_pane_cp7

0xc66f,	// (0x000a6f58) bg_popup_call_poc_act_pane_g9

0xc677,	// (0x000a6f60) bg_popup_call_poc_act_pane_g10

0xc67f,	// (0x000a6f68) bg_popup_call_poc_act_pane_g11

0x000a,

0xa61f,	// (0x000a4f08) mup_scale_pane

0xa758,	// (0x000a5041) mup_scale_pane_g1

0xb4cc,	// (0x000a5db5) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a9d53) mup_scale_pane_g

0xb4f0,	// (0x000a5dd9) msg_data_pane

0xb4f8,	// (0x000a5de1) scroll_pane_cp017

0x3a95,	// (0x0009e37e) bg_list_pane_cp04_ParamLimits

0x3a95,	// (0x0009e37e) bg_list_pane_cp04

0xb500,	// (0x000a5de9) msg_data_pane_g1

0x3ab9,	// (0x0009e3a2) msg_data_pane_g2

0x341c,	// (0x0009dd05) msg_data_pane_g3

0x3ac1,	// (0x0009e3aa) msg_data_pane_g4

0x3ac9,	// (0x0009e3b2) msg_data_pane_g5

0x3ad1,	// (0x0009e3ba) msg_data_pane_g6

0x3ad9,	// (0x0009e3c2) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a9d62) msg_data_pane_g

0x3ae1,	// (0x0009e3ca) msg_text_pane_ParamLimits

0x3ae1,	// (0x0009e3ca) msg_text_pane

0x3b23,	// (0x0009e40c) qrid_highlight_pane_cp011_ParamLimits

0x3b23,	// (0x0009e40c) qrid_highlight_pane_cp011

0x9ecc,	// (0x000a47b5) msg_body_pane

0x9ecc,	// (0x000a47b5) msg_header_pane

0xb511,	// (0x000a5dfa) input_focus_pane_cp07

0x3b4d,	// (0x0009e436) msg_header_pane_t1_ParamLimits

0x3b4d,	// (0x0009e436) msg_header_pane_t1

0x3b5f,	// (0x0009e448) msg_header_pane_t2_ParamLimits

0x3b5f,	// (0x0009e448) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a9d76) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a9d76) msg_header_pane_t

0xb526,	// (0x000a5e0f) msg_body_pane_g1

0x3b71,	// (0x0009e45a) msg_body_pane_t1_ParamLimits

0x3b71,	// (0x0009e45a) msg_body_pane_t1

0x3ba2,	// (0x0009e48b) msg_body_pane_t2_ParamLimits

0x3ba2,	// (0x0009e48b) msg_body_pane_t2

0x3bb4,	// (0x0009e49d) msg_body_pane_t3_ParamLimits

0x3bb4,	// (0x0009e49d) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a9d7b) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a9d7b) msg_body_pane_t

0x3c18,	// (0x0009e501) main_viewer_pane_g1_ParamLimits

0x3c18,	// (0x0009e501) main_viewer_pane_g1

0x3c24,	// (0x0009e50d) main_viewer_pane_g2_ParamLimits

0x3c24,	// (0x0009e50d) main_viewer_pane_g2

0x3c30,	// (0x0009e519) main_viewer_pane_g3_ParamLimits

0x3c30,	// (0x0009e519) main_viewer_pane_g3

0x3c41,	// (0x0009e52a) main_viewer_pane_g4_ParamLimits

0x3c41,	// (0x0009e52a) main_viewer_pane_g4

0x3c52,	// (0x0009e53b) main_viewer_pane_g5_ParamLimits

0x3c52,	// (0x0009e53b) main_viewer_pane_g5

0x3c52,	// (0x0009e53b) main_viewer_pane_g7_ParamLimits

0x3c52,	// (0x0009e53b) main_viewer_pane_g7

0xadec,	// (0x000a56d5) main_viewer_pane_g8_ParamLimits

0xadec,	// (0x000a56d5) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a9d8b) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a9d8b) main_viewer_pane_g

0xb52e,	// (0x000a5e17) viewer_content_pane_ParamLimits

0xb52e,	// (0x000a5e17) viewer_content_pane

0x3c90,	// (0x0009e579) main_postcard_pane_g1_ParamLimits

0x3c90,	// (0x0009e579) main_postcard_pane_g1

0x3c9e,	// (0x0009e587) main_postcard_pane_g2_ParamLimits

0x3c9e,	// (0x0009e587) main_postcard_pane_g2

0x3cac,	// (0x0009e595) main_postcard_pane_g3_ParamLimits

0x3cac,	// (0x0009e595) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a9d9c) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a9d9c) main_postcard_pane_g

0x3cbc,	// (0x0009e5a5) main_postcard_pane_g4

0xc851,	// (0x000a713a) smil_status_volume_pane_g2

0x3ce8,	// (0x0009e5d1) postcard_pane_ParamLimits

0x3ce8,	// (0x0009e5d1) postcard_pane

0xb29b,	// (0x000a5b84) postcard_pane_g1_ParamLimits

0xb29b,	// (0x000a5b84) postcard_pane_g1

0x3d1a,	// (0x0009e603) postcard_pane_g2_ParamLimits

0x3d1a,	// (0x0009e603) postcard_pane_g2

0x3d26,	// (0x0009e60f) postcard_pane_g3_ParamLimits

0x3d26,	// (0x0009e60f) postcard_pane_g3

0xb53c,	// (0x000a5e25) postcard_pane_g4_ParamLimits

0xb53c,	// (0x000a5e25) postcard_pane_g4

0x3d32,	// (0x0009e61b) postcard_pane_g5_ParamLimits

0x3d32,	// (0x0009e61b) postcard_pane_g5

0x3d3e,	// (0x0009e627) postcard_pane_g6_ParamLimits

0x3d3e,	// (0x0009e627) postcard_pane_g6

0xb54a,	// (0x000a5e33) postcard_pane_g7_ParamLimits

0xb54a,	// (0x000a5e33) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a9da9) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a9da9) postcard_pane_g

0x3d4a,	// (0x0009e633) main_mp2_pane_g1_ParamLimits

0x3d4a,	// (0x0009e633) main_mp2_pane_g1

0x3d56,	// (0x0009e63f) main_mp2_pane_g2_ParamLimits

0x3d56,	// (0x0009e63f) main_mp2_pane_g2

0x3d62,	// (0x0009e64b) main_mp2_pane_g3_ParamLimits

0x3d62,	// (0x0009e64b) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a9db8) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a9db8) main_mp2_pane_g

0x3d6e,	// (0x0009e657) main_mp2_pane_t1_ParamLimits

0x3d6e,	// (0x0009e657) main_mp2_pane_t1

0x3d85,	// (0x0009e66e) main_mp2_pane_t2_ParamLimits

0x3d85,	// (0x0009e66e) main_mp2_pane_t2

0x3d97,	// (0x0009e680) main_mp2_pane_t3_ParamLimits

0x3d97,	// (0x0009e680) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a9dbf) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a9dbf) main_mp2_pane_t

0xb558,	// (0x000a5e41) pec_content_pane_ParamLimits

0xb558,	// (0x000a5e41) pec_content_pane

0xaa73,	// (0x000a535c) scroll_pane_cp015

0xb56a,	// (0x000a5e53) pec_attribute_pane_ParamLimits

0xb56a,	// (0x000a5e53) pec_attribute_pane

0x3da9,	// (0x0009e692) pec_content_pane_g1_ParamLimits

0x3da9,	// (0x0009e692) pec_content_pane_g1

0xb57a,	// (0x000a5e63) pec_content_pane_t1_ParamLimits

0xb57a,	// (0x000a5e63) pec_content_pane_t1

0xb58c,	// (0x000a5e75) pec_content_pane_t2_ParamLimits

0xb58c,	// (0x000a5e75) pec_content_pane_t2

0x0001,

0x01a0,	// (0x0009aa89) pec_content_pane_t_ParamLimits

0x01a0,	// (0x0009aa89) pec_content_pane_t

0x3db5,	// (0x0009e69e) list_single_graphic_pane_cp01_ParamLimits

0x3db5,	// (0x0009e69e) list_single_graphic_pane_cp01

0xa61f,	// (0x000a4f08) bg_popup_sub_pane_cp04

0xb59e,	// (0x000a5e87) popup_mup_playback_window_g1

0xb5aa,	// (0x000a5e93) popup_mup_playback_window_t1

0xb5bf,	// (0x000a5ea8) popup_mup_playback_window_t2

0x0001,

0x01a5,	// (0x0009aa8e) popup_mup_playback_window_t

0xb5f6,	// (0x000a5edf) main_image_pane_g1_ParamLimits

0xb5f6,	// (0x000a5edf) main_image_pane_g1

0xb639,	// (0x000a5f22) scroll_pane_cp018_ParamLimits

0xb639,	// (0x000a5f22) scroll_pane_cp018

0xb651,	// (0x000a5f3a) scroll_pane_cp016_ParamLimits

0xb651,	// (0x000a5f3a) scroll_pane_cp016

0x3e55,	// (0x0009e73e) smil2_image_pane_ParamLimits

0x3e55,	// (0x0009e73e) smil2_image_pane

0x3e89,	// (0x0009e772) smil2_root_pane_ParamLimits

0x3e89,	// (0x0009e772) smil2_root_pane

0x3eb5,	// (0x0009e79e) smil2_text_pane_ParamLimits

0x3eb5,	// (0x0009e79e) smil2_text_pane

0x9ecc,	// (0x000a47b5) bg_list_pane_cp06

0xb68d,	// (0x000a5f76) grid_radio_pane

0x9ecc,	// (0x000a47b5) bg_popup_window_pane_cp06

0xb695,	// (0x000a5f7e) main_fmradio_pane_t1

0xafb8,	// (0x000a58a1) heading_pane_cp04

0xb6a3,	// (0x000a5f8c) main_fmradio_pane_t2

0xc687,	// (0x000a6f70) popup_cale_lunar_info_window_g1

0xb6b1,	// (0x000a5f9a) main_fmradio_pane_t3

0xc68f,	// (0x000a6f78) popup_cale_lunar_info_window_g2

0xb6bf,	// (0x000a5fa8) main_fmradio_pane_t4

0x0001,

0xb6cd,	// (0x000a5fb6) main_fmradio_pane_t5

0x0004,

0x0280,	// (0x0009ab69) popup_cale_lunar_info_window_g

0x01ba,	// (0x0009aaa3) main_fmradio_pane_t

0xb6db,	// (0x000a5fc4) wait_bar_pane_cp03

0xb6e3,	// (0x000a5fcc) cell_fmradio_pane_ParamLimits

0xb6e3,	// (0x000a5fcc) cell_fmradio_pane

0xb54a,	// (0x000a5e33) cell_fmradio_pane_g1_ParamLimits

0xb54a,	// (0x000a5e33) cell_fmradio_pane_g1

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp011

0xb6f6,	// (0x000a5fdf) poc_content_pane_ParamLimits

0xb6f6,	// (0x000a5fdf) poc_content_pane

0xb708,	// (0x000a5ff1) scroll_pane_cp019

0x3ef5,	// (0x0009e7de) popup_call_poc_act_window_ParamLimits

0x3ef5,	// (0x0009e7de) popup_call_poc_act_window

0x3f02,	// (0x0009e7eb) popup_call_poc_inact_window_ParamLimits

0x3f02,	// (0x0009e7eb) popup_call_poc_inact_window

0x0257,	// (0x0009ab40) bg_popup_call_poc_act_pane_g

0xc5ff,	// (0x000a6ee8) bg_popup_call_poc_inact_pane_g1

0xc607,	// (0x000a6ef0) bg_popup_call_poc_inact_pane_g2

0xb710,	// (0x000a5ff9) popup_call_poc_act_window_g2

0xc60f,	// (0x000a6ef8) bg_popup_call_poc_inact_pane_g3

0xc617,	// (0x000a6f00) bg_popup_call_poc_inact_pane_g4

0xc61f,	// (0x000a6f08) bg_popup_call_poc_inact_pane_g5

0xb718,	// (0x000a6001) popup_call_poc_act_window_t1_ParamLimits

0xb718,	// (0x000a6001) popup_call_poc_act_window_t1

0xb740,	// (0x000a6029) popup_call_poc_act_window_t2_ParamLimits

0xb740,	// (0x000a6029) popup_call_poc_act_window_t2

0xb768,	// (0x000a6051) popup_call_poc_act_window_t3_ParamLimits

0xb768,	// (0x000a6051) popup_call_poc_act_window_t3

0xb790,	// (0x000a6079) popup_call_poc_act_window_t4_ParamLimits

0xb790,	// (0x000a6079) popup_call_poc_act_window_t4

0x0003,

0x01c5,	// (0x0009aaae) popup_call_poc_act_window_t_ParamLimits

0x01c5,	// (0x0009aaae) popup_call_poc_act_window_t

0xc627,	// (0x000a6f10) bg_popup_call_poc_inact_pane_g6

0xc62f,	// (0x000a6f18) bg_popup_call_poc_inact_pane_g7

0xc637,	// (0x000a6f20) bg_popup_call_poc_inact_pane_g8

0xb7a2,	// (0x000a608b) popup_call_poc_inact_window_g2

0xc63f,	// (0x000a6f28) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0244,	// (0x0009ab2d) bg_popup_call_poc_inact_pane_g

0xb7aa,	// (0x000a6093) popup_call_poc_inact_window_t1_ParamLimits

0xb7aa,	// (0x000a6093) popup_call_poc_inact_window_t1

0xb7bf,	// (0x000a60a8) popup_call_poc_inact_window_t2_ParamLimits

0xb7bf,	// (0x000a60a8) popup_call_poc_inact_window_t2

0xb7d4,	// (0x000a60bd) popup_call_poc_inact_window_t3_ParamLimits

0xb7d4,	// (0x000a60bd) popup_call_poc_inact_window_t3

0x0002,

0x01ce,	// (0x0009aab7) popup_call_poc_inact_window_t_ParamLimits

0x01ce,	// (0x0009aab7) popup_call_poc_inact_window_t

0xc7c4,	// (0x000a70ad) context_pane_ParamLimits

0x453e,	// (0x0009ee27) signal_pane_ParamLimits

0xb39f,	// (0x000a5c88) main_call2_pane

0x44b1,	// (0x0009ed9a) popup_phob_thumbnail2_window_ParamLimits

0x44b1,	// (0x0009ed9a) popup_phob_thumbnail2_window

0x3bc6,	// (0x0009e4af) aid_hotspot_pointer_arrow_pane

0x3bce,	// (0x0009e4b7) aid_hotspot_pointer_hand_pane

0x4228,	// (0x0009eb11) phob_pre_status_pane_g5

0x1bb0,	// (0x0009c499) cams_zoom_pane_ParamLimits

0x1bbc,	// (0x0009c4a5) image_vga_pane_ParamLimits

0x1bcb,	// (0x0009c4b4) main_camera_pane_g1_ParamLimits

0x1bd9,	// (0x0009c4c2) main_camera_pane_g2_ParamLimits

0x1be5,	// (0x0009c4ce) main_camera_pane_g3_ParamLimits

0x1bf1,	// (0x0009c4da) main_camera_pane_g4_ParamLimits

0x1bfd,	// (0x0009c4e6) main_camera_pane_g5_ParamLimits

0x1c09,	// (0x0009c4f2) main_camera_pane_g6_ParamLimits

0x1c15,	// (0x0009c4fe) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a9af3) main_camera_pane_g_ParamLimits

0x1c21,	// (0x0009c50a) main_camera_pane_t1_ParamLimits

0x1c33,	// (0x0009c51c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a9b04) main_camera_pane_t_ParamLimits

0xa61f,	// (0x000a4f08) bg_popup_preview_window_pane_cp01_ParamLimits

0xa61f,	// (0x000a4f08) bg_popup_preview_window_pane_cp01

0xb7e9,	// (0x000a60d2) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e9,	// (0x000a60d2) popup_phob_thumbnail2_window_g1

0x9ecc,	// (0x000a47b5) call2_cli_visual_pane

0x3f1e,	// (0x0009e807) popup_call2_audio_conf_window_ParamLimits

0x3f1e,	// (0x0009e807) popup_call2_audio_conf_window

0x3f33,	// (0x0009e81c) popup_call2_audio_first_window_ParamLimits

0x3f33,	// (0x0009e81c) popup_call2_audio_first_window

0x3fd1,	// (0x0009e8ba) popup_call2_audio_in_window_ParamLimits

0x3fd1,	// (0x0009e8ba) popup_call2_audio_in_window

0x4013,	// (0x0009e8fc) popup_call2_audio_out_window_ParamLimits

0x4013,	// (0x0009e8fc) popup_call2_audio_out_window

0x4075,	// (0x0009e95e) popup_call2_audio_second_window_ParamLimits

0x4075,	// (0x0009e95e) popup_call2_audio_second_window

0x40d3,	// (0x0009e9bc) popup_call2_audio_wait_window_ParamLimits

0x40d3,	// (0x0009e9bc) popup_call2_audio_wait_window

0x9ecc,	// (0x000a47b5) bg_popup_call2_act_pane_cp03

0xa601,	// (0x000a4eea) list_conf_pane_cp

0xb7f5,	// (0x000a60de) popup_call2_audio_conf_window_t1

0xb803,	// (0x000a60ec) list_single_graphic_popup_conf2_pane_ParamLimits

0xb803,	// (0x000a60ec) list_single_graphic_popup_conf2_pane

0xb058,	// (0x000a5941) list_highlight_pane_cp04

0xb816,	// (0x000a60ff) list_single_graphic_popup_conf2_pane_g1

0xb069,	// (0x000a5952) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4ed,	// (0x000a9dd6) list_single_graphic_popup_conf2_pane_g

0xb820,	// (0x000a6109) list_single_graphic_popup_conf2_pane_t1

0xb82e,	// (0x000a6117) bg_popup_call2_act_pane_cp01_ParamLimits

0xb82e,	// (0x000a6117) bg_popup_call2_act_pane_cp01

0xb8b8,	// (0x000a61a1) call_type_pane_cp05_ParamLimits

0xb8b8,	// (0x000a61a1) call_type_pane_cp05

0xb90c,	// (0x000a61f5) popup_call2_audio_second_window_g1_ParamLimits

0xb90c,	// (0x000a61f5) popup_call2_audio_second_window_g1

0xb960,	// (0x000a6249) popup_call2_audio_second_window_g2_ParamLimits

0xb960,	// (0x000a6249) popup_call2_audio_second_window_g2

0x0002,

0x01da,	// (0x0009aac3) popup_call2_audio_second_window_g_ParamLimits

0x01da,	// (0x0009aac3) popup_call2_audio_second_window_g

0xb9c5,	// (0x000a62ae) popup_call2_audio_second_window_t1_ParamLimits

0xb9c5,	// (0x000a62ae) popup_call2_audio_second_window_t1

0xba80,	// (0x000a6369) popup_call2_audio_second_window_t2_ParamLimits

0xba80,	// (0x000a6369) popup_call2_audio_second_window_t2

0xbad3,	// (0x000a63bc) popup_call2_audio_second_window_t3_ParamLimits

0xbad3,	// (0x000a63bc) popup_call2_audio_second_window_t3

0x0003,

0x01e1,	// (0x0009aaca) popup_call2_audio_second_window_t_ParamLimits

0x01e1,	// (0x0009aaca) popup_call2_audio_second_window_t

0x9ecc,	// (0x000a47b5) bg_popup_call2_in_pane_cp02

0x9ed6,	// (0x000a47bf) call_type_pane_cp04

0x9ede,	// (0x000a47c7) popup_call2_audio_wait_window_g1

0x9ee6,	// (0x000a47cf) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a99de) popup_call2_audio_wait_window_g

0x9eee,	// (0x000a47d7) popup_call2_audio_wait_window_t3

0xbbc6,	// (0x000a64af) bg_popup_call2_act_pane_ParamLimits

0xbbc6,	// (0x000a64af) bg_popup_call2_act_pane

0xbc86,	// (0x000a656f) call_type_pane_cp03_ParamLimits

0xbc86,	// (0x000a656f) call_type_pane_cp03

0xbcea,	// (0x000a65d3) popup_call2_audio_first_window_g1_ParamLimits

0xbcea,	// (0x000a65d3) popup_call2_audio_first_window_g1

0xbd5a,	// (0x000a6643) popup_call2_audio_first_window_g2_ParamLimits

0xbd5a,	// (0x000a6643) popup_call2_audio_first_window_g2

0xb29b,	// (0x000a5b84) popup_call2_audio_first_window_g3_ParamLimits

0xb29b,	// (0x000a5b84) popup_call2_audio_first_window_g3

0x0004,

0xf4f2,	// (0x000a9ddb) popup_call2_audio_first_window_g_ParamLimits

0xf4f2,	// (0x000a9ddb) popup_call2_audio_first_window_g

0xbe38,	// (0x000a6721) popup_call2_audio_first_window_t1_ParamLimits

0xbe38,	// (0x000a6721) popup_call2_audio_first_window_t1

0xbf3b,	// (0x000a6824) popup_call2_audio_first_window_t4_ParamLimits

0xbf3b,	// (0x000a6824) popup_call2_audio_first_window_t4

0xc01e,	// (0x000a6907) popup_call2_audio_first_window_t5_ParamLimits

0xc01e,	// (0x000a6907) popup_call2_audio_first_window_t5

0x0003,

0xf4fd,	// (0x000a9de6) popup_call2_audio_first_window_t_ParamLimits

0xf4fd,	// (0x000a9de6) popup_call2_audio_first_window_t

0xa617,	// (0x000a4f00) bg_popup_call2_act_pane_g1

0xc697,	// (0x000a6f80) popup_cale_lunar_info_window_t1

0xc6a5,	// (0x000a6f8e) popup_cale_lunar_info_window_t2

0xc6b3,	// (0x000a6f9c) popup_cale_lunar_info_window_t3

0x9ecc,	// (0x000a47b5) bg_popup_call2_bubble_pane

0xc11f,	// (0x000a6a08) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11f,	// (0x000a6a08) bg_popup_call2_in_pane_cp01

0x9ba8,	// (0x000a4491) call_type_pane_cp02

0xc167,	// (0x000a6a50) popup_call2_audio_out_window_g1_ParamLimits

0xc167,	// (0x000a6a50) popup_call2_audio_out_window_g1

0xc193,	// (0x000a6a7c) popup_call2_audio_out_window_g2_ParamLimits

0xc193,	// (0x000a6a7c) popup_call2_audio_out_window_g2

0xc1bb,	// (0x000a6aa4) popup_call2_audio_out_window_g3_ParamLimits

0xc1bb,	// (0x000a6aa4) popup_call2_audio_out_window_g3

0x0003,

0xf506,	// (0x000a9def) popup_call2_audio_out_window_g_ParamLimits

0xf506,	// (0x000a9def) popup_call2_audio_out_window_g

0xc1f6,	// (0x000a6adf) popup_call2_audio_out_window_t1_ParamLimits

0xc1f6,	// (0x000a6adf) popup_call2_audio_out_window_t1

0xc255,	// (0x000a6b3e) popup_call2_audio_out_window_t2_ParamLimits

0xc255,	// (0x000a6b3e) popup_call2_audio_out_window_t2

0xc2b5,	// (0x000a6b9e) popup_call2_audio_out_window_t3_ParamLimits

0xc2b5,	// (0x000a6b9e) popup_call2_audio_out_window_t3

0xc2cb,	// (0x000a6bb4) popup_call2_audio_out_window_t4_ParamLimits

0xc2cb,	// (0x000a6bb4) popup_call2_audio_out_window_t4

0xc2e1,	// (0x000a6bca) popup_call2_audio_out_window_t5_ParamLimits

0xc2e1,	// (0x000a6bca) popup_call2_audio_out_window_t5

0x0005,

0xf50f,	// (0x000a9df8) popup_call2_audio_out_window_t_ParamLimits

0xf50f,	// (0x000a9df8) popup_call2_audio_out_window_t

0xc345,	// (0x000a6c2e) bg_popup_call2_in_pane_ParamLimits

0xc345,	// (0x000a6c2e) bg_popup_call2_in_pane

0xc3a1,	// (0x000a6c8a) popup_call2_audio_in_window_g1_ParamLimits

0xc3a1,	// (0x000a6c8a) popup_call2_audio_in_window_g1

0xc3d9,	// (0x000a6cc2) popup_call2_audio_in_window_g2_ParamLimits

0xc3d9,	// (0x000a6cc2) popup_call2_audio_in_window_g2

0xc411,	// (0x000a6cfa) popup_call2_audio_in_window_g3_ParamLimits

0xc411,	// (0x000a6cfa) popup_call2_audio_in_window_g3

0x0003,

0x0214,	// (0x0009aafd) popup_call2_audio_in_window_g_ParamLimits

0x0214,	// (0x0009aafd) popup_call2_audio_in_window_g

0xc469,	// (0x000a6d52) popup_call2_audio_in_window_t1_ParamLimits

0xc469,	// (0x000a6d52) popup_call2_audio_in_window_t1

0xc4e9,	// (0x000a6dd2) popup_call2_audio_in_window_t2_ParamLimits

0xc4e9,	// (0x000a6dd2) popup_call2_audio_in_window_t2

0xc569,	// (0x000a6e52) popup_call2_audio_in_window_t3_ParamLimits

0xc569,	// (0x000a6e52) popup_call2_audio_in_window_t3

0xc583,	// (0x000a6e6c) popup_call2_audio_in_window_t4_ParamLimits

0xc583,	// (0x000a6e6c) popup_call2_audio_in_window_t4

0xc595,	// (0x000a6e7e) popup_call2_audio_in_window_t5_ParamLimits

0xc595,	// (0x000a6e7e) popup_call2_audio_in_window_t5

0xc5aa,	// (0x000a6e93) popup_call2_audio_in_window_t6_ParamLimits

0xc5aa,	// (0x000a6e93) popup_call2_audio_in_window_t6

0x0005,

0x021d,	// (0x0009ab06) popup_call2_audio_in_window_t_ParamLimits

0x021d,	// (0x0009ab06) popup_call2_audio_in_window_t

0xa617,	// (0x000a4f00) bg_popup_call2_in_pane_g1

0xc6c1,	// (0x000a6faa) popup_cale_lunar_info_window_t4

0x0003,

0x0285,	// (0x0009ab6e) popup_cale_lunar_info_window_t

0xa61f,	// (0x000a4f08) bg_popup_call2_rect_pane_ParamLimits

0xa61f,	// (0x000a4f08) bg_popup_call2_rect_pane

0x9ecc,	// (0x000a47b5) call2_cli_visual_graphic_pane

0x9ecc,	// (0x000a47b5) call2_cli_visual_text_pane

0x45ec,	// (0x0009eed5) smil_status_volume_pane_g3

0x0002,

0xa758,	// (0x000a5041) call2_cli_visual_graphic_pane_g1

0xa758,	// (0x000a5041) call2_cli_visual_graphic_pane_g2

0xa758,	// (0x000a5041) call2_cli_visual_graphic_pane_g3

0x0002,

0xf51c,	// (0x000a9e05) call2_cli_visual_graphic_pane_g

0xc5bf,	// (0x000a6ea8) bg_popup_call2_rect_pane_g1

0xa7f6,	// (0x000a50df) bg_popup_call2_rect_pane_g2

0xc5c7,	// (0x000a6eb0) bg_popup_call2_rect_pane_g3

0xc5cf,	// (0x000a6eb8) bg_popup_call2_rect_pane_g4

0xc5d7,	// (0x000a6ec0) bg_popup_call2_rect_pane_g5

0xc5df,	// (0x000a6ec8) bg_popup_call2_rect_pane_g6

0xc5e7,	// (0x000a6ed0) bg_popup_call2_rect_pane_g7

0xc5ef,	// (0x000a6ed8) bg_popup_call2_rect_pane_g8

0xc5f7,	// (0x000a6ee0) bg_popup_call2_rect_pane_g9

0x0008,

0xf523,	// (0x000a9e0c) bg_popup_call2_rect_pane_g

0xc5ff,	// (0x000a6ee8) bg_popup_call2_bubble_pane_g1

0xc607,	// (0x000a6ef0) bg_popup_call2_bubble_pane_g2

0xc60f,	// (0x000a6ef8) bg_popup_call2_bubble_pane_g3

0xc617,	// (0x000a6f00) bg_popup_call2_bubble_pane_g4

0xc61f,	// (0x000a6f08) bg_popup_call2_bubble_pane_g5

0xc627,	// (0x000a6f10) bg_popup_call2_bubble_pane_g6

0xc62f,	// (0x000a6f18) bg_popup_call2_bubble_pane_g7

0xc637,	// (0x000a6f20) bg_popup_call2_bubble_pane_g8

0xc63f,	// (0x000a6f28) bg_popup_call2_bubble_pane_g9

0x0008,

0x0244,	// (0x0009ab2d) bg_popup_call2_bubble_pane_g

0x15b4,	// (0x0009be9d) aid_cale_week_size_cell_pane

0x1c45,	// (0x0009c52e) aid_cams_cif_uncrop_pane_ParamLimits

0x1c45,	// (0x0009c52e) aid_cams_cif_uncrop_pane

0x1da0,	// (0x0009c689) aid_cams_size_cell_ParamLimits

0x1da0,	// (0x0009c689) aid_cams_size_cell

0x1dac,	// (0x0009c695) grid_cams_pane_ParamLimits

0x1dba,	// (0x0009c6a3) linegrid_cams_pane_ParamLimits

0x1f9f,	// (0x0009c888) call_video_pane_t1

0x1fc0,	// (0x0009c8a9) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a9b57) call_video_pane_t

0x252f,	// (0x0009ce18) aid_cale_month_size_cell_pane_ParamLimits

0x252f,	// (0x0009ce18) aid_cale_month_size_cell_pane

0xf566,	// (0x000a9e4f) smil_status_volume_pane_g

0x45f9,	// (0x0009eee2) volume_smil_pane_ParamLimits

0x0d15,	// (0x0009b5fe) aid_popup2_width_pane

0x14a8,	// (0x0009bd91) cell_qdial_pane_g4_ParamLimits

0x14a8,	// (0x0009bd91) cell_qdial_pane_g4

0x3582,	// (0x0009de6b) aid_blid_cardinal_pane_ParamLimits

0x3592,	// (0x0009de7b) aid_blid_destination_pane_ParamLimits

0x3592,	// (0x0009de7b) aid_blid_destination_pane

0xa61f,	// (0x000a4f08) bg_popup_call_poc_act_pane_ParamLimits

0xa61f,	// (0x000a4f08) bg_popup_call_poc_act_pane

0xa61f,	// (0x000a4f08) bg_popup_call_poc_inact_pane_ParamLimits

0xa61f,	// (0x000a4f08) bg_popup_call_poc_inact_pane

0xc647,	// (0x000a6f30) bg_popup_call_poc_act_pane_g1

0xc64f,	// (0x000a6f38) bg_popup_call_poc_act_pane_g2

0xc657,	// (0x000a6f40) bg_popup_call_poc_act_pane_g3

0xc617,	// (0x000a6f00) bg_popup_call_poc_act_pane_g4

0xc61f,	// (0x000a6f08) bg_popup_call_poc_act_pane_g5

0xc65f,	// (0x000a6f48) bg_popup_call_poc_act_pane_g6

0xc62f,	// (0x000a6f18) bg_popup_call_poc_act_pane_g7

0xc667,	// (0x000a6f50) bg_popup_call_poc_act_pane_g8

0x9ecc,	// (0x000a47b5) main_usb_pane

0x43ea,	// (0x0009ecd3) popup_cale_lunar_info_window

0x22df,	// (0x0009cbc8) im_reading_pane_t1_ParamLimits

0xa9cb,	// (0x000a52b4) list_im_pane_ParamLimits

0xa9dc,	// (0x000a52c5) scroll_pane_cp07_ParamLimits

0x9ecc,	// (0x000a47b5) grid_highlight_pane_cp012

0xa61f,	// (0x000a4f08) mup_scale_pane_ParamLimits

0xb29b,	// (0x000a5b84) main_usb_pane_g1_ParamLimits

0xb29b,	// (0x000a5b84) main_usb_pane_g1

0x414b,	// (0x0009ea34) main_usb_pane_g2_ParamLimits

0x414b,	// (0x0009ea34) main_usb_pane_g2

0x0001,

0xf536,	// (0x000a9e1f) main_usb_pane_g_ParamLimits

0xf536,	// (0x000a9e1f) main_usb_pane_g

0x4157,	// (0x0009ea40) main_usb_pane_t1_ParamLimits

0x4157,	// (0x0009ea40) main_usb_pane_t1

0x4169,	// (0x0009ea52) main_usb_pane_t2_ParamLimits

0x4169,	// (0x0009ea52) main_usb_pane_t2

0x417b,	// (0x0009ea64) main_usb_pane_t3_ParamLimits

0x417b,	// (0x0009ea64) main_usb_pane_t3

0x418d,	// (0x0009ea76) main_usb_pane_t4_ParamLimits

0x418d,	// (0x0009ea76) main_usb_pane_t4

0x419f,	// (0x0009ea88) main_usb_pane_t5_ParamLimits

0x419f,	// (0x0009ea88) main_usb_pane_t5

0x41b1,	// (0x0009ea9a) main_usb_pane_t6_ParamLimits

0x41b1,	// (0x0009ea9a) main_usb_pane_t6

0x0005,

0xf53b,	// (0x000a9e24) main_usb_pane_t_ParamLimits

0x3528,	// (0x0009de11) aid_text_placing

0x3534,	// (0x0009de1d) main_location2_pane_t1_ParamLimits

0x3548,	// (0x0009de31) main_location2_pane_t2_ParamLimits

0x355c,	// (0x0009de45) main_location2_pane_t3_ParamLimits

0x3570,	// (0x0009de59) main_location2_pane_t4_ParamLimits

0x3570,	// (0x0009de59) main_location2_pane_t4

0xf3cf,	// (0x000a9cb8) main_location2_pane_t_ParamLimits

0xa65b,	// (0x000a4f44) find_pinb_pane_g2_ParamLimits

0xa65b,	// (0x000a4f44) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000a9a04) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000a9a04) find_pinb_pane_g

0xa667,	// (0x000a4f50) find_pinb_pane_t1_ParamLimits

0xa679,	// (0x000a4f62) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000a9a09) find_pinb_pane_t_ParamLimits

0x9ecc,	// (0x000a47b5) main_call3_pane

0x2aa3,	// (0x0009d38c) cale_month_day_heading_pane_t1_ParamLimits

0x2b29,	// (0x0009d412) cale_month_day_heading_pane_t2_ParamLimits

0x2bba,	// (0x0009d4a3) cale_month_day_heading_pane_t3_ParamLimits

0x2c4b,	// (0x0009d534) cale_month_day_heading_pane_t4_ParamLimits

0x2cdc,	// (0x0009d5c5) cale_month_day_heading_pane_t5_ParamLimits

0x2d6d,	// (0x0009d656) cale_month_day_heading_pane_t6_ParamLimits

0x2e0a,	// (0x0009d6f3) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a9b8f) cale_month_day_heading_pane_t_ParamLimits

0xac26,	// (0x000a550f) smil_status_volume_pane

0x3d02,	// (0x0009e5eb) postcard_address_pane_ParamLimits

0x3d02,	// (0x0009e5eb) postcard_address_pane

0x3d0e,	// (0x0009e5f7) postcard_message_pane_ParamLimits

0x3d0e,	// (0x0009e5f7) postcard_message_pane

0x4112,	// (0x0009e9fb) call2_cli_visual_pane_t1_ParamLimits

0x4112,	// (0x0009e9fb) call2_cli_visual_pane_t1

0x474e,	// (0x0009f037) postcard_message_pane_t1_ParamLimits

0x474e,	// (0x0009f037) postcard_message_pane_t1

0x4737,	// (0x0009f020) postcard_address_pane_t1_ParamLimits

0x4737,	// (0x0009f020) postcard_address_pane_t1

0x4728,	// (0x0009f011) popup_call3_audio_in_window_ParamLimits

0x4728,	// (0x0009f011) popup_call3_audio_in_window

0x460e,	// (0x0009eef7) bg_popup_call3_in_pane_ParamLimits

0x460e,	// (0x0009eef7) bg_popup_call3_in_pane

0x466e,	// (0x0009ef57) popup_call3_audio_in_window_g1_ParamLimits

0x466e,	// (0x0009ef57) popup_call3_audio_in_window_g1

0x4686,	// (0x0009ef6f) popup_call3_audio_in_window_g2_ParamLimits

0x4686,	// (0x0009ef6f) popup_call3_audio_in_window_g2

0x469e,	// (0x0009ef87) popup_call3_audio_in_window_g3_ParamLimits

0x469e,	// (0x0009ef87) popup_call3_audio_in_window_g3

0x0003,

0xf56d,	// (0x000a9e56) popup_call3_audio_in_window_g_ParamLimits

0xf56d,	// (0x000a9e56) popup_call3_audio_in_window_g

0x46c6,	// (0x0009efaf) popup_call3_audio_in_window_t1_ParamLimits

0x46c6,	// (0x0009efaf) popup_call3_audio_in_window_t1

0x46ee,	// (0x0009efd7) popup_call3_audio_in_window_t2_ParamLimits

0x46ee,	// (0x0009efd7) popup_call3_audio_in_window_t2

0x4716,	// (0x0009efff) popup_call3_audio_in_window_t3_ParamLimits

0x4716,	// (0x0009efff) popup_call3_audio_in_window_t3

0x0002,

0xf576,	// (0x000a9e5f) popup_call3_audio_in_window_t_ParamLimits

0xf576,	// (0x000a9e5f) popup_call3_audio_in_window_t

0xb39f,	// (0x000a5c88) bg_popup_call3_rect_pane

0xc5bf,	// (0x000a6ea8) bg_popup_call3_rect_pane_g1

0xa7f6,	// (0x000a50df) bg_popup_call3_rect_pane_g2

0xc5c7,	// (0x000a6eb0) bg_popup_call3_rect_pane_g3

0xc5cf,	// (0x000a6eb8) bg_popup_call3_rect_pane_g4

0xc5d7,	// (0x000a6ec0) bg_popup_call3_rect_pane_g5

0xc5df,	// (0x000a6ec8) bg_popup_call3_rect_pane_g6

0xc5e7,	// (0x000a6ed0) bg_popup_call3_rect_pane_g7

0x38a8,	// (0x0009e191) mup_visualizer_osc_pane

0xb45e,	// (0x000a5d47) mup_visualizer_spec_pane

0x462e,	// (0x0009ef17) call3_video_qcif_pane_ParamLimits

0x462e,	// (0x0009ef17) call3_video_qcif_pane

0x463e,	// (0x0009ef27) call3_video_qcif_uncrop_pane_ParamLimits

0x463e,	// (0x0009ef27) call3_video_qcif_uncrop_pane

0x464c,	// (0x0009ef35) call3_video_subqcif_pane_ParamLimits

0x464c,	// (0x0009ef35) call3_video_subqcif_pane

0x465e,	// (0x0009ef47) call3_video_subqcif_uncrop_pane_ParamLimits

0x465e,	// (0x0009ef47) call3_video_subqcif_uncrop_pane

0x46b6,	// (0x0009ef9f) popup_call3_audio_in_window_g4_ParamLimits

0x46b6,	// (0x0009ef9f) popup_call3_audio_in_window_g4

0x45d9,	// (0x0009eec2) mup_spec_half_pane

0x45e2,	// (0x0009eecb) mup_spec_half_pane_cp

0xc824,	// (0x000a710d) mup_osc_middle_pane

0xc82d,	// (0x000a7116) mup_visualizer_osc_pane_g1

0x45ba,	// (0x0009eea3) mup_spec_bar_pane_ParamLimits

0x45ba,	// (0x0009eea3) mup_spec_bar_pane

0xc811,	// (0x000a70fa) mup_spec_bar_pane_g1

0xc81b,	// (0x000a7104) mup_spec_bar_pane_g2

0x0001,

0x02c9,	// (0x0009abb2) mup_spec_bar_pane_g

0x15b4,	// (0x0009be9d) aid_cale_week_size_cell_pane_ParamLimits

0x15c9,	// (0x0009beb2) bg_cale_heading_pane_ParamLimits

0xa833,	// (0x000a511c) bg_cale_pane_cp01_ParamLimits

0x15eb,	// (0x0009bed4) cale_week_corner_pane_ParamLimits

0x1605,	// (0x0009beee) cale_week_day_heading_pane_ParamLimits

0x1627,	// (0x0009bf10) cale_week_scroll_pane_g1_ParamLimits

0x1644,	// (0x0009bf2d) cale_week_scroll_pane_g2_ParamLimits

0x1657,	// (0x0009bf40) cale_week_scroll_pane_g3_ParamLimits

0x166a,	// (0x0009bf53) cale_week_scroll_pane_g4_ParamLimits

0x167d,	// (0x0009bf66) cale_week_scroll_pane_g5_ParamLimits

0x1690,	// (0x0009bf79) cale_week_scroll_pane_g6_ParamLimits

0x16a3,	// (0x0009bf8c) cale_week_scroll_pane_g7_ParamLimits

0x16b6,	// (0x0009bf9f) cale_week_scroll_pane_g8_ParamLimits

0x16cb,	// (0x0009bfb4) cale_week_scroll_pane_g9_ParamLimits

0x16de,	// (0x0009bfc7) cale_week_scroll_pane_g10_ParamLimits

0x16f1,	// (0x0009bfda) cale_week_scroll_pane_g11_ParamLimits

0x1704,	// (0x0009bfed) cale_week_scroll_pane_g12_ParamLimits

0x171b,	// (0x0009c004) cale_week_scroll_pane_g13_ParamLimits

0x1736,	// (0x0009c01f) cale_week_scroll_pane_g14_ParamLimits

0x1751,	// (0x0009c03a) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000a9a95) cale_week_scroll_pane_g_ParamLimits

0x1781,	// (0x0009c06a) cale_week_time_pane_ParamLimits

0x1796,	// (0x0009c07f) grid_cale_week_pane_ParamLimits

0xa851,	// (0x000a513a) listscroll_cale_week_pane_t1

0xa863,	// (0x000a514c) scroll_pane_cp08_ParamLimits

0x2598,	// (0x0009ce81) cale_month_corner_pane_ParamLimits

0xabfc,	// (0x000a54e5) cale_month_pane_t1

0x2a3c,	// (0x0009d325) cale_month_week_pane_ParamLimits

0xb29b,	// (0x000a5b84) popup_call_status_window_g1_ParamLimits

0x336e,	// (0x0009dc57) popup_call_status_window_g2_ParamLimits

0x337a,	// (0x0009dc63) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a9c3f) popup_call_status_window_g_ParamLimits

0xafa8,	// (0x000a5891) aid_call2_pane

0x3b3f,	// (0x0009e428) msg_header_pane_g1

0x3d02,	// (0x0009e5eb) postcard_address2_pane_ParamLimits

0x3d02,	// (0x0009e5eb) postcard_address2_pane

0x3d0e,	// (0x0009e5f7) postcard_message2_pane_ParamLimits

0x3d0e,	// (0x0009e5f7) postcard_message2_pane

0x454c,	// (0x0009ee35) message2_row_pane_ParamLimits

0x454c,	// (0x0009ee35) message2_row_pane

0x4569,	// (0x0009ee52) address2_row_pane_ParamLimits

0x4569,	// (0x0009ee52) address2_row_pane

0xc7df,	// (0x000a70c8) postcard_message2_row_pane_g1

0xc7e7,	// (0x000a70d0) postcard_message2_row_pane_t1

0xc7df,	// (0x000a70c8) address2_row_pane_g1

0xc7e7,	// (0x000a70d0) address2_row_pane_t1

0x1b07,	// (0x0009c3f0) aid_size_cell_vorec

0x9ecc,	// (0x000a47b5) main_rss_pane

0x457c,	// (0x0009ee65) rss_list_single_pane_ParamLimits

0x457c,	// (0x0009ee65) rss_list_single_pane

0xc7f5,	// (0x000a70de) rss_list_single_pane_t1

0xc803,	// (0x000a70ec) rss_list_single_pane_t2

0x0001,

0x02c4,	// (0x0009abad) rss_list_single_pane_t

0x9ecc,	// (0x000a47b5) main_camera2_pane

0x9ecc,	// (0x000a47b5) main_video2_pane

0x47b2,	// (0x0009f09b) cams_zoom_pane_cp2_ParamLimits

0x47b2,	// (0x0009f09b) cams_zoom_pane_cp2

0x47be,	// (0x0009f0a7) image2_vga_pane_ParamLimits

0x47be,	// (0x0009f0a7) image2_vga_pane

0x47cd,	// (0x0009f0b6) main_camera2_pane_g1_ParamLimits

0x47cd,	// (0x0009f0b6) main_camera2_pane_g1

0x47d9,	// (0x0009f0c2) main_camera2_pane_g2_ParamLimits

0x47d9,	// (0x0009f0c2) main_camera2_pane_g2

0x47e5,	// (0x0009f0ce) main_camera2_pane_g3_ParamLimits

0x47e5,	// (0x0009f0ce) main_camera2_pane_g3

0x47f1,	// (0x0009f0da) main_camera2_pane_g4_ParamLimits

0x47f1,	// (0x0009f0da) main_camera2_pane_g4

0x47fd,	// (0x0009f0e6) main_camera2_pane_g5_ParamLimits

0x47fd,	// (0x0009f0e6) main_camera2_pane_g5

0x4809,	// (0x0009f0f2) main_camera2_pane_g6_ParamLimits

0x4809,	// (0x0009f0f2) main_camera2_pane_g6

0x4815,	// (0x0009f0fe) main_camera2_pane_g7_ParamLimits

0x4815,	// (0x0009f0fe) main_camera2_pane_g7

0x4821,	// (0x0009f10a) main_camera2_pane_g8_ParamLimits

0x4821,	// (0x0009f10a) main_camera2_pane_g8

0x0008,

0xf57d,	// (0x000a9e66) main_camera2_pane_g_ParamLimits

0xf57d,	// (0x000a9e66) main_camera2_pane_g

0x4839,	// (0x0009f122) main_camera2_pane_t1_ParamLimits

0x4839,	// (0x0009f122) main_camera2_pane_t1

0x484b,	// (0x0009f134) main_camera2_pane_t2_ParamLimits

0x484b,	// (0x0009f134) main_camera2_pane_t2

0x485d,	// (0x0009f146) main_camera2_pane_t3_ParamLimits

0x485d,	// (0x0009f146) main_camera2_pane_t3

0x486f,	// (0x0009f158) main_camera2_pane_t4_ParamLimits

0x486f,	// (0x0009f158) main_camera2_pane_t4

0x0006,

0xf590,	// (0x000a9e79) main_camera2_pane_t_ParamLimits

0xf590,	// (0x000a9e79) main_camera2_pane_t

0x48d1,	// (0x0009f1ba) cams_zoom_pane_cp4_ParamLimits

0x48d1,	// (0x0009f1ba) cams_zoom_pane_cp4

0x48e1,	// (0x0009f1ca) image2_cif_pane_ParamLimits

0x48e1,	// (0x0009f1ca) image2_cif_pane

0x48f6,	// (0x0009f1df) image2_subqcif_pane_ParamLimits

0x48f6,	// (0x0009f1df) image2_subqcif_pane

0x4905,	// (0x0009f1ee) main_video2_pane_g1_ParamLimits

0x4905,	// (0x0009f1ee) main_video2_pane_g1

0x4917,	// (0x0009f200) main_video2_pane_g2_ParamLimits

0x4917,	// (0x0009f200) main_video2_pane_g2

0x4927,	// (0x0009f210) main_video2_pane_g3_ParamLimits

0x4927,	// (0x0009f210) main_video2_pane_g3

0x4937,	// (0x0009f220) main_video2_pane_g4_ParamLimits

0x4937,	// (0x0009f220) main_video2_pane_g4

0x4947,	// (0x0009f230) main_video2_pane_g5_ParamLimits

0x4947,	// (0x0009f230) main_video2_pane_g5

0x4957,	// (0x0009f240) main_video2_pane_g6_ParamLimits

0x4957,	// (0x0009f240) main_video2_pane_g6

0x0005,

0xf59f,	// (0x000a9e88) main_video2_pane_g_ParamLimits

0xf59f,	// (0x000a9e88) main_video2_pane_g

0x4969,	// (0x0009f252) main_video2_pane_t1_ParamLimits

0x4969,	// (0x0009f252) main_video2_pane_t1

0x4983,	// (0x0009f26c) main_video2_pane_t2_ParamLimits

0x4983,	// (0x0009f26c) main_video2_pane_t2

0x49a9,	// (0x0009f292) main_video2_pane_t3_ParamLimits

0x49a9,	// (0x0009f292) main_video2_pane_t3

0x0002,

0xf5ac,	// (0x000a9e95) main_video2_pane_t_ParamLimits

0xf5ac,	// (0x000a9e95) main_video2_pane_t

0x4268,	// (0x0009eb51) call_muted_g2

0x0001,

0xf561,	// (0x000a9e4a) call_muted_g

0x9ecc,	// (0x000a47b5) main_mup2_pane

0xc864,	// (0x000a714d) main_mup2_pane_g1_ParamLimits

0xc864,	// (0x000a714d) main_mup2_pane_g1

0x49cf,	// (0x0009f2b8) main_mup2_pane_g2_ParamLimits

0x49cf,	// (0x0009f2b8) main_mup2_pane_g2

0x4c51,	// (0x0009f53a) main_mup_pane_g13_cp1

0x4c59,	// (0x0009f542) mup_volume_pane_cp1

0x49ef,	// (0x0009f2d8) main_mup2_pane_g4_ParamLimits

0x49ef,	// (0x0009f2d8) main_mup2_pane_g4

0x4a04,	// (0x0009f2ed) main_mup2_pane_g5_ParamLimits

0x4a04,	// (0x0009f2ed) main_mup2_pane_g5

0x4a19,	// (0x0009f302) main_mup2_pane_g6_ParamLimits

0x4a19,	// (0x0009f302) main_mup2_pane_g6

0x4a2e,	// (0x0009f317) main_mup2_pane_g7_ParamLimits

0x4a2e,	// (0x0009f317) main_mup2_pane_g7

0x0006,

0xf5b3,	// (0x000a9e9c) main_mup2_pane_g_ParamLimits

0xf5b3,	// (0x000a9e9c) main_mup2_pane_g

0x4a4a,	// (0x0009f333) main_mup2_pane_t1_ParamLimits

0x4a4a,	// (0x0009f333) main_mup2_pane_t1

0x4a61,	// (0x0009f34a) main_mup2_pane_t2_ParamLimits

0x4a61,	// (0x0009f34a) main_mup2_pane_t2

0x4a78,	// (0x0009f361) main_mup2_pane_t3_ParamLimits

0x4a78,	// (0x0009f361) main_mup2_pane_t3

0x4a8f,	// (0x0009f378) main_mup2_pane_t4_ParamLimits

0x4a8f,	// (0x0009f378) main_mup2_pane_t4

0x4aa9,	// (0x0009f392) main_mup2_pane_t5_ParamLimits

0x4aa9,	// (0x0009f392) main_mup2_pane_t5

0x4ac3,	// (0x0009f3ac) main_mup2_pane_t6_ParamLimits

0x4ac3,	// (0x0009f3ac) main_mup2_pane_t6

0x0005,

0xf5c2,	// (0x000a9eab) main_mup2_pane_t_ParamLimits

0xf5c2,	// (0x000a9eab) main_mup2_pane_t

0x4afb,	// (0x0009f3e4) mup2_visualizer_pane_ParamLimits

0x4afb,	// (0x0009f3e4) mup2_visualizer_pane

0x4b31,	// (0x0009f41a) mup_progress_pane_cp_ParamLimits

0x4b31,	// (0x0009f41a) mup_progress_pane_cp

0x4c3c,	// (0x0009f525) mup_volume_pane_cp_ParamLimits

0x4c3c,	// (0x0009f525) mup_volume_pane_cp

0x4b48,	// (0x0009f431) mup2_visualizer_pane_g1_ParamLimits

0x4b48,	// (0x0009f431) mup2_visualizer_pane_g1

0xc870,	// (0x000a7159) mup2_visualizer_pane_g2_ParamLimits

0xc870,	// (0x000a7159) mup2_visualizer_pane_g2

0x4b5d,	// (0x0009f446) mup2_visualizer_pane_g3_ParamLimits

0x4b5d,	// (0x0009f446) mup2_visualizer_pane_g3

0x0002,

0xf5cf,	// (0x000a9eb8) mup2_visualizer_pane_g_ParamLimits

0xf5cf,	// (0x000a9eb8) mup2_visualizer_pane_g

0xb685,	// (0x000a5f6e) aid_size_cell_fmradio

0x437e,	// (0x0009ec67) aid_height_parent_landcape

0xaa5a,	// (0x000a5343) wml_content_pane_cp

0xaa62,	// (0x000a534b) wml_tabs_pane

0xaa6b,	// (0x000a5354) popup_wml_miniature_window

0xaa73,	// (0x000a535c) scroll_pane_cp021

0xaa87,	// (0x000a5370) wml_content_pane_comp8

0x9ecc,	// (0x000a47b5) bg_popup_sub_pane_cp05

0xc88e,	// (0x000a7177) popup_wml_miniature_window_g1

0xc896,	// (0x000a717f) wml_miniature_view_pane

0x4b6b,	// (0x0009f454) aid_size_wml_view

0x4b73,	// (0x0009f45c) wml_miniature_view_pane_g1

0x4b7c,	// (0x0009f465) wml_miniature_view_pane_g2

0x4b85,	// (0x0009f46e) wml_miniature_view_pane_g3

0x4b8d,	// (0x0009f476) wml_miniature_view_pane_g4

0x4b95,	// (0x0009f47e) wml_miniature_view_pane_g5

0x4b9d,	// (0x0009f486) wml_miniature_view_pane_g6

0x4ba5,	// (0x0009f48e) wml_miniature_view_pane_g7

0x4bad,	// (0x0009f496) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x000a9ebf) wml_miniature_view_pane_g

0xc864,	// (0x000a714d) background_graphic_ParamLimits

0xc864,	// (0x000a714d) background_graphic

0xc89e,	// (0x000a7187) wml_tabs_2_pane

0xc8a7,	// (0x000a7190) wml_tabs_3_pane_ParamLimits

0xc8a7,	// (0x000a7190) wml_tabs_3_pane

0xc8b9,	// (0x000a71a2) wml_tabs_4_pane_ParamLimits

0xc8b9,	// (0x000a71a2) wml_tabs_4_pane

0xc8cf,	// (0x000a71b8) wml_tabs_5_pane_ParamLimits

0xc8cf,	// (0x000a71b8) wml_tabs_5_pane

0xc8e9,	// (0x000a71d2) wml_tabs_pane_g2_ParamLimits

0xc8e9,	// (0x000a71d2) wml_tabs_pane_g2

0xc8fd,	// (0x000a71e6) wml_tabs_pane_g3_ParamLimits

0xc8fd,	// (0x000a71e6) wml_tabs_pane_g3

0x4bb5,	// (0x0009f49e) wml_tabs_2_active_pane_ParamLimits

0x4bb5,	// (0x0009f49e) wml_tabs_2_active_pane

0x4bc5,	// (0x0009f4ae) wml_tabs_2_passive_pane_ParamLimits

0x4bc5,	// (0x0009f4ae) wml_tabs_2_passive_pane

0x4bd5,	// (0x0009f4be) wml_tabs_3_active_pane_cp_ParamLimits

0x4bd5,	// (0x0009f4be) wml_tabs_3_active_pane_cp

0x4be6,	// (0x0009f4cf) wml_tabs_3_passive_pane_ParamLimits

0x4be6,	// (0x0009f4cf) wml_tabs_3_passive_pane

0x4bf7,	// (0x0009f4e0) wml_tabs_3_passive_pane_cp_ParamLimits

0x4bf7,	// (0x0009f4e0) wml_tabs_3_passive_pane_cp

0x4c08,	// (0x0009f4f1) tabs_4_active_pane

0x4c10,	// (0x0009f4f9) tabs_4_passive_pane

0x4c18,	// (0x0009f501) tabs_4_passive_pane_cp

0x4c20,	// (0x0009f509) tabs_4_passive_pane_cp2

0x4143,	// (0x0009ea2c) aid_height_text

0x3871,	// (0x0009e15a) mup_volume_cont_pane_ParamLimits

0x3871,	// (0x0009e15a) mup_volume_cont_pane

0x10ff,	// (0x0009b9e8) aid_size_cell_pinb

0x1109,	// (0x0009b9f2) aid_size_list_pinb

0x4b1a,	// (0x0009f403) mup2_volume_cont_pane_ParamLimits

0x4b1a,	// (0x0009f403) mup2_volume_cont_pane

0x4c28,	// (0x0009f511) mup2_volume_cont_pane_g1_ParamLimits

0x4c28,	// (0x0009f511) mup2_volume_cont_pane_g1

0x0d21,	// (0x0009b60a) aid_size_cell_touch_ParamLimits

0x0d21,	// (0x0009b60a) aid_size_cell_touch

0x0fe2,	// (0x0009b8cb) touch_pane_ParamLimits

0x0fe2,	// (0x0009b8cb) touch_pane

0x0fd8,	// (0x0009b8c1) main_rss2_pane

0xc91a,	// (0x000a7203) listscroll_rss2_pane

0xc923,	// (0x000a720c) rss2_navigation_pane

0xc92b,	// (0x000a7214) list_rss2_pane

0xb103,	// (0x000a59ec) scroll_pane_cp22

0xc933,	// (0x000a721c) rss2_navigation_pane_g1

0xc93c,	// (0x000a7225) rss2_navigation_pane_g2

0xc944,	// (0x000a722d) rss2_navigation_pane_g3

0x0002,

0x034f,	// (0x0009ac38) rss2_navigation_pane_g

0xc94c,	// (0x000a7235) rss2_navigation_pane_t1

0x4c61,	// (0x0009f54a) rss2_list_single_pane_ParamLimits

0x4c61,	// (0x0009f54a) rss2_list_single_pane

0xc95a,	// (0x000a7243) rss2_list_single_pane_t2

0xc968,	// (0x000a7251) rss2_list_single_pane_t3_ParamLimits

0xc968,	// (0x000a7251) rss2_list_single_pane_t3

0xc985,	// (0x000a726e) rss2_list_single_pane_t4

0x30e4,	// (0x0009d9cd) smil_status_pane_g1

0x4395,	// (0x0009ec7e) main_image2_pane_ParamLimits

0x4395,	// (0x0009ec7e) main_image2_pane

0x482d,	// (0x0009f116) main_camera2_pane_g9_ParamLimits

0x482d,	// (0x0009f116) main_camera2_pane_g9

0x4881,	// (0x0009f16a) main_camera2_pane_t5_ParamLimits

0x4881,	// (0x0009f16a) main_camera2_pane_t5

0x4893,	// (0x0009f17c) main_camera2_pane_t6_ParamLimits

0x4893,	// (0x0009f17c) main_camera2_pane_t6

0x4c99,	// (0x0009f582) main_image2_pane_g1_ParamLimits

0x4c99,	// (0x0009f582) main_image2_pane_g1

0x3edf,	// (0x0009e7c8) smil2_video_pane_ParamLimits

0x3edf,	// (0x0009e7c8) smil2_video_pane

0x0c32,	// (0x0009b51b) aid_zoom_text_primary_cp

0x0f73,	// (0x0009b85c) popup_preview_fixed_window

0xa9c3,	// (0x000a52ac) im_reading_pane_g1

0x4777,	// (0x0009f060) cams2_bc_adjust_pane_cp_ParamLimits

0x4777,	// (0x0009f060) cams2_bc_adjust_pane_cp

0x48c3,	// (0x0009f1ac) cams2_bc_adjust_pane_ParamLimits

0x48c3,	// (0x0009f1ac) cams2_bc_adjust_pane

0xd968,	// (0x000a8251) cams2_bc_adjust_pane_g1

0x4ca5,	// (0x0009f58e) cams2_slider_pane

0x4cae,	// (0x0009f597) cams2_slider_pane_g1

0x4cb7,	// (0x0009f5a0) cams2_slider_pane_g2

0x0006,

0xf5e7,	// (0x000a9ed0) cams2_slider_pane_g

0x11f9,	// (0x0009bae2) calc_display_pane_ParamLimits

0x1217,	// (0x0009bb00) calc_paper_pane_ParamLimits

0x1233,	// (0x0009bb1c) grid_calc_pane_ParamLimits

0x33dc,	// (0x0009dcc5) popup_clock_digital_window_t1_ParamLimits

0xb622,	// (0x000a5f0b) main_image_pane_t1

0x11df,	// (0x0009bac8) aid_size_cell_calc_ParamLimits

0x11df,	// (0x0009bac8) aid_size_cell_calc

0x43c6,	// (0x0009ecaf) popup_blid_sat_info2_window_ParamLimits

0x43c6,	// (0x0009ecaf) popup_blid_sat_info2_window

0xc99b,	// (0x000a7284) aid_size_cell_blid

0xc9a3,	// (0x000a728c) bg_popup_window_pane_cp07

0xc9c6,	// (0x000a72af) grid_popup_blid_pane

0xc9d0,	// (0x000a72b9) heading_pane_cp05_ParamLimits

0xc9d0,	// (0x000a72b9) heading_pane_cp05

0xca9a,	// (0x000a7383) cell_popup_blid_pane_ParamLimits

0xca9a,	// (0x000a7383) cell_popup_blid_pane

0xcac0,	// (0x000a73a9) cell_popup_blid_pane_g1

0xcac8,	// (0x000a73b1) cell_popup_blid_pane_t1

0x4ae0,	// (0x0009f3c9) mup2_indicator_pane_ParamLimits

0x4ae0,	// (0x0009f3c9) mup2_indicator_pane

0xb39f,	// (0x000a5c88) mup2_visualizer_osc_pane

0xc87c,	// (0x000a7165) mup2_visualizer_spec_pane_ParamLimits

0xc87c,	// (0x000a7165) mup2_visualizer_spec_pane

0x4cd1,	// (0x0009f5ba) mup2_spec_half_pane

0x4cda,	// (0x0009f5c3) mup2_spec_half_pane_cp

0x4ce4,	// (0x0009f5cd) mup2_spec_bar_pane_ParamLimits

0x4ce4,	// (0x0009f5cd) mup2_spec_bar_pane

0xc811,	// (0x000a70fa) mup2_spec_bar_pane_g1

0xc81b,	// (0x000a7104) mup2_spec_bar_pane_g2

0x0001,

0x02c9,	// (0x0009abb2) mup2_spec_bar_pane_g

0x4d03,	// (0x0009f5ec) mup2_osc_middle_pane

0xc82d,	// (0x000a7116) mup2_visualizer_osc_pane_g1

0x9ad9,	// (0x000a43c2) popup_number_entry_window_t1_ParamLimits

0x9aec,	// (0x000a43d5) popup_number_entry_window_t2_ParamLimits

0x9afe,	// (0x000a43e7) popup_number_entry_window_t3_ParamLimits

0x1039,	// (0x0009b922) popup_number_entry_window_t5_ParamLimits

0x1039,	// (0x0009b922) popup_number_entry_window_t5

0xf0c6,	// (0x000a99af) popup_number_entry_window_t_ParamLimits

0x9b10,	// (0x000a43f9) text_title_cp2_ParamLimits

0x3bd6,	// (0x0009e4bf) aid_hotspot_pointer_text2_pane

0x3c64,	// (0x0009e54d) main_viewer_pane_g9_ParamLimits

0x3c64,	// (0x0009e54d) main_viewer_pane_g9

0xabfc,	// (0x000a54e5) cale_month_pane_t1_ParamLimits

0xac39,	// (0x000a5522) bg_cale_pane_ParamLimits

0xac51,	// (0x000a553a) list_cale_pane_ParamLimits

0xac62,	// (0x000a554b) listscroll_cale_day_pane_t1

0xac74,	// (0x000a555d) scroll_pane_cp09_ParamLimits

0x38b0,	// (0x0009e199) main_mup_eq_pane_t1_ParamLimits

0x38b0,	// (0x0009e199) main_mup_eq_pane_t1

0x38ca,	// (0x0009e1b3) main_mup_eq_pane_t2_ParamLimits

0x38ca,	// (0x0009e1b3) main_mup_eq_pane_t2

0x38e2,	// (0x0009e1cb) main_mup_eq_pane_t3_ParamLimits

0x38e2,	// (0x0009e1cb) main_mup_eq_pane_t3

0x38fa,	// (0x0009e1e3) main_mup_eq_pane_t4_ParamLimits

0x38fa,	// (0x0009e1e3) main_mup_eq_pane_t4

0x3912,	// (0x0009e1fb) main_mup_eq_pane_t5_ParamLimits

0x3912,	// (0x0009e1fb) main_mup_eq_pane_t5

0x392a,	// (0x0009e213) main_mup_eq_pane_t6_ParamLimits

0x392a,	// (0x0009e213) main_mup_eq_pane_t6

0x393e,	// (0x0009e227) main_mup_eq_pane_t7_ParamLimits

0x393e,	// (0x0009e227) main_mup_eq_pane_t7

0x3952,	// (0x0009e23b) main_mup_eq_pane_t8_ParamLimits

0x3952,	// (0x0009e23b) main_mup_eq_pane_t8

0x3968,	// (0x0009e251) main_mup_eq_pane_t9_ParamLimits

0x3968,	// (0x0009e251) main_mup_eq_pane_t9

0x3980,	// (0x0009e269) main_mup_eq_pane_t10_ParamLimits

0x3980,	// (0x0009e269) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a9d3e) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a9d3e) main_mup_eq_pane_t

0x3a3d,	// (0x0009e326) mup_equalizer_pane_cp5_ParamLimits

0x3a53,	// (0x0009e33c) mup_equalizer_pane_cp6_ParamLimits

0x3a6b,	// (0x0009e354) mup_equalizer_pane_cp7_ParamLimits

0x0fd8,	// (0x0009b8c1) main_gallery_pane

0xc836,	// (0x000a711f) smil2_volume_pane

0xc83e,	// (0x000a7127) smil_status_volume_pane_g1_ParamLimits

0xc851,	// (0x000a713a) smil_status_volume_pane_g2_ParamLimits

0x45ec,	// (0x0009eed5) smil_status_volume_pane_g3_ParamLimits

0xf566,	// (0x000a9e4f) smil_status_volume_pane_g_ParamLimits

0xc9a3,	// (0x000a728c) bg_popup_window_pane_cp07_ParamLimits

0xc9b1,	// (0x000a729a) blid_firmament_pane

0x4d0c,	// (0x0009f5f5) aid_size_cell_gallery_ParamLimits

0x4d0c,	// (0x0009f5f5) aid_size_cell_gallery

0x4d1a,	// (0x0009f603) grid_gallery_pane_ParamLimits

0x4d1a,	// (0x0009f603) grid_gallery_pane

0x4d2a,	// (0x0009f613) cell_gallery_pane_ParamLimits

0x4d2a,	// (0x0009f613) cell_gallery_pane

0xcad6,	// (0x000a73bf) bg_cell_gallery_focus_pane_ParamLimits

0xcad6,	// (0x000a73bf) bg_cell_gallery_focus_pane

0xcae8,	// (0x000a73d1) cell_gallery_pane_g1_ParamLimits

0xcae8,	// (0x000a73d1) cell_gallery_pane_g1

0x4d78,	// (0x0009f661) cell_gallery_pane_g2_ParamLimits

0x4d78,	// (0x0009f661) cell_gallery_pane_g2

0x4d85,	// (0x0009f66e) cell_gallery_pane_g3_ParamLimits

0x4d85,	// (0x0009f66e) cell_gallery_pane_g3

0xcaf4,	// (0x000a73dd) cell_gallery_pane_g4_ParamLimits

0xcaf4,	// (0x000a73dd) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x000a9edf) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x000a9edf) cell_gallery_pane_g

0xcb00,	// (0x000a73e9) bg_cell_gallery_focus_pane_g1

0xcb08,	// (0x000a73f1) bg_cell_gallery_focus_pane_g2

0xcb10,	// (0x000a73f9) bg_cell_gallery_focus_pane_g3

0xcb18,	// (0x000a7401) bg_cell_gallery_focus_pane_g4

0xcb20,	// (0x000a7409) bg_cell_gallery_focus_pane_g5

0xcb28,	// (0x000a7411) bg_cell_gallery_focus_pane_g6

0xcb30,	// (0x000a7419) bg_cell_gallery_focus_pane_g7

0xcb38,	// (0x000a7421) bg_cell_gallery_focus_pane_g8

0x0007,

0x0385,	// (0x0009ac6e) bg_cell_gallery_focus_pane_g

0xcb40,	// (0x000a7429) aid_firma_cardinal

0xcb54,	// (0x000a743d) blid_firmament_pane_t1

0xcb6b,	// (0x000a7454) blid_firmament_pane_t2

0xcb82,	// (0x000a746b) blid_firmament_pane_t3

0xcb99,	// (0x000a7482) blid_firmament_pane_t4

0x0003,

0x0396,	// (0x0009ac7f) blid_firmament_pane_t

0xcbb0,	// (0x000a7499) blid_sat_info_pane

0xcbc0,	// (0x000a74a9) blid_sat_info_pane_g1

0xcbc0,	// (0x000a74a9) blid_sat_info_pane_g2

0x0001,

0x039f,	// (0x0009ac88) blid_sat_info_pane_g

0xcbca,	// (0x000a74b3) blid_sat_info_pane_t1

0xcbd8,	// (0x000a74c1) smil2_volume_content_pane

0xcbe1,	// (0x000a74ca) smil2_volume_pane_g1

0xa78d,	// (0x000a5076) smil2_volume_content_pane_g1

0xcbe9,	// (0x000a74d2) smil2_volume_content_pane_g2

0xcbf2,	// (0x000a74db) smil2_volume_content_pane_g3

0xcbfb,	// (0x000a74e4) smil2_volume_content_pane_g4

0xcc04,	// (0x000a74ed) smil2_volume_content_pane_g5

0xcc0d,	// (0x000a74f6) smil2_volume_content_pane_g6

0xcc16,	// (0x000a74ff) smil2_volume_content_pane_g7

0xcc1f,	// (0x000a7508) smil2_volume_content_pane_g8

0xcc28,	// (0x000a7511) smil2_volume_content_pane_g9

0xcc31,	// (0x000a751a) smil2_volume_content_pane_g10

0x0009,

0xf5ff,	// (0x000a9ee8) smil2_volume_content_pane_g

0x181b,	// (0x0009c104) cale_week_day_heading_pane_t1_ParamLimits

0x1856,	// (0x0009c13f) cale_week_day_heading_pane_t2_ParamLimits

0x1891,	// (0x0009c17a) cale_week_day_heading_pane_t3_ParamLimits

0x18cc,	// (0x0009c1b5) cale_week_day_heading_pane_t4_ParamLimits

0x1907,	// (0x0009c1f0) cale_week_day_heading_pane_t5_ParamLimits

0x1942,	// (0x0009c22b) cale_week_day_heading_pane_t6_ParamLimits

0x197d,	// (0x0009c266) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000a9ab6) cale_week_day_heading_pane_t_ParamLimits

0xa880,	// (0x000a5169) bg_cale_side_pane_ParamLimits

0x19b8,	// (0x0009c2a1) cale_week_time_pane_t1_ParamLimits

0x19d2,	// (0x0009c2bb) cale_week_time_pane_t2_ParamLimits

0x19ec,	// (0x0009c2d5) cale_week_time_pane_t3_ParamLimits

0x1a06,	// (0x0009c2ef) cale_week_time_pane_t4_ParamLimits

0x1a20,	// (0x0009c309) cale_week_time_pane_t5_ParamLimits

0x1a3c,	// (0x0009c325) cale_week_time_pane_t6_ParamLimits

0x1a5e,	// (0x0009c347) cale_week_time_pane_t7_ParamLimits

0x1a82,	// (0x0009c36b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000a9ac5) cale_week_time_pane_t_ParamLimits

0x1aa8,	// (0x0009c391) cell_cale_week_pane_g2_ParamLimits

0xa880,	// (0x000a5169) bg_cale_side_pane_cp01_ParamLimits

0x2eb3,	// (0x0009d79c) cale_month_week_pane_t1_ParamLimits

0x2ecc,	// (0x0009d7b5) cale_month_week_pane_t2_ParamLimits

0x2ee5,	// (0x0009d7ce) cale_month_week_pane_t3_ParamLimits

0x2efe,	// (0x0009d7e7) cale_month_week_pane_t4_ParamLimits

0x2f1b,	// (0x0009d804) cale_month_week_pane_t5_ParamLimits

0x2f3c,	// (0x0009d825) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a9b9e) cale_month_week_pane_t_ParamLimits

0x30ad,	// (0x0009d996) cell_cale_month_pane_g1_ParamLimits

0x0fd8,	// (0x0009b8c1) main_cale_event_viewer_pane

0x9aaf,	// (0x000a4398) listscroll_cale_event_viewer_pane

0xcc3a,	// (0x000a7523) list_cale_ev_pane

0xcc42,	// (0x000a752b) scroll_pane_cp023

0xcc4e,	// (0x000a7537) field_cale_ev_pane_ParamLimits

0xcc4e,	// (0x000a7537) field_cale_ev_pane

0xcc6a,	// (0x000a7553) field_cale_ev_content_pane_ParamLimits

0xcc6a,	// (0x000a7553) field_cale_ev_content_pane

0xcc76,	// (0x000a755f) field_cale_ev_pane_g1_ParamLimits

0xcc76,	// (0x000a755f) field_cale_ev_pane_g1

0xcc82,	// (0x000a756b) field_cale_ev_pane_g2_ParamLimits

0xcc82,	// (0x000a756b) field_cale_ev_pane_g2

0xcc9a,	// (0x000a7583) field_cale_ev_pane_g3_ParamLimits

0xcc9a,	// (0x000a7583) field_cale_ev_pane_g3

0x0002,

0x03b9,	// (0x0009aca2) field_cale_ev_pane_g_ParamLimits

0x03b9,	// (0x0009aca2) field_cale_ev_pane_g

0xccb2,	// (0x000a759b) field_cale_ev_pane_t1_ParamLimits

0xccb2,	// (0x000a759b) field_cale_ev_pane_t1

0xccc9,	// (0x000a75b2) field_cale_ev_content_pane_t1_ParamLimits

0xccc9,	// (0x000a75b2) field_cale_ev_content_pane_t1

0xb508,	// (0x000a5df1) bg_button_pane_cp01

0x15a4,	// (0x0009be8d) listscroll_cale_week_pane_ParamLimits

0xa82a,	// (0x000a5113) popup_toolbar_window_cp01

0xa851,	// (0x000a513a) listscroll_cale_week_pane_t1_ParamLimits

0x15a4,	// (0x0009be8d) listscroll_cale_day_pane_ParamLimits

0xa82a,	// (0x000a5113) popup_toolbar_window_cp02

0xac62,	// (0x000a554b) listscroll_cale_day_pane_t1_ParamLimits

0x15a4,	// (0x0009be8d) main_cale_month_pane_ParamLimits

0x44c3,	// (0x0009edac) popup_toolbar_window_cp03_ParamLimits

0x44c3,	// (0x0009edac) popup_toolbar_window_cp03

0x3df1,	// (0x0009e6da) main_image_pane_g2_ParamLimits

0x3df1,	// (0x0009e6da) main_image_pane_g2

0x3dfd,	// (0x0009e6e6) main_image_pane_g3_ParamLimits

0x3dfd,	// (0x0009e6e6) main_image_pane_g3

0x0002,

0xf4dd,	// (0x000a9dc6) main_image_pane_g_ParamLimits

0xf4dd,	// (0x000a9dc6) main_image_pane_g

0xb622,	// (0x000a5f0b) main_image_pane_t1_ParamLimits

0x3e09,	// (0x0009e6f2) main_image_pane_t2_ParamLimits

0x3e09,	// (0x0009e6f2) main_image_pane_t2

0x3e1b,	// (0x0009e704) main_image_pane_t3_ParamLimits

0x3e1b,	// (0x0009e704) main_image_pane_t3

0x3e2d,	// (0x0009e716) main_image_pane_t4_ParamLimits

0x3e2d,	// (0x0009e716) main_image_pane_t4

0x0003,

0xf4e4,	// (0x000a9dcd) main_image_pane_t_ParamLimits

0xf4e4,	// (0x000a9dcd) main_image_pane_t

0x3e3f,	// (0x0009e728) popup_image_details_window_cp01

0x3e49,	// (0x0009e732) popup_toobar_trans_pane_cp01_ParamLimits

0x3e49,	// (0x0009e732) popup_toobar_trans_pane_cp01

0x4419,	// (0x0009ed02) popup_image_details_window_ParamLimits

0x4419,	// (0x0009ed02) popup_image_details_window

0x4427,	// (0x0009ed10) popup_image_focus_window

0x4769,	// (0x0009f052) camera2_autofocus_pane_ParamLimits

0x4769,	// (0x0009f052) camera2_autofocus_pane

0x9aaf,	// (0x000a4398) bg_popup_sub_pane_cp06

0xcce6,	// (0x000a75cf) popup_image_focus_window_g1

0xccee,	// (0x000a75d7) popup_image_focus_window_g2

0xccf6,	// (0x000a75df) popup_image_focus_window_g3

0xccfe,	// (0x000a75e7) popup_image_focus_window_g4

0x0003,

0x03c0,	// (0x0009aca9) popup_image_focus_window_g

0xcd06,	// (0x000a75ef) popup_image_focus_window_t1

0xcd14,	// (0x000a75fd) popup_image_focus_window_t2

0xcd24,	// (0x000a760d) popup_image_focus_window_t3

0x0002,

0x03c9,	// (0x0009acb2) popup_image_focus_window_t

0xcd32,	// (0x000a761b) camera2_autofocus_pane_g1

0xa463,	// (0x000a4d4c) bg_tb_trans_pane_cp01

0xcd40,	// (0x000a7629) popup_image_details_window_g1

0xcd53,	// (0x000a763c) popup_image_details_window_g2

0x0002,

0x03db,	// (0x0009acc4) popup_image_details_window_g

0xcd7c,	// (0x000a7665) popup_image_details_window_t1

0xcd8e,	// (0x000a7677) popup_image_details_window_t2

0xcda7,	// (0x000a7690) popup_image_details_window_t3

0xcdbb,	// (0x000a76a4) popup_image_details_window_t4

0xcdd6,	// (0x000a76bf) popup_image_details_window_t5

0x0004,

0x03e2,	// (0x0009accb) popup_image_details_window_t

0xa6ef,	// (0x000a4fd8) bg_calc_paper_pane_ParamLimits

0x0fd8,	// (0x0009b8c1) grid_highlight_pane_cp013

0x1330,	// (0x0009bc19) list_calc_pane_ParamLimits

0x1342,	// (0x0009bc2b) scroll_pane_cp024

0xa703,	// (0x000a4fec) bg_calc_display_pane_ParamLimits

0x134a,	// (0x0009bc33) calc_display_pane_t1_ParamLimits

0x135f,	// (0x0009bc48) calc_display_pane_t2_ParamLimits

0x1374,	// (0x0009bc5d) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000a9a36) calc_display_pane_t_ParamLimits

0x1455,	// (0x0009bd3e) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000a9a53) cell_calc_pane_g

0x145e,	// (0x0009bd47) cell_calc_pane_t1

0xa762,	// (0x000a504b) grid_highlight_pane_cp02_ParamLimits

0xa778,	// (0x000a5061) toolbar_button_pane_cp01_ParamLimits

0xa778,	// (0x000a5061) toolbar_button_pane_cp01

0xb667,	// (0x000a5f50) temp_image_control_pane_ParamLimits

0xb667,	// (0x000a5f50) temp_image_control_pane

0x4395,	// (0x0009ec7e) main_mp3_pane

0xcdf0,	// (0x000a76d9) temp_image_control_pane_g1_ParamLimits

0xcdf0,	// (0x000a76d9) temp_image_control_pane_g1

0xcdfe,	// (0x000a76e7) temp_image_control_pane_g2_ParamLimits

0xcdfe,	// (0x000a76e7) temp_image_control_pane_g2

0xce10,	// (0x000a76f9) temp_image_control_pane_g3_ParamLimits

0xce10,	// (0x000a76f9) temp_image_control_pane_g3

0x4dc2,	// (0x0009f6ab) temp_image_control_pane_g4_ParamLimits

0x4dc2,	// (0x0009f6ab) temp_image_control_pane_g4

0x0003,

0xf61f,	// (0x000a9f08) temp_image_control_pane_g_ParamLimits

0xf61f,	// (0x000a9f08) temp_image_control_pane_g

0xcdf0,	// (0x000a76d9) main_mp3_pane_g1

0x4dd3,	// (0x0009f6bc) main_mp3_pane_g2

0x0007,

0xf628,	// (0x000a9f11) main_mp3_pane_g

0xce53,	// (0x000a773c) main_mp3_pane_t1

0xa8d2,	// (0x000a51bb) main_camera_pane_g8_ParamLimits

0xa8d2,	// (0x000a51bb) main_camera_pane_g8

0x1d56,	// (0x0009c63f) main_video_pane_g7_ParamLimits

0x1d56,	// (0x0009c63f) main_video_pane_g7

0x48b1,	// (0x0009f19a) main_camera2_pane_t7_ParamLimits

0x48b1,	// (0x0009f19a) main_camera2_pane_t7

0xaa1a,	// (0x000a5303) scroll_pane_cp025_ParamLimits

0xaa1a,	// (0x000a5303) scroll_pane_cp025

0xaa2e,	// (0x000a5317) scroll_pane_cp026_ParamLimits

0xaa2e,	// (0x000a5317) scroll_pane_cp026

0xaa3d,	// (0x000a5326) wml_content_pane_ParamLimits

0x0fd8,	// (0x0009b8c1) main_touch_calib_pane

0x4e77,	// (0x0009f760) main_touch_calib_pane_g1

0x4e83,	// (0x0009f76c) main_touch_calib_pane_g2

0x4e8f,	// (0x0009f778) main_touch_calib_pane_g3

0x4e9b,	// (0x0009f784) main_touch_calib_pane_g4

0x0003,

0xf646,	// (0x000a9f2f) main_touch_calib_pane_g

0x4ea7,	// (0x0009f790) main_touch_calib_pane_t1

0x4ec0,	// (0x0009f7a9) main_touch_calib_pane_t2

0x0004,

0xf64f,	// (0x000a9f38) main_touch_calib_pane_t

0xb1e1,	// (0x000a5aca) mup_progress_pane_cp02

0xb216,	// (0x000a5aff) navi_pane_g1

0xb32a,	// (0x000a5c13) navi_pane_mp_t3

0x4395,	// (0x0009ec7e) main_mp3_pane_ParamLimits

0x4500,	// (0x0009ede9) navi_pane_ParamLimits

0xcdf0,	// (0x000a76d9) main_mp3_pane_g1_ParamLimits

0x4dd3,	// (0x0009f6bc) main_mp3_pane_g2_ParamLimits

0x4ddf,	// (0x0009f6c8) main_mp3_pane_g3_ParamLimits

0x4ddf,	// (0x0009f6c8) main_mp3_pane_g3

0x4deb,	// (0x0009f6d4) main_mp3_pane_g4_ParamLimits

0x4deb,	// (0x0009f6d4) main_mp3_pane_g4

0xce20,	// (0x000a7709) main_mp3_pane_g5_ParamLimits

0xce20,	// (0x000a7709) main_mp3_pane_g5

0xce2e,	// (0x000a7717) main_mp3_pane_g6_ParamLimits

0xce2e,	// (0x000a7717) main_mp3_pane_g6

0xce3b,	// (0x000a7724) main_mp3_pane_g7_ParamLimits

0xce3b,	// (0x000a7724) main_mp3_pane_g7

0xce47,	// (0x000a7730) main_mp3_pane_g8_ParamLimits

0xce47,	// (0x000a7730) main_mp3_pane_g8

0xf628,	// (0x000a9f11) main_mp3_pane_g_ParamLimits

0x4df7,	// (0x0009f6e0) main_mp3_pane_t2

0x4e07,	// (0x0009f6f0) main_mp3_pane_t3

0xce61,	// (0x000a774a) main_mp3_pane_t4

0xce6f,	// (0x000a7758) main_mp3_pane_t5

0x0005,

0xf639,	// (0x000a9f22) main_mp3_pane_t

0xce7d,	// (0x000a7766) mup_progress_pane_cp01

0x0c32,	// (0x0009b51b) aid_zoom_text_secondary2

0xcc3a,	// (0x000a7523) list_cale_ev2_pane

0xcc42,	// (0x000a752b) scroll_pane_cp023_ParamLimits

0x4f1b,	// (0x0009f804) field_cale_ev2_pane_ParamLimits

0x4f1b,	// (0x0009f804) field_cale_ev2_pane

0xa471,	// (0x000a4d5a) field_cale_ev2_pane_g1_ParamLimits

0xa471,	// (0x000a4d5a) field_cale_ev2_pane_g1

0xa47d,	// (0x000a4d66) field_cale_ev2_pane_g2_ParamLimits

0xa47d,	// (0x000a4d66) field_cale_ev2_pane_g2

0xa495,	// (0x000a4d7e) field_cale_ev2_pane_g3_ParamLimits

0xa495,	// (0x000a4d7e) field_cale_ev2_pane_g3

0x0003,

0xf65a,	// (0x000a9f43) field_cale_ev2_pane_g_ParamLimits

0xf65a,	// (0x000a9f43) field_cale_ev2_pane_g

0x9fb2,	// (0x000a489b) field_cale_ev2_pane_t1_ParamLimits

0x9fb2,	// (0x000a489b) field_cale_ev2_pane_t1

0x9fc9,	// (0x000a48b2) field_cale_ev2_pane_t2_ParamLimits

0x9fc9,	// (0x000a48b2) field_cale_ev2_pane_t2

0x0001,

0xf663,	// (0x000a9f4c) field_cale_ev2_pane_t_ParamLimits

0xf663,	// (0x000a9f4c) field_cale_ev2_pane_t

0x3ccc,	// (0x0009e5b5) main_postcard_pane_g5_ParamLimits

0x3ccc,	// (0x0009e5b5) main_postcard_pane_g5

0x3cda,	// (0x0009e5c3) main_postcard_pane_g6_ParamLimits

0x3cda,	// (0x0009e5c3) main_postcard_pane_g6

0x1ba0,	// (0x0009c489) camera2_autofocus_pane_cp_ParamLimits

0x1ba0,	// (0x0009c489) camera2_autofocus_pane_cp

0x4395,	// (0x0009ec7e) main_mup3_pane

0x4f69,	// (0x0009f852) main_mup3_pane_g1_ParamLimits

0x4f69,	// (0x0009f852) main_mup3_pane_g1

0x4f8a,	// (0x0009f873) main_mup3_pane_g2_ParamLimits

0x4f8a,	// (0x0009f873) main_mup3_pane_g2

0x5006,	// (0x0009f8ef) main_mup3_pane_g3_ParamLimits

0x5006,	// (0x0009f8ef) main_mup3_pane_g3

0x5049,	// (0x0009f932) main_mup3_pane_g4_ParamLimits

0x5049,	// (0x0009f932) main_mup3_pane_g4

0x508c,	// (0x0009f975) main_mup3_pane_g5_ParamLimits

0x508c,	// (0x0009f975) main_mup3_pane_g5

0x50d1,	// (0x0009f9ba) main_mup3_pane_g6_ParamLimits

0x50d1,	// (0x0009f9ba) main_mup3_pane_g6

0xce85,	// (0x000a776e) main_mup3_pane_g7_ParamLimits

0xce85,	// (0x000a776e) main_mup3_pane_g7

0x0007,

0xf673,	// (0x000a9f5c) main_mup3_pane_g_ParamLimits

0xf673,	// (0x000a9f5c) main_mup3_pane_g

0x5147,	// (0x0009fa30) main_mup3_pane_t1_ParamLimits

0x5147,	// (0x0009fa30) main_mup3_pane_t1

0x51b6,	// (0x0009fa9f) main_mup3_pane_t2_ParamLimits

0x51b6,	// (0x0009fa9f) main_mup3_pane_t2

0x527f,	// (0x0009fb68) main_mup3_pane_t4_ParamLimits

0x527f,	// (0x0009fb68) main_mup3_pane_t4

0x52cd,	// (0x0009fbb6) main_mup3_pane_t5_ParamLimits

0x52cd,	// (0x0009fbb6) main_mup3_pane_t5

0x537d,	// (0x0009fc66) main_mup3_pane_t6_ParamLimits

0x537d,	// (0x0009fc66) main_mup3_pane_t6

0x0005,

0xf684,	// (0x000a9f6d) main_mup3_pane_t_ParamLimits

0xf684,	// (0x000a9f6d) main_mup3_pane_t

0x5429,	// (0x0009fd12) mup3_progress_pane_ParamLimits

0x5429,	// (0x0009fd12) mup3_progress_pane

0x549d,	// (0x0009fd86) popup_mup3_control_window_ParamLimits

0x549d,	// (0x0009fd86) popup_mup3_control_window

0xce93,	// (0x000a777c) popup_mup3_text_window

0x54b6,	// (0x0009fd9f) mup3_progress_pane_t1

0x54d5,	// (0x0009fdbe) mup3_progress_pane_t2

0xce9b,	// (0x000a7784) mup3_progress_pane_t3

0x0002,

0xf691,	// (0x000a9f7a) mup3_progress_pane_t

0xceb8,	// (0x000a77a1) mup_progress_pane_cp03

0x9aaf,	// (0x000a4398) bg_tb_trans_pane_cp04

0x54f4,	// (0x0009fddd) mup3_volume_pane

0x54fc,	// (0x0009fde5) popup_mup3_control_window_g1

0x5505,	// (0x0009fdee) mup3_volume_pane_g1

0x550e,	// (0x0009fdf7) mup3_volume_pane_g2

0x5517,	// (0x0009fe00) mup3_volume_pane_g3

0x0002,

0xf698,	// (0x000a9f81) mup3_volume_pane_g

0x9aaf,	// (0x000a4398) bg_tb_trans_pane_cp03

0xcec8,	// (0x000a77b1) popup_mup3_text_window_g1

0xced0,	// (0x000a77b9) popup_mup3_text_window_t1

0xa74b,	// (0x000a5034) list_calc_item_pane_g1_ParamLimits

0xc911,	// (0x000a71fa) mup_volume_pane_cp_g1

0x4ed9,	// (0x0009f7c2) main_touch_calib_pane_t3

0x4eef,	// (0x0009f7d8) main_touch_calib_pane_t4

0x4f05,	// (0x0009f7ee) main_touch_calib_pane_t5

0x0d0d,	// (0x0009b5f6) aid_cell_size_toolbar2

0x0d15,	// (0x0009b5fe) aid_popup3_width_pane

0x0d55,	// (0x0009b63e) aid_zoom_text_msg_primary

0x1b6d,	// (0x0009c456) vorec_t7

0xa70f,	// (0x000a4ff8) bg_calc_paper_pane_g1_ParamLimits

0xa71b,	// (0x000a5004) bg_calc_paper_pane_g2_ParamLimits

0xa727,	// (0x000a5010) bg_calc_paper_pane_g3_ParamLimits

0xa733,	// (0x000a501c) bg_calc_paper_pane_g4_ParamLimits

0xa73f,	// (0x000a5028) bg_calc_paper_pane_g5_ParamLimits

0x13b3,	// (0x0009bc9c) bg_calc_paper_pane_g6_ParamLimits

0x13c4,	// (0x0009bcad) bg_calc_paper_pane_g7_ParamLimits

0x13d5,	// (0x0009bcbe) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000a9a3d) bg_calc_paper_pane_g_ParamLimits

0x13e6,	// (0x0009bccf) calc_bg_paper_pane_g9_ParamLimits

0x1c87,	// (0x0009c570) image_qvga_pane_ParamLimits

0x1c87,	// (0x0009c570) image_qvga_pane

0xa61f,	// (0x000a4f08) bg_popup_sub_pane_cp04_ParamLimits

0xb59e,	// (0x000a5e87) popup_mup_playback_window_g1_ParamLimits

0xb5aa,	// (0x000a5e93) popup_mup_playback_window_t1_ParamLimits

0xb5bf,	// (0x000a5ea8) popup_mup_playback_window_t2_ParamLimits

0x01a5,	// (0x0009aa8e) popup_mup_playback_window_t_ParamLimits

0x49e0,	// (0x0009f2c9) main_mup2_pane_g3_ParamLimits

0x49e0,	// (0x0009f2c9) main_mup2_pane_g3

0x204d,	// (0x0009c936) popup_toolbar_window_cp04

0xb9b4,	// (0x000a629d) popup_call2_audio_second_window_g3_ParamLimits

0xb9b4,	// (0x000a629d) popup_call2_audio_second_window_g3

0xbdbe,	// (0x000a66a7) popup_call2_audio_first_window_g4_ParamLimits

0xbdbe,	// (0x000a66a7) popup_call2_audio_first_window_g4

0xc449,	// (0x000a6d32) popup_call2_audio_in_window_g4_ParamLimits

0xc449,	// (0x000a6d32) popup_call2_audio_in_window_g4

0x3de4,	// (0x0009e6cd) aid_area_sk_bg_cut_ParamLimits

0x3de4,	// (0x0009e6cd) aid_area_sk_bg_cut

0xb5d4,	// (0x000a5ebd) aid_area_sk_bg_cut_2_ParamLimits

0xb5d4,	// (0x000a5ebd) aid_area_sk_bg_cut_2

0x4d68,	// (0x0009f651) aid_placing_details_win

0x4d70,	// (0x0009f659) aid_placing_details_win_2

0xcd32,	// (0x000a761b) camera2_autofocus_pane_g1_ParamLimits

0x0f64,	// (0x0009b84d) popup_fixed_preview_cale_window_ParamLimits

0x0f64,	// (0x0009b84d) popup_fixed_preview_cale_window

0xb3b0,	// (0x000a5c99) navi_slider_pane_g3

0xb3b9,	// (0x000a5ca2) navi_slider_pane_g4

0xb3c2,	// (0x000a5cab) navi_slider_pane_g5

0xb3b0,	// (0x000a5c99) navi_slider_pane_g6

0x3644,	// (0x0009df2d) navi_slider_pane_g7

0xb4d5,	// (0x000a5dbe) mup_scale_pane_g3

0xb4de,	// (0x000a5dc7) mup_scale_pane_g4

0xb4e7,	// (0x000a5dd0) mup_scale_pane_g5

0x3a83,	// (0x0009e36c) mup_scale_pane_g6

0x3a8c,	// (0x0009e375) mup_scale_pane_g7

0xb3b0,	// (0x000a5c99) cams2_slider_pane_g3

0xc993,	// (0x000a727c) cams2_slider_pane_g4

0x4cc0,	// (0x0009f5a9) cams2_slider_pane_g5

0xb3b0,	// (0x000a5c99) cams2_slider_pane_g6

0x4cc8,	// (0x0009f5b1) cams2_slider_pane_g7

0xcbc0,	// (0x000a74a9) camera2_autofocus_pane_cp_g1

0xc7aa,	// (0x000a7093) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7aa,	// (0x000a7093) bg_popup_preview_window_pane_cp02

0xcede,	// (0x000a77c7) list_fp_cale_pane_ParamLimits

0xcede,	// (0x000a77c7) list_fp_cale_pane

0xceea,	// (0x000a77d3) popup_fixed_preview_cale_window_t1_ParamLimits

0xceea,	// (0x000a77d3) popup_fixed_preview_cale_window_t1

0x5520,	// (0x0009fe09) popup_fixed_preview_cale_window_t2_ParamLimits

0x5520,	// (0x0009fe09) popup_fixed_preview_cale_window_t2

0x5535,	// (0x0009fe1e) popup_fixed_preview_cale_window_t3_ParamLimits

0x5535,	// (0x0009fe1e) popup_fixed_preview_cale_window_t3

0x0002,

0xf69f,	// (0x000a9f88) popup_fixed_preview_cale_window_t_ParamLimits

0xf69f,	// (0x000a9f88) popup_fixed_preview_cale_window_t

0x554a,	// (0x0009fe33) list_single_fp_cale_pane_ParamLimits

0x554a,	// (0x0009fe33) list_single_fp_cale_pane

0xcf08,	// (0x000a77f1) list_single_fp_cale_pane_g1_ParamLimits

0xcf08,	// (0x000a77f1) list_single_fp_cale_pane_g1

0xcf14,	// (0x000a77fd) list_single_fp_cale_pane_g2_ParamLimits

0xcf14,	// (0x000a77fd) list_single_fp_cale_pane_g2

0x0002,

0x0474,	// (0x0009ad5d) list_single_fp_cale_pane_g_ParamLimits

0x0474,	// (0x0009ad5d) list_single_fp_cale_pane_g

0xcf2d,	// (0x000a7816) list_single_fp_cale_pane_t1_ParamLimits

0xcf2d,	// (0x000a7816) list_single_fp_cale_pane_t1

0xcf3f,	// (0x000a7828) list_single_fp_cale_pane_t2_ParamLimits

0xcf3f,	// (0x000a7828) list_single_fp_cale_pane_t2

0x0001,

0x047b,	// (0x0009ad64) list_single_fp_cale_pane_t_ParamLimits

0x047b,	// (0x0009ad64) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fd8,	// (0x0009b8c1) main_dialer_pane

0x555e,	// (0x0009fe47) aid_cell_size_keypad

0x5568,	// (0x0009fe51) dialer_ne_pane

0x5572,	// (0x0009fe5b) grid_dialer_command_1_pane

0x557a,	// (0x0009fe63) grid_dialer_command_2_pane

0x5582,	// (0x0009fe6b) grid_dialer_keypad_pane

0x5596,	// (0x0009fe7f) bg_popup_call_pane_cp06_ParamLimits

0x5596,	// (0x0009fe7f) bg_popup_call_pane_cp06

0x55a2,	// (0x0009fe8b) dialer_ne_clear_pane_ParamLimits

0x55a2,	// (0x0009fe8b) dialer_ne_clear_pane

0xcf72,	// (0x000a785b) dialer_ne_pane_g1

0xcf7a,	// (0x000a7863) dialer_ne_pane_t1_ParamLimits

0xcf7a,	// (0x000a7863) dialer_ne_pane_t1

0x55ae,	// (0x0009fe97) dialer_ne_pane_t2_ParamLimits

0x55ae,	// (0x0009fe97) dialer_ne_pane_t2

0x55cb,	// (0x0009feb4) dialer_ne_pane_t3_ParamLimits

0x55cb,	// (0x0009feb4) dialer_ne_pane_t3

0x0002,

0xf6a6,	// (0x000a9f8f) dialer_ne_pane_t_ParamLimits

0xf6a6,	// (0x000a9f8f) dialer_ne_pane_t

0x55ef,	// (0x0009fed8) dialer_ne_pane_t3_copy1_ParamLimits

0x55ef,	// (0x0009fed8) dialer_ne_pane_t3_copy1

0x5613,	// (0x0009fefc) cell_dialer_keypad_pane_ParamLimits

0x5613,	// (0x0009fefc) cell_dialer_keypad_pane

0x562a,	// (0x0009ff13) cell_dialer_command_1_pane_ParamLimits

0x562a,	// (0x0009ff13) cell_dialer_command_1_pane

0x5640,	// (0x0009ff29) cell_dialer_command_2_pane_ParamLimits

0x5640,	// (0x0009ff29) cell_dialer_command_2_pane

0xcf8c,	// (0x000a7875) bg_button_pane_cp02_ParamLimits

0xcf8c,	// (0x000a7875) bg_button_pane_cp02

0x564f,	// (0x0009ff38) cell_dialer_keypad_pane_g1_ParamLimits

0x564f,	// (0x0009ff38) cell_dialer_keypad_pane_g1

0xcf8c,	// (0x000a7875) bg_button_pane_cp03_ParamLimits

0xcf8c,	// (0x000a7875) bg_button_pane_cp03

0x5664,	// (0x0009ff4d) cell_dialer_command_1_pane_g1_ParamLimits

0x5664,	// (0x0009ff4d) cell_dialer_command_1_pane_g1

0xcf98,	// (0x000a7881) bg_button_pane_cp04

0x5678,	// (0x0009ff61) cell_dialer_command_2_pane_g1

0xb39f,	// (0x000a5c88) bg_button_pane_cp06

0xcfa0,	// (0x000a7889) dialer_ne_clear_pane_g1

0xb222,	// (0x000a5b0b) navi_pane_g2

0xb2a9,	// (0x000a5b92) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a9cce) navi_pane_g

0xb338,	// (0x000a5c21) navi_pane_mv_g2

0xb35f,	// (0x000a5c48) navi_pane_mv_g5

0x360f,	// (0x0009def8) navi_pane_mv_t1

0xa703,	// (0x000a4fec) main_clock2_pane

0x56b8,	// (0x0009ffa1) main_clock2_list_pane_ParamLimits

0x56b8,	// (0x0009ffa1) main_clock2_list_pane

0x56e2,	// (0x0009ffcb) main_clock2_pane_t1_ParamLimits

0x56e2,	// (0x0009ffcb) main_clock2_pane_t1

0x5706,	// (0x0009ffef) main_clock2_pane_t2_ParamLimits

0x5706,	// (0x0009ffef) main_clock2_pane_t2

0x0004,

0xf6ad,	// (0x000a9f96) main_clock2_pane_t_ParamLimits

0xf6ad,	// (0x000a9f96) main_clock2_pane_t

0x5761,	// (0x000a004a) popup_clock_analogue_window_cp03_ParamLimits

0x5761,	// (0x000a004a) popup_clock_analogue_window_cp03

0x577f,	// (0x000a0068) popup_clock_digital_window_cp02_ParamLimits

0x577f,	// (0x000a0068) popup_clock_digital_window_cp02

0x57ee,	// (0x000a00d7) main_clock2_list_single_pane_ParamLimits

0x57ee,	// (0x000a00d7) main_clock2_list_single_pane

0xb39f,	// (0x000a5c88) list_highlight_pane_cp05

0xcfda,	// (0x000a78c3) main_clock2_list_single_pane_t1

0x204d,	// (0x0009c936) popup_toolbar_window_cp04_ParamLimits

0x4d92,	// (0x0009f67b) camera2_autofocus_pane_g2_ParamLimits

0x4d92,	// (0x0009f67b) camera2_autofocus_pane_g2

0x4d9e,	// (0x0009f687) camera2_autofocus_pane_g3_ParamLimits

0x4d9e,	// (0x0009f687) camera2_autofocus_pane_g3

0x4daa,	// (0x0009f693) camera2_autofocus_pane_g4_ParamLimits

0x4daa,	// (0x0009f693) camera2_autofocus_pane_g4

0x4db6,	// (0x0009f69f) camera2_autofocus_pane_g5_ParamLimits

0x4db6,	// (0x0009f69f) camera2_autofocus_pane_g5

0x0004,

0xf614,	// (0x000a9efd) camera2_autofocus_pane_g_ParamLimits

0xf614,	// (0x000a9efd) camera2_autofocus_pane_g

0x4f49,	// (0x0009f832) camera2_autofocus_pane_cp_g2

0x4f51,	// (0x0009f83a) camera2_autofocus_pane_cp_g3

0x4f59,	// (0x0009f842) camera2_autofocus_pane_cp_g4

0x4f61,	// (0x0009f84a) camera2_autofocus_pane_cp_g5

0x0004,

0xf668,	// (0x000a9f51) camera2_autofocus_pane_cp_g

0x558e,	// (0x0009fe77) popup_dialer_spcha_window

0x9aaf,	// (0x000a4398) bg_popup_sub_pane_cp07

0xcfe8,	// (0x000a78d1) list_spcha_pane

0xcff0,	// (0x000a78d9) list_single_spcha_pane_ParamLimits

0xcff0,	// (0x000a78d9) list_single_spcha_pane

0x9aaf,	// (0x000a4398) list_highlight_pane_cp06

0xd001,	// (0x000a78ea) list_single_spcha_pane_t1

0xc1e7,	// (0x000a6ad0) popup_call2_audio_out_window_g4_ParamLimits

0xc1e7,	// (0x000a6ad0) popup_call2_audio_out_window_g4

0x0fd8,	// (0x0009b8c1) main_imed2_pane

0x442f,	// (0x0009ed18) popup_imed_adjust2_window

0x4442,	// (0x0009ed2b) popup_imed_trans_window_ParamLimits

0x4442,	// (0x0009ed2b) popup_imed_trans_window

0xc9fc,	// (0x000a72e5) popup_blid_sat_info2_window_t1

0xca0a,	// (0x000a72f3) popup_blid_sat_info2_window_t2

0x000a,

0x0365,	// (0x0009ac4e) popup_blid_sat_info2_window_t

0x5898,	// (0x000a0181) aid_size_cell_colour_35

0x58b2,	// (0x000a019b) aid_size_cell_colour_112

0x58c9,	// (0x000a01b2) aid_size_cell_effect

0xa463,	// (0x000a4d4c) bg_tb_trans_pane_cp02

0xaffa,	// (0x000a58e3) heading_imed_pane

0x58e3,	// (0x000a01cc) listscroll_imed_pane

0xd00f,	// (0x000a78f8) heading_imed_pane_g1

0xd017,	// (0x000a7900) heading_imed_pane_t1

0xd025,	// (0x000a790e) grid_imed_colour_35_pane_ParamLimits

0xd025,	// (0x000a790e) grid_imed_colour_35_pane

0x58ef,	// (0x000a01d8) grid_imed_effect_pane

0xd03d,	// (0x000a7926) list_imed_aspect_pane

0x58ff,	// (0x000a01e8) scroll_pane_cp027_ParamLimits

0x58ff,	// (0x000a01e8) scroll_pane_cp027

0x590b,	// (0x000a01f4) cell_imed_effect_pane_ParamLimits

0x590b,	// (0x000a01f4) cell_imed_effect_pane

0xd045,	// (0x000a792e) cell_imed_colour_pane_ParamLimits

0xd045,	// (0x000a792e) cell_imed_colour_pane

0xd087,	// (0x000a7970) cell_imed_colour_pane_g1_ParamLimits

0xd087,	// (0x000a7970) cell_imed_colour_pane_g1

0xd098,	// (0x000a7981) hgihlgiht_grid_pane_cp016_ParamLimits

0xd098,	// (0x000a7981) hgihlgiht_grid_pane_cp016

0x5923,	// (0x000a020c) cell_imed_effect_pane_g1

0x592b,	// (0x000a0214) grid_highlight_pane_cp017

0xd0a9,	// (0x000a7992) list_imed_single_pane_ParamLimits

0xd0a9,	// (0x000a7992) list_imed_single_pane

0x9aaf,	// (0x000a4398) list_highlight_pane_cp07

0xd0bf,	// (0x000a79a8) list_imed_aspect_pane_comp1_t1

0xc7b6,	// (0x000a709f) bg_tb_trans_pane_cp05

0xd0e1,	// (0x000a79ca) popup_imed_adjust2_window_g1

0xd108,	// (0x000a79f1) popup_imed_adjust2_window_t1

0xd120,	// (0x000a7a09) slider_imed_adjust_pane

0xd134,	// (0x000a7a1d) slider_imed_adjust_pane_g1

0xd144,	// (0x000a7a2d) slider_imed_adjust_pane_g2

0xd154,	// (0x000a7a3d) slider_imed_adjust_pane_g3

0xd165,	// (0x000a7a4e) slider_imed_adjust_pane_g4

0x0003,

0x04a9,	// (0x0009ad92) slider_imed_adjust_pane_g

0x5934,	// (0x000a021d) aid_size_cell_clipart2

0x5940,	// (0x000a0229) grid_imed_clipart_pane

0xd176,	// (0x000a7a5f) scroll_pane_cp031

0x594a,	// (0x000a0233) cell_imed_clipart_pane_ParamLimits

0x594a,	// (0x000a0233) cell_imed_clipart_pane

0x5971,	// (0x000a025a) cell_imed_clipart_pane_g1

0x9aaf,	// (0x000a4398) grid_highlight_pane_cp014

0x56c4,	// (0x0009ffad) main_clock2_pane_g1_ParamLimits

0x56c4,	// (0x0009ffad) main_clock2_pane_g1

0x5799,	// (0x000a0082) aid_call2_pane_cp10

0x57ab,	// (0x000a0094) aid_call_pane_cp10

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g1

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g2

0x57bd,	// (0x000a00a6) popup_clock_analogue_window_cp10_g3

0x57bd,	// (0x000a00a6) popup_clock_analogue_window_cp10_g4

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b8,	// (0x000a9fa1) popup_clock_analogue_window_cp10_g

0x57cf,	// (0x000a00b8) popup_clock_analogue_window_cp10_t1

0x5800,	// (0x000a00e9) clock_digital_number_pane_cp10_ParamLimits

0x5800,	// (0x000a00e9) clock_digital_number_pane_cp10

0x5818,	// (0x000a0101) clock_digital_number_pane_cp11_ParamLimits

0x5818,	// (0x000a0101) clock_digital_number_pane_cp11

0x5830,	// (0x000a0119) clock_digital_number_pane_cp12_ParamLimits

0x5830,	// (0x000a0119) clock_digital_number_pane_cp12

0x5848,	// (0x000a0131) clock_digital_number_pane_cp13_ParamLimits

0x5848,	// (0x000a0131) clock_digital_number_pane_cp13

0x5860,	// (0x000a0149) clock_digital_separator_pane_cp10_ParamLimits

0x5860,	// (0x000a0149) clock_digital_separator_pane_cp10

0x5878,	// (0x000a0161) popup_clock_digital_window_cp02_t1_ParamLimits

0x5878,	// (0x000a0161) popup_clock_digital_window_cp02_t1

0xa617,	// (0x000a4f00) clock_digital_number_pane_cp10_g1

0xa617,	// (0x000a4f00) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c3,	// (0x000a9fac) clock_digital_number_pane_cp10_g

0xa617,	// (0x000a4f00) clock_digital_separator_pane_cp10_g1

0xa617,	// (0x000a4f00) clock_digital_separator_pane_g2_cp10

0xb367,	// (0x000a5c50) navi_pane_vded_g4

0xb370,	// (0x000a5c59) navi_pane_vded_g5

0xb379,	// (0x000a5c62) navi_pane_vded_t1

0x0fd8,	// (0x0009b8c1) main_vded_pane

0x597a,	// (0x000a0263) main_vded_pane_g1

0x5986,	// (0x000a026f) main_vded_pane_g2

0x5990,	// (0x000a0279) main_vded_pane_g3

0x0002,

0xf6c8,	// (0x000a9fb1) main_vded_pane_g

0x599a,	// (0x000a0283) main_vded_pane_t1

0x59a8,	// (0x000a0291) main_vded_pane_t2

0x0001,

0xf6cf,	// (0x000a9fb8) main_vded_pane_t

0x59b6,	// (0x000a029f) vded_slider_pane

0x59c0,	// (0x000a02a9) vded_video_pane

0xd17e,	// (0x000a7a67) vded_video_pane_g1

0x59ca,	// (0x000a02b3) vded_video_pane_g2

0xcbc0,	// (0x000a74a9) vded_video_pane_g3

0x0002,

0xf6d4,	// (0x000a9fbd) vded_video_pane_g

0xd188,	// (0x000a7a71) vded_slider_pane_g1

0xd191,	// (0x000a7a7a) vded_slider_pane_g2

0xd19a,	// (0x000a7a83) vded_slider_pane_g3

0xd1a3,	// (0x000a7a8c) vded_slider_pane_g4

0xd1ac,	// (0x000a7a95) vded_slider_pane_g5

0x0004,

0x04ca,	// (0x0009adb3) vded_slider_pane_g

0x548f,	// (0x0009fd78) mup3_rocker_pane_ParamLimits

0x548f,	// (0x0009fd78) mup3_rocker_pane

0x59d3,	// (0x000a02bc) mup3_control_keys_pane_g1

0x59db,	// (0x000a02c4) mup3_control_keys_pane_g2

0x59e3,	// (0x000a02cc) mup3_control_keys_pane_g3

0x59eb,	// (0x000a02d4) mup3_control_keys_pane_g4

0x0003,

0xf6db,	// (0x000a9fc4) mup3_control_keys_pane_g

0x0f8c,	// (0x0009b875) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f8c,	// (0x0009b875) popup_toolbar2_fixed_window_cp01

0x54a9,	// (0x0009fd92) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54a9,	// (0x0009fd92) popup_toolbar2_fixed_window_cp02

0xbb26,	// (0x000a640f) popup_call2_audio_second_window_t4_ParamLimits

0xbb26,	// (0x000a640f) popup_call2_audio_second_window_t4

0xc054,	// (0x000a693d) popup_call2_audio_first_window_t6_ParamLimits

0xc054,	// (0x000a693d) popup_call2_audio_first_window_t6

0xc2f6,	// (0x000a6bdf) popup_call2_audio_out_window_t6_ParamLimits

0xc2f6,	// (0x000a6bdf) popup_call2_audio_out_window_t6

0x0fd8,	// (0x0009b8c1) main_vitu_pane

0x59fb,	// (0x000a02e4) aid_size_cell_itu_ParamLimits

0x59fb,	// (0x000a02e4) aid_size_cell_itu

0xe86e,	// (0x000a9157) bg_popup_window_pane_cp08_ParamLimits

0xe86e,	// (0x000a9157) bg_popup_window_pane_cp08

0x5a09,	// (0x000a02f2) field_vitu_entry_pane_ParamLimits

0x5a09,	// (0x000a02f2) field_vitu_entry_pane

0x5a18,	// (0x000a0301) grid_vitu_function_pane_ParamLimits

0x5a18,	// (0x000a0301) grid_vitu_function_pane

0x5a28,	// (0x000a0311) grid_vitu_itu_pane_ParamLimits

0x5a28,	// (0x000a0311) grid_vitu_itu_pane

0x5a38,	// (0x000a0321) cell_vitu_itu_pane_ParamLimits

0x5a38,	// (0x000a0321) cell_vitu_itu_pane

0x5a4d,	// (0x000a0336) cell_vitu_function_pane_ParamLimits

0x5a4d,	// (0x000a0336) cell_vitu_function_pane

0xa463,	// (0x000a4d4c) bg_popup_sub_pane_cp08_ParamLimits

0xa463,	// (0x000a4d4c) bg_popup_sub_pane_cp08

0x5a61,	// (0x000a034a) field_vitu_entry_pane_t1_ParamLimits

0x5a61,	// (0x000a034a) field_vitu_entry_pane_t1

0xd1cd,	// (0x000a7ab6) field_vitu_entry_pane_t2_ParamLimits

0xd1cd,	// (0x000a7ab6) field_vitu_entry_pane_t2

0x0001,

0xf6e4,	// (0x000a9fcd) field_vitu_entry_pane_t_ParamLimits

0xf6e4,	// (0x000a9fcd) field_vitu_entry_pane_t

0xd1ea,	// (0x000a7ad3) bg_button_pane_cp05_ParamLimits

0xd1ea,	// (0x000a7ad3) bg_button_pane_cp05

0x5a7e,	// (0x000a0367) cell_vitu_itu_pane_g1

0x5a96,	// (0x000a037f) cell_vitu_itu_pane_t1_ParamLimits

0x5a96,	// (0x000a037f) cell_vitu_itu_pane_t1

0x5aa8,	// (0x000a0391) cell_vitu_itu_pane_t2_ParamLimits

0x5aa8,	// (0x000a0391) cell_vitu_itu_pane_t2

0x0002,

0xf6e9,	// (0x000a9fd2) cell_vitu_itu_pane_t_ParamLimits

0xf6e9,	// (0x000a9fd2) cell_vitu_itu_pane_t

0xd1f8,	// (0x000a7ae1) bg_button_pane_cp07

0x5aeb,	// (0x000a03d4) cell_vitu_function_pane_g1

0x1257,	// (0x0009bb40) main_calc_pane_g1

0x0d49,	// (0x0009b632) aid_visual_content_pane

0x0fd8,	// (0x0009b8c1) main_vradio_pane

0x5af4,	// (0x000a03dd) main_vradio_pane_g1_ParamLimits

0x5af4,	// (0x000a03dd) main_vradio_pane_g1

0xd202,	// (0x000a7aeb) main_vradio_pane_g2_ParamLimits

0xd202,	// (0x000a7aeb) main_vradio_pane_g2

0x0001,

0xf6f0,	// (0x000a9fd9) main_vradio_pane_g_ParamLimits

0xf6f0,	// (0x000a9fd9) main_vradio_pane_g

0x5b04,	// (0x000a03ed) main_vradio_pane_t1_ParamLimits

0x5b04,	// (0x000a03ed) main_vradio_pane_t1

0x5b16,	// (0x000a03ff) main_vradio_pane_t2_ParamLimits

0x5b16,	// (0x000a03ff) main_vradio_pane_t2

0xd20f,	// (0x000a7af8) main_vradio_pane_t3_ParamLimits

0xd20f,	// (0x000a7af8) main_vradio_pane_t3

0x0002,

0xf6f5,	// (0x000a9fde) main_vradio_pane_t_ParamLimits

0xf6f5,	// (0x000a9fde) main_vradio_pane_t

0x5b28,	// (0x000a0411) vradio_rocker_control_pane_ParamLimits

0x5b28,	// (0x000a0411) vradio_rocker_control_pane

0x5b34,	// (0x000a041d) vradio_station_info_pane_ParamLimits

0x5b34,	// (0x000a041d) vradio_station_info_pane

0xd223,	// (0x000a7b0c) vradio_frequency_info_pane_ParamLimits

0xd223,	// (0x000a7b0c) vradio_frequency_info_pane

0xcbc0,	// (0x000a74a9) vradio_station_info_pane_g1

0xd232,	// (0x000a7b1b) vradio_station_info_pane_t1_ParamLimits

0xd232,	// (0x000a7b1b) vradio_station_info_pane_t1

0xd254,	// (0x000a7b3d) vradio_station_info_pane_t2_ParamLimits

0xd254,	// (0x000a7b3d) vradio_station_info_pane_t2

0x0001,

0x04fb,	// (0x0009ade4) vradio_station_info_pane_t_ParamLimits

0x04fb,	// (0x0009ade4) vradio_station_info_pane_t

0xd266,	// (0x000a7b4f) vradio_tuning_pane

0xd26e,	// (0x000a7b57) vradio_rocker_control_pane_g1

0xd276,	// (0x000a7b5f) vradio_rocker_control_pane_g2

0xd27e,	// (0x000a7b67) vradio_rocker_control_pane_g3

0xd286,	// (0x000a7b6f) vradio_rocker_control_pane_g4

0xd28e,	// (0x000a7b77) vradio_rocker_control_pane_g5

0x0004,

0x0500,	// (0x0009ade9) vradio_rocker_control_pane_g

0x5b43,	// (0x000a042c) vradio_frequency_info_pane_g1

0xd296,	// (0x000a7b7f) vradio_frequency_info_pane_t1_ParamLimits

0xd296,	// (0x000a7b7f) vradio_frequency_info_pane_t1

0x5b4d,	// (0x000a0436) vradio_tuning_pane_g1

0x5b56,	// (0x000a043f) vradio_tuning_pane_t1

0x0d92,	// (0x0009b67b) area_side_right_pane_ParamLimits

0x0d92,	// (0x0009b67b) area_side_right_pane

0xc771,	// (0x000a705a) status_small_pane_g1

0xc779,	// (0x000a7062) status_small_pane_g2

0xc782,	// (0x000a706b) status_small_pane_g3

0xc78b,	// (0x000a7074) status_small_pane_g4

0x0003,

0x02bb,	// (0x0009aba4) status_small_pane_g

0xc794,	// (0x000a707d) status_small_pane_t1

0x0fd8,	// (0x0009b8c1) main_video3_pane

0xd2aa,	// (0x000a7b93) cams_zoom_vslider_pane

0xd2b2,	// (0x000a7b9b) image3_wide_pane_ParamLimits

0xd2b2,	// (0x000a7b9b) image3_wide_pane

0xd2cc,	// (0x000a7bb5) image3_wide_small_pane

0xd2d8,	// (0x000a7bc1) main_video3_pane_g1_ParamLimits

0xd2d8,	// (0x000a7bc1) main_video3_pane_g1

0xd2f4,	// (0x000a7bdd) main_video3_pane_g2_ParamLimits

0xd2f4,	// (0x000a7bdd) main_video3_pane_g2

0x0001,

0x050b,	// (0x0009adf4) main_video3_pane_g_ParamLimits

0x050b,	// (0x0009adf4) main_video3_pane_g

0xd310,	// (0x000a7bf9) main_video3_pane_t1_ParamLimits

0xd310,	// (0x000a7bf9) main_video3_pane_t1

0xd33b,	// (0x000a7c24) main_video3_pane_t2_ParamLimits

0xd33b,	// (0x000a7c24) main_video3_pane_t2

0xd366,	// (0x000a7c4f) main_video3_pane_t3_ParamLimits

0xd366,	// (0x000a7c4f) main_video3_pane_t3

0x0002,

0x0510,	// (0x0009adf9) main_video3_pane_t_ParamLimits

0x0510,	// (0x0009adf9) main_video3_pane_t

0xd393,	// (0x000a7c7c) cams_zoom_vslider_pane_g1

0xd39c,	// (0x000a7c85) cams_zoom_vslider_pane_g2

0x0001,

0x0517,	// (0x0009ae00) cams_zoom_vslider_pane_g

0xd3a4,	// (0x000a7c8d) small_slider_vertical_pane

0xcbc0,	// (0x000a74a9) small_slider_vertical_pane_g1

0xcbc0,	// (0x000a74a9) small_slider_vertical_pane_g2

0xd3ac,	// (0x000a7c95) small_slider_vertical_pane_g3

0x0002,

0x051c,	// (0x0009ae05) small_slider_vertical_pane_g

0x0fd8,	// (0x0009b8c1) main_hwr_training_pane

0xd3b5,	// (0x000a7c9e) hwr_training_instruct_pane_ParamLimits

0xd3b5,	// (0x000a7c9e) hwr_training_instruct_pane

0x5b65,	// (0x000a044e) hwr_training_navi_pane_ParamLimits

0x5b65,	// (0x000a044e) hwr_training_navi_pane

0x5b7f,	// (0x000a0468) hwr_training_write_pane_ParamLimits

0x5b7f,	// (0x000a0468) hwr_training_write_pane

0x9aaf,	// (0x000a4398) bg_frame_shadow_pane

0xd3ec,	// (0x000a7cd5) hwr_training_write_pane_g1

0xd3f4,	// (0x000a7cdd) hwr_training_write_pane_g2

0xd3fc,	// (0x000a7ce5) hwr_training_write_pane_g3

0xd404,	// (0x000a7ced) hwr_training_write_pane_g4

0xd40c,	// (0x000a7cf5) hwr_training_write_pane_g5

0xd414,	// (0x000a7cfd) hwr_training_write_pane_g6

0xd41c,	// (0x000a7d05) hwr_training_write_pane_g7

0x0006,

0x0523,	// (0x0009ae0c) hwr_training_write_pane_g

0x5bb7,	// (0x000a04a0) hwr_training_navi_pane_g1_ParamLimits

0x5bb7,	// (0x000a04a0) hwr_training_navi_pane_g1

0x5bc9,	// (0x000a04b2) hwr_training_navi_pane_g2_ParamLimits

0x5bc9,	// (0x000a04b2) hwr_training_navi_pane_g2

0x5bdb,	// (0x000a04c4) hwr_training_navi_pane_g3_ParamLimits

0x5bdb,	// (0x000a04c4) hwr_training_navi_pane_g3

0x5beb,	// (0x000a04d4) hwr_training_navi_pane_g4_ParamLimits

0x5beb,	// (0x000a04d4) hwr_training_navi_pane_g4

0x0004,

0xf6fc,	// (0x000a9fe5) hwr_training_navi_pane_g_ParamLimits

0xf6fc,	// (0x000a9fe5) hwr_training_navi_pane_g

0x5c05,	// (0x000a04ee) hwr_training_navi_pane_t1

0x5c13,	// (0x000a04fc) list_single_hwr_training_instruct_pane_ParamLimits

0x5c13,	// (0x000a04fc) list_single_hwr_training_instruct_pane

0xd424,	// (0x000a7d0d) list_single_hwr_training_instruct_pane_t1

0xcb00,	// (0x000a73e9) bg_frame_shadow_pane_g1

0xd433,	// (0x000a7d1c) bg_frame_shadow_pane_g2

0xd43b,	// (0x000a7d24) bg_frame_shadow_pane_g3

0xd443,	// (0x000a7d2c) bg_frame_shadow_pane_g4

0xd44b,	// (0x000a7d34) bg_frame_shadow_pane_g5

0xd453,	// (0x000a7d3c) bg_frame_shadow_pane_g6

0xd45b,	// (0x000a7d44) bg_frame_shadow_pane_g7

0xa7ce,	// (0x000a50b7) bg_frame_shadow_pane_g8

0x0007,

0xf707,	// (0x000a9ff0) bg_frame_shadow_pane_g

0x0fd8,	// (0x0009b8c1) main_video_tele_dialer_pane

0x5c42,	// (0x000a052b) aid_size_cell_video_keypad_ParamLimits

0x5c42,	// (0x000a052b) aid_size_cell_video_keypad

0x5c52,	// (0x000a053b) grid_video_dialer_keypad_pane_ParamLimits

0x5c52,	// (0x000a053b) grid_video_dialer_keypad_pane

0x5c86,	// (0x000a056f) video_down_pane_cp_ParamLimits

0x5c86,	// (0x000a056f) video_down_pane_cp

0x5cb0,	// (0x000a0599) cell_video_dialer_keypad_pane_ParamLimits

0x5cb0,	// (0x000a0599) cell_video_dialer_keypad_pane

0xd463,	// (0x000a7d4c) bg_button_pane_cp08_ParamLimits

0xd463,	// (0x000a7d4c) bg_button_pane_cp08

0x5cc5,	// (0x000a05ae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cc5,	// (0x000a05ae) cell_video_dialer_keypad_pane_g1

0x5483,	// (0x0009fd6c) mup3_rocker2_pane_ParamLimits

0x5483,	// (0x0009fd6c) mup3_rocker2_pane

0xcbc0,	// (0x000a74a9) mup3_rocker2_pane_g1

0x43a3,	// (0x0009ec8c) main_dialer2_pane

0x0fd8,	// (0x0009b8c1) main_mp4_pane

0x5d08,	// (0x000a05f1) main_mp4_pane_g1_ParamLimits

0x5d08,	// (0x000a05f1) main_mp4_pane_g1

0x5d16,	// (0x000a05ff) main_mp4_pane_g2_ParamLimits

0x5d16,	// (0x000a05ff) main_mp4_pane_g2

0x5d24,	// (0x000a060d) main_mp4_pane_g3_ParamLimits

0x5d24,	// (0x000a060d) main_mp4_pane_g3

0x5d69,	// (0x000a0652) main_mp4_pane_g4_ParamLimits

0x5d69,	// (0x000a0652) main_mp4_pane_g4

0x5d91,	// (0x000a067a) main_mp4_pane_g5_ParamLimits

0x5d91,	// (0x000a067a) main_mp4_pane_g5

0x0005,

0xf727,	// (0x000aa010) main_mp4_pane_g_ParamLimits

0xf727,	// (0x000aa010) main_mp4_pane_g

0x5de1,	// (0x000a06ca) main_mp4_pane_t1_ParamLimits

0x5de1,	// (0x000a06ca) main_mp4_pane_t1

0x5e3d,	// (0x000a0726) main_mp4_pane_t2_ParamLimits

0x5e3d,	// (0x000a0726) main_mp4_pane_t2

0xd46f,	// (0x000a7d58) main_mp4_pane_t3_ParamLimits

0xd46f,	// (0x000a7d58) main_mp4_pane_t3

0x5e8f,	// (0x000a0778) main_mp4_pane_t4_ParamLimits

0x5e8f,	// (0x000a0778) main_mp4_pane_t4

0x0003,

0xf734,	// (0x000aa01d) main_mp4_pane_t_ParamLimits

0xf734,	// (0x000aa01d) main_mp4_pane_t

0x5ed3,	// (0x000a07bc) mp4_progress_pane_ParamLimits

0x5ed3,	// (0x000a07bc) mp4_progress_pane

0x5f1d,	// (0x000a0806) mp4_rocker_pane_ParamLimits

0x5f1d,	// (0x000a0806) mp4_rocker_pane

0xd497,	// (0x000a7d80) mp4_progress_pane_t1

0xd4b0,	// (0x000a7d99) mp4_progress_pane_t2

0x0001,

0x0573,	// (0x0009ae5c) mp4_progress_pane_t

0xd4c9,	// (0x000a7db2) mup_progress_pane_cp04

0xd970,	// (0x000a8259) mp4_rocker_pane_g1

0x5f3d,	// (0x000a0826) aid_cell_size_keypad2_ParamLimits

0x5f3d,	// (0x000a0826) aid_cell_size_keypad2

0x5f4d,	// (0x000a0836) dialer2_ne_pane_ParamLimits

0x5f4d,	// (0x000a0836) dialer2_ne_pane

0x5f5b,	// (0x000a0844) grid_dialer2_keypad_pane_ParamLimits

0x5f5b,	// (0x000a0844) grid_dialer2_keypad_pane

0xdbe0,	// (0x000a84c9) bg_popup_call_pane_cp07_ParamLimits

0xdbe0,	// (0x000a84c9) bg_popup_call_pane_cp07

0x5f6b,	// (0x000a0854) dialer2_ne_pane_t1_ParamLimits

0x5f6b,	// (0x000a0854) dialer2_ne_pane_t1

0x5f90,	// (0x000a0879) cell_dialer2_keypad_pane_ParamLimits

0x5f90,	// (0x000a0879) cell_dialer2_keypad_pane

0xd4e7,	// (0x000a7dd0) bg_button_pane_pane_cp04_ParamLimits

0xd4e7,	// (0x000a7dd0) bg_button_pane_pane_cp04

0x5fa5,	// (0x000a088e) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fa5,	// (0x000a088e) cell_dialer2_keypad_pane_g1

0x1f0f,	// (0x0009c7f8) aid_placing_vt_set_content_ParamLimits

0x1f0f,	// (0x0009c7f8) aid_placing_vt_set_content

0x1f3b,	// (0x0009c824) aid_placing_vt_set_title_ParamLimits

0x1f3b,	// (0x0009c824) aid_placing_vt_set_title

0x0fd8,	// (0x0009b8c1) main_image3_pane

0x603f,	// (0x000a0928) area_side_right_pane_cp01_ParamLimits

0x603f,	// (0x000a0928) area_side_right_pane_cp01

0x606c,	// (0x000a0955) main_image3_pane_g1_ParamLimits

0x606c,	// (0x000a0955) main_image3_pane_g1

0x607a,	// (0x000a0963) main_image3_pane_g2_ParamLimits

0x607a,	// (0x000a0963) main_image3_pane_g2

0x6093,	// (0x000a097c) main_image3_pane_g3_ParamLimits

0x6093,	// (0x000a097c) main_image3_pane_g3

0x60ac,	// (0x000a0995) main_image3_pane_g4_ParamLimits

0x60ac,	// (0x000a0995) main_image3_pane_g4

0x0003,

0xf747,	// (0x000aa030) main_image3_pane_g_ParamLimits

0xf747,	// (0x000aa030) main_image3_pane_g

0x60c5,	// (0x000a09ae) main_image3_pane_t1_ParamLimits

0x60c5,	// (0x000a09ae) main_image3_pane_t1

0x60ea,	// (0x000a09d3) main_image3_pane_t2_ParamLimits

0x60ea,	// (0x000a09d3) main_image3_pane_t2

0x6109,	// (0x000a09f2) main_image3_pane_t3_ParamLimits

0x6109,	// (0x000a09f2) main_image3_pane_t3

0x0003,

0xf750,	// (0x000aa039) main_image3_pane_t_ParamLimits

0xf750,	// (0x000aa039) main_image3_pane_t

0xe86e,	// (0x000a9157) grid_sctrl_middle_pane_cp01_ParamLimits

0xe86e,	// (0x000a9157) grid_sctrl_middle_pane_cp01

0x616a,	// (0x000a0a53) cell_sctrl_middle_pane_cp01_ParamLimits

0x616a,	// (0x000a0a53) cell_sctrl_middle_pane_cp01

0x617b,	// (0x000a0a64) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x617b,	// (0x000a0a64) cell_sctrl_middle_pane_cp01_g1

0x0fd8,	// (0x0009b8c1) main_call4_pane

0x6188,	// (0x000a0a71) aid_size_button_call4_ParamLimits

0x6188,	// (0x000a0a71) aid_size_button_call4

0x61b8,	// (0x000a0aa1) call4_windows_pane_ParamLimits

0x61b8,	// (0x000a0aa1) call4_windows_pane

0x61d2,	// (0x000a0abb) grid_call4_button_pane_ParamLimits

0x61d2,	// (0x000a0abb) grid_call4_button_pane

0xd4f3,	// (0x000a7ddc) call4_windows_conf_pane

0xd508,	// (0x000a7df1) popup_call4_audio_first_window_ParamLimits

0xd508,	// (0x000a7df1) popup_call4_audio_first_window

0xd554,	// (0x000a7e3d) popup_call4_audio_second_window_ParamLimits

0xd554,	// (0x000a7e3d) popup_call4_audio_second_window

0xd568,	// (0x000a7e51) popup_call4_audio_wait_window_ParamLimits

0xd568,	// (0x000a7e51) popup_call4_audio_wait_window

0x61f6,	// (0x000a0adf) cell_call4_button_pane_ParamLimits

0x61f6,	// (0x000a0adf) cell_call4_button_pane

0x621b,	// (0x000a0b04) bg_button_pane_cp09_ParamLimits

0x621b,	// (0x000a0b04) bg_button_pane_cp09

0x6227,	// (0x000a0b10) cell_call4_button_pane_g1_ParamLimits

0x6227,	// (0x000a0b10) cell_call4_button_pane_g1

0x6234,	// (0x000a0b1d) cell_call4_button_pane_t1_ParamLimits

0x6234,	// (0x000a0b1d) cell_call4_button_pane_t1

0xd5b0,	// (0x000a7e99) popup_call4_audio_conf_window_ParamLimits

0xd5b0,	// (0x000a7e99) popup_call4_audio_conf_window

0x54b6,	// (0x0009fd9f) mup3_progress_pane_t1_ParamLimits

0x54d5,	// (0x0009fdbe) mup3_progress_pane_t2_ParamLimits

0xce9b,	// (0x000a7784) mup3_progress_pane_t3_ParamLimits

0xf691,	// (0x000a9f7a) mup3_progress_pane_t_ParamLimits

0xceb8,	// (0x000a77a1) mup_progress_pane_cp03_ParamLimits

0x59f3,	// (0x000a02dc) mup3_control_keys_pane_g4_copy1

0x5f01,	// (0x000a07ea) mp4_rocker2_pane_ParamLimits

0x5f01,	// (0x000a07ea) mp4_rocker2_pane

0xd5c4,	// (0x000a7ead) mp4_rocker2_pane_g1

0xd5cc,	// (0x000a7eb5) mp4_rocker2_pane_g2

0x6246,	// (0x000a0b2f) mp4_rocker2_pane_g3

0x624e,	// (0x000a0b37) mp4_rocker2_pane_g4

0x6256,	// (0x000a0b3f) mp4_rocker2_pane_g5

0x0004,

0xf759,	// (0x000aa042) mp4_rocker2_pane_g

0x0fd8,	// (0x0009b8c1) main_camera4_pane

0x0fd8,	// (0x0009b8c1) main_video4_pane

0x5c62,	// (0x000a054b) main_video_tele_dialer_pane_t1_ParamLimits

0x5c62,	// (0x000a054b) main_video_tele_dialer_pane_t1

0x5c74,	// (0x000a055d) main_video_tele_dialer_pane_t2_ParamLimits

0x5c74,	// (0x000a055d) main_video_tele_dialer_pane_t2

0x0001,

0xf718,	// (0x000aa001) main_video_tele_dialer_pane_t_ParamLimits

0xf718,	// (0x000aa001) main_video_tele_dialer_pane_t

0x6276,	// (0x000a0b5f) cam4_autofocus_pane_ParamLimits

0x6276,	// (0x000a0b5f) cam4_autofocus_pane

0x6290,	// (0x000a0b79) cam4_image_uncrop_pane_ParamLimits

0x6290,	// (0x000a0b79) cam4_image_uncrop_pane

0x62a7,	// (0x000a0b90) cam4_indicators_pane_ParamLimits

0x62a7,	// (0x000a0b90) cam4_indicators_pane

0x62c3,	// (0x000a0bac) main_camera4_pane_g1_ParamLimits

0x62c3,	// (0x000a0bac) main_camera4_pane_g1

0x62cf,	// (0x000a0bb8) main_camera4_pane_g2_ParamLimits

0x62cf,	// (0x000a0bb8) main_camera4_pane_g2

0x62cf,	// (0x000a0bb8) main_camera4_pane_g3_ParamLimits

0x62cf,	// (0x000a0bb8) main_camera4_pane_g3

0x62db,	// (0x000a0bc4) main_camera4_pane_g4_ParamLimits

0x62db,	// (0x000a0bc4) main_camera4_pane_g4

0x62e7,	// (0x000a0bd0) main_camera4_pane_g5_ParamLimits

0x62e7,	// (0x000a0bd0) main_camera4_pane_g5

0x0005,

0xf764,	// (0x000aa04d) main_camera4_pane_g_ParamLimits

0xf764,	// (0x000aa04d) main_camera4_pane_g

0x6301,	// (0x000a0bea) main_camera4_pane_t1_ParamLimits

0x6301,	// (0x000a0bea) main_camera4_pane_t1

0x6349,	// (0x000a0c32) bg_tb_trans_pane_cp06

0x635f,	// (0x000a0c48) cam4_indicators_pane_g1

0x6370,	// (0x000a0c59) cam4_indicators_pane_g2

0x0002,

0xf77f,	// (0x000aa068) cam4_indicators_pane_g

0x638e,	// (0x000a0c77) cam4_indicators_pane_t1

0x63b8,	// (0x000a0ca1) main_video4_pane_g1_ParamLimits

0x63b8,	// (0x000a0ca1) main_video4_pane_g1

0x63c4,	// (0x000a0cad) main_video4_pane_g2_ParamLimits

0x63c4,	// (0x000a0cad) main_video4_pane_g2

0x63d0,	// (0x000a0cb9) main_video4_pane_g3_ParamLimits

0x63d0,	// (0x000a0cb9) main_video4_pane_g3

0x63dc,	// (0x000a0cc5) main_video4_pane_g4_ParamLimits

0x63dc,	// (0x000a0cc5) main_video4_pane_g4

0x0004,

0xf786,	// (0x000aa06f) main_video4_pane_g_ParamLimits

0xf786,	// (0x000aa06f) main_video4_pane_g

0x63fc,	// (0x000a0ce5) vid4_indicators_pane_ParamLimits

0x63fc,	// (0x000a0ce5) vid4_indicators_pane

0x641b,	// (0x000a0d04) video4_image_uncrop_cif_pane_ParamLimits

0x641b,	// (0x000a0d04) video4_image_uncrop_cif_pane

0x642a,	// (0x000a0d13) video4_image_uncrop_nhd_pane_ParamLimits

0x642a,	// (0x000a0d13) video4_image_uncrop_nhd_pane

0x6290,	// (0x000a0b79) video4_image_uncrop_vga_pane_ParamLimits

0x6290,	// (0x000a0b79) video4_image_uncrop_vga_pane

0x4395,	// (0x0009ec7e) bg_tb_trans_pane_cp07

0x643f,	// (0x000a0d28) vid4_indicators_pane_g1

0x6453,	// (0x000a0d3c) vid4_indicators_pane_g2

0x6467,	// (0x000a0d50) vid4_indicators_pane_g3

0x0004,

0xf791,	// (0x000aa07a) vid4_indicators_pane_g

0x6494,	// (0x000a0d7d) vid4_indicators_pane_t1

0x64ab,	// (0x000a0d94) cam4_autofocus_pane_g1

0x64b3,	// (0x000a0d9c) cam4_autofocus_pane_g2

0x64bb,	// (0x000a0da4) cam4_autofocus_pane_g3

0x0002,

0xf79c,	// (0x000aa085) cam4_autofocus_pane_g

0x64c3,	// (0x000a0dac) cam4_autofocus_pane_g3_copy1

0x5c94,	// (0x000a057d) video_down_pane_cp_t1

0x5ca2,	// (0x000a058b) video_down_pane_cp_t2

0x0001,

0xf71d,	// (0x000aa006) video_down_pane_cp_t

0x0fbe,	// (0x0009b8a7) popup_vitu2_window_ParamLimits

0x0fbe,	// (0x0009b8a7) popup_vitu2_window

0x64cb,	// (0x000a0db4) aid_size_cell2_itu2_ParamLimits

0x64cb,	// (0x000a0db4) aid_size_cell2_itu2

0x64ed,	// (0x000a0dd6) aid_size_cell_itu2_ParamLimits

0x64ed,	// (0x000a0dd6) aid_size_cell_itu2

0x6531,	// (0x000a0e1a) bg_popup_window_pane_cp09_ParamLimits

0x6531,	// (0x000a0e1a) bg_popup_window_pane_cp09

0x653f,	// (0x000a0e28) field_vitu2_entry_pane_ParamLimits

0x653f,	// (0x000a0e28) field_vitu2_entry_pane

0x655f,	// (0x000a0e48) grid_vitu2_function_pane_ParamLimits

0x655f,	// (0x000a0e48) grid_vitu2_function_pane

0x65a3,	// (0x000a0e8c) grid_vitu2_itu_pane_ParamLimits

0x65a3,	// (0x000a0e8c) grid_vitu2_itu_pane

0x6619,	// (0x000a0f02) cell_vitu2_itu_pane_ParamLimits

0x6619,	// (0x000a0f02) cell_vitu2_itu_pane

0x662e,	// (0x000a0f17) cell_vitu2_function_pane_ParamLimits

0x662e,	// (0x000a0f17) cell_vitu2_function_pane

0xd5d4,	// (0x000a7ebd) bg_popup_call_pane_cp08_ParamLimits

0xd5d4,	// (0x000a7ebd) bg_popup_call_pane_cp08

0xd5eb,	// (0x000a7ed4) field_vitu2_entry_pane_g1

0xd5f7,	// (0x000a7ee0) field_vitu2_entry_pane_g2

0x0002,

0xf7a3,	// (0x000aa08c) field_vitu2_entry_pane_g

0x9fde,	// (0x000a48c7) field_vitu2_entry_pane_t1_ParamLimits

0x9fde,	// (0x000a48c7) field_vitu2_entry_pane_t1

0xa00a,	// (0x000a48f3) field_vitu2_entry_pane_t2_ParamLimits

0xa00a,	// (0x000a48f3) field_vitu2_entry_pane_t2

0x0001,

0xf7aa,	// (0x000aa093) field_vitu2_entry_pane_t_ParamLimits

0xf7aa,	// (0x000aa093) field_vitu2_entry_pane_t

0x666f,	// (0x000a0f58) bg_button_pane_cp010_ParamLimits

0x666f,	// (0x000a0f58) bg_button_pane_cp010

0x667d,	// (0x000a0f66) cell_vitu2_itu_pane_g1

0x66a6,	// (0x000a0f8f) cell_vitu2_itu_pane_t1_ParamLimits

0x66a6,	// (0x000a0f8f) cell_vitu2_itu_pane_t1

0x0c3a,	// (0x0009b523) cell_vitu2_itu_pane_t2_ParamLimits

0x0c3a,	// (0x0009b523) cell_vitu2_itu_pane_t2

0x0002,

0xf7b4,	// (0x000aa09d) cell_vitu2_itu_pane_t_ParamLimits

0xf7b4,	// (0x000aa09d) cell_vitu2_itu_pane_t

0x4395,	// (0x0009ec7e) bg_button_pane_cp011

0x66f2,	// (0x000a0fdb) cell_vitu2_function_pane_g1

0x0fd8,	// (0x0009b8c1) main_myfav_hc_pane

0x614b,	// (0x000a0a34) popup_image3_note_pane_ParamLimits

0x614b,	// (0x000a0a34) popup_image3_note_pane

0x6159,	// (0x000a0a42) popup_image3_tool_bar_pane_ParamLimits

0x6159,	// (0x000a0a42) popup_image3_tool_bar_pane

0x0ca8,	// (0x0009b591) cell_vitu2_itu_pane_t3_ParamLimits

0x0ca8,	// (0x0009b591) cell_vitu2_itu_pane_t3

0x9aaf,	// (0x000a4398) bg_popup_trans_pane

0xd619,	// (0x000a7f02) grid_image3_tool_bar_pane

0xd623,	// (0x000a7f0c) bg_popup_trans_pane_g1

0xab23,	// (0x000a540c) bg_popup_trans_pane_g2

0xd62b,	// (0x000a7f14) bg_popup_trans_pane_g3

0xd633,	// (0x000a7f1c) bg_popup_trans_pane_g4

0xd63b,	// (0x000a7f24) bg_popup_trans_pane_g5

0xd643,	// (0x000a7f2c) bg_popup_trans_pane_g6

0xd64b,	// (0x000a7f34) bg_popup_trans_pane_g7

0xd653,	// (0x000a7f3c) bg_popup_trans_pane_g8

0xab03,	// (0x000a53ec) bg_popup_trans_pane_g9

0x0008,

0xf7bb,	// (0x000aa0a4) bg_popup_trans_pane_g

0xd65b,	// (0x000a7f44) cell_image3_tool_bar_pane_ParamLimits

0xd65b,	// (0x000a7f44) cell_image3_tool_bar_pane

0xcbc0,	// (0x000a74a9) cell_image3_tool_bar_pane_g1

0x9aaf,	// (0x000a4398) bg_popup_trans_pane_cp1

0xd66f,	// (0x000a7f58) popup_image3_note_pane_t1

0xd67d,	// (0x000a7f66) popup_image3_note_pane_t2

0xd68b,	// (0x000a7f74) popup_image3_note_pane_t3

0x0002,

0xf7ce,	// (0x000aa0b7) popup_image3_note_pane_t

0xd699,	// (0x000a7f82) popup_image3_note_pane_t3_copy1

0x6706,	// (0x000a0fef) bg_myfav_hc_instruction_pane_ParamLimits

0x6706,	// (0x000a0fef) bg_myfav_hc_instruction_pane

0x671e,	// (0x000a1007) cell_myfav_contact_pane_ParamLimits

0x671e,	// (0x000a1007) cell_myfav_contact_pane

0x6738,	// (0x000a1021) cell_myfav_contact_pane_cp1_ParamLimits

0x6738,	// (0x000a1021) cell_myfav_contact_pane_cp1

0x6750,	// (0x000a1039) cell_myfav_contact_pane_cp2_ParamLimits

0x6750,	// (0x000a1039) cell_myfav_contact_pane_cp2

0x6768,	// (0x000a1051) cell_myfav_contact_pane_cp3_ParamLimits

0x6768,	// (0x000a1051) cell_myfav_contact_pane_cp3

0x677f,	// (0x000a1068) cell_myfav_contact_pane_cp4_ParamLimits

0x677f,	// (0x000a1068) cell_myfav_contact_pane_cp4

0x6795,	// (0x000a107e) cell_myfav_contact_pane_cp5_ParamLimits

0x6795,	// (0x000a107e) cell_myfav_contact_pane_cp5

0x67a9,	// (0x000a1092) cell_myfav_contact_pane_cp6_ParamLimits

0x67a9,	// (0x000a1092) cell_myfav_contact_pane_cp6

0x67bd,	// (0x000a10a6) cell_myfav_contact_pane_cp7_ParamLimits

0x67bd,	// (0x000a10a6) cell_myfav_contact_pane_cp7

0xd6a7,	// (0x000a7f90) listscroll_gen_pane_cp05

0x67d5,	// (0x000a10be) main_myfav_hc_pane_g1_ParamLimits

0x67d5,	// (0x000a10be) main_myfav_hc_pane_g1

0x67ed,	// (0x000a10d6) main_myfav_hc_pane_g2_ParamLimits

0x67ed,	// (0x000a10d6) main_myfav_hc_pane_g2

0x0002,

0xf7d5,	// (0x000aa0be) main_myfav_hc_pane_g_ParamLimits

0xf7d5,	// (0x000aa0be) main_myfav_hc_pane_g

0x681d,	// (0x000a1106) main_myfav_hc_pane_t1_ParamLimits

0x681d,	// (0x000a1106) main_myfav_hc_pane_t1

0xd6b0,	// (0x000a7f99) main_myfav_hc_pane_t2_ParamLimits

0xd6b0,	// (0x000a7f99) main_myfav_hc_pane_t2

0xd6c2,	// (0x000a7fab) main_myfav_hc_pane_t3_ParamLimits

0xd6c2,	// (0x000a7fab) main_myfav_hc_pane_t3

0x6834,	// (0x000a111d) main_myfav_hc_pane_t4_ParamLimits

0x6834,	// (0x000a111d) main_myfav_hc_pane_t4

0x0004,

0xf7dc,	// (0x000aa0c5) main_myfav_hc_pane_t_ParamLimits

0xf7dc,	// (0x000aa0c5) main_myfav_hc_pane_t

0xcbc0,	// (0x000a74a9) bg_myfav_hc_instruction_pane_g1

0xd6e6,	// (0x000a7fcf) cell_myfav_contact_pane_g1_ParamLimits

0xd6e6,	// (0x000a7fcf) cell_myfav_contact_pane_g1

0xd6e6,	// (0x000a7fcf) cell_myfav_contact_pane_g2_ParamLimits

0xd6e6,	// (0x000a7fcf) cell_myfav_contact_pane_g2

0xd6f2,	// (0x000a7fdb) cell_myfav_contact_pane_g3_ParamLimits

0xd6f2,	// (0x000a7fdb) cell_myfav_contact_pane_g3

0xce85,	// (0x000a776e) cell_myfav_contact_pane_g4_ParamLimits

0xce85,	// (0x000a776e) cell_myfav_contact_pane_g4

0xd6ff,	// (0x000a7fe8) cell_myfav_contact_pane_g5_ParamLimits

0xd6ff,	// (0x000a7fe8) cell_myfav_contact_pane_g5

0x0004,

0x0622,	// (0x0009af0b) cell_myfav_contact_pane_g_ParamLimits

0x0622,	// (0x0009af0b) cell_myfav_contact_pane_g

0x6805,	// (0x000a10ee) main_myfav_hc_pane_g3_ParamLimits

0x6805,	// (0x000a10ee) main_myfav_hc_pane_g3

0x0ec7,	// (0x0009b7b0) popup_adpt_find_window

0x685e,	// (0x000a1147) afind_page_pane_ParamLimits

0x685e,	// (0x000a1147) afind_page_pane

0x686b,	// (0x000a1154) aid_size_cell_afind_ParamLimits

0x686b,	// (0x000a1154) aid_size_cell_afind

0x6885,	// (0x000a116e) bg_popup_sub_pane_cp09_ParamLimits

0x6885,	// (0x000a116e) bg_popup_sub_pane_cp09

0x6892,	// (0x000a117b) find_pane_cp01_ParamLimits

0x6892,	// (0x000a117b) find_pane_cp01

0xd70b,	// (0x000a7ff4) grid_afind_control_pane_ParamLimits

0xd70b,	// (0x000a7ff4) grid_afind_control_pane

0x689f,	// (0x000a1188) grid_afind_pane_ParamLimits

0x689f,	// (0x000a1188) grid_afind_pane

0x68b9,	// (0x000a11a2) cell_afind_pane_ParamLimits

0x68b9,	// (0x000a11a2) cell_afind_pane

0xcbc0,	// (0x000a74a9) afind_page_pane_g1

0x6901,	// (0x000a11ea) afind_page_pane_g2

0x690a,	// (0x000a11f3) afind_page_pane_g3

0x0002,

0xf7e7,	// (0x000aa0d0) afind_page_pane_g

0x6913,	// (0x000a11fc) afind_page_pane_t1

0xd71f,	// (0x000a8008) cell_afind_grid_control_pane_ParamLimits

0xd71f,	// (0x000a8008) cell_afind_grid_control_pane

0xd4e7,	// (0x000a7dd0) bg_button_pane_cp69_ParamLimits

0xd4e7,	// (0x000a7dd0) bg_button_pane_cp69

0x6933,	// (0x000a121c) cell_afind_pane_g1_ParamLimits

0x6933,	// (0x000a121c) cell_afind_pane_g1

0x6940,	// (0x000a1229) cell_afind_pane_t1_ParamLimits

0x6940,	// (0x000a1229) cell_afind_pane_t1

0xa91c,	// (0x000a5205) bg_button_pane_cp72

0xd72e,	// (0x000a8017) cell_afind_grid_control_pane_g1

0x3f0f,	// (0x0009e7f8) aid_image_placing_area_ParamLimits

0x3f0f,	// (0x0009e7f8) aid_image_placing_area

0xd1b5,	// (0x000a7a9e) field_vitu_entry_pane_g1_ParamLimits

0xd1b5,	// (0x000a7a9e) field_vitu_entry_pane_g1

0xd1c1,	// (0x000a7aaa) field_vitu_entry_pane_g2_ParamLimits

0xd1c1,	// (0x000a7aaa) field_vitu_entry_pane_g2

0x0001,

0x04de,	// (0x0009adc7) field_vitu_entry_pane_g_ParamLimits

0x04de,	// (0x0009adc7) field_vitu_entry_pane_g

0x5a7e,	// (0x000a0367) cell_vitu_itu_pane_g1_ParamLimits

0x5ace,	// (0x000a03b7) cell_vitu_itu_pane_t3_ParamLimits

0x5ace,	// (0x000a03b7) cell_vitu_itu_pane_t3

0xd497,	// (0x000a7d80) mp4_progress_pane_t1_ParamLimits

0xd4b0,	// (0x000a7d99) mp4_progress_pane_t2_ParamLimits

0x0573,	// (0x0009ae5c) mp4_progress_pane_t_ParamLimits

0xd4c9,	// (0x000a7db2) mup_progress_pane_cp04_ParamLimits

0x6848,	// (0x000a1131) main_myfav_hc_pane_t5_ParamLimits

0x6848,	// (0x000a1131) main_myfav_hc_pane_t5

0x0c2a,	// (0x0009b513) aid_zoom_text_primary

0x0ec7,	// (0x0009b7b0) popup_adpt_find_window_ParamLimits

0x4395,	// (0x0009ec7e) main_cam_set_pane

0x62b5,	// (0x000a0b9e) cam4_zoom_pane_ParamLimits

0x62b5,	// (0x000a0b9e) cam4_zoom_pane

0x6952,	// (0x000a123b) main_cam_set_pane_g1_ParamLimits

0x6952,	// (0x000a123b) main_cam_set_pane_g1

0x6960,	// (0x000a1249) main_cam_set_pane_g2_ParamLimits

0x6960,	// (0x000a1249) main_cam_set_pane_g2

0x0001,

0xf7ee,	// (0x000aa0d7) main_cam_set_pane_g_ParamLimits

0xf7ee,	// (0x000aa0d7) main_cam_set_pane_g

0x696c,	// (0x000a1255) main_cam_set_pane_t1_ParamLimits

0x696c,	// (0x000a1255) main_cam_set_pane_t1

0x6988,	// (0x000a1271) main_cset_listscroll_pane_ParamLimits

0x6988,	// (0x000a1271) main_cset_listscroll_pane

0x69b3,	// (0x000a129c) main_cset_slider_pane_ParamLimits

0x69b3,	// (0x000a129c) main_cset_slider_pane

0xd73f,	// (0x000a8028) main_cset_list_pane_ParamLimits

0xd73f,	// (0x000a8028) main_cset_list_pane

0xd74f,	// (0x000a8038) scroll_pane_cp028

0x69d2,	// (0x000a12bb) aid_area_touch_slider

0x69ee,	// (0x000a12d7) cset_slider_pane

0x6a18,	// (0x000a1301) main_cset_slider_pane_g1

0x6a2d,	// (0x000a1316) main_cset_slider_pane_g2

0x0011,

0xf7f3,	// (0x000aa0dc) main_cset_slider_pane_g

0xd788,	// (0x000a8071) main_cset_slider_pane_t1

0x6af3,	// (0x000a13dc) main_cset_slider_pane_t2

0x6b0d,	// (0x000a13f6) main_cset_slider_pane_t3

0x6b27,	// (0x000a1410) main_cset_slider_pane_t4

0x6b45,	// (0x000a142e) main_cset_slider_pane_t5

0x6b63,	// (0x000a144c) main_cset_slider_pane_t6

0x6b7a,	// (0x000a1463) main_cset_slider_pane_t7

0x000e,

0xf818,	// (0x000aa101) main_cset_slider_pane_t

0x6c88,	// (0x000a1571) cset_list_set_pane_ParamLimits

0x6c88,	// (0x000a1571) cset_list_set_pane

0x6ca4,	// (0x000a158d) aid_position_infowindow_above

0x6cac,	// (0x000a1595) aid_position_infowindow_below

0x6cb4,	// (0x000a159d) cset_list_set_pane_g1_ParamLimits

0x6cb4,	// (0x000a159d) cset_list_set_pane_g1

0xa027,	// (0x000a4910) cset_list_set_pane_g3_ParamLimits

0xa027,	// (0x000a4910) cset_list_set_pane_g3

0x0001,

0xf837,	// (0x000aa120) cset_list_set_pane_g_ParamLimits

0xf837,	// (0x000aa120) cset_list_set_pane_g

0xa036,	// (0x000a491f) cset_list_set_pane_t1_ParamLimits

0xa036,	// (0x000a491f) cset_list_set_pane_t1

0xa463,	// (0x000a4d4c) list_highlight_pane_cp021_ParamLimits

0xa463,	// (0x000a4d4c) list_highlight_pane_cp021

0xb4d5,	// (0x000a5dbe) cset_slider_pane_g1

0xb4e7,	// (0x000a5dd0) cset_slider_pane_g2

0xb4de,	// (0x000a5dc7) cset_slider_pane_g3

0x0002,

0x0682,	// (0x0009af6b) cset_slider_pane_g

0x6cc0,	// (0x000a15a9) aid_area_touch_cam4_zoom

0x6cc8,	// (0x000a15b1) cam4_zoom_cont_pane

0x6cd0,	// (0x000a15b9) cam4_zoom_pane_g1

0x6cd8,	// (0x000a15c1) cam4_zoom_pane_g2

0x6ce0,	// (0x000a15c9) cam4_zoom_pane_g3

0x0002,

0xf83c,	// (0x000aa125) cam4_zoom_pane_g

0x6ce8,	// (0x000a15d1) cam4_zoom_cont_pane_g1

0x6cf1,	// (0x000a15da) cam4_zoom_cont_pane_g2

0x6cfa,	// (0x000a15e3) cam4_zoom_cont_pane_g3

0x0002,

0xf843,	// (0x000aa12c) cam4_zoom_cont_pane_g

0x61a2,	// (0x000a0a8b) call4_image_pane_ParamLimits

0x61a2,	// (0x000a0a8b) call4_image_pane

0xd4f3,	// (0x000a7ddc) call4_windows_conf_pane_ParamLimits

0xd532,	// (0x000a7e1b) popup_call4_audio_in_window_ParamLimits

0xd532,	// (0x000a7e1b) popup_call4_audio_in_window

0x9aaf,	// (0x000a4398) bg_popup_call2_act_pane_cp02

0xd5a8,	// (0x000a7e91) call4_list_conf_pane

0xcbc0,	// (0x000a74a9) call4_image_pane_g1

0xcbc0,	// (0x000a74a9) call4_image_pane_g2

0x0001,

0x039f,	// (0x0009ac88) call4_image_pane_g

0xd828,	// (0x000a8111) list_single_graphic_popup_conf4_pane_ParamLimits

0xd828,	// (0x000a8111) list_single_graphic_popup_conf4_pane

0x9aaf,	// (0x000a4398) list_highlight_pane_cp022

0xd83b,	// (0x000a8124) list_single_graphic_popup_conf4_pane_g1

0xb069,	// (0x000a5952) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf84a,	// (0x000aa133) list_single_graphic_popup_conf4_pane_g

0xd843,	// (0x000a812c) list_single_graphic_popup_conf4_pane_t1

0x209f,	// (0x0009c988) popup_vtel_slider_window_ParamLimits

0x209f,	// (0x0009c988) popup_vtel_slider_window

0xd4d5,	// (0x000a7dbe) dialer2_ne_pane_t2_ParamLimits

0xd4d5,	// (0x000a7dbe) dialer2_ne_pane_t2

0x0001,

0xf73d,	// (0x000aa026) dialer2_ne_pane_t_ParamLimits

0xf73d,	// (0x000aa026) dialer2_ne_pane_t

0xa463,	// (0x000a4d4c) bg_popup_sub_pane_cp010_ParamLimits

0xa463,	// (0x000a4d4c) bg_popup_sub_pane_cp010

0x6d03,	// (0x000a15ec) popup_vtel_slider_window_g1_ParamLimits

0x6d03,	// (0x000a15ec) popup_vtel_slider_window_g1

0x6d0f,	// (0x000a15f8) popup_vtel_slider_window_g2_ParamLimits

0x6d0f,	// (0x000a15f8) popup_vtel_slider_window_g2

0x0003,

0xf84f,	// (0x000aa138) popup_vtel_slider_window_g_ParamLimits

0xf84f,	// (0x000aa138) popup_vtel_slider_window_g

0x6d57,	// (0x000a1640) vtel_slider_pane_ParamLimits

0x6d57,	// (0x000a1640) vtel_slider_pane

0x6d66,	// (0x000a164f) vtel_slider_pane_g1_ParamLimits

0x6d66,	// (0x000a164f) vtel_slider_pane_g1

0x6d73,	// (0x000a165c) vtel_slider_pane_g2_ParamLimits

0x6d73,	// (0x000a165c) vtel_slider_pane_g2

0x6d80,	// (0x000a1669) vtel_slider_pane_g3_ParamLimits

0x6d80,	// (0x000a1669) vtel_slider_pane_g3

0x6d66,	// (0x000a164f) vtel_slider_pane_g4_ParamLimits

0x6d66,	// (0x000a164f) vtel_slider_pane_g4

0x6d8d,	// (0x000a1676) vtel_slider_pane_g5_ParamLimits

0x6d8d,	// (0x000a1676) vtel_slider_pane_g5

0x0004,

0xf858,	// (0x000aa141) vtel_slider_pane_g_ParamLimits

0xf858,	// (0x000aa141) vtel_slider_pane_g

0x4395,	// (0x0009ec7e) main_gallery2_pane

0x6513,	// (0x000a0dfc) aid_size_row_itut2_dropdow_list_ParamLimits

0x6513,	// (0x000a0dfc) aid_size_row_itut2_dropdow_list

0x6581,	// (0x000a0e6a) grid_vitu2_function_top_pane_ParamLimits

0x6581,	// (0x000a0e6a) grid_vitu2_function_top_pane

0x65d7,	// (0x000a0ec0) popup_vitu2_dropdown_list_window_ParamLimits

0x65d7,	// (0x000a0ec0) popup_vitu2_dropdown_list_window

0x65f7,	// (0x000a0ee0) popup_vitu2_match_list_window

0x6da8,	// (0x000a1691) cell_vitu2_function_top_pane_ParamLimits

0x6da8,	// (0x000a1691) cell_vitu2_function_top_pane

0x6dc8,	// (0x000a16b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dc8,	// (0x000a16b1) cell_vitu2_function_top_pane_cp01

0x6de6,	// (0x000a16cf) cell_vitu2_function_top_wide_pane_ParamLimits

0x6de6,	// (0x000a16cf) cell_vitu2_function_top_wide_pane

0x4395,	// (0x0009ec7e) bg_button_pane_cp012

0x6e04,	// (0x000a16ed) cell_vitu2_function_top_pane_g1

0x6e18,	// (0x000a1701) bg_button_pane_cp013_ParamLimits

0x6e18,	// (0x000a1701) bg_button_pane_cp013

0x6e34,	// (0x000a171d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e34,	// (0x000a171d) cell_vitu2_function_top_wide_pane_g1

0x0fbe,	// (0x0009b8a7) bg_popup_sub_pane_cp20

0x6e4c,	// (0x000a1735) list_vitu2_match_list_pane

0xd623,	// (0x000a7f0c) bg_popup_sub_pane_cp20_g1

0xd62b,	// (0x000a7f14) bg_popup_sub_pane_cp20_g2

0xab23,	// (0x000a540c) bg_popup_sub_pane_cp20_g3

0xd633,	// (0x000a7f1c) bg_popup_sub_pane_cp20_g4

0xab03,	// (0x000a53ec) bg_popup_sub_pane_cp20_g5

0xd859,	// (0x000a8142) bg_popup_sub_pane_cp20_g6

0xd643,	// (0x000a7f2c) bg_popup_sub_pane_cp20_g7

0xd64b,	// (0x000a7f34) bg_popup_sub_pane_cp20_g8

0xd653,	// (0x000a7f3c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf863,	// (0x000aa14c) bg_popup_sub_pane_cp20_g

0x6e64,	// (0x000a174d) list_vitu2_match_list_item_pane_ParamLimits

0x6e64,	// (0x000a174d) list_vitu2_match_list_item_pane

0x6e76,	// (0x000a175f) list_vitu2_match_list_item_pane_t1

0x0fd8,	// (0x0009b8c1) bg_popup_sub_pane_cp21

0x6ec8,	// (0x000a17b1) grid_vitu2_dropdown_list_pane

0x6ed0,	// (0x000a17b9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ed0,	// (0x000a17b9) cell_vitu2_dropdown_list_char_pane

0x6ef1,	// (0x000a17da) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ef1,	// (0x000a17da) cell_vitu2_dropdown_list_ctrl_pane

0xd861,	// (0x000a814a) cell_vitu2_dropdown_list_char_pane_g1

0xd86a,	// (0x000a8153) cell_vitu2_dropdown_list_char_pane_g2

0xd873,	// (0x000a815c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x06cd,	// (0x0009afb6) cell_vitu2_dropdown_list_char_pane_g

0x6f1d,	// (0x000a1806) cell_vitu2_dropdown_list_char_pane_t1

0x6f2b,	// (0x000a1814) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f2b,	// (0x000a1814) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f3b,	// (0x000a1824) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f3b,	// (0x000a1824) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f4c,	// (0x000a1835) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f4c,	// (0x000a1835) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f5c,	// (0x000a1845) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f5c,	// (0x000a1845) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6349,	// (0x000a0c32) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6349,	// (0x000a0c32) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf880,	// (0x000aa169) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf880,	// (0x000aa169) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f78,	// (0x000a1861) aid_size_cell_gallery2_ParamLimits

0x6f78,	// (0x000a1861) aid_size_cell_gallery2

0x6f92,	// (0x000a187b) grid_gallery2_pane_ParamLimits

0x6f92,	// (0x000a187b) grid_gallery2_pane

0x58ff,	// (0x000a01e8) scroll_pane_cp029_ParamLimits

0x58ff,	// (0x000a01e8) scroll_pane_cp029

0x6fa9,	// (0x000a1892) cell_gallery2_pane_ParamLimits

0x6fa9,	// (0x000a1892) cell_gallery2_pane

0xd87c,	// (0x000a8165) cell_gallery2_pane_g2

0x6ffe,	// (0x000a18e7) cell_gallery2_pane_g3

0xd884,	// (0x000a816d) cell_gallery2_pane_g4

0xd88c,	// (0x000a8175) cell_gallery2_pane_g5

0xb39f,	// (0x000a5c88) grid_highlight_pane_cp10

0x65f7,	// (0x000a0ee0) popup_vitu2_match_list_window_ParamLimits

0x6609,	// (0x000a0ef2) popup_vitu2_query_window_ParamLimits

0x6609,	// (0x000a0ef2) popup_vitu2_query_window

0x0fd8,	// (0x0009b8c1) bg_vitu2_candi_button_pane

0xd861,	// (0x000a814a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86a,	// (0x000a8153) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd873,	// (0x000a815c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7006,	// (0x000a18ef) bg_button_pane_cp015

0x7018,	// (0x000a1901) bg_button_pane_cp016

0x702b,	// (0x000a1914) bg_button_pane_cp017

0xc7b6,	// (0x000a709f) bg_popup_sub_pane_cp22

0xd894,	// (0x000a817d) popup_vitu2_query_window_g1

0x7070,	// (0x000a1959) popup_vitu2_query_window_g2

0x0002,

0xf88b,	// (0x000aa174) popup_vitu2_query_window_g

0x708d,	// (0x000a1976) popup_vitu2_query_window_t1_ParamLimits

0x708d,	// (0x000a1976) popup_vitu2_query_window_t1

0x70c0,	// (0x000a19a9) popup_vitu2_query_window_t2_ParamLimits

0x70c0,	// (0x000a19a9) popup_vitu2_query_window_t2

0x70d2,	// (0x000a19bb) popup_vitu2_query_window_t3_ParamLimits

0x70d2,	// (0x000a19bb) popup_vitu2_query_window_t3

0x70fa,	// (0x000a19e3) popup_vitu2_query_window_t4_ParamLimits

0x70fa,	// (0x000a19e3) popup_vitu2_query_window_t4

0x711b,	// (0x000a1a04) popup_vitu2_query_window_t5_ParamLimits

0x711b,	// (0x000a1a04) popup_vitu2_query_window_t5

0x0006,

0xf892,	// (0x000aa17b) popup_vitu2_query_window_t_ParamLimits

0xf892,	// (0x000aa17b) popup_vitu2_query_window_t

0xd737,	// (0x000a8020) main_cset_text_pane

0x69d2,	// (0x000a12bb) aid_area_touch_slider_ParamLimits

0x69ee,	// (0x000a12d7) cset_slider_pane_ParamLimits

0x6a18,	// (0x000a1301) main_cset_slider_pane_g1_ParamLimits

0x6a2d,	// (0x000a1316) main_cset_slider_pane_g2_ParamLimits

0xd758,	// (0x000a8041) main_cset_slider_pane_g3_ParamLimits

0xd758,	// (0x000a8041) main_cset_slider_pane_g3

0x6a42,	// (0x000a132b) main_cset_slider_pane_g4_ParamLimits

0x6a42,	// (0x000a132b) main_cset_slider_pane_g4

0x6a51,	// (0x000a133a) main_cset_slider_pane_g5_ParamLimits

0x6a51,	// (0x000a133a) main_cset_slider_pane_g5

0x6a5f,	// (0x000a1348) main_cset_slider_pane_g6_ParamLimits

0x6a5f,	// (0x000a1348) main_cset_slider_pane_g6

0xf7f3,	// (0x000aa0dc) main_cset_slider_pane_g_ParamLimits

0xd788,	// (0x000a8071) main_cset_slider_pane_t1_ParamLimits

0x6af3,	// (0x000a13dc) main_cset_slider_pane_t2_ParamLimits

0x6b0d,	// (0x000a13f6) main_cset_slider_pane_t3_ParamLimits

0x6b27,	// (0x000a1410) main_cset_slider_pane_t4_ParamLimits

0x6b45,	// (0x000a142e) main_cset_slider_pane_t5_ParamLimits

0x6b63,	// (0x000a144c) main_cset_slider_pane_t6_ParamLimits

0x6b7a,	// (0x000a1463) main_cset_slider_pane_t7_ParamLimits

0x6ba8,	// (0x000a1491) main_cset_slider_pane_t8_ParamLimits

0x6ba8,	// (0x000a1491) main_cset_slider_pane_t8

0x6bd0,	// (0x000a14b9) main_cset_slider_pane_t9_ParamLimits

0x6bd0,	// (0x000a14b9) main_cset_slider_pane_t9

0x6bf8,	// (0x000a14e1) main_cset_slider_pane_t10_ParamLimits

0x6bf8,	// (0x000a14e1) main_cset_slider_pane_t10

0x6c20,	// (0x000a1509) main_cset_slider_pane_t11_ParamLimits

0x6c20,	// (0x000a1509) main_cset_slider_pane_t11

0x6c4a,	// (0x000a1533) main_cset_slider_pane_t12_ParamLimits

0x6c4a,	// (0x000a1533) main_cset_slider_pane_t12

0x6c69,	// (0x000a1552) main_cset_slider_pane_t13_ParamLimits

0x6c69,	// (0x000a1552) main_cset_slider_pane_t13

0xf818,	// (0x000aa101) main_cset_slider_pane_t_ParamLimits

0x9aaf,	// (0x000a4398) bg_popup_sub_pane_cp011

0xd8a0,	// (0x000a8189) main_cset_text_pane_g1

0xd8a8,	// (0x000a8191) main_cset_text_pane_t1

0xd8b6,	// (0x000a819f) main_cset_text_pane_t2

0xd8c4,	// (0x000a81ad) main_cset_text_pane_t3

0xd8d2,	// (0x000a81bb) main_cset_text_pane_t4

0xd8e0,	// (0x000a81c9) main_cset_text_pane_t5

0xd8ee,	// (0x000a81d7) main_cset_text_pane_t6

0xd8fc,	// (0x000a81e5) main_cset_text_pane_t7

0x0006,

0x06f5,	// (0x0009afde) main_cset_text_pane_t

0x0fd8,	// (0x0009b8c1) main_cam4_burst_pane

0x0fd8,	// (0x0009b8c1) main_cam5_pane

0x6921,	// (0x000a120a) bg_button_pane_cp019

0x692a,	// (0x000a1213) bg_button_pane_cp020

0xd764,	// (0x000a804d) main_cset_slider_pane_g7_ParamLimits

0xd764,	// (0x000a804d) main_cset_slider_pane_g7

0xd770,	// (0x000a8059) main_cset_slider_pane_g8_ParamLimits

0xd770,	// (0x000a8059) main_cset_slider_pane_g8

0x6a73,	// (0x000a135c) main_cset_slider_pane_g9_ParamLimits

0x6a73,	// (0x000a135c) main_cset_slider_pane_g9

0x6a7f,	// (0x000a1368) main_cset_slider_pane_g10_ParamLimits

0x6a7f,	// (0x000a1368) main_cset_slider_pane_g10

0x6a8b,	// (0x000a1374) main_cset_slider_pane_g11_ParamLimits

0x6a8b,	// (0x000a1374) main_cset_slider_pane_g11

0x6a97,	// (0x000a1380) main_cset_slider_pane_g12_ParamLimits

0x6a97,	// (0x000a1380) main_cset_slider_pane_g12

0x6aa3,	// (0x000a138c) main_cset_slider_pane_g13_ParamLimits

0x6aa3,	// (0x000a138c) main_cset_slider_pane_g13

0x6ab1,	// (0x000a139a) main_cset_slider_pane_g14_ParamLimits

0x6ab1,	// (0x000a139a) main_cset_slider_pane_g14

0x6abf,	// (0x000a13a8) main_cset_slider_pane_g15_ParamLimits

0x6abf,	// (0x000a13a8) main_cset_slider_pane_g15

0xd7b6,	// (0x000a809f) main_cset_slider_pane_t14_ParamLimits

0xd7b6,	// (0x000a809f) main_cset_slider_pane_t14

0xd7ef,	// (0x000a80d8) main_cset_slider_pane_t15_ParamLimits

0xd7ef,	// (0x000a80d8) main_cset_slider_pane_t15

0x7192,	// (0x000a1a7b) aid_cam4_burst_size_cell_ParamLimits

0x7192,	// (0x000a1a7b) aid_cam4_burst_size_cell

0x71ae,	// (0x000a1a97) grid_cam4_burst_pane_ParamLimits

0x71ae,	// (0x000a1a97) grid_cam4_burst_pane

0x71de,	// (0x000a1ac7) linegrid_cam4_burst_pane_ParamLimits

0x71de,	// (0x000a1ac7) linegrid_cam4_burst_pane

0x7200,	// (0x000a1ae9) scroll_pane_cp30_ParamLimits

0x7200,	// (0x000a1ae9) scroll_pane_cp30

0x720c,	// (0x000a1af5) cell_cam4_burst_pane_ParamLimits

0x720c,	// (0x000a1af5) cell_cam4_burst_pane

0xd90a,	// (0x000a81f3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd90a,	// (0x000a81f3) linegrid_cam4_burst_pane_g1

0x7248,	// (0x000a1b31) linegrid_cam4_burst_pane_g2_ParamLimits

0x7248,	// (0x000a1b31) linegrid_cam4_burst_pane_g2

0xd917,	// (0x000a8200) linegrid_cam4_burst_pane_g3_ParamLimits

0xd917,	// (0x000a8200) linegrid_cam4_burst_pane_g3

0x0002,

0xf8a1,	// (0x000aa18a) linegrid_cam4_burst_pane_g_ParamLimits

0xf8a1,	// (0x000aa18a) linegrid_cam4_burst_pane_g

0x7259,	// (0x000a1b42) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7259,	// (0x000a1b42) linegrid_cam4_burst_pane_g3_copy1

0xd924,	// (0x000a820d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd924,	// (0x000a820d) linegrid_cam4_burst_pane_g4

0x7273,	// (0x000a1b5c) linegrid_cam4_burst_pane_g5_ParamLimits

0x7273,	// (0x000a1b5c) linegrid_cam4_burst_pane_g5

0x7284,	// (0x000a1b6d) linegrid_cam4_burst_pane_g6_ParamLimits

0x7284,	// (0x000a1b6d) linegrid_cam4_burst_pane_g6

0xd931,	// (0x000a821a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd931,	// (0x000a821a) linegrid_cam4_burst_pane_g7

0x7295,	// (0x000a1b7e) cell_cam4_burst_pane_g1

0xd94a,	// (0x000a8233) main_cam5_pane_t1_ParamLimits

0xd94a,	// (0x000a8233) main_cam5_pane_t1

0xd97a,	// (0x000a8263) main_cam5_pane_t2_ParamLimits

0xd97a,	// (0x000a8263) main_cam5_pane_t2

0xd98c,	// (0x000a8275) main_cam5_pane_t3_ParamLimits

0xd98c,	// (0x000a8275) main_cam5_pane_t3

0xd99e,	// (0x000a8287) main_cam5_pane_t4_ParamLimits

0xd99e,	// (0x000a8287) main_cam5_pane_t4

0xd9b6,	// (0x000a829f) main_cam5_pane_t5_ParamLimits

0xd9b6,	// (0x000a829f) main_cam5_pane_t5

0xd9ca,	// (0x000a82b3) main_cam5_pane_t6_ParamLimits

0xd9ca,	// (0x000a82b3) main_cam5_pane_t6

0xd9de,	// (0x000a82c7) main_cam5_pane_t7_ParamLimits

0xd9de,	// (0x000a82c7) main_cam5_pane_t7

0xd9f0,	// (0x000a82d9) main_cam5_pane_t8_ParamLimits

0xd9f0,	// (0x000a82d9) main_cam5_pane_t8

0xda0c,	// (0x000a82f5) main_cam5_pane_t9_ParamLimits

0xda0c,	// (0x000a82f5) main_cam5_pane_t9

0xda1e,	// (0x000a8307) main_cam5_pane_t10_ParamLimits

0xda1e,	// (0x000a8307) main_cam5_pane_t10

0xda30,	// (0x000a8319) main_cam5_pane_t11_ParamLimits

0xda30,	// (0x000a8319) main_cam5_pane_t11

0xda42,	// (0x000a832b) main_cam5_pane_t12_ParamLimits

0xda42,	// (0x000a832b) main_cam5_pane_t12

0xda57,	// (0x000a8340) main_cam5_pane_t13_ParamLimits

0xda57,	// (0x000a8340) main_cam5_pane_t13

0x000c,

0xf8ad,	// (0x000aa196) main_cam5_pane_t_ParamLimits

0xf8ad,	// (0x000aa196) main_cam5_pane_t

0x0f7d,	// (0x0009b866) popup_scut_keymap_window_ParamLimits

0x0f7d,	// (0x0009b866) popup_scut_keymap_window

0x72aa,	// (0x000a1b93) aid_size_cell_brow_shortcut

0xb39f,	// (0x000a5c88) bg_popup_window_pane_cp010

0x72b6,	// (0x000a1b9f) grid_scut_pane

0x72c2,	// (0x000a1bab) cell_scut_pane_ParamLimits

0x72c2,	// (0x000a1bab) cell_scut_pane

0x72d9,	// (0x000a1bc2) cell_scut_pane_g1

0xda74,	// (0x000a835d) cell_scut_pane_t1

0xda83,	// (0x000a836c) cell_scut_pane_t2

0x72e2,	// (0x000a1bcb) cell_scut_pane_t3

0x0002,

0xf8c8,	// (0x000aa1b1) cell_scut_pane_t

0x50df,	// (0x0009f9c8) main_mup3_pane_g8_ParamLimits

0x50df,	// (0x0009f9c8) main_mup3_pane_g8

0x6521,	// (0x000a0e0a) area_vitu2_query_pane_ParamLimits

0x6521,	// (0x000a0e0a) area_vitu2_query_pane

0x703e,	// (0x000a1927) input_focus_pane_cp08

0xda92,	// (0x000a837b) area_vitu2_query_pane_g1

0x72f0,	// (0x000a1bd9) area_vitu2_query_pane_g2

0x0001,

0xf8cf,	// (0x000aa1b8) area_vitu2_query_pane_g

0x7301,	// (0x000a1bea) area_vitu2_query_pane_t1_ParamLimits

0x7301,	// (0x000a1bea) area_vitu2_query_pane_t1

0x7315,	// (0x000a1bfe) area_vitu2_query_pane_t2_ParamLimits

0x7315,	// (0x000a1bfe) area_vitu2_query_pane_t2

0x7329,	// (0x000a1c12) area_vitu2_query_pane_t3_ParamLimits

0x7329,	// (0x000a1c12) area_vitu2_query_pane_t3

0xa04b,	// (0x000a4934) area_vitu2_query_pane_t4_ParamLimits

0xa04b,	// (0x000a4934) area_vitu2_query_pane_t4

0xa073,	// (0x000a495c) area_vitu2_query_pane_t5_ParamLimits

0xa073,	// (0x000a495c) area_vitu2_query_pane_t5

0xa09b,	// (0x000a4984) area_vitu2_query_pane_t6_ParamLimits

0xa09b,	// (0x000a4984) area_vitu2_query_pane_t6

0x0006,

0xf8d4,	// (0x000aa1bd) area_vitu2_query_pane_t_ParamLimits

0xf8d4,	// (0x000aa1bd) area_vitu2_query_pane_t

0x7351,	// (0x000a1c3a) bg_button_pane_cp018

0x735f,	// (0x000a1c48) bg_button_pane_cp021

0x736b,	// (0x000a1c54) bg_button_pane_cp022

0x737c,	// (0x000a1c65) input_focus_pane_cp09

0xb18d,	// (0x000a5a76) aid_size_touch_mv_arrow_left

0xb1b8,	// (0x000a5aa1) aid_size_touch_mv_arrow_right

0x6ad7,	// (0x000a13c0) main_cset_slider_pane_g16_ParamLimits

0x6ad7,	// (0x000a13c0) main_cset_slider_pane_g16

0x6ae5,	// (0x000a13ce) main_cset_slider_pane_g17_ParamLimits

0x6ae5,	// (0x000a13ce) main_cset_slider_pane_g17

0x7295,	// (0x000a1b7e) cell_cam4_burst_pane_g1_ParamLimits

0x9aaf,	// (0x000a4398) compa_mode_pane

0x6d1b,	// (0x000a1604) popup_vtel_slider_window_g3_ParamLimits

0x6d1b,	// (0x000a1604) popup_vtel_slider_window_g3

0x6d2f,	// (0x000a1618) popup_vtel_slider_window_g4_ParamLimits

0x6d2f,	// (0x000a1618) popup_vtel_slider_window_g4

0x6d43,	// (0x000a162c) popup_vtel_slider_window_t1_ParamLimits

0x6d43,	// (0x000a162c) popup_vtel_slider_window_t1

0x0fd8,	// (0x0009b8c1) main_cl_pane

0x442f,	// (0x0009ed18) popup_imed_adjust2_window_ParamLimits

0xc7b6,	// (0x000a709f) bg_tb_trans_pane_cp05_ParamLimits

0xd0e1,	// (0x000a79ca) popup_imed_adjust2_window_g1_ParamLimits

0xd0f0,	// (0x000a79d9) popup_imed_adjust2_window_g2_ParamLimits

0xd0f0,	// (0x000a79d9) popup_imed_adjust2_window_g2

0xd0fc,	// (0x000a79e5) popup_imed_adjust2_window_g3_ParamLimits

0xd0fc,	// (0x000a79e5) popup_imed_adjust2_window_g3

0x0002,

0x04a2,	// (0x0009ad8b) popup_imed_adjust2_window_g_ParamLimits

0x04a2,	// (0x0009ad8b) popup_imed_adjust2_window_g

0xd108,	// (0x000a79f1) popup_imed_adjust2_window_t1_ParamLimits

0xd120,	// (0x000a7a09) slider_imed_adjust_pane_ParamLimits

0xd134,	// (0x000a7a1d) slider_imed_adjust_pane_g1_ParamLimits

0xd144,	// (0x000a7a2d) slider_imed_adjust_pane_g2_ParamLimits

0xd154,	// (0x000a7a3d) slider_imed_adjust_pane_g3_ParamLimits

0xd165,	// (0x000a7a4e) slider_imed_adjust_pane_g4_ParamLimits

0x04a9,	// (0x0009ad92) slider_imed_adjust_pane_g_ParamLimits

0x625e,	// (0x000a0b47) aid_touch_area_cam4_ParamLimits

0x625e,	// (0x000a0b47) aid_touch_area_cam4

0x626e,	// (0x000a0b57) battery_pane_cp01

0x62f5,	// (0x000a0bde) main_camera4_pane_g6_ParamLimits

0x62f5,	// (0x000a0bde) main_camera4_pane_g6

0x6313,	// (0x000a0bfc) main_camera4_pane_t2_ParamLimits

0x6313,	// (0x000a0bfc) main_camera4_pane_t2

0x0001,

0xf771,	// (0x000aa05a) main_camera4_pane_t_ParamLimits

0xf771,	// (0x000aa05a) main_camera4_pane_t

0x63a8,	// (0x000a0c91) aid_touch_area_vid4_ParamLimits

0x63a8,	// (0x000a0c91) aid_touch_area_vid4

0x63e8,	// (0x000a0cd1) main_video4_pane_g5_ParamLimits

0x63e8,	// (0x000a0cd1) main_video4_pane_g5

0x640c,	// (0x000a0cf5) vid4_progress_pane_ParamLimits

0x640c,	// (0x000a0cf5) vid4_progress_pane

0xd77c,	// (0x000a8065) main_cset_slider_pane_g18_ParamLimits

0xd77c,	// (0x000a8065) main_cset_slider_pane_g18

0xd93e,	// (0x000a8227) cell_cam4_burst_pane_g2_ParamLimits

0xd93e,	// (0x000a8227) cell_cam4_burst_pane_g2

0x0001,

0xf8a8,	// (0x000aa191) cell_cam4_burst_pane_g_ParamLimits

0xf8a8,	// (0x000aa191) cell_cam4_burst_pane_g

0x738d,	// (0x000a1c76) bg_cl_pane_ParamLimits

0x738d,	// (0x000a1c76) bg_cl_pane

0x7399,	// (0x000a1c82) cl_header_pane_ParamLimits

0x7399,	// (0x000a1c82) cl_header_pane

0x73a5,	// (0x000a1c8e) cl_listscroll_pane_ParamLimits

0x73a5,	// (0x000a1c8e) cl_listscroll_pane

0xda9e,	// (0x000a8387) bg_cl_pane_g1

0xdaa6,	// (0x000a838f) bg_cl_pane_g2

0xdaae,	// (0x000a8397) bg_cl_pane_g3

0xdab6,	// (0x000a839f) bg_cl_pane_g4

0xdabe,	// (0x000a83a7) bg_cl_pane_g5

0xdac6,	// (0x000a83af) bg_cl_pane_g6

0xdace,	// (0x000a83b7) bg_cl_pane_g7

0xdad6,	// (0x000a83bf) bg_cl_pane_g8

0xdade,	// (0x000a83c7) bg_cl_pane_g9

0x0008,

0xf8e3,	// (0x000aa1cc) bg_cl_pane_g

0x73b1,	// (0x000a1c9a) aid_height_cl_leading_ParamLimits

0x73b1,	// (0x000a1c9a) aid_height_cl_leading

0x73bd,	// (0x000a1ca6) aid_height_cl_text_ParamLimits

0x73bd,	// (0x000a1ca6) aid_height_cl_text

0xe86e,	// (0x000a9157) bg_cl_header_pane_ParamLimits

0xe86e,	// (0x000a9157) bg_cl_header_pane

0x73d5,	// (0x000a1cbe) cl_header_pane_g1_ParamLimits

0x73d5,	// (0x000a1cbe) cl_header_pane_g1

0x73e2,	// (0x000a1ccb) cl_header_pane_t1_ParamLimits

0x73e2,	// (0x000a1ccb) cl_header_pane_t1

0xdae6,	// (0x000a83cf) cl_list_pane

0xd74f,	// (0x000a8038) hc_scroll_pane_cp01

0xab03,	// (0x000a53ec) bg_cl_header_pane_g1

0xd623,	// (0x000a7f0c) bg_cl_header_pane_g2

0xab23,	// (0x000a540c) bg_cl_header_pane_g3

0xd633,	// (0x000a7f1c) bg_cl_header_pane_g4

0xd62b,	// (0x000a7f14) bg_cl_header_pane_g5

0xd859,	// (0x000a8142) bg_cl_header_pane_g6

0xd64b,	// (0x000a7f34) bg_cl_header_pane_g7

0xd653,	// (0x000a7f3c) bg_cl_header_pane_g8

0xd643,	// (0x000a7f2c) bg_cl_header_pane_g9

0x0008,

0xf8f6,	// (0x000aa1df) bg_cl_header_pane_g

0x73f4,	// (0x000a1cdd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73f4,	// (0x000a1cdd) hc_cl_list_double_graphic_heading_pane

0x7408,	// (0x000a1cf1) hc_cl_list_single_graphic_pane_ParamLimits

0x7408,	// (0x000a1cf1) hc_cl_list_single_graphic_pane

0x7422,	// (0x000a1d0b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7422,	// (0x000a1d0b) hc_cl_list_single_graphic_pane_g1

0x742e,	// (0x000a1d17) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x742e,	// (0x000a1d17) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf909,	// (0x000aa1f2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf909,	// (0x000aa1f2) hc_cl_list_single_graphic_pane_g

0x7442,	// (0x000a1d2b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7442,	// (0x000a1d2b) hc_cl_list_single_graphic_pane_t1

0x7422,	// (0x000a1d0b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7422,	// (0x000a1d0b) hc_cl_list_double_graphic_heading_pane_g1

0x7457,	// (0x000a1d40) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7457,	// (0x000a1d40) hc_cl_list_double_graphic_heading_pane_g2

0x746b,	// (0x000a1d54) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x746b,	// (0x000a1d54) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf90e,	// (0x000aa1f7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf90e,	// (0x000aa1f7) hc_cl_list_double_graphic_heading_pane_g

0x747f,	// (0x000a1d68) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x747f,	// (0x000a1d68) hc_cl_list_double_graphic_heading_pane_t1

0x7494,	// (0x000a1d7d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7494,	// (0x000a1d7d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf915,	// (0x000aa1fe) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf915,	// (0x000aa1fe) hc_cl_list_double_graphic_heading_pane_t

0x74b1,	// (0x000a1d9a) vid4_progress_pane_g1

0x74c1,	// (0x000a1daa) vid4_progress_pane_g2

0x74d1,	// (0x000a1dba) vid4_progress_pane_g3

0x74e3,	// (0x000a1dcc) vid4_progress_pane_g4

0x0004,

0xf91a,	// (0x000aa203) vid4_progress_pane_g

0x7501,	// (0x000a1dea) vid4_progress_pane_t1

0x7517,	// (0x000a1e00) vid4_progress_pane_t2

0x0002,

0xf925,	// (0x000aa20e) vid4_progress_pane_t

0x7542,	// (0x000a1e2b) wait_bar_pane_cp07

0xc9b1,	// (0x000a729a) blid_firmament_pane_ParamLimits

0xc9f4,	// (0x000a72dd) popup_blid_sat_info2_window_g1

0xca18,	// (0x000a7301) popup_blid_sat_info2_window_t3

0xca26,	// (0x000a730f) popup_blid_sat_info2_window_t4

0xca34,	// (0x000a731d) popup_blid_sat_info2_window_t5

0xca42,	// (0x000a732b) popup_blid_sat_info2_window_t6

0xca52,	// (0x000a733b) popup_blid_sat_info2_window_t7

0xca60,	// (0x000a7349) popup_blid_sat_info2_window_t8

0xca6e,	// (0x000a7357) popup_blid_sat_info2_window_t9

0xca7c,	// (0x000a7365) popup_blid_sat_info2_window_t10

0xcb40,	// (0x000a7429) aid_firma_cardinal_ParamLimits

0xcb54,	// (0x000a743d) blid_firmament_pane_t1_ParamLimits

0xcb6b,	// (0x000a7454) blid_firmament_pane_t2_ParamLimits

0xcb82,	// (0x000a746b) blid_firmament_pane_t3_ParamLimits

0xcb99,	// (0x000a7482) blid_firmament_pane_t4_ParamLimits

0x0396,	// (0x0009ac7f) blid_firmament_pane_t_ParamLimits

0xcbb0,	// (0x000a7499) blid_sat_info_pane_ParamLimits

0x4395,	// (0x0009ec7e) main_cam_set_pane_ParamLimits

0x5898,	// (0x000a0181) aid_size_cell_colour_35_ParamLimits

0x58b2,	// (0x000a019b) aid_size_cell_colour_112_ParamLimits

0x58c9,	// (0x000a01b2) aid_size_cell_effect_ParamLimits

0xa463,	// (0x000a4d4c) bg_tb_trans_pane_cp02_ParamLimits

0xaffa,	// (0x000a58e3) heading_imed_pane_ParamLimits

0x58e3,	// (0x000a01cc) listscroll_imed_pane_ParamLimits

0xbdd0,	// (0x000a66b9) popup_call2_audio_first_window_g5_ParamLimits

0xbdd0,	// (0x000a66b9) popup_call2_audio_first_window_g5

0x600d,	// (0x000a08f6) aid_size_touch_image3_arrow_left_ParamLimits

0x600d,	// (0x000a08f6) aid_size_touch_image3_arrow_left

0x6023,	// (0x000a090c) aid_size_touch_image3_arrow_right_ParamLimits

0x6023,	// (0x000a090c) aid_size_touch_image3_arrow_right

0x752c,	// (0x000a1e15) vid4_progress_pane_t3

0x5b97,	// (0x000a0480) main_hwr_training_symbol_option_pane_ParamLimits

0x5b97,	// (0x000a0480) main_hwr_training_symbol_option_pane

0xd3d7,	// (0x000a7cc0) popup_hwr_training_preview_window_ParamLimits

0xd3d7,	// (0x000a7cc0) popup_hwr_training_preview_window

0x5bf8,	// (0x000a04e1) hwr_training_navi_pane_g5_ParamLimits

0x5bf8,	// (0x000a04e1) hwr_training_navi_pane_g5

0xd611,	// (0x000a7efa) popup_char_count_window

0x0fbe,	// (0x0009b8a7) bg_popup_sub_pane_cp20_ParamLimits

0x6e4c,	// (0x000a1735) list_vitu2_match_list_pane_ParamLimits

0x6e58,	// (0x000a1741) vitu2_page_scroll_pane_ParamLimits

0x6e58,	// (0x000a1741) vitu2_page_scroll_pane

0xdaef,	// (0x000a83d8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaef,	// (0x000a83d8) list_single_hwr_training_symbol_option_pane

0xdb02,	// (0x000a83eb) list_single_hwr_training_symbol_option_pane_g1

0xdb0a,	// (0x000a83f3) list_single_hwr_training_symbol_option_pane_t1

0xdb18,	// (0x000a8401) bg_button_pane_cp023

0xdb21,	// (0x000a840a) bg_button_pane_cp024

0x758b,	// (0x000a1e74) vitu2_page_scroll_pane_g1

0x7593,	// (0x000a1e7c) vitu2_page_scroll_pane_g2

0x0001,

0xf92c,	// (0x000aa215) vitu2_page_scroll_pane_g

0x759b,	// (0x000a1e84) vitu2_page_scroll_pane_t1

0xd191,	// (0x000a7a7a) popup_char_count_window_g1

0xdb54,	// (0x000a843d) popup_char_count_window_g2

0xdb5d,	// (0x000a8446) popup_char_count_window_g3

0x0002,

0xf931,	// (0x000aa21a) popup_char_count_window_g

0xdb66,	// (0x000a844f) popup_char_count_window_t1

0x0fd8,	// (0x0009b8c1) main_vded2_pane

0xd0cd,	// (0x000a79b6) aid_size_cell_imed_line

0xd0d7,	// (0x000a79c0) grid_imed_line_width_pane

0x6478,	// (0x000a0d61) vid4_indicators_pane_g4

0xdb74,	// (0x000a845d) cell_imed_line_width_pane_ParamLimits

0xdb74,	// (0x000a845d) cell_imed_line_width_pane

0xdb88,	// (0x000a8471) cell_imed_line_width_pane_g1

0xd968,	// (0x000a8251) cell_imed_line_width_pane_g2

0x0001,

0xf938,	// (0x000aa221) cell_imed_line_width_pane_g

0x75aa,	// (0x000a1e93) main_vded2_pane_g1_ParamLimits

0x75aa,	// (0x000a1e93) main_vded2_pane_g1

0x75b7,	// (0x000a1ea0) main_vded2_pane_g2_ParamLimits

0x75b7,	// (0x000a1ea0) main_vded2_pane_g2

0x0001,

0xf93d,	// (0x000aa226) main_vded2_pane_g_ParamLimits

0xf93d,	// (0x000aa226) main_vded2_pane_g

0x75c5,	// (0x000a1eae) vded2_slider_pane_ParamLimits

0x75c5,	// (0x000a1eae) vded2_slider_pane

0x75d2,	// (0x000a1ebb) aid_size_touch_vded2_end

0x75dc,	// (0x000a1ec5) aid_size_touch_vded2_playhead

0xdb91,	// (0x000a847a) aid_size_touch_vded2_start

0xdb99,	// (0x000a8482) vded2_slider_bg_pane

0xdba2,	// (0x000a848b) vded2_slider_pane_g1

0xdbab,	// (0x000a8494) vded2_slider_pane_g2

0x75e4,	// (0x000a1ecd) vded2_slider_pane_g3

0x0002,

0xf942,	// (0x000aa22b) vded2_slider_pane_g

0xdbb3,	// (0x000a849c) vded2_slider_bg_pane_g1

0xdbbc,	// (0x000a84a5) vded2_slider_bg_pane_g2

0xdbee,	// (0x000a84d7) vded2_slider_bg_pane_g3

0x0002,

0xf949,	// (0x000aa232) vded2_slider_bg_pane_g

0x3c70,	// (0x0009e559) aid_postcard_touch_down_pane_ParamLimits

0x3c70,	// (0x0009e559) aid_postcard_touch_down_pane

0x3c80,	// (0x0009e569) aid_postcard_touch_up_pane_ParamLimits

0x3c80,	// (0x0009e569) aid_postcard_touch_up_pane

0x0fd8,	// (0x0009b8c1) main_blid2_pane

0x43be,	// (0x0009eca7) popup_blid2_search_window

0x9aaf,	// (0x000a4398) blid2_gps_pane

0x9aaf,	// (0x000a4398) blid2_navig_pane

0x9aaf,	// (0x000a4398) blid2_search_pane

0x9aaf,	// (0x000a4398) blid2_tripm_pane

0x75ed,	// (0x000a1ed6) blid2_search_pane_g1_ParamLimits

0x75ed,	// (0x000a1ed6) blid2_search_pane_g1

0x75fd,	// (0x000a1ee6) blid2_search_pane_t1_ParamLimits

0x75fd,	// (0x000a1ee6) blid2_search_pane_t1

0x760f,	// (0x000a1ef8) aid_size_cell_blid2_gps_ParamLimits

0x760f,	// (0x000a1ef8) aid_size_cell_blid2_gps

0x761f,	// (0x000a1f08) blid2_gps_pane_g1_ParamLimits

0x761f,	// (0x000a1f08) blid2_gps_pane_g1

0x762b,	// (0x000a1f14) grid_blid2_satellite_pane_ParamLimits

0x762b,	// (0x000a1f14) grid_blid2_satellite_pane

0x763b,	// (0x000a1f24) blid2_navig_pane_g1_ParamLimits

0x763b,	// (0x000a1f24) blid2_navig_pane_g1

0x7647,	// (0x000a1f30) blid2_navig_pane_t1_ParamLimits

0x7647,	// (0x000a1f30) blid2_navig_pane_t1

0x7659,	// (0x000a1f42) blid2_navig_pane_t2_ParamLimits

0x7659,	// (0x000a1f42) blid2_navig_pane_t2

0x0001,

0xf950,	// (0x000aa239) blid2_navig_pane_t_ParamLimits

0xf950,	// (0x000aa239) blid2_navig_pane_t

0x766b,	// (0x000a1f54) blid2_navig_ring_pane_ParamLimits

0x766b,	// (0x000a1f54) blid2_navig_ring_pane

0x767b,	// (0x000a1f64) blid2_speed_pane_ParamLimits

0x767b,	// (0x000a1f64) blid2_speed_pane

0x7687,	// (0x000a1f70) blid2_tripm_pane_g1_ParamLimits

0x7687,	// (0x000a1f70) blid2_tripm_pane_g1

0x7697,	// (0x000a1f80) blid2_tripm_pane_g2_ParamLimits

0x7697,	// (0x000a1f80) blid2_tripm_pane_g2

0x76a3,	// (0x000a1f8c) blid2_tripm_pane_g3_ParamLimits

0x76a3,	// (0x000a1f8c) blid2_tripm_pane_g3

0x76af,	// (0x000a1f98) blid2_tripm_pane_g4_ParamLimits

0x76af,	// (0x000a1f98) blid2_tripm_pane_g4

0x76bb,	// (0x000a1fa4) blid2_tripm_pane_g5_ParamLimits

0x76bb,	// (0x000a1fa4) blid2_tripm_pane_g5

0x0005,

0xf955,	// (0x000aa23e) blid2_tripm_pane_g_ParamLimits

0xf955,	// (0x000aa23e) blid2_tripm_pane_g

0x76d7,	// (0x000a1fc0) blid2_tripm_pane_t1_ParamLimits

0x76d7,	// (0x000a1fc0) blid2_tripm_pane_t1

0x76eb,	// (0x000a1fd4) blid2_tripm_pane_t2_ParamLimits

0x76eb,	// (0x000a1fd4) blid2_tripm_pane_t2

0x76fd,	// (0x000a1fe6) blid2_tripm_pane_t3_ParamLimits

0x76fd,	// (0x000a1fe6) blid2_tripm_pane_t3

0x0003,

0xf962,	// (0x000aa24b) blid2_tripm_pane_t_ParamLimits

0xf962,	// (0x000aa24b) blid2_tripm_pane_t

0x772f,	// (0x000a2018) cell_blid2_satellite_pane_ParamLimits

0x772f,	// (0x000a2018) cell_blid2_satellite_pane

0x7749,	// (0x000a2032) cell_blid2_satellite_pane_g1

0xdbf7,	// (0x000a84e0) cell_blid2_satellite_pane_t1

0xcbc0,	// (0x000a74a9) blid2_speed_pane_g1

0xdc05,	// (0x000a84ee) blid2_speed_pane_t1

0xdc13,	// (0x000a84fc) blid2_speed_pane_t2

0x0001,

0xf96b,	// (0x000aa254) blid2_speed_pane_t

0xcbc0,	// (0x000a74a9) blid2_navig_ring_pane_g1

0x7752,	// (0x000a203b) blid2_navig_ring_pane_g2

0x775a,	// (0x000a2043) blid2_navig_ring_pane_g3

0x7762,	// (0x000a204b) blid2_navig_ring_pane_g4

0x776a,	// (0x000a2053) blid2_navig_ring_pane_g5

0x0004,

0xf970,	// (0x000aa259) blid2_navig_ring_pane_g

0x9aaf,	// (0x000a4398) bg_popup_window_pane_cp011

0xdc21,	// (0x000a850a) popup_blid2_search_window_g1

0xdc29,	// (0x000a8512) popup_blid2_search_window_t1

0xdc37,	// (0x000a8520) popup_blid2_search_window_t2

0x0001,

0xf97b,	// (0x000aa264) popup_blid2_search_window_t

0xaa12,	// (0x000a52fb) main_browser_pane_g1

0xa703,	// (0x000a4fec) main_browser_pane_ParamLimits

0x4395,	// (0x0009ec7e) bg_button_pane_cp011_ParamLimits

0x66f2,	// (0x000a0fdb) cell_vitu2_function_pane_g1_ParamLimits

0xc7b6,	// (0x000a709f) bg_popup_sub_pane_cp22_ParamLimits

0x703e,	// (0x000a1927) input_focus_pane_cp08_ParamLimits

0x7055,	// (0x000a193e) popup_vitu2_query_button_pane_ParamLimits

0x7055,	// (0x000a193e) popup_vitu2_query_button_pane

0x7066,	// (0x000a194f) popup_vitu2_query_input_button_pane

0xd894,	// (0x000a817d) popup_vitu2_query_window_g1_ParamLimits

0x7070,	// (0x000a1959) popup_vitu2_query_window_g2_ParamLimits

0xf88b,	// (0x000aa174) popup_vitu2_query_window_g_ParamLimits

0x9aaf,	// (0x000a4398) bg_button_pane_cp026

0x7772,	// (0x000a205b) popup_vitu2_query_input_button_pane_g1

0x9aaf,	// (0x000a4398) bg_button_pane_cp025

0xdc45,	// (0x000a852e) popup_vitu2_query_button_pane_t1

0x4e17,	// (0x0009f700) main_mp3_pane_t6

0x4e27,	// (0x0009f710) popup_slider_window_cp01

0x6357,	// (0x000a0c40) cam4_battery_pane

0x6437,	// (0x000a0d20) cam4_battery_pane_cp02

0x74a9,	// (0x000a1d92) cam4_battery_pane_cp01

0x74a9,	// (0x000a1d92) cam4_battery_pane_cp03

0xd970,	// (0x000a8259) cam4_battery_pane_g1

0xcbc0,	// (0x000a74a9) cam4_battery_pane_g2

0x0001,

0xf980,	// (0x000aa269) cam4_battery_pane_g

0xca8a,	// (0x000a7373) popup_blid_sat_info2_window_t11

0xb18d,	// (0x000a5a76) aid_size_touch_mv_arrow_left_ParamLimits

0xb1b8,	// (0x000a5aa1) aid_size_touch_mv_arrow_right_ParamLimits

0xb216,	// (0x000a5aff) navi_pane_g1_ParamLimits

0xb222,	// (0x000a5b0b) navi_pane_g2_ParamLimits

0xb2a9,	// (0x000a5b92) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a9cce) navi_pane_g_ParamLimits

0x360f,	// (0x0009def8) navi_pane_mv_t1_ParamLimits

0x58ef,	// (0x000a01d8) grid_imed_effect_pane_ParamLimits

0x1f5f,	// (0x0009c848) aid_placing_vt_slider_lsc

0xa961,	// (0x000a524a) aid_placing_vt_slider_prt

0xa463,	// (0x000a4d4c) bg_tb_trans_pane_cp01_ParamLimits

0xcd40,	// (0x000a7629) popup_image_details_window_g1_ParamLimits

0xcd53,	// (0x000a763c) popup_image_details_window_g2_ParamLimits

0xcd68,	// (0x000a7651) popup_image_details_window_g3_ParamLimits

0xcd68,	// (0x000a7651) popup_image_details_window_g3

0x03db,	// (0x0009acc4) popup_image_details_window_g_ParamLimits

0xcd7c,	// (0x000a7665) popup_image_details_window_t1_ParamLimits

0xcd8e,	// (0x000a7677) popup_image_details_window_t2_ParamLimits

0xcda7,	// (0x000a7690) popup_image_details_window_t3_ParamLimits

0xcdbb,	// (0x000a76a4) popup_image_details_window_t4_ParamLimits

0xcdd6,	// (0x000a76bf) popup_image_details_window_t5_ParamLimits

0x03e2,	// (0x0009accb) popup_image_details_window_t_ParamLimits

0x73c9,	// (0x000a1cb2) cl_header_name_pane_ParamLimits

0x73c9,	// (0x000a1cb2) cl_header_name_pane

0x777a,	// (0x000a2063) cl_header_name_pane_t1_ParamLimits

0x777a,	// (0x000a2063) cl_header_name_pane_t1

0x7791,	// (0x000a207a) cl_header_name_pane_t2_ParamLimits

0x7791,	// (0x000a207a) cl_header_name_pane_t2

0x77bb,	// (0x000a20a4) cl_header_name_pane_t3_ParamLimits

0x77bb,	// (0x000a20a4) cl_header_name_pane_t3

0x0002,

0xf985,	// (0x000aa26e) cl_header_name_pane_t_ParamLimits

0xf985,	// (0x000aa26e) cl_header_name_pane_t

0xb338,	// (0x000a5c21) navi_pane_mv_g2_ParamLimits

0xd5eb,	// (0x000a7ed4) field_vitu2_entry_pane_g1_ParamLimits

0xd5f7,	// (0x000a7ee0) field_vitu2_entry_pane_g2_ParamLimits

0xd603,	// (0x000a7eec) field_vitu2_entry_pane_g3_ParamLimits

0xd603,	// (0x000a7eec) field_vitu2_entry_pane_g3

0xf7a3,	// (0x000aa08c) field_vitu2_entry_pane_g_ParamLimits

0x667d,	// (0x000a0f66) cell_vitu2_itu_pane_g1_ParamLimits

0x668d,	// (0x000a0f76) cell_vitu2_itu_pane_g2_ParamLimits

0x668d,	// (0x000a0f76) cell_vitu2_itu_pane_g2

0x0001,

0xf7af,	// (0x000aa098) cell_vitu2_itu_pane_g_ParamLimits

0xf7af,	// (0x000aa098) cell_vitu2_itu_pane_g

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp05_ParamLimits

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp05

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp03

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp04

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp10_ParamLimits

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp10

0x736b,	// (0x000a1c54) bg_vkb2_func_pane_cp08

0x7351,	// (0x000a1c3a) bg_vkb2_func_pane_cp06

0x735f,	// (0x000a1c48) bg_vkb2_func_pane_cp07

0xdb2a,	// (0x000a8413) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2a,	// (0x000a8413) bg_vkb2_func_pane_cp11

0xdb3f,	// (0x000a8428) bg_vkb2_func_pane_cp12_ParamLimits

0xdb3f,	// (0x000a8428) bg_vkb2_func_pane_cp12

0x9aaf,	// (0x000a4398) bg_vkb2_func_pane_cp09

0xd623,	// (0x000a7f0c) bg_vkb2_func_pane_g1

0xab23,	// (0x000a540c) bg_vkb2_func_pane_g2

0xd62b,	// (0x000a7f14) bg_vkb2_func_pane_g3

0xd633,	// (0x000a7f1c) bg_vkb2_func_pane_g4

0xd859,	// (0x000a8142) bg_vkb2_func_pane_g5

0xd64b,	// (0x000a7f34) bg_vkb2_func_pane_g6

0xd653,	// (0x000a7f3c) bg_vkb2_func_pane_g7

0xd643,	// (0x000a7f2c) bg_vkb2_func_pane_g8

0xab03,	// (0x000a53ec) bg_vkb2_func_pane_g9

0x0008,

0xf98c,	// (0x000aa275) bg_vkb2_func_pane_g

0x76c9,	// (0x000a1fb2) blid2_tripm_pane_g6_ParamLimits

0x76c9,	// (0x000a1fb2) blid2_tripm_pane_g6

0xd48f,	// (0x000a7d78) mp4_progress_pane_g1

0x7723,	// (0x000a200c) blid2_tripm_values_pane_ParamLimits

0x7723,	// (0x000a200c) blid2_tripm_values_pane

0x77e0,	// (0x000a20c9) blid2_tripm_values_pane_t1

0x77ee,	// (0x000a20d7) blid2_tripm_values_pane_t2

0x77fc,	// (0x000a20e5) blid2_tripm_values_pane_t3

0x780a,	// (0x000a20f3) blid2_tripm_values_pane_t4

0x7818,	// (0x000a2101) blid2_tripm_values_pane_t5

0x7826,	// (0x000a210f) blid2_tripm_values_pane_t6

0x7834,	// (0x000a211d) blid2_tripm_values_pane_t7

0x7842,	// (0x000a212b) blid2_tripm_values_pane_t8

0x7850,	// (0x000a2139) blid2_tripm_values_pane_t9

0x0008,

0xf99f,	// (0x000aa288) blid2_tripm_values_pane_t

0x1f9f,	// (0x0009c888) call_video_pane_t1_ParamLimits

0x1fc0,	// (0x0009c8a9) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a9b57) call_video_pane_t_ParamLimits

0x3b3f,	// (0x0009e428) msg_header_pane_g1_ParamLimits

0xb51a,	// (0x000a5e03) msg_header_pane_g2_ParamLimits

0xb51a,	// (0x000a5e03) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a9d71) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a9d71) msg_header_pane_g

0xa703,	// (0x000a4fec) main_clock2_pane_ParamLimits

0x5680,	// (0x0009ff69) grid_clock2_toolbar_pane_ParamLimits

0x5680,	// (0x0009ff69) grid_clock2_toolbar_pane

0x5680,	// (0x0009ff69) listscroll_clock2_pane_ParamLimits

0x5680,	// (0x0009ff69) listscroll_clock2_pane

0x572a,	// (0x000a0013) main_clock2_pane_t3_ParamLimits

0x572a,	// (0x000a0013) main_clock2_pane_t3

0x573c,	// (0x000a0025) main_clock2_pane_t4_ParamLimits

0x573c,	// (0x000a0025) main_clock2_pane_t4

0xdc53,	// (0x000a853c) cell_clock2_toolbar_pane

0xdc5b,	// (0x000a8544) cell_clock2_toolbar_pane_cp01

0xdc5b,	// (0x000a8544) cell_clock2_toolbar_pane_cp02

0xdc63,	// (0x000a854c) cell_clock2_toolbar_pane_cp03

0xdc6b,	// (0x000a8554) list_clock2_pane

0xb103,	// (0x000a59ec) scroll_pane_cp10

0xdc73,	// (0x000a855c) list_single_clock2_pane_ParamLimits

0xdc73,	// (0x000a855c) list_single_clock2_pane

0xb39f,	// (0x000a5c88) list_highlight_pane_cp08

0xdc80,	// (0x000a8569) list_single_clock2_pane_t1

0xdc8e,	// (0x000a8577) list_single_clock2_pane_t2

0x0001,

0xf9b2,	// (0x000aa29b) list_single_clock2_pane_t

0x9aaf,	// (0x000a4398) bg_button_pane_cp10

0xdc9c,	// (0x000a8585) cell_clock2_toolbar_pane_g1

0x3bde,	// (0x0009e4c7) aid_main_viewer_pane_g1_ParamLimits

0x3bde,	// (0x0009e4c7) aid_main_viewer_pane_g1

0x3bea,	// (0x0009e4d3) aid_main_viewer_pane_g2_ParamLimits

0x3bea,	// (0x0009e4d3) aid_main_viewer_pane_g2

0x3bf6,	// (0x0009e4df) aid_main_viewer_pane_g3_ParamLimits

0x3bf6,	// (0x0009e4df) aid_main_viewer_pane_g3

0x3c07,	// (0x0009e4f0) aid_main_viewer_pane_g4_ParamLimits

0x3c07,	// (0x0009e4f0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a9d82) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a9d82) aid_main_viewer_pane_g

0x4388,	// (0x0009ec71) main_calc_pane_ParamLimits

0x43a3,	// (0x0009ec8c) main_dialer2_pane_ParamLimits

0x0fd8,	// (0x0009b8c1) main_cam6_pane

0x0fd8,	// (0x0009b8c1) main_vid6_pane

0x568c,	// (0x0009ff75) listscroll_gen_pane_cp06_ParamLimits

0x568c,	// (0x0009ff75) listscroll_gen_pane_cp06

0x574e,	// (0x000a0037) main_clock2_pane_t5_ParamLimits

0x574e,	// (0x000a0037) main_clock2_pane_t5

0x5799,	// (0x000a0082) aid_call2_pane_cp10_ParamLimits

0x57ab,	// (0x000a0094) aid_call_pane_cp10_ParamLimits

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57bd,	// (0x000a00a6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57bd,	// (0x000a00a6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb181,	// (0x000a5a6a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b8,	// (0x000a9fa1) popup_clock_analogue_window_cp10_g_ParamLimits

0x57cf,	// (0x000a00b8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fba,	// (0x000a08a3) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fba,	// (0x000a08a3) cell_dialer2_keypad_pane_g2

0x0001,

0xf742,	// (0x000aa02b) cell_dialer2_keypad_pane_g_ParamLimits

0xf742,	// (0x000aa02b) cell_dialer2_keypad_pane_g

0x5fd6,	// (0x000a08bf) cell_dialer2_keypad_pane_t1

0x69bf,	// (0x000a12a8) main_cset_text2_pane_ParamLimits

0x69bf,	// (0x000a12a8) main_cset_text2_pane

0xda92,	// (0x000a837b) area_vitu2_query_pane_g1_ParamLimits

0x72f0,	// (0x000a1bd9) area_vitu2_query_pane_g2_ParamLimits

0xf8cf,	// (0x000aa1b8) area_vitu2_query_pane_g_ParamLimits

0xa0c3,	// (0x000a49ac) area_vitu2_query_pane_t7_ParamLimits

0xa0c3,	// (0x000a49ac) area_vitu2_query_pane_t7

0x7351,	// (0x000a1c3a) bg_button_pane_cp018_ParamLimits

0x735f,	// (0x000a1c48) bg_button_pane_cp021_ParamLimits

0x736b,	// (0x000a1c54) bg_button_pane_cp022_ParamLimits

0x736b,	// (0x000a1c54) bg_vkb2_func_pane_cp08_ParamLimits

0x7351,	// (0x000a1c3a) bg_vkb2_func_pane_cp06_ParamLimits

0x735f,	// (0x000a1c48) bg_vkb2_func_pane_cp07_ParamLimits

0x737c,	// (0x000a1c65) input_focus_pane_cp09_ParamLimits

0x785e,	// (0x000a2147) cam6_autofocus_pane_ParamLimits

0x785e,	// (0x000a2147) cam6_autofocus_pane

0x7880,	// (0x000a2169) cam6_image_uncrop_pane_ParamLimits

0x7880,	// (0x000a2169) cam6_image_uncrop_pane

0x78ad,	// (0x000a2196) cam6_indi_pane_ParamLimits

0x78ad,	// (0x000a2196) cam6_indi_pane

0x78c7,	// (0x000a21b0) cam6_mode_pane_ParamLimits

0x78c7,	// (0x000a21b0) cam6_mode_pane

0x78db,	// (0x000a21c4) cam6_timer_pane_ParamLimits

0x78db,	// (0x000a21c4) cam6_timer_pane

0x78e7,	// (0x000a21d0) cam6_zoom_pane_ParamLimits

0x78e7,	// (0x000a21d0) cam6_zoom_pane

0x78ff,	// (0x000a21e8) cam6_mode_pane_g1_ParamLimits

0x78ff,	// (0x000a21e8) cam6_mode_pane_g1

0x790b,	// (0x000a21f4) cam6_mode_pane_g2_ParamLimits

0x790b,	// (0x000a21f4) cam6_mode_pane_g2

0x7917,	// (0x000a2200) cam6_mode_pane_g3_ParamLimits

0x7917,	// (0x000a2200) cam6_mode_pane_g3

0x7923,	// (0x000a220c) cam6_mode_pane_g4_ParamLimits

0x7923,	// (0x000a220c) cam6_mode_pane_g4

0x0003,

0xf9b7,	// (0x000aa2a0) cam6_mode_pane_g_ParamLimits

0xf9b7,	// (0x000aa2a0) cam6_mode_pane_g

0xdbe0,	// (0x000a84c9) bg_tb_trans_pane_cp08_ParamLimits

0xdbe0,	// (0x000a84c9) bg_tb_trans_pane_cp08

0xdca4,	// (0x000a858d) cam6_battery_pane_ParamLimits

0xdca4,	// (0x000a858d) cam6_battery_pane

0xdcba,	// (0x000a85a3) cam6_indi_pane_g1_ParamLimits

0xdcba,	// (0x000a85a3) cam6_indi_pane_g1

0xdccc,	// (0x000a85b5) cam6_indi_pane_g2_ParamLimits

0xdccc,	// (0x000a85b5) cam6_indi_pane_g2

0xdcde,	// (0x000a85c7) cam6_indi_pane_g3_ParamLimits

0xdcde,	// (0x000a85c7) cam6_indi_pane_g3

0x0002,

0x0823,	// (0x0009b10c) cam6_indi_pane_g_ParamLimits

0x0823,	// (0x0009b10c) cam6_indi_pane_g

0xdcf0,	// (0x000a85d9) cam6_indi_pane_t1_ParamLimits

0xdcf0,	// (0x000a85d9) cam6_indi_pane_t1

0x64b3,	// (0x000a0d9c) cam6_autofocus_pane_g1

0x64ab,	// (0x000a0d94) cam6_autofocus_pane_g2

0x64c3,	// (0x000a0dac) cam6_autofocus_pane_g3

0x64bb,	// (0x000a0da4) cam6_autofocus_pane_g4

0x0003,

0xf9c0,	// (0x000aa2a9) cam6_autofocus_pane_g

0xdd16,	// (0x000a85ff) cam6_timer_pane_g1

0xdd1e,	// (0x000a8607) cam6_timer_pane_t1

0xdd2c,	// (0x000a8615) cam6_zoom_cont_pane

0xdd34,	// (0x000a861d) cam6_zoom_pane_g1

0xdd3c,	// (0x000a8625) cam6_zoom_pane_g2

0x792f,	// (0x000a2218) cam6_zoom_pane_g3

0x0002,

0xf9c9,	// (0x000aa2b2) cam6_zoom_pane_g

0xcbc0,	// (0x000a74a9) cam6_battery_pane_g1

0xcbc0,	// (0x000a74a9) cam6_battery_pane_g2

0x0001,

0x039f,	// (0x0009ac88) cam6_battery_pane_g

0xdd44,	// (0x000a862d) cam6_zoom_cont_pane_g1

0xdd4d,	// (0x000a8636) cam6_zoom_cont_pane_g2

0xdd56,	// (0x000a863f) cam6_zoom_cont_pane_g3

0x0002,

0x083a,	// (0x0009b123) cam6_zoom_cont_pane_g

0x794c,	// (0x000a2235) cam6_mode_pane_cp_ParamLimits

0x794c,	// (0x000a2235) cam6_mode_pane_cp

0x7960,	// (0x000a2249) cam6_zoom_pane_cp_ParamLimits

0x7960,	// (0x000a2249) cam6_zoom_pane_cp

0x7978,	// (0x000a2261) vid6_image_uncrop_cif_pane_ParamLimits

0x7978,	// (0x000a2261) vid6_image_uncrop_cif_pane

0x79a4,	// (0x000a228d) vid6_image_uncrop_nhd_pane_ParamLimits

0x79a4,	// (0x000a228d) vid6_image_uncrop_nhd_pane

0x79c1,	// (0x000a22aa) vid6_image_uncrop_vga_pane_ParamLimits

0x79c1,	// (0x000a22aa) vid6_image_uncrop_vga_pane

0x79e0,	// (0x000a22c9) vid6_image_uncrop_wvga_pane_ParamLimits

0x79e0,	// (0x000a22c9) vid6_image_uncrop_wvga_pane

0x79fd,	// (0x000a22e6) vid6_indi_pane_ParamLimits

0x79fd,	// (0x000a22e6) vid6_indi_pane

0xdbe0,	// (0x000a84c9) bg_tb_trans_pane_cp09_ParamLimits

0xdbe0,	// (0x000a84c9) bg_tb_trans_pane_cp09

0xdd6e,	// (0x000a8657) cam6_battery_pane_cp_ParamLimits

0xdd6e,	// (0x000a8657) cam6_battery_pane_cp

0xdd7a,	// (0x000a8663) vid6_indi_pane_g1_ParamLimits

0xdd7a,	// (0x000a8663) vid6_indi_pane_g1

0xdd8c,	// (0x000a8675) vid6_indi_pane_g2_ParamLimits

0xdd8c,	// (0x000a8675) vid6_indi_pane_g2

0xdd9e,	// (0x000a8687) vid6_indi_pane_g3_ParamLimits

0xdd9e,	// (0x000a8687) vid6_indi_pane_g3

0xddb3,	// (0x000a869c) vid6_indi_pane_g4_ParamLimits

0xddb3,	// (0x000a869c) vid6_indi_pane_g4

0xddc8,	// (0x000a86b1) vid6_indi_pane_g5_ParamLimits

0xddc8,	// (0x000a86b1) vid6_indi_pane_g5

0x0004,

0x0841,	// (0x0009b12a) vid6_indi_pane_g_ParamLimits

0x0841,	// (0x0009b12a) vid6_indi_pane_g

0xdde2,	// (0x000a86cb) vid6_indi_pane_t1_ParamLimits

0xdde2,	// (0x000a86cb) vid6_indi_pane_t1

0xddf8,	// (0x000a86e1) vid6_indi_pane_t2_ParamLimits

0xddf8,	// (0x000a86e1) vid6_indi_pane_t2

0xde20,	// (0x000a8709) vid6_indi_pane_t3_ParamLimits

0xde20,	// (0x000a8709) vid6_indi_pane_t3

0xde48,	// (0x000a8731) vid6_indi_pane_t4_ParamLimits

0xde48,	// (0x000a8731) vid6_indi_pane_t4

0x0003,

0x084c,	// (0x0009b135) vid6_indi_pane_t_ParamLimits

0x084c,	// (0x0009b135) vid6_indi_pane_t

0xde6c,	// (0x000a8755) wait_bar_pane_cp08

0x7a20,	// (0x000a2309) main_cset_text2_pane_t1_ParamLimits

0x7a20,	// (0x000a2309) main_cset_text2_pane_t1

0x7937,	// (0x000a2220) listscroll_gen_pane_cp06_t1_ParamLimits

0x7937,	// (0x000a2220) listscroll_gen_pane_cp06_t1

0x0fd8,	// (0x0009b8c1) main_cam6_set_pane

0x6349,	// (0x000a0c32) bg_tb_trans_pane_cp06_ParamLimits

0x635f,	// (0x000a0c48) cam4_indicators_pane_g1_ParamLimits

0x6370,	// (0x000a0c59) cam4_indicators_pane_g2_ParamLimits

0xf77f,	// (0x000aa068) cam4_indicators_pane_g_ParamLimits

0x638e,	// (0x000a0c77) cam4_indicators_pane_t1_ParamLimits

0x4395,	// (0x0009ec7e) bg_tb_trans_pane_cp07_ParamLimits

0x643f,	// (0x000a0d28) vid4_indicators_pane_g1_ParamLimits

0x6453,	// (0x000a0d3c) vid4_indicators_pane_g2_ParamLimits

0x6467,	// (0x000a0d50) vid4_indicators_pane_g3_ParamLimits

0x6478,	// (0x000a0d61) vid4_indicators_pane_g4_ParamLimits

0xf791,	// (0x000aa07a) vid4_indicators_pane_g_ParamLimits

0x6494,	// (0x000a0d7d) vid4_indicators_pane_t1_ParamLimits

0x74b1,	// (0x000a1d9a) vid4_progress_pane_g1_ParamLimits

0x74c1,	// (0x000a1daa) vid4_progress_pane_g2_ParamLimits

0x74d1,	// (0x000a1dba) vid4_progress_pane_g3_ParamLimits

0x74e3,	// (0x000a1dcc) vid4_progress_pane_g4_ParamLimits

0xf91a,	// (0x000aa203) vid4_progress_pane_g_ParamLimits

0x7501,	// (0x000a1dea) vid4_progress_pane_t1_ParamLimits

0x7517,	// (0x000a1e00) vid4_progress_pane_t2_ParamLimits

0x752c,	// (0x000a1e15) vid4_progress_pane_t3_ParamLimits

0xf925,	// (0x000aa20e) vid4_progress_pane_t_ParamLimits

0x7542,	// (0x000a1e2b) wait_bar_pane_cp07_ParamLimits

0x7a5a,	// (0x000a2343) main_cam6_set_pane_g2_ParamLimits

0x7a5a,	// (0x000a2343) main_cam6_set_pane_g2

0x7a66,	// (0x000a234f) main_cset6_listscroll_pane_ParamLimits

0x7a66,	// (0x000a234f) main_cset6_listscroll_pane

0x7a91,	// (0x000a237a) main_cset6_slider_pane_ParamLimits

0x7a91,	// (0x000a237a) main_cset6_slider_pane

0x7a9d,	// (0x000a2386) main_cset6_text2_pane_ParamLimits

0x7a9d,	// (0x000a2386) main_cset6_text2_pane

0xde7b,	// (0x000a8764) main_cset6_text_pane

0xde83,	// (0x000a876c) main_cset_list_pane_copy1_ParamLimits

0xde83,	// (0x000a876c) main_cset_list_pane_copy1

0xde93,	// (0x000a877c) scroll_pane_cp028_copy1

0x7ab0,	// (0x000a2399) cset_list_set_pane_copy1

0x7ac9,	// (0x000a23b2) aid_position_infowindow_above_copy1

0x7ad1,	// (0x000a23ba) aid_position_infowindow_below_copy1

0x7ad9,	// (0x000a23c2) cset_list_set_pane_g1_copy1

0xa027,	// (0x000a4910) cset_list_set_pane_g3_copy1_ParamLimits

0xa027,	// (0x000a4910) cset_list_set_pane_g3_copy1

0xa036,	// (0x000a491f) cset_list_set_pane_t1_copy1_ParamLimits

0xa036,	// (0x000a491f) cset_list_set_pane_t1_copy1

0xa463,	// (0x000a4d4c) list_highlight_pane_cp021_copy1_ParamLimits

0xa463,	// (0x000a4d4c) list_highlight_pane_cp021_copy1

0xde9c,	// (0x000a8785) cset6_slider_pane_ParamLimits

0xde9c,	// (0x000a8785) cset6_slider_pane

0xdec8,	// (0x000a87b1) main_cset6_slider_pane_g1_ParamLimits

0xdec8,	// (0x000a87b1) main_cset6_slider_pane_g1

0x7ae1,	// (0x000a23ca) main_cset6_slider_pane_g2_ParamLimits

0x7ae1,	// (0x000a23ca) main_cset6_slider_pane_g2

0xdef0,	// (0x000a87d9) main_cset6_slider_pane_g3_ParamLimits

0xdef0,	// (0x000a87d9) main_cset6_slider_pane_g3

0x7b09,	// (0x000a23f2) main_cset6_slider_pane_g4_ParamLimits

0x7b09,	// (0x000a23f2) main_cset6_slider_pane_g4

0x7b15,	// (0x000a23fe) main_cset6_slider_pane_g5_ParamLimits

0x7b15,	// (0x000a23fe) main_cset6_slider_pane_g5

0xd764,	// (0x000a804d) main_cset6_slider_pane_g7_ParamLimits

0xd764,	// (0x000a804d) main_cset6_slider_pane_g7

0xd770,	// (0x000a8059) main_cset6_slider_pane_g8_ParamLimits

0xd770,	// (0x000a8059) main_cset6_slider_pane_g8

0x7b23,	// (0x000a240c) main_cset6_slider_pane_g9_ParamLimits

0x7b23,	// (0x000a240c) main_cset6_slider_pane_g9

0x7b2f,	// (0x000a2418) main_cset6_slider_pane_g10_ParamLimits

0x7b2f,	// (0x000a2418) main_cset6_slider_pane_g10

0x7b3b,	// (0x000a2424) main_cset6_slider_pane_g11_ParamLimits

0x7b3b,	// (0x000a2424) main_cset6_slider_pane_g11

0x7b47,	// (0x000a2430) main_cset6_slider_pane_g12_ParamLimits

0x7b47,	// (0x000a2430) main_cset6_slider_pane_g12

0x7b53,	// (0x000a243c) main_cset6_slider_pane_g13_ParamLimits

0x7b53,	// (0x000a243c) main_cset6_slider_pane_g13

0x7b5f,	// (0x000a2448) main_cset6_slider_pane_g14_ParamLimits

0x7b5f,	// (0x000a2448) main_cset6_slider_pane_g14

0x7b6b,	// (0x000a2454) main_cset6_slider_pane_g15_ParamLimits

0x7b6b,	// (0x000a2454) main_cset6_slider_pane_g15

0x7b83,	// (0x000a246c) main_cset6_slider_pane_g16_ParamLimits

0x7b83,	// (0x000a246c) main_cset6_slider_pane_g16

0x7b91,	// (0x000a247a) main_cset6_slider_pane_g17_ParamLimits

0x7b91,	// (0x000a247a) main_cset6_slider_pane_g17

0x0011,

0xf9d0,	// (0x000aa2b9) main_cset6_slider_pane_g_ParamLimits

0xf9d0,	// (0x000aa2b9) main_cset6_slider_pane_g

0xdefc,	// (0x000a87e5) main_cset6_slider_pane_t1_ParamLimits

0xdefc,	// (0x000a87e5) main_cset6_slider_pane_t1

0x7bb7,	// (0x000a24a0) main_cset6_slider_pane_t2_ParamLimits

0x7bb7,	// (0x000a24a0) main_cset6_slider_pane_t2

0x7be2,	// (0x000a24cb) main_cset6_slider_pane_t3_ParamLimits

0x7be2,	// (0x000a24cb) main_cset6_slider_pane_t3

0x7c0d,	// (0x000a24f6) main_cset6_slider_pane_t4_ParamLimits

0x7c0d,	// (0x000a24f6) main_cset6_slider_pane_t4

0x7c38,	// (0x000a2521) main_cset6_slider_pane_t5_ParamLimits

0x7c38,	// (0x000a2521) main_cset6_slider_pane_t5

0xdf3d,	// (0x000a8826) main_cset6_slider_pane_t7_ParamLimits

0xdf3d,	// (0x000a8826) main_cset6_slider_pane_t7

0x7c65,	// (0x000a254e) main_cset6_slider_pane_t8_ParamLimits

0x7c65,	// (0x000a254e) main_cset6_slider_pane_t8

0x7c89,	// (0x000a2572) main_cset6_slider_pane_t9_ParamLimits

0x7c89,	// (0x000a2572) main_cset6_slider_pane_t9

0x7cad,	// (0x000a2596) main_cset6_slider_pane_t10_ParamLimits

0x7cad,	// (0x000a2596) main_cset6_slider_pane_t10

0x7cd1,	// (0x000a25ba) main_cset6_slider_pane_t11_ParamLimits

0x7cd1,	// (0x000a25ba) main_cset6_slider_pane_t11

0xdf73,	// (0x000a885c) main_cset6_slider_pane_t14_ParamLimits

0xdf73,	// (0x000a885c) main_cset6_slider_pane_t14

0xdfac,	// (0x000a8895) main_cset6_slider_pane_t15_ParamLimits

0xdfac,	// (0x000a8895) main_cset6_slider_pane_t15

0x000b,

0xf9f5,	// (0x000aa2de) main_cset6_slider_pane_t_ParamLimits

0xf9f5,	// (0x000aa2de) main_cset6_slider_pane_t

0xdbc5,	// (0x000a84ae) cset_slider_pane_g1_copy1

0xdbce,	// (0x000a84b7) cset_slider_pane_g2_copy1

0xdbd7,	// (0x000a84c0) cset_slider_pane_g3_copy1

0x9aaf,	// (0x000a4398) bg_popup_sub_pane_cp011_copy1

0xdfe5,	// (0x000a88ce) main_cset_text_pane_g1_copy1

0xd8a8,	// (0x000a8191) main_cset_text_pane_t1_copy1

0xd8b6,	// (0x000a819f) main_cset_text_pane_t2_copy1

0xd8c4,	// (0x000a81ad) main_cset_text_pane_t3_copy1

0xd8d2,	// (0x000a81bb) main_cset_text_pane_t4_copy1

0xd8e0,	// (0x000a81c9) main_cset_text_pane_t5_copy1

0xdfed,	// (0x000a88d6) main_cset_text_pane_t6_copy1

0xdffb,	// (0x000a88e4) main_cset_text_pane_t7_copy1

0x7dc6,	// (0x000a26af) main_cset_text2_pane_t1_copy1

0x4395,	// (0x0009ec7e) main_ncimui_pane

0x43f4,	// (0x0009ecdd) popup_query_ncimui_window_ParamLimits

0x43f4,	// (0x0009ecdd) popup_query_ncimui_window

0xa4ad,	// (0x000a4d96) field_cale_ev2_pane_g4_ParamLimits

0xa4ad,	// (0x000a4d96) field_cale_ev2_pane_g4

0x5cda,	// (0x000a05c3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cda,	// (0x000a05c3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf722,	// (0x000aa00b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf722,	// (0x000aa00b) cell_video_dialer_keypad_pane_g

0x5cf2,	// (0x000a05db) cell_video_dialer_keypad_pane_t1

0x9aaf,	// (0x000a4398) bg_popup_window_pane_cp012

0xafb8,	// (0x000a58a1) heading_pane_cp06

0xe027,	// (0x000a8910) ncim_query_content_pane

0x9aaf,	// (0x000a4398) bg_popup_heading_pane_cp01

0xe02f,	// (0x000a8918) ncim_heading_pane_t1

0xe03d,	// (0x000a8926) ncim_indicator_popup_pane

0xe04f,	// (0x000a8938) ncim_query_button_pane

0xe063,	// (0x000a894c) ncim_query_content_pane_t1

0xe075,	// (0x000a895e) ncim_query_content_pane_t2

0x0005,

0xfa39,	// (0x000aa322) ncim_query_content_pane_t

0xe0af,	// (0x000a8998) ncim_query_list_pane

0xe0c1,	// (0x000a89aa) ncim_query_popup_pane

0xe03d,	// (0x000a8926) ncim_indicator_popup_pane_ParamLimits

0x7f20,	// (0x000a2809) ncim_query_content_pane_g1_ParamLimits

0x7f20,	// (0x000a2809) ncim_query_content_pane_g1

0xe063,	// (0x000a894c) ncim_query_content_pane_t1_ParamLimits

0xe075,	// (0x000a895e) ncim_query_content_pane_t2_ParamLimits

0x7f2c,	// (0x000a2815) ncim_query_content_pane_t3_ParamLimits

0x7f2c,	// (0x000a2815) ncim_query_content_pane_t3

0x7f49,	// (0x000a2832) ncim_query_content_pane_t4_ParamLimits

0x7f49,	// (0x000a2832) ncim_query_content_pane_t4

0x7f66,	// (0x000a284f) ncim_query_content_pane_t5_ParamLimits

0x7f66,	// (0x000a284f) ncim_query_content_pane_t5

0xe087,	// (0x000a8970) ncim_query_content_pane_t6_ParamLimits

0xe087,	// (0x000a8970) ncim_query_content_pane_t6

0xfa39,	// (0x000aa322) ncim_query_content_pane_t_ParamLimits

0xe0af,	// (0x000a8998) ncim_query_list_pane_ParamLimits

0xe0c1,	// (0x000a89aa) ncim_query_popup_pane_ParamLimits

0xe0d5,	// (0x000a89be) wait_bar_pane_cp04

0x9aaf,	// (0x000a4398) input_focus_pane_cp011

0xe0dd,	// (0x000a89c6) ncim_query_popup_pane_t1

0xe0eb,	// (0x000a89d4) ncim_list_query_list_pane_ParamLimits

0xe0eb,	// (0x000a89d4) ncim_list_query_list_pane

0x9aaf,	// (0x000a4398) bg_button_pane_cp027

0xe0fe,	// (0x000a89e7) ncim_query_button_pane_g1

0x9aaf,	// (0x000a4398) list_highlight_pane_cp012

0xe108,	// (0x000a89f1) ncim_list_query_list_pane_g1

0xe110,	// (0x000a89f9) ncim_list_query_list_pane_t1

0x637f,	// (0x000a0c68) cam4_indicators_pane_g3_ParamLimits

0x637f,	// (0x000a0c68) cam4_indicators_pane_g3

0x6484,	// (0x000a0d6d) vid4_indicators_pane_g5_ParamLimits

0x6484,	// (0x000a0d6d) vid4_indicators_pane_g5

0x74f2,	// (0x000a1ddb) vid4_progress_pane_g5_ParamLimits

0x74f2,	// (0x000a1ddb) vid4_progress_pane_g5

0x7e0c,	// (0x000a26f5) main_ncimui_pane_g1

0x7e74,	// (0x000a275d) ncimui_group_query_pane_ParamLimits

0x7e74,	// (0x000a275d) ncimui_group_query_pane

0x7ebc,	// (0x000a27a5) ncimui_list_pane_ParamLimits

0x7ebc,	// (0x000a27a5) ncimui_list_pane

0x7ee3,	// (0x000a27cc) ncimui_text_pane_ParamLimits

0x7ee3,	// (0x000a27cc) ncimui_text_pane

0x7f83,	// (0x000a286c) ncimui_text_pane_t1_ParamLimits

0x7f83,	// (0x000a286c) ncimui_text_pane_t1

0xe11e,	// (0x000a8a07) ncimui_list_single_graphic_pane_ParamLimits

0xe11e,	// (0x000a8a07) ncimui_list_single_graphic_pane

0x7fa2,	// (0x000a288b) ncimui_query_pane_ParamLimits

0x7fa2,	// (0x000a288b) ncimui_query_pane

0x9aaf,	// (0x000a4398) list_highlight_pane_cp013

0xe12e,	// (0x000a8a17) ncim_list_query_list_pane_t1_copy1

0xe108,	// (0x000a89f1) ncim_list_single_graphic_pane_g1

0xe13c,	// (0x000a8a25) ncim_query_button_pane_cp01

0xe148,	// (0x000a8a31) ncim_query_entry_pane_ParamLimits

0xe148,	// (0x000a8a31) ncim_query_entry_pane

0xe15b,	// (0x000a8a44) ncimui_query_pane_g1

0xe167,	// (0x000a8a50) ncimui_query_pane_t1_ParamLimits

0xe167,	// (0x000a8a50) ncimui_query_pane_t1

0xa463,	// (0x000a4d4c) input_focus_pane_cp012

0xe180,	// (0x000a8a69) ncim_query_entry_pane_t1

0xa703,	// (0x000a4fec) main_im_pane_ParamLimits

0x4395,	// (0x0009ec7e) main_mobtv_pane_ParamLimits

0x4395,	// (0x0009ec7e) main_mobtv_pane

0x7b9f,	// (0x000a2488) main_cset6_slider_pane_g18_ParamLimits

0x7b9f,	// (0x000a2488) main_cset6_slider_pane_g18

0x7bab,	// (0x000a2494) main_cset6_slider_pane_g19_ParamLimits

0x7bab,	// (0x000a2494) main_cset6_slider_pane_g19

0xd603,	// (0x000a7eec) bg_main_mobtv_pane_ParamLimits

0xd603,	// (0x000a7eec) bg_main_mobtv_pane

0x7fb5,	// (0x000a289e) main_mobtv_info_pane

0x7fc0,	// (0x000a28a9) main_mobtv_loading_pane_ParamLimits

0x7fc0,	// (0x000a28a9) main_mobtv_loading_pane

0xe192,	// (0x000a8a7b) main_mobtv_pg_channel_list_pane

0xe19c,	// (0x000a8a85) main_mobtv_pg_hdr_pane

0x7fcd,	// (0x000a28b6) main_mobtv_programe_curr_pane_ParamLimits

0x7fcd,	// (0x000a28b6) main_mobtv_programe_curr_pane

0x7fda,	// (0x000a28c3) main_mobtv_programe_next_pane_ParamLimits

0x7fda,	// (0x000a28c3) main_mobtv_programe_next_pane

0xe1a5,	// (0x000a8a8e) popup_mobtv_noti_window

0xcbc0,	// (0x000a74a9) main_tv_pg_hdr_pane_g1

0xe1ad,	// (0x000a8a96) main_tv_pg_hdr_pane_g2

0xe1b5,	// (0x000a8a9e) main_tv_pg_hdr_pane_g3

0xe1bd,	// (0x000a8aa6) main_tv_pg_hdr_pane_g4

0xe1c5,	// (0x000a8aae) main_tv_pg_hdr_pane_g5

0xe1cf,	// (0x000a8ab8) main_tv_pg_hdr_pane_g6

0xe1d9,	// (0x000a8ac2) main_tv_pg_hdr_pane_g7

0xe1e3,	// (0x000a8acc) main_tv_pg_hdr_pane_g8

0xe1ed,	// (0x000a8ad6) main_tv_pg_hdr_pane_g9

0xe1f7,	// (0x000a8ae0) main_tv_pg_hdr_pane_g10

0xe201,	// (0x000a8aea) main_tv_pg_hdr_pane_g11

0x000a,

0x08cb,	// (0x0009b1b4) main_tv_pg_hdr_pane_g

0xe20b,	// (0x000a8af4) main_tv_pg_hdr_pane_t1

0xe219,	// (0x000a8b02) main_tv_pg_hdr_pane_t2

0xe227,	// (0x000a8b10) main_tv_pg_hdr_pane_t3

0xe237,	// (0x000a8b20) main_tv_pg_hdr_pane_t4

0xe247,	// (0x000a8b30) main_tv_pg_hdr_pane_t5

0x0004,

0x08e2,	// (0x0009b1cb) main_tv_pg_hdr_pane_t

0xe257,	// (0x000a8b40) single_mobtv_pg_channel_pane_ParamLimits

0xe257,	// (0x000a8b40) single_mobtv_pg_channel_pane

0xe269,	// (0x000a8b52) single_mobtv_pg_channel_table_pane

0xe272,	// (0x000a8b5b) single_mobtv_pg_channel_thumb_pane

0xe27b,	// (0x000a8b64) single_tv_pg_channel_pane_g1

0xe284,	// (0x000a8b6d) single_tv_pg_channel_pane_g2

0x0001,

0x08ed,	// (0x0009b1d6) single_tv_pg_channel_pane_g

0xce20,	// (0x000a7709) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce20,	// (0x000a7709) bg_single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x000a8b76) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28d,	// (0x000a8b76) single_mobtv_pg_channel_thumb_pane_g1

0xe29b,	// (0x000a8b84) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29b,	// (0x000a8b84) single_mobtv_pg_channel_thumb_pane_g2

0xe2a7,	// (0x000a8b90) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a7,	// (0x000a8b90) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x08f2,	// (0x0009b1db) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x08f2,	// (0x0009b1db) single_mobtv_pg_channel_thumb_pane_g

0xe2b3,	// (0x000a8b9c) single_mobtv_pg_channel_thumb_pane_t1

0xe2c1,	// (0x000a8baa) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x08f9,	// (0x0009b1e2) single_mobtv_pg_channel_thumb_pane_t

0xcbc0,	// (0x000a74a9) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc0,	// (0x000a74a9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x039f,	// (0x0009ac88) bg_single_mobtv_pg_channel_table_pane_g

0xe2cf,	// (0x000a8bb8) single_mobtv_pg_channel_table_pane_t1

0xe2dd,	// (0x000a8bc6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x08fe,	// (0x0009b1e7) single_mobtv_pg_channel_table_pane_t

0x7fef,	// (0x000a28d8) main_mobtv_info_pane_g1_ParamLimits

0x7fef,	// (0x000a28d8) main_mobtv_info_pane_g1

0x800b,	// (0x000a28f4) main_mobtv_info_pane_t1_ParamLimits

0x800b,	// (0x000a28f4) main_mobtv_info_pane_t1

0x8083,	// (0x000a296c) main_mobtv_info_pane_t2_ParamLimits

0x8083,	// (0x000a296c) main_mobtv_info_pane_t2

0x0002,

0xfa4b,	// (0x000aa334) main_mobtv_info_pane_t_ParamLimits

0xfa4b,	// (0x000aa334) main_mobtv_info_pane_t

0x8112,	// (0x000a29fb) wait_bar_pane_cp05

0x8124,	// (0x000a2a0d) main_mobtv_loading_pane_g1_ParamLimits

0x8124,	// (0x000a2a0d) main_mobtv_loading_pane_g1

0x8132,	// (0x000a2a1b) main_mobtv_loading_pane_g2_ParamLimits

0x8132,	// (0x000a2a1b) main_mobtv_loading_pane_g2

0x813e,	// (0x000a2a27) main_mobtv_loading_pane_g3_ParamLimits

0x813e,	// (0x000a2a27) main_mobtv_loading_pane_g3

0x0002,

0xfa52,	// (0x000aa33b) main_mobtv_loading_pane_g_ParamLimits

0xfa52,	// (0x000aa33b) main_mobtv_loading_pane_g

0xe2eb,	// (0x000a8bd4) main_mobtv_loading_pane_t1_ParamLimits

0xe2eb,	// (0x000a8bd4) main_mobtv_loading_pane_t1

0xe303,	// (0x000a8bec) main_mobtv_loading_pane_t2_ParamLimits

0xe303,	// (0x000a8bec) main_mobtv_loading_pane_t2

0x0001,

0x0916,	// (0x0009b1ff) main_mobtv_loading_pane_t_ParamLimits

0x0916,	// (0x0009b1ff) main_mobtv_loading_pane_t

0x814c,	// (0x000a2a35) wait_bar_pane_cp06_ParamLimits

0x814c,	// (0x000a2a35) wait_bar_pane_cp06

0xe327,	// (0x000a8c10) main_mobtv_programe_curr_pane_t1

0xe335,	// (0x000a8c1e) main_mobtv_programe_curr_pane_t2

0x0001,

0x091b,	// (0x0009b204) main_mobtv_programe_curr_pane_t

0xe343,	// (0x000a8c2c) main_mobtv_programe_next_pane_t1

0xe351,	// (0x000a8c3a) main_mobtv_programe_next_pane_t2

0xe35f,	// (0x000a8c48) main_mobtv_programe_next_pane_t3

0x0002,

0x0920,	// (0x0009b209) main_mobtv_programe_next_pane_t

0x9aaf,	// (0x000a4398) bg_popup_mobtv_noti_window_pane

0xe36d,	// (0x000a8c56) popup_mobtv_noti_window_g1

0xe375,	// (0x000a8c5e) popup_mobtv_noti_window_t1

0xe383,	// (0x000a8c6c) popup_mobtv_noti_window_t2

0x0001,

0x0927,	// (0x0009b210) popup_mobtv_noti_window_t

0xcbc0,	// (0x000a74a9) bg_popup_mobtv_noti_window_pane_g1

0x0fd8,	// (0x0009b8c1) sc_clock_pane

0x0fd8,	// (0x0009b8c1) main_fs_bigclock_pane

0x7711,	// (0x000a1ffa) blid2_tripm_pane_t4_ParamLimits

0x7711,	// (0x000a1ffa) blid2_tripm_pane_t4

0x8158,	// (0x000a2a41) sc_clock_pane_g1_ParamLimits

0x8158,	// (0x000a2a41) sc_clock_pane_g1

0x8166,	// (0x000a2a4f) sc_clock_pane_t1_ParamLimits

0x8166,	// (0x000a2a4f) sc_clock_pane_t1

0x8179,	// (0x000a2a62) sc_clock_pane_t2_ParamLimits

0x8179,	// (0x000a2a62) sc_clock_pane_t2

0x818b,	// (0x000a2a74) sc_clock_pane_t3_ParamLimits

0x818b,	// (0x000a2a74) sc_clock_pane_t3

0x0004,

0xfa59,	// (0x000aa342) sc_clock_pane_t_ParamLimits

0xfa59,	// (0x000aa342) sc_clock_pane_t

0x9068,	// (0x000a3951) main_fs_bigclock_indicator_pane_ParamLimits

0x9068,	// (0x000a3951) main_fs_bigclock_indicator_pane

0x8214,	// (0x000a2afd) main_fs_bigclock_pane_g1_ParamLimits

0x8214,	// (0x000a2afd) main_fs_bigclock_pane_g1

0x9074,	// (0x000a395d) main_fs_bigclock_pane_t1_ParamLimits

0x9074,	// (0x000a395d) main_fs_bigclock_pane_t1

0x9086,	// (0x000a396f) main_fs_bigclock_pane_t2_ParamLimits

0x9086,	// (0x000a396f) main_fs_bigclock_pane_t2

0x9098,	// (0x000a3981) main_fs_bigclock_pane_t3_ParamLimits

0x9098,	// (0x000a3981) main_fs_bigclock_pane_t3

0x0002,

0xfbeb,	// (0x000aa4d4) main_fs_bigclock_pane_t_ParamLimits

0xfbeb,	// (0x000aa4d4) main_fs_bigclock_pane_t

0xec8f,	// (0x000a9578) main_fs_bigclock_indicator_pane_g1

0xe057,	// (0x000a8940) ncim_query_content_pane_g2_ParamLimits

0xe057,	// (0x000a8940) ncim_query_content_pane_g2

0x0001,

0xfa34,	// (0x000aa31d) ncim_query_content_pane_g_ParamLimits

0xfa34,	// (0x000aa31d) ncim_query_content_pane_g

0x819f,	// (0x000a2a88) sc_clock_pane_t4_ParamLimits

0x819f,	// (0x000a2a88) sc_clock_pane_t4

0x4395,	// (0x0009ec7e) main_radioblah_pane

0xd576,	// (0x000a7e5f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd576,	// (0x000a7e5f) cell_call4_button_pane_t1_copy1

0x7e26,	// (0x000a270f) main_ncimui_pane_t1_ParamLimits

0x7e26,	// (0x000a270f) main_ncimui_pane_t1

0x7e40,	// (0x000a2729) main_ncimui_pane_t2_ParamLimits

0x7e40,	// (0x000a2729) main_ncimui_pane_t2

0x0002,

0xfa2d,	// (0x000aa316) main_ncimui_pane_t_ParamLimits

0xfa2d,	// (0x000aa316) main_ncimui_pane_t

0xe4c8,	// (0x000a8db1) main_radioblah_anim_pane_ParamLimits

0xe4c8,	// (0x000a8db1) main_radioblah_anim_pane

0xe4d9,	// (0x000a8dc2) main_radioblah_info_pane_ParamLimits

0xe4d9,	// (0x000a8dc2) main_radioblah_info_pane

0xe4ed,	// (0x000a8dd6) main_radioblah_pane_t1_ParamLimits

0xe4ed,	// (0x000a8dd6) main_radioblah_pane_t1

0xe509,	// (0x000a8df2) main_radioblah_pane_t2_ParamLimits

0xe509,	// (0x000a8df2) main_radioblah_pane_t2

0x0003,

0x094d,	// (0x0009b236) main_radioblah_pane_t_ParamLimits

0x094d,	// (0x0009b236) main_radioblah_pane_t

0x8266,	// (0x000a2b4f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8266,	// (0x000a2b4f) main_radioblah_rocker_ctrl_pane

0xe551,	// (0x000a8e3a) main_radioblah_info_pane_t1_ParamLimits

0xe551,	// (0x000a8e3a) main_radioblah_info_pane_t1

0x82ab,	// (0x000a2b94) main_radioblah_info_pane_t2_ParamLimits

0x82ab,	// (0x000a2b94) main_radioblah_info_pane_t2

0x0003,

0xfa64,	// (0x000aa34d) main_radioblah_info_pane_t_ParamLimits

0xfa64,	// (0x000aa34d) main_radioblah_info_pane_t

0xcbc0,	// (0x000a74a9) main_radioblah_rocker_ctrl_pane_g1

0x835b,	// (0x000a2c44) main_radioblah_rocker_ctrl_pane_g2

0x8363,	// (0x000a2c4c) main_radioblah_rocker_ctrl_pane_g3

0x836b,	// (0x000a2c54) main_radioblah_rocker_ctrl_pane_g4

0x8373,	// (0x000a2c5c) main_radioblah_rocker_ctrl_pane_g5

0x837b,	// (0x000a2c64) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa6d,	// (0x000aa356) main_radioblah_rocker_ctrl_pane_g

0x7dc6,	// (0x000a26af) main_cset_text2_pane_t1_copy1_ParamLimits

0x629f,	// (0x000a0b88) cam4_image_uncrop_qvga_pane

0x63f4,	// (0x000a0cdd) vid4_image_uncrop_qcif_pane

0x789f,	// (0x000a2188) cam6_image_uncrop_qvga_pane_ParamLimits

0x789f,	// (0x000a2188) cam6_image_uncrop_qvga_pane

0xdd5e,	// (0x000a8647) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd5e,	// (0x000a8647) vid6_image_uncrop_qcif_pane

0x9aaf,	// (0x000a4398) bg_popup_preview_window_pane_cp03

0xe009,	// (0x000a88f2) list_cset_text2_pane

0xe011,	// (0x000a88fa) main_cset6_text2_pane_g1

0xe019,	// (0x000a8902) main_cset6_text2_pane_t1

0x8383,	// (0x000a2c6c) list_cset_text2_pane_t1_ParamLimits

0x8383,	// (0x000a2c6c) list_cset_text2_pane_t1

0x4395,	// (0x0009ec7e) main_radioblah_pane_ParamLimits

0x80fe,	// (0x000a29e7) main_mobtv_info_pane_t3_ParamLimits

0x80fe,	// (0x000a29e7) main_mobtv_info_pane_t3

0x8254,	// (0x000a2b3d) main_radioblah_pane_g1

0x827f,	// (0x000a2b68) main_radioblah_info_pane_g1

0x8300,	// (0x000a2be9) main_radioblah_info_pane_t3_ParamLimits

0x8300,	// (0x000a2be9) main_radioblah_info_pane_t3

0x305d,	// (0x0009d946) highlight_cell_cale_month_pane_ParamLimits

0x305d,	// (0x0009d946) highlight_cell_cale_month_pane

0x0fd8,	// (0x0009b8c1) main_phob_fisheye_pane

0xcefc,	// (0x000a77e5) scroll_pane_cp0031_ParamLimits

0xcefc,	// (0x000a77e5) scroll_pane_cp0031

0xde6c,	// (0x000a8755) wait_bar_pane_cp08_ParamLimits

0x7ab0,	// (0x000a2399) cset_list_set_pane_copy1_ParamLimits

0xe58b,	// (0x000a8e74) highlight_cell_cale_month_pane_g1

0x83aa,	// (0x000a2c93) highlight_cell_cale_month_pane_t1

0xdae6,	// (0x000a83cf) list_gen_pane_cp01

0xd74f,	// (0x000a8038) scroll_pane_01

0x83b8,	// (0x000a2ca1) list_single_double_fisheye_pane

0x83c1,	// (0x000a2caa) list_double_fisheye_pane_g1_ParamLimits

0x83c1,	// (0x000a2caa) list_double_fisheye_pane_g1

0x83cd,	// (0x000a2cb6) list_double_fisheye_pane_g2_ParamLimits

0x83cd,	// (0x000a2cb6) list_double_fisheye_pane_g2

0x83e1,	// (0x000a2cca) list_double_fisheye_pane_g3_ParamLimits

0x83e1,	// (0x000a2cca) list_double_fisheye_pane_g3

0x0004,

0xfa7a,	// (0x000aa363) list_double_fisheye_pane_g_ParamLimits

0xfa7a,	// (0x000aa363) list_double_fisheye_pane_g

0x840a,	// (0x000a2cf3) list_double_fisheye_pane_t1_ParamLimits

0x840a,	// (0x000a2cf3) list_double_fisheye_pane_t1

0x8425,	// (0x000a2d0e) list_double_fisheye_pane_t2_ParamLimits

0x8425,	// (0x000a2d0e) list_double_fisheye_pane_t2

0x0001,

0xfa85,	// (0x000aa36e) list_double_fisheye_pane_t_ParamLimits

0xfa85,	// (0x000aa36e) list_double_fisheye_pane_t

0x0fd8,	// (0x0009b8c1) main_call5_pane

0x81c5,	// (0x000a2aae) sc_swipe_pane_ParamLimits

0x81c5,	// (0x000a2aae) sc_swipe_pane

0x8453,	// (0x000a2d3c) call5_image_pane_ParamLimits

0x8453,	// (0x000a2d3c) call5_image_pane

0x8463,	// (0x000a2d4c) call5_swipe_1_pane_ParamLimits

0x8463,	// (0x000a2d4c) call5_swipe_1_pane

0x846f,	// (0x000a2d58) call5_swipe_2_pane_ParamLimits

0x846f,	// (0x000a2d58) call5_swipe_2_pane

0x8489,	// (0x000a2d72) popup_call5_audio_first_window_ParamLimits

0x8489,	// (0x000a2d72) popup_call5_audio_first_window

0xce20,	// (0x000a7709) call5_swipe_1_pane_g1_ParamLimits

0xce20,	// (0x000a7709) call5_swipe_1_pane_g1

0xe593,	// (0x000a8e7c) call5_swipe_1_pane_g2_ParamLimits

0xe593,	// (0x000a8e7c) call5_swipe_1_pane_g2

0x0001,

0xfa8a,	// (0x000aa373) call5_swipe_1_pane_g_ParamLimits

0xfa8a,	// (0x000aa373) call5_swipe_1_pane_g

0xe59f,	// (0x000a8e88) call5_swipe_1_pane_t1_ParamLimits

0xe59f,	// (0x000a8e88) call5_swipe_1_pane_t1

0xce20,	// (0x000a7709) call5_swipe_2_pane_g1_ParamLimits

0xce20,	// (0x000a7709) call5_swipe_2_pane_g1

0xe5b4,	// (0x000a8e9d) call5_swipe_2_pane_g2_ParamLimits

0xe5b4,	// (0x000a8e9d) call5_swipe_2_pane_g2

0x0001,

0xfa8f,	// (0x000aa378) call5_swipe_2_pane_g_ParamLimits

0xfa8f,	// (0x000aa378) call5_swipe_2_pane_g

0xe5c0,	// (0x000a8ea9) call5_swipe_2_pane_t1_ParamLimits

0xe5c0,	// (0x000a8ea9) call5_swipe_2_pane_t1

0xe5f0,	// (0x000a8ed9) sc_swipe_pane_g1_ParamLimits

0xe5f0,	// (0x000a8ed9) sc_swipe_pane_g1

0xe5fd,	// (0x000a8ee6) sc_swipe_pane_g2_ParamLimits

0xe5fd,	// (0x000a8ee6) sc_swipe_pane_g2

0x0001,

0x0986,	// (0x0009b26f) sc_swipe_pane_g_ParamLimits

0x0986,	// (0x0009b26f) sc_swipe_pane_g

0xe609,	// (0x000a8ef2) sc_swipe_pane_t1_ParamLimits

0xe609,	// (0x000a8ef2) sc_swipe_pane_t1

0x0fd8,	// (0x0009b8c1) main_cmail_launcher_pane

0x8497,	// (0x000a2d80) aid_size_cell_cmail_l_ParamLimits

0x8497,	// (0x000a2d80) aid_size_cell_cmail_l

0x84a7,	// (0x000a2d90) grid_cmail_l_pane_ParamLimits

0x84a7,	// (0x000a2d90) grid_cmail_l_pane

0x84b7,	// (0x000a2da0) cell_cmail_l_pane_ParamLimits

0x84b7,	// (0x000a2da0) cell_cmail_l_pane

0x84cb,	// (0x000a2db4) cell_cmail_l_pane_g1_ParamLimits

0x84cb,	// (0x000a2db4) cell_cmail_l_pane_g1

0x84dc,	// (0x000a2dc5) cell_cmail_l_pane_t1_ParamLimits

0x84dc,	// (0x000a2dc5) cell_cmail_l_pane_t1

0xe61e,	// (0x000a8f07) cell_cmail_l_pane_t2_ParamLimits

0xe61e,	// (0x000a8f07) cell_cmail_l_pane_t2

0x0001,

0xfa94,	// (0x000aa37d) cell_cmail_l_pane_t_ParamLimits

0xfa94,	// (0x000aa37d) cell_cmail_l_pane_t

0xa463,	// (0x000a4d4c) grid_highlight_pane_cp018_ParamLimits

0xa463,	// (0x000a4d4c) grid_highlight_pane_cp018

0x0e2e,	// (0x0009b717) main2_pane_ParamLimits

0x0e2e,	// (0x0009b717) main2_pane

0xa7ae,	// (0x000a5097) popup_sp_fs_action_menu_bg_pane_g1

0xa7b6,	// (0x000a509f) popup_sp_fs_action_menu_bg_pane_g2

0xa7be,	// (0x000a50a7) popup_sp_fs_action_menu_bg_pane_g3

0xa7c6,	// (0x000a50af) popup_sp_fs_action_menu_bg_pane_g4

0xa7ce,	// (0x000a50b7) popup_sp_fs_action_menu_bg_pane_g5

0xa7d6,	// (0x000a50bf) popup_sp_fs_action_menu_bg_pane_g6

0xa7de,	// (0x000a50c7) popup_sp_fs_action_menu_bg_pane_g7

0xa7e6,	// (0x000a50cf) popup_sp_fs_action_menu_bg_pane_g8

0xa7ee,	// (0x000a50d7) popup_sp_fs_action_menu_bg_pane_g9

0xa7f6,	// (0x000a50df) popup_sp_fs_action_menu_bg_pane_g10

0xa7f6,	// (0x000a50df) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000a9a6f) popup_sp_fs_action_menu_bg_pane_g

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g3_g1

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t3_g3_g2

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a9b21) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a9b21) list_medium_line_x2_t3_g3_g

0x1dff,	// (0x0009c6e8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1dff,	// (0x0009c6e8) list_medium_line_x2_t3_g3_t1

0x1e14,	// (0x0009c6fd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e14,	// (0x0009c6fd) list_medium_line_x2_t3_g3_t2

0x1e26,	// (0x0009c70f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a9b28) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a9b28) list_medium_line_x2_t3_g3_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g2_g1

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a9b2f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a9b2f) list_medium_line_x2_t3_g2_g

0x1e3b,	// (0x0009c724) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e3b,	// (0x0009c724) list_medium_line_x2_t3_g2_t1

0x1e51,	// (0x0009c73a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e51,	// (0x0009c73a) list_medium_line_x2_t3_g2_t2

0x1e63,	// (0x0009c74c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e63,	// (0x0009c74c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a9b34) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a9b34) list_medium_line_x2_t3_g2_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t4_g4_g1

0x1e81,	// (0x0009c76a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e81,	// (0x0009c76a) list_medium_line_x2_t4_g4_g2

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t4_g4_g3

0x1e8d,	// (0x0009c776) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e8d,	// (0x0009c776) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a9b3b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a9b3b) list_medium_line_x2_t4_g4_g

0x1e99,	// (0x0009c782) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e99,	// (0x0009c782) list_medium_line_x2_t4_g4_t1

0x1eb0,	// (0x0009c799) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1eb0,	// (0x0009c799) list_medium_line_x2_t4_g4_t2

0x1ec5,	// (0x0009c7ae) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ec5,	// (0x0009c7ae) list_medium_line_x2_t4_g4_t3

0x1ed7,	// (0x0009c7c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1ed7,	// (0x0009c7c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a9b44) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a9b44) list_medium_line_x2_t4_g4_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g4_g1

0x1e81,	// (0x0009c76a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e81,	// (0x0009c76a) list_medium_line_x2_t2_g4_g2

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t2_g4_g3

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a9bab) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a9bab) list_medium_line_x2_t2_g4_g

0x3083,	// (0x0009d96c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3083,	// (0x0009d96c) list_medium_line_x2_t2_g4_t1

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a9bb4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a9bb4) list_medium_line_x2_t2_g4_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g3_g1

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t2_g3_g2

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a9b21) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a9b21) list_medium_line_x2_t2_g3_g

0x3098,	// (0x0009d981) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3098,	// (0x0009d981) list_medium_line_x2_t2_g3_t1

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a9bb9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a9bb9) list_medium_line_x2_t2_g3_t

0x3279,	// (0x0009db62) main_sp_fs_list_pane_ParamLimits

0x3279,	// (0x0009db62) main_sp_fs_list_pane

0x3285,	// (0x0009db6e) sp_fs_scroll_pane_ParamLimits

0x3285,	// (0x0009db6e) sp_fs_scroll_pane

0x3291,	// (0x0009db7a) list_medium_line_x2_t3_t1

0x32a1,	// (0x0009db8a) list_medium_line_x2_t3_t2

0x32af,	// (0x0009db98) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a9c04) list_medium_line_x2_t3_t

0x32bd,	// (0x0009dba6) list_medium_line_x3_t4_t1

0x32cd,	// (0x0009dbb6) list_medium_line_x3_t4_t2

0x32db,	// (0x0009dbc4) list_medium_line_x3_t4_t3

0x32af,	// (0x0009db98) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a9c0b) list_medium_line_x3_t4_t

0x32e9,	// (0x0009dbd2) list_medium_line_x4_t5_t1

0x32f9,	// (0x0009dbe2) list_medium_line_x4_t5_t2

0x32db,	// (0x0009dbc4) list_medium_line_x4_t5_t3

0x3307,	// (0x0009dbf0) list_medium_line_x4_t5_t4

0x32af,	// (0x0009db98) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a9c14) list_medium_line_x4_t5_t

0x1ddb,	// (0x0009c6c4) list_medium_line_t4_g4_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_t4_g4_g1

0x1e8d,	// (0x0009c776) list_medium_line_t4_g4_g2_ParamLimits

0x1e8d,	// (0x0009c776) list_medium_line_t4_g4_g2

0x3315,	// (0x0009dbfe) list_medium_line_t4_g4_g3_ParamLimits

0x3315,	// (0x0009dbfe) list_medium_line_t4_g4_g3

0x1df3,	// (0x0009c6dc) list_medium_line_t4_g4_g4_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a9c1f) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a9c1f) list_medium_line_t4_g4_g

0x3321,	// (0x0009dc0a) list_medium_line_t4_g4_t1_ParamLimits

0x3321,	// (0x0009dc0a) list_medium_line_t4_g4_t1

0x3336,	// (0x0009dc1f) list_medium_line_t4_g4_t2_ParamLimits

0x3336,	// (0x0009dc1f) list_medium_line_t4_g4_t2

0x334c,	// (0x0009dc35) list_medium_line_t4_g4_t3_ParamLimits

0x334c,	// (0x0009dc35) list_medium_line_t4_g4_t3

0x1e26,	// (0x0009c70f) list_medium_line_t4_g4_t4_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a9c28) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a9c28) list_medium_line_t4_g4_t

0x344d,	// (0x0009dd36) chi_dic_find_pane_g1

0x43b1,	// (0x0009ec9a) main_tport_pane

0x6d9a,	// (0x000a1683) list_medium_line_plain_t1

0x6e84,	// (0x000a176d) list_medium_line_t2_g2_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t2_g2_g1

0x6e90,	// (0x000a1779) list_medium_line_t2_g2_g2_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_t2_g2_g2

0x0001,

0xf876,	// (0x000aa15f) list_medium_line_t2_g2_g_ParamLimits

0xf876,	// (0x000aa15f) list_medium_line_t2_g2_g

0x6e9c,	// (0x000a1785) list_medium_line_t2_g2_t1_ParamLimits

0x6e9c,	// (0x000a1785) list_medium_line_t2_g2_t1

0x6eb3,	// (0x000a179c) list_medium_line_t2_g2_t2_ParamLimits

0x6eb3,	// (0x000a179c) list_medium_line_t2_g2_t2

0x0001,

0xf87b,	// (0x000aa164) list_medium_line_t2_g2_t_ParamLimits

0xf87b,	// (0x000aa164) list_medium_line_t2_g2_t

0xa0e7,	// (0x000a49d0) aid_sp_fs_list_icon_a_sm

0xa4b9,	// (0x000a4da2) aid_sp_fs_list_icon_d

0xb250,	// (0x000a5b39) aid_sp_fs_text_primary

0xa4c1,	// (0x000a4daa) aid_sp_fs_text_secondary

0x7553,	// (0x000a1e3c) list_medium_line

0x7553,	// (0x000a1e3c) list_medium_line_g2

0x7553,	// (0x000a1e3c) list_medium_line_g3

0x7553,	// (0x000a1e3c) list_medium_line_plain

0x7553,	// (0x000a1e3c) list_medium_line_plain_t2

0x7553,	// (0x000a1e3c) list_medium_line_plain_t3

0x7553,	// (0x000a1e3c) list_medium_line_right_icon

0x7553,	// (0x000a1e3c) list_medium_line_right_iconx2

0x7553,	// (0x000a1e3c) list_medium_line_t2

0x7553,	// (0x000a1e3c) list_medium_line_t2_g2

0x7553,	// (0x000a1e3c) list_medium_line_t2_g3

0x7553,	// (0x000a1e3c) list_medium_line_t2_right_icon

0x7553,	// (0x000a1e3c) list_medium_line_t2_right_iconx2

0x7553,	// (0x000a1e3c) list_medium_line_t3

0x7553,	// (0x000a1e3c) list_medium_line_t3_g2

0x7553,	// (0x000a1e3c) list_medium_line_t3_g3

0x7553,	// (0x000a1e3c) list_medium_line_t3_right_iconx2

0x755c,	// (0x000a1e45) list_medium_line_t4_g4

0x7565,	// (0x000a1e4e) list_medium_line_x2

0x7565,	// (0x000a1e4e) list_medium_line_x2_t2_g2

0x7565,	// (0x000a1e4e) list_medium_line_x2_t2_g3

0x7565,	// (0x000a1e4e) list_medium_line_x2_t2_g4

0x7565,	// (0x000a1e4e) list_medium_line_x2_t3

0x7565,	// (0x000a1e4e) list_medium_line_x2_t3_g2

0x7565,	// (0x000a1e4e) list_medium_line_x2_t3_g3

0x7565,	// (0x000a1e4e) list_medium_line_x2_t3_g4

0x7565,	// (0x000a1e4e) list_medium_line_x2_t4_g2

0x7565,	// (0x000a1e4e) list_medium_line_x2_t4_g4

0x756e,	// (0x000a1e57) list_medium_line_x3

0x756e,	// (0x000a1e57) list_medium_line_x3_t4

0x756e,	// (0x000a1e57) list_medium_line_x3_t4_g4

0x755c,	// (0x000a1e45) list_medium_line_x4_t4

0x755c,	// (0x000a1e45) list_medium_line_x4_t4_g7

0x755c,	// (0x000a1e45) list_medium_line_x4_t5

0x7577,	// (0x000a1e60) list_single_fs_dyc_pane_ParamLimits

0x7577,	// (0x000a1e60) list_single_fs_dyc_pane

0x1ddb,	// (0x0009c6c4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x4_t4_g7_g1

0x7cf7,	// (0x000a25e0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cf7,	// (0x000a25e0) list_medium_line_x4_t4_g7_g2

0x7d03,	// (0x000a25ec) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d03,	// (0x000a25ec) list_medium_line_x4_t4_g7_g3

0x7d12,	// (0x000a25fb) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d12,	// (0x000a25fb) list_medium_line_x4_t4_g7_g4

0x7d1e,	// (0x000a2607) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d1e,	// (0x000a2607) list_medium_line_x4_t4_g7_g5

0x7d2d,	// (0x000a2616) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d2d,	// (0x000a2616) list_medium_line_x4_t4_g7_g6

0x7d3c,	// (0x000a2625) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d3c,	// (0x000a2625) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa0e,	// (0x000aa2f7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa0e,	// (0x000aa2f7) list_medium_line_x4_t4_g7_g

0x7d48,	// (0x000a2631) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d48,	// (0x000a2631) list_medium_line_x4_t4_g7_t1

0x7d5d,	// (0x000a2646) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d5d,	// (0x000a2646) list_medium_line_x4_t4_g7_t2

0x7d72,	// (0x000a265b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d72,	// (0x000a265b) list_medium_line_x4_t4_g7_t3

0x7d87,	// (0x000a2670) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d87,	// (0x000a2670) list_medium_line_x4_t4_g7_t4

0x7d99,	// (0x000a2682) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d99,	// (0x000a2682) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa1d,	// (0x000aa306) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa1d,	// (0x000aa306) list_medium_line_x4_t4_g7_t

0x7dab,	// (0x000a2694) list_single_dyc_row_pane_ParamLimits

0x7dab,	// (0x000a2694) list_single_dyc_row_pane

0x8447,	// (0x000a2d30) call5_gesture_pane_ParamLimits

0x8447,	// (0x000a2d30) call5_gesture_pane

0x847b,	// (0x000a2d64) call5_windows_pane_ParamLimits

0x847b,	// (0x000a2d64) call5_windows_pane

0x84f2,	// (0x000a2ddb) call5_swipe_1_pane_cp_ParamLimits

0x84f2,	// (0x000a2ddb) call5_swipe_1_pane_cp

0x84fe,	// (0x000a2de7) call5_swipe_2_pane_cp_ParamLimits

0x84fe,	// (0x000a2de7) call5_swipe_2_pane_cp

0xb39f,	// (0x000a5c88) call5_image_pane_cp

0x850a,	// (0x000a2df3) popup_call5_audio_first_window_cp_ParamLimits

0x850a,	// (0x000a2df3) popup_call5_audio_first_window_cp

0xe5f0,	// (0x000a8ed9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5f0,	// (0x000a8ed9) call5_swipe_1_pane_g1_cp

0xe630,	// (0x000a8f19) call5_swipe_1_pane_g2_cp

0xe609,	// (0x000a8ef2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe609,	// (0x000a8ef2) call5_swipe_1_pane_t1_cp

0xe5f0,	// (0x000a8ed9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5f0,	// (0x000a8ed9) call5_swipe_2_pane_g1_cp

0xe638,	// (0x000a8f21) call5_swipe_2_pane_g2_cp

0xe640,	// (0x000a8f29) call5_swipe_2_pane_t1_cp_ParamLimits

0xe640,	// (0x000a8f29) call5_swipe_2_pane_t1_cp

0xa463,	// (0x000a4d4c) main_sp_fs_email_pane

0xe655,	// (0x000a8f3e) main_sp_fs_listscroll_pane_te

0xb259,	// (0x000a5b42) popup_sp_fs_action_menu_pane_ParamLimits

0xb259,	// (0x000a5b42) popup_sp_fs_action_menu_pane

0xcbc0,	// (0x000a74a9) bg_sp_fs_ctrlbar_pane_g1

0xe65e,	// (0x000a8f47) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe667,	// (0x000a8f50) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe670,	// (0x000a8f59) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc0,	// (0x000a74a9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0990,	// (0x0009b279) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a3,	// (0x000a728c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a3,	// (0x000a728c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe679,	// (0x000a8f62) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe679,	// (0x000a8f62) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe685,	// (0x000a8f6e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe685,	// (0x000a8f6e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0999,	// (0x0009b282) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0999,	// (0x0009b282) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe691,	// (0x000a8f7a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe691,	// (0x000a8f7a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8518,	// (0x000a2e01) list_medium_line_t2_right_icon_g1

0x8520,	// (0x000a2e09) list_medium_line_t2_right_icon_t1

0x8530,	// (0x000a2e19) list_medium_line_t2_right_icon_t2

0x0001,

0xfa99,	// (0x000aa382) list_medium_line_t2_right_icon_t

0xc7b6,	// (0x000a709f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7b6,	// (0x000a709f) bg_sp_fs_ctrlbar_pane

0x8595,	// (0x000a2e7e) main_sp_fs_ctrlbar_button_pane_cp01

0x859d,	// (0x000a2e86) main_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x000a8fcc) main_sp_fs_ctrlbar_pane_g1

0xe6ef,	// (0x000a8fd8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x09a3,	// (0x0009b28c) main_sp_fs_ctrlbar_pane_g

0xe6fb,	// (0x000a8fe4) main_sp_fs_ctrlbar_pane_t1

0x85a7,	// (0x000a2e90) main_sp_fs_ctrlbar_pane

0x85bd,	// (0x000a2ea6) main_sp_fs_listscroll_pane_te_cp01

0x85ce,	// (0x000a2eb7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85ce,	// (0x000a2eb7) popup_sp_fs_action_menu_pane_cp01

0xa463,	// (0x000a4d4c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa463,	// (0x000a4d4c) bg_sp_fs_highlight_list_pane_cp01

0xa0ef,	// (0x000a49d8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa0ef,	// (0x000a49d8) sp_fs_action_menu_list_gene_pane_g1

0xe72b,	// (0x000a9014) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe72b,	// (0x000a9014) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa9e,	// (0x000aa387) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa9e,	// (0x000aa387) sp_fs_action_menu_list_gene_pane_g

0xa0fe,	// (0x000a49e7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa0fe,	// (0x000a49e7) sp_fs_action_menu_list_gene_pane_t1

0xa116,	// (0x000a49ff) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa116,	// (0x000a49ff) sp_fs_action_menu_list_gene_pane

0xe738,	// (0x000a9021) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe738,	// (0x000a9021) popup_sp_fs_action_menu_bg_pane

0xa135,	// (0x000a4a1e) sp_fs_action_menu_list_pane_ParamLimits

0xa135,	// (0x000a4a1e) sp_fs_action_menu_list_pane

0xa4ca,	// (0x000a4db3) sp_fs_scroll_pane_cp01_ParamLimits

0xa4ca,	// (0x000a4db3) sp_fs_scroll_pane_cp01

0x85f8,	// (0x000a2ee1) list_medium_line_plain_t2_t1

0x8608,	// (0x000a2ef1) list_medium_line_plain_t2_t2

0x0001,

0xfaa3,	// (0x000aa38c) list_medium_line_plain_t2_t

0x8616,	// (0x000a2eff) list_medium_line_plain_t3_t1

0x8626,	// (0x000a2f0f) list_medium_line_plain_t3_t2

0x8634,	// (0x000a2f1d) list_medium_line_plain_t3_t3

0x0002,

0xfaa8,	// (0x000aa391) list_medium_line_plain_t3_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t2_g2_g1

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a9b2f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a9b2f) list_medium_line_x2_t2_g2_g

0x3321,	// (0x0009dc0a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3321,	// (0x0009dc0a) list_medium_line_x2_t2_g2_t1

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfaaf,	// (0x000aa398) list_medium_line_x2_t2_g2_t_ParamLimits

0xfaaf,	// (0x000aa398) list_medium_line_x2_t2_g2_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t4_g2_g1

0x8642,	// (0x000a2f2b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8642,	// (0x000a2f2b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfab4,	// (0x000aa39d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfab4,	// (0x000aa39d) list_medium_line_x2_t4_g2_g

0x8654,	// (0x000a2f3d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8654,	// (0x000a2f3d) list_medium_line_x2_t4_g2_t1

0x866e,	// (0x000a2f57) list_medium_line_x2_t4_g2_t2_ParamLimits

0x866e,	// (0x000a2f57) list_medium_line_x2_t4_g2_t2

0x8683,	// (0x000a2f6c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8683,	// (0x000a2f6c) list_medium_line_x2_t4_g2_t3

0x1e26,	// (0x0009c70f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfab9,	// (0x000aa3a2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfab9,	// (0x000aa3a2) list_medium_line_x2_t4_g2_t

0x8698,	// (0x000a2f81) list_medium_line_t3_right_iconx2_g1

0x8518,	// (0x000a2e01) list_medium_line_t3_right_iconx2_g2

0x86a0,	// (0x000a2f89) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfac2,	// (0x000aa3ab) list_medium_line_t3_right_iconx2_g

0x86a8,	// (0x000a2f91) list_medium_line_t3_right_iconx2_t1

0x86b8,	// (0x000a2fa1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfac9,	// (0x000aa3b2) list_medium_line_t3_right_iconx2_t

0x1ddb,	// (0x0009c6c4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x3_t4_g4_g1

0x1de7,	// (0x0009c6d0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x3_t4_g4_g2

0x1e8d,	// (0x0009c776) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e8d,	// (0x0009c776) list_medium_line_x3_t4_g4_g3

0x86c6,	// (0x000a2faf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86c6,	// (0x000a2faf) list_medium_line_x3_t4_g4_g4

0x0003,

0xface,	// (0x000aa3b7) list_medium_line_x3_t4_g4_g_ParamLimits

0xface,	// (0x000aa3b7) list_medium_line_x3_t4_g4_g

0x86d2,	// (0x000a2fbb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86d2,	// (0x000a2fbb) list_medium_line_x3_t4_g4_t1

0x86e9,	// (0x000a2fd2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86e9,	// (0x000a2fd2) list_medium_line_x3_t4_g4_t2

0x86fe,	// (0x000a2fe7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86fe,	// (0x000a2fe7) list_medium_line_x3_t4_g4_t3

0x8713,	// (0x000a2ffc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8713,	// (0x000a2ffc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfad7,	// (0x000aa3c0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfad7,	// (0x000aa3c0) list_medium_line_x3_t4_g4_t

0x8730,	// (0x000a3019) list_single_dyc_row_text_pane_t1_ParamLimits

0x8730,	// (0x000a3019) list_single_dyc_row_text_pane_t1

0x8767,	// (0x000a3050) list_single_dyc_row_text_pane_t2_ParamLimits

0x8767,	// (0x000a3050) list_single_dyc_row_text_pane_t2

0xa155,	// (0x000a4a3e) list_single_dyc_row_text_pane_t3_ParamLimits

0xa155,	// (0x000a4a3e) list_single_dyc_row_text_pane_t3

0x0005,

0xfae0,	// (0x000aa3c9) list_single_dyc_row_text_pane_t_ParamLimits

0xfae0,	// (0x000aa3c9) list_single_dyc_row_text_pane_t

0xa179,	// (0x000a4a62) list_single_dyc_row_pane_g1_ParamLimits

0xa179,	// (0x000a4a62) list_single_dyc_row_pane_g1

0xa185,	// (0x000a4a6e) list_single_dyc_row_pane_g2_ParamLimits

0xa185,	// (0x000a4a6e) list_single_dyc_row_pane_g2

0xa191,	// (0x000a4a7a) list_single_dyc_row_pane_g3_ParamLimits

0xa191,	// (0x000a4a7a) list_single_dyc_row_pane_g3

0xa19d,	// (0x000a4a86) list_single_dyc_row_pane_g4_ParamLimits

0xa19d,	// (0x000a4a86) list_single_dyc_row_pane_g4

0x0003,

0xfaed,	// (0x000aa3d6) list_single_dyc_row_pane_g_ParamLimits

0xfaed,	// (0x000aa3d6) list_single_dyc_row_pane_g

0xa1a9,	// (0x000a4a92) list_single_dyc_row_text_pane_ParamLimits

0xa1a9,	// (0x000a4a92) list_single_dyc_row_text_pane

0x9aaf,	// (0x000a4398) bg_sp_fs_scroll_pane

0xe746,	// (0x000a902f) thumb_sp_fs_scroll_pane

0x6e84,	// (0x000a176d) list_medium_line_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_g1

0x888a,	// (0x000a3173) list_medium_line_t1_ParamLimits

0x888a,	// (0x000a3173) list_medium_line_t1

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_g1

0x1de7,	// (0x0009c6d0) list_medium_line_x2_g2_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_g2

0x0001,

0xfaf6,	// (0x000aa3df) list_medium_line_x2_g_ParamLimits

0xfaf6,	// (0x000aa3df) list_medium_line_x2_g

0xa1c8,	// (0x000a4ab1) list_medium_line_x2_t1_ParamLimits

0xa1c8,	// (0x000a4ab1) list_medium_line_x2_t1

0x1ddb,	// (0x0009c6c4) list_medium_line_x3_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x3_g1

0x1de7,	// (0x0009c6d0) list_medium_line_x3_g2_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x3_g2

0x0001,

0xfaf6,	// (0x000aa3df) list_medium_line_x3_g_ParamLimits

0xfaf6,	// (0x000aa3df) list_medium_line_x3_g

0xa1c8,	// (0x000a4ab1) list_medium_line_x3_t1_ParamLimits

0xa1c8,	// (0x000a4ab1) list_medium_line_x3_t1

0xe74f,	// (0x000a9038) thumb_sp_fs_scroll_pane_g1

0xe758,	// (0x000a9041) thumb_sp_fs_scroll_pane_g2

0xe761,	// (0x000a904a) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a0a,	// (0x0009b2f3) thumb_sp_fs_scroll_pane_g

0xe74f,	// (0x000a9038) bg_sp_fs_scroll_pane_g1

0xe758,	// (0x000a9041) bg_sp_fs_scroll_pane_g2

0xe761,	// (0x000a904a) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a0a,	// (0x0009b2f3) bg_sp_fs_scroll_pane_g

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ddb,	// (0x0009c6c4) list_medium_line_x2_t3_g4_g1

0x1e81,	// (0x0009c76a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e81,	// (0x0009c76a) list_medium_line_x2_t3_g4_g2

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1de7,	// (0x0009c6d0) list_medium_line_x2_t3_g4_g3

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1df3,	// (0x0009c6dc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a9bab) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a9bab) list_medium_line_x2_t3_g4_g

0x889f,	// (0x000a3188) list_medium_line_x2_t3_g4_t1_ParamLimits

0x889f,	// (0x000a3188) list_medium_line_x2_t3_g4_t1

0x88b5,	// (0x000a319e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88b5,	// (0x000a319e) list_medium_line_x2_t3_g4_t2

0x1e26,	// (0x0009c70f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e26,	// (0x0009c70f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfafb,	// (0x000aa3e4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfafb,	// (0x000aa3e4) list_medium_line_x2_t3_g4_t

0x6e84,	// (0x000a176d) list_medium_line_g2_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_g2_g1

0x6e90,	// (0x000a1779) list_medium_line_g2_g2_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_g2_g2

0x0001,

0xf876,	// (0x000aa15f) list_medium_line_g2_g_ParamLimits

0xf876,	// (0x000aa15f) list_medium_line_g2_g

0x88ce,	// (0x000a31b7) list_medium_line_g2_t1_ParamLimits

0x88ce,	// (0x000a31b7) list_medium_line_g2_t1

0x6e84,	// (0x000a176d) list_medium_line_t3_g2_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t3_g2_g1

0x6e90,	// (0x000a1779) list_medium_line_t3_g2_g2_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_t3_g2_g2

0x0001,

0xf876,	// (0x000aa15f) list_medium_line_t3_g2_g_ParamLimits

0xf876,	// (0x000aa15f) list_medium_line_t3_g2_g

0x88e3,	// (0x000a31cc) list_medium_line_t3_g2_t1_ParamLimits

0x88e3,	// (0x000a31cc) list_medium_line_t3_g2_t1

0x88fa,	// (0x000a31e3) list_medium_line_t3_g2_t2_ParamLimits

0x88fa,	// (0x000a31e3) list_medium_line_t3_g2_t2

0x890f,	// (0x000a31f8) list_medium_line_t3_g2_t3_ParamLimits

0x890f,	// (0x000a31f8) list_medium_line_t3_g2_t3

0x0002,

0xfb02,	// (0x000aa3eb) list_medium_line_t3_g2_t_ParamLimits

0xfb02,	// (0x000aa3eb) list_medium_line_t3_g2_t

0x8518,	// (0x000a2e01) list_medium_line_right_icon_g1

0x8924,	// (0x000a320d) list_medium_line_right_icon_t1

0x6e84,	// (0x000a176d) list_medium_line_t2_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t2_g1

0x8932,	// (0x000a321b) list_medium_line_t2_t1_ParamLimits

0x8932,	// (0x000a321b) list_medium_line_t2_t1

0x894c,	// (0x000a3235) list_medium_line_t2_t2_ParamLimits

0x894c,	// (0x000a3235) list_medium_line_t2_t2

0x0001,

0xfb09,	// (0x000aa3f2) list_medium_line_t2_t_ParamLimits

0xfb09,	// (0x000aa3f2) list_medium_line_t2_t

0x6e84,	// (0x000a176d) list_medium_line_t3_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t3_g1

0x8961,	// (0x000a324a) list_medium_line_t3_t1_ParamLimits

0x8961,	// (0x000a324a) list_medium_line_t3_t1

0x897b,	// (0x000a3264) list_medium_line_t3_t2_ParamLimits

0x897b,	// (0x000a3264) list_medium_line_t3_t2

0x8990,	// (0x000a3279) list_medium_line_t3_t3_ParamLimits

0x8990,	// (0x000a3279) list_medium_line_t3_t3

0x0002,

0xfb0e,	// (0x000aa3f7) list_medium_line_t3_t_ParamLimits

0xfb0e,	// (0x000aa3f7) list_medium_line_t3_t

0x6e84,	// (0x000a176d) list_medium_line_g3_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_g3_g1

0x89a5,	// (0x000a328e) list_medium_line_g3_g2_ParamLimits

0x89a5,	// (0x000a328e) list_medium_line_g3_g2

0x6e90,	// (0x000a1779) list_medium_line_g3_g3_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_g3_g3

0x0002,

0xfb15,	// (0x000aa3fe) list_medium_line_g3_g_ParamLimits

0xfb15,	// (0x000aa3fe) list_medium_line_g3_g

0x89b1,	// (0x000a329a) list_medium_line_g3_t1_ParamLimits

0x89b1,	// (0x000a329a) list_medium_line_g3_t1

0x6e84,	// (0x000a176d) list_medium_line_t2_g3_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t2_g3_g1

0x89a5,	// (0x000a328e) list_medium_line_t2_g3_g2_ParamLimits

0x89a5,	// (0x000a328e) list_medium_line_t2_g3_g2

0x6e90,	// (0x000a1779) list_medium_line_t2_g3_g3_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_t2_g3_g3

0x0002,

0xfb15,	// (0x000aa3fe) list_medium_line_t2_g3_g_ParamLimits

0xfb15,	// (0x000aa3fe) list_medium_line_t2_g3_g

0x89c6,	// (0x000a32af) list_medium_line_t2_g3_t1_ParamLimits

0x89c6,	// (0x000a32af) list_medium_line_t2_g3_t1

0x89e0,	// (0x000a32c9) list_medium_line_t2_g3_t2_ParamLimits

0x89e0,	// (0x000a32c9) list_medium_line_t2_g3_t2

0x0001,

0xfb1c,	// (0x000aa405) list_medium_line_t2_g3_t_ParamLimits

0xfb1c,	// (0x000aa405) list_medium_line_t2_g3_t

0x6e84,	// (0x000a176d) list_medium_line_t3_g3_g1_ParamLimits

0x6e84,	// (0x000a176d) list_medium_line_t3_g3_g1

0x89a5,	// (0x000a328e) list_medium_line_t3_g3_g2_ParamLimits

0x89a5,	// (0x000a328e) list_medium_line_t3_g3_g2

0x6e90,	// (0x000a1779) list_medium_line_t3_g3_g3_ParamLimits

0x6e90,	// (0x000a1779) list_medium_line_t3_g3_g3

0x0002,

0xfb15,	// (0x000aa3fe) list_medium_line_t3_g3_g_ParamLimits

0xfb15,	// (0x000aa3fe) list_medium_line_t3_g3_g

0x89f5,	// (0x000a32de) list_medium_line_t3_g3_t1_ParamLimits

0x89f5,	// (0x000a32de) list_medium_line_t3_g3_t1

0x8a0e,	// (0x000a32f7) list_medium_line_t3_g3_t2_ParamLimits

0x8a0e,	// (0x000a32f7) list_medium_line_t3_g3_t2

0x8a24,	// (0x000a330d) list_medium_line_t3_g3_t3_ParamLimits

0x8a24,	// (0x000a330d) list_medium_line_t3_g3_t3

0x0002,

0xfb21,	// (0x000aa40a) list_medium_line_t3_g3_t_ParamLimits

0xfb21,	// (0x000aa40a) list_medium_line_t3_g3_t

0x8698,	// (0x000a2f81) list_medium_line_right_iconx2_g1

0x8518,	// (0x000a2e01) list_medium_line_right_iconx2_g2

0x0001,

0xfb28,	// (0x000aa411) list_medium_line_right_iconx2_g

0x8a3a,	// (0x000a3323) list_medium_line_right_iconx2_t1

0x8698,	// (0x000a2f81) list_medium_line_t2_right_iconx2_g1

0x8518,	// (0x000a2e01) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb28,	// (0x000aa411) list_medium_line_t2_right_iconx2_g

0x8a48,	// (0x000a3331) list_medium_line_t2_right_iconx2_t1

0x8a58,	// (0x000a3341) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb2d,	// (0x000aa416) list_medium_line_t2_right_iconx2_t

0x8a66,	// (0x000a334f) list_medium_line_x4_t4_t1

0x8a74,	// (0x000a335d) list_medium_line_x4_t4_t2

0x8a84,	// (0x000a336d) list_medium_line_x4_t4_t3

0x8a94,	// (0x000a337d) list_medium_line_x4_t4_t4

0x0003,

0xfb32,	// (0x000aa41b) list_medium_line_x4_t4_t

0x8ace,	// (0x000a33b7) tport_appsw_pane_ParamLimits

0x8ace,	// (0x000a33b7) tport_appsw_pane

0x8adc,	// (0x000a33c5) tport_contact_pane_ParamLimits

0x8adc,	// (0x000a33c5) tport_contact_pane

0x8aec,	// (0x000a33d5) tport_listscroll_pane_ParamLimits

0x8aec,	// (0x000a33d5) tport_listscroll_pane

0x8afc,	// (0x000a33e5) cell_tport_appsw_pane_ParamLimits

0x8afc,	// (0x000a33e5) cell_tport_appsw_pane

0xce85,	// (0x000a776e) tport_appsw_pane_g1_ParamLimits

0xce85,	// (0x000a776e) tport_appsw_pane_g1

0xe76a,	// (0x000a9053) tport_contact_pane_g1

0xe0dd,	// (0x000a89c6) tport_contact_pane_t1

0xe773,	// (0x000a905c) tport_contact_pane_t2

0x0001,

0x0a51,	// (0x0009b33a) tport_contact_pane_t

0xe781,	// (0x000a906a) list_tport_pane

0xe78a,	// (0x000a9073) scroll_pane_cp_030

0x8b2f,	// (0x000a3418) cell_tport_appsw_pane_g1

0x8b3f,	// (0x000a3428) cell_tport_appsw_pane_t1

0x8b4d,	// (0x000a3436) grid_highlight_pane_cp019

0x8b55,	// (0x000a343e) list_tport_double_graphic_pane_ParamLimits

0x8b55,	// (0x000a343e) list_tport_double_graphic_pane

0xa463,	// (0x000a4d4c) list_highlight_pane_cp023_ParamLimits

0xa463,	// (0x000a4d4c) list_highlight_pane_cp023

0x8b67,	// (0x000a3450) list_tport_double_graphic_pane_g1_ParamLimits

0x8b67,	// (0x000a3450) list_tport_double_graphic_pane_g1

0x8b74,	// (0x000a345d) list_tport_double_graphic_pane_t1_ParamLimits

0x8b74,	// (0x000a345d) list_tport_double_graphic_pane_t1

0x8b89,	// (0x000a3472) list_tport_double_graphic_pane_t2_ParamLimits

0x8b89,	// (0x000a3472) list_tport_double_graphic_pane_t2

0x0001,

0xfb42,	// (0x000aa42b) list_tport_double_graphic_pane_t_ParamLimits

0xfb42,	// (0x000aa42b) list_tport_double_graphic_pane_t

0x9aaf,	// (0x000a4398) main_cale_note_pane

0x6655,	// (0x000a0f3e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6655,	// (0x000a0f3e) cell_vitu2_function_top_wide_pane_cp01

0x8112,	// (0x000a29fb) wait_bar_pane_cp05_ParamLimits

0xa463,	// (0x000a4d4c) listscroll_cmail_pane

0xe793,	// (0x000a907c) list_cmail_pane

0x8b9b,	// (0x000a3484) list_cmail_body_pane

0x8bc2,	// (0x000a34ab) list_single_cmail_header_caption_pane

0x8bf6,	// (0x000a34df) list_single_cmail_header_detail_pane_ParamLimits

0x8bf6,	// (0x000a34df) list_single_cmail_header_detail_pane

0xe7a3,	// (0x000a908c) list_single_cmail_header_caption_pane_t1

0x8c31,	// (0x000a351a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c31,	// (0x000a351a) list_single_cmail_header_detail_pane_g1

0xa4f0,	// (0x000a4dd9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa4f0,	// (0x000a4dd9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb47,	// (0x000aa430) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb47,	// (0x000aa430) list_single_cmail_header_detail_pane_g

0x8c47,	// (0x000a3530) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8c47,	// (0x000a3530) list_single_cmail_header_detail_pane_t1

0x8c83,	// (0x000a356c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c83,	// (0x000a356c) list_single_cmail_header_editor_pane_bg

0xe7c7,	// (0x000a90b0) list_cmail_body_pane_g1

0xe7d0,	// (0x000a90b9) list_cmail_body_pane_t1

0xd623,	// (0x000a7f0c) list_single_cmail_header_editor_pane_bg_g1

0xab23,	// (0x000a540c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd633,	// (0x000a7f1c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd62b,	// (0x000a7f14) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd859,	// (0x000a8142) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd653,	// (0x000a7f3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd643,	// (0x000a7f2c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd64b,	// (0x000a7f34) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab03,	// (0x000a53ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c9a,	// (0x000a3583) calenote_gesture_pane_ParamLimits

0x8c9a,	// (0x000a3583) calenote_gesture_pane

0x8cb4,	// (0x000a359d) calenote_window_pane_ParamLimits

0x8cb4,	// (0x000a359d) calenote_window_pane

0xe7de,	// (0x000a90c7) popup_note_window_cp01

0x8ccc,	// (0x000a35b5) calenote_swipe_1_pane_ParamLimits

0x8ccc,	// (0x000a35b5) calenote_swipe_1_pane

0x84fe,	// (0x000a2de7) calenote_swipe_2_pane_ParamLimits

0x84fe,	// (0x000a2de7) calenote_swipe_2_pane

0xe5f0,	// (0x000a8ed9) calenote_swipe_1_pane_g1_ParamLimits

0xe5f0,	// (0x000a8ed9) calenote_swipe_1_pane_g1

0xe5fd,	// (0x000a8ee6) calenote_swipe_1_pane_g2_ParamLimits

0xe5fd,	// (0x000a8ee6) calenote_swipe_1_pane_g2

0x0001,

0x0986,	// (0x0009b26f) calenote_swipe_1_pane_g_ParamLimits

0x0986,	// (0x0009b26f) calenote_swipe_1_pane_g

0xe7f0,	// (0x000a90d9) calenote_swipe_1_pane_t1_ParamLimits

0xe7f0,	// (0x000a90d9) calenote_swipe_1_pane_t1

0xe5f0,	// (0x000a8ed9) calenote_swipe_2_pane_g1_ParamLimits

0xe5f0,	// (0x000a8ed9) calenote_swipe_2_pane_g1

0xe80f,	// (0x000a90f8) calenote_swipe_2_pane_g2_ParamLimits

0xe80f,	// (0x000a90f8) calenote_swipe_2_pane_g2

0x0001,

0x0a6e,	// (0x0009b357) calenote_swipe_2_pane_g_ParamLimits

0x0a6e,	// (0x0009b357) calenote_swipe_2_pane_g

0xe81b,	// (0x000a9104) calenote_swipe_2_pane_t1_ParamLimits

0xe81b,	// (0x000a9104) calenote_swipe_2_pane_t1

0x9aaf,	// (0x000a4398) main_mup_navstr_pane

0x538f,	// (0x0009fc78) main_mup3_pane_t7_ParamLimits

0x538f,	// (0x0009fc78) main_mup3_pane_t7

0x5db9,	// (0x000a06a2) main_mp4_pane_g6_ParamLimits

0x5db9,	// (0x000a06a2) main_mp4_pane_g6

0x6139,	// (0x000a0a22) main_image3_pane_t4_ParamLimits

0x6139,	// (0x000a0a22) main_image3_pane_t4

0x8cdf,	// (0x000a35c8) popup_navstr_preview_pane_ParamLimits

0x8cdf,	// (0x000a35c8) popup_navstr_preview_pane

0x8ceb,	// (0x000a35d4) scroll_navstr_pane_ParamLimits

0x8ceb,	// (0x000a35d4) scroll_navstr_pane

0x9aaf,	// (0x000a4398) bg_popup_preview_window_pane_cp04

0xe842,	// (0x000a912b) popup_navstr_preview_pane_t1

0x8cf7,	// (0x000a35e0) scroll_navstr_pane_g1_ParamLimits

0x8cf7,	// (0x000a35e0) scroll_navstr_pane_g1

0x8d04,	// (0x000a35ed) scroll_navstr_pane_t1_ParamLimits

0x8d04,	// (0x000a35ed) scroll_navstr_pane_t1

0xe7e7,	// (0x000a90d0) bg_button_pane_cp014

0xe7e7,	// (0x000a90d0) bg_button_pane_cp030

0x83ed,	// (0x000a2cd6) list_double_fisheye_pane_g4_ParamLimits

0x83ed,	// (0x000a2cd6) list_double_fisheye_pane_g4

0x83f9,	// (0x000a2ce2) list_double_fisheye_pane_g5_ParamLimits

0x83f9,	// (0x000a2ce2) list_double_fisheye_pane_g5

0xc2a9,	// (0x000a6b92) sp_fs_scroll_pane_cp03

0xe6e3,	// (0x000a8fcc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6ef,	// (0x000a8fd8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x09a3,	// (0x0009b28c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6fb,	// (0x000a8fe4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe79b,	// (0x000a9084) sp_fs_scroll_pane_cp02

0xa819,	// (0x000a5102) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa819,	// (0x000a5102) popup_sp_fs_calendar_preview_list_single_pane

0x9aaf,	// (0x000a4398) main_cam6_pano_pane

0x4395,	// (0x0009ec7e) main_mup3_pane_ParamLimits

0x9aaf,	// (0x000a4398) main_phacti_pane

0x7fe7,	// (0x000a28d0) bg_button_pane_cp11

0x7fff,	// (0x000a28e8) main_mobtv_info_pane_g2_ParamLimits

0x7fff,	// (0x000a28e8) main_mobtv_info_pane_g2

0x0001,

0xfa46,	// (0x000aa32f) main_mobtv_info_pane_g_ParamLimits

0xfa46,	// (0x000aa32f) main_mobtv_info_pane_g

0x81b1,	// (0x000a2a9a) sc_clock_pane_t5_ParamLimits

0x81b1,	// (0x000a2a9a) sc_clock_pane_t5

0x8254,	// (0x000a2b3d) main_radioblah_pane_g1_ParamLimits

0xe521,	// (0x000a8e0a) main_radioblah_pane_t3_ParamLimits

0xe521,	// (0x000a8e0a) main_radioblah_pane_t3

0xe539,	// (0x000a8e22) main_radioblah_pane_t4_ParamLimits

0xe539,	// (0x000a8e22) main_radioblah_pane_t4

0x8272,	// (0x000a2b5b) main_radioblah_text_pane_ParamLimits

0x8272,	// (0x000a2b5b) main_radioblah_text_pane

0x827f,	// (0x000a2b68) main_radioblah_info_pane_g1_ParamLimits

0x8314,	// (0x000a2bfd) main_radioblah_info_pane_t4_ParamLimits

0x8314,	// (0x000a2bfd) main_radioblah_info_pane_t4

0xa463,	// (0x000a4d4c) main_sp_fs_calendar_pane

0x8d16,	// (0x000a35ff) main_phacti_pane_g1

0x8d1e,	// (0x000a3607) phacti_note_pane_ParamLimits

0x8d1e,	// (0x000a3607) phacti_note_pane

0xe859,	// (0x000a9142) phacti_term_pane_ParamLimits

0xe859,	// (0x000a9142) phacti_term_pane

0xe87c,	// (0x000a9165) phacti_note_pane_t1_ParamLimits

0xe87c,	// (0x000a9165) phacti_note_pane_t1

0xa202,	// (0x000a4aeb) phacti_term_pane_g1

0xa20a,	// (0x000a4af3) phacti_term_pane_t1_ParamLimits

0xa20a,	// (0x000a4af3) phacti_term_pane_t1

0xe893,	// (0x000a917c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe89b,	// (0x000a9184) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb58,	// (0x000aa441) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a3,	// (0x000a918c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a3,	// (0x000a918c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8b9,	// (0x000a91a2) aid_popup_sp_fs_bg_corner_pane

0xcbc0,	// (0x000a74a9) popup_sp_fs_calendar_preview_bg_pane_g1

0x9aaf,	// (0x000a4398) popup_sp_fs_calendar_preview_bg_pane

0xa234,	// (0x000a4b1d) popup_sp_fs_calendar_preview_list_pane

0xc7b6,	// (0x000a709f) bg_main_sp_fs_cale_pane_ParamLimits

0xc7b6,	// (0x000a709f) bg_main_sp_fs_cale_pane

0xa23c,	// (0x000a4b25) listscroll_cale_mrui_pane_ParamLimits

0xa23c,	// (0x000a4b25) listscroll_cale_mrui_pane

0xa251,	// (0x000a4b3a) listscroll_sp_fs_schedule_track_pane

0xa25a,	// (0x000a4b43) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa25a,	// (0x000a4b43) main_sp_fs_ctrlbar_pane_cp01

0xe8c1,	// (0x000a91aa) main_sp_fs_ribbon_pane

0xa26d,	// (0x000a4b56) popup_sp_fs_cale_preview_window

0x8d81,	// (0x000a366a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d81,	// (0x000a366a) list_single_sp_fs_schedule_track_pane

0xe86e,	// (0x000a9157) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe86e,	// (0x000a9157) bg_sp_fs_highlight_list_pane_cp03

0x8daf,	// (0x000a3698) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8daf,	// (0x000a3698) list_single_sp_fs_schedule_track_pane_g1

0x8dbb,	// (0x000a36a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dbb,	// (0x000a36a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb5d,	// (0x000aa446) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb5d,	// (0x000aa446) list_single_sp_fs_schedule_track_pane_g

0x8dc7,	// (0x000a36b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dc7,	// (0x000a36b0) list_single_sp_fs_schedule_track_pane_t1

0x8ddf,	// (0x000a36c8) sp_fs_schedule_track_pane_ParamLimits

0x8ddf,	// (0x000a36c8) sp_fs_schedule_track_pane

0xe8c9,	// (0x000a91b2) sp_fs_schedule_track_pane_g1

0xe8d1,	// (0x000a91ba) sp_fs_schedule_track_pane_g2

0xe8d9,	// (0x000a91c2) sp_fs_schedule_track_pane_g3

0xe8e1,	// (0x000a91ca) sp_fs_schedule_track_pane_g4

0xe8e9,	// (0x000a91d2) sp_fs_schedule_track_pane_g5

0x0004,

0xfb62,	// (0x000aa44b) sp_fs_schedule_track_pane_g

0xd623,	// (0x000a7f0c) bg_sp_fs_schedule_viewer_highlight_g1

0xab23,	// (0x000a540c) bg_sp_fs_schedule_viewer_highlight_g2

0xd62b,	// (0x000a7f14) bg_sp_fs_schedule_viewer_highlight_g3

0xd633,	// (0x000a7f1c) bg_sp_fs_schedule_viewer_highlight_g4

0xd859,	// (0x000a8142) bg_sp_fs_schedule_viewer_highlight_g5

0xd643,	// (0x000a7f2c) bg_sp_fs_schedule_viewer_highlight_g6

0xd64b,	// (0x000a7f34) bg_sp_fs_schedule_viewer_highlight_g7

0xd653,	// (0x000a7f3c) bg_sp_fs_schedule_viewer_highlight_g8

0xab03,	// (0x000a53ec) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb6d,	// (0x000aa456) bg_sp_fs_schedule_viewer_highlight_g

0x9aaf,	// (0x000a4398) bg_main_sp_fs_ribbon_pane

0x8def,	// (0x000a36d8) main_sp_fs_ribbon_pane_g1

0xe8f1,	// (0x000a91da) main_sp_fs_ribbon_pane_t1

0x8df8,	// (0x000a36e1) main_sp_fs_ribbon_pane_t2

0xe900,	// (0x000a91e9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb80,	// (0x000aa469) main_sp_fs_ribbon_pane_t

0xe90f,	// (0x000a91f8) main_sp_fs_ribbon_scheduler_pane

0xe917,	// (0x000a9200) bg_main_sp_fs_ribbon_pane_g1

0xe920,	// (0x000a9209) bg_main_sp_fs_ribbon_pane_g2

0xe929,	// (0x000a9212) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb87,	// (0x000aa470) bg_main_sp_fs_ribbon_pane_g

0xe931,	// (0x000a921a) main_sp_fs_ribbon_scheduler_pane_g1

0xe93a,	// (0x000a9223) main_sp_fs_ribbon_scheduler_pane_g2

0xe943,	// (0x000a922c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb8e,	// (0x000aa477) main_sp_fs_ribbon_scheduler_pane_g

0xe94c,	// (0x000a9235) list_cale_mrui_pane

0x8e09,	// (0x000a36f2) sp_fs_scroll_pane_cp07_ParamLimits

0x8e09,	// (0x000a36f2) sp_fs_scroll_pane_cp07

0x8e25,	// (0x000a370e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e25,	// (0x000a370e) bg_sp_fs_schedule_viewer_highlight

0xe959,	// (0x000a9242) list_single_sp_fs_schedule_track_pane_cp01

0xe961,	// (0x000a924a) list_sp_fs_schedule_track_pane

0xe969,	// (0x000a9252) sp_fs_scroll_pane_cp06_ParamLimits

0xe969,	// (0x000a9252) sp_fs_scroll_pane_cp06

0xcbc0,	// (0x000a74a9) bgmain_sp_fs_calendar_pane_g1

0x8e32,	// (0x000a371b) list_single_cale_mrui_pane_ParamLimits

0x8e32,	// (0x000a371b) list_single_cale_mrui_pane

0xa27f,	// (0x000a4b68) list_single_cale_mrui_row_pane_ParamLimits

0xa27f,	// (0x000a4b68) list_single_cale_mrui_row_pane

0xa28c,	// (0x000a4b75) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa28c,	// (0x000a4b75) list_single_cale_mrui_row_pane_g1

0xa2c4,	// (0x000a4bad) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa2c4,	// (0x000a4bad) list_single_cale_mrui_row_pane_t1

0x8e63,	// (0x000a374c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e63,	// (0x000a374c) list_single_cale_mrui_row_pane_t2

0xa2d6,	// (0x000a4bbf) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa2d6,	// (0x000a4bbf) list_single_cale_mrui_row_pane_t3

0xa305,	// (0x000a4bee) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa305,	// (0x000a4bee) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb9c,	// (0x000aa485) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb9c,	// (0x000aa485) list_single_cale_mrui_row_pane_t

0x8ec9,	// (0x000a37b2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ec9,	// (0x000a37b2) list_single_cmail_header_editor_pane_bg_cp01

0x8eeb,	// (0x000a37d4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8eeb,	// (0x000a37d4) list_single_cmail_header_editor_pane_bg_cp02

0x8f07,	// (0x000a37f0) main_radioblah_text_pane_t1_ParamLimits

0x8f07,	// (0x000a37f0) main_radioblah_text_pane_t1

0xe988,	// (0x000a9271) cam6_indi_pane_cp01

0xe990,	// (0x000a9279) cam6_mode_pane_cp01

0xe998,	// (0x000a9281) cam6_pano_pane

0xe9a1,	// (0x000a928a) cam6_zoom_pane_cp01

0xe9a9,	// (0x000a9292) cam6_pano_image_pane

0xe9b4,	// (0x000a929d) cam6_pano_pane_g1

0xe284,	// (0x000a8b6d) cam6_pano_pane_g2

0xe9bd,	// (0x000a92a6) cam6_pano_pane_g3

0xe9c6,	// (0x000a92af) cam6_pano_pane_g4

0xd17e,	// (0x000a7a67) cam6_pano_pane_g5

0xe9cf,	// (0x000a92b8) cam6_pano_pane_g6

0xe9d9,	// (0x000a92c2) cam6_pano_pane_g7

0xe9e1,	// (0x000a92ca) cam6_pano_pane_g8

0xe9ea,	// (0x000a92d3) cam6_pano_pane_g9

0x0008,

0xfba5,	// (0x000aa48e) cam6_pano_pane_g

0x9aaf,	// (0x000a4398) main_browser_tag_pane

0xe83a,	// (0x000a9123) grid_navstr_albumart_pane

0xe9f5,	// (0x000a92de) cell_navstr_albumart_pane_ParamLimits

0xe9f5,	// (0x000a92de) cell_navstr_albumart_pane

0xb500,	// (0x000a5de9) cell_navstr_albumart_pane_g1

0xc5c7,	// (0x000a6eb0) cell_navstr_albumart_pane_g2

0xc5d7,	// (0x000a6ec0) cell_navstr_albumart_pane_g3

0xc5cf,	// (0x000a6eb8) cell_navstr_albumart_pane_g4

0x0003,

0x0ad8,	// (0x0009b3c1) cell_navstr_albumart_pane_g

0x8f22,	// (0x000a380b) bt_list_pane_ParamLimits

0x8f22,	// (0x000a380b) bt_list_pane

0xea17,	// (0x000a9300) bt_list_pane_t1

0xea26,	// (0x000a930f) bt_list_pane_t2

0x0001,

0xfbb8,	// (0x000aa4a1) bt_list_pane_t

0x9aaf,	// (0x000a4398) main_cale_prevew_pane

0x8f46,	// (0x000a382f) popup_cale_preview_window_ParamLimits

0x8f46,	// (0x000a382f) popup_cale_preview_window

0xa463,	// (0x000a4d4c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa463,	// (0x000a4d4c) bg_popup_preview_window_pane_cp05

0xea35,	// (0x000a931e) list_cale_preview_pane_ParamLimits

0xea35,	// (0x000a931e) list_cale_preview_pane

0xea41,	// (0x000a932a) list_double_cale_preview_pane_ParamLimits

0xea41,	// (0x000a932a) list_double_cale_preview_pane

0xea53,	// (0x000a933c) list_single_cale_preview_pane_ParamLimits

0xea53,	// (0x000a933c) list_single_cale_preview_pane

0xea67,	// (0x000a9350) list_single_cale_preview_pane_g1

0xea6f,	// (0x000a9358) list_single_cale_preview_pane_t1_ParamLimits

0xea6f,	// (0x000a9358) list_single_cale_preview_pane_t1

0xea84,	// (0x000a936d) list_double_cale_preview_pane_g1

0xea8c,	// (0x000a9375) list_double_cale_preview_pane_t1_ParamLimits

0xea8c,	// (0x000a9375) list_double_cale_preview_pane_t1

0xeaa1,	// (0x000a938a) list_double_cale_preview_pane_t2_ParamLimits

0xeaa1,	// (0x000a938a) list_double_cale_preview_pane_t2

0x0001,

0xfbbd,	// (0x000aa4a6) list_double_cale_preview_pane_t_ParamLimits

0xfbbd,	// (0x000aa4a6) list_double_cale_preview_pane_t

0x9aaf,	// (0x000a4398) main_ezdial_pane

0xa463,	// (0x000a4d4c) main_sp_fs_email_pane_ParamLimits

0x853e,	// (0x000a2e27) cmail_ddmenu_btn01_pane_ParamLimits

0x853e,	// (0x000a2e27) cmail_ddmenu_btn01_pane

0x855b,	// (0x000a2e44) cmail_ddmenu_btn02_pane_ParamLimits

0x855b,	// (0x000a2e44) cmail_ddmenu_btn02_pane

0x8579,	// (0x000a2e62) cmail_ddmenu_btn03_pane_ParamLimits

0x8579,	// (0x000a2e62) cmail_ddmenu_btn03_pane

0x85a7,	// (0x000a2e90) main_sp_fs_ctrlbar_pane_ParamLimits

0x85bd,	// (0x000a2ea6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b9b,	// (0x000a3484) list_cmail_body_pane_ParamLimits

0xe7b1,	// (0x000a909a) bg_button_pane_cp12

0xe7ba,	// (0x000a90a3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7ba,	// (0x000a90a3) list_single_cmail_header_detail_pane_g3

0xa1de,	// (0x000a4ac7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa1de,	// (0x000a4ac7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb4e,	// (0x000aa437) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb4e,	// (0x000aa437) list_single_cmail_header_detail_pane_t

0xa21f,	// (0x000a4b08) phacti_term_pane_t2_ParamLimits

0xa21f,	// (0x000a4b08) phacti_term_pane_t2

0x0001,

0xfb53,	// (0x000aa43c) phacti_term_pane_t_ParamLimits

0xfb53,	// (0x000aa43c) phacti_term_pane_t

0xeab9,	// (0x000a93a2) aid_size_list_single_double

0x8f5d,	// (0x000a3846) popup_ezdial_listscroll_window

0x8f80,	// (0x000a3869) popup_number_entry_window_cp01

0xb39f,	// (0x000a5c88) bg_popup_call_pane_cp09

0xeac5,	// (0x000a93ae) ezdial_list_pane

0xeacd,	// (0x000a93b6) scroll_pane_cp23

0xc9a3,	// (0x000a728c) bg_button_pane_cp028_ParamLimits

0xc9a3,	// (0x000a728c) bg_button_pane_cp028

0x8f8e,	// (0x000a3877) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f8e,	// (0x000a3877) cmail_ddmenu_btn01_pane_g1

0x8fa0,	// (0x000a3889) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fa0,	// (0x000a3889) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbc2,	// (0x000aa4ab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbc2,	// (0x000aa4ab) cmail_ddmenu_btn01_pane_g

0xead5,	// (0x000a93be) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead5,	// (0x000a93be) cmail_ddmenu_btn01_pane_t1

0xc7b6,	// (0x000a709f) bg_button_pane_cp029_ParamLimits

0xc7b6,	// (0x000a709f) bg_button_pane_cp029

0x8fac,	// (0x000a3895) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fac,	// (0x000a3895) cmail_ddmenu_btn02_pane_g1

0x8fc4,	// (0x000a38ad) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fc4,	// (0x000a38ad) cmail_ddmenu_btn02_pane_t1

0xe86e,	// (0x000a9157) bg_button_pane_cp031_ParamLimits

0xe86e,	// (0x000a9157) bg_button_pane_cp031

0x8fac,	// (0x000a3895) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fac,	// (0x000a3895) cmail_ddmenu_btn03_pane_g1

0x8fc4,	// (0x000a38ad) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fc4,	// (0x000a38ad) cmail_ddmenu_btn03_pane_t1

0x5fd6,	// (0x000a08bf) cell_dialer2_keypad_pane_t1_ParamLimits

0x5ff0,	// (0x000a08d9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5ff0,	// (0x000a08d9) cell_dialer2_keypad_pane_t1_copy1

0x7e6c,	// (0x000a2755) ncimui_group_button_pane

0xa463,	// (0x000a4d4c) main_sp_fs_calendar_pane_ParamLimits

0x8bc2,	// (0x000a34ab) list_single_cmail_header_caption_pane_ParamLimits

0xa4fc,	// (0x000a4de5) aid_recal_txt_sm_pane

0x9aaf,	// (0x000a4398) mian_recal_day_pane

0xa26d,	// (0x000a4b56) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x000a93dc) list_recal_day_pane

0xa520,	// (0x000a4e09) list_single_recal_day_pane_ParamLimits

0xa520,	// (0x000a4e09) list_single_recal_day_pane

0xeb1a,	// (0x000a9403) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x000a9403) list_single_recal_day_pane_g1

0xa532,	// (0x000a4e1b) list_single_recal_day_pane_g2_ParamLimits

0xa532,	// (0x000a4e1b) list_single_recal_day_pane_g2

0xa542,	// (0x000a4e2b) list_single_recal_day_pane_g3_ParamLimits

0xa542,	// (0x000a4e2b) list_single_recal_day_pane_g3

0x8fe8,	// (0x000a38d1) list_single_recal_day_pane_g4_ParamLimits

0x8fe8,	// (0x000a38d1) list_single_recal_day_pane_g4

0xa54e,	// (0x000a4e37) list_single_recal_day_pane_g5_ParamLimits

0xa54e,	// (0x000a4e37) list_single_recal_day_pane_g5

0xa55e,	// (0x000a4e47) list_single_recal_day_pane_g6_ParamLimits

0xa55e,	// (0x000a4e47) list_single_recal_day_pane_g6

0x0004,

0xfbd1,	// (0x000aa4ba) list_single_recal_day_pane_g_ParamLimits

0xfbd1,	// (0x000aa4ba) list_single_recal_day_pane_g

0xa572,	// (0x000a4e5b) list_single_recal_day_pane_t1

0xa584,	// (0x000a4e6d) list_single_recal_day_pane_t2

0x0001,

0xfbdc,	// (0x000aa4c5) list_single_recal_day_pane_t

0x9008,	// (0x000a38f1) ncimui_query_button_pane_ParamLimits

0x9008,	// (0x000a38f1) ncimui_query_button_pane

0x9018,	// (0x000a3901) ncimui_query_button_pane_t1_ParamLimits

0x9018,	// (0x000a3901) ncimui_query_button_pane_t1

0xeb26,	// (0x000a940f) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x000a940f) ncimui_query_button_pane_t2

0x0001,

0xfbe1,	// (0x000aa4ca) ncimui_query_button_pane_t_ParamLimits

0xfbe1,	// (0x000aa4ca) ncimui_query_button_pane_t

0x902b,	// (0x000a3914) query_button_pane_ParamLimits

0x902b,	// (0x000a3914) query_button_pane

0x9aaf,	// (0x000a4398) bg_button_pane_cp0028

0xeb39,	// (0x000a9422) query_button_pane_t1

0x43b1,	// (0x0009ec9a) main_tport_pane_ParamLimits

0x8aa4,	// (0x000a338d) bg_popup_window_pane_cp01_ParamLimits

0x8aa4,	// (0x000a338d) bg_popup_window_pane_cp01

0x8ab2,	// (0x000a339b) heading_pane_cp08_ParamLimits

0x8ab2,	// (0x000a339b) heading_pane_cp08

0x8ac0,	// (0x000a33a9) heading_pane_cp07_ParamLimits

0x8ac0,	// (0x000a33a9) heading_pane_cp07

0x8b2f,	// (0x000a3418) cell_tport_appsw_pane_g2

0x0002,

0xfb3b,	// (0x000aa424) cell_tport_appsw_pane_g

0x3ab1,	// (0x0009e39a) input_candi_list_open_g1

0xacee,	// (0x000a55d7) list_cale_time_pane_g6_ParamLimits

0xacee,	// (0x000a55d7) list_cale_time_pane_g6

0x4e31,	// (0x0009f71a) aid_size_touch_calib_1_ParamLimits

0x4e31,	// (0x0009f71a) aid_size_touch_calib_1

0x4e3d,	// (0x0009f726) aid_size_touch_calib_2_ParamLimits

0x4e3d,	// (0x0009f726) aid_size_touch_calib_2

0x4e4b,	// (0x0009f734) aid_size_touch_calib_3_ParamLimits

0x4e4b,	// (0x0009f734) aid_size_touch_calib_3

0x4e5b,	// (0x0009f744) aid_size_touch_calib_4_ParamLimits

0x4e5b,	// (0x0009f744) aid_size_touch_calib_4

0x4e69,	// (0x0009f752) main_touch_calib_button_group_pane_ParamLimits

0x4e69,	// (0x0009f752) main_touch_calib_button_group_pane

0x4e77,	// (0x0009f760) main_touch_calib_pane_g1_ParamLimits

0x4e83,	// (0x0009f76c) main_touch_calib_pane_g2_ParamLimits

0x4e8f,	// (0x0009f778) main_touch_calib_pane_g3_ParamLimits

0x4e9b,	// (0x0009f784) main_touch_calib_pane_g4_ParamLimits

0xf646,	// (0x000a9f2f) main_touch_calib_pane_g_ParamLimits

0x4ea7,	// (0x0009f790) main_touch_calib_pane_t1_ParamLimits

0x4ec0,	// (0x0009f7a9) main_touch_calib_pane_t2_ParamLimits

0x4ed9,	// (0x0009f7c2) main_touch_calib_pane_t3_ParamLimits

0x4eef,	// (0x0009f7d8) main_touch_calib_pane_t4_ParamLimits

0x4f05,	// (0x0009f7ee) main_touch_calib_pane_t5_ParamLimits

0xf64f,	// (0x000a9f38) main_touch_calib_pane_t_ParamLimits

0xcf20,	// (0x000a7809) list_single_fp_cale_pane_g3_ParamLimits

0xcf20,	// (0x000a7809) list_single_fp_cale_pane_g3

0x4395,	// (0x0009ec7e) bg_button_pane_cp012_ParamLimits

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp03_ParamLimits

0x6e04,	// (0x000a16ed) cell_vitu2_function_top_pane_g1_ParamLimits

0x4395,	// (0x0009ec7e) bg_vkb2_func_pane_cp04_ParamLimits

0x7df4,	// (0x000a26dd) main_ncimui_button_group_pane_ParamLimits

0x7df4,	// (0x000a26dd) main_ncimui_button_group_pane

0x7e5a,	// (0x000a2743) main_ncimui_pane_t3_ParamLimits

0x7e5a,	// (0x000a2743) main_ncimui_pane_t3

0xe850,	// (0x000a9139) phacti_button_group_pane

0xeab9,	// (0x000a93a2) aid_size_list_single_double_ParamLimits

0x8f5d,	// (0x000a3846) popup_ezdial_listscroll_window_ParamLimits

0x8f80,	// (0x000a3869) popup_number_entry_window_cp01_ParamLimits

0x9038,	// (0x000a3921) phacti_button_pane_ParamLimits

0x9038,	// (0x000a3921) phacti_button_pane

0x9aaf,	// (0x000a4398) bg_button_pane_cp14

0xeb47,	// (0x000a9430) phacti_button_pane_t1

0x9049,	// (0x000a3932) main_touch_calib_button_pane_ParamLimits

0x9049,	// (0x000a3932) main_touch_calib_button_pane

0xa703,	// (0x000a4fec) bg_button_pane_cp18_ParamLimits

0xa703,	// (0x000a4fec) bg_button_pane_cp18

0xeb55,	// (0x000a943e) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x000a943e) main_touch_calib_button_pane_t1

0xeb6b,	// (0x000a9454) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x000a9454) main_touch_calib_button_pane_t2

0x0001,

0x0b0f,	// (0x0009b3f8) main_touch_calib_button_pane_t_ParamLimits

0x0b0f,	// (0x0009b3f8) main_touch_calib_button_pane_t

0x9aaf,	// (0x000a4398) cell_ncimui_button_pane

0x9aaf,	// (0x000a4398) bg_button_pane_cp032

0xeb89,	// (0x000a9472) cell_ncimui_button_pane_t1

0x604c,	// (0x000a0935) image3_infobar_pane_ParamLimits

0x604c,	// (0x000a0935) image3_infobar_pane

0x81d3,	// (0x000a2abc) fs_bigclock_status_pane_ParamLimits

0x81d3,	// (0x000a2abc) fs_bigclock_status_pane

0x81e0,	// (0x000a2ac9) main_fs_bigclock_clock_pane_ParamLimits

0x81e0,	// (0x000a2ac9) main_fs_bigclock_clock_pane

0x81fa,	// (0x000a2ae3) main_fs_bigclock_indi_pane_ParamLimits

0x81fa,	// (0x000a2ae3) main_fs_bigclock_indi_pane

0x8222,	// (0x000a2b0b) main_fs_bigclock_swipe_pane_ParamLimits

0x8222,	// (0x000a2b0b) main_fs_bigclock_swipe_pane

0x9aaf,	// (0x000a4398) main_fs_clock_dumped_data

0xe391,	// (0x000a8c7a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe391,	// (0x000a8c7a) list_single_fs_bigclock_indicator_pane_g1

0xe3ad,	// (0x000a8c96) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ad,	// (0x000a8c96) list_single_fs_bigclock_indicator_pane_g2

0xe3c7,	// (0x000a8cb0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c7,	// (0x000a8cb0) list_single_fs_bigclock_indicator_pane_g3

0xe3e1,	// (0x000a8cca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e1,	// (0x000a8cca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0937,	// (0x0009b220) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0937,	// (0x0009b220) list_single_fs_bigclock_indicator_pane_g

0xe40c,	// (0x000a8cf5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe40c,	// (0x000a8cf5) list_single_fs_bigclock_indicator_pane_t1

0xe434,	// (0x000a8d1d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe434,	// (0x000a8d1d) list_single_fs_bigclock_indicator_pane_t2

0xe45c,	// (0x000a8d45) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe45c,	// (0x000a8d45) list_single_fs_bigclock_indicator_pane_t3

0xe484,	// (0x000a8d6d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe484,	// (0x000a8d6d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0942,	// (0x0009b22b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0942,	// (0x0009b22b) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x000a9480) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x000a9480) image3_infobar_fav_pane

0xeba7,	// (0x000a9490) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x000a9490) image3_infobar_loc_pane

0xebbb,	// (0x000a94a4) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x000a94a4) image3_infobar_time_pane

0xcbc0,	// (0x000a74a9) image3_infobar_time_pane_g1

0xebcb,	// (0x000a94b4) image3_infobar_time_pane_t1

0xcbc0,	// (0x000a74a9) image3_infobar_loc_pane_g1

0xebd9,	// (0x000a94c2) image3_infobar_loc_pane_g2

0x0001,

0x0b14,	// (0x0009b3fd) image3_infobar_loc_pane_g

0xebe1,	// (0x000a94ca) image3_infobar_loc_pane_t1

0xcbc0,	// (0x000a74a9) image3_infobar_fav_pane_g1

0xebef,	// (0x000a94d8) image3_infobar_fav_pane_g2

0x0001,

0x0b19,	// (0x0009b402) image3_infobar_fav_pane_g

0xebf7,	// (0x000a94e0) fs_bigclock_status_battery_pane

0xec00,	// (0x000a94e9) fs_bigclock_status_signal_pane

0xec09,	// (0x000a94f2) fs_bigclock_status_title_pane

0xec12,	// (0x000a94fb) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x000a9504) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b1e,	// (0x0009b407) fs_bigclock_status_signal_pane_g

0xec23,	// (0x000a950c) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x000a9515) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b23,	// (0x0009b40c) fs_bigclock_status_battery_pane_g

0xec34,	// (0x000a951d) fs_bigclock_status_title_pane_t1

0xcbc0,	// (0x000a74a9) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x000a952b) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x000a9534) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x000a9534) main_fs_bigclock_clock_pane_g4

0x0003,

0x0b28,	// (0x0009b411) main_fs_bigclock_clock_pane_g

0xec53,	// (0x000a953c) main_fs_bigclock_clock_pane_t1

0x9059,	// (0x000a3942) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbe6,	// (0x000aa4cf) main_fs_bigclock_clock_pane_t

0xec61,	// (0x000a954a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x000a954a) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x000a955b) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x000a955b) list_single_fs_bigclock_pane

0xec98,	// (0x000a9581) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x000a9590) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x000a9598) list_single_fs_bigclock_pane_t1

0xcbc0,	// (0x000a74a9) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x000a95db) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b42,	// (0x0009b42b) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x000a95e3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x000a95e3) main_fs_bigclock_swipe_pane_t1

0x3362,	// (0x0009dc4b) call_type_pane_ParamLimits

0x9aaf,	// (0x000a4398) main_btmg_pane

0xa2b8,	// (0x000a4ba1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa2b8,	// (0x000a4ba1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb95,	// (0x000aa47e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb95,	// (0x000aa47e) list_single_cale_mrui_row_pane_g

0xa50f,	// (0x000a4df8) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x000a93fb) list_recal_vselct_arw_up_pane

0xa517,	// (0x000a4e00) list_recal_vselct_pane

0x90aa,	// (0x000a3993) btmg_button_pane

0x90b6,	// (0x000a399f) main_btmg_pane_g1

0x9aaf,	// (0x000a4398) bg_button_pane_cp044

0xed17,	// (0x000a9600) btmg_button_pane_t1

0xc7a2,	// (0x000a708b) aid_listscroll_gen

0xa463,	// (0x000a4d4c) main_cntbar_detail_pane

0xe793,	// (0x000a907c) list_cmail_folder_pane

0xc2a9,	// (0x000a6b92) sp_fs_scroll_pane_cp03_ParamLimits

0x90be,	// (0x000a39a7) list_single_fs_dyc_pane_cp01_ParamLimits

0x90be,	// (0x000a39a7) list_single_fs_dyc_pane_cp01

0xed25,	// (0x000a960e) aid_size_cmail_indent

0xa596,	// (0x000a4e7f) list_single_dyc_row_pane_cp01

0x910e,	// (0x000a39f7) cntbar_detail_list_pane_ParamLimits

0x910e,	// (0x000a39f7) cntbar_detail_list_pane

0x9148,	// (0x000a3a31) main_cntbar_detail_cont_pane_ParamLimits

0x9148,	// (0x000a3a31) main_cntbar_detail_cont_pane

0x3285,	// (0x0009db6e) scroll_pane_cp032_ParamLimits

0x3285,	// (0x0009db6e) scroll_pane_cp032

0x9154,	// (0x000a3a3d) cntbar_detail_list_event_pane_ParamLimits

0x9154,	// (0x000a3a3d) cntbar_detail_list_event_pane

0x911a,	// (0x000a3a03) cntbar_detail_list_shct_pane

0xab71,	// (0x000a545a) aid_list_gen

0xed2e,	// (0x000a9617) aid_scroll

0xed37,	// (0x000a9620) aid_size_touch_scroll_bar

0x7565,	// (0x000a1e4e) aid_list_double

0xeaea,	// (0x000a93d3) aid_list_single

0x7553,	// (0x000a1e3c) aid_list_single_lg

0xa59f,	// (0x000a4e88) aid_list_z_g_a_sm

0xa5a7,	// (0x000a4e90) aid_list_z_g_d

0xa5af,	// (0x000a4e98) aid_txt_z_prm

0x9168,	// (0x000a3a51) aid_txt_z_prm_cp01

0x9176,	// (0x000a3a5f) aid_txt_z_sec

0x9184,	// (0x000a3a6d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9184,	// (0x000a3a6d) main_cntbar_detail_cont_pane_g1

0x9191,	// (0x000a3a7a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9191,	// (0x000a3a7a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbf2,	// (0x000aa4db) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbf2,	// (0x000aa4db) main_cntbar_detail_cont_pane_g

0xed40,	// (0x000a9629) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x000a9637) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x000a9645) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b4c,	// (0x0009b435) main_cntbar_detail_cont_pane_t

0x919d,	// (0x000a3a86) cell_cntbar_detail_list_shct_pane_ParamLimits

0x919d,	// (0x000a3a86) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x000a9653) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x000a965c) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b53,	// (0x0009b43c) cntbar_detail_list_shct_pane_g

0x91b1,	// (0x000a3a9a) cntbar_detail_list_event_pane_g1_ParamLimits

0x91b1,	// (0x000a3a9a) cntbar_detail_list_event_pane_g1

0x91bd,	// (0x000a3aa6) cntbar_detail_list_event_pane_g2_ParamLimits

0x91bd,	// (0x000a3aa6) cntbar_detail_list_event_pane_g2

0x0005,

0xfbf7,	// (0x000aa4e0) cntbar_detail_list_event_pane_g_ParamLimits

0xfbf7,	// (0x000aa4e0) cntbar_detail_list_event_pane_g

0x9229,	// (0x000a3b12) cntbar_detail_list_event_pane_t1_ParamLimits

0x9229,	// (0x000a3b12) cntbar_detail_list_event_pane_t1

0x923e,	// (0x000a3b27) cntbar_detail_list_event_pane_t2_ParamLimits

0x923e,	// (0x000a3b27) cntbar_detail_list_event_pane_t2

0x0002,

0xfc04,	// (0x000aa4ed) cntbar_detail_list_event_pane_t_ParamLimits

0xfc04,	// (0x000aa4ed) cntbar_detail_list_event_pane_t

0xcbc0,	// (0x000a74a9) cell_cntbar_detail_list_shct_pane_g1

0xb357,	// (0x000a5c40) navi_pane_mv_g3

0xa463,	// (0x000a4d4c) main_cntbar_detail_pane_ParamLimits

0x9aaf,	// (0x000a4398) main_notif_wgt_pane

0x5d00,	// (0x000a05e9) aid_tch_main_mp4_pane_g4

0x5f35,	// (0x000a081e) popup_slider_window_cp02

0xa505,	// (0x000a4dee) list_recal_day_event_pane

0x90ee,	// (0x000a39d7) cntbar_detail_btn_pane_ParamLimits

0x90ee,	// (0x000a39d7) cntbar_detail_btn_pane

0x90fe,	// (0x000a39e7) cntbar_detail_btn_pane_cp01_ParamLimits

0x90fe,	// (0x000a39e7) cntbar_detail_btn_pane_cp01

0x911a,	// (0x000a3a03) cntbar_detail_list_shct_pane_ParamLimits

0x9126,	// (0x000a3a0f) cntbar_detail_pane_g1_ParamLimits

0x9126,	// (0x000a3a0f) cntbar_detail_pane_g1

0x9132,	// (0x000a3a1b) cntbar_detail_pane_t1_ParamLimits

0x9132,	// (0x000a3a1b) cntbar_detail_pane_t1

0x91c9,	// (0x000a3ab2) cntbar_detail_list_event_pane_g3_ParamLimits

0x91c9,	// (0x000a3ab2) cntbar_detail_list_event_pane_g3

0x91e1,	// (0x000a3aca) cntbar_detail_list_event_pane_g4_ParamLimits

0x91e1,	// (0x000a3aca) cntbar_detail_list_event_pane_g4

0x91f9,	// (0x000a3ae2) cntbar_detail_list_event_pane_g5_ParamLimits

0x91f9,	// (0x000a3ae2) cntbar_detail_list_event_pane_g5

0x9211,	// (0x000a3afa) cntbar_detail_list_event_pane_g6_ParamLimits

0x9211,	// (0x000a3afa) cntbar_detail_list_event_pane_g6

0x9253,	// (0x000a3b3c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9253,	// (0x000a3b3c) cntbar_detail_list_event_pane_t3

0x9265,	// (0x000a3b4e) popup_notif_wgt_window_ParamLimits

0x9265,	// (0x000a3b4e) popup_notif_wgt_window

0x9275,	// (0x000a3b5e) popup_submenu_window_cp01_ParamLimits

0x9275,	// (0x000a3b5e) popup_submenu_window_cp01

0xb39f,	// (0x000a5c88) bg_popup_window_pane_cp10

0xed7c,	// (0x000a9665) listscroll_notif_wgt_pane

0xed8d,	// (0x000a9676) list_notif_wgt_window

0xed96,	// (0x000a967f) scroll_pane_cp033

0x9283,	// (0x000a3b6c) list_notif_wgt_row_pane_ParamLimits

0x9283,	// (0x000a3b6c) list_notif_wgt_row_pane

0xed9f,	// (0x000a9688) aid_size_list_notif_wgt_del

0xedac,	// (0x000a9695) list_notif_wgt_row_pane_g1

0xedb8,	// (0x000a96a1) list_notif_wgt_row_pane_g2

0xedcc,	// (0x000a96b5) list_notif_wgt_row_pane_g3

0x0002,

0x0b6c,	// (0x0009b455) list_notif_wgt_row_pane_g

0xedd9,	// (0x000a96c2) list_notif_wgt_row_pane_t1

0xedef,	// (0x000a96d8) list_notif_wgt_row_pane_t2

0xee01,	// (0x000a96ea) list_notif_wgt_row_pane_t3

0x0002,

0x0b73,	// (0x0009b45c) list_notif_wgt_row_pane_t

0xd873,	// (0x000a815c) list_recal_day_event_pane_g1

0xee13,	// (0x000a96fc) list_recal_day_event_pane_t1

0x9aaf,	// (0x000a4398) bg_button_pane_cp045

0xee22,	// (0x000a970b) cntbar_detail_btn_pane_t1

0xc7b6,	// (0x000a709f) main_callh_pane_ParamLimits

0xc7b6,	// (0x000a709f) main_callh_pane

0x9aaf,	// (0x000a4398) main_coverflow0_pane

0x9aaf,	// (0x000a4398) main_wgtman_pane

0x823a,	// (0x000a2b23) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x823a,	// (0x000a2b23) main_fs_bigclock_unlock_btn_pane

0x8b27,	// (0x000a3410) bg_button_pane_cp16

0x8b37,	// (0x000a3420) cell_tport_appsw_pane_g3

0x9295,	// (0x000a3b7e) cf0_flow_pane_ParamLimits

0x9295,	// (0x000a3b7e) cf0_flow_pane

0xee30,	// (0x000a9719) listscroll_cf0_pane

0xee3b,	// (0x000a9724) main_cf0_pane_g1

0x92a4,	// (0x000a3b8d) main_cf0_pane_t1_ParamLimits

0x92a4,	// (0x000a3b8d) main_cf0_pane_t1

0x92b8,	// (0x000a3ba1) main_cf0_pane_t2_ParamLimits

0x92b8,	// (0x000a3ba1) main_cf0_pane_t2

0x0001,

0xfc0b,	// (0x000aa4f4) main_cf0_pane_t_ParamLimits

0xfc0b,	// (0x000aa4f4) main_cf0_pane_t

0xee4d,	// (0x000a9736) scroll_pane_cp11

0x92cc,	// (0x000a3bb5) cf0_flow_pane_g1

0x92d4,	// (0x000a3bbd) cf0_flow_pane_g2

0x0001,

0xfc10,	// (0x000aa4f9) cf0_flow_pane_g

0x92dc,	// (0x000a3bc5) cf0_flow_pane_t1

0x9aaf,	// (0x000a4398) main_call6_pane

0x9aaf,	// (0x000a4398) main_calllock_pane

0x92ea,	// (0x000a3bd3) call6_btn_grp_pane_ParamLimits

0x92ea,	// (0x000a3bd3) call6_btn_grp_pane

0x92f9,	// (0x000a3be2) call6_pane_g1_ParamLimits

0x92f9,	// (0x000a3be2) call6_pane_g1

0x9308,	// (0x000a3bf1) popup_call6_1st_window_ParamLimits

0x9308,	// (0x000a3bf1) popup_call6_1st_window

0x9316,	// (0x000a3bff) popup_call6_2nd_window_ParamLimits

0x9316,	// (0x000a3bff) popup_call6_2nd_window

0x9324,	// (0x000a3c0d) cell_call6_btn_pane_ParamLimits

0x9324,	// (0x000a3c0d) cell_call6_btn_pane

0xb39f,	// (0x000a5c88) bg_popup_call2_in_pane_cp03

0xee58,	// (0x000a9741) popup_call6_1st_window_g1

0xee60,	// (0x000a9749) popup_call6_1st_window_g2

0xee68,	// (0x000a9751) popup_call6_1st_window_g3

0x0002,

0x0b89,	// (0x0009b472) popup_call6_1st_window_g

0xee70,	// (0x000a9759) popup_call6_1st_window_t1

0xee7f,	// (0x000a9768) popup_call6_1st_window_t2

0xee8f,	// (0x000a9778) popup_call6_1st_window_t3

0x0002,

0x0b90,	// (0x0009b479) popup_call6_1st_window_t

0xb39f,	// (0x000a5c88) bg_popup_call2_in_pane_cp04

0xee58,	// (0x000a9741) popup_call6_2nd_window_g1

0xee60,	// (0x000a9749) popup_call6_2nd_window_g2

0xee68,	// (0x000a9751) popup_call6_2nd_window_g3

0x0002,

0x0b89,	// (0x0009b472) popup_call6_2nd_window_g

0xee70,	// (0x000a9759) popup_call6_2nd_window_t1

0x9aaf,	// (0x000a4398) bg_button_pane_cp15

0xee9f,	// (0x000a9788) cell_call6_btn_pane_g1

0xeea8,	// (0x000a9791) cell_call6_btn_pane_t1

0x9333,	// (0x000a3c1c) listscroll_wgtman_pane_ParamLimits

0x9333,	// (0x000a3c1c) listscroll_wgtman_pane

0x934f,	// (0x000a3c38) wgtman_btn_pane_ParamLimits

0x934f,	// (0x000a3c38) wgtman_btn_pane

0xb103,	// (0x000a59ec) aid_scroll_copy1

0xeeb7,	// (0x000a97a0) list_wgtman_pane

0x9384,	// (0x000a3c6d) wgtman_btn_pane_g1_ParamLimits

0x9384,	// (0x000a3c6d) wgtman_btn_pane_g1

0x93ac,	// (0x000a3c95) wgtman_btn_pane_t1_ParamLimits

0x93ac,	// (0x000a3c95) wgtman_btn_pane_t1

0xeec1,	// (0x000a97aa) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x000a97aa) wgtman_btn_pane_t2

0x0001,

0xfc15,	// (0x000aa4fe) wgtman_btn_pane_t_ParamLimits

0xfc15,	// (0x000aa4fe) wgtman_btn_pane_t

0x93e3,	// (0x000a3ccc) listrow_wgtman_pane_ParamLimits

0x93e3,	// (0x000a3ccc) listrow_wgtman_pane

0x93ff,	// (0x000a3ce8) listrow_wgtman_pane_g1

0x940c,	// (0x000a3cf5) listrow_wgtman_pane_g2

0x0001,

0xfc1a,	// (0x000aa503) listrow_wgtman_pane_g

0x942a,	// (0x000a3d13) listrow_wgtman_pane_t1

0x9442,	// (0x000a3d2b) listrow_wgtman_pane_t2

0x0001,

0xfc1f,	// (0x000aa508) listrow_wgtman_pane_t

0x9468,	// (0x000a3d51) wait_bar_pane_cp09

0xeed8,	// (0x000a97c1) main_calllock_btn_pane

0xeee2,	// (0x000a97cb) main_calllock_pane_g1

0x9aaf,	// (0x000a4398) bg_button_pane_cp17

0xeeed,	// (0x000a97d6) main_calllock_btn_pane_g1

0xeef6,	// (0x000a97df) main_calllock_btn_pane_t1

0x9aaf,	// (0x000a4398) main_dialer3_pane

0x9aaf,	// (0x000a4398) main_fmrd2_pane

0xcbc0,	// (0x000a74a9) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x000a97f6) main_fs_bigclock_unlock_btn_pane_t1

0x947a,	// (0x000a3d63) area_fmrd2_info_pane_ParamLimits

0x947a,	// (0x000a3d63) area_fmrd2_info_pane

0x9488,	// (0x000a3d71) area_fmrd2_visual_pane_ParamLimits

0x9488,	// (0x000a3d71) area_fmrd2_visual_pane

0x9496,	// (0x000a3d7f) fmrd2_indi_pane_ParamLimits

0x9496,	// (0x000a3d7f) fmrd2_indi_pane

0x94a3,	// (0x000a3d8c) area_fmrd2_visual_pane_g1

0x94ab,	// (0x000a3d94) area_fmrd2_visual_pane_t1

0x94bb,	// (0x000a3da4) area_fmrd2_visual_pane_t2

0x94cb,	// (0x000a3db4) area_fmrd2_visual_pane_t3

0x0002,

0xfc24,	// (0x000aa50d) area_fmrd2_visual_pane_t

0x94db,	// (0x000a3dc4) area_fmrd2_info_pane_g1

0x94e3,	// (0x000a3dcc) area_fmrd2_info_pane_t1

0x94f3,	// (0x000a3ddc) area_fmrd2_info_pane_t2

0x9503,	// (0x000a3dec) area_fmrd2_info_pane_t3

0x9513,	// (0x000a3dfc) area_fmrd2_info_pane_t4

0x0003,

0xfc2b,	// (0x000aa514) area_fmrd2_info_pane_t

0x9521,	// (0x000a3e0a) fmrd2_indi_pane_t1

0x9531,	// (0x000a3e1a) fmrd2_indi_pane_t2

0x9541,	// (0x000a3e2a) fmrd2_indi_pane_t3

0x0002,

0xfc34,	// (0x000aa51d) fmrd2_indi_pane_t

0xe3f0,	// (0x000a8cd9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f0,	// (0x000a8cd9) list_single_fs_bigclock_indicator_pane_g5

0xe4a0,	// (0x000a8d89) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a0,	// (0x000a8d89) list_single_fs_bigclock_indicator_pane_t5

0x8d34,	// (0x000a361d) aid_cell_bcale_month_pane_ParamLimits

0x8d34,	// (0x000a361d) aid_cell_bcale_month_pane

0x8d52,	// (0x000a363b) bcale_month_pane_ParamLimits

0x8d52,	// (0x000a363b) bcale_month_pane

0x8d70,	// (0x000a3659) bcale_preview_pane_ParamLimits

0x8d70,	// (0x000a3659) bcale_preview_pane

0xecaf,	// (0x000a9598) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x000a95b7) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x000a95b7) list_single_fs_bigclock_pane_t2

0x0001,

0x0b3d,	// (0x0009b426) list_single_fs_bigclock_pane_t_ParamLimits

0x0b3d,	// (0x0009b426) list_single_fs_bigclock_pane_t

0xef05,	// (0x000a97ee) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0ba6,	// (0x0009b48f) main_fs_bigclock_unlock_btn_pane_g

0x954f,	// (0x000a3e38) aid_dia3_key_size_ParamLimits

0x954f,	// (0x000a3e38) aid_dia3_key_size

0x955b,	// (0x000a3e44) aid_dia3_listrow_size_ParamLimits

0x955b,	// (0x000a3e44) aid_dia3_listrow_size

0x956b,	// (0x000a3e54) dia3_keypad_fun_pane_ParamLimits

0x956b,	// (0x000a3e54) dia3_keypad_fun_pane

0x957d,	// (0x000a3e66) dia3_keypad_num_pane_ParamLimits

0x957d,	// (0x000a3e66) dia3_keypad_num_pane

0x958f,	// (0x000a3e78) dia3_listscroll_pane_ParamLimits

0x958f,	// (0x000a3e78) dia3_listscroll_pane

0x959d,	// (0x000a3e86) dia3_numentry_pane_ParamLimits

0x959d,	// (0x000a3e86) dia3_numentry_pane

0xef1b,	// (0x000a9804) dia3_list_pane

0xef26,	// (0x000a980f) scroll_pane_cp12

0x9aaf,	// (0x000a4398) bg_dia3_numentry_pane

0x95ab,	// (0x000a3e94) dia3_numentry_pane_t1

0x95ba,	// (0x000a3ea3) cell_dia3_key_num_pane

0x95c2,	// (0x000a3eab) cell_dia3_key0_fun_pane_ParamLimits

0x95c2,	// (0x000a3eab) cell_dia3_key0_fun_pane

0x95cf,	// (0x000a3eb8) cell_dia3_key1_fun_pane_ParamLimits

0x95cf,	// (0x000a3eb8) cell_dia3_key1_fun_pane

0x95dc,	// (0x000a3ec5) dia3_listrow_pane

0xe0fe,	// (0x000a89e7) bg_dia3_numentry_pane_g1

0x9aaf,	// (0x000a4398) bg_button_pane_cp21

0xef31,	// (0x000a981a) cell_dia3_key_num_pane_t1

0xef3f,	// (0x000a9828) cell_dia3_key_num_pane_t2

0xef4e,	// (0x000a9837) cell_dia3_key_num_pane_t3

0xef5d,	// (0x000a9846) cell_dia3_key_num_pane_t4

0x0003,

0x0bc2,	// (0x0009b4ab) cell_dia3_key_num_pane_t

0x9aaf,	// (0x000a4398) bg_button_pane_cp19

0x95e9,	// (0x000a3ed2) cell_dia3_key0_fun_pane_g1

0x9aaf,	// (0x000a4398) bg_button_pane_cp20

0x95f1,	// (0x000a3eda) cell_dia3_key1_fun_pane_g1

0x95f9,	// (0x000a3ee2) area_left_week_number_pane

0x960c,	// (0x000a3ef5) area_top_day_name_pane

0x961a,	// (0x000a3f03) frame_month_view_pane

0xef6c,	// (0x000a9855) grid_month_view_pane

0x962f,	// (0x000a3f18) cell_top_day_name_pane_ParamLimits

0x962f,	// (0x000a3f18) cell_top_day_name_pane

0x9649,	// (0x000a3f32) cell_area_left_week_number_pane_ParamLimits

0x9649,	// (0x000a3f32) cell_area_left_week_number_pane

0x966c,	// (0x000a3f55) cell_month_view_pane_ParamLimits

0x966c,	// (0x000a3f55) cell_month_view_pane

0xef7a,	// (0x000a9863) frm_month_g1

0x9698,	// (0x000a3f81) frm_month_g2

0x96a9,	// (0x000a3f92) frm_month_g3

0x96ba,	// (0x000a3fa3) frm_month_g4

0x96cb,	// (0x000a3fb4) frm_month_g5

0x96de,	// (0x000a3fc7) frm_month_g6

0x96f1,	// (0x000a3fda) frm_month_g7

0xef87,	// (0x000a9870) frm_month_g8

0x9704,	// (0x000a3fed) frm_month_g9

0x9711,	// (0x000a3ffa) frm_month_g10

0x971e,	// (0x000a4007) frm_month_g11

0x972b,	// (0x000a4014) frm_month_g12

0x9738,	// (0x000a4021) frm_month_g13

0x9745,	// (0x000a402e) frm_month_g14

0x9754,	// (0x000a403d) frm_month_g15

0x9763,	// (0x000a404c) frm_month_g16

0x000f,

0xfc3b,	// (0x000aa524) frm_month_g

0xef94,	// (0x000a987d) cell_top_day_name_pane_t1

0x9772,	// (0x000a405b) cell_area_left_week_number_pane_g1

0x9781,	// (0x000a406a) cell_area_left_week_number_pane_t1

0xce20,	// (0x000a7709) cell_month_view_pane_g1

0x9797,	// (0x000a4080) cell_month_view_pane_t1

0x9aaf,	// (0x000a4398) main_fps_pane

0xe6ab,	// (0x000a8f94) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ab,	// (0x000a8f94) cmail_ddmenu_btn02_pane_cp1

0xe6c7,	// (0x000a8fb0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c7,	// (0x000a8fb0) cmail_ddmenu_btn02_pane_cp2

0x8fb8,	// (0x000a38a1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fb8,	// (0x000a38a1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbc7,	// (0x000aa4b0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbc7,	// (0x000aa4b0) cmail_ddmenu_btn02_pane_g

0x8fd6,	// (0x000a38bf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fd6,	// (0x000a38bf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbcc,	// (0x000aa4b5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbcc,	// (0x000aa4b5) cmail_ddmenu_btn02_pane_t

0x97ad,	// (0x000a4096) fps_text_pane_ParamLimits

0x97ad,	// (0x000a4096) fps_text_pane

0x97ba,	// (0x000a40a3) main_fps_pane_g1_ParamLimits

0x97ba,	// (0x000a40a3) main_fps_pane_g1

0x97c8,	// (0x000a40b1) wait_bar_pane_cp010_ParamLimits

0x97c8,	// (0x000a40b1) wait_bar_pane_cp010

0x97d4,	// (0x000a40bd) fps_text_pane_t1_ParamLimits

0x97d4,	// (0x000a40bd) fps_text_pane_t1

0x6325,	// (0x000a0c0e) cam4_image_uncrop_pane_g1

0x632e,	// (0x000a0c17) cam4_image_uncrop_pane_g2

0x6337,	// (0x000a0c20) cam4_image_uncrop_pane_g3

0x6340,	// (0x000a0c29) cam4_image_uncrop_pane_g4

0x0003,

0xf776,	// (0x000aa05f) cam4_image_uncrop_pane_g

0x95dc,	// (0x000a3ec5) dia3_listrow_pane_ParamLimits

0x9aaf,	// (0x000a4398) main_phob2_pane

0x8b09,	// (0x000a33f2) cell_tport_appsw_pane_cp02_ParamLimits

0x8b09,	// (0x000a33f2) cell_tport_appsw_pane_cp02

0x8b18,	// (0x000a3401) cell_tport_appsw_pane_cp03_ParamLimits

0x8b18,	// (0x000a3401) cell_tport_appsw_pane_cp03

0x9aaf,	// (0x000a4398) phob2_contact_card_pane

0x9aaf,	// (0x000a4398) phob2_listscroll_pane

0xefa7,	// (0x000a9890) phob2_list_pane

0xefaf,	// (0x000a9898) scroll_pane_cp034

0x97ed,	// (0x000a40d6) phob2_cc_data_pane_ParamLimits

0x97ed,	// (0x000a40d6) phob2_cc_data_pane

0x9807,	// (0x000a40f0) phob2_cc_listscroll_pane_ParamLimits

0x9807,	// (0x000a40f0) phob2_cc_listscroll_pane

0x9821,	// (0x000a410a) list_double_large_graphic_phob2_pane_ParamLimits

0x9821,	// (0x000a410a) list_double_large_graphic_phob2_pane

0x9843,	// (0x000a412c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9843,	// (0x000a412c) list_double_large_graphic_phob2_pane_g1

0x9859,	// (0x000a4142) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9859,	// (0x000a4142) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc5c,	// (0x000aa545) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc5c,	// (0x000aa545) list_double_large_graphic_phob2_pane_g

0x9865,	// (0x000a414e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9865,	// (0x000a414e) list_double_large_graphic_phob2_pane_t1

0x987b,	// (0x000a4164) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x987b,	// (0x000a4164) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc61,	// (0x000aa54a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc61,	// (0x000aa54a) list_double_large_graphic_phob2_pane_t

0x9aaf,	// (0x000a4398) list_highlight_pane_cp024

0x9890,	// (0x000a4179) phob2_cc_button_pane

0x9898,	// (0x000a4181) phob2_cc_data_pane_g1_ParamLimits

0x9898,	// (0x000a4181) phob2_cc_data_pane_g1

0x98a4,	// (0x000a418d) phob2_cc_data_pane_g2_ParamLimits

0x98a4,	// (0x000a418d) phob2_cc_data_pane_g2

0x0001,

0xfc66,	// (0x000aa54f) phob2_cc_data_pane_g_ParamLimits

0xfc66,	// (0x000aa54f) phob2_cc_data_pane_g

0x98b0,	// (0x000a4199) phob2_cc_data_pane_t1_ParamLimits

0x98b0,	// (0x000a4199) phob2_cc_data_pane_t1

0x98c2,	// (0x000a41ab) phob2_cc_data_pane_t2_ParamLimits

0x98c2,	// (0x000a41ab) phob2_cc_data_pane_t2

0x98d4,	// (0x000a41bd) phob2_cc_data_pane_t3_ParamLimits

0x98d4,	// (0x000a41bd) phob2_cc_data_pane_t3

0x0002,

0xfc6b,	// (0x000aa554) phob2_cc_data_pane_t_ParamLimits

0xfc6b,	// (0x000aa554) phob2_cc_data_pane_t

0xefb7,	// (0x000a98a0) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x000a98a0) phob2_cc_list_pane

0xd95c,	// (0x000a8245) scroll_pane_cp035_ParamLimits

0xd95c,	// (0x000a8245) scroll_pane_cp035

0xa463,	// (0x000a4d4c) bg_button_pane_cp033

0xefc3,	// (0x000a98ac) phob2_cc_button_pane_g1

0xefcf,	// (0x000a98b8) phob2_cc_button_pane_t1

0xefe4,	// (0x000a98cd) phob2_cc_button_pane_t2

0x0001,

0x0c02,	// (0x0009b4eb) phob2_cc_button_pane_t

0x98e6,	// (0x000a41cf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98e6,	// (0x000a41cf) list_double_large_graphic_phob2_cc_pane

0x9915,	// (0x000a41fe) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9915,	// (0x000a41fe) list_double_large_graphic_phob2_cc_pane_g1

0x9926,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9926,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g2

0x9935,	// (0x000a421e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9935,	// (0x000a421e) list_double_large_graphic_phob2_cc_pane_g3

0x9944,	// (0x000a422d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9944,	// (0x000a422d) list_double_large_graphic_phob2_cc_pane_g4

0x9955,	// (0x000a423e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9955,	// (0x000a423e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc72,	// (0x000aa55b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc72,	// (0x000aa55b) list_double_large_graphic_phob2_cc_pane_g

0x9964,	// (0x000a424d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9964,	// (0x000a424d) list_double_large_graphic_phob2_cc_pane_t1

0x998d,	// (0x000a4276) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x998d,	// (0x000a4276) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc7d,	// (0x000aa566) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc7d,	// (0x000aa566) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x000a98df) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x000a98df) list_highlight_pane_cp025

0xa463,	// (0x000a4d4c) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x000a98ac) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x000a98b8) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x000a98cd) phob2_cc_button_pane_t2_ParamLimits

0x0c02,	// (0x0009b4eb) phob2_cc_button_pane_t_ParamLimits

0x0fcc,	// (0x0009b8b5) popup_wgtman_window

0xd74f,	// (0x000a8038) scroll_pane_cp038

0x936c,	// (0x000a3c55) wgtman_btn_pane_cp_01_ParamLimits

0x936c,	// (0x000a3c55) wgtman_btn_pane_cp_01

0xf004,	// (0x000a98ed) wgtman_content_pane

0xf00d,	// (0x000a98f6) wgtman_heading_pane

0x9aaf,	// (0x000a4398) bg_heading_pane_cp02

0xf016,	// (0x000a98ff) wgtman_heading_pane_g1

0xf01e,	// (0x000a9907) wgtman_heading_pane_t1

0xf02c,	// (0x000a9915) scroll_pane_cp036

0xf034,	// (0x000a991d) wgtman_list_pane

0xe5d5,	// (0x000a8ebe) wgtman_list_pane_t1_ParamLimits

0xe5d5,	// (0x000a8ebe) wgtman_list_pane_t1

0x6284,	// (0x000a0b6d) cam4_grid_pane

0x7006,	// (0x000a18ef) bg_button_pane_cp015_ParamLimits

0x7018,	// (0x000a1901) bg_button_pane_cp016_ParamLimits

0x702b,	// (0x000a1914) bg_button_pane_cp017_ParamLimits

0x7081,	// (0x000a196a) popup_vitu2_query_window_g3_ParamLimits

0x7081,	// (0x000a196a) popup_vitu2_query_window_g3

0x713c,	// (0x000a1a25) popup_vitu2_query_window_t6_ParamLimits

0x713c,	// (0x000a1a25) popup_vitu2_query_window_t6

0x7167,	// (0x000a1a50) popup_vitu2_query_window_t7_ParamLimits

0x7167,	// (0x000a1a50) popup_vitu2_query_window_t7

0xd6d4,	// (0x000a7fbd) cam4_grid_pane_g1

0xd6dd,	// (0x000a7fc6) cam4_grid_pane_g2

0xf03c,	// (0x000a9925) cam4_grid_pane_g3

0xf045,	// (0x000a992e) cam4_grid_pane_g4

0x0003,

0xfc82,	// (0x000aa56b) cam4_grid_pane_g

0x1f5f,	// (0x0009c848) aid_placing_vt_slider_lsc_ParamLimits

0x229f,	// (0x0009cb88) vidtel_button_pane_ParamLimits

0x229f,	// (0x0009cb88) vidtel_button_pane

0xf050,	// (0x000a9939) bg_button_pane_cp034

0x99b6,	// (0x000a429f) vidtel_button_pane_g1

0xf05a,	// (0x000a9943) vidtel_button_pane_t1

0xd851,	// (0x000a813a) aid_size_vtel_slider_touch

0xd95c,	// (0x000a8245) scroll_pane_cp039

0xe13c,	// (0x000a8a25) ncim_query_button_pane_cp01_ParamLimits

0xe15b,	// (0x000a8a44) ncimui_query_pane_g1_ParamLimits

0xa463,	// (0x000a4d4c) input_focus_pane_cp012_ParamLimits

0xe180,	// (0x000a8a69) ncim_query_entry_pane_t1_ParamLimits

0xd95c,	// (0x000a8245) scroll_pane_cp039_ParamLimits

0xb1e9,	// (0x000a5ad2) navi_pane_bcale_mc_g1

0xb1f1,	// (0x000a5ada) navi_pane_bcale_mc_t1

0xe710,	// (0x000a8ff9) main_sp_fs_email_pane_g1

0xe71c,	// (0x000a9005) main_sp_fs_email_pane_g2

0x0001,

0x09a8,	// (0x0009b291) main_sp_fs_email_pane_g

0xe97b,	// (0x000a9264) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe97b,	// (0x000a9264) list_single_cale_mrui_row_pane_g3

0x8ffe,	// (0x000a38e7) list_single_recal_day_pane_g5_event_pane

0xa56a,	// (0x000a4e53) list_single_recal_day_pane_g7

0xf068,	// (0x000a9951) list_recal_day_event_pane_cp01

0xf071,	// (0x000a995a) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x000a9962) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x000a996a) list_recal_vselct_pane_cp01

0xd873,	// (0x000a815c) list_recal_day_event_pane_cp01_g1

0xa5bd,	// (0x000a4ea6) list_recal_day_event_pane_cp01_t1

0xa572,	// (0x000a4e5b) list_single_recal_day_pane_t1_ParamLimits

0xa584,	// (0x000a4e6d) list_single_recal_day_pane_t2_ParamLimits

0xfbdc,	// (0x000aa4c5) list_single_recal_day_pane_t_ParamLimits

0xa61f,	// (0x000a4f08) bg_notes_pane_ParamLimits

0xa6e1,	// (0x000a4fca) list_notes_pane_ParamLimits

0x1321,	// (0x0009bc0a) scroll_pane_cp06_ParamLimits

0xa703,	// (0x000a4fec) main_notes_pane_ParamLimits

0x9aaf,	// (0x000a4398) main_welc_pane

0x99be,	// (0x000a42a7) main_welc_body_pane_ParamLimits

0x99be,	// (0x000a42a7) main_welc_body_pane

0x99d7,	// (0x000a42c0) main_welc_opti_pane_ParamLimits

0x99d7,	// (0x000a42c0) main_welc_opti_pane

0x9a0c,	// (0x000a42f5) main_welc_pane_t1_ParamLimits

0x9a0c,	// (0x000a42f5) main_welc_pane_t1

0x9a2a,	// (0x000a4313) main_welc_body_row_pane_ParamLimits

0x9a2a,	// (0x000a4313) main_welc_body_row_pane

0xe86e,	// (0x000a9157) main_welc_opti_row_pane_ParamLimits

0xe86e,	// (0x000a9157) main_welc_opti_row_pane

0xf08b,	// (0x000a9974) main_welc_opti_row_pane_g1

0x9a56,	// (0x000a433f) main_welc_opti_row_pane_t1

0xf093,	// (0x000a997c) main_welc_body_row_pane_t1

0xed85,	// (0x000a966e) popup_notif_wgt_heading_pane

0xed9f,	// (0x000a9688) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x000a9695) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x000a96a1) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x000a96b5) list_notif_wgt_row_pane_g3_ParamLimits

0x0b6c,	// (0x0009b455) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x000a96c2) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x000a96d8) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x000a96ea) list_notif_wgt_row_pane_t3_ParamLimits

0x0b73,	// (0x0009b45c) list_notif_wgt_row_pane_t_ParamLimits

0x93ff,	// (0x000a3ce8) listrow_wgtman_pane_g1_ParamLimits

0x940c,	// (0x000a3cf5) listrow_wgtman_pane_g2_ParamLimits

0xfc1a,	// (0x000aa503) listrow_wgtman_pane_g_ParamLimits

0x942a,	// (0x000a3d13) listrow_wgtman_pane_t1_ParamLimits

0x9442,	// (0x000a3d2b) listrow_wgtman_pane_t2_ParamLimits

0xfc1f,	// (0x000aa508) listrow_wgtman_pane_t_ParamLimits

0x9468,	// (0x000a3d51) wait_bar_pane_cp09_ParamLimits

0x9aaf,	// (0x000a4398) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000a998b) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000a9993) popup_notif_wgt_heading_pane_t1

0x9aaf,	// (0x000a4398) main_vids_pane

0x9aaf,	// (0x000a4398) vids_listscroll_pane

0x9a65,	// (0x000a434e) scroll_pane_cp040

0x9aaf,	// (0x000a4398) vids_list_pane

0x9a70,	// (0x000a4359) vids_list_double_pane_ParamLimits

0x9a70,	// (0x000a4359) vids_list_double_pane

0x9a88,	// (0x000a4371) vids_list_double_pane_g1

0x9a91,	// (0x000a437a) vids_list_double_pane_t1

0x9aa1,	// (0x000a438a) vids_list_double_pane_t2

0x0001,

0xfc90,	// (0x000aa579) vids_list_double_pane_t

0x4395,	// (0x0009ec7e) main_ncimui_pane_ParamLimits

0x7e0c,	// (0x000a26f5) main_ncimui_pane_g1_ParamLimits

0x7e18,	// (0x000a2701) main_ncimui_pane_g2_ParamLimits

0x7e18,	// (0x000a2701) main_ncimui_pane_g2

0x0001,

0xfa28,	// (0x000aa311) main_ncimui_pane_g_ParamLimits

0xfa28,	// (0x000aa311) main_ncimui_pane_g

0x99f2,	// (0x000a42db) main_welc_pane_g1_ParamLimits

0x99f2,	// (0x000a42db) main_welc_pane_g1

0x99fe,	// (0x000a42e7) main_welc_pane_g2_ParamLimits

0x99fe,	// (0x000a42e7) main_welc_pane_g2

0x0001,

0xfc8b,	// (0x000aa574) main_welc_pane_g_ParamLimits

0xfc8b,	// (0x000aa574) main_welc_pane_g

0xa61f,	// (0x000a4f08) listscroll_mce_pane_ParamLimits

0xb397,	// (0x000a5c80) wait_bar_pane_cp10

0xc7aa,	// (0x000a7093) main_cale_day_pane_ParamLimits

0xc7aa,	// (0x000a7093) main_cale_week_pane_ParamLimits

0xa61f,	// (0x000a4f08) main_messa_pane_ParamLimits

0x56aa,	// (0x0009ff93) main_clock2_btn_pane_ParamLimits

0x56aa,	// (0x0009ff93) main_clock2_btn_pane

0xcfa8,	// (0x000a7891) main_clock2_btn_pane_cp01_ParamLimits

0xcfa8,	// (0x000a7891) main_clock2_btn_pane_cp01

0xe94c,	// (0x000a9235) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x000a972e) main_cf0_pane_g2

0x0001,

0x0b7a,	// (0x0009b463) main_cf0_pane_g

0x95f9,	// (0x000a3ee2) area_left_week_number_pane_ParamLimits

0x960c,	// (0x000a3ef5) area_top_day_name_pane_ParamLimits

0x961a,	// (0x000a3f03) frame_month_view_pane_ParamLimits

0xef6c,	// (0x000a9855) grid_month_view_pane_ParamLimits

0xef7a,	// (0x000a9863) frm_month_g1_ParamLimits

0x9698,	// (0x000a3f81) frm_month_g2_ParamLimits

0x96a9,	// (0x000a3f92) frm_month_g3_ParamLimits

0x96ba,	// (0x000a3fa3) frm_month_g4_ParamLimits

0x96cb,	// (0x000a3fb4) frm_month_g5_ParamLimits

0x96de,	// (0x000a3fc7) frm_month_g6_ParamLimits

0x96f1,	// (0x000a3fda) frm_month_g7_ParamLimits

0xef87,	// (0x000a9870) frm_month_g8_ParamLimits

0x9704,	// (0x000a3fed) frm_month_g9_ParamLimits

0x9711,	// (0x000a3ffa) frm_month_g10_ParamLimits

0x971e,	// (0x000a4007) frm_month_g11_ParamLimits

0x972b,	// (0x000a4014) frm_month_g12_ParamLimits

0x9738,	// (0x000a4021) frm_month_g13_ParamLimits

0x9745,	// (0x000a402e) frm_month_g14_ParamLimits

0x9754,	// (0x000a403d) frm_month_g15_ParamLimits

0x9763,	// (0x000a404c) frm_month_g16_ParamLimits

0xfc3b,	// (0x000aa524) frm_month_g_ParamLimits

0xef94,	// (0x000a987d) cell_top_day_name_pane_t1_ParamLimits

0x9772,	// (0x000a405b) cell_area_left_week_number_pane_g1_ParamLimits

0x9781,	// (0x000a406a) cell_area_left_week_number_pane_t1_ParamLimits

0xce20,	// (0x000a7709) cell_month_view_pane_g1_ParamLimits

0x9797,	// (0x000a4080) cell_month_view_pane_t1_ParamLimits

0xa617,	// (0x000a4f00) main_clock2_btn_pane_g1

0xf0b8,	// (0x000a99a1) main_clock2_btn_pane_t1

0xa463,	// (0x000a4d4c) listscroll_cmail_pane_ParamLimits

0xe710,	// (0x000a8ff9) main_sp_fs_email_pane_g1_ParamLimits

0xe71c,	// (0x000a9005) main_sp_fs_email_pane_g2_ParamLimits

0x09a8,	// (0x0009b291) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x000a93dc) list_recal_day_pane_ParamLimits

0xeb04,	// (0x000a93ed) mian_recal_day_pane_t1

0x87dd,	// (0x000a30c6) list_single_dyc_row_text_pane_t4_ParamLimits

0x87dd,	// (0x000a30c6) list_single_dyc_row_text_pane_t4

0x8814,	// (0x000a30fd) list_single_dyc_row_text_pane_t5_ParamLimits

0x8814,	// (0x000a30fd) list_single_dyc_row_text_pane_t5

0xa167,	// (0x000a4a50) list_single_dyc_row_text_pane_t6_ParamLimits

0xa167,	// (0x000a4a50) list_single_dyc_row_text_pane_t6

0xaccd,	// (0x000a55b6) aid_mgn_list_cale_time_pane

0x4395,	// (0x0009ec7e) main_gallery2_pane_ParamLimits

0xcfbe,	// (0x000a78a7) main_clock2_pane_cp01_t1

0xcfcc,	// (0x000a78b5) main_clock2_pane_cp01_t3

0x0001,

0x0487,	// (0x0009ad70) main_clock2_pane_cp01_t

0x176c,	// (0x0009c055) cale_week_scroll_pane_g16_ParamLimits

0x176c,	// (0x0009c055) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
