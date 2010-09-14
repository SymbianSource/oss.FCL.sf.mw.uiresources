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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000d5a8 };

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
0x1137,	// (0x0000e6df) Screen

0x1143,	// (0x0000e6eb) application_window

0x117f,	// (0x0000e727) area_bottom_pane_ParamLimits

0x117f,	// (0x0000e727) area_bottom_pane

0x11b8,	// (0x0000e760) area_top_pane_ParamLimits

0x11b8,	// (0x0000e760) area_top_pane

0x955a,	// (0x00016b02) call_video_uplink_pane_ParamLimits

0x955a,	// (0x00016b02) call_video_uplink_pane

0x1246,	// (0x0000e7ee) main_pane_ParamLimits

0x1246,	// (0x0000e7ee) main_pane

0xbe4b,	// (0x000193f3) context_pane

0x3f56,	// (0x000114fe) navi_pane

0x3f88,	// (0x00011530) popup_cale_events_window_ParamLimits

0x3f88,	// (0x00011530) popup_cale_events_window

0xbe5e,	// (0x00019406) popup_mup_playback_window

0x3fa0,	// (0x00011548) signal_pane

0x9d03,	// (0x000172ab) main_browser_pane

0x9f38,	// (0x000174e0) main_burst_pane

0x3cbe,	// (0x00011266) main_calc_pane

0xbdeb,	// (0x00019393) main_cale_day_pane

0x1756,	// (0x0000ecfe) main_cale_month_pane

0xbdeb,	// (0x00019393) main_cale_week_pane

0x9f38,	// (0x000174e0) main_call_pane

0x9999,	// (0x00016f41) main_call_poc_pane

0x9f38,	// (0x000174e0) main_camera_pane

0x9f38,	// (0x000174e0) main_chi_dic_pane

0xa7b4,	// (0x00017d5c) main_clock_pane

0x9999,	// (0x00016f41) main_fmradio_pane

0x9f38,	// (0x000174e0) main_graph_messa_pane

0x9999,	// (0x00016f41) main_help_pane

0x9d03,	// (0x000172ab) main_im_pane

0x9bf4,	// (0x0001719c) main_image_pane_ParamLimits

0x9bf4,	// (0x0001719c) main_image_pane

0x9999,	// (0x00016f41) main_location2_pane

0x9f38,	// (0x000174e0) main_location_pane

0x9bf4,	// (0x0001719c) main_messa_pane

0x9999,	// (0x00016f41) main_mp2_pane

0x9f38,	// (0x000174e0) main_mp_pane

0x9999,	// (0x00016f41) main_msg_pane

0x9999,	// (0x00016f41) main_mup_eq_pane

0x9999,	// (0x00016f41) main_mup_pane

0x9d03,	// (0x000172ab) main_notes_pane

0x9999,	// (0x00016f41) main_pec_pane

0x9999,	// (0x00016f41) main_phob_pane

0x9999,	// (0x00016f41) main_pinb_pane

0x9999,	// (0x00016f41) main_postcard_pane

0x9999,	// (0x00016f41) main_qdial_pane

0x9f38,	// (0x000174e0) main_skin_pane

0x9999,	// (0x00016f41) main_smil2_pane

0x9f38,	// (0x000174e0) main_smil_pane

0x9f38,	// (0x000174e0) main_video_pane

0x9f38,	// (0x000174e0) main_video_tele_pane

0x9bf4,	// (0x0001719c) main_viewer_pane_ParamLimits

0x9bf4,	// (0x0001719c) main_viewer_pane

0x9f38,	// (0x000174e0) main_vorec_pane

0x3d12,	// (0x000112ba) popup_blid_sat_info_window_ParamLimits

0x3d12,	// (0x000112ba) popup_blid_sat_info_window

0x3d6a,	// (0x00011312) popup_dyc_status_message_window_ParamLimits

0x3d6a,	// (0x00011312) popup_dyc_status_message_window

0x3d82,	// (0x0001132a) popup_grid_large_graphic_window_ParamLimits

0x3d82,	// (0x0001132a) popup_grid_large_graphic_window

0x3e32,	// (0x000113da) popup_loc_request_window_ParamLimits

0x3e32,	// (0x000113da) popup_loc_request_window

0x3f2e,	// (0x000114d6) popup_wml_address_window_ParamLimits

0x3f2e,	// (0x000114d6) popup_wml_address_window

0x3af8,	// (0x000110a0) call_muted_g1

0x376b,	// (0x00010d13) popup_call_audio_conf_window_ParamLimits

0x376b,	// (0x00010d13) popup_call_audio_conf_window

0x3b0c,	// (0x000110b4) popup_call_audio_first_window_ParamLimits

0x3b0c,	// (0x000110b4) popup_call_audio_first_window

0x3b82,	// (0x0001112a) popup_call_audio_in_window_ParamLimits

0x3b82,	// (0x0001112a) popup_call_audio_in_window

0x3bbe,	// (0x00011166) popup_call_audio_out_window_ParamLimits

0x3bbe,	// (0x00011166) popup_call_audio_out_window

0x3bf8,	// (0x000111a0) popup_call_audio_second_window_ParamLimits

0x3bf8,	// (0x000111a0) popup_call_audio_second_window

0x3c4e,	// (0x000111f6) popup_call_audio_wait_window_ParamLimits

0x3c4e,	// (0x000111f6) popup_call_audio_wait_window

0x3c83,	// (0x0001122b) popup_number_entry_window_ParamLimits

0x3c83,	// (0x0001122b) popup_number_entry_window

0x9586,	// (0x00016b2e) bg_popup_call_pane_cp05_ParamLimits

0x9586,	// (0x00016b2e) bg_popup_call_pane_cp05

0x95a6,	// (0x00016b4e) popup_number_entry_window_t1

0x95b9,	// (0x00016b61) popup_number_entry_window_t2

0x95cb,	// (0x00016b73) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0001c613) popup_number_entry_window_t

0x95dd,	// (0x00016b85) text_title_cp2

0x95f0,	// (0x00016b98) bg_popup_call_pane_cp_ParamLimits

0x95f0,	// (0x00016b98) bg_popup_call_pane_cp

0x95fe,	// (0x00016ba6) call_thumbnail_pane

0x9606,	// (0x00016bae) popup_call_audio_in_window_g1_ParamLimits

0x9606,	// (0x00016bae) popup_call_audio_in_window_g1

0x9612,	// (0x00016bba) popup_call_audio_in_window_g2_ParamLimits

0x9612,	// (0x00016bba) popup_call_audio_in_window_g2

0x961e,	// (0x00016bc6) popup_call_audio_in_window_g3_ParamLimits

0x961e,	// (0x00016bc6) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0001c61c) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0001c61c) popup_call_audio_in_window_g

0x962a,	// (0x00016bd2) popup_call_audio_in_window_t1_ParamLimits

0x962a,	// (0x00016bd2) popup_call_audio_in_window_t1

0x9646,	// (0x00016bee) popup_call_audio_in_window_t2_ParamLimits

0x9646,	// (0x00016bee) popup_call_audio_in_window_t2

0x9662,	// (0x00016c0a) popup_call_audio_in_window_t3_ParamLimits

0x9662,	// (0x00016c0a) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0001c623) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0001c623) popup_call_audio_in_window_t

0x95f0,	// (0x00016b98) bg_popup_call_pane_cp01_ParamLimits

0x95f0,	// (0x00016b98) bg_popup_call_pane_cp01

0x95fe,	// (0x00016ba6) call_thumbnail_pane_cp02

0x9675,	// (0x00016c1d) call_type_pane_cp022

0x967d,	// (0x00016c25) popup_call_audio_out_window_g1_ParamLimits

0x967d,	// (0x00016c25) popup_call_audio_out_window_g1

0x968f,	// (0x00016c37) popup_call_audio_out_window_g2_ParamLimits

0x968f,	// (0x00016c37) popup_call_audio_out_window_g2

0x969b,	// (0x00016c43) popup_call_audio_out_window_g3_ParamLimits

0x969b,	// (0x00016c43) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0001c62a) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0001c62a) popup_call_audio_out_window_g

0x96ad,	// (0x00016c55) popup_call_audio_out_window_t1_ParamLimits

0x96ad,	// (0x00016c55) popup_call_audio_out_window_t1

0x96c5,	// (0x00016c6d) popup_call_audio_out_window_t2_ParamLimits

0x96c5,	// (0x00016c6d) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0001c631) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0001c631) popup_call_audio_out_window_t

0x96da,	// (0x00016c82) bg_popup_call_pane_ParamLimits

0x96da,	// (0x00016c82) bg_popup_call_pane

0x1403,	// (0x0000e9ab) call_thumbnail_pane_cp_ParamLimits

0x1403,	// (0x0000e9ab) call_thumbnail_pane_cp

0x975e,	// (0x00016d06) call_type_pane_cp01_ParamLimits

0x975e,	// (0x00016d06) call_type_pane_cp01

0x97a2,	// (0x00016d4a) popup_call_audio_first_window_g1_ParamLimits

0x97a2,	// (0x00016d4a) popup_call_audio_first_window_g1

0x97ee,	// (0x00016d96) popup_call_audio_first_window_g2_ParamLimits

0x97ee,	// (0x00016d96) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0001c636) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0001c636) popup_call_audio_first_window_g

0x9832,	// (0x00016dda) popup_call_audio_first_window_t1_ParamLimits

0x9832,	// (0x00016dda) popup_call_audio_first_window_t1

0x98de,	// (0x00016e86) popup_call_audio_first_window_t4_ParamLimits

0x98de,	// (0x00016e86) popup_call_audio_first_window_t4

0x996a,	// (0x00016f12) popup_call_audio_first_window_t5_ParamLimits

0x996a,	// (0x00016f12) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0001c63b) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0001c63b) popup_call_audio_first_window_t

0x9999,	// (0x00016f41) bg_popup_call_pane_cp02

0x99a3,	// (0x00016f4b) call_type_pane_cp023

0x99ab,	// (0x00016f53) popup_call_audio_wait_window_g1

0x99b3,	// (0x00016f5b) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0001c642) popup_call_audio_wait_window_g

0x99bb,	// (0x00016f63) popup_call_audio_wait_window_t3

0x99c9,	// (0x00016f71) bg_popup_call_pane_cp03_ParamLimits

0x99c9,	// (0x00016f71) bg_popup_call_pane_cp03

0x9a29,	// (0x00016fd1) call_thumbnail_pane_cp011_ParamLimits

0x9a29,	// (0x00016fd1) call_thumbnail_pane_cp011

0x9a35,	// (0x00016fdd) call_type_pane_cp034_ParamLimits

0x9a35,	// (0x00016fdd) call_type_pane_cp034

0x9a71,	// (0x00017019) popup_call_audio_second_window_g1_ParamLimits

0x9a71,	// (0x00017019) popup_call_audio_second_window_g1

0x9aad,	// (0x00017055) popup_call_audio_second_window_g2_ParamLimits

0x9aad,	// (0x00017055) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0001c647) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0001c647) popup_call_audio_second_window_g

0x9ae9,	// (0x00017091) popup_call_audio_second_window_t1_ParamLimits

0x9ae9,	// (0x00017091) popup_call_audio_second_window_t1

0x9b6a,	// (0x00017112) popup_call_audio_second_window_t2_ParamLimits

0x9b6a,	// (0x00017112) popup_call_audio_second_window_t2

0x9ba0,	// (0x00017148) popup_call_audio_second_window_t3_ParamLimits

0x9ba0,	// (0x00017148) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0001c64c) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0001c64c) popup_call_audio_second_window_t

0x9999,	// (0x00016f41) bg_popup_call_pane_cp04

0x9bd6,	// (0x0001717e) list_conf_pane

0x9bde,	// (0x00017186) popup_call_audio_conf_window_t1

0x9bec,	// (0x00017194) call_thumbnail_pane_g1

0x9bf4,	// (0x0001719c) bg_pinb_pane_ParamLimits

0x9bf4,	// (0x0001719c) bg_pinb_pane

0x9c02,	// (0x000171aa) find_pinb_pane

0x9bf4,	// (0x0001719c) listscroll_pinb_pane_ParamLimits

0x9bf4,	// (0x0001719c) listscroll_pinb_pane

0x9c0c,	// (0x000171b4) pinb_bg_pane_g1

0x9c0c,	// (0x000171b4) pinb_bg_pane_g2

0x9c0c,	// (0x000171b4) pinb_bg_pane_g3

0x9c0c,	// (0x000171b4) pinb_bg_pane_g4

0x9c0c,	// (0x000171b4) pinb_bg_pane_g5

0x9c0c,	// (0x000171b4) pinb_bg_pane_g6

0x9c0c,	// (0x000171b4) pinb_bg_pane_g7

0x9c0c,	// (0x000171b4) pinb_bg_pane_g8

0x9c0c,	// (0x000171b4) pinb_bg_pane_g9

0x9c0c,	// (0x000171b4) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0001c653) pinb_bg_pane_g

0x9509,	// (0x00016ab1) grid_pinb_pane

0x9509,	// (0x00016ab1) list_pinb_pane

0x9578,	// (0x00016b20) scroll_pane_cp01_ParamLimits

0x9578,	// (0x00016b20) scroll_pane_cp01

0x9c16,	// (0x000171be) find_pinb_pane_g1_ParamLimits

0x9c16,	// (0x000171be) find_pinb_pane_g1

0x9c2e,	// (0x000171d6) find_pinb_pane_t1

0x9c40,	// (0x000171e8) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0001c66d) find_pinb_pane_t

0x9c55,	// (0x000171fd) input_focus_pane_cp01_ParamLimits

0x9c55,	// (0x000171fd) input_focus_pane_cp01

0x9c61,	// (0x00017209) cell_pinb_pane_ParamLimits

0x9c61,	// (0x00017209) cell_pinb_pane

0x9c6f,	// (0x00017217) cell_pinb_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) cell_pinb_pane_g1

0x9c7d,	// (0x00017225) cell_pinb_pane_g2_ParamLimits

0x9c7d,	// (0x00017225) cell_pinb_pane_g2

0x9c7d,	// (0x00017225) cell_pinb_pane_g3_ParamLimits

0x9c7d,	// (0x00017225) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0001c672) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0001c672) cell_pinb_pane_g

0x9999,	// (0x00016f41) grid_highlight_pane_cp01

0x9c61,	// (0x00017209) list_pinb_item_pane_ParamLimits

0x9c61,	// (0x00017209) list_pinb_item_pane

0x9509,	// (0x00016ab1) list_highlight_pane_cp02

0x9c8b,	// (0x00017233) list_pinb_item_pane_g1_ParamLimits

0x9c8b,	// (0x00017233) list_pinb_item_pane_g1

0x9c7d,	// (0x00017225) list_pinb_item_pane_g2_ParamLimits

0x9c7d,	// (0x00017225) list_pinb_item_pane_g2

0x9c6f,	// (0x00017217) list_pinb_item_pane_g3_ParamLimits

0x9c6f,	// (0x00017217) list_pinb_item_pane_g3

0x9c7d,	// (0x00017225) list_pinb_item_pane_g4_ParamLimits

0x9c7d,	// (0x00017225) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0001c679) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0001c679) list_pinb_item_pane_g

0x9c99,	// (0x00017241) list_pinb_item_pane_t1_ParamLimits

0x9c99,	// (0x00017241) list_pinb_item_pane_t1

0x1445,	// (0x0000e9ed) calc_display_pane

0x146a,	// (0x0000ea12) calc_paper_pane

0x148d,	// (0x0000ea35) grid_calc_pane

0x9999,	// (0x00016f41) bg_list_pane_cp01

0x14bb,	// (0x0000ea63) clock_g1

0x14c3,	// (0x0000ea6b) clock_g2

0x0001,

0xf0da,	// (0x0001c682) clock_g

0x14cb,	// (0x0000ea73) clock_t1_ParamLimits

0x14cb,	// (0x0000ea73) clock_t1

0x14e0,	// (0x0000ea88) clock_t2_ParamLimits

0x14e0,	// (0x0000ea88) clock_t2

0x14f2,	// (0x0000ea9a) clock_t3_ParamLimits

0x14f2,	// (0x0000ea9a) clock_t3

0x1504,	// (0x0000eaac) clock_t4_ParamLimits

0x1504,	// (0x0000eaac) clock_t4

0x1516,	// (0x0000eabe) clock_t5_ParamLimits

0x1516,	// (0x0000eabe) clock_t5

0x152b,	// (0x0000ead3) clock_t6_ParamLimits

0x152b,	// (0x0000ead3) clock_t6

0x153d,	// (0x0000eae5) clock_t7_ParamLimits

0x153d,	// (0x0000eae5) clock_t7

0x154f,	// (0x0000eaf7) clock_t8_ParamLimits

0x154f,	// (0x0000eaf7) clock_t8

0x1563,	// (0x0000eb0b) clock_t9_ParamLimits

0x1563,	// (0x0000eb0b) clock_t9

0x0008,

0xf0df,	// (0x0001c687) clock_t_ParamLimits

0xf0df,	// (0x0001c687) clock_t

0x9cb5,	// (0x0001725d) popup_clock_analogue_window_cp02

0x9cb5,	// (0x0001725d) popup_clock_digital_window_cp01

0x9999,	// (0x00016f41) listscroll_help_pane

0x9999,	// (0x00016f41) phob_pre_status_pane

0x9cbd,	// (0x00017265) grid_qdial_pane

0x1577,	// (0x0000eb1f) listscroll_mce_pane

0x9bf4,	// (0x0001719c) bg_notes_pane

0x9cc7,	// (0x0001726f) list_notes_pane

0x1591,	// (0x0000eb39) scroll_pane_cp06

0x9cd5,	// (0x0001727d) bg_calc_paper_pane

0x9ce9,	// (0x00017291) list_calc_pane

0x9d03,	// (0x000172ab) bg_calc_display_pane

0x15a5,	// (0x0000eb4d) calc_display_pane_t1

0x15b7,	// (0x0000eb5f) calc_display_pane_t2

0x9d0f,	// (0x000172b7) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0001c69a) calc_display_pane_t

0x15c9,	// (0x0000eb71) cell_calc_pane_ParamLimits

0x15c9,	// (0x0000eb71) cell_calc_pane

0x9d21,	// (0x000172c9) bg_calc_paper_pane_g1

0x9d2d,	// (0x000172d5) bg_calc_paper_pane_g2

0x9d39,	// (0x000172e1) bg_calc_paper_pane_g3

0x9d45,	// (0x000172ed) bg_calc_paper_pane_g4

0x9d51,	// (0x000172f9) bg_calc_paper_pane_g5

0x15fe,	// (0x0000eba6) bg_calc_paper_pane_g6

0x160d,	// (0x0000ebb5) bg_calc_paper_pane_g7

0x161c,	// (0x0000ebc4) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0001c6a1) bg_calc_paper_pane_g

0x162f,	// (0x0000ebd7) calc_bg_paper_pane_g9

0x1642,	// (0x0000ebea) list_calc_item_pane_ParamLimits

0x1642,	// (0x0000ebea) list_calc_item_pane

0x9d5d,	// (0x00017305) list_calc_item_pane_g1

0x9d6a,	// (0x00017312) list_calc_item_pane_t1_ParamLimits

0x9d6a,	// (0x00017312) list_calc_item_pane_t1

0x1657,	// (0x0000ebff) list_calc_item_pane_t2_ParamLimits

0x1657,	// (0x0000ebff) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0001c6b2) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0001c6b2) list_calc_item_pane_t

0x9c0c,	// (0x000171b4) cell_calc_pane_g1

0x9d7c,	// (0x00017324) grid_highlight_pane_cp02

0x9d9e,	// (0x00017346) bg_calc_display_pane_g1

0x1689,	// (0x0000ec31) bg_calc_display_pane_g2

0xce28,	// (0x0001a3d0) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0001c6bc) bg_calc_display_pane_g

0x1693,	// (0x0000ec3b) cell_qdial_pane_ParamLimits

0x1693,	// (0x0000ec3b) cell_qdial_pane

0x16a7,	// (0x0000ec4f) cell_qdial_pane_g1_ParamLimits

0x16a7,	// (0x0000ec4f) cell_qdial_pane_g1

0x16bd,	// (0x0000ec65) cell_qdial_pane_g2_ParamLimits

0x16bd,	// (0x0000ec65) cell_qdial_pane_g2

0x9da7,	// (0x0001734f) cell_qdial_pane_g3_ParamLimits

0x9da7,	// (0x0001734f) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0001c6c3) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0001c6c3) cell_qdial_pane_g

0x16e3,	// (0x0000ec8b) cell_qdial_pane_t1_ParamLimits

0x16e3,	// (0x0000ec8b) cell_qdial_pane_t1

0x16fb,	// (0x0000eca3) cell_qdial_pane_t2_ParamLimits

0x16fb,	// (0x0000eca3) cell_qdial_pane_t2

0x170e,	// (0x0000ecb6) cell_qdial_pane_t3_ParamLimits

0x170e,	// (0x0000ecb6) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0001c6cc) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0001c6cc) cell_qdial_pane_t

0x9999,	// (0x00016f41) grid_highlight_pane_cp04

0x9db3,	// (0x0001735b) thumbnail_qdial_pane_ParamLimits

0x9db3,	// (0x0001735b) thumbnail_qdial_pane

0x9e0f,	// (0x000173b7) list_help_pane

0x9e18,	// (0x000173c0) scroll_pane_cp02

0x1721,	// (0x0000ecc9) help_list_pane_t1_ParamLimits

0x1721,	// (0x0000ecc9) help_list_pane_t1

0x9e21,	// (0x000173c9) bg_notes_pane_g2

0x9e29,	// (0x000173d1) bg_notes_pane_g3

0x9e31,	// (0x000173d9) notes_bg_pane_g1

0x9e39,	// (0x000173e1) notes_bg_pane_g4

0x9e41,	// (0x000173e9) notes_bg_pane_g5

0x9e49,	// (0x000173f1) notes_bg_pane_g6

0x9e51,	// (0x000173f9) notes_bg_pane_g7

0x9e59,	// (0x00017401) notes_bg_pane_g8

0x9e61,	// (0x00017409) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0001c6ea) notes_bg_pane_g

0x1740,	// (0x0000ece8) list_notes_text_pane_ParamLimits

0x1740,	// (0x0000ece8) list_notes_text_pane

0x9e69,	// (0x00017411) list_notes_text_pane_g1

0x9e72,	// (0x0001741a) list_notes_text_pane_t1

0x1756,	// (0x0000ecfe) listscroll_cale_week_pane

0x1782,	// (0x0000ed2a) bg_cale_heading_pane

0x9e9a,	// (0x00017442) bg_cale_pane_cp01

0x179a,	// (0x0000ed42) cale_week_corner_pane

0x17b9,	// (0x0000ed61) cale_week_day_heading_pane

0x17d6,	// (0x0000ed7e) cale_week_scroll_pane_g1

0x17e9,	// (0x0000ed91) cale_week_scroll_pane_g2

0x1801,	// (0x0000eda9) cale_week_scroll_pane_g3

0x1819,	// (0x0000edc1) cale_week_scroll_pane_g4

0x1831,	// (0x0000edd9) cale_week_scroll_pane_g5

0x1851,	// (0x0000edf9) cale_week_scroll_pane_g6

0x1871,	// (0x0000ee19) cale_week_scroll_pane_g7

0x1891,	// (0x0000ee39) cale_week_scroll_pane_g8

0x18b5,	// (0x0000ee5d) cale_week_scroll_pane_g9

0x18cd,	// (0x0000ee75) cale_week_scroll_pane_g10

0x18e5,	// (0x0000ee8d) cale_week_scroll_pane_g11

0x18fd,	// (0x0000eea5) cale_week_scroll_pane_g12

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g13

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g14

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0001c6f9) cale_week_scroll_pane_g

0x1951,	// (0x0000eef9) cale_week_time_pane

0x1975,	// (0x0000ef1d) grid_cale_week_pane

0x9ec9,	// (0x00017471) scroll_pane_cp08

0x199b,	// (0x0000ef43) cell_cale_week_pane_ParamLimits

0x199b,	// (0x0000ef43) cell_cale_week_pane

0x1a29,	// (0x0000efd1) cale_week_day_heading_pane_t1

0x1a53,	// (0x0000effb) cale_week_day_heading_pane_t2

0x1a82,	// (0x0000f02a) cale_week_day_heading_pane_t3

0x1ab1,	// (0x0000f059) cale_week_day_heading_pane_t4

0x1ae0,	// (0x0000f088) cale_week_day_heading_pane_t5

0x1b17,	// (0x0000f0bf) cale_week_day_heading_pane_t6

0x1b4e,	// (0x0000f0f6) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0001c71a) cale_week_day_heading_pane_t

0x9ee6,	// (0x0001748e) bg_cale_side_pane

0x1b78,	// (0x0000f120) cale_week_time_pane_t1

0x1b92,	// (0x0000f13a) cale_week_time_pane_t2

0x1bac,	// (0x0000f154) cale_week_time_pane_t3

0x1bc6,	// (0x0000f16e) cale_week_time_pane_t4

0x1be0,	// (0x0000f188) cale_week_time_pane_t5

0x1bfa,	// (0x0000f1a2) cale_week_time_pane_t6

0x1c14,	// (0x0000f1bc) cale_week_time_pane_t7

0x1c2e,	// (0x0000f1d6) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0001c729) cale_week_time_pane_t

0x1c4e,	// (0x0000f1f6) cell_cale_week_pane_g2

0x1c72,	// (0x0000f21a) cell_cale_week_pane_g3_ParamLimits

0x1c72,	// (0x0000f21a) cell_cale_week_pane_g3

0x9ef4,	// (0x0001749c) grid_highlight_pane_cp07

0x9efc,	// (0x000174a4) listscroll_gms_pane

0x9f06,	// (0x000174ae) grid_gms_pane

0x9f0f,	// (0x000174b7) listscroll_gms_pane_g1

0x9f17,	// (0x000174bf) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0001c73a) listscroll_gms_pane_g

0x1c8a,	// (0x0000f232) scroll_pane_cp010

0x1c95,	// (0x0000f23d) cell_gms_pane_ParamLimits

0x1c95,	// (0x0000f23d) cell_gms_pane

0x1ca7,	// (0x0000f24f) cell_gms_pane_g1

0x9f1f,	// (0x000174c7) cell_gms_pane_g2

0x9e69,	// (0x00017411) cell_gms_pane_g3

0x9f27,	// (0x000174cf) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0001c73f) cell_gms_pane_g

0x9f30,	// (0x000174d8) grid_highlight_pane_cp09

0x3a80,	// (0x00011028) phob_pre_status_pane_g1

0x3a88,	// (0x00011030) phob_pre_status_pane_g2

0x3a90,	// (0x00011038) phob_pre_status_pane_g3

0x3a98,	// (0x00011040) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x0001cb16) phob_pre_status_pane_g

0x3aa8,	// (0x00011050) phob_pre_status_pane_t1

0x3ab6,	// (0x0001105e) phob_pre_status_pane_t2

0x3ac6,	// (0x0001106e) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x0001cb21) phob_pre_status_pane_t

0x9f38,	// (0x000174e0) bg_list_pane_cp05

0x1cb7,	// (0x0000f25f) grid_vorec_pane

0x1cbf,	// (0x0000f267) vorec_t1

0x1ccd,	// (0x0000f275) vorec_t2

0x1cdb,	// (0x0000f283) vorec_t3

0x1ce9,	// (0x0000f291) vorec_t4

0x8f92,	// (0x0001653a) vorec_t5

0x8fa0,	// (0x00016548) vorec_t6

0x0004,

0xf1a0,	// (0x0001c748) vorec_t

0x8fae,	// (0x00016556) wait_bar_pane_cp01

0x1d05,	// (0x0000f2ad) cell_vorec_pane_ParamLimits

0x1d05,	// (0x0000f2ad) cell_vorec_pane

0x9f40,	// (0x000174e8) cell_vorec_pane_g1

0x9999,	// (0x00016f41) grid_highlight_pane_cp05

0x9578,	// (0x00016b20) cams_zoom_pane

0x9578,	// (0x00016b20) image_vga_pane

0x9c6f,	// (0x00017217) main_camera_pane_g1

0x9c6f,	// (0x00017217) main_camera_pane_g2

0x9c6f,	// (0x00017217) main_camera_pane_g3

0x9c6f,	// (0x00017217) main_camera_pane_g4

0x9c6f,	// (0x00017217) main_camera_pane_g5

0x9c6f,	// (0x00017217) main_camera_pane_g6

0x9c6f,	// (0x00017217) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0001c753) main_camera_pane_g

0x9f4a,	// (0x000174f2) main_camera_pane_t1

0x9f4a,	// (0x000174f2) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0001c764) main_camera_pane_t

0x1d2c,	// (0x0000f2d4) cams_zoom_pane_cp_ParamLimits

0x1d2c,	// (0x0000f2d4) cams_zoom_pane_cp

0x1d60,	// (0x0000f308) image_cif_pane_ParamLimits

0x1d60,	// (0x0000f308) image_cif_pane

0x9509,	// (0x00016ab1) image_subqcif_pane

0x1d72,	// (0x0000f31a) main_video_pane_g1_ParamLimits

0x1d72,	// (0x0000f31a) main_video_pane_g1

0x1da0,	// (0x0000f348) main_video_pane_g2_ParamLimits

0x1da0,	// (0x0000f348) main_video_pane_g2

0x1dda,	// (0x0000f382) main_video_pane_g3_ParamLimits

0x1dda,	// (0x0000f382) main_video_pane_g3

0x1dda,	// (0x0000f382) main_video_pane_g4_ParamLimits

0x1dda,	// (0x0000f382) main_video_pane_g4

0x1e0e,	// (0x0000f3b6) main_video_pane_g5_ParamLimits

0x1e0e,	// (0x0000f3b6) main_video_pane_g5

0x9f5e,	// (0x00017506) main_video_pane_g6_ParamLimits

0x9f5e,	// (0x00017506) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0001c769) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0001c769) main_video_pane_g

0x1e2a,	// (0x0000f3d2) main_video_pane_t1_ParamLimits

0x1e2a,	// (0x0000f3d2) main_video_pane_t1

0x9f78,	// (0x00017520) cams_zoom_pane_g1

0x9f78,	// (0x00017520) cams_zoom_pane_g2

0x9f78,	// (0x00017520) cams_zoom_pane_g3

0x9f78,	// (0x00017520) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0001c778) cams_zoom_pane_g

0x1e82,	// (0x0000f42a) grid_cams_pane

0x1e9c,	// (0x0000f444) linegrid_cams_pane

0x1eaf,	// (0x0000f457) cell_cams_pane_ParamLimits

0x1eaf,	// (0x0000f457) cell_cams_pane

0x9f82,	// (0x0001752a) cams_burst_image_pane

0x9f8a,	// (0x00017532) cell_cams_pane_g1

0x9999,	// (0x00016f41) grid_highlight_pane_cp03

0x9c0c,	// (0x000171b4) mp_bg_pane_g1

0x9509,	// (0x00016ab1) bg_list_pane_cp03

0x9509,	// (0x00016ab1) bg_mp_pane

0x9509,	// (0x00016ab1) grid_mp_pane

0x9f78,	// (0x00017520) media_player_g1

0xa4d9,	// (0x00017a81) media_player_t1

0xa4d9,	// (0x00017a81) media_player_t2

0xa4d9,	// (0x00017a81) media_player_t3

0xa4d9,	// (0x00017a81) media_player_t4

0xa4d9,	// (0x00017a81) media_player_t5

0xa4d9,	// (0x00017a81) media_player_t6

0xa4d9,	// (0x00017a81) media_player_t7

0x0006,

0xf558,	// (0x0001cb00) media_player_t

0x9509,	// (0x00016ab1) wait_bar_pane_cp02

0xf53d,	// (0x0001cae5) main_usb_pane_t

0xa7b4,	// (0x00017d5c) cell_mp_pane

0x9c0c,	// (0x000171b4) cell_mp_pane_g1

0x9999,	// (0x00016f41) grid_highlight_pane_cp06

0x9f92,	// (0x0001753a) grid_skin_colour_pane

0x9f9a,	// (0x00017542) list_highlight_pane_cp03

0x1ecf,	// (0x0000f477) skin_g1

0x9fa2,	// (0x0001754a) skin_t1

0x9fb1,	// (0x00017559) skin_t2

0x0001,

0xf1fe,	// (0x0001c7a6) skin_t

0x1ed7,	// (0x0000f47f) cell_skin_colour_pane_ParamLimits

0x1ed7,	// (0x0000f47f) cell_skin_colour_pane

0x9fbf,	// (0x00017567) cell_skin_colour_pane_g1

0x1f50,	// (0x0000f4f8) call_video_g1_ParamLimits

0x1f50,	// (0x0000f4f8) call_video_g1

0x1f6c,	// (0x0000f514) call_video_g2_ParamLimits

0x1f6c,	// (0x0000f514) call_video_g2

0x0001,

0xf203,	// (0x0001c7ab) call_video_g_ParamLimits

0xf203,	// (0x0001c7ab) call_video_g

0x1fbe,	// (0x0000f566) call_video_uplink_pane_cp1_ParamLimits

0x1fbe,	// (0x0000f566) call_video_uplink_pane_cp1

0x9fd1,	// (0x00017579) call_video_uplink_pane_cp2

0x205d,	// (0x0000f605) video_down_crop_pane_ParamLimits

0x205d,	// (0x0000f605) video_down_crop_pane

0x2146,	// (0x0000f6ee) video_down_pane_ParamLimits

0x2146,	// (0x0000f6ee) video_down_pane

0x9fd9,	// (0x00017581) video_down_subqcif_pane_ParamLimits

0x9fd9,	// (0x00017581) video_down_subqcif_pane

0x9ff1,	// (0x00017599) video_down_subqcif_pane_cp_ParamLimits

0x9ff1,	// (0x00017599) video_down_subqcif_pane_cp

0xa017,	// (0x000175bf) im_reading_pane_ParamLimits

0xa017,	// (0x000175bf) im_reading_pane

0x2256,	// (0x0000f7fe) im_writing_pane_ParamLimits

0x2256,	// (0x0000f7fe) im_writing_pane

0x226c,	// (0x0000f814) im_reading_pane_t1

0xa031,	// (0x000175d9) list_im_pane

0xa042,	// (0x000175ea) scroll_pane_cp07

0x22a6,	// (0x0000f84e) im_writing_pane_t1_ParamLimits

0x22a6,	// (0x0000f84e) im_writing_pane_t1

0xa05b,	// (0x00017603) im_writing_pane_t2_ParamLimits

0xa05b,	// (0x00017603) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0001c7b5) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0001c7b5) im_writing_pane_t

0x9999,	// (0x00016f41) input_focus_pane_cp04

0x9999,	// (0x00016f41) input_focus_pane_cp05

0x22bb,	// (0x0000f863) list_im_single_pane_ParamLimits

0x22bb,	// (0x0000f863) list_im_single_pane

0x22d0,	// (0x0000f878) list_single_im_pane_t1

0x9f38,	// (0x000174e0) blid_accuracy_pane

0x9f38,	// (0x000174e0) blid_compass_pane

0xbda3,	// (0x0001934b) main_location_t1

0xbda3,	// (0x0001934b) main_location_t2

0xbda3,	// (0x0001934b) main_location_t3

0x0002,

0xf567,	// (0x0001cb0f) main_location_t

0x9999,	// (0x00016f41) aid_levels_location

0x9c0c,	// (0x000171b4) blid_accuracy_pane_g1

0x9c0c,	// (0x000171b4) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0001c804) blid_accuracy_pane_g

0xa0a3,	// (0x0001764b) wml_content_pane

0xa0e1,	// (0x00017689) wml_button_pane_ParamLimits

0xa0e1,	// (0x00017689) wml_button_pane

0x22df,	// (0x0000f887) wml_list_single_large_pane_ParamLimits

0x22df,	// (0x0000f887) wml_list_single_large_pane

0x22f4,	// (0x0000f89c) wml_list_single_medium_pane_ParamLimits

0x22f4,	// (0x0000f89c) wml_list_single_medium_pane

0x230b,	// (0x0000f8b3) wml_list_single_small_pane_ParamLimits

0x230b,	// (0x0000f8b3) wml_list_single_small_pane

0xa0f5,	// (0x0001769d) wml_selection_box_pane_ParamLimits

0xa0f5,	// (0x0001769d) wml_selection_box_pane

0xa108,	// (0x000176b0) wml_list_single_pane_t1

0xa117,	// (0x000176bf) wml_list_single_medium_pane_t1

0xa126,	// (0x000176ce) wml_list_single_large_pane_t1

0xa135,	// (0x000176dd) input_focus_pane_cp02_ParamLimits

0xa135,	// (0x000176dd) input_focus_pane_cp02

0xa148,	// (0x000176f0) wml_selection_box_pane_g1

0xa151,	// (0x000176f9) wml_selection_box_pane_t1_ParamLimits

0xa151,	// (0x000176f9) wml_selection_box_pane_t1

0x9bf4,	// (0x0001719c) bg_wml_button_pane_ParamLimits

0x9bf4,	// (0x0001719c) bg_wml_button_pane

0xa169,	// (0x00017711) wml_button_pane_g1

0xa171,	// (0x00017719) wml_button_pane_t1

0xa169,	// (0x00017711) wml_button_bg_pane_g1

0xa181,	// (0x00017729) wml_button_bg_pane_g2

0xa189,	// (0x00017731) wml_button_bg_pane_g3

0xa191,	// (0x00017739) wml_button_bg_pane_g4

0xa199,	// (0x00017741) wml_button_bg_pane_g5

0xa1a1,	// (0x00017749) wml_button_bg_pane_g6

0xa1a9,	// (0x00017751) wml_button_bg_pane_g7

0xa1b1,	// (0x00017759) wml_button_bg_pane_g8

0xa1b9,	// (0x00017761) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0001c7ba) wml_button_bg_pane_g

0x2324,	// (0x0000f8cc) bg_list_pane_cp02

0xa1c1,	// (0x00017769) mce_header_pane_ParamLimits

0xa1c1,	// (0x00017769) mce_header_pane

0xa1d7,	// (0x0001777f) mce_icon_pane

0xa1d7,	// (0x0001777f) mce_image_pane

0xa1e0,	// (0x00017788) mce_text_pane_ParamLimits

0xa1e0,	// (0x00017788) mce_text_pane

0x232c,	// (0x0000f8d4) scroll_pane_cp03

0xa0d9,	// (0x00017681) scroll_pane_cp04

0xa1f3,	// (0x0001779b) scroll_pane_cp05_ParamLimits

0xa1f3,	// (0x0001779b) scroll_pane_cp05

0x2334,	// (0x0000f8dc) mce_header_field_pane_ParamLimits

0x2334,	// (0x0000f8dc) mce_header_field_pane

0x234b,	// (0x0000f8f3) mce_header_field_pane_2_ParamLimits

0x234b,	// (0x0000f8f3) mce_header_field_pane_2

0x2361,	// (0x0000f909) mce_header_field_pane_3

0x2369,	// (0x0000f911) list_single_mce_message_pane_ParamLimits

0x2369,	// (0x0000f911) list_single_mce_message_pane

0x2378,	// (0x0000f920) list_single_mce_smart_pane_ParamLimits

0x2378,	// (0x0000f920) list_single_mce_smart_pane

0xa1ff,	// (0x000177a7) input_focus_pane_cp03

0xa208,	// (0x000177b0) list_header_data_pane

0x2392,	// (0x0000f93a) mce_header_field_pane_t1

0x23a0,	// (0x0000f948) list_single_mce_header_pane_ParamLimits

0x23a0,	// (0x0000f948) list_single_mce_header_pane

0xa210,	// (0x000177b8) list_single_mce_header_pane_t1

0xa21f,	// (0x000177c7) list_single_mce_message_pane_g1

0xa227,	// (0x000177cf) list_single_mce_message_pane_t1

0x23da,	// (0x0000f982) bg_cale_heading_pane_cp01_ParamLimits

0x23da,	// (0x0000f982) bg_cale_heading_pane_cp01

0xa235,	// (0x000177dd) bg_cale_pane_cp02_ParamLimits

0xa235,	// (0x000177dd) bg_cale_pane_cp02

0x2414,	// (0x0000f9bc) cale_month_corner_pane

0x2433,	// (0x0000f9db) cale_month_day_heading_pane_ParamLimits

0x2433,	// (0x0000f9db) cale_month_day_heading_pane

0x2485,	// (0x0000fa2d) cale_month_pane_g1_ParamLimits

0x2485,	// (0x0000fa2d) cale_month_pane_g1

0x24b4,	// (0x0000fa5c) cale_month_pane_g2_ParamLimits

0x24b4,	// (0x0000fa5c) cale_month_pane_g2

0x24e4,	// (0x0000fa8c) cale_month_pane_g3_ParamLimits

0x24e4,	// (0x0000fa8c) cale_month_pane_g3

0x2520,	// (0x0000fac8) cale_month_pane_g4_ParamLimits

0x2520,	// (0x0000fac8) cale_month_pane_g4

0x255c,	// (0x0000fb04) cale_month_pane_g5_ParamLimits

0x255c,	// (0x0000fb04) cale_month_pane_g5

0x25a4,	// (0x0000fb4c) cale_month_pane_g6_ParamLimits

0x25a4,	// (0x0000fb4c) cale_month_pane_g6

0x25f0,	// (0x0000fb98) cale_month_pane_g7_ParamLimits

0x25f0,	// (0x0000fb98) cale_month_pane_g7

0x2640,	// (0x0000fbe8) cale_month_pane_g8_ParamLimits

0x2640,	// (0x0000fbe8) cale_month_pane_g8

0x2694,	// (0x0000fc3c) cale_month_pane_g9_ParamLimits

0x2694,	// (0x0000fc3c) cale_month_pane_g9

0x26e6,	// (0x0000fc8e) cale_month_pane_g10_ParamLimits

0x26e6,	// (0x0000fc8e) cale_month_pane_g10

0x2738,	// (0x0000fce0) cale_month_pane_g11_ParamLimits

0x2738,	// (0x0000fce0) cale_month_pane_g11

0x278a,	// (0x0000fd32) cale_month_pane_g12_ParamLimits

0x278a,	// (0x0000fd32) cale_month_pane_g12

0x27dc,	// (0x0000fd84) cale_month_pane_g13_ParamLimits

0x27dc,	// (0x0000fd84) cale_month_pane_g13

0x000c,

0xf225,	// (0x0001c7cd) cale_month_pane_g_ParamLimits

0xf225,	// (0x0001c7cd) cale_month_pane_g

0x282e,	// (0x0000fdd6) cale_month_week_pane

0x2852,	// (0x0000fdfa) grid_cale_month_pane_ParamLimits

0x2852,	// (0x0000fdfa) grid_cale_month_pane

0x289b,	// (0x0000fe43) cale_month_day_heading_pane_t1

0x28dd,	// (0x0000fe85) cale_month_day_heading_pane_t2

0x2912,	// (0x0000feba) cale_month_day_heading_pane_t3

0x2947,	// (0x0000feef) cale_month_day_heading_pane_t4

0x2984,	// (0x0000ff2c) cale_month_day_heading_pane_t5

0x29c9,	// (0x0000ff71) cale_month_day_heading_pane_t6

0x2a0e,	// (0x0000ffb6) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0001c7e8) cale_month_day_heading_pane_t

0x9ee6,	// (0x0001748e) bg_cale_side_pane_cp01

0x2a5b,	// (0x00010003) cale_month_week_pane_t1

0x2a74,	// (0x0001001c) cale_month_week_pane_t2

0x2a8d,	// (0x00010035) cale_month_week_pane_t3

0x2aa6,	// (0x0001004e) cale_month_week_pane_t4

0x2abf,	// (0x00010067) cale_month_week_pane_t5

0x2ad8,	// (0x00010080) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0001c7f7) cale_month_week_pane_t

0x2af1,	// (0x00010099) cell_cale_month_pane_ParamLimits

0x2af1,	// (0x00010099) cell_cale_month_pane

0xa274,	// (0x0001781c) cell_cale_month_pane_g1

0x2c1f,	// (0x000101c7) cell_cale_month_pane_t1_ParamLimits

0x2c1f,	// (0x000101c7) cell_cale_month_pane_t1

0x9ef4,	// (0x0001749c) grid_highlight_pane_cp08

0x9c0c,	// (0x000171b4) main_smil_g1

0x2c4b,	// (0x000101f3) smil_status_pane

0xa280,	// (0x00017828) smil_text_pane

0xbc7b,	// (0x00019223) bg_popup_call3_rect_pane_g8

0xbc83,	// (0x0001922b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001ca90) bg_popup_call3_rect_pane_g

0xbec0,	// (0x00019468) smil_status_volume_pane_g1

0xa28a,	// (0x00017832) smil_status_pane_t1

0xbef3,	// (0x0001949b) volume_smil_pane

0xa2a1,	// (0x00017849) list_smil_text_pane

0x2c60,	// (0x00010208) scroll_pane_cp011

0x2c6b,	// (0x00010213) smil_text_list_pane_t1_ParamLimits

0x2c6b,	// (0x00010213) smil_text_list_pane_t1

0xa2ab,	// (0x00017853) aid_volume_smil_ParamLimits

0xa2ab,	// (0x00017853) aid_volume_smil

0x9c0c,	// (0x000171b4) smil_volume_pane_g1

0x9c0c,	// (0x000171b4) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0001c804) smil_volume_pane_g

0x1756,	// (0x0000ecfe) listscroll_cale_day_pane

0xa2cd,	// (0x00017875) bg_cale_pane

0xa2e5,	// (0x0001788d) list_cale_pane

0xa308,	// (0x000178b0) scroll_pane_cp09

0xa319,	// (0x000178c1) cale_bg_pane_g1

0xa321,	// (0x000178c9) cale_bg_pane_g2

0xa329,	// (0x000178d1) cale_bg_pane_g3

0xa331,	// (0x000178d9) cale_bg_pane_g4

0xa339,	// (0x000178e1) cale_bg_pane_g5

0xa341,	// (0x000178e9) cale_bg_pane_g6

0xa349,	// (0x000178f1) cale_bg_pane_g7

0xa351,	// (0x000178f9) cale_bg_pane_g8

0xa359,	// (0x00017901) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0001c809) cale_bg_pane_g

0x2cb7,	// (0x0001025f) list_cale_time_pane_ParamLimits

0x2cb7,	// (0x0001025f) list_cale_time_pane

0xa361,	// (0x00017909) list_cale_time_pane_g1_ParamLimits

0xa361,	// (0x00017909) list_cale_time_pane_g1

0xa36d,	// (0x00017915) list_cale_time_pane_g2_ParamLimits

0xa36d,	// (0x00017915) list_cale_time_pane_g2

0x2ccd,	// (0x00010275) list_cale_time_pane_g3_ParamLimits

0x2ccd,	// (0x00010275) list_cale_time_pane_g3

0x2cdb,	// (0x00010283) list_cale_time_pane_g4_ParamLimits

0x2cdb,	// (0x00010283) list_cale_time_pane_g4

0x2ce9,	// (0x00010291) list_cale_time_pane_g5_ParamLimits

0x2ce9,	// (0x00010291) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0001c81c) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0001c81c) list_cale_time_pane_g

0xa387,	// (0x0001792f) list_cale_time_pane_t1_ParamLimits

0xa387,	// (0x0001792f) list_cale_time_pane_t1

0xa3af,	// (0x00017957) list_cale_time_pane_t2_ParamLimits

0xa3af,	// (0x00017957) list_cale_time_pane_t2

0x2f74,	// (0x0001051c) aid_blid_cardinal_pane

0x2fb2,	// (0x0001055a) compass_pane_t4

0xa3d7,	// (0x0001797f) list_cale_time_pane_t4_ParamLimits

0xa3d7,	// (0x0001797f) list_cale_time_pane_t4

0x2fc0,	// (0x00010568) compass_pane_t5

0x2fce,	// (0x00010576) compass_pane_t6

0x2fdc,	// (0x00010584) compass_pane_t7

0xa8ce,	// (0x00017e76) navi_pane_cc_t1

0xaabd,	// (0x00018065) aid_phob_thumbnail_center_pane

0x342e,	// (0x000109d6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0001c829) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0001c829) list_cale_time_pane_t

0x95f0,	// (0x00016b98) bg_popup_window_pane_cp02_ParamLimits

0x95f0,	// (0x00016b98) bg_popup_window_pane_cp02

0xa3ff,	// (0x000179a7) heading_pane_cp01_ParamLimits

0xa3ff,	// (0x000179a7) heading_pane_cp01

0xa40b,	// (0x000179b3) loc_req_pane_ParamLimits

0xa40b,	// (0x000179b3) loc_req_pane

0xa41b,	// (0x000179c3) loc_type_pane_ParamLimits

0xa41b,	// (0x000179c3) loc_type_pane

0xa42d,	// (0x000179d5) loc_type_pane_t1_ParamLimits

0xa42d,	// (0x000179d5) loc_type_pane_t1

0xa43f,	// (0x000179e7) loc_type_pane_t2_ParamLimits

0xa43f,	// (0x000179e7) loc_type_pane_t2

0xa451,	// (0x000179f9) loc_type_pane_t3_ParamLimits

0xa451,	// (0x000179f9) loc_type_pane_t3

0x0002,

0xf288,	// (0x0001c830) loc_type_pane_t_ParamLimits

0xf288,	// (0x0001c830) loc_type_pane_t

0xa463,	// (0x00017a0b) list_loc_req_pane

0xa46d,	// (0x00017a15) scroll_pane_cp012

0x2cf7,	// (0x0001029f) list_single_loc_request_popup_menu_pane_ParamLimits

0x2cf7,	// (0x0001029f) list_single_loc_request_popup_menu_pane

0xa478,	// (0x00017a20) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa478,	// (0x00017a20) list_single_loc_request_popup_menu_pane_g1

0xa484,	// (0x00017a2c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa484,	// (0x00017a2c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0001c837) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0001c837) list_single_loc_request_popup_menu_pane_g

0xa490,	// (0x00017a38) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa490,	// (0x00017a38) list_single_loc_request_popup_menu_pane_t1

0x9bf4,	// (0x0001719c) bg_popup_window_pane_cp03_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_window_pane_cp03

0xa4a6,	// (0x00017a4e) heading_loc_req_pane_ParamLimits

0xa4a6,	// (0x00017a4e) heading_loc_req_pane

0x2d04,	// (0x000102ac) popup_dyc_status_message_window_g1_ParamLimits

0x2d04,	// (0x000102ac) popup_dyc_status_message_window_g1

0x2d18,	// (0x000102c0) popup_dyc_status_message_window_t1_ParamLimits

0x2d18,	// (0x000102c0) popup_dyc_status_message_window_t1

0x2d2d,	// (0x000102d5) popup_dyc_status_message_window_t2_ParamLimits

0x2d2d,	// (0x000102d5) popup_dyc_status_message_window_t2

0x2d42,	// (0x000102ea) popup_dyc_status_message_window_t3_ParamLimits

0x2d42,	// (0x000102ea) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0001c83c) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0001c83c) popup_dyc_status_message_window_t

0x9999,	// (0x00016f41) bg_heading_pane_cp01

0xa4b2,	// (0x00017a5a) heading_loc_req_pane_g1

0xa4ba,	// (0x00017a62) heading_loc_req_pane_g2

0xa4c2,	// (0x00017a6a) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0001c843) heading_loc_req_pane_g

0xa4ca,	// (0x00017a72) heading_loc_req_pane_t1

0xa4e9,	// (0x00017a91) bg_popup_sub_pane_cp01_ParamLimits

0xa4e9,	// (0x00017a91) bg_popup_sub_pane_cp01

0xa4f7,	// (0x00017a9f) popup_cale_events_window_g1_ParamLimits

0xa4f7,	// (0x00017a9f) popup_cale_events_window_g1

0xa517,	// (0x00017abf) popup_cale_events_window_g2_ParamLimits

0xa517,	// (0x00017abf) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0001c865) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0001c865) popup_cale_events_window_g

0xa537,	// (0x00017adf) popup_cale_events_window_t1_ParamLimits

0xa537,	// (0x00017adf) popup_cale_events_window_t1

0xa549,	// (0x00017af1) popup_cale_events_window_t2_ParamLimits

0xa549,	// (0x00017af1) popup_cale_events_window_t2

0xa587,	// (0x00017b2f) popup_cale_events_window_t3_ParamLimits

0xa587,	// (0x00017b2f) popup_cale_events_window_t3

0xa5c1,	// (0x00017b69) popup_cale_events_window_t4_ParamLimits

0xa5c1,	// (0x00017b69) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0001c86a) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0001c86a) popup_cale_events_window_t

0x2d6a,	// (0x00010312) call_type_pane

0x2d7a,	// (0x00010322) popup_call_status_window_g1

0x2d8e,	// (0x00010336) popup_call_status_window_g2

0x2da2,	// (0x0001034a) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0001c873) popup_call_status_window_g

0xa5f7,	// (0x00017b9f) call_type_pane_g1

0xa600,	// (0x00017ba8) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0001c87a) call_type_pane_g

0x9999,	// (0x00016f41) bg_popup_sub_pane_cp02

0xa609,	// (0x00017bb1) listscroll_popup_wml_pane

0xa611,	// (0x00017bb9) list_wml_pane

0xa61b,	// (0x00017bc3) scroll_pane_cp013

0xa626,	// (0x00017bce) list_single_graphic_popup_wml_pane_ParamLimits

0xa626,	// (0x00017bce) list_single_graphic_popup_wml_pane

0x9c0c,	// (0x000171b4) list_single_graphic_popup_wml_pane_g1

0xa63a,	// (0x00017be2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0001c87f) list_single_graphic_popup_wml_pane_g

0xa642,	// (0x00017bea) list_single_graphic_popup_wml_pane_t1

0xa658,	// (0x00017c00) aid_call_pane

0x9bec,	// (0x00017194) popup_clock_analogue_window_g1

0x9bec,	// (0x00017194) popup_clock_analogue_window_g2

0xa660,	// (0x00017c08) popup_clock_analogue_window_g3

0xa660,	// (0x00017c08) popup_clock_analogue_window_g4

0x9c0c,	// (0x000171b4) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0001c884) popup_clock_analogue_window_g

0xa668,	// (0x00017c10) popup_clock_analogue_window_t1

0xa676,	// (0x00017c1e) clock_digital_number_pane_ParamLimits

0xa676,	// (0x00017c1e) clock_digital_number_pane

0xa682,	// (0x00017c2a) clock_digital_number_pane_cp02_ParamLimits

0xa682,	// (0x00017c2a) clock_digital_number_pane_cp02

0xa68e,	// (0x00017c36) clock_digital_number_pane_cp03_ParamLimits

0xa68e,	// (0x00017c36) clock_digital_number_pane_cp03

0xa69a,	// (0x00017c42) clock_digital_number_pane_cp04_ParamLimits

0xa69a,	// (0x00017c42) clock_digital_number_pane_cp04

0xa6a6,	// (0x00017c4e) clock_digital_separator_pane_ParamLimits

0xa6a6,	// (0x00017c4e) clock_digital_separator_pane

0xa6b2,	// (0x00017c5a) popup_clock_digital_window_t1

0x9c0c,	// (0x000171b4) clock_digital_number_pane_g1

0x9c0c,	// (0x000171b4) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0001c804) clock_digital_number_pane_g

0x9c0c,	// (0x000171b4) clock_digital_separator_pane_g1

0x9c0c,	// (0x000171b4) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0001c804) clock_digital_separator_pane_g

0x9999,	// (0x00016f41) bg_popup_window_pane_cp04

0xa6cf,	// (0x00017c77) heading_pane_cp03

0x9f38,	// (0x000174e0) listscroll_popup_gms_pane

0x9999,	// (0x00016f41) grid_large_graphic_popup_pane

0xa6d8,	// (0x00017c80) listscroll_popup_gms_pane_g1

0xa6e1,	// (0x00017c89) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0001c88f) listscroll_popup_gms_pane_g

0xa6ea,	// (0x00017c92) scroll_pane_cp014

0x9c61,	// (0x00017209) cell_large_graphic_popup_pane_ParamLimits

0x9c61,	// (0x00017209) cell_large_graphic_popup_pane

0x9c6f,	// (0x00017217) cell_large_graphic_popup_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) cell_large_graphic_popup_pane_g1

0xa6f3,	// (0x00017c9b) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6f3,	// (0x00017c9b) cell_large_graphic_popup_pane_g2

0xa701,	// (0x00017ca9) cell_large_graphic_popup_pane_g3_ParamLimits

0xa701,	// (0x00017ca9) cell_large_graphic_popup_pane_g3

0xa70f,	// (0x00017cb7) cell_large_graphic_popup_pane_g4_ParamLimits

0xa70f,	// (0x00017cb7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0001c894) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0001c894) cell_large_graphic_popup_pane_g

0x9999,	// (0x00016f41) grid_highlight_pane_cp010

0x9c0c,	// (0x000171b4) bg_popup_call_pane_g1

0xa720,	// (0x00017cc8) list_single_graphic_popup_conf_pane_ParamLimits

0xa720,	// (0x00017cc8) list_single_graphic_popup_conf_pane

0xa733,	// (0x00017cdb) list_highlight_pane_cp01

0xa73c,	// (0x00017ce4) list_single_graphic_popup_conf_pane_g1

0xa744,	// (0x00017cec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0001c89d) list_single_graphic_popup_conf_pane_g

0xa74c,	// (0x00017cf4) list_single_graphic_popup_conf_pane_t1

0xa75a,	// (0x00017d02) linegrid_cams_pane_g1

0x2db1,	// (0x00010359) linegrid_cams_pane_g2

0x9e69,	// (0x00017411) linegrid_cams_pane_g3

0xa763,	// (0x00017d0b) linegrid_cams_pane_g4

0x2dba,	// (0x00010362) linegrid_cams_pane_g5

0x2dc3,	// (0x0001036b) linegrid_cams_pane_g6

0x9f27,	// (0x000174cf) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0001c8a2) linegrid_cams_pane_g

0xa76c,	// (0x00017d14) popup_clock_analogue_window

0xa76c,	// (0x00017d14) popup_clock_digital_window

0x9999,	// (0x00016f41) popup_phob_thumbnail_window

0x9c0c,	// (0x000171b4) call_video_uplink_pane_g1

0xa775,	// (0x00017d1d) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0001c8b1) call_video_uplink_pane_g

0xa77d,	// (0x00017d25) video_uplink_pane

0xa785,	// (0x00017d2d) mce_image_pane_g1

0x2dce,	// (0x00010376) mce_image_pane_g2

0x2dd6,	// (0x0001037e) mce_image_pane_g3

0x2dde,	// (0x00010386) mce_image_pane_g4

0x2de6,	// (0x0001038e) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0001c8b6) mce_image_pane_g

0xa78f,	// (0x00017d37) control_top_pane_stacon_cp01_ParamLimits

0xa78f,	// (0x00017d37) control_top_pane_stacon_cp01

0xa7a3,	// (0x00017d4b) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7a3,	// (0x00017d4b) uni_indicator_pane_stacon_cp01

0xa7b4,	// (0x00017d5c) bg_popup_sub_pane_cp03

0x2dee,	// (0x00010396) chi_dic_find_pane

0x2df6,	// (0x0001039e) listscroll_chi_dic_pane

0x2dff,	// (0x000103a7) main_pane_chidic_g1

0x2e12,	// (0x000103ba) chi_dic_find_pane_t1

0xa7be,	// (0x00017d66) find_chidic_pane

0xa7c7,	// (0x00017d6f) chi_dic_list_pane_ParamLimits

0xa7c7,	// (0x00017d6f) chi_dic_list_pane

0xa7d8,	// (0x00017d80) scroll_pane_cp020

0x2e20,	// (0x000103c8) find_chidic_pane_t1

0x9999,	// (0x00016f41) input_focus_pane_cp06

0x2e2f,	// (0x000103d7) list_chi_dic_pane_ParamLimits

0x2e2f,	// (0x000103d7) list_chi_dic_pane

0x2e41,	// (0x000103e9) list_chi_dic_pane_t1_ParamLimits

0x2e41,	// (0x000103e9) list_chi_dic_pane_t1

0x9999,	// (0x00016f41) list_highlight_pane_cp020

0xa7e0,	// (0x00017d88) bg_cale_heading_pane_g1

0x2e54,	// (0x000103fc) bg_cale_heading_pane_g2

0x2e5c,	// (0x00010404) bg_cale_heading_pane_g3

0x2e64,	// (0x0001040c) bg_cale_heading_pane_g4

0x2e6e,	// (0x00010416) bg_cale_heading_pane_g5

0x2e78,	// (0x00010420) bg_cale_heading_pane_g6

0x2e80,	// (0x00010428) bg_cale_heading_pane_g7

0x2e88,	// (0x00010430) bg_cale_heading_pane_g8

0x2e92,	// (0x0001043a) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0001c8c1) bg_cale_heading_pane_g

0xa7e0,	// (0x00017d88) bg_cale_side_pane_g1

0x2e9c,	// (0x00010444) bg_cale_side_pane_g2

0x2ea4,	// (0x0001044c) bg_cale_side_pane_g3

0x2eac,	// (0x00010454) bg_cale_side_pane_g4

0x2eb4,	// (0x0001045c) bg_cale_side_pane_g5

0x2ebc,	// (0x00010464) bg_cale_side_pane_g6

0x2ec4,	// (0x0001046c) bg_cale_side_pane_g7

0x2ecc,	// (0x00010474) bg_cale_side_pane_g8

0x2ed4,	// (0x0001047c) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0001c8d4) bg_cale_side_pane_g

0x2edc,	// (0x00010484) popup_call_status_window_ParamLimits

0x2edc,	// (0x00010484) popup_call_status_window

0xa7e8,	// (0x00017d90) stacon_top_pane

0xa7f0,	// (0x00017d98) status_pane_ParamLimits

0xa7f0,	// (0x00017d98) status_pane

0xa805,	// (0x00017dad) status_small_pane

0xa80d,	// (0x00017db5) control_pane

0x9999,	// (0x00016f41) stacon_bottom_pane

0xa815,	// (0x00017dbd) list_single_mce_smart_pane_t1_ParamLimits

0xa815,	// (0x00017dbd) list_single_mce_smart_pane_t1

0xa828,	// (0x00017dd0) list_single_mce_smart_pane_t2_ParamLimits

0xa828,	// (0x00017dd0) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0001c8e7) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0001c8e7) list_single_mce_smart_pane_t

0x2f23,	// (0x000104cb) compass_pane

0x2f2c,	// (0x000104d4) main_location2_pane_t1

0x2f3e,	// (0x000104e6) main_location2_pane_t2

0x2f50,	// (0x000104f8) main_location2_pane_t3

0x0003,

0xf344,	// (0x0001c8ec) main_location2_pane_t

0xa847,	// (0x00017def) compass_pane_g1_ParamLimits

0xa847,	// (0x00017def) compass_pane_g1

0x2f94,	// (0x0001053c) compass_pane_t1

0x2fa3,	// (0x0001054b) compass_pane_t2

0x0005,

0xf34d,	// (0x0001c8f5) compass_pane_t

0x2fea,	// (0x00010592) text_secondary_cp61

0xa8c5,	// (0x00017e6d) navi_pane_cams_g5

0xa941,	// (0x00017ee9) navi_pane_im_t1

0xa94f,	// (0x00017ef7) navi_pane_mp_g1_ParamLimits

0xa94f,	// (0x00017ef7) navi_pane_mp_g1

0xa963,	// (0x00017f0b) navi_pane_mp_g2_ParamLimits

0xa963,	// (0x00017f0b) navi_pane_mp_g2

0xa96f,	// (0x00017f17) navi_pane_mp_g3_ParamLimits

0xa96f,	// (0x00017f17) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0001c909) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0001c909) navi_pane_mp_g

0xa97b,	// (0x00017f23) navi_pane_mp_t1

0xa989,	// (0x00017f31) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0001c910) navi_pane_mp_t

0xa9f4,	// (0x00017f9c) navi_pane_vt_g1

0xa97b,	// (0x00017f23) navi_pane_vt_t1

0xa9fc,	// (0x00017fa4) navi_slider_pane

0x9f38,	// (0x000174e0) zooming_pane

0xaa0c,	// (0x00017fb4) navi_slider_pane_g1

0xaa15,	// (0x00017fbd) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0001c917) navi_slider_pane_g

0xaa42,	// (0x00017fea) aid_levels_zoom

0xaa4a,	// (0x00017ff2) zooming_pane_g1

0xaa52,	// (0x00017ffa) zooming_pane_g2

0xaa52,	// (0x00017ffa) zooming_pane_g3

0x0002,

0xf37e,	// (0x0001c926) zooming_pane_g

0xaa5a,	// (0x00018002) level_10_zoom

0xaa63,	// (0x0001800b) level_11_zoom

0xaa6c,	// (0x00018014) level_1_zoom

0xaa75,	// (0x0001801d) level_2_zoom

0xaa7e,	// (0x00018026) level_3_zoom

0xaa87,	// (0x0001802f) level_4_zoom

0xaa90,	// (0x00018038) level_5_zoom

0xaa99,	// (0x00018041) level_6_zoom

0xaaa2,	// (0x0001804a) level_7_zoom

0xaaab,	// (0x00018053) level_8_zoom

0xaab4,	// (0x0001805c) level_9_zoom

0xaac5,	// (0x0001806d) popup_phob_thumbnail_window_g1

0xaacd,	// (0x00018075) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0001c92d) popup_phob_thumbnail_window_g

0x3ad6,	// (0x0001107e) level_1_location

0x3ade,	// (0x00011086) level_2_location

0x3ae6,	// (0x0001108e) level_3_location

0x3aee,	// (0x00011096) level_4_location

0x9f38,	// (0x000174e0) level_5_location

0x303b,	// (0x000105e3) mce_icon_pane_g1

0x3043,	// (0x000105eb) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0001c932) mce_icon_pane_g

0xaad5,	// (0x0001807d) main_mup_pane_g1_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g1

0xaad5,	// (0x0001807d) main_mup_pane_g2_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g2

0xaad5,	// (0x0001807d) main_mup_pane_g3_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g3

0xaad5,	// (0x0001807d) main_mup_pane_g4_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g4

0xaad5,	// (0x0001807d) main_mup_pane_g5_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g5

0xaad5,	// (0x0001807d) main_mup_pane_g6_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g6

0xaad5,	// (0x0001807d) main_mup_pane_g7_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g7

0xaad5,	// (0x0001807d) main_mup_pane_g8_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g8

0xaad5,	// (0x0001807d) main_mup_pane_g9_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g9

0xaad5,	// (0x0001807d) main_mup_pane_g10_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g10

0xaad5,	// (0x0001807d) main_mup_pane_g11_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g11

0x9c6f,	// (0x00017217) main_mup_pane_g12_ParamLimits

0x9c6f,	// (0x00017217) main_mup_pane_g12

0xaad5,	// (0x0001807d) main_mup_pane_g13_ParamLimits

0xaad5,	// (0x0001807d) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0001c937) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0001c937) main_mup_pane_g

0xaae3,	// (0x0001808b) main_mup_pane_t1_ParamLimits

0xaae3,	// (0x0001808b) main_mup_pane_t1

0xaae3,	// (0x0001808b) main_mup_pane_t2_ParamLimits

0xaae3,	// (0x0001808b) main_mup_pane_t2

0xaae3,	// (0x0001808b) main_mup_pane_t3_ParamLimits

0xaae3,	// (0x0001808b) main_mup_pane_t3

0x9f4a,	// (0x000174f2) main_mup_pane_t4_ParamLimits

0x9f4a,	// (0x000174f2) main_mup_pane_t4

0x9f4a,	// (0x000174f2) main_mup_pane_t5_ParamLimits

0x9f4a,	// (0x000174f2) main_mup_pane_t5

0xaaf7,	// (0x0001809f) main_mup_pane_t6_ParamLimits

0xaaf7,	// (0x0001809f) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0001c952) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0001c952) main_mup_pane_t

0x9c61,	// (0x00017209) mup_progress_pane_ParamLimits

0x9c61,	// (0x00017209) mup_progress_pane

0xab0b,	// (0x000180b3) mup_visualizer_pane_ParamLimits

0xab0b,	// (0x000180b3) mup_visualizer_pane

0xab0b,	// (0x000180b3) mup_volume_pane_ParamLimits

0xab0b,	// (0x000180b3) mup_volume_pane

0x9c7d,	// (0x00017225) mup_visualizer_pane_g1_ParamLimits

0x9c7d,	// (0x00017225) mup_visualizer_pane_g1

0xab19,	// (0x000180c1) mup_visualizer_pane_g2_ParamLimits

0xab19,	// (0x000180c1) mup_visualizer_pane_g2

0x9c6f,	// (0x00017217) mup_visualizer_pane_g3_ParamLimits

0x9c6f,	// (0x00017217) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0001c95f) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0001c95f) mup_visualizer_pane_g

0x9f78,	// (0x00017520) mup_volume_pane_g1

0x9f78,	// (0x00017520) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0001c966) mup_volume_pane_g

0x9f78,	// (0x00017520) mup_progress_pane_g1

0x9f78,	// (0x00017520) mup_progress_pane_g2

0x9f78,	// (0x00017520) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0001c96b) mup_progress_pane_g

0x9999,	// (0x00016f41) bg_popup_window_pane_cp05

0xab27,	// (0x000180cf) heading_pane_cp02_ParamLimits

0xab27,	// (0x000180cf) heading_pane_cp02

0xab41,	// (0x000180e9) list_popup_blid_pane

0xab49,	// (0x000180f1) list_blid_sat_info_pane_ParamLimits

0xab49,	// (0x000180f1) list_blid_sat_info_pane

0xab5c,	// (0x00018104) list_blid_sat_info_pane_g1

0xab64,	// (0x0001810c) list_blid_sat_info_pane_t1

0x3143,	// (0x000106eb) mup_equalizer_pane_ParamLimits

0x3143,	// (0x000106eb) mup_equalizer_pane

0x315c,	// (0x00010704) mup_equalizer_pane_cp1_ParamLimits

0x315c,	// (0x00010704) mup_equalizer_pane_cp1

0x3179,	// (0x00010721) mup_equalizer_pane_cp2_ParamLimits

0x3179,	// (0x00010721) mup_equalizer_pane_cp2

0x3196,	// (0x0001073e) mup_equalizer_pane_cp3_ParamLimits

0x3196,	// (0x0001073e) mup_equalizer_pane_cp3

0x31b7,	// (0x0001075f) mup_equalizer_pane_cp4_ParamLimits

0x31b7,	// (0x0001075f) mup_equalizer_pane_cp4

0x31d8,	// (0x00010780) mup_equalizer_pane_cp5

0x31ec,	// (0x00010794) mup_equalizer_pane_cp6

0x3200,	// (0x000107a8) mup_equalizer_pane_cp7

0xbcfb,	// (0x000192a3) bg_popup_call_poc_act_pane_g9

0xbd03,	// (0x000192ab) bg_popup_call_poc_act_pane_g10

0xbd0b,	// (0x000192b3) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bf4,	// (0x0001719c) mup_scale_pane

0x9c0c,	// (0x000171b4) mup_scale_pane_g1

0xab72,	// (0x0001811a) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0001c987) mup_scale_pane_g

0xab96,	// (0x0001813e) msg_data_pane

0xab9e,	// (0x00018146) scroll_pane_cp017

0x3226,	// (0x000107ce) bg_list_pane_cp04_ParamLimits

0x3226,	// (0x000107ce) bg_list_pane_cp04

0xaba6,	// (0x0001814e) msg_data_pane_g1

0x3246,	// (0x000107ee) msg_data_pane_g2

0x324e,	// (0x000107f6) msg_data_pane_g3

0x3256,	// (0x000107fe) msg_data_pane_g4

0x325e,	// (0x00010806) msg_data_pane_g5

0x3266,	// (0x0001080e) msg_data_pane_g6

0x326e,	// (0x00010816) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0001c996) msg_data_pane_g

0x3276,	// (0x0001081e) msg_text_pane_ParamLimits

0x3276,	// (0x0001081e) msg_text_pane

0x32a4,	// (0x0001084c) qrid_highlight_pane_cp011_ParamLimits

0x32a4,	// (0x0001084c) qrid_highlight_pane_cp011

0x9999,	// (0x00016f41) msg_body_pane

0x9999,	// (0x00016f41) msg_header_pane

0xabb7,	// (0x0001815f) input_focus_pane_cp07

0x32c8,	// (0x00010870) msg_header_pane_t1_ParamLimits

0x32c8,	// (0x00010870) msg_header_pane_t1

0x32de,	// (0x00010886) msg_header_pane_t2_ParamLimits

0x32de,	// (0x00010886) msg_header_pane_t2

0x0001,

0xf402,	// (0x0001c9aa) msg_header_pane_t_ParamLimits

0xf402,	// (0x0001c9aa) msg_header_pane_t

0xabcc,	// (0x00018174) msg_body_pane_g1

0x32f5,	// (0x0001089d) msg_body_pane_t1_ParamLimits

0x32f5,	// (0x0001089d) msg_body_pane_t1

0x3326,	// (0x000108ce) msg_body_pane_t2_ParamLimits

0x3326,	// (0x000108ce) msg_body_pane_t2

0x3338,	// (0x000108e0) msg_body_pane_t3_ParamLimits

0x3338,	// (0x000108e0) msg_body_pane_t3

0x0002,

0xf407,	// (0x0001c9af) msg_body_pane_t_ParamLimits

0xf407,	// (0x0001c9af) msg_body_pane_t

0x3384,	// (0x0001092c) main_viewer_pane_g1_ParamLimits

0x3384,	// (0x0001092c) main_viewer_pane_g1

0x3392,	// (0x0001093a) main_viewer_pane_g2_ParamLimits

0x3392,	// (0x0001093a) main_viewer_pane_g2

0x33a0,	// (0x00010948) main_viewer_pane_g3_ParamLimits

0x33a0,	// (0x00010948) main_viewer_pane_g3

0x33af,	// (0x00010957) main_viewer_pane_g4_ParamLimits

0x33af,	// (0x00010957) main_viewer_pane_g4

0xabec,	// (0x00018194) main_viewer_pane_g5_ParamLimits

0xabec,	// (0x00018194) main_viewer_pane_g5

0xabec,	// (0x00018194) main_viewer_pane_g7_ParamLimits

0xabec,	// (0x00018194) main_viewer_pane_g7

0xabfe,	// (0x000181a6) main_viewer_pane_g8_ParamLimits

0xabfe,	// (0x000181a6) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0001c9bf) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0001c9bf) main_viewer_pane_g

0xac16,	// (0x000181be) viewer_content_pane_ParamLimits

0xac16,	// (0x000181be) viewer_content_pane

0x33eb,	// (0x00010993) main_postcard_pane_g1_ParamLimits

0x33eb,	// (0x00010993) main_postcard_pane_g1

0x3401,	// (0x000109a9) main_postcard_pane_g2_ParamLimits

0x3401,	// (0x000109a9) main_postcard_pane_g2

0x3417,	// (0x000109bf) main_postcard_pane_g3_ParamLimits

0x3417,	// (0x000109bf) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0001c9d0) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0001c9d0) main_postcard_pane_g

0x342e,	// (0x000109d6) main_postcard_pane_g4

0xbed3,	// (0x0001947b) smil_status_volume_pane_g2

0x3471,	// (0x00010a19) postcard_pane_ParamLimits

0x3471,	// (0x00010a19) postcard_pane

0xac24,	// (0x000181cc) postcard_pane_g1_ParamLimits

0xac24,	// (0x000181cc) postcard_pane_g1

0x34b3,	// (0x00010a5b) postcard_pane_g2_ParamLimits

0x34b3,	// (0x00010a5b) postcard_pane_g2

0x34bf,	// (0x00010a67) postcard_pane_g3_ParamLimits

0x34bf,	// (0x00010a67) postcard_pane_g3

0xac32,	// (0x000181da) postcard_pane_g4_ParamLimits

0xac32,	// (0x000181da) postcard_pane_g4

0x34cb,	// (0x00010a73) postcard_pane_g5_ParamLimits

0x34cb,	// (0x00010a73) postcard_pane_g5

0x34e0,	// (0x00010a88) postcard_pane_g6_ParamLimits

0x34e0,	// (0x00010a88) postcard_pane_g6

0xac24,	// (0x000181cc) postcard_pane_g7_ParamLimits

0xac24,	// (0x000181cc) postcard_pane_g7

0x0006,

0xf435,	// (0x0001c9dd) postcard_pane_g_ParamLimits

0xf435,	// (0x0001c9dd) postcard_pane_g

0x34f4,	// (0x00010a9c) main_mp2_pane_g1_ParamLimits

0x34f4,	// (0x00010a9c) main_mp2_pane_g1

0x3500,	// (0x00010aa8) main_mp2_pane_g2_ParamLimits

0x3500,	// (0x00010aa8) main_mp2_pane_g2

0x350c,	// (0x00010ab4) main_mp2_pane_g3_ParamLimits

0x350c,	// (0x00010ab4) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0001c9ec) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0001c9ec) main_mp2_pane_g

0x3518,	// (0x00010ac0) main_mp2_pane_t1_ParamLimits

0x3518,	// (0x00010ac0) main_mp2_pane_t1

0x352d,	// (0x00010ad5) main_mp2_pane_t2_ParamLimits

0x352d,	// (0x00010ad5) main_mp2_pane_t2

0x353f,	// (0x00010ae7) main_mp2_pane_t3_ParamLimits

0x353f,	// (0x00010ae7) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0001c9f3) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0001c9f3) main_mp2_pane_t

0xac40,	// (0x000181e8) pec_content_pane_ParamLimits

0xac40,	// (0x000181e8) pec_content_pane

0xa0d9,	// (0x00017681) scroll_pane_cp015

0xac52,	// (0x000181fa) pec_attribute_pane_ParamLimits

0xac52,	// (0x000181fa) pec_attribute_pane

0x3551,	// (0x00010af9) pec_content_pane_g1_ParamLimits

0x3551,	// (0x00010af9) pec_content_pane_g1

0xac62,	// (0x0001820a) pec_content_pane_t1_ParamLimits

0xac62,	// (0x0001820a) pec_content_pane_t1

0xac74,	// (0x0001821c) pec_content_pane_t2_ParamLimits

0xac74,	// (0x0001821c) pec_content_pane_t2

0x0001,

0xf452,	// (0x0001c9fa) pec_content_pane_t_ParamLimits

0xf452,	// (0x0001c9fa) pec_content_pane_t

0x355d,	// (0x00010b05) list_single_graphic_pane_cp01_ParamLimits

0x355d,	// (0x00010b05) list_single_graphic_pane_cp01

0x9bf4,	// (0x0001719c) bg_popup_sub_pane_cp04

0xac86,	// (0x0001822e) popup_mup_playback_window_g1

0xac92,	// (0x0001823a) popup_mup_playback_window_t1

0xaca7,	// (0x0001824f) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0001c9ff) popup_mup_playback_window_t

0xacde,	// (0x00018286) main_image_pane_g1_ParamLimits

0xacde,	// (0x00018286) main_image_pane_g1

0xad21,	// (0x000182c9) scroll_pane_cp018_ParamLimits

0xad21,	// (0x000182c9) scroll_pane_cp018

0xad39,	// (0x000182e1) scroll_pane_cp016_ParamLimits

0xad39,	// (0x000182e1) scroll_pane_cp016

0x362b,	// (0x00010bd3) smil2_image_pane_ParamLimits

0x362b,	// (0x00010bd3) smil2_image_pane

0x365b,	// (0x00010c03) smil2_root_pane_ParamLimits

0x365b,	// (0x00010c03) smil2_root_pane

0x3693,	// (0x00010c3b) smil2_text_pane_ParamLimits

0x3693,	// (0x00010c3b) smil2_text_pane

0x9999,	// (0x00016f41) bg_list_pane_cp06

0xad75,	// (0x0001831d) grid_radio_pane

0x9999,	// (0x00016f41) bg_popup_window_pane_cp06

0xad7d,	// (0x00018325) main_fmradio_pane_t1

0xbd53,	// (0x000192fb) heading_pane_cp04

0xad8b,	// (0x00018333) main_fmradio_pane_t2

0xbd5b,	// (0x00019303) popup_cale_lunar_info_window_g1

0xad99,	// (0x00018341) main_fmradio_pane_t3

0xbd63,	// (0x0001930b) popup_cale_lunar_info_window_g2

0xada7,	// (0x0001834f) main_fmradio_pane_t4

0x0001,

0xadb5,	// (0x0001835d) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x0001caf2) popup_cale_lunar_info_window_g

0xf46c,	// (0x0001ca14) main_fmradio_pane_t

0xadc3,	// (0x0001836b) wait_bar_pane_cp03

0xadcb,	// (0x00018373) cell_fmradio_pane_ParamLimits

0xadcb,	// (0x00018373) cell_fmradio_pane

0xac24,	// (0x000181cc) cell_fmradio_pane_g1_ParamLimits

0xac24,	// (0x000181cc) cell_fmradio_pane_g1

0x9999,	// (0x00016f41) grid_highlight_pane_cp011

0xadde,	// (0x00018386) poc_content_pane_ParamLimits

0xadde,	// (0x00018386) poc_content_pane

0xadf0,	// (0x00018398) scroll_pane_cp019

0x3713,	// (0x00010cbb) popup_call_poc_act_window_ParamLimits

0x3713,	// (0x00010cbb) popup_call_poc_act_window

0x3737,	// (0x00010cdf) popup_call_poc_inact_window_ParamLimits

0x3737,	// (0x00010cdf) popup_call_poc_inact_window

0xf50e,	// (0x0001cab6) bg_popup_call_poc_act_pane_g

0xbd13,	// (0x000192bb) bg_popup_call_poc_inact_pane_g1

0xbd1b,	// (0x000192c3) bg_popup_call_poc_inact_pane_g2

0xadf8,	// (0x000183a0) popup_call_poc_act_window_g2

0xbd23,	// (0x000192cb) bg_popup_call_poc_inact_pane_g3

0xbca3,	// (0x0001924b) bg_popup_call_poc_inact_pane_g4

0xbd2b,	// (0x000192d3) bg_popup_call_poc_inact_pane_g5

0xae00,	// (0x000183a8) popup_call_poc_act_window_t1_ParamLimits

0xae00,	// (0x000183a8) popup_call_poc_act_window_t1

0xae28,	// (0x000183d0) popup_call_poc_act_window_t2_ParamLimits

0xae28,	// (0x000183d0) popup_call_poc_act_window_t2

0xae50,	// (0x000183f8) popup_call_poc_act_window_t3_ParamLimits

0xae50,	// (0x000183f8) popup_call_poc_act_window_t3

0xae78,	// (0x00018420) popup_call_poc_act_window_t4_ParamLimits

0xae78,	// (0x00018420) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0001ca1f) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0001ca1f) popup_call_poc_act_window_t

0xbd33,	// (0x000192db) bg_popup_call_poc_inact_pane_g6

0xbd3b,	// (0x000192e3) bg_popup_call_poc_inact_pane_g7

0xbd43,	// (0x000192eb) bg_popup_call_poc_inact_pane_g8

0xae8a,	// (0x00018432) popup_call_poc_inact_window_g2

0xbd4b,	// (0x000192f3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x0001cacd) bg_popup_call_poc_inact_pane_g

0xae92,	// (0x0001843a) popup_call_poc_inact_window_t1_ParamLimits

0xae92,	// (0x0001843a) popup_call_poc_inact_window_t1

0xaea7,	// (0x0001844f) popup_call_poc_inact_window_t2_ParamLimits

0xaea7,	// (0x0001844f) popup_call_poc_inact_window_t2

0xaebc,	// (0x00018464) popup_call_poc_inact_window_t3_ParamLimits

0xaebc,	// (0x00018464) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0001ca28) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0001ca28) popup_call_poc_inact_window_t

0xbe4b,	// (0x000193f3) context_pane_ParamLimits

0x3fa0,	// (0x00011548) signal_pane_ParamLimits

0x9f38,	// (0x000174e0) main_call2_pane

0xbe24,	// (0x000193cc) popup_phob_thumbnail2_window_ParamLimits

0xbe24,	// (0x000193cc) popup_phob_thumbnail2_window

0xabd4,	// (0x0001817c) aid_hotspot_pointer_arrow_pane

0xabdc,	// (0x00018184) aid_hotspot_pointer_hand_pane

0x3aa0,	// (0x00011048) phob_pre_status_pane_g5

0x9578,	// (0x00016b20) cams_zoom_pane_ParamLimits

0x9578,	// (0x00016b20) image_vga_pane_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g2_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g3_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g4_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g5_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g6_ParamLimits

0x9c6f,	// (0x00017217) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0001c753) main_camera_pane_g_ParamLimits

0x9f4a,	// (0x000174f2) main_camera_pane_t1_ParamLimits

0x9f4a,	// (0x000174f2) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0001c764) main_camera_pane_t_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_preview_window_pane_cp01

0xaed1,	// (0x00018479) popup_phob_thumbnail2_window_g1_ParamLimits

0xaed1,	// (0x00018479) popup_phob_thumbnail2_window_g1

0x9999,	// (0x00016f41) call2_cli_visual_pane

0x376b,	// (0x00010d13) popup_call2_audio_conf_window_ParamLimits

0x376b,	// (0x00010d13) popup_call2_audio_conf_window

0x378b,	// (0x00010d33) popup_call2_audio_first_window_ParamLimits

0x378b,	// (0x00010d33) popup_call2_audio_first_window

0x3821,	// (0x00010dc9) popup_call2_audio_in_window_ParamLimits

0x3821,	// (0x00010dc9) popup_call2_audio_in_window

0x3869,	// (0x00010e11) popup_call2_audio_out_window_ParamLimits

0x3869,	// (0x00010e11) popup_call2_audio_out_window

0x38d3,	// (0x00010e7b) popup_call2_audio_second_window_ParamLimits

0x38d3,	// (0x00010e7b) popup_call2_audio_second_window

0x3939,	// (0x00010ee1) popup_call2_audio_wait_window_ParamLimits

0x3939,	// (0x00010ee1) popup_call2_audio_wait_window

0x9999,	// (0x00016f41) bg_popup_call2_act_pane_cp03

0x9bd6,	// (0x0001717e) list_conf_pane_cp

0xaedd,	// (0x00018485) popup_call2_audio_conf_window_t1

0xaeeb,	// (0x00018493) list_single_graphic_popup_conf2_pane_ParamLimits

0xaeeb,	// (0x00018493) list_single_graphic_popup_conf2_pane

0xa733,	// (0x00017cdb) list_highlight_pane_cp04

0xaefe,	// (0x000184a6) list_single_graphic_popup_conf2_pane_g1

0xa744,	// (0x00017cec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0001ca2f) list_single_graphic_popup_conf2_pane_g

0xaf08,	// (0x000184b0) list_single_graphic_popup_conf2_pane_t1

0xaf16,	// (0x000184be) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf16,	// (0x000184be) bg_popup_call2_act_pane_cp01

0xafa0,	// (0x00018548) call_type_pane_cp05_ParamLimits

0xafa0,	// (0x00018548) call_type_pane_cp05

0xaff4,	// (0x0001859c) popup_call2_audio_second_window_g1_ParamLimits

0xaff4,	// (0x0001859c) popup_call2_audio_second_window_g1

0xb048,	// (0x000185f0) popup_call2_audio_second_window_g2_ParamLimits

0xb048,	// (0x000185f0) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0001ca34) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0001ca34) popup_call2_audio_second_window_g

0xb0ad,	// (0x00018655) popup_call2_audio_second_window_t1_ParamLimits

0xb0ad,	// (0x00018655) popup_call2_audio_second_window_t1

0xb168,	// (0x00018710) popup_call2_audio_second_window_t2_ParamLimits

0xb168,	// (0x00018710) popup_call2_audio_second_window_t2

0xb1bb,	// (0x00018763) popup_call2_audio_second_window_t3_ParamLimits

0xb1bb,	// (0x00018763) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0001ca3b) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0001ca3b) popup_call2_audio_second_window_t

0x9999,	// (0x00016f41) bg_popup_call2_in_pane_cp02

0x99a3,	// (0x00016f4b) call_type_pane_cp04

0x3973,	// (0x00010f1b) popup_call2_audio_wait_window_g1

0x397b,	// (0x00010f23) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0001ca44) popup_call2_audio_wait_window_g

0x99bb,	// (0x00016f63) popup_call2_audio_wait_window_t3

0xb2ae,	// (0x00018856) bg_popup_call2_act_pane_ParamLimits

0xb2ae,	// (0x00018856) bg_popup_call2_act_pane

0xb36e,	// (0x00018916) call_type_pane_cp03_ParamLimits

0xb36e,	// (0x00018916) call_type_pane_cp03

0xb3d2,	// (0x0001897a) popup_call2_audio_first_window_g1_ParamLimits

0xb3d2,	// (0x0001897a) popup_call2_audio_first_window_g1

0xb442,	// (0x000189ea) popup_call2_audio_first_window_g2_ParamLimits

0xb442,	// (0x000189ea) popup_call2_audio_first_window_g2

0xb4a6,	// (0x00018a4e) popup_call2_audio_first_window_g3_ParamLimits

0xb4a6,	// (0x00018a4e) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0001ca49) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0001ca49) popup_call2_audio_first_window_g

0xb52e,	// (0x00018ad6) popup_call2_audio_first_window_t1_ParamLimits

0xb52e,	// (0x00018ad6) popup_call2_audio_first_window_t1

0xb631,	// (0x00018bd9) popup_call2_audio_first_window_t4_ParamLimits

0xb631,	// (0x00018bd9) popup_call2_audio_first_window_t4

0xb714,	// (0x00018cbc) popup_call2_audio_first_window_t5_ParamLimits

0xb714,	// (0x00018cbc) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0001ca54) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0001ca54) popup_call2_audio_first_window_t

0x9bec,	// (0x00017194) bg_popup_call2_act_pane_g1

0xbd6b,	// (0x00019313) popup_cale_lunar_info_window_t1

0xbd79,	// (0x00019321) popup_cale_lunar_info_window_t2

0xbd87,	// (0x0001932f) popup_cale_lunar_info_window_t3

0x9999,	// (0x00016f41) bg_popup_call2_bubble_pane

0xb815,	// (0x00018dbd) bg_popup_call2_in_pane_cp01_ParamLimits

0xb815,	// (0x00018dbd) bg_popup_call2_in_pane_cp01

0x9675,	// (0x00016c1d) call_type_pane_cp02

0x3983,	// (0x00010f2b) popup_call2_audio_out_window_g1_ParamLimits

0x3983,	// (0x00010f2b) popup_call2_audio_out_window_g1

0xb85d,	// (0x00018e05) popup_call2_audio_out_window_g2_ParamLimits

0xb85d,	// (0x00018e05) popup_call2_audio_out_window_g2

0x39af,	// (0x00010f57) popup_call2_audio_out_window_g3_ParamLimits

0x39af,	// (0x00010f57) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0001ca5d) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0001ca5d) popup_call2_audio_out_window_g

0xb894,	// (0x00018e3c) popup_call2_audio_out_window_t1_ParamLimits

0xb894,	// (0x00018e3c) popup_call2_audio_out_window_t1

0xb8f3,	// (0x00018e9b) popup_call2_audio_out_window_t2_ParamLimits

0xb8f3,	// (0x00018e9b) popup_call2_audio_out_window_t2

0xb947,	// (0x00018eef) popup_call2_audio_out_window_t3_ParamLimits

0xb947,	// (0x00018eef) popup_call2_audio_out_window_t3

0xb95d,	// (0x00018f05) popup_call2_audio_out_window_t4_ParamLimits

0xb95d,	// (0x00018f05) popup_call2_audio_out_window_t4

0xb973,	// (0x00018f1b) popup_call2_audio_out_window_t5_ParamLimits

0xb973,	// (0x00018f1b) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0001ca66) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0001ca66) popup_call2_audio_out_window_t

0xb9d7,	// (0x00018f7f) bg_popup_call2_in_pane_ParamLimits

0xb9d7,	// (0x00018f7f) bg_popup_call2_in_pane

0xba33,	// (0x00018fdb) popup_call2_audio_in_window_g1_ParamLimits

0xba33,	// (0x00018fdb) popup_call2_audio_in_window_g1

0xba6b,	// (0x00019013) popup_call2_audio_in_window_g2_ParamLimits

0xba6b,	// (0x00019013) popup_call2_audio_in_window_g2

0xbaa3,	// (0x0001904b) popup_call2_audio_in_window_g3_ParamLimits

0xbaa3,	// (0x0001904b) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0001ca73) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0001ca73) popup_call2_audio_in_window_g

0xbafb,	// (0x000190a3) popup_call2_audio_in_window_t1_ParamLimits

0xbafb,	// (0x000190a3) popup_call2_audio_in_window_t1

0xbb7b,	// (0x00019123) popup_call2_audio_in_window_t2_ParamLimits

0xbb7b,	// (0x00019123) popup_call2_audio_in_window_t2

0xbbfb,	// (0x000191a3) popup_call2_audio_in_window_t3_ParamLimits

0xbbfb,	// (0x000191a3) popup_call2_audio_in_window_t3

0xbc15,	// (0x000191bd) popup_call2_audio_in_window_t4_ParamLimits

0xbc15,	// (0x000191bd) popup_call2_audio_in_window_t4

0xbc27,	// (0x000191cf) popup_call2_audio_in_window_t5_ParamLimits

0xbc27,	// (0x000191cf) popup_call2_audio_in_window_t5

0xbc39,	// (0x000191e1) popup_call2_audio_in_window_t6_ParamLimits

0xbc39,	// (0x000191e1) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0001ca7c) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0001ca7c) popup_call2_audio_in_window_t

0x9bec,	// (0x00017194) bg_popup_call2_in_pane_g1

0xbd95,	// (0x0001933d) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x0001caf7) popup_cale_lunar_info_window_t

0x9bf4,	// (0x0001719c) bg_popup_call2_rect_pane_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_call2_rect_pane

0x9999,	// (0x00016f41) call2_cli_visual_graphic_pane

0x9999,	// (0x00016f41) call2_cli_visual_text_pane

0xbee6,	// (0x0001948e) smil_status_volume_pane_g3

0x0002,

0x9c0c,	// (0x000171b4) call2_cli_visual_graphic_pane_g1

0x9c0c,	// (0x000171b4) call2_cli_visual_graphic_pane_g2

0x9c0c,	// (0x000171b4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0001ca89) call2_cli_visual_graphic_pane_g

0xbc4b,	// (0x000191f3) bg_popup_call2_rect_pane_g1

0x9e07,	// (0x000173af) bg_popup_call2_rect_pane_g2

0xbc53,	// (0x000191fb) bg_popup_call2_rect_pane_g3

0xbc5b,	// (0x00019203) bg_popup_call2_rect_pane_g4

0xbc63,	// (0x0001920b) bg_popup_call2_rect_pane_g5

0xbc6b,	// (0x00019213) bg_popup_call2_rect_pane_g6

0xbc73,	// (0x0001921b) bg_popup_call2_rect_pane_g7

0xbc7b,	// (0x00019223) bg_popup_call2_rect_pane_g8

0xbc83,	// (0x0001922b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001ca90) bg_popup_call2_rect_pane_g

0xbc8b,	// (0x00019233) bg_popup_call2_bubble_pane_g1

0xbc93,	// (0x0001923b) bg_popup_call2_bubble_pane_g2

0xbc9b,	// (0x00019243) bg_popup_call2_bubble_pane_g3

0xbca3,	// (0x0001924b) bg_popup_call2_bubble_pane_g4

0xbcab,	// (0x00019253) bg_popup_call2_bubble_pane_g5

0xbcb3,	// (0x0001925b) bg_popup_call2_bubble_pane_g6

0xbcbb,	// (0x00019263) bg_popup_call2_bubble_pane_g7

0xbcc3,	// (0x0001926b) bg_popup_call2_bubble_pane_g8

0xbccb,	// (0x00019273) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0001caa3) bg_popup_call2_bubble_pane_g

0x1768,	// (0x0000ed10) aid_cale_week_size_cell_pane

0x1d18,	// (0x0000f2c0) aid_cams_cif_uncrop_pane_ParamLimits

0x1d18,	// (0x0000f2c0) aid_cams_cif_uncrop_pane

0x1e6e,	// (0x0000f416) aid_cams_size_cell_ParamLimits

0x1e6e,	// (0x0000f416) aid_cams_size_cell

0x1e82,	// (0x0000f42a) grid_cams_pane_ParamLimits

0x1e9c,	// (0x0000f444) linegrid_cams_pane_ParamLimits

0x1f82,	// (0x0000f52a) call_video_pane_t1

0x1fa0,	// (0x0000f548) call_video_pane_t2

0x0001,

0xf208,	// (0x0001c7b0) call_video_pane_t

0x23b4,	// (0x0000f95c) aid_cale_month_size_cell_pane_ParamLimits

0x23b4,	// (0x0000f95c) aid_cale_month_size_cell_pane

0xf593,	// (0x0001cb3b) smil_status_volume_pane_g

0xbef3,	// (0x0001949b) volume_smil_pane_ParamLimits

0x951b,	// (0x00016ac3) aid_popup2_width_pane

0x16cd,	// (0x0000ec75) cell_qdial_pane_g4_ParamLimits

0x16cd,	// (0x0000ec75) cell_qdial_pane_g4

0x2f74,	// (0x0001051c) aid_blid_cardinal_pane_ParamLimits

0x2f80,	// (0x00010528) aid_blid_destination_pane_ParamLimits

0x2f80,	// (0x00010528) aid_blid_destination_pane

0x9bf4,	// (0x0001719c) bg_popup_call_poc_act_pane_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_call_poc_act_pane

0x9bf4,	// (0x0001719c) bg_popup_call_poc_inact_pane_ParamLimits

0x9bf4,	// (0x0001719c) bg_popup_call_poc_inact_pane

0xbcd3,	// (0x0001927b) bg_popup_call_poc_act_pane_g1

0xbcdb,	// (0x00019283) bg_popup_call_poc_act_pane_g2

0xbce3,	// (0x0001928b) bg_popup_call_poc_act_pane_g3

0xbca3,	// (0x0001924b) bg_popup_call_poc_act_pane_g4

0xbcab,	// (0x00019253) bg_popup_call_poc_act_pane_g5

0xbceb,	// (0x00019293) bg_popup_call_poc_act_pane_g6

0xbcbb,	// (0x00019263) bg_popup_call_poc_act_pane_g7

0xbcf3,	// (0x0001929b) bg_popup_call_poc_act_pane_g8

0x9999,	// (0x00016f41) main_usb_pane

0xbdff,	// (0x000193a7) popup_cale_lunar_info_window

0x226c,	// (0x0000f814) im_reading_pane_t1_ParamLimits

0xa031,	// (0x000175d9) list_im_pane_ParamLimits

0xa042,	// (0x000175ea) scroll_pane_cp07_ParamLimits

0x9999,	// (0x00016f41) grid_highlight_pane_cp012

0x9bf4,	// (0x0001719c) mup_scale_pane_ParamLimits

0xac24,	// (0x000181cc) main_usb_pane_g1_ParamLimits

0xac24,	// (0x000181cc) main_usb_pane_g1

0x39fe,	// (0x00010fa6) main_usb_pane_g2_ParamLimits

0x39fe,	// (0x00010fa6) main_usb_pane_g2

0x0001,

0xf538,	// (0x0001cae0) main_usb_pane_g_ParamLimits

0xf538,	// (0x0001cae0) main_usb_pane_g

0x3a14,	// (0x00010fbc) main_usb_pane_t1_ParamLimits

0x3a14,	// (0x00010fbc) main_usb_pane_t1

0x3a26,	// (0x00010fce) main_usb_pane_t2_ParamLimits

0x3a26,	// (0x00010fce) main_usb_pane_t2

0x3a38,	// (0x00010fe0) main_usb_pane_t3_ParamLimits

0x3a38,	// (0x00010fe0) main_usb_pane_t3

0x3a4a,	// (0x00010ff2) main_usb_pane_t4_ParamLimits

0x3a4a,	// (0x00010ff2) main_usb_pane_t4

0x3a5c,	// (0x00011004) main_usb_pane_t5_ParamLimits

0x3a5c,	// (0x00011004) main_usb_pane_t5

0x3a6e,	// (0x00011016) main_usb_pane_t6_ParamLimits

0x3a6e,	// (0x00011016) main_usb_pane_t6

0x0005,

0xf53d,	// (0x0001cae5) main_usb_pane_t_ParamLimits

0x2f23,	// (0x000104cb) aid_text_placing

0x2f2c,	// (0x000104d4) main_location2_pane_t1_ParamLimits

0x2f3e,	// (0x000104e6) main_location2_pane_t2_ParamLimits

0x2f50,	// (0x000104f8) main_location2_pane_t3_ParamLimits

0x2f62,	// (0x0001050a) main_location2_pane_t4_ParamLimits

0x2f62,	// (0x0001050a) main_location2_pane_t4

0xf344,	// (0x0001c8ec) main_location2_pane_t_ParamLimits

0x9c22,	// (0x000171ca) find_pinb_pane_g2_ParamLimits

0x9c22,	// (0x000171ca) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0001c668) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0001c668) find_pinb_pane_g

0x9c2e,	// (0x000171d6) find_pinb_pane_t1_ParamLimits

0x9c40,	// (0x000171e8) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0001c66d) find_pinb_pane_t_ParamLimits

0x9999,	// (0x00016f41) main_call3_pane

0x289b,	// (0x0000fe43) cale_month_day_heading_pane_t1_ParamLimits

0x28dd,	// (0x0000fe85) cale_month_day_heading_pane_t2_ParamLimits

0x2912,	// (0x0000feba) cale_month_day_heading_pane_t3_ParamLimits

0x2947,	// (0x0000feef) cale_month_day_heading_pane_t4_ParamLimits

0x2984,	// (0x0000ff2c) cale_month_day_heading_pane_t5_ParamLimits

0x29c9,	// (0x0000ff71) cale_month_day_heading_pane_t6_ParamLimits

0x2a0e,	// (0x0000ffb6) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0001c7e8) cale_month_day_heading_pane_t_ParamLimits

0xa298,	// (0x00017840) smil_status_volume_pane

0x348f,	// (0x00010a37) postcard_address_pane_ParamLimits

0x348f,	// (0x00010a37) postcard_address_pane

0x34a1,	// (0x00010a49) postcard_message_pane_ParamLimits

0x34a1,	// (0x00010a49) postcard_message_pane

0x39db,	// (0x00010f83) call2_cli_visual_pane_t1_ParamLimits

0x39db,	// (0x00010f83) call2_cli_visual_pane_t1

0xbf20,	// (0x000194c8) postcard_message_pane_t1_ParamLimits

0xbf20,	// (0x000194c8) postcard_message_pane_t1

0xbf08,	// (0x000194b0) postcard_address_pane_t1_ParamLimits

0xbf08,	// (0x000194b0) postcard_address_pane_t1

0x4153,	// (0x000116fb) popup_call3_audio_in_window_ParamLimits

0x4153,	// (0x000116fb) popup_call3_audio_in_window

0x3fde,	// (0x00011586) bg_popup_call3_in_pane_ParamLimits

0x3fde,	// (0x00011586) bg_popup_call3_in_pane

0x4054,	// (0x000115fc) popup_call3_audio_in_window_g1_ParamLimits

0x4054,	// (0x000115fc) popup_call3_audio_in_window_g1

0x4074,	// (0x0001161c) popup_call3_audio_in_window_g2_ParamLimits

0x4074,	// (0x0001161c) popup_call3_audio_in_window_g2

0x4094,	// (0x0001163c) popup_call3_audio_in_window_g3_ParamLimits

0x4094,	// (0x0001163c) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x0001cb42) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x0001cb42) popup_call3_audio_in_window_g

0x40c5,	// (0x0001166d) popup_call3_audio_in_window_t1_ParamLimits

0x40c5,	// (0x0001166d) popup_call3_audio_in_window_t1

0x4103,	// (0x000116ab) popup_call3_audio_in_window_t2_ParamLimits

0x4103,	// (0x000116ab) popup_call3_audio_in_window_t2

0x4141,	// (0x000116e9) popup_call3_audio_in_window_t3_ParamLimits

0x4141,	// (0x000116e9) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x0001cb4b) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x0001cb4b) popup_call3_audio_in_window_t

0x9f38,	// (0x000174e0) bg_popup_call3_rect_pane

0xbc4b,	// (0x000191f3) bg_popup_call3_rect_pane_g1

0x9e07,	// (0x000173af) bg_popup_call3_rect_pane_g2

0xbc53,	// (0x000191fb) bg_popup_call3_rect_pane_g3

0xbc5b,	// (0x00019203) bg_popup_call3_rect_pane_g4

0xbc63,	// (0x0001920b) bg_popup_call3_rect_pane_g5

0xbc6b,	// (0x00019213) bg_popup_call3_rect_pane_g6

0xbc73,	// (0x0001921b) bg_popup_call3_rect_pane_g7

0x9509,	// (0x00016ab1) mup_visualizer_osc_pane

0x9509,	// (0x00016ab1) mup_visualizer_spec_pane

0x400e,	// (0x000115b6) call3_video_qcif_pane_ParamLimits

0x400e,	// (0x000115b6) call3_video_qcif_pane

0x4021,	// (0x000115c9) call3_video_qcif_uncrop_pane_ParamLimits

0x4021,	// (0x000115c9) call3_video_qcif_uncrop_pane

0x402f,	// (0x000115d7) call3_video_subqcif_pane_ParamLimits

0x402f,	// (0x000115d7) call3_video_subqcif_pane

0x4043,	// (0x000115eb) call3_video_subqcif_uncrop_pane_ParamLimits

0x4043,	// (0x000115eb) call3_video_subqcif_uncrop_pane

0x40b4,	// (0x0001165c) popup_call3_audio_in_window_g4_ParamLimits

0x40b4,	// (0x0001165c) popup_call3_audio_in_window_g4

0x9509,	// (0x00016ab1) mup_spec_half_pane

0x9509,	// (0x00016ab1) mup_spec_half_pane_cp

0x9509,	// (0x00016ab1) mup_osc_middle_pane

0x9f78,	// (0x00017520) mup_visualizer_osc_pane_g1

0xbe99,	// (0x00019441) mup_spec_bar_pane_ParamLimits

0xbe99,	// (0x00019441) mup_spec_bar_pane

0x9f78,	// (0x00017520) mup_spec_bar_pane_g1

0x9f78,	// (0x00017520) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0001c966) mup_spec_bar_pane_g

0x1768,	// (0x0000ed10) aid_cale_week_size_cell_pane_ParamLimits

0x1782,	// (0x0000ed2a) bg_cale_heading_pane_ParamLimits

0x9e9a,	// (0x00017442) bg_cale_pane_cp01_ParamLimits

0x179a,	// (0x0000ed42) cale_week_corner_pane_ParamLimits

0x17b9,	// (0x0000ed61) cale_week_day_heading_pane_ParamLimits

0x17d6,	// (0x0000ed7e) cale_week_scroll_pane_g1_ParamLimits

0x17e9,	// (0x0000ed91) cale_week_scroll_pane_g2_ParamLimits

0x1801,	// (0x0000eda9) cale_week_scroll_pane_g3_ParamLimits

0x1819,	// (0x0000edc1) cale_week_scroll_pane_g4_ParamLimits

0x1831,	// (0x0000edd9) cale_week_scroll_pane_g5_ParamLimits

0x1851,	// (0x0000edf9) cale_week_scroll_pane_g6_ParamLimits

0x1871,	// (0x0000ee19) cale_week_scroll_pane_g7_ParamLimits

0x1891,	// (0x0000ee39) cale_week_scroll_pane_g8_ParamLimits

0x18b5,	// (0x0000ee5d) cale_week_scroll_pane_g9_ParamLimits

0x18cd,	// (0x0000ee75) cale_week_scroll_pane_g10_ParamLimits

0x18e5,	// (0x0000ee8d) cale_week_scroll_pane_g11_ParamLimits

0x18fd,	// (0x0000eea5) cale_week_scroll_pane_g12_ParamLimits

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g13_ParamLimits

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g14_ParamLimits

0x1915,	// (0x0000eebd) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0001c6f9) cale_week_scroll_pane_g_ParamLimits

0x1951,	// (0x0000eef9) cale_week_time_pane_ParamLimits

0x1975,	// (0x0000ef1d) grid_cale_week_pane_ParamLimits

0x9eb7,	// (0x0001745f) listscroll_cale_week_pane_t1

0x9ec9,	// (0x00017471) scroll_pane_cp08_ParamLimits

0x2414,	// (0x0000f9bc) cale_month_corner_pane_ParamLimits

0xa262,	// (0x0001780a) cale_month_pane_t1

0x282e,	// (0x0000fdd6) cale_month_week_pane_ParamLimits

0x2d7a,	// (0x00010322) popup_call_status_window_g1_ParamLimits

0x2d8e,	// (0x00010336) popup_call_status_window_g2_ParamLimits

0x2da2,	// (0x0001034a) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0001c873) popup_call_status_window_g_ParamLimits

0xa650,	// (0x00017bf8) aid_call2_pane

0x32ba,	// (0x00010862) msg_header_pane_g1

0x348f,	// (0x00010a37) postcard_address2_pane_ParamLimits

0x348f,	// (0x00010a37) postcard_address2_pane

0x34a1,	// (0x00010a49) postcard_message2_pane_ParamLimits

0x34a1,	// (0x00010a49) postcard_message2_pane

0x3fae,	// (0x00011556) message2_row_pane_ParamLimits

0x3fae,	// (0x00011556) message2_row_pane

0x3fcb,	// (0x00011573) address2_row_pane_ParamLimits

0x3fcb,	// (0x00011573) address2_row_pane

0xbe66,	// (0x0001940e) postcard_message2_row_pane_g1

0xbe6e,	// (0x00019416) postcard_message2_row_pane_t1

0xbe66,	// (0x0001940e) address2_row_pane_g1

0xbe6e,	// (0x00019416) address2_row_pane_t1

0x1caf,	// (0x0000f257) aid_size_cell_vorec

0x9999,	// (0x00016f41) main_rss_pane

0xbe7c,	// (0x00019424) rss_list_single_pane_ParamLimits

0xbe7c,	// (0x00019424) rss_list_single_pane

0xbe8a,	// (0x00019432) rss_list_single_pane_t1

0xbe8a,	// (0x00019432) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x0001cb36) rss_list_single_pane_t

0x9999,	// (0x00016f41) main_camera2_pane

0x9999,	// (0x00016f41) main_video2_pane

0xbf3c,	// (0x000194e4) cams_zoom_pane_cp2_ParamLimits

0xbf3c,	// (0x000194e4) cams_zoom_pane_cp2

0xbf3c,	// (0x000194e4) image2_vga_pane_ParamLimits

0xbf3c,	// (0x000194e4) image2_vga_pane

0xce31,	// (0x0001a3d9) main_camera2_pane_g1_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g1

0xce31,	// (0x0001a3d9) main_camera2_pane_g2_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g2

0xce31,	// (0x0001a3d9) main_camera2_pane_g3_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g3

0xce31,	// (0x0001a3d9) main_camera2_pane_g4_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g4

0xce31,	// (0x0001a3d9) main_camera2_pane_g5_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g5

0xce31,	// (0x0001a3d9) main_camera2_pane_g6_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g6

0xce31,	// (0x0001a3d9) main_camera2_pane_g7_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g7

0xce31,	// (0x0001a3d9) main_camera2_pane_g8_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x0001cb52) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x0001cb52) main_camera2_pane_g

0x4175,	// (0x0001171d) main_camera2_pane_t1_ParamLimits

0x4175,	// (0x0001171d) main_camera2_pane_t1

0x4175,	// (0x0001171d) main_camera2_pane_t2_ParamLimits

0x4175,	// (0x0001171d) main_camera2_pane_t2

0x4175,	// (0x0001171d) main_camera2_pane_t3_ParamLimits

0x4175,	// (0x0001171d) main_camera2_pane_t3

0x4175,	// (0x0001171d) main_camera2_pane_t4_ParamLimits

0x4175,	// (0x0001171d) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x0001cb65) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x0001cb65) main_camera2_pane_t

0xbf5e,	// (0x00019506) cams_zoom_pane_cp4_ParamLimits

0xbf5e,	// (0x00019506) cams_zoom_pane_cp4

0xbf6c,	// (0x00019514) image2_cif_pane_ParamLimits

0xbf6c,	// (0x00019514) image2_cif_pane

0x9578,	// (0x00016b20) image2_subqcif_pane_ParamLimits

0x9578,	// (0x00016b20) image2_subqcif_pane

0x4189,	// (0x00011731) main_video2_pane_g1_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g1

0x4189,	// (0x00011731) main_video2_pane_g2_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g2

0x4189,	// (0x00011731) main_video2_pane_g3_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g3

0x4189,	// (0x00011731) main_video2_pane_g4_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g4

0x4189,	// (0x00011731) main_video2_pane_g5_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g5

0x4189,	// (0x00011731) main_video2_pane_g6_ParamLimits

0x4189,	// (0x00011731) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x0001cb74) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x0001cb74) main_video2_pane_g

0x4197,	// (0x0001173f) main_video2_pane_t1_ParamLimits

0x4197,	// (0x0001173f) main_video2_pane_t1

0x4197,	// (0x0001173f) main_video2_pane_t2_ParamLimits

0x4197,	// (0x0001173f) main_video2_pane_t2

0x4197,	// (0x0001173f) main_video2_pane_t3_ParamLimits

0x4197,	// (0x0001173f) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x0001cb81) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x0001cb81) main_video2_pane_t

0x3b02,	// (0x000110aa) call_muted_g2

0x0001,

0xf580,	// (0x0001cb28) call_muted_g

0x9999,	// (0x00016f41) main_mup2_pane

0xaad5,	// (0x0001807d) main_mup2_pane_g1_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g1

0xaad5,	// (0x0001807d) main_mup2_pane_g2_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g2

0x9f78,	// (0x00017520) main_mup_pane_g13_cp1

0x9509,	// (0x00016ab1) mup_volume_pane_cp1

0xaad5,	// (0x0001807d) main_mup2_pane_g4_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g4

0xaad5,	// (0x0001807d) main_mup2_pane_g5_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g5

0xaad5,	// (0x0001807d) main_mup2_pane_g6_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g6

0xaad5,	// (0x0001807d) main_mup2_pane_g7_ParamLimits

0xaad5,	// (0x0001807d) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x0001cb88) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x0001cb88) main_mup2_pane_g

0xaae3,	// (0x0001808b) main_mup2_pane_t1_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t1

0xaae3,	// (0x0001808b) main_mup2_pane_t2_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t2

0xaae3,	// (0x0001808b) main_mup2_pane_t3_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t3

0xaae3,	// (0x0001808b) main_mup2_pane_t4_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t4

0xaae3,	// (0x0001808b) main_mup2_pane_t5_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t5

0xaae3,	// (0x0001808b) main_mup2_pane_t6_ParamLimits

0xaae3,	// (0x0001808b) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x0001cb97) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x0001cb97) main_mup2_pane_t

0xab0b,	// (0x000180b3) mup2_visualizer_pane_ParamLimits

0xab0b,	// (0x000180b3) mup2_visualizer_pane

0xab0b,	// (0x000180b3) mup_progress_pane_cp_ParamLimits

0xab0b,	// (0x000180b3) mup_progress_pane_cp

0xbf7a,	// (0x00019522) mup_volume_pane_cp_ParamLimits

0xbf7a,	// (0x00019522) mup_volume_pane_cp

0x9c6f,	// (0x00017217) mup2_visualizer_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) mup2_visualizer_pane_g1

0x9c7d,	// (0x00017225) mup2_visualizer_pane_g2_ParamLimits

0x9c7d,	// (0x00017225) mup2_visualizer_pane_g2

0x9c7d,	// (0x00017225) mup2_visualizer_pane_g3_ParamLimits

0x9c7d,	// (0x00017225) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0001c672) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0001c672) mup2_visualizer_pane_g

0xad6d,	// (0x00018315) aid_size_cell_fmradio

0x3cb4,	// (0x0001125c) aid_height_parent_landcape

0xa0c0,	// (0x00017668) wml_content_pane_cp

0xa0c8,	// (0x00017670) wml_tabs_pane

0xa0d1,	// (0x00017679) popup_wml_miniature_window

0xa0d9,	// (0x00017681) scroll_pane_cp021

0xa0ed,	// (0x00017695) wml_content_pane_comp8

0x9999,	// (0x00016f41) bg_popup_sub_pane_cp05

0xbf90,	// (0x00019538) popup_wml_miniature_window_g1

0xbf98,	// (0x00019540) wml_miniature_view_pane

0x41ab,	// (0x00011753) aid_size_wml_view

0x41b3,	// (0x0001175b) wml_miniature_view_pane_g1

0x41bc,	// (0x00011764) wml_miniature_view_pane_g2

0x41c5,	// (0x0001176d) wml_miniature_view_pane_g3

0x41cd,	// (0x00011775) wml_miniature_view_pane_g4

0x41d5,	// (0x0001177d) wml_miniature_view_pane_g5

0x41dd,	// (0x00011785) wml_miniature_view_pane_g6

0x41e5,	// (0x0001178d) wml_miniature_view_pane_g7

0x41ed,	// (0x00011795) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x0001cba4) wml_miniature_view_pane_g

0xbfa0,	// (0x00019548) background_graphic_ParamLimits

0xbfa0,	// (0x00019548) background_graphic

0xbfac,	// (0x00019554) wml_tabs_2_pane

0xbfb5,	// (0x0001955d) wml_tabs_3_pane_ParamLimits

0xbfb5,	// (0x0001955d) wml_tabs_3_pane

0xbfc7,	// (0x0001956f) wml_tabs_4_pane_ParamLimits

0xbfc7,	// (0x0001956f) wml_tabs_4_pane

0xbfdd,	// (0x00019585) wml_tabs_5_pane_ParamLimits

0xbfdd,	// (0x00019585) wml_tabs_5_pane

0xbff7,	// (0x0001959f) wml_tabs_pane_g2_ParamLimits

0xbff7,	// (0x0001959f) wml_tabs_pane_g2

0xc00c,	// (0x000195b4) wml_tabs_pane_g3_ParamLimits

0xc00c,	// (0x000195b4) wml_tabs_pane_g3

0xc021,	// (0x000195c9) wml_tabs_2_active_pane_ParamLimits

0xc021,	// (0x000195c9) wml_tabs_2_active_pane

0xc021,	// (0x000195c9) wml_tabs_2_passive_pane_ParamLimits

0xc021,	// (0x000195c9) wml_tabs_2_passive_pane

0x41f5,	// (0x0001179d) wml_tabs_3_active_pane_cp_ParamLimits

0x41f5,	// (0x0001179d) wml_tabs_3_active_pane_cp

0x420a,	// (0x000117b2) wml_tabs_3_passive_pane_ParamLimits

0x420a,	// (0x000117b2) wml_tabs_3_passive_pane

0x421d,	// (0x000117c5) wml_tabs_3_passive_pane_cp_ParamLimits

0x421d,	// (0x000117c5) wml_tabs_3_passive_pane_cp

0x4234,	// (0x000117dc) tabs_4_active_pane

0x423c,	// (0x000117e4) tabs_4_passive_pane

0x4246,	// (0x000117ee) tabs_4_passive_pane_cp

0x424e,	// (0x000117f6) tabs_4_passive_pane_cp2

0x39f6,	// (0x00010f9e) aid_height_text

0xab0b,	// (0x000180b3) mup_volume_cont_pane_ParamLimits

0xab0b,	// (0x000180b3) mup_volume_cont_pane

0x9509,	// (0x00016ab1) aid_size_cell_pinb

0x9509,	// (0x00016ab1) aid_size_list_pinb

0xab0b,	// (0x000180b3) mup2_volume_cont_pane_ParamLimits

0xab0b,	// (0x000180b3) mup2_volume_cont_pane

0xc02f,	// (0x000195d7) mup2_volume_cont_pane_g1_ParamLimits

0xc02f,	// (0x000195d7) mup2_volume_cont_pane_g1

0x114f,	// (0x0000e6f7) aid_size_cell_touch_ParamLimits

0x114f,	// (0x0000e6f7) aid_size_cell_touch

0x137c,	// (0x0000e924) touch_pane_ParamLimits

0x137c,	// (0x0000e924) touch_pane

0x9509,	// (0x00016ab1) main_rss2_pane

0xc04e,	// (0x000195f6) listscroll_rss2_pane

0xc057,	// (0x000195ff) rss2_navigation_pane

0xc05f,	// (0x00019607) list_rss2_pane

0xa7d8,	// (0x00017d80) scroll_pane_cp22

0xc067,	// (0x0001960f) rss2_navigation_pane_g1

0xc070,	// (0x00019618) rss2_navigation_pane_g2

0xc078,	// (0x00019620) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x0001cbb5) rss2_navigation_pane_g

0xc080,	// (0x00019628) rss2_navigation_pane_t1

0x4258,	// (0x00011800) rss2_list_single_pane_ParamLimits

0x4258,	// (0x00011800) rss2_list_single_pane

0xc08e,	// (0x00019636) rss2_list_single_pane_t2

0xc09c,	// (0x00019644) rss2_list_single_pane_t3_ParamLimits

0xc09c,	// (0x00019644) rss2_list_single_pane_t3

0xc0b9,	// (0x00019661) rss2_list_single_pane_t4

0x2c56,	// (0x000101fe) smil_status_pane_g1

0x9578,	// (0x00016b20) main_image2_pane_ParamLimits

0x9578,	// (0x00016b20) main_image2_pane

0xce31,	// (0x0001a3d9) main_camera2_pane_g9_ParamLimits

0xce31,	// (0x0001a3d9) main_camera2_pane_g9

0x4175,	// (0x0001171d) main_camera2_pane_t5_ParamLimits

0x4175,	// (0x0001171d) main_camera2_pane_t5

0xbf4a,	// (0x000194f2) main_camera2_pane_t6_ParamLimits

0xbf4a,	// (0x000194f2) main_camera2_pane_t6

0x426e,	// (0x00011816) main_image2_pane_g1_ParamLimits

0x426e,	// (0x00011816) main_image2_pane_g1

0x36c9,	// (0x00010c71) smil2_video_pane_ParamLimits

0x36c9,	// (0x00010c71) smil2_video_pane

0x9527,	// (0x00016acf) aid_zoom_text_primary_cp

0x956e,	// (0x00016b16) popup_preview_fixed_window

0xa029,	// (0x000175d1) im_reading_pane_g1

0x4167,	// (0x0001170f) cams2_bc_adjust_pane_cp_ParamLimits

0x4167,	// (0x0001170f) cams2_bc_adjust_pane_cp

0xab0b,	// (0x000180b3) cams2_bc_adjust_pane_ParamLimits

0xab0b,	// (0x000180b3) cams2_bc_adjust_pane

0x9f78,	// (0x00017520) cams2_bc_adjust_pane_g1

0x9509,	// (0x00016ab1) cams2_slider_pane

0x9f78,	// (0x00017520) cams2_slider_pane_g1

0x9f78,	// (0x00017520) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x0001cbbc) cams2_slider_pane_g

0x1445,	// (0x0000e9ed) calc_display_pane_ParamLimits

0x146a,	// (0x0000ea12) calc_paper_pane_ParamLimits

0x148d,	// (0x0000ea35) grid_calc_pane_ParamLimits

0xa6b2,	// (0x00017c5a) popup_clock_digital_window_t1_ParamLimits

0xad0a,	// (0x000182b2) main_image_pane_t1

0x1427,	// (0x0000e9cf) aid_size_cell_calc_ParamLimits

0x1427,	// (0x0000e9cf) aid_size_cell_calc

0x3cfa,	// (0x000112a2) popup_blid_sat_info2_window_ParamLimits

0x3cfa,	// (0x000112a2) popup_blid_sat_info2_window

0xc0c7,	// (0x0001966f) aid_size_cell_blid

0xbf6c,	// (0x00019514) bg_popup_window_pane_cp07

0xc0e4,	// (0x0001968c) grid_popup_blid_pane

0xc0ee,	// (0x00019696) heading_pane_cp05_ParamLimits

0xc0ee,	// (0x00019696) heading_pane_cp05

0xc1b8,	// (0x00019760) cell_popup_blid_pane_ParamLimits

0xc1b8,	// (0x00019760) cell_popup_blid_pane

0xc1dc,	// (0x00019784) cell_popup_blid_pane_g1

0xc1e4,	// (0x0001978c) cell_popup_blid_pane_t1

0xab0b,	// (0x000180b3) mup2_indicator_pane_ParamLimits

0xab0b,	// (0x000180b3) mup2_indicator_pane

0x9509,	// (0x00016ab1) mup2_visualizer_osc_pane

0xbf7a,	// (0x00019522) mup2_visualizer_spec_pane_ParamLimits

0xbf7a,	// (0x00019522) mup2_visualizer_spec_pane

0x9509,	// (0x00016ab1) mup2_spec_half_pane

0x9509,	// (0x00016ab1) mup2_spec_half_pane_cp

0xc1f2,	// (0x0001979a) mup2_spec_bar_pane_ParamLimits

0xc1f2,	// (0x0001979a) mup2_spec_bar_pane

0x9f78,	// (0x00017520) mup2_spec_bar_pane_g1

0xc211,	// (0x000197b9) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x0001cbe2) mup2_spec_bar_pane_g

0x9509,	// (0x00016ab1) mup2_osc_middle_pane

0x9f78,	// (0x00017520) mup2_visualizer_osc_pane_g1

0x95a6,	// (0x00016b4e) popup_number_entry_window_t1_ParamLimits

0x95b9,	// (0x00016b61) popup_number_entry_window_t2_ParamLimits

0x95cb,	// (0x00016b73) popup_number_entry_window_t3_ParamLimits

0x13ce,	// (0x0000e976) popup_number_entry_window_t5_ParamLimits

0x13ce,	// (0x0000e976) popup_number_entry_window_t5

0xf06b,	// (0x0001c613) popup_number_entry_window_t_ParamLimits

0x95dd,	// (0x00016b85) text_title_cp2_ParamLimits

0xabe4,	// (0x0001818c) aid_hotspot_pointer_text2_pane

0xac0a,	// (0x000181b2) main_viewer_pane_g9_ParamLimits

0xac0a,	// (0x000181b2) main_viewer_pane_g9

0xa262,	// (0x0001780a) cale_month_pane_t1_ParamLimits

0xa2cd,	// (0x00017875) bg_cale_pane_ParamLimits

0xa2e5,	// (0x0001788d) list_cale_pane_ParamLimits

0xa2f6,	// (0x0001789e) listscroll_cale_day_pane_t1

0xa308,	// (0x000178b0) scroll_pane_cp09_ParamLimits

0x304b,	// (0x000105f3) main_mup_eq_pane_t1_ParamLimits

0x304b,	// (0x000105f3) main_mup_eq_pane_t1

0x3065,	// (0x0001060d) main_mup_eq_pane_t2_ParamLimits

0x3065,	// (0x0001060d) main_mup_eq_pane_t2

0x307f,	// (0x00010627) main_mup_eq_pane_t3_ParamLimits

0x307f,	// (0x00010627) main_mup_eq_pane_t3

0x309b,	// (0x00010643) main_mup_eq_pane_t4_ParamLimits

0x309b,	// (0x00010643) main_mup_eq_pane_t4

0x30b7,	// (0x0001065f) main_mup_eq_pane_t5_ParamLimits

0x30b7,	// (0x0001065f) main_mup_eq_pane_t5

0x30d3,	// (0x0001067b) main_mup_eq_pane_t6_ParamLimits

0x30d3,	// (0x0001067b) main_mup_eq_pane_t6

0x30e7,	// (0x0001068f) main_mup_eq_pane_t7_ParamLimits

0x30e7,	// (0x0001068f) main_mup_eq_pane_t7

0x30fb,	// (0x000106a3) main_mup_eq_pane_t8_ParamLimits

0x30fb,	// (0x000106a3) main_mup_eq_pane_t8

0x310f,	// (0x000106b7) main_mup_eq_pane_t9_ParamLimits

0x310f,	// (0x000106b7) main_mup_eq_pane_t9

0x3129,	// (0x000106d1) main_mup_eq_pane_t10_ParamLimits

0x3129,	// (0x000106d1) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0001c972) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0001c972) main_mup_eq_pane_t

0x31d8,	// (0x00010780) mup_equalizer_pane_cp5_ParamLimits

0x31ec,	// (0x00010794) mup_equalizer_pane_cp6_ParamLimits

0x3200,	// (0x000107a8) mup_equalizer_pane_cp7_ParamLimits

0x9509,	// (0x00016ab1) main_gallery_pane

0xbeb8,	// (0x00019460) smil2_volume_pane

0xbec0,	// (0x00019468) smil_status_volume_pane_g1_ParamLimits

0xbed3,	// (0x0001947b) smil_status_volume_pane_g2_ParamLimits

0xbee6,	// (0x0001948e) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x0001cb3b) smil_status_volume_pane_g_ParamLimits

0xbf6c,	// (0x00019514) bg_popup_window_pane_cp07_ParamLimits

0xc0cf,	// (0x00019677) blid_firmament_pane

0x9578,	// (0x00016b20) aid_size_cell_gallery_ParamLimits

0x9578,	// (0x00016b20) aid_size_cell_gallery

0x9578,	// (0x00016b20) grid_gallery_pane_ParamLimits

0x9578,	// (0x00016b20) grid_gallery_pane

0xbf6c,	// (0x00019514) cell_gallery_pane_ParamLimits

0xbf6c,	// (0x00019514) cell_gallery_pane

0x9578,	// (0x00016b20) bg_cell_gallery_focus_pane_ParamLimits

0x9578,	// (0x00016b20) bg_cell_gallery_focus_pane

0x9c6f,	// (0x00017217) cell_gallery_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) cell_gallery_pane_g1

0x9c6f,	// (0x00017217) cell_gallery_pane_g2_ParamLimits

0x9c6f,	// (0x00017217) cell_gallery_pane_g2

0x9c6f,	// (0x00017217) cell_gallery_pane_g3_ParamLimits

0x9c6f,	// (0x00017217) cell_gallery_pane_g3

0x9c7d,	// (0x00017225) cell_gallery_pane_g4_ParamLimits

0x9c7d,	// (0x00017225) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x0001cbe7) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x0001cbe7) cell_gallery_pane_g

0xc21b,	// (0x000197c3) bg_cell_gallery_focus_pane_g1

0xc223,	// (0x000197cb) bg_cell_gallery_focus_pane_g2

0xc22b,	// (0x000197d3) bg_cell_gallery_focus_pane_g3

0xc233,	// (0x000197db) bg_cell_gallery_focus_pane_g4

0xc23b,	// (0x000197e3) bg_cell_gallery_focus_pane_g5

0xc243,	// (0x000197eb) bg_cell_gallery_focus_pane_g6

0xc24b,	// (0x000197f3) bg_cell_gallery_focus_pane_g7

0xc253,	// (0x000197fb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x0001cbf0) bg_cell_gallery_focus_pane_g

0xc25b,	// (0x00019803) aid_firma_cardinal

0xc26f,	// (0x00019817) blid_firmament_pane_t1

0xc286,	// (0x0001982e) blid_firmament_pane_t2

0xc29d,	// (0x00019845) blid_firmament_pane_t3

0xc2b4,	// (0x0001985c) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x0001cc01) blid_firmament_pane_t

0xc2cb,	// (0x00019873) blid_sat_info_pane

0x9f78,	// (0x00017520) blid_sat_info_pane_g1

0x9f78,	// (0x00017520) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0001c966) blid_sat_info_pane_g

0xc2db,	// (0x00019883) blid_sat_info_pane_t1

0xc2e9,	// (0x00019891) smil2_volume_content_pane

0xc2f2,	// (0x0001989a) smil2_volume_pane_g1

0x9d9e,	// (0x00017346) smil2_volume_content_pane_g1

0xc2fa,	// (0x000198a2) smil2_volume_content_pane_g2

0xc303,	// (0x000198ab) smil2_volume_content_pane_g3

0xc30c,	// (0x000198b4) smil2_volume_content_pane_g4

0xc315,	// (0x000198bd) smil2_volume_content_pane_g5

0xc31e,	// (0x000198c6) smil2_volume_content_pane_g6

0xc327,	// (0x000198cf) smil2_volume_content_pane_g7

0xc330,	// (0x000198d8) smil2_volume_content_pane_g8

0xc339,	// (0x000198e1) smil2_volume_content_pane_g9

0xc342,	// (0x000198ea) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x0001cc0a) smil2_volume_content_pane_g

0x1a29,	// (0x0000efd1) cale_week_day_heading_pane_t1_ParamLimits

0x1a53,	// (0x0000effb) cale_week_day_heading_pane_t2_ParamLimits

0x1a82,	// (0x0000f02a) cale_week_day_heading_pane_t3_ParamLimits

0x1ab1,	// (0x0000f059) cale_week_day_heading_pane_t4_ParamLimits

0x1ae0,	// (0x0000f088) cale_week_day_heading_pane_t5_ParamLimits

0x1b17,	// (0x0000f0bf) cale_week_day_heading_pane_t6_ParamLimits

0x1b4e,	// (0x0000f0f6) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0001c71a) cale_week_day_heading_pane_t_ParamLimits

0x9ee6,	// (0x0001748e) bg_cale_side_pane_ParamLimits

0x1b78,	// (0x0000f120) cale_week_time_pane_t1_ParamLimits

0x1b92,	// (0x0000f13a) cale_week_time_pane_t2_ParamLimits

0x1bac,	// (0x0000f154) cale_week_time_pane_t3_ParamLimits

0x1bc6,	// (0x0000f16e) cale_week_time_pane_t4_ParamLimits

0x1be0,	// (0x0000f188) cale_week_time_pane_t5_ParamLimits

0x1bfa,	// (0x0000f1a2) cale_week_time_pane_t6_ParamLimits

0x1c14,	// (0x0000f1bc) cale_week_time_pane_t7_ParamLimits

0x1c2e,	// (0x0000f1d6) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0001c729) cale_week_time_pane_t_ParamLimits

0x1c4e,	// (0x0000f1f6) cell_cale_week_pane_g2_ParamLimits

0x9ee6,	// (0x0001748e) bg_cale_side_pane_cp01_ParamLimits

0x2a5b,	// (0x00010003) cale_month_week_pane_t1_ParamLimits

0x2a74,	// (0x0001001c) cale_month_week_pane_t2_ParamLimits

0x2a8d,	// (0x00010035) cale_month_week_pane_t3_ParamLimits

0x2aa6,	// (0x0001004e) cale_month_week_pane_t4_ParamLimits

0x2abf,	// (0x00010067) cale_month_week_pane_t5_ParamLimits

0x2ad8,	// (0x00010080) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0001c7f7) cale_month_week_pane_t_ParamLimits

0xa274,	// (0x0001781c) cell_cale_month_pane_g1_ParamLimits

0x9509,	// (0x00016ab1) main_cale_event_viewer_pane

0x9509,	// (0x00016ab1) listscroll_cale_event_viewer_pane

0xc34b,	// (0x000198f3) list_cale_ev_pane

0xc353,	// (0x000198fb) scroll_pane_cp023

0xc35f,	// (0x00019907) field_cale_ev_pane_ParamLimits

0xc35f,	// (0x00019907) field_cale_ev_pane

0xc37d,	// (0x00019925) field_cale_ev_content_pane_ParamLimits

0xc37d,	// (0x00019925) field_cale_ev_content_pane

0xc389,	// (0x00019931) field_cale_ev_pane_g1_ParamLimits

0xc389,	// (0x00019931) field_cale_ev_pane_g1

0xc395,	// (0x0001993d) field_cale_ev_pane_g2_ParamLimits

0xc395,	// (0x0001993d) field_cale_ev_pane_g2

0xc3ad,	// (0x00019955) field_cale_ev_pane_g3_ParamLimits

0xc3ad,	// (0x00019955) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x0001cc1f) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x0001cc1f) field_cale_ev_pane_g

0xc3c5,	// (0x0001996d) field_cale_ev_pane_t1_ParamLimits

0xc3c5,	// (0x0001996d) field_cale_ev_pane_t1

0xc3dc,	// (0x00019984) field_cale_ev_content_pane_t1_ParamLimits

0xc3dc,	// (0x00019984) field_cale_ev_content_pane_t1

0xabae,	// (0x00018156) bg_button_pane_cp01

0x1756,	// (0x0000ecfe) listscroll_cale_week_pane_ParamLimits

0x9e91,	// (0x00017439) popup_toolbar_window_cp01

0x9eb7,	// (0x0001745f) listscroll_cale_week_pane_t1_ParamLimits

0x1756,	// (0x0000ecfe) listscroll_cale_day_pane_ParamLimits

0x9e91,	// (0x00017439) popup_toolbar_window_cp02

0xa2f6,	// (0x0001789e) listscroll_cale_day_pane_t1_ParamLimits

0x1756,	// (0x0000ecfe) main_cale_month_pane_ParamLimits

0xbe36,	// (0x000193de) popup_toolbar_window_cp03_ParamLimits

0xbe36,	// (0x000193de) popup_toolbar_window_cp03

0x3591,	// (0x00010b39) main_image_pane_g2_ParamLimits

0x3591,	// (0x00010b39) main_image_pane_g2

0x35a2,	// (0x00010b4a) main_image_pane_g3_ParamLimits

0x35a2,	// (0x00010b4a) main_image_pane_g3

0x0002,

0xf45c,	// (0x0001ca04) main_image_pane_g_ParamLimits

0xf45c,	// (0x0001ca04) main_image_pane_g

0xad0a,	// (0x000182b2) main_image_pane_t1_ParamLimits

0x35b3,	// (0x00010b5b) main_image_pane_t2_ParamLimits

0x35b3,	// (0x00010b5b) main_image_pane_t2

0x35c5,	// (0x00010b6d) main_image_pane_t3_ParamLimits

0x35c5,	// (0x00010b6d) main_image_pane_t3

0x35ed,	// (0x00010b95) main_image_pane_t4_ParamLimits

0x35ed,	// (0x00010b95) main_image_pane_t4

0x0003,

0xf463,	// (0x0001ca0b) main_image_pane_t_ParamLimits

0xf463,	// (0x0001ca0b) main_image_pane_t

0x360d,	// (0x00010bb5) popup_image_details_window_cp01

0x3617,	// (0x00010bbf) popup_toobar_trans_pane_cp01_ParamLimits

0x3617,	// (0x00010bbf) popup_toobar_trans_pane_cp01

0x3dcb,	// (0x00011373) popup_image_details_window_ParamLimits

0x3dcb,	// (0x00011373) popup_image_details_window

0xbe09,	// (0x000193b1) popup_image_focus_window

0xbf3c,	// (0x000194e4) camera2_autofocus_pane_ParamLimits

0xbf3c,	// (0x000194e4) camera2_autofocus_pane

0x9509,	// (0x00016ab1) bg_popup_sub_pane_cp06

0xc3fa,	// (0x000199a2) popup_image_focus_window_g1

0xc402,	// (0x000199aa) popup_image_focus_window_g2

0xc40a,	// (0x000199b2) popup_image_focus_window_g3

0xc412,	// (0x000199ba) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x0001cc26) popup_image_focus_window_g

0xc41a,	// (0x000199c2) popup_image_focus_window_t1

0xc428,	// (0x000199d0) popup_image_focus_window_t2

0xc438,	// (0x000199e0) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x0001cc2f) popup_image_focus_window_t

0x9c6f,	// (0x00017217) camera2_autofocus_pane_g1

0x9578,	// (0x00016b20) bg_tb_trans_pane_cp01

0xc446,	// (0x000199ee) popup_image_details_window_g1

0xc459,	// (0x00019a01) popup_image_details_window_g2

0x0002,

0xf699,	// (0x0001cc41) popup_image_details_window_g

0xc482,	// (0x00019a2a) popup_image_details_window_t1

0xc494,	// (0x00019a3c) popup_image_details_window_t2

0xc4ad,	// (0x00019a55) popup_image_details_window_t3

0xc4c1,	// (0x00019a69) popup_image_details_window_t4

0xc4dc,	// (0x00019a84) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x0001cc48) popup_image_details_window_t

0x9cd5,	// (0x0001727d) bg_calc_paper_pane_ParamLimits

0x9509,	// (0x00016ab1) grid_highlight_pane_cp013

0x9ce9,	// (0x00017291) list_calc_pane_ParamLimits

0x9cfb,	// (0x000172a3) scroll_pane_cp024

0x9d03,	// (0x000172ab) bg_calc_display_pane_ParamLimits

0x15a5,	// (0x0000eb4d) calc_display_pane_t1_ParamLimits

0x15b7,	// (0x0000eb5f) calc_display_pane_t2_ParamLimits

0x9d0f,	// (0x000172b7) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0001c69a) calc_display_pane_t_ParamLimits

0x1671,	// (0x0000ec19) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0001c6b7) cell_calc_pane_g

0x167a,	// (0x0000ec22) cell_calc_pane_t1

0x9d7c,	// (0x00017324) grid_highlight_pane_cp02_ParamLimits

0x9d92,	// (0x0001733a) toolbar_button_pane_cp01_ParamLimits

0x9d92,	// (0x0001733a) toolbar_button_pane_cp01

0xad4f,	// (0x000182f7) temp_image_control_pane_ParamLimits

0xad4f,	// (0x000182f7) temp_image_control_pane

0x9578,	// (0x00016b20) main_mp3_pane

0xc4f6,	// (0x00019a9e) temp_image_control_pane_g1_ParamLimits

0xc4f6,	// (0x00019a9e) temp_image_control_pane_g1

0xc504,	// (0x00019aac) temp_image_control_pane_g2_ParamLimits

0xc504,	// (0x00019aac) temp_image_control_pane_g2

0xc516,	// (0x00019abe) temp_image_control_pane_g3_ParamLimits

0xc516,	// (0x00019abe) temp_image_control_pane_g3

0x4284,	// (0x0001182c) temp_image_control_pane_g4_ParamLimits

0x4284,	// (0x0001182c) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x0001cc53) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x0001cc53) temp_image_control_pane_g

0xc4f6,	// (0x00019a9e) main_mp3_pane_g1

0x4297,	// (0x0001183f) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x0001cc5c) main_mp3_pane_g

0xc54b,	// (0x00019af3) main_mp3_pane_t1

0x9c7d,	// (0x00017225) main_camera_pane_g8_ParamLimits

0x9c7d,	// (0x00017225) main_camera_pane_g8

0x1e1c,	// (0x0000f3c4) main_video_pane_g7_ParamLimits

0x1e1c,	// (0x0000f3c4) main_video_pane_g7

0xaaf7,	// (0x0001809f) main_camera2_pane_t7_ParamLimits

0xaaf7,	// (0x0001809f) main_camera2_pane_t7

0xa080,	// (0x00017628) scroll_pane_cp025_ParamLimits

0xa080,	// (0x00017628) scroll_pane_cp025

0xa094,	// (0x0001763c) scroll_pane_cp026_ParamLimits

0xa094,	// (0x0001763c) scroll_pane_cp026

0xa0a3,	// (0x0001764b) wml_content_pane_ParamLimits

0x9509,	// (0x00016ab1) main_touch_calib_pane

0x436b,	// (0x00011913) main_touch_calib_pane_g1

0x437d,	// (0x00011925) main_touch_calib_pane_g2

0x438f,	// (0x00011937) main_touch_calib_pane_g3

0x43a1,	// (0x00011949) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x0001cc7a) main_touch_calib_pane_g

0x43b3,	// (0x0001195b) main_touch_calib_pane_t1

0x43cd,	// (0x00011975) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x0001cc83) main_touch_calib_pane_t

0xa8a7,	// (0x00017e4f) mup_progress_pane_cp02

0xa8dc,	// (0x00017e84) navi_pane_g1

0xa997,	// (0x00017f3f) navi_pane_mp_t3

0x9578,	// (0x00016b20) main_mp3_pane_ParamLimits

0x3f56,	// (0x000114fe) navi_pane_ParamLimits

0xc4f6,	// (0x00019a9e) main_mp3_pane_g1_ParamLimits

0x4297,	// (0x0001183f) main_mp3_pane_g2_ParamLimits

0x42a5,	// (0x0001184d) main_mp3_pane_g3_ParamLimits

0x42a5,	// (0x0001184d) main_mp3_pane_g3

0x42b3,	// (0x0001185b) main_mp3_pane_g4_ParamLimits

0x42b3,	// (0x0001185b) main_mp3_pane_g4

0x9c6f,	// (0x00017217) main_mp3_pane_g5_ParamLimits

0x9c6f,	// (0x00017217) main_mp3_pane_g5

0xc526,	// (0x00019ace) main_mp3_pane_g6_ParamLimits

0xc526,	// (0x00019ace) main_mp3_pane_g6

0xc533,	// (0x00019adb) main_mp3_pane_g7_ParamLimits

0xc533,	// (0x00019adb) main_mp3_pane_g7

0xc53f,	// (0x00019ae7) main_mp3_pane_g8_ParamLimits

0xc53f,	// (0x00019ae7) main_mp3_pane_g8

0xf6b4,	// (0x0001cc5c) main_mp3_pane_g_ParamLimits

0x42bf,	// (0x00011867) main_mp3_pane_t2

0x42cd,	// (0x00011875) main_mp3_pane_t3

0xc559,	// (0x00019b01) main_mp3_pane_t4

0xc567,	// (0x00019b0f) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x0001cc6d) main_mp3_pane_t

0xc575,	// (0x00019b1d) mup_progress_pane_cp01

0x9527,	// (0x00016acf) aid_zoom_text_secondary2

0xc34b,	// (0x000198f3) list_cale_ev2_pane

0xc353,	// (0x000198fb) scroll_pane_cp023_ParamLimits

0x4423,	// (0x000119cb) field_cale_ev2_pane_ParamLimits

0x4423,	// (0x000119cb) field_cale_ev2_pane

0xc57d,	// (0x00019b25) field_cale_ev2_pane_g1_ParamLimits

0xc57d,	// (0x00019b25) field_cale_ev2_pane_g1

0xc589,	// (0x00019b31) field_cale_ev2_pane_g2_ParamLimits

0xc589,	// (0x00019b31) field_cale_ev2_pane_g2

0xc5a1,	// (0x00019b49) field_cale_ev2_pane_g3_ParamLimits

0xc5a1,	// (0x00019b49) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x0001cc8e) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x0001cc8e) field_cale_ev2_pane_g

0xc5c5,	// (0x00019b6d) field_cale_ev2_pane_t1_ParamLimits

0xc5c5,	// (0x00019b6d) field_cale_ev2_pane_t1

0xc5dc,	// (0x00019b84) field_cale_ev2_pane_t2_ParamLimits

0xc5dc,	// (0x00019b84) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x0001cc97) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x0001cc97) field_cale_ev2_pane_t

0x3445,	// (0x000109ed) main_postcard_pane_g5_ParamLimits

0x3445,	// (0x000109ed) main_postcard_pane_g5

0x345b,	// (0x00010a03) main_postcard_pane_g6_ParamLimits

0x345b,	// (0x00010a03) main_postcard_pane_g6

0x9578,	// (0x00016b20) camera2_autofocus_pane_cp_ParamLimits

0x9578,	// (0x00016b20) camera2_autofocus_pane_cp

0x9578,	// (0x00016b20) main_mup3_pane

0x4488,	// (0x00011a30) main_mup3_pane_g1_ParamLimits

0x4488,	// (0x00011a30) main_mup3_pane_g1

0x44aa,	// (0x00011a52) main_mup3_pane_g2_ParamLimits

0x44aa,	// (0x00011a52) main_mup3_pane_g2

0x452a,	// (0x00011ad2) main_mup3_pane_g3_ParamLimits

0x452a,	// (0x00011ad2) main_mup3_pane_g3

0x4570,	// (0x00011b18) main_mup3_pane_g4_ParamLimits

0x4570,	// (0x00011b18) main_mup3_pane_g4

0x45b6,	// (0x00011b5e) main_mup3_pane_g5_ParamLimits

0x45b6,	// (0x00011b5e) main_mup3_pane_g5

0x45fc,	// (0x00011ba4) main_mup3_pane_g6_ParamLimits

0x45fc,	// (0x00011ba4) main_mup3_pane_g6

0x9c7d,	// (0x00017225) main_mup3_pane_g7_ParamLimits

0x9c7d,	// (0x00017225) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x0001cca7) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x0001cca7) main_mup3_pane_g

0x467a,	// (0x00011c22) main_mup3_pane_t1_ParamLimits

0x467a,	// (0x00011c22) main_mup3_pane_t1

0x46ee,	// (0x00011c96) main_mup3_pane_t2_ParamLimits

0x46ee,	// (0x00011c96) main_mup3_pane_t2

0x47c2,	// (0x00011d6a) main_mup3_pane_t4_ParamLimits

0x47c2,	// (0x00011d6a) main_mup3_pane_t4

0x4818,	// (0x00011dc0) main_mup3_pane_t5_ParamLimits

0x4818,	// (0x00011dc0) main_mup3_pane_t5

0x48d4,	// (0x00011e7c) main_mup3_pane_t6_ParamLimits

0x48d4,	// (0x00011e7c) main_mup3_pane_t6

0x0005,

0xf710,	// (0x0001ccb8) main_mup3_pane_t_ParamLimits

0xf710,	// (0x0001ccb8) main_mup3_pane_t

0x498c,	// (0x00011f34) mup3_progress_pane_ParamLimits

0x498c,	// (0x00011f34) mup3_progress_pane

0x4a18,	// (0x00011fc0) popup_mup3_control_window_ParamLimits

0x4a18,	// (0x00011fc0) popup_mup3_control_window

0xc5f1,	// (0x00019b99) popup_mup3_text_window

0x4a4a,	// (0x00011ff2) mup3_progress_pane_t1

0x4a69,	// (0x00012011) mup3_progress_pane_t2

0xc5f9,	// (0x00019ba1) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x0001ccc5) mup3_progress_pane_t

0xc616,	// (0x00019bbe) mup_progress_pane_cp03

0x9509,	// (0x00016ab1) bg_tb_trans_pane_cp04

0x4a88,	// (0x00012030) mup3_volume_pane

0x4a90,	// (0x00012038) popup_mup3_control_window_g1

0x4a99,	// (0x00012041) mup3_volume_pane_g1

0x4aa2,	// (0x0001204a) mup3_volume_pane_g2

0x4aab,	// (0x00012053) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x0001cccc) mup3_volume_pane_g

0x9509,	// (0x00016ab1) bg_tb_trans_pane_cp03

0xc626,	// (0x00019bce) popup_mup3_text_window_g1

0xc62e,	// (0x00019bd6) popup_mup3_text_window_t1

0x9d5d,	// (0x00017305) list_calc_item_pane_g1_ParamLimits

0xc045,	// (0x000195ed) mup_volume_pane_cp_g1

0x43e7,	// (0x0001198f) main_touch_calib_pane_t3

0x43fb,	// (0x000119a3) main_touch_calib_pane_t4

0x440f,	// (0x000119b7) main_touch_calib_pane_t5

0x9513,	// (0x00016abb) aid_cell_size_toolbar2

0x951b,	// (0x00016ac3) aid_popup3_width_pane

0x9527,	// (0x00016acf) aid_zoom_text_msg_primary

0x1cf7,	// (0x0000f29f) vorec_t7

0x9d21,	// (0x000172c9) bg_calc_paper_pane_g1_ParamLimits

0x9d2d,	// (0x000172d5) bg_calc_paper_pane_g2_ParamLimits

0x9d39,	// (0x000172e1) bg_calc_paper_pane_g3_ParamLimits

0x9d45,	// (0x000172ed) bg_calc_paper_pane_g4_ParamLimits

0x9d51,	// (0x000172f9) bg_calc_paper_pane_g5_ParamLimits

0x15fe,	// (0x0000eba6) bg_calc_paper_pane_g6_ParamLimits

0x160d,	// (0x0000ebb5) bg_calc_paper_pane_g7_ParamLimits

0x161c,	// (0x0000ebc4) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0001c6a1) bg_calc_paper_pane_g_ParamLimits

0x162f,	// (0x0000ebd7) calc_bg_paper_pane_g9_ParamLimits

0x9578,	// (0x00016b20) image_qvga_pane_ParamLimits

0x9578,	// (0x00016b20) image_qvga_pane

0x9bf4,	// (0x0001719c) bg_popup_sub_pane_cp04_ParamLimits

0xac86,	// (0x0001822e) popup_mup_playback_window_g1_ParamLimits

0xac92,	// (0x0001823a) popup_mup_playback_window_t1_ParamLimits

0xaca7,	// (0x0001824f) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0001c9ff) popup_mup_playback_window_t_ParamLimits

0x9c7d,	// (0x00017225) main_mup2_pane_g3_ParamLimits

0x9c7d,	// (0x00017225) main_mup2_pane_g3

0x2023,	// (0x0000f5cb) popup_toolbar_window_cp04

0xb09c,	// (0x00018644) popup_call2_audio_second_window_g3_ParamLimits

0xb09c,	// (0x00018644) popup_call2_audio_second_window_g3

0xb4b4,	// (0x00018a5c) popup_call2_audio_first_window_g4_ParamLimits

0xb4b4,	// (0x00018a5c) popup_call2_audio_first_window_g4

0xbadb,	// (0x00019083) popup_call2_audio_in_window_g4_ParamLimits

0xbadb,	// (0x00019083) popup_call2_audio_in_window_g4

0x3573,	// (0x00010b1b) aid_area_sk_bg_cut_ParamLimits

0x3573,	// (0x00010b1b) aid_area_sk_bg_cut

0xacbc,	// (0x00018264) aid_area_sk_bg_cut_2_ParamLimits

0xacbc,	// (0x00018264) aid_area_sk_bg_cut_2

0x9509,	// (0x00016ab1) aid_placing_details_win

0x9509,	// (0x00016ab1) aid_placing_details_win_2

0x9c6f,	// (0x00017217) camera2_autofocus_pane_g1_ParamLimits

0x1315,	// (0x0000e8bd) popup_fixed_preview_cale_window_ParamLimits

0x1315,	// (0x0000e8bd) popup_fixed_preview_cale_window

0xaa1e,	// (0x00017fc6) navi_slider_pane_g3

0xaa27,	// (0x00017fcf) navi_slider_pane_g4

0xaa30,	// (0x00017fd8) navi_slider_pane_g5

0xaa1e,	// (0x00017fc6) navi_slider_pane_g6

0xaa39,	// (0x00017fe1) navi_slider_pane_g7

0xab7b,	// (0x00018123) mup_scale_pane_g3

0xab84,	// (0x0001812c) mup_scale_pane_g4

0xab8d,	// (0x00018135) mup_scale_pane_g5

0x3214,	// (0x000107bc) mup_scale_pane_g6

0x321d,	// (0x000107c5) mup_scale_pane_g7

0x9f78,	// (0x00017520) cams2_slider_pane_g3

0x9f78,	// (0x00017520) cams2_slider_pane_g4

0x9f78,	// (0x00017520) cams2_slider_pane_g5

0x9f78,	// (0x00017520) cams2_slider_pane_g6

0x9f78,	// (0x00017520) cams2_slider_pane_g7

0x9f78,	// (0x00017520) camera2_autofocus_pane_cp_g1

0xbdeb,	// (0x00019393) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdeb,	// (0x00019393) bg_popup_preview_window_pane_cp02

0xc63c,	// (0x00019be4) list_fp_cale_pane_ParamLimits

0xc63c,	// (0x00019be4) list_fp_cale_pane

0xc648,	// (0x00019bf0) popup_fixed_preview_cale_window_t1_ParamLimits

0xc648,	// (0x00019bf0) popup_fixed_preview_cale_window_t1

0x4ab4,	// (0x0001205c) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ab4,	// (0x0001205c) popup_fixed_preview_cale_window_t2

0x4ac9,	// (0x00012071) popup_fixed_preview_cale_window_t3_ParamLimits

0x4ac9,	// (0x00012071) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x0001ccd3) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x0001ccd3) popup_fixed_preview_cale_window_t

0x4ade,	// (0x00012086) list_single_fp_cale_pane_ParamLimits

0x4ade,	// (0x00012086) list_single_fp_cale_pane

0xc666,	// (0x00019c0e) list_single_fp_cale_pane_g1_ParamLimits

0xc666,	// (0x00019c0e) list_single_fp_cale_pane_g1

0xc672,	// (0x00019c1a) list_single_fp_cale_pane_g2_ParamLimits

0xc672,	// (0x00019c1a) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x0001ccda) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x0001ccda) list_single_fp_cale_pane_g

0xc68b,	// (0x00019c33) list_single_fp_cale_pane_t1_ParamLimits

0xc68b,	// (0x00019c33) list_single_fp_cale_pane_t1

0xc69d,	// (0x00019c45) list_single_fp_cale_pane_t2_ParamLimits

0xc69d,	// (0x00019c45) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x0001cce1) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x0001cce1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9509,	// (0x00016ab1) main_dialer_pane

0x9509,	// (0x00016ab1) aid_cell_size_keypad

0x9509,	// (0x00016ab1) dialer_ne_pane

0x9509,	// (0x00016ab1) grid_dialer_command_1_pane

0x9509,	// (0x00016ab1) grid_dialer_command_2_pane

0x9509,	// (0x00016ab1) grid_dialer_keypad_pane

0x4af4,	// (0x0001209c) bg_popup_call_pane_cp06_ParamLimits

0x4af4,	// (0x0001209c) bg_popup_call_pane_cp06

0x4af4,	// (0x0001209c) dialer_ne_clear_pane_ParamLimits

0x4af4,	// (0x0001209c) dialer_ne_clear_pane

0x9f78,	// (0x00017520) dialer_ne_pane_g1

0xaaf7,	// (0x0001809f) dialer_ne_pane_t1_ParamLimits

0xaaf7,	// (0x0001809f) dialer_ne_pane_t1

0x4b02,	// (0x000120aa) dialer_ne_pane_t2_ParamLimits

0x4b02,	// (0x000120aa) dialer_ne_pane_t2

0x4b2a,	// (0x000120d2) dialer_ne_pane_t3_ParamLimits

0x4b2a,	// (0x000120d2) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x0001cce6) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x0001cce6) dialer_ne_pane_t

0x4b2a,	// (0x000120d2) dialer_ne_pane_t3_copy1_ParamLimits

0x4b2a,	// (0x000120d2) dialer_ne_pane_t3_copy1

0xc6d0,	// (0x00019c78) cell_dialer_keypad_pane_ParamLimits

0xc6d0,	// (0x00019c78) cell_dialer_keypad_pane

0x9578,	// (0x00016b20) cell_dialer_command_1_pane_ParamLimits

0x9578,	// (0x00016b20) cell_dialer_command_1_pane

0xc6e7,	// (0x00019c8f) cell_dialer_command_2_pane_ParamLimits

0xc6e7,	// (0x00019c8f) cell_dialer_command_2_pane

0x9578,	// (0x00016b20) bg_button_pane_cp02_ParamLimits

0x9578,	// (0x00016b20) bg_button_pane_cp02

0x9c6f,	// (0x00017217) cell_dialer_keypad_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) cell_dialer_keypad_pane_g1

0x9578,	// (0x00016b20) bg_button_pane_cp03_ParamLimits

0x9578,	// (0x00016b20) bg_button_pane_cp03

0x9c6f,	// (0x00017217) cell_dialer_command_1_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) cell_dialer_command_1_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp04

0x9f78,	// (0x00017520) cell_dialer_command_2_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp06

0x9f78,	// (0x00017520) dialer_ne_clear_pane_g1

0xa8e8,	// (0x00017e90) navi_pane_g2

0xa916,	// (0x00017ebe) navi_pane_g3

0x0002,

0xf35a,	// (0x0001c902) navi_pane_g

0xa9a5,	// (0x00017f4d) navi_pane_mv_g2

0xa9cc,	// (0x00017f74) navi_pane_mv_g5

0x2ff9,	// (0x000105a1) navi_pane_mv_t1

0x9d03,	// (0x000172ab) main_clock2_pane

0x9578,	// (0x00016b20) main_clock2_list_pane_ParamLimits

0x9578,	// (0x00016b20) main_clock2_list_pane

0x4bc0,	// (0x00012168) main_clock2_pane_t1_ParamLimits

0x4bc0,	// (0x00012168) main_clock2_pane_t1

0x4bfb,	// (0x000121a3) main_clock2_pane_t2_ParamLimits

0x4bfb,	// (0x000121a3) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x0001ccf2) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x0001ccf2) main_clock2_pane_t

0x4c9b,	// (0x00012243) popup_clock_analogue_window_cp03_ParamLimits

0x4c9b,	// (0x00012243) popup_clock_analogue_window_cp03

0x4cc0,	// (0x00012268) popup_clock_digital_window_cp02_ParamLimits

0x4cc0,	// (0x00012268) popup_clock_digital_window_cp02

0x4d39,	// (0x000122e1) main_clock2_list_single_pane_ParamLimits

0x4d39,	// (0x000122e1) main_clock2_list_single_pane

0x9f38,	// (0x000174e0) list_highlight_pane_cp05

0xc72a,	// (0x00019cd2) main_clock2_list_single_pane_t1

0x2023,	// (0x0000f5cb) popup_toolbar_window_cp04_ParamLimits

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g2_ParamLimits

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g2

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g3_ParamLimits

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g3

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g4_ParamLimits

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g4

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g5_ParamLimits

0x9c7d,	// (0x00017225) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x0001cc36) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x0001cc36) camera2_autofocus_pane_g

0x4444,	// (0x000119ec) camera2_autofocus_pane_cp_g2

0x444c,	// (0x000119f4) camera2_autofocus_pane_cp_g3

0x4454,	// (0x000119fc) camera2_autofocus_pane_cp_g4

0x445c,	// (0x00011a04) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x0001cc9c) camera2_autofocus_pane_cp_g

0x9509,	// (0x00016ab1) popup_dialer_spcha_window

0x9509,	// (0x00016ab1) bg_popup_sub_pane_cp07

0x9509,	// (0x00016ab1) list_spcha_pane

0xc738,	// (0x00019ce0) list_single_spcha_pane_ParamLimits

0xc738,	// (0x00019ce0) list_single_spcha_pane

0x9509,	// (0x00016ab1) list_highlight_pane_cp06

0xa4d9,	// (0x00017a81) list_single_spcha_pane_t1

0xb885,	// (0x00018e2d) popup_call2_audio_out_window_g4_ParamLimits

0xb885,	// (0x00018e2d) popup_call2_audio_out_window_g4

0x9509,	// (0x00016ab1) main_imed2_pane

0xbe11,	// (0x000193b9) popup_imed_adjust2_window

0x3de3,	// (0x0001138b) popup_imed_trans_window_ParamLimits

0x3de3,	// (0x0001138b) popup_imed_trans_window

0xc11a,	// (0x000196c2) popup_blid_sat_info2_window_t1

0xc128,	// (0x000196d0) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x0001cbcb) popup_blid_sat_info2_window_t

0x4dea,	// (0x00012392) aid_size_cell_colour_35

0x4e0a,	// (0x000123b2) aid_size_cell_colour_112

0x4e2a,	// (0x000123d2) aid_size_cell_effect

0xab0b,	// (0x000180b3) bg_tb_trans_pane_cp02

0xa3ff,	// (0x000179a7) heading_imed_pane

0x4e4a,	// (0x000123f2) listscroll_imed_pane

0xc74a,	// (0x00019cf2) heading_imed_pane_g1

0xc752,	// (0x00019cfa) heading_imed_pane_t1

0xc760,	// (0x00019d08) grid_imed_colour_35_pane_ParamLimits

0xc760,	// (0x00019d08) grid_imed_colour_35_pane

0x4e56,	// (0x000123fe) grid_imed_effect_pane

0xc778,	// (0x00019d20) list_imed_aspect_pane

0x4e6c,	// (0x00012414) scroll_pane_cp027_ParamLimits

0x4e6c,	// (0x00012414) scroll_pane_cp027

0x4e7d,	// (0x00012425) cell_imed_effect_pane_ParamLimits

0x4e7d,	// (0x00012425) cell_imed_effect_pane

0xc780,	// (0x00019d28) cell_imed_colour_pane_ParamLimits

0xc780,	// (0x00019d28) cell_imed_colour_pane

0xc7c2,	// (0x00019d6a) cell_imed_colour_pane_g1_ParamLimits

0xc7c2,	// (0x00019d6a) cell_imed_colour_pane_g1

0xc7d3,	// (0x00019d7b) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7d3,	// (0x00019d7b) hgihlgiht_grid_pane_cp016

0x4ea4,	// (0x0001244c) cell_imed_effect_pane_g1

0x4eac,	// (0x00012454) grid_highlight_pane_cp017

0xc7e4,	// (0x00019d8c) list_imed_single_pane_ParamLimits

0xc7e4,	// (0x00019d8c) list_imed_single_pane

0x9509,	// (0x00016ab1) list_highlight_pane_cp07

0xc7f9,	// (0x00019da1) list_imed_aspect_pane_comp1_t1

0xab0b,	// (0x000180b3) bg_tb_trans_pane_cp05

0xc81b,	// (0x00019dc3) popup_imed_adjust2_window_g1

0xc842,	// (0x00019dea) popup_imed_adjust2_window_t1

0xc85a,	// (0x00019e02) slider_imed_adjust_pane

0xc86e,	// (0x00019e16) slider_imed_adjust_pane_g1

0xc87e,	// (0x00019e26) slider_imed_adjust_pane_g2

0xc88e,	// (0x00019e36) slider_imed_adjust_pane_g3

0xc89f,	// (0x00019e47) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x0001cd0f) slider_imed_adjust_pane_g

0x4eb5,	// (0x0001245d) aid_size_cell_clipart2

0x4ec1,	// (0x00012469) grid_imed_clipart_pane

0xc8b0,	// (0x00019e58) scroll_pane_cp031

0x4ecb,	// (0x00012473) cell_imed_clipart_pane_ParamLimits

0x4ecb,	// (0x00012473) cell_imed_clipart_pane

0x4eed,	// (0x00012495) cell_imed_clipart_pane_g1

0x9509,	// (0x00016ab1) grid_highlight_pane_cp014

0x4b9c,	// (0x00012144) main_clock2_pane_g1_ParamLimits

0x4b9c,	// (0x00012144) main_clock2_pane_g1

0x4ce0,	// (0x00012288) aid_call2_pane_cp10

0x4cf2,	// (0x0001229a) aid_call_pane_cp10

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g1

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g2

0x4d04,	// (0x000122ac) popup_clock_analogue_window_cp10_g3

0x4d04,	// (0x000122ac) popup_clock_analogue_window_cp10_g4

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x0001ccfd) popup_clock_analogue_window_cp10_g

0x4d1a,	// (0x000122c2) popup_clock_analogue_window_cp10_t1

0x4d4b,	// (0x000122f3) clock_digital_number_pane_cp10_ParamLimits

0x4d4b,	// (0x000122f3) clock_digital_number_pane_cp10

0x4d63,	// (0x0001230b) clock_digital_number_pane_cp11_ParamLimits

0x4d63,	// (0x0001230b) clock_digital_number_pane_cp11

0x4d7b,	// (0x00012323) clock_digital_number_pane_cp12_ParamLimits

0x4d7b,	// (0x00012323) clock_digital_number_pane_cp12

0x4d95,	// (0x0001233d) clock_digital_number_pane_cp13_ParamLimits

0x4d95,	// (0x0001233d) clock_digital_number_pane_cp13

0x4daf,	// (0x00012357) clock_digital_separator_pane_cp10_ParamLimits

0x4daf,	// (0x00012357) clock_digital_separator_pane_cp10

0x4dc9,	// (0x00012371) popup_clock_digital_window_cp02_t1_ParamLimits

0x4dc9,	// (0x00012371) popup_clock_digital_window_cp02_t1

0x9bec,	// (0x00017194) clock_digital_number_pane_cp10_g1

0x9bec,	// (0x00017194) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x0001cd18) clock_digital_number_pane_cp10_g

0x9bec,	// (0x00017194) clock_digital_separator_pane_cp10_g1

0x9bec,	// (0x00017194) clock_digital_separator_pane_g2_cp10

0xa9d4,	// (0x00017f7c) navi_pane_vded_g4

0xa9dd,	// (0x00017f85) navi_pane_vded_g5

0xa9e6,	// (0x00017f8e) navi_pane_vded_t1

0x9509,	// (0x00016ab1) main_vded_pane

0x4ef6,	// (0x0001249e) main_vded_pane_g1

0x4f00,	// (0x000124a8) main_vded_pane_g2

0x4f0a,	// (0x000124b2) main_vded_pane_g3

0x0002,

0xf775,	// (0x0001cd1d) main_vded_pane_g

0x4f14,	// (0x000124bc) main_vded_pane_t1

0x4f22,	// (0x000124ca) main_vded_pane_t2

0x0001,

0xf77c,	// (0x0001cd24) main_vded_pane_t

0x4f30,	// (0x000124d8) vded_slider_pane

0x4f38,	// (0x000124e0) vded_video_pane

0xc8b8,	// (0x00019e60) vded_video_pane_g1

0x4f40,	// (0x000124e8) vded_video_pane_g2

0x9f78,	// (0x00017520) vded_video_pane_g3

0x0002,

0xf781,	// (0x0001cd29) vded_video_pane_g

0xc8c2,	// (0x00019e6a) vded_slider_pane_g1

0xc045,	// (0x000195ed) vded_slider_pane_g2

0xc8cb,	// (0x00019e73) vded_slider_pane_g3

0xc8d4,	// (0x00019e7c) vded_slider_pane_g4

0xc8dd,	// (0x00019e85) vded_slider_pane_g5

0x0004,

0xf788,	// (0x0001cd30) vded_slider_pane_g

0x4a00,	// (0x00011fa8) mup3_rocker_pane_ParamLimits

0x4a00,	// (0x00011fa8) mup3_rocker_pane

0x4f49,	// (0x000124f1) mup3_control_keys_pane_g1

0x4f51,	// (0x000124f9) mup3_control_keys_pane_g2

0x4f59,	// (0x00012501) mup3_control_keys_pane_g3

0x4f61,	// (0x00012509) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x0001cd3b) mup3_control_keys_pane_g

0x134c,	// (0x0000e8f4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x134c,	// (0x0000e8f4) popup_toolbar2_fixed_window_cp01

0x4a34,	// (0x00011fdc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a34,	// (0x00011fdc) popup_toolbar2_fixed_window_cp02

0xb20e,	// (0x000187b6) popup_call2_audio_second_window_t4_ParamLimits

0xb20e,	// (0x000187b6) popup_call2_audio_second_window_t4

0xb74a,	// (0x00018cf2) popup_call2_audio_first_window_t6_ParamLimits

0xb74a,	// (0x00018cf2) popup_call2_audio_first_window_t6

0xb988,	// (0x00018f30) popup_call2_audio_out_window_t6_ParamLimits

0xb988,	// (0x00018f30) popup_call2_audio_out_window_t6

0x9509,	// (0x00016ab1) main_vitu_pane

0x9578,	// (0x00016b20) aid_size_cell_itu_ParamLimits

0x9578,	// (0x00016b20) aid_size_cell_itu

0x9578,	// (0x00016b20) bg_popup_window_pane_cp08_ParamLimits

0x9578,	// (0x00016b20) bg_popup_window_pane_cp08

0x9578,	// (0x00016b20) field_vitu_entry_pane_ParamLimits

0x9578,	// (0x00016b20) field_vitu_entry_pane

0x9578,	// (0x00016b20) grid_vitu_function_pane_ParamLimits

0x9578,	// (0x00016b20) grid_vitu_function_pane

0x9578,	// (0x00016b20) grid_vitu_itu_pane_ParamLimits

0x9578,	// (0x00016b20) grid_vitu_itu_pane

0x9578,	// (0x00016b20) cell_vitu_itu_pane_ParamLimits

0x9578,	// (0x00016b20) cell_vitu_itu_pane

0x9578,	// (0x00016b20) cell_vitu_function_pane_ParamLimits

0x9578,	// (0x00016b20) cell_vitu_function_pane

0x9578,	// (0x00016b20) bg_popup_sub_pane_cp08_ParamLimits

0x9578,	// (0x00016b20) bg_popup_sub_pane_cp08

0x9f4a,	// (0x000174f2) field_vitu_entry_pane_t1_ParamLimits

0x9f4a,	// (0x000174f2) field_vitu_entry_pane_t1

0xc8e6,	// (0x00019e8e) field_vitu_entry_pane_t2_ParamLimits

0xc8e6,	// (0x00019e8e) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x0001cd44) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x0001cd44) field_vitu_entry_pane_t

0xbf6c,	// (0x00019514) bg_button_pane_cp05_ParamLimits

0xbf6c,	// (0x00019514) bg_button_pane_cp05

0xc903,	// (0x00019eab) cell_vitu_itu_pane_g1

0xaae3,	// (0x0001808b) cell_vitu_itu_pane_t1_ParamLimits

0xaae3,	// (0x0001808b) cell_vitu_itu_pane_t1

0xaae3,	// (0x0001808b) cell_vitu_itu_pane_t2_ParamLimits

0xaae3,	// (0x0001808b) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x0001cd49) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x0001cd49) cell_vitu_itu_pane_t

0x9509,	// (0x00016ab1) bg_button_pane_cp07

0x9f78,	// (0x00017520) cell_vitu_function_pane_g1

0x9cad,	// (0x00017255) main_calc_pane_g1

0x1173,	// (0x0000e71b) aid_visual_content_pane

0x9509,	// (0x00016ab1) main_vradio_pane

0x9c6f,	// (0x00017217) main_vradio_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) main_vradio_pane_g1

0x9c7d,	// (0x00017225) main_vradio_pane_g2_ParamLimits

0x9c7d,	// (0x00017225) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0001cd50) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0001cd50) main_vradio_pane_g

0x9f4a,	// (0x000174f2) main_vradio_pane_t1_ParamLimits

0x9f4a,	// (0x000174f2) main_vradio_pane_t1

0x9f4a,	// (0x000174f2) main_vradio_pane_t2_ParamLimits

0x9f4a,	// (0x000174f2) main_vradio_pane_t2

0xaaf7,	// (0x0001809f) main_vradio_pane_t3_ParamLimits

0xaaf7,	// (0x0001809f) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x0001cd55) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x0001cd55) main_vradio_pane_t

0x9578,	// (0x00016b20) vradio_rocker_control_pane_ParamLimits

0x9578,	// (0x00016b20) vradio_rocker_control_pane

0x9578,	// (0x00016b20) vradio_station_info_pane_ParamLimits

0x9578,	// (0x00016b20) vradio_station_info_pane

0x9578,	// (0x00016b20) vradio_frequency_info_pane_ParamLimits

0x9578,	// (0x00016b20) vradio_frequency_info_pane

0x9f78,	// (0x00017520) vradio_station_info_pane_g1

0xaae3,	// (0x0001808b) vradio_station_info_pane_t1_ParamLimits

0xaae3,	// (0x0001808b) vradio_station_info_pane_t1

0xaaf7,	// (0x0001809f) vradio_station_info_pane_t2_ParamLimits

0xaaf7,	// (0x0001809f) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x0001cd5c) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x0001cd5c) vradio_station_info_pane_t

0x9509,	// (0x00016ab1) vradio_tuning_pane

0x4f71,	// (0x00012519) vradio_rocker_control_pane_g1

0xc91f,	// (0x00019ec7) vradio_rocker_control_pane_g2

0x4f7b,	// (0x00012523) vradio_rocker_control_pane_g3

0x4f85,	// (0x0001252d) vradio_rocker_control_pane_g4

0x4f8f,	// (0x00012537) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x0001cd61) vradio_rocker_control_pane_g

0x9f78,	// (0x00017520) vradio_frequency_info_pane_g1

0x9f4a,	// (0x000174f2) vradio_frequency_info_pane_t1_ParamLimits

0x9f4a,	// (0x000174f2) vradio_frequency_info_pane_t1

0x4f99,	// (0x00012541) vradio_tuning_pane_g1

0x4fa4,	// (0x0001254c) vradio_tuning_pane_t1

0x9537,	// (0x00016adf) area_side_right_pane_ParamLimits

0x9537,	// (0x00016adf) area_side_right_pane

0xbdb2,	// (0x0001935a) status_small_pane_g1

0xbdba,	// (0x00019362) status_small_pane_g2

0xbdc3,	// (0x0001936b) status_small_pane_g3

0xbdcc,	// (0x00019374) status_small_pane_g4

0x0003,

0xf585,	// (0x0001cb2d) status_small_pane_g

0xbdd5,	// (0x0001937d) status_small_pane_t1

0x9509,	// (0x00016ab1) main_video3_pane

0xc927,	// (0x00019ecf) cams_zoom_vslider_pane

0xc92f,	// (0x00019ed7) image3_wide_pane_ParamLimits

0xc92f,	// (0x00019ed7) image3_wide_pane

0xc949,	// (0x00019ef1) image3_wide_small_pane

0xc955,	// (0x00019efd) main_video3_pane_g1_ParamLimits

0xc955,	// (0x00019efd) main_video3_pane_g1

0xc971,	// (0x00019f19) main_video3_pane_g2_ParamLimits

0xc971,	// (0x00019f19) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x0001cd6c) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x0001cd6c) main_video3_pane_g

0xc98d,	// (0x00019f35) main_video3_pane_t1_ParamLimits

0xc98d,	// (0x00019f35) main_video3_pane_t1

0xc9b8,	// (0x00019f60) main_video3_pane_t2_ParamLimits

0xc9b8,	// (0x00019f60) main_video3_pane_t2

0xc9e3,	// (0x00019f8b) main_video3_pane_t3_ParamLimits

0xc9e3,	// (0x00019f8b) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x0001cd71) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x0001cd71) main_video3_pane_t

0xca10,	// (0x00019fb8) cams_zoom_vslider_pane_g1

0xca19,	// (0x00019fc1) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x0001cd78) cams_zoom_vslider_pane_g

0xca21,	// (0x00019fc9) small_slider_vertical_pane

0x9f78,	// (0x00017520) small_slider_vertical_pane_g1

0x9f78,	// (0x00017520) small_slider_vertical_pane_g2

0xca29,	// (0x00019fd1) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x0001cd7d) small_slider_vertical_pane_g

0x9509,	// (0x00016ab1) main_hwr_training_pane

0xca32,	// (0x00019fda) hwr_training_instruct_pane_ParamLimits

0xca32,	// (0x00019fda) hwr_training_instruct_pane

0x4fb3,	// (0x0001255b) hwr_training_navi_pane_ParamLimits

0x4fb3,	// (0x0001255b) hwr_training_navi_pane

0x4fd2,	// (0x0001257a) hwr_training_write_pane_ParamLimits

0x4fd2,	// (0x0001257a) hwr_training_write_pane

0x9509,	// (0x00016ab1) bg_frame_shadow_pane

0xca69,	// (0x0001a011) hwr_training_write_pane_g1

0xca71,	// (0x0001a019) hwr_training_write_pane_g2

0xca79,	// (0x0001a021) hwr_training_write_pane_g3

0xca81,	// (0x0001a029) hwr_training_write_pane_g4

0xca89,	// (0x0001a031) hwr_training_write_pane_g5

0xca91,	// (0x0001a039) hwr_training_write_pane_g6

0xca99,	// (0x0001a041) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x0001cd84) hwr_training_write_pane_g

0xcaa1,	// (0x0001a049) hwr_training_navi_pane_g1_ParamLimits

0xcaa1,	// (0x0001a049) hwr_training_navi_pane_g1

0xcab3,	// (0x0001a05b) hwr_training_navi_pane_g2_ParamLimits

0xcab3,	// (0x0001a05b) hwr_training_navi_pane_g2

0xcac5,	// (0x0001a06d) hwr_training_navi_pane_g3_ParamLimits

0xcac5,	// (0x0001a06d) hwr_training_navi_pane_g3

0xcad5,	// (0x0001a07d) hwr_training_navi_pane_g4_ParamLimits

0xcad5,	// (0x0001a07d) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x0001cd93) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x0001cd93) hwr_training_navi_pane_g

0xcae2,	// (0x0001a08a) hwr_training_navi_pane_t1

0x501c,	// (0x000125c4) list_single_hwr_training_instruct_pane_ParamLimits

0x501c,	// (0x000125c4) list_single_hwr_training_instruct_pane

0xcaf0,	// (0x0001a098) list_single_hwr_training_instruct_pane_t1

0xc21b,	// (0x000197c3) bg_frame_shadow_pane_g1

0xcaff,	// (0x0001a0a7) bg_frame_shadow_pane_g2

0xcb07,	// (0x0001a0af) bg_frame_shadow_pane_g3

0xcb0f,	// (0x0001a0b7) bg_frame_shadow_pane_g4

0xcb17,	// (0x0001a0bf) bg_frame_shadow_pane_g5

0xcb1f,	// (0x0001a0c7) bg_frame_shadow_pane_g6

0xcb27,	// (0x0001a0cf) bg_frame_shadow_pane_g7

0x9ddf,	// (0x00017387) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x0001cd9e) bg_frame_shadow_pane_g

0x9509,	// (0x00016ab1) main_video_tele_dialer_pane

0x5032,	// (0x000125da) aid_size_cell_video_keypad_ParamLimits

0x5032,	// (0x000125da) aid_size_cell_video_keypad

0x504c,	// (0x000125f4) grid_video_dialer_keypad_pane_ParamLimits

0x504c,	// (0x000125f4) grid_video_dialer_keypad_pane

0x509a,	// (0x00012642) video_down_pane_cp_ParamLimits

0x509a,	// (0x00012642) video_down_pane_cp

0x50cc,	// (0x00012674) cell_video_dialer_keypad_pane_ParamLimits

0x50cc,	// (0x00012674) cell_video_dialer_keypad_pane

0xcb2f,	// (0x0001a0d7) bg_button_pane_cp08_ParamLimits

0xcb2f,	// (0x0001a0d7) bg_button_pane_cp08

0x50ee,	// (0x00012696) cell_video_dialer_keypad_pane_g1_ParamLimits

0x50ee,	// (0x00012696) cell_video_dialer_keypad_pane_g1

0x49ea,	// (0x00011f92) mup3_rocker2_pane_ParamLimits

0x49ea,	// (0x00011f92) mup3_rocker2_pane

0x9f78,	// (0x00017520) mup3_rocker2_pane_g1

0x3cd2,	// (0x0001127a) main_dialer2_pane

0x9509,	// (0x00016ab1) main_mp4_pane

0xcb59,	// (0x0001a101) main_mp4_pane_g1_ParamLimits

0xcb59,	// (0x0001a101) main_mp4_pane_g1

0xcb59,	// (0x0001a101) main_mp4_pane_g2_ParamLimits

0xcb59,	// (0x0001a101) main_mp4_pane_g2

0x5128,	// (0x000126d0) main_mp4_pane_g3_ParamLimits

0x5128,	// (0x000126d0) main_mp4_pane_g3

0xcb67,	// (0x0001a10f) main_mp4_pane_g4_ParamLimits

0xcb67,	// (0x0001a10f) main_mp4_pane_g4

0xcb95,	// (0x0001a13d) main_mp4_pane_g5_ParamLimits

0xcb95,	// (0x0001a13d) main_mp4_pane_g5

0x0007,

0xf816,	// (0x0001cdbe) main_mp4_pane_g_ParamLimits

0xf816,	// (0x0001cdbe) main_mp4_pane_g

0xcc09,	// (0x0001a1b1) main_mp4_pane_t1_ParamLimits

0xcc09,	// (0x0001a1b1) main_mp4_pane_t1

0xcc65,	// (0x0001a20d) main_mp4_pane_t2_ParamLimits

0xcc65,	// (0x0001a20d) main_mp4_pane_t2

0xccb7,	// (0x0001a25f) main_mp4_pane_t3_ParamLimits

0xccb7,	// (0x0001a25f) main_mp4_pane_t3

0xccdd,	// (0x0001a285) main_mp4_pane_t4_ParamLimits

0xccdd,	// (0x0001a285) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0001cdcf) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0001cdcf) main_mp4_pane_t

0xcd21,	// (0x0001a2c9) mp4_progress_pane_ParamLimits

0xcd21,	// (0x0001a2c9) mp4_progress_pane

0xcd6b,	// (0x0001a313) mp4_rocker_pane_ParamLimits

0xcd6b,	// (0x0001a313) mp4_rocker_pane

0xcd93,	// (0x0001a33b) mp4_progress_pane_t1

0xcdac,	// (0x0001a354) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x0001cdd8) mp4_progress_pane_t

0xcdc5,	// (0x0001a36d) mup_progress_pane_cp04

0x9f78,	// (0x00017520) mp4_rocker_pane_g1

0x5164,	// (0x0001270c) aid_cell_size_keypad2_ParamLimits

0x5164,	// (0x0001270c) aid_cell_size_keypad2

0x517a,	// (0x00012722) dialer2_ne_pane_ParamLimits

0x517a,	// (0x00012722) dialer2_ne_pane

0x5194,	// (0x0001273c) grid_dialer2_keypad_pane_ParamLimits

0x5194,	// (0x0001273c) grid_dialer2_keypad_pane

0xbf6c,	// (0x00019514) bg_popup_call_pane_cp07_ParamLimits

0xbf6c,	// (0x00019514) bg_popup_call_pane_cp07

0x51b0,	// (0x00012758) dialer2_ne_pane_t1_ParamLimits

0x51b0,	// (0x00012758) dialer2_ne_pane_t1

0x51ec,	// (0x00012794) cell_dialer2_keypad_pane_ParamLimits

0x51ec,	// (0x00012794) cell_dialer2_keypad_pane

0xcdea,	// (0x0001a392) bg_button_pane_pane_cp04_ParamLimits

0xcdea,	// (0x0001a392) bg_button_pane_pane_cp04

0x520e,	// (0x000127b6) cell_dialer2_keypad_pane_g1_ParamLimits

0x520e,	// (0x000127b6) cell_dialer2_keypad_pane_g1

0x1ef7,	// (0x0000f49f) aid_placing_vt_set_content_ParamLimits

0x1ef7,	// (0x0000f49f) aid_placing_vt_set_content

0x1f1f,	// (0x0000f4c7) aid_placing_vt_set_title_ParamLimits

0x1f1f,	// (0x0000f4c7) aid_placing_vt_set_title

0x9509,	// (0x00016ab1) main_image3_pane

0x52d4,	// (0x0001287c) area_side_right_pane_cp01_ParamLimits

0x52d4,	// (0x0001287c) area_side_right_pane_cp01

0xcb59,	// (0x0001a101) main_image3_pane_g1_ParamLimits

0xcb59,	// (0x0001a101) main_image3_pane_g1

0x52eb,	// (0x00012893) main_image3_pane_g2_ParamLimits

0x52eb,	// (0x00012893) main_image3_pane_g2

0x5313,	// (0x000128bb) main_image3_pane_g3_ParamLimits

0x5313,	// (0x000128bb) main_image3_pane_g3

0x533d,	// (0x000128e5) main_image3_pane_g4_ParamLimits

0x533d,	// (0x000128e5) main_image3_pane_g4

0x0003,

0xf83f,	// (0x0001cde7) main_image3_pane_g_ParamLimits

0xf83f,	// (0x0001cde7) main_image3_pane_g

0x5367,	// (0x0001290f) main_image3_pane_t1_ParamLimits

0x5367,	// (0x0001290f) main_image3_pane_t1

0x53bf,	// (0x00012967) main_image3_pane_t2_ParamLimits

0x53bf,	// (0x00012967) main_image3_pane_t2

0x5411,	// (0x000129b9) main_image3_pane_t3_ParamLimits

0x5411,	// (0x000129b9) main_image3_pane_t3

0x0003,

0xf848,	// (0x0001cdf0) main_image3_pane_t_ParamLimits

0xf848,	// (0x0001cdf0) main_image3_pane_t

0x9578,	// (0x00016b20) grid_sctrl_middle_pane_cp01_ParamLimits

0x9578,	// (0x00016b20) grid_sctrl_middle_pane_cp01

0x5499,	// (0x00012a41) cell_sctrl_middle_pane_cp01_ParamLimits

0x5499,	// (0x00012a41) cell_sctrl_middle_pane_cp01

0x54b6,	// (0x00012a5e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x54b6,	// (0x00012a5e) cell_sctrl_middle_pane_cp01_g1

0x9509,	// (0x00016ab1) main_call4_pane

0x54cc,	// (0x00012a74) aid_size_button_call4_ParamLimits

0x54cc,	// (0x00012a74) aid_size_button_call4

0x54ff,	// (0x00012aa7) call4_windows_pane_ParamLimits

0x54ff,	// (0x00012aa7) call4_windows_pane

0x551e,	// (0x00012ac6) grid_call4_button_pane_ParamLimits

0x551e,	// (0x00012ac6) grid_call4_button_pane

0x5551,	// (0x00012af9) call4_windows_conf_pane

0x5566,	// (0x00012b0e) popup_call4_audio_first_window_ParamLimits

0x5566,	// (0x00012b0e) popup_call4_audio_first_window

0x55b6,	// (0x00012b5e) popup_call4_audio_second_window_ParamLimits

0x55b6,	// (0x00012b5e) popup_call4_audio_second_window

0x55cd,	// (0x00012b75) popup_call4_audio_wait_window_ParamLimits

0x55cd,	// (0x00012b75) popup_call4_audio_wait_window

0x55db,	// (0x00012b83) cell_call4_button_pane_ParamLimits

0x55db,	// (0x00012b83) cell_call4_button_pane

0x5600,	// (0x00012ba8) bg_button_pane_cp09_ParamLimits

0x5600,	// (0x00012ba8) bg_button_pane_cp09

0x560c,	// (0x00012bb4) cell_call4_button_pane_g1_ParamLimits

0x560c,	// (0x00012bb4) cell_call4_button_pane_g1

0x5632,	// (0x00012bda) cell_call4_button_pane_t1_ParamLimits

0x5632,	// (0x00012bda) cell_call4_button_pane_t1

0xce79,	// (0x0001a421) popup_call4_audio_conf_window_ParamLimits

0xce79,	// (0x0001a421) popup_call4_audio_conf_window

0x4a4a,	// (0x00011ff2) mup3_progress_pane_t1_ParamLimits

0x4a69,	// (0x00012011) mup3_progress_pane_t2_ParamLimits

0xc5f9,	// (0x00019ba1) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x0001ccc5) mup3_progress_pane_t_ParamLimits

0xc616,	// (0x00019bbe) mup_progress_pane_cp03_ParamLimits

0x4f69,	// (0x00012511) mup3_control_keys_pane_g4_copy1

0xcd4f,	// (0x0001a2f7) mp4_rocker2_pane_ParamLimits

0xcd4f,	// (0x0001a2f7) mp4_rocker2_pane

0xce8d,	// (0x0001a435) mp4_rocker2_pane_g1

0xce95,	// (0x0001a43d) mp4_rocker2_pane_g2

0xce9d,	// (0x0001a445) mp4_rocker2_pane_g3

0xcea5,	// (0x0001a44d) mp4_rocker2_pane_g4

0xcead,	// (0x0001a455) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x0001cdf9) mp4_rocker2_pane_g

0x9509,	// (0x00016ab1) main_camera4_pane

0x9509,	// (0x00016ab1) main_video4_pane

0x5068,	// (0x00012610) main_video_tele_dialer_pane_t1_ParamLimits

0x5068,	// (0x00012610) main_video_tele_dialer_pane_t1

0x5081,	// (0x00012629) main_video_tele_dialer_pane_t2_ParamLimits

0x5081,	// (0x00012629) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x0001cdaf) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x0001cdaf) main_video_tele_dialer_pane_t

0x5674,	// (0x00012c1c) cam4_autofocus_pane_ParamLimits

0x5674,	// (0x00012c1c) cam4_autofocus_pane

0x568a,	// (0x00012c32) cam4_image_uncrop_pane_ParamLimits

0x568a,	// (0x00012c32) cam4_image_uncrop_pane

0x56a4,	// (0x00012c4c) cam4_indicators_pane_ParamLimits

0x56a4,	// (0x00012c4c) cam4_indicators_pane

0x56cf,	// (0x00012c77) main_camera4_pane_g1_ParamLimits

0x56cf,	// (0x00012c77) main_camera4_pane_g1

0x56e1,	// (0x00012c89) main_camera4_pane_g2_ParamLimits

0x56e1,	// (0x00012c89) main_camera4_pane_g2

0x56f4,	// (0x00012c9c) main_camera4_pane_g3_ParamLimits

0x56f4,	// (0x00012c9c) main_camera4_pane_g3

0x5707,	// (0x00012caf) main_camera4_pane_g4_ParamLimits

0x5707,	// (0x00012caf) main_camera4_pane_g4

0x571a,	// (0x00012cc2) main_camera4_pane_g5_ParamLimits

0x571a,	// (0x00012cc2) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x0001ce04) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x0001ce04) main_camera4_pane_g

0x573e,	// (0x00012ce6) main_camera4_pane_t1_ParamLimits

0x573e,	// (0x00012ce6) main_camera4_pane_t1

0x9c6f,	// (0x00017217) bg_tb_trans_pane_cp06

0xced9,	// (0x0001a481) cam4_indicators_pane_g1

0xceea,	// (0x0001a492) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x0001ce1f) cam4_indicators_pane_g

0xcf02,	// (0x0001a4aa) cam4_indicators_pane_t1

0x57a2,	// (0x00012d4a) main_video4_pane_g1_ParamLimits

0x57a2,	// (0x00012d4a) main_video4_pane_g1

0x57b1,	// (0x00012d59) main_video4_pane_g2_ParamLimits

0x57b1,	// (0x00012d59) main_video4_pane_g2

0x57c0,	// (0x00012d68) main_video4_pane_g3_ParamLimits

0x57c0,	// (0x00012d68) main_video4_pane_g3

0x57cf,	// (0x00012d77) main_video4_pane_g4_ParamLimits

0x57cf,	// (0x00012d77) main_video4_pane_g4

0x0004,

0xf87e,	// (0x0001ce26) main_video4_pane_g_ParamLimits

0xf87e,	// (0x0001ce26) main_video4_pane_g

0x57ed,	// (0x00012d95) vid4_indicators_pane_ParamLimits

0x57ed,	// (0x00012d95) vid4_indicators_pane

0x581b,	// (0x00012dc3) video4_image_uncrop_cif_pane_ParamLimits

0x581b,	// (0x00012dc3) video4_image_uncrop_cif_pane

0x5835,	// (0x00012ddd) video4_image_uncrop_nhd_pane_ParamLimits

0x5835,	// (0x00012ddd) video4_image_uncrop_nhd_pane

0x568a,	// (0x00012c32) video4_image_uncrop_vga_pane_ParamLimits

0x568a,	// (0x00012c32) video4_image_uncrop_vga_pane

0x9578,	// (0x00016b20) bg_tb_trans_pane_cp07

0xcf2c,	// (0x0001a4d4) vid4_indicators_pane_g1

0xcf40,	// (0x0001a4e8) vid4_indicators_pane_g2

0xcf54,	// (0x0001a4fc) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x0001ce31) vid4_indicators_pane_g

0xcf81,	// (0x0001a529) vid4_indicators_pane_t1

0x5849,	// (0x00012df1) cam4_autofocus_pane_g1

0x5851,	// (0x00012df9) cam4_autofocus_pane_g2

0x5859,	// (0x00012e01) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x0001ce3c) cam4_autofocus_pane_g

0x5861,	// (0x00012e09) cam4_autofocus_pane_g3_copy1

0x50b0,	// (0x00012658) video_down_pane_cp_t1

0x50be,	// (0x00012666) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x0001cdb4) video_down_pane_cp_t

0x9578,	// (0x00016b20) popup_vitu2_window_ParamLimits

0x9578,	// (0x00016b20) popup_vitu2_window

0x5869,	// (0x00012e11) aid_size_cell2_itu2_ParamLimits

0x5869,	// (0x00012e11) aid_size_cell2_itu2

0x588f,	// (0x00012e37) aid_size_cell_itu2_ParamLimits

0x588f,	// (0x00012e37) aid_size_cell_itu2

0x4af4,	// (0x0001209c) bg_popup_window_pane_cp09_ParamLimits

0x4af4,	// (0x0001209c) bg_popup_window_pane_cp09

0x58eb,	// (0x00012e93) field_vitu2_entry_pane_ParamLimits

0x58eb,	// (0x00012e93) field_vitu2_entry_pane

0x5911,	// (0x00012eb9) grid_vitu2_function_pane_ParamLimits

0x5911,	// (0x00012eb9) grid_vitu2_function_pane

0x5962,	// (0x00012f0a) grid_vitu2_itu_pane_ParamLimits

0x5962,	// (0x00012f0a) grid_vitu2_itu_pane

0x59f8,	// (0x00012fa0) cell_vitu2_itu_pane_ParamLimits

0x59f8,	// (0x00012fa0) cell_vitu2_itu_pane

0x5a24,	// (0x00012fcc) cell_vitu2_function_pane_ParamLimits

0x5a24,	// (0x00012fcc) cell_vitu2_function_pane

0xcf98,	// (0x0001a540) bg_popup_call_pane_cp08_ParamLimits

0xcf98,	// (0x0001a540) bg_popup_call_pane_cp08

0xcfaf,	// (0x0001a557) field_vitu2_entry_pane_g1

0xcfbb,	// (0x0001a563) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x0001ce43) field_vitu2_entry_pane_g

0x5a63,	// (0x0001300b) field_vitu2_entry_pane_t1_ParamLimits

0x5a63,	// (0x0001300b) field_vitu2_entry_pane_t1

0xcfc7,	// (0x0001a56f) field_vitu2_entry_pane_t2_ParamLimits

0xcfc7,	// (0x0001a56f) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x0001ce4a) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x0001ce4a) field_vitu2_entry_pane_t

0x5a93,	// (0x0001303b) bg_button_pane_cp010_ParamLimits

0x5a93,	// (0x0001303b) bg_button_pane_cp010

0x5aa1,	// (0x00013049) cell_vitu2_itu_pane_g1

0x5ac7,	// (0x0001306f) cell_vitu2_itu_pane_t1_ParamLimits

0x5ac7,	// (0x0001306f) cell_vitu2_itu_pane_t1

0x5b25,	// (0x000130cd) cell_vitu2_itu_pane_t2_ParamLimits

0x5b25,	// (0x000130cd) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x0001ce54) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x0001ce54) cell_vitu2_itu_pane_t

0x9578,	// (0x00016b20) bg_button_pane_cp011

0x5c11,	// (0x000131b9) cell_vitu2_function_pane_g1

0x9509,	// (0x00016ab1) main_myfav_hc_pane

0x5461,	// (0x00012a09) popup_image3_note_pane_ParamLimits

0x5461,	// (0x00012a09) popup_image3_note_pane

0x547d,	// (0x00012a25) popup_image3_tool_bar_pane_ParamLimits

0x547d,	// (0x00012a25) popup_image3_tool_bar_pane

0x5bb3,	// (0x0001315b) cell_vitu2_itu_pane_t3_ParamLimits

0x5bb3,	// (0x0001315b) cell_vitu2_itu_pane_t3

0x9509,	// (0x00016ab1) bg_popup_trans_pane

0xcfec,	// (0x0001a594) grid_image3_tool_bar_pane

0xcff6,	// (0x0001a59e) bg_popup_trans_pane_g1

0xa189,	// (0x00017731) bg_popup_trans_pane_g2

0xcffe,	// (0x0001a5a6) bg_popup_trans_pane_g3

0xd006,	// (0x0001a5ae) bg_popup_trans_pane_g4

0xd00e,	// (0x0001a5b6) bg_popup_trans_pane_g5

0xd016,	// (0x0001a5be) bg_popup_trans_pane_g6

0xd01e,	// (0x0001a5c6) bg_popup_trans_pane_g7

0xd026,	// (0x0001a5ce) bg_popup_trans_pane_g8

0xa169,	// (0x00017711) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x0001ce5b) bg_popup_trans_pane_g

0xd02e,	// (0x0001a5d6) cell_image3_tool_bar_pane_ParamLimits

0xd02e,	// (0x0001a5d6) cell_image3_tool_bar_pane

0x9f78,	// (0x00017520) cell_image3_tool_bar_pane_g1

0x9509,	// (0x00016ab1) bg_popup_trans_pane_cp1

0xd042,	// (0x0001a5ea) popup_image3_note_pane_t1

0xd050,	// (0x0001a5f8) popup_image3_note_pane_t2

0xd05e,	// (0x0001a606) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x0001ce6e) popup_image3_note_pane_t

0xd06c,	// (0x0001a614) popup_image3_note_pane_t3_copy1

0x5c24,	// (0x000131cc) bg_myfav_hc_instruction_pane_ParamLimits

0x5c24,	// (0x000131cc) bg_myfav_hc_instruction_pane

0x5c38,	// (0x000131e0) cell_myfav_contact_pane_ParamLimits

0x5c38,	// (0x000131e0) cell_myfav_contact_pane

0x5c56,	// (0x000131fe) cell_myfav_contact_pane_cp1_ParamLimits

0x5c56,	// (0x000131fe) cell_myfav_contact_pane_cp1

0x5c6e,	// (0x00013216) cell_myfav_contact_pane_cp2_ParamLimits

0x5c6e,	// (0x00013216) cell_myfav_contact_pane_cp2

0x5c86,	// (0x0001322e) cell_myfav_contact_pane_cp3_ParamLimits

0x5c86,	// (0x0001322e) cell_myfav_contact_pane_cp3

0x5c9d,	// (0x00013245) cell_myfav_contact_pane_cp4_ParamLimits

0x5c9d,	// (0x00013245) cell_myfav_contact_pane_cp4

0x5cb5,	// (0x0001325d) cell_myfav_contact_pane_cp5_ParamLimits

0x5cb5,	// (0x0001325d) cell_myfav_contact_pane_cp5

0x5cc9,	// (0x00013271) cell_myfav_contact_pane_cp6_ParamLimits

0x5cc9,	// (0x00013271) cell_myfav_contact_pane_cp6

0x5cdf,	// (0x00013287) cell_myfav_contact_pane_cp7_ParamLimits

0x5cdf,	// (0x00013287) cell_myfav_contact_pane_cp7

0xd07a,	// (0x0001a622) listscroll_gen_pane_cp05

0x5cf9,	// (0x000132a1) main_myfav_hc_pane_g1_ParamLimits

0x5cf9,	// (0x000132a1) main_myfav_hc_pane_g1

0x5d13,	// (0x000132bb) main_myfav_hc_pane_g2_ParamLimits

0x5d13,	// (0x000132bb) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x0001ce75) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x0001ce75) main_myfav_hc_pane_g

0x5d45,	// (0x000132ed) main_myfav_hc_pane_t1_ParamLimits

0x5d45,	// (0x000132ed) main_myfav_hc_pane_t1

0xd083,	// (0x0001a62b) main_myfav_hc_pane_t2_ParamLimits

0xd083,	// (0x0001a62b) main_myfav_hc_pane_t2

0xd095,	// (0x0001a63d) main_myfav_hc_pane_t3_ParamLimits

0xd095,	// (0x0001a63d) main_myfav_hc_pane_t3

0x5d5c,	// (0x00013304) main_myfav_hc_pane_t4_ParamLimits

0x5d5c,	// (0x00013304) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x0001ce7c) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x0001ce7c) main_myfav_hc_pane_t

0x9f78,	// (0x00017520) bg_myfav_hc_instruction_pane_g1

0xd0a7,	// (0x0001a64f) cell_myfav_contact_pane_g1_ParamLimits

0xd0a7,	// (0x0001a64f) cell_myfav_contact_pane_g1

0xd0a7,	// (0x0001a64f) cell_myfav_contact_pane_g2_ParamLimits

0xd0a7,	// (0x0001a64f) cell_myfav_contact_pane_g2

0xd0b3,	// (0x0001a65b) cell_myfav_contact_pane_g3_ParamLimits

0xd0b3,	// (0x0001a65b) cell_myfav_contact_pane_g3

0x9c7d,	// (0x00017225) cell_myfav_contact_pane_g4_ParamLimits

0x9c7d,	// (0x00017225) cell_myfav_contact_pane_g4

0xd0c0,	// (0x0001a668) cell_myfav_contact_pane_g5_ParamLimits

0xd0c0,	// (0x0001a668) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x0001ce87) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x0001ce87) cell_myfav_contact_pane_g

0x5d2d,	// (0x000132d5) main_myfav_hc_pane_g3_ParamLimits

0x5d2d,	// (0x000132d5) main_myfav_hc_pane_g3

0x12ae,	// (0x0000e856) popup_adpt_find_window

0x5d84,	// (0x0001332c) afind_page_pane_ParamLimits

0x5d84,	// (0x0001332c) afind_page_pane

0x5d99,	// (0x00013341) aid_size_cell_afind_ParamLimits

0x5d99,	// (0x00013341) aid_size_cell_afind

0x5db7,	// (0x0001335f) bg_popup_sub_pane_cp09_ParamLimits

0x5db7,	// (0x0001335f) bg_popup_sub_pane_cp09

0x5dc4,	// (0x0001336c) find_pane_cp01_ParamLimits

0x5dc4,	// (0x0001336c) find_pane_cp01

0xd0cc,	// (0x0001a674) grid_afind_control_pane_ParamLimits

0xd0cc,	// (0x0001a674) grid_afind_control_pane

0x5dd1,	// (0x00013379) grid_afind_pane_ParamLimits

0x5dd1,	// (0x00013379) grid_afind_pane

0x5df0,	// (0x00013398) cell_afind_pane_ParamLimits

0x5df0,	// (0x00013398) cell_afind_pane

0x9f78,	// (0x00017520) afind_page_pane_g1

0x5e57,	// (0x000133ff) afind_page_pane_g2

0x5e60,	// (0x00013408) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x0001ce92) afind_page_pane_g

0x5e69,	// (0x00013411) afind_page_pane_t1

0xd0e0,	// (0x0001a688) cell_afind_grid_control_pane_ParamLimits

0xd0e0,	// (0x0001a688) cell_afind_grid_control_pane

0xcdea,	// (0x0001a392) bg_button_pane_cp69_ParamLimits

0xcdea,	// (0x0001a392) bg_button_pane_cp69

0x5e89,	// (0x00013431) cell_afind_pane_g1_ParamLimits

0x5e89,	// (0x00013431) cell_afind_pane_g1

0x5e96,	// (0x0001343e) cell_afind_pane_t1_ParamLimits

0x5e96,	// (0x0001343e) cell_afind_pane_t1

0x9f82,	// (0x0001752a) bg_button_pane_cp72

0xd0ef,	// (0x0001a697) cell_afind_grid_control_pane_g1

0x3750,	// (0x00010cf8) aid_image_placing_area_ParamLimits

0x3750,	// (0x00010cf8) aid_image_placing_area

0x9c6f,	// (0x00017217) field_vitu_entry_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) field_vitu_entry_pane_g1

0x9c6f,	// (0x00017217) field_vitu_entry_pane_g2_ParamLimits

0x9c6f,	// (0x00017217) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0001c78f) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0001c78f) field_vitu_entry_pane_g

0xc903,	// (0x00019eab) cell_vitu_itu_pane_g1_ParamLimits

0xc8e6,	// (0x00019e8e) cell_vitu_itu_pane_t3_ParamLimits

0xc8e6,	// (0x00019e8e) cell_vitu_itu_pane_t3

0xcd93,	// (0x0001a33b) mp4_progress_pane_t1_ParamLimits

0xcdac,	// (0x0001a354) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x0001cdd8) mp4_progress_pane_t_ParamLimits

0xcdc5,	// (0x0001a36d) mup_progress_pane_cp04_ParamLimits

0x5d70,	// (0x00013318) main_myfav_hc_pane_t5_ParamLimits

0x5d70,	// (0x00013318) main_myfav_hc_pane_t5

0x952f,	// (0x00016ad7) aid_zoom_text_primary

0x12ae,	// (0x0000e856) popup_adpt_find_window_ParamLimits

0x9578,	// (0x00016b20) main_cam_set_pane

0x56bb,	// (0x00012c63) cam4_zoom_pane_ParamLimits

0x56bb,	// (0x00012c63) cam4_zoom_pane

0x5ea8,	// (0x00013450) main_cam_set_pane_g1_ParamLimits

0x5ea8,	// (0x00013450) main_cam_set_pane_g1

0x5eb6,	// (0x0001345e) main_cam_set_pane_g2_ParamLimits

0x5eb6,	// (0x0001345e) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x0001ce99) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x0001ce99) main_cam_set_pane_g

0x5ed7,	// (0x0001347f) main_cam_set_pane_t1_ParamLimits

0x5ed7,	// (0x0001347f) main_cam_set_pane_t1

0x5ef2,	// (0x0001349a) main_cset_listscroll_pane_ParamLimits

0x5ef2,	// (0x0001349a) main_cset_listscroll_pane

0x5f18,	// (0x000134c0) main_cset_slider_pane_ParamLimits

0x5f18,	// (0x000134c0) main_cset_slider_pane

0xd100,	// (0x0001a6a8) main_cset_list_pane_ParamLimits

0xd100,	// (0x0001a6a8) main_cset_list_pane

0xd110,	// (0x0001a6b8) scroll_pane_cp028

0x5f3e,	// (0x000134e6) aid_area_touch_slider

0x5f5a,	// (0x00013502) cset_slider_pane

0x5f7d,	// (0x00013525) main_cset_slider_pane_g1

0x5f92,	// (0x0001353a) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x0001ce9e) main_cset_slider_pane_g

0xd161,	// (0x0001a709) main_cset_slider_pane_t1

0x6036,	// (0x000135de) main_cset_slider_pane_t2

0x6050,	// (0x000135f8) main_cset_slider_pane_t3

0x606a,	// (0x00013612) main_cset_slider_pane_t4

0x6084,	// (0x0001362c) main_cset_slider_pane_t5

0x609e,	// (0x00013646) main_cset_slider_pane_t6

0x60b3,	// (0x0001365b) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x0001cec3) main_cset_slider_pane_t

0x61b7,	// (0x0001375f) cset_list_set_pane_ParamLimits

0x61b7,	// (0x0001375f) cset_list_set_pane

0xd1fb,	// (0x0001a7a3) aid_position_infowindow_above

0xd203,	// (0x0001a7ab) aid_position_infowindow_below

0x61c9,	// (0x00013771) cset_list_set_pane_g1_ParamLimits

0x61c9,	// (0x00013771) cset_list_set_pane_g1

0x61d5,	// (0x0001377d) cset_list_set_pane_g3_ParamLimits

0x61d5,	// (0x0001377d) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x0001cee2) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x0001cee2) cset_list_set_pane_g

0x61e4,	// (0x0001378c) cset_list_set_pane_t1_ParamLimits

0x61e4,	// (0x0001378c) cset_list_set_pane_t1

0x9578,	// (0x00016b20) list_highlight_pane_cp021_ParamLimits

0x9578,	// (0x00016b20) list_highlight_pane_cp021

0xab7b,	// (0x00018123) cset_slider_pane_g1

0xab8d,	// (0x00018135) cset_slider_pane_g2

0xab84,	// (0x0001812c) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x0001cee7) cset_slider_pane_g

0xd20b,	// (0x0001a7b3) aid_area_touch_cam4_zoom

0xd213,	// (0x0001a7bb) cam4_zoom_cont_pane

0xd21b,	// (0x0001a7c3) cam4_zoom_pane_g1

0xd223,	// (0x0001a7cb) cam4_zoom_pane_g2

0x61f9,	// (0x000137a1) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x0001ceee) cam4_zoom_pane_g

0xca29,	// (0x00019fd1) cam4_zoom_cont_pane_g1

0xd22b,	// (0x0001a7d3) cam4_zoom_cont_pane_g2

0xd234,	// (0x0001a7dc) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x0001cef5) cam4_zoom_cont_pane_g

0x54ea,	// (0x00012a92) call4_image_pane_ParamLimits

0x54ea,	// (0x00012a92) call4_image_pane

0x5551,	// (0x00012af9) call4_windows_conf_pane_ParamLimits

0x5594,	// (0x00012b3c) popup_call4_audio_in_window_ParamLimits

0x5594,	// (0x00012b3c) popup_call4_audio_in_window

0x9509,	// (0x00016ab1) bg_popup_call2_act_pane_cp02

0xce71,	// (0x0001a419) call4_list_conf_pane

0x9f78,	// (0x00017520) call4_image_pane_g1

0x9f78,	// (0x00017520) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0001c966) call4_image_pane_g

0xd23d,	// (0x0001a7e5) list_single_graphic_popup_conf4_pane_ParamLimits

0xd23d,	// (0x0001a7e5) list_single_graphic_popup_conf4_pane

0x9509,	// (0x00016ab1) list_highlight_pane_cp022

0xd250,	// (0x0001a7f8) list_single_graphic_popup_conf4_pane_g1

0xa744,	// (0x00017cec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x0001cefc) list_single_graphic_popup_conf4_pane_g

0xd258,	// (0x0001a800) list_single_graphic_popup_conf4_pane_t1

0x2043,	// (0x0000f5eb) popup_vtel_slider_window_ParamLimits

0x2043,	// (0x0000f5eb) popup_vtel_slider_window

0xcdd8,	// (0x0001a380) dialer2_ne_pane_t2_ParamLimits

0xcdd8,	// (0x0001a380) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x0001cddd) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x0001cddd) dialer2_ne_pane_t

0xbf6c,	// (0x00019514) bg_popup_sub_pane_cp010_ParamLimits

0xbf6c,	// (0x00019514) bg_popup_sub_pane_cp010

0x6201,	// (0x000137a9) popup_vtel_slider_window_g1_ParamLimits

0x6201,	// (0x000137a9) popup_vtel_slider_window_g1

0x6214,	// (0x000137bc) popup_vtel_slider_window_g2_ParamLimits

0x6214,	// (0x000137bc) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x0001cf01) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x0001cf01) popup_vtel_slider_window_g

0x626a,	// (0x00013812) vtel_slider_pane_ParamLimits

0x626a,	// (0x00013812) vtel_slider_pane

0x628c,	// (0x00013834) vtel_slider_pane_g1_ParamLimits

0x628c,	// (0x00013834) vtel_slider_pane_g1

0x62a0,	// (0x00013848) vtel_slider_pane_g2_ParamLimits

0x62a0,	// (0x00013848) vtel_slider_pane_g2

0x62b8,	// (0x00013860) vtel_slider_pane_g3_ParamLimits

0x62b8,	// (0x00013860) vtel_slider_pane_g3

0x628c,	// (0x00013834) vtel_slider_pane_g4_ParamLimits

0x628c,	// (0x00013834) vtel_slider_pane_g4

0x62ce,	// (0x00013876) vtel_slider_pane_g5_ParamLimits

0x62ce,	// (0x00013876) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x0001cf0a) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x0001cf0a) vtel_slider_pane_g

0x9578,	// (0x00016b20) main_gallery2_pane

0x58bb,	// (0x00012e63) aid_size_row_itut2_dropdow_list_ParamLimits

0x58bb,	// (0x00012e63) aid_size_row_itut2_dropdow_list

0x5939,	// (0x00012ee1) grid_vitu2_function_top_pane_ParamLimits

0x5939,	// (0x00012ee1) grid_vitu2_function_top_pane

0x59a3,	// (0x00012f4b) popup_vitu2_dropdown_list_window_ParamLimits

0x59a3,	// (0x00012f4b) popup_vitu2_dropdown_list_window

0x59ca,	// (0x00012f72) popup_vitu2_match_list_window

0x62e4,	// (0x0001388c) cell_vitu2_function_top_pane_ParamLimits

0x62e4,	// (0x0001388c) cell_vitu2_function_top_pane

0x62fc,	// (0x000138a4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x62fc,	// (0x000138a4) cell_vitu2_function_top_pane_cp01

0x6318,	// (0x000138c0) cell_vitu2_function_top_wide_pane_ParamLimits

0x6318,	// (0x000138c0) cell_vitu2_function_top_wide_pane

0x9578,	// (0x00016b20) bg_button_pane_cp012

0x6336,	// (0x000138de) cell_vitu2_function_top_pane_g1

0xd26e,	// (0x0001a816) bg_button_pane_cp013_ParamLimits

0xd26e,	// (0x0001a816) bg_button_pane_cp013

0x634a,	// (0x000138f2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x634a,	// (0x000138f2) cell_vitu2_function_top_wide_pane_g1

0x9578,	// (0x00016b20) bg_popup_sub_pane_cp20

0x6362,	// (0x0001390a) list_vitu2_match_list_pane

0xcff6,	// (0x0001a59e) bg_popup_sub_pane_cp20_g1

0xcffe,	// (0x0001a5a6) bg_popup_sub_pane_cp20_g2

0xa189,	// (0x00017731) bg_popup_sub_pane_cp20_g3

0xd006,	// (0x0001a5ae) bg_popup_sub_pane_cp20_g4

0xa169,	// (0x00017711) bg_popup_sub_pane_cp20_g5

0xd28a,	// (0x0001a832) bg_popup_sub_pane_cp20_g6

0xd016,	// (0x0001a5be) bg_popup_sub_pane_cp20_g7

0xd01e,	// (0x0001a5c6) bg_popup_sub_pane_cp20_g8

0xd026,	// (0x0001a5ce) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x0001cf15) bg_popup_sub_pane_cp20_g

0xd292,	// (0x0001a83a) list_vitu2_match_list_item_pane_ParamLimits

0xd292,	// (0x0001a83a) list_vitu2_match_list_item_pane

0xd2a4,	// (0x0001a84c) list_vitu2_match_list_item_pane_t1

0x9509,	// (0x00016ab1) bg_popup_sub_pane_cp21

0x9f38,	// (0x000174e0) grid_vitu2_dropdown_list_pane

0x637a,	// (0x00013922) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x637a,	// (0x00013922) cell_vitu2_dropdown_list_char_pane

0x639a,	// (0x00013942) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x639a,	// (0x00013942) cell_vitu2_dropdown_list_ctrl_pane

0xd2b2,	// (0x0001a85a) cell_vitu2_dropdown_list_char_pane_g1

0xd2bb,	// (0x0001a863) cell_vitu2_dropdown_list_char_pane_g2

0xd2c4,	// (0x0001a86c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x0001cf28) cell_vitu2_dropdown_list_char_pane_g

0x63c2,	// (0x0001396a) cell_vitu2_dropdown_list_char_pane_t1

0x63d0,	// (0x00013978) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x63d0,	// (0x00013978) cell_vitu2_dropdown_list_ctrl_pane_g1

0x63dd,	// (0x00013985) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x63dd,	// (0x00013985) cell_vitu2_dropdown_list_ctrl_pane_g2

0x63ea,	// (0x00013992) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x63ea,	// (0x00013992) cell_vitu2_dropdown_list_ctrl_pane_g3

0x63f7,	// (0x0001399f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x63f7,	// (0x0001399f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9c6f,	// (0x00017217) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9c6f,	// (0x00017217) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x0001cf2f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x0001cf2f) cell_vitu2_dropdown_list_ctrl_pane_g

0x6413,	// (0x000139bb) aid_size_cell_gallery2_ParamLimits

0x6413,	// (0x000139bb) aid_size_cell_gallery2

0x6431,	// (0x000139d9) grid_gallery2_pane_ParamLimits

0x6431,	// (0x000139d9) grid_gallery2_pane

0x644b,	// (0x000139f3) scroll_pane_cp029_ParamLimits

0x644b,	// (0x000139f3) scroll_pane_cp029

0x645c,	// (0x00013a04) cell_gallery2_pane_ParamLimits

0x645c,	// (0x00013a04) cell_gallery2_pane

0xd2cd,	// (0x0001a875) cell_gallery2_pane_g2

0x64bb,	// (0x00013a63) cell_gallery2_pane_g3

0xd2d5,	// (0x0001a87d) cell_gallery2_pane_g4

0xd2dd,	// (0x0001a885) cell_gallery2_pane_g5

0x9f38,	// (0x000174e0) grid_highlight_pane_cp10

0x59ca,	// (0x00012f72) popup_vitu2_match_list_window_ParamLimits

0x59df,	// (0x00012f87) popup_vitu2_query_window_ParamLimits

0x59df,	// (0x00012f87) popup_vitu2_query_window

0x9509,	// (0x00016ab1) bg_vitu2_candi_button_pane

0xd2b2,	// (0x0001a85a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2bb,	// (0x0001a863) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2c4,	// (0x0001a86c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x64c3,	// (0x00013a6b) bg_button_pane_cp015

0x64d4,	// (0x00013a7c) bg_button_pane_cp016

0x64e0,	// (0x00013a88) bg_button_pane_cp017

0xab0b,	// (0x000180b3) bg_popup_sub_pane_cp22

0xd2e5,	// (0x0001a88d) popup_vitu2_query_window_g1

0x651e,	// (0x00013ac6) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x0001cf3a) popup_vitu2_query_window_g

0x6540,	// (0x00013ae8) popup_vitu2_query_window_t1_ParamLimits

0x6540,	// (0x00013ae8) popup_vitu2_query_window_t1

0x6573,	// (0x00013b1b) popup_vitu2_query_window_t2_ParamLimits

0x6573,	// (0x00013b1b) popup_vitu2_query_window_t2

0x6585,	// (0x00013b2d) popup_vitu2_query_window_t3_ParamLimits

0x6585,	// (0x00013b2d) popup_vitu2_query_window_t3

0x65ad,	// (0x00013b55) popup_vitu2_query_window_t4_ParamLimits

0x65ad,	// (0x00013b55) popup_vitu2_query_window_t4

0x65c1,	// (0x00013b69) popup_vitu2_query_window_t5_ParamLimits

0x65c1,	// (0x00013b69) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x0001cf41) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x0001cf41) popup_vitu2_query_window_t

0xd0f8,	// (0x0001a6a0) main_cset_text_pane

0x5f3e,	// (0x000134e6) aid_area_touch_slider_ParamLimits

0x5f5a,	// (0x00013502) cset_slider_pane_ParamLimits

0x5f7d,	// (0x00013525) main_cset_slider_pane_g1_ParamLimits

0x5f92,	// (0x0001353a) main_cset_slider_pane_g2_ParamLimits

0xd119,	// (0x0001a6c1) main_cset_slider_pane_g3_ParamLimits

0xd119,	// (0x0001a6c1) main_cset_slider_pane_g3

0x5fa7,	// (0x0001354f) main_cset_slider_pane_g4_ParamLimits

0x5fa7,	// (0x0001354f) main_cset_slider_pane_g4

0x5fb6,	// (0x0001355e) main_cset_slider_pane_g5_ParamLimits

0x5fb6,	// (0x0001355e) main_cset_slider_pane_g5

0x5fc2,	// (0x0001356a) main_cset_slider_pane_g6_ParamLimits

0x5fc2,	// (0x0001356a) main_cset_slider_pane_g6

0xf8f6,	// (0x0001ce9e) main_cset_slider_pane_g_ParamLimits

0xd161,	// (0x0001a709) main_cset_slider_pane_t1_ParamLimits

0x6036,	// (0x000135de) main_cset_slider_pane_t2_ParamLimits

0x6050,	// (0x000135f8) main_cset_slider_pane_t3_ParamLimits

0x606a,	// (0x00013612) main_cset_slider_pane_t4_ParamLimits

0x6084,	// (0x0001362c) main_cset_slider_pane_t5_ParamLimits

0x609e,	// (0x00013646) main_cset_slider_pane_t6_ParamLimits

0x60b3,	// (0x0001365b) main_cset_slider_pane_t7_ParamLimits

0x60dd,	// (0x00013685) main_cset_slider_pane_t8_ParamLimits

0x60dd,	// (0x00013685) main_cset_slider_pane_t8

0x6105,	// (0x000136ad) main_cset_slider_pane_t9_ParamLimits

0x6105,	// (0x000136ad) main_cset_slider_pane_t9

0x612d,	// (0x000136d5) main_cset_slider_pane_t10_ParamLimits

0x612d,	// (0x000136d5) main_cset_slider_pane_t10

0x6155,	// (0x000136fd) main_cset_slider_pane_t11_ParamLimits

0x6155,	// (0x000136fd) main_cset_slider_pane_t11

0x617d,	// (0x00013725) main_cset_slider_pane_t12_ParamLimits

0x617d,	// (0x00013725) main_cset_slider_pane_t12

0x619a,	// (0x00013742) main_cset_slider_pane_t13_ParamLimits

0x619a,	// (0x00013742) main_cset_slider_pane_t13

0xf91b,	// (0x0001cec3) main_cset_slider_pane_t_ParamLimits

0x9509,	// (0x00016ab1) bg_popup_sub_pane_cp011

0xd2f1,	// (0x0001a899) main_cset_text_pane_g1

0xd2f9,	// (0x0001a8a1) main_cset_text_pane_t1

0xd307,	// (0x0001a8af) main_cset_text_pane_t2

0xd315,	// (0x0001a8bd) main_cset_text_pane_t3

0xd323,	// (0x0001a8cb) main_cset_text_pane_t4

0xd331,	// (0x0001a8d9) main_cset_text_pane_t5

0xd33f,	// (0x0001a8e7) main_cset_text_pane_t6

0xd34d,	// (0x0001a8f5) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0001cf50) main_cset_text_pane_t

0x9509,	// (0x00016ab1) main_cam4_burst_pane

0x9509,	// (0x00016ab1) main_cam5_pane

0x5e77,	// (0x0001341f) bg_button_pane_cp019

0x5e80,	// (0x00013428) bg_button_pane_cp020

0xd125,	// (0x0001a6cd) main_cset_slider_pane_g7_ParamLimits

0xd125,	// (0x0001a6cd) main_cset_slider_pane_g7

0xd131,	// (0x0001a6d9) main_cset_slider_pane_g8_ParamLimits

0xd131,	// (0x0001a6d9) main_cset_slider_pane_g8

0x5fd6,	// (0x0001357e) main_cset_slider_pane_g9_ParamLimits

0x5fd6,	// (0x0001357e) main_cset_slider_pane_g9

0x5fe2,	// (0x0001358a) main_cset_slider_pane_g10_ParamLimits

0x5fe2,	// (0x0001358a) main_cset_slider_pane_g10

0x5fee,	// (0x00013596) main_cset_slider_pane_g11_ParamLimits

0x5fee,	// (0x00013596) main_cset_slider_pane_g11

0x5ffa,	// (0x000135a2) main_cset_slider_pane_g12_ParamLimits

0x5ffa,	// (0x000135a2) main_cset_slider_pane_g12

0x6006,	// (0x000135ae) main_cset_slider_pane_g13_ParamLimits

0x6006,	// (0x000135ae) main_cset_slider_pane_g13

0x6012,	// (0x000135ba) main_cset_slider_pane_g14_ParamLimits

0x6012,	// (0x000135ba) main_cset_slider_pane_g14

0x601e,	// (0x000135c6) main_cset_slider_pane_g15_ParamLimits

0x601e,	// (0x000135c6) main_cset_slider_pane_g15

0xd189,	// (0x0001a731) main_cset_slider_pane_t14_ParamLimits

0xd189,	// (0x0001a731) main_cset_slider_pane_t14

0xd1c2,	// (0x0001a76a) main_cset_slider_pane_t15_ParamLimits

0xd1c2,	// (0x0001a76a) main_cset_slider_pane_t15

0x662b,	// (0x00013bd3) aid_cam4_burst_size_cell_ParamLimits

0x662b,	// (0x00013bd3) aid_cam4_burst_size_cell

0x664b,	// (0x00013bf3) grid_cam4_burst_pane_ParamLimits

0x664b,	// (0x00013bf3) grid_cam4_burst_pane

0x6683,	// (0x00013c2b) linegrid_cam4_burst_pane_ParamLimits

0x6683,	// (0x00013c2b) linegrid_cam4_burst_pane

0xd35b,	// (0x0001a903) scroll_pane_cp30_ParamLimits

0xd35b,	// (0x0001a903) scroll_pane_cp30

0x66a7,	// (0x00013c4f) cell_cam4_burst_pane_ParamLimits

0x66a7,	// (0x00013c4f) cell_cam4_burst_pane

0xd367,	// (0x0001a90f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd367,	// (0x0001a90f) linegrid_cam4_burst_pane_g1

0x66f4,	// (0x00013c9c) linegrid_cam4_burst_pane_g2_ParamLimits

0x66f4,	// (0x00013c9c) linegrid_cam4_burst_pane_g2

0xd374,	// (0x0001a91c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd374,	// (0x0001a91c) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x0001cf5f) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x0001cf5f) linegrid_cam4_burst_pane_g

0x6705,	// (0x00013cad) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6705,	// (0x00013cad) linegrid_cam4_burst_pane_g3_copy1

0xd381,	// (0x0001a929) linegrid_cam4_burst_pane_g4_ParamLimits

0xd381,	// (0x0001a929) linegrid_cam4_burst_pane_g4

0x671f,	// (0x00013cc7) linegrid_cam4_burst_pane_g5_ParamLimits

0x671f,	// (0x00013cc7) linegrid_cam4_burst_pane_g5

0x6730,	// (0x00013cd8) linegrid_cam4_burst_pane_g6_ParamLimits

0x6730,	// (0x00013cd8) linegrid_cam4_burst_pane_g6

0xd38e,	// (0x0001a936) linegrid_cam4_burst_pane_g7_ParamLimits

0xd38e,	// (0x0001a936) linegrid_cam4_burst_pane_g7

0x6747,	// (0x00013cef) cell_cam4_burst_pane_g1

0xd3a7,	// (0x0001a94f) main_cam5_pane_t1_ParamLimits

0xd3a7,	// (0x0001a94f) main_cam5_pane_t1

0xd3b9,	// (0x0001a961) main_cam5_pane_t2_ParamLimits

0xd3b9,	// (0x0001a961) main_cam5_pane_t2

0xd3cb,	// (0x0001a973) main_cam5_pane_t3_ParamLimits

0xd3cb,	// (0x0001a973) main_cam5_pane_t3

0xd3dd,	// (0x0001a985) main_cam5_pane_t4_ParamLimits

0xd3dd,	// (0x0001a985) main_cam5_pane_t4

0xd3f5,	// (0x0001a99d) main_cam5_pane_t5_ParamLimits

0xd3f5,	// (0x0001a99d) main_cam5_pane_t5

0xd409,	// (0x0001a9b1) main_cam5_pane_t6_ParamLimits

0xd409,	// (0x0001a9b1) main_cam5_pane_t6

0xd41d,	// (0x0001a9c5) main_cam5_pane_t7_ParamLimits

0xd41d,	// (0x0001a9c5) main_cam5_pane_t7

0xd42f,	// (0x0001a9d7) main_cam5_pane_t8_ParamLimits

0xd42f,	// (0x0001a9d7) main_cam5_pane_t8

0xd44b,	// (0x0001a9f3) main_cam5_pane_t9_ParamLimits

0xd44b,	// (0x0001a9f3) main_cam5_pane_t9

0xd45d,	// (0x0001aa05) main_cam5_pane_t10_ParamLimits

0xd45d,	// (0x0001aa05) main_cam5_pane_t10

0xd46f,	// (0x0001aa17) main_cam5_pane_t11_ParamLimits

0xd46f,	// (0x0001aa17) main_cam5_pane_t11

0xd481,	// (0x0001aa29) main_cam5_pane_t12_ParamLimits

0xd481,	// (0x0001aa29) main_cam5_pane_t12

0xd496,	// (0x0001aa3e) main_cam5_pane_t13_ParamLimits

0xd496,	// (0x0001aa3e) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x0001cf6b) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x0001cf6b) main_cam5_pane_t

0x1330,	// (0x0000e8d8) popup_scut_keymap_window_ParamLimits

0x1330,	// (0x0000e8d8) popup_scut_keymap_window

0x675a,	// (0x00013d02) aid_size_cell_brow_shortcut

0x9f38,	// (0x000174e0) bg_popup_window_pane_cp010

0x6766,	// (0x00013d0e) grid_scut_pane

0x6772,	// (0x00013d1a) cell_scut_pane_ParamLimits

0x6772,	// (0x00013d1a) cell_scut_pane

0x6789,	// (0x00013d31) cell_scut_pane_g1

0xd4b3,	// (0x0001aa5b) cell_scut_pane_t1

0xd4c2,	// (0x0001aa6a) cell_scut_pane_t2

0x6792,	// (0x00013d3a) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x0001cf86) cell_scut_pane_t

0x460d,	// (0x00011bb5) main_mup3_pane_g8_ParamLimits

0x460d,	// (0x00011bb5) main_mup3_pane_g8

0x58d3,	// (0x00012e7b) area_vitu2_query_pane_ParamLimits

0x58d3,	// (0x00012e7b) area_vitu2_query_pane

0x64ec,	// (0x00013a94) input_focus_pane_cp08

0xd4d1,	// (0x0001aa79) area_vitu2_query_pane_g1

0x67a0,	// (0x00013d48) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x0001cf8d) area_vitu2_query_pane_g

0x67af,	// (0x00013d57) area_vitu2_query_pane_t1_ParamLimits

0x67af,	// (0x00013d57) area_vitu2_query_pane_t1

0x67c3,	// (0x00013d6b) area_vitu2_query_pane_t2_ParamLimits

0x67c3,	// (0x00013d6b) area_vitu2_query_pane_t2

0x67d7,	// (0x00013d7f) area_vitu2_query_pane_t3_ParamLimits

0x67d7,	// (0x00013d7f) area_vitu2_query_pane_t3

0xd4dd,	// (0x0001aa85) area_vitu2_query_pane_t4_ParamLimits

0xd4dd,	// (0x0001aa85) area_vitu2_query_pane_t4

0xd505,	// (0x0001aaad) area_vitu2_query_pane_t5_ParamLimits

0xd505,	// (0x0001aaad) area_vitu2_query_pane_t5

0xd52d,	// (0x0001aad5) area_vitu2_query_pane_t6_ParamLimits

0xd52d,	// (0x0001aad5) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x0001cf92) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x0001cf92) area_vitu2_query_pane_t

0x67ff,	// (0x00013da7) bg_button_pane_cp018

0x680b,	// (0x00013db3) bg_button_pane_cp021

0x6817,	// (0x00013dbf) bg_button_pane_cp022

0x6836,	// (0x00013dde) input_focus_pane_cp09

0xa853,	// (0x00017dfb) aid_size_touch_mv_arrow_left

0xa87e,	// (0x00017e26) aid_size_touch_mv_arrow_right

0xd13d,	// (0x0001a6e5) main_cset_slider_pane_g16_ParamLimits

0xd13d,	// (0x0001a6e5) main_cset_slider_pane_g16

0xd149,	// (0x0001a6f1) main_cset_slider_pane_g17_ParamLimits

0xd149,	// (0x0001a6f1) main_cset_slider_pane_g17

0x6747,	// (0x00013cef) cell_cam4_burst_pane_g1_ParamLimits

0x9509,	// (0x00016ab1) compa_mode_pane

0x6224,	// (0x000137cc) popup_vtel_slider_window_g3_ParamLimits

0x6224,	// (0x000137cc) popup_vtel_slider_window_g3

0x623b,	// (0x000137e3) popup_vtel_slider_window_g4_ParamLimits

0x623b,	// (0x000137e3) popup_vtel_slider_window_g4

0x6252,	// (0x000137fa) popup_vtel_slider_window_t1_ParamLimits

0x6252,	// (0x000137fa) popup_vtel_slider_window_t1

0x9509,	// (0x00016ab1) main_cl_pane

0xbe11,	// (0x000193b9) popup_imed_adjust2_window_ParamLimits

0xab0b,	// (0x000180b3) bg_tb_trans_pane_cp05_ParamLimits

0xc81b,	// (0x00019dc3) popup_imed_adjust2_window_g1_ParamLimits

0xc82a,	// (0x00019dd2) popup_imed_adjust2_window_g2_ParamLimits

0xc82a,	// (0x00019dd2) popup_imed_adjust2_window_g2

0xc836,	// (0x00019dde) popup_imed_adjust2_window_g3_ParamLimits

0xc836,	// (0x00019dde) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x0001cd08) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x0001cd08) popup_imed_adjust2_window_g

0xc842,	// (0x00019dea) popup_imed_adjust2_window_t1_ParamLimits

0xc85a,	// (0x00019e02) slider_imed_adjust_pane_ParamLimits

0xc86e,	// (0x00019e16) slider_imed_adjust_pane_g1_ParamLimits

0xc87e,	// (0x00019e26) slider_imed_adjust_pane_g2_ParamLimits

0xc88e,	// (0x00019e36) slider_imed_adjust_pane_g3_ParamLimits

0xc89f,	// (0x00019e47) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x0001cd0f) slider_imed_adjust_pane_g_ParamLimits

0x565c,	// (0x00012c04) aid_touch_area_cam4_ParamLimits

0x565c,	// (0x00012c04) aid_touch_area_cam4

0xceb5,	// (0x0001a45d) battery_pane_cp01

0x572b,	// (0x00012cd3) main_camera4_pane_g6_ParamLimits

0x572b,	// (0x00012cd3) main_camera4_pane_g6

0x5755,	// (0x00012cfd) main_camera4_pane_t2_ParamLimits

0x5755,	// (0x00012cfd) main_camera4_pane_t2

0x0001,

0xf869,	// (0x0001ce11) main_camera4_pane_t_ParamLimits

0xf869,	// (0x0001ce11) main_camera4_pane_t

0x578a,	// (0x00012d32) aid_touch_area_vid4_ParamLimits

0x578a,	// (0x00012d32) aid_touch_area_vid4

0x57de,	// (0x00012d86) main_video4_pane_g5_ParamLimits

0x57de,	// (0x00012d86) main_video4_pane_g5

0x5803,	// (0x00012dab) vid4_progress_pane_ParamLimits

0x5803,	// (0x00012dab) vid4_progress_pane

0xd155,	// (0x0001a6fd) main_cset_slider_pane_g18_ParamLimits

0xd155,	// (0x0001a6fd) main_cset_slider_pane_g18

0xd39b,	// (0x0001a943) cell_cam4_burst_pane_g2_ParamLimits

0xd39b,	// (0x0001a943) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x0001cf66) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0001cf66) cell_cam4_burst_pane_g

0x9d03,	// (0x000172ab) bg_cl_pane_ParamLimits

0x9d03,	// (0x000172ab) bg_cl_pane

0x6846,	// (0x00013dee) cl_header_pane_ParamLimits

0x6846,	// (0x00013dee) cl_header_pane

0x685a,	// (0x00013e02) cl_listscroll_pane_ParamLimits

0x685a,	// (0x00013e02) cl_listscroll_pane

0xd579,	// (0x0001ab21) bg_cl_pane_g1

0xd581,	// (0x0001ab29) bg_cl_pane_g2

0xd589,	// (0x0001ab31) bg_cl_pane_g3

0xd591,	// (0x0001ab39) bg_cl_pane_g4

0xd599,	// (0x0001ab41) bg_cl_pane_g5

0xd5a1,	// (0x0001ab49) bg_cl_pane_g6

0xd5a9,	// (0x0001ab51) bg_cl_pane_g7

0xd5b1,	// (0x0001ab59) bg_cl_pane_g8

0xd5b9,	// (0x0001ab61) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x0001cfa1) bg_cl_pane_g

0x686a,	// (0x00013e12) aid_height_cl_leading_ParamLimits

0x686a,	// (0x00013e12) aid_height_cl_leading

0x6876,	// (0x00013e1e) aid_height_cl_text_ParamLimits

0x6876,	// (0x00013e1e) aid_height_cl_text

0x9578,	// (0x00016b20) bg_cl_header_pane_ParamLimits

0x9578,	// (0x00016b20) bg_cl_header_pane

0x6895,	// (0x00013e3d) cl_header_pane_g1_ParamLimits

0x6895,	// (0x00013e3d) cl_header_pane_g1

0x68ab,	// (0x00013e53) cl_header_pane_t1_ParamLimits

0x68ab,	// (0x00013e53) cl_header_pane_t1

0xd5c1,	// (0x0001ab69) cl_list_pane

0xd110,	// (0x0001a6b8) hc_scroll_pane_cp01

0xa169,	// (0x00017711) bg_cl_header_pane_g1

0xcff6,	// (0x0001a59e) bg_cl_header_pane_g2

0xa189,	// (0x00017731) bg_cl_header_pane_g3

0xd006,	// (0x0001a5ae) bg_cl_header_pane_g4

0xcffe,	// (0x0001a5a6) bg_cl_header_pane_g5

0xd28a,	// (0x0001a832) bg_cl_header_pane_g6

0xd01e,	// (0x0001a5c6) bg_cl_header_pane_g7

0xd026,	// (0x0001a5ce) bg_cl_header_pane_g8

0xd016,	// (0x0001a5be) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x0001cfb4) bg_cl_header_pane_g

0x68c4,	// (0x00013e6c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x68c4,	// (0x00013e6c) hc_cl_list_double_graphic_heading_pane

0x68d5,	// (0x00013e7d) hc_cl_list_single_graphic_pane_ParamLimits

0x68d5,	// (0x00013e7d) hc_cl_list_single_graphic_pane

0x68ee,	// (0x00013e96) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x68ee,	// (0x00013e96) hc_cl_list_single_graphic_pane_g1

0x68fa,	// (0x00013ea2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x68fa,	// (0x00013ea2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x0001cfc7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x0001cfc7) hc_cl_list_single_graphic_pane_g

0x690e,	// (0x00013eb6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x690e,	// (0x00013eb6) hc_cl_list_single_graphic_pane_t1

0x68ee,	// (0x00013e96) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x68ee,	// (0x00013e96) hc_cl_list_double_graphic_heading_pane_g1

0x6923,	// (0x00013ecb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6923,	// (0x00013ecb) hc_cl_list_double_graphic_heading_pane_g2

0x6937,	// (0x00013edf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6937,	// (0x00013edf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x0001cfcc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x0001cfcc) hc_cl_list_double_graphic_heading_pane_g

0x694b,	// (0x00013ef3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x694b,	// (0x00013ef3) hc_cl_list_double_graphic_heading_pane_t1

0x6960,	// (0x00013f08) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6960,	// (0x00013f08) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x0001cfd3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x0001cfd3) hc_cl_list_double_graphic_heading_pane_t

0xd5d2,	// (0x0001ab7a) vid4_progress_pane_g1

0xd5e2,	// (0x0001ab8a) vid4_progress_pane_g2

0x6975,	// (0x00013f1d) vid4_progress_pane_g3

0xd5f2,	// (0x0001ab9a) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x0001cfd8) vid4_progress_pane_g

0x6987,	// (0x00013f2f) vid4_progress_pane_t1

0xd60a,	// (0x0001abb2) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x0001cfe3) vid4_progress_pane_t

0x699d,	// (0x00013f45) wait_bar_pane_cp07

0xc0cf,	// (0x00019677) blid_firmament_pane_ParamLimits

0xc112,	// (0x000196ba) popup_blid_sat_info2_window_g1

0xc136,	// (0x000196de) popup_blid_sat_info2_window_t3

0xc144,	// (0x000196ec) popup_blid_sat_info2_window_t4

0xc152,	// (0x000196fa) popup_blid_sat_info2_window_t5

0xc160,	// (0x00019708) popup_blid_sat_info2_window_t6

0xc170,	// (0x00019718) popup_blid_sat_info2_window_t7

0xc17e,	// (0x00019726) popup_blid_sat_info2_window_t8

0xc18c,	// (0x00019734) popup_blid_sat_info2_window_t9

0xc19a,	// (0x00019742) popup_blid_sat_info2_window_t10

0xc25b,	// (0x00019803) aid_firma_cardinal_ParamLimits

0xc26f,	// (0x00019817) blid_firmament_pane_t1_ParamLimits

0xc286,	// (0x0001982e) blid_firmament_pane_t2_ParamLimits

0xc29d,	// (0x00019845) blid_firmament_pane_t3_ParamLimits

0xc2b4,	// (0x0001985c) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x0001cc01) blid_firmament_pane_t_ParamLimits

0xc2cb,	// (0x00019873) blid_sat_info_pane_ParamLimits

0x9578,	// (0x00016b20) main_cam_set_pane_ParamLimits

0x4dea,	// (0x00012392) aid_size_cell_colour_35_ParamLimits

0x4e0a,	// (0x000123b2) aid_size_cell_colour_112_ParamLimits

0x4e2a,	// (0x000123d2) aid_size_cell_effect_ParamLimits

0xab0b,	// (0x000180b3) bg_tb_trans_pane_cp02_ParamLimits

0xa3ff,	// (0x000179a7) heading_imed_pane_ParamLimits

0x4e4a,	// (0x000123f2) listscroll_imed_pane_ParamLimits

0xb4c6,	// (0x00018a6e) popup_call2_audio_first_window_g5_ParamLimits

0xb4c6,	// (0x00018a6e) popup_call2_audio_first_window_g5

0x5276,	// (0x0001281e) aid_size_touch_image3_arrow_left_ParamLimits

0x5276,	// (0x0001281e) aid_size_touch_image3_arrow_left

0x52a2,	// (0x0001284a) aid_size_touch_image3_arrow_right_ParamLimits

0x52a2,	// (0x0001284a) aid_size_touch_image3_arrow_right

0xd61f,	// (0x0001abc7) vid4_progress_pane_t3

0x4fed,	// (0x00012595) main_hwr_training_symbol_option_pane_ParamLimits

0x4fed,	// (0x00012595) main_hwr_training_symbol_option_pane

0xca54,	// (0x00019ffc) popup_hwr_training_preview_window_ParamLimits

0xca54,	// (0x00019ffc) popup_hwr_training_preview_window

0x500d,	// (0x000125b5) hwr_training_navi_pane_g5_ParamLimits

0x500d,	// (0x000125b5) hwr_training_navi_pane_g5

0xcfe4,	// (0x0001a58c) popup_char_count_window

0x9578,	// (0x00016b20) bg_popup_sub_pane_cp20_ParamLimits

0x6362,	// (0x0001390a) list_vitu2_match_list_pane_ParamLimits

0x636e,	// (0x00013916) vitu2_page_scroll_pane_ParamLimits

0x636e,	// (0x00013916) vitu2_page_scroll_pane

0xd657,	// (0x0001abff) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd657,	// (0x0001abff) list_single_hwr_training_symbol_option_pane

0xd66a,	// (0x0001ac12) list_single_hwr_training_symbol_option_pane_g1

0xd672,	// (0x0001ac1a) list_single_hwr_training_symbol_option_pane_t1

0xd680,	// (0x0001ac28) bg_button_pane_cp023

0xd689,	// (0x0001ac31) bg_button_pane_cp024

0xd6bc,	// (0x0001ac64) vitu2_page_scroll_pane_g1

0xd6c4,	// (0x0001ac6c) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x0001cfea) vitu2_page_scroll_pane_g

0xd6cc,	// (0x0001ac74) vitu2_page_scroll_pane_t1

0x9d9e,	// (0x00017346) popup_char_count_window_g1

0xd6db,	// (0x0001ac83) popup_char_count_window_g2

0xce28,	// (0x0001a3d0) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x0001cfef) popup_char_count_window_g

0xd6e4,	// (0x0001ac8c) popup_char_count_window_t1

0x9509,	// (0x00016ab1) main_vded2_pane

0xc807,	// (0x00019daf) aid_size_cell_imed_line

0xc811,	// (0x00019db9) grid_imed_line_width_pane

0xcf65,	// (0x0001a50d) vid4_indicators_pane_g4

0xd6f2,	// (0x0001ac9a) cell_imed_line_width_pane_ParamLimits

0xd6f2,	// (0x0001ac9a) cell_imed_line_width_pane

0xd706,	// (0x0001acae) cell_imed_line_width_pane_g1

0xd70f,	// (0x0001acb7) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x0001cff6) cell_imed_line_width_pane_g

0x69c2,	// (0x00013f6a) main_vded2_pane_g1_ParamLimits

0x69c2,	// (0x00013f6a) main_vded2_pane_g1

0x69d8,	// (0x00013f80) main_vded2_pane_g2_ParamLimits

0x69d8,	// (0x00013f80) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x0001cffb) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x0001cffb) main_vded2_pane_g

0x69ea,	// (0x00013f92) vded2_slider_pane_ParamLimits

0x69ea,	// (0x00013f92) vded2_slider_pane

0x69fa,	// (0x00013fa2) aid_size_touch_vded2_end

0x6a04,	// (0x00013fac) aid_size_touch_vded2_playhead

0xd717,	// (0x0001acbf) aid_size_touch_vded2_start

0xd71f,	// (0x0001acc7) vded2_slider_bg_pane

0xd728,	// (0x0001acd0) vded2_slider_pane_g1

0xd731,	// (0x0001acd9) vded2_slider_pane_g2

0x6a0e,	// (0x00013fb6) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x0001d000) vded2_slider_pane_g

0xd739,	// (0x0001ace1) vded2_slider_bg_pane_g1

0xd742,	// (0x0001acea) vded2_slider_bg_pane_g2

0xd74b,	// (0x0001acf3) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x0001d007) vded2_slider_bg_pane_g

0x33be,	// (0x00010966) aid_postcard_touch_down_pane_ParamLimits

0x33be,	// (0x00010966) aid_postcard_touch_down_pane

0x33d4,	// (0x0001097c) aid_postcard_touch_up_pane_ParamLimits

0x33d4,	// (0x0001097c) aid_postcard_touch_up_pane

0x9509,	// (0x00016ab1) main_blid2_pane

0xbdf7,	// (0x0001939f) popup_blid2_search_window

0x9509,	// (0x00016ab1) blid2_gps_pane

0x9509,	// (0x00016ab1) blid2_navig_pane

0x9509,	// (0x00016ab1) blid2_search_pane

0x9509,	// (0x00016ab1) blid2_tripm_pane

0x6a19,	// (0x00013fc1) blid2_search_pane_g1_ParamLimits

0x6a19,	// (0x00013fc1) blid2_search_pane_g1

0x6a31,	// (0x00013fd9) blid2_search_pane_t1_ParamLimits

0x6a31,	// (0x00013fd9) blid2_search_pane_t1

0x6a43,	// (0x00013feb) aid_size_cell_blid2_gps_ParamLimits

0x6a43,	// (0x00013feb) aid_size_cell_blid2_gps

0x6a5b,	// (0x00014003) blid2_gps_pane_g1_ParamLimits

0x6a5b,	// (0x00014003) blid2_gps_pane_g1

0x6a6f,	// (0x00014017) grid_blid2_satellite_pane_ParamLimits

0x6a6f,	// (0x00014017) grid_blid2_satellite_pane

0x6a89,	// (0x00014031) blid2_navig_pane_g1_ParamLimits

0x6a89,	// (0x00014031) blid2_navig_pane_g1

0x6a95,	// (0x0001403d) blid2_navig_pane_t1_ParamLimits

0x6a95,	// (0x0001403d) blid2_navig_pane_t1

0x6ab0,	// (0x00014058) blid2_navig_pane_t2_ParamLimits

0x6ab0,	// (0x00014058) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x0001d00e) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x0001d00e) blid2_navig_pane_t

0x6acb,	// (0x00014073) blid2_navig_ring_pane_ParamLimits

0x6acb,	// (0x00014073) blid2_navig_ring_pane

0x6ae4,	// (0x0001408c) blid2_speed_pane_ParamLimits

0x6ae4,	// (0x0001408c) blid2_speed_pane

0x6af0,	// (0x00014098) blid2_tripm_pane_g1_ParamLimits

0x6af0,	// (0x00014098) blid2_tripm_pane_g1

0x6b0b,	// (0x000140b3) blid2_tripm_pane_g2_ParamLimits

0x6b0b,	// (0x000140b3) blid2_tripm_pane_g2

0x6b1f,	// (0x000140c7) blid2_tripm_pane_g3_ParamLimits

0x6b1f,	// (0x000140c7) blid2_tripm_pane_g3

0x6b33,	// (0x000140db) blid2_tripm_pane_g4_ParamLimits

0x6b33,	// (0x000140db) blid2_tripm_pane_g4

0x6b47,	// (0x000140ef) blid2_tripm_pane_g5_ParamLimits

0x6b47,	// (0x000140ef) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x0001d013) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x0001d013) blid2_tripm_pane_g

0x6b6d,	// (0x00014115) blid2_tripm_pane_t1_ParamLimits

0x6b6d,	// (0x00014115) blid2_tripm_pane_t1

0x6b88,	// (0x00014130) blid2_tripm_pane_t2_ParamLimits

0x6b88,	// (0x00014130) blid2_tripm_pane_t2

0x6ba1,	// (0x00014149) blid2_tripm_pane_t3_ParamLimits

0x6ba1,	// (0x00014149) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x0001d020) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x0001d020) blid2_tripm_pane_t

0x6be8,	// (0x00014190) cell_blid2_satellite_pane_ParamLimits

0x6be8,	// (0x00014190) cell_blid2_satellite_pane

0x6c06,	// (0x000141ae) cell_blid2_satellite_pane_g1

0xd754,	// (0x0001acfc) cell_blid2_satellite_pane_t1

0x9f78,	// (0x00017520) blid2_speed_pane_g1

0xd762,	// (0x0001ad0a) blid2_speed_pane_t1

0xd770,	// (0x0001ad18) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x0001d029) blid2_speed_pane_t

0x9f78,	// (0x00017520) blid2_navig_ring_pane_g1

0x6c0f,	// (0x000141b7) blid2_navig_ring_pane_g2

0x6c17,	// (0x000141bf) blid2_navig_ring_pane_g3

0x6c1f,	// (0x000141c7) blid2_navig_ring_pane_g4

0x6c27,	// (0x000141cf) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x0001d02e) blid2_navig_ring_pane_g

0x9509,	// (0x00016ab1) bg_popup_window_pane_cp011

0xd77e,	// (0x0001ad26) popup_blid2_search_window_g1

0xd786,	// (0x0001ad2e) popup_blid2_search_window_t1

0xd794,	// (0x0001ad3c) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x0001d039) popup_blid2_search_window_t

0xa078,	// (0x00017620) main_browser_pane_g1

0x9d03,	// (0x000172ab) main_browser_pane_ParamLimits

0x9578,	// (0x00016b20) bg_button_pane_cp011_ParamLimits

0x5c11,	// (0x000131b9) cell_vitu2_function_pane_g1_ParamLimits

0xab0b,	// (0x000180b3) bg_popup_sub_pane_cp22_ParamLimits

0x64ec,	// (0x00013a94) input_focus_pane_cp08_ParamLimits

0x6507,	// (0x00013aaf) popup_vitu2_query_button_pane_ParamLimits

0x6507,	// (0x00013aaf) popup_vitu2_query_button_pane

0x6516,	// (0x00013abe) popup_vitu2_query_input_button_pane

0xd2e5,	// (0x0001a88d) popup_vitu2_query_window_g1_ParamLimits

0x651e,	// (0x00013ac6) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x0001cf3a) popup_vitu2_query_window_g_ParamLimits

0x9509,	// (0x00016ab1) bg_button_pane_cp026

0x6c2f,	// (0x000141d7) popup_vitu2_query_input_button_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp025

0xd7a2,	// (0x0001ad4a) popup_vitu2_query_button_pane_t1

0x42db,	// (0x00011883) main_mp3_pane_t6

0x42e9,	// (0x00011891) popup_slider_window_cp01

0xced1,	// (0x0001a479) cam4_battery_pane

0xcf24,	// (0x0001a4cc) cam4_battery_pane_cp02

0xd5ca,	// (0x0001ab72) cam4_battery_pane_cp01

0xd5ca,	// (0x0001ab72) cam4_battery_pane_cp03

0x9f78,	// (0x00017520) cam4_battery_pane_g1

0xd7b0,	// (0x0001ad58) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x0001d03e) cam4_battery_pane_g

0xc1a8,	// (0x00019750) popup_blid_sat_info2_window_t11

0xa853,	// (0x00017dfb) aid_size_touch_mv_arrow_left_ParamLimits

0xa87e,	// (0x00017e26) aid_size_touch_mv_arrow_right_ParamLimits

0xa8dc,	// (0x00017e84) navi_pane_g1_ParamLimits

0xa8e8,	// (0x00017e90) navi_pane_g2_ParamLimits

0xa916,	// (0x00017ebe) navi_pane_g3_ParamLimits

0xf35a,	// (0x0001c902) navi_pane_g_ParamLimits

0x2ff9,	// (0x000105a1) navi_pane_mv_t1_ParamLimits

0x4e56,	// (0x000123fe) grid_imed_effect_pane_ParamLimits

0x1f40,	// (0x0000f4e8) aid_placing_vt_slider_lsc

0x9fc7,	// (0x0001756f) aid_placing_vt_slider_prt

0x9578,	// (0x00016b20) bg_tb_trans_pane_cp01_ParamLimits

0xc446,	// (0x000199ee) popup_image_details_window_g1_ParamLimits

0xc459,	// (0x00019a01) popup_image_details_window_g2_ParamLimits

0xc46e,	// (0x00019a16) popup_image_details_window_g3_ParamLimits

0xc46e,	// (0x00019a16) popup_image_details_window_g3

0xf699,	// (0x0001cc41) popup_image_details_window_g_ParamLimits

0xc482,	// (0x00019a2a) popup_image_details_window_t1_ParamLimits

0xc494,	// (0x00019a3c) popup_image_details_window_t2_ParamLimits

0xc4ad,	// (0x00019a55) popup_image_details_window_t3_ParamLimits

0xc4c1,	// (0x00019a69) popup_image_details_window_t4_ParamLimits

0xc4dc,	// (0x00019a84) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x0001cc48) popup_image_details_window_t_ParamLimits

0x6882,	// (0x00013e2a) cl_header_name_pane_ParamLimits

0x6882,	// (0x00013e2a) cl_header_name_pane

0x6c37,	// (0x000141df) cl_header_name_pane_t1_ParamLimits

0x6c37,	// (0x000141df) cl_header_name_pane_t1

0x6c58,	// (0x00014200) cl_header_name_pane_t2_ParamLimits

0x6c58,	// (0x00014200) cl_header_name_pane_t2

0x6c9a,	// (0x00014242) cl_header_name_pane_t3_ParamLimits

0x6c9a,	// (0x00014242) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x0001d043) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x0001d043) cl_header_name_pane_t

0xa9a5,	// (0x00017f4d) navi_pane_mv_g2_ParamLimits

0xcfaf,	// (0x0001a557) field_vitu2_entry_pane_g1_ParamLimits

0xcfbb,	// (0x0001a563) field_vitu2_entry_pane_g2_ParamLimits

0xaad5,	// (0x0001807d) field_vitu2_entry_pane_g3_ParamLimits

0xaad5,	// (0x0001807d) field_vitu2_entry_pane_g3

0xf89b,	// (0x0001ce43) field_vitu2_entry_pane_g_ParamLimits

0x5aa1,	// (0x00013049) cell_vitu2_itu_pane_g1_ParamLimits

0x5ab9,	// (0x00013061) cell_vitu2_itu_pane_g2_ParamLimits

0x5ab9,	// (0x00013061) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0001ce4f) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0001ce4f) cell_vitu2_itu_pane_g

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp05_ParamLimits

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp05

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp03

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp04

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp10_ParamLimits

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp10

0x6826,	// (0x00013dce) bg_vkb2_func_pane_cp08

0x67ff,	// (0x00013da7) bg_vkb2_func_pane_cp06

0x680b,	// (0x00013db3) bg_vkb2_func_pane_cp07

0xd692,	// (0x0001ac3a) bg_vkb2_func_pane_cp11_ParamLimits

0xd692,	// (0x0001ac3a) bg_vkb2_func_pane_cp11

0xd6a7,	// (0x0001ac4f) bg_vkb2_func_pane_cp12_ParamLimits

0xd6a7,	// (0x0001ac4f) bg_vkb2_func_pane_cp12

0x9509,	// (0x00016ab1) bg_vkb2_func_pane_cp09

0xcff6,	// (0x0001a59e) bg_vkb2_func_pane_g1

0xa189,	// (0x00017731) bg_vkb2_func_pane_g2

0xcffe,	// (0x0001a5a6) bg_vkb2_func_pane_g3

0xd006,	// (0x0001a5ae) bg_vkb2_func_pane_g4

0xd28a,	// (0x0001a832) bg_vkb2_func_pane_g5

0xd01e,	// (0x0001a5c6) bg_vkb2_func_pane_g6

0xd026,	// (0x0001a5ce) bg_vkb2_func_pane_g7

0xd016,	// (0x0001a5be) bg_vkb2_func_pane_g8

0xa169,	// (0x00017711) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x0001d04a) bg_vkb2_func_pane_g

0x6b5b,	// (0x00014103) blid2_tripm_pane_g6_ParamLimits

0x6b5b,	// (0x00014103) blid2_tripm_pane_g6

0xcd8b,	// (0x0001a333) mp4_progress_pane_g1

0x6bd4,	// (0x0001417c) blid2_tripm_values_pane_ParamLimits

0x6bd4,	// (0x0001417c) blid2_tripm_values_pane

0x6ccb,	// (0x00014273) blid2_tripm_values_pane_t1

0x6cd9,	// (0x00014281) blid2_tripm_values_pane_t2

0x6ce7,	// (0x0001428f) blid2_tripm_values_pane_t3

0x6cf5,	// (0x0001429d) blid2_tripm_values_pane_t4

0x6d03,	// (0x000142ab) blid2_tripm_values_pane_t5

0x6d11,	// (0x000142b9) blid2_tripm_values_pane_t6

0x6d1f,	// (0x000142c7) blid2_tripm_values_pane_t7

0x6d2d,	// (0x000142d5) blid2_tripm_values_pane_t8

0x6d3b,	// (0x000142e3) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x0001d05d) blid2_tripm_values_pane_t

0x1f82,	// (0x0000f52a) call_video_pane_t1_ParamLimits

0x1fa0,	// (0x0000f548) call_video_pane_t2_ParamLimits

0xf208,	// (0x0001c7b0) call_video_pane_t_ParamLimits

0x32ba,	// (0x00010862) msg_header_pane_g1_ParamLimits

0xabc0,	// (0x00018168) msg_header_pane_g2_ParamLimits

0xabc0,	// (0x00018168) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0001c9a5) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0001c9a5) msg_header_pane_g

0x9d03,	// (0x000172ab) main_clock2_pane_ParamLimits

0x4b57,	// (0x000120ff) grid_clock2_toolbar_pane_ParamLimits

0x4b57,	// (0x000120ff) grid_clock2_toolbar_pane

0x4b57,	// (0x000120ff) listscroll_clock2_pane_ParamLimits

0x4b57,	// (0x000120ff) listscroll_clock2_pane

0x4c3b,	// (0x000121e3) main_clock2_pane_t3_ParamLimits

0x4c3b,	// (0x000121e3) main_clock2_pane_t3

0x4c5f,	// (0x00012207) main_clock2_pane_t4_ParamLimits

0x4c5f,	// (0x00012207) main_clock2_pane_t4

0xd7ba,	// (0x0001ad62) cell_clock2_toolbar_pane

0xd7c2,	// (0x0001ad6a) cell_clock2_toolbar_pane_cp01

0xd7c2,	// (0x0001ad6a) cell_clock2_toolbar_pane_cp02

0xd7ca,	// (0x0001ad72) cell_clock2_toolbar_pane_cp03

0xd7d2,	// (0x0001ad7a) list_clock2_pane

0xa7d8,	// (0x00017d80) scroll_pane_cp10

0xd7da,	// (0x0001ad82) list_single_clock2_pane_ParamLimits

0xd7da,	// (0x0001ad82) list_single_clock2_pane

0x9f38,	// (0x000174e0) list_highlight_pane_cp08

0xd7e7,	// (0x0001ad8f) list_single_clock2_pane_t1

0xd7f5,	// (0x0001ad9d) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x0001d070) list_single_clock2_pane_t

0x9509,	// (0x00016ab1) bg_button_pane_cp10

0xd803,	// (0x0001adab) cell_clock2_toolbar_pane_g1

0x334a,	// (0x000108f2) aid_main_viewer_pane_g1_ParamLimits

0x334a,	// (0x000108f2) aid_main_viewer_pane_g1

0x3358,	// (0x00010900) aid_main_viewer_pane_g2_ParamLimits

0x3358,	// (0x00010900) aid_main_viewer_pane_g2

0x3366,	// (0x0001090e) aid_main_viewer_pane_g3_ParamLimits

0x3366,	// (0x0001090e) aid_main_viewer_pane_g3

0x3375,	// (0x0001091d) aid_main_viewer_pane_g4_ParamLimits

0x3375,	// (0x0001091d) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0001c9b6) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0001c9b6) aid_main_viewer_pane_g

0x3cbe,	// (0x00011266) main_calc_pane_ParamLimits

0x3cd2,	// (0x0001127a) main_dialer2_pane_ParamLimits

0x9509,	// (0x00016ab1) main_cam6_pane

0x9509,	// (0x00016ab1) main_vid6_pane

0x4b63,	// (0x0001210b) listscroll_gen_pane_cp06_ParamLimits

0x4b63,	// (0x0001210b) listscroll_gen_pane_cp06

0x4c82,	// (0x0001222a) main_clock2_pane_t5_ParamLimits

0x4c82,	// (0x0001222a) main_clock2_pane_t5

0x4ce0,	// (0x00012288) aid_call2_pane_cp10_ParamLimits

0x4cf2,	// (0x0001229a) aid_call_pane_cp10_ParamLimits

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d04,	// (0x000122ac) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d04,	// (0x000122ac) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa847,	// (0x00017def) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x0001ccfd) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d1a,	// (0x000122c2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5223,	// (0x000127cb) cell_dialer2_keypad_pane_g2_ParamLimits

0x5223,	// (0x000127cb) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x0001cde2) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x0001cde2) cell_dialer2_keypad_pane_g

0x523f,	// (0x000127e7) cell_dialer2_keypad_pane_t1

0x5f30,	// (0x000134d8) main_cset_text2_pane_ParamLimits

0x5f30,	// (0x000134d8) main_cset_text2_pane

0xd4d1,	// (0x0001aa79) area_vitu2_query_pane_g1_ParamLimits

0x67a0,	// (0x00013d48) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x0001cf8d) area_vitu2_query_pane_g_ParamLimits

0xd555,	// (0x0001aafd) area_vitu2_query_pane_t7_ParamLimits

0xd555,	// (0x0001aafd) area_vitu2_query_pane_t7

0x67ff,	// (0x00013da7) bg_button_pane_cp018_ParamLimits

0x680b,	// (0x00013db3) bg_button_pane_cp021_ParamLimits

0x6817,	// (0x00013dbf) bg_button_pane_cp022_ParamLimits

0x6826,	// (0x00013dce) bg_vkb2_func_pane_cp08_ParamLimits

0x67ff,	// (0x00013da7) bg_vkb2_func_pane_cp06_ParamLimits

0x680b,	// (0x00013db3) bg_vkb2_func_pane_cp07_ParamLimits

0x6836,	// (0x00013dde) input_focus_pane_cp09_ParamLimits

0xd80b,	// (0x0001adb3) cam6_autofocus_pane_ParamLimits

0xd80b,	// (0x0001adb3) cam6_autofocus_pane

0x6d49,	// (0x000142f1) cam6_image_uncrop_pane_ParamLimits

0x6d49,	// (0x000142f1) cam6_image_uncrop_pane

0x6d58,	// (0x00014300) cam6_indi_pane_ParamLimits

0x6d58,	// (0x00014300) cam6_indi_pane

0x6d6e,	// (0x00014316) cam6_mode_pane_ParamLimits

0x6d6e,	// (0x00014316) cam6_mode_pane

0x6d80,	// (0x00014328) cam6_timer_pane_ParamLimits

0x6d80,	// (0x00014328) cam6_timer_pane

0x6d90,	// (0x00014338) cam6_zoom_pane_ParamLimits

0x6d90,	// (0x00014338) cam6_zoom_pane

0x6d9c,	// (0x00014344) cam6_mode_pane_g1_ParamLimits

0x6d9c,	// (0x00014344) cam6_mode_pane_g1

0x6dac,	// (0x00014354) cam6_mode_pane_g2_ParamLimits

0x6dac,	// (0x00014354) cam6_mode_pane_g2

0x6dbc,	// (0x00014364) cam6_mode_pane_g3_ParamLimits

0x6dbc,	// (0x00014364) cam6_mode_pane_g3

0x6dcc,	// (0x00014374) cam6_mode_pane_g4_ParamLimits

0x6dcc,	// (0x00014374) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x0001d075) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x0001d075) cam6_mode_pane_g

0xbf5e,	// (0x00019506) bg_tb_trans_pane_cp08_ParamLimits

0xbf5e,	// (0x00019506) bg_tb_trans_pane_cp08

0xd819,	// (0x0001adc1) cam6_battery_pane_ParamLimits

0xd819,	// (0x0001adc1) cam6_battery_pane

0xd82f,	// (0x0001add7) cam6_indi_pane_g1_ParamLimits

0xd82f,	// (0x0001add7) cam6_indi_pane_g1

0xd841,	// (0x0001ade9) cam6_indi_pane_g2_ParamLimits

0xd841,	// (0x0001ade9) cam6_indi_pane_g2

0xd853,	// (0x0001adfb) cam6_indi_pane_g3_ParamLimits

0xd853,	// (0x0001adfb) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x0001d07e) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x0001d07e) cam6_indi_pane_g

0xd865,	// (0x0001ae0d) cam6_indi_pane_t1_ParamLimits

0xd865,	// (0x0001ae0d) cam6_indi_pane_t1

0x6ddc,	// (0x00014384) cam6_autofocus_pane_g1

0x6de4,	// (0x0001438c) cam6_autofocus_pane_g2

0x6dec,	// (0x00014394) cam6_autofocus_pane_g3

0x6df4,	// (0x0001439c) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x0001d085) cam6_autofocus_pane_g

0xd88b,	// (0x0001ae33) cam6_timer_pane_g1

0xd893,	// (0x0001ae3b) cam6_timer_pane_t1

0xd8a1,	// (0x0001ae49) cam6_zoom_cont_pane

0xd8a9,	// (0x0001ae51) cam6_zoom_pane_g1

0xd8b1,	// (0x0001ae59) cam6_zoom_pane_g2

0x6dfc,	// (0x000143a4) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x0001d08e) cam6_zoom_pane_g

0x9f78,	// (0x00017520) cam6_battery_pane_g1

0x9f78,	// (0x00017520) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0001c966) cam6_battery_pane_g

0xd8b9,	// (0x0001ae61) cam6_zoom_cont_pane_g1

0xd8c2,	// (0x0001ae6a) cam6_zoom_cont_pane_g2

0xd8cb,	// (0x0001ae73) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x0001d095) cam6_zoom_cont_pane_g

0x6e19,	// (0x000143c1) cam6_mode_pane_cp_ParamLimits

0x6e19,	// (0x000143c1) cam6_mode_pane_cp

0x6d90,	// (0x00014338) cam6_zoom_pane_cp_ParamLimits

0x6d90,	// (0x00014338) cam6_zoom_pane_cp

0x6e2b,	// (0x000143d3) vid6_image_uncrop_cif_pane_ParamLimits

0x6e2b,	// (0x000143d3) vid6_image_uncrop_cif_pane

0x6e3b,	// (0x000143e3) vid6_image_uncrop_nhd_pane_ParamLimits

0x6e3b,	// (0x000143e3) vid6_image_uncrop_nhd_pane

0x6d49,	// (0x000142f1) vid6_image_uncrop_vga_pane_ParamLimits

0x6d49,	// (0x000142f1) vid6_image_uncrop_vga_pane

0x6e4a,	// (0x000143f2) vid6_image_uncrop_wvga_pane_ParamLimits

0x6e4a,	// (0x000143f2) vid6_image_uncrop_wvga_pane

0x6e59,	// (0x00014401) vid6_indi_pane_ParamLimits

0x6e59,	// (0x00014401) vid6_indi_pane

0xbf5e,	// (0x00019506) bg_tb_trans_pane_cp09_ParamLimits

0xbf5e,	// (0x00019506) bg_tb_trans_pane_cp09

0xd8e3,	// (0x0001ae8b) cam6_battery_pane_cp_ParamLimits

0xd8e3,	// (0x0001ae8b) cam6_battery_pane_cp

0xd8ef,	// (0x0001ae97) vid6_indi_pane_g1_ParamLimits

0xd8ef,	// (0x0001ae97) vid6_indi_pane_g1

0xd901,	// (0x0001aea9) vid6_indi_pane_g2_ParamLimits

0xd901,	// (0x0001aea9) vid6_indi_pane_g2

0xd913,	// (0x0001aebb) vid6_indi_pane_g3_ParamLimits

0xd913,	// (0x0001aebb) vid6_indi_pane_g3

0xd928,	// (0x0001aed0) vid6_indi_pane_g4_ParamLimits

0xd928,	// (0x0001aed0) vid6_indi_pane_g4

0xd93d,	// (0x0001aee5) vid6_indi_pane_g5_ParamLimits

0xd93d,	// (0x0001aee5) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x0001d09c) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x0001d09c) vid6_indi_pane_g

0xd957,	// (0x0001aeff) vid6_indi_pane_t1_ParamLimits

0xd957,	// (0x0001aeff) vid6_indi_pane_t1

0xd96d,	// (0x0001af15) vid6_indi_pane_t2_ParamLimits

0xd96d,	// (0x0001af15) vid6_indi_pane_t2

0xd995,	// (0x0001af3d) vid6_indi_pane_t3_ParamLimits

0xd995,	// (0x0001af3d) vid6_indi_pane_t3

0xd9bd,	// (0x0001af65) vid6_indi_pane_t4_ParamLimits

0xd9bd,	// (0x0001af65) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x0001d0a7) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x0001d0a7) vid6_indi_pane_t

0xd9e1,	// (0x0001af89) wait_bar_pane_cp08

0x6e71,	// (0x00014419) main_cset_text2_pane_t1_ParamLimits

0x6e71,	// (0x00014419) main_cset_text2_pane_t1

0x6e04,	// (0x000143ac) listscroll_gen_pane_cp06_t1_ParamLimits

0x6e04,	// (0x000143ac) listscroll_gen_pane_cp06_t1

0x9509,	// (0x00016ab1) main_cam6_set_pane

0x9c6f,	// (0x00017217) bg_tb_trans_pane_cp06_ParamLimits

0xced9,	// (0x0001a481) cam4_indicators_pane_g1_ParamLimits

0xceea,	// (0x0001a492) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x0001ce1f) cam4_indicators_pane_g_ParamLimits

0xcf02,	// (0x0001a4aa) cam4_indicators_pane_t1_ParamLimits

0x9578,	// (0x00016b20) bg_tb_trans_pane_cp07_ParamLimits

0xcf2c,	// (0x0001a4d4) vid4_indicators_pane_g1_ParamLimits

0xcf40,	// (0x0001a4e8) vid4_indicators_pane_g2_ParamLimits

0xcf54,	// (0x0001a4fc) vid4_indicators_pane_g3_ParamLimits

0xcf65,	// (0x0001a50d) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x0001ce31) vid4_indicators_pane_g_ParamLimits

0xcf81,	// (0x0001a529) vid4_indicators_pane_t1_ParamLimits

0xd5d2,	// (0x0001ab7a) vid4_progress_pane_g1_ParamLimits

0xd5e2,	// (0x0001ab8a) vid4_progress_pane_g2_ParamLimits

0x6975,	// (0x00013f1d) vid4_progress_pane_g3_ParamLimits

0xd5f2,	// (0x0001ab9a) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x0001cfd8) vid4_progress_pane_g_ParamLimits

0x6987,	// (0x00013f2f) vid4_progress_pane_t1_ParamLimits

0xd60a,	// (0x0001abb2) vid4_progress_pane_t2_ParamLimits

0xd61f,	// (0x0001abc7) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x0001cfe3) vid4_progress_pane_t_ParamLimits

0x699d,	// (0x00013f45) wait_bar_pane_cp07_ParamLimits

0x6e8f,	// (0x00014437) main_cam6_set_pane_g2_ParamLimits

0x6e8f,	// (0x00014437) main_cam6_set_pane_g2

0x6eb3,	// (0x0001445b) main_cset6_listscroll_pane_ParamLimits

0x6eb3,	// (0x0001445b) main_cset6_listscroll_pane

0x6ecf,	// (0x00014477) main_cset6_slider_pane_ParamLimits

0x6ecf,	// (0x00014477) main_cset6_slider_pane

0x6ee5,	// (0x0001448d) main_cset6_text2_pane_ParamLimits

0x6ee5,	// (0x0001448d) main_cset6_text2_pane

0xd9f0,	// (0x0001af98) main_cset6_text_pane

0xd9f8,	// (0x0001afa0) main_cset_list_pane_copy1_ParamLimits

0xd9f8,	// (0x0001afa0) main_cset_list_pane_copy1

0xda08,	// (0x0001afb0) scroll_pane_cp028_copy1

0x6ef3,	// (0x0001449b) cset_list_set_pane_copy1

0x6f05,	// (0x000144ad) aid_position_infowindow_above_copy1

0x6f0d,	// (0x000144b5) aid_position_infowindow_below_copy1

0xda11,	// (0x0001afb9) cset_list_set_pane_g1_copy1

0xda19,	// (0x0001afc1) cset_list_set_pane_g3_copy1_ParamLimits

0xda19,	// (0x0001afc1) cset_list_set_pane_g3_copy1

0xda28,	// (0x0001afd0) cset_list_set_pane_t1_copy1_ParamLimits

0xda28,	// (0x0001afd0) cset_list_set_pane_t1_copy1

0x9578,	// (0x00016b20) list_highlight_pane_cp021_copy1_ParamLimits

0x9578,	// (0x00016b20) list_highlight_pane_cp021_copy1

0xda3d,	// (0x0001afe5) cset6_slider_pane_ParamLimits

0xda3d,	// (0x0001afe5) cset6_slider_pane

0xda69,	// (0x0001b011) main_cset6_slider_pane_g1_ParamLimits

0xda69,	// (0x0001b011) main_cset6_slider_pane_g1

0x6f15,	// (0x000144bd) main_cset6_slider_pane_g2_ParamLimits

0x6f15,	// (0x000144bd) main_cset6_slider_pane_g2

0xda91,	// (0x0001b039) main_cset6_slider_pane_g3_ParamLimits

0xda91,	// (0x0001b039) main_cset6_slider_pane_g3

0x6f3d,	// (0x000144e5) main_cset6_slider_pane_g4_ParamLimits

0x6f3d,	// (0x000144e5) main_cset6_slider_pane_g4

0xda9d,	// (0x0001b045) main_cset6_slider_pane_g5_ParamLimits

0xda9d,	// (0x0001b045) main_cset6_slider_pane_g5

0xd125,	// (0x0001a6cd) main_cset6_slider_pane_g7_ParamLimits

0xd125,	// (0x0001a6cd) main_cset6_slider_pane_g7

0xd131,	// (0x0001a6d9) main_cset6_slider_pane_g8_ParamLimits

0xd131,	// (0x0001a6d9) main_cset6_slider_pane_g8

0x5fd6,	// (0x0001357e) main_cset6_slider_pane_g9_ParamLimits

0x5fd6,	// (0x0001357e) main_cset6_slider_pane_g9

0x5fe2,	// (0x0001358a) main_cset6_slider_pane_g10_ParamLimits

0x5fe2,	// (0x0001358a) main_cset6_slider_pane_g10

0x5fee,	// (0x00013596) main_cset6_slider_pane_g11_ParamLimits

0x5fee,	// (0x00013596) main_cset6_slider_pane_g11

0x5ffa,	// (0x000135a2) main_cset6_slider_pane_g12_ParamLimits

0x5ffa,	// (0x000135a2) main_cset6_slider_pane_g12

0x6006,	// (0x000135ae) main_cset6_slider_pane_g13_ParamLimits

0x6006,	// (0x000135ae) main_cset6_slider_pane_g13

0x6012,	// (0x000135ba) main_cset6_slider_pane_g14_ParamLimits

0x6012,	// (0x000135ba) main_cset6_slider_pane_g14

0x6f49,	// (0x000144f1) main_cset6_slider_pane_g15_ParamLimits

0x6f49,	// (0x000144f1) main_cset6_slider_pane_g15

0xd13d,	// (0x0001a6e5) main_cset6_slider_pane_g16_ParamLimits

0xd13d,	// (0x0001a6e5) main_cset6_slider_pane_g16

0xd149,	// (0x0001a6f1) main_cset6_slider_pane_g17_ParamLimits

0xd149,	// (0x0001a6f1) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x0001d0b0) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x0001d0b0) main_cset6_slider_pane_g

0xdaa9,	// (0x0001b051) main_cset6_slider_pane_t1_ParamLimits

0xdaa9,	// (0x0001b051) main_cset6_slider_pane_t1

0x6f79,	// (0x00014521) main_cset6_slider_pane_t2_ParamLimits

0x6f79,	// (0x00014521) main_cset6_slider_pane_t2

0x6fa4,	// (0x0001454c) main_cset6_slider_pane_t3_ParamLimits

0x6fa4,	// (0x0001454c) main_cset6_slider_pane_t3

0x6fcf,	// (0x00014577) main_cset6_slider_pane_t4_ParamLimits

0x6fcf,	// (0x00014577) main_cset6_slider_pane_t4

0x6ffa,	// (0x000145a2) main_cset6_slider_pane_t5_ParamLimits

0x6ffa,	// (0x000145a2) main_cset6_slider_pane_t5

0xdaea,	// (0x0001b092) main_cset6_slider_pane_t7_ParamLimits

0xdaea,	// (0x0001b092) main_cset6_slider_pane_t7

0x7025,	// (0x000145cd) main_cset6_slider_pane_t8_ParamLimits

0x7025,	// (0x000145cd) main_cset6_slider_pane_t8

0x7049,	// (0x000145f1) main_cset6_slider_pane_t9_ParamLimits

0x7049,	// (0x000145f1) main_cset6_slider_pane_t9

0x706d,	// (0x00014615) main_cset6_slider_pane_t10_ParamLimits

0x706d,	// (0x00014615) main_cset6_slider_pane_t10

0x7091,	// (0x00014639) main_cset6_slider_pane_t11_ParamLimits

0x7091,	// (0x00014639) main_cset6_slider_pane_t11

0xdb20,	// (0x0001b0c8) main_cset6_slider_pane_t14_ParamLimits

0xdb20,	// (0x0001b0c8) main_cset6_slider_pane_t14

0xdb59,	// (0x0001b101) main_cset6_slider_pane_t15_ParamLimits

0xdb59,	// (0x0001b101) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x0001d0d5) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x0001d0d5) main_cset6_slider_pane_t

0xca29,	// (0x00019fd1) cset_slider_pane_g1_copy1

0xd22b,	// (0x0001a7d3) cset_slider_pane_g2_copy1

0xd234,	// (0x0001a7dc) cset_slider_pane_g3_copy1

0x9509,	// (0x00016ab1) bg_popup_sub_pane_cp011_copy1

0xdb9b,	// (0x0001b143) main_cset_text_pane_g1_copy1

0xd2f9,	// (0x0001a8a1) main_cset_text_pane_t1_copy1

0xd307,	// (0x0001a8af) main_cset_text_pane_t2_copy1

0xd315,	// (0x0001a8bd) main_cset_text_pane_t3_copy1

0xd323,	// (0x0001a8cb) main_cset_text_pane_t4_copy1

0xd331,	// (0x0001a8d9) main_cset_text_pane_t5_copy1

0xdba3,	// (0x0001b14b) main_cset_text_pane_t6_copy1

0xdbb1,	// (0x0001b159) main_cset_text_pane_t7_copy1

0x6e71,	// (0x00014419) main_cset_text2_pane_t1_copy1

0x9578,	// (0x00016b20) main_ncimui_pane

0x3f16,	// (0x000114be) popup_query_ncimui_window_ParamLimits

0x3f16,	// (0x000114be) popup_query_ncimui_window

0xc5b9,	// (0x00019b61) field_cale_ev2_pane_g4_ParamLimits

0xc5b9,	// (0x00019b61) field_cale_ev2_pane_g4

0x5102,	// (0x000126aa) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5102,	// (0x000126aa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x0001cdb9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x0001cdb9) cell_video_dialer_keypad_pane_g

0x511a,	// (0x000126c2) cell_video_dialer_keypad_pane_t1

0x9509,	// (0x00016ab1) bg_popup_window_pane_cp012

0xbd53,	// (0x000192fb) heading_pane_cp06

0xdbdd,	// (0x0001b185) ncim_query_content_pane

0x9509,	// (0x00016ab1) bg_popup_heading_pane_cp01

0xdbe5,	// (0x0001b18d) ncim_heading_pane_t1

0xdbf3,	// (0x0001b19b) ncim_indicator_popup_pane

0xdc05,	// (0x0001b1ad) ncim_query_button_pane

0xdc19,	// (0x0001b1c1) ncim_query_content_pane_t1

0xdc2b,	// (0x0001b1d3) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x0001d119) ncim_query_content_pane_t

0xdc65,	// (0x0001b20d) ncim_query_list_pane

0xdc77,	// (0x0001b21f) ncim_query_popup_pane

0xdbf3,	// (0x0001b19b) ncim_indicator_popup_pane_ParamLimits

0x71fb,	// (0x000147a3) ncim_query_content_pane_g1_ParamLimits

0x71fb,	// (0x000147a3) ncim_query_content_pane_g1

0xdc19,	// (0x0001b1c1) ncim_query_content_pane_t1_ParamLimits

0xdc2b,	// (0x0001b1d3) ncim_query_content_pane_t2_ParamLimits

0x7207,	// (0x000147af) ncim_query_content_pane_t3_ParamLimits

0x7207,	// (0x000147af) ncim_query_content_pane_t3

0x722f,	// (0x000147d7) ncim_query_content_pane_t4_ParamLimits

0x722f,	// (0x000147d7) ncim_query_content_pane_t4

0x7257,	// (0x000147ff) ncim_query_content_pane_t5_ParamLimits

0x7257,	// (0x000147ff) ncim_query_content_pane_t5

0xdc3d,	// (0x0001b1e5) ncim_query_content_pane_t6_ParamLimits

0xdc3d,	// (0x0001b1e5) ncim_query_content_pane_t6

0xfb71,	// (0x0001d119) ncim_query_content_pane_t_ParamLimits

0xdc65,	// (0x0001b20d) ncim_query_list_pane_ParamLimits

0xdc77,	// (0x0001b21f) ncim_query_popup_pane_ParamLimits

0xdc8b,	// (0x0001b233) wait_bar_pane_cp04

0x9509,	// (0x00016ab1) input_focus_pane_cp011

0xdc93,	// (0x0001b23b) ncim_query_popup_pane_t1

0xdca1,	// (0x0001b249) ncim_list_query_list_pane_ParamLimits

0xdca1,	// (0x0001b249) ncim_list_query_list_pane

0x9509,	// (0x00016ab1) bg_button_pane_cp027

0xdcae,	// (0x0001b256) ncim_query_button_pane_g1

0x9509,	// (0x00016ab1) list_highlight_pane_cp012

0xdcb8,	// (0x0001b260) ncim_list_query_list_pane_g1

0xdcc0,	// (0x0001b268) ncim_list_query_list_pane_t1

0xcef6,	// (0x0001a49e) cam4_indicators_pane_g3_ParamLimits

0xcef6,	// (0x0001a49e) cam4_indicators_pane_g3

0xcf71,	// (0x0001a519) vid4_indicators_pane_g5_ParamLimits

0xcf71,	// (0x0001a519) vid4_indicators_pane_g5

0xd5fe,	// (0x0001aba6) vid4_progress_pane_g5_ParamLimits

0xd5fe,	// (0x0001aba6) vid4_progress_pane_g5

0x70e6,	// (0x0001468e) main_ncimui_pane_g1

0x714f,	// (0x000146f7) ncimui_group_query_pane_ParamLimits

0x714f,	// (0x000146f7) ncimui_group_query_pane

0x7197,	// (0x0001473f) ncimui_list_pane_ParamLimits

0x7197,	// (0x0001473f) ncimui_list_pane

0x71be,	// (0x00014766) ncimui_text_pane_ParamLimits

0x71be,	// (0x00014766) ncimui_text_pane

0x727f,	// (0x00014827) ncimui_text_pane_t1_ParamLimits

0x727f,	// (0x00014827) ncimui_text_pane_t1

0xdcce,	// (0x0001b276) ncimui_list_single_graphic_pane_ParamLimits

0xdcce,	// (0x0001b276) ncimui_list_single_graphic_pane

0x729d,	// (0x00014845) ncimui_query_pane_ParamLimits

0x729d,	// (0x00014845) ncimui_query_pane

0x9509,	// (0x00016ab1) list_highlight_pane_cp013

0xdcde,	// (0x0001b286) ncim_list_query_list_pane_t1_copy1

0xdcec,	// (0x0001b294) ncim_list_single_graphic_pane_g1

0x72b0,	// (0x00014858) ncim_query_button_pane_cp01

0x72bc,	// (0x00014864) ncim_query_entry_pane_ParamLimits

0x72bc,	// (0x00014864) ncim_query_entry_pane

0x72cf,	// (0x00014877) ncimui_query_pane_g1

0x72db,	// (0x00014883) ncimui_query_pane_t1_ParamLimits

0x72db,	// (0x00014883) ncimui_query_pane_t1

0x9578,	// (0x00016b20) input_focus_pane_cp012

0xdcf4,	// (0x0001b29c) ncim_query_entry_pane_t1

0x9d03,	// (0x000172ab) main_im_pane_ParamLimits

0x9578,	// (0x00016b20) main_mobtv_pane_ParamLimits

0x9578,	// (0x00016b20) main_mobtv_pane

0x6f61,	// (0x00014509) main_cset6_slider_pane_g18_ParamLimits

0x6f61,	// (0x00014509) main_cset6_slider_pane_g18

0x6f6d,	// (0x00014515) main_cset6_slider_pane_g19_ParamLimits

0x6f6d,	// (0x00014515) main_cset6_slider_pane_g19

0x9c8b,	// (0x00017233) bg_main_mobtv_pane_ParamLimits

0x9c8b,	// (0x00017233) bg_main_mobtv_pane

0x72f4,	// (0x0001489c) main_mobtv_info_pane

0x72fd,	// (0x000148a5) main_mobtv_loading_pane_ParamLimits

0x72fd,	// (0x000148a5) main_mobtv_loading_pane

0xdd06,	// (0x0001b2ae) main_mobtv_pg_channel_list_pane

0xdd10,	// (0x0001b2b8) main_mobtv_pg_hdr_pane

0x730a,	// (0x000148b2) main_mobtv_programe_curr_pane_ParamLimits

0x730a,	// (0x000148b2) main_mobtv_programe_curr_pane

0x7317,	// (0x000148bf) main_mobtv_programe_next_pane_ParamLimits

0x7317,	// (0x000148bf) main_mobtv_programe_next_pane

0xdd19,	// (0x0001b2c1) popup_mobtv_noti_window

0x9f78,	// (0x00017520) main_tv_pg_hdr_pane_g1

0xdd21,	// (0x0001b2c9) main_tv_pg_hdr_pane_g2

0xdd29,	// (0x0001b2d1) main_tv_pg_hdr_pane_g3

0xdd31,	// (0x0001b2d9) main_tv_pg_hdr_pane_g4

0xdd39,	// (0x0001b2e1) main_tv_pg_hdr_pane_g5

0xdd43,	// (0x0001b2eb) main_tv_pg_hdr_pane_g6

0xdd4d,	// (0x0001b2f5) main_tv_pg_hdr_pane_g7

0xdd57,	// (0x0001b2ff) main_tv_pg_hdr_pane_g8

0xdd61,	// (0x0001b309) main_tv_pg_hdr_pane_g9

0xdd6b,	// (0x0001b313) main_tv_pg_hdr_pane_g10

0xdd75,	// (0x0001b31d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x0001d126) main_tv_pg_hdr_pane_g

0xdd7f,	// (0x0001b327) main_tv_pg_hdr_pane_t1

0xdd8d,	// (0x0001b335) main_tv_pg_hdr_pane_t2

0xdd9b,	// (0x0001b343) main_tv_pg_hdr_pane_t3

0xddab,	// (0x0001b353) main_tv_pg_hdr_pane_t4

0xddbb,	// (0x0001b363) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x0001d13d) main_tv_pg_hdr_pane_t

0xddcb,	// (0x0001b373) single_mobtv_pg_channel_pane_ParamLimits

0xddcb,	// (0x0001b373) single_mobtv_pg_channel_pane

0xdddd,	// (0x0001b385) single_mobtv_pg_channel_table_pane

0xa298,	// (0x00017840) single_mobtv_pg_channel_thumb_pane

0xdde6,	// (0x0001b38e) single_tv_pg_channel_pane_g1

0xddef,	// (0x0001b397) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x0001d148) single_tv_pg_channel_pane_g

0x9c6f,	// (0x00017217) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9c6f,	// (0x00017217) bg_single_mobtv_pg_channel_thumb_pane

0xddf8,	// (0x0001b3a0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xddf8,	// (0x0001b3a0) single_mobtv_pg_channel_thumb_pane_g1

0xde06,	// (0x0001b3ae) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde06,	// (0x0001b3ae) single_mobtv_pg_channel_thumb_pane_g2

0xde12,	// (0x0001b3ba) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde12,	// (0x0001b3ba) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x0001d14d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x0001d14d) single_mobtv_pg_channel_thumb_pane_g

0xde1e,	// (0x0001b3c6) single_mobtv_pg_channel_thumb_pane_t1

0xde2c,	// (0x0001b3d4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x0001d154) single_mobtv_pg_channel_thumb_pane_t

0x9f78,	// (0x00017520) bg_single_mobtv_pg_channel_table_pane_g1

0x9f78,	// (0x00017520) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0001c966) bg_single_mobtv_pg_channel_table_pane_g

0xde3a,	// (0x0001b3e2) single_mobtv_pg_channel_table_pane_t1

0xde48,	// (0x0001b3f0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x0001d159) single_mobtv_pg_channel_table_pane_t

0x732c,	// (0x000148d4) main_mobtv_info_pane_g1_ParamLimits

0x732c,	// (0x000148d4) main_mobtv_info_pane_g1

0x734a,	// (0x000148f2) main_mobtv_info_pane_t1_ParamLimits

0x734a,	// (0x000148f2) main_mobtv_info_pane_t1

0x73c2,	// (0x0001496a) main_mobtv_info_pane_t2_ParamLimits

0x73c2,	// (0x0001496a) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x0001d163) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x0001d163) main_mobtv_info_pane_t

0x7451,	// (0x000149f9) wait_bar_pane_cp05

0x7463,	// (0x00014a0b) main_mobtv_loading_pane_g1_ParamLimits

0x7463,	// (0x00014a0b) main_mobtv_loading_pane_g1

0x7476,	// (0x00014a1e) main_mobtv_loading_pane_g2_ParamLimits

0x7476,	// (0x00014a1e) main_mobtv_loading_pane_g2

0x7482,	// (0x00014a2a) main_mobtv_loading_pane_g3_ParamLimits

0x7482,	// (0x00014a2a) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x0001d16a) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x0001d16a) main_mobtv_loading_pane_g

0xde56,	// (0x0001b3fe) main_mobtv_loading_pane_t1_ParamLimits

0xde56,	// (0x0001b3fe) main_mobtv_loading_pane_t1

0xde6e,	// (0x0001b416) main_mobtv_loading_pane_t2_ParamLimits

0xde6e,	// (0x0001b416) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x0001d171) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x0001d171) main_mobtv_loading_pane_t

0x7495,	// (0x00014a3d) wait_bar_pane_cp06_ParamLimits

0x7495,	// (0x00014a3d) wait_bar_pane_cp06

0xde92,	// (0x0001b43a) main_mobtv_programe_curr_pane_t1

0xdea0,	// (0x0001b448) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x0001d176) main_mobtv_programe_curr_pane_t

0xdeae,	// (0x0001b456) main_mobtv_programe_next_pane_t1

0xdebc,	// (0x0001b464) main_mobtv_programe_next_pane_t2

0xdeca,	// (0x0001b472) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x0001d17b) main_mobtv_programe_next_pane_t

0x9509,	// (0x00016ab1) bg_popup_mobtv_noti_window_pane

0xded8,	// (0x0001b480) popup_mobtv_noti_window_g1

0xdee0,	// (0x0001b488) popup_mobtv_noti_window_t1

0xdeee,	// (0x0001b496) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x0001d182) popup_mobtv_noti_window_t

0x9f78,	// (0x00017520) bg_popup_mobtv_noti_window_pane_g1

0x9509,	// (0x00016ab1) sc_clock_pane

0x9509,	// (0x00016ab1) main_fs_bigclock_pane

0x6bbe,	// (0x00014166) blid2_tripm_pane_t4_ParamLimits

0x6bbe,	// (0x00014166) blid2_tripm_pane_t4

0x74a4,	// (0x00014a4c) sc_clock_pane_g1_ParamLimits

0x74a4,	// (0x00014a4c) sc_clock_pane_g1

0x74b6,	// (0x00014a5e) sc_clock_pane_t1_ParamLimits

0x74b6,	// (0x00014a5e) sc_clock_pane_t1

0x74d8,	// (0x00014a80) sc_clock_pane_t2_ParamLimits

0x74d8,	// (0x00014a80) sc_clock_pane_t2

0x74f0,	// (0x00014a98) sc_clock_pane_t3_ParamLimits

0x74f0,	// (0x00014a98) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x0001d187) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x0001d187) sc_clock_pane_t

0x8209,	// (0x000157b1) main_fs_bigclock_indicator_pane_ParamLimits

0x8209,	// (0x000157b1) main_fs_bigclock_indicator_pane

0x7596,	// (0x00014b3e) main_fs_bigclock_pane_g1_ParamLimits

0x7596,	// (0x00014b3e) main_fs_bigclock_pane_g1

0x8215,	// (0x000157bd) main_fs_bigclock_pane_t1_ParamLimits

0x8215,	// (0x000157bd) main_fs_bigclock_pane_t1

0x8227,	// (0x000157cf) main_fs_bigclock_pane_t2_ParamLimits

0x8227,	// (0x000157cf) main_fs_bigclock_pane_t2

0x823b,	// (0x000157e3) main_fs_bigclock_pane_t3_ParamLimits

0x823b,	// (0x000157e3) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x0001d318) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x0001d318) main_fs_bigclock_pane_t

0xea7c,	// (0x0001c024) main_fs_bigclock_indicator_pane_g1

0xdc0d,	// (0x0001b1b5) ncim_query_content_pane_g2_ParamLimits

0xdc0d,	// (0x0001b1b5) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x0001d114) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x0001d114) ncim_query_content_pane_g

0x7509,	// (0x00014ab1) sc_clock_pane_t4_ParamLimits

0x7509,	// (0x00014ab1) sc_clock_pane_t4

0x9578,	// (0x00016b20) main_radioblah_pane

0xce3f,	// (0x0001a3e7) cell_call4_button_pane_t1_copy1_ParamLimits

0xce3f,	// (0x0001a3e7) cell_call4_button_pane_t1_copy1

0x70fe,	// (0x000146a6) main_ncimui_pane_t1_ParamLimits

0x70fe,	// (0x000146a6) main_ncimui_pane_t1

0x7118,	// (0x000146c0) main_ncimui_pane_t2_ParamLimits

0x7118,	// (0x000146c0) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x0001d10d) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x0001d10d) main_ncimui_pane_t

0xe034,	// (0x0001b5dc) main_radioblah_anim_pane_ParamLimits

0xe034,	// (0x0001b5dc) main_radioblah_anim_pane

0xe045,	// (0x0001b5ed) main_radioblah_info_pane_ParamLimits

0xe045,	// (0x0001b5ed) main_radioblah_info_pane

0xe059,	// (0x0001b601) main_radioblah_pane_t1_ParamLimits

0xe059,	// (0x0001b601) main_radioblah_pane_t1

0xe075,	// (0x0001b61d) main_radioblah_pane_t2_ParamLimits

0xe075,	// (0x0001b61d) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x0001d1a8) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x0001d1a8) main_radioblah_pane_t

0x75f5,	// (0x00014b9d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x75f5,	// (0x00014b9d) main_radioblah_rocker_ctrl_pane

0xe0bd,	// (0x0001b665) main_radioblah_info_pane_t1_ParamLimits

0xe0bd,	// (0x0001b665) main_radioblah_info_pane_t1

0x764d,	// (0x00014bf5) main_radioblah_info_pane_t2_ParamLimits

0x764d,	// (0x00014bf5) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x0001d1b1) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x0001d1b1) main_radioblah_info_pane_t

0x9f78,	// (0x00017520) main_radioblah_rocker_ctrl_pane_g1

0x76fd,	// (0x00014ca5) main_radioblah_rocker_ctrl_pane_g2

0x7705,	// (0x00014cad) main_radioblah_rocker_ctrl_pane_g3

0x770d,	// (0x00014cb5) main_radioblah_rocker_ctrl_pane_g4

0x7715,	// (0x00014cbd) main_radioblah_rocker_ctrl_pane_g5

0x771d,	// (0x00014cc5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x0001d1ba) main_radioblah_rocker_ctrl_pane_g

0x6e71,	// (0x00014419) main_cset_text2_pane_t1_copy1_ParamLimits

0xcec9,	// (0x0001a471) cam4_image_uncrop_qvga_pane

0xcf1c,	// (0x0001a4c4) vid4_image_uncrop_qcif_pane

0xd80b,	// (0x0001adb3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd80b,	// (0x0001adb3) cam6_image_uncrop_qvga_pane

0xd8d3,	// (0x0001ae7b) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8d3,	// (0x0001ae7b) vid6_image_uncrop_qcif_pane

0x9509,	// (0x00016ab1) bg_popup_preview_window_pane_cp03

0xdbbf,	// (0x0001b167) list_cset_text2_pane

0xdbc7,	// (0x0001b16f) main_cset6_text2_pane_g1

0xdbcf,	// (0x0001b177) main_cset6_text2_pane_t1

0xed8b,	// (0x0001c333) list_cset_text2_pane_t1_ParamLimits

0xed8b,	// (0x0001c333) list_cset_text2_pane_t1

0x9578,	// (0x00016b20) main_radioblah_pane_ParamLimits

0x743d,	// (0x000149e5) main_mobtv_info_pane_t3_ParamLimits

0x743d,	// (0x000149e5) main_mobtv_info_pane_t3

0x75e3,	// (0x00014b8b) main_radioblah_pane_g1

0x761d,	// (0x00014bc5) main_radioblah_info_pane_g1

0x76a2,	// (0x00014c4a) main_radioblah_info_pane_t3_ParamLimits

0x76a2,	// (0x00014c4a) main_radioblah_info_pane_t3

0x2bf9,	// (0x000101a1) highlight_cell_cale_month_pane_ParamLimits

0x2bf9,	// (0x000101a1) highlight_cell_cale_month_pane

0x9509,	// (0x00016ab1) main_phob_fisheye_pane

0xc65a,	// (0x00019c02) scroll_pane_cp0031_ParamLimits

0xc65a,	// (0x00019c02) scroll_pane_cp0031

0xd9e1,	// (0x0001af89) wait_bar_pane_cp08_ParamLimits

0x6ef3,	// (0x0001449b) cset_list_set_pane_copy1_ParamLimits

0xe0f7,	// (0x0001b69f) highlight_cell_cale_month_pane_g1

0x7725,	// (0x00014ccd) highlight_cell_cale_month_pane_t1

0xd5c1,	// (0x0001ab69) list_gen_pane_cp01

0xd110,	// (0x0001a6b8) scroll_pane_01

0x7733,	// (0x00014cdb) list_single_double_fisheye_pane

0x773c,	// (0x00014ce4) list_double_fisheye_pane_g1_ParamLimits

0x773c,	// (0x00014ce4) list_double_fisheye_pane_g1

0x7748,	// (0x00014cf0) list_double_fisheye_pane_g2_ParamLimits

0x7748,	// (0x00014cf0) list_double_fisheye_pane_g2

0x775c,	// (0x00014d04) list_double_fisheye_pane_g3_ParamLimits

0x775c,	// (0x00014d04) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x0001d1c7) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x0001d1c7) list_double_fisheye_pane_g

0x7785,	// (0x00014d2d) list_double_fisheye_pane_t1_ParamLimits

0x7785,	// (0x00014d2d) list_double_fisheye_pane_t1

0x77a0,	// (0x00014d48) list_double_fisheye_pane_t2_ParamLimits

0x77a0,	// (0x00014d48) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0001d1d2) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0001d1d2) list_double_fisheye_pane_t

0x9509,	// (0x00016ab1) main_call5_pane

0x7534,	// (0x00014adc) sc_swipe_pane_ParamLimits

0x7534,	// (0x00014adc) sc_swipe_pane

0x77d5,	// (0x00014d7d) call5_image_pane_ParamLimits

0x77d5,	// (0x00014d7d) call5_image_pane

0x77f2,	// (0x00014d9a) call5_swipe_1_pane_ParamLimits

0x77f2,	// (0x00014d9a) call5_swipe_1_pane

0x7805,	// (0x00014dad) call5_swipe_2_pane_ParamLimits

0x7805,	// (0x00014dad) call5_swipe_2_pane

0x7830,	// (0x00014dd8) popup_call5_audio_first_window_ParamLimits

0x7830,	// (0x00014dd8) popup_call5_audio_first_window

0x9c6f,	// (0x00017217) call5_swipe_1_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) call5_swipe_1_pane_g1

0xe0ff,	// (0x0001b6a7) call5_swipe_1_pane_g2_ParamLimits

0xe0ff,	// (0x0001b6a7) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x0001d1d7) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x0001d1d7) call5_swipe_1_pane_g

0xe10b,	// (0x0001b6b3) call5_swipe_1_pane_t1_ParamLimits

0xe10b,	// (0x0001b6b3) call5_swipe_1_pane_t1

0x9c6f,	// (0x00017217) call5_swipe_2_pane_g1_ParamLimits

0x9c6f,	// (0x00017217) call5_swipe_2_pane_g1

0xe120,	// (0x0001b6c8) call5_swipe_2_pane_g2_ParamLimits

0xe120,	// (0x0001b6c8) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x0001d1dc) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x0001d1dc) call5_swipe_2_pane_g

0xe12c,	// (0x0001b6d4) call5_swipe_2_pane_t1_ParamLimits

0xe12c,	// (0x0001b6d4) call5_swipe_2_pane_t1

0xe141,	// (0x0001b6e9) sc_swipe_pane_g1_ParamLimits

0xe141,	// (0x0001b6e9) sc_swipe_pane_g1

0xe14e,	// (0x0001b6f6) sc_swipe_pane_g2_ParamLimits

0xe14e,	// (0x0001b6f6) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x0001d1e1) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x0001d1e1) sc_swipe_pane_g

0xe15a,	// (0x0001b702) sc_swipe_pane_t1_ParamLimits

0xe15a,	// (0x0001b702) sc_swipe_pane_t1

0x9509,	// (0x00016ab1) main_cmail_launcher_pane

0x7841,	// (0x00014de9) aid_size_cell_cmail_l_ParamLimits

0x7841,	// (0x00014de9) aid_size_cell_cmail_l

0x784f,	// (0x00014df7) grid_cmail_l_pane_ParamLimits

0x784f,	// (0x00014df7) grid_cmail_l_pane

0x7869,	// (0x00014e11) cell_cmail_l_pane_ParamLimits

0x7869,	// (0x00014e11) cell_cmail_l_pane

0xe16f,	// (0x0001b717) cell_cmail_l_pane_g1_ParamLimits

0xe16f,	// (0x0001b717) cell_cmail_l_pane_g1

0xe17b,	// (0x0001b723) cell_cmail_l_pane_t1_ParamLimits

0xe17b,	// (0x0001b723) cell_cmail_l_pane_t1

0xe191,	// (0x0001b739) cell_cmail_l_pane_t2_ParamLimits

0xe191,	// (0x0001b739) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x0001d1e6) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x0001d1e6) cell_cmail_l_pane_t

0x9578,	// (0x00016b20) grid_highlight_pane_cp018_ParamLimits

0x9578,	// (0x00016b20) grid_highlight_pane_cp018

0x1215,	// (0x0000e7bd) main2_pane_ParamLimits

0x1215,	// (0x0000e7bd) main2_pane

0x9dbf,	// (0x00017367) popup_sp_fs_action_menu_bg_pane_g1

0x9dc7,	// (0x0001736f) popup_sp_fs_action_menu_bg_pane_g2

0x9dcf,	// (0x00017377) popup_sp_fs_action_menu_bg_pane_g3

0x9dd7,	// (0x0001737f) popup_sp_fs_action_menu_bg_pane_g4

0x9ddf,	// (0x00017387) popup_sp_fs_action_menu_bg_pane_g5

0x9de7,	// (0x0001738f) popup_sp_fs_action_menu_bg_pane_g6

0x9def,	// (0x00017397) popup_sp_fs_action_menu_bg_pane_g7

0x9df7,	// (0x0001739f) popup_sp_fs_action_menu_bg_pane_g8

0x9dff,	// (0x000173a7) popup_sp_fs_action_menu_bg_pane_g9

0x9e07,	// (0x000173af) popup_sp_fs_action_menu_bg_pane_g10

0x9e07,	// (0x000173af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0001c6d3) popup_sp_fs_action_menu_bg_pane_g

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g2

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001c781) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001c781) list_medium_line_x2_t3_g3_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t2

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g3_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t3_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t2

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g2_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g2

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g3

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c794) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c794) list_medium_line_x2_t4_g4_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t2

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t3

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c79d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c79d) list_medium_line_x2_t4_g4_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g2

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g3

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0001c794) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0001c794) list_medium_line_x2_t2_g4_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g4_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g4_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g2

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001c781) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001c781) list_medium_line_x2_t2_g3_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g3_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g3_t

0x2d5e,	// (0x00010306) main_sp_fs_list_pane_ParamLimits

0x2d5e,	// (0x00010306) main_sp_fs_list_pane

0xe3fc,	// (0x0001b9a4) sp_fs_scroll_pane_ParamLimits

0xe3fc,	// (0x0001b9a4) sp_fs_scroll_pane

0xa4d9,	// (0x00017a81) list_medium_line_x2_t3_t1

0xa4d9,	// (0x00017a81) list_medium_line_x2_t3_t2

0xa4d9,	// (0x00017a81) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0001c84a) list_medium_line_x2_t3_t

0xa4d9,	// (0x00017a81) list_medium_line_x3_t4_t1

0xa4d9,	// (0x00017a81) list_medium_line_x3_t4_t2

0xa4d9,	// (0x00017a81) list_medium_line_x3_t4_t3

0xa4d9,	// (0x00017a81) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0001c851) list_medium_line_x3_t4_t

0xa4d9,	// (0x00017a81) list_medium_line_x4_t5_t1

0xa4d9,	// (0x00017a81) list_medium_line_x4_t5_t2

0xa4d9,	// (0x00017a81) list_medium_line_x4_t5_t3

0xa4d9,	// (0x00017a81) list_medium_line_x4_t5_t4

0xa4d9,	// (0x00017a81) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0001c85a) list_medium_line_x4_t5_t

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g1

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g2

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g3

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c794) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c794) list_medium_line_t4_g4_g

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t1

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t2

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t3

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t4_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c79d) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c79d) list_medium_line_t4_g4_t

0x2e07,	// (0x000103af) chi_dic_find_pane_g1

0x3ce6,	// (0x0001128e) main_tport_pane

0xa4d9,	// (0x00017a81) list_medium_line_plain_t1

0x9c6f,	// (0x00017217) list_medium_line_t2_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_t2_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_t2_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_t2_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_g2_t1

0x9f4a,	// (0x000174f2) list_medium_line_t2_g2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_t2_g2_t

0xd635,	// (0x0001abdd) aid_sp_fs_list_icon_a_sm

0xd63d,	// (0x0001abe5) aid_sp_fs_list_icon_d

0xd645,	// (0x0001abed) aid_sp_fs_text_primary

0xd64e,	// (0x0001abf6) aid_sp_fs_text_secondary

0x9509,	// (0x00016ab1) list_medium_line

0x9509,	// (0x00016ab1) list_medium_line_g2

0x9509,	// (0x00016ab1) list_medium_line_g3

0x9509,	// (0x00016ab1) list_medium_line_plain

0x9509,	// (0x00016ab1) list_medium_line_plain_t2

0x9509,	// (0x00016ab1) list_medium_line_plain_t3

0x9509,	// (0x00016ab1) list_medium_line_right_icon

0x9509,	// (0x00016ab1) list_medium_line_right_iconx2

0x9509,	// (0x00016ab1) list_medium_line_t2

0x9509,	// (0x00016ab1) list_medium_line_t2_g2

0x9509,	// (0x00016ab1) list_medium_line_t2_g3

0x9509,	// (0x00016ab1) list_medium_line_t2_right_icon

0x9509,	// (0x00016ab1) list_medium_line_t2_right_iconx2

0x9509,	// (0x00016ab1) list_medium_line_t3

0x9509,	// (0x00016ab1) list_medium_line_t3_g2

0x9509,	// (0x00016ab1) list_medium_line_t3_g3

0x9509,	// (0x00016ab1) list_medium_line_t3_right_iconx2

0x9509,	// (0x00016ab1) list_medium_line_t4_g4

0x9509,	// (0x00016ab1) list_medium_line_x2

0x9509,	// (0x00016ab1) list_medium_line_x2_t2_g2

0x9509,	// (0x00016ab1) list_medium_line_x2_t2_g3

0x9509,	// (0x00016ab1) list_medium_line_x2_t2_g4

0x9509,	// (0x00016ab1) list_medium_line_x2_t3

0x9509,	// (0x00016ab1) list_medium_line_x2_t3_g2

0x9509,	// (0x00016ab1) list_medium_line_x2_t3_g3

0x9509,	// (0x00016ab1) list_medium_line_x2_t3_g4

0x9509,	// (0x00016ab1) list_medium_line_x2_t4_g2

0x9509,	// (0x00016ab1) list_medium_line_x2_t4_g4

0x9509,	// (0x00016ab1) list_medium_line_x3

0x9509,	// (0x00016ab1) list_medium_line_x3_t4

0x9509,	// (0x00016ab1) list_medium_line_x3_t4_g4

0x9509,	// (0x00016ab1) list_medium_line_x4_t4

0x9509,	// (0x00016ab1) list_medium_line_x4_t4_g7

0x9509,	// (0x00016ab1) list_medium_line_x4_t5

0x69ae,	// (0x00013f56) list_single_fs_dyc_pane_ParamLimits

0x69ae,	// (0x00013f56) list_single_fs_dyc_pane

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g1

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g2

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g3

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g4

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g5

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x4_t4_g7_g6

0x9c7d,	// (0x00017225) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9c7d,	// (0x00017225) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x0001d0ee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x0001d0ee) list_medium_line_x4_t4_g7_g

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t1

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t2

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x4_t4_g7_t3

0xaaf7,	// (0x0001809f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaaf7,	// (0x0001809f) list_medium_line_x4_t4_g7_t4

0xaaf7,	// (0x0001809f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaaf7,	// (0x0001809f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x0001d0fd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x0001d0fd) list_medium_line_x4_t4_g7_t

0x70b5,	// (0x0001465d) list_single_dyc_row_pane_ParamLimits

0x70b5,	// (0x0001465d) list_single_dyc_row_pane

0x77c2,	// (0x00014d6a) call5_gesture_pane_ParamLimits

0x77c2,	// (0x00014d6a) call5_gesture_pane

0x7818,	// (0x00014dc0) call5_windows_pane_ParamLimits

0x7818,	// (0x00014dc0) call5_windows_pane

0x7883,	// (0x00014e2b) call5_swipe_1_pane_cp_ParamLimits

0x7883,	// (0x00014e2b) call5_swipe_1_pane_cp

0x788f,	// (0x00014e37) call5_swipe_2_pane_cp_ParamLimits

0x788f,	// (0x00014e37) call5_swipe_2_pane_cp

0x9f38,	// (0x000174e0) call5_image_pane_cp

0x789b,	// (0x00014e43) popup_call5_audio_first_window_cp_ParamLimits

0x789b,	// (0x00014e43) popup_call5_audio_first_window_cp

0xe141,	// (0x0001b6e9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe141,	// (0x0001b6e9) call5_swipe_1_pane_g1_cp

0xe1ae,	// (0x0001b756) call5_swipe_1_pane_g2_cp

0xe15a,	// (0x0001b702) call5_swipe_1_pane_t1_cp_ParamLimits

0xe15a,	// (0x0001b702) call5_swipe_1_pane_t1_cp

0xe141,	// (0x0001b6e9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe141,	// (0x0001b6e9) call5_swipe_2_pane_g1_cp

0xe1b6,	// (0x0001b75e) call5_swipe_2_pane_g2_cp

0xe1be,	// (0x0001b766) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1be,	// (0x0001b766) call5_swipe_2_pane_t1_cp

0x9578,	// (0x00016b20) main_sp_fs_email_pane

0xe1d3,	// (0x0001b77b) main_sp_fs_listscroll_pane_te

0x78a9,	// (0x00014e51) popup_sp_fs_action_menu_pane_ParamLimits

0x78a9,	// (0x00014e51) popup_sp_fs_action_menu_pane

0x9f78,	// (0x00017520) bg_sp_fs_ctrlbar_pane_g1

0xe1dc,	// (0x0001b784) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e5,	// (0x0001b78d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbdcc,	// (0x00019374) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9f78,	// (0x00017520) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x0001d1eb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf6c,	// (0x00019514) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf6c,	// (0x00019514) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1ee,	// (0x0001b796) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1ee,	// (0x0001b796) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1fa,	// (0x0001b7a2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe1fa,	// (0x0001b7a2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x0001d1f4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x0001d1f4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe206,	// (0x0001b7ae) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe206,	// (0x0001b7ae) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9f78,	// (0x00017520) list_medium_line_t2_right_icon_g1

0xa4d9,	// (0x00017a81) list_medium_line_t2_right_icon_t1

0xa4d9,	// (0x00017a81) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x0001d1f9) list_medium_line_t2_right_icon_t

0xab0b,	// (0x000180b3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xab0b,	// (0x000180b3) bg_sp_fs_ctrlbar_pane

0x7933,	// (0x00014edb) main_sp_fs_ctrlbar_button_pane_cp01

0x793d,	// (0x00014ee5) main_sp_fs_ctrlbar_ddmenu_pane

0xe258,	// (0x0001b800) main_sp_fs_ctrlbar_pane_g1

0xe264,	// (0x0001b80c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x0001d1fe) main_sp_fs_ctrlbar_pane_g

0x797b,	// (0x00014f23) main_sp_fs_ctrlbar_pane_t1

0x79ba,	// (0x00014f62) main_sp_fs_ctrlbar_pane

0x79de,	// (0x00014f86) main_sp_fs_listscroll_pane_te_cp01

0x79fe,	// (0x00014fa6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x79fe,	// (0x00014fa6) popup_sp_fs_action_menu_pane_cp01

0x9578,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9578,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp01

0xe28b,	// (0x0001b833) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe28b,	// (0x0001b833) sp_fs_action_menu_list_gene_pane_g1

0xe29a,	// (0x0001b842) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe29a,	// (0x0001b842) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x0001d20c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x0001d20c) sp_fs_action_menu_list_gene_pane_g

0xe2a7,	// (0x0001b84f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe2a7,	// (0x0001b84f) sp_fs_action_menu_list_gene_pane_t1

0xe2bf,	// (0x0001b867) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe2bf,	// (0x0001b867) sp_fs_action_menu_list_gene_pane

0xe2de,	// (0x0001b886) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2de,	// (0x0001b886) popup_sp_fs_action_menu_bg_pane

0xe2ec,	// (0x0001b894) sp_fs_action_menu_list_pane_ParamLimits

0xe2ec,	// (0x0001b894) sp_fs_action_menu_list_pane

0x7a23,	// (0x00014fcb) sp_fs_scroll_pane_cp01_ParamLimits

0x7a23,	// (0x00014fcb) sp_fs_scroll_pane_cp01

0xa4d9,	// (0x00017a81) list_medium_line_plain_t2_t1

0xa4d9,	// (0x00017a81) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x0001d1f9) list_medium_line_plain_t2_t

0xa4d9,	// (0x00017a81) list_medium_line_plain_t3_t1

0xa4d9,	// (0x00017a81) list_medium_line_plain_t3_t2

0xa4d9,	// (0x00017a81) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0001c84a) list_medium_line_plain_t3_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t2_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g2_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_x2_t2_g2_t

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_x2_t4_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t2

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t3

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0001c79d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0001c79d) list_medium_line_x2_t4_g2_t

0x9f78,	// (0x00017520) list_medium_line_t3_right_iconx2_g1

0x9f78,	// (0x00017520) list_medium_line_t3_right_iconx2_g2

0x9f78,	// (0x00017520) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0001c96b) list_medium_line_t3_right_iconx2_g

0xa4d9,	// (0x00017a81) list_medium_line_t3_right_iconx2_t1

0xa4d9,	// (0x00017a81) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x0001d1f9) list_medium_line_t3_right_iconx2_t

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g1

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g2

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g3

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c794) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c794) list_medium_line_x3_t4_g4_g

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t1

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t2

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t3

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c79d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c79d) list_medium_line_x3_t4_g4_t

0x7a49,	// (0x00014ff1) list_single_dyc_row_text_pane_t1_ParamLimits

0x7a49,	// (0x00014ff1) list_single_dyc_row_text_pane_t1

0x7a92,	// (0x0001503a) list_single_dyc_row_text_pane_t2_ParamLimits

0x7a92,	// (0x0001503a) list_single_dyc_row_text_pane_t2

0xe30c,	// (0x0001b8b4) list_single_dyc_row_text_pane_t3_ParamLimits

0xe30c,	// (0x0001b8b4) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x0001d211) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x0001d211) list_single_dyc_row_text_pane_t

0xe330,	// (0x0001b8d8) list_single_dyc_row_pane_g1_ParamLimits

0xe330,	// (0x0001b8d8) list_single_dyc_row_pane_g1

0xe33c,	// (0x0001b8e4) list_single_dyc_row_pane_g2_ParamLimits

0xe33c,	// (0x0001b8e4) list_single_dyc_row_pane_g2

0xe348,	// (0x0001b8f0) list_single_dyc_row_pane_g3_ParamLimits

0xe348,	// (0x0001b8f0) list_single_dyc_row_pane_g3

0xe354,	// (0x0001b8fc) list_single_dyc_row_pane_g4_ParamLimits

0xe354,	// (0x0001b8fc) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x0001d21e) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x0001d21e) list_single_dyc_row_pane_g

0xe360,	// (0x0001b908) list_single_dyc_row_text_pane_ParamLimits

0xe360,	// (0x0001b908) list_single_dyc_row_text_pane

0x9509,	// (0x00016ab1) bg_sp_fs_scroll_pane

0xe37f,	// (0x0001b927) thumb_sp_fs_scroll_pane

0x9c6f,	// (0x00017217) list_medium_line_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g1

0x9f4a,	// (0x000174f2) list_medium_line_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t1

0x9c6f,	// (0x00017217) list_medium_line_x2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_x2_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t1

0x9c6f,	// (0x00017217) list_medium_line_x3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x3_g1

0xe388,	// (0x0001b930) list_medium_line_x3_g2_ParamLimits

0xe388,	// (0x0001b930) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x0001d227) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x0001d227) list_medium_line_x3_g

0xe396,	// (0x0001b93e) list_medium_line_x3_t1_ParamLimits

0xe396,	// (0x0001b93e) list_medium_line_x3_t1

0xe3aa,	// (0x0001b952) thumb_sp_fs_scroll_pane_g1

0xe3b3,	// (0x0001b95b) thumb_sp_fs_scroll_pane_g2

0xe3bc,	// (0x0001b964) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x0001d22c) thumb_sp_fs_scroll_pane_g

0xe3aa,	// (0x0001b952) bg_sp_fs_scroll_pane_g1

0xe3b3,	// (0x0001b95b) bg_sp_fs_scroll_pane_g2

0xe3bc,	// (0x0001b964) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x0001d22c) bg_sp_fs_scroll_pane_g

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g1

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g2

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g3

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0001c794) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0001c794) list_medium_line_x2_t3_g4_g

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t1

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t2

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_x2_t3_g4_t

0x9c6f,	// (0x00017217) list_medium_line_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_g2_t1

0x9c6f,	// (0x00017217) list_medium_line_t3_g2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g2_g1

0x9c6f,	// (0x00017217) list_medium_line_t3_g2_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001c78f) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001c78f) list_medium_line_t3_g2_g

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t1

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t2

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_t3_g2_t

0x9f78,	// (0x00017520) list_medium_line_right_icon_g1

0xa4d9,	// (0x00017a81) list_medium_line_right_icon_t1

0x9c6f,	// (0x00017217) list_medium_line_t2_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g1

0x9f4a,	// (0x000174f2) list_medium_line_t2_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_t1

0x9f4a,	// (0x000174f2) list_medium_line_t2_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_t2_t

0x9c6f,	// (0x00017217) list_medium_line_t3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g1

0x9f4a,	// (0x000174f2) list_medium_line_t3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_t1

0x9f4a,	// (0x000174f2) list_medium_line_t3_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_t2

0x9f4a,	// (0x000174f2) list_medium_line_t3_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_t3_t

0x9c6f,	// (0x00017217) list_medium_line_g3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g3_g1

0x9c6f,	// (0x00017217) list_medium_line_g3_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g3_g2

0x9c6f,	// (0x00017217) list_medium_line_g3_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0001c781) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0001c781) list_medium_line_g3_g

0x9f4a,	// (0x000174f2) list_medium_line_g3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_g3_t1

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g1

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g2

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001c781) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001c781) list_medium_line_t2_g3_g

0x9f4a,	// (0x000174f2) list_medium_line_t2_g3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_g3_t1

0x9f4a,	// (0x000174f2) list_medium_line_t2_g3_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001c764) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001c764) list_medium_line_t2_g3_t

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g1_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g1

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g2_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g2

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g3_ParamLimits

0x9c6f,	// (0x00017217) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001c781) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001c781) list_medium_line_t3_g3_g

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t1_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t1

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t2_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t2

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t3_ParamLimits

0x9f4a,	// (0x000174f2) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001c788) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001c788) list_medium_line_t3_g3_t

0x9f78,	// (0x00017520) list_medium_line_right_iconx2_g1

0x9f78,	// (0x00017520) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001c966) list_medium_line_right_iconx2_g

0xa4d9,	// (0x00017a81) list_medium_line_right_iconx2_t1

0x9f78,	// (0x00017520) list_medium_line_t2_right_iconx2_g1

0x9f78,	// (0x00017520) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001c966) list_medium_line_t2_right_iconx2_g

0xa4d9,	// (0x00017a81) list_medium_line_t2_right_iconx2_t1

0xa4d9,	// (0x00017a81) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x0001d1f9) list_medium_line_t2_right_iconx2_t

0xa4d9,	// (0x00017a81) list_medium_line_x4_t4_t1

0xa4d9,	// (0x00017a81) list_medium_line_x4_t4_t2

0xa4d9,	// (0x00017a81) list_medium_line_x4_t4_t3

0xa4d9,	// (0x00017a81) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0001c851) list_medium_line_x4_t4_t

0x7c0a,	// (0x000151b2) tport_appsw_pane_ParamLimits

0x7c0a,	// (0x000151b2) tport_appsw_pane

0x7c22,	// (0x000151ca) tport_contact_pane_ParamLimits

0x7c22,	// (0x000151ca) tport_contact_pane

0x7c3a,	// (0x000151e2) tport_listscroll_pane_ParamLimits

0x7c3a,	// (0x000151e2) tport_listscroll_pane

0x7c54,	// (0x000151fc) cell_tport_appsw_pane_ParamLimits

0x7c54,	// (0x000151fc) cell_tport_appsw_pane

0xaad5,	// (0x0001807d) tport_appsw_pane_g1_ParamLimits

0xaad5,	// (0x0001807d) tport_appsw_pane_g1

0xe3c5,	// (0x0001b96d) tport_contact_pane_g1

0xe3ce,	// (0x0001b976) tport_contact_pane_t1

0xe3dc,	// (0x0001b984) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x0001d233) tport_contact_pane_t

0xe3ea,	// (0x0001b992) list_tport_pane

0xe3f3,	// (0x0001b99b) scroll_pane_cp_030

0x7c9c,	// (0x00015244) cell_tport_appsw_pane_g1

0x7cac,	// (0x00015254) cell_tport_appsw_pane_t1

0x7cba,	// (0x00015262) grid_highlight_pane_cp019

0x7cc2,	// (0x0001526a) list_tport_double_graphic_pane_ParamLimits

0x7cc2,	// (0x0001526a) list_tport_double_graphic_pane

0x9578,	// (0x00016b20) list_highlight_pane_cp023_ParamLimits

0x9578,	// (0x00016b20) list_highlight_pane_cp023

0x7ccf,	// (0x00015277) list_tport_double_graphic_pane_g1_ParamLimits

0x7ccf,	// (0x00015277) list_tport_double_graphic_pane_g1

0x7cdc,	// (0x00015284) list_tport_double_graphic_pane_t1_ParamLimits

0x7cdc,	// (0x00015284) list_tport_double_graphic_pane_t1

0x7cf1,	// (0x00015299) list_tport_double_graphic_pane_t2_ParamLimits

0x7cf1,	// (0x00015299) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x0001d23f) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x0001d23f) list_tport_double_graphic_pane_t

0x9509,	// (0x00016ab1) main_cale_note_pane

0x5a49,	// (0x00012ff1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5a49,	// (0x00012ff1) cell_vitu2_function_top_wide_pane_cp01

0x7451,	// (0x000149f9) wait_bar_pane_cp05_ParamLimits

0x9578,	// (0x00016b20) listscroll_cmail_pane

0xe408,	// (0x0001b9b0) list_cmail_pane

0x7d03,	// (0x000152ab) list_cmail_body_pane

0x7d19,	// (0x000152c1) list_single_cmail_header_caption_pane

0x7d30,	// (0x000152d8) list_single_cmail_header_detail_pane_ParamLimits

0x7d30,	// (0x000152d8) list_single_cmail_header_detail_pane

0xe418,	// (0x0001b9c0) list_single_cmail_header_caption_pane_t1

0x7d5a,	// (0x00015302) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7d5a,	// (0x00015302) list_single_cmail_header_detail_pane_g1

0xe42f,	// (0x0001b9d7) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe42f,	// (0x0001b9d7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x0001d244) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x0001d244) list_single_cmail_header_detail_pane_g

0xe448,	// (0x0001b9f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe448,	// (0x0001b9f0) list_single_cmail_header_detail_pane_t1

0xe4a8,	// (0x0001ba50) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe4a8,	// (0x0001ba50) list_single_cmail_header_editor_pane_bg

0xddef,	// (0x0001b397) list_cmail_body_pane_g1

0xe4bf,	// (0x0001ba67) list_cmail_body_pane_t1

0xcff6,	// (0x0001a59e) list_single_cmail_header_editor_pane_bg_g1

0xa189,	// (0x00017731) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd006,	// (0x0001a5ae) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcffe,	// (0x0001a5a6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd28a,	// (0x0001a832) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd026,	// (0x0001a5ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd016,	// (0x0001a5be) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd01e,	// (0x0001a5c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa169,	// (0x00017711) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7d72,	// (0x0001531a) calenote_gesture_pane_ParamLimits

0x7d72,	// (0x0001531a) calenote_gesture_pane

0x7d92,	// (0x0001533a) calenote_window_pane_ParamLimits

0x7d92,	// (0x0001533a) calenote_window_pane

0xe4cd,	// (0x0001ba75) popup_note_window_cp01

0x7dae,	// (0x00015356) calenote_swipe_1_pane_ParamLimits

0x7dae,	// (0x00015356) calenote_swipe_1_pane

0x788f,	// (0x00014e37) calenote_swipe_2_pane_ParamLimits

0x788f,	// (0x00014e37) calenote_swipe_2_pane

0xe141,	// (0x0001b6e9) calenote_swipe_1_pane_g1_ParamLimits

0xe141,	// (0x0001b6e9) calenote_swipe_1_pane_g1

0xe14e,	// (0x0001b6f6) calenote_swipe_1_pane_g2_ParamLimits

0xe14e,	// (0x0001b6f6) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x0001d1e1) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x0001d1e1) calenote_swipe_1_pane_g

0xe4df,	// (0x0001ba87) calenote_swipe_1_pane_t1_ParamLimits

0xe4df,	// (0x0001ba87) calenote_swipe_1_pane_t1

0xe141,	// (0x0001b6e9) calenote_swipe_2_pane_g1_ParamLimits

0xe141,	// (0x0001b6e9) calenote_swipe_2_pane_g1

0xe4fe,	// (0x0001baa6) calenote_swipe_2_pane_g2_ParamLimits

0xe4fe,	// (0x0001baa6) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0001d250) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0001d250) calenote_swipe_2_pane_g

0xe50a,	// (0x0001bab2) calenote_swipe_2_pane_t1_ParamLimits

0xe50a,	// (0x0001bab2) calenote_swipe_2_pane_t1

0x9509,	// (0x00016ab1) main_mup_navstr_pane

0x48e6,	// (0x00011e8e) main_mup3_pane_t7_ParamLimits

0x48e6,	// (0x00011e8e) main_mup3_pane_t7

0xcbc3,	// (0x0001a16b) main_mp4_pane_g6_ParamLimits

0xcbc3,	// (0x0001a16b) main_mp4_pane_g6

0xce16,	// (0x0001a3be) main_image3_pane_t4_ParamLimits

0xce16,	// (0x0001a3be) main_image3_pane_t4

0x7dc3,	// (0x0001536b) popup_navstr_preview_pane_ParamLimits

0x7dc3,	// (0x0001536b) popup_navstr_preview_pane

0x7dd7,	// (0x0001537f) scroll_navstr_pane_ParamLimits

0x7dd7,	// (0x0001537f) scroll_navstr_pane

0x9509,	// (0x00016ab1) bg_popup_preview_window_pane_cp04

0xe531,	// (0x0001bad9) popup_navstr_preview_pane_t1

0x7deb,	// (0x00015393) scroll_navstr_pane_g1_ParamLimits

0x7deb,	// (0x00015393) scroll_navstr_pane_g1

0x7dff,	// (0x000153a7) scroll_navstr_pane_t1_ParamLimits

0x7dff,	// (0x000153a7) scroll_navstr_pane_t1

0xe4d6,	// (0x0001ba7e) bg_button_pane_cp014

0xe4d6,	// (0x0001ba7e) bg_button_pane_cp030

0x7768,	// (0x00014d10) list_double_fisheye_pane_g4_ParamLimits

0x7768,	// (0x00014d10) list_double_fisheye_pane_g4

0x7774,	// (0x00014d1c) list_double_fisheye_pane_g5_ParamLimits

0x7774,	// (0x00014d1c) list_double_fisheye_pane_g5

0xe3fc,	// (0x0001b9a4) sp_fs_scroll_pane_cp03

0xe258,	// (0x0001b800) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe264,	// (0x0001b80c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x0001d1fe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x797b,	// (0x00014f23) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe410,	// (0x0001b9b8) sp_fs_scroll_pane_cp02

0x9e80,	// (0x00017428) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e80,	// (0x00017428) popup_sp_fs_calendar_preview_list_single_pane

0x9509,	// (0x00016ab1) main_cam6_pano_pane

0x9578,	// (0x00016b20) main_mup3_pane_ParamLimits

0x9509,	// (0x00016ab1) main_phacti_pane

0x7324,	// (0x000148cc) bg_button_pane_cp11

0x733e,	// (0x000148e6) main_mobtv_info_pane_g2_ParamLimits

0x733e,	// (0x000148e6) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x0001d15e) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x0001d15e) main_mobtv_info_pane_g

0x751b,	// (0x00014ac3) sc_clock_pane_t5_ParamLimits

0x751b,	// (0x00014ac3) sc_clock_pane_t5

0x75e3,	// (0x00014b8b) main_radioblah_pane_g1_ParamLimits

0xe08d,	// (0x0001b635) main_radioblah_pane_t3_ParamLimits

0xe08d,	// (0x0001b635) main_radioblah_pane_t3

0xe0a5,	// (0x0001b64d) main_radioblah_pane_t4_ParamLimits

0xe0a5,	// (0x0001b64d) main_radioblah_pane_t4

0x760b,	// (0x00014bb3) main_radioblah_text_pane_ParamLimits

0x760b,	// (0x00014bb3) main_radioblah_text_pane

0x761d,	// (0x00014bc5) main_radioblah_info_pane_g1_ParamLimits

0x76b6,	// (0x00014c5e) main_radioblah_info_pane_t4_ParamLimits

0x76b6,	// (0x00014c5e) main_radioblah_info_pane_t4

0x9578,	// (0x00016b20) main_sp_fs_calendar_pane

0x7e16,	// (0x000153be) main_phacti_pane_g1

0x7e1e,	// (0x000153c6) phacti_note_pane_ParamLimits

0x7e1e,	// (0x000153c6) phacti_note_pane

0xe548,	// (0x0001baf0) phacti_term_pane_ParamLimits

0xe548,	// (0x0001baf0) phacti_term_pane

0xe55d,	// (0x0001bb05) phacti_note_pane_t1_ParamLimits

0xe55d,	// (0x0001bb05) phacti_note_pane_t1

0xe574,	// (0x0001bb1c) phacti_term_pane_g1

0xe57c,	// (0x0001bb24) phacti_term_pane_t1_ParamLimits

0xe57c,	// (0x0001bb24) phacti_term_pane_t1

0xe5a6,	// (0x0001bb4e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5ae,	// (0x0001bb56) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x0001d25a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe5b6,	// (0x0001bb5e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe5b6,	// (0x0001bb5e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe5cc,	// (0x0001bb74) aid_popup_sp_fs_bg_corner_pane

0x9f78,	// (0x00017520) popup_sp_fs_calendar_preview_bg_pane_g1

0x9509,	// (0x00016ab1) popup_sp_fs_calendar_preview_bg_pane

0xe5d4,	// (0x0001bb7c) popup_sp_fs_calendar_preview_list_pane

0xab0b,	// (0x000180b3) bg_main_sp_fs_cale_pane_ParamLimits

0xab0b,	// (0x000180b3) bg_main_sp_fs_cale_pane

0xe5e5,	// (0x0001bb8d) listscroll_cale_mrui_pane_ParamLimits

0xe5e5,	// (0x0001bb8d) listscroll_cale_mrui_pane

0xe5fa,	// (0x0001bba2) listscroll_sp_fs_schedule_track_pane

0xe603,	// (0x0001bbab) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe603,	// (0x0001bbab) main_sp_fs_ctrlbar_pane_cp01

0xe616,	// (0x0001bbbe) main_sp_fs_ribbon_pane

0xe61e,	// (0x0001bbc6) popup_sp_fs_cale_preview_window

0x7e93,	// (0x0001543b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7e93,	// (0x0001543b) list_single_sp_fs_schedule_track_pane

0x9578,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9578,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp03

0x7ea7,	// (0x0001544f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7ea7,	// (0x0001544f) list_single_sp_fs_schedule_track_pane_g1

0x7eb3,	// (0x0001545b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7eb3,	// (0x0001545b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x0001d25f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x0001d25f) list_single_sp_fs_schedule_track_pane_g

0x7ebf,	// (0x00015467) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7ebf,	// (0x00015467) list_single_sp_fs_schedule_track_pane_t1

0x7ed9,	// (0x00015481) sp_fs_schedule_track_pane_ParamLimits

0x7ed9,	// (0x00015481) sp_fs_schedule_track_pane

0xe630,	// (0x0001bbd8) sp_fs_schedule_track_pane_g1

0xe638,	// (0x0001bbe0) sp_fs_schedule_track_pane_g2

0xe640,	// (0x0001bbe8) sp_fs_schedule_track_pane_g3

0xe648,	// (0x0001bbf0) sp_fs_schedule_track_pane_g4

0xe650,	// (0x0001bbf8) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x0001d264) sp_fs_schedule_track_pane_g

0xcff6,	// (0x0001a59e) bg_sp_fs_schedule_viewer_highlight_g1

0xa189,	// (0x00017731) bg_sp_fs_schedule_viewer_highlight_g2

0xcffe,	// (0x0001a5a6) bg_sp_fs_schedule_viewer_highlight_g3

0xd006,	// (0x0001a5ae) bg_sp_fs_schedule_viewer_highlight_g4

0xd28a,	// (0x0001a832) bg_sp_fs_schedule_viewer_highlight_g5

0xd016,	// (0x0001a5be) bg_sp_fs_schedule_viewer_highlight_g6

0xd01e,	// (0x0001a5c6) bg_sp_fs_schedule_viewer_highlight_g7

0xd026,	// (0x0001a5ce) bg_sp_fs_schedule_viewer_highlight_g8

0xa169,	// (0x00017711) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x0001d26f) bg_sp_fs_schedule_viewer_highlight_g

0x9509,	// (0x00016ab1) bg_main_sp_fs_ribbon_pane

0x7eea,	// (0x00015492) main_sp_fs_ribbon_pane_g1

0xe658,	// (0x0001bc00) main_sp_fs_ribbon_pane_t1

0x7ef3,	// (0x0001549b) main_sp_fs_ribbon_pane_t2

0xe667,	// (0x0001bc0f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x0001d282) main_sp_fs_ribbon_pane_t

0xe676,	// (0x0001bc1e) main_sp_fs_ribbon_scheduler_pane

0xe67e,	// (0x0001bc26) bg_main_sp_fs_ribbon_pane_g1

0xe687,	// (0x0001bc2f) bg_main_sp_fs_ribbon_pane_g2

0xe690,	// (0x0001bc38) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x0001d289) bg_main_sp_fs_ribbon_pane_g

0xe698,	// (0x0001bc40) main_sp_fs_ribbon_scheduler_pane_g1

0xe6a1,	// (0x0001bc49) main_sp_fs_ribbon_scheduler_pane_g2

0xe6aa,	// (0x0001bc52) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x0001d290) main_sp_fs_ribbon_scheduler_pane_g

0xe6b3,	// (0x0001bc5b) list_cale_mrui_pane

0x7f02,	// (0x000154aa) sp_fs_scroll_pane_cp07_ParamLimits

0x7f02,	// (0x000154aa) sp_fs_scroll_pane_cp07

0x7f1e,	// (0x000154c6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7f1e,	// (0x000154c6) bg_sp_fs_schedule_viewer_highlight

0xe6c0,	// (0x0001bc68) list_single_sp_fs_schedule_track_pane_cp01

0xe6c8,	// (0x0001bc70) list_sp_fs_schedule_track_pane

0xe6d0,	// (0x0001bc78) sp_fs_scroll_pane_cp06_ParamLimits

0xe6d0,	// (0x0001bc78) sp_fs_scroll_pane_cp06

0x9f78,	// (0x00017520) bgmain_sp_fs_calendar_pane_g1

0x7f2e,	// (0x000154d6) list_single_cale_mrui_pane_ParamLimits

0x7f2e,	// (0x000154d6) list_single_cale_mrui_pane

0xe6e2,	// (0x0001bc8a) list_single_cale_mrui_row_pane_ParamLimits

0xe6e2,	// (0x0001bc8a) list_single_cale_mrui_row_pane

0xe6ef,	// (0x0001bc97) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe6ef,	// (0x0001bc97) list_single_cale_mrui_row_pane_g1

0xe734,	// (0x0001bcdc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe734,	// (0x0001bcdc) list_single_cale_mrui_row_pane_t1

0x7f4f,	// (0x000154f7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7f4f,	// (0x000154f7) list_single_cale_mrui_row_pane_t2

0xe746,	// (0x0001bcee) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe746,	// (0x0001bcee) list_single_cale_mrui_row_pane_t3

0xe775,	// (0x0001bd1d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe775,	// (0x0001bd1d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x0001d29e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x0001d29e) list_single_cale_mrui_row_pane_t

0x7fb7,	// (0x0001555f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7fb7,	// (0x0001555f) list_single_cmail_header_editor_pane_bg_cp01

0x7fdd,	// (0x00015585) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7fdd,	// (0x00015585) list_single_cmail_header_editor_pane_bg_cp02

0x7ffd,	// (0x000155a5) main_radioblah_text_pane_t1_ParamLimits

0x7ffd,	// (0x000155a5) main_radioblah_text_pane_t1

0xe7a4,	// (0x0001bd4c) cam6_indi_pane_cp01

0xe7ac,	// (0x0001bd54) cam6_mode_pane_cp01

0xe7b4,	// (0x0001bd5c) cam6_pano_pane

0xe7bd,	// (0x0001bd65) cam6_zoom_pane_cp01

0xe7c5,	// (0x0001bd6d) cam6_pano_image_pane

0xe7d0,	// (0x0001bd78) cam6_pano_pane_g1

0xddef,	// (0x0001b397) cam6_pano_pane_g2

0xe7d9,	// (0x0001bd81) cam6_pano_pane_g3

0xe7e2,	// (0x0001bd8a) cam6_pano_pane_g4

0xc8b8,	// (0x00019e60) cam6_pano_pane_g5

0xe7eb,	// (0x0001bd93) cam6_pano_pane_g6

0xe7f5,	// (0x0001bd9d) cam6_pano_pane_g7

0xe7fd,	// (0x0001bda5) cam6_pano_pane_g8

0xe806,	// (0x0001bdae) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x0001d2a7) cam6_pano_pane_g

0x9509,	// (0x00016ab1) main_browser_tag_pane

0xe529,	// (0x0001bad1) grid_navstr_albumart_pane

0xe811,	// (0x0001bdb9) cell_navstr_albumart_pane_ParamLimits

0xe811,	// (0x0001bdb9) cell_navstr_albumart_pane

0xe831,	// (0x0001bdd9) cell_navstr_albumart_pane_g1

0xbc53,	// (0x000191fb) cell_navstr_albumart_pane_g2

0xbc63,	// (0x0001920b) cell_navstr_albumart_pane_g3

0xbc5b,	// (0x00019203) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x0001d2ba) cell_navstr_albumart_pane_g

0x8018,	// (0x000155c0) bt_list_pane_ParamLimits

0x8018,	// (0x000155c0) bt_list_pane

0x802c,	// (0x000155d4) bt_list_pane_t1

0x803b,	// (0x000155e3) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x0001d2c3) bt_list_pane_t

0x9509,	// (0x00016ab1) main_cale_prevew_pane

0x804a,	// (0x000155f2) popup_cale_preview_window_ParamLimits

0x804a,	// (0x000155f2) popup_cale_preview_window

0x9578,	// (0x00016b20) bg_popup_preview_window_pane_cp05_ParamLimits

0x9578,	// (0x00016b20) bg_popup_preview_window_pane_cp05

0xe839,	// (0x0001bde1) list_cale_preview_pane_ParamLimits

0xe839,	// (0x0001bde1) list_cale_preview_pane

0x8063,	// (0x0001560b) list_double_cale_preview_pane_ParamLimits

0x8063,	// (0x0001560b) list_double_cale_preview_pane

0xd02e,	// (0x0001a5d6) list_single_cale_preview_pane_ParamLimits

0xd02e,	// (0x0001a5d6) list_single_cale_preview_pane

0x8075,	// (0x0001561d) list_single_cale_preview_pane_g1

0x807d,	// (0x00015625) list_single_cale_preview_pane_t1_ParamLimits

0x807d,	// (0x00015625) list_single_cale_preview_pane_t1

0x8092,	// (0x0001563a) list_double_cale_preview_pane_g1

0x809a,	// (0x00015642) list_double_cale_preview_pane_t1_ParamLimits

0x809a,	// (0x00015642) list_double_cale_preview_pane_t1

0x80af,	// (0x00015657) list_double_cale_preview_pane_t2_ParamLimits

0x80af,	// (0x00015657) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x0001d2c8) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x0001d2c8) list_double_cale_preview_pane_t

0x9509,	// (0x00016ab1) main_ezdial_pane

0x9578,	// (0x00016b20) main_sp_fs_email_pane_ParamLimits

0x78eb,	// (0x00014e93) cmail_ddmenu_btn01_pane_ParamLimits

0x78eb,	// (0x00014e93) cmail_ddmenu_btn01_pane

0x78fe,	// (0x00014ea6) cmail_ddmenu_btn02_pane_ParamLimits

0x78fe,	// (0x00014ea6) cmail_ddmenu_btn02_pane

0x7921,	// (0x00014ec9) cmail_ddmenu_btn03_pane_ParamLimits

0x7921,	// (0x00014ec9) cmail_ddmenu_btn03_pane

0x79ba,	// (0x00014f62) main_sp_fs_ctrlbar_pane_ParamLimits

0x79de,	// (0x00014f86) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7d03,	// (0x000152ab) list_cmail_body_pane_ParamLimits

0xe426,	// (0x0001b9ce) bg_button_pane_cp12

0xe43b,	// (0x0001b9e3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe43b,	// (0x0001b9e3) list_single_cmail_header_detail_pane_g3

0xe484,	// (0x0001ba2c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe484,	// (0x0001ba2c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x0001d24b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x0001d24b) list_single_cmail_header_detail_pane_t

0xe591,	// (0x0001bb39) phacti_term_pane_t2_ParamLimits

0xe591,	// (0x0001bb39) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x0001d255) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x0001d255) phacti_term_pane_t

0xe845,	// (0x0001bded) aid_size_list_single_double

0x80c7,	// (0x0001566f) popup_ezdial_listscroll_window

0x80e3,	// (0x0001568b) popup_number_entry_window_cp01

0x9f38,	// (0x000174e0) bg_popup_call_pane_cp09

0xe851,	// (0x0001bdf9) ezdial_list_pane

0xe859,	// (0x0001be01) scroll_pane_cp23

0xab0b,	// (0x000180b3) bg_button_pane_cp028_ParamLimits

0xab0b,	// (0x000180b3) bg_button_pane_cp028

0x80f1,	// (0x00015699) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x80f1,	// (0x00015699) cmail_ddmenu_btn01_pane_g1

0x80fd,	// (0x000156a5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x80fd,	// (0x000156a5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x0001d2cd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x0001d2cd) cmail_ddmenu_btn01_pane_g

0xe861,	// (0x0001be09) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe861,	// (0x0001be09) cmail_ddmenu_btn01_pane_t1

0xab0b,	// (0x000180b3) bg_button_pane_cp029_ParamLimits

0xab0b,	// (0x000180b3) bg_button_pane_cp029

0x8109,	// (0x000156b1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8109,	// (0x000156b1) cmail_ddmenu_btn02_pane_g1

0x8121,	// (0x000156c9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8121,	// (0x000156c9) cmail_ddmenu_btn02_pane_t1

0x9578,	// (0x00016b20) bg_button_pane_cp031_ParamLimits

0x9578,	// (0x00016b20) bg_button_pane_cp031

0x8109,	// (0x000156b1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8109,	// (0x000156b1) cmail_ddmenu_btn03_pane_g1

0x8121,	// (0x000156c9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8121,	// (0x000156c9) cmail_ddmenu_btn03_pane_t1

0x523f,	// (0x000127e7) cell_dialer2_keypad_pane_t1_ParamLimits

0x5259,	// (0x00012801) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5259,	// (0x00012801) cell_dialer2_keypad_pane_t1_copy1

0x7147,	// (0x000146ef) ncimui_group_button_pane

0x9578,	// (0x00016b20) main_sp_fs_calendar_pane_ParamLimits

0x7d19,	// (0x000152c1) list_single_cmail_header_caption_pane_ParamLimits

0xe5dc,	// (0x0001bb84) aid_recal_txt_sm_pane

0x9509,	// (0x00016ab1) mian_recal_day_pane

0xe61e,	// (0x0001bbc6) popup_sp_fs_cale_preview_window_ParamLimits

0xe876,	// (0x0001be1e) list_recal_day_pane

0xe8b8,	// (0x0001be60) list_single_recal_day_pane_ParamLimits

0xe8b8,	// (0x0001be60) list_single_recal_day_pane

0xe8ca,	// (0x0001be72) list_single_recal_day_pane_g1_ParamLimits

0xe8ca,	// (0x0001be72) list_single_recal_day_pane_g1

0xe8d6,	// (0x0001be7e) list_single_recal_day_pane_g2_ParamLimits

0xe8d6,	// (0x0001be7e) list_single_recal_day_pane_g2

0xe8e2,	// (0x0001be8a) list_single_recal_day_pane_g3_ParamLimits

0xe8e2,	// (0x0001be8a) list_single_recal_day_pane_g3

0x8145,	// (0x000156ed) list_single_recal_day_pane_g4_ParamLimits

0x8145,	// (0x000156ed) list_single_recal_day_pane_g4

0xe8ee,	// (0x0001be96) list_single_recal_day_pane_g5_ParamLimits

0xe8ee,	// (0x0001be96) list_single_recal_day_pane_g5

0xe8fa,	// (0x0001bea2) list_single_recal_day_pane_g6_ParamLimits

0xe8fa,	// (0x0001bea2) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x0001d2dc) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x0001d2dc) list_single_recal_day_pane_g

0xe90e,	// (0x0001beb6) list_single_recal_day_pane_t1

0xe920,	// (0x0001bec8) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x0001d2e7) list_single_recal_day_pane_t

0x815d,	// (0x00015705) ncimui_query_button_pane_ParamLimits

0x815d,	// (0x00015705) ncimui_query_button_pane

0x816d,	// (0x00015715) ncimui_query_button_pane_t1_ParamLimits

0x816d,	// (0x00015715) ncimui_query_button_pane_t1

0xe932,	// (0x0001beda) ncimui_query_button_pane_t2_ParamLimits

0xe932,	// (0x0001beda) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x0001d2ec) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x0001d2ec) ncimui_query_button_pane_t

0x8180,	// (0x00015728) query_button_pane_ParamLimits

0x8180,	// (0x00015728) query_button_pane

0x9509,	// (0x00016ab1) bg_button_pane_cp0028

0xe945,	// (0x0001beed) query_button_pane_t1

0x3ce6,	// (0x0001128e) main_tport_pane_ParamLimits

0x7bc7,	// (0x0001516f) bg_popup_window_pane_cp01_ParamLimits

0x7bc7,	// (0x0001516f) bg_popup_window_pane_cp01

0x7be2,	// (0x0001518a) heading_pane_cp08_ParamLimits

0x7be2,	// (0x0001518a) heading_pane_cp08

0x7bf5,	// (0x0001519d) heading_pane_cp07_ParamLimits

0x7bf5,	// (0x0001519d) heading_pane_cp07

0x7c9c,	// (0x00015244) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x0001d238) cell_tport_appsw_pane_g

0x323e,	// (0x000107e6) input_candi_list_open_g1

0xa37a,	// (0x00017922) list_cale_time_pane_g6_ParamLimits

0xa37a,	// (0x00017922) list_cale_time_pane_g6

0x42f3,	// (0x0001189b) aid_size_touch_calib_1_ParamLimits

0x42f3,	// (0x0001189b) aid_size_touch_calib_1

0x4305,	// (0x000118ad) aid_size_touch_calib_2_ParamLimits

0x4305,	// (0x000118ad) aid_size_touch_calib_2

0x431d,	// (0x000118c5) aid_size_touch_calib_3_ParamLimits

0x431d,	// (0x000118c5) aid_size_touch_calib_3

0x433b,	// (0x000118e3) aid_size_touch_calib_4_ParamLimits

0x433b,	// (0x000118e3) aid_size_touch_calib_4

0x4353,	// (0x000118fb) main_touch_calib_button_group_pane_ParamLimits

0x4353,	// (0x000118fb) main_touch_calib_button_group_pane

0x436b,	// (0x00011913) main_touch_calib_pane_g1_ParamLimits

0x437d,	// (0x00011925) main_touch_calib_pane_g2_ParamLimits

0x438f,	// (0x00011937) main_touch_calib_pane_g3_ParamLimits

0x43a1,	// (0x00011949) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x0001cc7a) main_touch_calib_pane_g_ParamLimits

0x43b3,	// (0x0001195b) main_touch_calib_pane_t1_ParamLimits

0x43cd,	// (0x00011975) main_touch_calib_pane_t2_ParamLimits

0x43e7,	// (0x0001198f) main_touch_calib_pane_t3_ParamLimits

0x43fb,	// (0x000119a3) main_touch_calib_pane_t4_ParamLimits

0x440f,	// (0x000119b7) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x0001cc83) main_touch_calib_pane_t_ParamLimits

0xc67e,	// (0x00019c26) list_single_fp_cale_pane_g3_ParamLimits

0xc67e,	// (0x00019c26) list_single_fp_cale_pane_g3

0x9578,	// (0x00016b20) bg_button_pane_cp012_ParamLimits

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp03_ParamLimits

0x6336,	// (0x000138de) cell_vitu2_function_top_pane_g1_ParamLimits

0x9578,	// (0x00016b20) bg_vkb2_func_pane_cp04_ParamLimits

0x70d2,	// (0x0001467a) main_ncimui_button_group_pane_ParamLimits

0x70d2,	// (0x0001467a) main_ncimui_button_group_pane

0x7132,	// (0x000146da) main_ncimui_pane_t3_ParamLimits

0x7132,	// (0x000146da) main_ncimui_pane_t3

0xe53f,	// (0x0001bae7) phacti_button_group_pane

0xe845,	// (0x0001bded) aid_size_list_single_double_ParamLimits

0x80c7,	// (0x0001566f) popup_ezdial_listscroll_window_ParamLimits

0x80e3,	// (0x0001568b) popup_number_entry_window_cp01_ParamLimits

0x8193,	// (0x0001573b) phacti_button_pane_ParamLimits

0x8193,	// (0x0001573b) phacti_button_pane

0x9509,	// (0x00016ab1) bg_button_pane_cp14

0xe953,	// (0x0001befb) phacti_button_pane_t1

0x81a4,	// (0x0001574c) main_touch_calib_button_pane_ParamLimits

0x81a4,	// (0x0001574c) main_touch_calib_button_pane

0x9d03,	// (0x000172ab) bg_button_pane_cp18_ParamLimits

0x9d03,	// (0x000172ab) bg_button_pane_cp18

0xe961,	// (0x0001bf09) main_touch_calib_button_pane_t1_ParamLimits

0xe961,	// (0x0001bf09) main_touch_calib_button_pane_t1

0xe977,	// (0x0001bf1f) main_touch_calib_button_pane_t2_ParamLimits

0xe977,	// (0x0001bf1f) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x0001d2f1) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x0001d2f1) main_touch_calib_button_pane_t

0x9509,	// (0x00016ab1) cell_ncimui_button_pane

0x9509,	// (0x00016ab1) bg_button_pane_cp032

0xe995,	// (0x0001bf3d) cell_ncimui_button_pane_t1

0xcdf6,	// (0x0001a39e) image3_infobar_pane_ParamLimits

0xcdf6,	// (0x0001a39e) image3_infobar_pane

0x7547,	// (0x00014aef) fs_bigclock_status_pane_ParamLimits

0x7547,	// (0x00014aef) fs_bigclock_status_pane

0x7554,	// (0x00014afc) main_fs_bigclock_clock_pane_ParamLimits

0x7554,	// (0x00014afc) main_fs_bigclock_clock_pane

0x7572,	// (0x00014b1a) main_fs_bigclock_indi_pane_ParamLimits

0x7572,	// (0x00014b1a) main_fs_bigclock_indi_pane

0x75a4,	// (0x00014b4c) main_fs_bigclock_swipe_pane_ParamLimits

0x75a4,	// (0x00014b4c) main_fs_bigclock_swipe_pane

0x9509,	// (0x00016ab1) main_fs_clock_dumped_data

0xdefc,	// (0x0001b4a4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdefc,	// (0x0001b4a4) list_single_fs_bigclock_indicator_pane_g1

0xdf18,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf18,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g2

0xdf32,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf32,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g3

0xdf4c,	// (0x0001b4f4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf4c,	// (0x0001b4f4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x0001d192) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x0001d192) list_single_fs_bigclock_indicator_pane_g

0xdf77,	// (0x0001b51f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdf77,	// (0x0001b51f) list_single_fs_bigclock_indicator_pane_t1

0xdf9f,	// (0x0001b547) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf9f,	// (0x0001b547) list_single_fs_bigclock_indicator_pane_t2

0xdfc7,	// (0x0001b56f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdfc7,	// (0x0001b56f) list_single_fs_bigclock_indicator_pane_t3

0xdfef,	// (0x0001b597) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdfef,	// (0x0001b597) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x0001d19d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x0001d19d) list_single_fs_bigclock_indicator_pane_t

0xe9a3,	// (0x0001bf4b) image3_infobar_fav_pane_ParamLimits

0xe9a3,	// (0x0001bf4b) image3_infobar_fav_pane

0xe9b3,	// (0x0001bf5b) image3_infobar_loc_pane_ParamLimits

0xe9b3,	// (0x0001bf5b) image3_infobar_loc_pane

0xe9c7,	// (0x0001bf6f) image3_infobar_time_pane_ParamLimits

0xe9c7,	// (0x0001bf6f) image3_infobar_time_pane

0x9f78,	// (0x00017520) image3_infobar_time_pane_g1

0xe9d7,	// (0x0001bf7f) image3_infobar_time_pane_t1

0x9f78,	// (0x00017520) image3_infobar_loc_pane_g1

0xe9e5,	// (0x0001bf8d) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x0001d2f6) image3_infobar_loc_pane_g

0xe9ed,	// (0x0001bf95) image3_infobar_loc_pane_t1

0x9f78,	// (0x00017520) image3_infobar_fav_pane_g1

0xe9fb,	// (0x0001bfa3) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x0001d2fb) image3_infobar_fav_pane_g

0xea03,	// (0x0001bfab) fs_bigclock_status_battery_pane

0xea0c,	// (0x0001bfb4) fs_bigclock_status_signal_pane

0xea15,	// (0x0001bfbd) fs_bigclock_status_title_pane

0xea1e,	// (0x0001bfc6) fs_bigclock_status_signal_pane_g1

0xea27,	// (0x0001bfcf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x0001d300) fs_bigclock_status_signal_pane_g

0xea2f,	// (0x0001bfd7) fs_bigclock_status_battery_pane_g1

0xea38,	// (0x0001bfe0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x0001d305) fs_bigclock_status_battery_pane_g

0xea40,	// (0x0001bfe8) fs_bigclock_status_title_pane_t1

0x81b9,	// (0x00015761) main_fs_bigclock_clock_pane_g1

0x81b9,	// (0x00015761) main_fs_bigclock_clock_pane_g2

0x81ca,	// (0x00015772) main_fs_bigclock_clock_pane_g3

0x81ca,	// (0x00015772) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x0001d30a) main_fs_bigclock_clock_pane_g

0x81dd,	// (0x00015785) main_fs_bigclock_clock_pane_t1

0x81f3,	// (0x0001579b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x0001d313) main_fs_bigclock_clock_pane_t

0xea4e,	// (0x0001bff6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea4e,	// (0x0001bff6) list_single_fs_bigclock_indicator_pane

0xea5f,	// (0x0001c007) list_single_fs_bigclock_pane_ParamLimits

0xea5f,	// (0x0001c007) list_single_fs_bigclock_pane

0xea85,	// (0x0001c02d) main_fs_bigclock_indicator_pane_t1

0xea94,	// (0x0001c03c) list_single_fs_bigclock_pane_g1

0xea9c,	// (0x0001c044) list_single_fs_bigclock_pane_t1

0x9f78,	// (0x00017520) main_fs_bigclock_swipe_pane_g1

0xeadf,	// (0x0001c087) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x0001d324) main_fs_bigclock_swipe_pane_g

0xeae7,	// (0x0001c08f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeae7,	// (0x0001c08f) main_fs_bigclock_swipe_pane_t1

0x2d6a,	// (0x00010312) call_type_pane_ParamLimits

0x9509,	// (0x00016ab1) main_btmg_pane

0xe71b,	// (0x0001bcc3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe71b,	// (0x0001bcc3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x0001d297) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x0001d297) list_single_cale_mrui_row_pane_g

0xe89f,	// (0x0001be47) list_recal_vselct_arw_lo_pane

0xe8a7,	// (0x0001be4f) list_recal_vselct_arw_up_pane

0xe8af,	// (0x0001be57) list_recal_vselct_pane

0x824d,	// (0x000157f5) btmg_button_pane

0x8257,	// (0x000157ff) main_btmg_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp044

0xeb04,	// (0x0001c0ac) btmg_button_pane_t1

0xbde3,	// (0x0001938b) aid_listscroll_gen

0x9578,	// (0x00016b20) main_cntbar_detail_pane

0xe408,	// (0x0001b9b0) list_cmail_folder_pane

0xe3fc,	// (0x0001b9a4) sp_fs_scroll_pane_cp03_ParamLimits

0x8261,	// (0x00015809) list_single_fs_dyc_pane_cp01_ParamLimits

0x8261,	// (0x00015809) list_single_fs_dyc_pane_cp01

0xeb12,	// (0x0001c0ba) aid_size_cmail_indent

0xeb1b,	// (0x0001c0c3) list_single_dyc_row_pane_cp01

0x82aa,	// (0x00015852) cntbar_detail_list_pane_ParamLimits

0x82aa,	// (0x00015852) cntbar_detail_list_pane

0x82f6,	// (0x0001589e) main_cntbar_detail_cont_pane_ParamLimits

0x82f6,	// (0x0001589e) main_cntbar_detail_cont_pane

0xe3fc,	// (0x0001b9a4) scroll_pane_cp032_ParamLimits

0xe3fc,	// (0x0001b9a4) scroll_pane_cp032

0x830a,	// (0x000158b2) cntbar_detail_list_event_pane_ParamLimits

0x830a,	// (0x000158b2) cntbar_detail_list_event_pane

0x82ba,	// (0x00015862) cntbar_detail_list_shct_pane

0xa1d7,	// (0x0001777f) aid_list_gen

0xeb24,	// (0x0001c0cc) aid_scroll

0xeb2d,	// (0x0001c0d5) aid_size_touch_scroll_bar

0x831a,	// (0x000158c2) aid_list_double

0x8323,	// (0x000158cb) aid_list_single

0x831a,	// (0x000158c2) aid_list_single_lg

0x832c,	// (0x000158d4) aid_list_z_g_a_sm

0x8334,	// (0x000158dc) aid_list_z_g_d

0x833c,	// (0x000158e4) aid_txt_z_prm

0x834a,	// (0x000158f2) aid_txt_z_prm_cp01

0x8358,	// (0x00015900) aid_txt_z_sec

0x8366,	// (0x0001590e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8366,	// (0x0001590e) main_cntbar_detail_cont_pane_g1

0x837a,	// (0x00015922) main_cntbar_detail_cont_pane_g2_ParamLimits

0x837a,	// (0x00015922) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x0001d329) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x0001d329) main_cntbar_detail_cont_pane_g

0xeb36,	// (0x0001c0de) main_cntbar_detail_cont_pane_t1

0xeb44,	// (0x0001c0ec) main_cntbar_detail_cont_pane_t2

0xeb52,	// (0x0001c0fa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x0001d32e) main_cntbar_detail_cont_pane_t

0x838a,	// (0x00015932) cell_cntbar_detail_list_shct_pane_ParamLimits

0x838a,	// (0x00015932) cell_cntbar_detail_list_shct_pane

0xeb60,	// (0x0001c108) cntbar_detail_list_shct_pane_g1

0xeb69,	// (0x0001c111) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x0001d335) cntbar_detail_list_shct_pane_g

0x839e,	// (0x00015946) cntbar_detail_list_event_pane_g1_ParamLimits

0x839e,	// (0x00015946) cntbar_detail_list_event_pane_g1

0x83aa,	// (0x00015952) cntbar_detail_list_event_pane_g2_ParamLimits

0x83aa,	// (0x00015952) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x0001d33a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x0001d33a) cntbar_detail_list_event_pane_g

0x8416,	// (0x000159be) cntbar_detail_list_event_pane_t1_ParamLimits

0x8416,	// (0x000159be) cntbar_detail_list_event_pane_t1

0x842b,	// (0x000159d3) cntbar_detail_list_event_pane_t2_ParamLimits

0x842b,	// (0x000159d3) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x0001d347) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x0001d347) cntbar_detail_list_event_pane_t

0x9f78,	// (0x00017520) cell_cntbar_detail_list_shct_pane_g1

0xa9c4,	// (0x00017f6c) navi_pane_mv_g3

0x9578,	// (0x00016b20) main_cntbar_detail_pane_ParamLimits

0x9509,	// (0x00016ab1) main_notif_wgt_pane

0xcb51,	// (0x0001a0f9) aid_tch_main_mp4_pane_g4

0xcd83,	// (0x0001a32b) popup_slider_window_cp02

0xe895,	// (0x0001be3d) list_recal_day_event_pane

0x8278,	// (0x00015820) cntbar_detail_btn_pane_ParamLimits

0x8278,	// (0x00015820) cntbar_detail_btn_pane

0x8291,	// (0x00015839) cntbar_detail_btn_pane_cp01_ParamLimits

0x8291,	// (0x00015839) cntbar_detail_btn_pane_cp01

0x82ba,	// (0x00015862) cntbar_detail_list_shct_pane_ParamLimits

0x82ca,	// (0x00015872) cntbar_detail_pane_g1_ParamLimits

0x82ca,	// (0x00015872) cntbar_detail_pane_g1

0x82da,	// (0x00015882) cntbar_detail_pane_t1_ParamLimits

0x82da,	// (0x00015882) cntbar_detail_pane_t1

0x83b6,	// (0x0001595e) cntbar_detail_list_event_pane_g3_ParamLimits

0x83b6,	// (0x0001595e) cntbar_detail_list_event_pane_g3

0x83ce,	// (0x00015976) cntbar_detail_list_event_pane_g4_ParamLimits

0x83ce,	// (0x00015976) cntbar_detail_list_event_pane_g4

0x83e6,	// (0x0001598e) cntbar_detail_list_event_pane_g5_ParamLimits

0x83e6,	// (0x0001598e) cntbar_detail_list_event_pane_g5

0x83fe,	// (0x000159a6) cntbar_detail_list_event_pane_g6_ParamLimits

0x83fe,	// (0x000159a6) cntbar_detail_list_event_pane_g6

0x8440,	// (0x000159e8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8440,	// (0x000159e8) cntbar_detail_list_event_pane_t3

0x8452,	// (0x000159fa) popup_notif_wgt_window_ParamLimits

0x8452,	// (0x000159fa) popup_notif_wgt_window

0x846b,	// (0x00015a13) popup_submenu_window_cp01_ParamLimits

0x846b,	// (0x00015a13) popup_submenu_window_cp01

0x9f38,	// (0x000174e0) bg_popup_window_pane_cp10

0xeb72,	// (0x0001c11a) listscroll_notif_wgt_pane

0xeb84,	// (0x0001c12c) list_notif_wgt_window

0xeb8d,	// (0x0001c135) scroll_pane_cp033

0x847d,	// (0x00015a25) list_notif_wgt_row_pane_ParamLimits

0x847d,	// (0x00015a25) list_notif_wgt_row_pane

0xeb96,	// (0x0001c13e) aid_size_list_notif_wgt_del

0xeba3,	// (0x0001c14b) list_notif_wgt_row_pane_g1

0xebaf,	// (0x0001c157) list_notif_wgt_row_pane_g2

0xebbe,	// (0x0001c166) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x0001d34e) list_notif_wgt_row_pane_g

0xebcb,	// (0x0001c173) list_notif_wgt_row_pane_t1

0xebe1,	// (0x0001c189) list_notif_wgt_row_pane_t2

0xebf3,	// (0x0001c19b) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x0001d355) list_notif_wgt_row_pane_t

0xd2b2,	// (0x0001a85a) list_recal_day_event_pane_g1

0xec05,	// (0x0001c1ad) list_recal_day_event_pane_t1

0x9509,	// (0x00016ab1) bg_button_pane_cp045

0x848d,	// (0x00015a35) cntbar_detail_btn_pane_t1

0xab0b,	// (0x000180b3) main_callh_pane_ParamLimits

0xab0b,	// (0x000180b3) main_callh_pane

0x9509,	// (0x00016ab1) main_coverflow0_pane

0x9509,	// (0x00016ab1) main_wgtman_pane

0x75bc,	// (0x00014b64) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x75bc,	// (0x00014b64) main_fs_bigclock_unlock_btn_pane

0x7c94,	// (0x0001523c) bg_button_pane_cp16

0x7ca4,	// (0x0001524c) cell_tport_appsw_pane_g3

0x849b,	// (0x00015a43) cf0_flow_pane_ParamLimits

0x849b,	// (0x00015a43) cf0_flow_pane

0xec14,	// (0x0001c1bc) listscroll_cf0_pane

0xec1f,	// (0x0001c1c7) main_cf0_pane_g1

0x84b0,	// (0x00015a58) main_cf0_pane_t1_ParamLimits

0x84b0,	// (0x00015a58) main_cf0_pane_t1

0x84c7,	// (0x00015a6f) main_cf0_pane_t2_ParamLimits

0x84c7,	// (0x00015a6f) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x0001d361) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x0001d361) main_cf0_pane_t

0xec31,	// (0x0001c1d9) scroll_pane_cp11

0x84de,	// (0x00015a86) cf0_flow_pane_g1

0x84e6,	// (0x00015a8e) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x0001d366) cf0_flow_pane_g

0x84ee,	// (0x00015a96) cf0_flow_pane_t1

0x9509,	// (0x00016ab1) main_call6_pane

0x9509,	// (0x00016ab1) main_calllock_pane

0x84fc,	// (0x00015aa4) call6_btn_grp_pane_ParamLimits

0x84fc,	// (0x00015aa4) call6_btn_grp_pane

0x8516,	// (0x00015abe) call6_pane_g1_ParamLimits

0x8516,	// (0x00015abe) call6_pane_g1

0x852c,	// (0x00015ad4) popup_call6_1st_window_ParamLimits

0x852c,	// (0x00015ad4) popup_call6_1st_window

0x853d,	// (0x00015ae5) popup_call6_2nd_window_ParamLimits

0x853d,	// (0x00015ae5) popup_call6_2nd_window

0x854e,	// (0x00015af6) cell_call6_btn_pane_ParamLimits

0x854e,	// (0x00015af6) cell_call6_btn_pane

0x9f38,	// (0x000174e0) bg_popup_call2_in_pane_cp03

0xec3c,	// (0x0001c1e4) popup_call6_1st_window_g1

0xec44,	// (0x0001c1ec) popup_call6_1st_window_g2

0xec4c,	// (0x0001c1f4) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x0001d36b) popup_call6_1st_window_g

0xec54,	// (0x0001c1fc) popup_call6_1st_window_t1

0xec63,	// (0x0001c20b) popup_call6_1st_window_t2

0xec71,	// (0x0001c219) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x0001d372) popup_call6_1st_window_t

0x9f38,	// (0x000174e0) bg_popup_call2_in_pane_cp04

0xec7f,	// (0x0001c227) popup_call6_2nd_window_g1

0xec87,	// (0x0001c22f) popup_call6_2nd_window_g2

0xec8f,	// (0x0001c237) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x0001d379) popup_call6_2nd_window_g

0xec97,	// (0x0001c23f) popup_call6_2nd_window_t1

0x9509,	// (0x00016ab1) bg_button_pane_cp15

0xeca6,	// (0x0001c24e) cell_call6_btn_pane_g1

0xecaf,	// (0x0001c257) cell_call6_btn_pane_t1

0x8562,	// (0x00015b0a) listscroll_wgtman_pane_ParamLimits

0x8562,	// (0x00015b0a) listscroll_wgtman_pane

0x8583,	// (0x00015b2b) wgtman_btn_pane_ParamLimits

0x8583,	// (0x00015b2b) wgtman_btn_pane

0xa7d8,	// (0x00017d80) aid_scroll_copy1

0xecbe,	// (0x0001c266) list_wgtman_pane

0x85c6,	// (0x00015b6e) wgtman_btn_pane_g1_ParamLimits

0x85c6,	// (0x00015b6e) wgtman_btn_pane_g1

0x85f2,	// (0x00015b9a) wgtman_btn_pane_t1_ParamLimits

0x85f2,	// (0x00015b9a) wgtman_btn_pane_t1

0xecc8,	// (0x0001c270) wgtman_btn_pane_t2_ParamLimits

0xecc8,	// (0x0001c270) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x0001d380) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x0001d380) wgtman_btn_pane_t

0x862f,	// (0x00015bd7) listrow_wgtman_pane_ParamLimits

0x862f,	// (0x00015bd7) listrow_wgtman_pane

0x8642,	// (0x00015bea) listrow_wgtman_pane_g1

0x864f,	// (0x00015bf7) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x0001d385) listrow_wgtman_pane_g

0x866d,	// (0x00015c15) listrow_wgtman_pane_t1

0x8685,	// (0x00015c2d) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x0001d38a) listrow_wgtman_pane_t

0x86ab,	// (0x00015c53) wait_bar_pane_cp09

0xecdf,	// (0x0001c287) main_calllock_btn_pane

0xece9,	// (0x0001c291) main_calllock_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp17

0xeca6,	// (0x0001c24e) main_calllock_btn_pane_g1

0xecf1,	// (0x0001c299) main_calllock_btn_pane_t1

0x9509,	// (0x00016ab1) main_dialer3_pane

0x9509,	// (0x00016ab1) main_fmrd2_pane

0x9f78,	// (0x00017520) main_fs_bigclock_unlock_btn_pane_g1

0x86c5,	// (0x00015c6d) main_fs_bigclock_unlock_btn_pane_t1

0x86d3,	// (0x00015c7b) area_fmrd2_info_pane_ParamLimits

0x86d3,	// (0x00015c7b) area_fmrd2_info_pane

0x86e4,	// (0x00015c8c) area_fmrd2_visual_pane_ParamLimits

0x86e4,	// (0x00015c8c) area_fmrd2_visual_pane

0x86f2,	// (0x00015c9a) fmrd2_indi_pane_ParamLimits

0x86f2,	// (0x00015c9a) fmrd2_indi_pane

0x86ff,	// (0x00015ca7) area_fmrd2_visual_pane_g1

0x8707,	// (0x00015caf) area_fmrd2_visual_pane_t1

0x8717,	// (0x00015cbf) area_fmrd2_visual_pane_t2

0x8727,	// (0x00015ccf) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x0001d394) area_fmrd2_visual_pane_t

0x8737,	// (0x00015cdf) area_fmrd2_info_pane_g1

0x873f,	// (0x00015ce7) area_fmrd2_info_pane_t1

0x874f,	// (0x00015cf7) area_fmrd2_info_pane_t2

0x875f,	// (0x00015d07) area_fmrd2_info_pane_t3

0x876f,	// (0x00015d17) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x0001d39b) area_fmrd2_info_pane_t

0x877d,	// (0x00015d25) fmrd2_indi_pane_t1

0x878d,	// (0x00015d35) fmrd2_indi_pane_t2

0x879d,	// (0x00015d45) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x0001d3a4) fmrd2_indi_pane_t

0xdf5b,	// (0x0001b503) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf5b,	// (0x0001b503) list_single_fs_bigclock_indicator_pane_g5

0xe00c,	// (0x0001b5b4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe00c,	// (0x0001b5b4) list_single_fs_bigclock_indicator_pane_t5

0x7e32,	// (0x000153da) aid_cell_bcale_month_pane_ParamLimits

0x7e32,	// (0x000153da) aid_cell_bcale_month_pane

0x7e50,	// (0x000153f8) bcale_month_pane_ParamLimits

0x7e50,	// (0x000153f8) bcale_month_pane

0x7e74,	// (0x0001541c) bcale_preview_pane_ParamLimits

0x7e74,	// (0x0001541c) bcale_preview_pane

0xea9c,	// (0x0001c044) list_single_fs_bigclock_pane_t1_ParamLimits

0xeabb,	// (0x0001c063) list_single_fs_bigclock_pane_t2_ParamLimits

0xeabb,	// (0x0001c063) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x0001d31f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0001d31f) list_single_fs_bigclock_pane_t

0x86bd,	// (0x00015c65) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x0001d38f) main_fs_bigclock_unlock_btn_pane_g

0x87ad,	// (0x00015d55) aid_dia3_key_size_ParamLimits

0x87ad,	// (0x00015d55) aid_dia3_key_size

0x87bc,	// (0x00015d64) aid_dia3_listrow_size_ParamLimits

0x87bc,	// (0x00015d64) aid_dia3_listrow_size

0x87d1,	// (0x00015d79) dia3_keypad_fun_pane_ParamLimits

0x87d1,	// (0x00015d79) dia3_keypad_fun_pane

0x87ed,	// (0x00015d95) dia3_keypad_num_pane_ParamLimits

0x87ed,	// (0x00015d95) dia3_keypad_num_pane

0x8808,	// (0x00015db0) dia3_listscroll_pane_ParamLimits

0x8808,	// (0x00015db0) dia3_listscroll_pane

0x881b,	// (0x00015dc3) dia3_numentry_pane_ParamLimits

0x881b,	// (0x00015dc3) dia3_numentry_pane

0xed00,	// (0x0001c2a8) dia3_list_pane

0xed0b,	// (0x0001c2b3) scroll_pane_cp12

0x9509,	// (0x00016ab1) bg_dia3_numentry_pane

0x8833,	// (0x00015ddb) dia3_numentry_pane_t1

0x8842,	// (0x00015dea) cell_dia3_key_num_pane

0x884a,	// (0x00015df2) cell_dia3_key0_fun_pane_ParamLimits

0x884a,	// (0x00015df2) cell_dia3_key0_fun_pane

0x885e,	// (0x00015e06) cell_dia3_key1_fun_pane_ParamLimits

0x885e,	// (0x00015e06) cell_dia3_key1_fun_pane

0x8876,	// (0x00015e1e) dia3_listrow_pane

0xdcae,	// (0x0001b256) bg_dia3_numentry_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp21

0xed16,	// (0x0001c2be) cell_dia3_key_num_pane_t1

0xed24,	// (0x0001c2cc) cell_dia3_key_num_pane_t2

0xed33,	// (0x0001c2db) cell_dia3_key_num_pane_t3

0xed42,	// (0x0001c2ea) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x0001d3ab) cell_dia3_key_num_pane_t

0x9509,	// (0x00016ab1) bg_button_pane_cp19

0x8888,	// (0x00015e30) cell_dia3_key0_fun_pane_g1

0x9509,	// (0x00016ab1) bg_button_pane_cp20

0x8890,	// (0x00015e38) cell_dia3_key1_fun_pane_g1

0x8898,	// (0x00015e40) area_left_week_number_pane

0x88a4,	// (0x00015e4c) area_top_day_name_pane

0x88b7,	// (0x00015e5f) frame_month_view_pane

0xed51,	// (0x0001c2f9) grid_month_view_pane

0x88ca,	// (0x00015e72) cell_top_day_name_pane_ParamLimits

0x88ca,	// (0x00015e72) cell_top_day_name_pane

0x88f7,	// (0x00015e9f) cell_area_left_week_number_pane_ParamLimits

0x88f7,	// (0x00015e9f) cell_area_left_week_number_pane

0x890b,	// (0x00015eb3) cell_month_view_pane_ParamLimits

0x890b,	// (0x00015eb3) cell_month_view_pane

0xed5f,	// (0x0001c307) frm_month_g1

0x8938,	// (0x00015ee0) frm_month_g2

0x894b,	// (0x00015ef3) frm_month_g3

0x895e,	// (0x00015f06) frm_month_g4

0x8971,	// (0x00015f19) frm_month_g5

0x8984,	// (0x00015f2c) frm_month_g6

0x8997,	// (0x00015f3f) frm_month_g7

0xed6c,	// (0x0001c314) frm_month_g8

0x89aa,	// (0x00015f52) frm_month_g9

0x89ba,	// (0x00015f62) frm_month_g10

0x89ca,	// (0x00015f72) frm_month_g11

0x89da,	// (0x00015f82) frm_month_g12

0x89ec,	// (0x00015f94) frm_month_g13

0x89fe,	// (0x00015fa6) frm_month_g14

0x8a12,	// (0x00015fba) frm_month_g15

0x8a26,	// (0x00015fce) frm_month_g16

0x000f,

0xfe0c,	// (0x0001d3b4) frm_month_g

0xeda6,	// (0x0001c34e) cell_top_day_name_pane_t1

0x8a3a,	// (0x00015fe2) cell_area_left_week_number_pane_g1

0x8a46,	// (0x00015fee) cell_area_left_week_number_pane_t1

0x9c6f,	// (0x00017217) cell_month_view_pane_g1

0x8a59,	// (0x00016001) cell_month_view_pane_t1

0x9509,	// (0x00016ab1) main_fps_pane

0xe220,	// (0x0001b7c8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe220,	// (0x0001b7c8) cmail_ddmenu_btn02_pane_cp1

0xe23c,	// (0x0001b7e4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe23c,	// (0x0001b7e4) cmail_ddmenu_btn02_pane_cp2

0x8115,	// (0x000156bd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8115,	// (0x000156bd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0001d2d2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0001d2d2) cmail_ddmenu_btn02_pane_g

0x8133,	// (0x000156db) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8133,	// (0x000156db) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x0001d2d7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x0001d2d7) cmail_ddmenu_btn02_pane_t

0x8a6c,	// (0x00016014) fps_text_pane_ParamLimits

0x8a6c,	// (0x00016014) fps_text_pane

0x8a83,	// (0x0001602b) main_fps_pane_g1_ParamLimits

0x8a83,	// (0x0001602b) main_fps_pane_g1

0x8a9d,	// (0x00016045) wait_bar_pane_cp010_ParamLimits

0x8a9d,	// (0x00016045) wait_bar_pane_cp010

0x8aae,	// (0x00016056) fps_text_pane_t1_ParamLimits

0x8aae,	// (0x00016056) fps_text_pane_t1

0xed79,	// (0x0001c321) cam4_image_uncrop_pane_g1

0xed82,	// (0x0001c32a) cam4_image_uncrop_pane_g2

0x5776,	// (0x00012d1e) cam4_image_uncrop_pane_g3

0x577f,	// (0x00012d27) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x0001ce16) cam4_image_uncrop_pane_g

0x8876,	// (0x00015e1e) dia3_listrow_pane_ParamLimits

0x9509,	// (0x00016ab1) main_phob2_pane

0x7c65,	// (0x0001520d) cell_tport_appsw_pane_cp02_ParamLimits

0x7c65,	// (0x0001520d) cell_tport_appsw_pane_cp02

0x7c79,	// (0x00015221) cell_tport_appsw_pane_cp03_ParamLimits

0x7c79,	// (0x00015221) cell_tport_appsw_pane_cp03

0x9509,	// (0x00016ab1) phob2_contact_card_pane

0x9509,	// (0x00016ab1) phob2_listscroll_pane

0xedb9,	// (0x0001c361) phob2_list_pane

0xedc1,	// (0x0001c369) scroll_pane_cp034

0x8ac6,	// (0x0001606e) phob2_cc_data_pane_ParamLimits

0x8ac6,	// (0x0001606e) phob2_cc_data_pane

0x8ae5,	// (0x0001608d) phob2_cc_listscroll_pane_ParamLimits

0x8ae5,	// (0x0001608d) phob2_cc_listscroll_pane

0x862f,	// (0x00015bd7) list_double_large_graphic_phob2_pane_ParamLimits

0x862f,	// (0x00015bd7) list_double_large_graphic_phob2_pane

0x8b03,	// (0x000160ab) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b03,	// (0x000160ab) list_double_large_graphic_phob2_pane_g1

0x8b10,	// (0x000160b8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b10,	// (0x000160b8) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x0001d3d5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x0001d3d5) list_double_large_graphic_phob2_pane_g

0x8b36,	// (0x000160de) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b36,	// (0x000160de) list_double_large_graphic_phob2_pane_t1

0x8b4b,	// (0x000160f3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b4b,	// (0x000160f3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x0001d3de) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x0001d3de) list_double_large_graphic_phob2_pane_t

0x9509,	// (0x00016ab1) list_highlight_pane_cp024

0xedc9,	// (0x0001c371) phob2_cc_button_pane

0x8b60,	// (0x00016108) phob2_cc_data_pane_g1_ParamLimits

0x8b60,	// (0x00016108) phob2_cc_data_pane_g1

0x8b77,	// (0x0001611f) phob2_cc_data_pane_g2_ParamLimits

0x8b77,	// (0x0001611f) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x0001d3e3) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x0001d3e3) phob2_cc_data_pane_g

0x8b89,	// (0x00016131) phob2_cc_data_pane_t1_ParamLimits

0x8b89,	// (0x00016131) phob2_cc_data_pane_t1

0x8ba1,	// (0x00016149) phob2_cc_data_pane_t2_ParamLimits

0x8ba1,	// (0x00016149) phob2_cc_data_pane_t2

0x8bb9,	// (0x00016161) phob2_cc_data_pane_t3_ParamLimits

0x8bb9,	// (0x00016161) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x0001d3e8) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x0001d3e8) phob2_cc_data_pane_t

0xedd1,	// (0x0001c379) phob2_cc_list_pane_ParamLimits

0xedd1,	// (0x0001c379) phob2_cc_list_pane

0xd35b,	// (0x0001a903) scroll_pane_cp035_ParamLimits

0xd35b,	// (0x0001a903) scroll_pane_cp035

0x9578,	// (0x00016b20) bg_button_pane_cp033

0xeddd,	// (0x0001c385) phob2_cc_button_pane_g1

0xede9,	// (0x0001c391) phob2_cc_button_pane_t1

0xedfe,	// (0x0001c3a6) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x0001d3ef) phob2_cc_button_pane_t

0x8bd1,	// (0x00016179) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8bd1,	// (0x00016179) list_double_large_graphic_phob2_cc_pane

0x8c03,	// (0x000161ab) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8c03,	// (0x000161ab) list_double_large_graphic_phob2_cc_pane_g1

0xee10,	// (0x0001c3b8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xee10,	// (0x0001c3b8) list_double_large_graphic_phob2_cc_pane_g2

0x8c0f,	// (0x000161b7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8c0f,	// (0x000161b7) list_double_large_graphic_phob2_cc_pane_g3

0x8c1b,	// (0x000161c3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8c1b,	// (0x000161c3) list_double_large_graphic_phob2_cc_pane_g4

0x8c27,	// (0x000161cf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8c27,	// (0x000161cf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x0001d3f4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x0001d3f4) list_double_large_graphic_phob2_cc_pane_g

0x8c33,	// (0x000161db) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8c33,	// (0x000161db) list_double_large_graphic_phob2_cc_pane_t1

0x8c5c,	// (0x00016204) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8c5c,	// (0x00016204) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x0001d3ff) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x0001d3ff) list_double_large_graphic_phob2_cc_pane_t

0xee1c,	// (0x0001c3c4) list_highlight_pane_cp025_ParamLimits

0xee1c,	// (0x0001c3c4) list_highlight_pane_cp025

0x9578,	// (0x00016b20) bg_button_pane_cp033_ParamLimits

0xeddd,	// (0x0001c385) phob2_cc_button_pane_g1_ParamLimits

0xede9,	// (0x0001c391) phob2_cc_button_pane_t1_ParamLimits

0xedfe,	// (0x0001c3a6) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x0001d3ef) phob2_cc_button_pane_t_ParamLimits

0x1370,	// (0x0000e918) popup_wgtman_window

0xd110,	// (0x0001a6b8) scroll_pane_cp038

0x85a8,	// (0x00015b50) wgtman_btn_pane_cp_01_ParamLimits

0x85a8,	// (0x00015b50) wgtman_btn_pane_cp_01

0xee2a,	// (0x0001c3d2) wgtman_content_pane

0xee33,	// (0x0001c3db) wgtman_heading_pane

0x9509,	// (0x00016ab1) bg_heading_pane_cp02

0xee3c,	// (0x0001c3e4) wgtman_heading_pane_g1

0xee44,	// (0x0001c3ec) wgtman_heading_pane_t1

0xee52,	// (0x0001c3fa) scroll_pane_cp036

0xee5a,	// (0x0001c402) wgtman_list_pane

0xed8b,	// (0x0001c333) wgtman_list_pane_t1_ParamLimits

0xed8b,	// (0x0001c333) wgtman_list_pane_t1

0xcebd,	// (0x0001a465) cam4_grid_pane

0x64c3,	// (0x00013a6b) bg_button_pane_cp015_ParamLimits

0x64d4,	// (0x00013a7c) bg_button_pane_cp016_ParamLimits

0x64e0,	// (0x00013a88) bg_button_pane_cp017_ParamLimits

0x6534,	// (0x00013adc) popup_vitu2_query_window_g3_ParamLimits

0x6534,	// (0x00013adc) popup_vitu2_query_window_g3

0x65d5,	// (0x00013b7d) popup_vitu2_query_window_t6_ParamLimits

0x65d5,	// (0x00013b7d) popup_vitu2_query_window_t6

0x6600,	// (0x00013ba8) popup_vitu2_query_window_t7_ParamLimits

0x6600,	// (0x00013ba8) popup_vitu2_query_window_t7

0xed79,	// (0x0001c321) cam4_grid_pane_g1

0xed82,	// (0x0001c32a) cam4_grid_pane_g2

0xee62,	// (0x0001c40a) cam4_grid_pane_g3

0xee6b,	// (0x0001c413) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x0001d404) cam4_grid_pane_g

0x1f40,	// (0x0000f4e8) aid_placing_vt_slider_lsc_ParamLimits

0x223d,	// (0x0000f7e5) vidtel_button_pane_ParamLimits

0x223d,	// (0x0000f7e5) vidtel_button_pane

0x9509,	// (0x00016ab1) bg_button_pane_cp034

0xee76,	// (0x0001c41e) vidtel_button_pane_g1

0xee7e,	// (0x0001c426) vidtel_button_pane_t1

0xd266,	// (0x0001a80e) aid_size_vtel_slider_touch

0xd35b,	// (0x0001a903) scroll_pane_cp039

0x72b0,	// (0x00014858) ncim_query_button_pane_cp01_ParamLimits

0x72cf,	// (0x00014877) ncimui_query_pane_g1_ParamLimits

0x9578,	// (0x00016b20) input_focus_pane_cp012_ParamLimits

0xdcf4,	// (0x0001b29c) ncim_query_entry_pane_t1_ParamLimits

0xd35b,	// (0x0001a903) scroll_pane_cp039_ParamLimits

0xa8af,	// (0x00017e57) navi_pane_bcale_mc_g1

0xa8b7,	// (0x00017e5f) navi_pane_bcale_mc_t1

0xe270,	// (0x0001b818) main_sp_fs_email_pane_g1

0xe27c,	// (0x0001b824) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x0001d207) main_sp_fs_email_pane_g

0xe727,	// (0x0001bccf) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe727,	// (0x0001bccf) list_single_cale_mrui_row_pane_g3

0x8153,	// (0x000156fb) list_single_recal_day_pane_g5_event_pane

0xe906,	// (0x0001beae) list_single_recal_day_pane_g7

0xee94,	// (0x0001c43c) list_recal_day_event_pane_cp01

0xee9d,	// (0x0001c445) list_recal_vselct_arw_lo_pane_cp01

0xeea5,	// (0x0001c44d) list_recal_vselct_arw_up_pane_cp01

0xeead,	// (0x0001c455) list_recal_vselct_pane_cp01

0xd2b2,	// (0x0001a85a) list_recal_day_event_pane_cp01_g1

0xeeb7,	// (0x0001c45f) list_recal_day_event_pane_cp01_t1

0xe90e,	// (0x0001beb6) list_single_recal_day_pane_t1_ParamLimits

0xe920,	// (0x0001bec8) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x0001d2e7) list_single_recal_day_pane_t_ParamLimits

0x9bf4,	// (0x0001719c) bg_notes_pane_ParamLimits

0x9cc7,	// (0x0001726f) list_notes_pane_ParamLimits

0x1591,	// (0x0000eb39) scroll_pane_cp06_ParamLimits

0x9d03,	// (0x000172ab) main_notes_pane_ParamLimits

0x9578,	// (0x00016b20) main_welc_pane

0x8cb4,	// (0x0001625c) main_welc_body_pane_ParamLimits

0x8cb4,	// (0x0001625c) main_welc_body_pane

0x8cd1,	// (0x00016279) main_welc_opti_pane_ParamLimits

0x8cd1,	// (0x00016279) main_welc_opti_pane

0x8d47,	// (0x000162ef) main_welc_pane_t1_ParamLimits

0x8d47,	// (0x000162ef) main_welc_pane_t1

0x8f2a,	// (0x000164d2) main_welc_body_row_pane_ParamLimits

0x8f2a,	// (0x000164d2) main_welc_body_row_pane

0x9c61,	// (0x00017209) main_welc_opti_row_pane_ParamLimits

0x9c61,	// (0x00017209) main_welc_opti_row_pane

0xeed5,	// (0x0001c47d) main_welc_opti_row_pane_g1

0x8f3f,	// (0x000164e7) main_welc_opti_row_pane_t1

0xeedd,	// (0x0001c485) main_welc_body_row_pane_t1

0xeb7c,	// (0x0001c124) popup_notif_wgt_heading_pane

0xeb96,	// (0x0001c13e) aid_size_list_notif_wgt_del_ParamLimits

0xeba3,	// (0x0001c14b) list_notif_wgt_row_pane_g1_ParamLimits

0xebaf,	// (0x0001c157) list_notif_wgt_row_pane_g2_ParamLimits

0xebbe,	// (0x0001c166) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x0001d34e) list_notif_wgt_row_pane_g_ParamLimits

0xebcb,	// (0x0001c173) list_notif_wgt_row_pane_t1_ParamLimits

0xebe1,	// (0x0001c189) list_notif_wgt_row_pane_t2_ParamLimits

0xebf3,	// (0x0001c19b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x0001d355) list_notif_wgt_row_pane_t_ParamLimits

0x8642,	// (0x00015bea) listrow_wgtman_pane_g1_ParamLimits

0x864f,	// (0x00015bf7) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x0001d385) listrow_wgtman_pane_g_ParamLimits

0x866d,	// (0x00015c15) listrow_wgtman_pane_t1_ParamLimits

0x8685,	// (0x00015c2d) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x0001d38a) listrow_wgtman_pane_t_ParamLimits

0x86ab,	// (0x00015c53) wait_bar_pane_cp09_ParamLimits

0x9509,	// (0x00016ab1) bg_popup_heading_pane_cp02

0xeeec,	// (0x0001c494) popup_notif_wgt_heading_pane_g1

0xeef4,	// (0x0001c49c) popup_notif_wgt_heading_pane_t1

0x9509,	// (0x00016ab1) main_vids_pane

0x9509,	// (0x00016ab1) vids_listscroll_pane

0x8f4e,	// (0x000164f6) scroll_pane_cp040

0x9509,	// (0x00016ab1) vids_list_pane

0x8f59,	// (0x00016501) vids_list_double_pane_ParamLimits

0x8f59,	// (0x00016501) vids_list_double_pane

0x8f6a,	// (0x00016512) vids_list_double_pane_g1

0x8f73,	// (0x0001651b) vids_list_double_pane_t1

0x8f82,	// (0x0001652a) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x0001d423) vids_list_double_pane_t

0x9578,	// (0x00016b20) main_ncimui_pane_ParamLimits

0x70e6,	// (0x0001468e) main_ncimui_pane_g1_ParamLimits

0x70f2,	// (0x0001469a) main_ncimui_pane_g2_ParamLimits

0x70f2,	// (0x0001469a) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x0001d108) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x0001d108) main_ncimui_pane_g

0x8cec,	// (0x00016294) main_welc_pane_g1_ParamLimits

0x8cec,	// (0x00016294) main_welc_pane_g1

0x8d01,	// (0x000162a9) main_welc_pane_g2_ParamLimits

0x8d01,	// (0x000162a9) main_welc_pane_g2

0x0003,

0xfe65,	// (0x0001d40d) main_welc_pane_g_ParamLimits

0xfe65,	// (0x0001d40d) main_welc_pane_g

0x1577,	// (0x0000eb1f) listscroll_mce_pane_ParamLimits

0xaa04,	// (0x00017fac) wait_bar_pane_cp10

0xbdeb,	// (0x00019393) main_cale_day_pane_ParamLimits

0xbdeb,	// (0x00019393) main_cale_week_pane_ParamLimits

0x9bf4,	// (0x0001719c) main_messa_pane_ParamLimits

0x4b88,	// (0x00012130) main_clock2_btn_pane_ParamLimits

0x4b88,	// (0x00012130) main_clock2_btn_pane

0xc6f8,	// (0x00019ca0) main_clock2_btn_pane_cp01_ParamLimits

0xc6f8,	// (0x00019ca0) main_clock2_btn_pane_cp01

0xe6b3,	// (0x0001bc5b) list_cale_mrui_pane_ParamLimits

0xec29,	// (0x0001c1d1) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x0001d35c) main_cf0_pane_g

0x8898,	// (0x00015e40) area_left_week_number_pane_ParamLimits

0x88a4,	// (0x00015e4c) area_top_day_name_pane_ParamLimits

0x88b7,	// (0x00015e5f) frame_month_view_pane_ParamLimits

0xed51,	// (0x0001c2f9) grid_month_view_pane_ParamLimits

0xed5f,	// (0x0001c307) frm_month_g1_ParamLimits

0x8938,	// (0x00015ee0) frm_month_g2_ParamLimits

0x894b,	// (0x00015ef3) frm_month_g3_ParamLimits

0x895e,	// (0x00015f06) frm_month_g4_ParamLimits

0x8971,	// (0x00015f19) frm_month_g5_ParamLimits

0x8984,	// (0x00015f2c) frm_month_g6_ParamLimits

0x8997,	// (0x00015f3f) frm_month_g7_ParamLimits

0xed6c,	// (0x0001c314) frm_month_g8_ParamLimits

0x89aa,	// (0x00015f52) frm_month_g9_ParamLimits

0x89ba,	// (0x00015f62) frm_month_g10_ParamLimits

0x89ca,	// (0x00015f72) frm_month_g11_ParamLimits

0x89da,	// (0x00015f82) frm_month_g12_ParamLimits

0x89ec,	// (0x00015f94) frm_month_g13_ParamLimits

0x89fe,	// (0x00015fa6) frm_month_g14_ParamLimits

0x8a12,	// (0x00015fba) frm_month_g15_ParamLimits

0x8a26,	// (0x00015fce) frm_month_g16_ParamLimits

0xfe0c,	// (0x0001d3b4) frm_month_g_ParamLimits

0xeda6,	// (0x0001c34e) cell_top_day_name_pane_t1_ParamLimits

0x8a3a,	// (0x00015fe2) cell_area_left_week_number_pane_g1_ParamLimits

0x8a46,	// (0x00015fee) cell_area_left_week_number_pane_t1_ParamLimits

0x9c6f,	// (0x00017217) cell_month_view_pane_g1_ParamLimits

0x8a59,	// (0x00016001) cell_month_view_pane_t1_ParamLimits

0x9bec,	// (0x00017194) main_clock2_btn_pane_g1

0xef02,	// (0x0001c4aa) main_clock2_btn_pane_t1

0x9578,	// (0x00016b20) listscroll_cmail_pane_ParamLimits

0xe270,	// (0x0001b818) main_sp_fs_email_pane_g1_ParamLimits

0xe27c,	// (0x0001b824) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x0001d207) main_sp_fs_email_pane_g_ParamLimits

0xe876,	// (0x0001be1e) list_recal_day_pane_ParamLimits

0xe887,	// (0x0001be2f) mian_recal_day_pane_t1

0x7b08,	// (0x000150b0) list_single_dyc_row_text_pane_t4_ParamLimits

0x7b08,	// (0x000150b0) list_single_dyc_row_text_pane_t4

0x7b51,	// (0x000150f9) list_single_dyc_row_text_pane_t5_ParamLimits

0x7b51,	// (0x000150f9) list_single_dyc_row_text_pane_t5

0xe31e,	// (0x0001b8c6) list_single_dyc_row_text_pane_t6_ParamLimits

0xe31e,	// (0x0001b8c6) list_single_dyc_row_text_pane_t6

0x2caf,	// (0x00010257) aid_mgn_list_cale_time_pane

0x9578,	// (0x00016b20) main_gallery2_pane_ParamLimits

0xc70e,	// (0x00019cb6) main_clock2_pane_cp01_t1

0xc71c,	// (0x00019cc4) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x0001cced) main_clock2_pane_cp01_t

0x192d,	// (0x0000eed5) cale_week_scroll_pane_g16_ParamLimits

0x192d,	// (0x0000eed5) cale_week_scroll_pane_g16

0x9f38,	// (0x000174e0) vorec_slider_pane

0xee7e,	// (0x0001c426) vidtel_button_pane_t1_ParamLimits

0x81b9,	// (0x00015761) main_fs_bigclock_clock_pane_g1_ParamLimits

0x81b9,	// (0x00015761) main_fs_bigclock_clock_pane_g2_ParamLimits

0x81ca,	// (0x00015772) main_fs_bigclock_clock_pane_g3_ParamLimits

0x81ca,	// (0x00015772) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x0001d30a) main_fs_bigclock_clock_pane_g_ParamLimits

0x81dd,	// (0x00015785) main_fs_bigclock_clock_pane_t1_ParamLimits

0x81f3,	// (0x0001579b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x0001d313) main_fs_bigclock_clock_pane_t_ParamLimits

0x4464,	// (0x00011a0c) main_mup3_lyrics_pane_ParamLimits

0x4464,	// (0x00011a0c) main_mup3_lyrics_pane

0x8fb8,	// (0x00016560) main_mup3_lyrics_pane_t1_ParamLimits

0x8fb8,	// (0x00016560) main_mup3_lyrics_pane_t1

0xcb3b,	// (0x0001a0e3) aid_main_mp4_pane_t1_area

0xcb45,	// (0x0001a0ed) aid_main_mp4_pane_t2_area

0xcbf1,	// (0x0001a199) main_mp4_pane_g7_ParamLimits

0xcbf1,	// (0x0001a199) main_mp4_pane_g7

0xcbfd,	// (0x0001a1a5) main_mp4_pane_g8_ParamLimits

0xcbfd,	// (0x0001a1a5) main_mp4_pane_g8

0x5547,	// (0x00012aef) aid_call6_pane_g1_size

0x8bec,	// (0x00016194) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8bec,	// (0x00016194) list_double_large_graphic_phob2_other_pane

0xa7e0,	// (0x00017d88) list_double_large_graphic_phob2_other_pane_g1

0x9509,	// (0x00016ab1) list_highlight_pane_cp026

0x9578,	// (0x00016b20) main_welc_pane_ParamLimits

0x7947,	// (0x00014eef) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7947,	// (0x00014eef) main_sp_fs_ctrlbar_pane_g3

0x7961,	// (0x00014f09) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7961,	// (0x00014f09) main_sp_fs_ctrlbar_pane_g4

0x7995,	// (0x00014f3d) toolbar2_fixed_button_pane_cp01

0x79a0,	// (0x00014f48) toolbar2_fixed_button_pane_cp02

0x79ad,	// (0x00014f55) toolbar2_fixed_button_pane_cp03

0x8c98,	// (0x00016240) list_welc_entry_pane_ParamLimits

0x8c98,	// (0x00016240) list_welc_entry_pane

0x8d16,	// (0x000162be) main_welc_pane_g3_ParamLimits

0x8d16,	// (0x000162be) main_welc_pane_g3

0x8d65,	// (0x0001630d) main_welc_pane_t2_ParamLimits

0x8d65,	// (0x0001630d) main_welc_pane_t2

0x8d7f,	// (0x00016327) main_welc_pane_t3_ParamLimits

0x8d7f,	// (0x00016327) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x0001d416) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x0001d416) main_welc_pane_t

0x8eae,	// (0x00016456) welc_button_pane_ParamLimits

0x8eae,	// (0x00016456) welc_button_pane

0x8f16,	// (0x000164be) welc_service_logo_pane_ParamLimits

0x8f16,	// (0x000164be) welc_service_logo_pane

0x8fd4,	// (0x0001657c) list_single_welc_entry_pane_ParamLimits

0x8fd4,	// (0x0001657c) list_single_welc_entry_pane

0x8fe5,	// (0x0001658d) list_single_welc_entry_pane_g1

0x8fed,	// (0x00016595) list_single_welc_entry_pane_t1

0x8ffb,	// (0x000165a3) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x0001d428) list_single_welc_entry_pane_t

0x9509,	// (0x00016ab1) bg_button_pane_cp035

0xef10,	// (0x0001c4b8) welc_button_pane_t1

0xef1e,	// (0x0001c4c6) welc_service_logo_pane_g1

0xef27,	// (0x0001c4cf) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x0001d42d) welc_service_logo_pane_g

0x9509,	// (0x00016ab1) main_int_radio_pane

0xdb92,	// (0x0001b13a) list_single_fs_dyc_pane_g1

0x8b1c,	// (0x000160c4) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b1c,	// (0x000160c4) list_double_large_graphic_phob2_pane_g3

0x8b28,	// (0x000160d0) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b28,	// (0x000160d0) list_double_large_graphic_phob2_pane_g4

0x9009,	// (0x000165b1) main_int_radio1_pane_ParamLimits

0x9009,	// (0x000165b1) main_int_radio1_pane

0xef30,	// (0x0001c4d8) find_pane_cp02

0x9026,	// (0x000165ce) input_focus_pane_cp12_ParamLimits

0x9026,	// (0x000165ce) input_focus_pane_cp12

0x9036,	// (0x000165de) input_focus_pane_cp13_ParamLimits

0x9036,	// (0x000165de) input_focus_pane_cp13

0x904a,	// (0x000165f2) input_focus_pane_cp14_ParamLimits

0x904a,	// (0x000165f2) input_focus_pane_cp14

0xef39,	// (0x0001c4e1) int_radio1_listscroll_pane

0x905e,	// (0x00016606) main_int_radio1_pane_g1_ParamLimits

0x905e,	// (0x00016606) main_int_radio1_pane_g1

0x9076,	// (0x0001661e) main_int_radio1_pane_t1_ParamLimits

0x9076,	// (0x0001661e) main_int_radio1_pane_t1

0x9091,	// (0x00016639) main_int_radio1_pane_t2_ParamLimits

0x9091,	// (0x00016639) main_int_radio1_pane_t2

0x90ac,	// (0x00016654) main_int_radio1_pane_t3_ParamLimits

0x90ac,	// (0x00016654) main_int_radio1_pane_t3

0x90c7,	// (0x0001666f) main_int_radio1_pane_t4_ParamLimits

0x90c7,	// (0x0001666f) main_int_radio1_pane_t4

0xef43,	// (0x0001c4eb) main_int_radio1_pane_t5_ParamLimits

0xef43,	// (0x0001c4eb) main_int_radio1_pane_t5

0x90d9,	// (0x00016681) main_int_radio1_pane_t6_ParamLimits

0x90d9,	// (0x00016681) main_int_radio1_pane_t6

0x90ee,	// (0x00016696) main_int_radio1_pane_t7_ParamLimits

0x90ee,	// (0x00016696) main_int_radio1_pane_t7

0x9103,	// (0x000166ab) main_int_radio1_pane_t8_ParamLimits

0x9103,	// (0x000166ab) main_int_radio1_pane_t8

0x9122,	// (0x000166ca) main_int_radio1_pane_t9_ParamLimits

0x9122,	// (0x000166ca) main_int_radio1_pane_t9

0x9134,	// (0x000166dc) main_int_radio1_pane_t10_ParamLimits

0x9134,	// (0x000166dc) main_int_radio1_pane_t10

0x915a,	// (0x00016702) main_int_radio1_pane_t11_ParamLimits

0x915a,	// (0x00016702) main_int_radio1_pane_t11

0x9180,	// (0x00016728) main_int_radio1_pane_t12_ParamLimits

0x9180,	// (0x00016728) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x0001d432) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x0001d432) main_int_radio1_pane_t

0xef55,	// (0x0001c4fd) int_radio_list_pane

0xedc1,	// (0x0001c369) scroll_pane_cp037

0xef5d,	// (0x0001c505) list_double_large_graphic_int_radio_pane_ParamLimits

0xef5d,	// (0x0001c505) list_double_large_graphic_int_radio_pane

0xef76,	// (0x0001c51e) list_double_large_graphic_int_radio_pane_g1

0xef7f,	// (0x0001c527) list_double_large_graphic_int_radio_pane_t1

0xef8d,	// (0x0001c535) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x0001d44b) list_double_large_graphic_int_radio_pane_t

0x9509,	// (0x00016ab1) list_highlight_pane_cp027

0xeec5,	// (0x0001c46d) main_button_pane_4

0x8d26,	// (0x000162ce) main_welc_pane_g4_ParamLimits

0x8d26,	// (0x000162ce) main_welc_pane_g4

0x8d97,	// (0x0001633f) main_welc_pane_t4_ParamLimits

0x8d97,	// (0x0001633f) main_welc_pane_t4

0x8dae,	// (0x00016356) main_welc_pane_t5_ParamLimits

0x8dae,	// (0x00016356) main_welc_pane_t5

0x8deb,	// (0x00016393) main_welc_pane_t6_ParamLimits

0x8deb,	// (0x00016393) main_welc_pane_t6

0x8ec5,	// (0x0001646d) welc_button_pane_2_ParamLimits

0x8ec5,	// (0x0001646d) welc_button_pane_2

0x8ee1,	// (0x00016489) welc_button_pane_3_ParamLimits

0x8ee1,	// (0x00016489) welc_button_pane_3

0xeecd,	// (0x0001c475) welc_button_pane_4

0x8f00,	// (0x000164a8) welc_button_pane_5_ParamLimits

0x8f00,	// (0x000164a8) welc_button_pane_5

0x1173,	// (0x0000e71b) main_popup_welc_pane

0xefaa,	// (0x0001c552) main_welc_sk_g3

0xefb4,	// (0x0001c55c) main_welc_sk_g4

0xefbe,	// (0x0001c566) main_welc_sk_t3

0xefce,	// (0x0001c576) main_welc_sk_t4

0xefde,	// (0x0001c586) popup_welc_pane_t4

0xefec,	// (0x0001c594) popup_welc_pane_t5

0xeffc,	// (0x0001c5a4) popup_welc_pane_t6

0x9509,	// (0x00016ab1) main_acti_pane

0x9509,	// (0x00016ab1) main_sso_pane

0x9192,	// (0x0001673a) sso_body_pane_ParamLimits

0x9192,	// (0x0001673a) sso_body_pane

0x91a6,	// (0x0001674e) sso_logo_pane_ParamLimits

0x91a6,	// (0x0001674e) sso_logo_pane

0x91d2,	// (0x0001677a) sso_sk_pane_ParamLimits

0x91d2,	// (0x0001677a) sso_sk_pane

0x9f78,	// (0x00017520) main_sso_logo_pane_g1

0x91e4,	// (0x0001678c) sso_sk_pane_t1_ParamLimits

0x91e4,	// (0x0001678c) sso_sk_pane_t1

0x91fe,	// (0x000167a6) sso_sk_pane_t2_ParamLimits

0x91fe,	// (0x000167a6) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x0001d450) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x0001d450) sso_sk_pane_t

0xf03a,	// (0x0001c5e2) aid_sso_gap

0xf043,	// (0x0001c5eb) aid_sso_txt1

0xf04d,	// (0x0001c5f5) aid_sso_txt2

0xf057,	// (0x0001c5ff) aid_sso_txt3

0x0002,

0xfead,	// (0x0001d455) aid_sso_txt

0xf061,	// (0x0001c609) aid_sso_widget

0x9268,	// (0x00016810) sso_btn_pane_ParamLimits

0x9268,	// (0x00016810) sso_btn_pane

0x92f0,	// (0x00016898) sso_option_pane_ParamLimits

0x92f0,	// (0x00016898) sso_option_pane

0x9370,	// (0x00016918) sso_query_pane_ParamLimits

0x9370,	// (0x00016918) sso_query_pane

0x93c6,	// (0x0001696e) sso_query_pane_cp01_ParamLimits

0x93c6,	// (0x0001696e) sso_query_pane_cp01

0x9420,	// (0x000169c8) sso_t_hdr_pane_ParamLimits

0x9420,	// (0x000169c8) sso_t_hdr_pane

0x9444,	// (0x000169ec) sso_t_nml_pane_ParamLimits

0x9444,	// (0x000169ec) sso_t_nml_pane

0xf057,	// (0x0001c5ff) sso_t_sub_pane

0x91b3,	// (0x0001675b) sso_popup_window_ParamLimits

0x91b3,	// (0x0001675b) sso_popup_window

0x9214,	// (0x000167bc) sso_apps_pane_ParamLimits

0x9214,	// (0x000167bc) sso_apps_pane

0x923e,	// (0x000167e6) sso_body_pane_g1

0x9248,	// (0x000167f0) sso_body_pane_t1

0x9258,	// (0x00016800) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x0001d45c) sso_body_pane_t

0x92ba,	// (0x00016862) sso_btn_pane_cp01_ParamLimits

0x92ba,	// (0x00016862) sso_btn_pane_cp01

0x9344,	// (0x000168ec) sso_prog_pane_ParamLimits

0x9344,	// (0x000168ec) sso_prog_pane

0x00ba,	// (0x0000d662) sso_t_hdr_pane_t1_ParamLimits

0x00ba,	// (0x0000d662) sso_t_hdr_pane_t1

0x00cd,	// (0x0000d675) input_focus_pane_cp10_ParamLimits

0x00cd,	// (0x0000d675) input_focus_pane_cp10

0x00e3,	// (0x0000d68b) sso_query_pane_t1_ParamLimits

0x00e3,	// (0x0000d68b) sso_query_pane_t1

0x00f6,	// (0x0000d69e) sso_query_pane_t2_ParamLimits

0x00f6,	// (0x0000d69e) sso_query_pane_t2

0x010f,	// (0x0000d6b7) sso_query_pane_t3_ParamLimits

0x010f,	// (0x0000d6b7) sso_query_pane_t3

0x0139,	// (0x0000d6e1) sso_query_pane_t4_ParamLimits

0x0139,	// (0x0000d6e1) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x0001d461) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x0001d461) sso_query_pane_t

0x9509,	// (0x00016ab1) bg_button_pane_cp22

0xef9b,	// (0x0001c543) sso_btn_pane_t1

0x949a,	// (0x00016a42) sso_t_nml_pane_t1_ParamLimits

0x949a,	// (0x00016a42) sso_t_nml_pane_t1

0x017a,	// (0x0000d722) sso_option_row_pane_ParamLimits

0x017a,	// (0x0000d722) sso_option_row_pane

0x0187,	// (0x0000d72f) sso_t_sub_pane_t1_ParamLimits

0x0187,	// (0x0000d72f) sso_t_sub_pane_t1

0x9578,	// (0x00016b20) bg_popup_window_pane_cp11_ParamLimits

0x9578,	// (0x00016b20) bg_popup_window_pane_cp11

0x019a,	// (0x0000d742) popup_sk_window_cp01_ParamLimits

0x019a,	// (0x0000d742) popup_sk_window_cp01

0x01a7,	// (0x0000d74f) sso_popup_body_pane_ParamLimits

0x01a7,	// (0x0000d74f) sso_popup_body_pane

0x01b4,	// (0x0000d75c) scroll_pane_cp21_ParamLimits

0x01b4,	// (0x0000d75c) scroll_pane_cp21

0x01c1,	// (0x0000d769) sso_popup_body_t_pane_ParamLimits

0x01c1,	// (0x0000d769) sso_popup_body_t_pane

0x01ce,	// (0x0000d776) sso_popup_body_t_hdr_pane_ParamLimits

0x01ce,	// (0x0000d776) sso_popup_body_t_hdr_pane

0x01dc,	// (0x0000d784) sso_popup_body_t_nml_pane_ParamLimits

0x01dc,	// (0x0000d784) sso_popup_body_t_nml_pane

0x01f7,	// (0x0000d79f) sso_popup_body_t_sub_pane_ParamLimits

0x01f7,	// (0x0000d79f) sso_popup_body_t_sub_pane

0x021a,	// (0x0000d7c2) sso_popup_body_t_hdr_pane_t1

0x94b5,	// (0x00016a5d) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94b5,	// (0x00016a5d) sso_popup_body_t_nml_pane_t1

0x026e,	// (0x0000d816) sso_popup_body_t_sub_pane_t1_ParamLimits

0x026e,	// (0x0000d816) sso_popup_body_t_sub_pane_t1

0x9f78,	// (0x00017520) sso_prog_pane_g1

0x94ef,	// (0x00016a97) sso_apps_pane_comp1_ParamLimits

0x94ef,	// (0x00016a97) sso_apps_pane_comp1

0x02af,	// (0x0000d857) sso_apps_pane_comp1_g1

0x02b7,	// (0x0000d85f) sso_apps_pane_comp1_t1

0x02c5,	// (0x0000d86d) sso_option_row_pane_g1

0x02cd,	// (0x0000d875) sso_option_row_pane_t1

0x8c85,	// (0x0001622d) bg_welc_area_ParamLimits

0x8c85,	// (0x0001622d) bg_welc_area

0x8e29,	// (0x000163d1) sso_t_hdr_pane_a_t1_ParamLimits

0x8e29,	// (0x000163d1) sso_t_hdr_pane_a_t1

0x8e44,	// (0x000163ec) sso_t_nml_pane_a_t1_ParamLimits

0x8e44,	// (0x000163ec) sso_t_nml_pane_a_t1

0x8e73,	// (0x0001641b) sso_t_sub_pane_a_t1_ParamLimits

0x8e73,	// (0x0001641b) sso_t_sub_pane_a_t1

0xef9b,	// (0x0001c543) sso_btn_pane_t1_copy1

0x9509,	// (0x00016ab1) welc_button_pane_2_comp1

0xf00a,	// (0x0001c5b2) sso_t_hdr_pane_p_t1

0xf01a,	// (0x0001c5c2) sso_t_nml_pane_p_t1

0xf02a,	// (0x0001c5d2) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
