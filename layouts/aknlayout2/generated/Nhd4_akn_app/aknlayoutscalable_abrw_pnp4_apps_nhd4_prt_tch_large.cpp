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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0009a2c9 };

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
0x0d9f,	// (0x0009b068) Screen

0x0dab,	// (0x0009b074) application_window

0x0e07,	// (0x0009b0d0) area_bottom_pane_ParamLimits

0x0e07,	// (0x0009b0d0) area_bottom_pane

0x0e60,	// (0x0009b129) area_top_pane_ParamLimits

0x0e60,	// (0x0009b129) area_top_pane

0x0ec4,	// (0x0009b18d) call_video_uplink_pane_ParamLimits

0x0ec4,	// (0x0009b18d) call_video_uplink_pane

0x0f03,	// (0x0009b1cc) main_pane_ParamLimits

0x0f03,	// (0x0009b1cc) main_pane

0xc867,	// (0x000a6b30) context_pane

0x451a,	// (0x0009e7e3) navi_pane

0x4540,	// (0x0009e809) popup_cale_events_window_ParamLimits

0x4540,	// (0x0009e809) popup_cale_events_window

0xc87a,	// (0x000a6b43) popup_mup_playback_window

0x4558,	// (0x0009e821) signal_pane

0xa7c6,	// (0x000a4a8f) main_browser_pane

0xa9bb,	// (0x000a4c84) main_burst_pane

0x439c,	// (0x0009e665) main_calc_pane

0xc84d,	// (0x000a6b16) main_cale_day_pane

0x1654,	// (0x0009b91d) main_cale_month_pane

0xc84d,	// (0x000a6b16) main_cale_week_pane

0xa9bb,	// (0x000a4c84) main_call_pane

0xa3e4,	// (0x000a46ad) main_call_poc_pane

0xa9bb,	// (0x000a4c84) main_camera_pane

0xa9bb,	// (0x000a4c84) main_chi_dic_pane

0xb1b0,	// (0x000a5479) main_clock_pane

0xa3e4,	// (0x000a46ad) main_fmradio_pane

0xa9bb,	// (0x000a4c84) main_graph_messa_pane

0xa3e4,	// (0x000a46ad) main_help_pane

0xa7c6,	// (0x000a4a8f) main_im_pane

0xa6f5,	// (0x000a49be) main_image_pane_ParamLimits

0xa6f5,	// (0x000a49be) main_image_pane

0xa3e4,	// (0x000a46ad) main_location2_pane

0xa9bb,	// (0x000a4c84) main_location_pane

0xa6f5,	// (0x000a49be) main_messa_pane

0xa3e4,	// (0x000a46ad) main_mp2_pane

0xa9bb,	// (0x000a4c84) main_mp_pane

0xa3e4,	// (0x000a46ad) main_msg_pane

0xa3e4,	// (0x000a46ad) main_mup_eq_pane

0xa3e4,	// (0x000a46ad) main_mup_pane

0xa7c6,	// (0x000a4a8f) main_notes_pane

0xa3e4,	// (0x000a46ad) main_pec_pane

0xa3e4,	// (0x000a46ad) main_phob_pane

0xa3e4,	// (0x000a46ad) main_pinb_pane

0xa3e4,	// (0x000a46ad) main_postcard_pane

0xa3e4,	// (0x000a46ad) main_qdial_pane

0xa9bb,	// (0x000a4c84) main_skin_pane

0xa3e4,	// (0x000a46ad) main_smil2_pane

0xa9bb,	// (0x000a4c84) main_smil_pane

0xa9bb,	// (0x000a4c84) main_video_pane

0xa9bb,	// (0x000a4c84) main_video_tele_pane

0xa6f5,	// (0x000a49be) main_viewer_pane_ParamLimits

0xa6f5,	// (0x000a49be) main_viewer_pane

0xa9bb,	// (0x000a4c84) main_vorec_pane

0x43e8,	// (0x0009e6b1) popup_blid_sat_info_window_ParamLimits

0x43e8,	// (0x0009e6b1) popup_blid_sat_info_window

0x4408,	// (0x0009e6d1) popup_dyc_status_message_window_ParamLimits

0x4408,	// (0x0009e6d1) popup_dyc_status_message_window

0x4416,	// (0x0009e6df) popup_grid_large_graphic_window_ParamLimits

0x4416,	// (0x0009e6df) popup_grid_large_graphic_window

0x44a5,	// (0x0009e76e) popup_loc_request_window_ParamLimits

0x44a5,	// (0x0009e76e) popup_loc_request_window

0x44f2,	// (0x0009e7bb) popup_wml_address_window_ParamLimits

0x44f2,	// (0x0009e7bb) popup_wml_address_window

0x4274,	// (0x0009e53d) call_muted_g1

0x3f30,	// (0x0009e1f9) popup_call_audio_conf_window_ParamLimits

0x3f30,	// (0x0009e1f9) popup_call_audio_conf_window

0x4284,	// (0x0009e54d) popup_call_audio_first_window_ParamLimits

0x4284,	// (0x0009e54d) popup_call_audio_first_window

0x42c4,	// (0x0009e58d) popup_call_audio_in_window_ParamLimits

0x42c4,	// (0x0009e58d) popup_call_audio_in_window

0x42e8,	// (0x0009e5b1) popup_call_audio_out_window_ParamLimits

0x42e8,	// (0x0009e5b1) popup_call_audio_out_window

0x430a,	// (0x0009e5d3) popup_call_audio_second_window_ParamLimits

0x430a,	// (0x0009e5d3) popup_call_audio_second_window

0x433a,	// (0x0009e603) popup_call_audio_wait_window_ParamLimits

0x433a,	// (0x0009e603) popup_call_audio_wait_window

0x435b,	// (0x0009e624) popup_number_entry_window_ParamLimits

0x435b,	// (0x0009e624) popup_number_entry_window

0x9b1e,	// (0x000a3de7) bg_popup_call_pane_cp05_ParamLimits

0x9b1e,	// (0x000a3de7) bg_popup_call_pane_cp05

0x9b3e,	// (0x000a3e07) popup_number_entry_window_t1

0x9b51,	// (0x000a3e1a) popup_number_entry_window_t2

0x9b63,	// (0x000a3e2c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a9393) popup_number_entry_window_t

0x9b75,	// (0x000a3e3e) text_title_cp2

0x9b88,	// (0x000a3e51) bg_popup_call_pane_cp_ParamLimits

0x9b88,	// (0x000a3e51) bg_popup_call_pane_cp

0x9b96,	// (0x000a3e5f) call_thumbnail_pane

0x9b9e,	// (0x000a3e67) popup_call_audio_in_window_g1_ParamLimits

0x9b9e,	// (0x000a3e67) popup_call_audio_in_window_g1

0x9baa,	// (0x000a3e73) popup_call_audio_in_window_g2_ParamLimits

0x9baa,	// (0x000a3e73) popup_call_audio_in_window_g2

0x9bb6,	// (0x000a3e7f) popup_call_audio_in_window_g3_ParamLimits

0x9bb6,	// (0x000a3e7f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a939c) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a939c) popup_call_audio_in_window_g

0x9bc2,	// (0x000a3e8b) popup_call_audio_in_window_t1_ParamLimits

0x9bc2,	// (0x000a3e8b) popup_call_audio_in_window_t1

0x9bde,	// (0x000a3ea7) popup_call_audio_in_window_t2_ParamLimits

0x9bde,	// (0x000a3ea7) popup_call_audio_in_window_t2

0x9bfa,	// (0x000a3ec3) popup_call_audio_in_window_t3_ParamLimits

0x9bfa,	// (0x000a3ec3) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a93a3) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a93a3) popup_call_audio_in_window_t

0x9b88,	// (0x000a3e51) bg_popup_call_pane_cp01_ParamLimits

0x9b88,	// (0x000a3e51) bg_popup_call_pane_cp01

0x9b96,	// (0x000a3e5f) call_thumbnail_pane_cp02

0x9c0d,	// (0x000a3ed6) call_type_pane_cp022

0x9c15,	// (0x000a3ede) popup_call_audio_out_window_g1_ParamLimits

0x9c15,	// (0x000a3ede) popup_call_audio_out_window_g1

0x9c27,	// (0x000a3ef0) popup_call_audio_out_window_g2_ParamLimits

0x9c27,	// (0x000a3ef0) popup_call_audio_out_window_g2

0x9c33,	// (0x000a3efc) popup_call_audio_out_window_g3_ParamLimits

0x9c33,	// (0x000a3efc) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a93aa) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a93aa) popup_call_audio_out_window_g

0x9c45,	// (0x000a3f0e) popup_call_audio_out_window_t1_ParamLimits

0x9c45,	// (0x000a3f0e) popup_call_audio_out_window_t1

0x9c5d,	// (0x000a3f26) popup_call_audio_out_window_t2_ParamLimits

0x9c5d,	// (0x000a3f26) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a93b1) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a93b1) popup_call_audio_out_window_t

0x9c72,	// (0x000a3f3b) bg_popup_call_pane_ParamLimits

0x9c72,	// (0x000a3f3b) bg_popup_call_pane

0x111f,	// (0x0009b3e8) call_thumbnail_pane_cp_ParamLimits

0x111f,	// (0x0009b3e8) call_thumbnail_pane_cp

0x9cf6,	// (0x000a3fbf) call_type_pane_cp01_ParamLimits

0x9cf6,	// (0x000a3fbf) call_type_pane_cp01

0x9d3a,	// (0x000a4003) popup_call_audio_first_window_g1_ParamLimits

0x9d3a,	// (0x000a4003) popup_call_audio_first_window_g1

0x9d86,	// (0x000a404f) popup_call_audio_first_window_g2_ParamLimits

0x9d86,	// (0x000a404f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a93b6) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a93b6) popup_call_audio_first_window_g

0x9dca,	// (0x000a4093) popup_call_audio_first_window_t1_ParamLimits

0x9dca,	// (0x000a4093) popup_call_audio_first_window_t1

0xa329,	// (0x000a45f2) popup_call_audio_first_window_t4_ParamLimits

0xa329,	// (0x000a45f2) popup_call_audio_first_window_t4

0xa3b5,	// (0x000a467e) popup_call_audio_first_window_t5_ParamLimits

0xa3b5,	// (0x000a467e) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a93bb) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a93bb) popup_call_audio_first_window_t

0xa3e4,	// (0x000a46ad) bg_popup_call_pane_cp02

0xa3ee,	// (0x000a46b7) call_type_pane_cp023

0xa3f6,	// (0x000a46bf) popup_call_audio_wait_window_g1

0xa3fe,	// (0x000a46c7) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a93c2) popup_call_audio_wait_window_g

0xa406,	// (0x000a46cf) popup_call_audio_wait_window_t3

0xa414,	// (0x000a46dd) bg_popup_call_pane_cp03_ParamLimits

0xa414,	// (0x000a46dd) bg_popup_call_pane_cp03

0xa52a,	// (0x000a47f3) call_thumbnail_pane_cp011_ParamLimits

0xa52a,	// (0x000a47f3) call_thumbnail_pane_cp011

0xa536,	// (0x000a47ff) call_type_pane_cp034_ParamLimits

0xa536,	// (0x000a47ff) call_type_pane_cp034

0xa572,	// (0x000a483b) popup_call_audio_second_window_g1_ParamLimits

0xa572,	// (0x000a483b) popup_call_audio_second_window_g1

0xa5ae,	// (0x000a4877) popup_call_audio_second_window_g2_ParamLimits

0xa5ae,	// (0x000a4877) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a93c7) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a93c7) popup_call_audio_second_window_g

0xa5ea,	// (0x000a48b3) popup_call_audio_second_window_t1_ParamLimits

0xa5ea,	// (0x000a48b3) popup_call_audio_second_window_t1

0xa66b,	// (0x000a4934) popup_call_audio_second_window_t2_ParamLimits

0xa66b,	// (0x000a4934) popup_call_audio_second_window_t2

0xa6a1,	// (0x000a496a) popup_call_audio_second_window_t3_ParamLimits

0xa6a1,	// (0x000a496a) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a93cc) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a93cc) popup_call_audio_second_window_t

0xa3e4,	// (0x000a46ad) bg_popup_call_pane_cp04

0xa6d7,	// (0x000a49a0) list_conf_pane

0xa6df,	// (0x000a49a8) popup_call_audio_conf_window_t1

0xa6ed,	// (0x000a49b6) call_thumbnail_pane_g1

0xa6f5,	// (0x000a49be) bg_pinb_pane_ParamLimits

0xa6f5,	// (0x000a49be) bg_pinb_pane

0xa703,	// (0x000a49cc) find_pinb_pane

0xa70c,	// (0x000a49d5) listscroll_pinb_pane_ParamLimits

0xa70c,	// (0x000a49d5) listscroll_pinb_pane

0xa71b,	// (0x000a49e4) pinb_bg_pane_g1

0x1143,	// (0x0009b40c) pinb_bg_pane_g2

0x114f,	// (0x0009b418) pinb_bg_pane_g3

0x115b,	// (0x0009b424) pinb_bg_pane_g4

0x1167,	// (0x0009b430) pinb_bg_pane_g5

0x1173,	// (0x0009b43c) pinb_bg_pane_g6

0x117e,	// (0x0009b447) pinb_bg_pane_g7

0x1189,	// (0x0009b452) pinb_bg_pane_g8

0x1194,	// (0x0009b45d) pinb_bg_pane_g9

0x119e,	// (0x0009b467) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a93d3) pinb_bg_pane_g

0x11bb,	// (0x0009b484) grid_pinb_pane

0x11c6,	// (0x0009b48f) list_pinb_pane

0x11d1,	// (0x0009b49a) scroll_pane_cp01_ParamLimits

0x11d1,	// (0x0009b49a) scroll_pane_cp01

0xa725,	// (0x000a49ee) find_pinb_pane_g1_ParamLimits

0xa725,	// (0x000a49ee) find_pinb_pane_g1

0xa73d,	// (0x000a4a06) find_pinb_pane_t1

0xa74f,	// (0x000a4a18) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a93ed) find_pinb_pane_t

0xa764,	// (0x000a4a2d) input_focus_pane_cp01_ParamLimits

0xa764,	// (0x000a4a2d) input_focus_pane_cp01

0x11e3,	// (0x0009b4ac) cell_pinb_pane_ParamLimits

0x11e3,	// (0x0009b4ac) cell_pinb_pane

0x120e,	// (0x0009b4d7) cell_pinb_pane_g1_ParamLimits

0x120e,	// (0x0009b4d7) cell_pinb_pane_g1

0xa770,	// (0x000a4a39) cell_pinb_pane_g2_ParamLimits

0xa770,	// (0x000a4a39) cell_pinb_pane_g2

0xa77c,	// (0x000a4a45) cell_pinb_pane_g3_ParamLimits

0xa77c,	// (0x000a4a45) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a93f2) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a93f2) cell_pinb_pane_g

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp01

0x1223,	// (0x0009b4ec) list_pinb_item_pane_ParamLimits

0x1223,	// (0x0009b4ec) list_pinb_item_pane

0xa3e4,	// (0x000a46ad) list_highlight_pane_cp02

0x124c,	// (0x0009b515) list_pinb_item_pane_g1_ParamLimits

0x124c,	// (0x0009b515) list_pinb_item_pane_g1

0x1259,	// (0x0009b522) list_pinb_item_pane_g2_ParamLimits

0x1259,	// (0x0009b522) list_pinb_item_pane_g2

0x1265,	// (0x0009b52e) list_pinb_item_pane_g3_ParamLimits

0x1265,	// (0x0009b52e) list_pinb_item_pane_g3

0x1276,	// (0x0009b53f) list_pinb_item_pane_g4_ParamLimits

0x1276,	// (0x0009b53f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a93f9) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a93f9) list_pinb_item_pane_g

0x1282,	// (0x0009b54b) list_pinb_item_pane_t1_ParamLimits

0x1282,	// (0x0009b54b) list_pinb_item_pane_t1

0x12b3,	// (0x0009b57c) calc_display_pane

0x12d1,	// (0x0009b59a) calc_paper_pane

0x12ed,	// (0x0009b5b6) grid_calc_pane

0xa3e4,	// (0x000a46ad) bg_list_pane_cp01

0x1319,	// (0x0009b5e2) clock_g1

0x1321,	// (0x0009b5ea) clock_g2

0x0001,

0xf139,	// (0x000a9402) clock_g

0x132b,	// (0x0009b5f4) clock_t1_ParamLimits

0x132b,	// (0x0009b5f4) clock_t1

0x1340,	// (0x0009b609) clock_t2_ParamLimits

0x1340,	// (0x0009b609) clock_t2

0x1352,	// (0x0009b61b) clock_t3_ParamLimits

0x1352,	// (0x0009b61b) clock_t3

0x1364,	// (0x0009b62d) clock_t4_ParamLimits

0x1364,	// (0x0009b62d) clock_t4

0x1376,	// (0x0009b63f) clock_t5_ParamLimits

0x1376,	// (0x0009b63f) clock_t5

0x138b,	// (0x0009b654) clock_t6_ParamLimits

0x138b,	// (0x0009b654) clock_t6

0x139d,	// (0x0009b666) clock_t7_ParamLimits

0x139d,	// (0x0009b666) clock_t7

0x13af,	// (0x0009b678) clock_t8_ParamLimits

0x13af,	// (0x0009b678) clock_t8

0x13c5,	// (0x0009b68e) clock_t9_ParamLimits

0x13c5,	// (0x0009b68e) clock_t9

0x0008,

0xf13e,	// (0x000a9407) clock_t_ParamLimits

0xf13e,	// (0x000a9407) clock_t

0xa788,	// (0x000a4a51) popup_clock_analogue_window_cp02

0xa788,	// (0x000a4a51) popup_clock_digital_window_cp01

0xa790,	// (0x000a4a59) listscroll_help_pane

0xa3e4,	// (0x000a46ad) phob_pre_status_pane

0xa79a,	// (0x000a4a63) grid_qdial_pane

0xa6f5,	// (0x000a49be) listscroll_mce_pane

0xa6f5,	// (0x000a49be) bg_notes_pane

0xa7a4,	// (0x000a4a6d) list_notes_pane

0x13db,	// (0x0009b6a4) scroll_pane_cp06

0xa7b2,	// (0x000a4a7b) bg_calc_paper_pane

0x13ea,	// (0x0009b6b3) list_calc_pane

0xa7c6,	// (0x000a4a8f) bg_calc_display_pane

0x1404,	// (0x0009b6cd) calc_display_pane_t1

0x1419,	// (0x0009b6e2) calc_display_pane_t2

0x142e,	// (0x0009b6f7) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a941a) calc_display_pane_t

0x1440,	// (0x0009b709) cell_calc_pane_ParamLimits

0x1440,	// (0x0009b709) cell_calc_pane

0xa7d2,	// (0x000a4a9b) bg_calc_paper_pane_g1

0xa7de,	// (0x000a4aa7) bg_calc_paper_pane_g2

0xa7ea,	// (0x000a4ab3) bg_calc_paper_pane_g3

0xa7f6,	// (0x000a4abf) bg_calc_paper_pane_g4

0xa802,	// (0x000a4acb) bg_calc_paper_pane_g5

0x146d,	// (0x0009b736) bg_calc_paper_pane_g6

0x147e,	// (0x0009b747) bg_calc_paper_pane_g7

0x148f,	// (0x0009b758) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a9421) bg_calc_paper_pane_g

0x14a0,	// (0x0009b769) calc_bg_paper_pane_g9

0x14b1,	// (0x0009b77a) list_calc_item_pane_ParamLimits

0x14b1,	// (0x0009b77a) list_calc_item_pane

0xa80e,	// (0x000a4ad7) list_calc_item_pane_g1

0x14e1,	// (0x0009b7aa) list_calc_item_pane_t1_ParamLimits

0x14e1,	// (0x0009b7aa) list_calc_item_pane_t1

0x14f3,	// (0x0009b7bc) list_calc_item_pane_t2_ParamLimits

0x14f3,	// (0x0009b7bc) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a9432) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a9432) list_calc_item_pane_t

0xa81b,	// (0x000a4ae4) cell_calc_pane_g1

0xa825,	// (0x000a4aee) grid_highlight_pane_cp02

0xa847,	// (0x000a4b10) bg_calc_display_pane_g1

0x1523,	// (0x0009b7ec) bg_calc_display_pane_g2

0xa850,	// (0x000a4b19) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a943c) bg_calc_display_pane_g

0x152d,	// (0x0009b7f6) cell_qdial_pane_ParamLimits

0x152d,	// (0x0009b7f6) cell_qdial_pane

0x1541,	// (0x0009b80a) cell_qdial_pane_g1_ParamLimits

0x1541,	// (0x0009b80a) cell_qdial_pane_g1

0x154e,	// (0x0009b817) cell_qdial_pane_g2_ParamLimits

0x154e,	// (0x0009b817) cell_qdial_pane_g2

0xa859,	// (0x000a4b22) cell_qdial_pane_g3_ParamLimits

0xa859,	// (0x000a4b22) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a9443) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a9443) cell_qdial_pane_g

0x156b,	// (0x0009b834) cell_qdial_pane_t1_ParamLimits

0x156b,	// (0x0009b834) cell_qdial_pane_t1

0x1583,	// (0x0009b84c) cell_qdial_pane_t2_ParamLimits

0x1583,	// (0x0009b84c) cell_qdial_pane_t2

0x1596,	// (0x0009b85f) cell_qdial_pane_t3_ParamLimits

0x1596,	// (0x0009b85f) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a944c) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a944c) cell_qdial_pane_t

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp04

0xa865,	// (0x000a4b2e) thumbnail_qdial_pane_ParamLimits

0xa865,	// (0x000a4b2e) thumbnail_qdial_pane

0xa8c1,	// (0x000a4b8a) list_help_pane

0xa8ca,	// (0x000a4b93) scroll_pane_cp02

0x15a9,	// (0x0009b872) help_list_pane_t1_ParamLimits

0x15a9,	// (0x0009b872) help_list_pane_t1

0x15e0,	// (0x0009b8a9) bg_notes_pane_g2

0x15e8,	// (0x0009b8b1) bg_notes_pane_g3

0x15f0,	// (0x0009b8b9) notes_bg_pane_g1

0x15f8,	// (0x0009b8c1) notes_bg_pane_g4

0x1600,	// (0x0009b8c9) notes_bg_pane_g5

0x1608,	// (0x0009b8d1) notes_bg_pane_g6

0x1610,	// (0x0009b8d9) notes_bg_pane_g7

0x1618,	// (0x0009b8e1) notes_bg_pane_g8

0x1620,	// (0x0009b8e9) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a946a) notes_bg_pane_g

0x1628,	// (0x0009b8f1) list_notes_text_pane_ParamLimits

0x1628,	// (0x0009b8f1) list_notes_text_pane

0xa8f1,	// (0x000a4bba) list_notes_text_pane_g1

0x9e76,	// (0x000a413f) list_notes_text_pane_t1

0x1654,	// (0x0009b91d) listscroll_cale_week_pane

0x1679,	// (0x0009b942) bg_cale_heading_pane

0xa914,	// (0x000a4bdd) bg_cale_pane_cp01

0x169b,	// (0x0009b964) cale_week_corner_pane

0x16b5,	// (0x0009b97e) cale_week_day_heading_pane

0x16d7,	// (0x0009b9a0) cale_week_scroll_pane_g1

0x16f4,	// (0x0009b9bd) cale_week_scroll_pane_g2

0x1707,	// (0x0009b9d0) cale_week_scroll_pane_g3

0x171a,	// (0x0009b9e3) cale_week_scroll_pane_g4

0x172d,	// (0x0009b9f6) cale_week_scroll_pane_g5

0x1740,	// (0x0009ba09) cale_week_scroll_pane_g6

0x1753,	// (0x0009ba1c) cale_week_scroll_pane_g7

0x1766,	// (0x0009ba2f) cale_week_scroll_pane_g8

0x177b,	// (0x0009ba44) cale_week_scroll_pane_g9

0x178e,	// (0x0009ba57) cale_week_scroll_pane_g10

0x17a1,	// (0x0009ba6a) cale_week_scroll_pane_g11

0x17b4,	// (0x0009ba7d) cale_week_scroll_pane_g12

0x17cb,	// (0x0009ba94) cale_week_scroll_pane_g13

0x17e6,	// (0x0009baaf) cale_week_scroll_pane_g14

0x1801,	// (0x0009baca) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a9479) cale_week_scroll_pane_g

0x1831,	// (0x0009bafa) cale_week_time_pane

0x1846,	// (0x0009bb0f) grid_cale_week_pane

0xa943,	// (0x000a4c0c) scroll_pane_cp08

0x1867,	// (0x0009bb30) cell_cale_week_pane_ParamLimits

0x1867,	// (0x0009bb30) cell_cale_week_pane

0x18cb,	// (0x0009bb94) cale_week_day_heading_pane_t1

0x1906,	// (0x0009bbcf) cale_week_day_heading_pane_t2

0x1941,	// (0x0009bc0a) cale_week_day_heading_pane_t3

0x197c,	// (0x0009bc45) cale_week_day_heading_pane_t4

0x19b7,	// (0x0009bc80) cale_week_day_heading_pane_t5

0x19f2,	// (0x0009bcbb) cale_week_day_heading_pane_t6

0x1a2d,	// (0x0009bcf6) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a949a) cale_week_day_heading_pane_t

0xa960,	// (0x000a4c29) bg_cale_side_pane

0x1a68,	// (0x0009bd31) cale_week_time_pane_t1

0x1a82,	// (0x0009bd4b) cale_week_time_pane_t2

0x1a9c,	// (0x0009bd65) cale_week_time_pane_t3

0x1ab6,	// (0x0009bd7f) cale_week_time_pane_t4

0x1ad0,	// (0x0009bd99) cale_week_time_pane_t5

0x1aea,	// (0x0009bdb3) cale_week_time_pane_t6

0x1b0a,	// (0x0009bdd3) cale_week_time_pane_t7

0x1b2e,	// (0x0009bdf7) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a94a9) cale_week_time_pane_t

0x1b52,	// (0x0009be1b) cell_cale_week_pane_g2

0x1b76,	// (0x0009be3f) cell_cale_week_pane_g3_ParamLimits

0x1b76,	// (0x0009be3f) cell_cale_week_pane_g3

0xa96e,	// (0x000a4c37) grid_highlight_pane_cp07

0xa976,	// (0x000a4c3f) listscroll_gms_pane

0xa980,	// (0x000a4c49) grid_gms_pane

0xa989,	// (0x000a4c52) listscroll_gms_pane_g1

0xa991,	// (0x000a4c5a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a94ba) listscroll_gms_pane_g

0x1b8e,	// (0x0009be57) scroll_pane_cp010

0x1b99,	// (0x0009be62) cell_gms_pane_ParamLimits

0x1b99,	// (0x0009be62) cell_gms_pane

0x1ba9,	// (0x0009be72) cell_gms_pane_g1

0xa999,	// (0x000a4c62) cell_gms_pane_g2

0xa9a1,	// (0x000a4c6a) cell_gms_pane_g3

0xa9aa,	// (0x000a4c73) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a94bf) cell_gms_pane_g

0xa9b3,	// (0x000a4c7c) grid_highlight_pane_cp09

0x421c,	// (0x0009e4e5) phob_pre_status_pane_g1

0x4224,	// (0x0009e4ed) phob_pre_status_pane_g2

0x422c,	// (0x0009e4f5) phob_pre_status_pane_g3

0x4234,	// (0x0009e4fd) phob_pre_status_pane_g4

0x0004,

0xf500,	// (0x000a97c9) phob_pre_status_pane_g

0x4244,	// (0x0009e50d) phob_pre_status_pane_t1

0x4254,	// (0x0009e51d) phob_pre_status_pane_t2

0x4264,	// (0x0009e52d) phob_pre_status_pane_t3

0x0002,

0xf50b,	// (0x000a97d4) phob_pre_status_pane_t

0xa9bb,	// (0x000a4c84) bg_list_pane_cp05

0x1bb9,	// (0x0009be82) grid_vorec_pane

0x1bc3,	// (0x0009be8c) vorec_t1

0x1bd1,	// (0x0009be9a) vorec_t2

0x1bdf,	// (0x0009bea8) vorec_t3

0x1bed,	// (0x0009beb6) vorec_t4

0x9aee,	// (0x000a3db7) vorec_t5

0x9afc,	// (0x000a3dc5) vorec_t6

0x0004,

0xf1ff,	// (0x000a94c8) vorec_t

0x9b0a,	// (0x000a3dd3) wait_bar_pane_cp01

0x1c09,	// (0x0009bed2) cell_vorec_pane_ParamLimits

0x1c09,	// (0x0009bed2) cell_vorec_pane

0x1c1c,	// (0x0009bee5) cell_vorec_pane_g1

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp05

0x1c36,	// (0x0009beff) cams_zoom_pane

0x1c42,	// (0x0009bf0b) image_vga_pane

0x1c51,	// (0x0009bf1a) main_camera_pane_g1

0x1c5f,	// (0x0009bf28) main_camera_pane_g2

0x1c6b,	// (0x0009bf34) main_camera_pane_g3

0x1c77,	// (0x0009bf40) main_camera_pane_g4

0x1c83,	// (0x0009bf4c) main_camera_pane_g5

0x1c8f,	// (0x0009bf58) main_camera_pane_g6

0x1c9b,	// (0x0009bf64) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a94d3) main_camera_pane_g

0x1ca7,	// (0x0009bf70) main_camera_pane_t1

0x1cb9,	// (0x0009bf82) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a94e4) main_camera_pane_t

0x1cda,	// (0x0009bfa3) cams_zoom_pane_cp_ParamLimits

0x1cda,	// (0x0009bfa3) cams_zoom_pane_cp

0x1cfe,	// (0x0009bfc7) image_cif_pane_ParamLimits

0x1cfe,	// (0x0009bfc7) image_cif_pane

0x1d1c,	// (0x0009bfe5) image_subqcif_pane

0x1d24,	// (0x0009bfed) main_video_pane_g1_ParamLimits

0x1d24,	// (0x0009bfed) main_video_pane_g1

0x1d44,	// (0x0009c00d) main_video_pane_g2_ParamLimits

0x1d44,	// (0x0009c00d) main_video_pane_g2

0x1d74,	// (0x0009c03d) main_video_pane_g3_ParamLimits

0x1d74,	// (0x0009c03d) main_video_pane_g3

0x1d9d,	// (0x0009c066) main_video_pane_g4_ParamLimits

0x1d9d,	// (0x0009c066) main_video_pane_g4

0x1dc6,	// (0x0009c08f) main_video_pane_g5_ParamLimits

0x1dc6,	// (0x0009c08f) main_video_pane_g5

0xa9cf,	// (0x000a4c98) main_video_pane_g6_ParamLimits

0xa9cf,	// (0x000a4c98) main_video_pane_g6

0x0006,

0xf220,	// (0x000a94e9) main_video_pane_g_ParamLimits

0xf220,	// (0x000a94e9) main_video_pane_g

0x1de8,	// (0x0009c0b1) main_video_pane_t1_ParamLimits

0x1de8,	// (0x0009c0b1) main_video_pane_t1

0xa9e9,	// (0x000a4cb2) cams_zoom_pane_g1

0xa9f2,	// (0x000a4cbb) cams_zoom_pane_g2

0xa9fb,	// (0x000a4cc4) cams_zoom_pane_g3

0xaa04,	// (0x000a4ccd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a94f8) cams_zoom_pane_g

0x1e32,	// (0x0009c0fb) grid_cams_pane

0x1e40,	// (0x0009c109) linegrid_cams_pane

0x1e4e,	// (0x0009c117) cell_cams_pane_ParamLimits

0x1e4e,	// (0x0009c117) cell_cams_pane

0xaa0d,	// (0x000a4cd6) cams_burst_image_pane

0xaa15,	// (0x000a4cde) cell_cams_pane_g1

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp03

0xa81b,	// (0x000a4ae4) mp_bg_pane_g1

0xa3e4,	// (0x000a46ad) bg_list_pane_cp03

0xc772,	// (0x000a6a3b) bg_mp_pane

0xc77a,	// (0x000a6a43) grid_mp_pane

0xc782,	// (0x000a6a4b) media_player_g1

0xc78a,	// (0x000a6a53) media_player_t1

0xc798,	// (0x000a6a61) media_player_t2

0xc7a6,	// (0x000a6a6f) media_player_t3

0xc7b4,	// (0x000a6a7d) media_player_t4

0xc7c2,	// (0x000a6a8b) media_player_t5

0xc7d0,	// (0x000a6a99) media_player_t6

0xc7de,	// (0x000a6aa7) media_player_t7

0x0006,

0x0343,	// (0x0009a60c) media_player_t

0xc7ec,	// (0x000a6ab5) wait_bar_pane_cp02

0xf4ec,	// (0x000a97b5) main_usb_pane_t

0x4213,	// (0x0009e4dc) cell_mp_pane

0xa81b,	// (0x000a4ae4) cell_mp_pane_g1

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp06

0xaa1d,	// (0x000a4ce6) grid_skin_colour_pane

0xaa25,	// (0x000a4cee) list_highlight_pane_cp03

0x1f58,	// (0x0009c221) skin_g1

0xaa2d,	// (0x000a4cf6) skin_t1

0xaa3c,	// (0x000a4d05) skin_t2

0x0001,

0xf264,	// (0x000a952d) skin_t

0x1f62,	// (0x0009c22b) cell_skin_colour_pane_ParamLimits

0x1f62,	// (0x0009c22b) cell_skin_colour_pane

0xaa4a,	// (0x000a4d13) cell_skin_colour_pane_g1

0x1fe6,	// (0x0009c2af) call_video_g1_ParamLimits

0x1fe6,	// (0x0009c2af) call_video_g1

0x1ff6,	// (0x0009c2bf) call_video_g2_ParamLimits

0x1ff6,	// (0x0009c2bf) call_video_g2

0x0001,

0xf269,	// (0x000a9532) call_video_g_ParamLimits

0xf269,	// (0x000a9532) call_video_g

0x2050,	// (0x0009c319) call_video_uplink_pane_cp1_ParamLimits

0x2050,	// (0x0009c319) call_video_uplink_pane_cp1

0xaa5c,	// (0x000a4d25) call_video_uplink_pane_cp2

0x211c,	// (0x0009c3e5) video_down_crop_pane_ParamLimits

0x211c,	// (0x0009c3e5) video_down_crop_pane

0x220e,	// (0x0009c4d7) video_down_pane_ParamLimits

0x220e,	// (0x0009c4d7) video_down_pane

0xaa64,	// (0x000a4d2d) video_down_subqcif_pane_ParamLimits

0xaa64,	// (0x000a4d2d) video_down_subqcif_pane

0xaa7c,	// (0x000a4d45) video_down_subqcif_pane_cp_ParamLimits

0xaa7c,	// (0x000a4d45) video_down_subqcif_pane_cp

0xaaa2,	// (0x000a4d6b) im_reading_pane_ParamLimits

0xaaa2,	// (0x000a4d6b) im_reading_pane

0x232e,	// (0x0009c5f7) im_writing_pane_ParamLimits

0x232e,	// (0x0009c5f7) im_writing_pane

0x234c,	// (0x0009c615) im_reading_pane_t1

0xaabc,	// (0x000a4d85) list_im_pane

0xaacd,	// (0x000a4d96) scroll_pane_cp07

0x23a4,	// (0x0009c66d) im_writing_pane_t1_ParamLimits

0x23a4,	// (0x0009c66d) im_writing_pane_t1

0xaae6,	// (0x000a4daf) im_writing_pane_t2_ParamLimits

0xaae6,	// (0x000a4daf) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a953c) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a953c) im_writing_pane_t

0xa3e4,	// (0x000a46ad) input_focus_pane_cp04

0xa3e4,	// (0x000a46ad) input_focus_pane_cp05

0x23b6,	// (0x0009c67f) list_im_single_pane_ParamLimits

0x23b6,	// (0x0009c67f) list_im_single_pane

0x23dd,	// (0x0009c6a6) list_single_im_pane_t1

0x41d7,	// (0x0009e4a0) blid_accuracy_pane

0x41df,	// (0x0009e4a8) blid_compass_pane

0x41e9,	// (0x0009e4b2) main_location_t1

0x41f7,	// (0x0009e4c0) main_location_t2

0x4205,	// (0x0009e4ce) main_location_t3

0x0002,

0xf4f9,	// (0x000a97c2) main_location_t

0xa3e4,	// (0x000a46ad) aid_levels_location

0xa81b,	// (0x000a4ae4) blid_accuracy_pane_g1

0xa81b,	// (0x000a4ae4) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a959e) blid_accuracy_pane_g

0xab2e,	// (0x000a4df7) wml_content_pane

0xab6c,	// (0x000a4e35) wml_button_pane_ParamLimits

0xab6c,	// (0x000a4e35) wml_button_pane

0x23ec,	// (0x0009c6b5) wml_list_single_large_pane_ParamLimits

0x23ec,	// (0x0009c6b5) wml_list_single_large_pane

0x2417,	// (0x0009c6e0) wml_list_single_medium_pane_ParamLimits

0x2417,	// (0x0009c6e0) wml_list_single_medium_pane

0x2449,	// (0x0009c712) wml_list_single_small_pane_ParamLimits

0x2449,	// (0x0009c712) wml_list_single_small_pane

0xab80,	// (0x000a4e49) wml_selection_box_pane_ParamLimits

0xab80,	// (0x000a4e49) wml_selection_box_pane

0xab93,	// (0x000a4e5c) wml_list_single_pane_t1

0xaba2,	// (0x000a4e6b) wml_list_single_medium_pane_t1

0xabb1,	// (0x000a4e7a) wml_list_single_large_pane_t1

0xabc0,	// (0x000a4e89) input_focus_pane_cp02_ParamLimits

0xabc0,	// (0x000a4e89) input_focus_pane_cp02

0xabd3,	// (0x000a4e9c) wml_selection_box_pane_g1

0xabdc,	// (0x000a4ea5) wml_selection_box_pane_t1_ParamLimits

0xabdc,	// (0x000a4ea5) wml_selection_box_pane_t1

0xa6f5,	// (0x000a49be) bg_wml_button_pane_ParamLimits

0xa6f5,	// (0x000a49be) bg_wml_button_pane

0xabf4,	// (0x000a4ebd) wml_button_pane_g1

0xabfc,	// (0x000a4ec5) wml_button_pane_t1

0xabf4,	// (0x000a4ebd) wml_button_bg_pane_g1

0xac0c,	// (0x000a4ed5) wml_button_bg_pane_g2

0xac14,	// (0x000a4edd) wml_button_bg_pane_g3

0xac1c,	// (0x000a4ee5) wml_button_bg_pane_g4

0xac24,	// (0x000a4eed) wml_button_bg_pane_g5

0xac2c,	// (0x000a4ef5) wml_button_bg_pane_g6

0xac34,	// (0x000a4efd) wml_button_bg_pane_g7

0xac3c,	// (0x000a4f05) wml_button_bg_pane_g8

0xac44,	// (0x000a4f0d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a9541) wml_button_bg_pane_g

0x2486,	// (0x0009c74f) bg_list_pane_cp02

0xac4c,	// (0x000a4f15) mce_header_pane_ParamLimits

0xac4c,	// (0x000a4f15) mce_header_pane

0xac62,	// (0x000a4f2b) mce_icon_pane

0xac62,	// (0x000a4f2b) mce_image_pane

0xac6b,	// (0x000a4f34) mce_text_pane_ParamLimits

0xac6b,	// (0x000a4f34) mce_text_pane

0x2490,	// (0x0009c759) scroll_pane_cp03

0xab64,	// (0x000a4e2d) scroll_pane_cp04

0xac7e,	// (0x000a4f47) scroll_pane_cp05_ParamLimits

0xac7e,	// (0x000a4f47) scroll_pane_cp05

0x249a,	// (0x0009c763) mce_header_field_pane_ParamLimits

0x249a,	// (0x0009c763) mce_header_field_pane

0x24ba,	// (0x0009c783) mce_header_field_pane_2_ParamLimits

0x24ba,	// (0x0009c783) mce_header_field_pane_2

0x24d0,	// (0x0009c799) mce_header_field_pane_3

0x24d8,	// (0x0009c7a1) list_single_mce_message_pane_ParamLimits

0x24d8,	// (0x0009c7a1) list_single_mce_message_pane

0x2506,	// (0x0009c7cf) list_single_mce_smart_pane_ParamLimits

0x2506,	// (0x0009c7cf) list_single_mce_smart_pane

0xac8a,	// (0x000a4f53) input_focus_pane_cp03

0xac93,	// (0x000a4f5c) list_header_data_pane

0x253f,	// (0x0009c808) mce_header_field_pane_t1

0x254d,	// (0x0009c816) list_single_mce_header_pane_ParamLimits

0x254d,	// (0x0009c816) list_single_mce_header_pane

0xac9b,	// (0x000a4f64) list_single_mce_header_pane_t1

0xacaa,	// (0x000a4f73) list_single_mce_message_pane_g1

0xacb2,	// (0x000a4f7b) list_single_mce_message_pane_t1

0x25a3,	// (0x0009c86c) bg_cale_heading_pane_cp01_ParamLimits

0x25a3,	// (0x0009c86c) bg_cale_heading_pane_cp01

0xacc0,	// (0x000a4f89) bg_cale_pane_cp02_ParamLimits

0xacc0,	// (0x000a4f89) bg_cale_pane_cp02

0x25e6,	// (0x0009c8af) cale_month_corner_pane

0x2600,	// (0x0009c8c9) cale_month_day_heading_pane_ParamLimits

0x2600,	// (0x0009c8c9) cale_month_day_heading_pane

0x265b,	// (0x0009c924) cale_month_pane_g1_ParamLimits

0x265b,	// (0x0009c924) cale_month_pane_g1

0x2693,	// (0x0009c95c) cale_month_pane_g2_ParamLimits

0x2693,	// (0x0009c95c) cale_month_pane_g2

0x26be,	// (0x0009c987) cale_month_pane_g3_ParamLimits

0x26be,	// (0x0009c987) cale_month_pane_g3

0x270e,	// (0x0009c9d7) cale_month_pane_g4_ParamLimits

0x270e,	// (0x0009c9d7) cale_month_pane_g4

0x275e,	// (0x0009ca27) cale_month_pane_g5_ParamLimits

0x275e,	// (0x0009ca27) cale_month_pane_g5

0x27ae,	// (0x0009ca77) cale_month_pane_g6_ParamLimits

0x27ae,	// (0x0009ca77) cale_month_pane_g6

0x27fe,	// (0x0009cac7) cale_month_pane_g7_ParamLimits

0x27fe,	// (0x0009cac7) cale_month_pane_g7

0x2866,	// (0x0009cb2f) cale_month_pane_g8_ParamLimits

0x2866,	// (0x0009cb2f) cale_month_pane_g8

0x28ce,	// (0x0009cb97) cale_month_pane_g9_ParamLimits

0x28ce,	// (0x0009cb97) cale_month_pane_g9

0x292c,	// (0x0009cbf5) cale_month_pane_g10_ParamLimits

0x292c,	// (0x0009cbf5) cale_month_pane_g10

0x298a,	// (0x0009cc53) cale_month_pane_g11_ParamLimits

0x298a,	// (0x0009cc53) cale_month_pane_g11

0x29de,	// (0x0009cca7) cale_month_pane_g12_ParamLimits

0x29de,	// (0x0009cca7) cale_month_pane_g12

0x2a34,	// (0x0009ccfd) cale_month_pane_g13_ParamLimits

0x2a34,	// (0x0009ccfd) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a9554) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a9554) cale_month_pane_g

0x2a8a,	// (0x0009cd53) cale_month_week_pane

0x2a9f,	// (0x0009cd68) grid_cale_month_pane_ParamLimits

0x2a9f,	// (0x0009cd68) grid_cale_month_pane

0x2af1,	// (0x0009cdba) cale_month_day_heading_pane_t1

0x2b77,	// (0x0009ce40) cale_month_day_heading_pane_t2

0x2c08,	// (0x0009ced1) cale_month_day_heading_pane_t3

0x2c99,	// (0x0009cf62) cale_month_day_heading_pane_t4

0x2d2a,	// (0x0009cff3) cale_month_day_heading_pane_t5

0x2dbb,	// (0x0009d084) cale_month_day_heading_pane_t6

0x2e58,	// (0x0009d121) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a956f) cale_month_day_heading_pane_t

0xa960,	// (0x000a4c29) bg_cale_side_pane_cp01

0x2f01,	// (0x0009d1ca) cale_month_week_pane_t1

0x2f1a,	// (0x0009d1e3) cale_month_week_pane_t2

0x2f33,	// (0x0009d1fc) cale_month_week_pane_t3

0x2f4c,	// (0x0009d215) cale_month_week_pane_t4

0x2f67,	// (0x0009d230) cale_month_week_pane_t5

0x2f88,	// (0x0009d251) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a957e) cale_month_week_pane_t

0x2fa9,	// (0x0009d272) cell_cale_month_pane_ParamLimits

0x2fa9,	// (0x0009d272) cell_cale_month_pane

0x30f9,	// (0x0009d3c2) cell_cale_month_pane_g1

0x311f,	// (0x0009d3e8) cell_cale_month_pane_t1_ParamLimits

0x311f,	// (0x0009d3e8) cell_cale_month_pane_t1

0xa96e,	// (0x000a4c37) grid_highlight_pane_cp08

0xa81b,	// (0x000a4ae4) main_smil_g1

0x314b,	// (0x0009d414) smil_status_pane

0xacff,	// (0x000a4fc8) smil_text_pane

0xc652,	// (0x000a691b) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x000a6923) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d4,	// (0x000a979d) bg_popup_call3_rect_pane_g

0xc8e1,	// (0x000a6baa) smil_status_volume_pane_g1

0xad09,	// (0x000a4fd2) smil_status_pane_t1

0x460e,	// (0x0009e8d7) volume_smil_pane

0xad20,	// (0x000a4fe9) list_smil_text_pane

0x315e,	// (0x0009d427) scroll_pane_cp011

0x3169,	// (0x0009d432) smil_text_list_pane_t1_ParamLimits

0x3169,	// (0x0009d432) smil_text_list_pane_t1

0x31f6,	// (0x0009d4bf) aid_volume_smil_ParamLimits

0x31f6,	// (0x0009d4bf) aid_volume_smil

0xa81b,	// (0x000a4ae4) smil_volume_pane_g1

0xa81b,	// (0x000a4ae4) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a959e) smil_volume_pane_g

0x1654,	// (0x0009b91d) listscroll_cale_day_pane

0xad2a,	// (0x000a4ff3) bg_cale_pane

0xad42,	// (0x000a500b) list_cale_pane

0xad65,	// (0x000a502e) scroll_pane_cp09

0xad76,	// (0x000a503f) cale_bg_pane_g1

0xad7e,	// (0x000a5047) cale_bg_pane_g2

0xad86,	// (0x000a504f) cale_bg_pane_g3

0xad8e,	// (0x000a5057) cale_bg_pane_g4

0xad96,	// (0x000a505f) cale_bg_pane_g5

0xad9e,	// (0x000a5067) cale_bg_pane_g6

0xada6,	// (0x000a506f) cale_bg_pane_g7

0xadae,	// (0x000a5077) cale_bg_pane_g8

0xadb6,	// (0x000a507f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a95a3) cale_bg_pane_g

0x3220,	// (0x0009d4e9) list_cale_time_pane_ParamLimits

0x3220,	// (0x0009d4e9) list_cale_time_pane

0xadbe,	// (0x000a5087) list_cale_time_pane_g1_ParamLimits

0xadbe,	// (0x000a5087) list_cale_time_pane_g1

0xadca,	// (0x000a5093) list_cale_time_pane_g2_ParamLimits

0xadca,	// (0x000a5093) list_cale_time_pane_g2

0x3248,	// (0x0009d511) list_cale_time_pane_g3_ParamLimits

0x3248,	// (0x0009d511) list_cale_time_pane_g3

0x3256,	// (0x0009d51f) list_cale_time_pane_g4_ParamLimits

0x3256,	// (0x0009d51f) list_cale_time_pane_g4

0x3264,	// (0x0009d52d) list_cale_time_pane_g5_ParamLimits

0x3264,	// (0x0009d52d) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a95b6) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a95b6) list_cale_time_pane_g

0xade4,	// (0x000a50ad) list_cale_time_pane_t1_ParamLimits

0xade4,	// (0x000a50ad) list_cale_time_pane_t1

0xae0c,	// (0x000a50d5) list_cale_time_pane_t2_ParamLimits

0xae0c,	// (0x000a50d5) list_cale_time_pane_t2

0x362c,	// (0x0009d8f5) aid_blid_cardinal_pane

0x366e,	// (0x0009d937) compass_pane_t4

0xae34,	// (0x000a50fd) list_cale_time_pane_t4_ParamLimits

0xae34,	// (0x000a50fd) list_cale_time_pane_t4

0x367c,	// (0x0009d945) compass_pane_t5

0x368c,	// (0x0009d955) compass_pane_t6

0x369a,	// (0x0009d963) compass_pane_t7

0xb2ca,	// (0x000a5593) navi_pane_cc_t1

0xb4b5,	// (0x000a577e) aid_phob_thumbnail_center_pane

0x3cd8,	// (0x0009dfa1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a95c3) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a95c3) list_cale_time_pane_t

0x9b88,	// (0x000a3e51) bg_popup_window_pane_cp02_ParamLimits

0x9b88,	// (0x000a3e51) bg_popup_window_pane_cp02

0xae5c,	// (0x000a5125) heading_pane_cp01_ParamLimits

0xae5c,	// (0x000a5125) heading_pane_cp01

0xae68,	// (0x000a5131) loc_req_pane_ParamLimits

0xae68,	// (0x000a5131) loc_req_pane

0xae78,	// (0x000a5141) loc_type_pane_ParamLimits

0xae78,	// (0x000a5141) loc_type_pane

0xae8a,	// (0x000a5153) loc_type_pane_t1_ParamLimits

0xae8a,	// (0x000a5153) loc_type_pane_t1

0xae9c,	// (0x000a5165) loc_type_pane_t2_ParamLimits

0xae9c,	// (0x000a5165) loc_type_pane_t2

0xaeae,	// (0x000a5177) loc_type_pane_t3_ParamLimits

0xaeae,	// (0x000a5177) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a95ca) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a95ca) loc_type_pane_t

0xaec0,	// (0x000a5189) list_loc_req_pane

0xaeca,	// (0x000a5193) scroll_pane_cp012

0x3272,	// (0x0009d53b) list_single_loc_request_popup_menu_pane_ParamLimits

0x3272,	// (0x0009d53b) list_single_loc_request_popup_menu_pane

0xaed5,	// (0x000a519e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaed5,	// (0x000a519e) list_single_loc_request_popup_menu_pane_g1

0xaee1,	// (0x000a51aa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaee1,	// (0x000a51aa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a95d1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a95d1) list_single_loc_request_popup_menu_pane_g

0xaeed,	// (0x000a51b6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeed,	// (0x000a51b6) list_single_loc_request_popup_menu_pane_t1

0x328c,	// (0x0009d555) bg_popup_window_pane_cp03_ParamLimits

0x328c,	// (0x0009d555) bg_popup_window_pane_cp03

0x329a,	// (0x0009d563) heading_loc_req_pane_ParamLimits

0x329a,	// (0x0009d563) heading_loc_req_pane

0x32a6,	// (0x0009d56f) popup_dyc_status_message_window_g1_ParamLimits

0x32a6,	// (0x0009d56f) popup_dyc_status_message_window_g1

0x32b2,	// (0x0009d57b) popup_dyc_status_message_window_t1_ParamLimits

0x32b2,	// (0x0009d57b) popup_dyc_status_message_window_t1

0x32c4,	// (0x0009d58d) popup_dyc_status_message_window_t2_ParamLimits

0x32c4,	// (0x0009d58d) popup_dyc_status_message_window_t2

0x32d6,	// (0x0009d59f) popup_dyc_status_message_window_t3_ParamLimits

0x32d6,	// (0x0009d59f) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a95d6) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a95d6) popup_dyc_status_message_window_t

0xa3e4,	// (0x000a46ad) bg_heading_pane_cp01

0xaf03,	// (0x000a51cc) heading_loc_req_pane_g1

0xaf0b,	// (0x000a51d4) heading_loc_req_pane_g2

0xaf13,	// (0x000a51dc) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a95dd) heading_loc_req_pane_g

0xaf1b,	// (0x000a51e4) heading_loc_req_pane_t1

0xaf2a,	// (0x000a51f3) bg_popup_sub_pane_cp01_ParamLimits

0xaf2a,	// (0x000a51f3) bg_popup_sub_pane_cp01

0xaf38,	// (0x000a5201) popup_cale_events_window_g1_ParamLimits

0xaf38,	// (0x000a5201) popup_cale_events_window_g1

0xaf58,	// (0x000a5221) popup_cale_events_window_g2_ParamLimits

0xaf58,	// (0x000a5221) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a9611) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a9611) popup_cale_events_window_g

0xaf78,	// (0x000a5241) popup_cale_events_window_t1_ParamLimits

0xaf78,	// (0x000a5241) popup_cale_events_window_t1

0xaf8a,	// (0x000a5253) popup_cale_events_window_t2_ParamLimits

0xaf8a,	// (0x000a5253) popup_cale_events_window_t2

0xafc8,	// (0x000a5291) popup_cale_events_window_t3_ParamLimits

0xafc8,	// (0x000a5291) popup_cale_events_window_t3

0xb002,	// (0x000a52cb) popup_cale_events_window_t4_ParamLimits

0xb002,	// (0x000a52cb) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a9616) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a9616) popup_cale_events_window_t

0x33cf,	// (0x0009d698) call_type_pane

0xb47a,	// (0x000a5743) popup_call_status_window_g1

0x33db,	// (0x0009d6a4) popup_call_status_window_g2

0x33e7,	// (0x0009d6b0) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a961f) popup_call_status_window_g

0xb038,	// (0x000a5301) call_type_pane_g1

0xb041,	// (0x000a530a) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a9626) call_type_pane_g

0xa3e4,	// (0x000a46ad) bg_popup_sub_pane_cp02

0xb04a,	// (0x000a5313) listscroll_popup_wml_pane

0xb052,	// (0x000a531b) list_wml_pane

0xb05c,	// (0x000a5325) scroll_pane_cp013

0xb067,	// (0x000a5330) list_single_graphic_popup_wml_pane_ParamLimits

0xb067,	// (0x000a5330) list_single_graphic_popup_wml_pane

0xa81b,	// (0x000a4ae4) list_single_graphic_popup_wml_pane_g1

0xb07b,	// (0x000a5344) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a962b) list_single_graphic_popup_wml_pane_g

0xb083,	// (0x000a534c) list_single_graphic_popup_wml_pane_t1

0xb0b7,	// (0x000a5380) aid_call_pane

0xa6ed,	// (0x000a49b6) popup_clock_analogue_window_g1

0xa6ed,	// (0x000a49b6) popup_clock_analogue_window_g2

0x33f3,	// (0x0009d6bc) popup_clock_analogue_window_g3

0x33f3,	// (0x0009d6bc) popup_clock_analogue_window_g4

0xa81b,	// (0x000a4ae4) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a9630) popup_clock_analogue_window_g

0x33fb,	// (0x0009d6c4) popup_clock_analogue_window_t1

0x3409,	// (0x0009d6d2) clock_digital_number_pane_ParamLimits

0x3409,	// (0x0009d6d2) clock_digital_number_pane

0x3415,	// (0x0009d6de) clock_digital_number_pane_cp02_ParamLimits

0x3415,	// (0x0009d6de) clock_digital_number_pane_cp02

0x3421,	// (0x0009d6ea) clock_digital_number_pane_cp03_ParamLimits

0x3421,	// (0x0009d6ea) clock_digital_number_pane_cp03

0x342d,	// (0x0009d6f6) clock_digital_number_pane_cp04_ParamLimits

0x342d,	// (0x0009d6f6) clock_digital_number_pane_cp04

0x3439,	// (0x0009d702) clock_digital_separator_pane_ParamLimits

0x3439,	// (0x0009d702) clock_digital_separator_pane

0x3445,	// (0x0009d70e) popup_clock_digital_window_t1

0xa81b,	// (0x000a4ae4) clock_digital_number_pane_g1

0xa81b,	// (0x000a4ae4) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a959e) clock_digital_number_pane_g

0xa81b,	// (0x000a4ae4) clock_digital_separator_pane_g1

0xa81b,	// (0x000a4ae4) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a959e) clock_digital_separator_pane_g

0xa3e4,	// (0x000a46ad) bg_popup_window_pane_cp04

0xb0bf,	// (0x000a5388) heading_pane_cp03

0xb0c7,	// (0x000a5390) listscroll_popup_gms_pane

0xb0cf,	// (0x000a5398) grid_large_graphic_popup_pane

0xb0d9,	// (0x000a53a2) listscroll_popup_gms_pane_g1

0xb0e1,	// (0x000a53aa) listscroll_popup_gms_pane_g2

0x0001,

0x00d7,	// (0x0009a3a0) listscroll_popup_gms_pane_g

0xab64,	// (0x000a4e2d) scroll_pane_cp014

0x3462,	// (0x0009d72b) cell_large_graphic_popup_pane_ParamLimits

0x3462,	// (0x0009d72b) cell_large_graphic_popup_pane

0x347a,	// (0x0009d743) cell_large_graphic_popup_pane_g1_ParamLimits

0x347a,	// (0x0009d743) cell_large_graphic_popup_pane_g1

0xb0e9,	// (0x000a53b2) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0e9,	// (0x000a53b2) cell_large_graphic_popup_pane_g2

0xb0f5,	// (0x000a53be) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0f5,	// (0x000a53be) cell_large_graphic_popup_pane_g3

0xb102,	// (0x000a53cb) cell_large_graphic_popup_pane_g4_ParamLimits

0xb102,	// (0x000a53cb) cell_large_graphic_popup_pane_g4

0x0003,

0xf372,	// (0x000a963b) cell_large_graphic_popup_pane_g_ParamLimits

0xf372,	// (0x000a963b) cell_large_graphic_popup_pane_g

0xb112,	// (0x000a53db) grid_highlight_pane_cp010

0xa81b,	// (0x000a4ae4) bg_popup_call_pane_g1

0xb11c,	// (0x000a53e5) list_single_graphic_popup_conf_pane_ParamLimits

0xb11c,	// (0x000a53e5) list_single_graphic_popup_conf_pane

0xb12f,	// (0x000a53f8) list_highlight_pane_cp01

0xb138,	// (0x000a5401) list_single_graphic_popup_conf_pane_g1

0xb140,	// (0x000a5409) list_single_graphic_popup_conf_pane_g2

0x0001,

0x00e5,	// (0x0009a3ae) list_single_graphic_popup_conf_pane_g

0xb148,	// (0x000a5411) list_single_graphic_popup_conf_pane_t1

0xb156,	// (0x000a541f) linegrid_cams_pane_g1

0x3486,	// (0x0009d74f) linegrid_cams_pane_g2

0xa9a1,	// (0x000a4c6a) linegrid_cams_pane_g3

0xb15f,	// (0x000a5428) linegrid_cams_pane_g4

0x348f,	// (0x0009d758) linegrid_cams_pane_g5

0x3498,	// (0x0009d761) linegrid_cams_pane_g6

0xa9aa,	// (0x000a4c73) linegrid_cams_pane_g7

0x0006,

0xf37b,	// (0x000a9644) linegrid_cams_pane_g

0xb168,	// (0x000a5431) popup_clock_analogue_window

0xb168,	// (0x000a5431) popup_clock_digital_window

0xa3e4,	// (0x000a46ad) popup_phob_thumbnail_window

0xa81b,	// (0x000a4ae4) call_video_uplink_pane_g1

0xb171,	// (0x000a543a) call_video_uplink_pane_g2

0x0001,

0xf38a,	// (0x000a9653) call_video_uplink_pane_g

0xb179,	// (0x000a5442) video_uplink_pane

0xb181,	// (0x000a544a) mce_image_pane_g1

0x34a1,	// (0x0009d76a) mce_image_pane_g2

0x34a9,	// (0x0009d772) mce_image_pane_g3

0x34b1,	// (0x0009d77a) mce_image_pane_g4

0x34b9,	// (0x0009d782) mce_image_pane_g5

0x0004,

0xf38f,	// (0x000a9658) mce_image_pane_g

0xb18b,	// (0x000a5454) control_top_pane_stacon_cp01_ParamLimits

0xb18b,	// (0x000a5454) control_top_pane_stacon_cp01

0xb19f,	// (0x000a5468) uni_indicator_pane_stacon_cp01_ParamLimits

0xb19f,	// (0x000a5468) uni_indicator_pane_stacon_cp01

0xb1b0,	// (0x000a5479) bg_popup_sub_pane_cp03

0x34c1,	// (0x0009d78a) chi_dic_find_pane

0x34c9,	// (0x0009d792) listscroll_chi_dic_pane

0x34d2,	// (0x0009d79b) main_pane_chidic_g1

0x34e5,	// (0x0009d7ae) chi_dic_find_pane_t1

0xb1ba,	// (0x000a5483) find_chidic_pane

0xb1c3,	// (0x000a548c) chi_dic_list_pane_ParamLimits

0xb1c3,	// (0x000a548c) chi_dic_list_pane

0xb1d4,	// (0x000a549d) scroll_pane_cp020

0x34f3,	// (0x0009d7bc) find_chidic_pane_t1

0xa3e4,	// (0x000a46ad) input_focus_pane_cp06

0x3502,	// (0x0009d7cb) list_chi_dic_pane_ParamLimits

0x3502,	// (0x0009d7cb) list_chi_dic_pane

0x351f,	// (0x0009d7e8) list_chi_dic_pane_t1_ParamLimits

0x351f,	// (0x0009d7e8) list_chi_dic_pane_t1

0xa3e4,	// (0x000a46ad) list_highlight_pane_cp020

0xb1dc,	// (0x000a54a5) bg_cale_heading_pane_g1

0x3532,	// (0x0009d7fb) bg_cale_heading_pane_g2

0x353a,	// (0x0009d803) bg_cale_heading_pane_g3

0x3542,	// (0x0009d80b) bg_cale_heading_pane_g4

0x354c,	// (0x0009d815) bg_cale_heading_pane_g5

0x3556,	// (0x0009d81f) bg_cale_heading_pane_g6

0x355e,	// (0x0009d827) bg_cale_heading_pane_g7

0x3566,	// (0x0009d82f) bg_cale_heading_pane_g8

0x3570,	// (0x0009d839) bg_cale_heading_pane_g9

0x0008,

0xf39a,	// (0x000a9663) bg_cale_heading_pane_g

0xb1dc,	// (0x000a54a5) bg_cale_side_pane_g1

0x357a,	// (0x0009d843) bg_cale_side_pane_g2

0x3584,	// (0x0009d84d) bg_cale_side_pane_g3

0x358e,	// (0x0009d857) bg_cale_side_pane_g4

0x3598,	// (0x0009d861) bg_cale_side_pane_g5

0x35a2,	// (0x0009d86b) bg_cale_side_pane_g6

0x35ac,	// (0x0009d875) bg_cale_side_pane_g7

0x35b6,	// (0x0009d87f) bg_cale_side_pane_g8

0x35be,	// (0x0009d887) bg_cale_side_pane_g9

0x0008,

0xf3ad,	// (0x000a9676) bg_cale_side_pane_g

0x35c6,	// (0x0009d88f) popup_call_status_window_ParamLimits

0x35c6,	// (0x0009d88f) popup_call_status_window

0xb1e4,	// (0x000a54ad) stacon_top_pane

0xb1ec,	// (0x000a54b5) status_pane_ParamLimits

0xb1ec,	// (0x000a54b5) status_pane

0xb201,	// (0x000a54ca) status_small_pane

0xb209,	// (0x000a54d2) control_pane

0xa3e4,	// (0x000a46ad) stacon_bottom_pane

0xb211,	// (0x000a54da) list_single_mce_smart_pane_t1_ParamLimits

0xb211,	// (0x000a54da) list_single_mce_smart_pane_t1

0xb224,	// (0x000a54ed) list_single_mce_smart_pane_t2_ParamLimits

0xb224,	// (0x000a54ed) list_single_mce_smart_pane_t2

0x0001,

0x012f,	// (0x0009a3f8) list_single_mce_smart_pane_t_ParamLimits

0x012f,	// (0x0009a3f8) list_single_mce_smart_pane_t

0x35d2,	// (0x0009d89b) compass_pane

0x35de,	// (0x0009d8a7) main_location2_pane_t1

0x35f2,	// (0x0009d8bb) main_location2_pane_t2

0x3606,	// (0x0009d8cf) main_location2_pane_t3

0x0003,

0xf3c0,	// (0x000a9689) main_location2_pane_t

0xb243,	// (0x000a550c) compass_pane_g1_ParamLimits

0xb243,	// (0x000a550c) compass_pane_g1

0x3650,	// (0x0009d919) compass_pane_t1

0x365f,	// (0x0009d928) compass_pane_t2

0x0005,

0xf3c9,	// (0x000a9692) compass_pane_t

0x36aa,	// (0x0009d973) text_secondary_cp61

0xb2c1,	// (0x000a558a) navi_pane_cams_g5

0xb33d,	// (0x000a5606) navi_pane_im_t1

0xb34b,	// (0x000a5614) navi_pane_mp_g1_ParamLimits

0xb34b,	// (0x000a5614) navi_pane_mp_g1

0xb35f,	// (0x000a5628) navi_pane_mp_g2_ParamLimits

0xb35f,	// (0x000a5628) navi_pane_mp_g2

0xb36b,	// (0x000a5634) navi_pane_mp_g3_ParamLimits

0xb36b,	// (0x000a5634) navi_pane_mp_g3

0x0002,

0x0151,	// (0x0009a41a) navi_pane_mp_g_ParamLimits

0x0151,	// (0x0009a41a) navi_pane_mp_g

0xb377,	// (0x000a5640) navi_pane_mp_t1

0xb385,	// (0x000a564e) navi_pane_mp_t2

0x0002,

0x0158,	// (0x0009a421) navi_pane_mp_t

0xb3f0,	// (0x000a56b9) navi_pane_vt_g1

0xb377,	// (0x000a5640) navi_pane_vt_t1

0xb3f8,	// (0x000a56c1) navi_slider_pane

0xa9bb,	// (0x000a4c84) zooming_pane

0xb408,	// (0x000a56d1) navi_slider_pane_g1

0x36e5,	// (0x0009d9ae) navi_slider_pane_g2

0x0006,

0xf3d6,	// (0x000a969f) navi_slider_pane_g

0xb42c,	// (0x000a56f5) aid_levels_zoom

0xb434,	// (0x000a56fd) zooming_pane_g1

0xb43c,	// (0x000a5705) zooming_pane_g2

0xb43c,	// (0x000a5705) zooming_pane_g3

0x0002,

0x016e,	// (0x0009a437) zooming_pane_g

0xb444,	// (0x000a570d) level_10_zoom

0xb44d,	// (0x000a5716) level_11_zoom

0xb456,	// (0x000a571f) level_1_zoom

0xb45f,	// (0x000a5728) level_2_zoom

0xb468,	// (0x000a5731) level_3_zoom

0xb471,	// (0x000a573a) level_4_zoom

0xb488,	// (0x000a5751) level_5_zoom

0xb491,	// (0x000a575a) level_6_zoom

0xb49a,	// (0x000a5763) level_7_zoom

0xb4a3,	// (0x000a576c) level_8_zoom

0xb4ac,	// (0x000a5775) level_9_zoom

0xb4bd,	// (0x000a5786) popup_phob_thumbnail_window_g1

0xb4c5,	// (0x000a578e) popup_phob_thumbnail_window_g2

0x0001,

0xf3e5,	// (0x000a96ae) popup_phob_thumbnail_window_g

0xc7f4,	// (0x000a6abd) level_1_location

0xc7fc,	// (0x000a6ac5) level_2_location

0xc804,	// (0x000a6acd) level_3_location

0xc80c,	// (0x000a6ad5) level_4_location

0xa9bb,	// (0x000a4c84) level_5_location

0x36f7,	// (0x0009d9c0) mce_icon_pane_g1

0x36ff,	// (0x0009d9c8) mce_icon_pane_g2

0x0001,

0xf3ea,	// (0x000a96b3) mce_icon_pane_g

0x3707,	// (0x0009d9d0) main_mup_pane_g1_ParamLimits

0x3707,	// (0x0009d9d0) main_mup_pane_g1

0x371f,	// (0x0009d9e8) main_mup_pane_g2_ParamLimits

0x371f,	// (0x0009d9e8) main_mup_pane_g2

0x3733,	// (0x0009d9fc) main_mup_pane_g3_ParamLimits

0x3733,	// (0x0009d9fc) main_mup_pane_g3

0x3747,	// (0x0009da10) main_mup_pane_g4_ParamLimits

0x3747,	// (0x0009da10) main_mup_pane_g4

0x3763,	// (0x0009da2c) main_mup_pane_g5_ParamLimits

0x3763,	// (0x0009da2c) main_mup_pane_g5

0x3784,	// (0x0009da4d) main_mup_pane_g6_ParamLimits

0x3784,	// (0x0009da4d) main_mup_pane_g6

0x37a0,	// (0x0009da69) main_mup_pane_g7_ParamLimits

0x37a0,	// (0x0009da69) main_mup_pane_g7

0x37bc,	// (0x0009da85) main_mup_pane_g8_ParamLimits

0x37bc,	// (0x0009da85) main_mup_pane_g8

0x37d8,	// (0x0009daa1) main_mup_pane_g9_ParamLimits

0x37d8,	// (0x0009daa1) main_mup_pane_g9

0x37f7,	// (0x0009dac0) main_mup_pane_g10_ParamLimits

0x37f7,	// (0x0009dac0) main_mup_pane_g10

0x3816,	// (0x0009dadf) main_mup_pane_g11_ParamLimits

0x3816,	// (0x0009dadf) main_mup_pane_g11

0x382e,	// (0x0009daf7) main_mup_pane_g12_ParamLimits

0x382e,	// (0x0009daf7) main_mup_pane_g12

0x383c,	// (0x0009db05) main_mup_pane_g13_ParamLimits

0x383c,	// (0x0009db05) main_mup_pane_g13

0x000c,

0xf3ef,	// (0x000a96b8) main_mup_pane_g_ParamLimits

0xf3ef,	// (0x000a96b8) main_mup_pane_g

0x3852,	// (0x0009db1b) main_mup_pane_t1_ParamLimits

0x3852,	// (0x0009db1b) main_mup_pane_t1

0x386f,	// (0x0009db38) main_mup_pane_t2_ParamLimits

0x386f,	// (0x0009db38) main_mup_pane_t2

0x3889,	// (0x0009db52) main_mup_pane_t3_ParamLimits

0x3889,	// (0x0009db52) main_mup_pane_t3

0x38a3,	// (0x0009db6c) main_mup_pane_t4_ParamLimits

0x38a3,	// (0x0009db6c) main_mup_pane_t4

0x38b5,	// (0x0009db7e) main_mup_pane_t5_ParamLimits

0x38b5,	// (0x0009db7e) main_mup_pane_t5

0x38c7,	// (0x0009db90) main_mup_pane_t6_ParamLimits

0x38c7,	// (0x0009db90) main_mup_pane_t6

0x0005,

0xf40a,	// (0x000a96d3) main_mup_pane_t_ParamLimits

0xf40a,	// (0x000a96d3) main_mup_pane_t

0x38dd,	// (0x0009dba6) mup_progress_pane_ParamLimits

0x38dd,	// (0x0009dba6) mup_progress_pane

0x38e9,	// (0x0009dbb2) mup_visualizer_pane_ParamLimits

0x38e9,	// (0x0009dbb2) mup_visualizer_pane

0x3927,	// (0x0009dbf0) mup_volume_pane_ParamLimits

0x3927,	// (0x0009dbf0) mup_volume_pane

0xb47a,	// (0x000a5743) mup_visualizer_pane_g1_ParamLimits

0xb47a,	// (0x000a5743) mup_visualizer_pane_g1

0xb47a,	// (0x000a5743) mup_visualizer_pane_g2_ParamLimits

0xb47a,	// (0x000a5743) mup_visualizer_pane_g2

0xb243,	// (0x000a550c) mup_visualizer_pane_g3_ParamLimits

0xb243,	// (0x000a550c) mup_visualizer_pane_g3

0x0002,

0xf417,	// (0x000a96e0) mup_visualizer_pane_g_ParamLimits

0xf417,	// (0x000a96e0) mup_visualizer_pane_g

0xa81b,	// (0x000a4ae4) mup_volume_pane_g1

0xb4d5,	// (0x000a579e) mup_volume_pane_g2

0x0001,

0xf41e,	// (0x000a96e7) mup_volume_pane_g

0xa81b,	// (0x000a4ae4) mup_progress_pane_g1

0xb4de,	// (0x000a57a7) mup_progress_pane_g2

0xb4e7,	// (0x000a57b0) mup_progress_pane_g3

0x0002,

0xf423,	// (0x000a96ec) mup_progress_pane_g

0xa3e4,	// (0x000a46ad) bg_popup_window_pane_cp05

0xb4f0,	// (0x000a57b9) heading_pane_cp02_ParamLimits

0xb4f0,	// (0x000a57b9) heading_pane_cp02

0xb50a,	// (0x000a57d3) list_popup_blid_pane

0xb512,	// (0x000a57db) list_blid_sat_info_pane_ParamLimits

0xb512,	// (0x000a57db) list_blid_sat_info_pane

0xb525,	// (0x000a57ee) list_blid_sat_info_pane_g1

0xb52d,	// (0x000a57f6) list_blid_sat_info_pane_t1

0x3a32,	// (0x0009dcfb) mup_equalizer_pane_ParamLimits

0x3a32,	// (0x0009dcfb) mup_equalizer_pane

0x3a53,	// (0x0009dd1c) mup_equalizer_pane_cp1_ParamLimits

0x3a53,	// (0x0009dd1c) mup_equalizer_pane_cp1

0x3a74,	// (0x0009dd3d) mup_equalizer_pane_cp2_ParamLimits

0x3a74,	// (0x0009dd3d) mup_equalizer_pane_cp2

0x3a95,	// (0x0009dd5e) mup_equalizer_pane_cp3_ParamLimits

0x3a95,	// (0x0009dd5e) mup_equalizer_pane_cp3

0x3ab6,	// (0x0009dd7f) mup_equalizer_pane_cp4_ParamLimits

0x3ab6,	// (0x0009dd7f) mup_equalizer_pane_cp4

0x3ad7,	// (0x0009dda0) mup_equalizer_pane_cp5

0x3aed,	// (0x0009ddb6) mup_equalizer_pane_cp6

0x3b05,	// (0x0009ddce) mup_equalizer_pane_cp7

0xc6d2,	// (0x000a699b) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x000a69a3) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x000a69ab) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6f5,	// (0x000a49be) mup_scale_pane

0xa81b,	// (0x000a4ae4) mup_scale_pane_g1

0xb53b,	// (0x000a5804) mup_scale_pane_g2

0x0006,

0xf43f,	// (0x000a9708) mup_scale_pane_g

0xb55f,	// (0x000a5828) msg_data_pane

0xb567,	// (0x000a5830) scroll_pane_cp017

0x3b2f,	// (0x0009ddf8) bg_list_pane_cp04_ParamLimits

0x3b2f,	// (0x0009ddf8) bg_list_pane_cp04

0xb56f,	// (0x000a5838) msg_data_pane_g1

0x3b4b,	// (0x0009de14) msg_data_pane_g2

0x3b53,	// (0x0009de1c) msg_data_pane_g3

0x3b5b,	// (0x0009de24) msg_data_pane_g4

0x3b63,	// (0x0009de2c) msg_data_pane_g5

0x3b6b,	// (0x0009de34) msg_data_pane_g6

0x3b73,	// (0x0009de3c) msg_data_pane_g7

0x0006,

0xf44e,	// (0x000a9717) msg_data_pane_g

0x3b7b,	// (0x0009de44) msg_text_pane_ParamLimits

0x3b7b,	// (0x0009de44) msg_text_pane

0x3bba,	// (0x0009de83) qrid_highlight_pane_cp011_ParamLimits

0x3bba,	// (0x0009de83) qrid_highlight_pane_cp011

0xa3e4,	// (0x000a46ad) msg_body_pane

0xa3e4,	// (0x000a46ad) msg_header_pane

0xb580,	// (0x000a5849) input_focus_pane_cp07

0x9e8c,	// (0x000a4155) msg_header_pane_t1_ParamLimits

0x9e8c,	// (0x000a4155) msg_header_pane_t1

0x9e9e,	// (0x000a4167) msg_header_pane_t2_ParamLimits

0x9e9e,	// (0x000a4167) msg_header_pane_t2

0x0001,

0xf462,	// (0x000a972b) msg_header_pane_t_ParamLimits

0xf462,	// (0x000a972b) msg_header_pane_t

0xb595,	// (0x000a585e) msg_body_pane_g1

0x9eb0,	// (0x000a4179) msg_body_pane_t1_ParamLimits

0x9eb0,	// (0x000a4179) msg_body_pane_t1

0x9ee1,	// (0x000a41aa) msg_body_pane_t2_ParamLimits

0x9ee1,	// (0x000a41aa) msg_body_pane_t2

0x9ef3,	// (0x000a41bc) msg_body_pane_t3_ParamLimits

0x9ef3,	// (0x000a41bc) msg_body_pane_t3

0x0002,

0xf467,	// (0x000a9730) msg_body_pane_t_ParamLimits

0xf467,	// (0x000a9730) msg_body_pane_t

0x3c34,	// (0x0009defd) main_viewer_pane_g1_ParamLimits

0x3c34,	// (0x0009defd) main_viewer_pane_g1

0x3c40,	// (0x0009df09) main_viewer_pane_g2_ParamLimits

0x3c40,	// (0x0009df09) main_viewer_pane_g2

0x3c4c,	// (0x0009df15) main_viewer_pane_g3_ParamLimits

0x3c4c,	// (0x0009df15) main_viewer_pane_g3

0x3c5d,	// (0x0009df26) main_viewer_pane_g4_ParamLimits

0x3c5d,	// (0x0009df26) main_viewer_pane_g4

0x3c6e,	// (0x0009df37) main_viewer_pane_g5_ParamLimits

0x3c6e,	// (0x0009df37) main_viewer_pane_g5

0x3c6e,	// (0x0009df37) main_viewer_pane_g7_ParamLimits

0x3c6e,	// (0x0009df37) main_viewer_pane_g7

0xaed5,	// (0x000a519e) main_viewer_pane_g8_ParamLimits

0xaed5,	// (0x000a519e) main_viewer_pane_g8

0x0007,

0xf477,	// (0x000a9740) main_viewer_pane_g_ParamLimits

0xf477,	// (0x000a9740) main_viewer_pane_g

0xb59d,	// (0x000a5866) viewer_content_pane_ParamLimits

0xb59d,	// (0x000a5866) viewer_content_pane

0x3cac,	// (0x0009df75) main_postcard_pane_g1_ParamLimits

0x3cac,	// (0x0009df75) main_postcard_pane_g1

0x3cba,	// (0x0009df83) main_postcard_pane_g2_ParamLimits

0x3cba,	// (0x0009df83) main_postcard_pane_g2

0x3cc8,	// (0x0009df91) main_postcard_pane_g3_ParamLimits

0x3cc8,	// (0x0009df91) main_postcard_pane_g3

0x0005,

0xf488,	// (0x000a9751) main_postcard_pane_g_ParamLimits

0xf488,	// (0x000a9751) main_postcard_pane_g

0x3cd8,	// (0x0009dfa1) main_postcard_pane_g4

0xc8f4,	// (0x000a6bbd) smil_status_volume_pane_g2

0x3d04,	// (0x0009dfcd) postcard_pane_ParamLimits

0x3d04,	// (0x0009dfcd) postcard_pane

0xb47a,	// (0x000a5743) postcard_pane_g1_ParamLimits

0xb47a,	// (0x000a5743) postcard_pane_g1

0x3d36,	// (0x0009dfff) postcard_pane_g2_ParamLimits

0x3d36,	// (0x0009dfff) postcard_pane_g2

0x3d42,	// (0x0009e00b) postcard_pane_g3_ParamLimits

0x3d42,	// (0x0009e00b) postcard_pane_g3

0xb5ab,	// (0x000a5874) postcard_pane_g4_ParamLimits

0xb5ab,	// (0x000a5874) postcard_pane_g4

0x3d4e,	// (0x0009e017) postcard_pane_g5_ParamLimits

0x3d4e,	// (0x0009e017) postcard_pane_g5

0x3d5a,	// (0x0009e023) postcard_pane_g6_ParamLimits

0x3d5a,	// (0x0009e023) postcard_pane_g6

0xb5b9,	// (0x000a5882) postcard_pane_g7_ParamLimits

0xb5b9,	// (0x000a5882) postcard_pane_g7

0x0006,

0xf495,	// (0x000a975e) postcard_pane_g_ParamLimits

0xf495,	// (0x000a975e) postcard_pane_g

0x3d66,	// (0x0009e02f) main_mp2_pane_g1_ParamLimits

0x3d66,	// (0x0009e02f) main_mp2_pane_g1

0x3d72,	// (0x0009e03b) main_mp2_pane_g2_ParamLimits

0x3d72,	// (0x0009e03b) main_mp2_pane_g2

0x3d7e,	// (0x0009e047) main_mp2_pane_g3_ParamLimits

0x3d7e,	// (0x0009e047) main_mp2_pane_g3

0x0002,

0xf4a4,	// (0x000a976d) main_mp2_pane_g_ParamLimits

0xf4a4,	// (0x000a976d) main_mp2_pane_g

0x3d8a,	// (0x0009e053) main_mp2_pane_t1_ParamLimits

0x3d8a,	// (0x0009e053) main_mp2_pane_t1

0x3da1,	// (0x0009e06a) main_mp2_pane_t2_ParamLimits

0x3da1,	// (0x0009e06a) main_mp2_pane_t2

0x3db3,	// (0x0009e07c) main_mp2_pane_t3_ParamLimits

0x3db3,	// (0x0009e07c) main_mp2_pane_t3

0x0002,

0xf4ab,	// (0x000a9774) main_mp2_pane_t_ParamLimits

0xf4ab,	// (0x000a9774) main_mp2_pane_t

0xb5c7,	// (0x000a5890) pec_content_pane_ParamLimits

0xb5c7,	// (0x000a5890) pec_content_pane

0xab64,	// (0x000a4e2d) scroll_pane_cp015

0xb5d9,	// (0x000a58a2) pec_attribute_pane_ParamLimits

0xb5d9,	// (0x000a58a2) pec_attribute_pane

0x3dc5,	// (0x0009e08e) pec_content_pane_g1_ParamLimits

0x3dc5,	// (0x0009e08e) pec_content_pane_g1

0xb5e9,	// (0x000a58b2) pec_content_pane_t1_ParamLimits

0xb5e9,	// (0x000a58b2) pec_content_pane_t1

0xb5fb,	// (0x000a58c4) pec_content_pane_t2_ParamLimits

0xb5fb,	// (0x000a58c4) pec_content_pane_t2

0x0001,

0x0242,	// (0x0009a50b) pec_content_pane_t_ParamLimits

0x0242,	// (0x0009a50b) pec_content_pane_t

0x3dd1,	// (0x0009e09a) list_single_graphic_pane_cp01_ParamLimits

0x3dd1,	// (0x0009e09a) list_single_graphic_pane_cp01

0xa6f5,	// (0x000a49be) bg_popup_sub_pane_cp04

0xb60d,	// (0x000a58d6) popup_mup_playback_window_g1

0xb619,	// (0x000a58e2) popup_mup_playback_window_t1

0xb62e,	// (0x000a58f7) popup_mup_playback_window_t2

0x0001,

0x0247,	// (0x0009a510) popup_mup_playback_window_t

0xb665,	// (0x000a592e) main_image_pane_g1_ParamLimits

0xb665,	// (0x000a592e) main_image_pane_g1

0xb6a8,	// (0x000a5971) scroll_pane_cp018_ParamLimits

0xb6a8,	// (0x000a5971) scroll_pane_cp018

0xb6c0,	// (0x000a5989) scroll_pane_cp016_ParamLimits

0xb6c0,	// (0x000a5989) scroll_pane_cp016

0x3e6b,	// (0x0009e134) smil2_image_pane_ParamLimits

0x3e6b,	// (0x0009e134) smil2_image_pane

0x3e9b,	// (0x0009e164) smil2_root_pane_ParamLimits

0x3e9b,	// (0x0009e164) smil2_root_pane

0x3ec7,	// (0x0009e190) smil2_text_pane_ParamLimits

0x3ec7,	// (0x0009e190) smil2_text_pane

0xa3e4,	// (0x000a46ad) bg_list_pane_cp06

0xb6fc,	// (0x000a59c5) grid_radio_pane

0xa3e4,	// (0x000a46ad) bg_popup_window_pane_cp06

0xb704,	// (0x000a59cd) main_fmradio_pane_t1

0xb0bf,	// (0x000a5388) heading_pane_cp04

0xb712,	// (0x000a59db) main_fmradio_pane_t2

0xc72a,	// (0x000a69f3) popup_cale_lunar_info_window_g1

0xb720,	// (0x000a59e9) main_fmradio_pane_t3

0xc732,	// (0x000a69fb) popup_cale_lunar_info_window_g2

0xb72e,	// (0x000a59f7) main_fmradio_pane_t4

0x0001,

0xb73c,	// (0x000a5a05) main_fmradio_pane_t5

0x0004,

0x0335,	// (0x0009a5fe) popup_cale_lunar_info_window_g

0x025c,	// (0x0009a525) main_fmradio_pane_t

0xb74a,	// (0x000a5a13) wait_bar_pane_cp03

0xb752,	// (0x000a5a1b) cell_fmradio_pane_ParamLimits

0xb752,	// (0x000a5a1b) cell_fmradio_pane

0xb5b9,	// (0x000a5882) cell_fmradio_pane_g1_ParamLimits

0xb5b9,	// (0x000a5882) cell_fmradio_pane_g1

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp011

0xb765,	// (0x000a5a2e) poc_content_pane_ParamLimits

0xb765,	// (0x000a5a2e) poc_content_pane

0xb777,	// (0x000a5a40) scroll_pane_cp019

0x3f07,	// (0x0009e1d0) popup_call_poc_act_window_ParamLimits

0x3f07,	// (0x0009e1d0) popup_call_poc_act_window

0x3f14,	// (0x0009e1dd) popup_call_poc_inact_window_ParamLimits

0x3f14,	// (0x0009e1dd) popup_call_poc_inact_window

0x02f9,	// (0x0009a5c2) bg_popup_call_poc_act_pane_g

0xc6ea,	// (0x000a69b3) bg_popup_call_poc_inact_pane_g1

0xc6f2,	// (0x000a69bb) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x000a5a48) popup_call_poc_act_window_g2

0xc6fa,	// (0x000a69c3) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x000a6943) bg_popup_call_poc_inact_pane_g4

0xc702,	// (0x000a69cb) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x000a5a50) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x000a5a50) popup_call_poc_act_window_t1

0xb7af,	// (0x000a5a78) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x000a5a78) popup_call_poc_act_window_t2

0xb7d7,	// (0x000a5aa0) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x000a5aa0) popup_call_poc_act_window_t3

0xb7ff,	// (0x000a5ac8) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x000a5ac8) popup_call_poc_act_window_t4

0x0003,

0x0267,	// (0x0009a530) popup_call_poc_act_window_t_ParamLimits

0x0267,	// (0x0009a530) popup_call_poc_act_window_t

0xc70a,	// (0x000a69d3) bg_popup_call_poc_inact_pane_g6

0xc712,	// (0x000a69db) bg_popup_call_poc_inact_pane_g7

0xc71a,	// (0x000a69e3) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x000a5ada) popup_call_poc_inact_window_g2

0xc722,	// (0x000a69eb) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0310,	// (0x0009a5d9) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x000a5ae2) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x000a5ae2) popup_call_poc_inact_window_t1

0xb82e,	// (0x000a5af7) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x000a5af7) popup_call_poc_inact_window_t2

0xb843,	// (0x000a5b0c) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x000a5b0c) popup_call_poc_inact_window_t3

0x0002,

0x0270,	// (0x0009a539) popup_call_poc_inact_window_t_ParamLimits

0x0270,	// (0x0009a539) popup_call_poc_inact_window_t

0xc867,	// (0x000a6b30) context_pane_ParamLimits

0x4558,	// (0x0009e821) signal_pane_ParamLimits

0xa9bb,	// (0x000a4c84) main_call2_pane

0x44cb,	// (0x0009e794) popup_phob_thumbnail2_window_ParamLimits

0x44cb,	// (0x0009e794) popup_phob_thumbnail2_window

0x3be2,	// (0x0009deab) aid_hotspot_pointer_arrow_pane

0x3bea,	// (0x0009deb3) aid_hotspot_pointer_hand_pane

0x423c,	// (0x0009e505) phob_pre_status_pane_g5

0x1c36,	// (0x0009beff) cams_zoom_pane_ParamLimits

0x1c42,	// (0x0009bf0b) image_vga_pane_ParamLimits

0x1c51,	// (0x0009bf1a) main_camera_pane_g1_ParamLimits

0x1c5f,	// (0x0009bf28) main_camera_pane_g2_ParamLimits

0x1c6b,	// (0x0009bf34) main_camera_pane_g3_ParamLimits

0x1c77,	// (0x0009bf40) main_camera_pane_g4_ParamLimits

0x1c83,	// (0x0009bf4c) main_camera_pane_g5_ParamLimits

0x1c8f,	// (0x0009bf58) main_camera_pane_g6_ParamLimits

0x1c9b,	// (0x0009bf64) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a94d3) main_camera_pane_g_ParamLimits

0x1ca7,	// (0x0009bf70) main_camera_pane_t1_ParamLimits

0x1cb9,	// (0x0009bf82) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a94e4) main_camera_pane_t_ParamLimits

0xa6f5,	// (0x000a49be) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6f5,	// (0x000a49be) bg_popup_preview_window_pane_cp01

0xb858,	// (0x000a5b21) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x000a5b21) popup_phob_thumbnail2_window_g1

0xa3e4,	// (0x000a46ad) call2_cli_visual_pane

0x3f30,	// (0x0009e1f9) popup_call2_audio_conf_window_ParamLimits

0x3f30,	// (0x0009e1f9) popup_call2_audio_conf_window

0x3f45,	// (0x0009e20e) popup_call2_audio_first_window_ParamLimits

0x3f45,	// (0x0009e20e) popup_call2_audio_first_window

0x3fe3,	// (0x0009e2ac) popup_call2_audio_in_window_ParamLimits

0x3fe3,	// (0x0009e2ac) popup_call2_audio_in_window

0x4025,	// (0x0009e2ee) popup_call2_audio_out_window_ParamLimits

0x4025,	// (0x0009e2ee) popup_call2_audio_out_window

0x4087,	// (0x0009e350) popup_call2_audio_second_window_ParamLimits

0x4087,	// (0x0009e350) popup_call2_audio_second_window

0x40e5,	// (0x0009e3ae) popup_call2_audio_wait_window_ParamLimits

0x40e5,	// (0x0009e3ae) popup_call2_audio_wait_window

0xa3e4,	// (0x000a46ad) bg_popup_call2_act_pane_cp03

0xa6d7,	// (0x000a49a0) list_conf_pane_cp

0xb864,	// (0x000a5b2d) popup_call2_audio_conf_window_t1

0xb872,	// (0x000a5b3b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x000a5b3b) list_single_graphic_popup_conf2_pane

0xb12f,	// (0x000a53f8) list_highlight_pane_cp04

0xb885,	// (0x000a5b4e) list_single_graphic_popup_conf2_pane_g1

0xb140,	// (0x000a5409) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0277,	// (0x0009a540) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x000a5b58) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x000a5b66) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x000a5b66) bg_popup_call2_act_pane_cp01

0xb927,	// (0x000a5bf0) call_type_pane_cp05_ParamLimits

0xb927,	// (0x000a5bf0) call_type_pane_cp05

0xb97b,	// (0x000a5c44) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x000a5c44) popup_call2_audio_second_window_g1

0xb9cf,	// (0x000a5c98) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x000a5c98) popup_call2_audio_second_window_g2

0x0002,

0x027c,	// (0x0009a545) popup_call2_audio_second_window_g_ParamLimits

0x027c,	// (0x0009a545) popup_call2_audio_second_window_g

0xba34,	// (0x000a5cfd) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x000a5cfd) popup_call2_audio_second_window_t1

0xbaef,	// (0x000a5db8) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x000a5db8) popup_call2_audio_second_window_t2

0xbb42,	// (0x000a5e0b) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x000a5e0b) popup_call2_audio_second_window_t3

0x0003,

0x0283,	// (0x0009a54c) popup_call2_audio_second_window_t_ParamLimits

0x0283,	// (0x0009a54c) popup_call2_audio_second_window_t

0xa3e4,	// (0x000a46ad) bg_popup_call2_in_pane_cp02

0xa3ee,	// (0x000a46b7) call_type_pane_cp04

0xa3f6,	// (0x000a46bf) popup_call2_audio_wait_window_g1

0xa3fe,	// (0x000a46c7) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a93c2) popup_call2_audio_wait_window_g

0xa406,	// (0x000a46cf) popup_call2_audio_wait_window_t3

0xbc35,	// (0x000a5efe) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x000a5efe) bg_popup_call2_act_pane

0xbcf5,	// (0x000a5fbe) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x000a5fbe) call_type_pane_cp03

0xbd59,	// (0x000a6022) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x000a6022) popup_call2_audio_first_window_g1

0xbdc9,	// (0x000a6092) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x000a6092) popup_call2_audio_first_window_g2

0xb47a,	// (0x000a5743) popup_call2_audio_first_window_g3_ParamLimits

0xb47a,	// (0x000a5743) popup_call2_audio_first_window_g3

0x0004,

0xf4c2,	// (0x000a978b) popup_call2_audio_first_window_g_ParamLimits

0xf4c2,	// (0x000a978b) popup_call2_audio_first_window_g

0xbea7,	// (0x000a6170) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x000a6170) popup_call2_audio_first_window_t1

0xbfaa,	// (0x000a6273) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x000a6273) popup_call2_audio_first_window_t4

0xc08d,	// (0x000a6356) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x000a6356) popup_call2_audio_first_window_t5

0x0003,

0x0297,	// (0x0009a560) popup_call2_audio_first_window_t_ParamLimits

0x0297,	// (0x0009a560) popup_call2_audio_first_window_t

0xa6ed,	// (0x000a49b6) bg_popup_call2_act_pane_g1

0xc73a,	// (0x000a6a03) popup_cale_lunar_info_window_t1

0xc748,	// (0x000a6a11) popup_cale_lunar_info_window_t2

0xc756,	// (0x000a6a1f) popup_cale_lunar_info_window_t3

0xa3e4,	// (0x000a46ad) bg_popup_call2_bubble_pane

0xc18e,	// (0x000a6457) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x000a6457) bg_popup_call2_in_pane_cp01

0x9c0d,	// (0x000a3ed6) call_type_pane_cp02

0xc1d6,	// (0x000a649f) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x000a649f) popup_call2_audio_out_window_g1

0xc202,	// (0x000a64cb) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x000a64cb) popup_call2_audio_out_window_g2

0xc22a,	// (0x000a64f3) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x000a64f3) popup_call2_audio_out_window_g3

0x0003,

0x02a0,	// (0x0009a569) popup_call2_audio_out_window_g_ParamLimits

0x02a0,	// (0x0009a569) popup_call2_audio_out_window_g

0xc265,	// (0x000a652e) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x000a652e) popup_call2_audio_out_window_t1

0xc2c4,	// (0x000a658d) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x000a658d) popup_call2_audio_out_window_t2

0xc318,	// (0x000a65e1) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x000a65e1) popup_call2_audio_out_window_t3

0xc32e,	// (0x000a65f7) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x000a65f7) popup_call2_audio_out_window_t4

0xc344,	// (0x000a660d) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x000a660d) popup_call2_audio_out_window_t5

0x0005,

0x02a9,	// (0x0009a572) popup_call2_audio_out_window_t_ParamLimits

0x02a9,	// (0x0009a572) popup_call2_audio_out_window_t

0xc3a8,	// (0x000a6671) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x000a6671) bg_popup_call2_in_pane

0xc404,	// (0x000a66cd) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x000a66cd) popup_call2_audio_in_window_g1

0xc43c,	// (0x000a6705) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x000a6705) popup_call2_audio_in_window_g2

0xc474,	// (0x000a673d) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x000a673d) popup_call2_audio_in_window_g3

0x0003,

0x02b6,	// (0x0009a57f) popup_call2_audio_in_window_g_ParamLimits

0x02b6,	// (0x0009a57f) popup_call2_audio_in_window_g

0xc4cc,	// (0x000a6795) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x000a6795) popup_call2_audio_in_window_t1

0xc54c,	// (0x000a6815) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x000a6815) popup_call2_audio_in_window_t2

0xc5cc,	// (0x000a6895) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x000a6895) popup_call2_audio_in_window_t3

0xc5e6,	// (0x000a68af) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x000a68af) popup_call2_audio_in_window_t4

0xc5f8,	// (0x000a68c1) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x000a68c1) popup_call2_audio_in_window_t5

0xc60d,	// (0x000a68d6) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x000a68d6) popup_call2_audio_in_window_t6

0x0005,

0x02bf,	// (0x0009a588) popup_call2_audio_in_window_t_ParamLimits

0x02bf,	// (0x0009a588) popup_call2_audio_in_window_t

0xa6ed,	// (0x000a49b6) bg_popup_call2_in_pane_g1

0xc764,	// (0x000a6a2d) popup_cale_lunar_info_window_t4

0x0003,

0x033a,	// (0x0009a603) popup_cale_lunar_info_window_t

0xa6f5,	// (0x000a49be) bg_popup_call2_rect_pane_ParamLimits

0xa6f5,	// (0x000a49be) bg_popup_call2_rect_pane

0xa3e4,	// (0x000a46ad) call2_cli_visual_graphic_pane

0xa3e4,	// (0x000a46ad) call2_cli_visual_text_pane

0x4601,	// (0x0009e8ca) smil_status_volume_pane_g3

0x0002,

0xa81b,	// (0x000a4ae4) call2_cli_visual_graphic_pane_g1

0xa81b,	// (0x000a4ae4) call2_cli_visual_graphic_pane_g2

0xa81b,	// (0x000a4ae4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4cd,	// (0x000a9796) call2_cli_visual_graphic_pane_g

0xc622,	// (0x000a68eb) bg_popup_call2_rect_pane_g1

0xa8b9,	// (0x000a4b82) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x000a68f3) bg_popup_call2_rect_pane_g3

0xc632,	// (0x000a68fb) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x000a6903) bg_popup_call2_rect_pane_g5

0xc642,	// (0x000a690b) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x000a6913) bg_popup_call2_rect_pane_g7

0xc652,	// (0x000a691b) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x000a6923) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d4,	// (0x000a979d) bg_popup_call2_rect_pane_g

0xc662,	// (0x000a692b) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x000a6933) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x000a693b) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x000a6943) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x000a694b) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x000a6953) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x000a695b) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x000a6963) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x000a696b) bg_popup_call2_bubble_pane_g9

0x0008,

0x02e6,	// (0x0009a5af) bg_popup_call2_bubble_pane_g

0x1664,	// (0x0009b92d) aid_cale_week_size_cell_pane

0x1ccb,	// (0x0009bf94) aid_cams_cif_uncrop_pane_ParamLimits

0x1ccb,	// (0x0009bf94) aid_cams_cif_uncrop_pane

0x1e26,	// (0x0009c0ef) aid_cams_size_cell_ParamLimits

0x1e26,	// (0x0009c0ef) aid_cams_size_cell

0x1e32,	// (0x0009c0fb) grid_cams_pane_ParamLimits

0x1e40,	// (0x0009c109) linegrid_cams_pane_ParamLimits

0x200e,	// (0x0009c2d7) call_video_pane_t1

0x202f,	// (0x0009c2f8) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a9537) call_video_pane_t

0x257d,	// (0x0009c846) aid_cale_month_size_cell_pane_ParamLimits

0x257d,	// (0x0009c846) aid_cale_month_size_cell_pane

0xf517,	// (0x000a97e0) smil_status_volume_pane_g

0x460e,	// (0x0009e8d7) volume_smil_pane_ParamLimits

0x0dbf,	// (0x0009b088) aid_popup2_width_pane

0x155e,	// (0x0009b827) cell_qdial_pane_g4_ParamLimits

0x155e,	// (0x0009b827) cell_qdial_pane_g4

0x362c,	// (0x0009d8f5) aid_blid_cardinal_pane_ParamLimits

0x363c,	// (0x0009d905) aid_blid_destination_pane_ParamLimits

0x363c,	// (0x0009d905) aid_blid_destination_pane

0xa6f5,	// (0x000a49be) bg_popup_call_poc_act_pane_ParamLimits

0xa6f5,	// (0x000a49be) bg_popup_call_poc_act_pane

0xa6f5,	// (0x000a49be) bg_popup_call_poc_inact_pane_ParamLimits

0xa6f5,	// (0x000a49be) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x000a6973) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x000a697b) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x000a6983) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x000a6943) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x000a694b) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x000a698b) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x000a695b) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x000a6993) bg_popup_call_poc_act_pane_g8

0xa3e4,	// (0x000a46ad) main_usb_pane

0x43fe,	// (0x0009e6c7) popup_cale_lunar_info_window

0x234c,	// (0x0009c615) im_reading_pane_t1_ParamLimits

0xaabc,	// (0x000a4d85) list_im_pane_ParamLimits

0xaacd,	// (0x000a4d96) scroll_pane_cp07_ParamLimits

0xa3e4,	// (0x000a46ad) grid_highlight_pane_cp012

0xa6f5,	// (0x000a49be) mup_scale_pane_ParamLimits

0xb47a,	// (0x000a5743) main_usb_pane_g1_ParamLimits

0xb47a,	// (0x000a5743) main_usb_pane_g1

0x415f,	// (0x0009e428) main_usb_pane_g2_ParamLimits

0x415f,	// (0x0009e428) main_usb_pane_g2

0x0001,

0xf4e7,	// (0x000a97b0) main_usb_pane_g_ParamLimits

0xf4e7,	// (0x000a97b0) main_usb_pane_g

0x416b,	// (0x0009e434) main_usb_pane_t1_ParamLimits

0x416b,	// (0x0009e434) main_usb_pane_t1

0x417d,	// (0x0009e446) main_usb_pane_t2_ParamLimits

0x417d,	// (0x0009e446) main_usb_pane_t2

0x418f,	// (0x0009e458) main_usb_pane_t3_ParamLimits

0x418f,	// (0x0009e458) main_usb_pane_t3

0x41a1,	// (0x0009e46a) main_usb_pane_t4_ParamLimits

0x41a1,	// (0x0009e46a) main_usb_pane_t4

0x41b3,	// (0x0009e47c) main_usb_pane_t5_ParamLimits

0x41b3,	// (0x0009e47c) main_usb_pane_t5

0x41c5,	// (0x0009e48e) main_usb_pane_t6_ParamLimits

0x41c5,	// (0x0009e48e) main_usb_pane_t6

0x0005,

0xf4ec,	// (0x000a97b5) main_usb_pane_t_ParamLimits

0x35d2,	// (0x0009d89b) aid_text_placing

0x35de,	// (0x0009d8a7) main_location2_pane_t1_ParamLimits

0x35f2,	// (0x0009d8bb) main_location2_pane_t2_ParamLimits

0x3606,	// (0x0009d8cf) main_location2_pane_t3_ParamLimits

0x361a,	// (0x0009d8e3) main_location2_pane_t4_ParamLimits

0x361a,	// (0x0009d8e3) main_location2_pane_t4

0xf3c0,	// (0x000a9689) main_location2_pane_t_ParamLimits

0xa731,	// (0x000a49fa) find_pinb_pane_g2_ParamLimits

0xa731,	// (0x000a49fa) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a93e8) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a93e8) find_pinb_pane_g

0xa73d,	// (0x000a4a06) find_pinb_pane_t1_ParamLimits

0xa74f,	// (0x000a4a18) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a93ed) find_pinb_pane_t_ParamLimits

0xa3e4,	// (0x000a46ad) main_call3_pane

0x2af1,	// (0x0009cdba) cale_month_day_heading_pane_t1_ParamLimits

0x2b77,	// (0x0009ce40) cale_month_day_heading_pane_t2_ParamLimits

0x2c08,	// (0x0009ced1) cale_month_day_heading_pane_t3_ParamLimits

0x2c99,	// (0x0009cf62) cale_month_day_heading_pane_t4_ParamLimits

0x2d2a,	// (0x0009cff3) cale_month_day_heading_pane_t5_ParamLimits

0x2dbb,	// (0x0009d084) cale_month_day_heading_pane_t6_ParamLimits

0x2e58,	// (0x0009d121) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a956f) cale_month_day_heading_pane_t_ParamLimits

0xad17,	// (0x000a4fe0) smil_status_volume_pane

0x3d1e,	// (0x0009dfe7) postcard_address_pane_ParamLimits

0x3d1e,	// (0x0009dfe7) postcard_address_pane

0x3d2a,	// (0x0009dff3) postcard_message_pane_ParamLimits

0x3d2a,	// (0x0009dff3) postcard_message_pane

0x4124,	// (0x0009e3ed) call2_cli_visual_pane_t1_ParamLimits

0x4124,	// (0x0009e3ed) call2_cli_visual_pane_t1

0x4765,	// (0x0009ea2e) postcard_message_pane_t1_ParamLimits

0x4765,	// (0x0009ea2e) postcard_message_pane_t1

0x474e,	// (0x0009ea17) postcard_address_pane_t1_ParamLimits

0x474e,	// (0x0009ea17) postcard_address_pane_t1

0x473f,	// (0x0009ea08) popup_call3_audio_in_window_ParamLimits

0x473f,	// (0x0009ea08) popup_call3_audio_in_window

0x4623,	// (0x0009e8ec) bg_popup_call3_in_pane_ParamLimits

0x4623,	// (0x0009e8ec) bg_popup_call3_in_pane

0x4685,	// (0x0009e94e) popup_call3_audio_in_window_g1_ParamLimits

0x4685,	// (0x0009e94e) popup_call3_audio_in_window_g1

0x469d,	// (0x0009e966) popup_call3_audio_in_window_g2_ParamLimits

0x469d,	// (0x0009e966) popup_call3_audio_in_window_g2

0x46b5,	// (0x0009e97e) popup_call3_audio_in_window_g3_ParamLimits

0x46b5,	// (0x0009e97e) popup_call3_audio_in_window_g3

0x0003,

0xf51e,	// (0x000a97e7) popup_call3_audio_in_window_g_ParamLimits

0xf51e,	// (0x000a97e7) popup_call3_audio_in_window_g

0x46dd,	// (0x0009e9a6) popup_call3_audio_in_window_t1_ParamLimits

0x46dd,	// (0x0009e9a6) popup_call3_audio_in_window_t1

0x4705,	// (0x0009e9ce) popup_call3_audio_in_window_t2_ParamLimits

0x4705,	// (0x0009e9ce) popup_call3_audio_in_window_t2

0x472d,	// (0x0009e9f6) popup_call3_audio_in_window_t3_ParamLimits

0x472d,	// (0x0009e9f6) popup_call3_audio_in_window_t3

0x0002,

0xf527,	// (0x000a97f0) popup_call3_audio_in_window_t_ParamLimits

0xf527,	// (0x000a97f0) popup_call3_audio_in_window_t

0xa9bb,	// (0x000a4c84) bg_popup_call3_rect_pane

0xc622,	// (0x000a68eb) bg_popup_call3_rect_pane_g1

0xa8b9,	// (0x000a4b82) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x000a68f3) bg_popup_call3_rect_pane_g3

0xc632,	// (0x000a68fb) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x000a6903) bg_popup_call3_rect_pane_g5

0xc642,	// (0x000a690b) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x000a6913) bg_popup_call3_rect_pane_g7

0x3942,	// (0x0009dc0b) mup_visualizer_osc_pane

0xb4cd,	// (0x000a5796) mup_visualizer_spec_pane

0x4643,	// (0x0009e90c) call3_video_qcif_pane_ParamLimits

0x4643,	// (0x0009e90c) call3_video_qcif_pane

0x4655,	// (0x0009e91e) call3_video_qcif_uncrop_pane_ParamLimits

0x4655,	// (0x0009e91e) call3_video_qcif_uncrop_pane

0x4663,	// (0x0009e92c) call3_video_subqcif_pane_ParamLimits

0x4663,	// (0x0009e92c) call3_video_subqcif_pane

0x4675,	// (0x0009e93e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4675,	// (0x0009e93e) call3_video_subqcif_uncrop_pane

0x46cd,	// (0x0009e996) popup_call3_audio_in_window_g4_ParamLimits

0x46cd,	// (0x0009e996) popup_call3_audio_in_window_g4

0x45ee,	// (0x0009e8b7) mup_spec_half_pane

0x45f7,	// (0x0009e8c0) mup_spec_half_pane_cp

0xc8c7,	// (0x000a6b90) mup_osc_middle_pane

0xc8d0,	// (0x000a6b99) mup_visualizer_osc_pane_g1

0x45cf,	// (0x0009e898) mup_spec_bar_pane_ParamLimits

0x45cf,	// (0x0009e898) mup_spec_bar_pane

0xc8b4,	// (0x000a6b7d) mup_spec_bar_pane_g1

0xc8be,	// (0x000a6b87) mup_spec_bar_pane_g2

0x0001,

0x037e,	// (0x0009a647) mup_spec_bar_pane_g

0x1664,	// (0x0009b92d) aid_cale_week_size_cell_pane_ParamLimits

0x1679,	// (0x0009b942) bg_cale_heading_pane_ParamLimits

0xa914,	// (0x000a4bdd) bg_cale_pane_cp01_ParamLimits

0x169b,	// (0x0009b964) cale_week_corner_pane_ParamLimits

0x16b5,	// (0x0009b97e) cale_week_day_heading_pane_ParamLimits

0x16d7,	// (0x0009b9a0) cale_week_scroll_pane_g1_ParamLimits

0x16f4,	// (0x0009b9bd) cale_week_scroll_pane_g2_ParamLimits

0x1707,	// (0x0009b9d0) cale_week_scroll_pane_g3_ParamLimits

0x171a,	// (0x0009b9e3) cale_week_scroll_pane_g4_ParamLimits

0x172d,	// (0x0009b9f6) cale_week_scroll_pane_g5_ParamLimits

0x1740,	// (0x0009ba09) cale_week_scroll_pane_g6_ParamLimits

0x1753,	// (0x0009ba1c) cale_week_scroll_pane_g7_ParamLimits

0x1766,	// (0x0009ba2f) cale_week_scroll_pane_g8_ParamLimits

0x177b,	// (0x0009ba44) cale_week_scroll_pane_g9_ParamLimits

0x178e,	// (0x0009ba57) cale_week_scroll_pane_g10_ParamLimits

0x17a1,	// (0x0009ba6a) cale_week_scroll_pane_g11_ParamLimits

0x17b4,	// (0x0009ba7d) cale_week_scroll_pane_g12_ParamLimits

0x17cb,	// (0x0009ba94) cale_week_scroll_pane_g13_ParamLimits

0x17e6,	// (0x0009baaf) cale_week_scroll_pane_g14_ParamLimits

0x1801,	// (0x0009baca) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a9479) cale_week_scroll_pane_g_ParamLimits

0x1831,	// (0x0009bafa) cale_week_time_pane_ParamLimits

0x1846,	// (0x0009bb0f) grid_cale_week_pane_ParamLimits

0xa931,	// (0x000a4bfa) listscroll_cale_week_pane_t1

0xa943,	// (0x000a4c0c) scroll_pane_cp08_ParamLimits

0x25e6,	// (0x0009c8af) cale_month_corner_pane_ParamLimits

0xaced,	// (0x000a4fb6) cale_month_pane_t1

0x2a8a,	// (0x0009cd53) cale_month_week_pane_ParamLimits

0xb47a,	// (0x000a5743) popup_call_status_window_g1_ParamLimits

0x33db,	// (0x0009d6a4) popup_call_status_window_g2_ParamLimits

0x33e7,	// (0x0009d6b0) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a961f) popup_call_status_window_g_ParamLimits

0xb0af,	// (0x000a5378) aid_call2_pane

0x3bd6,	// (0x0009de9f) msg_header_pane_g1

0x3d1e,	// (0x0009dfe7) postcard_address2_pane_ParamLimits

0x3d1e,	// (0x0009dfe7) postcard_address2_pane

0x3d2a,	// (0x0009dff3) postcard_message2_pane_ParamLimits

0x3d2a,	// (0x0009dff3) postcard_message2_pane

0x4566,	// (0x0009e82f) message2_row_pane_ParamLimits

0x4566,	// (0x0009e82f) message2_row_pane

0x4581,	// (0x0009e84a) address2_row_pane_ParamLimits

0x4581,	// (0x0009e84a) address2_row_pane

0xc882,	// (0x000a6b4b) postcard_message2_row_pane_g1

0xc88a,	// (0x000a6b53) postcard_message2_row_pane_t1

0xc882,	// (0x000a6b4b) address2_row_pane_g1

0xc88a,	// (0x000a6b53) address2_row_pane_t1

0x1bb1,	// (0x0009be7a) aid_size_cell_vorec

0xa3e4,	// (0x000a46ad) main_rss_pane

0x4594,	// (0x0009e85d) rss_list_single_pane_ParamLimits

0x4594,	// (0x0009e85d) rss_list_single_pane

0xc898,	// (0x000a6b61) rss_list_single_pane_t1

0xc8a6,	// (0x000a6b6f) rss_list_single_pane_t2

0x0001,

0x0379,	// (0x0009a642) rss_list_single_pane_t

0xa3e4,	// (0x000a46ad) main_camera2_pane

0xa3e4,	// (0x000a46ad) main_video2_pane

0x47c9,	// (0x0009ea92) cams_zoom_pane_cp2_ParamLimits

0x47c9,	// (0x0009ea92) cams_zoom_pane_cp2

0x47d5,	// (0x0009ea9e) image2_vga_pane_ParamLimits

0x47d5,	// (0x0009ea9e) image2_vga_pane

0x47e4,	// (0x0009eaad) main_camera2_pane_g1_ParamLimits

0x47e4,	// (0x0009eaad) main_camera2_pane_g1

0x47f0,	// (0x0009eab9) main_camera2_pane_g2_ParamLimits

0x47f0,	// (0x0009eab9) main_camera2_pane_g2

0x47fc,	// (0x0009eac5) main_camera2_pane_g3_ParamLimits

0x47fc,	// (0x0009eac5) main_camera2_pane_g3

0x4808,	// (0x0009ead1) main_camera2_pane_g4_ParamLimits

0x4808,	// (0x0009ead1) main_camera2_pane_g4

0x4814,	// (0x0009eadd) main_camera2_pane_g5_ParamLimits

0x4814,	// (0x0009eadd) main_camera2_pane_g5

0x4820,	// (0x0009eae9) main_camera2_pane_g6_ParamLimits

0x4820,	// (0x0009eae9) main_camera2_pane_g6

0x482c,	// (0x0009eaf5) main_camera2_pane_g7_ParamLimits

0x482c,	// (0x0009eaf5) main_camera2_pane_g7

0x4838,	// (0x0009eb01) main_camera2_pane_g8_ParamLimits

0x4838,	// (0x0009eb01) main_camera2_pane_g8

0x0008,

0xf52e,	// (0x000a97f7) main_camera2_pane_g_ParamLimits

0xf52e,	// (0x000a97f7) main_camera2_pane_g

0x4850,	// (0x0009eb19) main_camera2_pane_t1_ParamLimits

0x4850,	// (0x0009eb19) main_camera2_pane_t1

0x4862,	// (0x0009eb2b) main_camera2_pane_t2_ParamLimits

0x4862,	// (0x0009eb2b) main_camera2_pane_t2

0x4874,	// (0x0009eb3d) main_camera2_pane_t3_ParamLimits

0x4874,	// (0x0009eb3d) main_camera2_pane_t3

0x4886,	// (0x0009eb4f) main_camera2_pane_t4_ParamLimits

0x4886,	// (0x0009eb4f) main_camera2_pane_t4

0x0006,

0xf541,	// (0x000a980a) main_camera2_pane_t_ParamLimits

0xf541,	// (0x000a980a) main_camera2_pane_t

0x48e8,	// (0x0009ebb1) cams_zoom_pane_cp4_ParamLimits

0x48e8,	// (0x0009ebb1) cams_zoom_pane_cp4

0x48f8,	// (0x0009ebc1) image2_cif_pane_ParamLimits

0x48f8,	// (0x0009ebc1) image2_cif_pane

0x490d,	// (0x0009ebd6) image2_subqcif_pane_ParamLimits

0x490d,	// (0x0009ebd6) image2_subqcif_pane

0x491c,	// (0x0009ebe5) main_video2_pane_g1_ParamLimits

0x491c,	// (0x0009ebe5) main_video2_pane_g1

0x492e,	// (0x0009ebf7) main_video2_pane_g2_ParamLimits

0x492e,	// (0x0009ebf7) main_video2_pane_g2

0x493e,	// (0x0009ec07) main_video2_pane_g3_ParamLimits

0x493e,	// (0x0009ec07) main_video2_pane_g3

0x494e,	// (0x0009ec17) main_video2_pane_g4_ParamLimits

0x494e,	// (0x0009ec17) main_video2_pane_g4

0x495e,	// (0x0009ec27) main_video2_pane_g5_ParamLimits

0x495e,	// (0x0009ec27) main_video2_pane_g5

0x496e,	// (0x0009ec37) main_video2_pane_g6_ParamLimits

0x496e,	// (0x0009ec37) main_video2_pane_g6

0x0005,

0xf550,	// (0x000a9819) main_video2_pane_g_ParamLimits

0xf550,	// (0x000a9819) main_video2_pane_g

0x4980,	// (0x0009ec49) main_video2_pane_t1_ParamLimits

0x4980,	// (0x0009ec49) main_video2_pane_t1

0x499a,	// (0x0009ec63) main_video2_pane_t2_ParamLimits

0x499a,	// (0x0009ec63) main_video2_pane_t2

0x49c0,	// (0x0009ec89) main_video2_pane_t3_ParamLimits

0x49c0,	// (0x0009ec89) main_video2_pane_t3

0x0002,

0xf55d,	// (0x000a9826) main_video2_pane_t_ParamLimits

0xf55d,	// (0x000a9826) main_video2_pane_t

0x427c,	// (0x0009e545) call_muted_g2

0x0001,

0xf512,	// (0x000a97db) call_muted_g

0xa3e4,	// (0x000a46ad) main_mup2_pane

0xc907,	// (0x000a6bd0) main_mup2_pane_g1_ParamLimits

0xc907,	// (0x000a6bd0) main_mup2_pane_g1

0x49e6,	// (0x0009ecaf) main_mup2_pane_g2_ParamLimits

0x49e6,	// (0x0009ecaf) main_mup2_pane_g2

0x4c68,	// (0x0009ef31) main_mup_pane_g13_cp1

0x4c70,	// (0x0009ef39) mup_volume_pane_cp1

0x4a06,	// (0x0009eccf) main_mup2_pane_g4_ParamLimits

0x4a06,	// (0x0009eccf) main_mup2_pane_g4

0x4a1b,	// (0x0009ece4) main_mup2_pane_g5_ParamLimits

0x4a1b,	// (0x0009ece4) main_mup2_pane_g5

0x4a30,	// (0x0009ecf9) main_mup2_pane_g6_ParamLimits

0x4a30,	// (0x0009ecf9) main_mup2_pane_g6

0x4a45,	// (0x0009ed0e) main_mup2_pane_g7_ParamLimits

0x4a45,	// (0x0009ed0e) main_mup2_pane_g7

0x0006,

0xf564,	// (0x000a982d) main_mup2_pane_g_ParamLimits

0xf564,	// (0x000a982d) main_mup2_pane_g

0x4a61,	// (0x0009ed2a) main_mup2_pane_t1_ParamLimits

0x4a61,	// (0x0009ed2a) main_mup2_pane_t1

0x4a78,	// (0x0009ed41) main_mup2_pane_t2_ParamLimits

0x4a78,	// (0x0009ed41) main_mup2_pane_t2

0x4a8f,	// (0x0009ed58) main_mup2_pane_t3_ParamLimits

0x4a8f,	// (0x0009ed58) main_mup2_pane_t3

0x4aa6,	// (0x0009ed6f) main_mup2_pane_t4_ParamLimits

0x4aa6,	// (0x0009ed6f) main_mup2_pane_t4

0x4ac0,	// (0x0009ed89) main_mup2_pane_t5_ParamLimits

0x4ac0,	// (0x0009ed89) main_mup2_pane_t5

0x4ada,	// (0x0009eda3) main_mup2_pane_t6_ParamLimits

0x4ada,	// (0x0009eda3) main_mup2_pane_t6

0x0005,

0xf573,	// (0x000a983c) main_mup2_pane_t_ParamLimits

0xf573,	// (0x000a983c) main_mup2_pane_t

0x4b12,	// (0x0009eddb) mup2_visualizer_pane_ParamLimits

0x4b12,	// (0x0009eddb) mup2_visualizer_pane

0x4b48,	// (0x0009ee11) mup_progress_pane_cp_ParamLimits

0x4b48,	// (0x0009ee11) mup_progress_pane_cp

0x4c53,	// (0x0009ef1c) mup_volume_pane_cp_ParamLimits

0x4c53,	// (0x0009ef1c) mup_volume_pane_cp

0x4b5f,	// (0x0009ee28) mup2_visualizer_pane_g1_ParamLimits

0x4b5f,	// (0x0009ee28) mup2_visualizer_pane_g1

0xc913,	// (0x000a6bdc) mup2_visualizer_pane_g2_ParamLimits

0xc913,	// (0x000a6bdc) mup2_visualizer_pane_g2

0x4b74,	// (0x0009ee3d) mup2_visualizer_pane_g3_ParamLimits

0x4b74,	// (0x0009ee3d) mup2_visualizer_pane_g3

0x0002,

0xf580,	// (0x000a9849) mup2_visualizer_pane_g_ParamLimits

0xf580,	// (0x000a9849) mup2_visualizer_pane_g

0xb6f4,	// (0x000a59bd) aid_size_cell_fmradio

0x4392,	// (0x0009e65b) aid_height_parent_landcape

0xab4b,	// (0x000a4e14) wml_content_pane_cp

0xab53,	// (0x000a4e1c) wml_tabs_pane

0xab5c,	// (0x000a4e25) popup_wml_miniature_window

0xab64,	// (0x000a4e2d) scroll_pane_cp021

0xab78,	// (0x000a4e41) wml_content_pane_comp8

0xa3e4,	// (0x000a46ad) bg_popup_sub_pane_cp05

0xc931,	// (0x000a6bfa) popup_wml_miniature_window_g1

0xc939,	// (0x000a6c02) wml_miniature_view_pane

0x4b82,	// (0x0009ee4b) aid_size_wml_view

0x4b8a,	// (0x0009ee53) wml_miniature_view_pane_g1

0x4b93,	// (0x0009ee5c) wml_miniature_view_pane_g2

0x4b9c,	// (0x0009ee65) wml_miniature_view_pane_g3

0x4ba4,	// (0x0009ee6d) wml_miniature_view_pane_g4

0x4bac,	// (0x0009ee75) wml_miniature_view_pane_g5

0x4bb4,	// (0x0009ee7d) wml_miniature_view_pane_g6

0x4bbc,	// (0x0009ee85) wml_miniature_view_pane_g7

0x4bc4,	// (0x0009ee8d) wml_miniature_view_pane_g8

0x0007,

0xf587,	// (0x000a9850) wml_miniature_view_pane_g

0xc907,	// (0x000a6bd0) background_graphic_ParamLimits

0xc907,	// (0x000a6bd0) background_graphic

0xc941,	// (0x000a6c0a) wml_tabs_2_pane

0xc94a,	// (0x000a6c13) wml_tabs_3_pane_ParamLimits

0xc94a,	// (0x000a6c13) wml_tabs_3_pane

0xc95c,	// (0x000a6c25) wml_tabs_4_pane_ParamLimits

0xc95c,	// (0x000a6c25) wml_tabs_4_pane

0xc972,	// (0x000a6c3b) wml_tabs_5_pane_ParamLimits

0xc972,	// (0x000a6c3b) wml_tabs_5_pane

0xc98c,	// (0x000a6c55) wml_tabs_pane_g2_ParamLimits

0xc98c,	// (0x000a6c55) wml_tabs_pane_g2

0xc9a0,	// (0x000a6c69) wml_tabs_pane_g3_ParamLimits

0xc9a0,	// (0x000a6c69) wml_tabs_pane_g3

0x4bcc,	// (0x0009ee95) wml_tabs_2_active_pane_ParamLimits

0x4bcc,	// (0x0009ee95) wml_tabs_2_active_pane

0x4bdc,	// (0x0009eea5) wml_tabs_2_passive_pane_ParamLimits

0x4bdc,	// (0x0009eea5) wml_tabs_2_passive_pane

0x4bec,	// (0x0009eeb5) wml_tabs_3_active_pane_cp_ParamLimits

0x4bec,	// (0x0009eeb5) wml_tabs_3_active_pane_cp

0x4bfd,	// (0x0009eec6) wml_tabs_3_passive_pane_ParamLimits

0x4bfd,	// (0x0009eec6) wml_tabs_3_passive_pane

0x4c0e,	// (0x0009eed7) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c0e,	// (0x0009eed7) wml_tabs_3_passive_pane_cp

0x4c1f,	// (0x0009eee8) tabs_4_active_pane

0x4c27,	// (0x0009eef0) tabs_4_passive_pane

0x4c2f,	// (0x0009eef8) tabs_4_passive_pane_cp

0x4c37,	// (0x0009ef00) tabs_4_passive_pane_cp2

0x4157,	// (0x0009e420) aid_height_text

0x390b,	// (0x0009dbd4) mup_volume_cont_pane_ParamLimits

0x390b,	// (0x0009dbd4) mup_volume_cont_pane

0x11a9,	// (0x0009b472) aid_size_cell_pinb

0x11b3,	// (0x0009b47c) aid_size_list_pinb

0x4b31,	// (0x0009edfa) mup2_volume_cont_pane_ParamLimits

0x4b31,	// (0x0009edfa) mup2_volume_cont_pane

0x4c3f,	// (0x0009ef08) mup2_volume_cont_pane_g1_ParamLimits

0x4c3f,	// (0x0009ef08) mup2_volume_cont_pane_g1

0x0dcb,	// (0x0009b094) aid_size_cell_touch_ParamLimits

0x0dcb,	// (0x0009b094) aid_size_cell_touch

0x108c,	// (0x0009b355) touch_pane_ParamLimits

0x108c,	// (0x0009b355) touch_pane

0x1082,	// (0x0009b34b) main_rss2_pane

0xc9bd,	// (0x000a6c86) listscroll_rss2_pane

0xc9c6,	// (0x000a6c8f) rss2_navigation_pane

0xc9ce,	// (0x000a6c97) list_rss2_pane

0xb1d4,	// (0x000a549d) scroll_pane_cp22

0xc9d6,	// (0x000a6c9f) rss2_navigation_pane_g1

0xc9df,	// (0x000a6ca8) rss2_navigation_pane_g2

0xc9e7,	// (0x000a6cb0) rss2_navigation_pane_g3

0x0002,

0x0404,	// (0x0009a6cd) rss2_navigation_pane_g

0xc9ef,	// (0x000a6cb8) rss2_navigation_pane_t1

0x4c78,	// (0x0009ef41) rss2_list_single_pane_ParamLimits

0x4c78,	// (0x0009ef41) rss2_list_single_pane

0xc9fd,	// (0x000a6cc6) rss2_list_single_pane_t2

0xca0b,	// (0x000a6cd4) rss2_list_single_pane_t3_ParamLimits

0xca0b,	// (0x000a6cd4) rss2_list_single_pane_t3

0xca28,	// (0x000a6cf1) rss2_list_single_pane_t4

0x3156,	// (0x0009d41f) smil_status_pane_g1

0x43a9,	// (0x0009e672) main_image2_pane_ParamLimits

0x43a9,	// (0x0009e672) main_image2_pane

0x4844,	// (0x0009eb0d) main_camera2_pane_g9_ParamLimits

0x4844,	// (0x0009eb0d) main_camera2_pane_g9

0x4898,	// (0x0009eb61) main_camera2_pane_t5_ParamLimits

0x4898,	// (0x0009eb61) main_camera2_pane_t5

0x48aa,	// (0x0009eb73) main_camera2_pane_t6_ParamLimits

0x48aa,	// (0x0009eb73) main_camera2_pane_t6

0x4cac,	// (0x0009ef75) main_image2_pane_g1_ParamLimits

0x4cac,	// (0x0009ef75) main_image2_pane_g1

0x3ef1,	// (0x0009e1ba) smil2_video_pane_ParamLimits

0x3ef1,	// (0x0009e1ba) smil2_video_pane

0x0dff,	// (0x0009b0c8) aid_zoom_text_primary_cp

0x101d,	// (0x0009b2e6) popup_preview_fixed_window

0xaab4,	// (0x000a4d7d) im_reading_pane_g1

0x478e,	// (0x0009ea57) cams2_bc_adjust_pane_cp_ParamLimits

0x478e,	// (0x0009ea57) cams2_bc_adjust_pane_cp

0x48da,	// (0x0009eba3) cams2_bc_adjust_pane_ParamLimits

0x48da,	// (0x0009eba3) cams2_bc_adjust_pane

0xda75,	// (0x000a7d3e) cams2_bc_adjust_pane_g1

0x4cb8,	// (0x0009ef81) cams2_slider_pane

0x4cc1,	// (0x0009ef8a) cams2_slider_pane_g1

0x4cca,	// (0x0009ef93) cams2_slider_pane_g2

0x0006,

0xf598,	// (0x000a9861) cams2_slider_pane_g

0x12b3,	// (0x0009b57c) calc_display_pane_ParamLimits

0x12d1,	// (0x0009b59a) calc_paper_pane_ParamLimits

0x12ed,	// (0x0009b5b6) grid_calc_pane_ParamLimits

0x3445,	// (0x0009d70e) popup_clock_digital_window_t1_ParamLimits

0xb691,	// (0x000a595a) main_image_pane_t1

0x1299,	// (0x0009b562) aid_size_cell_calc_ParamLimits

0x1299,	// (0x0009b562) aid_size_cell_calc

0x43da,	// (0x0009e6a3) popup_blid_sat_info2_window_ParamLimits

0x43da,	// (0x0009e6a3) popup_blid_sat_info2_window

0xca3e,	// (0x000a6d07) aid_size_cell_blid

0xca46,	// (0x000a6d0f) bg_popup_window_pane_cp07

0xca69,	// (0x000a6d32) grid_popup_blid_pane

0xca73,	// (0x000a6d3c) heading_pane_cp05_ParamLimits

0xca73,	// (0x000a6d3c) heading_pane_cp05

0xcb3d,	// (0x000a6e06) cell_popup_blid_pane_ParamLimits

0xcb3d,	// (0x000a6e06) cell_popup_blid_pane

0xcb61,	// (0x000a6e2a) cell_popup_blid_pane_g1

0xcb69,	// (0x000a6e32) cell_popup_blid_pane_t1

0x4af7,	// (0x0009edc0) mup2_indicator_pane_ParamLimits

0x4af7,	// (0x0009edc0) mup2_indicator_pane

0xa9bb,	// (0x000a4c84) mup2_visualizer_osc_pane

0xc91f,	// (0x000a6be8) mup2_visualizer_spec_pane_ParamLimits

0xc91f,	// (0x000a6be8) mup2_visualizer_spec_pane

0x4ce4,	// (0x0009efad) mup2_spec_half_pane

0x4ced,	// (0x0009efb6) mup2_spec_half_pane_cp

0x4cf7,	// (0x0009efc0) mup2_spec_bar_pane_ParamLimits

0x4cf7,	// (0x0009efc0) mup2_spec_bar_pane

0xc8b4,	// (0x000a6b7d) mup2_spec_bar_pane_g1

0xc8be,	// (0x000a6b87) mup2_spec_bar_pane_g2

0x0001,

0x037e,	// (0x0009a647) mup2_spec_bar_pane_g

0x4d16,	// (0x0009efdf) mup2_osc_middle_pane

0xc8d0,	// (0x000a6b99) mup2_visualizer_osc_pane_g1

0x9b3e,	// (0x000a3e07) popup_number_entry_window_t1_ParamLimits

0x9b51,	// (0x000a3e1a) popup_number_entry_window_t2_ParamLimits

0x9b63,	// (0x000a3e2c) popup_number_entry_window_t3_ParamLimits

0x10e3,	// (0x0009b3ac) popup_number_entry_window_t5_ParamLimits

0x10e3,	// (0x0009b3ac) popup_number_entry_window_t5

0xf0ca,	// (0x000a9393) popup_number_entry_window_t_ParamLimits

0x9b75,	// (0x000a3e3e) text_title_cp2_ParamLimits

0x3bf2,	// (0x0009debb) aid_hotspot_pointer_text2_pane

0x3c80,	// (0x0009df49) main_viewer_pane_g9_ParamLimits

0x3c80,	// (0x0009df49) main_viewer_pane_g9

0xaced,	// (0x000a4fb6) cale_month_pane_t1_ParamLimits

0xad2a,	// (0x000a4ff3) bg_cale_pane_ParamLimits

0xad42,	// (0x000a500b) list_cale_pane_ParamLimits

0xad53,	// (0x000a501c) listscroll_cale_day_pane_t1

0xad65,	// (0x000a502e) scroll_pane_cp09_ParamLimits

0x394a,	// (0x0009dc13) main_mup_eq_pane_t1_ParamLimits

0x394a,	// (0x0009dc13) main_mup_eq_pane_t1

0x3964,	// (0x0009dc2d) main_mup_eq_pane_t2_ParamLimits

0x3964,	// (0x0009dc2d) main_mup_eq_pane_t2

0x397c,	// (0x0009dc45) main_mup_eq_pane_t3_ParamLimits

0x397c,	// (0x0009dc45) main_mup_eq_pane_t3

0x3994,	// (0x0009dc5d) main_mup_eq_pane_t4_ParamLimits

0x3994,	// (0x0009dc5d) main_mup_eq_pane_t4

0x39ac,	// (0x0009dc75) main_mup_eq_pane_t5_ParamLimits

0x39ac,	// (0x0009dc75) main_mup_eq_pane_t5

0x39c4,	// (0x0009dc8d) main_mup_eq_pane_t6_ParamLimits

0x39c4,	// (0x0009dc8d) main_mup_eq_pane_t6

0x39d8,	// (0x0009dca1) main_mup_eq_pane_t7_ParamLimits

0x39d8,	// (0x0009dca1) main_mup_eq_pane_t7

0x39ec,	// (0x0009dcb5) main_mup_eq_pane_t8_ParamLimits

0x39ec,	// (0x0009dcb5) main_mup_eq_pane_t8

0x3a02,	// (0x0009dccb) main_mup_eq_pane_t9_ParamLimits

0x3a02,	// (0x0009dccb) main_mup_eq_pane_t9

0x3a1a,	// (0x0009dce3) main_mup_eq_pane_t10_ParamLimits

0x3a1a,	// (0x0009dce3) main_mup_eq_pane_t10

0x0009,

0xf42a,	// (0x000a96f3) main_mup_eq_pane_t_ParamLimits

0xf42a,	// (0x000a96f3) main_mup_eq_pane_t

0x3ad7,	// (0x0009dda0) mup_equalizer_pane_cp5_ParamLimits

0x3aed,	// (0x0009ddb6) mup_equalizer_pane_cp6_ParamLimits

0x3b05,	// (0x0009ddce) mup_equalizer_pane_cp7_ParamLimits

0x1082,	// (0x0009b34b) main_gallery_pane

0xc8d9,	// (0x000a6ba2) smil2_volume_pane

0xc8e1,	// (0x000a6baa) smil_status_volume_pane_g1_ParamLimits

0xc8f4,	// (0x000a6bbd) smil_status_volume_pane_g2_ParamLimits

0x4601,	// (0x0009e8ca) smil_status_volume_pane_g3_ParamLimits

0xf517,	// (0x000a97e0) smil_status_volume_pane_g_ParamLimits

0xca46,	// (0x000a6d0f) bg_popup_window_pane_cp07_ParamLimits

0xca54,	// (0x000a6d1d) blid_firmament_pane

0x4d1f,	// (0x0009efe8) aid_size_cell_gallery_ParamLimits

0x4d1f,	// (0x0009efe8) aid_size_cell_gallery

0x4d2d,	// (0x0009eff6) grid_gallery_pane_ParamLimits

0x4d2d,	// (0x0009eff6) grid_gallery_pane

0x4d3d,	// (0x0009f006) cell_gallery_pane_ParamLimits

0x4d3d,	// (0x0009f006) cell_gallery_pane

0xcb77,	// (0x000a6e40) bg_cell_gallery_focus_pane_ParamLimits

0xcb77,	// (0x000a6e40) bg_cell_gallery_focus_pane

0xcb95,	// (0x000a6e5e) cell_gallery_pane_g1_ParamLimits

0xcb95,	// (0x000a6e5e) cell_gallery_pane_g1

0x4d8b,	// (0x0009f054) cell_gallery_pane_g2_ParamLimits

0x4d8b,	// (0x0009f054) cell_gallery_pane_g2

0x4d98,	// (0x0009f061) cell_gallery_pane_g3_ParamLimits

0x4d98,	// (0x0009f061) cell_gallery_pane_g3

0xcba1,	// (0x000a6e6a) cell_gallery_pane_g4_ParamLimits

0xcba1,	// (0x000a6e6a) cell_gallery_pane_g4

0x0003,

0xf5be,	// (0x000a9887) cell_gallery_pane_g_ParamLimits

0xf5be,	// (0x000a9887) cell_gallery_pane_g

0xcbad,	// (0x000a6e76) bg_cell_gallery_focus_pane_g1

0xcbb5,	// (0x000a6e7e) bg_cell_gallery_focus_pane_g2

0xcbbd,	// (0x000a6e86) bg_cell_gallery_focus_pane_g3

0xcbc5,	// (0x000a6e8e) bg_cell_gallery_focus_pane_g4

0xcbcd,	// (0x000a6e96) bg_cell_gallery_focus_pane_g5

0xcbd5,	// (0x000a6e9e) bg_cell_gallery_focus_pane_g6

0xcbdd,	// (0x000a6ea6) bg_cell_gallery_focus_pane_g7

0xcbe5,	// (0x000a6eae) bg_cell_gallery_focus_pane_g8

0x0007,

0x043a,	// (0x0009a703) bg_cell_gallery_focus_pane_g

0xcbed,	// (0x000a6eb6) aid_firma_cardinal

0xcc01,	// (0x000a6eca) blid_firmament_pane_t1

0xcc18,	// (0x000a6ee1) blid_firmament_pane_t2

0xcc2f,	// (0x000a6ef8) blid_firmament_pane_t3

0xcc46,	// (0x000a6f0f) blid_firmament_pane_t4

0x0003,

0x044b,	// (0x0009a714) blid_firmament_pane_t

0xcc5d,	// (0x000a6f26) blid_sat_info_pane

0xcc6d,	// (0x000a6f36) blid_sat_info_pane_g1

0xcc6d,	// (0x000a6f36) blid_sat_info_pane_g2

0x0001,

0x0454,	// (0x0009a71d) blid_sat_info_pane_g

0xcc77,	// (0x000a6f40) blid_sat_info_pane_t1

0xcc85,	// (0x000a6f4e) smil2_volume_content_pane

0xcc8e,	// (0x000a6f57) smil2_volume_pane_g1

0xcc96,	// (0x000a6f5f) smil2_volume_content_pane_g1

0xcc9f,	// (0x000a6f68) smil2_volume_content_pane_g2

0xcca8,	// (0x000a6f71) smil2_volume_content_pane_g3

0xccb1,	// (0x000a6f7a) smil2_volume_content_pane_g4

0xccba,	// (0x000a6f83) smil2_volume_content_pane_g5

0xccc3,	// (0x000a6f8c) smil2_volume_content_pane_g6

0xcccc,	// (0x000a6f95) smil2_volume_content_pane_g7

0xccd5,	// (0x000a6f9e) smil2_volume_content_pane_g8

0xccde,	// (0x000a6fa7) smil2_volume_content_pane_g9

0xcce7,	// (0x000a6fb0) smil2_volume_content_pane_g10

0x0009,

0x0459,	// (0x0009a722) smil2_volume_content_pane_g

0x18cb,	// (0x0009bb94) cale_week_day_heading_pane_t1_ParamLimits

0x1906,	// (0x0009bbcf) cale_week_day_heading_pane_t2_ParamLimits

0x1941,	// (0x0009bc0a) cale_week_day_heading_pane_t3_ParamLimits

0x197c,	// (0x0009bc45) cale_week_day_heading_pane_t4_ParamLimits

0x19b7,	// (0x0009bc80) cale_week_day_heading_pane_t5_ParamLimits

0x19f2,	// (0x0009bcbb) cale_week_day_heading_pane_t6_ParamLimits

0x1a2d,	// (0x0009bcf6) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a949a) cale_week_day_heading_pane_t_ParamLimits

0xa960,	// (0x000a4c29) bg_cale_side_pane_ParamLimits

0x1a68,	// (0x0009bd31) cale_week_time_pane_t1_ParamLimits

0x1a82,	// (0x0009bd4b) cale_week_time_pane_t2_ParamLimits

0x1a9c,	// (0x0009bd65) cale_week_time_pane_t3_ParamLimits

0x1ab6,	// (0x0009bd7f) cale_week_time_pane_t4_ParamLimits

0x1ad0,	// (0x0009bd99) cale_week_time_pane_t5_ParamLimits

0x1aea,	// (0x0009bdb3) cale_week_time_pane_t6_ParamLimits

0x1b0a,	// (0x0009bdd3) cale_week_time_pane_t7_ParamLimits

0x1b2e,	// (0x0009bdf7) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a94a9) cale_week_time_pane_t_ParamLimits

0x1b52,	// (0x0009be1b) cell_cale_week_pane_g2_ParamLimits

0xa960,	// (0x000a4c29) bg_cale_side_pane_cp01_ParamLimits

0x2f01,	// (0x0009d1ca) cale_month_week_pane_t1_ParamLimits

0x2f1a,	// (0x0009d1e3) cale_month_week_pane_t2_ParamLimits

0x2f33,	// (0x0009d1fc) cale_month_week_pane_t3_ParamLimits

0x2f4c,	// (0x0009d215) cale_month_week_pane_t4_ParamLimits

0x2f67,	// (0x0009d230) cale_month_week_pane_t5_ParamLimits

0x2f88,	// (0x0009d251) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a957e) cale_month_week_pane_t_ParamLimits

0x30f9,	// (0x0009d3c2) cell_cale_month_pane_g1_ParamLimits

0x1082,	// (0x0009b34b) main_cale_event_viewer_pane

0x9b14,	// (0x000a3ddd) listscroll_cale_event_viewer_pane

0xccf0,	// (0x000a6fb9) list_cale_ev_pane

0xccf8,	// (0x000a6fc1) scroll_pane_cp023

0xcd04,	// (0x000a6fcd) field_cale_ev_pane_ParamLimits

0xcd04,	// (0x000a6fcd) field_cale_ev_pane

0xcd22,	// (0x000a6feb) field_cale_ev_content_pane_ParamLimits

0xcd22,	// (0x000a6feb) field_cale_ev_content_pane

0xcd2e,	// (0x000a6ff7) field_cale_ev_pane_g1_ParamLimits

0xcd2e,	// (0x000a6ff7) field_cale_ev_pane_g1

0xcd3a,	// (0x000a7003) field_cale_ev_pane_g2_ParamLimits

0xcd3a,	// (0x000a7003) field_cale_ev_pane_g2

0xcd52,	// (0x000a701b) field_cale_ev_pane_g3_ParamLimits

0xcd52,	// (0x000a701b) field_cale_ev_pane_g3

0x0002,

0x046e,	// (0x0009a737) field_cale_ev_pane_g_ParamLimits

0x046e,	// (0x0009a737) field_cale_ev_pane_g

0xcd6a,	// (0x000a7033) field_cale_ev_pane_t1_ParamLimits

0xcd6a,	// (0x000a7033) field_cale_ev_pane_t1

0xa8d3,	// (0x000a4b9c) field_cale_ev_content_pane_t1_ParamLimits

0xa8d3,	// (0x000a4b9c) field_cale_ev_content_pane_t1

0xb577,	// (0x000a5840) bg_button_pane_cp01

0x1654,	// (0x0009b91d) listscroll_cale_week_pane_ParamLimits

0xa90b,	// (0x000a4bd4) popup_toolbar_window_cp01

0xa931,	// (0x000a4bfa) listscroll_cale_week_pane_t1_ParamLimits

0x1654,	// (0x0009b91d) listscroll_cale_day_pane_ParamLimits

0xa90b,	// (0x000a4bd4) popup_toolbar_window_cp02

0xad53,	// (0x000a501c) listscroll_cale_day_pane_t1_ParamLimits

0x1654,	// (0x0009b91d) main_cale_month_pane_ParamLimits

0x44dd,	// (0x0009e7a6) popup_toolbar_window_cp03_ParamLimits

0x44dd,	// (0x0009e7a6) popup_toolbar_window_cp03

0x3e07,	// (0x0009e0d0) main_image_pane_g2_ParamLimits

0x3e07,	// (0x0009e0d0) main_image_pane_g2

0x3e13,	// (0x0009e0dc) main_image_pane_g3_ParamLimits

0x3e13,	// (0x0009e0dc) main_image_pane_g3

0x0002,

0xf4b2,	// (0x000a977b) main_image_pane_g_ParamLimits

0xf4b2,	// (0x000a977b) main_image_pane_g

0xb691,	// (0x000a595a) main_image_pane_t1_ParamLimits

0x3e1f,	// (0x0009e0e8) main_image_pane_t2_ParamLimits

0x3e1f,	// (0x0009e0e8) main_image_pane_t2

0x3e31,	// (0x0009e0fa) main_image_pane_t3_ParamLimits

0x3e31,	// (0x0009e0fa) main_image_pane_t3

0x3e43,	// (0x0009e10c) main_image_pane_t4_ParamLimits

0x3e43,	// (0x0009e10c) main_image_pane_t4

0x0003,

0xf4b9,	// (0x000a9782) main_image_pane_t_ParamLimits

0xf4b9,	// (0x000a9782) main_image_pane_t

0x3e55,	// (0x0009e11e) popup_image_details_window_cp01

0x3e5f,	// (0x0009e128) popup_toobar_trans_pane_cp01_ParamLimits

0x3e5f,	// (0x0009e128) popup_toobar_trans_pane_cp01

0x442d,	// (0x0009e6f6) popup_image_details_window_ParamLimits

0x442d,	// (0x0009e6f6) popup_image_details_window

0x443b,	// (0x0009e704) popup_image_focus_window

0x4780,	// (0x0009ea49) camera2_autofocus_pane_ParamLimits

0x4780,	// (0x0009ea49) camera2_autofocus_pane

0x9b14,	// (0x000a3ddd) bg_popup_sub_pane_cp06

0xcd81,	// (0x000a704a) popup_image_focus_window_g1

0xcd89,	// (0x000a7052) popup_image_focus_window_g2

0xcd91,	// (0x000a705a) popup_image_focus_window_g3

0xcd99,	// (0x000a7062) popup_image_focus_window_g4

0x0003,

0x0475,	// (0x0009a73e) popup_image_focus_window_g

0xcda1,	// (0x000a706a) popup_image_focus_window_t1

0xcdaf,	// (0x000a7078) popup_image_focus_window_t2

0xcdbf,	// (0x000a7088) popup_image_focus_window_t3

0x0002,

0x047e,	// (0x0009a747) popup_image_focus_window_t

0xcdcd,	// (0x000a7096) camera2_autofocus_pane_g1

0xa474,	// (0x000a473d) bg_tb_trans_pane_cp01

0xcddb,	// (0x000a70a4) popup_image_details_window_g1

0xcdee,	// (0x000a70b7) popup_image_details_window_g2

0x0002,

0x0490,	// (0x0009a759) popup_image_details_window_g

0xce17,	// (0x000a70e0) popup_image_details_window_t1

0xce29,	// (0x000a70f2) popup_image_details_window_t2

0xce42,	// (0x000a710b) popup_image_details_window_t3

0xce56,	// (0x000a711f) popup_image_details_window_t4

0xce71,	// (0x000a713a) popup_image_details_window_t5

0x0004,

0x0497,	// (0x0009a760) popup_image_details_window_t

0xa7b2,	// (0x000a4a7b) bg_calc_paper_pane_ParamLimits

0x1082,	// (0x0009b34b) grid_highlight_pane_cp013

0x13ea,	// (0x0009b6b3) list_calc_pane_ParamLimits

0x13fc,	// (0x0009b6c5) scroll_pane_cp024

0xa7c6,	// (0x000a4a8f) bg_calc_display_pane_ParamLimits

0x1404,	// (0x0009b6cd) calc_display_pane_t1_ParamLimits

0x1419,	// (0x0009b6e2) calc_display_pane_t2_ParamLimits

0x142e,	// (0x0009b6f7) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a941a) calc_display_pane_t_ParamLimits

0x150b,	// (0x0009b7d4) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a9437) cell_calc_pane_g

0x1514,	// (0x0009b7dd) cell_calc_pane_t1

0xa825,	// (0x000a4aee) grid_highlight_pane_cp02_ParamLimits

0xa83b,	// (0x000a4b04) toolbar_button_pane_cp01_ParamLimits

0xa83b,	// (0x000a4b04) toolbar_button_pane_cp01

0xb6d6,	// (0x000a599f) temp_image_control_pane_ParamLimits

0xb6d6,	// (0x000a599f) temp_image_control_pane

0x43a9,	// (0x0009e672) main_mp3_pane

0xce8b,	// (0x000a7154) temp_image_control_pane_g1_ParamLimits

0xce8b,	// (0x000a7154) temp_image_control_pane_g1

0xce99,	// (0x000a7162) temp_image_control_pane_g2_ParamLimits

0xce99,	// (0x000a7162) temp_image_control_pane_g2

0xceab,	// (0x000a7174) temp_image_control_pane_g3_ParamLimits

0xceab,	// (0x000a7174) temp_image_control_pane_g3

0x4dd5,	// (0x0009f09e) temp_image_control_pane_g4_ParamLimits

0x4dd5,	// (0x0009f09e) temp_image_control_pane_g4

0x0003,

0xf5d2,	// (0x000a989b) temp_image_control_pane_g_ParamLimits

0xf5d2,	// (0x000a989b) temp_image_control_pane_g

0xce8b,	// (0x000a7154) main_mp3_pane_g1

0x4de6,	// (0x0009f0af) main_mp3_pane_g2

0x0007,

0xf5db,	// (0x000a98a4) main_mp3_pane_g

0xceee,	// (0x000a71b7) main_mp3_pane_t1

0xa9c3,	// (0x000a4c8c) main_camera_pane_g8_ParamLimits

0xa9c3,	// (0x000a4c8c) main_camera_pane_g8

0x1ddc,	// (0x0009c0a5) main_video_pane_g7_ParamLimits

0x1ddc,	// (0x0009c0a5) main_video_pane_g7

0x48c8,	// (0x0009eb91) main_camera2_pane_t7_ParamLimits

0x48c8,	// (0x0009eb91) main_camera2_pane_t7

0xab0b,	// (0x000a4dd4) scroll_pane_cp025_ParamLimits

0xab0b,	// (0x000a4dd4) scroll_pane_cp025

0xab1f,	// (0x000a4de8) scroll_pane_cp026_ParamLimits

0xab1f,	// (0x000a4de8) scroll_pane_cp026

0xab2e,	// (0x000a4df7) wml_content_pane_ParamLimits

0x1082,	// (0x0009b34b) main_touch_calib_pane

0x4e8a,	// (0x0009f153) main_touch_calib_pane_g1

0x4e96,	// (0x0009f15f) main_touch_calib_pane_g2

0x4ea2,	// (0x0009f16b) main_touch_calib_pane_g3

0x4eae,	// (0x0009f177) main_touch_calib_pane_g4

0x0003,

0xf5f9,	// (0x000a98c2) main_touch_calib_pane_g

0x4eba,	// (0x0009f183) main_touch_calib_pane_t1

0x4ed3,	// (0x0009f19c) main_touch_calib_pane_t2

0x0004,

0xf602,	// (0x000a98cb) main_touch_calib_pane_t

0xb2a3,	// (0x000a556c) mup_progress_pane_cp02

0xb2d8,	// (0x000a55a1) navi_pane_g1

0xb393,	// (0x000a565c) navi_pane_mp_t3

0x43a9,	// (0x0009e672) main_mp3_pane_ParamLimits

0x451a,	// (0x0009e7e3) navi_pane_ParamLimits

0xce8b,	// (0x000a7154) main_mp3_pane_g1_ParamLimits

0x4de6,	// (0x0009f0af) main_mp3_pane_g2_ParamLimits

0x4df2,	// (0x0009f0bb) main_mp3_pane_g3_ParamLimits

0x4df2,	// (0x0009f0bb) main_mp3_pane_g3

0x4dfe,	// (0x0009f0c7) main_mp3_pane_g4_ParamLimits

0x4dfe,	// (0x0009f0c7) main_mp3_pane_g4

0xcebb,	// (0x000a7184) main_mp3_pane_g5_ParamLimits

0xcebb,	// (0x000a7184) main_mp3_pane_g5

0xcec9,	// (0x000a7192) main_mp3_pane_g6_ParamLimits

0xcec9,	// (0x000a7192) main_mp3_pane_g6

0xced6,	// (0x000a719f) main_mp3_pane_g7_ParamLimits

0xced6,	// (0x000a719f) main_mp3_pane_g7

0xcee2,	// (0x000a71ab) main_mp3_pane_g8_ParamLimits

0xcee2,	// (0x000a71ab) main_mp3_pane_g8

0xf5db,	// (0x000a98a4) main_mp3_pane_g_ParamLimits

0x4e0a,	// (0x0009f0d3) main_mp3_pane_t2

0x4e1a,	// (0x0009f0e3) main_mp3_pane_t3

0xcefc,	// (0x000a71c5) main_mp3_pane_t4

0xcf0a,	// (0x000a71d3) main_mp3_pane_t5

0x0005,

0xf5ec,	// (0x000a98b5) main_mp3_pane_t

0xcf18,	// (0x000a71e1) mup_progress_pane_cp01

0x0dff,	// (0x0009b0c8) aid_zoom_text_secondary2

0xccf0,	// (0x000a6fb9) list_cale_ev2_pane

0xccf8,	// (0x000a6fc1) scroll_pane_cp023_ParamLimits

0x4f2e,	// (0x0009f1f7) field_cale_ev2_pane_ParamLimits

0x4f2e,	// (0x0009f1f7) field_cale_ev2_pane

0xa149,	// (0x000a4412) field_cale_ev2_pane_g1_ParamLimits

0xa149,	// (0x000a4412) field_cale_ev2_pane_g1

0xa155,	// (0x000a441e) field_cale_ev2_pane_g2_ParamLimits

0xa155,	// (0x000a441e) field_cale_ev2_pane_g2

0xa16d,	// (0x000a4436) field_cale_ev2_pane_g3_ParamLimits

0xa16d,	// (0x000a4436) field_cale_ev2_pane_g3

0x0003,

0xf60d,	// (0x000a98d6) field_cale_ev2_pane_g_ParamLimits

0xf60d,	// (0x000a98d6) field_cale_ev2_pane_g

0x9f05,	// (0x000a41ce) field_cale_ev2_pane_t1_ParamLimits

0x9f05,	// (0x000a41ce) field_cale_ev2_pane_t1

0x9f1c,	// (0x000a41e5) field_cale_ev2_pane_t2_ParamLimits

0x9f1c,	// (0x000a41e5) field_cale_ev2_pane_t2

0x0001,

0xf616,	// (0x000a98df) field_cale_ev2_pane_t_ParamLimits

0xf616,	// (0x000a98df) field_cale_ev2_pane_t

0x3ce8,	// (0x0009dfb1) main_postcard_pane_g5_ParamLimits

0x3ce8,	// (0x0009dfb1) main_postcard_pane_g5

0x3cf6,	// (0x0009dfbf) main_postcard_pane_g6_ParamLimits

0x3cf6,	// (0x0009dfbf) main_postcard_pane_g6

0x1c26,	// (0x0009beef) camera2_autofocus_pane_cp_ParamLimits

0x1c26,	// (0x0009beef) camera2_autofocus_pane_cp

0x43a9,	// (0x0009e672) main_mup3_pane

0x4f78,	// (0x0009f241) main_mup3_pane_g1_ParamLimits

0x4f78,	// (0x0009f241) main_mup3_pane_g1

0x4f99,	// (0x0009f262) main_mup3_pane_g2_ParamLimits

0x4f99,	// (0x0009f262) main_mup3_pane_g2

0x5013,	// (0x0009f2dc) main_mup3_pane_g3_ParamLimits

0x5013,	// (0x0009f2dc) main_mup3_pane_g3

0x5056,	// (0x0009f31f) main_mup3_pane_g4_ParamLimits

0x5056,	// (0x0009f31f) main_mup3_pane_g4

0x5099,	// (0x0009f362) main_mup3_pane_g5_ParamLimits

0x5099,	// (0x0009f362) main_mup3_pane_g5

0x50dc,	// (0x0009f3a5) main_mup3_pane_g6_ParamLimits

0x50dc,	// (0x0009f3a5) main_mup3_pane_g6

0xcf20,	// (0x000a71e9) main_mup3_pane_g7_ParamLimits

0xcf20,	// (0x000a71e9) main_mup3_pane_g7

0x0007,

0xf626,	// (0x000a98ef) main_mup3_pane_g_ParamLimits

0xf626,	// (0x000a98ef) main_mup3_pane_g

0x5152,	// (0x0009f41b) main_mup3_pane_t1_ParamLimits

0x5152,	// (0x0009f41b) main_mup3_pane_t1

0x51c1,	// (0x0009f48a) main_mup3_pane_t2_ParamLimits

0x51c1,	// (0x0009f48a) main_mup3_pane_t2

0x528a,	// (0x0009f553) main_mup3_pane_t4_ParamLimits

0x528a,	// (0x0009f553) main_mup3_pane_t4

0x52d8,	// (0x0009f5a1) main_mup3_pane_t5_ParamLimits

0x52d8,	// (0x0009f5a1) main_mup3_pane_t5

0x5388,	// (0x0009f651) main_mup3_pane_t6_ParamLimits

0x5388,	// (0x0009f651) main_mup3_pane_t6

0x0005,

0xf637,	// (0x000a9900) main_mup3_pane_t_ParamLimits

0xf637,	// (0x000a9900) main_mup3_pane_t

0x5434,	// (0x0009f6fd) mup3_progress_pane_ParamLimits

0x5434,	// (0x0009f6fd) mup3_progress_pane

0x54a8,	// (0x0009f771) popup_mup3_control_window_ParamLimits

0x54a8,	// (0x0009f771) popup_mup3_control_window

0xcf2e,	// (0x000a71f7) popup_mup3_text_window

0x54c1,	// (0x0009f78a) mup3_progress_pane_t1

0x54e0,	// (0x0009f7a9) mup3_progress_pane_t2

0xcf36,	// (0x000a71ff) mup3_progress_pane_t3

0x0002,

0xf644,	// (0x000a990d) mup3_progress_pane_t

0xcf53,	// (0x000a721c) mup_progress_pane_cp03

0x9b14,	// (0x000a3ddd) bg_tb_trans_pane_cp04

0x54ff,	// (0x0009f7c8) mup3_volume_pane

0x5507,	// (0x0009f7d0) popup_mup3_control_window_g1

0x5510,	// (0x0009f7d9) mup3_volume_pane_g1

0x5519,	// (0x0009f7e2) mup3_volume_pane_g2

0x5522,	// (0x0009f7eb) mup3_volume_pane_g3

0x0002,

0xf64b,	// (0x000a9914) mup3_volume_pane_g

0x9b14,	// (0x000a3ddd) bg_tb_trans_pane_cp03

0xcf63,	// (0x000a722c) popup_mup3_text_window_g1

0xcf6b,	// (0x000a7234) popup_mup3_text_window_t1

0xa80e,	// (0x000a4ad7) list_calc_item_pane_g1_ParamLimits

0xc9b4,	// (0x000a6c7d) mup_volume_pane_cp_g1

0x4eec,	// (0x0009f1b5) main_touch_calib_pane_t3

0x4f02,	// (0x0009f1cb) main_touch_calib_pane_t4

0x4f18,	// (0x0009f1e1) main_touch_calib_pane_t5

0x0db7,	// (0x0009b080) aid_cell_size_toolbar2

0x0dbf,	// (0x0009b088) aid_popup3_width_pane

0x0cc7,	// (0x0009af90) aid_zoom_text_msg_primary

0x1bfb,	// (0x0009bec4) vorec_t7

0xa7d2,	// (0x000a4a9b) bg_calc_paper_pane_g1_ParamLimits

0xa7de,	// (0x000a4aa7) bg_calc_paper_pane_g2_ParamLimits

0xa7ea,	// (0x000a4ab3) bg_calc_paper_pane_g3_ParamLimits

0xa7f6,	// (0x000a4abf) bg_calc_paper_pane_g4_ParamLimits

0xa802,	// (0x000a4acb) bg_calc_paper_pane_g5_ParamLimits

0x146d,	// (0x0009b736) bg_calc_paper_pane_g6_ParamLimits

0x147e,	// (0x0009b747) bg_calc_paper_pane_g7_ParamLimits

0x148f,	// (0x0009b758) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a9421) bg_calc_paper_pane_g_ParamLimits

0x14a0,	// (0x0009b769) calc_bg_paper_pane_g9_ParamLimits

0x1d0d,	// (0x0009bfd6) image_qvga_pane_ParamLimits

0x1d0d,	// (0x0009bfd6) image_qvga_pane

0xa6f5,	// (0x000a49be) bg_popup_sub_pane_cp04_ParamLimits

0xb60d,	// (0x000a58d6) popup_mup_playback_window_g1_ParamLimits

0xb619,	// (0x000a58e2) popup_mup_playback_window_t1_ParamLimits

0xb62e,	// (0x000a58f7) popup_mup_playback_window_t2_ParamLimits

0x0247,	// (0x0009a510) popup_mup_playback_window_t_ParamLimits

0x49f7,	// (0x0009ecc0) main_mup2_pane_g3_ParamLimits

0x49f7,	// (0x0009ecc0) main_mup2_pane_g3

0x20bc,	// (0x0009c385) popup_toolbar_window_cp04

0xba23,	// (0x000a5cec) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x000a5cec) popup_call2_audio_second_window_g3

0xbe2d,	// (0x000a60f6) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x000a60f6) popup_call2_audio_first_window_g4

0xc4ac,	// (0x000a6775) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x000a6775) popup_call2_audio_in_window_g4

0x3dfa,	// (0x0009e0c3) aid_area_sk_bg_cut_ParamLimits

0x3dfa,	// (0x0009e0c3) aid_area_sk_bg_cut

0xb643,	// (0x000a590c) aid_area_sk_bg_cut_2_ParamLimits

0xb643,	// (0x000a590c) aid_area_sk_bg_cut_2

0x4d7b,	// (0x0009f044) aid_placing_details_win

0x4d83,	// (0x0009f04c) aid_placing_details_win_2

0xcdcd,	// (0x000a7096) camera2_autofocus_pane_g1_ParamLimits

0x100e,	// (0x0009b2d7) popup_fixed_preview_cale_window_ParamLimits

0x100e,	// (0x0009b2d7) popup_fixed_preview_cale_window

0xb411,	// (0x000a56da) navi_slider_pane_g3

0xb41a,	// (0x000a56e3) navi_slider_pane_g4

0xb423,	// (0x000a56ec) navi_slider_pane_g5

0xb411,	// (0x000a56da) navi_slider_pane_g6

0x36ee,	// (0x0009d9b7) navi_slider_pane_g7

0xb544,	// (0x000a580d) mup_scale_pane_g3

0xb54d,	// (0x000a5816) mup_scale_pane_g4

0xb556,	// (0x000a581f) mup_scale_pane_g5

0x3b1d,	// (0x0009dde6) mup_scale_pane_g6

0x3b26,	// (0x0009ddef) mup_scale_pane_g7

0xb411,	// (0x000a56da) cams2_slider_pane_g3

0xca36,	// (0x000a6cff) cams2_slider_pane_g4

0x4cd3,	// (0x0009ef9c) cams2_slider_pane_g5

0xb411,	// (0x000a56da) cams2_slider_pane_g6

0x4cdb,	// (0x0009efa4) cams2_slider_pane_g7

0xcc6d,	// (0x000a6f36) camera2_autofocus_pane_cp_g1

0xc84d,	// (0x000a6b16) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84d,	// (0x000a6b16) bg_popup_preview_window_pane_cp02

0xcf79,	// (0x000a7242) list_fp_cale_pane_ParamLimits

0xcf79,	// (0x000a7242) list_fp_cale_pane

0xcf85,	// (0x000a724e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf85,	// (0x000a724e) popup_fixed_preview_cale_window_t1

0x552b,	// (0x0009f7f4) popup_fixed_preview_cale_window_t2_ParamLimits

0x552b,	// (0x0009f7f4) popup_fixed_preview_cale_window_t2

0x5540,	// (0x0009f809) popup_fixed_preview_cale_window_t3_ParamLimits

0x5540,	// (0x0009f809) popup_fixed_preview_cale_window_t3

0x0002,

0xf652,	// (0x000a991b) popup_fixed_preview_cale_window_t_ParamLimits

0xf652,	// (0x000a991b) popup_fixed_preview_cale_window_t

0x5555,	// (0x0009f81e) list_single_fp_cale_pane_ParamLimits

0x5555,	// (0x0009f81e) list_single_fp_cale_pane

0xcfa3,	// (0x000a726c) list_single_fp_cale_pane_g1_ParamLimits

0xcfa3,	// (0x000a726c) list_single_fp_cale_pane_g1

0xcfaf,	// (0x000a7278) list_single_fp_cale_pane_g2_ParamLimits

0xcfaf,	// (0x000a7278) list_single_fp_cale_pane_g2

0x0002,

0x0529,	// (0x0009a7f2) list_single_fp_cale_pane_g_ParamLimits

0x0529,	// (0x0009a7f2) list_single_fp_cale_pane_g

0xcfc8,	// (0x000a7291) list_single_fp_cale_pane_t1_ParamLimits

0xcfc8,	// (0x000a7291) list_single_fp_cale_pane_t1

0xcfda,	// (0x000a72a3) list_single_fp_cale_pane_t2_ParamLimits

0xcfda,	// (0x000a72a3) list_single_fp_cale_pane_t2

0x0001,

0x0530,	// (0x0009a7f9) list_single_fp_cale_pane_t_ParamLimits

0x0530,	// (0x0009a7f9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1082,	// (0x0009b34b) main_dialer_pane

0x5568,	// (0x0009f831) aid_cell_size_keypad

0x5572,	// (0x0009f83b) dialer_ne_pane

0x557c,	// (0x0009f845) grid_dialer_command_1_pane

0x5584,	// (0x0009f84d) grid_dialer_command_2_pane

0x558c,	// (0x0009f855) grid_dialer_keypad_pane

0x55a0,	// (0x0009f869) bg_popup_call_pane_cp06_ParamLimits

0x55a0,	// (0x0009f869) bg_popup_call_pane_cp06

0x55ac,	// (0x0009f875) dialer_ne_clear_pane_ParamLimits

0x55ac,	// (0x0009f875) dialer_ne_clear_pane

0xd00d,	// (0x000a72d6) dialer_ne_pane_g1

0xd015,	// (0x000a72de) dialer_ne_pane_t1_ParamLimits

0xd015,	// (0x000a72de) dialer_ne_pane_t1

0x55b8,	// (0x0009f881) dialer_ne_pane_t2_ParamLimits

0x55b8,	// (0x0009f881) dialer_ne_pane_t2

0x55d5,	// (0x0009f89e) dialer_ne_pane_t3_ParamLimits

0x55d5,	// (0x0009f89e) dialer_ne_pane_t3

0x0002,

0xf659,	// (0x000a9922) dialer_ne_pane_t_ParamLimits

0xf659,	// (0x000a9922) dialer_ne_pane_t

0x55f9,	// (0x0009f8c2) dialer_ne_pane_t3_copy1_ParamLimits

0x55f9,	// (0x0009f8c2) dialer_ne_pane_t3_copy1

0x561d,	// (0x0009f8e6) cell_dialer_keypad_pane_ParamLimits

0x561d,	// (0x0009f8e6) cell_dialer_keypad_pane

0x5634,	// (0x0009f8fd) cell_dialer_command_1_pane_ParamLimits

0x5634,	// (0x0009f8fd) cell_dialer_command_1_pane

0x564a,	// (0x0009f913) cell_dialer_command_2_pane_ParamLimits

0x564a,	// (0x0009f913) cell_dialer_command_2_pane

0xd027,	// (0x000a72f0) bg_button_pane_cp02_ParamLimits

0xd027,	// (0x000a72f0) bg_button_pane_cp02

0x5659,	// (0x0009f922) cell_dialer_keypad_pane_g1_ParamLimits

0x5659,	// (0x0009f922) cell_dialer_keypad_pane_g1

0xd027,	// (0x000a72f0) bg_button_pane_cp03_ParamLimits

0xd027,	// (0x000a72f0) bg_button_pane_cp03

0x566e,	// (0x0009f937) cell_dialer_command_1_pane_g1_ParamLimits

0x566e,	// (0x0009f937) cell_dialer_command_1_pane_g1

0xd033,	// (0x000a72fc) bg_button_pane_cp04

0x5682,	// (0x0009f94b) cell_dialer_command_2_pane_g1

0xa9bb,	// (0x000a4c84) bg_button_pane_cp06

0xd03b,	// (0x000a7304) dialer_ne_clear_pane_g1

0xb2e4,	// (0x000a55ad) navi_pane_g2

0xb312,	// (0x000a55db) navi_pane_g3

0x0002,

0x014a,	// (0x0009a413) navi_pane_g

0xb3a1,	// (0x000a566a) navi_pane_mv_g2

0xb3c8,	// (0x000a5691) navi_pane_mv_g5

0x36b9,	// (0x0009d982) navi_pane_mv_t1

0xa7c6,	// (0x000a4a8f) main_clock2_pane

0x56c0,	// (0x0009f989) main_clock2_list_pane_ParamLimits

0x56c0,	// (0x0009f989) main_clock2_list_pane

0x56ea,	// (0x0009f9b3) main_clock2_pane_t1_ParamLimits

0x56ea,	// (0x0009f9b3) main_clock2_pane_t1

0x570e,	// (0x0009f9d7) main_clock2_pane_t2_ParamLimits

0x570e,	// (0x0009f9d7) main_clock2_pane_t2

0x0004,

0xf660,	// (0x000a9929) main_clock2_pane_t_ParamLimits

0xf660,	// (0x000a9929) main_clock2_pane_t

0x5769,	// (0x0009fa32) popup_clock_analogue_window_cp03_ParamLimits

0x5769,	// (0x0009fa32) popup_clock_analogue_window_cp03

0x5787,	// (0x0009fa50) popup_clock_digital_window_cp02_ParamLimits

0x5787,	// (0x0009fa50) popup_clock_digital_window_cp02

0x57f4,	// (0x0009fabd) main_clock2_list_single_pane_ParamLimits

0x57f4,	// (0x0009fabd) main_clock2_list_single_pane

0xa9bb,	// (0x000a4c84) list_highlight_pane_cp05

0xd075,	// (0x000a733e) main_clock2_list_single_pane_t1

0x20bc,	// (0x0009c385) popup_toolbar_window_cp04_ParamLimits

0x4da5,	// (0x0009f06e) camera2_autofocus_pane_g2_ParamLimits

0x4da5,	// (0x0009f06e) camera2_autofocus_pane_g2

0x4db1,	// (0x0009f07a) camera2_autofocus_pane_g3_ParamLimits

0x4db1,	// (0x0009f07a) camera2_autofocus_pane_g3

0x4dbd,	// (0x0009f086) camera2_autofocus_pane_g4_ParamLimits

0x4dbd,	// (0x0009f086) camera2_autofocus_pane_g4

0x4dc9,	// (0x0009f092) camera2_autofocus_pane_g5_ParamLimits

0x4dc9,	// (0x0009f092) camera2_autofocus_pane_g5

0x0004,

0xf5c7,	// (0x000a9890) camera2_autofocus_pane_g_ParamLimits

0xf5c7,	// (0x000a9890) camera2_autofocus_pane_g

0x4f58,	// (0x0009f221) camera2_autofocus_pane_cp_g2

0x4f60,	// (0x0009f229) camera2_autofocus_pane_cp_g3

0x4f68,	// (0x0009f231) camera2_autofocus_pane_cp_g4

0x4f70,	// (0x0009f239) camera2_autofocus_pane_cp_g5

0x0004,

0xf61b,	// (0x000a98e4) camera2_autofocus_pane_cp_g

0x5598,	// (0x0009f861) popup_dialer_spcha_window

0x9b14,	// (0x000a3ddd) bg_popup_sub_pane_cp07

0xd083,	// (0x000a734c) list_spcha_pane

0xd08b,	// (0x000a7354) list_single_spcha_pane_ParamLimits

0xd08b,	// (0x000a7354) list_single_spcha_pane

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp06

0xd09c,	// (0x000a7365) list_single_spcha_pane_t1

0xc256,	// (0x000a651f) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x000a651f) popup_call2_audio_out_window_g4

0x1082,	// (0x0009b34b) main_imed2_pane

0x4443,	// (0x0009e70c) popup_imed_adjust2_window

0x4456,	// (0x0009e71f) popup_imed_trans_window_ParamLimits

0x4456,	// (0x0009e71f) popup_imed_trans_window

0xca9f,	// (0x000a6d68) popup_blid_sat_info2_window_t1

0xcaad,	// (0x000a6d76) popup_blid_sat_info2_window_t2

0x000a,

0xf5a7,	// (0x000a9870) popup_blid_sat_info2_window_t

0x589e,	// (0x0009fb67) aid_size_cell_colour_35

0x58b8,	// (0x0009fb81) aid_size_cell_colour_112

0x58cf,	// (0x0009fb98) aid_size_cell_effect

0xa474,	// (0x000a473d) bg_tb_trans_pane_cp02

0xb091,	// (0x000a535a) heading_imed_pane

0x58e9,	// (0x0009fbb2) listscroll_imed_pane

0xd0aa,	// (0x000a7373) heading_imed_pane_g1

0xd0b2,	// (0x000a737b) heading_imed_pane_t1

0xd0c0,	// (0x000a7389) grid_imed_colour_35_pane_ParamLimits

0xd0c0,	// (0x000a7389) grid_imed_colour_35_pane

0x58f5,	// (0x0009fbbe) grid_imed_effect_pane

0xd0d8,	// (0x000a73a1) list_imed_aspect_pane

0x5905,	// (0x0009fbce) scroll_pane_cp027_ParamLimits

0x5905,	// (0x0009fbce) scroll_pane_cp027

0x5911,	// (0x0009fbda) cell_imed_effect_pane_ParamLimits

0x5911,	// (0x0009fbda) cell_imed_effect_pane

0xd0e0,	// (0x000a73a9) cell_imed_colour_pane_ParamLimits

0xd0e0,	// (0x000a73a9) cell_imed_colour_pane

0xd122,	// (0x000a73eb) cell_imed_colour_pane_g1_ParamLimits

0xd122,	// (0x000a73eb) cell_imed_colour_pane_g1

0xd133,	// (0x000a73fc) hgihlgiht_grid_pane_cp016_ParamLimits

0xd133,	// (0x000a73fc) hgihlgiht_grid_pane_cp016

0x5929,	// (0x0009fbf2) cell_imed_effect_pane_g1

0x5931,	// (0x0009fbfa) grid_highlight_pane_cp017

0xd144,	// (0x000a740d) list_imed_single_pane_ParamLimits

0xd144,	// (0x000a740d) list_imed_single_pane

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp07

0xd159,	// (0x000a7422) list_imed_aspect_pane_comp1_t1

0xc859,	// (0x000a6b22) bg_tb_trans_pane_cp05

0xd17b,	// (0x000a7444) popup_imed_adjust2_window_g1

0xd1a2,	// (0x000a746b) popup_imed_adjust2_window_t1

0xd1ba,	// (0x000a7483) slider_imed_adjust_pane

0xd1ce,	// (0x000a7497) slider_imed_adjust_pane_g1

0xd1de,	// (0x000a74a7) slider_imed_adjust_pane_g2

0xd1ee,	// (0x000a74b7) slider_imed_adjust_pane_g3

0xd1ff,	// (0x000a74c8) slider_imed_adjust_pane_g4

0x0003,

0x055e,	// (0x0009a827) slider_imed_adjust_pane_g

0x593a,	// (0x0009fc03) aid_size_cell_clipart2

0x5946,	// (0x0009fc0f) grid_imed_clipart_pane

0xd210,	// (0x000a74d9) scroll_pane_cp031

0x5950,	// (0x0009fc19) cell_imed_clipart_pane_ParamLimits

0x5950,	// (0x0009fc19) cell_imed_clipart_pane

0x5973,	// (0x0009fc3c) cell_imed_clipart_pane_g1

0x9b14,	// (0x000a3ddd) grid_highlight_pane_cp014

0x56cc,	// (0x0009f995) main_clock2_pane_g1_ParamLimits

0x56cc,	// (0x0009f995) main_clock2_pane_g1

0x579f,	// (0x0009fa68) aid_call2_pane_cp10

0x57b1,	// (0x0009fa7a) aid_call_pane_cp10

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g1

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g2

0x57c3,	// (0x0009fa8c) popup_clock_analogue_window_cp10_g3

0x57c3,	// (0x0009fa8c) popup_clock_analogue_window_cp10_g4

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf66b,	// (0x000a9934) popup_clock_analogue_window_cp10_g

0x57d5,	// (0x0009fa9e) popup_clock_analogue_window_cp10_t1

0x5806,	// (0x0009facf) clock_digital_number_pane_cp10_ParamLimits

0x5806,	// (0x0009facf) clock_digital_number_pane_cp10

0x581e,	// (0x0009fae7) clock_digital_number_pane_cp11_ParamLimits

0x581e,	// (0x0009fae7) clock_digital_number_pane_cp11

0x5836,	// (0x0009faff) clock_digital_number_pane_cp12_ParamLimits

0x5836,	// (0x0009faff) clock_digital_number_pane_cp12

0x584e,	// (0x0009fb17) clock_digital_number_pane_cp13_ParamLimits

0x584e,	// (0x0009fb17) clock_digital_number_pane_cp13

0x5866,	// (0x0009fb2f) clock_digital_separator_pane_cp10_ParamLimits

0x5866,	// (0x0009fb2f) clock_digital_separator_pane_cp10

0x587e,	// (0x0009fb47) popup_clock_digital_window_cp02_t1_ParamLimits

0x587e,	// (0x0009fb47) popup_clock_digital_window_cp02_t1

0xa6ed,	// (0x000a49b6) clock_digital_number_pane_cp10_g1

0xa6ed,	// (0x000a49b6) clock_digital_number_pane_cp10_g2

0x0001,

0xf676,	// (0x000a993f) clock_digital_number_pane_cp10_g

0xa6ed,	// (0x000a49b6) clock_digital_separator_pane_cp10_g1

0xa6ed,	// (0x000a49b6) clock_digital_separator_pane_g2_cp10

0xb3d0,	// (0x000a5699) navi_pane_vded_g4

0xb3d9,	// (0x000a56a2) navi_pane_vded_g5

0xb3e2,	// (0x000a56ab) navi_pane_vded_t1

0x1082,	// (0x0009b34b) main_vded_pane

0x597c,	// (0x0009fc45) main_vded_pane_g1

0x5988,	// (0x0009fc51) main_vded_pane_g2

0x5992,	// (0x0009fc5b) main_vded_pane_g3

0x0002,

0xf67b,	// (0x000a9944) main_vded_pane_g

0x599c,	// (0x0009fc65) main_vded_pane_t1

0x59aa,	// (0x0009fc73) main_vded_pane_t2

0x0001,

0xf682,	// (0x000a994b) main_vded_pane_t

0x59b8,	// (0x0009fc81) vded_slider_pane

0x59c2,	// (0x0009fc8b) vded_video_pane

0xd218,	// (0x000a74e1) vded_video_pane_g1

0x59cc,	// (0x0009fc95) vded_video_pane_g2

0xcc6d,	// (0x000a6f36) vded_video_pane_g3

0x0002,

0xf687,	// (0x000a9950) vded_video_pane_g

0xd222,	// (0x000a74eb) vded_slider_pane_g1

0xc9b4,	// (0x000a6c7d) vded_slider_pane_g2

0xd22b,	// (0x000a74f4) vded_slider_pane_g3

0xd234,	// (0x000a74fd) vded_slider_pane_g4

0xd23d,	// (0x000a7506) vded_slider_pane_g5

0x0004,

0x057f,	// (0x0009a848) vded_slider_pane_g

0x549a,	// (0x0009f763) mup3_rocker_pane_ParamLimits

0x549a,	// (0x0009f763) mup3_rocker_pane

0x59d5,	// (0x0009fc9e) mup3_control_keys_pane_g1

0x59dd,	// (0x0009fca6) mup3_control_keys_pane_g2

0x59e5,	// (0x0009fcae) mup3_control_keys_pane_g3

0x59ed,	// (0x0009fcb6) mup3_control_keys_pane_g4

0x0003,

0xf68e,	// (0x000a9957) mup3_control_keys_pane_g

0x1036,	// (0x0009b2ff) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1036,	// (0x0009b2ff) popup_toolbar2_fixed_window_cp01

0x54b4,	// (0x0009f77d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54b4,	// (0x0009f77d) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x000a5e5e) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x000a5e5e) popup_call2_audio_second_window_t4

0xc0c3,	// (0x000a638c) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x000a638c) popup_call2_audio_first_window_t6

0xc359,	// (0x000a6622) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x000a6622) popup_call2_audio_out_window_t6

0x1082,	// (0x0009b34b) main_vitu_pane

0x59fd,	// (0x0009fcc6) aid_size_cell_itu_ParamLimits

0x59fd,	// (0x0009fcc6) aid_size_cell_itu

0xeeee,	// (0x000a91b7) bg_popup_window_pane_cp08_ParamLimits

0xeeee,	// (0x000a91b7) bg_popup_window_pane_cp08

0x5a0b,	// (0x0009fcd4) field_vitu_entry_pane_ParamLimits

0x5a0b,	// (0x0009fcd4) field_vitu_entry_pane

0x5a1a,	// (0x0009fce3) grid_vitu_function_pane_ParamLimits

0x5a1a,	// (0x0009fce3) grid_vitu_function_pane

0x5a2a,	// (0x0009fcf3) grid_vitu_itu_pane_ParamLimits

0x5a2a,	// (0x0009fcf3) grid_vitu_itu_pane

0x5a3a,	// (0x0009fd03) cell_vitu_itu_pane_ParamLimits

0x5a3a,	// (0x0009fd03) cell_vitu_itu_pane

0x5a4f,	// (0x0009fd18) cell_vitu_function_pane_ParamLimits

0x5a4f,	// (0x0009fd18) cell_vitu_function_pane

0xa474,	// (0x000a473d) bg_popup_sub_pane_cp08_ParamLimits

0xa474,	// (0x000a473d) bg_popup_sub_pane_cp08

0x5a61,	// (0x0009fd2a) field_vitu_entry_pane_t1_ParamLimits

0x5a61,	// (0x0009fd2a) field_vitu_entry_pane_t1

0xd25e,	// (0x000a7527) field_vitu_entry_pane_t2_ParamLimits

0xd25e,	// (0x000a7527) field_vitu_entry_pane_t2

0x0001,

0xf697,	// (0x000a9960) field_vitu_entry_pane_t_ParamLimits

0xf697,	// (0x000a9960) field_vitu_entry_pane_t

0xd27b,	// (0x000a7544) bg_button_pane_cp05_ParamLimits

0xd27b,	// (0x000a7544) bg_button_pane_cp05

0x5a7e,	// (0x0009fd47) cell_vitu_itu_pane_g1

0x5a96,	// (0x0009fd5f) cell_vitu_itu_pane_t1_ParamLimits

0x5a96,	// (0x0009fd5f) cell_vitu_itu_pane_t1

0x5aa8,	// (0x0009fd71) cell_vitu_itu_pane_t2_ParamLimits

0x5aa8,	// (0x0009fd71) cell_vitu_itu_pane_t2

0x0002,

0xf69c,	// (0x000a9965) cell_vitu_itu_pane_t_ParamLimits

0xf69c,	// (0x000a9965) cell_vitu_itu_pane_t

0xd289,	// (0x000a7552) bg_button_pane_cp07

0x5add,	// (0x0009fda6) cell_vitu_function_pane_g1

0x1311,	// (0x0009b5da) main_calc_pane_g1

0x0df3,	// (0x0009b0bc) aid_visual_content_pane

0x1082,	// (0x0009b34b) main_vradio_pane

0x5ae6,	// (0x0009fdaf) main_vradio_pane_g1_ParamLimits

0x5ae6,	// (0x0009fdaf) main_vradio_pane_g1

0xd293,	// (0x000a755c) main_vradio_pane_g2_ParamLimits

0xd293,	// (0x000a755c) main_vradio_pane_g2

0x0001,

0xf6a3,	// (0x000a996c) main_vradio_pane_g_ParamLimits

0xf6a3,	// (0x000a996c) main_vradio_pane_g

0x5af6,	// (0x0009fdbf) main_vradio_pane_t1_ParamLimits

0x5af6,	// (0x0009fdbf) main_vradio_pane_t1

0x5b08,	// (0x0009fdd1) main_vradio_pane_t2_ParamLimits

0x5b08,	// (0x0009fdd1) main_vradio_pane_t2

0xd2a0,	// (0x000a7569) main_vradio_pane_t3_ParamLimits

0xd2a0,	// (0x000a7569) main_vradio_pane_t3

0x0002,

0xf6a8,	// (0x000a9971) main_vradio_pane_t_ParamLimits

0xf6a8,	// (0x000a9971) main_vradio_pane_t

0x5b1a,	// (0x0009fde3) vradio_rocker_control_pane_ParamLimits

0x5b1a,	// (0x0009fde3) vradio_rocker_control_pane

0x5b26,	// (0x0009fdef) vradio_station_info_pane_ParamLimits

0x5b26,	// (0x0009fdef) vradio_station_info_pane

0xd2b4,	// (0x000a757d) vradio_frequency_info_pane_ParamLimits

0xd2b4,	// (0x000a757d) vradio_frequency_info_pane

0xcc6d,	// (0x000a6f36) vradio_station_info_pane_g1

0xd2c3,	// (0x000a758c) vradio_station_info_pane_t1_ParamLimits

0xd2c3,	// (0x000a758c) vradio_station_info_pane_t1

0xd2e5,	// (0x000a75ae) vradio_station_info_pane_t2_ParamLimits

0xd2e5,	// (0x000a75ae) vradio_station_info_pane_t2

0x0001,

0x05b0,	// (0x0009a879) vradio_station_info_pane_t_ParamLimits

0x05b0,	// (0x0009a879) vradio_station_info_pane_t

0xd2f7,	// (0x000a75c0) vradio_tuning_pane

0xd2ff,	// (0x000a75c8) vradio_rocker_control_pane_g1

0xd307,	// (0x000a75d0) vradio_rocker_control_pane_g2

0xd30f,	// (0x000a75d8) vradio_rocker_control_pane_g3

0xd317,	// (0x000a75e0) vradio_rocker_control_pane_g4

0xd31f,	// (0x000a75e8) vradio_rocker_control_pane_g5

0x0004,

0x05b5,	// (0x0009a87e) vradio_rocker_control_pane_g

0x5b35,	// (0x0009fdfe) vradio_frequency_info_pane_g1

0xd327,	// (0x000a75f0) vradio_frequency_info_pane_t1_ParamLimits

0xd327,	// (0x000a75f0) vradio_frequency_info_pane_t1

0x5b3f,	// (0x0009fe08) vradio_tuning_pane_g1

0x5b48,	// (0x0009fe11) vradio_tuning_pane_t1

0x0e3c,	// (0x0009b105) area_side_right_pane_ParamLimits

0x0e3c,	// (0x0009b105) area_side_right_pane

0xc814,	// (0x000a6add) status_small_pane_g1

0xc81c,	// (0x000a6ae5) status_small_pane_g2

0xc825,	// (0x000a6aee) status_small_pane_g3

0xc82e,	// (0x000a6af7) status_small_pane_g4

0x0003,

0x0370,	// (0x0009a639) status_small_pane_g

0xc837,	// (0x000a6b00) status_small_pane_t1

0x1082,	// (0x0009b34b) main_video3_pane

0xd33b,	// (0x000a7604) cams_zoom_vslider_pane

0xd343,	// (0x000a760c) image3_wide_pane_ParamLimits

0xd343,	// (0x000a760c) image3_wide_pane

0xd35d,	// (0x000a7626) image3_wide_small_pane

0xd369,	// (0x000a7632) main_video3_pane_g1_ParamLimits

0xd369,	// (0x000a7632) main_video3_pane_g1

0xd385,	// (0x000a764e) main_video3_pane_g2_ParamLimits

0xd385,	// (0x000a764e) main_video3_pane_g2

0x0001,

0x05c0,	// (0x0009a889) main_video3_pane_g_ParamLimits

0x05c0,	// (0x0009a889) main_video3_pane_g

0xd3a1,	// (0x000a766a) main_video3_pane_t1_ParamLimits

0xd3a1,	// (0x000a766a) main_video3_pane_t1

0xd3cc,	// (0x000a7695) main_video3_pane_t2_ParamLimits

0xd3cc,	// (0x000a7695) main_video3_pane_t2

0xd3f7,	// (0x000a76c0) main_video3_pane_t3_ParamLimits

0xd3f7,	// (0x000a76c0) main_video3_pane_t3

0x0002,

0x05c5,	// (0x0009a88e) main_video3_pane_t_ParamLimits

0x05c5,	// (0x0009a88e) main_video3_pane_t

0xd424,	// (0x000a76ed) cams_zoom_vslider_pane_g1

0xd42d,	// (0x000a76f6) cams_zoom_vslider_pane_g2

0x0001,

0x05cc,	// (0x0009a895) cams_zoom_vslider_pane_g

0xd435,	// (0x000a76fe) small_slider_vertical_pane

0xcc6d,	// (0x000a6f36) small_slider_vertical_pane_g1

0xcc6d,	// (0x000a6f36) small_slider_vertical_pane_g2

0xd43d,	// (0x000a7706) small_slider_vertical_pane_g3

0x0002,

0x05d1,	// (0x0009a89a) small_slider_vertical_pane_g

0x1082,	// (0x0009b34b) main_hwr_training_pane

0xd446,	// (0x000a770f) hwr_training_instruct_pane_ParamLimits

0xd446,	// (0x000a770f) hwr_training_instruct_pane

0x5b57,	// (0x0009fe20) hwr_training_navi_pane_ParamLimits

0x5b57,	// (0x0009fe20) hwr_training_navi_pane

0x5b71,	// (0x0009fe3a) hwr_training_write_pane_ParamLimits

0x5b71,	// (0x0009fe3a) hwr_training_write_pane

0x9b14,	// (0x000a3ddd) bg_frame_shadow_pane

0xd47d,	// (0x000a7746) hwr_training_write_pane_g1

0xd485,	// (0x000a774e) hwr_training_write_pane_g2

0xd48d,	// (0x000a7756) hwr_training_write_pane_g3

0xd495,	// (0x000a775e) hwr_training_write_pane_g4

0xd49d,	// (0x000a7766) hwr_training_write_pane_g5

0xd4a5,	// (0x000a776e) hwr_training_write_pane_g6

0xd4ad,	// (0x000a7776) hwr_training_write_pane_g7

0x0006,

0x05d8,	// (0x0009a8a1) hwr_training_write_pane_g

0x5ba9,	// (0x0009fe72) hwr_training_navi_pane_g1_ParamLimits

0x5ba9,	// (0x0009fe72) hwr_training_navi_pane_g1

0x5bbb,	// (0x0009fe84) hwr_training_navi_pane_g2_ParamLimits

0x5bbb,	// (0x0009fe84) hwr_training_navi_pane_g2

0x5bcd,	// (0x0009fe96) hwr_training_navi_pane_g3_ParamLimits

0x5bcd,	// (0x0009fe96) hwr_training_navi_pane_g3

0x5bdd,	// (0x0009fea6) hwr_training_navi_pane_g4_ParamLimits

0x5bdd,	// (0x0009fea6) hwr_training_navi_pane_g4

0x0004,

0xf6af,	// (0x000a9978) hwr_training_navi_pane_g_ParamLimits

0xf6af,	// (0x000a9978) hwr_training_navi_pane_g

0x5bf7,	// (0x0009fec0) hwr_training_navi_pane_t1

0x5c05,	// (0x0009fece) list_single_hwr_training_instruct_pane_ParamLimits

0x5c05,	// (0x0009fece) list_single_hwr_training_instruct_pane

0xd4b5,	// (0x000a777e) list_single_hwr_training_instruct_pane_t1

0xcbad,	// (0x000a6e76) bg_frame_shadow_pane_g1

0xd4c4,	// (0x000a778d) bg_frame_shadow_pane_g2

0xd4cc,	// (0x000a7795) bg_frame_shadow_pane_g3

0xd4d4,	// (0x000a779d) bg_frame_shadow_pane_g4

0xd4dc,	// (0x000a77a5) bg_frame_shadow_pane_g5

0xd4e4,	// (0x000a77ad) bg_frame_shadow_pane_g6

0xd4ec,	// (0x000a77b5) bg_frame_shadow_pane_g7

0xa891,	// (0x000a4b5a) bg_frame_shadow_pane_g8

0x0007,

0xf6ba,	// (0x000a9983) bg_frame_shadow_pane_g

0x1082,	// (0x0009b34b) main_video_tele_dialer_pane

0x5c2e,	// (0x0009fef7) aid_size_cell_video_keypad_ParamLimits

0x5c2e,	// (0x0009fef7) aid_size_cell_video_keypad

0x5c3e,	// (0x0009ff07) grid_video_dialer_keypad_pane_ParamLimits

0x5c3e,	// (0x0009ff07) grid_video_dialer_keypad_pane

0x5c72,	// (0x0009ff3b) video_down_pane_cp_ParamLimits

0x5c72,	// (0x0009ff3b) video_down_pane_cp

0x5c9c,	// (0x0009ff65) cell_video_dialer_keypad_pane_ParamLimits

0x5c9c,	// (0x0009ff65) cell_video_dialer_keypad_pane

0xd4f4,	// (0x000a77bd) bg_button_pane_cp08_ParamLimits

0xd4f4,	// (0x000a77bd) bg_button_pane_cp08

0x5cb1,	// (0x0009ff7a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cb1,	// (0x0009ff7a) cell_video_dialer_keypad_pane_g1

0x548e,	// (0x0009f757) mup3_rocker2_pane_ParamLimits

0x548e,	// (0x0009f757) mup3_rocker2_pane

0xcc6d,	// (0x000a6f36) mup3_rocker2_pane_g1

0x43b7,	// (0x0009e680) main_dialer2_pane

0x1082,	// (0x0009b34b) main_mp4_pane

0x5cf3,	// (0x0009ffbc) main_mp4_pane_g1_ParamLimits

0x5cf3,	// (0x0009ffbc) main_mp4_pane_g1

0x5d01,	// (0x0009ffca) main_mp4_pane_g2_ParamLimits

0x5d01,	// (0x0009ffca) main_mp4_pane_g2

0x5d0f,	// (0x0009ffd8) main_mp4_pane_g3_ParamLimits

0x5d0f,	// (0x0009ffd8) main_mp4_pane_g3

0x5d54,	// (0x000a001d) main_mp4_pane_g4_ParamLimits

0x5d54,	// (0x000a001d) main_mp4_pane_g4

0x5d7c,	// (0x000a0045) main_mp4_pane_g5_ParamLimits

0x5d7c,	// (0x000a0045) main_mp4_pane_g5

0x0005,

0xf6da,	// (0x000a99a3) main_mp4_pane_g_ParamLimits

0xf6da,	// (0x000a99a3) main_mp4_pane_g

0x5dcc,	// (0x000a0095) main_mp4_pane_t1_ParamLimits

0x5dcc,	// (0x000a0095) main_mp4_pane_t1

0x5e28,	// (0x000a00f1) main_mp4_pane_t2_ParamLimits

0x5e28,	// (0x000a00f1) main_mp4_pane_t2

0xd500,	// (0x000a77c9) main_mp4_pane_t3_ParamLimits

0xd500,	// (0x000a77c9) main_mp4_pane_t3

0x5e7a,	// (0x000a0143) main_mp4_pane_t4_ParamLimits

0x5e7a,	// (0x000a0143) main_mp4_pane_t4

0x0003,

0xf6e7,	// (0x000a99b0) main_mp4_pane_t_ParamLimits

0xf6e7,	// (0x000a99b0) main_mp4_pane_t

0x5ebe,	// (0x000a0187) mp4_progress_pane_ParamLimits

0x5ebe,	// (0x000a0187) mp4_progress_pane

0x5f08,	// (0x000a01d1) mp4_rocker_pane_ParamLimits

0x5f08,	// (0x000a01d1) mp4_rocker_pane

0xd528,	// (0x000a77f1) mp4_progress_pane_t1

0xd541,	// (0x000a780a) mp4_progress_pane_t2

0x0001,

0x0628,	// (0x0009a8f1) mp4_progress_pane_t

0xd55a,	// (0x000a7823) mup_progress_pane_cp04

0xdc4c,	// (0x000a7f15) mp4_rocker_pane_g1

0x5f28,	// (0x000a01f1) aid_cell_size_keypad2_ParamLimits

0x5f28,	// (0x000a01f1) aid_cell_size_keypad2

0x5f38,	// (0x000a0201) dialer2_ne_pane_ParamLimits

0x5f38,	// (0x000a0201) dialer2_ne_pane

0x5f46,	// (0x000a020f) grid_dialer2_keypad_pane_ParamLimits

0x5f46,	// (0x000a020f) grid_dialer2_keypad_pane

0xdc56,	// (0x000a7f1f) bg_popup_call_pane_cp07_ParamLimits

0xdc56,	// (0x000a7f1f) bg_popup_call_pane_cp07

0x5f56,	// (0x000a021f) dialer2_ne_pane_t1_ParamLimits

0x5f56,	// (0x000a021f) dialer2_ne_pane_t1

0x5f7b,	// (0x000a0244) cell_dialer2_keypad_pane_ParamLimits

0x5f7b,	// (0x000a0244) cell_dialer2_keypad_pane

0xd578,	// (0x000a7841) bg_button_pane_pane_cp04_ParamLimits

0xd578,	// (0x000a7841) bg_button_pane_pane_cp04

0x5f90,	// (0x000a0259) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f90,	// (0x000a0259) cell_dialer2_keypad_pane_g1

0x1f7e,	// (0x0009c247) aid_placing_vt_set_content_ParamLimits

0x1f7e,	// (0x0009c247) aid_placing_vt_set_content

0x1faa,	// (0x0009c273) aid_placing_vt_set_title_ParamLimits

0x1faa,	// (0x0009c273) aid_placing_vt_set_title

0x1082,	// (0x0009b34b) main_image3_pane

0x602a,	// (0x000a02f3) area_side_right_pane_cp01_ParamLimits

0x602a,	// (0x000a02f3) area_side_right_pane_cp01

0x6057,	// (0x000a0320) main_image3_pane_g1_ParamLimits

0x6057,	// (0x000a0320) main_image3_pane_g1

0x6065,	// (0x000a032e) main_image3_pane_g2_ParamLimits

0x6065,	// (0x000a032e) main_image3_pane_g2

0x607e,	// (0x000a0347) main_image3_pane_g3_ParamLimits

0x607e,	// (0x000a0347) main_image3_pane_g3

0x6097,	// (0x000a0360) main_image3_pane_g4_ParamLimits

0x6097,	// (0x000a0360) main_image3_pane_g4

0x0003,

0xf6fa,	// (0x000a99c3) main_image3_pane_g_ParamLimits

0xf6fa,	// (0x000a99c3) main_image3_pane_g

0x60b0,	// (0x000a0379) main_image3_pane_t1_ParamLimits

0x60b0,	// (0x000a0379) main_image3_pane_t1

0x60d5,	// (0x000a039e) main_image3_pane_t2_ParamLimits

0x60d5,	// (0x000a039e) main_image3_pane_t2

0x60f4,	// (0x000a03bd) main_image3_pane_t3_ParamLimits

0x60f4,	// (0x000a03bd) main_image3_pane_t3

0x0003,

0xf703,	// (0x000a99cc) main_image3_pane_t_ParamLimits

0xf703,	// (0x000a99cc) main_image3_pane_t

0xeeee,	// (0x000a91b7) grid_sctrl_middle_pane_cp01_ParamLimits

0xeeee,	// (0x000a91b7) grid_sctrl_middle_pane_cp01

0x6155,	// (0x000a041e) cell_sctrl_middle_pane_cp01_ParamLimits

0x6155,	// (0x000a041e) cell_sctrl_middle_pane_cp01

0x6166,	// (0x000a042f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6166,	// (0x000a042f) cell_sctrl_middle_pane_cp01_g1

0x1082,	// (0x0009b34b) main_call4_pane

0x6173,	// (0x000a043c) aid_size_button_call4_ParamLimits

0x6173,	// (0x000a043c) aid_size_button_call4

0x61a3,	// (0x000a046c) call4_windows_pane_ParamLimits

0x61a3,	// (0x000a046c) call4_windows_pane

0x61bd,	// (0x000a0486) grid_call4_button_pane_ParamLimits

0x61bd,	// (0x000a0486) grid_call4_button_pane

0xd584,	// (0x000a784d) call4_windows_conf_pane

0xd59b,	// (0x000a7864) popup_call4_audio_first_window_ParamLimits

0xd59b,	// (0x000a7864) popup_call4_audio_first_window

0xd5e7,	// (0x000a78b0) popup_call4_audio_second_window_ParamLimits

0xd5e7,	// (0x000a78b0) popup_call4_audio_second_window

0xd5fb,	// (0x000a78c4) popup_call4_audio_wait_window_ParamLimits

0xd5fb,	// (0x000a78c4) popup_call4_audio_wait_window

0x61e1,	// (0x000a04aa) cell_call4_button_pane_ParamLimits

0x61e1,	// (0x000a04aa) cell_call4_button_pane

0x6206,	// (0x000a04cf) bg_button_pane_cp09_ParamLimits

0x6206,	// (0x000a04cf) bg_button_pane_cp09

0x6212,	// (0x000a04db) cell_call4_button_pane_g1_ParamLimits

0x6212,	// (0x000a04db) cell_call4_button_pane_g1

0x621f,	// (0x000a04e8) cell_call4_button_pane_t1_ParamLimits

0x621f,	// (0x000a04e8) cell_call4_button_pane_t1

0xd643,	// (0x000a790c) popup_call4_audio_conf_window_ParamLimits

0xd643,	// (0x000a790c) popup_call4_audio_conf_window

0x54c1,	// (0x0009f78a) mup3_progress_pane_t1_ParamLimits

0x54e0,	// (0x0009f7a9) mup3_progress_pane_t2_ParamLimits

0xcf36,	// (0x000a71ff) mup3_progress_pane_t3_ParamLimits

0xf644,	// (0x000a990d) mup3_progress_pane_t_ParamLimits

0xcf53,	// (0x000a721c) mup_progress_pane_cp03_ParamLimits

0x59f5,	// (0x0009fcbe) mup3_control_keys_pane_g4_copy1

0x5eec,	// (0x000a01b5) mp4_rocker2_pane_ParamLimits

0x5eec,	// (0x000a01b5) mp4_rocker2_pane

0xd657,	// (0x000a7920) mp4_rocker2_pane_g1

0xd65f,	// (0x000a7928) mp4_rocker2_pane_g2

0x6231,	// (0x000a04fa) mp4_rocker2_pane_g3

0x6239,	// (0x000a0502) mp4_rocker2_pane_g4

0x6241,	// (0x000a050a) mp4_rocker2_pane_g5

0x0004,

0xf70c,	// (0x000a99d5) mp4_rocker2_pane_g

0x1082,	// (0x0009b34b) main_camera4_pane

0x1082,	// (0x0009b34b) main_video4_pane

0x5c4e,	// (0x0009ff17) main_video_tele_dialer_pane_t1_ParamLimits

0x5c4e,	// (0x0009ff17) main_video_tele_dialer_pane_t1

0x5c60,	// (0x0009ff29) main_video_tele_dialer_pane_t2_ParamLimits

0x5c60,	// (0x0009ff29) main_video_tele_dialer_pane_t2

0x0001,

0xf6cb,	// (0x000a9994) main_video_tele_dialer_pane_t_ParamLimits

0xf6cb,	// (0x000a9994) main_video_tele_dialer_pane_t

0x6261,	// (0x000a052a) cam4_autofocus_pane_ParamLimits

0x6261,	// (0x000a052a) cam4_autofocus_pane

0x627b,	// (0x000a0544) cam4_image_uncrop_pane_ParamLimits

0x627b,	// (0x000a0544) cam4_image_uncrop_pane

0x6292,	// (0x000a055b) cam4_indicators_pane_ParamLimits

0x6292,	// (0x000a055b) cam4_indicators_pane

0x62ae,	// (0x000a0577) main_camera4_pane_g1_ParamLimits

0x62ae,	// (0x000a0577) main_camera4_pane_g1

0x62ba,	// (0x000a0583) main_camera4_pane_g2_ParamLimits

0x62ba,	// (0x000a0583) main_camera4_pane_g2

0x62ba,	// (0x000a0583) main_camera4_pane_g3_ParamLimits

0x62ba,	// (0x000a0583) main_camera4_pane_g3

0x62c6,	// (0x000a058f) main_camera4_pane_g4_ParamLimits

0x62c6,	// (0x000a058f) main_camera4_pane_g4

0x62d2,	// (0x000a059b) main_camera4_pane_g5_ParamLimits

0x62d2,	// (0x000a059b) main_camera4_pane_g5

0x0005,

0xf717,	// (0x000a99e0) main_camera4_pane_g_ParamLimits

0xf717,	// (0x000a99e0) main_camera4_pane_g

0x62ec,	// (0x000a05b5) main_camera4_pane_t1_ParamLimits

0x62ec,	// (0x000a05b5) main_camera4_pane_t1

0x6334,	// (0x000a05fd) bg_tb_trans_pane_cp06

0x634a,	// (0x000a0613) cam4_indicators_pane_g1

0x635b,	// (0x000a0624) cam4_indicators_pane_g2

0x0002,

0xf732,	// (0x000a99fb) cam4_indicators_pane_g

0x6373,	// (0x000a063c) cam4_indicators_pane_t1

0x639d,	// (0x000a0666) main_video4_pane_g1_ParamLimits

0x639d,	// (0x000a0666) main_video4_pane_g1

0x63a9,	// (0x000a0672) main_video4_pane_g2_ParamLimits

0x63a9,	// (0x000a0672) main_video4_pane_g2

0x63b5,	// (0x000a067e) main_video4_pane_g3_ParamLimits

0x63b5,	// (0x000a067e) main_video4_pane_g3

0x63c1,	// (0x000a068a) main_video4_pane_g4_ParamLimits

0x63c1,	// (0x000a068a) main_video4_pane_g4

0x0004,

0xf739,	// (0x000a9a02) main_video4_pane_g_ParamLimits

0xf739,	// (0x000a9a02) main_video4_pane_g

0x63e1,	// (0x000a06aa) vid4_indicators_pane_ParamLimits

0x63e1,	// (0x000a06aa) vid4_indicators_pane

0x6400,	// (0x000a06c9) video4_image_uncrop_cif_pane_ParamLimits

0x6400,	// (0x000a06c9) video4_image_uncrop_cif_pane

0x640f,	// (0x000a06d8) video4_image_uncrop_nhd_pane_ParamLimits

0x640f,	// (0x000a06d8) video4_image_uncrop_nhd_pane

0x627b,	// (0x000a0544) video4_image_uncrop_vga_pane_ParamLimits

0x627b,	// (0x000a0544) video4_image_uncrop_vga_pane

0x43a9,	// (0x0009e672) bg_tb_trans_pane_cp07

0x6424,	// (0x000a06ed) vid4_indicators_pane_g1

0x6438,	// (0x000a0701) vid4_indicators_pane_g2

0x644c,	// (0x000a0715) vid4_indicators_pane_g3

0x0004,

0xf744,	// (0x000a9a0d) vid4_indicators_pane_g

0x6479,	// (0x000a0742) vid4_indicators_pane_t1

0x6490,	// (0x000a0759) cam4_autofocus_pane_g1

0x6498,	// (0x000a0761) cam4_autofocus_pane_g2

0x64a0,	// (0x000a0769) cam4_autofocus_pane_g3

0x0002,

0xf74f,	// (0x000a9a18) cam4_autofocus_pane_g

0x64a8,	// (0x000a0771) cam4_autofocus_pane_g3_copy1

0x5c80,	// (0x0009ff49) video_down_pane_cp_t1

0x5c8e,	// (0x0009ff57) video_down_pane_cp_t2

0x0001,

0xf6d0,	// (0x000a9999) video_down_pane_cp_t

0x1068,	// (0x0009b331) popup_vitu2_window_ParamLimits

0x1068,	// (0x0009b331) popup_vitu2_window

0x64b0,	// (0x000a0779) aid_size_cell2_itu2_ParamLimits

0x64b0,	// (0x000a0779) aid_size_cell2_itu2

0x64d2,	// (0x000a079b) aid_size_cell_itu2_ParamLimits

0x64d2,	// (0x000a079b) aid_size_cell_itu2

0x6516,	// (0x000a07df) bg_popup_window_pane_cp09_ParamLimits

0x6516,	// (0x000a07df) bg_popup_window_pane_cp09

0x6524,	// (0x000a07ed) field_vitu2_entry_pane_ParamLimits

0x6524,	// (0x000a07ed) field_vitu2_entry_pane

0x6544,	// (0x000a080d) grid_vitu2_function_pane_ParamLimits

0x6544,	// (0x000a080d) grid_vitu2_function_pane

0x6588,	// (0x000a0851) grid_vitu2_itu_pane_ParamLimits

0x6588,	// (0x000a0851) grid_vitu2_itu_pane

0x6602,	// (0x000a08cb) cell_vitu2_itu_pane_ParamLimits

0x6602,	// (0x000a08cb) cell_vitu2_itu_pane

0x661b,	// (0x000a08e4) cell_vitu2_function_pane_ParamLimits

0x661b,	// (0x000a08e4) cell_vitu2_function_pane

0xd667,	// (0x000a7930) bg_popup_call_pane_cp08_ParamLimits

0xd667,	// (0x000a7930) bg_popup_call_pane_cp08

0xd67e,	// (0x000a7947) field_vitu2_entry_pane_g1

0xd68a,	// (0x000a7953) field_vitu2_entry_pane_g2

0x0002,

0x0693,	// (0x0009a95c) field_vitu2_entry_pane_g

0x665c,	// (0x000a0925) field_vitu2_entry_pane_t1_ParamLimits

0x665c,	// (0x000a0925) field_vitu2_entry_pane_t1

0x9f31,	// (0x000a41fa) field_vitu2_entry_pane_t2_ParamLimits

0x9f31,	// (0x000a41fa) field_vitu2_entry_pane_t2

0x0001,

0xf756,	// (0x000a9a1f) field_vitu2_entry_pane_t_ParamLimits

0xf756,	// (0x000a9a1f) field_vitu2_entry_pane_t

0x668c,	// (0x000a0955) bg_button_pane_cp010_ParamLimits

0x668c,	// (0x000a0955) bg_button_pane_cp010

0x669a,	// (0x000a0963) cell_vitu2_itu_pane_g1

0x66ba,	// (0x000a0983) cell_vitu2_itu_pane_t1_ParamLimits

0x66ba,	// (0x000a0983) cell_vitu2_itu_pane_t1

0x0cd7,	// (0x0009afa0) cell_vitu2_itu_pane_t2_ParamLimits

0x0cd7,	// (0x0009afa0) cell_vitu2_itu_pane_t2

0x0002,

0xf760,	// (0x000a9a29) cell_vitu2_itu_pane_t_ParamLimits

0xf760,	// (0x000a9a29) cell_vitu2_itu_pane_t

0x43a9,	// (0x0009e672) bg_button_pane_cp011

0x6706,	// (0x000a09cf) cell_vitu2_function_pane_g1

0x1082,	// (0x0009b34b) main_myfav_hc_pane

0x6136,	// (0x000a03ff) popup_image3_note_pane_ParamLimits

0x6136,	// (0x000a03ff) popup_image3_note_pane

0x6144,	// (0x000a040d) popup_image3_tool_bar_pane_ParamLimits

0x6144,	// (0x000a040d) popup_image3_tool_bar_pane

0x0d4d,	// (0x0009b016) cell_vitu2_itu_pane_t3_ParamLimits

0x0d4d,	// (0x0009b016) cell_vitu2_itu_pane_t3

0x9b14,	// (0x000a3ddd) bg_popup_trans_pane

0xd6ac,	// (0x000a7975) grid_image3_tool_bar_pane

0xd6b6,	// (0x000a797f) bg_popup_trans_pane_g1

0xac14,	// (0x000a4edd) bg_popup_trans_pane_g2

0xd6be,	// (0x000a7987) bg_popup_trans_pane_g3

0xd6c6,	// (0x000a798f) bg_popup_trans_pane_g4

0xd6ce,	// (0x000a7997) bg_popup_trans_pane_g5

0xd6d6,	// (0x000a799f) bg_popup_trans_pane_g6

0xd6de,	// (0x000a79a7) bg_popup_trans_pane_g7

0xd6e6,	// (0x000a79af) bg_popup_trans_pane_g8

0xabf4,	// (0x000a4ebd) bg_popup_trans_pane_g9

0x0008,

0xf767,	// (0x000a9a30) bg_popup_trans_pane_g

0xd6ee,	// (0x000a79b7) cell_image3_tool_bar_pane_ParamLimits

0xd6ee,	// (0x000a79b7) cell_image3_tool_bar_pane

0xcc6d,	// (0x000a6f36) cell_image3_tool_bar_pane_g1

0x9b14,	// (0x000a3ddd) bg_popup_trans_pane_cp1

0xd702,	// (0x000a79cb) popup_image3_note_pane_t1

0xd710,	// (0x000a79d9) popup_image3_note_pane_t2

0xd71e,	// (0x000a79e7) popup_image3_note_pane_t3

0x0002,

0xf77a,	// (0x000a9a43) popup_image3_note_pane_t

0xd72c,	// (0x000a79f5) popup_image3_note_pane_t3_copy1

0x671a,	// (0x000a09e3) bg_myfav_hc_instruction_pane_ParamLimits

0x671a,	// (0x000a09e3) bg_myfav_hc_instruction_pane

0x6732,	// (0x000a09fb) cell_myfav_contact_pane_ParamLimits

0x6732,	// (0x000a09fb) cell_myfav_contact_pane

0x674c,	// (0x000a0a15) cell_myfav_contact_pane_cp1_ParamLimits

0x674c,	// (0x000a0a15) cell_myfav_contact_pane_cp1

0x6764,	// (0x000a0a2d) cell_myfav_contact_pane_cp2_ParamLimits

0x6764,	// (0x000a0a2d) cell_myfav_contact_pane_cp2

0x677c,	// (0x000a0a45) cell_myfav_contact_pane_cp3_ParamLimits

0x677c,	// (0x000a0a45) cell_myfav_contact_pane_cp3

0x6793,	// (0x000a0a5c) cell_myfav_contact_pane_cp4_ParamLimits

0x6793,	// (0x000a0a5c) cell_myfav_contact_pane_cp4

0x67a9,	// (0x000a0a72) cell_myfav_contact_pane_cp5_ParamLimits

0x67a9,	// (0x000a0a72) cell_myfav_contact_pane_cp5

0x67bd,	// (0x000a0a86) cell_myfav_contact_pane_cp6_ParamLimits

0x67bd,	// (0x000a0a86) cell_myfav_contact_pane_cp6

0x67d1,	// (0x000a0a9a) cell_myfav_contact_pane_cp7_ParamLimits

0x67d1,	// (0x000a0a9a) cell_myfav_contact_pane_cp7

0xd73a,	// (0x000a7a03) listscroll_gen_pane_cp05

0x67e9,	// (0x000a0ab2) main_myfav_hc_pane_g1_ParamLimits

0x67e9,	// (0x000a0ab2) main_myfav_hc_pane_g1

0x67ff,	// (0x000a0ac8) main_myfav_hc_pane_g2_ParamLimits

0x67ff,	// (0x000a0ac8) main_myfav_hc_pane_g2

0x0002,

0xf781,	// (0x000a9a4a) main_myfav_hc_pane_g_ParamLimits

0xf781,	// (0x000a9a4a) main_myfav_hc_pane_g

0x682f,	// (0x000a0af8) main_myfav_hc_pane_t1_ParamLimits

0x682f,	// (0x000a0af8) main_myfav_hc_pane_t1

0xd743,	// (0x000a7a0c) main_myfav_hc_pane_t2_ParamLimits

0xd743,	// (0x000a7a0c) main_myfav_hc_pane_t2

0xd755,	// (0x000a7a1e) main_myfav_hc_pane_t3_ParamLimits

0xd755,	// (0x000a7a1e) main_myfav_hc_pane_t3

0x6846,	// (0x000a0b0f) main_myfav_hc_pane_t4_ParamLimits

0x6846,	// (0x000a0b0f) main_myfav_hc_pane_t4

0x0004,

0xf788,	// (0x000a9a51) main_myfav_hc_pane_t_ParamLimits

0xf788,	// (0x000a9a51) main_myfav_hc_pane_t

0xcc6d,	// (0x000a6f36) bg_myfav_hc_instruction_pane_g1

0xd767,	// (0x000a7a30) cell_myfav_contact_pane_g1_ParamLimits

0xd767,	// (0x000a7a30) cell_myfav_contact_pane_g1

0xd767,	// (0x000a7a30) cell_myfav_contact_pane_g2_ParamLimits

0xd767,	// (0x000a7a30) cell_myfav_contact_pane_g2

0xd773,	// (0x000a7a3c) cell_myfav_contact_pane_g3_ParamLimits

0xd773,	// (0x000a7a3c) cell_myfav_contact_pane_g3

0xcf20,	// (0x000a71e9) cell_myfav_contact_pane_g4_ParamLimits

0xcf20,	// (0x000a71e9) cell_myfav_contact_pane_g4

0xd780,	// (0x000a7a49) cell_myfav_contact_pane_g5_ParamLimits

0xd780,	// (0x000a7a49) cell_myfav_contact_pane_g5

0x0004,

0xf793,	// (0x000a9a5c) cell_myfav_contact_pane_g_ParamLimits

0xf793,	// (0x000a9a5c) cell_myfav_contact_pane_g

0x6817,	// (0x000a0ae0) main_myfav_hc_pane_g3_ParamLimits

0x6817,	// (0x000a0ae0) main_myfav_hc_pane_g3

0x0f71,	// (0x0009b23a) popup_adpt_find_window

0x6870,	// (0x000a0b39) afind_page_pane_ParamLimits

0x6870,	// (0x000a0b39) afind_page_pane

0x687d,	// (0x000a0b46) aid_size_cell_afind_ParamLimits

0x687d,	// (0x000a0b46) aid_size_cell_afind

0x6897,	// (0x000a0b60) bg_popup_sub_pane_cp09_ParamLimits

0x6897,	// (0x000a0b60) bg_popup_sub_pane_cp09

0x68a4,	// (0x000a0b6d) find_pane_cp01_ParamLimits

0x68a4,	// (0x000a0b6d) find_pane_cp01

0xd78c,	// (0x000a7a55) grid_afind_control_pane_ParamLimits

0xd78c,	// (0x000a7a55) grid_afind_control_pane

0x68b1,	// (0x000a0b7a) grid_afind_pane_ParamLimits

0x68b1,	// (0x000a0b7a) grid_afind_pane

0x68cb,	// (0x000a0b94) cell_afind_pane_ParamLimits

0x68cb,	// (0x000a0b94) cell_afind_pane

0xcc6d,	// (0x000a6f36) afind_page_pane_g1

0x6913,	// (0x000a0bdc) afind_page_pane_g2

0x691c,	// (0x000a0be5) afind_page_pane_g3

0x0002,

0xf79e,	// (0x000a9a67) afind_page_pane_g

0x6925,	// (0x000a0bee) afind_page_pane_t1

0xd7a0,	// (0x000a7a69) cell_afind_grid_control_pane_ParamLimits

0xd7a0,	// (0x000a7a69) cell_afind_grid_control_pane

0xd578,	// (0x000a7841) bg_button_pane_cp69_ParamLimits

0xd578,	// (0x000a7841) bg_button_pane_cp69

0x6945,	// (0x000a0c0e) cell_afind_pane_g1_ParamLimits

0x6945,	// (0x000a0c0e) cell_afind_pane_g1

0x6952,	// (0x000a0c1b) cell_afind_pane_t1_ParamLimits

0x6952,	// (0x000a0c1b) cell_afind_pane_t1

0xaa0d,	// (0x000a4cd6) bg_button_pane_cp72

0xd7af,	// (0x000a7a78) cell_afind_grid_control_pane_g1

0x3f21,	// (0x0009e1ea) aid_image_placing_area_ParamLimits

0x3f21,	// (0x0009e1ea) aid_image_placing_area

0xd246,	// (0x000a750f) field_vitu_entry_pane_g1_ParamLimits

0xd246,	// (0x000a750f) field_vitu_entry_pane_g1

0xd252,	// (0x000a751b) field_vitu_entry_pane_g2_ParamLimits

0xd252,	// (0x000a751b) field_vitu_entry_pane_g2

0x0001,

0x0593,	// (0x0009a85c) field_vitu_entry_pane_g_ParamLimits

0x0593,	// (0x0009a85c) field_vitu_entry_pane_g

0x5a7e,	// (0x0009fd47) cell_vitu_itu_pane_g1_ParamLimits

0x5ac0,	// (0x0009fd89) cell_vitu_itu_pane_t3_ParamLimits

0x5ac0,	// (0x0009fd89) cell_vitu_itu_pane_t3

0xd528,	// (0x000a77f1) mp4_progress_pane_t1_ParamLimits

0xd541,	// (0x000a780a) mp4_progress_pane_t2_ParamLimits

0x0628,	// (0x0009a8f1) mp4_progress_pane_t_ParamLimits

0xd55a,	// (0x000a7823) mup_progress_pane_cp04_ParamLimits

0x685a,	// (0x000a0b23) main_myfav_hc_pane_t5_ParamLimits

0x685a,	// (0x000a0b23) main_myfav_hc_pane_t5

0x0ccf,	// (0x0009af98) aid_zoom_text_primary

0x0f71,	// (0x0009b23a) popup_adpt_find_window_ParamLimits

0x43a9,	// (0x0009e672) main_cam_set_pane

0x62a0,	// (0x000a0569) cam4_zoom_pane_ParamLimits

0x62a0,	// (0x000a0569) cam4_zoom_pane

0x6964,	// (0x000a0c2d) main_cam_set_pane_g1_ParamLimits

0x6964,	// (0x000a0c2d) main_cam_set_pane_g1

0x6972,	// (0x000a0c3b) main_cam_set_pane_g2_ParamLimits

0x6972,	// (0x000a0c3b) main_cam_set_pane_g2

0x0001,

0xf7a5,	// (0x000a9a6e) main_cam_set_pane_g_ParamLimits

0xf7a5,	// (0x000a9a6e) main_cam_set_pane_g

0x697e,	// (0x000a0c47) main_cam_set_pane_t1_ParamLimits

0x697e,	// (0x000a0c47) main_cam_set_pane_t1

0x699a,	// (0x000a0c63) main_cset_listscroll_pane_ParamLimits

0x699a,	// (0x000a0c63) main_cset_listscroll_pane

0x69c5,	// (0x000a0c8e) main_cset_slider_pane_ParamLimits

0x69c5,	// (0x000a0c8e) main_cset_slider_pane

0xd7c0,	// (0x000a7a89) main_cset_list_pane_ParamLimits

0xd7c0,	// (0x000a7a89) main_cset_list_pane

0xd7d0,	// (0x000a7a99) scroll_pane_cp028

0x69e4,	// (0x000a0cad) aid_area_touch_slider

0x6a00,	// (0x000a0cc9) cset_slider_pane

0x6a2a,	// (0x000a0cf3) main_cset_slider_pane_g1

0x6a3f,	// (0x000a0d08) main_cset_slider_pane_g2

0x0011,

0xf7aa,	// (0x000a9a73) main_cset_slider_pane_g

0xd809,	// (0x000a7ad2) main_cset_slider_pane_t1

0x6b05,	// (0x000a0dce) main_cset_slider_pane_t2

0x6b1f,	// (0x000a0de8) main_cset_slider_pane_t3

0x6b39,	// (0x000a0e02) main_cset_slider_pane_t4

0x6b57,	// (0x000a0e20) main_cset_slider_pane_t5

0x6b75,	// (0x000a0e3e) main_cset_slider_pane_t6

0x6b8c,	// (0x000a0e55) main_cset_slider_pane_t7

0x000e,

0xf7cf,	// (0x000a9a98) main_cset_slider_pane_t

0x6c9a,	// (0x000a0f63) cset_list_set_pane_ParamLimits

0x6c9a,	// (0x000a0f63) cset_list_set_pane

0x6cb3,	// (0x000a0f7c) aid_position_infowindow_above

0x6cbb,	// (0x000a0f84) aid_position_infowindow_below

0x6cc3,	// (0x000a0f8c) cset_list_set_pane_g1_ParamLimits

0x6cc3,	// (0x000a0f8c) cset_list_set_pane_g1

0x6ccf,	// (0x000a0f98) cset_list_set_pane_g3_ParamLimits

0x6ccf,	// (0x000a0f98) cset_list_set_pane_g3

0x0001,

0xf7ee,	// (0x000a9ab7) cset_list_set_pane_g_ParamLimits

0xf7ee,	// (0x000a9ab7) cset_list_set_pane_g

0x6cde,	// (0x000a0fa7) cset_list_set_pane_t1_ParamLimits

0x6cde,	// (0x000a0fa7) cset_list_set_pane_t1

0xa474,	// (0x000a473d) list_highlight_pane_cp021_ParamLimits

0xa474,	// (0x000a473d) list_highlight_pane_cp021

0xb544,	// (0x000a580d) cset_slider_pane_g1

0xb556,	// (0x000a581f) cset_slider_pane_g2

0xb54d,	// (0x000a5816) cset_slider_pane_g3

0x0002,

0x0737,	// (0x0009aa00) cset_slider_pane_g

0x6cf3,	// (0x000a0fbc) aid_area_touch_cam4_zoom

0x6cfb,	// (0x000a0fc4) cam4_zoom_cont_pane

0x6d03,	// (0x000a0fcc) cam4_zoom_pane_g1

0x6d0b,	// (0x000a0fd4) cam4_zoom_pane_g2

0x6d13,	// (0x000a0fdc) cam4_zoom_pane_g3

0x0002,

0xf7f3,	// (0x000a9abc) cam4_zoom_pane_g

0x6d1b,	// (0x000a0fe4) cam4_zoom_cont_pane_g1

0x6d24,	// (0x000a0fed) cam4_zoom_cont_pane_g2

0x6d2d,	// (0x000a0ff6) cam4_zoom_cont_pane_g3

0x0002,

0xf7fa,	// (0x000a9ac3) cam4_zoom_cont_pane_g

0x618d,	// (0x000a0456) call4_image_pane_ParamLimits

0x618d,	// (0x000a0456) call4_image_pane

0xd584,	// (0x000a784d) call4_windows_conf_pane_ParamLimits

0xd5c5,	// (0x000a788e) popup_call4_audio_in_window_ParamLimits

0xd5c5,	// (0x000a788e) popup_call4_audio_in_window

0x9b14,	// (0x000a3ddd) bg_popup_call2_act_pane_cp02

0xd63b,	// (0x000a7904) call4_list_conf_pane

0xcc6d,	// (0x000a6f36) call4_image_pane_g1

0xcc6d,	// (0x000a6f36) call4_image_pane_g2

0x0001,

0x0454,	// (0x0009a71d) call4_image_pane_g

0xd8d3,	// (0x000a7b9c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8d3,	// (0x000a7b9c) list_single_graphic_popup_conf4_pane

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp022

0xd8e6,	// (0x000a7baf) list_single_graphic_popup_conf4_pane_g1

0xb140,	// (0x000a5409) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf801,	// (0x000a9aca) list_single_graphic_popup_conf4_pane_g

0xd8ee,	// (0x000a7bb7) list_single_graphic_popup_conf4_pane_t1

0x210e,	// (0x0009c3d7) popup_vtel_slider_window_ParamLimits

0x210e,	// (0x0009c3d7) popup_vtel_slider_window

0xd566,	// (0x000a782f) dialer2_ne_pane_t2_ParamLimits

0xd566,	// (0x000a782f) dialer2_ne_pane_t2

0x0001,

0xf6f0,	// (0x000a99b9) dialer2_ne_pane_t_ParamLimits

0xf6f0,	// (0x000a99b9) dialer2_ne_pane_t

0xa474,	// (0x000a473d) bg_popup_sub_pane_cp010_ParamLimits

0xa474,	// (0x000a473d) bg_popup_sub_pane_cp010

0x6d36,	// (0x000a0fff) popup_vtel_slider_window_g1_ParamLimits

0x6d36,	// (0x000a0fff) popup_vtel_slider_window_g1

0x6d42,	// (0x000a100b) popup_vtel_slider_window_g2_ParamLimits

0x6d42,	// (0x000a100b) popup_vtel_slider_window_g2

0x0003,

0xf806,	// (0x000a9acf) popup_vtel_slider_window_g_ParamLimits

0xf806,	// (0x000a9acf) popup_vtel_slider_window_g

0x6d8a,	// (0x000a1053) vtel_slider_pane_ParamLimits

0x6d8a,	// (0x000a1053) vtel_slider_pane

0x6d99,	// (0x000a1062) vtel_slider_pane_g1_ParamLimits

0x6d99,	// (0x000a1062) vtel_slider_pane_g1

0x6da6,	// (0x000a106f) vtel_slider_pane_g2_ParamLimits

0x6da6,	// (0x000a106f) vtel_slider_pane_g2

0x6db3,	// (0x000a107c) vtel_slider_pane_g3_ParamLimits

0x6db3,	// (0x000a107c) vtel_slider_pane_g3

0x6d99,	// (0x000a1062) vtel_slider_pane_g4_ParamLimits

0x6d99,	// (0x000a1062) vtel_slider_pane_g4

0x6dc0,	// (0x000a1089) vtel_slider_pane_g5_ParamLimits

0x6dc0,	// (0x000a1089) vtel_slider_pane_g5

0x0004,

0xf80f,	// (0x000a9ad8) vtel_slider_pane_g_ParamLimits

0xf80f,	// (0x000a9ad8) vtel_slider_pane_g

0x43a9,	// (0x0009e672) main_gallery2_pane

0x64f8,	// (0x000a07c1) aid_size_row_itut2_dropdow_list_ParamLimits

0x64f8,	// (0x000a07c1) aid_size_row_itut2_dropdow_list

0x6566,	// (0x000a082f) grid_vitu2_function_top_pane_ParamLimits

0x6566,	// (0x000a082f) grid_vitu2_function_top_pane

0x65c0,	// (0x000a0889) popup_vitu2_dropdown_list_window_ParamLimits

0x65c0,	// (0x000a0889) popup_vitu2_dropdown_list_window

0x65e0,	// (0x000a08a9) popup_vitu2_match_list_window

0x6ddb,	// (0x000a10a4) cell_vitu2_function_top_pane_ParamLimits

0x6ddb,	// (0x000a10a4) cell_vitu2_function_top_pane

0x6df5,	// (0x000a10be) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6df5,	// (0x000a10be) cell_vitu2_function_top_pane_cp01

0x6e11,	// (0x000a10da) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e11,	// (0x000a10da) cell_vitu2_function_top_wide_pane

0x43a9,	// (0x0009e672) bg_button_pane_cp012

0x6e2d,	// (0x000a10f6) cell_vitu2_function_top_pane_g1

0x6e41,	// (0x000a110a) bg_button_pane_cp013_ParamLimits

0x6e41,	// (0x000a110a) bg_button_pane_cp013

0x6e5d,	// (0x000a1126) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e5d,	// (0x000a1126) cell_vitu2_function_top_wide_pane_g1

0x1068,	// (0x0009b331) bg_popup_sub_pane_cp20

0x6e75,	// (0x000a113e) list_vitu2_match_list_pane

0xd6b6,	// (0x000a797f) bg_popup_sub_pane_cp20_g1

0xd6be,	// (0x000a7987) bg_popup_sub_pane_cp20_g2

0xac14,	// (0x000a4edd) bg_popup_sub_pane_cp20_g3

0xd6c6,	// (0x000a798f) bg_popup_sub_pane_cp20_g4

0xabf4,	// (0x000a4ebd) bg_popup_sub_pane_cp20_g5

0xd904,	// (0x000a7bcd) bg_popup_sub_pane_cp20_g6

0xd6d6,	// (0x000a799f) bg_popup_sub_pane_cp20_g7

0xd6de,	// (0x000a79a7) bg_popup_sub_pane_cp20_g8

0xd6e6,	// (0x000a79af) bg_popup_sub_pane_cp20_g9

0x0008,

0xf81a,	// (0x000a9ae3) bg_popup_sub_pane_cp20_g

0x6e8d,	// (0x000a1156) list_vitu2_match_list_item_pane_ParamLimits

0x6e8d,	// (0x000a1156) list_vitu2_match_list_item_pane

0x6e9f,	// (0x000a1168) list_vitu2_match_list_item_pane_t1

0x1082,	// (0x0009b34b) bg_popup_sub_pane_cp21

0x6ef5,	// (0x000a11be) grid_vitu2_dropdown_list_pane

0x6efd,	// (0x000a11c6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6efd,	// (0x000a11c6) cell_vitu2_dropdown_list_char_pane

0x6f1e,	// (0x000a11e7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f1e,	// (0x000a11e7) cell_vitu2_dropdown_list_ctrl_pane

0xd90c,	// (0x000a7bd5) cell_vitu2_dropdown_list_char_pane_g1

0xd915,	// (0x000a7bde) cell_vitu2_dropdown_list_char_pane_g2

0xd91e,	// (0x000a7be7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf837,	// (0x000a9b00) cell_vitu2_dropdown_list_char_pane_g

0x6f4a,	// (0x000a1213) cell_vitu2_dropdown_list_char_pane_t1

0x6f58,	// (0x000a1221) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f58,	// (0x000a1221) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f68,	// (0x000a1231) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f68,	// (0x000a1231) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f79,	// (0x000a1242) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f79,	// (0x000a1242) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f89,	// (0x000a1252) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f89,	// (0x000a1252) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6334,	// (0x000a05fd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6334,	// (0x000a05fd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf83e,	// (0x000a9b07) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf83e,	// (0x000a9b07) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fa5,	// (0x000a126e) aid_size_cell_gallery2_ParamLimits

0x6fa5,	// (0x000a126e) aid_size_cell_gallery2

0x6fbf,	// (0x000a1288) grid_gallery2_pane_ParamLimits

0x6fbf,	// (0x000a1288) grid_gallery2_pane

0x5905,	// (0x0009fbce) scroll_pane_cp029_ParamLimits

0x5905,	// (0x0009fbce) scroll_pane_cp029

0x6fd6,	// (0x000a129f) cell_gallery2_pane_ParamLimits

0x6fd6,	// (0x000a129f) cell_gallery2_pane

0xd927,	// (0x000a7bf0) cell_gallery2_pane_g2

0x7028,	// (0x000a12f1) cell_gallery2_pane_g3

0xd92f,	// (0x000a7bf8) cell_gallery2_pane_g4

0xd937,	// (0x000a7c00) cell_gallery2_pane_g5

0xa9bb,	// (0x000a4c84) grid_highlight_pane_cp10

0x65e0,	// (0x000a08a9) popup_vitu2_match_list_window_ParamLimits

0x65f2,	// (0x000a08bb) popup_vitu2_query_window_ParamLimits

0x65f2,	// (0x000a08bb) popup_vitu2_query_window

0x1082,	// (0x0009b34b) bg_vitu2_candi_button_pane

0xd90c,	// (0x000a7bd5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd915,	// (0x000a7bde) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd91e,	// (0x000a7be7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7030,	// (0x000a12f9) bg_button_pane_cp015

0x7042,	// (0x000a130b) bg_button_pane_cp016

0x7055,	// (0x000a131e) bg_button_pane_cp017

0xc859,	// (0x000a6b22) bg_popup_sub_pane_cp22

0xd93f,	// (0x000a7c08) popup_vitu2_query_window_g1

0x709a,	// (0x000a1363) popup_vitu2_query_window_g2

0x0002,

0xf849,	// (0x000a9b12) popup_vitu2_query_window_g

0x70b7,	// (0x000a1380) popup_vitu2_query_window_t1_ParamLimits

0x70b7,	// (0x000a1380) popup_vitu2_query_window_t1

0x70ea,	// (0x000a13b3) popup_vitu2_query_window_t2_ParamLimits

0x70ea,	// (0x000a13b3) popup_vitu2_query_window_t2

0x70fc,	// (0x000a13c5) popup_vitu2_query_window_t3_ParamLimits

0x70fc,	// (0x000a13c5) popup_vitu2_query_window_t3

0x7124,	// (0x000a13ed) popup_vitu2_query_window_t4_ParamLimits

0x7124,	// (0x000a13ed) popup_vitu2_query_window_t4

0x7145,	// (0x000a140e) popup_vitu2_query_window_t5_ParamLimits

0x7145,	// (0x000a140e) popup_vitu2_query_window_t5

0x0006,

0xf850,	// (0x000a9b19) popup_vitu2_query_window_t_ParamLimits

0xf850,	// (0x000a9b19) popup_vitu2_query_window_t

0xd7b8,	// (0x000a7a81) main_cset_text_pane

0x69e4,	// (0x000a0cad) aid_area_touch_slider_ParamLimits

0x6a00,	// (0x000a0cc9) cset_slider_pane_ParamLimits

0x6a2a,	// (0x000a0cf3) main_cset_slider_pane_g1_ParamLimits

0x6a3f,	// (0x000a0d08) main_cset_slider_pane_g2_ParamLimits

0xd7d9,	// (0x000a7aa2) main_cset_slider_pane_g3_ParamLimits

0xd7d9,	// (0x000a7aa2) main_cset_slider_pane_g3

0x6a54,	// (0x000a0d1d) main_cset_slider_pane_g4_ParamLimits

0x6a54,	// (0x000a0d1d) main_cset_slider_pane_g4

0x6a63,	// (0x000a0d2c) main_cset_slider_pane_g5_ParamLimits

0x6a63,	// (0x000a0d2c) main_cset_slider_pane_g5

0x6a71,	// (0x000a0d3a) main_cset_slider_pane_g6_ParamLimits

0x6a71,	// (0x000a0d3a) main_cset_slider_pane_g6

0xf7aa,	// (0x000a9a73) main_cset_slider_pane_g_ParamLimits

0xd809,	// (0x000a7ad2) main_cset_slider_pane_t1_ParamLimits

0x6b05,	// (0x000a0dce) main_cset_slider_pane_t2_ParamLimits

0x6b1f,	// (0x000a0de8) main_cset_slider_pane_t3_ParamLimits

0x6b39,	// (0x000a0e02) main_cset_slider_pane_t4_ParamLimits

0x6b57,	// (0x000a0e20) main_cset_slider_pane_t5_ParamLimits

0x6b75,	// (0x000a0e3e) main_cset_slider_pane_t6_ParamLimits

0x6b8c,	// (0x000a0e55) main_cset_slider_pane_t7_ParamLimits

0x6bba,	// (0x000a0e83) main_cset_slider_pane_t8_ParamLimits

0x6bba,	// (0x000a0e83) main_cset_slider_pane_t8

0x6be2,	// (0x000a0eab) main_cset_slider_pane_t9_ParamLimits

0x6be2,	// (0x000a0eab) main_cset_slider_pane_t9

0x6c0a,	// (0x000a0ed3) main_cset_slider_pane_t10_ParamLimits

0x6c0a,	// (0x000a0ed3) main_cset_slider_pane_t10

0x6c32,	// (0x000a0efb) main_cset_slider_pane_t11_ParamLimits

0x6c32,	// (0x000a0efb) main_cset_slider_pane_t11

0x6c5c,	// (0x000a0f25) main_cset_slider_pane_t12_ParamLimits

0x6c5c,	// (0x000a0f25) main_cset_slider_pane_t12

0x6c7b,	// (0x000a0f44) main_cset_slider_pane_t13_ParamLimits

0x6c7b,	// (0x000a0f44) main_cset_slider_pane_t13

0xf7cf,	// (0x000a9a98) main_cset_slider_pane_t_ParamLimits

0x9b14,	// (0x000a3ddd) bg_popup_sub_pane_cp011

0xd94b,	// (0x000a7c14) main_cset_text_pane_g1

0xd953,	// (0x000a7c1c) main_cset_text_pane_t1

0xd961,	// (0x000a7c2a) main_cset_text_pane_t2

0xd96f,	// (0x000a7c38) main_cset_text_pane_t3

0xd97d,	// (0x000a7c46) main_cset_text_pane_t4

0xd98b,	// (0x000a7c54) main_cset_text_pane_t5

0xd999,	// (0x000a7c62) main_cset_text_pane_t6

0xd9a7,	// (0x000a7c70) main_cset_text_pane_t7

0x0006,

0xf85f,	// (0x000a9b28) main_cset_text_pane_t

0x1082,	// (0x0009b34b) main_cam4_burst_pane

0x1082,	// (0x0009b34b) main_cam5_pane

0x6933,	// (0x000a0bfc) bg_button_pane_cp019

0x693c,	// (0x000a0c05) bg_button_pane_cp020

0xd7e5,	// (0x000a7aae) main_cset_slider_pane_g7_ParamLimits

0xd7e5,	// (0x000a7aae) main_cset_slider_pane_g7

0xd7f1,	// (0x000a7aba) main_cset_slider_pane_g8_ParamLimits

0xd7f1,	// (0x000a7aba) main_cset_slider_pane_g8

0x6a85,	// (0x000a0d4e) main_cset_slider_pane_g9_ParamLimits

0x6a85,	// (0x000a0d4e) main_cset_slider_pane_g9

0x6a91,	// (0x000a0d5a) main_cset_slider_pane_g10_ParamLimits

0x6a91,	// (0x000a0d5a) main_cset_slider_pane_g10

0x6a9d,	// (0x000a0d66) main_cset_slider_pane_g11_ParamLimits

0x6a9d,	// (0x000a0d66) main_cset_slider_pane_g11

0x6aa9,	// (0x000a0d72) main_cset_slider_pane_g12_ParamLimits

0x6aa9,	// (0x000a0d72) main_cset_slider_pane_g12

0x6ab5,	// (0x000a0d7e) main_cset_slider_pane_g13_ParamLimits

0x6ab5,	// (0x000a0d7e) main_cset_slider_pane_g13

0x6ac3,	// (0x000a0d8c) main_cset_slider_pane_g14_ParamLimits

0x6ac3,	// (0x000a0d8c) main_cset_slider_pane_g14

0x6ad1,	// (0x000a0d9a) main_cset_slider_pane_g15_ParamLimits

0x6ad1,	// (0x000a0d9a) main_cset_slider_pane_g15

0xd837,	// (0x000a7b00) main_cset_slider_pane_t14_ParamLimits

0xd837,	// (0x000a7b00) main_cset_slider_pane_t14

0xd89a,	// (0x000a7b63) main_cset_slider_pane_t15_ParamLimits

0xd89a,	// (0x000a7b63) main_cset_slider_pane_t15

0x71bc,	// (0x000a1485) aid_cam4_burst_size_cell_ParamLimits

0x71bc,	// (0x000a1485) aid_cam4_burst_size_cell

0x71d8,	// (0x000a14a1) grid_cam4_burst_pane_ParamLimits

0x71d8,	// (0x000a14a1) grid_cam4_burst_pane

0x7208,	// (0x000a14d1) linegrid_cam4_burst_pane_ParamLimits

0x7208,	// (0x000a14d1) linegrid_cam4_burst_pane

0x7228,	// (0x000a14f1) scroll_pane_cp30_ParamLimits

0x7228,	// (0x000a14f1) scroll_pane_cp30

0x7234,	// (0x000a14fd) cell_cam4_burst_pane_ParamLimits

0x7234,	// (0x000a14fd) cell_cam4_burst_pane

0xd9b5,	// (0x000a7c7e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9b5,	// (0x000a7c7e) linegrid_cam4_burst_pane_g1

0x7270,	// (0x000a1539) linegrid_cam4_burst_pane_g2_ParamLimits

0x7270,	// (0x000a1539) linegrid_cam4_burst_pane_g2

0xd9c2,	// (0x000a7c8b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9c2,	// (0x000a7c8b) linegrid_cam4_burst_pane_g3

0x0002,

0xf86e,	// (0x000a9b37) linegrid_cam4_burst_pane_g_ParamLimits

0xf86e,	// (0x000a9b37) linegrid_cam4_burst_pane_g

0x7281,	// (0x000a154a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7281,	// (0x000a154a) linegrid_cam4_burst_pane_g3_copy1

0xd9cf,	// (0x000a7c98) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9cf,	// (0x000a7c98) linegrid_cam4_burst_pane_g4

0x729b,	// (0x000a1564) linegrid_cam4_burst_pane_g5_ParamLimits

0x729b,	// (0x000a1564) linegrid_cam4_burst_pane_g5

0x72ac,	// (0x000a1575) linegrid_cam4_burst_pane_g6_ParamLimits

0x72ac,	// (0x000a1575) linegrid_cam4_burst_pane_g6

0xd9dc,	// (0x000a7ca5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9dc,	// (0x000a7ca5) linegrid_cam4_burst_pane_g7

0x72bd,	// (0x000a1586) cell_cam4_burst_pane_g1

0xd9f5,	// (0x000a7cbe) main_cam5_pane_t1_ParamLimits

0xd9f5,	// (0x000a7cbe) main_cam5_pane_t1

0xda07,	// (0x000a7cd0) main_cam5_pane_t2_ParamLimits

0xda07,	// (0x000a7cd0) main_cam5_pane_t2

0xda19,	// (0x000a7ce2) main_cam5_pane_t3_ParamLimits

0xda19,	// (0x000a7ce2) main_cam5_pane_t3

0xda2b,	// (0x000a7cf4) main_cam5_pane_t4_ParamLimits

0xda2b,	// (0x000a7cf4) main_cam5_pane_t4

0xda43,	// (0x000a7d0c) main_cam5_pane_t5_ParamLimits

0xda43,	// (0x000a7d0c) main_cam5_pane_t5

0xda7d,	// (0x000a7d46) main_cam5_pane_t6_ParamLimits

0xda7d,	// (0x000a7d46) main_cam5_pane_t6

0xda91,	// (0x000a7d5a) main_cam5_pane_t7_ParamLimits

0xda91,	// (0x000a7d5a) main_cam5_pane_t7

0xdaa3,	// (0x000a7d6c) main_cam5_pane_t8_ParamLimits

0xdaa3,	// (0x000a7d6c) main_cam5_pane_t8

0xdabf,	// (0x000a7d88) main_cam5_pane_t9_ParamLimits

0xdabf,	// (0x000a7d88) main_cam5_pane_t9

0xdad1,	// (0x000a7d9a) main_cam5_pane_t10_ParamLimits

0xdad1,	// (0x000a7d9a) main_cam5_pane_t10

0xdae3,	// (0x000a7dac) main_cam5_pane_t11_ParamLimits

0xdae3,	// (0x000a7dac) main_cam5_pane_t11

0xdaf5,	// (0x000a7dbe) main_cam5_pane_t12_ParamLimits

0xdaf5,	// (0x000a7dbe) main_cam5_pane_t12

0xdb0a,	// (0x000a7dd3) main_cam5_pane_t13_ParamLimits

0xdb0a,	// (0x000a7dd3) main_cam5_pane_t13

0x000c,

0xf87a,	// (0x000a9b43) main_cam5_pane_t_ParamLimits

0xf87a,	// (0x000a9b43) main_cam5_pane_t

0x1027,	// (0x0009b2f0) popup_scut_keymap_window_ParamLimits

0x1027,	// (0x0009b2f0) popup_scut_keymap_window

0x72d0,	// (0x000a1599) aid_size_cell_brow_shortcut

0xa9bb,	// (0x000a4c84) bg_popup_window_pane_cp010

0x72dc,	// (0x000a15a5) grid_scut_pane

0x72e8,	// (0x000a15b1) cell_scut_pane_ParamLimits

0x72e8,	// (0x000a15b1) cell_scut_pane

0x72ff,	// (0x000a15c8) cell_scut_pane_g1

0xdb27,	// (0x000a7df0) cell_scut_pane_t1

0xdb36,	// (0x000a7dff) cell_scut_pane_t2

0x7308,	// (0x000a15d1) cell_scut_pane_t3

0x0002,

0xf895,	// (0x000a9b5e) cell_scut_pane_t

0x50ea,	// (0x0009f3b3) main_mup3_pane_g8_ParamLimits

0x50ea,	// (0x0009f3b3) main_mup3_pane_g8

0x6506,	// (0x000a07cf) area_vitu2_query_pane_ParamLimits

0x6506,	// (0x000a07cf) area_vitu2_query_pane

0x7068,	// (0x000a1331) input_focus_pane_cp08

0xdb45,	// (0x000a7e0e) area_vitu2_query_pane_g1

0x7316,	// (0x000a15df) area_vitu2_query_pane_g2

0x0001,

0xf89c,	// (0x000a9b65) area_vitu2_query_pane_g

0x7327,	// (0x000a15f0) area_vitu2_query_pane_t1_ParamLimits

0x7327,	// (0x000a15f0) area_vitu2_query_pane_t1

0x733b,	// (0x000a1604) area_vitu2_query_pane_t2_ParamLimits

0x733b,	// (0x000a1604) area_vitu2_query_pane_t2

0x734f,	// (0x000a1618) area_vitu2_query_pane_t3_ParamLimits

0x734f,	// (0x000a1618) area_vitu2_query_pane_t3

0x9f4e,	// (0x000a4217) area_vitu2_query_pane_t4_ParamLimits

0x9f4e,	// (0x000a4217) area_vitu2_query_pane_t4

0x9f76,	// (0x000a423f) area_vitu2_query_pane_t5_ParamLimits

0x9f76,	// (0x000a423f) area_vitu2_query_pane_t5

0x9f9e,	// (0x000a4267) area_vitu2_query_pane_t6_ParamLimits

0x9f9e,	// (0x000a4267) area_vitu2_query_pane_t6

0x0006,

0xf8a1,	// (0x000a9b6a) area_vitu2_query_pane_t_ParamLimits

0xf8a1,	// (0x000a9b6a) area_vitu2_query_pane_t

0x7377,	// (0x000a1640) bg_button_pane_cp018

0x7385,	// (0x000a164e) bg_button_pane_cp021

0x7391,	// (0x000a165a) bg_button_pane_cp022

0x73a2,	// (0x000a166b) input_focus_pane_cp09

0xb24f,	// (0x000a5518) aid_size_touch_mv_arrow_left

0xb27a,	// (0x000a5543) aid_size_touch_mv_arrow_right

0x6ae9,	// (0x000a0db2) main_cset_slider_pane_g16_ParamLimits

0x6ae9,	// (0x000a0db2) main_cset_slider_pane_g16

0x6af7,	// (0x000a0dc0) main_cset_slider_pane_g17_ParamLimits

0x6af7,	// (0x000a0dc0) main_cset_slider_pane_g17

0x72bd,	// (0x000a1586) cell_cam4_burst_pane_g1_ParamLimits

0x9b14,	// (0x000a3ddd) compa_mode_pane

0x6d4e,	// (0x000a1017) popup_vtel_slider_window_g3_ParamLimits

0x6d4e,	// (0x000a1017) popup_vtel_slider_window_g3

0x6d62,	// (0x000a102b) popup_vtel_slider_window_g4_ParamLimits

0x6d62,	// (0x000a102b) popup_vtel_slider_window_g4

0x6d76,	// (0x000a103f) popup_vtel_slider_window_t1_ParamLimits

0x6d76,	// (0x000a103f) popup_vtel_slider_window_t1

0x1082,	// (0x0009b34b) main_cl_pane

0x4443,	// (0x0009e70c) popup_imed_adjust2_window_ParamLimits

0xc859,	// (0x000a6b22) bg_tb_trans_pane_cp05_ParamLimits

0xd17b,	// (0x000a7444) popup_imed_adjust2_window_g1_ParamLimits

0xd18a,	// (0x000a7453) popup_imed_adjust2_window_g2_ParamLimits

0xd18a,	// (0x000a7453) popup_imed_adjust2_window_g2

0xd196,	// (0x000a745f) popup_imed_adjust2_window_g3_ParamLimits

0xd196,	// (0x000a745f) popup_imed_adjust2_window_g3

0x0002,

0x0557,	// (0x0009a820) popup_imed_adjust2_window_g_ParamLimits

0x0557,	// (0x0009a820) popup_imed_adjust2_window_g

0xd1a2,	// (0x000a746b) popup_imed_adjust2_window_t1_ParamLimits

0xd1ba,	// (0x000a7483) slider_imed_adjust_pane_ParamLimits

0xd1ce,	// (0x000a7497) slider_imed_adjust_pane_g1_ParamLimits

0xd1de,	// (0x000a74a7) slider_imed_adjust_pane_g2_ParamLimits

0xd1ee,	// (0x000a74b7) slider_imed_adjust_pane_g3_ParamLimits

0xd1ff,	// (0x000a74c8) slider_imed_adjust_pane_g4_ParamLimits

0x055e,	// (0x0009a827) slider_imed_adjust_pane_g_ParamLimits

0x6249,	// (0x000a0512) aid_touch_area_cam4_ParamLimits

0x6249,	// (0x000a0512) aid_touch_area_cam4

0x6259,	// (0x000a0522) battery_pane_cp01

0x62e0,	// (0x000a05a9) main_camera4_pane_g6_ParamLimits

0x62e0,	// (0x000a05a9) main_camera4_pane_g6

0x62fe,	// (0x000a05c7) main_camera4_pane_t2_ParamLimits

0x62fe,	// (0x000a05c7) main_camera4_pane_t2

0x0001,

0xf724,	// (0x000a99ed) main_camera4_pane_t_ParamLimits

0xf724,	// (0x000a99ed) main_camera4_pane_t

0x638d,	// (0x000a0656) aid_touch_area_vid4_ParamLimits

0x638d,	// (0x000a0656) aid_touch_area_vid4

0x63cd,	// (0x000a0696) main_video4_pane_g5_ParamLimits

0x63cd,	// (0x000a0696) main_video4_pane_g5

0x63f1,	// (0x000a06ba) vid4_progress_pane_ParamLimits

0x63f1,	// (0x000a06ba) vid4_progress_pane

0xd7fd,	// (0x000a7ac6) main_cset_slider_pane_g18_ParamLimits

0xd7fd,	// (0x000a7ac6) main_cset_slider_pane_g18

0xd9e9,	// (0x000a7cb2) cell_cam4_burst_pane_g2_ParamLimits

0xd9e9,	// (0x000a7cb2) cell_cam4_burst_pane_g2

0x0001,

0xf875,	// (0x000a9b3e) cell_cam4_burst_pane_g_ParamLimits

0xf875,	// (0x000a9b3e) cell_cam4_burst_pane_g

0x73b3,	// (0x000a167c) bg_cl_pane_ParamLimits

0x73b3,	// (0x000a167c) bg_cl_pane

0x73bf,	// (0x000a1688) cl_header_pane_ParamLimits

0x73bf,	// (0x000a1688) cl_header_pane

0x73cb,	// (0x000a1694) cl_listscroll_pane_ParamLimits

0x73cb,	// (0x000a1694) cl_listscroll_pane

0xdb51,	// (0x000a7e1a) bg_cl_pane_g1

0xdb59,	// (0x000a7e22) bg_cl_pane_g2

0xdb61,	// (0x000a7e2a) bg_cl_pane_g3

0xdb69,	// (0x000a7e32) bg_cl_pane_g4

0xdb71,	// (0x000a7e3a) bg_cl_pane_g5

0xdb79,	// (0x000a7e42) bg_cl_pane_g6

0xdb81,	// (0x000a7e4a) bg_cl_pane_g7

0xdb89,	// (0x000a7e52) bg_cl_pane_g8

0xdb91,	// (0x000a7e5a) bg_cl_pane_g9

0x0008,

0xf8b0,	// (0x000a9b79) bg_cl_pane_g

0x73d7,	// (0x000a16a0) aid_height_cl_leading_ParamLimits

0x73d7,	// (0x000a16a0) aid_height_cl_leading

0x73e3,	// (0x000a16ac) aid_height_cl_text_ParamLimits

0x73e3,	// (0x000a16ac) aid_height_cl_text

0xeeee,	// (0x000a91b7) bg_cl_header_pane_ParamLimits

0xeeee,	// (0x000a91b7) bg_cl_header_pane

0x73fb,	// (0x000a16c4) cl_header_pane_g1_ParamLimits

0x73fb,	// (0x000a16c4) cl_header_pane_g1

0x7408,	// (0x000a16d1) cl_header_pane_t1_ParamLimits

0x7408,	// (0x000a16d1) cl_header_pane_t1

0xdb99,	// (0x000a7e62) cl_list_pane

0xd7d0,	// (0x000a7a99) hc_scroll_pane_cp01

0xabf4,	// (0x000a4ebd) bg_cl_header_pane_g1

0xd6b6,	// (0x000a797f) bg_cl_header_pane_g2

0xac14,	// (0x000a4edd) bg_cl_header_pane_g3

0xd6c6,	// (0x000a798f) bg_cl_header_pane_g4

0xd6be,	// (0x000a7987) bg_cl_header_pane_g5

0xd904,	// (0x000a7bcd) bg_cl_header_pane_g6

0xd6de,	// (0x000a79a7) bg_cl_header_pane_g7

0xd6e6,	// (0x000a79af) bg_cl_header_pane_g8

0xd6d6,	// (0x000a799f) bg_cl_header_pane_g9

0x0008,

0xf8c3,	// (0x000a9b8c) bg_cl_header_pane_g

0x741a,	// (0x000a16e3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x741a,	// (0x000a16e3) hc_cl_list_double_graphic_heading_pane

0x742e,	// (0x000a16f7) hc_cl_list_single_graphic_pane_ParamLimits

0x742e,	// (0x000a16f7) hc_cl_list_single_graphic_pane

0x7448,	// (0x000a1711) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7448,	// (0x000a1711) hc_cl_list_single_graphic_pane_g1

0x7454,	// (0x000a171d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7454,	// (0x000a171d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8d6,	// (0x000a9b9f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8d6,	// (0x000a9b9f) hc_cl_list_single_graphic_pane_g

0x7468,	// (0x000a1731) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7468,	// (0x000a1731) hc_cl_list_single_graphic_pane_t1

0x7448,	// (0x000a1711) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7448,	// (0x000a1711) hc_cl_list_double_graphic_heading_pane_g1

0x747d,	// (0x000a1746) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x747d,	// (0x000a1746) hc_cl_list_double_graphic_heading_pane_g2

0x7491,	// (0x000a175a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7491,	// (0x000a175a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8db,	// (0x000a9ba4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8db,	// (0x000a9ba4) hc_cl_list_double_graphic_heading_pane_g

0x74a5,	// (0x000a176e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74a5,	// (0x000a176e) hc_cl_list_double_graphic_heading_pane_t1

0x74ba,	// (0x000a1783) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74ba,	// (0x000a1783) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8e2,	// (0x000a9bab) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8e2,	// (0x000a9bab) hc_cl_list_double_graphic_heading_pane_t

0x74d7,	// (0x000a17a0) vid4_progress_pane_g1

0x74e7,	// (0x000a17b0) vid4_progress_pane_g2

0x74f7,	// (0x000a17c0) vid4_progress_pane_g3

0x7509,	// (0x000a17d2) vid4_progress_pane_g4

0x0004,

0xf8e7,	// (0x000a9bb0) vid4_progress_pane_g

0x7521,	// (0x000a17ea) vid4_progress_pane_t1

0x7537,	// (0x000a1800) vid4_progress_pane_t2

0x0002,

0xf8f2,	// (0x000a9bbb) vid4_progress_pane_t

0x7562,	// (0x000a182b) wait_bar_pane_cp07

0xca54,	// (0x000a6d1d) blid_firmament_pane_ParamLimits

0xca97,	// (0x000a6d60) popup_blid_sat_info2_window_g1

0xcabb,	// (0x000a6d84) popup_blid_sat_info2_window_t3

0xcac9,	// (0x000a6d92) popup_blid_sat_info2_window_t4

0xcad7,	// (0x000a6da0) popup_blid_sat_info2_window_t5

0xcae5,	// (0x000a6dae) popup_blid_sat_info2_window_t6

0xcaf5,	// (0x000a6dbe) popup_blid_sat_info2_window_t7

0xcb03,	// (0x000a6dcc) popup_blid_sat_info2_window_t8

0xcb11,	// (0x000a6dda) popup_blid_sat_info2_window_t9

0xcb1f,	// (0x000a6de8) popup_blid_sat_info2_window_t10

0xcbed,	// (0x000a6eb6) aid_firma_cardinal_ParamLimits

0xcc01,	// (0x000a6eca) blid_firmament_pane_t1_ParamLimits

0xcc18,	// (0x000a6ee1) blid_firmament_pane_t2_ParamLimits

0xcc2f,	// (0x000a6ef8) blid_firmament_pane_t3_ParamLimits

0xcc46,	// (0x000a6f0f) blid_firmament_pane_t4_ParamLimits

0x044b,	// (0x0009a714) blid_firmament_pane_t_ParamLimits

0xcc5d,	// (0x000a6f26) blid_sat_info_pane_ParamLimits

0x43a9,	// (0x0009e672) main_cam_set_pane_ParamLimits

0x589e,	// (0x0009fb67) aid_size_cell_colour_35_ParamLimits

0x58b8,	// (0x0009fb81) aid_size_cell_colour_112_ParamLimits

0x58cf,	// (0x0009fb98) aid_size_cell_effect_ParamLimits

0xa474,	// (0x000a473d) bg_tb_trans_pane_cp02_ParamLimits

0xb091,	// (0x000a535a) heading_imed_pane_ParamLimits

0x58e9,	// (0x0009fbb2) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x000a6108) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x000a6108) popup_call2_audio_first_window_g5

0x5ff8,	// (0x000a02c1) aid_size_touch_image3_arrow_left_ParamLimits

0x5ff8,	// (0x000a02c1) aid_size_touch_image3_arrow_left

0x600e,	// (0x000a02d7) aid_size_touch_image3_arrow_right_ParamLimits

0x600e,	// (0x000a02d7) aid_size_touch_image3_arrow_right

0x754c,	// (0x000a1815) vid4_progress_pane_t3

0x5b89,	// (0x0009fe52) main_hwr_training_symbol_option_pane_ParamLimits

0x5b89,	// (0x0009fe52) main_hwr_training_symbol_option_pane

0xd468,	// (0x000a7731) popup_hwr_training_preview_window_ParamLimits

0xd468,	// (0x000a7731) popup_hwr_training_preview_window

0x5bea,	// (0x0009feb3) hwr_training_navi_pane_g5_ParamLimits

0x5bea,	// (0x0009feb3) hwr_training_navi_pane_g5

0xd6a4,	// (0x000a796d) popup_char_count_window

0x1068,	// (0x0009b331) bg_popup_sub_pane_cp20_ParamLimits

0x6e75,	// (0x000a113e) list_vitu2_match_list_pane_ParamLimits

0x6e81,	// (0x000a114a) vitu2_page_scroll_pane_ParamLimits

0x6e81,	// (0x000a114a) vitu2_page_scroll_pane

0xdba2,	// (0x000a7e6b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba2,	// (0x000a7e6b) list_single_hwr_training_symbol_option_pane

0xdbb5,	// (0x000a7e7e) list_single_hwr_training_symbol_option_pane_g1

0xdbbd,	// (0x000a7e86) list_single_hwr_training_symbol_option_pane_t1

0xdbcb,	// (0x000a7e94) bg_button_pane_cp023

0xdbd4,	// (0x000a7e9d) bg_button_pane_cp024

0x75ab,	// (0x000a1874) vitu2_page_scroll_pane_g1

0x75b3,	// (0x000a187c) vitu2_page_scroll_pane_g2

0x0001,

0xf8f9,	// (0x000a9bc2) vitu2_page_scroll_pane_g

0x75bb,	// (0x000a1884) vitu2_page_scroll_pane_t1

0xcc96,	// (0x000a6f5f) popup_char_count_window_g1

0xdc07,	// (0x000a7ed0) popup_char_count_window_g2

0xdc10,	// (0x000a7ed9) popup_char_count_window_g3

0x0002,

0xf8fe,	// (0x000a9bc7) popup_char_count_window_g

0xdc19,	// (0x000a7ee2) popup_char_count_window_t1

0x1082,	// (0x0009b34b) main_vded2_pane

0xd167,	// (0x000a7430) aid_size_cell_imed_line

0xd171,	// (0x000a743a) grid_imed_line_width_pane

0x645d,	// (0x000a0726) vid4_indicators_pane_g4

0xdc27,	// (0x000a7ef0) cell_imed_line_width_pane_ParamLimits

0xdc27,	// (0x000a7ef0) cell_imed_line_width_pane

0xdc3b,	// (0x000a7f04) cell_imed_line_width_pane_g1

0xda75,	// (0x000a7d3e) cell_imed_line_width_pane_g2

0x0001,

0xf905,	// (0x000a9bce) cell_imed_line_width_pane_g

0x75ca,	// (0x000a1893) main_vded2_pane_g1_ParamLimits

0x75ca,	// (0x000a1893) main_vded2_pane_g1

0x75d7,	// (0x000a18a0) main_vded2_pane_g2_ParamLimits

0x75d7,	// (0x000a18a0) main_vded2_pane_g2

0x0001,

0xf90a,	// (0x000a9bd3) main_vded2_pane_g_ParamLimits

0xf90a,	// (0x000a9bd3) main_vded2_pane_g

0x75e5,	// (0x000a18ae) vded2_slider_pane_ParamLimits

0x75e5,	// (0x000a18ae) vded2_slider_pane

0x75f2,	// (0x000a18bb) aid_size_touch_vded2_end

0x75fc,	// (0x000a18c5) aid_size_touch_vded2_playhead

0xdc44,	// (0x000a7f0d) aid_size_touch_vded2_start

0xdc64,	// (0x000a7f2d) vded2_slider_bg_pane

0xdc6d,	// (0x000a7f36) vded2_slider_pane_g1

0xdc76,	// (0x000a7f3f) vded2_slider_pane_g2

0x7604,	// (0x000a18cd) vded2_slider_pane_g3

0x0002,

0xf90f,	// (0x000a9bd8) vded2_slider_pane_g

0xdc7e,	// (0x000a7f47) vded2_slider_bg_pane_g1

0xdc87,	// (0x000a7f50) vded2_slider_bg_pane_g2

0xdc90,	// (0x000a7f59) vded2_slider_bg_pane_g3

0x0002,

0xf916,	// (0x000a9bdf) vded2_slider_bg_pane_g

0x3c8c,	// (0x0009df55) aid_postcard_touch_down_pane_ParamLimits

0x3c8c,	// (0x0009df55) aid_postcard_touch_down_pane

0x3c9c,	// (0x0009df65) aid_postcard_touch_up_pane_ParamLimits

0x3c9c,	// (0x0009df65) aid_postcard_touch_up_pane

0x1082,	// (0x0009b34b) main_blid2_pane

0x43d2,	// (0x0009e69b) popup_blid2_search_window

0x9b14,	// (0x000a3ddd) blid2_gps_pane

0x9b14,	// (0x000a3ddd) blid2_navig_pane

0x9b14,	// (0x000a3ddd) blid2_search_pane

0x9b14,	// (0x000a3ddd) blid2_tripm_pane

0x760d,	// (0x000a18d6) blid2_search_pane_g1_ParamLimits

0x760d,	// (0x000a18d6) blid2_search_pane_g1

0x761d,	// (0x000a18e6) blid2_search_pane_t1_ParamLimits

0x761d,	// (0x000a18e6) blid2_search_pane_t1

0x762f,	// (0x000a18f8) aid_size_cell_blid2_gps_ParamLimits

0x762f,	// (0x000a18f8) aid_size_cell_blid2_gps

0x763f,	// (0x000a1908) blid2_gps_pane_g1_ParamLimits

0x763f,	// (0x000a1908) blid2_gps_pane_g1

0x764b,	// (0x000a1914) grid_blid2_satellite_pane_ParamLimits

0x764b,	// (0x000a1914) grid_blid2_satellite_pane

0x765b,	// (0x000a1924) blid2_navig_pane_g1_ParamLimits

0x765b,	// (0x000a1924) blid2_navig_pane_g1

0x7667,	// (0x000a1930) blid2_navig_pane_t1_ParamLimits

0x7667,	// (0x000a1930) blid2_navig_pane_t1

0x7679,	// (0x000a1942) blid2_navig_pane_t2_ParamLimits

0x7679,	// (0x000a1942) blid2_navig_pane_t2

0x0001,

0xf91d,	// (0x000a9be6) blid2_navig_pane_t_ParamLimits

0xf91d,	// (0x000a9be6) blid2_navig_pane_t

0x768b,	// (0x000a1954) blid2_navig_ring_pane_ParamLimits

0x768b,	// (0x000a1954) blid2_navig_ring_pane

0x769b,	// (0x000a1964) blid2_speed_pane_ParamLimits

0x769b,	// (0x000a1964) blid2_speed_pane

0x76a7,	// (0x000a1970) blid2_tripm_pane_g1_ParamLimits

0x76a7,	// (0x000a1970) blid2_tripm_pane_g1

0x76b7,	// (0x000a1980) blid2_tripm_pane_g2_ParamLimits

0x76b7,	// (0x000a1980) blid2_tripm_pane_g2

0x76c3,	// (0x000a198c) blid2_tripm_pane_g3_ParamLimits

0x76c3,	// (0x000a198c) blid2_tripm_pane_g3

0x76cf,	// (0x000a1998) blid2_tripm_pane_g4_ParamLimits

0x76cf,	// (0x000a1998) blid2_tripm_pane_g4

0x76db,	// (0x000a19a4) blid2_tripm_pane_g5_ParamLimits

0x76db,	// (0x000a19a4) blid2_tripm_pane_g5

0x0005,

0xf922,	// (0x000a9beb) blid2_tripm_pane_g_ParamLimits

0xf922,	// (0x000a9beb) blid2_tripm_pane_g

0x76f7,	// (0x000a19c0) blid2_tripm_pane_t1_ParamLimits

0x76f7,	// (0x000a19c0) blid2_tripm_pane_t1

0x770b,	// (0x000a19d4) blid2_tripm_pane_t2_ParamLimits

0x770b,	// (0x000a19d4) blid2_tripm_pane_t2

0x771d,	// (0x000a19e6) blid2_tripm_pane_t3_ParamLimits

0x771d,	// (0x000a19e6) blid2_tripm_pane_t3

0x0003,

0xf92f,	// (0x000a9bf8) blid2_tripm_pane_t_ParamLimits

0xf92f,	// (0x000a9bf8) blid2_tripm_pane_t

0x774f,	// (0x000a1a18) cell_blid2_satellite_pane_ParamLimits

0x774f,	// (0x000a1a18) cell_blid2_satellite_pane

0x7769,	// (0x000a1a32) cell_blid2_satellite_pane_g1

0xdc99,	// (0x000a7f62) cell_blid2_satellite_pane_t1

0xcc6d,	// (0x000a6f36) blid2_speed_pane_g1

0xdca7,	// (0x000a7f70) blid2_speed_pane_t1

0xdcb5,	// (0x000a7f7e) blid2_speed_pane_t2

0x0001,

0xf938,	// (0x000a9c01) blid2_speed_pane_t

0xcc6d,	// (0x000a6f36) blid2_navig_ring_pane_g1

0x7772,	// (0x000a1a3b) blid2_navig_ring_pane_g2

0x777a,	// (0x000a1a43) blid2_navig_ring_pane_g3

0x7782,	// (0x000a1a4b) blid2_navig_ring_pane_g4

0x778a,	// (0x000a1a53) blid2_navig_ring_pane_g5

0x0004,

0xf93d,	// (0x000a9c06) blid2_navig_ring_pane_g

0x9b14,	// (0x000a3ddd) bg_popup_window_pane_cp011

0xdcc3,	// (0x000a7f8c) popup_blid2_search_window_g1

0xdccb,	// (0x000a7f94) popup_blid2_search_window_t1

0xdcd9,	// (0x000a7fa2) popup_blid2_search_window_t2

0x0001,

0xf948,	// (0x000a9c11) popup_blid2_search_window_t

0xab03,	// (0x000a4dcc) main_browser_pane_g1

0xa7c6,	// (0x000a4a8f) main_browser_pane_ParamLimits

0x43a9,	// (0x0009e672) bg_button_pane_cp011_ParamLimits

0x6706,	// (0x000a09cf) cell_vitu2_function_pane_g1_ParamLimits

0xc859,	// (0x000a6b22) bg_popup_sub_pane_cp22_ParamLimits

0x7068,	// (0x000a1331) input_focus_pane_cp08_ParamLimits

0x707f,	// (0x000a1348) popup_vitu2_query_button_pane_ParamLimits

0x707f,	// (0x000a1348) popup_vitu2_query_button_pane

0x7090,	// (0x000a1359) popup_vitu2_query_input_button_pane

0xd93f,	// (0x000a7c08) popup_vitu2_query_window_g1_ParamLimits

0x709a,	// (0x000a1363) popup_vitu2_query_window_g2_ParamLimits

0xf849,	// (0x000a9b12) popup_vitu2_query_window_g_ParamLimits

0x9b14,	// (0x000a3ddd) bg_button_pane_cp026

0x7792,	// (0x000a1a5b) popup_vitu2_query_input_button_pane_g1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp025

0xdce7,	// (0x000a7fb0) popup_vitu2_query_button_pane_t1

0x4e2a,	// (0x0009f0f3) main_mp3_pane_t6

0x4e3a,	// (0x0009f103) popup_slider_window_cp01

0x6342,	// (0x000a060b) cam4_battery_pane

0x641c,	// (0x000a06e5) cam4_battery_pane_cp02

0x74cf,	// (0x000a1798) cam4_battery_pane_cp01

0x74cf,	// (0x000a1798) cam4_battery_pane_cp03

0xdc4c,	// (0x000a7f15) cam4_battery_pane_g1

0xcc6d,	// (0x000a6f36) cam4_battery_pane_g2

0x0001,

0xf94d,	// (0x000a9c16) cam4_battery_pane_g

0xcb2d,	// (0x000a6df6) popup_blid_sat_info2_window_t11

0xb24f,	// (0x000a5518) aid_size_touch_mv_arrow_left_ParamLimits

0xb27a,	// (0x000a5543) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d8,	// (0x000a55a1) navi_pane_g1_ParamLimits

0xb2e4,	// (0x000a55ad) navi_pane_g2_ParamLimits

0xb312,	// (0x000a55db) navi_pane_g3_ParamLimits

0x014a,	// (0x0009a413) navi_pane_g_ParamLimits

0x36b9,	// (0x0009d982) navi_pane_mv_t1_ParamLimits

0x58f5,	// (0x0009fbbe) grid_imed_effect_pane_ParamLimits

0x1fce,	// (0x0009c297) aid_placing_vt_slider_lsc

0xaa52,	// (0x000a4d1b) aid_placing_vt_slider_prt

0xa474,	// (0x000a473d) bg_tb_trans_pane_cp01_ParamLimits

0xcddb,	// (0x000a70a4) popup_image_details_window_g1_ParamLimits

0xcdee,	// (0x000a70b7) popup_image_details_window_g2_ParamLimits

0xce03,	// (0x000a70cc) popup_image_details_window_g3_ParamLimits

0xce03,	// (0x000a70cc) popup_image_details_window_g3

0x0490,	// (0x0009a759) popup_image_details_window_g_ParamLimits

0xce17,	// (0x000a70e0) popup_image_details_window_t1_ParamLimits

0xce29,	// (0x000a70f2) popup_image_details_window_t2_ParamLimits

0xce42,	// (0x000a710b) popup_image_details_window_t3_ParamLimits

0xce56,	// (0x000a711f) popup_image_details_window_t4_ParamLimits

0xce71,	// (0x000a713a) popup_image_details_window_t5_ParamLimits

0x0497,	// (0x0009a760) popup_image_details_window_t_ParamLimits

0x73ef,	// (0x000a16b8) cl_header_name_pane_ParamLimits

0x73ef,	// (0x000a16b8) cl_header_name_pane

0x779a,	// (0x000a1a63) cl_header_name_pane_t1_ParamLimits

0x779a,	// (0x000a1a63) cl_header_name_pane_t1

0x77b1,	// (0x000a1a7a) cl_header_name_pane_t2_ParamLimits

0x77b1,	// (0x000a1a7a) cl_header_name_pane_t2

0x77db,	// (0x000a1aa4) cl_header_name_pane_t3_ParamLimits

0x77db,	// (0x000a1aa4) cl_header_name_pane_t3

0x0002,

0xf952,	// (0x000a9c1b) cl_header_name_pane_t_ParamLimits

0xf952,	// (0x000a9c1b) cl_header_name_pane_t

0xb3a1,	// (0x000a566a) navi_pane_mv_g2_ParamLimits

0xd67e,	// (0x000a7947) field_vitu2_entry_pane_g1_ParamLimits

0xd68a,	// (0x000a7953) field_vitu2_entry_pane_g2_ParamLimits

0xd696,	// (0x000a795f) field_vitu2_entry_pane_g3_ParamLimits

0xd696,	// (0x000a795f) field_vitu2_entry_pane_g3

0x0693,	// (0x0009a95c) field_vitu2_entry_pane_g_ParamLimits

0x669a,	// (0x000a0963) cell_vitu2_itu_pane_g1_ParamLimits

0x66ac,	// (0x000a0975) cell_vitu2_itu_pane_g2_ParamLimits

0x66ac,	// (0x000a0975) cell_vitu2_itu_pane_g2

0x0001,

0xf75b,	// (0x000a9a24) cell_vitu2_itu_pane_g_ParamLimits

0xf75b,	// (0x000a9a24) cell_vitu2_itu_pane_g

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp05_ParamLimits

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp05

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp03

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp04

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp10_ParamLimits

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp10

0x7391,	// (0x000a165a) bg_vkb2_func_pane_cp08

0x7377,	// (0x000a1640) bg_vkb2_func_pane_cp06

0x7385,	// (0x000a164e) bg_vkb2_func_pane_cp07

0xdbdd,	// (0x000a7ea6) bg_vkb2_func_pane_cp11_ParamLimits

0xdbdd,	// (0x000a7ea6) bg_vkb2_func_pane_cp11

0xdbf2,	// (0x000a7ebb) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf2,	// (0x000a7ebb) bg_vkb2_func_pane_cp12

0x9b14,	// (0x000a3ddd) bg_vkb2_func_pane_cp09

0xd6b6,	// (0x000a797f) bg_vkb2_func_pane_g1

0xac14,	// (0x000a4edd) bg_vkb2_func_pane_g2

0xd6be,	// (0x000a7987) bg_vkb2_func_pane_g3

0xd6c6,	// (0x000a798f) bg_vkb2_func_pane_g4

0xd904,	// (0x000a7bcd) bg_vkb2_func_pane_g5

0xd6de,	// (0x000a79a7) bg_vkb2_func_pane_g6

0xd6e6,	// (0x000a79af) bg_vkb2_func_pane_g7

0xd6d6,	// (0x000a799f) bg_vkb2_func_pane_g8

0xabf4,	// (0x000a4ebd) bg_vkb2_func_pane_g9

0x0008,

0xf959,	// (0x000a9c22) bg_vkb2_func_pane_g

0x76e9,	// (0x000a19b2) blid2_tripm_pane_g6_ParamLimits

0x76e9,	// (0x000a19b2) blid2_tripm_pane_g6

0xd520,	// (0x000a77e9) mp4_progress_pane_g1

0x7743,	// (0x000a1a0c) blid2_tripm_values_pane_ParamLimits

0x7743,	// (0x000a1a0c) blid2_tripm_values_pane

0x7800,	// (0x000a1ac9) blid2_tripm_values_pane_t1

0x780e,	// (0x000a1ad7) blid2_tripm_values_pane_t2

0x781c,	// (0x000a1ae5) blid2_tripm_values_pane_t3

0x782a,	// (0x000a1af3) blid2_tripm_values_pane_t4

0x7838,	// (0x000a1b01) blid2_tripm_values_pane_t5

0x7846,	// (0x000a1b0f) blid2_tripm_values_pane_t6

0x7854,	// (0x000a1b1d) blid2_tripm_values_pane_t7

0x7862,	// (0x000a1b2b) blid2_tripm_values_pane_t8

0x7870,	// (0x000a1b39) blid2_tripm_values_pane_t9

0x0008,

0xf96c,	// (0x000a9c35) blid2_tripm_values_pane_t

0x200e,	// (0x0009c2d7) call_video_pane_t1_ParamLimits

0x202f,	// (0x0009c2f8) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a9537) call_video_pane_t_ParamLimits

0x3bd6,	// (0x0009de9f) msg_header_pane_g1_ParamLimits

0xb589,	// (0x000a5852) msg_header_pane_g2_ParamLimits

0xb589,	// (0x000a5852) msg_header_pane_g2

0x0001,

0xf45d,	// (0x000a9726) msg_header_pane_g_ParamLimits

0xf45d,	// (0x000a9726) msg_header_pane_g

0xa7c6,	// (0x000a4a8f) main_clock2_pane_ParamLimits

0x568a,	// (0x0009f953) grid_clock2_toolbar_pane_ParamLimits

0x568a,	// (0x0009f953) grid_clock2_toolbar_pane

0x568a,	// (0x0009f953) listscroll_clock2_pane_ParamLimits

0x568a,	// (0x0009f953) listscroll_clock2_pane

0x5732,	// (0x0009f9fb) main_clock2_pane_t3_ParamLimits

0x5732,	// (0x0009f9fb) main_clock2_pane_t3

0x5744,	// (0x0009fa0d) main_clock2_pane_t4_ParamLimits

0x5744,	// (0x0009fa0d) main_clock2_pane_t4

0xdcf5,	// (0x000a7fbe) cell_clock2_toolbar_pane

0xdcfd,	// (0x000a7fc6) cell_clock2_toolbar_pane_cp01

0xdcfd,	// (0x000a7fc6) cell_clock2_toolbar_pane_cp02

0xdd05,	// (0x000a7fce) cell_clock2_toolbar_pane_cp03

0xdd0d,	// (0x000a7fd6) list_clock2_pane

0xb1d4,	// (0x000a549d) scroll_pane_cp10

0xdd15,	// (0x000a7fde) list_single_clock2_pane_ParamLimits

0xdd15,	// (0x000a7fde) list_single_clock2_pane

0xa9bb,	// (0x000a4c84) list_highlight_pane_cp08

0xdd22,	// (0x000a7feb) list_single_clock2_pane_t1

0xdd30,	// (0x000a7ff9) list_single_clock2_pane_t2

0x0001,

0xf97f,	// (0x000a9c48) list_single_clock2_pane_t

0x9b14,	// (0x000a3ddd) bg_button_pane_cp10

0xdd3e,	// (0x000a8007) cell_clock2_toolbar_pane_g1

0x3bfa,	// (0x0009dec3) aid_main_viewer_pane_g1_ParamLimits

0x3bfa,	// (0x0009dec3) aid_main_viewer_pane_g1

0x3c06,	// (0x0009decf) aid_main_viewer_pane_g2_ParamLimits

0x3c06,	// (0x0009decf) aid_main_viewer_pane_g2

0x3c12,	// (0x0009dedb) aid_main_viewer_pane_g3_ParamLimits

0x3c12,	// (0x0009dedb) aid_main_viewer_pane_g3

0x3c23,	// (0x0009deec) aid_main_viewer_pane_g4_ParamLimits

0x3c23,	// (0x0009deec) aid_main_viewer_pane_g4

0x0003,

0xf46e,	// (0x000a9737) aid_main_viewer_pane_g_ParamLimits

0xf46e,	// (0x000a9737) aid_main_viewer_pane_g

0x439c,	// (0x0009e665) main_calc_pane_ParamLimits

0x43b7,	// (0x0009e680) main_dialer2_pane_ParamLimits

0x1082,	// (0x0009b34b) main_cam6_pane

0x1082,	// (0x0009b34b) main_vid6_pane

0x5696,	// (0x0009f95f) listscroll_gen_pane_cp06_ParamLimits

0x5696,	// (0x0009f95f) listscroll_gen_pane_cp06

0x5756,	// (0x0009fa1f) main_clock2_pane_t5_ParamLimits

0x5756,	// (0x0009fa1f) main_clock2_pane_t5

0x579f,	// (0x0009fa68) aid_call2_pane_cp10_ParamLimits

0x57b1,	// (0x0009fa7a) aid_call_pane_cp10_ParamLimits

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57c3,	// (0x0009fa8c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57c3,	// (0x0009fa8c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb243,	// (0x000a550c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf66b,	// (0x000a9934) popup_clock_analogue_window_cp10_g_ParamLimits

0x57d5,	// (0x0009fa9e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fa5,	// (0x000a026e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fa5,	// (0x000a026e) cell_dialer2_keypad_pane_g2

0x0001,

0xf6f5,	// (0x000a99be) cell_dialer2_keypad_pane_g_ParamLimits

0xf6f5,	// (0x000a99be) cell_dialer2_keypad_pane_g

0x5fc1,	// (0x000a028a) cell_dialer2_keypad_pane_t1

0x69d1,	// (0x000a0c9a) main_cset_text2_pane_ParamLimits

0x69d1,	// (0x000a0c9a) main_cset_text2_pane

0xdb45,	// (0x000a7e0e) area_vitu2_query_pane_g1_ParamLimits

0x7316,	// (0x000a15df) area_vitu2_query_pane_g2_ParamLimits

0xf89c,	// (0x000a9b65) area_vitu2_query_pane_g_ParamLimits

0x9fc6,	// (0x000a428f) area_vitu2_query_pane_t7_ParamLimits

0x9fc6,	// (0x000a428f) area_vitu2_query_pane_t7

0x7377,	// (0x000a1640) bg_button_pane_cp018_ParamLimits

0x7385,	// (0x000a164e) bg_button_pane_cp021_ParamLimits

0x7391,	// (0x000a165a) bg_button_pane_cp022_ParamLimits

0x7391,	// (0x000a165a) bg_vkb2_func_pane_cp08_ParamLimits

0x7377,	// (0x000a1640) bg_vkb2_func_pane_cp06_ParamLimits

0x7385,	// (0x000a164e) bg_vkb2_func_pane_cp07_ParamLimits

0x73a2,	// (0x000a166b) input_focus_pane_cp09_ParamLimits

0x787e,	// (0x000a1b47) cam6_autofocus_pane_ParamLimits

0x787e,	// (0x000a1b47) cam6_autofocus_pane

0x78a0,	// (0x000a1b69) cam6_image_uncrop_pane_ParamLimits

0x78a0,	// (0x000a1b69) cam6_image_uncrop_pane

0x78cd,	// (0x000a1b96) cam6_indi_pane_ParamLimits

0x78cd,	// (0x000a1b96) cam6_indi_pane

0x78e7,	// (0x000a1bb0) cam6_mode_pane_ParamLimits

0x78e7,	// (0x000a1bb0) cam6_mode_pane

0x78fb,	// (0x000a1bc4) cam6_timer_pane_ParamLimits

0x78fb,	// (0x000a1bc4) cam6_timer_pane

0x790c,	// (0x000a1bd5) cam6_zoom_pane_ParamLimits

0x790c,	// (0x000a1bd5) cam6_zoom_pane

0x7924,	// (0x000a1bed) cam6_mode_pane_g1_ParamLimits

0x7924,	// (0x000a1bed) cam6_mode_pane_g1

0x7930,	// (0x000a1bf9) cam6_mode_pane_g2_ParamLimits

0x7930,	// (0x000a1bf9) cam6_mode_pane_g2

0x793c,	// (0x000a1c05) cam6_mode_pane_g3_ParamLimits

0x793c,	// (0x000a1c05) cam6_mode_pane_g3

0x7948,	// (0x000a1c11) cam6_mode_pane_g4_ParamLimits

0x7948,	// (0x000a1c11) cam6_mode_pane_g4

0x0003,

0xf984,	// (0x000a9c4d) cam6_mode_pane_g_ParamLimits

0xf984,	// (0x000a9c4d) cam6_mode_pane_g

0xdc56,	// (0x000a7f1f) bg_tb_trans_pane_cp08_ParamLimits

0xdc56,	// (0x000a7f1f) bg_tb_trans_pane_cp08

0xdd46,	// (0x000a800f) cam6_battery_pane_ParamLimits

0xdd46,	// (0x000a800f) cam6_battery_pane

0xdd5c,	// (0x000a8025) cam6_indi_pane_g1_ParamLimits

0xdd5c,	// (0x000a8025) cam6_indi_pane_g1

0xdd6e,	// (0x000a8037) cam6_indi_pane_g2_ParamLimits

0xdd6e,	// (0x000a8037) cam6_indi_pane_g2

0xdd80,	// (0x000a8049) cam6_indi_pane_g3_ParamLimits

0xdd80,	// (0x000a8049) cam6_indi_pane_g3

0x0002,

0x08d8,	// (0x0009aba1) cam6_indi_pane_g_ParamLimits

0x08d8,	// (0x0009aba1) cam6_indi_pane_g

0xdd92,	// (0x000a805b) cam6_indi_pane_t1_ParamLimits

0xdd92,	// (0x000a805b) cam6_indi_pane_t1

0x6498,	// (0x000a0761) cam6_autofocus_pane_g1

0x6490,	// (0x000a0759) cam6_autofocus_pane_g2

0x64a8,	// (0x000a0771) cam6_autofocus_pane_g3

0x64a0,	// (0x000a0769) cam6_autofocus_pane_g4

0x0003,

0xf98d,	// (0x000a9c56) cam6_autofocus_pane_g

0xddb8,	// (0x000a8081) cam6_timer_pane_g1

0xddc0,	// (0x000a8089) cam6_timer_pane_t1

0xddce,	// (0x000a8097) cam6_zoom_cont_pane

0xddd6,	// (0x000a809f) cam6_zoom_pane_g1

0xddde,	// (0x000a80a7) cam6_zoom_pane_g2

0x7954,	// (0x000a1c1d) cam6_zoom_pane_g3

0x0002,

0xf996,	// (0x000a9c5f) cam6_zoom_pane_g

0xcc6d,	// (0x000a6f36) cam6_battery_pane_g1

0xcc6d,	// (0x000a6f36) cam6_battery_pane_g2

0x0001,

0x0454,	// (0x0009a71d) cam6_battery_pane_g

0xdde6,	// (0x000a80af) cam6_zoom_cont_pane_g1

0xddef,	// (0x000a80b8) cam6_zoom_cont_pane_g2

0xddf8,	// (0x000a80c1) cam6_zoom_cont_pane_g3

0x0002,

0x08ef,	// (0x0009abb8) cam6_zoom_cont_pane_g

0x7971,	// (0x000a1c3a) cam6_mode_pane_cp_ParamLimits

0x7971,	// (0x000a1c3a) cam6_mode_pane_cp

0x7985,	// (0x000a1c4e) cam6_zoom_pane_cp_ParamLimits

0x7985,	// (0x000a1c4e) cam6_zoom_pane_cp

0x799d,	// (0x000a1c66) vid6_image_uncrop_cif_pane_ParamLimits

0x799d,	// (0x000a1c66) vid6_image_uncrop_cif_pane

0x79c9,	// (0x000a1c92) vid6_image_uncrop_nhd_pane_ParamLimits

0x79c9,	// (0x000a1c92) vid6_image_uncrop_nhd_pane

0x79e6,	// (0x000a1caf) vid6_image_uncrop_vga_pane_ParamLimits

0x79e6,	// (0x000a1caf) vid6_image_uncrop_vga_pane

0x7a05,	// (0x000a1cce) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a05,	// (0x000a1cce) vid6_image_uncrop_wvga_pane

0x7a22,	// (0x000a1ceb) vid6_indi_pane_ParamLimits

0x7a22,	// (0x000a1ceb) vid6_indi_pane

0xdc56,	// (0x000a7f1f) bg_tb_trans_pane_cp09_ParamLimits

0xdc56,	// (0x000a7f1f) bg_tb_trans_pane_cp09

0xde10,	// (0x000a80d9) cam6_battery_pane_cp_ParamLimits

0xde10,	// (0x000a80d9) cam6_battery_pane_cp

0xde1c,	// (0x000a80e5) vid6_indi_pane_g1_ParamLimits

0xde1c,	// (0x000a80e5) vid6_indi_pane_g1

0xde2e,	// (0x000a80f7) vid6_indi_pane_g2_ParamLimits

0xde2e,	// (0x000a80f7) vid6_indi_pane_g2

0xde40,	// (0x000a8109) vid6_indi_pane_g3_ParamLimits

0xde40,	// (0x000a8109) vid6_indi_pane_g3

0xde55,	// (0x000a811e) vid6_indi_pane_g4_ParamLimits

0xde55,	// (0x000a811e) vid6_indi_pane_g4

0xde6a,	// (0x000a8133) vid6_indi_pane_g5_ParamLimits

0xde6a,	// (0x000a8133) vid6_indi_pane_g5

0x0004,

0x08f6,	// (0x0009abbf) vid6_indi_pane_g_ParamLimits

0x08f6,	// (0x0009abbf) vid6_indi_pane_g

0xde84,	// (0x000a814d) vid6_indi_pane_t1_ParamLimits

0xde84,	// (0x000a814d) vid6_indi_pane_t1

0xde9a,	// (0x000a8163) vid6_indi_pane_t2_ParamLimits

0xde9a,	// (0x000a8163) vid6_indi_pane_t2

0xdec2,	// (0x000a818b) vid6_indi_pane_t3_ParamLimits

0xdec2,	// (0x000a818b) vid6_indi_pane_t3

0xdeea,	// (0x000a81b3) vid6_indi_pane_t4_ParamLimits

0xdeea,	// (0x000a81b3) vid6_indi_pane_t4

0x0003,

0x0901,	// (0x0009abca) vid6_indi_pane_t_ParamLimits

0x0901,	// (0x0009abca) vid6_indi_pane_t

0xdf0e,	// (0x000a81d7) wait_bar_pane_cp08

0x7a45,	// (0x000a1d0e) main_cset_text2_pane_t1_ParamLimits

0x7a45,	// (0x000a1d0e) main_cset_text2_pane_t1

0x795c,	// (0x000a1c25) listscroll_gen_pane_cp06_t1_ParamLimits

0x795c,	// (0x000a1c25) listscroll_gen_pane_cp06_t1

0x1082,	// (0x0009b34b) main_cam6_set_pane

0x6334,	// (0x000a05fd) bg_tb_trans_pane_cp06_ParamLimits

0x634a,	// (0x000a0613) cam4_indicators_pane_g1_ParamLimits

0x635b,	// (0x000a0624) cam4_indicators_pane_g2_ParamLimits

0xf732,	// (0x000a99fb) cam4_indicators_pane_g_ParamLimits

0x6373,	// (0x000a063c) cam4_indicators_pane_t1_ParamLimits

0x43a9,	// (0x0009e672) bg_tb_trans_pane_cp07_ParamLimits

0x6424,	// (0x000a06ed) vid4_indicators_pane_g1_ParamLimits

0x6438,	// (0x000a0701) vid4_indicators_pane_g2_ParamLimits

0x644c,	// (0x000a0715) vid4_indicators_pane_g3_ParamLimits

0x645d,	// (0x000a0726) vid4_indicators_pane_g4_ParamLimits

0xf744,	// (0x000a9a0d) vid4_indicators_pane_g_ParamLimits

0x6479,	// (0x000a0742) vid4_indicators_pane_t1_ParamLimits

0x74d7,	// (0x000a17a0) vid4_progress_pane_g1_ParamLimits

0x74e7,	// (0x000a17b0) vid4_progress_pane_g2_ParamLimits

0x74f7,	// (0x000a17c0) vid4_progress_pane_g3_ParamLimits

0x7509,	// (0x000a17d2) vid4_progress_pane_g4_ParamLimits

0xf8e7,	// (0x000a9bb0) vid4_progress_pane_g_ParamLimits

0x7521,	// (0x000a17ea) vid4_progress_pane_t1_ParamLimits

0x7537,	// (0x000a1800) vid4_progress_pane_t2_ParamLimits

0x754c,	// (0x000a1815) vid4_progress_pane_t3_ParamLimits

0xf8f2,	// (0x000a9bbb) vid4_progress_pane_t_ParamLimits

0x7562,	// (0x000a182b) wait_bar_pane_cp07_ParamLimits

0x7a7c,	// (0x000a1d45) main_cam6_set_pane_g2_ParamLimits

0x7a7c,	// (0x000a1d45) main_cam6_set_pane_g2

0x7a88,	// (0x000a1d51) main_cset6_listscroll_pane_ParamLimits

0x7a88,	// (0x000a1d51) main_cset6_listscroll_pane

0x7ab3,	// (0x000a1d7c) main_cset6_slider_pane_ParamLimits

0x7ab3,	// (0x000a1d7c) main_cset6_slider_pane

0x7abf,	// (0x000a1d88) main_cset6_text2_pane_ParamLimits

0x7abf,	// (0x000a1d88) main_cset6_text2_pane

0xdf1d,	// (0x000a81e6) main_cset6_text_pane

0xdf25,	// (0x000a81ee) main_cset_list_pane_copy1_ParamLimits

0xdf25,	// (0x000a81ee) main_cset_list_pane_copy1

0xdf35,	// (0x000a81fe) scroll_pane_cp028_copy1

0x7ad2,	// (0x000a1d9b) cset_list_set_pane_copy1

0x7ae8,	// (0x000a1db1) aid_position_infowindow_above_copy1

0x7af0,	// (0x000a1db9) aid_position_infowindow_below_copy1

0xa199,	// (0x000a4462) cset_list_set_pane_g1_copy1

0x9ff2,	// (0x000a42bb) cset_list_set_pane_g3_copy1_ParamLimits

0x9ff2,	// (0x000a42bb) cset_list_set_pane_g3_copy1

0xa001,	// (0x000a42ca) cset_list_set_pane_t1_copy1_ParamLimits

0xa001,	// (0x000a42ca) cset_list_set_pane_t1_copy1

0xa474,	// (0x000a473d) list_highlight_pane_cp021_copy1_ParamLimits

0xa474,	// (0x000a473d) list_highlight_pane_cp021_copy1

0xdf3e,	// (0x000a8207) cset6_slider_pane_ParamLimits

0xdf3e,	// (0x000a8207) cset6_slider_pane

0xdf6a,	// (0x000a8233) main_cset6_slider_pane_g1_ParamLimits

0xdf6a,	// (0x000a8233) main_cset6_slider_pane_g1

0x7af8,	// (0x000a1dc1) main_cset6_slider_pane_g2_ParamLimits

0x7af8,	// (0x000a1dc1) main_cset6_slider_pane_g2

0xdf92,	// (0x000a825b) main_cset6_slider_pane_g3_ParamLimits

0xdf92,	// (0x000a825b) main_cset6_slider_pane_g3

0x7b20,	// (0x000a1de9) main_cset6_slider_pane_g4_ParamLimits

0x7b20,	// (0x000a1de9) main_cset6_slider_pane_g4

0x7b2c,	// (0x000a1df5) main_cset6_slider_pane_g5_ParamLimits

0x7b2c,	// (0x000a1df5) main_cset6_slider_pane_g5

0xd7e5,	// (0x000a7aae) main_cset6_slider_pane_g7_ParamLimits

0xd7e5,	// (0x000a7aae) main_cset6_slider_pane_g7

0xd7f1,	// (0x000a7aba) main_cset6_slider_pane_g8_ParamLimits

0xd7f1,	// (0x000a7aba) main_cset6_slider_pane_g8

0x7b3a,	// (0x000a1e03) main_cset6_slider_pane_g9_ParamLimits

0x7b3a,	// (0x000a1e03) main_cset6_slider_pane_g9

0x7b46,	// (0x000a1e0f) main_cset6_slider_pane_g10_ParamLimits

0x7b46,	// (0x000a1e0f) main_cset6_slider_pane_g10

0x7b52,	// (0x000a1e1b) main_cset6_slider_pane_g11_ParamLimits

0x7b52,	// (0x000a1e1b) main_cset6_slider_pane_g11

0x7b5e,	// (0x000a1e27) main_cset6_slider_pane_g12_ParamLimits

0x7b5e,	// (0x000a1e27) main_cset6_slider_pane_g12

0xd870,	// (0x000a7b39) main_cset6_slider_pane_g13_ParamLimits

0xd870,	// (0x000a7b39) main_cset6_slider_pane_g13

0xd87c,	// (0x000a7b45) main_cset6_slider_pane_g14_ParamLimits

0xd87c,	// (0x000a7b45) main_cset6_slider_pane_g14

0x7b6a,	// (0x000a1e33) main_cset6_slider_pane_g15_ParamLimits

0x7b6a,	// (0x000a1e33) main_cset6_slider_pane_g15

0x7b82,	// (0x000a1e4b) main_cset6_slider_pane_g16_ParamLimits

0x7b82,	// (0x000a1e4b) main_cset6_slider_pane_g16

0x7b90,	// (0x000a1e59) main_cset6_slider_pane_g17_ParamLimits

0x7b90,	// (0x000a1e59) main_cset6_slider_pane_g17

0x0011,

0xf99d,	// (0x000a9c66) main_cset6_slider_pane_g_ParamLimits

0xf99d,	// (0x000a9c66) main_cset6_slider_pane_g

0xdfaa,	// (0x000a8273) main_cset6_slider_pane_t1_ParamLimits

0xdfaa,	// (0x000a8273) main_cset6_slider_pane_t1

0x7baa,	// (0x000a1e73) main_cset6_slider_pane_t2_ParamLimits

0x7baa,	// (0x000a1e73) main_cset6_slider_pane_t2

0x7bd5,	// (0x000a1e9e) main_cset6_slider_pane_t3_ParamLimits

0x7bd5,	// (0x000a1e9e) main_cset6_slider_pane_t3

0x7c00,	// (0x000a1ec9) main_cset6_slider_pane_t4_ParamLimits

0x7c00,	// (0x000a1ec9) main_cset6_slider_pane_t4

0x7c2b,	// (0x000a1ef4) main_cset6_slider_pane_t5_ParamLimits

0x7c2b,	// (0x000a1ef4) main_cset6_slider_pane_t5

0xdfeb,	// (0x000a82b4) main_cset6_slider_pane_t7_ParamLimits

0xdfeb,	// (0x000a82b4) main_cset6_slider_pane_t7

0x7c58,	// (0x000a1f21) main_cset6_slider_pane_t8_ParamLimits

0x7c58,	// (0x000a1f21) main_cset6_slider_pane_t8

0x7c7c,	// (0x000a1f45) main_cset6_slider_pane_t9_ParamLimits

0x7c7c,	// (0x000a1f45) main_cset6_slider_pane_t9

0x7ca0,	// (0x000a1f69) main_cset6_slider_pane_t10_ParamLimits

0x7ca0,	// (0x000a1f69) main_cset6_slider_pane_t10

0x7cc4,	// (0x000a1f8d) main_cset6_slider_pane_t11_ParamLimits

0x7cc4,	// (0x000a1f8d) main_cset6_slider_pane_t11

0xe021,	// (0x000a82ea) main_cset6_slider_pane_t14_ParamLimits

0xe021,	// (0x000a82ea) main_cset6_slider_pane_t14

0xe05a,	// (0x000a8323) main_cset6_slider_pane_t15_ParamLimits

0xe05a,	// (0x000a8323) main_cset6_slider_pane_t15

0x000b,

0xf9c2,	// (0x000a9c8b) main_cset6_slider_pane_t_ParamLimits

0xf9c2,	// (0x000a9c8b) main_cset6_slider_pane_t

0xd43d,	// (0x000a7706) cset_slider_pane_g1_copy1

0xda57,	// (0x000a7d20) cset_slider_pane_g2_copy1

0xda60,	// (0x000a7d29) cset_slider_pane_g3_copy1

0x9b14,	// (0x000a3ddd) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x000a835c) main_cset_text_pane_g1_copy1

0xd953,	// (0x000a7c1c) main_cset_text_pane_t1_copy1

0xd961,	// (0x000a7c2a) main_cset_text_pane_t2_copy1

0xd96f,	// (0x000a7c38) main_cset_text_pane_t3_copy1

0xd97d,	// (0x000a7c46) main_cset_text_pane_t4_copy1

0xd98b,	// (0x000a7c54) main_cset_text_pane_t5_copy1

0xe09b,	// (0x000a8364) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x000a8372) main_cset_text_pane_t7_copy1

0x7db9,	// (0x000a2082) main_cset_text2_pane_t1_copy1

0x43a9,	// (0x0009e672) main_ncimui_pane

0x4408,	// (0x0009e6d1) popup_query_ncimui_window_ParamLimits

0x4408,	// (0x0009e6d1) popup_query_ncimui_window

0xa185,	// (0x000a444e) field_cale_ev2_pane_g4_ParamLimits

0xa185,	// (0x000a444e) field_cale_ev2_pane_g4

0x5cc5,	// (0x0009ff8e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cc5,	// (0x0009ff8e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6d5,	// (0x000a999e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6d5,	// (0x000a999e) cell_video_dialer_keypad_pane_g

0x5cdd,	// (0x0009ffa6) cell_video_dialer_keypad_pane_t1

0x9b14,	// (0x000a3ddd) bg_popup_window_pane_cp012

0xb0bf,	// (0x000a5388) heading_pane_cp06

0xe0d5,	// (0x000a839e) ncim_query_content_pane

0x9b14,	// (0x000a3ddd) bg_popup_heading_pane_cp01

0xe0dd,	// (0x000a83a6) ncim_heading_pane_t1

0xe0eb,	// (0x000a83b4) ncim_indicator_popup_pane

0xe0fd,	// (0x000a83c6) ncim_query_button_pane

0xe111,	// (0x000a83da) ncim_query_content_pane_t1

0xe123,	// (0x000a83ec) ncim_query_content_pane_t2

0x0005,

0xfa06,	// (0x000a9ccf) ncim_query_content_pane_t

0xe15d,	// (0x000a8426) ncim_query_list_pane

0xe16f,	// (0x000a8438) ncim_query_popup_pane

0xe0eb,	// (0x000a83b4) ncim_indicator_popup_pane_ParamLimits

0x7f0d,	// (0x000a21d6) ncim_query_content_pane_g1_ParamLimits

0x7f0d,	// (0x000a21d6) ncim_query_content_pane_g1

0xe111,	// (0x000a83da) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x000a83ec) ncim_query_content_pane_t2_ParamLimits

0x7f19,	// (0x000a21e2) ncim_query_content_pane_t3_ParamLimits

0x7f19,	// (0x000a21e2) ncim_query_content_pane_t3

0x7f36,	// (0x000a21ff) ncim_query_content_pane_t4_ParamLimits

0x7f36,	// (0x000a21ff) ncim_query_content_pane_t4

0x7f53,	// (0x000a221c) ncim_query_content_pane_t5_ParamLimits

0x7f53,	// (0x000a221c) ncim_query_content_pane_t5

0xe135,	// (0x000a83fe) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x000a83fe) ncim_query_content_pane_t6

0xfa06,	// (0x000a9ccf) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x000a8426) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x000a8438) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x000a844c) wait_bar_pane_cp04

0x9b14,	// (0x000a3ddd) input_focus_pane_cp011

0xe18b,	// (0x000a8454) ncim_query_popup_pane_t1

0xe199,	// (0x000a8462) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x000a8462) ncim_list_query_list_pane

0x9b14,	// (0x000a3ddd) bg_button_pane_cp027

0xe1a6,	// (0x000a846f) ncim_query_button_pane_g1

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp012

0xe1b0,	// (0x000a8479) ncim_list_query_list_pane_g1

0xe1b8,	// (0x000a8481) ncim_list_query_list_pane_t1

0x6367,	// (0x000a0630) cam4_indicators_pane_g3_ParamLimits

0x6367,	// (0x000a0630) cam4_indicators_pane_g3

0x6469,	// (0x000a0732) vid4_indicators_pane_g5_ParamLimits

0x6469,	// (0x000a0732) vid4_indicators_pane_g5

0x7515,	// (0x000a17de) vid4_progress_pane_g5_ParamLimits

0x7515,	// (0x000a17de) vid4_progress_pane_g5

0x7df9,	// (0x000a20c2) main_ncimui_pane_g1

0x7e61,	// (0x000a212a) ncimui_group_query_pane_ParamLimits

0x7e61,	// (0x000a212a) ncimui_group_query_pane

0x7ea9,	// (0x000a2172) ncimui_list_pane_ParamLimits

0x7ea9,	// (0x000a2172) ncimui_list_pane

0x7ed0,	// (0x000a2199) ncimui_text_pane_ParamLimits

0x7ed0,	// (0x000a2199) ncimui_text_pane

0x7f70,	// (0x000a2239) ncimui_text_pane_t1_ParamLimits

0x7f70,	// (0x000a2239) ncimui_text_pane_t1

0xe1c6,	// (0x000a848f) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x000a848f) ncimui_list_single_graphic_pane

0x7f8f,	// (0x000a2258) ncimui_query_pane_ParamLimits

0x7f8f,	// (0x000a2258) ncimui_query_pane

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp013

0xe1d6,	// (0x000a849f) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x000a84ad) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x000a84b5) ncim_query_button_pane_cp01

0xe1f8,	// (0x000a84c1) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x000a84c1) ncim_query_entry_pane

0xe20b,	// (0x000a84d4) ncimui_query_pane_g1

0xe217,	// (0x000a84e0) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x000a84e0) ncimui_query_pane_t1

0xa474,	// (0x000a473d) input_focus_pane_cp012

0xe230,	// (0x000a84f9) ncim_query_entry_pane_t1

0xa7c6,	// (0x000a4a8f) main_im_pane_ParamLimits

0x43a9,	// (0x0009e672) main_mobtv_pane_ParamLimits

0x43a9,	// (0x0009e672) main_mobtv_pane

0x7b9e,	// (0x000a1e67) main_cset6_slider_pane_g18_ParamLimits

0x7b9e,	// (0x000a1e67) main_cset6_slider_pane_g18

0xdf9e,	// (0x000a8267) main_cset6_slider_pane_g19_ParamLimits

0xdf9e,	// (0x000a8267) main_cset6_slider_pane_g19

0xd696,	// (0x000a795f) bg_main_mobtv_pane_ParamLimits

0xd696,	// (0x000a795f) bg_main_mobtv_pane

0x7fa2,	// (0x000a226b) main_mobtv_info_pane

0x7fad,	// (0x000a2276) main_mobtv_loading_pane_ParamLimits

0x7fad,	// (0x000a2276) main_mobtv_loading_pane

0xe242,	// (0x000a850b) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x000a8515) main_mobtv_pg_hdr_pane

0x7fba,	// (0x000a2283) main_mobtv_programe_curr_pane_ParamLimits

0x7fba,	// (0x000a2283) main_mobtv_programe_curr_pane

0x7fc7,	// (0x000a2290) main_mobtv_programe_next_pane_ParamLimits

0x7fc7,	// (0x000a2290) main_mobtv_programe_next_pane

0xe255,	// (0x000a851e) popup_mobtv_noti_window

0xcc6d,	// (0x000a6f36) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x000a8526) main_tv_pg_hdr_pane_g2

0xe265,	// (0x000a852e) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x000a8536) main_tv_pg_hdr_pane_g4

0xe275,	// (0x000a853e) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x000a8548) main_tv_pg_hdr_pane_g6

0xe289,	// (0x000a8552) main_tv_pg_hdr_pane_g7

0xe293,	// (0x000a855c) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x000a8566) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x000a8570) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x000a857a) main_tv_pg_hdr_pane_g11

0x000a,

0x0980,	// (0x0009ac49) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x000a8584) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x000a8592) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x000a85a0) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x000a85b0) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x000a85c0) main_tv_pg_hdr_pane_t5

0x0004,

0x0997,	// (0x0009ac60) main_tv_pg_hdr_pane_t

0xe307,	// (0x000a85d0) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x000a85d0) single_mobtv_pg_channel_pane

0xe319,	// (0x000a85e2) single_mobtv_pg_channel_table_pane

0xad17,	// (0x000a4fe0) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x000a85eb) single_tv_pg_channel_pane_g1

0xe32b,	// (0x000a85f4) single_tv_pg_channel_pane_g2

0x0001,

0x09a2,	// (0x0009ac6b) single_tv_pg_channel_pane_g

0xcebb,	// (0x000a7184) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcebb,	// (0x000a7184) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x000a85fd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x000a85fd) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x000a860b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x000a860b) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x000a8617) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x000a8617) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x09a7,	// (0x0009ac70) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x09a7,	// (0x0009ac70) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x000a8623) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x000a8631) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x09ae,	// (0x0009ac77) single_mobtv_pg_channel_thumb_pane_t

0xcc6d,	// (0x000a6f36) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6d,	// (0x000a6f36) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0454,	// (0x0009a71d) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x000a863f) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x000a864d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x09b3,	// (0x0009ac7c) single_mobtv_pg_channel_table_pane_t

0x7fdc,	// (0x000a22a5) main_mobtv_info_pane_g1_ParamLimits

0x7fdc,	// (0x000a22a5) main_mobtv_info_pane_g1

0x7ff8,	// (0x000a22c1) main_mobtv_info_pane_t1_ParamLimits

0x7ff8,	// (0x000a22c1) main_mobtv_info_pane_t1

0x8070,	// (0x000a2339) main_mobtv_info_pane_t2_ParamLimits

0x8070,	// (0x000a2339) main_mobtv_info_pane_t2

0x0002,

0xfa18,	// (0x000a9ce1) main_mobtv_info_pane_t_ParamLimits

0xfa18,	// (0x000a9ce1) main_mobtv_info_pane_t

0x80ff,	// (0x000a23c8) wait_bar_pane_cp05

0x8111,	// (0x000a23da) main_mobtv_loading_pane_g1_ParamLimits

0x8111,	// (0x000a23da) main_mobtv_loading_pane_g1

0x811f,	// (0x000a23e8) main_mobtv_loading_pane_g2_ParamLimits

0x811f,	// (0x000a23e8) main_mobtv_loading_pane_g2

0x812b,	// (0x000a23f4) main_mobtv_loading_pane_g3_ParamLimits

0x812b,	// (0x000a23f4) main_mobtv_loading_pane_g3

0x0002,

0xfa1f,	// (0x000a9ce8) main_mobtv_loading_pane_g_ParamLimits

0xfa1f,	// (0x000a9ce8) main_mobtv_loading_pane_g

0xe392,	// (0x000a865b) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x000a865b) main_mobtv_loading_pane_t1

0xe3aa,	// (0x000a8673) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x000a8673) main_mobtv_loading_pane_t2

0x0001,

0x09cb,	// (0x0009ac94) main_mobtv_loading_pane_t_ParamLimits

0x09cb,	// (0x0009ac94) main_mobtv_loading_pane_t

0x8139,	// (0x000a2402) wait_bar_pane_cp06_ParamLimits

0x8139,	// (0x000a2402) wait_bar_pane_cp06

0xe3ce,	// (0x000a8697) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x000a86a5) main_mobtv_programe_curr_pane_t2

0x0001,

0x09d0,	// (0x0009ac99) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x000a86b3) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x000a86c1) main_mobtv_programe_next_pane_t2

0xe406,	// (0x000a86cf) main_mobtv_programe_next_pane_t3

0x0002,

0x09d5,	// (0x0009ac9e) main_mobtv_programe_next_pane_t

0x9b14,	// (0x000a3ddd) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x000a86dd) popup_mobtv_noti_window_g1

0xe41c,	// (0x000a86e5) popup_mobtv_noti_window_t1

0xe42a,	// (0x000a86f3) popup_mobtv_noti_window_t2

0x0001,

0x09dc,	// (0x0009aca5) popup_mobtv_noti_window_t

0xcc6d,	// (0x000a6f36) bg_popup_mobtv_noti_window_pane_g1

0x1082,	// (0x0009b34b) sc_clock_pane

0x1082,	// (0x0009b34b) main_fs_bigclock_pane

0x7731,	// (0x000a19fa) blid2_tripm_pane_t4_ParamLimits

0x7731,	// (0x000a19fa) blid2_tripm_pane_t4

0x8145,	// (0x000a240e) sc_clock_pane_g1_ParamLimits

0x8145,	// (0x000a240e) sc_clock_pane_g1

0x8153,	// (0x000a241c) sc_clock_pane_t1_ParamLimits

0x8153,	// (0x000a241c) sc_clock_pane_t1

0x8166,	// (0x000a242f) sc_clock_pane_t2_ParamLimits

0x8166,	// (0x000a242f) sc_clock_pane_t2

0x8178,	// (0x000a2441) sc_clock_pane_t3_ParamLimits

0x8178,	// (0x000a2441) sc_clock_pane_t3

0x0004,

0xfa26,	// (0x000a9cef) sc_clock_pane_t_ParamLimits

0xfa26,	// (0x000a9cef) sc_clock_pane_t

0x908a,	// (0x000a3353) main_fs_bigclock_indicator_pane_ParamLimits

0x908a,	// (0x000a3353) main_fs_bigclock_indicator_pane

0x8201,	// (0x000a24ca) main_fs_bigclock_pane_g1_ParamLimits

0x8201,	// (0x000a24ca) main_fs_bigclock_pane_g1

0x9096,	// (0x000a335f) main_fs_bigclock_pane_t1_ParamLimits

0x9096,	// (0x000a335f) main_fs_bigclock_pane_t1

0x90a8,	// (0x000a3371) main_fs_bigclock_pane_t2_ParamLimits

0x90a8,	// (0x000a3371) main_fs_bigclock_pane_t2

0x90bc,	// (0x000a3385) main_fs_bigclock_pane_t3_ParamLimits

0x90bc,	// (0x000a3385) main_fs_bigclock_pane_t3

0x0002,

0xfbb2,	// (0x000a9e7b) main_fs_bigclock_pane_t_ParamLimits

0xfbb2,	// (0x000a9e7b) main_fs_bigclock_pane_t

0xec94,	// (0x000a8f5d) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x000a83ce) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x000a83ce) ncim_query_content_pane_g2

0x0001,

0xfa01,	// (0x000a9cca) ncim_query_content_pane_g_ParamLimits

0xfa01,	// (0x000a9cca) ncim_query_content_pane_g

0x818c,	// (0x000a2455) sc_clock_pane_t4_ParamLimits

0x818c,	// (0x000a2455) sc_clock_pane_t4

0x43a9,	// (0x0009e672) main_radioblah_pane

0xd609,	// (0x000a78d2) cell_call4_button_pane_t1_copy1_ParamLimits

0xd609,	// (0x000a78d2) cell_call4_button_pane_t1_copy1

0x7e13,	// (0x000a20dc) main_ncimui_pane_t1_ParamLimits

0x7e13,	// (0x000a20dc) main_ncimui_pane_t1

0x7e2d,	// (0x000a20f6) main_ncimui_pane_t2_ParamLimits

0x7e2d,	// (0x000a20f6) main_ncimui_pane_t2

0x0002,

0xf9fa,	// (0x000a9cc3) main_ncimui_pane_t_ParamLimits

0xf9fa,	// (0x000a9cc3) main_ncimui_pane_t

0xe56f,	// (0x000a8838) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x000a8838) main_radioblah_anim_pane

0xe580,	// (0x000a8849) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x000a8849) main_radioblah_info_pane

0xe594,	// (0x000a885d) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x000a885d) main_radioblah_pane_t1

0xe5b0,	// (0x000a8879) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x000a8879) main_radioblah_pane_t2

0x0003,

0x0a02,	// (0x0009accb) main_radioblah_pane_t_ParamLimits

0x0a02,	// (0x0009accb) main_radioblah_pane_t

0x8253,	// (0x000a251c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8253,	// (0x000a251c) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x000a88c1) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x000a88c1) main_radioblah_info_pane_t1

0x8298,	// (0x000a2561) main_radioblah_info_pane_t2_ParamLimits

0x8298,	// (0x000a2561) main_radioblah_info_pane_t2

0x0003,

0xfa31,	// (0x000a9cfa) main_radioblah_info_pane_t_ParamLimits

0xfa31,	// (0x000a9cfa) main_radioblah_info_pane_t

0xcc6d,	// (0x000a6f36) main_radioblah_rocker_ctrl_pane_g1

0x8348,	// (0x000a2611) main_radioblah_rocker_ctrl_pane_g2

0x8350,	// (0x000a2619) main_radioblah_rocker_ctrl_pane_g3

0x8358,	// (0x000a2621) main_radioblah_rocker_ctrl_pane_g4

0x8360,	// (0x000a2629) main_radioblah_rocker_ctrl_pane_g5

0x8368,	// (0x000a2631) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa3a,	// (0x000a9d03) main_radioblah_rocker_ctrl_pane_g

0x7db9,	// (0x000a2082) main_cset_text2_pane_t1_copy1_ParamLimits

0x628a,	// (0x000a0553) cam4_image_uncrop_qvga_pane

0x63d9,	// (0x000a06a2) vid4_image_uncrop_qcif_pane

0x78bf,	// (0x000a1b88) cam6_image_uncrop_qvga_pane_ParamLimits

0x78bf,	// (0x000a1b88) cam6_image_uncrop_qvga_pane

0xde00,	// (0x000a80c9) vid6_image_uncrop_qcif_pane_ParamLimits

0xde00,	// (0x000a80c9) vid6_image_uncrop_qcif_pane

0x9b14,	// (0x000a3ddd) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x000a8380) list_cset_text2_pane

0xe0bf,	// (0x000a8388) main_cset6_text2_pane_g1

0xe0c7,	// (0x000a8390) main_cset6_text2_pane_t1

0x8370,	// (0x000a2639) list_cset_text2_pane_t1_ParamLimits

0x8370,	// (0x000a2639) list_cset_text2_pane_t1

0x43a9,	// (0x0009e672) main_radioblah_pane_ParamLimits

0x80eb,	// (0x000a23b4) main_mobtv_info_pane_t3_ParamLimits

0x80eb,	// (0x000a23b4) main_mobtv_info_pane_t3

0x8241,	// (0x000a250a) main_radioblah_pane_g1

0x826c,	// (0x000a2535) main_radioblah_info_pane_g1

0x82ed,	// (0x000a25b6) main_radioblah_info_pane_t3_ParamLimits

0x82ed,	// (0x000a25b6) main_radioblah_info_pane_t3

0x30a9,	// (0x0009d372) highlight_cell_cale_month_pane_ParamLimits

0x30a9,	// (0x0009d372) highlight_cell_cale_month_pane

0x1082,	// (0x0009b34b) main_phob_fisheye_pane

0xcf97,	// (0x000a7260) scroll_pane_cp0031_ParamLimits

0xcf97,	// (0x000a7260) scroll_pane_cp0031

0xdf0e,	// (0x000a81d7) wait_bar_pane_cp08_ParamLimits

0x7ad2,	// (0x000a1d9b) cset_list_set_pane_copy1_ParamLimits

0xe632,	// (0x000a88fb) highlight_cell_cale_month_pane_g1

0x8391,	// (0x000a265a) highlight_cell_cale_month_pane_t1

0xdb99,	// (0x000a7e62) list_gen_pane_cp01

0xd7d0,	// (0x000a7a99) scroll_pane_01

0x839f,	// (0x000a2668) list_single_double_fisheye_pane

0x83a8,	// (0x000a2671) list_double_fisheye_pane_g1_ParamLimits

0x83a8,	// (0x000a2671) list_double_fisheye_pane_g1

0x83b4,	// (0x000a267d) list_double_fisheye_pane_g2_ParamLimits

0x83b4,	// (0x000a267d) list_double_fisheye_pane_g2

0x83c8,	// (0x000a2691) list_double_fisheye_pane_g3_ParamLimits

0x83c8,	// (0x000a2691) list_double_fisheye_pane_g3

0x0004,

0xfa47,	// (0x000a9d10) list_double_fisheye_pane_g_ParamLimits

0xfa47,	// (0x000a9d10) list_double_fisheye_pane_g

0x83f1,	// (0x000a26ba) list_double_fisheye_pane_t1_ParamLimits

0x83f1,	// (0x000a26ba) list_double_fisheye_pane_t1

0x840c,	// (0x000a26d5) list_double_fisheye_pane_t2_ParamLimits

0x840c,	// (0x000a26d5) list_double_fisheye_pane_t2

0x0001,

0xfa52,	// (0x000a9d1b) list_double_fisheye_pane_t_ParamLimits

0xfa52,	// (0x000a9d1b) list_double_fisheye_pane_t

0x1082,	// (0x0009b34b) main_call5_pane

0x81b2,	// (0x000a247b) sc_swipe_pane_ParamLimits

0x81b2,	// (0x000a247b) sc_swipe_pane

0x843a,	// (0x000a2703) call5_image_pane_ParamLimits

0x843a,	// (0x000a2703) call5_image_pane

0x844a,	// (0x000a2713) call5_swipe_1_pane_ParamLimits

0x844a,	// (0x000a2713) call5_swipe_1_pane

0x8456,	// (0x000a271f) call5_swipe_2_pane_ParamLimits

0x8456,	// (0x000a271f) call5_swipe_2_pane

0x8470,	// (0x000a2739) popup_call5_audio_first_window_ParamLimits

0x8470,	// (0x000a2739) popup_call5_audio_first_window

0xcebb,	// (0x000a7184) call5_swipe_1_pane_g1_ParamLimits

0xcebb,	// (0x000a7184) call5_swipe_1_pane_g1

0xe63a,	// (0x000a8903) call5_swipe_1_pane_g2_ParamLimits

0xe63a,	// (0x000a8903) call5_swipe_1_pane_g2

0x0001,

0xfa57,	// (0x000a9d20) call5_swipe_1_pane_g_ParamLimits

0xfa57,	// (0x000a9d20) call5_swipe_1_pane_g

0xe646,	// (0x000a890f) call5_swipe_1_pane_t1_ParamLimits

0xe646,	// (0x000a890f) call5_swipe_1_pane_t1

0xcebb,	// (0x000a7184) call5_swipe_2_pane_g1_ParamLimits

0xcebb,	// (0x000a7184) call5_swipe_2_pane_g1

0xe65b,	// (0x000a8924) call5_swipe_2_pane_g2_ParamLimits

0xe65b,	// (0x000a8924) call5_swipe_2_pane_g2

0x0001,

0xfa5c,	// (0x000a9d25) call5_swipe_2_pane_g_ParamLimits

0xfa5c,	// (0x000a9d25) call5_swipe_2_pane_g

0xe667,	// (0x000a8930) call5_swipe_2_pane_t1_ParamLimits

0xe667,	// (0x000a8930) call5_swipe_2_pane_t1

0xe67c,	// (0x000a8945) sc_swipe_pane_g1_ParamLimits

0xe67c,	// (0x000a8945) sc_swipe_pane_g1

0xe689,	// (0x000a8952) sc_swipe_pane_g2_ParamLimits

0xe689,	// (0x000a8952) sc_swipe_pane_g2

0x0001,

0xfa61,	// (0x000a9d2a) sc_swipe_pane_g_ParamLimits

0xfa61,	// (0x000a9d2a) sc_swipe_pane_g

0xe695,	// (0x000a895e) sc_swipe_pane_t1_ParamLimits

0xe695,	// (0x000a895e) sc_swipe_pane_t1

0x1082,	// (0x0009b34b) main_cmail_launcher_pane

0x847e,	// (0x000a2747) aid_size_cell_cmail_l_ParamLimits

0x847e,	// (0x000a2747) aid_size_cell_cmail_l

0x848e,	// (0x000a2757) grid_cmail_l_pane_ParamLimits

0x848e,	// (0x000a2757) grid_cmail_l_pane

0x849e,	// (0x000a2767) cell_cmail_l_pane_ParamLimits

0x849e,	// (0x000a2767) cell_cmail_l_pane

0x84b2,	// (0x000a277b) cell_cmail_l_pane_g1_ParamLimits

0x84b2,	// (0x000a277b) cell_cmail_l_pane_g1

0x84c3,	// (0x000a278c) cell_cmail_l_pane_t1_ParamLimits

0x84c3,	// (0x000a278c) cell_cmail_l_pane_t1

0xe6aa,	// (0x000a8973) cell_cmail_l_pane_t2_ParamLimits

0xe6aa,	// (0x000a8973) cell_cmail_l_pane_t2

0x0001,

0xfa66,	// (0x000a9d2f) cell_cmail_l_pane_t_ParamLimits

0xfa66,	// (0x000a9d2f) cell_cmail_l_pane_t

0xa474,	// (0x000a473d) grid_highlight_pane_cp018_ParamLimits

0xa474,	// (0x000a473d) grid_highlight_pane_cp018

0x0ed8,	// (0x0009b1a1) main2_pane_ParamLimits

0x0ed8,	// (0x0009b1a1) main2_pane

0xa871,	// (0x000a4b3a) popup_sp_fs_action_menu_bg_pane_g1

0xa879,	// (0x000a4b42) popup_sp_fs_action_menu_bg_pane_g2

0xa881,	// (0x000a4b4a) popup_sp_fs_action_menu_bg_pane_g3

0xa889,	// (0x000a4b52) popup_sp_fs_action_menu_bg_pane_g4

0xa891,	// (0x000a4b5a) popup_sp_fs_action_menu_bg_pane_g5

0xa899,	// (0x000a4b62) popup_sp_fs_action_menu_bg_pane_g6

0xa8a1,	// (0x000a4b6a) popup_sp_fs_action_menu_bg_pane_g7

0xa8a9,	// (0x000a4b72) popup_sp_fs_action_menu_bg_pane_g8

0xa8b1,	// (0x000a4b7a) popup_sp_fs_action_menu_bg_pane_g9

0xa8b9,	// (0x000a4b82) popup_sp_fs_action_menu_bg_pane_g10

0xa8b9,	// (0x000a4b82) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a9453) popup_sp_fs_action_menu_bg_pane_g

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g3_g1

0x1e6d,	// (0x0009c136) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_t3_g3_g2

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a9501) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a9501) list_medium_line_x2_t3_g3_g

0x1e85,	// (0x0009c14e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e85,	// (0x0009c14e) list_medium_line_x2_t3_g3_t1

0x1e9a,	// (0x0009c163) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e9a,	// (0x0009c163) list_medium_line_x2_t3_g3_t2

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a9508) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a9508) list_medium_line_x2_t3_g3_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g2_g1

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a950f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a950f) list_medium_line_x2_t3_g2_g

0x1ec1,	// (0x0009c18a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ec1,	// (0x0009c18a) list_medium_line_x2_t3_g2_t1

0x1ed7,	// (0x0009c1a0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ed7,	// (0x0009c1a0) list_medium_line_x2_t3_g2_t2

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a9514) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a9514) list_medium_line_x2_t3_g2_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t4_g4_g1

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t4_g4_g2

0x1e6d,	// (0x0009c136) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_t4_g4_g3

0x1ef5,	// (0x0009c1be) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ef5,	// (0x0009c1be) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a951b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a951b) list_medium_line_x2_t4_g4_g

0x1f01,	// (0x0009c1ca) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f01,	// (0x0009c1ca) list_medium_line_x2_t4_g4_t1

0x1f1b,	// (0x0009c1e4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f1b,	// (0x0009c1e4) list_medium_line_x2_t4_g4_t2

0x1f31,	// (0x0009c1fa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f31,	// (0x0009c1fa) list_medium_line_x2_t4_g4_t3

0x1f46,	// (0x0009c20f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f46,	// (0x0009c20f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a9524) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a9524) list_medium_line_x2_t4_g4_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g4_g1

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t2_g4_g2

0x1e6d,	// (0x0009c136) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_t2_g4_g3

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a958b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a958b) list_medium_line_x2_t2_g4_g

0x30cf,	// (0x0009d398) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30cf,	// (0x0009d398) list_medium_line_x2_t2_g4_t1

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a9594) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a9594) list_medium_line_x2_t2_g4_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g3_g1

0x1e6d,	// (0x0009c136) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_t2_g3_g2

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a9501) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a9501) list_medium_line_x2_t2_g3_g

0x30e4,	// (0x0009d3ad) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30e4,	// (0x0009d3ad) list_medium_line_x2_t2_g3_t1

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a9599) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a9599) list_medium_line_x2_t2_g3_t

0x32e8,	// (0x0009d5b1) main_sp_fs_list_pane_ParamLimits

0x32e8,	// (0x0009d5b1) main_sp_fs_list_pane

0x32f4,	// (0x0009d5bd) sp_fs_scroll_pane_ParamLimits

0x32f4,	// (0x0009d5bd) sp_fs_scroll_pane

0x3300,	// (0x0009d5c9) list_medium_line_x2_t3_t1

0x3310,	// (0x0009d5d9) list_medium_line_x2_t3_t2

0x331e,	// (0x0009d5e7) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a95e4) list_medium_line_x2_t3_t

0x332c,	// (0x0009d5f5) list_medium_line_x3_t4_t1

0x333c,	// (0x0009d605) list_medium_line_x3_t4_t2

0x334a,	// (0x0009d613) list_medium_line_x3_t4_t3

0x331e,	// (0x0009d5e7) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a95eb) list_medium_line_x3_t4_t

0x3358,	// (0x0009d621) list_medium_line_x4_t5_t1

0x3368,	// (0x0009d631) list_medium_line_x4_t5_t2

0x334a,	// (0x0009d613) list_medium_line_x4_t5_t3

0x3376,	// (0x0009d63f) list_medium_line_x4_t5_t4

0x331e,	// (0x0009d5e7) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a95f4) list_medium_line_x4_t5_t

0x1e61,	// (0x0009c12a) list_medium_line_t4_g4_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_t4_g4_g1

0x1ef5,	// (0x0009c1be) list_medium_line_t4_g4_g2_ParamLimits

0x1ef5,	// (0x0009c1be) list_medium_line_t4_g4_g2

0x3384,	// (0x0009d64d) list_medium_line_t4_g4_g3_ParamLimits

0x3384,	// (0x0009d64d) list_medium_line_t4_g4_g3

0x1e79,	// (0x0009c142) list_medium_line_t4_g4_g4_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a95ff) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a95ff) list_medium_line_t4_g4_g

0x3390,	// (0x0009d659) list_medium_line_t4_g4_t1_ParamLimits

0x3390,	// (0x0009d659) list_medium_line_t4_g4_t1

0x33a5,	// (0x0009d66e) list_medium_line_t4_g4_t2_ParamLimits

0x33a5,	// (0x0009d66e) list_medium_line_t4_g4_t2

0x33ba,	// (0x0009d683) list_medium_line_t4_g4_t3_ParamLimits

0x33ba,	// (0x0009d683) list_medium_line_t4_g4_t3

0x1eac,	// (0x0009c175) list_medium_line_t4_g4_t4_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a9608) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a9608) list_medium_line_t4_g4_t

0x34da,	// (0x0009d7a3) chi_dic_find_pane_g1

0x43c5,	// (0x0009e68e) main_tport_pane

0x6dcd,	// (0x000a1096) list_medium_line_plain_t1

0x6ead,	// (0x000a1176) list_medium_line_t2_g2_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t2_g2_g1

0x6eb9,	// (0x000a1182) list_medium_line_t2_g2_g2_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_t2_g2_g2

0x0001,

0xf82d,	// (0x000a9af6) list_medium_line_t2_g2_g_ParamLimits

0xf82d,	// (0x000a9af6) list_medium_line_t2_g2_g

0x6ec5,	// (0x000a118e) list_medium_line_t2_g2_t1_ParamLimits

0x6ec5,	// (0x000a118e) list_medium_line_t2_g2_t1

0x6edf,	// (0x000a11a8) list_medium_line_t2_g2_t2_ParamLimits

0x6edf,	// (0x000a11a8) list_medium_line_t2_g2_t2

0x0001,

0xf832,	// (0x000a9afb) list_medium_line_t2_g2_t_ParamLimits

0xf832,	// (0x000a9afb) list_medium_line_t2_g2_t

0x9fea,	// (0x000a42b3) aid_sp_fs_list_icon_a_sm

0xa191,	// (0x000a445a) aid_sp_fs_list_icon_d

0xb09d,	// (0x000a5366) aid_sp_fs_text_primary

0xb0a6,	// (0x000a536f) aid_sp_fs_text_secondary

0x7573,	// (0x000a183c) list_medium_line

0x7573,	// (0x000a183c) list_medium_line_g2

0x7573,	// (0x000a183c) list_medium_line_g3

0x7573,	// (0x000a183c) list_medium_line_plain

0x7573,	// (0x000a183c) list_medium_line_plain_t2

0x7573,	// (0x000a183c) list_medium_line_plain_t3

0x7573,	// (0x000a183c) list_medium_line_right_icon

0x7573,	// (0x000a183c) list_medium_line_right_iconx2

0x7573,	// (0x000a183c) list_medium_line_t2

0x7573,	// (0x000a183c) list_medium_line_t2_g2

0x7573,	// (0x000a183c) list_medium_line_t2_g3

0x7573,	// (0x000a183c) list_medium_line_t2_right_icon

0x7573,	// (0x000a183c) list_medium_line_t2_right_iconx2

0x7573,	// (0x000a183c) list_medium_line_t3

0x7573,	// (0x000a183c) list_medium_line_t3_g2

0x7573,	// (0x000a183c) list_medium_line_t3_g3

0x7573,	// (0x000a183c) list_medium_line_t3_right_iconx2

0x757c,	// (0x000a1845) list_medium_line_t4_g4

0x7585,	// (0x000a184e) list_medium_line_x2

0x7585,	// (0x000a184e) list_medium_line_x2_t2_g2

0x7585,	// (0x000a184e) list_medium_line_x2_t2_g3

0x7585,	// (0x000a184e) list_medium_line_x2_t2_g4

0x7585,	// (0x000a184e) list_medium_line_x2_t3

0x7585,	// (0x000a184e) list_medium_line_x2_t3_g2

0x7585,	// (0x000a184e) list_medium_line_x2_t3_g3

0x7585,	// (0x000a184e) list_medium_line_x2_t3_g4

0x7585,	// (0x000a184e) list_medium_line_x2_t4_g2

0x7585,	// (0x000a184e) list_medium_line_x2_t4_g4

0x758e,	// (0x000a1857) list_medium_line_x3

0x758e,	// (0x000a1857) list_medium_line_x3_t4

0x758e,	// (0x000a1857) list_medium_line_x3_t4_g4

0x757c,	// (0x000a1845) list_medium_line_x4_t4

0x757c,	// (0x000a1845) list_medium_line_x4_t4_g7

0x757c,	// (0x000a1845) list_medium_line_x4_t5

0x7597,	// (0x000a1860) list_single_fs_dyc_pane_ParamLimits

0x7597,	// (0x000a1860) list_single_fs_dyc_pane

0x1e61,	// (0x0009c12a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x4_t4_g7_g1

0x7cea,	// (0x000a1fb3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cea,	// (0x000a1fb3) list_medium_line_x4_t4_g7_g2

0x7cf6,	// (0x000a1fbf) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cf6,	// (0x000a1fbf) list_medium_line_x4_t4_g7_g3

0x7d05,	// (0x000a1fce) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d05,	// (0x000a1fce) list_medium_line_x4_t4_g7_g4

0x7d11,	// (0x000a1fda) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d11,	// (0x000a1fda) list_medium_line_x4_t4_g7_g5

0x7d20,	// (0x000a1fe9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d20,	// (0x000a1fe9) list_medium_line_x4_t4_g7_g6

0x7d2f,	// (0x000a1ff8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d2f,	// (0x000a1ff8) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9db,	// (0x000a9ca4) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9db,	// (0x000a9ca4) list_medium_line_x4_t4_g7_g

0x7d3b,	// (0x000a2004) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d3b,	// (0x000a2004) list_medium_line_x4_t4_g7_t1

0x7d50,	// (0x000a2019) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d50,	// (0x000a2019) list_medium_line_x4_t4_g7_t2

0x7d65,	// (0x000a202e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d65,	// (0x000a202e) list_medium_line_x4_t4_g7_t3

0x7d7a,	// (0x000a2043) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d7a,	// (0x000a2043) list_medium_line_x4_t4_g7_t4

0x7d8c,	// (0x000a2055) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d8c,	// (0x000a2055) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9ea,	// (0x000a9cb3) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9ea,	// (0x000a9cb3) list_medium_line_x4_t4_g7_t

0x7d9e,	// (0x000a2067) list_single_dyc_row_pane_ParamLimits

0x7d9e,	// (0x000a2067) list_single_dyc_row_pane

0x842e,	// (0x000a26f7) call5_gesture_pane_ParamLimits

0x842e,	// (0x000a26f7) call5_gesture_pane

0x8462,	// (0x000a272b) call5_windows_pane_ParamLimits

0x8462,	// (0x000a272b) call5_windows_pane

0x84d9,	// (0x000a27a2) call5_swipe_1_pane_cp_ParamLimits

0x84d9,	// (0x000a27a2) call5_swipe_1_pane_cp

0x84e5,	// (0x000a27ae) call5_swipe_2_pane_cp_ParamLimits

0x84e5,	// (0x000a27ae) call5_swipe_2_pane_cp

0xa9bb,	// (0x000a4c84) call5_image_pane_cp

0x84f1,	// (0x000a27ba) popup_call5_audio_first_window_cp_ParamLimits

0x84f1,	// (0x000a27ba) popup_call5_audio_first_window_cp

0xe67c,	// (0x000a8945) call5_swipe_1_pane_g1_cp_ParamLimits

0xe67c,	// (0x000a8945) call5_swipe_1_pane_g1_cp

0xe6bc,	// (0x000a8985) call5_swipe_1_pane_g2_cp

0xe695,	// (0x000a895e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe695,	// (0x000a895e) call5_swipe_1_pane_t1_cp

0xe67c,	// (0x000a8945) call5_swipe_2_pane_g1_cp_ParamLimits

0xe67c,	// (0x000a8945) call5_swipe_2_pane_g1_cp

0xe6c4,	// (0x000a898d) call5_swipe_2_pane_g2_cp

0xe6cc,	// (0x000a8995) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cc,	// (0x000a8995) call5_swipe_2_pane_t1_cp

0xa474,	// (0x000a473d) main_sp_fs_email_pane

0xe6e1,	// (0x000a89aa) main_sp_fs_listscroll_pane_te

0x84ff,	// (0x000a27c8) popup_sp_fs_action_menu_pane_ParamLimits

0x84ff,	// (0x000a27c8) popup_sp_fs_action_menu_pane

0xcc6d,	// (0x000a6f36) bg_sp_fs_ctrlbar_pane_g1

0xe6ea,	// (0x000a89b3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f3,	// (0x000a89bc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fc,	// (0x000a89c5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6d,	// (0x000a6f36) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa6b,	// (0x000a9d34) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca46,	// (0x000a6d0f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca46,	// (0x000a6d0f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe705,	// (0x000a89ce) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe705,	// (0x000a89ce) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe711,	// (0x000a89da) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe711,	// (0x000a89da) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa74,	// (0x000a9d3d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa74,	// (0x000a9d3d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71d,	// (0x000a89e6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71d,	// (0x000a89e6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8543,	// (0x000a280c) list_medium_line_t2_right_icon_g1

0x854b,	// (0x000a2814) list_medium_line_t2_right_icon_t1

0x855b,	// (0x000a2824) list_medium_line_t2_right_icon_t2

0x0001,

0xfa79,	// (0x000a9d42) list_medium_line_t2_right_icon_t

0xc859,	// (0x000a6b22) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc859,	// (0x000a6b22) bg_sp_fs_ctrlbar_pane

0x85ac,	// (0x000a2875) main_sp_fs_ctrlbar_button_pane_cp01

0x85b4,	// (0x000a287d) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x000a8a53) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x000a8a5f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0a58,	// (0x0009ad21) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x000a8a6b) main_sp_fs_ctrlbar_pane_t1

0x85be,	// (0x000a2887) main_sp_fs_ctrlbar_pane

0x85d4,	// (0x000a289d) main_sp_fs_listscroll_pane_te_cp01

0x85e5,	// (0x000a28ae) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85e5,	// (0x000a28ae) popup_sp_fs_action_menu_pane_cp01

0xa474,	// (0x000a473d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa474,	// (0x000a473d) bg_sp_fs_highlight_list_pane_cp01

0xa016,	// (0x000a42df) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa016,	// (0x000a42df) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x000a8a9b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x000a8a9b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa7e,	// (0x000a9d47) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa7e,	// (0x000a9d47) sp_fs_action_menu_list_gene_pane_g

0xa025,	// (0x000a42ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa025,	// (0x000a42ee) sp_fs_action_menu_list_gene_pane_t1

0xa03d,	// (0x000a4306) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa03d,	// (0x000a4306) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x000a8aa8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x000a8aa8) popup_sp_fs_action_menu_bg_pane

0xa05c,	// (0x000a4325) sp_fs_action_menu_list_pane_ParamLimits

0xa05c,	// (0x000a4325) sp_fs_action_menu_list_pane

0x860f,	// (0x000a28d8) sp_fs_scroll_pane_cp01_ParamLimits

0x860f,	// (0x000a28d8) sp_fs_scroll_pane_cp01

0x8635,	// (0x000a28fe) list_medium_line_plain_t2_t1

0x8645,	// (0x000a290e) list_medium_line_plain_t2_t2

0x0001,

0xfa83,	// (0x000a9d4c) list_medium_line_plain_t2_t

0x8653,	// (0x000a291c) list_medium_line_plain_t3_t1

0x8663,	// (0x000a292c) list_medium_line_plain_t3_t2

0x8671,	// (0x000a293a) list_medium_line_plain_t3_t3

0x0002,

0xfa88,	// (0x000a9d51) list_medium_line_plain_t3_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t2_g2_g1

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a950f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a950f) list_medium_line_x2_t2_g2_g

0x3390,	// (0x0009d659) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3390,	// (0x0009d659) list_medium_line_x2_t2_g2_t1

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa8f,	// (0x000a9d58) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa8f,	// (0x000a9d58) list_medium_line_x2_t2_g2_t

0x1e61,	// (0x0009c12a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t4_g2_g1

0x867f,	// (0x000a2948) list_medium_line_x2_t4_g2_g2_ParamLimits

0x867f,	// (0x000a2948) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa94,	// (0x000a9d5d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa94,	// (0x000a9d5d) list_medium_line_x2_t4_g2_g

0x8691,	// (0x000a295a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8691,	// (0x000a295a) list_medium_line_x2_t4_g2_t1

0x86ab,	// (0x000a2974) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86ab,	// (0x000a2974) list_medium_line_x2_t4_g2_t2

0x86c1,	// (0x000a298a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86c1,	// (0x000a298a) list_medium_line_x2_t4_g2_t3

0x1eac,	// (0x0009c175) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa99,	// (0x000a9d62) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa99,	// (0x000a9d62) list_medium_line_x2_t4_g2_t

0x86d6,	// (0x000a299f) list_medium_line_t3_right_iconx2_g1

0x8543,	// (0x000a280c) list_medium_line_t3_right_iconx2_g2

0x86de,	// (0x000a29a7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfaa2,	// (0x000a9d6b) list_medium_line_t3_right_iconx2_g

0x86e6,	// (0x000a29af) list_medium_line_t3_right_iconx2_t1

0x86f6,	// (0x000a29bf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfaa9,	// (0x000a9d72) list_medium_line_t3_right_iconx2_t

0x1e61,	// (0x0009c12a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x3_t4_g4_g1

0x1e6d,	// (0x0009c136) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x3_t4_g4_g2

0x1ef5,	// (0x0009c1be) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ef5,	// (0x0009c1be) list_medium_line_x3_t4_g4_g3

0x8704,	// (0x000a29cd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8704,	// (0x000a29cd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfaae,	// (0x000a9d77) list_medium_line_x3_t4_g4_g_ParamLimits

0xfaae,	// (0x000a9d77) list_medium_line_x3_t4_g4_g

0x8710,	// (0x000a29d9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8710,	// (0x000a29d9) list_medium_line_x3_t4_g4_t1

0x8727,	// (0x000a29f0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8727,	// (0x000a29f0) list_medium_line_x3_t4_g4_t2

0x33a5,	// (0x0009d66e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x33a5,	// (0x0009d66e) list_medium_line_x3_t4_g4_t3

0x873c,	// (0x000a2a05) list_medium_line_x3_t4_g4_t4_ParamLimits

0x873c,	// (0x000a2a05) list_medium_line_x3_t4_g4_t4

0x0003,

0xfab7,	// (0x000a9d80) list_medium_line_x3_t4_g4_t_ParamLimits

0xfab7,	// (0x000a9d80) list_medium_line_x3_t4_g4_t

0x8759,	// (0x000a2a22) list_single_dyc_row_text_pane_t1_ParamLimits

0x8759,	// (0x000a2a22) list_single_dyc_row_text_pane_t1

0x8790,	// (0x000a2a59) list_single_dyc_row_text_pane_t2_ParamLimits

0x8790,	// (0x000a2a59) list_single_dyc_row_text_pane_t2

0xa07c,	// (0x000a4345) list_single_dyc_row_text_pane_t3_ParamLimits

0xa07c,	// (0x000a4345) list_single_dyc_row_text_pane_t3

0x0005,

0xfac0,	// (0x000a9d89) list_single_dyc_row_text_pane_t_ParamLimits

0xfac0,	// (0x000a9d89) list_single_dyc_row_text_pane_t

0xa0a0,	// (0x000a4369) list_single_dyc_row_pane_g1_ParamLimits

0xa0a0,	// (0x000a4369) list_single_dyc_row_pane_g1

0xa0ac,	// (0x000a4375) list_single_dyc_row_pane_g2_ParamLimits

0xa0ac,	// (0x000a4375) list_single_dyc_row_pane_g2

0xa0b8,	// (0x000a4381) list_single_dyc_row_pane_g3_ParamLimits

0xa0b8,	// (0x000a4381) list_single_dyc_row_pane_g3

0xa0c4,	// (0x000a438d) list_single_dyc_row_pane_g4_ParamLimits

0xa0c4,	// (0x000a438d) list_single_dyc_row_pane_g4

0x0003,

0xfacd,	// (0x000a9d96) list_single_dyc_row_pane_g_ParamLimits

0xfacd,	// (0x000a9d96) list_single_dyc_row_pane_g

0xa0d0,	// (0x000a4399) list_single_dyc_row_text_pane_ParamLimits

0xa0d0,	// (0x000a4399) list_single_dyc_row_text_pane

0x9b14,	// (0x000a3ddd) bg_sp_fs_scroll_pane

0xe7ed,	// (0x000a8ab6) thumb_sp_fs_scroll_pane

0x6ead,	// (0x000a1176) list_medium_line_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_g1

0x88b3,	// (0x000a2b7c) list_medium_line_t1_ParamLimits

0x88b3,	// (0x000a2b7c) list_medium_line_t1

0x1e61,	// (0x0009c12a) list_medium_line_x2_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_g1

0x1e6d,	// (0x0009c136) list_medium_line_x2_g2_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_g2

0x0001,

0xfad6,	// (0x000a9d9f) list_medium_line_x2_g_ParamLimits

0xfad6,	// (0x000a9d9f) list_medium_line_x2_g

0xa0ef,	// (0x000a43b8) list_medium_line_x2_t1_ParamLimits

0xa0ef,	// (0x000a43b8) list_medium_line_x2_t1

0x1e61,	// (0x0009c12a) list_medium_line_x3_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x3_g1

0x1e6d,	// (0x0009c136) list_medium_line_x3_g2_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x3_g2

0x0001,

0xfad6,	// (0x000a9d9f) list_medium_line_x3_g_ParamLimits

0xfad6,	// (0x000a9d9f) list_medium_line_x3_g

0xa0ef,	// (0x000a43b8) list_medium_line_x3_t1_ParamLimits

0xa0ef,	// (0x000a43b8) list_medium_line_x3_t1

0xe7f6,	// (0x000a8abf) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x000a8ac8) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x000a8ad1) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0abf,	// (0x0009ad88) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x000a8abf) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x000a8ac8) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x000a8ad1) bg_sp_fs_scroll_pane_g3

0x0002,

0x0abf,	// (0x0009ad88) bg_sp_fs_scroll_pane_g

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e61,	// (0x0009c12a) list_medium_line_x2_t3_g4_g1

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ee9,	// (0x0009c1b2) list_medium_line_x2_t3_g4_g2

0x1e6d,	// (0x0009c136) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e6d,	// (0x0009c136) list_medium_line_x2_t3_g4_g3

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e79,	// (0x0009c142) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a958b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a958b) list_medium_line_x2_t3_g4_g

0x88c8,	// (0x000a2b91) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88c8,	// (0x000a2b91) list_medium_line_x2_t3_g4_t1

0x88de,	// (0x000a2ba7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88de,	// (0x000a2ba7) list_medium_line_x2_t3_g4_t2

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1eac,	// (0x0009c175) list_medium_line_x2_t3_g4_t3

0x0002,

0xfadb,	// (0x000a9da4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfadb,	// (0x000a9da4) list_medium_line_x2_t3_g4_t

0x6ead,	// (0x000a1176) list_medium_line_g2_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_g2_g1

0x6eb9,	// (0x000a1182) list_medium_line_g2_g2_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_g2_g2

0x0001,

0xf82d,	// (0x000a9af6) list_medium_line_g2_g_ParamLimits

0xf82d,	// (0x000a9af6) list_medium_line_g2_g

0x88f7,	// (0x000a2bc0) list_medium_line_g2_t1_ParamLimits

0x88f7,	// (0x000a2bc0) list_medium_line_g2_t1

0x6ead,	// (0x000a1176) list_medium_line_t3_g2_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t3_g2_g1

0x6eb9,	// (0x000a1182) list_medium_line_t3_g2_g2_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_t3_g2_g2

0x0001,

0xf82d,	// (0x000a9af6) list_medium_line_t3_g2_g_ParamLimits

0xf82d,	// (0x000a9af6) list_medium_line_t3_g2_g

0x890c,	// (0x000a2bd5) list_medium_line_t3_g2_t1_ParamLimits

0x890c,	// (0x000a2bd5) list_medium_line_t3_g2_t1

0x8926,	// (0x000a2bef) list_medium_line_t3_g2_t2_ParamLimits

0x8926,	// (0x000a2bef) list_medium_line_t3_g2_t2

0x893c,	// (0x000a2c05) list_medium_line_t3_g2_t3_ParamLimits

0x893c,	// (0x000a2c05) list_medium_line_t3_g2_t3

0x0002,

0xfae2,	// (0x000a9dab) list_medium_line_t3_g2_t_ParamLimits

0xfae2,	// (0x000a9dab) list_medium_line_t3_g2_t

0x8543,	// (0x000a280c) list_medium_line_right_icon_g1

0x8951,	// (0x000a2c1a) list_medium_line_right_icon_t1

0x6ead,	// (0x000a1176) list_medium_line_t2_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t2_g1

0x895f,	// (0x000a2c28) list_medium_line_t2_t1_ParamLimits

0x895f,	// (0x000a2c28) list_medium_line_t2_t1

0x8979,	// (0x000a2c42) list_medium_line_t2_t2_ParamLimits

0x8979,	// (0x000a2c42) list_medium_line_t2_t2

0x0001,

0xfae9,	// (0x000a9db2) list_medium_line_t2_t_ParamLimits

0xfae9,	// (0x000a9db2) list_medium_line_t2_t

0x6ead,	// (0x000a1176) list_medium_line_t3_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t3_g1

0x898e,	// (0x000a2c57) list_medium_line_t3_t1_ParamLimits

0x898e,	// (0x000a2c57) list_medium_line_t3_t1

0x89a5,	// (0x000a2c6e) list_medium_line_t3_t2_ParamLimits

0x89a5,	// (0x000a2c6e) list_medium_line_t3_t2

0x89ba,	// (0x000a2c83) list_medium_line_t3_t3_ParamLimits

0x89ba,	// (0x000a2c83) list_medium_line_t3_t3

0x0002,

0xfaee,	// (0x000a9db7) list_medium_line_t3_t_ParamLimits

0xfaee,	// (0x000a9db7) list_medium_line_t3_t

0x6ead,	// (0x000a1176) list_medium_line_g3_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_g3_g1

0x89cc,	// (0x000a2c95) list_medium_line_g3_g2_ParamLimits

0x89cc,	// (0x000a2c95) list_medium_line_g3_g2

0x6eb9,	// (0x000a1182) list_medium_line_g3_g3_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_g3_g3

0x0002,

0xfaf5,	// (0x000a9dbe) list_medium_line_g3_g_ParamLimits

0xfaf5,	// (0x000a9dbe) list_medium_line_g3_g

0x89d8,	// (0x000a2ca1) list_medium_line_g3_t1_ParamLimits

0x89d8,	// (0x000a2ca1) list_medium_line_g3_t1

0x6ead,	// (0x000a1176) list_medium_line_t2_g3_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t2_g3_g1

0x89cc,	// (0x000a2c95) list_medium_line_t2_g3_g2_ParamLimits

0x89cc,	// (0x000a2c95) list_medium_line_t2_g3_g2

0x6eb9,	// (0x000a1182) list_medium_line_t2_g3_g3_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_t2_g3_g3

0x0002,

0xfaf5,	// (0x000a9dbe) list_medium_line_t2_g3_g_ParamLimits

0xfaf5,	// (0x000a9dbe) list_medium_line_t2_g3_g

0x89ed,	// (0x000a2cb6) list_medium_line_t2_g3_t1_ParamLimits

0x89ed,	// (0x000a2cb6) list_medium_line_t2_g3_t1

0x8a07,	// (0x000a2cd0) list_medium_line_t2_g3_t2_ParamLimits

0x8a07,	// (0x000a2cd0) list_medium_line_t2_g3_t2

0x0001,

0xfafc,	// (0x000a9dc5) list_medium_line_t2_g3_t_ParamLimits

0xfafc,	// (0x000a9dc5) list_medium_line_t2_g3_t

0x6ead,	// (0x000a1176) list_medium_line_t3_g3_g1_ParamLimits

0x6ead,	// (0x000a1176) list_medium_line_t3_g3_g1

0x89cc,	// (0x000a2c95) list_medium_line_t3_g3_g2_ParamLimits

0x89cc,	// (0x000a2c95) list_medium_line_t3_g3_g2

0x6eb9,	// (0x000a1182) list_medium_line_t3_g3_g3_ParamLimits

0x6eb9,	// (0x000a1182) list_medium_line_t3_g3_g3

0x0002,

0xfaf5,	// (0x000a9dbe) list_medium_line_t3_g3_g_ParamLimits

0xfaf5,	// (0x000a9dbe) list_medium_line_t3_g3_g

0x8a1d,	// (0x000a2ce6) list_medium_line_t3_g3_t1_ParamLimits

0x8a1d,	// (0x000a2ce6) list_medium_line_t3_g3_t1

0x8a31,	// (0x000a2cfa) list_medium_line_t3_g3_t2_ParamLimits

0x8a31,	// (0x000a2cfa) list_medium_line_t3_g3_t2

0x8a43,	// (0x000a2d0c) list_medium_line_t3_g3_t3_ParamLimits

0x8a43,	// (0x000a2d0c) list_medium_line_t3_g3_t3

0x0002,

0xfb01,	// (0x000a9dca) list_medium_line_t3_g3_t_ParamLimits

0xfb01,	// (0x000a9dca) list_medium_line_t3_g3_t

0x86d6,	// (0x000a299f) list_medium_line_right_iconx2_g1

0x8543,	// (0x000a280c) list_medium_line_right_iconx2_g2

0x0001,

0xfb08,	// (0x000a9dd1) list_medium_line_right_iconx2_g

0xa1a1,	// (0x000a446a) list_medium_line_right_iconx2_t1

0x86d6,	// (0x000a299f) list_medium_line_t2_right_iconx2_g1

0x8543,	// (0x000a280c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb08,	// (0x000a9dd1) list_medium_line_t2_right_iconx2_g

0x8a55,	// (0x000a2d1e) list_medium_line_t2_right_iconx2_t1

0x8a65,	// (0x000a2d2e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb0d,	// (0x000a9dd6) list_medium_line_t2_right_iconx2_t

0x8a73,	// (0x000a2d3c) list_medium_line_x4_t4_t1

0x8a81,	// (0x000a2d4a) list_medium_line_x4_t4_t2

0x8a91,	// (0x000a2d5a) list_medium_line_x4_t4_t3

0x8aa1,	// (0x000a2d6a) list_medium_line_x4_t4_t4

0x0003,

0xfb12,	// (0x000a9ddb) list_medium_line_x4_t4_t

0x8adb,	// (0x000a2da4) tport_appsw_pane_ParamLimits

0x8adb,	// (0x000a2da4) tport_appsw_pane

0x8ae9,	// (0x000a2db2) tport_contact_pane_ParamLimits

0x8ae9,	// (0x000a2db2) tport_contact_pane

0x8af9,	// (0x000a2dc2) tport_listscroll_pane_ParamLimits

0x8af9,	// (0x000a2dc2) tport_listscroll_pane

0x8b09,	// (0x000a2dd2) cell_tport_appsw_pane_ParamLimits

0x8b09,	// (0x000a2dd2) cell_tport_appsw_pane

0xcf20,	// (0x000a71e9) tport_appsw_pane_g1_ParamLimits

0xcf20,	// (0x000a71e9) tport_appsw_pane_g1

0xe811,	// (0x000a8ada) tport_contact_pane_g1

0xe81a,	// (0x000a8ae3) tport_contact_pane_t1

0xe828,	// (0x000a8af1) tport_contact_pane_t2

0x0001,

0x0b06,	// (0x0009adcf) tport_contact_pane_t

0xe836,	// (0x000a8aff) list_tport_pane

0xe83f,	// (0x000a8b08) scroll_pane_cp_030

0x8b3c,	// (0x000a2e05) cell_tport_appsw_pane_g1

0x8b4c,	// (0x000a2e15) cell_tport_appsw_pane_t1

0x8b5a,	// (0x000a2e23) grid_highlight_pane_cp019

0x8b62,	// (0x000a2e2b) list_tport_double_graphic_pane_ParamLimits

0x8b62,	// (0x000a2e2b) list_tport_double_graphic_pane

0xa474,	// (0x000a473d) list_highlight_pane_cp023_ParamLimits

0xa474,	// (0x000a473d) list_highlight_pane_cp023

0x8b73,	// (0x000a2e3c) list_tport_double_graphic_pane_g1_ParamLimits

0x8b73,	// (0x000a2e3c) list_tport_double_graphic_pane_g1

0x8b80,	// (0x000a2e49) list_tport_double_graphic_pane_t1_ParamLimits

0x8b80,	// (0x000a2e49) list_tport_double_graphic_pane_t1

0x8b95,	// (0x000a2e5e) list_tport_double_graphic_pane_t2_ParamLimits

0x8b95,	// (0x000a2e5e) list_tport_double_graphic_pane_t2

0x0001,

0xfb22,	// (0x000a9deb) list_tport_double_graphic_pane_t_ParamLimits

0xfb22,	// (0x000a9deb) list_tport_double_graphic_pane_t

0x9b14,	// (0x000a3ddd) main_cale_note_pane

0x6642,	// (0x000a090b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6642,	// (0x000a090b) cell_vitu2_function_top_wide_pane_cp01

0x80ff,	// (0x000a23c8) wait_bar_pane_cp05_ParamLimits

0xa474,	// (0x000a473d) listscroll_cmail_pane

0xe848,	// (0x000a8b11) list_cmail_pane

0x8ba7,	// (0x000a2e70) list_cmail_body_pane

0x8bca,	// (0x000a2e93) list_single_cmail_header_caption_pane

0x8bf6,	// (0x000a2ebf) list_single_cmail_header_detail_pane_ParamLimits

0x8bf6,	// (0x000a2ebf) list_single_cmail_header_detail_pane

0xe858,	// (0x000a8b21) list_single_cmail_header_caption_pane_t1

0x8c2f,	// (0x000a2ef8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c2f,	// (0x000a2ef8) list_single_cmail_header_detail_pane_g1

0xa1af,	// (0x000a4478) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1af,	// (0x000a4478) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb27,	// (0x000a9df0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb27,	// (0x000a9df0) list_single_cmail_header_detail_pane_g

0xa105,	// (0x000a43ce) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa105,	// (0x000a43ce) list_single_cmail_header_detail_pane_t1

0xa1df,	// (0x000a44a8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa1df,	// (0x000a44a8) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x000a85f4) list_cmail_body_pane_g1

0xe87c,	// (0x000a8b45) list_cmail_body_pane_t1

0xd6b6,	// (0x000a797f) list_single_cmail_header_editor_pane_bg_g1

0xac14,	// (0x000a4edd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6c6,	// (0x000a798f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6be,	// (0x000a7987) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd904,	// (0x000a7bcd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6e6,	// (0x000a79af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6d6,	// (0x000a799f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6de,	// (0x000a79a7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabf4,	// (0x000a4ebd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c45,	// (0x000a2f0e) calenote_gesture_pane_ParamLimits

0x8c45,	// (0x000a2f0e) calenote_gesture_pane

0x8c5f,	// (0x000a2f28) calenote_window_pane_ParamLimits

0x8c5f,	// (0x000a2f28) calenote_window_pane

0xe88a,	// (0x000a8b53) popup_note_window_cp01

0x8c77,	// (0x000a2f40) calenote_swipe_1_pane_ParamLimits

0x8c77,	// (0x000a2f40) calenote_swipe_1_pane

0x84e5,	// (0x000a27ae) calenote_swipe_2_pane_ParamLimits

0x84e5,	// (0x000a27ae) calenote_swipe_2_pane

0xe67c,	// (0x000a8945) calenote_swipe_1_pane_g1_ParamLimits

0xe67c,	// (0x000a8945) calenote_swipe_1_pane_g1

0xe689,	// (0x000a8952) calenote_swipe_1_pane_g2_ParamLimits

0xe689,	// (0x000a8952) calenote_swipe_1_pane_g2

0x0001,

0xfa61,	// (0x000a9d2a) calenote_swipe_1_pane_g_ParamLimits

0xfa61,	// (0x000a9d2a) calenote_swipe_1_pane_g

0xe89c,	// (0x000a8b65) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x000a8b65) calenote_swipe_1_pane_t1

0xe67c,	// (0x000a8945) calenote_swipe_2_pane_g1_ParamLimits

0xe67c,	// (0x000a8945) calenote_swipe_2_pane_g1

0xe8bb,	// (0x000a8b84) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x000a8b84) calenote_swipe_2_pane_g2

0x0001,

0xfb33,	// (0x000a9dfc) calenote_swipe_2_pane_g_ParamLimits

0xfb33,	// (0x000a9dfc) calenote_swipe_2_pane_g

0xe8c7,	// (0x000a8b90) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x000a8b90) calenote_swipe_2_pane_t1

0x9b14,	// (0x000a3ddd) main_mup_navstr_pane

0x539a,	// (0x0009f663) main_mup3_pane_t7_ParamLimits

0x539a,	// (0x0009f663) main_mup3_pane_t7

0x5da4,	// (0x000a006d) main_mp4_pane_g6_ParamLimits

0x5da4,	// (0x000a006d) main_mp4_pane_g6

0x6124,	// (0x000a03ed) main_image3_pane_t4_ParamLimits

0x6124,	// (0x000a03ed) main_image3_pane_t4

0x8c8a,	// (0x000a2f53) popup_navstr_preview_pane_ParamLimits

0x8c8a,	// (0x000a2f53) popup_navstr_preview_pane

0x8c96,	// (0x000a2f5f) scroll_navstr_pane_ParamLimits

0x8c96,	// (0x000a2f5f) scroll_navstr_pane

0x9b14,	// (0x000a3ddd) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x000a8bb7) popup_navstr_preview_pane_t1

0x8ca2,	// (0x000a2f6b) scroll_navstr_pane_g1_ParamLimits

0x8ca2,	// (0x000a2f6b) scroll_navstr_pane_g1

0x8caf,	// (0x000a2f78) scroll_navstr_pane_t1_ParamLimits

0x8caf,	// (0x000a2f78) scroll_navstr_pane_t1

0xe893,	// (0x000a8b5c) bg_button_pane_cp014

0xe893,	// (0x000a8b5c) bg_button_pane_cp030

0x83d4,	// (0x000a269d) list_double_fisheye_pane_g4_ParamLimits

0x83d4,	// (0x000a269d) list_double_fisheye_pane_g4

0x83e0,	// (0x000a26a9) list_double_fisheye_pane_g5_ParamLimits

0x83e0,	// (0x000a26a9) list_double_fisheye_pane_g5

0xcb89,	// (0x000a6e52) sp_fs_scroll_pane_cp03

0xe78a,	// (0x000a8a53) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x000a8a5f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0a58,	// (0x0009ad21) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x000a8a6b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x000a8b19) sp_fs_scroll_pane_cp02

0xa8fa,	// (0x000a4bc3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8fa,	// (0x000a4bc3) popup_sp_fs_calendar_preview_list_single_pane

0x9b14,	// (0x000a3ddd) main_cam6_pano_pane

0x43a9,	// (0x0009e672) main_mup3_pane_ParamLimits

0x9b14,	// (0x000a3ddd) main_phacti_pane

0x7fd4,	// (0x000a229d) bg_button_pane_cp11

0x7fec,	// (0x000a22b5) main_mobtv_info_pane_g2_ParamLimits

0x7fec,	// (0x000a22b5) main_mobtv_info_pane_g2

0x0001,

0xfa13,	// (0x000a9cdc) main_mobtv_info_pane_g_ParamLimits

0xfa13,	// (0x000a9cdc) main_mobtv_info_pane_g

0x819e,	// (0x000a2467) sc_clock_pane_t5_ParamLimits

0x819e,	// (0x000a2467) sc_clock_pane_t5

0x8241,	// (0x000a250a) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x000a8891) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x000a8891) main_radioblah_pane_t3

0xe5e0,	// (0x000a88a9) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x000a88a9) main_radioblah_pane_t4

0x825f,	// (0x000a2528) main_radioblah_text_pane_ParamLimits

0x825f,	// (0x000a2528) main_radioblah_text_pane

0x826c,	// (0x000a2535) main_radioblah_info_pane_g1_ParamLimits

0x8301,	// (0x000a25ca) main_radioblah_info_pane_t4_ParamLimits

0x8301,	// (0x000a25ca) main_radioblah_info_pane_t4

0xa474,	// (0x000a473d) main_sp_fs_calendar_pane

0x8cc1,	// (0x000a2f8a) main_phacti_pane_g1

0x8cc9,	// (0x000a2f92) phacti_note_pane_ParamLimits

0x8cc9,	// (0x000a2f92) phacti_note_pane

0xe905,	// (0x000a8bce) phacti_term_pane_ParamLimits

0xe905,	// (0x000a8bce) phacti_term_pane

0xe91a,	// (0x000a8be3) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x000a8be3) phacti_note_pane_t1

0xa1f6,	// (0x000a44bf) phacti_term_pane_g1

0xa1fe,	// (0x000a44c7) phacti_term_pane_t1_ParamLimits

0xa1fe,	// (0x000a44c7) phacti_term_pane_t1

0xe931,	// (0x000a8bfa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x000a8c02) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0b2d,	// (0x0009adf6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x000a8c0a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x000a8c0a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x000a8c20) aid_popup_sp_fs_bg_corner_pane

0xcc6d,	// (0x000a6f36) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b14,	// (0x000a3ddd) popup_sp_fs_calendar_preview_bg_pane

0xa141,	// (0x000a440a) popup_sp_fs_calendar_preview_list_pane

0xc859,	// (0x000a6b22) bg_main_sp_fs_cale_pane_ParamLimits

0xc859,	// (0x000a6b22) bg_main_sp_fs_cale_pane

0xa231,	// (0x000a44fa) listscroll_cale_mrui_pane_ParamLimits

0xa231,	// (0x000a44fa) listscroll_cale_mrui_pane

0xa246,	// (0x000a450f) listscroll_sp_fs_schedule_track_pane

0xa24f,	// (0x000a4518) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa24f,	// (0x000a4518) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x000a8c28) main_sp_fs_ribbon_pane

0xa262,	// (0x000a452b) popup_sp_fs_cale_preview_window

0x8d2c,	// (0x000a2ff5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d2c,	// (0x000a2ff5) list_single_sp_fs_schedule_track_pane

0xeeee,	// (0x000a91b7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeeee,	// (0x000a91b7) bg_sp_fs_highlight_list_pane_cp03

0x8d4f,	// (0x000a3018) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d4f,	// (0x000a3018) list_single_sp_fs_schedule_track_pane_g1

0x8d5b,	// (0x000a3024) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d5b,	// (0x000a3024) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb3d,	// (0x000a9e06) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb3d,	// (0x000a9e06) list_single_sp_fs_schedule_track_pane_g

0x8d67,	// (0x000a3030) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d67,	// (0x000a3030) list_single_sp_fs_schedule_track_pane_t1

0x8d7f,	// (0x000a3048) sp_fs_schedule_track_pane_ParamLimits

0x8d7f,	// (0x000a3048) sp_fs_schedule_track_pane

0xe967,	// (0x000a8c30) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x000a8c38) sp_fs_schedule_track_pane_g2

0xe977,	// (0x000a8c40) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x000a8c48) sp_fs_schedule_track_pane_g4

0xe987,	// (0x000a8c50) sp_fs_schedule_track_pane_g5

0x0004,

0x0b37,	// (0x0009ae00) sp_fs_schedule_track_pane_g

0xd6b6,	// (0x000a797f) bg_sp_fs_schedule_viewer_highlight_g1

0xac14,	// (0x000a4edd) bg_sp_fs_schedule_viewer_highlight_g2

0xd6be,	// (0x000a7987) bg_sp_fs_schedule_viewer_highlight_g3

0xd6c6,	// (0x000a798f) bg_sp_fs_schedule_viewer_highlight_g4

0xd904,	// (0x000a7bcd) bg_sp_fs_schedule_viewer_highlight_g5

0xd6d6,	// (0x000a799f) bg_sp_fs_schedule_viewer_highlight_g6

0xd6de,	// (0x000a79a7) bg_sp_fs_schedule_viewer_highlight_g7

0xd6e6,	// (0x000a79af) bg_sp_fs_schedule_viewer_highlight_g8

0xabf4,	// (0x000a4ebd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb42,	// (0x000a9e0b) bg_sp_fs_schedule_viewer_highlight_g

0x9b14,	// (0x000a3ddd) bg_main_sp_fs_ribbon_pane

0x8d8f,	// (0x000a3058) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x000a8c58) main_sp_fs_ribbon_pane_t1

0x8d98,	// (0x000a3061) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x000a8c67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb55,	// (0x000a9e1e) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x000a8c76) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x000a8c7e) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x000a8c87) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x000a8c90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b5c,	// (0x0009ae25) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x000a8c98) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x000a8ca1) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x000a8caa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b63,	// (0x0009ae2c) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x000a8cb3) list_cale_mrui_pane

0x8da7,	// (0x000a3070) sp_fs_scroll_pane_cp07_ParamLimits

0x8da7,	// (0x000a3070) sp_fs_scroll_pane_cp07

0x8dc3,	// (0x000a308c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dc3,	// (0x000a308c) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x000a8cc0) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x000a8cc8) list_sp_fs_schedule_track_pane

0xea07,	// (0x000a8cd0) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x000a8cd0) sp_fs_scroll_pane_cp06

0xcc6d,	// (0x000a6f36) bgmain_sp_fs_calendar_pane_g1

0x8dd0,	// (0x000a3099) list_single_cale_mrui_pane_ParamLimits

0x8dd0,	// (0x000a3099) list_single_cale_mrui_pane

0xa274,	// (0x000a453d) list_single_cale_mrui_row_pane_ParamLimits

0xa274,	// (0x000a453d) list_single_cale_mrui_row_pane

0xa281,	// (0x000a454a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa281,	// (0x000a454a) list_single_cale_mrui_row_pane_g1

0xa2b9,	// (0x000a4582) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa2b9,	// (0x000a4582) list_single_cale_mrui_row_pane_t1

0x8dfe,	// (0x000a30c7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dfe,	// (0x000a30c7) list_single_cale_mrui_row_pane_t2

0xa2cb,	// (0x000a4594) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa2cb,	// (0x000a4594) list_single_cale_mrui_row_pane_t3

0xa2fa,	// (0x000a45c3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2fa,	// (0x000a45c3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb63,	// (0x000a9e2c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb63,	// (0x000a9e2c) list_single_cale_mrui_row_pane_t

0x8e64,	// (0x000a312d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e64,	// (0x000a312d) list_single_cmail_header_editor_pane_bg_cp01

0x8e84,	// (0x000a314d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e84,	// (0x000a314d) list_single_cmail_header_editor_pane_bg_cp02

0x8ea0,	// (0x000a3169) main_radioblah_text_pane_t1_ParamLimits

0x8ea0,	// (0x000a3169) main_radioblah_text_pane_t1

0xea26,	// (0x000a8cef) cam6_indi_pane_cp01

0xea2e,	// (0x000a8cf7) cam6_mode_pane_cp01

0xea36,	// (0x000a8cff) cam6_pano_pane

0xea3f,	// (0x000a8d08) cam6_zoom_pane_cp01

0xea47,	// (0x000a8d10) cam6_pano_image_pane

0xea52,	// (0x000a8d1b) cam6_pano_pane_g1

0xe32b,	// (0x000a85f4) cam6_pano_pane_g2

0xea5b,	// (0x000a8d24) cam6_pano_pane_g3

0xea64,	// (0x000a8d2d) cam6_pano_pane_g4

0xd218,	// (0x000a74e1) cam6_pano_pane_g5

0xea6d,	// (0x000a8d36) cam6_pano_pane_g6

0xea77,	// (0x000a8d40) cam6_pano_pane_g7

0xea7f,	// (0x000a8d48) cam6_pano_pane_g8

0xea88,	// (0x000a8d51) cam6_pano_pane_g9

0x0008,

0x0b7a,	// (0x0009ae43) cam6_pano_pane_g

0x9b14,	// (0x000a3ddd) main_browser_tag_pane

0xe8e6,	// (0x000a8baf) grid_navstr_albumart_pane

0xea93,	// (0x000a8d5c) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x000a8d5c) cell_navstr_albumart_pane

0xeab3,	// (0x000a8d7c) cell_navstr_albumart_pane_g1

0xc62a,	// (0x000a68f3) cell_navstr_albumart_pane_g2

0xc63a,	// (0x000a6903) cell_navstr_albumart_pane_g3

0xc632,	// (0x000a68fb) cell_navstr_albumart_pane_g4

0x0003,

0x0b8d,	// (0x0009ae56) cell_navstr_albumart_pane_g

0x8ebb,	// (0x000a3184) bt_list_pane_ParamLimits

0x8ebb,	// (0x000a3184) bt_list_pane

0x8edc,	// (0x000a31a5) bt_list_pane_t1

0x8eeb,	// (0x000a31b4) bt_list_pane_t2

0x0001,

0xfb6c,	// (0x000a9e35) bt_list_pane_t

0x9b14,	// (0x000a3ddd) main_cale_prevew_pane

0x8efa,	// (0x000a31c3) popup_cale_preview_window_ParamLimits

0x8efa,	// (0x000a31c3) popup_cale_preview_window

0xa474,	// (0x000a473d) bg_popup_preview_window_pane_cp05_ParamLimits

0xa474,	// (0x000a473d) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x000a8d84) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x000a8d84) list_cale_preview_pane

0x8f13,	// (0x000a31dc) list_double_cale_preview_pane_ParamLimits

0x8f13,	// (0x000a31dc) list_double_cale_preview_pane

0x8f25,	// (0x000a31ee) list_single_cale_preview_pane_ParamLimits

0x8f25,	// (0x000a31ee) list_single_cale_preview_pane

0x8f39,	// (0x000a3202) list_single_cale_preview_pane_g1

0x8f41,	// (0x000a320a) list_single_cale_preview_pane_t1_ParamLimits

0x8f41,	// (0x000a320a) list_single_cale_preview_pane_t1

0x8f56,	// (0x000a321f) list_double_cale_preview_pane_g1

0x8f5e,	// (0x000a3227) list_double_cale_preview_pane_t1_ParamLimits

0x8f5e,	// (0x000a3227) list_double_cale_preview_pane_t1

0x8f73,	// (0x000a323c) list_double_cale_preview_pane_t2_ParamLimits

0x8f73,	// (0x000a323c) list_double_cale_preview_pane_t2

0x0001,

0xfb71,	// (0x000a9e3a) list_double_cale_preview_pane_t_ParamLimits

0xfb71,	// (0x000a9e3a) list_double_cale_preview_pane_t

0x9b14,	// (0x000a3ddd) main_ezdial_pane

0xa474,	// (0x000a473d) main_sp_fs_email_pane_ParamLimits

0x8569,	// (0x000a2832) cmail_ddmenu_btn01_pane_ParamLimits

0x8569,	// (0x000a2832) cmail_ddmenu_btn01_pane

0x857e,	// (0x000a2847) cmail_ddmenu_btn02_pane_ParamLimits

0x857e,	// (0x000a2847) cmail_ddmenu_btn02_pane

0x8596,	// (0x000a285f) cmail_ddmenu_btn03_pane_ParamLimits

0x8596,	// (0x000a285f) cmail_ddmenu_btn03_pane

0x85be,	// (0x000a2887) main_sp_fs_ctrlbar_pane_ParamLimits

0x85d4,	// (0x000a289d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ba7,	// (0x000a2e70) list_cmail_body_pane_ParamLimits

0xe866,	// (0x000a8b2f) bg_button_pane_cp12

0xe86f,	// (0x000a8b38) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x000a8b38) list_single_cmail_header_detail_pane_g3

0xa1bb,	// (0x000a4484) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa1bb,	// (0x000a4484) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb2e,	// (0x000a9df7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb2e,	// (0x000a9df7) list_single_cmail_header_detail_pane_t

0xa213,	// (0x000a44dc) phacti_term_pane_t2_ParamLimits

0xa213,	// (0x000a44dc) phacti_term_pane_t2

0x0001,

0xfb38,	// (0x000a9e01) phacti_term_pane_t_ParamLimits

0xfb38,	// (0x000a9e01) phacti_term_pane_t

0xeac7,	// (0x000a8d90) aid_size_list_single_double

0x8f8b,	// (0x000a3254) popup_ezdial_listscroll_window

0x8faf,	// (0x000a3278) popup_number_entry_window_cp01

0xa9bb,	// (0x000a4c84) bg_popup_call_pane_cp09

0xead3,	// (0x000a8d9c) ezdial_list_pane

0xeadb,	// (0x000a8da4) scroll_pane_cp23

0xca46,	// (0x000a6d0f) bg_button_pane_cp028_ParamLimits

0xca46,	// (0x000a6d0f) bg_button_pane_cp028

0x8fbd,	// (0x000a3286) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fbd,	// (0x000a3286) cmail_ddmenu_btn01_pane_g1

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb76,	// (0x000a9e3f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb76,	// (0x000a9e3f) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x000a8dac) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x000a8dac) cmail_ddmenu_btn01_pane_t1

0xc859,	// (0x000a6b22) bg_button_pane_cp029_ParamLimits

0xc859,	// (0x000a6b22) bg_button_pane_cp029

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn02_pane_g1

0x8fe6,	// (0x000a32af) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fe6,	// (0x000a32af) cmail_ddmenu_btn02_pane_t1

0xeeee,	// (0x000a91b7) bg_button_pane_cp031_ParamLimits

0xeeee,	// (0x000a91b7) bg_button_pane_cp031

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fcd,	// (0x000a3296) cmail_ddmenu_btn03_pane_g1

0x8fe6,	// (0x000a32af) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fe6,	// (0x000a32af) cmail_ddmenu_btn03_pane_t1

0x5fc1,	// (0x000a028a) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fdb,	// (0x000a02a4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fdb,	// (0x000a02a4) cell_dialer2_keypad_pane_t1_copy1

0x7e59,	// (0x000a2122) ncimui_group_button_pane

0xa474,	// (0x000a473d) main_sp_fs_calendar_pane_ParamLimits

0x8bca,	// (0x000a2e93) list_single_cmail_header_caption_pane_ParamLimits

0xa228,	// (0x000a44f1) aid_recal_txt_sm_pane

0x9b14,	// (0x000a3ddd) mian_recal_day_pane

0xa262,	// (0x000a452b) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf8,	// (0x000a8dc1) list_recal_day_pane

0xa49d,	// (0x000a4766) list_single_recal_day_pane_ParamLimits

0xa49d,	// (0x000a4766) list_single_recal_day_pane

0xeb1f,	// (0x000a8de8) list_single_recal_day_pane_g1_ParamLimits

0xeb1f,	// (0x000a8de8) list_single_recal_day_pane_g1

0xa4af,	// (0x000a4778) list_single_recal_day_pane_g2_ParamLimits

0xa4af,	// (0x000a4778) list_single_recal_day_pane_g2

0xa4bf,	// (0x000a4788) list_single_recal_day_pane_g3_ParamLimits

0xa4bf,	// (0x000a4788) list_single_recal_day_pane_g3

0x900a,	// (0x000a32d3) list_single_recal_day_pane_g4_ParamLimits

0x900a,	// (0x000a32d3) list_single_recal_day_pane_g4

0xa4cb,	// (0x000a4794) list_single_recal_day_pane_g5_ParamLimits

0xa4cb,	// (0x000a4794) list_single_recal_day_pane_g5

0xa4db,	// (0x000a47a4) list_single_recal_day_pane_g6_ParamLimits

0xa4db,	// (0x000a47a4) list_single_recal_day_pane_g6

0x0004,

0xfb85,	// (0x000a9e4e) list_single_recal_day_pane_g_ParamLimits

0xfb85,	// (0x000a9e4e) list_single_recal_day_pane_g

0xa4ef,	// (0x000a47b8) list_single_recal_day_pane_t1

0xa501,	// (0x000a47ca) list_single_recal_day_pane_t2

0x0001,

0xfb90,	// (0x000a9e59) list_single_recal_day_pane_t

0x902a,	// (0x000a32f3) ncimui_query_button_pane_ParamLimits

0x902a,	// (0x000a32f3) ncimui_query_button_pane

0x903a,	// (0x000a3303) ncimui_query_button_pane_t1_ParamLimits

0x903a,	// (0x000a3303) ncimui_query_button_pane_t1

0xeb2b,	// (0x000a8df4) ncimui_query_button_pane_t2_ParamLimits

0xeb2b,	// (0x000a8df4) ncimui_query_button_pane_t2

0x0001,

0xfb95,	// (0x000a9e5e) ncimui_query_button_pane_t_ParamLimits

0xfb95,	// (0x000a9e5e) ncimui_query_button_pane_t

0x904d,	// (0x000a3316) query_button_pane_ParamLimits

0x904d,	// (0x000a3316) query_button_pane

0x9b14,	// (0x000a3ddd) bg_button_pane_cp0028

0xeb3e,	// (0x000a8e07) query_button_pane_t1

0x43c5,	// (0x0009e68e) main_tport_pane_ParamLimits

0x8ab1,	// (0x000a2d7a) bg_popup_window_pane_cp01_ParamLimits

0x8ab1,	// (0x000a2d7a) bg_popup_window_pane_cp01

0x8abf,	// (0x000a2d88) heading_pane_cp08_ParamLimits

0x8abf,	// (0x000a2d88) heading_pane_cp08

0x8acd,	// (0x000a2d96) heading_pane_cp07_ParamLimits

0x8acd,	// (0x000a2d96) heading_pane_cp07

0x8b3c,	// (0x000a2e05) cell_tport_appsw_pane_g2

0x0002,

0xfb1b,	// (0x000a9de4) cell_tport_appsw_pane_g

0x9e84,	// (0x000a414d) input_candi_list_open_g1

0xadd7,	// (0x000a50a0) list_cale_time_pane_g6_ParamLimits

0xadd7,	// (0x000a50a0) list_cale_time_pane_g6

0x4e44,	// (0x0009f10d) aid_size_touch_calib_1_ParamLimits

0x4e44,	// (0x0009f10d) aid_size_touch_calib_1

0x4e50,	// (0x0009f119) aid_size_touch_calib_2_ParamLimits

0x4e50,	// (0x0009f119) aid_size_touch_calib_2

0x4e5e,	// (0x0009f127) aid_size_touch_calib_3_ParamLimits

0x4e5e,	// (0x0009f127) aid_size_touch_calib_3

0x4e6e,	// (0x0009f137) aid_size_touch_calib_4_ParamLimits

0x4e6e,	// (0x0009f137) aid_size_touch_calib_4

0x4e7c,	// (0x0009f145) main_touch_calib_button_group_pane_ParamLimits

0x4e7c,	// (0x0009f145) main_touch_calib_button_group_pane

0x4e8a,	// (0x0009f153) main_touch_calib_pane_g1_ParamLimits

0x4e96,	// (0x0009f15f) main_touch_calib_pane_g2_ParamLimits

0x4ea2,	// (0x0009f16b) main_touch_calib_pane_g3_ParamLimits

0x4eae,	// (0x0009f177) main_touch_calib_pane_g4_ParamLimits

0xf5f9,	// (0x000a98c2) main_touch_calib_pane_g_ParamLimits

0x4eba,	// (0x0009f183) main_touch_calib_pane_t1_ParamLimits

0x4ed3,	// (0x0009f19c) main_touch_calib_pane_t2_ParamLimits

0x4eec,	// (0x0009f1b5) main_touch_calib_pane_t3_ParamLimits

0x4f02,	// (0x0009f1cb) main_touch_calib_pane_t4_ParamLimits

0x4f18,	// (0x0009f1e1) main_touch_calib_pane_t5_ParamLimits

0xf602,	// (0x000a98cb) main_touch_calib_pane_t_ParamLimits

0xcfbb,	// (0x000a7284) list_single_fp_cale_pane_g3_ParamLimits

0xcfbb,	// (0x000a7284) list_single_fp_cale_pane_g3

0x43a9,	// (0x0009e672) bg_button_pane_cp012_ParamLimits

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp03_ParamLimits

0x6e2d,	// (0x000a10f6) cell_vitu2_function_top_pane_g1_ParamLimits

0x43a9,	// (0x0009e672) bg_vkb2_func_pane_cp04_ParamLimits

0x7de1,	// (0x000a20aa) main_ncimui_button_group_pane_ParamLimits

0x7de1,	// (0x000a20aa) main_ncimui_button_group_pane

0x7e47,	// (0x000a2110) main_ncimui_pane_t3_ParamLimits

0x7e47,	// (0x000a2110) main_ncimui_pane_t3

0xe8fc,	// (0x000a8bc5) phacti_button_group_pane

0xeac7,	// (0x000a8d90) aid_size_list_single_double_ParamLimits

0x8f8b,	// (0x000a3254) popup_ezdial_listscroll_window_ParamLimits

0x8faf,	// (0x000a3278) popup_number_entry_window_cp01_ParamLimits

0x905a,	// (0x000a3323) phacti_button_pane_ParamLimits

0x905a,	// (0x000a3323) phacti_button_pane

0x9b14,	// (0x000a3ddd) bg_button_pane_cp14

0xeb4c,	// (0x000a8e15) phacti_button_pane_t1

0x906b,	// (0x000a3334) main_touch_calib_button_pane_ParamLimits

0x906b,	// (0x000a3334) main_touch_calib_button_pane

0xa7c6,	// (0x000a4a8f) bg_button_pane_cp18_ParamLimits

0xa7c6,	// (0x000a4a8f) bg_button_pane_cp18

0xeb5a,	// (0x000a8e23) main_touch_calib_button_pane_t1_ParamLimits

0xeb5a,	// (0x000a8e23) main_touch_calib_button_pane_t1

0xeb70,	// (0x000a8e39) main_touch_calib_button_pane_t2_ParamLimits

0xeb70,	// (0x000a8e39) main_touch_calib_button_pane_t2

0x0001,

0x0bc4,	// (0x0009ae8d) main_touch_calib_button_pane_t_ParamLimits

0x0bc4,	// (0x0009ae8d) main_touch_calib_button_pane_t

0x9b14,	// (0x000a3ddd) cell_ncimui_button_pane

0x9b14,	// (0x000a3ddd) bg_button_pane_cp032

0xeb8e,	// (0x000a8e57) cell_ncimui_button_pane_t1

0x6037,	// (0x000a0300) image3_infobar_pane_ParamLimits

0x6037,	// (0x000a0300) image3_infobar_pane

0x81c0,	// (0x000a2489) fs_bigclock_status_pane_ParamLimits

0x81c0,	// (0x000a2489) fs_bigclock_status_pane

0x81cd,	// (0x000a2496) main_fs_bigclock_clock_pane_ParamLimits

0x81cd,	// (0x000a2496) main_fs_bigclock_clock_pane

0x81e7,	// (0x000a24b0) main_fs_bigclock_indi_pane_ParamLimits

0x81e7,	// (0x000a24b0) main_fs_bigclock_indi_pane

0x820f,	// (0x000a24d8) main_fs_bigclock_swipe_pane_ParamLimits

0x820f,	// (0x000a24d8) main_fs_bigclock_swipe_pane

0x9b14,	// (0x000a3ddd) main_fs_clock_dumped_data

0xe438,	// (0x000a8701) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x000a8701) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x000a871d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x000a871d) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x000a8737) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x000a8737) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x000a8751) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x000a8751) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09ec,	// (0x0009acb5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09ec,	// (0x0009acb5) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x000a877c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x000a877c) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x000a87a4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x000a87a4) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x000a87cc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x000a87cc) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x000a87f4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x000a87f4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09f7,	// (0x0009acc0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09f7,	// (0x0009acc0) list_single_fs_bigclock_indicator_pane_t

0xeb9c,	// (0x000a8e65) image3_infobar_fav_pane_ParamLimits

0xeb9c,	// (0x000a8e65) image3_infobar_fav_pane

0xebac,	// (0x000a8e75) image3_infobar_loc_pane_ParamLimits

0xebac,	// (0x000a8e75) image3_infobar_loc_pane

0xebc0,	// (0x000a8e89) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x000a8e89) image3_infobar_time_pane

0xcc6d,	// (0x000a6f36) image3_infobar_time_pane_g1

0xebd0,	// (0x000a8e99) image3_infobar_time_pane_t1

0xcc6d,	// (0x000a6f36) image3_infobar_loc_pane_g1

0xebde,	// (0x000a8ea7) image3_infobar_loc_pane_g2

0x0001,

0xfb9a,	// (0x000a9e63) image3_infobar_loc_pane_g

0xebe6,	// (0x000a8eaf) image3_infobar_loc_pane_t1

0xcc6d,	// (0x000a6f36) image3_infobar_fav_pane_g1

0xebf4,	// (0x000a8ebd) image3_infobar_fav_pane_g2

0x0001,

0xfb9f,	// (0x000a9e68) image3_infobar_fav_pane_g

0xebfc,	// (0x000a8ec5) fs_bigclock_status_battery_pane

0xec05,	// (0x000a8ece) fs_bigclock_status_signal_pane

0xec0e,	// (0x000a8ed7) fs_bigclock_status_title_pane

0xec17,	// (0x000a8ee0) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x000a8ee9) fs_bigclock_status_signal_pane_g2

0x0001,

0x0bc9,	// (0x0009ae92) fs_bigclock_status_signal_pane_g

0xec28,	// (0x000a8ef1) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x000a8efa) fs_bigclock_status_battery_pane_g2

0x0001,

0x0bce,	// (0x0009ae97) fs_bigclock_status_battery_pane_g

0xec39,	// (0x000a8f02) fs_bigclock_status_title_pane_t1

0xcc6d,	// (0x000a6f36) main_fs_bigclock_clock_pane_g1

0xec47,	// (0x000a8f10) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x000a8f19) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x000a8f19) main_fs_bigclock_clock_pane_g4

0x0003,

0xfba4,	// (0x000a9e6d) main_fs_bigclock_clock_pane_g

0xec58,	// (0x000a8f21) main_fs_bigclock_clock_pane_t1

0x907b,	// (0x000a3344) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbad,	// (0x000a9e76) main_fs_bigclock_clock_pane_t

0xec66,	// (0x000a8f2f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec66,	// (0x000a8f2f) list_single_fs_bigclock_indicator_pane

0xec77,	// (0x000a8f40) list_single_fs_bigclock_pane_ParamLimits

0xec77,	// (0x000a8f40) list_single_fs_bigclock_pane

0xec9d,	// (0x000a8f66) main_fs_bigclock_indicator_pane_t1

0xecac,	// (0x000a8f75) list_single_fs_bigclock_pane_g1

0xecb4,	// (0x000a8f7d) list_single_fs_bigclock_pane_t1

0xcc6d,	// (0x000a6f36) main_fs_bigclock_swipe_pane_g1

0xecf7,	// (0x000a8fc0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbb9,	// (0x000a9e82) main_fs_bigclock_swipe_pane_g

0xecff,	// (0x000a8fc8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecff,	// (0x000a8fc8) main_fs_bigclock_swipe_pane_t1

0x33cf,	// (0x0009d698) call_type_pane_ParamLimits

0x9b14,	// (0x000a3ddd) main_btmg_pane

0xa2ad,	// (0x000a4576) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa2ad,	// (0x000a4576) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb5c,	// (0x000a9e25) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb5c,	// (0x000a9e25) list_single_cale_mrui_row_pane_g

0xa48c,	// (0x000a4755) list_recal_vselct_arw_lo_pane

0xeb17,	// (0x000a8de0) list_recal_vselct_arw_up_pane

0xa494,	// (0x000a475d) list_recal_vselct_pane

0x90ce,	// (0x000a3397) btmg_button_pane

0x90da,	// (0x000a33a3) main_btmg_pane_g1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp044

0xed1c,	// (0x000a8fe5) btmg_button_pane_t1

0xc845,	// (0x000a6b0e) aid_listscroll_gen

0xa474,	// (0x000a473d) main_cntbar_detail_pane

0xe848,	// (0x000a8b11) list_cmail_folder_pane

0xcb89,	// (0x000a6e52) sp_fs_scroll_pane_cp03_ParamLimits

0x90e2,	// (0x000a33ab) list_single_fs_dyc_pane_cp01_ParamLimits

0x90e2,	// (0x000a33ab) list_single_fs_dyc_pane_cp01

0xed2a,	// (0x000a8ff3) aid_size_cmail_indent

0xa513,	// (0x000a47dc) list_single_dyc_row_pane_cp01

0x912a,	// (0x000a33f3) cntbar_detail_list_pane_ParamLimits

0x912a,	// (0x000a33f3) cntbar_detail_list_pane

0x9164,	// (0x000a342d) main_cntbar_detail_cont_pane_ParamLimits

0x9164,	// (0x000a342d) main_cntbar_detail_cont_pane

0x32f4,	// (0x0009d5bd) scroll_pane_cp032_ParamLimits

0x32f4,	// (0x0009d5bd) scroll_pane_cp032

0x9170,	// (0x000a3439) cntbar_detail_list_event_pane_ParamLimits

0x9170,	// (0x000a3439) cntbar_detail_list_event_pane

0x9136,	// (0x000a33ff) cntbar_detail_list_shct_pane

0xac62,	// (0x000a4f2b) aid_list_gen

0xed33,	// (0x000a8ffc) aid_scroll

0xed3c,	// (0x000a9005) aid_size_touch_scroll_bar

0x7585,	// (0x000a184e) aid_list_double

0x9184,	// (0x000a344d) aid_list_single

0x7573,	// (0x000a183c) aid_list_single_lg

0x918d,	// (0x000a3456) aid_list_z_g_a_sm

0x9195,	// (0x000a345e) aid_list_z_g_d

0x919d,	// (0x000a3466) aid_txt_z_prm

0x91ab,	// (0x000a3474) aid_txt_z_prm_cp01

0x91b9,	// (0x000a3482) aid_txt_z_sec

0x91c7,	// (0x000a3490) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91c7,	// (0x000a3490) main_cntbar_detail_cont_pane_g1

0x91d4,	// (0x000a349d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91d4,	// (0x000a349d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbbe,	// (0x000a9e87) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbbe,	// (0x000a9e87) main_cntbar_detail_cont_pane_g

0xed45,	// (0x000a900e) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x000a901c) main_cntbar_detail_cont_pane_t2

0xed61,	// (0x000a902a) main_cntbar_detail_cont_pane_t3

0x0002,

0x0be9,	// (0x0009aeb2) main_cntbar_detail_cont_pane_t

0x91e0,	// (0x000a34a9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91e0,	// (0x000a34a9) cell_cntbar_detail_list_shct_pane

0xed6f,	// (0x000a9038) cntbar_detail_list_shct_pane_g1

0xed78,	// (0x000a9041) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bf0,	// (0x0009aeb9) cntbar_detail_list_shct_pane_g

0x91f4,	// (0x000a34bd) cntbar_detail_list_event_pane_g1_ParamLimits

0x91f4,	// (0x000a34bd) cntbar_detail_list_event_pane_g1

0x9200,	// (0x000a34c9) cntbar_detail_list_event_pane_g2_ParamLimits

0x9200,	// (0x000a34c9) cntbar_detail_list_event_pane_g2

0x0005,

0xfbc3,	// (0x000a9e8c) cntbar_detail_list_event_pane_g_ParamLimits

0xfbc3,	// (0x000a9e8c) cntbar_detail_list_event_pane_g

0x926c,	// (0x000a3535) cntbar_detail_list_event_pane_t1_ParamLimits

0x926c,	// (0x000a3535) cntbar_detail_list_event_pane_t1

0x9281,	// (0x000a354a) cntbar_detail_list_event_pane_t2_ParamLimits

0x9281,	// (0x000a354a) cntbar_detail_list_event_pane_t2

0x0002,

0xfbd0,	// (0x000a9e99) cntbar_detail_list_event_pane_t_ParamLimits

0xfbd0,	// (0x000a9e99) cntbar_detail_list_event_pane_t

0xcc6d,	// (0x000a6f36) cell_cntbar_detail_list_shct_pane_g1

0xb3c0,	// (0x000a5689) navi_pane_mv_g3

0xa474,	// (0x000a473d) main_cntbar_detail_pane_ParamLimits

0x9b14,	// (0x000a3ddd) main_notif_wgt_pane

0x5ceb,	// (0x0009ffb4) aid_tch_main_mp4_pane_g4

0x5f20,	// (0x000a01e9) popup_slider_window_cp02

0xa482,	// (0x000a474b) list_recal_day_event_pane

0x910a,	// (0x000a33d3) cntbar_detail_btn_pane_ParamLimits

0x910a,	// (0x000a33d3) cntbar_detail_btn_pane

0x911a,	// (0x000a33e3) cntbar_detail_btn_pane_cp01_ParamLimits

0x911a,	// (0x000a33e3) cntbar_detail_btn_pane_cp01

0x9136,	// (0x000a33ff) cntbar_detail_list_shct_pane_ParamLimits

0x9142,	// (0x000a340b) cntbar_detail_pane_g1_ParamLimits

0x9142,	// (0x000a340b) cntbar_detail_pane_g1

0x914e,	// (0x000a3417) cntbar_detail_pane_t1_ParamLimits

0x914e,	// (0x000a3417) cntbar_detail_pane_t1

0x920c,	// (0x000a34d5) cntbar_detail_list_event_pane_g3_ParamLimits

0x920c,	// (0x000a34d5) cntbar_detail_list_event_pane_g3

0x9224,	// (0x000a34ed) cntbar_detail_list_event_pane_g4_ParamLimits

0x9224,	// (0x000a34ed) cntbar_detail_list_event_pane_g4

0x923c,	// (0x000a3505) cntbar_detail_list_event_pane_g5_ParamLimits

0x923c,	// (0x000a3505) cntbar_detail_list_event_pane_g5

0x9254,	// (0x000a351d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9254,	// (0x000a351d) cntbar_detail_list_event_pane_g6

0x9296,	// (0x000a355f) cntbar_detail_list_event_pane_t3_ParamLimits

0x9296,	// (0x000a355f) cntbar_detail_list_event_pane_t3

0x92a8,	// (0x000a3571) popup_notif_wgt_window_ParamLimits

0x92a8,	// (0x000a3571) popup_notif_wgt_window

0x92b8,	// (0x000a3581) popup_submenu_window_cp01_ParamLimits

0x92b8,	// (0x000a3581) popup_submenu_window_cp01

0xa9bb,	// (0x000a4c84) bg_popup_window_pane_cp10

0xed81,	// (0x000a904a) listscroll_notif_wgt_pane

0xed93,	// (0x000a905c) list_notif_wgt_window

0xed9c,	// (0x000a9065) scroll_pane_cp033

0x92c6,	// (0x000a358f) list_notif_wgt_row_pane_ParamLimits

0x92c6,	// (0x000a358f) list_notif_wgt_row_pane

0xeda5,	// (0x000a906e) aid_size_list_notif_wgt_del

0xedb2,	// (0x000a907b) list_notif_wgt_row_pane_g1

0xedbe,	// (0x000a9087) list_notif_wgt_row_pane_g2

0xedd2,	// (0x000a909b) list_notif_wgt_row_pane_g3

0x0002,

0x0c09,	// (0x0009aed2) list_notif_wgt_row_pane_g

0xeddf,	// (0x000a90a8) list_notif_wgt_row_pane_t1

0xedf5,	// (0x000a90be) list_notif_wgt_row_pane_t2

0xee07,	// (0x000a90d0) list_notif_wgt_row_pane_t3

0x0002,

0x0c10,	// (0x0009aed9) list_notif_wgt_row_pane_t

0xd91e,	// (0x000a7be7) list_recal_day_event_pane_g1

0xee19,	// (0x000a90e2) list_recal_day_event_pane_t1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp045

0x92d8,	// (0x000a35a1) cntbar_detail_btn_pane_t1

0xc859,	// (0x000a6b22) main_callh_pane_ParamLimits

0xc859,	// (0x000a6b22) main_callh_pane

0x9b14,	// (0x000a3ddd) main_coverflow0_pane

0x9b14,	// (0x000a3ddd) main_wgtman_pane

0x8227,	// (0x000a24f0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8227,	// (0x000a24f0) main_fs_bigclock_unlock_btn_pane

0x8b34,	// (0x000a2dfd) bg_button_pane_cp16

0x8b44,	// (0x000a2e0d) cell_tport_appsw_pane_g3

0x92e6,	// (0x000a35af) cf0_flow_pane_ParamLimits

0x92e6,	// (0x000a35af) cf0_flow_pane

0xee28,	// (0x000a90f1) listscroll_cf0_pane

0xee33,	// (0x000a90fc) main_cf0_pane_g1

0x92f5,	// (0x000a35be) main_cf0_pane_t1_ParamLimits

0x92f5,	// (0x000a35be) main_cf0_pane_t1

0x9309,	// (0x000a35d2) main_cf0_pane_t2_ParamLimits

0x9309,	// (0x000a35d2) main_cf0_pane_t2

0x0001,

0xfbd7,	// (0x000a9ea0) main_cf0_pane_t_ParamLimits

0xfbd7,	// (0x000a9ea0) main_cf0_pane_t

0xee45,	// (0x000a910e) scroll_pane_cp11

0x931d,	// (0x000a35e6) cf0_flow_pane_g1

0x9325,	// (0x000a35ee) cf0_flow_pane_g2

0x0001,

0xfbdc,	// (0x000a9ea5) cf0_flow_pane_g

0x932d,	// (0x000a35f6) cf0_flow_pane_t1

0x9b14,	// (0x000a3ddd) main_call6_pane

0x9b14,	// (0x000a3ddd) main_calllock_pane

0x933b,	// (0x000a3604) call6_btn_grp_pane_ParamLimits

0x933b,	// (0x000a3604) call6_btn_grp_pane

0x934a,	// (0x000a3613) call6_pane_g1_ParamLimits

0x934a,	// (0x000a3613) call6_pane_g1

0x9359,	// (0x000a3622) popup_call6_1st_window_ParamLimits

0x9359,	// (0x000a3622) popup_call6_1st_window

0x9367,	// (0x000a3630) popup_call6_2nd_window_ParamLimits

0x9367,	// (0x000a3630) popup_call6_2nd_window

0x9375,	// (0x000a363e) cell_call6_btn_pane_ParamLimits

0x9375,	// (0x000a363e) cell_call6_btn_pane

0xa9bb,	// (0x000a4c84) bg_popup_call2_in_pane_cp03

0xee50,	// (0x000a9119) popup_call6_1st_window_g1

0xee58,	// (0x000a9121) popup_call6_1st_window_g2

0xee60,	// (0x000a9129) popup_call6_1st_window_g3

0x0002,

0x0c26,	// (0x0009aeef) popup_call6_1st_window_g

0xee68,	// (0x000a9131) popup_call6_1st_window_t1

0xee77,	// (0x000a9140) popup_call6_1st_window_t2

0xee87,	// (0x000a9150) popup_call6_1st_window_t3

0x0002,

0x0c2d,	// (0x0009aef6) popup_call6_1st_window_t

0xa9bb,	// (0x000a4c84) bg_popup_call2_in_pane_cp04

0xee50,	// (0x000a9119) popup_call6_2nd_window_g1

0xee58,	// (0x000a9121) popup_call6_2nd_window_g2

0xee60,	// (0x000a9129) popup_call6_2nd_window_g3

0x0002,

0x0c26,	// (0x0009aeef) popup_call6_2nd_window_g

0xee68,	// (0x000a9131) popup_call6_2nd_window_t1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp15

0xee97,	// (0x000a9160) cell_call6_btn_pane_g1

0xeea0,	// (0x000a9169) cell_call6_btn_pane_t1

0x9384,	// (0x000a364d) listscroll_wgtman_pane_ParamLimits

0x9384,	// (0x000a364d) listscroll_wgtman_pane

0x93a0,	// (0x000a3669) wgtman_btn_pane_ParamLimits

0x93a0,	// (0x000a3669) wgtman_btn_pane

0xb1d4,	// (0x000a549d) aid_scroll_copy1

0xeeaf,	// (0x000a9178) list_wgtman_pane

0x93d5,	// (0x000a369e) wgtman_btn_pane_g1_ParamLimits

0x93d5,	// (0x000a369e) wgtman_btn_pane_g1

0x93fd,	// (0x000a36c6) wgtman_btn_pane_t1_ParamLimits

0x93fd,	// (0x000a36c6) wgtman_btn_pane_t1

0xeeb9,	// (0x000a9182) wgtman_btn_pane_t2_ParamLimits

0xeeb9,	// (0x000a9182) wgtman_btn_pane_t2

0x0001,

0xfbe1,	// (0x000a9eaa) wgtman_btn_pane_t_ParamLimits

0xfbe1,	// (0x000a9eaa) wgtman_btn_pane_t

0x9434,	// (0x000a36fd) listrow_wgtman_pane_ParamLimits

0x9434,	// (0x000a36fd) listrow_wgtman_pane

0x9450,	// (0x000a3719) listrow_wgtman_pane_g1

0x945d,	// (0x000a3726) listrow_wgtman_pane_g2

0x0001,

0xfbe6,	// (0x000a9eaf) listrow_wgtman_pane_g

0x947b,	// (0x000a3744) listrow_wgtman_pane_t1

0x9493,	// (0x000a375c) listrow_wgtman_pane_t2

0x0001,

0xfbeb,	// (0x000a9eb4) listrow_wgtman_pane_t

0x94b9,	// (0x000a3782) wait_bar_pane_cp09

0xeed0,	// (0x000a9199) main_calllock_btn_pane

0xeeda,	// (0x000a91a3) main_calllock_pane_g1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp17

0xeee5,	// (0x000a91ae) main_calllock_btn_pane_g1

0xeefc,	// (0x000a91c5) main_calllock_btn_pane_t1

0x9b14,	// (0x000a3ddd) main_dialer3_pane

0x9b14,	// (0x000a3ddd) main_fmrd2_pane

0xcc6d,	// (0x000a6f36) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x000a91dc) main_fs_bigclock_unlock_btn_pane_t1

0x94cb,	// (0x000a3794) area_fmrd2_info_pane_ParamLimits

0x94cb,	// (0x000a3794) area_fmrd2_info_pane

0x94d9,	// (0x000a37a2) area_fmrd2_visual_pane_ParamLimits

0x94d9,	// (0x000a37a2) area_fmrd2_visual_pane

0x94e7,	// (0x000a37b0) fmrd2_indi_pane_ParamLimits

0x94e7,	// (0x000a37b0) fmrd2_indi_pane

0x94f4,	// (0x000a37bd) area_fmrd2_visual_pane_g1

0x94fc,	// (0x000a37c5) area_fmrd2_visual_pane_t1

0x950c,	// (0x000a37d5) area_fmrd2_visual_pane_t2

0x951c,	// (0x000a37e5) area_fmrd2_visual_pane_t3

0x0002,

0xfbf5,	// (0x000a9ebe) area_fmrd2_visual_pane_t

0x952c,	// (0x000a37f5) area_fmrd2_info_pane_g1

0x9534,	// (0x000a37fd) area_fmrd2_info_pane_t1

0x9544,	// (0x000a380d) area_fmrd2_info_pane_t2

0x9554,	// (0x000a381d) area_fmrd2_info_pane_t3

0x9564,	// (0x000a382d) area_fmrd2_info_pane_t4

0x0003,

0xfbfc,	// (0x000a9ec5) area_fmrd2_info_pane_t

0x9572,	// (0x000a383b) fmrd2_indi_pane_t1

0x9582,	// (0x000a384b) fmrd2_indi_pane_t2

0x9592,	// (0x000a385b) fmrd2_indi_pane_t3

0x0002,

0xfc05,	// (0x000a9ece) fmrd2_indi_pane_t

0xe497,	// (0x000a8760) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x000a8760) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x000a8810) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x000a8810) list_single_fs_bigclock_indicator_pane_t5

0x8cdf,	// (0x000a2fa8) aid_cell_bcale_month_pane_ParamLimits

0x8cdf,	// (0x000a2fa8) aid_cell_bcale_month_pane

0x8cfd,	// (0x000a2fc6) bcale_month_pane_ParamLimits

0x8cfd,	// (0x000a2fc6) bcale_month_pane

0x8d1b,	// (0x000a2fe4) bcale_preview_pane_ParamLimits

0x8d1b,	// (0x000a2fe4) bcale_preview_pane

0xecb4,	// (0x000a8f7d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd3,	// (0x000a8f9c) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd3,	// (0x000a8f9c) list_single_fs_bigclock_pane_t2

0x0001,

0x0bdf,	// (0x0009aea8) list_single_fs_bigclock_pane_t_ParamLimits

0x0bdf,	// (0x0009aea8) list_single_fs_bigclock_pane_t

0xef0b,	// (0x000a91d4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbf0,	// (0x000a9eb9) main_fs_bigclock_unlock_btn_pane_g

0x95a0,	// (0x000a3869) aid_dia3_key_size_ParamLimits

0x95a0,	// (0x000a3869) aid_dia3_key_size

0x95ac,	// (0x000a3875) aid_dia3_listrow_size_ParamLimits

0x95ac,	// (0x000a3875) aid_dia3_listrow_size

0x95bc,	// (0x000a3885) dia3_keypad_fun_pane_ParamLimits

0x95bc,	// (0x000a3885) dia3_keypad_fun_pane

0x95ce,	// (0x000a3897) dia3_keypad_num_pane_ParamLimits

0x95ce,	// (0x000a3897) dia3_keypad_num_pane

0x95e0,	// (0x000a38a9) dia3_listscroll_pane_ParamLimits

0x95e0,	// (0x000a38a9) dia3_listscroll_pane

0x95ee,	// (0x000a38b7) dia3_numentry_pane_ParamLimits

0x95ee,	// (0x000a38b7) dia3_numentry_pane

0xef21,	// (0x000a91ea) dia3_list_pane

0xef2c,	// (0x000a91f5) scroll_pane_cp12

0x9b14,	// (0x000a3ddd) bg_dia3_numentry_pane

0x95fc,	// (0x000a38c5) dia3_numentry_pane_t1

0x960b,	// (0x000a38d4) cell_dia3_key_num_pane

0x9613,	// (0x000a38dc) cell_dia3_key0_fun_pane_ParamLimits

0x9613,	// (0x000a38dc) cell_dia3_key0_fun_pane

0x9620,	// (0x000a38e9) cell_dia3_key1_fun_pane_ParamLimits

0x9620,	// (0x000a38e9) cell_dia3_key1_fun_pane

0x962d,	// (0x000a38f6) dia3_listrow_pane

0xe1a6,	// (0x000a846f) bg_dia3_numentry_pane_g1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp21

0xef37,	// (0x000a9200) cell_dia3_key_num_pane_t1

0xef45,	// (0x000a920e) cell_dia3_key_num_pane_t2

0xef54,	// (0x000a921d) cell_dia3_key_num_pane_t3

0xef63,	// (0x000a922c) cell_dia3_key_num_pane_t4

0x0003,

0xfc0c,	// (0x000a9ed5) cell_dia3_key_num_pane_t

0x9b14,	// (0x000a3ddd) bg_button_pane_cp19

0x963a,	// (0x000a3903) cell_dia3_key0_fun_pane_g1

0x9b14,	// (0x000a3ddd) bg_button_pane_cp20

0x9642,	// (0x000a390b) cell_dia3_key1_fun_pane_g1

0x964a,	// (0x000a3913) area_left_week_number_pane

0x965d,	// (0x000a3926) area_top_day_name_pane

0x966b,	// (0x000a3934) frame_month_view_pane

0xef72,	// (0x000a923b) grid_month_view_pane

0x9680,	// (0x000a3949) cell_top_day_name_pane_ParamLimits

0x9680,	// (0x000a3949) cell_top_day_name_pane

0x969a,	// (0x000a3963) cell_area_left_week_number_pane_ParamLimits

0x969a,	// (0x000a3963) cell_area_left_week_number_pane

0x96bd,	// (0x000a3986) cell_month_view_pane_ParamLimits

0x96bd,	// (0x000a3986) cell_month_view_pane

0xef80,	// (0x000a9249) frm_month_g1

0x96e9,	// (0x000a39b2) frm_month_g2

0x96fa,	// (0x000a39c3) frm_month_g3

0x970b,	// (0x000a39d4) frm_month_g4

0x971c,	// (0x000a39e5) frm_month_g5

0x972f,	// (0x000a39f8) frm_month_g6

0x9742,	// (0x000a3a0b) frm_month_g7

0xef8d,	// (0x000a9256) frm_month_g8

0x9755,	// (0x000a3a1e) frm_month_g9

0x9762,	// (0x000a3a2b) frm_month_g10

0x976f,	// (0x000a3a38) frm_month_g11

0x977c,	// (0x000a3a45) frm_month_g12

0x9789,	// (0x000a3a52) frm_month_g13

0x9796,	// (0x000a3a5f) frm_month_g14

0x97a5,	// (0x000a3a6e) frm_month_g15

0x97b4,	// (0x000a3a7d) frm_month_g16

0x000f,

0xfc15,	// (0x000a9ede) frm_month_g

0xef9a,	// (0x000a9263) cell_top_day_name_pane_t1

0x97c3,	// (0x000a3a8c) cell_area_left_week_number_pane_g1

0x97d2,	// (0x000a3a9b) cell_area_left_week_number_pane_t1

0xcebb,	// (0x000a7184) cell_month_view_pane_g1

0x97e8,	// (0x000a3ab1) cell_month_view_pane_t1

0x9b14,	// (0x000a3ddd) main_fps_pane

0xe737,	// (0x000a8a00) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe737,	// (0x000a8a00) cmail_ddmenu_btn02_pane_cp1

0xe753,	// (0x000a8a1c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe753,	// (0x000a8a1c) cmail_ddmenu_btn02_pane_cp2

0x8fd9,	// (0x000a32a2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fd9,	// (0x000a32a2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb7b,	// (0x000a9e44) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb7b,	// (0x000a9e44) cmail_ddmenu_btn02_pane_g

0x8ff8,	// (0x000a32c1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ff8,	// (0x000a32c1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb80,	// (0x000a9e49) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb80,	// (0x000a9e49) cmail_ddmenu_btn02_pane_t

0x97fe,	// (0x000a3ac7) fps_text_pane_ParamLimits

0x97fe,	// (0x000a3ac7) fps_text_pane

0x980b,	// (0x000a3ad4) main_fps_pane_g1_ParamLimits

0x980b,	// (0x000a3ad4) main_fps_pane_g1

0x9819,	// (0x000a3ae2) wait_bar_pane_cp010_ParamLimits

0x9819,	// (0x000a3ae2) wait_bar_pane_cp010

0x9825,	// (0x000a3aee) fps_text_pane_t1_ParamLimits

0x9825,	// (0x000a3aee) fps_text_pane_t1

0x6310,	// (0x000a05d9) cam4_image_uncrop_pane_g1

0x6319,	// (0x000a05e2) cam4_image_uncrop_pane_g2

0x6322,	// (0x000a05eb) cam4_image_uncrop_pane_g3

0x632b,	// (0x000a05f4) cam4_image_uncrop_pane_g4

0x0003,

0xf729,	// (0x000a99f2) cam4_image_uncrop_pane_g

0x962d,	// (0x000a38f6) dia3_listrow_pane_ParamLimits

0x9b14,	// (0x000a3ddd) main_phob2_pane

0x8b16,	// (0x000a2ddf) cell_tport_appsw_pane_cp02_ParamLimits

0x8b16,	// (0x000a2ddf) cell_tport_appsw_pane_cp02

0x8b25,	// (0x000a2dee) cell_tport_appsw_pane_cp03_ParamLimits

0x8b25,	// (0x000a2dee) cell_tport_appsw_pane_cp03

0x9b14,	// (0x000a3ddd) phob2_contact_card_pane

0x9b14,	// (0x000a3ddd) phob2_listscroll_pane

0xefad,	// (0x000a9276) phob2_list_pane

0xefb5,	// (0x000a927e) scroll_pane_cp034

0x983e,	// (0x000a3b07) phob2_cc_data_pane_ParamLimits

0x983e,	// (0x000a3b07) phob2_cc_data_pane

0x9858,	// (0x000a3b21) phob2_cc_listscroll_pane_ParamLimits

0x9858,	// (0x000a3b21) phob2_cc_listscroll_pane

0x9872,	// (0x000a3b3b) list_double_large_graphic_phob2_pane_ParamLimits

0x9872,	// (0x000a3b3b) list_double_large_graphic_phob2_pane

0x9891,	// (0x000a3b5a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9891,	// (0x000a3b5a) list_double_large_graphic_phob2_pane_g1

0x98a7,	// (0x000a3b70) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98a7,	// (0x000a3b70) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc36,	// (0x000a9eff) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc36,	// (0x000a9eff) list_double_large_graphic_phob2_pane_g

0x98b3,	// (0x000a3b7c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98b3,	// (0x000a3b7c) list_double_large_graphic_phob2_pane_t1

0x98c9,	// (0x000a3b92) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98c9,	// (0x000a3b92) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc3b,	// (0x000a9f04) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc3b,	// (0x000a9f04) list_double_large_graphic_phob2_pane_t

0x9b14,	// (0x000a3ddd) list_highlight_pane_cp024

0x98de,	// (0x000a3ba7) phob2_cc_button_pane

0x98e6,	// (0x000a3baf) phob2_cc_data_pane_g1_ParamLimits

0x98e6,	// (0x000a3baf) phob2_cc_data_pane_g1

0x98f2,	// (0x000a3bbb) phob2_cc_data_pane_g2_ParamLimits

0x98f2,	// (0x000a3bbb) phob2_cc_data_pane_g2

0x0001,

0xfc40,	// (0x000a9f09) phob2_cc_data_pane_g_ParamLimits

0xfc40,	// (0x000a9f09) phob2_cc_data_pane_g

0x98fe,	// (0x000a3bc7) phob2_cc_data_pane_t1_ParamLimits

0x98fe,	// (0x000a3bc7) phob2_cc_data_pane_t1

0x9910,	// (0x000a3bd9) phob2_cc_data_pane_t2_ParamLimits

0x9910,	// (0x000a3bd9) phob2_cc_data_pane_t2

0x9922,	// (0x000a3beb) phob2_cc_data_pane_t3_ParamLimits

0x9922,	// (0x000a3beb) phob2_cc_data_pane_t3

0x0002,

0xfc45,	// (0x000a9f0e) phob2_cc_data_pane_t_ParamLimits

0xfc45,	// (0x000a9f0e) phob2_cc_data_pane_t

0xefbd,	// (0x000a9286) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x000a9286) phob2_cc_list_pane

0xda69,	// (0x000a7d32) scroll_pane_cp035_ParamLimits

0xda69,	// (0x000a7d32) scroll_pane_cp035

0xa474,	// (0x000a473d) bg_button_pane_cp033

0xefc9,	// (0x000a9292) phob2_cc_button_pane_g1

0xefd5,	// (0x000a929e) phob2_cc_button_pane_t1

0xefea,	// (0x000a92b3) phob2_cc_button_pane_t2

0x0001,

0xfc4c,	// (0x000a9f15) phob2_cc_button_pane_t

0x9934,	// (0x000a3bfd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9934,	// (0x000a3bfd) list_double_large_graphic_phob2_cc_pane

0x995d,	// (0x000a3c26) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x995d,	// (0x000a3c26) list_double_large_graphic_phob2_cc_pane_g1

0x996e,	// (0x000a3c37) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x996e,	// (0x000a3c37) list_double_large_graphic_phob2_cc_pane_g2

0x997d,	// (0x000a3c46) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x997d,	// (0x000a3c46) list_double_large_graphic_phob2_cc_pane_g3

0x998c,	// (0x000a3c55) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x998c,	// (0x000a3c55) list_double_large_graphic_phob2_cc_pane_g4

0x999d,	// (0x000a3c66) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x999d,	// (0x000a3c66) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc51,	// (0x000a9f1a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc51,	// (0x000a9f1a) list_double_large_graphic_phob2_cc_pane_g

0x99ac,	// (0x000a3c75) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99ac,	// (0x000a3c75) list_double_large_graphic_phob2_cc_pane_t1

0x99d5,	// (0x000a3c9e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x99d5,	// (0x000a3c9e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc5c,	// (0x000a9f25) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc5c,	// (0x000a9f25) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x000a92c5) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x000a92c5) list_highlight_pane_cp025

0xa474,	// (0x000a473d) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x000a9292) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x000a929e) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x000a92b3) phob2_cc_button_pane_t2_ParamLimits

0xfc4c,	// (0x000a9f15) phob2_cc_button_pane_t_ParamLimits

0x1076,	// (0x0009b33f) popup_wgtman_window

0xd7d0,	// (0x000a7a99) scroll_pane_cp038

0x93bd,	// (0x000a3686) wgtman_btn_pane_cp_01_ParamLimits

0x93bd,	// (0x000a3686) wgtman_btn_pane_cp_01

0xf00a,	// (0x000a92d3) wgtman_content_pane

0xf013,	// (0x000a92dc) wgtman_heading_pane

0x9b14,	// (0x000a3ddd) bg_heading_pane_cp02

0xf01c,	// (0x000a92e5) wgtman_heading_pane_g1

0xf024,	// (0x000a92ed) wgtman_heading_pane_t1

0xf032,	// (0x000a92fb) scroll_pane_cp036

0xf03a,	// (0x000a9303) wgtman_list_pane

0xe76f,	// (0x000a8a38) wgtman_list_pane_t1_ParamLimits

0xe76f,	// (0x000a8a38) wgtman_list_pane_t1

0x626f,	// (0x000a0538) cam4_grid_pane

0x7030,	// (0x000a12f9) bg_button_pane_cp015_ParamLimits

0x7042,	// (0x000a130b) bg_button_pane_cp016_ParamLimits

0x7055,	// (0x000a131e) bg_button_pane_cp017_ParamLimits

0x70ab,	// (0x000a1374) popup_vitu2_query_window_g3_ParamLimits

0x70ab,	// (0x000a1374) popup_vitu2_query_window_g3

0x7166,	// (0x000a142f) popup_vitu2_query_window_t6_ParamLimits

0x7166,	// (0x000a142f) popup_vitu2_query_window_t6

0x7191,	// (0x000a145a) popup_vitu2_query_window_t7_ParamLimits

0x7191,	// (0x000a145a) popup_vitu2_query_window_t7

0xd888,	// (0x000a7b51) cam4_grid_pane_g1

0xd891,	// (0x000a7b5a) cam4_grid_pane_g2

0xf042,	// (0x000a930b) cam4_grid_pane_g3

0xf04b,	// (0x000a9314) cam4_grid_pane_g4

0x0003,

0xfc61,	// (0x000a9f2a) cam4_grid_pane_g

0x1fce,	// (0x0009c297) aid_placing_vt_slider_lsc_ParamLimits

0x230e,	// (0x0009c5d7) vidtel_button_pane_ParamLimits

0x230e,	// (0x0009c5d7) vidtel_button_pane

0x9b14,	// (0x000a3ddd) bg_button_pane_cp034

0x99fe,	// (0x000a3cc7) vidtel_button_pane_g1

0xf056,	// (0x000a931f) vidtel_button_pane_t1

0xd8fc,	// (0x000a7bc5) aid_size_vtel_slider_touch

0xda69,	// (0x000a7d32) scroll_pane_cp039

0xe1ec,	// (0x000a84b5) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x000a84d4) ncimui_query_pane_g1_ParamLimits

0xa474,	// (0x000a473d) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x000a84f9) ncim_query_entry_pane_t1_ParamLimits

0xda69,	// (0x000a7d32) scroll_pane_cp039_ParamLimits

0xb2ab,	// (0x000a5574) navi_pane_bcale_mc_g1

0xb2b3,	// (0x000a557c) navi_pane_bcale_mc_t1

0xe7b7,	// (0x000a8a80) main_sp_fs_email_pane_g1

0xe7c3,	// (0x000a8a8c) main_sp_fs_email_pane_g2

0x0001,

0x0a5d,	// (0x0009ad26) main_sp_fs_email_pane_g

0xea19,	// (0x000a8ce2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x000a8ce2) list_single_cale_mrui_row_pane_g3

0x9020,	// (0x000a32e9) list_single_recal_day_pane_g5_event_pane

0xa4e7,	// (0x000a47b0) list_single_recal_day_pane_g7

0xf06c,	// (0x000a9335) list_recal_day_event_pane_cp01

0xf075,	// (0x000a933e) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000a9346) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000a934e) list_recal_vselct_pane_cp01

0xd91e,	// (0x000a7be7) list_recal_day_event_pane_cp01_g1

0xa51c,	// (0x000a47e5) list_recal_day_event_pane_cp01_t1

0xa4ef,	// (0x000a47b8) list_single_recal_day_pane_t1_ParamLimits

0xa501,	// (0x000a47ca) list_single_recal_day_pane_t2_ParamLimits

0xfb90,	// (0x000a9e59) list_single_recal_day_pane_t_ParamLimits

0xa6f5,	// (0x000a49be) bg_notes_pane_ParamLimits

0xa7a4,	// (0x000a4a6d) list_notes_pane_ParamLimits

0x13db,	// (0x0009b6a4) scroll_pane_cp06_ParamLimits

0xa7c6,	// (0x000a4a8f) main_notes_pane_ParamLimits

0x9b14,	// (0x000a3ddd) main_welc_pane

0x9a06,	// (0x000a3ccf) main_welc_body_pane_ParamLimits

0x9a06,	// (0x000a3ccf) main_welc_body_pane

0x9a1f,	// (0x000a3ce8) main_welc_opti_pane_ParamLimits

0x9a1f,	// (0x000a3ce8) main_welc_opti_pane

0x9a52,	// (0x000a3d1b) main_welc_pane_t1_ParamLimits

0x9a52,	// (0x000a3d1b) main_welc_pane_t1

0x9a6c,	// (0x000a3d35) main_welc_body_row_pane_ParamLimits

0x9a6c,	// (0x000a3d35) main_welc_body_row_pane

0xeeee,	// (0x000a91b7) main_welc_opti_row_pane_ParamLimits

0xeeee,	// (0x000a91b7) main_welc_opti_row_pane

0xf08f,	// (0x000a9358) main_welc_opti_row_pane_g1

0x9a95,	// (0x000a3d5e) main_welc_opti_row_pane_t1

0xf097,	// (0x000a9360) main_welc_body_row_pane_t1

0xed8b,	// (0x000a9054) popup_notif_wgt_heading_pane

0xeda5,	// (0x000a906e) aid_size_list_notif_wgt_del_ParamLimits

0xedb2,	// (0x000a907b) list_notif_wgt_row_pane_g1_ParamLimits

0xedbe,	// (0x000a9087) list_notif_wgt_row_pane_g2_ParamLimits

0xedd2,	// (0x000a909b) list_notif_wgt_row_pane_g3_ParamLimits

0x0c09,	// (0x0009aed2) list_notif_wgt_row_pane_g_ParamLimits

0xeddf,	// (0x000a90a8) list_notif_wgt_row_pane_t1_ParamLimits

0xedf5,	// (0x000a90be) list_notif_wgt_row_pane_t2_ParamLimits

0xee07,	// (0x000a90d0) list_notif_wgt_row_pane_t3_ParamLimits

0x0c10,	// (0x0009aed9) list_notif_wgt_row_pane_t_ParamLimits

0x9450,	// (0x000a3719) listrow_wgtman_pane_g1_ParamLimits

0x945d,	// (0x000a3726) listrow_wgtman_pane_g2_ParamLimits

0xfbe6,	// (0x000a9eaf) listrow_wgtman_pane_g_ParamLimits

0x947b,	// (0x000a3744) listrow_wgtman_pane_t1_ParamLimits

0x9493,	// (0x000a375c) listrow_wgtman_pane_t2_ParamLimits

0xfbeb,	// (0x000a9eb4) listrow_wgtman_pane_t_ParamLimits

0x94b9,	// (0x000a3782) wait_bar_pane_cp09_ParamLimits

0x9b14,	// (0x000a3ddd) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000a936f) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000a9377) popup_notif_wgt_heading_pane_t1

0x9b14,	// (0x000a3ddd) main_vids_pane

0x9b14,	// (0x000a3ddd) vids_listscroll_pane

0x9aa4,	// (0x000a3d6d) scroll_pane_cp040

0x9b14,	// (0x000a3ddd) vids_list_pane

0x9aaf,	// (0x000a3d78) vids_list_double_pane_ParamLimits

0x9aaf,	// (0x000a3d78) vids_list_double_pane

0x9ac7,	// (0x000a3d90) vids_list_double_pane_g1

0x9ad0,	// (0x000a3d99) vids_list_double_pane_t1

0x9ae0,	// (0x000a3da9) vids_list_double_pane_t2

0x0001,

0xfc6f,	// (0x000a9f38) vids_list_double_pane_t

0x43a9,	// (0x0009e672) main_ncimui_pane_ParamLimits

0x7df9,	// (0x000a20c2) main_ncimui_pane_g1_ParamLimits

0x7e05,	// (0x000a20ce) main_ncimui_pane_g2_ParamLimits

0x7e05,	// (0x000a20ce) main_ncimui_pane_g2

0x0001,

0xf9f5,	// (0x000a9cbe) main_ncimui_pane_g_ParamLimits

0xf9f5,	// (0x000a9cbe) main_ncimui_pane_g

0x9a38,	// (0x000a3d01) main_welc_pane_g1_ParamLimits

0x9a38,	// (0x000a3d01) main_welc_pane_g1

0x9a44,	// (0x000a3d0d) main_welc_pane_g2_ParamLimits

0x9a44,	// (0x000a3d0d) main_welc_pane_g2

0x0001,

0xfc6a,	// (0x000a9f33) main_welc_pane_g_ParamLimits

0xfc6a,	// (0x000a9f33) main_welc_pane_g

0xa6f5,	// (0x000a49be) listscroll_mce_pane_ParamLimits

0xb400,	// (0x000a56c9) wait_bar_pane_cp10

0xc84d,	// (0x000a6b16) main_cale_day_pane_ParamLimits

0xc84d,	// (0x000a6b16) main_cale_week_pane_ParamLimits

0xa6f5,	// (0x000a49be) main_messa_pane_ParamLimits

0x56b4,	// (0x0009f97d) main_clock2_btn_pane_ParamLimits

0x56b4,	// (0x0009f97d) main_clock2_btn_pane

0xd043,	// (0x000a730c) main_clock2_btn_pane_cp01_ParamLimits

0xd043,	// (0x000a730c) main_clock2_btn_pane_cp01

0xe9ea,	// (0x000a8cb3) list_cale_mrui_pane_ParamLimits

0xee3d,	// (0x000a9106) main_cf0_pane_g2

0x0001,

0x0c17,	// (0x0009aee0) main_cf0_pane_g

0x964a,	// (0x000a3913) area_left_week_number_pane_ParamLimits

0x965d,	// (0x000a3926) area_top_day_name_pane_ParamLimits

0x966b,	// (0x000a3934) frame_month_view_pane_ParamLimits

0xef72,	// (0x000a923b) grid_month_view_pane_ParamLimits

0xef80,	// (0x000a9249) frm_month_g1_ParamLimits

0x96e9,	// (0x000a39b2) frm_month_g2_ParamLimits

0x96fa,	// (0x000a39c3) frm_month_g3_ParamLimits

0x970b,	// (0x000a39d4) frm_month_g4_ParamLimits

0x971c,	// (0x000a39e5) frm_month_g5_ParamLimits

0x972f,	// (0x000a39f8) frm_month_g6_ParamLimits

0x9742,	// (0x000a3a0b) frm_month_g7_ParamLimits

0xef8d,	// (0x000a9256) frm_month_g8_ParamLimits

0x9755,	// (0x000a3a1e) frm_month_g9_ParamLimits

0x9762,	// (0x000a3a2b) frm_month_g10_ParamLimits

0x976f,	// (0x000a3a38) frm_month_g11_ParamLimits

0x977c,	// (0x000a3a45) frm_month_g12_ParamLimits

0x9789,	// (0x000a3a52) frm_month_g13_ParamLimits

0x9796,	// (0x000a3a5f) frm_month_g14_ParamLimits

0x97a5,	// (0x000a3a6e) frm_month_g15_ParamLimits

0x97b4,	// (0x000a3a7d) frm_month_g16_ParamLimits

0xfc15,	// (0x000a9ede) frm_month_g_ParamLimits

0xef9a,	// (0x000a9263) cell_top_day_name_pane_t1_ParamLimits

0x97c3,	// (0x000a3a8c) cell_area_left_week_number_pane_g1_ParamLimits

0x97d2,	// (0x000a3a9b) cell_area_left_week_number_pane_t1_ParamLimits

0xcebb,	// (0x000a7184) cell_month_view_pane_g1_ParamLimits

0x97e8,	// (0x000a3ab1) cell_month_view_pane_t1_ParamLimits

0xa6ed,	// (0x000a49b6) main_clock2_btn_pane_g1

0xf0bc,	// (0x000a9385) main_clock2_btn_pane_t1

0xa474,	// (0x000a473d) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x000a8a80) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x000a8a8c) main_sp_fs_email_pane_g2_ParamLimits

0x0a5d,	// (0x0009ad26) main_sp_fs_email_pane_g_ParamLimits

0xeaf8,	// (0x000a8dc1) list_recal_day_pane_ParamLimits

0xeb09,	// (0x000a8dd2) mian_recal_day_pane_t1

0x8806,	// (0x000a2acf) list_single_dyc_row_text_pane_t4_ParamLimits

0x8806,	// (0x000a2acf) list_single_dyc_row_text_pane_t4

0x883d,	// (0x000a2b06) list_single_dyc_row_text_pane_t5_ParamLimits

0x883d,	// (0x000a2b06) list_single_dyc_row_text_pane_t5

0xa08e,	// (0x000a4357) list_single_dyc_row_text_pane_t6_ParamLimits

0xa08e,	// (0x000a4357) list_single_dyc_row_text_pane_t6

0x3218,	// (0x0009d4e1) aid_mgn_list_cale_time_pane

0x43a9,	// (0x0009e672) main_gallery2_pane_ParamLimits

0xd059,	// (0x000a7322) main_clock2_pane_cp01_t1

0xd067,	// (0x000a7330) main_clock2_pane_cp01_t3

0x0001,

0x053c,	// (0x0009a805) main_clock2_pane_cp01_t

0x181c,	// (0x0009bae5) cale_week_scroll_pane_g16_ParamLimits

0x181c,	// (0x0009bae5) cale_week_scroll_pane_g16

0xa9bb,	// (0x000a4c84) vorec_slider_pane

0xf056,	// (0x000a931f) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
