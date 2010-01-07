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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000d2b6 };

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
0x1139,	// (0x0000e3ef) Screen

0x1145,	// (0x0000e3fb) application_window

0x1181,	// (0x0000e437) area_bottom_pane_ParamLimits

0x1181,	// (0x0000e437) area_bottom_pane

0x11ba,	// (0x0000e470) area_top_pane_ParamLimits

0x11ba,	// (0x0000e470) area_top_pane

0x950e,	// (0x000167c4) call_video_uplink_pane_ParamLimits

0x950e,	// (0x000167c4) call_video_uplink_pane

0x1234,	// (0x0000e4ea) main_pane_ParamLimits

0x1234,	// (0x0000e4ea) main_pane

0xbf57,	// (0x0001920d) context_pane

0x40bb,	// (0x00011371) navi_pane

0x40e3,	// (0x00011399) popup_cale_events_window_ParamLimits

0x40e3,	// (0x00011399) popup_cale_events_window

0xbf6a,	// (0x00019220) popup_mup_playback_window

0x40fb,	// (0x000113b1) signal_pane

0x9cd7,	// (0x00016f8d) main_browser_pane

0xaa73,	// (0x00017d29) main_burst_pane

0x3e1b,	// (0x000110d1) main_calc_pane

0xaa73,	// (0x00017d29) main_cale_day_pane

0x9cd7,	// (0x00016f8d) main_cale_month_pane

0xaa73,	// (0x00017d29) main_cale_week_pane

0xaa73,	// (0x00017d29) main_call_pane

0x994b,	// (0x00016c01) main_call_poc_pane

0xaa73,	// (0x00017d29) main_camera_pane

0xaa73,	// (0x00017d29) main_chi_dic_pane

0xa902,	// (0x00017bb8) main_clock_pane

0x994b,	// (0x00016c01) main_fmradio_pane

0xaa73,	// (0x00017d29) main_graph_messa_pane

0x994b,	// (0x00016c01) main_help_pane

0x9cd7,	// (0x00016f8d) main_im_pane

0x9ba6,	// (0x00016e5c) main_image_pane_ParamLimits

0x9ba6,	// (0x00016e5c) main_image_pane

0x994b,	// (0x00016c01) main_location2_pane

0xaa73,	// (0x00017d29) main_location_pane

0x994b,	// (0x00016c01) main_messa_pane

0x994b,	// (0x00016c01) main_mp2_pane

0xaa73,	// (0x00017d29) main_mp_pane

0x994b,	// (0x00016c01) main_msg_pane

0x994b,	// (0x00016c01) main_mup_eq_pane

0x994b,	// (0x00016c01) main_mup_pane

0xaa73,	// (0x00017d29) main_notes_pane

0x994b,	// (0x00016c01) main_pec_pane

0x994b,	// (0x00016c01) main_phob_pane

0x994b,	// (0x00016c01) main_pinb_pane

0x994b,	// (0x00016c01) main_postcard_pane

0x994b,	// (0x00016c01) main_qdial_pane

0xaa73,	// (0x00017d29) main_skin_pane

0x994b,	// (0x00016c01) main_smil2_pane

0xaa73,	// (0x00017d29) main_smil_pane

0xaa73,	// (0x00017d29) main_video_pane

0xaa73,	// (0x00017d29) main_video_tele_pane

0x9ba6,	// (0x00016e5c) main_viewer_pane_ParamLimits

0x9ba6,	// (0x00016e5c) main_viewer_pane

0xaa73,	// (0x00017d29) main_vorec_pane

0x3e6f,	// (0x00011125) popup_blid_sat_info_window_ParamLimits

0x3e6f,	// (0x00011125) popup_blid_sat_info_window

0x3ec7,	// (0x0001117d) popup_dyc_status_message_window_ParamLimits

0x3ec7,	// (0x0001117d) popup_dyc_status_message_window

0x3edf,	// (0x00011195) popup_grid_large_graphic_window_ParamLimits

0x3edf,	// (0x00011195) popup_grid_large_graphic_window

0x3f95,	// (0x0001124b) popup_loc_request_window_ParamLimits

0x3f95,	// (0x0001124b) popup_loc_request_window

0x4093,	// (0x00011349) popup_wml_address_window_ParamLimits

0x4093,	// (0x00011349) popup_wml_address_window

0x3c55,	// (0x00010f0b) call_muted_g1

0x3905,	// (0x00010bbb) popup_call_audio_conf_window_ParamLimits

0x3905,	// (0x00010bbb) popup_call_audio_conf_window

0x3c69,	// (0x00010f1f) popup_call_audio_first_window_ParamLimits

0x3c69,	// (0x00010f1f) popup_call_audio_first_window

0x3cdf,	// (0x00010f95) popup_call_audio_in_window_ParamLimits

0x3cdf,	// (0x00010f95) popup_call_audio_in_window

0x3d1b,	// (0x00010fd1) popup_call_audio_out_window_ParamLimits

0x3d1b,	// (0x00010fd1) popup_call_audio_out_window

0x3d55,	// (0x0001100b) popup_call_audio_second_window_ParamLimits

0x3d55,	// (0x0001100b) popup_call_audio_second_window

0x3dab,	// (0x00011061) popup_call_audio_wait_window_ParamLimits

0x3dab,	// (0x00011061) popup_call_audio_wait_window

0x3de0,	// (0x00011096) popup_number_entry_window_ParamLimits

0x3de0,	// (0x00011096) popup_number_entry_window

0x953a,	// (0x000167f0) bg_popup_call_pane_cp05_ParamLimits

0x953a,	// (0x000167f0) bg_popup_call_pane_cp05

0x955a,	// (0x00016810) popup_number_entry_window_t1

0x956d,	// (0x00016823) popup_number_entry_window_t2

0x957f,	// (0x00016835) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0001c3b1) popup_number_entry_window_t

0x9591,	// (0x00016847) text_title_cp2

0x95a4,	// (0x0001685a) bg_popup_call_pane_cp_ParamLimits

0x95a4,	// (0x0001685a) bg_popup_call_pane_cp

0x95b2,	// (0x00016868) call_thumbnail_pane

0x95ba,	// (0x00016870) popup_call_audio_in_window_g1_ParamLimits

0x95ba,	// (0x00016870) popup_call_audio_in_window_g1

0x95c6,	// (0x0001687c) popup_call_audio_in_window_g2_ParamLimits

0x95c6,	// (0x0001687c) popup_call_audio_in_window_g2

0x95d2,	// (0x00016888) popup_call_audio_in_window_g3_ParamLimits

0x95d2,	// (0x00016888) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0001c3ba) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0001c3ba) popup_call_audio_in_window_g

0x95de,	// (0x00016894) popup_call_audio_in_window_t1_ParamLimits

0x95de,	// (0x00016894) popup_call_audio_in_window_t1

0x95f9,	// (0x000168af) popup_call_audio_in_window_t2_ParamLimits

0x95f9,	// (0x000168af) popup_call_audio_in_window_t2

0x9614,	// (0x000168ca) popup_call_audio_in_window_t3_ParamLimits

0x9614,	// (0x000168ca) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0001c3c1) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0001c3c1) popup_call_audio_in_window_t

0x95a4,	// (0x0001685a) bg_popup_call_pane_cp01_ParamLimits

0x95a4,	// (0x0001685a) bg_popup_call_pane_cp01

0x95b2,	// (0x00016868) call_thumbnail_pane_cp02

0x9627,	// (0x000168dd) call_type_pane_cp022

0x962f,	// (0x000168e5) popup_call_audio_out_window_g1_ParamLimits

0x962f,	// (0x000168e5) popup_call_audio_out_window_g1

0x9641,	// (0x000168f7) popup_call_audio_out_window_g2_ParamLimits

0x9641,	// (0x000168f7) popup_call_audio_out_window_g2

0x964d,	// (0x00016903) popup_call_audio_out_window_g3_ParamLimits

0x964d,	// (0x00016903) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0001c3c8) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0001c3c8) popup_call_audio_out_window_g

0x965f,	// (0x00016915) popup_call_audio_out_window_t1_ParamLimits

0x965f,	// (0x00016915) popup_call_audio_out_window_t1

0x9677,	// (0x0001692d) popup_call_audio_out_window_t2_ParamLimits

0x9677,	// (0x0001692d) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0001c3cf) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0001c3cf) popup_call_audio_out_window_t

0x968c,	// (0x00016942) bg_popup_call_pane_ParamLimits

0x968c,	// (0x00016942) bg_popup_call_pane

0x13f0,	// (0x0000e6a6) call_thumbnail_pane_cp_ParamLimits

0x13f0,	// (0x0000e6a6) call_thumbnail_pane_cp

0x9710,	// (0x000169c6) call_type_pane_cp01_ParamLimits

0x9710,	// (0x000169c6) call_type_pane_cp01

0x9754,	// (0x00016a0a) popup_call_audio_first_window_g1_ParamLimits

0x9754,	// (0x00016a0a) popup_call_audio_first_window_g1

0x97a0,	// (0x00016a56) popup_call_audio_first_window_g2_ParamLimits

0x97a0,	// (0x00016a56) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0001c3d4) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0001c3d4) popup_call_audio_first_window_g

0x97e4,	// (0x00016a9a) popup_call_audio_first_window_t1_ParamLimits

0x97e4,	// (0x00016a9a) popup_call_audio_first_window_t1

0x9890,	// (0x00016b46) popup_call_audio_first_window_t4_ParamLimits

0x9890,	// (0x00016b46) popup_call_audio_first_window_t4

0x991c,	// (0x00016bd2) popup_call_audio_first_window_t5_ParamLimits

0x991c,	// (0x00016bd2) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0001c3d9) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0001c3d9) popup_call_audio_first_window_t

0x994b,	// (0x00016c01) bg_popup_call_pane_cp02

0x9955,	// (0x00016c0b) call_type_pane_cp023

0x995d,	// (0x00016c13) popup_call_audio_wait_window_g1

0x9965,	// (0x00016c1b) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c3e0) popup_call_audio_wait_window_g

0x996d,	// (0x00016c23) popup_call_audio_wait_window_t3

0x997b,	// (0x00016c31) bg_popup_call_pane_cp03_ParamLimits

0x997b,	// (0x00016c31) bg_popup_call_pane_cp03

0x99db,	// (0x00016c91) call_thumbnail_pane_cp011_ParamLimits

0x99db,	// (0x00016c91) call_thumbnail_pane_cp011

0x99e7,	// (0x00016c9d) call_type_pane_cp034_ParamLimits

0x99e7,	// (0x00016c9d) call_type_pane_cp034

0x9a23,	// (0x00016cd9) popup_call_audio_second_window_g1_ParamLimits

0x9a23,	// (0x00016cd9) popup_call_audio_second_window_g1

0x9a5f,	// (0x00016d15) popup_call_audio_second_window_g2_ParamLimits

0x9a5f,	// (0x00016d15) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0001c3e5) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0001c3e5) popup_call_audio_second_window_g

0x9a9b,	// (0x00016d51) popup_call_audio_second_window_t1_ParamLimits

0x9a9b,	// (0x00016d51) popup_call_audio_second_window_t1

0x9b1c,	// (0x00016dd2) popup_call_audio_second_window_t2_ParamLimits

0x9b1c,	// (0x00016dd2) popup_call_audio_second_window_t2

0x9b52,	// (0x00016e08) popup_call_audio_second_window_t3_ParamLimits

0x9b52,	// (0x00016e08) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0001c3ea) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0001c3ea) popup_call_audio_second_window_t

0x994b,	// (0x00016c01) bg_popup_call_pane_cp04

0x9b88,	// (0x00016e3e) list_conf_pane

0x9b90,	// (0x00016e46) popup_call_audio_conf_window_t1

0x9b9e,	// (0x00016e54) call_thumbnail_pane_g1

0x9ba6,	// (0x00016e5c) bg_pinb_pane_ParamLimits

0x9ba6,	// (0x00016e5c) bg_pinb_pane

0x9bb4,	// (0x00016e6a) find_pinb_pane

0x9bbd,	// (0x00016e73) listscroll_pinb_pane_ParamLimits

0x9bbd,	// (0x00016e73) listscroll_pinb_pane

0x9bcc,	// (0x00016e82) pinb_bg_pane_g1

0x1414,	// (0x0000e6ca) pinb_bg_pane_g2

0x1420,	// (0x0000e6d6) pinb_bg_pane_g3

0x142c,	// (0x0000e6e2) pinb_bg_pane_g4

0x1438,	// (0x0000e6ee) pinb_bg_pane_g5

0x1444,	// (0x0000e6fa) pinb_bg_pane_g6

0x144f,	// (0x0000e705) pinb_bg_pane_g7

0x145a,	// (0x0000e710) pinb_bg_pane_g8

0x1465,	// (0x0000e71b) pinb_bg_pane_g9

0x146f,	// (0x0000e725) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0001c3f1) pinb_bg_pane_g

0x1484,	// (0x0000e73a) grid_pinb_pane

0x148d,	// (0x0000e743) list_pinb_pane

0x1496,	// (0x0000e74c) scroll_pane_cp01_ParamLimits

0x1496,	// (0x0000e74c) scroll_pane_cp01

0x9bde,	// (0x00016e94) find_pinb_pane_g1_ParamLimits

0x9bde,	// (0x00016e94) find_pinb_pane_g1

0x9bf6,	// (0x00016eac) find_pinb_pane_t1

0x9c08,	// (0x00016ebe) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0001c40b) find_pinb_pane_t

0x9c1d,	// (0x00016ed3) input_focus_pane_cp01_ParamLimits

0x9c1d,	// (0x00016ed3) input_focus_pane_cp01

0x14a8,	// (0x0000e75e) cell_pinb_pane_ParamLimits

0x14a8,	// (0x0000e75e) cell_pinb_pane

0x14da,	// (0x0000e790) cell_pinb_pane_g1_ParamLimits

0x14da,	// (0x0000e790) cell_pinb_pane_g1

0x14ea,	// (0x0000e7a0) cell_pinb_pane_g2_ParamLimits

0x14ea,	// (0x0000e7a0) cell_pinb_pane_g2

0x9c29,	// (0x00016edf) cell_pinb_pane_g3_ParamLimits

0x9c29,	// (0x00016edf) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0001c410) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0001c410) cell_pinb_pane_g

0x994b,	// (0x00016c01) grid_highlight_pane_cp01

0x14f6,	// (0x0000e7ac) list_pinb_item_pane_ParamLimits

0x14f6,	// (0x0000e7ac) list_pinb_item_pane

0x994b,	// (0x00016c01) list_highlight_pane_cp02

0x9c35,	// (0x00016eeb) list_pinb_item_pane_g1_ParamLimits

0x9c35,	// (0x00016eeb) list_pinb_item_pane_g1

0x9c42,	// (0x00016ef8) list_pinb_item_pane_g2_ParamLimits

0x9c42,	// (0x00016ef8) list_pinb_item_pane_g2

0x150a,	// (0x0000e7c0) list_pinb_item_pane_g3_ParamLimits

0x150a,	// (0x0000e7c0) list_pinb_item_pane_g3

0x9c4e,	// (0x00016f04) list_pinb_item_pane_g4_ParamLimits

0x9c4e,	// (0x00016f04) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0001c417) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0001c417) list_pinb_item_pane_g

0x9c5a,	// (0x00016f10) list_pinb_item_pane_t1_ParamLimits

0x9c5a,	// (0x00016f10) list_pinb_item_pane_t1

0x1539,	// (0x0000e7ef) calc_display_pane

0x155f,	// (0x0000e815) calc_paper_pane

0x1582,	// (0x0000e838) grid_calc_pane

0x994b,	// (0x00016c01) bg_list_pane_cp01

0x15ae,	// (0x0000e864) clock_g1

0x15b6,	// (0x0000e86c) clock_g2

0x0001,

0xf16a,	// (0x0001c420) clock_g

0x15be,	// (0x0000e874) clock_t1_ParamLimits

0x15be,	// (0x0000e874) clock_t1

0x15d3,	// (0x0000e889) clock_t2_ParamLimits

0x15d3,	// (0x0000e889) clock_t2

0x15e5,	// (0x0000e89b) clock_t3_ParamLimits

0x15e5,	// (0x0000e89b) clock_t3

0x15f7,	// (0x0000e8ad) clock_t4_ParamLimits

0x15f7,	// (0x0000e8ad) clock_t4

0x1609,	// (0x0000e8bf) clock_t5_ParamLimits

0x1609,	// (0x0000e8bf) clock_t5

0x161e,	// (0x0000e8d4) clock_t6_ParamLimits

0x161e,	// (0x0000e8d4) clock_t6

0x1630,	// (0x0000e8e6) clock_t7_ParamLimits

0x1630,	// (0x0000e8e6) clock_t7

0x1642,	// (0x0000e8f8) clock_t8_ParamLimits

0x1642,	// (0x0000e8f8) clock_t8

0x1656,	// (0x0000e90c) clock_t9_ParamLimits

0x1656,	// (0x0000e90c) clock_t9

0x0008,

0xf16f,	// (0x0001c425) clock_t_ParamLimits

0xf16f,	// (0x0001c425) clock_t

0x9c79,	// (0x00016f2f) popup_clock_analogue_window_cp02

0x9c79,	// (0x00016f2f) popup_clock_digital_window_cp01

0x9c81,	// (0x00016f37) listscroll_help_pane

0x994b,	// (0x00016c01) phob_pre_status_pane

0x9c8b,	// (0x00016f41) grid_qdial_pane

0x994b,	// (0x00016c01) listscroll_mce_pane

0x9c95,	// (0x00016f4b) bg_notes_pane

0x9c9f,	// (0x00016f55) list_notes_pane

0x166a,	// (0x0000e920) scroll_pane_cp06

0x9ca9,	// (0x00016f5f) bg_calc_paper_pane

0x9cbd,	// (0x00016f73) list_calc_pane

0x9cd7,	// (0x00016f8d) bg_calc_display_pane

0x1675,	// (0x0000e92b) calc_display_pane_t1

0x1687,	// (0x0000e93d) calc_display_pane_t2

0x9ce3,	// (0x00016f99) calc_display_pane_t3

0x0002,

0xf182,	// (0x0001c438) calc_display_pane_t

0x1699,	// (0x0000e94f) cell_calc_pane_ParamLimits

0x1699,	// (0x0000e94f) cell_calc_pane

0x9cf5,	// (0x00016fab) bg_calc_paper_pane_g1

0x9d01,	// (0x00016fb7) bg_calc_paper_pane_g2

0x9d0d,	// (0x00016fc3) bg_calc_paper_pane_g3

0x9d19,	// (0x00016fcf) bg_calc_paper_pane_g4

0x9d25,	// (0x00016fdb) bg_calc_paper_pane_g5

0x16ce,	// (0x0000e984) bg_calc_paper_pane_g6

0x16dd,	// (0x0000e993) bg_calc_paper_pane_g7

0x16ec,	// (0x0000e9a2) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0001c43f) bg_calc_paper_pane_g

0x16ff,	// (0x0000e9b5) calc_bg_paper_pane_g9

0x1712,	// (0x0000e9c8) list_calc_item_pane_ParamLimits

0x1712,	// (0x0000e9c8) list_calc_item_pane

0x9d31,	// (0x00016fe7) list_calc_item_pane_g1

0x9d3e,	// (0x00016ff4) list_calc_item_pane_t1_ParamLimits

0x9d3e,	// (0x00016ff4) list_calc_item_pane_t1

0x1728,	// (0x0000e9de) list_calc_item_pane_t2_ParamLimits

0x1728,	// (0x0000e9de) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0001c450) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0001c450) list_calc_item_pane_t

0x9d50,	// (0x00017006) cell_calc_pane_g1

0x9d5a,	// (0x00017010) grid_highlight_pane_cp02

0x9d7c,	// (0x00017032) bg_calc_display_pane_g1

0x9d85,	// (0x0001703b) bg_calc_display_pane_g2

0x9d8f,	// (0x00017045) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0001c45a) bg_calc_display_pane_g

0x175c,	// (0x0000ea12) cell_qdial_pane_ParamLimits

0x175c,	// (0x0000ea12) cell_qdial_pane

0x1770,	// (0x0000ea26) cell_qdial_pane_g1_ParamLimits

0x1770,	// (0x0000ea26) cell_qdial_pane_g1

0x1786,	// (0x0000ea3c) cell_qdial_pane_g2_ParamLimits

0x1786,	// (0x0000ea3c) cell_qdial_pane_g2

0x9d98,	// (0x0001704e) cell_qdial_pane_g3_ParamLimits

0x9d98,	// (0x0001704e) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0001c461) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0001c461) cell_qdial_pane_g

0x17ad,	// (0x0000ea63) cell_qdial_pane_t1_ParamLimits

0x17ad,	// (0x0000ea63) cell_qdial_pane_t1

0x17c5,	// (0x0000ea7b) cell_qdial_pane_t2_ParamLimits

0x17c5,	// (0x0000ea7b) cell_qdial_pane_t2

0x17d8,	// (0x0000ea8e) cell_qdial_pane_t3_ParamLimits

0x17d8,	// (0x0000ea8e) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0001c46a) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0001c46a) cell_qdial_pane_t

0x994b,	// (0x00016c01) grid_highlight_pane_cp04

0x9da4,	// (0x0001705a) thumbnail_qdial_pane_ParamLimits

0x9da4,	// (0x0001705a) thumbnail_qdial_pane

0x9e00,	// (0x000170b6) list_help_pane

0x9e09,	// (0x000170bf) scroll_pane_cp02

0x17eb,	// (0x0000eaa1) help_list_pane_t1_ParamLimits

0x17eb,	// (0x0000eaa1) help_list_pane_t1

0x9e12,	// (0x000170c8) bg_notes_pane_g2

0x9e1a,	// (0x000170d0) bg_notes_pane_g3

0x9e22,	// (0x000170d8) notes_bg_pane_g1

0x9e2a,	// (0x000170e0) notes_bg_pane_g4

0x9e32,	// (0x000170e8) notes_bg_pane_g5

0x9e3a,	// (0x000170f0) notes_bg_pane_g6

0x9e42,	// (0x000170f8) notes_bg_pane_g7

0x9e4a,	// (0x00017100) notes_bg_pane_g8

0x9e52,	// (0x00017108) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0001c488) notes_bg_pane_g

0x9e5a,	// (0x00017110) list_notes_text_pane_ParamLimits

0x9e5a,	// (0x00017110) list_notes_text_pane

0x9e71,	// (0x00017127) list_notes_text_pane_g1

0x9e7a,	// (0x00017130) list_notes_text_pane_t1

0x9cd7,	// (0x00016f8d) listscroll_cale_week_pane

0x1828,	// (0x0000eade) bg_cale_heading_pane

0x9e99,	// (0x0001714f) bg_cale_pane_cp01

0x1840,	// (0x0000eaf6) cale_week_corner_pane

0x1851,	// (0x0000eb07) cale_week_day_heading_pane

0x1869,	// (0x0000eb1f) cale_week_scroll_pane_g1

0x187e,	// (0x0000eb34) cale_week_scroll_pane_g2

0x188f,	// (0x0000eb45) cale_week_scroll_pane_g3

0x18a0,	// (0x0000eb56) cale_week_scroll_pane_g4

0x18b1,	// (0x0000eb67) cale_week_scroll_pane_g5

0x18c2,	// (0x0000eb78) cale_week_scroll_pane_g6

0x18d3,	// (0x0000eb89) cale_week_scroll_pane_g7

0x18e4,	// (0x0000eb9a) cale_week_scroll_pane_g8

0x18f5,	// (0x0000ebab) cale_week_scroll_pane_g9

0x1906,	// (0x0000ebbc) cale_week_scroll_pane_g10

0x1917,	// (0x0000ebcd) cale_week_scroll_pane_g11

0x1928,	// (0x0000ebde) cale_week_scroll_pane_g12

0x1939,	// (0x0000ebef) cale_week_scroll_pane_g13

0x194a,	// (0x0000ec00) cale_week_scroll_pane_g14

0x195b,	// (0x0000ec11) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0001c497) cale_week_scroll_pane_g

0x196c,	// (0x0000ec22) cale_week_time_pane

0x197d,	// (0x0000ec33) grid_cale_week_pane

0x1990,	// (0x0000ec46) scroll_pane_cp08

0x19aa,	// (0x0000ec60) cell_cale_week_pane_ParamLimits

0x19aa,	// (0x0000ec60) cell_cale_week_pane

0x19e6,	// (0x0000ec9c) cale_week_day_heading_pane_t1

0x19fa,	// (0x0000ecb0) cale_week_day_heading_pane_t2

0x1a0e,	// (0x0000ecc4) cale_week_day_heading_pane_t3

0x1a22,	// (0x0000ecd8) cale_week_day_heading_pane_t4

0x1a36,	// (0x0000ecec) cale_week_day_heading_pane_t5

0x1a4a,	// (0x0000ed00) cale_week_day_heading_pane_t6

0x1a5e,	// (0x0000ed14) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0001c4b6) cale_week_day_heading_pane_t

0x9ec4,	// (0x0001717a) bg_cale_side_pane

0x1a72,	// (0x0000ed28) cale_week_time_pane_t1

0x1a8a,	// (0x0000ed40) cale_week_time_pane_t2

0x1aa2,	// (0x0000ed58) cale_week_time_pane_t3

0x1aba,	// (0x0000ed70) cale_week_time_pane_t4

0x1ad2,	// (0x0000ed88) cale_week_time_pane_t5

0x1aea,	// (0x0000eda0) cale_week_time_pane_t6

0x1b02,	// (0x0000edb8) cale_week_time_pane_t7

0x1b1a,	// (0x0000edd0) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0001c4c5) cale_week_time_pane_t

0x1b32,	// (0x0000ede8) cell_cale_week_pane_g2

0x1b4e,	// (0x0000ee04) cell_cale_week_pane_g3_ParamLimits

0x1b4e,	// (0x0000ee04) cell_cale_week_pane_g3

0x9ed2,	// (0x00017188) grid_highlight_pane_cp07

0x9eda,	// (0x00017190) listscroll_gms_pane

0x9ee4,	// (0x0001719a) grid_gms_pane

0x9eed,	// (0x000171a3) listscroll_gms_pane_g1

0x9ef5,	// (0x000171ab) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0001c4d6) listscroll_gms_pane_g

0x1b66,	// (0x0000ee1c) scroll_pane_cp010

0x1b71,	// (0x0000ee27) cell_gms_pane_ParamLimits

0x1b71,	// (0x0000ee27) cell_gms_pane

0x1b84,	// (0x0000ee3a) cell_gms_pane_g1

0x9efd,	// (0x000171b3) cell_gms_pane_g2

0x9e71,	// (0x00017127) cell_gms_pane_g3

0x9f05,	// (0x000171bb) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0001c4db) cell_gms_pane_g

0x9f0e,	// (0x000171c4) grid_highlight_pane_cp09

0x3bfd,	// (0x00010eb3) phob_pre_status_pane_g1

0x3c05,	// (0x00010ebb) phob_pre_status_pane_g2

0x3c0d,	// (0x00010ec3) phob_pre_status_pane_g3

0x3c15,	// (0x00010ecb) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0001c8ca) phob_pre_status_pane_g

0x3c27,	// (0x00010edd) phob_pre_status_pane_t1

0x3c35,	// (0x00010eeb) phob_pre_status_pane_t2

0x3c45,	// (0x00010efb) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0001c8d5) phob_pre_status_pane_t

0x994b,	// (0x00016c01) bg_list_pane_cp05

0x9f1e,	// (0x000171d4) grid_vorec_pane

0x9f26,	// (0x000171dc) vorec_t1

0x9f34,	// (0x000171ea) vorec_t2

0x9f42,	// (0x000171f8) vorec_t3

0x9f50,	// (0x00017206) vorec_t4

0x9f5e,	// (0x00017214) vorec_t5

0x9f6c,	// (0x00017222) vorec_t6

0x0006,

0xf22e,	// (0x0001c4e4) vorec_t

0x9f88,	// (0x0001723e) wait_bar_pane_cp01

0x9f90,	// (0x00017246) cell_vorec_pane_ParamLimits

0x9f90,	// (0x00017246) cell_vorec_pane

0x9fa3,	// (0x00017259) cell_vorec_pane_g1

0x994b,	// (0x00016c01) grid_highlight_pane_cp05

0x1ba4,	// (0x0000ee5a) cams_zoom_pane

0x1bb3,	// (0x0000ee69) image_vga_pane

0x1bcd,	// (0x0000ee83) main_camera_pane_g1

0x1bdf,	// (0x0000ee95) main_camera_pane_g2

0x1bf1,	// (0x0000eea7) main_camera_pane_g3

0x1c03,	// (0x0000eeb9) main_camera_pane_g4

0x1c15,	// (0x0000eecb) main_camera_pane_g5

0x1c27,	// (0x0000eedd) main_camera_pane_g6

0x1c39,	// (0x0000eeef) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0001c4f3) main_camera_pane_g

0x1c4b,	// (0x0000ef01) main_camera_pane_t1

0x1c61,	// (0x0000ef17) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0001c504) main_camera_pane_t

0x1c9d,	// (0x0000ef53) cams_zoom_pane_cp_ParamLimits

0x1c9d,	// (0x0000ef53) cams_zoom_pane_cp

0x1cc5,	// (0x0000ef7b) image_cif_pane_ParamLimits

0x1cc5,	// (0x0000ef7b) image_cif_pane

0x1d00,	// (0x0000efb6) image_subqcif_pane

0x1d08,	// (0x0000efbe) main_video_pane_g1_ParamLimits

0x1d08,	// (0x0000efbe) main_video_pane_g1

0x1d2c,	// (0x0000efe2) main_video_pane_g2_ParamLimits

0x1d2c,	// (0x0000efe2) main_video_pane_g2

0x1d62,	// (0x0000f018) main_video_pane_g3_ParamLimits

0x1d62,	// (0x0000f018) main_video_pane_g3

0x1d92,	// (0x0000f048) main_video_pane_g4_ParamLimits

0x1d92,	// (0x0000f048) main_video_pane_g4

0x1dc2,	// (0x0000f078) main_video_pane_g5_ParamLimits

0x1dc2,	// (0x0000f078) main_video_pane_g5

0x9fb9,	// (0x0001726f) main_video_pane_g6_ParamLimits

0x9fb9,	// (0x0001726f) main_video_pane_g6

0x0006,

0xf253,	// (0x0001c509) main_video_pane_g_ParamLimits

0xf253,	// (0x0001c509) main_video_pane_g

0x1ded,	// (0x0000f0a3) main_video_pane_t1_ParamLimits

0x1ded,	// (0x0000f0a3) main_video_pane_t1

0x9fd3,	// (0x00017289) cams_zoom_pane_g1

0x9fdc,	// (0x00017292) cams_zoom_pane_g2

0x9fe5,	// (0x0001729b) cams_zoom_pane_g3

0x9fee,	// (0x000172a4) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0001c518) cams_zoom_pane_g

0x1e4a,	// (0x0000f100) grid_cams_pane

0x1e64,	// (0x0000f11a) linegrid_cams_pane

0x1e77,	// (0x0000f12d) cell_cams_pane_ParamLimits

0x1e77,	// (0x0000f12d) cell_cams_pane

0x9ff7,	// (0x000172ad) cams_burst_image_pane

0x9fff,	// (0x000172b5) cell_cams_pane_g1

0x994b,	// (0x00016c01) grid_highlight_pane_cp03

0x9d50,	// (0x00017006) mp_bg_pane_g1

0x994b,	// (0x00016c01) bg_list_pane_cp03

0xbe2f,	// (0x000190e5) bg_mp_pane

0xbe37,	// (0x000190ed) grid_mp_pane

0xbe3f,	// (0x000190f5) media_player_g1

0xbe47,	// (0x000190fd) media_player_t1

0xbe55,	// (0x0001910b) media_player_t2

0xbe63,	// (0x00019119) media_player_t3

0xbe71,	// (0x00019127) media_player_t4

0xbe7f,	// (0x00019135) media_player_t5

0xbe8d,	// (0x00019143) media_player_t6

0xbe9b,	// (0x00019151) media_player_t7

0x0006,

0xf5fe,	// (0x0001c8b4) media_player_t

0xbea9,	// (0x0001915f) wait_bar_pane_cp02

0xf5e3,	// (0x0001c899) main_usb_pane_t

0x3bf4,	// (0x00010eaa) cell_mp_pane

0x9d50,	// (0x00017006) cell_mp_pane_g1

0x994b,	// (0x00016c01) grid_highlight_pane_cp06

0xa0c4,	// (0x0001737a) grid_skin_colour_pane

0xa0cc,	// (0x00017382) list_highlight_pane_cp03

0x1ee9,	// (0x0000f19f) skin_g1

0xa0d4,	// (0x0001738a) skin_t1

0xa0e3,	// (0x00017399) skin_t2

0x0001,

0xf297,	// (0x0001c54d) skin_t

0x1ef1,	// (0x0000f1a7) cell_skin_colour_pane_ParamLimits

0x1ef1,	// (0x0000f1a7) cell_skin_colour_pane

0xa0f1,	// (0x000173a7) cell_skin_colour_pane_g1

0x1f4f,	// (0x0000f205) call_video_g1_ParamLimits

0x1f4f,	// (0x0000f205) call_video_g1

0x1f6b,	// (0x0000f221) call_video_g2_ParamLimits

0x1f6b,	// (0x0000f221) call_video_g2

0x0001,

0xf29c,	// (0x0001c552) call_video_g_ParamLimits

0xf29c,	// (0x0001c552) call_video_g

0x1fa1,	// (0x0000f257) call_video_uplink_pane_cp1_ParamLimits

0x1fa1,	// (0x0000f257) call_video_uplink_pane_cp1

0xa10b,	// (0x000173c1) call_video_uplink_pane_cp2

0x201f,	// (0x0000f2d5) video_down_crop_pane_ParamLimits

0x201f,	// (0x0000f2d5) video_down_crop_pane

0x20e5,	// (0x0000f39b) video_down_pane_ParamLimits

0x20e5,	// (0x0000f39b) video_down_pane

0xa113,	// (0x000173c9) video_down_subqcif_pane_ParamLimits

0xa113,	// (0x000173c9) video_down_subqcif_pane

0xa12b,	// (0x000173e1) video_down_subqcif_pane_cp_ParamLimits

0xa12b,	// (0x000173e1) video_down_subqcif_pane_cp

0xa14f,	// (0x00017405) im_reading_pane_ParamLimits

0xa14f,	// (0x00017405) im_reading_pane

0x21b6,	// (0x0000f46c) im_writing_pane_ParamLimits

0x21b6,	// (0x0000f46c) im_writing_pane

0x21cc,	// (0x0000f482) im_reading_pane_t1

0xa169,	// (0x0001741f) list_im_pane

0xa17a,	// (0x00017430) scroll_pane_cp07

0x2208,	// (0x0000f4be) im_writing_pane_t1_ParamLimits

0x2208,	// (0x0000f4be) im_writing_pane_t1

0xa193,	// (0x00017449) im_writing_pane_t2_ParamLimits

0xa193,	// (0x00017449) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0001c55c) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0001c55c) im_writing_pane_t

0x994b,	// (0x00016c01) input_focus_pane_cp04

0x994b,	// (0x00016c01) input_focus_pane_cp05

0x221d,	// (0x0000f4d3) list_im_single_pane_ParamLimits

0x221d,	// (0x0000f4d3) list_im_single_pane

0x2233,	// (0x0000f4e9) list_single_im_pane_t1

0x3bb4,	// (0x00010e6a) blid_accuracy_pane

0x3bbc,	// (0x00010e72) blid_compass_pane

0x3bc6,	// (0x00010e7c) main_location_t1

0x3bd6,	// (0x00010e8c) main_location_t2

0x3be6,	// (0x00010e9c) main_location_t3

0x0002,

0xf60d,	// (0x0001c8c3) main_location_t

0x994b,	// (0x00016c01) aid_levels_location

0x9d50,	// (0x00017006) blid_accuracy_pane_g1

0x9d50,	// (0x00017006) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0001c5be) blid_accuracy_pane_g

0xa1db,	// (0x00017491) wml_content_pane

0xa219,	// (0x000174cf) wml_button_pane_ParamLimits

0xa219,	// (0x000174cf) wml_button_pane

0x2242,	// (0x0000f4f8) wml_list_single_large_pane_ParamLimits

0x2242,	// (0x0000f4f8) wml_list_single_large_pane

0x2259,	// (0x0000f50f) wml_list_single_medium_pane_ParamLimits

0x2259,	// (0x0000f50f) wml_list_single_medium_pane

0x2271,	// (0x0000f527) wml_list_single_small_pane_ParamLimits

0x2271,	// (0x0000f527) wml_list_single_small_pane

0xa22d,	// (0x000174e3) wml_selection_box_pane_ParamLimits

0xa22d,	// (0x000174e3) wml_selection_box_pane

0xa240,	// (0x000174f6) wml_list_single_pane_t1

0xa24f,	// (0x00017505) wml_list_single_medium_pane_t1

0xa25e,	// (0x00017514) wml_list_single_large_pane_t1

0xa26d,	// (0x00017523) input_focus_pane_cp02_ParamLimits

0xa26d,	// (0x00017523) input_focus_pane_cp02

0xa280,	// (0x00017536) wml_selection_box_pane_g1

0xa289,	// (0x0001753f) wml_selection_box_pane_t1_ParamLimits

0xa289,	// (0x0001753f) wml_selection_box_pane_t1

0x9ba6,	// (0x00016e5c) bg_wml_button_pane_ParamLimits

0x9ba6,	// (0x00016e5c) bg_wml_button_pane

0xa2a1,	// (0x00017557) wml_button_pane_g1

0xa2a9,	// (0x0001755f) wml_button_pane_t1

0xa2a1,	// (0x00017557) wml_button_bg_pane_g1

0xa2b9,	// (0x0001756f) wml_button_bg_pane_g2

0xa2c1,	// (0x00017577) wml_button_bg_pane_g3

0xa2c9,	// (0x0001757f) wml_button_bg_pane_g4

0xa2d1,	// (0x00017587) wml_button_bg_pane_g5

0xa2d9,	// (0x0001758f) wml_button_bg_pane_g6

0xa2e1,	// (0x00017597) wml_button_bg_pane_g7

0xa2e9,	// (0x0001759f) wml_button_bg_pane_g8

0xa2f1,	// (0x000175a7) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0001c561) wml_button_bg_pane_g

0x228f,	// (0x0000f545) bg_list_pane_cp02

0xa2f9,	// (0x000175af) mce_header_pane_ParamLimits

0xa2f9,	// (0x000175af) mce_header_pane

0xa30f,	// (0x000175c5) mce_icon_pane

0xa30f,	// (0x000175c5) mce_image_pane

0xa318,	// (0x000175ce) mce_text_pane_ParamLimits

0xa318,	// (0x000175ce) mce_text_pane

0x2297,	// (0x0000f54d) scroll_pane_cp03

0xa211,	// (0x000174c7) scroll_pane_cp04

0xa32b,	// (0x000175e1) scroll_pane_cp05_ParamLimits

0xa32b,	// (0x000175e1) scroll_pane_cp05

0x22a1,	// (0x0000f557) mce_header_field_pane_ParamLimits

0x22a1,	// (0x0000f557) mce_header_field_pane

0x22b8,	// (0x0000f56e) mce_header_field_pane_2_ParamLimits

0x22b8,	// (0x0000f56e) mce_header_field_pane_2

0x22ce,	// (0x0000f584) mce_header_field_pane_3

0x22d6,	// (0x0000f58c) list_single_mce_message_pane_ParamLimits

0x22d6,	// (0x0000f58c) list_single_mce_message_pane

0x22ee,	// (0x0000f5a4) list_single_mce_smart_pane_ParamLimits

0x22ee,	// (0x0000f5a4) list_single_mce_smart_pane

0xa337,	// (0x000175ed) input_focus_pane_cp03

0xa340,	// (0x000175f6) list_header_data_pane

0x2311,	// (0x0000f5c7) mce_header_field_pane_t1

0x2321,	// (0x0000f5d7) list_single_mce_header_pane_ParamLimits

0x2321,	// (0x0000f5d7) list_single_mce_header_pane

0xa348,	// (0x000175fe) list_single_mce_header_pane_t1

0xa357,	// (0x0001760d) list_single_mce_message_pane_g1

0xa35f,	// (0x00017615) list_single_mce_message_pane_t1

0x2353,	// (0x0000f609) bg_cale_heading_pane_cp01_ParamLimits

0x2353,	// (0x0000f609) bg_cale_heading_pane_cp01

0xa36d,	// (0x00017623) bg_cale_pane_cp02_ParamLimits

0xa36d,	// (0x00017623) bg_cale_pane_cp02

0x2376,	// (0x0000f62c) cale_month_corner_pane

0x238c,	// (0x0000f642) cale_month_day_heading_pane_ParamLimits

0x238c,	// (0x0000f642) cale_month_day_heading_pane

0x23b7,	// (0x0000f66d) cale_month_pane_g1_ParamLimits

0x23b7,	// (0x0000f66d) cale_month_pane_g1

0x23d3,	// (0x0000f689) cale_month_pane_g2_ParamLimits

0x23d3,	// (0x0000f689) cale_month_pane_g2

0x23ec,	// (0x0000f6a2) cale_month_pane_g3_ParamLimits

0x23ec,	// (0x0000f6a2) cale_month_pane_g3

0x2418,	// (0x0000f6ce) cale_month_pane_g4_ParamLimits

0x2418,	// (0x0000f6ce) cale_month_pane_g4

0x2444,	// (0x0000f6fa) cale_month_pane_g5_ParamLimits

0x2444,	// (0x0000f6fa) cale_month_pane_g5

0x2470,	// (0x0000f726) cale_month_pane_g6_ParamLimits

0x2470,	// (0x0000f726) cale_month_pane_g6

0x249c,	// (0x0000f752) cale_month_pane_g7_ParamLimits

0x249c,	// (0x0000f752) cale_month_pane_g7

0x24c8,	// (0x0000f77e) cale_month_pane_g8_ParamLimits

0x24c8,	// (0x0000f77e) cale_month_pane_g8

0x24fc,	// (0x0000f7b2) cale_month_pane_g9_ParamLimits

0x24fc,	// (0x0000f7b2) cale_month_pane_g9

0x252e,	// (0x0000f7e4) cale_month_pane_g10_ParamLimits

0x252e,	// (0x0000f7e4) cale_month_pane_g10

0x2560,	// (0x0000f816) cale_month_pane_g11_ParamLimits

0x2560,	// (0x0000f816) cale_month_pane_g11

0x2592,	// (0x0000f848) cale_month_pane_g12_ParamLimits

0x2592,	// (0x0000f848) cale_month_pane_g12

0x25c4,	// (0x0000f87a) cale_month_pane_g13_ParamLimits

0x25c4,	// (0x0000f87a) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0001c574) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0001c574) cale_month_pane_g

0x25f6,	// (0x0000f8ac) cale_month_week_pane

0x2607,	// (0x0000f8bd) grid_cale_month_pane_ParamLimits

0x2607,	// (0x0000f8bd) grid_cale_month_pane

0x262d,	// (0x0000f8e3) cale_month_day_heading_pane_t1

0x268b,	// (0x0000f941) cale_month_day_heading_pane_t2

0x26f0,	// (0x0000f9a6) cale_month_day_heading_pane_t3

0x2755,	// (0x0000fa0b) cale_month_day_heading_pane_t4

0x27ba,	// (0x0000fa70) cale_month_day_heading_pane_t5

0x281f,	// (0x0000fad5) cale_month_day_heading_pane_t6

0x2884,	// (0x0000fb3a) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0001c58f) cale_month_day_heading_pane_t

0x9ec4,	// (0x0001717a) bg_cale_side_pane_cp01

0x28e9,	// (0x0000fb9f) cale_month_week_pane_t1

0x2900,	// (0x0000fbb6) cale_month_week_pane_t2

0x2917,	// (0x0000fbcd) cale_month_week_pane_t3

0x292e,	// (0x0000fbe4) cale_month_week_pane_t4

0x2945,	// (0x0000fbfb) cale_month_week_pane_t5

0x295c,	// (0x0000fc12) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0001c59e) cale_month_week_pane_t

0x2973,	// (0x0000fc29) cell_cale_month_pane_ParamLimits

0x2973,	// (0x0000fc29) cell_cale_month_pane

0xa3cc,	// (0x00017682) cell_cale_month_pane_g1

0x2a19,	// (0x0000fccf) cell_cale_month_pane_t1_ParamLimits

0x2a19,	// (0x0000fccf) cell_cale_month_pane_t1

0x9ed2,	// (0x00017188) grid_highlight_pane_cp08

0x9d50,	// (0x00017006) main_smil_g1

0x2a35,	// (0x0000fceb) smil_status_pane

0xa3d8,	// (0x0001768e) smil_text_pane

0xbd4f,	// (0x00019005) bg_popup_call3_rect_pane_g8

0xbd57,	// (0x0001900d) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001c857) bg_popup_call3_rect_pane_g

0xbfd1,	// (0x00019287) smil_status_volume_pane_g1

0xa3e2,	// (0x00017698) smil_status_pane_t1

0xc004,	// (0x000192ba) volume_smil_pane

0xa3f9,	// (0x000176af) list_smil_text_pane

0x2a4a,	// (0x0000fd00) scroll_pane_cp011

0x2a55,	// (0x0000fd0b) smil_text_list_pane_t1_ParamLimits

0x2a55,	// (0x0000fd0b) smil_text_list_pane_t1

0xa403,	// (0x000176b9) aid_volume_smil_ParamLimits

0xa403,	// (0x000176b9) aid_volume_smil

0x9d50,	// (0x00017006) smil_volume_pane_g1

0x9d50,	// (0x00017006) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0001c5be) smil_volume_pane_g

0x9cd7,	// (0x00016f8d) listscroll_cale_day_pane

0xa425,	// (0x000176db) bg_cale_pane

0xa43d,	// (0x000176f3) list_cale_pane

0xa44e,	// (0x00017704) scroll_pane_cp09

0xa45f,	// (0x00017715) cale_bg_pane_g1

0xa467,	// (0x0001771d) cale_bg_pane_g2

0xa46f,	// (0x00017725) cale_bg_pane_g3

0xa477,	// (0x0001772d) cale_bg_pane_g4

0xa47f,	// (0x00017735) cale_bg_pane_g5

0xa487,	// (0x0001773d) cale_bg_pane_g6

0xa48f,	// (0x00017745) cale_bg_pane_g7

0xa497,	// (0x0001774d) cale_bg_pane_g8

0xa49f,	// (0x00017755) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0001c5c3) cale_bg_pane_g

0x2aa9,	// (0x0000fd5f) list_cale_time_pane_ParamLimits

0x2aa9,	// (0x0000fd5f) list_cale_time_pane

0x2abe,	// (0x0000fd74) list_cale_time_pane_g1_ParamLimits

0x2abe,	// (0x0000fd74) list_cale_time_pane_g1

0xa4a7,	// (0x0001775d) list_cale_time_pane_g2_ParamLimits

0xa4a7,	// (0x0001775d) list_cale_time_pane_g2

0x2aca,	// (0x0000fd80) list_cale_time_pane_g3_ParamLimits

0x2aca,	// (0x0000fd80) list_cale_time_pane_g3

0x2ae6,	// (0x0000fd9c) list_cale_time_pane_g4_ParamLimits

0x2ae6,	// (0x0000fd9c) list_cale_time_pane_g4

0x2af4,	// (0x0000fdaa) list_cale_time_pane_g5_ParamLimits

0x2af4,	// (0x0000fdaa) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0001c5d6) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0001c5d6) list_cale_time_pane_g

0x2b02,	// (0x0000fdb8) list_cale_time_pane_t1_ParamLimits

0x2b02,	// (0x0000fdb8) list_cale_time_pane_t1

0x2b2a,	// (0x0000fde0) list_cale_time_pane_t2_ParamLimits

0x2b2a,	// (0x0000fde0) list_cale_time_pane_t2

0x2e57,	// (0x0001010d) aid_blid_cardinal_pane

0x2e95,	// (0x0001014b) compass_pane_t4

0x2b52,	// (0x0000fe08) list_cale_time_pane_t4_ParamLimits

0x2b52,	// (0x0000fe08) list_cale_time_pane_t4

0x2ea3,	// (0x00010159) compass_pane_t5

0x2eb1,	// (0x00010167) compass_pane_t6

0x2ebf,	// (0x00010175) compass_pane_t7

0xa9c5,	// (0x00017c7b) navi_pane_cc_t1

0xab2c,	// (0x00017de2) aid_phob_thumbnail_center_pane

0x35c0,	// (0x00010876) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0001c5e3) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0001c5e3) list_cale_time_pane_t

0x95a4,	// (0x0001685a) bg_popup_window_pane_cp02_ParamLimits

0x95a4,	// (0x0001685a) bg_popup_window_pane_cp02

0xa4c1,	// (0x00017777) heading_pane_cp01_ParamLimits

0xa4c1,	// (0x00017777) heading_pane_cp01

0xa4cd,	// (0x00017783) loc_req_pane_ParamLimits

0xa4cd,	// (0x00017783) loc_req_pane

0xa4dd,	// (0x00017793) loc_type_pane_ParamLimits

0xa4dd,	// (0x00017793) loc_type_pane

0xa4ef,	// (0x000177a5) loc_type_pane_t1_ParamLimits

0xa4ef,	// (0x000177a5) loc_type_pane_t1

0xa501,	// (0x000177b7) loc_type_pane_t2_ParamLimits

0xa501,	// (0x000177b7) loc_type_pane_t2

0xa513,	// (0x000177c9) loc_type_pane_t3_ParamLimits

0xa513,	// (0x000177c9) loc_type_pane_t3

0x0002,

0xf334,	// (0x0001c5ea) loc_type_pane_t_ParamLimits

0xf334,	// (0x0001c5ea) loc_type_pane_t

0xa525,	// (0x000177db) list_loc_req_pane

0xa52f,	// (0x000177e5) scroll_pane_cp012

0x2b7a,	// (0x0000fe30) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b7a,	// (0x0000fe30) list_single_loc_request_popup_menu_pane

0xa53a,	// (0x000177f0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa53a,	// (0x000177f0) list_single_loc_request_popup_menu_pane_g1

0xa546,	// (0x000177fc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa546,	// (0x000177fc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0001c5f1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0001c5f1) list_single_loc_request_popup_menu_pane_g

0xa552,	// (0x00017808) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa552,	// (0x00017808) list_single_loc_request_popup_menu_pane_t1

0x9ba6,	// (0x00016e5c) bg_popup_window_pane_cp03_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_window_pane_cp03

0xa568,	// (0x0001781e) heading_loc_req_pane_ParamLimits

0xa568,	// (0x0001781e) heading_loc_req_pane

0x2b87,	// (0x0000fe3d) popup_dyc_status_message_window_g1_ParamLimits

0x2b87,	// (0x0000fe3d) popup_dyc_status_message_window_g1

0x2b9b,	// (0x0000fe51) popup_dyc_status_message_window_t1_ParamLimits

0x2b9b,	// (0x0000fe51) popup_dyc_status_message_window_t1

0x2bb0,	// (0x0000fe66) popup_dyc_status_message_window_t2_ParamLimits

0x2bb0,	// (0x0000fe66) popup_dyc_status_message_window_t2

0x2bc5,	// (0x0000fe7b) popup_dyc_status_message_window_t3_ParamLimits

0x2bc5,	// (0x0000fe7b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0001c5f6) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0001c5f6) popup_dyc_status_message_window_t

0x994b,	// (0x00016c01) bg_heading_pane_cp01

0xa574,	// (0x0001782a) heading_loc_req_pane_g1

0xa57c,	// (0x00017832) heading_loc_req_pane_g2

0xa584,	// (0x0001783a) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0001c5fd) heading_loc_req_pane_g

0xa58c,	// (0x00017842) heading_loc_req_pane_t1

0xa610,	// (0x000178c6) bg_popup_sub_pane_cp01_ParamLimits

0xa610,	// (0x000178c6) bg_popup_sub_pane_cp01

0xa61e,	// (0x000178d4) popup_cale_events_window_g1_ParamLimits

0xa61e,	// (0x000178d4) popup_cale_events_window_g1

0xa63e,	// (0x000178f4) popup_cale_events_window_g2_ParamLimits

0xa63e,	// (0x000178f4) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0001c631) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0001c631) popup_cale_events_window_g

0xa65e,	// (0x00017914) popup_cale_events_window_t1_ParamLimits

0xa65e,	// (0x00017914) popup_cale_events_window_t1

0xa670,	// (0x00017926) popup_cale_events_window_t2_ParamLimits

0xa670,	// (0x00017926) popup_cale_events_window_t2

0xa6ae,	// (0x00017964) popup_cale_events_window_t3_ParamLimits

0xa6ae,	// (0x00017964) popup_cale_events_window_t3

0xa6e8,	// (0x0001799e) popup_cale_events_window_t4_ParamLimits

0xa6e8,	// (0x0001799e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0001c636) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0001c636) popup_cale_events_window_t

0x2c53,	// (0x0000ff09) call_type_pane

0x2c63,	// (0x0000ff19) popup_call_status_window_g1

0x2c77,	// (0x0000ff2d) popup_call_status_window_g2

0x2c8b,	// (0x0000ff41) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0001c63f) popup_call_status_window_g

0xa71e,	// (0x000179d4) call_type_pane_g1

0xa727,	// (0x000179dd) call_type_pane_g2

0x0001,

0xf390,	// (0x0001c646) call_type_pane_g

0x994b,	// (0x00016c01) bg_popup_sub_pane_cp02

0xa730,	// (0x000179e6) listscroll_popup_wml_pane

0xa738,	// (0x000179ee) list_wml_pane

0xa742,	// (0x000179f8) scroll_pane_cp013

0xa74d,	// (0x00017a03) list_single_graphic_popup_wml_pane_ParamLimits

0xa74d,	// (0x00017a03) list_single_graphic_popup_wml_pane

0x9d50,	// (0x00017006) list_single_graphic_popup_wml_pane_g1

0xa761,	// (0x00017a17) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0001c64b) list_single_graphic_popup_wml_pane_g

0xa769,	// (0x00017a1f) list_single_graphic_popup_wml_pane_t1

0xa77f,	// (0x00017a35) aid_call_pane

0x9b9e,	// (0x00016e54) popup_clock_analogue_window_g1

0x9b9e,	// (0x00016e54) popup_clock_analogue_window_g2

0xa787,	// (0x00017a3d) popup_clock_analogue_window_g3

0xa787,	// (0x00017a3d) popup_clock_analogue_window_g4

0x9d50,	// (0x00017006) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0001c650) popup_clock_analogue_window_g

0xa78f,	// (0x00017a45) popup_clock_analogue_window_t1

0xa79d,	// (0x00017a53) clock_digital_number_pane_ParamLimits

0xa79d,	// (0x00017a53) clock_digital_number_pane

0xa7a9,	// (0x00017a5f) clock_digital_number_pane_cp02_ParamLimits

0xa7a9,	// (0x00017a5f) clock_digital_number_pane_cp02

0xa7b5,	// (0x00017a6b) clock_digital_number_pane_cp03_ParamLimits

0xa7b5,	// (0x00017a6b) clock_digital_number_pane_cp03

0xa7c1,	// (0x00017a77) clock_digital_number_pane_cp04_ParamLimits

0xa7c1,	// (0x00017a77) clock_digital_number_pane_cp04

0xa7cd,	// (0x00017a83) clock_digital_separator_pane_ParamLimits

0xa7cd,	// (0x00017a83) clock_digital_separator_pane

0xa7d9,	// (0x00017a8f) popup_clock_digital_window_t1

0x9d50,	// (0x00017006) clock_digital_number_pane_g1

0x9d50,	// (0x00017006) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0001c5be) clock_digital_number_pane_g

0x9d50,	// (0x00017006) clock_digital_separator_pane_g1

0x9d50,	// (0x00017006) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0001c5be) clock_digital_separator_pane_g

0x994b,	// (0x00016c01) bg_popup_window_pane_cp04

0xa7f6,	// (0x00017aac) heading_pane_cp03

0xa7fe,	// (0x00017ab4) listscroll_popup_gms_pane

0xa806,	// (0x00017abc) grid_large_graphic_popup_pane

0xa810,	// (0x00017ac6) listscroll_popup_gms_pane_g1

0xa818,	// (0x00017ace) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0001c65b) listscroll_popup_gms_pane_g

0xa211,	// (0x000174c7) scroll_pane_cp014

0xa820,	// (0x00017ad6) cell_large_graphic_popup_pane_ParamLimits

0xa820,	// (0x00017ad6) cell_large_graphic_popup_pane

0xa838,	// (0x00017aee) cell_large_graphic_popup_pane_g1_ParamLimits

0xa838,	// (0x00017aee) cell_large_graphic_popup_pane_g1

0xa844,	// (0x00017afa) cell_large_graphic_popup_pane_g2_ParamLimits

0xa844,	// (0x00017afa) cell_large_graphic_popup_pane_g2

0xa850,	// (0x00017b06) cell_large_graphic_popup_pane_g3_ParamLimits

0xa850,	// (0x00017b06) cell_large_graphic_popup_pane_g3

0xa85d,	// (0x00017b13) cell_large_graphic_popup_pane_g4_ParamLimits

0xa85d,	// (0x00017b13) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0001c660) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0001c660) cell_large_graphic_popup_pane_g

0xa86d,	// (0x00017b23) grid_highlight_pane_cp010

0x9d50,	// (0x00017006) bg_popup_call_pane_g1

0xa877,	// (0x00017b2d) list_single_graphic_popup_conf_pane_ParamLimits

0xa877,	// (0x00017b2d) list_single_graphic_popup_conf_pane

0xa889,	// (0x00017b3f) list_highlight_pane_cp01

0xa892,	// (0x00017b48) list_single_graphic_popup_conf_pane_g1

0xa89a,	// (0x00017b50) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0001c669) list_single_graphic_popup_conf_pane_g

0xa8a2,	// (0x00017b58) list_single_graphic_popup_conf_pane_t1

0xa8b0,	// (0x00017b66) linegrid_cams_pane_g1

0x2c9b,	// (0x0000ff51) linegrid_cams_pane_g2

0x9e71,	// (0x00017127) linegrid_cams_pane_g3

0xa8b9,	// (0x00017b6f) linegrid_cams_pane_g4

0x2ca4,	// (0x0000ff5a) linegrid_cams_pane_g5

0x2cad,	// (0x0000ff63) linegrid_cams_pane_g6

0x9f05,	// (0x000171bb) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0001c66e) linegrid_cams_pane_g

0xa8c2,	// (0x00017b78) popup_clock_analogue_window

0xa8c2,	// (0x00017b78) popup_clock_digital_window

0x994b,	// (0x00016c01) popup_phob_thumbnail_window

0x9d50,	// (0x00017006) call_video_uplink_pane_g1

0xa8cb,	// (0x00017b81) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0001c67d) call_video_uplink_pane_g

0x9ed2,	// (0x00017188) video_uplink_pane

0xa8d3,	// (0x00017b89) mce_image_pane_g1

0x2cb8,	// (0x0000ff6e) mce_image_pane_g2

0x2cc0,	// (0x0000ff76) mce_image_pane_g3

0x2cc8,	// (0x0000ff7e) mce_image_pane_g4

0x2cd0,	// (0x0000ff86) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0001c682) mce_image_pane_g

0xa8dd,	// (0x00017b93) control_top_pane_stacon_cp01_ParamLimits

0xa8dd,	// (0x00017b93) control_top_pane_stacon_cp01

0xa8f1,	// (0x00017ba7) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8f1,	// (0x00017ba7) uni_indicator_pane_stacon_cp01

0xa902,	// (0x00017bb8) bg_popup_sub_pane_cp03

0x2cd8,	// (0x0000ff8e) chi_dic_find_pane

0x2ce0,	// (0x0000ff96) listscroll_chi_dic_pane

0x2ce9,	// (0x0000ff9f) main_pane_chidic_g1

0x2cfc,	// (0x0000ffb2) chi_dic_find_pane_t1

0xa90c,	// (0x00017bc2) find_chidic_pane

0xa915,	// (0x00017bcb) chi_dic_list_pane_ParamLimits

0xa915,	// (0x00017bcb) chi_dic_list_pane

0xa926,	// (0x00017bdc) scroll_pane_cp020

0x2d0a,	// (0x0000ffc0) find_chidic_pane_t1

0x994b,	// (0x00016c01) input_focus_pane_cp06

0x2d19,	// (0x0000ffcf) list_chi_dic_pane_ParamLimits

0x2d19,	// (0x0000ffcf) list_chi_dic_pane

0xa92e,	// (0x00017be4) list_chi_dic_pane_t1_ParamLimits

0xa92e,	// (0x00017be4) list_chi_dic_pane_t1

0x994b,	// (0x00016c01) list_highlight_pane_cp020

0xa941,	// (0x00017bf7) bg_cale_heading_pane_g1

0x2d2d,	// (0x0000ffe3) bg_cale_heading_pane_g2

0x2d35,	// (0x0000ffeb) bg_cale_heading_pane_g3

0x2d3d,	// (0x0000fff3) bg_cale_heading_pane_g4

0x2d47,	// (0x0000fffd) bg_cale_heading_pane_g5

0x2d51,	// (0x00010007) bg_cale_heading_pane_g6

0x2d59,	// (0x0001000f) bg_cale_heading_pane_g7

0x2d61,	// (0x00010017) bg_cale_heading_pane_g8

0x2d6b,	// (0x00010021) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0001c68d) bg_cale_heading_pane_g

0xa941,	// (0x00017bf7) bg_cale_side_pane_g1

0x2d75,	// (0x0001002b) bg_cale_side_pane_g2

0x2d7d,	// (0x00010033) bg_cale_side_pane_g3

0x2d85,	// (0x0001003b) bg_cale_side_pane_g4

0x2d8d,	// (0x00010043) bg_cale_side_pane_g5

0x2d95,	// (0x0001004b) bg_cale_side_pane_g6

0x2d9d,	// (0x00010053) bg_cale_side_pane_g7

0x2da5,	// (0x0001005b) bg_cale_side_pane_g8

0x2dad,	// (0x00010063) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0001c6a0) bg_cale_side_pane_g

0x2db5,	// (0x0001006b) popup_call_status_window_ParamLimits

0x2db5,	// (0x0001006b) popup_call_status_window

0xa949,	// (0x00017bff) stacon_top_pane

0xa951,	// (0x00017c07) status_pane_ParamLimits

0xa951,	// (0x00017c07) status_pane

0xa966,	// (0x00017c1c) status_small_pane

0xa96e,	// (0x00017c24) control_pane

0x994b,	// (0x00016c01) stacon_bottom_pane

0xa976,	// (0x00017c2c) list_single_mce_smart_pane_t1_ParamLimits

0xa976,	// (0x00017c2c) list_single_mce_smart_pane_t1

0xa989,	// (0x00017c3f) list_single_mce_smart_pane_t2_ParamLimits

0xa989,	// (0x00017c3f) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0001c6b3) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0001c6b3) list_single_mce_smart_pane_t

0x2dfc,	// (0x000100b2) compass_pane

0x2e05,	// (0x000100bb) main_location2_pane_t1

0x2e19,	// (0x000100cf) main_location2_pane_t2

0x2e2d,	// (0x000100e3) main_location2_pane_t3

0x0003,

0xf402,	// (0x0001c6b8) main_location2_pane_t

0xa9a8,	// (0x00017c5e) compass_pane_g1_ParamLimits

0xa9a8,	// (0x00017c5e) compass_pane_g1

0x2e77,	// (0x0001012d) compass_pane_t1

0x2e86,	// (0x0001013c) compass_pane_t2

0x0005,

0xf40b,	// (0x0001c6c1) compass_pane_t

0x2ecd,	// (0x00010183) text_secondary_cp61

0xa9bc,	// (0x00017c72) navi_pane_cams_g5

0xa9df,	// (0x00017c95) navi_pane_im_t1

0xa9ed,	// (0x00017ca3) navi_pane_mp_g1_ParamLimits

0xa9ed,	// (0x00017ca3) navi_pane_mp_g1

0xaa01,	// (0x00017cb7) navi_pane_mp_g2_ParamLimits

0xaa01,	// (0x00017cb7) navi_pane_mp_g2

0xaa0d,	// (0x00017cc3) navi_pane_mp_g3_ParamLimits

0xaa0d,	// (0x00017cc3) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0001c6d5) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0001c6d5) navi_pane_mp_g

0xaa19,	// (0x00017ccf) navi_pane_mp_t1

0xaa27,	// (0x00017cdd) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0001c6dc) navi_pane_mp_t

0xaa63,	// (0x00017d19) navi_pane_vt_g1

0xaa19,	// (0x00017ccf) navi_pane_vt_t1

0xaa6b,	// (0x00017d21) navi_slider_pane

0xaa73,	// (0x00017d29) zooming_pane

0xaa7b,	// (0x00017d31) navi_slider_pane_g1

0xaa84,	// (0x00017d3a) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0001c6e3) navi_slider_pane_g

0xaab1,	// (0x00017d67) aid_levels_zoom

0xaab9,	// (0x00017d6f) zooming_pane_g1

0xaac1,	// (0x00017d77) zooming_pane_g2

0xaac1,	// (0x00017d77) zooming_pane_g3

0x0002,

0xf43c,	// (0x0001c6f2) zooming_pane_g

0xaac9,	// (0x00017d7f) level_10_zoom

0xaad2,	// (0x00017d88) level_11_zoom

0xaadb,	// (0x00017d91) level_1_zoom

0xaae4,	// (0x00017d9a) level_2_zoom

0xaaed,	// (0x00017da3) level_3_zoom

0xaaf6,	// (0x00017dac) level_4_zoom

0xaaff,	// (0x00017db5) level_5_zoom

0xab08,	// (0x00017dbe) level_6_zoom

0xab11,	// (0x00017dc7) level_7_zoom

0xab1a,	// (0x00017dd0) level_8_zoom

0xab23,	// (0x00017dd9) level_9_zoom

0xab34,	// (0x00017dea) popup_phob_thumbnail_window_g1

0xab3c,	// (0x00017df2) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0001c6f9) popup_phob_thumbnail_window_g

0xbeb1,	// (0x00019167) level_1_location

0xbeb9,	// (0x0001916f) level_2_location

0xbec1,	// (0x00019177) level_3_location

0xbec9,	// (0x0001917f) level_4_location

0xaa73,	// (0x00017d29) level_5_location

0x2ff6,	// (0x000102ac) mce_icon_pane_g1

0x2ffe,	// (0x000102b4) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0001c6fe) mce_icon_pane_g

0x3006,	// (0x000102bc) main_mup_pane_g1_ParamLimits

0x3006,	// (0x000102bc) main_mup_pane_g1

0x301c,	// (0x000102d2) main_mup_pane_g2_ParamLimits

0x301c,	// (0x000102d2) main_mup_pane_g2

0x3034,	// (0x000102ea) main_mup_pane_g3_ParamLimits

0x3034,	// (0x000102ea) main_mup_pane_g3

0x304c,	// (0x00010302) main_mup_pane_g4_ParamLimits

0x304c,	// (0x00010302) main_mup_pane_g4

0x3064,	// (0x0001031a) main_mup_pane_g5_ParamLimits

0x3064,	// (0x0001031a) main_mup_pane_g5

0x3080,	// (0x00010336) main_mup_pane_g6_ParamLimits

0x3080,	// (0x00010336) main_mup_pane_g6

0x3098,	// (0x0001034e) main_mup_pane_g7_ParamLimits

0x3098,	// (0x0001034e) main_mup_pane_g7

0x30b0,	// (0x00010366) main_mup_pane_g8_ParamLimits

0x30b0,	// (0x00010366) main_mup_pane_g8

0x30c8,	// (0x0001037e) main_mup_pane_g9_ParamLimits

0x30c8,	// (0x0001037e) main_mup_pane_g9

0x30e2,	// (0x00010398) main_mup_pane_g10_ParamLimits

0x30e2,	// (0x00010398) main_mup_pane_g10

0x30fc,	// (0x000103b2) main_mup_pane_g11_ParamLimits

0x30fc,	// (0x000103b2) main_mup_pane_g11

0x3110,	// (0x000103c6) main_mup_pane_g12_ParamLimits

0x3110,	// (0x000103c6) main_mup_pane_g12

0x3126,	// (0x000103dc) main_mup_pane_g13_ParamLimits

0x3126,	// (0x000103dc) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0001c703) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0001c703) main_mup_pane_g

0x313a,	// (0x000103f0) main_mup_pane_t1_ParamLimits

0x313a,	// (0x000103f0) main_mup_pane_t1

0x3154,	// (0x0001040a) main_mup_pane_t2_ParamLimits

0x3154,	// (0x0001040a) main_mup_pane_t2

0x316c,	// (0x00010422) main_mup_pane_t3_ParamLimits

0x316c,	// (0x00010422) main_mup_pane_t3

0x3184,	// (0x0001043a) main_mup_pane_t4_ParamLimits

0x3184,	// (0x0001043a) main_mup_pane_t4

0x31a2,	// (0x00010458) main_mup_pane_t5_ParamLimits

0x31a2,	// (0x00010458) main_mup_pane_t5

0x31b7,	// (0x0001046d) main_mup_pane_t6_ParamLimits

0x31b7,	// (0x0001046d) main_mup_pane_t6

0x0005,

0xf468,	// (0x0001c71e) main_mup_pane_t_ParamLimits

0xf468,	// (0x0001c71e) main_mup_pane_t

0x31c9,	// (0x0001047f) mup_progress_pane_ParamLimits

0x31c9,	// (0x0001047f) mup_progress_pane

0x31d5,	// (0x0001048b) mup_visualizer_pane_ParamLimits

0x31d5,	// (0x0001048b) mup_visualizer_pane

0x3209,	// (0x000104bf) mup_volume_pane_ParamLimits

0x3209,	// (0x000104bf) mup_volume_pane

0xab44,	// (0x00017dfa) mup_visualizer_pane_g1_ParamLimits

0xab44,	// (0x00017dfa) mup_visualizer_pane_g1

0xab44,	// (0x00017dfa) mup_visualizer_pane_g2_ParamLimits

0xab44,	// (0x00017dfa) mup_visualizer_pane_g2

0xa9a8,	// (0x00017c5e) mup_visualizer_pane_g3_ParamLimits

0xa9a8,	// (0x00017c5e) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0001c72b) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0001c72b) mup_visualizer_pane_g

0x9d50,	// (0x00017006) mup_volume_pane_g1

0xab5a,	// (0x00017e10) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0001c732) mup_volume_pane_g

0x9d50,	// (0x00017006) mup_progress_pane_g1

0xab63,	// (0x00017e19) mup_progress_pane_g2

0xab6c,	// (0x00017e22) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0001c737) mup_progress_pane_g

0x994b,	// (0x00016c01) bg_popup_window_pane_cp05

0xab75,	// (0x00017e2b) heading_pane_cp02_ParamLimits

0xab75,	// (0x00017e2b) heading_pane_cp02

0xab8f,	// (0x00017e45) list_popup_blid_pane

0xab97,	// (0x00017e4d) list_blid_sat_info_pane_ParamLimits

0xab97,	// (0x00017e4d) list_blid_sat_info_pane

0xabaa,	// (0x00017e60) list_blid_sat_info_pane_g1

0xabb2,	// (0x00017e68) list_blid_sat_info_pane_t1

0x331f,	// (0x000105d5) mup_equalizer_pane_ParamLimits

0x331f,	// (0x000105d5) mup_equalizer_pane

0x3338,	// (0x000105ee) mup_equalizer_pane_cp1_ParamLimits

0x3338,	// (0x000105ee) mup_equalizer_pane_cp1

0x3355,	// (0x0001060b) mup_equalizer_pane_cp2_ParamLimits

0x3355,	// (0x0001060b) mup_equalizer_pane_cp2

0x3372,	// (0x00010628) mup_equalizer_pane_cp3_ParamLimits

0x3372,	// (0x00010628) mup_equalizer_pane_cp3

0x3393,	// (0x00010649) mup_equalizer_pane_cp4_ParamLimits

0x3393,	// (0x00010649) mup_equalizer_pane_cp4

0x33b4,	// (0x0001066a) mup_equalizer_pane_cp5

0x33c8,	// (0x0001067e) mup_equalizer_pane_cp6

0x33dc,	// (0x00010692) mup_equalizer_pane_cp7

0xbdcf,	// (0x00019085) bg_popup_call_poc_act_pane_g9

0xbdd7,	// (0x0001908d) bg_popup_call_poc_act_pane_g10

0xbddf,	// (0x00019095) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ba6,	// (0x00016e5c) mup_scale_pane

0x9d50,	// (0x00017006) mup_scale_pane_g1

0xabc0,	// (0x00017e76) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0001c753) mup_scale_pane_g

0xabe4,	// (0x00017e9a) msg_data_pane

0xabec,	// (0x00017ea2) scroll_pane_cp017

0x3402,	// (0x000106b8) bg_list_pane_cp04_ParamLimits

0x3402,	// (0x000106b8) bg_list_pane_cp04

0xabf4,	// (0x00017eaa) msg_data_pane_g1

0x3422,	// (0x000106d8) msg_data_pane_g2

0x2cc0,	// (0x0000ff76) msg_data_pane_g3

0x342a,	// (0x000106e0) msg_data_pane_g4

0x3432,	// (0x000106e8) msg_data_pane_g5

0x343a,	// (0x000106f0) msg_data_pane_g6

0x3442,	// (0x000106f8) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0001c762) msg_data_pane_g

0x344a,	// (0x00010700) msg_text_pane_ParamLimits

0x344a,	// (0x00010700) msg_text_pane

0x3473,	// (0x00010729) qrid_highlight_pane_cp011_ParamLimits

0x3473,	// (0x00010729) qrid_highlight_pane_cp011

0x994b,	// (0x00016c01) msg_body_pane

0x994b,	// (0x00016c01) msg_header_pane

0xac05,	// (0x00017ebb) input_focus_pane_cp07

0x3497,	// (0x0001074d) msg_header_pane_t1_ParamLimits

0x3497,	// (0x0001074d) msg_header_pane_t1

0xac1a,	// (0x00017ed0) msg_header_pane_t2_ParamLimits

0xac1a,	// (0x00017ed0) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0001c776) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0001c776) msg_header_pane_t

0xac2c,	// (0x00017ee2) msg_body_pane_g1

0x34ab,	// (0x00010761) msg_body_pane_t1_ParamLimits

0x34ab,	// (0x00010761) msg_body_pane_t1

0xac34,	// (0x00017eea) msg_body_pane_t2_ParamLimits

0xac34,	// (0x00017eea) msg_body_pane_t2

0xac46,	// (0x00017efc) msg_body_pane_t3_ParamLimits

0xac46,	// (0x00017efc) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0001c77b) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0001c77b) msg_body_pane_t

0x3516,	// (0x000107cc) main_viewer_pane_g1_ParamLimits

0x3516,	// (0x000107cc) main_viewer_pane_g1

0x3524,	// (0x000107da) main_viewer_pane_g2_ParamLimits

0x3524,	// (0x000107da) main_viewer_pane_g2

0x3532,	// (0x000107e8) main_viewer_pane_g3_ParamLimits

0x3532,	// (0x000107e8) main_viewer_pane_g3

0x3541,	// (0x000107f7) main_viewer_pane_g4_ParamLimits

0x3541,	// (0x000107f7) main_viewer_pane_g4

0xac70,	// (0x00017f26) main_viewer_pane_g5_ParamLimits

0xac70,	// (0x00017f26) main_viewer_pane_g5

0xac70,	// (0x00017f26) main_viewer_pane_g7_ParamLimits

0xac70,	// (0x00017f26) main_viewer_pane_g7

0xac82,	// (0x00017f38) main_viewer_pane_g8_ParamLimits

0xac82,	// (0x00017f38) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0001c78b) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0001c78b) main_viewer_pane_g

0xac9a,	// (0x00017f50) viewer_content_pane_ParamLimits

0xac9a,	// (0x00017f50) viewer_content_pane

0x357d,	// (0x00010833) main_postcard_pane_g1_ParamLimits

0x357d,	// (0x00010833) main_postcard_pane_g1

0x3593,	// (0x00010849) main_postcard_pane_g2_ParamLimits

0x3593,	// (0x00010849) main_postcard_pane_g2

0x35a9,	// (0x0001085f) main_postcard_pane_g3_ParamLimits

0x35a9,	// (0x0001085f) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0001c79c) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0001c79c) main_postcard_pane_g

0x35c0,	// (0x00010876) main_postcard_pane_g4

0xbfe4,	// (0x0001929a) smil_status_volume_pane_g2

0x3603,	// (0x000108b9) postcard_pane_ParamLimits

0x3603,	// (0x000108b9) postcard_pane

0xaca8,	// (0x00017f5e) postcard_pane_g1_ParamLimits

0xaca8,	// (0x00017f5e) postcard_pane_g1

0x3645,	// (0x000108fb) postcard_pane_g2_ParamLimits

0x3645,	// (0x000108fb) postcard_pane_g2

0x3651,	// (0x00010907) postcard_pane_g3_ParamLimits

0x3651,	// (0x00010907) postcard_pane_g3

0xacb6,	// (0x00017f6c) postcard_pane_g4_ParamLimits

0xacb6,	// (0x00017f6c) postcard_pane_g4

0x365d,	// (0x00010913) postcard_pane_g5_ParamLimits

0x365d,	// (0x00010913) postcard_pane_g5

0x3672,	// (0x00010928) postcard_pane_g6_ParamLimits

0x3672,	// (0x00010928) postcard_pane_g6

0xaca8,	// (0x00017f5e) postcard_pane_g7_ParamLimits

0xaca8,	// (0x00017f5e) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0001c7a9) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0001c7a9) postcard_pane_g

0x3686,	// (0x0001093c) main_mp2_pane_g1_ParamLimits

0x3686,	// (0x0001093c) main_mp2_pane_g1

0x3692,	// (0x00010948) main_mp2_pane_g2_ParamLimits

0x3692,	// (0x00010948) main_mp2_pane_g2

0x369e,	// (0x00010954) main_mp2_pane_g3_ParamLimits

0x369e,	// (0x00010954) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0001c7b8) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0001c7b8) main_mp2_pane_g

0x36aa,	// (0x00010960) main_mp2_pane_t1_ParamLimits

0x36aa,	// (0x00010960) main_mp2_pane_t1

0x36bf,	// (0x00010975) main_mp2_pane_t2_ParamLimits

0x36bf,	// (0x00010975) main_mp2_pane_t2

0x36d1,	// (0x00010987) main_mp2_pane_t3_ParamLimits

0x36d1,	// (0x00010987) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0001c7bf) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0001c7bf) main_mp2_pane_t

0xacc4,	// (0x00017f7a) pec_content_pane_ParamLimits

0xacc4,	// (0x00017f7a) pec_content_pane

0xa211,	// (0x000174c7) scroll_pane_cp015

0xacd6,	// (0x00017f8c) pec_attribute_pane_ParamLimits

0xacd6,	// (0x00017f8c) pec_attribute_pane

0x36e3,	// (0x00010999) pec_content_pane_g1_ParamLimits

0x36e3,	// (0x00010999) pec_content_pane_g1

0xace6,	// (0x00017f9c) pec_content_pane_t1_ParamLimits

0xace6,	// (0x00017f9c) pec_content_pane_t1

0xacf8,	// (0x00017fae) pec_content_pane_t2_ParamLimits

0xacf8,	// (0x00017fae) pec_content_pane_t2

0x0001,

0xf510,	// (0x0001c7c6) pec_content_pane_t_ParamLimits

0xf510,	// (0x0001c7c6) pec_content_pane_t

0x36f1,	// (0x000109a7) list_single_graphic_pane_cp01_ParamLimits

0x36f1,	// (0x000109a7) list_single_graphic_pane_cp01

0x9ba6,	// (0x00016e5c) bg_popup_sub_pane_cp04

0xad0a,	// (0x00017fc0) popup_mup_playback_window_g1

0xad16,	// (0x00017fcc) popup_mup_playback_window_t1

0xad2b,	// (0x00017fe1) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0001c7cb) popup_mup_playback_window_t

0xad62,	// (0x00018018) main_image_pane_g1_ParamLimits

0xad62,	// (0x00018018) main_image_pane_g1

0xada5,	// (0x0001805b) scroll_pane_cp018_ParamLimits

0xada5,	// (0x0001805b) scroll_pane_cp018

0xadbd,	// (0x00018073) scroll_pane_cp016_ParamLimits

0xadbd,	// (0x00018073) scroll_pane_cp016

0x37c1,	// (0x00010a77) smil2_image_pane_ParamLimits

0x37c1,	// (0x00010a77) smil2_image_pane

0x37f5,	// (0x00010aab) smil2_root_pane_ParamLimits

0x37f5,	// (0x00010aab) smil2_root_pane

0x382d,	// (0x00010ae3) smil2_text_pane_ParamLimits

0x382d,	// (0x00010ae3) smil2_text_pane

0x994b,	// (0x00016c01) bg_list_pane_cp06

0xadf9,	// (0x000180af) grid_radio_pane

0x994b,	// (0x00016c01) bg_popup_window_pane_cp06

0xae01,	// (0x000180b7) main_fmradio_pane_t1

0xa7f6,	// (0x00017aac) heading_pane_cp04

0xae0f,	// (0x000180c5) main_fmradio_pane_t2

0xbde7,	// (0x0001909d) popup_cale_lunar_info_window_g1

0xae1d,	// (0x000180d3) main_fmradio_pane_t3

0xbdef,	// (0x000190a5) popup_cale_lunar_info_window_g2

0xae2b,	// (0x000180e1) main_fmradio_pane_t4

0x0001,

0xae39,	// (0x000180ef) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0001c8a6) popup_cale_lunar_info_window_g

0xf52a,	// (0x0001c7e0) main_fmradio_pane_t

0xae47,	// (0x000180fd) wait_bar_pane_cp03

0xae4f,	// (0x00018105) cell_fmradio_pane_ParamLimits

0xae4f,	// (0x00018105) cell_fmradio_pane

0xaca8,	// (0x00017f5e) cell_fmradio_pane_g1_ParamLimits

0xaca8,	// (0x00017f5e) cell_fmradio_pane_g1

0x994b,	// (0x00016c01) grid_highlight_pane_cp011

0xae62,	// (0x00018118) poc_content_pane_ParamLimits

0xae62,	// (0x00018118) poc_content_pane

0xae74,	// (0x0001812a) scroll_pane_cp019

0x38ad,	// (0x00010b63) popup_call_poc_act_window_ParamLimits

0x38ad,	// (0x00010b63) popup_call_poc_act_window

0x38d1,	// (0x00010b87) popup_call_poc_inact_window_ParamLimits

0x38d1,	// (0x00010b87) popup_call_poc_inact_window

0xf5c7,	// (0x0001c87d) bg_popup_call_poc_act_pane_g

0xbd5f,	// (0x00019015) bg_popup_call_poc_inact_pane_g1

0xbd67,	// (0x0001901d) bg_popup_call_poc_inact_pane_g2

0xae7c,	// (0x00018132) popup_call_poc_act_window_g2

0xbd6f,	// (0x00019025) bg_popup_call_poc_inact_pane_g3

0xbd77,	// (0x0001902d) bg_popup_call_poc_inact_pane_g4

0xbd7f,	// (0x00019035) bg_popup_call_poc_inact_pane_g5

0xae84,	// (0x0001813a) popup_call_poc_act_window_t1_ParamLimits

0xae84,	// (0x0001813a) popup_call_poc_act_window_t1

0xaeac,	// (0x00018162) popup_call_poc_act_window_t2_ParamLimits

0xaeac,	// (0x00018162) popup_call_poc_act_window_t2

0xaed4,	// (0x0001818a) popup_call_poc_act_window_t3_ParamLimits

0xaed4,	// (0x0001818a) popup_call_poc_act_window_t3

0xaefc,	// (0x000181b2) popup_call_poc_act_window_t4_ParamLimits

0xaefc,	// (0x000181b2) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0001c7eb) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0001c7eb) popup_call_poc_act_window_t

0xbd87,	// (0x0001903d) bg_popup_call_poc_inact_pane_g6

0xbd8f,	// (0x00019045) bg_popup_call_poc_inact_pane_g7

0xbd97,	// (0x0001904d) bg_popup_call_poc_inact_pane_g8

0xaf0e,	// (0x000181c4) popup_call_poc_inact_window_g2

0xbd9f,	// (0x00019055) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0001c86a) bg_popup_call_poc_inact_pane_g

0xaf16,	// (0x000181cc) popup_call_poc_inact_window_t1_ParamLimits

0xaf16,	// (0x000181cc) popup_call_poc_inact_window_t1

0xaf2b,	// (0x000181e1) popup_call_poc_inact_window_t2_ParamLimits

0xaf2b,	// (0x000181e1) popup_call_poc_inact_window_t2

0xaf40,	// (0x000181f6) popup_call_poc_inact_window_t3_ParamLimits

0xaf40,	// (0x000181f6) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0001c7f4) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0001c7f4) popup_call_poc_inact_window_t

0xbf57,	// (0x0001920d) context_pane_ParamLimits

0x40fb,	// (0x000113b1) signal_pane_ParamLimits

0xaa73,	// (0x00017d29) main_call2_pane

0xbf45,	// (0x000191fb) popup_phob_thumbnail2_window_ParamLimits

0xbf45,	// (0x000191fb) popup_phob_thumbnail2_window

0xac58,	// (0x00017f0e) aid_hotspot_pointer_arrow_pane

0xac60,	// (0x00017f16) aid_hotspot_pointer_hand_pane

0x3c1f,	// (0x00010ed5) phob_pre_status_pane_g5

0x1ba4,	// (0x0000ee5a) cams_zoom_pane_ParamLimits

0x1bb3,	// (0x0000ee69) image_vga_pane_ParamLimits

0x1bcd,	// (0x0000ee83) main_camera_pane_g1_ParamLimits

0x1bdf,	// (0x0000ee95) main_camera_pane_g2_ParamLimits

0x1bf1,	// (0x0000eea7) main_camera_pane_g3_ParamLimits

0x1c03,	// (0x0000eeb9) main_camera_pane_g4_ParamLimits

0x1c15,	// (0x0000eecb) main_camera_pane_g5_ParamLimits

0x1c27,	// (0x0000eedd) main_camera_pane_g6_ParamLimits

0x1c39,	// (0x0000eeef) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0001c4f3) main_camera_pane_g_ParamLimits

0x1c4b,	// (0x0000ef01) main_camera_pane_t1_ParamLimits

0x1c61,	// (0x0000ef17) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0001c504) main_camera_pane_t_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_preview_window_pane_cp01

0xaf55,	// (0x0001820b) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf55,	// (0x0001820b) popup_phob_thumbnail2_window_g1

0x994b,	// (0x00016c01) call2_cli_visual_pane

0x3905,	// (0x00010bbb) popup_call2_audio_conf_window_ParamLimits

0x3905,	// (0x00010bbb) popup_call2_audio_conf_window

0x3925,	// (0x00010bdb) popup_call2_audio_first_window_ParamLimits

0x3925,	// (0x00010bdb) popup_call2_audio_first_window

0x39bb,	// (0x00010c71) popup_call2_audio_in_window_ParamLimits

0x39bb,	// (0x00010c71) popup_call2_audio_in_window

0x3a03,	// (0x00010cb9) popup_call2_audio_out_window_ParamLimits

0x3a03,	// (0x00010cb9) popup_call2_audio_out_window

0x3a6d,	// (0x00010d23) popup_call2_audio_second_window_ParamLimits

0x3a6d,	// (0x00010d23) popup_call2_audio_second_window

0x3ad3,	// (0x00010d89) popup_call2_audio_wait_window_ParamLimits

0x3ad3,	// (0x00010d89) popup_call2_audio_wait_window

0x994b,	// (0x00016c01) bg_popup_call2_act_pane_cp03

0x9b88,	// (0x00016e3e) list_conf_pane_cp

0xaf61,	// (0x00018217) popup_call2_audio_conf_window_t1

0xaf6f,	// (0x00018225) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf6f,	// (0x00018225) list_single_graphic_popup_conf2_pane

0xa889,	// (0x00017b3f) list_highlight_pane_cp04

0xaf82,	// (0x00018238) list_single_graphic_popup_conf2_pane_g1

0xa89a,	// (0x00017b50) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0001c7fb) list_single_graphic_popup_conf2_pane_g

0xaf8c,	// (0x00018242) list_single_graphic_popup_conf2_pane_t1

0xaf9a,	// (0x00018250) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf9a,	// (0x00018250) bg_popup_call2_act_pane_cp01

0xb024,	// (0x000182da) call_type_pane_cp05_ParamLimits

0xb024,	// (0x000182da) call_type_pane_cp05

0xb078,	// (0x0001832e) popup_call2_audio_second_window_g1_ParamLimits

0xb078,	// (0x0001832e) popup_call2_audio_second_window_g1

0xb0cc,	// (0x00018382) popup_call2_audio_second_window_g2_ParamLimits

0xb0cc,	// (0x00018382) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0001c800) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0001c800) popup_call2_audio_second_window_g

0xb131,	// (0x000183e7) popup_call2_audio_second_window_t1_ParamLimits

0xb131,	// (0x000183e7) popup_call2_audio_second_window_t1

0xb1ec,	// (0x000184a2) popup_call2_audio_second_window_t2_ParamLimits

0xb1ec,	// (0x000184a2) popup_call2_audio_second_window_t2

0xb23f,	// (0x000184f5) popup_call2_audio_second_window_t3_ParamLimits

0xb23f,	// (0x000184f5) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0001c807) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0001c807) popup_call2_audio_second_window_t

0x994b,	// (0x00016c01) bg_popup_call2_in_pane_cp02

0x9955,	// (0x00016c0b) call_type_pane_cp04

0x995d,	// (0x00016c13) popup_call2_audio_wait_window_g1

0x9965,	// (0x00016c1b) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c3e0) popup_call2_audio_wait_window_g

0x996d,	// (0x00016c23) popup_call2_audio_wait_window_t3

0xb332,	// (0x000185e8) bg_popup_call2_act_pane_ParamLimits

0xb332,	// (0x000185e8) bg_popup_call2_act_pane

0xb3f2,	// (0x000186a8) call_type_pane_cp03_ParamLimits

0xb3f2,	// (0x000186a8) call_type_pane_cp03

0xb456,	// (0x0001870c) popup_call2_audio_first_window_g1_ParamLimits

0xb456,	// (0x0001870c) popup_call2_audio_first_window_g1

0xb4c6,	// (0x0001877c) popup_call2_audio_first_window_g2_ParamLimits

0xb4c6,	// (0x0001877c) popup_call2_audio_first_window_g2

0xab44,	// (0x00017dfa) popup_call2_audio_first_window_g3_ParamLimits

0xab44,	// (0x00017dfa) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0001c810) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0001c810) popup_call2_audio_first_window_g

0xb5a4,	// (0x0001885a) popup_call2_audio_first_window_t1_ParamLimits

0xb5a4,	// (0x0001885a) popup_call2_audio_first_window_t1

0xb6a7,	// (0x0001895d) popup_call2_audio_first_window_t4_ParamLimits

0xb6a7,	// (0x0001895d) popup_call2_audio_first_window_t4

0xb78a,	// (0x00018a40) popup_call2_audio_first_window_t5_ParamLimits

0xb78a,	// (0x00018a40) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0001c81b) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0001c81b) popup_call2_audio_first_window_t

0x9b9e,	// (0x00016e54) bg_popup_call2_act_pane_g1

0xbdf7,	// (0x000190ad) popup_cale_lunar_info_window_t1

0xbe05,	// (0x000190bb) popup_cale_lunar_info_window_t2

0xbe13,	// (0x000190c9) popup_cale_lunar_info_window_t3

0x994b,	// (0x00016c01) bg_popup_call2_bubble_pane

0xb88b,	// (0x00018b41) bg_popup_call2_in_pane_cp01_ParamLimits

0xb88b,	// (0x00018b41) bg_popup_call2_in_pane_cp01

0x9627,	// (0x000168dd) call_type_pane_cp02

0xb8d3,	// (0x00018b89) popup_call2_audio_out_window_g1_ParamLimits

0xb8d3,	// (0x00018b89) popup_call2_audio_out_window_g1

0xb8ff,	// (0x00018bb5) popup_call2_audio_out_window_g2_ParamLimits

0xb8ff,	// (0x00018bb5) popup_call2_audio_out_window_g2

0xb927,	// (0x00018bdd) popup_call2_audio_out_window_g3_ParamLimits

0xb927,	// (0x00018bdd) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0001c824) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0001c824) popup_call2_audio_out_window_g

0xb962,	// (0x00018c18) popup_call2_audio_out_window_t1_ParamLimits

0xb962,	// (0x00018c18) popup_call2_audio_out_window_t1

0xb9c1,	// (0x00018c77) popup_call2_audio_out_window_t2_ParamLimits

0xb9c1,	// (0x00018c77) popup_call2_audio_out_window_t2

0xba15,	// (0x00018ccb) popup_call2_audio_out_window_t3_ParamLimits

0xba15,	// (0x00018ccb) popup_call2_audio_out_window_t3

0xba2b,	// (0x00018ce1) popup_call2_audio_out_window_t4_ParamLimits

0xba2b,	// (0x00018ce1) popup_call2_audio_out_window_t4

0xba41,	// (0x00018cf7) popup_call2_audio_out_window_t5_ParamLimits

0xba41,	// (0x00018cf7) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0001c82d) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0001c82d) popup_call2_audio_out_window_t

0xbaa5,	// (0x00018d5b) bg_popup_call2_in_pane_ParamLimits

0xbaa5,	// (0x00018d5b) bg_popup_call2_in_pane

0xbb01,	// (0x00018db7) popup_call2_audio_in_window_g1_ParamLimits

0xbb01,	// (0x00018db7) popup_call2_audio_in_window_g1

0xbb39,	// (0x00018def) popup_call2_audio_in_window_g2_ParamLimits

0xbb39,	// (0x00018def) popup_call2_audio_in_window_g2

0xbb71,	// (0x00018e27) popup_call2_audio_in_window_g3_ParamLimits

0xbb71,	// (0x00018e27) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0001c83a) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0001c83a) popup_call2_audio_in_window_g

0xbbc9,	// (0x00018e7f) popup_call2_audio_in_window_t1_ParamLimits

0xbbc9,	// (0x00018e7f) popup_call2_audio_in_window_t1

0xbc49,	// (0x00018eff) popup_call2_audio_in_window_t2_ParamLimits

0xbc49,	// (0x00018eff) popup_call2_audio_in_window_t2

0xbcc9,	// (0x00018f7f) popup_call2_audio_in_window_t3_ParamLimits

0xbcc9,	// (0x00018f7f) popup_call2_audio_in_window_t3

0xbce3,	// (0x00018f99) popup_call2_audio_in_window_t4_ParamLimits

0xbce3,	// (0x00018f99) popup_call2_audio_in_window_t4

0xbcf5,	// (0x00018fab) popup_call2_audio_in_window_t5_ParamLimits

0xbcf5,	// (0x00018fab) popup_call2_audio_in_window_t5

0xbd0a,	// (0x00018fc0) popup_call2_audio_in_window_t6_ParamLimits

0xbd0a,	// (0x00018fc0) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0001c843) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0001c843) popup_call2_audio_in_window_t

0x9b9e,	// (0x00016e54) bg_popup_call2_in_pane_g1

0xbe21,	// (0x000190d7) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0001c8ab) popup_cale_lunar_info_window_t

0x9ba6,	// (0x00016e5c) bg_popup_call2_rect_pane_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_call2_rect_pane

0x994b,	// (0x00016c01) call2_cli_visual_graphic_pane

0x994b,	// (0x00016c01) call2_cli_visual_text_pane

0xbff7,	// (0x000192ad) smil_status_volume_pane_g3

0x0002,

0x9d50,	// (0x00017006) call2_cli_visual_graphic_pane_g1

0x9d50,	// (0x00017006) call2_cli_visual_graphic_pane_g2

0x9d50,	// (0x00017006) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001c850) call2_cli_visual_graphic_pane_g

0xbd1f,	// (0x00018fd5) bg_popup_call2_rect_pane_g1

0x9df8,	// (0x000170ae) bg_popup_call2_rect_pane_g2

0xbd27,	// (0x00018fdd) bg_popup_call2_rect_pane_g3

0xbd2f,	// (0x00018fe5) bg_popup_call2_rect_pane_g4

0xbd37,	// (0x00018fed) bg_popup_call2_rect_pane_g5

0xbd3f,	// (0x00018ff5) bg_popup_call2_rect_pane_g6

0xbd47,	// (0x00018ffd) bg_popup_call2_rect_pane_g7

0xbd4f,	// (0x00019005) bg_popup_call2_rect_pane_g8

0xbd57,	// (0x0001900d) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001c857) bg_popup_call2_rect_pane_g

0xbd5f,	// (0x00019015) bg_popup_call2_bubble_pane_g1

0xbd67,	// (0x0001901d) bg_popup_call2_bubble_pane_g2

0xbd6f,	// (0x00019025) bg_popup_call2_bubble_pane_g3

0xbd77,	// (0x0001902d) bg_popup_call2_bubble_pane_g4

0xbd7f,	// (0x00019035) bg_popup_call2_bubble_pane_g5

0xbd87,	// (0x0001903d) bg_popup_call2_bubble_pane_g6

0xbd8f,	// (0x00019045) bg_popup_call2_bubble_pane_g7

0xbd97,	// (0x0001904d) bg_popup_call2_bubble_pane_g8

0xbd9f,	// (0x00019055) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0001c86a) bg_popup_call2_bubble_pane_g

0x1815,	// (0x0000eacb) aid_cale_week_size_cell_pane

0x1c79,	// (0x0000ef2f) aid_cams_cif_uncrop_pane_ParamLimits

0x1c79,	// (0x0000ef2f) aid_cams_cif_uncrop_pane

0x1e36,	// (0x0000f0ec) aid_cams_size_cell_ParamLimits

0x1e36,	// (0x0000f0ec) aid_cams_size_cell

0x1e4a,	// (0x0000f100) grid_cams_pane_ParamLimits

0x1e64,	// (0x0000f11a) linegrid_cams_pane_ParamLimits

0x1f7d,	// (0x0000f233) call_video_pane_t1

0x1f8f,	// (0x0000f245) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0001c557) call_video_pane_t

0x2335,	// (0x0000f5eb) aid_cale_month_size_cell_pane_ParamLimits

0x2335,	// (0x0000f5eb) aid_cale_month_size_cell_pane

0xf63e,	// (0x0001c8f4) smil_status_volume_pane_g

0xc004,	// (0x000192ba) volume_smil_pane_ParamLimits

0x94ce,	// (0x00016784) aid_popup2_width_pane

0x1797,	// (0x0000ea4d) cell_qdial_pane_g4_ParamLimits

0x1797,	// (0x0000ea4d) cell_qdial_pane_g4

0x2e57,	// (0x0001010d) aid_blid_cardinal_pane_ParamLimits

0x2e63,	// (0x00010119) aid_blid_destination_pane_ParamLimits

0x2e63,	// (0x00010119) aid_blid_destination_pane

0x9ba6,	// (0x00016e5c) bg_popup_call_poc_act_pane_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_call_poc_act_pane

0x9ba6,	// (0x00016e5c) bg_popup_call_poc_inact_pane_ParamLimits

0x9ba6,	// (0x00016e5c) bg_popup_call_poc_inact_pane

0xbda7,	// (0x0001905d) bg_popup_call_poc_act_pane_g1

0xbdaf,	// (0x00019065) bg_popup_call_poc_act_pane_g2

0xbdb7,	// (0x0001906d) bg_popup_call_poc_act_pane_g3

0xbd77,	// (0x0001902d) bg_popup_call_poc_act_pane_g4

0xbd7f,	// (0x00019035) bg_popup_call_poc_act_pane_g5

0xbdbf,	// (0x00019075) bg_popup_call_poc_act_pane_g6

0xbd8f,	// (0x00019045) bg_popup_call_poc_act_pane_g7

0xbdc7,	// (0x0001907d) bg_popup_call_poc_act_pane_g8

0x994b,	// (0x00016c01) main_usb_pane

0xbf20,	// (0x000191d6) popup_cale_lunar_info_window

0x21cc,	// (0x0000f482) im_reading_pane_t1_ParamLimits

0xa169,	// (0x0001741f) list_im_pane_ParamLimits

0xa17a,	// (0x00017430) scroll_pane_cp07_ParamLimits

0x994b,	// (0x00016c01) grid_highlight_pane_cp012

0x9ba6,	// (0x00016e5c) mup_scale_pane_ParamLimits

0xaca8,	// (0x00017f5e) main_usb_pane_g1_ParamLimits

0xaca8,	// (0x00017f5e) main_usb_pane_g1

0x3b32,	// (0x00010de8) main_usb_pane_g2_ParamLimits

0x3b32,	// (0x00010de8) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0001c894) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0001c894) main_usb_pane_g

0x3b48,	// (0x00010dfe) main_usb_pane_t1_ParamLimits

0x3b48,	// (0x00010dfe) main_usb_pane_t1

0x3b5a,	// (0x00010e10) main_usb_pane_t2_ParamLimits

0x3b5a,	// (0x00010e10) main_usb_pane_t2

0x3b6c,	// (0x00010e22) main_usb_pane_t3_ParamLimits

0x3b6c,	// (0x00010e22) main_usb_pane_t3

0x3b7e,	// (0x00010e34) main_usb_pane_t4_ParamLimits

0x3b7e,	// (0x00010e34) main_usb_pane_t4

0x3b90,	// (0x00010e46) main_usb_pane_t5_ParamLimits

0x3b90,	// (0x00010e46) main_usb_pane_t5

0x3ba2,	// (0x00010e58) main_usb_pane_t6_ParamLimits

0x3ba2,	// (0x00010e58) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0001c899) main_usb_pane_t_ParamLimits

0x2dfc,	// (0x000100b2) aid_text_placing

0x2e05,	// (0x000100bb) main_location2_pane_t1_ParamLimits

0x2e19,	// (0x000100cf) main_location2_pane_t2_ParamLimits

0x2e2d,	// (0x000100e3) main_location2_pane_t3_ParamLimits

0x2e43,	// (0x000100f9) main_location2_pane_t4_ParamLimits

0x2e43,	// (0x000100f9) main_location2_pane_t4

0xf402,	// (0x0001c6b8) main_location2_pane_t_ParamLimits

0x9bea,	// (0x00016ea0) find_pinb_pane_g2_ParamLimits

0x9bea,	// (0x00016ea0) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0001c406) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0001c406) find_pinb_pane_g

0x9bf6,	// (0x00016eac) find_pinb_pane_t1_ParamLimits

0x9c08,	// (0x00016ebe) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0001c40b) find_pinb_pane_t_ParamLimits

0x994b,	// (0x00016c01) main_call3_pane

0x262d,	// (0x0000f8e3) cale_month_day_heading_pane_t1_ParamLimits

0x268b,	// (0x0000f941) cale_month_day_heading_pane_t2_ParamLimits

0x26f0,	// (0x0000f9a6) cale_month_day_heading_pane_t3_ParamLimits

0x2755,	// (0x0000fa0b) cale_month_day_heading_pane_t4_ParamLimits

0x27ba,	// (0x0000fa70) cale_month_day_heading_pane_t5_ParamLimits

0x281f,	// (0x0000fad5) cale_month_day_heading_pane_t6_ParamLimits

0x2884,	// (0x0000fb3a) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0001c58f) cale_month_day_heading_pane_t_ParamLimits

0xa3f0,	// (0x000176a6) smil_status_volume_pane

0x3621,	// (0x000108d7) postcard_address_pane_ParamLimits

0x3621,	// (0x000108d7) postcard_address_pane

0x3633,	// (0x000108e9) postcard_message_pane_ParamLimits

0x3633,	// (0x000108e9) postcard_message_pane

0x3b0d,	// (0x00010dc3) call2_cli_visual_pane_t1_ParamLimits

0x3b0d,	// (0x00010dc3) call2_cli_visual_pane_t1

0x4329,	// (0x000115df) postcard_message_pane_t1_ParamLimits

0x4329,	// (0x000115df) postcard_message_pane_t1

0x4312,	// (0x000115c8) postcard_address_pane_t1_ParamLimits

0x4312,	// (0x000115c8) postcard_address_pane_t1

0x42fe,	// (0x000115b4) popup_call3_audio_in_window_ParamLimits

0x42fe,	// (0x000115b4) popup_call3_audio_in_window

0x418d,	// (0x00011443) bg_popup_call3_in_pane_ParamLimits

0x418d,	// (0x00011443) bg_popup_call3_in_pane

0x41ff,	// (0x000114b5) popup_call3_audio_in_window_g1_ParamLimits

0x41ff,	// (0x000114b5) popup_call3_audio_in_window_g1

0x421f,	// (0x000114d5) popup_call3_audio_in_window_g2_ParamLimits

0x421f,	// (0x000114d5) popup_call3_audio_in_window_g2

0x423f,	// (0x000114f5) popup_call3_audio_in_window_g3_ParamLimits

0x423f,	// (0x000114f5) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0001c8fb) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0001c8fb) popup_call3_audio_in_window_g

0x4270,	// (0x00011526) popup_call3_audio_in_window_t1_ParamLimits

0x4270,	// (0x00011526) popup_call3_audio_in_window_t1

0x42ae,	// (0x00011564) popup_call3_audio_in_window_t2_ParamLimits

0x42ae,	// (0x00011564) popup_call3_audio_in_window_t2

0x42ec,	// (0x000115a2) popup_call3_audio_in_window_t3_ParamLimits

0x42ec,	// (0x000115a2) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0001c904) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0001c904) popup_call3_audio_in_window_t

0xaa73,	// (0x00017d29) bg_popup_call3_rect_pane

0xbd1f,	// (0x00018fd5) bg_popup_call3_rect_pane_g1

0x9df8,	// (0x000170ae) bg_popup_call3_rect_pane_g2

0xbd27,	// (0x00018fdd) bg_popup_call3_rect_pane_g3

0xbd2f,	// (0x00018fe5) bg_popup_call3_rect_pane_g4

0xbd37,	// (0x00018fed) bg_popup_call3_rect_pane_g5

0xbd3f,	// (0x00018ff5) bg_popup_call3_rect_pane_g6

0xbd47,	// (0x00018ffd) bg_popup_call3_rect_pane_g7

0x321f,	// (0x000104d5) mup_visualizer_osc_pane

0xab52,	// (0x00017e08) mup_visualizer_spec_pane

0x41bd,	// (0x00011473) call3_video_qcif_pane_ParamLimits

0x41bd,	// (0x00011473) call3_video_qcif_pane

0x41ce,	// (0x00011484) call3_video_qcif_uncrop_pane_ParamLimits

0x41ce,	// (0x00011484) call3_video_qcif_uncrop_pane

0x41da,	// (0x00011490) call3_video_subqcif_pane_ParamLimits

0x41da,	// (0x00011490) call3_video_subqcif_pane

0x41ee,	// (0x000114a4) call3_video_subqcif_uncrop_pane_ParamLimits

0x41ee,	// (0x000114a4) call3_video_subqcif_uncrop_pane

0x425f,	// (0x00011515) popup_call3_audio_in_window_g4_ParamLimits

0x425f,	// (0x00011515) popup_call3_audio_in_window_g4

0x417c,	// (0x00011432) mup_spec_half_pane

0x4185,	// (0x0001143b) mup_spec_half_pane_cp

0xbfb7,	// (0x0001926d) mup_osc_middle_pane

0xbfc0,	// (0x00019276) mup_visualizer_osc_pane_g1

0x415c,	// (0x00011412) mup_spec_bar_pane_ParamLimits

0x415c,	// (0x00011412) mup_spec_bar_pane

0xbfa4,	// (0x0001925a) mup_spec_bar_pane_g1

0xbfae,	// (0x00019264) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001c8ef) mup_spec_bar_pane_g

0x1815,	// (0x0000eacb) aid_cale_week_size_cell_pane_ParamLimits

0x1828,	// (0x0000eade) bg_cale_heading_pane_ParamLimits

0x9e99,	// (0x0001714f) bg_cale_pane_cp01_ParamLimits

0x1840,	// (0x0000eaf6) cale_week_corner_pane_ParamLimits

0x1851,	// (0x0000eb07) cale_week_day_heading_pane_ParamLimits

0x1869,	// (0x0000eb1f) cale_week_scroll_pane_g1_ParamLimits

0x187e,	// (0x0000eb34) cale_week_scroll_pane_g2_ParamLimits

0x188f,	// (0x0000eb45) cale_week_scroll_pane_g3_ParamLimits

0x18a0,	// (0x0000eb56) cale_week_scroll_pane_g4_ParamLimits

0x18b1,	// (0x0000eb67) cale_week_scroll_pane_g5_ParamLimits

0x18c2,	// (0x0000eb78) cale_week_scroll_pane_g6_ParamLimits

0x18d3,	// (0x0000eb89) cale_week_scroll_pane_g7_ParamLimits

0x18e4,	// (0x0000eb9a) cale_week_scroll_pane_g8_ParamLimits

0x18f5,	// (0x0000ebab) cale_week_scroll_pane_g9_ParamLimits

0x1906,	// (0x0000ebbc) cale_week_scroll_pane_g10_ParamLimits

0x1917,	// (0x0000ebcd) cale_week_scroll_pane_g11_ParamLimits

0x1928,	// (0x0000ebde) cale_week_scroll_pane_g12_ParamLimits

0x1939,	// (0x0000ebef) cale_week_scroll_pane_g13_ParamLimits

0x194a,	// (0x0000ec00) cale_week_scroll_pane_g14_ParamLimits

0x195b,	// (0x0000ec11) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0001c497) cale_week_scroll_pane_g_ParamLimits

0x196c,	// (0x0000ec22) cale_week_time_pane_ParamLimits

0x197d,	// (0x0000ec33) grid_cale_week_pane_ParamLimits

0x9eb2,	// (0x00017168) listscroll_cale_week_pane_t1

0x1990,	// (0x0000ec46) scroll_pane_cp08_ParamLimits

0x2376,	// (0x0000f62c) cale_month_corner_pane_ParamLimits

0xa390,	// (0x00017646) cale_month_pane_t1

0x25f6,	// (0x0000f8ac) cale_month_week_pane_ParamLimits

0x2c63,	// (0x0000ff19) popup_call_status_window_g1_ParamLimits

0x2c77,	// (0x0000ff2d) popup_call_status_window_g2_ParamLimits

0x2c8b,	// (0x0000ff41) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0001c63f) popup_call_status_window_g_ParamLimits

0xa777,	// (0x00017a2d) aid_call2_pane

0x3489,	// (0x0001073f) msg_header_pane_g1

0x3621,	// (0x000108d7) postcard_address2_pane_ParamLimits

0x3621,	// (0x000108d7) postcard_address2_pane

0x3633,	// (0x000108e9) postcard_message2_pane_ParamLimits

0x3633,	// (0x000108e9) postcard_message2_pane

0x4109,	// (0x000113bf) message2_row_pane_ParamLimits

0x4109,	// (0x000113bf) message2_row_pane

0x4128,	// (0x000113de) address2_row_pane_ParamLimits

0x4128,	// (0x000113de) address2_row_pane

0xbf72,	// (0x00019228) postcard_message2_row_pane_g1

0xbf7a,	// (0x00019230) postcard_message2_row_pane_t1

0xbf72,	// (0x00019228) address2_row_pane_g1

0xbf7a,	// (0x00019230) address2_row_pane_t1

0x9f16,	// (0x000171cc) aid_size_cell_vorec

0x994b,	// (0x00016c01) main_rss_pane

0x413b,	// (0x000113f1) rss_list_single_pane_ParamLimits

0x413b,	// (0x000113f1) rss_list_single_pane

0xbf88,	// (0x0001923e) rss_list_single_pane_t1

0xbf96,	// (0x0001924c) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0001c8ea) rss_list_single_pane_t

0x994b,	// (0x00016c01) main_camera2_pane

0x994b,	// (0x00016c01) main_video2_pane

0x43a2,	// (0x00011658) cams_zoom_pane_cp2_ParamLimits

0x43a2,	// (0x00011658) cams_zoom_pane_cp2

0x43c2,	// (0x00011678) image2_vga_pane_ParamLimits

0x43c2,	// (0x00011678) image2_vga_pane

0x4413,	// (0x000116c9) main_camera2_pane_g1_ParamLimits

0x4413,	// (0x000116c9) main_camera2_pane_g1

0x4433,	// (0x000116e9) main_camera2_pane_g2_ParamLimits

0x4433,	// (0x000116e9) main_camera2_pane_g2

0x4453,	// (0x00011709) main_camera2_pane_g3_ParamLimits

0x4453,	// (0x00011709) main_camera2_pane_g3

0x4473,	// (0x00011729) main_camera2_pane_g4_ParamLimits

0x4473,	// (0x00011729) main_camera2_pane_g4

0x4493,	// (0x00011749) main_camera2_pane_g5_ParamLimits

0x4493,	// (0x00011749) main_camera2_pane_g5

0x44b3,	// (0x00011769) main_camera2_pane_g6_ParamLimits

0x44b3,	// (0x00011769) main_camera2_pane_g6

0x44d3,	// (0x00011789) main_camera2_pane_g7_ParamLimits

0x44d3,	// (0x00011789) main_camera2_pane_g7

0x44f3,	// (0x000117a9) main_camera2_pane_g8_ParamLimits

0x44f3,	// (0x000117a9) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0001c90b) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0001c90b) main_camera2_pane_g

0x4533,	// (0x000117e9) main_camera2_pane_t1_ParamLimits

0x4533,	// (0x000117e9) main_camera2_pane_t1

0x4568,	// (0x0001181e) main_camera2_pane_t2_ParamLimits

0x4568,	// (0x0001181e) main_camera2_pane_t2

0x458e,	// (0x00011844) main_camera2_pane_t3_ParamLimits

0x458e,	// (0x00011844) main_camera2_pane_t3

0x45ec,	// (0x000118a2) main_camera2_pane_t4_ParamLimits

0x45ec,	// (0x000118a2) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0001c91e) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0001c91e) main_camera2_pane_t

0x467e,	// (0x00011934) cams_zoom_pane_cp4_ParamLimits

0x467e,	// (0x00011934) cams_zoom_pane_cp4

0x4694,	// (0x0001194a) image2_cif_pane_ParamLimits

0x4694,	// (0x0001194a) image2_cif_pane

0x46bf,	// (0x00011975) image2_subqcif_pane_ParamLimits

0x46bf,	// (0x00011975) image2_subqcif_pane

0x46d9,	// (0x0001198f) main_video2_pane_g1_ParamLimits

0x46d9,	// (0x0001198f) main_video2_pane_g1

0x46f3,	// (0x000119a9) main_video2_pane_g2_ParamLimits

0x46f3,	// (0x000119a9) main_video2_pane_g2

0x4709,	// (0x000119bf) main_video2_pane_g3_ParamLimits

0x4709,	// (0x000119bf) main_video2_pane_g3

0x471f,	// (0x000119d5) main_video2_pane_g4_ParamLimits

0x471f,	// (0x000119d5) main_video2_pane_g4

0x4735,	// (0x000119eb) main_video2_pane_g5_ParamLimits

0x4735,	// (0x000119eb) main_video2_pane_g5

0x474b,	// (0x00011a01) main_video2_pane_g6_ParamLimits

0x474b,	// (0x00011a01) main_video2_pane_g6

0x0005,

0xf677,	// (0x0001c92d) main_video2_pane_g_ParamLimits

0xf677,	// (0x0001c92d) main_video2_pane_g

0x4765,	// (0x00011a1b) main_video2_pane_t1_ParamLimits

0x4765,	// (0x00011a1b) main_video2_pane_t1

0x4789,	// (0x00011a3f) main_video2_pane_t2_ParamLimits

0x4789,	// (0x00011a3f) main_video2_pane_t2

0x47d7,	// (0x00011a8d) main_video2_pane_t3_ParamLimits

0x47d7,	// (0x00011a8d) main_video2_pane_t3

0x0002,

0xf684,	// (0x0001c93a) main_video2_pane_t_ParamLimits

0xf684,	// (0x0001c93a) main_video2_pane_t

0x3c5f,	// (0x00010f15) call_muted_g2

0x0001,

0xf626,	// (0x0001c8dc) call_muted_g

0x994b,	// (0x00016c01) main_mup2_pane

0x481f,	// (0x00011ad5) main_mup2_pane_g1_ParamLimits

0x481f,	// (0x00011ad5) main_mup2_pane_g1

0x482b,	// (0x00011ae1) main_mup2_pane_g2_ParamLimits

0x482b,	// (0x00011ae1) main_mup2_pane_g2

0xc128,	// (0x000193de) main_mup_pane_g13_cp1

0xc130,	// (0x000193e6) mup_volume_pane_cp1

0x4847,	// (0x00011afd) main_mup2_pane_g4_ParamLimits

0x4847,	// (0x00011afd) main_mup2_pane_g4

0x4859,	// (0x00011b0f) main_mup2_pane_g5_ParamLimits

0x4859,	// (0x00011b0f) main_mup2_pane_g5

0x486b,	// (0x00011b21) main_mup2_pane_g6_ParamLimits

0x486b,	// (0x00011b21) main_mup2_pane_g6

0x487d,	// (0x00011b33) main_mup2_pane_g7_ParamLimits

0x487d,	// (0x00011b33) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0001c941) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0001c941) main_mup2_pane_g

0x4895,	// (0x00011b4b) main_mup2_pane_t1_ParamLimits

0x4895,	// (0x00011b4b) main_mup2_pane_t1

0x48ab,	// (0x00011b61) main_mup2_pane_t2_ParamLimits

0x48ab,	// (0x00011b61) main_mup2_pane_t2

0x48c1,	// (0x00011b77) main_mup2_pane_t3_ParamLimits

0x48c1,	// (0x00011b77) main_mup2_pane_t3

0x48d7,	// (0x00011b8d) main_mup2_pane_t4_ParamLimits

0x48d7,	// (0x00011b8d) main_mup2_pane_t4

0x48ef,	// (0x00011ba5) main_mup2_pane_t5_ParamLimits

0x48ef,	// (0x00011ba5) main_mup2_pane_t5

0x4907,	// (0x00011bbd) main_mup2_pane_t6_ParamLimits

0x4907,	// (0x00011bbd) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0001c950) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0001c950) main_mup2_pane_t

0x4937,	// (0x00011bed) mup2_visualizer_pane_ParamLimits

0x4937,	// (0x00011bed) mup2_visualizer_pane

0x4965,	// (0x00011c1b) mup_progress_pane_cp_ParamLimits

0x4965,	// (0x00011c1b) mup_progress_pane_cp

0xc10a,	// (0x000193c0) mup_volume_pane_cp_ParamLimits

0xc10a,	// (0x000193c0) mup_volume_pane_cp

0x4979,	// (0x00011c2f) mup2_visualizer_pane_g1_ParamLimits

0x4979,	// (0x00011c2f) mup2_visualizer_pane_g1

0xc049,	// (0x000192ff) mup2_visualizer_pane_g2_ParamLimits

0xc049,	// (0x000192ff) mup2_visualizer_pane_g2

0x4990,	// (0x00011c46) mup2_visualizer_pane_g3_ParamLimits

0x4990,	// (0x00011c46) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0001c95d) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0001c95d) mup2_visualizer_pane_g

0xadf1,	// (0x000180a7) aid_size_cell_fmradio

0x3e11,	// (0x000110c7) aid_height_parent_landcape

0xa1f8,	// (0x000174ae) wml_content_pane_cp

0xa200,	// (0x000174b6) wml_tabs_pane

0xa209,	// (0x000174bf) popup_wml_miniature_window

0xa211,	// (0x000174c7) scroll_pane_cp021

0xa225,	// (0x000174db) wml_content_pane_comp8

0x994b,	// (0x00016c01) bg_popup_sub_pane_cp05

0xc067,	// (0x0001931d) popup_wml_miniature_window_g1

0xc06f,	// (0x00019325) wml_miniature_view_pane

0x499c,	// (0x00011c52) aid_size_wml_view

0x49a4,	// (0x00011c5a) wml_miniature_view_pane_g1

0x49ad,	// (0x00011c63) wml_miniature_view_pane_g2

0x49b6,	// (0x00011c6c) wml_miniature_view_pane_g3

0x49be,	// (0x00011c74) wml_miniature_view_pane_g4

0x49c6,	// (0x00011c7c) wml_miniature_view_pane_g5

0x49ce,	// (0x00011c84) wml_miniature_view_pane_g6

0x49d6,	// (0x00011c8c) wml_miniature_view_pane_g7

0x49de,	// (0x00011c94) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0001c964) wml_miniature_view_pane_g

0xc077,	// (0x0001932d) background_graphic_ParamLimits

0xc077,	// (0x0001932d) background_graphic

0xc083,	// (0x00019339) wml_tabs_2_pane

0xc08c,	// (0x00019342) wml_tabs_3_pane_ParamLimits

0xc08c,	// (0x00019342) wml_tabs_3_pane

0xc09e,	// (0x00019354) wml_tabs_4_pane_ParamLimits

0xc09e,	// (0x00019354) wml_tabs_4_pane

0xc0b4,	// (0x0001936a) wml_tabs_5_pane_ParamLimits

0xc0b4,	// (0x0001936a) wml_tabs_5_pane

0xc0ce,	// (0x00019384) wml_tabs_pane_g2_ParamLimits

0xc0ce,	// (0x00019384) wml_tabs_pane_g2

0xc0e2,	// (0x00019398) wml_tabs_pane_g3_ParamLimits

0xc0e2,	// (0x00019398) wml_tabs_pane_g3

0x49e6,	// (0x00011c9c) wml_tabs_2_active_pane_ParamLimits

0x49e6,	// (0x00011c9c) wml_tabs_2_active_pane

0x49fa,	// (0x00011cb0) wml_tabs_2_passive_pane_ParamLimits

0x49fa,	// (0x00011cb0) wml_tabs_2_passive_pane

0x4a0e,	// (0x00011cc4) wml_tabs_3_active_pane_cp_ParamLimits

0x4a0e,	// (0x00011cc4) wml_tabs_3_active_pane_cp

0x4a23,	// (0x00011cd9) wml_tabs_3_passive_pane_ParamLimits

0x4a23,	// (0x00011cd9) wml_tabs_3_passive_pane

0x4a36,	// (0x00011cec) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a36,	// (0x00011cec) wml_tabs_3_passive_pane_cp

0x4a4d,	// (0x00011d03) tabs_4_active_pane

0x4a55,	// (0x00011d0b) tabs_4_passive_pane

0x4a5f,	// (0x00011d15) tabs_4_passive_pane_cp

0x4a67,	// (0x00011d1d) tabs_4_passive_pane_cp2

0x3b2a,	// (0x00010de0) aid_height_text

0x31f1,	// (0x000104a7) mup_volume_cont_pane_ParamLimits

0x31f1,	// (0x000104a7) mup_volume_cont_pane

0x147a,	// (0x0000e730) aid_size_cell_pinb

0x9bd6,	// (0x00016e8c) aid_size_list_pinb

0x4951,	// (0x00011c07) mup2_volume_cont_pane_ParamLimits

0x4951,	// (0x00011c07) mup2_volume_cont_pane

0xc0f6,	// (0x000193ac) mup2_volume_cont_pane_g1_ParamLimits

0xc0f6,	// (0x000193ac) mup2_volume_cont_pane_g1

0x1151,	// (0x0000e407) aid_size_cell_touch_ParamLimits

0x1151,	// (0x0000e407) aid_size_cell_touch

0x1369,	// (0x0000e61f) touch_pane_ParamLimits

0x1369,	// (0x0000e61f) touch_pane

0x94bc,	// (0x00016772) main_rss2_pane

0xc138,	// (0x000193ee) listscroll_rss2_pane

0xc141,	// (0x000193f7) rss2_navigation_pane

0xc149,	// (0x000193ff) list_rss2_pane

0xa926,	// (0x00017bdc) scroll_pane_cp22

0xc151,	// (0x00019407) rss2_navigation_pane_g1

0xc15a,	// (0x00019410) rss2_navigation_pane_g2

0xc162,	// (0x00019418) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0001c975) rss2_navigation_pane_g

0xc16a,	// (0x00019420) rss2_navigation_pane_t1

0x4a71,	// (0x00011d27) rss2_list_single_pane_ParamLimits

0x4a71,	// (0x00011d27) rss2_list_single_pane

0xc178,	// (0x0001942e) rss2_list_single_pane_t2

0xc186,	// (0x0001943c) rss2_list_single_pane_t3_ParamLimits

0xc186,	// (0x0001943c) rss2_list_single_pane_t3

0xc1a3,	// (0x00019459) rss2_list_single_pane_t4

0x2a40,	// (0x0000fcf6) smil_status_pane_g1

0x952c,	// (0x000167e2) main_image2_pane_ParamLimits

0x952c,	// (0x000167e2) main_image2_pane

0x4513,	// (0x000117c9) main_camera2_pane_g9_ParamLimits

0x4513,	// (0x000117c9) main_camera2_pane_g9

0x4641,	// (0x000118f7) main_camera2_pane_t5_ParamLimits

0x4641,	// (0x000118f7) main_camera2_pane_t5

0xc019,	// (0x000192cf) main_camera2_pane_t6_ParamLimits

0xc019,	// (0x000192cf) main_camera2_pane_t6

0x4a89,	// (0x00011d3f) main_image2_pane_g1_ParamLimits

0x4a89,	// (0x00011d3f) main_image2_pane_g1

0x3863,	// (0x00010b19) smil2_video_pane_ParamLimits

0x3863,	// (0x00010b19) smil2_video_pane

0x94da,	// (0x00016790) aid_zoom_text_primary_cp

0x9522,	// (0x000167d8) popup_preview_fixed_window

0xa161,	// (0x00017417) im_reading_pane_g1

0x438a,	// (0x00011640) cams2_bc_adjust_pane_cp_ParamLimits

0x438a,	// (0x00011640) cams2_bc_adjust_pane_cp

0x4670,	// (0x00011926) cams2_bc_adjust_pane_ParamLimits

0x4670,	// (0x00011926) cams2_bc_adjust_pane

0xc1b1,	// (0x00019467) cams2_bc_adjust_pane_g1

0xc1b9,	// (0x0001946f) cams2_slider_pane

0xc1c2,	// (0x00019478) cams2_slider_pane_g1

0xc1cb,	// (0x00019481) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0001c97c) cams2_slider_pane_g

0x1539,	// (0x0000e7ef) calc_display_pane_ParamLimits

0x155f,	// (0x0000e815) calc_paper_pane_ParamLimits

0x1582,	// (0x0000e838) grid_calc_pane_ParamLimits

0xa7d9,	// (0x00017a8f) popup_clock_digital_window_t1_ParamLimits

0xad8e,	// (0x00018044) main_image_pane_t1

0x151b,	// (0x0000e7d1) aid_size_cell_calc_ParamLimits

0x151b,	// (0x0000e7d1) aid_size_cell_calc

0x3e57,	// (0x0001110d) popup_blid_sat_info2_window_ParamLimits

0x3e57,	// (0x0001110d) popup_blid_sat_info2_window

0xc1ed,	// (0x000194a3) aid_size_cell_blid

0xc1f5,	// (0x000194ab) bg_popup_window_pane_cp07

0xc218,	// (0x000194ce) grid_popup_blid_pane

0xc222,	// (0x000194d8) heading_pane_cp05_ParamLimits

0xc222,	// (0x000194d8) heading_pane_cp05

0xc2ec,	// (0x000195a2) cell_popup_blid_pane_ParamLimits

0xc2ec,	// (0x000195a2) cell_popup_blid_pane

0xc312,	// (0x000195c8) cell_popup_blid_pane_g1

0xc31a,	// (0x000195d0) cell_popup_blid_pane_t1

0x4921,	// (0x00011bd7) mup2_indicator_pane_ParamLimits

0x4921,	// (0x00011bd7) mup2_indicator_pane

0xaa73,	// (0x00017d29) mup2_visualizer_osc_pane

0xc055,	// (0x0001930b) mup2_visualizer_spec_pane_ParamLimits

0xc055,	// (0x0001930b) mup2_visualizer_spec_pane

0x4a9f,	// (0x00011d55) mup2_spec_half_pane

0x4aa8,	// (0x00011d5e) mup2_spec_half_pane_cp

0x4ab0,	// (0x00011d66) mup2_spec_bar_pane_ParamLimits

0x4ab0,	// (0x00011d66) mup2_spec_bar_pane

0xbfa4,	// (0x0001925a) mup2_spec_bar_pane_g1

0xbfae,	// (0x00019264) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001c8ef) mup2_spec_bar_pane_g

0x4ad0,	// (0x00011d86) mup2_osc_middle_pane

0xbfc0,	// (0x00019276) mup2_visualizer_osc_pane_g1

0x955a,	// (0x00016810) popup_number_entry_window_t1_ParamLimits

0x956d,	// (0x00016823) popup_number_entry_window_t2_ParamLimits

0x957f,	// (0x00016835) popup_number_entry_window_t3_ParamLimits

0x13bb,	// (0x0000e671) popup_number_entry_window_t5_ParamLimits

0x13bb,	// (0x0000e671) popup_number_entry_window_t5

0xf0fb,	// (0x0001c3b1) popup_number_entry_window_t_ParamLimits

0x9591,	// (0x00016847) text_title_cp2_ParamLimits

0xac68,	// (0x00017f1e) aid_hotspot_pointer_text2_pane

0xac8e,	// (0x00017f44) main_viewer_pane_g9_ParamLimits

0xac8e,	// (0x00017f44) main_viewer_pane_g9

0xa390,	// (0x00017646) cale_month_pane_t1_ParamLimits

0xa425,	// (0x000176db) bg_cale_pane_ParamLimits

0xa43d,	// (0x000176f3) list_cale_pane_ParamLimits

0x9eb2,	// (0x00017168) listscroll_cale_day_pane_t1

0xa44e,	// (0x00017704) scroll_pane_cp09_ParamLimits

0x3227,	// (0x000104dd) main_mup_eq_pane_t1_ParamLimits

0x3227,	// (0x000104dd) main_mup_eq_pane_t1

0x3241,	// (0x000104f7) main_mup_eq_pane_t2_ParamLimits

0x3241,	// (0x000104f7) main_mup_eq_pane_t2

0x325b,	// (0x00010511) main_mup_eq_pane_t3_ParamLimits

0x325b,	// (0x00010511) main_mup_eq_pane_t3

0x3277,	// (0x0001052d) main_mup_eq_pane_t4_ParamLimits

0x3277,	// (0x0001052d) main_mup_eq_pane_t4

0x3293,	// (0x00010549) main_mup_eq_pane_t5_ParamLimits

0x3293,	// (0x00010549) main_mup_eq_pane_t5

0x32af,	// (0x00010565) main_mup_eq_pane_t6_ParamLimits

0x32af,	// (0x00010565) main_mup_eq_pane_t6

0x32c3,	// (0x00010579) main_mup_eq_pane_t7_ParamLimits

0x32c3,	// (0x00010579) main_mup_eq_pane_t7

0x32d7,	// (0x0001058d) main_mup_eq_pane_t8_ParamLimits

0x32d7,	// (0x0001058d) main_mup_eq_pane_t8

0x32eb,	// (0x000105a1) main_mup_eq_pane_t9_ParamLimits

0x32eb,	// (0x000105a1) main_mup_eq_pane_t9

0x3305,	// (0x000105bb) main_mup_eq_pane_t10_ParamLimits

0x3305,	// (0x000105bb) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0001c73e) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0001c73e) main_mup_eq_pane_t

0x33b4,	// (0x0001066a) mup_equalizer_pane_cp5_ParamLimits

0x33c8,	// (0x0001067e) mup_equalizer_pane_cp6_ParamLimits

0x33dc,	// (0x00010692) mup_equalizer_pane_cp7_ParamLimits

0x94bc,	// (0x00016772) main_gallery_pane

0xbfc9,	// (0x0001927f) smil2_volume_pane

0xbfd1,	// (0x00019287) smil_status_volume_pane_g1_ParamLimits

0xbfe4,	// (0x0001929a) smil_status_volume_pane_g2_ParamLimits

0xbff7,	// (0x000192ad) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0001c8f4) smil_status_volume_pane_g_ParamLimits

0xc1f5,	// (0x000194ab) bg_popup_window_pane_cp07_ParamLimits

0xc203,	// (0x000194b9) blid_firmament_pane

0x4ad9,	// (0x00011d8f) aid_size_cell_gallery_ParamLimits

0x4ad9,	// (0x00011d8f) aid_size_cell_gallery

0x4aef,	// (0x00011da5) grid_gallery_pane_ParamLimits

0x4aef,	// (0x00011da5) grid_gallery_pane

0x4b08,	// (0x00011dbe) cell_gallery_pane_ParamLimits

0x4b08,	// (0x00011dbe) cell_gallery_pane

0xc328,	// (0x000195de) bg_cell_gallery_focus_pane_ParamLimits

0xc328,	// (0x000195de) bg_cell_gallery_focus_pane

0xc33a,	// (0x000195f0) cell_gallery_pane_g1_ParamLimits

0xc33a,	// (0x000195f0) cell_gallery_pane_g1

0x4b51,	// (0x00011e07) cell_gallery_pane_g2_ParamLimits

0x4b51,	// (0x00011e07) cell_gallery_pane_g2

0x4b5e,	// (0x00011e14) cell_gallery_pane_g3_ParamLimits

0x4b5e,	// (0x00011e14) cell_gallery_pane_g3

0xc346,	// (0x000195fc) cell_gallery_pane_g4_ParamLimits

0xc346,	// (0x000195fc) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0001c9a2) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0001c9a2) cell_gallery_pane_g

0xc352,	// (0x00019608) bg_cell_gallery_focus_pane_g1

0xc35a,	// (0x00019610) bg_cell_gallery_focus_pane_g2

0xc362,	// (0x00019618) bg_cell_gallery_focus_pane_g3

0xc36a,	// (0x00019620) bg_cell_gallery_focus_pane_g4

0xc372,	// (0x00019628) bg_cell_gallery_focus_pane_g5

0xc37a,	// (0x00019630) bg_cell_gallery_focus_pane_g6

0xc382,	// (0x00019638) bg_cell_gallery_focus_pane_g7

0xc38a,	// (0x00019640) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0001c9ab) bg_cell_gallery_focus_pane_g

0xc392,	// (0x00019648) aid_firma_cardinal

0xc3a6,	// (0x0001965c) blid_firmament_pane_t1

0xc3bd,	// (0x00019673) blid_firmament_pane_t2

0xc3d4,	// (0x0001968a) blid_firmament_pane_t3

0xc3eb,	// (0x000196a1) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0001c9bc) blid_firmament_pane_t

0xc402,	// (0x000196b8) blid_sat_info_pane

0xc412,	// (0x000196c8) blid_sat_info_pane_g1

0xc412,	// (0x000196c8) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0001c9c5) blid_sat_info_pane_g

0xc41c,	// (0x000196d2) blid_sat_info_pane_t1

0xc42a,	// (0x000196e0) smil2_volume_content_pane

0xc433,	// (0x000196e9) smil2_volume_pane_g1

0xc43b,	// (0x000196f1) smil2_volume_content_pane_g1

0xc444,	// (0x000196fa) smil2_volume_content_pane_g2

0xc44d,	// (0x00019703) smil2_volume_content_pane_g3

0xc456,	// (0x0001970c) smil2_volume_content_pane_g4

0xc45f,	// (0x00019715) smil2_volume_content_pane_g5

0xc468,	// (0x0001971e) smil2_volume_content_pane_g6

0xc471,	// (0x00019727) smil2_volume_content_pane_g7

0xc47a,	// (0x00019730) smil2_volume_content_pane_g8

0xc483,	// (0x00019739) smil2_volume_content_pane_g9

0xc48c,	// (0x00019742) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0001c9ca) smil2_volume_content_pane_g

0x19e6,	// (0x0000ec9c) cale_week_day_heading_pane_t1_ParamLimits

0x19fa,	// (0x0000ecb0) cale_week_day_heading_pane_t2_ParamLimits

0x1a0e,	// (0x0000ecc4) cale_week_day_heading_pane_t3_ParamLimits

0x1a22,	// (0x0000ecd8) cale_week_day_heading_pane_t4_ParamLimits

0x1a36,	// (0x0000ecec) cale_week_day_heading_pane_t5_ParamLimits

0x1a4a,	// (0x0000ed00) cale_week_day_heading_pane_t6_ParamLimits

0x1a5e,	// (0x0000ed14) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0001c4b6) cale_week_day_heading_pane_t_ParamLimits

0x9ec4,	// (0x0001717a) bg_cale_side_pane_ParamLimits

0x1a72,	// (0x0000ed28) cale_week_time_pane_t1_ParamLimits

0x1a8a,	// (0x0000ed40) cale_week_time_pane_t2_ParamLimits

0x1aa2,	// (0x0000ed58) cale_week_time_pane_t3_ParamLimits

0x1aba,	// (0x0000ed70) cale_week_time_pane_t4_ParamLimits

0x1ad2,	// (0x0000ed88) cale_week_time_pane_t5_ParamLimits

0x1aea,	// (0x0000eda0) cale_week_time_pane_t6_ParamLimits

0x1b02,	// (0x0000edb8) cale_week_time_pane_t7_ParamLimits

0x1b1a,	// (0x0000edd0) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0001c4c5) cale_week_time_pane_t_ParamLimits

0x1b32,	// (0x0000ede8) cell_cale_week_pane_g2_ParamLimits

0x9ec4,	// (0x0001717a) bg_cale_side_pane_cp01_ParamLimits

0x28e9,	// (0x0000fb9f) cale_month_week_pane_t1_ParamLimits

0x2900,	// (0x0000fbb6) cale_month_week_pane_t2_ParamLimits

0x2917,	// (0x0000fbcd) cale_month_week_pane_t3_ParamLimits

0x292e,	// (0x0000fbe4) cale_month_week_pane_t4_ParamLimits

0x2945,	// (0x0000fbfb) cale_month_week_pane_t5_ParamLimits

0x295c,	// (0x0000fc12) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0001c59e) cale_month_week_pane_t_ParamLimits

0xa3cc,	// (0x00017682) cell_cale_month_pane_g1_ParamLimits

0x94bc,	// (0x00016772) main_cale_event_viewer_pane

0x94bc,	// (0x00016772) listscroll_cale_event_viewer_pane

0xc495,	// (0x0001974b) list_cale_ev_pane

0xc49d,	// (0x00019753) scroll_pane_cp023

0xc4a9,	// (0x0001975f) field_cale_ev_pane_ParamLimits

0xc4a9,	// (0x0001975f) field_cale_ev_pane

0xc4c3,	// (0x00019779) field_cale_ev_content_pane_ParamLimits

0xc4c3,	// (0x00019779) field_cale_ev_content_pane

0xc4cf,	// (0x00019785) field_cale_ev_pane_g1_ParamLimits

0xc4cf,	// (0x00019785) field_cale_ev_pane_g1

0xc4db,	// (0x00019791) field_cale_ev_pane_g2_ParamLimits

0xc4db,	// (0x00019791) field_cale_ev_pane_g2

0xc4f3,	// (0x000197a9) field_cale_ev_pane_g3_ParamLimits

0xc4f3,	// (0x000197a9) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0001c9df) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0001c9df) field_cale_ev_pane_g

0xc50b,	// (0x000197c1) field_cale_ev_pane_t1_ParamLimits

0xc50b,	// (0x000197c1) field_cale_ev_pane_t1

0xc522,	// (0x000197d8) field_cale_ev_content_pane_t1_ParamLimits

0xc522,	// (0x000197d8) field_cale_ev_content_pane_t1

0xabfc,	// (0x00017eb2) bg_button_pane_cp01

0x9cd7,	// (0x00016f8d) listscroll_cale_week_pane_ParamLimits

0x180b,	// (0x0000eac1) popup_toolbar_window_cp01

0x9eb2,	// (0x00017168) listscroll_cale_week_pane_t1_ParamLimits

0x9cd7,	// (0x00016f8d) listscroll_cale_day_pane_ParamLimits

0x2a9f,	// (0x0000fd55) popup_toolbar_window_cp02

0x9eb2,	// (0x00017168) listscroll_cale_day_pane_t1_ParamLimits

0x9cd7,	// (0x00016f8d) main_cale_month_pane_ParamLimits

0x407d,	// (0x00011333) popup_toolbar_window_cp03_ParamLimits

0x407d,	// (0x00011333) popup_toolbar_window_cp03

0x3727,	// (0x000109dd) main_image_pane_g2_ParamLimits

0x3727,	// (0x000109dd) main_image_pane_g2

0x3738,	// (0x000109ee) main_image_pane_g3_ParamLimits

0x3738,	// (0x000109ee) main_image_pane_g3

0x0002,

0xf51a,	// (0x0001c7d0) main_image_pane_g_ParamLimits

0xf51a,	// (0x0001c7d0) main_image_pane_g

0xad8e,	// (0x00018044) main_image_pane_t1_ParamLimits

0x3749,	// (0x000109ff) main_image_pane_t2_ParamLimits

0x3749,	// (0x000109ff) main_image_pane_t2

0x375b,	// (0x00010a11) main_image_pane_t3_ParamLimits

0x375b,	// (0x00010a11) main_image_pane_t3

0x3783,	// (0x00010a39) main_image_pane_t4_ParamLimits

0x3783,	// (0x00010a39) main_image_pane_t4

0x0003,

0xf521,	// (0x0001c7d7) main_image_pane_t_ParamLimits

0xf521,	// (0x0001c7d7) main_image_pane_t

0x37a3,	// (0x00010a59) popup_image_details_window_cp01

0x37ad,	// (0x00010a63) popup_toobar_trans_pane_cp01_ParamLimits

0x37ad,	// (0x00010a63) popup_toobar_trans_pane_cp01

0x3f2e,	// (0x000111e4) popup_image_details_window_ParamLimits

0x3f2e,	// (0x000111e4) popup_image_details_window

0xbf2a,	// (0x000191e0) popup_image_focus_window

0x4344,	// (0x000115fa) camera2_autofocus_pane_ParamLimits

0x4344,	// (0x000115fa) camera2_autofocus_pane

0x94bc,	// (0x00016772) bg_popup_sub_pane_cp06

0xc53f,	// (0x000197f5) popup_image_focus_window_g1

0xc547,	// (0x000197fd) popup_image_focus_window_g2

0xc54f,	// (0x00019805) popup_image_focus_window_g3

0xc557,	// (0x0001980d) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0001c9e6) popup_image_focus_window_g

0xc55f,	// (0x00019815) popup_image_focus_window_t1

0xc56d,	// (0x00019823) popup_image_focus_window_t2

0xc57d,	// (0x00019833) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0001c9ef) popup_image_focus_window_t

0xc58b,	// (0x00019841) camera2_autofocus_pane_g1

0x952c,	// (0x000167e2) bg_tb_trans_pane_cp01

0xc599,	// (0x0001984f) popup_image_details_window_g1

0xc5ac,	// (0x00019862) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0001ca01) popup_image_details_window_g

0xc5d5,	// (0x0001988b) popup_image_details_window_t1

0xc5e7,	// (0x0001989d) popup_image_details_window_t2

0xc600,	// (0x000198b6) popup_image_details_window_t3

0xc614,	// (0x000198ca) popup_image_details_window_t4

0xc62f,	// (0x000198e5) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0001ca08) popup_image_details_window_t

0x9ca9,	// (0x00016f5f) bg_calc_paper_pane_ParamLimits

0x94bc,	// (0x00016772) grid_highlight_pane_cp013

0x9cbd,	// (0x00016f73) list_calc_pane_ParamLimits

0x9ccf,	// (0x00016f85) scroll_pane_cp024

0x9cd7,	// (0x00016f8d) bg_calc_display_pane_ParamLimits

0x1675,	// (0x0000e92b) calc_display_pane_t1_ParamLimits

0x1687,	// (0x0000e93d) calc_display_pane_t2_ParamLimits

0x9ce3,	// (0x00016f99) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0001c438) calc_display_pane_t_ParamLimits

0x1744,	// (0x0000e9fa) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0001c455) cell_calc_pane_g

0x174d,	// (0x0000ea03) cell_calc_pane_t1

0x9d5a,	// (0x00017010) grid_highlight_pane_cp02_ParamLimits

0x9d70,	// (0x00017026) toolbar_button_pane_cp01_ParamLimits

0x9d70,	// (0x00017026) toolbar_button_pane_cp01

0xadd3,	// (0x00018089) temp_image_control_pane_ParamLimits

0xadd3,	// (0x00018089) temp_image_control_pane

0x952c,	// (0x000167e2) main_mp3_pane

0xc649,	// (0x000198ff) temp_image_control_pane_g1_ParamLimits

0xc649,	// (0x000198ff) temp_image_control_pane_g1

0xc657,	// (0x0001990d) temp_image_control_pane_g2_ParamLimits

0xc657,	// (0x0001990d) temp_image_control_pane_g2

0xc669,	// (0x0001991f) temp_image_control_pane_g3_ParamLimits

0xc669,	// (0x0001991f) temp_image_control_pane_g3

0x4b9b,	// (0x00011e51) temp_image_control_pane_g4_ParamLimits

0x4b9b,	// (0x00011e51) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0001ca13) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0001ca13) temp_image_control_pane_g

0xc649,	// (0x000198ff) main_mp3_pane_g1

0x4bae,	// (0x00011e64) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0001ca1c) main_mp3_pane_g

0xc6ac,	// (0x00019962) main_mp3_pane_t1

0x9fad,	// (0x00017263) main_camera_pane_g8_ParamLimits

0x9fad,	// (0x00017263) main_camera_pane_g8

0x1ddc,	// (0x0000f092) main_video_pane_g7_ParamLimits

0x1ddc,	// (0x0000f092) main_video_pane_g7

0xc037,	// (0x000192ed) main_camera2_pane_t7_ParamLimits

0xc037,	// (0x000192ed) main_camera2_pane_t7

0xa1b8,	// (0x0001746e) scroll_pane_cp025_ParamLimits

0xa1b8,	// (0x0001746e) scroll_pane_cp025

0xa1cc,	// (0x00017482) scroll_pane_cp026_ParamLimits

0xa1cc,	// (0x00017482) scroll_pane_cp026

0xa1db,	// (0x00017491) wml_content_pane_ParamLimits

0x94bc,	// (0x00016772) main_touch_calib_pane

0x4c79,	// (0x00011f2f) main_touch_calib_pane_g1

0x4c85,	// (0x00011f3b) main_touch_calib_pane_g2

0x4c91,	// (0x00011f47) main_touch_calib_pane_g3

0x4c9d,	// (0x00011f53) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0001ca3a) main_touch_calib_pane_g

0x4ca9,	// (0x00011f5f) main_touch_calib_pane_t1

0x4cc3,	// (0x00011f79) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0001ca43) main_touch_calib_pane_t

0xa9b4,	// (0x00017c6a) mup_progress_pane_cp02

0xa9d3,	// (0x00017c89) navi_pane_g1

0xaa35,	// (0x00017ceb) navi_pane_mp_t3

0x952c,	// (0x000167e2) main_mp3_pane_ParamLimits

0x40bb,	// (0x00011371) navi_pane_ParamLimits

0xc649,	// (0x000198ff) main_mp3_pane_g1_ParamLimits

0x4bae,	// (0x00011e64) main_mp3_pane_g2_ParamLimits

0x4bbc,	// (0x00011e72) main_mp3_pane_g3_ParamLimits

0x4bbc,	// (0x00011e72) main_mp3_pane_g3

0x4bca,	// (0x00011e80) main_mp3_pane_g4_ParamLimits

0x4bca,	// (0x00011e80) main_mp3_pane_g4

0xc679,	// (0x0001992f) main_mp3_pane_g5_ParamLimits

0xc679,	// (0x0001992f) main_mp3_pane_g5

0xc687,	// (0x0001993d) main_mp3_pane_g6_ParamLimits

0xc687,	// (0x0001993d) main_mp3_pane_g6

0xc694,	// (0x0001994a) main_mp3_pane_g7_ParamLimits

0xc694,	// (0x0001994a) main_mp3_pane_g7

0xc6a0,	// (0x00019956) main_mp3_pane_g8_ParamLimits

0xc6a0,	// (0x00019956) main_mp3_pane_g8

0xf766,	// (0x0001ca1c) main_mp3_pane_g_ParamLimits

0x4bd8,	// (0x00011e8e) main_mp3_pane_t2

0x4be6,	// (0x00011e9c) main_mp3_pane_t3

0xc6ba,	// (0x00019970) main_mp3_pane_t4

0xc6c8,	// (0x0001997e) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0001ca2d) main_mp3_pane_t

0xc6d6,	// (0x0001998c) mup_progress_pane_cp01

0x94da,	// (0x00016790) aid_zoom_text_secondary2

0xc495,	// (0x0001974b) list_cale_ev2_pane

0xc49d,	// (0x00019753) scroll_pane_cp023_ParamLimits

0x4d19,	// (0x00011fcf) field_cale_ev2_pane_ParamLimits

0x4d19,	// (0x00011fcf) field_cale_ev2_pane

0x4d3f,	// (0x00011ff5) field_cale_ev2_pane_g1_ParamLimits

0x4d3f,	// (0x00011ff5) field_cale_ev2_pane_g1

0x4d4b,	// (0x00012001) field_cale_ev2_pane_g2_ParamLimits

0x4d4b,	// (0x00012001) field_cale_ev2_pane_g2

0x4d63,	// (0x00012019) field_cale_ev2_pane_g3_ParamLimits

0x4d63,	// (0x00012019) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0001ca4e) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0001ca4e) field_cale_ev2_pane_g

0xc6ea,	// (0x000199a0) field_cale_ev2_pane_t1_ParamLimits

0xc6ea,	// (0x000199a0) field_cale_ev2_pane_t1

0xc701,	// (0x000199b7) field_cale_ev2_pane_t2_ParamLimits

0xc701,	// (0x000199b7) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0001ca57) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0001ca57) field_cale_ev2_pane_t

0x35d7,	// (0x0001088d) main_postcard_pane_g5_ParamLimits

0x35d7,	// (0x0001088d) main_postcard_pane_g5

0x35ed,	// (0x000108a3) main_postcard_pane_g6_ParamLimits

0x35ed,	// (0x000108a3) main_postcard_pane_g6

0x1b8c,	// (0x0000ee42) camera2_autofocus_pane_cp_ParamLimits

0x1b8c,	// (0x0000ee42) camera2_autofocus_pane_cp

0x952c,	// (0x000167e2) main_mup3_pane

0x4d9b,	// (0x00012051) main_mup3_pane_g1_ParamLimits

0x4d9b,	// (0x00012051) main_mup3_pane_g1

0x4dbd,	// (0x00012073) main_mup3_pane_g2_ParamLimits

0x4dbd,	// (0x00012073) main_mup3_pane_g2

0x4e3e,	// (0x000120f4) main_mup3_pane_g3_ParamLimits

0x4e3e,	// (0x000120f4) main_mup3_pane_g3

0x4e80,	// (0x00012136) main_mup3_pane_g4_ParamLimits

0x4e80,	// (0x00012136) main_mup3_pane_g4

0x4ec2,	// (0x00012178) main_mup3_pane_g5_ParamLimits

0x4ec2,	// (0x00012178) main_mup3_pane_g5

0x4f06,	// (0x000121bc) main_mup3_pane_g6_ParamLimits

0x4f06,	// (0x000121bc) main_mup3_pane_g6

0xc716,	// (0x000199cc) main_mup3_pane_g7_ParamLimits

0xc716,	// (0x000199cc) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0001ca67) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0001ca67) main_mup3_pane_g

0x4f82,	// (0x00012238) main_mup3_pane_t1_ParamLimits

0x4f82,	// (0x00012238) main_mup3_pane_t1

0x4ff6,	// (0x000122ac) main_mup3_pane_t2_ParamLimits

0x4ff6,	// (0x000122ac) main_mup3_pane_t2

0x50ca,	// (0x00012380) main_mup3_pane_t4_ParamLimits

0x50ca,	// (0x00012380) main_mup3_pane_t4

0x5124,	// (0x000123da) main_mup3_pane_t5_ParamLimits

0x5124,	// (0x000123da) main_mup3_pane_t5

0x51d8,	// (0x0001248e) main_mup3_pane_t6_ParamLimits

0x51d8,	// (0x0001248e) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0001ca78) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0001ca78) main_mup3_pane_t

0x528c,	// (0x00012542) mup3_progress_pane_ParamLimits

0x528c,	// (0x00012542) mup3_progress_pane

0x5308,	// (0x000125be) popup_mup3_control_window_ParamLimits

0x5308,	// (0x000125be) popup_mup3_control_window

0xc724,	// (0x000199da) popup_mup3_text_window

0x533a,	// (0x000125f0) mup3_progress_pane_t1

0x5351,	// (0x00012607) mup3_progress_pane_t2

0xc72c,	// (0x000199e2) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0001ca85) mup3_progress_pane_t

0xc743,	// (0x000199f9) mup_progress_pane_cp03

0x94bc,	// (0x00016772) bg_tb_trans_pane_cp04

0x5368,	// (0x0001261e) mup3_volume_pane

0x5370,	// (0x00012626) popup_mup3_control_window_g1

0x5379,	// (0x0001262f) mup3_volume_pane_g1

0x5382,	// (0x00012638) mup3_volume_pane_g2

0x538b,	// (0x00012641) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0001ca8c) mup3_volume_pane_g

0x94bc,	// (0x00016772) bg_tb_trans_pane_cp03

0xc753,	// (0x00019a09) popup_mup3_text_window_g1

0xc75b,	// (0x00019a11) popup_mup3_text_window_t1

0x9d31,	// (0x00016fe7) list_calc_item_pane_g1_ParamLimits

0xc11f,	// (0x000193d5) mup_volume_pane_cp_g1

0x4cdd,	// (0x00011f93) main_touch_calib_pane_t3

0x4cf1,	// (0x00011fa7) main_touch_calib_pane_t4

0x4d05,	// (0x00011fbb) main_touch_calib_pane_t5

0x94c6,	// (0x0001677c) aid_cell_size_toolbar2

0x94ce,	// (0x00016784) aid_popup3_width_pane

0x94da,	// (0x00016790) aid_zoom_text_msg_primary

0x9f7a,	// (0x00017230) vorec_t7

0x9cf5,	// (0x00016fab) bg_calc_paper_pane_g1_ParamLimits

0x9d01,	// (0x00016fb7) bg_calc_paper_pane_g2_ParamLimits

0x9d0d,	// (0x00016fc3) bg_calc_paper_pane_g3_ParamLimits

0x9d19,	// (0x00016fcf) bg_calc_paper_pane_g4_ParamLimits

0x9d25,	// (0x00016fdb) bg_calc_paper_pane_g5_ParamLimits

0x16ce,	// (0x0000e984) bg_calc_paper_pane_g6_ParamLimits

0x16dd,	// (0x0000e993) bg_calc_paper_pane_g7_ParamLimits

0x16ec,	// (0x0000e9a2) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0001c43f) bg_calc_paper_pane_g_ParamLimits

0x16ff,	// (0x0000e9b5) calc_bg_paper_pane_g9_ParamLimits

0x1ce6,	// (0x0000ef9c) image_qvga_pane_ParamLimits

0x1ce6,	// (0x0000ef9c) image_qvga_pane

0x9ba6,	// (0x00016e5c) bg_popup_sub_pane_cp04_ParamLimits

0xad0a,	// (0x00017fc0) popup_mup_playback_window_g1_ParamLimits

0xad16,	// (0x00017fcc) popup_mup_playback_window_t1_ParamLimits

0xad2b,	// (0x00017fe1) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0001c7cb) popup_mup_playback_window_t_ParamLimits

0x483b,	// (0x00011af1) main_mup2_pane_g3_ParamLimits

0x483b,	// (0x00011af1) main_mup2_pane_g3

0x1fe5,	// (0x0000f29b) popup_toolbar_window_cp04

0xb120,	// (0x000183d6) popup_call2_audio_second_window_g3_ParamLimits

0xb120,	// (0x000183d6) popup_call2_audio_second_window_g3

0xb52a,	// (0x000187e0) popup_call2_audio_first_window_g4_ParamLimits

0xb52a,	// (0x000187e0) popup_call2_audio_first_window_g4

0xbba9,	// (0x00018e5f) popup_call2_audio_in_window_g4_ParamLimits

0xbba9,	// (0x00018e5f) popup_call2_audio_in_window_g4

0x3709,	// (0x000109bf) aid_area_sk_bg_cut_ParamLimits

0x3709,	// (0x000109bf) aid_area_sk_bg_cut

0xad40,	// (0x00017ff6) aid_area_sk_bg_cut_2_ParamLimits

0xad40,	// (0x00017ff6) aid_area_sk_bg_cut_2

0x4b41,	// (0x00011df7) aid_placing_details_win

0x4b49,	// (0x00011dff) aid_placing_details_win_2

0xc58b,	// (0x00019841) camera2_autofocus_pane_g1_ParamLimits

0x1308,	// (0x0000e5be) popup_fixed_preview_cale_window_ParamLimits

0x1308,	// (0x0000e5be) popup_fixed_preview_cale_window

0xaa8d,	// (0x00017d43) navi_slider_pane_g3

0xaa96,	// (0x00017d4c) navi_slider_pane_g4

0xaa9f,	// (0x00017d55) navi_slider_pane_g5

0xaa8d,	// (0x00017d43) navi_slider_pane_g6

0xaaa8,	// (0x00017d5e) navi_slider_pane_g7

0xabc9,	// (0x00017e7f) mup_scale_pane_g3

0xabd2,	// (0x00017e88) mup_scale_pane_g4

0xabdb,	// (0x00017e91) mup_scale_pane_g5

0x33f0,	// (0x000106a6) mup_scale_pane_g6

0x33f9,	// (0x000106af) mup_scale_pane_g7

0xaa8d,	// (0x00017d43) cams2_slider_pane_g3

0xc1d4,	// (0x0001948a) cams2_slider_pane_g4

0xc1dc,	// (0x00019492) cams2_slider_pane_g5

0xaa8d,	// (0x00017d43) cams2_slider_pane_g6

0xc1e4,	// (0x0001949a) cams2_slider_pane_g7

0xc412,	// (0x000196c8) camera2_autofocus_pane_cp_g1

0xc769,	// (0x00019a1f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc769,	// (0x00019a1f) bg_popup_preview_window_pane_cp02

0xc775,	// (0x00019a2b) list_fp_cale_pane_ParamLimits

0xc775,	// (0x00019a2b) list_fp_cale_pane

0xc781,	// (0x00019a37) popup_fixed_preview_cale_window_t1_ParamLimits

0xc781,	// (0x00019a37) popup_fixed_preview_cale_window_t1

0x5394,	// (0x0001264a) popup_fixed_preview_cale_window_t2_ParamLimits

0x5394,	// (0x0001264a) popup_fixed_preview_cale_window_t2

0x53a9,	// (0x0001265f) popup_fixed_preview_cale_window_t3_ParamLimits

0x53a9,	// (0x0001265f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0001ca93) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0001ca93) popup_fixed_preview_cale_window_t

0x53be,	// (0x00012674) list_single_fp_cale_pane_ParamLimits

0x53be,	// (0x00012674) list_single_fp_cale_pane

0xc79f,	// (0x00019a55) list_single_fp_cale_pane_g1_ParamLimits

0xc79f,	// (0x00019a55) list_single_fp_cale_pane_g1

0xc7ab,	// (0x00019a61) list_single_fp_cale_pane_g2_ParamLimits

0xc7ab,	// (0x00019a61) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0001ca9a) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0001ca9a) list_single_fp_cale_pane_g

0xc7c4,	// (0x00019a7a) list_single_fp_cale_pane_t1_ParamLimits

0xc7c4,	// (0x00019a7a) list_single_fp_cale_pane_t1

0xc7d6,	// (0x00019a8c) list_single_fp_cale_pane_t2_ParamLimits

0xc7d6,	// (0x00019a8c) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0001caa1) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0001caa1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94bc,	// (0x00016772) main_dialer_pane

0x53d6,	// (0x0001268c) aid_cell_size_keypad

0x53e0,	// (0x00012696) dialer_ne_pane

0x53e8,	// (0x0001269e) grid_dialer_command_1_pane

0x53f0,	// (0x000126a6) grid_dialer_command_2_pane

0x53f8,	// (0x000126ae) grid_dialer_keypad_pane

0x540a,	// (0x000126c0) bg_popup_call_pane_cp06_ParamLimits

0x540a,	// (0x000126c0) bg_popup_call_pane_cp06

0x5416,	// (0x000126cc) dialer_ne_clear_pane_ParamLimits

0x5416,	// (0x000126cc) dialer_ne_clear_pane

0xc809,	// (0x00019abf) dialer_ne_pane_g1

0xc811,	// (0x00019ac7) dialer_ne_pane_t1_ParamLimits

0xc811,	// (0x00019ac7) dialer_ne_pane_t1

0x5422,	// (0x000126d8) dialer_ne_pane_t2_ParamLimits

0x5422,	// (0x000126d8) dialer_ne_pane_t2

0x544c,	// (0x00012702) dialer_ne_pane_t3_ParamLimits

0x544c,	// (0x00012702) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0001caa6) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0001caa6) dialer_ne_pane_t

0x547c,	// (0x00012732) dialer_ne_pane_t3_copy1_ParamLimits

0x547c,	// (0x00012732) dialer_ne_pane_t3_copy1

0x54ab,	// (0x00012761) cell_dialer_keypad_pane_ParamLimits

0x54ab,	// (0x00012761) cell_dialer_keypad_pane

0x54c2,	// (0x00012778) cell_dialer_command_1_pane_ParamLimits

0x54c2,	// (0x00012778) cell_dialer_command_1_pane

0x54d8,	// (0x0001278e) cell_dialer_command_2_pane_ParamLimits

0x54d8,	// (0x0001278e) cell_dialer_command_2_pane

0xc823,	// (0x00019ad9) bg_button_pane_cp02_ParamLimits

0xc823,	// (0x00019ad9) bg_button_pane_cp02

0x54e7,	// (0x0001279d) cell_dialer_keypad_pane_g1_ParamLimits

0x54e7,	// (0x0001279d) cell_dialer_keypad_pane_g1

0xc823,	// (0x00019ad9) bg_button_pane_cp03_ParamLimits

0xc823,	// (0x00019ad9) bg_button_pane_cp03

0x54fc,	// (0x000127b2) cell_dialer_command_1_pane_g1_ParamLimits

0x54fc,	// (0x000127b2) cell_dialer_command_1_pane_g1

0xc82f,	// (0x00019ae5) bg_button_pane_cp04

0x5510,	// (0x000127c6) cell_dialer_command_2_pane_g1

0xaa73,	// (0x00017d29) bg_button_pane_cp06

0xc837,	// (0x00019aed) dialer_ne_clear_pane_g1

0x2f2e,	// (0x000101e4) navi_pane_g2

0x2f5c,	// (0x00010212) navi_pane_g3

0x0002,

0xf418,	// (0x0001c6ce) navi_pane_g

0x2f85,	// (0x0001023b) navi_pane_mv_g2

0x2fac,	// (0x00010262) navi_pane_mv_g5

0x2fb4,	// (0x0001026a) navi_pane_mv_t1

0x9cd7,	// (0x00016f8d) main_clock2_pane

0x5543,	// (0x000127f9) main_clock2_list_pane_ParamLimits

0x5543,	// (0x000127f9) main_clock2_list_pane

0x5579,	// (0x0001282f) main_clock2_pane_t1_ParamLimits

0x5579,	// (0x0001282f) main_clock2_pane_t1

0x55b7,	// (0x0001286d) main_clock2_pane_t2_ParamLimits

0x55b7,	// (0x0001286d) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0001caad) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0001caad) main_clock2_pane_t

0x5641,	// (0x000128f7) popup_clock_analogue_window_cp03_ParamLimits

0x5641,	// (0x000128f7) popup_clock_analogue_window_cp03

0x5668,	// (0x0001291e) popup_clock_digital_window_cp02_ParamLimits

0x5668,	// (0x0001291e) popup_clock_digital_window_cp02

0x56dd,	// (0x00012993) main_clock2_list_single_pane_ParamLimits

0x56dd,	// (0x00012993) main_clock2_list_single_pane

0xaa73,	// (0x00017d29) list_highlight_pane_cp05

0xc83f,	// (0x00019af5) main_clock2_list_single_pane_t1

0x1fe5,	// (0x0000f29b) popup_toolbar_window_cp04_ParamLimits

0x4b6b,	// (0x00011e21) camera2_autofocus_pane_g2_ParamLimits

0x4b6b,	// (0x00011e21) camera2_autofocus_pane_g2

0x4b77,	// (0x00011e2d) camera2_autofocus_pane_g3_ParamLimits

0x4b77,	// (0x00011e2d) camera2_autofocus_pane_g3

0x4b83,	// (0x00011e39) camera2_autofocus_pane_g4_ParamLimits

0x4b83,	// (0x00011e39) camera2_autofocus_pane_g4

0x4b8f,	// (0x00011e45) camera2_autofocus_pane_g5_ParamLimits

0x4b8f,	// (0x00011e45) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0001c9f6) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0001c9f6) camera2_autofocus_pane_g

0x4d7b,	// (0x00012031) camera2_autofocus_pane_cp_g2

0x4d83,	// (0x00012039) camera2_autofocus_pane_cp_g3

0x4d8b,	// (0x00012041) camera2_autofocus_pane_cp_g4

0x4d93,	// (0x00012049) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0001ca5c) camera2_autofocus_pane_cp_g

0x5402,	// (0x000126b8) popup_dialer_spcha_window

0x94bc,	// (0x00016772) bg_popup_sub_pane_cp07

0xc84d,	// (0x00019b03) list_spcha_pane

0xc855,	// (0x00019b0b) list_single_spcha_pane_ParamLimits

0xc855,	// (0x00019b0b) list_single_spcha_pane

0x94bc,	// (0x00016772) list_highlight_pane_cp06

0xc866,	// (0x00019b1c) list_single_spcha_pane_t1

0xb953,	// (0x00018c09) popup_call2_audio_out_window_g4_ParamLimits

0xb953,	// (0x00018c09) popup_call2_audio_out_window_g4

0x94bc,	// (0x00016772) main_imed2_pane

0xbf32,	// (0x000191e8) popup_imed_adjust2_window

0x3f46,	// (0x000111fc) popup_imed_trans_window_ParamLimits

0x3f46,	// (0x000111fc) popup_imed_trans_window

0xc24e,	// (0x00019504) popup_blid_sat_info2_window_t1

0xc25c,	// (0x00019512) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0001c98b) popup_blid_sat_info2_window_t

0x5787,	// (0x00012a3d) aid_size_cell_colour_35

0x57a7,	// (0x00012a5d) aid_size_cell_colour_112

0x57c7,	// (0x00012a7d) aid_size_cell_effect

0xbf0a,	// (0x000191c0) bg_tb_trans_pane_cp02

0xa4c1,	// (0x00017777) heading_imed_pane

0x57e7,	// (0x00012a9d) listscroll_imed_pane

0xc874,	// (0x00019b2a) heading_imed_pane_g1

0xc87c,	// (0x00019b32) heading_imed_pane_t1

0xc88a,	// (0x00019b40) grid_imed_colour_35_pane_ParamLimits

0xc88a,	// (0x00019b40) grid_imed_colour_35_pane

0x57f3,	// (0x00012aa9) grid_imed_effect_pane

0xc8a5,	// (0x00019b5b) list_imed_aspect_pane

0x5808,	// (0x00012abe) scroll_pane_cp027_ParamLimits

0x5808,	// (0x00012abe) scroll_pane_cp027

0x5819,	// (0x00012acf) cell_imed_effect_pane_ParamLimits

0x5819,	// (0x00012acf) cell_imed_effect_pane

0xc8ad,	// (0x00019b63) cell_imed_colour_pane_ParamLimits

0xc8ad,	// (0x00019b63) cell_imed_colour_pane

0xc8ef,	// (0x00019ba5) cell_imed_colour_pane_g1_ParamLimits

0xc8ef,	// (0x00019ba5) cell_imed_colour_pane_g1

0xc900,	// (0x00019bb6) hgihlgiht_grid_pane_cp016_ParamLimits

0xc900,	// (0x00019bb6) hgihlgiht_grid_pane_cp016

0x5840,	// (0x00012af6) cell_imed_effect_pane_g1

0x5848,	// (0x00012afe) grid_highlight_pane_cp017

0x9e5a,	// (0x00017110) list_imed_single_pane_ParamLimits

0x9e5a,	// (0x00017110) list_imed_single_pane

0x94bc,	// (0x00016772) list_highlight_pane_cp07

0xc911,	// (0x00019bc7) list_imed_aspect_pane_comp1_t1

0xbf0a,	// (0x000191c0) bg_tb_trans_pane_cp05

0xc941,	// (0x00019bf7) popup_imed_adjust2_window_g1

0xc968,	// (0x00019c1e) popup_imed_adjust2_window_t1

0xc980,	// (0x00019c36) slider_imed_adjust_pane

0xc994,	// (0x00019c4a) slider_imed_adjust_pane_g1

0xc9a4,	// (0x00019c5a) slider_imed_adjust_pane_g2

0xc9b4,	// (0x00019c6a) slider_imed_adjust_pane_g3

0xc9c5,	// (0x00019c7b) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0001caca) slider_imed_adjust_pane_g

0x5851,	// (0x00012b07) aid_size_cell_clipart2

0x585d,	// (0x00012b13) grid_imed_clipart_pane

0xc9d6,	// (0x00019c8c) scroll_pane_cp031

0x5867,	// (0x00012b1d) cell_imed_clipart_pane_ParamLimits

0x5867,	// (0x00012b1d) cell_imed_clipart_pane

0x588e,	// (0x00012b44) cell_imed_clipart_pane_g1

0x94bc,	// (0x00016772) grid_highlight_pane_cp014

0x5558,	// (0x0001280e) main_clock2_pane_g1_ParamLimits

0x5558,	// (0x0001280e) main_clock2_pane_g1

0x5688,	// (0x0001293e) aid_call2_pane_cp10

0x569a,	// (0x00012950) aid_call_pane_cp10

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g1

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g2

0x56ac,	// (0x00012962) popup_clock_analogue_window_cp10_g3

0x56ac,	// (0x00012962) popup_clock_analogue_window_cp10_g4

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0001cab8) popup_clock_analogue_window_cp10_g

0x56be,	// (0x00012974) popup_clock_analogue_window_cp10_t1

0x56ef,	// (0x000129a5) clock_digital_number_pane_cp10_ParamLimits

0x56ef,	// (0x000129a5) clock_digital_number_pane_cp10

0x5707,	// (0x000129bd) clock_digital_number_pane_cp11_ParamLimits

0x5707,	// (0x000129bd) clock_digital_number_pane_cp11

0x571f,	// (0x000129d5) clock_digital_number_pane_cp12_ParamLimits

0x571f,	// (0x000129d5) clock_digital_number_pane_cp12

0x5737,	// (0x000129ed) clock_digital_number_pane_cp13_ParamLimits

0x5737,	// (0x000129ed) clock_digital_number_pane_cp13

0x574f,	// (0x00012a05) clock_digital_separator_pane_cp10_ParamLimits

0x574f,	// (0x00012a05) clock_digital_separator_pane_cp10

0x5767,	// (0x00012a1d) popup_clock_digital_window_cp02_t1_ParamLimits

0x5767,	// (0x00012a1d) popup_clock_digital_window_cp02_t1

0x9b9e,	// (0x00016e54) clock_digital_number_pane_cp10_g1

0x9b9e,	// (0x00016e54) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0001cad3) clock_digital_number_pane_cp10_g

0x9b9e,	// (0x00016e54) clock_digital_separator_pane_cp10_g1

0x9b9e,	// (0x00016e54) clock_digital_separator_pane_g2_cp10

0xaa43,	// (0x00017cf9) navi_pane_vded_g4

0xaa4c,	// (0x00017d02) navi_pane_vded_g5

0xaa55,	// (0x00017d0b) navi_pane_vded_t1

0x94bc,	// (0x00016772) main_vded_pane

0x5897,	// (0x00012b4d) main_vded_pane_g1

0x58a3,	// (0x00012b59) main_vded_pane_g2

0x58ad,	// (0x00012b63) main_vded_pane_g3

0x0002,

0xf822,	// (0x0001cad8) main_vded_pane_g

0x58b7,	// (0x00012b6d) main_vded_pane_t1

0x58c5,	// (0x00012b7b) main_vded_pane_t2

0x0001,

0xf829,	// (0x0001cadf) main_vded_pane_t

0x58d3,	// (0x00012b89) vded_slider_pane

0x58dd,	// (0x00012b93) vded_video_pane

0xc9de,	// (0x00019c94) vded_video_pane_g1

0x58e7,	// (0x00012b9d) vded_video_pane_g2

0xc412,	// (0x000196c8) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0001cae4) vded_video_pane_g

0xc9e8,	// (0x00019c9e) vded_slider_pane_g1

0xc11f,	// (0x000193d5) vded_slider_pane_g2

0xc9f1,	// (0x00019ca7) vded_slider_pane_g3

0xc9fa,	// (0x00019cb0) vded_slider_pane_g4

0xca03,	// (0x00019cb9) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0001caeb) vded_slider_pane_g

0x52f0,	// (0x000125a6) mup3_rocker_pane_ParamLimits

0x52f0,	// (0x000125a6) mup3_rocker_pane

0x58f0,	// (0x00012ba6) mup3_control_keys_pane_g1

0x58f8,	// (0x00012bae) mup3_control_keys_pane_g2

0x5900,	// (0x00012bb6) mup3_control_keys_pane_g3

0x5908,	// (0x00012bbe) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0001caf6) mup3_control_keys_pane_g

0x133f,	// (0x0000e5f5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x133f,	// (0x0000e5f5) popup_toolbar2_fixed_window_cp01

0x5324,	// (0x000125da) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5324,	// (0x000125da) popup_toolbar2_fixed_window_cp02

0xb292,	// (0x00018548) popup_call2_audio_second_window_t4_ParamLimits

0xb292,	// (0x00018548) popup_call2_audio_second_window_t4

0xb7c0,	// (0x00018a76) popup_call2_audio_first_window_t6_ParamLimits

0xb7c0,	// (0x00018a76) popup_call2_audio_first_window_t6

0xba56,	// (0x00018d0c) popup_call2_audio_out_window_t6_ParamLimits

0xba56,	// (0x00018d0c) popup_call2_audio_out_window_t6

0x94bc,	// (0x00016772) main_vitu_pane

0x5918,	// (0x00012bce) aid_size_cell_itu_ParamLimits

0x5918,	// (0x00012bce) aid_size_cell_itu

0x952c,	// (0x000167e2) bg_popup_window_pane_cp08_ParamLimits

0x952c,	// (0x000167e2) bg_popup_window_pane_cp08

0x592e,	// (0x00012be4) field_vitu_entry_pane_ParamLimits

0x592e,	// (0x00012be4) field_vitu_entry_pane

0x5945,	// (0x00012bfb) grid_vitu_function_pane_ParamLimits

0x5945,	// (0x00012bfb) grid_vitu_function_pane

0x5960,	// (0x00012c16) grid_vitu_itu_pane_ParamLimits

0x5960,	// (0x00012c16) grid_vitu_itu_pane

0x597e,	// (0x00012c34) cell_vitu_itu_pane_ParamLimits

0x597e,	// (0x00012c34) cell_vitu_itu_pane

0x59a2,	// (0x00012c58) cell_vitu_function_pane_ParamLimits

0x59a2,	// (0x00012c58) cell_vitu_function_pane

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp08_ParamLimits

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp08

0x59bd,	// (0x00012c73) field_vitu_entry_pane_t1_ParamLimits

0x59bd,	// (0x00012c73) field_vitu_entry_pane_t1

0xca24,	// (0x00019cda) field_vitu_entry_pane_t2_ParamLimits

0xca24,	// (0x00019cda) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0001cb04) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0001cb04) field_vitu_entry_pane_t

0xca41,	// (0x00019cf7) bg_button_pane_cp05_ParamLimits

0xca41,	// (0x00019cf7) bg_button_pane_cp05

0x59dd,	// (0x00012c93) cell_vitu_itu_pane_g1

0x59f5,	// (0x00012cab) cell_vitu_itu_pane_t1_ParamLimits

0x59f5,	// (0x00012cab) cell_vitu_itu_pane_t1

0x5a07,	// (0x00012cbd) cell_vitu_itu_pane_t2_ParamLimits

0x5a07,	// (0x00012cbd) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0001cb09) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0001cb09) cell_vitu_itu_pane_t

0xca4f,	// (0x00019d05) bg_button_pane_cp07

0x5a3c,	// (0x00012cf2) cell_vitu_function_pane_g1

0x9c71,	// (0x00016f27) main_calc_pane_g1

0x1175,	// (0x0000e42b) aid_visual_content_pane

0x94bc,	// (0x00016772) main_vradio_pane

0x5a45,	// (0x00012cfb) main_vradio_pane_g1_ParamLimits

0x5a45,	// (0x00012cfb) main_vradio_pane_g1

0xca59,	// (0x00019d0f) main_vradio_pane_g2_ParamLimits

0xca59,	// (0x00019d0f) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0001cb10) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0001cb10) main_vradio_pane_g

0x5a5e,	// (0x00012d14) main_vradio_pane_t1_ParamLimits

0x5a5e,	// (0x00012d14) main_vradio_pane_t1

0x5a73,	// (0x00012d29) main_vradio_pane_t2_ParamLimits

0x5a73,	// (0x00012d29) main_vradio_pane_t2

0xca66,	// (0x00019d1c) main_vradio_pane_t3_ParamLimits

0xca66,	// (0x00019d1c) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0001cb15) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0001cb15) main_vradio_pane_t

0x5a88,	// (0x00012d3e) vradio_rocker_control_pane_ParamLimits

0x5a88,	// (0x00012d3e) vradio_rocker_control_pane

0x5a9a,	// (0x00012d50) vradio_station_info_pane_ParamLimits

0x5a9a,	// (0x00012d50) vradio_station_info_pane

0xca7a,	// (0x00019d30) vradio_frequency_info_pane_ParamLimits

0xca7a,	// (0x00019d30) vradio_frequency_info_pane

0xc412,	// (0x000196c8) vradio_station_info_pane_g1

0xca89,	// (0x00019d3f) vradio_station_info_pane_t1_ParamLimits

0xca89,	// (0x00019d3f) vradio_station_info_pane_t1

0xcaab,	// (0x00019d61) vradio_station_info_pane_t2_ParamLimits

0xcaab,	// (0x00019d61) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0001cb1c) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0001cb1c) vradio_station_info_pane_t

0xcabd,	// (0x00019d73) vradio_tuning_pane

0xcac5,	// (0x00019d7b) vradio_rocker_control_pane_g1

0xcacd,	// (0x00019d83) vradio_rocker_control_pane_g2

0xcad5,	// (0x00019d8b) vradio_rocker_control_pane_g3

0xcadd,	// (0x00019d93) vradio_rocker_control_pane_g4

0xcae5,	// (0x00019d9b) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0001cb21) vradio_rocker_control_pane_g

0x5aac,	// (0x00012d62) vradio_frequency_info_pane_g1

0xcaed,	// (0x00019da3) vradio_frequency_info_pane_t1_ParamLimits

0xcaed,	// (0x00019da3) vradio_frequency_info_pane_t1

0x5ab6,	// (0x00012d6c) vradio_tuning_pane_g1

0x5ac1,	// (0x00012d77) vradio_tuning_pane_t1

0x94ea,	// (0x000167a0) area_side_right_pane_ParamLimits

0x94ea,	// (0x000167a0) area_side_right_pane

0xbed1,	// (0x00019187) status_small_pane_g1

0xbed9,	// (0x0001918f) status_small_pane_g2

0xbee2,	// (0x00019198) status_small_pane_g3

0xbeeb,	// (0x000191a1) status_small_pane_g4

0x0003,

0xf62b,	// (0x0001c8e1) status_small_pane_g

0xbef4,	// (0x000191aa) status_small_pane_t1

0x94bc,	// (0x00016772) main_video3_pane

0xcb01,	// (0x00019db7) cams_zoom_vslider_pane

0xcb09,	// (0x00019dbf) image3_wide_pane_ParamLimits

0xcb09,	// (0x00019dbf) image3_wide_pane

0xcb23,	// (0x00019dd9) image3_wide_small_pane

0xcb2f,	// (0x00019de5) main_video3_pane_g1_ParamLimits

0xcb2f,	// (0x00019de5) main_video3_pane_g1

0xcb4b,	// (0x00019e01) main_video3_pane_g2_ParamLimits

0xcb4b,	// (0x00019e01) main_video3_pane_g2

0x0001,

0xf876,	// (0x0001cb2c) main_video3_pane_g_ParamLimits

0xf876,	// (0x0001cb2c) main_video3_pane_g

0xcb67,	// (0x00019e1d) main_video3_pane_t1_ParamLimits

0xcb67,	// (0x00019e1d) main_video3_pane_t1

0xcb92,	// (0x00019e48) main_video3_pane_t2_ParamLimits

0xcb92,	// (0x00019e48) main_video3_pane_t2

0xcbbd,	// (0x00019e73) main_video3_pane_t3_ParamLimits

0xcbbd,	// (0x00019e73) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0001cb31) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0001cb31) main_video3_pane_t

0xcbea,	// (0x00019ea0) cams_zoom_vslider_pane_g1

0xcbf3,	// (0x00019ea9) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0001cb38) cams_zoom_vslider_pane_g

0xcbfb,	// (0x00019eb1) small_slider_vertical_pane

0xc412,	// (0x000196c8) small_slider_vertical_pane_g1

0xc412,	// (0x000196c8) small_slider_vertical_pane_g2

0xcc03,	// (0x00019eb9) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0001cb3d) small_slider_vertical_pane_g

0x94bc,	// (0x00016772) main_hwr_training_pane

0xcc0c,	// (0x00019ec2) hwr_training_instruct_pane_ParamLimits

0xcc0c,	// (0x00019ec2) hwr_training_instruct_pane

0x5ad0,	// (0x00012d86) hwr_training_navi_pane_ParamLimits

0x5ad0,	// (0x00012d86) hwr_training_navi_pane

0x5aef,	// (0x00012da5) hwr_training_write_pane_ParamLimits

0x5aef,	// (0x00012da5) hwr_training_write_pane

0x94bc,	// (0x00016772) bg_frame_shadow_pane

0xcc43,	// (0x00019ef9) hwr_training_write_pane_g1

0xcc4b,	// (0x00019f01) hwr_training_write_pane_g2

0xcc53,	// (0x00019f09) hwr_training_write_pane_g3

0xcc5b,	// (0x00019f11) hwr_training_write_pane_g4

0xcc63,	// (0x00019f19) hwr_training_write_pane_g5

0xcc6b,	// (0x00019f21) hwr_training_write_pane_g6

0xcc73,	// (0x00019f29) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0001cb44) hwr_training_write_pane_g

0xcc7b,	// (0x00019f31) hwr_training_navi_pane_g1_ParamLimits

0xcc7b,	// (0x00019f31) hwr_training_navi_pane_g1

0xcc8d,	// (0x00019f43) hwr_training_navi_pane_g2_ParamLimits

0xcc8d,	// (0x00019f43) hwr_training_navi_pane_g2

0xcc9f,	// (0x00019f55) hwr_training_navi_pane_g3_ParamLimits

0xcc9f,	// (0x00019f55) hwr_training_navi_pane_g3

0xccaf,	// (0x00019f65) hwr_training_navi_pane_g4_ParamLimits

0xccaf,	// (0x00019f65) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0001cb53) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0001cb53) hwr_training_navi_pane_g

0xccbc,	// (0x00019f72) hwr_training_navi_pane_t1

0x5b39,	// (0x00012def) list_single_hwr_training_instruct_pane_ParamLimits

0x5b39,	// (0x00012def) list_single_hwr_training_instruct_pane

0xccca,	// (0x00019f80) list_single_hwr_training_instruct_pane_t1

0xc352,	// (0x00019608) bg_frame_shadow_pane_g1

0xccd9,	// (0x00019f8f) bg_frame_shadow_pane_g2

0xcce1,	// (0x00019f97) bg_frame_shadow_pane_g3

0xcce9,	// (0x00019f9f) bg_frame_shadow_pane_g4

0xccf1,	// (0x00019fa7) bg_frame_shadow_pane_g5

0xccf9,	// (0x00019faf) bg_frame_shadow_pane_g6

0xcd01,	// (0x00019fb7) bg_frame_shadow_pane_g7

0x9dd0,	// (0x00017086) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0001cb5e) bg_frame_shadow_pane_g

0x94bc,	// (0x00016772) main_video_tele_dialer_pane

0x5b56,	// (0x00012e0c) aid_size_cell_video_keypad_ParamLimits

0x5b56,	// (0x00012e0c) aid_size_cell_video_keypad

0x5b70,	// (0x00012e26) grid_video_dialer_keypad_pane_ParamLimits

0x5b70,	// (0x00012e26) grid_video_dialer_keypad_pane

0x5bbc,	// (0x00012e72) video_down_pane_cp_ParamLimits

0x5bbc,	// (0x00012e72) video_down_pane_cp

0x5bf0,	// (0x00012ea6) cell_video_dialer_keypad_pane_ParamLimits

0x5bf0,	// (0x00012ea6) cell_video_dialer_keypad_pane

0xcd09,	// (0x00019fbf) bg_button_pane_cp08_ParamLimits

0xcd09,	// (0x00019fbf) bg_button_pane_cp08

0x5c12,	// (0x00012ec8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c12,	// (0x00012ec8) cell_video_dialer_keypad_pane_g1

0x52da,	// (0x00012590) mup3_rocker2_pane_ParamLimits

0x52da,	// (0x00012590) mup3_rocker2_pane

0xc412,	// (0x000196c8) mup3_rocker2_pane_g1

0x3e2f,	// (0x000110e5) main_dialer2_pane

0x94bc,	// (0x00016772) main_mp4_pane

0xcd1d,	// (0x00019fd3) main_mp4_pane_g1_ParamLimits

0xcd1d,	// (0x00019fd3) main_mp4_pane_g1

0xcd1d,	// (0x00019fd3) main_mp4_pane_g2_ParamLimits

0xcd1d,	// (0x00019fd3) main_mp4_pane_g2

0x5c4d,	// (0x00012f03) main_mp4_pane_g3_ParamLimits

0x5c4d,	// (0x00012f03) main_mp4_pane_g3

0xcd2b,	// (0x00019fe1) main_mp4_pane_g4_ParamLimits

0xcd2b,	// (0x00019fe1) main_mp4_pane_g4

0xcd53,	// (0x0001a009) main_mp4_pane_g5_ParamLimits

0xcd53,	// (0x0001a009) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0001cb7e) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0001cb7e) main_mp4_pane_g

0xcda3,	// (0x0001a059) main_mp4_pane_t1_ParamLimits

0xcda3,	// (0x0001a059) main_mp4_pane_t1

0xcdff,	// (0x0001a0b5) main_mp4_pane_t2_ParamLimits

0xcdff,	// (0x0001a0b5) main_mp4_pane_t2

0xce51,	// (0x0001a107) main_mp4_pane_t3_ParamLimits

0xce51,	// (0x0001a107) main_mp4_pane_t3

0xce71,	// (0x0001a127) main_mp4_pane_t4_ParamLimits

0xce71,	// (0x0001a127) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0001cb8b) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0001cb8b) main_mp4_pane_t

0xceb5,	// (0x0001a16b) mp4_progress_pane_ParamLimits

0xceb5,	// (0x0001a16b) mp4_progress_pane

0xceff,	// (0x0001a1b5) mp4_rocker_pane_ParamLimits

0xceff,	// (0x0001a1b5) mp4_rocker_pane

0xcf27,	// (0x0001a1dd) mp4_progress_pane_t1

0xcf40,	// (0x0001a1f6) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0001cb94) mp4_progress_pane_t

0xcf59,	// (0x0001a20f) mup_progress_pane_cp04

0xc412,	// (0x000196c8) mp4_rocker_pane_g1

0x5c89,	// (0x00012f3f) aid_cell_size_keypad2_ParamLimits

0x5c89,	// (0x00012f3f) aid_cell_size_keypad2

0x5c9f,	// (0x00012f55) dialer2_ne_pane_ParamLimits

0x5c9f,	// (0x00012f55) dialer2_ne_pane

0x5cb9,	// (0x00012f6f) grid_dialer2_keypad_pane_ParamLimits

0x5cb9,	// (0x00012f6f) grid_dialer2_keypad_pane

0xc1f5,	// (0x000194ab) bg_popup_call_pane_cp07_ParamLimits

0xc1f5,	// (0x000194ab) bg_popup_call_pane_cp07

0x5cd7,	// (0x00012f8d) dialer2_ne_pane_t1_ParamLimits

0x5cd7,	// (0x00012f8d) dialer2_ne_pane_t1

0x5d16,	// (0x00012fcc) cell_dialer2_keypad_pane_ParamLimits

0x5d16,	// (0x00012fcc) cell_dialer2_keypad_pane

0xcf77,	// (0x0001a22d) bg_button_pane_pane_cp04_ParamLimits

0xcf77,	// (0x0001a22d) bg_button_pane_pane_cp04

0x5d3a,	// (0x00012ff0) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d3a,	// (0x00012ff0) cell_dialer2_keypad_pane_g1

0x1f11,	// (0x0000f1c7) aid_placing_vt_set_content_ParamLimits

0x1f11,	// (0x0000f1c7) aid_placing_vt_set_content

0x1f33,	// (0x0000f1e9) aid_placing_vt_set_title_ParamLimits

0x1f33,	// (0x0000f1e9) aid_placing_vt_set_title

0x94bc,	// (0x00016772) main_image3_pane

0x5e00,	// (0x000130b6) area_side_right_pane_cp01_ParamLimits

0x5e00,	// (0x000130b6) area_side_right_pane_cp01

0xcd1d,	// (0x00019fd3) main_image3_pane_g1_ParamLimits

0xcd1d,	// (0x00019fd3) main_image3_pane_g1

0x5e17,	// (0x000130cd) main_image3_pane_g2_ParamLimits

0x5e17,	// (0x000130cd) main_image3_pane_g2

0x5e3f,	// (0x000130f5) main_image3_pane_g3_ParamLimits

0x5e3f,	// (0x000130f5) main_image3_pane_g3

0x5e69,	// (0x0001311f) main_image3_pane_g4_ParamLimits

0x5e69,	// (0x0001311f) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0001cba3) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0001cba3) main_image3_pane_g

0x5e93,	// (0x00013149) main_image3_pane_t1_ParamLimits

0x5e93,	// (0x00013149) main_image3_pane_t1

0x5eeb,	// (0x000131a1) main_image3_pane_t2_ParamLimits

0x5eeb,	// (0x000131a1) main_image3_pane_t2

0x5f3d,	// (0x000131f3) main_image3_pane_t3_ParamLimits

0x5f3d,	// (0x000131f3) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0001cbac) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0001cbac) main_image3_pane_t

0x952c,	// (0x000167e2) grid_sctrl_middle_pane_cp01_ParamLimits

0x952c,	// (0x000167e2) grid_sctrl_middle_pane_cp01

0x5fc5,	// (0x0001327b) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fc5,	// (0x0001327b) cell_sctrl_middle_pane_cp01

0x5fe2,	// (0x00013298) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fe2,	// (0x00013298) cell_sctrl_middle_pane_cp01_g1

0x94bc,	// (0x00016772) main_call4_pane

0x5ff8,	// (0x000132ae) aid_size_button_call4_ParamLimits

0x5ff8,	// (0x000132ae) aid_size_button_call4

0x6029,	// (0x000132df) call4_windows_pane_ParamLimits

0x6029,	// (0x000132df) call4_windows_pane

0x6049,	// (0x000132ff) grid_call4_button_pane_ParamLimits

0x6049,	// (0x000132ff) grid_call4_button_pane

0xcfb5,	// (0x0001a26b) call4_windows_conf_pane

0xcfca,	// (0x0001a280) popup_call4_audio_first_window_ParamLimits

0xcfca,	// (0x0001a280) popup_call4_audio_first_window

0xd016,	// (0x0001a2cc) popup_call4_audio_second_window_ParamLimits

0xd016,	// (0x0001a2cc) popup_call4_audio_second_window

0xd02a,	// (0x0001a2e0) popup_call4_audio_wait_window_ParamLimits

0xd02a,	// (0x0001a2e0) popup_call4_audio_wait_window

0x6076,	// (0x0001332c) cell_call4_button_pane_ParamLimits

0x6076,	// (0x0001332c) cell_call4_button_pane

0x609f,	// (0x00013355) bg_button_pane_cp09_ParamLimits

0x609f,	// (0x00013355) bg_button_pane_cp09

0x60ab,	// (0x00013361) cell_call4_button_pane_g1_ParamLimits

0x60ab,	// (0x00013361) cell_call4_button_pane_g1

0x60d1,	// (0x00013387) cell_call4_button_pane_t1_ParamLimits

0x60d1,	// (0x00013387) cell_call4_button_pane_t1

0xd072,	// (0x0001a328) popup_call4_audio_conf_window_ParamLimits

0xd072,	// (0x0001a328) popup_call4_audio_conf_window

0x533a,	// (0x000125f0) mup3_progress_pane_t1_ParamLimits

0x5351,	// (0x00012607) mup3_progress_pane_t2_ParamLimits

0xc72c,	// (0x000199e2) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0001ca85) mup3_progress_pane_t_ParamLimits

0xc743,	// (0x000199f9) mup_progress_pane_cp03_ParamLimits

0x5910,	// (0x00012bc6) mup3_control_keys_pane_g4_copy1

0xcee3,	// (0x0001a199) mp4_rocker2_pane_ParamLimits

0xcee3,	// (0x0001a199) mp4_rocker2_pane

0xd086,	// (0x0001a33c) mp4_rocker2_pane_g1

0xd08e,	// (0x0001a344) mp4_rocker2_pane_g2

0xd096,	// (0x0001a34c) mp4_rocker2_pane_g3

0xd09e,	// (0x0001a354) mp4_rocker2_pane_g4

0xd0a6,	// (0x0001a35c) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0001cbb5) mp4_rocker2_pane_g

0x94bc,	// (0x00016772) main_camera4_pane

0x94bc,	// (0x00016772) main_video4_pane

0x5b8c,	// (0x00012e42) main_video_tele_dialer_pane_t1_ParamLimits

0x5b8c,	// (0x00012e42) main_video_tele_dialer_pane_t1

0x5ba4,	// (0x00012e5a) main_video_tele_dialer_pane_t2_ParamLimits

0x5ba4,	// (0x00012e5a) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0001cb6f) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0001cb6f) main_video_tele_dialer_pane_t

0x6113,	// (0x000133c9) cam4_autofocus_pane_ParamLimits

0x6113,	// (0x000133c9) cam4_autofocus_pane

0x6129,	// (0x000133df) cam4_image_uncrop_pane_ParamLimits

0x6129,	// (0x000133df) cam4_image_uncrop_pane

0x6143,	// (0x000133f9) cam4_indicators_pane_ParamLimits

0x6143,	// (0x000133f9) cam4_indicators_pane

0x616e,	// (0x00013424) main_camera4_pane_g1_ParamLimits

0x616e,	// (0x00013424) main_camera4_pane_g1

0x6181,	// (0x00013437) main_camera4_pane_g2_ParamLimits

0x6181,	// (0x00013437) main_camera4_pane_g2

0x6194,	// (0x0001344a) main_camera4_pane_g3_ParamLimits

0x6194,	// (0x0001344a) main_camera4_pane_g3

0x61a7,	// (0x0001345d) main_camera4_pane_g4_ParamLimits

0x61a7,	// (0x0001345d) main_camera4_pane_g4

0x61ba,	// (0x00013470) main_camera4_pane_g5_ParamLimits

0x61ba,	// (0x00013470) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0001cbc0) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0001cbc0) main_camera4_pane_g

0x61de,	// (0x00013494) main_camera4_pane_t1_ParamLimits

0x61de,	// (0x00013494) main_camera4_pane_t1

0xc679,	// (0x0001992f) bg_tb_trans_pane_cp06

0xd0c6,	// (0x0001a37c) cam4_indicators_pane_g1

0xd0d7,	// (0x0001a38d) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0001cbdb) cam4_indicators_pane_g

0xd0f5,	// (0x0001a3ab) cam4_indicators_pane_t1

0x6254,	// (0x0001350a) main_video4_pane_g1_ParamLimits

0x6254,	// (0x0001350a) main_video4_pane_g1

0x6267,	// (0x0001351d) main_video4_pane_g2_ParamLimits

0x6267,	// (0x0001351d) main_video4_pane_g2

0x627b,	// (0x00013531) main_video4_pane_g3_ParamLimits

0x627b,	// (0x00013531) main_video4_pane_g3

0x628f,	// (0x00013545) main_video4_pane_g4_ParamLimits

0x628f,	// (0x00013545) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0001cbe2) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0001cbe2) main_video4_pane_g

0x62b7,	// (0x0001356d) vid4_indicators_pane_ParamLimits

0x62b7,	// (0x0001356d) vid4_indicators_pane

0x62e9,	// (0x0001359f) video4_image_uncrop_cif_pane_ParamLimits

0x62e9,	// (0x0001359f) video4_image_uncrop_cif_pane

0x6303,	// (0x000135b9) video4_image_uncrop_nhd_pane_ParamLimits

0x6303,	// (0x000135b9) video4_image_uncrop_nhd_pane

0x6129,	// (0x000133df) video4_image_uncrop_vga_pane_ParamLimits

0x6129,	// (0x000133df) video4_image_uncrop_vga_pane

0xc929,	// (0x00019bdf) bg_tb_trans_pane_cp07

0x6317,	// (0x000135cd) vid4_indicators_pane_g1

0x6324,	// (0x000135da) vid4_indicators_pane_g2

0x6331,	// (0x000135e7) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0001cbed) vid4_indicators_pane_g

0x6356,	// (0x0001360c) vid4_indicators_pane_t1

0x6368,	// (0x0001361e) cam4_autofocus_pane_g1

0x6370,	// (0x00013626) cam4_autofocus_pane_g2

0x6378,	// (0x0001362e) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0001cbf8) cam4_autofocus_pane_g

0x6380,	// (0x00013636) cam4_autofocus_pane_g3_copy1

0x5bd4,	// (0x00012e8a) video_down_pane_cp_t1

0x5be2,	// (0x00012e98) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0001cb74) video_down_pane_cp_t

0x952c,	// (0x000167e2) popup_vitu2_window_ParamLimits

0x952c,	// (0x000167e2) popup_vitu2_window

0x6388,	// (0x0001363e) aid_size_cell2_itu2_ParamLimits

0x6388,	// (0x0001363e) aid_size_cell2_itu2

0x63ae,	// (0x00013664) aid_size_cell_itu2_ParamLimits

0x63ae,	// (0x00013664) aid_size_cell_itu2

0x640a,	// (0x000136c0) bg_popup_window_pane_cp09_ParamLimits

0x640a,	// (0x000136c0) bg_popup_window_pane_cp09

0x6418,	// (0x000136ce) field_vitu2_entry_pane_ParamLimits

0x6418,	// (0x000136ce) field_vitu2_entry_pane

0x643e,	// (0x000136f4) grid_vitu2_function_pane_ParamLimits

0x643e,	// (0x000136f4) grid_vitu2_function_pane

0x648f,	// (0x00013745) grid_vitu2_itu_pane_ParamLimits

0x648f,	// (0x00013745) grid_vitu2_itu_pane

0x6520,	// (0x000137d6) cell_vitu2_itu_pane_ParamLimits

0x6520,	// (0x000137d6) cell_vitu2_itu_pane

0x6544,	// (0x000137fa) cell_vitu2_function_pane_ParamLimits

0x6544,	// (0x000137fa) cell_vitu2_function_pane

0xd11f,	// (0x0001a3d5) bg_popup_call_pane_cp08_ParamLimits

0xd11f,	// (0x0001a3d5) bg_popup_call_pane_cp08

0xd138,	// (0x0001a3ee) field_vitu2_entry_pane_g1

0xd144,	// (0x0001a3fa) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0001cbff) field_vitu2_entry_pane_g

0xd15e,	// (0x0001a414) field_vitu2_entry_pane_t1_ParamLimits

0xd15e,	// (0x0001a414) field_vitu2_entry_pane_t1

0xd18f,	// (0x0001a445) field_vitu2_entry_pane_t2_ParamLimits

0xd18f,	// (0x0001a445) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0001cc06) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0001cc06) field_vitu2_entry_pane_t

0x6583,	// (0x00013839) bg_button_pane_cp010_ParamLimits

0x6583,	// (0x00013839) bg_button_pane_cp010

0x6591,	// (0x00013847) cell_vitu2_itu_pane_g1

0x65af,	// (0x00013865) cell_vitu2_itu_pane_t1_ParamLimits

0x65af,	// (0x00013865) cell_vitu2_itu_pane_t1

0x6615,	// (0x000138cb) cell_vitu2_itu_pane_t2_ParamLimits

0x6615,	// (0x000138cb) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0001cc10) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0001cc10) cell_vitu2_itu_pane_t

0x952c,	// (0x000167e2) bg_button_pane_cp011

0x66f1,	// (0x000139a7) cell_vitu2_function_pane_g1

0x94bc,	// (0x00016772) main_myfav_hc_pane

0x5f8d,	// (0x00013243) popup_image3_note_pane_ParamLimits

0x5f8d,	// (0x00013243) popup_image3_note_pane

0x5fa9,	// (0x0001325f) popup_image3_tool_bar_pane_ParamLimits

0x5fa9,	// (0x0001325f) popup_image3_tool_bar_pane

0x6699,	// (0x0001394f) cell_vitu2_itu_pane_t3_ParamLimits

0x6699,	// (0x0001394f) cell_vitu2_itu_pane_t3

0x94bc,	// (0x00016772) bg_popup_trans_pane

0xd1b4,	// (0x0001a46a) grid_image3_tool_bar_pane

0xd1be,	// (0x0001a474) bg_popup_trans_pane_g1

0xa2c1,	// (0x00017577) bg_popup_trans_pane_g2

0xd1c6,	// (0x0001a47c) bg_popup_trans_pane_g3

0xd1ce,	// (0x0001a484) bg_popup_trans_pane_g4

0xd1d6,	// (0x0001a48c) bg_popup_trans_pane_g5

0xd1de,	// (0x0001a494) bg_popup_trans_pane_g6

0xd1e6,	// (0x0001a49c) bg_popup_trans_pane_g7

0xd1ee,	// (0x0001a4a4) bg_popup_trans_pane_g8

0xa2a1,	// (0x00017557) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0001cc17) bg_popup_trans_pane_g

0xd1f6,	// (0x0001a4ac) cell_image3_tool_bar_pane_ParamLimits

0xd1f6,	// (0x0001a4ac) cell_image3_tool_bar_pane

0xc412,	// (0x000196c8) cell_image3_tool_bar_pane_g1

0x94bc,	// (0x00016772) bg_popup_trans_pane_cp1

0xd20a,	// (0x0001a4c0) popup_image3_note_pane_t1

0xd218,	// (0x0001a4ce) popup_image3_note_pane_t2

0xd226,	// (0x0001a4dc) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0001cc2a) popup_image3_note_pane_t

0xd234,	// (0x0001a4ea) popup_image3_note_pane_t3_copy1

0x6705,	// (0x000139bb) bg_myfav_hc_instruction_pane_ParamLimits

0x6705,	// (0x000139bb) bg_myfav_hc_instruction_pane

0x671b,	// (0x000139d1) cell_myfav_contact_pane_ParamLimits

0x671b,	// (0x000139d1) cell_myfav_contact_pane

0x6737,	// (0x000139ed) cell_myfav_contact_pane_cp1_ParamLimits

0x6737,	// (0x000139ed) cell_myfav_contact_pane_cp1

0x674f,	// (0x00013a05) cell_myfav_contact_pane_cp2_ParamLimits

0x674f,	// (0x00013a05) cell_myfav_contact_pane_cp2

0x6767,	// (0x00013a1d) cell_myfav_contact_pane_cp3_ParamLimits

0x6767,	// (0x00013a1d) cell_myfav_contact_pane_cp3

0x677e,	// (0x00013a34) cell_myfav_contact_pane_cp4_ParamLimits

0x677e,	// (0x00013a34) cell_myfav_contact_pane_cp4

0x6796,	// (0x00013a4c) cell_myfav_contact_pane_cp5_ParamLimits

0x6796,	// (0x00013a4c) cell_myfav_contact_pane_cp5

0x67aa,	// (0x00013a60) cell_myfav_contact_pane_cp6_ParamLimits

0x67aa,	// (0x00013a60) cell_myfav_contact_pane_cp6

0x67c0,	// (0x00013a76) cell_myfav_contact_pane_cp7_ParamLimits

0x67c0,	// (0x00013a76) cell_myfav_contact_pane_cp7

0xd242,	// (0x0001a4f8) listscroll_gen_pane_cp05

0x67da,	// (0x00013a90) main_myfav_hc_pane_g1_ParamLimits

0x67da,	// (0x00013a90) main_myfav_hc_pane_g1

0x67f4,	// (0x00013aaa) main_myfav_hc_pane_g2_ParamLimits

0x67f4,	// (0x00013aaa) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0001cc31) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0001cc31) main_myfav_hc_pane_g

0x6826,	// (0x00013adc) main_myfav_hc_pane_t1_ParamLimits

0x6826,	// (0x00013adc) main_myfav_hc_pane_t1

0xd24b,	// (0x0001a501) main_myfav_hc_pane_t2_ParamLimits

0xd24b,	// (0x0001a501) main_myfav_hc_pane_t2

0xd25d,	// (0x0001a513) main_myfav_hc_pane_t3_ParamLimits

0xd25d,	// (0x0001a513) main_myfav_hc_pane_t3

0x683d,	// (0x00013af3) main_myfav_hc_pane_t4_ParamLimits

0x683d,	// (0x00013af3) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0001cc38) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0001cc38) main_myfav_hc_pane_t

0xc412,	// (0x000196c8) bg_myfav_hc_instruction_pane_g1

0xd26f,	// (0x0001a525) cell_myfav_contact_pane_g1_ParamLimits

0xd26f,	// (0x0001a525) cell_myfav_contact_pane_g1

0xd26f,	// (0x0001a525) cell_myfav_contact_pane_g2_ParamLimits

0xd26f,	// (0x0001a525) cell_myfav_contact_pane_g2

0xd27b,	// (0x0001a531) cell_myfav_contact_pane_g3_ParamLimits

0xd27b,	// (0x0001a531) cell_myfav_contact_pane_g3

0xc716,	// (0x000199cc) cell_myfav_contact_pane_g4_ParamLimits

0xc716,	// (0x000199cc) cell_myfav_contact_pane_g4

0xd288,	// (0x0001a53e) cell_myfav_contact_pane_g5_ParamLimits

0xd288,	// (0x0001a53e) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0001cc43) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0001cc43) cell_myfav_contact_pane_g

0x680e,	// (0x00013ac4) main_myfav_hc_pane_g3_ParamLimits

0x680e,	// (0x00013ac4) main_myfav_hc_pane_g3

0x12a0,	// (0x0000e556) popup_adpt_find_window

0x6865,	// (0x00013b1b) afind_page_pane_ParamLimits

0x6865,	// (0x00013b1b) afind_page_pane

0x687a,	// (0x00013b30) aid_size_cell_afind_ParamLimits

0x687a,	// (0x00013b30) aid_size_cell_afind

0x6898,	// (0x00013b4e) bg_popup_sub_pane_cp09_ParamLimits

0x6898,	// (0x00013b4e) bg_popup_sub_pane_cp09

0x68a5,	// (0x00013b5b) find_pane_cp01_ParamLimits

0x68a5,	// (0x00013b5b) find_pane_cp01

0xd294,	// (0x0001a54a) grid_afind_control_pane_ParamLimits

0xd294,	// (0x0001a54a) grid_afind_control_pane

0x68b2,	// (0x00013b68) grid_afind_pane_ParamLimits

0x68b2,	// (0x00013b68) grid_afind_pane

0x68d4,	// (0x00013b8a) cell_afind_pane_ParamLimits

0x68d4,	// (0x00013b8a) cell_afind_pane

0xc412,	// (0x000196c8) afind_page_pane_g1

0x6935,	// (0x00013beb) afind_page_pane_g2

0x693e,	// (0x00013bf4) afind_page_pane_g3

0x0002,

0xf998,	// (0x0001cc4e) afind_page_pane_g

0x6947,	// (0x00013bfd) afind_page_pane_t1

0xd2a8,	// (0x0001a55e) cell_afind_grid_control_pane_ParamLimits

0xd2a8,	// (0x0001a55e) cell_afind_grid_control_pane

0xcf77,	// (0x0001a22d) bg_button_pane_cp69_ParamLimits

0xcf77,	// (0x0001a22d) bg_button_pane_cp69

0x6967,	// (0x00013c1d) cell_afind_pane_g1_ParamLimits

0x6967,	// (0x00013c1d) cell_afind_pane_g1

0x6974,	// (0x00013c2a) cell_afind_pane_t1_ParamLimits

0x6974,	// (0x00013c2a) cell_afind_pane_t1

0x9ff7,	// (0x000172ad) bg_button_pane_cp72

0xd2b7,	// (0x0001a56d) cell_afind_grid_control_pane_g1

0x38ea,	// (0x00010ba0) aid_image_placing_area_ParamLimits

0x38ea,	// (0x00010ba0) aid_image_placing_area

0xca0c,	// (0x00019cc2) field_vitu_entry_pane_g1_ParamLimits

0xca0c,	// (0x00019cc2) field_vitu_entry_pane_g1

0xca18,	// (0x00019cce) field_vitu_entry_pane_g2_ParamLimits

0xca18,	// (0x00019cce) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0001caff) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0001caff) field_vitu_entry_pane_g

0x59dd,	// (0x00012c93) cell_vitu_itu_pane_g1_ParamLimits

0x5a1f,	// (0x00012cd5) cell_vitu_itu_pane_t3_ParamLimits

0x5a1f,	// (0x00012cd5) cell_vitu_itu_pane_t3

0xcf27,	// (0x0001a1dd) mp4_progress_pane_t1_ParamLimits

0xcf40,	// (0x0001a1f6) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0001cb94) mp4_progress_pane_t_ParamLimits

0xcf59,	// (0x0001a20f) mup_progress_pane_cp04_ParamLimits

0x6851,	// (0x00013b07) main_myfav_hc_pane_t5_ParamLimits

0x6851,	// (0x00013b07) main_myfav_hc_pane_t5

0x94e2,	// (0x00016798) aid_zoom_text_primary

0x12a0,	// (0x0000e556) popup_adpt_find_window_ParamLimits

0x952c,	// (0x000167e2) main_cam_set_pane

0x615a,	// (0x00013410) cam4_zoom_pane_ParamLimits

0x615a,	// (0x00013410) cam4_zoom_pane

0x6986,	// (0x00013c3c) main_cam_set_pane_g1_ParamLimits

0x6986,	// (0x00013c3c) main_cam_set_pane_g1

0x6994,	// (0x00013c4a) main_cam_set_pane_g2_ParamLimits

0x6994,	// (0x00013c4a) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0001cc55) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0001cc55) main_cam_set_pane_g

0x69b5,	// (0x00013c6b) main_cam_set_pane_t1_ParamLimits

0x69b5,	// (0x00013c6b) main_cam_set_pane_t1

0x69d0,	// (0x00013c86) main_cset_listscroll_pane_ParamLimits

0x69d0,	// (0x00013c86) main_cset_listscroll_pane

0x69f0,	// (0x00013ca6) main_cset_slider_pane_ParamLimits

0x69f0,	// (0x00013ca6) main_cset_slider_pane

0xd2c8,	// (0x0001a57e) main_cset_list_pane_ParamLimits

0xd2c8,	// (0x0001a57e) main_cset_list_pane

0xd2d8,	// (0x0001a58e) scroll_pane_cp028

0x6a16,	// (0x00013ccc) aid_area_touch_slider

0x6a32,	// (0x00013ce8) cset_slider_pane

0x6a5c,	// (0x00013d12) main_cset_slider_pane_g1

0x6a71,	// (0x00013d27) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0001cc5a) main_cset_slider_pane_g

0xd311,	// (0x0001a5c7) main_cset_slider_pane_t1

0x6b2d,	// (0x00013de3) main_cset_slider_pane_t2

0x6b47,	// (0x00013dfd) main_cset_slider_pane_t3

0x6b61,	// (0x00013e17) main_cset_slider_pane_t4

0x6b7b,	// (0x00013e31) main_cset_slider_pane_t5

0x6b97,	// (0x00013e4d) main_cset_slider_pane_t6

0x6bac,	// (0x00013e62) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0001cc7f) main_cset_slider_pane_t

0x6cb0,	// (0x00013f66) cset_list_set_pane_ParamLimits

0x6cb0,	// (0x00013f66) cset_list_set_pane

0x6cc4,	// (0x00013f7a) aid_position_infowindow_above

0x6ccc,	// (0x00013f82) aid_position_infowindow_below

0x6cd4,	// (0x00013f8a) cset_list_set_pane_g1_ParamLimits

0x6cd4,	// (0x00013f8a) cset_list_set_pane_g1

0x6ce0,	// (0x00013f96) cset_list_set_pane_g3_ParamLimits

0x6ce0,	// (0x00013f96) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0001cc9e) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0001cc9e) cset_list_set_pane_g

0x6cef,	// (0x00013fa5) cset_list_set_pane_t1_ParamLimits

0x6cef,	// (0x00013fa5) cset_list_set_pane_t1

0x952c,	// (0x000167e2) list_highlight_pane_cp021_ParamLimits

0x952c,	// (0x000167e2) list_highlight_pane_cp021

0xabc9,	// (0x00017e7f) cset_slider_pane_g1

0xabdb,	// (0x00017e91) cset_slider_pane_g2

0xabd2,	// (0x00017e88) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0001cca3) cset_slider_pane_g

0xd3b1,	// (0x0001a667) aid_area_touch_cam4_zoom

0xd3b9,	// (0x0001a66f) cam4_zoom_cont_pane

0xd3c1,	// (0x0001a677) cam4_zoom_pane_g1

0xd3c9,	// (0x0001a67f) cam4_zoom_pane_g2

0x6d04,	// (0x00013fba) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0001ccaa) cam4_zoom_pane_g

0xd3d1,	// (0x0001a687) cam4_zoom_cont_pane_g1

0xd3da,	// (0x0001a690) cam4_zoom_cont_pane_g2

0xd3e3,	// (0x0001a699) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0001ccb1) cam4_zoom_cont_pane_g

0x6016,	// (0x000132cc) call4_image_pane_ParamLimits

0x6016,	// (0x000132cc) call4_image_pane

0xcfb5,	// (0x0001a26b) call4_windows_conf_pane_ParamLimits

0xcff4,	// (0x0001a2aa) popup_call4_audio_in_window_ParamLimits

0xcff4,	// (0x0001a2aa) popup_call4_audio_in_window

0x94bc,	// (0x00016772) bg_popup_call2_act_pane_cp02

0xd06a,	// (0x0001a320) call4_list_conf_pane

0xc412,	// (0x000196c8) call4_image_pane_g1

0xc412,	// (0x000196c8) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0001c9c5) call4_image_pane_g

0xd3ec,	// (0x0001a6a2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3ec,	// (0x0001a6a2) list_single_graphic_popup_conf4_pane

0x94bc,	// (0x00016772) list_highlight_pane_cp022

0xd3ff,	// (0x0001a6b5) list_single_graphic_popup_conf4_pane_g1

0xa89a,	// (0x00017b50) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0001ccb8) list_single_graphic_popup_conf4_pane_g

0xd407,	// (0x0001a6bd) list_single_graphic_popup_conf4_pane_t1

0x2005,	// (0x0000f2bb) popup_vtel_slider_window_ParamLimits

0x2005,	// (0x0000f2bb) popup_vtel_slider_window

0xcf65,	// (0x0001a21b) dialer2_ne_pane_t2_ParamLimits

0xcf65,	// (0x0001a21b) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0001cb99) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0001cb99) dialer2_ne_pane_t

0xc1f5,	// (0x000194ab) bg_popup_sub_pane_cp010_ParamLimits

0xc1f5,	// (0x000194ab) bg_popup_sub_pane_cp010

0x6d0c,	// (0x00013fc2) popup_vtel_slider_window_g1_ParamLimits

0x6d0c,	// (0x00013fc2) popup_vtel_slider_window_g1

0x6d1f,	// (0x00013fd5) popup_vtel_slider_window_g2_ParamLimits

0x6d1f,	// (0x00013fd5) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0001ccbd) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0001ccbd) popup_vtel_slider_window_g

0x6d75,	// (0x0001402b) vtel_slider_pane_ParamLimits

0x6d75,	// (0x0001402b) vtel_slider_pane

0x6d97,	// (0x0001404d) vtel_slider_pane_g1_ParamLimits

0x6d97,	// (0x0001404d) vtel_slider_pane_g1

0x6dab,	// (0x00014061) vtel_slider_pane_g2_ParamLimits

0x6dab,	// (0x00014061) vtel_slider_pane_g2

0x6dc3,	// (0x00014079) vtel_slider_pane_g3_ParamLimits

0x6dc3,	// (0x00014079) vtel_slider_pane_g3

0x6d97,	// (0x0001404d) vtel_slider_pane_g4_ParamLimits

0x6d97,	// (0x0001404d) vtel_slider_pane_g4

0x6dd9,	// (0x0001408f) vtel_slider_pane_g5_ParamLimits

0x6dd9,	// (0x0001408f) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0001ccc6) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0001ccc6) vtel_slider_pane_g

0x94bc,	// (0x00016772) main_gallery2_pane

0x63da,	// (0x00013690) aid_size_row_itut2_dropdow_list_ParamLimits

0x63da,	// (0x00013690) aid_size_row_itut2_dropdow_list

0x6466,	// (0x0001371c) grid_vitu2_function_top_pane_ParamLimits

0x6466,	// (0x0001371c) grid_vitu2_function_top_pane

0x64cb,	// (0x00013781) popup_vitu2_dropdown_list_window_ParamLimits

0x64cb,	// (0x00013781) popup_vitu2_dropdown_list_window

0x64f4,	// (0x000137aa) popup_vitu2_match_list_window

0x6def,	// (0x000140a5) cell_vitu2_function_top_pane_ParamLimits

0x6def,	// (0x000140a5) cell_vitu2_function_top_pane

0x6e0d,	// (0x000140c3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e0d,	// (0x000140c3) cell_vitu2_function_top_pane_cp01

0x6e2b,	// (0x000140e1) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e2b,	// (0x000140e1) cell_vitu2_function_top_wide_pane

0x952c,	// (0x000167e2) bg_button_pane_cp012

0x6e49,	// (0x000140ff) cell_vitu2_function_top_pane_g1

0xd423,	// (0x0001a6d9) bg_button_pane_cp013_ParamLimits

0xd423,	// (0x0001a6d9) bg_button_pane_cp013

0x6e5d,	// (0x00014113) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e5d,	// (0x00014113) cell_vitu2_function_top_wide_pane_g1

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp20

0x6e75,	// (0x0001412b) list_vitu2_match_list_pane

0xd1be,	// (0x0001a474) bg_popup_sub_pane_cp20_g1

0xd1c6,	// (0x0001a47c) bg_popup_sub_pane_cp20_g2

0xa2c1,	// (0x00017577) bg_popup_sub_pane_cp20_g3

0xd1ce,	// (0x0001a484) bg_popup_sub_pane_cp20_g4

0xa2a1,	// (0x00017557) bg_popup_sub_pane_cp20_g5

0xd43f,	// (0x0001a6f5) bg_popup_sub_pane_cp20_g6

0xd1de,	// (0x0001a494) bg_popup_sub_pane_cp20_g7

0xd1e6,	// (0x0001a49c) bg_popup_sub_pane_cp20_g8

0xd1ee,	// (0x0001a4a4) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0001ccd1) bg_popup_sub_pane_cp20_g

0xd447,	// (0x0001a6fd) list_vitu2_match_list_item_pane_ParamLimits

0xd447,	// (0x0001a6fd) list_vitu2_match_list_item_pane

0xd459,	// (0x0001a70f) list_vitu2_match_list_item_pane_t1

0x94bc,	// (0x00016772) bg_popup_sub_pane_cp21

0xa730,	// (0x000179e6) grid_vitu2_dropdown_list_pane

0x6ec4,	// (0x0001417a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ec4,	// (0x0001417a) cell_vitu2_dropdown_list_char_pane

0x6ee5,	// (0x0001419b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ee5,	// (0x0001419b) cell_vitu2_dropdown_list_ctrl_pane

0xd47f,	// (0x0001a735) cell_vitu2_dropdown_list_char_pane_g1

0xd488,	// (0x0001a73e) cell_vitu2_dropdown_list_char_pane_g2

0xd491,	// (0x0001a747) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0001ccee) cell_vitu2_dropdown_list_char_pane_g

0x6f11,	// (0x000141c7) cell_vitu2_dropdown_list_char_pane_t1

0x6f1f,	// (0x000141d5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f1f,	// (0x000141d5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f2f,	// (0x000141e5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f2f,	// (0x000141e5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f40,	// (0x000141f6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f40,	// (0x000141f6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f50,	// (0x00014206) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f50,	// (0x00014206) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc679,	// (0x0001992f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc679,	// (0x0001992f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0001ccf5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0001ccf5) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f6c,	// (0x00014222) aid_size_cell_gallery2_ParamLimits

0x6f6c,	// (0x00014222) aid_size_cell_gallery2

0x6f82,	// (0x00014238) grid_gallery2_pane_ParamLimits

0x6f82,	// (0x00014238) grid_gallery2_pane

0x6f96,	// (0x0001424c) scroll_pane_cp029_ParamLimits

0x6f96,	// (0x0001424c) scroll_pane_cp029

0x6fa2,	// (0x00014258) cell_gallery2_pane_ParamLimits

0x6fa2,	// (0x00014258) cell_gallery2_pane

0xd49a,	// (0x0001a750) cell_gallery2_pane_g2

0x6fd8,	// (0x0001428e) cell_gallery2_pane_g3

0xd4a4,	// (0x0001a75a) cell_gallery2_pane_g4

0xd4ac,	// (0x0001a762) cell_gallery2_pane_g5

0xaa73,	// (0x00017d29) grid_highlight_pane_cp10

0x64f4,	// (0x000137aa) popup_vitu2_match_list_window_ParamLimits

0x6509,	// (0x000137bf) popup_vitu2_query_window_ParamLimits

0x6509,	// (0x000137bf) popup_vitu2_query_window

0x94bc,	// (0x00016772) bg_vitu2_candi_button_pane

0xd47f,	// (0x0001a735) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd488,	// (0x0001a73e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd491,	// (0x0001a747) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6fe0,	// (0x00014296) bg_button_pane_cp015

0x6fea,	// (0x000142a0) bg_button_pane_cp016

0x6ff4,	// (0x000142aa) bg_button_pane_cp017

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp22

0xd4b4,	// (0x0001a76a) popup_vitu2_query_window_g1

0x701c,	// (0x000142d2) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0001cd00) popup_vitu2_query_window_g

0x702a,	// (0x000142e0) popup_vitu2_query_window_t1_ParamLimits

0x702a,	// (0x000142e0) popup_vitu2_query_window_t1

0x7052,	// (0x00014308) popup_vitu2_query_window_t2_ParamLimits

0x7052,	// (0x00014308) popup_vitu2_query_window_t2

0x7064,	// (0x0001431a) popup_vitu2_query_window_t3_ParamLimits

0x7064,	// (0x0001431a) popup_vitu2_query_window_t3

0x708c,	// (0x00014342) popup_vitu2_query_window_t4_ParamLimits

0x708c,	// (0x00014342) popup_vitu2_query_window_t4

0x70a0,	// (0x00014356) popup_vitu2_query_window_t5_ParamLimits

0x70a0,	// (0x00014356) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0001cd05) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0001cd05) popup_vitu2_query_window_t

0xd2c0,	// (0x0001a576) main_cset_text_pane

0x6a16,	// (0x00013ccc) aid_area_touch_slider_ParamLimits

0x6a32,	// (0x00013ce8) cset_slider_pane_ParamLimits

0x6a5c,	// (0x00013d12) main_cset_slider_pane_g1_ParamLimits

0x6a71,	// (0x00013d27) main_cset_slider_pane_g2_ParamLimits

0xd2e1,	// (0x0001a597) main_cset_slider_pane_g3_ParamLimits

0xd2e1,	// (0x0001a597) main_cset_slider_pane_g3

0x6a86,	// (0x00013d3c) main_cset_slider_pane_g4_ParamLimits

0x6a86,	// (0x00013d3c) main_cset_slider_pane_g4

0x6a95,	// (0x00013d4b) main_cset_slider_pane_g5_ParamLimits

0x6a95,	// (0x00013d4b) main_cset_slider_pane_g5

0x6aa1,	// (0x00013d57) main_cset_slider_pane_g6_ParamLimits

0x6aa1,	// (0x00013d57) main_cset_slider_pane_g6

0xf9a4,	// (0x0001cc5a) main_cset_slider_pane_g_ParamLimits

0xd311,	// (0x0001a5c7) main_cset_slider_pane_t1_ParamLimits

0x6b2d,	// (0x00013de3) main_cset_slider_pane_t2_ParamLimits

0x6b47,	// (0x00013dfd) main_cset_slider_pane_t3_ParamLimits

0x6b61,	// (0x00013e17) main_cset_slider_pane_t4_ParamLimits

0x6b7b,	// (0x00013e31) main_cset_slider_pane_t5_ParamLimits

0x6b97,	// (0x00013e4d) main_cset_slider_pane_t6_ParamLimits

0x6bac,	// (0x00013e62) main_cset_slider_pane_t7_ParamLimits

0x6bd6,	// (0x00013e8c) main_cset_slider_pane_t8_ParamLimits

0x6bd6,	// (0x00013e8c) main_cset_slider_pane_t8

0x6bfe,	// (0x00013eb4) main_cset_slider_pane_t9_ParamLimits

0x6bfe,	// (0x00013eb4) main_cset_slider_pane_t9

0x6c26,	// (0x00013edc) main_cset_slider_pane_t10_ParamLimits

0x6c26,	// (0x00013edc) main_cset_slider_pane_t10

0x6c4e,	// (0x00013f04) main_cset_slider_pane_t11_ParamLimits

0x6c4e,	// (0x00013f04) main_cset_slider_pane_t11

0x6c76,	// (0x00013f2c) main_cset_slider_pane_t12_ParamLimits

0x6c76,	// (0x00013f2c) main_cset_slider_pane_t12

0x6c93,	// (0x00013f49) main_cset_slider_pane_t13_ParamLimits

0x6c93,	// (0x00013f49) main_cset_slider_pane_t13

0xf9c9,	// (0x0001cc7f) main_cset_slider_pane_t_ParamLimits

0x94bc,	// (0x00016772) bg_popup_sub_pane_cp011

0xd4c0,	// (0x0001a776) main_cset_text_pane_g1

0xd4c8,	// (0x0001a77e) main_cset_text_pane_t1

0xd4d6,	// (0x0001a78c) main_cset_text_pane_t2

0xd4e4,	// (0x0001a79a) main_cset_text_pane_t3

0xd4f2,	// (0x0001a7a8) main_cset_text_pane_t4

0xd500,	// (0x0001a7b6) main_cset_text_pane_t5

0xd50e,	// (0x0001a7c4) main_cset_text_pane_t6

0xd51c,	// (0x0001a7d2) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0001cd10) main_cset_text_pane_t

0x94bc,	// (0x00016772) main_cam4_burst_pane

0x94bc,	// (0x00016772) main_cam5_pane

0x6955,	// (0x00013c0b) bg_button_pane_cp019

0x695e,	// (0x00013c14) bg_button_pane_cp020

0xd2ed,	// (0x0001a5a3) main_cset_slider_pane_g7_ParamLimits

0xd2ed,	// (0x0001a5a3) main_cset_slider_pane_g7

0xd2f9,	// (0x0001a5af) main_cset_slider_pane_g8_ParamLimits

0xd2f9,	// (0x0001a5af) main_cset_slider_pane_g8

0x6ab5,	// (0x00013d6b) main_cset_slider_pane_g9_ParamLimits

0x6ab5,	// (0x00013d6b) main_cset_slider_pane_g9

0x6ac1,	// (0x00013d77) main_cset_slider_pane_g10_ParamLimits

0x6ac1,	// (0x00013d77) main_cset_slider_pane_g10

0x6acd,	// (0x00013d83) main_cset_slider_pane_g11_ParamLimits

0x6acd,	// (0x00013d83) main_cset_slider_pane_g11

0x6ad9,	// (0x00013d8f) main_cset_slider_pane_g12_ParamLimits

0x6ad9,	// (0x00013d8f) main_cset_slider_pane_g12

0x6ae5,	// (0x00013d9b) main_cset_slider_pane_g13_ParamLimits

0x6ae5,	// (0x00013d9b) main_cset_slider_pane_g13

0x6af1,	// (0x00013da7) main_cset_slider_pane_g14_ParamLimits

0x6af1,	// (0x00013da7) main_cset_slider_pane_g14

0x6afd,	// (0x00013db3) main_cset_slider_pane_g15_ParamLimits

0x6afd,	// (0x00013db3) main_cset_slider_pane_g15

0xd33f,	// (0x0001a5f5) main_cset_slider_pane_t14_ParamLimits

0xd33f,	// (0x0001a5f5) main_cset_slider_pane_t14

0xd378,	// (0x0001a62e) main_cset_slider_pane_t15_ParamLimits

0xd378,	// (0x0001a62e) main_cset_slider_pane_t15

0x70b4,	// (0x0001436a) aid_cam4_burst_size_cell_ParamLimits

0x70b4,	// (0x0001436a) aid_cam4_burst_size_cell

0x70d4,	// (0x0001438a) grid_cam4_burst_pane_ParamLimits

0x70d4,	// (0x0001438a) grid_cam4_burst_pane

0x710c,	// (0x000143c2) linegrid_cam4_burst_pane_ParamLimits

0x710c,	// (0x000143c2) linegrid_cam4_burst_pane

0x015e,	// (0x0000d414) scroll_pane_cp30_ParamLimits

0x015e,	// (0x0000d414) scroll_pane_cp30

0x7132,	// (0x000143e8) cell_cam4_burst_pane_ParamLimits

0x7132,	// (0x000143e8) cell_cam4_burst_pane

0xd52a,	// (0x0001a7e0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52a,	// (0x0001a7e0) linegrid_cam4_burst_pane_g1

0x717f,	// (0x00014435) linegrid_cam4_burst_pane_g2_ParamLimits

0x717f,	// (0x00014435) linegrid_cam4_burst_pane_g2

0xd537,	// (0x0001a7ed) linegrid_cam4_burst_pane_g3_ParamLimits

0xd537,	// (0x0001a7ed) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0001cd1f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0001cd1f) linegrid_cam4_burst_pane_g

0x7190,	// (0x00014446) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7190,	// (0x00014446) linegrid_cam4_burst_pane_g3_copy1

0xd544,	// (0x0001a7fa) linegrid_cam4_burst_pane_g4_ParamLimits

0xd544,	// (0x0001a7fa) linegrid_cam4_burst_pane_g4

0x71aa,	// (0x00014460) linegrid_cam4_burst_pane_g5_ParamLimits

0x71aa,	// (0x00014460) linegrid_cam4_burst_pane_g5

0x71bb,	// (0x00014471) linegrid_cam4_burst_pane_g6_ParamLimits

0x71bb,	// (0x00014471) linegrid_cam4_burst_pane_g6

0xd551,	// (0x0001a807) linegrid_cam4_burst_pane_g7_ParamLimits

0xd551,	// (0x0001a807) linegrid_cam4_burst_pane_g7

0x71d2,	// (0x00014488) cell_cam4_burst_pane_g1

0xd56a,	// (0x0001a820) main_cam5_pane_t1_ParamLimits

0xd56a,	// (0x0001a820) main_cam5_pane_t1

0xd57c,	// (0x0001a832) main_cam5_pane_t2_ParamLimits

0xd57c,	// (0x0001a832) main_cam5_pane_t2

0xd58e,	// (0x0001a844) main_cam5_pane_t3_ParamLimits

0xd58e,	// (0x0001a844) main_cam5_pane_t3

0xd5a0,	// (0x0001a856) main_cam5_pane_t4_ParamLimits

0xd5a0,	// (0x0001a856) main_cam5_pane_t4

0xd5b6,	// (0x0001a86c) main_cam5_pane_t5_ParamLimits

0xd5b6,	// (0x0001a86c) main_cam5_pane_t5

0xd5c8,	// (0x0001a87e) main_cam5_pane_t6_ParamLimits

0xd5c8,	// (0x0001a87e) main_cam5_pane_t6

0xd5dc,	// (0x0001a892) main_cam5_pane_t7_ParamLimits

0xd5dc,	// (0x0001a892) main_cam5_pane_t7

0xd5ee,	// (0x0001a8a4) main_cam5_pane_t8_ParamLimits

0xd5ee,	// (0x0001a8a4) main_cam5_pane_t8

0xd60a,	// (0x0001a8c0) main_cam5_pane_t9_ParamLimits

0xd60a,	// (0x0001a8c0) main_cam5_pane_t9

0xd61c,	// (0x0001a8d2) main_cam5_pane_t10_ParamLimits

0xd61c,	// (0x0001a8d2) main_cam5_pane_t10

0xd62e,	// (0x0001a8e4) main_cam5_pane_t11_ParamLimits

0xd62e,	// (0x0001a8e4) main_cam5_pane_t11

0xd640,	// (0x0001a8f6) main_cam5_pane_t12_ParamLimits

0xd640,	// (0x0001a8f6) main_cam5_pane_t12

0xd655,	// (0x0001a90b) main_cam5_pane_t13_ParamLimits

0xd655,	// (0x0001a90b) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0001cd2b) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0001cd2b) main_cam5_pane_t

0x1323,	// (0x0000e5d9) popup_scut_keymap_window_ParamLimits

0x1323,	// (0x0000e5d9) popup_scut_keymap_window

0x71e5,	// (0x0001449b) aid_size_cell_brow_shortcut

0xaa73,	// (0x00017d29) bg_popup_window_pane_cp010

0x71f1,	// (0x000144a7) grid_scut_pane

0x71fd,	// (0x000144b3) cell_scut_pane_ParamLimits

0x71fd,	// (0x000144b3) cell_scut_pane

0x7214,	// (0x000144ca) cell_scut_pane_g1

0xd672,	// (0x0001a928) cell_scut_pane_t1

0xd681,	// (0x0001a937) cell_scut_pane_t2

0x721d,	// (0x000144d3) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0001cd46) cell_scut_pane_t

0x4f19,	// (0x000121cf) main_mup3_pane_g8_ParamLimits

0x4f19,	// (0x000121cf) main_mup3_pane_g8

0x63f2,	// (0x000136a8) area_vitu2_query_pane_ParamLimits

0x63f2,	// (0x000136a8) area_vitu2_query_pane

0x6ffe,	// (0x000142b4) input_focus_pane_cp08

0xd690,	// (0x0001a946) area_vitu2_query_pane_g1

0x722b,	// (0x000144e1) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0001cd4d) area_vitu2_query_pane_g

0x723c,	// (0x000144f2) area_vitu2_query_pane_t1_ParamLimits

0x723c,	// (0x000144f2) area_vitu2_query_pane_t1

0x7250,	// (0x00014506) area_vitu2_query_pane_t2_ParamLimits

0x7250,	// (0x00014506) area_vitu2_query_pane_t2

0x7264,	// (0x0001451a) area_vitu2_query_pane_t3_ParamLimits

0x7264,	// (0x0001451a) area_vitu2_query_pane_t3

0xd69c,	// (0x0001a952) area_vitu2_query_pane_t4_ParamLimits

0xd69c,	// (0x0001a952) area_vitu2_query_pane_t4

0xd6c4,	// (0x0001a97a) area_vitu2_query_pane_t5_ParamLimits

0xd6c4,	// (0x0001a97a) area_vitu2_query_pane_t5

0xd6ec,	// (0x0001a9a2) area_vitu2_query_pane_t6_ParamLimits

0xd6ec,	// (0x0001a9a2) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0001cd52) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0001cd52) area_vitu2_query_pane_t

0x728c,	// (0x00014542) bg_button_pane_cp018

0x729a,	// (0x00014550) bg_button_pane_cp021

0x72a6,	// (0x0001455c) bg_button_pane_cp022

0x72b7,	// (0x0001456d) input_focus_pane_cp09

0x2edc,	// (0x00010192) aid_size_touch_mv_arrow_left

0x2f05,	// (0x000101bb) aid_size_touch_mv_arrow_right

0x6b15,	// (0x00013dcb) main_cset_slider_pane_g16_ParamLimits

0x6b15,	// (0x00013dcb) main_cset_slider_pane_g16

0x6b21,	// (0x00013dd7) main_cset_slider_pane_g17_ParamLimits

0x6b21,	// (0x00013dd7) main_cset_slider_pane_g17

0x71d2,	// (0x00014488) cell_cam4_burst_pane_g1_ParamLimits

0x94bc,	// (0x00016772) compa_mode_pane

0x6d2f,	// (0x00013fe5) popup_vtel_slider_window_g3_ParamLimits

0x6d2f,	// (0x00013fe5) popup_vtel_slider_window_g3

0x6d46,	// (0x00013ffc) popup_vtel_slider_window_g4_ParamLimits

0x6d46,	// (0x00013ffc) popup_vtel_slider_window_g4

0x6d5d,	// (0x00014013) popup_vtel_slider_window_t1_ParamLimits

0x6d5d,	// (0x00014013) popup_vtel_slider_window_t1

0x94bc,	// (0x00016772) main_cl_pane

0xbf32,	// (0x000191e8) popup_imed_adjust2_window_ParamLimits

0xbf0a,	// (0x000191c0) bg_tb_trans_pane_cp05_ParamLimits

0xc941,	// (0x00019bf7) popup_imed_adjust2_window_g1_ParamLimits

0xc950,	// (0x00019c06) popup_imed_adjust2_window_g2_ParamLimits

0xc950,	// (0x00019c06) popup_imed_adjust2_window_g2

0xc95c,	// (0x00019c12) popup_imed_adjust2_window_g3_ParamLimits

0xc95c,	// (0x00019c12) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0001cac3) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0001cac3) popup_imed_adjust2_window_g

0xc968,	// (0x00019c1e) popup_imed_adjust2_window_t1_ParamLimits

0xc980,	// (0x00019c36) slider_imed_adjust_pane_ParamLimits

0xc994,	// (0x00019c4a) slider_imed_adjust_pane_g1_ParamLimits

0xc9a4,	// (0x00019c5a) slider_imed_adjust_pane_g2_ParamLimits

0xc9b4,	// (0x00019c6a) slider_imed_adjust_pane_g3_ParamLimits

0xc9c5,	// (0x00019c7b) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0001caca) slider_imed_adjust_pane_g_ParamLimits

0x60fb,	// (0x000133b1) aid_touch_area_cam4_ParamLimits

0x60fb,	// (0x000133b1) aid_touch_area_cam4

0xd0ae,	// (0x0001a364) battery_pane_cp01

0x61cb,	// (0x00013481) main_camera4_pane_g6_ParamLimits

0x61cb,	// (0x00013481) main_camera4_pane_g6

0x61f5,	// (0x000134ab) main_camera4_pane_t2_ParamLimits

0x61f5,	// (0x000134ab) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0001cbcd) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0001cbcd) main_camera4_pane_t

0x623c,	// (0x000134f2) aid_touch_area_vid4_ParamLimits

0x623c,	// (0x000134f2) aid_touch_area_vid4

0x62a3,	// (0x00013559) main_video4_pane_g5_ParamLimits

0x62a3,	// (0x00013559) main_video4_pane_g5

0x62ce,	// (0x00013584) vid4_progress_pane_ParamLimits

0x62ce,	// (0x00013584) vid4_progress_pane

0xd305,	// (0x0001a5bb) main_cset_slider_pane_g18_ParamLimits

0xd305,	// (0x0001a5bb) main_cset_slider_pane_g18

0xd55e,	// (0x0001a814) cell_cam4_burst_pane_g2_ParamLimits

0xd55e,	// (0x0001a814) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0001cd26) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0001cd26) cell_cam4_burst_pane_g

0x9cd7,	// (0x00016f8d) bg_cl_pane_ParamLimits

0x9cd7,	// (0x00016f8d) bg_cl_pane

0x72c8,	// (0x0001457e) cl_header_pane_ParamLimits

0x72c8,	// (0x0001457e) cl_header_pane

0x72dc,	// (0x00014592) cl_listscroll_pane_ParamLimits

0x72dc,	// (0x00014592) cl_listscroll_pane

0xd738,	// (0x0001a9ee) bg_cl_pane_g1

0xd740,	// (0x0001a9f6) bg_cl_pane_g2

0xd748,	// (0x0001a9fe) bg_cl_pane_g3

0xd750,	// (0x0001aa06) bg_cl_pane_g4

0xd758,	// (0x0001aa0e) bg_cl_pane_g5

0xd760,	// (0x0001aa16) bg_cl_pane_g6

0xd768,	// (0x0001aa1e) bg_cl_pane_g7

0xd770,	// (0x0001aa26) bg_cl_pane_g8

0xd778,	// (0x0001aa2e) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0001cd61) bg_cl_pane_g

0x72ec,	// (0x000145a2) aid_height_cl_leading_ParamLimits

0x72ec,	// (0x000145a2) aid_height_cl_leading

0x72f8,	// (0x000145ae) aid_height_cl_text_ParamLimits

0x72f8,	// (0x000145ae) aid_height_cl_text

0x952c,	// (0x000167e2) bg_cl_header_pane_ParamLimits

0x952c,	// (0x000167e2) bg_cl_header_pane

0x7317,	// (0x000145cd) cl_header_pane_g1_ParamLimits

0x7317,	// (0x000145cd) cl_header_pane_g1

0x732d,	// (0x000145e3) cl_header_pane_t1_ParamLimits

0x732d,	// (0x000145e3) cl_header_pane_t1

0xd780,	// (0x0001aa36) cl_list_pane

0xd2d8,	// (0x0001a58e) hc_scroll_pane_cp01

0xa2a1,	// (0x00017557) bg_cl_header_pane_g1

0xd1be,	// (0x0001a474) bg_cl_header_pane_g2

0xa2c1,	// (0x00017577) bg_cl_header_pane_g3

0xd1ce,	// (0x0001a484) bg_cl_header_pane_g4

0xd1c6,	// (0x0001a47c) bg_cl_header_pane_g5

0xd43f,	// (0x0001a6f5) bg_cl_header_pane_g6

0xd1e6,	// (0x0001a49c) bg_cl_header_pane_g7

0xd1ee,	// (0x0001a4a4) bg_cl_header_pane_g8

0xd1de,	// (0x0001a494) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0001cd74) bg_cl_header_pane_g

0x7346,	// (0x000145fc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7346,	// (0x000145fc) hc_cl_list_double_graphic_heading_pane

0x735a,	// (0x00014610) hc_cl_list_single_graphic_pane_ParamLimits

0x735a,	// (0x00014610) hc_cl_list_single_graphic_pane

0x7374,	// (0x0001462a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7374,	// (0x0001462a) hc_cl_list_single_graphic_pane_g1

0x7380,	// (0x00014636) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7380,	// (0x00014636) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0001cd87) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0001cd87) hc_cl_list_single_graphic_pane_g

0x7394,	// (0x0001464a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7394,	// (0x0001464a) hc_cl_list_single_graphic_pane_t1

0x7374,	// (0x0001462a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7374,	// (0x0001462a) hc_cl_list_double_graphic_heading_pane_g1

0x73a9,	// (0x0001465f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73a9,	// (0x0001465f) hc_cl_list_double_graphic_heading_pane_g2

0x73bd,	// (0x00014673) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73bd,	// (0x00014673) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0001cd8c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0001cd8c) hc_cl_list_double_graphic_heading_pane_g

0x73d1,	// (0x00014687) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73d1,	// (0x00014687) hc_cl_list_double_graphic_heading_pane_t1

0x73e6,	// (0x0001469c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73e6,	// (0x0001469c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0001cd93) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0001cd93) hc_cl_list_double_graphic_heading_pane_t

0xd791,	// (0x0001aa47) vid4_progress_pane_g1

0xd7a1,	// (0x0001aa57) vid4_progress_pane_g2

0xd7b1,	// (0x0001aa67) vid4_progress_pane_g3

0xd0d7,	// (0x0001a38d) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0001cd98) vid4_progress_pane_g

0xd7bd,	// (0x0001aa73) vid4_progress_pane_t1

0xd7d2,	// (0x0001aa88) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0001cda3) vid4_progress_pane_t

0xd7fd,	// (0x0001aab3) wait_bar_pane_cp07

0xc203,	// (0x000194b9) blid_firmament_pane_ParamLimits

0xc246,	// (0x000194fc) popup_blid_sat_info2_window_g1

0xc26a,	// (0x00019520) popup_blid_sat_info2_window_t3

0xc278,	// (0x0001952e) popup_blid_sat_info2_window_t4

0xc286,	// (0x0001953c) popup_blid_sat_info2_window_t5

0xc294,	// (0x0001954a) popup_blid_sat_info2_window_t6

0xc2a4,	// (0x0001955a) popup_blid_sat_info2_window_t7

0xc2b2,	// (0x00019568) popup_blid_sat_info2_window_t8

0xc2c0,	// (0x00019576) popup_blid_sat_info2_window_t9

0xc2ce,	// (0x00019584) popup_blid_sat_info2_window_t10

0xc392,	// (0x00019648) aid_firma_cardinal_ParamLimits

0xc3a6,	// (0x0001965c) blid_firmament_pane_t1_ParamLimits

0xc3bd,	// (0x00019673) blid_firmament_pane_t2_ParamLimits

0xc3d4,	// (0x0001968a) blid_firmament_pane_t3_ParamLimits

0xc3eb,	// (0x000196a1) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0001c9bc) blid_firmament_pane_t_ParamLimits

0xc402,	// (0x000196b8) blid_sat_info_pane_ParamLimits

0x952c,	// (0x000167e2) main_cam_set_pane_ParamLimits

0x5787,	// (0x00012a3d) aid_size_cell_colour_35_ParamLimits

0x57a7,	// (0x00012a5d) aid_size_cell_colour_112_ParamLimits

0x57c7,	// (0x00012a7d) aid_size_cell_effect_ParamLimits

0xbf0a,	// (0x000191c0) bg_tb_trans_pane_cp02_ParamLimits

0xa4c1,	// (0x00017777) heading_imed_pane_ParamLimits

0x57e7,	// (0x00012a9d) listscroll_imed_pane_ParamLimits

0xb53c,	// (0x000187f2) popup_call2_audio_first_window_g5_ParamLimits

0xb53c,	// (0x000187f2) popup_call2_audio_first_window_g5

0x5da2,	// (0x00013058) aid_size_touch_image3_arrow_left_ParamLimits

0x5da2,	// (0x00013058) aid_size_touch_image3_arrow_left

0x5dce,	// (0x00013084) aid_size_touch_image3_arrow_right_ParamLimits

0x5dce,	// (0x00013084) aid_size_touch_image3_arrow_right

0xd7e8,	// (0x0001aa9e) vid4_progress_pane_t3

0x5b0a,	// (0x00012dc0) main_hwr_training_symbol_option_pane_ParamLimits

0x5b0a,	// (0x00012dc0) main_hwr_training_symbol_option_pane

0xcc2e,	// (0x00019ee4) popup_hwr_training_preview_window_ParamLimits

0xcc2e,	// (0x00019ee4) popup_hwr_training_preview_window

0x5b2a,	// (0x00012de0) hwr_training_navi_pane_g5_ParamLimits

0x5b2a,	// (0x00012de0) hwr_training_navi_pane_g5

0xd1ac,	// (0x0001a462) popup_char_count_window

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp20_ParamLimits

0x6e75,	// (0x0001412b) list_vitu2_match_list_pane_ParamLimits

0x6e84,	// (0x0001413a) vitu2_page_scroll_pane_ParamLimits

0x6e84,	// (0x0001413a) vitu2_page_scroll_pane

0xd867,	// (0x0001ab1d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd867,	// (0x0001ab1d) list_single_hwr_training_symbol_option_pane

0xd87a,	// (0x0001ab30) list_single_hwr_training_symbol_option_pane_g1

0xd882,	// (0x0001ab38) list_single_hwr_training_symbol_option_pane_t1

0xd890,	// (0x0001ab46) bg_button_pane_cp023

0xd899,	// (0x0001ab4f) bg_button_pane_cp024

0x73fb,	// (0x000146b1) vitu2_page_scroll_pane_g1

0x7403,	// (0x000146b9) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0001cdaa) vitu2_page_scroll_pane_g

0x740b,	// (0x000146c1) vitu2_page_scroll_pane_t1

0xc11f,	// (0x000193d5) popup_char_count_window_g1

0xd8cc,	// (0x0001ab82) popup_char_count_window_g2

0xd8d5,	// (0x0001ab8b) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0001cdaf) popup_char_count_window_g

0xd8de,	// (0x0001ab94) popup_char_count_window_t1

0x94bc,	// (0x00016772) main_vded2_pane

0xc91f,	// (0x00019bd5) aid_size_cell_imed_line

0xc937,	// (0x00019bed) grid_imed_line_width_pane

0x633e,	// (0x000135f4) vid4_indicators_pane_g4

0xd8ec,	// (0x0001aba2) cell_imed_line_width_pane_ParamLimits

0xd8ec,	// (0x0001aba2) cell_imed_line_width_pane

0xd900,	// (0x0001abb6) cell_imed_line_width_pane_g1

0xd909,	// (0x0001abbf) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0001cdb6) cell_imed_line_width_pane_g

0x741a,	// (0x000146d0) main_vded2_pane_g1_ParamLimits

0x741a,	// (0x000146d0) main_vded2_pane_g1

0x7430,	// (0x000146e6) main_vded2_pane_g2_ParamLimits

0x7430,	// (0x000146e6) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0001cdbb) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0001cdbb) main_vded2_pane_g

0x7442,	// (0x000146f8) vded2_slider_pane_ParamLimits

0x7442,	// (0x000146f8) vded2_slider_pane

0x7452,	// (0x00014708) aid_size_touch_vded2_end

0x745c,	// (0x00014712) aid_size_touch_vded2_playhead

0xd911,	// (0x0001abc7) aid_size_touch_vded2_start

0xd919,	// (0x0001abcf) vded2_slider_bg_pane

0xd922,	// (0x0001abd8) vded2_slider_pane_g1

0xd92b,	// (0x0001abe1) vded2_slider_pane_g2

0x7466,	// (0x0001471c) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0001cdc0) vded2_slider_pane_g

0xd933,	// (0x0001abe9) vded2_slider_bg_pane_g1

0xd93c,	// (0x0001abf2) vded2_slider_bg_pane_g2

0xd945,	// (0x0001abfb) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0001cdc7) vded2_slider_bg_pane_g

0x3550,	// (0x00010806) aid_postcard_touch_down_pane_ParamLimits

0x3550,	// (0x00010806) aid_postcard_touch_down_pane

0x3566,	// (0x0001081c) aid_postcard_touch_up_pane_ParamLimits

0x3566,	// (0x0001081c) aid_postcard_touch_up_pane

0x94bc,	// (0x00016772) main_blid2_pane

0xbf18,	// (0x000191ce) popup_blid2_search_window

0x94bc,	// (0x00016772) blid2_gps_pane

0x94bc,	// (0x00016772) blid2_navig_pane

0x94bc,	// (0x00016772) blid2_search_pane

0x94bc,	// (0x00016772) blid2_tripm_pane

0x7471,	// (0x00014727) blid2_search_pane_g1_ParamLimits

0x7471,	// (0x00014727) blid2_search_pane_g1

0x7489,	// (0x0001473f) blid2_search_pane_t1_ParamLimits

0x7489,	// (0x0001473f) blid2_search_pane_t1

0x749b,	// (0x00014751) aid_size_cell_blid2_gps_ParamLimits

0x749b,	// (0x00014751) aid_size_cell_blid2_gps

0x74b3,	// (0x00014769) blid2_gps_pane_g1_ParamLimits

0x74b3,	// (0x00014769) blid2_gps_pane_g1

0x74c7,	// (0x0001477d) grid_blid2_satellite_pane_ParamLimits

0x74c7,	// (0x0001477d) grid_blid2_satellite_pane

0x74e1,	// (0x00014797) blid2_navig_pane_g1_ParamLimits

0x74e1,	// (0x00014797) blid2_navig_pane_g1

0x74ed,	// (0x000147a3) blid2_navig_pane_t1_ParamLimits

0x74ed,	// (0x000147a3) blid2_navig_pane_t1

0x7508,	// (0x000147be) blid2_navig_pane_t2_ParamLimits

0x7508,	// (0x000147be) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0001cdce) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0001cdce) blid2_navig_pane_t

0x7523,	// (0x000147d9) blid2_navig_ring_pane_ParamLimits

0x7523,	// (0x000147d9) blid2_navig_ring_pane

0x753c,	// (0x000147f2) blid2_speed_pane_ParamLimits

0x753c,	// (0x000147f2) blid2_speed_pane

0x7548,	// (0x000147fe) blid2_tripm_pane_g1_ParamLimits

0x7548,	// (0x000147fe) blid2_tripm_pane_g1

0x7563,	// (0x00014819) blid2_tripm_pane_g2_ParamLimits

0x7563,	// (0x00014819) blid2_tripm_pane_g2

0x7577,	// (0x0001482d) blid2_tripm_pane_g3_ParamLimits

0x7577,	// (0x0001482d) blid2_tripm_pane_g3

0x758b,	// (0x00014841) blid2_tripm_pane_g4_ParamLimits

0x758b,	// (0x00014841) blid2_tripm_pane_g4

0x759f,	// (0x00014855) blid2_tripm_pane_g5_ParamLimits

0x759f,	// (0x00014855) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0001cdd3) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0001cdd3) blid2_tripm_pane_g

0x75c5,	// (0x0001487b) blid2_tripm_pane_t1_ParamLimits

0x75c5,	// (0x0001487b) blid2_tripm_pane_t1

0x75e0,	// (0x00014896) blid2_tripm_pane_t2_ParamLimits

0x75e0,	// (0x00014896) blid2_tripm_pane_t2

0x75fb,	// (0x000148b1) blid2_tripm_pane_t3_ParamLimits

0x75fb,	// (0x000148b1) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0001cde0) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0001cde0) blid2_tripm_pane_t

0x7642,	// (0x000148f8) cell_blid2_satellite_pane_ParamLimits

0x7642,	// (0x000148f8) cell_blid2_satellite_pane

0x7660,	// (0x00014916) cell_blid2_satellite_pane_g1

0xd94e,	// (0x0001ac04) cell_blid2_satellite_pane_t1

0xc412,	// (0x000196c8) blid2_speed_pane_g1

0xd95c,	// (0x0001ac12) blid2_speed_pane_t1

0xd96a,	// (0x0001ac20) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0001cde9) blid2_speed_pane_t

0xc412,	// (0x000196c8) blid2_navig_ring_pane_g1

0x7669,	// (0x0001491f) blid2_navig_ring_pane_g2

0x7671,	// (0x00014927) blid2_navig_ring_pane_g3

0x7679,	// (0x0001492f) blid2_navig_ring_pane_g4

0x7681,	// (0x00014937) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0001cdee) blid2_navig_ring_pane_g

0x94bc,	// (0x00016772) bg_popup_window_pane_cp011

0xd978,	// (0x0001ac2e) popup_blid2_search_window_g1

0xd980,	// (0x0001ac36) popup_blid2_search_window_t1

0xd98e,	// (0x0001ac44) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0001cdf9) popup_blid2_search_window_t

0xa1b0,	// (0x00017466) main_browser_pane_g1

0x9cd7,	// (0x00016f8d) main_browser_pane_ParamLimits

0x952c,	// (0x000167e2) bg_button_pane_cp011_ParamLimits

0x66f1,	// (0x000139a7) cell_vitu2_function_pane_g1_ParamLimits

0x952c,	// (0x000167e2) bg_popup_sub_pane_cp22_ParamLimits

0x6ffe,	// (0x000142b4) input_focus_pane_cp08_ParamLimits

0x700b,	// (0x000142c1) popup_vitu2_query_button_pane_ParamLimits

0x700b,	// (0x000142c1) popup_vitu2_query_button_pane

0x6fe0,	// (0x00014296) popup_vitu2_query_input_button_pane

0xd4b4,	// (0x0001a76a) popup_vitu2_query_window_g1_ParamLimits

0x701c,	// (0x000142d2) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0001cd00) popup_vitu2_query_window_g_ParamLimits

0x94bc,	// (0x00016772) bg_button_pane_cp026

0x7689,	// (0x0001493f) popup_vitu2_query_input_button_pane_g1

0x94bc,	// (0x00016772) bg_button_pane_cp025

0xd99c,	// (0x0001ac52) popup_vitu2_query_button_pane_t1

0x4bf4,	// (0x00011eaa) main_mp3_pane_t6

0x4c02,	// (0x00011eb8) popup_slider_window_cp01

0xd0be,	// (0x0001a374) cam4_battery_pane

0xd117,	// (0x0001a3cd) cam4_battery_pane_cp02

0xd789,	// (0x0001aa3f) cam4_battery_pane_cp01

0xd789,	// (0x0001aa3f) cam4_battery_pane_cp03

0xc412,	// (0x000196c8) cam4_battery_pane_g1

0xd9aa,	// (0x0001ac60) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0001cdfe) cam4_battery_pane_g

0xc2dc,	// (0x00019592) popup_blid_sat_info2_window_t11

0x2edc,	// (0x00010192) aid_size_touch_mv_arrow_left_ParamLimits

0x2f05,	// (0x000101bb) aid_size_touch_mv_arrow_right_ParamLimits

0xa9d3,	// (0x00017c89) navi_pane_g1_ParamLimits

0x2f2e,	// (0x000101e4) navi_pane_g2_ParamLimits

0x2f5c,	// (0x00010212) navi_pane_g3_ParamLimits

0xf418,	// (0x0001c6ce) navi_pane_g_ParamLimits

0x2fb4,	// (0x0001026a) navi_pane_mv_t1_ParamLimits

0x57f3,	// (0x00012aa9) grid_imed_effect_pane_ParamLimits

0xa0f9,	// (0x000173af) aid_placing_vt_slider_lsc

0xa101,	// (0x000173b7) aid_placing_vt_slider_prt

0x952c,	// (0x000167e2) bg_tb_trans_pane_cp01_ParamLimits

0xc599,	// (0x0001984f) popup_image_details_window_g1_ParamLimits

0xc5ac,	// (0x00019862) popup_image_details_window_g2_ParamLimits

0xc5c1,	// (0x00019877) popup_image_details_window_g3_ParamLimits

0xc5c1,	// (0x00019877) popup_image_details_window_g3

0xf74b,	// (0x0001ca01) popup_image_details_window_g_ParamLimits

0xc5d5,	// (0x0001988b) popup_image_details_window_t1_ParamLimits

0xc5e7,	// (0x0001989d) popup_image_details_window_t2_ParamLimits

0xc600,	// (0x000198b6) popup_image_details_window_t3_ParamLimits

0xc614,	// (0x000198ca) popup_image_details_window_t4_ParamLimits

0xc62f,	// (0x000198e5) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0001ca08) popup_image_details_window_t_ParamLimits

0x7304,	// (0x000145ba) cl_header_name_pane_ParamLimits

0x7304,	// (0x000145ba) cl_header_name_pane

0x7691,	// (0x00014947) cl_header_name_pane_t1_ParamLimits

0x7691,	// (0x00014947) cl_header_name_pane_t1

0x76b2,	// (0x00014968) cl_header_name_pane_t2_ParamLimits

0x76b2,	// (0x00014968) cl_header_name_pane_t2

0x76f4,	// (0x000149aa) cl_header_name_pane_t3_ParamLimits

0x76f4,	// (0x000149aa) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0001ce03) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0001ce03) cl_header_name_pane_t

0x2f85,	// (0x0001023b) navi_pane_mv_g2_ParamLimits

0xd138,	// (0x0001a3ee) field_vitu2_entry_pane_g1_ParamLimits

0xd144,	// (0x0001a3fa) field_vitu2_entry_pane_g2_ParamLimits

0xd150,	// (0x0001a406) field_vitu2_entry_pane_g3_ParamLimits

0xd150,	// (0x0001a406) field_vitu2_entry_pane_g3

0xf949,	// (0x0001cbff) field_vitu2_entry_pane_g_ParamLimits

0x6591,	// (0x00013847) cell_vitu2_itu_pane_g1_ParamLimits

0x65a1,	// (0x00013857) cell_vitu2_itu_pane_g2_ParamLimits

0x65a1,	// (0x00013857) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0001cc0b) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0001cc0b) cell_vitu2_itu_pane_g

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp05_ParamLimits

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp05

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp03

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp04

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp10_ParamLimits

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp10

0x72a6,	// (0x0001455c) bg_vkb2_func_pane_cp08

0x728c,	// (0x00014542) bg_vkb2_func_pane_cp06

0x729a,	// (0x00014550) bg_vkb2_func_pane_cp07

0xd8a2,	// (0x0001ab58) bg_vkb2_func_pane_cp11_ParamLimits

0xd8a2,	// (0x0001ab58) bg_vkb2_func_pane_cp11

0xd8b7,	// (0x0001ab6d) bg_vkb2_func_pane_cp12_ParamLimits

0xd8b7,	// (0x0001ab6d) bg_vkb2_func_pane_cp12

0x94bc,	// (0x00016772) bg_vkb2_func_pane_cp09

0xd1be,	// (0x0001a474) bg_vkb2_func_pane_g1

0xa2c1,	// (0x00017577) bg_vkb2_func_pane_g2

0xd1c6,	// (0x0001a47c) bg_vkb2_func_pane_g3

0xd1ce,	// (0x0001a484) bg_vkb2_func_pane_g4

0xd43f,	// (0x0001a6f5) bg_vkb2_func_pane_g5

0xd1e6,	// (0x0001a49c) bg_vkb2_func_pane_g6

0xd1ee,	// (0x0001a4a4) bg_vkb2_func_pane_g7

0xd1de,	// (0x0001a494) bg_vkb2_func_pane_g8

0xa2a1,	// (0x00017557) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0001ce0a) bg_vkb2_func_pane_g

0x75b3,	// (0x00014869) blid2_tripm_pane_g6_ParamLimits

0x75b3,	// (0x00014869) blid2_tripm_pane_g6

0xcf1f,	// (0x0001a1d5) mp4_progress_pane_g1

0x762e,	// (0x000148e4) blid2_tripm_values_pane_ParamLimits

0x762e,	// (0x000148e4) blid2_tripm_values_pane

0x7725,	// (0x000149db) blid2_tripm_values_pane_t1

0x7733,	// (0x000149e9) blid2_tripm_values_pane_t2

0x7741,	// (0x000149f7) blid2_tripm_values_pane_t3

0x774f,	// (0x00014a05) blid2_tripm_values_pane_t4

0x775d,	// (0x00014a13) blid2_tripm_values_pane_t5

0x776b,	// (0x00014a21) blid2_tripm_values_pane_t6

0x7779,	// (0x00014a2f) blid2_tripm_values_pane_t7

0x7787,	// (0x00014a3d) blid2_tripm_values_pane_t8

0x7795,	// (0x00014a4b) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0001ce1d) blid2_tripm_values_pane_t

0x1f7d,	// (0x0000f233) call_video_pane_t1_ParamLimits

0x1f8f,	// (0x0000f245) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0001c557) call_video_pane_t_ParamLimits

0x3489,	// (0x0001073f) msg_header_pane_g1_ParamLimits

0xac0e,	// (0x00017ec4) msg_header_pane_g2_ParamLimits

0xac0e,	// (0x00017ec4) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0001c771) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0001c771) msg_header_pane_g

0x9cd7,	// (0x00016f8d) main_clock2_pane_ParamLimits

0x5518,	// (0x000127ce) grid_clock2_toolbar_pane_ParamLimits

0x5518,	// (0x000127ce) grid_clock2_toolbar_pane

0x5518,	// (0x000127ce) listscroll_clock2_pane_ParamLimits

0x5518,	// (0x000127ce) listscroll_clock2_pane

0x55f5,	// (0x000128ab) main_clock2_pane_t3_ParamLimits

0x55f5,	// (0x000128ab) main_clock2_pane_t3

0x5610,	// (0x000128c6) main_clock2_pane_t4_ParamLimits

0x5610,	// (0x000128c6) main_clock2_pane_t4

0xd9b4,	// (0x0001ac6a) cell_clock2_toolbar_pane

0xd9bc,	// (0x0001ac72) cell_clock2_toolbar_pane_cp01

0xd9bc,	// (0x0001ac72) cell_clock2_toolbar_pane_cp02

0xd9c4,	// (0x0001ac7a) cell_clock2_toolbar_pane_cp03

0xd9cc,	// (0x0001ac82) list_clock2_pane

0xa926,	// (0x00017bdc) scroll_pane_cp10

0xd9d4,	// (0x0001ac8a) list_single_clock2_pane_ParamLimits

0xd9d4,	// (0x0001ac8a) list_single_clock2_pane

0xaa73,	// (0x00017d29) list_highlight_pane_cp08

0xd9e1,	// (0x0001ac97) list_single_clock2_pane_t1

0xd9ef,	// (0x0001aca5) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0001ce30) list_single_clock2_pane_t

0x94bc,	// (0x00016772) bg_button_pane_cp10

0xd9fd,	// (0x0001acb3) cell_clock2_toolbar_pane_g1

0x34dc,	// (0x00010792) aid_main_viewer_pane_g1_ParamLimits

0x34dc,	// (0x00010792) aid_main_viewer_pane_g1

0x34ea,	// (0x000107a0) aid_main_viewer_pane_g2_ParamLimits

0x34ea,	// (0x000107a0) aid_main_viewer_pane_g2

0x34f8,	// (0x000107ae) aid_main_viewer_pane_g3_ParamLimits

0x34f8,	// (0x000107ae) aid_main_viewer_pane_g3

0x3507,	// (0x000107bd) aid_main_viewer_pane_g4_ParamLimits

0x3507,	// (0x000107bd) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0001c782) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0001c782) aid_main_viewer_pane_g

0x3e1b,	// (0x000110d1) main_calc_pane_ParamLimits

0x3e2f,	// (0x000110e5) main_dialer2_pane_ParamLimits

0x94bc,	// (0x00016772) main_cam6_pane

0x94bc,	// (0x00016772) main_vid6_pane

0x5524,	// (0x000127da) listscroll_gen_pane_cp06_ParamLimits

0x5524,	// (0x000127da) listscroll_gen_pane_cp06

0x562b,	// (0x000128e1) main_clock2_pane_t5_ParamLimits

0x562b,	// (0x000128e1) main_clock2_pane_t5

0x5688,	// (0x0001293e) aid_call2_pane_cp10_ParamLimits

0x569a,	// (0x00012950) aid_call_pane_cp10_ParamLimits

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56ac,	// (0x00012962) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56ac,	// (0x00012962) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9a8,	// (0x00017c5e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0001cab8) popup_clock_analogue_window_cp10_g_ParamLimits

0x56be,	// (0x00012974) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d4f,	// (0x00013005) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d4f,	// (0x00013005) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0001cb9e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0001cb9e) cell_dialer2_keypad_pane_g

0x5d6b,	// (0x00013021) cell_dialer2_keypad_pane_t1

0x6a08,	// (0x00013cbe) main_cset_text2_pane_ParamLimits

0x6a08,	// (0x00013cbe) main_cset_text2_pane

0xd690,	// (0x0001a946) area_vitu2_query_pane_g1_ParamLimits

0x722b,	// (0x000144e1) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0001cd4d) area_vitu2_query_pane_g_ParamLimits

0xd714,	// (0x0001a9ca) area_vitu2_query_pane_t7_ParamLimits

0xd714,	// (0x0001a9ca) area_vitu2_query_pane_t7

0x728c,	// (0x00014542) bg_button_pane_cp018_ParamLimits

0x729a,	// (0x00014550) bg_button_pane_cp021_ParamLimits

0x72a6,	// (0x0001455c) bg_button_pane_cp022_ParamLimits

0x72a6,	// (0x0001455c) bg_vkb2_func_pane_cp08_ParamLimits

0x728c,	// (0x00014542) bg_vkb2_func_pane_cp06_ParamLimits

0x729a,	// (0x00014550) bg_vkb2_func_pane_cp07_ParamLimits

0x72b7,	// (0x0001456d) input_focus_pane_cp09_ParamLimits

0xda05,	// (0x0001acbb) cam6_autofocus_pane_ParamLimits

0xda05,	// (0x0001acbb) cam6_autofocus_pane

0x77a3,	// (0x00014a59) cam6_image_uncrop_pane_ParamLimits

0x77a3,	// (0x00014a59) cam6_image_uncrop_pane

0x77b2,	// (0x00014a68) cam6_indi_pane_ParamLimits

0x77b2,	// (0x00014a68) cam6_indi_pane

0x77c8,	// (0x00014a7e) cam6_mode_pane_ParamLimits

0x77c8,	// (0x00014a7e) cam6_mode_pane

0x77da,	// (0x00014a90) cam6_timer_pane_ParamLimits

0x77da,	// (0x00014a90) cam6_timer_pane

0x77e6,	// (0x00014a9c) cam6_zoom_pane_ParamLimits

0x77e6,	// (0x00014a9c) cam6_zoom_pane

0x77f2,	// (0x00014aa8) cam6_mode_pane_g1_ParamLimits

0x77f2,	// (0x00014aa8) cam6_mode_pane_g1

0x7802,	// (0x00014ab8) cam6_mode_pane_g2_ParamLimits

0x7802,	// (0x00014ab8) cam6_mode_pane_g2

0x7812,	// (0x00014ac8) cam6_mode_pane_g3_ParamLimits

0x7812,	// (0x00014ac8) cam6_mode_pane_g3

0x7822,	// (0x00014ad8) cam6_mode_pane_g4_ParamLimits

0x7822,	// (0x00014ad8) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0001ce35) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0001ce35) cam6_mode_pane_g

0xda13,	// (0x0001acc9) bg_tb_trans_pane_cp08_ParamLimits

0xda13,	// (0x0001acc9) bg_tb_trans_pane_cp08

0xda21,	// (0x0001acd7) cam6_battery_pane_ParamLimits

0xda21,	// (0x0001acd7) cam6_battery_pane

0xda37,	// (0x0001aced) cam6_indi_pane_g1_ParamLimits

0xda37,	// (0x0001aced) cam6_indi_pane_g1

0xda49,	// (0x0001acff) cam6_indi_pane_g2_ParamLimits

0xda49,	// (0x0001acff) cam6_indi_pane_g2

0xda5b,	// (0x0001ad11) cam6_indi_pane_g3_ParamLimits

0xda5b,	// (0x0001ad11) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0001ce3e) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0001ce3e) cam6_indi_pane_g

0xda6d,	// (0x0001ad23) cam6_indi_pane_t1_ParamLimits

0xda6d,	// (0x0001ad23) cam6_indi_pane_t1

0x7832,	// (0x00014ae8) cam6_autofocus_pane_g1

0x783a,	// (0x00014af0) cam6_autofocus_pane_g2

0x7842,	// (0x00014af8) cam6_autofocus_pane_g3

0x784a,	// (0x00014b00) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0001ce45) cam6_autofocus_pane_g

0xda93,	// (0x0001ad49) cam6_timer_pane_g1

0xda9b,	// (0x0001ad51) cam6_timer_pane_t1

0xdaa9,	// (0x0001ad5f) cam6_zoom_cont_pane

0xdab1,	// (0x0001ad67) cam6_zoom_pane_g1

0xdab9,	// (0x0001ad6f) cam6_zoom_pane_g2

0x7852,	// (0x00014b08) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0001ce4e) cam6_zoom_pane_g

0xc412,	// (0x000196c8) cam6_battery_pane_g1

0xc412,	// (0x000196c8) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0001c9c5) cam6_battery_pane_g

0xdac1,	// (0x0001ad77) cam6_zoom_cont_pane_g1

0xdaca,	// (0x0001ad80) cam6_zoom_cont_pane_g2

0xdad3,	// (0x0001ad89) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0001ce55) cam6_zoom_cont_pane_g

0x786f,	// (0x00014b25) cam6_mode_pane_cp_ParamLimits

0x786f,	// (0x00014b25) cam6_mode_pane_cp

0x77e6,	// (0x00014a9c) cam6_zoom_pane_cp_ParamLimits

0x77e6,	// (0x00014a9c) cam6_zoom_pane_cp

0x7881,	// (0x00014b37) vid6_image_uncrop_cif_pane_ParamLimits

0x7881,	// (0x00014b37) vid6_image_uncrop_cif_pane

0x7891,	// (0x00014b47) vid6_image_uncrop_nhd_pane_ParamLimits

0x7891,	// (0x00014b47) vid6_image_uncrop_nhd_pane

0x77a3,	// (0x00014a59) vid6_image_uncrop_vga_pane_ParamLimits

0x77a3,	// (0x00014a59) vid6_image_uncrop_vga_pane

0x78a0,	// (0x00014b56) vid6_image_uncrop_wvga_pane_ParamLimits

0x78a0,	// (0x00014b56) vid6_image_uncrop_wvga_pane

0x78af,	// (0x00014b65) vid6_indi_pane_ParamLimits

0x78af,	// (0x00014b65) vid6_indi_pane

0xda13,	// (0x0001acc9) bg_tb_trans_pane_cp09_ParamLimits

0xda13,	// (0x0001acc9) bg_tb_trans_pane_cp09

0xdaeb,	// (0x0001ada1) cam6_battery_pane_cp_ParamLimits

0xdaeb,	// (0x0001ada1) cam6_battery_pane_cp

0xdaf7,	// (0x0001adad) vid6_indi_pane_g1_ParamLimits

0xdaf7,	// (0x0001adad) vid6_indi_pane_g1

0xdb09,	// (0x0001adbf) vid6_indi_pane_g2_ParamLimits

0xdb09,	// (0x0001adbf) vid6_indi_pane_g2

0xdb1b,	// (0x0001add1) vid6_indi_pane_g3_ParamLimits

0xdb1b,	// (0x0001add1) vid6_indi_pane_g3

0xdb30,	// (0x0001ade6) vid6_indi_pane_g4_ParamLimits

0xdb30,	// (0x0001ade6) vid6_indi_pane_g4

0xdb45,	// (0x0001adfb) vid6_indi_pane_g5_ParamLimits

0xdb45,	// (0x0001adfb) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0001ce5c) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0001ce5c) vid6_indi_pane_g

0xdb5f,	// (0x0001ae15) vid6_indi_pane_t1_ParamLimits

0xdb5f,	// (0x0001ae15) vid6_indi_pane_t1

0xdb75,	// (0x0001ae2b) vid6_indi_pane_t2_ParamLimits

0xdb75,	// (0x0001ae2b) vid6_indi_pane_t2

0xdb9d,	// (0x0001ae53) vid6_indi_pane_t3_ParamLimits

0xdb9d,	// (0x0001ae53) vid6_indi_pane_t3

0xdbc5,	// (0x0001ae7b) vid6_indi_pane_t4_ParamLimits

0xdbc5,	// (0x0001ae7b) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0001ce67) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0001ce67) vid6_indi_pane_t

0xdbe9,	// (0x0001ae9f) wait_bar_pane_cp08

0x78c7,	// (0x00014b7d) main_cset_text2_pane_t1_ParamLimits

0x78c7,	// (0x00014b7d) main_cset_text2_pane_t1

0x785a,	// (0x00014b10) listscroll_gen_pane_cp06_t1_ParamLimits

0x785a,	// (0x00014b10) listscroll_gen_pane_cp06_t1

0x94bc,	// (0x00016772) main_cam6_set_pane

0xc679,	// (0x0001992f) bg_tb_trans_pane_cp06_ParamLimits

0xd0c6,	// (0x0001a37c) cam4_indicators_pane_g1_ParamLimits

0xd0d7,	// (0x0001a38d) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0001cbdb) cam4_indicators_pane_g_ParamLimits

0xd0f5,	// (0x0001a3ab) cam4_indicators_pane_t1_ParamLimits

0xc929,	// (0x00019bdf) bg_tb_trans_pane_cp07_ParamLimits

0x6317,	// (0x000135cd) vid4_indicators_pane_g1_ParamLimits

0x6324,	// (0x000135da) vid4_indicators_pane_g2_ParamLimits

0x6331,	// (0x000135e7) vid4_indicators_pane_g3_ParamLimits

0x633e,	// (0x000135f4) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0001cbed) vid4_indicators_pane_g_ParamLimits

0x6356,	// (0x0001360c) vid4_indicators_pane_t1_ParamLimits

0xd791,	// (0x0001aa47) vid4_progress_pane_g1_ParamLimits

0xd7a1,	// (0x0001aa57) vid4_progress_pane_g2_ParamLimits

0xd7b1,	// (0x0001aa67) vid4_progress_pane_g3_ParamLimits

0xd0d7,	// (0x0001a38d) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0001cd98) vid4_progress_pane_g_ParamLimits

0xd7bd,	// (0x0001aa73) vid4_progress_pane_t1_ParamLimits

0xd7d2,	// (0x0001aa88) vid4_progress_pane_t2_ParamLimits

0xd7e8,	// (0x0001aa9e) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0001cda3) vid4_progress_pane_t_ParamLimits

0xd7fd,	// (0x0001aab3) wait_bar_pane_cp07_ParamLimits

0x78e7,	// (0x00014b9d) main_cam6_set_pane_g2_ParamLimits

0x78e7,	// (0x00014b9d) main_cam6_set_pane_g2

0x790b,	// (0x00014bc1) main_cset6_listscroll_pane_ParamLimits

0x790b,	// (0x00014bc1) main_cset6_listscroll_pane

0x7927,	// (0x00014bdd) main_cset6_slider_pane_ParamLimits

0x7927,	// (0x00014bdd) main_cset6_slider_pane

0x793d,	// (0x00014bf3) main_cset6_text2_pane_ParamLimits

0x793d,	// (0x00014bf3) main_cset6_text2_pane

0xdbf8,	// (0x0001aeae) main_cset6_text_pane

0xdc00,	// (0x0001aeb6) main_cset_list_pane_copy1_ParamLimits

0xdc00,	// (0x0001aeb6) main_cset_list_pane_copy1

0xdc10,	// (0x0001aec6) scroll_pane_cp028_copy1

0x794b,	// (0x00014c01) cset_list_set_pane_copy1

0x795e,	// (0x00014c14) aid_position_infowindow_above_copy1

0x7966,	// (0x00014c1c) aid_position_infowindow_below_copy1

0xdc19,	// (0x0001aecf) cset_list_set_pane_g1_copy1

0xdc21,	// (0x0001aed7) cset_list_set_pane_g3_copy1_ParamLimits

0xdc21,	// (0x0001aed7) cset_list_set_pane_g3_copy1

0xdc30,	// (0x0001aee6) cset_list_set_pane_t1_copy1_ParamLimits

0xdc30,	// (0x0001aee6) cset_list_set_pane_t1_copy1

0x952c,	// (0x000167e2) list_highlight_pane_cp021_copy1_ParamLimits

0x952c,	// (0x000167e2) list_highlight_pane_cp021_copy1

0xdc45,	// (0x0001aefb) cset6_slider_pane_ParamLimits

0xdc45,	// (0x0001aefb) cset6_slider_pane

0xdc71,	// (0x0001af27) main_cset6_slider_pane_g1_ParamLimits

0xdc71,	// (0x0001af27) main_cset6_slider_pane_g1

0x796e,	// (0x00014c24) main_cset6_slider_pane_g2_ParamLimits

0x796e,	// (0x00014c24) main_cset6_slider_pane_g2

0xd2ed,	// (0x0001a5a3) main_cset6_slider_pane_g3_ParamLimits

0xd2ed,	// (0x0001a5a3) main_cset6_slider_pane_g3

0x6acd,	// (0x00013d83) main_cset6_slider_pane_g4_ParamLimits

0x6acd,	// (0x00013d83) main_cset6_slider_pane_g4

0x6b15,	// (0x00013dcb) main_cset6_slider_pane_g5_ParamLimits

0x6b15,	// (0x00013dcb) main_cset6_slider_pane_g5

0xd2ed,	// (0x0001a5a3) main_cset6_slider_pane_g7_ParamLimits

0xd2ed,	// (0x0001a5a3) main_cset6_slider_pane_g7

0xd2f9,	// (0x0001a5af) main_cset6_slider_pane_g8_ParamLimits

0xd2f9,	// (0x0001a5af) main_cset6_slider_pane_g8

0x6ab5,	// (0x00013d6b) main_cset6_slider_pane_g9_ParamLimits

0x6ab5,	// (0x00013d6b) main_cset6_slider_pane_g9

0x6ac1,	// (0x00013d77) main_cset6_slider_pane_g10_ParamLimits

0x6ac1,	// (0x00013d77) main_cset6_slider_pane_g10

0x6acd,	// (0x00013d83) main_cset6_slider_pane_g11_ParamLimits

0x6acd,	// (0x00013d83) main_cset6_slider_pane_g11

0x6ad9,	// (0x00013d8f) main_cset6_slider_pane_g12_ParamLimits

0x6ad9,	// (0x00013d8f) main_cset6_slider_pane_g12

0x6ae5,	// (0x00013d9b) main_cset6_slider_pane_g13_ParamLimits

0x6ae5,	// (0x00013d9b) main_cset6_slider_pane_g13

0x6af1,	// (0x00013da7) main_cset6_slider_pane_g14_ParamLimits

0x6af1,	// (0x00013da7) main_cset6_slider_pane_g14

0x7996,	// (0x00014c4c) main_cset6_slider_pane_g15_ParamLimits

0x7996,	// (0x00014c4c) main_cset6_slider_pane_g15

0x6b15,	// (0x00013dcb) main_cset6_slider_pane_g16_ParamLimits

0x6b15,	// (0x00013dcb) main_cset6_slider_pane_g16

0x6b21,	// (0x00013dd7) main_cset6_slider_pane_g17_ParamLimits

0x6b21,	// (0x00013dd7) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0001ce70) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0001ce70) main_cset6_slider_pane_g

0xdc99,	// (0x0001af4f) main_cset6_slider_pane_t1_ParamLimits

0xdc99,	// (0x0001af4f) main_cset6_slider_pane_t1

0x79ae,	// (0x00014c64) main_cset6_slider_pane_t2_ParamLimits

0x79ae,	// (0x00014c64) main_cset6_slider_pane_t2

0x79d9,	// (0x00014c8f) main_cset6_slider_pane_t3_ParamLimits

0x79d9,	// (0x00014c8f) main_cset6_slider_pane_t3

0x7a04,	// (0x00014cba) main_cset6_slider_pane_t4_ParamLimits

0x7a04,	// (0x00014cba) main_cset6_slider_pane_t4

0x7a2f,	// (0x00014ce5) main_cset6_slider_pane_t5_ParamLimits

0x7a2f,	// (0x00014ce5) main_cset6_slider_pane_t5

0xdcda,	// (0x0001af90) main_cset6_slider_pane_t7_ParamLimits

0xdcda,	// (0x0001af90) main_cset6_slider_pane_t7

0x7a5a,	// (0x00014d10) main_cset6_slider_pane_t8_ParamLimits

0x7a5a,	// (0x00014d10) main_cset6_slider_pane_t8

0x7a7e,	// (0x00014d34) main_cset6_slider_pane_t9_ParamLimits

0x7a7e,	// (0x00014d34) main_cset6_slider_pane_t9

0x7aa2,	// (0x00014d58) main_cset6_slider_pane_t10_ParamLimits

0x7aa2,	// (0x00014d58) main_cset6_slider_pane_t10

0x7ac6,	// (0x00014d7c) main_cset6_slider_pane_t11_ParamLimits

0x7ac6,	// (0x00014d7c) main_cset6_slider_pane_t11

0xdd10,	// (0x0001afc6) main_cset6_slider_pane_t14_ParamLimits

0xdd10,	// (0x0001afc6) main_cset6_slider_pane_t14

0xdd49,	// (0x0001afff) main_cset6_slider_pane_t15_ParamLimits

0xdd49,	// (0x0001afff) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0001ce95) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0001ce95) main_cset6_slider_pane_t

0xd3d1,	// (0x0001a687) cset_slider_pane_g1_copy1

0xd3da,	// (0x0001a690) cset_slider_pane_g2_copy1

0xd3e3,	// (0x0001a699) cset_slider_pane_g3_copy1

0x94bc,	// (0x00016772) bg_popup_sub_pane_cp011_copy1

0xd4c0,	// (0x0001a776) main_cset_text_pane_g1_copy1

0xd4c8,	// (0x0001a77e) main_cset_text_pane_t1_copy1

0xd4d6,	// (0x0001a78c) main_cset_text_pane_t2_copy1

0xd4e4,	// (0x0001a79a) main_cset_text_pane_t3_copy1

0xd4f2,	// (0x0001a7a8) main_cset_text_pane_t4_copy1

0xd500,	// (0x0001a7b6) main_cset_text_pane_t5_copy1

0xd50e,	// (0x0001a7c4) main_cset_text_pane_t6_copy1

0xd51c,	// (0x0001a7d2) main_cset_text_pane_t7_copy1

0x78c7,	// (0x00014b7d) main_cset_text2_pane_t1_copy1

0x94bc,	// (0x00016772) main_ncimui_pane

0x4065,	// (0x0001131b) popup_query_ncimui_window_ParamLimits

0x4065,	// (0x0001131b) popup_query_ncimui_window

0xc6de,	// (0x00019994) field_cale_ev2_pane_g4_ParamLimits

0xc6de,	// (0x00019994) field_cale_ev2_pane_g4

0x5c27,	// (0x00012edd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c27,	// (0x00012edd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0001cb79) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0001cb79) cell_video_dialer_keypad_pane_g

0x5c3f,	// (0x00012ef5) cell_video_dialer_keypad_pane_t1

0x94bc,	// (0x00016772) bg_popup_window_pane_cp012

0xa7f6,	// (0x00017aac) heading_pane_cp06

0xde71,	// (0x0001b127) ncim_query_content_pane

0x94bc,	// (0x00016772) bg_popup_heading_pane_cp01

0xde79,	// (0x0001b12f) ncim_heading_pane_t1

0xde9e,	// (0x0001b154) ncim_indicator_popup_pane

0xdeb0,	// (0x0001b166) ncim_query_button_pane

0xdec4,	// (0x0001b17a) ncim_query_content_pane_t1

0xded6,	// (0x0001b18c) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0001ced4) ncim_query_content_pane_t

0xdf10,	// (0x0001b1c6) ncim_query_list_pane

0xdf22,	// (0x0001b1d8) ncim_query_popup_pane

0xde9e,	// (0x0001b154) ncim_indicator_popup_pane_ParamLimits

0x7bb0,	// (0x00014e66) ncim_query_content_pane_g1_ParamLimits

0x7bb0,	// (0x00014e66) ncim_query_content_pane_g1

0xdec4,	// (0x0001b17a) ncim_query_content_pane_t1_ParamLimits

0xded6,	// (0x0001b18c) ncim_query_content_pane_t2_ParamLimits

0x7bbc,	// (0x00014e72) ncim_query_content_pane_t3_ParamLimits

0x7bbc,	// (0x00014e72) ncim_query_content_pane_t3

0x7be4,	// (0x00014e9a) ncim_query_content_pane_t4_ParamLimits

0x7be4,	// (0x00014e9a) ncim_query_content_pane_t4

0x7c0c,	// (0x00014ec2) ncim_query_content_pane_t5_ParamLimits

0x7c0c,	// (0x00014ec2) ncim_query_content_pane_t5

0xdee8,	// (0x0001b19e) ncim_query_content_pane_t6_ParamLimits

0xdee8,	// (0x0001b19e) ncim_query_content_pane_t6

0xfc1e,	// (0x0001ced4) ncim_query_content_pane_t_ParamLimits

0xdf10,	// (0x0001b1c6) ncim_query_list_pane_ParamLimits

0xdf22,	// (0x0001b1d8) ncim_query_popup_pane_ParamLimits

0xdf36,	// (0x0001b1ec) wait_bar_pane_cp04

0x94bc,	// (0x00016772) input_focus_pane_cp011

0xdf3e,	// (0x0001b1f4) ncim_query_popup_pane_t1

0xdf4c,	// (0x0001b202) ncim_list_query_list_pane_ParamLimits

0xdf4c,	// (0x0001b202) ncim_list_query_list_pane

0x94bc,	// (0x00016772) bg_button_pane_cp027

0xdf5f,	// (0x0001b215) ncim_query_button_pane_g1

0x94bc,	// (0x00016772) list_highlight_pane_cp012

0xdf69,	// (0x0001b21f) ncim_list_query_list_pane_g1

0xdf71,	// (0x0001b227) ncim_list_query_list_pane_t1

0xd0e6,	// (0x0001a39c) cam4_indicators_pane_g3_ParamLimits

0xd0e6,	// (0x0001a39c) cam4_indicators_pane_g3

0x634a,	// (0x00013600) vid4_indicators_pane_g5_ParamLimits

0x634a,	// (0x00013600) vid4_indicators_pane_g5

0xd0e6,	// (0x0001a39c) vid4_progress_pane_g5_ParamLimits

0xd0e6,	// (0x0001a39c) vid4_progress_pane_g5

0x7af8,	// (0x00014dae) main_ncimui_pane_g1

0x7b3e,	// (0x00014df4) ncimui_group_query_pane_ParamLimits

0x7b3e,	// (0x00014df4) ncimui_group_query_pane

0x7b72,	// (0x00014e28) ncimui_list_pane_ParamLimits

0x7b72,	// (0x00014e28) ncimui_list_pane

0x7b8c,	// (0x00014e42) ncimui_text_pane_ParamLimits

0x7b8c,	// (0x00014e42) ncimui_text_pane

0x7c34,	// (0x00014eea) ncimui_text_pane_t1_ParamLimits

0x7c34,	// (0x00014eea) ncimui_text_pane_t1

0xdf7f,	// (0x0001b235) ncimui_list_single_graphic_pane_ParamLimits

0xdf7f,	// (0x0001b235) ncimui_list_single_graphic_pane

0x7c5a,	// (0x00014f10) ncimui_query_pane_ParamLimits

0x7c5a,	// (0x00014f10) ncimui_query_pane

0x94bc,	// (0x00016772) list_highlight_pane_cp013

0xdf8f,	// (0x0001b245) ncim_list_query_list_pane_t1_copy1

0xdf69,	// (0x0001b21f) ncim_list_single_graphic_pane_g1

0xdf9d,	// (0x0001b253) ncim_query_button_pane_cp01

0xdfa5,	// (0x0001b25b) ncim_query_entry_pane_ParamLimits

0xdfa5,	// (0x0001b25b) ncim_query_entry_pane

0xdfb5,	// (0x0001b26b) ncimui_query_pane_g1

0xdfbd,	// (0x0001b273) ncimui_query_pane_t1_ParamLimits

0xdfbd,	// (0x0001b273) ncimui_query_pane_t1

0x94bc,	// (0x00016772) input_focus_pane_cp012

0xdf3e,	// (0x0001b1f4) ncim_query_entry_pane_t1

0x9cd7,	// (0x00016f8d) main_im_pane_ParamLimits

0x952c,	// (0x000167e2) main_mobtv_pane_ParamLimits

0x952c,	// (0x000167e2) main_mobtv_pane

0x6ab5,	// (0x00013d6b) main_cset6_slider_pane_g18_ParamLimits

0x6ab5,	// (0x00013d6b) main_cset6_slider_pane_g18

0x6ae5,	// (0x00013d9b) main_cset6_slider_pane_g19_ParamLimits

0x6ae5,	// (0x00013d9b) main_cset6_slider_pane_g19

0xde87,	// (0x0001b13d) bg_main_mobtv_pane_ParamLimits

0xde87,	// (0x0001b13d) bg_main_mobtv_pane

0x7c6a,	// (0x00014f20) main_mobtv_info_pane

0x7c73,	// (0x00014f29) main_mobtv_loading_pane_ParamLimits

0x7c73,	// (0x00014f29) main_mobtv_loading_pane

0xdfd3,	// (0x0001b289) main_mobtv_pg_channel_list_pane

0xdfdd,	// (0x0001b293) main_mobtv_pg_hdr_pane

0x7c80,	// (0x00014f36) main_mobtv_programe_curr_pane_ParamLimits

0x7c80,	// (0x00014f36) main_mobtv_programe_curr_pane

0x7c8d,	// (0x00014f43) main_mobtv_programe_next_pane_ParamLimits

0x7c8d,	// (0x00014f43) main_mobtv_programe_next_pane

0xdfe6,	// (0x0001b29c) popup_mobtv_noti_window

0xc412,	// (0x000196c8) main_tv_pg_hdr_pane_g1

0xdfee,	// (0x0001b2a4) main_tv_pg_hdr_pane_g2

0xdff6,	// (0x0001b2ac) main_tv_pg_hdr_pane_g3

0xdffe,	// (0x0001b2b4) main_tv_pg_hdr_pane_g4

0xe006,	// (0x0001b2bc) main_tv_pg_hdr_pane_g5

0xe010,	// (0x0001b2c6) main_tv_pg_hdr_pane_g6

0xe01a,	// (0x0001b2d0) main_tv_pg_hdr_pane_g7

0xe024,	// (0x0001b2da) main_tv_pg_hdr_pane_g8

0xe02e,	// (0x0001b2e4) main_tv_pg_hdr_pane_g9

0xe038,	// (0x0001b2ee) main_tv_pg_hdr_pane_g10

0xe042,	// (0x0001b2f8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0001cee1) main_tv_pg_hdr_pane_g

0xe04c,	// (0x0001b302) main_tv_pg_hdr_pane_t1

0xe05a,	// (0x0001b310) main_tv_pg_hdr_pane_t2

0xe068,	// (0x0001b31e) main_tv_pg_hdr_pane_t3

0xe078,	// (0x0001b32e) main_tv_pg_hdr_pane_t4

0xe088,	// (0x0001b33e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0001cef8) main_tv_pg_hdr_pane_t

0xe098,	// (0x0001b34e) single_mobtv_pg_channel_pane_ParamLimits

0xe098,	// (0x0001b34e) single_mobtv_pg_channel_pane

0xe0aa,	// (0x0001b360) single_mobtv_pg_channel_table_pane

0xe0b3,	// (0x0001b369) single_mobtv_pg_channel_thumb_pane

0xe0bc,	// (0x0001b372) single_tv_pg_channel_pane_g1

0xe0c5,	// (0x0001b37b) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0001cf03) single_tv_pg_channel_pane_g

0xc679,	// (0x0001992f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc679,	// (0x0001992f) bg_single_mobtv_pg_channel_thumb_pane

0xe0ce,	// (0x0001b384) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0ce,	// (0x0001b384) single_mobtv_pg_channel_thumb_pane_g1

0xe0dc,	// (0x0001b392) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0dc,	// (0x0001b392) single_mobtv_pg_channel_thumb_pane_g2

0xe0e8,	// (0x0001b39e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0e8,	// (0x0001b39e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0001cf08) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0001cf08) single_mobtv_pg_channel_thumb_pane_g

0xe0f4,	// (0x0001b3aa) single_mobtv_pg_channel_thumb_pane_t1

0xe102,	// (0x0001b3b8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0001cf0f) single_mobtv_pg_channel_thumb_pane_t

0xc412,	// (0x000196c8) bg_single_mobtv_pg_channel_table_pane_g1

0xc412,	// (0x000196c8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0001c9c5) bg_single_mobtv_pg_channel_table_pane_g

0xe110,	// (0x0001b3c6) single_mobtv_pg_channel_table_pane_t1

0xe11e,	// (0x0001b3d4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0001cf14) single_mobtv_pg_channel_table_pane_t

0x7ca2,	// (0x00014f58) main_mobtv_info_pane_g1_ParamLimits

0x7ca2,	// (0x00014f58) main_mobtv_info_pane_g1

0x7cc0,	// (0x00014f76) main_mobtv_info_pane_t1_ParamLimits

0x7cc0,	// (0x00014f76) main_mobtv_info_pane_t1

0x7d38,	// (0x00014fee) main_mobtv_info_pane_t2_ParamLimits

0x7d38,	// (0x00014fee) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0001cf1e) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0001cf1e) main_mobtv_info_pane_t

0x7dc7,	// (0x0001507d) wait_bar_pane_cp05

0x7dd9,	// (0x0001508f) main_mobtv_loading_pane_g1_ParamLimits

0x7dd9,	// (0x0001508f) main_mobtv_loading_pane_g1

0x7dec,	// (0x000150a2) main_mobtv_loading_pane_g2_ParamLimits

0x7dec,	// (0x000150a2) main_mobtv_loading_pane_g2

0x7df8,	// (0x000150ae) main_mobtv_loading_pane_g3_ParamLimits

0x7df8,	// (0x000150ae) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0001cf25) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0001cf25) main_mobtv_loading_pane_g

0xe12c,	// (0x0001b3e2) main_mobtv_loading_pane_t1_ParamLimits

0xe12c,	// (0x0001b3e2) main_mobtv_loading_pane_t1

0xe144,	// (0x0001b3fa) main_mobtv_loading_pane_t2_ParamLimits

0xe144,	// (0x0001b3fa) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0001cf2c) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0001cf2c) main_mobtv_loading_pane_t

0x7e0b,	// (0x000150c1) wait_bar_pane_cp06_ParamLimits

0x7e0b,	// (0x000150c1) wait_bar_pane_cp06

0xe168,	// (0x0001b41e) main_mobtv_programe_curr_pane_t1

0xe176,	// (0x0001b42c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0001cf31) main_mobtv_programe_curr_pane_t

0xe184,	// (0x0001b43a) main_mobtv_programe_next_pane_t1

0xe192,	// (0x0001b448) main_mobtv_programe_next_pane_t2

0xe1a0,	// (0x0001b456) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0001cf36) main_mobtv_programe_next_pane_t

0x94bc,	// (0x00016772) bg_popup_mobtv_noti_window_pane

0xe1ae,	// (0x0001b464) popup_mobtv_noti_window_g1

0xe1b6,	// (0x0001b46c) popup_mobtv_noti_window_t1

0xe1c4,	// (0x0001b47a) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0001cf3d) popup_mobtv_noti_window_t

0xc412,	// (0x000196c8) bg_popup_mobtv_noti_window_pane_g1

0x94bc,	// (0x00016772) sc_clock_pane

0x94bc,	// (0x00016772) main_fs_bigclock_pane

0x7618,	// (0x000148ce) blid2_tripm_pane_t4_ParamLimits

0x7618,	// (0x000148ce) blid2_tripm_pane_t4

0x7e1a,	// (0x000150d0) sc_clock_pane_g1_ParamLimits

0x7e1a,	// (0x000150d0) sc_clock_pane_g1

0x7e2c,	// (0x000150e2) sc_clock_pane_t1_ParamLimits

0x7e2c,	// (0x000150e2) sc_clock_pane_t1

0x7e4e,	// (0x00015104) sc_clock_pane_t2_ParamLimits

0x7e4e,	// (0x00015104) sc_clock_pane_t2

0x7e66,	// (0x0001511c) sc_clock_pane_t3_ParamLimits

0x7e66,	// (0x0001511c) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0001cf42) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0001cf42) sc_clock_pane_t

0x8c01,	// (0x00015eb7) main_fs_bigclock_indicator_pane_ParamLimits

0x8c01,	// (0x00015eb7) main_fs_bigclock_indicator_pane

0xc649,	// (0x000198ff) main_fs_bigclock_pane_g1_ParamLimits

0xc649,	// (0x000198ff) main_fs_bigclock_pane_g1

0x8c0d,	// (0x00015ec3) main_fs_bigclock_pane_t1_ParamLimits

0x8c0d,	// (0x00015ec3) main_fs_bigclock_pane_t1

0x8c1f,	// (0x00015ed5) main_fs_bigclock_pane_t2_ParamLimits

0x8c1f,	// (0x00015ed5) main_fs_bigclock_pane_t2

0x8c31,	// (0x00015ee7) main_fs_bigclock_pane_t3_ParamLimits

0x8c31,	// (0x00015ee7) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0001d13c) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0001d13c) main_fs_bigclock_pane_t

0xedea,	// (0x0001c0a0) main_fs_bigclock_indicator_pane_g1

0xdeb8,	// (0x0001b16e) ncim_query_content_pane_g2_ParamLimits

0xdeb8,	// (0x0001b16e) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0001cecf) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0001cecf) ncim_query_content_pane_g

0x7e7d,	// (0x00015133) sc_clock_pane_t4_ParamLimits

0x7e7d,	// (0x00015133) sc_clock_pane_t4

0x952c,	// (0x000167e2) main_radioblah_pane

0xd038,	// (0x0001a2ee) cell_call4_button_pane_t1_copy1_ParamLimits

0xd038,	// (0x0001a2ee) cell_call4_button_pane_t1_copy1

0x7b00,	// (0x00014db6) main_ncimui_pane_t1_ParamLimits

0x7b00,	// (0x00014db6) main_ncimui_pane_t1

0x7b12,	// (0x00014dc8) main_ncimui_pane_t2_ParamLimits

0x7b12,	// (0x00014dc8) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0001cec8) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0001cec8) main_ncimui_pane_t

0xe2f4,	// (0x0001b5aa) main_radioblah_anim_pane_ParamLimits

0xe2f4,	// (0x0001b5aa) main_radioblah_anim_pane

0xe305,	// (0x0001b5bb) main_radioblah_info_pane_ParamLimits

0xe305,	// (0x0001b5bb) main_radioblah_info_pane

0xe319,	// (0x0001b5cf) main_radioblah_pane_t1_ParamLimits

0xe319,	// (0x0001b5cf) main_radioblah_pane_t1

0xe335,	// (0x0001b5eb) main_radioblah_pane_t2_ParamLimits

0xe335,	// (0x0001b5eb) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0001cf63) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0001cf63) main_radioblah_pane_t

0x7f26,	// (0x000151dc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f26,	// (0x000151dc) main_radioblah_rocker_ctrl_pane

0xe37d,	// (0x0001b633) main_radioblah_info_pane_t1_ParamLimits

0xe37d,	// (0x0001b633) main_radioblah_info_pane_t1

0x7f7e,	// (0x00015234) main_radioblah_info_pane_t2_ParamLimits

0x7f7e,	// (0x00015234) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0001cf6c) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0001cf6c) main_radioblah_info_pane_t

0xc412,	// (0x000196c8) main_radioblah_rocker_ctrl_pane_g1

0x8030,	// (0x000152e6) main_radioblah_rocker_ctrl_pane_g2

0x8038,	// (0x000152ee) main_radioblah_rocker_ctrl_pane_g3

0x8040,	// (0x000152f6) main_radioblah_rocker_ctrl_pane_g4

0x8048,	// (0x000152fe) main_radioblah_rocker_ctrl_pane_g5

0x8050,	// (0x00015306) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0001cf75) main_radioblah_rocker_ctrl_pane_g

0x78c7,	// (0x00014b7d) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0b6,	// (0x0001a36c) cam4_image_uncrop_qvga_pane

0xd10f,	// (0x0001a3c5) vid4_image_uncrop_qcif_pane

0xda05,	// (0x0001acbb) cam6_image_uncrop_qvga_pane_ParamLimits

0xda05,	// (0x0001acbb) cam6_image_uncrop_qvga_pane

0xdadb,	// (0x0001ad91) vid6_image_uncrop_qcif_pane_ParamLimits

0xdadb,	// (0x0001ad91) vid6_image_uncrop_qcif_pane

0x94bc,	// (0x00016772) bg_popup_preview_window_pane_cp03

0xde53,	// (0x0001b109) list_cset_text2_pane

0xde5b,	// (0x0001b111) main_cset6_text2_pane_g1

0xde63,	// (0x0001b119) main_cset6_text2_pane_t1

0x8058,	// (0x0001530e) list_cset_text2_pane_t1_ParamLimits

0x8058,	// (0x0001530e) list_cset_text2_pane_t1

0x952c,	// (0x000167e2) main_radioblah_pane_ParamLimits

0x7db3,	// (0x00015069) main_mobtv_info_pane_t3_ParamLimits

0x7db3,	// (0x00015069) main_mobtv_info_pane_t3

0x7f14,	// (0x000151ca) main_radioblah_pane_g1

0x7f4e,	// (0x00015204) main_radioblah_info_pane_g1

0x7fd5,	// (0x0001528b) main_radioblah_info_pane_t3_ParamLimits

0x7fd5,	// (0x0001528b) main_radioblah_info_pane_t3

0x29fb,	// (0x0000fcb1) highlight_cell_cale_month_pane_ParamLimits

0x29fb,	// (0x0000fcb1) highlight_cell_cale_month_pane

0x94bc,	// (0x00016772) main_phob_fisheye_pane

0xc793,	// (0x00019a49) scroll_pane_cp0031_ParamLimits

0xc793,	// (0x00019a49) scroll_pane_cp0031

0xdbe9,	// (0x0001ae9f) wait_bar_pane_cp08_ParamLimits

0x794b,	// (0x00014c01) cset_list_set_pane_copy1_ParamLimits

0xe3b7,	// (0x0001b66d) highlight_cell_cale_month_pane_g1

0x8075,	// (0x0001532b) highlight_cell_cale_month_pane_t1

0xd780,	// (0x0001aa36) list_gen_pane_cp01

0xd2d8,	// (0x0001a58e) scroll_pane_01

0xee77,	// (0x0001c12d) list_single_double_fisheye_pane

0xe3bf,	// (0x0001b675) list_double_fisheye_pane_g1_ParamLimits

0xe3bf,	// (0x0001b675) list_double_fisheye_pane_g1

0xe3cb,	// (0x0001b681) list_double_fisheye_pane_g2_ParamLimits

0xe3cb,	// (0x0001b681) list_double_fisheye_pane_g2

0x8083,	// (0x00015339) list_double_fisheye_pane_g3_ParamLimits

0x8083,	// (0x00015339) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0001cf82) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0001cf82) list_double_fisheye_pane_g

0x808f,	// (0x00015345) list_double_fisheye_pane_t1_ParamLimits

0x808f,	// (0x00015345) list_double_fisheye_pane_t1

0x80aa,	// (0x00015360) list_double_fisheye_pane_t2_ParamLimits

0x80aa,	// (0x00015360) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0001cf8d) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0001cf8d) list_double_fisheye_pane_t

0x94bc,	// (0x00016772) main_call5_pane

0x7ea8,	// (0x0001515e) sc_swipe_pane_ParamLimits

0x7ea8,	// (0x0001515e) sc_swipe_pane

0x80df,	// (0x00015395) call5_image_pane_ParamLimits

0x80df,	// (0x00015395) call5_image_pane

0x80fc,	// (0x000153b2) call5_swipe_1_pane_ParamLimits

0x80fc,	// (0x000153b2) call5_swipe_1_pane

0x810f,	// (0x000153c5) call5_swipe_2_pane_ParamLimits

0x810f,	// (0x000153c5) call5_swipe_2_pane

0x813a,	// (0x000153f0) popup_call5_audio_first_window_ParamLimits

0x813a,	// (0x000153f0) popup_call5_audio_first_window

0xc679,	// (0x0001992f) call5_swipe_1_pane_g1_ParamLimits

0xc679,	// (0x0001992f) call5_swipe_1_pane_g1

0xe3fc,	// (0x0001b6b2) call5_swipe_1_pane_g2_ParamLimits

0xe3fc,	// (0x0001b6b2) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0001cf92) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0001cf92) call5_swipe_1_pane_g

0xe408,	// (0x0001b6be) call5_swipe_1_pane_t1_ParamLimits

0xe408,	// (0x0001b6be) call5_swipe_1_pane_t1

0xc679,	// (0x0001992f) call5_swipe_2_pane_g1_ParamLimits

0xc679,	// (0x0001992f) call5_swipe_2_pane_g1

0xe41d,	// (0x0001b6d3) call5_swipe_2_pane_g2_ParamLimits

0xe41d,	// (0x0001b6d3) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0001cf97) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0001cf97) call5_swipe_2_pane_g

0xe429,	// (0x0001b6df) call5_swipe_2_pane_t1_ParamLimits

0xe429,	// (0x0001b6df) call5_swipe_2_pane_t1

0xe43e,	// (0x0001b6f4) sc_swipe_pane_g1_ParamLimits

0xe43e,	// (0x0001b6f4) sc_swipe_pane_g1

0xe44b,	// (0x0001b701) sc_swipe_pane_g2_ParamLimits

0xe44b,	// (0x0001b701) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0001cf9c) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0001cf9c) sc_swipe_pane_g

0xe457,	// (0x0001b70d) sc_swipe_pane_t1_ParamLimits

0xe457,	// (0x0001b70d) sc_swipe_pane_t1

0x94bc,	// (0x00016772) main_cmail_launcher_pane

0x814b,	// (0x00015401) aid_size_cell_cmail_l_ParamLimits

0x814b,	// (0x00015401) aid_size_cell_cmail_l

0x8165,	// (0x0001541b) grid_cmail_l_pane_ParamLimits

0x8165,	// (0x0001541b) grid_cmail_l_pane

0x8180,	// (0x00015436) cell_cmail_l_pane_ParamLimits

0x8180,	// (0x00015436) cell_cmail_l_pane

0x81a6,	// (0x0001545c) cell_cmail_l_pane_g1_ParamLimits

0x81a6,	// (0x0001545c) cell_cmail_l_pane_g1

0x81b2,	// (0x00015468) cell_cmail_l_pane_t1_ParamLimits

0x81b2,	// (0x00015468) cell_cmail_l_pane_t1

0xe46c,	// (0x0001b722) cell_cmail_l_pane_t2_ParamLimits

0xe46c,	// (0x0001b722) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0001cfa1) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0001cfa1) cell_cmail_l_pane_t

0x952c,	// (0x000167e2) grid_highlight_pane_cp018_ParamLimits

0x952c,	// (0x000167e2) grid_highlight_pane_cp018

0x1217,	// (0x0000e4cd) main2_pane_ParamLimits

0x1217,	// (0x0000e4cd) main2_pane

0x9db0,	// (0x00017066) popup_sp_fs_action_menu_bg_pane_g1

0x9db8,	// (0x0001706e) popup_sp_fs_action_menu_bg_pane_g2

0x9dc0,	// (0x00017076) popup_sp_fs_action_menu_bg_pane_g3

0x9dc8,	// (0x0001707e) popup_sp_fs_action_menu_bg_pane_g4

0x9dd0,	// (0x00017086) popup_sp_fs_action_menu_bg_pane_g5

0x9dd8,	// (0x0001708e) popup_sp_fs_action_menu_bg_pane_g6

0x9de0,	// (0x00017096) popup_sp_fs_action_menu_bg_pane_g7

0x9de8,	// (0x0001709e) popup_sp_fs_action_menu_bg_pane_g8

0x9df0,	// (0x000170a6) popup_sp_fs_action_menu_bg_pane_g9

0x9df8,	// (0x000170ae) popup_sp_fs_action_menu_bg_pane_g10

0x9df8,	// (0x000170ae) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0001c471) popup_sp_fs_action_menu_bg_pane_g

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g3_g1

0xa013,	// (0x000172c9) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_t3_g3_g2

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0001c521) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0001c521) list_medium_line_x2_t3_g3_g

0xa02b,	// (0x000172e1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa02b,	// (0x000172e1) list_medium_line_x2_t3_g3_t1

0x1e97,	// (0x0000f14d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e97,	// (0x0000f14d) list_medium_line_x2_t3_g3_t2

0xa040,	// (0x000172f6) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0001c528) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0001c528) list_medium_line_x2_t3_g3_t

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g2_g1

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0001c52f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0001c52f) list_medium_line_x2_t3_g2_g

0xa055,	// (0x0001730b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa055,	// (0x0001730b) list_medium_line_x2_t3_g2_t1

0xa06b,	// (0x00017321) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa06b,	// (0x00017321) list_medium_line_x2_t3_g2_t2

0xa07d,	// (0x00017333) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa07d,	// (0x00017333) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0001c534) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0001c534) list_medium_line_x2_t3_g2_t

0xa007,	// (0x000172bd) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t4_g4_g1

0xa09a,	// (0x00017350) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa09a,	// (0x00017350) list_medium_line_x2_t4_g4_g2

0xa013,	// (0x000172c9) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_t4_g4_g3

0xa0a6,	// (0x0001735c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa0a6,	// (0x0001735c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0001c53b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0001c53b) list_medium_line_x2_t4_g4_g

0x1eab,	// (0x0000f161) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1eab,	// (0x0000f161) list_medium_line_x2_t4_g4_t1

0x1ec2,	// (0x0000f178) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ec2,	// (0x0000f178) list_medium_line_x2_t4_g4_t2

0x1ed7,	// (0x0000f18d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ed7,	// (0x0000f18d) list_medium_line_x2_t4_g4_t3

0xa0b2,	// (0x00017368) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa0b2,	// (0x00017368) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0001c544) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0001c544) list_medium_line_x2_t4_g4_t

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g4_g1

0xa09a,	// (0x00017350) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa09a,	// (0x00017350) list_medium_line_x2_t2_g4_g2

0xa013,	// (0x000172c9) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_t2_g4_g3

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0001c5ab) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0001c5ab) list_medium_line_x2_t2_g4_g

0xa3a2,	// (0x00017658) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa3a2,	// (0x00017658) list_medium_line_x2_t2_g4_t1

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0001c5b4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0001c5b4) list_medium_line_x2_t2_g4_t

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g3_g1

0xa013,	// (0x000172c9) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_t2_g3_g2

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0001c521) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0001c521) list_medium_line_x2_t2_g3_g

0xa3b7,	// (0x0001766d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa3b7,	// (0x0001766d) list_medium_line_x2_t2_g3_t1

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0001c5b9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0001c5b9) list_medium_line_x2_t2_g3_t

0x2be1,	// (0x0000fe97) main_sp_fs_list_pane_ParamLimits

0x2be1,	// (0x0000fe97) main_sp_fs_list_pane

0x2bed,	// (0x0000fea3) sp_fs_scroll_pane_ParamLimits

0x2bed,	// (0x0000fea3) sp_fs_scroll_pane

0x2bf9,	// (0x0000feaf) list_medium_line_x2_t3_t1

0x2c09,	// (0x0000febf) list_medium_line_x2_t3_t2

0xa59b,	// (0x00017851) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0001c604) list_medium_line_x2_t3_t

0x2c17,	// (0x0000fecd) list_medium_line_x3_t4_t1

0x2c27,	// (0x0000fedd) list_medium_line_x3_t4_t2

0xa5a9,	// (0x0001785f) list_medium_line_x3_t4_t3

0xa59b,	// (0x00017851) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0001c60b) list_medium_line_x3_t4_t

0x2c35,	// (0x0000feeb) list_medium_line_x4_t5_t1

0x2c45,	// (0x0000fefb) list_medium_line_x4_t5_t2

0xa5a9,	// (0x0001785f) list_medium_line_x4_t5_t3

0xa5b7,	// (0x0001786d) list_medium_line_x4_t5_t4

0xa59b,	// (0x00017851) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0001c614) list_medium_line_x4_t5_t

0xa007,	// (0x000172bd) list_medium_line_t4_g4_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_t4_g4_g1

0xa0a6,	// (0x0001735c) list_medium_line_t4_g4_g2_ParamLimits

0xa0a6,	// (0x0001735c) list_medium_line_t4_g4_g2

0xa5c5,	// (0x0001787b) list_medium_line_t4_g4_g3_ParamLimits

0xa5c5,	// (0x0001787b) list_medium_line_t4_g4_g3

0xa01f,	// (0x000172d5) list_medium_line_t4_g4_g4_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0001c61f) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0001c61f) list_medium_line_t4_g4_g

0xa5d1,	// (0x00017887) list_medium_line_t4_g4_t1_ParamLimits

0xa5d1,	// (0x00017887) list_medium_line_t4_g4_t1

0xa5e6,	// (0x0001789c) list_medium_line_t4_g4_t2_ParamLimits

0xa5e6,	// (0x0001789c) list_medium_line_t4_g4_t2

0xa5fb,	// (0x000178b1) list_medium_line_t4_g4_t3_ParamLimits

0xa5fb,	// (0x000178b1) list_medium_line_t4_g4_t3

0xa040,	// (0x000172f6) list_medium_line_t4_g4_t4_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0001c628) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0001c628) list_medium_line_t4_g4_t

0x2cf1,	// (0x0000ffa7) chi_dic_find_pane_g1

0x3e43,	// (0x000110f9) main_tport_pane

0xd415,	// (0x0001a6cb) list_medium_line_plain_t1

0xd467,	// (0x0001a71d) list_medium_line_t2_g2_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t2_g2_g1

0xd473,	// (0x0001a729) list_medium_line_t2_g2_g2_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0001cce4) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0001cce4) list_medium_line_t2_g2_g

0x6e93,	// (0x00014149) list_medium_line_t2_g2_t1_ParamLimits

0x6e93,	// (0x00014149) list_medium_line_t2_g2_t1

0x6ead,	// (0x00014163) list_medium_line_t2_g2_t2_ParamLimits

0x6ead,	// (0x00014163) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0001cce9) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0001cce9) list_medium_line_t2_g2_t

0xd80d,	// (0x0001aac3) aid_sp_fs_list_icon_a_sm

0xd815,	// (0x0001aacb) aid_sp_fs_list_icon_d

0xd81d,	// (0x0001aad3) aid_sp_fs_text_primary

0xd826,	// (0x0001aadc) aid_sp_fs_text_secondary

0xd82f,	// (0x0001aae5) list_medium_line

0xd82f,	// (0x0001aae5) list_medium_line_g2

0xd82f,	// (0x0001aae5) list_medium_line_g3

0xd82f,	// (0x0001aae5) list_medium_line_plain

0xd82f,	// (0x0001aae5) list_medium_line_plain_t2

0xd82f,	// (0x0001aae5) list_medium_line_plain_t3

0xd82f,	// (0x0001aae5) list_medium_line_right_icon

0xd82f,	// (0x0001aae5) list_medium_line_right_iconx2

0xd82f,	// (0x0001aae5) list_medium_line_t2

0xd82f,	// (0x0001aae5) list_medium_line_t2_g2

0xd82f,	// (0x0001aae5) list_medium_line_t2_g3

0xd82f,	// (0x0001aae5) list_medium_line_t2_right_icon

0xd82f,	// (0x0001aae5) list_medium_line_t2_right_iconx2

0xd82f,	// (0x0001aae5) list_medium_line_t3

0xd82f,	// (0x0001aae5) list_medium_line_t3_g2

0xd82f,	// (0x0001aae5) list_medium_line_t3_g3

0xd82f,	// (0x0001aae5) list_medium_line_t3_right_iconx2

0xd838,	// (0x0001aaee) list_medium_line_t4_g4

0xd841,	// (0x0001aaf7) list_medium_line_x2

0xd841,	// (0x0001aaf7) list_medium_line_x2_t2_g2

0xd841,	// (0x0001aaf7) list_medium_line_x2_t2_g3

0xd841,	// (0x0001aaf7) list_medium_line_x2_t2_g4

0xd841,	// (0x0001aaf7) list_medium_line_x2_t3

0xd841,	// (0x0001aaf7) list_medium_line_x2_t3_g2

0xd841,	// (0x0001aaf7) list_medium_line_x2_t3_g3

0xd841,	// (0x0001aaf7) list_medium_line_x2_t3_g4

0xd841,	// (0x0001aaf7) list_medium_line_x2_t4_g2

0xd841,	// (0x0001aaf7) list_medium_line_x2_t4_g4

0xd84a,	// (0x0001ab00) list_medium_line_x3

0xd84a,	// (0x0001ab00) list_medium_line_x3_t4

0xd84a,	// (0x0001ab00) list_medium_line_x3_t4_g4

0xd838,	// (0x0001aaee) list_medium_line_x4_t4

0xd838,	// (0x0001aaee) list_medium_line_x4_t4_g7

0xd838,	// (0x0001aaee) list_medium_line_x4_t5

0xd853,	// (0x0001ab09) list_single_fs_dyc_pane_ParamLimits

0xd853,	// (0x0001ab09) list_single_fs_dyc_pane

0xa007,	// (0x000172bd) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x4_t4_g7_g1

0xdd82,	// (0x0001b038) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd82,	// (0x0001b038) list_medium_line_x4_t4_g7_g2

0xdd8e,	// (0x0001b044) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd8e,	// (0x0001b044) list_medium_line_x4_t4_g7_g3

0xdd9d,	// (0x0001b053) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd9d,	// (0x0001b053) list_medium_line_x4_t4_g7_g4

0xdda9,	// (0x0001b05f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdda9,	// (0x0001b05f) list_medium_line_x4_t4_g7_g5

0xddb8,	// (0x0001b06e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddb8,	// (0x0001b06e) list_medium_line_x4_t4_g7_g6

0xddc7,	// (0x0001b07d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddc7,	// (0x0001b07d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0001ceae) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0001ceae) list_medium_line_x4_t4_g7_g

0xddd3,	// (0x0001b089) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddd3,	// (0x0001b089) list_medium_line_x4_t4_g7_t1

0xdde8,	// (0x0001b09e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdde8,	// (0x0001b09e) list_medium_line_x4_t4_g7_t2

0xddfd,	// (0x0001b0b3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddfd,	// (0x0001b0b3) list_medium_line_x4_t4_g7_t3

0xde12,	// (0x0001b0c8) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde12,	// (0x0001b0c8) list_medium_line_x4_t4_g7_t4

0xde24,	// (0x0001b0da) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde24,	// (0x0001b0da) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0001cebd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0001cebd) list_medium_line_x4_t4_g7_t

0xde36,	// (0x0001b0ec) list_single_dyc_row_pane_ParamLimits

0xde36,	// (0x0001b0ec) list_single_dyc_row_pane

0x80cc,	// (0x00015382) call5_gesture_pane_ParamLimits

0x80cc,	// (0x00015382) call5_gesture_pane

0x8122,	// (0x000153d8) call5_windows_pane_ParamLimits

0x8122,	// (0x000153d8) call5_windows_pane

0x81c8,	// (0x0001547e) call5_swipe_1_pane_cp_ParamLimits

0x81c8,	// (0x0001547e) call5_swipe_1_pane_cp

0x81d4,	// (0x0001548a) call5_swipe_2_pane_cp_ParamLimits

0x81d4,	// (0x0001548a) call5_swipe_2_pane_cp

0xaa73,	// (0x00017d29) call5_image_pane_cp

0x81e0,	// (0x00015496) popup_call5_audio_first_window_cp_ParamLimits

0x81e0,	// (0x00015496) popup_call5_audio_first_window_cp

0xe43e,	// (0x0001b6f4) call5_swipe_1_pane_g1_cp_ParamLimits

0xe43e,	// (0x0001b6f4) call5_swipe_1_pane_g1_cp

0xe47e,	// (0x0001b734) call5_swipe_1_pane_g2_cp

0xe457,	// (0x0001b70d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe457,	// (0x0001b70d) call5_swipe_1_pane_t1_cp

0xe43e,	// (0x0001b6f4) call5_swipe_2_pane_g1_cp_ParamLimits

0xe43e,	// (0x0001b6f4) call5_swipe_2_pane_g1_cp

0xe486,	// (0x0001b73c) call5_swipe_2_pane_g2_cp

0xe48e,	// (0x0001b744) call5_swipe_2_pane_t1_cp_ParamLimits

0xe48e,	// (0x0001b744) call5_swipe_2_pane_t1_cp

0x952c,	// (0x000167e2) main_sp_fs_email_pane

0xe4a3,	// (0x0001b759) main_sp_fs_listscroll_pane_te

0xe4ac,	// (0x0001b762) popup_sp_fs_action_menu_pane_ParamLimits

0xe4ac,	// (0x0001b762) popup_sp_fs_action_menu_pane

0xc412,	// (0x000196c8) bg_sp_fs_ctrlbar_pane_g1

0xe4ec,	// (0x0001b7a2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4f5,	// (0x0001b7ab) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4fe,	// (0x0001b7b4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc412,	// (0x000196c8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0001cfa6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1f5,	// (0x000194ab) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1f5,	// (0x000194ab) bg_sp_fs_ctrlbar_ddmenu_pane

0xe507,	// (0x0001b7bd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe507,	// (0x0001b7bd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe513,	// (0x0001b7c9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe513,	// (0x0001b7c9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0001cfaf) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0001cfaf) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe51f,	// (0x0001b7d5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe51f,	// (0x0001b7d5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe539,	// (0x0001b7ef) list_medium_line_t2_right_icon_g1

0x81ec,	// (0x000154a2) list_medium_line_t2_right_icon_t1

0x81fc,	// (0x000154b2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0001cfb4) list_medium_line_t2_right_icon_t

0xbf0a,	// (0x000191c0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf0a,	// (0x000191c0) bg_sp_fs_ctrlbar_pane

0x8254,	// (0x0001550a) main_sp_fs_ctrlbar_button_pane_cp01

0x825c,	// (0x00015512) main_sp_fs_ctrlbar_ddmenu_pane

0xa007,	// (0x000172bd) main_sp_fs_ctrlbar_pane_g1

0xe579,	// (0x0001b82f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0001cfb9) main_sp_fs_ctrlbar_pane_g

0xe585,	// (0x0001b83b) main_sp_fs_ctrlbar_pane_t1

0x8266,	// (0x0001551c) main_sp_fs_ctrlbar_pane

0x828a,	// (0x00015540) main_sp_fs_listscroll_pane_te_cp01

0x82aa,	// (0x00015560) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x82aa,	// (0x00015560) popup_sp_fs_action_menu_pane_cp01

0x952c,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x952c,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp01

0xe59a,	// (0x0001b850) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe59a,	// (0x0001b850) sp_fs_action_menu_list_gene_pane_g1

0xe5a9,	// (0x0001b85f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5a9,	// (0x0001b85f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0001cfbe) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0001cfbe) sp_fs_action_menu_list_gene_pane_g

0xe5b6,	// (0x0001b86c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5b6,	// (0x0001b86c) sp_fs_action_menu_list_gene_pane_t1

0xe5ce,	// (0x0001b884) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5ce,	// (0x0001b884) sp_fs_action_menu_list_gene_pane

0xe5eb,	// (0x0001b8a1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5eb,	// (0x0001b8a1) popup_sp_fs_action_menu_bg_pane

0xe5f9,	// (0x0001b8af) sp_fs_action_menu_list_pane_ParamLimits

0xe5f9,	// (0x0001b8af) sp_fs_action_menu_list_pane

0xe617,	// (0x0001b8cd) sp_fs_scroll_pane_cp01_ParamLimits

0xe617,	// (0x0001b8cd) sp_fs_scroll_pane_cp01

0x82c4,	// (0x0001557a) list_medium_line_plain_t2_t1

0x82d4,	// (0x0001558a) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0001cfc3) list_medium_line_plain_t2_t

0x82e4,	// (0x0001559a) list_medium_line_plain_t3_t1

0x82f4,	// (0x000155aa) list_medium_line_plain_t3_t2

0x8302,	// (0x000155b8) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0001cfc8) list_medium_line_plain_t3_t

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t2_g2_g1

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0001c52f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0001c52f) list_medium_line_x2_t2_g2_g

0xa5d1,	// (0x00017887) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa5d1,	// (0x00017887) list_medium_line_x2_t2_g2_t1

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0001cfcf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0001cfcf) list_medium_line_x2_t2_g2_t

0xa007,	// (0x000172bd) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t4_g2_g1

0xa01f,	// (0x000172d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x0001c52f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x0001c52f) list_medium_line_x2_t4_g2_g

0x8310,	// (0x000155c6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8310,	// (0x000155c6) list_medium_line_x2_t4_g2_t1

0x8327,	// (0x000155dd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8327,	// (0x000155dd) list_medium_line_x2_t4_g2_t2

0x833c,	// (0x000155f2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x833c,	// (0x000155f2) list_medium_line_x2_t4_g2_t3

0xa040,	// (0x000172f6) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x0001cfd4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x0001cfd4) list_medium_line_x2_t4_g2_t

0xe63d,	// (0x0001b8f3) list_medium_line_t3_right_iconx2_g1

0xe539,	// (0x0001b7ef) list_medium_line_t3_right_iconx2_g2

0x834e,	// (0x00015604) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x0001cfdd) list_medium_line_t3_right_iconx2_g

0x8358,	// (0x0001560e) list_medium_line_t3_right_iconx2_t1

0x8368,	// (0x0001561e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x0001cfe4) list_medium_line_t3_right_iconx2_t

0xa007,	// (0x000172bd) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x3_t4_g4_g1

0xa013,	// (0x000172c9) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x3_t4_g4_g2

0xa0a6,	// (0x0001735c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa0a6,	// (0x0001735c) list_medium_line_x3_t4_g4_g3

0xe645,	// (0x0001b8fb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe645,	// (0x0001b8fb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x0001cfe9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x0001cfe9) list_medium_line_x3_t4_g4_g

0x8376,	// (0x0001562c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8376,	// (0x0001562c) list_medium_line_x3_t4_g4_t1

0x838d,	// (0x00015643) list_medium_line_x3_t4_g4_t2_ParamLimits

0x838d,	// (0x00015643) list_medium_line_x3_t4_g4_t2

0xa5e6,	// (0x0001789c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa5e6,	// (0x0001789c) list_medium_line_x3_t4_g4_t3

0xe651,	// (0x0001b907) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe651,	// (0x0001b907) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x0001cff2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x0001cff2) list_medium_line_x3_t4_g4_t

0x83a6,	// (0x0001565c) list_single_dyc_row_text_pane_t1_ParamLimits

0x83a6,	// (0x0001565c) list_single_dyc_row_text_pane_t1

0x83ef,	// (0x000156a5) list_single_dyc_row_text_pane_t2_ParamLimits

0x83ef,	// (0x000156a5) list_single_dyc_row_text_pane_t2

0xe66e,	// (0x0001b924) list_single_dyc_row_text_pane_t3_ParamLimits

0xe66e,	// (0x0001b924) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x0001cffb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x0001cffb) list_single_dyc_row_text_pane_t

0xe680,	// (0x0001b936) list_single_dyc_row_pane_g1_ParamLimits

0xe680,	// (0x0001b936) list_single_dyc_row_pane_g1

0xe68c,	// (0x0001b942) list_single_dyc_row_pane_g2_ParamLimits

0xe68c,	// (0x0001b942) list_single_dyc_row_pane_g2

0xe698,	// (0x0001b94e) list_single_dyc_row_pane_g3_ParamLimits

0xe698,	// (0x0001b94e) list_single_dyc_row_pane_g3

0xe6a4,	// (0x0001b95a) list_single_dyc_row_pane_g4_ParamLimits

0xe6a4,	// (0x0001b95a) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0001d002) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0001d002) list_single_dyc_row_pane_g

0xe6b0,	// (0x0001b966) list_single_dyc_row_text_pane_ParamLimits

0xe6b0,	// (0x0001b966) list_single_dyc_row_text_pane

0x94bc,	// (0x00016772) bg_sp_fs_scroll_pane

0xe6cf,	// (0x0001b985) thumb_sp_fs_scroll_pane

0xd467,	// (0x0001a71d) list_medium_line_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_g1

0xe6d8,	// (0x0001b98e) list_medium_line_t1_ParamLimits

0xe6d8,	// (0x0001b98e) list_medium_line_t1

0xa007,	// (0x000172bd) list_medium_line_x2_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_g1

0xa013,	// (0x000172c9) list_medium_line_x2_g2_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0001d00b) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0001d00b) list_medium_line_x2_g

0xe6ed,	// (0x0001b9a3) list_medium_line_x2_t1_ParamLimits

0xe6ed,	// (0x0001b9a3) list_medium_line_x2_t1

0xa007,	// (0x000172bd) list_medium_line_x3_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x3_g1

0xa013,	// (0x000172c9) list_medium_line_x3_g2_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0001d00b) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0001d00b) list_medium_line_x3_g

0xe6ed,	// (0x0001b9a3) list_medium_line_x3_t1_ParamLimits

0xe6ed,	// (0x0001b9a3) list_medium_line_x3_t1

0xe703,	// (0x0001b9b9) thumb_sp_fs_scroll_pane_g1

0xe70c,	// (0x0001b9c2) thumb_sp_fs_scroll_pane_g2

0xe715,	// (0x0001b9cb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001d010) thumb_sp_fs_scroll_pane_g

0xe703,	// (0x0001b9b9) bg_sp_fs_scroll_pane_g1

0xe70c,	// (0x0001b9c2) bg_sp_fs_scroll_pane_g2

0xe715,	// (0x0001b9cb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001d010) bg_sp_fs_scroll_pane_g

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa007,	// (0x000172bd) list_medium_line_x2_t3_g4_g1

0xa09a,	// (0x00017350) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa09a,	// (0x00017350) list_medium_line_x2_t3_g4_g2

0xa013,	// (0x000172c9) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa013,	// (0x000172c9) list_medium_line_x2_t3_g4_g3

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa01f,	// (0x000172d5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0001c5ab) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0001c5ab) list_medium_line_x2_t3_g4_g

0x8449,	// (0x000156ff) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8449,	// (0x000156ff) list_medium_line_x2_t3_g4_t1

0x845f,	// (0x00015715) list_medium_line_x2_t3_g4_t2_ParamLimits

0x845f,	// (0x00015715) list_medium_line_x2_t3_g4_t2

0xa040,	// (0x000172f6) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa040,	// (0x000172f6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0001d017) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0001d017) list_medium_line_x2_t3_g4_t

0xd467,	// (0x0001a71d) list_medium_line_g2_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_g2_g1

0xd473,	// (0x0001a729) list_medium_line_g2_g2_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0001cce4) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0001cce4) list_medium_line_g2_g

0xe71e,	// (0x0001b9d4) list_medium_line_g2_t1_ParamLimits

0xe71e,	// (0x0001b9d4) list_medium_line_g2_t1

0xd467,	// (0x0001a71d) list_medium_line_t3_g2_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t3_g2_g1

0xd473,	// (0x0001a729) list_medium_line_t3_g2_g2_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0001cce4) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0001cce4) list_medium_line_t3_g2_g

0x8478,	// (0x0001572e) list_medium_line_t3_g2_t1_ParamLimits

0x8478,	// (0x0001572e) list_medium_line_t3_g2_t1

0x8492,	// (0x00015748) list_medium_line_t3_g2_t2_ParamLimits

0x8492,	// (0x00015748) list_medium_line_t3_g2_t2

0x84a7,	// (0x0001575d) list_medium_line_t3_g2_t3_ParamLimits

0x84a7,	// (0x0001575d) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0001d01e) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0001d01e) list_medium_line_t3_g2_t

0xe539,	// (0x0001b7ef) list_medium_line_right_icon_g1

0xe733,	// (0x0001b9e9) list_medium_line_right_icon_t1

0xd467,	// (0x0001a71d) list_medium_line_t2_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t2_g1

0x84c1,	// (0x00015777) list_medium_line_t2_t1_ParamLimits

0x84c1,	// (0x00015777) list_medium_line_t2_t1

0x84db,	// (0x00015791) list_medium_line_t2_t2_ParamLimits

0x84db,	// (0x00015791) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0001d025) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0001d025) list_medium_line_t2_t

0xd467,	// (0x0001a71d) list_medium_line_t3_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t3_g1

0x84f0,	// (0x000157a6) list_medium_line_t3_t1_ParamLimits

0x84f0,	// (0x000157a6) list_medium_line_t3_t1

0x8507,	// (0x000157bd) list_medium_line_t3_t2_ParamLimits

0x8507,	// (0x000157bd) list_medium_line_t3_t2

0x851c,	// (0x000157d2) list_medium_line_t3_t3_ParamLimits

0x851c,	// (0x000157d2) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0001d02a) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0001d02a) list_medium_line_t3_t

0xd467,	// (0x0001a71d) list_medium_line_g3_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_g3_g1

0xe741,	// (0x0001b9f7) list_medium_line_g3_g2_ParamLimits

0xe741,	// (0x0001b9f7) list_medium_line_g3_g2

0xd473,	// (0x0001a729) list_medium_line_g3_g3_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0001d031) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0001d031) list_medium_line_g3_g

0xe74d,	// (0x0001ba03) list_medium_line_g3_t1_ParamLimits

0xe74d,	// (0x0001ba03) list_medium_line_g3_t1

0xd467,	// (0x0001a71d) list_medium_line_t2_g3_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t2_g3_g1

0xe741,	// (0x0001b9f7) list_medium_line_t2_g3_g2_ParamLimits

0xe741,	// (0x0001b9f7) list_medium_line_t2_g3_g2

0xd473,	// (0x0001a729) list_medium_line_t2_g3_g3_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0001d031) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0001d031) list_medium_line_t2_g3_g

0x852e,	// (0x000157e4) list_medium_line_t2_g3_t1_ParamLimits

0x852e,	// (0x000157e4) list_medium_line_t2_g3_t1

0x8545,	// (0x000157fb) list_medium_line_t2_g3_t2_ParamLimits

0x8545,	// (0x000157fb) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0001d038) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0001d038) list_medium_line_t2_g3_t

0xd467,	// (0x0001a71d) list_medium_line_t3_g3_g1_ParamLimits

0xd467,	// (0x0001a71d) list_medium_line_t3_g3_g1

0xe741,	// (0x0001b9f7) list_medium_line_t3_g3_g2_ParamLimits

0xe741,	// (0x0001b9f7) list_medium_line_t3_g3_g2

0xd473,	// (0x0001a729) list_medium_line_t3_g3_g3_ParamLimits

0xd473,	// (0x0001a729) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0001d031) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0001d031) list_medium_line_t3_g3_g

0x855e,	// (0x00015814) list_medium_line_t3_g3_t1_ParamLimits

0x855e,	// (0x00015814) list_medium_line_t3_g3_t1

0x8572,	// (0x00015828) list_medium_line_t3_g3_t2_ParamLimits

0x8572,	// (0x00015828) list_medium_line_t3_g3_t2

0x8584,	// (0x0001583a) list_medium_line_t3_g3_t3_ParamLimits

0x8584,	// (0x0001583a) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0001d03d) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0001d03d) list_medium_line_t3_g3_t

0xe63d,	// (0x0001b8f3) list_medium_line_right_iconx2_g1

0xe539,	// (0x0001b7ef) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001d044) list_medium_line_right_iconx2_g

0xe762,	// (0x0001ba18) list_medium_line_right_iconx2_t1

0xe63d,	// (0x0001b8f3) list_medium_line_t2_right_iconx2_g1

0xe539,	// (0x0001b7ef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001d044) list_medium_line_t2_right_iconx2_g

0x8598,	// (0x0001584e) list_medium_line_t2_right_iconx2_t1

0x85a8,	// (0x0001585e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0001d049) list_medium_line_t2_right_iconx2_t

0xe770,	// (0x0001ba26) list_medium_line_x4_t4_t1

0x85b6,	// (0x0001586c) list_medium_line_x4_t4_t2

0x85c6,	// (0x0001587c) list_medium_line_x4_t4_t3

0x85d6,	// (0x0001588c) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0001d04e) list_medium_line_x4_t4_t

0x8629,	// (0x000158df) tport_appsw_pane_ParamLimits

0x8629,	// (0x000158df) tport_appsw_pane

0x863a,	// (0x000158f0) tport_contact_pane_ParamLimits

0x863a,	// (0x000158f0) tport_contact_pane

0x8653,	// (0x00015909) tport_listscroll_pane_ParamLimits

0x8653,	// (0x00015909) tport_listscroll_pane

0x866e,	// (0x00015924) cell_tport_appsw_pane_ParamLimits

0x866e,	// (0x00015924) cell_tport_appsw_pane

0xd150,	// (0x0001a406) tport_appsw_pane_g1_ParamLimits

0xd150,	// (0x0001a406) tport_appsw_pane_g1

0xe77e,	// (0x0001ba34) tport_contact_pane_g1

0xe787,	// (0x0001ba3d) tport_contact_pane_t1

0xe795,	// (0x0001ba4b) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0001d057) tport_contact_pane_t

0xe7a3,	// (0x0001ba59) list_tport_pane

0xe7ac,	// (0x0001ba62) scroll_pane_cp_030

0xe7bd,	// (0x0001ba73) cell_tport_appsw_pane_g1

0xe7cd,	// (0x0001ba83) cell_tport_appsw_pane_t1

0x94bc,	// (0x00016772) grid_highlight_pane_cp019

0x86ae,	// (0x00015964) list_tport_double_graphic_pane_ParamLimits

0x86ae,	// (0x00015964) list_tport_double_graphic_pane

0x952c,	// (0x000167e2) list_highlight_pane_cp023_ParamLimits

0x952c,	// (0x000167e2) list_highlight_pane_cp023

0x86bb,	// (0x00015971) list_tport_double_graphic_pane_g1_ParamLimits

0x86bb,	// (0x00015971) list_tport_double_graphic_pane_g1

0x86c8,	// (0x0001597e) list_tport_double_graphic_pane_t1_ParamLimits

0x86c8,	// (0x0001597e) list_tport_double_graphic_pane_t1

0x86dd,	// (0x00015993) list_tport_double_graphic_pane_t2_ParamLimits

0x86dd,	// (0x00015993) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0001d063) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0001d063) list_tport_double_graphic_pane_t

0x94bc,	// (0x00016772) main_cale_note_pane

0x6569,	// (0x0001381f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6569,	// (0x0001381f) cell_vitu2_function_top_wide_pane_cp01

0x7dc7,	// (0x0001507d) wait_bar_pane_cp05_ParamLimits

0x94bc,	// (0x00016772) listscroll_cmail_pane

0xe7e3,	// (0x0001ba99) list_cmail_pane

0x86f9,	// (0x000159af) list_cmail_body_pane

0x8711,	// (0x000159c7) list_single_cmail_header_caption_pane

0x872d,	// (0x000159e3) list_single_cmail_header_detail_pane_ParamLimits

0x872d,	// (0x000159e3) list_single_cmail_header_detail_pane

0x8759,	// (0x00015a0f) list_single_cmail_header_caption_pane_t1

0x8769,	// (0x00015a1f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8769,	// (0x00015a1f) list_single_cmail_header_detail_pane_g1

0xe803,	// (0x0001bab9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe803,	// (0x0001bab9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0001d068) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0001d068) list_single_cmail_header_detail_pane_g

0xe81c,	// (0x0001bad2) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe81c,	// (0x0001bad2) list_single_cmail_header_detail_pane_t1

0xe84e,	// (0x0001bb04) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe84e,	// (0x0001bb04) list_single_cmail_header_editor_pane_bg

0xe860,	// (0x0001bb16) list_cmail_body_pane_g1

0xe869,	// (0x0001bb1f) list_cmail_body_pane_t1

0xd1be,	// (0x0001a474) list_single_cmail_header_editor_pane_bg_g1

0xa2c1,	// (0x00017577) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ce,	// (0x0001a484) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c6,	// (0x0001a47c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd43f,	// (0x0001a6f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1ee,	// (0x0001a4a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1de,	// (0x0001a494) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e6,	// (0x0001a49c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa2a1,	// (0x00017557) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x87a7,	// (0x00015a5d) calenote_gesture_pane_ParamLimits

0x87a7,	// (0x00015a5d) calenote_gesture_pane

0x87c7,	// (0x00015a7d) calenote_window_pane_ParamLimits

0x87c7,	// (0x00015a7d) calenote_window_pane

0xe877,	// (0x0001bb2d) popup_note_window_cp01

0x87e3,	// (0x00015a99) calenote_swipe_1_pane_ParamLimits

0x87e3,	// (0x00015a99) calenote_swipe_1_pane

0x81d4,	// (0x0001548a) calenote_swipe_2_pane_ParamLimits

0x81d4,	// (0x0001548a) calenote_swipe_2_pane

0xe43e,	// (0x0001b6f4) calenote_swipe_1_pane_g1_ParamLimits

0xe43e,	// (0x0001b6f4) calenote_swipe_1_pane_g1

0xe44b,	// (0x0001b701) calenote_swipe_1_pane_g2_ParamLimits

0xe44b,	// (0x0001b701) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0001cf9c) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0001cf9c) calenote_swipe_1_pane_g

0xe889,	// (0x0001bb3f) calenote_swipe_1_pane_t1_ParamLimits

0xe889,	// (0x0001bb3f) calenote_swipe_1_pane_t1

0xe43e,	// (0x0001b6f4) calenote_swipe_2_pane_g1_ParamLimits

0xe43e,	// (0x0001b6f4) calenote_swipe_2_pane_g1

0xe8a8,	// (0x0001bb5e) calenote_swipe_2_pane_g2_ParamLimits

0xe8a8,	// (0x0001bb5e) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0001d074) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0001d074) calenote_swipe_2_pane_g

0xe8b4,	// (0x0001bb6a) calenote_swipe_2_pane_t1_ParamLimits

0xe8b4,	// (0x0001bb6a) calenote_swipe_2_pane_t1

0x94bc,	// (0x00016772) main_mup_navstr_pane

0x51ea,	// (0x000124a0) main_mup3_pane_t7_ParamLimits

0x51ea,	// (0x000124a0) main_mup3_pane_t7

0xcd7b,	// (0x0001a031) main_mp4_pane_g6_ParamLimits

0xcd7b,	// (0x0001a031) main_mp4_pane_g6

0xcfa3,	// (0x0001a259) main_image3_pane_t4_ParamLimits

0xcfa3,	// (0x0001a259) main_image3_pane_t4

0x87f8,	// (0x00015aae) popup_navstr_preview_pane_ParamLimits

0x87f8,	// (0x00015aae) popup_navstr_preview_pane

0x880c,	// (0x00015ac2) scroll_navstr_pane_ParamLimits

0x880c,	// (0x00015ac2) scroll_navstr_pane

0x94bc,	// (0x00016772) bg_popup_preview_window_pane_cp04

0xe8db,	// (0x0001bb91) popup_navstr_preview_pane_t1

0x8820,	// (0x00015ad6) scroll_navstr_pane_g1_ParamLimits

0x8820,	// (0x00015ad6) scroll_navstr_pane_g1

0x8834,	// (0x00015aea) scroll_navstr_pane_t1_ParamLimits

0x8834,	// (0x00015aea) scroll_navstr_pane_t1

0xe880,	// (0x0001bb36) bg_button_pane_cp014

0xe880,	// (0x0001bb36) bg_button_pane_cp030

0xe3df,	// (0x0001b695) list_double_fisheye_pane_g4_ParamLimits

0xe3df,	// (0x0001b695) list_double_fisheye_pane_g4

0xe3eb,	// (0x0001b6a1) list_double_fisheye_pane_g5_ParamLimits

0xe3eb,	// (0x0001b6a1) list_double_fisheye_pane_g5

0xe7eb,	// (0x0001baa1) sp_fs_scroll_pane_cp03

0xa007,	// (0x000172bd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe579,	// (0x0001b82f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0001cfb9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe585,	// (0x0001b83b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x86ef,	// (0x000159a5) sp_fs_scroll_pane_cp02

0x9e88,	// (0x0001713e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e88,	// (0x0001713e) popup_sp_fs_calendar_preview_list_single_pane

0x94bc,	// (0x00016772) main_cam6_pano_pane

0x952c,	// (0x000167e2) main_mup3_pane_ParamLimits

0x94bc,	// (0x00016772) main_phacti_pane

0x7c9a,	// (0x00014f50) bg_button_pane_cp11

0x7cb4,	// (0x00014f6a) main_mobtv_info_pane_g2_ParamLimits

0x7cb4,	// (0x00014f6a) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0001cf19) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0001cf19) main_mobtv_info_pane_g

0x7e8f,	// (0x00015145) sc_clock_pane_t5_ParamLimits

0x7e8f,	// (0x00015145) sc_clock_pane_t5

0x7f14,	// (0x000151ca) main_radioblah_pane_g1_ParamLimits

0xe34d,	// (0x0001b603) main_radioblah_pane_t3_ParamLimits

0xe34d,	// (0x0001b603) main_radioblah_pane_t3

0xe365,	// (0x0001b61b) main_radioblah_pane_t4_ParamLimits

0xe365,	// (0x0001b61b) main_radioblah_pane_t4

0x7f3c,	// (0x000151f2) main_radioblah_text_pane_ParamLimits

0x7f3c,	// (0x000151f2) main_radioblah_text_pane

0x7f4e,	// (0x00015204) main_radioblah_info_pane_g1_ParamLimits

0x7fe9,	// (0x0001529f) main_radioblah_info_pane_t4_ParamLimits

0x7fe9,	// (0x0001529f) main_radioblah_info_pane_t4

0x952c,	// (0x000167e2) main_sp_fs_calendar_pane

0x884a,	// (0x00015b00) main_phacti_pane_g1

0x8852,	// (0x00015b08) phacti_note_pane_ParamLimits

0x8852,	// (0x00015b08) phacti_note_pane

0xe8f2,	// (0x0001bba8) phacti_term_pane_ParamLimits

0xe8f2,	// (0x0001bba8) phacti_term_pane

0xe907,	// (0x0001bbbd) phacti_note_pane_t1_ParamLimits

0xe907,	// (0x0001bbbd) phacti_note_pane_t1

0xe91e,	// (0x0001bbd4) phacti_term_pane_g1

0xe926,	// (0x0001bbdc) phacti_term_pane_t1_ParamLimits

0xe926,	// (0x0001bbdc) phacti_term_pane_t1

0xe950,	// (0x0001bc06) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe958,	// (0x0001bc0e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0001d07e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe960,	// (0x0001bc16) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe960,	// (0x0001bc16) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe976,	// (0x0001bc2c) aid_popup_sp_fs_bg_corner_pane

0xc412,	// (0x000196c8) popup_sp_fs_calendar_preview_bg_pane_g1

0x94bc,	// (0x00016772) popup_sp_fs_calendar_preview_bg_pane

0xe97e,	// (0x0001bc34) popup_sp_fs_calendar_preview_list_pane

0x952c,	// (0x000167e2) bg_main_sp_fs_cale_pane_ParamLimits

0x952c,	// (0x000167e2) bg_main_sp_fs_cale_pane

0xe98f,	// (0x0001bc45) listscroll_cale_mrui_pane_ParamLimits

0xe98f,	// (0x0001bc45) listscroll_cale_mrui_pane

0xe9a3,	// (0x0001bc59) listscroll_sp_fs_schedule_track_pane

0xe9ac,	// (0x0001bc62) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9ac,	// (0x0001bc62) main_sp_fs_ctrlbar_pane_cp01

0xe9bd,	// (0x0001bc73) main_sp_fs_ribbon_pane

0xe9c5,	// (0x0001bc7b) popup_sp_fs_cale_preview_window

0x88ad,	// (0x00015b63) list_single_sp_fs_schedule_track_pane_ParamLimits

0x88ad,	// (0x00015b63) list_single_sp_fs_schedule_track_pane

0x952c,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x952c,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp03

0x88c3,	// (0x00015b79) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x88c3,	// (0x00015b79) list_single_sp_fs_schedule_track_pane_g1

0x88cf,	// (0x00015b85) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x88cf,	// (0x00015b85) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0001d083) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0001d083) list_single_sp_fs_schedule_track_pane_g

0x88db,	// (0x00015b91) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x88db,	// (0x00015b91) list_single_sp_fs_schedule_track_pane_t1

0x88f5,	// (0x00015bab) sp_fs_schedule_track_pane_ParamLimits

0x88f5,	// (0x00015bab) sp_fs_schedule_track_pane

0xe9d7,	// (0x0001bc8d) sp_fs_schedule_track_pane_g1

0xe9df,	// (0x0001bc95) sp_fs_schedule_track_pane_g2

0xe9e7,	// (0x0001bc9d) sp_fs_schedule_track_pane_g3

0xe9ef,	// (0x0001bca5) sp_fs_schedule_track_pane_g4

0xe9f7,	// (0x0001bcad) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0001d088) sp_fs_schedule_track_pane_g

0xd1be,	// (0x0001a474) bg_sp_fs_schedule_viewer_highlight_g1

0xa2c1,	// (0x00017577) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c6,	// (0x0001a47c) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ce,	// (0x0001a484) bg_sp_fs_schedule_viewer_highlight_g4

0xd43f,	// (0x0001a6f5) bg_sp_fs_schedule_viewer_highlight_g5

0xd1de,	// (0x0001a494) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e6,	// (0x0001a49c) bg_sp_fs_schedule_viewer_highlight_g7

0xd1ee,	// (0x0001a4a4) bg_sp_fs_schedule_viewer_highlight_g8

0xa2a1,	// (0x00017557) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0001d093) bg_sp_fs_schedule_viewer_highlight_g

0x94bc,	// (0x00016772) bg_main_sp_fs_ribbon_pane

0x8906,	// (0x00015bbc) main_sp_fs_ribbon_pane_g1

0xe9ff,	// (0x0001bcb5) main_sp_fs_ribbon_pane_t1

0x890f,	// (0x00015bc5) main_sp_fs_ribbon_pane_t2

0xea0e,	// (0x0001bcc4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0001d0a6) main_sp_fs_ribbon_pane_t

0xea1d,	// (0x0001bcd3) main_sp_fs_ribbon_scheduler_pane

0xea25,	// (0x0001bcdb) bg_main_sp_fs_ribbon_pane_g1

0xea2e,	// (0x0001bce4) bg_main_sp_fs_ribbon_pane_g2

0xea37,	// (0x0001bced) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0001d0ad) bg_main_sp_fs_ribbon_pane_g

0xea3f,	// (0x0001bcf5) main_sp_fs_ribbon_scheduler_pane_g1

0xea48,	// (0x0001bcfe) main_sp_fs_ribbon_scheduler_pane_g2

0xea51,	// (0x0001bd07) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0001d0b4) main_sp_fs_ribbon_scheduler_pane_g

0xea5a,	// (0x0001bd10) list_cale_mrui_pane

0x891e,	// (0x00015bd4) sp_fs_scroll_pane_cp07_ParamLimits

0x891e,	// (0x00015bd4) sp_fs_scroll_pane_cp07

0x8934,	// (0x00015bea) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8934,	// (0x00015bea) bg_sp_fs_schedule_viewer_highlight

0xea63,	// (0x0001bd19) list_single_sp_fs_schedule_track_pane_cp01

0xea6b,	// (0x0001bd21) list_sp_fs_schedule_track_pane

0xea73,	// (0x0001bd29) sp_fs_scroll_pane_cp06_ParamLimits

0xea73,	// (0x0001bd29) sp_fs_scroll_pane_cp06

0xc412,	// (0x000196c8) bgmain_sp_fs_calendar_pane_g1

0x8944,	// (0x00015bfa) list_single_cale_mrui_pane_ParamLimits

0x8944,	// (0x00015bfa) list_single_cale_mrui_pane

0xea85,	// (0x0001bd3b) list_single_cale_mrui_row_pane_ParamLimits

0xea85,	// (0x0001bd3b) list_single_cale_mrui_row_pane

0xea92,	// (0x0001bd48) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea92,	// (0x0001bd48) list_single_cale_mrui_row_pane_g1

0xeaca,	// (0x0001bd80) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeaca,	// (0x0001bd80) list_single_cale_mrui_row_pane_t1

0x8967,	// (0x00015c1d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8967,	// (0x00015c1d) list_single_cale_mrui_row_pane_t2

0xeadc,	// (0x0001bd92) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeadc,	// (0x0001bd92) list_single_cale_mrui_row_pane_t3

0xeb0b,	// (0x0001bdc1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb0b,	// (0x0001bdc1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x0001d0c0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x0001d0c0) list_single_cale_mrui_row_pane_t

0x89cf,	// (0x00015c85) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x89cf,	// (0x00015c85) list_single_cmail_header_editor_pane_bg_cp01

0x89f5,	// (0x00015cab) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x89f5,	// (0x00015cab) list_single_cmail_header_editor_pane_bg_cp02

0x8a15,	// (0x00015ccb) main_radioblah_text_pane_t1_ParamLimits

0x8a15,	// (0x00015ccb) main_radioblah_text_pane_t1

0xeb3a,	// (0x0001bdf0) cam6_indi_pane_cp01

0xeb42,	// (0x0001bdf8) cam6_mode_pane_cp01

0xeb4a,	// (0x0001be00) cam6_pano_pane

0xeb53,	// (0x0001be09) cam6_zoom_pane_cp01

0xeb5b,	// (0x0001be11) cam6_pano_image_pane

0xeb66,	// (0x0001be1c) cam6_pano_pane_g1

0xe0c5,	// (0x0001b37b) cam6_pano_pane_g2

0xeb6f,	// (0x0001be25) cam6_pano_pane_g3

0xeb78,	// (0x0001be2e) cam6_pano_pane_g4

0xc9de,	// (0x00019c94) cam6_pano_pane_g5

0xeb81,	// (0x0001be37) cam6_pano_pane_g6

0xeb8b,	// (0x0001be41) cam6_pano_pane_g7

0xeb93,	// (0x0001be49) cam6_pano_pane_g8

0xeb9c,	// (0x0001be52) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x0001d0c9) cam6_pano_pane_g

0x94bc,	// (0x00016772) main_browser_tag_pane

0xe8d3,	// (0x0001bb89) grid_navstr_albumart_pane

0xeba7,	// (0x0001be5d) cell_navstr_albumart_pane_ParamLimits

0xeba7,	// (0x0001be5d) cell_navstr_albumart_pane

0xabf4,	// (0x00017eaa) cell_navstr_albumart_pane_g1

0xbd27,	// (0x00018fdd) cell_navstr_albumart_pane_g2

0xbd37,	// (0x00018fed) cell_navstr_albumart_pane_g3

0xbd2f,	// (0x00018fe5) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x0001d0dc) cell_navstr_albumart_pane_g

0x8a30,	// (0x00015ce6) bt_list_pane_ParamLimits

0x8a30,	// (0x00015ce6) bt_list_pane

0x8a45,	// (0x00015cfb) bt_list_pane_t1

0x8a54,	// (0x00015d0a) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x0001d0e5) bt_list_pane_t

0x94bc,	// (0x00016772) main_cale_prevew_pane

0x8a63,	// (0x00015d19) popup_cale_preview_window_ParamLimits

0x8a63,	// (0x00015d19) popup_cale_preview_window

0x952c,	// (0x000167e2) bg_popup_preview_window_pane_cp05_ParamLimits

0x952c,	// (0x000167e2) bg_popup_preview_window_pane_cp05

0xebc9,	// (0x0001be7f) list_cale_preview_pane_ParamLimits

0xebc9,	// (0x0001be7f) list_cale_preview_pane

0x8a78,	// (0x00015d2e) list_double_cale_preview_pane_ParamLimits

0x8a78,	// (0x00015d2e) list_double_cale_preview_pane

0x8a8a,	// (0x00015d40) list_single_cale_preview_pane_ParamLimits

0x8a8a,	// (0x00015d40) list_single_cale_preview_pane

0x8a9e,	// (0x00015d54) list_single_cale_preview_pane_g1

0x8aa6,	// (0x00015d5c) list_single_cale_preview_pane_t1_ParamLimits

0x8aa6,	// (0x00015d5c) list_single_cale_preview_pane_t1

0x8abb,	// (0x00015d71) list_double_cale_preview_pane_g1

0x8ac3,	// (0x00015d79) list_double_cale_preview_pane_t1_ParamLimits

0x8ac3,	// (0x00015d79) list_double_cale_preview_pane_t1

0x8ad8,	// (0x00015d8e) list_double_cale_preview_pane_t2_ParamLimits

0x8ad8,	// (0x00015d8e) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x0001d0ea) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x0001d0ea) list_double_cale_preview_pane_t

0x94bc,	// (0x00016772) main_ezdial_pane

0x952c,	// (0x000167e2) main_sp_fs_email_pane_ParamLimits

0x820c,	// (0x000154c2) cmail_ddmenu_btn01_pane_ParamLimits

0x820c,	// (0x000154c2) cmail_ddmenu_btn01_pane

0x821f,	// (0x000154d5) cmail_ddmenu_btn02_pane_ParamLimits

0x821f,	// (0x000154d5) cmail_ddmenu_btn02_pane

0x8242,	// (0x000154f8) cmail_ddmenu_btn03_pane_ParamLimits

0x8242,	// (0x000154f8) cmail_ddmenu_btn03_pane

0x8266,	// (0x0001551c) main_sp_fs_ctrlbar_pane_ParamLimits

0x828a,	// (0x00015540) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x86f9,	// (0x000159af) list_cmail_body_pane_ParamLimits

0xe7fa,	// (0x0001bab0) bg_button_pane_cp12

0xe80f,	// (0x0001bac5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe80f,	// (0x0001bac5) list_single_cmail_header_detail_pane_g3

0x8781,	// (0x00015a37) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8781,	// (0x00015a37) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0001d06f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0001d06f) list_single_cmail_header_detail_pane_t

0xe93b,	// (0x0001bbf1) phacti_term_pane_t2_ParamLimits

0xe93b,	// (0x0001bbf1) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0001d079) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0001d079) phacti_term_pane_t

0xebd5,	// (0x0001be8b) aid_size_list_single_double

0x8af0,	// (0x00015da6) popup_ezdial_listscroll_window

0x8b0c,	// (0x00015dc2) popup_number_entry_window_cp01

0xaa73,	// (0x00017d29) bg_popup_call_pane_cp09

0xebe1,	// (0x0001be97) ezdial_list_pane

0xebe9,	// (0x0001be9f) scroll_pane_cp23

0xbf0a,	// (0x000191c0) bg_button_pane_cp028_ParamLimits

0xbf0a,	// (0x000191c0) bg_button_pane_cp028

0x8b1a,	// (0x00015dd0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b1a,	// (0x00015dd0) cmail_ddmenu_btn01_pane_g1

0x8b26,	// (0x00015ddc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b26,	// (0x00015ddc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x0001d0ef) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x0001d0ef) cmail_ddmenu_btn01_pane_g

0xebf1,	// (0x0001bea7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xebf1,	// (0x0001bea7) cmail_ddmenu_btn01_pane_t1

0xbf0a,	// (0x000191c0) bg_button_pane_cp029_ParamLimits

0xbf0a,	// (0x000191c0) bg_button_pane_cp029

0x8b32,	// (0x00015de8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b32,	// (0x00015de8) cmail_ddmenu_btn02_pane_g1

0x8b4a,	// (0x00015e00) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8b4a,	// (0x00015e00) cmail_ddmenu_btn02_pane_t1

0x952c,	// (0x000167e2) bg_button_pane_cp031_ParamLimits

0x952c,	// (0x000167e2) bg_button_pane_cp031

0x8b32,	// (0x00015de8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b32,	// (0x00015de8) cmail_ddmenu_btn03_pane_g1

0x8b4a,	// (0x00015e00) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8b4a,	// (0x00015e00) cmail_ddmenu_btn03_pane_t1

0x5d6b,	// (0x00013021) cell_dialer2_keypad_pane_t1_ParamLimits

0x5d85,	// (0x0001303b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5d85,	// (0x0001303b) cell_dialer2_keypad_pane_t1_copy1

0x7b36,	// (0x00014dec) ncimui_group_button_pane

0x952c,	// (0x000167e2) main_sp_fs_calendar_pane_ParamLimits

0x8711,	// (0x000159c7) list_single_cmail_header_caption_pane_ParamLimits

0xe986,	// (0x0001bc3c) aid_recal_txt_sm_pane

0x94bc,	// (0x00016772) mian_recal_day_pane

0xe9c5,	// (0x0001bc7b) popup_sp_fs_cale_preview_window_ParamLimits

0x94bc,	// (0x00016772) list_recal_day_pane

0xec28,	// (0x0001bede) list_single_recal_day_pane_ParamLimits

0xec28,	// (0x0001bede) list_single_recal_day_pane

0xec3a,	// (0x0001bef0) list_single_recal_day_pane_g1_ParamLimits

0xec3a,	// (0x0001bef0) list_single_recal_day_pane_g1

0xec46,	// (0x0001befc) list_single_recal_day_pane_g2_ParamLimits

0xec46,	// (0x0001befc) list_single_recal_day_pane_g2

0xec55,	// (0x0001bf0b) list_single_recal_day_pane_g3_ParamLimits

0xec55,	// (0x0001bf0b) list_single_recal_day_pane_g3

0x8b6e,	// (0x00015e24) list_single_recal_day_pane_g4_ParamLimits

0x8b6e,	// (0x00015e24) list_single_recal_day_pane_g4

0xec61,	// (0x0001bf17) list_single_recal_day_pane_g5_ParamLimits

0xec61,	// (0x0001bf17) list_single_recal_day_pane_g5

0xec70,	// (0x0001bf26) list_single_recal_day_pane_g6_ParamLimits

0xec70,	// (0x0001bf26) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x0001d0fe) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x0001d0fe) list_single_recal_day_pane_g

0xec7c,	// (0x0001bf32) list_single_recal_day_pane_t1

0xec8a,	// (0x0001bf40) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0001d10b) list_single_recal_day_pane_t

0x8b81,	// (0x00015e37) ncimui_query_button_pane_ParamLimits

0x8b81,	// (0x00015e37) ncimui_query_button_pane

0x8b91,	// (0x00015e47) ncimui_query_button_pane_t1_ParamLimits

0x8b91,	// (0x00015e47) ncimui_query_button_pane_t1

0xec98,	// (0x0001bf4e) ncimui_query_button_pane_t2_ParamLimits

0xec98,	// (0x0001bf4e) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0001d110) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0001d110) ncimui_query_button_pane_t

0x8ba4,	// (0x00015e5a) query_button_pane_ParamLimits

0x8ba4,	// (0x00015e5a) query_button_pane

0x94bc,	// (0x00016772) bg_button_pane_cp0028

0xecab,	// (0x0001bf61) query_button_pane_t1

0x3e43,	// (0x000110f9) main_tport_pane_ParamLimits

0x85e6,	// (0x0001589c) bg_popup_window_pane_cp01_ParamLimits

0x85e6,	// (0x0001589c) bg_popup_window_pane_cp01

0x8600,	// (0x000158b6) heading_pane_cp08_ParamLimits

0x8600,	// (0x000158b6) heading_pane_cp08

0x8614,	// (0x000158ca) heading_pane_cp07_ParamLimits

0x8614,	// (0x000158ca) heading_pane_cp07

0xe7bd,	// (0x0001ba73) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0001d05c) cell_tport_appsw_pane_g

0x341a,	// (0x000106d0) input_candi_list_open_g1

0xa4b4,	// (0x0001776a) list_cale_time_pane_g6_ParamLimits

0xa4b4,	// (0x0001776a) list_cale_time_pane_g6

0x4c0c,	// (0x00011ec2) aid_size_touch_calib_1_ParamLimits

0x4c0c,	// (0x00011ec2) aid_size_touch_calib_1

0x4c18,	// (0x00011ece) aid_size_touch_calib_2_ParamLimits

0x4c18,	// (0x00011ece) aid_size_touch_calib_2

0x4c2e,	// (0x00011ee4) aid_size_touch_calib_3_ParamLimits

0x4c2e,	// (0x00011ee4) aid_size_touch_calib_3

0x4c4c,	// (0x00011f02) aid_size_touch_calib_4_ParamLimits

0x4c4c,	// (0x00011f02) aid_size_touch_calib_4

0x4c62,	// (0x00011f18) main_touch_calib_button_group_pane_ParamLimits

0x4c62,	// (0x00011f18) main_touch_calib_button_group_pane

0x4c79,	// (0x00011f2f) main_touch_calib_pane_g1_ParamLimits

0x4c85,	// (0x00011f3b) main_touch_calib_pane_g2_ParamLimits

0x4c91,	// (0x00011f47) main_touch_calib_pane_g3_ParamLimits

0x4c9d,	// (0x00011f53) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0001ca3a) main_touch_calib_pane_g_ParamLimits

0x4ca9,	// (0x00011f5f) main_touch_calib_pane_t1_ParamLimits

0x4cc3,	// (0x00011f79) main_touch_calib_pane_t2_ParamLimits

0x4cdd,	// (0x00011f93) main_touch_calib_pane_t3_ParamLimits

0x4cf1,	// (0x00011fa7) main_touch_calib_pane_t4_ParamLimits

0x4d05,	// (0x00011fbb) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0001ca43) main_touch_calib_pane_t_ParamLimits

0xc7b7,	// (0x00019a6d) list_single_fp_cale_pane_g3_ParamLimits

0xc7b7,	// (0x00019a6d) list_single_fp_cale_pane_g3

0x952c,	// (0x000167e2) bg_button_pane_cp012_ParamLimits

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp03_ParamLimits

0x6e49,	// (0x000140ff) cell_vitu2_function_top_pane_g1_ParamLimits

0x952c,	// (0x000167e2) bg_vkb2_func_pane_cp04_ParamLimits

0x7aea,	// (0x00014da0) main_ncimui_button_group_pane_ParamLimits

0x7aea,	// (0x00014da0) main_ncimui_button_group_pane

0x7b24,	// (0x00014dda) main_ncimui_pane_t3_ParamLimits

0x7b24,	// (0x00014dda) main_ncimui_pane_t3

0xe8e9,	// (0x0001bb9f) phacti_button_group_pane

0xebd5,	// (0x0001be8b) aid_size_list_single_double_ParamLimits

0x8af0,	// (0x00015da6) popup_ezdial_listscroll_window_ParamLimits

0x8b0c,	// (0x00015dc2) popup_number_entry_window_cp01_ParamLimits

0x8bb7,	// (0x00015e6d) phacti_button_pane_ParamLimits

0x8bb7,	// (0x00015e6d) phacti_button_pane

0x94bc,	// (0x00016772) bg_button_pane_cp14

0xecb9,	// (0x0001bf6f) phacti_button_pane_t1

0x8bc8,	// (0x00015e7e) main_touch_calib_button_pane_ParamLimits

0x8bc8,	// (0x00015e7e) main_touch_calib_button_pane

0x9cd7,	// (0x00016f8d) bg_button_pane_cp18_ParamLimits

0x9cd7,	// (0x00016f8d) bg_button_pane_cp18

0xecc7,	// (0x0001bf7d) main_touch_calib_button_pane_t1_ParamLimits

0xecc7,	// (0x0001bf7d) main_touch_calib_button_pane_t1

0xecdd,	// (0x0001bf93) main_touch_calib_button_pane_t2_ParamLimits

0xecdd,	// (0x0001bf93) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0001d115) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0001d115) main_touch_calib_button_pane_t

0x94bc,	// (0x00016772) cell_ncimui_button_pane

0x94bc,	// (0x00016772) bg_button_pane_cp032

0xecfb,	// (0x0001bfb1) cell_ncimui_button_pane_t1

0xcf83,	// (0x0001a239) image3_infobar_pane_ParamLimits

0xcf83,	// (0x0001a239) image3_infobar_pane

0x7ebb,	// (0x00015171) fs_bigclock_status_pane_ParamLimits

0x7ebb,	// (0x00015171) fs_bigclock_status_pane

0x7ec8,	// (0x0001517e) main_fs_bigclock_clock_pane_ParamLimits

0x7ec8,	// (0x0001517e) main_fs_bigclock_clock_pane

0x7edb,	// (0x00015191) main_fs_bigclock_indi_pane_ParamLimits

0x7edb,	// (0x00015191) main_fs_bigclock_indi_pane

0x7ef3,	// (0x000151a9) main_fs_bigclock_swipe_pane_ParamLimits

0x7ef3,	// (0x000151a9) main_fs_bigclock_swipe_pane

0x94bc,	// (0x00016772) main_fs_clock_dumped_data

0xe1d2,	// (0x0001b488) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1d2,	// (0x0001b488) list_single_fs_bigclock_indicator_pane_g1

0xe1f0,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1f0,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_g2

0xe20a,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe20a,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g3

0xe224,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe224,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0001cf4d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0001cf4d) list_single_fs_bigclock_indicator_pane_g

0xe24a,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe24a,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1

0xe272,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe272,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2

0xe29a,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe29a,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3

0xe2c2,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2c2,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0001cf58) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0001cf58) list_single_fs_bigclock_indicator_pane_t

0xed09,	// (0x0001bfbf) image3_infobar_fav_pane_ParamLimits

0xed09,	// (0x0001bfbf) image3_infobar_fav_pane

0xed19,	// (0x0001bfcf) image3_infobar_loc_pane_ParamLimits

0xed19,	// (0x0001bfcf) image3_infobar_loc_pane

0xed2d,	// (0x0001bfe3) image3_infobar_time_pane_ParamLimits

0xed2d,	// (0x0001bfe3) image3_infobar_time_pane

0xc412,	// (0x000196c8) image3_infobar_time_pane_g1

0xed3d,	// (0x0001bff3) image3_infobar_time_pane_t1

0xc412,	// (0x000196c8) image3_infobar_loc_pane_g1

0xed4b,	// (0x0001c001) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0001d11a) image3_infobar_loc_pane_g

0xed53,	// (0x0001c009) image3_infobar_loc_pane_t1

0xc412,	// (0x000196c8) image3_infobar_fav_pane_g1

0xed61,	// (0x0001c017) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0001d11f) image3_infobar_fav_pane_g

0xed69,	// (0x0001c01f) fs_bigclock_status_battery_pane

0xed72,	// (0x0001c028) fs_bigclock_status_signal_pane

0xed7b,	// (0x0001c031) fs_bigclock_status_title_pane

0xed84,	// (0x0001c03a) fs_bigclock_status_signal_pane_g1

0xed8d,	// (0x0001c043) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0001d124) fs_bigclock_status_signal_pane_g

0xed95,	// (0x0001c04b) fs_bigclock_status_battery_pane_g1

0xed9e,	// (0x0001c054) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0001d129) fs_bigclock_status_battery_pane_g

0xeda6,	// (0x0001c05c) fs_bigclock_status_title_pane_t1

0xc412,	// (0x000196c8) main_fs_bigclock_clock_pane_g1

0xedb4,	// (0x0001c06a) main_fs_bigclock_clock_pane_g2

0xedb4,	// (0x0001c06a) main_fs_bigclock_clock_pane_g3

0xedb4,	// (0x0001c06a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0001d12e) main_fs_bigclock_clock_pane_g

0xedbc,	// (0x0001c072) main_fs_bigclock_clock_pane_t1

0xedca,	// (0x0001c080) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0001d137) main_fs_bigclock_clock_pane_t

0xedd9,	// (0x0001c08f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xedd9,	// (0x0001c08f) list_single_fs_bigclock_indicator_pane

0x8bdd,	// (0x00015e93) list_single_fs_bigclock_pane_ParamLimits

0x8bdd,	// (0x00015e93) list_single_fs_bigclock_pane

0xedf3,	// (0x0001c0a9) main_fs_bigclock_indicator_pane_t1

0xee02,	// (0x0001c0b8) list_single_fs_bigclock_pane_g1

0xee0a,	// (0x0001c0c0) list_single_fs_bigclock_pane_t1

0xc412,	// (0x000196c8) main_fs_bigclock_swipe_pane_g1

0xee48,	// (0x0001c0fe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0001d148) main_fs_bigclock_swipe_pane_g

0xee50,	// (0x0001c106) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee50,	// (0x0001c106) main_fs_bigclock_swipe_pane_t1

0x2c53,	// (0x0000ff09) call_type_pane_ParamLimits

0x94bc,	// (0x00016772) main_btmg_pane

0xeabe,	// (0x0001bd74) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeabe,	// (0x0001bd74) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x0001d0bb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0001d0bb) list_single_cale_mrui_row_pane_g

0xec0f,	// (0x0001bec5) list_recal_vselct_arw_lo_pane

0xec17,	// (0x0001becd) list_recal_vselct_arw_up_pane

0xec1f,	// (0x0001bed5) list_recal_vselct_pane

0xee6d,	// (0x0001c123) btmg_button_pane

0x8c43,	// (0x00015ef9) main_btmg_pane_g1

0x94bc,	// (0x00016772) bg_button_pane_cp044

0xee80,	// (0x0001c136) btmg_button_pane_t1

0xbf02,	// (0x000191b8) aid_listscroll_gen

0x952c,	// (0x000167e2) main_cntbar_detail_pane

0xe7db,	// (0x0001ba91) list_cmail_folder_pane

0xe7eb,	// (0x0001baa1) sp_fs_scroll_pane_cp03_ParamLimits

0x8711,	// (0x000159c7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8711,	// (0x000159c7) list_single_fs_dyc_pane_cp01

0xee8e,	// (0x0001c144) aid_size_cmail_indent

0xee97,	// (0x0001c14d) list_single_dyc_row_pane_cp01

0x8c79,	// (0x00015f2f) cntbar_detail_list_pane_ParamLimits

0x8c79,	// (0x00015f2f) cntbar_detail_list_pane

0x8cc5,	// (0x00015f7b) main_cntbar_detail_cont_pane_ParamLimits

0x8cc5,	// (0x00015f7b) main_cntbar_detail_cont_pane

0x2bed,	// (0x0000fea3) scroll_pane_cp032_ParamLimits

0x2bed,	// (0x0000fea3) scroll_pane_cp032

0x8cd9,	// (0x00015f8f) cntbar_detail_list_event_pane_ParamLimits

0x8cd9,	// (0x00015f8f) cntbar_detail_list_event_pane

0x8c89,	// (0x00015f3f) cntbar_detail_list_shct_pane

0xa30f,	// (0x000175c5) aid_list_gen

0xeea0,	// (0x0001c156) aid_scroll

0xeea9,	// (0x0001c15f) aid_size_touch_scroll_bar

0x0285,	// (0x0000d53b) aid_list_double

0xeeb2,	// (0x0001c168) aid_list_single

0xeebb,	// (0x0001c171) aid_list_single_lg

0xeec4,	// (0x0001c17a) aid_list_z_g_a_sm

0xeecc,	// (0x0001c182) aid_list_z_g_d

0xeed4,	// (0x0001c18a) aid_txt_z_prm

0x8ce9,	// (0x00015f9f) aid_txt_z_prm_cp01

0x8cf7,	// (0x00015fad) aid_txt_z_sec

0x8d05,	// (0x00015fbb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d05,	// (0x00015fbb) main_cntbar_detail_cont_pane_g1

0x8d19,	// (0x00015fcf) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d19,	// (0x00015fcf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0001d14d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0001d14d) main_cntbar_detail_cont_pane_g

0xeee2,	// (0x0001c198) main_cntbar_detail_cont_pane_t1

0xeef0,	// (0x0001c1a6) main_cntbar_detail_cont_pane_t2

0xeefe,	// (0x0001c1b4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0001d152) main_cntbar_detail_cont_pane_t

0x8d29,	// (0x00015fdf) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d29,	// (0x00015fdf) cell_cntbar_detail_list_shct_pane

0xef0c,	// (0x0001c1c2) cntbar_detail_list_shct_pane_g1

0xef15,	// (0x0001c1cb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0001d159) cntbar_detail_list_shct_pane_g

0x8d3d,	// (0x00015ff3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d3d,	// (0x00015ff3) cntbar_detail_list_event_pane_g1

0x8d49,	// (0x00015fff) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d49,	// (0x00015fff) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0001d15e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0001d15e) cntbar_detail_list_event_pane_g

0x8db5,	// (0x0001606b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8db5,	// (0x0001606b) cntbar_detail_list_event_pane_t1

0x8dca,	// (0x00016080) cntbar_detail_list_event_pane_t2_ParamLimits

0x8dca,	// (0x00016080) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0001d16b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0001d16b) cntbar_detail_list_event_pane_t

0xc412,	// (0x000196c8) cell_cntbar_detail_list_shct_pane_g1

0x2fa4,	// (0x0001025a) navi_pane_mv_g3

0x952c,	// (0x000167e2) main_cntbar_detail_pane_ParamLimits

0x94bc,	// (0x00016772) main_notif_wgt_pane

0xcd15,	// (0x00019fcb) aid_tch_main_mp4_pane_g4

0xcf17,	// (0x0001a1cd) popup_slider_window_cp02

0xec06,	// (0x0001bebc) list_recal_day_event_pane

0x8c4d,	// (0x00015f03) cntbar_detail_btn_pane_ParamLimits

0x8c4d,	// (0x00015f03) cntbar_detail_btn_pane

0x8c63,	// (0x00015f19) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c63,	// (0x00015f19) cntbar_detail_btn_pane_cp01

0x8c89,	// (0x00015f3f) cntbar_detail_list_shct_pane_ParamLimits

0x8c99,	// (0x00015f4f) cntbar_detail_pane_g1_ParamLimits

0x8c99,	// (0x00015f4f) cntbar_detail_pane_g1

0x8ca9,	// (0x00015f5f) cntbar_detail_pane_t1_ParamLimits

0x8ca9,	// (0x00015f5f) cntbar_detail_pane_t1

0x8d55,	// (0x0001600b) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d55,	// (0x0001600b) cntbar_detail_list_event_pane_g3

0x8d6d,	// (0x00016023) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d6d,	// (0x00016023) cntbar_detail_list_event_pane_g4

0x8d85,	// (0x0001603b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d85,	// (0x0001603b) cntbar_detail_list_event_pane_g5

0x8d9d,	// (0x00016053) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d9d,	// (0x00016053) cntbar_detail_list_event_pane_g6

0x8ddf,	// (0x00016095) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ddf,	// (0x00016095) cntbar_detail_list_event_pane_t3

0x8df1,	// (0x000160a7) popup_notif_wgt_window_ParamLimits

0x8df1,	// (0x000160a7) popup_notif_wgt_window

0x8e0a,	// (0x000160c0) popup_submenu_window_cp01_ParamLimits

0x8e0a,	// (0x000160c0) popup_submenu_window_cp01

0xaa73,	// (0x00017d29) bg_popup_window_pane_cp10

0xef1e,	// (0x0001c1d4) listscroll_notif_wgt_pane

0xef28,	// (0x0001c1de) list_notif_wgt_window

0xef31,	// (0x0001c1e7) scroll_pane_cp033

0xef3a,	// (0x0001c1f0) list_notif_wgt_row_pane_ParamLimits

0xef3a,	// (0x0001c1f0) list_notif_wgt_row_pane

0xef4e,	// (0x0001c204) aid_size_list_notif_wgt_del

0xef57,	// (0x0001c20d) list_notif_wgt_row_pane_g1

0xef5f,	// (0x0001c215) list_notif_wgt_row_pane_g2

0xef67,	// (0x0001c21d) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0001d172) list_notif_wgt_row_pane_g

0xef70,	// (0x0001c226) list_notif_wgt_row_pane_t1

0xef7e,	// (0x0001c234) list_notif_wgt_row_pane_t2

0xef8c,	// (0x0001c242) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0001d179) list_notif_wgt_row_pane_t

0xd47f,	// (0x0001a735) list_recal_day_event_pane_g1

0xef9a,	// (0x0001c250) list_recal_day_event_pane_t1

0x94bc,	// (0x00016772) bg_button_pane_cp045

0xefa9,	// (0x0001c25f) cntbar_detail_btn_pane_t1

0xbf0a,	// (0x000191c0) main_callh_pane_ParamLimits

0xbf0a,	// (0x000191c0) main_callh_pane

0x94bc,	// (0x00016772) main_coverflow0_pane

0x94bc,	// (0x00016772) main_wgtman_pane

0x7f01,	// (0x000151b7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7f01,	// (0x000151b7) main_fs_bigclock_unlock_btn_pane

0xe7b5,	// (0x0001ba6b) bg_button_pane_cp16

0xe7c5,	// (0x0001ba7b) cell_tport_appsw_pane_g3

0x8e1c,	// (0x000160d2) cf0_flow_pane_ParamLimits

0x8e1c,	// (0x000160d2) cf0_flow_pane

0xefb7,	// (0x0001c26d) listscroll_cf0_pane

0xefc0,	// (0x0001c276) main_cf0_pane_g1

0x8e31,	// (0x000160e7) main_cf0_pane_t1_ParamLimits

0x8e31,	// (0x000160e7) main_cf0_pane_t1

0x8e49,	// (0x000160ff) main_cf0_pane_t2_ParamLimits

0x8e49,	// (0x000160ff) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001d180) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001d180) main_cf0_pane_t

0xefca,	// (0x0001c280) scroll_pane_cp11

0x8e61,	// (0x00016117) cf0_flow_pane_g1

0x8e69,	// (0x0001611f) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001d185) cf0_flow_pane_g

0x8e71,	// (0x00016127) cf0_flow_pane_t1

0x94bc,	// (0x00016772) main_call6_pane

0x94bc,	// (0x00016772) main_calllock_pane

0x8e7f,	// (0x00016135) call6_btn_grp_pane_ParamLimits

0x8e7f,	// (0x00016135) call6_btn_grp_pane

0x8e99,	// (0x0001614f) call6_pane_g1_ParamLimits

0x8e99,	// (0x0001614f) call6_pane_g1

0x8eae,	// (0x00016164) popup_call6_1st_window_ParamLimits

0x8eae,	// (0x00016164) popup_call6_1st_window

0x8ebf,	// (0x00016175) popup_call6_2nd_window_ParamLimits

0x8ebf,	// (0x00016175) popup_call6_2nd_window

0x8ed0,	// (0x00016186) cell_call6_btn_pane_ParamLimits

0x8ed0,	// (0x00016186) cell_call6_btn_pane

0xaa73,	// (0x00017d29) bg_popup_call2_in_pane_cp03

0xefd5,	// (0x0001c28b) popup_call6_1st_window_g1

0xefdd,	// (0x0001c293) popup_call6_1st_window_g2

0xefe5,	// (0x0001c29b) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001d18a) popup_call6_1st_window_g

0xefed,	// (0x0001c2a3) popup_call6_1st_window_t1

0xeffc,	// (0x0001c2b2) popup_call6_1st_window_t2

0xf00c,	// (0x0001c2c2) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001d191) popup_call6_1st_window_t

0xaa73,	// (0x00017d29) bg_popup_call2_in_pane_cp04

0xefd5,	// (0x0001c28b) popup_call6_2nd_window_g1

0xefdd,	// (0x0001c293) popup_call6_2nd_window_g2

0xefe5,	// (0x0001c29b) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001d18a) popup_call6_2nd_window_g

0xefed,	// (0x0001c2a3) popup_call6_2nd_window_t1

0x94bc,	// (0x00016772) bg_button_pane_cp15

0xf01c,	// (0x0001c2d2) cell_call6_btn_pane_g1

0xf025,	// (0x0001c2db) cell_call6_btn_pane_t1

0x8ee4,	// (0x0001619a) listscroll_wgtman_pane_ParamLimits

0x8ee4,	// (0x0001619a) listscroll_wgtman_pane

0x8f07,	// (0x000161bd) wgtman_btn_pane_ParamLimits

0x8f07,	// (0x000161bd) wgtman_btn_pane

0xa926,	// (0x00017bdc) aid_scroll_copy1

0xf034,	// (0x0001c2ea) list_wgtman_pane

0x8f4a,	// (0x00016200) wgtman_btn_pane_g1_ParamLimits

0x8f4a,	// (0x00016200) wgtman_btn_pane_g1

0x8f76,	// (0x0001622c) wgtman_btn_pane_t1_ParamLimits

0x8f76,	// (0x0001622c) wgtman_btn_pane_t1

0xf03e,	// (0x0001c2f4) wgtman_btn_pane_t2_ParamLimits

0xf03e,	// (0x0001c2f4) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001d198) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001d198) wgtman_btn_pane_t

0x8fb3,	// (0x00016269) listrow_wgtman_pane_ParamLimits

0x8fb3,	// (0x00016269) listrow_wgtman_pane

0x8fc6,	// (0x0001627c) listrow_wgtman_pane_g1

0x8fcf,	// (0x00016285) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001d19d) listrow_wgtman_pane_g

0x8fd9,	// (0x0001628f) listrow_wgtman_pane_t1

0x8fe7,	// (0x0001629d) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001d1a2) listrow_wgtman_pane_t

0x8ff5,	// (0x000162ab) wait_bar_pane_cp09

0xf055,	// (0x0001c30b) main_calllock_btn_pane

0xf05f,	// (0x0001c315) main_calllock_pane_g1

0x94bc,	// (0x00016772) bg_button_pane_cp17

0xf06a,	// (0x0001c320) main_calllock_btn_pane_g1

0xf073,	// (0x0001c329) main_calllock_btn_pane_t1

0x94bc,	// (0x00016772) main_dialer3_pane

0x94bc,	// (0x00016772) main_fmrd2_pane

0xc412,	// (0x000196c8) main_fs_bigclock_unlock_btn_pane_g1

0xf08a,	// (0x0001c340) main_fs_bigclock_unlock_btn_pane_t1

0x8ffd,	// (0x000162b3) area_fmrd2_info_pane_ParamLimits

0x8ffd,	// (0x000162b3) area_fmrd2_info_pane

0x900e,	// (0x000162c4) area_fmrd2_visual_pane_ParamLimits

0x900e,	// (0x000162c4) area_fmrd2_visual_pane

0x901c,	// (0x000162d2) fmrd2_indi_pane_ParamLimits

0x901c,	// (0x000162d2) fmrd2_indi_pane

0x9029,	// (0x000162df) area_fmrd2_visual_pane_g1

0x9031,	// (0x000162e7) area_fmrd2_visual_pane_t1

0x9041,	// (0x000162f7) area_fmrd2_visual_pane_t2

0x9051,	// (0x00016307) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001d1ac) area_fmrd2_visual_pane_t

0x9061,	// (0x00016317) area_fmrd2_info_pane_g1

0x9069,	// (0x0001631f) area_fmrd2_info_pane_t1

0x9079,	// (0x0001632f) area_fmrd2_info_pane_t2

0x9089,	// (0x0001633f) area_fmrd2_info_pane_t3

0x9099,	// (0x0001634f) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001d1b3) area_fmrd2_info_pane_t

0x90a7,	// (0x0001635d) fmrd2_indi_pane_t1

0x90b7,	// (0x0001636d) fmrd2_indi_pane_t2

0x90c7,	// (0x0001637d) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001d1bc) fmrd2_indi_pane_t

0xe233,	// (0x0001b4e9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe233,	// (0x0001b4e9) list_single_fs_bigclock_indicator_pane_g5

0xe2d7,	// (0x0001b58d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2d7,	// (0x0001b58d) list_single_fs_bigclock_indicator_pane_t5

0x8866,	// (0x00015b1c) aid_cell_bcale_month_pane_ParamLimits

0x8866,	// (0x00015b1c) aid_cell_bcale_month_pane

0x8878,	// (0x00015b2e) bcale_month_pane_ParamLimits

0x8878,	// (0x00015b2e) bcale_month_pane

0x8892,	// (0x00015b48) bcale_preview_pane_ParamLimits

0x8892,	// (0x00015b48) bcale_preview_pane

0xee0a,	// (0x0001c0c0) list_single_fs_bigclock_pane_t1_ParamLimits

0xee24,	// (0x0001c0da) list_single_fs_bigclock_pane_t2_ParamLimits

0xee24,	// (0x0001c0da) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0001d143) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0001d143) list_single_fs_bigclock_pane_t

0xf082,	// (0x0001c338) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001d1a7) main_fs_bigclock_unlock_btn_pane_g

0x90d7,	// (0x0001638d) aid_dia3_key_size_ParamLimits

0x90d7,	// (0x0001638d) aid_dia3_key_size

0x90e6,	// (0x0001639c) aid_dia3_listrow_size_ParamLimits

0x90e6,	// (0x0001639c) aid_dia3_listrow_size

0x90fb,	// (0x000163b1) dia3_keypad_fun_pane_ParamLimits

0x90fb,	// (0x000163b1) dia3_keypad_fun_pane

0x9117,	// (0x000163cd) dia3_keypad_num_pane_ParamLimits

0x9117,	// (0x000163cd) dia3_keypad_num_pane

0x9132,	// (0x000163e8) dia3_listscroll_pane_ParamLimits

0x9132,	// (0x000163e8) dia3_listscroll_pane

0x9145,	// (0x000163fb) dia3_numentry_pane_ParamLimits

0x9145,	// (0x000163fb) dia3_numentry_pane

0xf098,	// (0x0001c34e) dia3_list_pane

0xf0a3,	// (0x0001c359) scroll_pane_cp12

0x94bc,	// (0x00016772) bg_dia3_numentry_pane

0x9159,	// (0x0001640f) dia3_numentry_pane_t1

0x9168,	// (0x0001641e) cell_dia3_key_num_pane

0x9170,	// (0x00016426) cell_dia3_key0_fun_pane_ParamLimits

0x9170,	// (0x00016426) cell_dia3_key0_fun_pane

0x9184,	// (0x0001643a) cell_dia3_key1_fun_pane_ParamLimits

0x9184,	// (0x0001643a) cell_dia3_key1_fun_pane

0x919c,	// (0x00016452) dia3_listrow_pane

0xdf5f,	// (0x0001b215) bg_dia3_numentry_pane_g1

0x94bc,	// (0x00016772) bg_button_pane_cp21

0xf0ae,	// (0x0001c364) cell_dia3_key_num_pane_t1

0xf0bc,	// (0x0001c372) cell_dia3_key_num_pane_t2

0xf0cb,	// (0x0001c381) cell_dia3_key_num_pane_t3

0xf0da,	// (0x0001c390) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001d1c3) cell_dia3_key_num_pane_t

0x94bc,	// (0x00016772) bg_button_pane_cp19

0x91ae,	// (0x00016464) cell_dia3_key0_fun_pane_g1

0x94bc,	// (0x00016772) bg_button_pane_cp20

0x91b6,	// (0x0001646c) cell_dia3_key1_fun_pane_g1

0x91be,	// (0x00016474) area_left_week_number_pane

0x91c7,	// (0x0001647d) area_top_day_name_pane

0x91d0,	// (0x00016486) frame_month_view_pane

0x91dc,	// (0x00016492) grid_month_view_pane

0x91e6,	// (0x0001649c) cell_top_day_name_pane_ParamLimits

0x91e6,	// (0x0001649c) cell_top_day_name_pane

0x91fe,	// (0x000164b4) cell_area_left_week_number_pane_ParamLimits

0x91fe,	// (0x000164b4) cell_area_left_week_number_pane

0x9212,	// (0x000164c8) cell_month_view_pane_ParamLimits

0x9212,	// (0x000164c8) cell_month_view_pane

0xf0e9,	// (0x0001c39f) frm_month_g1

0x922d,	// (0x000164e3) frm_month_g2

0x9237,	// (0x000164ed) frm_month_g3

0x9241,	// (0x000164f7) frm_month_g4

0x924b,	// (0x00016501) frm_month_g5

0x9255,	// (0x0001650b) frm_month_g6

0x925f,	// (0x00016515) frm_month_g7

0xf0f2,	// (0x0001c3a8) frm_month_g8

0x926b,	// (0x00016521) frm_month_g9

0x9274,	// (0x0001652a) frm_month_g10

0x927d,	// (0x00016533) frm_month_g11

0x9286,	// (0x0001653c) frm_month_g12

0x928f,	// (0x00016545) frm_month_g13

0x9298,	// (0x0001654e) frm_month_g14

0xde95,	// (0x0001b14b) frm_month_g15

0x92a1,	// (0x00016557) frm_month_g16

0x000f,

0xff16,	// (0x0001d1cc) frm_month_g

0x92ac,	// (0x00016562) cell_top_day_name_pane_t1

0x92bb,	// (0x00016571) cell_area_left_week_number_pane_g1

0x92ac,	// (0x00016562) cell_area_left_week_number_pane_t1

0xc412,	// (0x000196c8) cell_month_view_pane_g1

0x92c3,	// (0x00016579) cell_month_view_pane_t1

0x94bc,	// (0x00016772) main_fps_pane

0xe541,	// (0x0001b7f7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe541,	// (0x0001b7f7) cmail_ddmenu_btn02_pane_cp1

0xe55d,	// (0x0001b813) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe55d,	// (0x0001b813) cmail_ddmenu_btn02_pane_cp2

0x8b3e,	// (0x00015df4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b3e,	// (0x00015df4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x0001d0f4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x0001d0f4) cmail_ddmenu_btn02_pane_g

0x8b5c,	// (0x00015e12) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8b5c,	// (0x00015e12) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x0001d0f9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x0001d0f9) cmail_ddmenu_btn02_pane_t

0x92d2,	// (0x00016588) fps_text_pane_ParamLimits

0x92d2,	// (0x00016588) fps_text_pane

0x92e9,	// (0x0001659f) main_fps_pane_g1_ParamLimits

0x92e9,	// (0x0001659f) main_fps_pane_g1

0x9303,	// (0x000165b9) wait_bar_pane_cp010_ParamLimits

0x9303,	// (0x000165b9) wait_bar_pane_cp010

0x9314,	// (0x000165ca) fps_text_pane_t1_ParamLimits

0x9314,	// (0x000165ca) fps_text_pane_t1

0x6216,	// (0x000134cc) cam4_image_uncrop_pane_g1

0x621f,	// (0x000134d5) cam4_image_uncrop_pane_g2

0x6228,	// (0x000134de) cam4_image_uncrop_pane_g3

0x6231,	// (0x000134e7) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0001cbd2) cam4_image_uncrop_pane_g

0x919c,	// (0x00016452) dia3_listrow_pane_ParamLimits

0x94bc,	// (0x00016772) main_phob2_pane

0x867f,	// (0x00015935) cell_tport_appsw_pane_cp02_ParamLimits

0x867f,	// (0x00015935) cell_tport_appsw_pane_cp02

0x8693,	// (0x00015949) cell_tport_appsw_pane_cp03_ParamLimits

0x8693,	// (0x00015949) cell_tport_appsw_pane_cp03

0x94bc,	// (0x00016772) phob2_contact_card_pane

0x94bc,	// (0x00016772) phob2_listscroll_pane

0x0055,	// (0x0000d30b) phob2_list_pane

0x005d,	// (0x0000d313) scroll_pane_cp034

0x932c,	// (0x000165e2) phob2_cc_data_pane_ParamLimits

0x932c,	// (0x000165e2) phob2_cc_data_pane

0x934b,	// (0x00016601) phob2_cc_listscroll_pane_ParamLimits

0x934b,	// (0x00016601) phob2_cc_listscroll_pane

0xd1f6,	// (0x0001a4ac) list_double_large_graphic_phob2_pane_ParamLimits

0xd1f6,	// (0x0001a4ac) list_double_large_graphic_phob2_pane

0x9369,	// (0x0001661f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9369,	// (0x0001661f) list_double_large_graphic_phob2_pane_g1

0x9376,	// (0x0001662c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9376,	// (0x0001662c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001d1ed) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001d1ed) list_double_large_graphic_phob2_pane_g

0x9382,	// (0x00016638) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9382,	// (0x00016638) list_double_large_graphic_phob2_pane_t1

0x9397,	// (0x0001664d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9397,	// (0x0001664d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001d1f2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001d1f2) list_double_large_graphic_phob2_pane_t

0x94bc,	// (0x00016772) list_highlight_pane_cp024

0x00fc,	// (0x0000d3b2) phob2_cc_button_pane

0x93a9,	// (0x0001665f) phob2_cc_data_pane_g1_ParamLimits

0x93a9,	// (0x0001665f) phob2_cc_data_pane_g1

0x93be,	// (0x00016674) phob2_cc_data_pane_g2_ParamLimits

0x93be,	// (0x00016674) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001d1f7) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001d1f7) phob2_cc_data_pane_g

0x93d0,	// (0x00016686) phob2_cc_data_pane_t1_ParamLimits

0x93d0,	// (0x00016686) phob2_cc_data_pane_t1

0x93e8,	// (0x0001669e) phob2_cc_data_pane_t2_ParamLimits

0x93e8,	// (0x0001669e) phob2_cc_data_pane_t2

0x9400,	// (0x000166b6) phob2_cc_data_pane_t3_ParamLimits

0x9400,	// (0x000166b6) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001d1fc) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001d1fc) phob2_cc_data_pane_t

0x0152,	// (0x0000d408) phob2_cc_list_pane_ParamLimits

0x0152,	// (0x0000d408) phob2_cc_list_pane

0x015e,	// (0x0000d414) scroll_pane_cp035_ParamLimits

0x015e,	// (0x0000d414) scroll_pane_cp035

0x952c,	// (0x000167e2) bg_button_pane_cp033

0x016a,	// (0x0000d420) phob2_cc_button_pane_g1

0x0176,	// (0x0000d42c) phob2_cc_button_pane_t1

0x018b,	// (0x0000d441) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001d203) phob2_cc_button_pane_t

0x941a,	// (0x000166d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x941a,	// (0x000166d0) list_double_large_graphic_phob2_cc_pane

0x942e,	// (0x000166e4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x942e,	// (0x000166e4) list_double_large_graphic_phob2_cc_pane_g1

0x943a,	// (0x000166f0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x943a,	// (0x000166f0) list_double_large_graphic_phob2_cc_pane_g2

0x9446,	// (0x000166fc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9446,	// (0x000166fc) list_double_large_graphic_phob2_cc_pane_g3

0x9452,	// (0x00016708) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9452,	// (0x00016708) list_double_large_graphic_phob2_cc_pane_g4

0x945e,	// (0x00016714) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x945e,	// (0x00016714) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001d208) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001d208) list_double_large_graphic_phob2_cc_pane_g

0x946a,	// (0x00016720) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x946a,	// (0x00016720) list_double_large_graphic_phob2_cc_pane_t1

0x9493,	// (0x00016749) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9493,	// (0x00016749) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001d213) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001d213) list_double_large_graphic_phob2_cc_pane_t

0x026e,	// (0x0000d524) list_highlight_pane_cp025_ParamLimits

0x026e,	// (0x0000d524) list_highlight_pane_cp025

0x952c,	// (0x000167e2) bg_button_pane_cp033_ParamLimits

0x016a,	// (0x0000d420) phob2_cc_button_pane_g1_ParamLimits

0x0176,	// (0x0000d42c) phob2_cc_button_pane_t1_ParamLimits

0x018b,	// (0x0000d441) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001d203) phob2_cc_button_pane_t_ParamLimits

0x135d,	// (0x0000e613) popup_wgtman_window

0xd2d8,	// (0x0001a58e) scroll_pane_cp038

0x8f2c,	// (0x000161e2) wgtman_btn_pane_cp_01_ParamLimits

0x8f2c,	// (0x000161e2) wgtman_btn_pane_cp_01

0x027c,	// (0x0000d532) wgtman_content_pane

0x0285,	// (0x0000d53b) wgtman_heading_pane

0x94bc,	// (0x00016772) bg_heading_pane_cp02

0x028e,	// (0x0000d544) wgtman_heading_pane_g1

0x0296,	// (0x0000d54c) wgtman_heading_pane_t1

0x02a4,	// (0x0000d55a) scroll_pane_cp036

0x02ac,	// (0x0000d562) wgtman_list_pane

0x02b4,	// (0x0000d56a) wgtman_list_pane_t1_ParamLimits

0x02b4,	// (0x0000d56a) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
