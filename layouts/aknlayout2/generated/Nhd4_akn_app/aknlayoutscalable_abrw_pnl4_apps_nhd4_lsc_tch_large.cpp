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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008dd46 };

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
0x0e05,	// (0x0008eb4b) Screen

0x0e11,	// (0x0008eb57) application_window

0x0e83,	// (0x0008ebc9) area_bottom_pane_ParamLimits

0x0e83,	// (0x0008ebc9) area_bottom_pane

0x0ee0,	// (0x0008ec26) area_top_pane_ParamLimits

0x0ee0,	// (0x0008ec26) area_top_pane

0x9f16,	// (0x00097c5c) call_video_uplink_pane_ParamLimits

0x9f16,	// (0x00097c5c) call_video_uplink_pane

0x0f55,	// (0x0008ec9b) main_pane_ParamLimits

0x0f55,	// (0x0008ec9b) main_pane

0x48d9,	// (0x0009261f) context_pane

0x48ec,	// (0x00092632) navi_pane

0x4914,	// (0x0009265a) popup_cale_events_window_ParamLimits

0x4914,	// (0x0009265a) popup_cale_events_window

0x492c,	// (0x00092672) popup_mup_playback_window

0x4934,	// (0x0009267a) signal_pane

0xd9c2,	// (0x0009b708) main_browser_pane

0xe44a,	// (0x0009c190) main_burst_pane

0x45ec,	// (0x00092332) main_calc_pane

0xe44a,	// (0x0009c190) main_cale_day_pane

0xd9c2,	// (0x0009b708) main_cale_month_pane

0xe44a,	// (0x0009c190) main_cale_week_pane

0xe44a,	// (0x0009c190) main_call_pane

0xa353,	// (0x00098099) main_call_poc_pane

0xe44a,	// (0x0009c190) main_camera_pane

0xe44a,	// (0x0009c190) main_chi_dic_pane

0xe2d9,	// (0x0009c01f) main_clock_pane

0xa353,	// (0x00098099) main_fmradio_pane

0xe44a,	// (0x0009c190) main_graph_messa_pane

0xa353,	// (0x00098099) main_help_pane

0xd9c2,	// (0x0009b708) main_im_pane

0xa5ae,	// (0x000982f4) main_image_pane_ParamLimits

0xa5ae,	// (0x000982f4) main_image_pane

0xa353,	// (0x00098099) main_location2_pane

0xe44a,	// (0x0009c190) main_location_pane

0xa353,	// (0x00098099) main_messa_pane

0xa353,	// (0x00098099) main_mp2_pane

0xe44a,	// (0x0009c190) main_mp_pane

0xa353,	// (0x00098099) main_msg_pane

0xa353,	// (0x00098099) main_mup_eq_pane

0xa353,	// (0x00098099) main_mup_pane

0xe44a,	// (0x0009c190) main_notes_pane

0xa353,	// (0x00098099) main_pec_pane

0xa353,	// (0x00098099) main_phob_pane

0xa353,	// (0x00098099) main_pinb_pane

0xa353,	// (0x00098099) main_postcard_pane

0xa353,	// (0x00098099) main_qdial_pane

0xe44a,	// (0x0009c190) main_skin_pane

0xa353,	// (0x00098099) main_smil2_pane

0xe44a,	// (0x0009c190) main_smil_pane

0xe44a,	// (0x0009c190) main_video_pane

0xe44a,	// (0x0009c190) main_video_tele_pane

0xa5ae,	// (0x000982f4) main_viewer_pane_ParamLimits

0xa5ae,	// (0x000982f4) main_viewer_pane

0xe44a,	// (0x0009c190) main_vorec_pane

0x4656,	// (0x0009239c) popup_blid_sat_info_window_ParamLimits

0x4656,	// (0x0009239c) popup_blid_sat_info_window

0x46b8,	// (0x000923fe) popup_dyc_status_message_window_ParamLimits

0x46b8,	// (0x000923fe) popup_dyc_status_message_window

0x46d0,	// (0x00092416) popup_grid_large_graphic_window_ParamLimits

0x46d0,	// (0x00092416) popup_grid_large_graphic_window

0x47a1,	// (0x000924e7) popup_loc_request_window_ParamLimits

0x47a1,	// (0x000924e7) popup_loc_request_window

0x48b1,	// (0x000925f7) popup_wml_address_window_ParamLimits

0x48b1,	// (0x000925f7) popup_wml_address_window

0x43ed,	// (0x00092133) call_muted_g1

0x3956,	// (0x0009169c) popup_call_audio_conf_window_ParamLimits

0x3956,	// (0x0009169c) popup_call_audio_conf_window

0x4401,	// (0x00092147) popup_call_audio_first_window_ParamLimits

0x4401,	// (0x00092147) popup_call_audio_first_window

0x4477,	// (0x000921bd) popup_call_audio_in_window_ParamLimits

0x4477,	// (0x000921bd) popup_call_audio_in_window

0x44b3,	// (0x000921f9) popup_call_audio_out_window_ParamLimits

0x44b3,	// (0x000921f9) popup_call_audio_out_window

0x44ed,	// (0x00092233) popup_call_audio_second_window_ParamLimits

0x44ed,	// (0x00092233) popup_call_audio_second_window

0x4543,	// (0x00092289) popup_call_audio_wait_window_ParamLimits

0x4543,	// (0x00092289) popup_call_audio_wait_window

0x4578,	// (0x000922be) popup_number_entry_window_ParamLimits

0x4578,	// (0x000922be) popup_number_entry_window

0x9f42,	// (0x00097c88) bg_popup_call_pane_cp05_ParamLimits

0x9f42,	// (0x00097c88) bg_popup_call_pane_cp05

0x9f62,	// (0x00097ca8) popup_number_entry_window_t1

0x9f75,	// (0x00097cbb) popup_number_entry_window_t2

0x9f87,	// (0x00097ccd) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009ce32) popup_number_entry_window_t

0x9f99,	// (0x00097cdf) text_title_cp2

0x9fac,	// (0x00097cf2) bg_popup_call_pane_cp_ParamLimits

0x9fac,	// (0x00097cf2) bg_popup_call_pane_cp

0x9fba,	// (0x00097d00) call_thumbnail_pane

0x9fc2,	// (0x00097d08) popup_call_audio_in_window_g1_ParamLimits

0x9fc2,	// (0x00097d08) popup_call_audio_in_window_g1

0x9fce,	// (0x00097d14) popup_call_audio_in_window_g2_ParamLimits

0x9fce,	// (0x00097d14) popup_call_audio_in_window_g2

0x9fda,	// (0x00097d20) popup_call_audio_in_window_g3_ParamLimits

0x9fda,	// (0x00097d20) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009ce3b) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009ce3b) popup_call_audio_in_window_g

0x9fe6,	// (0x00097d2c) popup_call_audio_in_window_t1_ParamLimits

0x9fe6,	// (0x00097d2c) popup_call_audio_in_window_t1

0xa001,	// (0x00097d47) popup_call_audio_in_window_t2_ParamLimits

0xa001,	// (0x00097d47) popup_call_audio_in_window_t2

0xa01c,	// (0x00097d62) popup_call_audio_in_window_t3_ParamLimits

0xa01c,	// (0x00097d62) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009ce42) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009ce42) popup_call_audio_in_window_t

0x9fac,	// (0x00097cf2) bg_popup_call_pane_cp01_ParamLimits

0x9fac,	// (0x00097cf2) bg_popup_call_pane_cp01

0x9fba,	// (0x00097d00) call_thumbnail_pane_cp02

0xa02f,	// (0x00097d75) call_type_pane_cp022

0xa037,	// (0x00097d7d) popup_call_audio_out_window_g1_ParamLimits

0xa037,	// (0x00097d7d) popup_call_audio_out_window_g1

0xa049,	// (0x00097d8f) popup_call_audio_out_window_g2_ParamLimits

0xa049,	// (0x00097d8f) popup_call_audio_out_window_g2

0xa055,	// (0x00097d9b) popup_call_audio_out_window_g3_ParamLimits

0xa055,	// (0x00097d9b) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009ce49) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009ce49) popup_call_audio_out_window_g

0xa067,	// (0x00097dad) popup_call_audio_out_window_t1_ParamLimits

0xa067,	// (0x00097dad) popup_call_audio_out_window_t1

0xa07f,	// (0x00097dc5) popup_call_audio_out_window_t2_ParamLimits

0xa07f,	// (0x00097dc5) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009ce50) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009ce50) popup_call_audio_out_window_t

0xa094,	// (0x00097dda) bg_popup_call_pane_ParamLimits

0xa094,	// (0x00097dda) bg_popup_call_pane

0x110c,	// (0x0008ee52) call_thumbnail_pane_cp_ParamLimits

0x110c,	// (0x0008ee52) call_thumbnail_pane_cp

0xa118,	// (0x00097e5e) call_type_pane_cp01_ParamLimits

0xa118,	// (0x00097e5e) call_type_pane_cp01

0xa15c,	// (0x00097ea2) popup_call_audio_first_window_g1_ParamLimits

0xa15c,	// (0x00097ea2) popup_call_audio_first_window_g1

0xa1a8,	// (0x00097eee) popup_call_audio_first_window_g2_ParamLimits

0xa1a8,	// (0x00097eee) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009ce55) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009ce55) popup_call_audio_first_window_g

0xa1ec,	// (0x00097f32) popup_call_audio_first_window_t1_ParamLimits

0xa1ec,	// (0x00097f32) popup_call_audio_first_window_t1

0xa298,	// (0x00097fde) popup_call_audio_first_window_t4_ParamLimits

0xa298,	// (0x00097fde) popup_call_audio_first_window_t4

0xa324,	// (0x0009806a) popup_call_audio_first_window_t5_ParamLimits

0xa324,	// (0x0009806a) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009ce5a) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009ce5a) popup_call_audio_first_window_t

0xa353,	// (0x00098099) bg_popup_call_pane_cp02

0xa35d,	// (0x000980a3) call_type_pane_cp023

0xa365,	// (0x000980ab) popup_call_audio_wait_window_g1

0xa36d,	// (0x000980b3) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009ce61) popup_call_audio_wait_window_g

0xa375,	// (0x000980bb) popup_call_audio_wait_window_t3

0xa383,	// (0x000980c9) bg_popup_call_pane_cp03_ParamLimits

0xa383,	// (0x000980c9) bg_popup_call_pane_cp03

0xa3e3,	// (0x00098129) call_thumbnail_pane_cp011_ParamLimits

0xa3e3,	// (0x00098129) call_thumbnail_pane_cp011

0xa3ef,	// (0x00098135) call_type_pane_cp034_ParamLimits

0xa3ef,	// (0x00098135) call_type_pane_cp034

0xa42b,	// (0x00098171) popup_call_audio_second_window_g1_ParamLimits

0xa42b,	// (0x00098171) popup_call_audio_second_window_g1

0xa467,	// (0x000981ad) popup_call_audio_second_window_g2_ParamLimits

0xa467,	// (0x000981ad) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009ce66) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009ce66) popup_call_audio_second_window_g

0xa4a3,	// (0x000981e9) popup_call_audio_second_window_t1_ParamLimits

0xa4a3,	// (0x000981e9) popup_call_audio_second_window_t1

0xa524,	// (0x0009826a) popup_call_audio_second_window_t2_ParamLimits

0xa524,	// (0x0009826a) popup_call_audio_second_window_t2

0xa55a,	// (0x000982a0) popup_call_audio_second_window_t3_ParamLimits

0xa55a,	// (0x000982a0) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009ce6b) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009ce6b) popup_call_audio_second_window_t

0xa353,	// (0x00098099) bg_popup_call_pane_cp04

0xa590,	// (0x000982d6) list_conf_pane

0xa598,	// (0x000982de) popup_call_audio_conf_window_t1

0xa5a6,	// (0x000982ec) call_thumbnail_pane_g1

0xa5ae,	// (0x000982f4) bg_pinb_pane_ParamLimits

0xa5ae,	// (0x000982f4) bg_pinb_pane

0xa5bc,	// (0x00098302) find_pinb_pane

0xa5c5,	// (0x0009830b) listscroll_pinb_pane_ParamLimits

0xa5c5,	// (0x0009830b) listscroll_pinb_pane

0xa5d4,	// (0x0009831a) pinb_bg_pane_g1

0x1130,	// (0x0008ee76) pinb_bg_pane_g2

0x113c,	// (0x0008ee82) pinb_bg_pane_g3

0x1148,	// (0x0008ee8e) pinb_bg_pane_g4

0x1154,	// (0x0008ee9a) pinb_bg_pane_g5

0x1160,	// (0x0008eea6) pinb_bg_pane_g6

0x116b,	// (0x0008eeb1) pinb_bg_pane_g7

0x1176,	// (0x0008eebc) pinb_bg_pane_g8

0x1181,	// (0x0008eec7) pinb_bg_pane_g9

0x118b,	// (0x0008eed1) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009ce72) pinb_bg_pane_g

0x11a0,	// (0x0008eee6) grid_pinb_pane

0x11a9,	// (0x0008eeef) list_pinb_pane

0x11b2,	// (0x0008eef8) scroll_pane_cp01_ParamLimits

0x11b2,	// (0x0008eef8) scroll_pane_cp01

0xa5e6,	// (0x0009832c) find_pinb_pane_g1_ParamLimits

0xa5e6,	// (0x0009832c) find_pinb_pane_g1

0xa5fe,	// (0x00098344) find_pinb_pane_t1

0xa610,	// (0x00098356) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009ce8c) find_pinb_pane_t

0xa625,	// (0x0009836b) input_focus_pane_cp01_ParamLimits

0xa625,	// (0x0009836b) input_focus_pane_cp01

0x11c4,	// (0x0008ef0a) cell_pinb_pane_ParamLimits

0x11c4,	// (0x0008ef0a) cell_pinb_pane

0x11f6,	// (0x0008ef3c) cell_pinb_pane_g1_ParamLimits

0x11f6,	// (0x0008ef3c) cell_pinb_pane_g1

0x1206,	// (0x0008ef4c) cell_pinb_pane_g2_ParamLimits

0x1206,	// (0x0008ef4c) cell_pinb_pane_g2

0xa631,	// (0x00098377) cell_pinb_pane_g3_ParamLimits

0xa631,	// (0x00098377) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009ce91) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009ce91) cell_pinb_pane_g

0xa353,	// (0x00098099) grid_highlight_pane_cp01

0x1212,	// (0x0008ef58) list_pinb_item_pane_ParamLimits

0x1212,	// (0x0008ef58) list_pinb_item_pane

0xa353,	// (0x00098099) list_highlight_pane_cp02

0xa63d,	// (0x00098383) list_pinb_item_pane_g1_ParamLimits

0xa63d,	// (0x00098383) list_pinb_item_pane_g1

0xa64a,	// (0x00098390) list_pinb_item_pane_g2_ParamLimits

0xa64a,	// (0x00098390) list_pinb_item_pane_g2

0x1226,	// (0x0008ef6c) list_pinb_item_pane_g3_ParamLimits

0x1226,	// (0x0008ef6c) list_pinb_item_pane_g3

0xa656,	// (0x0009839c) list_pinb_item_pane_g4_ParamLimits

0xa656,	// (0x0009839c) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009ce98) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009ce98) list_pinb_item_pane_g

0xa662,	// (0x000983a8) list_pinb_item_pane_t1_ParamLimits

0xa662,	// (0x000983a8) list_pinb_item_pane_t1

0x1255,	// (0x0008ef9b) calc_display_pane

0x127d,	// (0x0008efc3) calc_paper_pane

0x12a0,	// (0x0008efe6) grid_calc_pane

0xa353,	// (0x00098099) bg_list_pane_cp01

0x12ce,	// (0x0008f014) clock_g1

0x12d6,	// (0x0008f01c) clock_g2

0x0001,

0xf15b,	// (0x0009cea1) clock_g

0x12de,	// (0x0008f024) clock_t1_ParamLimits

0x12de,	// (0x0008f024) clock_t1

0x12f3,	// (0x0008f039) clock_t2_ParamLimits

0x12f3,	// (0x0008f039) clock_t2

0x1305,	// (0x0008f04b) clock_t3_ParamLimits

0x1305,	// (0x0008f04b) clock_t3

0x1317,	// (0x0008f05d) clock_t4_ParamLimits

0x1317,	// (0x0008f05d) clock_t4

0x1329,	// (0x0008f06f) clock_t5_ParamLimits

0x1329,	// (0x0008f06f) clock_t5

0x133e,	// (0x0008f084) clock_t6_ParamLimits

0x133e,	// (0x0008f084) clock_t6

0x1350,	// (0x0008f096) clock_t7_ParamLimits

0x1350,	// (0x0008f096) clock_t7

0x1362,	// (0x0008f0a8) clock_t8_ParamLimits

0x1362,	// (0x0008f0a8) clock_t8

0x1376,	// (0x0008f0bc) clock_t9_ParamLimits

0x1376,	// (0x0008f0bc) clock_t9

0x0008,

0xf160,	// (0x0009cea6) clock_t_ParamLimits

0xf160,	// (0x0009cea6) clock_t

0xa681,	// (0x000983c7) popup_clock_analogue_window_cp02

0xa681,	// (0x000983c7) popup_clock_digital_window_cp01

0xa689,	// (0x000983cf) listscroll_help_pane

0xa353,	// (0x00098099) phob_pre_status_pane

0xa693,	// (0x000983d9) grid_qdial_pane

0xa353,	// (0x00098099) listscroll_mce_pane

0xa69d,	// (0x000983e3) bg_notes_pane

0xa6a7,	// (0x000983ed) list_notes_pane

0x138a,	// (0x0008f0d0) scroll_pane_cp06

0xa6b1,	// (0x000983f7) bg_calc_paper_pane

0xa6cf,	// (0x00098415) list_calc_pane

0xd9c2,	// (0x0009b708) bg_calc_display_pane

0x1395,	// (0x0008f0db) calc_display_pane_t1

0x13a7,	// (0x0008f0ed) calc_display_pane_t2

0xa6e9,	// (0x0009842f) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009ceb9) calc_display_pane_t

0x13b9,	// (0x0008f0ff) cell_calc_pane_ParamLimits

0x13b9,	// (0x0008f0ff) cell_calc_pane

0xd9ce,	// (0x0009b714) bg_calc_paper_pane_g1

0xd9da,	// (0x0009b720) bg_calc_paper_pane_g2

0xd9e6,	// (0x0009b72c) bg_calc_paper_pane_g3

0xd9f2,	// (0x0009b738) bg_calc_paper_pane_g4

0xd9fe,	// (0x0009b744) bg_calc_paper_pane_g5

0x13ee,	// (0x0008f134) bg_calc_paper_pane_g6

0x13fd,	// (0x0008f143) bg_calc_paper_pane_g7

0x140c,	// (0x0008f152) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009cec0) bg_calc_paper_pane_g

0x141f,	// (0x0008f165) calc_bg_paper_pane_g9

0x1432,	// (0x0008f178) list_calc_item_pane_ParamLimits

0x1432,	// (0x0008f178) list_calc_item_pane

0xda0a,	// (0x0009b750) list_calc_item_pane_g1

0xa6fb,	// (0x00098441) list_calc_item_pane_t1_ParamLimits

0xa6fb,	// (0x00098441) list_calc_item_pane_t1

0x1448,	// (0x0008f18e) list_calc_item_pane_t2_ParamLimits

0x1448,	// (0x0008f18e) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009ced1) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009ced1) list_calc_item_pane_t

0xda17,	// (0x0009b75d) cell_calc_pane_g1

0xda21,	// (0x0009b767) grid_highlight_pane_cp02

0xda43,	// (0x0009b789) bg_calc_display_pane_g1

0xa70d,	// (0x00098453) bg_calc_display_pane_g2

0xda4c,	// (0x0009b792) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009cedb) bg_calc_display_pane_g

0x147a,	// (0x0008f1c0) cell_qdial_pane_ParamLimits

0x147a,	// (0x0008f1c0) cell_qdial_pane

0x148e,	// (0x0008f1d4) cell_qdial_pane_g1_ParamLimits

0x148e,	// (0x0008f1d4) cell_qdial_pane_g1

0x14a4,	// (0x0008f1ea) cell_qdial_pane_g2_ParamLimits

0x14a4,	// (0x0008f1ea) cell_qdial_pane_g2

0xda55,	// (0x0009b79b) cell_qdial_pane_g3_ParamLimits

0xda55,	// (0x0009b79b) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009cee2) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009cee2) cell_qdial_pane_g

0x14cb,	// (0x0008f211) cell_qdial_pane_t1_ParamLimits

0x14cb,	// (0x0008f211) cell_qdial_pane_t1

0x14e3,	// (0x0008f229) cell_qdial_pane_t2_ParamLimits

0x14e3,	// (0x0008f229) cell_qdial_pane_t2

0x14f6,	// (0x0008f23c) cell_qdial_pane_t3_ParamLimits

0x14f6,	// (0x0008f23c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009ceeb) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009ceeb) cell_qdial_pane_t

0xa353,	// (0x00098099) grid_highlight_pane_cp04

0xda61,	// (0x0009b7a7) thumbnail_qdial_pane_ParamLimits

0xda61,	// (0x0009b7a7) thumbnail_qdial_pane

0xdabd,	// (0x0009b803) list_help_pane

0xdac6,	// (0x0009b80c) scroll_pane_cp02

0x1509,	// (0x0008f24f) help_list_pane_t1_ParamLimits

0x1509,	// (0x0008f24f) help_list_pane_t1

0xa717,	// (0x0009845d) bg_notes_pane_g2

0xa71f,	// (0x00098465) bg_notes_pane_g3

0xa727,	// (0x0009846d) notes_bg_pane_g1

0xa72f,	// (0x00098475) notes_bg_pane_g4

0xa737,	// (0x0009847d) notes_bg_pane_g5

0xa73f,	// (0x00098485) notes_bg_pane_g6

0xa747,	// (0x0009848d) notes_bg_pane_g7

0xa74f,	// (0x00098495) notes_bg_pane_g8

0xa757,	// (0x0009849d) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009cf09) notes_bg_pane_g

0xf0c9,	// (0x0009ce0f) list_notes_text_pane_ParamLimits

0xf0c9,	// (0x0009ce0f) list_notes_text_pane

0xdacf,	// (0x0009b815) list_notes_text_pane_g1

0x1529,	// (0x0008f26f) list_notes_text_pane_t1

0xd9c2,	// (0x0009b708) listscroll_cale_week_pane

0x1554,	// (0x0008f29a) bg_cale_heading_pane

0xdae9,	// (0x0009b82f) bg_cale_pane_cp01

0x156c,	// (0x0008f2b2) cale_week_corner_pane

0x157d,	// (0x0008f2c3) cale_week_day_heading_pane

0x1595,	// (0x0008f2db) cale_week_scroll_pane_g1

0x15aa,	// (0x0008f2f0) cale_week_scroll_pane_g2

0x15bb,	// (0x0008f301) cale_week_scroll_pane_g3

0x15cc,	// (0x0008f312) cale_week_scroll_pane_g4

0x15dd,	// (0x0008f323) cale_week_scroll_pane_g5

0x15f0,	// (0x0008f336) cale_week_scroll_pane_g6

0x1603,	// (0x0008f349) cale_week_scroll_pane_g7

0x1616,	// (0x0008f35c) cale_week_scroll_pane_g8

0x1629,	// (0x0008f36f) cale_week_scroll_pane_g9

0x163a,	// (0x0008f380) cale_week_scroll_pane_g10

0x164b,	// (0x0008f391) cale_week_scroll_pane_g11

0x165c,	// (0x0008f3a2) cale_week_scroll_pane_g12

0x166d,	// (0x0008f3b3) cale_week_scroll_pane_g13

0x167e,	// (0x0008f3c4) cale_week_scroll_pane_g14

0x168f,	// (0x0008f3d5) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009cf18) cale_week_scroll_pane_g

0x16a0,	// (0x0008f3e6) cale_week_time_pane

0x16b3,	// (0x0008f3f9) grid_cale_week_pane

0x16c8,	// (0x0008f40e) scroll_pane_cp08

0x16e2,	// (0x0008f428) cell_cale_week_pane_ParamLimits

0x16e2,	// (0x0008f428) cell_cale_week_pane

0x1722,	// (0x0008f468) cale_week_day_heading_pane_t1

0x1736,	// (0x0008f47c) cale_week_day_heading_pane_t2

0x174a,	// (0x0008f490) cale_week_day_heading_pane_t3

0x175e,	// (0x0008f4a4) cale_week_day_heading_pane_t4

0x1772,	// (0x0008f4b8) cale_week_day_heading_pane_t5

0x1786,	// (0x0008f4cc) cale_week_day_heading_pane_t6

0x179c,	// (0x0008f4e2) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009cf37) cale_week_day_heading_pane_t

0xdb14,	// (0x0009b85a) bg_cale_side_pane

0x17b0,	// (0x0008f4f6) cale_week_time_pane_t1

0x17c8,	// (0x0008f50e) cale_week_time_pane_t2

0x17e0,	// (0x0008f526) cale_week_time_pane_t3

0x17f8,	// (0x0008f53e) cale_week_time_pane_t4

0x1810,	// (0x0008f556) cale_week_time_pane_t5

0x1828,	// (0x0008f56e) cale_week_time_pane_t6

0x1840,	// (0x0008f586) cale_week_time_pane_t7

0x1858,	// (0x0008f59e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009cf46) cale_week_time_pane_t

0x1870,	// (0x0008f5b6) cell_cale_week_pane_g2

0x1889,	// (0x0008f5cf) cell_cale_week_pane_g3_ParamLimits

0x1889,	// (0x0008f5cf) cell_cale_week_pane_g3

0xdb22,	// (0x0009b868) grid_highlight_pane_cp07

0xdb2a,	// (0x0009b870) listscroll_gms_pane

0xdb34,	// (0x0009b87a) grid_gms_pane

0xdb3d,	// (0x0009b883) listscroll_gms_pane_g1

0xdb45,	// (0x0009b88b) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009cf57) listscroll_gms_pane_g

0x18a1,	// (0x0008f5e7) scroll_pane_cp010

0x18ac,	// (0x0008f5f2) cell_gms_pane_ParamLimits

0x18ac,	// (0x0008f5f2) cell_gms_pane

0x18bf,	// (0x0008f605) cell_gms_pane_g1

0xdb4d,	// (0x0009b893) cell_gms_pane_g2

0xdacf,	// (0x0009b815) cell_gms_pane_g3

0xdb55,	// (0x0009b89b) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009cf5c) cell_gms_pane_g

0xdb5e,	// (0x0009b8a4) grid_highlight_pane_cp09

0x4375,	// (0x000920bb) phob_pre_status_pane_g1

0x437d,	// (0x000920c3) phob_pre_status_pane_g2

0x4385,	// (0x000920cb) phob_pre_status_pane_g3

0x438d,	// (0x000920d3) phob_pre_status_pane_g4

0x0004,

0xf527,	// (0x0009d26d) phob_pre_status_pane_g

0x439f,	// (0x000920e5) phob_pre_status_pane_t1

0x43ad,	// (0x000920f3) phob_pre_status_pane_t2

0x43bd,	// (0x00092103) phob_pre_status_pane_t3

0x0002,

0xf532,	// (0x0009d278) phob_pre_status_pane_t

0xa353,	// (0x00098099) bg_list_pane_cp05

0xa767,	// (0x000984ad) grid_vorec_pane

0xa76f,	// (0x000984b5) vorec_t1

0xa77d,	// (0x000984c3) vorec_t2

0xa78b,	// (0x000984d1) vorec_t3

0xa799,	// (0x000984df) vorec_t4

0xa7a7,	// (0x000984ed) vorec_t5

0xa7b5,	// (0x000984fb) vorec_t6

0x0006,

0xf21f,	// (0x0009cf65) vorec_t

0xa7d1,	// (0x00098517) wait_bar_pane_cp01

0xdb66,	// (0x0009b8ac) cell_vorec_pane_ParamLimits

0xdb66,	// (0x0009b8ac) cell_vorec_pane

0xdb79,	// (0x0009b8bf) cell_vorec_pane_g1

0xa353,	// (0x00098099) grid_highlight_pane_cp05

0x18df,	// (0x0008f625) cams_zoom_pane

0x18ee,	// (0x0008f634) image_vga_pane

0x1908,	// (0x0008f64e) main_camera_pane_g1

0x191a,	// (0x0008f660) main_camera_pane_g2

0x192c,	// (0x0008f672) main_camera_pane_g3

0x193e,	// (0x0008f684) main_camera_pane_g4

0x1950,	// (0x0008f696) main_camera_pane_g5

0x1962,	// (0x0008f6a8) main_camera_pane_g6

0x1974,	// (0x0008f6ba) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009cf74) main_camera_pane_g

0x1986,	// (0x0008f6cc) main_camera_pane_t1

0x199c,	// (0x0008f6e2) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009cf85) main_camera_pane_t

0x19d8,	// (0x0008f71e) cams_zoom_pane_cp_ParamLimits

0x19d8,	// (0x0008f71e) cams_zoom_pane_cp

0x1a00,	// (0x0008f746) image_cif_pane_ParamLimits

0x1a00,	// (0x0008f746) image_cif_pane

0x1a3b,	// (0x0008f781) image_subqcif_pane

0x1a43,	// (0x0008f789) main_video_pane_g1_ParamLimits

0x1a43,	// (0x0008f789) main_video_pane_g1

0x1a67,	// (0x0008f7ad) main_video_pane_g2_ParamLimits

0x1a67,	// (0x0008f7ad) main_video_pane_g2

0x1a9d,	// (0x0008f7e3) main_video_pane_g3_ParamLimits

0x1a9d,	// (0x0008f7e3) main_video_pane_g3

0x1acd,	// (0x0008f813) main_video_pane_g4_ParamLimits

0x1acd,	// (0x0008f813) main_video_pane_g4

0x1afd,	// (0x0008f843) main_video_pane_g5_ParamLimits

0x1afd,	// (0x0008f843) main_video_pane_g5

0xdb8f,	// (0x0009b8d5) main_video_pane_g6_ParamLimits

0xdb8f,	// (0x0009b8d5) main_video_pane_g6

0x0006,

0xf244,	// (0x0009cf8a) main_video_pane_g_ParamLimits

0xf244,	// (0x0009cf8a) main_video_pane_g

0x1b28,	// (0x0008f86e) main_video_pane_t1_ParamLimits

0x1b28,	// (0x0008f86e) main_video_pane_t1

0xdba9,	// (0x0009b8ef) cams_zoom_pane_g1

0xdbb2,	// (0x0009b8f8) cams_zoom_pane_g2

0xdbbb,	// (0x0009b901) cams_zoom_pane_g3

0xdbc4,	// (0x0009b90a) cams_zoom_pane_g4

0x0003,

0x0015,	// (0x0008dd5b) cams_zoom_pane_g

0x1b85,	// (0x0008f8cb) grid_cams_pane

0x1b9f,	// (0x0008f8e5) linegrid_cams_pane

0x1bb2,	// (0x0008f8f8) cell_cams_pane_ParamLimits

0x1bb2,	// (0x0008f8f8) cell_cams_pane

0xdbcd,	// (0x0009b913) cams_burst_image_pane

0xdbd5,	// (0x0009b91b) cell_cams_pane_g1

0xa353,	// (0x00098099) grid_highlight_pane_cp03

0xda17,	// (0x0009b75d) mp_bg_pane_g1

0xa353,	// (0x00098099) bg_list_pane_cp03

0x42aa,	// (0x00091ff0) bg_mp_pane

0x42b2,	// (0x00091ff8) grid_mp_pane

0x42ba,	// (0x00092000) media_player_g1

0x42c2,	// (0x00092008) media_player_t1

0x42d0,	// (0x00092016) media_player_t2

0x42de,	// (0x00092024) media_player_t3

0x42ec,	// (0x00092032) media_player_t4

0x42fa,	// (0x00092040) media_player_t5

0x4308,	// (0x0009204e) media_player_t6

0x4316,	// (0x0009205c) media_player_t7

0x0006,

0xf511,	// (0x0009d257) media_player_t

0x4324,	// (0x0009206a) wait_bar_pane_cp02

0xf4f6,	// (0x0009d23c) main_usb_pane_t

0x436c,	// (0x000920b2) cell_mp_pane

0xda17,	// (0x0009b75d) cell_mp_pane_g1

0xa353,	// (0x00098099) grid_highlight_pane_cp06

0xdbdd,	// (0x0009b923) grid_skin_colour_pane

0xdbe5,	// (0x0009b92b) list_highlight_pane_cp03

0x1ce2,	// (0x0008fa28) skin_g1

0xdbed,	// (0x0009b933) skin_t1

0xdbfc,	// (0x0009b942) skin_t2

0x0001,

0x004a,	// (0x0008dd90) skin_t

0x1cea,	// (0x0008fa30) cell_skin_colour_pane_ParamLimits

0x1cea,	// (0x0008fa30) cell_skin_colour_pane

0xdc0a,	// (0x0009b950) cell_skin_colour_pane_g1

0x1d63,	// (0x0008faa9) call_video_g1_ParamLimits

0x1d63,	// (0x0008faa9) call_video_g1

0x1d7f,	// (0x0008fac5) call_video_g2_ParamLimits

0x1d7f,	// (0x0008fac5) call_video_g2

0x0001,

0xf27f,	// (0x0009cfc5) call_video_g_ParamLimits

0xf27f,	// (0x0009cfc5) call_video_g

0x1dd1,	// (0x0008fb17) call_video_uplink_pane_cp1_ParamLimits

0x1dd1,	// (0x0008fb17) call_video_uplink_pane_cp1

0xdc1c,	// (0x0009b962) call_video_uplink_pane_cp2

0x1e70,	// (0x0008fbb6) video_down_crop_pane_ParamLimits

0x1e70,	// (0x0008fbb6) video_down_crop_pane

0x1f59,	// (0x0008fc9f) video_down_pane_ParamLimits

0x1f59,	// (0x0008fc9f) video_down_pane

0xdc24,	// (0x0009b96a) video_down_subqcif_pane_ParamLimits

0xdc24,	// (0x0009b96a) video_down_subqcif_pane

0xdc3c,	// (0x0009b982) video_down_subqcif_pane_cp_ParamLimits

0xdc3c,	// (0x0009b982) video_down_subqcif_pane_cp

0xdc60,	// (0x0009b9a6) im_reading_pane_ParamLimits

0xdc60,	// (0x0009b9a6) im_reading_pane

0x2067,	// (0x0008fdad) im_writing_pane_ParamLimits

0x2067,	// (0x0008fdad) im_writing_pane

0x207d,	// (0x0008fdc3) im_reading_pane_t1

0xdc7a,	// (0x0009b9c0) list_im_pane

0xdc8b,	// (0x0009b9d1) scroll_pane_cp07

0x20b9,	// (0x0008fdff) im_writing_pane_t1_ParamLimits

0x20b9,	// (0x0008fdff) im_writing_pane_t1

0xdca4,	// (0x0009b9ea) im_writing_pane_t2_ParamLimits

0xdca4,	// (0x0009b9ea) im_writing_pane_t2

0x0001,

0xf289,	// (0x0009cfcf) im_writing_pane_t_ParamLimits

0xf289,	// (0x0009cfcf) im_writing_pane_t

0xa353,	// (0x00098099) input_focus_pane_cp04

0xa353,	// (0x00098099) input_focus_pane_cp05

0x20ce,	// (0x0008fe14) list_im_single_pane_ParamLimits

0x20ce,	// (0x0008fe14) list_im_single_pane

0x20e4,	// (0x0008fe2a) list_single_im_pane_t1

0x432c,	// (0x00092072) blid_accuracy_pane

0x4334,	// (0x0009207a) blid_compass_pane

0x433e,	// (0x00092084) main_location_t1

0x434e,	// (0x00092094) main_location_t2

0x435e,	// (0x000920a4) main_location_t3

0x0002,

0xf520,	// (0x0009d266) main_location_t

0xa353,	// (0x00098099) aid_levels_location

0xda17,	// (0x0009b75d) blid_accuracy_pane_g1

0xda17,	// (0x0009b75d) blid_accuracy_pane_g2

0x0001,

0x00bb,	// (0x0008de01) blid_accuracy_pane_g

0xdcec,	// (0x0009ba32) wml_content_pane

0xdd2a,	// (0x0009ba70) wml_button_pane_ParamLimits

0xdd2a,	// (0x0009ba70) wml_button_pane

0x20f3,	// (0x0008fe39) wml_list_single_large_pane_ParamLimits

0x20f3,	// (0x0008fe39) wml_list_single_large_pane

0x210a,	// (0x0008fe50) wml_list_single_medium_pane_ParamLimits

0x210a,	// (0x0008fe50) wml_list_single_medium_pane

0x2122,	// (0x0008fe68) wml_list_single_small_pane_ParamLimits

0x2122,	// (0x0008fe68) wml_list_single_small_pane

0xdd3e,	// (0x0009ba84) wml_selection_box_pane_ParamLimits

0xdd3e,	// (0x0009ba84) wml_selection_box_pane

0xdd51,	// (0x0009ba97) wml_list_single_pane_t1

0xdd60,	// (0x0009baa6) wml_list_single_medium_pane_t1

0xdd6f,	// (0x0009bab5) wml_list_single_large_pane_t1

0xdd7e,	// (0x0009bac4) input_focus_pane_cp02_ParamLimits

0xdd7e,	// (0x0009bac4) input_focus_pane_cp02

0xdd91,	// (0x0009bad7) wml_selection_box_pane_g1

0xdd9a,	// (0x0009bae0) wml_selection_box_pane_t1_ParamLimits

0xdd9a,	// (0x0009bae0) wml_selection_box_pane_t1

0xa5ae,	// (0x000982f4) bg_wml_button_pane_ParamLimits

0xa5ae,	// (0x000982f4) bg_wml_button_pane

0xddb2,	// (0x0009baf8) wml_button_pane_g1

0xddba,	// (0x0009bb00) wml_button_pane_t1

0xddb2,	// (0x0009baf8) wml_button_bg_pane_g1

0xddca,	// (0x0009bb10) wml_button_bg_pane_g2

0xddd2,	// (0x0009bb18) wml_button_bg_pane_g3

0xddda,	// (0x0009bb20) wml_button_bg_pane_g4

0xdde2,	// (0x0009bb28) wml_button_bg_pane_g5

0xddea,	// (0x0009bb30) wml_button_bg_pane_g6

0xddf2,	// (0x0009bb38) wml_button_bg_pane_g7

0xddfa,	// (0x0009bb40) wml_button_bg_pane_g8

0xde02,	// (0x0009bb48) wml_button_bg_pane_g9

0x0008,

0x005e,	// (0x0008dda4) wml_button_bg_pane_g

0x2140,	// (0x0008fe86) bg_list_pane_cp02

0xde0a,	// (0x0009bb50) mce_header_pane_ParamLimits

0xde0a,	// (0x0009bb50) mce_header_pane

0xde20,	// (0x0009bb66) mce_icon_pane

0xde20,	// (0x0009bb66) mce_image_pane

0xde29,	// (0x0009bb6f) mce_text_pane_ParamLimits

0xde29,	// (0x0009bb6f) mce_text_pane

0x2148,	// (0x0008fe8e) scroll_pane_cp03

0xdd22,	// (0x0009ba68) scroll_pane_cp04

0xde3c,	// (0x0009bb82) scroll_pane_cp05_ParamLimits

0xde3c,	// (0x0009bb82) scroll_pane_cp05

0x2152,	// (0x0008fe98) mce_header_field_pane_ParamLimits

0x2152,	// (0x0008fe98) mce_header_field_pane

0x2169,	// (0x0008feaf) mce_header_field_pane_2_ParamLimits

0x2169,	// (0x0008feaf) mce_header_field_pane_2

0x217f,	// (0x0008fec5) mce_header_field_pane_3

0x2187,	// (0x0008fecd) list_single_mce_message_pane_ParamLimits

0x2187,	// (0x0008fecd) list_single_mce_message_pane

0x219f,	// (0x0008fee5) list_single_mce_smart_pane_ParamLimits

0x219f,	// (0x0008fee5) list_single_mce_smart_pane

0xde48,	// (0x0009bb8e) input_focus_pane_cp03

0xde51,	// (0x0009bb97) list_header_data_pane

0x21c2,	// (0x0008ff08) mce_header_field_pane_t1

0x21d2,	// (0x0008ff18) list_single_mce_header_pane_ParamLimits

0x21d2,	// (0x0008ff18) list_single_mce_header_pane

0xde59,	// (0x0009bb9f) list_single_mce_header_pane_t1

0xde68,	// (0x0009bbae) list_single_mce_message_pane_g1

0xde70,	// (0x0009bbb6) list_single_mce_message_pane_t1

0x2204,	// (0x0008ff4a) bg_cale_heading_pane_cp01_ParamLimits

0x2204,	// (0x0008ff4a) bg_cale_heading_pane_cp01

0xde7e,	// (0x0009bbc4) bg_cale_pane_cp02_ParamLimits

0xde7e,	// (0x0009bbc4) bg_cale_pane_cp02

0x2227,	// (0x0008ff6d) cale_month_corner_pane

0x223d,	// (0x0008ff83) cale_month_day_heading_pane_ParamLimits

0x223d,	// (0x0008ff83) cale_month_day_heading_pane

0x2270,	// (0x0008ffb6) cale_month_pane_g1_ParamLimits

0x2270,	// (0x0008ffb6) cale_month_pane_g1

0x228c,	// (0x0008ffd2) cale_month_pane_g2_ParamLimits

0x228c,	// (0x0008ffd2) cale_month_pane_g2

0x22a7,	// (0x0008ffed) cale_month_pane_g3_ParamLimits

0x22a7,	// (0x0008ffed) cale_month_pane_g3

0x22d3,	// (0x00090019) cale_month_pane_g4_ParamLimits

0x22d3,	// (0x00090019) cale_month_pane_g4

0x22ff,	// (0x00090045) cale_month_pane_g5_ParamLimits

0x22ff,	// (0x00090045) cale_month_pane_g5

0x2333,	// (0x00090079) cale_month_pane_g6_ParamLimits

0x2333,	// (0x00090079) cale_month_pane_g6

0x236f,	// (0x000900b5) cale_month_pane_g7_ParamLimits

0x236f,	// (0x000900b5) cale_month_pane_g7

0x23ab,	// (0x000900f1) cale_month_pane_g8_ParamLimits

0x23ab,	// (0x000900f1) cale_month_pane_g8

0x23e7,	// (0x0009012d) cale_month_pane_g9_ParamLimits

0x23e7,	// (0x0009012d) cale_month_pane_g9

0x2421,	// (0x00090167) cale_month_pane_g10_ParamLimits

0x2421,	// (0x00090167) cale_month_pane_g10

0x245b,	// (0x000901a1) cale_month_pane_g11_ParamLimits

0x245b,	// (0x000901a1) cale_month_pane_g11

0x2495,	// (0x000901db) cale_month_pane_g12_ParamLimits

0x2495,	// (0x000901db) cale_month_pane_g12

0x24cf,	// (0x00090215) cale_month_pane_g13_ParamLimits

0x24cf,	// (0x00090215) cale_month_pane_g13

0x000c,

0xf28e,	// (0x0009cfd4) cale_month_pane_g_ParamLimits

0xf28e,	// (0x0009cfd4) cale_month_pane_g

0x2509,	// (0x0009024f) cale_month_week_pane

0x251c,	// (0x00090262) grid_cale_month_pane_ParamLimits

0x251c,	// (0x00090262) grid_cale_month_pane

0x254a,	// (0x00090290) cale_month_day_heading_pane_t1

0x25a8,	// (0x000902ee) cale_month_day_heading_pane_t2

0x260d,	// (0x00090353) cale_month_day_heading_pane_t3

0x2672,	// (0x000903b8) cale_month_day_heading_pane_t4

0x26d7,	// (0x0009041d) cale_month_day_heading_pane_t5

0x274c,	// (0x00090492) cale_month_day_heading_pane_t6

0x27c1,	// (0x00090507) cale_month_day_heading_pane_t7

0x0006,

0xf2a9,	// (0x0009cfef) cale_month_day_heading_pane_t

0xdb14,	// (0x0009b85a) bg_cale_side_pane_cp01

0x2836,	// (0x0009057c) cale_month_week_pane_t1

0x284d,	// (0x00090593) cale_month_week_pane_t2

0x2864,	// (0x000905aa) cale_month_week_pane_t3

0x287b,	// (0x000905c1) cale_month_week_pane_t4

0x2892,	// (0x000905d8) cale_month_week_pane_t5

0x28a9,	// (0x000905ef) cale_month_week_pane_t6

0x0005,

0xf2b8,	// (0x0009cffe) cale_month_week_pane_t

0x28c0,	// (0x00090606) cell_cale_month_pane_ParamLimits

0x28c0,	// (0x00090606) cell_cale_month_pane

0xa7d9,	// (0x0009851f) cell_cale_month_pane_g1

0x29c0,	// (0x00090706) cell_cale_month_pane_t1_ParamLimits

0x29c0,	// (0x00090706) cell_cale_month_pane_t1

0xdb22,	// (0x0009b868) grid_highlight_pane_cp08

0xda17,	// (0x0009b75d) main_smil_g1

0x29dc,	// (0x00090722) smil_status_pane

0xdeb3,	// (0x0009bbf9) smil_text_pane

0x4140,	// (0x00091e86) bg_popup_call3_rect_pane_g8

0x4148,	// (0x00091e8e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b4,	// (0x0009d1fa) bg_popup_call3_rect_pane_g

0x4a25,	// (0x0009276b) smil_status_volume_pane_g1

0xdebd,	// (0x0009bc03) smil_status_pane_t1

0xa8d7,	// (0x0009861d) volume_smil_pane

0xded4,	// (0x0009bc1a) list_smil_text_pane

0x29f1,	// (0x00090737) scroll_pane_cp011

0x29fc,	// (0x00090742) smil_text_list_pane_t1_ParamLimits

0x29fc,	// (0x00090742) smil_text_list_pane_t1

0xa7e5,	// (0x0009852b) aid_volume_smil_ParamLimits

0xa7e5,	// (0x0009852b) aid_volume_smil

0xda17,	// (0x0009b75d) smil_volume_pane_g1

0xda17,	// (0x0009b75d) smil_volume_pane_g2

0x0001,

0x00bb,	// (0x0008de01) smil_volume_pane_g

0xd9c2,	// (0x0009b708) listscroll_cale_day_pane

0xdede,	// (0x0009bc24) bg_cale_pane

0xdef6,	// (0x0009bc3c) list_cale_pane

0xdf07,	// (0x0009bc4d) scroll_pane_cp09

0xdf18,	// (0x0009bc5e) cale_bg_pane_g1

0xdf20,	// (0x0009bc66) cale_bg_pane_g2

0xdf28,	// (0x0009bc6e) cale_bg_pane_g3

0xdf30,	// (0x0009bc76) cale_bg_pane_g4

0xdf38,	// (0x0009bc7e) cale_bg_pane_g5

0xdf40,	// (0x0009bc86) cale_bg_pane_g6

0xdf48,	// (0x0009bc8e) cale_bg_pane_g7

0xdf50,	// (0x0009bc96) cale_bg_pane_g8

0xdf58,	// (0x0009bc9e) cale_bg_pane_g9

0x0008,

0x00c0,	// (0x0008de06) cale_bg_pane_g

0x2a50,	// (0x00090796) list_cale_time_pane_ParamLimits

0x2a50,	// (0x00090796) list_cale_time_pane

0x2a65,	// (0x000907ab) list_cale_time_pane_g1_ParamLimits

0x2a65,	// (0x000907ab) list_cale_time_pane_g1

0xdf60,	// (0x0009bca6) list_cale_time_pane_g2_ParamLimits

0xdf60,	// (0x0009bca6) list_cale_time_pane_g2

0x2a71,	// (0x000907b7) list_cale_time_pane_g3_ParamLimits

0x2a71,	// (0x000907b7) list_cale_time_pane_g3

0x2a8d,	// (0x000907d3) list_cale_time_pane_g4_ParamLimits

0x2a8d,	// (0x000907d3) list_cale_time_pane_g4

0x2a9b,	// (0x000907e1) list_cale_time_pane_g5_ParamLimits

0x2a9b,	// (0x000907e1) list_cale_time_pane_g5

0x0005,

0xf2d8,	// (0x0009d01e) list_cale_time_pane_g_ParamLimits

0xf2d8,	// (0x0009d01e) list_cale_time_pane_g

0x2aa9,	// (0x000907ef) list_cale_time_pane_t1_ParamLimits

0x2aa9,	// (0x000907ef) list_cale_time_pane_t1

0x2ad1,	// (0x00090817) list_cale_time_pane_t2_ParamLimits

0x2ad1,	// (0x00090817) list_cale_time_pane_t2

0x2e75,	// (0x00090bbb) aid_blid_cardinal_pane

0x2eb3,	// (0x00090bf9) compass_pane_t4

0x2af9,	// (0x0009083f) list_cale_time_pane_t4_ParamLimits

0x2af9,	// (0x0009083f) list_cale_time_pane_t4

0x2ec1,	// (0x00090c07) compass_pane_t5

0x2ecf,	// (0x00090c15) compass_pane_t6

0x2edd,	// (0x00090c23) compass_pane_t7

0xe39c,	// (0x0009c0e2) navi_pane_cc_t1

0xe4f1,	// (0x0009c237) aid_phob_thumbnail_center_pane

0x3611,	// (0x00091357) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2e5,	// (0x0009d02b) list_cale_time_pane_t_ParamLimits

0xf2e5,	// (0x0009d02b) list_cale_time_pane_t

0x9fac,	// (0x00097cf2) bg_popup_window_pane_cp02_ParamLimits

0x9fac,	// (0x00097cf2) bg_popup_window_pane_cp02

0xdf7a,	// (0x0009bcc0) heading_pane_cp01_ParamLimits

0xdf7a,	// (0x0009bcc0) heading_pane_cp01

0xdf86,	// (0x0009bccc) loc_req_pane_ParamLimits

0xdf86,	// (0x0009bccc) loc_req_pane

0xdf96,	// (0x0009bcdc) loc_type_pane_ParamLimits

0xdf96,	// (0x0009bcdc) loc_type_pane

0xdfa8,	// (0x0009bcee) loc_type_pane_t1_ParamLimits

0xdfa8,	// (0x0009bcee) loc_type_pane_t1

0xdfba,	// (0x0009bd00) loc_type_pane_t2_ParamLimits

0xdfba,	// (0x0009bd00) loc_type_pane_t2

0xdfcc,	// (0x0009bd12) loc_type_pane_t3_ParamLimits

0xdfcc,	// (0x0009bd12) loc_type_pane_t3

0x0002,

0x00e7,	// (0x0008de2d) loc_type_pane_t_ParamLimits

0x00e7,	// (0x0008de2d) loc_type_pane_t

0xdfde,	// (0x0009bd24) list_loc_req_pane

0xdfe8,	// (0x0009bd2e) scroll_pane_cp012

0x2b21,	// (0x00090867) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b21,	// (0x00090867) list_single_loc_request_popup_menu_pane

0xdff3,	// (0x0009bd39) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdff3,	// (0x0009bd39) list_single_loc_request_popup_menu_pane_g1

0xdfff,	// (0x0009bd45) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdfff,	// (0x0009bd45) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x00ee,	// (0x0008de34) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x00ee,	// (0x0008de34) list_single_loc_request_popup_menu_pane_g

0xe00b,	// (0x0009bd51) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe00b,	// (0x0009bd51) list_single_loc_request_popup_menu_pane_t1

0xa5ae,	// (0x000982f4) bg_popup_window_pane_cp03_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_window_pane_cp03

0xf0e0,	// (0x0009ce26) heading_loc_req_pane_ParamLimits

0xf0e0,	// (0x0009ce26) heading_loc_req_pane

0x2b2e,	// (0x00090874) popup_dyc_status_message_window_g1_ParamLimits

0x2b2e,	// (0x00090874) popup_dyc_status_message_window_g1

0x2b42,	// (0x00090888) popup_dyc_status_message_window_t1_ParamLimits

0x2b42,	// (0x00090888) popup_dyc_status_message_window_t1

0x2b57,	// (0x0009089d) popup_dyc_status_message_window_t2_ParamLimits

0x2b57,	// (0x0009089d) popup_dyc_status_message_window_t2

0x2b6c,	// (0x000908b2) popup_dyc_status_message_window_t3_ParamLimits

0x2b6c,	// (0x000908b2) popup_dyc_status_message_window_t3

0x0002,

0xf2ec,	// (0x0009d032) popup_dyc_status_message_window_t_ParamLimits

0xf2ec,	// (0x0009d032) popup_dyc_status_message_window_t

0xa353,	// (0x00098099) bg_heading_pane_cp01

0xe021,	// (0x0009bd67) heading_loc_req_pane_g1

0xe029,	// (0x0009bd6f) heading_loc_req_pane_g2

0xe031,	// (0x0009bd77) heading_loc_req_pane_g3

0x0002,

0x00fa,	// (0x0008de40) heading_loc_req_pane_g

0xe039,	// (0x0009bd7f) heading_loc_req_pane_t1

0xe048,	// (0x0009bd8e) bg_popup_sub_pane_cp01_ParamLimits

0xe048,	// (0x0009bd8e) bg_popup_sub_pane_cp01

0xe056,	// (0x0009bd9c) popup_cale_events_window_g1_ParamLimits

0xe056,	// (0x0009bd9c) popup_cale_events_window_g1

0xe076,	// (0x0009bdbc) popup_cale_events_window_g2_ParamLimits

0xe076,	// (0x0009bdbc) popup_cale_events_window_g2

0x0001,

0x012e,	// (0x0008de74) popup_cale_events_window_g_ParamLimits

0x012e,	// (0x0008de74) popup_cale_events_window_g

0xe096,	// (0x0009bddc) popup_cale_events_window_t1_ParamLimits

0xe096,	// (0x0009bddc) popup_cale_events_window_t1

0xe0a8,	// (0x0009bdee) popup_cale_events_window_t2_ParamLimits

0xe0a8,	// (0x0009bdee) popup_cale_events_window_t2

0xe0e6,	// (0x0009be2c) popup_cale_events_window_t3_ParamLimits

0xe0e6,	// (0x0009be2c) popup_cale_events_window_t3

0xe120,	// (0x0009be66) popup_cale_events_window_t4_ParamLimits

0xe120,	// (0x0009be66) popup_cale_events_window_t4

0x0003,

0x0133,	// (0x0008de79) popup_cale_events_window_t_ParamLimits

0x0133,	// (0x0008de79) popup_cale_events_window_t

0x2c71,	// (0x000909b7) call_type_pane

0x2c81,	// (0x000909c7) popup_call_status_window_g1

0x2c95,	// (0x000909db) popup_call_status_window_g2

0x2ca9,	// (0x000909ef) popup_call_status_window_g3

0x0002,

0xf320,	// (0x0009d066) popup_call_status_window_g

0xe156,	// (0x0009be9c) call_type_pane_g1

0xe15f,	// (0x0009bea5) call_type_pane_g2

0x0001,

0xf327,	// (0x0009d06d) call_type_pane_g

0xa353,	// (0x00098099) bg_popup_sub_pane_cp02

0xe168,	// (0x0009beae) listscroll_popup_wml_pane

0xe170,	// (0x0009beb6) list_wml_pane

0xe17a,	// (0x0009bec0) scroll_pane_cp013

0xe185,	// (0x0009becb) list_single_graphic_popup_wml_pane_ParamLimits

0xe185,	// (0x0009becb) list_single_graphic_popup_wml_pane

0xda17,	// (0x0009b75d) list_single_graphic_popup_wml_pane_g1

0xe199,	// (0x0009bedf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf32c,	// (0x0009d072) list_single_graphic_popup_wml_pane_g

0xe1a1,	// (0x0009bee7) list_single_graphic_popup_wml_pane_t1

0xe1b7,	// (0x0009befd) aid_call_pane

0xa5a6,	// (0x000982ec) popup_clock_analogue_window_g1

0xa5a6,	// (0x000982ec) popup_clock_analogue_window_g2

0xa807,	// (0x0009854d) popup_clock_analogue_window_g3

0xa807,	// (0x0009854d) popup_clock_analogue_window_g4

0xda17,	// (0x0009b75d) popup_clock_analogue_window_g5

0x0004,

0xf331,	// (0x0009d077) popup_clock_analogue_window_g

0xa80f,	// (0x00098555) popup_clock_analogue_window_t1

0xa81d,	// (0x00098563) clock_digital_number_pane_ParamLimits

0xa81d,	// (0x00098563) clock_digital_number_pane

0xa829,	// (0x0009856f) clock_digital_number_pane_cp02_ParamLimits

0xa829,	// (0x0009856f) clock_digital_number_pane_cp02

0xa835,	// (0x0009857b) clock_digital_number_pane_cp03_ParamLimits

0xa835,	// (0x0009857b) clock_digital_number_pane_cp03

0xa841,	// (0x00098587) clock_digital_number_pane_cp04_ParamLimits

0xa841,	// (0x00098587) clock_digital_number_pane_cp04

0xa84d,	// (0x00098593) clock_digital_separator_pane_ParamLimits

0xa84d,	// (0x00098593) clock_digital_separator_pane

0xa859,	// (0x0009859f) popup_clock_digital_window_t1

0xda17,	// (0x0009b75d) clock_digital_number_pane_g1

0xda17,	// (0x0009b75d) clock_digital_number_pane_g2

0x0001,

0x00bb,	// (0x0008de01) clock_digital_number_pane_g

0xda17,	// (0x0009b75d) clock_digital_separator_pane_g1

0xda17,	// (0x0009b75d) clock_digital_separator_pane_g2

0x0001,

0x00bb,	// (0x0008de01) clock_digital_separator_pane_g

0xa353,	// (0x00098099) bg_popup_window_pane_cp04

0xe1cd,	// (0x0009bf13) heading_pane_cp03

0xe1d5,	// (0x0009bf1b) listscroll_popup_gms_pane

0xe1dd,	// (0x0009bf23) grid_large_graphic_popup_pane

0xe1e7,	// (0x0009bf2d) listscroll_popup_gms_pane_g1

0xe1ef,	// (0x0009bf35) listscroll_popup_gms_pane_g2

0x0001,

0x0158,	// (0x0008de9e) listscroll_popup_gms_pane_g

0xdd22,	// (0x0009ba68) scroll_pane_cp014

0xe1f7,	// (0x0009bf3d) cell_large_graphic_popup_pane_ParamLimits

0xe1f7,	// (0x0009bf3d) cell_large_graphic_popup_pane

0xe20f,	// (0x0009bf55) cell_large_graphic_popup_pane_g1_ParamLimits

0xe20f,	// (0x0009bf55) cell_large_graphic_popup_pane_g1

0xe21b,	// (0x0009bf61) cell_large_graphic_popup_pane_g2_ParamLimits

0xe21b,	// (0x0009bf61) cell_large_graphic_popup_pane_g2

0xe227,	// (0x0009bf6d) cell_large_graphic_popup_pane_g3_ParamLimits

0xe227,	// (0x0009bf6d) cell_large_graphic_popup_pane_g3

0xe234,	// (0x0009bf7a) cell_large_graphic_popup_pane_g4_ParamLimits

0xe234,	// (0x0009bf7a) cell_large_graphic_popup_pane_g4

0x0003,

0x015d,	// (0x0008dea3) cell_large_graphic_popup_pane_g_ParamLimits

0x015d,	// (0x0008dea3) cell_large_graphic_popup_pane_g

0xe244,	// (0x0009bf8a) grid_highlight_pane_cp010

0xda17,	// (0x0009b75d) bg_popup_call_pane_g1

0xe24e,	// (0x0009bf94) list_single_graphic_popup_conf_pane_ParamLimits

0xe24e,	// (0x0009bf94) list_single_graphic_popup_conf_pane

0xe260,	// (0x0009bfa6) list_highlight_pane_cp01

0xe269,	// (0x0009bfaf) list_single_graphic_popup_conf_pane_g1

0xe271,	// (0x0009bfb7) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0166,	// (0x0008deac) list_single_graphic_popup_conf_pane_g

0xe279,	// (0x0009bfbf) list_single_graphic_popup_conf_pane_t1

0xe287,	// (0x0009bfcd) linegrid_cams_pane_g1

0x2cb9,	// (0x000909ff) linegrid_cams_pane_g2

0xdacf,	// (0x0009b815) linegrid_cams_pane_g3

0xe290,	// (0x0009bfd6) linegrid_cams_pane_g4

0x2cc2,	// (0x00090a08) linegrid_cams_pane_g5

0x2ccb,	// (0x00090a11) linegrid_cams_pane_g6

0xdb55,	// (0x0009b89b) linegrid_cams_pane_g7

0x0006,

0xf33c,	// (0x0009d082) linegrid_cams_pane_g

0xe299,	// (0x0009bfdf) popup_clock_analogue_window

0xe299,	// (0x0009bfdf) popup_clock_digital_window

0xa353,	// (0x00098099) popup_phob_thumbnail_window

0xda17,	// (0x0009b75d) call_video_uplink_pane_g1

0xe2a2,	// (0x0009bfe8) call_video_uplink_pane_g2

0x0001,

0x017a,	// (0x0008dec0) call_video_uplink_pane_g

0xdb22,	// (0x0009b868) video_uplink_pane

0xe2aa,	// (0x0009bff0) mce_image_pane_g1

0x2cd6,	// (0x00090a1c) mce_image_pane_g2

0x2cde,	// (0x00090a24) mce_image_pane_g3

0x2ce6,	// (0x00090a2c) mce_image_pane_g4

0x2cee,	// (0x00090a34) mce_image_pane_g5

0x0004,

0xf34b,	// (0x0009d091) mce_image_pane_g

0xe2b4,	// (0x0009bffa) control_top_pane_stacon_cp01_ParamLimits

0xe2b4,	// (0x0009bffa) control_top_pane_stacon_cp01

0xe2c8,	// (0x0009c00e) uni_indicator_pane_stacon_cp01_ParamLimits

0xe2c8,	// (0x0009c00e) uni_indicator_pane_stacon_cp01

0xe2d9,	// (0x0009c01f) bg_popup_sub_pane_cp03

0x2cf6,	// (0x00090a3c) chi_dic_find_pane

0x2cfe,	// (0x00090a44) listscroll_chi_dic_pane

0x2d07,	// (0x00090a4d) main_pane_chidic_g1

0x2d1a,	// (0x00090a60) chi_dic_find_pane_t1

0xe2e3,	// (0x0009c029) find_chidic_pane

0xe2ec,	// (0x0009c032) chi_dic_list_pane_ParamLimits

0xe2ec,	// (0x0009c032) chi_dic_list_pane

0xe2fd,	// (0x0009c043) scroll_pane_cp020

0x2d28,	// (0x00090a6e) find_chidic_pane_t1

0xa353,	// (0x00098099) input_focus_pane_cp06

0x2d37,	// (0x00090a7d) list_chi_dic_pane_ParamLimits

0x2d37,	// (0x00090a7d) list_chi_dic_pane

0xe305,	// (0x0009c04b) list_chi_dic_pane_t1_ParamLimits

0xe305,	// (0x0009c04b) list_chi_dic_pane_t1

0xa353,	// (0x00098099) list_highlight_pane_cp020

0xe318,	// (0x0009c05e) bg_cale_heading_pane_g1

0x2d4b,	// (0x00090a91) bg_cale_heading_pane_g2

0x2d53,	// (0x00090a99) bg_cale_heading_pane_g3

0x2d5b,	// (0x00090aa1) bg_cale_heading_pane_g4

0x2d65,	// (0x00090aab) bg_cale_heading_pane_g5

0x2d6f,	// (0x00090ab5) bg_cale_heading_pane_g6

0x2d77,	// (0x00090abd) bg_cale_heading_pane_g7

0x2d7f,	// (0x00090ac5) bg_cale_heading_pane_g8

0x2d89,	// (0x00090acf) bg_cale_heading_pane_g9

0x0008,

0xf356,	// (0x0009d09c) bg_cale_heading_pane_g

0xe318,	// (0x0009c05e) bg_cale_side_pane_g1

0x2d93,	// (0x00090ad9) bg_cale_side_pane_g2

0x2d9b,	// (0x00090ae1) bg_cale_side_pane_g3

0x2da3,	// (0x00090ae9) bg_cale_side_pane_g4

0x2dab,	// (0x00090af1) bg_cale_side_pane_g5

0x2db3,	// (0x00090af9) bg_cale_side_pane_g6

0x2dbb,	// (0x00090b01) bg_cale_side_pane_g7

0x2dc3,	// (0x00090b09) bg_cale_side_pane_g8

0x2dcb,	// (0x00090b11) bg_cale_side_pane_g9

0x0008,

0xf369,	// (0x0009d0af) bg_cale_side_pane_g

0x2dd3,	// (0x00090b19) popup_call_status_window_ParamLimits

0x2dd3,	// (0x00090b19) popup_call_status_window

0xe320,	// (0x0009c066) stacon_top_pane

0xe328,	// (0x0009c06e) status_pane_ParamLimits

0xe328,	// (0x0009c06e) status_pane

0xe33d,	// (0x0009c083) status_small_pane

0xe345,	// (0x0009c08b) control_pane

0xa353,	// (0x00098099) stacon_bottom_pane

0xe34d,	// (0x0009c093) list_single_mce_smart_pane_t1_ParamLimits

0xe34d,	// (0x0009c093) list_single_mce_smart_pane_t1

0xe360,	// (0x0009c0a6) list_single_mce_smart_pane_t2_ParamLimits

0xe360,	// (0x0009c0a6) list_single_mce_smart_pane_t2

0x0001,

0x01b0,	// (0x0008def6) list_single_mce_smart_pane_t_ParamLimits

0x01b0,	// (0x0008def6) list_single_mce_smart_pane_t

0x2e1a,	// (0x00090b60) compass_pane

0x2e23,	// (0x00090b69) main_location2_pane_t1

0x2e37,	// (0x00090b7d) main_location2_pane_t2

0x2e4b,	// (0x00090b91) main_location2_pane_t3

0x0003,

0xf37c,	// (0x0009d0c2) main_location2_pane_t

0xe37f,	// (0x0009c0c5) compass_pane_g1_ParamLimits

0xe37f,	// (0x0009c0c5) compass_pane_g1

0x2e95,	// (0x00090bdb) compass_pane_t1

0x2ea4,	// (0x00090bea) compass_pane_t2

0x0005,

0xf385,	// (0x0009d0cb) compass_pane_t

0x2eeb,	// (0x00090c31) text_secondary_cp61

0xe393,	// (0x0009c0d9) navi_pane_cams_g5

0xe3b6,	// (0x0009c0fc) navi_pane_im_t1

0xe3c4,	// (0x0009c10a) navi_pane_mp_g1_ParamLimits

0xe3c4,	// (0x0009c10a) navi_pane_mp_g1

0xe3d8,	// (0x0009c11e) navi_pane_mp_g2_ParamLimits

0xe3d8,	// (0x0009c11e) navi_pane_mp_g2

0xe3e4,	// (0x0009c12a) navi_pane_mp_g3_ParamLimits

0xe3e4,	// (0x0009c12a) navi_pane_mp_g3

0x0002,

0x01d2,	// (0x0008df18) navi_pane_mp_g_ParamLimits

0x01d2,	// (0x0008df18) navi_pane_mp_g

0xe3f0,	// (0x0009c136) navi_pane_mp_t1

0xe3fe,	// (0x0009c144) navi_pane_mp_t2

0x0002,

0x01d9,	// (0x0008df1f) navi_pane_mp_t

0xe43a,	// (0x0009c180) navi_pane_vt_g1

0xe3f0,	// (0x0009c136) navi_pane_vt_t1

0xe442,	// (0x0009c188) navi_slider_pane

0xe44a,	// (0x0009c190) zooming_pane

0xe452,	// (0x0009c198) navi_slider_pane_g1

0xa876,	// (0x000985bc) navi_slider_pane_g2

0x0006,

0xf399,	// (0x0009d0df) navi_slider_pane_g

0xe476,	// (0x0009c1bc) aid_levels_zoom

0xe47e,	// (0x0009c1c4) zooming_pane_g1

0xe486,	// (0x0009c1cc) zooming_pane_g2

0xe486,	// (0x0009c1cc) zooming_pane_g3

0x0002,

0x01ef,	// (0x0008df35) zooming_pane_g

0xe48e,	// (0x0009c1d4) level_10_zoom

0xe497,	// (0x0009c1dd) level_11_zoom

0xe4a0,	// (0x0009c1e6) level_1_zoom

0xe4a9,	// (0x0009c1ef) level_2_zoom

0xe4b2,	// (0x0009c1f8) level_3_zoom

0xe4bb,	// (0x0009c201) level_4_zoom

0xe4c4,	// (0x0009c20a) level_5_zoom

0xe4cd,	// (0x0009c213) level_6_zoom

0xe4d6,	// (0x0009c21c) level_7_zoom

0xe4df,	// (0x0009c225) level_8_zoom

0xe4e8,	// (0x0009c22e) level_9_zoom

0xe4f9,	// (0x0009c23f) popup_phob_thumbnail_window_g1

0xe501,	// (0x0009c247) popup_phob_thumbnail_window_g2

0x0001,

0x01f6,	// (0x0008df3c) popup_phob_thumbnail_window_g

0x43cd,	// (0x00092113) level_1_location

0x43d5,	// (0x0009211b) level_2_location

0x43dd,	// (0x00092123) level_3_location

0x43e5,	// (0x0009212b) level_4_location

0xe44a,	// (0x0009c190) level_5_location

0x3014,	// (0x00090d5a) mce_icon_pane_g1

0x301c,	// (0x00090d62) mce_icon_pane_g2

0x0001,

0xf3a8,	// (0x0009d0ee) mce_icon_pane_g

0x3024,	// (0x00090d6a) main_mup_pane_g1_ParamLimits

0x3024,	// (0x00090d6a) main_mup_pane_g1

0x303a,	// (0x00090d80) main_mup_pane_g2_ParamLimits

0x303a,	// (0x00090d80) main_mup_pane_g2

0x3052,	// (0x00090d98) main_mup_pane_g3_ParamLimits

0x3052,	// (0x00090d98) main_mup_pane_g3

0x306a,	// (0x00090db0) main_mup_pane_g4_ParamLimits

0x306a,	// (0x00090db0) main_mup_pane_g4

0x3082,	// (0x00090dc8) main_mup_pane_g5_ParamLimits

0x3082,	// (0x00090dc8) main_mup_pane_g5

0x309e,	// (0x00090de4) main_mup_pane_g6_ParamLimits

0x309e,	// (0x00090de4) main_mup_pane_g6

0x30b6,	// (0x00090dfc) main_mup_pane_g7_ParamLimits

0x30b6,	// (0x00090dfc) main_mup_pane_g7

0x30ce,	// (0x00090e14) main_mup_pane_g8_ParamLimits

0x30ce,	// (0x00090e14) main_mup_pane_g8

0x30e6,	// (0x00090e2c) main_mup_pane_g9_ParamLimits

0x30e6,	// (0x00090e2c) main_mup_pane_g9

0x3100,	// (0x00090e46) main_mup_pane_g10_ParamLimits

0x3100,	// (0x00090e46) main_mup_pane_g10

0x311a,	// (0x00090e60) main_mup_pane_g11_ParamLimits

0x311a,	// (0x00090e60) main_mup_pane_g11

0x312e,	// (0x00090e74) main_mup_pane_g12_ParamLimits

0x312e,	// (0x00090e74) main_mup_pane_g12

0x3144,	// (0x00090e8a) main_mup_pane_g13_ParamLimits

0x3144,	// (0x00090e8a) main_mup_pane_g13

0x000c,

0xf3ad,	// (0x0009d0f3) main_mup_pane_g_ParamLimits

0xf3ad,	// (0x0009d0f3) main_mup_pane_g

0x3158,	// (0x00090e9e) main_mup_pane_t1_ParamLimits

0x3158,	// (0x00090e9e) main_mup_pane_t1

0x3172,	// (0x00090eb8) main_mup_pane_t2_ParamLimits

0x3172,	// (0x00090eb8) main_mup_pane_t2

0x318a,	// (0x00090ed0) main_mup_pane_t3_ParamLimits

0x318a,	// (0x00090ed0) main_mup_pane_t3

0x31a2,	// (0x00090ee8) main_mup_pane_t4_ParamLimits

0x31a2,	// (0x00090ee8) main_mup_pane_t4

0x31c0,	// (0x00090f06) main_mup_pane_t5_ParamLimits

0x31c0,	// (0x00090f06) main_mup_pane_t5

0x31d5,	// (0x00090f1b) main_mup_pane_t6_ParamLimits

0x31d5,	// (0x00090f1b) main_mup_pane_t6

0x0005,

0xf3c8,	// (0x0009d10e) main_mup_pane_t_ParamLimits

0xf3c8,	// (0x0009d10e) main_mup_pane_t

0x31e7,	// (0x00090f2d) mup_progress_pane_ParamLimits

0x31e7,	// (0x00090f2d) mup_progress_pane

0x31f3,	// (0x00090f39) mup_visualizer_pane_ParamLimits

0x31f3,	// (0x00090f39) mup_visualizer_pane

0x3227,	// (0x00090f6d) mup_volume_pane_ParamLimits

0x3227,	// (0x00090f6d) mup_volume_pane

0xe1bf,	// (0x0009bf05) mup_visualizer_pane_g1_ParamLimits

0xe1bf,	// (0x0009bf05) mup_visualizer_pane_g1

0xe1bf,	// (0x0009bf05) mup_visualizer_pane_g2_ParamLimits

0xe1bf,	// (0x0009bf05) mup_visualizer_pane_g2

0xe37f,	// (0x0009c0c5) mup_visualizer_pane_g3_ParamLimits

0xe37f,	// (0x0009c0c5) mup_visualizer_pane_g3

0x0002,

0xf3d5,	// (0x0009d11b) mup_visualizer_pane_g_ParamLimits

0xf3d5,	// (0x0009d11b) mup_visualizer_pane_g

0xda17,	// (0x0009b75d) mup_volume_pane_g1

0xe511,	// (0x0009c257) mup_volume_pane_g2

0x0001,

0x022f,	// (0x0008df75) mup_volume_pane_g

0xda17,	// (0x0009b75d) mup_progress_pane_g1

0xe51a,	// (0x0009c260) mup_progress_pane_g2

0xe523,	// (0x0009c269) mup_progress_pane_g3

0x0002,

0x0234,	// (0x0008df7a) mup_progress_pane_g

0xa353,	// (0x00098099) bg_popup_window_pane_cp05

0xe52c,	// (0x0009c272) heading_pane_cp02_ParamLimits

0xe52c,	// (0x0009c272) heading_pane_cp02

0xe546,	// (0x0009c28c) list_popup_blid_pane

0xe54e,	// (0x0009c294) list_blid_sat_info_pane_ParamLimits

0xe54e,	// (0x0009c294) list_blid_sat_info_pane

0xe561,	// (0x0009c2a7) list_blid_sat_info_pane_g1

0xe569,	// (0x0009c2af) list_blid_sat_info_pane_t1

0x333d,	// (0x00091083) mup_equalizer_pane_ParamLimits

0x333d,	// (0x00091083) mup_equalizer_pane

0x3356,	// (0x0009109c) mup_equalizer_pane_cp1_ParamLimits

0x3356,	// (0x0009109c) mup_equalizer_pane_cp1

0x3373,	// (0x000910b9) mup_equalizer_pane_cp2_ParamLimits

0x3373,	// (0x000910b9) mup_equalizer_pane_cp2

0x3390,	// (0x000910d6) mup_equalizer_pane_cp3_ParamLimits

0x3390,	// (0x000910d6) mup_equalizer_pane_cp3

0x33b1,	// (0x000910f7) mup_equalizer_pane_cp4_ParamLimits

0x33b1,	// (0x000910f7) mup_equalizer_pane_cp4

0x33d2,	// (0x00091118) mup_equalizer_pane_cp5

0x33e6,	// (0x0009112c) mup_equalizer_pane_cp6

0x33fa,	// (0x00091140) mup_equalizer_pane_cp7

0x41c8,	// (0x00091f0e) bg_popup_call_poc_act_pane_g9

0x41d0,	// (0x00091f16) bg_popup_call_poc_act_pane_g10

0x41d8,	// (0x00091f1e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa5ae,	// (0x000982f4) mup_scale_pane

0xda17,	// (0x0009b75d) mup_scale_pane_g1

0xe577,	// (0x0009c2bd) mup_scale_pane_g2

0x0006,

0xf3f1,	// (0x0009d137) mup_scale_pane_g

0xe59b,	// (0x0009c2e1) msg_data_pane

0xe5a3,	// (0x0009c2e9) scroll_pane_cp017

0x3420,	// (0x00091166) bg_list_pane_cp04_ParamLimits

0x3420,	// (0x00091166) bg_list_pane_cp04

0xe5ab,	// (0x0009c2f1) msg_data_pane_g1

0x3440,	// (0x00091186) msg_data_pane_g2

0x2cde,	// (0x00090a24) msg_data_pane_g3

0x3448,	// (0x0009118e) msg_data_pane_g4

0x3450,	// (0x00091196) msg_data_pane_g5

0x3458,	// (0x0009119e) msg_data_pane_g6

0x3460,	// (0x000911a6) msg_data_pane_g7

0x0006,

0xf400,	// (0x0009d146) msg_data_pane_g

0x3468,	// (0x000911ae) msg_text_pane_ParamLimits

0x3468,	// (0x000911ae) msg_text_pane

0x348e,	// (0x000911d4) qrid_highlight_pane_cp011_ParamLimits

0x348e,	// (0x000911d4) qrid_highlight_pane_cp011

0xa353,	// (0x00098099) msg_body_pane

0xa353,	// (0x00098099) msg_header_pane

0xe5bc,	// (0x0009c302) input_focus_pane_cp07

0x34b2,	// (0x000911f8) msg_header_pane_t1_ParamLimits

0x34b2,	// (0x000911f8) msg_header_pane_t1

0x34c6,	// (0x0009120c) msg_header_pane_t2_ParamLimits

0x34c6,	// (0x0009120c) msg_header_pane_t2

0x0001,

0xf414,	// (0x0009d15a) msg_header_pane_t_ParamLimits

0xf414,	// (0x0009d15a) msg_header_pane_t

0xe5d1,	// (0x0009c317) msg_body_pane_g1

0x34d8,	// (0x0009121e) msg_body_pane_t1_ParamLimits

0x34d8,	// (0x0009121e) msg_body_pane_t1

0x3509,	// (0x0009124f) msg_body_pane_t2_ParamLimits

0x3509,	// (0x0009124f) msg_body_pane_t2

0x351b,	// (0x00091261) msg_body_pane_t3_ParamLimits

0x351b,	// (0x00091261) msg_body_pane_t3

0x0002,

0xf419,	// (0x0009d15f) msg_body_pane_t_ParamLimits

0xf419,	// (0x0009d15f) msg_body_pane_t

0x3567,	// (0x000912ad) main_viewer_pane_g1_ParamLimits

0x3567,	// (0x000912ad) main_viewer_pane_g1

0x3575,	// (0x000912bb) main_viewer_pane_g2_ParamLimits

0x3575,	// (0x000912bb) main_viewer_pane_g2

0x3583,	// (0x000912c9) main_viewer_pane_g3_ParamLimits

0x3583,	// (0x000912c9) main_viewer_pane_g3

0x3592,	// (0x000912d8) main_viewer_pane_g4_ParamLimits

0x3592,	// (0x000912d8) main_viewer_pane_g4

0xa8a0,	// (0x000985e6) main_viewer_pane_g5_ParamLimits

0xa8a0,	// (0x000985e6) main_viewer_pane_g5

0xa8a0,	// (0x000985e6) main_viewer_pane_g7_ParamLimits

0xa8a0,	// (0x000985e6) main_viewer_pane_g7

0xa8b2,	// (0x000985f8) main_viewer_pane_g8_ParamLimits

0xa8b2,	// (0x000985f8) main_viewer_pane_g8

0x0007,

0xf429,	// (0x0009d16f) main_viewer_pane_g_ParamLimits

0xf429,	// (0x0009d16f) main_viewer_pane_g

0xe5d9,	// (0x0009c31f) viewer_content_pane_ParamLimits

0xe5d9,	// (0x0009c31f) viewer_content_pane

0x35ce,	// (0x00091314) main_postcard_pane_g1_ParamLimits

0x35ce,	// (0x00091314) main_postcard_pane_g1

0x35e4,	// (0x0009132a) main_postcard_pane_g2_ParamLimits

0x35e4,	// (0x0009132a) main_postcard_pane_g2

0x35fa,	// (0x00091340) main_postcard_pane_g3_ParamLimits

0x35fa,	// (0x00091340) main_postcard_pane_g3

0x0005,

0xf43a,	// (0x0009d180) main_postcard_pane_g_ParamLimits

0xf43a,	// (0x0009d180) main_postcard_pane_g

0x3611,	// (0x00091357) main_postcard_pane_g4

0x4a38,	// (0x0009277e) smil_status_volume_pane_g2

0x3654,	// (0x0009139a) postcard_pane_ParamLimits

0x3654,	// (0x0009139a) postcard_pane

0xe5e7,	// (0x0009c32d) postcard_pane_g1_ParamLimits

0xe5e7,	// (0x0009c32d) postcard_pane_g1

0x3696,	// (0x000913dc) postcard_pane_g2_ParamLimits

0x3696,	// (0x000913dc) postcard_pane_g2

0x36a2,	// (0x000913e8) postcard_pane_g3_ParamLimits

0x36a2,	// (0x000913e8) postcard_pane_g3

0xe5f5,	// (0x0009c33b) postcard_pane_g4_ParamLimits

0xe5f5,	// (0x0009c33b) postcard_pane_g4

0x36ae,	// (0x000913f4) postcard_pane_g5_ParamLimits

0x36ae,	// (0x000913f4) postcard_pane_g5

0x36c3,	// (0x00091409) postcard_pane_g6_ParamLimits

0x36c3,	// (0x00091409) postcard_pane_g6

0xe5e7,	// (0x0009c32d) postcard_pane_g7_ParamLimits

0xe5e7,	// (0x0009c32d) postcard_pane_g7

0x0006,

0xf447,	// (0x0009d18d) postcard_pane_g_ParamLimits

0xf447,	// (0x0009d18d) postcard_pane_g

0x36d7,	// (0x0009141d) main_mp2_pane_g1_ParamLimits

0x36d7,	// (0x0009141d) main_mp2_pane_g1

0x36e3,	// (0x00091429) main_mp2_pane_g2_ParamLimits

0x36e3,	// (0x00091429) main_mp2_pane_g2

0x36ef,	// (0x00091435) main_mp2_pane_g3_ParamLimits

0x36ef,	// (0x00091435) main_mp2_pane_g3

0x0002,

0xf456,	// (0x0009d19c) main_mp2_pane_g_ParamLimits

0xf456,	// (0x0009d19c) main_mp2_pane_g

0x36fb,	// (0x00091441) main_mp2_pane_t1_ParamLimits

0x36fb,	// (0x00091441) main_mp2_pane_t1

0x3710,	// (0x00091456) main_mp2_pane_t2_ParamLimits

0x3710,	// (0x00091456) main_mp2_pane_t2

0x3722,	// (0x00091468) main_mp2_pane_t3_ParamLimits

0x3722,	// (0x00091468) main_mp2_pane_t3

0x0002,

0xf45d,	// (0x0009d1a3) main_mp2_pane_t_ParamLimits

0xf45d,	// (0x0009d1a3) main_mp2_pane_t

0xe603,	// (0x0009c349) pec_content_pane_ParamLimits

0xe603,	// (0x0009c349) pec_content_pane

0xdd22,	// (0x0009ba68) scroll_pane_cp015

0xe615,	// (0x0009c35b) pec_attribute_pane_ParamLimits

0xe615,	// (0x0009c35b) pec_attribute_pane

0x3734,	// (0x0009147a) pec_content_pane_g1_ParamLimits

0x3734,	// (0x0009147a) pec_content_pane_g1

0xe625,	// (0x0009c36b) pec_content_pane_t1_ParamLimits

0xe625,	// (0x0009c36b) pec_content_pane_t1

0xe637,	// (0x0009c37d) pec_content_pane_t2_ParamLimits

0xe637,	// (0x0009c37d) pec_content_pane_t2

0x0001,

0x02c3,	// (0x0008e009) pec_content_pane_t_ParamLimits

0x02c3,	// (0x0008e009) pec_content_pane_t

0x3742,	// (0x00091488) list_single_graphic_pane_cp01_ParamLimits

0x3742,	// (0x00091488) list_single_graphic_pane_cp01

0xa5ae,	// (0x000982f4) bg_popup_sub_pane_cp04

0xe649,	// (0x0009c38f) popup_mup_playback_window_g1

0xe655,	// (0x0009c39b) popup_mup_playback_window_t1

0xe66a,	// (0x0009c3b0) popup_mup_playback_window_t2

0x0001,

0x02c8,	// (0x0008e00e) popup_mup_playback_window_t

0xe6a1,	// (0x0009c3e7) main_image_pane_g1_ParamLimits

0xe6a1,	// (0x0009c3e7) main_image_pane_g1

0xe6e4,	// (0x0009c42a) scroll_pane_cp018_ParamLimits

0xe6e4,	// (0x0009c42a) scroll_pane_cp018

0xe6fc,	// (0x0009c442) scroll_pane_cp016_ParamLimits

0xe6fc,	// (0x0009c442) scroll_pane_cp016

0x3812,	// (0x00091558) smil2_image_pane_ParamLimits

0x3812,	// (0x00091558) smil2_image_pane

0x3846,	// (0x0009158c) smil2_root_pane_ParamLimits

0x3846,	// (0x0009158c) smil2_root_pane

0x387e,	// (0x000915c4) smil2_text_pane_ParamLimits

0x387e,	// (0x000915c4) smil2_text_pane

0xa353,	// (0x00098099) bg_list_pane_cp06

0xe738,	// (0x0009c47e) grid_radio_pane

0xa353,	// (0x00098099) bg_popup_window_pane_cp06

0xe740,	// (0x0009c486) main_fmradio_pane_t1

0xe1cd,	// (0x0009bf13) heading_pane_cp04

0xe74e,	// (0x0009c494) main_fmradio_pane_t2

0x4262,	// (0x00091fa8) popup_cale_lunar_info_window_g1

0xe75c,	// (0x0009c4a2) main_fmradio_pane_t3

0x426a,	// (0x00091fb0) popup_cale_lunar_info_window_g2

0xe76a,	// (0x0009c4b0) main_fmradio_pane_t4

0x0001,

0xe778,	// (0x0009c4be) main_fmradio_pane_t5

0x0004,

0xf503,	// (0x0009d249) popup_cale_lunar_info_window_g

0x02dd,	// (0x0008e023) main_fmradio_pane_t

0xe786,	// (0x0009c4cc) wait_bar_pane_cp03

0xe78e,	// (0x0009c4d4) cell_fmradio_pane_ParamLimits

0xe78e,	// (0x0009c4d4) cell_fmradio_pane

0xe5e7,	// (0x0009c32d) cell_fmradio_pane_g1_ParamLimits

0xe5e7,	// (0x0009c32d) cell_fmradio_pane_g1

0xa353,	// (0x00098099) grid_highlight_pane_cp011

0xe7a1,	// (0x0009c4e7) poc_content_pane_ParamLimits

0xe7a1,	// (0x0009c4e7) poc_content_pane

0xe7b3,	// (0x0009c4f9) scroll_pane_cp019

0x38fe,	// (0x00091644) popup_call_poc_act_window_ParamLimits

0x38fe,	// (0x00091644) popup_call_poc_act_window

0x3922,	// (0x00091668) popup_call_poc_inact_window_ParamLimits

0x3922,	// (0x00091668) popup_call_poc_inact_window

0xf4da,	// (0x0009d220) bg_popup_call_poc_act_pane_g

0x4150,	// (0x00091e96) bg_popup_call_poc_inact_pane_g1

0x4158,	// (0x00091e9e) bg_popup_call_poc_inact_pane_g2

0xe7bb,	// (0x0009c501) popup_call_poc_act_window_g2

0x4160,	// (0x00091ea6) bg_popup_call_poc_inact_pane_g3

0x4168,	// (0x00091eae) bg_popup_call_poc_inact_pane_g4

0x4170,	// (0x00091eb6) bg_popup_call_poc_inact_pane_g5

0xe7c3,	// (0x0009c509) popup_call_poc_act_window_t1_ParamLimits

0xe7c3,	// (0x0009c509) popup_call_poc_act_window_t1

0xe7eb,	// (0x0009c531) popup_call_poc_act_window_t2_ParamLimits

0xe7eb,	// (0x0009c531) popup_call_poc_act_window_t2

0xe813,	// (0x0009c559) popup_call_poc_act_window_t3_ParamLimits

0xe813,	// (0x0009c559) popup_call_poc_act_window_t3

0xe83b,	// (0x0009c581) popup_call_poc_act_window_t4_ParamLimits

0xe83b,	// (0x0009c581) popup_call_poc_act_window_t4

0x0003,

0x02e8,	// (0x0008e02e) popup_call_poc_act_window_t_ParamLimits

0x02e8,	// (0x0008e02e) popup_call_poc_act_window_t

0x4178,	// (0x00091ebe) bg_popup_call_poc_inact_pane_g6

0x4180,	// (0x00091ec6) bg_popup_call_poc_inact_pane_g7

0x4188,	// (0x00091ece) bg_popup_call_poc_inact_pane_g8

0xe84d,	// (0x0009c593) popup_call_poc_inact_window_g2

0x4190,	// (0x00091ed6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c7,	// (0x0009d20d) bg_popup_call_poc_inact_pane_g

0xe855,	// (0x0009c59b) popup_call_poc_inact_window_t1_ParamLimits

0xe855,	// (0x0009c59b) popup_call_poc_inact_window_t1

0xe86a,	// (0x0009c5b0) popup_call_poc_inact_window_t2_ParamLimits

0xe86a,	// (0x0009c5b0) popup_call_poc_inact_window_t2

0xe87f,	// (0x0009c5c5) popup_call_poc_inact_window_t3_ParamLimits

0xe87f,	// (0x0009c5c5) popup_call_poc_inact_window_t3

0x0002,

0x02f1,	// (0x0008e037) popup_call_poc_inact_window_t_ParamLimits

0x02f1,	// (0x0008e037) popup_call_poc_inact_window_t

0x48d9,	// (0x0009261f) context_pane_ParamLimits

0x4934,	// (0x0009267a) signal_pane_ParamLimits

0xe44a,	// (0x0009c190) main_call2_pane

0x4871,	// (0x000925b7) popup_phob_thumbnail2_window_ParamLimits

0x4871,	// (0x000925b7) popup_phob_thumbnail2_window

0xa888,	// (0x000985ce) aid_hotspot_pointer_arrow_pane

0xa890,	// (0x000985d6) aid_hotspot_pointer_hand_pane

0x4397,	// (0x000920dd) phob_pre_status_pane_g5

0x18df,	// (0x0008f625) cams_zoom_pane_ParamLimits

0x18ee,	// (0x0008f634) image_vga_pane_ParamLimits

0x1908,	// (0x0008f64e) main_camera_pane_g1_ParamLimits

0x191a,	// (0x0008f660) main_camera_pane_g2_ParamLimits

0x192c,	// (0x0008f672) main_camera_pane_g3_ParamLimits

0x193e,	// (0x0008f684) main_camera_pane_g4_ParamLimits

0x1950,	// (0x0008f696) main_camera_pane_g5_ParamLimits

0x1962,	// (0x0008f6a8) main_camera_pane_g6_ParamLimits

0x1974,	// (0x0008f6ba) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009cf74) main_camera_pane_g_ParamLimits

0x1986,	// (0x0008f6cc) main_camera_pane_t1_ParamLimits

0x199c,	// (0x0008f6e2) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009cf85) main_camera_pane_t_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_preview_window_pane_cp01_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_preview_window_pane_cp01

0xe894,	// (0x0009c5da) popup_phob_thumbnail2_window_g1_ParamLimits

0xe894,	// (0x0009c5da) popup_phob_thumbnail2_window_g1

0xa353,	// (0x00098099) call2_cli_visual_pane

0x3956,	// (0x0009169c) popup_call2_audio_conf_window_ParamLimits

0x3956,	// (0x0009169c) popup_call2_audio_conf_window

0x3976,	// (0x000916bc) popup_call2_audio_first_window_ParamLimits

0x3976,	// (0x000916bc) popup_call2_audio_first_window

0x3a0c,	// (0x00091752) popup_call2_audio_in_window_ParamLimits

0x3a0c,	// (0x00091752) popup_call2_audio_in_window

0x3a54,	// (0x0009179a) popup_call2_audio_out_window_ParamLimits

0x3a54,	// (0x0009179a) popup_call2_audio_out_window

0x3abe,	// (0x00091804) popup_call2_audio_second_window_ParamLimits

0x3abe,	// (0x00091804) popup_call2_audio_second_window

0x3b24,	// (0x0009186a) popup_call2_audio_wait_window_ParamLimits

0x3b24,	// (0x0009186a) popup_call2_audio_wait_window

0xa353,	// (0x00098099) bg_popup_call2_act_pane_cp03

0xa590,	// (0x000982d6) list_conf_pane_cp

0xe8a0,	// (0x0009c5e6) popup_call2_audio_conf_window_t1

0xe8ae,	// (0x0009c5f4) list_single_graphic_popup_conf2_pane_ParamLimits

0xe8ae,	// (0x0009c5f4) list_single_graphic_popup_conf2_pane

0xe260,	// (0x0009bfa6) list_highlight_pane_cp04

0xe8c1,	// (0x0009c607) list_single_graphic_popup_conf2_pane_g1

0xe271,	// (0x0009bfb7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x02f8,	// (0x0008e03e) list_single_graphic_popup_conf2_pane_g

0xe8cb,	// (0x0009c611) list_single_graphic_popup_conf2_pane_t1

0xe8d9,	// (0x0009c61f) bg_popup_call2_act_pane_cp01_ParamLimits

0xe8d9,	// (0x0009c61f) bg_popup_call2_act_pane_cp01

0xe963,	// (0x0009c6a9) call_type_pane_cp05_ParamLimits

0xe963,	// (0x0009c6a9) call_type_pane_cp05

0xe9b7,	// (0x0009c6fd) popup_call2_audio_second_window_g1_ParamLimits

0xe9b7,	// (0x0009c6fd) popup_call2_audio_second_window_g1

0xea0b,	// (0x0009c751) popup_call2_audio_second_window_g2_ParamLimits

0xea0b,	// (0x0009c751) popup_call2_audio_second_window_g2

0x0002,

0x02fd,	// (0x0008e043) popup_call2_audio_second_window_g_ParamLimits

0x02fd,	// (0x0008e043) popup_call2_audio_second_window_g

0xea70,	// (0x0009c7b6) popup_call2_audio_second_window_t1_ParamLimits

0xea70,	// (0x0009c7b6) popup_call2_audio_second_window_t1

0xeb2b,	// (0x0009c871) popup_call2_audio_second_window_t2_ParamLimits

0xeb2b,	// (0x0009c871) popup_call2_audio_second_window_t2

0xeb7e,	// (0x0009c8c4) popup_call2_audio_second_window_t3_ParamLimits

0xeb7e,	// (0x0009c8c4) popup_call2_audio_second_window_t3

0x0003,

0x0304,	// (0x0008e04a) popup_call2_audio_second_window_t_ParamLimits

0x0304,	// (0x0008e04a) popup_call2_audio_second_window_t

0xa353,	// (0x00098099) bg_popup_call2_in_pane_cp02

0xa35d,	// (0x000980a3) call_type_pane_cp04

0xa365,	// (0x000980ab) popup_call2_audio_wait_window_g1

0xa36d,	// (0x000980b3) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009ce61) popup_call2_audio_wait_window_g

0xa375,	// (0x000980bb) popup_call2_audio_wait_window_t3

0xec71,	// (0x0009c9b7) bg_popup_call2_act_pane_ParamLimits

0xec71,	// (0x0009c9b7) bg_popup_call2_act_pane

0xed31,	// (0x0009ca77) call_type_pane_cp03_ParamLimits

0xed31,	// (0x0009ca77) call_type_pane_cp03

0xed95,	// (0x0009cadb) popup_call2_audio_first_window_g1_ParamLimits

0xed95,	// (0x0009cadb) popup_call2_audio_first_window_g1

0xee05,	// (0x0009cb4b) popup_call2_audio_first_window_g2_ParamLimits

0xee05,	// (0x0009cb4b) popup_call2_audio_first_window_g2

0xe1bf,	// (0x0009bf05) popup_call2_audio_first_window_g3_ParamLimits

0xe1bf,	// (0x0009bf05) popup_call2_audio_first_window_g3

0x0004,

0xf474,	// (0x0009d1ba) popup_call2_audio_first_window_g_ParamLimits

0xf474,	// (0x0009d1ba) popup_call2_audio_first_window_g

0xeee3,	// (0x0009cc29) popup_call2_audio_first_window_t1_ParamLimits

0xeee3,	// (0x0009cc29) popup_call2_audio_first_window_t1

0xefe6,	// (0x0009cd2c) popup_call2_audio_first_window_t4_ParamLimits

0xefe6,	// (0x0009cd2c) popup_call2_audio_first_window_t4

0x3b5e,	// (0x000918a4) popup_call2_audio_first_window_t5_ParamLimits

0x3b5e,	// (0x000918a4) popup_call2_audio_first_window_t5

0x0003,

0xf47f,	// (0x0009d1c5) popup_call2_audio_first_window_t_ParamLimits

0xf47f,	// (0x0009d1c5) popup_call2_audio_first_window_t

0xa5a6,	// (0x000982ec) bg_popup_call2_act_pane_g1

0x4272,	// (0x00091fb8) popup_cale_lunar_info_window_t1

0x4280,	// (0x00091fc6) popup_cale_lunar_info_window_t2

0x428e,	// (0x00091fd4) popup_cale_lunar_info_window_t3

0xa353,	// (0x00098099) bg_popup_call2_bubble_pane

0x3c5f,	// (0x000919a5) bg_popup_call2_in_pane_cp01_ParamLimits

0x3c5f,	// (0x000919a5) bg_popup_call2_in_pane_cp01

0xa02f,	// (0x00097d75) call_type_pane_cp02

0x3ca7,	// (0x000919ed) popup_call2_audio_out_window_g1_ParamLimits

0x3ca7,	// (0x000919ed) popup_call2_audio_out_window_g1

0x3cd3,	// (0x00091a19) popup_call2_audio_out_window_g2_ParamLimits

0x3cd3,	// (0x00091a19) popup_call2_audio_out_window_g2

0x3cfb,	// (0x00091a41) popup_call2_audio_out_window_g3_ParamLimits

0x3cfb,	// (0x00091a41) popup_call2_audio_out_window_g3

0x0003,

0xf488,	// (0x0009d1ce) popup_call2_audio_out_window_g_ParamLimits

0xf488,	// (0x0009d1ce) popup_call2_audio_out_window_g

0x3d36,	// (0x00091a7c) popup_call2_audio_out_window_t1_ParamLimits

0x3d36,	// (0x00091a7c) popup_call2_audio_out_window_t1

0x3d95,	// (0x00091adb) popup_call2_audio_out_window_t2_ParamLimits

0x3d95,	// (0x00091adb) popup_call2_audio_out_window_t2

0x3de9,	// (0x00091b2f) popup_call2_audio_out_window_t3_ParamLimits

0x3de9,	// (0x00091b2f) popup_call2_audio_out_window_t3

0x3dff,	// (0x00091b45) popup_call2_audio_out_window_t4_ParamLimits

0x3dff,	// (0x00091b45) popup_call2_audio_out_window_t4

0x3e15,	// (0x00091b5b) popup_call2_audio_out_window_t5_ParamLimits

0x3e15,	// (0x00091b5b) popup_call2_audio_out_window_t5

0x0005,

0xf491,	// (0x0009d1d7) popup_call2_audio_out_window_t_ParamLimits

0xf491,	// (0x0009d1d7) popup_call2_audio_out_window_t

0x3e79,	// (0x00091bbf) bg_popup_call2_in_pane_ParamLimits

0x3e79,	// (0x00091bbf) bg_popup_call2_in_pane

0x3ed5,	// (0x00091c1b) popup_call2_audio_in_window_g1_ParamLimits

0x3ed5,	// (0x00091c1b) popup_call2_audio_in_window_g1

0x3f0d,	// (0x00091c53) popup_call2_audio_in_window_g2_ParamLimits

0x3f0d,	// (0x00091c53) popup_call2_audio_in_window_g2

0x3f45,	// (0x00091c8b) popup_call2_audio_in_window_g3_ParamLimits

0x3f45,	// (0x00091c8b) popup_call2_audio_in_window_g3

0x0003,

0xf49e,	// (0x0009d1e4) popup_call2_audio_in_window_g_ParamLimits

0xf49e,	// (0x0009d1e4) popup_call2_audio_in_window_g

0x3f9d,	// (0x00091ce3) popup_call2_audio_in_window_t1_ParamLimits

0x3f9d,	// (0x00091ce3) popup_call2_audio_in_window_t1

0x401d,	// (0x00091d63) popup_call2_audio_in_window_t2_ParamLimits

0x401d,	// (0x00091d63) popup_call2_audio_in_window_t2

0x409d,	// (0x00091de3) popup_call2_audio_in_window_t3_ParamLimits

0x409d,	// (0x00091de3) popup_call2_audio_in_window_t3

0x40b7,	// (0x00091dfd) popup_call2_audio_in_window_t4_ParamLimits

0x40b7,	// (0x00091dfd) popup_call2_audio_in_window_t4

0x40c9,	// (0x00091e0f) popup_call2_audio_in_window_t5_ParamLimits

0x40c9,	// (0x00091e0f) popup_call2_audio_in_window_t5

0x40de,	// (0x00091e24) popup_call2_audio_in_window_t6_ParamLimits

0x40de,	// (0x00091e24) popup_call2_audio_in_window_t6

0x0005,

0xf4a7,	// (0x0009d1ed) popup_call2_audio_in_window_t_ParamLimits

0xf4a7,	// (0x0009d1ed) popup_call2_audio_in_window_t

0xa5a6,	// (0x000982ec) bg_popup_call2_in_pane_g1

0x429c,	// (0x00091fe2) popup_cale_lunar_info_window_t4

0x0003,

0xf508,	// (0x0009d24e) popup_cale_lunar_info_window_t

0xa5ae,	// (0x000982f4) bg_popup_call2_rect_pane_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_call2_rect_pane

0xa353,	// (0x00098099) call2_cli_visual_graphic_pane

0xa353,	// (0x00098099) call2_cli_visual_text_pane

0xa8ca,	// (0x00098610) smil_status_volume_pane_g3

0x0002,

0xda17,	// (0x0009b75d) call2_cli_visual_graphic_pane_g1

0xda17,	// (0x0009b75d) call2_cli_visual_graphic_pane_g2

0xda17,	// (0x0009b75d) call2_cli_visual_graphic_pane_g3

0x0002,

0x034d,	// (0x0008e093) call2_cli_visual_graphic_pane_g

0x4110,	// (0x00091e56) bg_popup_call2_rect_pane_g1

0xdab5,	// (0x0009b7fb) bg_popup_call2_rect_pane_g2

0x4118,	// (0x00091e5e) bg_popup_call2_rect_pane_g3

0x4120,	// (0x00091e66) bg_popup_call2_rect_pane_g4

0x4128,	// (0x00091e6e) bg_popup_call2_rect_pane_g5

0x4130,	// (0x00091e76) bg_popup_call2_rect_pane_g6

0x4138,	// (0x00091e7e) bg_popup_call2_rect_pane_g7

0x4140,	// (0x00091e86) bg_popup_call2_rect_pane_g8

0x4148,	// (0x00091e8e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b4,	// (0x0009d1fa) bg_popup_call2_rect_pane_g

0x4150,	// (0x00091e96) bg_popup_call2_bubble_pane_g1

0x4158,	// (0x00091e9e) bg_popup_call2_bubble_pane_g2

0x4160,	// (0x00091ea6) bg_popup_call2_bubble_pane_g3

0x4168,	// (0x00091eae) bg_popup_call2_bubble_pane_g4

0x4170,	// (0x00091eb6) bg_popup_call2_bubble_pane_g5

0x4178,	// (0x00091ebe) bg_popup_call2_bubble_pane_g6

0x4180,	// (0x00091ec6) bg_popup_call2_bubble_pane_g7

0x4188,	// (0x00091ece) bg_popup_call2_bubble_pane_g8

0x4190,	// (0x00091ed6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c7,	// (0x0009d20d) bg_popup_call2_bubble_pane_g

0x1541,	// (0x0008f287) aid_cale_week_size_cell_pane

0x19b4,	// (0x0008f6fa) aid_cams_cif_uncrop_pane_ParamLimits

0x19b4,	// (0x0008f6fa) aid_cams_cif_uncrop_pane

0x1b71,	// (0x0008f8b7) aid_cams_size_cell_ParamLimits

0x1b71,	// (0x0008f8b7) aid_cams_size_cell

0x1b85,	// (0x0008f8cb) grid_cams_pane_ParamLimits

0x1b9f,	// (0x0008f8e5) linegrid_cams_pane_ParamLimits

0x1d95,	// (0x0008fadb) call_video_pane_t1

0x1db3,	// (0x0008faf9) call_video_pane_t2

0x0001,

0xf284,	// (0x0009cfca) call_video_pane_t

0x21e6,	// (0x0008ff2c) aid_cale_month_size_cell_pane_ParamLimits

0x21e6,	// (0x0008ff2c) aid_cale_month_size_cell_pane

0xf551,	// (0x0009d297) smil_status_volume_pane_g

0xa8d7,	// (0x0009861d) volume_smil_pane_ParamLimits

0x0e2f,	// (0x0008eb75) aid_popup2_width_pane

0x14b5,	// (0x0008f1fb) cell_qdial_pane_g4_ParamLimits

0x14b5,	// (0x0008f1fb) cell_qdial_pane_g4

0x2e75,	// (0x00090bbb) aid_blid_cardinal_pane_ParamLimits

0x2e81,	// (0x00090bc7) aid_blid_destination_pane_ParamLimits

0x2e81,	// (0x00090bc7) aid_blid_destination_pane

0xa5ae,	// (0x000982f4) bg_popup_call_poc_act_pane_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_call_poc_act_pane

0xa5ae,	// (0x000982f4) bg_popup_call_poc_inact_pane_ParamLimits

0xa5ae,	// (0x000982f4) bg_popup_call_poc_inact_pane

0x41a0,	// (0x00091ee6) bg_popup_call_poc_act_pane_g1

0x41a8,	// (0x00091eee) bg_popup_call_poc_act_pane_g2

0x41b0,	// (0x00091ef6) bg_popup_call_poc_act_pane_g3

0x4168,	// (0x00091eae) bg_popup_call_poc_act_pane_g4

0x4170,	// (0x00091eb6) bg_popup_call_poc_act_pane_g5

0x41b8,	// (0x00091efe) bg_popup_call_poc_act_pane_g6

0x4180,	// (0x00091ec6) bg_popup_call_poc_act_pane_g7

0x41c0,	// (0x00091f06) bg_popup_call_poc_act_pane_g8

0xa353,	// (0x00098099) main_usb_pane

0x46ae,	// (0x000923f4) popup_cale_lunar_info_window

0x207d,	// (0x0008fdc3) im_reading_pane_t1_ParamLimits

0xdc7a,	// (0x0009b9c0) list_im_pane_ParamLimits

0xdc8b,	// (0x0009b9d1) scroll_pane_cp07_ParamLimits

0xa353,	// (0x00098099) grid_highlight_pane_cp012

0xa5ae,	// (0x000982f4) mup_scale_pane_ParamLimits

0xe5e7,	// (0x0009c32d) main_usb_pane_g1_ParamLimits

0xe5e7,	// (0x0009c32d) main_usb_pane_g1

0x41e0,	// (0x00091f26) main_usb_pane_g2_ParamLimits

0x41e0,	// (0x00091f26) main_usb_pane_g2

0x0001,

0xf4f1,	// (0x0009d237) main_usb_pane_g_ParamLimits

0xf4f1,	// (0x0009d237) main_usb_pane_g

0x41f6,	// (0x00091f3c) main_usb_pane_t1_ParamLimits

0x41f6,	// (0x00091f3c) main_usb_pane_t1

0x4208,	// (0x00091f4e) main_usb_pane_t2_ParamLimits

0x4208,	// (0x00091f4e) main_usb_pane_t2

0x421a,	// (0x00091f60) main_usb_pane_t3_ParamLimits

0x421a,	// (0x00091f60) main_usb_pane_t3

0x422c,	// (0x00091f72) main_usb_pane_t4_ParamLimits

0x422c,	// (0x00091f72) main_usb_pane_t4

0x423e,	// (0x00091f84) main_usb_pane_t5_ParamLimits

0x423e,	// (0x00091f84) main_usb_pane_t5

0x4250,	// (0x00091f96) main_usb_pane_t6_ParamLimits

0x4250,	// (0x00091f96) main_usb_pane_t6

0x0005,

0xf4f6,	// (0x0009d23c) main_usb_pane_t_ParamLimits

0x2e1a,	// (0x00090b60) aid_text_placing

0x2e23,	// (0x00090b69) main_location2_pane_t1_ParamLimits

0x2e37,	// (0x00090b7d) main_location2_pane_t2_ParamLimits

0x2e4b,	// (0x00090b91) main_location2_pane_t3_ParamLimits

0x2e61,	// (0x00090ba7) main_location2_pane_t4_ParamLimits

0x2e61,	// (0x00090ba7) main_location2_pane_t4

0xf37c,	// (0x0009d0c2) main_location2_pane_t_ParamLimits

0xa5f2,	// (0x00098338) find_pinb_pane_g2_ParamLimits

0xa5f2,	// (0x00098338) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009ce87) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009ce87) find_pinb_pane_g

0xa5fe,	// (0x00098344) find_pinb_pane_t1_ParamLimits

0xa610,	// (0x00098356) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009ce8c) find_pinb_pane_t_ParamLimits

0xa353,	// (0x00098099) main_call3_pane

0x254a,	// (0x00090290) cale_month_day_heading_pane_t1_ParamLimits

0x25a8,	// (0x000902ee) cale_month_day_heading_pane_t2_ParamLimits

0x260d,	// (0x00090353) cale_month_day_heading_pane_t3_ParamLimits

0x2672,	// (0x000903b8) cale_month_day_heading_pane_t4_ParamLimits

0x26d7,	// (0x0009041d) cale_month_day_heading_pane_t5_ParamLimits

0x274c,	// (0x00090492) cale_month_day_heading_pane_t6_ParamLimits

0x27c1,	// (0x00090507) cale_month_day_heading_pane_t7_ParamLimits

0xf2a9,	// (0x0009cfef) cale_month_day_heading_pane_t_ParamLimits

0xdecb,	// (0x0009bc11) smil_status_volume_pane

0x3672,	// (0x000913b8) postcard_address_pane_ParamLimits

0x3672,	// (0x000913b8) postcard_address_pane

0x3684,	// (0x000913ca) postcard_message_pane_ParamLimits

0x3684,	// (0x000913ca) postcard_message_pane

0x40f3,	// (0x00091e39) call2_cli_visual_pane_t1_ParamLimits

0x40f3,	// (0x00091e39) call2_cli_visual_pane_t1

0x4be7,	// (0x0009292d) postcard_message_pane_t1_ParamLimits

0x4be7,	// (0x0009292d) postcard_message_pane_t1

0x4bd0,	// (0x00092916) postcard_address_pane_t1_ParamLimits

0x4bd0,	// (0x00092916) postcard_address_pane_t1

0x4bbc,	// (0x00092902) popup_call3_audio_in_window_ParamLimits

0x4bbc,	// (0x00092902) popup_call3_audio_in_window

0x4a4b,	// (0x00092791) bg_popup_call3_in_pane_ParamLimits

0x4a4b,	// (0x00092791) bg_popup_call3_in_pane

0x4abd,	// (0x00092803) popup_call3_audio_in_window_g1_ParamLimits

0x4abd,	// (0x00092803) popup_call3_audio_in_window_g1

0x4add,	// (0x00092823) popup_call3_audio_in_window_g2_ParamLimits

0x4add,	// (0x00092823) popup_call3_audio_in_window_g2

0x4afd,	// (0x00092843) popup_call3_audio_in_window_g3_ParamLimits

0x4afd,	// (0x00092843) popup_call3_audio_in_window_g3

0x0003,

0xf558,	// (0x0009d29e) popup_call3_audio_in_window_g_ParamLimits

0xf558,	// (0x0009d29e) popup_call3_audio_in_window_g

0x4b2e,	// (0x00092874) popup_call3_audio_in_window_t1_ParamLimits

0x4b2e,	// (0x00092874) popup_call3_audio_in_window_t1

0x4b6c,	// (0x000928b2) popup_call3_audio_in_window_t2_ParamLimits

0x4b6c,	// (0x000928b2) popup_call3_audio_in_window_t2

0x4baa,	// (0x000928f0) popup_call3_audio_in_window_t3_ParamLimits

0x4baa,	// (0x000928f0) popup_call3_audio_in_window_t3

0x0002,

0xf561,	// (0x0009d2a7) popup_call3_audio_in_window_t_ParamLimits

0xf561,	// (0x0009d2a7) popup_call3_audio_in_window_t

0xe44a,	// (0x0009c190) bg_popup_call3_rect_pane

0x4110,	// (0x00091e56) bg_popup_call3_rect_pane_g1

0xdab5,	// (0x0009b7fb) bg_popup_call3_rect_pane_g2

0x4118,	// (0x00091e5e) bg_popup_call3_rect_pane_g3

0x4120,	// (0x00091e66) bg_popup_call3_rect_pane_g4

0x4128,	// (0x00091e6e) bg_popup_call3_rect_pane_g5

0x4130,	// (0x00091e76) bg_popup_call3_rect_pane_g6

0x4138,	// (0x00091e7e) bg_popup_call3_rect_pane_g7

0x323d,	// (0x00090f83) mup_visualizer_osc_pane

0xe509,	// (0x0009c24f) mup_visualizer_spec_pane

0x4a7b,	// (0x000927c1) call3_video_qcif_pane_ParamLimits

0x4a7b,	// (0x000927c1) call3_video_qcif_pane

0x4a8c,	// (0x000927d2) call3_video_qcif_uncrop_pane_ParamLimits

0x4a8c,	// (0x000927d2) call3_video_qcif_uncrop_pane

0x4a98,	// (0x000927de) call3_video_subqcif_pane_ParamLimits

0x4a98,	// (0x000927de) call3_video_subqcif_pane

0x4aac,	// (0x000927f2) call3_video_subqcif_uncrop_pane_ParamLimits

0x4aac,	// (0x000927f2) call3_video_subqcif_uncrop_pane

0x4b1d,	// (0x00092863) popup_call3_audio_in_window_g4_ParamLimits

0x4b1d,	// (0x00092863) popup_call3_audio_in_window_g4

0x4a0c,	// (0x00092752) mup_spec_half_pane

0x4a15,	// (0x0009275b) mup_spec_half_pane_cp

0x49fa,	// (0x00092740) mup_osc_middle_pane

0x4a03,	// (0x00092749) mup_visualizer_osc_pane_g1

0x49da,	// (0x00092720) mup_spec_bar_pane_ParamLimits

0x49da,	// (0x00092720) mup_spec_bar_pane

0x49c7,	// (0x0009270d) mup_spec_bar_pane_g1

0x49d1,	// (0x00092717) mup_spec_bar_pane_g2

0x0001,

0xf54c,	// (0x0009d292) mup_spec_bar_pane_g

0x1541,	// (0x0008f287) aid_cale_week_size_cell_pane_ParamLimits

0x1554,	// (0x0008f29a) bg_cale_heading_pane_ParamLimits

0xdae9,	// (0x0009b82f) bg_cale_pane_cp01_ParamLimits

0x156c,	// (0x0008f2b2) cale_week_corner_pane_ParamLimits

0x157d,	// (0x0008f2c3) cale_week_day_heading_pane_ParamLimits

0x1595,	// (0x0008f2db) cale_week_scroll_pane_g1_ParamLimits

0x15aa,	// (0x0008f2f0) cale_week_scroll_pane_g2_ParamLimits

0x15bb,	// (0x0008f301) cale_week_scroll_pane_g3_ParamLimits

0x15cc,	// (0x0008f312) cale_week_scroll_pane_g4_ParamLimits

0x15dd,	// (0x0008f323) cale_week_scroll_pane_g5_ParamLimits

0x15f0,	// (0x0008f336) cale_week_scroll_pane_g6_ParamLimits

0x1603,	// (0x0008f349) cale_week_scroll_pane_g7_ParamLimits

0x1616,	// (0x0008f35c) cale_week_scroll_pane_g8_ParamLimits

0x1629,	// (0x0008f36f) cale_week_scroll_pane_g9_ParamLimits

0x163a,	// (0x0008f380) cale_week_scroll_pane_g10_ParamLimits

0x164b,	// (0x0008f391) cale_week_scroll_pane_g11_ParamLimits

0x165c,	// (0x0008f3a2) cale_week_scroll_pane_g12_ParamLimits

0x166d,	// (0x0008f3b3) cale_week_scroll_pane_g13_ParamLimits

0x167e,	// (0x0008f3c4) cale_week_scroll_pane_g14_ParamLimits

0x168f,	// (0x0008f3d5) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009cf18) cale_week_scroll_pane_g_ParamLimits

0x16a0,	// (0x0008f3e6) cale_week_time_pane_ParamLimits

0x16b3,	// (0x0008f3f9) grid_cale_week_pane_ParamLimits

0xdb02,	// (0x0009b848) listscroll_cale_week_pane_t1

0x16c8,	// (0x0008f40e) scroll_pane_cp08_ParamLimits

0x2227,	// (0x0008ff6d) cale_month_corner_pane_ParamLimits

0xdea1,	// (0x0009bbe7) cale_month_pane_t1

0x2509,	// (0x0009024f) cale_month_week_pane_ParamLimits

0x2c81,	// (0x000909c7) popup_call_status_window_g1_ParamLimits

0x2c95,	// (0x000909db) popup_call_status_window_g2_ParamLimits

0x2ca9,	// (0x000909ef) popup_call_status_window_g3_ParamLimits

0xf320,	// (0x0009d066) popup_call_status_window_g_ParamLimits

0xe1af,	// (0x0009bef5) aid_call2_pane

0x34a4,	// (0x000911ea) msg_header_pane_g1

0x3672,	// (0x000913b8) postcard_address2_pane_ParamLimits

0x3672,	// (0x000913b8) postcard_address2_pane

0x3684,	// (0x000913ca) postcard_message2_pane_ParamLimits

0x3684,	// (0x000913ca) postcard_message2_pane

0x4942,	// (0x00092688) message2_row_pane_ParamLimits

0x4942,	// (0x00092688) message2_row_pane

0x4961,	// (0x000926a7) address2_row_pane_ParamLimits

0x4961,	// (0x000926a7) address2_row_pane

0x4974,	// (0x000926ba) postcard_message2_row_pane_g1

0x497c,	// (0x000926c2) postcard_message2_row_pane_t1

0x4974,	// (0x000926ba) address2_row_pane_g1

0x497c,	// (0x000926c2) address2_row_pane_t1

0xa75f,	// (0x000984a5) aid_size_cell_vorec

0xa353,	// (0x00098099) main_rss_pane

0x498a,	// (0x000926d0) rss_list_single_pane_ParamLimits

0x498a,	// (0x000926d0) rss_list_single_pane

0x49ab,	// (0x000926f1) rss_list_single_pane_t1

0x49b9,	// (0x000926ff) rss_list_single_pane_t2

0x0001,

0xf547,	// (0x0009d28d) rss_list_single_pane_t

0xa353,	// (0x00098099) main_camera2_pane

0xa353,	// (0x00098099) main_video2_pane

0x4c60,	// (0x000929a6) cams_zoom_pane_cp2_ParamLimits

0x4c60,	// (0x000929a6) cams_zoom_pane_cp2

0x4c80,	// (0x000929c6) image2_vga_pane_ParamLimits

0x4c80,	// (0x000929c6) image2_vga_pane

0x4cd1,	// (0x00092a17) main_camera2_pane_g1_ParamLimits

0x4cd1,	// (0x00092a17) main_camera2_pane_g1

0x4cf1,	// (0x00092a37) main_camera2_pane_g2_ParamLimits

0x4cf1,	// (0x00092a37) main_camera2_pane_g2

0x4d11,	// (0x00092a57) main_camera2_pane_g3_ParamLimits

0x4d11,	// (0x00092a57) main_camera2_pane_g3

0x4d31,	// (0x00092a77) main_camera2_pane_g4_ParamLimits

0x4d31,	// (0x00092a77) main_camera2_pane_g4

0x4d51,	// (0x00092a97) main_camera2_pane_g5_ParamLimits

0x4d51,	// (0x00092a97) main_camera2_pane_g5

0x4d71,	// (0x00092ab7) main_camera2_pane_g6_ParamLimits

0x4d71,	// (0x00092ab7) main_camera2_pane_g6

0x4d91,	// (0x00092ad7) main_camera2_pane_g7_ParamLimits

0x4d91,	// (0x00092ad7) main_camera2_pane_g7

0x4db1,	// (0x00092af7) main_camera2_pane_g8_ParamLimits

0x4db1,	// (0x00092af7) main_camera2_pane_g8

0x0008,

0xf568,	// (0x0009d2ae) main_camera2_pane_g_ParamLimits

0xf568,	// (0x0009d2ae) main_camera2_pane_g

0x4df1,	// (0x00092b37) main_camera2_pane_t1_ParamLimits

0x4df1,	// (0x00092b37) main_camera2_pane_t1

0x4e26,	// (0x00092b6c) main_camera2_pane_t2_ParamLimits

0x4e26,	// (0x00092b6c) main_camera2_pane_t2

0x4e4c,	// (0x00092b92) main_camera2_pane_t3_ParamLimits

0x4e4c,	// (0x00092b92) main_camera2_pane_t3

0x4eaa,	// (0x00092bf0) main_camera2_pane_t4_ParamLimits

0x4eaa,	// (0x00092bf0) main_camera2_pane_t4

0x0006,

0xf57b,	// (0x0009d2c1) main_camera2_pane_t_ParamLimits

0xf57b,	// (0x0009d2c1) main_camera2_pane_t

0x4f3c,	// (0x00092c82) cams_zoom_pane_cp4_ParamLimits

0x4f3c,	// (0x00092c82) cams_zoom_pane_cp4

0x4f52,	// (0x00092c98) image2_cif_pane_ParamLimits

0x4f52,	// (0x00092c98) image2_cif_pane

0x4f7d,	// (0x00092cc3) image2_subqcif_pane_ParamLimits

0x4f7d,	// (0x00092cc3) image2_subqcif_pane

0x4f97,	// (0x00092cdd) main_video2_pane_g1_ParamLimits

0x4f97,	// (0x00092cdd) main_video2_pane_g1

0x4fb1,	// (0x00092cf7) main_video2_pane_g2_ParamLimits

0x4fb1,	// (0x00092cf7) main_video2_pane_g2

0x4fc7,	// (0x00092d0d) main_video2_pane_g3_ParamLimits

0x4fc7,	// (0x00092d0d) main_video2_pane_g3

0x4fdd,	// (0x00092d23) main_video2_pane_g4_ParamLimits

0x4fdd,	// (0x00092d23) main_video2_pane_g4

0x4ff3,	// (0x00092d39) main_video2_pane_g5_ParamLimits

0x4ff3,	// (0x00092d39) main_video2_pane_g5

0x5009,	// (0x00092d4f) main_video2_pane_g6_ParamLimits

0x5009,	// (0x00092d4f) main_video2_pane_g6

0x0005,

0xf58a,	// (0x0009d2d0) main_video2_pane_g_ParamLimits

0xf58a,	// (0x0009d2d0) main_video2_pane_g

0x5023,	// (0x00092d69) main_video2_pane_t1_ParamLimits

0x5023,	// (0x00092d69) main_video2_pane_t1

0x5047,	// (0x00092d8d) main_video2_pane_t2_ParamLimits

0x5047,	// (0x00092d8d) main_video2_pane_t2

0x5095,	// (0x00092ddb) main_video2_pane_t3_ParamLimits

0x5095,	// (0x00092ddb) main_video2_pane_t3

0x0002,

0xf597,	// (0x0009d2dd) main_video2_pane_t_ParamLimits

0xf597,	// (0x0009d2dd) main_video2_pane_t

0x43f7,	// (0x0009213d) call_muted_g2

0x0001,

0xf539,	// (0x0009d27f) call_muted_g

0xa353,	// (0x00098099) main_mup2_pane

0x50dd,	// (0x00092e23) main_mup2_pane_g1_ParamLimits

0x50dd,	// (0x00092e23) main_mup2_pane_g1

0x50e9,	// (0x00092e2f) main_mup2_pane_g2_ParamLimits

0x50e9,	// (0x00092e2f) main_mup2_pane_g2

0xa945,	// (0x0009868b) main_mup_pane_g13_cp1

0xa94d,	// (0x00098693) mup_volume_pane_cp1

0x5105,	// (0x00092e4b) main_mup2_pane_g4_ParamLimits

0x5105,	// (0x00092e4b) main_mup2_pane_g4

0x5117,	// (0x00092e5d) main_mup2_pane_g5_ParamLimits

0x5117,	// (0x00092e5d) main_mup2_pane_g5

0x5129,	// (0x00092e6f) main_mup2_pane_g6_ParamLimits

0x5129,	// (0x00092e6f) main_mup2_pane_g6

0x513b,	// (0x00092e81) main_mup2_pane_g7_ParamLimits

0x513b,	// (0x00092e81) main_mup2_pane_g7

0x0006,

0xf59e,	// (0x0009d2e4) main_mup2_pane_g_ParamLimits

0xf59e,	// (0x0009d2e4) main_mup2_pane_g

0x5153,	// (0x00092e99) main_mup2_pane_t1_ParamLimits

0x5153,	// (0x00092e99) main_mup2_pane_t1

0x5169,	// (0x00092eaf) main_mup2_pane_t2_ParamLimits

0x5169,	// (0x00092eaf) main_mup2_pane_t2

0x517f,	// (0x00092ec5) main_mup2_pane_t3_ParamLimits

0x517f,	// (0x00092ec5) main_mup2_pane_t3

0x5195,	// (0x00092edb) main_mup2_pane_t4_ParamLimits

0x5195,	// (0x00092edb) main_mup2_pane_t4

0x51ad,	// (0x00092ef3) main_mup2_pane_t5_ParamLimits

0x51ad,	// (0x00092ef3) main_mup2_pane_t5

0x51c5,	// (0x00092f0b) main_mup2_pane_t6_ParamLimits

0x51c5,	// (0x00092f0b) main_mup2_pane_t6

0x0005,

0xf5ad,	// (0x0009d2f3) main_mup2_pane_t_ParamLimits

0xf5ad,	// (0x0009d2f3) main_mup2_pane_t

0x51f5,	// (0x00092f3b) mup2_visualizer_pane_ParamLimits

0x51f5,	// (0x00092f3b) mup2_visualizer_pane

0x5223,	// (0x00092f69) mup_progress_pane_cp_ParamLimits

0x5223,	// (0x00092f69) mup_progress_pane_cp

0xa930,	// (0x00098676) mup_volume_pane_cp_ParamLimits

0xa930,	// (0x00098676) mup_volume_pane_cp

0x5237,	// (0x00092f7d) mup2_visualizer_pane_g1_ParamLimits

0x5237,	// (0x00092f7d) mup2_visualizer_pane_g1

0x524e,	// (0x00092f94) mup2_visualizer_pane_g2_ParamLimits

0x524e,	// (0x00092f94) mup2_visualizer_pane_g2

0x525a,	// (0x00092fa0) mup2_visualizer_pane_g3_ParamLimits

0x525a,	// (0x00092fa0) mup2_visualizer_pane_g3

0x0002,

0xf5ba,	// (0x0009d300) mup2_visualizer_pane_g_ParamLimits

0xf5ba,	// (0x0009d300) mup2_visualizer_pane_g

0xe730,	// (0x0009c476) aid_size_cell_fmradio

0x45da,	// (0x00092320) aid_height_parent_landcape

0xdd09,	// (0x0009ba4f) wml_content_pane_cp

0xdd11,	// (0x0009ba57) wml_tabs_pane

0xdd1a,	// (0x0009ba60) popup_wml_miniature_window

0xdd22,	// (0x0009ba68) scroll_pane_cp021

0xdd36,	// (0x0009ba7c) wml_content_pane_comp8

0xa353,	// (0x00098099) bg_popup_sub_pane_cp05

0x5278,	// (0x00092fbe) popup_wml_miniature_window_g1

0x5280,	// (0x00092fc6) wml_miniature_view_pane

0x5288,	// (0x00092fce) aid_size_wml_view

0x5290,	// (0x00092fd6) wml_miniature_view_pane_g1

0x5299,	// (0x00092fdf) wml_miniature_view_pane_g2

0x52a2,	// (0x00092fe8) wml_miniature_view_pane_g3

0x52aa,	// (0x00092ff0) wml_miniature_view_pane_g4

0x52b2,	// (0x00092ff8) wml_miniature_view_pane_g5

0x52ba,	// (0x00093000) wml_miniature_view_pane_g6

0x52c2,	// (0x00093008) wml_miniature_view_pane_g7

0x52ca,	// (0x00093010) wml_miniature_view_pane_g8

0x0007,

0xf5c1,	// (0x0009d307) wml_miniature_view_pane_g

0x52d2,	// (0x00093018) background_graphic_ParamLimits

0x52d2,	// (0x00093018) background_graphic

0x52de,	// (0x00093024) wml_tabs_2_pane

0x52e7,	// (0x0009302d) wml_tabs_3_pane_ParamLimits

0x52e7,	// (0x0009302d) wml_tabs_3_pane

0x52f9,	// (0x0009303f) wml_tabs_4_pane_ParamLimits

0x52f9,	// (0x0009303f) wml_tabs_4_pane

0x530f,	// (0x00093055) wml_tabs_5_pane_ParamLimits

0x530f,	// (0x00093055) wml_tabs_5_pane

0x5329,	// (0x0009306f) wml_tabs_pane_g2_ParamLimits

0x5329,	// (0x0009306f) wml_tabs_pane_g2

0x533d,	// (0x00093083) wml_tabs_pane_g3_ParamLimits

0x533d,	// (0x00093083) wml_tabs_pane_g3

0x5351,	// (0x00093097) wml_tabs_2_active_pane_ParamLimits

0x5351,	// (0x00093097) wml_tabs_2_active_pane

0x5365,	// (0x000930ab) wml_tabs_2_passive_pane_ParamLimits

0x5365,	// (0x000930ab) wml_tabs_2_passive_pane

0x5379,	// (0x000930bf) wml_tabs_3_active_pane_cp_ParamLimits

0x5379,	// (0x000930bf) wml_tabs_3_active_pane_cp

0x538e,	// (0x000930d4) wml_tabs_3_passive_pane_ParamLimits

0x538e,	// (0x000930d4) wml_tabs_3_passive_pane

0x53a1,	// (0x000930e7) wml_tabs_3_passive_pane_cp_ParamLimits

0x53a1,	// (0x000930e7) wml_tabs_3_passive_pane_cp

0x53b8,	// (0x000930fe) tabs_4_active_pane

0x53c0,	// (0x00093106) tabs_4_passive_pane

0x53ca,	// (0x00093110) tabs_4_passive_pane_cp

0x53d2,	// (0x00093118) tabs_4_passive_pane_cp2

0x4198,	// (0x00091ede) aid_height_text

0x320f,	// (0x00090f55) mup_volume_cont_pane_ParamLimits

0x320f,	// (0x00090f55) mup_volume_cont_pane

0x1196,	// (0x0008eedc) aid_size_cell_pinb

0xa5de,	// (0x00098324) aid_size_list_pinb

0x520f,	// (0x00092f55) mup2_volume_cont_pane_ParamLimits

0x520f,	// (0x00092f55) mup2_volume_cont_pane

0xa91c,	// (0x00098662) mup2_volume_cont_pane_g1_ParamLimits

0xa91c,	// (0x00098662) mup2_volume_cont_pane_g1

0x0e3b,	// (0x0008eb81) aid_size_cell_touch_ParamLimits

0x0e3b,	// (0x0008eb81) aid_size_cell_touch

0x1085,	// (0x0008edcb) touch_pane_ParamLimits

0x1085,	// (0x0008edcb) touch_pane

0x0e1d,	// (0x0008eb63) main_rss2_pane

0x53e5,	// (0x0009312b) listscroll_rss2_pane

0x53ee,	// (0x00093134) rss2_navigation_pane

0x53f6,	// (0x0009313c) list_rss2_pane

0xe2fd,	// (0x0009c043) scroll_pane_cp22

0x53fe,	// (0x00093144) rss2_navigation_pane_g1

0x5407,	// (0x0009314d) rss2_navigation_pane_g2

0x540f,	// (0x00093155) rss2_navigation_pane_g3

0x0002,

0xf5d2,	// (0x0009d318) rss2_navigation_pane_g

0x5417,	// (0x0009315d) rss2_navigation_pane_t1

0x5425,	// (0x0009316b) rss2_list_single_pane_ParamLimits

0x5425,	// (0x0009316b) rss2_list_single_pane

0x543d,	// (0x00093183) rss2_list_single_pane_t2

0xa955,	// (0x0009869b) rss2_list_single_pane_t3_ParamLimits

0xa955,	// (0x0009869b) rss2_list_single_pane_t3

0xa972,	// (0x000986b8) rss2_list_single_pane_t4

0x29e7,	// (0x0009072d) smil_status_pane_g1

0x9f34,	// (0x00097c7a) main_image2_pane_ParamLimits

0x9f34,	// (0x00097c7a) main_image2_pane

0x4dd1,	// (0x00092b17) main_camera2_pane_g9_ParamLimits

0x4dd1,	// (0x00092b17) main_camera2_pane_g9

0x4eff,	// (0x00092c45) main_camera2_pane_t5_ParamLimits

0x4eff,	// (0x00092c45) main_camera2_pane_t5

0xa8ec,	// (0x00098632) main_camera2_pane_t6_ParamLimits

0xa8ec,	// (0x00098632) main_camera2_pane_t6

0x544b,	// (0x00093191) main_image2_pane_g1_ParamLimits

0x544b,	// (0x00093191) main_image2_pane_g1

0x38b4,	// (0x000915fa) smil2_video_pane_ParamLimits

0x38b4,	// (0x000915fa) smil2_video_pane

0x0e7b,	// (0x0008ebc1) aid_zoom_text_primary_cp

0x9f2a,	// (0x00097c70) popup_preview_fixed_window

0xdc72,	// (0x0009b9b8) im_reading_pane_g1

0x4c48,	// (0x0009298e) cams2_bc_adjust_pane_cp_ParamLimits

0x4c48,	// (0x0009298e) cams2_bc_adjust_pane_cp

0x4f2e,	// (0x00092c74) cams2_bc_adjust_pane_ParamLimits

0x4f2e,	// (0x00092c74) cams2_bc_adjust_pane

0xa980,	// (0x000986c6) cams2_bc_adjust_pane_g1

0xa988,	// (0x000986ce) cams2_slider_pane

0xa991,	// (0x000986d7) cams2_slider_pane_g1

0xa99a,	// (0x000986e0) cams2_slider_pane_g2

0x0006,

0xf5d9,	// (0x0009d31f) cams2_slider_pane_g

0x1255,	// (0x0008ef9b) calc_display_pane_ParamLimits

0x127d,	// (0x0008efc3) calc_paper_pane_ParamLimits

0x12a0,	// (0x0008efe6) grid_calc_pane_ParamLimits

0xa859,	// (0x0009859f) popup_clock_digital_window_t1_ParamLimits

0xe6cd,	// (0x0009c413) main_image_pane_t1

0x1237,	// (0x0008ef7d) aid_size_cell_calc_ParamLimits

0x1237,	// (0x0008ef7d) aid_size_cell_calc

0x463e,	// (0x00092384) popup_blid_sat_info2_window_ParamLimits

0x463e,	// (0x00092384) popup_blid_sat_info2_window

0xa9bc,	// (0x00098702) aid_size_cell_blid

0xa9c4,	// (0x0009870a) bg_popup_window_pane_cp07

0xa9e7,	// (0x0009872d) grid_popup_blid_pane

0xa9f1,	// (0x00098737) heading_pane_cp05_ParamLimits

0xa9f1,	// (0x00098737) heading_pane_cp05

0xaabb,	// (0x00098801) cell_popup_blid_pane_ParamLimits

0xaabb,	// (0x00098801) cell_popup_blid_pane

0xaae1,	// (0x00098827) cell_popup_blid_pane_g1

0xaae9,	// (0x0009882f) cell_popup_blid_pane_t1

0x51df,	// (0x00092f25) mup2_indicator_pane_ParamLimits

0x51df,	// (0x00092f25) mup2_indicator_pane

0xe44a,	// (0x0009c190) mup2_visualizer_osc_pane

0x5266,	// (0x00092fac) mup2_visualizer_spec_pane_ParamLimits

0x5266,	// (0x00092fac) mup2_visualizer_spec_pane

0x5461,	// (0x000931a7) mup2_spec_half_pane

0x546a,	// (0x000931b0) mup2_spec_half_pane_cp

0x5472,	// (0x000931b8) mup2_spec_bar_pane_ParamLimits

0x5472,	// (0x000931b8) mup2_spec_bar_pane

0x49c7,	// (0x0009270d) mup2_spec_bar_pane_g1

0x49d1,	// (0x00092717) mup2_spec_bar_pane_g2

0x0001,

0xf54c,	// (0x0009d292) mup2_spec_bar_pane_g

0x5492,	// (0x000931d8) mup2_osc_middle_pane

0x4a03,	// (0x00092749) mup2_visualizer_osc_pane_g1

0x9f62,	// (0x00097ca8) popup_number_entry_window_t1_ParamLimits

0x9f75,	// (0x00097cbb) popup_number_entry_window_t2_ParamLimits

0x9f87,	// (0x00097ccd) popup_number_entry_window_t3_ParamLimits

0x10d7,	// (0x0008ee1d) popup_number_entry_window_t5_ParamLimits

0x10d7,	// (0x0008ee1d) popup_number_entry_window_t5

0xf0ec,	// (0x0009ce32) popup_number_entry_window_t_ParamLimits

0x9f99,	// (0x00097cdf) text_title_cp2_ParamLimits

0xa898,	// (0x000985de) aid_hotspot_pointer_text2_pane

0xa8be,	// (0x00098604) main_viewer_pane_g9_ParamLimits

0xa8be,	// (0x00098604) main_viewer_pane_g9

0xdea1,	// (0x0009bbe7) cale_month_pane_t1_ParamLimits

0xdede,	// (0x0009bc24) bg_cale_pane_ParamLimits

0xdef6,	// (0x0009bc3c) list_cale_pane_ParamLimits

0xdb02,	// (0x0009b848) listscroll_cale_day_pane_t1

0xdf07,	// (0x0009bc4d) scroll_pane_cp09_ParamLimits

0x3245,	// (0x00090f8b) main_mup_eq_pane_t1_ParamLimits

0x3245,	// (0x00090f8b) main_mup_eq_pane_t1

0x325f,	// (0x00090fa5) main_mup_eq_pane_t2_ParamLimits

0x325f,	// (0x00090fa5) main_mup_eq_pane_t2

0x3279,	// (0x00090fbf) main_mup_eq_pane_t3_ParamLimits

0x3279,	// (0x00090fbf) main_mup_eq_pane_t3

0x3295,	// (0x00090fdb) main_mup_eq_pane_t4_ParamLimits

0x3295,	// (0x00090fdb) main_mup_eq_pane_t4

0x32b1,	// (0x00090ff7) main_mup_eq_pane_t5_ParamLimits

0x32b1,	// (0x00090ff7) main_mup_eq_pane_t5

0x32cd,	// (0x00091013) main_mup_eq_pane_t6_ParamLimits

0x32cd,	// (0x00091013) main_mup_eq_pane_t6

0x32e1,	// (0x00091027) main_mup_eq_pane_t7_ParamLimits

0x32e1,	// (0x00091027) main_mup_eq_pane_t7

0x32f5,	// (0x0009103b) main_mup_eq_pane_t8_ParamLimits

0x32f5,	// (0x0009103b) main_mup_eq_pane_t8

0x3309,	// (0x0009104f) main_mup_eq_pane_t9_ParamLimits

0x3309,	// (0x0009104f) main_mup_eq_pane_t9

0x3323,	// (0x00091069) main_mup_eq_pane_t10_ParamLimits

0x3323,	// (0x00091069) main_mup_eq_pane_t10

0x0009,

0xf3dc,	// (0x0009d122) main_mup_eq_pane_t_ParamLimits

0xf3dc,	// (0x0009d122) main_mup_eq_pane_t

0x33d2,	// (0x00091118) mup_equalizer_pane_cp5_ParamLimits

0x33e6,	// (0x0009112c) mup_equalizer_pane_cp6_ParamLimits

0x33fa,	// (0x00091140) mup_equalizer_pane_cp7_ParamLimits

0x0e1d,	// (0x0008eb63) main_gallery_pane

0x4a1d,	// (0x00092763) smil2_volume_pane

0x4a25,	// (0x0009276b) smil_status_volume_pane_g1_ParamLimits

0x4a38,	// (0x0009277e) smil_status_volume_pane_g2_ParamLimits

0xa8ca,	// (0x00098610) smil_status_volume_pane_g3_ParamLimits

0xf551,	// (0x0009d297) smil_status_volume_pane_g_ParamLimits

0xa9c4,	// (0x0009870a) bg_popup_window_pane_cp07_ParamLimits

0xa9d2,	// (0x00098718) blid_firmament_pane

0x549b,	// (0x000931e1) aid_size_cell_gallery_ParamLimits

0x549b,	// (0x000931e1) aid_size_cell_gallery

0x54b1,	// (0x000931f7) grid_gallery_pane_ParamLimits

0x54b1,	// (0x000931f7) grid_gallery_pane

0x54ca,	// (0x00093210) cell_gallery_pane_ParamLimits

0x54ca,	// (0x00093210) cell_gallery_pane

0xaaf7,	// (0x0009883d) bg_cell_gallery_focus_pane_ParamLimits

0xaaf7,	// (0x0009883d) bg_cell_gallery_focus_pane

0xab09,	// (0x0009884f) cell_gallery_pane_g1_ParamLimits

0xab09,	// (0x0009884f) cell_gallery_pane_g1

0x5513,	// (0x00093259) cell_gallery_pane_g2_ParamLimits

0x5513,	// (0x00093259) cell_gallery_pane_g2

0x5520,	// (0x00093266) cell_gallery_pane_g3_ParamLimits

0x5520,	// (0x00093266) cell_gallery_pane_g3

0xab15,	// (0x0009885b) cell_gallery_pane_g4_ParamLimits

0xab15,	// (0x0009885b) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x0009d345) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x0009d345) cell_gallery_pane_g

0xab21,	// (0x00098867) bg_cell_gallery_focus_pane_g1

0xab29,	// (0x0009886f) bg_cell_gallery_focus_pane_g2

0xab31,	// (0x00098877) bg_cell_gallery_focus_pane_g3

0xab39,	// (0x0009887f) bg_cell_gallery_focus_pane_g4

0xab41,	// (0x00098887) bg_cell_gallery_focus_pane_g5

0xab49,	// (0x0009888f) bg_cell_gallery_focus_pane_g6

0xab51,	// (0x00098897) bg_cell_gallery_focus_pane_g7

0xab59,	// (0x0009889f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf608,	// (0x0009d34e) bg_cell_gallery_focus_pane_g

0xab61,	// (0x000988a7) aid_firma_cardinal

0xab75,	// (0x000988bb) blid_firmament_pane_t1

0xab8c,	// (0x000988d2) blid_firmament_pane_t2

0xaba3,	// (0x000988e9) blid_firmament_pane_t3

0xabba,	// (0x00098900) blid_firmament_pane_t4

0x0003,

0xf619,	// (0x0009d35f) blid_firmament_pane_t

0xabd1,	// (0x00098917) blid_sat_info_pane

0xabe1,	// (0x00098927) blid_sat_info_pane_g1

0xabe1,	// (0x00098927) blid_sat_info_pane_g2

0x0001,

0xf622,	// (0x0009d368) blid_sat_info_pane_g

0xabeb,	// (0x00098931) blid_sat_info_pane_t1

0xabf9,	// (0x0009893f) smil2_volume_content_pane

0xac02,	// (0x00098948) smil2_volume_pane_g1

0xac0a,	// (0x00098950) smil2_volume_content_pane_g1

0xac13,	// (0x00098959) smil2_volume_content_pane_g2

0xac1c,	// (0x00098962) smil2_volume_content_pane_g3

0xac25,	// (0x0009896b) smil2_volume_content_pane_g4

0xac2e,	// (0x00098974) smil2_volume_content_pane_g5

0xac37,	// (0x0009897d) smil2_volume_content_pane_g6

0xac40,	// (0x00098986) smil2_volume_content_pane_g7

0xac49,	// (0x0009898f) smil2_volume_content_pane_g8

0xac52,	// (0x00098998) smil2_volume_content_pane_g9

0xac5b,	// (0x000989a1) smil2_volume_content_pane_g10

0x0009,

0xf627,	// (0x0009d36d) smil2_volume_content_pane_g

0x1722,	// (0x0008f468) cale_week_day_heading_pane_t1_ParamLimits

0x1736,	// (0x0008f47c) cale_week_day_heading_pane_t2_ParamLimits

0x174a,	// (0x0008f490) cale_week_day_heading_pane_t3_ParamLimits

0x175e,	// (0x0008f4a4) cale_week_day_heading_pane_t4_ParamLimits

0x1772,	// (0x0008f4b8) cale_week_day_heading_pane_t5_ParamLimits

0x1786,	// (0x0008f4cc) cale_week_day_heading_pane_t6_ParamLimits

0x179c,	// (0x0008f4e2) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009cf37) cale_week_day_heading_pane_t_ParamLimits

0xdb14,	// (0x0009b85a) bg_cale_side_pane_ParamLimits

0x17b0,	// (0x0008f4f6) cale_week_time_pane_t1_ParamLimits

0x17c8,	// (0x0008f50e) cale_week_time_pane_t2_ParamLimits

0x17e0,	// (0x0008f526) cale_week_time_pane_t3_ParamLimits

0x17f8,	// (0x0008f53e) cale_week_time_pane_t4_ParamLimits

0x1810,	// (0x0008f556) cale_week_time_pane_t5_ParamLimits

0x1828,	// (0x0008f56e) cale_week_time_pane_t6_ParamLimits

0x1840,	// (0x0008f586) cale_week_time_pane_t7_ParamLimits

0x1858,	// (0x0008f59e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009cf46) cale_week_time_pane_t_ParamLimits

0x1870,	// (0x0008f5b6) cell_cale_week_pane_g2_ParamLimits

0xdb14,	// (0x0009b85a) bg_cale_side_pane_cp01_ParamLimits

0x2836,	// (0x0009057c) cale_month_week_pane_t1_ParamLimits

0x284d,	// (0x00090593) cale_month_week_pane_t2_ParamLimits

0x2864,	// (0x000905aa) cale_month_week_pane_t3_ParamLimits

0x287b,	// (0x000905c1) cale_month_week_pane_t4_ParamLimits

0x2892,	// (0x000905d8) cale_month_week_pane_t5_ParamLimits

0x28a9,	// (0x000905ef) cale_month_week_pane_t6_ParamLimits

0xf2b8,	// (0x0009cffe) cale_month_week_pane_t_ParamLimits

0xa7d9,	// (0x0009851f) cell_cale_month_pane_g1_ParamLimits

0x0e1d,	// (0x0008eb63) main_cale_event_viewer_pane

0x0e1d,	// (0x0008eb63) listscroll_cale_event_viewer_pane

0xac64,	// (0x000989aa) list_cale_ev_pane

0xac6c,	// (0x000989b2) scroll_pane_cp023

0xac78,	// (0x000989be) field_cale_ev_pane_ParamLimits

0xac78,	// (0x000989be) field_cale_ev_pane

0xac92,	// (0x000989d8) field_cale_ev_content_pane_ParamLimits

0xac92,	// (0x000989d8) field_cale_ev_content_pane

0xac9e,	// (0x000989e4) field_cale_ev_pane_g1_ParamLimits

0xac9e,	// (0x000989e4) field_cale_ev_pane_g1

0xacaa,	// (0x000989f0) field_cale_ev_pane_g2_ParamLimits

0xacaa,	// (0x000989f0) field_cale_ev_pane_g2

0xacc2,	// (0x00098a08) field_cale_ev_pane_g3_ParamLimits

0xacc2,	// (0x00098a08) field_cale_ev_pane_g3

0x0002,

0xf63c,	// (0x0009d382) field_cale_ev_pane_g_ParamLimits

0xf63c,	// (0x0009d382) field_cale_ev_pane_g

0xacda,	// (0x00098a20) field_cale_ev_pane_t1_ParamLimits

0xacda,	// (0x00098a20) field_cale_ev_pane_t1

0xacf1,	// (0x00098a37) field_cale_ev_content_pane_t1_ParamLimits

0xacf1,	// (0x00098a37) field_cale_ev_content_pane_t1

0xe5b3,	// (0x0009c2f9) bg_button_pane_cp01

0xd9c2,	// (0x0009b708) listscroll_cale_week_pane_ParamLimits

0x1537,	// (0x0008f27d) popup_toolbar_window_cp01

0xdb02,	// (0x0009b848) listscroll_cale_week_pane_t1_ParamLimits

0xd9c2,	// (0x0009b708) listscroll_cale_day_pane_ParamLimits

0x2a46,	// (0x0009078c) popup_toolbar_window_cp02

0xdb02,	// (0x0009b848) listscroll_cale_day_pane_t1_ParamLimits

0xd9c2,	// (0x0009b708) main_cale_month_pane_ParamLimits

0x489b,	// (0x000925e1) popup_toolbar_window_cp03_ParamLimits

0x489b,	// (0x000925e1) popup_toolbar_window_cp03

0x3778,	// (0x000914be) main_image_pane_g2_ParamLimits

0x3778,	// (0x000914be) main_image_pane_g2

0x3789,	// (0x000914cf) main_image_pane_g3_ParamLimits

0x3789,	// (0x000914cf) main_image_pane_g3

0x0002,

0xf464,	// (0x0009d1aa) main_image_pane_g_ParamLimits

0xf464,	// (0x0009d1aa) main_image_pane_g

0xe6cd,	// (0x0009c413) main_image_pane_t1_ParamLimits

0x379a,	// (0x000914e0) main_image_pane_t2_ParamLimits

0x379a,	// (0x000914e0) main_image_pane_t2

0x37ac,	// (0x000914f2) main_image_pane_t3_ParamLimits

0x37ac,	// (0x000914f2) main_image_pane_t3

0x37d4,	// (0x0009151a) main_image_pane_t4_ParamLimits

0x37d4,	// (0x0009151a) main_image_pane_t4

0x0003,

0xf46b,	// (0x0009d1b1) main_image_pane_t_ParamLimits

0xf46b,	// (0x0009d1b1) main_image_pane_t

0x37f4,	// (0x0009153a) popup_image_details_window_cp01

0x37fe,	// (0x00091544) popup_toobar_trans_pane_cp01_ParamLimits

0x37fe,	// (0x00091544) popup_toobar_trans_pane_cp01

0x471f,	// (0x00092465) popup_image_details_window_ParamLimits

0x471f,	// (0x00092465) popup_image_details_window

0x4737,	// (0x0009247d) popup_image_focus_window

0x4c02,	// (0x00092948) camera2_autofocus_pane_ParamLimits

0x4c02,	// (0x00092948) camera2_autofocus_pane

0x0e1d,	// (0x0008eb63) bg_popup_sub_pane_cp06

0xad0e,	// (0x00098a54) popup_image_focus_window_g1

0xad16,	// (0x00098a5c) popup_image_focus_window_g2

0xad1e,	// (0x00098a64) popup_image_focus_window_g3

0xad26,	// (0x00098a6c) popup_image_focus_window_g4

0x0003,

0xf643,	// (0x0009d389) popup_image_focus_window_g

0xad2e,	// (0x00098a74) popup_image_focus_window_t1

0xad3c,	// (0x00098a82) popup_image_focus_window_t2

0xad4c,	// (0x00098a92) popup_image_focus_window_t3

0x0002,

0xf64c,	// (0x0009d392) popup_image_focus_window_t

0xad5a,	// (0x00098aa0) camera2_autofocus_pane_g1

0x9f34,	// (0x00097c7a) bg_tb_trans_pane_cp01

0xad68,	// (0x00098aae) popup_image_details_window_g1

0xad7b,	// (0x00098ac1) popup_image_details_window_g2

0x0002,

0xf65e,	// (0x0009d3a4) popup_image_details_window_g

0xada4,	// (0x00098aea) popup_image_details_window_t1

0xadb6,	// (0x00098afc) popup_image_details_window_t2

0xadcf,	// (0x00098b15) popup_image_details_window_t3

0xade3,	// (0x00098b29) popup_image_details_window_t4

0xadfe,	// (0x00098b44) popup_image_details_window_t5

0x0004,

0xf665,	// (0x0009d3ab) popup_image_details_window_t

0xa6b1,	// (0x000983f7) bg_calc_paper_pane_ParamLimits

0xa6c5,	// (0x0009840b) grid_highlight_pane_cp013

0xa6cf,	// (0x00098415) list_calc_pane_ParamLimits

0xa6e1,	// (0x00098427) scroll_pane_cp024

0xd9c2,	// (0x0009b708) bg_calc_display_pane_ParamLimits

0x1395,	// (0x0008f0db) calc_display_pane_t1_ParamLimits

0x13a7,	// (0x0008f0ed) calc_display_pane_t2_ParamLimits

0xa6e9,	// (0x0009842f) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009ceb9) calc_display_pane_t_ParamLimits

0x1462,	// (0x0008f1a8) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009ced6) cell_calc_pane_g

0x146b,	// (0x0008f1b1) cell_calc_pane_t1

0xda21,	// (0x0009b767) grid_highlight_pane_cp02_ParamLimits

0xda37,	// (0x0009b77d) toolbar_button_pane_cp01_ParamLimits

0xda37,	// (0x0009b77d) toolbar_button_pane_cp01

0xe712,	// (0x0009c458) temp_image_control_pane_ParamLimits

0xe712,	// (0x0009c458) temp_image_control_pane

0x9f34,	// (0x00097c7a) main_mp3_pane

0xae18,	// (0x00098b5e) temp_image_control_pane_g1_ParamLimits

0xae18,	// (0x00098b5e) temp_image_control_pane_g1

0xae26,	// (0x00098b6c) temp_image_control_pane_g2_ParamLimits

0xae26,	// (0x00098b6c) temp_image_control_pane_g2

0xae38,	// (0x00098b7e) temp_image_control_pane_g3_ParamLimits

0xae38,	// (0x00098b7e) temp_image_control_pane_g3

0x555d,	// (0x000932a3) temp_image_control_pane_g4_ParamLimits

0x555d,	// (0x000932a3) temp_image_control_pane_g4

0x0003,

0xf670,	// (0x0009d3b6) temp_image_control_pane_g_ParamLimits

0xf670,	// (0x0009d3b6) temp_image_control_pane_g

0xae18,	// (0x00098b5e) main_mp3_pane_g1

0x5570,	// (0x000932b6) main_mp3_pane_g2

0x0007,

0xf679,	// (0x0009d3bf) main_mp3_pane_g

0xae7b,	// (0x00098bc1) main_mp3_pane_t1

0xdb83,	// (0x0009b8c9) main_camera_pane_g8_ParamLimits

0xdb83,	// (0x0009b8c9) main_camera_pane_g8

0x1b17,	// (0x0008f85d) main_video_pane_g7_ParamLimits

0x1b17,	// (0x0008f85d) main_video_pane_g7

0xa90a,	// (0x00098650) main_camera2_pane_t7_ParamLimits

0xa90a,	// (0x00098650) main_camera2_pane_t7

0xdcc9,	// (0x0009ba0f) scroll_pane_cp025_ParamLimits

0xdcc9,	// (0x0009ba0f) scroll_pane_cp025

0xdcdd,	// (0x0009ba23) scroll_pane_cp026_ParamLimits

0xdcdd,	// (0x0009ba23) scroll_pane_cp026

0xdcec,	// (0x0009ba32) wml_content_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_touch_calib_pane

0x563c,	// (0x00093382) main_touch_calib_pane_g1

0x5648,	// (0x0009338e) main_touch_calib_pane_g2

0x5654,	// (0x0009339a) main_touch_calib_pane_g3

0x5660,	// (0x000933a6) main_touch_calib_pane_g4

0x0003,

0xf697,	// (0x0009d3dd) main_touch_calib_pane_g

0x566c,	// (0x000933b2) main_touch_calib_pane_t1

0x5686,	// (0x000933cc) main_touch_calib_pane_t2

0x0004,

0xf6a0,	// (0x0009d3e6) main_touch_calib_pane_t

0xe38b,	// (0x0009c0d1) mup_progress_pane_cp02

0xe3aa,	// (0x0009c0f0) navi_pane_g1

0xe40c,	// (0x0009c152) navi_pane_mp_t3

0x9f34,	// (0x00097c7a) main_mp3_pane_ParamLimits

0x48ec,	// (0x00092632) navi_pane_ParamLimits

0xae18,	// (0x00098b5e) main_mp3_pane_g1_ParamLimits

0x5570,	// (0x000932b6) main_mp3_pane_g2_ParamLimits

0x557e,	// (0x000932c4) main_mp3_pane_g3_ParamLimits

0x557e,	// (0x000932c4) main_mp3_pane_g3

0x558c,	// (0x000932d2) main_mp3_pane_g4_ParamLimits

0x558c,	// (0x000932d2) main_mp3_pane_g4

0xae48,	// (0x00098b8e) main_mp3_pane_g5_ParamLimits

0xae48,	// (0x00098b8e) main_mp3_pane_g5

0xae56,	// (0x00098b9c) main_mp3_pane_g6_ParamLimits

0xae56,	// (0x00098b9c) main_mp3_pane_g6

0xae63,	// (0x00098ba9) main_mp3_pane_g7_ParamLimits

0xae63,	// (0x00098ba9) main_mp3_pane_g7

0xae6f,	// (0x00098bb5) main_mp3_pane_g8_ParamLimits

0xae6f,	// (0x00098bb5) main_mp3_pane_g8

0xf679,	// (0x0009d3bf) main_mp3_pane_g_ParamLimits

0x559a,	// (0x000932e0) main_mp3_pane_t2

0x55a8,	// (0x000932ee) main_mp3_pane_t3

0xae89,	// (0x00098bcf) main_mp3_pane_t4

0xae97,	// (0x00098bdd) main_mp3_pane_t5

0x0005,

0xf68a,	// (0x0009d3d0) main_mp3_pane_t

0xaea5,	// (0x00098beb) mup_progress_pane_cp01

0x0e7b,	// (0x0008ebc1) aid_zoom_text_secondary2

0xac64,	// (0x000989aa) list_cale_ev2_pane

0xac6c,	// (0x000989b2) scroll_pane_cp023_ParamLimits

0x56dc,	// (0x00093422) field_cale_ev2_pane_ParamLimits

0x56dc,	// (0x00093422) field_cale_ev2_pane

0x5702,	// (0x00093448) field_cale_ev2_pane_g1_ParamLimits

0x5702,	// (0x00093448) field_cale_ev2_pane_g1

0x570e,	// (0x00093454) field_cale_ev2_pane_g2_ParamLimits

0x570e,	// (0x00093454) field_cale_ev2_pane_g2

0x5726,	// (0x0009346c) field_cale_ev2_pane_g3_ParamLimits

0x5726,	// (0x0009346c) field_cale_ev2_pane_g3

0x0003,

0xf6ab,	// (0x0009d3f1) field_cale_ev2_pane_g_ParamLimits

0xf6ab,	// (0x0009d3f1) field_cale_ev2_pane_g

0xaeb9,	// (0x00098bff) field_cale_ev2_pane_t1_ParamLimits

0xaeb9,	// (0x00098bff) field_cale_ev2_pane_t1

0xaed0,	// (0x00098c16) field_cale_ev2_pane_t2_ParamLimits

0xaed0,	// (0x00098c16) field_cale_ev2_pane_t2

0x0001,

0xf6b4,	// (0x0009d3fa) field_cale_ev2_pane_t_ParamLimits

0xf6b4,	// (0x0009d3fa) field_cale_ev2_pane_t

0x3628,	// (0x0009136e) main_postcard_pane_g5_ParamLimits

0x3628,	// (0x0009136e) main_postcard_pane_g5

0x363e,	// (0x00091384) main_postcard_pane_g6_ParamLimits

0x363e,	// (0x00091384) main_postcard_pane_g6

0x18c7,	// (0x0008f60d) camera2_autofocus_pane_cp_ParamLimits

0x18c7,	// (0x0008f60d) camera2_autofocus_pane_cp

0x9f34,	// (0x00097c7a) main_mup3_pane

0x575e,	// (0x000934a4) main_mup3_pane_g1_ParamLimits

0x575e,	// (0x000934a4) main_mup3_pane_g1

0x5780,	// (0x000934c6) main_mup3_pane_g2_ParamLimits

0x5780,	// (0x000934c6) main_mup3_pane_g2

0x5801,	// (0x00093547) main_mup3_pane_g3_ParamLimits

0x5801,	// (0x00093547) main_mup3_pane_g3

0x5843,	// (0x00093589) main_mup3_pane_g4_ParamLimits

0x5843,	// (0x00093589) main_mup3_pane_g4

0x5885,	// (0x000935cb) main_mup3_pane_g5_ParamLimits

0x5885,	// (0x000935cb) main_mup3_pane_g5

0x58c9,	// (0x0009360f) main_mup3_pane_g6_ParamLimits

0x58c9,	// (0x0009360f) main_mup3_pane_g6

0xaee5,	// (0x00098c2b) main_mup3_pane_g7_ParamLimits

0xaee5,	// (0x00098c2b) main_mup3_pane_g7

0x0007,

0xf6c4,	// (0x0009d40a) main_mup3_pane_g_ParamLimits

0xf6c4,	// (0x0009d40a) main_mup3_pane_g

0x5945,	// (0x0009368b) main_mup3_pane_t1_ParamLimits

0x5945,	// (0x0009368b) main_mup3_pane_t1

0x59b9,	// (0x000936ff) main_mup3_pane_t2_ParamLimits

0x59b9,	// (0x000936ff) main_mup3_pane_t2

0x5a8d,	// (0x000937d3) main_mup3_pane_t4_ParamLimits

0x5a8d,	// (0x000937d3) main_mup3_pane_t4

0x5ae7,	// (0x0009382d) main_mup3_pane_t5_ParamLimits

0x5ae7,	// (0x0009382d) main_mup3_pane_t5

0x5b9b,	// (0x000938e1) main_mup3_pane_t6_ParamLimits

0x5b9b,	// (0x000938e1) main_mup3_pane_t6

0x0005,

0xf6d5,	// (0x0009d41b) main_mup3_pane_t_ParamLimits

0xf6d5,	// (0x0009d41b) main_mup3_pane_t

0x5c4f,	// (0x00093995) mup3_progress_pane_ParamLimits

0x5c4f,	// (0x00093995) mup3_progress_pane

0x5ccb,	// (0x00093a11) popup_mup3_control_window_ParamLimits

0x5ccb,	// (0x00093a11) popup_mup3_control_window

0xaef3,	// (0x00098c39) popup_mup3_text_window

0x5cfd,	// (0x00093a43) mup3_progress_pane_t1

0x5d14,	// (0x00093a5a) mup3_progress_pane_t2

0xaefb,	// (0x00098c41) mup3_progress_pane_t3

0x0002,

0xf6e2,	// (0x0009d428) mup3_progress_pane_t

0xaf12,	// (0x00098c58) mup_progress_pane_cp03

0x0e1d,	// (0x0008eb63) bg_tb_trans_pane_cp04

0x5d2b,	// (0x00093a71) mup3_volume_pane

0x5d33,	// (0x00093a79) popup_mup3_control_window_g1

0x5d3c,	// (0x00093a82) mup3_volume_pane_g1

0x5d45,	// (0x00093a8b) mup3_volume_pane_g2

0x5d4e,	// (0x00093a94) mup3_volume_pane_g3

0x0002,

0xf6e9,	// (0x0009d42f) mup3_volume_pane_g

0x0e1d,	// (0x0008eb63) bg_tb_trans_pane_cp03

0xaf22,	// (0x00098c68) popup_mup3_text_window_g1

0xaf2a,	// (0x00098c70) popup_mup3_text_window_t1

0xda0a,	// (0x0009b750) list_calc_item_pane_g1_ParamLimits

0x53dc,	// (0x00093122) mup_volume_pane_cp_g1

0x56a0,	// (0x000933e6) main_touch_calib_pane_t3

0x56b4,	// (0x000933fa) main_touch_calib_pane_t4

0x56c8,	// (0x0009340e) main_touch_calib_pane_t5

0x0e27,	// (0x0008eb6d) aid_cell_size_toolbar2

0x0e2f,	// (0x0008eb75) aid_popup3_width_pane

0x0e6b,	// (0x0008ebb1) aid_zoom_text_msg_primary

0xa7c3,	// (0x00098509) vorec_t7

0xd9ce,	// (0x0009b714) bg_calc_paper_pane_g1_ParamLimits

0xd9da,	// (0x0009b720) bg_calc_paper_pane_g2_ParamLimits

0xd9e6,	// (0x0009b72c) bg_calc_paper_pane_g3_ParamLimits

0xd9f2,	// (0x0009b738) bg_calc_paper_pane_g4_ParamLimits

0xd9fe,	// (0x0009b744) bg_calc_paper_pane_g5_ParamLimits

0x13ee,	// (0x0008f134) bg_calc_paper_pane_g6_ParamLimits

0x13fd,	// (0x0008f143) bg_calc_paper_pane_g7_ParamLimits

0x140c,	// (0x0008f152) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009cec0) bg_calc_paper_pane_g_ParamLimits

0x141f,	// (0x0008f165) calc_bg_paper_pane_g9_ParamLimits

0x1a21,	// (0x0008f767) image_qvga_pane_ParamLimits

0x1a21,	// (0x0008f767) image_qvga_pane

0xa5ae,	// (0x000982f4) bg_popup_sub_pane_cp04_ParamLimits

0xe649,	// (0x0009c38f) popup_mup_playback_window_g1_ParamLimits

0xe655,	// (0x0009c39b) popup_mup_playback_window_t1_ParamLimits

0xe66a,	// (0x0009c3b0) popup_mup_playback_window_t2_ParamLimits

0x02c8,	// (0x0008e00e) popup_mup_playback_window_t_ParamLimits

0x50f9,	// (0x00092e3f) main_mup2_pane_g3_ParamLimits

0x50f9,	// (0x00092e3f) main_mup2_pane_g3

0x1e36,	// (0x0008fb7c) popup_toolbar_window_cp04

0xea5f,	// (0x0009c7a5) popup_call2_audio_second_window_g3_ParamLimits

0xea5f,	// (0x0009c7a5) popup_call2_audio_second_window_g3

0xee69,	// (0x0009cbaf) popup_call2_audio_first_window_g4_ParamLimits

0xee69,	// (0x0009cbaf) popup_call2_audio_first_window_g4

0x3f7d,	// (0x00091cc3) popup_call2_audio_in_window_g4_ParamLimits

0x3f7d,	// (0x00091cc3) popup_call2_audio_in_window_g4

0x375a,	// (0x000914a0) aid_area_sk_bg_cut_ParamLimits

0x375a,	// (0x000914a0) aid_area_sk_bg_cut

0xe67f,	// (0x0009c3c5) aid_area_sk_bg_cut_2_ParamLimits

0xe67f,	// (0x0009c3c5) aid_area_sk_bg_cut_2

0x5503,	// (0x00093249) aid_placing_details_win

0x550b,	// (0x00093251) aid_placing_details_win_2

0xad5a,	// (0x00098aa0) camera2_autofocus_pane_g1_ParamLimits

0x1024,	// (0x0008ed6a) popup_fixed_preview_cale_window_ParamLimits

0x1024,	// (0x0008ed6a) popup_fixed_preview_cale_window

0xe45b,	// (0x0009c1a1) navi_slider_pane_g3

0xe464,	// (0x0009c1aa) navi_slider_pane_g4

0xe46d,	// (0x0009c1b3) navi_slider_pane_g5

0xe45b,	// (0x0009c1a1) navi_slider_pane_g6

0xa87f,	// (0x000985c5) navi_slider_pane_g7

0xe580,	// (0x0009c2c6) mup_scale_pane_g3

0xe589,	// (0x0009c2cf) mup_scale_pane_g4

0xe592,	// (0x0009c2d8) mup_scale_pane_g5

0x340e,	// (0x00091154) mup_scale_pane_g6

0x3417,	// (0x0009115d) mup_scale_pane_g7

0xe45b,	// (0x0009c1a1) cams2_slider_pane_g3

0xa9a3,	// (0x000986e9) cams2_slider_pane_g4

0xa9ab,	// (0x000986f1) cams2_slider_pane_g5

0xe45b,	// (0x0009c1a1) cams2_slider_pane_g6

0xa9b3,	// (0x000986f9) cams2_slider_pane_g7

0xabe1,	// (0x00098927) camera2_autofocus_pane_cp_g1

0xaf38,	// (0x00098c7e) bg_popup_preview_window_pane_cp02_ParamLimits

0xaf38,	// (0x00098c7e) bg_popup_preview_window_pane_cp02

0xaf44,	// (0x00098c8a) list_fp_cale_pane_ParamLimits

0xaf44,	// (0x00098c8a) list_fp_cale_pane

0xaf50,	// (0x00098c96) popup_fixed_preview_cale_window_t1_ParamLimits

0xaf50,	// (0x00098c96) popup_fixed_preview_cale_window_t1

0x5d57,	// (0x00093a9d) popup_fixed_preview_cale_window_t2_ParamLimits

0x5d57,	// (0x00093a9d) popup_fixed_preview_cale_window_t2

0x5d6c,	// (0x00093ab2) popup_fixed_preview_cale_window_t3_ParamLimits

0x5d6c,	// (0x00093ab2) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f0,	// (0x0009d436) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f0,	// (0x0009d436) popup_fixed_preview_cale_window_t

0x5d81,	// (0x00093ac7) list_single_fp_cale_pane_ParamLimits

0x5d81,	// (0x00093ac7) list_single_fp_cale_pane

0xaf6e,	// (0x00098cb4) list_single_fp_cale_pane_g1_ParamLimits

0xaf6e,	// (0x00098cb4) list_single_fp_cale_pane_g1

0xaf7a,	// (0x00098cc0) list_single_fp_cale_pane_g2_ParamLimits

0xaf7a,	// (0x00098cc0) list_single_fp_cale_pane_g2

0x0002,

0xf6f7,	// (0x0009d43d) list_single_fp_cale_pane_g_ParamLimits

0xf6f7,	// (0x0009d43d) list_single_fp_cale_pane_g

0xaf93,	// (0x00098cd9) list_single_fp_cale_pane_t1_ParamLimits

0xaf93,	// (0x00098cd9) list_single_fp_cale_pane_t1

0xafa5,	// (0x00098ceb) list_single_fp_cale_pane_t2_ParamLimits

0xafa5,	// (0x00098ceb) list_single_fp_cale_pane_t2

0x0001,

0xf6fe,	// (0x0009d444) list_single_fp_cale_pane_t_ParamLimits

0xf6fe,	// (0x0009d444) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e1d,	// (0x0008eb63) main_dialer_pane

0x5d99,	// (0x00093adf) aid_cell_size_keypad

0x5da3,	// (0x00093ae9) dialer_ne_pane

0x5dab,	// (0x00093af1) grid_dialer_command_1_pane

0x5db3,	// (0x00093af9) grid_dialer_command_2_pane

0x5dbb,	// (0x00093b01) grid_dialer_keypad_pane

0x5dcd,	// (0x00093b13) bg_popup_call_pane_cp06_ParamLimits

0x5dcd,	// (0x00093b13) bg_popup_call_pane_cp06

0x5dd9,	// (0x00093b1f) dialer_ne_clear_pane_ParamLimits

0x5dd9,	// (0x00093b1f) dialer_ne_clear_pane

0xafd8,	// (0x00098d1e) dialer_ne_pane_g1

0xafe0,	// (0x00098d26) dialer_ne_pane_t1_ParamLimits

0xafe0,	// (0x00098d26) dialer_ne_pane_t1

0x5de5,	// (0x00093b2b) dialer_ne_pane_t2_ParamLimits

0x5de5,	// (0x00093b2b) dialer_ne_pane_t2

0x5e0f,	// (0x00093b55) dialer_ne_pane_t3_ParamLimits

0x5e0f,	// (0x00093b55) dialer_ne_pane_t3

0x0002,

0xf703,	// (0x0009d449) dialer_ne_pane_t_ParamLimits

0xf703,	// (0x0009d449) dialer_ne_pane_t

0x5e3f,	// (0x00093b85) dialer_ne_pane_t3_copy1_ParamLimits

0x5e3f,	// (0x00093b85) dialer_ne_pane_t3_copy1

0x5e6e,	// (0x00093bb4) cell_dialer_keypad_pane_ParamLimits

0x5e6e,	// (0x00093bb4) cell_dialer_keypad_pane

0x5e85,	// (0x00093bcb) cell_dialer_command_1_pane_ParamLimits

0x5e85,	// (0x00093bcb) cell_dialer_command_1_pane

0x5e9b,	// (0x00093be1) cell_dialer_command_2_pane_ParamLimits

0x5e9b,	// (0x00093be1) cell_dialer_command_2_pane

0xaff2,	// (0x00098d38) bg_button_pane_cp02_ParamLimits

0xaff2,	// (0x00098d38) bg_button_pane_cp02

0x5eaa,	// (0x00093bf0) cell_dialer_keypad_pane_g1_ParamLimits

0x5eaa,	// (0x00093bf0) cell_dialer_keypad_pane_g1

0xaff2,	// (0x00098d38) bg_button_pane_cp03_ParamLimits

0xaff2,	// (0x00098d38) bg_button_pane_cp03

0x5ebf,	// (0x00093c05) cell_dialer_command_1_pane_g1_ParamLimits

0x5ebf,	// (0x00093c05) cell_dialer_command_1_pane_g1

0xaffe,	// (0x00098d44) bg_button_pane_cp04

0x5ed3,	// (0x00093c19) cell_dialer_command_2_pane_g1

0xe44a,	// (0x0009c190) bg_button_pane_cp06

0xb006,	// (0x00098d4c) dialer_ne_clear_pane_g1

0x2f4c,	// (0x00090c92) navi_pane_g2

0x2f7a,	// (0x00090cc0) navi_pane_g3

0x0002,

0xf392,	// (0x0009d0d8) navi_pane_g

0x2fa3,	// (0x00090ce9) navi_pane_mv_g2

0x2fca,	// (0x00090d10) navi_pane_mv_g5

0x2fd2,	// (0x00090d18) navi_pane_mv_t1

0xd9c2,	// (0x0009b708) main_clock2_pane

0x5f06,	// (0x00093c4c) main_clock2_list_pane_ParamLimits

0x5f06,	// (0x00093c4c) main_clock2_list_pane

0x5f3c,	// (0x00093c82) main_clock2_pane_t1_ParamLimits

0x5f3c,	// (0x00093c82) main_clock2_pane_t1

0x5f7a,	// (0x00093cc0) main_clock2_pane_t2_ParamLimits

0x5f7a,	// (0x00093cc0) main_clock2_pane_t2

0x0004,

0xf70a,	// (0x0009d450) main_clock2_pane_t_ParamLimits

0xf70a,	// (0x0009d450) main_clock2_pane_t

0x6004,	// (0x00093d4a) popup_clock_analogue_window_cp03_ParamLimits

0x6004,	// (0x00093d4a) popup_clock_analogue_window_cp03

0x602b,	// (0x00093d71) popup_clock_digital_window_cp02_ParamLimits

0x602b,	// (0x00093d71) popup_clock_digital_window_cp02

0x60a0,	// (0x00093de6) main_clock2_list_single_pane_ParamLimits

0x60a0,	// (0x00093de6) main_clock2_list_single_pane

0xe44a,	// (0x0009c190) list_highlight_pane_cp05

0xb00e,	// (0x00098d54) main_clock2_list_single_pane_t1

0x1e36,	// (0x0008fb7c) popup_toolbar_window_cp04_ParamLimits

0x552d,	// (0x00093273) camera2_autofocus_pane_g2_ParamLimits

0x552d,	// (0x00093273) camera2_autofocus_pane_g2

0x5539,	// (0x0009327f) camera2_autofocus_pane_g3_ParamLimits

0x5539,	// (0x0009327f) camera2_autofocus_pane_g3

0x5545,	// (0x0009328b) camera2_autofocus_pane_g4_ParamLimits

0x5545,	// (0x0009328b) camera2_autofocus_pane_g4

0x5551,	// (0x00093297) camera2_autofocus_pane_g5_ParamLimits

0x5551,	// (0x00093297) camera2_autofocus_pane_g5

0x0004,

0xf653,	// (0x0009d399) camera2_autofocus_pane_g_ParamLimits

0xf653,	// (0x0009d399) camera2_autofocus_pane_g

0x573e,	// (0x00093484) camera2_autofocus_pane_cp_g2

0x5746,	// (0x0009348c) camera2_autofocus_pane_cp_g3

0x574e,	// (0x00093494) camera2_autofocus_pane_cp_g4

0x5756,	// (0x0009349c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6b9,	// (0x0009d3ff) camera2_autofocus_pane_cp_g

0x5dc5,	// (0x00093b0b) popup_dialer_spcha_window

0x0e1d,	// (0x0008eb63) bg_popup_sub_pane_cp07

0xb01c,	// (0x00098d62) list_spcha_pane

0xb024,	// (0x00098d6a) list_single_spcha_pane_ParamLimits

0xb024,	// (0x00098d6a) list_single_spcha_pane

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp06

0xb035,	// (0x00098d7b) list_single_spcha_pane_t1

0x3d27,	// (0x00091a6d) popup_call2_audio_out_window_g4_ParamLimits

0x3d27,	// (0x00091a6d) popup_call2_audio_out_window_g4

0x0e1d,	// (0x0008eb63) main_imed2_pane

0x473f,	// (0x00092485) popup_imed_adjust2_window

0x4752,	// (0x00092498) popup_imed_trans_window_ParamLimits

0x4752,	// (0x00092498) popup_imed_trans_window

0xaa1d,	// (0x00098763) popup_blid_sat_info2_window_t1

0xaa2b,	// (0x00098771) popup_blid_sat_info2_window_t2

0x000a,

0xf5e8,	// (0x0009d32e) popup_blid_sat_info2_window_t

0x614a,	// (0x00093e90) aid_size_cell_colour_35

0x616a,	// (0x00093eb0) aid_size_cell_colour_112

0x618a,	// (0x00093ed0) aid_size_cell_effect

0x4600,	// (0x00092346) bg_tb_trans_pane_cp02

0xdf7a,	// (0x0009bcc0) heading_imed_pane

0x61aa,	// (0x00093ef0) listscroll_imed_pane

0xb043,	// (0x00098d89) heading_imed_pane_g1

0xb04b,	// (0x00098d91) heading_imed_pane_t1

0xb059,	// (0x00098d9f) grid_imed_colour_35_pane_ParamLimits

0xb059,	// (0x00098d9f) grid_imed_colour_35_pane

0x61b6,	// (0x00093efc) grid_imed_effect_pane

0xb074,	// (0x00098dba) list_imed_aspect_pane

0x61cb,	// (0x00093f11) scroll_pane_cp027_ParamLimits

0x61cb,	// (0x00093f11) scroll_pane_cp027

0x61dc,	// (0x00093f22) cell_imed_effect_pane_ParamLimits

0x61dc,	// (0x00093f22) cell_imed_effect_pane

0xb07c,	// (0x00098dc2) cell_imed_colour_pane_ParamLimits

0xb07c,	// (0x00098dc2) cell_imed_colour_pane

0xb0be,	// (0x00098e04) cell_imed_colour_pane_g1_ParamLimits

0xb0be,	// (0x00098e04) cell_imed_colour_pane_g1

0xb0cf,	// (0x00098e15) hgihlgiht_grid_pane_cp016_ParamLimits

0xb0cf,	// (0x00098e15) hgihlgiht_grid_pane_cp016

0x6203,	// (0x00093f49) cell_imed_effect_pane_g1

0x620b,	// (0x00093f51) grid_highlight_pane_cp017

0xf0c9,	// (0x0009ce0f) list_imed_single_pane_ParamLimits

0xf0c9,	// (0x0009ce0f) list_imed_single_pane

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp07

0xb0e0,	// (0x00098e26) list_imed_aspect_pane_comp1_t1

0x4600,	// (0x00092346) bg_tb_trans_pane_cp05

0xb102,	// (0x00098e48) popup_imed_adjust2_window_g1

0xb129,	// (0x00098e6f) popup_imed_adjust2_window_t1

0xb141,	// (0x00098e87) slider_imed_adjust_pane

0xb155,	// (0x00098e9b) slider_imed_adjust_pane_g1

0xb165,	// (0x00098eab) slider_imed_adjust_pane_g2

0xb175,	// (0x00098ebb) slider_imed_adjust_pane_g3

0xb186,	// (0x00098ecc) slider_imed_adjust_pane_g4

0x0003,

0xf727,	// (0x0009d46d) slider_imed_adjust_pane_g

0x6214,	// (0x00093f5a) aid_size_cell_clipart2

0x6220,	// (0x00093f66) grid_imed_clipart_pane

0xb197,	// (0x00098edd) scroll_pane_cp031

0x622a,	// (0x00093f70) cell_imed_clipart_pane_ParamLimits

0x622a,	// (0x00093f70) cell_imed_clipart_pane

0x6251,	// (0x00093f97) cell_imed_clipart_pane_g1

0x0e1d,	// (0x0008eb63) grid_highlight_pane_cp014

0x5f1b,	// (0x00093c61) main_clock2_pane_g1_ParamLimits

0x5f1b,	// (0x00093c61) main_clock2_pane_g1

0x604b,	// (0x00093d91) aid_call2_pane_cp10

0x605d,	// (0x00093da3) aid_call_pane_cp10

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g1

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g2

0x606f,	// (0x00093db5) popup_clock_analogue_window_cp10_g3

0x606f,	// (0x00093db5) popup_clock_analogue_window_cp10_g4

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf715,	// (0x0009d45b) popup_clock_analogue_window_cp10_g

0x6081,	// (0x00093dc7) popup_clock_analogue_window_cp10_t1

0x60b2,	// (0x00093df8) clock_digital_number_pane_cp10_ParamLimits

0x60b2,	// (0x00093df8) clock_digital_number_pane_cp10

0x60ca,	// (0x00093e10) clock_digital_number_pane_cp11_ParamLimits

0x60ca,	// (0x00093e10) clock_digital_number_pane_cp11

0x60e2,	// (0x00093e28) clock_digital_number_pane_cp12_ParamLimits

0x60e2,	// (0x00093e28) clock_digital_number_pane_cp12

0x60fa,	// (0x00093e40) clock_digital_number_pane_cp13_ParamLimits

0x60fa,	// (0x00093e40) clock_digital_number_pane_cp13

0x6112,	// (0x00093e58) clock_digital_separator_pane_cp10_ParamLimits

0x6112,	// (0x00093e58) clock_digital_separator_pane_cp10

0x612a,	// (0x00093e70) popup_clock_digital_window_cp02_t1_ParamLimits

0x612a,	// (0x00093e70) popup_clock_digital_window_cp02_t1

0xa5a6,	// (0x000982ec) clock_digital_number_pane_cp10_g1

0xa5a6,	// (0x000982ec) clock_digital_number_pane_cp10_g2

0x0001,

0xf730,	// (0x0009d476) clock_digital_number_pane_cp10_g

0xa5a6,	// (0x000982ec) clock_digital_separator_pane_cp10_g1

0xa5a6,	// (0x000982ec) clock_digital_separator_pane_g2_cp10

0xe41a,	// (0x0009c160) navi_pane_vded_g4

0xe423,	// (0x0009c169) navi_pane_vded_g5

0xe42c,	// (0x0009c172) navi_pane_vded_t1

0x0e1d,	// (0x0008eb63) main_vded_pane

0x625a,	// (0x00093fa0) main_vded_pane_g1

0x6266,	// (0x00093fac) main_vded_pane_g2

0x6270,	// (0x00093fb6) main_vded_pane_g3

0x0002,

0xf735,	// (0x0009d47b) main_vded_pane_g

0x627a,	// (0x00093fc0) main_vded_pane_t1

0x6288,	// (0x00093fce) main_vded_pane_t2

0x0001,

0xf73c,	// (0x0009d482) main_vded_pane_t

0x6296,	// (0x00093fdc) vded_slider_pane

0x62a0,	// (0x00093fe6) vded_video_pane

0xb19f,	// (0x00098ee5) vded_video_pane_g1

0x62aa,	// (0x00093ff0) vded_video_pane_g2

0xabe1,	// (0x00098927) vded_video_pane_g3

0x0002,

0xf741,	// (0x0009d487) vded_video_pane_g

0xb1a9,	// (0x00098eef) vded_slider_pane_g1

0x53dc,	// (0x00093122) vded_slider_pane_g2

0xb1b2,	// (0x00098ef8) vded_slider_pane_g3

0xb1bb,	// (0x00098f01) vded_slider_pane_g4

0xb1c4,	// (0x00098f0a) vded_slider_pane_g5

0x0004,

0xf748,	// (0x0009d48e) vded_slider_pane_g

0x5cb3,	// (0x000939f9) mup3_rocker_pane_ParamLimits

0x5cb3,	// (0x000939f9) mup3_rocker_pane

0x62b3,	// (0x00093ff9) mup3_control_keys_pane_g1

0x62bb,	// (0x00094001) mup3_control_keys_pane_g2

0x62c3,	// (0x00094009) mup3_control_keys_pane_g3

0x62cb,	// (0x00094011) mup3_control_keys_pane_g4

0x0003,

0xf753,	// (0x0009d499) mup3_control_keys_pane_g

0x105b,	// (0x0008eda1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x105b,	// (0x0008eda1) popup_toolbar2_fixed_window_cp01

0x5ce7,	// (0x00093a2d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5ce7,	// (0x00093a2d) popup_toolbar2_fixed_window_cp02

0xebd1,	// (0x0009c917) popup_call2_audio_second_window_t4_ParamLimits

0xebd1,	// (0x0009c917) popup_call2_audio_second_window_t4

0x3b94,	// (0x000918da) popup_call2_audio_first_window_t6_ParamLimits

0x3b94,	// (0x000918da) popup_call2_audio_first_window_t6

0x3e2a,	// (0x00091b70) popup_call2_audio_out_window_t6_ParamLimits

0x3e2a,	// (0x00091b70) popup_call2_audio_out_window_t6

0x0e1d,	// (0x0008eb63) main_vitu_pane

0x62db,	// (0x00094021) aid_size_cell_itu_ParamLimits

0x62db,	// (0x00094021) aid_size_cell_itu

0x9f34,	// (0x00097c7a) bg_popup_window_pane_cp08_ParamLimits

0x9f34,	// (0x00097c7a) bg_popup_window_pane_cp08

0x62f1,	// (0x00094037) field_vitu_entry_pane_ParamLimits

0x62f1,	// (0x00094037) field_vitu_entry_pane

0x6308,	// (0x0009404e) grid_vitu_function_pane_ParamLimits

0x6308,	// (0x0009404e) grid_vitu_function_pane

0x6323,	// (0x00094069) grid_vitu_itu_pane_ParamLimits

0x6323,	// (0x00094069) grid_vitu_itu_pane

0x6341,	// (0x00094087) cell_vitu_itu_pane_ParamLimits

0x6341,	// (0x00094087) cell_vitu_itu_pane

0x6365,	// (0x000940ab) cell_vitu_function_pane_ParamLimits

0x6365,	// (0x000940ab) cell_vitu_function_pane

0x9f34,	// (0x00097c7a) bg_popup_sub_pane_cp08_ParamLimits

0x9f34,	// (0x00097c7a) bg_popup_sub_pane_cp08

0x6380,	// (0x000940c6) field_vitu_entry_pane_t1_ParamLimits

0x6380,	// (0x000940c6) field_vitu_entry_pane_t1

0xb1e5,	// (0x00098f2b) field_vitu_entry_pane_t2_ParamLimits

0xb1e5,	// (0x00098f2b) field_vitu_entry_pane_t2

0x0001,

0xf761,	// (0x0009d4a7) field_vitu_entry_pane_t_ParamLimits

0xf761,	// (0x0009d4a7) field_vitu_entry_pane_t

0xb202,	// (0x00098f48) bg_button_pane_cp05_ParamLimits

0xb202,	// (0x00098f48) bg_button_pane_cp05

0x63a0,	// (0x000940e6) cell_vitu_itu_pane_g1

0x63b8,	// (0x000940fe) cell_vitu_itu_pane_t1_ParamLimits

0x63b8,	// (0x000940fe) cell_vitu_itu_pane_t1

0x63ca,	// (0x00094110) cell_vitu_itu_pane_t2_ParamLimits

0x63ca,	// (0x00094110) cell_vitu_itu_pane_t2

0x0002,

0xf766,	// (0x0009d4ac) cell_vitu_itu_pane_t_ParamLimits

0xf766,	// (0x0009d4ac) cell_vitu_itu_pane_t

0xb210,	// (0x00098f56) bg_button_pane_cp07

0x63ff,	// (0x00094145) cell_vitu_function_pane_g1

0xa679,	// (0x000983bf) main_calc_pane_g1

0x0e5f,	// (0x0008eba5) aid_visual_content_pane

0x0e1d,	// (0x0008eb63) main_vradio_pane

0x6408,	// (0x0009414e) main_vradio_pane_g1_ParamLimits

0x6408,	// (0x0009414e) main_vradio_pane_g1

0xb21a,	// (0x00098f60) main_vradio_pane_g2_ParamLimits

0xb21a,	// (0x00098f60) main_vradio_pane_g2

0x0001,

0xf76d,	// (0x0009d4b3) main_vradio_pane_g_ParamLimits

0xf76d,	// (0x0009d4b3) main_vradio_pane_g

0x6421,	// (0x00094167) main_vradio_pane_t1_ParamLimits

0x6421,	// (0x00094167) main_vradio_pane_t1

0x6436,	// (0x0009417c) main_vradio_pane_t2_ParamLimits

0x6436,	// (0x0009417c) main_vradio_pane_t2

0xb227,	// (0x00098f6d) main_vradio_pane_t3_ParamLimits

0xb227,	// (0x00098f6d) main_vradio_pane_t3

0x0002,

0xf772,	// (0x0009d4b8) main_vradio_pane_t_ParamLimits

0xf772,	// (0x0009d4b8) main_vradio_pane_t

0x644b,	// (0x00094191) vradio_rocker_control_pane_ParamLimits

0x644b,	// (0x00094191) vradio_rocker_control_pane

0x645d,	// (0x000941a3) vradio_station_info_pane_ParamLimits

0x645d,	// (0x000941a3) vradio_station_info_pane

0xb23b,	// (0x00098f81) vradio_frequency_info_pane_ParamLimits

0xb23b,	// (0x00098f81) vradio_frequency_info_pane

0xabe1,	// (0x00098927) vradio_station_info_pane_g1

0xb24a,	// (0x00098f90) vradio_station_info_pane_t1_ParamLimits

0xb24a,	// (0x00098f90) vradio_station_info_pane_t1

0xb26c,	// (0x00098fb2) vradio_station_info_pane_t2_ParamLimits

0xb26c,	// (0x00098fb2) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0009d4bf) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0009d4bf) vradio_station_info_pane_t

0xb27e,	// (0x00098fc4) vradio_tuning_pane

0xb286,	// (0x00098fcc) vradio_rocker_control_pane_g1

0xb28e,	// (0x00098fd4) vradio_rocker_control_pane_g2

0xb296,	// (0x00098fdc) vradio_rocker_control_pane_g3

0xb29e,	// (0x00098fe4) vradio_rocker_control_pane_g4

0xb2a6,	// (0x00098fec) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x0009d4c4) vradio_rocker_control_pane_g

0x646f,	// (0x000941b5) vradio_frequency_info_pane_g1

0xb2ae,	// (0x00098ff4) vradio_frequency_info_pane_t1_ParamLimits

0xb2ae,	// (0x00098ff4) vradio_frequency_info_pane_t1

0x6479,	// (0x000941bf) vradio_tuning_pane_g1

0x6484,	// (0x000941ca) vradio_tuning_pane_t1

0x0ebc,	// (0x0008ec02) area_side_right_pane_ParamLimits

0x0ebc,	// (0x0008ec02) area_side_right_pane

0x45a9,	// (0x000922ef) status_small_pane_g1

0x45b1,	// (0x000922f7) status_small_pane_g2

0x45ba,	// (0x00092300) status_small_pane_g3

0x45c3,	// (0x00092309) status_small_pane_g4

0x0003,

0xf53e,	// (0x0009d284) status_small_pane_g

0x45cc,	// (0x00092312) status_small_pane_t1

0x0e1d,	// (0x0008eb63) main_video3_pane

0xb2c2,	// (0x00099008) cams_zoom_vslider_pane

0xb2ca,	// (0x00099010) image3_wide_pane_ParamLimits

0xb2ca,	// (0x00099010) image3_wide_pane

0xb2e4,	// (0x0009902a) image3_wide_small_pane

0xb2f0,	// (0x00099036) main_video3_pane_g1_ParamLimits

0xb2f0,	// (0x00099036) main_video3_pane_g1

0xb30c,	// (0x00099052) main_video3_pane_g2_ParamLimits

0xb30c,	// (0x00099052) main_video3_pane_g2

0x0001,

0xf789,	// (0x0009d4cf) main_video3_pane_g_ParamLimits

0xf789,	// (0x0009d4cf) main_video3_pane_g

0xb328,	// (0x0009906e) main_video3_pane_t1_ParamLimits

0xb328,	// (0x0009906e) main_video3_pane_t1

0xb353,	// (0x00099099) main_video3_pane_t2_ParamLimits

0xb353,	// (0x00099099) main_video3_pane_t2

0xb37e,	// (0x000990c4) main_video3_pane_t3_ParamLimits

0xb37e,	// (0x000990c4) main_video3_pane_t3

0x0002,

0xf78e,	// (0x0009d4d4) main_video3_pane_t_ParamLimits

0xf78e,	// (0x0009d4d4) main_video3_pane_t

0xb3ab,	// (0x000990f1) cams_zoom_vslider_pane_g1

0xb3b4,	// (0x000990fa) cams_zoom_vslider_pane_g2

0x0001,

0xf795,	// (0x0009d4db) cams_zoom_vslider_pane_g

0xb3bc,	// (0x00099102) small_slider_vertical_pane

0xabe1,	// (0x00098927) small_slider_vertical_pane_g1

0xabe1,	// (0x00098927) small_slider_vertical_pane_g2

0xb3c4,	// (0x0009910a) small_slider_vertical_pane_g3

0x0002,

0xf79a,	// (0x0009d4e0) small_slider_vertical_pane_g

0x0e1d,	// (0x0008eb63) main_hwr_training_pane

0xb3cd,	// (0x00099113) hwr_training_instruct_pane_ParamLimits

0xb3cd,	// (0x00099113) hwr_training_instruct_pane

0x6493,	// (0x000941d9) hwr_training_navi_pane_ParamLimits

0x6493,	// (0x000941d9) hwr_training_navi_pane

0x64b2,	// (0x000941f8) hwr_training_write_pane_ParamLimits

0x64b2,	// (0x000941f8) hwr_training_write_pane

0x0e1d,	// (0x0008eb63) bg_frame_shadow_pane

0xb404,	// (0x0009914a) hwr_training_write_pane_g1

0xb40c,	// (0x00099152) hwr_training_write_pane_g2

0xb414,	// (0x0009915a) hwr_training_write_pane_g3

0xb41c,	// (0x00099162) hwr_training_write_pane_g4

0xb424,	// (0x0009916a) hwr_training_write_pane_g5

0xb42c,	// (0x00099172) hwr_training_write_pane_g6

0xb434,	// (0x0009917a) hwr_training_write_pane_g7

0x0006,

0xf7a1,	// (0x0009d4e7) hwr_training_write_pane_g

0xb43c,	// (0x00099182) hwr_training_navi_pane_g1_ParamLimits

0xb43c,	// (0x00099182) hwr_training_navi_pane_g1

0xb44e,	// (0x00099194) hwr_training_navi_pane_g2_ParamLimits

0xb44e,	// (0x00099194) hwr_training_navi_pane_g2

0xb460,	// (0x000991a6) hwr_training_navi_pane_g3_ParamLimits

0xb460,	// (0x000991a6) hwr_training_navi_pane_g3

0xb470,	// (0x000991b6) hwr_training_navi_pane_g4_ParamLimits

0xb470,	// (0x000991b6) hwr_training_navi_pane_g4

0x0004,

0xf7b0,	// (0x0009d4f6) hwr_training_navi_pane_g_ParamLimits

0xf7b0,	// (0x0009d4f6) hwr_training_navi_pane_g

0xb47d,	// (0x000991c3) hwr_training_navi_pane_t1

0x64fc,	// (0x00094242) list_single_hwr_training_instruct_pane_ParamLimits

0x64fc,	// (0x00094242) list_single_hwr_training_instruct_pane

0xb48b,	// (0x000991d1) list_single_hwr_training_instruct_pane_t1

0xab21,	// (0x00098867) bg_frame_shadow_pane_g1

0xb49a,	// (0x000991e0) bg_frame_shadow_pane_g2

0xb4a2,	// (0x000991e8) bg_frame_shadow_pane_g3

0xb4aa,	// (0x000991f0) bg_frame_shadow_pane_g4

0xb4b2,	// (0x000991f8) bg_frame_shadow_pane_g5

0xb4ba,	// (0x00099200) bg_frame_shadow_pane_g6

0xb4c2,	// (0x00099208) bg_frame_shadow_pane_g7

0xda8d,	// (0x0009b7d3) bg_frame_shadow_pane_g8

0x0007,

0xf7bb,	// (0x0009d501) bg_frame_shadow_pane_g

0x0e1d,	// (0x0008eb63) main_video_tele_dialer_pane

0x6519,	// (0x0009425f) aid_size_cell_video_keypad_ParamLimits

0x6519,	// (0x0009425f) aid_size_cell_video_keypad

0x6533,	// (0x00094279) grid_video_dialer_keypad_pane_ParamLimits

0x6533,	// (0x00094279) grid_video_dialer_keypad_pane

0x657f,	// (0x000942c5) video_down_pane_cp_ParamLimits

0x657f,	// (0x000942c5) video_down_pane_cp

0x65af,	// (0x000942f5) cell_video_dialer_keypad_pane_ParamLimits

0x65af,	// (0x000942f5) cell_video_dialer_keypad_pane

0xb4ca,	// (0x00099210) bg_button_pane_cp08_ParamLimits

0xb4ca,	// (0x00099210) bg_button_pane_cp08

0x65d1,	// (0x00094317) cell_video_dialer_keypad_pane_g1_ParamLimits

0x65d1,	// (0x00094317) cell_video_dialer_keypad_pane_g1

0x5c9d,	// (0x000939e3) mup3_rocker2_pane_ParamLimits

0x5c9d,	// (0x000939e3) mup3_rocker2_pane

0xabe1,	// (0x00098927) mup3_rocker2_pane_g1

0x460e,	// (0x00092354) main_dialer2_pane

0x0e1d,	// (0x0008eb63) main_mp4_pane

0xd5ea,	// (0x0009b330) main_mp4_pane_g1_ParamLimits

0xd5ea,	// (0x0009b330) main_mp4_pane_g1

0xd5ea,	// (0x0009b330) main_mp4_pane_g2_ParamLimits

0xd5ea,	// (0x0009b330) main_mp4_pane_g2

0x660c,	// (0x00094352) main_mp4_pane_g3_ParamLimits

0x660c,	// (0x00094352) main_mp4_pane_g3

0xd5f8,	// (0x0009b33e) main_mp4_pane_g4_ParamLimits

0xd5f8,	// (0x0009b33e) main_mp4_pane_g4

0xd620,	// (0x0009b366) main_mp4_pane_g5_ParamLimits

0xd620,	// (0x0009b366) main_mp4_pane_g5

0x0005,

0xf7db,	// (0x0009d521) main_mp4_pane_g_ParamLimits

0xf7db,	// (0x0009d521) main_mp4_pane_g

0xd670,	// (0x0009b3b6) main_mp4_pane_t1_ParamLimits

0xd670,	// (0x0009b3b6) main_mp4_pane_t1

0xd6cc,	// (0x0009b412) main_mp4_pane_t2_ParamLimits

0xd6cc,	// (0x0009b412) main_mp4_pane_t2

0xb4d6,	// (0x0009921c) main_mp4_pane_t3_ParamLimits

0xb4d6,	// (0x0009921c) main_mp4_pane_t3

0xd71e,	// (0x0009b464) main_mp4_pane_t4_ParamLimits

0xd71e,	// (0x0009b464) main_mp4_pane_t4

0x0003,

0xf7e8,	// (0x0009d52e) main_mp4_pane_t_ParamLimits

0xf7e8,	// (0x0009d52e) main_mp4_pane_t

0xd762,	// (0x0009b4a8) mp4_progress_pane_ParamLimits

0xd762,	// (0x0009b4a8) mp4_progress_pane

0xd7ac,	// (0x0009b4f2) mp4_rocker_pane_ParamLimits

0xd7ac,	// (0x0009b4f2) mp4_rocker_pane

0xb4fe,	// (0x00099244) mp4_progress_pane_t1

0xb517,	// (0x0009925d) mp4_progress_pane_t2

0x0001,

0xf7f1,	// (0x0009d537) mp4_progress_pane_t

0xb530,	// (0x00099276) mup_progress_pane_cp04

0xb53c,	// (0x00099282) mp4_rocker_pane_g1

0x6648,	// (0x0009438e) aid_cell_size_keypad2_ParamLimits

0x6648,	// (0x0009438e) aid_cell_size_keypad2

0x665e,	// (0x000943a4) dialer2_ne_pane_ParamLimits

0x665e,	// (0x000943a4) dialer2_ne_pane

0x6678,	// (0x000943be) grid_dialer2_keypad_pane_ParamLimits

0x6678,	// (0x000943be) grid_dialer2_keypad_pane

0xa9c4,	// (0x0009870a) bg_popup_call_pane_cp07_ParamLimits

0xa9c4,	// (0x0009870a) bg_popup_call_pane_cp07

0x6696,	// (0x000943dc) dialer2_ne_pane_t1_ParamLimits

0x6696,	// (0x000943dc) dialer2_ne_pane_t1

0x66d5,	// (0x0009441b) cell_dialer2_keypad_pane_ParamLimits

0x66d5,	// (0x0009441b) cell_dialer2_keypad_pane

0xb558,	// (0x0009929e) bg_button_pane_pane_cp04_ParamLimits

0xb558,	// (0x0009929e) bg_button_pane_pane_cp04

0x66f9,	// (0x0009443f) cell_dialer2_keypad_pane_g1_ParamLimits

0x66f9,	// (0x0009443f) cell_dialer2_keypad_pane_g1

0x1d0a,	// (0x0008fa50) aid_placing_vt_set_content_ParamLimits

0x1d0a,	// (0x0008fa50) aid_placing_vt_set_content

0x1d32,	// (0x0008fa78) aid_placing_vt_set_title_ParamLimits

0x1d32,	// (0x0008fa78) aid_placing_vt_set_title

0x0e1d,	// (0x0008eb63) main_image3_pane

0x67bf,	// (0x00094505) area_side_right_pane_cp01_ParamLimits

0x67bf,	// (0x00094505) area_side_right_pane_cp01

0xd5ea,	// (0x0009b330) main_image3_pane_g1_ParamLimits

0xd5ea,	// (0x0009b330) main_image3_pane_g1

0x67d6,	// (0x0009451c) main_image3_pane_g2_ParamLimits

0x67d6,	// (0x0009451c) main_image3_pane_g2

0x67fe,	// (0x00094544) main_image3_pane_g3_ParamLimits

0x67fe,	// (0x00094544) main_image3_pane_g3

0x6828,	// (0x0009456e) main_image3_pane_g4_ParamLimits

0x6828,	// (0x0009456e) main_image3_pane_g4

0x0003,

0xf800,	// (0x0009d546) main_image3_pane_g_ParamLimits

0xf800,	// (0x0009d546) main_image3_pane_g

0x6852,	// (0x00094598) main_image3_pane_t1_ParamLimits

0x6852,	// (0x00094598) main_image3_pane_t1

0x68aa,	// (0x000945f0) main_image3_pane_t2_ParamLimits

0x68aa,	// (0x000945f0) main_image3_pane_t2

0x68fc,	// (0x00094642) main_image3_pane_t3_ParamLimits

0x68fc,	// (0x00094642) main_image3_pane_t3

0x0003,

0xf809,	// (0x0009d54f) main_image3_pane_t_ParamLimits

0xf809,	// (0x0009d54f) main_image3_pane_t

0x9f34,	// (0x00097c7a) grid_sctrl_middle_pane_cp01_ParamLimits

0x9f34,	// (0x00097c7a) grid_sctrl_middle_pane_cp01

0x6984,	// (0x000946ca) cell_sctrl_middle_pane_cp01_ParamLimits

0x6984,	// (0x000946ca) cell_sctrl_middle_pane_cp01

0x69a1,	// (0x000946e7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x69a1,	// (0x000946e7) cell_sctrl_middle_pane_cp01_g1

0x0e1d,	// (0x0008eb63) main_call4_pane

0x69b7,	// (0x000946fd) aid_size_button_call4_ParamLimits

0x69b7,	// (0x000946fd) aid_size_button_call4

0x69e8,	// (0x0009472e) call4_windows_pane_ParamLimits

0x69e8,	// (0x0009472e) call4_windows_pane

0x6a08,	// (0x0009474e) grid_call4_button_pane_ParamLimits

0x6a08,	// (0x0009474e) grid_call4_button_pane

0xb564,	// (0x000992aa) call4_windows_conf_pane

0xb579,	// (0x000992bf) popup_call4_audio_first_window_ParamLimits

0xb579,	// (0x000992bf) popup_call4_audio_first_window

0xb5c5,	// (0x0009930b) popup_call4_audio_second_window_ParamLimits

0xb5c5,	// (0x0009930b) popup_call4_audio_second_window

0xb5d9,	// (0x0009931f) popup_call4_audio_wait_window_ParamLimits

0xb5d9,	// (0x0009931f) popup_call4_audio_wait_window

0x6a35,	// (0x0009477b) cell_call4_button_pane_ParamLimits

0x6a35,	// (0x0009477b) cell_call4_button_pane

0x6a5e,	// (0x000947a4) bg_button_pane_cp09_ParamLimits

0x6a5e,	// (0x000947a4) bg_button_pane_cp09

0x6a6a,	// (0x000947b0) cell_call4_button_pane_g1_ParamLimits

0x6a6a,	// (0x000947b0) cell_call4_button_pane_g1

0x6a90,	// (0x000947d6) cell_call4_button_pane_t1_ParamLimits

0x6a90,	// (0x000947d6) cell_call4_button_pane_t1

0xb621,	// (0x00099367) popup_call4_audio_conf_window_ParamLimits

0xb621,	// (0x00099367) popup_call4_audio_conf_window

0x5cfd,	// (0x00093a43) mup3_progress_pane_t1_ParamLimits

0x5d14,	// (0x00093a5a) mup3_progress_pane_t2_ParamLimits

0xaefb,	// (0x00098c41) mup3_progress_pane_t3_ParamLimits

0xf6e2,	// (0x0009d428) mup3_progress_pane_t_ParamLimits

0xaf12,	// (0x00098c58) mup_progress_pane_cp03_ParamLimits

0x62d3,	// (0x00094019) mup3_control_keys_pane_g4_copy1

0xd790,	// (0x0009b4d6) mp4_rocker2_pane_ParamLimits

0xd790,	// (0x0009b4d6) mp4_rocker2_pane

0xb635,	// (0x0009937b) mp4_rocker2_pane_g1

0xb63d,	// (0x00099383) mp4_rocker2_pane_g2

0xd7fe,	// (0x0009b544) mp4_rocker2_pane_g3

0xd806,	// (0x0009b54c) mp4_rocker2_pane_g4

0xd80e,	// (0x0009b554) mp4_rocker2_pane_g5

0x0004,

0xf812,	// (0x0009d558) mp4_rocker2_pane_g

0x0e1d,	// (0x0008eb63) main_camera4_pane

0x0e1d,	// (0x0008eb63) main_video4_pane

0x654d,	// (0x00094293) main_video_tele_dialer_pane_t1_ParamLimits

0x654d,	// (0x00094293) main_video_tele_dialer_pane_t1

0x6566,	// (0x000942ac) main_video_tele_dialer_pane_t2_ParamLimits

0x6566,	// (0x000942ac) main_video_tele_dialer_pane_t2

0x0001,

0xf7cc,	// (0x0009d512) main_video_tele_dialer_pane_t_ParamLimits

0xf7cc,	// (0x0009d512) main_video_tele_dialer_pane_t

0x6ad2,	// (0x00094818) cam4_autofocus_pane_ParamLimits

0x6ad2,	// (0x00094818) cam4_autofocus_pane

0x6ae8,	// (0x0009482e) cam4_image_uncrop_pane_ParamLimits

0x6ae8,	// (0x0009482e) cam4_image_uncrop_pane

0x6b02,	// (0x00094848) cam4_indicators_pane_ParamLimits

0x6b02,	// (0x00094848) cam4_indicators_pane

0x6b2d,	// (0x00094873) main_camera4_pane_g1_ParamLimits

0x6b2d,	// (0x00094873) main_camera4_pane_g1

0x6b40,	// (0x00094886) main_camera4_pane_g2_ParamLimits

0x6b40,	// (0x00094886) main_camera4_pane_g2

0x6b53,	// (0x00094899) main_camera4_pane_g3_ParamLimits

0x6b53,	// (0x00094899) main_camera4_pane_g3

0x6b66,	// (0x000948ac) main_camera4_pane_g4_ParamLimits

0x6b66,	// (0x000948ac) main_camera4_pane_g4

0x6b79,	// (0x000948bf) main_camera4_pane_g5_ParamLimits

0x6b79,	// (0x000948bf) main_camera4_pane_g5

0x0005,

0xf81d,	// (0x0009d563) main_camera4_pane_g_ParamLimits

0xf81d,	// (0x0009d563) main_camera4_pane_g

0x6b9d,	// (0x000948e3) main_camera4_pane_t1_ParamLimits

0x6b9d,	// (0x000948e3) main_camera4_pane_t1

0xd832,	// (0x0009b578) bg_tb_trans_pane_cp06

0xd848,	// (0x0009b58e) cam4_indicators_pane_g1

0xd859,	// (0x0009b59f) cam4_indicators_pane_g2

0x0002,

0xf838,	// (0x0009d57e) cam4_indicators_pane_g

0xd877,	// (0x0009b5bd) cam4_indicators_pane_t1

0x6c01,	// (0x00094947) main_video4_pane_g1_ParamLimits

0x6c01,	// (0x00094947) main_video4_pane_g1

0x6c14,	// (0x0009495a) main_video4_pane_g2_ParamLimits

0x6c14,	// (0x0009495a) main_video4_pane_g2

0x6c28,	// (0x0009496e) main_video4_pane_g3_ParamLimits

0x6c28,	// (0x0009496e) main_video4_pane_g3

0x6c3c,	// (0x00094982) main_video4_pane_g4_ParamLimits

0x6c3c,	// (0x00094982) main_video4_pane_g4

0x0004,

0xf83f,	// (0x0009d585) main_video4_pane_g_ParamLimits

0xf83f,	// (0x0009d585) main_video4_pane_g

0x6c64,	// (0x000949aa) vid4_indicators_pane_ParamLimits

0x6c64,	// (0x000949aa) vid4_indicators_pane

0x6c96,	// (0x000949dc) video4_image_uncrop_cif_pane_ParamLimits

0x6c96,	// (0x000949dc) video4_image_uncrop_cif_pane

0x6cb0,	// (0x000949f6) video4_image_uncrop_nhd_pane_ParamLimits

0x6cb0,	// (0x000949f6) video4_image_uncrop_nhd_pane

0x6ae8,	// (0x0009482e) video4_image_uncrop_vga_pane_ParamLimits

0x6ae8,	// (0x0009482e) video4_image_uncrop_vga_pane

0xd899,	// (0x0009b5df) bg_tb_trans_pane_cp07

0x6cc4,	// (0x00094a0a) vid4_indicators_pane_g1

0x6cd1,	// (0x00094a17) vid4_indicators_pane_g2

0x6cde,	// (0x00094a24) vid4_indicators_pane_g3

0x0004,

0xf84a,	// (0x0009d590) vid4_indicators_pane_g

0x6d03,	// (0x00094a49) vid4_indicators_pane_t1

0x6d15,	// (0x00094a5b) cam4_autofocus_pane_g1

0x6d1d,	// (0x00094a63) cam4_autofocus_pane_g2

0x6d25,	// (0x00094a6b) cam4_autofocus_pane_g3

0x0002,

0xf855,	// (0x0009d59b) cam4_autofocus_pane_g

0x6d2d,	// (0x00094a73) cam4_autofocus_pane_g3_copy1

0x6593,	// (0x000942d9) video_down_pane_cp_t1

0x65a1,	// (0x000942e7) video_down_pane_cp_t2

0x0001,

0xf7d1,	// (0x0009d517) video_down_pane_cp_t

0x9f34,	// (0x00097c7a) popup_vitu2_window_ParamLimits

0x9f34,	// (0x00097c7a) popup_vitu2_window

0x6d35,	// (0x00094a7b) aid_size_cell2_itu2_ParamLimits

0x6d35,	// (0x00094a7b) aid_size_cell2_itu2

0x6d5b,	// (0x00094aa1) aid_size_cell_itu2_ParamLimits

0x6d5b,	// (0x00094aa1) aid_size_cell_itu2

0x6db7,	// (0x00094afd) bg_popup_window_pane_cp09_ParamLimits

0x6db7,	// (0x00094afd) bg_popup_window_pane_cp09

0x6dc5,	// (0x00094b0b) field_vitu2_entry_pane_ParamLimits

0x6dc5,	// (0x00094b0b) field_vitu2_entry_pane

0x6deb,	// (0x00094b31) grid_vitu2_function_pane_ParamLimits

0x6deb,	// (0x00094b31) grid_vitu2_function_pane

0x6e3c,	// (0x00094b82) grid_vitu2_itu_pane_ParamLimits

0x6e3c,	// (0x00094b82) grid_vitu2_itu_pane

0x6ecd,	// (0x00094c13) cell_vitu2_itu_pane_ParamLimits

0x6ecd,	// (0x00094c13) cell_vitu2_itu_pane

0x6ef1,	// (0x00094c37) cell_vitu2_function_pane_ParamLimits

0x6ef1,	// (0x00094c37) cell_vitu2_function_pane

0xb657,	// (0x0009939d) bg_popup_call_pane_cp08_ParamLimits

0xb657,	// (0x0009939d) bg_popup_call_pane_cp08

0xb670,	// (0x000993b6) field_vitu2_entry_pane_g1

0xb67c,	// (0x000993c2) field_vitu2_entry_pane_g2

0x0002,

0xf85c,	// (0x0009d5a2) field_vitu2_entry_pane_g

0x6f30,	// (0x00094c76) field_vitu2_entry_pane_t1_ParamLimits

0x6f30,	// (0x00094c76) field_vitu2_entry_pane_t1

0xb696,	// (0x000993dc) field_vitu2_entry_pane_t2_ParamLimits

0xb696,	// (0x000993dc) field_vitu2_entry_pane_t2

0x0001,

0xf863,	// (0x0009d5a9) field_vitu2_entry_pane_t_ParamLimits

0xf863,	// (0x0009d5a9) field_vitu2_entry_pane_t

0x6f61,	// (0x00094ca7) bg_button_pane_cp010_ParamLimits

0x6f61,	// (0x00094ca7) bg_button_pane_cp010

0x6f6f,	// (0x00094cb5) cell_vitu2_itu_pane_g1

0x6f8d,	// (0x00094cd3) cell_vitu2_itu_pane_t1_ParamLimits

0x6f8d,	// (0x00094cd3) cell_vitu2_itu_pane_t1

0x0d29,	// (0x0008ea6f) cell_vitu2_itu_pane_t2_ParamLimits

0x0d29,	// (0x0008ea6f) cell_vitu2_itu_pane_t2

0x0002,

0xf86d,	// (0x0009d5b3) cell_vitu2_itu_pane_t_ParamLimits

0xf86d,	// (0x0009d5b3) cell_vitu2_itu_pane_t

0xd8af,	// (0x0009b5f5) bg_button_pane_cp011

0x6ff3,	// (0x00094d39) cell_vitu2_function_pane_g1

0x0e1d,	// (0x0008eb63) main_myfav_hc_pane

0x694c,	// (0x00094692) popup_image3_note_pane_ParamLimits

0x694c,	// (0x00094692) popup_image3_note_pane

0x6968,	// (0x000946ae) popup_image3_tool_bar_pane_ParamLimits

0x6968,	// (0x000946ae) popup_image3_tool_bar_pane

0x0dad,	// (0x0008eaf3) cell_vitu2_itu_pane_t3_ParamLimits

0x0dad,	// (0x0008eaf3) cell_vitu2_itu_pane_t3

0x0e1d,	// (0x0008eb63) bg_popup_trans_pane

0xb6bb,	// (0x00099401) grid_image3_tool_bar_pane

0xb6c5,	// (0x0009940b) bg_popup_trans_pane_g1

0xddd2,	// (0x0009bb18) bg_popup_trans_pane_g2

0xb6cd,	// (0x00099413) bg_popup_trans_pane_g3

0xb6d5,	// (0x0009941b) bg_popup_trans_pane_g4

0xb6dd,	// (0x00099423) bg_popup_trans_pane_g5

0xb6e5,	// (0x0009942b) bg_popup_trans_pane_g6

0xb6ed,	// (0x00099433) bg_popup_trans_pane_g7

0xb6f5,	// (0x0009943b) bg_popup_trans_pane_g8

0xddb2,	// (0x0009baf8) bg_popup_trans_pane_g9

0x0008,

0xf874,	// (0x0009d5ba) bg_popup_trans_pane_g

0xb6fd,	// (0x00099443) cell_image3_tool_bar_pane_ParamLimits

0xb6fd,	// (0x00099443) cell_image3_tool_bar_pane

0xabe1,	// (0x00098927) cell_image3_tool_bar_pane_g1

0x0e1d,	// (0x0008eb63) bg_popup_trans_pane_cp1

0xb711,	// (0x00099457) popup_image3_note_pane_t1

0xb71f,	// (0x00099465) popup_image3_note_pane_t2

0xb72d,	// (0x00099473) popup_image3_note_pane_t3

0x0002,

0xf887,	// (0x0009d5cd) popup_image3_note_pane_t

0xb73b,	// (0x00099481) popup_image3_note_pane_t3_copy1

0x7007,	// (0x00094d4d) bg_myfav_hc_instruction_pane_ParamLimits

0x7007,	// (0x00094d4d) bg_myfav_hc_instruction_pane

0x701d,	// (0x00094d63) cell_myfav_contact_pane_ParamLimits

0x701d,	// (0x00094d63) cell_myfav_contact_pane

0x7039,	// (0x00094d7f) cell_myfav_contact_pane_cp1_ParamLimits

0x7039,	// (0x00094d7f) cell_myfav_contact_pane_cp1

0x7051,	// (0x00094d97) cell_myfav_contact_pane_cp2_ParamLimits

0x7051,	// (0x00094d97) cell_myfav_contact_pane_cp2

0x7069,	// (0x00094daf) cell_myfav_contact_pane_cp3_ParamLimits

0x7069,	// (0x00094daf) cell_myfav_contact_pane_cp3

0x7080,	// (0x00094dc6) cell_myfav_contact_pane_cp4_ParamLimits

0x7080,	// (0x00094dc6) cell_myfav_contact_pane_cp4

0x7098,	// (0x00094dde) cell_myfav_contact_pane_cp5_ParamLimits

0x7098,	// (0x00094dde) cell_myfav_contact_pane_cp5

0x70ac,	// (0x00094df2) cell_myfav_contact_pane_cp6_ParamLimits

0x70ac,	// (0x00094df2) cell_myfav_contact_pane_cp6

0x70c2,	// (0x00094e08) cell_myfav_contact_pane_cp7_ParamLimits

0x70c2,	// (0x00094e08) cell_myfav_contact_pane_cp7

0xb749,	// (0x0009948f) listscroll_gen_pane_cp05

0x70dc,	// (0x00094e22) main_myfav_hc_pane_g1_ParamLimits

0x70dc,	// (0x00094e22) main_myfav_hc_pane_g1

0x70f6,	// (0x00094e3c) main_myfav_hc_pane_g2_ParamLimits

0x70f6,	// (0x00094e3c) main_myfav_hc_pane_g2

0x0002,

0xf88e,	// (0x0009d5d4) main_myfav_hc_pane_g_ParamLimits

0xf88e,	// (0x0009d5d4) main_myfav_hc_pane_g

0x7128,	// (0x00094e6e) main_myfav_hc_pane_t1_ParamLimits

0x7128,	// (0x00094e6e) main_myfav_hc_pane_t1

0xb752,	// (0x00099498) main_myfav_hc_pane_t2_ParamLimits

0xb752,	// (0x00099498) main_myfav_hc_pane_t2

0xb764,	// (0x000994aa) main_myfav_hc_pane_t3_ParamLimits

0xb764,	// (0x000994aa) main_myfav_hc_pane_t3

0x713f,	// (0x00094e85) main_myfav_hc_pane_t4_ParamLimits

0x713f,	// (0x00094e85) main_myfav_hc_pane_t4

0x0004,

0xf895,	// (0x0009d5db) main_myfav_hc_pane_t_ParamLimits

0xf895,	// (0x0009d5db) main_myfav_hc_pane_t

0xabe1,	// (0x00098927) bg_myfav_hc_instruction_pane_g1

0xb776,	// (0x000994bc) cell_myfav_contact_pane_g1_ParamLimits

0xb776,	// (0x000994bc) cell_myfav_contact_pane_g1

0xb776,	// (0x000994bc) cell_myfav_contact_pane_g2_ParamLimits

0xb776,	// (0x000994bc) cell_myfav_contact_pane_g2

0xb782,	// (0x000994c8) cell_myfav_contact_pane_g3_ParamLimits

0xb782,	// (0x000994c8) cell_myfav_contact_pane_g3

0xaee5,	// (0x00098c2b) cell_myfav_contact_pane_g4_ParamLimits

0xaee5,	// (0x00098c2b) cell_myfav_contact_pane_g4

0xb78f,	// (0x000994d5) cell_myfav_contact_pane_g5_ParamLimits

0xb78f,	// (0x000994d5) cell_myfav_contact_pane_g5

0x0004,

0xf8a0,	// (0x0009d5e6) cell_myfav_contact_pane_g_ParamLimits

0xf8a0,	// (0x0009d5e6) cell_myfav_contact_pane_g

0x7110,	// (0x00094e56) main_myfav_hc_pane_g3_ParamLimits

0x7110,	// (0x00094e56) main_myfav_hc_pane_g3

0x0fbd,	// (0x0008ed03) popup_adpt_find_window

0x7167,	// (0x00094ead) afind_page_pane_ParamLimits

0x7167,	// (0x00094ead) afind_page_pane

0x717c,	// (0x00094ec2) aid_size_cell_afind_ParamLimits

0x717c,	// (0x00094ec2) aid_size_cell_afind

0x719a,	// (0x00094ee0) bg_popup_sub_pane_cp09_ParamLimits

0x719a,	// (0x00094ee0) bg_popup_sub_pane_cp09

0x71a7,	// (0x00094eed) find_pane_cp01_ParamLimits

0x71a7,	// (0x00094eed) find_pane_cp01

0xb79b,	// (0x000994e1) grid_afind_control_pane_ParamLimits

0xb79b,	// (0x000994e1) grid_afind_control_pane

0x71b4,	// (0x00094efa) grid_afind_pane_ParamLimits

0x71b4,	// (0x00094efa) grid_afind_pane

0x71d6,	// (0x00094f1c) cell_afind_pane_ParamLimits

0x71d6,	// (0x00094f1c) cell_afind_pane

0xabe1,	// (0x00098927) afind_page_pane_g1

0x7237,	// (0x00094f7d) afind_page_pane_g2

0x7240,	// (0x00094f86) afind_page_pane_g3

0x0002,

0xf8ab,	// (0x0009d5f1) afind_page_pane_g

0x7249,	// (0x00094f8f) afind_page_pane_t1

0xb7af,	// (0x000994f5) cell_afind_grid_control_pane_ParamLimits

0xb7af,	// (0x000994f5) cell_afind_grid_control_pane

0xb558,	// (0x0009929e) bg_button_pane_cp69_ParamLimits

0xb558,	// (0x0009929e) bg_button_pane_cp69

0x7269,	// (0x00094faf) cell_afind_pane_g1_ParamLimits

0x7269,	// (0x00094faf) cell_afind_pane_g1

0x7276,	// (0x00094fbc) cell_afind_pane_t1_ParamLimits

0x7276,	// (0x00094fbc) cell_afind_pane_t1

0xdbcd,	// (0x0009b913) bg_button_pane_cp72

0xb7be,	// (0x00099504) cell_afind_grid_control_pane_g1

0x393b,	// (0x00091681) aid_image_placing_area_ParamLimits

0x393b,	// (0x00091681) aid_image_placing_area

0xb1cd,	// (0x00098f13) field_vitu_entry_pane_g1_ParamLimits

0xb1cd,	// (0x00098f13) field_vitu_entry_pane_g1

0xb1d9,	// (0x00098f1f) field_vitu_entry_pane_g2_ParamLimits

0xb1d9,	// (0x00098f1f) field_vitu_entry_pane_g2

0x0001,

0xf75c,	// (0x0009d4a2) field_vitu_entry_pane_g_ParamLimits

0xf75c,	// (0x0009d4a2) field_vitu_entry_pane_g

0x63a0,	// (0x000940e6) cell_vitu_itu_pane_g1_ParamLimits

0x63e2,	// (0x00094128) cell_vitu_itu_pane_t3_ParamLimits

0x63e2,	// (0x00094128) cell_vitu_itu_pane_t3

0xb4fe,	// (0x00099244) mp4_progress_pane_t1_ParamLimits

0xb517,	// (0x0009925d) mp4_progress_pane_t2_ParamLimits

0xf7f1,	// (0x0009d537) mp4_progress_pane_t_ParamLimits

0xb530,	// (0x00099276) mup_progress_pane_cp04_ParamLimits

0x7153,	// (0x00094e99) main_myfav_hc_pane_t5_ParamLimits

0x7153,	// (0x00094e99) main_myfav_hc_pane_t5

0x0e73,	// (0x0008ebb9) aid_zoom_text_primary

0x0fbd,	// (0x0008ed03) popup_adpt_find_window_ParamLimits

0x9f34,	// (0x00097c7a) main_cam_set_pane

0x6b19,	// (0x0009485f) cam4_zoom_pane_ParamLimits

0x6b19,	// (0x0009485f) cam4_zoom_pane

0x7288,	// (0x00094fce) main_cam_set_pane_g1_ParamLimits

0x7288,	// (0x00094fce) main_cam_set_pane_g1

0x7296,	// (0x00094fdc) main_cam_set_pane_g2_ParamLimits

0x7296,	// (0x00094fdc) main_cam_set_pane_g2

0x0001,

0xf8b2,	// (0x0009d5f8) main_cam_set_pane_g_ParamLimits

0xf8b2,	// (0x0009d5f8) main_cam_set_pane_g

0x72b7,	// (0x00094ffd) main_cam_set_pane_t1_ParamLimits

0x72b7,	// (0x00094ffd) main_cam_set_pane_t1

0x72d2,	// (0x00095018) main_cset_listscroll_pane_ParamLimits

0x72d2,	// (0x00095018) main_cset_listscroll_pane

0x72f2,	// (0x00095038) main_cset_slider_pane_ParamLimits

0x72f2,	// (0x00095038) main_cset_slider_pane

0xb7cf,	// (0x00099515) main_cset_list_pane_ParamLimits

0xb7cf,	// (0x00099515) main_cset_list_pane

0xb7df,	// (0x00099525) scroll_pane_cp028

0x7318,	// (0x0009505e) aid_area_touch_slider

0x7334,	// (0x0009507a) cset_slider_pane

0x735e,	// (0x000950a4) main_cset_slider_pane_g1

0x7373,	// (0x000950b9) main_cset_slider_pane_g2

0x0011,

0xf8b7,	// (0x0009d5fd) main_cset_slider_pane_g

0xb818,	// (0x0009955e) main_cset_slider_pane_t1

0x742f,	// (0x00095175) main_cset_slider_pane_t2

0x7449,	// (0x0009518f) main_cset_slider_pane_t3

0x7463,	// (0x000951a9) main_cset_slider_pane_t4

0x747d,	// (0x000951c3) main_cset_slider_pane_t5

0x7499,	// (0x000951df) main_cset_slider_pane_t6

0x74ae,	// (0x000951f4) main_cset_slider_pane_t7

0x000e,

0xf8dc,	// (0x0009d622) main_cset_slider_pane_t

0x75b2,	// (0x000952f8) cset_list_set_pane_ParamLimits

0x75b2,	// (0x000952f8) cset_list_set_pane

0x75c6,	// (0x0009530c) aid_position_infowindow_above

0x75ce,	// (0x00095314) aid_position_infowindow_below

0x75d6,	// (0x0009531c) cset_list_set_pane_g1_ParamLimits

0x75d6,	// (0x0009531c) cset_list_set_pane_g1

0x75e2,	// (0x00095328) cset_list_set_pane_g3_ParamLimits

0x75e2,	// (0x00095328) cset_list_set_pane_g3

0x0001,

0xf8fb,	// (0x0009d641) cset_list_set_pane_g_ParamLimits

0xf8fb,	// (0x0009d641) cset_list_set_pane_g

0x75f1,	// (0x00095337) cset_list_set_pane_t1_ParamLimits

0x75f1,	// (0x00095337) cset_list_set_pane_t1

0x9f34,	// (0x00097c7a) list_highlight_pane_cp021_ParamLimits

0x9f34,	// (0x00097c7a) list_highlight_pane_cp021

0xe580,	// (0x0009c2c6) cset_slider_pane_g1

0xe592,	// (0x0009c2d8) cset_slider_pane_g2

0xe589,	// (0x0009c2cf) cset_slider_pane_g3

0x0002,

0x07a0,	// (0x0008e4e6) cset_slider_pane_g

0xd8bd,	// (0x0009b603) aid_area_touch_cam4_zoom

0xd8c5,	// (0x0009b60b) cam4_zoom_cont_pane

0xd8cd,	// (0x0009b613) cam4_zoom_pane_g1

0xd8d5,	// (0x0009b61b) cam4_zoom_pane_g2

0x7606,	// (0x0009534c) cam4_zoom_pane_g3

0x0002,

0xf900,	// (0x0009d646) cam4_zoom_pane_g

0xd8dd,	// (0x0009b623) cam4_zoom_cont_pane_g1

0xd8e6,	// (0x0009b62c) cam4_zoom_cont_pane_g2

0xd8ef,	// (0x0009b635) cam4_zoom_cont_pane_g3

0x0002,

0xf907,	// (0x0009d64d) cam4_zoom_cont_pane_g

0x69d5,	// (0x0009471b) call4_image_pane_ParamLimits

0x69d5,	// (0x0009471b) call4_image_pane

0xb564,	// (0x000992aa) call4_windows_conf_pane_ParamLimits

0xb5a3,	// (0x000992e9) popup_call4_audio_in_window_ParamLimits

0xb5a3,	// (0x000992e9) popup_call4_audio_in_window

0x0e1d,	// (0x0008eb63) bg_popup_call2_act_pane_cp02

0xb619,	// (0x0009935f) call4_list_conf_pane

0xabe1,	// (0x00098927) call4_image_pane_g1

0xabe1,	// (0x00098927) call4_image_pane_g2

0x0001,

0xf622,	// (0x0009d368) call4_image_pane_g

0xb8b8,	// (0x000995fe) list_single_graphic_popup_conf4_pane_ParamLimits

0xb8b8,	// (0x000995fe) list_single_graphic_popup_conf4_pane

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp022

0xb8cb,	// (0x00099611) list_single_graphic_popup_conf4_pane_g1

0xe271,	// (0x0009bfb7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf90e,	// (0x0009d654) list_single_graphic_popup_conf4_pane_g

0xb8d3,	// (0x00099619) list_single_graphic_popup_conf4_pane_t1

0x1e56,	// (0x0008fb9c) popup_vtel_slider_window_ParamLimits

0x1e56,	// (0x0008fb9c) popup_vtel_slider_window

0xb546,	// (0x0009928c) dialer2_ne_pane_t2_ParamLimits

0xb546,	// (0x0009928c) dialer2_ne_pane_t2

0x0001,

0xf7f6,	// (0x0009d53c) dialer2_ne_pane_t_ParamLimits

0xf7f6,	// (0x0009d53c) dialer2_ne_pane_t

0xa9c4,	// (0x0009870a) bg_popup_sub_pane_cp010_ParamLimits

0xa9c4,	// (0x0009870a) bg_popup_sub_pane_cp010

0x760e,	// (0x00095354) popup_vtel_slider_window_g1_ParamLimits

0x760e,	// (0x00095354) popup_vtel_slider_window_g1

0x7621,	// (0x00095367) popup_vtel_slider_window_g2_ParamLimits

0x7621,	// (0x00095367) popup_vtel_slider_window_g2

0x0003,

0xf913,	// (0x0009d659) popup_vtel_slider_window_g_ParamLimits

0xf913,	// (0x0009d659) popup_vtel_slider_window_g

0x7677,	// (0x000953bd) vtel_slider_pane_ParamLimits

0x7677,	// (0x000953bd) vtel_slider_pane

0x7699,	// (0x000953df) vtel_slider_pane_g1_ParamLimits

0x7699,	// (0x000953df) vtel_slider_pane_g1

0x76ad,	// (0x000953f3) vtel_slider_pane_g2_ParamLimits

0x76ad,	// (0x000953f3) vtel_slider_pane_g2

0x76c5,	// (0x0009540b) vtel_slider_pane_g3_ParamLimits

0x76c5,	// (0x0009540b) vtel_slider_pane_g3

0x7699,	// (0x000953df) vtel_slider_pane_g4_ParamLimits

0x7699,	// (0x000953df) vtel_slider_pane_g4

0x76db,	// (0x00095421) vtel_slider_pane_g5_ParamLimits

0x76db,	// (0x00095421) vtel_slider_pane_g5

0x0004,

0xf91c,	// (0x0009d662) vtel_slider_pane_g_ParamLimits

0xf91c,	// (0x0009d662) vtel_slider_pane_g

0x0e1d,	// (0x0008eb63) main_gallery2_pane

0x6d87,	// (0x00094acd) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d87,	// (0x00094acd) aid_size_row_itut2_dropdow_list

0x6e13,	// (0x00094b59) grid_vitu2_function_top_pane_ParamLimits

0x6e13,	// (0x00094b59) grid_vitu2_function_top_pane

0x6e78,	// (0x00094bbe) popup_vitu2_dropdown_list_window_ParamLimits

0x6e78,	// (0x00094bbe) popup_vitu2_dropdown_list_window

0x6ea1,	// (0x00094be7) popup_vitu2_match_list_window

0x76f1,	// (0x00095437) cell_vitu2_function_top_pane_ParamLimits

0x76f1,	// (0x00095437) cell_vitu2_function_top_pane

0x770f,	// (0x00095455) cell_vitu2_function_top_pane_cp01_ParamLimits

0x770f,	// (0x00095455) cell_vitu2_function_top_pane_cp01

0x772d,	// (0x00095473) cell_vitu2_function_top_wide_pane_ParamLimits

0x772d,	// (0x00095473) cell_vitu2_function_top_wide_pane

0xd8af,	// (0x0009b5f5) bg_button_pane_cp012

0x774b,	// (0x00095491) cell_vitu2_function_top_pane_g1

0xd8f8,	// (0x0009b63e) bg_button_pane_cp013_ParamLimits

0xd8f8,	// (0x0009b63e) bg_button_pane_cp013

0x775f,	// (0x000954a5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x775f,	// (0x000954a5) cell_vitu2_function_top_wide_pane_g1

0xd8af,	// (0x0009b5f5) bg_popup_sub_pane_cp20

0x7777,	// (0x000954bd) list_vitu2_match_list_pane

0xb6c5,	// (0x0009940b) bg_popup_sub_pane_cp20_g1

0xb6cd,	// (0x00099413) bg_popup_sub_pane_cp20_g2

0xddd2,	// (0x0009bb18) bg_popup_sub_pane_cp20_g3

0xb6d5,	// (0x0009941b) bg_popup_sub_pane_cp20_g4

0xddb2,	// (0x0009baf8) bg_popup_sub_pane_cp20_g5

0xb8f7,	// (0x0009963d) bg_popup_sub_pane_cp20_g6

0xb6e5,	// (0x0009942b) bg_popup_sub_pane_cp20_g7

0xb6ed,	// (0x00099433) bg_popup_sub_pane_cp20_g8

0xb6f5,	// (0x0009943b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf927,	// (0x0009d66d) bg_popup_sub_pane_cp20_g

0xd914,	// (0x0009b65a) list_vitu2_match_list_item_pane_ParamLimits

0xd914,	// (0x0009b65a) list_vitu2_match_list_item_pane

0xd926,	// (0x0009b66c) list_vitu2_match_list_item_pane_t1

0xa6c5,	// (0x0009840b) bg_popup_sub_pane_cp21

0xd934,	// (0x0009b67a) grid_vitu2_dropdown_list_pane

0x77ca,	// (0x00095510) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x77ca,	// (0x00095510) cell_vitu2_dropdown_list_char_pane

0x77eb,	// (0x00095531) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x77eb,	// (0x00095531) cell_vitu2_dropdown_list_ctrl_pane

0xb917,	// (0x0009965d) cell_vitu2_dropdown_list_char_pane_g1

0xb920,	// (0x00099666) cell_vitu2_dropdown_list_char_pane_g2

0xb929,	// (0x0009966f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf944,	// (0x0009d68a) cell_vitu2_dropdown_list_char_pane_g

0x7817,	// (0x0009555d) cell_vitu2_dropdown_list_char_pane_t1

0x7825,	// (0x0009556b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7825,	// (0x0009556b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7835,	// (0x0009557b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7835,	// (0x0009557b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7846,	// (0x0009558c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7846,	// (0x0009558c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7856,	// (0x0009559c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7856,	// (0x0009559c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd832,	// (0x0009b578) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd832,	// (0x0009b578) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94b,	// (0x0009d691) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94b,	// (0x0009d691) cell_vitu2_dropdown_list_ctrl_pane_g

0x7872,	// (0x000955b8) aid_size_cell_gallery2_ParamLimits

0x7872,	// (0x000955b8) aid_size_cell_gallery2

0x7888,	// (0x000955ce) grid_gallery2_pane_ParamLimits

0x7888,	// (0x000955ce) grid_gallery2_pane

0x789c,	// (0x000955e2) scroll_pane_cp029_ParamLimits

0x789c,	// (0x000955e2) scroll_pane_cp029

0x78a8,	// (0x000955ee) cell_gallery2_pane_ParamLimits

0x78a8,	// (0x000955ee) cell_gallery2_pane

0xb932,	// (0x00099678) cell_gallery2_pane_g2

0x78de,	// (0x00095624) cell_gallery2_pane_g3

0xb93c,	// (0x00099682) cell_gallery2_pane_g4

0xb944,	// (0x0009968a) cell_gallery2_pane_g5

0xe44a,	// (0x0009c190) grid_highlight_pane_cp10

0x6ea1,	// (0x00094be7) popup_vitu2_match_list_window_ParamLimits

0x6eb6,	// (0x00094bfc) popup_vitu2_query_window_ParamLimits

0x6eb6,	// (0x00094bfc) popup_vitu2_query_window

0xa6c5,	// (0x0009840b) bg_vitu2_candi_button_pane

0xb917,	// (0x0009965d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb920,	// (0x00099666) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb929,	// (0x0009966f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x78e6,	// (0x0009562c) bg_button_pane_cp015

0x78fa,	// (0x00095640) bg_button_pane_cp016

0x790d,	// (0x00095653) bg_button_pane_cp017

0x4600,	// (0x00092346) bg_popup_sub_pane_cp22

0xb94c,	// (0x00099692) popup_vitu2_query_window_g1

0x7952,	// (0x00095698) popup_vitu2_query_window_g2

0x0002,

0xf956,	// (0x0009d69c) popup_vitu2_query_window_g

0x7971,	// (0x000956b7) popup_vitu2_query_window_t1_ParamLimits

0x7971,	// (0x000956b7) popup_vitu2_query_window_t1

0x79a6,	// (0x000956ec) popup_vitu2_query_window_t2_ParamLimits

0x79a6,	// (0x000956ec) popup_vitu2_query_window_t2

0x79b8,	// (0x000956fe) popup_vitu2_query_window_t3_ParamLimits

0x79b8,	// (0x000956fe) popup_vitu2_query_window_t3

0x79e0,	// (0x00095726) popup_vitu2_query_window_t4_ParamLimits

0x79e0,	// (0x00095726) popup_vitu2_query_window_t4

0x7a01,	// (0x00095747) popup_vitu2_query_window_t5_ParamLimits

0x7a01,	// (0x00095747) popup_vitu2_query_window_t5

0x0006,

0xf95d,	// (0x0009d6a3) popup_vitu2_query_window_t_ParamLimits

0xf95d,	// (0x0009d6a3) popup_vitu2_query_window_t

0xb7c7,	// (0x0009950d) main_cset_text_pane

0x7318,	// (0x0009505e) aid_area_touch_slider_ParamLimits

0x7334,	// (0x0009507a) cset_slider_pane_ParamLimits

0x735e,	// (0x000950a4) main_cset_slider_pane_g1_ParamLimits

0x7373,	// (0x000950b9) main_cset_slider_pane_g2_ParamLimits

0xb7e8,	// (0x0009952e) main_cset_slider_pane_g3_ParamLimits

0xb7e8,	// (0x0009952e) main_cset_slider_pane_g3

0x7388,	// (0x000950ce) main_cset_slider_pane_g4_ParamLimits

0x7388,	// (0x000950ce) main_cset_slider_pane_g4

0x7397,	// (0x000950dd) main_cset_slider_pane_g5_ParamLimits

0x7397,	// (0x000950dd) main_cset_slider_pane_g5

0x73a3,	// (0x000950e9) main_cset_slider_pane_g6_ParamLimits

0x73a3,	// (0x000950e9) main_cset_slider_pane_g6

0xf8b7,	// (0x0009d5fd) main_cset_slider_pane_g_ParamLimits

0xb818,	// (0x0009955e) main_cset_slider_pane_t1_ParamLimits

0x742f,	// (0x00095175) main_cset_slider_pane_t2_ParamLimits

0x7449,	// (0x0009518f) main_cset_slider_pane_t3_ParamLimits

0x7463,	// (0x000951a9) main_cset_slider_pane_t4_ParamLimits

0x747d,	// (0x000951c3) main_cset_slider_pane_t5_ParamLimits

0x7499,	// (0x000951df) main_cset_slider_pane_t6_ParamLimits

0x74ae,	// (0x000951f4) main_cset_slider_pane_t7_ParamLimits

0x74d8,	// (0x0009521e) main_cset_slider_pane_t8_ParamLimits

0x74d8,	// (0x0009521e) main_cset_slider_pane_t8

0x7500,	// (0x00095246) main_cset_slider_pane_t9_ParamLimits

0x7500,	// (0x00095246) main_cset_slider_pane_t9

0x7528,	// (0x0009526e) main_cset_slider_pane_t10_ParamLimits

0x7528,	// (0x0009526e) main_cset_slider_pane_t10

0x7550,	// (0x00095296) main_cset_slider_pane_t11_ParamLimits

0x7550,	// (0x00095296) main_cset_slider_pane_t11

0x7578,	// (0x000952be) main_cset_slider_pane_t12_ParamLimits

0x7578,	// (0x000952be) main_cset_slider_pane_t12

0x7595,	// (0x000952db) main_cset_slider_pane_t13_ParamLimits

0x7595,	// (0x000952db) main_cset_slider_pane_t13

0xf8dc,	// (0x0009d622) main_cset_slider_pane_t_ParamLimits

0x0e1d,	// (0x0008eb63) bg_popup_sub_pane_cp011

0xb958,	// (0x0009969e) main_cset_text_pane_g1

0xb960,	// (0x000996a6) main_cset_text_pane_t1

0xb96e,	// (0x000996b4) main_cset_text_pane_t2

0xb97c,	// (0x000996c2) main_cset_text_pane_t3

0xb98a,	// (0x000996d0) main_cset_text_pane_t4

0xb998,	// (0x000996de) main_cset_text_pane_t5

0xb9a6,	// (0x000996ec) main_cset_text_pane_t6

0xb9b4,	// (0x000996fa) main_cset_text_pane_t7

0x0006,

0xf96c,	// (0x0009d6b2) main_cset_text_pane_t

0x0e1d,	// (0x0008eb63) main_cam4_burst_pane

0x0e1d,	// (0x0008eb63) main_cam5_pane

0x7257,	// (0x00094f9d) bg_button_pane_cp019

0x7260,	// (0x00094fa6) bg_button_pane_cp020

0xb7f4,	// (0x0009953a) main_cset_slider_pane_g7_ParamLimits

0xb7f4,	// (0x0009953a) main_cset_slider_pane_g7

0xb800,	// (0x00099546) main_cset_slider_pane_g8_ParamLimits

0xb800,	// (0x00099546) main_cset_slider_pane_g8

0x73b7,	// (0x000950fd) main_cset_slider_pane_g9_ParamLimits

0x73b7,	// (0x000950fd) main_cset_slider_pane_g9

0x73c3,	// (0x00095109) main_cset_slider_pane_g10_ParamLimits

0x73c3,	// (0x00095109) main_cset_slider_pane_g10

0x73cf,	// (0x00095115) main_cset_slider_pane_g11_ParamLimits

0x73cf,	// (0x00095115) main_cset_slider_pane_g11

0x73db,	// (0x00095121) main_cset_slider_pane_g12_ParamLimits

0x73db,	// (0x00095121) main_cset_slider_pane_g12

0x73e7,	// (0x0009512d) main_cset_slider_pane_g13_ParamLimits

0x73e7,	// (0x0009512d) main_cset_slider_pane_g13

0x73f3,	// (0x00095139) main_cset_slider_pane_g14_ParamLimits

0x73f3,	// (0x00095139) main_cset_slider_pane_g14

0x73ff,	// (0x00095145) main_cset_slider_pane_g15_ParamLimits

0x73ff,	// (0x00095145) main_cset_slider_pane_g15

0xb846,	// (0x0009958c) main_cset_slider_pane_t14_ParamLimits

0xb846,	// (0x0009958c) main_cset_slider_pane_t14

0xb87f,	// (0x000995c5) main_cset_slider_pane_t15_ParamLimits

0xb87f,	// (0x000995c5) main_cset_slider_pane_t15

0x7a78,	// (0x000957be) aid_cam4_burst_size_cell_ParamLimits

0x7a78,	// (0x000957be) aid_cam4_burst_size_cell

0x7a98,	// (0x000957de) grid_cam4_burst_pane_ParamLimits

0x7a98,	// (0x000957de) grid_cam4_burst_pane

0x7ad0,	// (0x00095816) linegrid_cam4_burst_pane_ParamLimits

0x7ad0,	// (0x00095816) linegrid_cam4_burst_pane

0xb9c2,	// (0x00099708) scroll_pane_cp30_ParamLimits

0xb9c2,	// (0x00099708) scroll_pane_cp30

0x7af6,	// (0x0009583c) cell_cam4_burst_pane_ParamLimits

0x7af6,	// (0x0009583c) cell_cam4_burst_pane

0xb9ce,	// (0x00099714) linegrid_cam4_burst_pane_g1_ParamLimits

0xb9ce,	// (0x00099714) linegrid_cam4_burst_pane_g1

0x7b43,	// (0x00095889) linegrid_cam4_burst_pane_g2_ParamLimits

0x7b43,	// (0x00095889) linegrid_cam4_burst_pane_g2

0xb9db,	// (0x00099721) linegrid_cam4_burst_pane_g3_ParamLimits

0xb9db,	// (0x00099721) linegrid_cam4_burst_pane_g3

0x0002,

0xf97b,	// (0x0009d6c1) linegrid_cam4_burst_pane_g_ParamLimits

0xf97b,	// (0x0009d6c1) linegrid_cam4_burst_pane_g

0x7b54,	// (0x0009589a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7b54,	// (0x0009589a) linegrid_cam4_burst_pane_g3_copy1

0xb9e8,	// (0x0009972e) linegrid_cam4_burst_pane_g4_ParamLimits

0xb9e8,	// (0x0009972e) linegrid_cam4_burst_pane_g4

0x7b6e,	// (0x000958b4) linegrid_cam4_burst_pane_g5_ParamLimits

0x7b6e,	// (0x000958b4) linegrid_cam4_burst_pane_g5

0x7b7f,	// (0x000958c5) linegrid_cam4_burst_pane_g6_ParamLimits

0x7b7f,	// (0x000958c5) linegrid_cam4_burst_pane_g6

0xb9f5,	// (0x0009973b) linegrid_cam4_burst_pane_g7_ParamLimits

0xb9f5,	// (0x0009973b) linegrid_cam4_burst_pane_g7

0x7b96,	// (0x000958dc) cell_cam4_burst_pane_g1

0xba0e,	// (0x00099754) main_cam5_pane_t1_ParamLimits

0xba0e,	// (0x00099754) main_cam5_pane_t1

0xba20,	// (0x00099766) main_cam5_pane_t2_ParamLimits

0xba20,	// (0x00099766) main_cam5_pane_t2

0xba32,	// (0x00099778) main_cam5_pane_t3_ParamLimits

0xba32,	// (0x00099778) main_cam5_pane_t3

0xba44,	// (0x0009978a) main_cam5_pane_t4_ParamLimits

0xba44,	// (0x0009978a) main_cam5_pane_t4

0xba5a,	// (0x000997a0) main_cam5_pane_t5_ParamLimits

0xba5a,	// (0x000997a0) main_cam5_pane_t5

0xba6c,	// (0x000997b2) main_cam5_pane_t6_ParamLimits

0xba6c,	// (0x000997b2) main_cam5_pane_t6

0xba80,	// (0x000997c6) main_cam5_pane_t7_ParamLimits

0xba80,	// (0x000997c6) main_cam5_pane_t7

0xba92,	// (0x000997d8) main_cam5_pane_t8_ParamLimits

0xba92,	// (0x000997d8) main_cam5_pane_t8

0xbaae,	// (0x000997f4) main_cam5_pane_t9_ParamLimits

0xbaae,	// (0x000997f4) main_cam5_pane_t9

0xbac0,	// (0x00099806) main_cam5_pane_t10_ParamLimits

0xbac0,	// (0x00099806) main_cam5_pane_t10

0xbad2,	// (0x00099818) main_cam5_pane_t11_ParamLimits

0xbad2,	// (0x00099818) main_cam5_pane_t11

0xbae4,	// (0x0009982a) main_cam5_pane_t12_ParamLimits

0xbae4,	// (0x0009982a) main_cam5_pane_t12

0xbaf9,	// (0x0009983f) main_cam5_pane_t13_ParamLimits

0xbaf9,	// (0x0009983f) main_cam5_pane_t13

0x000c,

0xf987,	// (0x0009d6cd) main_cam5_pane_t_ParamLimits

0xf987,	// (0x0009d6cd) main_cam5_pane_t

0x103f,	// (0x0008ed85) popup_scut_keymap_window_ParamLimits

0x103f,	// (0x0008ed85) popup_scut_keymap_window

0x7ba9,	// (0x000958ef) aid_size_cell_brow_shortcut

0xe44a,	// (0x0009c190) bg_popup_window_pane_cp010

0x7bb5,	// (0x000958fb) grid_scut_pane

0x7bc1,	// (0x00095907) cell_scut_pane_ParamLimits

0x7bc1,	// (0x00095907) cell_scut_pane

0x7bd8,	// (0x0009591e) cell_scut_pane_g1

0xbb16,	// (0x0009985c) cell_scut_pane_t1

0xbb25,	// (0x0009986b) cell_scut_pane_t2

0x7be1,	// (0x00095927) cell_scut_pane_t3

0x0002,

0xf9a2,	// (0x0009d6e8) cell_scut_pane_t

0x58dc,	// (0x00093622) main_mup3_pane_g8_ParamLimits

0x58dc,	// (0x00093622) main_mup3_pane_g8

0x6d9f,	// (0x00094ae5) area_vitu2_query_pane_ParamLimits

0x6d9f,	// (0x00094ae5) area_vitu2_query_pane

0x7920,	// (0x00095666) input_focus_pane_cp08

0xbb34,	// (0x0009987a) area_vitu2_query_pane_g1

0x7bef,	// (0x00095935) area_vitu2_query_pane_g2

0x0001,

0xf9a9,	// (0x0009d6ef) area_vitu2_query_pane_g

0x7c00,	// (0x00095946) area_vitu2_query_pane_t1_ParamLimits

0x7c00,	// (0x00095946) area_vitu2_query_pane_t1

0x7c14,	// (0x0009595a) area_vitu2_query_pane_t2_ParamLimits

0x7c14,	// (0x0009595a) area_vitu2_query_pane_t2

0x7c28,	// (0x0009596e) area_vitu2_query_pane_t3_ParamLimits

0x7c28,	// (0x0009596e) area_vitu2_query_pane_t3

0xbb40,	// (0x00099886) area_vitu2_query_pane_t4_ParamLimits

0xbb40,	// (0x00099886) area_vitu2_query_pane_t4

0xbb68,	// (0x000998ae) area_vitu2_query_pane_t5_ParamLimits

0xbb68,	// (0x000998ae) area_vitu2_query_pane_t5

0xbb90,	// (0x000998d6) area_vitu2_query_pane_t6_ParamLimits

0xbb90,	// (0x000998d6) area_vitu2_query_pane_t6

0x0006,

0xf9ae,	// (0x0009d6f4) area_vitu2_query_pane_t_ParamLimits

0xf9ae,	// (0x0009d6f4) area_vitu2_query_pane_t

0x7c50,	// (0x00095996) bg_button_pane_cp018

0x7c5e,	// (0x000959a4) bg_button_pane_cp021

0x7c6a,	// (0x000959b0) bg_button_pane_cp022

0x7c7b,	// (0x000959c1) input_focus_pane_cp09

0x2efa,	// (0x00090c40) aid_size_touch_mv_arrow_left

0x2f23,	// (0x00090c69) aid_size_touch_mv_arrow_right

0x7417,	// (0x0009515d) main_cset_slider_pane_g16_ParamLimits

0x7417,	// (0x0009515d) main_cset_slider_pane_g16

0x7423,	// (0x00095169) main_cset_slider_pane_g17_ParamLimits

0x7423,	// (0x00095169) main_cset_slider_pane_g17

0x7b96,	// (0x000958dc) cell_cam4_burst_pane_g1_ParamLimits

0x0e1d,	// (0x0008eb63) compa_mode_pane

0x7631,	// (0x00095377) popup_vtel_slider_window_g3_ParamLimits

0x7631,	// (0x00095377) popup_vtel_slider_window_g3

0x7648,	// (0x0009538e) popup_vtel_slider_window_g4_ParamLimits

0x7648,	// (0x0009538e) popup_vtel_slider_window_g4

0x765f,	// (0x000953a5) popup_vtel_slider_window_t1_ParamLimits

0x765f,	// (0x000953a5) popup_vtel_slider_window_t1

0x0e1d,	// (0x0008eb63) main_cl_pane

0x473f,	// (0x00092485) popup_imed_adjust2_window_ParamLimits

0x4600,	// (0x00092346) bg_tb_trans_pane_cp05_ParamLimits

0xb102,	// (0x00098e48) popup_imed_adjust2_window_g1_ParamLimits

0xb111,	// (0x00098e57) popup_imed_adjust2_window_g2_ParamLimits

0xb111,	// (0x00098e57) popup_imed_adjust2_window_g2

0xb11d,	// (0x00098e63) popup_imed_adjust2_window_g3_ParamLimits

0xb11d,	// (0x00098e63) popup_imed_adjust2_window_g3

0x0002,

0xf720,	// (0x0009d466) popup_imed_adjust2_window_g_ParamLimits

0xf720,	// (0x0009d466) popup_imed_adjust2_window_g

0xb129,	// (0x00098e6f) popup_imed_adjust2_window_t1_ParamLimits

0xb141,	// (0x00098e87) slider_imed_adjust_pane_ParamLimits

0xb155,	// (0x00098e9b) slider_imed_adjust_pane_g1_ParamLimits

0xb165,	// (0x00098eab) slider_imed_adjust_pane_g2_ParamLimits

0xb175,	// (0x00098ebb) slider_imed_adjust_pane_g3_ParamLimits

0xb186,	// (0x00098ecc) slider_imed_adjust_pane_g4_ParamLimits

0xf727,	// (0x0009d46d) slider_imed_adjust_pane_g_ParamLimits

0x6aba,	// (0x00094800) aid_touch_area_cam4_ParamLimits

0x6aba,	// (0x00094800) aid_touch_area_cam4

0xd816,	// (0x0009b55c) battery_pane_cp01

0x6b8a,	// (0x000948d0) main_camera4_pane_g6_ParamLimits

0x6b8a,	// (0x000948d0) main_camera4_pane_g6

0x6bb4,	// (0x000948fa) main_camera4_pane_t2_ParamLimits

0x6bb4,	// (0x000948fa) main_camera4_pane_t2

0x0001,

0xf82a,	// (0x0009d570) main_camera4_pane_t_ParamLimits

0xf82a,	// (0x0009d570) main_camera4_pane_t

0x6be9,	// (0x0009492f) aid_touch_area_vid4_ParamLimits

0x6be9,	// (0x0009492f) aid_touch_area_vid4

0x6c50,	// (0x00094996) main_video4_pane_g5_ParamLimits

0x6c50,	// (0x00094996) main_video4_pane_g5

0x6c7b,	// (0x000949c1) vid4_progress_pane_ParamLimits

0x6c7b,	// (0x000949c1) vid4_progress_pane

0xb80c,	// (0x00099552) main_cset_slider_pane_g18_ParamLimits

0xb80c,	// (0x00099552) main_cset_slider_pane_g18

0xba02,	// (0x00099748) cell_cam4_burst_pane_g2_ParamLimits

0xba02,	// (0x00099748) cell_cam4_burst_pane_g2

0x0001,

0xf982,	// (0x0009d6c8) cell_cam4_burst_pane_g_ParamLimits

0xf982,	// (0x0009d6c8) cell_cam4_burst_pane_g

0xd9c2,	// (0x0009b708) bg_cl_pane_ParamLimits

0xd9c2,	// (0x0009b708) bg_cl_pane

0x7c8c,	// (0x000959d2) cl_header_pane_ParamLimits

0x7c8c,	// (0x000959d2) cl_header_pane

0x7ca0,	// (0x000959e6) cl_listscroll_pane_ParamLimits

0x7ca0,	// (0x000959e6) cl_listscroll_pane

0xbbdc,	// (0x00099922) bg_cl_pane_g1

0xbbe4,	// (0x0009992a) bg_cl_pane_g2

0xbbec,	// (0x00099932) bg_cl_pane_g3

0xbbf4,	// (0x0009993a) bg_cl_pane_g4

0xbbfc,	// (0x00099942) bg_cl_pane_g5

0xbc04,	// (0x0009994a) bg_cl_pane_g6

0xbc0c,	// (0x00099952) bg_cl_pane_g7

0xbc14,	// (0x0009995a) bg_cl_pane_g8

0xbc1c,	// (0x00099962) bg_cl_pane_g9

0x0008,

0xf9bd,	// (0x0009d703) bg_cl_pane_g

0x7cb0,	// (0x000959f6) aid_height_cl_leading_ParamLimits

0x7cb0,	// (0x000959f6) aid_height_cl_leading

0x7cbc,	// (0x00095a02) aid_height_cl_text_ParamLimits

0x7cbc,	// (0x00095a02) aid_height_cl_text

0x9f34,	// (0x00097c7a) bg_cl_header_pane_ParamLimits

0x9f34,	// (0x00097c7a) bg_cl_header_pane

0x7cdb,	// (0x00095a21) cl_header_pane_g1_ParamLimits

0x7cdb,	// (0x00095a21) cl_header_pane_g1

0x7cf1,	// (0x00095a37) cl_header_pane_t1_ParamLimits

0x7cf1,	// (0x00095a37) cl_header_pane_t1

0xbc24,	// (0x0009996a) cl_list_pane

0xb7df,	// (0x00099525) hc_scroll_pane_cp01

0xddb2,	// (0x0009baf8) bg_cl_header_pane_g1

0xb6c5,	// (0x0009940b) bg_cl_header_pane_g2

0xddd2,	// (0x0009bb18) bg_cl_header_pane_g3

0xb6d5,	// (0x0009941b) bg_cl_header_pane_g4

0xb6cd,	// (0x00099413) bg_cl_header_pane_g5

0xb8f7,	// (0x0009963d) bg_cl_header_pane_g6

0xb6ed,	// (0x00099433) bg_cl_header_pane_g7

0xb6f5,	// (0x0009943b) bg_cl_header_pane_g8

0xb6e5,	// (0x0009942b) bg_cl_header_pane_g9

0x0008,

0xf9d0,	// (0x0009d716) bg_cl_header_pane_g

0x7d0a,	// (0x00095a50) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7d0a,	// (0x00095a50) hc_cl_list_double_graphic_heading_pane

0x7d1e,	// (0x00095a64) hc_cl_list_single_graphic_pane_ParamLimits

0x7d1e,	// (0x00095a64) hc_cl_list_single_graphic_pane

0x7d38,	// (0x00095a7e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7d38,	// (0x00095a7e) hc_cl_list_single_graphic_pane_g1

0x7d44,	// (0x00095a8a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7d44,	// (0x00095a8a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e3,	// (0x0009d729) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e3,	// (0x0009d729) hc_cl_list_single_graphic_pane_g

0x7d58,	// (0x00095a9e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7d58,	// (0x00095a9e) hc_cl_list_single_graphic_pane_t1

0x7d38,	// (0x00095a7e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7d38,	// (0x00095a7e) hc_cl_list_double_graphic_heading_pane_g1

0x7d6d,	// (0x00095ab3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7d6d,	// (0x00095ab3) hc_cl_list_double_graphic_heading_pane_g2

0x7d81,	// (0x00095ac7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7d81,	// (0x00095ac7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e8,	// (0x0009d72e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e8,	// (0x0009d72e) hc_cl_list_double_graphic_heading_pane_g

0x7d95,	// (0x00095adb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7d95,	// (0x00095adb) hc_cl_list_double_graphic_heading_pane_t1

0x7daa,	// (0x00095af0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7daa,	// (0x00095af0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9ef,	// (0x0009d735) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9ef,	// (0x0009d735) hc_cl_list_double_graphic_heading_pane_t

0xd944,	// (0x0009b68a) vid4_progress_pane_g1

0xd954,	// (0x0009b69a) vid4_progress_pane_g2

0xdff3,	// (0x0009bd39) vid4_progress_pane_g3

0xd859,	// (0x0009b59f) vid4_progress_pane_g4

0x0004,

0xf9f4,	// (0x0009d73a) vid4_progress_pane_g

0xd964,	// (0x0009b6aa) vid4_progress_pane_t1

0xd979,	// (0x0009b6bf) vid4_progress_pane_t2

0x0002,

0xf9ff,	// (0x0009d745) vid4_progress_pane_t

0xd9a4,	// (0x0009b6ea) wait_bar_pane_cp07

0xa9d2,	// (0x00098718) blid_firmament_pane_ParamLimits

0xaa15,	// (0x0009875b) popup_blid_sat_info2_window_g1

0xaa39,	// (0x0009877f) popup_blid_sat_info2_window_t3

0xaa47,	// (0x0009878d) popup_blid_sat_info2_window_t4

0xaa55,	// (0x0009879b) popup_blid_sat_info2_window_t5

0xaa63,	// (0x000987a9) popup_blid_sat_info2_window_t6

0xaa73,	// (0x000987b9) popup_blid_sat_info2_window_t7

0xaa81,	// (0x000987c7) popup_blid_sat_info2_window_t8

0xaa8f,	// (0x000987d5) popup_blid_sat_info2_window_t9

0xaa9d,	// (0x000987e3) popup_blid_sat_info2_window_t10

0xab61,	// (0x000988a7) aid_firma_cardinal_ParamLimits

0xab75,	// (0x000988bb) blid_firmament_pane_t1_ParamLimits

0xab8c,	// (0x000988d2) blid_firmament_pane_t2_ParamLimits

0xaba3,	// (0x000988e9) blid_firmament_pane_t3_ParamLimits

0xabba,	// (0x00098900) blid_firmament_pane_t4_ParamLimits

0xf619,	// (0x0009d35f) blid_firmament_pane_t_ParamLimits

0xabd1,	// (0x00098917) blid_sat_info_pane_ParamLimits

0x9f34,	// (0x00097c7a) main_cam_set_pane_ParamLimits

0x614a,	// (0x00093e90) aid_size_cell_colour_35_ParamLimits

0x616a,	// (0x00093eb0) aid_size_cell_colour_112_ParamLimits

0x618a,	// (0x00093ed0) aid_size_cell_effect_ParamLimits

0x4600,	// (0x00092346) bg_tb_trans_pane_cp02_ParamLimits

0xdf7a,	// (0x0009bcc0) heading_imed_pane_ParamLimits

0x61aa,	// (0x00093ef0) listscroll_imed_pane_ParamLimits

0xee7b,	// (0x0009cbc1) popup_call2_audio_first_window_g5_ParamLimits

0xee7b,	// (0x0009cbc1) popup_call2_audio_first_window_g5

0x6761,	// (0x000944a7) aid_size_touch_image3_arrow_left_ParamLimits

0x6761,	// (0x000944a7) aid_size_touch_image3_arrow_left

0x678d,	// (0x000944d3) aid_size_touch_image3_arrow_right_ParamLimits

0x678d,	// (0x000944d3) aid_size_touch_image3_arrow_right

0xd98f,	// (0x0009b6d5) vid4_progress_pane_t3

0x64cd,	// (0x00094213) main_hwr_training_symbol_option_pane_ParamLimits

0x64cd,	// (0x00094213) main_hwr_training_symbol_option_pane

0xb3ef,	// (0x00099135) popup_hwr_training_preview_window_ParamLimits

0xb3ef,	// (0x00099135) popup_hwr_training_preview_window

0x64ed,	// (0x00094233) hwr_training_navi_pane_g5_ParamLimits

0x64ed,	// (0x00094233) hwr_training_navi_pane_g5

0xb6b3,	// (0x000993f9) popup_char_count_window

0xd8af,	// (0x0009b5f5) bg_popup_sub_pane_cp20_ParamLimits

0x7777,	// (0x000954bd) list_vitu2_match_list_pane_ParamLimits

0x7786,	// (0x000954cc) vitu2_page_scroll_pane_ParamLimits

0x7786,	// (0x000954cc) vitu2_page_scroll_pane

0xbc87,	// (0x000999cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbc87,	// (0x000999cd) list_single_hwr_training_symbol_option_pane

0xbc9a,	// (0x000999e0) list_single_hwr_training_symbol_option_pane_g1

0xbca2,	// (0x000999e8) list_single_hwr_training_symbol_option_pane_t1

0xbcb0,	// (0x000999f6) bg_button_pane_cp023

0xbcb9,	// (0x000999ff) bg_button_pane_cp024

0x7dbf,	// (0x00095b05) vitu2_page_scroll_pane_g1

0x7dc7,	// (0x00095b0d) vitu2_page_scroll_pane_g2

0x0001,

0xfa06,	// (0x0009d74c) vitu2_page_scroll_pane_g

0x7dcf,	// (0x00095b15) vitu2_page_scroll_pane_t1

0x53dc,	// (0x00093122) popup_char_count_window_g1

0xbcec,	// (0x00099a32) popup_char_count_window_g2

0xbcf5,	// (0x00099a3b) popup_char_count_window_g3

0x0002,

0xfa0b,	// (0x0009d751) popup_char_count_window_g

0xbcfe,	// (0x00099a44) popup_char_count_window_t1

0x0e1d,	// (0x0008eb63) main_vded2_pane

0xb0ee,	// (0x00098e34) aid_size_cell_imed_line

0xb0f8,	// (0x00098e3e) grid_imed_line_width_pane

0x6ceb,	// (0x00094a31) vid4_indicators_pane_g4

0xbd0c,	// (0x00099a52) cell_imed_line_width_pane_ParamLimits

0xbd0c,	// (0x00099a52) cell_imed_line_width_pane

0xbd20,	// (0x00099a66) cell_imed_line_width_pane_g1

0xa980,	// (0x000986c6) cell_imed_line_width_pane_g2

0x0001,

0xfa12,	// (0x0009d758) cell_imed_line_width_pane_g

0x7dde,	// (0x00095b24) main_vded2_pane_g1_ParamLimits

0x7dde,	// (0x00095b24) main_vded2_pane_g1

0x7df4,	// (0x00095b3a) main_vded2_pane_g2_ParamLimits

0x7df4,	// (0x00095b3a) main_vded2_pane_g2

0x0001,

0xfa17,	// (0x0009d75d) main_vded2_pane_g_ParamLimits

0xfa17,	// (0x0009d75d) main_vded2_pane_g

0x7e06,	// (0x00095b4c) vded2_slider_pane_ParamLimits

0x7e06,	// (0x00095b4c) vded2_slider_pane

0x7e16,	// (0x00095b5c) aid_size_touch_vded2_end

0x7e20,	// (0x00095b66) aid_size_touch_vded2_playhead

0xbd29,	// (0x00099a6f) aid_size_touch_vded2_start

0xbd31,	// (0x00099a77) vded2_slider_bg_pane

0xbd3a,	// (0x00099a80) vded2_slider_pane_g1

0xbd43,	// (0x00099a89) vded2_slider_pane_g2

0x7e2a,	// (0x00095b70) vded2_slider_pane_g3

0x0002,

0xfa1c,	// (0x0009d762) vded2_slider_pane_g

0xbd4b,	// (0x00099a91) vded2_slider_bg_pane_g1

0xbd54,	// (0x00099a9a) vded2_slider_bg_pane_g2

0xbd5d,	// (0x00099aa3) vded2_slider_bg_pane_g3

0x0002,

0xfa23,	// (0x0009d769) vded2_slider_bg_pane_g

0x35a1,	// (0x000912e7) aid_postcard_touch_down_pane_ParamLimits

0x35a1,	// (0x000912e7) aid_postcard_touch_down_pane

0x35b7,	// (0x000912fd) aid_postcard_touch_up_pane_ParamLimits

0x35b7,	// (0x000912fd) aid_postcard_touch_up_pane

0x0e1d,	// (0x0008eb63) main_blid2_pane

0x4636,	// (0x0009237c) popup_blid2_search_window

0x0e1d,	// (0x0008eb63) blid2_gps_pane

0x0e1d,	// (0x0008eb63) blid2_navig_pane

0x0e1d,	// (0x0008eb63) blid2_search_pane

0x0e1d,	// (0x0008eb63) blid2_tripm_pane

0x7e35,	// (0x00095b7b) blid2_search_pane_g1_ParamLimits

0x7e35,	// (0x00095b7b) blid2_search_pane_g1

0x7e4d,	// (0x00095b93) blid2_search_pane_t1_ParamLimits

0x7e4d,	// (0x00095b93) blid2_search_pane_t1

0x7e5f,	// (0x00095ba5) aid_size_cell_blid2_gps_ParamLimits

0x7e5f,	// (0x00095ba5) aid_size_cell_blid2_gps

0x7e77,	// (0x00095bbd) blid2_gps_pane_g1_ParamLimits

0x7e77,	// (0x00095bbd) blid2_gps_pane_g1

0x7e8b,	// (0x00095bd1) grid_blid2_satellite_pane_ParamLimits

0x7e8b,	// (0x00095bd1) grid_blid2_satellite_pane

0x7ea5,	// (0x00095beb) blid2_navig_pane_g1_ParamLimits

0x7ea5,	// (0x00095beb) blid2_navig_pane_g1

0x7eb1,	// (0x00095bf7) blid2_navig_pane_t1_ParamLimits

0x7eb1,	// (0x00095bf7) blid2_navig_pane_t1

0x7ecc,	// (0x00095c12) blid2_navig_pane_t2_ParamLimits

0x7ecc,	// (0x00095c12) blid2_navig_pane_t2

0x0001,

0xfa2a,	// (0x0009d770) blid2_navig_pane_t_ParamLimits

0xfa2a,	// (0x0009d770) blid2_navig_pane_t

0x7ee7,	// (0x00095c2d) blid2_navig_ring_pane_ParamLimits

0x7ee7,	// (0x00095c2d) blid2_navig_ring_pane

0x7f00,	// (0x00095c46) blid2_speed_pane_ParamLimits

0x7f00,	// (0x00095c46) blid2_speed_pane

0x7f0c,	// (0x00095c52) blid2_tripm_pane_g1_ParamLimits

0x7f0c,	// (0x00095c52) blid2_tripm_pane_g1

0x7f27,	// (0x00095c6d) blid2_tripm_pane_g2_ParamLimits

0x7f27,	// (0x00095c6d) blid2_tripm_pane_g2

0x7f3b,	// (0x00095c81) blid2_tripm_pane_g3_ParamLimits

0x7f3b,	// (0x00095c81) blid2_tripm_pane_g3

0x7f4f,	// (0x00095c95) blid2_tripm_pane_g4_ParamLimits

0x7f4f,	// (0x00095c95) blid2_tripm_pane_g4

0x7f63,	// (0x00095ca9) blid2_tripm_pane_g5_ParamLimits

0x7f63,	// (0x00095ca9) blid2_tripm_pane_g5

0x0005,

0xfa2f,	// (0x0009d775) blid2_tripm_pane_g_ParamLimits

0xfa2f,	// (0x0009d775) blid2_tripm_pane_g

0x7f89,	// (0x00095ccf) blid2_tripm_pane_t1_ParamLimits

0x7f89,	// (0x00095ccf) blid2_tripm_pane_t1

0x7fa4,	// (0x00095cea) blid2_tripm_pane_t2_ParamLimits

0x7fa4,	// (0x00095cea) blid2_tripm_pane_t2

0x7fbf,	// (0x00095d05) blid2_tripm_pane_t3_ParamLimits

0x7fbf,	// (0x00095d05) blid2_tripm_pane_t3

0x0003,

0xfa3c,	// (0x0009d782) blid2_tripm_pane_t_ParamLimits

0xfa3c,	// (0x0009d782) blid2_tripm_pane_t

0x8006,	// (0x00095d4c) cell_blid2_satellite_pane_ParamLimits

0x8006,	// (0x00095d4c) cell_blid2_satellite_pane

0x8024,	// (0x00095d6a) cell_blid2_satellite_pane_g1

0xbd66,	// (0x00099aac) cell_blid2_satellite_pane_t1

0xabe1,	// (0x00098927) blid2_speed_pane_g1

0xbd74,	// (0x00099aba) blid2_speed_pane_t1

0xbd82,	// (0x00099ac8) blid2_speed_pane_t2

0x0001,

0xfa45,	// (0x0009d78b) blid2_speed_pane_t

0xabe1,	// (0x00098927) blid2_navig_ring_pane_g1

0x802d,	// (0x00095d73) blid2_navig_ring_pane_g2

0x8035,	// (0x00095d7b) blid2_navig_ring_pane_g3

0x803d,	// (0x00095d83) blid2_navig_ring_pane_g4

0x8045,	// (0x00095d8b) blid2_navig_ring_pane_g5

0x0004,

0xfa4a,	// (0x0009d790) blid2_navig_ring_pane_g

0x0e1d,	// (0x0008eb63) bg_popup_window_pane_cp011

0xbd90,	// (0x00099ad6) popup_blid2_search_window_g1

0xbd98,	// (0x00099ade) popup_blid2_search_window_t1

0xbda6,	// (0x00099aec) popup_blid2_search_window_t2

0x0001,

0xfa55,	// (0x0009d79b) popup_blid2_search_window_t

0xdcc1,	// (0x0009ba07) main_browser_pane_g1

0xd9c2,	// (0x0009b708) main_browser_pane_ParamLimits

0xd8af,	// (0x0009b5f5) bg_button_pane_cp011_ParamLimits

0x6ff3,	// (0x00094d39) cell_vitu2_function_pane_g1_ParamLimits

0x4600,	// (0x00092346) bg_popup_sub_pane_cp22_ParamLimits

0x7920,	// (0x00095666) input_focus_pane_cp08_ParamLimits

0x7937,	// (0x0009567d) popup_vitu2_query_button_pane_ParamLimits

0x7937,	// (0x0009567d) popup_vitu2_query_button_pane

0x7948,	// (0x0009568e) popup_vitu2_query_input_button_pane

0xb94c,	// (0x00099692) popup_vitu2_query_window_g1_ParamLimits

0x7952,	// (0x00095698) popup_vitu2_query_window_g2_ParamLimits

0xf956,	// (0x0009d69c) popup_vitu2_query_window_g_ParamLimits

0x0e1d,	// (0x0008eb63) bg_button_pane_cp026

0x804d,	// (0x00095d93) popup_vitu2_query_input_button_pane_g1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp025

0xbdb4,	// (0x00099afa) popup_vitu2_query_button_pane_t1

0x55b6,	// (0x000932fc) main_mp3_pane_t6

0x55c4,	// (0x0009330a) popup_slider_window_cp01

0xd840,	// (0x0009b586) cam4_battery_pane

0xd8a7,	// (0x0009b5ed) cam4_battery_pane_cp02

0xd93c,	// (0x0009b682) cam4_battery_pane_cp01

0xd93c,	// (0x0009b682) cam4_battery_pane_cp03

0xb53c,	// (0x00099282) cam4_battery_pane_g1

0xabe1,	// (0x00098927) cam4_battery_pane_g2

0x0001,

0xfa5a,	// (0x0009d7a0) cam4_battery_pane_g

0xaaab,	// (0x000987f1) popup_blid_sat_info2_window_t11

0x2efa,	// (0x00090c40) aid_size_touch_mv_arrow_left_ParamLimits

0x2f23,	// (0x00090c69) aid_size_touch_mv_arrow_right_ParamLimits

0xe3aa,	// (0x0009c0f0) navi_pane_g1_ParamLimits

0x2f4c,	// (0x00090c92) navi_pane_g2_ParamLimits

0x2f7a,	// (0x00090cc0) navi_pane_g3_ParamLimits

0xf392,	// (0x0009d0d8) navi_pane_g_ParamLimits

0x2fd2,	// (0x00090d18) navi_pane_mv_t1_ParamLimits

0x61b6,	// (0x00093efc) grid_imed_effect_pane_ParamLimits

0x1d53,	// (0x0008fa99) aid_placing_vt_slider_lsc

0xdc12,	// (0x0009b958) aid_placing_vt_slider_prt

0x9f34,	// (0x00097c7a) bg_tb_trans_pane_cp01_ParamLimits

0xad68,	// (0x00098aae) popup_image_details_window_g1_ParamLimits

0xad7b,	// (0x00098ac1) popup_image_details_window_g2_ParamLimits

0xad90,	// (0x00098ad6) popup_image_details_window_g3_ParamLimits

0xad90,	// (0x00098ad6) popup_image_details_window_g3

0xf65e,	// (0x0009d3a4) popup_image_details_window_g_ParamLimits

0xada4,	// (0x00098aea) popup_image_details_window_t1_ParamLimits

0xadb6,	// (0x00098afc) popup_image_details_window_t2_ParamLimits

0xadcf,	// (0x00098b15) popup_image_details_window_t3_ParamLimits

0xade3,	// (0x00098b29) popup_image_details_window_t4_ParamLimits

0xadfe,	// (0x00098b44) popup_image_details_window_t5_ParamLimits

0xf665,	// (0x0009d3ab) popup_image_details_window_t_ParamLimits

0x7cc8,	// (0x00095a0e) cl_header_name_pane_ParamLimits

0x7cc8,	// (0x00095a0e) cl_header_name_pane

0x8055,	// (0x00095d9b) cl_header_name_pane_t1_ParamLimits

0x8055,	// (0x00095d9b) cl_header_name_pane_t1

0x8076,	// (0x00095dbc) cl_header_name_pane_t2_ParamLimits

0x8076,	// (0x00095dbc) cl_header_name_pane_t2

0x80b8,	// (0x00095dfe) cl_header_name_pane_t3_ParamLimits

0x80b8,	// (0x00095dfe) cl_header_name_pane_t3

0x0002,

0xfa5f,	// (0x0009d7a5) cl_header_name_pane_t_ParamLimits

0xfa5f,	// (0x0009d7a5) cl_header_name_pane_t

0x2fa3,	// (0x00090ce9) navi_pane_mv_g2_ParamLimits

0xb670,	// (0x000993b6) field_vitu2_entry_pane_g1_ParamLimits

0xb67c,	// (0x000993c2) field_vitu2_entry_pane_g2_ParamLimits

0xb688,	// (0x000993ce) field_vitu2_entry_pane_g3_ParamLimits

0xb688,	// (0x000993ce) field_vitu2_entry_pane_g3

0xf85c,	// (0x0009d5a2) field_vitu2_entry_pane_g_ParamLimits

0x6f6f,	// (0x00094cb5) cell_vitu2_itu_pane_g1_ParamLimits

0x6f7f,	// (0x00094cc5) cell_vitu2_itu_pane_g2_ParamLimits

0x6f7f,	// (0x00094cc5) cell_vitu2_itu_pane_g2

0x0001,

0xf868,	// (0x0009d5ae) cell_vitu2_itu_pane_g_ParamLimits

0xf868,	// (0x0009d5ae) cell_vitu2_itu_pane_g

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp05_ParamLimits

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp05

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp03

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp04

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp10_ParamLimits

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp10

0x7c6a,	// (0x000959b0) bg_vkb2_func_pane_cp08

0x7c50,	// (0x00095996) bg_vkb2_func_pane_cp06

0x7c5e,	// (0x000959a4) bg_vkb2_func_pane_cp07

0xbcc2,	// (0x00099a08) bg_vkb2_func_pane_cp11_ParamLimits

0xbcc2,	// (0x00099a08) bg_vkb2_func_pane_cp11

0xbcd7,	// (0x00099a1d) bg_vkb2_func_pane_cp12_ParamLimits

0xbcd7,	// (0x00099a1d) bg_vkb2_func_pane_cp12

0x0e1d,	// (0x0008eb63) bg_vkb2_func_pane_cp09

0xb6c5,	// (0x0009940b) bg_vkb2_func_pane_g1

0xddd2,	// (0x0009bb18) bg_vkb2_func_pane_g2

0xb6cd,	// (0x00099413) bg_vkb2_func_pane_g3

0xb6d5,	// (0x0009941b) bg_vkb2_func_pane_g4

0xb8f7,	// (0x0009963d) bg_vkb2_func_pane_g5

0xb6ed,	// (0x00099433) bg_vkb2_func_pane_g6

0xb6f5,	// (0x0009943b) bg_vkb2_func_pane_g7

0xb6e5,	// (0x0009942b) bg_vkb2_func_pane_g8

0xddb2,	// (0x0009baf8) bg_vkb2_func_pane_g9

0x0008,

0xfa66,	// (0x0009d7ac) bg_vkb2_func_pane_g

0x7f77,	// (0x00095cbd) blid2_tripm_pane_g6_ParamLimits

0x7f77,	// (0x00095cbd) blid2_tripm_pane_g6

0xb4f6,	// (0x0009923c) mp4_progress_pane_g1

0x7ff2,	// (0x00095d38) blid2_tripm_values_pane_ParamLimits

0x7ff2,	// (0x00095d38) blid2_tripm_values_pane

0x80e9,	// (0x00095e2f) blid2_tripm_values_pane_t1

0x80f7,	// (0x00095e3d) blid2_tripm_values_pane_t2

0x8105,	// (0x00095e4b) blid2_tripm_values_pane_t3

0x8113,	// (0x00095e59) blid2_tripm_values_pane_t4

0x8121,	// (0x00095e67) blid2_tripm_values_pane_t5

0x812f,	// (0x00095e75) blid2_tripm_values_pane_t6

0x813d,	// (0x00095e83) blid2_tripm_values_pane_t7

0x814b,	// (0x00095e91) blid2_tripm_values_pane_t8

0x8159,	// (0x00095e9f) blid2_tripm_values_pane_t9

0x0008,

0xfa79,	// (0x0009d7bf) blid2_tripm_values_pane_t

0x1d95,	// (0x0008fadb) call_video_pane_t1_ParamLimits

0x1db3,	// (0x0008faf9) call_video_pane_t2_ParamLimits

0xf284,	// (0x0009cfca) call_video_pane_t_ParamLimits

0x34a4,	// (0x000911ea) msg_header_pane_g1_ParamLimits

0xe5c5,	// (0x0009c30b) msg_header_pane_g2_ParamLimits

0xe5c5,	// (0x0009c30b) msg_header_pane_g2

0x0001,

0xf40f,	// (0x0009d155) msg_header_pane_g_ParamLimits

0xf40f,	// (0x0009d155) msg_header_pane_g

0xd9c2,	// (0x0009b708) main_clock2_pane_ParamLimits

0x5edb,	// (0x00093c21) grid_clock2_toolbar_pane_ParamLimits

0x5edb,	// (0x00093c21) grid_clock2_toolbar_pane

0x5edb,	// (0x00093c21) listscroll_clock2_pane_ParamLimits

0x5edb,	// (0x00093c21) listscroll_clock2_pane

0x5fb8,	// (0x00093cfe) main_clock2_pane_t3_ParamLimits

0x5fb8,	// (0x00093cfe) main_clock2_pane_t3

0x5fd3,	// (0x00093d19) main_clock2_pane_t4_ParamLimits

0x5fd3,	// (0x00093d19) main_clock2_pane_t4

0xbdc2,	// (0x00099b08) cell_clock2_toolbar_pane

0xbdca,	// (0x00099b10) cell_clock2_toolbar_pane_cp01

0xbdca,	// (0x00099b10) cell_clock2_toolbar_pane_cp02

0xbdd2,	// (0x00099b18) cell_clock2_toolbar_pane_cp03

0xbdda,	// (0x00099b20) list_clock2_pane

0xe2fd,	// (0x0009c043) scroll_pane_cp10

0xbde2,	// (0x00099b28) list_single_clock2_pane_ParamLimits

0xbde2,	// (0x00099b28) list_single_clock2_pane

0xe44a,	// (0x0009c190) list_highlight_pane_cp08

0xbdef,	// (0x00099b35) list_single_clock2_pane_t1

0xbdfd,	// (0x00099b43) list_single_clock2_pane_t2

0x0001,

0xfa8c,	// (0x0009d7d2) list_single_clock2_pane_t

0x0e1d,	// (0x0008eb63) bg_button_pane_cp10

0xbe0b,	// (0x00099b51) cell_clock2_toolbar_pane_g1

0x352d,	// (0x00091273) aid_main_viewer_pane_g1_ParamLimits

0x352d,	// (0x00091273) aid_main_viewer_pane_g1

0x353b,	// (0x00091281) aid_main_viewer_pane_g2_ParamLimits

0x353b,	// (0x00091281) aid_main_viewer_pane_g2

0x3549,	// (0x0009128f) aid_main_viewer_pane_g3_ParamLimits

0x3549,	// (0x0009128f) aid_main_viewer_pane_g3

0x3558,	// (0x0009129e) aid_main_viewer_pane_g4_ParamLimits

0x3558,	// (0x0009129e) aid_main_viewer_pane_g4

0x0003,

0xf420,	// (0x0009d166) aid_main_viewer_pane_g_ParamLimits

0xf420,	// (0x0009d166) aid_main_viewer_pane_g

0x45ec,	// (0x00092332) main_calc_pane_ParamLimits

0x460e,	// (0x00092354) main_dialer2_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_cam6_pane

0x0e1d,	// (0x0008eb63) main_vid6_pane

0x5ee7,	// (0x00093c2d) listscroll_gen_pane_cp06_ParamLimits

0x5ee7,	// (0x00093c2d) listscroll_gen_pane_cp06

0x5fee,	// (0x00093d34) main_clock2_pane_t5_ParamLimits

0x5fee,	// (0x00093d34) main_clock2_pane_t5

0x604b,	// (0x00093d91) aid_call2_pane_cp10_ParamLimits

0x605d,	// (0x00093da3) aid_call_pane_cp10_ParamLimits

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x606f,	// (0x00093db5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x606f,	// (0x00093db5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe37f,	// (0x0009c0c5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf715,	// (0x0009d45b) popup_clock_analogue_window_cp10_g_ParamLimits

0x6081,	// (0x00093dc7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x670e,	// (0x00094454) cell_dialer2_keypad_pane_g2_ParamLimits

0x670e,	// (0x00094454) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fb,	// (0x0009d541) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fb,	// (0x0009d541) cell_dialer2_keypad_pane_g

0x672a,	// (0x00094470) cell_dialer2_keypad_pane_t1

0x730a,	// (0x00095050) main_cset_text2_pane_ParamLimits

0x730a,	// (0x00095050) main_cset_text2_pane

0xbb34,	// (0x0009987a) area_vitu2_query_pane_g1_ParamLimits

0x7bef,	// (0x00095935) area_vitu2_query_pane_g2_ParamLimits

0xf9a9,	// (0x0009d6ef) area_vitu2_query_pane_g_ParamLimits

0xbbb8,	// (0x000998fe) area_vitu2_query_pane_t7_ParamLimits

0xbbb8,	// (0x000998fe) area_vitu2_query_pane_t7

0x7c50,	// (0x00095996) bg_button_pane_cp018_ParamLimits

0x7c5e,	// (0x000959a4) bg_button_pane_cp021_ParamLimits

0x7c6a,	// (0x000959b0) bg_button_pane_cp022_ParamLimits

0x7c6a,	// (0x000959b0) bg_vkb2_func_pane_cp08_ParamLimits

0x7c50,	// (0x00095996) bg_vkb2_func_pane_cp06_ParamLimits

0x7c5e,	// (0x000959a4) bg_vkb2_func_pane_cp07_ParamLimits

0x7c7b,	// (0x000959c1) input_focus_pane_cp09_ParamLimits

0xd9b4,	// (0x0009b6fa) cam6_autofocus_pane_ParamLimits

0xd9b4,	// (0x0009b6fa) cam6_autofocus_pane

0x8167,	// (0x00095ead) cam6_image_uncrop_pane_ParamLimits

0x8167,	// (0x00095ead) cam6_image_uncrop_pane

0x8176,	// (0x00095ebc) cam6_indi_pane_ParamLimits

0x8176,	// (0x00095ebc) cam6_indi_pane

0x818c,	// (0x00095ed2) cam6_mode_pane_ParamLimits

0x818c,	// (0x00095ed2) cam6_mode_pane

0x819e,	// (0x00095ee4) cam6_timer_pane_ParamLimits

0x819e,	// (0x00095ee4) cam6_timer_pane

0x81aa,	// (0x00095ef0) cam6_zoom_pane_ParamLimits

0x81aa,	// (0x00095ef0) cam6_zoom_pane

0x81b6,	// (0x00095efc) cam6_mode_pane_g1_ParamLimits

0x81b6,	// (0x00095efc) cam6_mode_pane_g1

0x81c6,	// (0x00095f0c) cam6_mode_pane_g2_ParamLimits

0x81c6,	// (0x00095f0c) cam6_mode_pane_g2

0x81d6,	// (0x00095f1c) cam6_mode_pane_g3_ParamLimits

0x81d6,	// (0x00095f1c) cam6_mode_pane_g3

0x81e6,	// (0x00095f2c) cam6_mode_pane_g4_ParamLimits

0x81e6,	// (0x00095f2c) cam6_mode_pane_g4

0x0003,

0xfa91,	// (0x0009d7d7) cam6_mode_pane_g_ParamLimits

0xfa91,	// (0x0009d7d7) cam6_mode_pane_g

0xbe13,	// (0x00099b59) bg_tb_trans_pane_cp08_ParamLimits

0xbe13,	// (0x00099b59) bg_tb_trans_pane_cp08

0xbe21,	// (0x00099b67) cam6_battery_pane_ParamLimits

0xbe21,	// (0x00099b67) cam6_battery_pane

0xbe37,	// (0x00099b7d) cam6_indi_pane_g1_ParamLimits

0xbe37,	// (0x00099b7d) cam6_indi_pane_g1

0xbe49,	// (0x00099b8f) cam6_indi_pane_g2_ParamLimits

0xbe49,	// (0x00099b8f) cam6_indi_pane_g2

0xbe5b,	// (0x00099ba1) cam6_indi_pane_g3_ParamLimits

0xbe5b,	// (0x00099ba1) cam6_indi_pane_g3

0x0002,

0xfa9a,	// (0x0009d7e0) cam6_indi_pane_g_ParamLimits

0xfa9a,	// (0x0009d7e0) cam6_indi_pane_g

0xbe6d,	// (0x00099bb3) cam6_indi_pane_t1_ParamLimits

0xbe6d,	// (0x00099bb3) cam6_indi_pane_t1

0x81f6,	// (0x00095f3c) cam6_autofocus_pane_g1

0x81fe,	// (0x00095f44) cam6_autofocus_pane_g2

0x8206,	// (0x00095f4c) cam6_autofocus_pane_g3

0x820e,	// (0x00095f54) cam6_autofocus_pane_g4

0x0003,

0xfaa1,	// (0x0009d7e7) cam6_autofocus_pane_g

0xbe93,	// (0x00099bd9) cam6_timer_pane_g1

0xbe9b,	// (0x00099be1) cam6_timer_pane_t1

0xbea9,	// (0x00099bef) cam6_zoom_cont_pane

0xbeb1,	// (0x00099bf7) cam6_zoom_pane_g1

0xbeb9,	// (0x00099bff) cam6_zoom_pane_g2

0x8216,	// (0x00095f5c) cam6_zoom_pane_g3

0x0002,

0xfaaa,	// (0x0009d7f0) cam6_zoom_pane_g

0xabe1,	// (0x00098927) cam6_battery_pane_g1

0xabe1,	// (0x00098927) cam6_battery_pane_g2

0x0001,

0xf622,	// (0x0009d368) cam6_battery_pane_g

0xbec1,	// (0x00099c07) cam6_zoom_cont_pane_g1

0xbeca,	// (0x00099c10) cam6_zoom_cont_pane_g2

0xbed3,	// (0x00099c19) cam6_zoom_cont_pane_g3

0x0002,

0xfab1,	// (0x0009d7f7) cam6_zoom_cont_pane_g

0x8233,	// (0x00095f79) cam6_mode_pane_cp_ParamLimits

0x8233,	// (0x00095f79) cam6_mode_pane_cp

0x8245,	// (0x00095f8b) cam6_zoom_pane_cp_ParamLimits

0x8245,	// (0x00095f8b) cam6_zoom_pane_cp

0x8251,	// (0x00095f97) vid6_image_uncrop_cif_pane_ParamLimits

0x8251,	// (0x00095f97) vid6_image_uncrop_cif_pane

0x8261,	// (0x00095fa7) vid6_image_uncrop_nhd_pane_ParamLimits

0x8261,	// (0x00095fa7) vid6_image_uncrop_nhd_pane

0x8270,	// (0x00095fb6) vid6_image_uncrop_vga_pane_ParamLimits

0x8270,	// (0x00095fb6) vid6_image_uncrop_vga_pane

0x827f,	// (0x00095fc5) vid6_image_uncrop_wvga_pane_ParamLimits

0x827f,	// (0x00095fc5) vid6_image_uncrop_wvga_pane

0x828e,	// (0x00095fd4) vid6_indi_pane_ParamLimits

0x828e,	// (0x00095fd4) vid6_indi_pane

0xbe13,	// (0x00099b59) bg_tb_trans_pane_cp09_ParamLimits

0xbe13,	// (0x00099b59) bg_tb_trans_pane_cp09

0xbeeb,	// (0x00099c31) cam6_battery_pane_cp_ParamLimits

0xbeeb,	// (0x00099c31) cam6_battery_pane_cp

0xbef7,	// (0x00099c3d) vid6_indi_pane_g1_ParamLimits

0xbef7,	// (0x00099c3d) vid6_indi_pane_g1

0xbf09,	// (0x00099c4f) vid6_indi_pane_g2_ParamLimits

0xbf09,	// (0x00099c4f) vid6_indi_pane_g2

0xbf1b,	// (0x00099c61) vid6_indi_pane_g3_ParamLimits

0xbf1b,	// (0x00099c61) vid6_indi_pane_g3

0xbf30,	// (0x00099c76) vid6_indi_pane_g4_ParamLimits

0xbf30,	// (0x00099c76) vid6_indi_pane_g4

0xbf45,	// (0x00099c8b) vid6_indi_pane_g5_ParamLimits

0xbf45,	// (0x00099c8b) vid6_indi_pane_g5

0x0004,

0xfab8,	// (0x0009d7fe) vid6_indi_pane_g_ParamLimits

0xfab8,	// (0x0009d7fe) vid6_indi_pane_g

0xbf5f,	// (0x00099ca5) vid6_indi_pane_t1_ParamLimits

0xbf5f,	// (0x00099ca5) vid6_indi_pane_t1

0xbf75,	// (0x00099cbb) vid6_indi_pane_t2_ParamLimits

0xbf75,	// (0x00099cbb) vid6_indi_pane_t2

0xbf9d,	// (0x00099ce3) vid6_indi_pane_t3_ParamLimits

0xbf9d,	// (0x00099ce3) vid6_indi_pane_t3

0xbfc5,	// (0x00099d0b) vid6_indi_pane_t4_ParamLimits

0xbfc5,	// (0x00099d0b) vid6_indi_pane_t4

0x0003,

0xfac3,	// (0x0009d809) vid6_indi_pane_t_ParamLimits

0xfac3,	// (0x0009d809) vid6_indi_pane_t

0xbfe9,	// (0x00099d2f) wait_bar_pane_cp08

0x82a6,	// (0x00095fec) main_cset_text2_pane_t1_ParamLimits

0x82a6,	// (0x00095fec) main_cset_text2_pane_t1

0x821e,	// (0x00095f64) listscroll_gen_pane_cp06_t1_ParamLimits

0x821e,	// (0x00095f64) listscroll_gen_pane_cp06_t1

0x0e1d,	// (0x0008eb63) main_cam6_set_pane

0xd832,	// (0x0009b578) bg_tb_trans_pane_cp06_ParamLimits

0xd848,	// (0x0009b58e) cam4_indicators_pane_g1_ParamLimits

0xd859,	// (0x0009b59f) cam4_indicators_pane_g2_ParamLimits

0xf838,	// (0x0009d57e) cam4_indicators_pane_g_ParamLimits

0xd877,	// (0x0009b5bd) cam4_indicators_pane_t1_ParamLimits

0xd899,	// (0x0009b5df) bg_tb_trans_pane_cp07_ParamLimits

0x6cc4,	// (0x00094a0a) vid4_indicators_pane_g1_ParamLimits

0x6cd1,	// (0x00094a17) vid4_indicators_pane_g2_ParamLimits

0x6cde,	// (0x00094a24) vid4_indicators_pane_g3_ParamLimits

0x6ceb,	// (0x00094a31) vid4_indicators_pane_g4_ParamLimits

0xf84a,	// (0x0009d590) vid4_indicators_pane_g_ParamLimits

0x6d03,	// (0x00094a49) vid4_indicators_pane_t1_ParamLimits

0xd944,	// (0x0009b68a) vid4_progress_pane_g1_ParamLimits

0xd954,	// (0x0009b69a) vid4_progress_pane_g2_ParamLimits

0xdff3,	// (0x0009bd39) vid4_progress_pane_g3_ParamLimits

0xd859,	// (0x0009b59f) vid4_progress_pane_g4_ParamLimits

0xf9f4,	// (0x0009d73a) vid4_progress_pane_g_ParamLimits

0xd964,	// (0x0009b6aa) vid4_progress_pane_t1_ParamLimits

0xd979,	// (0x0009b6bf) vid4_progress_pane_t2_ParamLimits

0xd98f,	// (0x0009b6d5) vid4_progress_pane_t3_ParamLimits

0xf9ff,	// (0x0009d745) vid4_progress_pane_t_ParamLimits

0xd9a4,	// (0x0009b6ea) wait_bar_pane_cp07_ParamLimits

0x82c6,	// (0x0009600c) main_cam6_set_pane_g2_ParamLimits

0x82c6,	// (0x0009600c) main_cam6_set_pane_g2

0x82ea,	// (0x00096030) main_cset6_listscroll_pane_ParamLimits

0x82ea,	// (0x00096030) main_cset6_listscroll_pane

0x8306,	// (0x0009604c) main_cset6_slider_pane_ParamLimits

0x8306,	// (0x0009604c) main_cset6_slider_pane

0x831c,	// (0x00096062) main_cset6_text2_pane_ParamLimits

0x831c,	// (0x00096062) main_cset6_text2_pane

0xbff8,	// (0x00099d3e) main_cset6_text_pane

0xc000,	// (0x00099d46) main_cset_list_pane_copy1_ParamLimits

0xc000,	// (0x00099d46) main_cset_list_pane_copy1

0xc010,	// (0x00099d56) scroll_pane_cp028_copy1

0x832a,	// (0x00096070) cset_list_set_pane_copy1

0x833d,	// (0x00096083) aid_position_infowindow_above_copy1

0x8345,	// (0x0009608b) aid_position_infowindow_below_copy1

0xc019,	// (0x00099d5f) cset_list_set_pane_g1_copy1

0x75e2,	// (0x00095328) cset_list_set_pane_g3_copy1_ParamLimits

0x75e2,	// (0x00095328) cset_list_set_pane_g3_copy1

0x75f1,	// (0x00095337) cset_list_set_pane_t1_copy1_ParamLimits

0x75f1,	// (0x00095337) cset_list_set_pane_t1_copy1

0x9f34,	// (0x00097c7a) list_highlight_pane_cp021_copy1_ParamLimits

0x9f34,	// (0x00097c7a) list_highlight_pane_cp021_copy1

0xc021,	// (0x00099d67) cset6_slider_pane_ParamLimits

0xc021,	// (0x00099d67) cset6_slider_pane

0xc04d,	// (0x00099d93) main_cset6_slider_pane_g1_ParamLimits

0xc04d,	// (0x00099d93) main_cset6_slider_pane_g1

0x834d,	// (0x00096093) main_cset6_slider_pane_g2_ParamLimits

0x834d,	// (0x00096093) main_cset6_slider_pane_g2

0xb7f4,	// (0x0009953a) main_cset6_slider_pane_g3_ParamLimits

0xb7f4,	// (0x0009953a) main_cset6_slider_pane_g3

0x73cf,	// (0x00095115) main_cset6_slider_pane_g4_ParamLimits

0x73cf,	// (0x00095115) main_cset6_slider_pane_g4

0x7417,	// (0x0009515d) main_cset6_slider_pane_g5_ParamLimits

0x7417,	// (0x0009515d) main_cset6_slider_pane_g5

0xb7f4,	// (0x0009953a) main_cset6_slider_pane_g7_ParamLimits

0xb7f4,	// (0x0009953a) main_cset6_slider_pane_g7

0xb800,	// (0x00099546) main_cset6_slider_pane_g8_ParamLimits

0xb800,	// (0x00099546) main_cset6_slider_pane_g8

0x73b7,	// (0x000950fd) main_cset6_slider_pane_g9_ParamLimits

0x73b7,	// (0x000950fd) main_cset6_slider_pane_g9

0x73c3,	// (0x00095109) main_cset6_slider_pane_g10_ParamLimits

0x73c3,	// (0x00095109) main_cset6_slider_pane_g10

0x73cf,	// (0x00095115) main_cset6_slider_pane_g11_ParamLimits

0x73cf,	// (0x00095115) main_cset6_slider_pane_g11

0x73db,	// (0x00095121) main_cset6_slider_pane_g12_ParamLimits

0x73db,	// (0x00095121) main_cset6_slider_pane_g12

0x73e7,	// (0x0009512d) main_cset6_slider_pane_g13_ParamLimits

0x73e7,	// (0x0009512d) main_cset6_slider_pane_g13

0x73f3,	// (0x00095139) main_cset6_slider_pane_g14_ParamLimits

0x73f3,	// (0x00095139) main_cset6_slider_pane_g14

0x8375,	// (0x000960bb) main_cset6_slider_pane_g15_ParamLimits

0x8375,	// (0x000960bb) main_cset6_slider_pane_g15

0x7417,	// (0x0009515d) main_cset6_slider_pane_g16_ParamLimits

0x7417,	// (0x0009515d) main_cset6_slider_pane_g16

0x7423,	// (0x00095169) main_cset6_slider_pane_g17_ParamLimits

0x7423,	// (0x00095169) main_cset6_slider_pane_g17

0x0011,

0xfacc,	// (0x0009d812) main_cset6_slider_pane_g_ParamLimits

0xfacc,	// (0x0009d812) main_cset6_slider_pane_g

0xc075,	// (0x00099dbb) main_cset6_slider_pane_t1_ParamLimits

0xc075,	// (0x00099dbb) main_cset6_slider_pane_t1

0x838d,	// (0x000960d3) main_cset6_slider_pane_t2_ParamLimits

0x838d,	// (0x000960d3) main_cset6_slider_pane_t2

0x83b8,	// (0x000960fe) main_cset6_slider_pane_t3_ParamLimits

0x83b8,	// (0x000960fe) main_cset6_slider_pane_t3

0x83e3,	// (0x00096129) main_cset6_slider_pane_t4_ParamLimits

0x83e3,	// (0x00096129) main_cset6_slider_pane_t4

0x840e,	// (0x00096154) main_cset6_slider_pane_t5_ParamLimits

0x840e,	// (0x00096154) main_cset6_slider_pane_t5

0xc0b6,	// (0x00099dfc) main_cset6_slider_pane_t7_ParamLimits

0xc0b6,	// (0x00099dfc) main_cset6_slider_pane_t7

0x8439,	// (0x0009617f) main_cset6_slider_pane_t8_ParamLimits

0x8439,	// (0x0009617f) main_cset6_slider_pane_t8

0x845d,	// (0x000961a3) main_cset6_slider_pane_t9_ParamLimits

0x845d,	// (0x000961a3) main_cset6_slider_pane_t9

0x8481,	// (0x000961c7) main_cset6_slider_pane_t10_ParamLimits

0x8481,	// (0x000961c7) main_cset6_slider_pane_t10

0x84a5,	// (0x000961eb) main_cset6_slider_pane_t11_ParamLimits

0x84a5,	// (0x000961eb) main_cset6_slider_pane_t11

0xc0ec,	// (0x00099e32) main_cset6_slider_pane_t14_ParamLimits

0xc0ec,	// (0x00099e32) main_cset6_slider_pane_t14

0xc125,	// (0x00099e6b) main_cset6_slider_pane_t15_ParamLimits

0xc125,	// (0x00099e6b) main_cset6_slider_pane_t15

0x000b,

0xfaf1,	// (0x0009d837) main_cset6_slider_pane_t_ParamLimits

0xfaf1,	// (0x0009d837) main_cset6_slider_pane_t

0xc15e,	// (0x00099ea4) cset_slider_pane_g1_copy1

0xc167,	// (0x00099ead) cset_slider_pane_g2_copy1

0xc170,	// (0x00099eb6) cset_slider_pane_g3_copy1

0x0e1d,	// (0x0008eb63) bg_popup_sub_pane_cp011_copy1

0xb958,	// (0x0009969e) main_cset_text_pane_g1_copy1

0xb960,	// (0x000996a6) main_cset_text_pane_t1_copy1

0xb96e,	// (0x000996b4) main_cset_text_pane_t2_copy1

0xb97c,	// (0x000996c2) main_cset_text_pane_t3_copy1

0xb98a,	// (0x000996d0) main_cset_text_pane_t4_copy1

0xb998,	// (0x000996de) main_cset_text_pane_t5_copy1

0xb9a6,	// (0x000996ec) main_cset_text_pane_t6_copy1

0xb9b4,	// (0x000996fa) main_cset_text_pane_t7_copy1

0x82a6,	// (0x00095fec) main_cset_text2_pane_t1_copy1

0x0e1d,	// (0x0008eb63) main_ncimui_pane

0x4883,	// (0x000925c9) popup_query_ncimui_window_ParamLimits

0x4883,	// (0x000925c9) popup_query_ncimui_window

0xaead,	// (0x00098bf3) field_cale_ev2_pane_g4_ParamLimits

0xaead,	// (0x00098bf3) field_cale_ev2_pane_g4

0x65e6,	// (0x0009432c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x65e6,	// (0x0009432c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d6,	// (0x0009d51c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d6,	// (0x0009d51c) cell_video_dialer_keypad_pane_g

0x65fe,	// (0x00094344) cell_video_dialer_keypad_pane_t1

0x0e1d,	// (0x0008eb63) bg_popup_window_pane_cp012

0xe1cd,	// (0x0009bf13) heading_pane_cp06

0xc268,	// (0x00099fae) ncim_query_content_pane

0x0e1d,	// (0x0008eb63) bg_popup_heading_pane_cp01

0xc270,	// (0x00099fb6) ncim_heading_pane_t1

0xc27e,	// (0x00099fc4) ncim_indicator_popup_pane

0xc290,	// (0x00099fd6) ncim_query_button_pane

0xc2a4,	// (0x00099fea) ncim_query_content_pane_t1

0xc2b6,	// (0x00099ffc) ncim_query_content_pane_t2

0x0005,

0xfb30,	// (0x0009d876) ncim_query_content_pane_t

0xc2f0,	// (0x0009a036) ncim_query_list_pane

0xc302,	// (0x0009a048) ncim_query_popup_pane

0xc27e,	// (0x00099fc4) ncim_indicator_popup_pane_ParamLimits

0x85c2,	// (0x00096308) ncim_query_content_pane_g1_ParamLimits

0x85c2,	// (0x00096308) ncim_query_content_pane_g1

0xc2a4,	// (0x00099fea) ncim_query_content_pane_t1_ParamLimits

0xc2b6,	// (0x00099ffc) ncim_query_content_pane_t2_ParamLimits

0x85ce,	// (0x00096314) ncim_query_content_pane_t3_ParamLimits

0x85ce,	// (0x00096314) ncim_query_content_pane_t3

0x85f6,	// (0x0009633c) ncim_query_content_pane_t4_ParamLimits

0x85f6,	// (0x0009633c) ncim_query_content_pane_t4

0x861e,	// (0x00096364) ncim_query_content_pane_t5_ParamLimits

0x861e,	// (0x00096364) ncim_query_content_pane_t5

0xc2c8,	// (0x0009a00e) ncim_query_content_pane_t6_ParamLimits

0xc2c8,	// (0x0009a00e) ncim_query_content_pane_t6

0xfb30,	// (0x0009d876) ncim_query_content_pane_t_ParamLimits

0xc2f0,	// (0x0009a036) ncim_query_list_pane_ParamLimits

0xc302,	// (0x0009a048) ncim_query_popup_pane_ParamLimits

0xc316,	// (0x0009a05c) wait_bar_pane_cp04

0x0e1d,	// (0x0008eb63) input_focus_pane_cp011

0xc31e,	// (0x0009a064) ncim_query_popup_pane_t1

0xc32c,	// (0x0009a072) ncim_list_query_list_pane_ParamLimits

0xc32c,	// (0x0009a072) ncim_list_query_list_pane

0x0e1d,	// (0x0008eb63) bg_button_pane_cp027

0xc33f,	// (0x0009a085) ncim_query_button_pane_g1

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp012

0xc349,	// (0x0009a08f) ncim_list_query_list_pane_g1

0xc351,	// (0x0009a097) ncim_list_query_list_pane_t1

0xd868,	// (0x0009b5ae) cam4_indicators_pane_g3_ParamLimits

0xd868,	// (0x0009b5ae) cam4_indicators_pane_g3

0x6cf7,	// (0x00094a3d) vid4_indicators_pane_g5_ParamLimits

0x6cf7,	// (0x00094a3d) vid4_indicators_pane_g5

0xd868,	// (0x0009b5ae) vid4_progress_pane_g5_ParamLimits

0xd868,	// (0x0009b5ae) vid4_progress_pane_g5

0x84db,	// (0x00096221) main_ncimui_pane_g1

0x8531,	// (0x00096277) ncimui_group_query_pane_ParamLimits

0x8531,	// (0x00096277) ncimui_group_query_pane

0x856d,	// (0x000962b3) ncimui_list_pane_ParamLimits

0x856d,	// (0x000962b3) ncimui_list_pane

0x858e,	// (0x000962d4) ncimui_text_pane_ParamLimits

0x858e,	// (0x000962d4) ncimui_text_pane

0x8646,	// (0x0009638c) ncimui_text_pane_t1_ParamLimits

0x8646,	// (0x0009638c) ncimui_text_pane_t1

0xc35f,	// (0x0009a0a5) ncimui_list_single_graphic_pane_ParamLimits

0xc35f,	// (0x0009a0a5) ncimui_list_single_graphic_pane

0x8664,	// (0x000963aa) ncimui_query_pane_ParamLimits

0x8664,	// (0x000963aa) ncimui_query_pane

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp013

0xc36f,	// (0x0009a0b5) ncim_list_query_list_pane_t1_copy1

0xc349,	// (0x0009a08f) ncim_list_single_graphic_pane_g1

0xc37d,	// (0x0009a0c3) ncim_query_button_pane_cp01

0xc389,	// (0x0009a0cf) ncim_query_entry_pane_ParamLimits

0xc389,	// (0x0009a0cf) ncim_query_entry_pane

0xc39c,	// (0x0009a0e2) ncimui_query_pane_g1

0xc3a8,	// (0x0009a0ee) ncimui_query_pane_t1_ParamLimits

0xc3a8,	// (0x0009a0ee) ncimui_query_pane_t1

0x9f34,	// (0x00097c7a) input_focus_pane_cp012

0xc3c1,	// (0x0009a107) ncim_query_entry_pane_t1

0xd9c2,	// (0x0009b708) main_im_pane_ParamLimits

0x9f34,	// (0x00097c7a) main_mobtv_pane_ParamLimits

0x9f34,	// (0x00097c7a) main_mobtv_pane

0x73b7,	// (0x000950fd) main_cset6_slider_pane_g18_ParamLimits

0x73b7,	// (0x000950fd) main_cset6_slider_pane_g18

0x73e7,	// (0x0009512d) main_cset6_slider_pane_g19_ParamLimits

0x73e7,	// (0x0009512d) main_cset6_slider_pane_g19

0xc3d3,	// (0x0009a119) bg_main_mobtv_pane_ParamLimits

0xc3d3,	// (0x0009a119) bg_main_mobtv_pane

0x8677,	// (0x000963bd) main_mobtv_info_pane

0x8680,	// (0x000963c6) main_mobtv_loading_pane_ParamLimits

0x8680,	// (0x000963c6) main_mobtv_loading_pane

0xc3e1,	// (0x0009a127) main_mobtv_pg_channel_list_pane

0xc3eb,	// (0x0009a131) main_mobtv_pg_hdr_pane

0x868d,	// (0x000963d3) main_mobtv_programe_curr_pane_ParamLimits

0x868d,	// (0x000963d3) main_mobtv_programe_curr_pane

0x869a,	// (0x000963e0) main_mobtv_programe_next_pane_ParamLimits

0x869a,	// (0x000963e0) main_mobtv_programe_next_pane

0xc3f4,	// (0x0009a13a) popup_mobtv_noti_window

0xabe1,	// (0x00098927) main_tv_pg_hdr_pane_g1

0xc3fc,	// (0x0009a142) main_tv_pg_hdr_pane_g2

0xc404,	// (0x0009a14a) main_tv_pg_hdr_pane_g3

0xc40c,	// (0x0009a152) main_tv_pg_hdr_pane_g4

0xc414,	// (0x0009a15a) main_tv_pg_hdr_pane_g5

0xc41e,	// (0x0009a164) main_tv_pg_hdr_pane_g6

0xc428,	// (0x0009a16e) main_tv_pg_hdr_pane_g7

0xc432,	// (0x0009a178) main_tv_pg_hdr_pane_g8

0xc43c,	// (0x0009a182) main_tv_pg_hdr_pane_g9

0xc446,	// (0x0009a18c) main_tv_pg_hdr_pane_g10

0xc450,	// (0x0009a196) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3d,	// (0x0009d883) main_tv_pg_hdr_pane_g

0xc45a,	// (0x0009a1a0) main_tv_pg_hdr_pane_t1

0xc468,	// (0x0009a1ae) main_tv_pg_hdr_pane_t2

0xc476,	// (0x0009a1bc) main_tv_pg_hdr_pane_t3

0xc486,	// (0x0009a1cc) main_tv_pg_hdr_pane_t4

0xc496,	// (0x0009a1dc) main_tv_pg_hdr_pane_t5

0x0004,

0xfb54,	// (0x0009d89a) main_tv_pg_hdr_pane_t

0xc4a6,	// (0x0009a1ec) single_mobtv_pg_channel_pane_ParamLimits

0xc4a6,	// (0x0009a1ec) single_mobtv_pg_channel_pane

0xc4b8,	// (0x0009a1fe) single_mobtv_pg_channel_table_pane

0xc4c1,	// (0x0009a207) single_mobtv_pg_channel_thumb_pane

0xc4ca,	// (0x0009a210) single_tv_pg_channel_pane_g1

0xc4d3,	// (0x0009a219) single_tv_pg_channel_pane_g2

0x0001,

0xfb5f,	// (0x0009d8a5) single_tv_pg_channel_pane_g

0xae48,	// (0x00098b8e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xae48,	// (0x00098b8e) bg_single_mobtv_pg_channel_thumb_pane

0xc4dc,	// (0x0009a222) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc4dc,	// (0x0009a222) single_mobtv_pg_channel_thumb_pane_g1

0xc4ea,	// (0x0009a230) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc4ea,	// (0x0009a230) single_mobtv_pg_channel_thumb_pane_g2

0xc4f6,	// (0x0009a23c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc4f6,	// (0x0009a23c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb64,	// (0x0009d8aa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb64,	// (0x0009d8aa) single_mobtv_pg_channel_thumb_pane_g

0xc502,	// (0x0009a248) single_mobtv_pg_channel_thumb_pane_t1

0xc510,	// (0x0009a256) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6b,	// (0x0009d8b1) single_mobtv_pg_channel_thumb_pane_t

0xabe1,	// (0x00098927) bg_single_mobtv_pg_channel_table_pane_g1

0xabe1,	// (0x00098927) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf622,	// (0x0009d368) bg_single_mobtv_pg_channel_table_pane_g

0xc51e,	// (0x0009a264) single_mobtv_pg_channel_table_pane_t1

0xc52c,	// (0x0009a272) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb70,	// (0x0009d8b6) single_mobtv_pg_channel_table_pane_t

0x86af,	// (0x000963f5) main_mobtv_info_pane_g1_ParamLimits

0x86af,	// (0x000963f5) main_mobtv_info_pane_g1

0x86cd,	// (0x00096413) main_mobtv_info_pane_t1_ParamLimits

0x86cd,	// (0x00096413) main_mobtv_info_pane_t1

0x8745,	// (0x0009648b) main_mobtv_info_pane_t2_ParamLimits

0x8745,	// (0x0009648b) main_mobtv_info_pane_t2

0x0002,

0xfb7a,	// (0x0009d8c0) main_mobtv_info_pane_t_ParamLimits

0xfb7a,	// (0x0009d8c0) main_mobtv_info_pane_t

0x87d4,	// (0x0009651a) wait_bar_pane_cp05

0x87e6,	// (0x0009652c) main_mobtv_loading_pane_g1_ParamLimits

0x87e6,	// (0x0009652c) main_mobtv_loading_pane_g1

0x87f9,	// (0x0009653f) main_mobtv_loading_pane_g2_ParamLimits

0x87f9,	// (0x0009653f) main_mobtv_loading_pane_g2

0x8805,	// (0x0009654b) main_mobtv_loading_pane_g3_ParamLimits

0x8805,	// (0x0009654b) main_mobtv_loading_pane_g3

0x0002,

0xfb81,	// (0x0009d8c7) main_mobtv_loading_pane_g_ParamLimits

0xfb81,	// (0x0009d8c7) main_mobtv_loading_pane_g

0xc53a,	// (0x0009a280) main_mobtv_loading_pane_t1_ParamLimits

0xc53a,	// (0x0009a280) main_mobtv_loading_pane_t1

0xc552,	// (0x0009a298) main_mobtv_loading_pane_t2_ParamLimits

0xc552,	// (0x0009a298) main_mobtv_loading_pane_t2

0x0001,

0xfb88,	// (0x0009d8ce) main_mobtv_loading_pane_t_ParamLimits

0xfb88,	// (0x0009d8ce) main_mobtv_loading_pane_t

0x8818,	// (0x0009655e) wait_bar_pane_cp06_ParamLimits

0x8818,	// (0x0009655e) wait_bar_pane_cp06

0xc576,	// (0x0009a2bc) main_mobtv_programe_curr_pane_t1

0xc584,	// (0x0009a2ca) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8d,	// (0x0009d8d3) main_mobtv_programe_curr_pane_t

0xc592,	// (0x0009a2d8) main_mobtv_programe_next_pane_t1

0xc5a0,	// (0x0009a2e6) main_mobtv_programe_next_pane_t2

0xc5ae,	// (0x0009a2f4) main_mobtv_programe_next_pane_t3

0x0002,

0xfb92,	// (0x0009d8d8) main_mobtv_programe_next_pane_t

0x0e1d,	// (0x0008eb63) bg_popup_mobtv_noti_window_pane

0xc5bc,	// (0x0009a302) popup_mobtv_noti_window_g1

0xc5c4,	// (0x0009a30a) popup_mobtv_noti_window_t1

0xc5d2,	// (0x0009a318) popup_mobtv_noti_window_t2

0x0001,

0xfb99,	// (0x0009d8df) popup_mobtv_noti_window_t

0xabe1,	// (0x00098927) bg_popup_mobtv_noti_window_pane_g1

0x0e1d,	// (0x0008eb63) sc_clock_pane

0x0e1d,	// (0x0008eb63) main_fs_bigclock_pane

0x7fdc,	// (0x00095d22) blid2_tripm_pane_t4_ParamLimits

0x7fdc,	// (0x00095d22) blid2_tripm_pane_t4

0x8827,	// (0x0009656d) sc_clock_pane_g1_ParamLimits

0x8827,	// (0x0009656d) sc_clock_pane_g1

0x8839,	// (0x0009657f) sc_clock_pane_t1_ParamLimits

0x8839,	// (0x0009657f) sc_clock_pane_t1

0x885b,	// (0x000965a1) sc_clock_pane_t2_ParamLimits

0x885b,	// (0x000965a1) sc_clock_pane_t2

0x8873,	// (0x000965b9) sc_clock_pane_t3_ParamLimits

0x8873,	// (0x000965b9) sc_clock_pane_t3

0x0004,

0xfb9e,	// (0x0009d8e4) sc_clock_pane_t_ParamLimits

0xfb9e,	// (0x0009d8e4) sc_clock_pane_t

0x9665,	// (0x000973ab) main_fs_bigclock_indicator_pane_ParamLimits

0x9665,	// (0x000973ab) main_fs_bigclock_indicator_pane

0xae18,	// (0x00098b5e) main_fs_bigclock_pane_g1_ParamLimits

0xae18,	// (0x00098b5e) main_fs_bigclock_pane_g1

0x9671,	// (0x000973b7) main_fs_bigclock_pane_t1_ParamLimits

0x9671,	// (0x000973b7) main_fs_bigclock_pane_t1

0x9683,	// (0x000973c9) main_fs_bigclock_pane_t2_ParamLimits

0x9683,	// (0x000973c9) main_fs_bigclock_pane_t2

0x9695,	// (0x000973db) main_fs_bigclock_pane_t3_ParamLimits

0x9695,	// (0x000973db) main_fs_bigclock_pane_t3

0x0002,

0xfd9d,	// (0x0009dae3) main_fs_bigclock_pane_t_ParamLimits

0xfd9d,	// (0x0009dae3) main_fs_bigclock_pane_t

0xd1f4,	// (0x0009af3a) main_fs_bigclock_indicator_pane_g1

0xc298,	// (0x00099fde) ncim_query_content_pane_g2_ParamLimits

0xc298,	// (0x00099fde) ncim_query_content_pane_g2

0x0001,

0xfb2b,	// (0x0009d871) ncim_query_content_pane_g_ParamLimits

0xfb2b,	// (0x0009d871) ncim_query_content_pane_g

0x888a,	// (0x000965d0) sc_clock_pane_t4_ParamLimits

0x888a,	// (0x000965d0) sc_clock_pane_t4

0x9f34,	// (0x00097c7a) main_radioblah_pane

0xb5e7,	// (0x0009932d) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5e7,	// (0x0009932d) cell_call4_button_pane_t1_copy1

0x84e3,	// (0x00096229) main_ncimui_pane_t1_ParamLimits

0x84e3,	// (0x00096229) main_ncimui_pane_t1

0x84fd,	// (0x00096243) main_ncimui_pane_t2_ParamLimits

0x84fd,	// (0x00096243) main_ncimui_pane_t2

0x0002,

0xfb24,	// (0x0009d86a) main_ncimui_pane_t_ParamLimits

0xfb24,	// (0x0009d86a) main_ncimui_pane_t

0xc702,	// (0x0009a448) main_radioblah_anim_pane_ParamLimits

0xc702,	// (0x0009a448) main_radioblah_anim_pane

0xc713,	// (0x0009a459) main_radioblah_info_pane_ParamLimits

0xc713,	// (0x0009a459) main_radioblah_info_pane

0xc727,	// (0x0009a46d) main_radioblah_pane_t1_ParamLimits

0xc727,	// (0x0009a46d) main_radioblah_pane_t1

0xc743,	// (0x0009a489) main_radioblah_pane_t2_ParamLimits

0xc743,	// (0x0009a489) main_radioblah_pane_t2

0x0003,

0xfbbf,	// (0x0009d905) main_radioblah_pane_t_ParamLimits

0xfbbf,	// (0x0009d905) main_radioblah_pane_t

0x8933,	// (0x00096679) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8933,	// (0x00096679) main_radioblah_rocker_ctrl_pane

0xc78b,	// (0x0009a4d1) main_radioblah_info_pane_t1_ParamLimits

0xc78b,	// (0x0009a4d1) main_radioblah_info_pane_t1

0x898b,	// (0x000966d1) main_radioblah_info_pane_t2_ParamLimits

0x898b,	// (0x000966d1) main_radioblah_info_pane_t2

0x0003,

0xfbc8,	// (0x0009d90e) main_radioblah_info_pane_t_ParamLimits

0xfbc8,	// (0x0009d90e) main_radioblah_info_pane_t

0xabe1,	// (0x00098927) main_radioblah_rocker_ctrl_pane_g1

0x8a3d,	// (0x00096783) main_radioblah_rocker_ctrl_pane_g2

0x8a45,	// (0x0009678b) main_radioblah_rocker_ctrl_pane_g3

0x8a4d,	// (0x00096793) main_radioblah_rocker_ctrl_pane_g4

0x8a55,	// (0x0009679b) main_radioblah_rocker_ctrl_pane_g5

0x8a5d,	// (0x000967a3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd1,	// (0x0009d917) main_radioblah_rocker_ctrl_pane_g

0x82a6,	// (0x00095fec) main_cset_text2_pane_t1_copy1_ParamLimits

0xd82a,	// (0x0009b570) cam4_image_uncrop_qvga_pane

0xd891,	// (0x0009b5d7) vid4_image_uncrop_qcif_pane

0xd9b4,	// (0x0009b6fa) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9b4,	// (0x0009b6fa) cam6_image_uncrop_qvga_pane

0xbedb,	// (0x00099c21) vid6_image_uncrop_qcif_pane_ParamLimits

0xbedb,	// (0x00099c21) vid6_image_uncrop_qcif_pane

0x0e1d,	// (0x0008eb63) bg_popup_preview_window_pane_cp03

0xc24a,	// (0x00099f90) list_cset_text2_pane

0xc252,	// (0x00099f98) main_cset6_text2_pane_g1

0xc25a,	// (0x00099fa0) main_cset6_text2_pane_t1

0x8a65,	// (0x000967ab) list_cset_text2_pane_t1_ParamLimits

0x8a65,	// (0x000967ab) list_cset_text2_pane_t1

0x9f34,	// (0x00097c7a) main_radioblah_pane_ParamLimits

0x87c0,	// (0x00096506) main_mobtv_info_pane_t3_ParamLimits

0x87c0,	// (0x00096506) main_mobtv_info_pane_t3

0x8921,	// (0x00096667) main_radioblah_pane_g1

0x895b,	// (0x000966a1) main_radioblah_info_pane_g1

0x89e2,	// (0x00096728) main_radioblah_info_pane_t3_ParamLimits

0x89e2,	// (0x00096728) main_radioblah_info_pane_t3

0x2978,	// (0x000906be) highlight_cell_cale_month_pane_ParamLimits

0x2978,	// (0x000906be) highlight_cell_cale_month_pane

0x0e1d,	// (0x0008eb63) main_phob_fisheye_pane

0xaf62,	// (0x00098ca8) scroll_pane_cp0031_ParamLimits

0xaf62,	// (0x00098ca8) scroll_pane_cp0031

0xbfe9,	// (0x00099d2f) wait_bar_pane_cp08_ParamLimits

0x832a,	// (0x00096070) cset_list_set_pane_copy1_ParamLimits

0xc7c5,	// (0x0009a50b) highlight_cell_cale_month_pane_g1

0x8a82,	// (0x000967c8) highlight_cell_cale_month_pane_t1

0xbc24,	// (0x0009996a) list_gen_pane_cp01

0xb7df,	// (0x00099525) scroll_pane_01

0xbc61,	// (0x000999a7) list_single_double_fisheye_pane

0x8a90,	// (0x000967d6) list_double_fisheye_pane_g1_ParamLimits

0x8a90,	// (0x000967d6) list_double_fisheye_pane_g1

0x8a9c,	// (0x000967e2) list_double_fisheye_pane_g2_ParamLimits

0x8a9c,	// (0x000967e2) list_double_fisheye_pane_g2

0x8ab0,	// (0x000967f6) list_double_fisheye_pane_g3_ParamLimits

0x8ab0,	// (0x000967f6) list_double_fisheye_pane_g3

0x0004,

0xfbde,	// (0x0009d924) list_double_fisheye_pane_g_ParamLimits

0xfbde,	// (0x0009d924) list_double_fisheye_pane_g

0x8ad9,	// (0x0009681f) list_double_fisheye_pane_t1_ParamLimits

0x8ad9,	// (0x0009681f) list_double_fisheye_pane_t1

0x8af4,	// (0x0009683a) list_double_fisheye_pane_t2_ParamLimits

0x8af4,	// (0x0009683a) list_double_fisheye_pane_t2

0x0001,

0xfbe9,	// (0x0009d92f) list_double_fisheye_pane_t_ParamLimits

0xfbe9,	// (0x0009d92f) list_double_fisheye_pane_t

0x0e1d,	// (0x0008eb63) main_call5_pane

0x88b5,	// (0x000965fb) sc_swipe_pane_ParamLimits

0x88b5,	// (0x000965fb) sc_swipe_pane

0x8b29,	// (0x0009686f) call5_image_pane_ParamLimits

0x8b29,	// (0x0009686f) call5_image_pane

0x8b46,	// (0x0009688c) call5_swipe_1_pane_ParamLimits

0x8b46,	// (0x0009688c) call5_swipe_1_pane

0x8b59,	// (0x0009689f) call5_swipe_2_pane_ParamLimits

0x8b59,	// (0x0009689f) call5_swipe_2_pane

0x8b84,	// (0x000968ca) popup_call5_audio_first_window_ParamLimits

0x8b84,	// (0x000968ca) popup_call5_audio_first_window

0xae48,	// (0x00098b8e) call5_swipe_1_pane_g1_ParamLimits

0xae48,	// (0x00098b8e) call5_swipe_1_pane_g1

0xc7cd,	// (0x0009a513) call5_swipe_1_pane_g2_ParamLimits

0xc7cd,	// (0x0009a513) call5_swipe_1_pane_g2

0x0001,

0xfbee,	// (0x0009d934) call5_swipe_1_pane_g_ParamLimits

0xfbee,	// (0x0009d934) call5_swipe_1_pane_g

0xc7d9,	// (0x0009a51f) call5_swipe_1_pane_t1_ParamLimits

0xc7d9,	// (0x0009a51f) call5_swipe_1_pane_t1

0xae48,	// (0x00098b8e) call5_swipe_2_pane_g1_ParamLimits

0xae48,	// (0x00098b8e) call5_swipe_2_pane_g1

0xc7ee,	// (0x0009a534) call5_swipe_2_pane_g2_ParamLimits

0xc7ee,	// (0x0009a534) call5_swipe_2_pane_g2

0x0001,

0xfbf3,	// (0x0009d939) call5_swipe_2_pane_g_ParamLimits

0xfbf3,	// (0x0009d939) call5_swipe_2_pane_g

0xc7fa,	// (0x0009a540) call5_swipe_2_pane_t1_ParamLimits

0xc7fa,	// (0x0009a540) call5_swipe_2_pane_t1

0xc80f,	// (0x0009a555) sc_swipe_pane_g1_ParamLimits

0xc80f,	// (0x0009a555) sc_swipe_pane_g1

0xc81c,	// (0x0009a562) sc_swipe_pane_g2_ParamLimits

0xc81c,	// (0x0009a562) sc_swipe_pane_g2

0x0001,

0xfbf8,	// (0x0009d93e) sc_swipe_pane_g_ParamLimits

0xfbf8,	// (0x0009d93e) sc_swipe_pane_g

0xc828,	// (0x0009a56e) sc_swipe_pane_t1_ParamLimits

0xc828,	// (0x0009a56e) sc_swipe_pane_t1

0x0e1d,	// (0x0008eb63) main_cmail_launcher_pane

0x8b95,	// (0x000968db) aid_size_cell_cmail_l_ParamLimits

0x8b95,	// (0x000968db) aid_size_cell_cmail_l

0x8baf,	// (0x000968f5) grid_cmail_l_pane_ParamLimits

0x8baf,	// (0x000968f5) grid_cmail_l_pane

0x8bca,	// (0x00096910) cell_cmail_l_pane_ParamLimits

0x8bca,	// (0x00096910) cell_cmail_l_pane

0x8bf0,	// (0x00096936) cell_cmail_l_pane_g1_ParamLimits

0x8bf0,	// (0x00096936) cell_cmail_l_pane_g1

0x8bfc,	// (0x00096942) cell_cmail_l_pane_t1_ParamLimits

0x8bfc,	// (0x00096942) cell_cmail_l_pane_t1

0xc83d,	// (0x0009a583) cell_cmail_l_pane_t2_ParamLimits

0xc83d,	// (0x0009a583) cell_cmail_l_pane_t2

0x0001,

0xfbfd,	// (0x0009d943) cell_cmail_l_pane_t_ParamLimits

0xfbfd,	// (0x0009d943) cell_cmail_l_pane_t

0x9f34,	// (0x00097c7a) grid_highlight_pane_cp018_ParamLimits

0x9f34,	// (0x00097c7a) grid_highlight_pane_cp018

0x0f3d,	// (0x0008ec83) main2_pane_ParamLimits

0x0f3d,	// (0x0008ec83) main2_pane

0xda6d,	// (0x0009b7b3) popup_sp_fs_action_menu_bg_pane_g1

0xda75,	// (0x0009b7bb) popup_sp_fs_action_menu_bg_pane_g2

0xda7d,	// (0x0009b7c3) popup_sp_fs_action_menu_bg_pane_g3

0xda85,	// (0x0009b7cb) popup_sp_fs_action_menu_bg_pane_g4

0xda8d,	// (0x0009b7d3) popup_sp_fs_action_menu_bg_pane_g5

0xda95,	// (0x0009b7db) popup_sp_fs_action_menu_bg_pane_g6

0xda9d,	// (0x0009b7e3) popup_sp_fs_action_menu_bg_pane_g7

0xdaa5,	// (0x0009b7eb) popup_sp_fs_action_menu_bg_pane_g8

0xdaad,	// (0x0009b7f3) popup_sp_fs_action_menu_bg_pane_g9

0xdab5,	// (0x0009b7fb) popup_sp_fs_action_menu_bg_pane_g10

0xdab5,	// (0x0009b7fb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009cef2) popup_sp_fs_action_menu_bg_pane_g

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g3_g1

0x1bde,	// (0x0008f924) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_t3_g3_g2

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g3_g3

0x0002,

0xf253,	// (0x0009cf99) list_medium_line_x2_t3_g3_g_ParamLimits

0xf253,	// (0x0009cf99) list_medium_line_x2_t3_g3_g

0x1bf6,	// (0x0008f93c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1bf6,	// (0x0008f93c) list_medium_line_x2_t3_g3_t1

0x1c0b,	// (0x0008f951) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c0b,	// (0x0008f951) list_medium_line_x2_t3_g3_t2

0x1c1f,	// (0x0008f965) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25a,	// (0x0009cfa0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25a,	// (0x0009cfa0) list_medium_line_x2_t3_g3_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g2_g1

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g2_g2

0x0001,

0xf261,	// (0x0009cfa7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf261,	// (0x0009cfa7) list_medium_line_x2_t3_g2_g

0x1c34,	// (0x0008f97a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c34,	// (0x0008f97a) list_medium_line_x2_t3_g2_t1

0x1c4a,	// (0x0008f990) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c4a,	// (0x0008f990) list_medium_line_x2_t3_g2_t2

0x1c5c,	// (0x0008f9a2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c5c,	// (0x0008f9a2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf266,	// (0x0009cfac) list_medium_line_x2_t3_g2_t_ParamLimits

0xf266,	// (0x0009cfac) list_medium_line_x2_t3_g2_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t4_g4_g1

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t4_g4_g2

0x1bde,	// (0x0008f924) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_t4_g4_g3

0x1c86,	// (0x0008f9cc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1c86,	// (0x0008f9cc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf26d,	// (0x0009cfb3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf26d,	// (0x0009cfb3) list_medium_line_x2_t4_g4_g

0x1c92,	// (0x0008f9d8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c92,	// (0x0008f9d8) list_medium_line_x2_t4_g4_t1

0x1ca9,	// (0x0008f9ef) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ca9,	// (0x0008f9ef) list_medium_line_x2_t4_g4_t2

0x1cbe,	// (0x0008fa04) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1cbe,	// (0x0008fa04) list_medium_line_x2_t4_g4_t3

0x1cd0,	// (0x0008fa16) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1cd0,	// (0x0008fa16) list_medium_line_x2_t4_g4_t4

0x0003,

0xf276,	// (0x0009cfbc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf276,	// (0x0009cfbc) list_medium_line_x2_t4_g4_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g4_g1

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t2_g4_g2

0x1bde,	// (0x0008f924) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_t2_g4_g3

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c5,	// (0x0009d00b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c5,	// (0x0009d00b) list_medium_line_x2_t2_g4_g

0x2996,	// (0x000906dc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2996,	// (0x000906dc) list_medium_line_x2_t2_g4_t1

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ce,	// (0x0009d014) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ce,	// (0x0009d014) list_medium_line_x2_t2_g4_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g3_g1

0x1bde,	// (0x0008f924) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_t2_g3_g2

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g3_g3

0x0002,

0xf253,	// (0x0009cf99) list_medium_line_x2_t2_g3_g_ParamLimits

0xf253,	// (0x0009cf99) list_medium_line_x2_t2_g3_g

0x29ab,	// (0x000906f1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x29ab,	// (0x000906f1) list_medium_line_x2_t2_g3_t1

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0009d019) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0009d019) list_medium_line_x2_t2_g3_t

0x2b88,	// (0x000908ce) main_sp_fs_list_pane_ParamLimits

0x2b88,	// (0x000908ce) main_sp_fs_list_pane

0x2b94,	// (0x000908da) sp_fs_scroll_pane_ParamLimits

0x2b94,	// (0x000908da) sp_fs_scroll_pane

0x2ba0,	// (0x000908e6) list_medium_line_x2_t3_t1

0x2bb0,	// (0x000908f6) list_medium_line_x2_t3_t2

0x2bbe,	// (0x00090904) list_medium_line_x2_t3_t3

0x0002,

0xf2f3,	// (0x0009d039) list_medium_line_x2_t3_t

0x2bcc,	// (0x00090912) list_medium_line_x3_t4_t1

0x2bdc,	// (0x00090922) list_medium_line_x3_t4_t2

0x2bea,	// (0x00090930) list_medium_line_x3_t4_t3

0x2bbe,	// (0x00090904) list_medium_line_x3_t4_t4

0x0003,

0xf2fa,	// (0x0009d040) list_medium_line_x3_t4_t

0x2bf8,	// (0x0009093e) list_medium_line_x4_t5_t1

0x2c08,	// (0x0009094e) list_medium_line_x4_t5_t2

0x2bea,	// (0x00090930) list_medium_line_x4_t5_t3

0x2c16,	// (0x0009095c) list_medium_line_x4_t5_t4

0x2bbe,	// (0x00090904) list_medium_line_x4_t5_t5

0x0004,

0xf303,	// (0x0009d049) list_medium_line_x4_t5_t

0x1bd2,	// (0x0008f918) list_medium_line_t4_g4_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_t4_g4_g1

0x1c86,	// (0x0008f9cc) list_medium_line_t4_g4_g2_ParamLimits

0x1c86,	// (0x0008f9cc) list_medium_line_t4_g4_g2

0x2c24,	// (0x0009096a) list_medium_line_t4_g4_g3_ParamLimits

0x2c24,	// (0x0009096a) list_medium_line_t4_g4_g3

0x1bea,	// (0x0008f930) list_medium_line_t4_g4_g4_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_t4_g4_g4

0x0003,

0xf30e,	// (0x0009d054) list_medium_line_t4_g4_g_ParamLimits

0xf30e,	// (0x0009d054) list_medium_line_t4_g4_g

0x2c30,	// (0x00090976) list_medium_line_t4_g4_t1_ParamLimits

0x2c30,	// (0x00090976) list_medium_line_t4_g4_t1

0x2c45,	// (0x0009098b) list_medium_line_t4_g4_t2_ParamLimits

0x2c45,	// (0x0009098b) list_medium_line_t4_g4_t2

0x2c5b,	// (0x000909a1) list_medium_line_t4_g4_t3_ParamLimits

0x2c5b,	// (0x000909a1) list_medium_line_t4_g4_t3

0x1c1f,	// (0x0008f965) list_medium_line_t4_g4_t4_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_t4_g4_t4

0x0003,

0xf317,	// (0x0009d05d) list_medium_line_t4_g4_t_ParamLimits

0xf317,	// (0x0009d05d) list_medium_line_t4_g4_t

0x2d0f,	// (0x00090a55) chi_dic_find_pane_g1

0x4622,	// (0x00092368) main_tport_pane

0xb8e9,	// (0x0009962f) list_medium_line_plain_t1

0xb8ff,	// (0x00099645) list_medium_line_t2_g2_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t2_g2_g1

0xb90b,	// (0x00099651) list_medium_line_t2_g2_g2_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_t2_g2_g2

0x0001,

0xf93a,	// (0x0009d680) list_medium_line_t2_g2_g_ParamLimits

0xf93a,	// (0x0009d680) list_medium_line_t2_g2_g

0x7795,	// (0x000954db) list_medium_line_t2_g2_t1_ParamLimits

0x7795,	// (0x000954db) list_medium_line_t2_g2_t1

0x77af,	// (0x000954f5) list_medium_line_t2_g2_t2_ParamLimits

0x77af,	// (0x000954f5) list_medium_line_t2_g2_t2

0x0001,

0xf93f,	// (0x0009d685) list_medium_line_t2_g2_t_ParamLimits

0xf93f,	// (0x0009d685) list_medium_line_t2_g2_t

0xbc2d,	// (0x00099973) aid_sp_fs_list_icon_a_sm

0xbc35,	// (0x0009997b) aid_sp_fs_list_icon_d

0xbc3d,	// (0x00099983) aid_sp_fs_text_primary

0xbc46,	// (0x0009998c) aid_sp_fs_text_secondary

0xbc4f,	// (0x00099995) list_medium_line

0xbc4f,	// (0x00099995) list_medium_line_g2

0xbc4f,	// (0x00099995) list_medium_line_g3

0xbc4f,	// (0x00099995) list_medium_line_plain

0xbc4f,	// (0x00099995) list_medium_line_plain_t2

0xbc4f,	// (0x00099995) list_medium_line_plain_t3

0xbc4f,	// (0x00099995) list_medium_line_right_icon

0xbc4f,	// (0x00099995) list_medium_line_right_iconx2

0xbc4f,	// (0x00099995) list_medium_line_t2

0xbc4f,	// (0x00099995) list_medium_line_t2_g2

0xbc4f,	// (0x00099995) list_medium_line_t2_g3

0xbc4f,	// (0x00099995) list_medium_line_t2_right_icon

0xbc4f,	// (0x00099995) list_medium_line_t2_right_iconx2

0xbc4f,	// (0x00099995) list_medium_line_t3

0xbc4f,	// (0x00099995) list_medium_line_t3_g2

0xbc4f,	// (0x00099995) list_medium_line_t3_g3

0xbc4f,	// (0x00099995) list_medium_line_t3_right_iconx2

0xbc58,	// (0x0009999e) list_medium_line_t4_g4

0xbc61,	// (0x000999a7) list_medium_line_x2

0xbc61,	// (0x000999a7) list_medium_line_x2_t2_g2

0xbc61,	// (0x000999a7) list_medium_line_x2_t2_g3

0xbc61,	// (0x000999a7) list_medium_line_x2_t2_g4

0xbc61,	// (0x000999a7) list_medium_line_x2_t3

0xbc61,	// (0x000999a7) list_medium_line_x2_t3_g2

0xbc61,	// (0x000999a7) list_medium_line_x2_t3_g3

0xbc61,	// (0x000999a7) list_medium_line_x2_t3_g4

0xbc61,	// (0x000999a7) list_medium_line_x2_t4_g2

0xbc61,	// (0x000999a7) list_medium_line_x2_t4_g4

0xbc6a,	// (0x000999b0) list_medium_line_x3

0xbc6a,	// (0x000999b0) list_medium_line_x3_t4

0xbc6a,	// (0x000999b0) list_medium_line_x3_t4_g4

0xbc58,	// (0x0009999e) list_medium_line_x4_t4

0xbc58,	// (0x0009999e) list_medium_line_x4_t4_g7

0xbc58,	// (0x0009999e) list_medium_line_x4_t5

0xbc73,	// (0x000999b9) list_single_fs_dyc_pane_ParamLimits

0xbc73,	// (0x000999b9) list_single_fs_dyc_pane

0x1bd2,	// (0x0008f918) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x4_t4_g7_g1

0xc179,	// (0x00099ebf) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc179,	// (0x00099ebf) list_medium_line_x4_t4_g7_g2

0xc185,	// (0x00099ecb) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc185,	// (0x00099ecb) list_medium_line_x4_t4_g7_g3

0xc194,	// (0x00099eda) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc194,	// (0x00099eda) list_medium_line_x4_t4_g7_g4

0xc1a0,	// (0x00099ee6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc1a0,	// (0x00099ee6) list_medium_line_x4_t4_g7_g5

0xc1af,	// (0x00099ef5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc1af,	// (0x00099ef5) list_medium_line_x4_t4_g7_g6

0xc1be,	// (0x00099f04) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc1be,	// (0x00099f04) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0a,	// (0x0009d850) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0a,	// (0x0009d850) list_medium_line_x4_t4_g7_g

0xc1ca,	// (0x00099f10) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc1ca,	// (0x00099f10) list_medium_line_x4_t4_g7_t1

0xc1df,	// (0x00099f25) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc1df,	// (0x00099f25) list_medium_line_x4_t4_g7_t2

0xc1f4,	// (0x00099f3a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc1f4,	// (0x00099f3a) list_medium_line_x4_t4_g7_t3

0xc209,	// (0x00099f4f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc209,	// (0x00099f4f) list_medium_line_x4_t4_g7_t4

0xc21b,	// (0x00099f61) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc21b,	// (0x00099f61) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb19,	// (0x0009d85f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb19,	// (0x0009d85f) list_medium_line_x4_t4_g7_t

0xc22d,	// (0x00099f73) list_single_dyc_row_pane_ParamLimits

0xc22d,	// (0x00099f73) list_single_dyc_row_pane

0x8b16,	// (0x0009685c) call5_gesture_pane_ParamLimits

0x8b16,	// (0x0009685c) call5_gesture_pane

0x8b6c,	// (0x000968b2) call5_windows_pane_ParamLimits

0x8b6c,	// (0x000968b2) call5_windows_pane

0x8c12,	// (0x00096958) call5_swipe_1_pane_cp_ParamLimits

0x8c12,	// (0x00096958) call5_swipe_1_pane_cp

0x8c1e,	// (0x00096964) call5_swipe_2_pane_cp_ParamLimits

0x8c1e,	// (0x00096964) call5_swipe_2_pane_cp

0xe44a,	// (0x0009c190) call5_image_pane_cp

0x8c2a,	// (0x00096970) popup_call5_audio_first_window_cp_ParamLimits

0x8c2a,	// (0x00096970) popup_call5_audio_first_window_cp

0xc80f,	// (0x0009a555) call5_swipe_1_pane_g1_cp_ParamLimits

0xc80f,	// (0x0009a555) call5_swipe_1_pane_g1_cp

0xc84f,	// (0x0009a595) call5_swipe_1_pane_g2_cp

0xc828,	// (0x0009a56e) call5_swipe_1_pane_t1_cp_ParamLimits

0xc828,	// (0x0009a56e) call5_swipe_1_pane_t1_cp

0xc80f,	// (0x0009a555) call5_swipe_2_pane_g1_cp_ParamLimits

0xc80f,	// (0x0009a555) call5_swipe_2_pane_g1_cp

0xc857,	// (0x0009a59d) call5_swipe_2_pane_g2_cp

0xc85f,	// (0x0009a5a5) call5_swipe_2_pane_t1_cp_ParamLimits

0xc85f,	// (0x0009a5a5) call5_swipe_2_pane_t1_cp

0x9f34,	// (0x00097c7a) main_sp_fs_email_pane

0xc874,	// (0x0009a5ba) main_sp_fs_listscroll_pane_te

0xc87d,	// (0x0009a5c3) popup_sp_fs_action_menu_pane_ParamLimits

0xc87d,	// (0x0009a5c3) popup_sp_fs_action_menu_pane

0xabe1,	// (0x00098927) bg_sp_fs_ctrlbar_pane_g1

0xc8bf,	// (0x0009a605) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc8c8,	// (0x0009a60e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc8d1,	// (0x0009a617) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xabe1,	// (0x00098927) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc02,	// (0x0009d948) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa9c4,	// (0x0009870a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa9c4,	// (0x0009870a) bg_sp_fs_ctrlbar_ddmenu_pane

0xc8da,	// (0x0009a620) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc8da,	// (0x0009a620) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc8e6,	// (0x0009a62c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc8e6,	// (0x0009a62c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0b,	// (0x0009d951) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0b,	// (0x0009d951) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc8f2,	// (0x0009a638) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc8f2,	// (0x0009a638) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc90c,	// (0x0009a652) list_medium_line_t2_right_icon_g1

0x8c36,	// (0x0009697c) list_medium_line_t2_right_icon_t1

0x8c46,	// (0x0009698c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc10,	// (0x0009d956) list_medium_line_t2_right_icon_t

0x4600,	// (0x00092346) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4600,	// (0x00092346) bg_sp_fs_ctrlbar_pane

0x8ca0,	// (0x000969e6) main_sp_fs_ctrlbar_button_pane_cp01

0x8caa,	// (0x000969f0) main_sp_fs_ctrlbar_ddmenu_pane

0xc94c,	// (0x0009a692) main_sp_fs_ctrlbar_pane_g1

0xc958,	// (0x0009a69e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc15,	// (0x0009d95b) main_sp_fs_ctrlbar_pane_g

0xc964,	// (0x0009a6aa) main_sp_fs_ctrlbar_pane_t1

0x8cb4,	// (0x000969fa) main_sp_fs_ctrlbar_pane

0x8cd8,	// (0x00096a1e) main_sp_fs_listscroll_pane_te_cp01

0x8cf8,	// (0x00096a3e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8cf8,	// (0x00096a3e) popup_sp_fs_action_menu_pane_cp01

0x9f34,	// (0x00097c7a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9f34,	// (0x00097c7a) bg_sp_fs_highlight_list_pane_cp01

0xc979,	// (0x0009a6bf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc979,	// (0x0009a6bf) sp_fs_action_menu_list_gene_pane_g1

0xc988,	// (0x0009a6ce) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc988,	// (0x0009a6ce) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc1a,	// (0x0009d960) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc1a,	// (0x0009d960) sp_fs_action_menu_list_gene_pane_g

0xc995,	// (0x0009a6db) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc995,	// (0x0009a6db) sp_fs_action_menu_list_gene_pane_t1

0xc9ad,	// (0x0009a6f3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc9ad,	// (0x0009a6f3) sp_fs_action_menu_list_gene_pane

0xc9cc,	// (0x0009a712) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc9cc,	// (0x0009a712) popup_sp_fs_action_menu_bg_pane

0xc9da,	// (0x0009a720) sp_fs_action_menu_list_pane_ParamLimits

0xc9da,	// (0x0009a720) sp_fs_action_menu_list_pane

0xc9fa,	// (0x0009a740) sp_fs_scroll_pane_cp01_ParamLimits

0xc9fa,	// (0x0009a740) sp_fs_scroll_pane_cp01

0x8d12,	// (0x00096a58) list_medium_line_plain_t2_t1

0x8d22,	// (0x00096a68) list_medium_line_plain_t2_t2

0x0001,

0xfc1f,	// (0x0009d965) list_medium_line_plain_t2_t

0x8d32,	// (0x00096a78) list_medium_line_plain_t3_t1

0x8d42,	// (0x00096a88) list_medium_line_plain_t3_t2

0x8d50,	// (0x00096a96) list_medium_line_plain_t3_t3

0x0002,

0xfc24,	// (0x0009d96a) list_medium_line_plain_t3_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t2_g2_g1

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t2_g2_g2

0x0001,

0xf261,	// (0x0009cfa7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf261,	// (0x0009cfa7) list_medium_line_x2_t2_g2_g

0x2c30,	// (0x00090976) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c30,	// (0x00090976) list_medium_line_x2_t2_g2_t1

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc2b,	// (0x0009d971) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc2b,	// (0x0009d971) list_medium_line_x2_t2_g2_t

0x1bd2,	// (0x0008f918) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t4_g2_g1

0xca20,	// (0x0009a766) list_medium_line_x2_t4_g2_g2_ParamLimits

0xca20,	// (0x0009a766) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc30,	// (0x0009d976) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc30,	// (0x0009d976) list_medium_line_x2_t4_g2_g

0x8d5e,	// (0x00096aa4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8d5e,	// (0x00096aa4) list_medium_line_x2_t4_g2_t1

0x8d75,	// (0x00096abb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8d75,	// (0x00096abb) list_medium_line_x2_t4_g2_t2

0x8d8a,	// (0x00096ad0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8d8a,	// (0x00096ad0) list_medium_line_x2_t4_g2_t3

0x1c1f,	// (0x0008f965) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc35,	// (0x0009d97b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc35,	// (0x0009d97b) list_medium_line_x2_t4_g2_t

0xca32,	// (0x0009a778) list_medium_line_t3_right_iconx2_g1

0xc90c,	// (0x0009a652) list_medium_line_t3_right_iconx2_g2

0x8d9c,	// (0x00096ae2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc3e,	// (0x0009d984) list_medium_line_t3_right_iconx2_g

0x8da6,	// (0x00096aec) list_medium_line_t3_right_iconx2_t1

0x8db6,	// (0x00096afc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc45,	// (0x0009d98b) list_medium_line_t3_right_iconx2_t

0x1bd2,	// (0x0008f918) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x3_t4_g4_g1

0x1bde,	// (0x0008f924) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x3_t4_g4_g2

0x1c86,	// (0x0008f9cc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1c86,	// (0x0008f9cc) list_medium_line_x3_t4_g4_g3

0xca3a,	// (0x0009a780) list_medium_line_x3_t4_g4_g4_ParamLimits

0xca3a,	// (0x0009a780) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc4a,	// (0x0009d990) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc4a,	// (0x0009d990) list_medium_line_x3_t4_g4_g

0x8dc4,	// (0x00096b0a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8dc4,	// (0x00096b0a) list_medium_line_x3_t4_g4_t1

0x8ddb,	// (0x00096b21) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8ddb,	// (0x00096b21) list_medium_line_x3_t4_g4_t2

0xca46,	// (0x0009a78c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xca46,	// (0x0009a78c) list_medium_line_x3_t4_g4_t3

0xca5b,	// (0x0009a7a1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xca5b,	// (0x0009a7a1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc53,	// (0x0009d999) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc53,	// (0x0009d999) list_medium_line_x3_t4_g4_t

0x8df6,	// (0x00096b3c) list_single_dyc_row_text_pane_t1_ParamLimits

0x8df6,	// (0x00096b3c) list_single_dyc_row_text_pane_t1

0x8e3f,	// (0x00096b85) list_single_dyc_row_text_pane_t2_ParamLimits

0x8e3f,	// (0x00096b85) list_single_dyc_row_text_pane_t2

0xca78,	// (0x0009a7be) list_single_dyc_row_text_pane_t3_ParamLimits

0xca78,	// (0x0009a7be) list_single_dyc_row_text_pane_t3

0x0002,

0xfc5c,	// (0x0009d9a2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc5c,	// (0x0009d9a2) list_single_dyc_row_text_pane_t

0xca8a,	// (0x0009a7d0) list_single_dyc_row_pane_g1_ParamLimits

0xca8a,	// (0x0009a7d0) list_single_dyc_row_pane_g1

0xca96,	// (0x0009a7dc) list_single_dyc_row_pane_g2_ParamLimits

0xca96,	// (0x0009a7dc) list_single_dyc_row_pane_g2

0xcaa2,	// (0x0009a7e8) list_single_dyc_row_pane_g3_ParamLimits

0xcaa2,	// (0x0009a7e8) list_single_dyc_row_pane_g3

0xcaae,	// (0x0009a7f4) list_single_dyc_row_pane_g4_ParamLimits

0xcaae,	// (0x0009a7f4) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x0009d9a9) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x0009d9a9) list_single_dyc_row_pane_g

0xcaba,	// (0x0009a800) list_single_dyc_row_text_pane_ParamLimits

0xcaba,	// (0x0009a800) list_single_dyc_row_text_pane

0x0e1d,	// (0x0008eb63) bg_sp_fs_scroll_pane

0xcad9,	// (0x0009a81f) thumb_sp_fs_scroll_pane

0xb8ff,	// (0x00099645) list_medium_line_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_g1

0xcae2,	// (0x0009a828) list_medium_line_t1_ParamLimits

0xcae2,	// (0x0009a828) list_medium_line_t1

0x1bd2,	// (0x0008f918) list_medium_line_x2_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_g1

0x1bde,	// (0x0008f924) list_medium_line_x2_g2_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_g2

0x0001,

0xfc6c,	// (0x0009d9b2) list_medium_line_x2_g_ParamLimits

0xfc6c,	// (0x0009d9b2) list_medium_line_x2_g

0xcaf7,	// (0x0009a83d) list_medium_line_x2_t1_ParamLimits

0xcaf7,	// (0x0009a83d) list_medium_line_x2_t1

0x1bd2,	// (0x0008f918) list_medium_line_x3_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x3_g1

0x1bde,	// (0x0008f924) list_medium_line_x3_g2_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x0009d9b2) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x0009d9b2) list_medium_line_x3_g

0xcaf7,	// (0x0009a83d) list_medium_line_x3_t1_ParamLimits

0xcaf7,	// (0x0009a83d) list_medium_line_x3_t1

0xcb0d,	// (0x0009a853) thumb_sp_fs_scroll_pane_g1

0xcb16,	// (0x0009a85c) thumb_sp_fs_scroll_pane_g2

0xcb1f,	// (0x0009a865) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0009d9b7) thumb_sp_fs_scroll_pane_g

0xcb0d,	// (0x0009a853) bg_sp_fs_scroll_pane_g1

0xcb16,	// (0x0009a85c) bg_sp_fs_scroll_pane_g2

0xcb1f,	// (0x0009a865) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0009d9b7) bg_sp_fs_scroll_pane_g

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1bd2,	// (0x0008f918) list_medium_line_x2_t3_g4_g1

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1c7a,	// (0x0008f9c0) list_medium_line_x2_t3_g4_g2

0x1bde,	// (0x0008f924) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1bde,	// (0x0008f924) list_medium_line_x2_t3_g4_g3

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1bea,	// (0x0008f930) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c5,	// (0x0009d00b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c5,	// (0x0009d00b) list_medium_line_x2_t3_g4_g

0x8e99,	// (0x00096bdf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e99,	// (0x00096bdf) list_medium_line_x2_t3_g4_t1

0x8eb3,	// (0x00096bf9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8eb3,	// (0x00096bf9) list_medium_line_x2_t3_g4_t2

0x1c1f,	// (0x0008f965) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c1f,	// (0x0008f965) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc78,	// (0x0009d9be) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc78,	// (0x0009d9be) list_medium_line_x2_t3_g4_t

0xb8ff,	// (0x00099645) list_medium_line_g2_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_g2_g1

0xb90b,	// (0x00099651) list_medium_line_g2_g2_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_g2_g2

0x0001,

0xf93a,	// (0x0009d680) list_medium_line_g2_g_ParamLimits

0xf93a,	// (0x0009d680) list_medium_line_g2_g

0xcb28,	// (0x0009a86e) list_medium_line_g2_t1_ParamLimits

0xcb28,	// (0x0009a86e) list_medium_line_g2_t1

0xb8ff,	// (0x00099645) list_medium_line_t3_g2_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t3_g2_g1

0xb90b,	// (0x00099651) list_medium_line_t3_g2_g2_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_t3_g2_g2

0x0001,

0xf93a,	// (0x0009d680) list_medium_line_t3_g2_g_ParamLimits

0xf93a,	// (0x0009d680) list_medium_line_t3_g2_g

0x8ecc,	// (0x00096c12) list_medium_line_t3_g2_t1_ParamLimits

0x8ecc,	// (0x00096c12) list_medium_line_t3_g2_t1

0x8ee3,	// (0x00096c29) list_medium_line_t3_g2_t2_ParamLimits

0x8ee3,	// (0x00096c29) list_medium_line_t3_g2_t2

0x8ef8,	// (0x00096c3e) list_medium_line_t3_g2_t3_ParamLimits

0x8ef8,	// (0x00096c3e) list_medium_line_t3_g2_t3

0x0002,

0xfc7f,	// (0x0009d9c5) list_medium_line_t3_g2_t_ParamLimits

0xfc7f,	// (0x0009d9c5) list_medium_line_t3_g2_t

0xc90c,	// (0x0009a652) list_medium_line_right_icon_g1

0xcb3d,	// (0x0009a883) list_medium_line_right_icon_t1

0xb8ff,	// (0x00099645) list_medium_line_t2_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t2_g1

0x8f11,	// (0x00096c57) list_medium_line_t2_t1_ParamLimits

0x8f11,	// (0x00096c57) list_medium_line_t2_t1

0x8f2b,	// (0x00096c71) list_medium_line_t2_t2_ParamLimits

0x8f2b,	// (0x00096c71) list_medium_line_t2_t2

0x0001,

0xfc86,	// (0x0009d9cc) list_medium_line_t2_t_ParamLimits

0xfc86,	// (0x0009d9cc) list_medium_line_t2_t

0xb8ff,	// (0x00099645) list_medium_line_t3_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t3_g1

0x8f44,	// (0x00096c8a) list_medium_line_t3_t1_ParamLimits

0x8f44,	// (0x00096c8a) list_medium_line_t3_t1

0x8f5e,	// (0x00096ca4) list_medium_line_t3_t2_ParamLimits

0x8f5e,	// (0x00096ca4) list_medium_line_t3_t2

0x8f73,	// (0x00096cb9) list_medium_line_t3_t3_ParamLimits

0x8f73,	// (0x00096cb9) list_medium_line_t3_t3

0x0002,

0xfc8b,	// (0x0009d9d1) list_medium_line_t3_t_ParamLimits

0xfc8b,	// (0x0009d9d1) list_medium_line_t3_t

0xb8ff,	// (0x00099645) list_medium_line_g3_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_g3_g1

0xcb4b,	// (0x0009a891) list_medium_line_g3_g2_ParamLimits

0xcb4b,	// (0x0009a891) list_medium_line_g3_g2

0xb90b,	// (0x00099651) list_medium_line_g3_g3_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_g3_g3

0x0002,

0xfc92,	// (0x0009d9d8) list_medium_line_g3_g_ParamLimits

0xfc92,	// (0x0009d9d8) list_medium_line_g3_g

0xcb57,	// (0x0009a89d) list_medium_line_g3_t1_ParamLimits

0xcb57,	// (0x0009a89d) list_medium_line_g3_t1

0xb8ff,	// (0x00099645) list_medium_line_t2_g3_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t2_g3_g1

0xcb4b,	// (0x0009a891) list_medium_line_t2_g3_g2_ParamLimits

0xcb4b,	// (0x0009a891) list_medium_line_t2_g3_g2

0xb90b,	// (0x00099651) list_medium_line_t2_g3_g3_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_t2_g3_g3

0x0002,

0xfc92,	// (0x0009d9d8) list_medium_line_t2_g3_g_ParamLimits

0xfc92,	// (0x0009d9d8) list_medium_line_t2_g3_g

0x8f88,	// (0x00096cce) list_medium_line_t2_g3_t1_ParamLimits

0x8f88,	// (0x00096cce) list_medium_line_t2_g3_t1

0x8f9f,	// (0x00096ce5) list_medium_line_t2_g3_t2_ParamLimits

0x8f9f,	// (0x00096ce5) list_medium_line_t2_g3_t2

0x0001,

0xfc99,	// (0x0009d9df) list_medium_line_t2_g3_t_ParamLimits

0xfc99,	// (0x0009d9df) list_medium_line_t2_g3_t

0xb8ff,	// (0x00099645) list_medium_line_t3_g3_g1_ParamLimits

0xb8ff,	// (0x00099645) list_medium_line_t3_g3_g1

0xcb4b,	// (0x0009a891) list_medium_line_t3_g3_g2_ParamLimits

0xcb4b,	// (0x0009a891) list_medium_line_t3_g3_g2

0xb90b,	// (0x00099651) list_medium_line_t3_g3_g3_ParamLimits

0xb90b,	// (0x00099651) list_medium_line_t3_g3_g3

0x0002,

0xfc92,	// (0x0009d9d8) list_medium_line_t3_g3_g_ParamLimits

0xfc92,	// (0x0009d9d8) list_medium_line_t3_g3_g

0x8fba,	// (0x00096d00) list_medium_line_t3_g3_t1_ParamLimits

0x8fba,	// (0x00096d00) list_medium_line_t3_g3_t1

0x8fd3,	// (0x00096d19) list_medium_line_t3_g3_t2_ParamLimits

0x8fd3,	// (0x00096d19) list_medium_line_t3_g3_t2

0x8fe9,	// (0x00096d2f) list_medium_line_t3_g3_t3_ParamLimits

0x8fe9,	// (0x00096d2f) list_medium_line_t3_g3_t3

0x0002,

0xfc9e,	// (0x0009d9e4) list_medium_line_t3_g3_t_ParamLimits

0xfc9e,	// (0x0009d9e4) list_medium_line_t3_g3_t

0xca32,	// (0x0009a778) list_medium_line_right_iconx2_g1

0xc90c,	// (0x0009a652) list_medium_line_right_iconx2_g2

0x0001,

0xfca5,	// (0x0009d9eb) list_medium_line_right_iconx2_g

0xcb6c,	// (0x0009a8b2) list_medium_line_right_iconx2_t1

0xca32,	// (0x0009a778) list_medium_line_t2_right_iconx2_g1

0xc90c,	// (0x0009a652) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfca5,	// (0x0009d9eb) list_medium_line_t2_right_iconx2_g

0x9003,	// (0x00096d49) list_medium_line_t2_right_iconx2_t1

0x9013,	// (0x00096d59) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcaa,	// (0x0009d9f0) list_medium_line_t2_right_iconx2_t

0xcb7a,	// (0x0009a8c0) list_medium_line_x4_t4_t1

0x9025,	// (0x00096d6b) list_medium_line_x4_t4_t2

0x9035,	// (0x00096d7b) list_medium_line_x4_t4_t3

0x9045,	// (0x00096d8b) list_medium_line_x4_t4_t4

0x0003,

0xfcaf,	// (0x0009d9f5) list_medium_line_x4_t4_t

0x9098,	// (0x00096dde) tport_appsw_pane_ParamLimits

0x9098,	// (0x00096dde) tport_appsw_pane

0x90a9,	// (0x00096def) tport_contact_pane_ParamLimits

0x90a9,	// (0x00096def) tport_contact_pane

0x90c2,	// (0x00096e08) tport_listscroll_pane_ParamLimits

0x90c2,	// (0x00096e08) tport_listscroll_pane

0x90dd,	// (0x00096e23) cell_tport_appsw_pane_ParamLimits

0x90dd,	// (0x00096e23) cell_tport_appsw_pane

0xb688,	// (0x000993ce) tport_appsw_pane_g1_ParamLimits

0xb688,	// (0x000993ce) tport_appsw_pane_g1

0xcb88,	// (0x0009a8ce) tport_contact_pane_g1

0xcb91,	// (0x0009a8d7) tport_contact_pane_t1

0xcb9f,	// (0x0009a8e5) tport_contact_pane_t2

0x0001,

0xfcb8,	// (0x0009d9fe) tport_contact_pane_t

0xcbad,	// (0x0009a8f3) list_tport_pane

0xcbb6,	// (0x0009a8fc) scroll_pane_cp_030

0xcbc7,	// (0x0009a90d) cell_tport_appsw_pane_g1

0xcbd7,	// (0x0009a91d) cell_tport_appsw_pane_t1

0x0e1d,	// (0x0008eb63) grid_highlight_pane_cp019

0x911d,	// (0x00096e63) list_tport_double_graphic_pane_ParamLimits

0x911d,	// (0x00096e63) list_tport_double_graphic_pane

0x9f34,	// (0x00097c7a) list_highlight_pane_cp023_ParamLimits

0x9f34,	// (0x00097c7a) list_highlight_pane_cp023

0x912a,	// (0x00096e70) list_tport_double_graphic_pane_g1_ParamLimits

0x912a,	// (0x00096e70) list_tport_double_graphic_pane_g1

0x9137,	// (0x00096e7d) list_tport_double_graphic_pane_t1_ParamLimits

0x9137,	// (0x00096e7d) list_tport_double_graphic_pane_t1

0x914c,	// (0x00096e92) list_tport_double_graphic_pane_t2_ParamLimits

0x914c,	// (0x00096e92) list_tport_double_graphic_pane_t2

0x0001,

0xfcc4,	// (0x0009da0a) list_tport_double_graphic_pane_t_ParamLimits

0xfcc4,	// (0x0009da0a) list_tport_double_graphic_pane_t

0x0e1d,	// (0x0008eb63) main_cale_note_pane

0x6f16,	// (0x00094c5c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6f16,	// (0x00094c5c) cell_vitu2_function_top_wide_pane_cp01

0x87d4,	// (0x0009651a) wait_bar_pane_cp05_ParamLimits

0x0e1d,	// (0x0008eb63) listscroll_cmail_pane

0xcbed,	// (0x0009a933) list_cmail_pane

0x9168,	// (0x00096eae) list_cmail_body_pane

0x917d,	// (0x00096ec3) list_single_cmail_header_caption_pane

0x9196,	// (0x00096edc) list_single_cmail_header_detail_pane_ParamLimits

0x9196,	// (0x00096edc) list_single_cmail_header_detail_pane

0x91bf,	// (0x00096f05) list_single_cmail_header_caption_pane_t1

0x91cf,	// (0x00096f15) list_single_cmail_header_detail_pane_g1_ParamLimits

0x91cf,	// (0x00096f15) list_single_cmail_header_detail_pane_g1

0xcc0d,	// (0x0009a953) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc0d,	// (0x0009a953) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcc9,	// (0x0009da0f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcc9,	// (0x0009da0f) list_single_cmail_header_detail_pane_g

0xcc26,	// (0x0009a96c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc26,	// (0x0009a96c) list_single_cmail_header_detail_pane_t1

0xcc58,	// (0x0009a99e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcc58,	// (0x0009a99e) list_single_cmail_header_editor_pane_bg

0xcc6a,	// (0x0009a9b0) list_cmail_body_pane_g1

0xcc73,	// (0x0009a9b9) list_cmail_body_pane_t1

0xb6c5,	// (0x0009940b) list_single_cmail_header_editor_pane_bg_g1

0xddd2,	// (0x0009bb18) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb6d5,	// (0x0009941b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6cd,	// (0x00099413) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb8f7,	// (0x0009963d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb6f5,	// (0x0009943b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb6e5,	// (0x0009942b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb6ed,	// (0x00099433) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xddb2,	// (0x0009baf8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x920d,	// (0x00096f53) calenote_gesture_pane_ParamLimits

0x920d,	// (0x00096f53) calenote_gesture_pane

0x922d,	// (0x00096f73) calenote_window_pane_ParamLimits

0x922d,	// (0x00096f73) calenote_window_pane

0xcc81,	// (0x0009a9c7) popup_note_window_cp01

0x9249,	// (0x00096f8f) calenote_swipe_1_pane_ParamLimits

0x9249,	// (0x00096f8f) calenote_swipe_1_pane

0x8c1e,	// (0x00096964) calenote_swipe_2_pane_ParamLimits

0x8c1e,	// (0x00096964) calenote_swipe_2_pane

0xc80f,	// (0x0009a555) calenote_swipe_1_pane_g1_ParamLimits

0xc80f,	// (0x0009a555) calenote_swipe_1_pane_g1

0xc81c,	// (0x0009a562) calenote_swipe_1_pane_g2_ParamLimits

0xc81c,	// (0x0009a562) calenote_swipe_1_pane_g2

0x0001,

0xfbf8,	// (0x0009d93e) calenote_swipe_1_pane_g_ParamLimits

0xfbf8,	// (0x0009d93e) calenote_swipe_1_pane_g

0xcc93,	// (0x0009a9d9) calenote_swipe_1_pane_t1_ParamLimits

0xcc93,	// (0x0009a9d9) calenote_swipe_1_pane_t1

0xc80f,	// (0x0009a555) calenote_swipe_2_pane_g1_ParamLimits

0xc80f,	// (0x0009a555) calenote_swipe_2_pane_g1

0xccb2,	// (0x0009a9f8) calenote_swipe_2_pane_g2_ParamLimits

0xccb2,	// (0x0009a9f8) calenote_swipe_2_pane_g2

0x0001,

0xfcd5,	// (0x0009da1b) calenote_swipe_2_pane_g_ParamLimits

0xfcd5,	// (0x0009da1b) calenote_swipe_2_pane_g

0xccbe,	// (0x0009aa04) calenote_swipe_2_pane_t1_ParamLimits

0xccbe,	// (0x0009aa04) calenote_swipe_2_pane_t1

0x0e1d,	// (0x0008eb63) main_mup_navstr_pane

0x5bad,	// (0x000938f3) main_mup3_pane_t7_ParamLimits

0x5bad,	// (0x000938f3) main_mup3_pane_t7

0xd648,	// (0x0009b38e) main_mp4_pane_g6_ParamLimits

0xd648,	// (0x0009b38e) main_mp4_pane_g6

0xd7ec,	// (0x0009b532) main_image3_pane_t4_ParamLimits

0xd7ec,	// (0x0009b532) main_image3_pane_t4

0x925e,	// (0x00096fa4) popup_navstr_preview_pane_ParamLimits

0x925e,	// (0x00096fa4) popup_navstr_preview_pane

0x9272,	// (0x00096fb8) scroll_navstr_pane_ParamLimits

0x9272,	// (0x00096fb8) scroll_navstr_pane

0x0e1d,	// (0x0008eb63) bg_popup_preview_window_pane_cp04

0xcce5,	// (0x0009aa2b) popup_navstr_preview_pane_t1

0x9286,	// (0x00096fcc) scroll_navstr_pane_g1_ParamLimits

0x9286,	// (0x00096fcc) scroll_navstr_pane_g1

0x929a,	// (0x00096fe0) scroll_navstr_pane_t1_ParamLimits

0x929a,	// (0x00096fe0) scroll_navstr_pane_t1

0xcc8a,	// (0x0009a9d0) bg_button_pane_cp014

0xcc8a,	// (0x0009a9d0) bg_button_pane_cp030

0x8abc,	// (0x00096802) list_double_fisheye_pane_g4_ParamLimits

0x8abc,	// (0x00096802) list_double_fisheye_pane_g4

0x8ac8,	// (0x0009680e) list_double_fisheye_pane_g5_ParamLimits

0x8ac8,	// (0x0009680e) list_double_fisheye_pane_g5

0xcbf5,	// (0x0009a93b) sp_fs_scroll_pane_cp03

0xc94c,	// (0x0009a692) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc958,	// (0x0009a69e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc15,	// (0x0009d95b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc964,	// (0x0009a6aa) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x915e,	// (0x00096ea4) sp_fs_scroll_pane_cp02

0xdad8,	// (0x0009b81e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdad8,	// (0x0009b81e) popup_sp_fs_calendar_preview_list_single_pane

0x0e1d,	// (0x0008eb63) main_cam6_pano_pane

0x9f34,	// (0x00097c7a) main_mup3_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_phacti_pane

0x86a7,	// (0x000963ed) bg_button_pane_cp11

0x86c1,	// (0x00096407) main_mobtv_info_pane_g2_ParamLimits

0x86c1,	// (0x00096407) main_mobtv_info_pane_g2

0x0001,

0xfb75,	// (0x0009d8bb) main_mobtv_info_pane_g_ParamLimits

0xfb75,	// (0x0009d8bb) main_mobtv_info_pane_g

0x889c,	// (0x000965e2) sc_clock_pane_t5_ParamLimits

0x889c,	// (0x000965e2) sc_clock_pane_t5

0x8921,	// (0x00096667) main_radioblah_pane_g1_ParamLimits

0xc75b,	// (0x0009a4a1) main_radioblah_pane_t3_ParamLimits

0xc75b,	// (0x0009a4a1) main_radioblah_pane_t3

0xc773,	// (0x0009a4b9) main_radioblah_pane_t4_ParamLimits

0xc773,	// (0x0009a4b9) main_radioblah_pane_t4

0x8949,	// (0x0009668f) main_radioblah_text_pane_ParamLimits

0x8949,	// (0x0009668f) main_radioblah_text_pane

0x895b,	// (0x000966a1) main_radioblah_info_pane_g1_ParamLimits

0x89f6,	// (0x0009673c) main_radioblah_info_pane_t4_ParamLimits

0x89f6,	// (0x0009673c) main_radioblah_info_pane_t4

0x9f34,	// (0x00097c7a) main_sp_fs_calendar_pane

0x92b0,	// (0x00096ff6) main_phacti_pane_g1

0x92b8,	// (0x00096ffe) phacti_note_pane_ParamLimits

0x92b8,	// (0x00096ffe) phacti_note_pane

0xccfc,	// (0x0009aa42) phacti_term_pane_ParamLimits

0xccfc,	// (0x0009aa42) phacti_term_pane

0xcd11,	// (0x0009aa57) phacti_note_pane_t1_ParamLimits

0xcd11,	// (0x0009aa57) phacti_note_pane_t1

0xcd28,	// (0x0009aa6e) phacti_term_pane_g1

0xcd30,	// (0x0009aa76) phacti_term_pane_t1_ParamLimits

0xcd30,	// (0x0009aa76) phacti_term_pane_t1

0xcd5a,	// (0x0009aaa0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcd62,	// (0x0009aaa8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcdf,	// (0x0009da25) popup_sp_fs_calendar_preview_list_single_pane_g

0xcd6a,	// (0x0009aab0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcd6a,	// (0x0009aab0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcd80,	// (0x0009aac6) aid_popup_sp_fs_bg_corner_pane

0xabe1,	// (0x00098927) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e1d,	// (0x0008eb63) popup_sp_fs_calendar_preview_bg_pane

0xcd88,	// (0x0009aace) popup_sp_fs_calendar_preview_list_pane

0x9f34,	// (0x00097c7a) bg_main_sp_fs_cale_pane_ParamLimits

0x9f34,	// (0x00097c7a) bg_main_sp_fs_cale_pane

0xcd99,	// (0x0009aadf) listscroll_cale_mrui_pane_ParamLimits

0xcd99,	// (0x0009aadf) listscroll_cale_mrui_pane

0xcdad,	// (0x0009aaf3) listscroll_sp_fs_schedule_track_pane

0xcdb6,	// (0x0009aafc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcdb6,	// (0x0009aafc) main_sp_fs_ctrlbar_pane_cp01

0xcdc7,	// (0x0009ab0d) main_sp_fs_ribbon_pane

0xcdcf,	// (0x0009ab15) popup_sp_fs_cale_preview_window

0x9313,	// (0x00097059) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9313,	// (0x00097059) list_single_sp_fs_schedule_track_pane

0x9f34,	// (0x00097c7a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9f34,	// (0x00097c7a) bg_sp_fs_highlight_list_pane_cp03

0x9328,	// (0x0009706e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9328,	// (0x0009706e) list_single_sp_fs_schedule_track_pane_g1

0x9334,	// (0x0009707a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9334,	// (0x0009707a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfce4,	// (0x0009da2a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfce4,	// (0x0009da2a) list_single_sp_fs_schedule_track_pane_g

0x9340,	// (0x00097086) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9340,	// (0x00097086) list_single_sp_fs_schedule_track_pane_t1

0x935a,	// (0x000970a0) sp_fs_schedule_track_pane_ParamLimits

0x935a,	// (0x000970a0) sp_fs_schedule_track_pane

0xcde1,	// (0x0009ab27) sp_fs_schedule_track_pane_g1

0xcde9,	// (0x0009ab2f) sp_fs_schedule_track_pane_g2

0xcdf1,	// (0x0009ab37) sp_fs_schedule_track_pane_g3

0xcdf9,	// (0x0009ab3f) sp_fs_schedule_track_pane_g4

0xce01,	// (0x0009ab47) sp_fs_schedule_track_pane_g5

0x0004,

0xfce9,	// (0x0009da2f) sp_fs_schedule_track_pane_g

0xb6c5,	// (0x0009940b) bg_sp_fs_schedule_viewer_highlight_g1

0xddd2,	// (0x0009bb18) bg_sp_fs_schedule_viewer_highlight_g2

0xb6cd,	// (0x00099413) bg_sp_fs_schedule_viewer_highlight_g3

0xb6d5,	// (0x0009941b) bg_sp_fs_schedule_viewer_highlight_g4

0xb8f7,	// (0x0009963d) bg_sp_fs_schedule_viewer_highlight_g5

0xb6e5,	// (0x0009942b) bg_sp_fs_schedule_viewer_highlight_g6

0xb6ed,	// (0x00099433) bg_sp_fs_schedule_viewer_highlight_g7

0xb6f5,	// (0x0009943b) bg_sp_fs_schedule_viewer_highlight_g8

0xddb2,	// (0x0009baf8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcf4,	// (0x0009da3a) bg_sp_fs_schedule_viewer_highlight_g

0x0e1d,	// (0x0008eb63) bg_main_sp_fs_ribbon_pane

0x936b,	// (0x000970b1) main_sp_fs_ribbon_pane_g1

0xce09,	// (0x0009ab4f) main_sp_fs_ribbon_pane_t1

0x9374,	// (0x000970ba) main_sp_fs_ribbon_pane_t2

0xce18,	// (0x0009ab5e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd07,	// (0x0009da4d) main_sp_fs_ribbon_pane_t

0xce27,	// (0x0009ab6d) main_sp_fs_ribbon_scheduler_pane

0xce2f,	// (0x0009ab75) bg_main_sp_fs_ribbon_pane_g1

0xce38,	// (0x0009ab7e) bg_main_sp_fs_ribbon_pane_g2

0xce41,	// (0x0009ab87) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd0e,	// (0x0009da54) bg_main_sp_fs_ribbon_pane_g

0xce49,	// (0x0009ab8f) main_sp_fs_ribbon_scheduler_pane_g1

0xce52,	// (0x0009ab98) main_sp_fs_ribbon_scheduler_pane_g2

0xce5b,	// (0x0009aba1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd15,	// (0x0009da5b) main_sp_fs_ribbon_scheduler_pane_g

0xce64,	// (0x0009abaa) list_cale_mrui_pane

0x9383,	// (0x000970c9) sp_fs_scroll_pane_cp07_ParamLimits

0x9383,	// (0x000970c9) sp_fs_scroll_pane_cp07

0x9397,	// (0x000970dd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9397,	// (0x000970dd) bg_sp_fs_schedule_viewer_highlight

0xce6d,	// (0x0009abb3) list_single_sp_fs_schedule_track_pane_cp01

0xce75,	// (0x0009abbb) list_sp_fs_schedule_track_pane

0xce7d,	// (0x0009abc3) sp_fs_scroll_pane_cp06_ParamLimits

0xce7d,	// (0x0009abc3) sp_fs_scroll_pane_cp06

0xabe1,	// (0x00098927) bgmain_sp_fs_calendar_pane_g1

0x93a7,	// (0x000970ed) list_single_cale_mrui_pane_ParamLimits

0x93a7,	// (0x000970ed) list_single_cale_mrui_pane

0xce8f,	// (0x0009abd5) list_single_cale_mrui_row_pane_ParamLimits

0xce8f,	// (0x0009abd5) list_single_cale_mrui_row_pane

0xce9c,	// (0x0009abe2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xce9c,	// (0x0009abe2) list_single_cale_mrui_row_pane_g1

0xced4,	// (0x0009ac1a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xced4,	// (0x0009ac1a) list_single_cale_mrui_row_pane_t1

0x93c9,	// (0x0009710f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x93c9,	// (0x0009710f) list_single_cale_mrui_row_pane_t2

0xcee6,	// (0x0009ac2c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcee6,	// (0x0009ac2c) list_single_cale_mrui_row_pane_t3

0xcf15,	// (0x0009ac5b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcf15,	// (0x0009ac5b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd21,	// (0x0009da67) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd21,	// (0x0009da67) list_single_cale_mrui_row_pane_t

0x9431,	// (0x00097177) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9431,	// (0x00097177) list_single_cmail_header_editor_pane_bg_cp01

0x9457,	// (0x0009719d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9457,	// (0x0009719d) list_single_cmail_header_editor_pane_bg_cp02

0x9477,	// (0x000971bd) main_radioblah_text_pane_t1_ParamLimits

0x9477,	// (0x000971bd) main_radioblah_text_pane_t1

0xcf44,	// (0x0009ac8a) cam6_indi_pane_cp01

0xcf4c,	// (0x0009ac92) cam6_mode_pane_cp01

0xcf54,	// (0x0009ac9a) cam6_pano_pane

0xcf5d,	// (0x0009aca3) cam6_zoom_pane_cp01

0xcf65,	// (0x0009acab) cam6_pano_image_pane

0xcf70,	// (0x0009acb6) cam6_pano_pane_g1

0xc4d3,	// (0x0009a219) cam6_pano_pane_g2

0xcf79,	// (0x0009acbf) cam6_pano_pane_g3

0xcf82,	// (0x0009acc8) cam6_pano_pane_g4

0xb19f,	// (0x00098ee5) cam6_pano_pane_g5

0xcf8b,	// (0x0009acd1) cam6_pano_pane_g6

0xcf95,	// (0x0009acdb) cam6_pano_pane_g7

0xcf9d,	// (0x0009ace3) cam6_pano_pane_g8

0xcfa6,	// (0x0009acec) cam6_pano_pane_g9

0x0008,

0xfd2a,	// (0x0009da70) cam6_pano_pane_g

0x0e1d,	// (0x0008eb63) main_browser_tag_pane

0xccdd,	// (0x0009aa23) grid_navstr_albumart_pane

0xcfb1,	// (0x0009acf7) cell_navstr_albumart_pane_ParamLimits

0xcfb1,	// (0x0009acf7) cell_navstr_albumart_pane

0xe5ab,	// (0x0009c2f1) cell_navstr_albumart_pane_g1

0x4118,	// (0x00091e5e) cell_navstr_albumart_pane_g2

0x4128,	// (0x00091e6e) cell_navstr_albumart_pane_g3

0x4120,	// (0x00091e66) cell_navstr_albumart_pane_g4

0x0003,

0xfd3d,	// (0x0009da83) cell_navstr_albumart_pane_g

0x9492,	// (0x000971d8) bt_list_pane_ParamLimits

0x9492,	// (0x000971d8) bt_list_pane

0x94a7,	// (0x000971ed) bt_list_pane_t1

0x94b6,	// (0x000971fc) bt_list_pane_t2

0x0001,

0xfd46,	// (0x0009da8c) bt_list_pane_t

0x0e1d,	// (0x0008eb63) main_cale_prevew_pane

0x94c5,	// (0x0009720b) popup_cale_preview_window_ParamLimits

0x94c5,	// (0x0009720b) popup_cale_preview_window

0x9f34,	// (0x00097c7a) bg_popup_preview_window_pane_cp05_ParamLimits

0x9f34,	// (0x00097c7a) bg_popup_preview_window_pane_cp05

0xcfd3,	// (0x0009ad19) list_cale_preview_pane_ParamLimits

0xcfd3,	// (0x0009ad19) list_cale_preview_pane

0x94dc,	// (0x00097222) list_double_cale_preview_pane_ParamLimits

0x94dc,	// (0x00097222) list_double_cale_preview_pane

0x94ee,	// (0x00097234) list_single_cale_preview_pane_ParamLimits

0x94ee,	// (0x00097234) list_single_cale_preview_pane

0x9502,	// (0x00097248) list_single_cale_preview_pane_g1

0x950a,	// (0x00097250) list_single_cale_preview_pane_t1_ParamLimits

0x950a,	// (0x00097250) list_single_cale_preview_pane_t1

0x951f,	// (0x00097265) list_double_cale_preview_pane_g1

0x9527,	// (0x0009726d) list_double_cale_preview_pane_t1_ParamLimits

0x9527,	// (0x0009726d) list_double_cale_preview_pane_t1

0x953c,	// (0x00097282) list_double_cale_preview_pane_t2_ParamLimits

0x953c,	// (0x00097282) list_double_cale_preview_pane_t2

0x0001,

0xfd4b,	// (0x0009da91) list_double_cale_preview_pane_t_ParamLimits

0xfd4b,	// (0x0009da91) list_double_cale_preview_pane_t

0x0e1d,	// (0x0008eb63) main_ezdial_pane

0x9f34,	// (0x00097c7a) main_sp_fs_email_pane_ParamLimits

0x8c58,	// (0x0009699e) cmail_ddmenu_btn01_pane_ParamLimits

0x8c58,	// (0x0009699e) cmail_ddmenu_btn01_pane

0x8c6b,	// (0x000969b1) cmail_ddmenu_btn02_pane_ParamLimits

0x8c6b,	// (0x000969b1) cmail_ddmenu_btn02_pane

0x8c8e,	// (0x000969d4) cmail_ddmenu_btn03_pane_ParamLimits

0x8c8e,	// (0x000969d4) cmail_ddmenu_btn03_pane

0x8cb4,	// (0x000969fa) main_sp_fs_ctrlbar_pane_ParamLimits

0x8cd8,	// (0x00096a1e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9168,	// (0x00096eae) list_cmail_body_pane_ParamLimits

0xcc04,	// (0x0009a94a) bg_button_pane_cp12

0xcc19,	// (0x0009a95f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcc19,	// (0x0009a95f) list_single_cmail_header_detail_pane_g3

0x91e7,	// (0x00096f2d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x91e7,	// (0x00096f2d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcd0,	// (0x0009da16) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcd0,	// (0x0009da16) list_single_cmail_header_detail_pane_t

0xcd45,	// (0x0009aa8b) phacti_term_pane_t2_ParamLimits

0xcd45,	// (0x0009aa8b) phacti_term_pane_t2

0x0001,

0xfcda,	// (0x0009da20) phacti_term_pane_t_ParamLimits

0xfcda,	// (0x0009da20) phacti_term_pane_t

0xcfdf,	// (0x0009ad25) aid_size_list_single_double

0x9554,	// (0x0009729a) popup_ezdial_listscroll_window

0x9570,	// (0x000972b6) popup_number_entry_window_cp01

0xe44a,	// (0x0009c190) bg_popup_call_pane_cp09

0xcfeb,	// (0x0009ad31) ezdial_list_pane

0xcff3,	// (0x0009ad39) scroll_pane_cp23

0x4600,	// (0x00092346) bg_button_pane_cp028_ParamLimits

0x4600,	// (0x00092346) bg_button_pane_cp028

0x957e,	// (0x000972c4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x957e,	// (0x000972c4) cmail_ddmenu_btn01_pane_g1

0x958a,	// (0x000972d0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x958a,	// (0x000972d0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd50,	// (0x0009da96) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd50,	// (0x0009da96) cmail_ddmenu_btn01_pane_g

0xcffb,	// (0x0009ad41) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcffb,	// (0x0009ad41) cmail_ddmenu_btn01_pane_t1

0x4600,	// (0x00092346) bg_button_pane_cp029_ParamLimits

0x4600,	// (0x00092346) bg_button_pane_cp029

0x9596,	// (0x000972dc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9596,	// (0x000972dc) cmail_ddmenu_btn02_pane_g1

0x95ae,	// (0x000972f4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x95ae,	// (0x000972f4) cmail_ddmenu_btn02_pane_t1

0x9f34,	// (0x00097c7a) bg_button_pane_cp031_ParamLimits

0x9f34,	// (0x00097c7a) bg_button_pane_cp031

0x9596,	// (0x000972dc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9596,	// (0x000972dc) cmail_ddmenu_btn03_pane_g1

0x95ae,	// (0x000972f4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x95ae,	// (0x000972f4) cmail_ddmenu_btn03_pane_t1

0x672a,	// (0x00094470) cell_dialer2_keypad_pane_t1_ParamLimits

0x6744,	// (0x0009448a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6744,	// (0x0009448a) cell_dialer2_keypad_pane_t1_copy1

0x8529,	// (0x0009626f) ncimui_group_button_pane

0x9f34,	// (0x00097c7a) main_sp_fs_calendar_pane_ParamLimits

0x917d,	// (0x00096ec3) list_single_cmail_header_caption_pane_ParamLimits

0xcd90,	// (0x0009aad6) aid_recal_txt_sm_pane

0x0e1d,	// (0x0008eb63) mian_recal_day_pane

0xcdcf,	// (0x0009ab15) popup_sp_fs_cale_preview_window_ParamLimits

0x0e1d,	// (0x0008eb63) list_recal_day_pane

0xd032,	// (0x0009ad78) list_single_recal_day_pane_ParamLimits

0xd032,	// (0x0009ad78) list_single_recal_day_pane

0xd044,	// (0x0009ad8a) list_single_recal_day_pane_g1_ParamLimits

0xd044,	// (0x0009ad8a) list_single_recal_day_pane_g1

0xd050,	// (0x0009ad96) list_single_recal_day_pane_g2_ParamLimits

0xd050,	// (0x0009ad96) list_single_recal_day_pane_g2

0xd05f,	// (0x0009ada5) list_single_recal_day_pane_g3_ParamLimits

0xd05f,	// (0x0009ada5) list_single_recal_day_pane_g3

0x95d2,	// (0x00097318) list_single_recal_day_pane_g4_ParamLimits

0x95d2,	// (0x00097318) list_single_recal_day_pane_g4

0xd06b,	// (0x0009adb1) list_single_recal_day_pane_g5_ParamLimits

0xd06b,	// (0x0009adb1) list_single_recal_day_pane_g5

0xd07a,	// (0x0009adc0) list_single_recal_day_pane_g6_ParamLimits

0xd07a,	// (0x0009adc0) list_single_recal_day_pane_g6

0x0005,

0xfd5f,	// (0x0009daa5) list_single_recal_day_pane_g_ParamLimits

0xfd5f,	// (0x0009daa5) list_single_recal_day_pane_g

0xd086,	// (0x0009adcc) list_single_recal_day_pane_t1

0xd094,	// (0x0009adda) list_single_recal_day_pane_t2

0x0001,

0xfd6c,	// (0x0009dab2) list_single_recal_day_pane_t

0x95e5,	// (0x0009732b) ncimui_query_button_pane_ParamLimits

0x95e5,	// (0x0009732b) ncimui_query_button_pane

0x95f5,	// (0x0009733b) ncimui_query_button_pane_t1_ParamLimits

0x95f5,	// (0x0009733b) ncimui_query_button_pane_t1

0xd0a2,	// (0x0009ade8) ncimui_query_button_pane_t2_ParamLimits

0xd0a2,	// (0x0009ade8) ncimui_query_button_pane_t2

0x0001,

0xfd71,	// (0x0009dab7) ncimui_query_button_pane_t_ParamLimits

0xfd71,	// (0x0009dab7) ncimui_query_button_pane_t

0x9608,	// (0x0009734e) query_button_pane_ParamLimits

0x9608,	// (0x0009734e) query_button_pane

0x0e1d,	// (0x0008eb63) bg_button_pane_cp0028

0xd0b5,	// (0x0009adfb) query_button_pane_t1

0x4622,	// (0x00092368) main_tport_pane_ParamLimits

0x9055,	// (0x00096d9b) bg_popup_window_pane_cp01_ParamLimits

0x9055,	// (0x00096d9b) bg_popup_window_pane_cp01

0x906f,	// (0x00096db5) heading_pane_cp08_ParamLimits

0x906f,	// (0x00096db5) heading_pane_cp08

0x9083,	// (0x00096dc9) heading_pane_cp07_ParamLimits

0x9083,	// (0x00096dc9) heading_pane_cp07

0xcbc7,	// (0x0009a90d) cell_tport_appsw_pane_g2

0x0002,

0xfcbd,	// (0x0009da03) cell_tport_appsw_pane_g

0x3438,	// (0x0009117e) input_candi_list_open_g1

0xdf6d,	// (0x0009bcb3) list_cale_time_pane_g6_ParamLimits

0xdf6d,	// (0x0009bcb3) list_cale_time_pane_g6

0x55ce,	// (0x00093314) aid_size_touch_calib_1_ParamLimits

0x55ce,	// (0x00093314) aid_size_touch_calib_1

0x55da,	// (0x00093320) aid_size_touch_calib_2_ParamLimits

0x55da,	// (0x00093320) aid_size_touch_calib_2

0x55f0,	// (0x00093336) aid_size_touch_calib_3_ParamLimits

0x55f0,	// (0x00093336) aid_size_touch_calib_3

0x560e,	// (0x00093354) aid_size_touch_calib_4_ParamLimits

0x560e,	// (0x00093354) aid_size_touch_calib_4

0x5624,	// (0x0009336a) main_touch_calib_button_group_pane_ParamLimits

0x5624,	// (0x0009336a) main_touch_calib_button_group_pane

0x563c,	// (0x00093382) main_touch_calib_pane_g1_ParamLimits

0x5648,	// (0x0009338e) main_touch_calib_pane_g2_ParamLimits

0x5654,	// (0x0009339a) main_touch_calib_pane_g3_ParamLimits

0x5660,	// (0x000933a6) main_touch_calib_pane_g4_ParamLimits

0xf697,	// (0x0009d3dd) main_touch_calib_pane_g_ParamLimits

0x566c,	// (0x000933b2) main_touch_calib_pane_t1_ParamLimits

0x5686,	// (0x000933cc) main_touch_calib_pane_t2_ParamLimits

0x56a0,	// (0x000933e6) main_touch_calib_pane_t3_ParamLimits

0x56b4,	// (0x000933fa) main_touch_calib_pane_t4_ParamLimits

0x56c8,	// (0x0009340e) main_touch_calib_pane_t5_ParamLimits

0xf6a0,	// (0x0009d3e6) main_touch_calib_pane_t_ParamLimits

0xaf86,	// (0x00098ccc) list_single_fp_cale_pane_g3_ParamLimits

0xaf86,	// (0x00098ccc) list_single_fp_cale_pane_g3

0xd8af,	// (0x0009b5f5) bg_button_pane_cp012_ParamLimits

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp03_ParamLimits

0x774b,	// (0x00095491) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8af,	// (0x0009b5f5) bg_vkb2_func_pane_cp04_ParamLimits

0x84c9,	// (0x0009620f) main_ncimui_button_group_pane_ParamLimits

0x84c9,	// (0x0009620f) main_ncimui_button_group_pane

0x8517,	// (0x0009625d) main_ncimui_pane_t3_ParamLimits

0x8517,	// (0x0009625d) main_ncimui_pane_t3

0xccf3,	// (0x0009aa39) phacti_button_group_pane

0xcfdf,	// (0x0009ad25) aid_size_list_single_double_ParamLimits

0x9554,	// (0x0009729a) popup_ezdial_listscroll_window_ParamLimits

0x9570,	// (0x000972b6) popup_number_entry_window_cp01_ParamLimits

0x961b,	// (0x00097361) phacti_button_pane_ParamLimits

0x961b,	// (0x00097361) phacti_button_pane

0x0e1d,	// (0x0008eb63) bg_button_pane_cp14

0xd0c3,	// (0x0009ae09) phacti_button_pane_t1

0x962c,	// (0x00097372) main_touch_calib_button_pane_ParamLimits

0x962c,	// (0x00097372) main_touch_calib_button_pane

0xd9c2,	// (0x0009b708) bg_button_pane_cp18_ParamLimits

0xd9c2,	// (0x0009b708) bg_button_pane_cp18

0xd0d1,	// (0x0009ae17) main_touch_calib_button_pane_t1_ParamLimits

0xd0d1,	// (0x0009ae17) main_touch_calib_button_pane_t1

0xd0e7,	// (0x0009ae2d) main_touch_calib_button_pane_t2_ParamLimits

0xd0e7,	// (0x0009ae2d) main_touch_calib_button_pane_t2

0x0001,

0xfd76,	// (0x0009dabc) main_touch_calib_button_pane_t_ParamLimits

0xfd76,	// (0x0009dabc) main_touch_calib_button_pane_t

0x0e1d,	// (0x0008eb63) cell_ncimui_button_pane

0x0e1d,	// (0x0008eb63) bg_button_pane_cp032

0xd105,	// (0x0009ae4b) cell_ncimui_button_pane_t1

0xd7cc,	// (0x0009b512) image3_infobar_pane_ParamLimits

0xd7cc,	// (0x0009b512) image3_infobar_pane

0x88c8,	// (0x0009660e) fs_bigclock_status_pane_ParamLimits

0x88c8,	// (0x0009660e) fs_bigclock_status_pane

0x88d5,	// (0x0009661b) main_fs_bigclock_clock_pane_ParamLimits

0x88d5,	// (0x0009661b) main_fs_bigclock_clock_pane

0x88e8,	// (0x0009662e) main_fs_bigclock_indi_pane_ParamLimits

0x88e8,	// (0x0009662e) main_fs_bigclock_indi_pane

0x8900,	// (0x00096646) main_fs_bigclock_swipe_pane_ParamLimits

0x8900,	// (0x00096646) main_fs_bigclock_swipe_pane

0x0e1d,	// (0x0008eb63) main_fs_clock_dumped_data

0xc5e0,	// (0x0009a326) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc5e0,	// (0x0009a326) list_single_fs_bigclock_indicator_pane_g1

0xc5fe,	// (0x0009a344) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc5fe,	// (0x0009a344) list_single_fs_bigclock_indicator_pane_g2

0xc618,	// (0x0009a35e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc618,	// (0x0009a35e) list_single_fs_bigclock_indicator_pane_g3

0xc632,	// (0x0009a378) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc632,	// (0x0009a378) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfba9,	// (0x0009d8ef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfba9,	// (0x0009d8ef) list_single_fs_bigclock_indicator_pane_g

0xc658,	// (0x0009a39e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc658,	// (0x0009a39e) list_single_fs_bigclock_indicator_pane_t1

0xc680,	// (0x0009a3c6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc680,	// (0x0009a3c6) list_single_fs_bigclock_indicator_pane_t2

0xc6a8,	// (0x0009a3ee) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6a8,	// (0x0009a3ee) list_single_fs_bigclock_indicator_pane_t3

0xc6d0,	// (0x0009a416) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc6d0,	// (0x0009a416) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb4,	// (0x0009d8fa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb4,	// (0x0009d8fa) list_single_fs_bigclock_indicator_pane_t

0xd113,	// (0x0009ae59) image3_infobar_fav_pane_ParamLimits

0xd113,	// (0x0009ae59) image3_infobar_fav_pane

0xd123,	// (0x0009ae69) image3_infobar_loc_pane_ParamLimits

0xd123,	// (0x0009ae69) image3_infobar_loc_pane

0xd137,	// (0x0009ae7d) image3_infobar_time_pane_ParamLimits

0xd137,	// (0x0009ae7d) image3_infobar_time_pane

0xabe1,	// (0x00098927) image3_infobar_time_pane_g1

0xd147,	// (0x0009ae8d) image3_infobar_time_pane_t1

0xabe1,	// (0x00098927) image3_infobar_loc_pane_g1

0xd155,	// (0x0009ae9b) image3_infobar_loc_pane_g2

0x0001,

0xfd7b,	// (0x0009dac1) image3_infobar_loc_pane_g

0xd15d,	// (0x0009aea3) image3_infobar_loc_pane_t1

0xabe1,	// (0x00098927) image3_infobar_fav_pane_g1

0xd16b,	// (0x0009aeb1) image3_infobar_fav_pane_g2

0x0001,

0xfd80,	// (0x0009dac6) image3_infobar_fav_pane_g

0xd173,	// (0x0009aeb9) fs_bigclock_status_battery_pane

0xd17c,	// (0x0009aec2) fs_bigclock_status_signal_pane

0xd185,	// (0x0009aecb) fs_bigclock_status_title_pane

0xd18e,	// (0x0009aed4) fs_bigclock_status_signal_pane_g1

0xd197,	// (0x0009aedd) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd85,	// (0x0009dacb) fs_bigclock_status_signal_pane_g

0xd19f,	// (0x0009aee5) fs_bigclock_status_battery_pane_g1

0xd1a8,	// (0x0009aeee) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd8a,	// (0x0009dad0) fs_bigclock_status_battery_pane_g

0xd1b0,	// (0x0009aef6) fs_bigclock_status_title_pane_t1

0xabe1,	// (0x00098927) main_fs_bigclock_clock_pane_g1

0xd1be,	// (0x0009af04) main_fs_bigclock_clock_pane_g2

0xd1be,	// (0x0009af04) main_fs_bigclock_clock_pane_g3

0xd1be,	// (0x0009af04) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd8f,	// (0x0009dad5) main_fs_bigclock_clock_pane_g

0xd1c6,	// (0x0009af0c) main_fs_bigclock_clock_pane_t1

0xd1d4,	// (0x0009af1a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd98,	// (0x0009dade) main_fs_bigclock_clock_pane_t

0xd1e3,	// (0x0009af29) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1e3,	// (0x0009af29) list_single_fs_bigclock_indicator_pane

0x9641,	// (0x00097387) list_single_fs_bigclock_pane_ParamLimits

0x9641,	// (0x00097387) list_single_fs_bigclock_pane

0xd1fd,	// (0x0009af43) main_fs_bigclock_indicator_pane_t1

0xd20c,	// (0x0009af52) list_single_fs_bigclock_pane_g1

0xd214,	// (0x0009af5a) list_single_fs_bigclock_pane_t1

0xabe1,	// (0x00098927) main_fs_bigclock_swipe_pane_g1

0xd252,	// (0x0009af98) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfda9,	// (0x0009daef) main_fs_bigclock_swipe_pane_g

0xd25a,	// (0x0009afa0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd25a,	// (0x0009afa0) main_fs_bigclock_swipe_pane_t1

0x2c71,	// (0x000909b7) call_type_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_btmg_pane

0xcec8,	// (0x0009ac0e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcec8,	// (0x0009ac0e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd1c,	// (0x0009da62) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd1c,	// (0x0009da62) list_single_cale_mrui_row_pane_g

0xd019,	// (0x0009ad5f) list_recal_vselct_arw_lo_pane

0xd021,	// (0x0009ad67) list_recal_vselct_arw_up_pane

0xd029,	// (0x0009ad6f) list_recal_vselct_pane

0xd277,	// (0x0009afbd) btmg_button_pane

0x96a7,	// (0x000973ed) main_btmg_pane_g1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp044

0xd281,	// (0x0009afc7) btmg_button_pane_t1

0x45e4,	// (0x0009232a) aid_listscroll_gen

0x9f34,	// (0x00097c7a) main_cntbar_detail_pane

0xcbe5,	// (0x0009a92b) list_cmail_folder_pane

0xcbf5,	// (0x0009a93b) sp_fs_scroll_pane_cp03_ParamLimits

0x96b1,	// (0x000973f7) list_single_fs_dyc_pane_cp01_ParamLimits

0x96b1,	// (0x000973f7) list_single_fs_dyc_pane_cp01

0xd28f,	// (0x0009afd5) aid_size_cmail_indent

0xd298,	// (0x0009afde) list_single_dyc_row_pane_cp01

0x96f7,	// (0x0009743d) cntbar_detail_list_pane_ParamLimits

0x96f7,	// (0x0009743d) cntbar_detail_list_pane

0x9743,	// (0x00097489) main_cntbar_detail_cont_pane_ParamLimits

0x9743,	// (0x00097489) main_cntbar_detail_cont_pane

0x2b94,	// (0x000908da) scroll_pane_cp032_ParamLimits

0x2b94,	// (0x000908da) scroll_pane_cp032

0x9757,	// (0x0009749d) cntbar_detail_list_event_pane_ParamLimits

0x9757,	// (0x0009749d) cntbar_detail_list_event_pane

0x9707,	// (0x0009744d) cntbar_detail_list_shct_pane

0xde20,	// (0x0009bb66) aid_list_gen

0xd2a1,	// (0x0009afe7) aid_scroll

0xd2aa,	// (0x0009aff0) aid_size_touch_scroll_bar

0xd2b3,	// (0x0009aff9) aid_list_double

0xd2bc,	// (0x0009b002) aid_list_single

0xd2c5,	// (0x0009b00b) aid_list_single_lg

0xd2ce,	// (0x0009b014) aid_list_z_g_a_sm

0xd2d6,	// (0x0009b01c) aid_list_z_g_d

0xd2de,	// (0x0009b024) aid_txt_z_prm

0x9767,	// (0x000974ad) aid_txt_z_prm_cp01

0x9775,	// (0x000974bb) aid_txt_z_sec

0x9783,	// (0x000974c9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9783,	// (0x000974c9) main_cntbar_detail_cont_pane_g1

0x9797,	// (0x000974dd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9797,	// (0x000974dd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdae,	// (0x0009daf4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdae,	// (0x0009daf4) main_cntbar_detail_cont_pane_g

0xd2ec,	// (0x0009b032) main_cntbar_detail_cont_pane_t1

0xd2fa,	// (0x0009b040) main_cntbar_detail_cont_pane_t2

0xd308,	// (0x0009b04e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdb3,	// (0x0009daf9) main_cntbar_detail_cont_pane_t

0x97a7,	// (0x000974ed) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97a7,	// (0x000974ed) cell_cntbar_detail_list_shct_pane

0xd316,	// (0x0009b05c) cntbar_detail_list_shct_pane_g1

0xd31f,	// (0x0009b065) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdba,	// (0x0009db00) cntbar_detail_list_shct_pane_g

0x97bb,	// (0x00097501) cntbar_detail_list_event_pane_g1_ParamLimits

0x97bb,	// (0x00097501) cntbar_detail_list_event_pane_g1

0x97c7,	// (0x0009750d) cntbar_detail_list_event_pane_g2_ParamLimits

0x97c7,	// (0x0009750d) cntbar_detail_list_event_pane_g2

0x0005,

0xfdbf,	// (0x0009db05) cntbar_detail_list_event_pane_g_ParamLimits

0xfdbf,	// (0x0009db05) cntbar_detail_list_event_pane_g

0x9833,	// (0x00097579) cntbar_detail_list_event_pane_t1_ParamLimits

0x9833,	// (0x00097579) cntbar_detail_list_event_pane_t1

0x9848,	// (0x0009758e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9848,	// (0x0009758e) cntbar_detail_list_event_pane_t2

0x0002,

0xfdcc,	// (0x0009db12) cntbar_detail_list_event_pane_t_ParamLimits

0xfdcc,	// (0x0009db12) cntbar_detail_list_event_pane_t

0xabe1,	// (0x00098927) cell_cntbar_detail_list_shct_pane_g1

0x2fc2,	// (0x00090d08) navi_pane_mv_g3

0x9f34,	// (0x00097c7a) main_cntbar_detail_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_notif_wgt_pane

0xd5e2,	// (0x0009b328) aid_tch_main_mp4_pane_g4

0xd7c4,	// (0x0009b50a) popup_slider_window_cp02

0xd010,	// (0x0009ad56) list_recal_day_event_pane

0x96cb,	// (0x00097411) cntbar_detail_btn_pane_ParamLimits

0x96cb,	// (0x00097411) cntbar_detail_btn_pane

0x96e1,	// (0x00097427) cntbar_detail_btn_pane_cp01_ParamLimits

0x96e1,	// (0x00097427) cntbar_detail_btn_pane_cp01

0x9707,	// (0x0009744d) cntbar_detail_list_shct_pane_ParamLimits

0x9717,	// (0x0009745d) cntbar_detail_pane_g1_ParamLimits

0x9717,	// (0x0009745d) cntbar_detail_pane_g1

0x9727,	// (0x0009746d) cntbar_detail_pane_t1_ParamLimits

0x9727,	// (0x0009746d) cntbar_detail_pane_t1

0x97d3,	// (0x00097519) cntbar_detail_list_event_pane_g3_ParamLimits

0x97d3,	// (0x00097519) cntbar_detail_list_event_pane_g3

0x97eb,	// (0x00097531) cntbar_detail_list_event_pane_g4_ParamLimits

0x97eb,	// (0x00097531) cntbar_detail_list_event_pane_g4

0x9803,	// (0x00097549) cntbar_detail_list_event_pane_g5_ParamLimits

0x9803,	// (0x00097549) cntbar_detail_list_event_pane_g5

0x981b,	// (0x00097561) cntbar_detail_list_event_pane_g6_ParamLimits

0x981b,	// (0x00097561) cntbar_detail_list_event_pane_g6

0x985d,	// (0x000975a3) cntbar_detail_list_event_pane_t3_ParamLimits

0x985d,	// (0x000975a3) cntbar_detail_list_event_pane_t3

0x986f,	// (0x000975b5) popup_notif_wgt_window_ParamLimits

0x986f,	// (0x000975b5) popup_notif_wgt_window

0x9888,	// (0x000975ce) popup_submenu_window_cp01_ParamLimits

0x9888,	// (0x000975ce) popup_submenu_window_cp01

0xe44a,	// (0x0009c190) bg_popup_window_pane_cp10

0xd328,	// (0x0009b06e) listscroll_notif_wgt_pane

0xd332,	// (0x0009b078) list_notif_wgt_window

0xd33b,	// (0x0009b081) scroll_pane_cp033

0xd344,	// (0x0009b08a) list_notif_wgt_row_pane_ParamLimits

0xd344,	// (0x0009b08a) list_notif_wgt_row_pane

0xd358,	// (0x0009b09e) aid_size_list_notif_wgt_del

0xd361,	// (0x0009b0a7) list_notif_wgt_row_pane_g1

0xd369,	// (0x0009b0af) list_notif_wgt_row_pane_g2

0xd371,	// (0x0009b0b7) list_notif_wgt_row_pane_g3

0x0002,

0xfdd3,	// (0x0009db19) list_notif_wgt_row_pane_g

0xd37a,	// (0x0009b0c0) list_notif_wgt_row_pane_t1

0xd388,	// (0x0009b0ce) list_notif_wgt_row_pane_t2

0xd396,	// (0x0009b0dc) list_notif_wgt_row_pane_t3

0x0002,

0xfdda,	// (0x0009db20) list_notif_wgt_row_pane_t

0xb929,	// (0x0009966f) list_recal_day_event_pane_g1

0xd3a4,	// (0x0009b0ea) list_recal_day_event_pane_t1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp045

0xd3b3,	// (0x0009b0f9) cntbar_detail_btn_pane_t1

0x4600,	// (0x00092346) main_callh_pane_ParamLimits

0x4600,	// (0x00092346) main_callh_pane

0x0e1d,	// (0x0008eb63) main_coverflow0_pane

0x0e1d,	// (0x0008eb63) main_wgtman_pane

0x890e,	// (0x00096654) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x890e,	// (0x00096654) main_fs_bigclock_unlock_btn_pane

0xcbbf,	// (0x0009a905) bg_button_pane_cp16

0xcbcf,	// (0x0009a915) cell_tport_appsw_pane_g3

0x989a,	// (0x000975e0) cf0_flow_pane_ParamLimits

0x989a,	// (0x000975e0) cf0_flow_pane

0xd3c1,	// (0x0009b107) listscroll_cf0_pane

0xd3ca,	// (0x0009b110) main_cf0_pane_g1

0x98af,	// (0x000975f5) main_cf0_pane_t1_ParamLimits

0x98af,	// (0x000975f5) main_cf0_pane_t1

0x98c6,	// (0x0009760c) main_cf0_pane_t2_ParamLimits

0x98c6,	// (0x0009760c) main_cf0_pane_t2

0x0001,

0xfde1,	// (0x0009db27) main_cf0_pane_t_ParamLimits

0xfde1,	// (0x0009db27) main_cf0_pane_t

0xd3d4,	// (0x0009b11a) scroll_pane_cp11

0x98dd,	// (0x00097623) cf0_flow_pane_g1

0x98e5,	// (0x0009762b) cf0_flow_pane_g2

0x0001,

0xfde6,	// (0x0009db2c) cf0_flow_pane_g

0x98ed,	// (0x00097633) cf0_flow_pane_t1

0x0e1d,	// (0x0008eb63) main_call6_pane

0x0e1d,	// (0x0008eb63) main_calllock_pane

0x98fb,	// (0x00097641) call6_btn_grp_pane_ParamLimits

0x98fb,	// (0x00097641) call6_btn_grp_pane

0x9915,	// (0x0009765b) call6_pane_g1_ParamLimits

0x9915,	// (0x0009765b) call6_pane_g1

0x992a,	// (0x00097670) popup_call6_1st_window_ParamLimits

0x992a,	// (0x00097670) popup_call6_1st_window

0x993b,	// (0x00097681) popup_call6_2nd_window_ParamLimits

0x993b,	// (0x00097681) popup_call6_2nd_window

0x994c,	// (0x00097692) cell_call6_btn_pane_ParamLimits

0x994c,	// (0x00097692) cell_call6_btn_pane

0xe44a,	// (0x0009c190) bg_popup_call2_in_pane_cp03

0xd3df,	// (0x0009b125) popup_call6_1st_window_g1

0xd3e7,	// (0x0009b12d) popup_call6_1st_window_g2

0xd3ef,	// (0x0009b135) popup_call6_1st_window_g3

0x0002,

0xfdeb,	// (0x0009db31) popup_call6_1st_window_g

0xd3f7,	// (0x0009b13d) popup_call6_1st_window_t1

0xd406,	// (0x0009b14c) popup_call6_1st_window_t2

0xd416,	// (0x0009b15c) popup_call6_1st_window_t3

0x0002,

0xfdf2,	// (0x0009db38) popup_call6_1st_window_t

0xe44a,	// (0x0009c190) bg_popup_call2_in_pane_cp04

0xd3df,	// (0x0009b125) popup_call6_2nd_window_g1

0xd3e7,	// (0x0009b12d) popup_call6_2nd_window_g2

0xd3ef,	// (0x0009b135) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x0009db31) popup_call6_2nd_window_g

0xd3f7,	// (0x0009b13d) popup_call6_2nd_window_t1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp15

0xd426,	// (0x0009b16c) cell_call6_btn_pane_g1

0xd42f,	// (0x0009b175) cell_call6_btn_pane_t1

0x9960,	// (0x000976a6) listscroll_wgtman_pane_ParamLimits

0x9960,	// (0x000976a6) listscroll_wgtman_pane

0x9983,	// (0x000976c9) wgtman_btn_pane_ParamLimits

0x9983,	// (0x000976c9) wgtman_btn_pane

0xe2fd,	// (0x0009c043) aid_scroll_copy1

0xd43e,	// (0x0009b184) list_wgtman_pane

0x99c6,	// (0x0009770c) wgtman_btn_pane_g1_ParamLimits

0x99c6,	// (0x0009770c) wgtman_btn_pane_g1

0x99f2,	// (0x00097738) wgtman_btn_pane_t1_ParamLimits

0x99f2,	// (0x00097738) wgtman_btn_pane_t1

0xd448,	// (0x0009b18e) wgtman_btn_pane_t2_ParamLimits

0xd448,	// (0x0009b18e) wgtman_btn_pane_t2

0x0001,

0xfdf9,	// (0x0009db3f) wgtman_btn_pane_t_ParamLimits

0xfdf9,	// (0x0009db3f) wgtman_btn_pane_t

0x9a2f,	// (0x00097775) listrow_wgtman_pane_ParamLimits

0x9a2f,	// (0x00097775) listrow_wgtman_pane

0x9a42,	// (0x00097788) listrow_wgtman_pane_g1

0x9a4b,	// (0x00097791) listrow_wgtman_pane_g2

0x0001,

0xfdfe,	// (0x0009db44) listrow_wgtman_pane_g

0x9a55,	// (0x0009779b) listrow_wgtman_pane_t1

0x9a63,	// (0x000977a9) listrow_wgtman_pane_t2

0x0001,

0xfe03,	// (0x0009db49) listrow_wgtman_pane_t

0x9a71,	// (0x000977b7) wait_bar_pane_cp09

0xd45f,	// (0x0009b1a5) main_calllock_btn_pane

0xd469,	// (0x0009b1af) main_calllock_pane_g1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp17

0xd474,	// (0x0009b1ba) main_calllock_btn_pane_g1

0xd47d,	// (0x0009b1c3) main_calllock_btn_pane_t1

0x0e1d,	// (0x0008eb63) main_dialer3_pane

0x0e1d,	// (0x0008eb63) main_fmrd2_pane

0xabe1,	// (0x00098927) main_fs_bigclock_unlock_btn_pane_g1

0xd494,	// (0x0009b1da) main_fs_bigclock_unlock_btn_pane_t1

0x9a79,	// (0x000977bf) area_fmrd2_info_pane_ParamLimits

0x9a79,	// (0x000977bf) area_fmrd2_info_pane

0x9a8a,	// (0x000977d0) area_fmrd2_visual_pane_ParamLimits

0x9a8a,	// (0x000977d0) area_fmrd2_visual_pane

0x9a98,	// (0x000977de) fmrd2_indi_pane_ParamLimits

0x9a98,	// (0x000977de) fmrd2_indi_pane

0x9aa5,	// (0x000977eb) area_fmrd2_visual_pane_g1

0x9aad,	// (0x000977f3) area_fmrd2_visual_pane_t1

0x9abd,	// (0x00097803) area_fmrd2_visual_pane_t2

0x9acd,	// (0x00097813) area_fmrd2_visual_pane_t3

0x0002,

0xfe0d,	// (0x0009db53) area_fmrd2_visual_pane_t

0x9add,	// (0x00097823) area_fmrd2_info_pane_g1

0x9ae5,	// (0x0009782b) area_fmrd2_info_pane_t1

0x9af5,	// (0x0009783b) area_fmrd2_info_pane_t2

0x9b05,	// (0x0009784b) area_fmrd2_info_pane_t3

0x9b15,	// (0x0009785b) area_fmrd2_info_pane_t4

0x0003,

0xfe14,	// (0x0009db5a) area_fmrd2_info_pane_t

0x9b23,	// (0x00097869) fmrd2_indi_pane_t1

0x9b33,	// (0x00097879) fmrd2_indi_pane_t2

0x9b43,	// (0x00097889) fmrd2_indi_pane_t3

0x0002,

0xfe1d,	// (0x0009db63) fmrd2_indi_pane_t

0xc641,	// (0x0009a387) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc641,	// (0x0009a387) list_single_fs_bigclock_indicator_pane_g5

0xc6e5,	// (0x0009a42b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc6e5,	// (0x0009a42b) list_single_fs_bigclock_indicator_pane_t5

0x92cc,	// (0x00097012) aid_cell_bcale_month_pane_ParamLimits

0x92cc,	// (0x00097012) aid_cell_bcale_month_pane

0x92de,	// (0x00097024) bcale_month_pane_ParamLimits

0x92de,	// (0x00097024) bcale_month_pane

0x92f8,	// (0x0009703e) bcale_preview_pane_ParamLimits

0x92f8,	// (0x0009703e) bcale_preview_pane

0xd214,	// (0x0009af5a) list_single_fs_bigclock_pane_t1_ParamLimits

0xd22e,	// (0x0009af74) list_single_fs_bigclock_pane_t2_ParamLimits

0xd22e,	// (0x0009af74) list_single_fs_bigclock_pane_t2

0x0001,

0xfda4,	// (0x0009daea) list_single_fs_bigclock_pane_t_ParamLimits

0xfda4,	// (0x0009daea) list_single_fs_bigclock_pane_t

0xd48c,	// (0x0009b1d2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe08,	// (0x0009db4e) main_fs_bigclock_unlock_btn_pane_g

0x9b53,	// (0x00097899) aid_dia3_key_size_ParamLimits

0x9b53,	// (0x00097899) aid_dia3_key_size

0x9b62,	// (0x000978a8) aid_dia3_listrow_size_ParamLimits

0x9b62,	// (0x000978a8) aid_dia3_listrow_size

0x9b77,	// (0x000978bd) dia3_keypad_fun_pane_ParamLimits

0x9b77,	// (0x000978bd) dia3_keypad_fun_pane

0x9b93,	// (0x000978d9) dia3_keypad_num_pane_ParamLimits

0x9b93,	// (0x000978d9) dia3_keypad_num_pane

0x9bae,	// (0x000978f4) dia3_listscroll_pane_ParamLimits

0x9bae,	// (0x000978f4) dia3_listscroll_pane

0x9bc1,	// (0x00097907) dia3_numentry_pane_ParamLimits

0x9bc1,	// (0x00097907) dia3_numentry_pane

0xd4a2,	// (0x0009b1e8) dia3_list_pane

0xd4ad,	// (0x0009b1f3) scroll_pane_cp12

0x0e1d,	// (0x0008eb63) bg_dia3_numentry_pane

0x9bd5,	// (0x0009791b) dia3_numentry_pane_t1

0x9be4,	// (0x0009792a) cell_dia3_key_num_pane

0x9bec,	// (0x00097932) cell_dia3_key0_fun_pane_ParamLimits

0x9bec,	// (0x00097932) cell_dia3_key0_fun_pane

0x9c00,	// (0x00097946) cell_dia3_key1_fun_pane_ParamLimits

0x9c00,	// (0x00097946) cell_dia3_key1_fun_pane

0x9c18,	// (0x0009795e) dia3_listrow_pane

0xc33f,	// (0x0009a085) bg_dia3_numentry_pane_g1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp21

0xd4b8,	// (0x0009b1fe) cell_dia3_key_num_pane_t1

0xd4c6,	// (0x0009b20c) cell_dia3_key_num_pane_t2

0xd4d5,	// (0x0009b21b) cell_dia3_key_num_pane_t3

0xd4e4,	// (0x0009b22a) cell_dia3_key_num_pane_t4

0x0003,

0xfe24,	// (0x0009db6a) cell_dia3_key_num_pane_t

0x0e1d,	// (0x0008eb63) bg_button_pane_cp19

0x9c2a,	// (0x00097970) cell_dia3_key0_fun_pane_g1

0x0e1d,	// (0x0008eb63) bg_button_pane_cp20

0x9c32,	// (0x00097978) cell_dia3_key1_fun_pane_g1

0x9c3a,	// (0x00097980) area_left_week_number_pane

0xd4f3,	// (0x0009b239) area_top_day_name_pane

0x9c43,	// (0x00097989) frame_month_view_pane

0x9c4b,	// (0x00097991) grid_month_view_pane

0x9c55,	// (0x0009799b) cell_top_day_name_pane_ParamLimits

0x9c55,	// (0x0009799b) cell_top_day_name_pane

0x94ee,	// (0x00097234) cell_area_left_week_number_pane_ParamLimits

0x94ee,	// (0x00097234) cell_area_left_week_number_pane

0x9c6b,	// (0x000979b1) cell_month_view_pane_ParamLimits

0x9c6b,	// (0x000979b1) cell_month_view_pane

0xd4fc,	// (0x0009b242) frm_month_g1

0x9c86,	// (0x000979cc) frm_month_g2

0x9c8e,	// (0x000979d4) frm_month_g3

0x9c96,	// (0x000979dc) frm_month_g4

0x9c9e,	// (0x000979e4) frm_month_g5

0x9ca6,	// (0x000979ec) frm_month_g6

0x9cae,	// (0x000979f4) frm_month_g7

0xd505,	// (0x0009b24b) frm_month_g8

0x9cb6,	// (0x000979fc) frm_month_g9

0x9cbf,	// (0x00097a05) frm_month_g10

0x9cc8,	// (0x00097a0e) frm_month_g11

0x9cd1,	// (0x00097a17) frm_month_g12

0x9cda,	// (0x00097a20) frm_month_g13

0x9ce3,	// (0x00097a29) frm_month_g14

0x9cec,	// (0x00097a32) frm_month_g15

0x9cf5,	// (0x00097a3b) frm_month_g16

0x000f,

0xfe2d,	// (0x0009db73) frm_month_g

0x9cfe,	// (0x00097a44) cell_top_day_name_pane_t1

0x9d0d,	// (0x00097a53) cell_area_left_week_number_pane_g1

0x9cfe,	// (0x00097a44) cell_area_left_week_number_pane_t1

0xabe1,	// (0x00098927) cell_month_view_pane_g1

0x9d15,	// (0x00097a5b) cell_month_view_pane_t1

0x0e1d,	// (0x0008eb63) main_fps_pane

0xc914,	// (0x0009a65a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc914,	// (0x0009a65a) cmail_ddmenu_btn02_pane_cp1

0xc930,	// (0x0009a676) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc930,	// (0x0009a676) cmail_ddmenu_btn02_pane_cp2

0x95a2,	// (0x000972e8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x95a2,	// (0x000972e8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd55,	// (0x0009da9b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd55,	// (0x0009da9b) cmail_ddmenu_btn02_pane_g

0x95c0,	// (0x00097306) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x95c0,	// (0x00097306) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd5a,	// (0x0009daa0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd5a,	// (0x0009daa0) cmail_ddmenu_btn02_pane_t

0x9d24,	// (0x00097a6a) fps_text_pane_ParamLimits

0x9d24,	// (0x00097a6a) fps_text_pane

0x9d3b,	// (0x00097a81) main_fps_pane_g1_ParamLimits

0x9d3b,	// (0x00097a81) main_fps_pane_g1

0x9d55,	// (0x00097a9b) wait_bar_pane_cp010_ParamLimits

0x9d55,	// (0x00097a9b) wait_bar_pane_cp010

0x9d66,	// (0x00097aac) fps_text_pane_t1_ParamLimits

0x9d66,	// (0x00097aac) fps_text_pane_t1

0xb645,	// (0x0009938b) cam4_image_uncrop_pane_g1

0xb64e,	// (0x00099394) cam4_image_uncrop_pane_g2

0x6bd5,	// (0x0009491b) cam4_image_uncrop_pane_g3

0x6bde,	// (0x00094924) cam4_image_uncrop_pane_g4

0x0003,

0xf82f,	// (0x0009d575) cam4_image_uncrop_pane_g

0x9c18,	// (0x0009795e) dia3_listrow_pane_ParamLimits

0x0e1d,	// (0x0008eb63) main_phob2_pane

0x90ee,	// (0x00096e34) cell_tport_appsw_pane_cp02_ParamLimits

0x90ee,	// (0x00096e34) cell_tport_appsw_pane_cp02

0x9102,	// (0x00096e48) cell_tport_appsw_pane_cp03_ParamLimits

0x9102,	// (0x00096e48) cell_tport_appsw_pane_cp03

0x0e1d,	// (0x0008eb63) phob2_contact_card_pane

0x0e1d,	// (0x0008eb63) phob2_listscroll_pane

0xd50e,	// (0x0009b254) phob2_list_pane

0xd516,	// (0x0009b25c) scroll_pane_cp034

0x9d7e,	// (0x00097ac4) phob2_cc_data_pane_ParamLimits

0x9d7e,	// (0x00097ac4) phob2_cc_data_pane

0x9d9d,	// (0x00097ae3) phob2_cc_listscroll_pane_ParamLimits

0x9d9d,	// (0x00097ae3) phob2_cc_listscroll_pane

0xb6fd,	// (0x00099443) list_double_large_graphic_phob2_pane_ParamLimits

0xb6fd,	// (0x00099443) list_double_large_graphic_phob2_pane

0x9dbb,	// (0x00097b01) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9dbb,	// (0x00097b01) list_double_large_graphic_phob2_pane_g1

0x9dc8,	// (0x00097b0e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9dc8,	// (0x00097b0e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe4e,	// (0x0009db94) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4e,	// (0x0009db94) list_double_large_graphic_phob2_pane_g

0x9dd4,	// (0x00097b1a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9dd4,	// (0x00097b1a) list_double_large_graphic_phob2_pane_t1

0x9de9,	// (0x00097b2f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9de9,	// (0x00097b2f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe53,	// (0x0009db99) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe53,	// (0x0009db99) list_double_large_graphic_phob2_pane_t

0x0e1d,	// (0x0008eb63) list_highlight_pane_cp024

0xd51e,	// (0x0009b264) phob2_cc_button_pane

0x9dfb,	// (0x00097b41) phob2_cc_data_pane_g1_ParamLimits

0x9dfb,	// (0x00097b41) phob2_cc_data_pane_g1

0x9e10,	// (0x00097b56) phob2_cc_data_pane_g2_ParamLimits

0x9e10,	// (0x00097b56) phob2_cc_data_pane_g2

0x0001,

0xfe58,	// (0x0009db9e) phob2_cc_data_pane_g_ParamLimits

0xfe58,	// (0x0009db9e) phob2_cc_data_pane_g

0x9e22,	// (0x00097b68) phob2_cc_data_pane_t1_ParamLimits

0x9e22,	// (0x00097b68) phob2_cc_data_pane_t1

0x9e3a,	// (0x00097b80) phob2_cc_data_pane_t2_ParamLimits

0x9e3a,	// (0x00097b80) phob2_cc_data_pane_t2

0x9e52,	// (0x00097b98) phob2_cc_data_pane_t3_ParamLimits

0x9e52,	// (0x00097b98) phob2_cc_data_pane_t3

0x0002,

0xfe5d,	// (0x0009dba3) phob2_cc_data_pane_t_ParamLimits

0xfe5d,	// (0x0009dba3) phob2_cc_data_pane_t

0xd526,	// (0x0009b26c) phob2_cc_list_pane_ParamLimits

0xd526,	// (0x0009b26c) phob2_cc_list_pane

0xb9c2,	// (0x00099708) scroll_pane_cp035_ParamLimits

0xb9c2,	// (0x00099708) scroll_pane_cp035

0x9f34,	// (0x00097c7a) bg_button_pane_cp033

0xd532,	// (0x0009b278) phob2_cc_button_pane_g1

0xd53e,	// (0x0009b284) phob2_cc_button_pane_t1

0xd553,	// (0x0009b299) phob2_cc_button_pane_t2

0x0001,

0xfe64,	// (0x0009dbaa) phob2_cc_button_pane_t

0x9e6c,	// (0x00097bb2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e6c,	// (0x00097bb2) list_double_large_graphic_phob2_cc_pane

0x9e80,	// (0x00097bc6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e80,	// (0x00097bc6) list_double_large_graphic_phob2_cc_pane_g1

0x9e8c,	// (0x00097bd2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e8c,	// (0x00097bd2) list_double_large_graphic_phob2_cc_pane_g2

0x9e98,	// (0x00097bde) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e98,	// (0x00097bde) list_double_large_graphic_phob2_cc_pane_g3

0x9ea4,	// (0x00097bea) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ea4,	// (0x00097bea) list_double_large_graphic_phob2_cc_pane_g4

0x9eb0,	// (0x00097bf6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9eb0,	// (0x00097bf6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe69,	// (0x0009dbaf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe69,	// (0x0009dbaf) list_double_large_graphic_phob2_cc_pane_g

0x9ebc,	// (0x00097c02) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ebc,	// (0x00097c02) list_double_large_graphic_phob2_cc_pane_t1

0x9ee5,	// (0x00097c2b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ee5,	// (0x00097c2b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe74,	// (0x0009dbba) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe74,	// (0x0009dbba) list_double_large_graphic_phob2_cc_pane_t

0xd565,	// (0x0009b2ab) list_highlight_pane_cp025_ParamLimits

0xd565,	// (0x0009b2ab) list_highlight_pane_cp025

0x9f34,	// (0x00097c7a) bg_button_pane_cp033_ParamLimits

0xd532,	// (0x0009b278) phob2_cc_button_pane_g1_ParamLimits

0xd53e,	// (0x0009b284) phob2_cc_button_pane_t1_ParamLimits

0xd553,	// (0x0009b299) phob2_cc_button_pane_t2_ParamLimits

0xfe64,	// (0x0009dbaa) phob2_cc_button_pane_t_ParamLimits

0x1079,	// (0x0008edbf) popup_wgtman_window

0xb7df,	// (0x00099525) scroll_pane_cp038

0x99a8,	// (0x000976ee) wgtman_btn_pane_cp_01_ParamLimits

0x99a8,	// (0x000976ee) wgtman_btn_pane_cp_01

0xd573,	// (0x0009b2b9) wgtman_content_pane

0xd2b3,	// (0x0009aff9) wgtman_heading_pane

0x0e1d,	// (0x0008eb63) bg_heading_pane_cp02

0xd57c,	// (0x0009b2c2) wgtman_heading_pane_g1

0xd584,	// (0x0009b2ca) wgtman_heading_pane_t1

0xd592,	// (0x0009b2d8) scroll_pane_cp036

0xd59a,	// (0x0009b2e0) wgtman_list_pane

0xd5a2,	// (0x0009b2e8) wgtman_list_pane_t1_ParamLimits

0xd5a2,	// (0x0009b2e8) wgtman_list_pane_t1

0xd81e,	// (0x0009b564) cam4_grid_pane

0x78e6,	// (0x0009562c) bg_button_pane_cp015_ParamLimits

0x78fa,	// (0x00095640) bg_button_pane_cp016_ParamLimits

0x790d,	// (0x00095653) bg_button_pane_cp017_ParamLimits

0x7965,	// (0x000956ab) popup_vitu2_query_window_g3_ParamLimits

0x7965,	// (0x000956ab) popup_vitu2_query_window_g3

0x7a22,	// (0x00095768) popup_vitu2_query_window_t6_ParamLimits

0x7a22,	// (0x00095768) popup_vitu2_query_window_t6

0x7a4d,	// (0x00095793) popup_vitu2_query_window_t7_ParamLimits

0x7a4d,	// (0x00095793) popup_vitu2_query_window_t7

0xb645,	// (0x0009938b) cam4_grid_pane_g1

0xb64e,	// (0x00099394) cam4_grid_pane_g2

0xd5c0,	// (0x0009b306) cam4_grid_pane_g3

0xd5c9,	// (0x0009b30f) cam4_grid_pane_g4

0x0003,

0xfe79,	// (0x0009dbbf) cam4_grid_pane_g

0x1d53,	// (0x0008fa99) aid_placing_vt_slider_lsc_ParamLimits

0x2050,	// (0x0008fd96) vidtel_button_pane_ParamLimits

0x2050,	// (0x0008fd96) vidtel_button_pane

0x0e1d,	// (0x0008eb63) bg_button_pane_cp034

0x9f0e,	// (0x00097c54) vidtel_button_pane_g1

0xd5d4,	// (0x0009b31a) vidtel_button_pane_t1

0xb8e1,	// (0x00099627) aid_size_vtel_slider_touch

0xb9c2,	// (0x00099708) scroll_pane_cp039

0xc37d,	// (0x0009a0c3) ncim_query_button_pane_cp01_ParamLimits

0xc39c,	// (0x0009a0e2) ncimui_query_pane_g1_ParamLimits

0x9f34,	// (0x00097c7a) input_focus_pane_cp012_ParamLimits

0xc3c1,	// (0x0009a107) ncim_query_entry_pane_t1_ParamLimits

0xb9c2,	// (0x00099708) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
