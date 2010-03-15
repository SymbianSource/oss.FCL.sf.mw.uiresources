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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009b502 };

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
0x0def,	// (0x0009c2f1) Screen

0x0dfb,	// (0x0009c2fd) application_window

0x0e53,	// (0x0009c355) area_bottom_pane_ParamLimits

0x0e53,	// (0x0009c355) area_bottom_pane

0x0e88,	// (0x0009c38a) area_top_pane_ParamLimits

0x0e88,	// (0x0009c38a) area_top_pane

0x9d15,	// (0x000a5217) call_video_uplink_pane_ParamLimits

0x9d15,	// (0x000a5217) call_video_uplink_pane

0x0f17,	// (0x0009c419) main_pane_ParamLimits

0x0f17,	// (0x0009c419) main_pane

0xc89a,	// (0x000a7d9c) context_pane

0x476c,	// (0x0009fc6e) navi_pane

0x4790,	// (0x0009fc92) popup_cale_events_window_ParamLimits

0x4790,	// (0x0009fc92) popup_cale_events_window

0xc8ad,	// (0x000a7daf) popup_mup_playback_window

0x47a8,	// (0x0009fcaa) signal_pane

0xa7d5,	// (0x000a5cd7) main_browser_pane

0xb43e,	// (0x000a6940) main_burst_pane

0x461e,	// (0x0009fb20) main_calc_pane

0xc83d,	// (0x000a7d3f) main_cale_day_pane

0x163f,	// (0x0009cb41) main_cale_month_pane

0xc83d,	// (0x000a7d3f) main_cale_week_pane

0xb43e,	// (0x000a6940) main_call_pane

0xa146,	// (0x000a5648) main_call_poc_pane

0xb43e,	// (0x000a6940) main_camera_pane

0xb43e,	// (0x000a6940) main_chi_dic_pane

0xb2d2,	// (0x000a67d4) main_clock_pane

0xa146,	// (0x000a5648) main_fmradio_pane

0xb43e,	// (0x000a6940) main_graph_messa_pane

0xa146,	// (0x000a5648) main_help_pane

0xa7d5,	// (0x000a5cd7) main_im_pane

0xa710,	// (0x000a5c12) main_image_pane_ParamLimits

0xa710,	// (0x000a5c12) main_image_pane

0xa146,	// (0x000a5648) main_location2_pane

0xb43e,	// (0x000a6940) main_location_pane

0xa710,	// (0x000a5c12) main_messa_pane

0xa146,	// (0x000a5648) main_mp2_pane

0xb43e,	// (0x000a6940) main_mp_pane

0xa146,	// (0x000a5648) main_msg_pane

0xa146,	// (0x000a5648) main_mup_eq_pane

0xa146,	// (0x000a5648) main_mup_pane

0xa7d5,	// (0x000a5cd7) main_notes_pane

0xa146,	// (0x000a5648) main_pec_pane

0xa146,	// (0x000a5648) main_phob_pane

0xa146,	// (0x000a5648) main_pinb_pane

0xa146,	// (0x000a5648) main_postcard_pane

0xa146,	// (0x000a5648) main_qdial_pane

0xb43e,	// (0x000a6940) main_skin_pane

0xa146,	// (0x000a5648) main_smil2_pane

0xb43e,	// (0x000a6940) main_smil_pane

0xb43e,	// (0x000a6940) main_video_pane

0xb43e,	// (0x000a6940) main_video_tele_pane

0xa710,	// (0x000a5c12) main_viewer_pane_ParamLimits

0xa710,	// (0x000a5c12) main_viewer_pane

0xb43e,	// (0x000a6940) main_vorec_pane

0x4656,	// (0x0009fb58) popup_blid_sat_info_window_ParamLimits

0x4656,	// (0x0009fb58) popup_blid_sat_info_window

0x4670,	// (0x0009fb72) popup_dyc_status_message_window_ParamLimits

0x4670,	// (0x0009fb72) popup_dyc_status_message_window

0x4680,	// (0x0009fb82) popup_grid_large_graphic_window_ParamLimits

0x4680,	// (0x0009fb82) popup_grid_large_graphic_window

0x46f8,	// (0x0009fbfa) popup_loc_request_window_ParamLimits

0x46f8,	// (0x0009fbfa) popup_loc_request_window

0x4740,	// (0x0009fc42) popup_wml_address_window_ParamLimits

0x4740,	// (0x0009fc42) popup_wml_address_window

0x44f6,	// (0x0009f9f8) call_muted_g1

0x41b5,	// (0x0009f6b7) popup_call_audio_conf_window_ParamLimits

0x41b5,	// (0x0009f6b7) popup_call_audio_conf_window

0x4506,	// (0x0009fa08) popup_call_audio_first_window_ParamLimits

0x4506,	// (0x0009fa08) popup_call_audio_first_window

0x4546,	// (0x0009fa48) popup_call_audio_in_window_ParamLimits

0x4546,	// (0x0009fa48) popup_call_audio_in_window

0x456a,	// (0x0009fa6c) popup_call_audio_out_window_ParamLimits

0x456a,	// (0x0009fa6c) popup_call_audio_out_window

0x458c,	// (0x0009fa8e) popup_call_audio_second_window_ParamLimits

0x458c,	// (0x0009fa8e) popup_call_audio_second_window

0x45bc,	// (0x0009fabe) popup_call_audio_wait_window_ParamLimits

0x45bc,	// (0x0009fabe) popup_call_audio_wait_window

0x45dd,	// (0x0009fadf) popup_number_entry_window_ParamLimits

0x45dd,	// (0x0009fadf) popup_number_entry_window

0x9d33,	// (0x000a5235) bg_popup_call_pane_cp05_ParamLimits

0x9d33,	// (0x000a5235) bg_popup_call_pane_cp05

0x9d53,	// (0x000a5255) popup_number_entry_window_t1

0x9d66,	// (0x000a5268) popup_number_entry_window_t2

0x9d78,	// (0x000a527a) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000aa5d5) popup_number_entry_window_t

0x9d8a,	// (0x000a528c) text_title_cp2

0x9d9d,	// (0x000a529f) bg_popup_call_pane_cp_ParamLimits

0x9d9d,	// (0x000a529f) bg_popup_call_pane_cp

0x9dab,	// (0x000a52ad) call_thumbnail_pane

0x9db3,	// (0x000a52b5) popup_call_audio_in_window_g1_ParamLimits

0x9db3,	// (0x000a52b5) popup_call_audio_in_window_g1

0x9dbf,	// (0x000a52c1) popup_call_audio_in_window_g2_ParamLimits

0x9dbf,	// (0x000a52c1) popup_call_audio_in_window_g2

0x9dcb,	// (0x000a52cd) popup_call_audio_in_window_g3_ParamLimits

0x9dcb,	// (0x000a52cd) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000aa5de) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000aa5de) popup_call_audio_in_window_g

0x9dd7,	// (0x000a52d9) popup_call_audio_in_window_t1_ParamLimits

0x9dd7,	// (0x000a52d9) popup_call_audio_in_window_t1

0x9df3,	// (0x000a52f5) popup_call_audio_in_window_t2_ParamLimits

0x9df3,	// (0x000a52f5) popup_call_audio_in_window_t2

0x9e0f,	// (0x000a5311) popup_call_audio_in_window_t3_ParamLimits

0x9e0f,	// (0x000a5311) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000aa5e5) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000aa5e5) popup_call_audio_in_window_t

0x9d9d,	// (0x000a529f) bg_popup_call_pane_cp01_ParamLimits

0x9d9d,	// (0x000a529f) bg_popup_call_pane_cp01

0x9dab,	// (0x000a52ad) call_thumbnail_pane_cp02

0x9e22,	// (0x000a5324) call_type_pane_cp022

0x9e2a,	// (0x000a532c) popup_call_audio_out_window_g1_ParamLimits

0x9e2a,	// (0x000a532c) popup_call_audio_out_window_g1

0x9e3c,	// (0x000a533e) popup_call_audio_out_window_g2_ParamLimits

0x9e3c,	// (0x000a533e) popup_call_audio_out_window_g2

0x9e48,	// (0x000a534a) popup_call_audio_out_window_g3_ParamLimits

0x9e48,	// (0x000a534a) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000aa5ec) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000aa5ec) popup_call_audio_out_window_g

0x9e5a,	// (0x000a535c) popup_call_audio_out_window_t1_ParamLimits

0x9e5a,	// (0x000a535c) popup_call_audio_out_window_t1

0x9e72,	// (0x000a5374) popup_call_audio_out_window_t2_ParamLimits

0x9e72,	// (0x000a5374) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000aa5f3) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000aa5f3) popup_call_audio_out_window_t

0x9e87,	// (0x000a5389) bg_popup_call_pane_ParamLimits

0x9e87,	// (0x000a5389) bg_popup_call_pane

0x1111,	// (0x0009c613) call_thumbnail_pane_cp_ParamLimits

0x1111,	// (0x0009c613) call_thumbnail_pane_cp

0x9f0b,	// (0x000a540d) call_type_pane_cp01_ParamLimits

0x9f0b,	// (0x000a540d) call_type_pane_cp01

0x9f4f,	// (0x000a5451) popup_call_audio_first_window_g1_ParamLimits

0x9f4f,	// (0x000a5451) popup_call_audio_first_window_g1

0x9f9b,	// (0x000a549d) popup_call_audio_first_window_g2_ParamLimits

0x9f9b,	// (0x000a549d) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000aa5f8) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000aa5f8) popup_call_audio_first_window_g

0x9fdf,	// (0x000a54e1) popup_call_audio_first_window_t1_ParamLimits

0x9fdf,	// (0x000a54e1) popup_call_audio_first_window_t1

0xa08b,	// (0x000a558d) popup_call_audio_first_window_t4_ParamLimits

0xa08b,	// (0x000a558d) popup_call_audio_first_window_t4

0xa117,	// (0x000a5619) popup_call_audio_first_window_t5_ParamLimits

0xa117,	// (0x000a5619) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000aa5fd) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000aa5fd) popup_call_audio_first_window_t

0xa146,	// (0x000a5648) bg_popup_call_pane_cp02

0xa150,	// (0x000a5652) call_type_pane_cp023

0xa158,	// (0x000a565a) popup_call_audio_wait_window_g1

0xa160,	// (0x000a5662) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000aa604) popup_call_audio_wait_window_g

0xa168,	// (0x000a566a) popup_call_audio_wait_window_t3

0xa176,	// (0x000a5678) bg_popup_call_pane_cp03_ParamLimits

0xa176,	// (0x000a5678) bg_popup_call_pane_cp03

0xa1d6,	// (0x000a56d8) call_thumbnail_pane_cp011_ParamLimits

0xa1d6,	// (0x000a56d8) call_thumbnail_pane_cp011

0xa1e2,	// (0x000a56e4) call_type_pane_cp034_ParamLimits

0xa1e2,	// (0x000a56e4) call_type_pane_cp034

0xa58d,	// (0x000a5a8f) popup_call_audio_second_window_g1_ParamLimits

0xa58d,	// (0x000a5a8f) popup_call_audio_second_window_g1

0xa5c9,	// (0x000a5acb) popup_call_audio_second_window_g2_ParamLimits

0xa5c9,	// (0x000a5acb) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000aa609) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000aa609) popup_call_audio_second_window_g

0xa605,	// (0x000a5b07) popup_call_audio_second_window_t1_ParamLimits

0xa605,	// (0x000a5b07) popup_call_audio_second_window_t1

0xa686,	// (0x000a5b88) popup_call_audio_second_window_t2_ParamLimits

0xa686,	// (0x000a5b88) popup_call_audio_second_window_t2

0xa6bc,	// (0x000a5bbe) popup_call_audio_second_window_t3_ParamLimits

0xa6bc,	// (0x000a5bbe) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000aa60e) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000aa60e) popup_call_audio_second_window_t

0xa146,	// (0x000a5648) bg_popup_call_pane_cp04

0xa6f2,	// (0x000a5bf4) list_conf_pane

0xa6fa,	// (0x000a5bfc) popup_call_audio_conf_window_t1

0xa708,	// (0x000a5c0a) call_thumbnail_pane_g1

0xa710,	// (0x000a5c12) bg_pinb_pane_ParamLimits

0xa710,	// (0x000a5c12) bg_pinb_pane

0xa71e,	// (0x000a5c20) find_pinb_pane

0xa727,	// (0x000a5c29) listscroll_pinb_pane_ParamLimits

0xa727,	// (0x000a5c29) listscroll_pinb_pane

0xa736,	// (0x000a5c38) pinb_bg_pane_g1

0x1135,	// (0x0009c637) pinb_bg_pane_g2

0x1141,	// (0x0009c643) pinb_bg_pane_g3

0x114d,	// (0x0009c64f) pinb_bg_pane_g4

0x1159,	// (0x0009c65b) pinb_bg_pane_g5

0x1165,	// (0x0009c667) pinb_bg_pane_g6

0x1170,	// (0x0009c672) pinb_bg_pane_g7

0x117b,	// (0x0009c67d) pinb_bg_pane_g8

0x1186,	// (0x0009c688) pinb_bg_pane_g9

0x1190,	// (0x0009c692) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000aa615) pinb_bg_pane_g

0x11ad,	// (0x0009c6af) grid_pinb_pane

0x11b8,	// (0x0009c6ba) list_pinb_pane

0x11c3,	// (0x0009c6c5) scroll_pane_cp01_ParamLimits

0x11c3,	// (0x0009c6c5) scroll_pane_cp01

0xa740,	// (0x000a5c42) find_pinb_pane_g1_ParamLimits

0xa740,	// (0x000a5c42) find_pinb_pane_g1

0xa758,	// (0x000a5c5a) find_pinb_pane_t1

0xa76a,	// (0x000a5c6c) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000aa62f) find_pinb_pane_t

0xa77f,	// (0x000a5c81) input_focus_pane_cp01_ParamLimits

0xa77f,	// (0x000a5c81) input_focus_pane_cp01

0x11d5,	// (0x0009c6d7) cell_pinb_pane_ParamLimits

0x11d5,	// (0x0009c6d7) cell_pinb_pane

0x11fa,	// (0x0009c6fc) cell_pinb_pane_g1_ParamLimits

0x11fa,	// (0x0009c6fc) cell_pinb_pane_g1

0x120f,	// (0x0009c711) cell_pinb_pane_g2_ParamLimits

0x120f,	// (0x0009c711) cell_pinb_pane_g2

0xa78b,	// (0x000a5c8d) cell_pinb_pane_g3_ParamLimits

0xa78b,	// (0x000a5c8d) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000aa634) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000aa634) cell_pinb_pane_g

0xa146,	// (0x000a5648) grid_highlight_pane_cp01

0x121b,	// (0x0009c71d) list_pinb_item_pane_ParamLimits

0x121b,	// (0x0009c71d) list_pinb_item_pane

0xa146,	// (0x000a5648) list_highlight_pane_cp02

0x1239,	// (0x0009c73b) list_pinb_item_pane_g1_ParamLimits

0x1239,	// (0x0009c73b) list_pinb_item_pane_g1

0x1246,	// (0x0009c748) list_pinb_item_pane_g2_ParamLimits

0x1246,	// (0x0009c748) list_pinb_item_pane_g2

0x1252,	// (0x0009c754) list_pinb_item_pane_g3_ParamLimits

0x1252,	// (0x0009c754) list_pinb_item_pane_g3

0x1263,	// (0x0009c765) list_pinb_item_pane_g4_ParamLimits

0x1263,	// (0x0009c765) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000aa63b) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000aa63b) list_pinb_item_pane_g

0x126f,	// (0x0009c771) list_pinb_item_pane_t1_ParamLimits

0x126f,	// (0x0009c771) list_pinb_item_pane_t1

0x12a0,	// (0x0009c7a2) calc_display_pane

0x12be,	// (0x0009c7c0) calc_paper_pane

0x12da,	// (0x0009c7dc) grid_calc_pane

0xa146,	// (0x000a5648) bg_list_pane_cp01

0x1306,	// (0x0009c808) clock_g1

0x130e,	// (0x0009c810) clock_g2

0x0001,

0xf142,	// (0x000aa644) clock_g

0x1318,	// (0x0009c81a) clock_t1_ParamLimits

0x1318,	// (0x0009c81a) clock_t1

0x132d,	// (0x0009c82f) clock_t2_ParamLimits

0x132d,	// (0x0009c82f) clock_t2

0x133f,	// (0x0009c841) clock_t3_ParamLimits

0x133f,	// (0x0009c841) clock_t3

0x1351,	// (0x0009c853) clock_t4_ParamLimits

0x1351,	// (0x0009c853) clock_t4

0x1363,	// (0x0009c865) clock_t5_ParamLimits

0x1363,	// (0x0009c865) clock_t5

0x1378,	// (0x0009c87a) clock_t6_ParamLimits

0x1378,	// (0x0009c87a) clock_t6

0x138a,	// (0x0009c88c) clock_t7_ParamLimits

0x138a,	// (0x0009c88c) clock_t7

0x139c,	// (0x0009c89e) clock_t8_ParamLimits

0x139c,	// (0x0009c89e) clock_t8

0x13b2,	// (0x0009c8b4) clock_t9_ParamLimits

0x13b2,	// (0x0009c8b4) clock_t9

0x0008,

0xf147,	// (0x000aa649) clock_t_ParamLimits

0xf147,	// (0x000aa649) clock_t

0xa797,	// (0x000a5c99) popup_clock_analogue_window_cp02

0xa797,	// (0x000a5c99) popup_clock_digital_window_cp01

0xa79f,	// (0x000a5ca1) listscroll_help_pane

0xa146,	// (0x000a5648) phob_pre_status_pane

0xa7a9,	// (0x000a5cab) grid_qdial_pane

0xa710,	// (0x000a5c12) listscroll_mce_pane

0xa710,	// (0x000a5c12) bg_notes_pane

0xa7b3,	// (0x000a5cb5) list_notes_pane

0x13c8,	// (0x0009c8ca) scroll_pane_cp06

0xa7c1,	// (0x000a5cc3) bg_calc_paper_pane

0x13e1,	// (0x0009c8e3) list_calc_pane

0xa7d5,	// (0x000a5cd7) bg_calc_display_pane

0x13fb,	// (0x0009c8fd) calc_display_pane_t1

0x1410,	// (0x0009c912) calc_display_pane_t2

0x1425,	// (0x0009c927) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000aa65c) calc_display_pane_t

0x1437,	// (0x0009c939) cell_calc_pane_ParamLimits

0x1437,	// (0x0009c939) cell_calc_pane

0xa7e1,	// (0x000a5ce3) bg_calc_paper_pane_g1

0xa7ed,	// (0x000a5cef) bg_calc_paper_pane_g2

0xa7f9,	// (0x000a5cfb) bg_calc_paper_pane_g3

0xa805,	// (0x000a5d07) bg_calc_paper_pane_g4

0xa811,	// (0x000a5d13) bg_calc_paper_pane_g5

0x1466,	// (0x0009c968) bg_calc_paper_pane_g6

0x1477,	// (0x0009c979) bg_calc_paper_pane_g7

0x1488,	// (0x0009c98a) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000aa663) bg_calc_paper_pane_g

0x149b,	// (0x0009c99d) calc_bg_paper_pane_g9

0x14ae,	// (0x0009c9b0) list_calc_item_pane_ParamLimits

0x14ae,	// (0x0009c9b0) list_calc_item_pane

0xa81d,	// (0x000a5d1f) list_calc_item_pane_g1

0x14cf,	// (0x0009c9d1) list_calc_item_pane_t1_ParamLimits

0x14cf,	// (0x0009c9d1) list_calc_item_pane_t1

0x14e1,	// (0x0009c9e3) list_calc_item_pane_t2_ParamLimits

0x14e1,	// (0x0009c9e3) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000aa674) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000aa674) list_calc_item_pane_t

0xa82a,	// (0x000a5d2c) cell_calc_pane_g1

0xa834,	// (0x000a5d36) grid_highlight_pane_cp02

0xa856,	// (0x000a5d58) bg_calc_display_pane_g1

0x1511,	// (0x0009ca13) bg_calc_display_pane_g2

0xa85f,	// (0x000a5d61) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000aa67e) bg_calc_display_pane_g

0x151b,	// (0x0009ca1d) cell_qdial_pane_ParamLimits

0x151b,	// (0x0009ca1d) cell_qdial_pane

0x1531,	// (0x0009ca33) cell_qdial_pane_g1_ParamLimits

0x1531,	// (0x0009ca33) cell_qdial_pane_g1

0x153e,	// (0x0009ca40) cell_qdial_pane_g2_ParamLimits

0x153e,	// (0x0009ca40) cell_qdial_pane_g2

0xa868,	// (0x000a5d6a) cell_qdial_pane_g3_ParamLimits

0xa868,	// (0x000a5d6a) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000aa685) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000aa685) cell_qdial_pane_g

0x155c,	// (0x0009ca5e) cell_qdial_pane_t1_ParamLimits

0x155c,	// (0x0009ca5e) cell_qdial_pane_t1

0x1574,	// (0x0009ca76) cell_qdial_pane_t2_ParamLimits

0x1574,	// (0x0009ca76) cell_qdial_pane_t2

0x1587,	// (0x0009ca89) cell_qdial_pane_t3_ParamLimits

0x1587,	// (0x0009ca89) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000aa68e) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000aa68e) cell_qdial_pane_t

0xa146,	// (0x000a5648) grid_highlight_pane_cp04

0xa874,	// (0x000a5d76) thumbnail_qdial_pane_ParamLimits

0xa874,	// (0x000a5d76) thumbnail_qdial_pane

0xa8d0,	// (0x000a5dd2) list_help_pane

0xa8d9,	// (0x000a5ddb) scroll_pane_cp02

0x159a,	// (0x0009ca9c) help_list_pane_t1_ParamLimits

0x159a,	// (0x0009ca9c) help_list_pane_t1

0x15c1,	// (0x0009cac3) bg_notes_pane_g2

0x15c9,	// (0x0009cacb) bg_notes_pane_g3

0x15d1,	// (0x0009cad3) notes_bg_pane_g1

0x15d9,	// (0x0009cadb) notes_bg_pane_g4

0x15e1,	// (0x0009cae3) notes_bg_pane_g5

0x15e9,	// (0x0009caeb) notes_bg_pane_g6

0x15f1,	// (0x0009caf3) notes_bg_pane_g7

0x15f9,	// (0x0009cafb) notes_bg_pane_g8

0x1601,	// (0x0009cb03) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000aa6ac) notes_bg_pane_g

0x1609,	// (0x0009cb0b) list_notes_text_pane_ParamLimits

0x1609,	// (0x0009cb0b) list_notes_text_pane

0xa8e2,	// (0x000a5de4) list_notes_text_pane_g1

0x1631,	// (0x0009cb33) list_notes_text_pane_t1

0x163f,	// (0x0009cb41) listscroll_cale_week_pane

0x1677,	// (0x0009cb79) bg_cale_heading_pane

0xa8fc,	// (0x000a5dfe) bg_cale_pane_cp01

0x16a0,	// (0x0009cba2) cale_week_corner_pane

0x16bf,	// (0x0009cbc1) cale_week_day_heading_pane

0x16ed,	// (0x0009cbef) cale_week_scroll_pane_g1

0x1711,	// (0x0009cc13) cale_week_scroll_pane_g2

0x1729,	// (0x0009cc2b) cale_week_scroll_pane_g3

0x1741,	// (0x0009cc43) cale_week_scroll_pane_g4

0x1759,	// (0x0009cc5b) cale_week_scroll_pane_g5

0x1771,	// (0x0009cc73) cale_week_scroll_pane_g6

0x178d,	// (0x0009cc8f) cale_week_scroll_pane_g7

0x17a9,	// (0x0009ccab) cale_week_scroll_pane_g8

0x17c5,	// (0x0009ccc7) cale_week_scroll_pane_g9

0x17e2,	// (0x0009cce4) cale_week_scroll_pane_g10

0x17ff,	// (0x0009cd01) cale_week_scroll_pane_g11

0x181c,	// (0x0009cd1e) cale_week_scroll_pane_g12

0x1839,	// (0x0009cd3b) cale_week_scroll_pane_g13

0x1856,	// (0x0009cd58) cale_week_scroll_pane_g14

0x187f,	// (0x0009cd81) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000aa6bb) cale_week_scroll_pane_g

0x18a8,	// (0x0009cdaa) cale_week_time_pane

0x18c4,	// (0x0009cdc6) grid_cale_week_pane

0xa92c,	// (0x000a5e2e) scroll_pane_cp08

0x18f3,	// (0x0009cdf5) cell_cale_week_pane_ParamLimits

0x18f3,	// (0x0009cdf5) cell_cale_week_pane

0x1973,	// (0x0009ce75) cale_week_day_heading_pane_t1

0x19b9,	// (0x0009cebb) cale_week_day_heading_pane_t2

0x1a04,	// (0x0009cf06) cale_week_day_heading_pane_t3

0x1a4f,	// (0x0009cf51) cale_week_day_heading_pane_t4

0x1a9a,	// (0x0009cf9c) cale_week_day_heading_pane_t5

0x1ae5,	// (0x0009cfe7) cale_week_day_heading_pane_t6

0x1b30,	// (0x0009d032) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000aa6da) cale_week_day_heading_pane_t

0xa95a,	// (0x000a5e5c) bg_cale_side_pane

0x1b76,	// (0x0009d078) cale_week_time_pane_t1

0x1bba,	// (0x0009d0bc) cale_week_time_pane_t2

0x1bfe,	// (0x0009d100) cale_week_time_pane_t3

0x1c42,	// (0x0009d144) cale_week_time_pane_t4

0x1c86,	// (0x0009d188) cale_week_time_pane_t5

0x1cca,	// (0x0009d1cc) cale_week_time_pane_t6

0x1d0e,	// (0x0009d210) cale_week_time_pane_t7

0x1d52,	// (0x0009d254) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000aa6e9) cale_week_time_pane_t

0x1d9c,	// (0x0009d29e) cell_cale_week_pane_g2

0x1dc0,	// (0x0009d2c2) cell_cale_week_pane_g3_ParamLimits

0x1dc0,	// (0x0009d2c2) cell_cale_week_pane_g3

0xa968,	// (0x000a5e6a) grid_highlight_pane_cp07

0xa970,	// (0x000a5e72) listscroll_gms_pane

0xa97a,	// (0x000a5e7c) grid_gms_pane

0xa983,	// (0x000a5e85) listscroll_gms_pane_g1

0xa98b,	// (0x000a5e8d) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000aa6fa) listscroll_gms_pane_g

0x1dd8,	// (0x0009d2da) scroll_pane_cp010

0x1de3,	// (0x0009d2e5) cell_gms_pane_ParamLimits

0x1de3,	// (0x0009d2e5) cell_gms_pane

0x1df6,	// (0x0009d2f8) cell_gms_pane_g1

0xa993,	// (0x000a5e95) cell_gms_pane_g2

0xa99b,	// (0x000a5e9d) cell_gms_pane_g3

0xa9a4,	// (0x000a5ea6) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000aa6ff) cell_gms_pane_g

0xa9ad,	// (0x000a5eaf) grid_highlight_pane_cp09

0x449e,	// (0x0009f9a0) phob_pre_status_pane_g1

0x44a6,	// (0x0009f9a8) phob_pre_status_pane_g2

0x44ae,	// (0x0009f9b0) phob_pre_status_pane_g3

0x44b6,	// (0x0009f9b8) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000aaaee) phob_pre_status_pane_g

0x44c6,	// (0x0009f9c8) phob_pre_status_pane_t1

0x44d6,	// (0x0009f9d8) phob_pre_status_pane_t2

0x44e6,	// (0x0009f9e8) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000aaaf9) phob_pre_status_pane_t

0xa146,	// (0x000a5648) bg_list_pane_cp05

0x1e06,	// (0x0009d308) grid_vorec_pane

0x1e12,	// (0x0009d314) vorec_t1

0x1e20,	// (0x0009d322) vorec_t2

0x1e2e,	// (0x0009d330) vorec_t3

0x1e3c,	// (0x0009d33e) vorec_t4

0x1e4a,	// (0x0009d34c) vorec_t5

0x1e58,	// (0x0009d35a) vorec_t6

0x0006,

0xf206,	// (0x000aa708) vorec_t

0x1e74,	// (0x0009d376) wait_bar_pane_cp01

0x1e7c,	// (0x0009d37e) cell_vorec_pane_ParamLimits

0x1e7c,	// (0x0009d37e) cell_vorec_pane

0xa9b5,	// (0x000a5eb7) cell_vorec_pane_g1

0xa146,	// (0x000a5648) grid_highlight_pane_cp05

0x1e9f,	// (0x0009d3a1) cams_zoom_pane

0x1eab,	// (0x0009d3ad) image_vga_pane

0x1eba,	// (0x0009d3bc) main_camera_pane_g1

0x1ec8,	// (0x0009d3ca) main_camera_pane_g2

0x1ed4,	// (0x0009d3d6) main_camera_pane_g3

0x1ee2,	// (0x0009d3e4) main_camera_pane_g4

0x1ef0,	// (0x0009d3f2) main_camera_pane_g5

0x1efe,	// (0x0009d400) main_camera_pane_g6

0x1f0c,	// (0x0009d40e) main_camera_pane_g7

0x0007,

0xf215,	// (0x000aa717) main_camera_pane_g

0x1f1a,	// (0x0009d41c) main_camera_pane_t1

0x1f2c,	// (0x0009d42e) main_camera_pane_t2

0x0001,

0xf226,	// (0x000aa728) main_camera_pane_t

0x1f4f,	// (0x0009d451) cams_zoom_pane_cp_ParamLimits

0x1f4f,	// (0x0009d451) cams_zoom_pane_cp

0x1f73,	// (0x0009d475) image_cif_pane_ParamLimits

0x1f73,	// (0x0009d475) image_cif_pane

0x1f91,	// (0x0009d493) image_subqcif_pane

0x1f9b,	// (0x0009d49d) main_video_pane_g1_ParamLimits

0x1f9b,	// (0x0009d49d) main_video_pane_g1

0x1fbb,	// (0x0009d4bd) main_video_pane_g2_ParamLimits

0x1fbb,	// (0x0009d4bd) main_video_pane_g2

0x1feb,	// (0x0009d4ed) main_video_pane_g3_ParamLimits

0x1feb,	// (0x0009d4ed) main_video_pane_g3

0x2014,	// (0x0009d516) main_video_pane_g4_ParamLimits

0x2014,	// (0x0009d516) main_video_pane_g4

0x203d,	// (0x0009d53f) main_video_pane_g5_ParamLimits

0x203d,	// (0x0009d53f) main_video_pane_g5

0xa9cb,	// (0x000a5ecd) main_video_pane_g6_ParamLimits

0xa9cb,	// (0x000a5ecd) main_video_pane_g6

0x0006,

0xf22b,	// (0x000aa72d) main_video_pane_g_ParamLimits

0xf22b,	// (0x000aa72d) main_video_pane_g

0x205f,	// (0x0009d561) main_video_pane_t1_ParamLimits

0x205f,	// (0x0009d561) main_video_pane_t1

0xa9e5,	// (0x000a5ee7) cams_zoom_pane_g1

0xa9ee,	// (0x000a5ef0) cams_zoom_pane_g2

0xa9f7,	// (0x000a5ef9) cams_zoom_pane_g3

0xaa00,	// (0x000a5f02) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000aa73c) cams_zoom_pane_g

0x20a9,	// (0x0009d5ab) grid_cams_pane

0x20b7,	// (0x0009d5b9) linegrid_cams_pane

0x20c3,	// (0x0009d5c5) cell_cams_pane_ParamLimits

0x20c3,	// (0x0009d5c5) cell_cams_pane

0xaa09,	// (0x000a5f0b) cams_burst_image_pane

0xab47,	// (0x000a6049) cell_cams_pane_g1

0xa146,	// (0x000a5648) grid_highlight_pane_cp03

0xa82a,	// (0x000a5d2c) mp_bg_pane_g1

0xa146,	// (0x000a5648) bg_list_pane_cp03

0xc760,	// (0x000a7c62) bg_mp_pane

0xc768,	// (0x000a7c6a) grid_mp_pane

0xc770,	// (0x000a7c72) media_player_g1

0xc77a,	// (0x000a7c7c) media_player_t1

0xc788,	// (0x000a7c8a) media_player_t2

0xc796,	// (0x000a7c98) media_player_t3

0xc7a4,	// (0x000a7ca6) media_player_t4

0xc7b2,	// (0x000a7cb4) media_player_t5

0xc7c0,	// (0x000a7cc2) media_player_t6

0xc7ce,	// (0x000a7cd0) media_player_t7

0x0006,

0xf5d6,	// (0x000aaad8) media_player_t

0xc7dc,	// (0x000a7cde) wait_bar_pane_cp02

0xf5bb,	// (0x000aaabd) main_usb_pane_t

0x4495,	// (0x0009f997) cell_mp_pane

0xa82a,	// (0x000a5d2c) cell_mp_pane_g1

0xa146,	// (0x000a5648) grid_highlight_pane_cp06

0xab4f,	// (0x000a6051) grid_skin_colour_pane

0xab57,	// (0x000a6059) list_highlight_pane_cp03

0x21ed,	// (0x0009d6ef) skin_g1

0xab5f,	// (0x000a6061) skin_t1

0xab6e,	// (0x000a6070) skin_t2

0x0001,

0xf26f,	// (0x000aa771) skin_t

0x21f7,	// (0x0009d6f9) cell_skin_colour_pane_ParamLimits

0x21f7,	// (0x0009d6f9) cell_skin_colour_pane

0xab7c,	// (0x000a607e) cell_skin_colour_pane_g1

0x2277,	// (0x0009d779) call_video_g1_ParamLimits

0x2277,	// (0x0009d779) call_video_g1

0x2287,	// (0x0009d789) call_video_g2_ParamLimits

0x2287,	// (0x0009d789) call_video_g2

0x0001,

0xf274,	// (0x000aa776) call_video_g_ParamLimits

0xf274,	// (0x000aa776) call_video_g

0x22d7,	// (0x0009d7d9) call_video_uplink_pane_cp1_ParamLimits

0x22d7,	// (0x0009d7d9) call_video_uplink_pane_cp1

0xab8e,	// (0x000a6090) call_video_uplink_pane_cp2

0x23a5,	// (0x0009d8a7) video_down_crop_pane_ParamLimits

0x23a5,	// (0x0009d8a7) video_down_crop_pane

0x2497,	// (0x0009d999) video_down_pane_ParamLimits

0x2497,	// (0x0009d999) video_down_pane

0xab96,	// (0x000a6098) video_down_subqcif_pane_ParamLimits

0xab96,	// (0x000a6098) video_down_subqcif_pane

0xabb0,	// (0x000a60b2) video_down_subqcif_pane_cp_ParamLimits

0xabb0,	// (0x000a60b2) video_down_subqcif_pane_cp

0xabd8,	// (0x000a60da) im_reading_pane_ParamLimits

0xabd8,	// (0x000a60da) im_reading_pane

0x25b4,	// (0x0009dab6) im_writing_pane_ParamLimits

0x25b4,	// (0x0009dab6) im_writing_pane

0x25d2,	// (0x0009dad4) im_reading_pane_t1

0xabf2,	// (0x000a60f4) list_im_pane

0xac03,	// (0x000a6105) scroll_pane_cp07

0x2614,	// (0x0009db16) im_writing_pane_t1_ParamLimits

0x2614,	// (0x0009db16) im_writing_pane_t1

0xac1c,	// (0x000a611e) im_writing_pane_t2_ParamLimits

0xac1c,	// (0x000a611e) im_writing_pane_t2

0x0001,

0xf27e,	// (0x000aa780) im_writing_pane_t_ParamLimits

0xf27e,	// (0x000aa780) im_writing_pane_t

0xa146,	// (0x000a5648) input_focus_pane_cp04

0xa146,	// (0x000a5648) input_focus_pane_cp05

0x2626,	// (0x0009db28) list_im_single_pane_ParamLimits

0x2626,	// (0x0009db28) list_im_single_pane

0x263f,	// (0x0009db41) list_single_im_pane_t1

0x4459,	// (0x0009f95b) blid_accuracy_pane

0x4461,	// (0x0009f963) blid_compass_pane

0x446b,	// (0x0009f96d) main_location_t1

0x4479,	// (0x0009f97b) main_location_t2

0x4487,	// (0x0009f989) main_location_t3

0x0002,

0xf5e5,	// (0x000aaae7) main_location_t

0xa146,	// (0x000a5648) aid_levels_location

0xa82a,	// (0x000a5d2c) blid_accuracy_pane_g1

0xa82a,	// (0x000a5d2c) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000aa7e2) blid_accuracy_pane_g

0xac64,	// (0x000a6166) wml_content_pane

0xaca2,	// (0x000a61a4) wml_button_pane_ParamLimits

0xaca2,	// (0x000a61a4) wml_button_pane

0x264e,	// (0x0009db50) wml_list_single_large_pane_ParamLimits

0x264e,	// (0x0009db50) wml_list_single_large_pane

0x2670,	// (0x0009db72) wml_list_single_medium_pane_ParamLimits

0x2670,	// (0x0009db72) wml_list_single_medium_pane

0x2693,	// (0x0009db95) wml_list_single_small_pane_ParamLimits

0x2693,	// (0x0009db95) wml_list_single_small_pane

0xacb6,	// (0x000a61b8) wml_selection_box_pane_ParamLimits

0xacb6,	// (0x000a61b8) wml_selection_box_pane

0xacc9,	// (0x000a61cb) wml_list_single_pane_t1

0xacd8,	// (0x000a61da) wml_list_single_medium_pane_t1

0xace7,	// (0x000a61e9) wml_list_single_large_pane_t1

0xacf6,	// (0x000a61f8) input_focus_pane_cp02_ParamLimits

0xacf6,	// (0x000a61f8) input_focus_pane_cp02

0xad09,	// (0x000a620b) wml_selection_box_pane_g1

0xad12,	// (0x000a6214) wml_selection_box_pane_t1_ParamLimits

0xad12,	// (0x000a6214) wml_selection_box_pane_t1

0xa710,	// (0x000a5c12) bg_wml_button_pane_ParamLimits

0xa710,	// (0x000a5c12) bg_wml_button_pane

0xad2a,	// (0x000a622c) wml_button_pane_g1

0xad32,	// (0x000a6234) wml_button_pane_t1

0xad2a,	// (0x000a622c) wml_button_bg_pane_g1

0xad42,	// (0x000a6244) wml_button_bg_pane_g2

0xad4a,	// (0x000a624c) wml_button_bg_pane_g3

0xad52,	// (0x000a6254) wml_button_bg_pane_g4

0xad5a,	// (0x000a625c) wml_button_bg_pane_g5

0xad62,	// (0x000a6264) wml_button_bg_pane_g6

0xad6a,	// (0x000a626c) wml_button_bg_pane_g7

0xad72,	// (0x000a6274) wml_button_bg_pane_g8

0xad7a,	// (0x000a627c) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x000aa785) wml_button_bg_pane_g

0x26bb,	// (0x0009dbbd) bg_list_pane_cp02

0xad82,	// (0x000a6284) mce_header_pane_ParamLimits

0xad82,	// (0x000a6284) mce_header_pane

0xad98,	// (0x000a629a) mce_icon_pane

0xad98,	// (0x000a629a) mce_image_pane

0xada1,	// (0x000a62a3) mce_text_pane_ParamLimits

0xada1,	// (0x000a62a3) mce_text_pane

0x26c5,	// (0x0009dbc7) scroll_pane_cp03

0xac9a,	// (0x000a619c) scroll_pane_cp04

0xadb4,	// (0x000a62b6) scroll_pane_cp05_ParamLimits

0xadb4,	// (0x000a62b6) scroll_pane_cp05

0x26cf,	// (0x0009dbd1) mce_header_field_pane_ParamLimits

0x26cf,	// (0x0009dbd1) mce_header_field_pane

0x26f1,	// (0x0009dbf3) mce_header_field_pane_2_ParamLimits

0x26f1,	// (0x0009dbf3) mce_header_field_pane_2

0x2707,	// (0x0009dc09) mce_header_field_pane_3

0x270f,	// (0x0009dc11) list_single_mce_message_pane_ParamLimits

0x270f,	// (0x0009dc11) list_single_mce_message_pane

0x272e,	// (0x0009dc30) list_single_mce_smart_pane_ParamLimits

0x272e,	// (0x0009dc30) list_single_mce_smart_pane

0xadc0,	// (0x000a62c2) input_focus_pane_cp03

0xadc9,	// (0x000a62cb) list_header_data_pane

0x2758,	// (0x0009dc5a) mce_header_field_pane_t1

0x2768,	// (0x0009dc6a) list_single_mce_header_pane_ParamLimits

0x2768,	// (0x0009dc6a) list_single_mce_header_pane

0xadd1,	// (0x000a62d3) list_single_mce_header_pane_t1

0xade0,	// (0x000a62e2) list_single_mce_message_pane_g1

0xade8,	// (0x000a62ea) list_single_mce_message_pane_t1

0x27ac,	// (0x0009dcae) bg_cale_heading_pane_cp01_ParamLimits

0x27ac,	// (0x0009dcae) bg_cale_heading_pane_cp01

0xadf6,	// (0x000a62f8) bg_cale_pane_cp02_ParamLimits

0xadf6,	// (0x000a62f8) bg_cale_pane_cp02

0x27f3,	// (0x0009dcf5) cale_month_corner_pane

0x2812,	// (0x0009dd14) cale_month_day_heading_pane_ParamLimits

0x2812,	// (0x0009dd14) cale_month_day_heading_pane

0x2861,	// (0x0009dd63) cale_month_pane_g1_ParamLimits

0x2861,	// (0x0009dd63) cale_month_pane_g1

0x289d,	// (0x0009dd9f) cale_month_pane_g2_ParamLimits

0x289d,	// (0x0009dd9f) cale_month_pane_g2

0x28d1,	// (0x0009ddd3) cale_month_pane_g3_ParamLimits

0x28d1,	// (0x0009ddd3) cale_month_pane_g3

0x2925,	// (0x0009de27) cale_month_pane_g4_ParamLimits

0x2925,	// (0x0009de27) cale_month_pane_g4

0x2979,	// (0x0009de7b) cale_month_pane_g5_ParamLimits

0x2979,	// (0x0009de7b) cale_month_pane_g5

0x29cd,	// (0x0009decf) cale_month_pane_g6_ParamLimits

0x29cd,	// (0x0009decf) cale_month_pane_g6

0x2a29,	// (0x0009df2b) cale_month_pane_g7_ParamLimits

0x2a29,	// (0x0009df2b) cale_month_pane_g7

0x2a85,	// (0x0009df87) cale_month_pane_g8_ParamLimits

0x2a85,	// (0x0009df87) cale_month_pane_g8

0x2ae1,	// (0x0009dfe3) cale_month_pane_g9_ParamLimits

0x2ae1,	// (0x0009dfe3) cale_month_pane_g9

0x2b31,	// (0x0009e033) cale_month_pane_g10_ParamLimits

0x2b31,	// (0x0009e033) cale_month_pane_g10

0x2b77,	// (0x0009e079) cale_month_pane_g11_ParamLimits

0x2b77,	// (0x0009e079) cale_month_pane_g11

0x2bbb,	// (0x0009e0bd) cale_month_pane_g12_ParamLimits

0x2bbb,	// (0x0009e0bd) cale_month_pane_g12

0x2c03,	// (0x0009e105) cale_month_pane_g13_ParamLimits

0x2c03,	// (0x0009e105) cale_month_pane_g13

0x000c,

0xf296,	// (0x000aa798) cale_month_pane_g_ParamLimits

0xf296,	// (0x000aa798) cale_month_pane_g

0x2c4b,	// (0x0009e14d) cale_month_week_pane

0x2c67,	// (0x0009e169) grid_cale_month_pane_ParamLimits

0x2c67,	// (0x0009e169) grid_cale_month_pane

0x2cad,	// (0x0009e1af) cale_month_day_heading_pane_t1

0x2d2b,	// (0x0009e22d) cale_month_day_heading_pane_t2

0x2db4,	// (0x0009e2b6) cale_month_day_heading_pane_t3

0x2e3d,	// (0x0009e33f) cale_month_day_heading_pane_t4

0x2ec6,	// (0x0009e3c8) cale_month_day_heading_pane_t5

0x2f53,	// (0x0009e455) cale_month_day_heading_pane_t6

0x2fe4,	// (0x0009e4e6) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000aa7b3) cale_month_day_heading_pane_t

0xa95a,	// (0x000a5e5c) bg_cale_side_pane_cp01

0x3075,	// (0x0009e577) cale_month_week_pane_t1

0x308e,	// (0x0009e590) cale_month_week_pane_t2

0x30a7,	// (0x0009e5a9) cale_month_week_pane_t3

0x30c0,	// (0x0009e5c2) cale_month_week_pane_t4

0x30d9,	// (0x0009e5db) cale_month_week_pane_t5

0x30f4,	// (0x0009e5f6) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000aa7c2) cale_month_week_pane_t

0x3115,	// (0x0009e617) cell_cale_month_pane_ParamLimits

0x3115,	// (0x0009e617) cell_cale_month_pane

0x324d,	// (0x0009e74f) cell_cale_month_pane_g1

0x3259,	// (0x0009e75b) cell_cale_month_pane_t1_ParamLimits

0x3259,	// (0x0009e75b) cell_cale_month_pane_t1

0xa968,	// (0x000a5e6a) grid_highlight_pane_cp08

0xa82a,	// (0x000a5d2c) main_smil_g1

0x3279,	// (0x0009e77b) smil_status_pane

0xae35,	// (0x000a6337) smil_text_pane

0xc67e,	// (0x000a7b80) bg_popup_call3_rect_pane_g8

0xc686,	// (0x000a7b88) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x000aaa7b) bg_popup_call3_rect_pane_g

0xc914,	// (0x000a7e16) smil_status_volume_pane_g1

0x328c,	// (0x0009e78e) smil_status_pane_t1

0x484d,	// (0x0009fd4f) volume_smil_pane

0xae3f,	// (0x000a6341) list_smil_text_pane

0x32a3,	// (0x0009e7a5) scroll_pane_cp011

0x32ae,	// (0x0009e7b0) smil_text_list_pane_t1_ParamLimits

0x32ae,	// (0x0009e7b0) smil_text_list_pane_t1

0x3300,	// (0x0009e802) aid_volume_smil_ParamLimits

0x3300,	// (0x0009e802) aid_volume_smil

0xa82a,	// (0x000a5d2c) smil_volume_pane_g1

0xa82a,	// (0x000a5d2c) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000aa7e2) smil_volume_pane_g

0x163f,	// (0x0009cb41) listscroll_cale_day_pane

0xae49,	// (0x000a634b) bg_cale_pane

0xae61,	// (0x000a6363) list_cale_pane

0xae84,	// (0x000a6386) scroll_pane_cp09

0xae95,	// (0x000a6397) cale_bg_pane_g1

0xae9d,	// (0x000a639f) cale_bg_pane_g2

0xaea5,	// (0x000a63a7) cale_bg_pane_g3

0xaead,	// (0x000a63af) cale_bg_pane_g4

0xaeb5,	// (0x000a63b7) cale_bg_pane_g5

0xaebd,	// (0x000a63bf) cale_bg_pane_g6

0xaec5,	// (0x000a63c7) cale_bg_pane_g7

0xaecd,	// (0x000a63cf) cale_bg_pane_g8

0xaed5,	// (0x000a63d7) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000aa7e7) cale_bg_pane_g

0x3322,	// (0x0009e824) list_cale_time_pane_ParamLimits

0x3322,	// (0x0009e824) list_cale_time_pane

0xaedd,	// (0x000a63df) list_cale_time_pane_g1_ParamLimits

0xaedd,	// (0x000a63df) list_cale_time_pane_g1

0xaee9,	// (0x000a63eb) list_cale_time_pane_g2_ParamLimits

0xaee9,	// (0x000a63eb) list_cale_time_pane_g2

0x3337,	// (0x0009e839) list_cale_time_pane_g3_ParamLimits

0x3337,	// (0x0009e839) list_cale_time_pane_g3

0x3345,	// (0x0009e847) list_cale_time_pane_g4_ParamLimits

0x3345,	// (0x0009e847) list_cale_time_pane_g4

0x3353,	// (0x0009e855) list_cale_time_pane_g5_ParamLimits

0x3353,	// (0x0009e855) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000aa7fa) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000aa7fa) list_cale_time_pane_g

0xaf03,	// (0x000a6405) list_cale_time_pane_t1_ParamLimits

0xaf03,	// (0x000a6405) list_cale_time_pane_t1

0xaf40,	// (0x000a6442) list_cale_time_pane_t2_ParamLimits

0xaf40,	// (0x000a6442) list_cale_time_pane_t2

0x3728,	// (0x0009ec2a) aid_blid_cardinal_pane

0x376a,	// (0x0009ec6c) compass_pane_t4

0xaf68,	// (0x000a646a) list_cale_time_pane_t4_ParamLimits

0xaf68,	// (0x000a646a) list_cale_time_pane_t4

0x3778,	// (0x0009ec7a) compass_pane_t5

0x3788,	// (0x0009ec8a) compass_pane_t6

0x3796,	// (0x0009ec98) compass_pane_t7

0xb390,	// (0x000a6892) navi_pane_cc_t1

0xb4e5,	// (0x000a69e7) aid_phob_thumbnail_center_pane

0x3f55,	// (0x0009f457) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000aa807) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000aa807) list_cale_time_pane_t

0x9d9d,	// (0x000a529f) bg_popup_window_pane_cp02_ParamLimits

0x9d9d,	// (0x000a529f) bg_popup_window_pane_cp02

0xaf90,	// (0x000a6492) heading_pane_cp01_ParamLimits

0xaf90,	// (0x000a6492) heading_pane_cp01

0xaf9c,	// (0x000a649e) loc_req_pane_ParamLimits

0xaf9c,	// (0x000a649e) loc_req_pane

0xafac,	// (0x000a64ae) loc_type_pane_ParamLimits

0xafac,	// (0x000a64ae) loc_type_pane

0xafbe,	// (0x000a64c0) loc_type_pane_t1_ParamLimits

0xafbe,	// (0x000a64c0) loc_type_pane_t1

0xafd0,	// (0x000a64d2) loc_type_pane_t2_ParamLimits

0xafd0,	// (0x000a64d2) loc_type_pane_t2

0xafe2,	// (0x000a64e4) loc_type_pane_t3_ParamLimits

0xafe2,	// (0x000a64e4) loc_type_pane_t3

0x0002,

0xf30c,	// (0x000aa80e) loc_type_pane_t_ParamLimits

0xf30c,	// (0x000aa80e) loc_type_pane_t

0xaff4,	// (0x000a64f6) list_loc_req_pane

0xaffe,	// (0x000a6500) scroll_pane_cp012

0x3361,	// (0x0009e863) list_single_loc_request_popup_menu_pane_ParamLimits

0x3361,	// (0x0009e863) list_single_loc_request_popup_menu_pane

0xb009,	// (0x000a650b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb009,	// (0x000a650b) list_single_loc_request_popup_menu_pane_g1

0xb015,	// (0x000a6517) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb015,	// (0x000a6517) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x000aa815) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x000aa815) list_single_loc_request_popup_menu_pane_g

0xb021,	// (0x000a6523) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb021,	// (0x000a6523) list_single_loc_request_popup_menu_pane_t1

0x3373,	// (0x0009e875) bg_popup_window_pane_cp03_ParamLimits

0x3373,	// (0x0009e875) bg_popup_window_pane_cp03

0x3381,	// (0x0009e883) heading_loc_req_pane_ParamLimits

0x3381,	// (0x0009e883) heading_loc_req_pane

0x338d,	// (0x0009e88f) popup_dyc_status_message_window_g1_ParamLimits

0x338d,	// (0x0009e88f) popup_dyc_status_message_window_g1

0x3399,	// (0x0009e89b) popup_dyc_status_message_window_t1_ParamLimits

0x3399,	// (0x0009e89b) popup_dyc_status_message_window_t1

0x33ab,	// (0x0009e8ad) popup_dyc_status_message_window_t2_ParamLimits

0x33ab,	// (0x0009e8ad) popup_dyc_status_message_window_t2

0x33bd,	// (0x0009e8bf) popup_dyc_status_message_window_t3_ParamLimits

0x33bd,	// (0x0009e8bf) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x000aa81a) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x000aa81a) popup_dyc_status_message_window_t

0xa146,	// (0x000a5648) bg_heading_pane_cp01

0xb037,	// (0x000a6539) heading_loc_req_pane_g1

0xb03f,	// (0x000a6541) heading_loc_req_pane_g2

0xb047,	// (0x000a6549) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x000aa821) heading_loc_req_pane_g

0xb04f,	// (0x000a6551) heading_loc_req_pane_t1

0xb05f,	// (0x000a6561) bg_popup_sub_pane_cp01_ParamLimits

0xb05f,	// (0x000a6561) bg_popup_sub_pane_cp01

0xb06d,	// (0x000a656f) popup_cale_events_window_g1_ParamLimits

0xb06d,	// (0x000a656f) popup_cale_events_window_g1

0xb08d,	// (0x000a658f) popup_cale_events_window_g2_ParamLimits

0xb08d,	// (0x000a658f) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x000aa855) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x000aa855) popup_cale_events_window_g

0xb0ad,	// (0x000a65af) popup_cale_events_window_t1_ParamLimits

0xb0ad,	// (0x000a65af) popup_cale_events_window_t1

0xb0bf,	// (0x000a65c1) popup_cale_events_window_t2_ParamLimits

0xb0bf,	// (0x000a65c1) popup_cale_events_window_t2

0xb0fd,	// (0x000a65ff) popup_cale_events_window_t3_ParamLimits

0xb0fd,	// (0x000a65ff) popup_cale_events_window_t3

0xb143,	// (0x000a6645) popup_cale_events_window_t4_ParamLimits

0xb143,	// (0x000a6645) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x000aa85a) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x000aa85a) popup_cale_events_window_t

0x34c4,	// (0x0009e9c6) call_type_pane

0xb333,	// (0x000a6835) popup_call_status_window_g1

0x34d0,	// (0x0009e9d2) popup_call_status_window_g2

0x34dc,	// (0x0009e9de) popup_call_status_window_g3

0x0002,

0xf361,	// (0x000aa863) popup_call_status_window_g

0xb179,	// (0x000a667b) call_type_pane_g1

0xb182,	// (0x000a6684) call_type_pane_g2

0x0001,

0xf368,	// (0x000aa86a) call_type_pane_g

0xa146,	// (0x000a5648) bg_popup_sub_pane_cp02

0xb18b,	// (0x000a668d) listscroll_popup_wml_pane

0xb193,	// (0x000a6695) list_wml_pane

0xb19d,	// (0x000a669f) scroll_pane_cp013

0xb1a8,	// (0x000a66aa) list_single_graphic_popup_wml_pane_ParamLimits

0xb1a8,	// (0x000a66aa) list_single_graphic_popup_wml_pane

0xa82a,	// (0x000a5d2c) list_single_graphic_popup_wml_pane_g1

0xb1bc,	// (0x000a66be) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x000aa86f) list_single_graphic_popup_wml_pane_g

0xb1c4,	// (0x000a66c6) list_single_graphic_popup_wml_pane_t1

0xb1da,	// (0x000a66dc) aid_call_pane

0xa708,	// (0x000a5c0a) popup_clock_analogue_window_g1

0xa708,	// (0x000a5c0a) popup_clock_analogue_window_g2

0x34e8,	// (0x0009e9ea) popup_clock_analogue_window_g3

0x34e8,	// (0x0009e9ea) popup_clock_analogue_window_g4

0xa82a,	// (0x000a5d2c) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x000aa874) popup_clock_analogue_window_g

0x34f0,	// (0x0009e9f2) popup_clock_analogue_window_t1

0x34fe,	// (0x0009ea00) clock_digital_number_pane_ParamLimits

0x34fe,	// (0x0009ea00) clock_digital_number_pane

0x350a,	// (0x0009ea0c) clock_digital_number_pane_cp02_ParamLimits

0x350a,	// (0x0009ea0c) clock_digital_number_pane_cp02

0x3516,	// (0x0009ea18) clock_digital_number_pane_cp03_ParamLimits

0x3516,	// (0x0009ea18) clock_digital_number_pane_cp03

0x3522,	// (0x0009ea24) clock_digital_number_pane_cp04_ParamLimits

0x3522,	// (0x0009ea24) clock_digital_number_pane_cp04

0x352e,	// (0x0009ea30) clock_digital_separator_pane_ParamLimits

0x352e,	// (0x0009ea30) clock_digital_separator_pane

0x353a,	// (0x0009ea3c) popup_clock_digital_window_t1

0xa82a,	// (0x000a5d2c) clock_digital_number_pane_g1

0xa82a,	// (0x000a5d2c) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000aa7e2) clock_digital_number_pane_g

0xa82a,	// (0x000a5d2c) clock_digital_separator_pane_g1

0xa82a,	// (0x000a5d2c) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000aa7e2) clock_digital_separator_pane_g

0xa146,	// (0x000a5648) bg_popup_window_pane_cp04

0xb1e2,	// (0x000a66e4) heading_pane_cp03

0xb1ea,	// (0x000a66ec) listscroll_popup_gms_pane

0xb1f2,	// (0x000a66f4) grid_large_graphic_popup_pane

0xb1fc,	// (0x000a66fe) listscroll_popup_gms_pane_g1

0xb204,	// (0x000a6706) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x000aa87f) listscroll_popup_gms_pane_g

0xac9a,	// (0x000a619c) scroll_pane_cp014

0x3557,	// (0x0009ea59) cell_large_graphic_popup_pane_ParamLimits

0x3557,	// (0x0009ea59) cell_large_graphic_popup_pane

0x3571,	// (0x0009ea73) cell_large_graphic_popup_pane_g1_ParamLimits

0x3571,	// (0x0009ea73) cell_large_graphic_popup_pane_g1

0xb20c,	// (0x000a670e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb20c,	// (0x000a670e) cell_large_graphic_popup_pane_g2

0xb218,	// (0x000a671a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb218,	// (0x000a671a) cell_large_graphic_popup_pane_g3

0xb225,	// (0x000a6727) cell_large_graphic_popup_pane_g4_ParamLimits

0xb225,	// (0x000a6727) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x000aa884) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x000aa884) cell_large_graphic_popup_pane_g

0xb235,	// (0x000a6737) grid_highlight_pane_cp010

0xa82a,	// (0x000a5d2c) bg_popup_call_pane_g1

0xb23f,	// (0x000a6741) list_single_graphic_popup_conf_pane_ParamLimits

0xb23f,	// (0x000a6741) list_single_graphic_popup_conf_pane

0xb251,	// (0x000a6753) list_highlight_pane_cp01

0xb25a,	// (0x000a675c) list_single_graphic_popup_conf_pane_g1

0xb262,	// (0x000a6764) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000aa88d) list_single_graphic_popup_conf_pane_g

0xb26a,	// (0x000a676c) list_single_graphic_popup_conf_pane_t1

0xb278,	// (0x000a677a) linegrid_cams_pane_g1

0x357d,	// (0x0009ea7f) linegrid_cams_pane_g2

0xa99b,	// (0x000a5e9d) linegrid_cams_pane_g3

0xb281,	// (0x000a6783) linegrid_cams_pane_g4

0x3586,	// (0x0009ea88) linegrid_cams_pane_g5

0x358f,	// (0x0009ea91) linegrid_cams_pane_g6

0xa9a4,	// (0x000a5ea6) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000aa892) linegrid_cams_pane_g

0xb28a,	// (0x000a678c) popup_clock_analogue_window

0xb28a,	// (0x000a678c) popup_clock_digital_window

0xa146,	// (0x000a5648) popup_phob_thumbnail_window

0xa82a,	// (0x000a5d2c) call_video_uplink_pane_g1

0xb293,	// (0x000a6795) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000aa8a1) call_video_uplink_pane_g

0xb29b,	// (0x000a679d) video_uplink_pane

0xb2a3,	// (0x000a67a5) mce_image_pane_g1

0x359a,	// (0x0009ea9c) mce_image_pane_g2

0x35a4,	// (0x0009eaa6) mce_image_pane_g3

0x35ae,	// (0x0009eab0) mce_image_pane_g4

0x35b6,	// (0x0009eab8) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000aa8a6) mce_image_pane_g

0xb2ad,	// (0x000a67af) control_top_pane_stacon_cp01_ParamLimits

0xb2ad,	// (0x000a67af) control_top_pane_stacon_cp01

0xb2c1,	// (0x000a67c3) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2c1,	// (0x000a67c3) uni_indicator_pane_stacon_cp01

0xb2d2,	// (0x000a67d4) bg_popup_sub_pane_cp03

0x35be,	// (0x0009eac0) chi_dic_find_pane

0x35c6,	// (0x0009eac8) listscroll_chi_dic_pane

0x35cf,	// (0x0009ead1) main_pane_chidic_g1

0x35e2,	// (0x0009eae4) chi_dic_find_pane_t1

0xb2dc,	// (0x000a67de) find_chidic_pane

0xb2e5,	// (0x000a67e7) chi_dic_list_pane_ParamLimits

0xb2e5,	// (0x000a67e7) chi_dic_list_pane

0xb2f6,	// (0x000a67f8) scroll_pane_cp020

0x35f0,	// (0x0009eaf2) find_chidic_pane_t1

0xa146,	// (0x000a5648) input_focus_pane_cp06

0x35ff,	// (0x0009eb01) list_chi_dic_pane_ParamLimits

0x35ff,	// (0x0009eb01) list_chi_dic_pane

0x3614,	// (0x0009eb16) list_chi_dic_pane_t1_ParamLimits

0x3614,	// (0x0009eb16) list_chi_dic_pane_t1

0xa146,	// (0x000a5648) list_highlight_pane_cp020

0xb2fe,	// (0x000a6800) bg_cale_heading_pane_g1

0x3627,	// (0x0009eb29) bg_cale_heading_pane_g2

0x362f,	// (0x0009eb31) bg_cale_heading_pane_g3

0x3637,	// (0x0009eb39) bg_cale_heading_pane_g4

0x3641,	// (0x0009eb43) bg_cale_heading_pane_g5

0x364b,	// (0x0009eb4d) bg_cale_heading_pane_g6

0x3653,	// (0x0009eb55) bg_cale_heading_pane_g7

0x365b,	// (0x0009eb5d) bg_cale_heading_pane_g8

0x3665,	// (0x0009eb67) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000aa8b1) bg_cale_heading_pane_g

0xb2fe,	// (0x000a6800) bg_cale_side_pane_g1

0x366f,	// (0x0009eb71) bg_cale_side_pane_g2

0x3679,	// (0x0009eb7b) bg_cale_side_pane_g3

0x3683,	// (0x0009eb85) bg_cale_side_pane_g4

0x368d,	// (0x0009eb8f) bg_cale_side_pane_g5

0x3697,	// (0x0009eb99) bg_cale_side_pane_g6

0x36a1,	// (0x0009eba3) bg_cale_side_pane_g7

0x36ab,	// (0x0009ebad) bg_cale_side_pane_g8

0x36b3,	// (0x0009ebb5) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000aa8c4) bg_cale_side_pane_g

0x36bb,	// (0x0009ebbd) popup_call_status_window_ParamLimits

0x36bb,	// (0x0009ebbd) popup_call_status_window

0xb306,	// (0x000a6808) stacon_top_pane

0xb30e,	// (0x000a6810) status_pane_ParamLimits

0xb30e,	// (0x000a6810) status_pane

0xb323,	// (0x000a6825) status_small_pane

0xb32b,	// (0x000a682d) control_pane

0xa146,	// (0x000a5648) stacon_bottom_pane

0xb341,	// (0x000a6843) list_single_mce_smart_pane_t1_ParamLimits

0xb341,	// (0x000a6843) list_single_mce_smart_pane_t1

0xb354,	// (0x000a6856) list_single_mce_smart_pane_t2_ParamLimits

0xb354,	// (0x000a6856) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000aa8d7) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000aa8d7) list_single_mce_smart_pane_t

0x36c7,	// (0x0009ebc9) compass_pane

0x36d2,	// (0x0009ebd4) main_location2_pane_t1

0x36e8,	// (0x0009ebea) main_location2_pane_t2

0x36fe,	// (0x0009ec00) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000aa8dc) main_location2_pane_t

0xb373,	// (0x000a6875) compass_pane_g1_ParamLimits

0xb373,	// (0x000a6875) compass_pane_g1

0x374c,	// (0x0009ec4e) compass_pane_t1

0x375b,	// (0x0009ec5d) compass_pane_t2

0x0005,

0xf3e3,	// (0x000aa8e5) compass_pane_t

0x37a6,	// (0x0009eca8) text_secondary_cp61

0xb387,	// (0x000a6889) navi_pane_cams_g5

0xb3aa,	// (0x000a68ac) navi_pane_im_t1

0xb3b8,	// (0x000a68ba) navi_pane_mp_g1_ParamLimits

0xb3b8,	// (0x000a68ba) navi_pane_mp_g1

0xb3cc,	// (0x000a68ce) navi_pane_mp_g2_ParamLimits

0xb3cc,	// (0x000a68ce) navi_pane_mp_g2

0xb3d8,	// (0x000a68da) navi_pane_mp_g3_ParamLimits

0xb3d8,	// (0x000a68da) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000aa8f9) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000aa8f9) navi_pane_mp_g

0xb3e4,	// (0x000a68e6) navi_pane_mp_t1

0xb3f2,	// (0x000a68f4) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000aa900) navi_pane_mp_t

0xb42e,	// (0x000a6930) navi_pane_vt_g1

0xb3e4,	// (0x000a68e6) navi_pane_vt_t1

0xb436,	// (0x000a6938) navi_slider_pane

0xb43e,	// (0x000a6940) zooming_pane

0xb446,	// (0x000a6948) navi_slider_pane_g1

0x38db,	// (0x0009eddd) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000aa907) navi_slider_pane_g

0xb46a,	// (0x000a696c) aid_levels_zoom

0xb472,	// (0x000a6974) zooming_pane_g1

0xb47a,	// (0x000a697c) zooming_pane_g2

0xb47a,	// (0x000a697c) zooming_pane_g3

0x0002,

0xf414,	// (0x000aa916) zooming_pane_g

0xb482,	// (0x000a6984) level_10_zoom

0xb48b,	// (0x000a698d) level_11_zoom

0xb494,	// (0x000a6996) level_1_zoom

0xb49d,	// (0x000a699f) level_2_zoom

0xb4a6,	// (0x000a69a8) level_3_zoom

0xb4af,	// (0x000a69b1) level_4_zoom

0xb4b8,	// (0x000a69ba) level_5_zoom

0xb4c1,	// (0x000a69c3) level_6_zoom

0xb4ca,	// (0x000a69cc) level_7_zoom

0xb4d3,	// (0x000a69d5) level_8_zoom

0xb4dc,	// (0x000a69de) level_9_zoom

0xb4ed,	// (0x000a69ef) popup_phob_thumbnail_window_g1

0xb4f5,	// (0x000a69f7) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x000aa91d) popup_phob_thumbnail_window_g

0xc7e4,	// (0x000a7ce6) level_1_location

0xc7ec,	// (0x000a7cee) level_2_location

0xc7f4,	// (0x000a7cf6) level_3_location

0xc7fc,	// (0x000a7cfe) level_4_location

0xb43e,	// (0x000a6940) level_5_location

0x38ed,	// (0x0009edef) mce_icon_pane_g1

0x38f5,	// (0x0009edf7) mce_icon_pane_g2

0x0001,

0xf420,	// (0x000aa922) mce_icon_pane_g

0x38fd,	// (0x0009edff) main_mup_pane_g1_ParamLimits

0x38fd,	// (0x0009edff) main_mup_pane_g1

0x3915,	// (0x0009ee17) main_mup_pane_g2_ParamLimits

0x3915,	// (0x0009ee17) main_mup_pane_g2

0x3931,	// (0x0009ee33) main_mup_pane_g3_ParamLimits

0x3931,	// (0x0009ee33) main_mup_pane_g3

0x394d,	// (0x0009ee4f) main_mup_pane_g4_ParamLimits

0x394d,	// (0x0009ee4f) main_mup_pane_g4

0x3969,	// (0x0009ee6b) main_mup_pane_g5_ParamLimits

0x3969,	// (0x0009ee6b) main_mup_pane_g5

0x398a,	// (0x0009ee8c) main_mup_pane_g6_ParamLimits

0x398a,	// (0x0009ee8c) main_mup_pane_g6

0x39aa,	// (0x0009eeac) main_mup_pane_g7_ParamLimits

0x39aa,	// (0x0009eeac) main_mup_pane_g7

0x39ce,	// (0x0009eed0) main_mup_pane_g8_ParamLimits

0x39ce,	// (0x0009eed0) main_mup_pane_g8

0x39f2,	// (0x0009eef4) main_mup_pane_g9_ParamLimits

0x39f2,	// (0x0009eef4) main_mup_pane_g9

0x3a15,	// (0x0009ef17) main_mup_pane_g10_ParamLimits

0x3a15,	// (0x0009ef17) main_mup_pane_g10

0x3a38,	// (0x0009ef3a) main_mup_pane_g11_ParamLimits

0x3a38,	// (0x0009ef3a) main_mup_pane_g11

0x3a58,	// (0x0009ef5a) main_mup_pane_g12_ParamLimits

0x3a58,	// (0x0009ef5a) main_mup_pane_g12

0x3a66,	// (0x0009ef68) main_mup_pane_g13_ParamLimits

0x3a66,	// (0x0009ef68) main_mup_pane_g13

0x000c,

0xf425,	// (0x000aa927) main_mup_pane_g_ParamLimits

0xf425,	// (0x000aa927) main_mup_pane_g

0x3a7c,	// (0x0009ef7e) main_mup_pane_t1_ParamLimits

0x3a7c,	// (0x0009ef7e) main_mup_pane_t1

0x3a9b,	// (0x0009ef9d) main_mup_pane_t2_ParamLimits

0x3a9b,	// (0x0009ef9d) main_mup_pane_t2

0x3ab5,	// (0x0009efb7) main_mup_pane_t3_ParamLimits

0x3ab5,	// (0x0009efb7) main_mup_pane_t3

0x3acf,	// (0x0009efd1) main_mup_pane_t4_ParamLimits

0x3acf,	// (0x0009efd1) main_mup_pane_t4

0x3ae1,	// (0x0009efe3) main_mup_pane_t5_ParamLimits

0x3ae1,	// (0x0009efe3) main_mup_pane_t5

0x3af3,	// (0x0009eff5) main_mup_pane_t6_ParamLimits

0x3af3,	// (0x0009eff5) main_mup_pane_t6

0x0005,

0xf440,	// (0x000aa942) main_mup_pane_t_ParamLimits

0xf440,	// (0x000aa942) main_mup_pane_t

0x3b09,	// (0x0009f00b) mup_progress_pane_ParamLimits

0x3b09,	// (0x0009f00b) mup_progress_pane

0x3b15,	// (0x0009f017) mup_visualizer_pane_ParamLimits

0x3b15,	// (0x0009f017) mup_visualizer_pane

0x3b53,	// (0x0009f055) mup_volume_pane_ParamLimits

0x3b53,	// (0x0009f055) mup_volume_pane

0xb333,	// (0x000a6835) mup_visualizer_pane_g1_ParamLimits

0xb333,	// (0x000a6835) mup_visualizer_pane_g1

0xb333,	// (0x000a6835) mup_visualizer_pane_g2_ParamLimits

0xb333,	// (0x000a6835) mup_visualizer_pane_g2

0xb373,	// (0x000a6875) mup_visualizer_pane_g3_ParamLimits

0xb373,	// (0x000a6875) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x000aa94f) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x000aa94f) mup_visualizer_pane_g

0xa82a,	// (0x000a5d2c) mup_volume_pane_g1

0xb505,	// (0x000a6a07) mup_volume_pane_g2

0x0001,

0xf454,	// (0x000aa956) mup_volume_pane_g

0xa82a,	// (0x000a5d2c) mup_progress_pane_g1

0xb50e,	// (0x000a6a10) mup_progress_pane_g2

0xb517,	// (0x000a6a19) mup_progress_pane_g3

0x0002,

0xf459,	// (0x000aa95b) mup_progress_pane_g

0xa146,	// (0x000a5648) bg_popup_window_pane_cp05

0xb520,	// (0x000a6a22) heading_pane_cp02_ParamLimits

0xb520,	// (0x000a6a22) heading_pane_cp02

0xb53c,	// (0x000a6a3e) list_popup_blid_pane

0xb544,	// (0x000a6a46) list_blid_sat_info_pane_ParamLimits

0xb544,	// (0x000a6a46) list_blid_sat_info_pane

0xb557,	// (0x000a6a59) list_blid_sat_info_pane_g1

0xb55f,	// (0x000a6a61) list_blid_sat_info_pane_t1

0x3c72,	// (0x0009f174) mup_equalizer_pane_ParamLimits

0x3c72,	// (0x0009f174) mup_equalizer_pane

0x3c93,	// (0x0009f195) mup_equalizer_pane_cp1_ParamLimits

0x3c93,	// (0x0009f195) mup_equalizer_pane_cp1

0x3cb4,	// (0x0009f1b6) mup_equalizer_pane_cp2_ParamLimits

0x3cb4,	// (0x0009f1b6) mup_equalizer_pane_cp2

0x3cd5,	// (0x0009f1d7) mup_equalizer_pane_cp3_ParamLimits

0x3cd5,	// (0x0009f1d7) mup_equalizer_pane_cp3

0x3cfa,	// (0x0009f1fc) mup_equalizer_pane_cp4_ParamLimits

0x3cfa,	// (0x0009f1fc) mup_equalizer_pane_cp4

0x3d1f,	// (0x0009f221) mup_equalizer_pane_cp5

0x3d37,	// (0x0009f239) mup_equalizer_pane_cp6

0x3d4f,	// (0x0009f251) mup_equalizer_pane_cp7

0xc6fe,	// (0x000a7c00) bg_popup_call_poc_act_pane_g9

0xc706,	// (0x000a7c08) bg_popup_call_poc_act_pane_g10

0xc70e,	// (0x000a7c10) bg_popup_call_poc_act_pane_g11

0x000a,

0xa710,	// (0x000a5c12) mup_scale_pane

0xa82a,	// (0x000a5d2c) mup_scale_pane_g1

0xb56d,	// (0x000a6a6f) mup_scale_pane_g2

0x0006,

0xf475,	// (0x000aa977) mup_scale_pane_g

0xb591,	// (0x000a6a93) msg_data_pane

0xb599,	// (0x000a6a9b) scroll_pane_cp017

0x3d79,	// (0x0009f27b) bg_list_pane_cp04_ParamLimits

0x3d79,	// (0x0009f27b) bg_list_pane_cp04

0xb5a1,	// (0x000a6aa3) msg_data_pane_g1

0x3d99,	// (0x0009f29b) msg_data_pane_g2

0x3da3,	// (0x0009f2a5) msg_data_pane_g3

0x3dad,	// (0x0009f2af) msg_data_pane_g4

0x3db5,	// (0x0009f2b7) msg_data_pane_g5

0x3dbd,	// (0x0009f2bf) msg_data_pane_g6

0x3dc5,	// (0x0009f2c7) msg_data_pane_g7

0x0006,

0xf484,	// (0x000aa986) msg_data_pane_g

0x3dcd,	// (0x0009f2cf) msg_text_pane_ParamLimits

0x3dcd,	// (0x0009f2cf) msg_text_pane

0x3df3,	// (0x0009f2f5) qrid_highlight_pane_cp011_ParamLimits

0x3df3,	// (0x0009f2f5) qrid_highlight_pane_cp011

0xa146,	// (0x000a5648) msg_body_pane

0xa146,	// (0x000a5648) msg_header_pane

0xb5a9,	// (0x000a6aab) input_focus_pane_cp07

0xa226,	// (0x000a5728) msg_header_pane_t1_ParamLimits

0xa226,	// (0x000a5728) msg_header_pane_t1

0xa238,	// (0x000a573a) msg_header_pane_t2_ParamLimits

0xa238,	// (0x000a573a) msg_header_pane_t2

0x0001,

0xf498,	// (0x000aa99a) msg_header_pane_t_ParamLimits

0xf498,	// (0x000aa99a) msg_header_pane_t

0xb5be,	// (0x000a6ac0) msg_body_pane_g1

0x3e22,	// (0x0009f324) msg_body_pane_t1_ParamLimits

0x3e22,	// (0x0009f324) msg_body_pane_t1

0xa24a,	// (0x000a574c) msg_body_pane_t2_ParamLimits

0xa24a,	// (0x000a574c) msg_body_pane_t2

0xa25c,	// (0x000a575e) msg_body_pane_t3_ParamLimits

0xa25c,	// (0x000a575e) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000aa99f) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000aa99f) msg_body_pane_t

0x3ea5,	// (0x0009f3a7) main_viewer_pane_g1_ParamLimits

0x3ea5,	// (0x0009f3a7) main_viewer_pane_g1

0x3eb1,	// (0x0009f3b3) main_viewer_pane_g2_ParamLimits

0x3eb1,	// (0x0009f3b3) main_viewer_pane_g2

0x3ebd,	// (0x0009f3bf) main_viewer_pane_g3_ParamLimits

0x3ebd,	// (0x0009f3bf) main_viewer_pane_g3

0x3ece,	// (0x0009f3d0) main_viewer_pane_g4_ParamLimits

0x3ece,	// (0x0009f3d0) main_viewer_pane_g4

0x3edf,	// (0x0009f3e1) main_viewer_pane_g5_ParamLimits

0x3edf,	// (0x0009f3e1) main_viewer_pane_g5

0x3edf,	// (0x0009f3e1) main_viewer_pane_g7_ParamLimits

0x3edf,	// (0x0009f3e1) main_viewer_pane_g7

0x3ef1,	// (0x0009f3f3) main_viewer_pane_g8_ParamLimits

0x3ef1,	// (0x0009f3f3) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000aa9af) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000aa9af) main_viewer_pane_g

0xb5c6,	// (0x000a6ac8) viewer_content_pane_ParamLimits

0xb5c6,	// (0x000a6ac8) viewer_content_pane

0x3f29,	// (0x0009f42b) main_postcard_pane_g1_ParamLimits

0x3f29,	// (0x0009f42b) main_postcard_pane_g1

0x3f37,	// (0x0009f439) main_postcard_pane_g2_ParamLimits

0x3f37,	// (0x0009f439) main_postcard_pane_g2

0x3f45,	// (0x0009f447) main_postcard_pane_g3_ParamLimits

0x3f45,	// (0x0009f447) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000aa9c0) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000aa9c0) main_postcard_pane_g

0x3f55,	// (0x0009f457) main_postcard_pane_g4

0xc927,	// (0x000a7e29) smil_status_volume_pane_g2

0x3f81,	// (0x0009f483) postcard_pane_ParamLimits

0x3f81,	// (0x0009f483) postcard_pane

0xb333,	// (0x000a6835) postcard_pane_g1_ParamLimits

0xb333,	// (0x000a6835) postcard_pane_g1

0x3fbb,	// (0x0009f4bd) postcard_pane_g2_ParamLimits

0x3fbb,	// (0x0009f4bd) postcard_pane_g2

0x3fc7,	// (0x0009f4c9) postcard_pane_g3_ParamLimits

0x3fc7,	// (0x0009f4c9) postcard_pane_g3

0xb5d4,	// (0x000a6ad6) postcard_pane_g4_ParamLimits

0xb5d4,	// (0x000a6ad6) postcard_pane_g4

0x3fd3,	// (0x0009f4d5) postcard_pane_g5_ParamLimits

0x3fd3,	// (0x0009f4d5) postcard_pane_g5

0x3fdf,	// (0x0009f4e1) postcard_pane_g6_ParamLimits

0x3fdf,	// (0x0009f4e1) postcard_pane_g6

0xb5e2,	// (0x000a6ae4) postcard_pane_g7_ParamLimits

0xb5e2,	// (0x000a6ae4) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000aa9cd) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000aa9cd) postcard_pane_g

0x3fed,	// (0x0009f4ef) main_mp2_pane_g1_ParamLimits

0x3fed,	// (0x0009f4ef) main_mp2_pane_g1

0x3ffb,	// (0x0009f4fd) main_mp2_pane_g2_ParamLimits

0x3ffb,	// (0x0009f4fd) main_mp2_pane_g2

0x4007,	// (0x0009f509) main_mp2_pane_g3_ParamLimits

0x4007,	// (0x0009f509) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000aa9dc) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000aa9dc) main_mp2_pane_g

0x4013,	// (0x0009f515) main_mp2_pane_t1_ParamLimits

0x4013,	// (0x0009f515) main_mp2_pane_t1

0x402a,	// (0x0009f52c) main_mp2_pane_t2_ParamLimits

0x402a,	// (0x0009f52c) main_mp2_pane_t2

0x403e,	// (0x0009f540) main_mp2_pane_t3_ParamLimits

0x403e,	// (0x0009f540) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000aa9e3) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000aa9e3) main_mp2_pane_t

0xb5f0,	// (0x000a6af2) pec_content_pane_ParamLimits

0xb5f0,	// (0x000a6af2) pec_content_pane

0xac9a,	// (0x000a619c) scroll_pane_cp015

0xb602,	// (0x000a6b04) pec_attribute_pane_ParamLimits

0xb602,	// (0x000a6b04) pec_attribute_pane

0x4050,	// (0x0009f552) pec_content_pane_g1_ParamLimits

0x4050,	// (0x0009f552) pec_content_pane_g1

0xb612,	// (0x000a6b14) pec_content_pane_t1_ParamLimits

0xb612,	// (0x000a6b14) pec_content_pane_t1

0xb624,	// (0x000a6b26) pec_content_pane_t2_ParamLimits

0xb624,	// (0x000a6b26) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000aa9ea) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000aa9ea) pec_content_pane_t

0x405c,	// (0x0009f55e) list_single_graphic_pane_cp01_ParamLimits

0x405c,	// (0x0009f55e) list_single_graphic_pane_cp01

0xa710,	// (0x000a5c12) bg_popup_sub_pane_cp04

0xb636,	// (0x000a6b38) popup_mup_playback_window_g1

0xb642,	// (0x000a6b44) popup_mup_playback_window_t1

0xb657,	// (0x000a6b59) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000aa9ef) popup_mup_playback_window_t

0xb68e,	// (0x000a6b90) main_image_pane_g1_ParamLimits

0xb68e,	// (0x000a6b90) main_image_pane_g1

0xb6d1,	// (0x000a6bd3) scroll_pane_cp018_ParamLimits

0xb6d1,	// (0x000a6bd3) scroll_pane_cp018

0xb6e9,	// (0x000a6beb) scroll_pane_cp016_ParamLimits

0xb6e9,	// (0x000a6beb) scroll_pane_cp016

0x40ea,	// (0x0009f5ec) smil2_image_pane_ParamLimits

0x40ea,	// (0x0009f5ec) smil2_image_pane

0x4120,	// (0x0009f622) smil2_root_pane_ParamLimits

0x4120,	// (0x0009f622) smil2_root_pane

0x414c,	// (0x0009f64e) smil2_text_pane_ParamLimits

0x414c,	// (0x0009f64e) smil2_text_pane

0xa146,	// (0x000a5648) bg_list_pane_cp06

0xb725,	// (0x000a6c27) grid_radio_pane

0xa146,	// (0x000a5648) bg_popup_window_pane_cp06

0xb72f,	// (0x000a6c31) main_fmradio_pane_t1

0xb1e2,	// (0x000a66e4) heading_pane_cp04

0xb73d,	// (0x000a6c3f) main_fmradio_pane_t2

0xc716,	// (0x000a7c18) popup_cale_lunar_info_window_g1

0xb74b,	// (0x000a6c4d) main_fmradio_pane_t3

0xc71e,	// (0x000a7c20) popup_cale_lunar_info_window_g2

0xb75b,	// (0x000a6c5d) main_fmradio_pane_t4

0x0001,

0xb769,	// (0x000a6c6b) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000aaaca) popup_cale_lunar_info_window_g

0xf502,	// (0x000aaa04) main_fmradio_pane_t

0xb777,	// (0x000a6c79) wait_bar_pane_cp03

0xaf2b,	// (0x000a642d) cell_fmradio_pane_ParamLimits

0xaf2b,	// (0x000a642d) cell_fmradio_pane

0xb5e2,	// (0x000a6ae4) cell_fmradio_pane_g1_ParamLimits

0xb5e2,	// (0x000a6ae4) cell_fmradio_pane_g1

0xa146,	// (0x000a5648) grid_highlight_pane_cp011

0xb77f,	// (0x000a6c81) poc_content_pane_ParamLimits

0xb77f,	// (0x000a6c81) poc_content_pane

0xb791,	// (0x000a6c93) scroll_pane_cp019

0x418c,	// (0x0009f68e) popup_call_poc_act_window_ParamLimits

0x418c,	// (0x0009f68e) popup_call_poc_act_window

0x4199,	// (0x0009f69b) popup_call_poc_inact_window_ParamLimits

0x4199,	// (0x0009f69b) popup_call_poc_inact_window

0xf59f,	// (0x000aaaa1) bg_popup_call_poc_act_pane_g

0xc68e,	// (0x000a7b90) bg_popup_call_poc_inact_pane_g1

0xc696,	// (0x000a7b98) bg_popup_call_poc_inact_pane_g2

0xb799,	// (0x000a6c9b) popup_call_poc_act_window_g2

0xc69e,	// (0x000a7ba0) bg_popup_call_poc_inact_pane_g3

0xc6a6,	// (0x000a7ba8) bg_popup_call_poc_inact_pane_g4

0xc6ae,	// (0x000a7bb0) bg_popup_call_poc_inact_pane_g5

0xb7a1,	// (0x000a6ca3) popup_call_poc_act_window_t1_ParamLimits

0xb7a1,	// (0x000a6ca3) popup_call_poc_act_window_t1

0xb7c9,	// (0x000a6ccb) popup_call_poc_act_window_t2_ParamLimits

0xb7c9,	// (0x000a6ccb) popup_call_poc_act_window_t2

0xb7f1,	// (0x000a6cf3) popup_call_poc_act_window_t3_ParamLimits

0xb7f1,	// (0x000a6cf3) popup_call_poc_act_window_t3

0xb819,	// (0x000a6d1b) popup_call_poc_act_window_t4_ParamLimits

0xb819,	// (0x000a6d1b) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x000aaa0f) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x000aaa0f) popup_call_poc_act_window_t

0xc6b6,	// (0x000a7bb8) bg_popup_call_poc_inact_pane_g6

0xc6be,	// (0x000a7bc0) bg_popup_call_poc_inact_pane_g7

0xc6c6,	// (0x000a7bc8) bg_popup_call_poc_inact_pane_g8

0xb82b,	// (0x000a6d2d) popup_call_poc_inact_window_g2

0xc6ce,	// (0x000a7bd0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000aaa8e) bg_popup_call_poc_inact_pane_g

0xb833,	// (0x000a6d35) popup_call_poc_inact_window_t1_ParamLimits

0xb833,	// (0x000a6d35) popup_call_poc_inact_window_t1

0xb848,	// (0x000a6d4a) popup_call_poc_inact_window_t2_ParamLimits

0xb848,	// (0x000a6d4a) popup_call_poc_inact_window_t2

0xb85d,	// (0x000a6d5f) popup_call_poc_inact_window_t3_ParamLimits

0xb85d,	// (0x000a6d5f) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x000aaa18) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x000aaa18) popup_call_poc_inact_window_t

0xc89a,	// (0x000a7d9c) context_pane_ParamLimits

0x47a8,	// (0x0009fcaa) signal_pane_ParamLimits

0xb43e,	// (0x000a6940) main_call2_pane

0xc888,	// (0x000a7d8a) popup_phob_thumbnail2_window_ParamLimits

0xc888,	// (0x000a7d8a) popup_phob_thumbnail2_window

0x3e53,	// (0x0009f355) aid_hotspot_pointer_arrow_pane

0x3e5b,	// (0x0009f35d) aid_hotspot_pointer_hand_pane

0x44be,	// (0x0009f9c0) phob_pre_status_pane_g5

0x1e9f,	// (0x0009d3a1) cams_zoom_pane_ParamLimits

0x1eab,	// (0x0009d3ad) image_vga_pane_ParamLimits

0x1eba,	// (0x0009d3bc) main_camera_pane_g1_ParamLimits

0x1ec8,	// (0x0009d3ca) main_camera_pane_g2_ParamLimits

0x1ed4,	// (0x0009d3d6) main_camera_pane_g3_ParamLimits

0x1ee2,	// (0x0009d3e4) main_camera_pane_g4_ParamLimits

0x1ef0,	// (0x0009d3f2) main_camera_pane_g5_ParamLimits

0x1efe,	// (0x0009d400) main_camera_pane_g6_ParamLimits

0x1f0c,	// (0x0009d40e) main_camera_pane_g7_ParamLimits

0xf215,	// (0x000aa717) main_camera_pane_g_ParamLimits

0x1f1a,	// (0x0009d41c) main_camera_pane_t1_ParamLimits

0x1f2c,	// (0x0009d42e) main_camera_pane_t2_ParamLimits

0xf226,	// (0x000aa728) main_camera_pane_t_ParamLimits

0xa710,	// (0x000a5c12) bg_popup_preview_window_pane_cp01_ParamLimits

0xa710,	// (0x000a5c12) bg_popup_preview_window_pane_cp01

0xb872,	// (0x000a6d74) popup_phob_thumbnail2_window_g1_ParamLimits

0xb872,	// (0x000a6d74) popup_phob_thumbnail2_window_g1

0xa146,	// (0x000a5648) call2_cli_visual_pane

0x41b5,	// (0x0009f6b7) popup_call2_audio_conf_window_ParamLimits

0x41b5,	// (0x0009f6b7) popup_call2_audio_conf_window

0x41ce,	// (0x0009f6d0) popup_call2_audio_first_window_ParamLimits

0x41ce,	// (0x0009f6d0) popup_call2_audio_first_window

0x426c,	// (0x0009f76e) popup_call2_audio_in_window_ParamLimits

0x426c,	// (0x0009f76e) popup_call2_audio_in_window

0x42b0,	// (0x0009f7b2) popup_call2_audio_out_window_ParamLimits

0x42b0,	// (0x0009f7b2) popup_call2_audio_out_window

0x431a,	// (0x0009f81c) popup_call2_audio_second_window_ParamLimits

0x431a,	// (0x0009f81c) popup_call2_audio_second_window

0x4378,	// (0x0009f87a) popup_call2_audio_wait_window_ParamLimits

0x4378,	// (0x0009f87a) popup_call2_audio_wait_window

0xa146,	// (0x000a5648) bg_popup_call2_act_pane_cp03

0xa6f2,	// (0x000a5bf4) list_conf_pane_cp

0xb87e,	// (0x000a6d80) popup_call2_audio_conf_window_t1

0xb88c,	// (0x000a6d8e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb88c,	// (0x000a6d8e) list_single_graphic_popup_conf2_pane

0xb251,	// (0x000a6753) list_highlight_pane_cp04

0xb89f,	// (0x000a6da1) list_single_graphic_popup_conf2_pane_g1

0xb262,	// (0x000a6764) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x000aaa1f) list_single_graphic_popup_conf2_pane_g

0xb8a9,	// (0x000a6dab) list_single_graphic_popup_conf2_pane_t1

0xb8b7,	// (0x000a6db9) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8b7,	// (0x000a6db9) bg_popup_call2_act_pane_cp01

0xb941,	// (0x000a6e43) call_type_pane_cp05_ParamLimits

0xb941,	// (0x000a6e43) call_type_pane_cp05

0xb995,	// (0x000a6e97) popup_call2_audio_second_window_g1_ParamLimits

0xb995,	// (0x000a6e97) popup_call2_audio_second_window_g1

0xb9e9,	// (0x000a6eeb) popup_call2_audio_second_window_g2_ParamLimits

0xb9e9,	// (0x000a6eeb) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x000aaa24) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x000aaa24) popup_call2_audio_second_window_g

0xba4e,	// (0x000a6f50) popup_call2_audio_second_window_t1_ParamLimits

0xba4e,	// (0x000a6f50) popup_call2_audio_second_window_t1

0xbb09,	// (0x000a700b) popup_call2_audio_second_window_t2_ParamLimits

0xbb09,	// (0x000a700b) popup_call2_audio_second_window_t2

0xbb5c,	// (0x000a705e) popup_call2_audio_second_window_t3_ParamLimits

0xbb5c,	// (0x000a705e) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x000aaa2b) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x000aaa2b) popup_call2_audio_second_window_t

0xa146,	// (0x000a5648) bg_popup_call2_in_pane_cp02

0xa150,	// (0x000a5652) call_type_pane_cp04

0xa158,	// (0x000a565a) popup_call2_audio_wait_window_g1

0xa160,	// (0x000a5662) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000aa604) popup_call2_audio_wait_window_g

0xa168,	// (0x000a566a) popup_call2_audio_wait_window_t3

0xbc4f,	// (0x000a7151) bg_popup_call2_act_pane_ParamLimits

0xbc4f,	// (0x000a7151) bg_popup_call2_act_pane

0xbd0f,	// (0x000a7211) call_type_pane_cp03_ParamLimits

0xbd0f,	// (0x000a7211) call_type_pane_cp03

0xbd85,	// (0x000a7287) popup_call2_audio_first_window_g1_ParamLimits

0xbd85,	// (0x000a7287) popup_call2_audio_first_window_g1

0xbdf5,	// (0x000a72f7) popup_call2_audio_first_window_g2_ParamLimits

0xbdf5,	// (0x000a72f7) popup_call2_audio_first_window_g2

0xb333,	// (0x000a6835) popup_call2_audio_first_window_g3_ParamLimits

0xb333,	// (0x000a6835) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x000aaa34) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x000aaa34) popup_call2_audio_first_window_g

0xbed3,	// (0x000a73d5) popup_call2_audio_first_window_t1_ParamLimits

0xbed3,	// (0x000a73d5) popup_call2_audio_first_window_t1

0xbfd6,	// (0x000a74d8) popup_call2_audio_first_window_t4_ParamLimits

0xbfd6,	// (0x000a74d8) popup_call2_audio_first_window_t4

0xc0b9,	// (0x000a75bb) popup_call2_audio_first_window_t5_ParamLimits

0xc0b9,	// (0x000a75bb) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x000aaa3f) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x000aaa3f) popup_call2_audio_first_window_t

0xa708,	// (0x000a5c0a) bg_popup_call2_act_pane_g1

0xc728,	// (0x000a7c2a) popup_cale_lunar_info_window_t1

0xc736,	// (0x000a7c38) popup_cale_lunar_info_window_t2

0xc744,	// (0x000a7c46) popup_cale_lunar_info_window_t3

0xa146,	// (0x000a5648) bg_popup_call2_bubble_pane

0xc1ba,	// (0x000a76bc) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ba,	// (0x000a76bc) bg_popup_call2_in_pane_cp01

0x9e22,	// (0x000a5324) call_type_pane_cp02

0xc202,	// (0x000a7704) popup_call2_audio_out_window_g1_ParamLimits

0xc202,	// (0x000a7704) popup_call2_audio_out_window_g1

0xc22e,	// (0x000a7730) popup_call2_audio_out_window_g2_ParamLimits

0xc22e,	// (0x000a7730) popup_call2_audio_out_window_g2

0xc256,	// (0x000a7758) popup_call2_audio_out_window_g3_ParamLimits

0xc256,	// (0x000a7758) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x000aaa48) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x000aaa48) popup_call2_audio_out_window_g

0xc291,	// (0x000a7793) popup_call2_audio_out_window_t1_ParamLimits

0xc291,	// (0x000a7793) popup_call2_audio_out_window_t1

0xc2f0,	// (0x000a77f2) popup_call2_audio_out_window_t2_ParamLimits

0xc2f0,	// (0x000a77f2) popup_call2_audio_out_window_t2

0xc344,	// (0x000a7846) popup_call2_audio_out_window_t3_ParamLimits

0xc344,	// (0x000a7846) popup_call2_audio_out_window_t3

0xc35a,	// (0x000a785c) popup_call2_audio_out_window_t4_ParamLimits

0xc35a,	// (0x000a785c) popup_call2_audio_out_window_t4

0xc370,	// (0x000a7872) popup_call2_audio_out_window_t5_ParamLimits

0xc370,	// (0x000a7872) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x000aaa51) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x000aaa51) popup_call2_audio_out_window_t

0xc3d4,	// (0x000a78d6) bg_popup_call2_in_pane_ParamLimits

0xc3d4,	// (0x000a78d6) bg_popup_call2_in_pane

0xc430,	// (0x000a7932) popup_call2_audio_in_window_g1_ParamLimits

0xc430,	// (0x000a7932) popup_call2_audio_in_window_g1

0xc468,	// (0x000a796a) popup_call2_audio_in_window_g2_ParamLimits

0xc468,	// (0x000a796a) popup_call2_audio_in_window_g2

0xc4a0,	// (0x000a79a2) popup_call2_audio_in_window_g3_ParamLimits

0xc4a0,	// (0x000a79a2) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x000aaa5e) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x000aaa5e) popup_call2_audio_in_window_g

0xc4f8,	// (0x000a79fa) popup_call2_audio_in_window_t1_ParamLimits

0xc4f8,	// (0x000a79fa) popup_call2_audio_in_window_t1

0xc578,	// (0x000a7a7a) popup_call2_audio_in_window_t2_ParamLimits

0xc578,	// (0x000a7a7a) popup_call2_audio_in_window_t2

0xc5f8,	// (0x000a7afa) popup_call2_audio_in_window_t3_ParamLimits

0xc5f8,	// (0x000a7afa) popup_call2_audio_in_window_t3

0xc612,	// (0x000a7b14) popup_call2_audio_in_window_t4_ParamLimits

0xc612,	// (0x000a7b14) popup_call2_audio_in_window_t4

0xc624,	// (0x000a7b26) popup_call2_audio_in_window_t5_ParamLimits

0xc624,	// (0x000a7b26) popup_call2_audio_in_window_t5

0xc639,	// (0x000a7b3b) popup_call2_audio_in_window_t6_ParamLimits

0xc639,	// (0x000a7b3b) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x000aaa67) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x000aaa67) popup_call2_audio_in_window_t

0xa708,	// (0x000a5c0a) bg_popup_call2_in_pane_g1

0xc752,	// (0x000a7c54) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000aaacf) popup_cale_lunar_info_window_t

0xa710,	// (0x000a5c12) bg_popup_call2_rect_pane_ParamLimits

0xa710,	// (0x000a5c12) bg_popup_call2_rect_pane

0xa146,	// (0x000a5648) call2_cli_visual_graphic_pane

0xa146,	// (0x000a5648) call2_cli_visual_text_pane

0x4840,	// (0x0009fd42) smil_status_volume_pane_g3

0x0002,

0xa82a,	// (0x000a5d2c) call2_cli_visual_graphic_pane_g1

0xa82a,	// (0x000a5d2c) call2_cli_visual_graphic_pane_g2

0xa82a,	// (0x000a5d2c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x000aaa74) call2_cli_visual_graphic_pane_g

0xc64e,	// (0x000a7b50) bg_popup_call2_rect_pane_g1

0xa8c8,	// (0x000a5dca) bg_popup_call2_rect_pane_g2

0xc656,	// (0x000a7b58) bg_popup_call2_rect_pane_g3

0xc65e,	// (0x000a7b60) bg_popup_call2_rect_pane_g4

0xc666,	// (0x000a7b68) bg_popup_call2_rect_pane_g5

0xc66e,	// (0x000a7b70) bg_popup_call2_rect_pane_g6

0xc676,	// (0x000a7b78) bg_popup_call2_rect_pane_g7

0xc67e,	// (0x000a7b80) bg_popup_call2_rect_pane_g8

0xc686,	// (0x000a7b88) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x000aaa7b) bg_popup_call2_rect_pane_g

0xc68e,	// (0x000a7b90) bg_popup_call2_bubble_pane_g1

0xc696,	// (0x000a7b98) bg_popup_call2_bubble_pane_g2

0xc69e,	// (0x000a7ba0) bg_popup_call2_bubble_pane_g3

0xc6a6,	// (0x000a7ba8) bg_popup_call2_bubble_pane_g4

0xc6ae,	// (0x000a7bb0) bg_popup_call2_bubble_pane_g5

0xc6b6,	// (0x000a7bb8) bg_popup_call2_bubble_pane_g6

0xc6be,	// (0x000a7bc0) bg_popup_call2_bubble_pane_g7

0xc6c6,	// (0x000a7bc8) bg_popup_call2_bubble_pane_g8

0xc6ce,	// (0x000a7bd0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000aaa8e) bg_popup_call2_bubble_pane_g

0x165d,	// (0x0009cb5f) aid_cale_week_size_cell_pane

0x1f40,	// (0x0009d442) aid_cams_cif_uncrop_pane_ParamLimits

0x1f40,	// (0x0009d442) aid_cams_cif_uncrop_pane

0x209d,	// (0x0009d59f) aid_cams_size_cell_ParamLimits

0x209d,	// (0x0009d59f) aid_cams_size_cell

0x20a9,	// (0x0009d5ab) grid_cams_pane_ParamLimits

0x20b7,	// (0x0009d5b9) linegrid_cams_pane_ParamLimits

0x229d,	// (0x0009d79f) call_video_pane_t1

0x22ba,	// (0x0009d7bc) call_video_pane_t2

0x0001,

0xf279,	// (0x000aa77b) call_video_pane_t

0x2786,	// (0x0009dc88) aid_cale_month_size_cell_pane_ParamLimits

0x2786,	// (0x0009dc88) aid_cale_month_size_cell_pane

0xf616,	// (0x000aab18) smil_status_volume_pane_g

0x484d,	// (0x0009fd4f) volume_smil_pane_ParamLimits

0x9cf4,	// (0x000a51f6) aid_popup2_width_pane

0x154f,	// (0x0009ca51) cell_qdial_pane_g4_ParamLimits

0x154f,	// (0x0009ca51) cell_qdial_pane_g4

0x3728,	// (0x0009ec2a) aid_blid_cardinal_pane_ParamLimits

0x3738,	// (0x0009ec3a) aid_blid_destination_pane_ParamLimits

0x3738,	// (0x0009ec3a) aid_blid_destination_pane

0xa710,	// (0x000a5c12) bg_popup_call_poc_act_pane_ParamLimits

0xa710,	// (0x000a5c12) bg_popup_call_poc_act_pane

0xa710,	// (0x000a5c12) bg_popup_call_poc_inact_pane_ParamLimits

0xa710,	// (0x000a5c12) bg_popup_call_poc_inact_pane

0xc6d6,	// (0x000a7bd8) bg_popup_call_poc_act_pane_g1

0xc6de,	// (0x000a7be0) bg_popup_call_poc_act_pane_g2

0xc6e6,	// (0x000a7be8) bg_popup_call_poc_act_pane_g3

0xc6a6,	// (0x000a7ba8) bg_popup_call_poc_act_pane_g4

0xc6ae,	// (0x000a7bb0) bg_popup_call_poc_act_pane_g5

0xc6ee,	// (0x000a7bf0) bg_popup_call_poc_act_pane_g6

0xc6be,	// (0x000a7bc0) bg_popup_call_poc_act_pane_g7

0xc6f6,	// (0x000a7bf8) bg_popup_call_poc_act_pane_g8

0xa146,	// (0x000a5648) main_usb_pane

0xc85f,	// (0x000a7d61) popup_cale_lunar_info_window

0x25d2,	// (0x0009dad4) im_reading_pane_t1_ParamLimits

0xabf2,	// (0x000a60f4) list_im_pane_ParamLimits

0xac03,	// (0x000a6105) scroll_pane_cp07_ParamLimits

0xa146,	// (0x000a5648) grid_highlight_pane_cp012

0xa710,	// (0x000a5c12) mup_scale_pane_ParamLimits

0xb333,	// (0x000a6835) main_usb_pane_g1_ParamLimits

0xb333,	// (0x000a6835) main_usb_pane_g1

0x43e1,	// (0x0009f8e3) main_usb_pane_g2_ParamLimits

0x43e1,	// (0x0009f8e3) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000aaab8) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000aaab8) main_usb_pane_g

0x43ed,	// (0x0009f8ef) main_usb_pane_t1_ParamLimits

0x43ed,	// (0x0009f8ef) main_usb_pane_t1

0x43ff,	// (0x0009f901) main_usb_pane_t2_ParamLimits

0x43ff,	// (0x0009f901) main_usb_pane_t2

0x4411,	// (0x0009f913) main_usb_pane_t3_ParamLimits

0x4411,	// (0x0009f913) main_usb_pane_t3

0x4423,	// (0x0009f925) main_usb_pane_t4_ParamLimits

0x4423,	// (0x0009f925) main_usb_pane_t4

0x4435,	// (0x0009f937) main_usb_pane_t5_ParamLimits

0x4435,	// (0x0009f937) main_usb_pane_t5

0x4447,	// (0x0009f949) main_usb_pane_t6_ParamLimits

0x4447,	// (0x0009f949) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000aaabd) main_usb_pane_t_ParamLimits

0x36c7,	// (0x0009ebc9) aid_text_placing

0x36d2,	// (0x0009ebd4) main_location2_pane_t1_ParamLimits

0x36e8,	// (0x0009ebea) main_location2_pane_t2_ParamLimits

0x36fe,	// (0x0009ec00) main_location2_pane_t3_ParamLimits

0x3714,	// (0x0009ec16) main_location2_pane_t4_ParamLimits

0x3714,	// (0x0009ec16) main_location2_pane_t4

0xf3da,	// (0x000aa8dc) main_location2_pane_t_ParamLimits

0xa74c,	// (0x000a5c4e) find_pinb_pane_g2_ParamLimits

0xa74c,	// (0x000a5c4e) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000aa62a) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000aa62a) find_pinb_pane_g

0xa758,	// (0x000a5c5a) find_pinb_pane_t1_ParamLimits

0xa76a,	// (0x000a5c6c) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000aa62f) find_pinb_pane_t_ParamLimits

0xa146,	// (0x000a5648) main_call3_pane

0x2cad,	// (0x0009e1af) cale_month_day_heading_pane_t1_ParamLimits

0x2d2b,	// (0x0009e22d) cale_month_day_heading_pane_t2_ParamLimits

0x2db4,	// (0x0009e2b6) cale_month_day_heading_pane_t3_ParamLimits

0x2e3d,	// (0x0009e33f) cale_month_day_heading_pane_t4_ParamLimits

0x2ec6,	// (0x0009e3c8) cale_month_day_heading_pane_t5_ParamLimits

0x2f53,	// (0x0009e455) cale_month_day_heading_pane_t6_ParamLimits

0x2fe4,	// (0x0009e4e6) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000aa7b3) cale_month_day_heading_pane_t_ParamLimits

0x329a,	// (0x0009e79c) smil_status_volume_pane

0x3f9f,	// (0x0009f4a1) postcard_address_pane_ParamLimits

0x3f9f,	// (0x0009f4a1) postcard_address_pane

0x3fad,	// (0x0009f4af) postcard_message_pane_ParamLimits

0x3fad,	// (0x0009f4af) postcard_message_pane

0x43b7,	// (0x0009f8b9) call2_cli_visual_pane_t1_ParamLimits

0x43b7,	// (0x0009f8b9) call2_cli_visual_pane_t1

0x49ac,	// (0x0009feae) postcard_message_pane_t1_ParamLimits

0x49ac,	// (0x0009feae) postcard_message_pane_t1

0x4995,	// (0x0009fe97) postcard_address_pane_t1_ParamLimits

0x4995,	// (0x0009fe97) postcard_address_pane_t1

0x4986,	// (0x0009fe88) popup_call3_audio_in_window_ParamLimits

0x4986,	// (0x0009fe88) popup_call3_audio_in_window

0x4864,	// (0x0009fd66) bg_popup_call3_in_pane_ParamLimits

0x4864,	// (0x0009fd66) bg_popup_call3_in_pane

0x48cc,	// (0x0009fdce) popup_call3_audio_in_window_g1_ParamLimits

0x48cc,	// (0x0009fdce) popup_call3_audio_in_window_g1

0x48e4,	// (0x0009fde6) popup_call3_audio_in_window_g2_ParamLimits

0x48e4,	// (0x0009fde6) popup_call3_audio_in_window_g2

0x48fc,	// (0x0009fdfe) popup_call3_audio_in_window_g3_ParamLimits

0x48fc,	// (0x0009fdfe) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x000aab1f) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x000aab1f) popup_call3_audio_in_window_g

0x4924,	// (0x0009fe26) popup_call3_audio_in_window_t1_ParamLimits

0x4924,	// (0x0009fe26) popup_call3_audio_in_window_t1

0x494c,	// (0x0009fe4e) popup_call3_audio_in_window_t2_ParamLimits

0x494c,	// (0x0009fe4e) popup_call3_audio_in_window_t2

0x4974,	// (0x0009fe76) popup_call3_audio_in_window_t3_ParamLimits

0x4974,	// (0x0009fe76) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x000aab28) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x000aab28) popup_call3_audio_in_window_t

0xb43e,	// (0x000a6940) bg_popup_call3_rect_pane

0xc64e,	// (0x000a7b50) bg_popup_call3_rect_pane_g1

0xa8c8,	// (0x000a5dca) bg_popup_call3_rect_pane_g2

0xc656,	// (0x000a7b58) bg_popup_call3_rect_pane_g3

0xc65e,	// (0x000a7b60) bg_popup_call3_rect_pane_g4

0xc666,	// (0x000a7b68) bg_popup_call3_rect_pane_g5

0xc66e,	// (0x000a7b70) bg_popup_call3_rect_pane_g6

0xc676,	// (0x000a7b78) bg_popup_call3_rect_pane_g7

0x3b6e,	// (0x0009f070) mup_visualizer_osc_pane

0xb4fd,	// (0x000a69ff) mup_visualizer_spec_pane

0x4884,	// (0x0009fd86) call3_video_qcif_pane_ParamLimits

0x4884,	// (0x0009fd86) call3_video_qcif_pane

0x4896,	// (0x0009fd98) call3_video_qcif_uncrop_pane_ParamLimits

0x4896,	// (0x0009fd98) call3_video_qcif_uncrop_pane

0x48a6,	// (0x0009fda8) call3_video_subqcif_pane_ParamLimits

0x48a6,	// (0x0009fda8) call3_video_subqcif_pane

0x48ba,	// (0x0009fdbc) call3_video_subqcif_uncrop_pane_ParamLimits

0x48ba,	// (0x0009fdbc) call3_video_subqcif_uncrop_pane

0x4914,	// (0x0009fe16) popup_call3_audio_in_window_g4_ParamLimits

0x4914,	// (0x0009fe16) popup_call3_audio_in_window_g4

0x482f,	// (0x0009fd31) mup_spec_half_pane

0x4838,	// (0x0009fd3a) mup_spec_half_pane_cp

0xc8fa,	// (0x000a7dfc) mup_osc_middle_pane

0xc903,	// (0x000a7e05) mup_visualizer_osc_pane_g1

0x480f,	// (0x0009fd11) mup_spec_bar_pane_ParamLimits

0x480f,	// (0x0009fd11) mup_spec_bar_pane

0xc8e7,	// (0x000a7de9) mup_spec_bar_pane_g1

0xc8f1,	// (0x000a7df3) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000aab13) mup_spec_bar_pane_g

0x165d,	// (0x0009cb5f) aid_cale_week_size_cell_pane_ParamLimits

0x1677,	// (0x0009cb79) bg_cale_heading_pane_ParamLimits

0xa8fc,	// (0x000a5dfe) bg_cale_pane_cp01_ParamLimits

0x16a0,	// (0x0009cba2) cale_week_corner_pane_ParamLimits

0x16bf,	// (0x0009cbc1) cale_week_day_heading_pane_ParamLimits

0x16ed,	// (0x0009cbef) cale_week_scroll_pane_g1_ParamLimits

0x1711,	// (0x0009cc13) cale_week_scroll_pane_g2_ParamLimits

0x1729,	// (0x0009cc2b) cale_week_scroll_pane_g3_ParamLimits

0x1741,	// (0x0009cc43) cale_week_scroll_pane_g4_ParamLimits

0x1759,	// (0x0009cc5b) cale_week_scroll_pane_g5_ParamLimits

0x1771,	// (0x0009cc73) cale_week_scroll_pane_g6_ParamLimits

0x178d,	// (0x0009cc8f) cale_week_scroll_pane_g7_ParamLimits

0x17a9,	// (0x0009ccab) cale_week_scroll_pane_g8_ParamLimits

0x17c5,	// (0x0009ccc7) cale_week_scroll_pane_g9_ParamLimits

0x17e2,	// (0x0009cce4) cale_week_scroll_pane_g10_ParamLimits

0x17ff,	// (0x0009cd01) cale_week_scroll_pane_g11_ParamLimits

0x181c,	// (0x0009cd1e) cale_week_scroll_pane_g12_ParamLimits

0x1839,	// (0x0009cd3b) cale_week_scroll_pane_g13_ParamLimits

0x1856,	// (0x0009cd58) cale_week_scroll_pane_g14_ParamLimits

0x187f,	// (0x0009cd81) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000aa6bb) cale_week_scroll_pane_g_ParamLimits

0x18a8,	// (0x0009cdaa) cale_week_time_pane_ParamLimits

0x18c4,	// (0x0009cdc6) grid_cale_week_pane_ParamLimits

0xa91a,	// (0x000a5e1c) listscroll_cale_week_pane_t1

0xa92c,	// (0x000a5e2e) scroll_pane_cp08_ParamLimits

0x27f3,	// (0x0009dcf5) cale_month_corner_pane_ParamLimits

0xae23,	// (0x000a6325) cale_month_pane_t1

0x2c4b,	// (0x0009e14d) cale_month_week_pane_ParamLimits

0xb333,	// (0x000a6835) popup_call_status_window_g1_ParamLimits

0x34d0,	// (0x0009e9d2) popup_call_status_window_g2_ParamLimits

0x34dc,	// (0x0009e9de) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x000aa863) popup_call_status_window_g_ParamLimits

0xb1d2,	// (0x000a66d4) aid_call2_pane

0x3e14,	// (0x0009f316) msg_header_pane_g1

0x3f9f,	// (0x0009f4a1) postcard_address2_pane_ParamLimits

0x3f9f,	// (0x0009f4a1) postcard_address2_pane

0x3fad,	// (0x0009f4af) postcard_message2_pane_ParamLimits

0x3fad,	// (0x0009f4af) postcard_message2_pane

0x47b6,	// (0x0009fcb8) message2_row_pane_ParamLimits

0x47b6,	// (0x0009fcb8) message2_row_pane

0x47d0,	// (0x0009fcd2) address2_row_pane_ParamLimits

0x47d0,	// (0x0009fcd2) address2_row_pane

0xc8b5,	// (0x000a7db7) postcard_message2_row_pane_g1

0xc8bd,	// (0x000a7dbf) postcard_message2_row_pane_t1

0xc8b5,	// (0x000a7db7) address2_row_pane_g1

0xc8bd,	// (0x000a7dbf) address2_row_pane_t1

0x1dfe,	// (0x0009d300) aid_size_cell_vorec

0xa146,	// (0x000a5648) main_rss_pane

0x47e3,	// (0x0009fce5) rss_list_single_pane_ParamLimits

0x47e3,	// (0x0009fce5) rss_list_single_pane

0xc8cb,	// (0x000a7dcd) rss_list_single_pane_t1

0xc8d9,	// (0x000a7ddb) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x000aab0e) rss_list_single_pane_t

0xa146,	// (0x000a5648) main_camera2_pane

0xa146,	// (0x000a5648) main_video2_pane

0x4a10,	// (0x0009ff12) cams_zoom_pane_cp2_ParamLimits

0x4a10,	// (0x0009ff12) cams_zoom_pane_cp2

0x4a1c,	// (0x0009ff1e) image2_vga_pane_ParamLimits

0x4a1c,	// (0x0009ff1e) image2_vga_pane

0x4a2b,	// (0x0009ff2d) main_camera2_pane_g1_ParamLimits

0x4a2b,	// (0x0009ff2d) main_camera2_pane_g1

0x4a37,	// (0x0009ff39) main_camera2_pane_g2_ParamLimits

0x4a37,	// (0x0009ff39) main_camera2_pane_g2

0x4a43,	// (0x0009ff45) main_camera2_pane_g3_ParamLimits

0x4a43,	// (0x0009ff45) main_camera2_pane_g3

0x4a4f,	// (0x0009ff51) main_camera2_pane_g4_ParamLimits

0x4a4f,	// (0x0009ff51) main_camera2_pane_g4

0x4a5b,	// (0x0009ff5d) main_camera2_pane_g5_ParamLimits

0x4a5b,	// (0x0009ff5d) main_camera2_pane_g5

0x4a67,	// (0x0009ff69) main_camera2_pane_g6_ParamLimits

0x4a67,	// (0x0009ff69) main_camera2_pane_g6

0x4a73,	// (0x0009ff75) main_camera2_pane_g7_ParamLimits

0x4a73,	// (0x0009ff75) main_camera2_pane_g7

0x4a7f,	// (0x0009ff81) main_camera2_pane_g8_ParamLimits

0x4a7f,	// (0x0009ff81) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x000aab2f) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x000aab2f) main_camera2_pane_g

0x4a97,	// (0x0009ff99) main_camera2_pane_t1_ParamLimits

0x4a97,	// (0x0009ff99) main_camera2_pane_t1

0x4aa9,	// (0x0009ffab) main_camera2_pane_t2_ParamLimits

0x4aa9,	// (0x0009ffab) main_camera2_pane_t2

0x4abb,	// (0x0009ffbd) main_camera2_pane_t3_ParamLimits

0x4abb,	// (0x0009ffbd) main_camera2_pane_t3

0x4acd,	// (0x0009ffcf) main_camera2_pane_t4_ParamLimits

0x4acd,	// (0x0009ffcf) main_camera2_pane_t4

0x0006,

0xf640,	// (0x000aab42) main_camera2_pane_t_ParamLimits

0xf640,	// (0x000aab42) main_camera2_pane_t

0x4b2a,	// (0x000a002c) cams_zoom_pane_cp4_ParamLimits

0x4b2a,	// (0x000a002c) cams_zoom_pane_cp4

0x4b3a,	// (0x000a003c) image2_cif_pane_ParamLimits

0x4b3a,	// (0x000a003c) image2_cif_pane

0x4b4f,	// (0x000a0051) image2_subqcif_pane_ParamLimits

0x4b4f,	// (0x000a0051) image2_subqcif_pane

0x4b5e,	// (0x000a0060) main_video2_pane_g1_ParamLimits

0x4b5e,	// (0x000a0060) main_video2_pane_g1

0x4b70,	// (0x000a0072) main_video2_pane_g2_ParamLimits

0x4b70,	// (0x000a0072) main_video2_pane_g2

0x4b80,	// (0x000a0082) main_video2_pane_g3_ParamLimits

0x4b80,	// (0x000a0082) main_video2_pane_g3

0x4b90,	// (0x000a0092) main_video2_pane_g4_ParamLimits

0x4b90,	// (0x000a0092) main_video2_pane_g4

0x4ba0,	// (0x000a00a2) main_video2_pane_g5_ParamLimits

0x4ba0,	// (0x000a00a2) main_video2_pane_g5

0x4bb0,	// (0x000a00b2) main_video2_pane_g6_ParamLimits

0x4bb0,	// (0x000a00b2) main_video2_pane_g6

0x0005,

0xf64f,	// (0x000aab51) main_video2_pane_g_ParamLimits

0xf64f,	// (0x000aab51) main_video2_pane_g

0x4bc2,	// (0x000a00c4) main_video2_pane_t1_ParamLimits

0x4bc2,	// (0x000a00c4) main_video2_pane_t1

0x4bdc,	// (0x000a00de) main_video2_pane_t2_ParamLimits

0x4bdc,	// (0x000a00de) main_video2_pane_t2

0x4c02,	// (0x000a0104) main_video2_pane_t3_ParamLimits

0x4c02,	// (0x000a0104) main_video2_pane_t3

0x0002,

0xf65c,	// (0x000aab5e) main_video2_pane_t_ParamLimits

0xf65c,	// (0x000aab5e) main_video2_pane_t

0x44fe,	// (0x0009fa00) call_muted_g2

0x0001,

0xf5fe,	// (0x000aab00) call_muted_g

0xa146,	// (0x000a5648) main_mup2_pane

0xc93a,	// (0x000a7e3c) main_mup2_pane_g1_ParamLimits

0xc93a,	// (0x000a7e3c) main_mup2_pane_g1

0x4c28,	// (0x000a012a) main_mup2_pane_g2_ParamLimits

0x4c28,	// (0x000a012a) main_mup2_pane_g2

0x4eba,	// (0x000a03bc) main_mup_pane_g13_cp1

0x4ec2,	// (0x000a03c4) mup_volume_pane_cp1

0x4c4a,	// (0x000a014c) main_mup2_pane_g4_ParamLimits

0x4c4a,	// (0x000a014c) main_mup2_pane_g4

0x4c5f,	// (0x000a0161) main_mup2_pane_g5_ParamLimits

0x4c5f,	// (0x000a0161) main_mup2_pane_g5

0x4c74,	// (0x000a0176) main_mup2_pane_g6_ParamLimits

0x4c74,	// (0x000a0176) main_mup2_pane_g6

0x4c89,	// (0x000a018b) main_mup2_pane_g7_ParamLimits

0x4c89,	// (0x000a018b) main_mup2_pane_g7

0x0006,

0xf663,	// (0x000aab65) main_mup2_pane_g_ParamLimits

0xf663,	// (0x000aab65) main_mup2_pane_g

0x4ca5,	// (0x000a01a7) main_mup2_pane_t1_ParamLimits

0x4ca5,	// (0x000a01a7) main_mup2_pane_t1

0x4cbc,	// (0x000a01be) main_mup2_pane_t2_ParamLimits

0x4cbc,	// (0x000a01be) main_mup2_pane_t2

0x4cd3,	// (0x000a01d5) main_mup2_pane_t3_ParamLimits

0x4cd3,	// (0x000a01d5) main_mup2_pane_t3

0x4cea,	// (0x000a01ec) main_mup2_pane_t4_ParamLimits

0x4cea,	// (0x000a01ec) main_mup2_pane_t4

0x4d04,	// (0x000a0206) main_mup2_pane_t5_ParamLimits

0x4d04,	// (0x000a0206) main_mup2_pane_t5

0x4d1e,	// (0x000a0220) main_mup2_pane_t6_ParamLimits

0x4d1e,	// (0x000a0220) main_mup2_pane_t6

0x0005,

0xf672,	// (0x000aab74) main_mup2_pane_t_ParamLimits

0xf672,	// (0x000aab74) main_mup2_pane_t

0x4d56,	// (0x000a0258) mup2_visualizer_pane_ParamLimits

0x4d56,	// (0x000a0258) mup2_visualizer_pane

0x4d8c,	// (0x000a028e) mup_progress_pane_cp_ParamLimits

0x4d8c,	// (0x000a028e) mup_progress_pane_cp

0x4ea5,	// (0x000a03a7) mup_volume_pane_cp_ParamLimits

0x4ea5,	// (0x000a03a7) mup_volume_pane_cp

0x4da5,	// (0x000a02a7) mup2_visualizer_pane_g1_ParamLimits

0x4da5,	// (0x000a02a7) mup2_visualizer_pane_g1

0xc946,	// (0x000a7e48) mup2_visualizer_pane_g2_ParamLimits

0xc946,	// (0x000a7e48) mup2_visualizer_pane_g2

0x4dba,	// (0x000a02bc) mup2_visualizer_pane_g3_ParamLimits

0x4dba,	// (0x000a02bc) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x000aab81) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x000aab81) mup2_visualizer_pane_g

0xb71d,	// (0x000a6c1f) aid_size_cell_fmradio

0x4614,	// (0x0009fb16) aid_height_parent_landcape

0xac81,	// (0x000a6183) wml_content_pane_cp

0xac89,	// (0x000a618b) wml_tabs_pane

0xac92,	// (0x000a6194) popup_wml_miniature_window

0xac9a,	// (0x000a619c) scroll_pane_cp021

0xacae,	// (0x000a61b0) wml_content_pane_comp8

0xa146,	// (0x000a5648) bg_popup_sub_pane_cp05

0xc964,	// (0x000a7e66) popup_wml_miniature_window_g1

0xc96c,	// (0x000a7e6e) wml_miniature_view_pane

0x4dc8,	// (0x000a02ca) aid_size_wml_view

0x4dd0,	// (0x000a02d2) wml_miniature_view_pane_g1

0x4dd9,	// (0x000a02db) wml_miniature_view_pane_g2

0x4de2,	// (0x000a02e4) wml_miniature_view_pane_g3

0x4dea,	// (0x000a02ec) wml_miniature_view_pane_g4

0x4df2,	// (0x000a02f4) wml_miniature_view_pane_g5

0x4dfa,	// (0x000a02fc) wml_miniature_view_pane_g6

0x4e02,	// (0x000a0304) wml_miniature_view_pane_g7

0x4e0a,	// (0x000a030c) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x000aab88) wml_miniature_view_pane_g

0xc93a,	// (0x000a7e3c) background_graphic_ParamLimits

0xc93a,	// (0x000a7e3c) background_graphic

0xc974,	// (0x000a7e76) wml_tabs_2_pane

0xc97d,	// (0x000a7e7f) wml_tabs_3_pane_ParamLimits

0xc97d,	// (0x000a7e7f) wml_tabs_3_pane

0xc98f,	// (0x000a7e91) wml_tabs_4_pane_ParamLimits

0xc98f,	// (0x000a7e91) wml_tabs_4_pane

0xc9a5,	// (0x000a7ea7) wml_tabs_5_pane_ParamLimits

0xc9a5,	// (0x000a7ea7) wml_tabs_5_pane

0xc9bf,	// (0x000a7ec1) wml_tabs_pane_g2_ParamLimits

0xc9bf,	// (0x000a7ec1) wml_tabs_pane_g2

0xc9d3,	// (0x000a7ed5) wml_tabs_pane_g3_ParamLimits

0xc9d3,	// (0x000a7ed5) wml_tabs_pane_g3

0x4e12,	// (0x000a0314) wml_tabs_2_active_pane_ParamLimits

0x4e12,	// (0x000a0314) wml_tabs_2_active_pane

0x4e24,	// (0x000a0326) wml_tabs_2_passive_pane_ParamLimits

0x4e24,	// (0x000a0326) wml_tabs_2_passive_pane

0x4e36,	// (0x000a0338) wml_tabs_3_active_pane_cp_ParamLimits

0x4e36,	// (0x000a0338) wml_tabs_3_active_pane_cp

0x4e49,	// (0x000a034b) wml_tabs_3_passive_pane_ParamLimits

0x4e49,	// (0x000a034b) wml_tabs_3_passive_pane

0x4e5a,	// (0x000a035c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e5a,	// (0x000a035c) wml_tabs_3_passive_pane_cp

0x4e6f,	// (0x000a0371) tabs_4_active_pane

0x4e77,	// (0x000a0379) tabs_4_passive_pane

0x4e7f,	// (0x000a0381) tabs_4_passive_pane_cp

0x4e87,	// (0x000a0389) tabs_4_passive_pane_cp2

0x43d9,	// (0x0009f8db) aid_height_text

0x3b37,	// (0x0009f039) mup_volume_cont_pane_ParamLimits

0x3b37,	// (0x0009f039) mup_volume_cont_pane

0x119b,	// (0x0009c69d) aid_size_cell_pinb

0x11a5,	// (0x0009c6a7) aid_size_list_pinb

0x4d75,	// (0x000a0277) mup2_volume_cont_pane_ParamLimits

0x4d75,	// (0x000a0277) mup2_volume_cont_pane

0x4e91,	// (0x000a0393) mup2_volume_cont_pane_g1_ParamLimits

0x4e91,	// (0x000a0393) mup2_volume_cont_pane_g1

0x0e07,	// (0x0009c309) aid_size_cell_touch_ParamLimits

0x0e07,	// (0x0009c309) aid_size_cell_touch

0x1085,	// (0x0009c587) touch_pane_ParamLimits

0x1085,	// (0x0009c587) touch_pane

0x9ce2,	// (0x000a51e4) main_rss2_pane

0xc9f0,	// (0x000a7ef2) listscroll_rss2_pane

0xc9f9,	// (0x000a7efb) rss2_navigation_pane

0xca01,	// (0x000a7f03) list_rss2_pane

0xb2f6,	// (0x000a67f8) scroll_pane_cp22

0xca09,	// (0x000a7f0b) rss2_navigation_pane_g1

0xca12,	// (0x000a7f14) rss2_navigation_pane_g2

0xca1a,	// (0x000a7f1c) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000aab99) rss2_navigation_pane_g

0xca22,	// (0x000a7f24) rss2_navigation_pane_t1

0x4eca,	// (0x000a03cc) rss2_list_single_pane_ParamLimits

0x4eca,	// (0x000a03cc) rss2_list_single_pane

0xca30,	// (0x000a7f32) rss2_list_single_pane_t2

0xca3e,	// (0x000a7f40) rss2_list_single_pane_t3_ParamLimits

0xca3e,	// (0x000a7f40) rss2_list_single_pane_t3

0xca5b,	// (0x000a7f5d) rss2_list_single_pane_t4

0x3284,	// (0x0009e786) smil_status_pane_g1

0xa26e,	// (0x000a5770) main_image2_pane_ParamLimits

0xa26e,	// (0x000a5770) main_image2_pane

0x4a8b,	// (0x0009ff8d) main_camera2_pane_g9_ParamLimits

0x4a8b,	// (0x0009ff8d) main_camera2_pane_g9

0x4adf,	// (0x0009ffe1) main_camera2_pane_t5_ParamLimits

0x4adf,	// (0x0009ffe1) main_camera2_pane_t5

0x4af1,	// (0x0009fff3) main_camera2_pane_t6_ParamLimits

0x4af1,	// (0x0009fff3) main_camera2_pane_t6

0x4eed,	// (0x000a03ef) main_image2_pane_g1_ParamLimits

0x4eed,	// (0x000a03ef) main_image2_pane_g1

0x4176,	// (0x0009f678) smil2_video_pane_ParamLimits

0x4176,	// (0x0009f678) smil2_video_pane

0x0e4b,	// (0x0009c34d) aid_zoom_text_primary_cp

0x9d29,	// (0x000a522b) popup_preview_fixed_window

0xabea,	// (0x000a60ec) im_reading_pane_g1

0x49d5,	// (0x0009fed7) cams2_bc_adjust_pane_cp_ParamLimits

0x49d5,	// (0x0009fed7) cams2_bc_adjust_pane_cp

0x4b1c,	// (0x000a001e) cams2_bc_adjust_pane_ParamLimits

0x4b1c,	// (0x000a001e) cams2_bc_adjust_pane

0xcbea,	// (0x000a80ec) cams2_bc_adjust_pane_g1

0x4ef9,	// (0x000a03fb) cams2_slider_pane

0x4f02,	// (0x000a0404) cams2_slider_pane_g1

0x4f0b,	// (0x000a040d) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000aaba0) cams2_slider_pane_g

0x12a0,	// (0x0009c7a2) calc_display_pane_ParamLimits

0x12be,	// (0x0009c7c0) calc_paper_pane_ParamLimits

0x12da,	// (0x0009c7dc) grid_calc_pane_ParamLimits

0x353a,	// (0x0009ea3c) popup_clock_digital_window_t1_ParamLimits

0xb6ba,	// (0x000a6bbc) main_image_pane_t1

0x1286,	// (0x0009c788) aid_size_cell_calc_ParamLimits

0x1286,	// (0x0009c788) aid_size_cell_calc

0x4646,	// (0x0009fb48) popup_blid_sat_info2_window_ParamLimits

0x4646,	// (0x0009fb48) popup_blid_sat_info2_window

0xca71,	// (0x000a7f73) aid_size_cell_blid

0xca79,	// (0x000a7f7b) bg_popup_window_pane_cp07

0xca9c,	// (0x000a7f9e) grid_popup_blid_pane

0xcaa6,	// (0x000a7fa8) heading_pane_cp05_ParamLimits

0xcaa6,	// (0x000a7fa8) heading_pane_cp05

0xcb70,	// (0x000a8072) cell_popup_blid_pane_ParamLimits

0xcb70,	// (0x000a8072) cell_popup_blid_pane

0xcb9a,	// (0x000a809c) cell_popup_blid_pane_g1

0xcba2,	// (0x000a80a4) cell_popup_blid_pane_t1

0x4d3b,	// (0x000a023d) mup2_indicator_pane_ParamLimits

0x4d3b,	// (0x000a023d) mup2_indicator_pane

0xb43e,	// (0x000a6940) mup2_visualizer_osc_pane

0xc952,	// (0x000a7e54) mup2_visualizer_spec_pane_ParamLimits

0xc952,	// (0x000a7e54) mup2_visualizer_spec_pane

0x4f25,	// (0x000a0427) mup2_spec_half_pane

0x4f2e,	// (0x000a0430) mup2_spec_half_pane_cp

0x4f38,	// (0x000a043a) mup2_spec_bar_pane_ParamLimits

0x4f38,	// (0x000a043a) mup2_spec_bar_pane

0xc8e7,	// (0x000a7de9) mup2_spec_bar_pane_g1

0xc8f1,	// (0x000a7df3) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000aab13) mup2_spec_bar_pane_g

0x4f57,	// (0x000a0459) mup2_osc_middle_pane

0xc903,	// (0x000a7e05) mup2_visualizer_osc_pane_g1

0x9d53,	// (0x000a5255) popup_number_entry_window_t1_ParamLimits

0x9d66,	// (0x000a5268) popup_number_entry_window_t2_ParamLimits

0x9d78,	// (0x000a527a) popup_number_entry_window_t3_ParamLimits

0x10dc,	// (0x0009c5de) popup_number_entry_window_t5_ParamLimits

0x10dc,	// (0x0009c5de) popup_number_entry_window_t5

0xf0d3,	// (0x000aa5d5) popup_number_entry_window_t_ParamLimits

0x9d8a,	// (0x000a528c) text_title_cp2_ParamLimits

0x3e63,	// (0x0009f365) aid_hotspot_pointer_text2_pane

0x3efd,	// (0x0009f3ff) main_viewer_pane_g9_ParamLimits

0x3efd,	// (0x0009f3ff) main_viewer_pane_g9

0xae23,	// (0x000a6325) cale_month_pane_t1_ParamLimits

0xae49,	// (0x000a634b) bg_cale_pane_ParamLimits

0xae61,	// (0x000a6363) list_cale_pane_ParamLimits

0xae72,	// (0x000a6374) listscroll_cale_day_pane_t1

0xae84,	// (0x000a6386) scroll_pane_cp09_ParamLimits

0x3b76,	// (0x0009f078) main_mup_eq_pane_t1_ParamLimits

0x3b76,	// (0x0009f078) main_mup_eq_pane_t1

0x3b92,	// (0x0009f094) main_mup_eq_pane_t2_ParamLimits

0x3b92,	// (0x0009f094) main_mup_eq_pane_t2

0x3bae,	// (0x0009f0b0) main_mup_eq_pane_t3_ParamLimits

0x3bae,	// (0x0009f0b0) main_mup_eq_pane_t3

0x3bc8,	// (0x0009f0ca) main_mup_eq_pane_t4_ParamLimits

0x3bc8,	// (0x0009f0ca) main_mup_eq_pane_t4

0x3be2,	// (0x0009f0e4) main_mup_eq_pane_t5_ParamLimits

0x3be2,	// (0x0009f0e4) main_mup_eq_pane_t5

0x3bfc,	// (0x0009f0fe) main_mup_eq_pane_t6_ParamLimits

0x3bfc,	// (0x0009f0fe) main_mup_eq_pane_t6

0x3c12,	// (0x0009f114) main_mup_eq_pane_t7_ParamLimits

0x3c12,	// (0x0009f114) main_mup_eq_pane_t7

0x3c28,	// (0x0009f12a) main_mup_eq_pane_t8_ParamLimits

0x3c28,	// (0x0009f12a) main_mup_eq_pane_t8

0x3c3e,	// (0x0009f140) main_mup_eq_pane_t9_ParamLimits

0x3c3e,	// (0x0009f140) main_mup_eq_pane_t9

0x3c5a,	// (0x0009f15c) main_mup_eq_pane_t10_ParamLimits

0x3c5a,	// (0x0009f15c) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x000aa962) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x000aa962) main_mup_eq_pane_t

0x3d1f,	// (0x0009f221) mup_equalizer_pane_cp5_ParamLimits

0x3d37,	// (0x0009f239) mup_equalizer_pane_cp6_ParamLimits

0x3d4f,	// (0x0009f251) mup_equalizer_pane_cp7_ParamLimits

0x9ce2,	// (0x000a51e4) main_gallery_pane

0xc90c,	// (0x000a7e0e) smil2_volume_pane

0xc914,	// (0x000a7e16) smil_status_volume_pane_g1_ParamLimits

0xc927,	// (0x000a7e29) smil_status_volume_pane_g2_ParamLimits

0x4840,	// (0x0009fd42) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x000aab18) smil_status_volume_pane_g_ParamLimits

0xca79,	// (0x000a7f7b) bg_popup_window_pane_cp07_ParamLimits

0xca87,	// (0x000a7f89) blid_firmament_pane

0x4f60,	// (0x000a0462) aid_size_cell_gallery_ParamLimits

0x4f60,	// (0x000a0462) aid_size_cell_gallery

0x4f6e,	// (0x000a0470) grid_gallery_pane_ParamLimits

0x4f6e,	// (0x000a0470) grid_gallery_pane

0x4f7e,	// (0x000a0480) cell_gallery_pane_ParamLimits

0x4f7e,	// (0x000a0480) cell_gallery_pane

0xcbb0,	// (0x000a80b2) bg_cell_gallery_focus_pane_ParamLimits

0xcbb0,	// (0x000a80b2) bg_cell_gallery_focus_pane

0xcbc2,	// (0x000a80c4) cell_gallery_pane_g1_ParamLimits

0xcbc2,	// (0x000a80c4) cell_gallery_pane_g1

0x4fc4,	// (0x000a04c6) cell_gallery_pane_g2_ParamLimits

0x4fc4,	// (0x000a04c6) cell_gallery_pane_g2

0x4fd1,	// (0x000a04d3) cell_gallery_pane_g3_ParamLimits

0x4fd1,	// (0x000a04d3) cell_gallery_pane_g3

0xcbce,	// (0x000a80d0) cell_gallery_pane_g4_ParamLimits

0xcbce,	// (0x000a80d0) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000aabc6) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000aabc6) cell_gallery_pane_g

0xcbda,	// (0x000a80dc) bg_cell_gallery_focus_pane_g1

0xcbe2,	// (0x000a80e4) bg_cell_gallery_focus_pane_g2

0xcbf2,	// (0x000a80f4) bg_cell_gallery_focus_pane_g3

0xcbfa,	// (0x000a80fc) bg_cell_gallery_focus_pane_g4

0xcc02,	// (0x000a8104) bg_cell_gallery_focus_pane_g5

0xcc0a,	// (0x000a810c) bg_cell_gallery_focus_pane_g6

0xcc12,	// (0x000a8114) bg_cell_gallery_focus_pane_g7

0xcc1a,	// (0x000a811c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000aabcf) bg_cell_gallery_focus_pane_g

0xcc22,	// (0x000a8124) aid_firma_cardinal

0xcc36,	// (0x000a8138) blid_firmament_pane_t1

0xcc4d,	// (0x000a814f) blid_firmament_pane_t2

0xcc64,	// (0x000a8166) blid_firmament_pane_t3

0xcc7b,	// (0x000a817d) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000aabe0) blid_firmament_pane_t

0xcc92,	// (0x000a8194) blid_sat_info_pane

0xcca2,	// (0x000a81a4) blid_sat_info_pane_g1

0xcca2,	// (0x000a81a4) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000aabe9) blid_sat_info_pane_g

0xccac,	// (0x000a81ae) blid_sat_info_pane_t1

0xccba,	// (0x000a81bc) smil2_volume_content_pane

0xccc3,	// (0x000a81c5) smil2_volume_pane_g1

0xcccb,	// (0x000a81cd) smil2_volume_content_pane_g1

0xccd4,	// (0x000a81d6) smil2_volume_content_pane_g2

0xccdd,	// (0x000a81df) smil2_volume_content_pane_g3

0xcce6,	// (0x000a81e8) smil2_volume_content_pane_g4

0xccef,	// (0x000a81f1) smil2_volume_content_pane_g5

0xccf8,	// (0x000a81fa) smil2_volume_content_pane_g6

0xcd01,	// (0x000a8203) smil2_volume_content_pane_g7

0xcd0a,	// (0x000a820c) smil2_volume_content_pane_g8

0xcd13,	// (0x000a8215) smil2_volume_content_pane_g9

0xcd1c,	// (0x000a821e) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000aabee) smil2_volume_content_pane_g

0x1973,	// (0x0009ce75) cale_week_day_heading_pane_t1_ParamLimits

0x19b9,	// (0x0009cebb) cale_week_day_heading_pane_t2_ParamLimits

0x1a04,	// (0x0009cf06) cale_week_day_heading_pane_t3_ParamLimits

0x1a4f,	// (0x0009cf51) cale_week_day_heading_pane_t4_ParamLimits

0x1a9a,	// (0x0009cf9c) cale_week_day_heading_pane_t5_ParamLimits

0x1ae5,	// (0x0009cfe7) cale_week_day_heading_pane_t6_ParamLimits

0x1b30,	// (0x0009d032) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000aa6da) cale_week_day_heading_pane_t_ParamLimits

0xa95a,	// (0x000a5e5c) bg_cale_side_pane_ParamLimits

0x1b76,	// (0x0009d078) cale_week_time_pane_t1_ParamLimits

0x1bba,	// (0x0009d0bc) cale_week_time_pane_t2_ParamLimits

0x1bfe,	// (0x0009d100) cale_week_time_pane_t3_ParamLimits

0x1c42,	// (0x0009d144) cale_week_time_pane_t4_ParamLimits

0x1c86,	// (0x0009d188) cale_week_time_pane_t5_ParamLimits

0x1cca,	// (0x0009d1cc) cale_week_time_pane_t6_ParamLimits

0x1d0e,	// (0x0009d210) cale_week_time_pane_t7_ParamLimits

0x1d52,	// (0x0009d254) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000aa6e9) cale_week_time_pane_t_ParamLimits

0x1d9c,	// (0x0009d29e) cell_cale_week_pane_g2_ParamLimits

0xa95a,	// (0x000a5e5c) bg_cale_side_pane_cp01_ParamLimits

0x3075,	// (0x0009e577) cale_month_week_pane_t1_ParamLimits

0x308e,	// (0x0009e590) cale_month_week_pane_t2_ParamLimits

0x30a7,	// (0x0009e5a9) cale_month_week_pane_t3_ParamLimits

0x30c0,	// (0x0009e5c2) cale_month_week_pane_t4_ParamLimits

0x30d9,	// (0x0009e5db) cale_month_week_pane_t5_ParamLimits

0x30f4,	// (0x0009e5f6) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000aa7c2) cale_month_week_pane_t_ParamLimits

0x324d,	// (0x0009e74f) cell_cale_month_pane_g1_ParamLimits

0x9ce2,	// (0x000a51e4) main_cale_event_viewer_pane

0x9ce2,	// (0x000a51e4) listscroll_cale_event_viewer_pane

0xcd25,	// (0x000a8227) list_cale_ev_pane

0xcd2d,	// (0x000a822f) scroll_pane_cp023

0x4fde,	// (0x000a04e0) field_cale_ev_pane_ParamLimits

0x4fde,	// (0x000a04e0) field_cale_ev_pane

0xcd39,	// (0x000a823b) field_cale_ev_content_pane_ParamLimits

0xcd39,	// (0x000a823b) field_cale_ev_content_pane

0xcd45,	// (0x000a8247) field_cale_ev_pane_g1_ParamLimits

0xcd45,	// (0x000a8247) field_cale_ev_pane_g1

0xcd51,	// (0x000a8253) field_cale_ev_pane_g2_ParamLimits

0xcd51,	// (0x000a8253) field_cale_ev_pane_g2

0xcd69,	// (0x000a826b) field_cale_ev_pane_g3_ParamLimits

0xcd69,	// (0x000a826b) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000aac03) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000aac03) field_cale_ev_pane_g

0xcd81,	// (0x000a8283) field_cale_ev_pane_t1_ParamLimits

0xcd81,	// (0x000a8283) field_cale_ev_pane_t1

0x5002,	// (0x000a0504) field_cale_ev_content_pane_t1_ParamLimits

0x5002,	// (0x000a0504) field_cale_ev_content_pane_t1

0x3e09,	// (0x0009f30b) bg_button_pane_cp01

0x163f,	// (0x0009cb41) listscroll_cale_week_pane_ParamLimits

0x1653,	// (0x0009cb55) popup_toolbar_window_cp01

0xa91a,	// (0x000a5e1c) listscroll_cale_week_pane_t1_ParamLimits

0x163f,	// (0x0009cb41) listscroll_cale_day_pane_ParamLimits

0x1653,	// (0x0009cb55) popup_toolbar_window_cp02

0xae72,	// (0x000a6374) listscroll_cale_day_pane_t1_ParamLimits

0x163f,	// (0x0009cb41) main_cale_month_pane_ParamLimits

0x472a,	// (0x0009fc2c) popup_toolbar_window_cp03_ParamLimits

0x472a,	// (0x0009fc2c) popup_toolbar_window_cp03

0x4086,	// (0x0009f588) main_image_pane_g2_ParamLimits

0x4086,	// (0x0009f588) main_image_pane_g2

0x4092,	// (0x0009f594) main_image_pane_g3_ParamLimits

0x4092,	// (0x0009f594) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000aa9f4) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000aa9f4) main_image_pane_g

0xb6ba,	// (0x000a6bbc) main_image_pane_t1_ParamLimits

0x409e,	// (0x0009f5a0) main_image_pane_t2_ParamLimits

0x409e,	// (0x0009f5a0) main_image_pane_t2

0x40b0,	// (0x0009f5b2) main_image_pane_t3_ParamLimits

0x40b0,	// (0x0009f5b2) main_image_pane_t3

0x40c2,	// (0x0009f5c4) main_image_pane_t4_ParamLimits

0x40c2,	// (0x0009f5c4) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000aa9fb) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000aa9fb) main_image_pane_t

0x40d4,	// (0x0009f5d6) popup_image_details_window_cp01

0x40de,	// (0x0009f5e0) popup_toobar_trans_pane_cp01_ParamLimits

0x40de,	// (0x0009f5e0) popup_toobar_trans_pane_cp01

0x469b,	// (0x0009fb9d) popup_image_details_window_ParamLimits

0x469b,	// (0x0009fb9d) popup_image_details_window

0xc86b,	// (0x000a7d6d) popup_image_focus_window

0x49c7,	// (0x0009fec9) camera2_autofocus_pane_ParamLimits

0x49c7,	// (0x0009fec9) camera2_autofocus_pane

0x9ce2,	// (0x000a51e4) bg_popup_sub_pane_cp06

0xcd98,	// (0x000a829a) popup_image_focus_window_g1

0xcda0,	// (0x000a82a2) popup_image_focus_window_g2

0xcda8,	// (0x000a82aa) popup_image_focus_window_g3

0xcdb0,	// (0x000a82b2) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000aac0a) popup_image_focus_window_g

0xcdb8,	// (0x000a82ba) popup_image_focus_window_t1

0xcdc6,	// (0x000a82c8) popup_image_focus_window_t2

0xcdd6,	// (0x000a82d8) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x000aac13) popup_image_focus_window_t

0xcde4,	// (0x000a82e6) camera2_autofocus_pane_g1

0xa26e,	// (0x000a5770) bg_tb_trans_pane_cp01

0xcdf2,	// (0x000a82f4) popup_image_details_window_g1

0xce05,	// (0x000a8307) popup_image_details_window_g2

0x0002,

0xf723,	// (0x000aac25) popup_image_details_window_g

0xce2e,	// (0x000a8330) popup_image_details_window_t1

0xce40,	// (0x000a8342) popup_image_details_window_t2

0xce59,	// (0x000a835b) popup_image_details_window_t3

0xce6d,	// (0x000a836f) popup_image_details_window_t4

0xce88,	// (0x000a838a) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x000aac2c) popup_image_details_window_t

0xa7c1,	// (0x000a5cc3) bg_calc_paper_pane_ParamLimits

0x13d7,	// (0x0009c8d9) grid_highlight_pane_cp013

0x13e1,	// (0x0009c8e3) list_calc_pane_ParamLimits

0x13f3,	// (0x0009c8f5) scroll_pane_cp024

0xa7d5,	// (0x000a5cd7) bg_calc_display_pane_ParamLimits

0x13fb,	// (0x0009c8fd) calc_display_pane_t1_ParamLimits

0x1410,	// (0x0009c912) calc_display_pane_t2_ParamLimits

0x1425,	// (0x0009c927) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000aa65c) calc_display_pane_t_ParamLimits

0x14f9,	// (0x0009c9fb) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000aa679) cell_calc_pane_g

0x1502,	// (0x0009ca04) cell_calc_pane_t1

0xa834,	// (0x000a5d36) grid_highlight_pane_cp02_ParamLimits

0xa84a,	// (0x000a5d4c) toolbar_button_pane_cp01_ParamLimits

0xa84a,	// (0x000a5d4c) toolbar_button_pane_cp01

0xb6ff,	// (0x000a6c01) temp_image_control_pane_ParamLimits

0xb6ff,	// (0x000a6c01) temp_image_control_pane

0xa26e,	// (0x000a5770) main_mp3_pane

0xcea2,	// (0x000a83a4) temp_image_control_pane_g1_ParamLimits

0xcea2,	// (0x000a83a4) temp_image_control_pane_g1

0xceb0,	// (0x000a83b2) temp_image_control_pane_g2_ParamLimits

0xceb0,	// (0x000a83b2) temp_image_control_pane_g2

0xcec2,	// (0x000a83c4) temp_image_control_pane_g3_ParamLimits

0xcec2,	// (0x000a83c4) temp_image_control_pane_g3

0x504d,	// (0x000a054f) temp_image_control_pane_g4_ParamLimits

0x504d,	// (0x000a054f) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x000aac37) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x000aac37) temp_image_control_pane_g

0xcea2,	// (0x000a83a4) main_mp3_pane_g1

0x505e,	// (0x000a0560) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x000aac40) main_mp3_pane_g

0xcf05,	// (0x000a8407) main_mp3_pane_t1

0xa9bf,	// (0x000a5ec1) main_camera_pane_g8_ParamLimits

0xa9bf,	// (0x000a5ec1) main_camera_pane_g8

0x2053,	// (0x0009d555) main_video_pane_g7_ParamLimits

0x2053,	// (0x0009d555) main_video_pane_g7

0x4b0a,	// (0x000a000c) main_camera2_pane_t7_ParamLimits

0x4b0a,	// (0x000a000c) main_camera2_pane_t7

0xac41,	// (0x000a6143) scroll_pane_cp025_ParamLimits

0xac41,	// (0x000a6143) scroll_pane_cp025

0xac55,	// (0x000a6157) scroll_pane_cp026_ParamLimits

0xac55,	// (0x000a6157) scroll_pane_cp026

0xac64,	// (0x000a6166) wml_content_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_touch_calib_pane

0x5102,	// (0x000a0604) main_touch_calib_pane_g1

0x510e,	// (0x000a0610) main_touch_calib_pane_g2

0x511a,	// (0x000a061c) main_touch_calib_pane_g3

0x5126,	// (0x000a0628) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x000aac5e) main_touch_calib_pane_g

0x5132,	// (0x000a0634) main_touch_calib_pane_t1

0x5149,	// (0x000a064b) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x000aac67) main_touch_calib_pane_t

0xb37f,	// (0x000a6881) mup_progress_pane_cp02

0xb39e,	// (0x000a68a0) navi_pane_g1

0xb400,	// (0x000a6902) navi_pane_mp_t3

0xa26e,	// (0x000a5770) main_mp3_pane_ParamLimits

0x476c,	// (0x0009fc6e) navi_pane_ParamLimits

0xcea2,	// (0x000a83a4) main_mp3_pane_g1_ParamLimits

0x505e,	// (0x000a0560) main_mp3_pane_g2_ParamLimits

0x506a,	// (0x000a056c) main_mp3_pane_g3_ParamLimits

0x506a,	// (0x000a056c) main_mp3_pane_g3

0x5076,	// (0x000a0578) main_mp3_pane_g4_ParamLimits

0x5076,	// (0x000a0578) main_mp3_pane_g4

0xced2,	// (0x000a83d4) main_mp3_pane_g5_ParamLimits

0xced2,	// (0x000a83d4) main_mp3_pane_g5

0xcee0,	// (0x000a83e2) main_mp3_pane_g6_ParamLimits

0xcee0,	// (0x000a83e2) main_mp3_pane_g6

0xceed,	// (0x000a83ef) main_mp3_pane_g7_ParamLimits

0xceed,	// (0x000a83ef) main_mp3_pane_g7

0xcef9,	// (0x000a83fb) main_mp3_pane_g8_ParamLimits

0xcef9,	// (0x000a83fb) main_mp3_pane_g8

0xf73e,	// (0x000aac40) main_mp3_pane_g_ParamLimits

0x5082,	// (0x000a0584) main_mp3_pane_t2

0x5092,	// (0x000a0594) main_mp3_pane_t3

0xcf13,	// (0x000a8415) main_mp3_pane_t4

0xcf21,	// (0x000a8423) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x000aac51) main_mp3_pane_t

0xcf2f,	// (0x000a8431) mup_progress_pane_cp01

0x0e4b,	// (0x0009c34d) aid_zoom_text_secondary2

0xcd25,	// (0x000a8227) list_cale_ev2_pane

0xcd2d,	// (0x000a822f) scroll_pane_cp023_ParamLimits

0x51a4,	// (0x000a06a6) field_cale_ev2_pane_ParamLimits

0x51a4,	// (0x000a06a6) field_cale_ev2_pane

0x51bf,	// (0x000a06c1) field_cale_ev2_pane_g1_ParamLimits

0x51bf,	// (0x000a06c1) field_cale_ev2_pane_g1

0x51cb,	// (0x000a06cd) field_cale_ev2_pane_g2_ParamLimits

0x51cb,	// (0x000a06cd) field_cale_ev2_pane_g2

0x51e3,	// (0x000a06e5) field_cale_ev2_pane_g3_ParamLimits

0x51e3,	// (0x000a06e5) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x000aac72) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x000aac72) field_cale_ev2_pane_g

0x51fb,	// (0x000a06fd) field_cale_ev2_pane_t1_ParamLimits

0x51fb,	// (0x000a06fd) field_cale_ev2_pane_t1

0x5212,	// (0x000a0714) field_cale_ev2_pane_t2_ParamLimits

0x5212,	// (0x000a0714) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x000aac7b) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x000aac7b) field_cale_ev2_pane_t

0x3f65,	// (0x0009f467) main_postcard_pane_g5_ParamLimits

0x3f65,	// (0x0009f467) main_postcard_pane_g5

0x3f73,	// (0x0009f475) main_postcard_pane_g6_ParamLimits

0x3f73,	// (0x0009f475) main_postcard_pane_g6

0x1e91,	// (0x0009d393) camera2_autofocus_pane_cp_ParamLimits

0x1e91,	// (0x0009d393) camera2_autofocus_pane_cp

0xa26e,	// (0x000a5770) main_mup3_pane

0x5247,	// (0x000a0749) main_mup3_pane_g1_ParamLimits

0x5247,	// (0x000a0749) main_mup3_pane_g1

0x5268,	// (0x000a076a) main_mup3_pane_g2_ParamLimits

0x5268,	// (0x000a076a) main_mup3_pane_g2

0x52e4,	// (0x000a07e6) main_mup3_pane_g3_ParamLimits

0x52e4,	// (0x000a07e6) main_mup3_pane_g3

0x5329,	// (0x000a082b) main_mup3_pane_g4_ParamLimits

0x5329,	// (0x000a082b) main_mup3_pane_g4

0x536c,	// (0x000a086e) main_mup3_pane_g5_ParamLimits

0x536c,	// (0x000a086e) main_mup3_pane_g5

0x53b1,	// (0x000a08b3) main_mup3_pane_g6_ParamLimits

0x53b1,	// (0x000a08b3) main_mup3_pane_g6

0xcf37,	// (0x000a8439) main_mup3_pane_g7_ParamLimits

0xcf37,	// (0x000a8439) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000aac8b) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000aac8b) main_mup3_pane_g

0x5427,	// (0x000a0929) main_mup3_pane_t1_ParamLimits

0x5427,	// (0x000a0929) main_mup3_pane_t1

0x5490,	// (0x000a0992) main_mup3_pane_t2_ParamLimits

0x5490,	// (0x000a0992) main_mup3_pane_t2

0x5559,	// (0x000a0a5b) main_mup3_pane_t4_ParamLimits

0x5559,	// (0x000a0a5b) main_mup3_pane_t4

0x55ad,	// (0x000a0aaf) main_mup3_pane_t5_ParamLimits

0x55ad,	// (0x000a0aaf) main_mup3_pane_t5

0x565b,	// (0x000a0b5d) main_mup3_pane_t6_ParamLimits

0x565b,	// (0x000a0b5d) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x000aac9c) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x000aac9c) main_mup3_pane_t

0x5707,	// (0x000a0c09) mup3_progress_pane_ParamLimits

0x5707,	// (0x000a0c09) mup3_progress_pane

0x5781,	// (0x000a0c83) popup_mup3_control_window_ParamLimits

0x5781,	// (0x000a0c83) popup_mup3_control_window

0xcf45,	// (0x000a8447) popup_mup3_text_window

0x579e,	// (0x000a0ca0) mup3_progress_pane_t1

0x57bd,	// (0x000a0cbf) mup3_progress_pane_t2

0xcf4d,	// (0x000a844f) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000aaca9) mup3_progress_pane_t

0xcf6a,	// (0x000a846c) mup_progress_pane_cp03

0x9ce2,	// (0x000a51e4) bg_tb_trans_pane_cp04

0x57dc,	// (0x000a0cde) mup3_volume_pane

0x57e4,	// (0x000a0ce6) popup_mup3_control_window_g1

0xdbaa,	// (0x000a90ac) mup3_volume_pane_g1

0xdbb3,	// (0x000a90b5) mup3_volume_pane_g2

0xdbbc,	// (0x000a90be) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000aacb0) mup3_volume_pane_g

0x9ce2,	// (0x000a51e4) bg_tb_trans_pane_cp03

0xcf7a,	// (0x000a847c) popup_mup3_text_window_g1

0xcf82,	// (0x000a8484) popup_mup3_text_window_t1

0xa81d,	// (0x000a5d1f) list_calc_item_pane_g1_ParamLimits

0xc9e7,	// (0x000a7ee9) mup_volume_pane_cp_g1

0x5162,	// (0x000a0664) main_touch_calib_pane_t3

0x5178,	// (0x000a067a) main_touch_calib_pane_t4

0x518e,	// (0x000a0690) main_touch_calib_pane_t5

0x9cec,	// (0x000a51ee) aid_cell_size_toolbar2

0x9cf4,	// (0x000a51f6) aid_popup3_width_pane

0x0e3b,	// (0x0009c33d) aid_zoom_text_msg_primary

0x1e66,	// (0x0009d368) vorec_t7

0xa7e1,	// (0x000a5ce3) bg_calc_paper_pane_g1_ParamLimits

0xa7ed,	// (0x000a5cef) bg_calc_paper_pane_g2_ParamLimits

0xa7f9,	// (0x000a5cfb) bg_calc_paper_pane_g3_ParamLimits

0xa805,	// (0x000a5d07) bg_calc_paper_pane_g4_ParamLimits

0xa811,	// (0x000a5d13) bg_calc_paper_pane_g5_ParamLimits

0x1466,	// (0x0009c968) bg_calc_paper_pane_g6_ParamLimits

0x1477,	// (0x0009c979) bg_calc_paper_pane_g7_ParamLimits

0x1488,	// (0x0009c98a) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000aa663) bg_calc_paper_pane_g_ParamLimits

0x149b,	// (0x0009c99d) calc_bg_paper_pane_g9_ParamLimits

0x1f82,	// (0x0009d484) image_qvga_pane_ParamLimits

0x1f82,	// (0x0009d484) image_qvga_pane

0xa710,	// (0x000a5c12) bg_popup_sub_pane_cp04_ParamLimits

0xb636,	// (0x000a6b38) popup_mup_playback_window_g1_ParamLimits

0xb642,	// (0x000a6b44) popup_mup_playback_window_t1_ParamLimits

0xb657,	// (0x000a6b59) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000aa9ef) popup_mup_playback_window_t_ParamLimits

0x4c39,	// (0x000a013b) main_mup2_pane_g3_ParamLimits

0x4c39,	// (0x000a013b) main_mup2_pane_g3

0x2343,	// (0x0009d845) popup_toolbar_window_cp04

0xba3d,	// (0x000a6f3f) popup_call2_audio_second_window_g3_ParamLimits

0xba3d,	// (0x000a6f3f) popup_call2_audio_second_window_g3

0xbe59,	// (0x000a735b) popup_call2_audio_first_window_g4_ParamLimits

0xbe59,	// (0x000a735b) popup_call2_audio_first_window_g4

0xc4d8,	// (0x000a79da) popup_call2_audio_in_window_g4_ParamLimits

0xc4d8,	// (0x000a79da) popup_call2_audio_in_window_g4

0x4079,	// (0x0009f57b) aid_area_sk_bg_cut_ParamLimits

0x4079,	// (0x0009f57b) aid_area_sk_bg_cut

0xb66c,	// (0x000a6b6e) aid_area_sk_bg_cut_2_ParamLimits

0xb66c,	// (0x000a6b6e) aid_area_sk_bg_cut_2

0x4fb4,	// (0x000a04b6) aid_placing_details_win

0x4fbc,	// (0x000a04be) aid_placing_details_win_2

0xcde4,	// (0x000a82e6) camera2_autofocus_pane_g1_ParamLimits

0x1025,	// (0x0009c527) popup_fixed_preview_cale_window_ParamLimits

0x1025,	// (0x0009c527) popup_fixed_preview_cale_window

0xb44f,	// (0x000a6951) navi_slider_pane_g3

0xb458,	// (0x000a695a) navi_slider_pane_g4

0xb461,	// (0x000a6963) navi_slider_pane_g5

0xb44f,	// (0x000a6951) navi_slider_pane_g6

0x38e4,	// (0x0009ede6) navi_slider_pane_g7

0xb576,	// (0x000a6a78) mup_scale_pane_g3

0xb57f,	// (0x000a6a81) mup_scale_pane_g4

0xb588,	// (0x000a6a8a) mup_scale_pane_g5

0x3d67,	// (0x0009f269) mup_scale_pane_g6

0x3d70,	// (0x0009f272) mup_scale_pane_g7

0xb44f,	// (0x000a6951) cams2_slider_pane_g3

0xca69,	// (0x000a7f6b) cams2_slider_pane_g4

0x4f14,	// (0x000a0416) cams2_slider_pane_g5

0xb44f,	// (0x000a6951) cams2_slider_pane_g6

0x4f1c,	// (0x000a041e) cams2_slider_pane_g7

0xcca2,	// (0x000a81a4) camera2_autofocus_pane_cp_g1

0xc83d,	// (0x000a7d3f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc83d,	// (0x000a7d3f) bg_popup_preview_window_pane_cp02

0xcf90,	// (0x000a8492) list_fp_cale_pane_ParamLimits

0xcf90,	// (0x000a8492) list_fp_cale_pane

0xcf9c,	// (0x000a849e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf9c,	// (0x000a849e) popup_fixed_preview_cale_window_t1

0x57ed,	// (0x000a0cef) popup_fixed_preview_cale_window_t2_ParamLimits

0x57ed,	// (0x000a0cef) popup_fixed_preview_cale_window_t2

0x5802,	// (0x000a0d04) popup_fixed_preview_cale_window_t3_ParamLimits

0x5802,	// (0x000a0d04) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000aacb7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000aacb7) popup_fixed_preview_cale_window_t

0x5817,	// (0x000a0d19) list_single_fp_cale_pane_ParamLimits

0x5817,	// (0x000a0d19) list_single_fp_cale_pane

0xcfba,	// (0x000a84bc) list_single_fp_cale_pane_g1_ParamLimits

0xcfba,	// (0x000a84bc) list_single_fp_cale_pane_g1

0xcfc6,	// (0x000a84c8) list_single_fp_cale_pane_g2_ParamLimits

0xcfc6,	// (0x000a84c8) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000aacbe) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000aacbe) list_single_fp_cale_pane_g

0xcfdf,	// (0x000a84e1) list_single_fp_cale_pane_t1_ParamLimits

0xcfdf,	// (0x000a84e1) list_single_fp_cale_pane_t1

0xcff1,	// (0x000a84f3) list_single_fp_cale_pane_t2_ParamLimits

0xcff1,	// (0x000a84f3) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000aacc5) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000aacc5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ce2,	// (0x000a51e4) main_dialer_pane

0x5827,	// (0x000a0d29) aid_cell_size_keypad

0x5831,	// (0x000a0d33) dialer_ne_pane

0x583b,	// (0x000a0d3d) grid_dialer_command_1_pane

0x5843,	// (0x000a0d45) grid_dialer_command_2_pane

0x584b,	// (0x000a0d4d) grid_dialer_keypad_pane

0x585f,	// (0x000a0d61) bg_popup_call_pane_cp06_ParamLimits

0x585f,	// (0x000a0d61) bg_popup_call_pane_cp06

0x586b,	// (0x000a0d6d) dialer_ne_clear_pane_ParamLimits

0x586b,	// (0x000a0d6d) dialer_ne_clear_pane

0xd024,	// (0x000a8526) dialer_ne_pane_g1

0xd02c,	// (0x000a852e) dialer_ne_pane_t1_ParamLimits

0xd02c,	// (0x000a852e) dialer_ne_pane_t1

0x5877,	// (0x000a0d79) dialer_ne_pane_t2_ParamLimits

0x5877,	// (0x000a0d79) dialer_ne_pane_t2

0x5894,	// (0x000a0d96) dialer_ne_pane_t3_ParamLimits

0x5894,	// (0x000a0d96) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000aacca) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000aacca) dialer_ne_pane_t

0x58b8,	// (0x000a0dba) dialer_ne_pane_t3_copy1_ParamLimits

0x58b8,	// (0x000a0dba) dialer_ne_pane_t3_copy1

0x58dc,	// (0x000a0dde) cell_dialer_keypad_pane_ParamLimits

0x58dc,	// (0x000a0dde) cell_dialer_keypad_pane

0x58f3,	// (0x000a0df5) cell_dialer_command_1_pane_ParamLimits

0x58f3,	// (0x000a0df5) cell_dialer_command_1_pane

0x5909,	// (0x000a0e0b) cell_dialer_command_2_pane_ParamLimits

0x5909,	// (0x000a0e0b) cell_dialer_command_2_pane

0xd03e,	// (0x000a8540) bg_button_pane_cp02_ParamLimits

0xd03e,	// (0x000a8540) bg_button_pane_cp02

0x5918,	// (0x000a0e1a) cell_dialer_keypad_pane_g1_ParamLimits

0x5918,	// (0x000a0e1a) cell_dialer_keypad_pane_g1

0xd03e,	// (0x000a8540) bg_button_pane_cp03_ParamLimits

0xd03e,	// (0x000a8540) bg_button_pane_cp03

0x592d,	// (0x000a0e2f) cell_dialer_command_1_pane_g1_ParamLimits

0x592d,	// (0x000a0e2f) cell_dialer_command_1_pane_g1

0xd04a,	// (0x000a854c) bg_button_pane_cp04

0x5941,	// (0x000a0e43) cell_dialer_command_2_pane_g1

0xb43e,	// (0x000a6940) bg_button_pane_cp06

0xd052,	// (0x000a8554) dialer_ne_clear_pane_g1

0x381f,	// (0x0009ed21) navi_pane_g2

0x384d,	// (0x0009ed4f) navi_pane_g3

0x0002,

0xf3f0,	// (0x000aa8f2) navi_pane_g

0x3878,	// (0x0009ed7a) navi_pane_mv_g2

0x389f,	// (0x0009eda1) navi_pane_mv_g5

0x38a7,	// (0x0009eda9) navi_pane_mv_t1

0xa7d5,	// (0x000a5cd7) main_clock2_pane

0x597f,	// (0x000a0e81) main_clock2_list_pane_ParamLimits

0x597f,	// (0x000a0e81) main_clock2_list_pane

0x59a9,	// (0x000a0eab) main_clock2_pane_t1_ParamLimits

0x59a9,	// (0x000a0eab) main_clock2_pane_t1

0x59cb,	// (0x000a0ecd) main_clock2_pane_t2_ParamLimits

0x59cb,	// (0x000a0ecd) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000aacd1) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000aacd1) main_clock2_pane_t

0x5a28,	// (0x000a0f2a) popup_clock_analogue_window_cp03_ParamLimits

0x5a28,	// (0x000a0f2a) popup_clock_analogue_window_cp03

0x5a48,	// (0x000a0f4a) popup_clock_digital_window_cp02_ParamLimits

0x5a48,	// (0x000a0f4a) popup_clock_digital_window_cp02

0x5ab9,	// (0x000a0fbb) main_clock2_list_single_pane_ParamLimits

0x5ab9,	// (0x000a0fbb) main_clock2_list_single_pane

0xb43e,	// (0x000a6940) list_highlight_pane_cp05

0xd06e,	// (0x000a8570) main_clock2_list_single_pane_t1

0x2343,	// (0x0009d845) popup_toolbar_window_cp04_ParamLimits

0x501d,	// (0x000a051f) camera2_autofocus_pane_g2_ParamLimits

0x501d,	// (0x000a051f) camera2_autofocus_pane_g2

0x5029,	// (0x000a052b) camera2_autofocus_pane_g3_ParamLimits

0x5029,	// (0x000a052b) camera2_autofocus_pane_g3

0x5035,	// (0x000a0537) camera2_autofocus_pane_g4_ParamLimits

0x5035,	// (0x000a0537) camera2_autofocus_pane_g4

0x5041,	// (0x000a0543) camera2_autofocus_pane_g5_ParamLimits

0x5041,	// (0x000a0543) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x000aac1a) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x000aac1a) camera2_autofocus_pane_g

0x5227,	// (0x000a0729) camera2_autofocus_pane_cp_g2

0x522f,	// (0x000a0731) camera2_autofocus_pane_cp_g3

0x5237,	// (0x000a0739) camera2_autofocus_pane_cp_g4

0x523f,	// (0x000a0741) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x000aac80) camera2_autofocus_pane_cp_g

0x5857,	// (0x000a0d59) popup_dialer_spcha_window

0x9ce2,	// (0x000a51e4) bg_popup_sub_pane_cp07

0xd07c,	// (0x000a857e) list_spcha_pane

0xd084,	// (0x000a8586) list_single_spcha_pane_ParamLimits

0xd084,	// (0x000a8586) list_single_spcha_pane

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp06

0xd095,	// (0x000a8597) list_single_spcha_pane_t1

0xc282,	// (0x000a7784) popup_call2_audio_out_window_g4_ParamLimits

0xc282,	// (0x000a7784) popup_call2_audio_out_window_g4

0x9ce2,	// (0x000a51e4) main_imed2_pane

0xc875,	// (0x000a7d77) popup_imed_adjust2_window

0x46a9,	// (0x0009fbab) popup_imed_trans_window_ParamLimits

0x46a9,	// (0x0009fbab) popup_imed_trans_window

0xcad2,	// (0x000a7fd4) popup_blid_sat_info2_window_t1

0xcae0,	// (0x000a7fe2) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000aabaf) popup_blid_sat_info2_window_t

0x5b63,	// (0x000a1065) aid_size_cell_colour_35

0x5b7d,	// (0x000a107f) aid_size_cell_colour_112

0x5b94,	// (0x000a1096) aid_size_cell_effect

0xa26e,	// (0x000a5770) bg_tb_trans_pane_cp02

0xb137,	// (0x000a6639) heading_imed_pane

0x5bae,	// (0x000a10b0) listscroll_imed_pane

0xd0a3,	// (0x000a85a5) heading_imed_pane_g1

0xd0ab,	// (0x000a85ad) heading_imed_pane_t1

0xd0b9,	// (0x000a85bb) grid_imed_colour_35_pane_ParamLimits

0xd0b9,	// (0x000a85bb) grid_imed_colour_35_pane

0x5bba,	// (0x000a10bc) grid_imed_effect_pane

0xd0d5,	// (0x000a85d7) list_imed_aspect_pane

0x5bca,	// (0x000a10cc) scroll_pane_cp027_ParamLimits

0x5bca,	// (0x000a10cc) scroll_pane_cp027

0x5bd6,	// (0x000a10d8) cell_imed_effect_pane_ParamLimits

0x5bd6,	// (0x000a10d8) cell_imed_effect_pane

0xd0dd,	// (0x000a85df) cell_imed_colour_pane_ParamLimits

0xd0dd,	// (0x000a85df) cell_imed_colour_pane

0xd127,	// (0x000a8629) cell_imed_colour_pane_g1_ParamLimits

0xd127,	// (0x000a8629) cell_imed_colour_pane_g1

0xd138,	// (0x000a863a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd138,	// (0x000a863a) hgihlgiht_grid_pane_cp016

0x5bf2,	// (0x000a10f4) cell_imed_effect_pane_g1

0x5bfa,	// (0x000a10fc) grid_highlight_pane_cp017

0xd149,	// (0x000a864b) list_imed_single_pane_ParamLimits

0xd149,	// (0x000a864b) list_imed_single_pane

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp07

0xd15d,	// (0x000a865f) list_imed_aspect_pane_comp1_t1

0xc849,	// (0x000a7d4b) bg_tb_trans_pane_cp05

0xd17f,	// (0x000a8681) popup_imed_adjust2_window_g1

0xd1a6,	// (0x000a86a8) popup_imed_adjust2_window_t1

0xd1be,	// (0x000a86c0) slider_imed_adjust_pane

0xd1d2,	// (0x000a86d4) slider_imed_adjust_pane_g1

0xd1e2,	// (0x000a86e4) slider_imed_adjust_pane_g2

0xd1f2,	// (0x000a86f4) slider_imed_adjust_pane_g3

0xd203,	// (0x000a8705) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000aacee) slider_imed_adjust_pane_g

0x5c03,	// (0x000a1105) aid_size_cell_clipart2

0x5c0f,	// (0x000a1111) grid_imed_clipart_pane

0xd214,	// (0x000a8716) scroll_pane_cp031

0x5c19,	// (0x000a111b) cell_imed_clipart_pane_ParamLimits

0x5c19,	// (0x000a111b) cell_imed_clipart_pane

0x5c37,	// (0x000a1139) cell_imed_clipart_pane_g1

0x9ce2,	// (0x000a51e4) grid_highlight_pane_cp014

0x598b,	// (0x000a0e8d) main_clock2_pane_g1_ParamLimits

0x598b,	// (0x000a0e8d) main_clock2_pane_g1

0x5a64,	// (0x000a0f66) aid_call2_pane_cp10

0x5a76,	// (0x000a0f78) aid_call_pane_cp10

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g1

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g2

0x5a88,	// (0x000a0f8a) popup_clock_analogue_window_cp10_g3

0x5a88,	// (0x000a0f8a) popup_clock_analogue_window_cp10_g4

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000aacdc) popup_clock_analogue_window_cp10_g

0x5a9a,	// (0x000a0f9c) popup_clock_analogue_window_cp10_t1

0x5acb,	// (0x000a0fcd) clock_digital_number_pane_cp10_ParamLimits

0x5acb,	// (0x000a0fcd) clock_digital_number_pane_cp10

0x5ae3,	// (0x000a0fe5) clock_digital_number_pane_cp11_ParamLimits

0x5ae3,	// (0x000a0fe5) clock_digital_number_pane_cp11

0x5afb,	// (0x000a0ffd) clock_digital_number_pane_cp12_ParamLimits

0x5afb,	// (0x000a0ffd) clock_digital_number_pane_cp12

0x5b13,	// (0x000a1015) clock_digital_number_pane_cp13_ParamLimits

0x5b13,	// (0x000a1015) clock_digital_number_pane_cp13

0x5b2b,	// (0x000a102d) clock_digital_separator_pane_cp10_ParamLimits

0x5b2b,	// (0x000a102d) clock_digital_separator_pane_cp10

0x5b43,	// (0x000a1045) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b43,	// (0x000a1045) popup_clock_digital_window_cp02_t1

0xa708,	// (0x000a5c0a) clock_digital_number_pane_cp10_g1

0xa708,	// (0x000a5c0a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000aacf7) clock_digital_number_pane_cp10_g

0xa708,	// (0x000a5c0a) clock_digital_separator_pane_cp10_g1

0xa708,	// (0x000a5c0a) clock_digital_separator_pane_g2_cp10

0xb40e,	// (0x000a6910) navi_pane_vded_g4

0xb417,	// (0x000a6919) navi_pane_vded_g5

0xb420,	// (0x000a6922) navi_pane_vded_t1

0x9ce2,	// (0x000a51e4) main_vded_pane

0x5c40,	// (0x000a1142) main_vded_pane_g1

0x5c4c,	// (0x000a114e) main_vded_pane_g2

0x5c56,	// (0x000a1158) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000aacfc) main_vded_pane_g

0x5c60,	// (0x000a1162) main_vded_pane_t1

0x5c6e,	// (0x000a1170) main_vded_pane_t2

0x0001,

0xf801,	// (0x000aad03) main_vded_pane_t

0x5c7c,	// (0x000a117e) vded_slider_pane

0x5c86,	// (0x000a1188) vded_video_pane

0xd21c,	// (0x000a871e) vded_video_pane_g1

0x5c92,	// (0x000a1194) vded_video_pane_g2

0xcca2,	// (0x000a81a4) vded_video_pane_g3

0x0002,

0xf806,	// (0x000aad08) vded_video_pane_g

0xd226,	// (0x000a8728) vded_slider_pane_g1

0xc9e7,	// (0x000a7ee9) vded_slider_pane_g2

0xd22f,	// (0x000a8731) vded_slider_pane_g3

0xd238,	// (0x000a873a) vded_slider_pane_g4

0xd241,	// (0x000a8743) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000aad0f) vded_slider_pane_g

0x5775,	// (0x000a0c77) mup3_rocker_pane_ParamLimits

0x5775,	// (0x000a0c77) mup3_rocker_pane

0x5c9b,	// (0x000a119d) mup3_control_keys_pane_g1

0x5ca3,	// (0x000a11a5) mup3_control_keys_pane_g2

0x5cab,	// (0x000a11ad) mup3_control_keys_pane_g3

0x5cb3,	// (0x000a11b5) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000aad1a) mup3_control_keys_pane_g

0x1043,	// (0x0009c545) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1043,	// (0x0009c545) popup_toolbar2_fixed_window_cp01

0x5791,	// (0x000a0c93) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5791,	// (0x000a0c93) popup_toolbar2_fixed_window_cp02

0xbbaf,	// (0x000a70b1) popup_call2_audio_second_window_t4_ParamLimits

0xbbaf,	// (0x000a70b1) popup_call2_audio_second_window_t4

0xc0ef,	// (0x000a75f1) popup_call2_audio_first_window_t6_ParamLimits

0xc0ef,	// (0x000a75f1) popup_call2_audio_first_window_t6

0xc385,	// (0x000a7887) popup_call2_audio_out_window_t6_ParamLimits

0xc385,	// (0x000a7887) popup_call2_audio_out_window_t6

0x9ce2,	// (0x000a51e4) main_vitu_pane

0x5cc3,	// (0x000a11c5) aid_size_cell_itu_ParamLimits

0x5cc3,	// (0x000a11c5) aid_size_cell_itu

0x106b,	// (0x0009c56d) bg_popup_window_pane_cp08_ParamLimits

0x106b,	// (0x0009c56d) bg_popup_window_pane_cp08

0x5cd1,	// (0x000a11d3) field_vitu_entry_pane_ParamLimits

0x5cd1,	// (0x000a11d3) field_vitu_entry_pane

0x5ce0,	// (0x000a11e2) grid_vitu_function_pane_ParamLimits

0x5ce0,	// (0x000a11e2) grid_vitu_function_pane

0x5cf0,	// (0x000a11f2) grid_vitu_itu_pane_ParamLimits

0x5cf0,	// (0x000a11f2) grid_vitu_itu_pane

0x5d00,	// (0x000a1202) cell_vitu_itu_pane_ParamLimits

0x5d00,	// (0x000a1202) cell_vitu_itu_pane

0x5d17,	// (0x000a1219) cell_vitu_function_pane_ParamLimits

0x5d17,	// (0x000a1219) cell_vitu_function_pane

0xa26e,	// (0x000a5770) bg_popup_sub_pane_cp08_ParamLimits

0xa26e,	// (0x000a5770) bg_popup_sub_pane_cp08

0x5d2b,	// (0x000a122d) field_vitu_entry_pane_t1_ParamLimits

0x5d2b,	// (0x000a122d) field_vitu_entry_pane_t1

0xd262,	// (0x000a8764) field_vitu_entry_pane_t2_ParamLimits

0xd262,	// (0x000a8764) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000aad28) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000aad28) field_vitu_entry_pane_t

0xd27f,	// (0x000a8781) bg_button_pane_cp05_ParamLimits

0xd27f,	// (0x000a8781) bg_button_pane_cp05

0x5d45,	// (0x000a1247) cell_vitu_itu_pane_g1

0x5d5d,	// (0x000a125f) cell_vitu_itu_pane_t1_ParamLimits

0x5d5d,	// (0x000a125f) cell_vitu_itu_pane_t1

0x5d6f,	// (0x000a1271) cell_vitu_itu_pane_t2_ParamLimits

0x5d6f,	// (0x000a1271) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000aad2d) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000aad2d) cell_vitu_itu_pane_t

0xd28d,	// (0x000a878f) bg_button_pane_cp07

0x5db2,	// (0x000a12b4) cell_vitu_function_pane_g1

0x12fe,	// (0x0009c800) main_calc_pane_g1

0x0e2f,	// (0x0009c331) aid_visual_content_pane

0x9ce2,	// (0x000a51e4) main_vradio_pane

0x5dbb,	// (0x000a12bd) main_vradio_pane_g1_ParamLimits

0x5dbb,	// (0x000a12bd) main_vradio_pane_g1

0xd297,	// (0x000a8799) main_vradio_pane_g2_ParamLimits

0xd297,	// (0x000a8799) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000aad34) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000aad34) main_vradio_pane_g

0x5dc9,	// (0x000a12cb) main_vradio_pane_t1_ParamLimits

0x5dc9,	// (0x000a12cb) main_vradio_pane_t1

0x5ddb,	// (0x000a12dd) main_vradio_pane_t2_ParamLimits

0x5ddb,	// (0x000a12dd) main_vradio_pane_t2

0xd2a4,	// (0x000a87a6) main_vradio_pane_t3_ParamLimits

0xd2a4,	// (0x000a87a6) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000aad39) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000aad39) main_vradio_pane_t

0x5ded,	// (0x000a12ef) vradio_rocker_control_pane_ParamLimits

0x5ded,	// (0x000a12ef) vradio_rocker_control_pane

0x5df9,	// (0x000a12fb) vradio_station_info_pane_ParamLimits

0x5df9,	// (0x000a12fb) vradio_station_info_pane

0xd2b8,	// (0x000a87ba) vradio_frequency_info_pane_ParamLimits

0xd2b8,	// (0x000a87ba) vradio_frequency_info_pane

0xcca2,	// (0x000a81a4) vradio_station_info_pane_g1

0xd2c7,	// (0x000a87c9) vradio_station_info_pane_t1_ParamLimits

0xd2c7,	// (0x000a87c9) vradio_station_info_pane_t1

0xd2e9,	// (0x000a87eb) vradio_station_info_pane_t2_ParamLimits

0xd2e9,	// (0x000a87eb) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000aad40) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000aad40) vradio_station_info_pane_t

0xd2fb,	// (0x000a87fd) vradio_tuning_pane

0xd303,	// (0x000a8805) vradio_rocker_control_pane_g1

0xd30b,	// (0x000a880d) vradio_rocker_control_pane_g2

0xd313,	// (0x000a8815) vradio_rocker_control_pane_g3

0xd31b,	// (0x000a881d) vradio_rocker_control_pane_g4

0xd323,	// (0x000a8825) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000aad45) vradio_rocker_control_pane_g

0x5e06,	// (0x000a1308) vradio_frequency_info_pane_g1

0xd32b,	// (0x000a882d) vradio_frequency_info_pane_t1_ParamLimits

0xd32b,	// (0x000a882d) vradio_frequency_info_pane_t1

0x5e10,	// (0x000a1312) vradio_tuning_pane_g1

0x5e1b,	// (0x000a131d) vradio_tuning_pane_t1

0x9d00,	// (0x000a5202) area_side_right_pane_ParamLimits

0x9d00,	// (0x000a5202) area_side_right_pane

0xc804,	// (0x000a7d06) status_small_pane_g1

0xc80c,	// (0x000a7d0e) status_small_pane_g2

0xc815,	// (0x000a7d17) status_small_pane_g3

0xc81e,	// (0x000a7d20) status_small_pane_g4

0x0003,

0xf603,	// (0x000aab05) status_small_pane_g

0xc827,	// (0x000a7d29) status_small_pane_t1

0x9ce2,	// (0x000a51e4) main_video3_pane

0xd33f,	// (0x000a8841) cams_zoom_vslider_pane

0xd347,	// (0x000a8849) image3_wide_pane_ParamLimits

0xd347,	// (0x000a8849) image3_wide_pane

0xd361,	// (0x000a8863) image3_wide_small_pane

0xd36d,	// (0x000a886f) main_video3_pane_g1_ParamLimits

0xd36d,	// (0x000a886f) main_video3_pane_g1

0xd389,	// (0x000a888b) main_video3_pane_g2_ParamLimits

0xd389,	// (0x000a888b) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000aad50) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000aad50) main_video3_pane_g

0xd3a5,	// (0x000a88a7) main_video3_pane_t1_ParamLimits

0xd3a5,	// (0x000a88a7) main_video3_pane_t1

0xd3d0,	// (0x000a88d2) main_video3_pane_t2_ParamLimits

0xd3d0,	// (0x000a88d2) main_video3_pane_t2

0xd3fd,	// (0x000a88ff) main_video3_pane_t3_ParamLimits

0xd3fd,	// (0x000a88ff) main_video3_pane_t3

0x0002,

0xf853,	// (0x000aad55) main_video3_pane_t_ParamLimits

0xf853,	// (0x000aad55) main_video3_pane_t

0xd42a,	// (0x000a892c) cams_zoom_vslider_pane_g1

0xd433,	// (0x000a8935) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000aad5c) cams_zoom_vslider_pane_g

0xd43b,	// (0x000a893d) small_slider_vertical_pane

0xcca2,	// (0x000a81a4) small_slider_vertical_pane_g1

0xcca2,	// (0x000a81a4) small_slider_vertical_pane_g2

0xd443,	// (0x000a8945) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000aad61) small_slider_vertical_pane_g

0x9ce2,	// (0x000a51e4) main_hwr_training_pane

0xd44c,	// (0x000a894e) hwr_training_instruct_pane_ParamLimits

0xd44c,	// (0x000a894e) hwr_training_instruct_pane

0x5e2a,	// (0x000a132c) hwr_training_navi_pane_ParamLimits

0x5e2a,	// (0x000a132c) hwr_training_navi_pane

0x5e44,	// (0x000a1346) hwr_training_write_pane_ParamLimits

0x5e44,	// (0x000a1346) hwr_training_write_pane

0x9ce2,	// (0x000a51e4) bg_frame_shadow_pane

0xd483,	// (0x000a8985) hwr_training_write_pane_g1

0xd48b,	// (0x000a898d) hwr_training_write_pane_g2

0xd493,	// (0x000a8995) hwr_training_write_pane_g3

0xd49b,	// (0x000a899d) hwr_training_write_pane_g4

0xd4a3,	// (0x000a89a5) hwr_training_write_pane_g5

0xd4ab,	// (0x000a89ad) hwr_training_write_pane_g6

0xd4b3,	// (0x000a89b5) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000aad68) hwr_training_write_pane_g

0x5e7c,	// (0x000a137e) hwr_training_navi_pane_g1_ParamLimits

0x5e7c,	// (0x000a137e) hwr_training_navi_pane_g1

0x5e8e,	// (0x000a1390) hwr_training_navi_pane_g2_ParamLimits

0x5e8e,	// (0x000a1390) hwr_training_navi_pane_g2

0x5ea0,	// (0x000a13a2) hwr_training_navi_pane_g3_ParamLimits

0x5ea0,	// (0x000a13a2) hwr_training_navi_pane_g3

0x5eb0,	// (0x000a13b2) hwr_training_navi_pane_g4_ParamLimits

0x5eb0,	// (0x000a13b2) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000aad77) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000aad77) hwr_training_navi_pane_g

0x5eca,	// (0x000a13cc) hwr_training_navi_pane_t1

0x5ed8,	// (0x000a13da) list_single_hwr_training_instruct_pane_ParamLimits

0x5ed8,	// (0x000a13da) list_single_hwr_training_instruct_pane

0xd4bb,	// (0x000a89bd) list_single_hwr_training_instruct_pane_t1

0xcbda,	// (0x000a80dc) bg_frame_shadow_pane_g1

0xd4ca,	// (0x000a89cc) bg_frame_shadow_pane_g2

0xd4d2,	// (0x000a89d4) bg_frame_shadow_pane_g3

0xd4da,	// (0x000a89dc) bg_frame_shadow_pane_g4

0xd4e2,	// (0x000a89e4) bg_frame_shadow_pane_g5

0xd4ea,	// (0x000a89ec) bg_frame_shadow_pane_g6

0xd4f2,	// (0x000a89f4) bg_frame_shadow_pane_g7

0xa8a0,	// (0x000a5da2) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000aad82) bg_frame_shadow_pane_g

0x9ce2,	// (0x000a51e4) main_video_tele_dialer_pane

0x5ef1,	// (0x000a13f3) aid_size_cell_video_keypad_ParamLimits

0x5ef1,	// (0x000a13f3) aid_size_cell_video_keypad

0x5f01,	// (0x000a1403) grid_video_dialer_keypad_pane_ParamLimits

0x5f01,	// (0x000a1403) grid_video_dialer_keypad_pane

0x5f33,	// (0x000a1435) video_down_pane_cp_ParamLimits

0x5f33,	// (0x000a1435) video_down_pane_cp

0x5f5b,	// (0x000a145d) cell_video_dialer_keypad_pane_ParamLimits

0x5f5b,	// (0x000a145d) cell_video_dialer_keypad_pane

0xd4fa,	// (0x000a89fc) bg_button_pane_cp08_ParamLimits

0xd4fa,	// (0x000a89fc) bg_button_pane_cp08

0x5f72,	// (0x000a1474) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f72,	// (0x000a1474) cell_video_dialer_keypad_pane_g1

0x5769,	// (0x000a0c6b) mup3_rocker2_pane_ParamLimits

0x5769,	// (0x000a0c6b) mup3_rocker2_pane

0xcca2,	// (0x000a81a4) mup3_rocker2_pane_g1

0x462b,	// (0x0009fb2d) main_dialer2_pane

0x9ce2,	// (0x000a51e4) main_mp4_pane

0x5fb1,	// (0x000a14b3) main_mp4_pane_g1_ParamLimits

0x5fb1,	// (0x000a14b3) main_mp4_pane_g1

0x5fbf,	// (0x000a14c1) main_mp4_pane_g2_ParamLimits

0x5fbf,	// (0x000a14c1) main_mp4_pane_g2

0x5fcd,	// (0x000a14cf) main_mp4_pane_g3_ParamLimits

0x5fcd,	// (0x000a14cf) main_mp4_pane_g3

0x6020,	// (0x000a1522) main_mp4_pane_g4_ParamLimits

0x6020,	// (0x000a1522) main_mp4_pane_g4

0x6048,	// (0x000a154a) main_mp4_pane_g5_ParamLimits

0x6048,	// (0x000a154a) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000aada2) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000aada2) main_mp4_pane_g

0x6098,	// (0x000a159a) main_mp4_pane_t1_ParamLimits

0x6098,	// (0x000a159a) main_mp4_pane_t1

0x60f4,	// (0x000a15f6) main_mp4_pane_t2_ParamLimits

0x60f4,	// (0x000a15f6) main_mp4_pane_t2

0xd506,	// (0x000a8a08) main_mp4_pane_t3_ParamLimits

0xd506,	// (0x000a8a08) main_mp4_pane_t3

0x6146,	// (0x000a1648) main_mp4_pane_t4_ParamLimits

0x6146,	// (0x000a1648) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000aadaf) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000aadaf) main_mp4_pane_t

0x6186,	// (0x000a1688) mp4_progress_pane_ParamLimits

0x6186,	// (0x000a1688) mp4_progress_pane

0x61d0,	// (0x000a16d2) mp4_rocker_pane_ParamLimits

0x61d0,	// (0x000a16d2) mp4_rocker_pane

0xd52e,	// (0x000a8a30) mp4_progress_pane_t1

0xd547,	// (0x000a8a49) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000aadb8) mp4_progress_pane_t

0xd560,	// (0x000a8a62) mup_progress_pane_cp04

0xdbc5,	// (0x000a90c7) mp4_rocker_pane_g1

0x61f2,	// (0x000a16f4) aid_cell_size_keypad2_ParamLimits

0x61f2,	// (0x000a16f4) aid_cell_size_keypad2

0x6202,	// (0x000a1704) dialer2_ne_pane_ParamLimits

0x6202,	// (0x000a1704) dialer2_ne_pane

0x620e,	// (0x000a1710) grid_dialer2_keypad_pane_ParamLimits

0x620e,	// (0x000a1710) grid_dialer2_keypad_pane

0xdbcf,	// (0x000a90d1) bg_popup_call_pane_cp07_ParamLimits

0xdbcf,	// (0x000a90d1) bg_popup_call_pane_cp07

0x621c,	// (0x000a171e) dialer2_ne_pane_t1_ParamLimits

0x621c,	// (0x000a171e) dialer2_ne_pane_t1

0x6241,	// (0x000a1743) cell_dialer2_keypad_pane_ParamLimits

0x6241,	// (0x000a1743) cell_dialer2_keypad_pane

0xd57e,	// (0x000a8a80) bg_button_pane_pane_cp04_ParamLimits

0xd57e,	// (0x000a8a80) bg_button_pane_pane_cp04

0x6258,	// (0x000a175a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6258,	// (0x000a175a) cell_dialer2_keypad_pane_g1

0x2215,	// (0x0009d717) aid_placing_vt_set_content_ParamLimits

0x2215,	// (0x0009d717) aid_placing_vt_set_content

0x223d,	// (0x0009d73f) aid_placing_vt_set_title_ParamLimits

0x223d,	// (0x0009d73f) aid_placing_vt_set_title

0x9ce2,	// (0x000a51e4) main_image3_pane

0x62f2,	// (0x000a17f4) area_side_right_pane_cp01_ParamLimits

0x62f2,	// (0x000a17f4) area_side_right_pane_cp01

0x6321,	// (0x000a1823) main_image3_pane_g1_ParamLimits

0x6321,	// (0x000a1823) main_image3_pane_g1

0x632f,	// (0x000a1831) main_image3_pane_g2_ParamLimits

0x632f,	// (0x000a1831) main_image3_pane_g2

0x6348,	// (0x000a184a) main_image3_pane_g3_ParamLimits

0x6348,	// (0x000a184a) main_image3_pane_g3

0x6361,	// (0x000a1863) main_image3_pane_g4_ParamLimits

0x6361,	// (0x000a1863) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000aadc7) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000aadc7) main_image3_pane_g

0x637a,	// (0x000a187c) main_image3_pane_t1_ParamLimits

0x637a,	// (0x000a187c) main_image3_pane_t1

0x639f,	// (0x000a18a1) main_image3_pane_t2_ParamLimits

0x639f,	// (0x000a18a1) main_image3_pane_t2

0x63be,	// (0x000a18c0) main_image3_pane_t3_ParamLimits

0x63be,	// (0x000a18c0) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000aadd0) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000aadd0) main_image3_pane_t

0x106b,	// (0x0009c56d) grid_sctrl_middle_pane_cp01_ParamLimits

0x106b,	// (0x0009c56d) grid_sctrl_middle_pane_cp01

0x641f,	// (0x000a1921) cell_sctrl_middle_pane_cp01_ParamLimits

0x641f,	// (0x000a1921) cell_sctrl_middle_pane_cp01

0x6430,	// (0x000a1932) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6430,	// (0x000a1932) cell_sctrl_middle_pane_cp01_g1

0x9ce2,	// (0x000a51e4) main_call4_pane

0x643d,	// (0x000a193f) aid_size_button_call4_ParamLimits

0x643d,	// (0x000a193f) aid_size_button_call4

0x646f,	// (0x000a1971) call4_windows_pane_ParamLimits

0x646f,	// (0x000a1971) call4_windows_pane

0x648b,	// (0x000a198d) grid_call4_button_pane_ParamLimits

0x648b,	// (0x000a198d) grid_call4_button_pane

0xd58a,	// (0x000a8a8c) call4_windows_conf_pane

0x64af,	// (0x000a19b1) popup_call4_audio_first_window_ParamLimits

0x64af,	// (0x000a19b1) popup_call4_audio_first_window

0x64db,	// (0x000a19dd) popup_call4_audio_second_window_ParamLimits

0x64db,	// (0x000a19dd) popup_call4_audio_second_window

0xd5c7,	// (0x000a8ac9) popup_call4_audio_wait_window_ParamLimits

0xd5c7,	// (0x000a8ac9) popup_call4_audio_wait_window

0x64ef,	// (0x000a19f1) cell_call4_button_pane_ParamLimits

0x64ef,	// (0x000a19f1) cell_call4_button_pane

0x6512,	// (0x000a1a14) bg_button_pane_cp09_ParamLimits

0x6512,	// (0x000a1a14) bg_button_pane_cp09

0x651e,	// (0x000a1a20) cell_call4_button_pane_g1_ParamLimits

0x651e,	// (0x000a1a20) cell_call4_button_pane_g1

0x652b,	// (0x000a1a2d) cell_call4_button_pane_t1_ParamLimits

0x652b,	// (0x000a1a2d) cell_call4_button_pane_t1

0xd60f,	// (0x000a8b11) popup_call4_audio_conf_window_ParamLimits

0xd60f,	// (0x000a8b11) popup_call4_audio_conf_window

0x579e,	// (0x000a0ca0) mup3_progress_pane_t1_ParamLimits

0x57bd,	// (0x000a0cbf) mup3_progress_pane_t2_ParamLimits

0xcf4d,	// (0x000a844f) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000aaca9) mup3_progress_pane_t_ParamLimits

0xcf6a,	// (0x000a846c) mup_progress_pane_cp03_ParamLimits

0x5cbb,	// (0x000a11bd) mup3_control_keys_pane_g4_copy1

0x61b4,	// (0x000a16b6) mp4_rocker2_pane_ParamLimits

0x61b4,	// (0x000a16b6) mp4_rocker2_pane

0xd629,	// (0x000a8b2b) mp4_rocker2_pane_g1

0xd631,	// (0x000a8b33) mp4_rocker2_pane_g2

0x653d,	// (0x000a1a3f) mp4_rocker2_pane_g3

0x6545,	// (0x000a1a47) mp4_rocker2_pane_g4

0x654d,	// (0x000a1a4f) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000aadd9) mp4_rocker2_pane_g

0x9ce2,	// (0x000a51e4) main_camera4_pane

0x9ce2,	// (0x000a51e4) main_video4_pane

0x5f0f,	// (0x000a1411) main_video_tele_dialer_pane_t1_ParamLimits

0x5f0f,	// (0x000a1411) main_video_tele_dialer_pane_t1

0x5f21,	// (0x000a1423) main_video_tele_dialer_pane_t2_ParamLimits

0x5f21,	// (0x000a1423) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000aad93) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000aad93) main_video_tele_dialer_pane_t

0x656d,	// (0x000a1a6f) cam4_autofocus_pane_ParamLimits

0x656d,	// (0x000a1a6f) cam4_autofocus_pane

0x6585,	// (0x000a1a87) cam4_image_uncrop_pane_ParamLimits

0x6585,	// (0x000a1a87) cam4_image_uncrop_pane

0x659e,	// (0x000a1aa0) cam4_indicators_pane_ParamLimits

0x659e,	// (0x000a1aa0) cam4_indicators_pane

0x65ba,	// (0x000a1abc) main_camera4_pane_g1_ParamLimits

0x65ba,	// (0x000a1abc) main_camera4_pane_g1

0x65c6,	// (0x000a1ac8) main_camera4_pane_g2_ParamLimits

0x65c6,	// (0x000a1ac8) main_camera4_pane_g2

0x65c6,	// (0x000a1ac8) main_camera4_pane_g3_ParamLimits

0x65c6,	// (0x000a1ac8) main_camera4_pane_g3

0x65d2,	// (0x000a1ad4) main_camera4_pane_g4_ParamLimits

0x65d2,	// (0x000a1ad4) main_camera4_pane_g4

0x65de,	// (0x000a1ae0) main_camera4_pane_g5_ParamLimits

0x65de,	// (0x000a1ae0) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000aade4) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000aade4) main_camera4_pane_g

0x65f8,	// (0x000a1afa) main_camera4_pane_t1_ParamLimits

0x65f8,	// (0x000a1afa) main_camera4_pane_t1

0x6642,	// (0x000a1b44) bg_tb_trans_pane_cp06

0x6658,	// (0x000a1b5a) cam4_indicators_pane_g1

0x6669,	// (0x000a1b6b) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000aadff) cam4_indicators_pane_g

0x6681,	// (0x000a1b83) cam4_indicators_pane_t1

0x66ab,	// (0x000a1bad) main_video4_pane_g1_ParamLimits

0x66ab,	// (0x000a1bad) main_video4_pane_g1

0x66b7,	// (0x000a1bb9) main_video4_pane_g2_ParamLimits

0x66b7,	// (0x000a1bb9) main_video4_pane_g2

0x66c3,	// (0x000a1bc5) main_video4_pane_g3_ParamLimits

0x66c3,	// (0x000a1bc5) main_video4_pane_g3

0x66cf,	// (0x000a1bd1) main_video4_pane_g4_ParamLimits

0x66cf,	// (0x000a1bd1) main_video4_pane_g4

0x0004,

0xf904,	// (0x000aae06) main_video4_pane_g_ParamLimits

0xf904,	// (0x000aae06) main_video4_pane_g

0x66f1,	// (0x000a1bf3) vid4_indicators_pane_ParamLimits

0x66f1,	// (0x000a1bf3) vid4_indicators_pane

0x6710,	// (0x000a1c12) video4_image_uncrop_cif_pane_ParamLimits

0x6710,	// (0x000a1c12) video4_image_uncrop_cif_pane

0x671f,	// (0x000a1c21) video4_image_uncrop_nhd_pane_ParamLimits

0x671f,	// (0x000a1c21) video4_image_uncrop_nhd_pane

0x6585,	// (0x000a1a87) video4_image_uncrop_vga_pane_ParamLimits

0x6585,	// (0x000a1a87) video4_image_uncrop_vga_pane

0x672e,	// (0x000a1c30) bg_tb_trans_pane_cp07

0x6746,	// (0x000a1c48) vid4_indicators_pane_g1

0x675c,	// (0x000a1c5e) vid4_indicators_pane_g2

0x6770,	// (0x000a1c72) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000aae11) vid4_indicators_pane_g

0x67a1,	// (0x000a1ca3) vid4_indicators_pane_t1

0x67b8,	// (0x000a1cba) cam4_autofocus_pane_g1

0x67c0,	// (0x000a1cc2) cam4_autofocus_pane_g2

0x67c8,	// (0x000a1cca) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000aae1c) cam4_autofocus_pane_g

0x67d0,	// (0x000a1cd2) cam4_autofocus_pane_g3_copy1

0x5f3f,	// (0x000a1441) video_down_pane_cp_t1

0x5f4d,	// (0x000a144f) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000aad98) video_down_pane_cp_t

0x106b,	// (0x0009c56d) popup_vitu2_window_ParamLimits

0x106b,	// (0x0009c56d) popup_vitu2_window

0x67d8,	// (0x000a1cda) aid_size_cell2_itu2_ParamLimits

0x67d8,	// (0x000a1cda) aid_size_cell2_itu2

0x67fa,	// (0x000a1cfc) aid_size_cell_itu2_ParamLimits

0x67fa,	// (0x000a1cfc) aid_size_cell_itu2

0x683e,	// (0x000a1d40) bg_popup_window_pane_cp09_ParamLimits

0x683e,	// (0x000a1d40) bg_popup_window_pane_cp09

0x684c,	// (0x000a1d4e) field_vitu2_entry_pane_ParamLimits

0x684c,	// (0x000a1d4e) field_vitu2_entry_pane

0x686c,	// (0x000a1d6e) grid_vitu2_function_pane_ParamLimits

0x686c,	// (0x000a1d6e) grid_vitu2_function_pane

0x68b0,	// (0x000a1db2) grid_vitu2_itu_pane_ParamLimits

0x68b0,	// (0x000a1db2) grid_vitu2_itu_pane

0x6924,	// (0x000a1e26) cell_vitu2_itu_pane_ParamLimits

0x6924,	// (0x000a1e26) cell_vitu2_itu_pane

0x693b,	// (0x000a1e3d) cell_vitu2_function_pane_ParamLimits

0x693b,	// (0x000a1e3d) cell_vitu2_function_pane

0xd639,	// (0x000a8b3b) bg_popup_call_pane_cp08_ParamLimits

0xd639,	// (0x000a8b3b) bg_popup_call_pane_cp08

0xd652,	// (0x000a8b54) field_vitu2_entry_pane_g1

0xd65e,	// (0x000a8b60) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x000aae23) field_vitu2_entry_pane_g

0x697f,	// (0x000a1e81) field_vitu2_entry_pane_t1_ParamLimits

0x697f,	// (0x000a1e81) field_vitu2_entry_pane_t1

0xa27c,	// (0x000a577e) field_vitu2_entry_pane_t2_ParamLimits

0xa27c,	// (0x000a577e) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x000aae2a) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x000aae2a) field_vitu2_entry_pane_t

0x69ac,	// (0x000a1eae) bg_button_pane_cp010_ParamLimits

0x69ac,	// (0x000a1eae) bg_button_pane_cp010

0x69ba,	// (0x000a1ebc) cell_vitu2_itu_pane_g1

0x69d8,	// (0x000a1eda) cell_vitu2_itu_pane_t1_ParamLimits

0x69d8,	// (0x000a1eda) cell_vitu2_itu_pane_t1

0x0d34,	// (0x0009c236) cell_vitu2_itu_pane_t2_ParamLimits

0x0d34,	// (0x0009c236) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x000aae34) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x000aae34) cell_vitu2_itu_pane_t

0x672e,	// (0x000a1c30) bg_button_pane_cp011

0x6a2a,	// (0x000a1f2c) cell_vitu2_function_pane_g1

0x9ce2,	// (0x000a51e4) main_myfav_hc_pane

0x6400,	// (0x000a1902) popup_image3_note_pane_ParamLimits

0x6400,	// (0x000a1902) popup_image3_note_pane

0x640e,	// (0x000a1910) popup_image3_tool_bar_pane_ParamLimits

0x640e,	// (0x000a1910) popup_image3_tool_bar_pane

0x0da2,	// (0x0009c2a4) cell_vitu2_itu_pane_t3_ParamLimits

0x0da2,	// (0x0009c2a4) cell_vitu2_itu_pane_t3

0x9ce2,	// (0x000a51e4) bg_popup_trans_pane

0xd680,	// (0x000a8b82) grid_image3_tool_bar_pane

0xd68a,	// (0x000a8b8c) bg_popup_trans_pane_g1

0xad4a,	// (0x000a624c) bg_popup_trans_pane_g2

0xd692,	// (0x000a8b94) bg_popup_trans_pane_g3

0xd69a,	// (0x000a8b9c) bg_popup_trans_pane_g4

0xd6a2,	// (0x000a8ba4) bg_popup_trans_pane_g5

0xd6aa,	// (0x000a8bac) bg_popup_trans_pane_g6

0xd6b2,	// (0x000a8bb4) bg_popup_trans_pane_g7

0xd6ba,	// (0x000a8bbc) bg_popup_trans_pane_g8

0xad2a,	// (0x000a622c) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x000aae3b) bg_popup_trans_pane_g

0xd6c2,	// (0x000a8bc4) cell_image3_tool_bar_pane_ParamLimits

0xd6c2,	// (0x000a8bc4) cell_image3_tool_bar_pane

0xcca2,	// (0x000a81a4) cell_image3_tool_bar_pane_g1

0x9ce2,	// (0x000a51e4) bg_popup_trans_pane_cp1

0xd6d8,	// (0x000a8bda) popup_image3_note_pane_t1

0xd6e6,	// (0x000a8be8) popup_image3_note_pane_t2

0xd6f4,	// (0x000a8bf6) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x000aae4e) popup_image3_note_pane_t

0xd704,	// (0x000a8c06) popup_image3_note_pane_t3_copy1

0x6a3e,	// (0x000a1f40) bg_myfav_hc_instruction_pane_ParamLimits

0x6a3e,	// (0x000a1f40) bg_myfav_hc_instruction_pane

0x6a56,	// (0x000a1f58) cell_myfav_contact_pane_ParamLimits

0x6a56,	// (0x000a1f58) cell_myfav_contact_pane

0x6a70,	// (0x000a1f72) cell_myfav_contact_pane_cp1_ParamLimits

0x6a70,	// (0x000a1f72) cell_myfav_contact_pane_cp1

0x6a88,	// (0x000a1f8a) cell_myfav_contact_pane_cp2_ParamLimits

0x6a88,	// (0x000a1f8a) cell_myfav_contact_pane_cp2

0x6aa0,	// (0x000a1fa2) cell_myfav_contact_pane_cp3_ParamLimits

0x6aa0,	// (0x000a1fa2) cell_myfav_contact_pane_cp3

0x6ab7,	// (0x000a1fb9) cell_myfav_contact_pane_cp4_ParamLimits

0x6ab7,	// (0x000a1fb9) cell_myfav_contact_pane_cp4

0x6acd,	// (0x000a1fcf) cell_myfav_contact_pane_cp5_ParamLimits

0x6acd,	// (0x000a1fcf) cell_myfav_contact_pane_cp5

0x6ae1,	// (0x000a1fe3) cell_myfav_contact_pane_cp6_ParamLimits

0x6ae1,	// (0x000a1fe3) cell_myfav_contact_pane_cp6

0x6af5,	// (0x000a1ff7) cell_myfav_contact_pane_cp7_ParamLimits

0x6af5,	// (0x000a1ff7) cell_myfav_contact_pane_cp7

0xd712,	// (0x000a8c14) listscroll_gen_pane_cp05

0x6b0d,	// (0x000a200f) main_myfav_hc_pane_g1_ParamLimits

0x6b0d,	// (0x000a200f) main_myfav_hc_pane_g1

0x6b27,	// (0x000a2029) main_myfav_hc_pane_g2_ParamLimits

0x6b27,	// (0x000a2029) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x000aae55) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x000aae55) main_myfav_hc_pane_g

0x6b59,	// (0x000a205b) main_myfav_hc_pane_t1_ParamLimits

0x6b59,	// (0x000a205b) main_myfav_hc_pane_t1

0xd71b,	// (0x000a8c1d) main_myfav_hc_pane_t2_ParamLimits

0xd71b,	// (0x000a8c1d) main_myfav_hc_pane_t2

0xd72d,	// (0x000a8c2f) main_myfav_hc_pane_t3_ParamLimits

0xd72d,	// (0x000a8c2f) main_myfav_hc_pane_t3

0x6b70,	// (0x000a2072) main_myfav_hc_pane_t4_ParamLimits

0x6b70,	// (0x000a2072) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x000aae5c) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x000aae5c) main_myfav_hc_pane_t

0xcca2,	// (0x000a81a4) bg_myfav_hc_instruction_pane_g1

0xd73f,	// (0x000a8c41) cell_myfav_contact_pane_g1_ParamLimits

0xd73f,	// (0x000a8c41) cell_myfav_contact_pane_g1

0xd73f,	// (0x000a8c41) cell_myfav_contact_pane_g2_ParamLimits

0xd73f,	// (0x000a8c41) cell_myfav_contact_pane_g2

0xd74b,	// (0x000a8c4d) cell_myfav_contact_pane_g3_ParamLimits

0xd74b,	// (0x000a8c4d) cell_myfav_contact_pane_g3

0xcf37,	// (0x000a8439) cell_myfav_contact_pane_g4_ParamLimits

0xcf37,	// (0x000a8439) cell_myfav_contact_pane_g4

0xd758,	// (0x000a8c5a) cell_myfav_contact_pane_g5_ParamLimits

0xd758,	// (0x000a8c5a) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000aae67) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000aae67) cell_myfav_contact_pane_g

0x6b41,	// (0x000a2043) main_myfav_hc_pane_g3_ParamLimits

0x6b41,	// (0x000a2043) main_myfav_hc_pane_g3

0x0f87,	// (0x0009c489) popup_adpt_find_window

0x6b9a,	// (0x000a209c) afind_page_pane_ParamLimits

0x6b9a,	// (0x000a209c) afind_page_pane

0x6ba7,	// (0x000a20a9) aid_size_cell_afind_ParamLimits

0x6ba7,	// (0x000a20a9) aid_size_cell_afind

0x6bc1,	// (0x000a20c3) bg_popup_sub_pane_cp09_ParamLimits

0x6bc1,	// (0x000a20c3) bg_popup_sub_pane_cp09

0x6bce,	// (0x000a20d0) find_pane_cp01_ParamLimits

0x6bce,	// (0x000a20d0) find_pane_cp01

0xd764,	// (0x000a8c66) grid_afind_control_pane_ParamLimits

0xd764,	// (0x000a8c66) grid_afind_control_pane

0x6bdb,	// (0x000a20dd) grid_afind_pane_ParamLimits

0x6bdb,	// (0x000a20dd) grid_afind_pane

0x6bf7,	// (0x000a20f9) cell_afind_pane_ParamLimits

0x6bf7,	// (0x000a20f9) cell_afind_pane

0xcca2,	// (0x000a81a4) afind_page_pane_g1

0x6c43,	// (0x000a2145) afind_page_pane_g2

0x6c4c,	// (0x000a214e) afind_page_pane_g3

0x0002,

0xf970,	// (0x000aae72) afind_page_pane_g

0x6c55,	// (0x000a2157) afind_page_pane_t1

0xd778,	// (0x000a8c7a) cell_afind_grid_control_pane_ParamLimits

0xd778,	// (0x000a8c7a) cell_afind_grid_control_pane

0xd57e,	// (0x000a8a80) bg_button_pane_cp69_ParamLimits

0xd57e,	// (0x000a8a80) bg_button_pane_cp69

0x6c75,	// (0x000a2177) cell_afind_pane_g1_ParamLimits

0x6c75,	// (0x000a2177) cell_afind_pane_g1

0x6c82,	// (0x000a2184) cell_afind_pane_t1_ParamLimits

0x6c82,	// (0x000a2184) cell_afind_pane_t1

0xaa09,	// (0x000a5f0b) bg_button_pane_cp72

0xd787,	// (0x000a8c89) cell_afind_grid_control_pane_g1

0x41a6,	// (0x0009f6a8) aid_image_placing_area_ParamLimits

0x41a6,	// (0x0009f6a8) aid_image_placing_area

0xd24a,	// (0x000a874c) field_vitu_entry_pane_g1_ParamLimits

0xd24a,	// (0x000a874c) field_vitu_entry_pane_g1

0xd256,	// (0x000a8758) field_vitu_entry_pane_g2_ParamLimits

0xd256,	// (0x000a8758) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000aad23) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000aad23) field_vitu_entry_pane_g

0x5d45,	// (0x000a1247) cell_vitu_itu_pane_g1_ParamLimits

0x5d95,	// (0x000a1297) cell_vitu_itu_pane_t3_ParamLimits

0x5d95,	// (0x000a1297) cell_vitu_itu_pane_t3

0xd52e,	// (0x000a8a30) mp4_progress_pane_t1_ParamLimits

0xd547,	// (0x000a8a49) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000aadb8) mp4_progress_pane_t_ParamLimits

0xd560,	// (0x000a8a62) mup_progress_pane_cp04_ParamLimits

0x6b84,	// (0x000a2086) main_myfav_hc_pane_t5_ParamLimits

0x6b84,	// (0x000a2086) main_myfav_hc_pane_t5

0x0e43,	// (0x0009c345) aid_zoom_text_primary

0x0f87,	// (0x0009c489) popup_adpt_find_window_ParamLimits

0xa26e,	// (0x000a5770) main_cam_set_pane

0x65ac,	// (0x000a1aae) cam4_zoom_pane_ParamLimits

0x65ac,	// (0x000a1aae) cam4_zoom_pane

0x6c94,	// (0x000a2196) main_cam_set_pane_g1_ParamLimits

0x6c94,	// (0x000a2196) main_cam_set_pane_g1

0x6ca2,	// (0x000a21a4) main_cam_set_pane_g2_ParamLimits

0x6ca2,	// (0x000a21a4) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000aae79) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000aae79) main_cam_set_pane_g

0x6cae,	// (0x000a21b0) main_cam_set_pane_t1_ParamLimits

0x6cae,	// (0x000a21b0) main_cam_set_pane_t1

0x6cca,	// (0x000a21cc) main_cset_listscroll_pane_ParamLimits

0x6cca,	// (0x000a21cc) main_cset_listscroll_pane

0x6cf9,	// (0x000a21fb) main_cset_slider_pane_ParamLimits

0x6cf9,	// (0x000a21fb) main_cset_slider_pane

0xd798,	// (0x000a8c9a) main_cset_list_pane_ParamLimits

0xd798,	// (0x000a8c9a) main_cset_list_pane

0xd7bc,	// (0x000a8cbe) scroll_pane_cp028

0x6d1a,	// (0x000a221c) aid_area_touch_slider

0x6d36,	// (0x000a2238) cset_slider_pane

0x6d60,	// (0x000a2262) main_cset_slider_pane_g1

0x6d75,	// (0x000a2277) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000aae7e) main_cset_slider_pane_g

0xd7f5,	// (0x000a8cf7) main_cset_slider_pane_t1

0x6e31,	// (0x000a2333) main_cset_slider_pane_t2

0x6e4b,	// (0x000a234d) main_cset_slider_pane_t3

0x6e65,	// (0x000a2367) main_cset_slider_pane_t4

0x6e7f,	// (0x000a2381) main_cset_slider_pane_t5

0x6e99,	// (0x000a239b) main_cset_slider_pane_t6

0x6eae,	// (0x000a23b0) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000aaea3) main_cset_slider_pane_t

0x6fb2,	// (0x000a24b4) cset_list_set_pane_ParamLimits

0x6fb2,	// (0x000a24b4) cset_list_set_pane

0x6fc3,	// (0x000a24c5) aid_position_infowindow_above

0x6fcb,	// (0x000a24cd) aid_position_infowindow_below

0x6fd3,	// (0x000a24d5) cset_list_set_pane_g1_ParamLimits

0x6fd3,	// (0x000a24d5) cset_list_set_pane_g1

0x6fdf,	// (0x000a24e1) cset_list_set_pane_g3_ParamLimits

0x6fdf,	// (0x000a24e1) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000aaec2) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000aaec2) cset_list_set_pane_g

0x6fee,	// (0x000a24f0) cset_list_set_pane_t1_ParamLimits

0x6fee,	// (0x000a24f0) cset_list_set_pane_t1

0xa26e,	// (0x000a5770) list_highlight_pane_cp021_ParamLimits

0xa26e,	// (0x000a5770) list_highlight_pane_cp021

0xb576,	// (0x000a6a78) cset_slider_pane_g1

0xb588,	// (0x000a6a8a) cset_slider_pane_g2

0xb57f,	// (0x000a6a81) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000aaec7) cset_slider_pane_g

0x7003,	// (0x000a2505) aid_area_touch_cam4_zoom

0x700b,	// (0x000a250d) cam4_zoom_cont_pane

0x7013,	// (0x000a2515) cam4_zoom_pane_g1

0x701b,	// (0x000a251d) cam4_zoom_pane_g2

0x7023,	// (0x000a2525) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000aaece) cam4_zoom_pane_g

0x702b,	// (0x000a252d) cam4_zoom_cont_pane_g1

0x7034,	// (0x000a2536) cam4_zoom_cont_pane_g2

0x703d,	// (0x000a253f) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000aaed5) cam4_zoom_cont_pane_g

0x6457,	// (0x000a1959) call4_image_pane_ParamLimits

0x6457,	// (0x000a1959) call4_image_pane

0xd58a,	// (0x000a8a8c) call4_windows_conf_pane_ParamLimits

0xd5a5,	// (0x000a8aa7) popup_call4_audio_in_window_ParamLimits

0xd5a5,	// (0x000a8aa7) popup_call4_audio_in_window

0x9ce2,	// (0x000a51e4) bg_popup_call2_act_pane_cp02

0xd607,	// (0x000a8b09) call4_list_conf_pane

0xcca2,	// (0x000a81a4) call4_image_pane_g1

0xcca2,	// (0x000a81a4) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000aabe9) call4_image_pane_g

0xd895,	// (0x000a8d97) list_single_graphic_popup_conf4_pane_ParamLimits

0xd895,	// (0x000a8d97) list_single_graphic_popup_conf4_pane

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp022

0xd8aa,	// (0x000a8dac) list_single_graphic_popup_conf4_pane_g1

0xb262,	// (0x000a6764) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000aaedc) list_single_graphic_popup_conf4_pane_g

0xd8b2,	// (0x000a8db4) list_single_graphic_popup_conf4_pane_t1

0x2397,	// (0x0009d899) popup_vtel_slider_window_ParamLimits

0x2397,	// (0x0009d899) popup_vtel_slider_window

0xd56c,	// (0x000a8a6e) dialer2_ne_pane_t2_ParamLimits

0xd56c,	// (0x000a8a6e) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000aadbd) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000aadbd) dialer2_ne_pane_t

0xa26e,	// (0x000a5770) bg_popup_sub_pane_cp010_ParamLimits

0xa26e,	// (0x000a5770) bg_popup_sub_pane_cp010

0x7046,	// (0x000a2548) popup_vtel_slider_window_g1_ParamLimits

0x7046,	// (0x000a2548) popup_vtel_slider_window_g1

0x7052,	// (0x000a2554) popup_vtel_slider_window_g2_ParamLimits

0x7052,	// (0x000a2554) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000aaee1) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000aaee1) popup_vtel_slider_window_g

0x709a,	// (0x000a259c) vtel_slider_pane_ParamLimits

0x709a,	// (0x000a259c) vtel_slider_pane

0x70a9,	// (0x000a25ab) vtel_slider_pane_g1_ParamLimits

0x70a9,	// (0x000a25ab) vtel_slider_pane_g1

0x70b6,	// (0x000a25b8) vtel_slider_pane_g2_ParamLimits

0x70b6,	// (0x000a25b8) vtel_slider_pane_g2

0x70c3,	// (0x000a25c5) vtel_slider_pane_g3_ParamLimits

0x70c3,	// (0x000a25c5) vtel_slider_pane_g3

0x70a9,	// (0x000a25ab) vtel_slider_pane_g4_ParamLimits

0x70a9,	// (0x000a25ab) vtel_slider_pane_g4

0x70d0,	// (0x000a25d2) vtel_slider_pane_g5_ParamLimits

0x70d0,	// (0x000a25d2) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x000aaeea) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x000aaeea) vtel_slider_pane_g

0x9ce2,	// (0x000a51e4) main_gallery2_pane

0x6820,	// (0x000a1d22) aid_size_row_itut2_dropdow_list_ParamLimits

0x6820,	// (0x000a1d22) aid_size_row_itut2_dropdow_list

0x688e,	// (0x000a1d90) grid_vitu2_function_top_pane_ParamLimits

0x688e,	// (0x000a1d90) grid_vitu2_function_top_pane

0x68e0,	// (0x000a1de2) popup_vitu2_dropdown_list_window_ParamLimits

0x68e0,	// (0x000a1de2) popup_vitu2_dropdown_list_window

0x6900,	// (0x000a1e02) popup_vitu2_match_list_window

0x70eb,	// (0x000a25ed) cell_vitu2_function_top_pane_ParamLimits

0x70eb,	// (0x000a25ed) cell_vitu2_function_top_pane

0x710b,	// (0x000a260d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x710b,	// (0x000a260d) cell_vitu2_function_top_pane_cp01

0x7129,	// (0x000a262b) cell_vitu2_function_top_wide_pane_ParamLimits

0x7129,	// (0x000a262b) cell_vitu2_function_top_wide_pane

0x672e,	// (0x000a1c30) bg_button_pane_cp012

0x7147,	// (0x000a2649) cell_vitu2_function_top_pane_g1

0x7156,	// (0x000a2658) bg_button_pane_cp013_ParamLimits

0x7156,	// (0x000a2658) bg_button_pane_cp013

0x7172,	// (0x000a2674) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7172,	// (0x000a2674) cell_vitu2_function_top_wide_pane_g1

0x718a,	// (0x000a268c) bg_popup_sub_pane_cp20

0x7198,	// (0x000a269a) list_vitu2_match_list_pane

0xd68a,	// (0x000a8b8c) bg_popup_sub_pane_cp20_g1

0xd692,	// (0x000a8b94) bg_popup_sub_pane_cp20_g2

0xad4a,	// (0x000a624c) bg_popup_sub_pane_cp20_g3

0xd69a,	// (0x000a8b9c) bg_popup_sub_pane_cp20_g4

0xad2a,	// (0x000a622c) bg_popup_sub_pane_cp20_g5

0xd8c8,	// (0x000a8dca) bg_popup_sub_pane_cp20_g6

0xd6aa,	// (0x000a8bac) bg_popup_sub_pane_cp20_g7

0xd6b2,	// (0x000a8bb4) bg_popup_sub_pane_cp20_g8

0xd6ba,	// (0x000a8bbc) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x000aaef5) bg_popup_sub_pane_cp20_g

0x71b0,	// (0x000a26b2) list_vitu2_match_list_item_pane_ParamLimits

0x71b0,	// (0x000a26b2) list_vitu2_match_list_item_pane

0x71c2,	// (0x000a26c4) list_vitu2_match_list_item_pane_t1

0x13d7,	// (0x0009c8d9) bg_popup_sub_pane_cp21

0x7208,	// (0x000a270a) grid_vitu2_dropdown_list_pane

0x7210,	// (0x000a2712) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7210,	// (0x000a2712) cell_vitu2_dropdown_list_char_pane

0x7235,	// (0x000a2737) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7235,	// (0x000a2737) cell_vitu2_dropdown_list_ctrl_pane

0xd8d0,	// (0x000a8dd2) cell_vitu2_dropdown_list_char_pane_g1

0xd8d9,	// (0x000a8ddb) cell_vitu2_dropdown_list_char_pane_g2

0xd8e2,	// (0x000a8de4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x000aaf12) cell_vitu2_dropdown_list_char_pane_g

0x7263,	// (0x000a2765) cell_vitu2_dropdown_list_char_pane_t1

0x7271,	// (0x000a2773) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7271,	// (0x000a2773) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7281,	// (0x000a2783) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7281,	// (0x000a2783) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7292,	// (0x000a2794) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7292,	// (0x000a2794) cell_vitu2_dropdown_list_ctrl_pane_g3

0x72a2,	// (0x000a27a4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x72a2,	// (0x000a27a4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6642,	// (0x000a1b44) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6642,	// (0x000a1b44) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x000aaf19) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x000aaf19) cell_vitu2_dropdown_list_ctrl_pane_g

0x72bb,	// (0x000a27bd) aid_size_cell_gallery2_ParamLimits

0x72bb,	// (0x000a27bd) aid_size_cell_gallery2

0x72c9,	// (0x000a27cb) grid_gallery2_pane_ParamLimits

0x72c9,	// (0x000a27cb) grid_gallery2_pane

0x72d8,	// (0x000a27da) scroll_pane_cp029_ParamLimits

0x72d8,	// (0x000a27da) scroll_pane_cp029

0x72e4,	// (0x000a27e6) cell_gallery2_pane_ParamLimits

0x72e4,	// (0x000a27e6) cell_gallery2_pane

0xd8eb,	// (0x000a8ded) cell_gallery2_pane_g2

0x730e,	// (0x000a2810) cell_gallery2_pane_g3

0xd8f5,	// (0x000a8df7) cell_gallery2_pane_g4

0xd8fd,	// (0x000a8dff) cell_gallery2_pane_g5

0xb43e,	// (0x000a6940) grid_highlight_pane_cp10

0x6900,	// (0x000a1e02) popup_vitu2_match_list_window_ParamLimits

0x6914,	// (0x000a1e16) popup_vitu2_query_window_ParamLimits

0x6914,	// (0x000a1e16) popup_vitu2_query_window

0x13d7,	// (0x0009c8d9) bg_vitu2_candi_button_pane

0xd8d0,	// (0x000a8dd2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8d9,	// (0x000a8ddb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e2,	// (0x000a8de4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7316,	// (0x000a2818) bg_button_pane_cp015

0x7328,	// (0x000a282a) bg_button_pane_cp016

0x733b,	// (0x000a283d) bg_button_pane_cp017

0xc849,	// (0x000a7d4b) bg_popup_sub_pane_cp22

0xd905,	// (0x000a8e07) popup_vitu2_query_window_g1

0x7380,	// (0x000a2882) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x000aaf24) popup_vitu2_query_window_g

0x739d,	// (0x000a289f) popup_vitu2_query_window_t1_ParamLimits

0x739d,	// (0x000a289f) popup_vitu2_query_window_t1

0x73d0,	// (0x000a28d2) popup_vitu2_query_window_t2_ParamLimits

0x73d0,	// (0x000a28d2) popup_vitu2_query_window_t2

0x73e2,	// (0x000a28e4) popup_vitu2_query_window_t3_ParamLimits

0x73e2,	// (0x000a28e4) popup_vitu2_query_window_t3

0x740a,	// (0x000a290c) popup_vitu2_query_window_t4_ParamLimits

0x740a,	// (0x000a290c) popup_vitu2_query_window_t4

0x742d,	// (0x000a292f) popup_vitu2_query_window_t5_ParamLimits

0x742d,	// (0x000a292f) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x000aaf2b) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x000aaf2b) popup_vitu2_query_window_t

0xd790,	// (0x000a8c92) main_cset_text_pane

0x6d1a,	// (0x000a221c) aid_area_touch_slider_ParamLimits

0x6d36,	// (0x000a2238) cset_slider_pane_ParamLimits

0x6d60,	// (0x000a2262) main_cset_slider_pane_g1_ParamLimits

0x6d75,	// (0x000a2277) main_cset_slider_pane_g2_ParamLimits

0xd7c5,	// (0x000a8cc7) main_cset_slider_pane_g3_ParamLimits

0xd7c5,	// (0x000a8cc7) main_cset_slider_pane_g3

0x6d8a,	// (0x000a228c) main_cset_slider_pane_g4_ParamLimits

0x6d8a,	// (0x000a228c) main_cset_slider_pane_g4

0x6d99,	// (0x000a229b) main_cset_slider_pane_g5_ParamLimits

0x6d99,	// (0x000a229b) main_cset_slider_pane_g5

0x6da5,	// (0x000a22a7) main_cset_slider_pane_g6_ParamLimits

0x6da5,	// (0x000a22a7) main_cset_slider_pane_g6

0xf97c,	// (0x000aae7e) main_cset_slider_pane_g_ParamLimits

0xd7f5,	// (0x000a8cf7) main_cset_slider_pane_t1_ParamLimits

0x6e31,	// (0x000a2333) main_cset_slider_pane_t2_ParamLimits

0x6e4b,	// (0x000a234d) main_cset_slider_pane_t3_ParamLimits

0x6e65,	// (0x000a2367) main_cset_slider_pane_t4_ParamLimits

0x6e7f,	// (0x000a2381) main_cset_slider_pane_t5_ParamLimits

0x6e99,	// (0x000a239b) main_cset_slider_pane_t6_ParamLimits

0x6eae,	// (0x000a23b0) main_cset_slider_pane_t7_ParamLimits

0x6ed8,	// (0x000a23da) main_cset_slider_pane_t8_ParamLimits

0x6ed8,	// (0x000a23da) main_cset_slider_pane_t8

0x6f00,	// (0x000a2402) main_cset_slider_pane_t9_ParamLimits

0x6f00,	// (0x000a2402) main_cset_slider_pane_t9

0x6f28,	// (0x000a242a) main_cset_slider_pane_t10_ParamLimits

0x6f28,	// (0x000a242a) main_cset_slider_pane_t10

0x6f50,	// (0x000a2452) main_cset_slider_pane_t11_ParamLimits

0x6f50,	// (0x000a2452) main_cset_slider_pane_t11

0x6f78,	// (0x000a247a) main_cset_slider_pane_t12_ParamLimits

0x6f78,	// (0x000a247a) main_cset_slider_pane_t12

0x6f95,	// (0x000a2497) main_cset_slider_pane_t13_ParamLimits

0x6f95,	// (0x000a2497) main_cset_slider_pane_t13

0xf9a1,	// (0x000aaea3) main_cset_slider_pane_t_ParamLimits

0x9ce2,	// (0x000a51e4) bg_popup_sub_pane_cp011

0xd911,	// (0x000a8e13) main_cset_text_pane_g1

0xd919,	// (0x000a8e1b) main_cset_text_pane_t1

0xd927,	// (0x000a8e29) main_cset_text_pane_t2

0xd935,	// (0x000a8e37) main_cset_text_pane_t3

0xd943,	// (0x000a8e45) main_cset_text_pane_t4

0xd951,	// (0x000a8e53) main_cset_text_pane_t5

0xd95f,	// (0x000a8e61) main_cset_text_pane_t6

0xd96d,	// (0x000a8e6f) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x000aaf3a) main_cset_text_pane_t

0x9ce2,	// (0x000a51e4) main_cam4_burst_pane

0x9ce2,	// (0x000a51e4) main_cam5_pane

0x6c63,	// (0x000a2165) bg_button_pane_cp019

0x6c6c,	// (0x000a216e) bg_button_pane_cp020

0xd7d1,	// (0x000a8cd3) main_cset_slider_pane_g7_ParamLimits

0xd7d1,	// (0x000a8cd3) main_cset_slider_pane_g7

0xd7dd,	// (0x000a8cdf) main_cset_slider_pane_g8_ParamLimits

0xd7dd,	// (0x000a8cdf) main_cset_slider_pane_g8

0x6db9,	// (0x000a22bb) main_cset_slider_pane_g9_ParamLimits

0x6db9,	// (0x000a22bb) main_cset_slider_pane_g9

0x6dc5,	// (0x000a22c7) main_cset_slider_pane_g10_ParamLimits

0x6dc5,	// (0x000a22c7) main_cset_slider_pane_g10

0x6dd1,	// (0x000a22d3) main_cset_slider_pane_g11_ParamLimits

0x6dd1,	// (0x000a22d3) main_cset_slider_pane_g11

0x6ddd,	// (0x000a22df) main_cset_slider_pane_g12_ParamLimits

0x6ddd,	// (0x000a22df) main_cset_slider_pane_g12

0x6de9,	// (0x000a22eb) main_cset_slider_pane_g13_ParamLimits

0x6de9,	// (0x000a22eb) main_cset_slider_pane_g13

0x6df5,	// (0x000a22f7) main_cset_slider_pane_g14_ParamLimits

0x6df5,	// (0x000a22f7) main_cset_slider_pane_g14

0x6e01,	// (0x000a2303) main_cset_slider_pane_g15_ParamLimits

0x6e01,	// (0x000a2303) main_cset_slider_pane_g15

0xd823,	// (0x000a8d25) main_cset_slider_pane_t14_ParamLimits

0xd823,	// (0x000a8d25) main_cset_slider_pane_t14

0xd85c,	// (0x000a8d5e) main_cset_slider_pane_t15_ParamLimits

0xd85c,	// (0x000a8d5e) main_cset_slider_pane_t15

0x74a6,	// (0x000a29a8) aid_cam4_burst_size_cell_ParamLimits

0x74a6,	// (0x000a29a8) aid_cam4_burst_size_cell

0x74c2,	// (0x000a29c4) grid_cam4_burst_pane_ParamLimits

0x74c2,	// (0x000a29c4) grid_cam4_burst_pane

0x74f4,	// (0x000a29f6) linegrid_cam4_burst_pane_ParamLimits

0x74f4,	// (0x000a29f6) linegrid_cam4_burst_pane

0x7512,	// (0x000a2a14) scroll_pane_cp30_ParamLimits

0x7512,	// (0x000a2a14) scroll_pane_cp30

0x751e,	// (0x000a2a20) cell_cam4_burst_pane_ParamLimits

0x751e,	// (0x000a2a20) cell_cam4_burst_pane

0xd97b,	// (0x000a8e7d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd97b,	// (0x000a8e7d) linegrid_cam4_burst_pane_g1

0x755e,	// (0x000a2a60) linegrid_cam4_burst_pane_g2_ParamLimits

0x755e,	// (0x000a2a60) linegrid_cam4_burst_pane_g2

0xd988,	// (0x000a8e8a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd988,	// (0x000a8e8a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x000aaf49) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x000aaf49) linegrid_cam4_burst_pane_g

0x756f,	// (0x000a2a71) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x756f,	// (0x000a2a71) linegrid_cam4_burst_pane_g3_copy1

0xd995,	// (0x000a8e97) linegrid_cam4_burst_pane_g4_ParamLimits

0xd995,	// (0x000a8e97) linegrid_cam4_burst_pane_g4

0x7589,	// (0x000a2a8b) linegrid_cam4_burst_pane_g5_ParamLimits

0x7589,	// (0x000a2a8b) linegrid_cam4_burst_pane_g5

0x759a,	// (0x000a2a9c) linegrid_cam4_burst_pane_g6_ParamLimits

0x759a,	// (0x000a2a9c) linegrid_cam4_burst_pane_g6

0xd9ae,	// (0x000a8eb0) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ae,	// (0x000a8eb0) linegrid_cam4_burst_pane_g7

0x75b1,	// (0x000a2ab3) cell_cam4_burst_pane_g1

0xd9c7,	// (0x000a8ec9) main_cam5_pane_t1_ParamLimits

0xd9c7,	// (0x000a8ec9) main_cam5_pane_t1

0xd9d9,	// (0x000a8edb) main_cam5_pane_t2_ParamLimits

0xd9d9,	// (0x000a8edb) main_cam5_pane_t2

0xd9eb,	// (0x000a8eed) main_cam5_pane_t3_ParamLimits

0xd9eb,	// (0x000a8eed) main_cam5_pane_t3

0xd9fd,	// (0x000a8eff) main_cam5_pane_t4_ParamLimits

0xd9fd,	// (0x000a8eff) main_cam5_pane_t4

0xda15,	// (0x000a8f17) main_cam5_pane_t5_ParamLimits

0xda15,	// (0x000a8f17) main_cam5_pane_t5

0xda29,	// (0x000a8f2b) main_cam5_pane_t6_ParamLimits

0xda29,	// (0x000a8f2b) main_cam5_pane_t6

0xda3d,	// (0x000a8f3f) main_cam5_pane_t7_ParamLimits

0xda3d,	// (0x000a8f3f) main_cam5_pane_t7

0xda4f,	// (0x000a8f51) main_cam5_pane_t8_ParamLimits

0xda4f,	// (0x000a8f51) main_cam5_pane_t8

0xda6d,	// (0x000a8f6f) main_cam5_pane_t9_ParamLimits

0xda6d,	// (0x000a8f6f) main_cam5_pane_t9

0xda7f,	// (0x000a8f81) main_cam5_pane_t10_ParamLimits

0xda7f,	// (0x000a8f81) main_cam5_pane_t10

0xda91,	// (0x000a8f93) main_cam5_pane_t11_ParamLimits

0xda91,	// (0x000a8f93) main_cam5_pane_t11

0xdaa5,	// (0x000a8fa7) main_cam5_pane_t12_ParamLimits

0xdaa5,	// (0x000a8fa7) main_cam5_pane_t12

0xdabc,	// (0x000a8fbe) main_cam5_pane_t13_ParamLimits

0xdabc,	// (0x000a8fbe) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x000aaf55) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x000aaf55) main_cam5_pane_t

0x1034,	// (0x0009c536) popup_scut_keymap_window_ParamLimits

0x1034,	// (0x0009c536) popup_scut_keymap_window

0x75c4,	// (0x000a2ac6) aid_size_cell_brow_shortcut

0xb43e,	// (0x000a6940) bg_popup_window_pane_cp010

0x75d0,	// (0x000a2ad2) grid_scut_pane

0x75dc,	// (0x000a2ade) cell_scut_pane_ParamLimits

0x75dc,	// (0x000a2ade) cell_scut_pane

0x75f7,	// (0x000a2af9) cell_scut_pane_g1

0xdadf,	// (0x000a8fe1) cell_scut_pane_t1

0xdaee,	// (0x000a8ff0) cell_scut_pane_t2

0x7600,	// (0x000a2b02) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x000aaf70) cell_scut_pane_t

0x53bf,	// (0x000a08c1) main_mup3_pane_g8_ParamLimits

0x53bf,	// (0x000a08c1) main_mup3_pane_g8

0x682e,	// (0x000a1d30) area_vitu2_query_pane_ParamLimits

0x682e,	// (0x000a1d30) area_vitu2_query_pane

0x734e,	// (0x000a2850) input_focus_pane_cp08

0xdafd,	// (0x000a8fff) area_vitu2_query_pane_g1

0x760e,	// (0x000a2b10) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x000aaf77) area_vitu2_query_pane_g

0x761f,	// (0x000a2b21) area_vitu2_query_pane_t1_ParamLimits

0x761f,	// (0x000a2b21) area_vitu2_query_pane_t1

0x7633,	// (0x000a2b35) area_vitu2_query_pane_t2_ParamLimits

0x7633,	// (0x000a2b35) area_vitu2_query_pane_t2

0x7647,	// (0x000a2b49) area_vitu2_query_pane_t3_ParamLimits

0x7647,	// (0x000a2b49) area_vitu2_query_pane_t3

0xa299,	// (0x000a579b) area_vitu2_query_pane_t4_ParamLimits

0xa299,	// (0x000a579b) area_vitu2_query_pane_t4

0xa2c1,	// (0x000a57c3) area_vitu2_query_pane_t5_ParamLimits

0xa2c1,	// (0x000a57c3) area_vitu2_query_pane_t5

0xa2e9,	// (0x000a57eb) area_vitu2_query_pane_t6_ParamLimits

0xa2e9,	// (0x000a57eb) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x000aaf7c) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x000aaf7c) area_vitu2_query_pane_t

0x766f,	// (0x000a2b71) bg_button_pane_cp018

0x767d,	// (0x000a2b7f) bg_button_pane_cp021

0x7689,	// (0x000a2b8b) bg_button_pane_cp022

0x769a,	// (0x000a2b9c) input_focus_pane_cp09

0x37b5,	// (0x0009ecb7) aid_size_touch_mv_arrow_left

0x37e0,	// (0x0009ece2) aid_size_touch_mv_arrow_right

0x6e19,	// (0x000a231b) main_cset_slider_pane_g16_ParamLimits

0x6e19,	// (0x000a231b) main_cset_slider_pane_g16

0x6e25,	// (0x000a2327) main_cset_slider_pane_g17_ParamLimits

0x6e25,	// (0x000a2327) main_cset_slider_pane_g17

0x75b1,	// (0x000a2ab3) cell_cam4_burst_pane_g1_ParamLimits

0x9ce2,	// (0x000a51e4) compa_mode_pane

0x705e,	// (0x000a2560) popup_vtel_slider_window_g3_ParamLimits

0x705e,	// (0x000a2560) popup_vtel_slider_window_g3

0x7072,	// (0x000a2574) popup_vtel_slider_window_g4_ParamLimits

0x7072,	// (0x000a2574) popup_vtel_slider_window_g4

0x7086,	// (0x000a2588) popup_vtel_slider_window_t1_ParamLimits

0x7086,	// (0x000a2588) popup_vtel_slider_window_t1

0x9ce2,	// (0x000a51e4) main_cl_pane

0xc875,	// (0x000a7d77) popup_imed_adjust2_window_ParamLimits

0xc849,	// (0x000a7d4b) bg_tb_trans_pane_cp05_ParamLimits

0xd17f,	// (0x000a8681) popup_imed_adjust2_window_g1_ParamLimits

0xd18e,	// (0x000a8690) popup_imed_adjust2_window_g2_ParamLimits

0xd18e,	// (0x000a8690) popup_imed_adjust2_window_g2

0xd19a,	// (0x000a869c) popup_imed_adjust2_window_g3_ParamLimits

0xd19a,	// (0x000a869c) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000aace7) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000aace7) popup_imed_adjust2_window_g

0xd1a6,	// (0x000a86a8) popup_imed_adjust2_window_t1_ParamLimits

0xd1be,	// (0x000a86c0) slider_imed_adjust_pane_ParamLimits

0xd1d2,	// (0x000a86d4) slider_imed_adjust_pane_g1_ParamLimits

0xd1e2,	// (0x000a86e4) slider_imed_adjust_pane_g2_ParamLimits

0xd1f2,	// (0x000a86f4) slider_imed_adjust_pane_g3_ParamLimits

0xd203,	// (0x000a8705) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000aacee) slider_imed_adjust_pane_g_ParamLimits

0x6555,	// (0x000a1a57) aid_touch_area_cam4_ParamLimits

0x6555,	// (0x000a1a57) aid_touch_area_cam4

0x6565,	// (0x000a1a67) battery_pane_cp01

0x65ec,	// (0x000a1aee) main_camera4_pane_g6_ParamLimits

0x65ec,	// (0x000a1aee) main_camera4_pane_g6

0x660a,	// (0x000a1b0c) main_camera4_pane_t2_ParamLimits

0x660a,	// (0x000a1b0c) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000aadf1) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000aadf1) main_camera4_pane_t

0x669b,	// (0x000a1b9d) aid_touch_area_vid4_ParamLimits

0x669b,	// (0x000a1b9d) aid_touch_area_vid4

0x66db,	// (0x000a1bdd) main_video4_pane_g5_ParamLimits

0x66db,	// (0x000a1bdd) main_video4_pane_g5

0x6701,	// (0x000a1c03) vid4_progress_pane_ParamLimits

0x6701,	// (0x000a1c03) vid4_progress_pane

0xd7e9,	// (0x000a8ceb) main_cset_slider_pane_g18_ParamLimits

0xd7e9,	// (0x000a8ceb) main_cset_slider_pane_g18

0xd9bb,	// (0x000a8ebd) cell_cam4_burst_pane_g2_ParamLimits

0xd9bb,	// (0x000a8ebd) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x000aaf50) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x000aaf50) cell_cam4_burst_pane_g

0x76ab,	// (0x000a2bad) bg_cl_pane_ParamLimits

0x76ab,	// (0x000a2bad) bg_cl_pane

0x76b7,	// (0x000a2bb9) cl_header_pane_ParamLimits

0x76b7,	// (0x000a2bb9) cl_header_pane

0x76c3,	// (0x000a2bc5) cl_listscroll_pane_ParamLimits

0x76c3,	// (0x000a2bc5) cl_listscroll_pane

0xdb09,	// (0x000a900b) bg_cl_pane_g1

0xdb11,	// (0x000a9013) bg_cl_pane_g2

0xdb19,	// (0x000a901b) bg_cl_pane_g3

0xdb21,	// (0x000a9023) bg_cl_pane_g4

0xdb29,	// (0x000a902b) bg_cl_pane_g5

0xdb31,	// (0x000a9033) bg_cl_pane_g6

0xdb39,	// (0x000a903b) bg_cl_pane_g7

0xdb41,	// (0x000a9043) bg_cl_pane_g8

0xdb49,	// (0x000a904b) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000aaf8b) bg_cl_pane_g

0x76cf,	// (0x000a2bd1) aid_height_cl_leading_ParamLimits

0x76cf,	// (0x000a2bd1) aid_height_cl_leading

0x76db,	// (0x000a2bdd) aid_height_cl_text_ParamLimits

0x76db,	// (0x000a2bdd) aid_height_cl_text

0x106b,	// (0x0009c56d) bg_cl_header_pane_ParamLimits

0x106b,	// (0x0009c56d) bg_cl_header_pane

0x76f3,	// (0x000a2bf5) cl_header_pane_g1_ParamLimits

0x76f3,	// (0x000a2bf5) cl_header_pane_g1

0x7700,	// (0x000a2c02) cl_header_pane_t1_ParamLimits

0x7700,	// (0x000a2c02) cl_header_pane_t1

0xdb51,	// (0x000a9053) cl_list_pane

0xd7bc,	// (0x000a8cbe) hc_scroll_pane_cp01

0xad2a,	// (0x000a622c) bg_cl_header_pane_g1

0xd68a,	// (0x000a8b8c) bg_cl_header_pane_g2

0xad4a,	// (0x000a624c) bg_cl_header_pane_g3

0xd69a,	// (0x000a8b9c) bg_cl_header_pane_g4

0xd692,	// (0x000a8b94) bg_cl_header_pane_g5

0xd8c8,	// (0x000a8dca) bg_cl_header_pane_g6

0xd6b2,	// (0x000a8bb4) bg_cl_header_pane_g7

0xd6ba,	// (0x000a8bbc) bg_cl_header_pane_g8

0xd6aa,	// (0x000a8bac) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000aaf9e) bg_cl_header_pane_g

0x7712,	// (0x000a2c14) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7712,	// (0x000a2c14) hc_cl_list_double_graphic_heading_pane

0x7722,	// (0x000a2c24) hc_cl_list_single_graphic_pane_ParamLimits

0x7722,	// (0x000a2c24) hc_cl_list_single_graphic_pane

0x7734,	// (0x000a2c36) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7734,	// (0x000a2c36) hc_cl_list_single_graphic_pane_g1

0x7740,	// (0x000a2c42) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7740,	// (0x000a2c42) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000aafb1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000aafb1) hc_cl_list_single_graphic_pane_g

0x7754,	// (0x000a2c56) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7754,	// (0x000a2c56) hc_cl_list_single_graphic_pane_t1

0x7734,	// (0x000a2c36) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7734,	// (0x000a2c36) hc_cl_list_double_graphic_heading_pane_g1

0x7769,	// (0x000a2c6b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7769,	// (0x000a2c6b) hc_cl_list_double_graphic_heading_pane_g2

0x777d,	// (0x000a2c7f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x777d,	// (0x000a2c7f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000aafb6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000aafb6) hc_cl_list_double_graphic_heading_pane_g

0x7791,	// (0x000a2c93) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7791,	// (0x000a2c93) hc_cl_list_double_graphic_heading_pane_t1

0x77a6,	// (0x000a2ca8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77a6,	// (0x000a2ca8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000aafbd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000aafbd) hc_cl_list_double_graphic_heading_pane_t

0x77c3,	// (0x000a2cc5) vid4_progress_pane_g1

0x77d5,	// (0x000a2cd7) vid4_progress_pane_g2

0x3ef1,	// (0x0009f3f3) vid4_progress_pane_g3

0x77e7,	// (0x000a2ce9) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000aafc2) vid4_progress_pane_g

0x7805,	// (0x000a2d07) vid4_progress_pane_t1

0x781a,	// (0x000a2d1c) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000aafcd) vid4_progress_pane_t

0x7845,	// (0x000a2d47) wait_bar_pane_cp07

0xca87,	// (0x000a7f89) blid_firmament_pane_ParamLimits

0xcaca,	// (0x000a7fcc) popup_blid_sat_info2_window_g1

0xcaee,	// (0x000a7ff0) popup_blid_sat_info2_window_t3

0xcafc,	// (0x000a7ffe) popup_blid_sat_info2_window_t4

0xcb0a,	// (0x000a800c) popup_blid_sat_info2_window_t5

0xcb18,	// (0x000a801a) popup_blid_sat_info2_window_t6

0xcb28,	// (0x000a802a) popup_blid_sat_info2_window_t7

0xcb36,	// (0x000a8038) popup_blid_sat_info2_window_t8

0xcb44,	// (0x000a8046) popup_blid_sat_info2_window_t9

0xcb52,	// (0x000a8054) popup_blid_sat_info2_window_t10

0xcc22,	// (0x000a8124) aid_firma_cardinal_ParamLimits

0xcc36,	// (0x000a8138) blid_firmament_pane_t1_ParamLimits

0xcc4d,	// (0x000a814f) blid_firmament_pane_t2_ParamLimits

0xcc64,	// (0x000a8166) blid_firmament_pane_t3_ParamLimits

0xcc7b,	// (0x000a817d) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000aabe0) blid_firmament_pane_t_ParamLimits

0xcc92,	// (0x000a8194) blid_sat_info_pane_ParamLimits

0xa26e,	// (0x000a5770) main_cam_set_pane_ParamLimits

0x5b63,	// (0x000a1065) aid_size_cell_colour_35_ParamLimits

0x5b7d,	// (0x000a107f) aid_size_cell_colour_112_ParamLimits

0x5b94,	// (0x000a1096) aid_size_cell_effect_ParamLimits

0xa26e,	// (0x000a5770) bg_tb_trans_pane_cp02_ParamLimits

0xb137,	// (0x000a6639) heading_imed_pane_ParamLimits

0x5bae,	// (0x000a10b0) listscroll_imed_pane_ParamLimits

0xbe6b,	// (0x000a736d) popup_call2_audio_first_window_g5_ParamLimits

0xbe6b,	// (0x000a736d) popup_call2_audio_first_window_g5

0x62c0,	// (0x000a17c2) aid_size_touch_image3_arrow_left_ParamLimits

0x62c0,	// (0x000a17c2) aid_size_touch_image3_arrow_left

0x62d6,	// (0x000a17d8) aid_size_touch_image3_arrow_right_ParamLimits

0x62d6,	// (0x000a17d8) aid_size_touch_image3_arrow_right

0x7830,	// (0x000a2d32) vid4_progress_pane_t3

0x5e5c,	// (0x000a135e) main_hwr_training_symbol_option_pane_ParamLimits

0x5e5c,	// (0x000a135e) main_hwr_training_symbol_option_pane

0xd46e,	// (0x000a8970) popup_hwr_training_preview_window_ParamLimits

0xd46e,	// (0x000a8970) popup_hwr_training_preview_window

0x5ebd,	// (0x000a13bf) hwr_training_navi_pane_g5_ParamLimits

0x5ebd,	// (0x000a13bf) hwr_training_navi_pane_g5

0xd678,	// (0x000a8b7a) popup_char_count_window

0x718a,	// (0x000a268c) bg_popup_sub_pane_cp20_ParamLimits

0x7198,	// (0x000a269a) list_vitu2_match_list_pane_ParamLimits

0x71a4,	// (0x000a26a6) vitu2_page_scroll_pane_ParamLimits

0x71a4,	// (0x000a26a6) vitu2_page_scroll_pane

0xdb5a,	// (0x000a905c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb5a,	// (0x000a905c) list_single_hwr_training_symbol_option_pane

0xdb6d,	// (0x000a906f) list_single_hwr_training_symbol_option_pane_g1

0xdb75,	// (0x000a9077) list_single_hwr_training_symbol_option_pane_t1

0xdb83,	// (0x000a9085) bg_button_pane_cp023

0xdb8c,	// (0x000a908e) bg_button_pane_cp024

0x7891,	// (0x000a2d93) vitu2_page_scroll_pane_g1

0x7899,	// (0x000a2d9b) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000aafd4) vitu2_page_scroll_pane_g

0x78a3,	// (0x000a2da5) vitu2_page_scroll_pane_t1

0xc9e7,	// (0x000a7ee9) popup_char_count_window_g1

0xdbf2,	// (0x000a90f4) popup_char_count_window_g2

0xdbfb,	// (0x000a90fd) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000aafd9) popup_char_count_window_g

0xdc04,	// (0x000a9106) popup_char_count_window_t1

0x9ce2,	// (0x000a51e4) main_vded2_pane

0xd16b,	// (0x000a866d) aid_size_cell_imed_line

0xd175,	// (0x000a8677) grid_imed_line_width_pane

0x6783,	// (0x000a1c85) vid4_indicators_pane_g4

0xdc12,	// (0x000a9114) cell_imed_line_width_pane_ParamLimits

0xdc12,	// (0x000a9114) cell_imed_line_width_pane

0xdc28,	// (0x000a912a) cell_imed_line_width_pane_g1

0xcbea,	// (0x000a80ec) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000aafe0) cell_imed_line_width_pane_g

0x78b2,	// (0x000a2db4) main_vded2_pane_g1_ParamLimits

0x78b2,	// (0x000a2db4) main_vded2_pane_g1

0x78c1,	// (0x000a2dc3) main_vded2_pane_g2_ParamLimits

0x78c1,	// (0x000a2dc3) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000aafe5) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000aafe5) main_vded2_pane_g

0x78cf,	// (0x000a2dd1) vded2_slider_pane_ParamLimits

0x78cf,	// (0x000a2dd1) vded2_slider_pane

0x78dc,	// (0x000a2dde) aid_size_touch_vded2_end

0x78e6,	// (0x000a2de8) aid_size_touch_vded2_playhead

0xdc31,	// (0x000a9133) aid_size_touch_vded2_start

0xdc39,	// (0x000a913b) vded2_slider_bg_pane

0xdc42,	// (0x000a9144) vded2_slider_pane_g1

0xdc4b,	// (0x000a914d) vded2_slider_pane_g2

0x78ee,	// (0x000a2df0) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x000aafea) vded2_slider_pane_g

0xdbaa,	// (0x000a90ac) vded2_slider_bg_pane_g1

0xdbb3,	// (0x000a90b5) vded2_slider_bg_pane_g2

0xdbbc,	// (0x000a90be) vded2_slider_bg_pane_g3

0x0002,

0xf7ae,	// (0x000aacb0) vded2_slider_bg_pane_g

0x3f09,	// (0x0009f40b) aid_postcard_touch_down_pane_ParamLimits

0x3f09,	// (0x0009f40b) aid_postcard_touch_down_pane

0x3f19,	// (0x0009f41b) aid_postcard_touch_up_pane_ParamLimits

0x3f19,	// (0x0009f41b) aid_postcard_touch_up_pane

0x9ce2,	// (0x000a51e4) main_blid2_pane

0xc857,	// (0x000a7d59) popup_blid2_search_window

0x9ce2,	// (0x000a51e4) blid2_gps_pane

0x9ce2,	// (0x000a51e4) blid2_navig_pane

0x9ce2,	// (0x000a51e4) blid2_search_pane

0x9ce2,	// (0x000a51e4) blid2_tripm_pane

0x78f7,	// (0x000a2df9) blid2_search_pane_g1_ParamLimits

0x78f7,	// (0x000a2df9) blid2_search_pane_g1

0x7903,	// (0x000a2e05) blid2_search_pane_t1_ParamLimits

0x7903,	// (0x000a2e05) blid2_search_pane_t1

0x7915,	// (0x000a2e17) aid_size_cell_blid2_gps_ParamLimits

0x7915,	// (0x000a2e17) aid_size_cell_blid2_gps

0x7925,	// (0x000a2e27) blid2_gps_pane_g1_ParamLimits

0x7925,	// (0x000a2e27) blid2_gps_pane_g1

0x7931,	// (0x000a2e33) grid_blid2_satellite_pane_ParamLimits

0x7931,	// (0x000a2e33) grid_blid2_satellite_pane

0x793f,	// (0x000a2e41) blid2_navig_pane_g1_ParamLimits

0x793f,	// (0x000a2e41) blid2_navig_pane_g1

0x794b,	// (0x000a2e4d) blid2_navig_pane_t1_ParamLimits

0x794b,	// (0x000a2e4d) blid2_navig_pane_t1

0x795d,	// (0x000a2e5f) blid2_navig_pane_t2_ParamLimits

0x795d,	// (0x000a2e5f) blid2_navig_pane_t2

0x0001,

0xfaef,	// (0x000aaff1) blid2_navig_pane_t_ParamLimits

0xfaef,	// (0x000aaff1) blid2_navig_pane_t

0x796f,	// (0x000a2e71) blid2_navig_ring_pane_ParamLimits

0x796f,	// (0x000a2e71) blid2_navig_ring_pane

0x797f,	// (0x000a2e81) blid2_speed_pane_ParamLimits

0x797f,	// (0x000a2e81) blid2_speed_pane

0x798b,	// (0x000a2e8d) blid2_tripm_pane_g1_ParamLimits

0x798b,	// (0x000a2e8d) blid2_tripm_pane_g1

0x799b,	// (0x000a2e9d) blid2_tripm_pane_g2_ParamLimits

0x799b,	// (0x000a2e9d) blid2_tripm_pane_g2

0x79a7,	// (0x000a2ea9) blid2_tripm_pane_g3_ParamLimits

0x79a7,	// (0x000a2ea9) blid2_tripm_pane_g3

0x79b3,	// (0x000a2eb5) blid2_tripm_pane_g4_ParamLimits

0x79b3,	// (0x000a2eb5) blid2_tripm_pane_g4

0x79bf,	// (0x000a2ec1) blid2_tripm_pane_g5_ParamLimits

0x79bf,	// (0x000a2ec1) blid2_tripm_pane_g5

0x0005,

0xfaf4,	// (0x000aaff6) blid2_tripm_pane_g_ParamLimits

0xfaf4,	// (0x000aaff6) blid2_tripm_pane_g

0x79db,	// (0x000a2edd) blid2_tripm_pane_t1_ParamLimits

0x79db,	// (0x000a2edd) blid2_tripm_pane_t1

0x79ed,	// (0x000a2eef) blid2_tripm_pane_t2_ParamLimits

0x79ed,	// (0x000a2eef) blid2_tripm_pane_t2

0x79ff,	// (0x000a2f01) blid2_tripm_pane_t3_ParamLimits

0x79ff,	// (0x000a2f01) blid2_tripm_pane_t3

0x0003,

0xfb01,	// (0x000ab003) blid2_tripm_pane_t_ParamLimits

0xfb01,	// (0x000ab003) blid2_tripm_pane_t

0x7a31,	// (0x000a2f33) cell_blid2_satellite_pane_ParamLimits

0x7a31,	// (0x000a2f33) cell_blid2_satellite_pane

0x7a4f,	// (0x000a2f51) cell_blid2_satellite_pane_g1

0xdc53,	// (0x000a9155) cell_blid2_satellite_pane_t1

0xcca2,	// (0x000a81a4) blid2_speed_pane_g1

0xdc61,	// (0x000a9163) blid2_speed_pane_t1

0xdc6f,	// (0x000a9171) blid2_speed_pane_t2

0x0001,

0xfb0a,	// (0x000ab00c) blid2_speed_pane_t

0xcca2,	// (0x000a81a4) blid2_navig_ring_pane_g1

0x7a58,	// (0x000a2f5a) blid2_navig_ring_pane_g2

0x7a60,	// (0x000a2f62) blid2_navig_ring_pane_g3

0x7a68,	// (0x000a2f6a) blid2_navig_ring_pane_g4

0x7a70,	// (0x000a2f72) blid2_navig_ring_pane_g5

0x0004,

0xfb0f,	// (0x000ab011) blid2_navig_ring_pane_g

0x9ce2,	// (0x000a51e4) bg_popup_window_pane_cp011

0xdc7d,	// (0x000a917f) popup_blid2_search_window_g1

0xdc85,	// (0x000a9187) popup_blid2_search_window_t1

0xdc93,	// (0x000a9195) popup_blid2_search_window_t2

0x0001,

0xfb1a,	// (0x000ab01c) popup_blid2_search_window_t

0xac39,	// (0x000a613b) main_browser_pane_g1

0xa7d5,	// (0x000a5cd7) main_browser_pane_ParamLimits

0x672e,	// (0x000a1c30) bg_button_pane_cp011_ParamLimits

0x6a2a,	// (0x000a1f2c) cell_vitu2_function_pane_g1_ParamLimits

0xc849,	// (0x000a7d4b) bg_popup_sub_pane_cp22_ParamLimits

0x734e,	// (0x000a2850) input_focus_pane_cp08_ParamLimits

0x7365,	// (0x000a2867) popup_vitu2_query_button_pane_ParamLimits

0x7365,	// (0x000a2867) popup_vitu2_query_button_pane

0x7376,	// (0x000a2878) popup_vitu2_query_input_button_pane

0xd905,	// (0x000a8e07) popup_vitu2_query_window_g1_ParamLimits

0x7380,	// (0x000a2882) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x000aaf24) popup_vitu2_query_window_g_ParamLimits

0x9ce2,	// (0x000a51e4) bg_button_pane_cp026

0x7a78,	// (0x000a2f7a) popup_vitu2_query_input_button_pane_g1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp025

0xdca1,	// (0x000a91a3) popup_vitu2_query_button_pane_t1

0x50a2,	// (0x000a05a4) main_mp3_pane_t6

0x50b2,	// (0x000a05b4) popup_slider_window_cp01

0x6650,	// (0x000a1b52) cam4_battery_pane

0x673c,	// (0x000a1c3e) cam4_battery_pane_cp02

0x77bb,	// (0x000a2cbd) cam4_battery_pane_cp01

0x77bb,	// (0x000a2cbd) cam4_battery_pane_cp03

0xdbc5,	// (0x000a90c7) cam4_battery_pane_g1

0xcca2,	// (0x000a81a4) cam4_battery_pane_g2

0x0001,

0xfb1f,	// (0x000ab021) cam4_battery_pane_g

0xcb60,	// (0x000a8062) popup_blid_sat_info2_window_t11

0x37b5,	// (0x0009ecb7) aid_size_touch_mv_arrow_left_ParamLimits

0x37e0,	// (0x0009ece2) aid_size_touch_mv_arrow_right_ParamLimits

0xb39e,	// (0x000a68a0) navi_pane_g1_ParamLimits

0x381f,	// (0x0009ed21) navi_pane_g2_ParamLimits

0x384d,	// (0x0009ed4f) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000aa8f2) navi_pane_g_ParamLimits

0x38a7,	// (0x0009eda9) navi_pane_mv_t1_ParamLimits

0x5bba,	// (0x000a10bc) grid_imed_effect_pane_ParamLimits

0x225f,	// (0x0009d761) aid_placing_vt_slider_lsc

0xab84,	// (0x000a6086) aid_placing_vt_slider_prt

0xa26e,	// (0x000a5770) bg_tb_trans_pane_cp01_ParamLimits

0xcdf2,	// (0x000a82f4) popup_image_details_window_g1_ParamLimits

0xce05,	// (0x000a8307) popup_image_details_window_g2_ParamLimits

0xce1a,	// (0x000a831c) popup_image_details_window_g3_ParamLimits

0xce1a,	// (0x000a831c) popup_image_details_window_g3

0xf723,	// (0x000aac25) popup_image_details_window_g_ParamLimits

0xce2e,	// (0x000a8330) popup_image_details_window_t1_ParamLimits

0xce40,	// (0x000a8342) popup_image_details_window_t2_ParamLimits

0xce59,	// (0x000a835b) popup_image_details_window_t3_ParamLimits

0xce6d,	// (0x000a836f) popup_image_details_window_t4_ParamLimits

0xce88,	// (0x000a838a) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x000aac2c) popup_image_details_window_t_ParamLimits

0x76e7,	// (0x000a2be9) cl_header_name_pane_ParamLimits

0x76e7,	// (0x000a2be9) cl_header_name_pane

0x7a80,	// (0x000a2f82) cl_header_name_pane_t1_ParamLimits

0x7a80,	// (0x000a2f82) cl_header_name_pane_t1

0x7a97,	// (0x000a2f99) cl_header_name_pane_t2_ParamLimits

0x7a97,	// (0x000a2f99) cl_header_name_pane_t2

0x7ac1,	// (0x000a2fc3) cl_header_name_pane_t3_ParamLimits

0x7ac1,	// (0x000a2fc3) cl_header_name_pane_t3

0x0002,

0xfb24,	// (0x000ab026) cl_header_name_pane_t_ParamLimits

0xfb24,	// (0x000ab026) cl_header_name_pane_t

0x3878,	// (0x0009ed7a) navi_pane_mv_g2_ParamLimits

0xd652,	// (0x000a8b54) field_vitu2_entry_pane_g1_ParamLimits

0xd65e,	// (0x000a8b60) field_vitu2_entry_pane_g2_ParamLimits

0xd66a,	// (0x000a8b6c) field_vitu2_entry_pane_g3_ParamLimits

0xd66a,	// (0x000a8b6c) field_vitu2_entry_pane_g3

0xf921,	// (0x000aae23) field_vitu2_entry_pane_g_ParamLimits

0x69ba,	// (0x000a1ebc) cell_vitu2_itu_pane_g1_ParamLimits

0x69ca,	// (0x000a1ecc) cell_vitu2_itu_pane_g2_ParamLimits

0x69ca,	// (0x000a1ecc) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x000aae2f) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x000aae2f) cell_vitu2_itu_pane_g

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp05_ParamLimits

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp05

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp03

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp04

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp10_ParamLimits

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp10

0x7689,	// (0x000a2b8b) bg_vkb2_func_pane_cp08

0x766f,	// (0x000a2b71) bg_vkb2_func_pane_cp06

0x767d,	// (0x000a2b7f) bg_vkb2_func_pane_cp07

0xdb95,	// (0x000a9097) bg_vkb2_func_pane_cp11_ParamLimits

0xdb95,	// (0x000a9097) bg_vkb2_func_pane_cp11

0xdbdd,	// (0x000a90df) bg_vkb2_func_pane_cp12_ParamLimits

0xdbdd,	// (0x000a90df) bg_vkb2_func_pane_cp12

0x9ce2,	// (0x000a51e4) bg_vkb2_func_pane_cp09

0xd68a,	// (0x000a8b8c) bg_vkb2_func_pane_g1

0xad4a,	// (0x000a624c) bg_vkb2_func_pane_g2

0xd692,	// (0x000a8b94) bg_vkb2_func_pane_g3

0xd69a,	// (0x000a8b9c) bg_vkb2_func_pane_g4

0xd8c8,	// (0x000a8dca) bg_vkb2_func_pane_g5

0xd6b2,	// (0x000a8bb4) bg_vkb2_func_pane_g6

0xd6ba,	// (0x000a8bbc) bg_vkb2_func_pane_g7

0xd6aa,	// (0x000a8bac) bg_vkb2_func_pane_g8

0xad2a,	// (0x000a622c) bg_vkb2_func_pane_g9

0x0008,

0xfb2b,	// (0x000ab02d) bg_vkb2_func_pane_g

0x79cd,	// (0x000a2ecf) blid2_tripm_pane_g6_ParamLimits

0x79cd,	// (0x000a2ecf) blid2_tripm_pane_g6

0xd526,	// (0x000a8a28) mp4_progress_pane_g1

0x7a25,	// (0x000a2f27) blid2_tripm_values_pane_ParamLimits

0x7a25,	// (0x000a2f27) blid2_tripm_values_pane

0x7ae6,	// (0x000a2fe8) blid2_tripm_values_pane_t1

0x7af4,	// (0x000a2ff6) blid2_tripm_values_pane_t2

0x7b02,	// (0x000a3004) blid2_tripm_values_pane_t3

0x7b10,	// (0x000a3012) blid2_tripm_values_pane_t4

0x7b1e,	// (0x000a3020) blid2_tripm_values_pane_t5

0x7b2c,	// (0x000a302e) blid2_tripm_values_pane_t6

0x7b3a,	// (0x000a303c) blid2_tripm_values_pane_t7

0x7b48,	// (0x000a304a) blid2_tripm_values_pane_t8

0x7b56,	// (0x000a3058) blid2_tripm_values_pane_t9

0x0008,

0xfb3e,	// (0x000ab040) blid2_tripm_values_pane_t

0x229d,	// (0x0009d79f) call_video_pane_t1_ParamLimits

0x22ba,	// (0x0009d7bc) call_video_pane_t2_ParamLimits

0xf279,	// (0x000aa77b) call_video_pane_t_ParamLimits

0x3e14,	// (0x0009f316) msg_header_pane_g1_ParamLimits

0xb5b2,	// (0x000a6ab4) msg_header_pane_g2_ParamLimits

0xb5b2,	// (0x000a6ab4) msg_header_pane_g2

0x0001,

0xf493,	// (0x000aa995) msg_header_pane_g_ParamLimits

0xf493,	// (0x000aa995) msg_header_pane_g

0xa7d5,	// (0x000a5cd7) main_clock2_pane_ParamLimits

0x5949,	// (0x000a0e4b) grid_clock2_toolbar_pane_ParamLimits

0x5949,	// (0x000a0e4b) grid_clock2_toolbar_pane

0x5949,	// (0x000a0e4b) listscroll_clock2_pane_ParamLimits

0x5949,	// (0x000a0e4b) listscroll_clock2_pane

0x59f1,	// (0x000a0ef3) main_clock2_pane_t3_ParamLimits

0x59f1,	// (0x000a0ef3) main_clock2_pane_t3

0x5a03,	// (0x000a0f05) main_clock2_pane_t4_ParamLimits

0x5a03,	// (0x000a0f05) main_clock2_pane_t4

0xdcaf,	// (0x000a91b1) cell_clock2_toolbar_pane

0xdcb7,	// (0x000a91b9) cell_clock2_toolbar_pane_cp01

0xdcb7,	// (0x000a91b9) cell_clock2_toolbar_pane_cp02

0xdcbf,	// (0x000a91c1) cell_clock2_toolbar_pane_cp03

0xdcc7,	// (0x000a91c9) list_clock2_pane

0xb2f6,	// (0x000a67f8) scroll_pane_cp10

0xdccf,	// (0x000a91d1) list_single_clock2_pane_ParamLimits

0xdccf,	// (0x000a91d1) list_single_clock2_pane

0xb43e,	// (0x000a6940) list_highlight_pane_cp08

0xdcdc,	// (0x000a91de) list_single_clock2_pane_t1

0xdcea,	// (0x000a91ec) list_single_clock2_pane_t2

0x0001,

0xfb51,	// (0x000ab053) list_single_clock2_pane_t

0x9ce2,	// (0x000a51e4) bg_button_pane_cp10

0xdcf8,	// (0x000a91fa) cell_clock2_toolbar_pane_g1

0x3e6b,	// (0x0009f36d) aid_main_viewer_pane_g1_ParamLimits

0x3e6b,	// (0x0009f36d) aid_main_viewer_pane_g1

0x3e77,	// (0x0009f379) aid_main_viewer_pane_g2_ParamLimits

0x3e77,	// (0x0009f379) aid_main_viewer_pane_g2

0x3e83,	// (0x0009f385) aid_main_viewer_pane_g3_ParamLimits

0x3e83,	// (0x0009f385) aid_main_viewer_pane_g3

0x3e94,	// (0x0009f396) aid_main_viewer_pane_g4_ParamLimits

0x3e94,	// (0x0009f396) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000aa9a6) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000aa9a6) aid_main_viewer_pane_g

0x461e,	// (0x0009fb20) main_calc_pane_ParamLimits

0x462b,	// (0x0009fb2d) main_dialer2_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_cam6_pane

0x9ce2,	// (0x000a51e4) main_vid6_pane

0x5955,	// (0x000a0e57) listscroll_gen_pane_cp06_ParamLimits

0x5955,	// (0x000a0e57) listscroll_gen_pane_cp06

0x5a15,	// (0x000a0f17) main_clock2_pane_t5_ParamLimits

0x5a15,	// (0x000a0f17) main_clock2_pane_t5

0x5a64,	// (0x000a0f66) aid_call2_pane_cp10_ParamLimits

0x5a76,	// (0x000a0f78) aid_call_pane_cp10_ParamLimits

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a88,	// (0x000a0f8a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a88,	// (0x000a0f8a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb373,	// (0x000a6875) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000aacdc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a9a,	// (0x000a0f9c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x626d,	// (0x000a176f) cell_dialer2_keypad_pane_g2_ParamLimits

0x626d,	// (0x000a176f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000aadc2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000aadc2) cell_dialer2_keypad_pane_g

0x6289,	// (0x000a178b) cell_dialer2_keypad_pane_t1

0x6d07,	// (0x000a2209) main_cset_text2_pane_ParamLimits

0x6d07,	// (0x000a2209) main_cset_text2_pane

0xdafd,	// (0x000a8fff) area_vitu2_query_pane_g1_ParamLimits

0x760e,	// (0x000a2b10) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x000aaf77) area_vitu2_query_pane_g_ParamLimits

0xa311,	// (0x000a5813) area_vitu2_query_pane_t7_ParamLimits

0xa311,	// (0x000a5813) area_vitu2_query_pane_t7

0x766f,	// (0x000a2b71) bg_button_pane_cp018_ParamLimits

0x767d,	// (0x000a2b7f) bg_button_pane_cp021_ParamLimits

0x7689,	// (0x000a2b8b) bg_button_pane_cp022_ParamLimits

0x7689,	// (0x000a2b8b) bg_vkb2_func_pane_cp08_ParamLimits

0x766f,	// (0x000a2b71) bg_vkb2_func_pane_cp06_ParamLimits

0x767d,	// (0x000a2b7f) bg_vkb2_func_pane_cp07_ParamLimits

0x769a,	// (0x000a2b9c) input_focus_pane_cp09_ParamLimits

0x7b64,	// (0x000a3066) cam6_autofocus_pane_ParamLimits

0x7b64,	// (0x000a3066) cam6_autofocus_pane

0x7b86,	// (0x000a3088) cam6_image_uncrop_pane_ParamLimits

0x7b86,	// (0x000a3088) cam6_image_uncrop_pane

0x7bb3,	// (0x000a30b5) cam6_indi_pane_ParamLimits

0x7bb3,	// (0x000a30b5) cam6_indi_pane

0x7bcd,	// (0x000a30cf) cam6_mode_pane_ParamLimits

0x7bcd,	// (0x000a30cf) cam6_mode_pane

0x7be1,	// (0x000a30e3) cam6_timer_pane_ParamLimits

0x7be1,	// (0x000a30e3) cam6_timer_pane

0x7bed,	// (0x000a30ef) cam6_zoom_pane_ParamLimits

0x7bed,	// (0x000a30ef) cam6_zoom_pane

0x7c09,	// (0x000a310b) cam6_mode_pane_g1_ParamLimits

0x7c09,	// (0x000a310b) cam6_mode_pane_g1

0x7c15,	// (0x000a3117) cam6_mode_pane_g2_ParamLimits

0x7c15,	// (0x000a3117) cam6_mode_pane_g2

0x7c21,	// (0x000a3123) cam6_mode_pane_g3_ParamLimits

0x7c21,	// (0x000a3123) cam6_mode_pane_g3

0x7c2d,	// (0x000a312f) cam6_mode_pane_g4_ParamLimits

0x7c2d,	// (0x000a312f) cam6_mode_pane_g4

0x0003,

0xfb56,	// (0x000ab058) cam6_mode_pane_g_ParamLimits

0xfb56,	// (0x000ab058) cam6_mode_pane_g

0xdbcf,	// (0x000a90d1) bg_tb_trans_pane_cp08_ParamLimits

0xdbcf,	// (0x000a90d1) bg_tb_trans_pane_cp08

0xdd00,	// (0x000a9202) cam6_battery_pane_ParamLimits

0xdd00,	// (0x000a9202) cam6_battery_pane

0xdd16,	// (0x000a9218) cam6_indi_pane_g1_ParamLimits

0xdd16,	// (0x000a9218) cam6_indi_pane_g1

0xdd28,	// (0x000a922a) cam6_indi_pane_g2_ParamLimits

0xdd28,	// (0x000a922a) cam6_indi_pane_g2

0xdd3a,	// (0x000a923c) cam6_indi_pane_g3_ParamLimits

0xdd3a,	// (0x000a923c) cam6_indi_pane_g3

0x0002,

0xfb5f,	// (0x000ab061) cam6_indi_pane_g_ParamLimits

0xfb5f,	// (0x000ab061) cam6_indi_pane_g

0xdd4c,	// (0x000a924e) cam6_indi_pane_t1_ParamLimits

0xdd4c,	// (0x000a924e) cam6_indi_pane_t1

0x67c0,	// (0x000a1cc2) cam6_autofocus_pane_g1

0x67b8,	// (0x000a1cba) cam6_autofocus_pane_g2

0x67d0,	// (0x000a1cd2) cam6_autofocus_pane_g3

0x67c8,	// (0x000a1cca) cam6_autofocus_pane_g4

0x0003,

0xfb66,	// (0x000ab068) cam6_autofocus_pane_g

0xdd72,	// (0x000a9274) cam6_timer_pane_g1

0xdd7a,	// (0x000a927c) cam6_timer_pane_t1

0xdd88,	// (0x000a928a) cam6_zoom_cont_pane

0xdd90,	// (0x000a9292) cam6_zoom_pane_g1

0xdd98,	// (0x000a929a) cam6_zoom_pane_g2

0x7c39,	// (0x000a313b) cam6_zoom_pane_g3

0x0002,

0xfb6f,	// (0x000ab071) cam6_zoom_pane_g

0xcca2,	// (0x000a81a4) cam6_battery_pane_g1

0xcca2,	// (0x000a81a4) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000aabe9) cam6_battery_pane_g

0xdda0,	// (0x000a92a2) cam6_zoom_cont_pane_g1

0xdda9,	// (0x000a92ab) cam6_zoom_cont_pane_g2

0xddb2,	// (0x000a92b4) cam6_zoom_cont_pane_g3

0x0002,

0xfb76,	// (0x000ab078) cam6_zoom_cont_pane_g

0x7c56,	// (0x000a3158) cam6_mode_pane_cp_ParamLimits

0x7c56,	// (0x000a3158) cam6_mode_pane_cp

0x7c6a,	// (0x000a316c) cam6_zoom_pane_cp_ParamLimits

0x7c6a,	// (0x000a316c) cam6_zoom_pane_cp

0x7c86,	// (0x000a3188) vid6_image_uncrop_cif_pane_ParamLimits

0x7c86,	// (0x000a3188) vid6_image_uncrop_cif_pane

0x7cb2,	// (0x000a31b4) vid6_image_uncrop_nhd_pane_ParamLimits

0x7cb2,	// (0x000a31b4) vid6_image_uncrop_nhd_pane

0x7cd1,	// (0x000a31d3) vid6_image_uncrop_vga_pane_ParamLimits

0x7cd1,	// (0x000a31d3) vid6_image_uncrop_vga_pane

0x7cf0,	// (0x000a31f2) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cf0,	// (0x000a31f2) vid6_image_uncrop_wvga_pane

0x7d0f,	// (0x000a3211) vid6_indi_pane_ParamLimits

0x7d0f,	// (0x000a3211) vid6_indi_pane

0xdbcf,	// (0x000a90d1) bg_tb_trans_pane_cp09_ParamLimits

0xdbcf,	// (0x000a90d1) bg_tb_trans_pane_cp09

0xddca,	// (0x000a92cc) cam6_battery_pane_cp_ParamLimits

0xddca,	// (0x000a92cc) cam6_battery_pane_cp

0xddd6,	// (0x000a92d8) vid6_indi_pane_g1_ParamLimits

0xddd6,	// (0x000a92d8) vid6_indi_pane_g1

0xdde8,	// (0x000a92ea) vid6_indi_pane_g2_ParamLimits

0xdde8,	// (0x000a92ea) vid6_indi_pane_g2

0xddfa,	// (0x000a92fc) vid6_indi_pane_g3_ParamLimits

0xddfa,	// (0x000a92fc) vid6_indi_pane_g3

0xde11,	// (0x000a9313) vid6_indi_pane_g4_ParamLimits

0xde11,	// (0x000a9313) vid6_indi_pane_g4

0xde28,	// (0x000a932a) vid6_indi_pane_g5_ParamLimits

0xde28,	// (0x000a932a) vid6_indi_pane_g5

0x0004,

0xfb7d,	// (0x000ab07f) vid6_indi_pane_g_ParamLimits

0xfb7d,	// (0x000ab07f) vid6_indi_pane_g

0xde42,	// (0x000a9344) vid6_indi_pane_t1_ParamLimits

0xde42,	// (0x000a9344) vid6_indi_pane_t1

0xde58,	// (0x000a935a) vid6_indi_pane_t2_ParamLimits

0xde58,	// (0x000a935a) vid6_indi_pane_t2

0xde80,	// (0x000a9382) vid6_indi_pane_t3_ParamLimits

0xde80,	// (0x000a9382) vid6_indi_pane_t3

0xdea8,	// (0x000a93aa) vid6_indi_pane_t4_ParamLimits

0xdea8,	// (0x000a93aa) vid6_indi_pane_t4

0x0003,

0xfb88,	// (0x000ab08a) vid6_indi_pane_t_ParamLimits

0xfb88,	// (0x000ab08a) vid6_indi_pane_t

0xdecc,	// (0x000a93ce) wait_bar_pane_cp08

0x7d34,	// (0x000a3236) main_cset_text2_pane_t1_ParamLimits

0x7d34,	// (0x000a3236) main_cset_text2_pane_t1

0x7c41,	// (0x000a3143) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c41,	// (0x000a3143) listscroll_gen_pane_cp06_t1

0x9ce2,	// (0x000a51e4) main_cam6_set_pane

0x6642,	// (0x000a1b44) bg_tb_trans_pane_cp06_ParamLimits

0x6658,	// (0x000a1b5a) cam4_indicators_pane_g1_ParamLimits

0x6669,	// (0x000a1b6b) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000aadff) cam4_indicators_pane_g_ParamLimits

0x6681,	// (0x000a1b83) cam4_indicators_pane_t1_ParamLimits

0x672e,	// (0x000a1c30) bg_tb_trans_pane_cp07_ParamLimits

0x6746,	// (0x000a1c48) vid4_indicators_pane_g1_ParamLimits

0x675c,	// (0x000a1c5e) vid4_indicators_pane_g2_ParamLimits

0x6770,	// (0x000a1c72) vid4_indicators_pane_g3_ParamLimits

0x6783,	// (0x000a1c85) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000aae11) vid4_indicators_pane_g_ParamLimits

0x67a1,	// (0x000a1ca3) vid4_indicators_pane_t1_ParamLimits

0x77c3,	// (0x000a2cc5) vid4_progress_pane_g1_ParamLimits

0x77d5,	// (0x000a2cd7) vid4_progress_pane_g2_ParamLimits

0x3ef1,	// (0x0009f3f3) vid4_progress_pane_g3_ParamLimits

0x77e7,	// (0x000a2ce9) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000aafc2) vid4_progress_pane_g_ParamLimits

0x7805,	// (0x000a2d07) vid4_progress_pane_t1_ParamLimits

0x781a,	// (0x000a2d1c) vid4_progress_pane_t2_ParamLimits

0x7830,	// (0x000a2d32) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000aafcd) vid4_progress_pane_t_ParamLimits

0x7845,	// (0x000a2d47) wait_bar_pane_cp07_ParamLimits

0x7d5b,	// (0x000a325d) main_cam6_set_pane_g2_ParamLimits

0x7d5b,	// (0x000a325d) main_cam6_set_pane_g2

0x7d67,	// (0x000a3269) main_cset6_listscroll_pane_ParamLimits

0x7d67,	// (0x000a3269) main_cset6_listscroll_pane

0x7d94,	// (0x000a3296) main_cset6_slider_pane_ParamLimits

0x7d94,	// (0x000a3296) main_cset6_slider_pane

0x7da0,	// (0x000a32a2) main_cset6_text2_pane_ParamLimits

0x7da0,	// (0x000a32a2) main_cset6_text2_pane

0xdedb,	// (0x000a93dd) main_cset6_text_pane

0xdee3,	// (0x000a93e5) main_cset_list_pane_copy1_ParamLimits

0xdee3,	// (0x000a93e5) main_cset_list_pane_copy1

0xdef3,	// (0x000a93f5) scroll_pane_cp028_copy1

0x7db3,	// (0x000a32b5) cset_list_set_pane_copy1

0x7dc3,	// (0x000a32c5) aid_position_infowindow_above_copy1

0x7dcb,	// (0x000a32cd) aid_position_infowindow_below_copy1

0x7dd3,	// (0x000a32d5) cset_list_set_pane_g1_copy1

0x7ddb,	// (0x000a32dd) cset_list_set_pane_g3_copy1_ParamLimits

0x7ddb,	// (0x000a32dd) cset_list_set_pane_g3_copy1

0x7dea,	// (0x000a32ec) cset_list_set_pane_t1_copy1_ParamLimits

0x7dea,	// (0x000a32ec) cset_list_set_pane_t1_copy1

0xa26e,	// (0x000a5770) list_highlight_pane_cp021_copy1_ParamLimits

0xa26e,	// (0x000a5770) list_highlight_pane_cp021_copy1

0xdefc,	// (0x000a93fe) cset6_slider_pane_ParamLimits

0xdefc,	// (0x000a93fe) cset6_slider_pane

0xdf28,	// (0x000a942a) main_cset6_slider_pane_g1_ParamLimits

0xdf28,	// (0x000a942a) main_cset6_slider_pane_g1

0x7dff,	// (0x000a3301) main_cset6_slider_pane_g2_ParamLimits

0x7dff,	// (0x000a3301) main_cset6_slider_pane_g2

0xdf50,	// (0x000a9452) main_cset6_slider_pane_g3_ParamLimits

0xdf50,	// (0x000a9452) main_cset6_slider_pane_g3

0x7e27,	// (0x000a3329) main_cset6_slider_pane_g4_ParamLimits

0x7e27,	// (0x000a3329) main_cset6_slider_pane_g4

0x7e33,	// (0x000a3335) main_cset6_slider_pane_g5_ParamLimits

0x7e33,	// (0x000a3335) main_cset6_slider_pane_g5

0xd7d1,	// (0x000a8cd3) main_cset6_slider_pane_g7_ParamLimits

0xd7d1,	// (0x000a8cd3) main_cset6_slider_pane_g7

0xd7dd,	// (0x000a8cdf) main_cset6_slider_pane_g8_ParamLimits

0xd7dd,	// (0x000a8cdf) main_cset6_slider_pane_g8

0x7e3f,	// (0x000a3341) main_cset6_slider_pane_g9_ParamLimits

0x7e3f,	// (0x000a3341) main_cset6_slider_pane_g9

0x7e4b,	// (0x000a334d) main_cset6_slider_pane_g10_ParamLimits

0x7e4b,	// (0x000a334d) main_cset6_slider_pane_g10

0x7e57,	// (0x000a3359) main_cset6_slider_pane_g11_ParamLimits

0x7e57,	// (0x000a3359) main_cset6_slider_pane_g11

0x7e63,	// (0x000a3365) main_cset6_slider_pane_g12_ParamLimits

0x7e63,	// (0x000a3365) main_cset6_slider_pane_g12

0x7e6f,	// (0x000a3371) main_cset6_slider_pane_g13_ParamLimits

0x7e6f,	// (0x000a3371) main_cset6_slider_pane_g13

0x7e7b,	// (0x000a337d) main_cset6_slider_pane_g14_ParamLimits

0x7e7b,	// (0x000a337d) main_cset6_slider_pane_g14

0x7e87,	// (0x000a3389) main_cset6_slider_pane_g15_ParamLimits

0x7e87,	// (0x000a3389) main_cset6_slider_pane_g15

0x7e9f,	// (0x000a33a1) main_cset6_slider_pane_g16_ParamLimits

0x7e9f,	// (0x000a33a1) main_cset6_slider_pane_g16

0x7eab,	// (0x000a33ad) main_cset6_slider_pane_g17_ParamLimits

0x7eab,	// (0x000a33ad) main_cset6_slider_pane_g17

0x0011,

0xfb91,	// (0x000ab093) main_cset6_slider_pane_g_ParamLimits

0xfb91,	// (0x000ab093) main_cset6_slider_pane_g

0xdf5c,	// (0x000a945e) main_cset6_slider_pane_t1_ParamLimits

0xdf5c,	// (0x000a945e) main_cset6_slider_pane_t1

0x7ecf,	// (0x000a33d1) main_cset6_slider_pane_t2_ParamLimits

0x7ecf,	// (0x000a33d1) main_cset6_slider_pane_t2

0x7efa,	// (0x000a33fc) main_cset6_slider_pane_t3_ParamLimits

0x7efa,	// (0x000a33fc) main_cset6_slider_pane_t3

0x7f25,	// (0x000a3427) main_cset6_slider_pane_t4_ParamLimits

0x7f25,	// (0x000a3427) main_cset6_slider_pane_t4

0x7f50,	// (0x000a3452) main_cset6_slider_pane_t5_ParamLimits

0x7f50,	// (0x000a3452) main_cset6_slider_pane_t5

0xdfb8,	// (0x000a94ba) main_cset6_slider_pane_t7_ParamLimits

0xdfb8,	// (0x000a94ba) main_cset6_slider_pane_t7

0x7f7b,	// (0x000a347d) main_cset6_slider_pane_t8_ParamLimits

0x7f7b,	// (0x000a347d) main_cset6_slider_pane_t8

0x7f9f,	// (0x000a34a1) main_cset6_slider_pane_t9_ParamLimits

0x7f9f,	// (0x000a34a1) main_cset6_slider_pane_t9

0x7fc3,	// (0x000a34c5) main_cset6_slider_pane_t10_ParamLimits

0x7fc3,	// (0x000a34c5) main_cset6_slider_pane_t10

0x7fe7,	// (0x000a34e9) main_cset6_slider_pane_t11_ParamLimits

0x7fe7,	// (0x000a34e9) main_cset6_slider_pane_t11

0xdfee,	// (0x000a94f0) main_cset6_slider_pane_t14_ParamLimits

0xdfee,	// (0x000a94f0) main_cset6_slider_pane_t14

0xe027,	// (0x000a9529) main_cset6_slider_pane_t15_ParamLimits

0xe027,	// (0x000a9529) main_cset6_slider_pane_t15

0x000b,

0xfbb6,	// (0x000ab0b8) main_cset6_slider_pane_t_ParamLimits

0xfbb6,	// (0x000ab0b8) main_cset6_slider_pane_t

0xdf9d,	// (0x000a949f) cset_slider_pane_g1_copy1

0xdfa6,	// (0x000a94a8) cset_slider_pane_g2_copy1

0xdfaf,	// (0x000a94b1) cset_slider_pane_g3_copy1

0x9ce2,	// (0x000a51e4) bg_popup_sub_pane_cp011_copy1

0xe060,	// (0x000a9562) main_cset_text_pane_g1_copy1

0xd919,	// (0x000a8e1b) main_cset_text_pane_t1_copy1

0xd927,	// (0x000a8e29) main_cset_text_pane_t2_copy1

0xd935,	// (0x000a8e37) main_cset_text_pane_t3_copy1

0xd943,	// (0x000a8e45) main_cset_text_pane_t4_copy1

0xd951,	// (0x000a8e53) main_cset_text_pane_t5_copy1

0xe068,	// (0x000a956a) main_cset_text_pane_t6_copy1

0xe076,	// (0x000a9578) main_cset_text_pane_t7_copy1

0x80dc,	// (0x000a35de) main_cset_text2_pane_t1_copy1

0xa26e,	// (0x000a5770) main_ncimui_pane

0x4670,	// (0x0009fb72) popup_query_ncimui_window_ParamLimits

0x4670,	// (0x0009fb72) popup_query_ncimui_window

0xa94e,	// (0x000a5e50) field_cale_ev2_pane_g4_ParamLimits

0xa94e,	// (0x000a5e50) field_cale_ev2_pane_g4

0x5f83,	// (0x000a1485) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f83,	// (0x000a1485) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x000aad9d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x000aad9d) cell_video_dialer_keypad_pane_g

0x5f9b,	// (0x000a149d) cell_video_dialer_keypad_pane_t1

0x9ce2,	// (0x000a51e4) bg_popup_window_pane_cp012

0xb1e2,	// (0x000a66e4) heading_pane_cp06

0xe0a2,	// (0x000a95a4) ncim_query_content_pane

0x9ce2,	// (0x000a51e4) bg_popup_heading_pane_cp01

0xe0aa,	// (0x000a95ac) ncim_heading_pane_t1

0xe0b8,	// (0x000a95ba) ncim_indicator_popup_pane

0xe0ca,	// (0x000a95cc) ncim_query_button_pane

0xe0e0,	// (0x000a95e2) ncim_query_content_pane_t1

0xe0f2,	// (0x000a95f4) ncim_query_content_pane_t2

0x0005,

0xfbfa,	// (0x000ab0fc) ncim_query_content_pane_t

0xe12c,	// (0x000a962e) ncim_query_list_pane

0xe13e,	// (0x000a9640) ncim_query_popup_pane

0xe0b8,	// (0x000a95ba) ncim_indicator_popup_pane_ParamLimits

0x8238,	// (0x000a373a) ncim_query_content_pane_g1_ParamLimits

0x8238,	// (0x000a373a) ncim_query_content_pane_g1

0xe0e0,	// (0x000a95e2) ncim_query_content_pane_t1_ParamLimits

0xe0f2,	// (0x000a95f4) ncim_query_content_pane_t2_ParamLimits

0x8244,	// (0x000a3746) ncim_query_content_pane_t3_ParamLimits

0x8244,	// (0x000a3746) ncim_query_content_pane_t3

0x8261,	// (0x000a3763) ncim_query_content_pane_t4_ParamLimits

0x8261,	// (0x000a3763) ncim_query_content_pane_t4

0x827e,	// (0x000a3780) ncim_query_content_pane_t5_ParamLimits

0x827e,	// (0x000a3780) ncim_query_content_pane_t5

0xe104,	// (0x000a9606) ncim_query_content_pane_t6_ParamLimits

0xe104,	// (0x000a9606) ncim_query_content_pane_t6

0xfbfa,	// (0x000ab0fc) ncim_query_content_pane_t_ParamLimits

0xe12c,	// (0x000a962e) ncim_query_list_pane_ParamLimits

0xe13e,	// (0x000a9640) ncim_query_popup_pane_ParamLimits

0xe152,	// (0x000a9654) wait_bar_pane_cp04

0x9ce2,	// (0x000a51e4) input_focus_pane_cp011

0xe15a,	// (0x000a965c) ncim_query_popup_pane_t1

0xe168,	// (0x000a966a) ncim_list_query_list_pane_ParamLimits

0xe168,	// (0x000a966a) ncim_list_query_list_pane

0x9ce2,	// (0x000a51e4) bg_button_pane_cp027

0xe17b,	// (0x000a967d) ncim_query_button_pane_g1

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp012

0xe185,	// (0x000a9687) ncim_list_query_list_pane_g1

0xe18d,	// (0x000a968f) ncim_list_query_list_pane_t1

0x6675,	// (0x000a1b77) cam4_indicators_pane_g3_ParamLimits

0x6675,	// (0x000a1b77) cam4_indicators_pane_g3

0x678f,	// (0x000a1c91) vid4_indicators_pane_g5_ParamLimits

0x678f,	// (0x000a1c91) vid4_indicators_pane_g5

0x77f6,	// (0x000a2cf8) vid4_progress_pane_g5_ParamLimits

0x77f6,	// (0x000a2cf8) vid4_progress_pane_g5

0x810e,	// (0x000a3610) main_ncimui_pane_g1

0x817a,	// (0x000a367c) ncimui_group_query_pane_ParamLimits

0x817a,	// (0x000a367c) ncimui_group_query_pane

0x81d4,	// (0x000a36d6) ncimui_list_pane_ParamLimits

0x81d4,	// (0x000a36d6) ncimui_list_pane

0x81fb,	// (0x000a36fd) ncimui_text_pane_ParamLimits

0x81fb,	// (0x000a36fd) ncimui_text_pane

0x829b,	// (0x000a379d) ncimui_text_pane_t1_ParamLimits

0x829b,	// (0x000a379d) ncimui_text_pane_t1

0xe19b,	// (0x000a969d) ncimui_list_single_graphic_pane_ParamLimits

0xe19b,	// (0x000a969d) ncimui_list_single_graphic_pane

0x82ba,	// (0x000a37bc) ncimui_query_pane_ParamLimits

0x82ba,	// (0x000a37bc) ncimui_query_pane

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp013

0xe1ab,	// (0x000a96ad) ncim_list_query_list_pane_t1_copy1

0xe185,	// (0x000a9687) ncim_list_single_graphic_pane_g1

0xe1b9,	// (0x000a96bb) ncim_query_button_pane_cp01

0xe1c5,	// (0x000a96c7) ncim_query_entry_pane_ParamLimits

0xe1c5,	// (0x000a96c7) ncim_query_entry_pane

0xe1d8,	// (0x000a96da) ncimui_query_pane_g1

0xe1e4,	// (0x000a96e6) ncimui_query_pane_t1_ParamLimits

0xe1e4,	// (0x000a96e6) ncimui_query_pane_t1

0xa26e,	// (0x000a5770) input_focus_pane_cp012

0xe1fd,	// (0x000a96ff) ncim_query_entry_pane_t1

0xa7d5,	// (0x000a5cd7) main_im_pane_ParamLimits

0xa26e,	// (0x000a5770) main_mobtv_pane_ParamLimits

0xa26e,	// (0x000a5770) main_mobtv_pane

0x7eb7,	// (0x000a33b9) main_cset6_slider_pane_g18_ParamLimits

0x7eb7,	// (0x000a33b9) main_cset6_slider_pane_g18

0x7ec3,	// (0x000a33c5) main_cset6_slider_pane_g19_ParamLimits

0x7ec3,	// (0x000a33c5) main_cset6_slider_pane_g19

0xd66a,	// (0x000a8b6c) bg_main_mobtv_pane_ParamLimits

0xd66a,	// (0x000a8b6c) bg_main_mobtv_pane

0x82cd,	// (0x000a37cf) main_mobtv_info_pane

0x82d8,	// (0x000a37da) main_mobtv_loading_pane_ParamLimits

0x82d8,	// (0x000a37da) main_mobtv_loading_pane

0xe20f,	// (0x000a9711) main_mobtv_pg_channel_list_pane

0xe219,	// (0x000a971b) main_mobtv_pg_hdr_pane

0x82e5,	// (0x000a37e7) main_mobtv_programe_curr_pane_ParamLimits

0x82e5,	// (0x000a37e7) main_mobtv_programe_curr_pane

0x82f2,	// (0x000a37f4) main_mobtv_programe_next_pane_ParamLimits

0x82f2,	// (0x000a37f4) main_mobtv_programe_next_pane

0xe222,	// (0x000a9724) popup_mobtv_noti_window

0xcca2,	// (0x000a81a4) main_tv_pg_hdr_pane_g1

0xe22c,	// (0x000a972e) main_tv_pg_hdr_pane_g2

0xe234,	// (0x000a9736) main_tv_pg_hdr_pane_g3

0xe23c,	// (0x000a973e) main_tv_pg_hdr_pane_g4

0xe244,	// (0x000a9746) main_tv_pg_hdr_pane_g5

0xe24e,	// (0x000a9750) main_tv_pg_hdr_pane_g6

0xe258,	// (0x000a975a) main_tv_pg_hdr_pane_g7

0xe262,	// (0x000a9764) main_tv_pg_hdr_pane_g8

0xe26c,	// (0x000a976e) main_tv_pg_hdr_pane_g9

0xe276,	// (0x000a9778) main_tv_pg_hdr_pane_g10

0xe280,	// (0x000a9782) main_tv_pg_hdr_pane_g11

0x000a,

0xfc07,	// (0x000ab109) main_tv_pg_hdr_pane_g

0xe28a,	// (0x000a978c) main_tv_pg_hdr_pane_t1

0xe298,	// (0x000a979a) main_tv_pg_hdr_pane_t2

0xe2a6,	// (0x000a97a8) main_tv_pg_hdr_pane_t3

0xe2b6,	// (0x000a97b8) main_tv_pg_hdr_pane_t4

0xe2c6,	// (0x000a97c8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1e,	// (0x000ab120) main_tv_pg_hdr_pane_t

0xe2d6,	// (0x000a97d8) single_mobtv_pg_channel_pane_ParamLimits

0xe2d6,	// (0x000a97d8) single_mobtv_pg_channel_pane

0xe2e8,	// (0x000a97ea) single_mobtv_pg_channel_table_pane

0xe2f1,	// (0x000a97f3) single_mobtv_pg_channel_thumb_pane

0xe2fa,	// (0x000a97fc) single_tv_pg_channel_pane_g1

0xe303,	// (0x000a9805) single_tv_pg_channel_pane_g2

0x0001,

0xfc29,	// (0x000ab12b) single_tv_pg_channel_pane_g

0xced2,	// (0x000a83d4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xced2,	// (0x000a83d4) bg_single_mobtv_pg_channel_thumb_pane

0xe30c,	// (0x000a980e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe30c,	// (0x000a980e) single_mobtv_pg_channel_thumb_pane_g1

0xe31a,	// (0x000a981c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe31a,	// (0x000a981c) single_mobtv_pg_channel_thumb_pane_g2

0xe326,	// (0x000a9828) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe326,	// (0x000a9828) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2e,	// (0x000ab130) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2e,	// (0x000ab130) single_mobtv_pg_channel_thumb_pane_g

0xe332,	// (0x000a9834) single_mobtv_pg_channel_thumb_pane_t1

0xe340,	// (0x000a9842) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc35,	// (0x000ab137) single_mobtv_pg_channel_thumb_pane_t

0xcca2,	// (0x000a81a4) bg_single_mobtv_pg_channel_table_pane_g1

0xcca2,	// (0x000a81a4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000aabe9) bg_single_mobtv_pg_channel_table_pane_g

0xe34e,	// (0x000a9850) single_mobtv_pg_channel_table_pane_t1

0xe35c,	// (0x000a985e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3a,	// (0x000ab13c) single_mobtv_pg_channel_table_pane_t

0x8307,	// (0x000a3809) main_mobtv_info_pane_g1_ParamLimits

0x8307,	// (0x000a3809) main_mobtv_info_pane_g1

0x8323,	// (0x000a3825) main_mobtv_info_pane_t1_ParamLimits

0x8323,	// (0x000a3825) main_mobtv_info_pane_t1

0x839b,	// (0x000a389d) main_mobtv_info_pane_t2_ParamLimits

0x839b,	// (0x000a389d) main_mobtv_info_pane_t2

0x0002,

0xfc44,	// (0x000ab146) main_mobtv_info_pane_t_ParamLimits

0xfc44,	// (0x000ab146) main_mobtv_info_pane_t

0x842c,	// (0x000a392e) wait_bar_pane_cp05

0x843e,	// (0x000a3940) main_mobtv_loading_pane_g1_ParamLimits

0x843e,	// (0x000a3940) main_mobtv_loading_pane_g1

0x844a,	// (0x000a394c) main_mobtv_loading_pane_g2_ParamLimits

0x844a,	// (0x000a394c) main_mobtv_loading_pane_g2

0x8456,	// (0x000a3958) main_mobtv_loading_pane_g3_ParamLimits

0x8456,	// (0x000a3958) main_mobtv_loading_pane_g3

0x0002,

0xfc4b,	// (0x000ab14d) main_mobtv_loading_pane_g_ParamLimits

0xfc4b,	// (0x000ab14d) main_mobtv_loading_pane_g

0xe36a,	// (0x000a986c) main_mobtv_loading_pane_t1_ParamLimits

0xe36a,	// (0x000a986c) main_mobtv_loading_pane_t1

0xe382,	// (0x000a9884) main_mobtv_loading_pane_t2_ParamLimits

0xe382,	// (0x000a9884) main_mobtv_loading_pane_t2

0x0001,

0xfc52,	// (0x000ab154) main_mobtv_loading_pane_t_ParamLimits

0xfc52,	// (0x000ab154) main_mobtv_loading_pane_t

0x8464,	// (0x000a3966) wait_bar_pane_cp06_ParamLimits

0x8464,	// (0x000a3966) wait_bar_pane_cp06

0xe3a6,	// (0x000a98a8) main_mobtv_programe_curr_pane_t1

0xe3b4,	// (0x000a98b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc57,	// (0x000ab159) main_mobtv_programe_curr_pane_t

0xe3c2,	// (0x000a98c4) main_mobtv_programe_next_pane_t1

0xe3d0,	// (0x000a98d2) main_mobtv_programe_next_pane_t2

0xe3de,	// (0x000a98e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5c,	// (0x000ab15e) main_mobtv_programe_next_pane_t

0x9ce2,	// (0x000a51e4) bg_popup_mobtv_noti_window_pane

0xe3ec,	// (0x000a98ee) popup_mobtv_noti_window_g1

0xe3f4,	// (0x000a98f6) popup_mobtv_noti_window_t1

0xe402,	// (0x000a9904) popup_mobtv_noti_window_t2

0x0001,

0xfc63,	// (0x000ab165) popup_mobtv_noti_window_t

0xcca2,	// (0x000a81a4) bg_popup_mobtv_noti_window_pane_g1

0x9ce2,	// (0x000a51e4) sc_clock_pane

0x9ce2,	// (0x000a51e4) main_fs_bigclock_pane

0x7a13,	// (0x000a2f15) blid2_tripm_pane_t4_ParamLimits

0x7a13,	// (0x000a2f15) blid2_tripm_pane_t4

0x8470,	// (0x000a3972) sc_clock_pane_g1_ParamLimits

0x8470,	// (0x000a3972) sc_clock_pane_g1

0x847e,	// (0x000a3980) sc_clock_pane_t1_ParamLimits

0x847e,	// (0x000a3980) sc_clock_pane_t1

0x8493,	// (0x000a3995) sc_clock_pane_t2_ParamLimits

0x8493,	// (0x000a3995) sc_clock_pane_t2

0x84a5,	// (0x000a39a7) sc_clock_pane_t3_ParamLimits

0x84a5,	// (0x000a39a7) sc_clock_pane_t3

0x0004,

0xfc68,	// (0x000ab16a) sc_clock_pane_t_ParamLimits

0xfc68,	// (0x000ab16a) sc_clock_pane_t

0x92e0,	// (0x000a47e2) main_fs_bigclock_indicator_pane_ParamLimits

0x92e0,	// (0x000a47e2) main_fs_bigclock_indicator_pane

0x8532,	// (0x000a3a34) main_fs_bigclock_pane_g1_ParamLimits

0x8532,	// (0x000a3a34) main_fs_bigclock_pane_g1

0x92ec,	// (0x000a47ee) main_fs_bigclock_pane_t1_ParamLimits

0x92ec,	// (0x000a47ee) main_fs_bigclock_pane_t1

0x92fe,	// (0x000a4800) main_fs_bigclock_pane_t2_ParamLimits

0x92fe,	// (0x000a4800) main_fs_bigclock_pane_t2

0x9312,	// (0x000a4814) main_fs_bigclock_pane_t3_ParamLimits

0x9312,	// (0x000a4814) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000ab36e) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000ab36e) main_fs_bigclock_pane_t

0xec55,	// (0x000aa157) main_fs_bigclock_indicator_pane_g1

0xe0d2,	// (0x000a95d4) ncim_query_content_pane_g2_ParamLimits

0xe0d2,	// (0x000a95d4) ncim_query_content_pane_g2

0x0001,

0xfbf5,	// (0x000ab0f7) ncim_query_content_pane_g_ParamLimits

0xfbf5,	// (0x000ab0f7) ncim_query_content_pane_g

0x84b7,	// (0x000a39b9) sc_clock_pane_t4_ParamLimits

0x84b7,	// (0x000a39b9) sc_clock_pane_t4

0xa26e,	// (0x000a5770) main_radioblah_pane

0xd5d5,	// (0x000a8ad7) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d5,	// (0x000a8ad7) cell_call4_button_pane_t1_copy1

0x812a,	// (0x000a362c) main_ncimui_pane_t1_ParamLimits

0x812a,	// (0x000a362c) main_ncimui_pane_t1

0x8144,	// (0x000a3646) main_ncimui_pane_t2_ParamLimits

0x8144,	// (0x000a3646) main_ncimui_pane_t2

0x0002,

0xfbee,	// (0x000ab0f0) main_ncimui_pane_t_ParamLimits

0xfbee,	// (0x000ab0f0) main_ncimui_pane_t

0xe54e,	// (0x000a9a50) main_radioblah_anim_pane_ParamLimits

0xe54e,	// (0x000a9a50) main_radioblah_anim_pane

0xe55f,	// (0x000a9a61) main_radioblah_info_pane_ParamLimits

0xe55f,	// (0x000a9a61) main_radioblah_info_pane

0xe573,	// (0x000a9a75) main_radioblah_pane_t1_ParamLimits

0xe573,	// (0x000a9a75) main_radioblah_pane_t1

0xe58f,	// (0x000a9a91) main_radioblah_pane_t2_ParamLimits

0xe58f,	// (0x000a9a91) main_radioblah_pane_t2

0x0003,

0xfc89,	// (0x000ab18b) main_radioblah_pane_t_ParamLimits

0xfc89,	// (0x000ab18b) main_radioblah_pane_t

0x8584,	// (0x000a3a86) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8584,	// (0x000a3a86) main_radioblah_rocker_ctrl_pane

0xe5d7,	// (0x000a9ad9) main_radioblah_info_pane_t1_ParamLimits

0xe5d7,	// (0x000a9ad9) main_radioblah_info_pane_t1

0x85cd,	// (0x000a3acf) main_radioblah_info_pane_t2_ParamLimits

0x85cd,	// (0x000a3acf) main_radioblah_info_pane_t2

0x0003,

0xfc92,	// (0x000ab194) main_radioblah_info_pane_t_ParamLimits

0xfc92,	// (0x000ab194) main_radioblah_info_pane_t

0xcca2,	// (0x000a81a4) main_radioblah_rocker_ctrl_pane_g1

0x867d,	// (0x000a3b7f) main_radioblah_rocker_ctrl_pane_g2

0x8685,	// (0x000a3b87) main_radioblah_rocker_ctrl_pane_g3

0x868d,	// (0x000a3b8f) main_radioblah_rocker_ctrl_pane_g4

0x8695,	// (0x000a3b97) main_radioblah_rocker_ctrl_pane_g5

0x869d,	// (0x000a3b9f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9b,	// (0x000ab19d) main_radioblah_rocker_ctrl_pane_g

0x80dc,	// (0x000a35de) main_cset_text2_pane_t1_copy1_ParamLimits

0x6594,	// (0x000a1a96) cam4_image_uncrop_qvga_pane

0x66e7,	// (0x000a1be9) vid4_image_uncrop_qcif_pane

0x7ba5,	// (0x000a30a7) cam6_image_uncrop_qvga_pane_ParamLimits

0x7ba5,	// (0x000a30a7) cam6_image_uncrop_qvga_pane

0xddba,	// (0x000a92bc) vid6_image_uncrop_qcif_pane_ParamLimits

0xddba,	// (0x000a92bc) vid6_image_uncrop_qcif_pane

0x9ce2,	// (0x000a51e4) bg_popup_preview_window_pane_cp03

0xe084,	// (0x000a9586) list_cset_text2_pane

0xe08c,	// (0x000a958e) main_cset6_text2_pane_g1

0xe094,	// (0x000a9596) main_cset6_text2_pane_t1

0x86a5,	// (0x000a3ba7) list_cset_text2_pane_t1_ParamLimits

0x86a5,	// (0x000a3ba7) list_cset_text2_pane_t1

0xa26e,	// (0x000a5770) main_radioblah_pane_ParamLimits

0x8418,	// (0x000a391a) main_mobtv_info_pane_t3_ParamLimits

0x8418,	// (0x000a391a) main_mobtv_info_pane_t3

0x8572,	// (0x000a3a74) main_radioblah_pane_g1

0x859d,	// (0x000a3a9f) main_radioblah_info_pane_g1

0x8622,	// (0x000a3b24) main_radioblah_info_pane_t3_ParamLimits

0x8622,	// (0x000a3b24) main_radioblah_info_pane_t3

0x31fd,	// (0x0009e6ff) highlight_cell_cale_month_pane_ParamLimits

0x31fd,	// (0x0009e6ff) highlight_cell_cale_month_pane

0x9ce2,	// (0x000a51e4) main_phob_fisheye_pane

0xcfae,	// (0x000a84b0) scroll_pane_cp0031_ParamLimits

0xcfae,	// (0x000a84b0) scroll_pane_cp0031

0xdecc,	// (0x000a93ce) wait_bar_pane_cp08_ParamLimits

0x7db3,	// (0x000a32b5) cset_list_set_pane_copy1_ParamLimits

0xe611,	// (0x000a9b13) highlight_cell_cale_month_pane_g1

0x86bc,	// (0x000a3bbe) highlight_cell_cale_month_pane_t1

0xdb51,	// (0x000a9053) list_gen_pane_cp01

0xd7bc,	// (0x000a8cbe) scroll_pane_01

0x86ca,	// (0x000a3bcc) list_single_double_fisheye_pane

0x86d3,	// (0x000a3bd5) list_double_fisheye_pane_g1_ParamLimits

0x86d3,	// (0x000a3bd5) list_double_fisheye_pane_g1

0x86df,	// (0x000a3be1) list_double_fisheye_pane_g2_ParamLimits

0x86df,	// (0x000a3be1) list_double_fisheye_pane_g2

0x86f3,	// (0x000a3bf5) list_double_fisheye_pane_g3_ParamLimits

0x86f3,	// (0x000a3bf5) list_double_fisheye_pane_g3

0x0004,

0xfca8,	// (0x000ab1aa) list_double_fisheye_pane_g_ParamLimits

0xfca8,	// (0x000ab1aa) list_double_fisheye_pane_g

0x871c,	// (0x000a3c1e) list_double_fisheye_pane_t1_ParamLimits

0x871c,	// (0x000a3c1e) list_double_fisheye_pane_t1

0x8737,	// (0x000a3c39) list_double_fisheye_pane_t2_ParamLimits

0x8737,	// (0x000a3c39) list_double_fisheye_pane_t2

0x0001,

0xfcb3,	// (0x000ab1b5) list_double_fisheye_pane_t_ParamLimits

0xfcb3,	// (0x000ab1b5) list_double_fisheye_pane_t

0x9ce2,	// (0x000a51e4) main_call5_pane

0x84dd,	// (0x000a39df) sc_swipe_pane_ParamLimits

0x84dd,	// (0x000a39df) sc_swipe_pane

0x8765,	// (0x000a3c67) call5_image_pane_ParamLimits

0x8765,	// (0x000a3c67) call5_image_pane

0x8777,	// (0x000a3c79) call5_swipe_1_pane_ParamLimits

0x8777,	// (0x000a3c79) call5_swipe_1_pane

0x8783,	// (0x000a3c85) call5_swipe_2_pane_ParamLimits

0x8783,	// (0x000a3c85) call5_swipe_2_pane

0x879f,	// (0x000a3ca1) popup_call5_audio_first_window_ParamLimits

0x879f,	// (0x000a3ca1) popup_call5_audio_first_window

0xced2,	// (0x000a83d4) call5_swipe_1_pane_g1_ParamLimits

0xced2,	// (0x000a83d4) call5_swipe_1_pane_g1

0xe619,	// (0x000a9b1b) call5_swipe_1_pane_g2_ParamLimits

0xe619,	// (0x000a9b1b) call5_swipe_1_pane_g2

0x0001,

0xfcb8,	// (0x000ab1ba) call5_swipe_1_pane_g_ParamLimits

0xfcb8,	// (0x000ab1ba) call5_swipe_1_pane_g

0xe625,	// (0x000a9b27) call5_swipe_1_pane_t1_ParamLimits

0xe625,	// (0x000a9b27) call5_swipe_1_pane_t1

0xced2,	// (0x000a83d4) call5_swipe_2_pane_g1_ParamLimits

0xced2,	// (0x000a83d4) call5_swipe_2_pane_g1

0xe63a,	// (0x000a9b3c) call5_swipe_2_pane_g2_ParamLimits

0xe63a,	// (0x000a9b3c) call5_swipe_2_pane_g2

0x0001,

0xfcbd,	// (0x000ab1bf) call5_swipe_2_pane_g_ParamLimits

0xfcbd,	// (0x000ab1bf) call5_swipe_2_pane_g

0xe646,	// (0x000a9b48) call5_swipe_2_pane_t1_ParamLimits

0xe646,	// (0x000a9b48) call5_swipe_2_pane_t1

0xe65b,	// (0x000a9b5d) sc_swipe_pane_g1_ParamLimits

0xe65b,	// (0x000a9b5d) sc_swipe_pane_g1

0xe668,	// (0x000a9b6a) sc_swipe_pane_g2_ParamLimits

0xe668,	// (0x000a9b6a) sc_swipe_pane_g2

0x0001,

0xfcc2,	// (0x000ab1c4) sc_swipe_pane_g_ParamLimits

0xfcc2,	// (0x000ab1c4) sc_swipe_pane_g

0xe674,	// (0x000a9b76) sc_swipe_pane_t1_ParamLimits

0xe674,	// (0x000a9b76) sc_swipe_pane_t1

0x9ce2,	// (0x000a51e4) main_cmail_launcher_pane

0x87af,	// (0x000a3cb1) aid_size_cell_cmail_l_ParamLimits

0x87af,	// (0x000a3cb1) aid_size_cell_cmail_l

0x87bf,	// (0x000a3cc1) grid_cmail_l_pane_ParamLimits

0x87bf,	// (0x000a3cc1) grid_cmail_l_pane

0x87cf,	// (0x000a3cd1) cell_cmail_l_pane_ParamLimits

0x87cf,	// (0x000a3cd1) cell_cmail_l_pane

0x87e5,	// (0x000a3ce7) cell_cmail_l_pane_g1_ParamLimits

0x87e5,	// (0x000a3ce7) cell_cmail_l_pane_g1

0x87f1,	// (0x000a3cf3) cell_cmail_l_pane_t1_ParamLimits

0x87f1,	// (0x000a3cf3) cell_cmail_l_pane_t1

0xe689,	// (0x000a9b8b) cell_cmail_l_pane_t2_ParamLimits

0xe689,	// (0x000a9b8b) cell_cmail_l_pane_t2

0x0001,

0xfcc7,	// (0x000ab1c9) cell_cmail_l_pane_t_ParamLimits

0xfcc7,	// (0x000ab1c9) cell_cmail_l_pane_t

0xa26e,	// (0x000a5770) grid_highlight_pane_cp018_ParamLimits

0xa26e,	// (0x000a5770) grid_highlight_pane_cp018

0x0eec,	// (0x0009c3ee) main2_pane_ParamLimits

0x0eec,	// (0x0009c3ee) main2_pane

0xa880,	// (0x000a5d82) popup_sp_fs_action_menu_bg_pane_g1

0xa888,	// (0x000a5d8a) popup_sp_fs_action_menu_bg_pane_g2

0xa890,	// (0x000a5d92) popup_sp_fs_action_menu_bg_pane_g3

0xa898,	// (0x000a5d9a) popup_sp_fs_action_menu_bg_pane_g4

0xa8a0,	// (0x000a5da2) popup_sp_fs_action_menu_bg_pane_g5

0xa8a8,	// (0x000a5daa) popup_sp_fs_action_menu_bg_pane_g6

0xa8b0,	// (0x000a5db2) popup_sp_fs_action_menu_bg_pane_g7

0xa8b8,	// (0x000a5dba) popup_sp_fs_action_menu_bg_pane_g8

0xa8c0,	// (0x000a5dc2) popup_sp_fs_action_menu_bg_pane_g9

0xa8c8,	// (0x000a5dca) popup_sp_fs_action_menu_bg_pane_g10

0xa8c8,	// (0x000a5dca) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000aa695) popup_sp_fs_action_menu_bg_pane_g

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g3_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g3_g1

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t3_g3_g2

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x000aa745) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x000aa745) list_medium_line_x2_t3_g3_g

0x20fc,	// (0x0009d5fe) list_medium_line_x2_t3_g3_t1_ParamLimits

0x20fc,	// (0x0009d5fe) list_medium_line_x2_t3_g3_t1

0x2111,	// (0x0009d613) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2111,	// (0x0009d613) list_medium_line_x2_t3_g3_t2

0x2123,	// (0x0009d625) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x000aa74c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x000aa74c) list_medium_line_x2_t3_g3_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g2_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g2_g1

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x000aa753) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x000aa753) list_medium_line_x2_t3_g2_g

0x2138,	// (0x0009d63a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2138,	// (0x0009d63a) list_medium_line_x2_t3_g2_t1

0x214e,	// (0x0009d650) list_medium_line_x2_t3_g2_t2_ParamLimits

0x214e,	// (0x0009d650) list_medium_line_x2_t3_g2_t2

0x2160,	// (0x0009d662) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2160,	// (0x0009d662) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x000aa758) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x000aa758) list_medium_line_x2_t3_g2_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t4_g4_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t4_g4_g1

0x217e,	// (0x0009d680) list_medium_line_x2_t4_g4_g2_ParamLimits

0x217e,	// (0x0009d680) list_medium_line_x2_t4_g4_g2

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t4_g4_g3

0x218a,	// (0x0009d68c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x218a,	// (0x0009d68c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x000aa75f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x000aa75f) list_medium_line_x2_t4_g4_g

0x2196,	// (0x0009d698) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2196,	// (0x0009d698) list_medium_line_x2_t4_g4_t1

0x21b0,	// (0x0009d6b2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x21b0,	// (0x0009d6b2) list_medium_line_x2_t4_g4_t2

0x21c6,	// (0x0009d6c8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x21c6,	// (0x0009d6c8) list_medium_line_x2_t4_g4_t3

0x21db,	// (0x0009d6dd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x21db,	// (0x0009d6dd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x000aa768) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x000aa768) list_medium_line_x2_t4_g4_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g4_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g4_g1

0x217e,	// (0x0009d680) list_medium_line_x2_t2_g4_g2_ParamLimits

0x217e,	// (0x0009d680) list_medium_line_x2_t2_g4_g2

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t2_g4_g3

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000aa7cf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000aa7cf) list_medium_line_x2_t2_g4_g

0x3223,	// (0x0009e725) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3223,	// (0x0009e725) list_medium_line_x2_t2_g4_t1

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000aa7d8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000aa7d8) list_medium_line_x2_t2_g4_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g3_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g3_g1

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t2_g3_g2

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x000aa745) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x000aa745) list_medium_line_x2_t2_g3_g

0x3238,	// (0x0009e73a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3238,	// (0x0009e73a) list_medium_line_x2_t2_g3_t1

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000aa7dd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000aa7dd) list_medium_line_x2_t2_g3_t

0x33cf,	// (0x0009e8d1) main_sp_fs_list_pane_ParamLimits

0x33cf,	// (0x0009e8d1) main_sp_fs_list_pane

0x33db,	// (0x0009e8dd) sp_fs_scroll_pane_ParamLimits

0x33db,	// (0x0009e8dd) sp_fs_scroll_pane

0x33e7,	// (0x0009e8e9) list_medium_line_x2_t3_t1

0x33f7,	// (0x0009e8f9) list_medium_line_x2_t3_t2

0x3405,	// (0x0009e907) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x000aa828) list_medium_line_x2_t3_t

0x3413,	// (0x0009e915) list_medium_line_x3_t4_t1

0x3423,	// (0x0009e925) list_medium_line_x3_t4_t2

0x3431,	// (0x0009e933) list_medium_line_x3_t4_t3

0x3405,	// (0x0009e907) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x000aa82f) list_medium_line_x3_t4_t

0x343f,	// (0x0009e941) list_medium_line_x4_t5_t1

0x344f,	// (0x0009e951) list_medium_line_x4_t5_t2

0x3431,	// (0x0009e933) list_medium_line_x4_t5_t3

0x345d,	// (0x0009e95f) list_medium_line_x4_t5_t4

0x3405,	// (0x0009e907) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x000aa838) list_medium_line_x4_t5_t

0x20d8,	// (0x0009d5da) list_medium_line_t4_g4_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_t4_g4_g1

0x346b,	// (0x0009e96d) list_medium_line_t4_g4_g2_ParamLimits

0x346b,	// (0x0009e96d) list_medium_line_t4_g4_g2

0x3477,	// (0x0009e979) list_medium_line_t4_g4_g3_ParamLimits

0x3477,	// (0x0009e979) list_medium_line_t4_g4_g3

0x20f0,	// (0x0009d5f2) list_medium_line_t4_g4_g4_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x000aa843) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x000aa843) list_medium_line_t4_g4_g

0x3483,	// (0x0009e985) list_medium_line_t4_g4_t1_ParamLimits

0x3483,	// (0x0009e985) list_medium_line_t4_g4_t1

0x3498,	// (0x0009e99a) list_medium_line_t4_g4_t2_ParamLimits

0x3498,	// (0x0009e99a) list_medium_line_t4_g4_t2

0x34ae,	// (0x0009e9b0) list_medium_line_t4_g4_t3_ParamLimits

0x34ae,	// (0x0009e9b0) list_medium_line_t4_g4_t3

0x2123,	// (0x0009d625) list_medium_line_t4_g4_t4_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x000aa84c) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x000aa84c) list_medium_line_t4_g4_t

0x35d7,	// (0x0009ead9) chi_dic_find_pane_g1

0x4639,	// (0x0009fb3b) main_tport_pane

0x70dd,	// (0x000a25df) list_medium_line_plain_t1

0x71d0,	// (0x000a26d2) list_medium_line_t2_g2_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t2_g2_g1

0xaa11,	// (0x000a5f13) list_medium_line_t2_g2_g2_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x000aaf08) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x000aaf08) list_medium_line_t2_g2_g

0x71dc,	// (0x000a26de) list_medium_line_t2_g2_t1_ParamLimits

0x71dc,	// (0x000a26de) list_medium_line_t2_g2_t1

0x71f3,	// (0x000a26f5) list_medium_line_t2_g2_t2_ParamLimits

0x71f3,	// (0x000a26f5) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x000aaf0d) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x000aaf0d) list_medium_line_t2_g2_t

0xa335,	// (0x000a5837) aid_sp_fs_list_icon_a_sm

0xaa1d,	// (0x000a5f1f) aid_sp_fs_list_icon_d

0xbd73,	// (0x000a7275) aid_sp_fs_text_primary

0xbd7c,	// (0x000a727e) aid_sp_fs_text_secondary

0x7859,	// (0x000a2d5b) list_medium_line

0x7859,	// (0x000a2d5b) list_medium_line_g2

0x7859,	// (0x000a2d5b) list_medium_line_g3

0x7859,	// (0x000a2d5b) list_medium_line_plain

0x7859,	// (0x000a2d5b) list_medium_line_plain_t2

0x7859,	// (0x000a2d5b) list_medium_line_plain_t3

0x7859,	// (0x000a2d5b) list_medium_line_right_icon

0x7859,	// (0x000a2d5b) list_medium_line_right_iconx2

0x7859,	// (0x000a2d5b) list_medium_line_t2

0x7859,	// (0x000a2d5b) list_medium_line_t2_g2

0x7859,	// (0x000a2d5b) list_medium_line_t2_g3

0x7859,	// (0x000a2d5b) list_medium_line_t2_right_icon

0x7859,	// (0x000a2d5b) list_medium_line_t2_right_iconx2

0x7859,	// (0x000a2d5b) list_medium_line_t3

0x7859,	// (0x000a2d5b) list_medium_line_t3_g2

0x7859,	// (0x000a2d5b) list_medium_line_t3_g3

0x7859,	// (0x000a2d5b) list_medium_line_t3_right_iconx2

0x7862,	// (0x000a2d64) list_medium_line_t4_g4

0x786b,	// (0x000a2d6d) list_medium_line_x2

0x786b,	// (0x000a2d6d) list_medium_line_x2_t2_g2

0x786b,	// (0x000a2d6d) list_medium_line_x2_t2_g3

0x786b,	// (0x000a2d6d) list_medium_line_x2_t2_g4

0x786b,	// (0x000a2d6d) list_medium_line_x2_t3

0x786b,	// (0x000a2d6d) list_medium_line_x2_t3_g2

0x786b,	// (0x000a2d6d) list_medium_line_x2_t3_g3

0x786b,	// (0x000a2d6d) list_medium_line_x2_t3_g4

0x786b,	// (0x000a2d6d) list_medium_line_x2_t4_g2

0x786b,	// (0x000a2d6d) list_medium_line_x2_t4_g4

0x7874,	// (0x000a2d76) list_medium_line_x3

0x7874,	// (0x000a2d76) list_medium_line_x3_t4

0x7874,	// (0x000a2d76) list_medium_line_x3_t4_g4

0x7862,	// (0x000a2d64) list_medium_line_x4_t4

0x7862,	// (0x000a2d64) list_medium_line_x4_t4_g7

0x7862,	// (0x000a2d64) list_medium_line_x4_t5

0x787d,	// (0x000a2d7f) list_single_fs_dyc_pane_ParamLimits

0x787d,	// (0x000a2d7f) list_single_fs_dyc_pane

0x20d8,	// (0x0009d5da) list_medium_line_x4_t4_g7_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x4_t4_g7_g1

0x800b,	// (0x000a350d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x800b,	// (0x000a350d) list_medium_line_x4_t4_g7_g2

0x8017,	// (0x000a3519) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8017,	// (0x000a3519) list_medium_line_x4_t4_g7_g3

0x8026,	// (0x000a3528) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8026,	// (0x000a3528) list_medium_line_x4_t4_g7_g4

0x8032,	// (0x000a3534) list_medium_line_x4_t4_g7_g5_ParamLimits

0x8032,	// (0x000a3534) list_medium_line_x4_t4_g7_g5

0x8041,	// (0x000a3543) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8041,	// (0x000a3543) list_medium_line_x4_t4_g7_g6

0x8050,	// (0x000a3552) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8050,	// (0x000a3552) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcf,	// (0x000ab0d1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcf,	// (0x000ab0d1) list_medium_line_x4_t4_g7_g

0x805c,	// (0x000a355e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x805c,	// (0x000a355e) list_medium_line_x4_t4_g7_t1

0x8071,	// (0x000a3573) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8071,	// (0x000a3573) list_medium_line_x4_t4_g7_t2

0x8086,	// (0x000a3588) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8086,	// (0x000a3588) list_medium_line_x4_t4_g7_t3

0x809b,	// (0x000a359d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x809b,	// (0x000a359d) list_medium_line_x4_t4_g7_t4

0x80ad,	// (0x000a35af) list_medium_line_x4_t4_g7_t5_ParamLimits

0x80ad,	// (0x000a35af) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbde,	// (0x000ab0e0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbde,	// (0x000ab0e0) list_medium_line_x4_t4_g7_t

0x80bf,	// (0x000a35c1) list_single_dyc_row_pane_ParamLimits

0x80bf,	// (0x000a35c1) list_single_dyc_row_pane

0x8759,	// (0x000a3c5b) call5_gesture_pane_ParamLimits

0x8759,	// (0x000a3c5b) call5_gesture_pane

0x878f,	// (0x000a3c91) call5_windows_pane_ParamLimits

0x878f,	// (0x000a3c91) call5_windows_pane

0x8807,	// (0x000a3d09) call5_swipe_1_pane_cp_ParamLimits

0x8807,	// (0x000a3d09) call5_swipe_1_pane_cp

0x8813,	// (0x000a3d15) call5_swipe_2_pane_cp_ParamLimits

0x8813,	// (0x000a3d15) call5_swipe_2_pane_cp

0xb43e,	// (0x000a6940) call5_image_pane_cp

0x881f,	// (0x000a3d21) popup_call5_audio_first_window_cp_ParamLimits

0x881f,	// (0x000a3d21) popup_call5_audio_first_window_cp

0xe65b,	// (0x000a9b5d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65b,	// (0x000a9b5d) call5_swipe_1_pane_g1_cp

0xe69b,	// (0x000a9b9d) call5_swipe_1_pane_g2_cp

0xe674,	// (0x000a9b76) call5_swipe_1_pane_t1_cp_ParamLimits

0xe674,	// (0x000a9b76) call5_swipe_1_pane_t1_cp

0xe65b,	// (0x000a9b5d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65b,	// (0x000a9b5d) call5_swipe_2_pane_g1_cp

0xe6a3,	// (0x000a9ba5) call5_swipe_2_pane_g2_cp

0xe6ab,	// (0x000a9bad) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ab,	// (0x000a9bad) call5_swipe_2_pane_t1_cp

0xa26e,	// (0x000a5770) main_sp_fs_email_pane

0xe6c0,	// (0x000a9bc2) main_sp_fs_listscroll_pane_te

0xa33d,	// (0x000a583f) popup_sp_fs_action_menu_pane_ParamLimits

0xa33d,	// (0x000a583f) popup_sp_fs_action_menu_pane

0xcca2,	// (0x000a81a4) bg_sp_fs_ctrlbar_pane_g1

0xe6c9,	// (0x000a9bcb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d2,	// (0x000a9bd4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6db,	// (0x000a9bdd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcca2,	// (0x000a81a4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccc,	// (0x000ab1ce) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca79,	// (0x000a7f7b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca79,	// (0x000a7f7b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e4,	// (0x000a9be6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e4,	// (0x000a9be6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f0,	// (0x000a9bf2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f0,	// (0x000a9bf2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd5,	// (0x000ab1d7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd5,	// (0x000ab1d7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fc,	// (0x000a9bfe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fc,	// (0x000a9bfe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaa25,	// (0x000a5f27) list_medium_line_t2_right_icon_g1

0x882d,	// (0x000a3d2f) list_medium_line_t2_right_icon_t1

0x883d,	// (0x000a3d3f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcda,	// (0x000ab1dc) list_medium_line_t2_right_icon_t

0xc849,	// (0x000a7d4b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc849,	// (0x000a7d4b) bg_sp_fs_ctrlbar_pane

0x88a4,	// (0x000a3da6) main_sp_fs_ctrlbar_button_pane_cp01

0x88ac,	// (0x000a3dae) main_sp_fs_ctrlbar_ddmenu_pane

0xe74e,	// (0x000a9c50) main_sp_fs_ctrlbar_pane_g1

0xe75a,	// (0x000a9c5c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcdf,	// (0x000ab1e1) main_sp_fs_ctrlbar_pane_g

0xe766,	// (0x000a9c68) main_sp_fs_ctrlbar_pane_t1

0x88b6,	// (0x000a3db8) main_sp_fs_ctrlbar_pane

0x88d0,	// (0x000a3dd2) main_sp_fs_listscroll_pane_te_cp01

0x88e1,	// (0x000a3de3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88e1,	// (0x000a3de3) popup_sp_fs_action_menu_pane_cp01

0xa26e,	// (0x000a5770) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa26e,	// (0x000a5770) bg_sp_fs_highlight_list_pane_cp01

0xa383,	// (0x000a5885) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa383,	// (0x000a5885) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x000a9c98) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x000a9c98) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce9,	// (0x000ab1eb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce9,	// (0x000ab1eb) sp_fs_action_menu_list_gene_pane_g

0xa392,	// (0x000a5894) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa392,	// (0x000a5894) sp_fs_action_menu_list_gene_pane_t1

0xa3aa,	// (0x000a58ac) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa3aa,	// (0x000a58ac) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x000a9ca5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x000a9ca5) popup_sp_fs_action_menu_bg_pane

0xa3cd,	// (0x000a58cf) sp_fs_action_menu_list_pane_ParamLimits

0xa3cd,	// (0x000a58cf) sp_fs_action_menu_list_pane

0xe7b1,	// (0x000a9cb3) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b1,	// (0x000a9cb3) sp_fs_scroll_pane_cp01

0x890f,	// (0x000a3e11) list_medium_line_plain_t2_t1

0x891f,	// (0x000a3e21) list_medium_line_plain_t2_t2

0x0001,

0xfcee,	// (0x000ab1f0) list_medium_line_plain_t2_t

0x892d,	// (0x000a3e2f) list_medium_line_plain_t3_t1

0x893d,	// (0x000a3e3f) list_medium_line_plain_t3_t2

0x894b,	// (0x000a3e4d) list_medium_line_plain_t3_t3

0x0002,

0xfcf3,	// (0x000ab1f5) list_medium_line_plain_t3_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g2_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t2_g2_g1

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x000aa753) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x000aa753) list_medium_line_x2_t2_g2_g

0x3483,	// (0x0009e985) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3483,	// (0x0009e985) list_medium_line_x2_t2_g2_t1

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfa,	// (0x000ab1fc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfa,	// (0x000ab1fc) list_medium_line_x2_t2_g2_t

0x20d8,	// (0x0009d5da) list_medium_line_x2_t4_g2_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t4_g2_g1

0x8959,	// (0x000a3e5b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8959,	// (0x000a3e5b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcff,	// (0x000ab201) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcff,	// (0x000ab201) list_medium_line_x2_t4_g2_g

0x896b,	// (0x000a3e6d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x896b,	// (0x000a3e6d) list_medium_line_x2_t4_g2_t1

0x8985,	// (0x000a3e87) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8985,	// (0x000a3e87) list_medium_line_x2_t4_g2_t2

0x899b,	// (0x000a3e9d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x899b,	// (0x000a3e9d) list_medium_line_x2_t4_g2_t3

0x2123,	// (0x0009d625) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd04,	// (0x000ab206) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd04,	// (0x000ab206) list_medium_line_x2_t4_g2_t

0xaa2d,	// (0x000a5f2f) list_medium_line_t3_right_iconx2_g1

0xaa25,	// (0x000a5f27) list_medium_line_t3_right_iconx2_g2

0x89b0,	// (0x000a3eb2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0d,	// (0x000ab20f) list_medium_line_t3_right_iconx2_g

0x89b8,	// (0x000a3eba) list_medium_line_t3_right_iconx2_t1

0x89c8,	// (0x000a3eca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd14,	// (0x000ab216) list_medium_line_t3_right_iconx2_t

0x20d8,	// (0x0009d5da) list_medium_line_x3_t4_g4_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x3_t4_g4_g1

0x20e4,	// (0x0009d5e6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x3_t4_g4_g2

0x346b,	// (0x0009e96d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x346b,	// (0x0009e96d) list_medium_line_x3_t4_g4_g3

0x89d6,	// (0x000a3ed8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89d6,	// (0x000a3ed8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd19,	// (0x000ab21b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd19,	// (0x000ab21b) list_medium_line_x3_t4_g4_g

0x89e2,	// (0x000a3ee4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89e2,	// (0x000a3ee4) list_medium_line_x3_t4_g4_t1

0x89f9,	// (0x000a3efb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89f9,	// (0x000a3efb) list_medium_line_x3_t4_g4_t2

0x8a0e,	// (0x000a3f10) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8a0e,	// (0x000a3f10) list_medium_line_x3_t4_g4_t3

0x8a23,	// (0x000a3f25) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8a23,	// (0x000a3f25) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd22,	// (0x000ab224) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd22,	// (0x000ab224) list_medium_line_x3_t4_g4_t

0x8a40,	// (0x000a3f42) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a40,	// (0x000a3f42) list_single_dyc_row_text_pane_t1

0x8a83,	// (0x000a3f85) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a83,	// (0x000a3f85) list_single_dyc_row_text_pane_t2

0xa3f1,	// (0x000a58f3) list_single_dyc_row_text_pane_t3_ParamLimits

0xa3f1,	// (0x000a58f3) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2b,	// (0x000ab22d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2b,	// (0x000ab22d) list_single_dyc_row_text_pane_t

0xa403,	// (0x000a5905) list_single_dyc_row_pane_g1_ParamLimits

0xa403,	// (0x000a5905) list_single_dyc_row_pane_g1

0xa40f,	// (0x000a5911) list_single_dyc_row_pane_g2_ParamLimits

0xa40f,	// (0x000a5911) list_single_dyc_row_pane_g2

0xa41b,	// (0x000a591d) list_single_dyc_row_pane_g3_ParamLimits

0xa41b,	// (0x000a591d) list_single_dyc_row_pane_g3

0xa427,	// (0x000a5929) list_single_dyc_row_pane_g4_ParamLimits

0xa427,	// (0x000a5929) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000ab234) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000ab234) list_single_dyc_row_pane_g

0xa433,	// (0x000a5935) list_single_dyc_row_text_pane_ParamLimits

0xa433,	// (0x000a5935) list_single_dyc_row_text_pane

0x9ce2,	// (0x000a51e4) bg_sp_fs_scroll_pane

0xe7d7,	// (0x000a9cd9) thumb_sp_fs_scroll_pane

0x71d0,	// (0x000a26d2) list_medium_line_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_g1

0x8add,	// (0x000a3fdf) list_medium_line_t1_ParamLimits

0x8add,	// (0x000a3fdf) list_medium_line_t1

0x20d8,	// (0x0009d5da) list_medium_line_x2_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_g1

0x20e4,	// (0x0009d5e6) list_medium_line_x2_g2_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000ab23d) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000ab23d) list_medium_line_x2_g

0xa452,	// (0x000a5954) list_medium_line_x2_t1_ParamLimits

0xa452,	// (0x000a5954) list_medium_line_x2_t1

0x20d8,	// (0x0009d5da) list_medium_line_x3_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x3_g1

0x20e4,	// (0x0009d5e6) list_medium_line_x3_g2_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000ab23d) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000ab23d) list_medium_line_x3_g

0xa452,	// (0x000a5954) list_medium_line_x3_t1_ParamLimits

0xa452,	// (0x000a5954) list_medium_line_x3_t1

0xe7e0,	// (0x000a9ce2) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x000a9ceb) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x000a9cf4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ab242) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x000a9ce2) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x000a9ceb) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x000a9cf4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ab242) bg_sp_fs_scroll_pane_g

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g4_g1_ParamLimits

0x20d8,	// (0x0009d5da) list_medium_line_x2_t3_g4_g1

0x217e,	// (0x0009d680) list_medium_line_x2_t3_g4_g2_ParamLimits

0x217e,	// (0x0009d680) list_medium_line_x2_t3_g4_g2

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x20e4,	// (0x0009d5e6) list_medium_line_x2_t3_g4_g3

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x20f0,	// (0x0009d5f2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000aa7cf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000aa7cf) list_medium_line_x2_t3_g4_g

0x8af2,	// (0x000a3ff4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8af2,	// (0x000a3ff4) list_medium_line_x2_t3_g4_t1

0x8b08,	// (0x000a400a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8b08,	// (0x000a400a) list_medium_line_x2_t3_g4_t2

0x2123,	// (0x0009d625) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2123,	// (0x0009d625) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000ab249) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000ab249) list_medium_line_x2_t3_g4_t

0x71d0,	// (0x000a26d2) list_medium_line_g2_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_g2_g1

0xaa11,	// (0x000a5f13) list_medium_line_g2_g2_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x000aaf08) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x000aaf08) list_medium_line_g2_g

0x8b21,	// (0x000a4023) list_medium_line_g2_t1_ParamLimits

0x8b21,	// (0x000a4023) list_medium_line_g2_t1

0x71d0,	// (0x000a26d2) list_medium_line_t3_g2_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t3_g2_g1

0xaa11,	// (0x000a5f13) list_medium_line_t3_g2_g2_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x000aaf08) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x000aaf08) list_medium_line_t3_g2_g

0x8b36,	// (0x000a4038) list_medium_line_t3_g2_t1_ParamLimits

0x8b36,	// (0x000a4038) list_medium_line_t3_g2_t1

0x8b50,	// (0x000a4052) list_medium_line_t3_g2_t2_ParamLimits

0x8b50,	// (0x000a4052) list_medium_line_t3_g2_t2

0x8b66,	// (0x000a4068) list_medium_line_t3_g2_t3_ParamLimits

0x8b66,	// (0x000a4068) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000ab250) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000ab250) list_medium_line_t3_g2_t

0xaa25,	// (0x000a5f27) list_medium_line_right_icon_g1

0x8b7d,	// (0x000a407f) list_medium_line_right_icon_t1

0x71d0,	// (0x000a26d2) list_medium_line_t2_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t2_g1

0x8b8b,	// (0x000a408d) list_medium_line_t2_t1_ParamLimits

0x8b8b,	// (0x000a408d) list_medium_line_t2_t1

0x8ba5,	// (0x000a40a7) list_medium_line_t2_t2_ParamLimits

0x8ba5,	// (0x000a40a7) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000ab257) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000ab257) list_medium_line_t2_t

0x71d0,	// (0x000a26d2) list_medium_line_t3_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t3_g1

0x8bba,	// (0x000a40bc) list_medium_line_t3_t1_ParamLimits

0x8bba,	// (0x000a40bc) list_medium_line_t3_t1

0x8bd1,	// (0x000a40d3) list_medium_line_t3_t2_ParamLimits

0x8bd1,	// (0x000a40d3) list_medium_line_t3_t2

0x8be6,	// (0x000a40e8) list_medium_line_t3_t3_ParamLimits

0x8be6,	// (0x000a40e8) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000ab25c) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000ab25c) list_medium_line_t3_t

0x71d0,	// (0x000a26d2) list_medium_line_g3_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_g3_g1

0xaa35,	// (0x000a5f37) list_medium_line_g3_g2_ParamLimits

0xaa35,	// (0x000a5f37) list_medium_line_g3_g2

0xaa11,	// (0x000a5f13) list_medium_line_g3_g3_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000ab263) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000ab263) list_medium_line_g3_g

0x8bf8,	// (0x000a40fa) list_medium_line_g3_t1_ParamLimits

0x8bf8,	// (0x000a40fa) list_medium_line_g3_t1

0x71d0,	// (0x000a26d2) list_medium_line_t2_g3_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t2_g3_g1

0xaa35,	// (0x000a5f37) list_medium_line_t2_g3_g2_ParamLimits

0xaa35,	// (0x000a5f37) list_medium_line_t2_g3_g2

0xaa11,	// (0x000a5f13) list_medium_line_t2_g3_g3_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000ab263) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000ab263) list_medium_line_t2_g3_g

0x8c0d,	// (0x000a410f) list_medium_line_t2_g3_t1_ParamLimits

0x8c0d,	// (0x000a410f) list_medium_line_t2_g3_t1

0x8c24,	// (0x000a4126) list_medium_line_t2_g3_t2_ParamLimits

0x8c24,	// (0x000a4126) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000ab26a) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000ab26a) list_medium_line_t2_g3_t

0x71d0,	// (0x000a26d2) list_medium_line_t3_g3_g1_ParamLimits

0x71d0,	// (0x000a26d2) list_medium_line_t3_g3_g1

0xaa35,	// (0x000a5f37) list_medium_line_t3_g3_g2_ParamLimits

0xaa35,	// (0x000a5f37) list_medium_line_t3_g3_g2

0xaa11,	// (0x000a5f13) list_medium_line_t3_g3_g3_ParamLimits

0xaa11,	// (0x000a5f13) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000ab263) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000ab263) list_medium_line_t3_g3_g

0x8c39,	// (0x000a413b) list_medium_line_t3_g3_t1_ParamLimits

0x8c39,	// (0x000a413b) list_medium_line_t3_g3_t1

0x8c4d,	// (0x000a414f) list_medium_line_t3_g3_t2_ParamLimits

0x8c4d,	// (0x000a414f) list_medium_line_t3_g3_t2

0x8c5f,	// (0x000a4161) list_medium_line_t3_g3_t3_ParamLimits

0x8c5f,	// (0x000a4161) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000ab26f) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000ab26f) list_medium_line_t3_g3_t

0xaa2d,	// (0x000a5f2f) list_medium_line_right_iconx2_g1

0xaa25,	// (0x000a5f27) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ab276) list_medium_line_right_iconx2_g

0xaa41,	// (0x000a5f43) list_medium_line_right_iconx2_t1

0xaa2d,	// (0x000a5f2f) list_medium_line_t2_right_iconx2_g1

0xaa25,	// (0x000a5f27) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ab276) list_medium_line_t2_right_iconx2_g

0x8c73,	// (0x000a4175) list_medium_line_t2_right_iconx2_t1

0x8c83,	// (0x000a4185) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000ab27b) list_medium_line_t2_right_iconx2_t

0x8c91,	// (0x000a4193) list_medium_line_x4_t4_t1

0x8c9f,	// (0x000a41a1) list_medium_line_x4_t4_t2

0x8caf,	// (0x000a41b1) list_medium_line_x4_t4_t3

0x8cbf,	// (0x000a41c1) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000ab280) list_medium_line_x4_t4_t

0x8cf9,	// (0x000a41fb) tport_appsw_pane_ParamLimits

0x8cf9,	// (0x000a41fb) tport_appsw_pane

0x8d07,	// (0x000a4209) tport_contact_pane_ParamLimits

0x8d07,	// (0x000a4209) tport_contact_pane

0x8d17,	// (0x000a4219) tport_listscroll_pane_ParamLimits

0x8d17,	// (0x000a4219) tport_listscroll_pane

0x8d27,	// (0x000a4229) cell_tport_appsw_pane_ParamLimits

0x8d27,	// (0x000a4229) cell_tport_appsw_pane

0xcf37,	// (0x000a8439) tport_appsw_pane_g1_ParamLimits

0xcf37,	// (0x000a8439) tport_appsw_pane_g1

0xe7fb,	// (0x000a9cfd) tport_contact_pane_g1

0xe804,	// (0x000a9d06) tport_contact_pane_t1

0xe812,	// (0x000a9d14) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000ab289) tport_contact_pane_t

0xe820,	// (0x000a9d22) list_tport_pane

0xe829,	// (0x000a9d2b) scroll_pane_cp_030

0x8d5c,	// (0x000a425e) cell_tport_appsw_pane_g1

0x8d6c,	// (0x000a426e) cell_tport_appsw_pane_t1

0x9ce2,	// (0x000a51e4) grid_highlight_pane_cp019

0x8d7a,	// (0x000a427c) list_tport_double_graphic_pane_ParamLimits

0x8d7a,	// (0x000a427c) list_tport_double_graphic_pane

0xa26e,	// (0x000a5770) list_highlight_pane_cp023_ParamLimits

0xa26e,	// (0x000a5770) list_highlight_pane_cp023

0x8d87,	// (0x000a4289) list_tport_double_graphic_pane_g1_ParamLimits

0x8d87,	// (0x000a4289) list_tport_double_graphic_pane_g1

0x8d94,	// (0x000a4296) list_tport_double_graphic_pane_t1_ParamLimits

0x8d94,	// (0x000a4296) list_tport_double_graphic_pane_t1

0x8da9,	// (0x000a42ab) list_tport_double_graphic_pane_t2_ParamLimits

0x8da9,	// (0x000a42ab) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000ab295) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000ab295) list_tport_double_graphic_pane_t

0x9ce2,	// (0x000a51e4) main_cale_note_pane

0x6964,	// (0x000a1e66) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6964,	// (0x000a1e66) cell_vitu2_function_top_wide_pane_cp01

0x842c,	// (0x000a392e) wait_bar_pane_cp05_ParamLimits

0xa26e,	// (0x000a5770) listscroll_cmail_pane

0xe83a,	// (0x000a9d3c) list_cmail_pane

0x8dc5,	// (0x000a42c7) list_cmail_body_pane

0x8ddd,	// (0x000a42df) list_single_cmail_header_caption_pane

0x8dfd,	// (0x000a42ff) list_single_cmail_header_detail_pane_ParamLimits

0x8dfd,	// (0x000a42ff) list_single_cmail_header_detail_pane

0x8e2f,	// (0x000a4331) list_single_cmail_header_caption_pane_t1

0x8e4a,	// (0x000a434c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e4a,	// (0x000a434c) list_single_cmail_header_detail_pane_g1

0xaa4f,	// (0x000a5f51) list_single_cmail_header_detail_pane_g2_ParamLimits

0xaa4f,	// (0x000a5f51) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000ab29a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000ab29a) list_single_cmail_header_detail_pane_g

0x8e62,	// (0x000a4364) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e62,	// (0x000a4364) list_single_cmail_header_detail_pane_t1

0x8eb0,	// (0x000a43b2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8eb0,	// (0x000a43b2) list_single_cmail_header_editor_pane_bg

0xe303,	// (0x000a9805) list_cmail_body_pane_g1

0xe85e,	// (0x000a9d60) list_cmail_body_pane_t1

0xd68a,	// (0x000a8b8c) list_single_cmail_header_editor_pane_bg_g1

0xad4a,	// (0x000a624c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd69a,	// (0x000a8b9c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd692,	// (0x000a8b94) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8c8,	// (0x000a8dca) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6ba,	// (0x000a8bbc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6aa,	// (0x000a8bac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b2,	// (0x000a8bb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad2a,	// (0x000a622c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ec7,	// (0x000a43c9) calenote_gesture_pane_ParamLimits

0x8ec7,	// (0x000a43c9) calenote_gesture_pane

0x8ee1,	// (0x000a43e3) calenote_window_pane_ParamLimits

0x8ee1,	// (0x000a43e3) calenote_window_pane

0xe86c,	// (0x000a9d6e) popup_note_window_cp01

0x8ef9,	// (0x000a43fb) calenote_swipe_1_pane_ParamLimits

0x8ef9,	// (0x000a43fb) calenote_swipe_1_pane

0x8813,	// (0x000a3d15) calenote_swipe_2_pane_ParamLimits

0x8813,	// (0x000a3d15) calenote_swipe_2_pane

0xe65b,	// (0x000a9b5d) calenote_swipe_1_pane_g1_ParamLimits

0xe65b,	// (0x000a9b5d) calenote_swipe_1_pane_g1

0xe668,	// (0x000a9b6a) calenote_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x000a9b6a) calenote_swipe_1_pane_g2

0x0001,

0xfcc2,	// (0x000ab1c4) calenote_swipe_1_pane_g_ParamLimits

0xfcc2,	// (0x000ab1c4) calenote_swipe_1_pane_g

0xe87e,	// (0x000a9d80) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x000a9d80) calenote_swipe_1_pane_t1

0xe65b,	// (0x000a9b5d) calenote_swipe_2_pane_g1_ParamLimits

0xe65b,	// (0x000a9b5d) calenote_swipe_2_pane_g1

0xe89d,	// (0x000a9d9f) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x000a9d9f) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000ab2a6) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000ab2a6) calenote_swipe_2_pane_g

0xe8a9,	// (0x000a9dab) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x000a9dab) calenote_swipe_2_pane_t1

0x9ce2,	// (0x000a51e4) main_mup_navstr_pane

0x566d,	// (0x000a0b6f) main_mup3_pane_t7_ParamLimits

0x566d,	// (0x000a0b6f) main_mup3_pane_t7

0x6070,	// (0x000a1572) main_mp4_pane_g6_ParamLimits

0x6070,	// (0x000a1572) main_mp4_pane_g6

0x63ee,	// (0x000a18f0) main_image3_pane_t4_ParamLimits

0x63ee,	// (0x000a18f0) main_image3_pane_t4

0x8f0c,	// (0x000a440e) popup_navstr_preview_pane_ParamLimits

0x8f0c,	// (0x000a440e) popup_navstr_preview_pane

0x8f18,	// (0x000a441a) scroll_navstr_pane_ParamLimits

0x8f18,	// (0x000a441a) scroll_navstr_pane

0x9ce2,	// (0x000a51e4) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x000a9dd2) popup_navstr_preview_pane_t1

0x8f24,	// (0x000a4426) scroll_navstr_pane_g1_ParamLimits

0x8f24,	// (0x000a4426) scroll_navstr_pane_g1

0x8f31,	// (0x000a4433) scroll_navstr_pane_t1_ParamLimits

0x8f31,	// (0x000a4433) scroll_navstr_pane_t1

0xe875,	// (0x000a9d77) bg_button_pane_cp014

0xe875,	// (0x000a9d77) bg_button_pane_cp030

0x86ff,	// (0x000a3c01) list_double_fisheye_pane_g4_ParamLimits

0x86ff,	// (0x000a3c01) list_double_fisheye_pane_g4

0x870b,	// (0x000a3c0d) list_double_fisheye_pane_g5_ParamLimits

0x870b,	// (0x000a3c0d) list_double_fisheye_pane_g5

0xe842,	// (0x000a9d44) sp_fs_scroll_pane_cp03

0xe74e,	// (0x000a9c50) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75a,	// (0x000a9c5c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdf,	// (0x000ab1e1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe766,	// (0x000a9c68) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8dbb,	// (0x000a42bd) sp_fs_scroll_pane_cp02

0xa8eb,	// (0x000a5ded) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8eb,	// (0x000a5ded) popup_sp_fs_calendar_preview_list_single_pane

0x9ce2,	// (0x000a51e4) main_cam6_pano_pane

0xa26e,	// (0x000a5770) main_mup3_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_phacti_pane

0x82ff,	// (0x000a3801) bg_button_pane_cp11

0x8317,	// (0x000a3819) main_mobtv_info_pane_g2_ParamLimits

0x8317,	// (0x000a3819) main_mobtv_info_pane_g2

0x0001,

0xfc3f,	// (0x000ab141) main_mobtv_info_pane_g_ParamLimits

0xfc3f,	// (0x000ab141) main_mobtv_info_pane_g

0x84c9,	// (0x000a39cb) sc_clock_pane_t5_ParamLimits

0x84c9,	// (0x000a39cb) sc_clock_pane_t5

0x8572,	// (0x000a3a74) main_radioblah_pane_g1_ParamLimits

0xe5a7,	// (0x000a9aa9) main_radioblah_pane_t3_ParamLimits

0xe5a7,	// (0x000a9aa9) main_radioblah_pane_t3

0xe5bf,	// (0x000a9ac1) main_radioblah_pane_t4_ParamLimits

0xe5bf,	// (0x000a9ac1) main_radioblah_pane_t4

0x8590,	// (0x000a3a92) main_radioblah_text_pane_ParamLimits

0x8590,	// (0x000a3a92) main_radioblah_text_pane

0x859d,	// (0x000a3a9f) main_radioblah_info_pane_g1_ParamLimits

0x8636,	// (0x000a3b38) main_radioblah_info_pane_t4_ParamLimits

0x8636,	// (0x000a3b38) main_radioblah_info_pane_t4

0xa26e,	// (0x000a5770) main_sp_fs_calendar_pane

0x8f43,	// (0x000a4445) main_phacti_pane_g1

0x8f4b,	// (0x000a444d) phacti_note_pane_ParamLimits

0x8f4b,	// (0x000a444d) phacti_note_pane

0xe8e7,	// (0x000a9de9) phacti_term_pane_ParamLimits

0xe8e7,	// (0x000a9de9) phacti_term_pane

0xe8fc,	// (0x000a9dfe) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x000a9dfe) phacti_note_pane_t1

0xa48c,	// (0x000a598e) phacti_term_pane_g1

0xa494,	// (0x000a5996) phacti_term_pane_t1_ParamLimits

0xa494,	// (0x000a5996) phacti_term_pane_t1

0xe913,	// (0x000a9e15) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x000a9e1d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000ab2b0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x000a9e25) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x000a9e25) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x000a9e3b) aid_popup_sp_fs_bg_corner_pane

0xcca2,	// (0x000a81a4) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ce2,	// (0x000a51e4) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x000a9e43) popup_sp_fs_calendar_preview_list_pane

0xc849,	// (0x000a7d4b) bg_main_sp_fs_cale_pane_ParamLimits

0xc849,	// (0x000a7d4b) bg_main_sp_fs_cale_pane

0xa4c7,	// (0x000a59c9) listscroll_cale_mrui_pane_ParamLimits

0xa4c7,	// (0x000a59c9) listscroll_cale_mrui_pane

0xa4dc,	// (0x000a59de) listscroll_sp_fs_schedule_track_pane

0xa4e5,	// (0x000a59e7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa4e5,	// (0x000a59e7) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x000a9e4b) main_sp_fs_ribbon_pane

0xa4f8,	// (0x000a59fa) popup_sp_fs_cale_preview_window

0xeef9,	// (0x000aa3fb) list_single_sp_fs_schedule_track_pane_ParamLimits

0xeef9,	// (0x000aa3fb) list_single_sp_fs_schedule_track_pane

0x106b,	// (0x0009c56d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x106b,	// (0x0009c56d) bg_sp_fs_highlight_list_pane_cp03

0x8faa,	// (0x000a44ac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8faa,	// (0x000a44ac) list_single_sp_fs_schedule_track_pane_g1

0x8fb6,	// (0x000a44b8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8fb6,	// (0x000a44b8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000ab2b5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000ab2b5) list_single_sp_fs_schedule_track_pane_g

0x8fc2,	// (0x000a44c4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8fc2,	// (0x000a44c4) list_single_sp_fs_schedule_track_pane_t1

0x8fe0,	// (0x000a44e2) sp_fs_schedule_track_pane_ParamLimits

0x8fe0,	// (0x000a44e2) sp_fs_schedule_track_pane

0xe951,	// (0x000a9e53) sp_fs_schedule_track_pane_g1

0xe959,	// (0x000a9e5b) sp_fs_schedule_track_pane_g2

0xe961,	// (0x000a9e63) sp_fs_schedule_track_pane_g3

0xe969,	// (0x000a9e6b) sp_fs_schedule_track_pane_g4

0xe971,	// (0x000a9e73) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000ab2ba) sp_fs_schedule_track_pane_g

0xd68a,	// (0x000a8b8c) bg_sp_fs_schedule_viewer_highlight_g1

0xad4a,	// (0x000a624c) bg_sp_fs_schedule_viewer_highlight_g2

0xd692,	// (0x000a8b94) bg_sp_fs_schedule_viewer_highlight_g3

0xd69a,	// (0x000a8b9c) bg_sp_fs_schedule_viewer_highlight_g4

0xd8c8,	// (0x000a8dca) bg_sp_fs_schedule_viewer_highlight_g5

0xd6aa,	// (0x000a8bac) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b2,	// (0x000a8bb4) bg_sp_fs_schedule_viewer_highlight_g7

0xd6ba,	// (0x000a8bbc) bg_sp_fs_schedule_viewer_highlight_g8

0xad2a,	// (0x000a622c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000ab2c5) bg_sp_fs_schedule_viewer_highlight_g

0x9ce2,	// (0x000a51e4) bg_main_sp_fs_ribbon_pane

0x8ff2,	// (0x000a44f4) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x000a9e7b) main_sp_fs_ribbon_pane_t1

0x8ffb,	// (0x000a44fd) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x000a9e8a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000ab2d8) main_sp_fs_ribbon_pane_t

0xe997,	// (0x000a9e99) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x000a9ea1) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x000a9eaa) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x000a9eb3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000ab2df) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x000a9ebb) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x000a9ec4) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cb,	// (0x000a9ecd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000ab2e6) main_sp_fs_ribbon_scheduler_pane_g

0xe9d4,	// (0x000a9ed6) list_cale_mrui_pane

0x900a,	// (0x000a450c) sp_fs_scroll_pane_cp07_ParamLimits

0x900a,	// (0x000a450c) sp_fs_scroll_pane_cp07

0x9026,	// (0x000a4528) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9026,	// (0x000a4528) bg_sp_fs_schedule_viewer_highlight

0xe9e1,	// (0x000a9ee3) list_single_sp_fs_schedule_track_pane_cp01

0xe9e9,	// (0x000a9eeb) list_sp_fs_schedule_track_pane

0xe9f1,	// (0x000a9ef3) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f1,	// (0x000a9ef3) sp_fs_scroll_pane_cp06

0xcca2,	// (0x000a81a4) bgmain_sp_fs_calendar_pane_g1

0x9033,	// (0x000a4535) list_single_cale_mrui_pane_ParamLimits

0x9033,	// (0x000a4535) list_single_cale_mrui_pane

0xa50a,	// (0x000a5a0c) list_single_cale_mrui_row_pane_ParamLimits

0xa50a,	// (0x000a5a0c) list_single_cale_mrui_row_pane

0xa520,	// (0x000a5a22) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa520,	// (0x000a5a22) list_single_cale_mrui_row_pane_g1

0xa54c,	// (0x000a5a4e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa54c,	// (0x000a5a4e) list_single_cale_mrui_row_pane_t1

0x9048,	// (0x000a454a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9048,	// (0x000a454a) list_single_cale_mrui_row_pane_t2

0xa55e,	// (0x000a5a60) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa55e,	// (0x000a5a60) list_single_cale_mrui_row_pane_t3

0xaa67,	// (0x000a5f69) list_single_cale_mrui_row_pane_t4_ParamLimits

0xaa67,	// (0x000a5f69) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000ab2f4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000ab2f4) list_single_cale_mrui_row_pane_t

0x90ae,	// (0x000a45b0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x90ae,	// (0x000a45b0) list_single_cmail_header_editor_pane_bg_cp01

0x90d0,	// (0x000a45d2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x90d0,	// (0x000a45d2) list_single_cmail_header_editor_pane_bg_cp02

0x90ec,	// (0x000a45ee) main_radioblah_text_pane_t1_ParamLimits

0x90ec,	// (0x000a45ee) main_radioblah_text_pane_t1

0xea10,	// (0x000a9f12) cam6_indi_pane_cp01

0xea18,	// (0x000a9f1a) cam6_mode_pane_cp01

0xea20,	// (0x000a9f22) cam6_pano_pane

0xea29,	// (0x000a9f2b) cam6_zoom_pane_cp01

0xea33,	// (0x000a9f35) cam6_pano_image_pane

0xea3c,	// (0x000a9f3e) cam6_pano_pane_g1

0xe303,	// (0x000a9805) cam6_pano_pane_g2

0xea45,	// (0x000a9f47) cam6_pano_pane_g3

0xea4e,	// (0x000a9f50) cam6_pano_pane_g4

0xd21c,	// (0x000a871e) cam6_pano_pane_g5

0xea57,	// (0x000a9f59) cam6_pano_pane_g6

0xea5f,	// (0x000a9f61) cam6_pano_pane_g7

0xea67,	// (0x000a9f69) cam6_pano_pane_g8

0xea70,	// (0x000a9f72) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000ab2fd) cam6_pano_pane_g

0x9ce2,	// (0x000a51e4) main_browser_tag_pane

0xe8c8,	// (0x000a9dca) grid_navstr_albumart_pane

0xea7b,	// (0x000a9f7d) cell_navstr_albumart_pane_ParamLimits

0xea7b,	// (0x000a9f7d) cell_navstr_albumart_pane

0xea9a,	// (0x000a9f9c) cell_navstr_albumart_pane_g1

0xc656,	// (0x000a7b58) cell_navstr_albumart_pane_g2

0xc666,	// (0x000a7b68) cell_navstr_albumart_pane_g3

0xc65e,	// (0x000a7b60) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000ab310) cell_navstr_albumart_pane_g

0x9106,	// (0x000a4608) bt_list_pane_ParamLimits

0x9106,	// (0x000a4608) bt_list_pane

0x911f,	// (0x000a4621) bt_list_pane_t1

0x912e,	// (0x000a4630) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000ab319) bt_list_pane_t

0x9ce2,	// (0x000a51e4) main_cale_prevew_pane

0x913d,	// (0x000a463f) popup_cale_preview_window_ParamLimits

0x913d,	// (0x000a463f) popup_cale_preview_window

0xa26e,	// (0x000a5770) bg_popup_preview_window_pane_cp05_ParamLimits

0xa26e,	// (0x000a5770) bg_popup_preview_window_pane_cp05

0xeaa2,	// (0x000a9fa4) list_cale_preview_pane_ParamLimits

0xeaa2,	// (0x000a9fa4) list_cale_preview_pane

0x9158,	// (0x000a465a) list_double_cale_preview_pane_ParamLimits

0x9158,	// (0x000a465a) list_double_cale_preview_pane

0x916c,	// (0x000a466e) list_single_cale_preview_pane_ParamLimits

0x916c,	// (0x000a466e) list_single_cale_preview_pane

0x9184,	// (0x000a4686) list_single_cale_preview_pane_g1

0x918c,	// (0x000a468e) list_single_cale_preview_pane_t1_ParamLimits

0x918c,	// (0x000a468e) list_single_cale_preview_pane_t1

0x91a1,	// (0x000a46a3) list_double_cale_preview_pane_g1

0x91a9,	// (0x000a46ab) list_double_cale_preview_pane_t1_ParamLimits

0x91a9,	// (0x000a46ab) list_double_cale_preview_pane_t1

0x91be,	// (0x000a46c0) list_double_cale_preview_pane_t2_ParamLimits

0x91be,	// (0x000a46c0) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000ab31e) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000ab31e) list_double_cale_preview_pane_t

0x9ce2,	// (0x000a51e4) main_ezdial_pane

0xa26e,	// (0x000a5770) main_sp_fs_email_pane_ParamLimits

0x884b,	// (0x000a3d4d) cmail_ddmenu_btn01_pane_ParamLimits

0x884b,	// (0x000a3d4d) cmail_ddmenu_btn01_pane

0x8868,	// (0x000a3d6a) cmail_ddmenu_btn02_pane_ParamLimits

0x8868,	// (0x000a3d6a) cmail_ddmenu_btn02_pane

0x8886,	// (0x000a3d88) cmail_ddmenu_btn03_pane_ParamLimits

0x8886,	// (0x000a3d88) cmail_ddmenu_btn03_pane

0x88b6,	// (0x000a3db8) main_sp_fs_ctrlbar_pane_ParamLimits

0x88d0,	// (0x000a3dd2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8dc5,	// (0x000a42c7) list_cmail_body_pane_ParamLimits

0x8e3f,	// (0x000a4341) bg_button_pane_cp12

0xe851,	// (0x000a9d53) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x000a9d53) list_single_cmail_header_detail_pane_g3

0xa468,	// (0x000a596a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa468,	// (0x000a596a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000ab2a1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000ab2a1) list_single_cmail_header_detail_pane_t

0xa4a9,	// (0x000a59ab) phacti_term_pane_t2_ParamLimits

0xa4a9,	// (0x000a59ab) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000ab2ab) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000ab2ab) phacti_term_pane_t

0xeaae,	// (0x000a9fb0) aid_size_list_single_double

0x91d6,	// (0x000a46d8) popup_ezdial_listscroll_window

0x91f8,	// (0x000a46fa) popup_number_entry_window_cp01

0xb43e,	// (0x000a6940) bg_popup_call_pane_cp09

0xeaba,	// (0x000a9fbc) ezdial_list_pane

0xeac2,	// (0x000a9fc4) scroll_pane_cp23

0xca79,	// (0x000a7f7b) bg_button_pane_cp028_ParamLimits

0xca79,	// (0x000a7f7b) bg_button_pane_cp028

0x9206,	// (0x000a4708) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9206,	// (0x000a4708) cmail_ddmenu_btn01_pane_g1

0x9218,	// (0x000a471a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9218,	// (0x000a471a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000ab323) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000ab323) cmail_ddmenu_btn01_pane_g

0xeaca,	// (0x000a9fcc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaca,	// (0x000a9fcc) cmail_ddmenu_btn01_pane_t1

0xc849,	// (0x000a7d4b) bg_button_pane_cp029_ParamLimits

0xc849,	// (0x000a7d4b) bg_button_pane_cp029

0x9218,	// (0x000a471a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9218,	// (0x000a471a) cmail_ddmenu_btn02_pane_g1

0x9230,	// (0x000a4732) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9230,	// (0x000a4732) cmail_ddmenu_btn02_pane_t1

0x106b,	// (0x0009c56d) bg_button_pane_cp031_ParamLimits

0x106b,	// (0x0009c56d) bg_button_pane_cp031

0x9218,	// (0x000a471a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9218,	// (0x000a471a) cmail_ddmenu_btn03_pane_g1

0x9230,	// (0x000a4732) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9230,	// (0x000a4732) cmail_ddmenu_btn03_pane_t1

0x6289,	// (0x000a178b) cell_dialer2_keypad_pane_t1_ParamLimits

0x62a3,	// (0x000a17a5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x62a3,	// (0x000a17a5) cell_dialer2_keypad_pane_t1_copy1

0x8170,	// (0x000a3672) ncimui_group_button_pane

0xa26e,	// (0x000a5770) main_sp_fs_calendar_pane_ParamLimits

0x8ddd,	// (0x000a42df) list_single_cmail_header_caption_pane_ParamLimits

0xa4be,	// (0x000a59c0) aid_recal_txt_sm_pane

0x9ce2,	// (0x000a51e4) mian_recal_day_pane

0xa4f8,	// (0x000a59fa) popup_sp_fs_cale_preview_window_ParamLimits

0xeadf,	// (0x000a9fe1) list_recal_day_pane

0xaab2,	// (0x000a5fb4) list_single_recal_day_pane_ParamLimits

0xaab2,	// (0x000a5fb4) list_single_recal_day_pane

0xeb06,	// (0x000aa008) list_single_recal_day_pane_g1_ParamLimits

0xeb06,	// (0x000aa008) list_single_recal_day_pane_g1

0xaac4,	// (0x000a5fc6) list_single_recal_day_pane_g2_ParamLimits

0xaac4,	// (0x000a5fc6) list_single_recal_day_pane_g2

0xaad0,	// (0x000a5fd2) list_single_recal_day_pane_g3_ParamLimits

0xaad0,	// (0x000a5fd2) list_single_recal_day_pane_g3

0x9254,	// (0x000a4756) list_single_recal_day_pane_g4_ParamLimits

0x9254,	// (0x000a4756) list_single_recal_day_pane_g4

0xaadc,	// (0x000a5fde) list_single_recal_day_pane_g5_ParamLimits

0xaadc,	// (0x000a5fde) list_single_recal_day_pane_g5

0xaae8,	// (0x000a5fea) list_single_recal_day_pane_g6_ParamLimits

0xaae8,	// (0x000a5fea) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000ab332) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000ab332) list_single_recal_day_pane_g

0xaafc,	// (0x000a5ffe) list_single_recal_day_pane_t1

0xab0e,	// (0x000a6010) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000ab33d) list_single_recal_day_pane_t

0x926c,	// (0x000a476e) ncimui_query_button_pane_ParamLimits

0x926c,	// (0x000a476e) ncimui_query_button_pane

0x927c,	// (0x000a477e) ncimui_query_button_pane_t1_ParamLimits

0x927c,	// (0x000a477e) ncimui_query_button_pane_t1

0xeb12,	// (0x000aa014) ncimui_query_button_pane_t2_ParamLimits

0xeb12,	// (0x000aa014) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000ab342) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000ab342) ncimui_query_button_pane_t

0x928f,	// (0x000a4791) query_button_pane_ParamLimits

0x928f,	// (0x000a4791) query_button_pane

0x9ce2,	// (0x000a51e4) bg_button_pane_cp0028

0xeb25,	// (0x000aa027) query_button_pane_t1

0x4639,	// (0x0009fb3b) main_tport_pane_ParamLimits

0x8ccf,	// (0x000a41d1) bg_popup_window_pane_cp01_ParamLimits

0x8ccf,	// (0x000a41d1) bg_popup_window_pane_cp01

0x8cdd,	// (0x000a41df) heading_pane_cp08_ParamLimits

0x8cdd,	// (0x000a41df) heading_pane_cp08

0x8ceb,	// (0x000a41ed) heading_pane_cp07_ParamLimits

0x8ceb,	// (0x000a41ed) heading_pane_cp07

0x8d5c,	// (0x000a425e) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000ab28e) cell_tport_appsw_pane_g

0xa21e,	// (0x000a5720) input_candi_list_open_g1

0xaef6,	// (0x000a63f8) list_cale_time_pane_g6_ParamLimits

0xaef6,	// (0x000a63f8) list_cale_time_pane_g6

0x50bc,	// (0x000a05be) aid_size_touch_calib_1_ParamLimits

0x50bc,	// (0x000a05be) aid_size_touch_calib_1

0x50c8,	// (0x000a05ca) aid_size_touch_calib_2_ParamLimits

0x50c8,	// (0x000a05ca) aid_size_touch_calib_2

0x50d6,	// (0x000a05d8) aid_size_touch_calib_3_ParamLimits

0x50d6,	// (0x000a05d8) aid_size_touch_calib_3

0x50e6,	// (0x000a05e8) aid_size_touch_calib_4_ParamLimits

0x50e6,	// (0x000a05e8) aid_size_touch_calib_4

0x50f4,	// (0x000a05f6) main_touch_calib_button_group_pane_ParamLimits

0x50f4,	// (0x000a05f6) main_touch_calib_button_group_pane

0x5102,	// (0x000a0604) main_touch_calib_pane_g1_ParamLimits

0x510e,	// (0x000a0610) main_touch_calib_pane_g2_ParamLimits

0x511a,	// (0x000a061c) main_touch_calib_pane_g3_ParamLimits

0x5126,	// (0x000a0628) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x000aac5e) main_touch_calib_pane_g_ParamLimits

0x5132,	// (0x000a0634) main_touch_calib_pane_t1_ParamLimits

0x5149,	// (0x000a064b) main_touch_calib_pane_t2_ParamLimits

0x5162,	// (0x000a0664) main_touch_calib_pane_t3_ParamLimits

0x5178,	// (0x000a067a) main_touch_calib_pane_t4_ParamLimits

0x518e,	// (0x000a0690) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x000aac67) main_touch_calib_pane_t_ParamLimits

0xcfd2,	// (0x000a84d4) list_single_fp_cale_pane_g3_ParamLimits

0xcfd2,	// (0x000a84d4) list_single_fp_cale_pane_g3

0x672e,	// (0x000a1c30) bg_button_pane_cp012_ParamLimits

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp03_ParamLimits

0x7147,	// (0x000a2649) cell_vitu2_function_top_pane_g1_ParamLimits

0x672e,	// (0x000a1c30) bg_vkb2_func_pane_cp04_ParamLimits

0x80f6,	// (0x000a35f8) main_ncimui_button_group_pane_ParamLimits

0x80f6,	// (0x000a35f8) main_ncimui_button_group_pane

0x815e,	// (0x000a3660) main_ncimui_pane_t3_ParamLimits

0x815e,	// (0x000a3660) main_ncimui_pane_t3

0xe8de,	// (0x000a9de0) phacti_button_group_pane

0xeaae,	// (0x000a9fb0) aid_size_list_single_double_ParamLimits

0x91d6,	// (0x000a46d8) popup_ezdial_listscroll_window_ParamLimits

0x91f8,	// (0x000a46fa) popup_number_entry_window_cp01_ParamLimits

0x929c,	// (0x000a479e) phacti_button_pane_ParamLimits

0x929c,	// (0x000a479e) phacti_button_pane

0x9ce2,	// (0x000a51e4) bg_button_pane_cp14

0xeb33,	// (0x000aa035) phacti_button_pane_t1

0x92ad,	// (0x000a47af) main_touch_calib_button_pane_ParamLimits

0x92ad,	// (0x000a47af) main_touch_calib_button_pane

0xa7d5,	// (0x000a5cd7) bg_button_pane_cp18_ParamLimits

0xa7d5,	// (0x000a5cd7) bg_button_pane_cp18

0xeb41,	// (0x000aa043) main_touch_calib_button_pane_t1_ParamLimits

0xeb41,	// (0x000aa043) main_touch_calib_button_pane_t1

0xeb57,	// (0x000aa059) main_touch_calib_button_pane_t2_ParamLimits

0xeb57,	// (0x000aa059) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000ab347) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000ab347) main_touch_calib_button_pane_t

0x9ce2,	// (0x000a51e4) cell_ncimui_button_pane

0x9ce2,	// (0x000a51e4) bg_button_pane_cp032

0xeb75,	// (0x000aa077) cell_ncimui_button_pane_t1

0x62ff,	// (0x000a1801) image3_infobar_pane_ParamLimits

0x62ff,	// (0x000a1801) image3_infobar_pane

0x84eb,	// (0x000a39ed) fs_bigclock_status_pane_ParamLimits

0x84eb,	// (0x000a39ed) fs_bigclock_status_pane

0x84f8,	// (0x000a39fa) main_fs_bigclock_clock_pane_ParamLimits

0x84f8,	// (0x000a39fa) main_fs_bigclock_clock_pane

0x850e,	// (0x000a3a10) main_fs_bigclock_indi_pane_ParamLimits

0x850e,	// (0x000a3a10) main_fs_bigclock_indi_pane

0x8540,	// (0x000a3a42) main_fs_bigclock_swipe_pane_ParamLimits

0x8540,	// (0x000a3a42) main_fs_bigclock_swipe_pane

0x9ce2,	// (0x000a51e4) main_fs_clock_dumped_data

0xe410,	// (0x000a9912) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe410,	// (0x000a9912) list_single_fs_bigclock_indicator_pane_g1

0xe43a,	// (0x000a993c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe43a,	// (0x000a993c) list_single_fs_bigclock_indicator_pane_g2

0xe454,	// (0x000a9956) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe454,	// (0x000a9956) list_single_fs_bigclock_indicator_pane_g3

0xe46e,	// (0x000a9970) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46e,	// (0x000a9970) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc73,	// (0x000ab175) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc73,	// (0x000ab175) list_single_fs_bigclock_indicator_pane_g

0xe499,	// (0x000a999b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe499,	// (0x000a999b) list_single_fs_bigclock_indicator_pane_t1

0xe4c1,	// (0x000a99c3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4c1,	// (0x000a99c3) list_single_fs_bigclock_indicator_pane_t2

0xe4e9,	// (0x000a99eb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e9,	// (0x000a99eb) list_single_fs_bigclock_indicator_pane_t3

0xe511,	// (0x000a9a13) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe511,	// (0x000a9a13) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7e,	// (0x000ab180) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7e,	// (0x000ab180) list_single_fs_bigclock_indicator_pane_t

0xeb83,	// (0x000aa085) image3_infobar_fav_pane_ParamLimits

0xeb83,	// (0x000aa085) image3_infobar_fav_pane

0xeb93,	// (0x000aa095) image3_infobar_loc_pane_ParamLimits

0xeb93,	// (0x000aa095) image3_infobar_loc_pane

0xeba9,	// (0x000aa0ab) image3_infobar_time_pane_ParamLimits

0xeba9,	// (0x000aa0ab) image3_infobar_time_pane

0xcca2,	// (0x000a81a4) image3_infobar_time_pane_g1

0xebb9,	// (0x000aa0bb) image3_infobar_time_pane_t1

0xcca2,	// (0x000a81a4) image3_infobar_loc_pane_g1

0xebc7,	// (0x000aa0c9) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000ab34c) image3_infobar_loc_pane_g

0xebcf,	// (0x000aa0d1) image3_infobar_loc_pane_t1

0xcca2,	// (0x000a81a4) image3_infobar_fav_pane_g1

0xebdd,	// (0x000aa0df) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000ab351) image3_infobar_fav_pane_g

0xebe5,	// (0x000aa0e7) fs_bigclock_status_battery_pane

0xebee,	// (0x000aa0f0) fs_bigclock_status_signal_pane

0xebf7,	// (0x000aa0f9) fs_bigclock_status_title_pane

0xec00,	// (0x000aa102) fs_bigclock_status_signal_pane_g1

0xec09,	// (0x000aa10b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000ab356) fs_bigclock_status_signal_pane_g

0xec11,	// (0x000aa113) fs_bigclock_status_battery_pane_g1

0xec1a,	// (0x000aa11c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000ab35b) fs_bigclock_status_battery_pane_g

0xec22,	// (0x000aa124) fs_bigclock_status_title_pane_t1

0xcca2,	// (0x000a81a4) main_fs_bigclock_clock_pane_g1

0xec30,	// (0x000aa132) main_fs_bigclock_clock_pane_g2

0xec30,	// (0x000aa132) main_fs_bigclock_clock_pane_g3

0xec30,	// (0x000aa132) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000ab360) main_fs_bigclock_clock_pane_g

0xec38,	// (0x000aa13a) main_fs_bigclock_clock_pane_t1

0xec46,	// (0x000aa148) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000ab369) main_fs_bigclock_clock_pane_t

0x92bd,	// (0x000a47bf) list_single_fs_bigclock_indicator_pane_ParamLimits

0x92bd,	// (0x000a47bf) list_single_fs_bigclock_indicator_pane

0x92ce,	// (0x000a47d0) list_single_fs_bigclock_pane_ParamLimits

0x92ce,	// (0x000a47d0) list_single_fs_bigclock_pane

0xec5e,	// (0x000aa160) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x000aa16f) list_single_fs_bigclock_pane_g1

0xec75,	// (0x000aa177) list_single_fs_bigclock_pane_t1

0xcca2,	// (0x000a81a4) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x000aa1ba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000ab37a) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x000aa1c2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x000aa1c2) main_fs_bigclock_swipe_pane_t1

0x34c4,	// (0x0009e9c6) call_type_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_btmg_pane

0xaa5b,	// (0x000a5f5d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xaa5b,	// (0x000a5f5d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000ab2ed) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000ab2ed) list_single_cale_mrui_row_pane_g

0xaaa0,	// (0x000a5fa2) list_recal_vselct_arw_lo_pane

0xeafe,	// (0x000aa000) list_recal_vselct_arw_up_pane

0xaaa8,	// (0x000a5faa) list_recal_vselct_pane

0x9324,	// (0x000a4826) btmg_button_pane

0x9330,	// (0x000a4832) main_btmg_pane_g1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp044

0xecdd,	// (0x000aa1df) btmg_button_pane_t1

0xc835,	// (0x000a7d37) aid_listscroll_gen

0xa26e,	// (0x000a5770) main_cntbar_detail_pane

0xe832,	// (0x000a9d34) list_cmail_folder_pane

0xe842,	// (0x000a9d44) sp_fs_scroll_pane_cp03_ParamLimits

0x9338,	// (0x000a483a) list_single_fs_dyc_pane_cp01_ParamLimits

0x9338,	// (0x000a483a) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x000aa1ed) aid_size_cmail_indent

0xab20,	// (0x000a6022) list_single_dyc_row_pane_cp01

0x9372,	// (0x000a4874) cntbar_detail_list_pane_ParamLimits

0x9372,	// (0x000a4874) cntbar_detail_list_pane

0x93b2,	// (0x000a48b4) main_cntbar_detail_cont_pane_ParamLimits

0x93b2,	// (0x000a48b4) main_cntbar_detail_cont_pane

0x33db,	// (0x0009e8dd) scroll_pane_cp032_ParamLimits

0x33db,	// (0x0009e8dd) scroll_pane_cp032

0x93be,	// (0x000a48c0) cntbar_detail_list_event_pane_ParamLimits

0x93be,	// (0x000a48c0) cntbar_detail_list_event_pane

0x9380,	// (0x000a4882) cntbar_detail_list_shct_pane

0xad98,	// (0x000a629a) aid_list_gen

0xecf4,	// (0x000aa1f6) aid_scroll

0xecfd,	// (0x000aa1ff) aid_size_touch_scroll_bar

0x786b,	// (0x000a2d6d) aid_list_double

0xed06,	// (0x000aa208) aid_list_single

0x7859,	// (0x000a2d5b) aid_list_single_lg

0xab29,	// (0x000a602b) aid_list_z_g_a_sm

0xab31,	// (0x000a6033) aid_list_z_g_d

0x93ce,	// (0x000a48d0) aid_txt_z_prm

0x93de,	// (0x000a48e0) aid_txt_z_prm_cp01

0x93ec,	// (0x000a48ee) aid_txt_z_sec

0x93fa,	// (0x000a48fc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93fa,	// (0x000a48fc) main_cntbar_detail_cont_pane_g1

0x9407,	// (0x000a4909) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9407,	// (0x000a4909) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000ab37f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000ab37f) main_cntbar_detail_cont_pane_g

0xed0f,	// (0x000aa211) main_cntbar_detail_cont_pane_t1

0xed1d,	// (0x000aa21f) main_cntbar_detail_cont_pane_t2

0xed2b,	// (0x000aa22d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000ab384) main_cntbar_detail_cont_pane_t

0x9413,	// (0x000a4915) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9413,	// (0x000a4915) cell_cntbar_detail_list_shct_pane

0xed39,	// (0x000aa23b) cntbar_detail_list_shct_pane_g1

0xed42,	// (0x000aa244) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000ab38b) cntbar_detail_list_shct_pane_g

0x9427,	// (0x000a4929) cntbar_detail_list_event_pane_g1_ParamLimits

0x9427,	// (0x000a4929) cntbar_detail_list_event_pane_g1

0x9433,	// (0x000a4935) cntbar_detail_list_event_pane_g2_ParamLimits

0x9433,	// (0x000a4935) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000ab390) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000ab390) cntbar_detail_list_event_pane_g

0x94a1,	// (0x000a49a3) cntbar_detail_list_event_pane_t1_ParamLimits

0x94a1,	// (0x000a49a3) cntbar_detail_list_event_pane_t1

0x94b6,	// (0x000a49b8) cntbar_detail_list_event_pane_t2_ParamLimits

0x94b6,	// (0x000a49b8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000ab39d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000ab39d) cntbar_detail_list_event_pane_t

0xcca2,	// (0x000a81a4) cell_cntbar_detail_list_shct_pane_g1

0x3897,	// (0x0009ed99) navi_pane_mv_g3

0xa26e,	// (0x000a5770) main_cntbar_detail_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_notif_wgt_pane

0x5fa9,	// (0x000a14ab) aid_tch_main_mp4_pane_g4

0x61e8,	// (0x000a16ea) popup_slider_window_cp02

0xaa96,	// (0x000a5f98) list_recal_day_event_pane

0x9352,	// (0x000a4854) cntbar_detail_btn_pane_ParamLimits

0x9352,	// (0x000a4854) cntbar_detail_btn_pane

0x9362,	// (0x000a4864) cntbar_detail_btn_pane_cp01_ParamLimits

0x9362,	// (0x000a4864) cntbar_detail_btn_pane_cp01

0x9380,	// (0x000a4882) cntbar_detail_list_shct_pane_ParamLimits

0x938c,	// (0x000a488e) cntbar_detail_pane_g1_ParamLimits

0x938c,	// (0x000a488e) cntbar_detail_pane_g1

0x939c,	// (0x000a489e) cntbar_detail_pane_t1_ParamLimits

0x939c,	// (0x000a489e) cntbar_detail_pane_t1

0x943f,	// (0x000a4941) cntbar_detail_list_event_pane_g3_ParamLimits

0x943f,	// (0x000a4941) cntbar_detail_list_event_pane_g3

0x9457,	// (0x000a4959) cntbar_detail_list_event_pane_g4_ParamLimits

0x9457,	// (0x000a4959) cntbar_detail_list_event_pane_g4

0x946f,	// (0x000a4971) cntbar_detail_list_event_pane_g5_ParamLimits

0x946f,	// (0x000a4971) cntbar_detail_list_event_pane_g5

0x9487,	// (0x000a4989) cntbar_detail_list_event_pane_g6_ParamLimits

0x9487,	// (0x000a4989) cntbar_detail_list_event_pane_g6

0x94cb,	// (0x000a49cd) cntbar_detail_list_event_pane_t3_ParamLimits

0x94cb,	// (0x000a49cd) cntbar_detail_list_event_pane_t3

0x94dd,	// (0x000a49df) popup_notif_wgt_window_ParamLimits

0x94dd,	// (0x000a49df) popup_notif_wgt_window

0x94ed,	// (0x000a49ef) popup_submenu_window_cp01_ParamLimits

0x94ed,	// (0x000a49ef) popup_submenu_window_cp01

0xb43e,	// (0x000a6940) bg_popup_window_pane_cp10

0xed4b,	// (0x000aa24d) listscroll_notif_wgt_pane

0xed5d,	// (0x000aa25f) list_notif_wgt_window

0xed66,	// (0x000aa268) scroll_pane_cp033

0x94fd,	// (0x000a49ff) list_notif_wgt_row_pane_ParamLimits

0x94fd,	// (0x000a49ff) list_notif_wgt_row_pane

0xed6f,	// (0x000aa271) aid_size_list_notif_wgt_del

0xed7c,	// (0x000aa27e) list_notif_wgt_row_pane_g1

0xed88,	// (0x000aa28a) list_notif_wgt_row_pane_g2

0xed94,	// (0x000aa296) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000ab3a4) list_notif_wgt_row_pane_g

0xeda1,	// (0x000aa2a3) list_notif_wgt_row_pane_t1

0xedb6,	// (0x000aa2b8) list_notif_wgt_row_pane_t2

0xedc8,	// (0x000aa2ca) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000ab3ab) list_notif_wgt_row_pane_t

0xd8e2,	// (0x000a8de4) list_recal_day_event_pane_g1

0xedda,	// (0x000aa2dc) list_recal_day_event_pane_t1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp045

0xede9,	// (0x000aa2eb) cntbar_detail_btn_pane_t1

0xc849,	// (0x000a7d4b) main_callh_pane_ParamLimits

0xc849,	// (0x000a7d4b) main_callh_pane

0x9ce2,	// (0x000a51e4) main_coverflow0_pane

0x9ce2,	// (0x000a51e4) main_wgtman_pane

0x8558,	// (0x000a3a5a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8558,	// (0x000a3a5a) main_fs_bigclock_unlock_btn_pane

0x8d54,	// (0x000a4256) bg_button_pane_cp16

0x8d64,	// (0x000a4266) cell_tport_appsw_pane_g3

0x950e,	// (0x000a4a10) cf0_flow_pane_ParamLimits

0x950e,	// (0x000a4a10) cf0_flow_pane

0xedf7,	// (0x000aa2f9) listscroll_cf0_pane

0xee02,	// (0x000aa304) main_cf0_pane_g1

0x951d,	// (0x000a4a1f) main_cf0_pane_t1_ParamLimits

0x951d,	// (0x000a4a1f) main_cf0_pane_t1

0x9531,	// (0x000a4a33) main_cf0_pane_t2_ParamLimits

0x9531,	// (0x000a4a33) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000ab3b7) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000ab3b7) main_cf0_pane_t

0xee14,	// (0x000aa316) scroll_pane_cp11

0x9545,	// (0x000a4a47) cf0_flow_pane_g1

0x954d,	// (0x000a4a4f) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000ab3bc) cf0_flow_pane_g

0x9555,	// (0x000a4a57) cf0_flow_pane_t1

0x9ce2,	// (0x000a51e4) main_call6_pane

0x9ce2,	// (0x000a51e4) main_calllock_pane

0x9563,	// (0x000a4a65) call6_btn_grp_pane_ParamLimits

0x9563,	// (0x000a4a65) call6_btn_grp_pane

0x9570,	// (0x000a4a72) call6_pane_g1_ParamLimits

0x9570,	// (0x000a4a72) call6_pane_g1

0x9580,	// (0x000a4a82) popup_call6_1st_window_ParamLimits

0x9580,	// (0x000a4a82) popup_call6_1st_window

0x958e,	// (0x000a4a90) popup_call6_2nd_window_ParamLimits

0x958e,	// (0x000a4a90) popup_call6_2nd_window

0x959c,	// (0x000a4a9e) cell_call6_btn_pane_ParamLimits

0x959c,	// (0x000a4a9e) cell_call6_btn_pane

0xb43e,	// (0x000a6940) bg_popup_call2_in_pane_cp03

0xee1f,	// (0x000aa321) popup_call6_1st_window_g1

0xee27,	// (0x000aa329) popup_call6_1st_window_g2

0xee2f,	// (0x000aa331) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000ab3c1) popup_call6_1st_window_g

0xee37,	// (0x000aa339) popup_call6_1st_window_t1

0xee46,	// (0x000aa348) popup_call6_1st_window_t2

0xee56,	// (0x000aa358) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000ab3c8) popup_call6_1st_window_t

0xb43e,	// (0x000a6940) bg_popup_call2_in_pane_cp04

0xee1f,	// (0x000aa321) popup_call6_2nd_window_g1

0xee27,	// (0x000aa329) popup_call6_2nd_window_g2

0xee2f,	// (0x000aa331) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000ab3c1) popup_call6_2nd_window_g

0xee37,	// (0x000aa339) popup_call6_2nd_window_t1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp15

0xee66,	// (0x000aa368) cell_call6_btn_pane_g1

0xee6f,	// (0x000aa371) cell_call6_btn_pane_t1

0x95ab,	// (0x000a4aad) listscroll_wgtman_pane_ParamLimits

0x95ab,	// (0x000a4aad) listscroll_wgtman_pane

0x95c9,	// (0x000a4acb) wgtman_btn_pane_ParamLimits

0x95c9,	// (0x000a4acb) wgtman_btn_pane

0xb2f6,	// (0x000a67f8) aid_scroll_copy1

0xee7e,	// (0x000aa380) list_wgtman_pane

0x95fe,	// (0x000a4b00) wgtman_btn_pane_g1_ParamLimits

0x95fe,	// (0x000a4b00) wgtman_btn_pane_g1

0x9626,	// (0x000a4b28) wgtman_btn_pane_t1_ParamLimits

0x9626,	// (0x000a4b28) wgtman_btn_pane_t1

0xee88,	// (0x000aa38a) wgtman_btn_pane_t2_ParamLimits

0xee88,	// (0x000aa38a) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000ab3cf) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000ab3cf) wgtman_btn_pane_t

0x965d,	// (0x000a4b5f) listrow_wgtman_pane_ParamLimits

0x965d,	// (0x000a4b5f) listrow_wgtman_pane

0x966e,	// (0x000a4b70) listrow_wgtman_pane_g1

0x967b,	// (0x000a4b7d) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000ab3d4) listrow_wgtman_pane_g

0x9699,	// (0x000a4b9b) listrow_wgtman_pane_t1

0x96b1,	// (0x000a4bb3) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000ab3d9) listrow_wgtman_pane_t

0x96d7,	// (0x000a4bd9) wait_bar_pane_cp09

0xee9f,	// (0x000aa3a1) main_calllock_btn_pane

0xeea9,	// (0x000aa3ab) main_calllock_pane_g1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp17

0xeeb5,	// (0x000aa3b7) main_calllock_btn_pane_g1

0xeebe,	// (0x000aa3c0) main_calllock_btn_pane_t1

0x9ce2,	// (0x000a51e4) main_dialer3_pane

0x9ce2,	// (0x000a51e4) main_fmrd2_pane

0xcca2,	// (0x000a81a4) main_fs_bigclock_unlock_btn_pane_g1

0xeed5,	// (0x000aa3d7) main_fs_bigclock_unlock_btn_pane_t1

0x96e9,	// (0x000a4beb) area_fmrd2_info_pane_ParamLimits

0x96e9,	// (0x000a4beb) area_fmrd2_info_pane

0x96f5,	// (0x000a4bf7) area_fmrd2_visual_pane_ParamLimits

0x96f5,	// (0x000a4bf7) area_fmrd2_visual_pane

0x9703,	// (0x000a4c05) fmrd2_indi_pane_ParamLimits

0x9703,	// (0x000a4c05) fmrd2_indi_pane

0x9710,	// (0x000a4c12) area_fmrd2_visual_pane_g1

0x9718,	// (0x000a4c1a) area_fmrd2_visual_pane_t1

0x9728,	// (0x000a4c2a) area_fmrd2_visual_pane_t2

0x9738,	// (0x000a4c3a) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000ab3e3) area_fmrd2_visual_pane_t

0x9748,	// (0x000a4c4a) area_fmrd2_info_pane_g1

0x9750,	// (0x000a4c52) area_fmrd2_info_pane_t1

0x9760,	// (0x000a4c62) area_fmrd2_info_pane_t2

0x9770,	// (0x000a4c72) area_fmrd2_info_pane_t3

0x9780,	// (0x000a4c82) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000ab3ea) area_fmrd2_info_pane_t

0x9790,	// (0x000a4c92) fmrd2_indi_pane_t1

0x97a0,	// (0x000a4ca2) fmrd2_indi_pane_t2

0x97b0,	// (0x000a4cb2) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000ab3f3) fmrd2_indi_pane_t

0xe47d,	// (0x000a997f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47d,	// (0x000a997f) list_single_fs_bigclock_indicator_pane_g5

0xe526,	// (0x000a9a28) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe526,	// (0x000a9a28) list_single_fs_bigclock_indicator_pane_t5

0x8f61,	// (0x000a4463) aid_cell_bcale_month_pane_ParamLimits

0x8f61,	// (0x000a4463) aid_cell_bcale_month_pane

0x8f7f,	// (0x000a4481) bcale_month_pane_ParamLimits

0x8f7f,	// (0x000a4481) bcale_month_pane

0x8f9b,	// (0x000a449d) bcale_preview_pane_ParamLimits

0x8f9b,	// (0x000a449d) bcale_preview_pane

0xec75,	// (0x000aa177) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x000aa196) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x000aa196) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000ab375) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000ab375) list_single_fs_bigclock_pane_t

0xeecd,	// (0x000aa3cf) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000ab3de) main_fs_bigclock_unlock_btn_pane_g

0x97c0,	// (0x000a4cc2) aid_dia3_key_size_ParamLimits

0x97c0,	// (0x000a4cc2) aid_dia3_key_size

0x97cc,	// (0x000a4cce) aid_dia3_listrow_size_ParamLimits

0x97cc,	// (0x000a4cce) aid_dia3_listrow_size

0x97dc,	// (0x000a4cde) dia3_keypad_fun_pane_ParamLimits

0x97dc,	// (0x000a4cde) dia3_keypad_fun_pane

0x97ec,	// (0x000a4cee) dia3_keypad_num_pane_ParamLimits

0x97ec,	// (0x000a4cee) dia3_keypad_num_pane

0x97fc,	// (0x000a4cfe) dia3_listscroll_pane_ParamLimits

0x97fc,	// (0x000a4cfe) dia3_listscroll_pane

0x980a,	// (0x000a4d0c) dia3_numentry_pane_ParamLimits

0x980a,	// (0x000a4d0c) dia3_numentry_pane

0xeee3,	// (0x000aa3e5) dia3_list_pane

0xeeee,	// (0x000aa3f0) scroll_pane_cp12

0x9ce2,	// (0x000a51e4) bg_dia3_numentry_pane

0x9818,	// (0x000a4d1a) dia3_numentry_pane_t1

0x9827,	// (0x000a4d29) cell_dia3_key_num_pane

0x982f,	// (0x000a4d31) cell_dia3_key0_fun_pane_ParamLimits

0x982f,	// (0x000a4d31) cell_dia3_key0_fun_pane

0x983c,	// (0x000a4d3e) cell_dia3_key1_fun_pane_ParamLimits

0x983c,	// (0x000a4d3e) cell_dia3_key1_fun_pane

0x9849,	// (0x000a4d4b) dia3_listrow_pane

0xe17b,	// (0x000a967d) bg_dia3_numentry_pane_g1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp21

0xef0d,	// (0x000aa40f) cell_dia3_key_num_pane_t1

0xef1b,	// (0x000aa41d) cell_dia3_key_num_pane_t2

0xef2a,	// (0x000aa42c) cell_dia3_key_num_pane_t3

0xef39,	// (0x000aa43b) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000ab3fa) cell_dia3_key_num_pane_t

0x9ce2,	// (0x000a51e4) bg_button_pane_cp19

0x9856,	// (0x000a4d58) cell_dia3_key0_fun_pane_g1

0x9ce2,	// (0x000a51e4) bg_button_pane_cp20

0x985e,	// (0x000a4d60) cell_dia3_key1_fun_pane_g1

0x9866,	// (0x000a4d68) area_left_week_number_pane

0x9879,	// (0x000a4d7b) area_top_day_name_pane

0x9887,	// (0x000a4d89) frame_month_view_pane

0xef48,	// (0x000aa44a) grid_month_view_pane

0x989c,	// (0x000a4d9e) cell_top_day_name_pane_ParamLimits

0x989c,	// (0x000a4d9e) cell_top_day_name_pane

0x98b8,	// (0x000a4dba) cell_area_left_week_number_pane_ParamLimits

0x98b8,	// (0x000a4dba) cell_area_left_week_number_pane

0x98d9,	// (0x000a4ddb) cell_month_view_pane_ParamLimits

0x98d9,	// (0x000a4ddb) cell_month_view_pane

0xef56,	// (0x000aa458) frm_month_g1

0x9905,	// (0x000a4e07) frm_month_g2

0x9916,	// (0x000a4e18) frm_month_g3

0x9927,	// (0x000a4e29) frm_month_g4

0x9938,	// (0x000a4e3a) frm_month_g5

0x9949,	// (0x000a4e4b) frm_month_g6

0x995c,	// (0x000a4e5e) frm_month_g7

0xef63,	// (0x000aa465) frm_month_g8

0x996f,	// (0x000a4e71) frm_month_g9

0x997c,	// (0x000a4e7e) frm_month_g10

0x9989,	// (0x000a4e8b) frm_month_g11

0x9996,	// (0x000a4e98) frm_month_g12

0x99a3,	// (0x000a4ea5) frm_month_g13

0x99b2,	// (0x000a4eb4) frm_month_g14

0x99c1,	// (0x000a4ec3) frm_month_g15

0x99d0,	// (0x000a4ed2) frm_month_g16

0x000f,

0xff01,	// (0x000ab403) frm_month_g

0xef70,	// (0x000aa472) cell_top_day_name_pane_t1

0x99df,	// (0x000a4ee1) cell_area_left_week_number_pane_g1

0x99ee,	// (0x000a4ef0) cell_area_left_week_number_pane_t1

0xced2,	// (0x000a83d4) cell_month_view_pane_g1

0x9a04,	// (0x000a4f06) cell_month_view_pane_t1

0x9ce2,	// (0x000a51e4) main_fps_pane

0xe716,	// (0x000a9c18) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe716,	// (0x000a9c18) cmail_ddmenu_btn02_pane_cp1

0xe732,	// (0x000a9c34) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe732,	// (0x000a9c34) cmail_ddmenu_btn02_pane_cp2

0x9224,	// (0x000a4726) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9224,	// (0x000a4726) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000ab328) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000ab328) cmail_ddmenu_btn02_pane_g

0x9242,	// (0x000a4744) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9242,	// (0x000a4744) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000ab32d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000ab32d) cmail_ddmenu_btn02_pane_t

0x9a1a,	// (0x000a4f1c) fps_text_pane_ParamLimits

0x9a1a,	// (0x000a4f1c) fps_text_pane

0x9a27,	// (0x000a4f29) main_fps_pane_g1_ParamLimits

0x9a27,	// (0x000a4f29) main_fps_pane_g1

0x9a33,	// (0x000a4f35) wait_bar_pane_cp010_ParamLimits

0x9a33,	// (0x000a4f35) wait_bar_pane_cp010

0x9a3f,	// (0x000a4f41) fps_text_pane_t1_ParamLimits

0x9a3f,	// (0x000a4f41) fps_text_pane_t1

0x661c,	// (0x000a1b1e) cam4_image_uncrop_pane_g1

0x6625,	// (0x000a1b27) cam4_image_uncrop_pane_g2

0x662e,	// (0x000a1b30) cam4_image_uncrop_pane_g3

0x6637,	// (0x000a1b39) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000aadf6) cam4_image_uncrop_pane_g

0x9849,	// (0x000a4d4b) dia3_listrow_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_phob2_pane

0x8d36,	// (0x000a4238) cell_tport_appsw_pane_cp02_ParamLimits

0x8d36,	// (0x000a4238) cell_tport_appsw_pane_cp02

0x8d45,	// (0x000a4247) cell_tport_appsw_pane_cp03_ParamLimits

0x8d45,	// (0x000a4247) cell_tport_appsw_pane_cp03

0x9ce2,	// (0x000a51e4) phob2_contact_card_pane

0x9ce2,	// (0x000a51e4) phob2_listscroll_pane

0xef83,	// (0x000aa485) phob2_list_pane

0xef8b,	// (0x000aa48d) scroll_pane_cp034

0x9a58,	// (0x000a4f5a) phob2_cc_data_pane_ParamLimits

0x9a58,	// (0x000a4f5a) phob2_cc_data_pane

0x9a74,	// (0x000a4f76) phob2_cc_listscroll_pane_ParamLimits

0x9a74,	// (0x000a4f76) phob2_cc_listscroll_pane

0x9a90,	// (0x000a4f92) list_double_large_graphic_phob2_pane_ParamLimits

0x9a90,	// (0x000a4f92) list_double_large_graphic_phob2_pane

0x9aa8,	// (0x000a4faa) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9aa8,	// (0x000a4faa) list_double_large_graphic_phob2_pane_g1

0x9abe,	// (0x000a4fc0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9abe,	// (0x000a4fc0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000ab424) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000ab424) list_double_large_graphic_phob2_pane_g

0x9aca,	// (0x000a4fcc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9aca,	// (0x000a4fcc) list_double_large_graphic_phob2_pane_t1

0x9adf,	// (0x000a4fe1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9adf,	// (0x000a4fe1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000ab429) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000ab429) list_double_large_graphic_phob2_pane_t

0x9ce2,	// (0x000a51e4) list_highlight_pane_cp024

0xef93,	// (0x000aa495) phob2_cc_button_pane

0x9af1,	// (0x000a4ff3) phob2_cc_data_pane_g1_ParamLimits

0x9af1,	// (0x000a4ff3) phob2_cc_data_pane_g1

0x9afd,	// (0x000a4fff) phob2_cc_data_pane_g2_ParamLimits

0x9afd,	// (0x000a4fff) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000ab42e) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000ab42e) phob2_cc_data_pane_g

0x9b09,	// (0x000a500b) phob2_cc_data_pane_t1_ParamLimits

0x9b09,	// (0x000a500b) phob2_cc_data_pane_t1

0x9b1b,	// (0x000a501d) phob2_cc_data_pane_t2_ParamLimits

0x9b1b,	// (0x000a501d) phob2_cc_data_pane_t2

0x9b2d,	// (0x000a502f) phob2_cc_data_pane_t3_ParamLimits

0x9b2d,	// (0x000a502f) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000ab433) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000ab433) phob2_cc_data_pane_t

0xef9b,	// (0x000aa49d) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x000aa49d) phob2_cc_list_pane

0xd9a2,	// (0x000a8ea4) scroll_pane_cp035_ParamLimits

0xd9a2,	// (0x000a8ea4) scroll_pane_cp035

0xa26e,	// (0x000a5770) bg_button_pane_cp033

0xefa7,	// (0x000aa4a9) phob2_cc_button_pane_g1

0xefb3,	// (0x000aa4b5) phob2_cc_button_pane_t1

0xefc8,	// (0x000aa4ca) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000ab43a) phob2_cc_button_pane_t

0x9b3f,	// (0x000a5041) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b3f,	// (0x000a5041) list_double_large_graphic_phob2_cc_pane

0x9b5b,	// (0x000a505d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b5b,	// (0x000a505d) list_double_large_graphic_phob2_cc_pane_g1

0x9b6c,	// (0x000a506e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b6c,	// (0x000a506e) list_double_large_graphic_phob2_cc_pane_g2

0x9b7b,	// (0x000a507d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b7b,	// (0x000a507d) list_double_large_graphic_phob2_cc_pane_g3

0x9b8a,	// (0x000a508c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b8a,	// (0x000a508c) list_double_large_graphic_phob2_cc_pane_g4

0x9b9b,	// (0x000a509d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b9b,	// (0x000a509d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000ab43f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000ab43f) list_double_large_graphic_phob2_cc_pane_g

0x9baa,	// (0x000a50ac) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9baa,	// (0x000a50ac) list_double_large_graphic_phob2_cc_pane_t1

0x9bd3,	// (0x000a50d5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bd3,	// (0x000a50d5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000ab44a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000ab44a) list_double_large_graphic_phob2_cc_pane_t

0xefda,	// (0x000aa4dc) list_highlight_pane_cp025_ParamLimits

0xefda,	// (0x000aa4dc) list_highlight_pane_cp025

0xa26e,	// (0x000a5770) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x000aa4a9) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x000aa4b5) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x000aa4ca) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000ab43a) phob2_cc_button_pane_t_ParamLimits

0x1079,	// (0x0009c57b) popup_wgtman_window

0xd7bc,	// (0x000a8cbe) scroll_pane_cp038

0x95e6,	// (0x000a4ae8) wgtman_btn_pane_cp_01_ParamLimits

0x95e6,	// (0x000a4ae8) wgtman_btn_pane_cp_01

0xefe8,	// (0x000aa4ea) wgtman_content_pane

0xeff1,	// (0x000aa4f3) wgtman_heading_pane

0x9ce2,	// (0x000a51e4) bg_heading_pane_cp02

0xeffa,	// (0x000aa4fc) wgtman_heading_pane_g1

0xf002,	// (0x000aa504) wgtman_heading_pane_t1

0xf010,	// (0x000aa512) scroll_pane_cp036

0xf018,	// (0x000aa51a) wgtman_list_pane

0xf020,	// (0x000aa522) wgtman_list_pane_t1_ParamLimits

0xf020,	// (0x000aa522) wgtman_list_pane_t1

0x6579,	// (0x000a1a7b) cam4_grid_pane

0x7316,	// (0x000a2818) bg_button_pane_cp015_ParamLimits

0x7328,	// (0x000a282a) bg_button_pane_cp016_ParamLimits

0x733b,	// (0x000a283d) bg_button_pane_cp017_ParamLimits

0x7391,	// (0x000a2893) popup_vitu2_query_window_g3_ParamLimits

0x7391,	// (0x000a2893) popup_vitu2_query_window_g3

0x7450,	// (0x000a2952) popup_vitu2_query_window_t6_ParamLimits

0x7450,	// (0x000a2952) popup_vitu2_query_window_t6

0x747b,	// (0x000a297d) popup_vitu2_query_window_t7_ParamLimits

0x747b,	// (0x000a297d) popup_vitu2_query_window_t7

0xd7a8,	// (0x000a8caa) cam4_grid_pane_g1

0xd7b1,	// (0x000a8cb3) cam4_grid_pane_g2

0xf03a,	// (0x000aa53c) cam4_grid_pane_g3

0xf043,	// (0x000aa545) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000ab44f) cam4_grid_pane_g

0x225f,	// (0x0009d761) aid_placing_vt_slider_lsc_ParamLimits

0x2592,	// (0x0009da94) vidtel_button_pane_ParamLimits

0x2592,	// (0x0009da94) vidtel_button_pane

0xf04e,	// (0x000aa550) bg_button_pane_cp034

0x9bfc,	// (0x000a50fe) vidtel_button_pane_g1

0xf058,	// (0x000aa55a) vidtel_button_pane_t1

0xd8c0,	// (0x000a8dc2) aid_size_vtel_slider_touch

0xd9a2,	// (0x000a8ea4) scroll_pane_cp039

0xe1b9,	// (0x000a96bb) ncim_query_button_pane_cp01_ParamLimits

0xe1d8,	// (0x000a96da) ncimui_query_pane_g1_ParamLimits

0xa26e,	// (0x000a5770) input_focus_pane_cp012_ParamLimits

0xe1fd,	// (0x000a96ff) ncim_query_entry_pane_t1_ParamLimits

0xd9a2,	// (0x000a8ea4) scroll_pane_cp039_ParamLimits

0x3809,	// (0x0009ed0b) navi_pane_bcale_mc_g1

0x3811,	// (0x0009ed13) navi_pane_bcale_mc_t1

0xe77b,	// (0x000a9c7d) main_sp_fs_email_pane_g1

0xe787,	// (0x000a9c89) main_sp_fs_email_pane_g2

0x0001,

0xfce4,	// (0x000ab1e6) main_sp_fs_email_pane_g

0xea03,	// (0x000a9f05) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea03,	// (0x000a9f05) list_single_cale_mrui_row_pane_g3

0x9262,	// (0x000a4764) list_single_recal_day_pane_g5_event_pane

0xaaf4,	// (0x000a5ff6) list_single_recal_day_pane_g7

0xf066,	// (0x000aa568) list_recal_day_event_pane_cp01

0xf06f,	// (0x000aa571) list_recal_vselct_arw_lo_pane_cp01

0xf077,	// (0x000aa579) list_recal_vselct_arw_up_pane_cp01

0xf07f,	// (0x000aa581) list_recal_vselct_pane_cp01

0xd8e2,	// (0x000a8de4) list_recal_day_event_pane_cp01_g1

0xab39,	// (0x000a603b) list_recal_day_event_pane_cp01_t1

0xaafc,	// (0x000a5ffe) list_single_recal_day_pane_t1_ParamLimits

0xab0e,	// (0x000a6010) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000ab33d) list_single_recal_day_pane_t_ParamLimits

0xa710,	// (0x000a5c12) bg_notes_pane_ParamLimits

0xa7b3,	// (0x000a5cb5) list_notes_pane_ParamLimits

0x13c8,	// (0x0009c8ca) scroll_pane_cp06_ParamLimits

0xa7d5,	// (0x000a5cd7) main_notes_pane_ParamLimits

0x9ce2,	// (0x000a51e4) main_welc_pane

0x9c04,	// (0x000a5106) main_welc_body_pane_ParamLimits

0x9c04,	// (0x000a5106) main_welc_body_pane

0x9c1f,	// (0x000a5121) main_welc_opti_pane_ParamLimits

0x9c1f,	// (0x000a5121) main_welc_opti_pane

0x9c54,	// (0x000a5156) main_welc_pane_t1_ParamLimits

0x9c54,	// (0x000a5156) main_welc_pane_t1

0x9c72,	// (0x000a5174) main_welc_body_row_pane_ParamLimits

0x9c72,	// (0x000a5174) main_welc_body_row_pane

0x9c8c,	// (0x000a518e) main_welc_opti_row_pane_ParamLimits

0x9c8c,	// (0x000a518e) main_welc_opti_row_pane

0xf089,	// (0x000aa58b) main_welc_opti_row_pane_g1

0xf091,	// (0x000aa593) main_welc_opti_row_pane_t1

0xf0a0,	// (0x000aa5a2) main_welc_body_row_pane_t1

0xed55,	// (0x000aa257) popup_notif_wgt_heading_pane

0xed6f,	// (0x000aa271) aid_size_list_notif_wgt_del_ParamLimits

0xed7c,	// (0x000aa27e) list_notif_wgt_row_pane_g1_ParamLimits

0xed88,	// (0x000aa28a) list_notif_wgt_row_pane_g2_ParamLimits

0xed94,	// (0x000aa296) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000ab3a4) list_notif_wgt_row_pane_g_ParamLimits

0xeda1,	// (0x000aa2a3) list_notif_wgt_row_pane_t1_ParamLimits

0xedb6,	// (0x000aa2b8) list_notif_wgt_row_pane_t2_ParamLimits

0xedc8,	// (0x000aa2ca) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000ab3ab) list_notif_wgt_row_pane_t_ParamLimits

0x966e,	// (0x000a4b70) listrow_wgtman_pane_g1_ParamLimits

0x967b,	// (0x000a4b7d) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000ab3d4) listrow_wgtman_pane_g_ParamLimits

0x9699,	// (0x000a4b9b) listrow_wgtman_pane_t1_ParamLimits

0x96b1,	// (0x000a4bb3) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000ab3d9) listrow_wgtman_pane_t_ParamLimits

0x96d7,	// (0x000a4bd9) wait_bar_pane_cp09_ParamLimits

0x9ce2,	// (0x000a51e4) bg_popup_heading_pane_cp02

0xf0af,	// (0x000aa5b1) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x000aa5b9) popup_notif_wgt_heading_pane_t1

0x9ce2,	// (0x000a51e4) main_vids_pane

0x9ce2,	// (0x000a51e4) vids_listscroll_pane

0x9c9d,	// (0x000a519f) scroll_pane_cp040

0x9ce2,	// (0x000a51e4) vids_list_pane

0x9ca8,	// (0x000a51aa) vids_list_double_pane_ParamLimits

0x9ca8,	// (0x000a51aa) vids_list_double_pane

0x9cbb,	// (0x000a51bd) vids_list_double_pane_g1

0x9cc4,	// (0x000a51c6) vids_list_double_pane_t1

0x9cd4,	// (0x000a51d6) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000ab45d) vids_list_double_pane_t

0xa26e,	// (0x000a5770) main_ncimui_pane_ParamLimits

0x810e,	// (0x000a3610) main_ncimui_pane_g1_ParamLimits

0x811c,	// (0x000a361e) main_ncimui_pane_g2_ParamLimits

0x811c,	// (0x000a361e) main_ncimui_pane_g2

0x0001,

0xfbe9,	// (0x000ab0eb) main_ncimui_pane_g_ParamLimits

0xfbe9,	// (0x000ab0eb) main_ncimui_pane_g

0x9c3a,	// (0x000a513c) main_welc_pane_g1_ParamLimits

0x9c3a,	// (0x000a513c) main_welc_pane_g1

0x9c46,	// (0x000a5148) main_welc_pane_g2_ParamLimits

0x9c46,	// (0x000a5148) main_welc_pane_g2

0x0001,

0xff56,	// (0x000ab458) main_welc_pane_g_ParamLimits

0xff56,	// (0x000ab458) main_welc_pane_g

0xa710,	// (0x000a5c12) listscroll_mce_pane_ParamLimits

0x38d3,	// (0x0009edd5) wait_bar_pane_cp10

0xc83d,	// (0x000a7d3f) main_cale_day_pane_ParamLimits

0xc83d,	// (0x000a7d3f) main_cale_week_pane_ParamLimits

0xa710,	// (0x000a5c12) main_messa_pane_ParamLimits

0x5973,	// (0x000a0e75) main_clock2_btn_pane_ParamLimits

0x5973,	// (0x000a0e75) main_clock2_btn_pane

0xd05a,	// (0x000a855c) main_clock2_btn_pane_cp01_ParamLimits

0xd05a,	// (0x000a855c) main_clock2_btn_pane_cp01

0xe9d4,	// (0x000a9ed6) list_cale_mrui_pane_ParamLimits

0xee0c,	// (0x000aa30e) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000ab3b2) main_cf0_pane_g

0x9866,	// (0x000a4d68) area_left_week_number_pane_ParamLimits

0x9879,	// (0x000a4d7b) area_top_day_name_pane_ParamLimits

0x9887,	// (0x000a4d89) frame_month_view_pane_ParamLimits

0xef48,	// (0x000aa44a) grid_month_view_pane_ParamLimits

0xef56,	// (0x000aa458) frm_month_g1_ParamLimits

0x9905,	// (0x000a4e07) frm_month_g2_ParamLimits

0x9916,	// (0x000a4e18) frm_month_g3_ParamLimits

0x9927,	// (0x000a4e29) frm_month_g4_ParamLimits

0x9938,	// (0x000a4e3a) frm_month_g5_ParamLimits

0x9949,	// (0x000a4e4b) frm_month_g6_ParamLimits

0x995c,	// (0x000a4e5e) frm_month_g7_ParamLimits

0xef63,	// (0x000aa465) frm_month_g8_ParamLimits

0x996f,	// (0x000a4e71) frm_month_g9_ParamLimits

0x997c,	// (0x000a4e7e) frm_month_g10_ParamLimits

0x9989,	// (0x000a4e8b) frm_month_g11_ParamLimits

0x9996,	// (0x000a4e98) frm_month_g12_ParamLimits

0x99a3,	// (0x000a4ea5) frm_month_g13_ParamLimits

0x99b2,	// (0x000a4eb4) frm_month_g14_ParamLimits

0x99c1,	// (0x000a4ec3) frm_month_g15_ParamLimits

0x99d0,	// (0x000a4ed2) frm_month_g16_ParamLimits

0xff01,	// (0x000ab403) frm_month_g_ParamLimits

0xef70,	// (0x000aa472) cell_top_day_name_pane_t1_ParamLimits

0x99df,	// (0x000a4ee1) cell_area_left_week_number_pane_g1_ParamLimits

0x99ee,	// (0x000a4ef0) cell_area_left_week_number_pane_t1_ParamLimits

0xced2,	// (0x000a83d4) cell_month_view_pane_g1_ParamLimits

0x9a04,	// (0x000a4f06) cell_month_view_pane_t1_ParamLimits

0xa708,	// (0x000a5c0a) main_clock2_btn_pane_g1

0xf0c5,	// (0x000aa5c7) main_clock2_btn_pane_t1

0xa26e,	// (0x000a5770) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x000a9c7d) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x000a9c89) main_sp_fs_email_pane_g2_ParamLimits

0xfce4,	// (0x000ab1e6) main_sp_fs_email_pane_g_ParamLimits

0xeadf,	// (0x000a9fe1) list_recal_day_pane_ParamLimits

0xeaf0,	// (0x000a9ff2) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
