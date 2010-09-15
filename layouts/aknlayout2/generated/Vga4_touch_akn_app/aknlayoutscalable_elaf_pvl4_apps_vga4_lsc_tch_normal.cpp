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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f4ff };

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
0xfd71,	// (0x0000f270) Screen

0xfd7d,	// (0x0000f27c) application_window

0xfdb9,	// (0x0000f2b8) area_bottom_pane_ParamLimits

0xfdb9,	// (0x0000f2b8) area_bottom_pane

0xfdf2,	// (0x0000f2f1) area_top_pane_ParamLimits

0xfdf2,	// (0x0000f2f1) area_top_pane

0x94ab,	// (0x000189aa) call_video_uplink_pane_ParamLimits

0x94ab,	// (0x000189aa) call_video_uplink_pane

0xfe80,	// (0x0000f37f) main_pane_ParamLimits

0xfe80,	// (0x0000f37f) main_pane

0xbcc1,	// (0x0001b1c0) context_pane

0x313c,	// (0x0001263b) navi_pane

0x3173,	// (0x00012672) popup_cale_events_window_ParamLimits

0x3173,	// (0x00012672) popup_cale_events_window

0xbcd4,	// (0x0001b1d3) popup_mup_playback_window

0x318b,	// (0x0001268a) signal_pane

0x9c89,	// (0x00019188) main_browser_pane

0x9eaa,	// (0x000193a9) main_burst_pane

0x2e54,	// (0x00012353) main_calc_pane

0xbc5d,	// (0x0001b15c) main_cale_day_pane

0x0369,	// (0x0000f868) main_cale_month_pane

0xbc5d,	// (0x0001b15c) main_cale_week_pane

0x9eaa,	// (0x000193a9) main_call_pane

0x991f,	// (0x00018e1e) main_call_poc_pane

0x9eaa,	// (0x000193a9) main_camera_pane

0x9eaa,	// (0x000193a9) main_chi_dic_pane

0xa750,	// (0x00019c4f) main_clock_pane

0x991f,	// (0x00018e1e) main_fmradio_pane

0x9eaa,	// (0x000193a9) main_graph_messa_pane

0x991f,	// (0x00018e1e) main_help_pane

0x9c89,	// (0x00019188) main_im_pane

0x9b7a,	// (0x00019079) main_image_pane_ParamLimits

0x9b7a,	// (0x00019079) main_image_pane

0x991f,	// (0x00018e1e) main_location2_pane

0x9eaa,	// (0x000193a9) main_location_pane

0x9b7a,	// (0x00019079) main_messa_pane

0x991f,	// (0x00018e1e) main_mp2_pane

0x9eaa,	// (0x000193a9) main_mp_pane

0x991f,	// (0x00018e1e) main_msg_pane

0x991f,	// (0x00018e1e) main_mup_eq_pane

0x991f,	// (0x00018e1e) main_mup_pane

0x9c89,	// (0x00019188) main_notes_pane

0x991f,	// (0x00018e1e) main_pec_pane

0x991f,	// (0x00018e1e) main_phob_pane

0x991f,	// (0x00018e1e) main_pinb_pane

0x991f,	// (0x00018e1e) main_postcard_pane

0x991f,	// (0x00018e1e) main_qdial_pane

0x9eaa,	// (0x000193a9) main_skin_pane

0x991f,	// (0x00018e1e) main_smil2_pane

0x9eaa,	// (0x000193a9) main_smil_pane

0x9eaa,	// (0x000193a9) main_video_pane

0x9eaa,	// (0x000193a9) main_video_tele_pane

0x9b7a,	// (0x00019079) main_viewer_pane_ParamLimits

0x9b7a,	// (0x00019079) main_viewer_pane

0x9eaa,	// (0x000193a9) main_vorec_pane

0x2eaa,	// (0x000123a9) popup_blid_sat_info_window_ParamLimits

0x2eaa,	// (0x000123a9) popup_blid_sat_info_window

0x2f0e,	// (0x0001240d) popup_dyc_status_message_window_ParamLimits

0x2f0e,	// (0x0001240d) popup_dyc_status_message_window

0x2f28,	// (0x00012427) popup_grid_large_graphic_window_ParamLimits

0x2f28,	// (0x00012427) popup_grid_large_graphic_window

0x2fea,	// (0x000124e9) popup_loc_request_window_ParamLimits

0x2fea,	// (0x000124e9) popup_loc_request_window

0x3110,	// (0x0001260f) popup_wml_address_window_ParamLimits

0x3110,	// (0x0001260f) popup_wml_address_window

0x2c92,	// (0x00012191) call_muted_g1

0x28e0,	// (0x00011ddf) popup_call_audio_conf_window_ParamLimits

0x28e0,	// (0x00011ddf) popup_call_audio_conf_window

0x2ca2,	// (0x000121a1) popup_call_audio_first_window_ParamLimits

0x2ca2,	// (0x000121a1) popup_call_audio_first_window

0x2d18,	// (0x00012217) popup_call_audio_in_window_ParamLimits

0x2d18,	// (0x00012217) popup_call_audio_in_window

0x2d54,	// (0x00012253) popup_call_audio_out_window_ParamLimits

0x2d54,	// (0x00012253) popup_call_audio_out_window

0x2d8e,	// (0x0001228d) popup_call_audio_second_window_ParamLimits

0x2d8e,	// (0x0001228d) popup_call_audio_second_window

0x2de4,	// (0x000122e3) popup_call_audio_wait_window_ParamLimits

0x2de4,	// (0x000122e3) popup_call_audio_wait_window

0x2e19,	// (0x00012318) popup_number_entry_window_ParamLimits

0x2e19,	// (0x00012318) popup_number_entry_window

0x94d7,	// (0x000189d6) bg_popup_call_pane_cp05_ParamLimits

0x94d7,	// (0x000189d6) bg_popup_call_pane_cp05

0x94f7,	// (0x000189f6) popup_number_entry_window_t1

0x950a,	// (0x00018a09) popup_number_entry_window_t2

0x951c,	// (0x00018a1b) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0001e544) popup_number_entry_window_t

0x9563,	// (0x00018a62) text_title_cp2

0x9576,	// (0x00018a75) bg_popup_call_pane_cp_ParamLimits

0x9576,	// (0x00018a75) bg_popup_call_pane_cp

0x9584,	// (0x00018a83) call_thumbnail_pane

0x958c,	// (0x00018a8b) popup_call_audio_in_window_g1_ParamLimits

0x958c,	// (0x00018a8b) popup_call_audio_in_window_g1

0x9598,	// (0x00018a97) popup_call_audio_in_window_g2_ParamLimits

0x9598,	// (0x00018a97) popup_call_audio_in_window_g2

0x95a4,	// (0x00018aa3) popup_call_audio_in_window_g3_ParamLimits

0x95a4,	// (0x00018aa3) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0001e54d) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0001e54d) popup_call_audio_in_window_g

0x95b0,	// (0x00018aaf) popup_call_audio_in_window_t1_ParamLimits

0x95b0,	// (0x00018aaf) popup_call_audio_in_window_t1

0x95cc,	// (0x00018acb) popup_call_audio_in_window_t2_ParamLimits

0x95cc,	// (0x00018acb) popup_call_audio_in_window_t2

0x95e8,	// (0x00018ae7) popup_call_audio_in_window_t3_ParamLimits

0x95e8,	// (0x00018ae7) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0001e554) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0001e554) popup_call_audio_in_window_t

0x9576,	// (0x00018a75) bg_popup_call_pane_cp01_ParamLimits

0x9576,	// (0x00018a75) bg_popup_call_pane_cp01

0x9584,	// (0x00018a83) call_thumbnail_pane_cp02

0x95fb,	// (0x00018afa) call_type_pane_cp022

0x9603,	// (0x00018b02) popup_call_audio_out_window_g1_ParamLimits

0x9603,	// (0x00018b02) popup_call_audio_out_window_g1

0x9615,	// (0x00018b14) popup_call_audio_out_window_g2_ParamLimits

0x9615,	// (0x00018b14) popup_call_audio_out_window_g2

0x9621,	// (0x00018b20) popup_call_audio_out_window_g3_ParamLimits

0x9621,	// (0x00018b20) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0001e55b) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0001e55b) popup_call_audio_out_window_g

0x9633,	// (0x00018b32) popup_call_audio_out_window_t1_ParamLimits

0x9633,	// (0x00018b32) popup_call_audio_out_window_t1

0x964b,	// (0x00018b4a) popup_call_audio_out_window_t2_ParamLimits

0x964b,	// (0x00018b4a) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0001e562) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0001e562) popup_call_audio_out_window_t

0x9660,	// (0x00018b5f) bg_popup_call_pane_ParamLimits

0x9660,	// (0x00018b5f) bg_popup_call_pane

0x0005,	// (0x0000f504) call_thumbnail_pane_cp_ParamLimits

0x0005,	// (0x0000f504) call_thumbnail_pane_cp

0x96e4,	// (0x00018be3) call_type_pane_cp01_ParamLimits

0x96e4,	// (0x00018be3) call_type_pane_cp01

0x9728,	// (0x00018c27) popup_call_audio_first_window_g1_ParamLimits

0x9728,	// (0x00018c27) popup_call_audio_first_window_g1

0x9774,	// (0x00018c73) popup_call_audio_first_window_g2_ParamLimits

0x9774,	// (0x00018c73) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0001e567) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0001e567) popup_call_audio_first_window_g

0x97b8,	// (0x00018cb7) popup_call_audio_first_window_t1_ParamLimits

0x97b8,	// (0x00018cb7) popup_call_audio_first_window_t1

0x9864,	// (0x00018d63) popup_call_audio_first_window_t4_ParamLimits

0x9864,	// (0x00018d63) popup_call_audio_first_window_t4

0x98f0,	// (0x00018def) popup_call_audio_first_window_t5_ParamLimits

0x98f0,	// (0x00018def) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0001e56c) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0001e56c) popup_call_audio_first_window_t

0x991f,	// (0x00018e1e) bg_popup_call_pane_cp02

0x9929,	// (0x00018e28) call_type_pane_cp023

0x9931,	// (0x00018e30) popup_call_audio_wait_window_g1

0x9939,	// (0x00018e38) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0001e573) popup_call_audio_wait_window_g

0x9941,	// (0x00018e40) popup_call_audio_wait_window_t3

0x994f,	// (0x00018e4e) bg_popup_call_pane_cp03_ParamLimits

0x994f,	// (0x00018e4e) bg_popup_call_pane_cp03

0x99af,	// (0x00018eae) call_thumbnail_pane_cp011_ParamLimits

0x99af,	// (0x00018eae) call_thumbnail_pane_cp011

0x99bb,	// (0x00018eba) call_type_pane_cp034_ParamLimits

0x99bb,	// (0x00018eba) call_type_pane_cp034

0x99f7,	// (0x00018ef6) popup_call_audio_second_window_g1_ParamLimits

0x99f7,	// (0x00018ef6) popup_call_audio_second_window_g1

0x9a33,	// (0x00018f32) popup_call_audio_second_window_g2_ParamLimits

0x9a33,	// (0x00018f32) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0001e578) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0001e578) popup_call_audio_second_window_g

0x9a6f,	// (0x00018f6e) popup_call_audio_second_window_t1_ParamLimits

0x9a6f,	// (0x00018f6e) popup_call_audio_second_window_t1

0x9af0,	// (0x00018fef) popup_call_audio_second_window_t2_ParamLimits

0x9af0,	// (0x00018fef) popup_call_audio_second_window_t2

0x9b26,	// (0x00019025) popup_call_audio_second_window_t3_ParamLimits

0x9b26,	// (0x00019025) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0001e57d) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0001e57d) popup_call_audio_second_window_t

0x991f,	// (0x00018e1e) bg_popup_call_pane_cp04

0x9b5c,	// (0x0001905b) list_conf_pane

0x9b64,	// (0x00019063) popup_call_audio_conf_window_t1

0x9b72,	// (0x00019071) call_thumbnail_pane_g1

0x9b7a,	// (0x00019079) bg_pinb_pane_ParamLimits

0x9b7a,	// (0x00019079) bg_pinb_pane

0x9b88,	// (0x00019087) find_pinb_pane

0x9b7a,	// (0x00019079) listscroll_pinb_pane_ParamLimits

0x9b7a,	// (0x00019079) listscroll_pinb_pane

0x9b92,	// (0x00019091) pinb_bg_pane_g1

0x9b92,	// (0x00019091) pinb_bg_pane_g2

0x9b92,	// (0x00019091) pinb_bg_pane_g3

0x9b92,	// (0x00019091) pinb_bg_pane_g4

0x9b92,	// (0x00019091) pinb_bg_pane_g5

0x9b92,	// (0x00019091) pinb_bg_pane_g6

0x9b92,	// (0x00019091) pinb_bg_pane_g7

0x9b92,	// (0x00019091) pinb_bg_pane_g8

0x9b92,	// (0x00019091) pinb_bg_pane_g9

0x9b92,	// (0x00019091) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0001e584) pinb_bg_pane_g

0x9454,	// (0x00018953) grid_pinb_pane

0x9454,	// (0x00018953) list_pinb_pane

0x94c9,	// (0x000189c8) scroll_pane_cp01_ParamLimits

0x94c9,	// (0x000189c8) scroll_pane_cp01

0x9b9c,	// (0x0001909b) find_pinb_pane_g1_ParamLimits

0x9b9c,	// (0x0001909b) find_pinb_pane_g1

0x9bb4,	// (0x000190b3) find_pinb_pane_t1

0x9bc6,	// (0x000190c5) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0001e59e) find_pinb_pane_t

0x9bdb,	// (0x000190da) input_focus_pane_cp01_ParamLimits

0x9bdb,	// (0x000190da) input_focus_pane_cp01

0x9be7,	// (0x000190e6) cell_pinb_pane_ParamLimits

0x9be7,	// (0x000190e6) cell_pinb_pane

0x9bf5,	// (0x000190f4) cell_pinb_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) cell_pinb_pane_g1

0x9c03,	// (0x00019102) cell_pinb_pane_g2_ParamLimits

0x9c03,	// (0x00019102) cell_pinb_pane_g2

0x9c03,	// (0x00019102) cell_pinb_pane_g3_ParamLimits

0x9c03,	// (0x00019102) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0001e5a3) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0001e5a3) cell_pinb_pane_g

0x991f,	// (0x00018e1e) grid_highlight_pane_cp01

0x9be7,	// (0x000190e6) list_pinb_item_pane_ParamLimits

0x9be7,	// (0x000190e6) list_pinb_item_pane

0x9454,	// (0x00018953) list_highlight_pane_cp02

0x9c11,	// (0x00019110) list_pinb_item_pane_g1_ParamLimits

0x9c11,	// (0x00019110) list_pinb_item_pane_g1

0x9c03,	// (0x00019102) list_pinb_item_pane_g2_ParamLimits

0x9c03,	// (0x00019102) list_pinb_item_pane_g2

0x9bf5,	// (0x000190f4) list_pinb_item_pane_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_pinb_item_pane_g3

0x9c03,	// (0x00019102) list_pinb_item_pane_g4_ParamLimits

0x9c03,	// (0x00019102) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0001e5aa) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0001e5aa) list_pinb_item_pane_g

0x9c1f,	// (0x0001911e) list_pinb_item_pane_t1_ParamLimits

0x9c1f,	// (0x0001911e) list_pinb_item_pane_t1

0x0049,	// (0x0000f548) calc_display_pane

0x006e,	// (0x0000f56d) calc_paper_pane

0x0091,	// (0x0000f590) grid_calc_pane

0x991f,	// (0x00018e1e) bg_list_pane_cp01

0x00bf,	// (0x0000f5be) clock_g1

0x00c7,	// (0x0000f5c6) clock_g2

0x0001,

0xf0b4,	// (0x0001e5b3) clock_g

0x00cf,	// (0x0000f5ce) clock_t1_ParamLimits

0x00cf,	// (0x0000f5ce) clock_t1

0x00e4,	// (0x0000f5e3) clock_t2_ParamLimits

0x00e4,	// (0x0000f5e3) clock_t2

0x00f6,	// (0x0000f5f5) clock_t3_ParamLimits

0x00f6,	// (0x0000f5f5) clock_t3

0x0108,	// (0x0000f607) clock_t4_ParamLimits

0x0108,	// (0x0000f607) clock_t4

0x011a,	// (0x0000f619) clock_t5_ParamLimits

0x011a,	// (0x0000f619) clock_t5

0x012f,	// (0x0000f62e) clock_t6_ParamLimits

0x012f,	// (0x0000f62e) clock_t6

0x0141,	// (0x0000f640) clock_t7_ParamLimits

0x0141,	// (0x0000f640) clock_t7

0x0153,	// (0x0000f652) clock_t8_ParamLimits

0x0153,	// (0x0000f652) clock_t8

0x0167,	// (0x0000f666) clock_t9_ParamLimits

0x0167,	// (0x0000f666) clock_t9

0x0008,

0xf0b9,	// (0x0001e5b8) clock_t_ParamLimits

0xf0b9,	// (0x0001e5b8) clock_t

0x9c3b,	// (0x0001913a) popup_clock_analogue_window_cp02

0x9c3b,	// (0x0001913a) popup_clock_digital_window_cp01

0x991f,	// (0x00018e1e) listscroll_help_pane

0x991f,	// (0x00018e1e) phob_pre_status_pane

0x9c43,	// (0x00019142) grid_qdial_pane

0x9b7a,	// (0x00019079) listscroll_mce_pane

0x9b7a,	// (0x00019079) bg_notes_pane

0x9c4d,	// (0x0001914c) list_notes_pane

0x017d,	// (0x0000f67c) scroll_pane_cp06

0x9c5b,	// (0x0001915a) bg_calc_paper_pane

0x9c6f,	// (0x0001916e) list_calc_pane

0x9c89,	// (0x00019188) bg_calc_display_pane

0x0191,	// (0x0000f690) calc_display_pane_t1

0x01a6,	// (0x0000f6a5) calc_display_pane_t2

0x9c95,	// (0x00019194) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0001e5cb) calc_display_pane_t

0x01bb,	// (0x0000f6ba) cell_calc_pane_ParamLimits

0x01bb,	// (0x0000f6ba) cell_calc_pane

0x9ca7,	// (0x000191a6) bg_calc_paper_pane_g1

0x9cb3,	// (0x000191b2) bg_calc_paper_pane_g2

0x9cbf,	// (0x000191be) bg_calc_paper_pane_g3

0x9ccb,	// (0x000191ca) bg_calc_paper_pane_g4

0x9cd7,	// (0x000191d6) bg_calc_paper_pane_g5

0x01f6,	// (0x0000f6f5) bg_calc_paper_pane_g6

0x0209,	// (0x0000f708) bg_calc_paper_pane_g7

0x021c,	// (0x0000f71b) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0001e5d2) bg_calc_paper_pane_g

0x022f,	// (0x0000f72e) calc_bg_paper_pane_g9

0x0242,	// (0x0000f741) list_calc_item_pane_ParamLimits

0x0242,	// (0x0000f741) list_calc_item_pane

0x9ce3,	// (0x000191e2) list_calc_item_pane_g1

0x9cf0,	// (0x000191ef) list_calc_item_pane_t1_ParamLimits

0x9cf0,	// (0x000191ef) list_calc_item_pane_t1

0x025a,	// (0x0000f759) list_calc_item_pane_t2_ParamLimits

0x025a,	// (0x0000f759) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0001e5e3) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0001e5e3) list_calc_item_pane_t

0x9b92,	// (0x00019091) cell_calc_pane_g1

0x9d02,	// (0x00019201) grid_highlight_pane_cp02

0x9d24,	// (0x00019223) bg_calc_display_pane_g1

0x028c,	// (0x0000f78b) bg_calc_display_pane_g2

0x0296,	// (0x0000f795) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0001e5ed) bg_calc_display_pane_g

0x029f,	// (0x0000f79e) cell_qdial_pane_ParamLimits

0x029f,	// (0x0000f79e) cell_qdial_pane

0x02b3,	// (0x0000f7b2) cell_qdial_pane_g1_ParamLimits

0x02b3,	// (0x0000f7b2) cell_qdial_pane_g1

0x02c9,	// (0x0000f7c8) cell_qdial_pane_g2_ParamLimits

0x02c9,	// (0x0000f7c8) cell_qdial_pane_g2

0x9d2d,	// (0x0001922c) cell_qdial_pane_g3_ParamLimits

0x9d2d,	// (0x0001922c) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0001e5f4) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0001e5f4) cell_qdial_pane_g

0x02f0,	// (0x0000f7ef) cell_qdial_pane_t1_ParamLimits

0x02f0,	// (0x0000f7ef) cell_qdial_pane_t1

0x0308,	// (0x0000f807) cell_qdial_pane_t2_ParamLimits

0x0308,	// (0x0000f807) cell_qdial_pane_t2

0x031b,	// (0x0000f81a) cell_qdial_pane_t3_ParamLimits

0x031b,	// (0x0000f81a) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0001e5fd) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0001e5fd) cell_qdial_pane_t

0x991f,	// (0x00018e1e) grid_highlight_pane_cp04

0x9d39,	// (0x00019238) thumbnail_qdial_pane_ParamLimits

0x9d39,	// (0x00019238) thumbnail_qdial_pane

0x9d95,	// (0x00019294) list_help_pane

0x9d9e,	// (0x0001929d) scroll_pane_cp02

0x032e,	// (0x0000f82d) help_list_pane_t1_ParamLimits

0x032e,	// (0x0000f82d) help_list_pane_t1

0x9da7,	// (0x000192a6) bg_notes_pane_g2

0x9daf,	// (0x000192ae) bg_notes_pane_g3

0x9db7,	// (0x000192b6) notes_bg_pane_g1

0x9dbf,	// (0x000192be) notes_bg_pane_g4

0x9dc7,	// (0x000192c6) notes_bg_pane_g5

0x9dcf,	// (0x000192ce) notes_bg_pane_g6

0x9dd7,	// (0x000192d6) notes_bg_pane_g7

0x9ddf,	// (0x000192de) notes_bg_pane_g8

0x9de7,	// (0x000192e6) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0001e61b) notes_bg_pane_g

0x0352,	// (0x0000f851) list_notes_text_pane_ParamLimits

0x0352,	// (0x0000f851) list_notes_text_pane

0x9def,	// (0x000192ee) list_notes_text_pane_g1

0x9df8,	// (0x000192f7) list_notes_text_pane_t1

0x0369,	// (0x0000f868) listscroll_cale_week_pane

0x0393,	// (0x0000f892) bg_cale_heading_pane

0x03b7,	// (0x0000f8b6) bg_cale_pane_cp01

0x03d4,	// (0x0000f8d3) cale_week_corner_pane

0x03f3,	// (0x0000f8f2) cale_week_day_heading_pane

0x041c,	// (0x0000f91b) cale_week_scroll_pane_g1

0x043b,	// (0x0000f93a) cale_week_scroll_pane_g2

0x0453,	// (0x0000f952) cale_week_scroll_pane_g3

0x046b,	// (0x0000f96a) cale_week_scroll_pane_g4

0x0483,	// (0x0000f982) cale_week_scroll_pane_g5

0x04a3,	// (0x0000f9a2) cale_week_scroll_pane_g6

0x04c3,	// (0x0000f9c2) cale_week_scroll_pane_g7

0x04e7,	// (0x0000f9e6) cale_week_scroll_pane_g8

0x050b,	// (0x0000fa0a) cale_week_scroll_pane_g9

0x0523,	// (0x0000fa22) cale_week_scroll_pane_g10

0x053b,	// (0x0000fa3a) cale_week_scroll_pane_g11

0x0553,	// (0x0000fa52) cale_week_scroll_pane_g12

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g13

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g14

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0001e62a) cale_week_scroll_pane_g

0x05bf,	// (0x0000fabe) cale_week_time_pane

0x05e3,	// (0x0000fae2) grid_cale_week_pane

0x9e32,	// (0x00019331) scroll_pane_cp08

0x0615,	// (0x0000fb14) cell_cale_week_pane_ParamLimits

0x0615,	// (0x0000fb14) cell_cale_week_pane

0x06b1,	// (0x0000fbb0) cale_week_day_heading_pane_t1

0x06db,	// (0x0000fbda) cale_week_day_heading_pane_t2

0x070a,	// (0x0000fc09) cale_week_day_heading_pane_t3

0x0739,	// (0x0000fc38) cale_week_day_heading_pane_t4

0x0768,	// (0x0000fc67) cale_week_day_heading_pane_t5

0x079b,	// (0x0000fc9a) cale_week_day_heading_pane_t6

0x07d2,	// (0x0000fcd1) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0001e64b) cale_week_day_heading_pane_t

0x9e4f,	// (0x0001934e) bg_cale_side_pane

0x07fc,	// (0x0000fcfb) cale_week_time_pane_t1

0x0816,	// (0x0000fd15) cale_week_time_pane_t2

0x0830,	// (0x0000fd2f) cale_week_time_pane_t3

0x084a,	// (0x0000fd49) cale_week_time_pane_t4

0x0864,	// (0x0000fd63) cale_week_time_pane_t5

0x087e,	// (0x0000fd7d) cale_week_time_pane_t6

0x089e,	// (0x0000fd9d) cale_week_time_pane_t7

0x08c4,	// (0x0000fdc3) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0001e65a) cale_week_time_pane_t

0x08ea,	// (0x0000fde9) cell_cale_week_pane_g2

0x090e,	// (0x0000fe0d) cell_cale_week_pane_g3_ParamLimits

0x090e,	// (0x0000fe0d) cell_cale_week_pane_g3

0x9e5d,	// (0x0001935c) grid_highlight_pane_cp07

0x9e65,	// (0x00019364) listscroll_gms_pane

0x9e6f,	// (0x0001936e) grid_gms_pane

0x9e78,	// (0x00019377) listscroll_gms_pane_g1

0x9e80,	// (0x0001937f) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0001e66b) listscroll_gms_pane_g

0x0926,	// (0x0000fe25) scroll_pane_cp010

0x0931,	// (0x0000fe30) cell_gms_pane_ParamLimits

0x0931,	// (0x0000fe30) cell_gms_pane

0x0948,	// (0x0000fe47) cell_gms_pane_g1

0x9e88,	// (0x00019387) cell_gms_pane_g2

0x9e90,	// (0x0001938f) cell_gms_pane_g3

0x9e99,	// (0x00019398) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0001e670) cell_gms_pane_g

0x9ea2,	// (0x000193a1) grid_highlight_pane_cp09

0x2c16,	// (0x00012115) phob_pre_status_pane_g1

0x2c1e,	// (0x0001211d) phob_pre_status_pane_g2

0x2c26,	// (0x00012125) phob_pre_status_pane_g3

0x2c2e,	// (0x0001212d) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0001ea34) phob_pre_status_pane_g

0x2c3e,	// (0x0001213d) phob_pre_status_pane_t1

0x2c4e,	// (0x0001214d) phob_pre_status_pane_t2

0x2c5e,	// (0x0001215d) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0001ea3f) phob_pre_status_pane_t

0x9eaa,	// (0x000193a9) bg_list_pane_cp05

0x0958,	// (0x0000fe57) grid_vorec_pane

0x0962,	// (0x0000fe61) vorec_t1

0x0970,	// (0x0000fe6f) vorec_t2

0x097e,	// (0x0000fe7d) vorec_t3

0x098c,	// (0x0000fe8b) vorec_t4

0xeb0e,	// (0x0001e00d) vorec_t5

0x8751,	// (0x00017c50) vorec_t6

0x0004,

0xf17a,	// (0x0001e679) vorec_t

0x875f,	// (0x00017c5e) wait_bar_pane_cp01

0x09a8,	// (0x0000fea7) cell_vorec_pane_ParamLimits

0x09a8,	// (0x0000fea7) cell_vorec_pane

0x9eb2,	// (0x000193b1) cell_vorec_pane_g1

0x991f,	// (0x00018e1e) grid_highlight_pane_cp05

0x94c9,	// (0x000189c8) cams_zoom_pane

0x94c9,	// (0x000189c8) image_vga_pane

0x9bf5,	// (0x000190f4) main_camera_pane_g1

0x9bf5,	// (0x000190f4) main_camera_pane_g2

0x9bf5,	// (0x000190f4) main_camera_pane_g3

0x9bf5,	// (0x000190f4) main_camera_pane_g4

0x9bf5,	// (0x000190f4) main_camera_pane_g5

0x9bf5,	// (0x000190f4) main_camera_pane_g6

0x9bf5,	// (0x000190f4) main_camera_pane_g7

0x0007,

0xf185,	// (0x0001e684) main_camera_pane_g

0x9ebc,	// (0x000193bb) main_camera_pane_t1

0x9ebc,	// (0x000193bb) main_camera_pane_t2

0x0001,

0xf196,	// (0x0001e695) main_camera_pane_t

0x09d1,	// (0x0000fed0) cams_zoom_pane_cp_ParamLimits

0x09d1,	// (0x0000fed0) cams_zoom_pane_cp

0x0a05,	// (0x0000ff04) image_cif_pane_ParamLimits

0x0a05,	// (0x0000ff04) image_cif_pane

0x9454,	// (0x00018953) image_subqcif_pane

0x0a17,	// (0x0000ff16) main_video_pane_g1_ParamLimits

0x0a17,	// (0x0000ff16) main_video_pane_g1

0x0a45,	// (0x0000ff44) main_video_pane_g2_ParamLimits

0x0a45,	// (0x0000ff44) main_video_pane_g2

0x0a7f,	// (0x0000ff7e) main_video_pane_g3_ParamLimits

0x0a7f,	// (0x0000ff7e) main_video_pane_g3

0x0a7f,	// (0x0000ff7e) main_video_pane_g4_ParamLimits

0x0a7f,	// (0x0000ff7e) main_video_pane_g4

0x0ab3,	// (0x0000ffb2) main_video_pane_g5_ParamLimits

0x0ab3,	// (0x0000ffb2) main_video_pane_g5

0x9ed0,	// (0x000193cf) main_video_pane_g6_ParamLimits

0x9ed0,	// (0x000193cf) main_video_pane_g6

0x0006,

0xf19b,	// (0x0001e69a) main_video_pane_g_ParamLimits

0xf19b,	// (0x0001e69a) main_video_pane_g

0x0acf,	// (0x0000ffce) main_video_pane_t1_ParamLimits

0x0acf,	// (0x0000ffce) main_video_pane_t1

0x9eea,	// (0x000193e9) cams_zoom_pane_g1

0x9eea,	// (0x000193e9) cams_zoom_pane_g2

0x9eea,	// (0x000193e9) cams_zoom_pane_g3

0x9eea,	// (0x000193e9) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0001e6a9) cams_zoom_pane_g

0x0b27,	// (0x00010026) grid_cams_pane

0x0b41,	// (0x00010040) linegrid_cams_pane

0x0b53,	// (0x00010052) cell_cams_pane_ParamLimits

0x0b53,	// (0x00010052) cell_cams_pane

0x9ef4,	// (0x000193f3) cams_burst_image_pane

0x9efc,	// (0x000193fb) cell_cams_pane_g1

0x991f,	// (0x00018e1e) grid_highlight_pane_cp03

0x9b92,	// (0x00019091) mp_bg_pane_g1

0x9454,	// (0x00018953) bg_list_pane_cp03

0x9454,	// (0x00018953) bg_mp_pane

0x9454,	// (0x00018953) grid_mp_pane

0x9eea,	// (0x000193e9) media_player_g1

0xa476,	// (0x00019975) media_player_t1

0xa476,	// (0x00019975) media_player_t2

0xa476,	// (0x00019975) media_player_t3

0xa476,	// (0x00019975) media_player_t4

0xa476,	// (0x00019975) media_player_t5

0xa476,	// (0x00019975) media_player_t6

0xa476,	// (0x00019975) media_player_t7

0x0006,

0xf51f,	// (0x0001ea1e) media_player_t

0x9454,	// (0x00018953) wait_bar_pane_cp02

0xf504,	// (0x0001ea03) main_usb_pane_t

0xa750,	// (0x00019c4f) cell_mp_pane

0x9b92,	// (0x00019091) cell_mp_pane_g1

0x991f,	// (0x00018e1e) grid_highlight_pane_cp06

0x9f04,	// (0x00019403) grid_skin_colour_pane

0x9f0c,	// (0x0001940b) list_highlight_pane_cp03

0x0b75,	// (0x00010074) skin_g1

0x9f14,	// (0x00019413) skin_t1

0x9f23,	// (0x00019422) skin_t2

0x0001,

0xf1d8,	// (0x0001e6d7) skin_t

0x0b7d,	// (0x0001007c) cell_skin_colour_pane_ParamLimits

0x0b7d,	// (0x0001007c) cell_skin_colour_pane

0x9f31,	// (0x00019430) cell_skin_colour_pane_g1

0x0bf0,	// (0x000100ef) call_video_g1_ParamLimits

0x0bf0,	// (0x000100ef) call_video_g1

0x0c0c,	// (0x0001010b) call_video_g2_ParamLimits

0x0c0c,	// (0x0001010b) call_video_g2

0x0001,

0xf1dd,	// (0x0001e6dc) call_video_g_ParamLimits

0xf1dd,	// (0x0001e6dc) call_video_g

0x0c51,	// (0x00010150) call_video_uplink_pane_cp1_ParamLimits

0x0c51,	// (0x00010150) call_video_uplink_pane_cp1

0x9f43,	// (0x00019442) call_video_uplink_pane_cp2

0x0cf2,	// (0x000101f1) video_down_crop_pane_ParamLimits

0x0cf2,	// (0x000101f1) video_down_crop_pane

0x0ddb,	// (0x000102da) video_down_pane_ParamLimits

0x0ddb,	// (0x000102da) video_down_pane

0x9f4b,	// (0x0001944a) video_down_subqcif_pane_ParamLimits

0x9f4b,	// (0x0001944a) video_down_subqcif_pane

0x9f65,	// (0x00019464) video_down_subqcif_pane_cp_ParamLimits

0x9f65,	// (0x00019464) video_down_subqcif_pane_cp

0x9f8d,	// (0x0001948c) im_reading_pane_ParamLimits

0x9f8d,	// (0x0001948c) im_reading_pane

0x0ee6,	// (0x000103e5) im_writing_pane_ParamLimits

0x0ee6,	// (0x000103e5) im_writing_pane

0x0f04,	// (0x00010403) im_reading_pane_t1

0x9fa7,	// (0x000194a6) list_im_pane

0x9fb8,	// (0x000194b7) scroll_pane_cp07

0x0f43,	// (0x00010442) im_writing_pane_t1_ParamLimits

0x0f43,	// (0x00010442) im_writing_pane_t1

0x9fd1,	// (0x000194d0) im_writing_pane_t2_ParamLimits

0x9fd1,	// (0x000194d0) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0001e6e6) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0001e6e6) im_writing_pane_t

0x991f,	// (0x00018e1e) input_focus_pane_cp04

0x991f,	// (0x00018e1e) input_focus_pane_cp05

0x0f58,	// (0x00010457) list_im_single_pane_ParamLimits

0x0f58,	// (0x00010457) list_im_single_pane

0x9fee,	// (0x000194ed) list_single_im_pane_t1

0x9eaa,	// (0x000193a9) blid_accuracy_pane

0x9eaa,	// (0x000193a9) blid_compass_pane

0xbc15,	// (0x0001b114) main_location_t1

0xbc15,	// (0x0001b114) main_location_t2

0xbc15,	// (0x0001b114) main_location_t3

0x0002,

0xf52e,	// (0x0001ea2d) main_location_t

0x991f,	// (0x00018e1e) aid_levels_location

0x9b92,	// (0x00019091) blid_accuracy_pane_g1

0x9b92,	// (0x00019091) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0001e735) blid_accuracy_pane_g

0xa028,	// (0x00019527) wml_content_pane

0xa066,	// (0x00019565) wml_button_pane_ParamLimits

0xa066,	// (0x00019565) wml_button_pane

0x0f6e,	// (0x0001046d) wml_list_single_large_pane_ParamLimits

0x0f6e,	// (0x0001046d) wml_list_single_large_pane

0x0f87,	// (0x00010486) wml_list_single_medium_pane_ParamLimits

0x0f87,	// (0x00010486) wml_list_single_medium_pane

0x0fa1,	// (0x000104a0) wml_list_single_small_pane_ParamLimits

0x0fa1,	// (0x000104a0) wml_list_single_small_pane

0xa07a,	// (0x00019579) wml_selection_box_pane_ParamLimits

0xa07a,	// (0x00019579) wml_selection_box_pane

0xa08d,	// (0x0001958c) wml_list_single_pane_t1

0xa09c,	// (0x0001959b) wml_list_single_medium_pane_t1

0xa0ab,	// (0x000195aa) wml_list_single_large_pane_t1

0xa0ba,	// (0x000195b9) input_focus_pane_cp02_ParamLimits

0xa0ba,	// (0x000195b9) input_focus_pane_cp02

0xa0cd,	// (0x000195cc) wml_selection_box_pane_g1

0xa0d6,	// (0x000195d5) wml_selection_box_pane_t1_ParamLimits

0xa0d6,	// (0x000195d5) wml_selection_box_pane_t1

0x9b7a,	// (0x00019079) bg_wml_button_pane_ParamLimits

0x9b7a,	// (0x00019079) bg_wml_button_pane

0xa0ee,	// (0x000195ed) wml_button_pane_g1

0xa0f6,	// (0x000195f5) wml_button_pane_t1

0xa0ee,	// (0x000195ed) wml_button_bg_pane_g1

0xa106,	// (0x00019605) wml_button_bg_pane_g2

0xa10e,	// (0x0001960d) wml_button_bg_pane_g3

0xa116,	// (0x00019615) wml_button_bg_pane_g4

0xa11e,	// (0x0001961d) wml_button_bg_pane_g5

0xa126,	// (0x00019625) wml_button_bg_pane_g6

0xa12e,	// (0x0001962d) wml_button_bg_pane_g7

0xa136,	// (0x00019635) wml_button_bg_pane_g8

0xa13e,	// (0x0001963d) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0001e6eb) wml_button_bg_pane_g

0x0fbd,	// (0x000104bc) bg_list_pane_cp02

0xa146,	// (0x00019645) mce_header_pane_ParamLimits

0xa146,	// (0x00019645) mce_header_pane

0xa15c,	// (0x0001965b) mce_icon_pane

0xa15c,	// (0x0001965b) mce_image_pane

0xa165,	// (0x00019664) mce_text_pane_ParamLimits

0xa165,	// (0x00019664) mce_text_pane

0x0fc7,	// (0x000104c6) scroll_pane_cp03

0xa05e,	// (0x0001955d) scroll_pane_cp04

0xa178,	// (0x00019677) scroll_pane_cp05_ParamLimits

0xa178,	// (0x00019677) scroll_pane_cp05

0x0fd1,	// (0x000104d0) mce_header_field_pane_ParamLimits

0x0fd1,	// (0x000104d0) mce_header_field_pane

0x0fea,	// (0x000104e9) mce_header_field_pane_2_ParamLimits

0x0fea,	// (0x000104e9) mce_header_field_pane_2

0x1000,	// (0x000104ff) mce_header_field_pane_3

0x1008,	// (0x00010507) list_single_mce_message_pane_ParamLimits

0x1008,	// (0x00010507) list_single_mce_message_pane

0x1024,	// (0x00010523) list_single_mce_smart_pane_ParamLimits

0x1024,	// (0x00010523) list_single_mce_smart_pane

0xa184,	// (0x00019683) input_focus_pane_cp03

0xa18d,	// (0x0001968c) list_header_data_pane

0x104b,	// (0x0001054a) mce_header_field_pane_t1

0x105b,	// (0x0001055a) list_single_mce_header_pane_ParamLimits

0x105b,	// (0x0001055a) list_single_mce_header_pane

0xa195,	// (0x00019694) list_single_mce_header_pane_t1

0xa1a4,	// (0x000196a3) list_single_mce_message_pane_g1

0xa1ac,	// (0x000196ab) list_single_mce_message_pane_t1

0x1095,	// (0x00010594) bg_cale_heading_pane_cp01_ParamLimits

0x1095,	// (0x00010594) bg_cale_heading_pane_cp01

0xa1ba,	// (0x000196b9) bg_cale_pane_cp02_ParamLimits

0xa1ba,	// (0x000196b9) bg_cale_pane_cp02

0x10e7,	// (0x000105e6) cale_month_corner_pane

0x1106,	// (0x00010605) cale_month_day_heading_pane_ParamLimits

0x1106,	// (0x00010605) cale_month_day_heading_pane

0x1170,	// (0x0001066f) cale_month_pane_g1_ParamLimits

0x1170,	// (0x0001066f) cale_month_pane_g1

0x11b7,	// (0x000106b6) cale_month_pane_g2_ParamLimits

0x11b7,	// (0x000106b6) cale_month_pane_g2

0x11f3,	// (0x000106f2) cale_month_pane_g3_ParamLimits

0x11f3,	// (0x000106f2) cale_month_pane_g3

0x1247,	// (0x00010746) cale_month_pane_g4_ParamLimits

0x1247,	// (0x00010746) cale_month_pane_g4

0x129b,	// (0x0001079a) cale_month_pane_g5_ParamLimits

0x129b,	// (0x0001079a) cale_month_pane_g5

0x12f7,	// (0x000107f6) cale_month_pane_g6_ParamLimits

0x12f7,	// (0x000107f6) cale_month_pane_g6

0x135f,	// (0x0001085e) cale_month_pane_g7_ParamLimits

0x135f,	// (0x0001085e) cale_month_pane_g7

0x13cb,	// (0x000108ca) cale_month_pane_g8_ParamLimits

0x13cb,	// (0x000108ca) cale_month_pane_g8

0x1437,	// (0x00010936) cale_month_pane_g9_ParamLimits

0x1437,	// (0x00010936) cale_month_pane_g9

0x149b,	// (0x0001099a) cale_month_pane_g10_ParamLimits

0x149b,	// (0x0001099a) cale_month_pane_g10

0x14ed,	// (0x000109ec) cale_month_pane_g11_ParamLimits

0x14ed,	// (0x000109ec) cale_month_pane_g11

0x153f,	// (0x00010a3e) cale_month_pane_g12_ParamLimits

0x153f,	// (0x00010a3e) cale_month_pane_g12

0x1597,	// (0x00010a96) cale_month_pane_g13_ParamLimits

0x1597,	// (0x00010a96) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0001e6fe) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0001e6fe) cale_month_pane_g

0x15ef,	// (0x00010aee) cale_month_week_pane

0x1613,	// (0x00010b12) grid_cale_month_pane_ParamLimits

0x1613,	// (0x00010b12) grid_cale_month_pane

0x1674,	// (0x00010b73) cale_month_day_heading_pane_t1

0x16fa,	// (0x00010bf9) cale_month_day_heading_pane_t2

0x1773,	// (0x00010c72) cale_month_day_heading_pane_t3

0x17ec,	// (0x00010ceb) cale_month_day_heading_pane_t4

0x186d,	// (0x00010d6c) cale_month_day_heading_pane_t5

0x18f6,	// (0x00010df5) cale_month_day_heading_pane_t6

0x1987,	// (0x00010e86) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0001e719) cale_month_day_heading_pane_t

0x9e4f,	// (0x0001934e) bg_cale_side_pane_cp01

0x1a18,	// (0x00010f17) cale_month_week_pane_t1

0x1a31,	// (0x00010f30) cale_month_week_pane_t2

0x1a4a,	// (0x00010f49) cale_month_week_pane_t3

0x1a63,	// (0x00010f62) cale_month_week_pane_t4

0x1a7c,	// (0x00010f7b) cale_month_week_pane_t5

0x1a95,	// (0x00010f94) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0001e728) cale_month_week_pane_t

0x1aba,	// (0x00010fb9) cell_cale_month_pane_ParamLimits

0x1aba,	// (0x00010fb9) cell_cale_month_pane

0xa1f9,	// (0x000196f8) cell_cale_month_pane_g1

0x1bf8,	// (0x000110f7) cell_cale_month_pane_t1_ParamLimits

0x1bf8,	// (0x000110f7) cell_cale_month_pane_t1

0x9e5d,	// (0x0001935c) grid_highlight_pane_cp08

0x9b92,	// (0x00019091) main_smil_g1

0x1c24,	// (0x00011123) smil_status_pane

0xa205,	// (0x00019704) smil_text_pane

0xbb2b,	// (0x0001b02a) bg_popup_call3_rect_pane_g8

0xbb33,	// (0x0001b032) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001e9c1) bg_popup_call3_rect_pane_g

0xbd36,	// (0x0001b235) smil_status_volume_pane_g1

0xa20f,	// (0x0001970e) smil_status_pane_t1

0xbd69,	// (0x0001b268) volume_smil_pane

0xa226,	// (0x00019725) list_smil_text_pane

0x1c39,	// (0x00011138) scroll_pane_cp011

0x1c44,	// (0x00011143) smil_text_list_pane_t1_ParamLimits

0x1c44,	// (0x00011143) smil_text_list_pane_t1

0xa230,	// (0x0001972f) aid_volume_smil_ParamLimits

0xa230,	// (0x0001972f) aid_volume_smil

0x9b92,	// (0x00019091) smil_volume_pane_g1

0x9b92,	// (0x00019091) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0001e735) smil_volume_pane_g

0x0369,	// (0x0000f868) listscroll_cale_day_pane

0xa252,	// (0x00019751) bg_cale_pane

0xa26a,	// (0x00019769) list_cale_pane

0xa28d,	// (0x0001978c) scroll_pane_cp09

0xa29e,	// (0x0001979d) cale_bg_pane_g1

0xa2a6,	// (0x000197a5) cale_bg_pane_g2

0xa2ae,	// (0x000197ad) cale_bg_pane_g3

0xa2b6,	// (0x000197b5) cale_bg_pane_g4

0xa2be,	// (0x000197bd) cale_bg_pane_g5

0xa2c6,	// (0x000197c5) cale_bg_pane_g6

0xa2ce,	// (0x000197cd) cale_bg_pane_g7

0xa2d6,	// (0x000197d5) cale_bg_pane_g8

0xa2de,	// (0x000197dd) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0001e73a) cale_bg_pane_g

0xa2e6,	// (0x000197e5) list_cale_time_pane_ParamLimits

0xa2e6,	// (0x000197e5) list_cale_time_pane

0xa2fd,	// (0x000197fc) list_cale_time_pane_g1_ParamLimits

0xa2fd,	// (0x000197fc) list_cale_time_pane_g1

0xa309,	// (0x00019808) list_cale_time_pane_g2_ParamLimits

0xa309,	// (0x00019808) list_cale_time_pane_g2

0x1c98,	// (0x00011197) list_cale_time_pane_g3_ParamLimits

0x1c98,	// (0x00011197) list_cale_time_pane_g3

0x1ca6,	// (0x000111a5) list_cale_time_pane_g4_ParamLimits

0x1ca6,	// (0x000111a5) list_cale_time_pane_g4

0x1cb4,	// (0x000111b3) list_cale_time_pane_g5_ParamLimits

0x1cb4,	// (0x000111b3) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0001e74d) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0001e74d) list_cale_time_pane_g

0xa323,	// (0x00019822) list_cale_time_pane_t1_ParamLimits

0xa323,	// (0x00019822) list_cale_time_pane_t1

0xa34b,	// (0x0001984a) list_cale_time_pane_t2_ParamLimits

0xa34b,	// (0x0001984a) list_cale_time_pane_t2

0x1f66,	// (0x00011465) aid_blid_cardinal_pane

0x1fa4,	// (0x000114a3) compass_pane_t4

0xa373,	// (0x00019872) list_cale_time_pane_t4_ParamLimits

0xa373,	// (0x00019872) list_cale_time_pane_t4

0x1fb2,	// (0x000114b1) compass_pane_t5

0x1fc2,	// (0x000114c1) compass_pane_t6

0x1fd0,	// (0x000114cf) compass_pane_t7

0xa800,	// (0x00019cff) navi_pane_cc_t1

0xa95f,	// (0x00019e5e) aid_phob_thumbnail_center_pane

0x2573,	// (0x00011a72) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0001e75a) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0001e75a) list_cale_time_pane_t

0x9576,	// (0x00018a75) bg_popup_window_pane_cp02_ParamLimits

0x9576,	// (0x00018a75) bg_popup_window_pane_cp02

0xa39b,	// (0x0001989a) heading_pane_cp01_ParamLimits

0xa39b,	// (0x0001989a) heading_pane_cp01

0xa3a7,	// (0x000198a6) loc_req_pane_ParamLimits

0xa3a7,	// (0x000198a6) loc_req_pane

0xa3b7,	// (0x000198b6) loc_type_pane_ParamLimits

0xa3b7,	// (0x000198b6) loc_type_pane

0xa3c9,	// (0x000198c8) loc_type_pane_t1_ParamLimits

0xa3c9,	// (0x000198c8) loc_type_pane_t1

0xa3db,	// (0x000198da) loc_type_pane_t2_ParamLimits

0xa3db,	// (0x000198da) loc_type_pane_t2

0xa3ed,	// (0x000198ec) loc_type_pane_t3_ParamLimits

0xa3ed,	// (0x000198ec) loc_type_pane_t3

0x0002,

0xf262,	// (0x0001e761) loc_type_pane_t_ParamLimits

0xf262,	// (0x0001e761) loc_type_pane_t

0xa3ff,	// (0x000198fe) list_loc_req_pane

0xa409,	// (0x00019908) scroll_pane_cp012

0x1cc2,	// (0x000111c1) list_single_loc_request_popup_menu_pane_ParamLimits

0x1cc2,	// (0x000111c1) list_single_loc_request_popup_menu_pane

0xa414,	// (0x00019913) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa414,	// (0x00019913) list_single_loc_request_popup_menu_pane_g1

0xa420,	// (0x0001991f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa420,	// (0x0001991f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0001e768) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0001e768) list_single_loc_request_popup_menu_pane_g

0xa42c,	// (0x0001992b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa42c,	// (0x0001992b) list_single_loc_request_popup_menu_pane_t1

0x9b7a,	// (0x00019079) bg_popup_window_pane_cp03_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_window_pane_cp03

0xa442,	// (0x00019941) heading_loc_req_pane_ParamLimits

0xa442,	// (0x00019941) heading_loc_req_pane

0x1ccf,	// (0x000111ce) popup_dyc_status_message_window_g1_ParamLimits

0x1ccf,	// (0x000111ce) popup_dyc_status_message_window_g1

0x1ce3,	// (0x000111e2) popup_dyc_status_message_window_t1_ParamLimits

0x1ce3,	// (0x000111e2) popup_dyc_status_message_window_t1

0x1cf8,	// (0x000111f7) popup_dyc_status_message_window_t2_ParamLimits

0x1cf8,	// (0x000111f7) popup_dyc_status_message_window_t2

0x1d0d,	// (0x0001120c) popup_dyc_status_message_window_t3_ParamLimits

0x1d0d,	// (0x0001120c) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0001e76d) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0001e76d) popup_dyc_status_message_window_t

0x991f,	// (0x00018e1e) bg_heading_pane_cp01

0xa44e,	// (0x0001994d) heading_loc_req_pane_g1

0xa456,	// (0x00019955) heading_loc_req_pane_g2

0xa45e,	// (0x0001995d) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0001e774) heading_loc_req_pane_g

0xa466,	// (0x00019965) heading_loc_req_pane_t1

0xa486,	// (0x00019985) bg_popup_sub_pane_cp01_ParamLimits

0xa486,	// (0x00019985) bg_popup_sub_pane_cp01

0xa494,	// (0x00019993) popup_cale_events_window_g1_ParamLimits

0xa494,	// (0x00019993) popup_cale_events_window_g1

0xa4b4,	// (0x000199b3) popup_cale_events_window_g2_ParamLimits

0xa4b4,	// (0x000199b3) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0001e796) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0001e796) popup_cale_events_window_g

0xa4d4,	// (0x000199d3) popup_cale_events_window_t1_ParamLimits

0xa4d4,	// (0x000199d3) popup_cale_events_window_t1

0xa4e6,	// (0x000199e5) popup_cale_events_window_t2_ParamLimits

0xa4e6,	// (0x000199e5) popup_cale_events_window_t2

0xa524,	// (0x00019a23) popup_cale_events_window_t3_ParamLimits

0xa524,	// (0x00019a23) popup_cale_events_window_t3

0xa55e,	// (0x00019a5d) popup_cale_events_window_t4_ParamLimits

0xa55e,	// (0x00019a5d) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0001e79b) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0001e79b) popup_cale_events_window_t

0x1d35,	// (0x00011234) call_type_pane

0x1d45,	// (0x00011244) popup_call_status_window_g1

0x1d59,	// (0x00011258) popup_call_status_window_g2

0x1d6d,	// (0x0001126c) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0001e7a4) popup_call_status_window_g

0xa594,	// (0x00019a93) call_type_pane_g1

0xa59d,	// (0x00019a9c) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0001e7ab) call_type_pane_g

0x991f,	// (0x00018e1e) bg_popup_sub_pane_cp02

0xa5a6,	// (0x00019aa5) listscroll_popup_wml_pane

0xa5ae,	// (0x00019aad) list_wml_pane

0xa5b8,	// (0x00019ab7) scroll_pane_cp013

0xa5c3,	// (0x00019ac2) list_single_graphic_popup_wml_pane_ParamLimits

0xa5c3,	// (0x00019ac2) list_single_graphic_popup_wml_pane

0x9b92,	// (0x00019091) list_single_graphic_popup_wml_pane_g1

0xa5d7,	// (0x00019ad6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0001e7b0) list_single_graphic_popup_wml_pane_g

0xa5df,	// (0x00019ade) list_single_graphic_popup_wml_pane_t1

0xa5f5,	// (0x00019af4) aid_call_pane

0x9b72,	// (0x00019071) popup_clock_analogue_window_g1

0x9b72,	// (0x00019071) popup_clock_analogue_window_g2

0xa5fd,	// (0x00019afc) popup_clock_analogue_window_g3

0xa5fd,	// (0x00019afc) popup_clock_analogue_window_g4

0x9b92,	// (0x00019091) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0001e7b5) popup_clock_analogue_window_g

0xa605,	// (0x00019b04) popup_clock_analogue_window_t1

0xa613,	// (0x00019b12) clock_digital_number_pane_ParamLimits

0xa613,	// (0x00019b12) clock_digital_number_pane

0xa61f,	// (0x00019b1e) clock_digital_number_pane_cp02_ParamLimits

0xa61f,	// (0x00019b1e) clock_digital_number_pane_cp02

0xa62b,	// (0x00019b2a) clock_digital_number_pane_cp03_ParamLimits

0xa62b,	// (0x00019b2a) clock_digital_number_pane_cp03

0xa637,	// (0x00019b36) clock_digital_number_pane_cp04_ParamLimits

0xa637,	// (0x00019b36) clock_digital_number_pane_cp04

0xa643,	// (0x00019b42) clock_digital_separator_pane_ParamLimits

0xa643,	// (0x00019b42) clock_digital_separator_pane

0xa64f,	// (0x00019b4e) popup_clock_digital_window_t1

0x9b92,	// (0x00019091) clock_digital_number_pane_g1

0x9b92,	// (0x00019091) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0001e735) clock_digital_number_pane_g

0x9b92,	// (0x00019091) clock_digital_separator_pane_g1

0x9b92,	// (0x00019091) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0001e735) clock_digital_separator_pane_g

0x991f,	// (0x00018e1e) bg_popup_window_pane_cp04

0xa66c,	// (0x00019b6b) heading_pane_cp03

0x9eaa,	// (0x000193a9) listscroll_popup_gms_pane

0x991f,	// (0x00018e1e) grid_large_graphic_popup_pane

0xa675,	// (0x00019b74) listscroll_popup_gms_pane_g1

0xa67e,	// (0x00019b7d) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0001e7c0) listscroll_popup_gms_pane_g

0xa687,	// (0x00019b86) scroll_pane_cp014

0x9be7,	// (0x000190e6) cell_large_graphic_popup_pane_ParamLimits

0x9be7,	// (0x000190e6) cell_large_graphic_popup_pane

0x9bf5,	// (0x000190f4) cell_large_graphic_popup_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) cell_large_graphic_popup_pane_g1

0xa690,	// (0x00019b8f) cell_large_graphic_popup_pane_g2_ParamLimits

0xa690,	// (0x00019b8f) cell_large_graphic_popup_pane_g2

0xa69e,	// (0x00019b9d) cell_large_graphic_popup_pane_g3_ParamLimits

0xa69e,	// (0x00019b9d) cell_large_graphic_popup_pane_g3

0xa6ac,	// (0x00019bab) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6ac,	// (0x00019bab) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0001e7c5) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0001e7c5) cell_large_graphic_popup_pane_g

0x991f,	// (0x00018e1e) grid_highlight_pane_cp010

0x9b92,	// (0x00019091) bg_popup_call_pane_g1

0xa6bd,	// (0x00019bbc) list_single_graphic_popup_conf_pane_ParamLimits

0xa6bd,	// (0x00019bbc) list_single_graphic_popup_conf_pane

0xa6cf,	// (0x00019bce) list_highlight_pane_cp01

0xa6d8,	// (0x00019bd7) list_single_graphic_popup_conf_pane_g1

0xa6e0,	// (0x00019bdf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0001e7ce) list_single_graphic_popup_conf_pane_g

0xa6e8,	// (0x00019be7) list_single_graphic_popup_conf_pane_t1

0xa6f6,	// (0x00019bf5) linegrid_cams_pane_g1

0x1d7d,	// (0x0001127c) linegrid_cams_pane_g2

0x9e90,	// (0x0001938f) linegrid_cams_pane_g3

0xa6ff,	// (0x00019bfe) linegrid_cams_pane_g4

0x1d86,	// (0x00011285) linegrid_cams_pane_g5

0x1d8f,	// (0x0001128e) linegrid_cams_pane_g6

0x9e99,	// (0x00019398) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0001e7d3) linegrid_cams_pane_g

0xa708,	// (0x00019c07) popup_clock_analogue_window

0xa708,	// (0x00019c07) popup_clock_digital_window

0x991f,	// (0x00018e1e) popup_phob_thumbnail_window

0x9b92,	// (0x00019091) call_video_uplink_pane_g1

0xa711,	// (0x00019c10) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0001e7e2) call_video_uplink_pane_g

0xa719,	// (0x00019c18) video_uplink_pane

0xa721,	// (0x00019c20) mce_image_pane_g1

0x1d9a,	// (0x00011299) mce_image_pane_g2

0x1da4,	// (0x000112a3) mce_image_pane_g3

0x1dae,	// (0x000112ad) mce_image_pane_g4

0x1db6,	// (0x000112b5) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0001e7e7) mce_image_pane_g

0xa72b,	// (0x00019c2a) control_top_pane_stacon_cp01_ParamLimits

0xa72b,	// (0x00019c2a) control_top_pane_stacon_cp01

0xa73f,	// (0x00019c3e) uni_indicator_pane_stacon_cp01_ParamLimits

0xa73f,	// (0x00019c3e) uni_indicator_pane_stacon_cp01

0xa750,	// (0x00019c4f) bg_popup_sub_pane_cp03

0x1dbe,	// (0x000112bd) chi_dic_find_pane

0x1dc6,	// (0x000112c5) listscroll_chi_dic_pane

0x1dcf,	// (0x000112ce) main_pane_chidic_g1

0x1de2,	// (0x000112e1) chi_dic_find_pane_t1

0xa75a,	// (0x00019c59) find_chidic_pane

0xa763,	// (0x00019c62) chi_dic_list_pane_ParamLimits

0xa763,	// (0x00019c62) chi_dic_list_pane

0xa774,	// (0x00019c73) scroll_pane_cp020

0x1df0,	// (0x000112ef) find_chidic_pane_t1

0x991f,	// (0x00018e1e) input_focus_pane_cp06

0x1dff,	// (0x000112fe) list_chi_dic_pane_ParamLimits

0x1dff,	// (0x000112fe) list_chi_dic_pane

0x1e11,	// (0x00011310) list_chi_dic_pane_t1_ParamLimits

0x1e11,	// (0x00011310) list_chi_dic_pane_t1

0x991f,	// (0x00018e1e) list_highlight_pane_cp020

0xa77c,	// (0x00019c7b) bg_cale_heading_pane_g1

0x1e24,	// (0x00011323) bg_cale_heading_pane_g2

0x1e2c,	// (0x0001132b) bg_cale_heading_pane_g3

0x1e34,	// (0x00011333) bg_cale_heading_pane_g4

0x1e3e,	// (0x0001133d) bg_cale_heading_pane_g5

0x1e48,	// (0x00011347) bg_cale_heading_pane_g6

0x1e50,	// (0x0001134f) bg_cale_heading_pane_g7

0x1e58,	// (0x00011357) bg_cale_heading_pane_g8

0x1e62,	// (0x00011361) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0001e7f2) bg_cale_heading_pane_g

0xa77c,	// (0x00019c7b) bg_cale_side_pane_g1

0x1e6c,	// (0x0001136b) bg_cale_side_pane_g2

0x1e76,	// (0x00011375) bg_cale_side_pane_g3

0x1e80,	// (0x0001137f) bg_cale_side_pane_g4

0x1e8a,	// (0x00011389) bg_cale_side_pane_g5

0x1e94,	// (0x00011393) bg_cale_side_pane_g6

0x1e9e,	// (0x0001139d) bg_cale_side_pane_g7

0x1ea8,	// (0x000113a7) bg_cale_side_pane_g8

0x1eb0,	// (0x000113af) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0001e805) bg_cale_side_pane_g

0x1eb8,	// (0x000113b7) popup_call_status_window_ParamLimits

0x1eb8,	// (0x000113b7) popup_call_status_window

0xa784,	// (0x00019c83) stacon_top_pane

0xa78c,	// (0x00019c8b) status_pane_ParamLimits

0xa78c,	// (0x00019c8b) status_pane

0xa7a1,	// (0x00019ca0) status_small_pane

0xa7a9,	// (0x00019ca8) control_pane

0x991f,	// (0x00018e1e) stacon_bottom_pane

0xa7b1,	// (0x00019cb0) list_single_mce_smart_pane_t1_ParamLimits

0xa7b1,	// (0x00019cb0) list_single_mce_smart_pane_t1

0xa7c4,	// (0x00019cc3) list_single_mce_smart_pane_t2_ParamLimits

0xa7c4,	// (0x00019cc3) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0001e818) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0001e818) list_single_mce_smart_pane_t

0x1f05,	// (0x00011404) compass_pane

0x1f10,	// (0x0001140f) main_location2_pane_t1

0x1f26,	// (0x00011425) main_location2_pane_t2

0x1f3c,	// (0x0001143b) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0001e81d) main_location2_pane_t

0xa7e3,	// (0x00019ce2) compass_pane_g1_ParamLimits

0xa7e3,	// (0x00019ce2) compass_pane_g1

0x1f86,	// (0x00011485) compass_pane_t1

0x1f95,	// (0x00011494) compass_pane_t2

0x0005,

0xf327,	// (0x0001e826) compass_pane_t

0x1fe0,	// (0x000114df) text_secondary_cp61

0xa7f7,	// (0x00019cf6) navi_pane_cams_g5

0xa81a,	// (0x00019d19) navi_pane_im_t1

0xa828,	// (0x00019d27) navi_pane_mp_g1_ParamLimits

0xa828,	// (0x00019d27) navi_pane_mp_g1

0xa83c,	// (0x00019d3b) navi_pane_mp_g2_ParamLimits

0xa83c,	// (0x00019d3b) navi_pane_mp_g2

0xa848,	// (0x00019d47) navi_pane_mp_g3_ParamLimits

0xa848,	// (0x00019d47) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0001e83a) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0001e83a) navi_pane_mp_g

0xa854,	// (0x00019d53) navi_pane_mp_t1

0xa862,	// (0x00019d61) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0001e841) navi_pane_mp_t

0xa89e,	// (0x00019d9d) navi_pane_vt_g1

0xa854,	// (0x00019d53) navi_pane_vt_t1

0xa8a6,	// (0x00019da5) navi_slider_pane

0x9eaa,	// (0x000193a9) zooming_pane

0xa8ae,	// (0x00019dad) navi_slider_pane_g1

0xa8b7,	// (0x00019db6) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0001e848) navi_slider_pane_g

0xa8e4,	// (0x00019de3) aid_levels_zoom

0xa8ec,	// (0x00019deb) zooming_pane_g1

0xa8f4,	// (0x00019df3) zooming_pane_g2

0xa8f4,	// (0x00019df3) zooming_pane_g3

0x0002,

0xf358,	// (0x0001e857) zooming_pane_g

0xa8fc,	// (0x00019dfb) level_10_zoom

0xa905,	// (0x00019e04) level_11_zoom

0xa90e,	// (0x00019e0d) level_1_zoom

0xa917,	// (0x00019e16) level_2_zoom

0xa920,	// (0x00019e1f) level_3_zoom

0xa929,	// (0x00019e28) level_4_zoom

0xa932,	// (0x00019e31) level_5_zoom

0xa93b,	// (0x00019e3a) level_6_zoom

0xa944,	// (0x00019e43) level_7_zoom

0xa94d,	// (0x00019e4c) level_8_zoom

0xa956,	// (0x00019e55) level_9_zoom

0xa967,	// (0x00019e66) popup_phob_thumbnail_window_g1

0xa96f,	// (0x00019e6e) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0001e85e) popup_phob_thumbnail_window_g

0x2c6e,	// (0x0001216d) level_1_location

0x2c76,	// (0x00012175) level_2_location

0x2c7e,	// (0x0001217d) level_3_location

0x2c88,	// (0x00012187) level_4_location

0x9eaa,	// (0x000193a9) level_5_location

0x2129,	// (0x00011628) mce_icon_pane_g1

0x2133,	// (0x00011632) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0001e863) mce_icon_pane_g

0xa977,	// (0x00019e76) main_mup_pane_g1_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g1

0xa977,	// (0x00019e76) main_mup_pane_g2_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g2

0xa977,	// (0x00019e76) main_mup_pane_g3_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g3

0xa977,	// (0x00019e76) main_mup_pane_g4_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g4

0xa977,	// (0x00019e76) main_mup_pane_g5_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g5

0xa977,	// (0x00019e76) main_mup_pane_g6_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g6

0xa977,	// (0x00019e76) main_mup_pane_g7_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g7

0xa977,	// (0x00019e76) main_mup_pane_g8_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g8

0xa977,	// (0x00019e76) main_mup_pane_g9_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g9

0xa977,	// (0x00019e76) main_mup_pane_g10_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g10

0xa977,	// (0x00019e76) main_mup_pane_g11_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g11

0x9bf5,	// (0x000190f4) main_mup_pane_g12_ParamLimits

0x9bf5,	// (0x000190f4) main_mup_pane_g12

0xa977,	// (0x00019e76) main_mup_pane_g13_ParamLimits

0xa977,	// (0x00019e76) main_mup_pane_g13

0x000c,

0xf369,	// (0x0001e868) main_mup_pane_g_ParamLimits

0xf369,	// (0x0001e868) main_mup_pane_g

0xa985,	// (0x00019e84) main_mup_pane_t1_ParamLimits

0xa985,	// (0x00019e84) main_mup_pane_t1

0xa985,	// (0x00019e84) main_mup_pane_t2_ParamLimits

0xa985,	// (0x00019e84) main_mup_pane_t2

0xa985,	// (0x00019e84) main_mup_pane_t3_ParamLimits

0xa985,	// (0x00019e84) main_mup_pane_t3

0x9ebc,	// (0x000193bb) main_mup_pane_t4_ParamLimits

0x9ebc,	// (0x000193bb) main_mup_pane_t4

0x9ebc,	// (0x000193bb) main_mup_pane_t5_ParamLimits

0x9ebc,	// (0x000193bb) main_mup_pane_t5

0xa999,	// (0x00019e98) main_mup_pane_t6_ParamLimits

0xa999,	// (0x00019e98) main_mup_pane_t6

0x0005,

0xf384,	// (0x0001e883) main_mup_pane_t_ParamLimits

0xf384,	// (0x0001e883) main_mup_pane_t

0x9be7,	// (0x000190e6) mup_progress_pane_ParamLimits

0x9be7,	// (0x000190e6) mup_progress_pane

0xa9ad,	// (0x00019eac) mup_visualizer_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup_visualizer_pane

0xa9ad,	// (0x00019eac) mup_volume_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup_volume_pane

0x9c03,	// (0x00019102) mup_visualizer_pane_g1_ParamLimits

0x9c03,	// (0x00019102) mup_visualizer_pane_g1

0xa9bb,	// (0x00019eba) mup_visualizer_pane_g2_ParamLimits

0xa9bb,	// (0x00019eba) mup_visualizer_pane_g2

0x9bf5,	// (0x000190f4) mup_visualizer_pane_g3_ParamLimits

0x9bf5,	// (0x000190f4) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0001e890) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0001e890) mup_visualizer_pane_g

0x9eea,	// (0x000193e9) mup_volume_pane_g1

0x9eea,	// (0x000193e9) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0001e897) mup_volume_pane_g

0x9eea,	// (0x000193e9) mup_progress_pane_g1

0x9eea,	// (0x000193e9) mup_progress_pane_g2

0x9eea,	// (0x000193e9) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0001e89c) mup_progress_pane_g

0x991f,	// (0x00018e1e) bg_popup_window_pane_cp05

0xa9c9,	// (0x00019ec8) heading_pane_cp02_ParamLimits

0xa9c9,	// (0x00019ec8) heading_pane_cp02

0xa9e5,	// (0x00019ee4) list_popup_blid_pane

0xa9ed,	// (0x00019eec) list_blid_sat_info_pane_ParamLimits

0xa9ed,	// (0x00019eec) list_blid_sat_info_pane

0xaa00,	// (0x00019eff) list_blid_sat_info_pane_g1

0xaa08,	// (0x00019f07) list_blid_sat_info_pane_t1

0x2247,	// (0x00011746) mup_equalizer_pane_ParamLimits

0x2247,	// (0x00011746) mup_equalizer_pane

0x2268,	// (0x00011767) mup_equalizer_pane_cp1_ParamLimits

0x2268,	// (0x00011767) mup_equalizer_pane_cp1

0x2289,	// (0x00011788) mup_equalizer_pane_cp2_ParamLimits

0x2289,	// (0x00011788) mup_equalizer_pane_cp2

0x22ae,	// (0x000117ad) mup_equalizer_pane_cp3_ParamLimits

0x22ae,	// (0x000117ad) mup_equalizer_pane_cp3

0x22d7,	// (0x000117d6) mup_equalizer_pane_cp4_ParamLimits

0x22d7,	// (0x000117d6) mup_equalizer_pane_cp4

0x2300,	// (0x000117ff) mup_equalizer_pane_cp5

0x2318,	// (0x00011817) mup_equalizer_pane_cp6

0x2330,	// (0x0001182f) mup_equalizer_pane_cp7

0xbbab,	// (0x0001b0aa) bg_popup_call_poc_act_pane_g9

0xbbb3,	// (0x0001b0b2) bg_popup_call_poc_act_pane_g10

0xbbbb,	// (0x0001b0ba) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b7a,	// (0x00019079) mup_scale_pane

0x9b92,	// (0x00019091) mup_scale_pane_g1

0xaa16,	// (0x00019f15) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0001e8b8) mup_scale_pane_g

0xaa3a,	// (0x00019f39) msg_data_pane

0xaa42,	// (0x00019f41) scroll_pane_cp017

0x235a,	// (0x00011859) bg_list_pane_cp04_ParamLimits

0x235a,	// (0x00011859) bg_list_pane_cp04

0xaa4a,	// (0x00019f49) msg_data_pane_g1

0x2380,	// (0x0001187f) msg_data_pane_g2

0x238a,	// (0x00011889) msg_data_pane_g3

0x2394,	// (0x00011893) msg_data_pane_g4

0x239c,	// (0x0001189b) msg_data_pane_g5

0x23a4,	// (0x000118a3) msg_data_pane_g6

0x23ac,	// (0x000118ab) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0001e8c7) msg_data_pane_g

0x23b4,	// (0x000118b3) msg_text_pane_ParamLimits

0x23b4,	// (0x000118b3) msg_text_pane

0x23e7,	// (0x000118e6) qrid_highlight_pane_cp011_ParamLimits

0x23e7,	// (0x000118e6) qrid_highlight_pane_cp011

0x991f,	// (0x00018e1e) msg_body_pane

0x991f,	// (0x00018e1e) msg_header_pane

0xaa5b,	// (0x00019f5a) input_focus_pane_cp07

0x240b,	// (0x0001190a) msg_header_pane_t1_ParamLimits

0x240b,	// (0x0001190a) msg_header_pane_t1

0x2421,	// (0x00011920) msg_header_pane_t2_ParamLimits

0x2421,	// (0x00011920) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0001e8db) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0001e8db) msg_header_pane_t

0xaa70,	// (0x00019f6f) msg_body_pane_g1

0x2438,	// (0x00011937) msg_body_pane_t1_ParamLimits

0x2438,	// (0x00011937) msg_body_pane_t1

0x2469,	// (0x00011968) msg_body_pane_t2_ParamLimits

0x2469,	// (0x00011968) msg_body_pane_t2

0x247b,	// (0x0001197a) msg_body_pane_t3_ParamLimits

0x247b,	// (0x0001197a) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0001e8e0) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0001e8e0) msg_body_pane_t

0x24c7,	// (0x000119c6) main_viewer_pane_g1_ParamLimits

0x24c7,	// (0x000119c6) main_viewer_pane_g1

0x24d5,	// (0x000119d4) main_viewer_pane_g2_ParamLimits

0x24d5,	// (0x000119d4) main_viewer_pane_g2

0x24e3,	// (0x000119e2) main_viewer_pane_g3_ParamLimits

0x24e3,	// (0x000119e2) main_viewer_pane_g3

0x24f2,	// (0x000119f1) main_viewer_pane_g4_ParamLimits

0x24f2,	// (0x000119f1) main_viewer_pane_g4

0xaa90,	// (0x00019f8f) main_viewer_pane_g5_ParamLimits

0xaa90,	// (0x00019f8f) main_viewer_pane_g5

0xaa90,	// (0x00019f8f) main_viewer_pane_g7_ParamLimits

0xaa90,	// (0x00019f8f) main_viewer_pane_g7

0xaaa2,	// (0x00019fa1) main_viewer_pane_g8_ParamLimits

0xaaa2,	// (0x00019fa1) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0001e8f0) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0001e8f0) main_viewer_pane_g

0xaaba,	// (0x00019fb9) viewer_content_pane_ParamLimits

0xaaba,	// (0x00019fb9) viewer_content_pane

0x2530,	// (0x00011a2f) main_postcard_pane_g1_ParamLimits

0x2530,	// (0x00011a2f) main_postcard_pane_g1

0x2546,	// (0x00011a45) main_postcard_pane_g2_ParamLimits

0x2546,	// (0x00011a45) main_postcard_pane_g2

0x255c,	// (0x00011a5b) main_postcard_pane_g3_ParamLimits

0x255c,	// (0x00011a5b) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0001e901) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0001e901) main_postcard_pane_g

0x2573,	// (0x00011a72) main_postcard_pane_g4

0xbd49,	// (0x0001b248) smil_status_volume_pane_g2

0x25b6,	// (0x00011ab5) postcard_pane_ParamLimits

0x25b6,	// (0x00011ab5) postcard_pane

0xaac8,	// (0x00019fc7) postcard_pane_g1_ParamLimits

0xaac8,	// (0x00019fc7) postcard_pane_g1

0x2606,	// (0x00011b05) postcard_pane_g2_ParamLimits

0x2606,	// (0x00011b05) postcard_pane_g2

0x2612,	// (0x00011b11) postcard_pane_g3_ParamLimits

0x2612,	// (0x00011b11) postcard_pane_g3

0xaad6,	// (0x00019fd5) postcard_pane_g4_ParamLimits

0xaad6,	// (0x00019fd5) postcard_pane_g4

0x261e,	// (0x00011b1d) postcard_pane_g5_ParamLimits

0x261e,	// (0x00011b1d) postcard_pane_g5

0x2633,	// (0x00011b32) postcard_pane_g6_ParamLimits

0x2633,	// (0x00011b32) postcard_pane_g6

0xaac8,	// (0x00019fc7) postcard_pane_g7_ParamLimits

0xaac8,	// (0x00019fc7) postcard_pane_g7

0x0006,

0xf40f,	// (0x0001e90e) postcard_pane_g_ParamLimits

0xf40f,	// (0x0001e90e) postcard_pane_g

0x264b,	// (0x00011b4a) main_mp2_pane_g1_ParamLimits

0x264b,	// (0x00011b4a) main_mp2_pane_g1

0x2659,	// (0x00011b58) main_mp2_pane_g2_ParamLimits

0x2659,	// (0x00011b58) main_mp2_pane_g2

0x2665,	// (0x00011b64) main_mp2_pane_g3_ParamLimits

0x2665,	// (0x00011b64) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0001e91d) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0001e91d) main_mp2_pane_g

0x2671,	// (0x00011b70) main_mp2_pane_t1_ParamLimits

0x2671,	// (0x00011b70) main_mp2_pane_t1

0x2688,	// (0x00011b87) main_mp2_pane_t2_ParamLimits

0x2688,	// (0x00011b87) main_mp2_pane_t2

0x269a,	// (0x00011b99) main_mp2_pane_t3_ParamLimits

0x269a,	// (0x00011b99) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0001e924) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0001e924) main_mp2_pane_t

0xaae4,	// (0x00019fe3) pec_content_pane_ParamLimits

0xaae4,	// (0x00019fe3) pec_content_pane

0xa05e,	// (0x0001955d) scroll_pane_cp015

0xaaf6,	// (0x00019ff5) pec_attribute_pane_ParamLimits

0xaaf6,	// (0x00019ff5) pec_attribute_pane

0x26ac,	// (0x00011bab) pec_content_pane_g1_ParamLimits

0x26ac,	// (0x00011bab) pec_content_pane_g1

0xab06,	// (0x0001a005) pec_content_pane_t1_ParamLimits

0xab06,	// (0x0001a005) pec_content_pane_t1

0xab18,	// (0x0001a017) pec_content_pane_t2_ParamLimits

0xab18,	// (0x0001a017) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0001e92b) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0001e92b) pec_content_pane_t

0x26b8,	// (0x00011bb7) list_single_graphic_pane_cp01_ParamLimits

0x26b8,	// (0x00011bb7) list_single_graphic_pane_cp01

0x9b7a,	// (0x00019079) bg_popup_sub_pane_cp04

0xab2a,	// (0x0001a029) popup_mup_playback_window_g1

0xab36,	// (0x0001a035) popup_mup_playback_window_t1

0xab4b,	// (0x0001a04a) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0001e930) popup_mup_playback_window_t

0xab82,	// (0x0001a081) main_image_pane_g1_ParamLimits

0xab82,	// (0x0001a081) main_image_pane_g1

0xabc5,	// (0x0001a0c4) scroll_pane_cp018_ParamLimits

0xabc5,	// (0x0001a0c4) scroll_pane_cp018

0xabdd,	// (0x0001a0dc) scroll_pane_cp016_ParamLimits

0xabdd,	// (0x0001a0dc) scroll_pane_cp016

0x278a,	// (0x00011c89) smil2_image_pane_ParamLimits

0x278a,	// (0x00011c89) smil2_image_pane

0x27c0,	// (0x00011cbf) smil2_root_pane_ParamLimits

0x27c0,	// (0x00011cbf) smil2_root_pane

0x27f8,	// (0x00011cf7) smil2_text_pane_ParamLimits

0x27f8,	// (0x00011cf7) smil2_text_pane

0x991f,	// (0x00018e1e) bg_list_pane_cp06

0xac19,	// (0x0001a118) grid_radio_pane

0x991f,	// (0x00018e1e) bg_popup_window_pane_cp06

0xac23,	// (0x0001a122) main_fmradio_pane_t1

0xbbc3,	// (0x0001b0c2) heading_pane_cp04

0xac31,	// (0x0001a130) main_fmradio_pane_t2

0xbbcb,	// (0x0001b0ca) popup_cale_lunar_info_window_g1

0xac3f,	// (0x0001a13e) main_fmradio_pane_t3

0xbbd3,	// (0x0001b0d2) popup_cale_lunar_info_window_g2

0xac4f,	// (0x0001a14e) main_fmradio_pane_t4

0x0001,

0xac5d,	// (0x0001a15c) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0001ea10) popup_cale_lunar_info_window_g

0xf446,	// (0x0001e945) main_fmradio_pane_t

0xac6b,	// (0x0001a16a) wait_bar_pane_cp03

0xac73,	// (0x0001a172) cell_fmradio_pane_ParamLimits

0xac73,	// (0x0001a172) cell_fmradio_pane

0xaac8,	// (0x00019fc7) cell_fmradio_pane_g1_ParamLimits

0xaac8,	// (0x00019fc7) cell_fmradio_pane_g1

0x991f,	// (0x00018e1e) grid_highlight_pane_cp011

0xac88,	// (0x0001a187) poc_content_pane_ParamLimits

0xac88,	// (0x0001a187) poc_content_pane

0xac9a,	// (0x0001a199) scroll_pane_cp019

0x2888,	// (0x00011d87) popup_call_poc_act_window_ParamLimits

0x2888,	// (0x00011d87) popup_call_poc_act_window

0x28ac,	// (0x00011dab) popup_call_poc_inact_window_ParamLimits

0x28ac,	// (0x00011dab) popup_call_poc_inact_window

0xf4e8,	// (0x0001e9e7) bg_popup_call_poc_act_pane_g

0xbb3b,	// (0x0001b03a) bg_popup_call_poc_inact_pane_g1

0xbb43,	// (0x0001b042) bg_popup_call_poc_inact_pane_g2

0xaca2,	// (0x0001a1a1) popup_call_poc_act_window_g2

0xbb4b,	// (0x0001b04a) bg_popup_call_poc_inact_pane_g3

0xbb53,	// (0x0001b052) bg_popup_call_poc_inact_pane_g4

0xbb5b,	// (0x0001b05a) bg_popup_call_poc_inact_pane_g5

0xacaa,	// (0x0001a1a9) popup_call_poc_act_window_t1_ParamLimits

0xacaa,	// (0x0001a1a9) popup_call_poc_act_window_t1

0xacd2,	// (0x0001a1d1) popup_call_poc_act_window_t2_ParamLimits

0xacd2,	// (0x0001a1d1) popup_call_poc_act_window_t2

0xacfa,	// (0x0001a1f9) popup_call_poc_act_window_t3_ParamLimits

0xacfa,	// (0x0001a1f9) popup_call_poc_act_window_t3

0xad22,	// (0x0001a221) popup_call_poc_act_window_t4_ParamLimits

0xad22,	// (0x0001a221) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0001e950) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0001e950) popup_call_poc_act_window_t

0xbb63,	// (0x0001b062) bg_popup_call_poc_inact_pane_g6

0xbb6b,	// (0x0001b06a) bg_popup_call_poc_inact_pane_g7

0xbb73,	// (0x0001b072) bg_popup_call_poc_inact_pane_g8

0xad34,	// (0x0001a233) popup_call_poc_inact_window_g2

0xbb7b,	// (0x0001b07a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0001e9d4) bg_popup_call_poc_inact_pane_g

0xad3c,	// (0x0001a23b) popup_call_poc_inact_window_t1_ParamLimits

0xad3c,	// (0x0001a23b) popup_call_poc_inact_window_t1

0xad51,	// (0x0001a250) popup_call_poc_inact_window_t2_ParamLimits

0xad51,	// (0x0001a250) popup_call_poc_inact_window_t2

0xad66,	// (0x0001a265) popup_call_poc_inact_window_t3_ParamLimits

0xad66,	// (0x0001a265) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0001e959) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0001e959) popup_call_poc_inact_window_t

0xbcc1,	// (0x0001b1c0) context_pane_ParamLimits

0x318b,	// (0x0001268a) signal_pane_ParamLimits

0x9eaa,	// (0x000193a9) main_call2_pane

0xbc9a,	// (0x0001b199) popup_phob_thumbnail2_window_ParamLimits

0xbc9a,	// (0x0001b199) popup_phob_thumbnail2_window

0xaa78,	// (0x00019f77) aid_hotspot_pointer_arrow_pane

0xaa80,	// (0x00019f7f) aid_hotspot_pointer_hand_pane

0x2c36,	// (0x00012135) phob_pre_status_pane_g5

0x94c9,	// (0x000189c8) cams_zoom_pane_ParamLimits

0x94c9,	// (0x000189c8) image_vga_pane_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g2_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g3_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g4_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g5_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g6_ParamLimits

0x9bf5,	// (0x000190f4) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0001e684) main_camera_pane_g_ParamLimits

0x9ebc,	// (0x000193bb) main_camera_pane_t1_ParamLimits

0x9ebc,	// (0x000193bb) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0001e695) main_camera_pane_t_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_preview_window_pane_cp01

0xad7b,	// (0x0001a27a) popup_phob_thumbnail2_window_g1_ParamLimits

0xad7b,	// (0x0001a27a) popup_phob_thumbnail2_window_g1

0x991f,	// (0x00018e1e) call2_cli_visual_pane

0x28e0,	// (0x00011ddf) popup_call2_audio_conf_window_ParamLimits

0x28e0,	// (0x00011ddf) popup_call2_audio_conf_window

0x2908,	// (0x00011e07) popup_call2_audio_first_window_ParamLimits

0x2908,	// (0x00011e07) popup_call2_audio_first_window

0x299e,	// (0x00011e9d) popup_call2_audio_in_window_ParamLimits

0x299e,	// (0x00011e9d) popup_call2_audio_in_window

0x29ea,	// (0x00011ee9) popup_call2_audio_out_window_ParamLimits

0x29ea,	// (0x00011ee9) popup_call2_audio_out_window

0x2a5c,	// (0x00011f5b) popup_call2_audio_second_window_ParamLimits

0x2a5c,	// (0x00011f5b) popup_call2_audio_second_window

0x2ac2,	// (0x00011fc1) popup_call2_audio_wait_window_ParamLimits

0x2ac2,	// (0x00011fc1) popup_call2_audio_wait_window

0x991f,	// (0x00018e1e) bg_popup_call2_act_pane_cp03

0x9b5c,	// (0x0001905b) list_conf_pane_cp

0xad87,	// (0x0001a286) popup_call2_audio_conf_window_t1

0xad95,	// (0x0001a294) list_single_graphic_popup_conf2_pane_ParamLimits

0xad95,	// (0x0001a294) list_single_graphic_popup_conf2_pane

0xa6cf,	// (0x00019bce) list_highlight_pane_cp04

0xada8,	// (0x0001a2a7) list_single_graphic_popup_conf2_pane_g1

0xa6e0,	// (0x00019bdf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0001e960) list_single_graphic_popup_conf2_pane_g

0xadb2,	// (0x0001a2b1) list_single_graphic_popup_conf2_pane_t1

0xadc0,	// (0x0001a2bf) bg_popup_call2_act_pane_cp01_ParamLimits

0xadc0,	// (0x0001a2bf) bg_popup_call2_act_pane_cp01

0xae4a,	// (0x0001a349) call_type_pane_cp05_ParamLimits

0xae4a,	// (0x0001a349) call_type_pane_cp05

0xae9e,	// (0x0001a39d) popup_call2_audio_second_window_g1_ParamLimits

0xae9e,	// (0x0001a39d) popup_call2_audio_second_window_g1

0xaef2,	// (0x0001a3f1) popup_call2_audio_second_window_g2_ParamLimits

0xaef2,	// (0x0001a3f1) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0001e965) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0001e965) popup_call2_audio_second_window_g

0xaf57,	// (0x0001a456) popup_call2_audio_second_window_t1_ParamLimits

0xaf57,	// (0x0001a456) popup_call2_audio_second_window_t1

0xb012,	// (0x0001a511) popup_call2_audio_second_window_t2_ParamLimits

0xb012,	// (0x0001a511) popup_call2_audio_second_window_t2

0xb065,	// (0x0001a564) popup_call2_audio_second_window_t3_ParamLimits

0xb065,	// (0x0001a564) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0001e96c) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0001e96c) popup_call2_audio_second_window_t

0x991f,	// (0x00018e1e) bg_popup_call2_in_pane_cp02

0x9929,	// (0x00018e28) call_type_pane_cp04

0x2afc,	// (0x00011ffb) popup_call2_audio_wait_window_g1

0x2b04,	// (0x00012003) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0001e975) popup_call2_audio_wait_window_g

0x9941,	// (0x00018e40) popup_call2_audio_wait_window_t3

0xb158,	// (0x0001a657) bg_popup_call2_act_pane_ParamLimits

0xb158,	// (0x0001a657) bg_popup_call2_act_pane

0xb218,	// (0x0001a717) call_type_pane_cp03_ParamLimits

0xb218,	// (0x0001a717) call_type_pane_cp03

0xb27c,	// (0x0001a77b) popup_call2_audio_first_window_g1_ParamLimits

0xb27c,	// (0x0001a77b) popup_call2_audio_first_window_g1

0xb2ec,	// (0x0001a7eb) popup_call2_audio_first_window_g2_ParamLimits

0xb2ec,	// (0x0001a7eb) popup_call2_audio_first_window_g2

0xb350,	// (0x0001a84f) popup_call2_audio_first_window_g3_ParamLimits

0xb350,	// (0x0001a84f) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0001e97a) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0001e97a) popup_call2_audio_first_window_g

0xb3d8,	// (0x0001a8d7) popup_call2_audio_first_window_t1_ParamLimits

0xb3d8,	// (0x0001a8d7) popup_call2_audio_first_window_t1

0xb4db,	// (0x0001a9da) popup_call2_audio_first_window_t4_ParamLimits

0xb4db,	// (0x0001a9da) popup_call2_audio_first_window_t4

0xb5be,	// (0x0001aabd) popup_call2_audio_first_window_t5_ParamLimits

0xb5be,	// (0x0001aabd) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0001e985) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0001e985) popup_call2_audio_first_window_t

0x9b72,	// (0x00019071) bg_popup_call2_act_pane_g1

0xbbdd,	// (0x0001b0dc) popup_cale_lunar_info_window_t1

0xbbeb,	// (0x0001b0ea) popup_cale_lunar_info_window_t2

0xbbf9,	// (0x0001b0f8) popup_cale_lunar_info_window_t3

0x991f,	// (0x00018e1e) bg_popup_call2_bubble_pane

0xb6bf,	// (0x0001abbe) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6bf,	// (0x0001abbe) bg_popup_call2_in_pane_cp01

0x95fb,	// (0x00018afa) call_type_pane_cp02

0x2b0c,	// (0x0001200b) popup_call2_audio_out_window_g1_ParamLimits

0x2b0c,	// (0x0001200b) popup_call2_audio_out_window_g1

0xb707,	// (0x0001ac06) popup_call2_audio_out_window_g2_ParamLimits

0xb707,	// (0x0001ac06) popup_call2_audio_out_window_g2

0x2b38,	// (0x00012037) popup_call2_audio_out_window_g3_ParamLimits

0x2b38,	// (0x00012037) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0001e98e) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0001e98e) popup_call2_audio_out_window_g

0xb73e,	// (0x0001ac3d) popup_call2_audio_out_window_t1_ParamLimits

0xb73e,	// (0x0001ac3d) popup_call2_audio_out_window_t1

0xb79d,	// (0x0001ac9c) popup_call2_audio_out_window_t2_ParamLimits

0xb79d,	// (0x0001ac9c) popup_call2_audio_out_window_t2

0xb7f1,	// (0x0001acf0) popup_call2_audio_out_window_t3_ParamLimits

0xb7f1,	// (0x0001acf0) popup_call2_audio_out_window_t3

0xb807,	// (0x0001ad06) popup_call2_audio_out_window_t4_ParamLimits

0xb807,	// (0x0001ad06) popup_call2_audio_out_window_t4

0xb81d,	// (0x0001ad1c) popup_call2_audio_out_window_t5_ParamLimits

0xb81d,	// (0x0001ad1c) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0001e997) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0001e997) popup_call2_audio_out_window_t

0xb881,	// (0x0001ad80) bg_popup_call2_in_pane_ParamLimits

0xb881,	// (0x0001ad80) bg_popup_call2_in_pane

0xb8dd,	// (0x0001addc) popup_call2_audio_in_window_g1_ParamLimits

0xb8dd,	// (0x0001addc) popup_call2_audio_in_window_g1

0xb915,	// (0x0001ae14) popup_call2_audio_in_window_g2_ParamLimits

0xb915,	// (0x0001ae14) popup_call2_audio_in_window_g2

0xb94d,	// (0x0001ae4c) popup_call2_audio_in_window_g3_ParamLimits

0xb94d,	// (0x0001ae4c) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0001e9a4) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0001e9a4) popup_call2_audio_in_window_g

0xb9a5,	// (0x0001aea4) popup_call2_audio_in_window_t1_ParamLimits

0xb9a5,	// (0x0001aea4) popup_call2_audio_in_window_t1

0xba25,	// (0x0001af24) popup_call2_audio_in_window_t2_ParamLimits

0xba25,	// (0x0001af24) popup_call2_audio_in_window_t2

0xbaa5,	// (0x0001afa4) popup_call2_audio_in_window_t3_ParamLimits

0xbaa5,	// (0x0001afa4) popup_call2_audio_in_window_t3

0xbabf,	// (0x0001afbe) popup_call2_audio_in_window_t4_ParamLimits

0xbabf,	// (0x0001afbe) popup_call2_audio_in_window_t4

0xbad1,	// (0x0001afd0) popup_call2_audio_in_window_t5_ParamLimits

0xbad1,	// (0x0001afd0) popup_call2_audio_in_window_t5

0xbae6,	// (0x0001afe5) popup_call2_audio_in_window_t6_ParamLimits

0xbae6,	// (0x0001afe5) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0001e9ad) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0001e9ad) popup_call2_audio_in_window_t

0x9b72,	// (0x00019071) bg_popup_call2_in_pane_g1

0xbc07,	// (0x0001b106) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0001ea15) popup_cale_lunar_info_window_t

0x9b7a,	// (0x00019079) bg_popup_call2_rect_pane_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_call2_rect_pane

0x991f,	// (0x00018e1e) call2_cli_visual_graphic_pane

0x991f,	// (0x00018e1e) call2_cli_visual_text_pane

0xbd5c,	// (0x0001b25b) smil_status_volume_pane_g3

0x0002,

0x9b92,	// (0x00019091) call2_cli_visual_graphic_pane_g1

0x9b92,	// (0x00019091) call2_cli_visual_graphic_pane_g2

0x9b92,	// (0x00019091) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0001e9ba) call2_cli_visual_graphic_pane_g

0xbafb,	// (0x0001affa) bg_popup_call2_rect_pane_g1

0x9d8d,	// (0x0001928c) bg_popup_call2_rect_pane_g2

0xbb03,	// (0x0001b002) bg_popup_call2_rect_pane_g3

0xbb0b,	// (0x0001b00a) bg_popup_call2_rect_pane_g4

0xbb13,	// (0x0001b012) bg_popup_call2_rect_pane_g5

0xbb1b,	// (0x0001b01a) bg_popup_call2_rect_pane_g6

0xbb23,	// (0x0001b022) bg_popup_call2_rect_pane_g7

0xbb2b,	// (0x0001b02a) bg_popup_call2_rect_pane_g8

0xbb33,	// (0x0001b032) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001e9c1) bg_popup_call2_rect_pane_g

0xbb3b,	// (0x0001b03a) bg_popup_call2_bubble_pane_g1

0xbb43,	// (0x0001b042) bg_popup_call2_bubble_pane_g2

0xbb4b,	// (0x0001b04a) bg_popup_call2_bubble_pane_g3

0xbb53,	// (0x0001b052) bg_popup_call2_bubble_pane_g4

0xbb5b,	// (0x0001b05a) bg_popup_call2_bubble_pane_g5

0xbb63,	// (0x0001b062) bg_popup_call2_bubble_pane_g6

0xbb6b,	// (0x0001b06a) bg_popup_call2_bubble_pane_g7

0xbb73,	// (0x0001b072) bg_popup_call2_bubble_pane_g8

0xbb7b,	// (0x0001b07a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0001e9d4) bg_popup_call2_bubble_pane_g

0x0379,	// (0x0000f878) aid_cale_week_size_cell_pane

0x09bd,	// (0x0000febc) aid_cams_cif_uncrop_pane_ParamLimits

0x09bd,	// (0x0000febc) aid_cams_cif_uncrop_pane

0x0b13,	// (0x00010012) aid_cams_size_cell_ParamLimits

0x0b13,	// (0x00010012) aid_cams_size_cell

0x0b27,	// (0x00010026) grid_cams_pane_ParamLimits

0x0b41,	// (0x00010040) linegrid_cams_pane_ParamLimits

0x0c1d,	// (0x0001011c) call_video_pane_t1

0x0c37,	// (0x00010136) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0001e6e1) call_video_pane_t

0x106f,	// (0x0001056e) aid_cale_month_size_cell_pane_ParamLimits

0x106f,	// (0x0001056e) aid_cale_month_size_cell_pane

0xf55a,	// (0x0001ea59) smil_status_volume_pane_g

0xbd69,	// (0x0001b268) volume_smil_pane_ParamLimits

0x9466,	// (0x00018965) aid_popup2_width_pane

0x02da,	// (0x0000f7d9) cell_qdial_pane_g4_ParamLimits

0x02da,	// (0x0000f7d9) cell_qdial_pane_g4

0x1f66,	// (0x00011465) aid_blid_cardinal_pane_ParamLimits

0x1f72,	// (0x00011471) aid_blid_destination_pane_ParamLimits

0x1f72,	// (0x00011471) aid_blid_destination_pane

0x9b7a,	// (0x00019079) bg_popup_call_poc_act_pane_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_call_poc_act_pane

0x9b7a,	// (0x00019079) bg_popup_call_poc_inact_pane_ParamLimits

0x9b7a,	// (0x00019079) bg_popup_call_poc_inact_pane

0xbb83,	// (0x0001b082) bg_popup_call_poc_act_pane_g1

0xbb8b,	// (0x0001b08a) bg_popup_call_poc_act_pane_g2

0xbb93,	// (0x0001b092) bg_popup_call_poc_act_pane_g3

0xbb53,	// (0x0001b052) bg_popup_call_poc_act_pane_g4

0xbb5b,	// (0x0001b05a) bg_popup_call_poc_act_pane_g5

0xbb9b,	// (0x0001b09a) bg_popup_call_poc_act_pane_g6

0xbb6b,	// (0x0001b06a) bg_popup_call_poc_act_pane_g7

0xbba3,	// (0x0001b0a2) bg_popup_call_poc_act_pane_g8

0x991f,	// (0x00018e1e) main_usb_pane

0xbc71,	// (0x0001b170) popup_cale_lunar_info_window

0x0f04,	// (0x00010403) im_reading_pane_t1_ParamLimits

0x9fa7,	// (0x000194a6) list_im_pane_ParamLimits

0x9fb8,	// (0x000194b7) scroll_pane_cp07_ParamLimits

0x991f,	// (0x00018e1e) grid_highlight_pane_cp012

0x9b7a,	// (0x00019079) mup_scale_pane_ParamLimits

0xaac8,	// (0x00019fc7) main_usb_pane_g1_ParamLimits

0xaac8,	// (0x00019fc7) main_usb_pane_g1

0x2b8b,	// (0x0001208a) main_usb_pane_g2_ParamLimits

0x2b8b,	// (0x0001208a) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0001e9fe) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0001e9fe) main_usb_pane_g

0x2ba1,	// (0x000120a0) main_usb_pane_t1_ParamLimits

0x2ba1,	// (0x000120a0) main_usb_pane_t1

0x2bb3,	// (0x000120b2) main_usb_pane_t2_ParamLimits

0x2bb3,	// (0x000120b2) main_usb_pane_t2

0x2bc5,	// (0x000120c4) main_usb_pane_t3_ParamLimits

0x2bc5,	// (0x000120c4) main_usb_pane_t3

0x2bd7,	// (0x000120d6) main_usb_pane_t4_ParamLimits

0x2bd7,	// (0x000120d6) main_usb_pane_t4

0x2bec,	// (0x000120eb) main_usb_pane_t5_ParamLimits

0x2bec,	// (0x000120eb) main_usb_pane_t5

0x2c01,	// (0x00012100) main_usb_pane_t6_ParamLimits

0x2c01,	// (0x00012100) main_usb_pane_t6

0x0005,

0xf504,	// (0x0001ea03) main_usb_pane_t_ParamLimits

0x1f05,	// (0x00011404) aid_text_placing

0x1f10,	// (0x0001140f) main_location2_pane_t1_ParamLimits

0x1f26,	// (0x00011425) main_location2_pane_t2_ParamLimits

0x1f3c,	// (0x0001143b) main_location2_pane_t3_ParamLimits

0x1f52,	// (0x00011451) main_location2_pane_t4_ParamLimits

0x1f52,	// (0x00011451) main_location2_pane_t4

0xf31e,	// (0x0001e81d) main_location2_pane_t_ParamLimits

0x9ba8,	// (0x000190a7) find_pinb_pane_g2_ParamLimits

0x9ba8,	// (0x000190a7) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0001e599) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0001e599) find_pinb_pane_g

0x9bb4,	// (0x000190b3) find_pinb_pane_t1_ParamLimits

0x9bc6,	// (0x000190c5) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0001e59e) find_pinb_pane_t_ParamLimits

0x991f,	// (0x00018e1e) main_call3_pane

0x1674,	// (0x00010b73) cale_month_day_heading_pane_t1_ParamLimits

0x16fa,	// (0x00010bf9) cale_month_day_heading_pane_t2_ParamLimits

0x1773,	// (0x00010c72) cale_month_day_heading_pane_t3_ParamLimits

0x17ec,	// (0x00010ceb) cale_month_day_heading_pane_t4_ParamLimits

0x186d,	// (0x00010d6c) cale_month_day_heading_pane_t5_ParamLimits

0x18f6,	// (0x00010df5) cale_month_day_heading_pane_t6_ParamLimits

0x1987,	// (0x00010e86) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0001e719) cale_month_day_heading_pane_t_ParamLimits

0xa21d,	// (0x0001971c) smil_status_volume_pane

0x25da,	// (0x00011ad9) postcard_address_pane_ParamLimits

0x25da,	// (0x00011ad9) postcard_address_pane

0x25f0,	// (0x00011aef) postcard_message_pane_ParamLimits

0x25f0,	// (0x00011aef) postcard_message_pane

0x2b64,	// (0x00012063) call2_cli_visual_pane_t1_ParamLimits

0x2b64,	// (0x00012063) call2_cli_visual_pane_t1

0xbd96,	// (0x0001b295) postcard_message_pane_t1_ParamLimits

0xbd96,	// (0x0001b295) postcard_message_pane_t1

0xbd7e,	// (0x0001b27d) postcard_address_pane_t1_ParamLimits

0xbd7e,	// (0x0001b27d) postcard_address_pane_t1

0x3347,	// (0x00012846) popup_call3_audio_in_window_ParamLimits

0x3347,	// (0x00012846) popup_call3_audio_in_window

0x31cc,	// (0x000126cb) bg_popup_call3_in_pane_ParamLimits

0x31cc,	// (0x000126cb) bg_popup_call3_in_pane

0x3248,	// (0x00012747) popup_call3_audio_in_window_g1_ParamLimits

0x3248,	// (0x00012747) popup_call3_audio_in_window_g1

0x3268,	// (0x00012767) popup_call3_audio_in_window_g2_ParamLimits

0x3268,	// (0x00012767) popup_call3_audio_in_window_g2

0x3288,	// (0x00012787) popup_call3_audio_in_window_g3_ParamLimits

0x3288,	// (0x00012787) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0001ea60) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0001ea60) popup_call3_audio_in_window_g

0x32b9,	// (0x000127b8) popup_call3_audio_in_window_t1_ParamLimits

0x32b9,	// (0x000127b8) popup_call3_audio_in_window_t1

0x32f7,	// (0x000127f6) popup_call3_audio_in_window_t2_ParamLimits

0x32f7,	// (0x000127f6) popup_call3_audio_in_window_t2

0x3335,	// (0x00012834) popup_call3_audio_in_window_t3_ParamLimits

0x3335,	// (0x00012834) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0001ea69) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0001ea69) popup_call3_audio_in_window_t

0x9eaa,	// (0x000193a9) bg_popup_call3_rect_pane

0xbafb,	// (0x0001affa) bg_popup_call3_rect_pane_g1

0x9d8d,	// (0x0001928c) bg_popup_call3_rect_pane_g2

0xbb03,	// (0x0001b002) bg_popup_call3_rect_pane_g3

0xbb0b,	// (0x0001b00a) bg_popup_call3_rect_pane_g4

0xbb13,	// (0x0001b012) bg_popup_call3_rect_pane_g5

0xbb1b,	// (0x0001b01a) bg_popup_call3_rect_pane_g6

0xbb23,	// (0x0001b022) bg_popup_call3_rect_pane_g7

0x9454,	// (0x00018953) mup_visualizer_osc_pane

0x9454,	// (0x00018953) mup_visualizer_spec_pane

0x31fc,	// (0x000126fb) call3_video_qcif_pane_ParamLimits

0x31fc,	// (0x000126fb) call3_video_qcif_pane

0x320f,	// (0x0001270e) call3_video_qcif_uncrop_pane_ParamLimits

0x320f,	// (0x0001270e) call3_video_qcif_uncrop_pane

0x321f,	// (0x0001271e) call3_video_subqcif_pane_ParamLimits

0x321f,	// (0x0001271e) call3_video_subqcif_pane

0x3235,	// (0x00012734) call3_video_subqcif_uncrop_pane_ParamLimits

0x3235,	// (0x00012734) call3_video_subqcif_uncrop_pane

0x32a8,	// (0x000127a7) popup_call3_audio_in_window_g4_ParamLimits

0x32a8,	// (0x000127a7) popup_call3_audio_in_window_g4

0x9454,	// (0x00018953) mup_spec_half_pane

0x9454,	// (0x00018953) mup_spec_half_pane_cp

0x9454,	// (0x00018953) mup_osc_middle_pane

0x9eea,	// (0x000193e9) mup_visualizer_osc_pane_g1

0xbd0f,	// (0x0001b20e) mup_spec_bar_pane_ParamLimits

0xbd0f,	// (0x0001b20e) mup_spec_bar_pane

0x9eea,	// (0x000193e9) mup_spec_bar_pane_g1

0x9eea,	// (0x000193e9) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0001e897) mup_spec_bar_pane_g

0x0379,	// (0x0000f878) aid_cale_week_size_cell_pane_ParamLimits

0x0393,	// (0x0000f892) bg_cale_heading_pane_ParamLimits

0x03b7,	// (0x0000f8b6) bg_cale_pane_cp01_ParamLimits

0x03d4,	// (0x0000f8d3) cale_week_corner_pane_ParamLimits

0x03f3,	// (0x0000f8f2) cale_week_day_heading_pane_ParamLimits

0x041c,	// (0x0000f91b) cale_week_scroll_pane_g1_ParamLimits

0x043b,	// (0x0000f93a) cale_week_scroll_pane_g2_ParamLimits

0x0453,	// (0x0000f952) cale_week_scroll_pane_g3_ParamLimits

0x046b,	// (0x0000f96a) cale_week_scroll_pane_g4_ParamLimits

0x0483,	// (0x0000f982) cale_week_scroll_pane_g5_ParamLimits

0x04a3,	// (0x0000f9a2) cale_week_scroll_pane_g6_ParamLimits

0x04c3,	// (0x0000f9c2) cale_week_scroll_pane_g7_ParamLimits

0x04e7,	// (0x0000f9e6) cale_week_scroll_pane_g8_ParamLimits

0x050b,	// (0x0000fa0a) cale_week_scroll_pane_g9_ParamLimits

0x0523,	// (0x0000fa22) cale_week_scroll_pane_g10_ParamLimits

0x053b,	// (0x0000fa3a) cale_week_scroll_pane_g11_ParamLimits

0x0553,	// (0x0000fa52) cale_week_scroll_pane_g12_ParamLimits

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g13_ParamLimits

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g14_ParamLimits

0x0577,	// (0x0000fa76) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0001e62a) cale_week_scroll_pane_g_ParamLimits

0x05bf,	// (0x0000fabe) cale_week_time_pane_ParamLimits

0x05e3,	// (0x0000fae2) grid_cale_week_pane_ParamLimits

0x9e20,	// (0x0001931f) listscroll_cale_week_pane_t1

0x9e32,	// (0x00019331) scroll_pane_cp08_ParamLimits

0x10e7,	// (0x000105e6) cale_month_corner_pane_ParamLimits

0xa1e7,	// (0x000196e6) cale_month_pane_t1

0x15ef,	// (0x00010aee) cale_month_week_pane_ParamLimits

0x1d45,	// (0x00011244) popup_call_status_window_g1_ParamLimits

0x1d59,	// (0x00011258) popup_call_status_window_g2_ParamLimits

0x1d6d,	// (0x0001126c) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0001e7a4) popup_call_status_window_g_ParamLimits

0xa5ed,	// (0x00019aec) aid_call2_pane

0x23fd,	// (0x000118fc) msg_header_pane_g1

0x25da,	// (0x00011ad9) postcard_address2_pane_ParamLimits

0x25da,	// (0x00011ad9) postcard_address2_pane

0x25f0,	// (0x00011aef) postcard_message2_pane_ParamLimits

0x25f0,	// (0x00011aef) postcard_message2_pane

0x3199,	// (0x00012698) message2_row_pane_ParamLimits

0x3199,	// (0x00012698) message2_row_pane

0x31b9,	// (0x000126b8) address2_row_pane_ParamLimits

0x31b9,	// (0x000126b8) address2_row_pane

0xbcdc,	// (0x0001b1db) postcard_message2_row_pane_g1

0xbce4,	// (0x0001b1e3) postcard_message2_row_pane_t1

0xbcdc,	// (0x0001b1db) address2_row_pane_g1

0xbce4,	// (0x0001b1e3) address2_row_pane_t1

0x0950,	// (0x0000fe4f) aid_size_cell_vorec

0x991f,	// (0x00018e1e) main_rss_pane

0xbcf2,	// (0x0001b1f1) rss_list_single_pane_ParamLimits

0xbcf2,	// (0x0001b1f1) rss_list_single_pane

0xbd00,	// (0x0001b1ff) rss_list_single_pane_t1

0xbd00,	// (0x0001b1ff) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0001ea54) rss_list_single_pane_t

0x991f,	// (0x00018e1e) main_camera2_pane

0x991f,	// (0x00018e1e) main_video2_pane

0xbdb2,	// (0x0001b2b1) cams_zoom_pane_cp2_ParamLimits

0xbdb2,	// (0x0001b2b1) cams_zoom_pane_cp2

0xbdb2,	// (0x0001b2b1) image2_vga_pane_ParamLimits

0xbdb2,	// (0x0001b2b1) image2_vga_pane

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g1_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g1

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g2_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g2

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g3_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g3

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g4_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g4

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g5_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g5

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g6_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g6

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g7_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g7

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g8_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0001ea70) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0001ea70) main_camera2_pane_g

0x3369,	// (0x00012868) main_camera2_pane_t1_ParamLimits

0x3369,	// (0x00012868) main_camera2_pane_t1

0x3369,	// (0x00012868) main_camera2_pane_t2_ParamLimits

0x3369,	// (0x00012868) main_camera2_pane_t2

0x3369,	// (0x00012868) main_camera2_pane_t3_ParamLimits

0x3369,	// (0x00012868) main_camera2_pane_t3

0x3369,	// (0x00012868) main_camera2_pane_t4_ParamLimits

0x3369,	// (0x00012868) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0001ea83) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0001ea83) main_camera2_pane_t

0xbde2,	// (0x0001b2e1) cams_zoom_pane_cp4_ParamLimits

0xbde2,	// (0x0001b2e1) cams_zoom_pane_cp4

0xbdf0,	// (0x0001b2ef) image2_cif_pane_ParamLimits

0xbdf0,	// (0x0001b2ef) image2_cif_pane

0x94c9,	// (0x000189c8) image2_subqcif_pane_ParamLimits

0x94c9,	// (0x000189c8) image2_subqcif_pane

0x337d,	// (0x0001287c) main_video2_pane_g1_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g1

0x337d,	// (0x0001287c) main_video2_pane_g2_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g2

0x337d,	// (0x0001287c) main_video2_pane_g3_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g3

0x337d,	// (0x0001287c) main_video2_pane_g4_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g4

0x337d,	// (0x0001287c) main_video2_pane_g5_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g5

0x337d,	// (0x0001287c) main_video2_pane_g6_ParamLimits

0x337d,	// (0x0001287c) main_video2_pane_g6

0x0005,

0xf593,	// (0x0001ea92) main_video2_pane_g_ParamLimits

0xf593,	// (0x0001ea92) main_video2_pane_g

0x338b,	// (0x0001288a) main_video2_pane_t1_ParamLimits

0x338b,	// (0x0001288a) main_video2_pane_t1

0x338b,	// (0x0001288a) main_video2_pane_t2_ParamLimits

0x338b,	// (0x0001288a) main_video2_pane_t2

0x338b,	// (0x0001288a) main_video2_pane_t3_ParamLimits

0x338b,	// (0x0001288a) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0001ea9f) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0001ea9f) main_video2_pane_t

0x2c9a,	// (0x00012199) call_muted_g2

0x0001,

0xf547,	// (0x0001ea46) call_muted_g

0x991f,	// (0x00018e1e) main_mup2_pane

0xa977,	// (0x00019e76) main_mup2_pane_g1_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g1

0xa977,	// (0x00019e76) main_mup2_pane_g2_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g2

0x9eea,	// (0x000193e9) main_mup_pane_g13_cp1

0x9454,	// (0x00018953) mup_volume_pane_cp1

0xa977,	// (0x00019e76) main_mup2_pane_g4_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g4

0xa977,	// (0x00019e76) main_mup2_pane_g5_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g5

0xa977,	// (0x00019e76) main_mup2_pane_g6_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g6

0xa977,	// (0x00019e76) main_mup2_pane_g7_ParamLimits

0xa977,	// (0x00019e76) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0001eaa6) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0001eaa6) main_mup2_pane_g

0xa985,	// (0x00019e84) main_mup2_pane_t1_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t1

0xa985,	// (0x00019e84) main_mup2_pane_t2_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t2

0xa985,	// (0x00019e84) main_mup2_pane_t3_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t3

0xa985,	// (0x00019e84) main_mup2_pane_t4_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t4

0xa985,	// (0x00019e84) main_mup2_pane_t5_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t5

0xa985,	// (0x00019e84) main_mup2_pane_t6_ParamLimits

0xa985,	// (0x00019e84) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0001eab5) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0001eab5) main_mup2_pane_t

0xa9ad,	// (0x00019eac) mup2_visualizer_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup2_visualizer_pane

0xa9ad,	// (0x00019eac) mup_progress_pane_cp_ParamLimits

0xa9ad,	// (0x00019eac) mup_progress_pane_cp

0xbdfe,	// (0x0001b2fd) mup_volume_pane_cp_ParamLimits

0xbdfe,	// (0x0001b2fd) mup_volume_pane_cp

0x9bf5,	// (0x000190f4) mup2_visualizer_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) mup2_visualizer_pane_g1

0x9c03,	// (0x00019102) mup2_visualizer_pane_g2_ParamLimits

0x9c03,	// (0x00019102) mup2_visualizer_pane_g2

0x9c03,	// (0x00019102) mup2_visualizer_pane_g3_ParamLimits

0x9c03,	// (0x00019102) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0001e5a3) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0001e5a3) mup2_visualizer_pane_g

0xac11,	// (0x0001a110) aid_size_cell_fmradio

0x2e4a,	// (0x00012349) aid_height_parent_landcape

0xa045,	// (0x00019544) wml_content_pane_cp

0xa04d,	// (0x0001954c) wml_tabs_pane

0xa056,	// (0x00019555) popup_wml_miniature_window

0xa05e,	// (0x0001955d) scroll_pane_cp021

0xa072,	// (0x00019571) wml_content_pane_comp8

0x991f,	// (0x00018e1e) bg_popup_sub_pane_cp05

0xbe14,	// (0x0001b313) popup_wml_miniature_window_g1

0xbe1c,	// (0x0001b31b) wml_miniature_view_pane

0x339f,	// (0x0001289e) aid_size_wml_view

0x33a7,	// (0x000128a6) wml_miniature_view_pane_g1

0x33b0,	// (0x000128af) wml_miniature_view_pane_g2

0x33b9,	// (0x000128b8) wml_miniature_view_pane_g3

0x33c1,	// (0x000128c0) wml_miniature_view_pane_g4

0x33c9,	// (0x000128c8) wml_miniature_view_pane_g5

0x33d1,	// (0x000128d0) wml_miniature_view_pane_g6

0x33d9,	// (0x000128d8) wml_miniature_view_pane_g7

0x33e1,	// (0x000128e0) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0001eac2) wml_miniature_view_pane_g

0xbe24,	// (0x0001b323) background_graphic_ParamLimits

0xbe24,	// (0x0001b323) background_graphic

0xbe30,	// (0x0001b32f) wml_tabs_2_pane

0xbe39,	// (0x0001b338) wml_tabs_3_pane_ParamLimits

0xbe39,	// (0x0001b338) wml_tabs_3_pane

0xbe4b,	// (0x0001b34a) wml_tabs_4_pane_ParamLimits

0xbe4b,	// (0x0001b34a) wml_tabs_4_pane

0xbe61,	// (0x0001b360) wml_tabs_5_pane_ParamLimits

0xbe61,	// (0x0001b360) wml_tabs_5_pane

0xbe7b,	// (0x0001b37a) wml_tabs_pane_g2_ParamLimits

0xbe7b,	// (0x0001b37a) wml_tabs_pane_g2

0xbe90,	// (0x0001b38f) wml_tabs_pane_g3_ParamLimits

0xbe90,	// (0x0001b38f) wml_tabs_pane_g3

0xbea5,	// (0x0001b3a4) wml_tabs_2_active_pane_ParamLimits

0xbea5,	// (0x0001b3a4) wml_tabs_2_active_pane

0xbea5,	// (0x0001b3a4) wml_tabs_2_passive_pane_ParamLimits

0xbea5,	// (0x0001b3a4) wml_tabs_2_passive_pane

0x33e9,	// (0x000128e8) wml_tabs_3_active_pane_cp_ParamLimits

0x33e9,	// (0x000128e8) wml_tabs_3_active_pane_cp

0x33fe,	// (0x000128fd) wml_tabs_3_passive_pane_ParamLimits

0x33fe,	// (0x000128fd) wml_tabs_3_passive_pane

0x3411,	// (0x00012910) wml_tabs_3_passive_pane_cp_ParamLimits

0x3411,	// (0x00012910) wml_tabs_3_passive_pane_cp

0x3428,	// (0x00012927) tabs_4_active_pane

0x3430,	// (0x0001292f) tabs_4_passive_pane

0x343a,	// (0x00012939) tabs_4_passive_pane_cp

0x3442,	// (0x00012941) tabs_4_passive_pane_cp2

0x2b83,	// (0x00012082) aid_height_text

0xa9ad,	// (0x00019eac) mup_volume_cont_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup_volume_cont_pane

0x9454,	// (0x00018953) aid_size_cell_pinb

0x9454,	// (0x00018953) aid_size_list_pinb

0xa9ad,	// (0x00019eac) mup2_volume_cont_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup2_volume_cont_pane

0xbeb3,	// (0x0001b3b2) mup2_volume_cont_pane_g1_ParamLimits

0xbeb3,	// (0x0001b3b2) mup2_volume_cont_pane_g1

0xfd89,	// (0x0000f288) aid_size_cell_touch_ParamLimits

0xfd89,	// (0x0000f288) aid_size_cell_touch

0xffb3,	// (0x0000f4b2) touch_pane_ParamLimits

0xffb3,	// (0x0000f4b2) touch_pane

0x9454,	// (0x00018953) main_rss2_pane

0xbed2,	// (0x0001b3d1) listscroll_rss2_pane

0xbedb,	// (0x0001b3da) rss2_navigation_pane

0xbee3,	// (0x0001b3e2) list_rss2_pane

0xa774,	// (0x00019c73) scroll_pane_cp22

0xbeeb,	// (0x0001b3ea) rss2_navigation_pane_g1

0xbef4,	// (0x0001b3f3) rss2_navigation_pane_g2

0xbefc,	// (0x0001b3fb) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0001ead3) rss2_navigation_pane_g

0xbf04,	// (0x0001b403) rss2_navigation_pane_t1

0x344c,	// (0x0001294b) rss2_list_single_pane_ParamLimits

0x344c,	// (0x0001294b) rss2_list_single_pane

0xbf12,	// (0x0001b411) rss2_list_single_pane_t2

0xbf20,	// (0x0001b41f) rss2_list_single_pane_t3_ParamLimits

0xbf20,	// (0x0001b41f) rss2_list_single_pane_t3

0xbf3d,	// (0x0001b43c) rss2_list_single_pane_t4

0x1c2f,	// (0x0001112e) smil_status_pane_g1

0x94c9,	// (0x000189c8) main_image2_pane_ParamLimits

0x94c9,	// (0x000189c8) main_image2_pane

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g9_ParamLimits

0xbdc0,	// (0x0001b2bf) main_camera2_pane_g9

0x3369,	// (0x00012868) main_camera2_pane_t5_ParamLimits

0x3369,	// (0x00012868) main_camera2_pane_t5

0xbdce,	// (0x0001b2cd) main_camera2_pane_t6_ParamLimits

0xbdce,	// (0x0001b2cd) main_camera2_pane_t6

0x3463,	// (0x00012962) main_image2_pane_g1_ParamLimits

0x3463,	// (0x00012962) main_image2_pane_g1

0x2832,	// (0x00011d31) smil2_video_pane_ParamLimits

0x2832,	// (0x00011d31) smil2_video_pane

0x9472,	// (0x00018971) aid_zoom_text_primary_cp

0x94bf,	// (0x000189be) popup_preview_fixed_window

0x9f9f,	// (0x0001949e) im_reading_pane_g1

0x335b,	// (0x0001285a) cams2_bc_adjust_pane_cp_ParamLimits

0x335b,	// (0x0001285a) cams2_bc_adjust_pane_cp

0xa9ad,	// (0x00019eac) cams2_bc_adjust_pane_ParamLimits

0xa9ad,	// (0x00019eac) cams2_bc_adjust_pane

0x9eea,	// (0x000193e9) cams2_bc_adjust_pane_g1

0x9454,	// (0x00018953) cams2_slider_pane

0x9eea,	// (0x000193e9) cams2_slider_pane_g1

0x9eea,	// (0x000193e9) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0001eada) cams2_slider_pane_g

0x0049,	// (0x0000f548) calc_display_pane_ParamLimits

0x006e,	// (0x0000f56d) calc_paper_pane_ParamLimits

0x0091,	// (0x0000f590) grid_calc_pane_ParamLimits

0xa64f,	// (0x00019b4e) popup_clock_digital_window_t1_ParamLimits

0xabae,	// (0x0001a0ad) main_image_pane_t1

0x0029,	// (0x0000f528) aid_size_cell_calc_ParamLimits

0x0029,	// (0x0000f528) aid_size_cell_calc

0x2e90,	// (0x0001238f) popup_blid_sat_info2_window_ParamLimits

0x2e90,	// (0x0001238f) popup_blid_sat_info2_window

0xbf4b,	// (0x0001b44a) aid_size_cell_blid

0xbdf0,	// (0x0001b2ef) bg_popup_window_pane_cp07

0xbf68,	// (0x0001b467) grid_popup_blid_pane

0xbf72,	// (0x0001b471) heading_pane_cp05_ParamLimits

0xbf72,	// (0x0001b471) heading_pane_cp05

0xc03c,	// (0x0001b53b) cell_popup_blid_pane_ParamLimits

0xc03c,	// (0x0001b53b) cell_popup_blid_pane

0xc066,	// (0x0001b565) cell_popup_blid_pane_g1

0xc06e,	// (0x0001b56d) cell_popup_blid_pane_t1

0xa9ad,	// (0x00019eac) mup2_indicator_pane_ParamLimits

0xa9ad,	// (0x00019eac) mup2_indicator_pane

0x9454,	// (0x00018953) mup2_visualizer_osc_pane

0xbdfe,	// (0x0001b2fd) mup2_visualizer_spec_pane_ParamLimits

0xbdfe,	// (0x0001b2fd) mup2_visualizer_spec_pane

0x9454,	// (0x00018953) mup2_spec_half_pane

0x9454,	// (0x00018953) mup2_spec_half_pane_cp

0xc07c,	// (0x0001b57b) mup2_spec_bar_pane_ParamLimits

0xc07c,	// (0x0001b57b) mup2_spec_bar_pane

0x9eea,	// (0x000193e9) mup2_spec_bar_pane_g1

0xc09b,	// (0x0001b59a) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0001eb00) mup2_spec_bar_pane_g

0x9454,	// (0x00018953) mup2_osc_middle_pane

0x9eea,	// (0x000193e9) mup2_visualizer_osc_pane_g1

0x94f7,	// (0x000189f6) popup_number_entry_window_t1_ParamLimits

0x950a,	// (0x00018a09) popup_number_entry_window_t2_ParamLimits

0x951c,	// (0x00018a1b) popup_number_entry_window_t3_ParamLimits

0x952e,	// (0x00018a2d) popup_number_entry_window_t5_ParamLimits

0x952e,	// (0x00018a2d) popup_number_entry_window_t5

0xf045,	// (0x0001e544) popup_number_entry_window_t_ParamLimits

0x9563,	// (0x00018a62) text_title_cp2_ParamLimits

0xaa88,	// (0x00019f87) aid_hotspot_pointer_text2_pane

0xaaae,	// (0x00019fad) main_viewer_pane_g9_ParamLimits

0xaaae,	// (0x00019fad) main_viewer_pane_g9

0xa1e7,	// (0x000196e6) cale_month_pane_t1_ParamLimits

0xa252,	// (0x00019751) bg_cale_pane_ParamLimits

0xa26a,	// (0x00019769) list_cale_pane_ParamLimits

0xa27b,	// (0x0001977a) listscroll_cale_day_pane_t1

0xa28d,	// (0x0001978c) scroll_pane_cp09_ParamLimits

0x213b,	// (0x0001163a) main_mup_eq_pane_t1_ParamLimits

0x213b,	// (0x0001163a) main_mup_eq_pane_t1

0x2157,	// (0x00011656) main_mup_eq_pane_t2_ParamLimits

0x2157,	// (0x00011656) main_mup_eq_pane_t2

0x2173,	// (0x00011672) main_mup_eq_pane_t3_ParamLimits

0x2173,	// (0x00011672) main_mup_eq_pane_t3

0x2191,	// (0x00011690) main_mup_eq_pane_t4_ParamLimits

0x2191,	// (0x00011690) main_mup_eq_pane_t4

0x21af,	// (0x000116ae) main_mup_eq_pane_t5_ParamLimits

0x21af,	// (0x000116ae) main_mup_eq_pane_t5

0x21cd,	// (0x000116cc) main_mup_eq_pane_t6_ParamLimits

0x21cd,	// (0x000116cc) main_mup_eq_pane_t6

0x21e3,	// (0x000116e2) main_mup_eq_pane_t7_ParamLimits

0x21e3,	// (0x000116e2) main_mup_eq_pane_t7

0x21f9,	// (0x000116f8) main_mup_eq_pane_t8_ParamLimits

0x21f9,	// (0x000116f8) main_mup_eq_pane_t8

0x220f,	// (0x0001170e) main_mup_eq_pane_t9_ParamLimits

0x220f,	// (0x0001170e) main_mup_eq_pane_t9

0x222b,	// (0x0001172a) main_mup_eq_pane_t10_ParamLimits

0x222b,	// (0x0001172a) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0001e8a3) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0001e8a3) main_mup_eq_pane_t

0x2300,	// (0x000117ff) mup_equalizer_pane_cp5_ParamLimits

0x2318,	// (0x00011817) mup_equalizer_pane_cp6_ParamLimits

0x2330,	// (0x0001182f) mup_equalizer_pane_cp7_ParamLimits

0x9454,	// (0x00018953) main_gallery_pane

0xbd2e,	// (0x0001b22d) smil2_volume_pane

0xbd36,	// (0x0001b235) smil_status_volume_pane_g1_ParamLimits

0xbd49,	// (0x0001b248) smil_status_volume_pane_g2_ParamLimits

0xbd5c,	// (0x0001b25b) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0001ea59) smil_status_volume_pane_g_ParamLimits

0xbdf0,	// (0x0001b2ef) bg_popup_window_pane_cp07_ParamLimits

0xbf53,	// (0x0001b452) blid_firmament_pane

0x94c9,	// (0x000189c8) aid_size_cell_gallery_ParamLimits

0x94c9,	// (0x000189c8) aid_size_cell_gallery

0x94c9,	// (0x000189c8) grid_gallery_pane_ParamLimits

0x94c9,	// (0x000189c8) grid_gallery_pane

0xbdf0,	// (0x0001b2ef) cell_gallery_pane_ParamLimits

0xbdf0,	// (0x0001b2ef) cell_gallery_pane

0x94c9,	// (0x000189c8) bg_cell_gallery_focus_pane_ParamLimits

0x94c9,	// (0x000189c8) bg_cell_gallery_focus_pane

0x9bf5,	// (0x000190f4) cell_gallery_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) cell_gallery_pane_g1

0x9bf5,	// (0x000190f4) cell_gallery_pane_g2_ParamLimits

0x9bf5,	// (0x000190f4) cell_gallery_pane_g2

0x9bf5,	// (0x000190f4) cell_gallery_pane_g3_ParamLimits

0x9bf5,	// (0x000190f4) cell_gallery_pane_g3

0x9c03,	// (0x00019102) cell_gallery_pane_g4_ParamLimits

0x9c03,	// (0x00019102) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0001eb05) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0001eb05) cell_gallery_pane_g

0xc0a5,	// (0x0001b5a4) bg_cell_gallery_focus_pane_g1

0xc0ad,	// (0x0001b5ac) bg_cell_gallery_focus_pane_g2

0xc0b5,	// (0x0001b5b4) bg_cell_gallery_focus_pane_g3

0xc0bd,	// (0x0001b5bc) bg_cell_gallery_focus_pane_g4

0xc0c5,	// (0x0001b5c4) bg_cell_gallery_focus_pane_g5

0xc0cd,	// (0x0001b5cc) bg_cell_gallery_focus_pane_g6

0xc0d5,	// (0x0001b5d4) bg_cell_gallery_focus_pane_g7

0xc0dd,	// (0x0001b5dc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0001eb0e) bg_cell_gallery_focus_pane_g

0xc0e5,	// (0x0001b5e4) aid_firma_cardinal

0xc0f9,	// (0x0001b5f8) blid_firmament_pane_t1

0xc110,	// (0x0001b60f) blid_firmament_pane_t2

0xc127,	// (0x0001b626) blid_firmament_pane_t3

0xc13e,	// (0x0001b63d) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0001eb1f) blid_firmament_pane_t

0xc155,	// (0x0001b654) blid_sat_info_pane

0x9eea,	// (0x000193e9) blid_sat_info_pane_g1

0x9eea,	// (0x000193e9) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0001e897) blid_sat_info_pane_g

0xc165,	// (0x0001b664) blid_sat_info_pane_t1

0xc173,	// (0x0001b672) smil2_volume_content_pane

0xc17c,	// (0x0001b67b) smil2_volume_pane_g1

0x9d24,	// (0x00019223) smil2_volume_content_pane_g1

0xc184,	// (0x0001b683) smil2_volume_content_pane_g2

0xc18d,	// (0x0001b68c) smil2_volume_content_pane_g3

0xc196,	// (0x0001b695) smil2_volume_content_pane_g4

0xc19f,	// (0x0001b69e) smil2_volume_content_pane_g5

0xc1a8,	// (0x0001b6a7) smil2_volume_content_pane_g6

0xc1b1,	// (0x0001b6b0) smil2_volume_content_pane_g7

0xc1ba,	// (0x0001b6b9) smil2_volume_content_pane_g8

0xc1c3,	// (0x0001b6c2) smil2_volume_content_pane_g9

0xc1cc,	// (0x0001b6cb) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0001eb28) smil2_volume_content_pane_g

0x06b1,	// (0x0000fbb0) cale_week_day_heading_pane_t1_ParamLimits

0x06db,	// (0x0000fbda) cale_week_day_heading_pane_t2_ParamLimits

0x070a,	// (0x0000fc09) cale_week_day_heading_pane_t3_ParamLimits

0x0739,	// (0x0000fc38) cale_week_day_heading_pane_t4_ParamLimits

0x0768,	// (0x0000fc67) cale_week_day_heading_pane_t5_ParamLimits

0x079b,	// (0x0000fc9a) cale_week_day_heading_pane_t6_ParamLimits

0x07d2,	// (0x0000fcd1) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0001e64b) cale_week_day_heading_pane_t_ParamLimits

0x9e4f,	// (0x0001934e) bg_cale_side_pane_ParamLimits

0x07fc,	// (0x0000fcfb) cale_week_time_pane_t1_ParamLimits

0x0816,	// (0x0000fd15) cale_week_time_pane_t2_ParamLimits

0x0830,	// (0x0000fd2f) cale_week_time_pane_t3_ParamLimits

0x084a,	// (0x0000fd49) cale_week_time_pane_t4_ParamLimits

0x0864,	// (0x0000fd63) cale_week_time_pane_t5_ParamLimits

0x087e,	// (0x0000fd7d) cale_week_time_pane_t6_ParamLimits

0x089e,	// (0x0000fd9d) cale_week_time_pane_t7_ParamLimits

0x08c4,	// (0x0000fdc3) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0001e65a) cale_week_time_pane_t_ParamLimits

0x08ea,	// (0x0000fde9) cell_cale_week_pane_g2_ParamLimits

0x9e4f,	// (0x0001934e) bg_cale_side_pane_cp01_ParamLimits

0x1a18,	// (0x00010f17) cale_month_week_pane_t1_ParamLimits

0x1a31,	// (0x00010f30) cale_month_week_pane_t2_ParamLimits

0x1a4a,	// (0x00010f49) cale_month_week_pane_t3_ParamLimits

0x1a63,	// (0x00010f62) cale_month_week_pane_t4_ParamLimits

0x1a7c,	// (0x00010f7b) cale_month_week_pane_t5_ParamLimits

0x1a95,	// (0x00010f94) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0001e728) cale_month_week_pane_t_ParamLimits

0xa1f9,	// (0x000196f8) cell_cale_month_pane_g1_ParamLimits

0x9454,	// (0x00018953) main_cale_event_viewer_pane

0x9454,	// (0x00018953) listscroll_cale_event_viewer_pane

0xc1d5,	// (0x0001b6d4) list_cale_ev_pane

0xc1dd,	// (0x0001b6dc) scroll_pane_cp023

0x3479,	// (0x00012978) field_cale_ev_pane_ParamLimits

0x3479,	// (0x00012978) field_cale_ev_pane

0xc1e9,	// (0x0001b6e8) field_cale_ev_content_pane_ParamLimits

0xc1e9,	// (0x0001b6e8) field_cale_ev_content_pane

0xc1f5,	// (0x0001b6f4) field_cale_ev_pane_g1_ParamLimits

0xc1f5,	// (0x0001b6f4) field_cale_ev_pane_g1

0xc201,	// (0x0001b700) field_cale_ev_pane_g2_ParamLimits

0xc201,	// (0x0001b700) field_cale_ev_pane_g2

0xc219,	// (0x0001b718) field_cale_ev_pane_g3_ParamLimits

0xc219,	// (0x0001b718) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0001eb3d) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0001eb3d) field_cale_ev_pane_g

0xc231,	// (0x0001b730) field_cale_ev_pane_t1_ParamLimits

0xc231,	// (0x0001b730) field_cale_ev_pane_t1

0x349d,	// (0x0001299c) field_cale_ev_content_pane_t1_ParamLimits

0x349d,	// (0x0001299c) field_cale_ev_content_pane_t1

0xaa52,	// (0x00019f51) bg_button_pane_cp01

0x0369,	// (0x0000f868) listscroll_cale_week_pane_ParamLimits

0x9e17,	// (0x00019316) popup_toolbar_window_cp01

0x9e20,	// (0x0001931f) listscroll_cale_week_pane_t1_ParamLimits

0x0369,	// (0x0000f868) listscroll_cale_day_pane_ParamLimits

0x9e17,	// (0x00019316) popup_toolbar_window_cp02

0xa27b,	// (0x0001977a) listscroll_cale_day_pane_t1_ParamLimits

0x0369,	// (0x0000f868) main_cale_month_pane_ParamLimits

0xbcac,	// (0x0001b1ab) popup_toolbar_window_cp03_ParamLimits

0xbcac,	// (0x0001b1ab) popup_toolbar_window_cp03

0x26f0,	// (0x00011bef) main_image_pane_g2_ParamLimits

0x26f0,	// (0x00011bef) main_image_pane_g2

0x2701,	// (0x00011c00) main_image_pane_g3_ParamLimits

0x2701,	// (0x00011c00) main_image_pane_g3

0x0002,

0xf436,	// (0x0001e935) main_image_pane_g_ParamLimits

0xf436,	// (0x0001e935) main_image_pane_g

0xabae,	// (0x0001a0ad) main_image_pane_t1_ParamLimits

0x2712,	// (0x00011c11) main_image_pane_t2_ParamLimits

0x2712,	// (0x00011c11) main_image_pane_t2

0x2724,	// (0x00011c23) main_image_pane_t3_ParamLimits

0x2724,	// (0x00011c23) main_image_pane_t3

0x274c,	// (0x00011c4b) main_image_pane_t4_ParamLimits

0x274c,	// (0x00011c4b) main_image_pane_t4

0x0003,

0xf43d,	// (0x0001e93c) main_image_pane_t_ParamLimits

0xf43d,	// (0x0001e93c) main_image_pane_t

0x276c,	// (0x00011c6b) popup_image_details_window_cp01

0x2776,	// (0x00011c75) popup_toobar_trans_pane_cp01_ParamLimits

0x2776,	// (0x00011c75) popup_toobar_trans_pane_cp01

0x2f83,	// (0x00012482) popup_image_details_window_ParamLimits

0x2f83,	// (0x00012482) popup_image_details_window

0xbc7d,	// (0x0001b17c) popup_image_focus_window

0xbdb2,	// (0x0001b2b1) camera2_autofocus_pane_ParamLimits

0xbdb2,	// (0x0001b2b1) camera2_autofocus_pane

0x9454,	// (0x00018953) bg_popup_sub_pane_cp06

0xc248,	// (0x0001b747) popup_image_focus_window_g1

0xc250,	// (0x0001b74f) popup_image_focus_window_g2

0xc258,	// (0x0001b757) popup_image_focus_window_g3

0xc260,	// (0x0001b75f) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0001eb44) popup_image_focus_window_g

0xc268,	// (0x0001b767) popup_image_focus_window_t1

0xc276,	// (0x0001b775) popup_image_focus_window_t2

0xc286,	// (0x0001b785) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0001eb4d) popup_image_focus_window_t

0x9bf5,	// (0x000190f4) camera2_autofocus_pane_g1

0x94c9,	// (0x000189c8) bg_tb_trans_pane_cp01

0xc294,	// (0x0001b793) popup_image_details_window_g1

0xc2a7,	// (0x0001b7a6) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0001eb5f) popup_image_details_window_g

0xc2d0,	// (0x0001b7cf) popup_image_details_window_t1

0xc2e2,	// (0x0001b7e1) popup_image_details_window_t2

0xc2fb,	// (0x0001b7fa) popup_image_details_window_t3

0xc30f,	// (0x0001b80e) popup_image_details_window_t4

0xc32a,	// (0x0001b829) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0001eb66) popup_image_details_window_t

0x9c5b,	// (0x0001915a) bg_calc_paper_pane_ParamLimits

0x9454,	// (0x00018953) grid_highlight_pane_cp013

0x9c6f,	// (0x0001916e) list_calc_pane_ParamLimits

0x9c81,	// (0x00019180) scroll_pane_cp024

0x9c89,	// (0x00019188) bg_calc_display_pane_ParamLimits

0x0191,	// (0x0000f690) calc_display_pane_t1_ParamLimits

0x01a6,	// (0x0000f6a5) calc_display_pane_t2_ParamLimits

0x9c95,	// (0x00019194) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0001e5cb) calc_display_pane_t_ParamLimits

0x0274,	// (0x0000f773) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0001e5e8) cell_calc_pane_g

0x027d,	// (0x0000f77c) cell_calc_pane_t1

0x9d02,	// (0x00019201) grid_highlight_pane_cp02_ParamLimits

0x9d18,	// (0x00019217) toolbar_button_pane_cp01_ParamLimits

0x9d18,	// (0x00019217) toolbar_button_pane_cp01

0xabf3,	// (0x0001a0f2) temp_image_control_pane_ParamLimits

0xabf3,	// (0x0001a0f2) temp_image_control_pane

0x94c9,	// (0x000189c8) main_mp3_pane

0xc344,	// (0x0001b843) temp_image_control_pane_g1_ParamLimits

0xc344,	// (0x0001b843) temp_image_control_pane_g1

0xc352,	// (0x0001b851) temp_image_control_pane_g2_ParamLimits

0xc352,	// (0x0001b851) temp_image_control_pane_g2

0xc364,	// (0x0001b863) temp_image_control_pane_g3_ParamLimits

0xc364,	// (0x0001b863) temp_image_control_pane_g3

0x34be,	// (0x000129bd) temp_image_control_pane_g4_ParamLimits

0x34be,	// (0x000129bd) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0001eb71) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0001eb71) temp_image_control_pane_g

0xc344,	// (0x0001b843) main_mp3_pane_g1

0x34d1,	// (0x000129d0) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0001eb7a) main_mp3_pane_g

0xc399,	// (0x0001b898) main_mp3_pane_t1

0x9c03,	// (0x00019102) main_camera_pane_g8_ParamLimits

0x9c03,	// (0x00019102) main_camera_pane_g8

0x0ac1,	// (0x0000ffc0) main_video_pane_g7_ParamLimits

0x0ac1,	// (0x0000ffc0) main_video_pane_g7

0xa999,	// (0x00019e98) main_camera2_pane_t7_ParamLimits

0xa999,	// (0x00019e98) main_camera2_pane_t7

0xa005,	// (0x00019504) scroll_pane_cp025_ParamLimits

0xa005,	// (0x00019504) scroll_pane_cp025

0xa019,	// (0x00019518) scroll_pane_cp026_ParamLimits

0xa019,	// (0x00019518) scroll_pane_cp026

0xa028,	// (0x00019527) wml_content_pane_ParamLimits

0x9454,	// (0x00018953) main_touch_calib_pane

0x35a3,	// (0x00012aa2) main_touch_calib_pane_g1

0x35b5,	// (0x00012ab4) main_touch_calib_pane_g2

0x35c7,	// (0x00012ac6) main_touch_calib_pane_g3

0x35d9,	// (0x00012ad8) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0001eb98) main_touch_calib_pane_g

0x35eb,	// (0x00012aea) main_touch_calib_pane_t1

0x3605,	// (0x00012b04) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0001eba1) main_touch_calib_pane_t

0xa7ef,	// (0x00019cee) mup_progress_pane_cp02

0xa80e,	// (0x00019d0d) navi_pane_g1

0xa870,	// (0x00019d6f) navi_pane_mp_t3

0x94c9,	// (0x000189c8) main_mp3_pane_ParamLimits

0x313c,	// (0x0001263b) navi_pane_ParamLimits

0xc344,	// (0x0001b843) main_mp3_pane_g1_ParamLimits

0x34d1,	// (0x000129d0) main_mp3_pane_g2_ParamLimits

0x34dd,	// (0x000129dc) main_mp3_pane_g3_ParamLimits

0x34dd,	// (0x000129dc) main_mp3_pane_g3

0x34eb,	// (0x000129ea) main_mp3_pane_g4_ParamLimits

0x34eb,	// (0x000129ea) main_mp3_pane_g4

0x9bf5,	// (0x000190f4) main_mp3_pane_g5_ParamLimits

0x9bf5,	// (0x000190f4) main_mp3_pane_g5

0xc374,	// (0x0001b873) main_mp3_pane_g6_ParamLimits

0xc374,	// (0x0001b873) main_mp3_pane_g6

0xc381,	// (0x0001b880) main_mp3_pane_g7_ParamLimits

0xc381,	// (0x0001b880) main_mp3_pane_g7

0xc38d,	// (0x0001b88c) main_mp3_pane_g8_ParamLimits

0xc38d,	// (0x0001b88c) main_mp3_pane_g8

0xf67b,	// (0x0001eb7a) main_mp3_pane_g_ParamLimits

0x34f7,	// (0x000129f6) main_mp3_pane_t2

0x3505,	// (0x00012a04) main_mp3_pane_t3

0xc3a7,	// (0x0001b8a6) main_mp3_pane_t4

0xc3b5,	// (0x0001b8b4) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0001eb8b) main_mp3_pane_t

0xc3c3,	// (0x0001b8c2) mup_progress_pane_cp01

0x9472,	// (0x00018971) aid_zoom_text_secondary2

0xc1d5,	// (0x0001b6d4) list_cale_ev2_pane

0xc1dd,	// (0x0001b6dc) scroll_pane_cp023_ParamLimits

0x365f,	// (0x00012b5e) field_cale_ev2_pane_ParamLimits

0x365f,	// (0x00012b5e) field_cale_ev2_pane

0x3683,	// (0x00012b82) field_cale_ev2_pane_g1_ParamLimits

0x3683,	// (0x00012b82) field_cale_ev2_pane_g1

0x368f,	// (0x00012b8e) field_cale_ev2_pane_g2_ParamLimits

0x368f,	// (0x00012b8e) field_cale_ev2_pane_g2

0x36a7,	// (0x00012ba6) field_cale_ev2_pane_g3_ParamLimits

0x36a7,	// (0x00012ba6) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0001ebac) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0001ebac) field_cale_ev2_pane_g

0x36bf,	// (0x00012bbe) field_cale_ev2_pane_t1_ParamLimits

0x36bf,	// (0x00012bbe) field_cale_ev2_pane_t1

0x36d6,	// (0x00012bd5) field_cale_ev2_pane_t2_ParamLimits

0x36d6,	// (0x00012bd5) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0001ebb5) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0001ebb5) field_cale_ev2_pane_t

0x258a,	// (0x00011a89) main_postcard_pane_g5_ParamLimits

0x258a,	// (0x00011a89) main_postcard_pane_g5

0x25a0,	// (0x00011a9f) main_postcard_pane_g6_ParamLimits

0x25a0,	// (0x00011a9f) main_postcard_pane_g6

0x94c9,	// (0x000189c8) camera2_autofocus_pane_cp_ParamLimits

0x94c9,	// (0x000189c8) camera2_autofocus_pane_cp

0x94c9,	// (0x000189c8) main_mup3_pane

0x3735,	// (0x00012c34) main_mup3_pane_g1_ParamLimits

0x3735,	// (0x00012c34) main_mup3_pane_g1

0x3757,	// (0x00012c56) main_mup3_pane_g2_ParamLimits

0x3757,	// (0x00012c56) main_mup3_pane_g2

0x37d2,	// (0x00012cd1) main_mup3_pane_g3_ParamLimits

0x37d2,	// (0x00012cd1) main_mup3_pane_g3

0x383c,	// (0x00012d3b) main_mup3_pane_g4_ParamLimits

0x383c,	// (0x00012d3b) main_mup3_pane_g4

0x38a6,	// (0x00012da5) main_mup3_pane_g5_ParamLimits

0x38a6,	// (0x00012da5) main_mup3_pane_g5

0x3910,	// (0x00012e0f) main_mup3_pane_g6_ParamLimits

0x3910,	// (0x00012e0f) main_mup3_pane_g6

0x9c03,	// (0x00019102) main_mup3_pane_g7_ParamLimits

0x9c03,	// (0x00019102) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0001ebc5) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0001ebc5) main_mup3_pane_g

0x3994,	// (0x00012e93) main_mup3_pane_t1_ParamLimits

0x3994,	// (0x00012e93) main_mup3_pane_t1

0x39fe,	// (0x00012efd) main_mup3_pane_t2_ParamLimits

0x39fe,	// (0x00012efd) main_mup3_pane_t2

0x3ad4,	// (0x00012fd3) main_mup3_pane_t4_ParamLimits

0x3ad4,	// (0x00012fd3) main_mup3_pane_t4

0x3b32,	// (0x00013031) main_mup3_pane_t5_ParamLimits

0x3b32,	// (0x00013031) main_mup3_pane_t5

0x3bfa,	// (0x000130f9) main_mup3_pane_t6_ParamLimits

0x3bfa,	// (0x000130f9) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0001ebd6) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0001ebd6) main_mup3_pane_t

0x3cb2,	// (0x000131b1) mup3_progress_pane_ParamLimits

0x3cb2,	// (0x000131b1) mup3_progress_pane

0x3d4a,	// (0x00013249) popup_mup3_control_window_ParamLimits

0x3d4a,	// (0x00013249) popup_mup3_control_window

0xc3d7,	// (0x0001b8d6) popup_mup3_text_window

0x3d80,	// (0x0001327f) mup3_progress_pane_t1

0x3d9f,	// (0x0001329e) mup3_progress_pane_t2

0xc3df,	// (0x0001b8de) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0001ebe3) mup3_progress_pane_t

0xc3fc,	// (0x0001b8fb) mup_progress_pane_cp03

0x9454,	// (0x00018953) bg_tb_trans_pane_cp04

0x3dbe,	// (0x000132bd) mup3_volume_pane

0x3dc6,	// (0x000132c5) popup_mup3_control_window_g1

0x3dcf,	// (0x000132ce) mup3_volume_pane_g1

0x3dd8,	// (0x000132d7) mup3_volume_pane_g2

0x3de1,	// (0x000132e0) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0001ebea) mup3_volume_pane_g

0x9454,	// (0x00018953) bg_tb_trans_pane_cp03

0xc40c,	// (0x0001b90b) popup_mup3_text_window_g1

0xc414,	// (0x0001b913) popup_mup3_text_window_t1

0x9ce3,	// (0x000191e2) list_calc_item_pane_g1_ParamLimits

0xbec9,	// (0x0001b3c8) mup_volume_pane_cp_g1

0x361f,	// (0x00012b1e) main_touch_calib_pane_t3

0x3633,	// (0x00012b32) main_touch_calib_pane_t4

0x3649,	// (0x00012b48) main_touch_calib_pane_t5

0x945e,	// (0x0001895d) aid_cell_size_toolbar2

0x9466,	// (0x00018965) aid_popup3_width_pane

0x9472,	// (0x00018971) aid_zoom_text_msg_primary

0x099a,	// (0x0000fe99) vorec_t7

0x9ca7,	// (0x000191a6) bg_calc_paper_pane_g1_ParamLimits

0x9cb3,	// (0x000191b2) bg_calc_paper_pane_g2_ParamLimits

0x9cbf,	// (0x000191be) bg_calc_paper_pane_g3_ParamLimits

0x9ccb,	// (0x000191ca) bg_calc_paper_pane_g4_ParamLimits

0x9cd7,	// (0x000191d6) bg_calc_paper_pane_g5_ParamLimits

0x01f6,	// (0x0000f6f5) bg_calc_paper_pane_g6_ParamLimits

0x0209,	// (0x0000f708) bg_calc_paper_pane_g7_ParamLimits

0x021c,	// (0x0000f71b) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0001e5d2) bg_calc_paper_pane_g_ParamLimits

0x022f,	// (0x0000f72e) calc_bg_paper_pane_g9_ParamLimits

0x94c9,	// (0x000189c8) image_qvga_pane_ParamLimits

0x94c9,	// (0x000189c8) image_qvga_pane

0x9b7a,	// (0x00019079) bg_popup_sub_pane_cp04_ParamLimits

0xab2a,	// (0x0001a029) popup_mup_playback_window_g1_ParamLimits

0xab36,	// (0x0001a035) popup_mup_playback_window_t1_ParamLimits

0xab4b,	// (0x0001a04a) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0001e930) popup_mup_playback_window_t_ParamLimits

0x9c03,	// (0x00019102) main_mup2_pane_g3_ParamLimits

0x9c03,	// (0x00019102) main_mup2_pane_g3

0x0cb6,	// (0x000101b5) popup_toolbar_window_cp04

0xaf46,	// (0x0001a445) popup_call2_audio_second_window_g3_ParamLimits

0xaf46,	// (0x0001a445) popup_call2_audio_second_window_g3

0xb35e,	// (0x0001a85d) popup_call2_audio_first_window_g4_ParamLimits

0xb35e,	// (0x0001a85d) popup_call2_audio_first_window_g4

0xb985,	// (0x0001ae84) popup_call2_audio_in_window_g4_ParamLimits

0xb985,	// (0x0001ae84) popup_call2_audio_in_window_g4

0x26d2,	// (0x00011bd1) aid_area_sk_bg_cut_ParamLimits

0x26d2,	// (0x00011bd1) aid_area_sk_bg_cut

0xab60,	// (0x0001a05f) aid_area_sk_bg_cut_2_ParamLimits

0xab60,	// (0x0001a05f) aid_area_sk_bg_cut_2

0x9454,	// (0x00018953) aid_placing_details_win

0x9454,	// (0x00018953) aid_placing_details_win_2

0x9bf5,	// (0x000190f4) camera2_autofocus_pane_g1_ParamLimits

0xff4e,	// (0x0000f44d) popup_fixed_preview_cale_window_ParamLimits

0xff4e,	// (0x0000f44d) popup_fixed_preview_cale_window

0xa8c0,	// (0x00019dbf) navi_slider_pane_g3

0xa8c9,	// (0x00019dc8) navi_slider_pane_g4

0xa8d2,	// (0x00019dd1) navi_slider_pane_g5

0xa8c0,	// (0x00019dbf) navi_slider_pane_g6

0xa8db,	// (0x00019dda) navi_slider_pane_g7

0xaa1f,	// (0x00019f1e) mup_scale_pane_g3

0xaa28,	// (0x00019f27) mup_scale_pane_g4

0xaa31,	// (0x00019f30) mup_scale_pane_g5

0x2348,	// (0x00011847) mup_scale_pane_g6

0x2351,	// (0x00011850) mup_scale_pane_g7

0x9eea,	// (0x000193e9) cams2_slider_pane_g3

0x9eea,	// (0x000193e9) cams2_slider_pane_g4

0x9eea,	// (0x000193e9) cams2_slider_pane_g5

0x9eea,	// (0x000193e9) cams2_slider_pane_g6

0x9eea,	// (0x000193e9) cams2_slider_pane_g7

0x9eea,	// (0x000193e9) camera2_autofocus_pane_cp_g1

0xbc5d,	// (0x0001b15c) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc5d,	// (0x0001b15c) bg_popup_preview_window_pane_cp02

0xc422,	// (0x0001b921) list_fp_cale_pane_ParamLimits

0xc422,	// (0x0001b921) list_fp_cale_pane

0xc42e,	// (0x0001b92d) popup_fixed_preview_cale_window_t1_ParamLimits

0xc42e,	// (0x0001b92d) popup_fixed_preview_cale_window_t1

0x3dea,	// (0x000132e9) popup_fixed_preview_cale_window_t2_ParamLimits

0x3dea,	// (0x000132e9) popup_fixed_preview_cale_window_t2

0x3dff,	// (0x000132fe) popup_fixed_preview_cale_window_t3_ParamLimits

0x3dff,	// (0x000132fe) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0001ebf1) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0001ebf1) popup_fixed_preview_cale_window_t

0x3e16,	// (0x00013315) list_single_fp_cale_pane_ParamLimits

0x3e16,	// (0x00013315) list_single_fp_cale_pane

0xc44c,	// (0x0001b94b) list_single_fp_cale_pane_g1_ParamLimits

0xc44c,	// (0x0001b94b) list_single_fp_cale_pane_g1

0xc458,	// (0x0001b957) list_single_fp_cale_pane_g2_ParamLimits

0xc458,	// (0x0001b957) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0001ebf8) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0001ebf8) list_single_fp_cale_pane_g

0xc471,	// (0x0001b970) list_single_fp_cale_pane_t1_ParamLimits

0xc471,	// (0x0001b970) list_single_fp_cale_pane_t1

0xc483,	// (0x0001b982) list_single_fp_cale_pane_t2_ParamLimits

0xc483,	// (0x0001b982) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0001ebff) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0001ebff) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9454,	// (0x00018953) main_dialer_pane

0x9454,	// (0x00018953) aid_cell_size_keypad

0x9454,	// (0x00018953) dialer_ne_pane

0x9454,	// (0x00018953) grid_dialer_command_1_pane

0x9454,	// (0x00018953) grid_dialer_command_2_pane

0x9454,	// (0x00018953) grid_dialer_keypad_pane

0x3e2b,	// (0x0001332a) bg_popup_call_pane_cp06_ParamLimits

0x3e2b,	// (0x0001332a) bg_popup_call_pane_cp06

0x3e2b,	// (0x0001332a) dialer_ne_clear_pane_ParamLimits

0x3e2b,	// (0x0001332a) dialer_ne_clear_pane

0x9eea,	// (0x000193e9) dialer_ne_pane_g1

0xa999,	// (0x00019e98) dialer_ne_pane_t1_ParamLimits

0xa999,	// (0x00019e98) dialer_ne_pane_t1

0x3e39,	// (0x00013338) dialer_ne_pane_t2_ParamLimits

0x3e39,	// (0x00013338) dialer_ne_pane_t2

0x3e61,	// (0x00013360) dialer_ne_pane_t3_ParamLimits

0x3e61,	// (0x00013360) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0001ec04) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0001ec04) dialer_ne_pane_t

0x3e61,	// (0x00013360) dialer_ne_pane_t3_copy1_ParamLimits

0x3e61,	// (0x00013360) dialer_ne_pane_t3_copy1

0xc4b6,	// (0x0001b9b5) cell_dialer_keypad_pane_ParamLimits

0xc4b6,	// (0x0001b9b5) cell_dialer_keypad_pane

0x94c9,	// (0x000189c8) cell_dialer_command_1_pane_ParamLimits

0x94c9,	// (0x000189c8) cell_dialer_command_1_pane

0xc4cd,	// (0x0001b9cc) cell_dialer_command_2_pane_ParamLimits

0xc4cd,	// (0x0001b9cc) cell_dialer_command_2_pane

0x94c9,	// (0x000189c8) bg_button_pane_cp02_ParamLimits

0x94c9,	// (0x000189c8) bg_button_pane_cp02

0x9bf5,	// (0x000190f4) cell_dialer_keypad_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) cell_dialer_keypad_pane_g1

0x94c9,	// (0x000189c8) bg_button_pane_cp03_ParamLimits

0x94c9,	// (0x000189c8) bg_button_pane_cp03

0x9bf5,	// (0x000190f4) cell_dialer_command_1_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) cell_dialer_command_1_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp04

0x9eea,	// (0x000193e9) cell_dialer_command_2_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp06

0x9eea,	// (0x000193e9) dialer_ne_clear_pane_g1

0x2057,	// (0x00011556) navi_pane_g2

0x2085,	// (0x00011584) navi_pane_g3

0x0002,

0xf334,	// (0x0001e833) navi_pane_g

0x20b0,	// (0x000115af) navi_pane_mv_g2

0x20d7,	// (0x000115d6) navi_pane_mv_g5

0x20df,	// (0x000115de) navi_pane_mv_t1

0x9c89,	// (0x00019188) main_clock2_pane

0x94c9,	// (0x000189c8) main_clock2_list_pane_ParamLimits

0x94c9,	// (0x000189c8) main_clock2_list_pane

0x3ef2,	// (0x000133f1) main_clock2_pane_t1_ParamLimits

0x3ef2,	// (0x000133f1) main_clock2_pane_t1

0x3f2d,	// (0x0001342c) main_clock2_pane_t2_ParamLimits

0x3f2d,	// (0x0001342c) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0001ec10) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0001ec10) main_clock2_pane_t

0x3fcc,	// (0x000134cb) popup_clock_analogue_window_cp03_ParamLimits

0x3fcc,	// (0x000134cb) popup_clock_analogue_window_cp03

0x3ff1,	// (0x000134f0) popup_clock_digital_window_cp02_ParamLimits

0x3ff1,	// (0x000134f0) popup_clock_digital_window_cp02

0x406a,	// (0x00013569) main_clock2_list_single_pane_ParamLimits

0x406a,	// (0x00013569) main_clock2_list_single_pane

0x9eaa,	// (0x000193a9) list_highlight_pane_cp05

0xc50e,	// (0x0001ba0d) main_clock2_list_single_pane_t1

0x0cb6,	// (0x000101b5) popup_toolbar_window_cp04_ParamLimits

0x9c03,	// (0x00019102) camera2_autofocus_pane_g2_ParamLimits

0x9c03,	// (0x00019102) camera2_autofocus_pane_g2

0x9c03,	// (0x00019102) camera2_autofocus_pane_g3_ParamLimits

0x9c03,	// (0x00019102) camera2_autofocus_pane_g3

0x9c03,	// (0x00019102) camera2_autofocus_pane_g4_ParamLimits

0x9c03,	// (0x00019102) camera2_autofocus_pane_g4

0x9c03,	// (0x00019102) camera2_autofocus_pane_g5_ParamLimits

0x9c03,	// (0x00019102) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0001eb54) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0001eb54) camera2_autofocus_pane_g

0x36eb,	// (0x00012bea) camera2_autofocus_pane_cp_g2

0x36f3,	// (0x00012bf2) camera2_autofocus_pane_cp_g3

0x36fb,	// (0x00012bfa) camera2_autofocus_pane_cp_g4

0x3703,	// (0x00012c02) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0001ebba) camera2_autofocus_pane_cp_g

0x9454,	// (0x00018953) popup_dialer_spcha_window

0x9454,	// (0x00018953) bg_popup_sub_pane_cp07

0x9454,	// (0x00018953) list_spcha_pane

0xc51c,	// (0x0001ba1b) list_single_spcha_pane_ParamLimits

0xc51c,	// (0x0001ba1b) list_single_spcha_pane

0x9454,	// (0x00018953) list_highlight_pane_cp06

0xa476,	// (0x00019975) list_single_spcha_pane_t1

0xb72f,	// (0x0001ac2e) popup_call2_audio_out_window_g4_ParamLimits

0xb72f,	// (0x0001ac2e) popup_call2_audio_out_window_g4

0x9454,	// (0x00018953) main_imed2_pane

0xbc87,	// (0x0001b186) popup_imed_adjust2_window

0x2f9b,	// (0x0001249a) popup_imed_trans_window_ParamLimits

0x2f9b,	// (0x0001249a) popup_imed_trans_window

0xbf9e,	// (0x0001b49d) popup_blid_sat_info2_window_t1

0xbfac,	// (0x0001b4ab) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0001eae9) popup_blid_sat_info2_window_t

0x4125,	// (0x00013624) aid_size_cell_colour_35

0x4145,	// (0x00013644) aid_size_cell_colour_112

0x4165,	// (0x00013664) aid_size_cell_effect

0xa9ad,	// (0x00019eac) bg_tb_trans_pane_cp02

0xa39b,	// (0x0001989a) heading_imed_pane

0x4185,	// (0x00013684) listscroll_imed_pane

0xc52e,	// (0x0001ba2d) heading_imed_pane_g1

0xc536,	// (0x0001ba35) heading_imed_pane_t1

0xc544,	// (0x0001ba43) grid_imed_colour_35_pane_ParamLimits

0xc544,	// (0x0001ba43) grid_imed_colour_35_pane

0x4191,	// (0x00013690) grid_imed_effect_pane

0xc560,	// (0x0001ba5f) list_imed_aspect_pane

0x41a8,	// (0x000136a7) scroll_pane_cp027_ParamLimits

0x41a8,	// (0x000136a7) scroll_pane_cp027

0x41b9,	// (0x000136b8) cell_imed_effect_pane_ParamLimits

0x41b9,	// (0x000136b8) cell_imed_effect_pane

0xc568,	// (0x0001ba67) cell_imed_colour_pane_ParamLimits

0xc568,	// (0x0001ba67) cell_imed_colour_pane

0xc5b2,	// (0x0001bab1) cell_imed_colour_pane_g1_ParamLimits

0xc5b2,	// (0x0001bab1) cell_imed_colour_pane_g1

0xc5c3,	// (0x0001bac2) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5c3,	// (0x0001bac2) hgihlgiht_grid_pane_cp016

0x41e4,	// (0x000136e3) cell_imed_effect_pane_g1

0x41ec,	// (0x000136eb) grid_highlight_pane_cp017

0xc5d4,	// (0x0001bad3) list_imed_single_pane_ParamLimits

0xc5d4,	// (0x0001bad3) list_imed_single_pane

0x9454,	// (0x00018953) list_highlight_pane_cp07

0xc5e8,	// (0x0001bae7) list_imed_aspect_pane_comp1_t1

0xa9ad,	// (0x00019eac) bg_tb_trans_pane_cp05

0xc60a,	// (0x0001bb09) popup_imed_adjust2_window_g1

0xc631,	// (0x0001bb30) popup_imed_adjust2_window_t1

0xc649,	// (0x0001bb48) slider_imed_adjust_pane

0xc65d,	// (0x0001bb5c) slider_imed_adjust_pane_g1

0xc66d,	// (0x0001bb6c) slider_imed_adjust_pane_g2

0xc67d,	// (0x0001bb7c) slider_imed_adjust_pane_g3

0xc68e,	// (0x0001bb8d) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0001ec2d) slider_imed_adjust_pane_g

0x41f5,	// (0x000136f4) aid_size_cell_clipart2

0xc69f,	// (0x0001bb9e) grid_imed_clipart_pane

0xc6a9,	// (0x0001bba8) scroll_pane_cp031

0x4201,	// (0x00013700) cell_imed_clipart_pane_ParamLimits

0x4201,	// (0x00013700) cell_imed_clipart_pane

0x421e,	// (0x0001371d) cell_imed_clipart_pane_g1

0x9454,	// (0x00018953) grid_highlight_pane_cp014

0x3ed0,	// (0x000133cf) main_clock2_pane_g1_ParamLimits

0x3ed0,	// (0x000133cf) main_clock2_pane_g1

0x4011,	// (0x00013510) aid_call2_pane_cp10

0x4023,	// (0x00013522) aid_call_pane_cp10

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g1

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g2

0x4035,	// (0x00013534) popup_clock_analogue_window_cp10_g3

0x4035,	// (0x00013534) popup_clock_analogue_window_cp10_g4

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0001ec1b) popup_clock_analogue_window_cp10_g

0x404b,	// (0x0001354a) popup_clock_analogue_window_cp10_t1

0x407c,	// (0x0001357b) clock_digital_number_pane_cp10_ParamLimits

0x407c,	// (0x0001357b) clock_digital_number_pane_cp10

0x4096,	// (0x00013595) clock_digital_number_pane_cp11_ParamLimits

0x4096,	// (0x00013595) clock_digital_number_pane_cp11

0x40b0,	// (0x000135af) clock_digital_number_pane_cp12_ParamLimits

0x40b0,	// (0x000135af) clock_digital_number_pane_cp12

0x40cc,	// (0x000135cb) clock_digital_number_pane_cp13_ParamLimits

0x40cc,	// (0x000135cb) clock_digital_number_pane_cp13

0x40e8,	// (0x000135e7) clock_digital_separator_pane_cp10_ParamLimits

0x40e8,	// (0x000135e7) clock_digital_separator_pane_cp10

0x4104,	// (0x00013603) popup_clock_digital_window_cp02_t1_ParamLimits

0x4104,	// (0x00013603) popup_clock_digital_window_cp02_t1

0x9b72,	// (0x00019071) clock_digital_number_pane_cp10_g1

0x9b72,	// (0x00019071) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0001ec36) clock_digital_number_pane_cp10_g

0x9b72,	// (0x00019071) clock_digital_separator_pane_cp10_g1

0x9b72,	// (0x00019071) clock_digital_separator_pane_g2_cp10

0xa87e,	// (0x00019d7d) navi_pane_vded_g4

0xa887,	// (0x00019d86) navi_pane_vded_g5

0xa890,	// (0x00019d8f) navi_pane_vded_t1

0x9454,	// (0x00018953) main_vded_pane

0x4227,	// (0x00013726) main_vded_pane_g1

0x4233,	// (0x00013732) main_vded_pane_g2

0x423f,	// (0x0001373e) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0001ec3b) main_vded_pane_g

0x424b,	// (0x0001374a) main_vded_pane_t1

0x4259,	// (0x00013758) main_vded_pane_t2

0x0001,

0xf743,	// (0x0001ec42) main_vded_pane_t

0x4267,	// (0x00013766) vded_slider_pane

0x4271,	// (0x00013770) vded_video_pane

0xc6b1,	// (0x0001bbb0) vded_video_pane_g1

0x427d,	// (0x0001377c) vded_video_pane_g2

0x9eea,	// (0x000193e9) vded_video_pane_g3

0x0002,

0xf748,	// (0x0001ec47) vded_video_pane_g

0xc6bb,	// (0x0001bbba) vded_slider_pane_g1

0xbec9,	// (0x0001b3c8) vded_slider_pane_g2

0xc6c4,	// (0x0001bbc3) vded_slider_pane_g3

0xc6cd,	// (0x0001bbcc) vded_slider_pane_g4

0xc6d6,	// (0x0001bbd5) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0001ec4e) vded_slider_pane_g

0x3d34,	// (0x00013233) mup3_rocker_pane_ParamLimits

0x3d34,	// (0x00013233) mup3_rocker_pane

0x4286,	// (0x00013785) mup3_control_keys_pane_g1

0x428e,	// (0x0001378d) mup3_control_keys_pane_g2

0x4296,	// (0x00013795) mup3_control_keys_pane_g3

0x429e,	// (0x0001379d) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0001ec59) mup3_control_keys_pane_g

0xff83,	// (0x0000f482) popup_toolbar2_fixed_window_cp01_ParamLimits

0xff83,	// (0x0000f482) popup_toolbar2_fixed_window_cp01

0x3d6a,	// (0x00013269) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3d6a,	// (0x00013269) popup_toolbar2_fixed_window_cp02

0xb0b8,	// (0x0001a5b7) popup_call2_audio_second_window_t4_ParamLimits

0xb0b8,	// (0x0001a5b7) popup_call2_audio_second_window_t4

0xb5f4,	// (0x0001aaf3) popup_call2_audio_first_window_t6_ParamLimits

0xb5f4,	// (0x0001aaf3) popup_call2_audio_first_window_t6

0xb832,	// (0x0001ad31) popup_call2_audio_out_window_t6_ParamLimits

0xb832,	// (0x0001ad31) popup_call2_audio_out_window_t6

0x9454,	// (0x00018953) main_vitu_pane

0x94c9,	// (0x000189c8) aid_size_cell_itu_ParamLimits

0x94c9,	// (0x000189c8) aid_size_cell_itu

0x94c9,	// (0x000189c8) bg_popup_window_pane_cp08_ParamLimits

0x94c9,	// (0x000189c8) bg_popup_window_pane_cp08

0x94c9,	// (0x000189c8) field_vitu_entry_pane_ParamLimits

0x94c9,	// (0x000189c8) field_vitu_entry_pane

0x94c9,	// (0x000189c8) grid_vitu_function_pane_ParamLimits

0x94c9,	// (0x000189c8) grid_vitu_function_pane

0x94c9,	// (0x000189c8) grid_vitu_itu_pane_ParamLimits

0x94c9,	// (0x000189c8) grid_vitu_itu_pane

0x94c9,	// (0x000189c8) cell_vitu_itu_pane_ParamLimits

0x94c9,	// (0x000189c8) cell_vitu_itu_pane

0x94c9,	// (0x000189c8) cell_vitu_function_pane_ParamLimits

0x94c9,	// (0x000189c8) cell_vitu_function_pane

0x94c9,	// (0x000189c8) bg_popup_sub_pane_cp08_ParamLimits

0x94c9,	// (0x000189c8) bg_popup_sub_pane_cp08

0x9ebc,	// (0x000193bb) field_vitu_entry_pane_t1_ParamLimits

0x9ebc,	// (0x000193bb) field_vitu_entry_pane_t1

0xc6df,	// (0x0001bbde) field_vitu_entry_pane_t2_ParamLimits

0xc6df,	// (0x0001bbde) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0001ec62) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0001ec62) field_vitu_entry_pane_t

0xbdf0,	// (0x0001b2ef) bg_button_pane_cp05_ParamLimits

0xbdf0,	// (0x0001b2ef) bg_button_pane_cp05

0xc6fc,	// (0x0001bbfb) cell_vitu_itu_pane_g1

0xa985,	// (0x00019e84) cell_vitu_itu_pane_t1_ParamLimits

0xa985,	// (0x00019e84) cell_vitu_itu_pane_t1

0xa985,	// (0x00019e84) cell_vitu_itu_pane_t2_ParamLimits

0xa985,	// (0x00019e84) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0001ec67) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0001ec67) cell_vitu_itu_pane_t

0x9454,	// (0x00018953) bg_button_pane_cp07

0x9eea,	// (0x000193e9) cell_vitu_function_pane_g1

0x9c33,	// (0x00019132) main_calc_pane_g1

0xfdad,	// (0x0000f2ac) aid_visual_content_pane

0x9454,	// (0x00018953) main_vradio_pane

0x9bf5,	// (0x000190f4) main_vradio_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) main_vradio_pane_g1

0x9c03,	// (0x00019102) main_vradio_pane_g2_ParamLimits

0x9c03,	// (0x00019102) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0001ec6e) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0001ec6e) main_vradio_pane_g

0x9ebc,	// (0x000193bb) main_vradio_pane_t1_ParamLimits

0x9ebc,	// (0x000193bb) main_vradio_pane_t1

0x9ebc,	// (0x000193bb) main_vradio_pane_t2_ParamLimits

0x9ebc,	// (0x000193bb) main_vradio_pane_t2

0xa999,	// (0x00019e98) main_vradio_pane_t3_ParamLimits

0xa999,	// (0x00019e98) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0001ec73) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0001ec73) main_vradio_pane_t

0x94c9,	// (0x000189c8) vradio_rocker_control_pane_ParamLimits

0x94c9,	// (0x000189c8) vradio_rocker_control_pane

0x94c9,	// (0x000189c8) vradio_station_info_pane_ParamLimits

0x94c9,	// (0x000189c8) vradio_station_info_pane

0x94c9,	// (0x000189c8) vradio_frequency_info_pane_ParamLimits

0x94c9,	// (0x000189c8) vradio_frequency_info_pane

0x9eea,	// (0x000193e9) vradio_station_info_pane_g1

0xa985,	// (0x00019e84) vradio_station_info_pane_t1_ParamLimits

0xa985,	// (0x00019e84) vradio_station_info_pane_t1

0xa999,	// (0x00019e98) vradio_station_info_pane_t2_ParamLimits

0xa999,	// (0x00019e98) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0001ec7a) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0001ec7a) vradio_station_info_pane_t

0x9454,	// (0x00018953) vradio_tuning_pane

0x42ae,	// (0x000137ad) vradio_rocker_control_pane_g1

0xc718,	// (0x0001bc17) vradio_rocker_control_pane_g2

0x42b8,	// (0x000137b7) vradio_rocker_control_pane_g3

0x42c2,	// (0x000137c1) vradio_rocker_control_pane_g4

0x42cc,	// (0x000137cb) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0001ec7f) vradio_rocker_control_pane_g

0x9eea,	// (0x000193e9) vradio_frequency_info_pane_g1

0x9ebc,	// (0x000193bb) vradio_frequency_info_pane_t1_ParamLimits

0x9ebc,	// (0x000193bb) vradio_frequency_info_pane_t1

0x42d6,	// (0x000137d5) vradio_tuning_pane_g1

0x42e1,	// (0x000137e0) vradio_tuning_pane_t1

0x9482,	// (0x00018981) area_side_right_pane_ParamLimits

0x9482,	// (0x00018981) area_side_right_pane

0xbc24,	// (0x0001b123) status_small_pane_g1

0xbc2c,	// (0x0001b12b) status_small_pane_g2

0xbc35,	// (0x0001b134) status_small_pane_g3

0xbc3e,	// (0x0001b13d) status_small_pane_g4

0x0003,

0xf54c,	// (0x0001ea4b) status_small_pane_g

0xbc47,	// (0x0001b146) status_small_pane_t1

0x9454,	// (0x00018953) main_video3_pane

0xc720,	// (0x0001bc1f) cams_zoom_vslider_pane

0xc728,	// (0x0001bc27) image3_wide_pane_ParamLimits

0xc728,	// (0x0001bc27) image3_wide_pane

0xc742,	// (0x0001bc41) image3_wide_small_pane

0xc74e,	// (0x0001bc4d) main_video3_pane_g1_ParamLimits

0xc74e,	// (0x0001bc4d) main_video3_pane_g1

0xc76a,	// (0x0001bc69) main_video3_pane_g2_ParamLimits

0xc76a,	// (0x0001bc69) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0001ec8a) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0001ec8a) main_video3_pane_g

0xc786,	// (0x0001bc85) main_video3_pane_t1_ParamLimits

0xc786,	// (0x0001bc85) main_video3_pane_t1

0xc7b1,	// (0x0001bcb0) main_video3_pane_t2_ParamLimits

0xc7b1,	// (0x0001bcb0) main_video3_pane_t2

0xc7de,	// (0x0001bcdd) main_video3_pane_t3_ParamLimits

0xc7de,	// (0x0001bcdd) main_video3_pane_t3

0x0002,

0xf790,	// (0x0001ec8f) main_video3_pane_t_ParamLimits

0xf790,	// (0x0001ec8f) main_video3_pane_t

0xc80b,	// (0x0001bd0a) cams_zoom_vslider_pane_g1

0xc814,	// (0x0001bd13) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0001ec96) cams_zoom_vslider_pane_g

0xc81c,	// (0x0001bd1b) small_slider_vertical_pane

0x9eea,	// (0x000193e9) small_slider_vertical_pane_g1

0x9eea,	// (0x000193e9) small_slider_vertical_pane_g2

0xc824,	// (0x0001bd23) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0001ec9b) small_slider_vertical_pane_g

0x9454,	// (0x00018953) main_hwr_training_pane

0xc82d,	// (0x0001bd2c) hwr_training_instruct_pane_ParamLimits

0xc82d,	// (0x0001bd2c) hwr_training_instruct_pane

0x42f0,	// (0x000137ef) hwr_training_navi_pane_ParamLimits

0x42f0,	// (0x000137ef) hwr_training_navi_pane

0x430f,	// (0x0001380e) hwr_training_write_pane_ParamLimits

0x430f,	// (0x0001380e) hwr_training_write_pane

0x9454,	// (0x00018953) bg_frame_shadow_pane

0xc864,	// (0x0001bd63) hwr_training_write_pane_g1

0xc86c,	// (0x0001bd6b) hwr_training_write_pane_g2

0xc874,	// (0x0001bd73) hwr_training_write_pane_g3

0xc87c,	// (0x0001bd7b) hwr_training_write_pane_g4

0xc884,	// (0x0001bd83) hwr_training_write_pane_g5

0xc88c,	// (0x0001bd8b) hwr_training_write_pane_g6

0xc894,	// (0x0001bd93) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0001eca2) hwr_training_write_pane_g

0xc89c,	// (0x0001bd9b) hwr_training_navi_pane_g1_ParamLimits

0xc89c,	// (0x0001bd9b) hwr_training_navi_pane_g1

0xc8ae,	// (0x0001bdad) hwr_training_navi_pane_g2_ParamLimits

0xc8ae,	// (0x0001bdad) hwr_training_navi_pane_g2

0xc8c0,	// (0x0001bdbf) hwr_training_navi_pane_g3_ParamLimits

0xc8c0,	// (0x0001bdbf) hwr_training_navi_pane_g3

0xc8d0,	// (0x0001bdcf) hwr_training_navi_pane_g4_ParamLimits

0xc8d0,	// (0x0001bdcf) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0001ecb1) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0001ecb1) hwr_training_navi_pane_g

0xc8dd,	// (0x0001bddc) hwr_training_navi_pane_t1

0x4357,	// (0x00013856) list_single_hwr_training_instruct_pane_ParamLimits

0x4357,	// (0x00013856) list_single_hwr_training_instruct_pane

0xc8eb,	// (0x0001bdea) list_single_hwr_training_instruct_pane_t1

0xc0a5,	// (0x0001b5a4) bg_frame_shadow_pane_g1

0xc8fa,	// (0x0001bdf9) bg_frame_shadow_pane_g2

0xc902,	// (0x0001be01) bg_frame_shadow_pane_g3

0xc90a,	// (0x0001be09) bg_frame_shadow_pane_g4

0xc912,	// (0x0001be11) bg_frame_shadow_pane_g5

0xc91a,	// (0x0001be19) bg_frame_shadow_pane_g6

0xc922,	// (0x0001be21) bg_frame_shadow_pane_g7

0x9d65,	// (0x00019264) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0001ecbc) bg_frame_shadow_pane_g

0x9454,	// (0x00018953) main_video_tele_dialer_pane

0x4373,	// (0x00013872) aid_size_cell_video_keypad_ParamLimits

0x4373,	// (0x00013872) aid_size_cell_video_keypad

0x438d,	// (0x0001388c) grid_video_dialer_keypad_pane_ParamLimits

0x438d,	// (0x0001388c) grid_video_dialer_keypad_pane

0x43d9,	// (0x000138d8) video_down_pane_cp_ParamLimits

0x43d9,	// (0x000138d8) video_down_pane_cp

0x440b,	// (0x0001390a) cell_video_dialer_keypad_pane_ParamLimits

0x440b,	// (0x0001390a) cell_video_dialer_keypad_pane

0xc92a,	// (0x0001be29) bg_button_pane_cp08_ParamLimits

0xc92a,	// (0x0001be29) bg_button_pane_cp08

0x4431,	// (0x00013930) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4431,	// (0x00013930) cell_video_dialer_keypad_pane_g1

0x3d1e,	// (0x0001321d) mup3_rocker2_pane_ParamLimits

0x3d1e,	// (0x0001321d) mup3_rocker2_pane

0x9eea,	// (0x000193e9) mup3_rocker2_pane_g1

0x2e68,	// (0x00012367) main_dialer2_pane

0x9454,	// (0x00018953) main_mp4_pane

0xc954,	// (0x0001be53) main_mp4_pane_g1_ParamLimits

0xc954,	// (0x0001be53) main_mp4_pane_g1

0xc954,	// (0x0001be53) main_mp4_pane_g2_ParamLimits

0xc954,	// (0x0001be53) main_mp4_pane_g2

0x446c,	// (0x0001396b) main_mp4_pane_g3_ParamLimits

0x446c,	// (0x0001396b) main_mp4_pane_g3

0xc962,	// (0x0001be61) main_mp4_pane_g4_ParamLimits

0xc962,	// (0x0001be61) main_mp4_pane_g4

0xc990,	// (0x0001be8f) main_mp4_pane_g5_ParamLimits

0xc990,	// (0x0001be8f) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0001ecdc) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0001ecdc) main_mp4_pane_g

0xca04,	// (0x0001bf03) main_mp4_pane_t1_ParamLimits

0xca04,	// (0x0001bf03) main_mp4_pane_t1

0xca60,	// (0x0001bf5f) main_mp4_pane_t2_ParamLimits

0xca60,	// (0x0001bf5f) main_mp4_pane_t2

0xcab2,	// (0x0001bfb1) main_mp4_pane_t3_ParamLimits

0xcab2,	// (0x0001bfb1) main_mp4_pane_t3

0xcad8,	// (0x0001bfd7) main_mp4_pane_t4_ParamLimits

0xcad8,	// (0x0001bfd7) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0001eced) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0001eced) main_mp4_pane_t

0xcb18,	// (0x0001c017) mp4_progress_pane_ParamLimits

0xcb18,	// (0x0001c017) mp4_progress_pane

0xcb62,	// (0x0001c061) mp4_rocker_pane_ParamLimits

0xcb62,	// (0x0001c061) mp4_rocker_pane

0xcb8c,	// (0x0001c08b) mp4_progress_pane_t1

0xcba5,	// (0x0001c0a4) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0001ecf6) mp4_progress_pane_t

0xcbbe,	// (0x0001c0bd) mup_progress_pane_cp04

0x9eea,	// (0x000193e9) mp4_rocker_pane_g1

0x44b6,	// (0x000139b5) aid_cell_size_keypad2_ParamLimits

0x44b6,	// (0x000139b5) aid_cell_size_keypad2

0x44cc,	// (0x000139cb) dialer2_ne_pane_ParamLimits

0x44cc,	// (0x000139cb) dialer2_ne_pane

0x44e4,	// (0x000139e3) grid_dialer2_keypad_pane_ParamLimits

0x44e4,	// (0x000139e3) grid_dialer2_keypad_pane

0xbdf0,	// (0x0001b2ef) bg_popup_call_pane_cp07_ParamLimits

0xbdf0,	// (0x0001b2ef) bg_popup_call_pane_cp07

0x4500,	// (0x000139ff) dialer2_ne_pane_t1_ParamLimits

0x4500,	// (0x000139ff) dialer2_ne_pane_t1

0x4540,	// (0x00013a3f) cell_dialer2_keypad_pane_ParamLimits

0x4540,	// (0x00013a3f) cell_dialer2_keypad_pane

0xcbe3,	// (0x0001c0e2) bg_button_pane_pane_cp04_ParamLimits

0xcbe3,	// (0x0001c0e2) bg_button_pane_pane_cp04

0x4566,	// (0x00013a65) cell_dialer2_keypad_pane_g1_ParamLimits

0x4566,	// (0x00013a65) cell_dialer2_keypad_pane_g1

0x0b9d,	// (0x0001009c) aid_placing_vt_set_content_ParamLimits

0x0b9d,	// (0x0001009c) aid_placing_vt_set_content

0x0bc1,	// (0x000100c0) aid_placing_vt_set_title_ParamLimits

0x0bc1,	// (0x000100c0) aid_placing_vt_set_title

0x9454,	// (0x00018953) main_image3_pane

0x462c,	// (0x00013b2b) area_side_right_pane_cp01_ParamLimits

0x462c,	// (0x00013b2b) area_side_right_pane_cp01

0xc954,	// (0x0001be53) main_image3_pane_g1_ParamLimits

0xc954,	// (0x0001be53) main_image3_pane_g1

0x4645,	// (0x00013b44) main_image3_pane_g2_ParamLimits

0x4645,	// (0x00013b44) main_image3_pane_g2

0x466d,	// (0x00013b6c) main_image3_pane_g3_ParamLimits

0x466d,	// (0x00013b6c) main_image3_pane_g3

0x4697,	// (0x00013b96) main_image3_pane_g4_ParamLimits

0x4697,	// (0x00013b96) main_image3_pane_g4

0x0003,

0xf806,	// (0x0001ed05) main_image3_pane_g_ParamLimits

0xf806,	// (0x0001ed05) main_image3_pane_g

0x46c1,	// (0x00013bc0) main_image3_pane_t1_ParamLimits

0x46c1,	// (0x00013bc0) main_image3_pane_t1

0x4719,	// (0x00013c18) main_image3_pane_t2_ParamLimits

0x4719,	// (0x00013c18) main_image3_pane_t2

0x476b,	// (0x00013c6a) main_image3_pane_t3_ParamLimits

0x476b,	// (0x00013c6a) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0001ed0e) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0001ed0e) main_image3_pane_t

0x94c9,	// (0x000189c8) grid_sctrl_middle_pane_cp01_ParamLimits

0x94c9,	// (0x000189c8) grid_sctrl_middle_pane_cp01

0x47f3,	// (0x00013cf2) cell_sctrl_middle_pane_cp01_ParamLimits

0x47f3,	// (0x00013cf2) cell_sctrl_middle_pane_cp01

0x4810,	// (0x00013d0f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4810,	// (0x00013d0f) cell_sctrl_middle_pane_cp01_g1

0x9454,	// (0x00018953) main_call4_pane

0x4825,	// (0x00013d24) aid_size_button_call4_ParamLimits

0x4825,	// (0x00013d24) aid_size_button_call4

0x4858,	// (0x00013d57) call4_windows_pane_ParamLimits

0x4858,	// (0x00013d57) call4_windows_pane

0x4877,	// (0x00013d76) grid_call4_button_pane_ParamLimits

0x4877,	// (0x00013d76) grid_call4_button_pane

0x48ae,	// (0x00013dad) call4_windows_conf_pane

0x48c7,	// (0x00013dc6) popup_call4_audio_first_window_ParamLimits

0x48c7,	// (0x00013dc6) popup_call4_audio_first_window

0x4917,	// (0x00013e16) popup_call4_audio_second_window_ParamLimits

0x4917,	// (0x00013e16) popup_call4_audio_second_window

0x4930,	// (0x00013e2f) popup_call4_audio_wait_window_ParamLimits

0x4930,	// (0x00013e2f) popup_call4_audio_wait_window

0x493e,	// (0x00013e3d) cell_call4_button_pane_ParamLimits

0x493e,	// (0x00013e3d) cell_call4_button_pane

0x4965,	// (0x00013e64) bg_button_pane_cp09_ParamLimits

0x4965,	// (0x00013e64) bg_button_pane_cp09

0x4971,	// (0x00013e70) cell_call4_button_pane_g1_ParamLimits

0x4971,	// (0x00013e70) cell_call4_button_pane_g1

0x4997,	// (0x00013e96) cell_call4_button_pane_t1_ParamLimits

0x4997,	// (0x00013e96) cell_call4_button_pane_t1

0xcc5d,	// (0x0001c15c) popup_call4_audio_conf_window_ParamLimits

0xcc5d,	// (0x0001c15c) popup_call4_audio_conf_window

0x3d80,	// (0x0001327f) mup3_progress_pane_t1_ParamLimits

0x3d9f,	// (0x0001329e) mup3_progress_pane_t2_ParamLimits

0xc3df,	// (0x0001b8de) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0001ebe3) mup3_progress_pane_t_ParamLimits

0xc3fc,	// (0x0001b8fb) mup_progress_pane_cp03_ParamLimits

0x42a6,	// (0x000137a5) mup3_control_keys_pane_g4_copy1

0xcb46,	// (0x0001c045) mp4_rocker2_pane_ParamLimits

0xcb46,	// (0x0001c045) mp4_rocker2_pane

0xcc77,	// (0x0001c176) mp4_rocker2_pane_g1

0xcc7f,	// (0x0001c17e) mp4_rocker2_pane_g2

0xcc87,	// (0x0001c186) mp4_rocker2_pane_g3

0xcc8f,	// (0x0001c18e) mp4_rocker2_pane_g4

0xcc97,	// (0x0001c196) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0001ed17) mp4_rocker2_pane_g

0x9454,	// (0x00018953) main_camera4_pane

0x9454,	// (0x00018953) main_video4_pane

0x43a7,	// (0x000138a6) main_video_tele_dialer_pane_t1_ParamLimits

0x43a7,	// (0x000138a6) main_video_tele_dialer_pane_t1

0x43c0,	// (0x000138bf) main_video_tele_dialer_pane_t2_ParamLimits

0x43c0,	// (0x000138bf) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0001eccd) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0001eccd) main_video_tele_dialer_pane_t

0x49d5,	// (0x00013ed4) cam4_autofocus_pane_ParamLimits

0x49d5,	// (0x00013ed4) cam4_autofocus_pane

0x49eb,	// (0x00013eea) cam4_image_uncrop_pane_ParamLimits

0x49eb,	// (0x00013eea) cam4_image_uncrop_pane

0x4a04,	// (0x00013f03) cam4_indicators_pane_ParamLimits

0x4a04,	// (0x00013f03) cam4_indicators_pane

0x4a34,	// (0x00013f33) main_camera4_pane_g1_ParamLimits

0x4a34,	// (0x00013f33) main_camera4_pane_g1

0x4a46,	// (0x00013f45) main_camera4_pane_g2_ParamLimits

0x4a46,	// (0x00013f45) main_camera4_pane_g2

0x4a59,	// (0x00013f58) main_camera4_pane_g3_ParamLimits

0x4a59,	// (0x00013f58) main_camera4_pane_g3

0x4a6c,	// (0x00013f6b) main_camera4_pane_g4_ParamLimits

0x4a6c,	// (0x00013f6b) main_camera4_pane_g4

0x4a7f,	// (0x00013f7e) main_camera4_pane_g5_ParamLimits

0x4a7f,	// (0x00013f7e) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0001ed22) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0001ed22) main_camera4_pane_g

0x4aa3,	// (0x00013fa2) main_camera4_pane_t1_ParamLimits

0x4aa3,	// (0x00013fa2) main_camera4_pane_t1

0x9bf5,	// (0x000190f4) bg_tb_trans_pane_cp06

0xccc5,	// (0x0001c1c4) cam4_indicators_pane_g1

0xccd6,	// (0x0001c1d5) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0001ed3d) cam4_indicators_pane_g

0xccee,	// (0x0001c1ed) cam4_indicators_pane_t1

0x4b07,	// (0x00014006) main_video4_pane_g1_ParamLimits

0x4b07,	// (0x00014006) main_video4_pane_g1

0x4b16,	// (0x00014015) main_video4_pane_g2_ParamLimits

0x4b16,	// (0x00014015) main_video4_pane_g2

0x4b26,	// (0x00014025) main_video4_pane_g3_ParamLimits

0x4b26,	// (0x00014025) main_video4_pane_g3

0x4b36,	// (0x00014035) main_video4_pane_g4_ParamLimits

0x4b36,	// (0x00014035) main_video4_pane_g4

0x0004,

0xf845,	// (0x0001ed44) main_video4_pane_g_ParamLimits

0xf845,	// (0x0001ed44) main_video4_pane_g

0x4b56,	// (0x00014055) vid4_indicators_pane_ParamLimits

0x4b56,	// (0x00014055) vid4_indicators_pane

0x4b80,	// (0x0001407f) video4_image_uncrop_cif_pane_ParamLimits

0x4b80,	// (0x0001407f) video4_image_uncrop_cif_pane

0x4b9a,	// (0x00014099) video4_image_uncrop_nhd_pane_ParamLimits

0x4b9a,	// (0x00014099) video4_image_uncrop_nhd_pane

0x49eb,	// (0x00013eea) video4_image_uncrop_vga_pane_ParamLimits

0x49eb,	// (0x00013eea) video4_image_uncrop_vga_pane

0x94c9,	// (0x000189c8) bg_tb_trans_pane_cp07

0xcd1c,	// (0x0001c21b) vid4_indicators_pane_g1

0xcd32,	// (0x0001c231) vid4_indicators_pane_g2

0xcd46,	// (0x0001c245) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0001ed4f) vid4_indicators_pane_g

0xcd77,	// (0x0001c276) vid4_indicators_pane_t1

0x4bb1,	// (0x000140b0) cam4_autofocus_pane_g1

0x4bb9,	// (0x000140b8) cam4_autofocus_pane_g2

0x4bc1,	// (0x000140c0) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0001ed5a) cam4_autofocus_pane_g

0x4bc9,	// (0x000140c8) cam4_autofocus_pane_g3_copy1

0x43ef,	// (0x000138ee) video_down_pane_cp_t1

0x43fd,	// (0x000138fc) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0001ecd2) video_down_pane_cp_t

0x94c9,	// (0x000189c8) popup_vitu2_window_ParamLimits

0x94c9,	// (0x000189c8) popup_vitu2_window

0x4bd1,	// (0x000140d0) aid_size_cell2_itu2_ParamLimits

0x4bd1,	// (0x000140d0) aid_size_cell2_itu2

0x4bf7,	// (0x000140f6) aid_size_cell_itu2_ParamLimits

0x4bf7,	// (0x000140f6) aid_size_cell_itu2

0x3e2b,	// (0x0001332a) bg_popup_window_pane_cp09_ParamLimits

0x3e2b,	// (0x0001332a) bg_popup_window_pane_cp09

0x4c55,	// (0x00014154) field_vitu2_entry_pane_ParamLimits

0x4c55,	// (0x00014154) field_vitu2_entry_pane

0x4c7d,	// (0x0001417c) grid_vitu2_function_pane_ParamLimits

0x4c7d,	// (0x0001417c) grid_vitu2_function_pane

0x4cce,	// (0x000141cd) grid_vitu2_itu_pane_ParamLimits

0x4cce,	// (0x000141cd) grid_vitu2_itu_pane

0x4d5e,	// (0x0001425d) cell_vitu2_itu_pane_ParamLimits

0x4d5e,	// (0x0001425d) cell_vitu2_itu_pane

0x4d8c,	// (0x0001428b) cell_vitu2_function_pane_ParamLimits

0x4d8c,	// (0x0001428b) cell_vitu2_function_pane

0xcd8e,	// (0x0001c28d) bg_popup_call_pane_cp08_ParamLimits

0xcd8e,	// (0x0001c28d) bg_popup_call_pane_cp08

0xcda5,	// (0x0001c2a4) field_vitu2_entry_pane_g1

0xcdb1,	// (0x0001c2b0) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0001ed61) field_vitu2_entry_pane_g

0xcdbd,	// (0x0001c2bc) field_vitu2_entry_pane_t1_ParamLimits

0xcdbd,	// (0x0001c2bc) field_vitu2_entry_pane_t1

0xcdec,	// (0x0001c2eb) field_vitu2_entry_pane_t2_ParamLimits

0xcdec,	// (0x0001c2eb) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0001ed68) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0001ed68) field_vitu2_entry_pane_t

0x4dd0,	// (0x000142cf) bg_button_pane_cp010_ParamLimits

0x4dd0,	// (0x000142cf) bg_button_pane_cp010

0x4dde,	// (0x000142dd) cell_vitu2_itu_pane_g1

0x4e04,	// (0x00014303) cell_vitu2_itu_pane_t1_ParamLimits

0x4e04,	// (0x00014303) cell_vitu2_itu_pane_t1

0x4e62,	// (0x00014361) cell_vitu2_itu_pane_t2_ParamLimits

0x4e62,	// (0x00014361) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0001ed72) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0001ed72) cell_vitu2_itu_pane_t

0x94c9,	// (0x000189c8) bg_button_pane_cp011

0x4f4e,	// (0x0001444d) cell_vitu2_function_pane_g1

0x9454,	// (0x00018953) main_myfav_hc_pane

0x47bb,	// (0x00013cba) popup_image3_note_pane_ParamLimits

0x47bb,	// (0x00013cba) popup_image3_note_pane

0x47d7,	// (0x00013cd6) popup_image3_tool_bar_pane_ParamLimits

0x47d7,	// (0x00013cd6) popup_image3_tool_bar_pane

0x4ef0,	// (0x000143ef) cell_vitu2_itu_pane_t3_ParamLimits

0x4ef0,	// (0x000143ef) cell_vitu2_itu_pane_t3

0x9454,	// (0x00018953) bg_popup_trans_pane

0xce11,	// (0x0001c310) grid_image3_tool_bar_pane

0xce1b,	// (0x0001c31a) bg_popup_trans_pane_g1

0xa10e,	// (0x0001960d) bg_popup_trans_pane_g2

0xce23,	// (0x0001c322) bg_popup_trans_pane_g3

0xce2b,	// (0x0001c32a) bg_popup_trans_pane_g4

0xce33,	// (0x0001c332) bg_popup_trans_pane_g5

0xce3b,	// (0x0001c33a) bg_popup_trans_pane_g6

0xce43,	// (0x0001c342) bg_popup_trans_pane_g7

0xce4b,	// (0x0001c34a) bg_popup_trans_pane_g8

0xa0ee,	// (0x000195ed) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0001ed79) bg_popup_trans_pane_g

0xce53,	// (0x0001c352) cell_image3_tool_bar_pane_ParamLimits

0xce53,	// (0x0001c352) cell_image3_tool_bar_pane

0x9eea,	// (0x000193e9) cell_image3_tool_bar_pane_g1

0x9454,	// (0x00018953) bg_popup_trans_pane_cp1

0xce69,	// (0x0001c368) popup_image3_note_pane_t1

0xce77,	// (0x0001c376) popup_image3_note_pane_t2

0xce85,	// (0x0001c384) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0001ed8c) popup_image3_note_pane_t

0xce95,	// (0x0001c394) popup_image3_note_pane_t3_copy1

0x4f62,	// (0x00014461) bg_myfav_hc_instruction_pane_ParamLimits

0x4f62,	// (0x00014461) bg_myfav_hc_instruction_pane

0x4f7a,	// (0x00014479) cell_myfav_contact_pane_ParamLimits

0x4f7a,	// (0x00014479) cell_myfav_contact_pane

0x4f96,	// (0x00014495) cell_myfav_contact_pane_cp1_ParamLimits

0x4f96,	// (0x00014495) cell_myfav_contact_pane_cp1

0x4fae,	// (0x000144ad) cell_myfav_contact_pane_cp2_ParamLimits

0x4fae,	// (0x000144ad) cell_myfav_contact_pane_cp2

0x4fc6,	// (0x000144c5) cell_myfav_contact_pane_cp3_ParamLimits

0x4fc6,	// (0x000144c5) cell_myfav_contact_pane_cp3

0x4fdd,	// (0x000144dc) cell_myfav_contact_pane_cp4_ParamLimits

0x4fdd,	// (0x000144dc) cell_myfav_contact_pane_cp4

0x4ff5,	// (0x000144f4) cell_myfav_contact_pane_cp5_ParamLimits

0x4ff5,	// (0x000144f4) cell_myfav_contact_pane_cp5

0x5009,	// (0x00014508) cell_myfav_contact_pane_cp6_ParamLimits

0x5009,	// (0x00014508) cell_myfav_contact_pane_cp6

0x501f,	// (0x0001451e) cell_myfav_contact_pane_cp7_ParamLimits

0x501f,	// (0x0001451e) cell_myfav_contact_pane_cp7

0xcea3,	// (0x0001c3a2) listscroll_gen_pane_cp05

0x5037,	// (0x00014536) main_myfav_hc_pane_g1_ParamLimits

0x5037,	// (0x00014536) main_myfav_hc_pane_g1

0x5051,	// (0x00014550) main_myfav_hc_pane_g2_ParamLimits

0x5051,	// (0x00014550) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0001ed93) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0001ed93) main_myfav_hc_pane_g

0x5085,	// (0x00014584) main_myfav_hc_pane_t1_ParamLimits

0x5085,	// (0x00014584) main_myfav_hc_pane_t1

0xceac,	// (0x0001c3ab) main_myfav_hc_pane_t2_ParamLimits

0xceac,	// (0x0001c3ab) main_myfav_hc_pane_t2

0xcebe,	// (0x0001c3bd) main_myfav_hc_pane_t3_ParamLimits

0xcebe,	// (0x0001c3bd) main_myfav_hc_pane_t3

0x509c,	// (0x0001459b) main_myfav_hc_pane_t4_ParamLimits

0x509c,	// (0x0001459b) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0001ed9a) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0001ed9a) main_myfav_hc_pane_t

0x9eea,	// (0x000193e9) bg_myfav_hc_instruction_pane_g1

0xced0,	// (0x0001c3cf) cell_myfav_contact_pane_g1_ParamLimits

0xced0,	// (0x0001c3cf) cell_myfav_contact_pane_g1

0xced0,	// (0x0001c3cf) cell_myfav_contact_pane_g2_ParamLimits

0xced0,	// (0x0001c3cf) cell_myfav_contact_pane_g2

0xcedc,	// (0x0001c3db) cell_myfav_contact_pane_g3_ParamLimits

0xcedc,	// (0x0001c3db) cell_myfav_contact_pane_g3

0x9c03,	// (0x00019102) cell_myfav_contact_pane_g4_ParamLimits

0x9c03,	// (0x00019102) cell_myfav_contact_pane_g4

0xcee9,	// (0x0001c3e8) cell_myfav_contact_pane_g5_ParamLimits

0xcee9,	// (0x0001c3e8) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0001eda5) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0001eda5) cell_myfav_contact_pane_g

0x506b,	// (0x0001456a) main_myfav_hc_pane_g3_ParamLimits

0x506b,	// (0x0001456a) main_myfav_hc_pane_g3

0xfee8,	// (0x0000f3e7) popup_adpt_find_window

0x50c6,	// (0x000145c5) afind_page_pane_ParamLimits

0x50c6,	// (0x000145c5) afind_page_pane

0x50dc,	// (0x000145db) aid_size_cell_afind_ParamLimits

0x50dc,	// (0x000145db) aid_size_cell_afind

0x50fa,	// (0x000145f9) bg_popup_sub_pane_cp09_ParamLimits

0x50fa,	// (0x000145f9) bg_popup_sub_pane_cp09

0x510c,	// (0x0001460b) find_pane_cp01_ParamLimits

0x510c,	// (0x0001460b) find_pane_cp01

0xcef5,	// (0x0001c3f4) grid_afind_control_pane_ParamLimits

0xcef5,	// (0x0001c3f4) grid_afind_control_pane

0x5120,	// (0x0001461f) grid_afind_pane_ParamLimits

0x5120,	// (0x0001461f) grid_afind_pane

0x5142,	// (0x00014641) cell_afind_pane_ParamLimits

0x5142,	// (0x00014641) cell_afind_pane

0x9eea,	// (0x000193e9) afind_page_pane_g1

0x51ab,	// (0x000146aa) afind_page_pane_g2

0x51b3,	// (0x000146b2) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0001edb0) afind_page_pane_g

0x51bb,	// (0x000146ba) afind_page_pane_t1

0xcf1b,	// (0x0001c41a) cell_afind_grid_control_pane_ParamLimits

0xcf1b,	// (0x0001c41a) cell_afind_grid_control_pane

0xcbe3,	// (0x0001c0e2) bg_button_pane_cp69_ParamLimits

0xcbe3,	// (0x0001c0e2) bg_button_pane_cp69

0x51c9,	// (0x000146c8) cell_afind_pane_g1_ParamLimits

0x51c9,	// (0x000146c8) cell_afind_pane_g1

0x51d6,	// (0x000146d5) cell_afind_pane_t1_ParamLimits

0x51d6,	// (0x000146d5) cell_afind_pane_t1

0x9ef4,	// (0x000193f3) bg_button_pane_cp72

0xcf2a,	// (0x0001c429) cell_afind_grid_control_pane_g1

0x28c5,	// (0x00011dc4) aid_image_placing_area_ParamLimits

0x28c5,	// (0x00011dc4) aid_image_placing_area

0x9bf5,	// (0x000190f4) field_vitu_entry_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) field_vitu_entry_pane_g1

0x9bf5,	// (0x000190f4) field_vitu_entry_pane_g2_ParamLimits

0x9bf5,	// (0x000190f4) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0001e6c0) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0001e6c0) field_vitu_entry_pane_g

0xc6fc,	// (0x0001bbfb) cell_vitu_itu_pane_g1_ParamLimits

0xc6df,	// (0x0001bbde) cell_vitu_itu_pane_t3_ParamLimits

0xc6df,	// (0x0001bbde) cell_vitu_itu_pane_t3

0xcb8c,	// (0x0001c08b) mp4_progress_pane_t1_ParamLimits

0xcba5,	// (0x0001c0a4) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0001ecf6) mp4_progress_pane_t_ParamLimits

0xcbbe,	// (0x0001c0bd) mup_progress_pane_cp04_ParamLimits

0x50b0,	// (0x000145af) main_myfav_hc_pane_t5_ParamLimits

0x50b0,	// (0x000145af) main_myfav_hc_pane_t5

0x947a,	// (0x00018979) aid_zoom_text_primary

0xfee8,	// (0x0000f3e7) popup_adpt_find_window_ParamLimits

0x94c9,	// (0x000189c8) main_cam_set_pane

0x4a1d,	// (0x00013f1c) cam4_zoom_pane_ParamLimits

0x4a1d,	// (0x00013f1c) cam4_zoom_pane

0x51e8,	// (0x000146e7) main_cam_set_pane_g1_ParamLimits

0x51e8,	// (0x000146e7) main_cam_set_pane_g1

0x51f6,	// (0x000146f5) main_cam_set_pane_g2_ParamLimits

0x51f6,	// (0x000146f5) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0001edb7) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0001edb7) main_cam_set_pane_g

0x5217,	// (0x00014716) main_cam_set_pane_t1_ParamLimits

0x5217,	// (0x00014716) main_cam_set_pane_t1

0x5232,	// (0x00014731) main_cset_listscroll_pane_ParamLimits

0x5232,	// (0x00014731) main_cset_listscroll_pane

0x525a,	// (0x00014759) main_cset_slider_pane_ParamLimits

0x525a,	// (0x00014759) main_cset_slider_pane

0xcf3b,	// (0x0001c43a) main_cset_list_pane_ParamLimits

0xcf3b,	// (0x0001c43a) main_cset_list_pane

0xcf4b,	// (0x0001c44a) scroll_pane_cp028

0x5284,	// (0x00014783) aid_area_touch_slider

0x52a0,	// (0x0001479f) cset_slider_pane

0x52c3,	// (0x000147c2) main_cset_slider_pane_g1

0x52d8,	// (0x000147d7) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0001edbc) main_cset_slider_pane_g

0xcf84,	// (0x0001c483) main_cset_slider_pane_t1

0x539a,	// (0x00014899) main_cset_slider_pane_t2

0x53b4,	// (0x000148b3) main_cset_slider_pane_t3

0x53ce,	// (0x000148cd) main_cset_slider_pane_t4

0x53e8,	// (0x000148e7) main_cset_slider_pane_t5

0x5406,	// (0x00014905) main_cset_slider_pane_t6

0x541b,	// (0x0001491a) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0001ede1) main_cset_slider_pane_t

0x5527,	// (0x00014a26) cset_list_set_pane_ParamLimits

0x5527,	// (0x00014a26) cset_list_set_pane

0xd01e,	// (0x0001c51d) aid_position_infowindow_above

0xd026,	// (0x0001c525) aid_position_infowindow_below

0x553b,	// (0x00014a3a) cset_list_set_pane_g1_ParamLimits

0x553b,	// (0x00014a3a) cset_list_set_pane_g1

0x5547,	// (0x00014a46) cset_list_set_pane_g3_ParamLimits

0x5547,	// (0x00014a46) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0001ee00) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0001ee00) cset_list_set_pane_g

0x5556,	// (0x00014a55) cset_list_set_pane_t1_ParamLimits

0x5556,	// (0x00014a55) cset_list_set_pane_t1

0x94c9,	// (0x000189c8) list_highlight_pane_cp021_ParamLimits

0x94c9,	// (0x000189c8) list_highlight_pane_cp021

0xaa1f,	// (0x00019f1e) cset_slider_pane_g1

0xaa31,	// (0x00019f30) cset_slider_pane_g2

0xaa28,	// (0x00019f27) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0001ee05) cset_slider_pane_g

0xd02e,	// (0x0001c52d) aid_area_touch_cam4_zoom

0x556b,	// (0x00014a6a) cam4_zoom_cont_pane

0x5573,	// (0x00014a72) cam4_zoom_pane_g1

0x557b,	// (0x00014a7a) cam4_zoom_pane_g2

0x5583,	// (0x00014a82) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0001ee0c) cam4_zoom_pane_g

0xd037,	// (0x0001c536) cam4_zoom_cont_pane_g1

0xd040,	// (0x0001c53f) cam4_zoom_cont_pane_g2

0xd049,	// (0x0001c548) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0001ee13) cam4_zoom_cont_pane_g

0x4843,	// (0x00013d42) call4_image_pane_ParamLimits

0x4843,	// (0x00013d42) call4_image_pane

0x48ae,	// (0x00013dad) call4_windows_conf_pane_ParamLimits

0x48f5,	// (0x00013df4) popup_call4_audio_in_window_ParamLimits

0x48f5,	// (0x00013df4) popup_call4_audio_in_window

0x9454,	// (0x00018953) bg_popup_call2_act_pane_cp02

0xcc55,	// (0x0001c154) call4_list_conf_pane

0x9eea,	// (0x000193e9) call4_image_pane_g1

0x9eea,	// (0x000193e9) call4_image_pane_g2

0x0001,

0xf398,	// (0x0001e897) call4_image_pane_g

0xd052,	// (0x0001c551) list_single_graphic_popup_conf4_pane_ParamLimits

0xd052,	// (0x0001c551) list_single_graphic_popup_conf4_pane

0x9454,	// (0x00018953) list_highlight_pane_cp022

0xd067,	// (0x0001c566) list_single_graphic_popup_conf4_pane_g1

0xa6e0,	// (0x00019bdf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0001ee1a) list_single_graphic_popup_conf4_pane_g

0xd06f,	// (0x0001c56e) list_single_graphic_popup_conf4_pane_t1

0x0cd8,	// (0x000101d7) popup_vtel_slider_window_ParamLimits

0x0cd8,	// (0x000101d7) popup_vtel_slider_window

0xcbd1,	// (0x0001c0d0) dialer2_ne_pane_t2_ParamLimits

0xcbd1,	// (0x0001c0d0) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0001ecfb) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0001ecfb) dialer2_ne_pane_t

0xbdf0,	// (0x0001b2ef) bg_popup_sub_pane_cp010_ParamLimits

0xbdf0,	// (0x0001b2ef) bg_popup_sub_pane_cp010

0x558b,	// (0x00014a8a) popup_vtel_slider_window_g1_ParamLimits

0x558b,	// (0x00014a8a) popup_vtel_slider_window_g1

0x559e,	// (0x00014a9d) popup_vtel_slider_window_g2_ParamLimits

0x559e,	// (0x00014a9d) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0001ee1f) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0001ee1f) popup_vtel_slider_window_g

0x55f4,	// (0x00014af3) vtel_slider_pane_ParamLimits

0x55f4,	// (0x00014af3) vtel_slider_pane

0x5616,	// (0x00014b15) vtel_slider_pane_g1_ParamLimits

0x5616,	// (0x00014b15) vtel_slider_pane_g1

0x562a,	// (0x00014b29) vtel_slider_pane_g2_ParamLimits

0x562a,	// (0x00014b29) vtel_slider_pane_g2

0x5642,	// (0x00014b41) vtel_slider_pane_g3_ParamLimits

0x5642,	// (0x00014b41) vtel_slider_pane_g3

0x5616,	// (0x00014b15) vtel_slider_pane_g4_ParamLimits

0x5616,	// (0x00014b15) vtel_slider_pane_g4

0x5658,	// (0x00014b57) vtel_slider_pane_g5_ParamLimits

0x5658,	// (0x00014b57) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0001ee28) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0001ee28) vtel_slider_pane_g

0x94c9,	// (0x000189c8) main_gallery2_pane

0x4c23,	// (0x00014122) aid_size_row_itut2_dropdow_list_ParamLimits

0x4c23,	// (0x00014122) aid_size_row_itut2_dropdow_list

0x4ca5,	// (0x000141a4) grid_vitu2_function_top_pane_ParamLimits

0x4ca5,	// (0x000141a4) grid_vitu2_function_top_pane

0x4d09,	// (0x00014208) popup_vitu2_dropdown_list_window_ParamLimits

0x4d09,	// (0x00014208) popup_vitu2_dropdown_list_window

0x4d30,	// (0x0001422f) popup_vitu2_match_list_window

0x566e,	// (0x00014b6d) cell_vitu2_function_top_pane_ParamLimits

0x566e,	// (0x00014b6d) cell_vitu2_function_top_pane

0x5688,	// (0x00014b87) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5688,	// (0x00014b87) cell_vitu2_function_top_pane_cp01

0x56a4,	// (0x00014ba3) cell_vitu2_function_top_wide_pane_ParamLimits

0x56a4,	// (0x00014ba3) cell_vitu2_function_top_wide_pane

0x94c9,	// (0x000189c8) bg_button_pane_cp012

0x56c2,	// (0x00014bc1) cell_vitu2_function_top_pane_g1

0xd085,	// (0x0001c584) bg_button_pane_cp013_ParamLimits

0xd085,	// (0x0001c584) bg_button_pane_cp013

0x56d6,	// (0x00014bd5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x56d6,	// (0x00014bd5) cell_vitu2_function_top_wide_pane_g1

0x94c9,	// (0x000189c8) bg_popup_sub_pane_cp20

0x56ee,	// (0x00014bed) list_vitu2_match_list_pane

0xce1b,	// (0x0001c31a) bg_popup_sub_pane_cp20_g1

0xce23,	// (0x0001c322) bg_popup_sub_pane_cp20_g2

0xa10e,	// (0x0001960d) bg_popup_sub_pane_cp20_g3

0xce2b,	// (0x0001c32a) bg_popup_sub_pane_cp20_g4

0xa0ee,	// (0x000195ed) bg_popup_sub_pane_cp20_g5

0xd0a1,	// (0x0001c5a0) bg_popup_sub_pane_cp20_g6

0xce3b,	// (0x0001c33a) bg_popup_sub_pane_cp20_g7

0xce43,	// (0x0001c342) bg_popup_sub_pane_cp20_g8

0xce4b,	// (0x0001c34a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0001ee33) bg_popup_sub_pane_cp20_g

0xd0a9,	// (0x0001c5a8) list_vitu2_match_list_item_pane_ParamLimits

0xd0a9,	// (0x0001c5a8) list_vitu2_match_list_item_pane

0xd0bb,	// (0x0001c5ba) list_vitu2_match_list_item_pane_t1

0x9454,	// (0x00018953) bg_popup_sub_pane_cp21

0x9eaa,	// (0x000193a9) grid_vitu2_dropdown_list_pane

0x5706,	// (0x00014c05) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5706,	// (0x00014c05) cell_vitu2_dropdown_list_char_pane

0x5728,	// (0x00014c27) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5728,	// (0x00014c27) cell_vitu2_dropdown_list_ctrl_pane

0xd0c9,	// (0x0001c5c8) cell_vitu2_dropdown_list_char_pane_g1

0xd0d2,	// (0x0001c5d1) cell_vitu2_dropdown_list_char_pane_g2

0xd0db,	// (0x0001c5da) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0001ee46) cell_vitu2_dropdown_list_char_pane_g

0x5752,	// (0x00014c51) cell_vitu2_dropdown_list_char_pane_t1

0x5760,	// (0x00014c5f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5760,	// (0x00014c5f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5770,	// (0x00014c6f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5770,	// (0x00014c6f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5781,	// (0x00014c80) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5781,	// (0x00014c80) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5791,	// (0x00014c90) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5791,	// (0x00014c90) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9bf5,	// (0x000190f4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9bf5,	// (0x000190f4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0001ee4d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0001ee4d) cell_vitu2_dropdown_list_ctrl_pane_g

0x57ad,	// (0x00014cac) aid_size_cell_gallery2_ParamLimits

0x57ad,	// (0x00014cac) aid_size_cell_gallery2

0x57cb,	// (0x00014cca) grid_gallery2_pane_ParamLimits

0x57cb,	// (0x00014cca) grid_gallery2_pane

0x57e5,	// (0x00014ce4) scroll_pane_cp029_ParamLimits

0x57e5,	// (0x00014ce4) scroll_pane_cp029

0x57f6,	// (0x00014cf5) cell_gallery2_pane_ParamLimits

0x57f6,	// (0x00014cf5) cell_gallery2_pane

0xd0e4,	// (0x0001c5e3) cell_gallery2_pane_g2

0x585a,	// (0x00014d59) cell_gallery2_pane_g3

0xd0ec,	// (0x0001c5eb) cell_gallery2_pane_g4

0xd0f4,	// (0x0001c5f3) cell_gallery2_pane_g5

0x9eaa,	// (0x000193a9) grid_highlight_pane_cp10

0x4d30,	// (0x0001422f) popup_vitu2_match_list_window_ParamLimits

0x4d47,	// (0x00014246) popup_vitu2_query_window_ParamLimits

0x4d47,	// (0x00014246) popup_vitu2_query_window

0x9454,	// (0x00018953) bg_vitu2_candi_button_pane

0xd0c9,	// (0x0001c5c8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0d2,	// (0x0001c5d1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0db,	// (0x0001c5da) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5862,	// (0x00014d61) bg_button_pane_cp015

0x5879,	// (0x00014d78) bg_button_pane_cp016

0x5885,	// (0x00014d84) bg_button_pane_cp017

0xa9ad,	// (0x00019eac) bg_popup_sub_pane_cp22

0xd0fc,	// (0x0001c5fb) popup_vitu2_query_window_g1

0x58c6,	// (0x00014dc5) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0001ee58) popup_vitu2_query_window_g

0x58ec,	// (0x00014deb) popup_vitu2_query_window_t1_ParamLimits

0x58ec,	// (0x00014deb) popup_vitu2_query_window_t1

0x5921,	// (0x00014e20) popup_vitu2_query_window_t2_ParamLimits

0x5921,	// (0x00014e20) popup_vitu2_query_window_t2

0x5933,	// (0x00014e32) popup_vitu2_query_window_t3_ParamLimits

0x5933,	// (0x00014e32) popup_vitu2_query_window_t3

0x595b,	// (0x00014e5a) popup_vitu2_query_window_t4_ParamLimits

0x595b,	// (0x00014e5a) popup_vitu2_query_window_t4

0x596f,	// (0x00014e6e) popup_vitu2_query_window_t5_ParamLimits

0x596f,	// (0x00014e6e) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0001ee5f) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0001ee5f) popup_vitu2_query_window_t

0xcf33,	// (0x0001c432) main_cset_text_pane

0x5284,	// (0x00014783) aid_area_touch_slider_ParamLimits

0x52a0,	// (0x0001479f) cset_slider_pane_ParamLimits

0x52c3,	// (0x000147c2) main_cset_slider_pane_g1_ParamLimits

0x52d8,	// (0x000147d7) main_cset_slider_pane_g2_ParamLimits

0xcf54,	// (0x0001c453) main_cset_slider_pane_g3_ParamLimits

0xcf54,	// (0x0001c453) main_cset_slider_pane_g3

0x52ed,	// (0x000147ec) main_cset_slider_pane_g4_ParamLimits

0x52ed,	// (0x000147ec) main_cset_slider_pane_g4

0x52fc,	// (0x000147fb) main_cset_slider_pane_g5_ParamLimits

0x52fc,	// (0x000147fb) main_cset_slider_pane_g5

0x530a,	// (0x00014809) main_cset_slider_pane_g6_ParamLimits

0x530a,	// (0x00014809) main_cset_slider_pane_g6

0xf8bd,	// (0x0001edbc) main_cset_slider_pane_g_ParamLimits

0xcf84,	// (0x0001c483) main_cset_slider_pane_t1_ParamLimits

0x539a,	// (0x00014899) main_cset_slider_pane_t2_ParamLimits

0x53b4,	// (0x000148b3) main_cset_slider_pane_t3_ParamLimits

0x53ce,	// (0x000148cd) main_cset_slider_pane_t4_ParamLimits

0x53e8,	// (0x000148e7) main_cset_slider_pane_t5_ParamLimits

0x5406,	// (0x00014905) main_cset_slider_pane_t6_ParamLimits

0x541b,	// (0x0001491a) main_cset_slider_pane_t7_ParamLimits

0x5449,	// (0x00014948) main_cset_slider_pane_t8_ParamLimits

0x5449,	// (0x00014948) main_cset_slider_pane_t8

0x5471,	// (0x00014970) main_cset_slider_pane_t9_ParamLimits

0x5471,	// (0x00014970) main_cset_slider_pane_t9

0x5499,	// (0x00014998) main_cset_slider_pane_t10_ParamLimits

0x5499,	// (0x00014998) main_cset_slider_pane_t10

0x54c1,	// (0x000149c0) main_cset_slider_pane_t11_ParamLimits

0x54c1,	// (0x000149c0) main_cset_slider_pane_t11

0x54eb,	// (0x000149ea) main_cset_slider_pane_t12_ParamLimits

0x54eb,	// (0x000149ea) main_cset_slider_pane_t12

0x5508,	// (0x00014a07) main_cset_slider_pane_t13_ParamLimits

0x5508,	// (0x00014a07) main_cset_slider_pane_t13

0xf8e2,	// (0x0001ede1) main_cset_slider_pane_t_ParamLimits

0x9454,	// (0x00018953) bg_popup_sub_pane_cp011

0xd108,	// (0x0001c607) main_cset_text_pane_g1

0xd110,	// (0x0001c60f) main_cset_text_pane_t1

0xd11e,	// (0x0001c61d) main_cset_text_pane_t2

0xd12c,	// (0x0001c62b) main_cset_text_pane_t3

0xd13a,	// (0x0001c639) main_cset_text_pane_t4

0xd148,	// (0x0001c647) main_cset_text_pane_t5

0xd156,	// (0x0001c655) main_cset_text_pane_t6

0xd164,	// (0x0001c663) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0001ee6e) main_cset_text_pane_t

0x9454,	// (0x00018953) main_cam4_burst_pane

0x9454,	// (0x00018953) main_cam5_pane

0xcf09,	// (0x0001c408) bg_button_pane_cp019

0xcf12,	// (0x0001c411) bg_button_pane_cp020

0xcf60,	// (0x0001c45f) main_cset_slider_pane_g7_ParamLimits

0xcf60,	// (0x0001c45f) main_cset_slider_pane_g7

0xcf6c,	// (0x0001c46b) main_cset_slider_pane_g8_ParamLimits

0xcf6c,	// (0x0001c46b) main_cset_slider_pane_g8

0x531e,	// (0x0001481d) main_cset_slider_pane_g9_ParamLimits

0x531e,	// (0x0001481d) main_cset_slider_pane_g9

0x532a,	// (0x00014829) main_cset_slider_pane_g10_ParamLimits

0x532a,	// (0x00014829) main_cset_slider_pane_g10

0x5336,	// (0x00014835) main_cset_slider_pane_g11_ParamLimits

0x5336,	// (0x00014835) main_cset_slider_pane_g11

0x5342,	// (0x00014841) main_cset_slider_pane_g12_ParamLimits

0x5342,	// (0x00014841) main_cset_slider_pane_g12

0x534e,	// (0x0001484d) main_cset_slider_pane_g13_ParamLimits

0x534e,	// (0x0001484d) main_cset_slider_pane_g13

0x535a,	// (0x00014859) main_cset_slider_pane_g14_ParamLimits

0x535a,	// (0x00014859) main_cset_slider_pane_g14

0x5366,	// (0x00014865) main_cset_slider_pane_g15_ParamLimits

0x5366,	// (0x00014865) main_cset_slider_pane_g15

0xcfac,	// (0x0001c4ab) main_cset_slider_pane_t14_ParamLimits

0xcfac,	// (0x0001c4ab) main_cset_slider_pane_t14

0xcfe5,	// (0x0001c4e4) main_cset_slider_pane_t15_ParamLimits

0xcfe5,	// (0x0001c4e4) main_cset_slider_pane_t15

0x59d9,	// (0x00014ed8) aid_cam4_burst_size_cell_ParamLimits

0x59d9,	// (0x00014ed8) aid_cam4_burst_size_cell

0x59f9,	// (0x00014ef8) grid_cam4_burst_pane_ParamLimits

0x59f9,	// (0x00014ef8) grid_cam4_burst_pane

0x5a33,	// (0x00014f32) linegrid_cam4_burst_pane_ParamLimits

0x5a33,	// (0x00014f32) linegrid_cam4_burst_pane

0xd60e,	// (0x0001cb0d) scroll_pane_cp30_ParamLimits

0xd60e,	// (0x0001cb0d) scroll_pane_cp30

0x5a55,	// (0x00014f54) cell_cam4_burst_pane_ParamLimits

0x5a55,	// (0x00014f54) cell_cam4_burst_pane

0xd172,	// (0x0001c671) linegrid_cam4_burst_pane_g1_ParamLimits

0xd172,	// (0x0001c671) linegrid_cam4_burst_pane_g1

0x5aaa,	// (0x00014fa9) linegrid_cam4_burst_pane_g2_ParamLimits

0x5aaa,	// (0x00014fa9) linegrid_cam4_burst_pane_g2

0xd17f,	// (0x0001c67e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd17f,	// (0x0001c67e) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0001ee7d) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0001ee7d) linegrid_cam4_burst_pane_g

0x5abb,	// (0x00014fba) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5abb,	// (0x00014fba) linegrid_cam4_burst_pane_g3_copy1

0xd18c,	// (0x0001c68b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd18c,	// (0x0001c68b) linegrid_cam4_burst_pane_g4

0x5ad9,	// (0x00014fd8) linegrid_cam4_burst_pane_g5_ParamLimits

0x5ad9,	// (0x00014fd8) linegrid_cam4_burst_pane_g5

0x5aea,	// (0x00014fe9) linegrid_cam4_burst_pane_g6_ParamLimits

0x5aea,	// (0x00014fe9) linegrid_cam4_burst_pane_g6

0xd199,	// (0x0001c698) linegrid_cam4_burst_pane_g7_ParamLimits

0xd199,	// (0x0001c698) linegrid_cam4_burst_pane_g7

0x5b01,	// (0x00015000) cell_cam4_burst_pane_g1

0xd1b2,	// (0x0001c6b1) main_cam5_pane_t1_ParamLimits

0xd1b2,	// (0x0001c6b1) main_cam5_pane_t1

0xd1c4,	// (0x0001c6c3) main_cam5_pane_t2_ParamLimits

0xd1c4,	// (0x0001c6c3) main_cam5_pane_t2

0xd1d6,	// (0x0001c6d5) main_cam5_pane_t3_ParamLimits

0xd1d6,	// (0x0001c6d5) main_cam5_pane_t3

0xd1e8,	// (0x0001c6e7) main_cam5_pane_t4_ParamLimits

0xd1e8,	// (0x0001c6e7) main_cam5_pane_t4

0xd200,	// (0x0001c6ff) main_cam5_pane_t5_ParamLimits

0xd200,	// (0x0001c6ff) main_cam5_pane_t5

0xd214,	// (0x0001c713) main_cam5_pane_t6_ParamLimits

0xd214,	// (0x0001c713) main_cam5_pane_t6

0xd228,	// (0x0001c727) main_cam5_pane_t7_ParamLimits

0xd228,	// (0x0001c727) main_cam5_pane_t7

0xd23a,	// (0x0001c739) main_cam5_pane_t8_ParamLimits

0xd23a,	// (0x0001c739) main_cam5_pane_t8

0xd258,	// (0x0001c757) main_cam5_pane_t9_ParamLimits

0xd258,	// (0x0001c757) main_cam5_pane_t9

0xd26a,	// (0x0001c769) main_cam5_pane_t10_ParamLimits

0xd26a,	// (0x0001c769) main_cam5_pane_t10

0xd27c,	// (0x0001c77b) main_cam5_pane_t11_ParamLimits

0xd27c,	// (0x0001c77b) main_cam5_pane_t11

0xd290,	// (0x0001c78f) main_cam5_pane_t12_ParamLimits

0xd290,	// (0x0001c78f) main_cam5_pane_t12

0xd2a7,	// (0x0001c7a6) main_cam5_pane_t13_ParamLimits

0xd2a7,	// (0x0001c7a6) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0001ee89) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0001ee89) main_cam5_pane_t

0xff67,	// (0x0000f466) popup_scut_keymap_window_ParamLimits

0xff67,	// (0x0000f466) popup_scut_keymap_window

0x5b14,	// (0x00015013) aid_size_cell_brow_shortcut

0x9eaa,	// (0x000193a9) bg_popup_window_pane_cp010

0x5b20,	// (0x0001501f) grid_scut_pane

0x5b2c,	// (0x0001502b) cell_scut_pane_ParamLimits

0x5b2c,	// (0x0001502b) cell_scut_pane

0x5b45,	// (0x00015044) cell_scut_pane_g1

0xd2ca,	// (0x0001c7c9) cell_scut_pane_t1

0xd2d9,	// (0x0001c7d8) cell_scut_pane_t2

0x5b4e,	// (0x0001504d) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0001eea4) cell_scut_pane_t

0x3923,	// (0x00012e22) main_mup3_pane_g8_ParamLimits

0x3923,	// (0x00012e22) main_mup3_pane_g8

0x4c3d,	// (0x0001413c) area_vitu2_query_pane_ParamLimits

0x4c3d,	// (0x0001413c) area_vitu2_query_pane

0x5891,	// (0x00014d90) input_focus_pane_cp08

0xd2e8,	// (0x0001c7e7) area_vitu2_query_pane_g1

0x5b5c,	// (0x0001505b) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0001eeab) area_vitu2_query_pane_g

0x5b71,	// (0x00015070) area_vitu2_query_pane_t1_ParamLimits

0x5b71,	// (0x00015070) area_vitu2_query_pane_t1

0x5b85,	// (0x00015084) area_vitu2_query_pane_t2_ParamLimits

0x5b85,	// (0x00015084) area_vitu2_query_pane_t2

0x5b99,	// (0x00015098) area_vitu2_query_pane_t3_ParamLimits

0x5b99,	// (0x00015098) area_vitu2_query_pane_t3

0xd2f4,	// (0x0001c7f3) area_vitu2_query_pane_t4_ParamLimits

0xd2f4,	// (0x0001c7f3) area_vitu2_query_pane_t4

0xd31c,	// (0x0001c81b) area_vitu2_query_pane_t5_ParamLimits

0xd31c,	// (0x0001c81b) area_vitu2_query_pane_t5

0xd344,	// (0x0001c843) area_vitu2_query_pane_t6_ParamLimits

0xd344,	// (0x0001c843) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0001eeb0) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0001eeb0) area_vitu2_query_pane_t

0x5bc5,	// (0x000150c4) bg_button_pane_cp018

0x5bd1,	// (0x000150d0) bg_button_pane_cp021

0x5bdd,	// (0x000150dc) bg_button_pane_cp022

0x5c08,	// (0x00015107) input_focus_pane_cp09

0x1fef,	// (0x000114ee) aid_size_touch_mv_arrow_left

0x2018,	// (0x00011517) aid_size_touch_mv_arrow_right

0x537e,	// (0x0001487d) main_cset_slider_pane_g16_ParamLimits

0x537e,	// (0x0001487d) main_cset_slider_pane_g16

0x538c,	// (0x0001488b) main_cset_slider_pane_g17_ParamLimits

0x538c,	// (0x0001488b) main_cset_slider_pane_g17

0x5b01,	// (0x00015000) cell_cam4_burst_pane_g1_ParamLimits

0x9454,	// (0x00018953) compa_mode_pane

0x55ae,	// (0x00014aad) popup_vtel_slider_window_g3_ParamLimits

0x55ae,	// (0x00014aad) popup_vtel_slider_window_g3

0x55c5,	// (0x00014ac4) popup_vtel_slider_window_g4_ParamLimits

0x55c5,	// (0x00014ac4) popup_vtel_slider_window_g4

0x55dc,	// (0x00014adb) popup_vtel_slider_window_t1_ParamLimits

0x55dc,	// (0x00014adb) popup_vtel_slider_window_t1

0x9454,	// (0x00018953) main_cl_pane

0xbc87,	// (0x0001b186) popup_imed_adjust2_window_ParamLimits

0xa9ad,	// (0x00019eac) bg_tb_trans_pane_cp05_ParamLimits

0xc60a,	// (0x0001bb09) popup_imed_adjust2_window_g1_ParamLimits

0xc619,	// (0x0001bb18) popup_imed_adjust2_window_g2_ParamLimits

0xc619,	// (0x0001bb18) popup_imed_adjust2_window_g2

0xc625,	// (0x0001bb24) popup_imed_adjust2_window_g3_ParamLimits

0xc625,	// (0x0001bb24) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0001ec26) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0001ec26) popup_imed_adjust2_window_g

0xc631,	// (0x0001bb30) popup_imed_adjust2_window_t1_ParamLimits

0xc649,	// (0x0001bb48) slider_imed_adjust_pane_ParamLimits

0xc65d,	// (0x0001bb5c) slider_imed_adjust_pane_g1_ParamLimits

0xc66d,	// (0x0001bb6c) slider_imed_adjust_pane_g2_ParamLimits

0xc67d,	// (0x0001bb7c) slider_imed_adjust_pane_g3_ParamLimits

0xc68e,	// (0x0001bb8d) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0001ec2d) slider_imed_adjust_pane_g_ParamLimits

0x49bd,	// (0x00013ebc) aid_touch_area_cam4_ParamLimits

0x49bd,	// (0x00013ebc) aid_touch_area_cam4

0xcc9f,	// (0x0001c19e) battery_pane_cp01

0x4a90,	// (0x00013f8f) main_camera4_pane_g6_ParamLimits

0x4a90,	// (0x00013f8f) main_camera4_pane_g6

0x4aba,	// (0x00013fb9) main_camera4_pane_t2_ParamLimits

0x4aba,	// (0x00013fb9) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0001ed2f) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0001ed2f) main_camera4_pane_t

0x4aef,	// (0x00013fee) aid_touch_area_vid4_ParamLimits

0x4aef,	// (0x00013fee) aid_touch_area_vid4

0x4b46,	// (0x00014045) main_video4_pane_g5_ParamLimits

0x4b46,	// (0x00014045) main_video4_pane_g5

0x4b6c,	// (0x0001406b) vid4_progress_pane_ParamLimits

0x4b6c,	// (0x0001406b) vid4_progress_pane

0xcf78,	// (0x0001c477) main_cset_slider_pane_g18_ParamLimits

0xcf78,	// (0x0001c477) main_cset_slider_pane_g18

0xd1a6,	// (0x0001c6a5) cell_cam4_burst_pane_g2_ParamLimits

0xd1a6,	// (0x0001c6a5) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0001ee84) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0001ee84) cell_cam4_burst_pane_g

0x9c89,	// (0x00019188) bg_cl_pane_ParamLimits

0x9c89,	// (0x00019188) bg_cl_pane

0x5c19,	// (0x00015118) cl_header_pane_ParamLimits

0x5c19,	// (0x00015118) cl_header_pane

0x5c2d,	// (0x0001512c) cl_listscroll_pane_ParamLimits

0x5c2d,	// (0x0001512c) cl_listscroll_pane

0xd390,	// (0x0001c88f) bg_cl_pane_g1

0xd398,	// (0x0001c897) bg_cl_pane_g2

0xd3a0,	// (0x0001c89f) bg_cl_pane_g3

0xd3a8,	// (0x0001c8a7) bg_cl_pane_g4

0xd3b0,	// (0x0001c8af) bg_cl_pane_g5

0xd3b8,	// (0x0001c8b7) bg_cl_pane_g6

0xd3c0,	// (0x0001c8bf) bg_cl_pane_g7

0xd3c8,	// (0x0001c8c7) bg_cl_pane_g8

0xd3d0,	// (0x0001c8cf) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0001eebf) bg_cl_pane_g

0x5c3d,	// (0x0001513c) aid_height_cl_leading_ParamLimits

0x5c3d,	// (0x0001513c) aid_height_cl_leading

0x5c49,	// (0x00015148) aid_height_cl_text_ParamLimits

0x5c49,	// (0x00015148) aid_height_cl_text

0x94c9,	// (0x000189c8) bg_cl_header_pane_ParamLimits

0x94c9,	// (0x000189c8) bg_cl_header_pane

0x5c68,	// (0x00015167) cl_header_pane_g1_ParamLimits

0x5c68,	// (0x00015167) cl_header_pane_g1

0x5c7e,	// (0x0001517d) cl_header_pane_t1_ParamLimits

0x5c7e,	// (0x0001517d) cl_header_pane_t1

0xd3d8,	// (0x0001c8d7) cl_list_pane

0xcf4b,	// (0x0001c44a) hc_scroll_pane_cp01

0xa0ee,	// (0x000195ed) bg_cl_header_pane_g1

0xce1b,	// (0x0001c31a) bg_cl_header_pane_g2

0xa10e,	// (0x0001960d) bg_cl_header_pane_g3

0xce2b,	// (0x0001c32a) bg_cl_header_pane_g4

0xce23,	// (0x0001c322) bg_cl_header_pane_g5

0xd0a1,	// (0x0001c5a0) bg_cl_header_pane_g6

0xce43,	// (0x0001c342) bg_cl_header_pane_g7

0xce4b,	// (0x0001c34a) bg_cl_header_pane_g8

0xce3b,	// (0x0001c33a) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0001eed2) bg_cl_header_pane_g

0x5c97,	// (0x00015196) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5c97,	// (0x00015196) hc_cl_list_double_graphic_heading_pane

0x5caa,	// (0x000151a9) hc_cl_list_single_graphic_pane_ParamLimits

0x5caa,	// (0x000151a9) hc_cl_list_single_graphic_pane

0x5cc2,	// (0x000151c1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5cc2,	// (0x000151c1) hc_cl_list_single_graphic_pane_g1

0x5cce,	// (0x000151cd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5cce,	// (0x000151cd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0001eee5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0001eee5) hc_cl_list_single_graphic_pane_g

0x5ce2,	// (0x000151e1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5ce2,	// (0x000151e1) hc_cl_list_single_graphic_pane_t1

0x5cc2,	// (0x000151c1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5cc2,	// (0x000151c1) hc_cl_list_double_graphic_heading_pane_g1

0x5cf7,	// (0x000151f6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5cf7,	// (0x000151f6) hc_cl_list_double_graphic_heading_pane_g2

0x5d0b,	// (0x0001520a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5d0b,	// (0x0001520a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0001eeea) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0001eeea) hc_cl_list_double_graphic_heading_pane_g

0x5d1f,	// (0x0001521e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5d1f,	// (0x0001521e) hc_cl_list_double_graphic_heading_pane_t1

0x5d34,	// (0x00015233) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5d34,	// (0x00015233) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0001eef1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0001eef1) hc_cl_list_double_graphic_heading_pane_t

0xd3e9,	// (0x0001c8e8) vid4_progress_pane_g1

0xd3f9,	// (0x0001c8f8) vid4_progress_pane_g2

0x5d49,	// (0x00015248) vid4_progress_pane_g3

0xd409,	// (0x0001c908) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0001eef6) vid4_progress_pane_g

0x5d5b,	// (0x0001525a) vid4_progress_pane_t1

0xd427,	// (0x0001c926) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0001ef01) vid4_progress_pane_t

0x5d75,	// (0x00015274) wait_bar_pane_cp07

0xbf53,	// (0x0001b452) blid_firmament_pane_ParamLimits

0xbf96,	// (0x0001b495) popup_blid_sat_info2_window_g1

0xbfba,	// (0x0001b4b9) popup_blid_sat_info2_window_t3

0xbfc8,	// (0x0001b4c7) popup_blid_sat_info2_window_t4

0xbfd6,	// (0x0001b4d5) popup_blid_sat_info2_window_t5

0xbfe4,	// (0x0001b4e3) popup_blid_sat_info2_window_t6

0xbff4,	// (0x0001b4f3) popup_blid_sat_info2_window_t7

0xc002,	// (0x0001b501) popup_blid_sat_info2_window_t8

0xc010,	// (0x0001b50f) popup_blid_sat_info2_window_t9

0xc01e,	// (0x0001b51d) popup_blid_sat_info2_window_t10

0xc0e5,	// (0x0001b5e4) aid_firma_cardinal_ParamLimits

0xc0f9,	// (0x0001b5f8) blid_firmament_pane_t1_ParamLimits

0xc110,	// (0x0001b60f) blid_firmament_pane_t2_ParamLimits

0xc127,	// (0x0001b626) blid_firmament_pane_t3_ParamLimits

0xc13e,	// (0x0001b63d) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0001eb1f) blid_firmament_pane_t_ParamLimits

0xc155,	// (0x0001b654) blid_sat_info_pane_ParamLimits

0x94c9,	// (0x000189c8) main_cam_set_pane_ParamLimits

0x4125,	// (0x00013624) aid_size_cell_colour_35_ParamLimits

0x4145,	// (0x00013644) aid_size_cell_colour_112_ParamLimits

0x4165,	// (0x00013664) aid_size_cell_effect_ParamLimits

0xa9ad,	// (0x00019eac) bg_tb_trans_pane_cp02_ParamLimits

0xa39b,	// (0x0001989a) heading_imed_pane_ParamLimits

0x4185,	// (0x00013684) listscroll_imed_pane_ParamLimits

0xb370,	// (0x0001a86f) popup_call2_audio_first_window_g5_ParamLimits

0xb370,	// (0x0001a86f) popup_call2_audio_first_window_g5

0x45ce,	// (0x00013acd) aid_size_touch_image3_arrow_left_ParamLimits

0x45ce,	// (0x00013acd) aid_size_touch_image3_arrow_left

0x45fa,	// (0x00013af9) aid_size_touch_image3_arrow_right_ParamLimits

0x45fa,	// (0x00013af9) aid_size_touch_image3_arrow_right

0xd440,	// (0x0001c93f) vid4_progress_pane_t3

0x432a,	// (0x00013829) main_hwr_training_symbol_option_pane_ParamLimits

0x432a,	// (0x00013829) main_hwr_training_symbol_option_pane

0xc84f,	// (0x0001bd4e) popup_hwr_training_preview_window_ParamLimits

0xc84f,	// (0x0001bd4e) popup_hwr_training_preview_window

0x434a,	// (0x00013849) hwr_training_navi_pane_g5_ParamLimits

0x434a,	// (0x00013849) hwr_training_navi_pane_g5

0xce09,	// (0x0001c308) popup_char_count_window

0x94c9,	// (0x000189c8) bg_popup_sub_pane_cp20_ParamLimits

0x56ee,	// (0x00014bed) list_vitu2_match_list_pane_ParamLimits

0x56fa,	// (0x00014bf9) vitu2_page_scroll_pane_ParamLimits

0x56fa,	// (0x00014bf9) vitu2_page_scroll_pane

0xd477,	// (0x0001c976) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd477,	// (0x0001c976) list_single_hwr_training_symbol_option_pane

0xd48a,	// (0x0001c989) list_single_hwr_training_symbol_option_pane_g1

0xd492,	// (0x0001c991) list_single_hwr_training_symbol_option_pane_t1

0xd4a0,	// (0x0001c99f) bg_button_pane_cp023

0xd4a9,	// (0x0001c9a8) bg_button_pane_cp024

0xd4dc,	// (0x0001c9db) vitu2_page_scroll_pane_g1

0xd4e4,	// (0x0001c9e3) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0001ef08) vitu2_page_scroll_pane_g

0xd4ec,	// (0x0001c9eb) vitu2_page_scroll_pane_t1

0xd4fb,	// (0x0001c9fa) popup_char_count_window_g1

0xd504,	// (0x0001ca03) popup_char_count_window_g2

0xd50d,	// (0x0001ca0c) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0001ef0d) popup_char_count_window_g

0xd516,	// (0x0001ca15) popup_char_count_window_t1

0x9454,	// (0x00018953) main_vded2_pane

0xc5f6,	// (0x0001baf5) aid_size_cell_imed_line

0xc600,	// (0x0001baff) grid_imed_line_width_pane

0xcd59,	// (0x0001c258) vid4_indicators_pane_g4

0xd524,	// (0x0001ca23) cell_imed_line_width_pane_ParamLimits

0xd524,	// (0x0001ca23) cell_imed_line_width_pane

0xd53a,	// (0x0001ca39) cell_imed_line_width_pane_g1

0xd543,	// (0x0001ca42) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0001ef14) cell_imed_line_width_pane_g

0x5d9c,	// (0x0001529b) main_vded2_pane_g1_ParamLimits

0x5d9c,	// (0x0001529b) main_vded2_pane_g1

0x5db7,	// (0x000152b6) main_vded2_pane_g2_ParamLimits

0x5db7,	// (0x000152b6) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0001ef19) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0001ef19) main_vded2_pane_g

0x5dc9,	// (0x000152c8) vded2_slider_pane_ParamLimits

0x5dc9,	// (0x000152c8) vded2_slider_pane

0x5dd9,	// (0x000152d8) aid_size_touch_vded2_end

0x5de3,	// (0x000152e2) aid_size_touch_vded2_playhead

0xd54b,	// (0x0001ca4a) aid_size_touch_vded2_start

0xd553,	// (0x0001ca52) vded2_slider_bg_pane

0xd55c,	// (0x0001ca5b) vded2_slider_pane_g1

0xd565,	// (0x0001ca64) vded2_slider_pane_g2

0x5ded,	// (0x000152ec) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0001ef1e) vded2_slider_pane_g

0xd56d,	// (0x0001ca6c) vded2_slider_bg_pane_g1

0xd576,	// (0x0001ca75) vded2_slider_bg_pane_g2

0xd57f,	// (0x0001ca7e) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0001ef25) vded2_slider_bg_pane_g

0x2501,	// (0x00011a00) aid_postcard_touch_down_pane_ParamLimits

0x2501,	// (0x00011a00) aid_postcard_touch_down_pane

0x2519,	// (0x00011a18) aid_postcard_touch_up_pane_ParamLimits

0x2519,	// (0x00011a18) aid_postcard_touch_up_pane

0x9454,	// (0x00018953) main_blid2_pane

0xbc69,	// (0x0001b168) popup_blid2_search_window

0x9454,	// (0x00018953) blid2_gps_pane

0x9454,	// (0x00018953) blid2_navig_pane

0x9454,	// (0x00018953) blid2_search_pane

0x9454,	// (0x00018953) blid2_tripm_pane

0x5df8,	// (0x000152f7) blid2_search_pane_g1_ParamLimits

0x5df8,	// (0x000152f7) blid2_search_pane_g1

0x5e0b,	// (0x0001530a) blid2_search_pane_t1_ParamLimits

0x5e0b,	// (0x0001530a) blid2_search_pane_t1

0x5e1d,	// (0x0001531c) aid_size_cell_blid2_gps_ParamLimits

0x5e1d,	// (0x0001531c) aid_size_cell_blid2_gps

0x5e35,	// (0x00015334) blid2_gps_pane_g1_ParamLimits

0x5e35,	// (0x00015334) blid2_gps_pane_g1

0x5e49,	// (0x00015348) grid_blid2_satellite_pane_ParamLimits

0x5e49,	// (0x00015348) grid_blid2_satellite_pane

0x5e61,	// (0x00015360) blid2_navig_pane_g1_ParamLimits

0x5e61,	// (0x00015360) blid2_navig_pane_g1

0x5e6d,	// (0x0001536c) blid2_navig_pane_t1_ParamLimits

0x5e6d,	// (0x0001536c) blid2_navig_pane_t1

0x5e88,	// (0x00015387) blid2_navig_pane_t2_ParamLimits

0x5e88,	// (0x00015387) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0001ef2c) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0001ef2c) blid2_navig_pane_t

0x5ea3,	// (0x000153a2) blid2_navig_ring_pane_ParamLimits

0x5ea3,	// (0x000153a2) blid2_navig_ring_pane

0x5ebe,	// (0x000153bd) blid2_speed_pane_ParamLimits

0x5ebe,	// (0x000153bd) blid2_speed_pane

0x5eca,	// (0x000153c9) blid2_tripm_pane_g1_ParamLimits

0x5eca,	// (0x000153c9) blid2_tripm_pane_g1

0x5ee5,	// (0x000153e4) blid2_tripm_pane_g2_ParamLimits

0x5ee5,	// (0x000153e4) blid2_tripm_pane_g2

0x5ef8,	// (0x000153f7) blid2_tripm_pane_g3_ParamLimits

0x5ef8,	// (0x000153f7) blid2_tripm_pane_g3

0x5f09,	// (0x00015408) blid2_tripm_pane_g4_ParamLimits

0x5f09,	// (0x00015408) blid2_tripm_pane_g4

0x5f1a,	// (0x00015419) blid2_tripm_pane_g5_ParamLimits

0x5f1a,	// (0x00015419) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0001ef31) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0001ef31) blid2_tripm_pane_g

0x5f40,	// (0x0001543f) blid2_tripm_pane_t1_ParamLimits

0x5f40,	// (0x0001543f) blid2_tripm_pane_t1

0x5f59,	// (0x00015458) blid2_tripm_pane_t2_ParamLimits

0x5f59,	// (0x00015458) blid2_tripm_pane_t2

0x5f72,	// (0x00015471) blid2_tripm_pane_t3_ParamLimits

0x5f72,	// (0x00015471) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0001ef3e) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0001ef3e) blid2_tripm_pane_t

0x5fb9,	// (0x000154b8) cell_blid2_satellite_pane_ParamLimits

0x5fb9,	// (0x000154b8) cell_blid2_satellite_pane

0x5fd5,	// (0x000154d4) cell_blid2_satellite_pane_g1

0xd588,	// (0x0001ca87) cell_blid2_satellite_pane_t1

0x9eea,	// (0x000193e9) blid2_speed_pane_g1

0xd596,	// (0x0001ca95) blid2_speed_pane_t1

0xd5a4,	// (0x0001caa3) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0001ef47) blid2_speed_pane_t

0x9eea,	// (0x000193e9) blid2_navig_ring_pane_g1

0x5fde,	// (0x000154dd) blid2_navig_ring_pane_g2

0x5fe6,	// (0x000154e5) blid2_navig_ring_pane_g3

0x5fee,	// (0x000154ed) blid2_navig_ring_pane_g4

0x5ff6,	// (0x000154f5) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0001ef4c) blid2_navig_ring_pane_g

0x9454,	// (0x00018953) bg_popup_window_pane_cp011

0xd5b2,	// (0x0001cab1) popup_blid2_search_window_g1

0xd5ba,	// (0x0001cab9) popup_blid2_search_window_t1

0xd5c8,	// (0x0001cac7) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0001ef57) popup_blid2_search_window_t

0x9ffd,	// (0x000194fc) main_browser_pane_g1

0x9c89,	// (0x00019188) main_browser_pane_ParamLimits

0x94c9,	// (0x000189c8) bg_button_pane_cp011_ParamLimits

0x4f4e,	// (0x0001444d) cell_vitu2_function_pane_g1_ParamLimits

0xa9ad,	// (0x00019eac) bg_popup_sub_pane_cp22_ParamLimits

0x5891,	// (0x00014d90) input_focus_pane_cp08_ParamLimits

0x58ad,	// (0x00014dac) popup_vitu2_query_button_pane_ParamLimits

0x58ad,	// (0x00014dac) popup_vitu2_query_button_pane

0x58bc,	// (0x00014dbb) popup_vitu2_query_input_button_pane

0xd0fc,	// (0x0001c5fb) popup_vitu2_query_window_g1_ParamLimits

0x58c6,	// (0x00014dc5) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0001ee58) popup_vitu2_query_window_g_ParamLimits

0x9454,	// (0x00018953) bg_button_pane_cp026

0x5ffe,	// (0x000154fd) popup_vitu2_query_input_button_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp025

0xd5d6,	// (0x0001cad5) popup_vitu2_query_button_pane_t1

0x3513,	// (0x00012a12) main_mp3_pane_t6

0x3521,	// (0x00012a20) popup_slider_window_cp01

0xccbd,	// (0x0001c1bc) cam4_battery_pane

0xcd12,	// (0x0001c211) cam4_battery_pane_cp02

0xd3e1,	// (0x0001c8e0) cam4_battery_pane_cp01

0xd3e1,	// (0x0001c8e0) cam4_battery_pane_cp03

0x9eea,	// (0x000193e9) cam4_battery_pane_g1

0xd5e4,	// (0x0001cae3) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0001ef5c) cam4_battery_pane_g

0xc02c,	// (0x0001b52b) popup_blid_sat_info2_window_t11

0x1fef,	// (0x000114ee) aid_size_touch_mv_arrow_left_ParamLimits

0x2018,	// (0x00011517) aid_size_touch_mv_arrow_right_ParamLimits

0xa80e,	// (0x00019d0d) navi_pane_g1_ParamLimits

0x2057,	// (0x00011556) navi_pane_g2_ParamLimits

0x2085,	// (0x00011584) navi_pane_g3_ParamLimits

0xf334,	// (0x0001e833) navi_pane_g_ParamLimits

0x20df,	// (0x000115de) navi_pane_mv_t1_ParamLimits

0x4191,	// (0x00013690) grid_imed_effect_pane_ParamLimits

0x0be0,	// (0x000100df) aid_placing_vt_slider_lsc

0x9f39,	// (0x00019438) aid_placing_vt_slider_prt

0x94c9,	// (0x000189c8) bg_tb_trans_pane_cp01_ParamLimits

0xc294,	// (0x0001b793) popup_image_details_window_g1_ParamLimits

0xc2a7,	// (0x0001b7a6) popup_image_details_window_g2_ParamLimits

0xc2bc,	// (0x0001b7bb) popup_image_details_window_g3_ParamLimits

0xc2bc,	// (0x0001b7bb) popup_image_details_window_g3

0xf660,	// (0x0001eb5f) popup_image_details_window_g_ParamLimits

0xc2d0,	// (0x0001b7cf) popup_image_details_window_t1_ParamLimits

0xc2e2,	// (0x0001b7e1) popup_image_details_window_t2_ParamLimits

0xc2fb,	// (0x0001b7fa) popup_image_details_window_t3_ParamLimits

0xc30f,	// (0x0001b80e) popup_image_details_window_t4_ParamLimits

0xc32a,	// (0x0001b829) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0001eb66) popup_image_details_window_t_ParamLimits

0x5c55,	// (0x00015154) cl_header_name_pane_ParamLimits

0x5c55,	// (0x00015154) cl_header_name_pane

0x6006,	// (0x00015505) cl_header_name_pane_t1_ParamLimits

0x6006,	// (0x00015505) cl_header_name_pane_t1

0x6027,	// (0x00015526) cl_header_name_pane_t2_ParamLimits

0x6027,	// (0x00015526) cl_header_name_pane_t2

0x6069,	// (0x00015568) cl_header_name_pane_t3_ParamLimits

0x6069,	// (0x00015568) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0001ef61) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0001ef61) cl_header_name_pane_t

0x20b0,	// (0x000115af) navi_pane_mv_g2_ParamLimits

0xcda5,	// (0x0001c2a4) field_vitu2_entry_pane_g1_ParamLimits

0xcdb1,	// (0x0001c2b0) field_vitu2_entry_pane_g2_ParamLimits

0xa977,	// (0x00019e76) field_vitu2_entry_pane_g3_ParamLimits

0xa977,	// (0x00019e76) field_vitu2_entry_pane_g3

0xf862,	// (0x0001ed61) field_vitu2_entry_pane_g_ParamLimits

0x4dde,	// (0x000142dd) cell_vitu2_itu_pane_g1_ParamLimits

0x4df6,	// (0x000142f5) cell_vitu2_itu_pane_g2_ParamLimits

0x4df6,	// (0x000142f5) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0001ed6d) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0001ed6d) cell_vitu2_itu_pane_g

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp05_ParamLimits

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp05

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp03

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp04

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp10_ParamLimits

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp10

0x5bf2,	// (0x000150f1) bg_vkb2_func_pane_cp08

0x5bc5,	// (0x000150c4) bg_vkb2_func_pane_cp06

0x5bd1,	// (0x000150d0) bg_vkb2_func_pane_cp07

0xd4b2,	// (0x0001c9b1) bg_vkb2_func_pane_cp11_ParamLimits

0xd4b2,	// (0x0001c9b1) bg_vkb2_func_pane_cp11

0xd4c7,	// (0x0001c9c6) bg_vkb2_func_pane_cp12_ParamLimits

0xd4c7,	// (0x0001c9c6) bg_vkb2_func_pane_cp12

0x9454,	// (0x00018953) bg_vkb2_func_pane_cp09

0xce1b,	// (0x0001c31a) bg_vkb2_func_pane_g1

0xa10e,	// (0x0001960d) bg_vkb2_func_pane_g2

0xce23,	// (0x0001c322) bg_vkb2_func_pane_g3

0xce2b,	// (0x0001c32a) bg_vkb2_func_pane_g4

0xd0a1,	// (0x0001c5a0) bg_vkb2_func_pane_g5

0xce43,	// (0x0001c342) bg_vkb2_func_pane_g6

0xce4b,	// (0x0001c34a) bg_vkb2_func_pane_g7

0xce3b,	// (0x0001c33a) bg_vkb2_func_pane_g8

0xa0ee,	// (0x000195ed) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0001ef68) bg_vkb2_func_pane_g

0x5f2e,	// (0x0001542d) blid2_tripm_pane_g6_ParamLimits

0x5f2e,	// (0x0001542d) blid2_tripm_pane_g6

0xcb84,	// (0x0001c083) mp4_progress_pane_g1

0x5fa5,	// (0x000154a4) blid2_tripm_values_pane_ParamLimits

0x5fa5,	// (0x000154a4) blid2_tripm_values_pane

0x609a,	// (0x00015599) blid2_tripm_values_pane_t1

0x60a8,	// (0x000155a7) blid2_tripm_values_pane_t2

0xd61a,	// (0x0001cb19) blid2_tripm_values_pane_t3

0x60b6,	// (0x000155b5) blid2_tripm_values_pane_t4

0x60c4,	// (0x000155c3) blid2_tripm_values_pane_t5

0x60d2,	// (0x000155d1) blid2_tripm_values_pane_t6

0xd628,	// (0x0001cb27) blid2_tripm_values_pane_t7

0x60e0,	// (0x000155df) blid2_tripm_values_pane_t8

0x60ee,	// (0x000155ed) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0001ef7b) blid2_tripm_values_pane_t

0x0c1d,	// (0x0001011c) call_video_pane_t1_ParamLimits

0x0c37,	// (0x00010136) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0001e6e1) call_video_pane_t_ParamLimits

0x23fd,	// (0x000118fc) msg_header_pane_g1_ParamLimits

0xaa64,	// (0x00019f63) msg_header_pane_g2_ParamLimits

0xaa64,	// (0x00019f63) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0001e8d6) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0001e8d6) msg_header_pane_g

0x9c89,	// (0x00019188) main_clock2_pane_ParamLimits

0x3e8e,	// (0x0001338d) grid_clock2_toolbar_pane_ParamLimits

0x3e8e,	// (0x0001338d) grid_clock2_toolbar_pane

0x3e8e,	// (0x0001338d) listscroll_clock2_pane_ParamLimits

0x3e8e,	// (0x0001338d) listscroll_clock2_pane

0x3f6d,	// (0x0001346c) main_clock2_pane_t3_ParamLimits

0x3f6d,	// (0x0001346c) main_clock2_pane_t3

0x3f90,	// (0x0001348f) main_clock2_pane_t4_ParamLimits

0x3f90,	// (0x0001348f) main_clock2_pane_t4

0xd636,	// (0x0001cb35) cell_clock2_toolbar_pane

0xd63e,	// (0x0001cb3d) cell_clock2_toolbar_pane_cp01

0xd63e,	// (0x0001cb3d) cell_clock2_toolbar_pane_cp02

0xd646,	// (0x0001cb45) cell_clock2_toolbar_pane_cp03

0xd64e,	// (0x0001cb4d) list_clock2_pane

0xa774,	// (0x00019c73) scroll_pane_cp10

0xd656,	// (0x0001cb55) list_single_clock2_pane_ParamLimits

0xd656,	// (0x0001cb55) list_single_clock2_pane

0x9eaa,	// (0x000193a9) list_highlight_pane_cp08

0xd663,	// (0x0001cb62) list_single_clock2_pane_t1

0xd671,	// (0x0001cb70) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0001ef8e) list_single_clock2_pane_t

0x9454,	// (0x00018953) bg_button_pane_cp10

0xd67f,	// (0x0001cb7e) cell_clock2_toolbar_pane_g1

0x248d,	// (0x0001198c) aid_main_viewer_pane_g1_ParamLimits

0x248d,	// (0x0001198c) aid_main_viewer_pane_g1

0x249b,	// (0x0001199a) aid_main_viewer_pane_g2_ParamLimits

0x249b,	// (0x0001199a) aid_main_viewer_pane_g2

0x24a9,	// (0x000119a8) aid_main_viewer_pane_g3_ParamLimits

0x24a9,	// (0x000119a8) aid_main_viewer_pane_g3

0x24b8,	// (0x000119b7) aid_main_viewer_pane_g4_ParamLimits

0x24b8,	// (0x000119b7) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0001e8e7) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0001e8e7) aid_main_viewer_pane_g

0x2e54,	// (0x00012353) main_calc_pane_ParamLimits

0x2e68,	// (0x00012367) main_dialer2_pane_ParamLimits

0x9454,	// (0x00018953) main_cam6_pane

0x9454,	// (0x00018953) main_vid6_pane

0x3e9a,	// (0x00013399) listscroll_gen_pane_cp06_ParamLimits

0x3e9a,	// (0x00013399) listscroll_gen_pane_cp06

0x3fb3,	// (0x000134b2) main_clock2_pane_t5_ParamLimits

0x3fb3,	// (0x000134b2) main_clock2_pane_t5

0x4011,	// (0x00013510) aid_call2_pane_cp10_ParamLimits

0x4023,	// (0x00013522) aid_call_pane_cp10_ParamLimits

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4035,	// (0x00013534) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4035,	// (0x00013534) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7e3,	// (0x00019ce2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0001ec1b) popup_clock_analogue_window_cp10_g_ParamLimits

0x404b,	// (0x0001354a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x457b,	// (0x00013a7a) cell_dialer2_keypad_pane_g2_ParamLimits

0x457b,	// (0x00013a7a) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0001ed00) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0001ed00) cell_dialer2_keypad_pane_g

0x4597,	// (0x00013a96) cell_dialer2_keypad_pane_t1

0x5276,	// (0x00014775) main_cset_text2_pane_ParamLimits

0x5276,	// (0x00014775) main_cset_text2_pane

0xd2e8,	// (0x0001c7e7) area_vitu2_query_pane_g1_ParamLimits

0x5b5c,	// (0x0001505b) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0001eeab) area_vitu2_query_pane_g_ParamLimits

0xd36c,	// (0x0001c86b) area_vitu2_query_pane_t7_ParamLimits

0xd36c,	// (0x0001c86b) area_vitu2_query_pane_t7

0x5bc5,	// (0x000150c4) bg_button_pane_cp018_ParamLimits

0x5bd1,	// (0x000150d0) bg_button_pane_cp021_ParamLimits

0x5bdd,	// (0x000150dc) bg_button_pane_cp022_ParamLimits

0x5bf2,	// (0x000150f1) bg_vkb2_func_pane_cp08_ParamLimits

0x5bc5,	// (0x000150c4) bg_vkb2_func_pane_cp06_ParamLimits

0x5bd1,	// (0x000150d0) bg_vkb2_func_pane_cp07_ParamLimits

0x5c08,	// (0x00015107) input_focus_pane_cp09_ParamLimits

0xd687,	// (0x0001cb86) cam6_autofocus_pane_ParamLimits

0xd687,	// (0x0001cb86) cam6_autofocus_pane

0x60fc,	// (0x000155fb) cam6_image_uncrop_pane_ParamLimits

0x60fc,	// (0x000155fb) cam6_image_uncrop_pane

0x610c,	// (0x0001560b) cam6_indi_pane_ParamLimits

0x610c,	// (0x0001560b) cam6_indi_pane

0x6122,	// (0x00015621) cam6_mode_pane_ParamLimits

0x6122,	// (0x00015621) cam6_mode_pane

0x6134,	// (0x00015633) cam6_timer_pane_ParamLimits

0x6134,	// (0x00015633) cam6_timer_pane

0x6140,	// (0x0001563f) cam6_zoom_pane_ParamLimits

0x6140,	// (0x0001563f) cam6_zoom_pane

0x614e,	// (0x0001564d) cam6_mode_pane_g1_ParamLimits

0x614e,	// (0x0001564d) cam6_mode_pane_g1

0x615e,	// (0x0001565d) cam6_mode_pane_g2_ParamLimits

0x615e,	// (0x0001565d) cam6_mode_pane_g2

0x616e,	// (0x0001566d) cam6_mode_pane_g3_ParamLimits

0x616e,	// (0x0001566d) cam6_mode_pane_g3

0x617e,	// (0x0001567d) cam6_mode_pane_g4_ParamLimits

0x617e,	// (0x0001567d) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0001ef93) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0001ef93) cam6_mode_pane_g

0xbde2,	// (0x0001b2e1) bg_tb_trans_pane_cp08_ParamLimits

0xbde2,	// (0x0001b2e1) bg_tb_trans_pane_cp08

0xd695,	// (0x0001cb94) cam6_battery_pane_ParamLimits

0xd695,	// (0x0001cb94) cam6_battery_pane

0xd6ab,	// (0x0001cbaa) cam6_indi_pane_g1_ParamLimits

0xd6ab,	// (0x0001cbaa) cam6_indi_pane_g1

0xd6bd,	// (0x0001cbbc) cam6_indi_pane_g2_ParamLimits

0xd6bd,	// (0x0001cbbc) cam6_indi_pane_g2

0xd6cf,	// (0x0001cbce) cam6_indi_pane_g3_ParamLimits

0xd6cf,	// (0x0001cbce) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0001ef9c) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0001ef9c) cam6_indi_pane_g

0xd6e1,	// (0x0001cbe0) cam6_indi_pane_t1_ParamLimits

0xd6e1,	// (0x0001cbe0) cam6_indi_pane_t1

0x4bb1,	// (0x000140b0) cam6_autofocus_pane_g1

0x4bb9,	// (0x000140b8) cam6_autofocus_pane_g2

0x4bc1,	// (0x000140c0) cam6_autofocus_pane_g3

0x4bc9,	// (0x000140c8) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0001efa3) cam6_autofocus_pane_g

0xd707,	// (0x0001cc06) cam6_timer_pane_g1

0xd70f,	// (0x0001cc0e) cam6_timer_pane_t1

0xd71d,	// (0x0001cc1c) cam6_zoom_cont_pane

0xd725,	// (0x0001cc24) cam6_zoom_pane_g1

0xd72e,	// (0x0001cc2d) cam6_zoom_pane_g2

0x618e,	// (0x0001568d) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0001efac) cam6_zoom_pane_g

0x9eea,	// (0x000193e9) cam6_battery_pane_g1

0x9eea,	// (0x000193e9) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0001e897) cam6_battery_pane_g

0xd725,	// (0x0001cc24) cam6_zoom_cont_pane_g1

0xd72e,	// (0x0001cc2d) cam6_zoom_cont_pane_g2

0xd737,	// (0x0001cc36) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0001efb3) cam6_zoom_cont_pane_g

0x61ac,	// (0x000156ab) cam6_mode_pane_cp_ParamLimits

0x61ac,	// (0x000156ab) cam6_mode_pane_cp

0x61be,	// (0x000156bd) cam6_zoom_pane_cp_ParamLimits

0x61be,	// (0x000156bd) cam6_zoom_pane_cp

0x61cc,	// (0x000156cb) vid6_image_uncrop_cif_pane_ParamLimits

0x61cc,	// (0x000156cb) vid6_image_uncrop_cif_pane

0x61dc,	// (0x000156db) vid6_image_uncrop_nhd_pane_ParamLimits

0x61dc,	// (0x000156db) vid6_image_uncrop_nhd_pane

0x61eb,	// (0x000156ea) vid6_image_uncrop_vga_pane_ParamLimits

0x61eb,	// (0x000156ea) vid6_image_uncrop_vga_pane

0x61fa,	// (0x000156f9) vid6_image_uncrop_wvga_pane_ParamLimits

0x61fa,	// (0x000156f9) vid6_image_uncrop_wvga_pane

0x6209,	// (0x00015708) vid6_indi_pane_ParamLimits

0x6209,	// (0x00015708) vid6_indi_pane

0xbde2,	// (0x0001b2e1) bg_tb_trans_pane_cp09_ParamLimits

0xbde2,	// (0x0001b2e1) bg_tb_trans_pane_cp09

0xd74f,	// (0x0001cc4e) cam6_battery_pane_cp_ParamLimits

0xd74f,	// (0x0001cc4e) cam6_battery_pane_cp

0xd75b,	// (0x0001cc5a) vid6_indi_pane_g1_ParamLimits

0xd75b,	// (0x0001cc5a) vid6_indi_pane_g1

0xd76d,	// (0x0001cc6c) vid6_indi_pane_g2_ParamLimits

0xd76d,	// (0x0001cc6c) vid6_indi_pane_g2

0xd77f,	// (0x0001cc7e) vid6_indi_pane_g3_ParamLimits

0xd77f,	// (0x0001cc7e) vid6_indi_pane_g3

0xd796,	// (0x0001cc95) vid6_indi_pane_g4_ParamLimits

0xd796,	// (0x0001cc95) vid6_indi_pane_g4

0xd7ad,	// (0x0001ccac) vid6_indi_pane_g5_ParamLimits

0xd7ad,	// (0x0001ccac) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0001efba) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0001efba) vid6_indi_pane_g

0xd7c7,	// (0x0001ccc6) vid6_indi_pane_t1_ParamLimits

0xd7c7,	// (0x0001ccc6) vid6_indi_pane_t1

0xd7dd,	// (0x0001ccdc) vid6_indi_pane_t2_ParamLimits

0xd7dd,	// (0x0001ccdc) vid6_indi_pane_t2

0xd805,	// (0x0001cd04) vid6_indi_pane_t3_ParamLimits

0xd805,	// (0x0001cd04) vid6_indi_pane_t3

0xd82d,	// (0x0001cd2c) vid6_indi_pane_t4_ParamLimits

0xd82d,	// (0x0001cd2c) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0001efc5) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0001efc5) vid6_indi_pane_t

0xd851,	// (0x0001cd50) wait_bar_pane_cp08

0x6221,	// (0x00015720) main_cset_text2_pane_t1_ParamLimits

0x6221,	// (0x00015720) main_cset_text2_pane_t1

0x6197,	// (0x00015696) listscroll_gen_pane_cp06_t1_ParamLimits

0x6197,	// (0x00015696) listscroll_gen_pane_cp06_t1

0x9454,	// (0x00018953) main_cam6_set_pane

0x9bf5,	// (0x000190f4) bg_tb_trans_pane_cp06_ParamLimits

0xccc5,	// (0x0001c1c4) cam4_indicators_pane_g1_ParamLimits

0xccd6,	// (0x0001c1d5) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0001ed3d) cam4_indicators_pane_g_ParamLimits

0xccee,	// (0x0001c1ed) cam4_indicators_pane_t1_ParamLimits

0x94c9,	// (0x000189c8) bg_tb_trans_pane_cp07_ParamLimits

0xcd1c,	// (0x0001c21b) vid4_indicators_pane_g1_ParamLimits

0xcd32,	// (0x0001c231) vid4_indicators_pane_g2_ParamLimits

0xcd46,	// (0x0001c245) vid4_indicators_pane_g3_ParamLimits

0xcd59,	// (0x0001c258) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0001ed4f) vid4_indicators_pane_g_ParamLimits

0xcd77,	// (0x0001c276) vid4_indicators_pane_t1_ParamLimits

0xd3e9,	// (0x0001c8e8) vid4_progress_pane_g1_ParamLimits

0xd3f9,	// (0x0001c8f8) vid4_progress_pane_g2_ParamLimits

0x5d49,	// (0x00015248) vid4_progress_pane_g3_ParamLimits

0xd409,	// (0x0001c908) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0001eef6) vid4_progress_pane_g_ParamLimits

0x5d5b,	// (0x0001525a) vid4_progress_pane_t1_ParamLimits

0xd427,	// (0x0001c926) vid4_progress_pane_t2_ParamLimits

0xd440,	// (0x0001c93f) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0001ef01) vid4_progress_pane_t_ParamLimits

0x5d75,	// (0x00015274) wait_bar_pane_cp07_ParamLimits

0x6242,	// (0x00015741) main_cam6_set_pane_g2_ParamLimits

0x6242,	// (0x00015741) main_cam6_set_pane_g2

0x6268,	// (0x00015767) main_cset6_listscroll_pane_ParamLimits

0x6268,	// (0x00015767) main_cset6_listscroll_pane

0x6286,	// (0x00015785) main_cset6_slider_pane_ParamLimits

0x6286,	// (0x00015785) main_cset6_slider_pane

0x629c,	// (0x0001579b) main_cset6_text2_pane_ParamLimits

0x629c,	// (0x0001579b) main_cset6_text2_pane

0xd860,	// (0x0001cd5f) main_cset6_text_pane

0xd868,	// (0x0001cd67) main_cset_list_pane_copy1_ParamLimits

0xd868,	// (0x0001cd67) main_cset_list_pane_copy1

0xd878,	// (0x0001cd77) scroll_pane_cp028_copy1

0x62aa,	// (0x000157a9) cset_list_set_pane_copy1

0x62be,	// (0x000157bd) aid_position_infowindow_above_copy1

0x62c6,	// (0x000157c5) aid_position_infowindow_below_copy1

0x62ce,	// (0x000157cd) cset_list_set_pane_g1_copy1

0x62d6,	// (0x000157d5) cset_list_set_pane_g3_copy1_ParamLimits

0x62d6,	// (0x000157d5) cset_list_set_pane_g3_copy1

0x62e5,	// (0x000157e4) cset_list_set_pane_t1_copy1_ParamLimits

0x62e5,	// (0x000157e4) cset_list_set_pane_t1_copy1

0x94c9,	// (0x000189c8) list_highlight_pane_cp021_copy1_ParamLimits

0x94c9,	// (0x000189c8) list_highlight_pane_cp021_copy1

0xd881,	// (0x0001cd80) cset6_slider_pane_ParamLimits

0xd881,	// (0x0001cd80) cset6_slider_pane

0xd8ad,	// (0x0001cdac) main_cset6_slider_pane_g1_ParamLimits

0xd8ad,	// (0x0001cdac) main_cset6_slider_pane_g1

0x62fa,	// (0x000157f9) main_cset6_slider_pane_g2_ParamLimits

0x62fa,	// (0x000157f9) main_cset6_slider_pane_g2

0xd8d5,	// (0x0001cdd4) main_cset6_slider_pane_g3_ParamLimits

0xd8d5,	// (0x0001cdd4) main_cset6_slider_pane_g3

0x6322,	// (0x00015821) main_cset6_slider_pane_g4_ParamLimits

0x6322,	// (0x00015821) main_cset6_slider_pane_g4

0x632e,	// (0x0001582d) main_cset6_slider_pane_g5_ParamLimits

0x632e,	// (0x0001582d) main_cset6_slider_pane_g5

0xcf60,	// (0x0001c45f) main_cset6_slider_pane_g7_ParamLimits

0xcf60,	// (0x0001c45f) main_cset6_slider_pane_g7

0xcf6c,	// (0x0001c46b) main_cset6_slider_pane_g8_ParamLimits

0xcf6c,	// (0x0001c46b) main_cset6_slider_pane_g8

0x531e,	// (0x0001481d) main_cset6_slider_pane_g9_ParamLimits

0x531e,	// (0x0001481d) main_cset6_slider_pane_g9

0x532a,	// (0x00014829) main_cset6_slider_pane_g10_ParamLimits

0x532a,	// (0x00014829) main_cset6_slider_pane_g10

0x5336,	// (0x00014835) main_cset6_slider_pane_g11_ParamLimits

0x5336,	// (0x00014835) main_cset6_slider_pane_g11

0x5342,	// (0x00014841) main_cset6_slider_pane_g12_ParamLimits

0x5342,	// (0x00014841) main_cset6_slider_pane_g12

0x534e,	// (0x0001484d) main_cset6_slider_pane_g13_ParamLimits

0x534e,	// (0x0001484d) main_cset6_slider_pane_g13

0x535a,	// (0x00014859) main_cset6_slider_pane_g14_ParamLimits

0x535a,	// (0x00014859) main_cset6_slider_pane_g14

0x633c,	// (0x0001583b) main_cset6_slider_pane_g15_ParamLimits

0x633c,	// (0x0001583b) main_cset6_slider_pane_g15

0x537e,	// (0x0001487d) main_cset6_slider_pane_g16_ParamLimits

0x537e,	// (0x0001487d) main_cset6_slider_pane_g16

0x538c,	// (0x0001488b) main_cset6_slider_pane_g17_ParamLimits

0x538c,	// (0x0001488b) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0001efce) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0001efce) main_cset6_slider_pane_g

0xd8e1,	// (0x0001cde0) main_cset6_slider_pane_t1_ParamLimits

0xd8e1,	// (0x0001cde0) main_cset6_slider_pane_t1

0x636c,	// (0x0001586b) main_cset6_slider_pane_t2_ParamLimits

0x636c,	// (0x0001586b) main_cset6_slider_pane_t2

0x6397,	// (0x00015896) main_cset6_slider_pane_t3_ParamLimits

0x6397,	// (0x00015896) main_cset6_slider_pane_t3

0x63c2,	// (0x000158c1) main_cset6_slider_pane_t4_ParamLimits

0x63c2,	// (0x000158c1) main_cset6_slider_pane_t4

0x63ed,	// (0x000158ec) main_cset6_slider_pane_t5_ParamLimits

0x63ed,	// (0x000158ec) main_cset6_slider_pane_t5

0xd922,	// (0x0001ce21) main_cset6_slider_pane_t7_ParamLimits

0xd922,	// (0x0001ce21) main_cset6_slider_pane_t7

0x641a,	// (0x00015919) main_cset6_slider_pane_t8_ParamLimits

0x641a,	// (0x00015919) main_cset6_slider_pane_t8

0x643e,	// (0x0001593d) main_cset6_slider_pane_t9_ParamLimits

0x643e,	// (0x0001593d) main_cset6_slider_pane_t9

0x6462,	// (0x00015961) main_cset6_slider_pane_t10_ParamLimits

0x6462,	// (0x00015961) main_cset6_slider_pane_t10

0x6486,	// (0x00015985) main_cset6_slider_pane_t11_ParamLimits

0x6486,	// (0x00015985) main_cset6_slider_pane_t11

0xd958,	// (0x0001ce57) main_cset6_slider_pane_t14_ParamLimits

0xd958,	// (0x0001ce57) main_cset6_slider_pane_t14

0xd991,	// (0x0001ce90) main_cset6_slider_pane_t15_ParamLimits

0xd991,	// (0x0001ce90) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0001eff3) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0001eff3) main_cset6_slider_pane_t

0xd9ca,	// (0x0001cec9) cset_slider_pane_g1_copy1

0xd9d3,	// (0x0001ced2) cset_slider_pane_g2_copy1

0xd9dc,	// (0x0001cedb) cset_slider_pane_g3_copy1

0x9454,	// (0x00018953) bg_popup_sub_pane_cp011_copy1

0xd9ee,	// (0x0001ceed) main_cset_text_pane_g1_copy1

0xd110,	// (0x0001c60f) main_cset_text_pane_t1_copy1

0xd11e,	// (0x0001c61d) main_cset_text_pane_t2_copy1

0xd12c,	// (0x0001c62b) main_cset_text_pane_t3_copy1

0xd13a,	// (0x0001c639) main_cset_text_pane_t4_copy1

0xd148,	// (0x0001c647) main_cset_text_pane_t5_copy1

0xd9f6,	// (0x0001cef5) main_cset_text_pane_t6_copy1

0xda04,	// (0x0001cf03) main_cset_text_pane_t7_copy1

0x6221,	// (0x00015720) main_cset_text2_pane_t1_copy1

0x94c9,	// (0x000189c8) main_ncimui_pane

0x30f6,	// (0x000125f5) popup_query_ncimui_window_ParamLimits

0x30f6,	// (0x000125f5) popup_query_ncimui_window

0xc3cb,	// (0x0001b8ca) field_cale_ev2_pane_g4_ParamLimits

0xc3cb,	// (0x0001b8ca) field_cale_ev2_pane_g4

0x4446,	// (0x00013945) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4446,	// (0x00013945) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0001ecd7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0001ecd7) cell_video_dialer_keypad_pane_g

0x445e,	// (0x0001395d) cell_video_dialer_keypad_pane_t1

0x9454,	// (0x00018953) bg_popup_window_pane_cp012

0xbbc3,	// (0x0001b0c2) heading_pane_cp06

0xda30,	// (0x0001cf2f) ncim_query_content_pane

0x9454,	// (0x00018953) bg_popup_heading_pane_cp01

0xda38,	// (0x0001cf37) ncim_heading_pane_t1

0xda46,	// (0x0001cf45) ncim_indicator_popup_pane

0xda58,	// (0x0001cf57) ncim_query_button_pane

0xda6e,	// (0x0001cf6d) ncim_query_content_pane_t1

0xda80,	// (0x0001cf7f) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0001f037) ncim_query_content_pane_t

0xdaba,	// (0x0001cfb9) ncim_query_list_pane

0xdacc,	// (0x0001cfcb) ncim_query_popup_pane

0xda46,	// (0x0001cf45) ncim_indicator_popup_pane_ParamLimits

0x65f2,	// (0x00015af1) ncim_query_content_pane_g1_ParamLimits

0x65f2,	// (0x00015af1) ncim_query_content_pane_g1

0xda6e,	// (0x0001cf6d) ncim_query_content_pane_t1_ParamLimits

0xda80,	// (0x0001cf7f) ncim_query_content_pane_t2_ParamLimits

0x65fe,	// (0x00015afd) ncim_query_content_pane_t3_ParamLimits

0x65fe,	// (0x00015afd) ncim_query_content_pane_t3

0x6626,	// (0x00015b25) ncim_query_content_pane_t4_ParamLimits

0x6626,	// (0x00015b25) ncim_query_content_pane_t4

0x664e,	// (0x00015b4d) ncim_query_content_pane_t5_ParamLimits

0x664e,	// (0x00015b4d) ncim_query_content_pane_t5

0xda92,	// (0x0001cf91) ncim_query_content_pane_t6_ParamLimits

0xda92,	// (0x0001cf91) ncim_query_content_pane_t6

0xfb38,	// (0x0001f037) ncim_query_content_pane_t_ParamLimits

0xdaba,	// (0x0001cfb9) ncim_query_list_pane_ParamLimits

0xdacc,	// (0x0001cfcb) ncim_query_popup_pane_ParamLimits

0xdae0,	// (0x0001cfdf) wait_bar_pane_cp04

0x9454,	// (0x00018953) input_focus_pane_cp011

0xdae8,	// (0x0001cfe7) ncim_query_popup_pane_t1

0xdaf6,	// (0x0001cff5) ncim_list_query_list_pane_ParamLimits

0xdaf6,	// (0x0001cff5) ncim_list_query_list_pane

0x9454,	// (0x00018953) bg_button_pane_cp027

0xdb09,	// (0x0001d008) ncim_query_button_pane_g1

0x9454,	// (0x00018953) list_highlight_pane_cp012

0xdb13,	// (0x0001d012) ncim_list_query_list_pane_g1

0xdb1b,	// (0x0001d01a) ncim_list_query_list_pane_t1

0xcce2,	// (0x0001c1e1) cam4_indicators_pane_g3_ParamLimits

0xcce2,	// (0x0001c1e1) cam4_indicators_pane_g3

0xcd65,	// (0x0001c264) vid4_indicators_pane_g5_ParamLimits

0xcd65,	// (0x0001c264) vid4_indicators_pane_g5

0xd418,	// (0x0001c917) vid4_progress_pane_g5_ParamLimits

0xd418,	// (0x0001c917) vid4_progress_pane_g5

0x64dd,	// (0x000159dc) main_ncimui_pane_g1

0x6546,	// (0x00015a45) ncimui_group_query_pane_ParamLimits

0x6546,	// (0x00015a45) ncimui_group_query_pane

0x658e,	// (0x00015a8d) ncimui_list_pane_ParamLimits

0x658e,	// (0x00015a8d) ncimui_list_pane

0x65b5,	// (0x00015ab4) ncimui_text_pane_ParamLimits

0x65b5,	// (0x00015ab4) ncimui_text_pane

0x6676,	// (0x00015b75) ncimui_text_pane_t1_ParamLimits

0x6676,	// (0x00015b75) ncimui_text_pane_t1

0xdb29,	// (0x0001d028) ncimui_list_single_graphic_pane_ParamLimits

0xdb29,	// (0x0001d028) ncimui_list_single_graphic_pane

0x6694,	// (0x00015b93) ncimui_query_pane_ParamLimits

0x6694,	// (0x00015b93) ncimui_query_pane

0x9454,	// (0x00018953) list_highlight_pane_cp013

0xdb39,	// (0x0001d038) ncim_list_query_list_pane_t1_copy1

0xdb13,	// (0x0001d012) ncim_list_single_graphic_pane_g1

0x66a7,	// (0x00015ba6) ncim_query_button_pane_cp01

0x66b3,	// (0x00015bb2) ncim_query_entry_pane_ParamLimits

0x66b3,	// (0x00015bb2) ncim_query_entry_pane

0x66c6,	// (0x00015bc5) ncimui_query_pane_g1

0x66d2,	// (0x00015bd1) ncimui_query_pane_t1_ParamLimits

0x66d2,	// (0x00015bd1) ncimui_query_pane_t1

0x94c9,	// (0x000189c8) input_focus_pane_cp012

0xdb47,	// (0x0001d046) ncim_query_entry_pane_t1

0x9c89,	// (0x00019188) main_im_pane_ParamLimits

0x94c9,	// (0x000189c8) main_mobtv_pane_ParamLimits

0x94c9,	// (0x000189c8) main_mobtv_pane

0x6354,	// (0x00015853) main_cset6_slider_pane_g18_ParamLimits

0x6354,	// (0x00015853) main_cset6_slider_pane_g18

0x6360,	// (0x0001585f) main_cset6_slider_pane_g19_ParamLimits

0x6360,	// (0x0001585f) main_cset6_slider_pane_g19

0x9c11,	// (0x00019110) bg_main_mobtv_pane_ParamLimits

0x9c11,	// (0x00019110) bg_main_mobtv_pane

0x66eb,	// (0x00015bea) main_mobtv_info_pane

0x66f6,	// (0x00015bf5) main_mobtv_loading_pane_ParamLimits

0x66f6,	// (0x00015bf5) main_mobtv_loading_pane

0xdb59,	// (0x0001d058) main_mobtv_pg_channel_list_pane

0xdb63,	// (0x0001d062) main_mobtv_pg_hdr_pane

0x6703,	// (0x00015c02) main_mobtv_programe_curr_pane_ParamLimits

0x6703,	// (0x00015c02) main_mobtv_programe_curr_pane

0x6710,	// (0x00015c0f) main_mobtv_programe_next_pane_ParamLimits

0x6710,	// (0x00015c0f) main_mobtv_programe_next_pane

0xdb6c,	// (0x0001d06b) popup_mobtv_noti_window

0x9eea,	// (0x000193e9) main_tv_pg_hdr_pane_g1

0xdb76,	// (0x0001d075) main_tv_pg_hdr_pane_g2

0xdb7e,	// (0x0001d07d) main_tv_pg_hdr_pane_g3

0xdb86,	// (0x0001d085) main_tv_pg_hdr_pane_g4

0xdb8e,	// (0x0001d08d) main_tv_pg_hdr_pane_g5

0xdb98,	// (0x0001d097) main_tv_pg_hdr_pane_g6

0xdba2,	// (0x0001d0a1) main_tv_pg_hdr_pane_g7

0xdbac,	// (0x0001d0ab) main_tv_pg_hdr_pane_g8

0xdbb6,	// (0x0001d0b5) main_tv_pg_hdr_pane_g9

0xdbc0,	// (0x0001d0bf) main_tv_pg_hdr_pane_g10

0xdbca,	// (0x0001d0c9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0001f044) main_tv_pg_hdr_pane_g

0xdbd4,	// (0x0001d0d3) main_tv_pg_hdr_pane_t1

0xdbe2,	// (0x0001d0e1) main_tv_pg_hdr_pane_t2

0xdbf0,	// (0x0001d0ef) main_tv_pg_hdr_pane_t3

0xdc00,	// (0x0001d0ff) main_tv_pg_hdr_pane_t4

0xdc10,	// (0x0001d10f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0001f05b) main_tv_pg_hdr_pane_t

0xdc20,	// (0x0001d11f) single_mobtv_pg_channel_pane_ParamLimits

0xdc20,	// (0x0001d11f) single_mobtv_pg_channel_pane

0xdc32,	// (0x0001d131) single_mobtv_pg_channel_table_pane

0xdc3b,	// (0x0001d13a) single_mobtv_pg_channel_thumb_pane

0xdc44,	// (0x0001d143) single_tv_pg_channel_pane_g1

0xdc4d,	// (0x0001d14c) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0001f066) single_tv_pg_channel_pane_g

0x9bf5,	// (0x000190f4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9bf5,	// (0x000190f4) bg_single_mobtv_pg_channel_thumb_pane

0xdc56,	// (0x0001d155) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc56,	// (0x0001d155) single_mobtv_pg_channel_thumb_pane_g1

0xdc64,	// (0x0001d163) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc64,	// (0x0001d163) single_mobtv_pg_channel_thumb_pane_g2

0xdc70,	// (0x0001d16f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc70,	// (0x0001d16f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0001f06b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0001f06b) single_mobtv_pg_channel_thumb_pane_g

0xdc7c,	// (0x0001d17b) single_mobtv_pg_channel_thumb_pane_t1

0xdc8a,	// (0x0001d189) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0001f072) single_mobtv_pg_channel_thumb_pane_t

0x9eea,	// (0x000193e9) bg_single_mobtv_pg_channel_table_pane_g1

0x9eea,	// (0x000193e9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0001e897) bg_single_mobtv_pg_channel_table_pane_g

0xdc98,	// (0x0001d197) single_mobtv_pg_channel_table_pane_t1

0xdca6,	// (0x0001d1a5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0001f077) single_mobtv_pg_channel_table_pane_t

0x6725,	// (0x00015c24) main_mobtv_info_pane_g1_ParamLimits

0x6725,	// (0x00015c24) main_mobtv_info_pane_g1

0x6743,	// (0x00015c42) main_mobtv_info_pane_t1_ParamLimits

0x6743,	// (0x00015c42) main_mobtv_info_pane_t1

0x67bb,	// (0x00015cba) main_mobtv_info_pane_t2_ParamLimits

0x67bb,	// (0x00015cba) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0001f081) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0001f081) main_mobtv_info_pane_t

0x684c,	// (0x00015d4b) wait_bar_pane_cp05

0x685e,	// (0x00015d5d) main_mobtv_loading_pane_g1_ParamLimits

0x685e,	// (0x00015d5d) main_mobtv_loading_pane_g1

0x686f,	// (0x00015d6e) main_mobtv_loading_pane_g2_ParamLimits

0x686f,	// (0x00015d6e) main_mobtv_loading_pane_g2

0x687b,	// (0x00015d7a) main_mobtv_loading_pane_g3_ParamLimits

0x687b,	// (0x00015d7a) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0001f088) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0001f088) main_mobtv_loading_pane_g

0xdcb4,	// (0x0001d1b3) main_mobtv_loading_pane_t1_ParamLimits

0xdcb4,	// (0x0001d1b3) main_mobtv_loading_pane_t1

0xdccc,	// (0x0001d1cb) main_mobtv_loading_pane_t2_ParamLimits

0xdccc,	// (0x0001d1cb) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0001f08f) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0001f08f) main_mobtv_loading_pane_t

0x688e,	// (0x00015d8d) wait_bar_pane_cp06_ParamLimits

0x688e,	// (0x00015d8d) wait_bar_pane_cp06

0xdcf0,	// (0x0001d1ef) main_mobtv_programe_curr_pane_t1

0xdcfe,	// (0x0001d1fd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0001f094) main_mobtv_programe_curr_pane_t

0xdd0c,	// (0x0001d20b) main_mobtv_programe_next_pane_t1

0xdd1a,	// (0x0001d219) main_mobtv_programe_next_pane_t2

0xdd28,	// (0x0001d227) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0001f099) main_mobtv_programe_next_pane_t

0x9454,	// (0x00018953) bg_popup_mobtv_noti_window_pane

0xdd36,	// (0x0001d235) popup_mobtv_noti_window_g1

0xdd3e,	// (0x0001d23d) popup_mobtv_noti_window_t1

0xdd4c,	// (0x0001d24b) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0001f0a0) popup_mobtv_noti_window_t

0x9eea,	// (0x000193e9) bg_popup_mobtv_noti_window_pane_g1

0x9454,	// (0x00018953) sc_clock_pane

0x9454,	// (0x00018953) main_fs_bigclock_pane

0x5f8f,	// (0x0001548e) blid2_tripm_pane_t4_ParamLimits

0x5f8f,	// (0x0001548e) blid2_tripm_pane_t4

0x689d,	// (0x00015d9c) sc_clock_pane_g1_ParamLimits

0x689d,	// (0x00015d9c) sc_clock_pane_g1

0x68af,	// (0x00015dae) sc_clock_pane_t1_ParamLimits

0x68af,	// (0x00015dae) sc_clock_pane_t1

0x68d3,	// (0x00015dd2) sc_clock_pane_t2_ParamLimits

0x68d3,	// (0x00015dd2) sc_clock_pane_t2

0x68eb,	// (0x00015dea) sc_clock_pane_t3_ParamLimits

0x68eb,	// (0x00015dea) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0001f0a5) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0001f0a5) sc_clock_pane_t

0x78a4,	// (0x00016da3) main_fs_bigclock_indicator_pane_ParamLimits

0x78a4,	// (0x00016da3) main_fs_bigclock_indicator_pane

0x69b1,	// (0x00015eb0) main_fs_bigclock_pane_g1_ParamLimits

0x69b1,	// (0x00015eb0) main_fs_bigclock_pane_g1

0x78b0,	// (0x00016daf) main_fs_bigclock_pane_t1_ParamLimits

0x78b0,	// (0x00016daf) main_fs_bigclock_pane_t1

0x78c2,	// (0x00016dc1) main_fs_bigclock_pane_t2_ParamLimits

0x78c2,	// (0x00016dc1) main_fs_bigclock_pane_t2

0x78d6,	// (0x00016dd5) main_fs_bigclock_pane_t3_ParamLimits

0x78d6,	// (0x00016dd5) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0001f236) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0001f236) main_fs_bigclock_pane_t

0xe712,	// (0x0001dc11) main_fs_bigclock_indicator_pane_g1

0xda60,	// (0x0001cf5f) ncim_query_content_pane_g2_ParamLimits

0xda60,	// (0x0001cf5f) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0001f032) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0001f032) ncim_query_content_pane_g

0x6902,	// (0x00015e01) sc_clock_pane_t4_ParamLimits

0x6902,	// (0x00015e01) sc_clock_pane_t4

0x94c9,	// (0x000189c8) main_radioblah_pane

0xcc23,	// (0x0001c122) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc23,	// (0x0001c122) cell_call4_button_pane_t1_copy1

0x64f5,	// (0x000159f4) main_ncimui_pane_t1_ParamLimits

0x64f5,	// (0x000159f4) main_ncimui_pane_t1

0x650f,	// (0x00015a0e) main_ncimui_pane_t2_ParamLimits

0x650f,	// (0x00015a0e) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0001f02b) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0001f02b) main_ncimui_pane_t

0xdd5a,	// (0x0001d259) main_radioblah_anim_pane_ParamLimits

0xdd5a,	// (0x0001d259) main_radioblah_anim_pane

0xdd6b,	// (0x0001d26a) main_radioblah_info_pane_ParamLimits

0xdd6b,	// (0x0001d26a) main_radioblah_info_pane

0xdd7f,	// (0x0001d27e) main_radioblah_pane_t1_ParamLimits

0xdd7f,	// (0x0001d27e) main_radioblah_pane_t1

0xdd9b,	// (0x0001d29a) main_radioblah_pane_t2_ParamLimits

0xdd9b,	// (0x0001d29a) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0001f0c6) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0001f0c6) main_radioblah_pane_t

0x6b5a,	// (0x00016059) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6b5a,	// (0x00016059) main_radioblah_rocker_ctrl_pane

0xdde3,	// (0x0001d2e2) main_radioblah_info_pane_t1_ParamLimits

0xdde3,	// (0x0001d2e2) main_radioblah_info_pane_t1

0x6bb2,	// (0x000160b1) main_radioblah_info_pane_t2_ParamLimits

0x6bb2,	// (0x000160b1) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0001f0cf) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0001f0cf) main_radioblah_info_pane_t

0x9eea,	// (0x000193e9) main_radioblah_rocker_ctrl_pane_g1

0x6c62,	// (0x00016161) main_radioblah_rocker_ctrl_pane_g2

0x6c6a,	// (0x00016169) main_radioblah_rocker_ctrl_pane_g3

0x6c72,	// (0x00016171) main_radioblah_rocker_ctrl_pane_g4

0x6c7a,	// (0x00016179) main_radioblah_rocker_ctrl_pane_g5

0x6c82,	// (0x00016181) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0001f0d8) main_radioblah_rocker_ctrl_pane_g

0x6221,	// (0x00015720) main_cset_text2_pane_t1_copy1_ParamLimits

0xccb3,	// (0x0001c1b2) cam4_image_uncrop_qvga_pane

0xcd08,	// (0x0001c207) vid4_image_uncrop_qcif_pane

0xd687,	// (0x0001cb86) cam6_image_uncrop_qvga_pane_ParamLimits

0xd687,	// (0x0001cb86) cam6_image_uncrop_qvga_pane

0xd73f,	// (0x0001cc3e) vid6_image_uncrop_qcif_pane_ParamLimits

0xd73f,	// (0x0001cc3e) vid6_image_uncrop_qcif_pane

0x9454,	// (0x00018953) bg_popup_preview_window_pane_cp03

0xda12,	// (0x0001cf11) list_cset_text2_pane

0xda1a,	// (0x0001cf19) main_cset6_text2_pane_g1

0xda22,	// (0x0001cf21) main_cset6_text2_pane_t1

0xde1d,	// (0x0001d31c) list_cset_text2_pane_t1_ParamLimits

0xde1d,	// (0x0001d31c) list_cset_text2_pane_t1

0x94c9,	// (0x000189c8) main_radioblah_pane_ParamLimits

0x6838,	// (0x00015d37) main_mobtv_info_pane_t3_ParamLimits

0x6838,	// (0x00015d37) main_mobtv_info_pane_t3

0x6b48,	// (0x00016047) main_radioblah_pane_g1

0x6b82,	// (0x00016081) main_radioblah_info_pane_g1

0x6c07,	// (0x00016106) main_radioblah_info_pane_t3_ParamLimits

0x6c07,	// (0x00016106) main_radioblah_info_pane_t3

0x1bd2,	// (0x000110d1) highlight_cell_cale_month_pane_ParamLimits

0x1bd2,	// (0x000110d1) highlight_cell_cale_month_pane

0x9454,	// (0x00018953) main_phob_fisheye_pane

0xc440,	// (0x0001b93f) scroll_pane_cp0031_ParamLimits

0xc440,	// (0x0001b93f) scroll_pane_cp0031

0xd851,	// (0x0001cd50) wait_bar_pane_cp08_ParamLimits

0x62aa,	// (0x000157a9) cset_list_set_pane_copy1_ParamLimits

0xde37,	// (0x0001d336) highlight_cell_cale_month_pane_g1

0x6c8a,	// (0x00016189) highlight_cell_cale_month_pane_t1

0xd3d8,	// (0x0001c8d7) list_gen_pane_cp01

0xcf4b,	// (0x0001c44a) scroll_pane_01

0x6c98,	// (0x00016197) list_single_double_fisheye_pane

0x6ca1,	// (0x000161a0) list_double_fisheye_pane_g1_ParamLimits

0x6ca1,	// (0x000161a0) list_double_fisheye_pane_g1

0x6cad,	// (0x000161ac) list_double_fisheye_pane_g2_ParamLimits

0x6cad,	// (0x000161ac) list_double_fisheye_pane_g2

0x6cc1,	// (0x000161c0) list_double_fisheye_pane_g3_ParamLimits

0x6cc1,	// (0x000161c0) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0001f0e5) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0001f0e5) list_double_fisheye_pane_g

0x6cea,	// (0x000161e9) list_double_fisheye_pane_t1_ParamLimits

0x6cea,	// (0x000161e9) list_double_fisheye_pane_t1

0x6d05,	// (0x00016204) list_double_fisheye_pane_t2_ParamLimits

0x6d05,	// (0x00016204) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0001f0f0) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0001f0f0) list_double_fisheye_pane_t

0x9454,	// (0x00018953) main_call5_pane

0x692d,	// (0x00015e2c) sc_swipe_pane_ParamLimits

0x692d,	// (0x00015e2c) sc_swipe_pane

0x6d3a,	// (0x00016239) call5_image_pane_ParamLimits

0x6d3a,	// (0x00016239) call5_image_pane

0x6d57,	// (0x00016256) call5_swipe_1_pane_ParamLimits

0x6d57,	// (0x00016256) call5_swipe_1_pane

0x6d6a,	// (0x00016269) call5_swipe_2_pane_ParamLimits

0x6d6a,	// (0x00016269) call5_swipe_2_pane

0x6d95,	// (0x00016294) popup_call5_audio_first_window_ParamLimits

0x6d95,	// (0x00016294) popup_call5_audio_first_window

0x9bf5,	// (0x000190f4) call5_swipe_1_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) call5_swipe_1_pane_g1

0xde3f,	// (0x0001d33e) call5_swipe_1_pane_g2_ParamLimits

0xde3f,	// (0x0001d33e) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0001f0f5) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0001f0f5) call5_swipe_1_pane_g

0xde4b,	// (0x0001d34a) call5_swipe_1_pane_t1_ParamLimits

0xde4b,	// (0x0001d34a) call5_swipe_1_pane_t1

0x9bf5,	// (0x000190f4) call5_swipe_2_pane_g1_ParamLimits

0x9bf5,	// (0x000190f4) call5_swipe_2_pane_g1

0xde60,	// (0x0001d35f) call5_swipe_2_pane_g2_ParamLimits

0xde60,	// (0x0001d35f) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0001f0fa) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0001f0fa) call5_swipe_2_pane_g

0xde6c,	// (0x0001d36b) call5_swipe_2_pane_t1_ParamLimits

0xde6c,	// (0x0001d36b) call5_swipe_2_pane_t1

0xde81,	// (0x0001d380) sc_swipe_pane_g1_ParamLimits

0xde81,	// (0x0001d380) sc_swipe_pane_g1

0xde8e,	// (0x0001d38d) sc_swipe_pane_g2_ParamLimits

0xde8e,	// (0x0001d38d) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0001f0ff) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0001f0ff) sc_swipe_pane_g

0xde9a,	// (0x0001d399) sc_swipe_pane_t1_ParamLimits

0xde9a,	// (0x0001d399) sc_swipe_pane_t1

0x9454,	// (0x00018953) main_cmail_launcher_pane

0x6daa,	// (0x000162a9) aid_size_cell_cmail_l_ParamLimits

0x6daa,	// (0x000162a9) aid_size_cell_cmail_l

0x6dbf,	// (0x000162be) grid_cmail_l_pane_ParamLimits

0x6dbf,	// (0x000162be) grid_cmail_l_pane

0x6dd9,	// (0x000162d8) cell_cmail_l_pane_ParamLimits

0x6dd9,	// (0x000162d8) cell_cmail_l_pane

0x6dfa,	// (0x000162f9) cell_cmail_l_pane_g1_ParamLimits

0x6dfa,	// (0x000162f9) cell_cmail_l_pane_g1

0x6e06,	// (0x00016305) cell_cmail_l_pane_t1_ParamLimits

0x6e06,	// (0x00016305) cell_cmail_l_pane_t1

0x6e1c,	// (0x0001631b) cell_cmail_l_pane_t2_ParamLimits

0x6e1c,	// (0x0001631b) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0001f104) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0001f104) cell_cmail_l_pane_t

0x94c9,	// (0x000189c8) grid_highlight_pane_cp018_ParamLimits

0x94c9,	// (0x000189c8) grid_highlight_pane_cp018

0xfe4f,	// (0x0000f34e) main2_pane_ParamLimits

0xfe4f,	// (0x0000f34e) main2_pane

0x9d45,	// (0x00019244) popup_sp_fs_action_menu_bg_pane_g1

0x9d4d,	// (0x0001924c) popup_sp_fs_action_menu_bg_pane_g2

0x9d55,	// (0x00019254) popup_sp_fs_action_menu_bg_pane_g3

0x9d5d,	// (0x0001925c) popup_sp_fs_action_menu_bg_pane_g4

0x9d65,	// (0x00019264) popup_sp_fs_action_menu_bg_pane_g5

0x9d6d,	// (0x0001926c) popup_sp_fs_action_menu_bg_pane_g6

0x9d75,	// (0x00019274) popup_sp_fs_action_menu_bg_pane_g7

0x9d7d,	// (0x0001927c) popup_sp_fs_action_menu_bg_pane_g8

0x9d85,	// (0x00019284) popup_sp_fs_action_menu_bg_pane_g9

0x9d8d,	// (0x0001928c) popup_sp_fs_action_menu_bg_pane_g10

0x9d8d,	// (0x0001928c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0001e604) popup_sp_fs_action_menu_bg_pane_g

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g2

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001e6b2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001e6b2) list_medium_line_x2_t3_g3_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t2

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g3_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t3_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t2

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g2_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g2

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g3

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t4_g4_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t2

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t3

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001e6ce) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001e6ce) list_medium_line_x2_t4_g4_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g2

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g3

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t2_g4_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g4_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g4_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g2

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001e6b2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001e6b2) list_medium_line_x2_t2_g3_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g3_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g3_t

0x1d29,	// (0x00011228) main_sp_fs_list_pane_ParamLimits

0x1d29,	// (0x00011228) main_sp_fs_list_pane

0xd5ee,	// (0x0001caed) sp_fs_scroll_pane_ParamLimits

0xd5ee,	// (0x0001caed) sp_fs_scroll_pane

0xa476,	// (0x00019975) list_medium_line_x2_t3_t1

0xa476,	// (0x00019975) list_medium_line_x2_t3_t2

0xa476,	// (0x00019975) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0001e77b) list_medium_line_x2_t3_t

0xa476,	// (0x00019975) list_medium_line_x3_t4_t1

0xa476,	// (0x00019975) list_medium_line_x3_t4_t2

0xa476,	// (0x00019975) list_medium_line_x3_t4_t3

0xa476,	// (0x00019975) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0001e782) list_medium_line_x3_t4_t

0xa476,	// (0x00019975) list_medium_line_x4_t5_t1

0xa476,	// (0x00019975) list_medium_line_x4_t5_t2

0xa476,	// (0x00019975) list_medium_line_x4_t5_t3

0xa476,	// (0x00019975) list_medium_line_x4_t5_t4

0xa476,	// (0x00019975) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0001e78b) list_medium_line_x4_t5_t

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g1

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g2

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g3

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001e6c5) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001e6c5) list_medium_line_t4_g4_g

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t1

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t2

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t3

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t4_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001e6ce) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001e6ce) list_medium_line_t4_g4_t

0x1dd7,	// (0x000112d6) chi_dic_find_pane_g1

0x2e7c,	// (0x0001237b) main_tport_pane

0xa476,	// (0x00019975) list_medium_line_plain_t1

0x9bf5,	// (0x000190f4) list_medium_line_t2_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_t2_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_t2_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_t2_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_g2_t1

0x9ebc,	// (0x000193bb) list_medium_line_t2_g2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_t2_g2_t

0xd455,	// (0x0001c954) aid_sp_fs_list_icon_a_sm

0xd45d,	// (0x0001c95c) aid_sp_fs_list_icon_d

0xd465,	// (0x0001c964) aid_sp_fs_text_primary

0xd46e,	// (0x0001c96d) aid_sp_fs_text_secondary

0x9454,	// (0x00018953) list_medium_line

0x9454,	// (0x00018953) list_medium_line_g2

0x9454,	// (0x00018953) list_medium_line_g3

0x9454,	// (0x00018953) list_medium_line_plain

0x9454,	// (0x00018953) list_medium_line_plain_t2

0x9454,	// (0x00018953) list_medium_line_plain_t3

0x9454,	// (0x00018953) list_medium_line_right_icon

0x9454,	// (0x00018953) list_medium_line_right_iconx2

0x9454,	// (0x00018953) list_medium_line_t2

0x9454,	// (0x00018953) list_medium_line_t2_g2

0x9454,	// (0x00018953) list_medium_line_t2_g3

0x9454,	// (0x00018953) list_medium_line_t2_right_icon

0x9454,	// (0x00018953) list_medium_line_t2_right_iconx2

0x9454,	// (0x00018953) list_medium_line_t3

0x9454,	// (0x00018953) list_medium_line_t3_g2

0x9454,	// (0x00018953) list_medium_line_t3_g3

0x9454,	// (0x00018953) list_medium_line_t3_right_iconx2

0x9454,	// (0x00018953) list_medium_line_t4_g4

0x9454,	// (0x00018953) list_medium_line_x2

0x9454,	// (0x00018953) list_medium_line_x2_t2_g2

0x9454,	// (0x00018953) list_medium_line_x2_t2_g3

0x9454,	// (0x00018953) list_medium_line_x2_t2_g4

0x9454,	// (0x00018953) list_medium_line_x2_t3

0x9454,	// (0x00018953) list_medium_line_x2_t3_g2

0x9454,	// (0x00018953) list_medium_line_x2_t3_g3

0x9454,	// (0x00018953) list_medium_line_x2_t3_g4

0x9454,	// (0x00018953) list_medium_line_x2_t4_g2

0x9454,	// (0x00018953) list_medium_line_x2_t4_g4

0x9454,	// (0x00018953) list_medium_line_x3

0x9454,	// (0x00018953) list_medium_line_x3_t4

0x9454,	// (0x00018953) list_medium_line_x3_t4_g4

0x9454,	// (0x00018953) list_medium_line_x4_t4

0x9454,	// (0x00018953) list_medium_line_x4_t4_g7

0x9454,	// (0x00018953) list_medium_line_x4_t5

0x5d88,	// (0x00015287) list_single_fs_dyc_pane_ParamLimits

0x5d88,	// (0x00015287) list_single_fs_dyc_pane

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g1

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g2

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g3

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g4

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g5

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x4_t4_g7_g6

0x9c03,	// (0x00019102) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9c03,	// (0x00019102) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0001f00c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0001f00c) list_medium_line_x4_t4_g7_g

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t1

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t2

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x4_t4_g7_t3

0xa999,	// (0x00019e98) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa999,	// (0x00019e98) list_medium_line_x4_t4_g7_t4

0xa999,	// (0x00019e98) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa999,	// (0x00019e98) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0001f01b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0001f01b) list_medium_line_x4_t4_g7_t

0x64ac,	// (0x000159ab) list_single_dyc_row_pane_ParamLimits

0x64ac,	// (0x000159ab) list_single_dyc_row_pane

0x6d27,	// (0x00016226) call5_gesture_pane_ParamLimits

0x6d27,	// (0x00016226) call5_gesture_pane

0x6d7d,	// (0x0001627c) call5_windows_pane_ParamLimits

0x6d7d,	// (0x0001627c) call5_windows_pane

0x6e39,	// (0x00016338) call5_swipe_1_pane_cp_ParamLimits

0x6e39,	// (0x00016338) call5_swipe_1_pane_cp

0x6e45,	// (0x00016344) call5_swipe_2_pane_cp_ParamLimits

0x6e45,	// (0x00016344) call5_swipe_2_pane_cp

0x9eaa,	// (0x000193a9) call5_image_pane_cp

0x6e51,	// (0x00016350) popup_call5_audio_first_window_cp_ParamLimits

0x6e51,	// (0x00016350) popup_call5_audio_first_window_cp

0xde81,	// (0x0001d380) call5_swipe_1_pane_g1_cp_ParamLimits

0xde81,	// (0x0001d380) call5_swipe_1_pane_g1_cp

0xdeaf,	// (0x0001d3ae) call5_swipe_1_pane_g2_cp

0xde9a,	// (0x0001d399) call5_swipe_1_pane_t1_cp_ParamLimits

0xde9a,	// (0x0001d399) call5_swipe_1_pane_t1_cp

0xde81,	// (0x0001d380) call5_swipe_2_pane_g1_cp_ParamLimits

0xde81,	// (0x0001d380) call5_swipe_2_pane_g1_cp

0xdeb7,	// (0x0001d3b6) call5_swipe_2_pane_g2_cp

0xdebf,	// (0x0001d3be) call5_swipe_2_pane_t1_cp_ParamLimits

0xdebf,	// (0x0001d3be) call5_swipe_2_pane_t1_cp

0x94c9,	// (0x000189c8) main_sp_fs_email_pane

0xd02e,	// (0x0001c52d) main_sp_fs_listscroll_pane_te

0x6e5f,	// (0x0001635e) popup_sp_fs_action_menu_pane_ParamLimits

0x6e5f,	// (0x0001635e) popup_sp_fs_action_menu_pane

0x9eea,	// (0x000193e9) bg_sp_fs_ctrlbar_pane_g1

0xded4,	// (0x0001d3d3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdedd,	// (0x0001d3dc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdee6,	// (0x0001d3e5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9eea,	// (0x000193e9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0001f109) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbdf0,	// (0x0001b2ef) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbdf0,	// (0x0001b2ef) bg_sp_fs_ctrlbar_ddmenu_pane

0xdeef,	// (0x0001d3ee) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdeef,	// (0x0001d3ee) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdefb,	// (0x0001d3fa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdefb,	// (0x0001d3fa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0001f112) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0001f112) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf07,	// (0x0001d406) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf07,	// (0x0001d406) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9eea,	// (0x000193e9) list_medium_line_t2_right_icon_g1

0xa476,	// (0x00019975) list_medium_line_t2_right_icon_t1

0xa476,	// (0x00019975) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0001f117) list_medium_line_t2_right_icon_t

0xa9ad,	// (0x00019eac) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa9ad,	// (0x00019eac) bg_sp_fs_ctrlbar_pane

0x6ef2,	// (0x000163f1) main_sp_fs_ctrlbar_button_pane_cp01

0x6efc,	// (0x000163fb) main_sp_fs_ctrlbar_ddmenu_pane

0xdf5b,	// (0x0001d45a) main_sp_fs_ctrlbar_pane_g1

0xdf67,	// (0x0001d466) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0001f11c) main_sp_fs_ctrlbar_pane_g

0x6f3a,	// (0x00016439) main_sp_fs_ctrlbar_pane_t1

0x6f79,	// (0x00016478) main_sp_fs_ctrlbar_pane

0x6f9d,	// (0x0001649c) main_sp_fs_listscroll_pane_te_cp01

0x6fbd,	// (0x000164bc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6fbd,	// (0x000164bc) popup_sp_fs_action_menu_pane_cp01

0x94c9,	// (0x000189c8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94c9,	// (0x000189c8) bg_sp_fs_highlight_list_pane_cp01

0xdf8e,	// (0x0001d48d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf8e,	// (0x0001d48d) sp_fs_action_menu_list_gene_pane_g1

0xdf9d,	// (0x0001d49c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf9d,	// (0x0001d49c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0001f12a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0001f12a) sp_fs_action_menu_list_gene_pane_g

0xdfaa,	// (0x0001d4a9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdfaa,	// (0x0001d4a9) sp_fs_action_menu_list_gene_pane_t1

0xdfc2,	// (0x0001d4c1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdfc2,	// (0x0001d4c1) sp_fs_action_menu_list_gene_pane

0xdfe5,	// (0x0001d4e4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfe5,	// (0x0001d4e4) popup_sp_fs_action_menu_bg_pane

0xdff3,	// (0x0001d4f2) sp_fs_action_menu_list_pane_ParamLimits

0xdff3,	// (0x0001d4f2) sp_fs_action_menu_list_pane

0x6fe2,	// (0x000164e1) sp_fs_scroll_pane_cp01_ParamLimits

0x6fe2,	// (0x000164e1) sp_fs_scroll_pane_cp01

0xa476,	// (0x00019975) list_medium_line_plain_t2_t1

0xa476,	// (0x00019975) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0001f117) list_medium_line_plain_t2_t

0xa476,	// (0x00019975) list_medium_line_plain_t3_t1

0xa476,	// (0x00019975) list_medium_line_plain_t3_t2

0xa476,	// (0x00019975) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0001e77b) list_medium_line_plain_t3_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t2_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g2_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_x2_t2_g2_t

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_t4_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t2

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t3

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0001e6ce) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0001e6ce) list_medium_line_x2_t4_g2_t

0x9eea,	// (0x000193e9) list_medium_line_t3_right_iconx2_g1

0x9eea,	// (0x000193e9) list_medium_line_t3_right_iconx2_g2

0x9eea,	// (0x000193e9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0001e89c) list_medium_line_t3_right_iconx2_g

0xa476,	// (0x00019975) list_medium_line_t3_right_iconx2_t1

0xa476,	// (0x00019975) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0001f117) list_medium_line_t3_right_iconx2_t

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g1

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g2

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g3

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001e6c5) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001e6c5) list_medium_line_x3_t4_g4_g

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t1

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t2

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t3

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001e6ce) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001e6ce) list_medium_line_x3_t4_g4_t

0x7008,	// (0x00016507) list_single_dyc_row_text_pane_t1_ParamLimits

0x7008,	// (0x00016507) list_single_dyc_row_text_pane_t1

0x7051,	// (0x00016550) list_single_dyc_row_text_pane_t2_ParamLimits

0x7051,	// (0x00016550) list_single_dyc_row_text_pane_t2

0xe017,	// (0x0001d516) list_single_dyc_row_text_pane_t3_ParamLimits

0xe017,	// (0x0001d516) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0001f12f) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0001f12f) list_single_dyc_row_text_pane_t

0xe03b,	// (0x0001d53a) list_single_dyc_row_pane_g1_ParamLimits

0xe03b,	// (0x0001d53a) list_single_dyc_row_pane_g1

0xe047,	// (0x0001d546) list_single_dyc_row_pane_g2_ParamLimits

0xe047,	// (0x0001d546) list_single_dyc_row_pane_g2

0xe053,	// (0x0001d552) list_single_dyc_row_pane_g3_ParamLimits

0xe053,	// (0x0001d552) list_single_dyc_row_pane_g3

0xe05f,	// (0x0001d55e) list_single_dyc_row_pane_g4_ParamLimits

0xe05f,	// (0x0001d55e) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0001f13c) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0001f13c) list_single_dyc_row_pane_g

0xe06b,	// (0x0001d56a) list_single_dyc_row_text_pane_ParamLimits

0xe06b,	// (0x0001d56a) list_single_dyc_row_text_pane

0x9454,	// (0x00018953) bg_sp_fs_scroll_pane

0xe08a,	// (0x0001d589) thumb_sp_fs_scroll_pane

0x9bf5,	// (0x000190f4) list_medium_line_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g1

0x9ebc,	// (0x000193bb) list_medium_line_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t1

0x9bf5,	// (0x000190f4) list_medium_line_x2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_x2_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t1

0x9bf5,	// (0x000190f4) list_medium_line_x3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x3_g1

0xe093,	// (0x0001d592) list_medium_line_x3_g2_ParamLimits

0xe093,	// (0x0001d592) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0001f145) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0001f145) list_medium_line_x3_g

0xe0a1,	// (0x0001d5a0) list_medium_line_x3_t1_ParamLimits

0xe0a1,	// (0x0001d5a0) list_medium_line_x3_t1

0xe0b5,	// (0x0001d5b4) thumb_sp_fs_scroll_pane_g1

0xe0be,	// (0x0001d5bd) thumb_sp_fs_scroll_pane_g2

0xe0c7,	// (0x0001d5c6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0001f14a) thumb_sp_fs_scroll_pane_g

0xe0b5,	// (0x0001d5b4) bg_sp_fs_scroll_pane_g1

0xe0be,	// (0x0001d5bd) bg_sp_fs_scroll_pane_g2

0xe0c7,	// (0x0001d5c6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0001f14a) bg_sp_fs_scroll_pane_g

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g1

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g2

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g3

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0001e6c5) list_medium_line_x2_t3_g4_g

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t1

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t2

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_x2_t3_g4_t

0x9bf5,	// (0x000190f4) list_medium_line_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_g2_t1

0x9bf5,	// (0x000190f4) list_medium_line_t3_g2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g2_g1

0x9bf5,	// (0x000190f4) list_medium_line_t3_g2_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001e6c0) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001e6c0) list_medium_line_t3_g2_g

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t1

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t2

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_g2_t

0x9eea,	// (0x000193e9) list_medium_line_right_icon_g1

0xa476,	// (0x00019975) list_medium_line_right_icon_t1

0x9bf5,	// (0x000190f4) list_medium_line_t2_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g1

0x9ebc,	// (0x000193bb) list_medium_line_t2_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_t1

0x9ebc,	// (0x000193bb) list_medium_line_t2_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_t2_t

0x9bf5,	// (0x000190f4) list_medium_line_t3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g1

0x9ebc,	// (0x000193bb) list_medium_line_t3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_t1

0x9ebc,	// (0x000193bb) list_medium_line_t3_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_t2

0x9ebc,	// (0x000193bb) list_medium_line_t3_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_t

0x9bf5,	// (0x000190f4) list_medium_line_g3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g3_g1

0x9bf5,	// (0x000190f4) list_medium_line_g3_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g3_g2

0x9bf5,	// (0x000190f4) list_medium_line_g3_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0001e6b2) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0001e6b2) list_medium_line_g3_g

0x9ebc,	// (0x000193bb) list_medium_line_g3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_g3_t1

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g1

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g2

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001e6b2) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001e6b2) list_medium_line_t2_g3_g

0x9ebc,	// (0x000193bb) list_medium_line_t2_g3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_g3_t1

0x9ebc,	// (0x000193bb) list_medium_line_t2_g3_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0001e695) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0001e695) list_medium_line_t2_g3_t

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g1_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g1

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g2_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g2

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g3_ParamLimits

0x9bf5,	// (0x000190f4) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001e6b2) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001e6b2) list_medium_line_t3_g3_g

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t1_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t1

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t2_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t2

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t3_ParamLimits

0x9ebc,	// (0x000193bb) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001e6b9) list_medium_line_t3_g3_t

0x9eea,	// (0x000193e9) list_medium_line_right_iconx2_g1

0x9eea,	// (0x000193e9) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0001e897) list_medium_line_right_iconx2_g

0xa476,	// (0x00019975) list_medium_line_right_iconx2_t1

0x9eea,	// (0x000193e9) list_medium_line_t2_right_iconx2_g1

0x9eea,	// (0x000193e9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0001e897) list_medium_line_t2_right_iconx2_g

0xa476,	// (0x00019975) list_medium_line_t2_right_iconx2_t1

0xa476,	// (0x00019975) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0001f117) list_medium_line_t2_right_iconx2_t

0xa476,	// (0x00019975) list_medium_line_x4_t4_t1

0xa476,	// (0x00019975) list_medium_line_x4_t4_t2

0xa476,	// (0x00019975) list_medium_line_x4_t4_t3

0xa476,	// (0x00019975) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0001e782) list_medium_line_x4_t4_t

0x71ca,	// (0x000166c9) tport_appsw_pane_ParamLimits

0x71ca,	// (0x000166c9) tport_appsw_pane

0x71e2,	// (0x000166e1) tport_contact_pane_ParamLimits

0x71e2,	// (0x000166e1) tport_contact_pane

0x71fd,	// (0x000166fc) tport_listscroll_pane_ParamLimits

0x71fd,	// (0x000166fc) tport_listscroll_pane

0x7215,	// (0x00016714) cell_tport_appsw_pane_ParamLimits

0x7215,	// (0x00016714) cell_tport_appsw_pane

0xa977,	// (0x00019e76) tport_appsw_pane_g1_ParamLimits

0xa977,	// (0x00019e76) tport_appsw_pane_g1

0x725f,	// (0x0001675e) tport_contact_pane_g1

0x7268,	// (0x00016767) tport_contact_pane_t1

0x7276,	// (0x00016775) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0001f151) tport_contact_pane_t

0xe0d0,	// (0x0001d5cf) list_tport_pane

0xe0d9,	// (0x0001d5d8) scroll_pane_cp_030

0x728c,	// (0x0001678b) cell_tport_appsw_pane_g1

0x729c,	// (0x0001679b) cell_tport_appsw_pane_t1

0x72aa,	// (0x000167a9) grid_highlight_pane_cp019

0x72b2,	// (0x000167b1) list_tport_double_graphic_pane_ParamLimits

0x72b2,	// (0x000167b1) list_tport_double_graphic_pane

0x94c9,	// (0x000189c8) list_highlight_pane_cp023_ParamLimits

0x94c9,	// (0x000189c8) list_highlight_pane_cp023

0x72bf,	// (0x000167be) list_tport_double_graphic_pane_g1_ParamLimits

0x72bf,	// (0x000167be) list_tport_double_graphic_pane_g1

0x72cc,	// (0x000167cb) list_tport_double_graphic_pane_t1_ParamLimits

0x72cc,	// (0x000167cb) list_tport_double_graphic_pane_t1

0x72e1,	// (0x000167e0) list_tport_double_graphic_pane_t2_ParamLimits

0x72e1,	// (0x000167e0) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0001f15d) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0001f15d) list_tport_double_graphic_pane_t

0x9454,	// (0x00018953) main_cale_note_pane

0x4db5,	// (0x000142b4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4db5,	// (0x000142b4) cell_vitu2_function_top_wide_pane_cp01

0x684c,	// (0x00015d4b) wait_bar_pane_cp05_ParamLimits

0x94c9,	// (0x000189c8) listscroll_cmail_pane

0xe0ea,	// (0x0001d5e9) list_cmail_pane

0x72f3,	// (0x000167f2) list_cmail_body_pane

0x730a,	// (0x00016809) list_single_cmail_header_caption_pane

0x7324,	// (0x00016823) list_single_cmail_header_detail_pane_ParamLimits

0x7324,	// (0x00016823) list_single_cmail_header_detail_pane

0xe101,	// (0x0001d600) list_single_cmail_header_caption_pane_t1

0x7357,	// (0x00016856) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7357,	// (0x00016856) list_single_cmail_header_detail_pane_g1

0xe118,	// (0x0001d617) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe118,	// (0x0001d617) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0001f162) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0001f162) list_single_cmail_header_detail_pane_g

0x736f,	// (0x0001686e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x736f,	// (0x0001686e) list_single_cmail_header_detail_pane_t1

0x73ab,	// (0x000168aa) list_single_cmail_header_editor_pane_bg_ParamLimits

0x73ab,	// (0x000168aa) list_single_cmail_header_editor_pane_bg

0xdc4d,	// (0x0001d14c) list_cmail_body_pane_g1

0xe155,	// (0x0001d654) list_cmail_body_pane_t1

0xce1b,	// (0x0001c31a) list_single_cmail_header_editor_pane_bg_g1

0xa10e,	// (0x0001960d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce2b,	// (0x0001c32a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce23,	// (0x0001c322) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0a1,	// (0x0001c5a0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce4b,	// (0x0001c34a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce3b,	// (0x0001c33a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce43,	// (0x0001c342) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0ee,	// (0x000195ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x73c2,	// (0x000168c1) calenote_gesture_pane_ParamLimits

0x73c2,	// (0x000168c1) calenote_gesture_pane

0x73e2,	// (0x000168e1) calenote_window_pane_ParamLimits

0x73e2,	// (0x000168e1) calenote_window_pane

0xe163,	// (0x0001d662) popup_note_window_cp01

0x73fe,	// (0x000168fd) calenote_swipe_1_pane_ParamLimits

0x73fe,	// (0x000168fd) calenote_swipe_1_pane

0x6e45,	// (0x00016344) calenote_swipe_2_pane_ParamLimits

0x6e45,	// (0x00016344) calenote_swipe_2_pane

0xde81,	// (0x0001d380) calenote_swipe_1_pane_g1_ParamLimits

0xde81,	// (0x0001d380) calenote_swipe_1_pane_g1

0xde8e,	// (0x0001d38d) calenote_swipe_1_pane_g2_ParamLimits

0xde8e,	// (0x0001d38d) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0001f0ff) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0001f0ff) calenote_swipe_1_pane_g

0xe175,	// (0x0001d674) calenote_swipe_1_pane_t1_ParamLimits

0xe175,	// (0x0001d674) calenote_swipe_1_pane_t1

0xde81,	// (0x0001d380) calenote_swipe_2_pane_g1_ParamLimits

0xde81,	// (0x0001d380) calenote_swipe_2_pane_g1

0xe194,	// (0x0001d693) calenote_swipe_2_pane_g2_ParamLimits

0xe194,	// (0x0001d693) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0001f16e) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0001f16e) calenote_swipe_2_pane_g

0xe1a0,	// (0x0001d69f) calenote_swipe_2_pane_t1_ParamLimits

0xe1a0,	// (0x0001d69f) calenote_swipe_2_pane_t1

0x9454,	// (0x00018953) main_mup_navstr_pane

0x3c0c,	// (0x0001310b) main_mup3_pane_t7_ParamLimits

0x3c0c,	// (0x0001310b) main_mup3_pane_t7

0xc9be,	// (0x0001bebd) main_mp4_pane_g6_ParamLimits

0xc9be,	// (0x0001bebd) main_mp4_pane_g6

0xcc11,	// (0x0001c110) main_image3_pane_t4_ParamLimits

0xcc11,	// (0x0001c110) main_image3_pane_t4

0x7413,	// (0x00016912) popup_navstr_preview_pane_ParamLimits

0x7413,	// (0x00016912) popup_navstr_preview_pane

0x7423,	// (0x00016922) scroll_navstr_pane_ParamLimits

0x7423,	// (0x00016922) scroll_navstr_pane

0x9454,	// (0x00018953) bg_popup_preview_window_pane_cp04

0xe1c7,	// (0x0001d6c6) popup_navstr_preview_pane_t1

0x7437,	// (0x00016936) scroll_navstr_pane_g1_ParamLimits

0x7437,	// (0x00016936) scroll_navstr_pane_g1

0x744b,	// (0x0001694a) scroll_navstr_pane_t1_ParamLimits

0x744b,	// (0x0001694a) scroll_navstr_pane_t1

0xe16c,	// (0x0001d66b) bg_button_pane_cp014

0xe16c,	// (0x0001d66b) bg_button_pane_cp030

0x6ccd,	// (0x000161cc) list_double_fisheye_pane_g4_ParamLimits

0x6ccd,	// (0x000161cc) list_double_fisheye_pane_g4

0x6cd9,	// (0x000161d8) list_double_fisheye_pane_g5_ParamLimits

0x6cd9,	// (0x000161d8) list_double_fisheye_pane_g5

0xd5ee,	// (0x0001caed) sp_fs_scroll_pane_cp03

0xdf5b,	// (0x0001d45a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf67,	// (0x0001d466) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0001f11c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6f3a,	// (0x00016439) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe0f9,	// (0x0001d5f8) sp_fs_scroll_pane_cp02

0x9e06,	// (0x00019305) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e06,	// (0x00019305) popup_sp_fs_calendar_preview_list_single_pane

0x9454,	// (0x00018953) main_cam6_pano_pane

0x94c9,	// (0x000189c8) main_mup3_pane_ParamLimits

0x9454,	// (0x00018953) main_phacti_pane

0x671d,	// (0x00015c1c) bg_button_pane_cp11

0x6737,	// (0x00015c36) main_mobtv_info_pane_g2_ParamLimits

0x6737,	// (0x00015c36) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0001f07c) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0001f07c) main_mobtv_info_pane_g

0x6914,	// (0x00015e13) sc_clock_pane_t5_ParamLimits

0x6914,	// (0x00015e13) sc_clock_pane_t5

0x6b48,	// (0x00016047) main_radioblah_pane_g1_ParamLimits

0xddb3,	// (0x0001d2b2) main_radioblah_pane_t3_ParamLimits

0xddb3,	// (0x0001d2b2) main_radioblah_pane_t3

0xddcb,	// (0x0001d2ca) main_radioblah_pane_t4_ParamLimits

0xddcb,	// (0x0001d2ca) main_radioblah_pane_t4

0x6b70,	// (0x0001606f) main_radioblah_text_pane_ParamLimits

0x6b70,	// (0x0001606f) main_radioblah_text_pane

0x6b82,	// (0x00016081) main_radioblah_info_pane_g1_ParamLimits

0x6c1b,	// (0x0001611a) main_radioblah_info_pane_t4_ParamLimits

0x6c1b,	// (0x0001611a) main_radioblah_info_pane_t4

0x94c9,	// (0x000189c8) main_sp_fs_calendar_pane

0x7462,	// (0x00016961) main_phacti_pane_g1

0x746a,	// (0x00016969) phacti_note_pane_ParamLimits

0x746a,	// (0x00016969) phacti_note_pane

0xe1de,	// (0x0001d6dd) phacti_term_pane_ParamLimits

0xe1de,	// (0x0001d6dd) phacti_term_pane

0xe1f3,	// (0x0001d6f2) phacti_note_pane_t1_ParamLimits

0xe1f3,	// (0x0001d6f2) phacti_note_pane_t1

0xe20a,	// (0x0001d709) phacti_term_pane_g1

0xe212,	// (0x0001d711) phacti_term_pane_t1_ParamLimits

0xe212,	// (0x0001d711) phacti_term_pane_t1

0xe23c,	// (0x0001d73b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe244,	// (0x0001d743) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0001f178) popup_sp_fs_calendar_preview_list_single_pane_g

0xe24c,	// (0x0001d74b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe24c,	// (0x0001d74b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe262,	// (0x0001d761) aid_popup_sp_fs_bg_corner_pane

0x9eea,	// (0x000193e9) popup_sp_fs_calendar_preview_bg_pane_g1

0x9454,	// (0x00018953) popup_sp_fs_calendar_preview_bg_pane

0xe26a,	// (0x0001d769) popup_sp_fs_calendar_preview_list_pane

0xa9ad,	// (0x00019eac) bg_main_sp_fs_cale_pane_ParamLimits

0xa9ad,	// (0x00019eac) bg_main_sp_fs_cale_pane

0xe27b,	// (0x0001d77a) listscroll_cale_mrui_pane_ParamLimits

0xe27b,	// (0x0001d77a) listscroll_cale_mrui_pane

0xe290,	// (0x0001d78f) listscroll_sp_fs_schedule_track_pane

0xe299,	// (0x0001d798) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe299,	// (0x0001d798) main_sp_fs_ctrlbar_pane_cp01

0xe2ac,	// (0x0001d7ab) main_sp_fs_ribbon_pane

0xe2b4,	// (0x0001d7b3) popup_sp_fs_cale_preview_window

0x74df,	// (0x000169de) list_single_sp_fs_schedule_track_pane_ParamLimits

0x74df,	// (0x000169de) list_single_sp_fs_schedule_track_pane

0x94c9,	// (0x000189c8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94c9,	// (0x000189c8) bg_sp_fs_highlight_list_pane_cp03

0x74f2,	// (0x000169f1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x74f2,	// (0x000169f1) list_single_sp_fs_schedule_track_pane_g1

0x74fe,	// (0x000169fd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x74fe,	// (0x000169fd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0001f17d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0001f17d) list_single_sp_fs_schedule_track_pane_g

0x750a,	// (0x00016a09) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x750a,	// (0x00016a09) list_single_sp_fs_schedule_track_pane_t1

0x752c,	// (0x00016a2b) sp_fs_schedule_track_pane_ParamLimits

0x752c,	// (0x00016a2b) sp_fs_schedule_track_pane

0xe2c6,	// (0x0001d7c5) sp_fs_schedule_track_pane_g1

0xe2ce,	// (0x0001d7cd) sp_fs_schedule_track_pane_g2

0xe2d6,	// (0x0001d7d5) sp_fs_schedule_track_pane_g3

0xe2de,	// (0x0001d7dd) sp_fs_schedule_track_pane_g4

0xe2e6,	// (0x0001d7e5) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0001f182) sp_fs_schedule_track_pane_g

0xce1b,	// (0x0001c31a) bg_sp_fs_schedule_viewer_highlight_g1

0xa10e,	// (0x0001960d) bg_sp_fs_schedule_viewer_highlight_g2

0xce23,	// (0x0001c322) bg_sp_fs_schedule_viewer_highlight_g3

0xce2b,	// (0x0001c32a) bg_sp_fs_schedule_viewer_highlight_g4

0xd0a1,	// (0x0001c5a0) bg_sp_fs_schedule_viewer_highlight_g5

0xce3b,	// (0x0001c33a) bg_sp_fs_schedule_viewer_highlight_g6

0xce43,	// (0x0001c342) bg_sp_fs_schedule_viewer_highlight_g7

0xce4b,	// (0x0001c34a) bg_sp_fs_schedule_viewer_highlight_g8

0xa0ee,	// (0x000195ed) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0001f18d) bg_sp_fs_schedule_viewer_highlight_g

0x9454,	// (0x00018953) bg_main_sp_fs_ribbon_pane

0x7541,	// (0x00016a40) main_sp_fs_ribbon_pane_g1

0xe2ee,	// (0x0001d7ed) main_sp_fs_ribbon_pane_t1

0x754a,	// (0x00016a49) main_sp_fs_ribbon_pane_t2

0xe2fd,	// (0x0001d7fc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0001f1a0) main_sp_fs_ribbon_pane_t

0xe30c,	// (0x0001d80b) main_sp_fs_ribbon_scheduler_pane

0xe314,	// (0x0001d813) bg_main_sp_fs_ribbon_pane_g1

0xe31d,	// (0x0001d81c) bg_main_sp_fs_ribbon_pane_g2

0xe326,	// (0x0001d825) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0001f1a7) bg_main_sp_fs_ribbon_pane_g

0xe32e,	// (0x0001d82d) main_sp_fs_ribbon_scheduler_pane_g1

0xe337,	// (0x0001d836) main_sp_fs_ribbon_scheduler_pane_g2

0xe340,	// (0x0001d83f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0001f1ae) main_sp_fs_ribbon_scheduler_pane_g

0xe349,	// (0x0001d848) list_cale_mrui_pane

0x7559,	// (0x00016a58) sp_fs_scroll_pane_cp07_ParamLimits

0x7559,	// (0x00016a58) sp_fs_scroll_pane_cp07

0x7575,	// (0x00016a74) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7575,	// (0x00016a74) bg_sp_fs_schedule_viewer_highlight

0xe356,	// (0x0001d855) list_single_sp_fs_schedule_track_pane_cp01

0xe35e,	// (0x0001d85d) list_sp_fs_schedule_track_pane

0xe366,	// (0x0001d865) sp_fs_scroll_pane_cp06_ParamLimits

0xe366,	// (0x0001d865) sp_fs_scroll_pane_cp06

0x9eea,	// (0x000193e9) bgmain_sp_fs_calendar_pane_g1

0x7587,	// (0x00016a86) list_single_cale_mrui_pane_ParamLimits

0x7587,	// (0x00016a86) list_single_cale_mrui_pane

0xe378,	// (0x0001d877) list_single_cale_mrui_row_pane_ParamLimits

0xe378,	// (0x0001d877) list_single_cale_mrui_row_pane

0xe385,	// (0x0001d884) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe385,	// (0x0001d884) list_single_cale_mrui_row_pane_g1

0xe3ca,	// (0x0001d8c9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3ca,	// (0x0001d8c9) list_single_cale_mrui_row_pane_t1

0x75a7,	// (0x00016aa6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x75a7,	// (0x00016aa6) list_single_cale_mrui_row_pane_t2

0xe3dc,	// (0x0001d8db) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3dc,	// (0x0001d8db) list_single_cale_mrui_row_pane_t3

0xe40b,	// (0x0001d90a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe40b,	// (0x0001d90a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0001f1bc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0001f1bc) list_single_cale_mrui_row_pane_t

0x760d,	// (0x00016b0c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x760d,	// (0x00016b0c) list_single_cmail_header_editor_pane_bg_cp01

0x7639,	// (0x00016b38) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7639,	// (0x00016b38) list_single_cmail_header_editor_pane_bg_cp02

0x7657,	// (0x00016b56) main_radioblah_text_pane_t1_ParamLimits

0x7657,	// (0x00016b56) main_radioblah_text_pane_t1

0xe43c,	// (0x0001d93b) cam6_indi_pane_cp01

0xe444,	// (0x0001d943) cam6_mode_pane_cp01

0xe44c,	// (0x0001d94b) cam6_pano_pane

0xe455,	// (0x0001d954) cam6_zoom_pane_cp01

0xe45f,	// (0x0001d95e) cam6_pano_image_pane

0xe468,	// (0x0001d967) cam6_pano_pane_g1

0xdc4d,	// (0x0001d14c) cam6_pano_pane_g2

0xe471,	// (0x0001d970) cam6_pano_pane_g3

0xe47a,	// (0x0001d979) cam6_pano_pane_g4

0xc6b1,	// (0x0001bbb0) cam6_pano_pane_g5

0xe483,	// (0x0001d982) cam6_pano_pane_g6

0xe48b,	// (0x0001d98a) cam6_pano_pane_g7

0xe493,	// (0x0001d992) cam6_pano_pane_g8

0xe49c,	// (0x0001d99b) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0001f1c5) cam6_pano_pane_g

0x9454,	// (0x00018953) main_browser_tag_pane

0xe1bf,	// (0x0001d6be) grid_navstr_albumart_pane

0xe4a7,	// (0x0001d9a6) cell_navstr_albumart_pane_ParamLimits

0xe4a7,	// (0x0001d9a6) cell_navstr_albumart_pane

0xe4c3,	// (0x0001d9c2) cell_navstr_albumart_pane_g1

0xbb03,	// (0x0001b002) cell_navstr_albumart_pane_g2

0xbb13,	// (0x0001b012) cell_navstr_albumart_pane_g3

0xbb0b,	// (0x0001b00a) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0001f1d8) cell_navstr_albumart_pane_g

0x7672,	// (0x00016b71) bt_list_pane_ParamLimits

0x7672,	// (0x00016b71) bt_list_pane

0x7688,	// (0x00016b87) bt_list_pane_t1

0x7697,	// (0x00016b96) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0001f1e1) bt_list_pane_t

0x9454,	// (0x00018953) main_cale_prevew_pane

0x76a6,	// (0x00016ba5) popup_cale_preview_window_ParamLimits

0x76a6,	// (0x00016ba5) popup_cale_preview_window

0x94c9,	// (0x000189c8) bg_popup_preview_window_pane_cp05_ParamLimits

0x94c9,	// (0x000189c8) bg_popup_preview_window_pane_cp05

0xe4cb,	// (0x0001d9ca) list_cale_preview_pane_ParamLimits

0xe4cb,	// (0x0001d9ca) list_cale_preview_pane

0x76c3,	// (0x00016bc2) list_double_cale_preview_pane_ParamLimits

0x76c3,	// (0x00016bc2) list_double_cale_preview_pane

0x76d7,	// (0x00016bd6) list_single_cale_preview_pane_ParamLimits

0x76d7,	// (0x00016bd6) list_single_cale_preview_pane

0x76ef,	// (0x00016bee) list_single_cale_preview_pane_g1

0x76f7,	// (0x00016bf6) list_single_cale_preview_pane_t1_ParamLimits

0x76f7,	// (0x00016bf6) list_single_cale_preview_pane_t1

0x770c,	// (0x00016c0b) list_double_cale_preview_pane_g1

0x7714,	// (0x00016c13) list_double_cale_preview_pane_t1_ParamLimits

0x7714,	// (0x00016c13) list_double_cale_preview_pane_t1

0x7729,	// (0x00016c28) list_double_cale_preview_pane_t2_ParamLimits

0x7729,	// (0x00016c28) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0001f1e6) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0001f1e6) list_double_cale_preview_pane_t

0x9454,	// (0x00018953) main_ezdial_pane

0x94c9,	// (0x000189c8) main_sp_fs_email_pane_ParamLimits

0x6ea5,	// (0x000163a4) cmail_ddmenu_btn01_pane_ParamLimits

0x6ea5,	// (0x000163a4) cmail_ddmenu_btn01_pane

0x6eb8,	// (0x000163b7) cmail_ddmenu_btn02_pane_ParamLimits

0x6eb8,	// (0x000163b7) cmail_ddmenu_btn02_pane

0x6edb,	// (0x000163da) cmail_ddmenu_btn03_pane_ParamLimits

0x6edb,	// (0x000163da) cmail_ddmenu_btn03_pane

0x6f79,	// (0x00016478) main_sp_fs_ctrlbar_pane_ParamLimits

0x6f9d,	// (0x0001649c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x72f3,	// (0x000167f2) list_cmail_body_pane_ParamLimits

0xe10f,	// (0x0001d60e) bg_button_pane_cp12

0xe124,	// (0x0001d623) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe124,	// (0x0001d623) list_single_cmail_header_detail_pane_g3

0xe131,	// (0x0001d630) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe131,	// (0x0001d630) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0001f169) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0001f169) list_single_cmail_header_detail_pane_t

0xe227,	// (0x0001d726) phacti_term_pane_t2_ParamLimits

0xe227,	// (0x0001d726) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0001f173) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0001f173) phacti_term_pane_t

0xe4d7,	// (0x0001d9d6) aid_size_list_single_double

0x7741,	// (0x00016c40) popup_ezdial_listscroll_window

0x775d,	// (0x00016c5c) popup_number_entry_window_cp01

0x9eaa,	// (0x000193a9) bg_popup_call_pane_cp09

0xe4e3,	// (0x0001d9e2) ezdial_list_pane

0xe4eb,	// (0x0001d9ea) scroll_pane_cp23

0xa9ad,	// (0x00019eac) bg_button_pane_cp028_ParamLimits

0xa9ad,	// (0x00019eac) bg_button_pane_cp028

0x776b,	// (0x00016c6a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x776b,	// (0x00016c6a) cmail_ddmenu_btn01_pane_g1

0x777a,	// (0x00016c79) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x777a,	// (0x00016c79) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0001f1eb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0001f1eb) cmail_ddmenu_btn01_pane_g

0xe4f3,	// (0x0001d9f2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe4f3,	// (0x0001d9f2) cmail_ddmenu_btn01_pane_t1

0xa9ad,	// (0x00019eac) bg_button_pane_cp029_ParamLimits

0xa9ad,	// (0x00019eac) bg_button_pane_cp029

0x7790,	// (0x00016c8f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7790,	// (0x00016c8f) cmail_ddmenu_btn02_pane_g1

0x77ab,	// (0x00016caa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x77ab,	// (0x00016caa) cmail_ddmenu_btn02_pane_t1

0x94c9,	// (0x000189c8) bg_button_pane_cp031_ParamLimits

0x94c9,	// (0x000189c8) bg_button_pane_cp031

0x7790,	// (0x00016c8f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7790,	// (0x00016c8f) cmail_ddmenu_btn03_pane_g1

0x77ab,	// (0x00016caa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x77ab,	// (0x00016caa) cmail_ddmenu_btn03_pane_t1

0x4597,	// (0x00013a96) cell_dialer2_keypad_pane_t1_ParamLimits

0x45b1,	// (0x00013ab0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x45b1,	// (0x00013ab0) cell_dialer2_keypad_pane_t1_copy1

0x653e,	// (0x00015a3d) ncimui_group_button_pane

0x94c9,	// (0x000189c8) main_sp_fs_calendar_pane_ParamLimits

0x730a,	// (0x00016809) list_single_cmail_header_caption_pane_ParamLimits

0xe272,	// (0x0001d771) aid_recal_txt_sm_pane

0x9454,	// (0x00018953) mian_recal_day_pane

0xe2b4,	// (0x0001d7b3) popup_sp_fs_cale_preview_window_ParamLimits

0xe509,	// (0x0001da08) list_recal_day_pane

0xe54c,	// (0x0001da4b) list_single_recal_day_pane_ParamLimits

0xe54c,	// (0x0001da4b) list_single_recal_day_pane

0xe55e,	// (0x0001da5d) list_single_recal_day_pane_g1_ParamLimits

0xe55e,	// (0x0001da5d) list_single_recal_day_pane_g1

0xe56a,	// (0x0001da69) list_single_recal_day_pane_g2_ParamLimits

0xe56a,	// (0x0001da69) list_single_recal_day_pane_g2

0xe576,	// (0x0001da75) list_single_recal_day_pane_g3_ParamLimits

0xe576,	// (0x0001da75) list_single_recal_day_pane_g3

0x77d2,	// (0x00016cd1) list_single_recal_day_pane_g4_ParamLimits

0x77d2,	// (0x00016cd1) list_single_recal_day_pane_g4

0xe582,	// (0x0001da81) list_single_recal_day_pane_g5_ParamLimits

0xe582,	// (0x0001da81) list_single_recal_day_pane_g5

0xe58e,	// (0x0001da8d) list_single_recal_day_pane_g6_ParamLimits

0xe58e,	// (0x0001da8d) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0001f1fa) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0001f1fa) list_single_recal_day_pane_g

0xe5a2,	// (0x0001daa1) list_single_recal_day_pane_t1

0xe5b4,	// (0x0001dab3) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0001f205) list_single_recal_day_pane_t

0x77ea,	// (0x00016ce9) ncimui_query_button_pane_ParamLimits

0x77ea,	// (0x00016ce9) ncimui_query_button_pane

0x77fa,	// (0x00016cf9) ncimui_query_button_pane_t1_ParamLimits

0x77fa,	// (0x00016cf9) ncimui_query_button_pane_t1

0xe5c6,	// (0x0001dac5) ncimui_query_button_pane_t2_ParamLimits

0xe5c6,	// (0x0001dac5) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0001f20a) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0001f20a) ncimui_query_button_pane_t

0x780d,	// (0x00016d0c) query_button_pane_ParamLimits

0x780d,	// (0x00016d0c) query_button_pane

0x9454,	// (0x00018953) bg_button_pane_cp0028

0xe5d9,	// (0x0001dad8) query_button_pane_t1

0x2e7c,	// (0x0001237b) main_tport_pane_ParamLimits

0x7186,	// (0x00016685) bg_popup_window_pane_cp01_ParamLimits

0x7186,	// (0x00016685) bg_popup_window_pane_cp01

0x719f,	// (0x0001669e) heading_pane_cp08_ParamLimits

0x719f,	// (0x0001669e) heading_pane_cp08

0x71b5,	// (0x000166b4) heading_pane_cp07_ParamLimits

0x71b5,	// (0x000166b4) heading_pane_cp07

0x728c,	// (0x0001678b) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0001f156) cell_tport_appsw_pane_g

0x2378,	// (0x00011877) input_candi_list_open_g1

0xa316,	// (0x00019815) list_cale_time_pane_g6_ParamLimits

0xa316,	// (0x00019815) list_cale_time_pane_g6

0x352b,	// (0x00012a2a) aid_size_touch_calib_1_ParamLimits

0x352b,	// (0x00012a2a) aid_size_touch_calib_1

0x353d,	// (0x00012a3c) aid_size_touch_calib_2_ParamLimits

0x353d,	// (0x00012a3c) aid_size_touch_calib_2

0x3555,	// (0x00012a54) aid_size_touch_calib_3_ParamLimits

0x3555,	// (0x00012a54) aid_size_touch_calib_3

0x3573,	// (0x00012a72) aid_size_touch_calib_4_ParamLimits

0x3573,	// (0x00012a72) aid_size_touch_calib_4

0x358b,	// (0x00012a8a) main_touch_calib_button_group_pane_ParamLimits

0x358b,	// (0x00012a8a) main_touch_calib_button_group_pane

0x35a3,	// (0x00012aa2) main_touch_calib_pane_g1_ParamLimits

0x35b5,	// (0x00012ab4) main_touch_calib_pane_g2_ParamLimits

0x35c7,	// (0x00012ac6) main_touch_calib_pane_g3_ParamLimits

0x35d9,	// (0x00012ad8) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0001eb98) main_touch_calib_pane_g_ParamLimits

0x35eb,	// (0x00012aea) main_touch_calib_pane_t1_ParamLimits

0x3605,	// (0x00012b04) main_touch_calib_pane_t2_ParamLimits

0x361f,	// (0x00012b1e) main_touch_calib_pane_t3_ParamLimits

0x3633,	// (0x00012b32) main_touch_calib_pane_t4_ParamLimits

0x3649,	// (0x00012b48) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0001eba1) main_touch_calib_pane_t_ParamLimits

0xc464,	// (0x0001b963) list_single_fp_cale_pane_g3_ParamLimits

0xc464,	// (0x0001b963) list_single_fp_cale_pane_g3

0x94c9,	// (0x000189c8) bg_button_pane_cp012_ParamLimits

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp03_ParamLimits

0x56c2,	// (0x00014bc1) cell_vitu2_function_top_pane_g1_ParamLimits

0x94c9,	// (0x000189c8) bg_vkb2_func_pane_cp04_ParamLimits

0x64c9,	// (0x000159c8) main_ncimui_button_group_pane_ParamLimits

0x64c9,	// (0x000159c8) main_ncimui_button_group_pane

0x6529,	// (0x00015a28) main_ncimui_pane_t3_ParamLimits

0x6529,	// (0x00015a28) main_ncimui_pane_t3

0xe1d5,	// (0x0001d6d4) phacti_button_group_pane

0xe4d7,	// (0x0001d9d6) aid_size_list_single_double_ParamLimits

0x7741,	// (0x00016c40) popup_ezdial_listscroll_window_ParamLimits

0x775d,	// (0x00016c5c) popup_number_entry_window_cp01_ParamLimits

0x7820,	// (0x00016d1f) phacti_button_pane_ParamLimits

0x7820,	// (0x00016d1f) phacti_button_pane

0x9454,	// (0x00018953) bg_button_pane_cp14

0xe5e7,	// (0x0001dae6) phacti_button_pane_t1

0x7831,	// (0x00016d30) main_touch_calib_button_pane_ParamLimits

0x7831,	// (0x00016d30) main_touch_calib_button_pane

0x9c89,	// (0x00019188) bg_button_pane_cp18_ParamLimits

0x9c89,	// (0x00019188) bg_button_pane_cp18

0xe5f5,	// (0x0001daf4) main_touch_calib_button_pane_t1_ParamLimits

0xe5f5,	// (0x0001daf4) main_touch_calib_button_pane_t1

0xe60b,	// (0x0001db0a) main_touch_calib_button_pane_t2_ParamLimits

0xe60b,	// (0x0001db0a) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0001f20f) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0001f20f) main_touch_calib_button_pane_t

0x9454,	// (0x00018953) cell_ncimui_button_pane

0x9454,	// (0x00018953) bg_button_pane_cp032

0xe629,	// (0x0001db28) cell_ncimui_button_pane_t1

0xcbef,	// (0x0001c0ee) image3_infobar_pane_ParamLimits

0xcbef,	// (0x0001c0ee) image3_infobar_pane

0x6940,	// (0x00015e3f) fs_bigclock_status_pane_ParamLimits

0x6940,	// (0x00015e3f) fs_bigclock_status_pane

0x694d,	// (0x00015e4c) main_fs_bigclock_clock_pane_ParamLimits

0x694d,	// (0x00015e4c) main_fs_bigclock_clock_pane

0x697f,	// (0x00015e7e) main_fs_bigclock_indi_pane_ParamLimits

0x697f,	// (0x00015e7e) main_fs_bigclock_indi_pane

0x69bf,	// (0x00015ebe) main_fs_bigclock_swipe_pane_ParamLimits

0x69bf,	// (0x00015ebe) main_fs_bigclock_swipe_pane

0x9454,	// (0x00018953) main_fs_clock_dumped_data

0x6a0b,	// (0x00015f0a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6a0b,	// (0x00015f0a) list_single_fs_bigclock_indicator_pane_g1

0x6a24,	// (0x00015f23) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x6a24,	// (0x00015f23) list_single_fs_bigclock_indicator_pane_g2

0x6a3e,	// (0x00015f3d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x6a3e,	// (0x00015f3d) list_single_fs_bigclock_indicator_pane_g3

0x6a58,	// (0x00015f57) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x6a58,	// (0x00015f57) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0001f0b0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0001f0b0) list_single_fs_bigclock_indicator_pane_g

0x6a87,	// (0x00015f86) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x6a87,	// (0x00015f86) list_single_fs_bigclock_indicator_pane_t1

0x6aaf,	// (0x00015fae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6aaf,	// (0x00015fae) list_single_fs_bigclock_indicator_pane_t2

0x6ad7,	// (0x00015fd6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x6ad7,	// (0x00015fd6) list_single_fs_bigclock_indicator_pane_t3

0x6aff,	// (0x00015ffe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6aff,	// (0x00015ffe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0001f0bb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0001f0bb) list_single_fs_bigclock_indicator_pane_t

0xe637,	// (0x0001db36) image3_infobar_fav_pane_ParamLimits

0xe637,	// (0x0001db36) image3_infobar_fav_pane

0xe647,	// (0x0001db46) image3_infobar_loc_pane_ParamLimits

0xe647,	// (0x0001db46) image3_infobar_loc_pane

0xe65d,	// (0x0001db5c) image3_infobar_time_pane_ParamLimits

0xe65d,	// (0x0001db5c) image3_infobar_time_pane

0x9eea,	// (0x000193e9) image3_infobar_time_pane_g1

0xe66d,	// (0x0001db6c) image3_infobar_time_pane_t1

0x9eea,	// (0x000193e9) image3_infobar_loc_pane_g1

0xe67b,	// (0x0001db7a) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0001f214) image3_infobar_loc_pane_g

0xe683,	// (0x0001db82) image3_infobar_loc_pane_t1

0x9eea,	// (0x000193e9) image3_infobar_fav_pane_g1

0xe691,	// (0x0001db90) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0001f219) image3_infobar_fav_pane_g

0xe699,	// (0x0001db98) fs_bigclock_status_battery_pane

0xe6a2,	// (0x0001dba1) fs_bigclock_status_signal_pane

0xe6ab,	// (0x0001dbaa) fs_bigclock_status_title_pane

0xe6b4,	// (0x0001dbb3) fs_bigclock_status_signal_pane_g1

0xe6bd,	// (0x0001dbbc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0001f21e) fs_bigclock_status_signal_pane_g

0xe6c5,	// (0x0001dbc4) fs_bigclock_status_battery_pane_g1

0xe6ce,	// (0x0001dbcd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0001f223) fs_bigclock_status_battery_pane_g

0xe6d6,	// (0x0001dbd5) fs_bigclock_status_title_pane_t1

0x7846,	// (0x00016d45) main_fs_bigclock_clock_pane_g1

0x7846,	// (0x00016d45) main_fs_bigclock_clock_pane_g2

0x7859,	// (0x00016d58) main_fs_bigclock_clock_pane_g3

0x7859,	// (0x00016d58) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0001f228) main_fs_bigclock_clock_pane_g

0x7870,	// (0x00016d6f) main_fs_bigclock_clock_pane_t1

0x7886,	// (0x00016d85) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0001f231) main_fs_bigclock_clock_pane_t

0xe6e4,	// (0x0001dbe3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe6e4,	// (0x0001dbe3) list_single_fs_bigclock_indicator_pane

0xe6f5,	// (0x0001dbf4) list_single_fs_bigclock_pane_ParamLimits

0xe6f5,	// (0x0001dbf4) list_single_fs_bigclock_pane

0xe71b,	// (0x0001dc1a) main_fs_bigclock_indicator_pane_t1

0xe72a,	// (0x0001dc29) list_single_fs_bigclock_pane_g1

0xe732,	// (0x0001dc31) list_single_fs_bigclock_pane_t1

0x9eea,	// (0x000193e9) main_fs_bigclock_swipe_pane_g1

0xe775,	// (0x0001dc74) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0001f242) main_fs_bigclock_swipe_pane_g

0xe77d,	// (0x0001dc7c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe77d,	// (0x0001dc7c) main_fs_bigclock_swipe_pane_t1

0x1d35,	// (0x00011234) call_type_pane_ParamLimits

0x9454,	// (0x00018953) main_btmg_pane

0xe3b1,	// (0x0001d8b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3b1,	// (0x0001d8b0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0001f1b5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0001f1b5) list_single_cale_mrui_row_pane_g

0xe532,	// (0x0001da31) list_recal_vselct_arw_lo_pane

0xe53a,	// (0x0001da39) list_recal_vselct_arw_up_pane

0xe542,	// (0x0001da41) list_recal_vselct_pane

0x78e8,	// (0x00016de7) btmg_button_pane

0x78f2,	// (0x00016df1) main_btmg_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp044

0xe79a,	// (0x0001dc99) btmg_button_pane_t1

0xbc55,	// (0x0001b154) aid_listscroll_gen

0x94c9,	// (0x000189c8) main_cntbar_detail_pane

0xe0e2,	// (0x0001d5e1) list_cmail_folder_pane

0xd5ee,	// (0x0001caed) sp_fs_scroll_pane_cp03_ParamLimits

0xe7a8,	// (0x0001dca7) list_single_fs_dyc_pane_cp01_ParamLimits

0xe7a8,	// (0x0001dca7) list_single_fs_dyc_pane_cp01

0xe7c2,	// (0x0001dcc1) aid_size_cmail_indent

0xe7cb,	// (0x0001dcca) list_single_dyc_row_pane_cp01

0x7930,	// (0x00016e2f) cntbar_detail_list_pane_ParamLimits

0x7930,	// (0x00016e2f) cntbar_detail_list_pane

0x7982,	// (0x00016e81) main_cntbar_detail_cont_pane_ParamLimits

0x7982,	// (0x00016e81) main_cntbar_detail_cont_pane

0xd5ee,	// (0x0001caed) scroll_pane_cp032_ParamLimits

0xd5ee,	// (0x0001caed) scroll_pane_cp032

0x7996,	// (0x00016e95) cntbar_detail_list_event_pane_ParamLimits

0x7996,	// (0x00016e95) cntbar_detail_list_event_pane

0x7942,	// (0x00016e41) cntbar_detail_list_shct_pane

0xa15c,	// (0x0001965b) aid_list_gen

0xe7d4,	// (0x0001dcd3) aid_scroll

0xe7dd,	// (0x0001dcdc) aid_size_touch_scroll_bar

0x6c98,	// (0x00016197) aid_list_double

0x79a6,	// (0x00016ea5) aid_list_single

0x79a6,	// (0x00016ea5) aid_list_single_lg

0x79af,	// (0x00016eae) aid_list_z_g_a_sm

0x79b7,	// (0x00016eb6) aid_list_z_g_d

0x79bf,	// (0x00016ebe) aid_txt_z_prm

0x79cd,	// (0x00016ecc) aid_txt_z_prm_cp01

0x79db,	// (0x00016eda) aid_txt_z_sec

0x79e9,	// (0x00016ee8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x79e9,	// (0x00016ee8) main_cntbar_detail_cont_pane_g1

0x79fd,	// (0x00016efc) main_cntbar_detail_cont_pane_g2_ParamLimits

0x79fd,	// (0x00016efc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0001f247) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0001f247) main_cntbar_detail_cont_pane_g

0xe7e6,	// (0x0001dce5) main_cntbar_detail_cont_pane_t1

0xe7f4,	// (0x0001dcf3) main_cntbar_detail_cont_pane_t2

0xe802,	// (0x0001dd01) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0001f24c) main_cntbar_detail_cont_pane_t

0x7a0d,	// (0x00016f0c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7a0d,	// (0x00016f0c) cell_cntbar_detail_list_shct_pane

0xe810,	// (0x0001dd0f) cntbar_detail_list_shct_pane_g1

0xe819,	// (0x0001dd18) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0001f253) cntbar_detail_list_shct_pane_g

0x7a1f,	// (0x00016f1e) cntbar_detail_list_event_pane_g1_ParamLimits

0x7a1f,	// (0x00016f1e) cntbar_detail_list_event_pane_g1

0x7a2b,	// (0x00016f2a) cntbar_detail_list_event_pane_g2_ParamLimits

0x7a2b,	// (0x00016f2a) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0001f258) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0001f258) cntbar_detail_list_event_pane_g

0x7a99,	// (0x00016f98) cntbar_detail_list_event_pane_t1_ParamLimits

0x7a99,	// (0x00016f98) cntbar_detail_list_event_pane_t1

0x7aae,	// (0x00016fad) cntbar_detail_list_event_pane_t2_ParamLimits

0x7aae,	// (0x00016fad) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0001f265) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0001f265) cntbar_detail_list_event_pane_t

0x9eea,	// (0x000193e9) cell_cntbar_detail_list_shct_pane_g1

0x20cf,	// (0x000115ce) navi_pane_mv_g3

0x94c9,	// (0x000189c8) main_cntbar_detail_pane_ParamLimits

0x9454,	// (0x00018953) main_notif_wgt_pane

0xc94c,	// (0x0001be4b) aid_tch_main_mp4_pane_g4

0xcb7a,	// (0x0001c079) popup_slider_window_cp02

0xe528,	// (0x0001da27) list_recal_day_event_pane

0x78fc,	// (0x00016dfb) cntbar_detail_btn_pane_ParamLimits

0x78fc,	// (0x00016dfb) cntbar_detail_btn_pane

0x7915,	// (0x00016e14) cntbar_detail_btn_pane_cp01_ParamLimits

0x7915,	// (0x00016e14) cntbar_detail_btn_pane_cp01

0x7942,	// (0x00016e41) cntbar_detail_list_shct_pane_ParamLimits

0x7952,	// (0x00016e51) cntbar_detail_pane_g1_ParamLimits

0x7952,	// (0x00016e51) cntbar_detail_pane_g1

0x7966,	// (0x00016e65) cntbar_detail_pane_t1_ParamLimits

0x7966,	// (0x00016e65) cntbar_detail_pane_t1

0x7a37,	// (0x00016f36) cntbar_detail_list_event_pane_g3_ParamLimits

0x7a37,	// (0x00016f36) cntbar_detail_list_event_pane_g3

0x7a4f,	// (0x00016f4e) cntbar_detail_list_event_pane_g4_ParamLimits

0x7a4f,	// (0x00016f4e) cntbar_detail_list_event_pane_g4

0x7a67,	// (0x00016f66) cntbar_detail_list_event_pane_g5_ParamLimits

0x7a67,	// (0x00016f66) cntbar_detail_list_event_pane_g5

0x7a7f,	// (0x00016f7e) cntbar_detail_list_event_pane_g6_ParamLimits

0x7a7f,	// (0x00016f7e) cntbar_detail_list_event_pane_g6

0x7ac3,	// (0x00016fc2) cntbar_detail_list_event_pane_t3_ParamLimits

0x7ac3,	// (0x00016fc2) cntbar_detail_list_event_pane_t3

0x7ad5,	// (0x00016fd4) popup_notif_wgt_window_ParamLimits

0x7ad5,	// (0x00016fd4) popup_notif_wgt_window

0x7aee,	// (0x00016fed) popup_submenu_window_cp01_ParamLimits

0x7aee,	// (0x00016fed) popup_submenu_window_cp01

0x9eaa,	// (0x000193a9) bg_popup_window_pane_cp10

0xe822,	// (0x0001dd21) listscroll_notif_wgt_pane

0xe834,	// (0x0001dd33) list_notif_wgt_window

0xe83d,	// (0x0001dd3c) scroll_pane_cp033

0x7b02,	// (0x00017001) list_notif_wgt_row_pane_ParamLimits

0x7b02,	// (0x00017001) list_notif_wgt_row_pane

0xe846,	// (0x0001dd45) aid_size_list_notif_wgt_del

0xe853,	// (0x0001dd52) list_notif_wgt_row_pane_g1

0xe85f,	// (0x0001dd5e) list_notif_wgt_row_pane_g2

0xe86e,	// (0x0001dd6d) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0001f26c) list_notif_wgt_row_pane_g

0xe87b,	// (0x0001dd7a) list_notif_wgt_row_pane_t1

0xe891,	// (0x0001dd90) list_notif_wgt_row_pane_t2

0xe8a3,	// (0x0001dda2) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0001f273) list_notif_wgt_row_pane_t

0xd0c9,	// (0x0001c5c8) list_recal_day_event_pane_g1

0xe8b5,	// (0x0001ddb4) list_recal_day_event_pane_t1

0x9454,	// (0x00018953) bg_button_pane_cp045

0x7b12,	// (0x00017011) cntbar_detail_btn_pane_t1

0xa9ad,	// (0x00019eac) main_callh_pane_ParamLimits

0xa9ad,	// (0x00019eac) main_callh_pane

0x9454,	// (0x00018953) main_coverflow0_pane

0x9454,	// (0x00018953) main_wgtman_pane

0x69e0,	// (0x00015edf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x69e0,	// (0x00015edf) main_fs_bigclock_unlock_btn_pane

0x7284,	// (0x00016783) bg_button_pane_cp16

0x7294,	// (0x00016793) cell_tport_appsw_pane_g3

0x7b20,	// (0x0001701f) cf0_flow_pane_ParamLimits

0x7b20,	// (0x0001701f) cf0_flow_pane

0xe8c4,	// (0x0001ddc3) listscroll_cf0_pane

0xe8cf,	// (0x0001ddce) main_cf0_pane_g1

0x7b35,	// (0x00017034) main_cf0_pane_t1_ParamLimits

0x7b35,	// (0x00017034) main_cf0_pane_t1

0x7b4c,	// (0x0001704b) main_cf0_pane_t2_ParamLimits

0x7b4c,	// (0x0001704b) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0001f27f) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0001f27f) main_cf0_pane_t

0xe8e1,	// (0x0001dde0) scroll_pane_cp11

0x7b63,	// (0x00017062) cf0_flow_pane_g1

0x7b6f,	// (0x0001706e) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0001f284) cf0_flow_pane_g

0x7b7b,	// (0x0001707a) cf0_flow_pane_t1

0x9454,	// (0x00018953) main_call6_pane

0x9454,	// (0x00018953) main_calllock_pane

0x7b8d,	// (0x0001708c) call6_btn_grp_pane_ParamLimits

0x7b8d,	// (0x0001708c) call6_btn_grp_pane

0x7ba7,	// (0x000170a6) call6_pane_g1_ParamLimits

0x7ba7,	// (0x000170a6) call6_pane_g1

0x7bc0,	// (0x000170bf) popup_call6_1st_window_ParamLimits

0x7bc0,	// (0x000170bf) popup_call6_1st_window

0x7bd4,	// (0x000170d3) popup_call6_2nd_window_ParamLimits

0x7bd4,	// (0x000170d3) popup_call6_2nd_window

0x7be8,	// (0x000170e7) cell_call6_btn_pane_ParamLimits

0x7be8,	// (0x000170e7) cell_call6_btn_pane

0x9eaa,	// (0x000193a9) bg_popup_call2_in_pane_cp03

0xe8ec,	// (0x0001ddeb) popup_call6_1st_window_g1

0xe8f4,	// (0x0001ddf3) popup_call6_1st_window_g2

0xe8fc,	// (0x0001ddfb) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0001f289) popup_call6_1st_window_g

0xe904,	// (0x0001de03) popup_call6_1st_window_t1

0xe913,	// (0x0001de12) popup_call6_1st_window_t2

0xe923,	// (0x0001de22) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0001f290) popup_call6_1st_window_t

0x9eaa,	// (0x000193a9) bg_popup_call2_in_pane_cp04

0xe933,	// (0x0001de32) popup_call6_2nd_window_g1

0xe93b,	// (0x0001de3a) popup_call6_2nd_window_g2

0xe943,	// (0x0001de42) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0001f297) popup_call6_2nd_window_g

0xe94b,	// (0x0001de4a) popup_call6_2nd_window_t1

0x9454,	// (0x00018953) bg_button_pane_cp15

0xe95a,	// (0x0001de59) cell_call6_btn_pane_g1

0xe963,	// (0x0001de62) cell_call6_btn_pane_t1

0x7bfc,	// (0x000170fb) listscroll_wgtman_pane_ParamLimits

0x7bfc,	// (0x000170fb) listscroll_wgtman_pane

0x7c1d,	// (0x0001711c) wgtman_btn_pane_ParamLimits

0x7c1d,	// (0x0001711c) wgtman_btn_pane

0xa774,	// (0x00019c73) aid_scroll_copy1

0xe972,	// (0x0001de71) list_wgtman_pane

0x7c60,	// (0x0001715f) wgtman_btn_pane_g1_ParamLimits

0x7c60,	// (0x0001715f) wgtman_btn_pane_g1

0x7c8c,	// (0x0001718b) wgtman_btn_pane_t1_ParamLimits

0x7c8c,	// (0x0001718b) wgtman_btn_pane_t1

0xe97c,	// (0x0001de7b) wgtman_btn_pane_t2_ParamLimits

0xe97c,	// (0x0001de7b) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0001f29e) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0001f29e) wgtman_btn_pane_t

0x7cc9,	// (0x000171c8) listrow_wgtman_pane_ParamLimits

0x7cc9,	// (0x000171c8) listrow_wgtman_pane

0x7cdd,	// (0x000171dc) listrow_wgtman_pane_g1

0x7cea,	// (0x000171e9) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0001f2a3) listrow_wgtman_pane_g

0x7d08,	// (0x00017207) listrow_wgtman_pane_t1

0x7d20,	// (0x0001721f) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0001f2a8) listrow_wgtman_pane_t

0x7d46,	// (0x00017245) wait_bar_pane_cp09

0xe993,	// (0x0001de92) main_calllock_btn_pane

0xe99d,	// (0x0001de9c) main_calllock_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp17

0xe95a,	// (0x0001de59) main_calllock_btn_pane_g1

0xe9a9,	// (0x0001dea8) main_calllock_btn_pane_t1

0x9454,	// (0x00018953) main_dialer3_pane

0x9454,	// (0x00018953) main_fmrd2_pane

0x9eea,	// (0x000193e9) main_fs_bigclock_unlock_btn_pane_g1

0x7d60,	// (0x0001725f) main_fs_bigclock_unlock_btn_pane_t1

0x7d6e,	// (0x0001726d) area_fmrd2_info_pane_ParamLimits

0x7d6e,	// (0x0001726d) area_fmrd2_info_pane

0x7d7f,	// (0x0001727e) area_fmrd2_visual_pane_ParamLimits

0x7d7f,	// (0x0001727e) area_fmrd2_visual_pane

0x7d8d,	// (0x0001728c) fmrd2_indi_pane_ParamLimits

0x7d8d,	// (0x0001728c) fmrd2_indi_pane

0x7d9a,	// (0x00017299) area_fmrd2_visual_pane_g1

0x7da2,	// (0x000172a1) area_fmrd2_visual_pane_t1

0x7db2,	// (0x000172b1) area_fmrd2_visual_pane_t2

0x7dc2,	// (0x000172c1) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0001f2b2) area_fmrd2_visual_pane_t

0x7dd2,	// (0x000172d1) area_fmrd2_info_pane_g1

0x7dda,	// (0x000172d9) area_fmrd2_info_pane_t1

0x7dea,	// (0x000172e9) area_fmrd2_info_pane_t2

0x7dfa,	// (0x000172f9) area_fmrd2_info_pane_t3

0x7e0a,	// (0x00017309) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0001f2b9) area_fmrd2_info_pane_t

0x7e1a,	// (0x00017319) fmrd2_indi_pane_t1

0x7e2a,	// (0x00017329) fmrd2_indi_pane_t2

0x7e3a,	// (0x00017339) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0001f2c2) fmrd2_indi_pane_t

0x6a69,	// (0x00015f68) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x6a69,	// (0x00015f68) list_single_fs_bigclock_indicator_pane_g5

0x6b1e,	// (0x0001601d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6b1e,	// (0x0001601d) list_single_fs_bigclock_indicator_pane_t5

0x747e,	// (0x0001697d) aid_cell_bcale_month_pane_ParamLimits

0x747e,	// (0x0001697d) aid_cell_bcale_month_pane

0x749c,	// (0x0001699b) bcale_month_pane_ParamLimits

0x749c,	// (0x0001699b) bcale_month_pane

0x74c0,	// (0x000169bf) bcale_preview_pane_ParamLimits

0x74c0,	// (0x000169bf) bcale_preview_pane

0xe732,	// (0x0001dc31) list_single_fs_bigclock_pane_t1_ParamLimits

0xe751,	// (0x0001dc50) list_single_fs_bigclock_pane_t2_ParamLimits

0xe751,	// (0x0001dc50) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0001f23d) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0001f23d) list_single_fs_bigclock_pane_t

0x7d58,	// (0x00017257) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0001f2ad) main_fs_bigclock_unlock_btn_pane_g

0x7e4a,	// (0x00017349) aid_dia3_key_size_ParamLimits

0x7e4a,	// (0x00017349) aid_dia3_key_size

0x7e5e,	// (0x0001735d) aid_dia3_listrow_size_ParamLimits

0x7e5e,	// (0x0001735d) aid_dia3_listrow_size

0x7e78,	// (0x00017377) dia3_keypad_fun_pane_ParamLimits

0x7e78,	// (0x00017377) dia3_keypad_fun_pane

0x7e92,	// (0x00017391) dia3_keypad_num_pane_ParamLimits

0x7e92,	// (0x00017391) dia3_keypad_num_pane

0x7eac,	// (0x000173ab) dia3_listscroll_pane_ParamLimits

0x7eac,	// (0x000173ab) dia3_listscroll_pane

0x7ec2,	// (0x000173c1) dia3_numentry_pane_ParamLimits

0x7ec2,	// (0x000173c1) dia3_numentry_pane

0xe9b8,	// (0x0001deb7) dia3_list_pane

0x7edc,	// (0x000173db) scroll_pane_cp12

0x9454,	// (0x00018953) bg_dia3_numentry_pane

0x7ee7,	// (0x000173e6) dia3_numentry_pane_t1

0x7ef6,	// (0x000173f5) cell_dia3_key_num_pane

0x7efe,	// (0x000173fd) cell_dia3_key0_fun_pane_ParamLimits

0x7efe,	// (0x000173fd) cell_dia3_key0_fun_pane

0x7f12,	// (0x00017411) cell_dia3_key1_fun_pane_ParamLimits

0x7f12,	// (0x00017411) cell_dia3_key1_fun_pane

0x7f27,	// (0x00017426) dia3_listrow_pane

0xdb09,	// (0x0001d008) bg_dia3_numentry_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp21

0x7f39,	// (0x00017438) cell_dia3_key_num_pane_t1

0x7f47,	// (0x00017446) cell_dia3_key_num_pane_t2

0x7f47,	// (0x00017446) cell_dia3_key_num_pane_t3

0x7f47,	// (0x00017446) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0001f2c9) cell_dia3_key_num_pane_t

0x9454,	// (0x00018953) bg_button_pane_cp19

0x7f56,	// (0x00017455) cell_dia3_key0_fun_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp20

0x7f5e,	// (0x0001745d) cell_dia3_key1_fun_pane_g1

0x7f66,	// (0x00017465) area_left_week_number_pane

0x7f74,	// (0x00017473) area_top_day_name_pane

0x7f87,	// (0x00017486) frame_month_view_pane

0xe9c3,	// (0x0001dec2) grid_month_view_pane

0x7f9c,	// (0x0001749b) cell_top_day_name_pane_ParamLimits

0x7f9c,	// (0x0001749b) cell_top_day_name_pane

0x7fcb,	// (0x000174ca) cell_area_left_week_number_pane_ParamLimits

0x7fcb,	// (0x000174ca) cell_area_left_week_number_pane

0x7fe1,	// (0x000174e0) cell_month_view_pane_ParamLimits

0x7fe1,	// (0x000174e0) cell_month_view_pane

0xe9d1,	// (0x0001ded0) frm_month_g1

0x8012,	// (0x00017511) frm_month_g2

0x8025,	// (0x00017524) frm_month_g3

0x8038,	// (0x00017537) frm_month_g4

0x804b,	// (0x0001754a) frm_month_g5

0x805e,	// (0x0001755d) frm_month_g6

0x8073,	// (0x00017572) frm_month_g7

0xe9de,	// (0x0001dedd) frm_month_g8

0x8088,	// (0x00017587) frm_month_g9

0x8098,	// (0x00017597) frm_month_g10

0x80a8,	// (0x000175a7) frm_month_g11

0x80b8,	// (0x000175b7) frm_month_g12

0x80ca,	// (0x000175c9) frm_month_g13

0x80de,	// (0x000175dd) frm_month_g14

0x80f2,	// (0x000175f1) frm_month_g15

0x8106,	// (0x00017605) frm_month_g16

0x000f,

0xfdd3,	// (0x0001f2d2) frm_month_g

0xe9eb,	// (0x0001deea) cell_top_day_name_pane_t1

0x811a,	// (0x00017619) cell_area_left_week_number_pane_g1

0x8126,	// (0x00017625) cell_area_left_week_number_pane_t1

0x9bf5,	// (0x000190f4) cell_month_view_pane_g1

0x8139,	// (0x00017638) cell_month_view_pane_t1

0x9454,	// (0x00018953) main_fps_pane

0xdf21,	// (0x0001d420) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf21,	// (0x0001d420) cmail_ddmenu_btn02_pane_cp1

0xdf3d,	// (0x0001d43c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf3d,	// (0x0001d43c) cmail_ddmenu_btn02_pane_cp2

0x779f,	// (0x00016c9e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x779f,	// (0x00016c9e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0001f1f0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0001f1f0) cmail_ddmenu_btn02_pane_g

0x77c0,	// (0x00016cbf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x77c0,	// (0x00016cbf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0001f1f5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0001f1f5) cmail_ddmenu_btn02_pane_t

0x814c,	// (0x0001764b) fps_text_pane_ParamLimits

0x814c,	// (0x0001764b) fps_text_pane

0x8163,	// (0x00017662) main_fps_pane_g1_ParamLimits

0x8163,	// (0x00017662) main_fps_pane_g1

0x817b,	// (0x0001767a) wait_bar_pane_cp010_ParamLimits

0x817b,	// (0x0001767a) wait_bar_pane_cp010

0x818e,	// (0x0001768d) fps_text_pane_t1_ParamLimits

0x818e,	// (0x0001768d) fps_text_pane_t1

0xd5fa,	// (0x0001caf9) cam4_image_uncrop_pane_g1

0xd603,	// (0x0001cb02) cam4_image_uncrop_pane_g2

0x4adb,	// (0x00013fda) cam4_image_uncrop_pane_g3

0x4ae4,	// (0x00013fe3) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0001ed34) cam4_image_uncrop_pane_g

0x7f27,	// (0x00017426) dia3_listrow_pane_ParamLimits

0x9454,	// (0x00018953) main_phob2_pane

0x722e,	// (0x0001672d) cell_tport_appsw_pane_cp02_ParamLimits

0x722e,	// (0x0001672d) cell_tport_appsw_pane_cp02

0x7242,	// (0x00016741) cell_tport_appsw_pane_cp03_ParamLimits

0x7242,	// (0x00016741) cell_tport_appsw_pane_cp03

0x9454,	// (0x00018953) phob2_contact_card_pane

0x9454,	// (0x00018953) phob2_listscroll_pane

0xe9fe,	// (0x0001defd) phob2_list_pane

0xea06,	// (0x0001df05) scroll_pane_cp034

0x81a6,	// (0x000176a5) phob2_cc_data_pane_ParamLimits

0x81a6,	// (0x000176a5) phob2_cc_data_pane

0x81bf,	// (0x000176be) phob2_cc_listscroll_pane_ParamLimits

0x81bf,	// (0x000176be) phob2_cc_listscroll_pane

0x81e0,	// (0x000176df) list_double_large_graphic_phob2_pane_ParamLimits

0x81e0,	// (0x000176df) list_double_large_graphic_phob2_pane

0x81f4,	// (0x000176f3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x81f4,	// (0x000176f3) list_double_large_graphic_phob2_pane_g1

0x8201,	// (0x00017700) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8201,	// (0x00017700) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0001f2f3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0001f2f3) list_double_large_graphic_phob2_pane_g

0x8227,	// (0x00017726) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8227,	// (0x00017726) list_double_large_graphic_phob2_pane_t1

0x823c,	// (0x0001773b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x823c,	// (0x0001773b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0001f2fc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0001f2fc) list_double_large_graphic_phob2_pane_t

0x9454,	// (0x00018953) list_highlight_pane_cp024

0x8251,	// (0x00017750) phob2_cc_button_pane

0x825d,	// (0x0001775c) phob2_cc_data_pane_g1_ParamLimits

0x825d,	// (0x0001775c) phob2_cc_data_pane_g1

0x8273,	// (0x00017772) phob2_cc_data_pane_g2_ParamLimits

0x8273,	// (0x00017772) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0001f301) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0001f301) phob2_cc_data_pane_g

0x828b,	// (0x0001778a) phob2_cc_data_pane_t1_ParamLimits

0x828b,	// (0x0001778a) phob2_cc_data_pane_t1

0x82bb,	// (0x000177ba) phob2_cc_data_pane_t2_ParamLimits

0x82bb,	// (0x000177ba) phob2_cc_data_pane_t2

0x82eb,	// (0x000177ea) phob2_cc_data_pane_t3_ParamLimits

0x82eb,	// (0x000177ea) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0001f306) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0001f306) phob2_cc_data_pane_t

0xea0e,	// (0x0001df0d) phob2_cc_list_pane_ParamLimits

0xea0e,	// (0x0001df0d) phob2_cc_list_pane

0xd60e,	// (0x0001cb0d) scroll_pane_cp035_ParamLimits

0xd60e,	// (0x0001cb0d) scroll_pane_cp035

0x94c9,	// (0x000189c8) bg_button_pane_cp033

0x831b,	// (0x0001781a) phob2_cc_button_pane_g1

0x8327,	// (0x00017826) phob2_cc_button_pane_t1

0x833c,	// (0x0001783b) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0001f30d) phob2_cc_button_pane_t

0x834e,	// (0x0001784d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x834e,	// (0x0001784d) list_double_large_graphic_phob2_cc_pane

0x8385,	// (0x00017884) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8385,	// (0x00017884) list_double_large_graphic_phob2_cc_pane_g1

0x8391,	// (0x00017890) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8391,	// (0x00017890) list_double_large_graphic_phob2_cc_pane_g2

0x839d,	// (0x0001789c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x839d,	// (0x0001789c) list_double_large_graphic_phob2_cc_pane_g3

0x83a9,	// (0x000178a8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x83a9,	// (0x000178a8) list_double_large_graphic_phob2_cc_pane_g4

0x83b5,	// (0x000178b4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x83b5,	// (0x000178b4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0001f312) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0001f312) list_double_large_graphic_phob2_cc_pane_g

0x83c1,	// (0x000178c0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x83c1,	// (0x000178c0) list_double_large_graphic_phob2_cc_pane_t1

0x83ea,	// (0x000178e9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x83ea,	// (0x000178e9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0001f31d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0001f31d) list_double_large_graphic_phob2_cc_pane_t

0xea1a,	// (0x0001df19) list_highlight_pane_cp025_ParamLimits

0xea1a,	// (0x0001df19) list_highlight_pane_cp025

0x94c9,	// (0x000189c8) bg_button_pane_cp033_ParamLimits

0x831b,	// (0x0001781a) phob2_cc_button_pane_g1_ParamLimits

0x8327,	// (0x00017826) phob2_cc_button_pane_t1_ParamLimits

0x833c,	// (0x0001783b) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0001f30d) phob2_cc_button_pane_t_ParamLimits

0xffa7,	// (0x0000f4a6) popup_wgtman_window

0xcf4b,	// (0x0001c44a) scroll_pane_cp038

0x7c42,	// (0x00017141) wgtman_btn_pane_cp_01_ParamLimits

0x7c42,	// (0x00017141) wgtman_btn_pane_cp_01

0xea28,	// (0x0001df27) wgtman_content_pane

0xea31,	// (0x0001df30) wgtman_heading_pane

0x9454,	// (0x00018953) bg_heading_pane_cp02

0xea3a,	// (0x0001df39) wgtman_heading_pane_g1

0xea42,	// (0x0001df41) wgtman_heading_pane_t1

0xea50,	// (0x0001df4f) scroll_pane_cp036

0xea58,	// (0x0001df57) wgtman_list_pane

0xde1d,	// (0x0001d31c) wgtman_list_pane_t1_ParamLimits

0xde1d,	// (0x0001d31c) wgtman_list_pane_t1

0xcca7,	// (0x0001c1a6) cam4_grid_pane

0x5862,	// (0x00014d61) bg_button_pane_cp015_ParamLimits

0x5879,	// (0x00014d78) bg_button_pane_cp016_ParamLimits

0x5885,	// (0x00014d84) bg_button_pane_cp017_ParamLimits

0x58e0,	// (0x00014ddf) popup_vitu2_query_window_g3_ParamLimits

0x58e0,	// (0x00014ddf) popup_vitu2_query_window_g3

0x5983,	// (0x00014e82) popup_vitu2_query_window_t6_ParamLimits

0x5983,	// (0x00014e82) popup_vitu2_query_window_t6

0x59ae,	// (0x00014ead) popup_vitu2_query_window_t7_ParamLimits

0x59ae,	// (0x00014ead) popup_vitu2_query_window_t7

0xd5fa,	// (0x0001caf9) cam4_grid_pane_g1

0xd603,	// (0x0001cb02) cam4_grid_pane_g2

0xea60,	// (0x0001df5f) cam4_grid_pane_g3

0xea69,	// (0x0001df68) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0001f322) cam4_grid_pane_g

0x0be0,	// (0x000100df) aid_placing_vt_slider_lsc_ParamLimits

0x0ecd,	// (0x000103cc) vidtel_button_pane_ParamLimits

0x0ecd,	// (0x000103cc) vidtel_button_pane

0x9454,	// (0x00018953) bg_button_pane_cp034

0xea74,	// (0x0001df73) vidtel_button_pane_g1

0xea7c,	// (0x0001df7b) vidtel_button_pane_t1

0xd07d,	// (0x0001c57c) aid_size_vtel_slider_touch

0xd60e,	// (0x0001cb0d) scroll_pane_cp039

0x66a7,	// (0x00015ba6) ncim_query_button_pane_cp01_ParamLimits

0x66c6,	// (0x00015bc5) ncimui_query_pane_g1_ParamLimits

0x94c9,	// (0x000189c8) input_focus_pane_cp012_ParamLimits

0xdb47,	// (0x0001d046) ncim_query_entry_pane_t1_ParamLimits

0xd60e,	// (0x0001cb0d) scroll_pane_cp039_ParamLimits

0x2041,	// (0x00011540) navi_pane_bcale_mc_g1

0x2049,	// (0x00011548) navi_pane_bcale_mc_t1

0xdf73,	// (0x0001d472) main_sp_fs_email_pane_g1

0xdf7f,	// (0x0001d47e) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0001f125) main_sp_fs_email_pane_g

0xe3bd,	// (0x0001d8bc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe3bd,	// (0x0001d8bc) list_single_cale_mrui_row_pane_g3

0x77e0,	// (0x00016cdf) list_single_recal_day_pane_g5_event_pane

0xe59a,	// (0x0001da99) list_single_recal_day_pane_g7

0xea92,	// (0x0001df91) list_recal_day_event_pane_cp01

0xea9b,	// (0x0001df9a) list_recal_vselct_arw_lo_pane_cp01

0xeaa3,	// (0x0001dfa2) list_recal_vselct_arw_up_pane_cp01

0xeaab,	// (0x0001dfaa) list_recal_vselct_pane_cp01

0xd0c9,	// (0x0001c5c8) list_recal_day_event_pane_cp01_g1

0xeab5,	// (0x0001dfb4) list_recal_day_event_pane_cp01_t1

0xe5a2,	// (0x0001daa1) list_single_recal_day_pane_t1_ParamLimits

0xe5b4,	// (0x0001dab3) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0001f205) list_single_recal_day_pane_t_ParamLimits

0x9b7a,	// (0x00019079) bg_notes_pane_ParamLimits

0x9c4d,	// (0x0001914c) list_notes_pane_ParamLimits

0x017d,	// (0x0000f67c) scroll_pane_cp06_ParamLimits

0x9c89,	// (0x00019188) main_notes_pane_ParamLimits

0x94c9,	// (0x000189c8) main_welc_pane

0x8440,	// (0x0001793f) main_welc_body_pane_ParamLimits

0x8440,	// (0x0001793f) main_welc_body_pane

0x845f,	// (0x0001795e) main_welc_opti_pane_ParamLimits

0x845f,	// (0x0001795e) main_welc_opti_pane

0x84df,	// (0x000179de) main_welc_pane_t1_ParamLimits

0x84df,	// (0x000179de) main_welc_pane_t1

0x86e7,	// (0x00017be6) main_welc_body_row_pane_ParamLimits

0x86e7,	// (0x00017be6) main_welc_body_row_pane

0x9be7,	// (0x000190e6) main_welc_opti_row_pane_ParamLimits

0x9be7,	// (0x000190e6) main_welc_opti_row_pane

0xead3,	// (0x0001dfd2) main_welc_opti_row_pane_g1

0x86fb,	// (0x00017bfa) main_welc_opti_row_pane_t1

0xeadb,	// (0x0001dfda) main_welc_body_row_pane_t1

0xe82c,	// (0x0001dd2b) popup_notif_wgt_heading_pane

0xe846,	// (0x0001dd45) aid_size_list_notif_wgt_del_ParamLimits

0xe853,	// (0x0001dd52) list_notif_wgt_row_pane_g1_ParamLimits

0xe85f,	// (0x0001dd5e) list_notif_wgt_row_pane_g2_ParamLimits

0xe86e,	// (0x0001dd6d) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0001f26c) list_notif_wgt_row_pane_g_ParamLimits

0xe87b,	// (0x0001dd7a) list_notif_wgt_row_pane_t1_ParamLimits

0xe891,	// (0x0001dd90) list_notif_wgt_row_pane_t2_ParamLimits

0xe8a3,	// (0x0001dda2) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0001f273) list_notif_wgt_row_pane_t_ParamLimits

0x7cdd,	// (0x000171dc) listrow_wgtman_pane_g1_ParamLimits

0x7cea,	// (0x000171e9) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0001f2a3) listrow_wgtman_pane_g_ParamLimits

0x7d08,	// (0x00017207) listrow_wgtman_pane_t1_ParamLimits

0x7d20,	// (0x0001721f) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0001f2a8) listrow_wgtman_pane_t_ParamLimits

0x7d46,	// (0x00017245) wait_bar_pane_cp09_ParamLimits

0x9454,	// (0x00018953) bg_popup_heading_pane_cp02

0xeaea,	// (0x0001dfe9) popup_notif_wgt_heading_pane_g1

0xeaf2,	// (0x0001dff1) popup_notif_wgt_heading_pane_t1

0x9454,	// (0x00018953) main_vids_pane

0x9454,	// (0x00018953) vids_listscroll_pane

0x870a,	// (0x00017c09) scroll_pane_cp040

0x9454,	// (0x00018953) vids_list_pane

0x8715,	// (0x00017c14) vids_list_double_pane_ParamLimits

0x8715,	// (0x00017c14) vids_list_double_pane

0x8728,	// (0x00017c27) vids_list_double_pane_g1

0x8731,	// (0x00017c30) vids_list_double_pane_t1

0x8741,	// (0x00017c40) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0001f341) vids_list_double_pane_t

0x94c9,	// (0x000189c8) main_ncimui_pane_ParamLimits

0x64dd,	// (0x000159dc) main_ncimui_pane_g1_ParamLimits

0x64e9,	// (0x000159e8) main_ncimui_pane_g2_ParamLimits

0x64e9,	// (0x000159e8) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0001f026) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0001f026) main_ncimui_pane_g

0x847e,	// (0x0001797d) main_welc_pane_g1_ParamLimits

0x847e,	// (0x0001797d) main_welc_pane_g1

0x8493,	// (0x00017992) main_welc_pane_g2_ParamLimits

0x8493,	// (0x00017992) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0001f32b) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0001f32b) main_welc_pane_g

0x9b7a,	// (0x00019079) listscroll_mce_pane_ParamLimits

0x2121,	// (0x00011620) wait_bar_pane_cp10

0xbc5d,	// (0x0001b15c) main_cale_day_pane_ParamLimits

0xbc5d,	// (0x0001b15c) main_cale_week_pane_ParamLimits

0x9b7a,	// (0x00019079) main_messa_pane_ParamLimits

0x3ebe,	// (0x000133bd) main_clock2_btn_pane_ParamLimits

0x3ebe,	// (0x000133bd) main_clock2_btn_pane

0xc4de,	// (0x0001b9dd) main_clock2_btn_pane_cp01_ParamLimits

0xc4de,	// (0x0001b9dd) main_clock2_btn_pane_cp01

0xe349,	// (0x0001d848) list_cale_mrui_pane_ParamLimits

0xe8d9,	// (0x0001ddd8) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0001f27a) main_cf0_pane_g

0x7f66,	// (0x00017465) area_left_week_number_pane_ParamLimits

0x7f74,	// (0x00017473) area_top_day_name_pane_ParamLimits

0x7f87,	// (0x00017486) frame_month_view_pane_ParamLimits

0xe9c3,	// (0x0001dec2) grid_month_view_pane_ParamLimits

0xe9d1,	// (0x0001ded0) frm_month_g1_ParamLimits

0x8012,	// (0x00017511) frm_month_g2_ParamLimits

0x8025,	// (0x00017524) frm_month_g3_ParamLimits

0x8038,	// (0x00017537) frm_month_g4_ParamLimits

0x804b,	// (0x0001754a) frm_month_g5_ParamLimits

0x805e,	// (0x0001755d) frm_month_g6_ParamLimits

0x8073,	// (0x00017572) frm_month_g7_ParamLimits

0xe9de,	// (0x0001dedd) frm_month_g8_ParamLimits

0x8088,	// (0x00017587) frm_month_g9_ParamLimits

0x8098,	// (0x00017597) frm_month_g10_ParamLimits

0x80a8,	// (0x000175a7) frm_month_g11_ParamLimits

0x80b8,	// (0x000175b7) frm_month_g12_ParamLimits

0x80ca,	// (0x000175c9) frm_month_g13_ParamLimits

0x80de,	// (0x000175dd) frm_month_g14_ParamLimits

0x80f2,	// (0x000175f1) frm_month_g15_ParamLimits

0x8106,	// (0x00017605) frm_month_g16_ParamLimits

0xfdd3,	// (0x0001f2d2) frm_month_g_ParamLimits

0xe9eb,	// (0x0001deea) cell_top_day_name_pane_t1_ParamLimits

0x811a,	// (0x00017619) cell_area_left_week_number_pane_g1_ParamLimits

0x8126,	// (0x00017625) cell_area_left_week_number_pane_t1_ParamLimits

0x9bf5,	// (0x000190f4) cell_month_view_pane_g1_ParamLimits

0x8139,	// (0x00017638) cell_month_view_pane_t1_ParamLimits

0x9b72,	// (0x00019071) main_clock2_btn_pane_g1

0xeb00,	// (0x0001dfff) main_clock2_btn_pane_t1

0x94c9,	// (0x000189c8) listscroll_cmail_pane_ParamLimits

0xdf73,	// (0x0001d472) main_sp_fs_email_pane_g1_ParamLimits

0xdf7f,	// (0x0001d47e) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0001f125) main_sp_fs_email_pane_g_ParamLimits

0xe509,	// (0x0001da08) list_recal_day_pane_ParamLimits

0xe51a,	// (0x0001da19) mian_recal_day_pane_t1

0x70c7,	// (0x000165c6) list_single_dyc_row_text_pane_t4_ParamLimits

0x70c7,	// (0x000165c6) list_single_dyc_row_text_pane_t4

0x7110,	// (0x0001660f) list_single_dyc_row_text_pane_t5_ParamLimits

0x7110,	// (0x0001660f) list_single_dyc_row_text_pane_t5

0xe029,	// (0x0001d528) list_single_dyc_row_text_pane_t6_ParamLimits

0xe029,	// (0x0001d528) list_single_dyc_row_text_pane_t6

0x1c90,	// (0x0001118f) aid_mgn_list_cale_time_pane

0x94c9,	// (0x000189c8) main_gallery2_pane_ParamLimits

0xc4f2,	// (0x0001b9f1) main_clock2_pane_cp01_t1

0xc500,	// (0x0001b9ff) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0001ec0b) main_clock2_pane_cp01_t

0x059b,	// (0x0000fa9a) cale_week_scroll_pane_g16_ParamLimits

0x059b,	// (0x0000fa9a) cale_week_scroll_pane_g16

0x9eaa,	// (0x000193a9) vorec_slider_pane

0xea7c,	// (0x0001df7b) vidtel_button_pane_t1_ParamLimits

0x7846,	// (0x00016d45) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7846,	// (0x00016d45) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7859,	// (0x00016d58) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7859,	// (0x00016d58) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0001f228) main_fs_bigclock_clock_pane_g_ParamLimits

0x7870,	// (0x00016d6f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7886,	// (0x00016d85) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0001f231) main_fs_bigclock_clock_pane_t_ParamLimits

0x370b,	// (0x00012c0a) main_mup3_lyrics_pane_ParamLimits

0x370b,	// (0x00012c0a) main_mup3_lyrics_pane

0x8769,	// (0x00017c68) main_mup3_lyrics_pane_t1_ParamLimits

0x8769,	// (0x00017c68) main_mup3_lyrics_pane_t1

0xc936,	// (0x0001be35) aid_main_mp4_pane_t1_area

0xc940,	// (0x0001be3f) aid_main_mp4_pane_t2_area

0xc9ec,	// (0x0001beeb) main_mp4_pane_g7_ParamLimits

0xc9ec,	// (0x0001beeb) main_mp4_pane_g7

0xc9f8,	// (0x0001bef7) main_mp4_pane_g8_ParamLimits

0xc9f8,	// (0x0001bef7) main_mp4_pane_g8

0x48a2,	// (0x00013da1) aid_call6_pane_g1_size

0x836d,	// (0x0001786c) list_double_large_graphic_phob2_other_pane_ParamLimits

0x836d,	// (0x0001786c) list_double_large_graphic_phob2_other_pane

0xa29e,	// (0x0001979d) list_double_large_graphic_phob2_other_pane_g1

0x9454,	// (0x00018953) list_highlight_pane_cp026

0x94c9,	// (0x000189c8) main_welc_pane_ParamLimits

0x6f06,	// (0x00016405) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6f06,	// (0x00016405) main_sp_fs_ctrlbar_pane_g3

0x6f20,	// (0x0001641f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6f20,	// (0x0001641f) main_sp_fs_ctrlbar_pane_g4

0x6f54,	// (0x00016453) toolbar2_fixed_button_pane_cp01

0x6f5f,	// (0x0001645e) toolbar2_fixed_button_pane_cp02

0x6f6c,	// (0x0001646b) toolbar2_fixed_button_pane_cp03

0x8426,	// (0x00017925) list_welc_entry_pane_ParamLimits

0x8426,	// (0x00017925) list_welc_entry_pane

0x84a8,	// (0x000179a7) main_welc_pane_g3_ParamLimits

0x84a8,	// (0x000179a7) main_welc_pane_g3

0x8501,	// (0x00017a00) main_welc_pane_t2_ParamLimits

0x8501,	// (0x00017a00) main_welc_pane_t2

0x851c,	// (0x00017a1b) main_welc_pane_t3_ParamLimits

0x851c,	// (0x00017a1b) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0001f334) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0001f334) main_welc_pane_t

0x8656,	// (0x00017b55) welc_button_pane_ParamLimits

0x8656,	// (0x00017b55) welc_button_pane

0x86d4,	// (0x00017bd3) welc_service_logo_pane_ParamLimits

0x86d4,	// (0x00017bd3) welc_service_logo_pane

0x8784,	// (0x00017c83) list_single_welc_entry_pane_ParamLimits

0x8784,	// (0x00017c83) list_single_welc_entry_pane

0x8797,	// (0x00017c96) list_single_welc_entry_pane_g1

0x87a1,	// (0x00017ca0) list_single_welc_entry_pane_t1

0x87af,	// (0x00017cae) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0001f346) list_single_welc_entry_pane_t

0x9454,	// (0x00018953) bg_button_pane_cp035

0x87bd,	// (0x00017cbc) welc_button_pane_t1

0xeb1c,	// (0x0001e01b) welc_service_logo_pane_g1

0xeb25,	// (0x0001e024) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0001f34b) welc_service_logo_pane_g

0x9454,	// (0x00018953) main_int_radio_pane

0xd9e5,	// (0x0001cee4) list_single_fs_dyc_pane_g1

0x820d,	// (0x0001770c) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x820d,	// (0x0001770c) list_double_large_graphic_phob2_pane_g3

0x8219,	// (0x00017718) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8219,	// (0x00017718) list_double_large_graphic_phob2_pane_g4

0x87cb,	// (0x00017cca) main_int_radio1_pane_ParamLimits

0x87cb,	// (0x00017cca) main_int_radio1_pane

0xeb2e,	// (0x0001e02d) find_pane_cp02

0x87e8,	// (0x00017ce7) input_focus_pane_cp12_ParamLimits

0x87e8,	// (0x00017ce7) input_focus_pane_cp12

0x87f8,	// (0x00017cf7) input_focus_pane_cp13_ParamLimits

0x87f8,	// (0x00017cf7) input_focus_pane_cp13

0x880c,	// (0x00017d0b) input_focus_pane_cp14_ParamLimits

0x880c,	// (0x00017d0b) input_focus_pane_cp14

0xeb37,	// (0x0001e036) int_radio1_listscroll_pane

0x8820,	// (0x00017d1f) main_int_radio1_pane_g1_ParamLimits

0x8820,	// (0x00017d1f) main_int_radio1_pane_g1

0x8836,	// (0x00017d35) main_int_radio1_pane_t1_ParamLimits

0x8836,	// (0x00017d35) main_int_radio1_pane_t1

0x884f,	// (0x00017d4e) main_int_radio1_pane_t2_ParamLimits

0x884f,	// (0x00017d4e) main_int_radio1_pane_t2

0x886a,	// (0x00017d69) main_int_radio1_pane_t3_ParamLimits

0x886a,	// (0x00017d69) main_int_radio1_pane_t3

0x8885,	// (0x00017d84) main_int_radio1_pane_t4_ParamLimits

0x8885,	// (0x00017d84) main_int_radio1_pane_t4

0xeb41,	// (0x0001e040) main_int_radio1_pane_t5_ParamLimits

0xeb41,	// (0x0001e040) main_int_radio1_pane_t5

0x8897,	// (0x00017d96) main_int_radio1_pane_t6_ParamLimits

0x8897,	// (0x00017d96) main_int_radio1_pane_t6

0x88ac,	// (0x00017dab) main_int_radio1_pane_t7_ParamLimits

0x88ac,	// (0x00017dab) main_int_radio1_pane_t7

0x88c1,	// (0x00017dc0) main_int_radio1_pane_t8_ParamLimits

0x88c1,	// (0x00017dc0) main_int_radio1_pane_t8

0x88de,	// (0x00017ddd) main_int_radio1_pane_t9_ParamLimits

0x88de,	// (0x00017ddd) main_int_radio1_pane_t9

0x88f0,	// (0x00017def) main_int_radio1_pane_t10_ParamLimits

0x88f0,	// (0x00017def) main_int_radio1_pane_t10

0x8916,	// (0x00017e15) main_int_radio1_pane_t11_ParamLimits

0x8916,	// (0x00017e15) main_int_radio1_pane_t11

0x893c,	// (0x00017e3b) main_int_radio1_pane_t12_ParamLimits

0x893c,	// (0x00017e3b) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0001f350) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0001f350) main_int_radio1_pane_t

0xe9fe,	// (0x0001defd) int_radio_list_pane

0xea06,	// (0x0001df05) scroll_pane_cp037

0xeb53,	// (0x0001e052) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb53,	// (0x0001e052) list_double_large_graphic_int_radio_pane

0xeb67,	// (0x0001e066) list_double_large_graphic_int_radio_pane_g1

0xeb70,	// (0x0001e06f) list_double_large_graphic_int_radio_pane_t1

0xeb7e,	// (0x0001e07d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0001f369) list_double_large_graphic_int_radio_pane_t

0x9454,	// (0x00018953) list_highlight_pane_cp027

0xeac3,	// (0x0001dfc2) main_button_pane_4

0x84bb,	// (0x000179ba) main_welc_pane_g4_ParamLimits

0x84bb,	// (0x000179ba) main_welc_pane_g4

0x8537,	// (0x00017a36) main_welc_pane_t4_ParamLimits

0x8537,	// (0x00017a36) main_welc_pane_t4

0x854e,	// (0x00017a4d) main_welc_pane_t5_ParamLimits

0x854e,	// (0x00017a4d) main_welc_pane_t5

0x858f,	// (0x00017a8e) main_welc_pane_t6_ParamLimits

0x858f,	// (0x00017a8e) main_welc_pane_t6

0x866b,	// (0x00017b6a) welc_button_pane_2_ParamLimits

0x866b,	// (0x00017b6a) welc_button_pane_2

0x8689,	// (0x00017b88) welc_button_pane_3_ParamLimits

0x8689,	// (0x00017b88) welc_button_pane_3

0xeacb,	// (0x0001dfca) welc_button_pane_4

0x86aa,	// (0x00017ba9) welc_button_pane_5_ParamLimits

0x86aa,	// (0x00017ba9) welc_button_pane_5

0xf039,	// (0x0001e538) main_popup_welc_pane

0xeb9b,	// (0x0001e09a) main_welc_sk_g3

0xeba5,	// (0x0001e0a4) main_welc_sk_g4

0xebaf,	// (0x0001e0ae) main_welc_sk_t3

0xebbf,	// (0x0001e0be) main_welc_sk_t4

0xebcf,	// (0x0001e0ce) popup_welc_pane_t4

0xebdd,	// (0x0001e0dc) popup_welc_pane_t5

0xebeb,	// (0x0001e0ea) popup_welc_pane_t6

0x9454,	// (0x00018953) main_acti_pane

0x9454,	// (0x00018953) main_sso_pane

0x894e,	// (0x00017e4d) sso_body_pane_ParamLimits

0x894e,	// (0x00017e4d) sso_body_pane

0x8963,	// (0x00017e62) sso_logo_pane_ParamLimits

0x8963,	// (0x00017e62) sso_logo_pane

0x8993,	// (0x00017e92) sso_sk_pane_ParamLimits

0x8993,	// (0x00017e92) sso_sk_pane

0x9eea,	// (0x000193e9) main_sso_logo_pane_g1

0x89a5,	// (0x00017ea4) sso_sk_pane_t1_ParamLimits

0x89a5,	// (0x00017ea4) sso_sk_pane_t1

0x89bf,	// (0x00017ebe) sso_sk_pane_t2_ParamLimits

0x89bf,	// (0x00017ebe) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0001f36e) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0001f36e) sso_sk_pane_t

0xec2d,	// (0x0001e12c) aid_sso_gap

0xec36,	// (0x0001e135) aid_sso_txt1

0xec40,	// (0x0001e13f) aid_sso_txt2

0xec4a,	// (0x0001e149) aid_sso_txt3

0x0002,

0xfe74,	// (0x0001f373) aid_sso_txt

0xec54,	// (0x0001e153) aid_sso_widget

0x8a29,	// (0x00017f28) sso_btn_pane_ParamLimits

0x8a29,	// (0x00017f28) sso_btn_pane

0x8ab1,	// (0x00017fb0) sso_option_pane_ParamLimits

0x8ab1,	// (0x00017fb0) sso_option_pane

0x8b33,	// (0x00018032) sso_query_pane_ParamLimits

0x8b33,	// (0x00018032) sso_query_pane

0x8b89,	// (0x00018088) sso_query_pane_cp01_ParamLimits

0x8b89,	// (0x00018088) sso_query_pane_cp01

0x8be9,	// (0x000180e8) sso_t_hdr_pane_ParamLimits

0x8be9,	// (0x000180e8) sso_t_hdr_pane

0x8c13,	// (0x00018112) sso_t_nml_pane_ParamLimits

0x8c13,	// (0x00018112) sso_t_nml_pane

0xec5e,	// (0x0001e15d) sso_t_sub_pane

0x8970,	// (0x00017e6f) sso_popup_window_ParamLimits

0x8970,	// (0x00017e6f) sso_popup_window

0x89d5,	// (0x00017ed4) sso_apps_pane_ParamLimits

0x89d5,	// (0x00017ed4) sso_apps_pane

0x89ff,	// (0x00017efe) sso_body_pane_g1

0x8a09,	// (0x00017f08) sso_body_pane_t1

0x8a19,	// (0x00017f18) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0001f37a) sso_body_pane_t

0x8a7b,	// (0x00017f7a) sso_btn_pane_cp01_ParamLimits

0x8a7b,	// (0x00017f7a) sso_btn_pane_cp01

0x8b07,	// (0x00018006) sso_prog_pane_ParamLimits

0x8b07,	// (0x00018006) sso_prog_pane

0x8c69,	// (0x00018168) sso_t_hdr_pane_t1_ParamLimits

0x8c69,	// (0x00018168) sso_t_hdr_pane_t1

0xec73,	// (0x0001e172) input_focus_pane_cp10_ParamLimits

0xec73,	// (0x0001e172) input_focus_pane_cp10

0xec8d,	// (0x0001e18c) sso_query_pane_t1_ParamLimits

0xec8d,	// (0x0001e18c) sso_query_pane_t1

0xeca0,	// (0x0001e19f) sso_query_pane_t2_ParamLimits

0xeca0,	// (0x0001e19f) sso_query_pane_t2

0xecba,	// (0x0001e1b9) sso_query_pane_t3_ParamLimits

0xecba,	// (0x0001e1b9) sso_query_pane_t3

0xece4,	// (0x0001e1e3) sso_query_pane_t4_ParamLimits

0xece4,	// (0x0001e1e3) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0001f37f) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0001f37f) sso_query_pane_t

0x9454,	// (0x00018953) bg_button_pane_cp22

0xeb8c,	// (0x0001e08b) sso_btn_pane_t1

0x8c7c,	// (0x0001817b) sso_t_nml_pane_t1_ParamLimits

0x8c7c,	// (0x0001817b) sso_t_nml_pane_t1

0x8c97,	// (0x00018196) sso_option_row_pane_ParamLimits

0x8c97,	// (0x00018196) sso_option_row_pane

0xed08,	// (0x0001e207) sso_t_sub_pane_t1_ParamLimits

0xed08,	// (0x0001e207) sso_t_sub_pane_t1

0x94c9,	// (0x000189c8) bg_popup_window_pane_cp11_ParamLimits

0x94c9,	// (0x000189c8) bg_popup_window_pane_cp11

0xed25,	// (0x0001e224) popup_sk_window_cp01_ParamLimits

0xed25,	// (0x0001e224) popup_sk_window_cp01

0xed32,	// (0x0001e231) sso_popup_body_pane_ParamLimits

0xed32,	// (0x0001e231) sso_popup_body_pane

0xed3f,	// (0x0001e23e) scroll_pane_cp21_ParamLimits

0xed3f,	// (0x0001e23e) scroll_pane_cp21

0xed4c,	// (0x0001e24b) sso_popup_body_t_pane_ParamLimits

0xed4c,	// (0x0001e24b) sso_popup_body_t_pane

0xed59,	// (0x0001e258) sso_popup_body_t_hdr_pane_ParamLimits

0xed59,	// (0x0001e258) sso_popup_body_t_hdr_pane

0xed6c,	// (0x0001e26b) sso_popup_body_t_nml_pane_ParamLimits

0xed6c,	// (0x0001e26b) sso_popup_body_t_nml_pane

0xed8a,	// (0x0001e289) sso_popup_body_t_sub_pane_ParamLimits

0xed8a,	// (0x0001e289) sso_popup_body_t_sub_pane

0xedad,	// (0x0001e2ac) sso_popup_body_t_hdr_pane_t1

0x8caa,	// (0x000181a9) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8caa,	// (0x000181a9) sso_popup_body_t_nml_pane_t1

0xedbd,	// (0x0001e2bc) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedbd,	// (0x0001e2bc) sso_popup_body_t_sub_pane_t1

0x9eea,	// (0x000193e9) sso_prog_pane_g1

0x8ce5,	// (0x000181e4) sso_apps_pane_comp1_ParamLimits

0x8ce5,	// (0x000181e4) sso_apps_pane_comp1

0xede2,	// (0x0001e2e1) sso_apps_pane_comp1_g1

0xedea,	// (0x0001e2e9) sso_apps_pane_comp1_t1

0xee06,	// (0x0001e305) sso_option_row_pane_g1

0xee0e,	// (0x0001e30d) sso_option_row_pane_t1

0x8413,	// (0x00017912) bg_welc_area_ParamLimits

0x8413,	// (0x00017912) bg_welc_area

0x85cd,	// (0x00017acc) sso_t_hdr_pane_a_t1_ParamLimits

0x85cd,	// (0x00017acc) sso_t_hdr_pane_a_t1

0x85e8,	// (0x00017ae7) sso_t_nml_pane_a_t1_ParamLimits

0x85e8,	// (0x00017ae7) sso_t_nml_pane_a_t1

0x861b,	// (0x00017b1a) sso_t_sub_pane_a_t1_ParamLimits

0x861b,	// (0x00017b1a) sso_t_sub_pane_a_t1

0xeb8c,	// (0x0001e08b) sso_btn_pane_t1_copy1

0x9454,	// (0x00018953) welc_button_pane_2_comp1

0xebfb,	// (0x0001e0fa) sso_t_hdr_pane_p_t1

0xec0b,	// (0x0001e10a) sso_t_nml_pane_p_t1

0xec1b,	// (0x0001e11a) sso_t_sub_pane_p_t1

0xe0ea,	// (0x0001d5e9) list_cmail_pane_ParamLimits

0x86c2,	// (0x00017bc1) welc_button_pane_cp01_ParamLimits

0x86c2,	// (0x00017bc1) welc_button_pane_cp01

0x9454,	// (0x00018953) main_att_pane

0xedf8,	// (0x0001e2f7) input_focus_pane_cp10_t1

0xee0e,	// (0x0001e30d) sso_option_row_pane_t1_ParamLimits

0x8cff,	// (0x000181fe) main_att_body_pane_ParamLimits

0x8cff,	// (0x000181fe) main_att_body_pane

0x8d34,	// (0x00018233) att_btn_pane_ParamLimits

0x8d34,	// (0x00018233) att_btn_pane

0x8d5b,	// (0x0001825a) att_btn_pane_cp01_ParamLimits

0x8d5b,	// (0x0001825a) att_btn_pane_cp01

0x8d7b,	// (0x0001827a) att_li_srv_pane_ParamLimits

0x8d7b,	// (0x0001827a) att_li_srv_pane

0x8d98,	// (0x00018297) att_opt_pane_ParamLimits

0x8d98,	// (0x00018297) att_opt_pane

0x8de6,	// (0x000182e5) att_query_pane_ParamLimits

0x8de6,	// (0x000182e5) att_query_pane

0x8e32,	// (0x00018331) att_query_pane_cp01_ParamLimits

0x8e32,	// (0x00018331) att_query_pane_cp01

0x8e7e,	// (0x0001837d) att_t_hdr_pane_ParamLimits

0x8e7e,	// (0x0001837d) att_t_hdr_pane

0x8ee2,	// (0x000183e1) att_t_nml_pane_ParamLimits

0x8ee2,	// (0x000183e1) att_t_nml_pane

0x8f2f,	// (0x0001842e) att_t_nml_pane_cp01_ParamLimits

0x8f2f,	// (0x0001842e) att_t_nml_pane_cp01

0x8f5d,	// (0x0001845c) att_t_nmlb_pane_ParamLimits

0x8f5d,	// (0x0001845c) att_t_nmlb_pane

0x8f7a,	// (0x00018479) att_term_pane_ParamLimits

0x8f7a,	// (0x00018479) att_term_pane

0x8fca,	// (0x000184c9) main_att_body_pane_g1_ParamLimits

0x8fca,	// (0x000184c9) main_att_body_pane_g1

0xee24,	// (0x0001e323) att_t_hdr_pane_t1_ParamLimits

0xee24,	// (0x0001e323) att_t_hdr_pane_t1

0xee3d,	// (0x0001e33c) att_t_nml_pane_t1_ParamLimits

0xee3d,	// (0x0001e33c) att_t_nml_pane_t1

0xee62,	// (0x0001e361) att_btn_pane_t1

0x9454,	// (0x00018953) bg_button_pane_cp23

0x9001,	// (0x00018500) att_li_srv_row_pane_ParamLimits

0x9001,	// (0x00018500) att_li_srv_row_pane

0xee72,	// (0x0001e371) att_t_nmlb_pane_t1_ParamLimits

0xee72,	// (0x0001e371) att_t_nmlb_pane_t1

0xee8b,	// (0x0001e38a) att_query_pane_t1

0xee9a,	// (0x0001e399) att_query_pane_t2

0xeea9,	// (0x0001e3a8) att_query_pane_t3

0x0002,

0xfe89,	// (0x0001f388) att_query_pane_t

0xeeb8,	// (0x0001e3b7) input_focus_pane_cp11

0xeec1,	// (0x0001e3c0) att_term_pane_t1_ParamLimits

0xeec1,	// (0x0001e3c0) att_term_pane_t1

0x9454,	// (0x00018953) att_opt_row_pane

0xeede,	// (0x0001e3dd) att_opt_row_pane_g1

0xeee6,	// (0x0001e3e5) att_opt_row_pane_t1_ParamLimits

0xeee6,	// (0x0001e3e5) att_opt_row_pane_t1

0x9011,	// (0x00018510) att_li_srv_row_pane_g1

0x9019,	// (0x00018518) att_li_srv_row_pane_t1

0x902e,	// (0x0001852d) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0001f38f) att_li_srv_row_pane_t

0x9454,	// (0x00018953) main_call7_pane

0x9454,	// (0x00018953) main_vod_pane

0xec5e,	// (0x0001e15d) sso_t_sub_pane_ParamLimits

0x8d15,	// (0x00018214) att_btn_emg_pane_ParamLimits

0x8d15,	// (0x00018214) att_btn_emg_pane

0x9019,	// (0x00018518) att_li_srv_row_pane_t1_ParamLimits

0x902e,	// (0x0001852d) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0001f38f) att_li_srv_row_pane_t_ParamLimits

0xeeff,	// (0x0001e3fe) att_btn_close_pane_g1

0x9454,	// (0x00018953) bg_button_pane_cp24

0x9043,	// (0x00018542) main_vod_body_pane_ParamLimits

0x9043,	// (0x00018542) main_vod_body_pane

0x9057,	// (0x00018556) main_vod_body_pane_g1_ParamLimits

0x9057,	// (0x00018556) main_vod_body_pane_g1

0x908b,	// (0x0001858a) scroll_pane_cp24_ParamLimits

0x908b,	// (0x0001858a) scroll_pane_cp24

0x90d9,	// (0x000185d8) vod_btn_pane_ParamLimits

0x90d9,	// (0x000185d8) vod_btn_pane

0x911d,	// (0x0001861c) vod_det_pane_ParamLimits

0x911d,	// (0x0001861c) vod_det_pane

0x914f,	// (0x0001864e) vod_logo_g1_ParamLimits

0x914f,	// (0x0001864e) vod_logo_g1

0x918d,	// (0x0001868c) vod_opt_pane_ParamLimits

0x918d,	// (0x0001868c) vod_opt_pane

0x91c0,	// (0x000186bf) vod_opt_pane_cp01_ParamLimits

0x91c0,	// (0x000186bf) vod_opt_pane_cp01

0x91ec,	// (0x000186eb) vod_query_pane_ParamLimits

0x91ec,	// (0x000186eb) vod_query_pane

0x9219,	// (0x00018718) vod_query_pane_cp01_ParamLimits

0x9219,	// (0x00018718) vod_query_pane_cp01

0x9225,	// (0x00018724) vod_t_nml_pane_ParamLimits

0x9225,	// (0x00018724) vod_t_nml_pane

0x92da,	// (0x000187d9) vod_t_nml_pane_cp01_ParamLimits

0x92da,	// (0x000187d9) vod_t_nml_pane_cp01

0x9316,	// (0x00018815) vod_t_sub_pane_ParamLimits

0x9316,	// (0x00018815) vod_t_sub_pane

0x934b,	// (0x0001884a) vod_t_sub_pane_cp01_ParamLimits

0x934b,	// (0x0001884a) vod_t_sub_pane_cp01

0xeeb8,	// (0x0001e3b7) vod_query_field_pane

0xee8b,	// (0x0001e38a) vod_query_pane_t1

0x9454,	// (0x00018953) bg_button_pane_cp25

0xef07,	// (0x0001e406) sso_btn_pane_t1_copy2

0x9377,	// (0x00018876) vod_t_nml_pane_t1_ParamLimits

0x9377,	// (0x00018876) vod_t_nml_pane_t1

0xef17,	// (0x0001e416) vod_opt_row_pane_ParamLimits

0xef17,	// (0x0001e416) vod_opt_row_pane

0xef29,	// (0x0001e428) vod_t_sub_pane_t1_ParamLimits

0xef29,	// (0x0001e428) vod_t_sub_pane_t1

0x93ae,	// (0x000188ad) vod_det_cell_pane_ParamLimits

0x93ae,	// (0x000188ad) vod_det_cell_pane

0x9454,	// (0x00018953) input_focus_pane_cp15

0xef42,	// (0x0001e441) vod_query_field_pane_t1

0xef50,	// (0x0001e44f) vod_opt_row_pane_g1_ParamLimits

0xef50,	// (0x0001e44f) vod_opt_row_pane_g1

0xef5c,	// (0x0001e45b) vod_opt_row_pane_t1_ParamLimits

0xef5c,	// (0x0001e45b) vod_opt_row_pane_t1

0xef81,	// (0x0001e480) vod_det_cell_field_pane

0xef8a,	// (0x0001e489) vod_det_cell_pane_g1

0xee8b,	// (0x0001e38a) vod_det_cell_pane_t1

0x9454,	// (0x00018953) input_focus_pane_cp16

0xef42,	// (0x0001e441) vod_det_cell_field_pane_t1

0x7b8d,	// (0x0001708c) call7_btn_grp_pane_ParamLimits

0x7b8d,	// (0x0001708c) call7_btn_grp_pane

0x93c2,	// (0x000188c1) call7_bubble_pane_ParamLimits

0x93c2,	// (0x000188c1) call7_bubble_pane

0x93da,	// (0x000188d9) cell_call7_btn_pane_ParamLimits

0x93da,	// (0x000188d9) cell_call7_btn_pane

0x93ee,	// (0x000188ed) call7_pane_g1_ParamLimits

0x93ee,	// (0x000188ed) call7_pane_g1

0x9400,	// (0x000188ff) call7_windows_conf_pane_ParamLimits

0x9400,	// (0x000188ff) call7_windows_conf_pane

0x941e,	// (0x0001891d) popup_call7_1st_window_ParamLimits

0x941e,	// (0x0001891d) popup_call7_1st_window

0x9430,	// (0x0001892f) popup_call7_2nd_window_ParamLimits

0x9430,	// (0x0001892f) popup_call7_2nd_window

0x9442,	// (0x00018941) popup_call7_3rd_window_ParamLimits

0x9442,	// (0x00018941) popup_call7_3rd_window

0x9454,	// (0x00018953) bg_button_pane_cp26

0xe95a,	// (0x0001de59) cell_call7_btn_pane_g1

0xe963,	// (0x0001de62) cell_call7_btn_pane_t1

0x9454,	// (0x00018953) bg_popup_window_pane_cp12

0xef92,	// (0x0001e491) popup_call7_1st_window_g1

0xef9a,	// (0x0001e499) popup_call7_1st_window_g2

0xefa2,	// (0x0001e4a1) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0001f394) popup_call7_1st_window_g

0xefaa,	// (0x0001e4a9) popup_call7_1st_window_t1

0xefb9,	// (0x0001e4b8) popup_call7_1st_window_t2

0xefc9,	// (0x0001e4c8) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0001f39b) popup_call7_1st_window_t

0x9454,	// (0x00018953) bg_popup_window_pane_cp13

0xefd9,	// (0x0001e4d8) popup_call7_2nd_window_g1

0xefe1,	// (0x0001e4e0) popup_call7_2nd_window_g2

0xefe9,	// (0x0001e4e8) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0001f3a2) popup_call7_2nd_window_g

0xeff1,	// (0x0001e4f0) popup_call7_2nd_window_t1

0x9454,	// (0x00018953) bg_popup_window_pane_cp14

0xf000,	// (0x0001e4ff) call7_list_conf_pane

0xf008,	// (0x0001e507) call7_list_conf_row_pane_ParamLimits

0xf008,	// (0x0001e507) call7_list_conf_row_pane

0xf01b,	// (0x0001e51a) call7_list_conf_row_pane_g1

0xf023,	// (0x0001e522) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0001f3a9) call7_list_conf_row_pane_g

0xf02b,	// (0x0001e52a) call7_list_conf_row_pane_t1

0x9454,	// (0x00018953) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
