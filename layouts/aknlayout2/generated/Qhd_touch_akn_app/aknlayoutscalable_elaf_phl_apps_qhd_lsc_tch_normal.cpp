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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000d84e };

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
0x0d69,	// (0x0000e5b7) Screen

0x0d75,	// (0x0000e5c3) application_window

0x0db1,	// (0x0000e5ff) area_bottom_pane_ParamLimits

0x0db1,	// (0x0000e5ff) area_bottom_pane

0x0dea,	// (0x0000e638) area_top_pane_ParamLimits

0x0dea,	// (0x0000e638) area_top_pane

0x93d4,	// (0x00016c22) call_video_uplink_pane_ParamLimits

0x93d4,	// (0x00016c22) call_video_uplink_pane

0x0e5f,	// (0x0000e6ad) main_pane_ParamLimits

0x0e5f,	// (0x0000e6ad) main_pane

0xbe04,	// (0x00019652) context_pane

0x3eaa,	// (0x000116f8) navi_pane

0x3ed2,	// (0x00011720) popup_cale_events_window_ParamLimits

0x3ed2,	// (0x00011720) popup_cale_events_window

0xbe17,	// (0x00019665) popup_mup_playback_window

0x3eea,	// (0x00011738) signal_pane

0x9b67,	// (0x000173b5) main_browser_pane

0xa8fa,	// (0x00018148) main_burst_pane

0x3bfc,	// (0x0001144a) main_calc_pane

0xa8fa,	// (0x00018148) main_cale_day_pane

0x9b67,	// (0x000173b5) main_cale_month_pane

0xa8fa,	// (0x00018148) main_cale_week_pane

0xa8fa,	// (0x00018148) main_call_pane

0x9813,	// (0x00017061) main_call_poc_pane

0xa8fa,	// (0x00018148) main_camera_pane

0xa8fa,	// (0x00018148) main_chi_dic_pane

0xa77f,	// (0x00017fcd) main_clock_pane

0x9813,	// (0x00017061) main_fmradio_pane

0xa8fa,	// (0x00018148) main_graph_messa_pane

0x9813,	// (0x00017061) main_help_pane

0x9b67,	// (0x000173b5) main_im_pane

0x9a6e,	// (0x000172bc) main_image_pane_ParamLimits

0x9a6e,	// (0x000172bc) main_image_pane

0x9813,	// (0x00017061) main_location2_pane

0xa8fa,	// (0x00018148) main_location_pane

0x9813,	// (0x00017061) main_messa_pane

0x9813,	// (0x00017061) main_mp2_pane

0xa8fa,	// (0x00018148) main_mp_pane

0x9813,	// (0x00017061) main_msg_pane

0x9813,	// (0x00017061) main_mup_eq_pane

0x9813,	// (0x00017061) main_mup_pane

0xa8fa,	// (0x00018148) main_notes_pane

0x9813,	// (0x00017061) main_pec_pane

0x9813,	// (0x00017061) main_phob_pane

0x9813,	// (0x00017061) main_pinb_pane

0x9813,	// (0x00017061) main_postcard_pane

0x9813,	// (0x00017061) main_qdial_pane

0xa8fa,	// (0x00018148) main_skin_pane

0x9813,	// (0x00017061) main_smil2_pane

0xa8fa,	// (0x00018148) main_smil_pane

0xa8fa,	// (0x00018148) main_video_pane

0xa8fa,	// (0x00018148) main_video_tele_pane

0x9a6e,	// (0x000172bc) main_viewer_pane_ParamLimits

0x9a6e,	// (0x000172bc) main_viewer_pane

0xa8fa,	// (0x00018148) main_vorec_pane

0x3c50,	// (0x0001149e) popup_blid_sat_info_window_ParamLimits

0x3c50,	// (0x0001149e) popup_blid_sat_info_window

0x3ca8,	// (0x000114f6) popup_dyc_status_message_window_ParamLimits

0x3ca8,	// (0x000114f6) popup_dyc_status_message_window

0x3cc2,	// (0x00011510) popup_grid_large_graphic_window_ParamLimits

0x3cc2,	// (0x00011510) popup_grid_large_graphic_window

0x3d7e,	// (0x000115cc) popup_loc_request_window_ParamLimits

0x3d7e,	// (0x000115cc) popup_loc_request_window

0x3e82,	// (0x000116d0) popup_wml_address_window_ParamLimits

0x3e82,	// (0x000116d0) popup_wml_address_window

0x3a36,	// (0x00011284) call_muted_g1

0x36eb,	// (0x00010f39) popup_call_audio_conf_window_ParamLimits

0x36eb,	// (0x00010f39) popup_call_audio_conf_window

0x3a4a,	// (0x00011298) popup_call_audio_first_window_ParamLimits

0x3a4a,	// (0x00011298) popup_call_audio_first_window

0x3ac0,	// (0x0001130e) popup_call_audio_in_window_ParamLimits

0x3ac0,	// (0x0001130e) popup_call_audio_in_window

0x3afc,	// (0x0001134a) popup_call_audio_out_window_ParamLimits

0x3afc,	// (0x0001134a) popup_call_audio_out_window

0x3b36,	// (0x00011384) popup_call_audio_second_window_ParamLimits

0x3b36,	// (0x00011384) popup_call_audio_second_window

0x3b8c,	// (0x000113da) popup_call_audio_wait_window_ParamLimits

0x3b8c,	// (0x000113da) popup_call_audio_wait_window

0x3bc1,	// (0x0001140f) popup_number_entry_window_ParamLimits

0x3bc1,	// (0x0001140f) popup_number_entry_window

0x9400,	// (0x00016c4e) bg_popup_call_pane_cp05_ParamLimits

0x9400,	// (0x00016c4e) bg_popup_call_pane_cp05

0x9420,	// (0x00016c6e) popup_number_entry_window_t1

0x9433,	// (0x00016c81) popup_number_entry_window_t2

0x9445,	// (0x00016c93) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001c93a) popup_number_entry_window_t

0x9457,	// (0x00016ca5) text_title_cp2

0x946a,	// (0x00016cb8) bg_popup_call_pane_cp_ParamLimits

0x946a,	// (0x00016cb8) bg_popup_call_pane_cp

0x9478,	// (0x00016cc6) call_thumbnail_pane

0x9480,	// (0x00016cce) popup_call_audio_in_window_g1_ParamLimits

0x9480,	// (0x00016cce) popup_call_audio_in_window_g1

0x948c,	// (0x00016cda) popup_call_audio_in_window_g2_ParamLimits

0x948c,	// (0x00016cda) popup_call_audio_in_window_g2

0x9498,	// (0x00016ce6) popup_call_audio_in_window_g3_ParamLimits

0x9498,	// (0x00016ce6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001c943) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001c943) popup_call_audio_in_window_g

0x94a4,	// (0x00016cf2) popup_call_audio_in_window_t1_ParamLimits

0x94a4,	// (0x00016cf2) popup_call_audio_in_window_t1

0x94c0,	// (0x00016d0e) popup_call_audio_in_window_t2_ParamLimits

0x94c0,	// (0x00016d0e) popup_call_audio_in_window_t2

0x94dc,	// (0x00016d2a) popup_call_audio_in_window_t3_ParamLimits

0x94dc,	// (0x00016d2a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001c94a) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001c94a) popup_call_audio_in_window_t

0x946a,	// (0x00016cb8) bg_popup_call_pane_cp01_ParamLimits

0x946a,	// (0x00016cb8) bg_popup_call_pane_cp01

0x9478,	// (0x00016cc6) call_thumbnail_pane_cp02

0x94ef,	// (0x00016d3d) call_type_pane_cp022

0x94f7,	// (0x00016d45) popup_call_audio_out_window_g1_ParamLimits

0x94f7,	// (0x00016d45) popup_call_audio_out_window_g1

0x9509,	// (0x00016d57) popup_call_audio_out_window_g2_ParamLimits

0x9509,	// (0x00016d57) popup_call_audio_out_window_g2

0x9515,	// (0x00016d63) popup_call_audio_out_window_g3_ParamLimits

0x9515,	// (0x00016d63) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001c951) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001c951) popup_call_audio_out_window_g

0x9527,	// (0x00016d75) popup_call_audio_out_window_t1_ParamLimits

0x9527,	// (0x00016d75) popup_call_audio_out_window_t1

0x953f,	// (0x00016d8d) popup_call_audio_out_window_t2_ParamLimits

0x953f,	// (0x00016d8d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001c958) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001c958) popup_call_audio_out_window_t

0x9554,	// (0x00016da2) bg_popup_call_pane_ParamLimits

0x9554,	// (0x00016da2) bg_popup_call_pane

0x1015,	// (0x0000e863) call_thumbnail_pane_cp_ParamLimits

0x1015,	// (0x0000e863) call_thumbnail_pane_cp

0x95d8,	// (0x00016e26) call_type_pane_cp01_ParamLimits

0x95d8,	// (0x00016e26) call_type_pane_cp01

0x961c,	// (0x00016e6a) popup_call_audio_first_window_g1_ParamLimits

0x961c,	// (0x00016e6a) popup_call_audio_first_window_g1

0x9668,	// (0x00016eb6) popup_call_audio_first_window_g2_ParamLimits

0x9668,	// (0x00016eb6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001c95d) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001c95d) popup_call_audio_first_window_g

0x96ac,	// (0x00016efa) popup_call_audio_first_window_t1_ParamLimits

0x96ac,	// (0x00016efa) popup_call_audio_first_window_t1

0x9758,	// (0x00016fa6) popup_call_audio_first_window_t4_ParamLimits

0x9758,	// (0x00016fa6) popup_call_audio_first_window_t4

0x97e4,	// (0x00017032) popup_call_audio_first_window_t5_ParamLimits

0x97e4,	// (0x00017032) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001c962) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001c962) popup_call_audio_first_window_t

0x9813,	// (0x00017061) bg_popup_call_pane_cp02

0x981d,	// (0x0001706b) call_type_pane_cp023

0x9825,	// (0x00017073) popup_call_audio_wait_window_g1

0x982d,	// (0x0001707b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001c969) popup_call_audio_wait_window_g

0x9835,	// (0x00017083) popup_call_audio_wait_window_t3

0x9843,	// (0x00017091) bg_popup_call_pane_cp03_ParamLimits

0x9843,	// (0x00017091) bg_popup_call_pane_cp03

0x98a3,	// (0x000170f1) call_thumbnail_pane_cp011_ParamLimits

0x98a3,	// (0x000170f1) call_thumbnail_pane_cp011

0x98af,	// (0x000170fd) call_type_pane_cp034_ParamLimits

0x98af,	// (0x000170fd) call_type_pane_cp034

0x98eb,	// (0x00017139) popup_call_audio_second_window_g1_ParamLimits

0x98eb,	// (0x00017139) popup_call_audio_second_window_g1

0x9927,	// (0x00017175) popup_call_audio_second_window_g2_ParamLimits

0x9927,	// (0x00017175) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001c96e) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001c96e) popup_call_audio_second_window_g

0x9963,	// (0x000171b1) popup_call_audio_second_window_t1_ParamLimits

0x9963,	// (0x000171b1) popup_call_audio_second_window_t1

0x99e4,	// (0x00017232) popup_call_audio_second_window_t2_ParamLimits

0x99e4,	// (0x00017232) popup_call_audio_second_window_t2

0x9a1a,	// (0x00017268) popup_call_audio_second_window_t3_ParamLimits

0x9a1a,	// (0x00017268) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001c973) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001c973) popup_call_audio_second_window_t

0x9813,	// (0x00017061) bg_popup_call_pane_cp04

0x9a50,	// (0x0001729e) list_conf_pane

0x9a58,	// (0x000172a6) popup_call_audio_conf_window_t1

0x9a66,	// (0x000172b4) call_thumbnail_pane_g1

0x9a6e,	// (0x000172bc) bg_pinb_pane_ParamLimits

0x9a6e,	// (0x000172bc) bg_pinb_pane

0x9a7c,	// (0x000172ca) find_pinb_pane

0x9a85,	// (0x000172d3) listscroll_pinb_pane_ParamLimits

0x9a85,	// (0x000172d3) listscroll_pinb_pane

0x9a94,	// (0x000172e2) pinb_bg_pane_g1

0x1039,	// (0x0000e887) pinb_bg_pane_g2

0x1045,	// (0x0000e893) pinb_bg_pane_g3

0x1051,	// (0x0000e89f) pinb_bg_pane_g4

0x105d,	// (0x0000e8ab) pinb_bg_pane_g5

0x1069,	// (0x0000e8b7) pinb_bg_pane_g6

0x1074,	// (0x0000e8c2) pinb_bg_pane_g7

0x107f,	// (0x0000e8cd) pinb_bg_pane_g8

0x108a,	// (0x0000e8d8) pinb_bg_pane_g9

0x1094,	// (0x0000e8e2) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001c97a) pinb_bg_pane_g

0x10b1,	// (0x0000e8ff) grid_pinb_pane

0x10ba,	// (0x0000e908) list_pinb_pane

0x10c3,	// (0x0000e911) scroll_pane_cp01_ParamLimits

0x10c3,	// (0x0000e911) scroll_pane_cp01

0x9a9e,	// (0x000172ec) find_pinb_pane_g1_ParamLimits

0x9a9e,	// (0x000172ec) find_pinb_pane_g1

0x9ab6,	// (0x00017304) find_pinb_pane_t1

0x9ac8,	// (0x00017316) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001c994) find_pinb_pane_t

0x9add,	// (0x0001732b) input_focus_pane_cp01_ParamLimits

0x9add,	// (0x0001732b) input_focus_pane_cp01

0x10d5,	// (0x0000e923) cell_pinb_pane_ParamLimits

0x10d5,	// (0x0000e923) cell_pinb_pane

0x10fe,	// (0x0000e94c) cell_pinb_pane_g1_ParamLimits

0x10fe,	// (0x0000e94c) cell_pinb_pane_g1

0x110e,	// (0x0000e95c) cell_pinb_pane_g2_ParamLimits

0x110e,	// (0x0000e95c) cell_pinb_pane_g2

0x9ae9,	// (0x00017337) cell_pinb_pane_g3_ParamLimits

0x9ae9,	// (0x00017337) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001c999) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001c999) cell_pinb_pane_g

0x9813,	// (0x00017061) grid_highlight_pane_cp01

0x111a,	// (0x0000e968) list_pinb_item_pane_ParamLimits

0x111a,	// (0x0000e968) list_pinb_item_pane

0x9813,	// (0x00017061) list_highlight_pane_cp02

0x112c,	// (0x0000e97a) list_pinb_item_pane_g1_ParamLimits

0x112c,	// (0x0000e97a) list_pinb_item_pane_g1

0x9af5,	// (0x00017343) list_pinb_item_pane_g2_ParamLimits

0x9af5,	// (0x00017343) list_pinb_item_pane_g2

0x1139,	// (0x0000e987) list_pinb_item_pane_g3_ParamLimits

0x1139,	// (0x0000e987) list_pinb_item_pane_g3

0x114a,	// (0x0000e998) list_pinb_item_pane_g4_ParamLimits

0x114a,	// (0x0000e998) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001c9a0) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001c9a0) list_pinb_item_pane_g

0x1156,	// (0x0000e9a4) list_pinb_item_pane_t1_ParamLimits

0x1156,	// (0x0000e9a4) list_pinb_item_pane_t1

0x118b,	// (0x0000e9d9) calc_display_pane

0x11b3,	// (0x0000ea01) calc_paper_pane

0x11d6,	// (0x0000ea24) grid_calc_pane

0x9813,	// (0x00017061) bg_list_pane_cp01

0x1200,	// (0x0000ea4e) clock_g1

0x1208,	// (0x0000ea56) clock_g2

0x0001,

0xf15b,	// (0x0001c9a9) clock_g

0x1210,	// (0x0000ea5e) clock_t1_ParamLimits

0x1210,	// (0x0000ea5e) clock_t1

0x1225,	// (0x0000ea73) clock_t2_ParamLimits

0x1225,	// (0x0000ea73) clock_t2

0x1237,	// (0x0000ea85) clock_t3_ParamLimits

0x1237,	// (0x0000ea85) clock_t3

0x1249,	// (0x0000ea97) clock_t4_ParamLimits

0x1249,	// (0x0000ea97) clock_t4

0x125b,	// (0x0000eaa9) clock_t5_ParamLimits

0x125b,	// (0x0000eaa9) clock_t5

0x1270,	// (0x0000eabe) clock_t6_ParamLimits

0x1270,	// (0x0000eabe) clock_t6

0x1282,	// (0x0000ead0) clock_t7_ParamLimits

0x1282,	// (0x0000ead0) clock_t7

0x1294,	// (0x0000eae2) clock_t8_ParamLimits

0x1294,	// (0x0000eae2) clock_t8

0x12a8,	// (0x0000eaf6) clock_t9_ParamLimits

0x12a8,	// (0x0000eaf6) clock_t9

0x0008,

0xf160,	// (0x0001c9ae) clock_t_ParamLimits

0xf160,	// (0x0001c9ae) clock_t

0x9b09,	// (0x00017357) popup_clock_analogue_window_cp02

0x9b09,	// (0x00017357) popup_clock_digital_window_cp01

0x9b11,	// (0x0001735f) listscroll_help_pane

0x9813,	// (0x00017061) phob_pre_status_pane

0x9b1b,	// (0x00017369) grid_qdial_pane

0x9813,	// (0x00017061) listscroll_mce_pane

0x9b25,	// (0x00017373) bg_notes_pane

0x9b2f,	// (0x0001737d) list_notes_pane

0x12bc,	// (0x0000eb0a) scroll_pane_cp06

0x9b39,	// (0x00017387) bg_calc_paper_pane

0x9b4d,	// (0x0001739b) list_calc_pane

0x9b67,	// (0x000173b5) bg_calc_display_pane

0x12c7,	// (0x0000eb15) calc_display_pane_t1

0x12d9,	// (0x0000eb27) calc_display_pane_t2

0x9b73,	// (0x000173c1) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001c9c1) calc_display_pane_t

0x12eb,	// (0x0000eb39) cell_calc_pane_ParamLimits

0x12eb,	// (0x0000eb39) cell_calc_pane

0x9b85,	// (0x000173d3) bg_calc_paper_pane_g1

0x9b91,	// (0x000173df) bg_calc_paper_pane_g2

0x9b9d,	// (0x000173eb) bg_calc_paper_pane_g3

0x9ba9,	// (0x000173f7) bg_calc_paper_pane_g4

0x9bb5,	// (0x00017403) bg_calc_paper_pane_g5

0x1320,	// (0x0000eb6e) bg_calc_paper_pane_g6

0x132f,	// (0x0000eb7d) bg_calc_paper_pane_g7

0x133e,	// (0x0000eb8c) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001c9c8) bg_calc_paper_pane_g

0x1351,	// (0x0000eb9f) calc_bg_paper_pane_g9

0x1364,	// (0x0000ebb2) list_calc_item_pane_ParamLimits

0x1364,	// (0x0000ebb2) list_calc_item_pane

0x9bc1,	// (0x0001740f) list_calc_item_pane_g1

0x9bce,	// (0x0001741c) list_calc_item_pane_t1_ParamLimits

0x9bce,	// (0x0001741c) list_calc_item_pane_t1

0x1377,	// (0x0000ebc5) list_calc_item_pane_t2_ParamLimits

0x1377,	// (0x0000ebc5) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001c9d9) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001c9d9) list_calc_item_pane_t

0x9be0,	// (0x0001742e) cell_calc_pane_g1

0x9bea,	// (0x00017438) grid_highlight_pane_cp02

0x13a9,	// (0x0000ebf7) bg_calc_display_pane_g1

0x13b2,	// (0x0000ec00) bg_calc_display_pane_g2

0x13bc,	// (0x0000ec0a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001c9e3) bg_calc_display_pane_g

0x13c5,	// (0x0000ec13) cell_qdial_pane_ParamLimits

0x13c5,	// (0x0000ec13) cell_qdial_pane

0x13d9,	// (0x0000ec27) cell_qdial_pane_g1_ParamLimits

0x13d9,	// (0x0000ec27) cell_qdial_pane_g1

0x13ef,	// (0x0000ec3d) cell_qdial_pane_g2_ParamLimits

0x13ef,	// (0x0000ec3d) cell_qdial_pane_g2

0x9c0c,	// (0x0001745a) cell_qdial_pane_g3_ParamLimits

0x9c0c,	// (0x0001745a) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001c9ea) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001c9ea) cell_qdial_pane_g

0x1416,	// (0x0000ec64) cell_qdial_pane_t1_ParamLimits

0x1416,	// (0x0000ec64) cell_qdial_pane_t1

0x142e,	// (0x0000ec7c) cell_qdial_pane_t2_ParamLimits

0x142e,	// (0x0000ec7c) cell_qdial_pane_t2

0x1441,	// (0x0000ec8f) cell_qdial_pane_t3_ParamLimits

0x1441,	// (0x0000ec8f) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001c9f3) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001c9f3) cell_qdial_pane_t

0x9813,	// (0x00017061) grid_highlight_pane_cp04

0x9c18,	// (0x00017466) thumbnail_qdial_pane_ParamLimits

0x9c18,	// (0x00017466) thumbnail_qdial_pane

0x9c74,	// (0x000174c2) list_help_pane

0x9c7d,	// (0x000174cb) scroll_pane_cp02

0x1454,	// (0x0000eca2) help_list_pane_t1_ParamLimits

0x1454,	// (0x0000eca2) help_list_pane_t1

0x9c86,	// (0x000174d4) bg_notes_pane_g2

0x9c8e,	// (0x000174dc) bg_notes_pane_g3

0x9c96,	// (0x000174e4) notes_bg_pane_g1

0x9c9e,	// (0x000174ec) notes_bg_pane_g4

0x9ca6,	// (0x000174f4) notes_bg_pane_g5

0x9cae,	// (0x000174fc) notes_bg_pane_g6

0x9cb6,	// (0x00017504) notes_bg_pane_g7

0x9cbe,	// (0x0001750c) notes_bg_pane_g8

0x9cc6,	// (0x00017514) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001ca11) notes_bg_pane_g

0x1471,	// (0x0000ecbf) list_notes_text_pane_ParamLimits

0x1471,	// (0x0000ecbf) list_notes_text_pane

0x9cce,	// (0x0001751c) list_notes_text_pane_g1

0x1486,	// (0x0000ecd4) list_notes_text_pane_t1

0x9b67,	// (0x000173b5) listscroll_cale_week_pane

0x14b1,	// (0x0000ecff) bg_cale_heading_pane

0x9ce8,	// (0x00017536) bg_cale_pane_cp01

0x14c5,	// (0x0000ed13) cale_week_corner_pane

0x14db,	// (0x0000ed29) cale_week_day_heading_pane

0x14ef,	// (0x0000ed3d) cale_week_scroll_pane_g1

0x1500,	// (0x0000ed4e) cale_week_scroll_pane_g2

0x1511,	// (0x0000ed5f) cale_week_scroll_pane_g3

0x1522,	// (0x0000ed70) cale_week_scroll_pane_g4

0x1533,	// (0x0000ed81) cale_week_scroll_pane_g5

0x1546,	// (0x0000ed94) cale_week_scroll_pane_g6

0x1559,	// (0x0000eda7) cale_week_scroll_pane_g7

0x156c,	// (0x0000edba) cale_week_scroll_pane_g8

0x157f,	// (0x0000edcd) cale_week_scroll_pane_g9

0x1590,	// (0x0000edde) cale_week_scroll_pane_g10

0x15a1,	// (0x0000edef) cale_week_scroll_pane_g11

0x15b2,	// (0x0000ee00) cale_week_scroll_pane_g12

0x15c3,	// (0x0000ee11) cale_week_scroll_pane_g13

0x15d4,	// (0x0000ee22) cale_week_scroll_pane_g14

0x15e5,	// (0x0000ee33) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001ca20) cale_week_scroll_pane_g

0x15f6,	// (0x0000ee44) cale_week_time_pane

0x1609,	// (0x0000ee57) grid_cale_week_pane

0x161e,	// (0x0000ee6c) scroll_pane_cp08

0x1638,	// (0x0000ee86) cell_cale_week_pane_ParamLimits

0x1638,	// (0x0000ee86) cell_cale_week_pane

0x1678,	// (0x0000eec6) cale_week_day_heading_pane_t1

0x16a5,	// (0x0000eef3) cale_week_day_heading_pane_t2

0x16d2,	// (0x0000ef20) cale_week_day_heading_pane_t3

0x16ff,	// (0x0000ef4d) cale_week_day_heading_pane_t4

0x172c,	// (0x0000ef7a) cale_week_day_heading_pane_t5

0x1759,	// (0x0000efa7) cale_week_day_heading_pane_t6

0x1788,	// (0x0000efd6) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001ca3f) cale_week_day_heading_pane_t

0x9d13,	// (0x00017561) bg_cale_side_pane

0x17b5,	// (0x0000f003) cale_week_time_pane_t1

0x17cd,	// (0x0000f01b) cale_week_time_pane_t2

0x17e5,	// (0x0000f033) cale_week_time_pane_t3

0x17fd,	// (0x0000f04b) cale_week_time_pane_t4

0x1815,	// (0x0000f063) cale_week_time_pane_t5

0x182d,	// (0x0000f07b) cale_week_time_pane_t6

0x1845,	// (0x0000f093) cale_week_time_pane_t7

0x185d,	// (0x0000f0ab) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001ca4e) cale_week_time_pane_t

0x1875,	// (0x0000f0c3) cell_cale_week_pane_g2

0x188e,	// (0x0000f0dc) cell_cale_week_pane_g3_ParamLimits

0x188e,	// (0x0000f0dc) cell_cale_week_pane_g3

0x9d21,	// (0x0001756f) grid_highlight_pane_cp07

0x9d29,	// (0x00017577) listscroll_gms_pane

0x9d33,	// (0x00017581) grid_gms_pane

0x9d3c,	// (0x0001758a) listscroll_gms_pane_g1

0x9d44,	// (0x00017592) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001ca5f) listscroll_gms_pane_g

0x18a6,	// (0x0000f0f4) scroll_pane_cp010

0x18b1,	// (0x0000f0ff) cell_gms_pane_ParamLimits

0x18b1,	// (0x0000f0ff) cell_gms_pane

0x18c4,	// (0x0000f112) cell_gms_pane_g1

0x9d4c,	// (0x0001759a) cell_gms_pane_g2

0x9d54,	// (0x000175a2) cell_gms_pane_g3

0x9d5d,	// (0x000175ab) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001ca64) cell_gms_pane_g

0x9d66,	// (0x000175b4) grid_highlight_pane_cp09

0x39e0,	// (0x0001122e) phob_pre_status_pane_g1

0x39e8,	// (0x00011236) phob_pre_status_pane_g2

0x39f0,	// (0x0001123e) phob_pre_status_pane_g3

0x39f8,	// (0x00011246) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001ce53) phob_pre_status_pane_g

0x3a08,	// (0x00011256) phob_pre_status_pane_t1

0x3a16,	// (0x00011264) phob_pre_status_pane_t2

0x3a26,	// (0x00011274) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001ce5e) phob_pre_status_pane_t

0x9813,	// (0x00017061) bg_list_pane_cp05

0x18d4,	// (0x0000f122) grid_vorec_pane

0x9d6e,	// (0x000175bc) vorec_t1

0x9d7c,	// (0x000175ca) vorec_t2

0x9d8a,	// (0x000175d8) vorec_t3

0x9d98,	// (0x000175e6) vorec_t4

0x9da6,	// (0x000175f4) vorec_t5

0x9db4,	// (0x00017602) vorec_t6

0x0006,

0xf21f,	// (0x0001ca6d) vorec_t

0x9dd0,	// (0x0001761e) wait_bar_pane_cp01

0x18dc,	// (0x0000f12a) cell_vorec_pane_ParamLimits

0x18dc,	// (0x0000f12a) cell_vorec_pane

0x9dd8,	// (0x00017626) cell_vorec_pane_g1

0x9813,	// (0x00017061) grid_highlight_pane_cp05

0x1907,	// (0x0000f155) cams_zoom_pane

0x1916,	// (0x0000f164) image_vga_pane

0x1930,	// (0x0000f17e) main_camera_pane_g1

0x1942,	// (0x0000f190) main_camera_pane_g2

0x1952,	// (0x0000f1a0) main_camera_pane_g3

0x1962,	// (0x0000f1b0) main_camera_pane_g4

0x1972,	// (0x0000f1c0) main_camera_pane_g5

0x1982,	// (0x0000f1d0) main_camera_pane_g6

0x1994,	// (0x0000f1e2) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001ca7c) main_camera_pane_g

0x19a4,	// (0x0000f1f2) main_camera_pane_t1

0x19ba,	// (0x0000f208) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001ca8d) main_camera_pane_t

0x19f4,	// (0x0000f242) cams_zoom_pane_cp_ParamLimits

0x19f4,	// (0x0000f242) cams_zoom_pane_cp

0x1a1c,	// (0x0000f26a) image_cif_pane_ParamLimits

0x1a1c,	// (0x0000f26a) image_cif_pane

0x1a57,	// (0x0000f2a5) image_subqcif_pane

0x1a5f,	// (0x0000f2ad) main_video_pane_g1_ParamLimits

0x1a5f,	// (0x0000f2ad) main_video_pane_g1

0x1a83,	// (0x0000f2d1) main_video_pane_g2_ParamLimits

0x1a83,	// (0x0000f2d1) main_video_pane_g2

0x1ab7,	// (0x0000f305) main_video_pane_g3_ParamLimits

0x1ab7,	// (0x0000f305) main_video_pane_g3

0x1ae5,	// (0x0000f333) main_video_pane_g4_ParamLimits

0x1ae5,	// (0x0000f333) main_video_pane_g4

0x1b13,	// (0x0000f361) main_video_pane_g5_ParamLimits

0x1b13,	// (0x0000f361) main_video_pane_g5

0x9dee,	// (0x0001763c) main_video_pane_g6_ParamLimits

0x9dee,	// (0x0001763c) main_video_pane_g6

0x0006,

0xf244,	// (0x0001ca92) main_video_pane_g_ParamLimits

0xf244,	// (0x0001ca92) main_video_pane_g

0x1b40,	// (0x0000f38e) main_video_pane_t1_ParamLimits

0x1b40,	// (0x0000f38e) main_video_pane_t1

0x9e08,	// (0x00017656) cams_zoom_pane_g1

0x9e11,	// (0x0001765f) cams_zoom_pane_g2

0x9e1a,	// (0x00017668) cams_zoom_pane_g3

0x9e23,	// (0x00017671) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001caa1) cams_zoom_pane_g

0x1b9d,	// (0x0000f3eb) grid_cams_pane

0x1bb7,	// (0x0000f405) linegrid_cams_pane

0x1bcb,	// (0x0000f419) cell_cams_pane_ParamLimits

0x1bcb,	// (0x0000f419) cell_cams_pane

0x9e2c,	// (0x0001767a) cams_burst_image_pane

0x9e34,	// (0x00017682) cell_cams_pane_g1

0x9813,	// (0x00017061) grid_highlight_pane_cp03

0x9be0,	// (0x0001742e) mp_bg_pane_g1

0x9813,	// (0x00017061) bg_list_pane_cp03

0xbcdc,	// (0x0001952a) bg_mp_pane

0xbce4,	// (0x00019532) grid_mp_pane

0xbcec,	// (0x0001953a) media_player_g1

0xbcf4,	// (0x00019542) media_player_t1

0xbd02,	// (0x00019550) media_player_t2

0xbd10,	// (0x0001955e) media_player_t3

0xbd1e,	// (0x0001956c) media_player_t4

0xbd2c,	// (0x0001957a) media_player_t5

0xbd3a,	// (0x00019588) media_player_t6

0xbd48,	// (0x00019596) media_player_t7

0x0006,

0xf5ef,	// (0x0001ce3d) media_player_t

0xbd56,	// (0x000195a4) wait_bar_pane_cp02

0xf5d4,	// (0x0001ce22) main_usb_pane_t

0x39d7,	// (0x00011225) cell_mp_pane

0x9be0,	// (0x0001742e) cell_mp_pane_g1

0x9813,	// (0x00017061) grid_highlight_pane_cp06

0x9edc,	// (0x0001772a) grid_skin_colour_pane

0x9ee4,	// (0x00017732) list_highlight_pane_cp03

0x1c3d,	// (0x0000f48b) skin_g1

0x9eec,	// (0x0001773a) skin_t1

0x9efb,	// (0x00017749) skin_t2

0x0001,

0xf288,	// (0x0001cad6) skin_t

0x1c45,	// (0x0000f493) cell_skin_colour_pane_ParamLimits

0x1c45,	// (0x0000f493) cell_skin_colour_pane

0x9f09,	// (0x00017757) cell_skin_colour_pane_g1

0x1cbc,	// (0x0000f50a) call_video_g1_ParamLimits

0x1cbc,	// (0x0000f50a) call_video_g1

0x1cd8,	// (0x0000f526) call_video_g2_ParamLimits

0x1cd8,	// (0x0000f526) call_video_g2

0x0001,

0xf28d,	// (0x0001cadb) call_video_g_ParamLimits

0xf28d,	// (0x0001cadb) call_video_g

0x1d2a,	// (0x0000f578) call_video_uplink_pane_cp1_ParamLimits

0x1d2a,	// (0x0000f578) call_video_uplink_pane_cp1

0x9f1b,	// (0x00017769) call_video_uplink_pane_cp2

0x1dc9,	// (0x0000f617) video_down_crop_pane_ParamLimits

0x1dc9,	// (0x0000f617) video_down_crop_pane

0x1ec0,	// (0x0000f70e) video_down_pane_ParamLimits

0x1ec0,	// (0x0000f70e) video_down_pane

0x9f23,	// (0x00017771) video_down_subqcif_pane_ParamLimits

0x9f23,	// (0x00017771) video_down_subqcif_pane

0x9f3b,	// (0x00017789) video_down_subqcif_pane_cp_ParamLimits

0x9f3b,	// (0x00017789) video_down_subqcif_pane_cp

0x9f5f,	// (0x000177ad) im_reading_pane_ParamLimits

0x9f5f,	// (0x000177ad) im_reading_pane

0x1fce,	// (0x0000f81c) im_writing_pane_ParamLimits

0x1fce,	// (0x0000f81c) im_writing_pane

0x1fe4,	// (0x0000f832) im_reading_pane_t1

0x9f79,	// (0x000177c7) list_im_pane

0x9f8a,	// (0x000177d8) scroll_pane_cp07

0x201d,	// (0x0000f86b) im_writing_pane_t1_ParamLimits

0x201d,	// (0x0000f86b) im_writing_pane_t1

0x9fa3,	// (0x000177f1) im_writing_pane_t2_ParamLimits

0x9fa3,	// (0x000177f1) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cae5) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cae5) im_writing_pane_t

0x9813,	// (0x00017061) input_focus_pane_cp04

0x9813,	// (0x00017061) input_focus_pane_cp05

0x2032,	// (0x0000f880) list_im_single_pane_ParamLimits

0x2032,	// (0x0000f880) list_im_single_pane

0x2046,	// (0x0000f894) list_single_im_pane_t1

0x3997,	// (0x000111e5) blid_accuracy_pane

0x399f,	// (0x000111ed) blid_compass_pane

0x39a9,	// (0x000111f7) main_location_t1

0x39b9,	// (0x00011207) main_location_t2

0x39c9,	// (0x00011217) main_location_t3

0x0002,

0xf5fe,	// (0x0001ce4c) main_location_t

0x9813,	// (0x00017061) aid_levels_location

0x9be0,	// (0x0001742e) blid_accuracy_pane_g1

0x9be0,	// (0x0001742e) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001cb47) blid_accuracy_pane_g

0x9feb,	// (0x00017839) wml_content_pane

0xa029,	// (0x00017877) wml_button_pane_ParamLimits

0xa029,	// (0x00017877) wml_button_pane

0x2055,	// (0x0000f8a3) wml_list_single_large_pane_ParamLimits

0x2055,	// (0x0000f8a3) wml_list_single_large_pane

0x206a,	// (0x0000f8b8) wml_list_single_medium_pane_ParamLimits

0x206a,	// (0x0000f8b8) wml_list_single_medium_pane

0x2080,	// (0x0000f8ce) wml_list_single_small_pane_ParamLimits

0x2080,	// (0x0000f8ce) wml_list_single_small_pane

0xa03d,	// (0x0001788b) wml_selection_box_pane_ParamLimits

0xa03d,	// (0x0001788b) wml_selection_box_pane

0xa050,	// (0x0001789e) wml_list_single_pane_t1

0xa05f,	// (0x000178ad) wml_list_single_medium_pane_t1

0xa06e,	// (0x000178bc) wml_list_single_large_pane_t1

0xa07d,	// (0x000178cb) input_focus_pane_cp02_ParamLimits

0xa07d,	// (0x000178cb) input_focus_pane_cp02

0xa090,	// (0x000178de) wml_selection_box_pane_g1

0xa099,	// (0x000178e7) wml_selection_box_pane_t1_ParamLimits

0xa099,	// (0x000178e7) wml_selection_box_pane_t1

0x9a6e,	// (0x000172bc) bg_wml_button_pane_ParamLimits

0x9a6e,	// (0x000172bc) bg_wml_button_pane

0xa0b1,	// (0x000178ff) wml_button_pane_g1

0xa0b9,	// (0x00017907) wml_button_pane_t1

0xa0b1,	// (0x000178ff) wml_button_bg_pane_g1

0xa0c9,	// (0x00017917) wml_button_bg_pane_g2

0xa0d1,	// (0x0001791f) wml_button_bg_pane_g3

0xa0d9,	// (0x00017927) wml_button_bg_pane_g4

0xa0e1,	// (0x0001792f) wml_button_bg_pane_g5

0xa0e9,	// (0x00017937) wml_button_bg_pane_g6

0xa0f1,	// (0x0001793f) wml_button_bg_pane_g7

0xa0f9,	// (0x00017947) wml_button_bg_pane_g8

0xa101,	// (0x0001794f) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001caea) wml_button_bg_pane_g

0x2098,	// (0x0000f8e6) bg_list_pane_cp02

0xa109,	// (0x00017957) mce_header_pane_ParamLimits

0xa109,	// (0x00017957) mce_header_pane

0xa11f,	// (0x0001796d) mce_icon_pane

0xa11f,	// (0x0001796d) mce_image_pane

0xa128,	// (0x00017976) mce_text_pane_ParamLimits

0xa128,	// (0x00017976) mce_text_pane

0x20a0,	// (0x0000f8ee) scroll_pane_cp03

0xa021,	// (0x0001786f) scroll_pane_cp04

0xa13b,	// (0x00017989) scroll_pane_cp05_ParamLimits

0xa13b,	// (0x00017989) scroll_pane_cp05

0x20aa,	// (0x0000f8f8) mce_header_field_pane_ParamLimits

0x20aa,	// (0x0000f8f8) mce_header_field_pane

0x20c1,	// (0x0000f90f) mce_header_field_pane_2_ParamLimits

0x20c1,	// (0x0000f90f) mce_header_field_pane_2

0x20d7,	// (0x0000f925) mce_header_field_pane_3

0x20df,	// (0x0000f92d) list_single_mce_message_pane_ParamLimits

0x20df,	// (0x0000f92d) list_single_mce_message_pane

0x20f4,	// (0x0000f942) list_single_mce_smart_pane_ParamLimits

0x20f4,	// (0x0000f942) list_single_mce_smart_pane

0xa147,	// (0x00017995) input_focus_pane_cp03

0xa150,	// (0x0001799e) list_header_data_pane

0x2114,	// (0x0000f962) mce_header_field_pane_t1

0x2124,	// (0x0000f972) list_single_mce_header_pane_ParamLimits

0x2124,	// (0x0000f972) list_single_mce_header_pane

0xa158,	// (0x000179a6) list_single_mce_header_pane_t1

0xa167,	// (0x000179b5) list_single_mce_message_pane_g1

0xa16f,	// (0x000179bd) list_single_mce_message_pane_t1

0x2156,	// (0x0000f9a4) bg_cale_heading_pane_cp01_ParamLimits

0x2156,	// (0x0000f9a4) bg_cale_heading_pane_cp01

0xa17d,	// (0x000179cb) bg_cale_pane_cp02_ParamLimits

0xa17d,	// (0x000179cb) bg_cale_pane_cp02

0x2179,	// (0x0000f9c7) cale_month_corner_pane

0x218f,	// (0x0000f9dd) cale_month_day_heading_pane_ParamLimits

0x218f,	// (0x0000f9dd) cale_month_day_heading_pane

0x21c2,	// (0x0000fa10) cale_month_pane_g1_ParamLimits

0x21c2,	// (0x0000fa10) cale_month_pane_g1

0x21de,	// (0x0000fa2c) cale_month_pane_g2_ParamLimits

0x21de,	// (0x0000fa2c) cale_month_pane_g2

0x21f9,	// (0x0000fa47) cale_month_pane_g3_ParamLimits

0x21f9,	// (0x0000fa47) cale_month_pane_g3

0x2225,	// (0x0000fa73) cale_month_pane_g4_ParamLimits

0x2225,	// (0x0000fa73) cale_month_pane_g4

0x2251,	// (0x0000fa9f) cale_month_pane_g5_ParamLimits

0x2251,	// (0x0000fa9f) cale_month_pane_g5

0x2285,	// (0x0000fad3) cale_month_pane_g6_ParamLimits

0x2285,	// (0x0000fad3) cale_month_pane_g6

0x22c1,	// (0x0000fb0f) cale_month_pane_g7_ParamLimits

0x22c1,	// (0x0000fb0f) cale_month_pane_g7

0x22fd,	// (0x0000fb4b) cale_month_pane_g8_ParamLimits

0x22fd,	// (0x0000fb4b) cale_month_pane_g8

0x2339,	// (0x0000fb87) cale_month_pane_g9_ParamLimits

0x2339,	// (0x0000fb87) cale_month_pane_g9

0x2373,	// (0x0000fbc1) cale_month_pane_g10_ParamLimits

0x2373,	// (0x0000fbc1) cale_month_pane_g10

0x23ad,	// (0x0000fbfb) cale_month_pane_g11_ParamLimits

0x23ad,	// (0x0000fbfb) cale_month_pane_g11

0x23e7,	// (0x0000fc35) cale_month_pane_g12_ParamLimits

0x23e7,	// (0x0000fc35) cale_month_pane_g12

0x2421,	// (0x0000fc6f) cale_month_pane_g13_ParamLimits

0x2421,	// (0x0000fc6f) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001cafd) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001cafd) cale_month_pane_g

0x245b,	// (0x0000fca9) cale_month_week_pane

0x246e,	// (0x0000fcbc) grid_cale_month_pane_ParamLimits

0x246e,	// (0x0000fcbc) grid_cale_month_pane

0x249c,	// (0x0000fcea) cale_month_day_heading_pane_t1

0x24fa,	// (0x0000fd48) cale_month_day_heading_pane_t2

0x255f,	// (0x0000fdad) cale_month_day_heading_pane_t3

0x25c4,	// (0x0000fe12) cale_month_day_heading_pane_t4

0x2629,	// (0x0000fe77) cale_month_day_heading_pane_t5

0x269e,	// (0x0000feec) cale_month_day_heading_pane_t6

0x2713,	// (0x0000ff61) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cb18) cale_month_day_heading_pane_t

0x9d13,	// (0x00017561) bg_cale_side_pane_cp01

0x2788,	// (0x0000ffd6) cale_month_week_pane_t1

0x279f,	// (0x0000ffed) cale_month_week_pane_t2

0x27b6,	// (0x00010004) cale_month_week_pane_t3

0x27cd,	// (0x0001001b) cale_month_week_pane_t4

0x27e4,	// (0x00010032) cale_month_week_pane_t5

0x27fb,	// (0x00010049) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001cb27) cale_month_week_pane_t

0x2812,	// (0x00010060) cell_cale_month_pane_ParamLimits

0x2812,	// (0x00010060) cell_cale_month_pane

0xa1dc,	// (0x00017a2a) cell_cale_month_pane_g1

0x28e8,	// (0x00010136) cell_cale_month_pane_t1_ParamLimits

0x28e8,	// (0x00010136) cell_cale_month_pane_t1

0x9d21,	// (0x0001756f) grid_highlight_pane_cp08

0x9be0,	// (0x0001742e) main_smil_g1

0x2904,	// (0x00010152) smil_status_pane

0xa1e8,	// (0x00017a36) smil_text_pane

0xbbfc,	// (0x0001944a) bg_popup_call3_rect_pane_g8

0xbc04,	// (0x00019452) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001cde0) bg_popup_call3_rect_pane_g

0xbe7e,	// (0x000196cc) smil_status_volume_pane_g1

0xa1f2,	// (0x00017a40) smil_status_pane_t1

0xbeb1,	// (0x000196ff) volume_smil_pane

0xa209,	// (0x00017a57) list_smil_text_pane

0x2917,	// (0x00010165) scroll_pane_cp011

0x2922,	// (0x00010170) smil_text_list_pane_t1_ParamLimits

0x2922,	// (0x00010170) smil_text_list_pane_t1

0xa213,	// (0x00017a61) aid_volume_smil_ParamLimits

0xa213,	// (0x00017a61) aid_volume_smil

0x9be0,	// (0x0001742e) smil_volume_pane_g1

0x9be0,	// (0x0001742e) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001cb47) smil_volume_pane_g

0x9b67,	// (0x000173b5) listscroll_cale_day_pane

0xa235,	// (0x00017a83) bg_cale_pane

0xa24d,	// (0x00017a9b) list_cale_pane

0xa25e,	// (0x00017aac) scroll_pane_cp09

0xa26f,	// (0x00017abd) cale_bg_pane_g1

0xa277,	// (0x00017ac5) cale_bg_pane_g2

0xa27f,	// (0x00017acd) cale_bg_pane_g3

0xa287,	// (0x00017ad5) cale_bg_pane_g4

0xa28f,	// (0x00017add) cale_bg_pane_g5

0xa297,	// (0x00017ae5) cale_bg_pane_g6

0xa29f,	// (0x00017aed) cale_bg_pane_g7

0xa2a7,	// (0x00017af5) cale_bg_pane_g8

0xa2af,	// (0x00017afd) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001cb4c) cale_bg_pane_g

0x18dc,	// (0x0000f12a) list_cale_time_pane_ParamLimits

0x18dc,	// (0x0000f12a) list_cale_time_pane

0xa2b7,	// (0x00017b05) list_cale_time_pane_g1_ParamLimits

0xa2b7,	// (0x00017b05) list_cale_time_pane_g1

0xa2c3,	// (0x00017b11) list_cale_time_pane_g2_ParamLimits

0xa2c3,	// (0x00017b11) list_cale_time_pane_g2

0x2968,	// (0x000101b6) list_cale_time_pane_g3_ParamLimits

0x2968,	// (0x000101b6) list_cale_time_pane_g3

0x2976,	// (0x000101c4) list_cale_time_pane_g4_ParamLimits

0x2976,	// (0x000101c4) list_cale_time_pane_g4

0x2984,	// (0x000101d2) list_cale_time_pane_g5_ParamLimits

0x2984,	// (0x000101d2) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001cb5f) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001cb5f) list_cale_time_pane_g

0xa2dd,	// (0x00017b2b) list_cale_time_pane_t1_ParamLimits

0xa2dd,	// (0x00017b2b) list_cale_time_pane_t1

0xa305,	// (0x00017b53) list_cale_time_pane_t2_ParamLimits

0xa305,	// (0x00017b53) list_cale_time_pane_t2

0x2c80,	// (0x000104ce) aid_blid_cardinal_pane

0x2cbe,	// (0x0001050c) compass_pane_t4

0xa32d,	// (0x00017b7b) list_cale_time_pane_t4_ParamLimits

0xa32d,	// (0x00017b7b) list_cale_time_pane_t4

0x2ccc,	// (0x0001051a) compass_pane_t5

0x2cda,	// (0x00010528) compass_pane_t6

0x2ce8,	// (0x00010536) compass_pane_t7

0xa84c,	// (0x0001809a) navi_pane_cc_t1

0xa9b3,	// (0x00018201) aid_phob_thumbnail_center_pane

0x33af,	// (0x00010bfd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001cb6c) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001cb6c) list_cale_time_pane_t

0x946a,	// (0x00016cb8) bg_popup_window_pane_cp02_ParamLimits

0x946a,	// (0x00016cb8) bg_popup_window_pane_cp02

0xa355,	// (0x00017ba3) heading_pane_cp01_ParamLimits

0xa355,	// (0x00017ba3) heading_pane_cp01

0xa361,	// (0x00017baf) loc_req_pane_ParamLimits

0xa361,	// (0x00017baf) loc_req_pane

0xa371,	// (0x00017bbf) loc_type_pane_ParamLimits

0xa371,	// (0x00017bbf) loc_type_pane

0xa383,	// (0x00017bd1) loc_type_pane_t1_ParamLimits

0xa383,	// (0x00017bd1) loc_type_pane_t1

0xa395,	// (0x00017be3) loc_type_pane_t2_ParamLimits

0xa395,	// (0x00017be3) loc_type_pane_t2

0xa3a7,	// (0x00017bf5) loc_type_pane_t3_ParamLimits

0xa3a7,	// (0x00017bf5) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001cb73) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001cb73) loc_type_pane_t

0xa3b9,	// (0x00017c07) list_loc_req_pane

0xa3c3,	// (0x00017c11) scroll_pane_cp012

0x2992,	// (0x000101e0) list_single_loc_request_popup_menu_pane_ParamLimits

0x2992,	// (0x000101e0) list_single_loc_request_popup_menu_pane

0xa3ce,	// (0x00017c1c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3ce,	// (0x00017c1c) list_single_loc_request_popup_menu_pane_g1

0xa3da,	// (0x00017c28) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3da,	// (0x00017c28) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001cb7a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001cb7a) list_single_loc_request_popup_menu_pane_g

0xa3e6,	// (0x00017c34) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3e6,	// (0x00017c34) list_single_loc_request_popup_menu_pane_t1

0x9a6e,	// (0x000172bc) bg_popup_window_pane_cp03_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_window_pane_cp03

0xa3fc,	// (0x00017c4a) heading_loc_req_pane_ParamLimits

0xa3fc,	// (0x00017c4a) heading_loc_req_pane

0x299f,	// (0x000101ed) popup_dyc_status_message_window_g1_ParamLimits

0x299f,	// (0x000101ed) popup_dyc_status_message_window_g1

0x29b3,	// (0x00010201) popup_dyc_status_message_window_t1_ParamLimits

0x29b3,	// (0x00010201) popup_dyc_status_message_window_t1

0x29c8,	// (0x00010216) popup_dyc_status_message_window_t2_ParamLimits

0x29c8,	// (0x00010216) popup_dyc_status_message_window_t2

0x29dd,	// (0x0001022b) popup_dyc_status_message_window_t3_ParamLimits

0x29dd,	// (0x0001022b) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001cb7f) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001cb7f) popup_dyc_status_message_window_t

0x9813,	// (0x00017061) bg_heading_pane_cp01

0xa408,	// (0x00017c56) heading_loc_req_pane_g1

0xa410,	// (0x00017c5e) heading_loc_req_pane_g2

0xa418,	// (0x00017c66) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001cb86) heading_loc_req_pane_g

0xa420,	// (0x00017c6e) heading_loc_req_pane_t1

0xa4a4,	// (0x00017cf2) bg_popup_sub_pane_cp01_ParamLimits

0xa4a4,	// (0x00017cf2) bg_popup_sub_pane_cp01

0xa4b2,	// (0x00017d00) popup_cale_events_window_g1_ParamLimits

0xa4b2,	// (0x00017d00) popup_cale_events_window_g1

0xa4d2,	// (0x00017d20) popup_cale_events_window_g2_ParamLimits

0xa4d2,	// (0x00017d20) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cbba) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cbba) popup_cale_events_window_g

0xa4f2,	// (0x00017d40) popup_cale_events_window_t1_ParamLimits

0xa4f2,	// (0x00017d40) popup_cale_events_window_t1

0xa504,	// (0x00017d52) popup_cale_events_window_t2_ParamLimits

0xa504,	// (0x00017d52) popup_cale_events_window_t2

0xa542,	// (0x00017d90) popup_cale_events_window_t3_ParamLimits

0xa542,	// (0x00017d90) popup_cale_events_window_t3

0xa57c,	// (0x00017dca) popup_cale_events_window_t4_ParamLimits

0xa57c,	// (0x00017dca) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cbbf) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cbbf) popup_cale_events_window_t

0x2a6b,	// (0x000102b9) call_type_pane

0x2a7b,	// (0x000102c9) popup_call_status_window_g1

0x2a8f,	// (0x000102dd) popup_call_status_window_g2

0x2aa3,	// (0x000102f1) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cbc8) popup_call_status_window_g

0xa5b2,	// (0x00017e00) call_type_pane_g1

0xa5bb,	// (0x00017e09) call_type_pane_g2

0x0001,

0xf381,	// (0x0001cbcf) call_type_pane_g

0x9813,	// (0x00017061) bg_popup_sub_pane_cp02

0xa5c4,	// (0x00017e12) listscroll_popup_wml_pane

0xa5cc,	// (0x00017e1a) list_wml_pane

0xa5d6,	// (0x00017e24) scroll_pane_cp013

0xa5e1,	// (0x00017e2f) list_single_graphic_popup_wml_pane_ParamLimits

0xa5e1,	// (0x00017e2f) list_single_graphic_popup_wml_pane

0x9be0,	// (0x0001742e) list_single_graphic_popup_wml_pane_g1

0xa5f5,	// (0x00017e43) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001cbd4) list_single_graphic_popup_wml_pane_g

0xa5fd,	// (0x00017e4b) list_single_graphic_popup_wml_pane_t1

0xa613,	// (0x00017e61) aid_call_pane

0x9a66,	// (0x000172b4) popup_clock_analogue_window_g1

0x9a66,	// (0x000172b4) popup_clock_analogue_window_g2

0xa61b,	// (0x00017e69) popup_clock_analogue_window_g3

0xa61b,	// (0x00017e69) popup_clock_analogue_window_g4

0x9be0,	// (0x0001742e) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001cbd9) popup_clock_analogue_window_g

0xa623,	// (0x00017e71) popup_clock_analogue_window_t1

0xa631,	// (0x00017e7f) clock_digital_number_pane_ParamLimits

0xa631,	// (0x00017e7f) clock_digital_number_pane

0xa63d,	// (0x00017e8b) clock_digital_number_pane_cp02_ParamLimits

0xa63d,	// (0x00017e8b) clock_digital_number_pane_cp02

0xa649,	// (0x00017e97) clock_digital_number_pane_cp03_ParamLimits

0xa649,	// (0x00017e97) clock_digital_number_pane_cp03

0xa655,	// (0x00017ea3) clock_digital_number_pane_cp04_ParamLimits

0xa655,	// (0x00017ea3) clock_digital_number_pane_cp04

0xa665,	// (0x00017eb3) clock_digital_separator_pane_ParamLimits

0xa665,	// (0x00017eb3) clock_digital_separator_pane

0xa671,	// (0x00017ebf) popup_clock_digital_window_t1

0x9be0,	// (0x0001742e) clock_digital_number_pane_g1

0x9be0,	// (0x0001742e) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001cb47) clock_digital_number_pane_g

0x9be0,	// (0x0001742e) clock_digital_separator_pane_g1

0x9be0,	// (0x0001742e) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001cb47) clock_digital_separator_pane_g

0x9813,	// (0x00017061) bg_popup_window_pane_cp04

0xa68e,	// (0x00017edc) heading_pane_cp03

0xa696,	// (0x00017ee4) listscroll_popup_gms_pane

0xa69e,	// (0x00017eec) grid_large_graphic_popup_pane

0xa6a8,	// (0x00017ef6) listscroll_popup_gms_pane_g1

0xa6b0,	// (0x00017efe) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001cbe4) listscroll_popup_gms_pane_g

0xa021,	// (0x0001786f) scroll_pane_cp014

0x2ab2,	// (0x00010300) cell_large_graphic_popup_pane_ParamLimits

0x2ab2,	// (0x00010300) cell_large_graphic_popup_pane

0x2aca,	// (0x00010318) cell_large_graphic_popup_pane_g1_ParamLimits

0x2aca,	// (0x00010318) cell_large_graphic_popup_pane_g1

0xa6b8,	// (0x00017f06) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6b8,	// (0x00017f06) cell_large_graphic_popup_pane_g2

0xa6c4,	// (0x00017f12) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6c4,	// (0x00017f12) cell_large_graphic_popup_pane_g3

0xa6d1,	// (0x00017f1f) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6d1,	// (0x00017f1f) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001cbe9) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001cbe9) cell_large_graphic_popup_pane_g

0xa6e1,	// (0x00017f2f) grid_highlight_pane_cp010

0x9be0,	// (0x0001742e) bg_popup_call_pane_g1

0xa6eb,	// (0x00017f39) list_single_graphic_popup_conf_pane_ParamLimits

0xa6eb,	// (0x00017f39) list_single_graphic_popup_conf_pane

0xa6fe,	// (0x00017f4c) list_highlight_pane_cp01

0xa707,	// (0x00017f55) list_single_graphic_popup_conf_pane_g1

0xa70f,	// (0x00017f5d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001cbf2) list_single_graphic_popup_conf_pane_g

0xa717,	// (0x00017f65) list_single_graphic_popup_conf_pane_t1

0xa725,	// (0x00017f73) linegrid_cams_pane_g1

0x2ad6,	// (0x00010324) linegrid_cams_pane_g2

0x9d54,	// (0x000175a2) linegrid_cams_pane_g3

0xa72e,	// (0x00017f7c) linegrid_cams_pane_g4

0x2adf,	// (0x0001032d) linegrid_cams_pane_g5

0x2ae8,	// (0x00010336) linegrid_cams_pane_g6

0x9d5d,	// (0x000175ab) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001cbf7) linegrid_cams_pane_g

0xa737,	// (0x00017f85) popup_clock_analogue_window

0xa737,	// (0x00017f85) popup_clock_digital_window

0x9813,	// (0x00017061) popup_phob_thumbnail_window

0x9be0,	// (0x0001742e) call_video_uplink_pane_g1

0xa740,	// (0x00017f8e) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001cc06) call_video_uplink_pane_g

0xa748,	// (0x00017f96) video_uplink_pane

0xa750,	// (0x00017f9e) mce_image_pane_g1

0x2af3,	// (0x00010341) mce_image_pane_g2

0x2afd,	// (0x0001034b) mce_image_pane_g3

0x2b05,	// (0x00010353) mce_image_pane_g4

0x2b0d,	// (0x0001035b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001cc0b) mce_image_pane_g

0xa75a,	// (0x00017fa8) control_top_pane_stacon_cp01_ParamLimits

0xa75a,	// (0x00017fa8) control_top_pane_stacon_cp01

0xa76e,	// (0x00017fbc) uni_indicator_pane_stacon_cp01_ParamLimits

0xa76e,	// (0x00017fbc) uni_indicator_pane_stacon_cp01

0xa77f,	// (0x00017fcd) bg_popup_sub_pane_cp03

0x2b15,	// (0x00010363) chi_dic_find_pane

0x2b1d,	// (0x0001036b) listscroll_chi_dic_pane

0x2b26,	// (0x00010374) main_pane_chidic_g1

0xa789,	// (0x00017fd7) chi_dic_find_pane_t1

0xa797,	// (0x00017fe5) find_chidic_pane

0xa7a0,	// (0x00017fee) chi_dic_list_pane_ParamLimits

0xa7a0,	// (0x00017fee) chi_dic_list_pane

0xa7b1,	// (0x00017fff) scroll_pane_cp020

0xa7b9,	// (0x00018007) find_chidic_pane_t1

0x9813,	// (0x00017061) input_focus_pane_cp06

0x2b39,	// (0x00010387) list_chi_dic_pane_ParamLimits

0x2b39,	// (0x00010387) list_chi_dic_pane

0x2b4b,	// (0x00010399) list_chi_dic_pane_t1_ParamLimits

0x2b4b,	// (0x00010399) list_chi_dic_pane_t1

0x9813,	// (0x00017061) list_highlight_pane_cp020

0xa7c8,	// (0x00018016) bg_cale_heading_pane_g1

0x2b5e,	// (0x000103ac) bg_cale_heading_pane_g2

0x2b66,	// (0x000103b4) bg_cale_heading_pane_g3

0x2b6e,	// (0x000103bc) bg_cale_heading_pane_g4

0x2b78,	// (0x000103c6) bg_cale_heading_pane_g5

0x2b82,	// (0x000103d0) bg_cale_heading_pane_g6

0x2b8a,	// (0x000103d8) bg_cale_heading_pane_g7

0x2b92,	// (0x000103e0) bg_cale_heading_pane_g8

0x2b9c,	// (0x000103ea) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001cc16) bg_cale_heading_pane_g

0xa7c8,	// (0x00018016) bg_cale_side_pane_g1

0x2ba6,	// (0x000103f4) bg_cale_side_pane_g2

0x2bae,	// (0x000103fc) bg_cale_side_pane_g3

0x2bb6,	// (0x00010404) bg_cale_side_pane_g4

0x2bbe,	// (0x0001040c) bg_cale_side_pane_g5

0x2bc6,	// (0x00010414) bg_cale_side_pane_g6

0x2bce,	// (0x0001041c) bg_cale_side_pane_g7

0x2bd6,	// (0x00010424) bg_cale_side_pane_g8

0x2bde,	// (0x0001042c) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001cc29) bg_cale_side_pane_g

0x2be6,	// (0x00010434) popup_call_status_window_ParamLimits

0x2be6,	// (0x00010434) popup_call_status_window

0xa7d0,	// (0x0001801e) stacon_top_pane

0xa7d8,	// (0x00018026) status_pane_ParamLimits

0xa7d8,	// (0x00018026) status_pane

0xa7ed,	// (0x0001803b) status_small_pane

0xa7f5,	// (0x00018043) control_pane

0x9813,	// (0x00017061) stacon_bottom_pane

0xa7fd,	// (0x0001804b) list_single_mce_smart_pane_t1_ParamLimits

0xa7fd,	// (0x0001804b) list_single_mce_smart_pane_t1

0xa810,	// (0x0001805e) list_single_mce_smart_pane_t2_ParamLimits

0xa810,	// (0x0001805e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001cc3c) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001cc3c) list_single_mce_smart_pane_t

0x2c2f,	// (0x0001047d) compass_pane

0x2c38,	// (0x00010486) main_location2_pane_t1

0x2c4a,	// (0x00010498) main_location2_pane_t2

0x2c5c,	// (0x000104aa) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001cc41) main_location2_pane_t

0xa82f,	// (0x0001807d) compass_pane_g1_ParamLimits

0xa82f,	// (0x0001807d) compass_pane_g1

0x2ca0,	// (0x000104ee) compass_pane_t1

0x2caf,	// (0x000104fd) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001cc4a) compass_pane_t

0x2cf6,	// (0x00010544) text_secondary_cp61

0xa843,	// (0x00018091) navi_pane_cams_g5

0xa866,	// (0x000180b4) navi_pane_im_t1

0xa874,	// (0x000180c2) navi_pane_mp_g1_ParamLimits

0xa874,	// (0x000180c2) navi_pane_mp_g1

0xa888,	// (0x000180d6) navi_pane_mp_g2_ParamLimits

0xa888,	// (0x000180d6) navi_pane_mp_g2

0xa894,	// (0x000180e2) navi_pane_mp_g3_ParamLimits

0xa894,	// (0x000180e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001cc5e) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001cc5e) navi_pane_mp_g

0xa8a0,	// (0x000180ee) navi_pane_mp_t1

0xa8ae,	// (0x000180fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001cc65) navi_pane_mp_t

0xa8ea,	// (0x00018138) navi_pane_vt_g1

0xa8a0,	// (0x000180ee) navi_pane_vt_t1

0xa8f2,	// (0x00018140) navi_slider_pane

0xa8fa,	// (0x00018148) zooming_pane

0xa902,	// (0x00018150) navi_slider_pane_g1

0xa90b,	// (0x00018159) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001cc6c) navi_slider_pane_g

0xa938,	// (0x00018186) aid_levels_zoom

0xa940,	// (0x0001818e) zooming_pane_g1

0xa948,	// (0x00018196) zooming_pane_g2

0xa948,	// (0x00018196) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001cc7b) zooming_pane_g

0xa950,	// (0x0001819e) level_10_zoom

0xa959,	// (0x000181a7) level_11_zoom

0xa962,	// (0x000181b0) level_1_zoom

0xa96b,	// (0x000181b9) level_2_zoom

0xa974,	// (0x000181c2) level_3_zoom

0xa97d,	// (0x000181cb) level_4_zoom

0xa986,	// (0x000181d4) level_5_zoom

0xa98f,	// (0x000181dd) level_6_zoom

0xa998,	// (0x000181e6) level_7_zoom

0xa9a1,	// (0x000181ef) level_8_zoom

0xa9aa,	// (0x000181f8) level_9_zoom

0xa9bb,	// (0x00018209) popup_phob_thumbnail_window_g1

0xa9c3,	// (0x00018211) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001cc82) popup_phob_thumbnail_window_g

0xbd5e,	// (0x000195ac) level_1_location

0xbd66,	// (0x000195b4) level_2_location

0xbd6e,	// (0x000195bc) level_3_location

0xbd76,	// (0x000195c4) level_4_location

0xa8fa,	// (0x00018148) level_5_location

0x2e1b,	// (0x00010669) mce_icon_pane_g1

0x2e23,	// (0x00010671) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001cc87) mce_icon_pane_g

0x2e2b,	// (0x00010679) main_mup_pane_g1_ParamLimits

0x2e2b,	// (0x00010679) main_mup_pane_g1

0x2e41,	// (0x0001068f) main_mup_pane_g2_ParamLimits

0x2e41,	// (0x0001068f) main_mup_pane_g2

0x2e59,	// (0x000106a7) main_mup_pane_g3_ParamLimits

0x2e59,	// (0x000106a7) main_mup_pane_g3

0x2e71,	// (0x000106bf) main_mup_pane_g4_ParamLimits

0x2e71,	// (0x000106bf) main_mup_pane_g4

0x2e89,	// (0x000106d7) main_mup_pane_g5_ParamLimits

0x2e89,	// (0x000106d7) main_mup_pane_g5

0x2ea5,	// (0x000106f3) main_mup_pane_g6_ParamLimits

0x2ea5,	// (0x000106f3) main_mup_pane_g6

0x2ebd,	// (0x0001070b) main_mup_pane_g7_ParamLimits

0x2ebd,	// (0x0001070b) main_mup_pane_g7

0x2ed5,	// (0x00010723) main_mup_pane_g8_ParamLimits

0x2ed5,	// (0x00010723) main_mup_pane_g8

0x2eef,	// (0x0001073d) main_mup_pane_g9_ParamLimits

0x2eef,	// (0x0001073d) main_mup_pane_g9

0x2f09,	// (0x00010757) main_mup_pane_g10_ParamLimits

0x2f09,	// (0x00010757) main_mup_pane_g10

0x2f23,	// (0x00010771) main_mup_pane_g11_ParamLimits

0x2f23,	// (0x00010771) main_mup_pane_g11

0x2f37,	// (0x00010785) main_mup_pane_g12_ParamLimits

0x2f37,	// (0x00010785) main_mup_pane_g12

0x2f4d,	// (0x0001079b) main_mup_pane_g13_ParamLimits

0x2f4d,	// (0x0001079b) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001cc8c) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001cc8c) main_mup_pane_g

0x2f61,	// (0x000107af) main_mup_pane_t1_ParamLimits

0x2f61,	// (0x000107af) main_mup_pane_t1

0x2f7b,	// (0x000107c9) main_mup_pane_t2_ParamLimits

0x2f7b,	// (0x000107c9) main_mup_pane_t2

0x2f93,	// (0x000107e1) main_mup_pane_t3_ParamLimits

0x2f93,	// (0x000107e1) main_mup_pane_t3

0x2fab,	// (0x000107f9) main_mup_pane_t4_ParamLimits

0x2fab,	// (0x000107f9) main_mup_pane_t4

0x2fc9,	// (0x00010817) main_mup_pane_t5_ParamLimits

0x2fc9,	// (0x00010817) main_mup_pane_t5

0x2fde,	// (0x0001082c) main_mup_pane_t6_ParamLimits

0x2fde,	// (0x0001082c) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001cca7) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001cca7) main_mup_pane_t

0x2ff0,	// (0x0001083e) mup_progress_pane_ParamLimits

0x2ff0,	// (0x0001083e) mup_progress_pane

0x2ffc,	// (0x0001084a) mup_visualizer_pane_ParamLimits

0x2ffc,	// (0x0001084a) mup_visualizer_pane

0x302c,	// (0x0001087a) mup_volume_pane_ParamLimits

0x302c,	// (0x0001087a) mup_volume_pane

0xa9cb,	// (0x00018219) mup_visualizer_pane_g1_ParamLimits

0xa9cb,	// (0x00018219) mup_visualizer_pane_g1

0xa9cb,	// (0x00018219) mup_visualizer_pane_g2_ParamLimits

0xa9cb,	// (0x00018219) mup_visualizer_pane_g2

0xa82f,	// (0x0001807d) mup_visualizer_pane_g3_ParamLimits

0xa82f,	// (0x0001807d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001ccb4) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001ccb4) mup_visualizer_pane_g

0x9be0,	// (0x0001742e) mup_volume_pane_g1

0xa9e1,	// (0x0001822f) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001ccbb) mup_volume_pane_g

0x9be0,	// (0x0001742e) mup_progress_pane_g1

0xa9ea,	// (0x00018238) mup_progress_pane_g2

0xa9f3,	// (0x00018241) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001ccc0) mup_progress_pane_g

0x9813,	// (0x00017061) bg_popup_window_pane_cp05

0xa9fc,	// (0x0001824a) heading_pane_cp02_ParamLimits

0xa9fc,	// (0x0001824a) heading_pane_cp02

0xaa16,	// (0x00018264) list_popup_blid_pane

0xaa1e,	// (0x0001826c) list_blid_sat_info_pane_ParamLimits

0xaa1e,	// (0x0001826c) list_blid_sat_info_pane

0xaa31,	// (0x0001827f) list_blid_sat_info_pane_g1

0xaa39,	// (0x00018287) list_blid_sat_info_pane_t1

0x3142,	// (0x00010990) mup_equalizer_pane_ParamLimits

0x3142,	// (0x00010990) mup_equalizer_pane

0x315b,	// (0x000109a9) mup_equalizer_pane_cp1_ParamLimits

0x315b,	// (0x000109a9) mup_equalizer_pane_cp1

0x3178,	// (0x000109c6) mup_equalizer_pane_cp2_ParamLimits

0x3178,	// (0x000109c6) mup_equalizer_pane_cp2

0x3195,	// (0x000109e3) mup_equalizer_pane_cp3_ParamLimits

0x3195,	// (0x000109e3) mup_equalizer_pane_cp3

0x31b6,	// (0x00010a04) mup_equalizer_pane_cp4_ParamLimits

0x31b6,	// (0x00010a04) mup_equalizer_pane_cp4

0x31d7,	// (0x00010a25) mup_equalizer_pane_cp5

0x31eb,	// (0x00010a39) mup_equalizer_pane_cp6

0x31ff,	// (0x00010a4d) mup_equalizer_pane_cp7

0xbc7c,	// (0x000194ca) bg_popup_call_poc_act_pane_g9

0xbc84,	// (0x000194d2) bg_popup_call_poc_act_pane_g10

0xbc8c,	// (0x000194da) bg_popup_call_poc_act_pane_g11

0x000a,

0x9a6e,	// (0x000172bc) mup_scale_pane

0x9be0,	// (0x0001742e) mup_scale_pane_g1

0xaa47,	// (0x00018295) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001ccdc) mup_scale_pane_g

0xaa6b,	// (0x000182b9) msg_data_pane

0xaa73,	// (0x000182c1) scroll_pane_cp017

0x3225,	// (0x00010a73) bg_list_pane_cp04_ParamLimits

0x3225,	// (0x00010a73) bg_list_pane_cp04

0xaa83,	// (0x000182d1) msg_data_pane_g1

0x323d,	// (0x00010a8b) msg_data_pane_g2

0x3247,	// (0x00010a95) msg_data_pane_g3

0x324f,	// (0x00010a9d) msg_data_pane_g4

0x3257,	// (0x00010aa5) msg_data_pane_g5

0x325f,	// (0x00010aad) msg_data_pane_g6

0x3267,	// (0x00010ab5) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001cceb) msg_data_pane_g

0x326f,	// (0x00010abd) msg_text_pane_ParamLimits

0x326f,	// (0x00010abd) msg_text_pane

0x3293,	// (0x00010ae1) qrid_highlight_pane_cp011_ParamLimits

0x3293,	// (0x00010ae1) qrid_highlight_pane_cp011

0x9813,	// (0x00017061) msg_body_pane

0x9813,	// (0x00017061) msg_header_pane

0xaa94,	// (0x000182e2) input_focus_pane_cp07

0x32b7,	// (0x00010b05) msg_header_pane_t1_ParamLimits

0x32b7,	// (0x00010b05) msg_header_pane_t1

0xaaa9,	// (0x000182f7) msg_header_pane_t2_ParamLimits

0xaaa9,	// (0x000182f7) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001ccff) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001ccff) msg_header_pane_t

0xaabb,	// (0x00018309) msg_body_pane_g1

0xaac3,	// (0x00018311) msg_body_pane_t1_ParamLimits

0xaac3,	// (0x00018311) msg_body_pane_t1

0xaaf4,	// (0x00018342) msg_body_pane_t2_ParamLimits

0xaaf4,	// (0x00018342) msg_body_pane_t2

0xab06,	// (0x00018354) msg_body_pane_t3_ParamLimits

0xab06,	// (0x00018354) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001cd04) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001cd04) msg_body_pane_t

0x3305,	// (0x00010b53) main_viewer_pane_g1_ParamLimits

0x3305,	// (0x00010b53) main_viewer_pane_g1

0x3313,	// (0x00010b61) main_viewer_pane_g2_ParamLimits

0x3313,	// (0x00010b61) main_viewer_pane_g2

0x3321,	// (0x00010b6f) main_viewer_pane_g3_ParamLimits

0x3321,	// (0x00010b6f) main_viewer_pane_g3

0x3330,	// (0x00010b7e) main_viewer_pane_g4_ParamLimits

0x3330,	// (0x00010b7e) main_viewer_pane_g4

0xab30,	// (0x0001837e) main_viewer_pane_g5_ParamLimits

0xab30,	// (0x0001837e) main_viewer_pane_g5

0xab30,	// (0x0001837e) main_viewer_pane_g7_ParamLimits

0xab30,	// (0x0001837e) main_viewer_pane_g7

0xab42,	// (0x00018390) main_viewer_pane_g8_ParamLimits

0xab42,	// (0x00018390) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001cd14) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001cd14) main_viewer_pane_g

0xab5a,	// (0x000183a8) viewer_content_pane_ParamLimits

0xab5a,	// (0x000183a8) viewer_content_pane

0x336c,	// (0x00010bba) main_postcard_pane_g1_ParamLimits

0x336c,	// (0x00010bba) main_postcard_pane_g1

0x3382,	// (0x00010bd0) main_postcard_pane_g2_ParamLimits

0x3382,	// (0x00010bd0) main_postcard_pane_g2

0x3398,	// (0x00010be6) main_postcard_pane_g3_ParamLimits

0x3398,	// (0x00010be6) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001cd25) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001cd25) main_postcard_pane_g

0x33af,	// (0x00010bfd) main_postcard_pane_g4

0xbe91,	// (0x000196df) smil_status_volume_pane_g2

0x33f2,	// (0x00010c40) postcard_pane_ParamLimits

0x33f2,	// (0x00010c40) postcard_pane

0xab68,	// (0x000183b6) postcard_pane_g1_ParamLimits

0xab68,	// (0x000183b6) postcard_pane_g1

0x3434,	// (0x00010c82) postcard_pane_g2_ParamLimits

0x3434,	// (0x00010c82) postcard_pane_g2

0x3440,	// (0x00010c8e) postcard_pane_g3_ParamLimits

0x3440,	// (0x00010c8e) postcard_pane_g3

0xab76,	// (0x000183c4) postcard_pane_g4_ParamLimits

0xab76,	// (0x000183c4) postcard_pane_g4

0x344c,	// (0x00010c9a) postcard_pane_g5_ParamLimits

0x344c,	// (0x00010c9a) postcard_pane_g5

0x3461,	// (0x00010caf) postcard_pane_g6_ParamLimits

0x3461,	// (0x00010caf) postcard_pane_g6

0xab68,	// (0x000183b6) postcard_pane_g7_ParamLimits

0xab68,	// (0x000183b6) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001cd32) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001cd32) postcard_pane_g

0x3475,	// (0x00010cc3) main_mp2_pane_g1_ParamLimits

0x3475,	// (0x00010cc3) main_mp2_pane_g1

0x3481,	// (0x00010ccf) main_mp2_pane_g2_ParamLimits

0x3481,	// (0x00010ccf) main_mp2_pane_g2

0x348d,	// (0x00010cdb) main_mp2_pane_g3_ParamLimits

0x348d,	// (0x00010cdb) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001cd41) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001cd41) main_mp2_pane_g

0x3499,	// (0x00010ce7) main_mp2_pane_t1_ParamLimits

0x3499,	// (0x00010ce7) main_mp2_pane_t1

0x34ae,	// (0x00010cfc) main_mp2_pane_t2_ParamLimits

0x34ae,	// (0x00010cfc) main_mp2_pane_t2

0x34c0,	// (0x00010d0e) main_mp2_pane_t3_ParamLimits

0x34c0,	// (0x00010d0e) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001cd48) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001cd48) main_mp2_pane_t

0xab84,	// (0x000183d2) pec_content_pane_ParamLimits

0xab84,	// (0x000183d2) pec_content_pane

0xa021,	// (0x0001786f) scroll_pane_cp015

0xab96,	// (0x000183e4) pec_attribute_pane_ParamLimits

0xab96,	// (0x000183e4) pec_attribute_pane

0x34d2,	// (0x00010d20) pec_content_pane_g1_ParamLimits

0x34d2,	// (0x00010d20) pec_content_pane_g1

0xaba6,	// (0x000183f4) pec_content_pane_t1_ParamLimits

0xaba6,	// (0x000183f4) pec_content_pane_t1

0xabb8,	// (0x00018406) pec_content_pane_t2_ParamLimits

0xabb8,	// (0x00018406) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001cd4f) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001cd4f) pec_content_pane_t

0x34de,	// (0x00010d2c) list_single_graphic_pane_cp01_ParamLimits

0x34de,	// (0x00010d2c) list_single_graphic_pane_cp01

0x9a6e,	// (0x000172bc) bg_popup_sub_pane_cp04

0xabca,	// (0x00018418) popup_mup_playback_window_g1

0xabd6,	// (0x00018424) popup_mup_playback_window_t1

0xabeb,	// (0x00018439) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001cd54) popup_mup_playback_window_t

0xac22,	// (0x00018470) main_image_pane_g1_ParamLimits

0xac22,	// (0x00018470) main_image_pane_g1

0xac65,	// (0x000184b3) scroll_pane_cp018_ParamLimits

0xac65,	// (0x000184b3) scroll_pane_cp018

0xac7d,	// (0x000184cb) scroll_pane_cp016_ParamLimits

0xac7d,	// (0x000184cb) scroll_pane_cp016

0x35ab,	// (0x00010df9) smil2_image_pane_ParamLimits

0x35ab,	// (0x00010df9) smil2_image_pane

0x35db,	// (0x00010e29) smil2_root_pane_ParamLimits

0x35db,	// (0x00010e29) smil2_root_pane

0x3613,	// (0x00010e61) smil2_text_pane_ParamLimits

0x3613,	// (0x00010e61) smil2_text_pane

0x9813,	// (0x00017061) bg_list_pane_cp06

0xacb9,	// (0x00018507) grid_radio_pane

0x9813,	// (0x00017061) bg_popup_window_pane_cp06

0xacc1,	// (0x0001850f) main_fmradio_pane_t1

0xa68e,	// (0x00017edc) heading_pane_cp04

0xaccf,	// (0x0001851d) main_fmradio_pane_t2

0xbc94,	// (0x000194e2) popup_cale_lunar_info_window_g1

0xacdd,	// (0x0001852b) main_fmradio_pane_t3

0xbc9c,	// (0x000194ea) popup_cale_lunar_info_window_g2

0xaceb,	// (0x00018539) main_fmradio_pane_t4

0x0001,

0xacf9,	// (0x00018547) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001ce2f) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001cd69) main_fmradio_pane_t

0xad07,	// (0x00018555) wait_bar_pane_cp03

0xad0f,	// (0x0001855d) cell_fmradio_pane_ParamLimits

0xad0f,	// (0x0001855d) cell_fmradio_pane

0xab68,	// (0x000183b6) cell_fmradio_pane_g1_ParamLimits

0xab68,	// (0x000183b6) cell_fmradio_pane_g1

0x9813,	// (0x00017061) grid_highlight_pane_cp011

0xad22,	// (0x00018570) poc_content_pane_ParamLimits

0xad22,	// (0x00018570) poc_content_pane

0xad34,	// (0x00018582) scroll_pane_cp019

0x3693,	// (0x00010ee1) popup_call_poc_act_window_ParamLimits

0x3693,	// (0x00010ee1) popup_call_poc_act_window

0x36b7,	// (0x00010f05) popup_call_poc_inact_window_ParamLimits

0x36b7,	// (0x00010f05) popup_call_poc_inact_window

0xf5b8,	// (0x0001ce06) bg_popup_call_poc_act_pane_g

0xbc0c,	// (0x0001945a) bg_popup_call_poc_inact_pane_g1

0xbc14,	// (0x00019462) bg_popup_call_poc_inact_pane_g2

0xad3c,	// (0x0001858a) popup_call_poc_act_window_g2

0xbc1c,	// (0x0001946a) bg_popup_call_poc_inact_pane_g3

0xbc24,	// (0x00019472) bg_popup_call_poc_inact_pane_g4

0xbc2c,	// (0x0001947a) bg_popup_call_poc_inact_pane_g5

0xad44,	// (0x00018592) popup_call_poc_act_window_t1_ParamLimits

0xad44,	// (0x00018592) popup_call_poc_act_window_t1

0xad6c,	// (0x000185ba) popup_call_poc_act_window_t2_ParamLimits

0xad6c,	// (0x000185ba) popup_call_poc_act_window_t2

0xad94,	// (0x000185e2) popup_call_poc_act_window_t3_ParamLimits

0xad94,	// (0x000185e2) popup_call_poc_act_window_t3

0xadbc,	// (0x0001860a) popup_call_poc_act_window_t4_ParamLimits

0xadbc,	// (0x0001860a) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001cd74) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001cd74) popup_call_poc_act_window_t

0xbc34,	// (0x00019482) bg_popup_call_poc_inact_pane_g6

0xbc3c,	// (0x0001948a) bg_popup_call_poc_inact_pane_g7

0xbc44,	// (0x00019492) bg_popup_call_poc_inact_pane_g8

0xadce,	// (0x0001861c) popup_call_poc_inact_window_g2

0xbc4c,	// (0x0001949a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001cdf3) bg_popup_call_poc_inact_pane_g

0xadd6,	// (0x00018624) popup_call_poc_inact_window_t1_ParamLimits

0xadd6,	// (0x00018624) popup_call_poc_inact_window_t1

0xadeb,	// (0x00018639) popup_call_poc_inact_window_t2_ParamLimits

0xadeb,	// (0x00018639) popup_call_poc_inact_window_t2

0xae00,	// (0x0001864e) popup_call_poc_inact_window_t3_ParamLimits

0xae00,	// (0x0001864e) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001cd7d) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001cd7d) popup_call_poc_inact_window_t

0xbe04,	// (0x00019652) context_pane_ParamLimits

0x3eea,	// (0x00011738) signal_pane_ParamLimits

0xa8fa,	// (0x00018148) main_call2_pane

0xbdf2,	// (0x00019640) popup_phob_thumbnail2_window_ParamLimits

0xbdf2,	// (0x00019640) popup_phob_thumbnail2_window

0xab18,	// (0x00018366) aid_hotspot_pointer_arrow_pane

0xab20,	// (0x0001836e) aid_hotspot_pointer_hand_pane

0x3a00,	// (0x0001124e) phob_pre_status_pane_g5

0x1907,	// (0x0000f155) cams_zoom_pane_ParamLimits

0x1916,	// (0x0000f164) image_vga_pane_ParamLimits

0x1930,	// (0x0000f17e) main_camera_pane_g1_ParamLimits

0x1942,	// (0x0000f190) main_camera_pane_g2_ParamLimits

0x1952,	// (0x0000f1a0) main_camera_pane_g3_ParamLimits

0x1962,	// (0x0000f1b0) main_camera_pane_g4_ParamLimits

0x1972,	// (0x0000f1c0) main_camera_pane_g5_ParamLimits

0x1982,	// (0x0000f1d0) main_camera_pane_g6_ParamLimits

0x1994,	// (0x0000f1e2) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001ca7c) main_camera_pane_g_ParamLimits

0x19a4,	// (0x0000f1f2) main_camera_pane_t1_ParamLimits

0x19ba,	// (0x0000f208) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001ca8d) main_camera_pane_t_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_preview_window_pane_cp01_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_preview_window_pane_cp01

0xae15,	// (0x00018663) popup_phob_thumbnail2_window_g1_ParamLimits

0xae15,	// (0x00018663) popup_phob_thumbnail2_window_g1

0x9813,	// (0x00017061) call2_cli_visual_pane

0x36eb,	// (0x00010f39) popup_call2_audio_conf_window_ParamLimits

0x36eb,	// (0x00010f39) popup_call2_audio_conf_window

0x370b,	// (0x00010f59) popup_call2_audio_first_window_ParamLimits

0x370b,	// (0x00010f59) popup_call2_audio_first_window

0x37a1,	// (0x00010fef) popup_call2_audio_in_window_ParamLimits

0x37a1,	// (0x00010fef) popup_call2_audio_in_window

0x37e9,	// (0x00011037) popup_call2_audio_out_window_ParamLimits

0x37e9,	// (0x00011037) popup_call2_audio_out_window

0x3853,	// (0x000110a1) popup_call2_audio_second_window_ParamLimits

0x3853,	// (0x000110a1) popup_call2_audio_second_window

0x38b9,	// (0x00011107) popup_call2_audio_wait_window_ParamLimits

0x38b9,	// (0x00011107) popup_call2_audio_wait_window

0x9813,	// (0x00017061) bg_popup_call2_act_pane_cp03

0x9a50,	// (0x0001729e) list_conf_pane_cp

0xae21,	// (0x0001866f) popup_call2_audio_conf_window_t1

0xa6eb,	// (0x00017f39) list_single_graphic_popup_conf2_pane_ParamLimits

0xa6eb,	// (0x00017f39) list_single_graphic_popup_conf2_pane

0xa6fe,	// (0x00017f4c) list_highlight_pane_cp04

0xae2f,	// (0x0001867d) list_single_graphic_popup_conf2_pane_g1

0xa70f,	// (0x00017f5d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001cd84) list_single_graphic_popup_conf2_pane_g

0xae39,	// (0x00018687) list_single_graphic_popup_conf2_pane_t1

0xae47,	// (0x00018695) bg_popup_call2_act_pane_cp01_ParamLimits

0xae47,	// (0x00018695) bg_popup_call2_act_pane_cp01

0xaed1,	// (0x0001871f) call_type_pane_cp05_ParamLimits

0xaed1,	// (0x0001871f) call_type_pane_cp05

0xaf25,	// (0x00018773) popup_call2_audio_second_window_g1_ParamLimits

0xaf25,	// (0x00018773) popup_call2_audio_second_window_g1

0xaf79,	// (0x000187c7) popup_call2_audio_second_window_g2_ParamLimits

0xaf79,	// (0x000187c7) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001cd89) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001cd89) popup_call2_audio_second_window_g

0xafde,	// (0x0001882c) popup_call2_audio_second_window_t1_ParamLimits

0xafde,	// (0x0001882c) popup_call2_audio_second_window_t1

0xb099,	// (0x000188e7) popup_call2_audio_second_window_t2_ParamLimits

0xb099,	// (0x000188e7) popup_call2_audio_second_window_t2

0xb0ec,	// (0x0001893a) popup_call2_audio_second_window_t3_ParamLimits

0xb0ec,	// (0x0001893a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001cd90) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001cd90) popup_call2_audio_second_window_t

0x9813,	// (0x00017061) bg_popup_call2_in_pane_cp02

0x981d,	// (0x0001706b) call_type_pane_cp04

0x9825,	// (0x00017073) popup_call2_audio_wait_window_g1

0x982d,	// (0x0001707b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001c969) popup_call2_audio_wait_window_g

0x9835,	// (0x00017083) popup_call2_audio_wait_window_t3

0xb1df,	// (0x00018a2d) bg_popup_call2_act_pane_ParamLimits

0xb1df,	// (0x00018a2d) bg_popup_call2_act_pane

0xb29f,	// (0x00018aed) call_type_pane_cp03_ParamLimits

0xb29f,	// (0x00018aed) call_type_pane_cp03

0xb303,	// (0x00018b51) popup_call2_audio_first_window_g1_ParamLimits

0xb303,	// (0x00018b51) popup_call2_audio_first_window_g1

0xb373,	// (0x00018bc1) popup_call2_audio_first_window_g2_ParamLimits

0xb373,	// (0x00018bc1) popup_call2_audio_first_window_g2

0xa9cb,	// (0x00018219) popup_call2_audio_first_window_g3_ParamLimits

0xa9cb,	// (0x00018219) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001cd99) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001cd99) popup_call2_audio_first_window_g

0xb451,	// (0x00018c9f) popup_call2_audio_first_window_t1_ParamLimits

0xb451,	// (0x00018c9f) popup_call2_audio_first_window_t1

0xb554,	// (0x00018da2) popup_call2_audio_first_window_t4_ParamLimits

0xb554,	// (0x00018da2) popup_call2_audio_first_window_t4

0xb637,	// (0x00018e85) popup_call2_audio_first_window_t5_ParamLimits

0xb637,	// (0x00018e85) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001cda4) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001cda4) popup_call2_audio_first_window_t

0x9a66,	// (0x000172b4) bg_popup_call2_act_pane_g1

0xbca4,	// (0x000194f2) popup_cale_lunar_info_window_t1

0xbcb2,	// (0x00019500) popup_cale_lunar_info_window_t2

0xbcc0,	// (0x0001950e) popup_cale_lunar_info_window_t3

0x9813,	// (0x00017061) bg_popup_call2_bubble_pane

0xb738,	// (0x00018f86) bg_popup_call2_in_pane_cp01_ParamLimits

0xb738,	// (0x00018f86) bg_popup_call2_in_pane_cp01

0x94ef,	// (0x00016d3d) call_type_pane_cp02

0xb780,	// (0x00018fce) popup_call2_audio_out_window_g1_ParamLimits

0xb780,	// (0x00018fce) popup_call2_audio_out_window_g1

0xb7ac,	// (0x00018ffa) popup_call2_audio_out_window_g2_ParamLimits

0xb7ac,	// (0x00018ffa) popup_call2_audio_out_window_g2

0xb7d4,	// (0x00019022) popup_call2_audio_out_window_g3_ParamLimits

0xb7d4,	// (0x00019022) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001cdad) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001cdad) popup_call2_audio_out_window_g

0xb80f,	// (0x0001905d) popup_call2_audio_out_window_t1_ParamLimits

0xb80f,	// (0x0001905d) popup_call2_audio_out_window_t1

0xb86e,	// (0x000190bc) popup_call2_audio_out_window_t2_ParamLimits

0xb86e,	// (0x000190bc) popup_call2_audio_out_window_t2

0xb8c2,	// (0x00019110) popup_call2_audio_out_window_t3_ParamLimits

0xb8c2,	// (0x00019110) popup_call2_audio_out_window_t3

0xb8d8,	// (0x00019126) popup_call2_audio_out_window_t4_ParamLimits

0xb8d8,	// (0x00019126) popup_call2_audio_out_window_t4

0xb8ee,	// (0x0001913c) popup_call2_audio_out_window_t5_ParamLimits

0xb8ee,	// (0x0001913c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001cdb6) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001cdb6) popup_call2_audio_out_window_t

0xb952,	// (0x000191a0) bg_popup_call2_in_pane_ParamLimits

0xb952,	// (0x000191a0) bg_popup_call2_in_pane

0xb9ae,	// (0x000191fc) popup_call2_audio_in_window_g1_ParamLimits

0xb9ae,	// (0x000191fc) popup_call2_audio_in_window_g1

0xb9e6,	// (0x00019234) popup_call2_audio_in_window_g2_ParamLimits

0xb9e6,	// (0x00019234) popup_call2_audio_in_window_g2

0xba1e,	// (0x0001926c) popup_call2_audio_in_window_g3_ParamLimits

0xba1e,	// (0x0001926c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001cdc3) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001cdc3) popup_call2_audio_in_window_g

0xba76,	// (0x000192c4) popup_call2_audio_in_window_t1_ParamLimits

0xba76,	// (0x000192c4) popup_call2_audio_in_window_t1

0xbaf6,	// (0x00019344) popup_call2_audio_in_window_t2_ParamLimits

0xbaf6,	// (0x00019344) popup_call2_audio_in_window_t2

0xbb76,	// (0x000193c4) popup_call2_audio_in_window_t3_ParamLimits

0xbb76,	// (0x000193c4) popup_call2_audio_in_window_t3

0xbb90,	// (0x000193de) popup_call2_audio_in_window_t4_ParamLimits

0xbb90,	// (0x000193de) popup_call2_audio_in_window_t4

0xbba2,	// (0x000193f0) popup_call2_audio_in_window_t5_ParamLimits

0xbba2,	// (0x000193f0) popup_call2_audio_in_window_t5

0xbbb7,	// (0x00019405) popup_call2_audio_in_window_t6_ParamLimits

0xbbb7,	// (0x00019405) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001cdcc) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001cdcc) popup_call2_audio_in_window_t

0x9a66,	// (0x000172b4) bg_popup_call2_in_pane_g1

0xbcce,	// (0x0001951c) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001ce34) popup_cale_lunar_info_window_t

0x9a6e,	// (0x000172bc) bg_popup_call2_rect_pane_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_call2_rect_pane

0x9813,	// (0x00017061) call2_cli_visual_graphic_pane

0x9813,	// (0x00017061) call2_cli_visual_text_pane

0xbea4,	// (0x000196f2) smil_status_volume_pane_g3

0x0002,

0x9be0,	// (0x0001742e) call2_cli_visual_graphic_pane_g1

0x9be0,	// (0x0001742e) call2_cli_visual_graphic_pane_g2

0x9be0,	// (0x0001742e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001cdd9) call2_cli_visual_graphic_pane_g

0xbbcc,	// (0x0001941a) bg_popup_call2_rect_pane_g1

0x9c6c,	// (0x000174ba) bg_popup_call2_rect_pane_g2

0xbbd4,	// (0x00019422) bg_popup_call2_rect_pane_g3

0xbbdc,	// (0x0001942a) bg_popup_call2_rect_pane_g4

0xbbe4,	// (0x00019432) bg_popup_call2_rect_pane_g5

0xbbec,	// (0x0001943a) bg_popup_call2_rect_pane_g6

0xbbf4,	// (0x00019442) bg_popup_call2_rect_pane_g7

0xbbfc,	// (0x0001944a) bg_popup_call2_rect_pane_g8

0xbc04,	// (0x00019452) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001cde0) bg_popup_call2_rect_pane_g

0xbc0c,	// (0x0001945a) bg_popup_call2_bubble_pane_g1

0xbc14,	// (0x00019462) bg_popup_call2_bubble_pane_g2

0xbc1c,	// (0x0001946a) bg_popup_call2_bubble_pane_g3

0xbc24,	// (0x00019472) bg_popup_call2_bubble_pane_g4

0xbc2c,	// (0x0001947a) bg_popup_call2_bubble_pane_g5

0xbc34,	// (0x00019482) bg_popup_call2_bubble_pane_g6

0xbc3c,	// (0x0001948a) bg_popup_call2_bubble_pane_g7

0xbc44,	// (0x00019492) bg_popup_call2_bubble_pane_g8

0xbc4c,	// (0x0001949a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001cdf3) bg_popup_call2_bubble_pane_g

0x149e,	// (0x0000ecec) aid_cale_week_size_cell_pane

0x19d0,	// (0x0000f21e) aid_cams_cif_uncrop_pane_ParamLimits

0x19d0,	// (0x0000f21e) aid_cams_cif_uncrop_pane

0x1b89,	// (0x0000f3d7) aid_cams_size_cell_ParamLimits

0x1b89,	// (0x0000f3d7) aid_cams_size_cell

0x1b9d,	// (0x0000f3eb) grid_cams_pane_ParamLimits

0x1bb7,	// (0x0000f405) linegrid_cams_pane_ParamLimits

0x1cee,	// (0x0000f53c) call_video_pane_t1

0x1d0c,	// (0x0000f55a) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cae0) call_video_pane_t

0x2138,	// (0x0000f986) aid_cale_month_size_cell_pane_ParamLimits

0x2138,	// (0x0000f986) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001ce7d) smil_status_volume_pane_g

0xbeb1,	// (0x000196ff) volume_smil_pane_ParamLimits

0x9394,	// (0x00016be2) aid_popup2_width_pane

0x1400,	// (0x0000ec4e) cell_qdial_pane_g4_ParamLimits

0x1400,	// (0x0000ec4e) cell_qdial_pane_g4

0x2c80,	// (0x000104ce) aid_blid_cardinal_pane_ParamLimits

0x2c8c,	// (0x000104da) aid_blid_destination_pane_ParamLimits

0x2c8c,	// (0x000104da) aid_blid_destination_pane

0x9a6e,	// (0x000172bc) bg_popup_call_poc_act_pane_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_call_poc_act_pane

0x9a6e,	// (0x000172bc) bg_popup_call_poc_inact_pane_ParamLimits

0x9a6e,	// (0x000172bc) bg_popup_call_poc_inact_pane

0xbc54,	// (0x000194a2) bg_popup_call_poc_act_pane_g1

0xbc5c,	// (0x000194aa) bg_popup_call_poc_act_pane_g2

0xbc64,	// (0x000194b2) bg_popup_call_poc_act_pane_g3

0xbc24,	// (0x00019472) bg_popup_call_poc_act_pane_g4

0xbc2c,	// (0x0001947a) bg_popup_call_poc_act_pane_g5

0xbc6c,	// (0x000194ba) bg_popup_call_poc_act_pane_g6

0xbc3c,	// (0x0001948a) bg_popup_call_poc_act_pane_g7

0xbc74,	// (0x000194c2) bg_popup_call_poc_act_pane_g8

0x9813,	// (0x00017061) main_usb_pane

0xbdcd,	// (0x0001961b) popup_cale_lunar_info_window

0x1fe4,	// (0x0000f832) im_reading_pane_t1_ParamLimits

0x9f79,	// (0x000177c7) list_im_pane_ParamLimits

0x9f8a,	// (0x000177d8) scroll_pane_cp07_ParamLimits

0x9813,	// (0x00017061) grid_highlight_pane_cp012

0x9a6e,	// (0x000172bc) mup_scale_pane_ParamLimits

0xab68,	// (0x000183b6) main_usb_pane_g1_ParamLimits

0xab68,	// (0x000183b6) main_usb_pane_g1

0x3915,	// (0x00011163) main_usb_pane_g2_ParamLimits

0x3915,	// (0x00011163) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001ce1d) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001ce1d) main_usb_pane_g

0x392b,	// (0x00011179) main_usb_pane_t1_ParamLimits

0x392b,	// (0x00011179) main_usb_pane_t1

0x393d,	// (0x0001118b) main_usb_pane_t2_ParamLimits

0x393d,	// (0x0001118b) main_usb_pane_t2

0x394f,	// (0x0001119d) main_usb_pane_t3_ParamLimits

0x394f,	// (0x0001119d) main_usb_pane_t3

0x3961,	// (0x000111af) main_usb_pane_t4_ParamLimits

0x3961,	// (0x000111af) main_usb_pane_t4

0x3973,	// (0x000111c1) main_usb_pane_t5_ParamLimits

0x3973,	// (0x000111c1) main_usb_pane_t5

0x3985,	// (0x000111d3) main_usb_pane_t6_ParamLimits

0x3985,	// (0x000111d3) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001ce22) main_usb_pane_t_ParamLimits

0x2c2f,	// (0x0001047d) aid_text_placing

0x2c38,	// (0x00010486) main_location2_pane_t1_ParamLimits

0x2c4a,	// (0x00010498) main_location2_pane_t2_ParamLimits

0x2c5c,	// (0x000104aa) main_location2_pane_t3_ParamLimits

0x2c6e,	// (0x000104bc) main_location2_pane_t4_ParamLimits

0x2c6e,	// (0x000104bc) main_location2_pane_t4

0xf3f3,	// (0x0001cc41) main_location2_pane_t_ParamLimits

0x9aaa,	// (0x000172f8) find_pinb_pane_g2_ParamLimits

0x9aaa,	// (0x000172f8) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001c98f) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001c98f) find_pinb_pane_g

0x9ab6,	// (0x00017304) find_pinb_pane_t1_ParamLimits

0x9ac8,	// (0x00017316) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001c994) find_pinb_pane_t_ParamLimits

0x9813,	// (0x00017061) main_call3_pane

0x249c,	// (0x0000fcea) cale_month_day_heading_pane_t1_ParamLimits

0x24fa,	// (0x0000fd48) cale_month_day_heading_pane_t2_ParamLimits

0x255f,	// (0x0000fdad) cale_month_day_heading_pane_t3_ParamLimits

0x25c4,	// (0x0000fe12) cale_month_day_heading_pane_t4_ParamLimits

0x2629,	// (0x0000fe77) cale_month_day_heading_pane_t5_ParamLimits

0x269e,	// (0x0000feec) cale_month_day_heading_pane_t6_ParamLimits

0x2713,	// (0x0000ff61) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cb18) cale_month_day_heading_pane_t_ParamLimits

0xa200,	// (0x00017a4e) smil_status_volume_pane

0x3410,	// (0x00010c5e) postcard_address_pane_ParamLimits

0x3410,	// (0x00010c5e) postcard_address_pane

0x3422,	// (0x00010c70) postcard_message_pane_ParamLimits

0x3422,	// (0x00010c70) postcard_message_pane

0x38f3,	// (0x00011141) call2_cli_visual_pane_t1_ParamLimits

0x38f3,	// (0x00011141) call2_cli_visual_pane_t1

0x4117,	// (0x00011965) postcard_message_pane_t1_ParamLimits

0x4117,	// (0x00011965) postcard_message_pane_t1

0x4100,	// (0x0001194e) postcard_address_pane_t1_ParamLimits

0x4100,	// (0x0001194e) postcard_address_pane_t1

0x40ec,	// (0x0001193a) popup_call3_audio_in_window_ParamLimits

0x40ec,	// (0x0001193a) popup_call3_audio_in_window

0x3f77,	// (0x000117c5) bg_popup_call3_in_pane_ParamLimits

0x3f77,	// (0x000117c5) bg_popup_call3_in_pane

0x3fed,	// (0x0001183b) popup_call3_audio_in_window_g1_ParamLimits

0x3fed,	// (0x0001183b) popup_call3_audio_in_window_g1

0x400d,	// (0x0001185b) popup_call3_audio_in_window_g2_ParamLimits

0x400d,	// (0x0001185b) popup_call3_audio_in_window_g2

0x402d,	// (0x0001187b) popup_call3_audio_in_window_g3_ParamLimits

0x402d,	// (0x0001187b) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001ce84) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001ce84) popup_call3_audio_in_window_g

0x405e,	// (0x000118ac) popup_call3_audio_in_window_t1_ParamLimits

0x405e,	// (0x000118ac) popup_call3_audio_in_window_t1

0x409c,	// (0x000118ea) popup_call3_audio_in_window_t2_ParamLimits

0x409c,	// (0x000118ea) popup_call3_audio_in_window_t2

0x40da,	// (0x00011928) popup_call3_audio_in_window_t3_ParamLimits

0x40da,	// (0x00011928) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001ce8d) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001ce8d) popup_call3_audio_in_window_t

0xa8fa,	// (0x00018148) bg_popup_call3_rect_pane

0xbbcc,	// (0x0001941a) bg_popup_call3_rect_pane_g1

0x9c6c,	// (0x000174ba) bg_popup_call3_rect_pane_g2

0xbbd4,	// (0x00019422) bg_popup_call3_rect_pane_g3

0xbbdc,	// (0x0001942a) bg_popup_call3_rect_pane_g4

0xbbe4,	// (0x00019432) bg_popup_call3_rect_pane_g5

0xbbec,	// (0x0001943a) bg_popup_call3_rect_pane_g6

0xbbf4,	// (0x00019442) bg_popup_call3_rect_pane_g7

0x3042,	// (0x00010890) mup_visualizer_osc_pane

0xa9d9,	// (0x00018227) mup_visualizer_spec_pane

0x3fa7,	// (0x000117f5) call3_video_qcif_pane_ParamLimits

0x3fa7,	// (0x000117f5) call3_video_qcif_pane

0x3fba,	// (0x00011808) call3_video_qcif_uncrop_pane_ParamLimits

0x3fba,	// (0x00011808) call3_video_qcif_uncrop_pane

0x3fc8,	// (0x00011816) call3_video_subqcif_pane_ParamLimits

0x3fc8,	// (0x00011816) call3_video_subqcif_pane

0x3fdc,	// (0x0001182a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3fdc,	// (0x0001182a) call3_video_subqcif_uncrop_pane

0x404d,	// (0x0001189b) popup_call3_audio_in_window_g4_ParamLimits

0x404d,	// (0x0001189b) popup_call3_audio_in_window_g4

0x3f66,	// (0x000117b4) mup_spec_half_pane

0x3f6f,	// (0x000117bd) mup_spec_half_pane_cp

0xbe64,	// (0x000196b2) mup_osc_middle_pane

0xbe6d,	// (0x000196bb) mup_visualizer_osc_pane_g1

0x3f46,	// (0x00011794) mup_spec_bar_pane_ParamLimits

0x3f46,	// (0x00011794) mup_spec_bar_pane

0xbe51,	// (0x0001969f) mup_spec_bar_pane_g1

0xbe5b,	// (0x000196a9) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001ce78) mup_spec_bar_pane_g

0x149e,	// (0x0000ecec) aid_cale_week_size_cell_pane_ParamLimits

0x14b1,	// (0x0000ecff) bg_cale_heading_pane_ParamLimits

0x9ce8,	// (0x00017536) bg_cale_pane_cp01_ParamLimits

0x14c5,	// (0x0000ed13) cale_week_corner_pane_ParamLimits

0x14db,	// (0x0000ed29) cale_week_day_heading_pane_ParamLimits

0x14ef,	// (0x0000ed3d) cale_week_scroll_pane_g1_ParamLimits

0x1500,	// (0x0000ed4e) cale_week_scroll_pane_g2_ParamLimits

0x1511,	// (0x0000ed5f) cale_week_scroll_pane_g3_ParamLimits

0x1522,	// (0x0000ed70) cale_week_scroll_pane_g4_ParamLimits

0x1533,	// (0x0000ed81) cale_week_scroll_pane_g5_ParamLimits

0x1546,	// (0x0000ed94) cale_week_scroll_pane_g6_ParamLimits

0x1559,	// (0x0000eda7) cale_week_scroll_pane_g7_ParamLimits

0x156c,	// (0x0000edba) cale_week_scroll_pane_g8_ParamLimits

0x157f,	// (0x0000edcd) cale_week_scroll_pane_g9_ParamLimits

0x1590,	// (0x0000edde) cale_week_scroll_pane_g10_ParamLimits

0x15a1,	// (0x0000edef) cale_week_scroll_pane_g11_ParamLimits

0x15b2,	// (0x0000ee00) cale_week_scroll_pane_g12_ParamLimits

0x15c3,	// (0x0000ee11) cale_week_scroll_pane_g13_ParamLimits

0x15d4,	// (0x0000ee22) cale_week_scroll_pane_g14_ParamLimits

0x15e5,	// (0x0000ee33) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001ca20) cale_week_scroll_pane_g_ParamLimits

0x15f6,	// (0x0000ee44) cale_week_time_pane_ParamLimits

0x1609,	// (0x0000ee57) grid_cale_week_pane_ParamLimits

0x9d01,	// (0x0001754f) listscroll_cale_week_pane_t1

0x161e,	// (0x0000ee6c) scroll_pane_cp08_ParamLimits

0x2179,	// (0x0000f9c7) cale_month_corner_pane_ParamLimits

0xa1a0,	// (0x000179ee) cale_month_pane_t1

0x245b,	// (0x0000fca9) cale_month_week_pane_ParamLimits

0x2a7b,	// (0x000102c9) popup_call_status_window_g1_ParamLimits

0x2a8f,	// (0x000102dd) popup_call_status_window_g2_ParamLimits

0x2aa3,	// (0x000102f1) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cbc8) popup_call_status_window_g_ParamLimits

0xa60b,	// (0x00017e59) aid_call2_pane

0x32a9,	// (0x00010af7) msg_header_pane_g1

0x3410,	// (0x00010c5e) postcard_address2_pane_ParamLimits

0x3410,	// (0x00010c5e) postcard_address2_pane

0x3422,	// (0x00010c70) postcard_message2_pane_ParamLimits

0x3422,	// (0x00010c70) postcard_message2_pane

0x3ef8,	// (0x00011746) message2_row_pane_ParamLimits

0x3ef8,	// (0x00011746) message2_row_pane

0x3f14,	// (0x00011762) address2_row_pane_ParamLimits

0x3f14,	// (0x00011762) address2_row_pane

0xbe1f,	// (0x0001966d) postcard_message2_row_pane_g1

0xbe27,	// (0x00019675) postcard_message2_row_pane_t1

0xbe1f,	// (0x0001966d) address2_row_pane_g1

0xbe27,	// (0x00019675) address2_row_pane_t1

0x18cc,	// (0x0000f11a) aid_size_cell_vorec

0x9813,	// (0x00017061) main_rss_pane

0x3f27,	// (0x00011775) rss_list_single_pane_ParamLimits

0x3f27,	// (0x00011775) rss_list_single_pane

0xbe35,	// (0x00019683) rss_list_single_pane_t1

0xbe43,	// (0x00019691) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001ce73) rss_list_single_pane_t

0x9813,	// (0x00017061) main_camera2_pane

0x9813,	// (0x00017061) main_video2_pane

0x4190,	// (0x000119de) cams_zoom_pane_cp2_ParamLimits

0x4190,	// (0x000119de) cams_zoom_pane_cp2

0x41b0,	// (0x000119fe) image2_vga_pane_ParamLimits

0x41b0,	// (0x000119fe) image2_vga_pane

0x4201,	// (0x00011a4f) main_camera2_pane_g1_ParamLimits

0x4201,	// (0x00011a4f) main_camera2_pane_g1

0x4221,	// (0x00011a6f) main_camera2_pane_g2_ParamLimits

0x4221,	// (0x00011a6f) main_camera2_pane_g2

0x4241,	// (0x00011a8f) main_camera2_pane_g3_ParamLimits

0x4241,	// (0x00011a8f) main_camera2_pane_g3

0x4261,	// (0x00011aaf) main_camera2_pane_g4_ParamLimits

0x4261,	// (0x00011aaf) main_camera2_pane_g4

0x4281,	// (0x00011acf) main_camera2_pane_g5_ParamLimits

0x4281,	// (0x00011acf) main_camera2_pane_g5

0x42a1,	// (0x00011aef) main_camera2_pane_g6_ParamLimits

0x42a1,	// (0x00011aef) main_camera2_pane_g6

0x42c1,	// (0x00011b0f) main_camera2_pane_g7_ParamLimits

0x42c1,	// (0x00011b0f) main_camera2_pane_g7

0x42e1,	// (0x00011b2f) main_camera2_pane_g8_ParamLimits

0x42e1,	// (0x00011b2f) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001ce94) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001ce94) main_camera2_pane_g

0x4321,	// (0x00011b6f) main_camera2_pane_t1_ParamLimits

0x4321,	// (0x00011b6f) main_camera2_pane_t1

0x4356,	// (0x00011ba4) main_camera2_pane_t2_ParamLimits

0x4356,	// (0x00011ba4) main_camera2_pane_t2

0x437c,	// (0x00011bca) main_camera2_pane_t3_ParamLimits

0x437c,	// (0x00011bca) main_camera2_pane_t3

0x43da,	// (0x00011c28) main_camera2_pane_t4_ParamLimits

0x43da,	// (0x00011c28) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001cea7) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001cea7) main_camera2_pane_t

0x446c,	// (0x00011cba) cams_zoom_pane_cp4_ParamLimits

0x446c,	// (0x00011cba) cams_zoom_pane_cp4

0x4482,	// (0x00011cd0) image2_cif_pane_ParamLimits

0x4482,	// (0x00011cd0) image2_cif_pane

0x44ad,	// (0x00011cfb) image2_subqcif_pane_ParamLimits

0x44ad,	// (0x00011cfb) image2_subqcif_pane

0x44c7,	// (0x00011d15) main_video2_pane_g1_ParamLimits

0x44c7,	// (0x00011d15) main_video2_pane_g1

0x44e1,	// (0x00011d2f) main_video2_pane_g2_ParamLimits

0x44e1,	// (0x00011d2f) main_video2_pane_g2

0x44f7,	// (0x00011d45) main_video2_pane_g3_ParamLimits

0x44f7,	// (0x00011d45) main_video2_pane_g3

0x450d,	// (0x00011d5b) main_video2_pane_g4_ParamLimits

0x450d,	// (0x00011d5b) main_video2_pane_g4

0x4523,	// (0x00011d71) main_video2_pane_g5_ParamLimits

0x4523,	// (0x00011d71) main_video2_pane_g5

0x4539,	// (0x00011d87) main_video2_pane_g6_ParamLimits

0x4539,	// (0x00011d87) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001ceb6) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001ceb6) main_video2_pane_g

0x4553,	// (0x00011da1) main_video2_pane_t1_ParamLimits

0x4553,	// (0x00011da1) main_video2_pane_t1

0x4577,	// (0x00011dc5) main_video2_pane_t2_ParamLimits

0x4577,	// (0x00011dc5) main_video2_pane_t2

0x45c5,	// (0x00011e13) main_video2_pane_t3_ParamLimits

0x45c5,	// (0x00011e13) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001cec3) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001cec3) main_video2_pane_t

0x3a40,	// (0x0001128e) call_muted_g2

0x0001,

0xf617,	// (0x0001ce65) call_muted_g

0x9813,	// (0x00017061) main_mup2_pane

0x4609,	// (0x00011e57) main_mup2_pane_g1_ParamLimits

0x4609,	// (0x00011e57) main_mup2_pane_g1

0x4615,	// (0x00011e63) main_mup2_pane_g2_ParamLimits

0x4615,	// (0x00011e63) main_mup2_pane_g2

0xbfd5,	// (0x00019823) main_mup_pane_g13_cp1

0xbfdd,	// (0x0001982b) mup_volume_pane_cp1

0x4631,	// (0x00011e7f) main_mup2_pane_g4_ParamLimits

0x4631,	// (0x00011e7f) main_mup2_pane_g4

0x4643,	// (0x00011e91) main_mup2_pane_g5_ParamLimits

0x4643,	// (0x00011e91) main_mup2_pane_g5

0x4655,	// (0x00011ea3) main_mup2_pane_g6_ParamLimits

0x4655,	// (0x00011ea3) main_mup2_pane_g6

0x4667,	// (0x00011eb5) main_mup2_pane_g7_ParamLimits

0x4667,	// (0x00011eb5) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001ceca) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001ceca) main_mup2_pane_g

0x467f,	// (0x00011ecd) main_mup2_pane_t1_ParamLimits

0x467f,	// (0x00011ecd) main_mup2_pane_t1

0x4695,	// (0x00011ee3) main_mup2_pane_t2_ParamLimits

0x4695,	// (0x00011ee3) main_mup2_pane_t2

0x46ab,	// (0x00011ef9) main_mup2_pane_t3_ParamLimits

0x46ab,	// (0x00011ef9) main_mup2_pane_t3

0x46c1,	// (0x00011f0f) main_mup2_pane_t4_ParamLimits

0x46c1,	// (0x00011f0f) main_mup2_pane_t4

0x46d9,	// (0x00011f27) main_mup2_pane_t5_ParamLimits

0x46d9,	// (0x00011f27) main_mup2_pane_t5

0x46f1,	// (0x00011f3f) main_mup2_pane_t6_ParamLimits

0x46f1,	// (0x00011f3f) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001ced9) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001ced9) main_mup2_pane_t

0x4721,	// (0x00011f6f) mup2_visualizer_pane_ParamLimits

0x4721,	// (0x00011f6f) mup2_visualizer_pane

0x474f,	// (0x00011f9d) mup_progress_pane_cp_ParamLimits

0x474f,	// (0x00011f9d) mup_progress_pane_cp

0xbfb7,	// (0x00019805) mup_volume_pane_cp_ParamLimits

0xbfb7,	// (0x00019805) mup_volume_pane_cp

0x4763,	// (0x00011fb1) mup2_visualizer_pane_g1_ParamLimits

0x4763,	// (0x00011fb1) mup2_visualizer_pane_g1

0xbef6,	// (0x00019744) mup2_visualizer_pane_g2_ParamLimits

0xbef6,	// (0x00019744) mup2_visualizer_pane_g2

0x477a,	// (0x00011fc8) mup2_visualizer_pane_g3_ParamLimits

0x477a,	// (0x00011fc8) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001cee6) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001cee6) mup2_visualizer_pane_g

0xacb1,	// (0x000184ff) aid_size_cell_fmradio

0x3bf2,	// (0x00011440) aid_height_parent_landcape

0xa008,	// (0x00017856) wml_content_pane_cp

0xa010,	// (0x0001785e) wml_tabs_pane

0xa019,	// (0x00017867) popup_wml_miniature_window

0xa021,	// (0x0001786f) scroll_pane_cp021

0xa035,	// (0x00017883) wml_content_pane_comp8

0x9813,	// (0x00017061) bg_popup_sub_pane_cp05

0xbf14,	// (0x00019762) popup_wml_miniature_window_g1

0xbf1c,	// (0x0001976a) wml_miniature_view_pane

0x4786,	// (0x00011fd4) aid_size_wml_view

0x478e,	// (0x00011fdc) wml_miniature_view_pane_g1

0x4797,	// (0x00011fe5) wml_miniature_view_pane_g2

0x47a0,	// (0x00011fee) wml_miniature_view_pane_g3

0x47a8,	// (0x00011ff6) wml_miniature_view_pane_g4

0x47b0,	// (0x00011ffe) wml_miniature_view_pane_g5

0x47b8,	// (0x00012006) wml_miniature_view_pane_g6

0x47c0,	// (0x0001200e) wml_miniature_view_pane_g7

0x47c8,	// (0x00012016) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001ceed) wml_miniature_view_pane_g

0xbf24,	// (0x00019772) background_graphic_ParamLimits

0xbf24,	// (0x00019772) background_graphic

0xbf30,	// (0x0001977e) wml_tabs_2_pane

0xbf39,	// (0x00019787) wml_tabs_3_pane_ParamLimits

0xbf39,	// (0x00019787) wml_tabs_3_pane

0xbf4b,	// (0x00019799) wml_tabs_4_pane_ParamLimits

0xbf4b,	// (0x00019799) wml_tabs_4_pane

0xbf61,	// (0x000197af) wml_tabs_5_pane_ParamLimits

0xbf61,	// (0x000197af) wml_tabs_5_pane

0xbf7b,	// (0x000197c9) wml_tabs_pane_g2_ParamLimits

0xbf7b,	// (0x000197c9) wml_tabs_pane_g2

0xbf8f,	// (0x000197dd) wml_tabs_pane_g3_ParamLimits

0xbf8f,	// (0x000197dd) wml_tabs_pane_g3

0x47d0,	// (0x0001201e) wml_tabs_2_active_pane_ParamLimits

0x47d0,	// (0x0001201e) wml_tabs_2_active_pane

0x47e4,	// (0x00012032) wml_tabs_2_passive_pane_ParamLimits

0x47e4,	// (0x00012032) wml_tabs_2_passive_pane

0x47f8,	// (0x00012046) wml_tabs_3_active_pane_cp_ParamLimits

0x47f8,	// (0x00012046) wml_tabs_3_active_pane_cp

0x480d,	// (0x0001205b) wml_tabs_3_passive_pane_ParamLimits

0x480d,	// (0x0001205b) wml_tabs_3_passive_pane

0x4820,	// (0x0001206e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4820,	// (0x0001206e) wml_tabs_3_passive_pane_cp

0x4837,	// (0x00012085) tabs_4_active_pane

0x483f,	// (0x0001208d) tabs_4_passive_pane

0x4849,	// (0x00012097) tabs_4_passive_pane_cp

0x4851,	// (0x0001209f) tabs_4_passive_pane_cp2

0x390d,	// (0x0001115b) aid_height_text

0x3018,	// (0x00010866) mup_volume_cont_pane_ParamLimits

0x3018,	// (0x00010866) mup_volume_cont_pane

0x109f,	// (0x0000e8ed) aid_size_cell_pinb

0x10a9,	// (0x0000e8f7) aid_size_list_pinb

0x473b,	// (0x00011f89) mup2_volume_cont_pane_ParamLimits

0x473b,	// (0x00011f89) mup2_volume_cont_pane

0xbfa3,	// (0x000197f1) mup2_volume_cont_pane_g1_ParamLimits

0xbfa3,	// (0x000197f1) mup2_volume_cont_pane_g1

0x0d81,	// (0x0000e5cf) aid_size_cell_touch_ParamLimits

0x0d81,	// (0x0000e5cf) aid_size_cell_touch

0x0f8f,	// (0x0000e7dd) touch_pane_ParamLimits

0x0f8f,	// (0x0000e7dd) touch_pane

0x9382,	// (0x00016bd0) main_rss2_pane

0xbfe5,	// (0x00019833) listscroll_rss2_pane

0xbfee,	// (0x0001983c) rss2_navigation_pane

0xbff6,	// (0x00019844) list_rss2_pane

0xa7b1,	// (0x00017fff) scroll_pane_cp22

0xbffe,	// (0x0001984c) rss2_navigation_pane_g1

0xc007,	// (0x00019855) rss2_navigation_pane_g2

0xc00f,	// (0x0001985d) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001cefe) rss2_navigation_pane_g

0xc017,	// (0x00019865) rss2_navigation_pane_t1

0x485b,	// (0x000120a9) rss2_list_single_pane_ParamLimits

0x485b,	// (0x000120a9) rss2_list_single_pane

0xc025,	// (0x00019873) rss2_list_single_pane_t2

0xc033,	// (0x00019881) rss2_list_single_pane_t3_ParamLimits

0xc033,	// (0x00019881) rss2_list_single_pane_t3

0xc050,	// (0x0001989e) rss2_list_single_pane_t4

0x290d,	// (0x0001015b) smil_status_pane_g1

0x93f2,	// (0x00016c40) main_image2_pane_ParamLimits

0x93f2,	// (0x00016c40) main_image2_pane

0x4301,	// (0x00011b4f) main_camera2_pane_g9_ParamLimits

0x4301,	// (0x00011b4f) main_camera2_pane_g9

0x442f,	// (0x00011c7d) main_camera2_pane_t5_ParamLimits

0x442f,	// (0x00011c7d) main_camera2_pane_t5

0xbec6,	// (0x00019714) main_camera2_pane_t6_ParamLimits

0xbec6,	// (0x00019714) main_camera2_pane_t6

0x4870,	// (0x000120be) main_image2_pane_g1_ParamLimits

0x4870,	// (0x000120be) main_image2_pane_g1

0x3649,	// (0x00010e97) smil2_video_pane_ParamLimits

0x3649,	// (0x00010e97) smil2_video_pane

0x93a0,	// (0x00016bee) aid_zoom_text_primary_cp

0x93e8,	// (0x00016c36) popup_preview_fixed_window

0x9f71,	// (0x000177bf) im_reading_pane_g1

0x4178,	// (0x000119c6) cams2_bc_adjust_pane_cp_ParamLimits

0x4178,	// (0x000119c6) cams2_bc_adjust_pane_cp

0x445e,	// (0x00011cac) cams2_bc_adjust_pane_ParamLimits

0x445e,	// (0x00011cac) cams2_bc_adjust_pane

0xc05e,	// (0x000198ac) cams2_bc_adjust_pane_g1

0xc066,	// (0x000198b4) cams2_slider_pane

0xc06f,	// (0x000198bd) cams2_slider_pane_g1

0xc078,	// (0x000198c6) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001cf05) cams2_slider_pane_g

0x118b,	// (0x0000e9d9) calc_display_pane_ParamLimits

0x11b3,	// (0x0000ea01) calc_paper_pane_ParamLimits

0x11d6,	// (0x0000ea24) grid_calc_pane_ParamLimits

0xa671,	// (0x00017ebf) popup_clock_digital_window_t1_ParamLimits

0xac4e,	// (0x0001849c) main_image_pane_t1

0x116d,	// (0x0000e9bb) aid_size_cell_calc_ParamLimits

0x116d,	// (0x0000e9bb) aid_size_cell_calc

0x3c38,	// (0x00011486) popup_blid_sat_info2_window_ParamLimits

0x3c38,	// (0x00011486) popup_blid_sat_info2_window

0xc09a,	// (0x000198e8) aid_size_cell_blid

0xc0a2,	// (0x000198f0) bg_popup_window_pane_cp07

0xc0c5,	// (0x00019913) grid_popup_blid_pane

0xc0cf,	// (0x0001991d) heading_pane_cp05_ParamLimits

0xc0cf,	// (0x0001991d) heading_pane_cp05

0xc199,	// (0x000199e7) cell_popup_blid_pane_ParamLimits

0xc199,	// (0x000199e7) cell_popup_blid_pane

0xc1bd,	// (0x00019a0b) cell_popup_blid_pane_g1

0xc1c5,	// (0x00019a13) cell_popup_blid_pane_t1

0x470b,	// (0x00011f59) mup2_indicator_pane_ParamLimits

0x470b,	// (0x00011f59) mup2_indicator_pane

0xa8fa,	// (0x00018148) mup2_visualizer_osc_pane

0xbf02,	// (0x00019750) mup2_visualizer_spec_pane_ParamLimits

0xbf02,	// (0x00019750) mup2_visualizer_spec_pane

0x4886,	// (0x000120d4) mup2_spec_half_pane

0x488f,	// (0x000120dd) mup2_spec_half_pane_cp

0x4897,	// (0x000120e5) mup2_spec_bar_pane_ParamLimits

0x4897,	// (0x000120e5) mup2_spec_bar_pane

0xbe51,	// (0x0001969f) mup2_spec_bar_pane_g1

0xbe5b,	// (0x000196a9) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001ce78) mup2_spec_bar_pane_g

0x48b7,	// (0x00012105) mup2_osc_middle_pane

0xbe6d,	// (0x000196bb) mup2_visualizer_osc_pane_g1

0x9420,	// (0x00016c6e) popup_number_entry_window_t1_ParamLimits

0x9433,	// (0x00016c81) popup_number_entry_window_t2_ParamLimits

0x9445,	// (0x00016c93) popup_number_entry_window_t3_ParamLimits

0x0fe1,	// (0x0000e82f) popup_number_entry_window_t5_ParamLimits

0x0fe1,	// (0x0000e82f) popup_number_entry_window_t5

0xf0ec,	// (0x0001c93a) popup_number_entry_window_t_ParamLimits

0x9457,	// (0x00016ca5) text_title_cp2_ParamLimits

0xab28,	// (0x00018376) aid_hotspot_pointer_text2_pane

0xab4e,	// (0x0001839c) main_viewer_pane_g9_ParamLimits

0xab4e,	// (0x0001839c) main_viewer_pane_g9

0xa1a0,	// (0x000179ee) cale_month_pane_t1_ParamLimits

0xa235,	// (0x00017a83) bg_cale_pane_ParamLimits

0xa24d,	// (0x00017a9b) list_cale_pane_ParamLimits

0x9d01,	// (0x0001754f) listscroll_cale_day_pane_t1

0xa25e,	// (0x00017aac) scroll_pane_cp09_ParamLimits

0x304a,	// (0x00010898) main_mup_eq_pane_t1_ParamLimits

0x304a,	// (0x00010898) main_mup_eq_pane_t1

0x3064,	// (0x000108b2) main_mup_eq_pane_t2_ParamLimits

0x3064,	// (0x000108b2) main_mup_eq_pane_t2

0x307e,	// (0x000108cc) main_mup_eq_pane_t3_ParamLimits

0x307e,	// (0x000108cc) main_mup_eq_pane_t3

0x309a,	// (0x000108e8) main_mup_eq_pane_t4_ParamLimits

0x309a,	// (0x000108e8) main_mup_eq_pane_t4

0x30b6,	// (0x00010904) main_mup_eq_pane_t5_ParamLimits

0x30b6,	// (0x00010904) main_mup_eq_pane_t5

0x30d2,	// (0x00010920) main_mup_eq_pane_t6_ParamLimits

0x30d2,	// (0x00010920) main_mup_eq_pane_t6

0x30e6,	// (0x00010934) main_mup_eq_pane_t7_ParamLimits

0x30e6,	// (0x00010934) main_mup_eq_pane_t7

0x30fa,	// (0x00010948) main_mup_eq_pane_t8_ParamLimits

0x30fa,	// (0x00010948) main_mup_eq_pane_t8

0x310e,	// (0x0001095c) main_mup_eq_pane_t9_ParamLimits

0x310e,	// (0x0001095c) main_mup_eq_pane_t9

0x3128,	// (0x00010976) main_mup_eq_pane_t10_ParamLimits

0x3128,	// (0x00010976) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001ccc7) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001ccc7) main_mup_eq_pane_t

0x31d7,	// (0x00010a25) mup_equalizer_pane_cp5_ParamLimits

0x31eb,	// (0x00010a39) mup_equalizer_pane_cp6_ParamLimits

0x31ff,	// (0x00010a4d) mup_equalizer_pane_cp7_ParamLimits

0x9382,	// (0x00016bd0) main_gallery_pane

0xbe76,	// (0x000196c4) smil2_volume_pane

0xbe7e,	// (0x000196cc) smil_status_volume_pane_g1_ParamLimits

0xbe91,	// (0x000196df) smil_status_volume_pane_g2_ParamLimits

0xbea4,	// (0x000196f2) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001ce7d) smil_status_volume_pane_g_ParamLimits

0xc0a2,	// (0x000198f0) bg_popup_window_pane_cp07_ParamLimits

0xc0b0,	// (0x000198fe) blid_firmament_pane

0x48c0,	// (0x0001210e) aid_size_cell_gallery_ParamLimits

0x48c0,	// (0x0001210e) aid_size_cell_gallery

0x48d6,	// (0x00012124) grid_gallery_pane_ParamLimits

0x48d6,	// (0x00012124) grid_gallery_pane

0x48ef,	// (0x0001213d) cell_gallery_pane_ParamLimits

0x48ef,	// (0x0001213d) cell_gallery_pane

0xc1d3,	// (0x00019a21) bg_cell_gallery_focus_pane_ParamLimits

0xc1d3,	// (0x00019a21) bg_cell_gallery_focus_pane

0xc1e5,	// (0x00019a33) cell_gallery_pane_g1_ParamLimits

0xc1e5,	// (0x00019a33) cell_gallery_pane_g1

0x4938,	// (0x00012186) cell_gallery_pane_g2_ParamLimits

0x4938,	// (0x00012186) cell_gallery_pane_g2

0x4945,	// (0x00012193) cell_gallery_pane_g3_ParamLimits

0x4945,	// (0x00012193) cell_gallery_pane_g3

0xc1f1,	// (0x00019a3f) cell_gallery_pane_g4_ParamLimits

0xc1f1,	// (0x00019a3f) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001cf2b) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001cf2b) cell_gallery_pane_g

0xc1fd,	// (0x00019a4b) bg_cell_gallery_focus_pane_g1

0xc205,	// (0x00019a53) bg_cell_gallery_focus_pane_g2

0xc20d,	// (0x00019a5b) bg_cell_gallery_focus_pane_g3

0xc215,	// (0x00019a63) bg_cell_gallery_focus_pane_g4

0xc21d,	// (0x00019a6b) bg_cell_gallery_focus_pane_g5

0xc225,	// (0x00019a73) bg_cell_gallery_focus_pane_g6

0xc22d,	// (0x00019a7b) bg_cell_gallery_focus_pane_g7

0xc235,	// (0x00019a83) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001cf34) bg_cell_gallery_focus_pane_g

0xc23d,	// (0x00019a8b) aid_firma_cardinal

0xc251,	// (0x00019a9f) blid_firmament_pane_t1

0xc268,	// (0x00019ab6) blid_firmament_pane_t2

0xc27f,	// (0x00019acd) blid_firmament_pane_t3

0xc296,	// (0x00019ae4) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001cf45) blid_firmament_pane_t

0xc2ad,	// (0x00019afb) blid_sat_info_pane

0xc2bd,	// (0x00019b0b) blid_sat_info_pane_g1

0xc2bd,	// (0x00019b0b) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001cf4e) blid_sat_info_pane_g

0xc2c7,	// (0x00019b15) blid_sat_info_pane_t1

0xc2d5,	// (0x00019b23) smil2_volume_content_pane

0xc2de,	// (0x00019b2c) smil2_volume_pane_g1

0xc2e6,	// (0x00019b34) smil2_volume_content_pane_g1

0xc2ef,	// (0x00019b3d) smil2_volume_content_pane_g2

0xc2f8,	// (0x00019b46) smil2_volume_content_pane_g3

0xc301,	// (0x00019b4f) smil2_volume_content_pane_g4

0xc30a,	// (0x00019b58) smil2_volume_content_pane_g5

0xc313,	// (0x00019b61) smil2_volume_content_pane_g6

0xc31c,	// (0x00019b6a) smil2_volume_content_pane_g7

0xc325,	// (0x00019b73) smil2_volume_content_pane_g8

0xc32e,	// (0x00019b7c) smil2_volume_content_pane_g9

0xc337,	// (0x00019b85) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001cf53) smil2_volume_content_pane_g

0x1678,	// (0x0000eec6) cale_week_day_heading_pane_t1_ParamLimits

0x16a5,	// (0x0000eef3) cale_week_day_heading_pane_t2_ParamLimits

0x16d2,	// (0x0000ef20) cale_week_day_heading_pane_t3_ParamLimits

0x16ff,	// (0x0000ef4d) cale_week_day_heading_pane_t4_ParamLimits

0x172c,	// (0x0000ef7a) cale_week_day_heading_pane_t5_ParamLimits

0x1759,	// (0x0000efa7) cale_week_day_heading_pane_t6_ParamLimits

0x1788,	// (0x0000efd6) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001ca3f) cale_week_day_heading_pane_t_ParamLimits

0x9d13,	// (0x00017561) bg_cale_side_pane_ParamLimits

0x17b5,	// (0x0000f003) cale_week_time_pane_t1_ParamLimits

0x17cd,	// (0x0000f01b) cale_week_time_pane_t2_ParamLimits

0x17e5,	// (0x0000f033) cale_week_time_pane_t3_ParamLimits

0x17fd,	// (0x0000f04b) cale_week_time_pane_t4_ParamLimits

0x1815,	// (0x0000f063) cale_week_time_pane_t5_ParamLimits

0x182d,	// (0x0000f07b) cale_week_time_pane_t6_ParamLimits

0x1845,	// (0x0000f093) cale_week_time_pane_t7_ParamLimits

0x185d,	// (0x0000f0ab) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001ca4e) cale_week_time_pane_t_ParamLimits

0x1875,	// (0x0000f0c3) cell_cale_week_pane_g2_ParamLimits

0x9d13,	// (0x00017561) bg_cale_side_pane_cp01_ParamLimits

0x2788,	// (0x0000ffd6) cale_month_week_pane_t1_ParamLimits

0x279f,	// (0x0000ffed) cale_month_week_pane_t2_ParamLimits

0x27b6,	// (0x00010004) cale_month_week_pane_t3_ParamLimits

0x27cd,	// (0x0001001b) cale_month_week_pane_t4_ParamLimits

0x27e4,	// (0x00010032) cale_month_week_pane_t5_ParamLimits

0x27fb,	// (0x00010049) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001cb27) cale_month_week_pane_t_ParamLimits

0xa1dc,	// (0x00017a2a) cell_cale_month_pane_g1_ParamLimits

0x9382,	// (0x00016bd0) main_cale_event_viewer_pane

0x9382,	// (0x00016bd0) listscroll_cale_event_viewer_pane

0xc340,	// (0x00019b8e) list_cale_ev_pane

0xc348,	// (0x00019b96) scroll_pane_cp023

0xc354,	// (0x00019ba2) field_cale_ev_pane_ParamLimits

0xc354,	// (0x00019ba2) field_cale_ev_pane

0xc372,	// (0x00019bc0) field_cale_ev_content_pane_ParamLimits

0xc372,	// (0x00019bc0) field_cale_ev_content_pane

0xc37e,	// (0x00019bcc) field_cale_ev_pane_g1_ParamLimits

0xc37e,	// (0x00019bcc) field_cale_ev_pane_g1

0xc38a,	// (0x00019bd8) field_cale_ev_pane_g2_ParamLimits

0xc38a,	// (0x00019bd8) field_cale_ev_pane_g2

0xc3a2,	// (0x00019bf0) field_cale_ev_pane_g3_ParamLimits

0xc3a2,	// (0x00019bf0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001cf68) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001cf68) field_cale_ev_pane_g

0xc3ba,	// (0x00019c08) field_cale_ev_pane_t1_ParamLimits

0xc3ba,	// (0x00019c08) field_cale_ev_pane_t1

0xc3d1,	// (0x00019c1f) field_cale_ev_content_pane_t1_ParamLimits

0xc3d1,	// (0x00019c1f) field_cale_ev_content_pane_t1

0xaa8b,	// (0x000182d9) bg_button_pane_cp01

0x9b67,	// (0x000173b5) listscroll_cale_week_pane_ParamLimits

0x1494,	// (0x0000ece2) popup_toolbar_window_cp01

0x9d01,	// (0x0001754f) listscroll_cale_week_pane_t1_ParamLimits

0x9b67,	// (0x000173b5) listscroll_cale_day_pane_ParamLimits

0x295e,	// (0x000101ac) popup_toolbar_window_cp02

0x9d01,	// (0x0001754f) listscroll_cale_day_pane_t1_ParamLimits

0x9b67,	// (0x000173b5) main_cale_month_pane_ParamLimits

0x3e6c,	// (0x000116ba) popup_toolbar_window_cp03_ParamLimits

0x3e6c,	// (0x000116ba) popup_toolbar_window_cp03

0x3511,	// (0x00010d5f) main_image_pane_g2_ParamLimits

0x3511,	// (0x00010d5f) main_image_pane_g2

0x3522,	// (0x00010d70) main_image_pane_g3_ParamLimits

0x3522,	// (0x00010d70) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001cd59) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001cd59) main_image_pane_g

0xac4e,	// (0x0001849c) main_image_pane_t1_ParamLimits

0x3533,	// (0x00010d81) main_image_pane_t2_ParamLimits

0x3533,	// (0x00010d81) main_image_pane_t2

0x3545,	// (0x00010d93) main_image_pane_t3_ParamLimits

0x3545,	// (0x00010d93) main_image_pane_t3

0x356d,	// (0x00010dbb) main_image_pane_t4_ParamLimits

0x356d,	// (0x00010dbb) main_image_pane_t4

0x0003,

0xf512,	// (0x0001cd60) main_image_pane_t_ParamLimits

0xf512,	// (0x0001cd60) main_image_pane_t

0x358d,	// (0x00010ddb) popup_image_details_window_cp01

0x3597,	// (0x00010de5) popup_toobar_trans_pane_cp01_ParamLimits

0x3597,	// (0x00010de5) popup_toobar_trans_pane_cp01

0x3d17,	// (0x00011565) popup_image_details_window_ParamLimits

0x3d17,	// (0x00011565) popup_image_details_window

0xbdd7,	// (0x00019625) popup_image_focus_window

0x4132,	// (0x00011980) camera2_autofocus_pane_ParamLimits

0x4132,	// (0x00011980) camera2_autofocus_pane

0x9382,	// (0x00016bd0) bg_popup_sub_pane_cp06

0xc3ef,	// (0x00019c3d) popup_image_focus_window_g1

0xc3f7,	// (0x00019c45) popup_image_focus_window_g2

0xc3ff,	// (0x00019c4d) popup_image_focus_window_g3

0xc407,	// (0x00019c55) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001cf6f) popup_image_focus_window_g

0xc40f,	// (0x00019c5d) popup_image_focus_window_t1

0xc41d,	// (0x00019c6b) popup_image_focus_window_t2

0xc42d,	// (0x00019c7b) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001cf78) popup_image_focus_window_t

0xc43b,	// (0x00019c89) camera2_autofocus_pane_g1

0x93f2,	// (0x00016c40) bg_tb_trans_pane_cp01

0xc449,	// (0x00019c97) popup_image_details_window_g1

0xc45c,	// (0x00019caa) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001cf8a) popup_image_details_window_g

0xc485,	// (0x00019cd3) popup_image_details_window_t1

0xc497,	// (0x00019ce5) popup_image_details_window_t2

0xc4b0,	// (0x00019cfe) popup_image_details_window_t3

0xc4c4,	// (0x00019d12) popup_image_details_window_t4

0xc4df,	// (0x00019d2d) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001cf91) popup_image_details_window_t

0x9b39,	// (0x00017387) bg_calc_paper_pane_ParamLimits

0x9382,	// (0x00016bd0) grid_highlight_pane_cp013

0x9b4d,	// (0x0001739b) list_calc_pane_ParamLimits

0x9b5f,	// (0x000173ad) scroll_pane_cp024

0x9b67,	// (0x000173b5) bg_calc_display_pane_ParamLimits

0x12c7,	// (0x0000eb15) calc_display_pane_t1_ParamLimits

0x12d9,	// (0x0000eb27) calc_display_pane_t2_ParamLimits

0x9b73,	// (0x000173c1) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001c9c1) calc_display_pane_t_ParamLimits

0x1391,	// (0x0000ebdf) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001c9de) cell_calc_pane_g

0x139a,	// (0x0000ebe8) cell_calc_pane_t1

0x9bea,	// (0x00017438) grid_highlight_pane_cp02_ParamLimits

0x9c00,	// (0x0001744e) toolbar_button_pane_cp01_ParamLimits

0x9c00,	// (0x0001744e) toolbar_button_pane_cp01

0xac93,	// (0x000184e1) temp_image_control_pane_ParamLimits

0xac93,	// (0x000184e1) temp_image_control_pane

0x93f2,	// (0x00016c40) main_mp3_pane

0xc4f9,	// (0x00019d47) temp_image_control_pane_g1_ParamLimits

0xc4f9,	// (0x00019d47) temp_image_control_pane_g1

0xc507,	// (0x00019d55) temp_image_control_pane_g2_ParamLimits

0xc507,	// (0x00019d55) temp_image_control_pane_g2

0xc519,	// (0x00019d67) temp_image_control_pane_g3_ParamLimits

0xc519,	// (0x00019d67) temp_image_control_pane_g3

0x4982,	// (0x000121d0) temp_image_control_pane_g4_ParamLimits

0x4982,	// (0x000121d0) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001cf9c) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001cf9c) temp_image_control_pane_g

0xc4f9,	// (0x00019d47) main_mp3_pane_g1

0x4995,	// (0x000121e3) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001cfa5) main_mp3_pane_g

0xc55c,	// (0x00019daa) main_mp3_pane_t1

0x9de2,	// (0x00017630) main_camera_pane_g8_ParamLimits

0x9de2,	// (0x00017630) main_camera_pane_g8

0x1b2f,	// (0x0000f37d) main_video_pane_g7_ParamLimits

0x1b2f,	// (0x0000f37d) main_video_pane_g7

0xbee4,	// (0x00019732) main_camera2_pane_t7_ParamLimits

0xbee4,	// (0x00019732) main_camera2_pane_t7

0x9fc8,	// (0x00017816) scroll_pane_cp025_ParamLimits

0x9fc8,	// (0x00017816) scroll_pane_cp025

0x9fdc,	// (0x0001782a) scroll_pane_cp026_ParamLimits

0x9fdc,	// (0x0001782a) scroll_pane_cp026

0x9feb,	// (0x00017839) wml_content_pane_ParamLimits

0x9382,	// (0x00016bd0) main_touch_calib_pane

0x4a5f,	// (0x000122ad) main_touch_calib_pane_g1

0x4a6b,	// (0x000122b9) main_touch_calib_pane_g2

0x4a77,	// (0x000122c5) main_touch_calib_pane_g3

0x4a83,	// (0x000122d1) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001cfc3) main_touch_calib_pane_g

0x4a8f,	// (0x000122dd) main_touch_calib_pane_t1

0x4aa9,	// (0x000122f7) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001cfcc) main_touch_calib_pane_t

0xa83b,	// (0x00018089) mup_progress_pane_cp02

0xa85a,	// (0x000180a8) navi_pane_g1

0xa8bc,	// (0x0001810a) navi_pane_mp_t3

0x93f2,	// (0x00016c40) main_mp3_pane_ParamLimits

0x3eaa,	// (0x000116f8) navi_pane_ParamLimits

0xc4f9,	// (0x00019d47) main_mp3_pane_g1_ParamLimits

0x4995,	// (0x000121e3) main_mp3_pane_g2_ParamLimits

0x49a3,	// (0x000121f1) main_mp3_pane_g3_ParamLimits

0x49a3,	// (0x000121f1) main_mp3_pane_g3

0x49b1,	// (0x000121ff) main_mp3_pane_g4_ParamLimits

0x49b1,	// (0x000121ff) main_mp3_pane_g4

0xc529,	// (0x00019d77) main_mp3_pane_g5_ParamLimits

0xc529,	// (0x00019d77) main_mp3_pane_g5

0xc537,	// (0x00019d85) main_mp3_pane_g6_ParamLimits

0xc537,	// (0x00019d85) main_mp3_pane_g6

0xc544,	// (0x00019d92) main_mp3_pane_g7_ParamLimits

0xc544,	// (0x00019d92) main_mp3_pane_g7

0xc550,	// (0x00019d9e) main_mp3_pane_g8_ParamLimits

0xc550,	// (0x00019d9e) main_mp3_pane_g8

0xf757,	// (0x0001cfa5) main_mp3_pane_g_ParamLimits

0x49bd,	// (0x0001220b) main_mp3_pane_t2

0x49cb,	// (0x00012219) main_mp3_pane_t3

0xc56a,	// (0x00019db8) main_mp3_pane_t4

0xc578,	// (0x00019dc6) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001cfb6) main_mp3_pane_t

0xc586,	// (0x00019dd4) mup_progress_pane_cp01

0x93a0,	// (0x00016bee) aid_zoom_text_secondary2

0xc340,	// (0x00019b8e) list_cale_ev2_pane

0xc348,	// (0x00019b96) scroll_pane_cp023_ParamLimits

0x4aff,	// (0x0001234d) field_cale_ev2_pane_ParamLimits

0x4aff,	// (0x0001234d) field_cale_ev2_pane

0x4b1f,	// (0x0001236d) field_cale_ev2_pane_g1_ParamLimits

0x4b1f,	// (0x0001236d) field_cale_ev2_pane_g1

0x4b2b,	// (0x00012379) field_cale_ev2_pane_g2_ParamLimits

0x4b2b,	// (0x00012379) field_cale_ev2_pane_g2

0x4b43,	// (0x00012391) field_cale_ev2_pane_g3_ParamLimits

0x4b43,	// (0x00012391) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001cfd7) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001cfd7) field_cale_ev2_pane_g

0x4b5b,	// (0x000123a9) field_cale_ev2_pane_t1_ParamLimits

0x4b5b,	// (0x000123a9) field_cale_ev2_pane_t1

0x4b72,	// (0x000123c0) field_cale_ev2_pane_t2_ParamLimits

0x4b72,	// (0x000123c0) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001cfe0) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001cfe0) field_cale_ev2_pane_t

0x33c6,	// (0x00010c14) main_postcard_pane_g5_ParamLimits

0x33c6,	// (0x00010c14) main_postcard_pane_g5

0x33dc,	// (0x00010c2a) main_postcard_pane_g6_ParamLimits

0x33dc,	// (0x00010c2a) main_postcard_pane_g6

0x18ef,	// (0x0000f13d) camera2_autofocus_pane_cp_ParamLimits

0x18ef,	// (0x0000f13d) camera2_autofocus_pane_cp

0x93f2,	// (0x00016c40) main_mup3_pane

0x4ba7,	// (0x000123f5) main_mup3_pane_g1_ParamLimits

0x4ba7,	// (0x000123f5) main_mup3_pane_g1

0x4bc9,	// (0x00012417) main_mup3_pane_g2_ParamLimits

0x4bc9,	// (0x00012417) main_mup3_pane_g2

0x4c47,	// (0x00012495) main_mup3_pane_g3_ParamLimits

0x4c47,	// (0x00012495) main_mup3_pane_g3

0x4c89,	// (0x000124d7) main_mup3_pane_g4_ParamLimits

0x4c89,	// (0x000124d7) main_mup3_pane_g4

0x4ccb,	// (0x00012519) main_mup3_pane_g5_ParamLimits

0x4ccb,	// (0x00012519) main_mup3_pane_g5

0x4d0d,	// (0x0001255b) main_mup3_pane_g6_ParamLimits

0x4d0d,	// (0x0001255b) main_mup3_pane_g6

0xc59a,	// (0x00019de8) main_mup3_pane_g7_ParamLimits

0xc59a,	// (0x00019de8) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001cff0) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001cff0) main_mup3_pane_g

0x4d87,	// (0x000125d5) main_mup3_pane_t1_ParamLimits

0x4d87,	// (0x000125d5) main_mup3_pane_t1

0x4df7,	// (0x00012645) main_mup3_pane_t2_ParamLimits

0x4df7,	// (0x00012645) main_mup3_pane_t2

0x4ec7,	// (0x00012715) main_mup3_pane_t4_ParamLimits

0x4ec7,	// (0x00012715) main_mup3_pane_t4

0x4f1d,	// (0x0001276b) main_mup3_pane_t5_ParamLimits

0x4f1d,	// (0x0001276b) main_mup3_pane_t5

0x4fd1,	// (0x0001281f) main_mup3_pane_t6_ParamLimits

0x4fd1,	// (0x0001281f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001d001) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001d001) main_mup3_pane_t

0x5085,	// (0x000128d3) mup3_progress_pane_ParamLimits

0x5085,	// (0x000128d3) mup3_progress_pane

0x5107,	// (0x00012955) popup_mup3_control_window_ParamLimits

0x5107,	// (0x00012955) popup_mup3_control_window

0xc5a8,	// (0x00019df6) popup_mup3_text_window

0x5139,	// (0x00012987) mup3_progress_pane_t1

0x5150,	// (0x0001299e) mup3_progress_pane_t2

0xc5b0,	// (0x00019dfe) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d00e) mup3_progress_pane_t

0xc5c7,	// (0x00019e15) mup_progress_pane_cp03

0x9382,	// (0x00016bd0) bg_tb_trans_pane_cp04

0x5167,	// (0x000129b5) mup3_volume_pane

0x516f,	// (0x000129bd) popup_mup3_control_window_g1

0x5178,	// (0x000129c6) mup3_volume_pane_g1

0x5181,	// (0x000129cf) mup3_volume_pane_g2

0x518a,	// (0x000129d8) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d015) mup3_volume_pane_g

0x9382,	// (0x00016bd0) bg_tb_trans_pane_cp03

0xc5d7,	// (0x00019e25) popup_mup3_text_window_g1

0xc5df,	// (0x00019e2d) popup_mup3_text_window_t1

0x9bc1,	// (0x0001740f) list_calc_item_pane_g1_ParamLimits

0xbfcc,	// (0x0001981a) mup_volume_pane_cp_g1

0x4ac3,	// (0x00012311) main_touch_calib_pane_t3

0x4ad7,	// (0x00012325) main_touch_calib_pane_t4

0x4aeb,	// (0x00012339) main_touch_calib_pane_t5

0x938c,	// (0x00016bda) aid_cell_size_toolbar2

0x9394,	// (0x00016be2) aid_popup3_width_pane

0x93a0,	// (0x00016bee) aid_zoom_text_msg_primary

0x9dc2,	// (0x00017610) vorec_t7

0x9b85,	// (0x000173d3) bg_calc_paper_pane_g1_ParamLimits

0x9b91,	// (0x000173df) bg_calc_paper_pane_g2_ParamLimits

0x9b9d,	// (0x000173eb) bg_calc_paper_pane_g3_ParamLimits

0x9ba9,	// (0x000173f7) bg_calc_paper_pane_g4_ParamLimits

0x9bb5,	// (0x00017403) bg_calc_paper_pane_g5_ParamLimits

0x1320,	// (0x0000eb6e) bg_calc_paper_pane_g6_ParamLimits

0x132f,	// (0x0000eb7d) bg_calc_paper_pane_g7_ParamLimits

0x133e,	// (0x0000eb8c) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001c9c8) bg_calc_paper_pane_g_ParamLimits

0x1351,	// (0x0000eb9f) calc_bg_paper_pane_g9_ParamLimits

0x1a3d,	// (0x0000f28b) image_qvga_pane_ParamLimits

0x1a3d,	// (0x0000f28b) image_qvga_pane

0x9a6e,	// (0x000172bc) bg_popup_sub_pane_cp04_ParamLimits

0xabca,	// (0x00018418) popup_mup_playback_window_g1_ParamLimits

0xabd6,	// (0x00018424) popup_mup_playback_window_t1_ParamLimits

0xabeb,	// (0x00018439) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001cd54) popup_mup_playback_window_t_ParamLimits

0x4625,	// (0x00011e73) main_mup2_pane_g3_ParamLimits

0x4625,	// (0x00011e73) main_mup2_pane_g3

0x1d8f,	// (0x0000f5dd) popup_toolbar_window_cp04

0xafcd,	// (0x0001881b) popup_call2_audio_second_window_g3_ParamLimits

0xafcd,	// (0x0001881b) popup_call2_audio_second_window_g3

0xb3d7,	// (0x00018c25) popup_call2_audio_first_window_g4_ParamLimits

0xb3d7,	// (0x00018c25) popup_call2_audio_first_window_g4

0xba56,	// (0x000192a4) popup_call2_audio_in_window_g4_ParamLimits

0xba56,	// (0x000192a4) popup_call2_audio_in_window_g4

0x34f3,	// (0x00010d41) aid_area_sk_bg_cut_ParamLimits

0x34f3,	// (0x00010d41) aid_area_sk_bg_cut

0xac00,	// (0x0001844e) aid_area_sk_bg_cut_2_ParamLimits

0xac00,	// (0x0001844e) aid_area_sk_bg_cut_2

0x4928,	// (0x00012176) aid_placing_details_win

0x4930,	// (0x0001217e) aid_placing_details_win_2

0xc43b,	// (0x00019c89) camera2_autofocus_pane_g1_ParamLimits

0x0f2e,	// (0x0000e77c) popup_fixed_preview_cale_window_ParamLimits

0x0f2e,	// (0x0000e77c) popup_fixed_preview_cale_window

0xa914,	// (0x00018162) navi_slider_pane_g3

0xa91d,	// (0x0001816b) navi_slider_pane_g4

0xa926,	// (0x00018174) navi_slider_pane_g5

0xa914,	// (0x00018162) navi_slider_pane_g6

0xa92f,	// (0x0001817d) navi_slider_pane_g7

0xaa50,	// (0x0001829e) mup_scale_pane_g3

0xaa59,	// (0x000182a7) mup_scale_pane_g4

0xaa62,	// (0x000182b0) mup_scale_pane_g5

0x3213,	// (0x00010a61) mup_scale_pane_g6

0x321c,	// (0x00010a6a) mup_scale_pane_g7

0xa914,	// (0x00018162) cams2_slider_pane_g3

0xc081,	// (0x000198cf) cams2_slider_pane_g4

0xc089,	// (0x000198d7) cams2_slider_pane_g5

0xa914,	// (0x00018162) cams2_slider_pane_g6

0xc091,	// (0x000198df) cams2_slider_pane_g7

0xc2bd,	// (0x00019b0b) camera2_autofocus_pane_cp_g1

0xc5ed,	// (0x00019e3b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5ed,	// (0x00019e3b) bg_popup_preview_window_pane_cp02

0xc5f9,	// (0x00019e47) list_fp_cale_pane_ParamLimits

0xc5f9,	// (0x00019e47) list_fp_cale_pane

0xc605,	// (0x00019e53) popup_fixed_preview_cale_window_t1_ParamLimits

0xc605,	// (0x00019e53) popup_fixed_preview_cale_window_t1

0x5193,	// (0x000129e1) popup_fixed_preview_cale_window_t2_ParamLimits

0x5193,	// (0x000129e1) popup_fixed_preview_cale_window_t2

0x51a8,	// (0x000129f6) popup_fixed_preview_cale_window_t3_ParamLimits

0x51a8,	// (0x000129f6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d01c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d01c) popup_fixed_preview_cale_window_t

0x51bd,	// (0x00012a0b) list_single_fp_cale_pane_ParamLimits

0x51bd,	// (0x00012a0b) list_single_fp_cale_pane

0xc623,	// (0x00019e71) list_single_fp_cale_pane_g1_ParamLimits

0xc623,	// (0x00019e71) list_single_fp_cale_pane_g1

0xc62f,	// (0x00019e7d) list_single_fp_cale_pane_g2_ParamLimits

0xc62f,	// (0x00019e7d) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d023) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d023) list_single_fp_cale_pane_g

0xc648,	// (0x00019e96) list_single_fp_cale_pane_t1_ParamLimits

0xc648,	// (0x00019e96) list_single_fp_cale_pane_t1

0xc65a,	// (0x00019ea8) list_single_fp_cale_pane_t2_ParamLimits

0xc65a,	// (0x00019ea8) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d02a) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d02a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9382,	// (0x00016bd0) main_dialer_pane

0x51d2,	// (0x00012a20) aid_cell_size_keypad

0x51dc,	// (0x00012a2a) dialer_ne_pane

0x51e4,	// (0x00012a32) grid_dialer_command_1_pane

0x51ec,	// (0x00012a3a) grid_dialer_command_2_pane

0x51f4,	// (0x00012a42) grid_dialer_keypad_pane

0x5206,	// (0x00012a54) bg_popup_call_pane_cp06_ParamLimits

0x5206,	// (0x00012a54) bg_popup_call_pane_cp06

0x5212,	// (0x00012a60) dialer_ne_clear_pane_ParamLimits

0x5212,	// (0x00012a60) dialer_ne_clear_pane

0xc68d,	// (0x00019edb) dialer_ne_pane_g1

0xc695,	// (0x00019ee3) dialer_ne_pane_t1_ParamLimits

0xc695,	// (0x00019ee3) dialer_ne_pane_t1

0x521e,	// (0x00012a6c) dialer_ne_pane_t2_ParamLimits

0x521e,	// (0x00012a6c) dialer_ne_pane_t2

0x5248,	// (0x00012a96) dialer_ne_pane_t3_ParamLimits

0x5248,	// (0x00012a96) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d02f) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d02f) dialer_ne_pane_t

0x5278,	// (0x00012ac6) dialer_ne_pane_t3_copy1_ParamLimits

0x5278,	// (0x00012ac6) dialer_ne_pane_t3_copy1

0x52a7,	// (0x00012af5) cell_dialer_keypad_pane_ParamLimits

0x52a7,	// (0x00012af5) cell_dialer_keypad_pane

0x52be,	// (0x00012b0c) cell_dialer_command_1_pane_ParamLimits

0x52be,	// (0x00012b0c) cell_dialer_command_1_pane

0x52d4,	// (0x00012b22) cell_dialer_command_2_pane_ParamLimits

0x52d4,	// (0x00012b22) cell_dialer_command_2_pane

0xc6a7,	// (0x00019ef5) bg_button_pane_cp02_ParamLimits

0xc6a7,	// (0x00019ef5) bg_button_pane_cp02

0x52e3,	// (0x00012b31) cell_dialer_keypad_pane_g1_ParamLimits

0x52e3,	// (0x00012b31) cell_dialer_keypad_pane_g1

0xc6a7,	// (0x00019ef5) bg_button_pane_cp03_ParamLimits

0xc6a7,	// (0x00019ef5) bg_button_pane_cp03

0x52f7,	// (0x00012b45) cell_dialer_command_1_pane_g1_ParamLimits

0x52f7,	// (0x00012b45) cell_dialer_command_1_pane_g1

0xc6b3,	// (0x00019f01) bg_button_pane_cp04

0x530b,	// (0x00012b59) cell_dialer_command_2_pane_g1

0xa8fa,	// (0x00018148) bg_button_pane_cp06

0xc6bb,	// (0x00019f09) dialer_ne_clear_pane_g1

0x2d57,	// (0x000105a5) navi_pane_g2

0x2d85,	// (0x000105d3) navi_pane_g3

0x0002,

0xf409,	// (0x0001cc57) navi_pane_g

0x2dae,	// (0x000105fc) navi_pane_mv_g2

0x2dd5,	// (0x00010623) navi_pane_mv_g5

0x2ddd,	// (0x0001062b) navi_pane_mv_t1

0x9b67,	// (0x000173b5) main_clock2_pane

0x533f,	// (0x00012b8d) main_clock2_list_pane_ParamLimits

0x533f,	// (0x00012b8d) main_clock2_list_pane

0x5375,	// (0x00012bc3) main_clock2_pane_t1_ParamLimits

0x5375,	// (0x00012bc3) main_clock2_pane_t1

0x53b1,	// (0x00012bff) main_clock2_pane_t2_ParamLimits

0x53b1,	// (0x00012bff) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d036) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d036) main_clock2_pane_t

0x543b,	// (0x00012c89) popup_clock_analogue_window_cp03_ParamLimits

0x543b,	// (0x00012c89) popup_clock_analogue_window_cp03

0x5460,	// (0x00012cae) popup_clock_digital_window_cp02_ParamLimits

0x5460,	// (0x00012cae) popup_clock_digital_window_cp02

0x54d1,	// (0x00012d1f) main_clock2_list_single_pane_ParamLimits

0x54d1,	// (0x00012d1f) main_clock2_list_single_pane

0xa8fa,	// (0x00018148) list_highlight_pane_cp05

0xc6c3,	// (0x00019f11) main_clock2_list_single_pane_t1

0x1d8f,	// (0x0000f5dd) popup_toolbar_window_cp04_ParamLimits

0x4952,	// (0x000121a0) camera2_autofocus_pane_g2_ParamLimits

0x4952,	// (0x000121a0) camera2_autofocus_pane_g2

0x495e,	// (0x000121ac) camera2_autofocus_pane_g3_ParamLimits

0x495e,	// (0x000121ac) camera2_autofocus_pane_g3

0x496a,	// (0x000121b8) camera2_autofocus_pane_g4_ParamLimits

0x496a,	// (0x000121b8) camera2_autofocus_pane_g4

0x4976,	// (0x000121c4) camera2_autofocus_pane_g5_ParamLimits

0x4976,	// (0x000121c4) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001cf7f) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001cf7f) camera2_autofocus_pane_g

0x4b87,	// (0x000123d5) camera2_autofocus_pane_cp_g2

0x4b8f,	// (0x000123dd) camera2_autofocus_pane_cp_g3

0x4b97,	// (0x000123e5) camera2_autofocus_pane_cp_g4

0x4b9f,	// (0x000123ed) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001cfe5) camera2_autofocus_pane_cp_g

0x51fe,	// (0x00012a4c) popup_dialer_spcha_window

0x9382,	// (0x00016bd0) bg_popup_sub_pane_cp07

0xc6d1,	// (0x00019f1f) list_spcha_pane

0xc6d9,	// (0x00019f27) list_single_spcha_pane_ParamLimits

0xc6d9,	// (0x00019f27) list_single_spcha_pane

0x9382,	// (0x00016bd0) list_highlight_pane_cp06

0xc6ea,	// (0x00019f38) list_single_spcha_pane_t1

0xb800,	// (0x0001904e) popup_call2_audio_out_window_g4_ParamLimits

0xb800,	// (0x0001904e) popup_call2_audio_out_window_g4

0x9382,	// (0x00016bd0) main_imed2_pane

0xbddf,	// (0x0001962d) popup_imed_adjust2_window

0x3d2f,	// (0x0001157d) popup_imed_trans_window_ParamLimits

0x3d2f,	// (0x0001157d) popup_imed_trans_window

0xc0fb,	// (0x00019949) popup_blid_sat_info2_window_t1

0xc109,	// (0x00019957) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001cf14) popup_blid_sat_info2_window_t

0x557b,	// (0x00012dc9) aid_size_cell_colour_35

0x559b,	// (0x00012de9) aid_size_cell_colour_112

0x55bb,	// (0x00012e09) aid_size_cell_effect

0xbdb7,	// (0x00019605) bg_tb_trans_pane_cp02

0xa355,	// (0x00017ba3) heading_imed_pane

0x55db,	// (0x00012e29) listscroll_imed_pane

0xc6f8,	// (0x00019f46) heading_imed_pane_g1

0xc700,	// (0x00019f4e) heading_imed_pane_t1

0xc70e,	// (0x00019f5c) grid_imed_colour_35_pane_ParamLimits

0xc70e,	// (0x00019f5c) grid_imed_colour_35_pane

0x55e7,	// (0x00012e35) grid_imed_effect_pane

0xc725,	// (0x00019f73) list_imed_aspect_pane

0x55fd,	// (0x00012e4b) scroll_pane_cp027_ParamLimits

0x55fd,	// (0x00012e4b) scroll_pane_cp027

0x560e,	// (0x00012e5c) cell_imed_effect_pane_ParamLimits

0x560e,	// (0x00012e5c) cell_imed_effect_pane

0xc72d,	// (0x00019f7b) cell_imed_colour_pane_ParamLimits

0xc72d,	// (0x00019f7b) cell_imed_colour_pane

0xc76f,	// (0x00019fbd) cell_imed_colour_pane_g1_ParamLimits

0xc76f,	// (0x00019fbd) cell_imed_colour_pane_g1

0xc780,	// (0x00019fce) hgihlgiht_grid_pane_cp016_ParamLimits

0xc780,	// (0x00019fce) hgihlgiht_grid_pane_cp016

0x5635,	// (0x00012e83) cell_imed_effect_pane_g1

0x563d,	// (0x00012e8b) grid_highlight_pane_cp017

0xc791,	// (0x00019fdf) list_imed_single_pane_ParamLimits

0xc791,	// (0x00019fdf) list_imed_single_pane

0x9382,	// (0x00016bd0) list_highlight_pane_cp07

0xc7a6,	// (0x00019ff4) list_imed_aspect_pane_comp1_t1

0xbdb7,	// (0x00019605) bg_tb_trans_pane_cp05

0xc7c8,	// (0x0001a016) popup_imed_adjust2_window_g1

0xc7ef,	// (0x0001a03d) popup_imed_adjust2_window_t1

0xc807,	// (0x0001a055) slider_imed_adjust_pane

0xc81b,	// (0x0001a069) slider_imed_adjust_pane_g1

0xc82b,	// (0x0001a079) slider_imed_adjust_pane_g2

0xc83b,	// (0x0001a089) slider_imed_adjust_pane_g3

0xc84c,	// (0x0001a09a) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d053) slider_imed_adjust_pane_g

0x5646,	// (0x00012e94) aid_size_cell_clipart2

0x5652,	// (0x00012ea0) grid_imed_clipart_pane

0xc85d,	// (0x0001a0ab) scroll_pane_cp031

0x565c,	// (0x00012eaa) cell_imed_clipart_pane_ParamLimits

0x565c,	// (0x00012eaa) cell_imed_clipart_pane

0x567e,	// (0x00012ecc) cell_imed_clipart_pane_g1

0x9382,	// (0x00016bd0) grid_highlight_pane_cp014

0x5354,	// (0x00012ba2) main_clock2_pane_g1_ParamLimits

0x5354,	// (0x00012ba2) main_clock2_pane_g1

0x547c,	// (0x00012cca) aid_call2_pane_cp10

0x548e,	// (0x00012cdc) aid_call_pane_cp10

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g1

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g2

0x54a0,	// (0x00012cee) popup_clock_analogue_window_cp10_g3

0x54a0,	// (0x00012cee) popup_clock_analogue_window_cp10_g4

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d041) popup_clock_analogue_window_cp10_g

0x54b2,	// (0x00012d00) popup_clock_analogue_window_cp10_t1

0x54e3,	// (0x00012d31) clock_digital_number_pane_cp10_ParamLimits

0x54e3,	// (0x00012d31) clock_digital_number_pane_cp10

0x54fb,	// (0x00012d49) clock_digital_number_pane_cp11_ParamLimits

0x54fb,	// (0x00012d49) clock_digital_number_pane_cp11

0x5513,	// (0x00012d61) clock_digital_number_pane_cp12_ParamLimits

0x5513,	// (0x00012d61) clock_digital_number_pane_cp12

0x552b,	// (0x00012d79) clock_digital_number_pane_cp13_ParamLimits

0x552b,	// (0x00012d79) clock_digital_number_pane_cp13

0x5543,	// (0x00012d91) clock_digital_separator_pane_cp10_ParamLimits

0x5543,	// (0x00012d91) clock_digital_separator_pane_cp10

0x555b,	// (0x00012da9) popup_clock_digital_window_cp02_t1_ParamLimits

0x555b,	// (0x00012da9) popup_clock_digital_window_cp02_t1

0x9a66,	// (0x000172b4) clock_digital_number_pane_cp10_g1

0x9a66,	// (0x000172b4) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d05c) clock_digital_number_pane_cp10_g

0x9a66,	// (0x000172b4) clock_digital_separator_pane_cp10_g1

0x9a66,	// (0x000172b4) clock_digital_separator_pane_g2_cp10

0xa8ca,	// (0x00018118) navi_pane_vded_g4

0xa8d3,	// (0x00018121) navi_pane_vded_g5

0xa8dc,	// (0x0001812a) navi_pane_vded_t1

0x9382,	// (0x00016bd0) main_vded_pane

0x5687,	// (0x00012ed5) main_vded_pane_g1

0x5691,	// (0x00012edf) main_vded_pane_g2

0x569b,	// (0x00012ee9) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d061) main_vded_pane_g

0x56a5,	// (0x00012ef3) main_vded_pane_t1

0x56b3,	// (0x00012f01) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d068) main_vded_pane_t

0x56c1,	// (0x00012f0f) vded_slider_pane

0x56c9,	// (0x00012f17) vded_video_pane

0xc865,	// (0x0001a0b3) vded_video_pane_g1

0x56d1,	// (0x00012f1f) vded_video_pane_g2

0xc2bd,	// (0x00019b0b) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d06d) vded_video_pane_g

0xc86f,	// (0x0001a0bd) vded_slider_pane_g1

0xbfcc,	// (0x0001981a) vded_slider_pane_g2

0xc878,	// (0x0001a0c6) vded_slider_pane_g3

0xc881,	// (0x0001a0cf) vded_slider_pane_g4

0xc88a,	// (0x0001a0d8) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d074) vded_slider_pane_g

0x50ef,	// (0x0001293d) mup3_rocker_pane_ParamLimits

0x50ef,	// (0x0001293d) mup3_rocker_pane

0x56da,	// (0x00012f28) mup3_control_keys_pane_g1

0x56e2,	// (0x00012f30) mup3_control_keys_pane_g2

0x56ea,	// (0x00012f38) mup3_control_keys_pane_g3

0x56f2,	// (0x00012f40) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d07f) mup3_control_keys_pane_g

0x0f65,	// (0x0000e7b3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f65,	// (0x0000e7b3) popup_toolbar2_fixed_window_cp01

0x5123,	// (0x00012971) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5123,	// (0x00012971) popup_toolbar2_fixed_window_cp02

0xb13f,	// (0x0001898d) popup_call2_audio_second_window_t4_ParamLimits

0xb13f,	// (0x0001898d) popup_call2_audio_second_window_t4

0xb66d,	// (0x00018ebb) popup_call2_audio_first_window_t6_ParamLimits

0xb66d,	// (0x00018ebb) popup_call2_audio_first_window_t6

0xb903,	// (0x00019151) popup_call2_audio_out_window_t6_ParamLimits

0xb903,	// (0x00019151) popup_call2_audio_out_window_t6

0x9382,	// (0x00016bd0) main_vitu_pane

0x5702,	// (0x00012f50) aid_size_cell_itu_ParamLimits

0x5702,	// (0x00012f50) aid_size_cell_itu

0x93f2,	// (0x00016c40) bg_popup_window_pane_cp08_ParamLimits

0x93f2,	// (0x00016c40) bg_popup_window_pane_cp08

0x5718,	// (0x00012f66) field_vitu_entry_pane_ParamLimits

0x5718,	// (0x00012f66) field_vitu_entry_pane

0x572f,	// (0x00012f7d) grid_vitu_function_pane_ParamLimits

0x572f,	// (0x00012f7d) grid_vitu_function_pane

0x574a,	// (0x00012f98) grid_vitu_itu_pane_ParamLimits

0x574a,	// (0x00012f98) grid_vitu_itu_pane

0x5768,	// (0x00012fb6) cell_vitu_itu_pane_ParamLimits

0x5768,	// (0x00012fb6) cell_vitu_itu_pane

0x578a,	// (0x00012fd8) cell_vitu_function_pane_ParamLimits

0x578a,	// (0x00012fd8) cell_vitu_function_pane

0x93f2,	// (0x00016c40) bg_popup_sub_pane_cp08_ParamLimits

0x93f2,	// (0x00016c40) bg_popup_sub_pane_cp08

0x57a3,	// (0x00012ff1) field_vitu_entry_pane_t1_ParamLimits

0x57a3,	// (0x00012ff1) field_vitu_entry_pane_t1

0xc8ab,	// (0x0001a0f9) field_vitu_entry_pane_t2_ParamLimits

0xc8ab,	// (0x0001a0f9) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d08d) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d08d) field_vitu_entry_pane_t

0xc8c8,	// (0x0001a116) bg_button_pane_cp05_ParamLimits

0xc8c8,	// (0x0001a116) bg_button_pane_cp05

0x57c1,	// (0x0001300f) cell_vitu_itu_pane_g1

0x57d9,	// (0x00013027) cell_vitu_itu_pane_t1_ParamLimits

0x57d9,	// (0x00013027) cell_vitu_itu_pane_t1

0x57eb,	// (0x00013039) cell_vitu_itu_pane_t2_ParamLimits

0x57eb,	// (0x00013039) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d092) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d092) cell_vitu_itu_pane_t

0xc8d6,	// (0x0001a124) bg_button_pane_cp07

0x5820,	// (0x0001306e) cell_vitu_function_pane_g1

0x9b01,	// (0x0001734f) main_calc_pane_g1

0x0da5,	// (0x0000e5f3) aid_visual_content_pane

0x9382,	// (0x00016bd0) main_vradio_pane

0x5829,	// (0x00013077) main_vradio_pane_g1_ParamLimits

0x5829,	// (0x00013077) main_vradio_pane_g1

0xc8e0,	// (0x0001a12e) main_vradio_pane_g2_ParamLimits

0xc8e0,	// (0x0001a12e) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d099) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d099) main_vradio_pane_g

0x5842,	// (0x00013090) main_vradio_pane_t1_ParamLimits

0x5842,	// (0x00013090) main_vradio_pane_t1

0x5857,	// (0x000130a5) main_vradio_pane_t2_ParamLimits

0x5857,	// (0x000130a5) main_vradio_pane_t2

0xc8ed,	// (0x0001a13b) main_vradio_pane_t3_ParamLimits

0xc8ed,	// (0x0001a13b) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d09e) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d09e) main_vradio_pane_t

0x586c,	// (0x000130ba) vradio_rocker_control_pane_ParamLimits

0x586c,	// (0x000130ba) vradio_rocker_control_pane

0x587e,	// (0x000130cc) vradio_station_info_pane_ParamLimits

0x587e,	// (0x000130cc) vradio_station_info_pane

0xc901,	// (0x0001a14f) vradio_frequency_info_pane_ParamLimits

0xc901,	// (0x0001a14f) vradio_frequency_info_pane

0xc2bd,	// (0x00019b0b) vradio_station_info_pane_g1

0xc910,	// (0x0001a15e) vradio_station_info_pane_t1_ParamLimits

0xc910,	// (0x0001a15e) vradio_station_info_pane_t1

0xc932,	// (0x0001a180) vradio_station_info_pane_t2_ParamLimits

0xc932,	// (0x0001a180) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d0a5) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d0a5) vradio_station_info_pane_t

0xc944,	// (0x0001a192) vradio_tuning_pane

0xc94c,	// (0x0001a19a) vradio_rocker_control_pane_g1

0xc954,	// (0x0001a1a2) vradio_rocker_control_pane_g2

0xc95c,	// (0x0001a1aa) vradio_rocker_control_pane_g3

0xc972,	// (0x0001a1c0) vradio_rocker_control_pane_g4

0xc97a,	// (0x0001a1c8) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d0aa) vradio_rocker_control_pane_g

0x5890,	// (0x000130de) vradio_frequency_info_pane_g1

0xc982,	// (0x0001a1d0) vradio_frequency_info_pane_t1_ParamLimits

0xc982,	// (0x0001a1d0) vradio_frequency_info_pane_t1

0x589a,	// (0x000130e8) vradio_tuning_pane_g1

0x58a5,	// (0x000130f3) vradio_tuning_pane_t1

0x93b0,	// (0x00016bfe) area_side_right_pane_ParamLimits

0x93b0,	// (0x00016bfe) area_side_right_pane

0xbd7e,	// (0x000195cc) status_small_pane_g1

0xbd86,	// (0x000195d4) status_small_pane_g2

0xbd8f,	// (0x000195dd) status_small_pane_g3

0xbd98,	// (0x000195e6) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001ce6a) status_small_pane_g

0xbda1,	// (0x000195ef) status_small_pane_t1

0x9382,	// (0x00016bd0) main_video3_pane

0xc996,	// (0x0001a1e4) cams_zoom_vslider_pane

0xc99e,	// (0x0001a1ec) image3_wide_pane_ParamLimits

0xc99e,	// (0x0001a1ec) image3_wide_pane

0xc9b8,	// (0x0001a206) image3_wide_small_pane

0xc9c4,	// (0x0001a212) main_video3_pane_g1_ParamLimits

0xc9c4,	// (0x0001a212) main_video3_pane_g1

0xc9e0,	// (0x0001a22e) main_video3_pane_g2_ParamLimits

0xc9e0,	// (0x0001a22e) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d0b5) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d0b5) main_video3_pane_g

0xc9fc,	// (0x0001a24a) main_video3_pane_t1_ParamLimits

0xc9fc,	// (0x0001a24a) main_video3_pane_t1

0xca27,	// (0x0001a275) main_video3_pane_t2_ParamLimits

0xca27,	// (0x0001a275) main_video3_pane_t2

0xca52,	// (0x0001a2a0) main_video3_pane_t3_ParamLimits

0xca52,	// (0x0001a2a0) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d0ba) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d0ba) main_video3_pane_t

0xca7f,	// (0x0001a2cd) cams_zoom_vslider_pane_g1

0xca88,	// (0x0001a2d6) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d0c1) cams_zoom_vslider_pane_g

0xca90,	// (0x0001a2de) small_slider_vertical_pane

0xc2bd,	// (0x00019b0b) small_slider_vertical_pane_g1

0xc2bd,	// (0x00019b0b) small_slider_vertical_pane_g2

0xca98,	// (0x0001a2e6) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d0c6) small_slider_vertical_pane_g

0x9382,	// (0x00016bd0) main_hwr_training_pane

0xcaa1,	// (0x0001a2ef) hwr_training_instruct_pane_ParamLimits

0xcaa1,	// (0x0001a2ef) hwr_training_instruct_pane

0x58b4,	// (0x00013102) hwr_training_navi_pane_ParamLimits

0x58b4,	// (0x00013102) hwr_training_navi_pane

0x58d3,	// (0x00013121) hwr_training_write_pane_ParamLimits

0x58d3,	// (0x00013121) hwr_training_write_pane

0x9382,	// (0x00016bd0) bg_frame_shadow_pane

0xcad8,	// (0x0001a326) hwr_training_write_pane_g1

0xcae0,	// (0x0001a32e) hwr_training_write_pane_g2

0xcae8,	// (0x0001a336) hwr_training_write_pane_g3

0xcaf0,	// (0x0001a33e) hwr_training_write_pane_g4

0xcaf8,	// (0x0001a346) hwr_training_write_pane_g5

0xcb00,	// (0x0001a34e) hwr_training_write_pane_g6

0xcb08,	// (0x0001a356) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d0cd) hwr_training_write_pane_g

0xcb10,	// (0x0001a35e) hwr_training_navi_pane_g1_ParamLimits

0xcb10,	// (0x0001a35e) hwr_training_navi_pane_g1

0xcb22,	// (0x0001a370) hwr_training_navi_pane_g2_ParamLimits

0xcb22,	// (0x0001a370) hwr_training_navi_pane_g2

0xcb34,	// (0x0001a382) hwr_training_navi_pane_g3_ParamLimits

0xcb34,	// (0x0001a382) hwr_training_navi_pane_g3

0xcb44,	// (0x0001a392) hwr_training_navi_pane_g4_ParamLimits

0xcb44,	// (0x0001a392) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d0dc) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d0dc) hwr_training_navi_pane_g

0xcb51,	// (0x0001a39f) hwr_training_navi_pane_t1

0x591b,	// (0x00013169) list_single_hwr_training_instruct_pane_ParamLimits

0x591b,	// (0x00013169) list_single_hwr_training_instruct_pane

0xcb5f,	// (0x0001a3ad) list_single_hwr_training_instruct_pane_t1

0xc1fd,	// (0x00019a4b) bg_frame_shadow_pane_g1

0xcb6e,	// (0x0001a3bc) bg_frame_shadow_pane_g2

0xcb76,	// (0x0001a3c4) bg_frame_shadow_pane_g3

0xcb7e,	// (0x0001a3cc) bg_frame_shadow_pane_g4

0xcb86,	// (0x0001a3d4) bg_frame_shadow_pane_g5

0xcb8e,	// (0x0001a3dc) bg_frame_shadow_pane_g6

0xcb96,	// (0x0001a3e4) bg_frame_shadow_pane_g7

0x9c44,	// (0x00017492) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d0e7) bg_frame_shadow_pane_g

0x9382,	// (0x00016bd0) main_video_tele_dialer_pane

0x5930,	// (0x0001317e) aid_size_cell_video_keypad_ParamLimits

0x5930,	// (0x0001317e) aid_size_cell_video_keypad

0x594a,	// (0x00013198) grid_video_dialer_keypad_pane_ParamLimits

0x594a,	// (0x00013198) grid_video_dialer_keypad_pane

0x5994,	// (0x000131e2) video_down_pane_cp_ParamLimits

0x5994,	// (0x000131e2) video_down_pane_cp

0x59a4,	// (0x000131f2) cell_video_dialer_keypad_pane_ParamLimits

0x59a4,	// (0x000131f2) cell_video_dialer_keypad_pane

0xcbba,	// (0x0001a408) bg_button_pane_cp08_ParamLimits

0xcbba,	// (0x0001a408) bg_button_pane_cp08

0x59c6,	// (0x00013214) cell_video_dialer_keypad_pane_g1_ParamLimits

0x59c6,	// (0x00013214) cell_video_dialer_keypad_pane_g1

0x50d9,	// (0x00012927) mup3_rocker2_pane_ParamLimits

0x50d9,	// (0x00012927) mup3_rocker2_pane

0xc2bd,	// (0x00019b0b) mup3_rocker2_pane_g1

0x3c10,	// (0x0001145e) main_dialer2_pane

0x9382,	// (0x00016bd0) main_mp4_pane

0xcbce,	// (0x0001a41c) main_mp4_pane_g1_ParamLimits

0xcbce,	// (0x0001a41c) main_mp4_pane_g1

0xcbce,	// (0x0001a41c) main_mp4_pane_g2_ParamLimits

0xcbce,	// (0x0001a41c) main_mp4_pane_g2

0x5a00,	// (0x0001324e) main_mp4_pane_g3_ParamLimits

0x5a00,	// (0x0001324e) main_mp4_pane_g3

0xcbdc,	// (0x0001a42a) main_mp4_pane_g4_ParamLimits

0xcbdc,	// (0x0001a42a) main_mp4_pane_g4

0xcc04,	// (0x0001a452) main_mp4_pane_g5_ParamLimits

0xcc04,	// (0x0001a452) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d107) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d107) main_mp4_pane_g

0xcc54,	// (0x0001a4a2) main_mp4_pane_t1_ParamLimits

0xcc54,	// (0x0001a4a2) main_mp4_pane_t1

0xccb0,	// (0x0001a4fe) main_mp4_pane_t2_ParamLimits

0xccb0,	// (0x0001a4fe) main_mp4_pane_t2

0xcd02,	// (0x0001a550) main_mp4_pane_t3_ParamLimits

0xcd02,	// (0x0001a550) main_mp4_pane_t3

0xcd22,	// (0x0001a570) main_mp4_pane_t4_ParamLimits

0xcd22,	// (0x0001a570) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d114) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d114) main_mp4_pane_t

0xcd66,	// (0x0001a5b4) mp4_progress_pane_ParamLimits

0xcd66,	// (0x0001a5b4) mp4_progress_pane

0xcdb0,	// (0x0001a5fe) mp4_rocker_pane_ParamLimits

0xcdb0,	// (0x0001a5fe) mp4_rocker_pane

0xcdd8,	// (0x0001a626) mp4_progress_pane_t1

0xcdf1,	// (0x0001a63f) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d11d) mp4_progress_pane_t

0xce0a,	// (0x0001a658) mup_progress_pane_cp04

0xc2bd,	// (0x00019b0b) mp4_rocker_pane_g1

0x5a3c,	// (0x0001328a) aid_cell_size_keypad2_ParamLimits

0x5a3c,	// (0x0001328a) aid_cell_size_keypad2

0x5a52,	// (0x000132a0) dialer2_ne_pane_ParamLimits

0x5a52,	// (0x000132a0) dialer2_ne_pane

0x5a6c,	// (0x000132ba) grid_dialer2_keypad_pane_ParamLimits

0x5a6c,	// (0x000132ba) grid_dialer2_keypad_pane

0xc0a2,	// (0x000198f0) bg_popup_call_pane_cp07_ParamLimits

0xc0a2,	// (0x000198f0) bg_popup_call_pane_cp07

0x5a88,	// (0x000132d6) dialer2_ne_pane_t1_ParamLimits

0x5a88,	// (0x000132d6) dialer2_ne_pane_t1

0x5ac3,	// (0x00013311) cell_dialer2_keypad_pane_ParamLimits

0x5ac3,	// (0x00013311) cell_dialer2_keypad_pane

0xce28,	// (0x0001a676) bg_button_pane_pane_cp04_ParamLimits

0xce28,	// (0x0001a676) bg_button_pane_pane_cp04

0x5ae5,	// (0x00013333) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ae5,	// (0x00013333) cell_dialer2_keypad_pane_g1

0x1c65,	// (0x0000f4b3) aid_placing_vt_set_content_ParamLimits

0x1c65,	// (0x0000f4b3) aid_placing_vt_set_content

0x1c8b,	// (0x0000f4d9) aid_placing_vt_set_title_ParamLimits

0x1c8b,	// (0x0000f4d9) aid_placing_vt_set_title

0x9382,	// (0x00016bd0) main_image3_pane

0x5bab,	// (0x000133f9) area_side_right_pane_cp01_ParamLimits

0x5bab,	// (0x000133f9) area_side_right_pane_cp01

0xcbce,	// (0x0001a41c) main_image3_pane_g1_ParamLimits

0xcbce,	// (0x0001a41c) main_image3_pane_g1

0x5bc2,	// (0x00013410) main_image3_pane_g2_ParamLimits

0x5bc2,	// (0x00013410) main_image3_pane_g2

0x5bea,	// (0x00013438) main_image3_pane_g3_ParamLimits

0x5bea,	// (0x00013438) main_image3_pane_g3

0x5c14,	// (0x00013462) main_image3_pane_g4_ParamLimits

0x5c14,	// (0x00013462) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d12c) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d12c) main_image3_pane_g

0x5c3e,	// (0x0001348c) main_image3_pane_t1_ParamLimits

0x5c3e,	// (0x0001348c) main_image3_pane_t1

0x5c96,	// (0x000134e4) main_image3_pane_t2_ParamLimits

0x5c96,	// (0x000134e4) main_image3_pane_t2

0x5ce8,	// (0x00013536) main_image3_pane_t3_ParamLimits

0x5ce8,	// (0x00013536) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d135) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d135) main_image3_pane_t

0x93f2,	// (0x00016c40) grid_sctrl_middle_pane_cp01_ParamLimits

0x93f2,	// (0x00016c40) grid_sctrl_middle_pane_cp01

0x5d70,	// (0x000135be) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d70,	// (0x000135be) cell_sctrl_middle_pane_cp01

0x5d8d,	// (0x000135db) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d8d,	// (0x000135db) cell_sctrl_middle_pane_cp01_g1

0x9382,	// (0x00016bd0) main_call4_pane

0x5da3,	// (0x000135f1) aid_size_button_call4_ParamLimits

0x5da3,	// (0x000135f1) aid_size_button_call4

0x5dd4,	// (0x00013622) call4_windows_pane_ParamLimits

0x5dd4,	// (0x00013622) call4_windows_pane

0x5df4,	// (0x00013642) grid_call4_button_pane_ParamLimits

0x5df4,	// (0x00013642) grid_call4_button_pane

0xce66,	// (0x0001a6b4) call4_windows_conf_pane

0xce7d,	// (0x0001a6cb) popup_call4_audio_first_window_ParamLimits

0xce7d,	// (0x0001a6cb) popup_call4_audio_first_window

0xcec9,	// (0x0001a717) popup_call4_audio_second_window_ParamLimits

0xcec9,	// (0x0001a717) popup_call4_audio_second_window

0xcedd,	// (0x0001a72b) popup_call4_audio_wait_window_ParamLimits

0xcedd,	// (0x0001a72b) popup_call4_audio_wait_window

0x5e21,	// (0x0001366f) cell_call4_button_pane_ParamLimits

0x5e21,	// (0x0001366f) cell_call4_button_pane

0x5e4a,	// (0x00013698) bg_button_pane_cp09_ParamLimits

0x5e4a,	// (0x00013698) bg_button_pane_cp09

0x5e56,	// (0x000136a4) cell_call4_button_pane_g1_ParamLimits

0x5e56,	// (0x000136a4) cell_call4_button_pane_g1

0x5e7c,	// (0x000136ca) cell_call4_button_pane_t1_ParamLimits

0x5e7c,	// (0x000136ca) cell_call4_button_pane_t1

0xcf25,	// (0x0001a773) popup_call4_audio_conf_window_ParamLimits

0xcf25,	// (0x0001a773) popup_call4_audio_conf_window

0x5139,	// (0x00012987) mup3_progress_pane_t1_ParamLimits

0x5150,	// (0x0001299e) mup3_progress_pane_t2_ParamLimits

0xc5b0,	// (0x00019dfe) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d00e) mup3_progress_pane_t_ParamLimits

0xc5c7,	// (0x00019e15) mup_progress_pane_cp03_ParamLimits

0x56fa,	// (0x00012f48) mup3_control_keys_pane_g4_copy1

0xcd94,	// (0x0001a5e2) mp4_rocker2_pane_ParamLimits

0xcd94,	// (0x0001a5e2) mp4_rocker2_pane

0xcf39,	// (0x0001a787) mp4_rocker2_pane_g1

0xcf41,	// (0x0001a78f) mp4_rocker2_pane_g2

0xcf49,	// (0x0001a797) mp4_rocker2_pane_g3

0xcf51,	// (0x0001a79f) mp4_rocker2_pane_g4

0xcf59,	// (0x0001a7a7) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d13e) mp4_rocker2_pane_g

0x9382,	// (0x00016bd0) main_camera4_pane

0x9382,	// (0x00016bd0) main_video4_pane

0x5962,	// (0x000131b0) main_video_tele_dialer_pane_t1_ParamLimits

0x5962,	// (0x000131b0) main_video_tele_dialer_pane_t1

0x597b,	// (0x000131c9) main_video_tele_dialer_pane_t2_ParamLimits

0x597b,	// (0x000131c9) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d0f8) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d0f8) main_video_tele_dialer_pane_t

0x5eba,	// (0x00013708) cam4_autofocus_pane_ParamLimits

0x5eba,	// (0x00013708) cam4_autofocus_pane

0x5ed0,	// (0x0001371e) cam4_image_uncrop_pane_ParamLimits

0x5ed0,	// (0x0001371e) cam4_image_uncrop_pane

0x5eea,	// (0x00013738) cam4_indicators_pane_ParamLimits

0x5eea,	// (0x00013738) cam4_indicators_pane

0x5f15,	// (0x00013763) main_camera4_pane_g1_ParamLimits

0x5f15,	// (0x00013763) main_camera4_pane_g1

0x5f28,	// (0x00013776) main_camera4_pane_g2_ParamLimits

0x5f28,	// (0x00013776) main_camera4_pane_g2

0x5f3b,	// (0x00013789) main_camera4_pane_g3_ParamLimits

0x5f3b,	// (0x00013789) main_camera4_pane_g3

0x5f4e,	// (0x0001379c) main_camera4_pane_g4_ParamLimits

0x5f4e,	// (0x0001379c) main_camera4_pane_g4

0x5f61,	// (0x000137af) main_camera4_pane_g5_ParamLimits

0x5f61,	// (0x000137af) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d149) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d149) main_camera4_pane_g

0x5f85,	// (0x000137d3) main_camera4_pane_t1_ParamLimits

0x5f85,	// (0x000137d3) main_camera4_pane_t1

0xc529,	// (0x00019d77) bg_tb_trans_pane_cp06

0xcf85,	// (0x0001a7d3) cam4_indicators_pane_g1

0xcf96,	// (0x0001a7e4) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d164) cam4_indicators_pane_g

0xcfb4,	// (0x0001a802) cam4_indicators_pane_t1

0x5fe9,	// (0x00013837) main_video4_pane_g1_ParamLimits

0x5fe9,	// (0x00013837) main_video4_pane_g1

0x5ffc,	// (0x0001384a) main_video4_pane_g2_ParamLimits

0x5ffc,	// (0x0001384a) main_video4_pane_g2

0x6010,	// (0x0001385e) main_video4_pane_g3_ParamLimits

0x6010,	// (0x0001385e) main_video4_pane_g3

0x6024,	// (0x00013872) main_video4_pane_g4_ParamLimits

0x6024,	// (0x00013872) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d16b) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d16b) main_video4_pane_g

0x604c,	// (0x0001389a) vid4_indicators_pane_ParamLimits

0x604c,	// (0x0001389a) vid4_indicators_pane

0x607c,	// (0x000138ca) video4_image_uncrop_cif_pane_ParamLimits

0x607c,	// (0x000138ca) video4_image_uncrop_cif_pane

0x6096,	// (0x000138e4) video4_image_uncrop_nhd_pane_ParamLimits

0x6096,	// (0x000138e4) video4_image_uncrop_nhd_pane

0x5ed0,	// (0x0001371e) video4_image_uncrop_vga_pane_ParamLimits

0x5ed0,	// (0x0001371e) video4_image_uncrop_vga_pane

0xc964,	// (0x0001a1b2) bg_tb_trans_pane_cp07

0x60aa,	// (0x000138f8) vid4_indicators_pane_g1

0x60b7,	// (0x00013905) vid4_indicators_pane_g2

0x60c4,	// (0x00013912) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d176) vid4_indicators_pane_g

0x60e9,	// (0x00013937) vid4_indicators_pane_t1

0x60fb,	// (0x00013949) cam4_autofocus_pane_g1

0x6103,	// (0x00013951) cam4_autofocus_pane_g2

0x610b,	// (0x00013959) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d181) cam4_autofocus_pane_g

0x6113,	// (0x00013961) cam4_autofocus_pane_g3_copy1

0xcb9e,	// (0x0001a3ec) video_down_pane_cp_t1

0xcbac,	// (0x0001a3fa) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d0fd) video_down_pane_cp_t

0x93f2,	// (0x00016c40) popup_vitu2_window_ParamLimits

0x93f2,	// (0x00016c40) popup_vitu2_window

0x611b,	// (0x00013969) aid_size_cell2_itu2_ParamLimits

0x611b,	// (0x00013969) aid_size_cell2_itu2

0x6141,	// (0x0001398f) aid_size_cell_itu2_ParamLimits

0x6141,	// (0x0001398f) aid_size_cell_itu2

0x619d,	// (0x000139eb) bg_popup_window_pane_cp09_ParamLimits

0x619d,	// (0x000139eb) bg_popup_window_pane_cp09

0x61ab,	// (0x000139f9) field_vitu2_entry_pane_ParamLimits

0x61ab,	// (0x000139f9) field_vitu2_entry_pane

0x61d1,	// (0x00013a1f) grid_vitu2_function_pane_ParamLimits

0x61d1,	// (0x00013a1f) grid_vitu2_function_pane

0x6222,	// (0x00013a70) grid_vitu2_itu_pane_ParamLimits

0x6222,	// (0x00013a70) grid_vitu2_itu_pane

0x62b5,	// (0x00013b03) cell_vitu2_itu_pane_ParamLimits

0x62b5,	// (0x00013b03) cell_vitu2_itu_pane

0x62d9,	// (0x00013b27) cell_vitu2_function_pane_ParamLimits

0x62d9,	// (0x00013b27) cell_vitu2_function_pane

0xcfe0,	// (0x0001a82e) bg_popup_call_pane_cp08_ParamLimits

0xcfe0,	// (0x0001a82e) bg_popup_call_pane_cp08

0xcff9,	// (0x0001a847) field_vitu2_entry_pane_g1

0xd005,	// (0x0001a853) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d188) field_vitu2_entry_pane_g

0xd01f,	// (0x0001a86d) field_vitu2_entry_pane_t1_ParamLimits

0xd01f,	// (0x0001a86d) field_vitu2_entry_pane_t1

0xd04e,	// (0x0001a89c) field_vitu2_entry_pane_t2_ParamLimits

0xd04e,	// (0x0001a89c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d18f) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d18f) field_vitu2_entry_pane_t

0x6318,	// (0x00013b66) bg_button_pane_cp010_ParamLimits

0x6318,	// (0x00013b66) bg_button_pane_cp010

0x6326,	// (0x00013b74) cell_vitu2_itu_pane_g1

0x6344,	// (0x00013b92) cell_vitu2_itu_pane_t1_ParamLimits

0x6344,	// (0x00013b92) cell_vitu2_itu_pane_t1

0x63aa,	// (0x00013bf8) cell_vitu2_itu_pane_t2_ParamLimits

0x63aa,	// (0x00013bf8) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d199) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d199) cell_vitu2_itu_pane_t

0x93f2,	// (0x00016c40) bg_button_pane_cp011

0x6486,	// (0x00013cd4) cell_vitu2_function_pane_g1

0x9382,	// (0x00016bd0) main_myfav_hc_pane

0x5d38,	// (0x00013586) popup_image3_note_pane_ParamLimits

0x5d38,	// (0x00013586) popup_image3_note_pane

0x5d54,	// (0x000135a2) popup_image3_tool_bar_pane_ParamLimits

0x5d54,	// (0x000135a2) popup_image3_tool_bar_pane

0x642e,	// (0x00013c7c) cell_vitu2_itu_pane_t3_ParamLimits

0x642e,	// (0x00013c7c) cell_vitu2_itu_pane_t3

0x9382,	// (0x00016bd0) bg_popup_trans_pane

0xd073,	// (0x0001a8c1) grid_image3_tool_bar_pane

0xd07d,	// (0x0001a8cb) bg_popup_trans_pane_g1

0xa0d1,	// (0x0001791f) bg_popup_trans_pane_g2

0xd085,	// (0x0001a8d3) bg_popup_trans_pane_g3

0xd08d,	// (0x0001a8db) bg_popup_trans_pane_g4

0xd095,	// (0x0001a8e3) bg_popup_trans_pane_g5

0xd09d,	// (0x0001a8eb) bg_popup_trans_pane_g6

0xd0a5,	// (0x0001a8f3) bg_popup_trans_pane_g7

0xd0ad,	// (0x0001a8fb) bg_popup_trans_pane_g8

0xa0b1,	// (0x000178ff) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d1a0) bg_popup_trans_pane_g

0xd0b5,	// (0x0001a903) cell_image3_tool_bar_pane_ParamLimits

0xd0b5,	// (0x0001a903) cell_image3_tool_bar_pane

0xc2bd,	// (0x00019b0b) cell_image3_tool_bar_pane_g1

0x9382,	// (0x00016bd0) bg_popup_trans_pane_cp1

0xd0c9,	// (0x0001a917) popup_image3_note_pane_t1

0xd0d7,	// (0x0001a925) popup_image3_note_pane_t2

0xd0e5,	// (0x0001a933) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d1b3) popup_image3_note_pane_t

0xd0f3,	// (0x0001a941) popup_image3_note_pane_t3_copy1

0x649a,	// (0x00013ce8) bg_myfav_hc_instruction_pane_ParamLimits

0x649a,	// (0x00013ce8) bg_myfav_hc_instruction_pane

0x64ae,	// (0x00013cfc) cell_myfav_contact_pane_ParamLimits

0x64ae,	// (0x00013cfc) cell_myfav_contact_pane

0x64cc,	// (0x00013d1a) cell_myfav_contact_pane_cp1_ParamLimits

0x64cc,	// (0x00013d1a) cell_myfav_contact_pane_cp1

0x64e4,	// (0x00013d32) cell_myfav_contact_pane_cp2_ParamLimits

0x64e4,	// (0x00013d32) cell_myfav_contact_pane_cp2

0x64fc,	// (0x00013d4a) cell_myfav_contact_pane_cp3_ParamLimits

0x64fc,	// (0x00013d4a) cell_myfav_contact_pane_cp3

0x6513,	// (0x00013d61) cell_myfav_contact_pane_cp4_ParamLimits

0x6513,	// (0x00013d61) cell_myfav_contact_pane_cp4

0x652b,	// (0x00013d79) cell_myfav_contact_pane_cp5_ParamLimits

0x652b,	// (0x00013d79) cell_myfav_contact_pane_cp5

0x653f,	// (0x00013d8d) cell_myfav_contact_pane_cp6_ParamLimits

0x653f,	// (0x00013d8d) cell_myfav_contact_pane_cp6

0x6555,	// (0x00013da3) cell_myfav_contact_pane_cp7_ParamLimits

0x6555,	// (0x00013da3) cell_myfav_contact_pane_cp7

0xd101,	// (0x0001a94f) listscroll_gen_pane_cp05

0x656f,	// (0x00013dbd) main_myfav_hc_pane_g1_ParamLimits

0x656f,	// (0x00013dbd) main_myfav_hc_pane_g1

0x6589,	// (0x00013dd7) main_myfav_hc_pane_g2_ParamLimits

0x6589,	// (0x00013dd7) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d1ba) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d1ba) main_myfav_hc_pane_g

0x65bb,	// (0x00013e09) main_myfav_hc_pane_t1_ParamLimits

0x65bb,	// (0x00013e09) main_myfav_hc_pane_t1

0xd10a,	// (0x0001a958) main_myfav_hc_pane_t2_ParamLimits

0xd10a,	// (0x0001a958) main_myfav_hc_pane_t2

0xd11c,	// (0x0001a96a) main_myfav_hc_pane_t3_ParamLimits

0xd11c,	// (0x0001a96a) main_myfav_hc_pane_t3

0x65d2,	// (0x00013e20) main_myfav_hc_pane_t4_ParamLimits

0x65d2,	// (0x00013e20) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d1c1) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d1c1) main_myfav_hc_pane_t

0xc2bd,	// (0x00019b0b) bg_myfav_hc_instruction_pane_g1

0xd12e,	// (0x0001a97c) cell_myfav_contact_pane_g1_ParamLimits

0xd12e,	// (0x0001a97c) cell_myfav_contact_pane_g1

0xd12e,	// (0x0001a97c) cell_myfav_contact_pane_g2_ParamLimits

0xd12e,	// (0x0001a97c) cell_myfav_contact_pane_g2

0xd13a,	// (0x0001a988) cell_myfav_contact_pane_g3_ParamLimits

0xd13a,	// (0x0001a988) cell_myfav_contact_pane_g3

0xc59a,	// (0x00019de8) cell_myfav_contact_pane_g4_ParamLimits

0xc59a,	// (0x00019de8) cell_myfav_contact_pane_g4

0xd147,	// (0x0001a995) cell_myfav_contact_pane_g5_ParamLimits

0xd147,	// (0x0001a995) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d1cc) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d1cc) cell_myfav_contact_pane_g

0x65a3,	// (0x00013df1) main_myfav_hc_pane_g3_ParamLimits

0x65a3,	// (0x00013df1) main_myfav_hc_pane_g3

0x0ec7,	// (0x0000e715) popup_adpt_find_window

0x65fa,	// (0x00013e48) afind_page_pane_ParamLimits

0x65fa,	// (0x00013e48) afind_page_pane

0x660f,	// (0x00013e5d) aid_size_cell_afind_ParamLimits

0x660f,	// (0x00013e5d) aid_size_cell_afind

0x662d,	// (0x00013e7b) bg_popup_sub_pane_cp09_ParamLimits

0x662d,	// (0x00013e7b) bg_popup_sub_pane_cp09

0x663a,	// (0x00013e88) find_pane_cp01_ParamLimits

0x663a,	// (0x00013e88) find_pane_cp01

0xd153,	// (0x0001a9a1) grid_afind_control_pane_ParamLimits

0xd153,	// (0x0001a9a1) grid_afind_control_pane

0x6647,	// (0x00013e95) grid_afind_pane_ParamLimits

0x6647,	// (0x00013e95) grid_afind_pane

0x6669,	// (0x00013eb7) cell_afind_pane_ParamLimits

0x6669,	// (0x00013eb7) cell_afind_pane

0xc2bd,	// (0x00019b0b) afind_page_pane_g1

0x66ca,	// (0x00013f18) afind_page_pane_g2

0x66d3,	// (0x00013f21) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d1d7) afind_page_pane_g

0x66dc,	// (0x00013f2a) afind_page_pane_t1

0xd167,	// (0x0001a9b5) cell_afind_grid_control_pane_ParamLimits

0xd167,	// (0x0001a9b5) cell_afind_grid_control_pane

0xce28,	// (0x0001a676) bg_button_pane_cp69_ParamLimits

0xce28,	// (0x0001a676) bg_button_pane_cp69

0x66fc,	// (0x00013f4a) cell_afind_pane_g1_ParamLimits

0x66fc,	// (0x00013f4a) cell_afind_pane_g1

0x6709,	// (0x00013f57) cell_afind_pane_t1_ParamLimits

0x6709,	// (0x00013f57) cell_afind_pane_t1

0x9e2c,	// (0x0001767a) bg_button_pane_cp72

0xd176,	// (0x0001a9c4) cell_afind_grid_control_pane_g1

0x36d0,	// (0x00010f1e) aid_image_placing_area_ParamLimits

0x36d0,	// (0x00010f1e) aid_image_placing_area

0xc893,	// (0x0001a0e1) field_vitu_entry_pane_g1_ParamLimits

0xc893,	// (0x0001a0e1) field_vitu_entry_pane_g1

0xc89f,	// (0x0001a0ed) field_vitu_entry_pane_g2_ParamLimits

0xc89f,	// (0x0001a0ed) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d088) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d088) field_vitu_entry_pane_g

0x57c1,	// (0x0001300f) cell_vitu_itu_pane_g1_ParamLimits

0x5803,	// (0x00013051) cell_vitu_itu_pane_t3_ParamLimits

0x5803,	// (0x00013051) cell_vitu_itu_pane_t3

0xcdd8,	// (0x0001a626) mp4_progress_pane_t1_ParamLimits

0xcdf1,	// (0x0001a63f) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d11d) mp4_progress_pane_t_ParamLimits

0xce0a,	// (0x0001a658) mup_progress_pane_cp04_ParamLimits

0x65e6,	// (0x00013e34) main_myfav_hc_pane_t5_ParamLimits

0x65e6,	// (0x00013e34) main_myfav_hc_pane_t5

0x93a8,	// (0x00016bf6) aid_zoom_text_primary

0x0ec7,	// (0x0000e715) popup_adpt_find_window_ParamLimits

0x93f2,	// (0x00016c40) main_cam_set_pane

0x5f01,	// (0x0001374f) cam4_zoom_pane_ParamLimits

0x5f01,	// (0x0001374f) cam4_zoom_pane

0x671b,	// (0x00013f69) main_cam_set_pane_g1_ParamLimits

0x671b,	// (0x00013f69) main_cam_set_pane_g1

0x6729,	// (0x00013f77) main_cam_set_pane_g2_ParamLimits

0x6729,	// (0x00013f77) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d1de) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d1de) main_cam_set_pane_g

0x674a,	// (0x00013f98) main_cam_set_pane_t1_ParamLimits

0x674a,	// (0x00013f98) main_cam_set_pane_t1

0x6765,	// (0x00013fb3) main_cset_listscroll_pane_ParamLimits

0x6765,	// (0x00013fb3) main_cset_listscroll_pane

0x6785,	// (0x00013fd3) main_cset_slider_pane_ParamLimits

0x6785,	// (0x00013fd3) main_cset_slider_pane

0xd187,	// (0x0001a9d5) main_cset_list_pane_ParamLimits

0xd187,	// (0x0001a9d5) main_cset_list_pane

0xd197,	// (0x0001a9e5) scroll_pane_cp028

0x67ab,	// (0x00013ff9) aid_area_touch_slider

0x67c7,	// (0x00014015) cset_slider_pane

0x67f1,	// (0x0001403f) main_cset_slider_pane_g1

0x6806,	// (0x00014054) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d1e3) main_cset_slider_pane_g

0xd1d0,	// (0x0001aa1e) main_cset_slider_pane_t1

0x68c2,	// (0x00014110) main_cset_slider_pane_t2

0x68dc,	// (0x0001412a) main_cset_slider_pane_t3

0x68f6,	// (0x00014144) main_cset_slider_pane_t4

0x6910,	// (0x0001415e) main_cset_slider_pane_t5

0x692a,	// (0x00014178) main_cset_slider_pane_t6

0x693f,	// (0x0001418d) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d208) main_cset_slider_pane_t

0x6a43,	// (0x00014291) cset_list_set_pane_ParamLimits

0x6a43,	// (0x00014291) cset_list_set_pane

0x6a55,	// (0x000142a3) aid_position_infowindow_above

0x6a5d,	// (0x000142ab) aid_position_infowindow_below

0x6a65,	// (0x000142b3) cset_list_set_pane_g1_ParamLimits

0x6a65,	// (0x000142b3) cset_list_set_pane_g1

0xd270,	// (0x0001aabe) cset_list_set_pane_g3_ParamLimits

0xd270,	// (0x0001aabe) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d227) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d227) cset_list_set_pane_g

0xd27f,	// (0x0001aacd) cset_list_set_pane_t1_ParamLimits

0xd27f,	// (0x0001aacd) cset_list_set_pane_t1

0x93f2,	// (0x00016c40) list_highlight_pane_cp021_ParamLimits

0x93f2,	// (0x00016c40) list_highlight_pane_cp021

0xaa50,	// (0x0001829e) cset_slider_pane_g1

0xaa62,	// (0x000182b0) cset_slider_pane_g2

0xaa59,	// (0x000182a7) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d22c) cset_slider_pane_g

0xd294,	// (0x0001aae2) aid_area_touch_cam4_zoom

0xd29c,	// (0x0001aaea) cam4_zoom_cont_pane

0xd2a4,	// (0x0001aaf2) cam4_zoom_pane_g1

0xd2ac,	// (0x0001aafa) cam4_zoom_pane_g2

0x6a71,	// (0x000142bf) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d233) cam4_zoom_pane_g

0xd2b4,	// (0x0001ab02) cam4_zoom_cont_pane_g1

0xd2bd,	// (0x0001ab0b) cam4_zoom_cont_pane_g2

0xd2c6,	// (0x0001ab14) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d23a) cam4_zoom_cont_pane_g

0x5dc1,	// (0x0001360f) call4_image_pane_ParamLimits

0x5dc1,	// (0x0001360f) call4_image_pane

0xce66,	// (0x0001a6b4) call4_windows_conf_pane_ParamLimits

0xcea7,	// (0x0001a6f5) popup_call4_audio_in_window_ParamLimits

0xcea7,	// (0x0001a6f5) popup_call4_audio_in_window

0x9382,	// (0x00016bd0) bg_popup_call2_act_pane_cp02

0xcf1d,	// (0x0001a76b) call4_list_conf_pane

0xc2bd,	// (0x00019b0b) call4_image_pane_g1

0xc2bd,	// (0x00019b0b) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001cf4e) call4_image_pane_g

0xd2cf,	// (0x0001ab1d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2cf,	// (0x0001ab1d) list_single_graphic_popup_conf4_pane

0x9382,	// (0x00016bd0) list_highlight_pane_cp022

0xd2e2,	// (0x0001ab30) list_single_graphic_popup_conf4_pane_g1

0xa70f,	// (0x00017f5d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d241) list_single_graphic_popup_conf4_pane_g

0xd2ea,	// (0x0001ab38) list_single_graphic_popup_conf4_pane_t1

0x1daf,	// (0x0000f5fd) popup_vtel_slider_window_ParamLimits

0x1daf,	// (0x0000f5fd) popup_vtel_slider_window

0xce16,	// (0x0001a664) dialer2_ne_pane_t2_ParamLimits

0xce16,	// (0x0001a664) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d122) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d122) dialer2_ne_pane_t

0xc0a2,	// (0x000198f0) bg_popup_sub_pane_cp010_ParamLimits

0xc0a2,	// (0x000198f0) bg_popup_sub_pane_cp010

0x6a79,	// (0x000142c7) popup_vtel_slider_window_g1_ParamLimits

0x6a79,	// (0x000142c7) popup_vtel_slider_window_g1

0x6a8c,	// (0x000142da) popup_vtel_slider_window_g2_ParamLimits

0x6a8c,	// (0x000142da) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d246) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d246) popup_vtel_slider_window_g

0x6ae2,	// (0x00014330) vtel_slider_pane_ParamLimits

0x6ae2,	// (0x00014330) vtel_slider_pane

0x6b04,	// (0x00014352) vtel_slider_pane_g1_ParamLimits

0x6b04,	// (0x00014352) vtel_slider_pane_g1

0x6b18,	// (0x00014366) vtel_slider_pane_g2_ParamLimits

0x6b18,	// (0x00014366) vtel_slider_pane_g2

0x6b30,	// (0x0001437e) vtel_slider_pane_g3_ParamLimits

0x6b30,	// (0x0001437e) vtel_slider_pane_g3

0x6b04,	// (0x00014352) vtel_slider_pane_g4_ParamLimits

0x6b04,	// (0x00014352) vtel_slider_pane_g4

0x6b46,	// (0x00014394) vtel_slider_pane_g5_ParamLimits

0x6b46,	// (0x00014394) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d24f) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d24f) vtel_slider_pane_g

0x9382,	// (0x00016bd0) main_gallery2_pane

0x616d,	// (0x000139bb) aid_size_row_itut2_dropdow_list_ParamLimits

0x616d,	// (0x000139bb) aid_size_row_itut2_dropdow_list

0x61f9,	// (0x00013a47) grid_vitu2_function_top_pane_ParamLimits

0x61f9,	// (0x00013a47) grid_vitu2_function_top_pane

0x625e,	// (0x00013aac) popup_vitu2_dropdown_list_window_ParamLimits

0x625e,	// (0x00013aac) popup_vitu2_dropdown_list_window

0x6287,	// (0x00013ad5) popup_vitu2_match_list_window

0x6b5c,	// (0x000143aa) cell_vitu2_function_top_pane_ParamLimits

0x6b5c,	// (0x000143aa) cell_vitu2_function_top_pane

0x6b7a,	// (0x000143c8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6b7a,	// (0x000143c8) cell_vitu2_function_top_pane_cp01

0x6b98,	// (0x000143e6) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b98,	// (0x000143e6) cell_vitu2_function_top_wide_pane

0x93f2,	// (0x00016c40) bg_button_pane_cp012

0x6bb6,	// (0x00014404) cell_vitu2_function_top_pane_g1

0xd30e,	// (0x0001ab5c) bg_button_pane_cp013_ParamLimits

0xd30e,	// (0x0001ab5c) bg_button_pane_cp013

0x6bca,	// (0x00014418) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6bca,	// (0x00014418) cell_vitu2_function_top_wide_pane_g1

0x93f2,	// (0x00016c40) bg_popup_sub_pane_cp20

0x6be2,	// (0x00014430) list_vitu2_match_list_pane

0xd07d,	// (0x0001a8cb) bg_popup_sub_pane_cp20_g1

0xd085,	// (0x0001a8d3) bg_popup_sub_pane_cp20_g2

0xa0d1,	// (0x0001791f) bg_popup_sub_pane_cp20_g3

0xd08d,	// (0x0001a8db) bg_popup_sub_pane_cp20_g4

0xa0b1,	// (0x000178ff) bg_popup_sub_pane_cp20_g5

0xd32a,	// (0x0001ab78) bg_popup_sub_pane_cp20_g6

0xd09d,	// (0x0001a8eb) bg_popup_sub_pane_cp20_g7

0xd0a5,	// (0x0001a8f3) bg_popup_sub_pane_cp20_g8

0xd0ad,	// (0x0001a8fb) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d25a) bg_popup_sub_pane_cp20_g

0xd332,	// (0x0001ab80) list_vitu2_match_list_item_pane_ParamLimits

0xd332,	// (0x0001ab80) list_vitu2_match_list_item_pane

0xd344,	// (0x0001ab92) list_vitu2_match_list_item_pane_t1

0x9382,	// (0x00016bd0) bg_popup_sub_pane_cp21

0xa5c4,	// (0x00017e12) grid_vitu2_dropdown_list_pane

0x6c35,	// (0x00014483) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6c35,	// (0x00014483) cell_vitu2_dropdown_list_char_pane

0x6c56,	// (0x000144a4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c56,	// (0x000144a4) cell_vitu2_dropdown_list_ctrl_pane

0xd36a,	// (0x0001abb8) cell_vitu2_dropdown_list_char_pane_g1

0xd373,	// (0x0001abc1) cell_vitu2_dropdown_list_char_pane_g2

0xd37c,	// (0x0001abca) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d277) cell_vitu2_dropdown_list_char_pane_g

0x6c82,	// (0x000144d0) cell_vitu2_dropdown_list_char_pane_t1

0x6c90,	// (0x000144de) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6c90,	// (0x000144de) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6c9d,	// (0x000144eb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6c9d,	// (0x000144eb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6caa,	// (0x000144f8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6caa,	// (0x000144f8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6cb7,	// (0x00014505) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6cb7,	// (0x00014505) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc529,	// (0x00019d77) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc529,	// (0x00019d77) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d27e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d27e) cell_vitu2_dropdown_list_ctrl_pane_g

0x6cd3,	// (0x00014521) aid_size_cell_gallery2_ParamLimits

0x6cd3,	// (0x00014521) aid_size_cell_gallery2

0x6ce9,	// (0x00014537) grid_gallery2_pane_ParamLimits

0x6ce9,	// (0x00014537) grid_gallery2_pane

0x6cfd,	// (0x0001454b) scroll_pane_cp029_ParamLimits

0x6cfd,	// (0x0001454b) scroll_pane_cp029

0x6d09,	// (0x00014557) cell_gallery2_pane_ParamLimits

0x6d09,	// (0x00014557) cell_gallery2_pane

0xd385,	// (0x0001abd3) cell_gallery2_pane_g2

0x6d3f,	// (0x0001458d) cell_gallery2_pane_g3

0xd38f,	// (0x0001abdd) cell_gallery2_pane_g4

0xd397,	// (0x0001abe5) cell_gallery2_pane_g5

0xa8fa,	// (0x00018148) grid_highlight_pane_cp10

0x6287,	// (0x00013ad5) popup_vitu2_match_list_window_ParamLimits

0x629e,	// (0x00013aec) popup_vitu2_query_window_ParamLimits

0x629e,	// (0x00013aec) popup_vitu2_query_window

0x9382,	// (0x00016bd0) bg_vitu2_candi_button_pane

0xd36a,	// (0x0001abb8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd373,	// (0x0001abc1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd37c,	// (0x0001abca) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d47,	// (0x00014595) bg_button_pane_cp015

0x6d59,	// (0x000145a7) bg_button_pane_cp016

0x6d6c,	// (0x000145ba) bg_button_pane_cp017

0xbdb7,	// (0x00019605) bg_popup_sub_pane_cp22

0xd39f,	// (0x0001abed) popup_vitu2_query_window_g1

0x6db1,	// (0x000145ff) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d289) popup_vitu2_query_window_g

0x6dd0,	// (0x0001461e) popup_vitu2_query_window_t1_ParamLimits

0x6dd0,	// (0x0001461e) popup_vitu2_query_window_t1

0x6e05,	// (0x00014653) popup_vitu2_query_window_t2_ParamLimits

0x6e05,	// (0x00014653) popup_vitu2_query_window_t2

0x6e17,	// (0x00014665) popup_vitu2_query_window_t3_ParamLimits

0x6e17,	// (0x00014665) popup_vitu2_query_window_t3

0x6e3f,	// (0x0001468d) popup_vitu2_query_window_t4_ParamLimits

0x6e3f,	// (0x0001468d) popup_vitu2_query_window_t4

0x6e60,	// (0x000146ae) popup_vitu2_query_window_t5_ParamLimits

0x6e60,	// (0x000146ae) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d290) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d290) popup_vitu2_query_window_t

0xd17f,	// (0x0001a9cd) main_cset_text_pane

0x67ab,	// (0x00013ff9) aid_area_touch_slider_ParamLimits

0x67c7,	// (0x00014015) cset_slider_pane_ParamLimits

0x67f1,	// (0x0001403f) main_cset_slider_pane_g1_ParamLimits

0x6806,	// (0x00014054) main_cset_slider_pane_g2_ParamLimits

0xd1a0,	// (0x0001a9ee) main_cset_slider_pane_g3_ParamLimits

0xd1a0,	// (0x0001a9ee) main_cset_slider_pane_g3

0x681b,	// (0x00014069) main_cset_slider_pane_g4_ParamLimits

0x681b,	// (0x00014069) main_cset_slider_pane_g4

0x682a,	// (0x00014078) main_cset_slider_pane_g5_ParamLimits

0x682a,	// (0x00014078) main_cset_slider_pane_g5

0x6836,	// (0x00014084) main_cset_slider_pane_g6_ParamLimits

0x6836,	// (0x00014084) main_cset_slider_pane_g6

0xf995,	// (0x0001d1e3) main_cset_slider_pane_g_ParamLimits

0xd1d0,	// (0x0001aa1e) main_cset_slider_pane_t1_ParamLimits

0x68c2,	// (0x00014110) main_cset_slider_pane_t2_ParamLimits

0x68dc,	// (0x0001412a) main_cset_slider_pane_t3_ParamLimits

0x68f6,	// (0x00014144) main_cset_slider_pane_t4_ParamLimits

0x6910,	// (0x0001415e) main_cset_slider_pane_t5_ParamLimits

0x692a,	// (0x00014178) main_cset_slider_pane_t6_ParamLimits

0x693f,	// (0x0001418d) main_cset_slider_pane_t7_ParamLimits

0x6969,	// (0x000141b7) main_cset_slider_pane_t8_ParamLimits

0x6969,	// (0x000141b7) main_cset_slider_pane_t8

0x6991,	// (0x000141df) main_cset_slider_pane_t9_ParamLimits

0x6991,	// (0x000141df) main_cset_slider_pane_t9

0x69b9,	// (0x00014207) main_cset_slider_pane_t10_ParamLimits

0x69b9,	// (0x00014207) main_cset_slider_pane_t10

0x69e1,	// (0x0001422f) main_cset_slider_pane_t11_ParamLimits

0x69e1,	// (0x0001422f) main_cset_slider_pane_t11

0x6a09,	// (0x00014257) main_cset_slider_pane_t12_ParamLimits

0x6a09,	// (0x00014257) main_cset_slider_pane_t12

0x6a26,	// (0x00014274) main_cset_slider_pane_t13_ParamLimits

0x6a26,	// (0x00014274) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d208) main_cset_slider_pane_t_ParamLimits

0x9382,	// (0x00016bd0) bg_popup_sub_pane_cp011

0xd3ab,	// (0x0001abf9) main_cset_text_pane_g1

0xd3b3,	// (0x0001ac01) main_cset_text_pane_t1

0xd3c1,	// (0x0001ac0f) main_cset_text_pane_t2

0xd3cf,	// (0x0001ac1d) main_cset_text_pane_t3

0xd3dd,	// (0x0001ac2b) main_cset_text_pane_t4

0xd3eb,	// (0x0001ac39) main_cset_text_pane_t5

0xd3f9,	// (0x0001ac47) main_cset_text_pane_t6

0xd407,	// (0x0001ac55) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d29f) main_cset_text_pane_t

0x9382,	// (0x00016bd0) main_cam4_burst_pane

0x9382,	// (0x00016bd0) main_cam5_pane

0x66ea,	// (0x00013f38) bg_button_pane_cp019

0x66f3,	// (0x00013f41) bg_button_pane_cp020

0xd1ac,	// (0x0001a9fa) main_cset_slider_pane_g7_ParamLimits

0xd1ac,	// (0x0001a9fa) main_cset_slider_pane_g7

0xd1b8,	// (0x0001aa06) main_cset_slider_pane_g8_ParamLimits

0xd1b8,	// (0x0001aa06) main_cset_slider_pane_g8

0x684a,	// (0x00014098) main_cset_slider_pane_g9_ParamLimits

0x684a,	// (0x00014098) main_cset_slider_pane_g9

0x6856,	// (0x000140a4) main_cset_slider_pane_g10_ParamLimits

0x6856,	// (0x000140a4) main_cset_slider_pane_g10

0x6862,	// (0x000140b0) main_cset_slider_pane_g11_ParamLimits

0x6862,	// (0x000140b0) main_cset_slider_pane_g11

0x686e,	// (0x000140bc) main_cset_slider_pane_g12_ParamLimits

0x686e,	// (0x000140bc) main_cset_slider_pane_g12

0x687a,	// (0x000140c8) main_cset_slider_pane_g13_ParamLimits

0x687a,	// (0x000140c8) main_cset_slider_pane_g13

0x6886,	// (0x000140d4) main_cset_slider_pane_g14_ParamLimits

0x6886,	// (0x000140d4) main_cset_slider_pane_g14

0x6892,	// (0x000140e0) main_cset_slider_pane_g15_ParamLimits

0x6892,	// (0x000140e0) main_cset_slider_pane_g15

0xd1fe,	// (0x0001aa4c) main_cset_slider_pane_t14_ParamLimits

0xd1fe,	// (0x0001aa4c) main_cset_slider_pane_t14

0xd237,	// (0x0001aa85) main_cset_slider_pane_t15_ParamLimits

0xd237,	// (0x0001aa85) main_cset_slider_pane_t15

0x6ed7,	// (0x00014725) aid_cam4_burst_size_cell_ParamLimits

0x6ed7,	// (0x00014725) aid_cam4_burst_size_cell

0x6ef7,	// (0x00014745) grid_cam4_burst_pane_ParamLimits

0x6ef7,	// (0x00014745) grid_cam4_burst_pane

0x6f2f,	// (0x0001477d) linegrid_cam4_burst_pane_ParamLimits

0x6f2f,	// (0x0001477d) linegrid_cam4_burst_pane

0xd415,	// (0x0001ac63) scroll_pane_cp30_ParamLimits

0xd415,	// (0x0001ac63) scroll_pane_cp30

0x6f53,	// (0x000147a1) cell_cam4_burst_pane_ParamLimits

0x6f53,	// (0x000147a1) cell_cam4_burst_pane

0xd421,	// (0x0001ac6f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd421,	// (0x0001ac6f) linegrid_cam4_burst_pane_g1

0x6fa0,	// (0x000147ee) linegrid_cam4_burst_pane_g2_ParamLimits

0x6fa0,	// (0x000147ee) linegrid_cam4_burst_pane_g2

0xd42e,	// (0x0001ac7c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd42e,	// (0x0001ac7c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d2ae) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d2ae) linegrid_cam4_burst_pane_g

0x6fb1,	// (0x000147ff) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6fb1,	// (0x000147ff) linegrid_cam4_burst_pane_g3_copy1

0xd43b,	// (0x0001ac89) linegrid_cam4_burst_pane_g4_ParamLimits

0xd43b,	// (0x0001ac89) linegrid_cam4_burst_pane_g4

0x6fcb,	// (0x00014819) linegrid_cam4_burst_pane_g5_ParamLimits

0x6fcb,	// (0x00014819) linegrid_cam4_burst_pane_g5

0x6fdc,	// (0x0001482a) linegrid_cam4_burst_pane_g6_ParamLimits

0x6fdc,	// (0x0001482a) linegrid_cam4_burst_pane_g6

0xd448,	// (0x0001ac96) linegrid_cam4_burst_pane_g7_ParamLimits

0xd448,	// (0x0001ac96) linegrid_cam4_burst_pane_g7

0x6ff3,	// (0x00014841) cell_cam4_burst_pane_g1

0xd461,	// (0x0001acaf) main_cam5_pane_t1_ParamLimits

0xd461,	// (0x0001acaf) main_cam5_pane_t1

0xd473,	// (0x0001acc1) main_cam5_pane_t2_ParamLimits

0xd473,	// (0x0001acc1) main_cam5_pane_t2

0xd485,	// (0x0001acd3) main_cam5_pane_t3_ParamLimits

0xd485,	// (0x0001acd3) main_cam5_pane_t3

0xd497,	// (0x0001ace5) main_cam5_pane_t4_ParamLimits

0xd497,	// (0x0001ace5) main_cam5_pane_t4

0xd4af,	// (0x0001acfd) main_cam5_pane_t5_ParamLimits

0xd4af,	// (0x0001acfd) main_cam5_pane_t5

0xd4c3,	// (0x0001ad11) main_cam5_pane_t6_ParamLimits

0xd4c3,	// (0x0001ad11) main_cam5_pane_t6

0xd4d7,	// (0x0001ad25) main_cam5_pane_t7_ParamLimits

0xd4d7,	// (0x0001ad25) main_cam5_pane_t7

0xd4e9,	// (0x0001ad37) main_cam5_pane_t8_ParamLimits

0xd4e9,	// (0x0001ad37) main_cam5_pane_t8

0xd505,	// (0x0001ad53) main_cam5_pane_t9_ParamLimits

0xd505,	// (0x0001ad53) main_cam5_pane_t9

0xd517,	// (0x0001ad65) main_cam5_pane_t10_ParamLimits

0xd517,	// (0x0001ad65) main_cam5_pane_t10

0xd529,	// (0x0001ad77) main_cam5_pane_t11_ParamLimits

0xd529,	// (0x0001ad77) main_cam5_pane_t11

0xd53b,	// (0x0001ad89) main_cam5_pane_t12_ParamLimits

0xd53b,	// (0x0001ad89) main_cam5_pane_t12

0xd550,	// (0x0001ad9e) main_cam5_pane_t13_ParamLimits

0xd550,	// (0x0001ad9e) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d2ba) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d2ba) main_cam5_pane_t

0x0f49,	// (0x0000e797) popup_scut_keymap_window_ParamLimits

0x0f49,	// (0x0000e797) popup_scut_keymap_window

0x7006,	// (0x00014854) aid_size_cell_brow_shortcut

0xa8fa,	// (0x00018148) bg_popup_window_pane_cp010

0x7012,	// (0x00014860) grid_scut_pane

0x701e,	// (0x0001486c) cell_scut_pane_ParamLimits

0x701e,	// (0x0001486c) cell_scut_pane

0x7035,	// (0x00014883) cell_scut_pane_g1

0xd56d,	// (0x0001adbb) cell_scut_pane_t1

0xd57c,	// (0x0001adca) cell_scut_pane_t2

0x703e,	// (0x0001488c) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d2d5) cell_scut_pane_t

0x4d1e,	// (0x0001256c) main_mup3_pane_g8_ParamLimits

0x4d1e,	// (0x0001256c) main_mup3_pane_g8

0x6185,	// (0x000139d3) area_vitu2_query_pane_ParamLimits

0x6185,	// (0x000139d3) area_vitu2_query_pane

0x6d7f,	// (0x000145cd) input_focus_pane_cp08

0xd58b,	// (0x0001add9) area_vitu2_query_pane_g1

0x704c,	// (0x0001489a) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d2dc) area_vitu2_query_pane_g

0x705d,	// (0x000148ab) area_vitu2_query_pane_t1_ParamLimits

0x705d,	// (0x000148ab) area_vitu2_query_pane_t1

0x7071,	// (0x000148bf) area_vitu2_query_pane_t2_ParamLimits

0x7071,	// (0x000148bf) area_vitu2_query_pane_t2

0x7085,	// (0x000148d3) area_vitu2_query_pane_t3_ParamLimits

0x7085,	// (0x000148d3) area_vitu2_query_pane_t3

0xd597,	// (0x0001ade5) area_vitu2_query_pane_t4_ParamLimits

0xd597,	// (0x0001ade5) area_vitu2_query_pane_t4

0xd5bf,	// (0x0001ae0d) area_vitu2_query_pane_t5_ParamLimits

0xd5bf,	// (0x0001ae0d) area_vitu2_query_pane_t5

0xd5e7,	// (0x0001ae35) area_vitu2_query_pane_t6_ParamLimits

0xd5e7,	// (0x0001ae35) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d2e1) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d2e1) area_vitu2_query_pane_t

0x70ad,	// (0x000148fb) bg_button_pane_cp018

0x70bb,	// (0x00014909) bg_button_pane_cp021

0x70c7,	// (0x00014915) bg_button_pane_cp022

0x70d6,	// (0x00014924) input_focus_pane_cp09

0x2d05,	// (0x00010553) aid_size_touch_mv_arrow_left

0x2d2e,	// (0x0001057c) aid_size_touch_mv_arrow_right

0x68aa,	// (0x000140f8) main_cset_slider_pane_g16_ParamLimits

0x68aa,	// (0x000140f8) main_cset_slider_pane_g16

0x68b6,	// (0x00014104) main_cset_slider_pane_g17_ParamLimits

0x68b6,	// (0x00014104) main_cset_slider_pane_g17

0x6ff3,	// (0x00014841) cell_cam4_burst_pane_g1_ParamLimits

0x9382,	// (0x00016bd0) compa_mode_pane

0x6a9c,	// (0x000142ea) popup_vtel_slider_window_g3_ParamLimits

0x6a9c,	// (0x000142ea) popup_vtel_slider_window_g3

0x6ab3,	// (0x00014301) popup_vtel_slider_window_g4_ParamLimits

0x6ab3,	// (0x00014301) popup_vtel_slider_window_g4

0x6aca,	// (0x00014318) popup_vtel_slider_window_t1_ParamLimits

0x6aca,	// (0x00014318) popup_vtel_slider_window_t1

0x9382,	// (0x00016bd0) main_cl_pane

0xbddf,	// (0x0001962d) popup_imed_adjust2_window_ParamLimits

0xbdb7,	// (0x00019605) bg_tb_trans_pane_cp05_ParamLimits

0xc7c8,	// (0x0001a016) popup_imed_adjust2_window_g1_ParamLimits

0xc7d7,	// (0x0001a025) popup_imed_adjust2_window_g2_ParamLimits

0xc7d7,	// (0x0001a025) popup_imed_adjust2_window_g2

0xc7e3,	// (0x0001a031) popup_imed_adjust2_window_g3_ParamLimits

0xc7e3,	// (0x0001a031) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d04c) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d04c) popup_imed_adjust2_window_g

0xc7ef,	// (0x0001a03d) popup_imed_adjust2_window_t1_ParamLimits

0xc807,	// (0x0001a055) slider_imed_adjust_pane_ParamLimits

0xc81b,	// (0x0001a069) slider_imed_adjust_pane_g1_ParamLimits

0xc82b,	// (0x0001a079) slider_imed_adjust_pane_g2_ParamLimits

0xc83b,	// (0x0001a089) slider_imed_adjust_pane_g3_ParamLimits

0xc84c,	// (0x0001a09a) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d053) slider_imed_adjust_pane_g_ParamLimits

0x5ea2,	// (0x000136f0) aid_touch_area_cam4_ParamLimits

0x5ea2,	// (0x000136f0) aid_touch_area_cam4

0xcf61,	// (0x0001a7af) battery_pane_cp01

0x5f72,	// (0x000137c0) main_camera4_pane_g6_ParamLimits

0x5f72,	// (0x000137c0) main_camera4_pane_g6

0x5f9c,	// (0x000137ea) main_camera4_pane_t2_ParamLimits

0x5f9c,	// (0x000137ea) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d156) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d156) main_camera4_pane_t

0x5fd1,	// (0x0001381f) aid_touch_area_vid4_ParamLimits

0x5fd1,	// (0x0001381f) aid_touch_area_vid4

0x6038,	// (0x00013886) main_video4_pane_g5_ParamLimits

0x6038,	// (0x00013886) main_video4_pane_g5

0x6063,	// (0x000138b1) vid4_progress_pane_ParamLimits

0x6063,	// (0x000138b1) vid4_progress_pane

0xd1c4,	// (0x0001aa12) main_cset_slider_pane_g18_ParamLimits

0xd1c4,	// (0x0001aa12) main_cset_slider_pane_g18

0xd455,	// (0x0001aca3) cell_cam4_burst_pane_g2_ParamLimits

0xd455,	// (0x0001aca3) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d2b5) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d2b5) cell_cam4_burst_pane_g

0x9b67,	// (0x000173b5) bg_cl_pane_ParamLimits

0x9b67,	// (0x000173b5) bg_cl_pane

0x70e5,	// (0x00014933) cl_header_pane_ParamLimits

0x70e5,	// (0x00014933) cl_header_pane

0x70f9,	// (0x00014947) cl_listscroll_pane_ParamLimits

0x70f9,	// (0x00014947) cl_listscroll_pane

0xd633,	// (0x0001ae81) bg_cl_pane_g1

0xd63b,	// (0x0001ae89) bg_cl_pane_g2

0xd643,	// (0x0001ae91) bg_cl_pane_g3

0xd64b,	// (0x0001ae99) bg_cl_pane_g4

0xd653,	// (0x0001aea1) bg_cl_pane_g5

0xd65b,	// (0x0001aea9) bg_cl_pane_g6

0xd663,	// (0x0001aeb1) bg_cl_pane_g7

0xd66b,	// (0x0001aeb9) bg_cl_pane_g8

0xd673,	// (0x0001aec1) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d2f0) bg_cl_pane_g

0x7109,	// (0x00014957) aid_height_cl_leading_ParamLimits

0x7109,	// (0x00014957) aid_height_cl_leading

0x7115,	// (0x00014963) aid_height_cl_text_ParamLimits

0x7115,	// (0x00014963) aid_height_cl_text

0x93f2,	// (0x00016c40) bg_cl_header_pane_ParamLimits

0x93f2,	// (0x00016c40) bg_cl_header_pane

0x7134,	// (0x00014982) cl_header_pane_g1_ParamLimits

0x7134,	// (0x00014982) cl_header_pane_g1

0x714a,	// (0x00014998) cl_header_pane_t1_ParamLimits

0x714a,	// (0x00014998) cl_header_pane_t1

0xd67b,	// (0x0001aec9) cl_list_pane

0xd197,	// (0x0001a9e5) hc_scroll_pane_cp01

0xa0b1,	// (0x000178ff) bg_cl_header_pane_g1

0xd07d,	// (0x0001a8cb) bg_cl_header_pane_g2

0xa0d1,	// (0x0001791f) bg_cl_header_pane_g3

0xd08d,	// (0x0001a8db) bg_cl_header_pane_g4

0xd085,	// (0x0001a8d3) bg_cl_header_pane_g5

0xd32a,	// (0x0001ab78) bg_cl_header_pane_g6

0xd0a5,	// (0x0001a8f3) bg_cl_header_pane_g7

0xd0ad,	// (0x0001a8fb) bg_cl_header_pane_g8

0xd09d,	// (0x0001a8eb) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d303) bg_cl_header_pane_g

0x7163,	// (0x000149b1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7163,	// (0x000149b1) hc_cl_list_double_graphic_heading_pane

0x7174,	// (0x000149c2) hc_cl_list_single_graphic_pane_ParamLimits

0x7174,	// (0x000149c2) hc_cl_list_single_graphic_pane

0x718a,	// (0x000149d8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x718a,	// (0x000149d8) hc_cl_list_single_graphic_pane_g1

0x7196,	// (0x000149e4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7196,	// (0x000149e4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d316) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d316) hc_cl_list_single_graphic_pane_g

0x71aa,	// (0x000149f8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x71aa,	// (0x000149f8) hc_cl_list_single_graphic_pane_t1

0x718a,	// (0x000149d8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x718a,	// (0x000149d8) hc_cl_list_double_graphic_heading_pane_g1

0x71bf,	// (0x00014a0d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x71bf,	// (0x00014a0d) hc_cl_list_double_graphic_heading_pane_g2

0x71d3,	// (0x00014a21) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x71d3,	// (0x00014a21) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d31b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d31b) hc_cl_list_double_graphic_heading_pane_g

0x71e7,	// (0x00014a35) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71e7,	// (0x00014a35) hc_cl_list_double_graphic_heading_pane_t1

0x71fc,	// (0x00014a4a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x71fc,	// (0x00014a4a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d322) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d322) hc_cl_list_double_graphic_heading_pane_t

0xd68c,	// (0x0001aeda) vid4_progress_pane_g1

0xd69c,	// (0x0001aeea) vid4_progress_pane_g2

0xab42,	// (0x00018390) vid4_progress_pane_g3

0xd6ac,	// (0x0001aefa) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d327) vid4_progress_pane_g

0xd6ca,	// (0x0001af18) vid4_progress_pane_t1

0xd6df,	// (0x0001af2d) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d332) vid4_progress_pane_t

0xd70a,	// (0x0001af58) wait_bar_pane_cp07

0xc0b0,	// (0x000198fe) blid_firmament_pane_ParamLimits

0xc0f3,	// (0x00019941) popup_blid_sat_info2_window_g1

0xc117,	// (0x00019965) popup_blid_sat_info2_window_t3

0xc125,	// (0x00019973) popup_blid_sat_info2_window_t4

0xc133,	// (0x00019981) popup_blid_sat_info2_window_t5

0xc141,	// (0x0001998f) popup_blid_sat_info2_window_t6

0xc151,	// (0x0001999f) popup_blid_sat_info2_window_t7

0xc15f,	// (0x000199ad) popup_blid_sat_info2_window_t8

0xc16d,	// (0x000199bb) popup_blid_sat_info2_window_t9

0xc17b,	// (0x000199c9) popup_blid_sat_info2_window_t10

0xc23d,	// (0x00019a8b) aid_firma_cardinal_ParamLimits

0xc251,	// (0x00019a9f) blid_firmament_pane_t1_ParamLimits

0xc268,	// (0x00019ab6) blid_firmament_pane_t2_ParamLimits

0xc27f,	// (0x00019acd) blid_firmament_pane_t3_ParamLimits

0xc296,	// (0x00019ae4) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001cf45) blid_firmament_pane_t_ParamLimits

0xc2ad,	// (0x00019afb) blid_sat_info_pane_ParamLimits

0x93f2,	// (0x00016c40) main_cam_set_pane_ParamLimits

0x557b,	// (0x00012dc9) aid_size_cell_colour_35_ParamLimits

0x559b,	// (0x00012de9) aid_size_cell_colour_112_ParamLimits

0x55bb,	// (0x00012e09) aid_size_cell_effect_ParamLimits

0xbdb7,	// (0x00019605) bg_tb_trans_pane_cp02_ParamLimits

0xa355,	// (0x00017ba3) heading_imed_pane_ParamLimits

0x55db,	// (0x00012e29) listscroll_imed_pane_ParamLimits

0xb3e9,	// (0x00018c37) popup_call2_audio_first_window_g5_ParamLimits

0xb3e9,	// (0x00018c37) popup_call2_audio_first_window_g5

0x5b4d,	// (0x0001339b) aid_size_touch_image3_arrow_left_ParamLimits

0x5b4d,	// (0x0001339b) aid_size_touch_image3_arrow_left

0x5b79,	// (0x000133c7) aid_size_touch_image3_arrow_right_ParamLimits

0x5b79,	// (0x000133c7) aid_size_touch_image3_arrow_right

0xd6f5,	// (0x0001af43) vid4_progress_pane_t3

0x58ee,	// (0x0001313c) main_hwr_training_symbol_option_pane_ParamLimits

0x58ee,	// (0x0001313c) main_hwr_training_symbol_option_pane

0xcac3,	// (0x0001a311) popup_hwr_training_preview_window_ParamLimits

0xcac3,	// (0x0001a311) popup_hwr_training_preview_window

0x590e,	// (0x0001315c) hwr_training_navi_pane_g5_ParamLimits

0x590e,	// (0x0001315c) hwr_training_navi_pane_g5

0xd06b,	// (0x0001a8b9) popup_char_count_window

0x93f2,	// (0x00016c40) bg_popup_sub_pane_cp20_ParamLimits

0x6be2,	// (0x00014430) list_vitu2_match_list_pane_ParamLimits

0x6bf1,	// (0x0001443f) vitu2_page_scroll_pane_ParamLimits

0x6bf1,	// (0x0001443f) vitu2_page_scroll_pane

0xd776,	// (0x0001afc4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd776,	// (0x0001afc4) list_single_hwr_training_symbol_option_pane

0xd789,	// (0x0001afd7) list_single_hwr_training_symbol_option_pane_g1

0xd791,	// (0x0001afdf) list_single_hwr_training_symbol_option_pane_t1

0xd79f,	// (0x0001afed) bg_button_pane_cp023

0xd7a8,	// (0x0001aff6) bg_button_pane_cp024

0x7211,	// (0x00014a5f) vitu2_page_scroll_pane_g1

0x7219,	// (0x00014a67) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d339) vitu2_page_scroll_pane_g

0x7221,	// (0x00014a6f) vitu2_page_scroll_pane_t1

0xd7db,	// (0x0001b029) popup_char_count_window_g1

0xd7e4,	// (0x0001b032) popup_char_count_window_g2

0xd7ed,	// (0x0001b03b) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d33e) popup_char_count_window_g

0xd7f6,	// (0x0001b044) popup_char_count_window_t1

0x9382,	// (0x00016bd0) main_vded2_pane

0xc7b4,	// (0x0001a002) aid_size_cell_imed_line

0xc7be,	// (0x0001a00c) grid_imed_line_width_pane

0x60d1,	// (0x0001391f) vid4_indicators_pane_g4

0xd804,	// (0x0001b052) cell_imed_line_width_pane_ParamLimits

0xd804,	// (0x0001b052) cell_imed_line_width_pane

0xd818,	// (0x0001b066) cell_imed_line_width_pane_g1

0xd821,	// (0x0001b06f) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d345) cell_imed_line_width_pane_g

0x7230,	// (0x00014a7e) main_vded2_pane_g1_ParamLimits

0x7230,	// (0x00014a7e) main_vded2_pane_g1

0x7246,	// (0x00014a94) main_vded2_pane_g2_ParamLimits

0x7246,	// (0x00014a94) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d34a) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d34a) main_vded2_pane_g

0x7258,	// (0x00014aa6) vded2_slider_pane_ParamLimits

0x7258,	// (0x00014aa6) vded2_slider_pane

0x7268,	// (0x00014ab6) aid_size_touch_vded2_end

0x7272,	// (0x00014ac0) aid_size_touch_vded2_playhead

0xd829,	// (0x0001b077) aid_size_touch_vded2_start

0xd831,	// (0x0001b07f) vded2_slider_bg_pane

0xd83a,	// (0x0001b088) vded2_slider_pane_g1

0xd843,	// (0x0001b091) vded2_slider_pane_g2

0x727c,	// (0x00014aca) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d34f) vded2_slider_pane_g

0xd84b,	// (0x0001b099) vded2_slider_bg_pane_g1

0xd854,	// (0x0001b0a2) vded2_slider_bg_pane_g2

0xd85d,	// (0x0001b0ab) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d356) vded2_slider_bg_pane_g

0x333f,	// (0x00010b8d) aid_postcard_touch_down_pane_ParamLimits

0x333f,	// (0x00010b8d) aid_postcard_touch_down_pane

0x3355,	// (0x00010ba3) aid_postcard_touch_up_pane_ParamLimits

0x3355,	// (0x00010ba3) aid_postcard_touch_up_pane

0x9382,	// (0x00016bd0) main_blid2_pane

0xbdc5,	// (0x00019613) popup_blid2_search_window

0x9382,	// (0x00016bd0) blid2_gps_pane

0x9382,	// (0x00016bd0) blid2_navig_pane

0x9382,	// (0x00016bd0) blid2_search_pane

0x9382,	// (0x00016bd0) blid2_tripm_pane

0x7287,	// (0x00014ad5) blid2_search_pane_g1_ParamLimits

0x7287,	// (0x00014ad5) blid2_search_pane_g1

0x72a1,	// (0x00014aef) blid2_search_pane_t1_ParamLimits

0x72a1,	// (0x00014aef) blid2_search_pane_t1

0x72b3,	// (0x00014b01) aid_size_cell_blid2_gps_ParamLimits

0x72b3,	// (0x00014b01) aid_size_cell_blid2_gps

0x72cb,	// (0x00014b19) blid2_gps_pane_g1_ParamLimits

0x72cb,	// (0x00014b19) blid2_gps_pane_g1

0x72df,	// (0x00014b2d) grid_blid2_satellite_pane_ParamLimits

0x72df,	// (0x00014b2d) grid_blid2_satellite_pane

0x72f9,	// (0x00014b47) blid2_navig_pane_g1_ParamLimits

0x72f9,	// (0x00014b47) blid2_navig_pane_g1

0x7305,	// (0x00014b53) blid2_navig_pane_t1_ParamLimits

0x7305,	// (0x00014b53) blid2_navig_pane_t1

0x7320,	// (0x00014b6e) blid2_navig_pane_t2_ParamLimits

0x7320,	// (0x00014b6e) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d35d) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d35d) blid2_navig_pane_t

0x733b,	// (0x00014b89) blid2_navig_ring_pane_ParamLimits

0x733b,	// (0x00014b89) blid2_navig_ring_pane

0x7354,	// (0x00014ba2) blid2_speed_pane_ParamLimits

0x7354,	// (0x00014ba2) blid2_speed_pane

0x7360,	// (0x00014bae) blid2_tripm_pane_g1_ParamLimits

0x7360,	// (0x00014bae) blid2_tripm_pane_g1

0x7379,	// (0x00014bc7) blid2_tripm_pane_g2_ParamLimits

0x7379,	// (0x00014bc7) blid2_tripm_pane_g2

0x738d,	// (0x00014bdb) blid2_tripm_pane_g3_ParamLimits

0x738d,	// (0x00014bdb) blid2_tripm_pane_g3

0x73a1,	// (0x00014bef) blid2_tripm_pane_g4_ParamLimits

0x73a1,	// (0x00014bef) blid2_tripm_pane_g4

0x73b5,	// (0x00014c03) blid2_tripm_pane_g5_ParamLimits

0x73b5,	// (0x00014c03) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d362) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d362) blid2_tripm_pane_g

0x73db,	// (0x00014c29) blid2_tripm_pane_t1_ParamLimits

0x73db,	// (0x00014c29) blid2_tripm_pane_t1

0x73f6,	// (0x00014c44) blid2_tripm_pane_t2_ParamLimits

0x73f6,	// (0x00014c44) blid2_tripm_pane_t2

0x740f,	// (0x00014c5d) blid2_tripm_pane_t3_ParamLimits

0x740f,	// (0x00014c5d) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d36f) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d36f) blid2_tripm_pane_t

0x7456,	// (0x00014ca4) cell_blid2_satellite_pane_ParamLimits

0x7456,	// (0x00014ca4) cell_blid2_satellite_pane

0x7474,	// (0x00014cc2) cell_blid2_satellite_pane_g1

0xd866,	// (0x0001b0b4) cell_blid2_satellite_pane_t1

0xc2bd,	// (0x00019b0b) blid2_speed_pane_g1

0xd874,	// (0x0001b0c2) blid2_speed_pane_t1

0xd882,	// (0x0001b0d0) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d378) blid2_speed_pane_t

0xc2bd,	// (0x00019b0b) blid2_navig_ring_pane_g1

0x747d,	// (0x00014ccb) blid2_navig_ring_pane_g2

0x7485,	// (0x00014cd3) blid2_navig_ring_pane_g3

0x748d,	// (0x00014cdb) blid2_navig_ring_pane_g4

0x7495,	// (0x00014ce3) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d37d) blid2_navig_ring_pane_g

0x9382,	// (0x00016bd0) bg_popup_window_pane_cp011

0xd890,	// (0x0001b0de) popup_blid2_search_window_g1

0xd898,	// (0x0001b0e6) popup_blid2_search_window_t1

0xd8a6,	// (0x0001b0f4) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d388) popup_blid2_search_window_t

0x9fc0,	// (0x0001780e) main_browser_pane_g1

0x9b67,	// (0x000173b5) main_browser_pane_ParamLimits

0x93f2,	// (0x00016c40) bg_button_pane_cp011_ParamLimits

0x6486,	// (0x00013cd4) cell_vitu2_function_pane_g1_ParamLimits

0xbdb7,	// (0x00019605) bg_popup_sub_pane_cp22_ParamLimits

0x6d7f,	// (0x000145cd) input_focus_pane_cp08_ParamLimits

0x6d96,	// (0x000145e4) popup_vitu2_query_button_pane_ParamLimits

0x6d96,	// (0x000145e4) popup_vitu2_query_button_pane

0x6da7,	// (0x000145f5) popup_vitu2_query_input_button_pane

0xd39f,	// (0x0001abed) popup_vitu2_query_window_g1_ParamLimits

0x6db1,	// (0x000145ff) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d289) popup_vitu2_query_window_g_ParamLimits

0x9382,	// (0x00016bd0) bg_button_pane_cp026

0x749d,	// (0x00014ceb) popup_vitu2_query_input_button_pane_g1

0x9382,	// (0x00016bd0) bg_button_pane_cp025

0xd8b4,	// (0x0001b102) popup_vitu2_query_button_pane_t1

0x49d9,	// (0x00012227) main_mp3_pane_t6

0x49e7,	// (0x00012235) popup_slider_window_cp01

0xcf7d,	// (0x0001a7cb) cam4_battery_pane

0xcfd6,	// (0x0001a824) cam4_battery_pane_cp02

0xd684,	// (0x0001aed2) cam4_battery_pane_cp01

0xd684,	// (0x0001aed2) cam4_battery_pane_cp03

0xc2bd,	// (0x00019b0b) cam4_battery_pane_g1

0xd8c2,	// (0x0001b110) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d38d) cam4_battery_pane_g

0xc189,	// (0x000199d7) popup_blid_sat_info2_window_t11

0x2d05,	// (0x00010553) aid_size_touch_mv_arrow_left_ParamLimits

0x2d2e,	// (0x0001057c) aid_size_touch_mv_arrow_right_ParamLimits

0xa85a,	// (0x000180a8) navi_pane_g1_ParamLimits

0x2d57,	// (0x000105a5) navi_pane_g2_ParamLimits

0x2d85,	// (0x000105d3) navi_pane_g3_ParamLimits

0xf409,	// (0x0001cc57) navi_pane_g_ParamLimits

0x2ddd,	// (0x0001062b) navi_pane_mv_t1_ParamLimits

0x55e7,	// (0x00012e35) grid_imed_effect_pane_ParamLimits

0x1cac,	// (0x0000f4fa) aid_placing_vt_slider_lsc

0x9f11,	// (0x0001775f) aid_placing_vt_slider_prt

0x93f2,	// (0x00016c40) bg_tb_trans_pane_cp01_ParamLimits

0xc449,	// (0x00019c97) popup_image_details_window_g1_ParamLimits

0xc45c,	// (0x00019caa) popup_image_details_window_g2_ParamLimits

0xc471,	// (0x00019cbf) popup_image_details_window_g3_ParamLimits

0xc471,	// (0x00019cbf) popup_image_details_window_g3

0xf73c,	// (0x0001cf8a) popup_image_details_window_g_ParamLimits

0xc485,	// (0x00019cd3) popup_image_details_window_t1_ParamLimits

0xc497,	// (0x00019ce5) popup_image_details_window_t2_ParamLimits

0xc4b0,	// (0x00019cfe) popup_image_details_window_t3_ParamLimits

0xc4c4,	// (0x00019d12) popup_image_details_window_t4_ParamLimits

0xc4df,	// (0x00019d2d) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001cf91) popup_image_details_window_t_ParamLimits

0x7121,	// (0x0001496f) cl_header_name_pane_ParamLimits

0x7121,	// (0x0001496f) cl_header_name_pane

0x74a5,	// (0x00014cf3) cl_header_name_pane_t1_ParamLimits

0x74a5,	// (0x00014cf3) cl_header_name_pane_t1

0x74c6,	// (0x00014d14) cl_header_name_pane_t2_ParamLimits

0x74c6,	// (0x00014d14) cl_header_name_pane_t2

0x7508,	// (0x00014d56) cl_header_name_pane_t3_ParamLimits

0x7508,	// (0x00014d56) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d392) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d392) cl_header_name_pane_t

0x2dae,	// (0x000105fc) navi_pane_mv_g2_ParamLimits

0xcff9,	// (0x0001a847) field_vitu2_entry_pane_g1_ParamLimits

0xd005,	// (0x0001a853) field_vitu2_entry_pane_g2_ParamLimits

0xd011,	// (0x0001a85f) field_vitu2_entry_pane_g3_ParamLimits

0xd011,	// (0x0001a85f) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d188) field_vitu2_entry_pane_g_ParamLimits

0x6326,	// (0x00013b74) cell_vitu2_itu_pane_g1_ParamLimits

0x6336,	// (0x00013b84) cell_vitu2_itu_pane_g2_ParamLimits

0x6336,	// (0x00013b84) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d194) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d194) cell_vitu2_itu_pane_g

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp05_ParamLimits

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp05

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp03

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp04

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp10_ParamLimits

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp10

0x70c7,	// (0x00014915) bg_vkb2_func_pane_cp08

0x70ad,	// (0x000148fb) bg_vkb2_func_pane_cp06

0x70bb,	// (0x00014909) bg_vkb2_func_pane_cp07

0xd7b1,	// (0x0001afff) bg_vkb2_func_pane_cp11_ParamLimits

0xd7b1,	// (0x0001afff) bg_vkb2_func_pane_cp11

0xd7c6,	// (0x0001b014) bg_vkb2_func_pane_cp12_ParamLimits

0xd7c6,	// (0x0001b014) bg_vkb2_func_pane_cp12

0x9382,	// (0x00016bd0) bg_vkb2_func_pane_cp09

0xd07d,	// (0x0001a8cb) bg_vkb2_func_pane_g1

0xa0d1,	// (0x0001791f) bg_vkb2_func_pane_g2

0xd085,	// (0x0001a8d3) bg_vkb2_func_pane_g3

0xd08d,	// (0x0001a8db) bg_vkb2_func_pane_g4

0xd32a,	// (0x0001ab78) bg_vkb2_func_pane_g5

0xd0a5,	// (0x0001a8f3) bg_vkb2_func_pane_g6

0xd0ad,	// (0x0001a8fb) bg_vkb2_func_pane_g7

0xd09d,	// (0x0001a8eb) bg_vkb2_func_pane_g8

0xa0b1,	// (0x000178ff) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d399) bg_vkb2_func_pane_g

0x73c9,	// (0x00014c17) blid2_tripm_pane_g6_ParamLimits

0x73c9,	// (0x00014c17) blid2_tripm_pane_g6

0xcdd0,	// (0x0001a61e) mp4_progress_pane_g1

0x7442,	// (0x00014c90) blid2_tripm_values_pane_ParamLimits

0x7442,	// (0x00014c90) blid2_tripm_values_pane

0x7539,	// (0x00014d87) blid2_tripm_values_pane_t1

0x7547,	// (0x00014d95) blid2_tripm_values_pane_t2

0x7555,	// (0x00014da3) blid2_tripm_values_pane_t3

0x7563,	// (0x00014db1) blid2_tripm_values_pane_t4

0x7571,	// (0x00014dbf) blid2_tripm_values_pane_t5

0x757f,	// (0x00014dcd) blid2_tripm_values_pane_t6

0x758d,	// (0x00014ddb) blid2_tripm_values_pane_t7

0x759b,	// (0x00014de9) blid2_tripm_values_pane_t8

0x75a9,	// (0x00014df7) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d3ac) blid2_tripm_values_pane_t

0x1cee,	// (0x0000f53c) call_video_pane_t1_ParamLimits

0x1d0c,	// (0x0000f55a) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cae0) call_video_pane_t_ParamLimits

0x32a9,	// (0x00010af7) msg_header_pane_g1_ParamLimits

0xaa9d,	// (0x000182eb) msg_header_pane_g2_ParamLimits

0xaa9d,	// (0x000182eb) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001ccfa) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001ccfa) msg_header_pane_g

0x9b67,	// (0x000173b5) main_clock2_pane_ParamLimits

0x5313,	// (0x00012b61) grid_clock2_toolbar_pane_ParamLimits

0x5313,	// (0x00012b61) grid_clock2_toolbar_pane

0x5313,	// (0x00012b61) listscroll_clock2_pane_ParamLimits

0x5313,	// (0x00012b61) listscroll_clock2_pane

0x53ef,	// (0x00012c3d) main_clock2_pane_t3_ParamLimits

0x53ef,	// (0x00012c3d) main_clock2_pane_t3

0x540a,	// (0x00012c58) main_clock2_pane_t4_ParamLimits

0x540a,	// (0x00012c58) main_clock2_pane_t4

0xd8cc,	// (0x0001b11a) cell_clock2_toolbar_pane

0xd8d4,	// (0x0001b122) cell_clock2_toolbar_pane_cp01

0xd8d4,	// (0x0001b122) cell_clock2_toolbar_pane_cp02

0xd8dc,	// (0x0001b12a) cell_clock2_toolbar_pane_cp03

0xd8e4,	// (0x0001b132) list_clock2_pane

0xa7b1,	// (0x00017fff) scroll_pane_cp10

0xd8ec,	// (0x0001b13a) list_single_clock2_pane_ParamLimits

0xd8ec,	// (0x0001b13a) list_single_clock2_pane

0xa8fa,	// (0x00018148) list_highlight_pane_cp08

0xd8f9,	// (0x0001b147) list_single_clock2_pane_t1

0xd907,	// (0x0001b155) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d3bf) list_single_clock2_pane_t

0x9382,	// (0x00016bd0) bg_button_pane_cp10

0xd915,	// (0x0001b163) cell_clock2_toolbar_pane_g1

0x32cb,	// (0x00010b19) aid_main_viewer_pane_g1_ParamLimits

0x32cb,	// (0x00010b19) aid_main_viewer_pane_g1

0x32d9,	// (0x00010b27) aid_main_viewer_pane_g2_ParamLimits

0x32d9,	// (0x00010b27) aid_main_viewer_pane_g2

0x32e7,	// (0x00010b35) aid_main_viewer_pane_g3_ParamLimits

0x32e7,	// (0x00010b35) aid_main_viewer_pane_g3

0x32f6,	// (0x00010b44) aid_main_viewer_pane_g4_ParamLimits

0x32f6,	// (0x00010b44) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001cd0b) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001cd0b) aid_main_viewer_pane_g

0x3bfc,	// (0x0001144a) main_calc_pane_ParamLimits

0x3c10,	// (0x0001145e) main_dialer2_pane_ParamLimits

0x9382,	// (0x00016bd0) main_cam6_pane

0x9382,	// (0x00016bd0) main_vid6_pane

0x531f,	// (0x00012b6d) listscroll_gen_pane_cp06_ParamLimits

0x531f,	// (0x00012b6d) listscroll_gen_pane_cp06

0x5425,	// (0x00012c73) main_clock2_pane_t5_ParamLimits

0x5425,	// (0x00012c73) main_clock2_pane_t5

0x547c,	// (0x00012cca) aid_call2_pane_cp10_ParamLimits

0x548e,	// (0x00012cdc) aid_call_pane_cp10_ParamLimits

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x54a0,	// (0x00012cee) popup_clock_analogue_window_cp10_g3_ParamLimits

0x54a0,	// (0x00012cee) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa82f,	// (0x0001807d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d041) popup_clock_analogue_window_cp10_g_ParamLimits

0x54b2,	// (0x00012d00) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5afa,	// (0x00013348) cell_dialer2_keypad_pane_g2_ParamLimits

0x5afa,	// (0x00013348) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d127) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d127) cell_dialer2_keypad_pane_g

0x5b16,	// (0x00013364) cell_dialer2_keypad_pane_t1

0x679d,	// (0x00013feb) main_cset_text2_pane_ParamLimits

0x679d,	// (0x00013feb) main_cset_text2_pane

0xd58b,	// (0x0001add9) area_vitu2_query_pane_g1_ParamLimits

0x704c,	// (0x0001489a) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d2dc) area_vitu2_query_pane_g_ParamLimits

0xd60f,	// (0x0001ae5d) area_vitu2_query_pane_t7_ParamLimits

0xd60f,	// (0x0001ae5d) area_vitu2_query_pane_t7

0x70ad,	// (0x000148fb) bg_button_pane_cp018_ParamLimits

0x70bb,	// (0x00014909) bg_button_pane_cp021_ParamLimits

0x70c7,	// (0x00014915) bg_button_pane_cp022_ParamLimits

0x70c7,	// (0x00014915) bg_vkb2_func_pane_cp08_ParamLimits

0x70ad,	// (0x000148fb) bg_vkb2_func_pane_cp06_ParamLimits

0x70bb,	// (0x00014909) bg_vkb2_func_pane_cp07_ParamLimits

0x70d6,	// (0x00014924) input_focus_pane_cp09_ParamLimits

0xd91d,	// (0x0001b16b) cam6_autofocus_pane_ParamLimits

0xd91d,	// (0x0001b16b) cam6_autofocus_pane

0x75b7,	// (0x00014e05) cam6_image_uncrop_pane_ParamLimits

0x75b7,	// (0x00014e05) cam6_image_uncrop_pane

0x75c6,	// (0x00014e14) cam6_indi_pane_ParamLimits

0x75c6,	// (0x00014e14) cam6_indi_pane

0x75dc,	// (0x00014e2a) cam6_mode_pane_ParamLimits

0x75dc,	// (0x00014e2a) cam6_mode_pane

0x75ee,	// (0x00014e3c) cam6_timer_pane_ParamLimits

0x75ee,	// (0x00014e3c) cam6_timer_pane

0x75fa,	// (0x00014e48) cam6_zoom_pane_ParamLimits

0x75fa,	// (0x00014e48) cam6_zoom_pane

0x7606,	// (0x00014e54) cam6_mode_pane_g1_ParamLimits

0x7606,	// (0x00014e54) cam6_mode_pane_g1

0x7616,	// (0x00014e64) cam6_mode_pane_g2_ParamLimits

0x7616,	// (0x00014e64) cam6_mode_pane_g2

0x7626,	// (0x00014e74) cam6_mode_pane_g3_ParamLimits

0x7626,	// (0x00014e74) cam6_mode_pane_g3

0x7636,	// (0x00014e84) cam6_mode_pane_g4_ParamLimits

0x7636,	// (0x00014e84) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d3c4) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d3c4) cam6_mode_pane_g

0xd92b,	// (0x0001b179) bg_tb_trans_pane_cp08_ParamLimits

0xd92b,	// (0x0001b179) bg_tb_trans_pane_cp08

0xd939,	// (0x0001b187) cam6_battery_pane_ParamLimits

0xd939,	// (0x0001b187) cam6_battery_pane

0xd94f,	// (0x0001b19d) cam6_indi_pane_g1_ParamLimits

0xd94f,	// (0x0001b19d) cam6_indi_pane_g1

0xd961,	// (0x0001b1af) cam6_indi_pane_g2_ParamLimits

0xd961,	// (0x0001b1af) cam6_indi_pane_g2

0xd973,	// (0x0001b1c1) cam6_indi_pane_g3_ParamLimits

0xd973,	// (0x0001b1c1) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d3cd) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d3cd) cam6_indi_pane_g

0xd985,	// (0x0001b1d3) cam6_indi_pane_t1_ParamLimits

0xd985,	// (0x0001b1d3) cam6_indi_pane_t1

0x7646,	// (0x00014e94) cam6_autofocus_pane_g1

0x764e,	// (0x00014e9c) cam6_autofocus_pane_g2

0x7656,	// (0x00014ea4) cam6_autofocus_pane_g3

0x765e,	// (0x00014eac) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d3d4) cam6_autofocus_pane_g

0xd9ab,	// (0x0001b1f9) cam6_timer_pane_g1

0xd9b3,	// (0x0001b201) cam6_timer_pane_t1

0xd9c1,	// (0x0001b20f) cam6_zoom_cont_pane

0xd9c9,	// (0x0001b217) cam6_zoom_pane_g1

0xd9d1,	// (0x0001b21f) cam6_zoom_pane_g2

0x7666,	// (0x00014eb4) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d3dd) cam6_zoom_pane_g

0xc2bd,	// (0x00019b0b) cam6_battery_pane_g1

0xc2bd,	// (0x00019b0b) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001cf4e) cam6_battery_pane_g

0xd9d9,	// (0x0001b227) cam6_zoom_cont_pane_g1

0xd9e2,	// (0x0001b230) cam6_zoom_cont_pane_g2

0xd9eb,	// (0x0001b239) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d3e4) cam6_zoom_cont_pane_g

0x7683,	// (0x00014ed1) cam6_mode_pane_cp_ParamLimits

0x7683,	// (0x00014ed1) cam6_mode_pane_cp

0x75fa,	// (0x00014e48) cam6_zoom_pane_cp_ParamLimits

0x75fa,	// (0x00014e48) cam6_zoom_pane_cp

0x7695,	// (0x00014ee3) vid6_image_uncrop_cif_pane_ParamLimits

0x7695,	// (0x00014ee3) vid6_image_uncrop_cif_pane

0x76a5,	// (0x00014ef3) vid6_image_uncrop_nhd_pane_ParamLimits

0x76a5,	// (0x00014ef3) vid6_image_uncrop_nhd_pane

0x75b7,	// (0x00014e05) vid6_image_uncrop_vga_pane_ParamLimits

0x75b7,	// (0x00014e05) vid6_image_uncrop_vga_pane

0x76b4,	// (0x00014f02) vid6_image_uncrop_wvga_pane_ParamLimits

0x76b4,	// (0x00014f02) vid6_image_uncrop_wvga_pane

0x76c3,	// (0x00014f11) vid6_indi_pane_ParamLimits

0x76c3,	// (0x00014f11) vid6_indi_pane

0xd92b,	// (0x0001b179) bg_tb_trans_pane_cp09_ParamLimits

0xd92b,	// (0x0001b179) bg_tb_trans_pane_cp09

0xda03,	// (0x0001b251) cam6_battery_pane_cp_ParamLimits

0xda03,	// (0x0001b251) cam6_battery_pane_cp

0xda0f,	// (0x0001b25d) vid6_indi_pane_g1_ParamLimits

0xda0f,	// (0x0001b25d) vid6_indi_pane_g1

0xda21,	// (0x0001b26f) vid6_indi_pane_g2_ParamLimits

0xda21,	// (0x0001b26f) vid6_indi_pane_g2

0xda33,	// (0x0001b281) vid6_indi_pane_g3_ParamLimits

0xda33,	// (0x0001b281) vid6_indi_pane_g3

0xda48,	// (0x0001b296) vid6_indi_pane_g4_ParamLimits

0xda48,	// (0x0001b296) vid6_indi_pane_g4

0xda5d,	// (0x0001b2ab) vid6_indi_pane_g5_ParamLimits

0xda5d,	// (0x0001b2ab) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d3eb) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d3eb) vid6_indi_pane_g

0xda77,	// (0x0001b2c5) vid6_indi_pane_t1_ParamLimits

0xda77,	// (0x0001b2c5) vid6_indi_pane_t1

0xda8d,	// (0x0001b2db) vid6_indi_pane_t2_ParamLimits

0xda8d,	// (0x0001b2db) vid6_indi_pane_t2

0xdab5,	// (0x0001b303) vid6_indi_pane_t3_ParamLimits

0xdab5,	// (0x0001b303) vid6_indi_pane_t3

0xdadd,	// (0x0001b32b) vid6_indi_pane_t4_ParamLimits

0xdadd,	// (0x0001b32b) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d3f6) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d3f6) vid6_indi_pane_t

0xdb01,	// (0x0001b34f) wait_bar_pane_cp08

0x76db,	// (0x00014f29) main_cset_text2_pane_t1_ParamLimits

0x76db,	// (0x00014f29) main_cset_text2_pane_t1

0x766e,	// (0x00014ebc) listscroll_gen_pane_cp06_t1_ParamLimits

0x766e,	// (0x00014ebc) listscroll_gen_pane_cp06_t1

0x9382,	// (0x00016bd0) main_cam6_set_pane

0xc529,	// (0x00019d77) bg_tb_trans_pane_cp06_ParamLimits

0xcf85,	// (0x0001a7d3) cam4_indicators_pane_g1_ParamLimits

0xcf96,	// (0x0001a7e4) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d164) cam4_indicators_pane_g_ParamLimits

0xcfb4,	// (0x0001a802) cam4_indicators_pane_t1_ParamLimits

0xc964,	// (0x0001a1b2) bg_tb_trans_pane_cp07_ParamLimits

0x60aa,	// (0x000138f8) vid4_indicators_pane_g1_ParamLimits

0x60b7,	// (0x00013905) vid4_indicators_pane_g2_ParamLimits

0x60c4,	// (0x00013912) vid4_indicators_pane_g3_ParamLimits

0x60d1,	// (0x0001391f) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d176) vid4_indicators_pane_g_ParamLimits

0x60e9,	// (0x00013937) vid4_indicators_pane_t1_ParamLimits

0xd68c,	// (0x0001aeda) vid4_progress_pane_g1_ParamLimits

0xd69c,	// (0x0001aeea) vid4_progress_pane_g2_ParamLimits

0xab42,	// (0x00018390) vid4_progress_pane_g3_ParamLimits

0xd6ac,	// (0x0001aefa) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d327) vid4_progress_pane_g_ParamLimits

0xd6ca,	// (0x0001af18) vid4_progress_pane_t1_ParamLimits

0xd6df,	// (0x0001af2d) vid4_progress_pane_t2_ParamLimits

0xd6f5,	// (0x0001af43) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d332) vid4_progress_pane_t_ParamLimits

0xd70a,	// (0x0001af58) wait_bar_pane_cp07_ParamLimits

0x76f8,	// (0x00014f46) main_cam6_set_pane_g2_ParamLimits

0x76f8,	// (0x00014f46) main_cam6_set_pane_g2

0x771c,	// (0x00014f6a) main_cset6_listscroll_pane_ParamLimits

0x771c,	// (0x00014f6a) main_cset6_listscroll_pane

0x773c,	// (0x00014f8a) main_cset6_slider_pane_ParamLimits

0x773c,	// (0x00014f8a) main_cset6_slider_pane

0x7752,	// (0x00014fa0) main_cset6_text2_pane_ParamLimits

0x7752,	// (0x00014fa0) main_cset6_text2_pane

0xdb10,	// (0x0001b35e) main_cset6_text_pane

0xdb18,	// (0x0001b366) main_cset_list_pane_copy1_ParamLimits

0xdb18,	// (0x0001b366) main_cset_list_pane_copy1

0xdb28,	// (0x0001b376) scroll_pane_cp028_copy1

0x7760,	// (0x00014fae) cset_list_set_pane_copy1

0x7771,	// (0x00014fbf) aid_position_infowindow_above_copy1

0x7779,	// (0x00014fc7) aid_position_infowindow_below_copy1

0x7781,	// (0x00014fcf) cset_list_set_pane_g1_copy1

0x7789,	// (0x00014fd7) cset_list_set_pane_g3_copy1_ParamLimits

0x7789,	// (0x00014fd7) cset_list_set_pane_g3_copy1

0x7798,	// (0x00014fe6) cset_list_set_pane_t1_copy1_ParamLimits

0x7798,	// (0x00014fe6) cset_list_set_pane_t1_copy1

0x93f2,	// (0x00016c40) list_highlight_pane_cp021_copy1_ParamLimits

0x93f2,	// (0x00016c40) list_highlight_pane_cp021_copy1

0xdb31,	// (0x0001b37f) cset6_slider_pane_ParamLimits

0xdb31,	// (0x0001b37f) cset6_slider_pane

0xdb5d,	// (0x0001b3ab) main_cset6_slider_pane_g1_ParamLimits

0xdb5d,	// (0x0001b3ab) main_cset6_slider_pane_g1

0x77ad,	// (0x00014ffb) main_cset6_slider_pane_g2_ParamLimits

0x77ad,	// (0x00014ffb) main_cset6_slider_pane_g2

0xdb85,	// (0x0001b3d3) main_cset6_slider_pane_g3_ParamLimits

0xdb85,	// (0x0001b3d3) main_cset6_slider_pane_g3

0x77d5,	// (0x00015023) main_cset6_slider_pane_g4_ParamLimits

0x77d5,	// (0x00015023) main_cset6_slider_pane_g4

0x77e1,	// (0x0001502f) main_cset6_slider_pane_g5_ParamLimits

0x77e1,	// (0x0001502f) main_cset6_slider_pane_g5

0xd1ac,	// (0x0001a9fa) main_cset6_slider_pane_g7_ParamLimits

0xd1ac,	// (0x0001a9fa) main_cset6_slider_pane_g7

0xd1b8,	// (0x0001aa06) main_cset6_slider_pane_g8_ParamLimits

0xd1b8,	// (0x0001aa06) main_cset6_slider_pane_g8

0x684a,	// (0x00014098) main_cset6_slider_pane_g9_ParamLimits

0x684a,	// (0x00014098) main_cset6_slider_pane_g9

0x6856,	// (0x000140a4) main_cset6_slider_pane_g10_ParamLimits

0x6856,	// (0x000140a4) main_cset6_slider_pane_g10

0x6862,	// (0x000140b0) main_cset6_slider_pane_g11_ParamLimits

0x6862,	// (0x000140b0) main_cset6_slider_pane_g11

0x686e,	// (0x000140bc) main_cset6_slider_pane_g12_ParamLimits

0x686e,	// (0x000140bc) main_cset6_slider_pane_g12

0x687a,	// (0x000140c8) main_cset6_slider_pane_g13_ParamLimits

0x687a,	// (0x000140c8) main_cset6_slider_pane_g13

0x6886,	// (0x000140d4) main_cset6_slider_pane_g14_ParamLimits

0x6886,	// (0x000140d4) main_cset6_slider_pane_g14

0x77ed,	// (0x0001503b) main_cset6_slider_pane_g15_ParamLimits

0x77ed,	// (0x0001503b) main_cset6_slider_pane_g15

0x68aa,	// (0x000140f8) main_cset6_slider_pane_g16_ParamLimits

0x68aa,	// (0x000140f8) main_cset6_slider_pane_g16

0x68b6,	// (0x00014104) main_cset6_slider_pane_g17_ParamLimits

0x68b6,	// (0x00014104) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d3ff) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d3ff) main_cset6_slider_pane_g

0xdb91,	// (0x0001b3df) main_cset6_slider_pane_t1_ParamLimits

0xdb91,	// (0x0001b3df) main_cset6_slider_pane_t1

0x781d,	// (0x0001506b) main_cset6_slider_pane_t2_ParamLimits

0x781d,	// (0x0001506b) main_cset6_slider_pane_t2

0x7848,	// (0x00015096) main_cset6_slider_pane_t3_ParamLimits

0x7848,	// (0x00015096) main_cset6_slider_pane_t3

0x7873,	// (0x000150c1) main_cset6_slider_pane_t4_ParamLimits

0x7873,	// (0x000150c1) main_cset6_slider_pane_t4

0x789e,	// (0x000150ec) main_cset6_slider_pane_t5_ParamLimits

0x789e,	// (0x000150ec) main_cset6_slider_pane_t5

0xdbd2,	// (0x0001b420) main_cset6_slider_pane_t7_ParamLimits

0xdbd2,	// (0x0001b420) main_cset6_slider_pane_t7

0x78c9,	// (0x00015117) main_cset6_slider_pane_t8_ParamLimits

0x78c9,	// (0x00015117) main_cset6_slider_pane_t8

0x78ed,	// (0x0001513b) main_cset6_slider_pane_t9_ParamLimits

0x78ed,	// (0x0001513b) main_cset6_slider_pane_t9

0x7911,	// (0x0001515f) main_cset6_slider_pane_t10_ParamLimits

0x7911,	// (0x0001515f) main_cset6_slider_pane_t10

0x7935,	// (0x00015183) main_cset6_slider_pane_t11_ParamLimits

0x7935,	// (0x00015183) main_cset6_slider_pane_t11

0xdc08,	// (0x0001b456) main_cset6_slider_pane_t14_ParamLimits

0xdc08,	// (0x0001b456) main_cset6_slider_pane_t14

0xdc41,	// (0x0001b48f) main_cset6_slider_pane_t15_ParamLimits

0xdc41,	// (0x0001b48f) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d424) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d424) main_cset6_slider_pane_t

0xd2b4,	// (0x0001ab02) cset_slider_pane_g1_copy1

0xd2bd,	// (0x0001ab0b) cset_slider_pane_g2_copy1

0xd2c6,	// (0x0001ab14) cset_slider_pane_g3_copy1

0x9382,	// (0x00016bd0) bg_popup_sub_pane_cp011_copy1

0xd3ab,	// (0x0001abf9) main_cset_text_pane_g1_copy1

0xd3b3,	// (0x0001ac01) main_cset_text_pane_t1_copy1

0xd3c1,	// (0x0001ac0f) main_cset_text_pane_t2_copy1

0xd3cf,	// (0x0001ac1d) main_cset_text_pane_t3_copy1

0xd3dd,	// (0x0001ac2b) main_cset_text_pane_t4_copy1

0xd3eb,	// (0x0001ac39) main_cset_text_pane_t5_copy1

0xd3f9,	// (0x0001ac47) main_cset_text_pane_t6_copy1

0xd407,	// (0x0001ac55) main_cset_text_pane_t7_copy1

0x7959,	// (0x000151a7) main_cset_text2_pane_t1_copy1

0x9382,	// (0x00016bd0) main_ncimui_pane

0x3e52,	// (0x000116a0) popup_query_ncimui_window_ParamLimits

0x3e52,	// (0x000116a0) popup_query_ncimui_window

0xc58e,	// (0x00019ddc) field_cale_ev2_pane_g4_ParamLimits

0xc58e,	// (0x00019ddc) field_cale_ev2_pane_g4

0x59da,	// (0x00013228) cell_video_dialer_keypad_pane_g2_ParamLimits

0x59da,	// (0x00013228) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d102) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d102) cell_video_dialer_keypad_pane_g

0x59f2,	// (0x00013240) cell_video_dialer_keypad_pane_t1

0x9382,	// (0x00016bd0) bg_popup_window_pane_cp012

0xa68e,	// (0x00017edc) heading_pane_cp06

0xdd69,	// (0x0001b5b7) ncim_query_content_pane

0x9382,	// (0x00016bd0) bg_popup_heading_pane_cp01

0xdd71,	// (0x0001b5bf) ncim_heading_pane_t1

0xdd7f,	// (0x0001b5cd) ncim_indicator_popup_pane

0xdd91,	// (0x0001b5df) ncim_query_button_pane

0xdda5,	// (0x0001b5f3) ncim_query_content_pane_t1

0xddb7,	// (0x0001b605) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d463) ncim_query_content_pane_t

0xddf1,	// (0x0001b63f) ncim_query_list_pane

0xde03,	// (0x0001b651) ncim_query_popup_pane

0xdd7f,	// (0x0001b5cd) ncim_indicator_popup_pane_ParamLimits

0x7a6e,	// (0x000152bc) ncim_query_content_pane_g1_ParamLimits

0x7a6e,	// (0x000152bc) ncim_query_content_pane_g1

0xdda5,	// (0x0001b5f3) ncim_query_content_pane_t1_ParamLimits

0xddb7,	// (0x0001b605) ncim_query_content_pane_t2_ParamLimits

0x7a7a,	// (0x000152c8) ncim_query_content_pane_t3_ParamLimits

0x7a7a,	// (0x000152c8) ncim_query_content_pane_t3

0x7aa2,	// (0x000152f0) ncim_query_content_pane_t4_ParamLimits

0x7aa2,	// (0x000152f0) ncim_query_content_pane_t4

0x7aca,	// (0x00015318) ncim_query_content_pane_t5_ParamLimits

0x7aca,	// (0x00015318) ncim_query_content_pane_t5

0xddc9,	// (0x0001b617) ncim_query_content_pane_t6_ParamLimits

0xddc9,	// (0x0001b617) ncim_query_content_pane_t6

0xfc15,	// (0x0001d463) ncim_query_content_pane_t_ParamLimits

0xddf1,	// (0x0001b63f) ncim_query_list_pane_ParamLimits

0xde03,	// (0x0001b651) ncim_query_popup_pane_ParamLimits

0xde17,	// (0x0001b665) wait_bar_pane_cp04

0x9382,	// (0x00016bd0) input_focus_pane_cp011

0xde1f,	// (0x0001b66d) ncim_query_popup_pane_t1

0xde2d,	// (0x0001b67b) ncim_list_query_list_pane_ParamLimits

0xde2d,	// (0x0001b67b) ncim_list_query_list_pane

0x9382,	// (0x00016bd0) bg_button_pane_cp027

0xde3a,	// (0x0001b688) ncim_query_button_pane_g1

0x9382,	// (0x00016bd0) list_highlight_pane_cp012

0xde44,	// (0x0001b692) ncim_list_query_list_pane_g1

0xde4c,	// (0x0001b69a) ncim_list_query_list_pane_t1

0xcfa5,	// (0x0001a7f3) cam4_indicators_pane_g3_ParamLimits

0xcfa5,	// (0x0001a7f3) cam4_indicators_pane_g3

0x60dd,	// (0x0001392b) vid4_indicators_pane_g5_ParamLimits

0x60dd,	// (0x0001392b) vid4_indicators_pane_g5

0xd6bb,	// (0x0001af09) vid4_progress_pane_g5_ParamLimits

0xd6bb,	// (0x0001af09) vid4_progress_pane_g5

0x7987,	// (0x000151d5) main_ncimui_pane_g1

0x79dd,	// (0x0001522b) ncimui_group_query_pane_ParamLimits

0x79dd,	// (0x0001522b) ncimui_group_query_pane

0x7a19,	// (0x00015267) ncimui_list_pane_ParamLimits

0x7a19,	// (0x00015267) ncimui_list_pane

0x7a3a,	// (0x00015288) ncimui_text_pane_ParamLimits

0x7a3a,	// (0x00015288) ncimui_text_pane

0x7af2,	// (0x00015340) ncimui_text_pane_t1_ParamLimits

0x7af2,	// (0x00015340) ncimui_text_pane_t1

0xde5a,	// (0x0001b6a8) ncimui_list_single_graphic_pane_ParamLimits

0xde5a,	// (0x0001b6a8) ncimui_list_single_graphic_pane

0x7b10,	// (0x0001535e) ncimui_query_pane_ParamLimits

0x7b10,	// (0x0001535e) ncimui_query_pane

0x9382,	// (0x00016bd0) list_highlight_pane_cp013

0xde6a,	// (0x0001b6b8) ncim_list_query_list_pane_t1_copy1

0xde44,	// (0x0001b692) ncim_list_single_graphic_pane_g1

0xde78,	// (0x0001b6c6) ncim_query_button_pane_cp01

0xde84,	// (0x0001b6d2) ncim_query_entry_pane_ParamLimits

0xde84,	// (0x0001b6d2) ncim_query_entry_pane

0xde97,	// (0x0001b6e5) ncimui_query_pane_g1

0xdea3,	// (0x0001b6f1) ncimui_query_pane_t1_ParamLimits

0xdea3,	// (0x0001b6f1) ncimui_query_pane_t1

0x93f2,	// (0x00016c40) input_focus_pane_cp012

0xdebc,	// (0x0001b70a) ncim_query_entry_pane_t1

0x9b67,	// (0x000173b5) main_im_pane_ParamLimits

0x93f2,	// (0x00016c40) main_mobtv_pane_ParamLimits

0x93f2,	// (0x00016c40) main_mobtv_pane

0x7805,	// (0x00015053) main_cset6_slider_pane_g18_ParamLimits

0x7805,	// (0x00015053) main_cset6_slider_pane_g18

0x7811,	// (0x0001505f) main_cset6_slider_pane_g19_ParamLimits

0x7811,	// (0x0001505f) main_cset6_slider_pane_g19

0xdece,	// (0x0001b71c) bg_main_mobtv_pane_ParamLimits

0xdece,	// (0x0001b71c) bg_main_mobtv_pane

0x7b23,	// (0x00015371) main_mobtv_info_pane

0x7b2c,	// (0x0001537a) main_mobtv_loading_pane_ParamLimits

0x7b2c,	// (0x0001537a) main_mobtv_loading_pane

0xdedc,	// (0x0001b72a) main_mobtv_pg_channel_list_pane

0xdee6,	// (0x0001b734) main_mobtv_pg_hdr_pane

0x7b39,	// (0x00015387) main_mobtv_programe_curr_pane_ParamLimits

0x7b39,	// (0x00015387) main_mobtv_programe_curr_pane

0x7b46,	// (0x00015394) main_mobtv_programe_next_pane_ParamLimits

0x7b46,	// (0x00015394) main_mobtv_programe_next_pane

0xdeef,	// (0x0001b73d) popup_mobtv_noti_window

0xc2bd,	// (0x00019b0b) main_tv_pg_hdr_pane_g1

0xdef7,	// (0x0001b745) main_tv_pg_hdr_pane_g2

0xdeff,	// (0x0001b74d) main_tv_pg_hdr_pane_g3

0xdf07,	// (0x0001b755) main_tv_pg_hdr_pane_g4

0xdf0f,	// (0x0001b75d) main_tv_pg_hdr_pane_g5

0xdf19,	// (0x0001b767) main_tv_pg_hdr_pane_g6

0xdf23,	// (0x0001b771) main_tv_pg_hdr_pane_g7

0xdf2d,	// (0x0001b77b) main_tv_pg_hdr_pane_g8

0xdf37,	// (0x0001b785) main_tv_pg_hdr_pane_g9

0xdf41,	// (0x0001b78f) main_tv_pg_hdr_pane_g10

0xdf4b,	// (0x0001b799) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d470) main_tv_pg_hdr_pane_g

0xdf55,	// (0x0001b7a3) main_tv_pg_hdr_pane_t1

0xdf63,	// (0x0001b7b1) main_tv_pg_hdr_pane_t2

0xdf71,	// (0x0001b7bf) main_tv_pg_hdr_pane_t3

0xdf81,	// (0x0001b7cf) main_tv_pg_hdr_pane_t4

0xdf91,	// (0x0001b7df) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d487) main_tv_pg_hdr_pane_t

0xdfa1,	// (0x0001b7ef) single_mobtv_pg_channel_pane_ParamLimits

0xdfa1,	// (0x0001b7ef) single_mobtv_pg_channel_pane

0xdfb3,	// (0x0001b801) single_mobtv_pg_channel_table_pane

0xdfbc,	// (0x0001b80a) single_mobtv_pg_channel_thumb_pane

0xdfc5,	// (0x0001b813) single_tv_pg_channel_pane_g1

0xdfce,	// (0x0001b81c) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d492) single_tv_pg_channel_pane_g

0xc529,	// (0x00019d77) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc529,	// (0x00019d77) bg_single_mobtv_pg_channel_thumb_pane

0xdfd7,	// (0x0001b825) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfd7,	// (0x0001b825) single_mobtv_pg_channel_thumb_pane_g1

0xdfe5,	// (0x0001b833) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfe5,	// (0x0001b833) single_mobtv_pg_channel_thumb_pane_g2

0xdff1,	// (0x0001b83f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdff1,	// (0x0001b83f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d497) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d497) single_mobtv_pg_channel_thumb_pane_g

0xdffd,	// (0x0001b84b) single_mobtv_pg_channel_thumb_pane_t1

0xe00b,	// (0x0001b859) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d49e) single_mobtv_pg_channel_thumb_pane_t

0xc2bd,	// (0x00019b0b) bg_single_mobtv_pg_channel_table_pane_g1

0xc2bd,	// (0x00019b0b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001cf4e) bg_single_mobtv_pg_channel_table_pane_g

0xe019,	// (0x0001b867) single_mobtv_pg_channel_table_pane_t1

0xe027,	// (0x0001b875) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d4a3) single_mobtv_pg_channel_table_pane_t

0x7b5b,	// (0x000153a9) main_mobtv_info_pane_g1_ParamLimits

0x7b5b,	// (0x000153a9) main_mobtv_info_pane_g1

0x7b79,	// (0x000153c7) main_mobtv_info_pane_t1_ParamLimits

0x7b79,	// (0x000153c7) main_mobtv_info_pane_t1

0x7bf1,	// (0x0001543f) main_mobtv_info_pane_t2_ParamLimits

0x7bf1,	// (0x0001543f) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d4ad) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d4ad) main_mobtv_info_pane_t

0x7c80,	// (0x000154ce) wait_bar_pane_cp05

0x7c92,	// (0x000154e0) main_mobtv_loading_pane_g1_ParamLimits

0x7c92,	// (0x000154e0) main_mobtv_loading_pane_g1

0x7ca5,	// (0x000154f3) main_mobtv_loading_pane_g2_ParamLimits

0x7ca5,	// (0x000154f3) main_mobtv_loading_pane_g2

0x7cb1,	// (0x000154ff) main_mobtv_loading_pane_g3_ParamLimits

0x7cb1,	// (0x000154ff) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d4b4) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d4b4) main_mobtv_loading_pane_g

0xe03d,	// (0x0001b88b) main_mobtv_loading_pane_t1_ParamLimits

0xe03d,	// (0x0001b88b) main_mobtv_loading_pane_t1

0xe055,	// (0x0001b8a3) main_mobtv_loading_pane_t2_ParamLimits

0xe055,	// (0x0001b8a3) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d4bb) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d4bb) main_mobtv_loading_pane_t

0x7cc4,	// (0x00015512) wait_bar_pane_cp06_ParamLimits

0x7cc4,	// (0x00015512) wait_bar_pane_cp06

0xe079,	// (0x0001b8c7) main_mobtv_programe_curr_pane_t1

0xe087,	// (0x0001b8d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d4c0) main_mobtv_programe_curr_pane_t

0xe095,	// (0x0001b8e3) main_mobtv_programe_next_pane_t1

0xe0a3,	// (0x0001b8f1) main_mobtv_programe_next_pane_t2

0xe0b1,	// (0x0001b8ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d4c5) main_mobtv_programe_next_pane_t

0x9382,	// (0x00016bd0) bg_popup_mobtv_noti_window_pane

0xe0bf,	// (0x0001b90d) popup_mobtv_noti_window_g1

0xe0c7,	// (0x0001b915) popup_mobtv_noti_window_t1

0xe0d5,	// (0x0001b923) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d4cc) popup_mobtv_noti_window_t

0xc2bd,	// (0x00019b0b) bg_popup_mobtv_noti_window_pane_g1

0x9382,	// (0x00016bd0) sc_clock_pane

0x9382,	// (0x00016bd0) main_fs_bigclock_pane

0x742c,	// (0x00014c7a) blid2_tripm_pane_t4_ParamLimits

0x742c,	// (0x00014c7a) blid2_tripm_pane_t4

0x7cd3,	// (0x00015521) sc_clock_pane_g1_ParamLimits

0x7cd3,	// (0x00015521) sc_clock_pane_g1

0x7ce5,	// (0x00015533) sc_clock_pane_t1_ParamLimits

0x7ce5,	// (0x00015533) sc_clock_pane_t1

0x7d07,	// (0x00015555) sc_clock_pane_t2_ParamLimits

0x7d07,	// (0x00015555) sc_clock_pane_t2

0x7d1f,	// (0x0001556d) sc_clock_pane_t3_ParamLimits

0x7d1f,	// (0x0001556d) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d4d1) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d4d1) sc_clock_pane_t

0x8af6,	// (0x00016344) main_fs_bigclock_indicator_pane_ParamLimits

0x8af6,	// (0x00016344) main_fs_bigclock_indicator_pane

0xc4f9,	// (0x00019d47) main_fs_bigclock_pane_g1_ParamLimits

0xc4f9,	// (0x00019d47) main_fs_bigclock_pane_g1

0x8b02,	// (0x00016350) main_fs_bigclock_pane_t1_ParamLimits

0x8b02,	// (0x00016350) main_fs_bigclock_pane_t1

0x8b14,	// (0x00016362) main_fs_bigclock_pane_t2_ParamLimits

0x8b14,	// (0x00016362) main_fs_bigclock_pane_t2

0x8b28,	// (0x00016376) main_fs_bigclock_pane_t3_ParamLimits

0x8b28,	// (0x00016376) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001d6cb) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001d6cb) main_fs_bigclock_pane_t

0xecc3,	// (0x0001c511) main_fs_bigclock_indicator_pane_g1

0xdd99,	// (0x0001b5e7) ncim_query_content_pane_g2_ParamLimits

0xdd99,	// (0x0001b5e7) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d45e) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d45e) ncim_query_content_pane_g

0x7d36,	// (0x00015584) sc_clock_pane_t4_ParamLimits

0x7d36,	// (0x00015584) sc_clock_pane_t4

0x93f2,	// (0x00016c40) main_radioblah_pane

0xceeb,	// (0x0001a739) cell_call4_button_pane_t1_copy1_ParamLimits

0xceeb,	// (0x0001a739) cell_call4_button_pane_t1_copy1

0x798f,	// (0x000151dd) main_ncimui_pane_t1_ParamLimits

0x798f,	// (0x000151dd) main_ncimui_pane_t1

0x79a9,	// (0x000151f7) main_ncimui_pane_t2_ParamLimits

0x79a9,	// (0x000151f7) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d457) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d457) main_ncimui_pane_t

0xe203,	// (0x0001ba51) main_radioblah_anim_pane_ParamLimits

0xe203,	// (0x0001ba51) main_radioblah_anim_pane

0xe214,	// (0x0001ba62) main_radioblah_info_pane_ParamLimits

0xe214,	// (0x0001ba62) main_radioblah_info_pane

0xe228,	// (0x0001ba76) main_radioblah_pane_t1_ParamLimits

0xe228,	// (0x0001ba76) main_radioblah_pane_t1

0xe244,	// (0x0001ba92) main_radioblah_pane_t2_ParamLimits

0xe244,	// (0x0001ba92) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d4f2) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d4f2) main_radioblah_pane_t

0x7ddf,	// (0x0001562d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ddf,	// (0x0001562d) main_radioblah_rocker_ctrl_pane

0xe28c,	// (0x0001bada) main_radioblah_info_pane_t1_ParamLimits

0xe28c,	// (0x0001bada) main_radioblah_info_pane_t1

0x7e37,	// (0x00015685) main_radioblah_info_pane_t2_ParamLimits

0x7e37,	// (0x00015685) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d4fb) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d4fb) main_radioblah_info_pane_t

0xc2bd,	// (0x00019b0b) main_radioblah_rocker_ctrl_pane_g1

0x7ee7,	// (0x00015735) main_radioblah_rocker_ctrl_pane_g2

0x7eef,	// (0x0001573d) main_radioblah_rocker_ctrl_pane_g3

0x7ef7,	// (0x00015745) main_radioblah_rocker_ctrl_pane_g4

0x7eff,	// (0x0001574d) main_radioblah_rocker_ctrl_pane_g5

0x7f07,	// (0x00015755) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d504) main_radioblah_rocker_ctrl_pane_g

0x7959,	// (0x000151a7) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf75,	// (0x0001a7c3) cam4_image_uncrop_qvga_pane

0xcfce,	// (0x0001a81c) vid4_image_uncrop_qcif_pane

0xd91d,	// (0x0001b16b) cam6_image_uncrop_qvga_pane_ParamLimits

0xd91d,	// (0x0001b16b) cam6_image_uncrop_qvga_pane

0xd9f3,	// (0x0001b241) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9f3,	// (0x0001b241) vid6_image_uncrop_qcif_pane

0x9382,	// (0x00016bd0) bg_popup_preview_window_pane_cp03

0xdd4b,	// (0x0001b599) list_cset_text2_pane

0xdd53,	// (0x0001b5a1) main_cset6_text2_pane_g1

0xdd5b,	// (0x0001b5a9) main_cset6_text2_pane_t1

0x7f0f,	// (0x0001575d) list_cset_text2_pane_t1_ParamLimits

0x7f0f,	// (0x0001575d) list_cset_text2_pane_t1

0x93f2,	// (0x00016c40) main_radioblah_pane_ParamLimits

0x7c6c,	// (0x000154ba) main_mobtv_info_pane_t3_ParamLimits

0x7c6c,	// (0x000154ba) main_mobtv_info_pane_t3

0x7dcd,	// (0x0001561b) main_radioblah_pane_g1

0x7e07,	// (0x00015655) main_radioblah_info_pane_g1

0x7e8c,	// (0x000156da) main_radioblah_info_pane_t3_ParamLimits

0x7e8c,	// (0x000156da) main_radioblah_info_pane_t3

0x28ca,	// (0x00010118) highlight_cell_cale_month_pane_ParamLimits

0x28ca,	// (0x00010118) highlight_cell_cale_month_pane

0x9382,	// (0x00016bd0) main_phob_fisheye_pane

0xc617,	// (0x00019e65) scroll_pane_cp0031_ParamLimits

0xc617,	// (0x00019e65) scroll_pane_cp0031

0xdb01,	// (0x0001b34f) wait_bar_pane_cp08_ParamLimits

0x7760,	// (0x00014fae) cset_list_set_pane_copy1_ParamLimits

0xe2c6,	// (0x0001bb14) highlight_cell_cale_month_pane_g1

0x7f28,	// (0x00015776) highlight_cell_cale_month_pane_t1

0xd67b,	// (0x0001aec9) list_gen_pane_cp01

0xd197,	// (0x0001a9e5) scroll_pane_01

0xea99,	// (0x0001c2e7) list_single_double_fisheye_pane

0x7f36,	// (0x00015784) list_double_fisheye_pane_g1_ParamLimits

0x7f36,	// (0x00015784) list_double_fisheye_pane_g1

0x7f42,	// (0x00015790) list_double_fisheye_pane_g2_ParamLimits

0x7f42,	// (0x00015790) list_double_fisheye_pane_g2

0x7f56,	// (0x000157a4) list_double_fisheye_pane_g3_ParamLimits

0x7f56,	// (0x000157a4) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d511) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d511) list_double_fisheye_pane_g

0x7f7f,	// (0x000157cd) list_double_fisheye_pane_t1_ParamLimits

0x7f7f,	// (0x000157cd) list_double_fisheye_pane_t1

0x7f9a,	// (0x000157e8) list_double_fisheye_pane_t2_ParamLimits

0x7f9a,	// (0x000157e8) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d51c) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d51c) list_double_fisheye_pane_t

0x9382,	// (0x00016bd0) main_call5_pane

0x7d61,	// (0x000155af) sc_swipe_pane_ParamLimits

0x7d61,	// (0x000155af) sc_swipe_pane

0x7fcf,	// (0x0001581d) call5_image_pane_ParamLimits

0x7fcf,	// (0x0001581d) call5_image_pane

0x7fec,	// (0x0001583a) call5_swipe_1_pane_ParamLimits

0x7fec,	// (0x0001583a) call5_swipe_1_pane

0x7fff,	// (0x0001584d) call5_swipe_2_pane_ParamLimits

0x7fff,	// (0x0001584d) call5_swipe_2_pane

0x802a,	// (0x00015878) popup_call5_audio_first_window_ParamLimits

0x802a,	// (0x00015878) popup_call5_audio_first_window

0xc529,	// (0x00019d77) call5_swipe_1_pane_g1_ParamLimits

0xc529,	// (0x00019d77) call5_swipe_1_pane_g1

0xe2ce,	// (0x0001bb1c) call5_swipe_1_pane_g2_ParamLimits

0xe2ce,	// (0x0001bb1c) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d521) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d521) call5_swipe_1_pane_g

0xe2da,	// (0x0001bb28) call5_swipe_1_pane_t1_ParamLimits

0xe2da,	// (0x0001bb28) call5_swipe_1_pane_t1

0xc529,	// (0x00019d77) call5_swipe_2_pane_g1_ParamLimits

0xc529,	// (0x00019d77) call5_swipe_2_pane_g1

0xe2ef,	// (0x0001bb3d) call5_swipe_2_pane_g2_ParamLimits

0xe2ef,	// (0x0001bb3d) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d526) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d526) call5_swipe_2_pane_g

0xe2fb,	// (0x0001bb49) call5_swipe_2_pane_t1_ParamLimits

0xe2fb,	// (0x0001bb49) call5_swipe_2_pane_t1

0xe310,	// (0x0001bb5e) sc_swipe_pane_g1_ParamLimits

0xe310,	// (0x0001bb5e) sc_swipe_pane_g1

0xe31d,	// (0x0001bb6b) sc_swipe_pane_g2_ParamLimits

0xe31d,	// (0x0001bb6b) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d52b) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d52b) sc_swipe_pane_g

0xe329,	// (0x0001bb77) sc_swipe_pane_t1_ParamLimits

0xe329,	// (0x0001bb77) sc_swipe_pane_t1

0x9382,	// (0x00016bd0) main_cmail_launcher_pane

0x803b,	// (0x00015889) aid_size_cell_cmail_l_ParamLimits

0x803b,	// (0x00015889) aid_size_cell_cmail_l

0x8055,	// (0x000158a3) grid_cmail_l_pane_ParamLimits

0x8055,	// (0x000158a3) grid_cmail_l_pane

0x8070,	// (0x000158be) cell_cmail_l_pane_ParamLimits

0x8070,	// (0x000158be) cell_cmail_l_pane

0x8096,	// (0x000158e4) cell_cmail_l_pane_g1_ParamLimits

0x8096,	// (0x000158e4) cell_cmail_l_pane_g1

0x80a2,	// (0x000158f0) cell_cmail_l_pane_t1_ParamLimits

0x80a2,	// (0x000158f0) cell_cmail_l_pane_t1

0xe33e,	// (0x0001bb8c) cell_cmail_l_pane_t2_ParamLimits

0xe33e,	// (0x0001bb8c) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d530) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d530) cell_cmail_l_pane_t

0x93f2,	// (0x00016c40) grid_highlight_pane_cp018_ParamLimits

0x93f2,	// (0x00016c40) grid_highlight_pane_cp018

0x0e47,	// (0x0000e695) main2_pane_ParamLimits

0x0e47,	// (0x0000e695) main2_pane

0x9c24,	// (0x00017472) popup_sp_fs_action_menu_bg_pane_g1

0x9c2c,	// (0x0001747a) popup_sp_fs_action_menu_bg_pane_g2

0x9c34,	// (0x00017482) popup_sp_fs_action_menu_bg_pane_g3

0x9c3c,	// (0x0001748a) popup_sp_fs_action_menu_bg_pane_g4

0x9c44,	// (0x00017492) popup_sp_fs_action_menu_bg_pane_g5

0x9c4c,	// (0x0001749a) popup_sp_fs_action_menu_bg_pane_g6

0x9c54,	// (0x000174a2) popup_sp_fs_action_menu_bg_pane_g7

0x9c5c,	// (0x000174aa) popup_sp_fs_action_menu_bg_pane_g8

0x9c64,	// (0x000174b2) popup_sp_fs_action_menu_bg_pane_g9

0x9c6c,	// (0x000174ba) popup_sp_fs_action_menu_bg_pane_g10

0x9c6c,	// (0x000174ba) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001c9fa) popup_sp_fs_action_menu_bg_pane_g

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g3_g1

0x9e48,	// (0x00017696) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_t3_g3_g2

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001caaa) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001caaa) list_medium_line_x2_t3_g3_g

0x9e60,	// (0x000176ae) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9e60,	// (0x000176ae) list_medium_line_x2_t3_g3_t1

0x1beb,	// (0x0000f439) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1beb,	// (0x0000f439) list_medium_line_x2_t3_g3_t2

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001cab1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001cab1) list_medium_line_x2_t3_g3_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g2_g1

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001cab8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001cab8) list_medium_line_x2_t3_g2_g

0x9e8a,	// (0x000176d8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9e8a,	// (0x000176d8) list_medium_line_x2_t3_g2_t1

0x9ea0,	// (0x000176ee) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9ea0,	// (0x000176ee) list_medium_line_x2_t3_g2_t2

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cabd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cabd) list_medium_line_x2_t3_g2_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t4_g4_g1

0x9eb2,	// (0x00017700) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9eb2,	// (0x00017700) list_medium_line_x2_t4_g4_g2

0x9e48,	// (0x00017696) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_t4_g4_g3

0x9ebe,	// (0x0001770c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9ebe,	// (0x0001770c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001cac4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001cac4) list_medium_line_x2_t4_g4_g

0x1bff,	// (0x0000f44d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1bff,	// (0x0000f44d) list_medium_line_x2_t4_g4_t1

0x1c16,	// (0x0000f464) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c16,	// (0x0000f464) list_medium_line_x2_t4_g4_t2

0x1c2b,	// (0x0000f479) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c2b,	// (0x0000f479) list_medium_line_x2_t4_g4_t3

0x9eca,	// (0x00017718) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9eca,	// (0x00017718) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cacd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cacd) list_medium_line_x2_t4_g4_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g4_g1

0x9eb2,	// (0x00017700) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9eb2,	// (0x00017700) list_medium_line_x2_t2_g4_g2

0x9e48,	// (0x00017696) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_t2_g4_g3

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001cb34) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001cb34) list_medium_line_x2_t2_g4_g

0xa1b2,	// (0x00017a00) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa1b2,	// (0x00017a00) list_medium_line_x2_t2_g4_t1

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001cb3d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001cb3d) list_medium_line_x2_t2_g4_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g3_g1

0x9e48,	// (0x00017696) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_t2_g3_g2

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001caaa) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001caaa) list_medium_line_x2_t2_g3_g

0xa1c7,	// (0x00017a15) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa1c7,	// (0x00017a15) list_medium_line_x2_t2_g3_t1

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001cb42) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001cb42) list_medium_line_x2_t2_g3_t

0x29f9,	// (0x00010247) main_sp_fs_list_pane_ParamLimits

0x29f9,	// (0x00010247) main_sp_fs_list_pane

0x2a05,	// (0x00010253) sp_fs_scroll_pane_ParamLimits

0x2a05,	// (0x00010253) sp_fs_scroll_pane

0x2a11,	// (0x0001025f) list_medium_line_x2_t3_t1

0x2a21,	// (0x0001026f) list_medium_line_x2_t3_t2

0xa42f,	// (0x00017c7d) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001cb8d) list_medium_line_x2_t3_t

0x2a2f,	// (0x0001027d) list_medium_line_x3_t4_t1

0x2a3f,	// (0x0001028d) list_medium_line_x3_t4_t2

0xa43d,	// (0x00017c8b) list_medium_line_x3_t4_t3

0xa42f,	// (0x00017c7d) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cb94) list_medium_line_x3_t4_t

0x2a4d,	// (0x0001029b) list_medium_line_x4_t5_t1

0x2a5d,	// (0x000102ab) list_medium_line_x4_t5_t2

0xa43d,	// (0x00017c8b) list_medium_line_x4_t5_t3

0xa44b,	// (0x00017c99) list_medium_line_x4_t5_t4

0xa42f,	// (0x00017c7d) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cb9d) list_medium_line_x4_t5_t

0x9e3c,	// (0x0001768a) list_medium_line_t4_g4_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_t4_g4_g1

0x9ebe,	// (0x0001770c) list_medium_line_t4_g4_g2_ParamLimits

0x9ebe,	// (0x0001770c) list_medium_line_t4_g4_g2

0xa459,	// (0x00017ca7) list_medium_line_t4_g4_g3_ParamLimits

0xa459,	// (0x00017ca7) list_medium_line_t4_g4_g3

0x9e54,	// (0x000176a2) list_medium_line_t4_g4_g4_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cba8) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cba8) list_medium_line_t4_g4_g

0xa465,	// (0x00017cb3) list_medium_line_t4_g4_t1_ParamLimits

0xa465,	// (0x00017cb3) list_medium_line_t4_g4_t1

0xa47a,	// (0x00017cc8) list_medium_line_t4_g4_t2_ParamLimits

0xa47a,	// (0x00017cc8) list_medium_line_t4_g4_t2

0xa48f,	// (0x00017cdd) list_medium_line_t4_g4_t3_ParamLimits

0xa48f,	// (0x00017cdd) list_medium_line_t4_g4_t3

0x9e75,	// (0x000176c3) list_medium_line_t4_g4_t4_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cbb1) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cbb1) list_medium_line_t4_g4_t

0x2b2e,	// (0x0001037c) chi_dic_find_pane_g1

0x3c24,	// (0x00011472) main_tport_pane

0xd300,	// (0x0001ab4e) list_medium_line_plain_t1

0xd352,	// (0x0001aba0) list_medium_line_t2_g2_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t2_g2_g1

0xd35e,	// (0x0001abac) list_medium_line_t2_g2_g2_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d26d) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d26d) list_medium_line_t2_g2_g

0x6c00,	// (0x0001444e) list_medium_line_t2_g2_t1_ParamLimits

0x6c00,	// (0x0001444e) list_medium_line_t2_g2_t1

0x6c1a,	// (0x00014468) list_medium_line_t2_g2_t2_ParamLimits

0x6c1a,	// (0x00014468) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d272) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d272) list_medium_line_t2_g2_t

0xd71c,	// (0x0001af6a) aid_sp_fs_list_icon_a_sm

0xd724,	// (0x0001af72) aid_sp_fs_list_icon_d

0xd72c,	// (0x0001af7a) aid_sp_fs_text_primary

0xd735,	// (0x0001af83) aid_sp_fs_text_secondary

0xd73e,	// (0x0001af8c) list_medium_line

0xd73e,	// (0x0001af8c) list_medium_line_g2

0xd73e,	// (0x0001af8c) list_medium_line_g3

0xd73e,	// (0x0001af8c) list_medium_line_plain

0xd73e,	// (0x0001af8c) list_medium_line_plain_t2

0xd73e,	// (0x0001af8c) list_medium_line_plain_t3

0xd73e,	// (0x0001af8c) list_medium_line_right_icon

0xd73e,	// (0x0001af8c) list_medium_line_right_iconx2

0xd73e,	// (0x0001af8c) list_medium_line_t2

0xd73e,	// (0x0001af8c) list_medium_line_t2_g2

0xd73e,	// (0x0001af8c) list_medium_line_t2_g3

0xd73e,	// (0x0001af8c) list_medium_line_t2_right_icon

0xd73e,	// (0x0001af8c) list_medium_line_t2_right_iconx2

0xd73e,	// (0x0001af8c) list_medium_line_t3

0xd73e,	// (0x0001af8c) list_medium_line_t3_g2

0xd73e,	// (0x0001af8c) list_medium_line_t3_g3

0xd73e,	// (0x0001af8c) list_medium_line_t3_right_iconx2

0xd747,	// (0x0001af95) list_medium_line_t4_g4

0xd750,	// (0x0001af9e) list_medium_line_x2

0xd750,	// (0x0001af9e) list_medium_line_x2_t2_g2

0xd750,	// (0x0001af9e) list_medium_line_x2_t2_g3

0xd750,	// (0x0001af9e) list_medium_line_x2_t2_g4

0xd750,	// (0x0001af9e) list_medium_line_x2_t3

0xd750,	// (0x0001af9e) list_medium_line_x2_t3_g2

0xd750,	// (0x0001af9e) list_medium_line_x2_t3_g3

0xd750,	// (0x0001af9e) list_medium_line_x2_t3_g4

0xd750,	// (0x0001af9e) list_medium_line_x2_t4_g2

0xd750,	// (0x0001af9e) list_medium_line_x2_t4_g4

0xd759,	// (0x0001afa7) list_medium_line_x3

0xd759,	// (0x0001afa7) list_medium_line_x3_t4

0xd759,	// (0x0001afa7) list_medium_line_x3_t4_g4

0xd747,	// (0x0001af95) list_medium_line_x4_t4

0xd747,	// (0x0001af95) list_medium_line_x4_t4_g7

0xd747,	// (0x0001af95) list_medium_line_x4_t5

0xd762,	// (0x0001afb0) list_single_fs_dyc_pane_ParamLimits

0xd762,	// (0x0001afb0) list_single_fs_dyc_pane

0x9e3c,	// (0x0001768a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x4_t4_g7_g1

0xdc7a,	// (0x0001b4c8) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc7a,	// (0x0001b4c8) list_medium_line_x4_t4_g7_g2

0xdc86,	// (0x0001b4d4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc86,	// (0x0001b4d4) list_medium_line_x4_t4_g7_g3

0xdc95,	// (0x0001b4e3) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc95,	// (0x0001b4e3) list_medium_line_x4_t4_g7_g4

0xdca1,	// (0x0001b4ef) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdca1,	// (0x0001b4ef) list_medium_line_x4_t4_g7_g5

0xdcb0,	// (0x0001b4fe) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdcb0,	// (0x0001b4fe) list_medium_line_x4_t4_g7_g6

0xdcbf,	// (0x0001b50d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdcbf,	// (0x0001b50d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d43d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d43d) list_medium_line_x4_t4_g7_g

0xdccb,	// (0x0001b519) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdccb,	// (0x0001b519) list_medium_line_x4_t4_g7_t1

0xdce0,	// (0x0001b52e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdce0,	// (0x0001b52e) list_medium_line_x4_t4_g7_t2

0xdcf5,	// (0x0001b543) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdcf5,	// (0x0001b543) list_medium_line_x4_t4_g7_t3

0xdd0a,	// (0x0001b558) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd0a,	// (0x0001b558) list_medium_line_x4_t4_g7_t4

0xdd1c,	// (0x0001b56a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd1c,	// (0x0001b56a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d44c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d44c) list_medium_line_x4_t4_g7_t

0xdd2e,	// (0x0001b57c) list_single_dyc_row_pane_ParamLimits

0xdd2e,	// (0x0001b57c) list_single_dyc_row_pane

0x7fbc,	// (0x0001580a) call5_gesture_pane_ParamLimits

0x7fbc,	// (0x0001580a) call5_gesture_pane

0x8012,	// (0x00015860) call5_windows_pane_ParamLimits

0x8012,	// (0x00015860) call5_windows_pane

0x80b8,	// (0x00015906) call5_swipe_1_pane_cp_ParamLimits

0x80b8,	// (0x00015906) call5_swipe_1_pane_cp

0x80c4,	// (0x00015912) call5_swipe_2_pane_cp_ParamLimits

0x80c4,	// (0x00015912) call5_swipe_2_pane_cp

0xa8fa,	// (0x00018148) call5_image_pane_cp

0x80d0,	// (0x0001591e) popup_call5_audio_first_window_cp_ParamLimits

0x80d0,	// (0x0001591e) popup_call5_audio_first_window_cp

0xe310,	// (0x0001bb5e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe310,	// (0x0001bb5e) call5_swipe_1_pane_g1_cp

0xe350,	// (0x0001bb9e) call5_swipe_1_pane_g2_cp

0xe329,	// (0x0001bb77) call5_swipe_1_pane_t1_cp_ParamLimits

0xe329,	// (0x0001bb77) call5_swipe_1_pane_t1_cp

0xe310,	// (0x0001bb5e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe310,	// (0x0001bb5e) call5_swipe_2_pane_g1_cp

0xe358,	// (0x0001bba6) call5_swipe_2_pane_g2_cp

0xe360,	// (0x0001bbae) call5_swipe_2_pane_t1_cp_ParamLimits

0xe360,	// (0x0001bbae) call5_swipe_2_pane_t1_cp

0x93f2,	// (0x00016c40) main_sp_fs_email_pane

0xe375,	// (0x0001bbc3) main_sp_fs_listscroll_pane_te

0xe37e,	// (0x0001bbcc) popup_sp_fs_action_menu_pane_ParamLimits

0xe37e,	// (0x0001bbcc) popup_sp_fs_action_menu_pane

0xc2bd,	// (0x00019b0b) bg_sp_fs_ctrlbar_pane_g1

0xe3c2,	// (0x0001bc10) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3cb,	// (0x0001bc19) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3d4,	// (0x0001bc22) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2bd,	// (0x00019b0b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d535) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0a2,	// (0x000198f0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0a2,	// (0x000198f0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3dd,	// (0x0001bc2b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3dd,	// (0x0001bc2b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3e9,	// (0x0001bc37) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3e9,	// (0x0001bc37) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d53e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d53e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3f5,	// (0x0001bc43) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3f5,	// (0x0001bc43) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe40f,	// (0x0001bc5d) list_medium_line_t2_right_icon_g1

0x80de,	// (0x0001592c) list_medium_line_t2_right_icon_t1

0x80ee,	// (0x0001593c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d543) list_medium_line_t2_right_icon_t

0xbdb7,	// (0x00019605) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdb7,	// (0x00019605) bg_sp_fs_ctrlbar_pane

0x8148,	// (0x00015996) main_sp_fs_ctrlbar_button_pane_cp01

0x8152,	// (0x000159a0) main_sp_fs_ctrlbar_ddmenu_pane

0xe44f,	// (0x0001bc9d) main_sp_fs_ctrlbar_pane_g1

0xe45b,	// (0x0001bca9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d548) main_sp_fs_ctrlbar_pane_g

0xe467,	// (0x0001bcb5) main_sp_fs_ctrlbar_pane_t1

0x815c,	// (0x000159aa) main_sp_fs_ctrlbar_pane

0x8180,	// (0x000159ce) main_sp_fs_listscroll_pane_te_cp01

0x81a0,	// (0x000159ee) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x81a0,	// (0x000159ee) popup_sp_fs_action_menu_pane_cp01

0x93f2,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x93f2,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp01

0xe47c,	// (0x0001bcca) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe47c,	// (0x0001bcca) sp_fs_action_menu_list_gene_pane_g1

0xe48b,	// (0x0001bcd9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe48b,	// (0x0001bcd9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d54d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d54d) sp_fs_action_menu_list_gene_pane_g

0xe498,	// (0x0001bce6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe498,	// (0x0001bce6) sp_fs_action_menu_list_gene_pane_t1

0xe4b0,	// (0x0001bcfe) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b0,	// (0x0001bcfe) sp_fs_action_menu_list_gene_pane

0xe4d1,	// (0x0001bd1f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d1,	// (0x0001bd1f) popup_sp_fs_action_menu_bg_pane

0xe4df,	// (0x0001bd2d) sp_fs_action_menu_list_pane_ParamLimits

0xe4df,	// (0x0001bd2d) sp_fs_action_menu_list_pane

0xe501,	// (0x0001bd4f) sp_fs_scroll_pane_cp01_ParamLimits

0xe501,	// (0x0001bd4f) sp_fs_scroll_pane_cp01

0x81ba,	// (0x00015a08) list_medium_line_plain_t2_t1

0x81ca,	// (0x00015a18) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d552) list_medium_line_plain_t2_t

0x81da,	// (0x00015a28) list_medium_line_plain_t3_t1

0x81ea,	// (0x00015a38) list_medium_line_plain_t3_t2

0x81f8,	// (0x00015a46) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d557) list_medium_line_plain_t3_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t2_g2_g1

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001cab8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001cab8) list_medium_line_x2_t2_g2_g

0xa465,	// (0x00017cb3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa465,	// (0x00017cb3) list_medium_line_x2_t2_g2_t1

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d55e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d55e) list_medium_line_x2_t2_g2_t

0x9e3c,	// (0x0001768a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t4_g2_g1

0x9e54,	// (0x000176a2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001cab8) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001cab8) list_medium_line_x2_t4_g2_g

0x8206,	// (0x00015a54) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8206,	// (0x00015a54) list_medium_line_x2_t4_g2_t1

0x8220,	// (0x00015a6e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8220,	// (0x00015a6e) list_medium_line_x2_t4_g2_t2

0x8235,	// (0x00015a83) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8235,	// (0x00015a83) list_medium_line_x2_t4_g2_t3

0x9e75,	// (0x000176c3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d563) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d563) list_medium_line_x2_t4_g2_t

0xe527,	// (0x0001bd75) list_medium_line_t3_right_iconx2_g1

0xe40f,	// (0x0001bc5d) list_medium_line_t3_right_iconx2_g2

0x824a,	// (0x00015a98) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d56c) list_medium_line_t3_right_iconx2_g

0x8254,	// (0x00015aa2) list_medium_line_t3_right_iconx2_t1

0x8264,	// (0x00015ab2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d573) list_medium_line_t3_right_iconx2_t

0x9e3c,	// (0x0001768a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x3_t4_g4_g1

0x9e48,	// (0x00017696) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x3_t4_g4_g2

0x9ebe,	// (0x0001770c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9ebe,	// (0x0001770c) list_medium_line_x3_t4_g4_g3

0xe52f,	// (0x0001bd7d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe52f,	// (0x0001bd7d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d578) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d578) list_medium_line_x3_t4_g4_g

0x8272,	// (0x00015ac0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8272,	// (0x00015ac0) list_medium_line_x3_t4_g4_t1

0x8289,	// (0x00015ad7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8289,	// (0x00015ad7) list_medium_line_x3_t4_g4_t2

0xa47a,	// (0x00017cc8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa47a,	// (0x00017cc8) list_medium_line_x3_t4_g4_t3

0xe53b,	// (0x0001bd89) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe53b,	// (0x0001bd89) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d581) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d581) list_medium_line_x3_t4_g4_t

0x82a4,	// (0x00015af2) list_single_dyc_row_text_pane_t1_ParamLimits

0x82a4,	// (0x00015af2) list_single_dyc_row_text_pane_t1

0x82ed,	// (0x00015b3b) list_single_dyc_row_text_pane_t2_ParamLimits

0x82ed,	// (0x00015b3b) list_single_dyc_row_text_pane_t2

0xe558,	// (0x0001bda6) list_single_dyc_row_text_pane_t3_ParamLimits

0xe558,	// (0x0001bda6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d58a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d58a) list_single_dyc_row_text_pane_t

0xe56a,	// (0x0001bdb8) list_single_dyc_row_pane_g1_ParamLimits

0xe56a,	// (0x0001bdb8) list_single_dyc_row_pane_g1

0xe576,	// (0x0001bdc4) list_single_dyc_row_pane_g2_ParamLimits

0xe576,	// (0x0001bdc4) list_single_dyc_row_pane_g2

0xe582,	// (0x0001bdd0) list_single_dyc_row_pane_g3_ParamLimits

0xe582,	// (0x0001bdd0) list_single_dyc_row_pane_g3

0xe58e,	// (0x0001bddc) list_single_dyc_row_pane_g4_ParamLimits

0xe58e,	// (0x0001bddc) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d591) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d591) list_single_dyc_row_pane_g

0xe59a,	// (0x0001bde8) list_single_dyc_row_text_pane_ParamLimits

0xe59a,	// (0x0001bde8) list_single_dyc_row_text_pane

0x9382,	// (0x00016bd0) bg_sp_fs_scroll_pane

0xe5b9,	// (0x0001be07) thumb_sp_fs_scroll_pane

0xd352,	// (0x0001aba0) list_medium_line_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_g1

0xe5c2,	// (0x0001be10) list_medium_line_t1_ParamLimits

0xe5c2,	// (0x0001be10) list_medium_line_t1

0x9e3c,	// (0x0001768a) list_medium_line_x2_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_g1

0x9e48,	// (0x00017696) list_medium_line_x2_g2_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d59a) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d59a) list_medium_line_x2_g

0xe5d7,	// (0x0001be25) list_medium_line_x2_t1_ParamLimits

0xe5d7,	// (0x0001be25) list_medium_line_x2_t1

0x9e3c,	// (0x0001768a) list_medium_line_x3_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x3_g1

0x9e48,	// (0x00017696) list_medium_line_x3_g2_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d59a) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d59a) list_medium_line_x3_g

0xe5d7,	// (0x0001be25) list_medium_line_x3_t1_ParamLimits

0xe5d7,	// (0x0001be25) list_medium_line_x3_t1

0xe5ed,	// (0x0001be3b) thumb_sp_fs_scroll_pane_g1

0xe5f6,	// (0x0001be44) thumb_sp_fs_scroll_pane_g2

0xe5ff,	// (0x0001be4d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d59f) thumb_sp_fs_scroll_pane_g

0xe5ed,	// (0x0001be3b) bg_sp_fs_scroll_pane_g1

0xe5f6,	// (0x0001be44) bg_sp_fs_scroll_pane_g2

0xe5ff,	// (0x0001be4d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d59f) bg_sp_fs_scroll_pane_g

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9e3c,	// (0x0001768a) list_medium_line_x2_t3_g4_g1

0x9eb2,	// (0x00017700) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9eb2,	// (0x00017700) list_medium_line_x2_t3_g4_g2

0x9e48,	// (0x00017696) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9e48,	// (0x00017696) list_medium_line_x2_t3_g4_g3

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9e54,	// (0x000176a2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001cb34) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001cb34) list_medium_line_x2_t3_g4_g

0x8347,	// (0x00015b95) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8347,	// (0x00015b95) list_medium_line_x2_t3_g4_t1

0x8361,	// (0x00015baf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8361,	// (0x00015baf) list_medium_line_x2_t3_g4_t2

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9e75,	// (0x000176c3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d5a6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d5a6) list_medium_line_x2_t3_g4_t

0xd352,	// (0x0001aba0) list_medium_line_g2_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_g2_g1

0xd35e,	// (0x0001abac) list_medium_line_g2_g2_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d26d) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d26d) list_medium_line_g2_g

0xe608,	// (0x0001be56) list_medium_line_g2_t1_ParamLimits

0xe608,	// (0x0001be56) list_medium_line_g2_t1

0xd352,	// (0x0001aba0) list_medium_line_t3_g2_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t3_g2_g1

0xd35e,	// (0x0001abac) list_medium_line_t3_g2_g2_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d26d) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d26d) list_medium_line_t3_g2_g

0x837b,	// (0x00015bc9) list_medium_line_t3_g2_t1_ParamLimits

0x837b,	// (0x00015bc9) list_medium_line_t3_g2_t1

0x8395,	// (0x00015be3) list_medium_line_t3_g2_t2_ParamLimits

0x8395,	// (0x00015be3) list_medium_line_t3_g2_t2

0x83aa,	// (0x00015bf8) list_medium_line_t3_g2_t3_ParamLimits

0x83aa,	// (0x00015bf8) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d5ad) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d5ad) list_medium_line_t3_g2_t

0xe40f,	// (0x0001bc5d) list_medium_line_right_icon_g1

0xe61d,	// (0x0001be6b) list_medium_line_right_icon_t1

0xd352,	// (0x0001aba0) list_medium_line_t2_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t2_g1

0x83c4,	// (0x00015c12) list_medium_line_t2_t1_ParamLimits

0x83c4,	// (0x00015c12) list_medium_line_t2_t1

0x83de,	// (0x00015c2c) list_medium_line_t2_t2_ParamLimits

0x83de,	// (0x00015c2c) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d5b4) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d5b4) list_medium_line_t2_t

0xd352,	// (0x0001aba0) list_medium_line_t3_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t3_g1

0x83f7,	// (0x00015c45) list_medium_line_t3_t1_ParamLimits

0x83f7,	// (0x00015c45) list_medium_line_t3_t1

0x840e,	// (0x00015c5c) list_medium_line_t3_t2_ParamLimits

0x840e,	// (0x00015c5c) list_medium_line_t3_t2

0x8423,	// (0x00015c71) list_medium_line_t3_t3_ParamLimits

0x8423,	// (0x00015c71) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d5b9) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d5b9) list_medium_line_t3_t

0xd352,	// (0x0001aba0) list_medium_line_g3_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_g3_g1

0xe62b,	// (0x0001be79) list_medium_line_g3_g2_ParamLimits

0xe62b,	// (0x0001be79) list_medium_line_g3_g2

0xd35e,	// (0x0001abac) list_medium_line_g3_g3_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d5c0) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d5c0) list_medium_line_g3_g

0xe637,	// (0x0001be85) list_medium_line_g3_t1_ParamLimits

0xe637,	// (0x0001be85) list_medium_line_g3_t1

0xd352,	// (0x0001aba0) list_medium_line_t2_g3_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t2_g3_g1

0xe62b,	// (0x0001be79) list_medium_line_t2_g3_g2_ParamLimits

0xe62b,	// (0x0001be79) list_medium_line_t2_g3_g2

0xd35e,	// (0x0001abac) list_medium_line_t2_g3_g3_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d5c0) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d5c0) list_medium_line_t2_g3_g

0x8435,	// (0x00015c83) list_medium_line_t2_g3_t1_ParamLimits

0x8435,	// (0x00015c83) list_medium_line_t2_g3_t1

0x844f,	// (0x00015c9d) list_medium_line_t2_g3_t2_ParamLimits

0x844f,	// (0x00015c9d) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d5c7) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d5c7) list_medium_line_t2_g3_t

0xd352,	// (0x0001aba0) list_medium_line_t3_g3_g1_ParamLimits

0xd352,	// (0x0001aba0) list_medium_line_t3_g3_g1

0xe62b,	// (0x0001be79) list_medium_line_t3_g3_g2_ParamLimits

0xe62b,	// (0x0001be79) list_medium_line_t3_g3_g2

0xd35e,	// (0x0001abac) list_medium_line_t3_g3_g3_ParamLimits

0xd35e,	// (0x0001abac) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d5c0) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d5c0) list_medium_line_t3_g3_g

0x846a,	// (0x00015cb8) list_medium_line_t3_g3_t1_ParamLimits

0x846a,	// (0x00015cb8) list_medium_line_t3_g3_t1

0x8483,	// (0x00015cd1) list_medium_line_t3_g3_t2_ParamLimits

0x8483,	// (0x00015cd1) list_medium_line_t3_g3_t2

0x8499,	// (0x00015ce7) list_medium_line_t3_g3_t3_ParamLimits

0x8499,	// (0x00015ce7) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d5cc) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d5cc) list_medium_line_t3_g3_t

0xe527,	// (0x0001bd75) list_medium_line_right_iconx2_g1

0xe40f,	// (0x0001bc5d) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d5d3) list_medium_line_right_iconx2_g

0xe64c,	// (0x0001be9a) list_medium_line_right_iconx2_t1

0xe527,	// (0x0001bd75) list_medium_line_t2_right_iconx2_g1

0xe40f,	// (0x0001bc5d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d5d3) list_medium_line_t2_right_iconx2_g

0x84b3,	// (0x00015d01) list_medium_line_t2_right_iconx2_t1

0x84c3,	// (0x00015d11) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001d5d8) list_medium_line_t2_right_iconx2_t

0xe65a,	// (0x0001bea8) list_medium_line_x4_t4_t1

0x84d5,	// (0x00015d23) list_medium_line_x4_t4_t2

0x84e5,	// (0x00015d33) list_medium_line_x4_t4_t3

0x84f5,	// (0x00015d43) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001d5dd) list_medium_line_x4_t4_t

0x8548,	// (0x00015d96) tport_appsw_pane_ParamLimits

0x8548,	// (0x00015d96) tport_appsw_pane

0x8559,	// (0x00015da7) tport_contact_pane_ParamLimits

0x8559,	// (0x00015da7) tport_contact_pane

0x8572,	// (0x00015dc0) tport_listscroll_pane_ParamLimits

0x8572,	// (0x00015dc0) tport_listscroll_pane

0x858d,	// (0x00015ddb) cell_tport_appsw_pane_ParamLimits

0x858d,	// (0x00015ddb) cell_tport_appsw_pane

0xd011,	// (0x0001a85f) tport_appsw_pane_g1_ParamLimits

0xd011,	// (0x0001a85f) tport_appsw_pane_g1

0xe668,	// (0x0001beb6) tport_contact_pane_g1

0xde1f,	// (0x0001b66d) tport_contact_pane_t1

0xe671,	// (0x0001bebf) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001d5e6) tport_contact_pane_t

0xe67f,	// (0x0001becd) list_tport_pane

0xe688,	// (0x0001bed6) scroll_pane_cp_030

0xe699,	// (0x0001bee7) cell_tport_appsw_pane_g1

0xe6a9,	// (0x0001bef7) cell_tport_appsw_pane_t1

0x9382,	// (0x00016bd0) grid_highlight_pane_cp019

0x85cd,	// (0x00015e1b) list_tport_double_graphic_pane_ParamLimits

0x85cd,	// (0x00015e1b) list_tport_double_graphic_pane

0x93f2,	// (0x00016c40) list_highlight_pane_cp023_ParamLimits

0x93f2,	// (0x00016c40) list_highlight_pane_cp023

0x85da,	// (0x00015e28) list_tport_double_graphic_pane_g1_ParamLimits

0x85da,	// (0x00015e28) list_tport_double_graphic_pane_g1

0x85e7,	// (0x00015e35) list_tport_double_graphic_pane_t1_ParamLimits

0x85e7,	// (0x00015e35) list_tport_double_graphic_pane_t1

0x85fc,	// (0x00015e4a) list_tport_double_graphic_pane_t2_ParamLimits

0x85fc,	// (0x00015e4a) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001d5f2) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001d5f2) list_tport_double_graphic_pane_t

0x9382,	// (0x00016bd0) main_cale_note_pane

0x62fe,	// (0x00013b4c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x62fe,	// (0x00013b4c) cell_vitu2_function_top_wide_pane_cp01

0x7c80,	// (0x000154ce) wait_bar_pane_cp05_ParamLimits

0x9382,	// (0x00016bd0) listscroll_cmail_pane

0xe6bf,	// (0x0001bf0d) list_cmail_pane

0xd2cf,	// (0x0001ab1d) list_cmail_body_pane

0x8618,	// (0x00015e66) list_single_cmail_header_caption_pane

0x862e,	// (0x00015e7c) list_single_cmail_header_detail_pane_ParamLimits

0x862e,	// (0x00015e7c) list_single_cmail_header_detail_pane

0x8657,	// (0x00015ea5) list_single_cmail_header_caption_pane_t1

0x8667,	// (0x00015eb5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8667,	// (0x00015eb5) list_single_cmail_header_detail_pane_g1

0xe6e0,	// (0x0001bf2e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6e0,	// (0x0001bf2e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001d5f7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001d5f7) list_single_cmail_header_detail_pane_g

0xe6f9,	// (0x0001bf47) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6f9,	// (0x0001bf47) list_single_cmail_header_detail_pane_t1

0xe72f,	// (0x0001bf7d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe72f,	// (0x0001bf7d) list_single_cmail_header_editor_pane_bg

0xdfce,	// (0x0001b81c) list_cmail_body_pane_g1

0xe741,	// (0x0001bf8f) list_cmail_body_pane_t1

0xd07d,	// (0x0001a8cb) list_single_cmail_header_editor_pane_bg_g1

0xa0d1,	// (0x0001791f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd08d,	// (0x0001a8db) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd085,	// (0x0001a8d3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd32a,	// (0x0001ab78) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0ad,	// (0x0001a8fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd09d,	// (0x0001a8eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0a5,	// (0x0001a8f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0b1,	// (0x000178ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x86a5,	// (0x00015ef3) calenote_gesture_pane_ParamLimits

0x86a5,	// (0x00015ef3) calenote_gesture_pane

0x86c5,	// (0x00015f13) calenote_window_pane_ParamLimits

0x86c5,	// (0x00015f13) calenote_window_pane

0xe74f,	// (0x0001bf9d) popup_note_window_cp01

0x86e1,	// (0x00015f2f) calenote_swipe_1_pane_ParamLimits

0x86e1,	// (0x00015f2f) calenote_swipe_1_pane

0x80c4,	// (0x00015912) calenote_swipe_2_pane_ParamLimits

0x80c4,	// (0x00015912) calenote_swipe_2_pane

0xe310,	// (0x0001bb5e) calenote_swipe_1_pane_g1_ParamLimits

0xe310,	// (0x0001bb5e) calenote_swipe_1_pane_g1

0xe31d,	// (0x0001bb6b) calenote_swipe_1_pane_g2_ParamLimits

0xe31d,	// (0x0001bb6b) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d52b) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d52b) calenote_swipe_1_pane_g

0xe761,	// (0x0001bfaf) calenote_swipe_1_pane_t1_ParamLimits

0xe761,	// (0x0001bfaf) calenote_swipe_1_pane_t1

0xe310,	// (0x0001bb5e) calenote_swipe_2_pane_g1_ParamLimits

0xe310,	// (0x0001bb5e) calenote_swipe_2_pane_g1

0xe780,	// (0x0001bfce) calenote_swipe_2_pane_g2_ParamLimits

0xe780,	// (0x0001bfce) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001d603) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001d603) calenote_swipe_2_pane_g

0xe78c,	// (0x0001bfda) calenote_swipe_2_pane_t1_ParamLimits

0xe78c,	// (0x0001bfda) calenote_swipe_2_pane_t1

0x9382,	// (0x00016bd0) main_mup_navstr_pane

0x4fe3,	// (0x00012831) main_mup3_pane_t7_ParamLimits

0x4fe3,	// (0x00012831) main_mup3_pane_t7

0xcc2c,	// (0x0001a47a) main_mp4_pane_g6_ParamLimits

0xcc2c,	// (0x0001a47a) main_mp4_pane_g6

0xce54,	// (0x0001a6a2) main_image3_pane_t4_ParamLimits

0xce54,	// (0x0001a6a2) main_image3_pane_t4

0x86f6,	// (0x00015f44) popup_navstr_preview_pane_ParamLimits

0x86f6,	// (0x00015f44) popup_navstr_preview_pane

0x870a,	// (0x00015f58) scroll_navstr_pane_ParamLimits

0x870a,	// (0x00015f58) scroll_navstr_pane

0x9382,	// (0x00016bd0) bg_popup_preview_window_pane_cp04

0xe7b3,	// (0x0001c001) popup_navstr_preview_pane_t1

0x871e,	// (0x00015f6c) scroll_navstr_pane_g1_ParamLimits

0x871e,	// (0x00015f6c) scroll_navstr_pane_g1

0x8732,	// (0x00015f80) scroll_navstr_pane_t1_ParamLimits

0x8732,	// (0x00015f80) scroll_navstr_pane_t1

0xe758,	// (0x0001bfa6) bg_button_pane_cp014

0xe758,	// (0x0001bfa6) bg_button_pane_cp030

0x7f62,	// (0x000157b0) list_double_fisheye_pane_g4_ParamLimits

0x7f62,	// (0x000157b0) list_double_fisheye_pane_g4

0x7f6e,	// (0x000157bc) list_double_fisheye_pane_g5_ParamLimits

0x7f6e,	// (0x000157bc) list_double_fisheye_pane_g5

0xe6c7,	// (0x0001bf15) sp_fs_scroll_pane_cp03

0xe44f,	// (0x0001bc9d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe45b,	// (0x0001bca9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d548) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe467,	// (0x0001bcb5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x860e,	// (0x00015e5c) sp_fs_scroll_pane_cp02

0x9cd7,	// (0x00017525) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9cd7,	// (0x00017525) popup_sp_fs_calendar_preview_list_single_pane

0x9382,	// (0x00016bd0) main_cam6_pano_pane

0x93f2,	// (0x00016c40) main_mup3_pane_ParamLimits

0x9382,	// (0x00016bd0) main_phacti_pane

0x7b53,	// (0x000153a1) bg_button_pane_cp11

0x7b6d,	// (0x000153bb) main_mobtv_info_pane_g2_ParamLimits

0x7b6d,	// (0x000153bb) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d4a8) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d4a8) main_mobtv_info_pane_g

0x7d48,	// (0x00015596) sc_clock_pane_t5_ParamLimits

0x7d48,	// (0x00015596) sc_clock_pane_t5

0x7dcd,	// (0x0001561b) main_radioblah_pane_g1_ParamLimits

0xe25c,	// (0x0001baaa) main_radioblah_pane_t3_ParamLimits

0xe25c,	// (0x0001baaa) main_radioblah_pane_t3

0xe274,	// (0x0001bac2) main_radioblah_pane_t4_ParamLimits

0xe274,	// (0x0001bac2) main_radioblah_pane_t4

0x7df5,	// (0x00015643) main_radioblah_text_pane_ParamLimits

0x7df5,	// (0x00015643) main_radioblah_text_pane

0x7e07,	// (0x00015655) main_radioblah_info_pane_g1_ParamLimits

0x7ea0,	// (0x000156ee) main_radioblah_info_pane_t4_ParamLimits

0x7ea0,	// (0x000156ee) main_radioblah_info_pane_t4

0x93f2,	// (0x00016c40) main_sp_fs_calendar_pane

0x8749,	// (0x00015f97) main_phacti_pane_g1

0x8751,	// (0x00015f9f) phacti_note_pane_ParamLimits

0x8751,	// (0x00015f9f) phacti_note_pane

0xe7ca,	// (0x0001c018) phacti_term_pane_ParamLimits

0xe7ca,	// (0x0001c018) phacti_term_pane

0xe7df,	// (0x0001c02d) phacti_note_pane_t1_ParamLimits

0xe7df,	// (0x0001c02d) phacti_note_pane_t1

0xe7f6,	// (0x0001c044) phacti_term_pane_g1

0xe7fe,	// (0x0001c04c) phacti_term_pane_t1_ParamLimits

0xe7fe,	// (0x0001c04c) phacti_term_pane_t1

0xe828,	// (0x0001c076) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9e34,	// (0x00017682) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001d60d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe830,	// (0x0001c07e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe830,	// (0x0001c07e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe845,	// (0x0001c093) aid_popup_sp_fs_bg_corner_pane

0xc2bd,	// (0x00019b0b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9382,	// (0x00016bd0) popup_sp_fs_calendar_preview_bg_pane

0xe84d,	// (0x0001c09b) popup_sp_fs_calendar_preview_list_pane

0x93f2,	// (0x00016c40) bg_main_sp_fs_cale_pane_ParamLimits

0x93f2,	// (0x00016c40) bg_main_sp_fs_cale_pane

0xe85e,	// (0x0001c0ac) listscroll_cale_mrui_pane_ParamLimits

0xe85e,	// (0x0001c0ac) listscroll_cale_mrui_pane

0xe872,	// (0x0001c0c0) listscroll_sp_fs_schedule_track_pane

0xe87b,	// (0x0001c0c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe87b,	// (0x0001c0c9) main_sp_fs_ctrlbar_pane_cp01

0xe88c,	// (0x0001c0da) main_sp_fs_ribbon_pane

0xe894,	// (0x0001c0e2) popup_sp_fs_cale_preview_window

0x87a8,	// (0x00015ff6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x87a8,	// (0x00015ff6) list_single_sp_fs_schedule_track_pane

0x93f2,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x93f2,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp03

0x87ba,	// (0x00016008) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87ba,	// (0x00016008) list_single_sp_fs_schedule_track_pane_g1

0x87c6,	// (0x00016014) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87c6,	// (0x00016014) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001d612) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001d612) list_single_sp_fs_schedule_track_pane_g

0x87d2,	// (0x00016020) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87d2,	// (0x00016020) list_single_sp_fs_schedule_track_pane_t1

0x87ec,	// (0x0001603a) sp_fs_schedule_track_pane_ParamLimits

0x87ec,	// (0x0001603a) sp_fs_schedule_track_pane

0xe8a6,	// (0x0001c0f4) sp_fs_schedule_track_pane_g1

0xe8ae,	// (0x0001c0fc) sp_fs_schedule_track_pane_g2

0xe8b6,	// (0x0001c104) sp_fs_schedule_track_pane_g3

0xe8be,	// (0x0001c10c) sp_fs_schedule_track_pane_g4

0xe8c6,	// (0x0001c114) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001d617) sp_fs_schedule_track_pane_g

0xd07d,	// (0x0001a8cb) bg_sp_fs_schedule_viewer_highlight_g1

0xa0d1,	// (0x0001791f) bg_sp_fs_schedule_viewer_highlight_g2

0xd085,	// (0x0001a8d3) bg_sp_fs_schedule_viewer_highlight_g3

0xd08d,	// (0x0001a8db) bg_sp_fs_schedule_viewer_highlight_g4

0xd32a,	// (0x0001ab78) bg_sp_fs_schedule_viewer_highlight_g5

0xd09d,	// (0x0001a8eb) bg_sp_fs_schedule_viewer_highlight_g6

0xd0a5,	// (0x0001a8f3) bg_sp_fs_schedule_viewer_highlight_g7

0xd0ad,	// (0x0001a8fb) bg_sp_fs_schedule_viewer_highlight_g8

0xa0b1,	// (0x000178ff) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001d622) bg_sp_fs_schedule_viewer_highlight_g

0x9382,	// (0x00016bd0) bg_main_sp_fs_ribbon_pane

0x87fd,	// (0x0001604b) main_sp_fs_ribbon_pane_g1

0xe8ce,	// (0x0001c11c) main_sp_fs_ribbon_pane_t1

0x8806,	// (0x00016054) main_sp_fs_ribbon_pane_t2

0xe8dd,	// (0x0001c12b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001d635) main_sp_fs_ribbon_pane_t

0xe8ec,	// (0x0001c13a) main_sp_fs_ribbon_scheduler_pane

0xe8f4,	// (0x0001c142) bg_main_sp_fs_ribbon_pane_g1

0xe8fd,	// (0x0001c14b) bg_main_sp_fs_ribbon_pane_g2

0xe906,	// (0x0001c154) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001d63c) bg_main_sp_fs_ribbon_pane_g

0xe90e,	// (0x0001c15c) main_sp_fs_ribbon_scheduler_pane_g1

0xe917,	// (0x0001c165) main_sp_fs_ribbon_scheduler_pane_g2

0xe920,	// (0x0001c16e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001d643) main_sp_fs_ribbon_scheduler_pane_g

0xe929,	// (0x0001c177) list_cale_mrui_pane

0x8815,	// (0x00016063) sp_fs_scroll_pane_cp07_ParamLimits

0x8815,	// (0x00016063) sp_fs_scroll_pane_cp07

0x8829,	// (0x00016077) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8829,	// (0x00016077) bg_sp_fs_schedule_viewer_highlight

0xe932,	// (0x0001c180) list_single_sp_fs_schedule_track_pane_cp01

0xe93a,	// (0x0001c188) list_sp_fs_schedule_track_pane

0xe942,	// (0x0001c190) sp_fs_scroll_pane_cp06_ParamLimits

0xe942,	// (0x0001c190) sp_fs_scroll_pane_cp06

0xc2bd,	// (0x00019b0b) bgmain_sp_fs_calendar_pane_g1

0x8839,	// (0x00016087) list_single_cale_mrui_pane_ParamLimits

0x8839,	// (0x00016087) list_single_cale_mrui_pane

0xe954,	// (0x0001c1a2) list_single_cale_mrui_row_pane_ParamLimits

0xe954,	// (0x0001c1a2) list_single_cale_mrui_row_pane

0xe961,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe961,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1

0xe999,	// (0x0001c1e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe999,	// (0x0001c1e7) list_single_cale_mrui_row_pane_t1

0x8859,	// (0x000160a7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8859,	// (0x000160a7) list_single_cale_mrui_row_pane_t2

0xe9ab,	// (0x0001c1f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9ab,	// (0x0001c1f9) list_single_cale_mrui_row_pane_t3

0xe9da,	// (0x0001c228) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9da,	// (0x0001c228) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001d64f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001d64f) list_single_cale_mrui_row_pane_t

0x88c1,	// (0x0001610f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x88c1,	// (0x0001610f) list_single_cmail_header_editor_pane_bg_cp01

0x88e7,	// (0x00016135) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88e7,	// (0x00016135) list_single_cmail_header_editor_pane_bg_cp02

0x8907,	// (0x00016155) main_radioblah_text_pane_t1_ParamLimits

0x8907,	// (0x00016155) main_radioblah_text_pane_t1

0xea09,	// (0x0001c257) cam6_indi_pane_cp01

0xea11,	// (0x0001c25f) cam6_mode_pane_cp01

0xea19,	// (0x0001c267) cam6_pano_pane

0xea22,	// (0x0001c270) cam6_zoom_pane_cp01

0xea2a,	// (0x0001c278) cam6_pano_image_pane

0xea35,	// (0x0001c283) cam6_pano_pane_g1

0xdfce,	// (0x0001b81c) cam6_pano_pane_g2

0xea3e,	// (0x0001c28c) cam6_pano_pane_g3

0xea47,	// (0x0001c295) cam6_pano_pane_g4

0xc865,	// (0x0001a0b3) cam6_pano_pane_g5

0xea50,	// (0x0001c29e) cam6_pano_pane_g6

0xe035,	// (0x0001b883) cam6_pano_pane_g7

0xea5a,	// (0x0001c2a8) cam6_pano_pane_g8

0xea63,	// (0x0001c2b1) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001d658) cam6_pano_pane_g

0x9382,	// (0x00016bd0) main_browser_tag_pane

0xe7ab,	// (0x0001bff9) grid_navstr_albumart_pane

0xea6e,	// (0x0001c2bc) cell_navstr_albumart_pane_ParamLimits

0xea6e,	// (0x0001c2bc) cell_navstr_albumart_pane

0xea91,	// (0x0001c2df) cell_navstr_albumart_pane_g1

0xbbd4,	// (0x00019422) cell_navstr_albumart_pane_g2

0xbbe4,	// (0x00019432) cell_navstr_albumart_pane_g3

0xbbdc,	// (0x0001942a) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001d66b) cell_navstr_albumart_pane_g

0x8921,	// (0x0001616f) bt_list_pane_ParamLimits

0x8921,	// (0x0001616f) bt_list_pane

0x8935,	// (0x00016183) bt_list_pane_t1

0x8944,	// (0x00016192) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001d674) bt_list_pane_t

0x9382,	// (0x00016bd0) main_cale_prevew_pane

0x8953,	// (0x000161a1) popup_cale_preview_window_ParamLimits

0x8953,	// (0x000161a1) popup_cale_preview_window

0x93f2,	// (0x00016c40) bg_popup_preview_window_pane_cp05_ParamLimits

0x93f2,	// (0x00016c40) bg_popup_preview_window_pane_cp05

0xeaa2,	// (0x0001c2f0) list_cale_preview_pane_ParamLimits

0xeaa2,	// (0x0001c2f0) list_cale_preview_pane

0x896e,	// (0x000161bc) list_double_cale_preview_pane_ParamLimits

0x896e,	// (0x000161bc) list_double_cale_preview_pane

0x8980,	// (0x000161ce) list_single_cale_preview_pane_ParamLimits

0x8980,	// (0x000161ce) list_single_cale_preview_pane

0x8996,	// (0x000161e4) list_single_cale_preview_pane_g1

0x899e,	// (0x000161ec) list_single_cale_preview_pane_t1_ParamLimits

0x899e,	// (0x000161ec) list_single_cale_preview_pane_t1

0x89b3,	// (0x00016201) list_double_cale_preview_pane_g1

0x89bb,	// (0x00016209) list_double_cale_preview_pane_t1_ParamLimits

0x89bb,	// (0x00016209) list_double_cale_preview_pane_t1

0x89d0,	// (0x0001621e) list_double_cale_preview_pane_t2_ParamLimits

0x89d0,	// (0x0001621e) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001d679) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001d679) list_double_cale_preview_pane_t

0x9382,	// (0x00016bd0) main_ezdial_pane

0x93f2,	// (0x00016c40) main_sp_fs_email_pane_ParamLimits

0x8100,	// (0x0001594e) cmail_ddmenu_btn01_pane_ParamLimits

0x8100,	// (0x0001594e) cmail_ddmenu_btn01_pane

0x8113,	// (0x00015961) cmail_ddmenu_btn02_pane_ParamLimits

0x8113,	// (0x00015961) cmail_ddmenu_btn02_pane

0x8136,	// (0x00015984) cmail_ddmenu_btn03_pane_ParamLimits

0x8136,	// (0x00015984) cmail_ddmenu_btn03_pane

0x815c,	// (0x000159aa) main_sp_fs_ctrlbar_pane_ParamLimits

0x8180,	// (0x000159ce) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2cf,	// (0x0001ab1d) list_cmail_body_pane_ParamLimits

0xe6d7,	// (0x0001bf25) bg_button_pane_cp12

0xe6ec,	// (0x0001bf3a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6ec,	// (0x0001bf3a) list_single_cmail_header_detail_pane_g3

0x867f,	// (0x00015ecd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x867f,	// (0x00015ecd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001d5fe) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001d5fe) list_single_cmail_header_detail_pane_t

0xe813,	// (0x0001c061) phacti_term_pane_t2_ParamLimits

0xe813,	// (0x0001c061) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001d608) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001d608) phacti_term_pane_t

0xeaae,	// (0x0001c2fc) aid_size_list_single_double

0x89e8,	// (0x00016236) popup_ezdial_listscroll_window

0x8a04,	// (0x00016252) popup_number_entry_window_cp01

0xa8fa,	// (0x00018148) bg_popup_call_pane_cp09

0xeaba,	// (0x0001c308) ezdial_list_pane

0xeac2,	// (0x0001c310) scroll_pane_cp23

0xbdb7,	// (0x00019605) bg_button_pane_cp028_ParamLimits

0xbdb7,	// (0x00019605) bg_button_pane_cp028

0x8a12,	// (0x00016260) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a12,	// (0x00016260) cmail_ddmenu_btn01_pane_g1

0x8a1e,	// (0x0001626c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a1e,	// (0x0001626c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001d67e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001d67e) cmail_ddmenu_btn01_pane_g

0xeaca,	// (0x0001c318) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaca,	// (0x0001c318) cmail_ddmenu_btn01_pane_t1

0xbdb7,	// (0x00019605) bg_button_pane_cp029_ParamLimits

0xbdb7,	// (0x00019605) bg_button_pane_cp029

0x8a2a,	// (0x00016278) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a2a,	// (0x00016278) cmail_ddmenu_btn02_pane_g1

0x8a42,	// (0x00016290) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a42,	// (0x00016290) cmail_ddmenu_btn02_pane_t1

0x93f2,	// (0x00016c40) bg_button_pane_cp031_ParamLimits

0x93f2,	// (0x00016c40) bg_button_pane_cp031

0x8a2a,	// (0x00016278) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a2a,	// (0x00016278) cmail_ddmenu_btn03_pane_g1

0x8a42,	// (0x00016290) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a42,	// (0x00016290) cmail_ddmenu_btn03_pane_t1

0x5b16,	// (0x00013364) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b30,	// (0x0001337e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b30,	// (0x0001337e) cell_dialer2_keypad_pane_t1_copy1

0x79d5,	// (0x00015223) ncimui_group_button_pane

0x93f2,	// (0x00016c40) main_sp_fs_calendar_pane_ParamLimits

0x8618,	// (0x00015e66) list_single_cmail_header_caption_pane_ParamLimits

0xe855,	// (0x0001c0a3) aid_recal_txt_sm_pane

0x9382,	// (0x00016bd0) mian_recal_day_pane

0xe894,	// (0x0001c0e2) popup_sp_fs_cale_preview_window_ParamLimits

0x9382,	// (0x00016bd0) list_recal_day_pane

0xeb01,	// (0x0001c34f) list_single_recal_day_pane_ParamLimits

0xeb01,	// (0x0001c34f) list_single_recal_day_pane

0xeb13,	// (0x0001c361) list_single_recal_day_pane_g1_ParamLimits

0xeb13,	// (0x0001c361) list_single_recal_day_pane_g1

0xeb1f,	// (0x0001c36d) list_single_recal_day_pane_g2_ParamLimits

0xeb1f,	// (0x0001c36d) list_single_recal_day_pane_g2

0xeb2e,	// (0x0001c37c) list_single_recal_day_pane_g3_ParamLimits

0xeb2e,	// (0x0001c37c) list_single_recal_day_pane_g3

0x8a66,	// (0x000162b4) list_single_recal_day_pane_g4_ParamLimits

0x8a66,	// (0x000162b4) list_single_recal_day_pane_g4

0xeb3a,	// (0x0001c388) list_single_recal_day_pane_g5_ParamLimits

0xeb3a,	// (0x0001c388) list_single_recal_day_pane_g5

0xeb49,	// (0x0001c397) list_single_recal_day_pane_g6_ParamLimits

0xeb49,	// (0x0001c397) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001d68d) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001d68d) list_single_recal_day_pane_g

0xeb55,	// (0x0001c3a3) list_single_recal_day_pane_t1

0xeb63,	// (0x0001c3b1) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001d69a) list_single_recal_day_pane_t

0x8a79,	// (0x000162c7) ncimui_query_button_pane_ParamLimits

0x8a79,	// (0x000162c7) ncimui_query_button_pane

0x8a89,	// (0x000162d7) ncimui_query_button_pane_t1_ParamLimits

0x8a89,	// (0x000162d7) ncimui_query_button_pane_t1

0xeb71,	// (0x0001c3bf) ncimui_query_button_pane_t2_ParamLimits

0xeb71,	// (0x0001c3bf) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001d69f) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001d69f) ncimui_query_button_pane_t

0x8a9c,	// (0x000162ea) query_button_pane_ParamLimits

0x8a9c,	// (0x000162ea) query_button_pane

0x9382,	// (0x00016bd0) bg_button_pane_cp0028

0xeb84,	// (0x0001c3d2) query_button_pane_t1

0x3c24,	// (0x00011472) main_tport_pane_ParamLimits

0x8505,	// (0x00015d53) bg_popup_window_pane_cp01_ParamLimits

0x8505,	// (0x00015d53) bg_popup_window_pane_cp01

0x851f,	// (0x00015d6d) heading_pane_cp08_ParamLimits

0x851f,	// (0x00015d6d) heading_pane_cp08

0x8533,	// (0x00015d81) heading_pane_cp07_ParamLimits

0x8533,	// (0x00015d81) heading_pane_cp07

0xe699,	// (0x0001bee7) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001d5eb) cell_tport_appsw_pane_g

0xaa7b,	// (0x000182c9) input_candi_list_open_g1

0xa2d0,	// (0x00017b1e) list_cale_time_pane_g6_ParamLimits

0xa2d0,	// (0x00017b1e) list_cale_time_pane_g6

0x49f1,	// (0x0001223f) aid_size_touch_calib_1_ParamLimits

0x49f1,	// (0x0001223f) aid_size_touch_calib_1

0x49fd,	// (0x0001224b) aid_size_touch_calib_2_ParamLimits

0x49fd,	// (0x0001224b) aid_size_touch_calib_2

0x4a13,	// (0x00012261) aid_size_touch_calib_3_ParamLimits

0x4a13,	// (0x00012261) aid_size_touch_calib_3

0x4a31,	// (0x0001227f) aid_size_touch_calib_4_ParamLimits

0x4a31,	// (0x0001227f) aid_size_touch_calib_4

0x4a47,	// (0x00012295) main_touch_calib_button_group_pane_ParamLimits

0x4a47,	// (0x00012295) main_touch_calib_button_group_pane

0x4a5f,	// (0x000122ad) main_touch_calib_pane_g1_ParamLimits

0x4a6b,	// (0x000122b9) main_touch_calib_pane_g2_ParamLimits

0x4a77,	// (0x000122c5) main_touch_calib_pane_g3_ParamLimits

0x4a83,	// (0x000122d1) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001cfc3) main_touch_calib_pane_g_ParamLimits

0x4a8f,	// (0x000122dd) main_touch_calib_pane_t1_ParamLimits

0x4aa9,	// (0x000122f7) main_touch_calib_pane_t2_ParamLimits

0x4ac3,	// (0x00012311) main_touch_calib_pane_t3_ParamLimits

0x4ad7,	// (0x00012325) main_touch_calib_pane_t4_ParamLimits

0x4aeb,	// (0x00012339) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001cfcc) main_touch_calib_pane_t_ParamLimits

0xc63b,	// (0x00019e89) list_single_fp_cale_pane_g3_ParamLimits

0xc63b,	// (0x00019e89) list_single_fp_cale_pane_g3

0x93f2,	// (0x00016c40) bg_button_pane_cp012_ParamLimits

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp03_ParamLimits

0x6bb6,	// (0x00014404) cell_vitu2_function_top_pane_g1_ParamLimits

0x93f2,	// (0x00016c40) bg_vkb2_func_pane_cp04_ParamLimits

0x7975,	// (0x000151c3) main_ncimui_button_group_pane_ParamLimits

0x7975,	// (0x000151c3) main_ncimui_button_group_pane

0x79c3,	// (0x00015211) main_ncimui_pane_t3_ParamLimits

0x79c3,	// (0x00015211) main_ncimui_pane_t3

0xe7c1,	// (0x0001c00f) phacti_button_group_pane

0xeaae,	// (0x0001c2fc) aid_size_list_single_double_ParamLimits

0x89e8,	// (0x00016236) popup_ezdial_listscroll_window_ParamLimits

0x8a04,	// (0x00016252) popup_number_entry_window_cp01_ParamLimits

0x8aaf,	// (0x000162fd) phacti_button_pane_ParamLimits

0x8aaf,	// (0x000162fd) phacti_button_pane

0x9382,	// (0x00016bd0) bg_button_pane_cp14

0xeb92,	// (0x0001c3e0) phacti_button_pane_t1

0x8ac0,	// (0x0001630e) main_touch_calib_button_pane_ParamLimits

0x8ac0,	// (0x0001630e) main_touch_calib_button_pane

0x9b67,	// (0x000173b5) bg_button_pane_cp18_ParamLimits

0x9b67,	// (0x000173b5) bg_button_pane_cp18

0xeba0,	// (0x0001c3ee) main_touch_calib_button_pane_t1_ParamLimits

0xeba0,	// (0x0001c3ee) main_touch_calib_button_pane_t1

0xebb6,	// (0x0001c404) main_touch_calib_button_pane_t2_ParamLimits

0xebb6,	// (0x0001c404) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001d6a4) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001d6a4) main_touch_calib_button_pane_t

0x9382,	// (0x00016bd0) cell_ncimui_button_pane

0x9382,	// (0x00016bd0) bg_button_pane_cp032

0xebd4,	// (0x0001c422) cell_ncimui_button_pane_t1

0xce34,	// (0x0001a682) image3_infobar_pane_ParamLimits

0xce34,	// (0x0001a682) image3_infobar_pane

0x7d74,	// (0x000155c2) fs_bigclock_status_pane_ParamLimits

0x7d74,	// (0x000155c2) fs_bigclock_status_pane

0x7d81,	// (0x000155cf) main_fs_bigclock_clock_pane_ParamLimits

0x7d81,	// (0x000155cf) main_fs_bigclock_clock_pane

0x7d94,	// (0x000155e2) main_fs_bigclock_indi_pane_ParamLimits

0x7d94,	// (0x000155e2) main_fs_bigclock_indi_pane

0x7dac,	// (0x000155fa) main_fs_bigclock_swipe_pane_ParamLimits

0x7dac,	// (0x000155fa) main_fs_bigclock_swipe_pane

0x9382,	// (0x00016bd0) main_fs_clock_dumped_data

0xe0e3,	// (0x0001b931) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0e3,	// (0x0001b931) list_single_fs_bigclock_indicator_pane_g1

0xe0ff,	// (0x0001b94d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0ff,	// (0x0001b94d) list_single_fs_bigclock_indicator_pane_g2

0xe119,	// (0x0001b967) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe119,	// (0x0001b967) list_single_fs_bigclock_indicator_pane_g3

0xe133,	// (0x0001b981) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe133,	// (0x0001b981) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d4dc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d4dc) list_single_fs_bigclock_indicator_pane_g

0xe159,	// (0x0001b9a7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe159,	// (0x0001b9a7) list_single_fs_bigclock_indicator_pane_t1

0xe181,	// (0x0001b9cf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe181,	// (0x0001b9cf) list_single_fs_bigclock_indicator_pane_t2

0xe1a9,	// (0x0001b9f7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1a9,	// (0x0001b9f7) list_single_fs_bigclock_indicator_pane_t3

0xe1d1,	// (0x0001ba1f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1d1,	// (0x0001ba1f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d4e7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d4e7) list_single_fs_bigclock_indicator_pane_t

0xebe2,	// (0x0001c430) image3_infobar_fav_pane_ParamLimits

0xebe2,	// (0x0001c430) image3_infobar_fav_pane

0xebf2,	// (0x0001c440) image3_infobar_loc_pane_ParamLimits

0xebf2,	// (0x0001c440) image3_infobar_loc_pane

0xec06,	// (0x0001c454) image3_infobar_time_pane_ParamLimits

0xec06,	// (0x0001c454) image3_infobar_time_pane

0xc2bd,	// (0x00019b0b) image3_infobar_time_pane_g1

0xec16,	// (0x0001c464) image3_infobar_time_pane_t1

0xc2bd,	// (0x00019b0b) image3_infobar_loc_pane_g1

0xec24,	// (0x0001c472) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001d6a9) image3_infobar_loc_pane_g

0xec2c,	// (0x0001c47a) image3_infobar_loc_pane_t1

0xc2bd,	// (0x00019b0b) image3_infobar_fav_pane_g1

0xec3a,	// (0x0001c488) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001d6ae) image3_infobar_fav_pane_g

0xec42,	// (0x0001c490) fs_bigclock_status_battery_pane

0xec4b,	// (0x0001c499) fs_bigclock_status_signal_pane

0xec54,	// (0x0001c4a2) fs_bigclock_status_title_pane

0xec5d,	// (0x0001c4ab) fs_bigclock_status_signal_pane_g1

0xec66,	// (0x0001c4b4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001d6b3) fs_bigclock_status_signal_pane_g

0xec6e,	// (0x0001c4bc) fs_bigclock_status_battery_pane_g1

0xec77,	// (0x0001c4c5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001d6b8) fs_bigclock_status_battery_pane_g

0xec7f,	// (0x0001c4cd) fs_bigclock_status_title_pane_t1

0xc2bd,	// (0x00019b0b) main_fs_bigclock_clock_pane_g1

0xec8d,	// (0x0001c4db) main_fs_bigclock_clock_pane_g2

0xec8d,	// (0x0001c4db) main_fs_bigclock_clock_pane_g3

0xec8d,	// (0x0001c4db) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001d6bd) main_fs_bigclock_clock_pane_g

0xec95,	// (0x0001c4e3) main_fs_bigclock_clock_pane_t1

0xeca3,	// (0x0001c4f1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001d6c6) main_fs_bigclock_clock_pane_t

0xecb2,	// (0x0001c500) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecb2,	// (0x0001c500) list_single_fs_bigclock_indicator_pane

0x8ad5,	// (0x00016323) list_single_fs_bigclock_pane_ParamLimits

0x8ad5,	// (0x00016323) list_single_fs_bigclock_pane

0xeccc,	// (0x0001c51a) main_fs_bigclock_indicator_pane_t1

0xecdb,	// (0x0001c529) list_single_fs_bigclock_pane_g1

0xece3,	// (0x0001c531) list_single_fs_bigclock_pane_t1

0xc2bd,	// (0x00019b0b) main_fs_bigclock_swipe_pane_g1

0xed21,	// (0x0001c56f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001d6d7) main_fs_bigclock_swipe_pane_g

0xed29,	// (0x0001c577) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed29,	// (0x0001c577) main_fs_bigclock_swipe_pane_t1

0x2a6b,	// (0x000102b9) call_type_pane_ParamLimits

0x9382,	// (0x00016bd0) main_btmg_pane

0xe98d,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe98d,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001d64a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001d64a) list_single_cale_mrui_row_pane_g

0xeae8,	// (0x0001c336) list_recal_vselct_arw_lo_pane

0xeaf0,	// (0x0001c33e) list_recal_vselct_arw_up_pane

0xeaf8,	// (0x0001c346) list_recal_vselct_pane

0xed46,	// (0x0001c594) btmg_button_pane

0x8b3a,	// (0x00016388) main_btmg_pane_g1

0x9382,	// (0x00016bd0) bg_button_pane_cp044

0xed50,	// (0x0001c59e) btmg_button_pane_t1

0xbdaf,	// (0x000195fd) aid_listscroll_gen

0x93f2,	// (0x00016c40) main_cntbar_detail_pane

0xe6b7,	// (0x0001bf05) list_cmail_folder_pane

0xe6c7,	// (0x0001bf15) sp_fs_scroll_pane_cp03_ParamLimits

0x8618,	// (0x00015e66) list_single_fs_dyc_pane_cp01_ParamLimits

0x8618,	// (0x00015e66) list_single_fs_dyc_pane_cp01

0xed5e,	// (0x0001c5ac) aid_size_cmail_indent

0xed67,	// (0x0001c5b5) list_single_dyc_row_pane_cp01

0x8b70,	// (0x000163be) cntbar_detail_list_pane_ParamLimits

0x8b70,	// (0x000163be) cntbar_detail_list_pane

0x8bbc,	// (0x0001640a) main_cntbar_detail_cont_pane_ParamLimits

0x8bbc,	// (0x0001640a) main_cntbar_detail_cont_pane

0x2a05,	// (0x00010253) scroll_pane_cp032_ParamLimits

0x2a05,	// (0x00010253) scroll_pane_cp032

0x8bd0,	// (0x0001641e) cntbar_detail_list_event_pane_ParamLimits

0x8bd0,	// (0x0001641e) cntbar_detail_list_event_pane

0x8b80,	// (0x000163ce) cntbar_detail_list_shct_pane

0xa11f,	// (0x0001796d) aid_list_gen

0xed70,	// (0x0001c5be) aid_scroll

0xed79,	// (0x0001c5c7) aid_size_touch_scroll_bar

0x8be0,	// (0x0001642e) aid_list_double

0xed82,	// (0x0001c5d0) aid_list_single

0x8be0,	// (0x0001642e) aid_list_single_lg

0xed8b,	// (0x0001c5d9) aid_list_z_g_a_sm

0xed93,	// (0x0001c5e1) aid_list_z_g_d

0xed9b,	// (0x0001c5e9) aid_txt_z_prm

0x8be9,	// (0x00016437) aid_txt_z_prm_cp01

0x8bf7,	// (0x00016445) aid_txt_z_sec

0x8c05,	// (0x00016453) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c05,	// (0x00016453) main_cntbar_detail_cont_pane_g1

0x8c19,	// (0x00016467) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c19,	// (0x00016467) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001d6dc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001d6dc) main_cntbar_detail_cont_pane_g

0xeda9,	// (0x0001c5f7) main_cntbar_detail_cont_pane_t1

0xedb7,	// (0x0001c605) main_cntbar_detail_cont_pane_t2

0xedc5,	// (0x0001c613) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001d6e1) main_cntbar_detail_cont_pane_t

0x8c29,	// (0x00016477) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c29,	// (0x00016477) cell_cntbar_detail_list_shct_pane

0xedd3,	// (0x0001c621) cntbar_detail_list_shct_pane_g1

0xeddc,	// (0x0001c62a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001d6e8) cntbar_detail_list_shct_pane_g

0x8c3d,	// (0x0001648b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c3d,	// (0x0001648b) cntbar_detail_list_event_pane_g1

0x8c49,	// (0x00016497) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c49,	// (0x00016497) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001d6ed) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001d6ed) cntbar_detail_list_event_pane_g

0x8cb5,	// (0x00016503) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cb5,	// (0x00016503) cntbar_detail_list_event_pane_t1

0x8cca,	// (0x00016518) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cca,	// (0x00016518) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001d6fa) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001d6fa) cntbar_detail_list_event_pane_t

0xc2bd,	// (0x00019b0b) cell_cntbar_detail_list_shct_pane_g1

0x2dcd,	// (0x0001061b) navi_pane_mv_g3

0x93f2,	// (0x00016c40) main_cntbar_detail_pane_ParamLimits

0x9382,	// (0x00016bd0) main_notif_wgt_pane

0xcbc6,	// (0x0001a414) aid_tch_main_mp4_pane_g4

0xcdc8,	// (0x0001a616) popup_slider_window_cp02

0xeadf,	// (0x0001c32d) list_recal_day_event_pane

0x8b44,	// (0x00016392) cntbar_detail_btn_pane_ParamLimits

0x8b44,	// (0x00016392) cntbar_detail_btn_pane

0x8b5a,	// (0x000163a8) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b5a,	// (0x000163a8) cntbar_detail_btn_pane_cp01

0x8b80,	// (0x000163ce) cntbar_detail_list_shct_pane_ParamLimits

0x8b90,	// (0x000163de) cntbar_detail_pane_g1_ParamLimits

0x8b90,	// (0x000163de) cntbar_detail_pane_g1

0x8ba0,	// (0x000163ee) cntbar_detail_pane_t1_ParamLimits

0x8ba0,	// (0x000163ee) cntbar_detail_pane_t1

0x8c55,	// (0x000164a3) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c55,	// (0x000164a3) cntbar_detail_list_event_pane_g3

0x8c6d,	// (0x000164bb) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c6d,	// (0x000164bb) cntbar_detail_list_event_pane_g4

0x8c85,	// (0x000164d3) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c85,	// (0x000164d3) cntbar_detail_list_event_pane_g5

0x8c9d,	// (0x000164eb) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c9d,	// (0x000164eb) cntbar_detail_list_event_pane_g6

0x8cdf,	// (0x0001652d) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cdf,	// (0x0001652d) cntbar_detail_list_event_pane_t3

0x8cf1,	// (0x0001653f) popup_notif_wgt_window_ParamLimits

0x8cf1,	// (0x0001653f) popup_notif_wgt_window

0x8d0a,	// (0x00016558) popup_submenu_window_cp01_ParamLimits

0x8d0a,	// (0x00016558) popup_submenu_window_cp01

0xa8fa,	// (0x00018148) bg_popup_window_pane_cp10

0xede5,	// (0x0001c633) listscroll_notif_wgt_pane

0xedef,	// (0x0001c63d) list_notif_wgt_window

0xedf8,	// (0x0001c646) scroll_pane_cp033

0xee01,	// (0x0001c64f) list_notif_wgt_row_pane_ParamLimits

0xee01,	// (0x0001c64f) list_notif_wgt_row_pane

0xee13,	// (0x0001c661) aid_size_list_notif_wgt_del

0xee1c,	// (0x0001c66a) list_notif_wgt_row_pane_g1

0xee24,	// (0x0001c672) list_notif_wgt_row_pane_g2

0xee2c,	// (0x0001c67a) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001d701) list_notif_wgt_row_pane_g

0xee35,	// (0x0001c683) list_notif_wgt_row_pane_t1

0xee43,	// (0x0001c691) list_notif_wgt_row_pane_t2

0xee51,	// (0x0001c69f) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001d708) list_notif_wgt_row_pane_t

0xd36a,	// (0x0001abb8) list_recal_day_event_pane_g1

0xee5f,	// (0x0001c6ad) list_recal_day_event_pane_t1

0x9382,	// (0x00016bd0) bg_button_pane_cp045

0xee6e,	// (0x0001c6bc) cntbar_detail_btn_pane_t1

0xbdb7,	// (0x00019605) main_callh_pane_ParamLimits

0xbdb7,	// (0x00019605) main_callh_pane

0x9382,	// (0x00016bd0) main_coverflow0_pane

0x9382,	// (0x00016bd0) main_wgtman_pane

0x7dba,	// (0x00015608) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7dba,	// (0x00015608) main_fs_bigclock_unlock_btn_pane

0xe691,	// (0x0001bedf) bg_button_pane_cp16

0xe6a1,	// (0x0001beef) cell_tport_appsw_pane_g3

0x8d1c,	// (0x0001656a) cf0_flow_pane_ParamLimits

0x8d1c,	// (0x0001656a) cf0_flow_pane

0xee7c,	// (0x0001c6ca) listscroll_cf0_pane

0xee85,	// (0x0001c6d3) main_cf0_pane_g1

0x8d31,	// (0x0001657f) main_cf0_pane_t1_ParamLimits

0x8d31,	// (0x0001657f) main_cf0_pane_t1

0x8d48,	// (0x00016596) main_cf0_pane_t2_ParamLimits

0x8d48,	// (0x00016596) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001d70f) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001d70f) main_cf0_pane_t

0xee8f,	// (0x0001c6dd) scroll_pane_cp11

0x8d5f,	// (0x000165ad) cf0_flow_pane_g1

0x8d67,	// (0x000165b5) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001d714) cf0_flow_pane_g

0x8d6f,	// (0x000165bd) cf0_flow_pane_t1

0x9382,	// (0x00016bd0) main_call6_pane

0x9382,	// (0x00016bd0) main_calllock_pane

0x8d7d,	// (0x000165cb) call6_btn_grp_pane_ParamLimits

0x8d7d,	// (0x000165cb) call6_btn_grp_pane

0x8d97,	// (0x000165e5) call6_pane_g1_ParamLimits

0x8d97,	// (0x000165e5) call6_pane_g1

0x8dac,	// (0x000165fa) popup_call6_1st_window_ParamLimits

0x8dac,	// (0x000165fa) popup_call6_1st_window

0x8dbd,	// (0x0001660b) popup_call6_2nd_window_ParamLimits

0x8dbd,	// (0x0001660b) popup_call6_2nd_window

0x8dce,	// (0x0001661c) cell_call6_btn_pane_ParamLimits

0x8dce,	// (0x0001661c) cell_call6_btn_pane

0xa8fa,	// (0x00018148) bg_popup_call2_in_pane_cp03

0xee9a,	// (0x0001c6e8) popup_call6_1st_window_g1

0xeea2,	// (0x0001c6f0) popup_call6_1st_window_g2

0xeeaa,	// (0x0001c6f8) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001d719) popup_call6_1st_window_g

0xeeb2,	// (0x0001c700) popup_call6_1st_window_t1

0xeec1,	// (0x0001c70f) popup_call6_1st_window_t2

0xeed1,	// (0x0001c71f) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001d720) popup_call6_1st_window_t

0xa8fa,	// (0x00018148) bg_popup_call2_in_pane_cp04

0xee9a,	// (0x0001c6e8) popup_call6_2nd_window_g1

0xeea2,	// (0x0001c6f0) popup_call6_2nd_window_g2

0xeeaa,	// (0x0001c6f8) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001d719) popup_call6_2nd_window_g

0xeeb2,	// (0x0001c700) popup_call6_2nd_window_t1

0x9382,	// (0x00016bd0) bg_button_pane_cp15

0xeee1,	// (0x0001c72f) cell_call6_btn_pane_g1

0xeeea,	// (0x0001c738) cell_call6_btn_pane_t1

0x8de2,	// (0x00016630) listscroll_wgtman_pane_ParamLimits

0x8de2,	// (0x00016630) listscroll_wgtman_pane

0x8e05,	// (0x00016653) wgtman_btn_pane_ParamLimits

0x8e05,	// (0x00016653) wgtman_btn_pane

0xa7b1,	// (0x00017fff) aid_scroll_copy1

0xeef9,	// (0x0001c747) list_wgtman_pane

0x8e48,	// (0x00016696) wgtman_btn_pane_g1_ParamLimits

0x8e48,	// (0x00016696) wgtman_btn_pane_g1

0x8e74,	// (0x000166c2) wgtman_btn_pane_t1_ParamLimits

0x8e74,	// (0x000166c2) wgtman_btn_pane_t1

0xef03,	// (0x0001c751) wgtman_btn_pane_t2_ParamLimits

0xef03,	// (0x0001c751) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001d727) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001d727) wgtman_btn_pane_t

0x8eb1,	// (0x000166ff) listrow_wgtman_pane_ParamLimits

0x8eb1,	// (0x000166ff) listrow_wgtman_pane

0x8ec3,	// (0x00016711) listrow_wgtman_pane_g1

0x8ecc,	// (0x0001671a) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001d72c) listrow_wgtman_pane_g

0x8ed6,	// (0x00016724) listrow_wgtman_pane_t1

0x8ee4,	// (0x00016732) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001d731) listrow_wgtman_pane_t

0x8ef2,	// (0x00016740) wait_bar_pane_cp09

0xef1a,	// (0x0001c768) main_calllock_btn_pane

0xef24,	// (0x0001c772) main_calllock_pane_g1

0x9382,	// (0x00016bd0) bg_button_pane_cp17

0xef30,	// (0x0001c77e) main_calllock_btn_pane_g1

0xef39,	// (0x0001c787) main_calllock_btn_pane_t1

0x9382,	// (0x00016bd0) main_dialer3_pane

0x9382,	// (0x00016bd0) main_fmrd2_pane

0xc2bd,	// (0x00019b0b) main_fs_bigclock_unlock_btn_pane_g1

0xef50,	// (0x0001c79e) main_fs_bigclock_unlock_btn_pane_t1

0x8efa,	// (0x00016748) area_fmrd2_info_pane_ParamLimits

0x8efa,	// (0x00016748) area_fmrd2_info_pane

0x8f0b,	// (0x00016759) area_fmrd2_visual_pane_ParamLimits

0x8f0b,	// (0x00016759) area_fmrd2_visual_pane

0x8f19,	// (0x00016767) fmrd2_indi_pane_ParamLimits

0x8f19,	// (0x00016767) fmrd2_indi_pane

0x8f26,	// (0x00016774) area_fmrd2_visual_pane_g1

0x8f2e,	// (0x0001677c) area_fmrd2_visual_pane_t1

0x8f3e,	// (0x0001678c) area_fmrd2_visual_pane_t2

0x8f4e,	// (0x0001679c) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001d73b) area_fmrd2_visual_pane_t

0x8f5e,	// (0x000167ac) area_fmrd2_info_pane_g1

0x8f66,	// (0x000167b4) area_fmrd2_info_pane_t1

0x8f76,	// (0x000167c4) area_fmrd2_info_pane_t2

0x8f86,	// (0x000167d4) area_fmrd2_info_pane_t3

0x8f96,	// (0x000167e4) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001d742) area_fmrd2_info_pane_t

0x8fa4,	// (0x000167f2) fmrd2_indi_pane_t1

0x8fb4,	// (0x00016802) fmrd2_indi_pane_t2

0x8fc4,	// (0x00016812) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001d74b) fmrd2_indi_pane_t

0xe142,	// (0x0001b990) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe142,	// (0x0001b990) list_single_fs_bigclock_indicator_pane_g5

0xe1e6,	// (0x0001ba34) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1e6,	// (0x0001ba34) list_single_fs_bigclock_indicator_pane_t5

0x8765,	// (0x00015fb3) aid_cell_bcale_month_pane_ParamLimits

0x8765,	// (0x00015fb3) aid_cell_bcale_month_pane

0x8777,	// (0x00015fc5) bcale_month_pane_ParamLimits

0x8777,	// (0x00015fc5) bcale_month_pane

0x878f,	// (0x00015fdd) bcale_preview_pane_ParamLimits

0x878f,	// (0x00015fdd) bcale_preview_pane

0xece3,	// (0x0001c531) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfd,	// (0x0001c54b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfd,	// (0x0001c54b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001d6d2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001d6d2) list_single_fs_bigclock_pane_t

0xef48,	// (0x0001c796) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001d736) main_fs_bigclock_unlock_btn_pane_g

0x8fd4,	// (0x00016822) aid_dia3_key_size_ParamLimits

0x8fd4,	// (0x00016822) aid_dia3_key_size

0x8fe3,	// (0x00016831) aid_dia3_listrow_size_ParamLimits

0x8fe3,	// (0x00016831) aid_dia3_listrow_size

0x8ff8,	// (0x00016846) dia3_keypad_fun_pane_ParamLimits

0x8ff8,	// (0x00016846) dia3_keypad_fun_pane

0x9014,	// (0x00016862) dia3_keypad_num_pane_ParamLimits

0x9014,	// (0x00016862) dia3_keypad_num_pane

0x902f,	// (0x0001687d) dia3_listscroll_pane_ParamLimits

0x902f,	// (0x0001687d) dia3_listscroll_pane

0x9042,	// (0x00016890) dia3_numentry_pane_ParamLimits

0x9042,	// (0x00016890) dia3_numentry_pane

0xef5e,	// (0x0001c7ac) dia3_list_pane

0xef69,	// (0x0001c7b7) scroll_pane_cp12

0x9382,	// (0x00016bd0) bg_dia3_numentry_pane

0x9056,	// (0x000168a4) dia3_numentry_pane_t1

0x9065,	// (0x000168b3) cell_dia3_key_num_pane

0x906d,	// (0x000168bb) cell_dia3_key0_fun_pane_ParamLimits

0x906d,	// (0x000168bb) cell_dia3_key0_fun_pane

0x9081,	// (0x000168cf) cell_dia3_key1_fun_pane_ParamLimits

0x9081,	// (0x000168cf) cell_dia3_key1_fun_pane

0x9099,	// (0x000168e7) dia3_listrow_pane

0xde3a,	// (0x0001b688) bg_dia3_numentry_pane_g1

0x9382,	// (0x00016bd0) bg_button_pane_cp21

0xef74,	// (0x0001c7c2) cell_dia3_key_num_pane_t1

0xef82,	// (0x0001c7d0) cell_dia3_key_num_pane_t2

0xef91,	// (0x0001c7df) cell_dia3_key_num_pane_t3

0xefa0,	// (0x0001c7ee) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001d752) cell_dia3_key_num_pane_t

0x9382,	// (0x00016bd0) bg_button_pane_cp19

0x90ab,	// (0x000168f9) cell_dia3_key0_fun_pane_g1

0x9382,	// (0x00016bd0) bg_button_pane_cp20

0x90b3,	// (0x00016901) cell_dia3_key1_fun_pane_g1

0x90bb,	// (0x00016909) area_left_week_number_pane

0x90c4,	// (0x00016912) area_top_day_name_pane

0x90cd,	// (0x0001691b) frame_month_view_pane

0x90d5,	// (0x00016923) grid_month_view_pane

0x90df,	// (0x0001692d) cell_top_day_name_pane_ParamLimits

0x90df,	// (0x0001692d) cell_top_day_name_pane

0x90f5,	// (0x00016943) cell_area_left_week_number_pane_ParamLimits

0x90f5,	// (0x00016943) cell_area_left_week_number_pane

0x9109,	// (0x00016957) cell_month_view_pane_ParamLimits

0x9109,	// (0x00016957) cell_month_view_pane

0xefaf,	// (0x0001c7fd) frm_month_g1

0x9124,	// (0x00016972) frm_month_g2

0x912c,	// (0x0001697a) frm_month_g3

0x9134,	// (0x00016982) frm_month_g4

0x913c,	// (0x0001698a) frm_month_g5

0x9144,	// (0x00016992) frm_month_g6

0x914c,	// (0x0001699a) frm_month_g7

0xefb8,	// (0x0001c806) frm_month_g8

0x9154,	// (0x000169a2) frm_month_g9

0x915d,	// (0x000169ab) frm_month_g10

0x9166,	// (0x000169b4) frm_month_g11

0x916f,	// (0x000169bd) frm_month_g12

0x9178,	// (0x000169c6) frm_month_g13

0x9181,	// (0x000169cf) frm_month_g14

0x918a,	// (0x000169d8) frm_month_g15

0x9193,	// (0x000169e1) frm_month_g16

0x000f,

0xff0d,	// (0x0001d75b) frm_month_g

0x919c,	// (0x000169ea) cell_top_day_name_pane_t1

0x91ab,	// (0x000169f9) cell_area_left_week_number_pane_g1

0x919c,	// (0x000169ea) cell_area_left_week_number_pane_t1

0xc2bd,	// (0x00019b0b) cell_month_view_pane_g1

0x91b3,	// (0x00016a01) cell_month_view_pane_t1

0x9382,	// (0x00016bd0) main_fps_pane

0xe417,	// (0x0001bc65) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe417,	// (0x0001bc65) cmail_ddmenu_btn02_pane_cp1

0xe433,	// (0x0001bc81) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe433,	// (0x0001bc81) cmail_ddmenu_btn02_pane_cp2

0x8a36,	// (0x00016284) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a36,	// (0x00016284) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001d683) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001d683) cmail_ddmenu_btn02_pane_g

0x8a54,	// (0x000162a2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a54,	// (0x000162a2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001d688) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001d688) cmail_ddmenu_btn02_pane_t

0x91c2,	// (0x00016a10) fps_text_pane_ParamLimits

0x91c2,	// (0x00016a10) fps_text_pane

0x91d9,	// (0x00016a27) main_fps_pane_g1_ParamLimits

0x91d9,	// (0x00016a27) main_fps_pane_g1

0x91f3,	// (0x00016a41) wait_bar_pane_cp010_ParamLimits

0x91f3,	// (0x00016a41) wait_bar_pane_cp010

0x9204,	// (0x00016a52) fps_text_pane_t1_ParamLimits

0x9204,	// (0x00016a52) fps_text_pane_t1

0xf078,	// (0x0001c8c6) cam4_image_uncrop_pane_g1

0xf081,	// (0x0001c8cf) cam4_image_uncrop_pane_g2

0x5fbd,	// (0x0001380b) cam4_image_uncrop_pane_g3

0x5fc6,	// (0x00013814) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d15b) cam4_image_uncrop_pane_g

0x9099,	// (0x000168e7) dia3_listrow_pane_ParamLimits

0x9382,	// (0x00016bd0) main_phob2_pane

0x859e,	// (0x00015dec) cell_tport_appsw_pane_cp02_ParamLimits

0x859e,	// (0x00015dec) cell_tport_appsw_pane_cp02

0x85b2,	// (0x00015e00) cell_tport_appsw_pane_cp03_ParamLimits

0x85b2,	// (0x00015e00) cell_tport_appsw_pane_cp03

0x9382,	// (0x00016bd0) phob2_contact_card_pane

0x9382,	// (0x00016bd0) phob2_listscroll_pane

0xefc1,	// (0x0001c80f) phob2_list_pane

0xefc9,	// (0x0001c817) scroll_pane_cp034

0x921c,	// (0x00016a6a) phob2_cc_data_pane_ParamLimits

0x921c,	// (0x00016a6a) phob2_cc_data_pane

0x923b,	// (0x00016a89) phob2_cc_listscroll_pane_ParamLimits

0x923b,	// (0x00016a89) phob2_cc_listscroll_pane

0x9259,	// (0x00016aa7) list_double_large_graphic_phob2_pane_ParamLimits

0x9259,	// (0x00016aa7) list_double_large_graphic_phob2_pane

0xefd1,	// (0x0001c81f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefd1,	// (0x0001c81f) list_double_large_graphic_phob2_pane_g1

0xefde,	// (0x0001c82c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefde,	// (0x0001c82c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001d77c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001d77c) list_double_large_graphic_phob2_pane_g

0xefea,	// (0x0001c838) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xefea,	// (0x0001c838) list_double_large_graphic_phob2_pane_t1

0xefff,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefff,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001d781) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001d781) list_double_large_graphic_phob2_pane_t

0x9382,	// (0x00016bd0) list_highlight_pane_cp024

0xf011,	// (0x0001c85f) phob2_cc_button_pane

0x926b,	// (0x00016ab9) phob2_cc_data_pane_g1_ParamLimits

0x926b,	// (0x00016ab9) phob2_cc_data_pane_g1

0x9280,	// (0x00016ace) phob2_cc_data_pane_g2_ParamLimits

0x9280,	// (0x00016ace) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001d786) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001d786) phob2_cc_data_pane_g

0x9292,	// (0x00016ae0) phob2_cc_data_pane_t1_ParamLimits

0x9292,	// (0x00016ae0) phob2_cc_data_pane_t1

0x92aa,	// (0x00016af8) phob2_cc_data_pane_t2_ParamLimits

0x92aa,	// (0x00016af8) phob2_cc_data_pane_t2

0x92c2,	// (0x00016b10) phob2_cc_data_pane_t3_ParamLimits

0x92c2,	// (0x00016b10) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001d78b) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001d78b) phob2_cc_data_pane_t

0xf019,	// (0x0001c867) phob2_cc_list_pane_ParamLimits

0xf019,	// (0x0001c867) phob2_cc_list_pane

0xd415,	// (0x0001ac63) scroll_pane_cp035_ParamLimits

0xd415,	// (0x0001ac63) scroll_pane_cp035

0x93f2,	// (0x00016c40) bg_button_pane_cp033

0xf025,	// (0x0001c873) phob2_cc_button_pane_g1

0xf031,	// (0x0001c87f) phob2_cc_button_pane_t1

0xf046,	// (0x0001c894) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001d792) phob2_cc_button_pane_t

0x92da,	// (0x00016b28) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92da,	// (0x00016b28) list_double_large_graphic_phob2_cc_pane

0x92ec,	// (0x00016b3a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92ec,	// (0x00016b3a) list_double_large_graphic_phob2_cc_pane_g1

0x92f8,	// (0x00016b46) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92f8,	// (0x00016b46) list_double_large_graphic_phob2_cc_pane_g2

0x9304,	// (0x00016b52) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9304,	// (0x00016b52) list_double_large_graphic_phob2_cc_pane_g3

0x9310,	// (0x00016b5e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9310,	// (0x00016b5e) list_double_large_graphic_phob2_cc_pane_g4

0x931c,	// (0x00016b6a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x931c,	// (0x00016b6a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001d797) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001d797) list_double_large_graphic_phob2_cc_pane_g

0x9328,	// (0x00016b76) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9328,	// (0x00016b76) list_double_large_graphic_phob2_cc_pane_t1

0x9351,	// (0x00016b9f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9351,	// (0x00016b9f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001d7a2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001d7a2) list_double_large_graphic_phob2_cc_pane_t

0xf058,	// (0x0001c8a6) list_highlight_pane_cp025_ParamLimits

0xf058,	// (0x0001c8a6) list_highlight_pane_cp025

0x93f2,	// (0x00016c40) bg_button_pane_cp033_ParamLimits

0xf025,	// (0x0001c873) phob2_cc_button_pane_g1_ParamLimits

0xf031,	// (0x0001c87f) phob2_cc_button_pane_t1_ParamLimits

0xf046,	// (0x0001c894) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001d792) phob2_cc_button_pane_t_ParamLimits

0x0f83,	// (0x0000e7d1) popup_wgtman_window

0xd197,	// (0x0001a9e5) scroll_pane_cp038

0x8e2a,	// (0x00016678) wgtman_btn_pane_cp_01_ParamLimits

0x8e2a,	// (0x00016678) wgtman_btn_pane_cp_01

0xf066,	// (0x0001c8b4) wgtman_content_pane

0xf06f,	// (0x0001c8bd) wgtman_heading_pane

0x9382,	// (0x00016bd0) bg_heading_pane_cp02

0xf08a,	// (0x0001c8d8) wgtman_heading_pane_g1

0xf092,	// (0x0001c8e0) wgtman_heading_pane_t1

0xf0a0,	// (0x0001c8ee) scroll_pane_cp036

0xf0a8,	// (0x0001c8f6) wgtman_list_pane

0xf0b0,	// (0x0001c8fe) wgtman_list_pane_t1_ParamLimits

0xf0b0,	// (0x0001c8fe) wgtman_list_pane_t1

0xcf69,	// (0x0001a7b7) cam4_grid_pane

0x6d47,	// (0x00014595) bg_button_pane_cp015_ParamLimits

0x6d59,	// (0x000145a7) bg_button_pane_cp016_ParamLimits

0x6d6c,	// (0x000145ba) bg_button_pane_cp017_ParamLimits

0x6dc4,	// (0x00014612) popup_vitu2_query_window_g3_ParamLimits

0x6dc4,	// (0x00014612) popup_vitu2_query_window_g3

0x6e81,	// (0x000146cf) popup_vitu2_query_window_t6_ParamLimits

0x6e81,	// (0x000146cf) popup_vitu2_query_window_t6

0x6eac,	// (0x000146fa) popup_vitu2_query_window_t7_ParamLimits

0x6eac,	// (0x000146fa) popup_vitu2_query_window_t7

0xf078,	// (0x0001c8c6) cam4_grid_pane_g1

0xf081,	// (0x0001c8cf) cam4_grid_pane_g2

0xf0ca,	// (0x0001c918) cam4_grid_pane_g3

0xf0d3,	// (0x0001c921) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001d7a7) cam4_grid_pane_g

0x1cac,	// (0x0000f4fa) aid_placing_vt_slider_lsc_ParamLimits

0x1fb7,	// (0x0000f805) vidtel_button_pane_ParamLimits

0x1fb7,	// (0x0000f805) vidtel_button_pane

0x9382,	// (0x00016bd0) bg_button_pane_cp034

0x937a,	// (0x00016bc8) vidtel_button_pane_g1

0xf0de,	// (0x0001c92c) vidtel_button_pane_t1

0xd2f8,	// (0x0001ab46) aid_size_vtel_slider_touch

0xd415,	// (0x0001ac63) scroll_pane_cp039

0xde78,	// (0x0001b6c6) ncim_query_button_pane_cp01_ParamLimits

0xde97,	// (0x0001b6e5) ncimui_query_pane_g1_ParamLimits

0x93f2,	// (0x00016c40) input_focus_pane_cp012_ParamLimits

0xdebc,	// (0x0001b70a) ncim_query_entry_pane_t1_ParamLimits

0xd415,	// (0x0001ac63) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
