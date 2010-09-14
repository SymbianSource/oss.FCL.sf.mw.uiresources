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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000406e7 };

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
0x16a8,	// (0x00041d8f) Screen

0x16b4,	// (0x00041d9b) application_window

0x16f0,	// (0x00041dd7) area_bottom_pane_ParamLimits

0x16f0,	// (0x00041dd7) area_bottom_pane

0x1729,	// (0x00041e10) area_top_pane_ParamLimits

0x1729,	// (0x00041e10) area_top_pane

0xa51f,	// (0x0004ac06) call_video_uplink_pane_ParamLimits

0xa51f,	// (0x0004ac06) call_video_uplink_pane

0x17b7,	// (0x00041e9e) main_pane_ParamLimits

0x17b7,	// (0x00041e9e) main_pane

0x4592,	// (0x00044c79) context_pane

0x45a5,	// (0x00044c8c) navi_pane

0x45d7,	// (0x00044cbe) popup_cale_events_window_ParamLimits

0x45d7,	// (0x00044cbe) popup_cale_events_window

0x45ef,	// (0x00044cd6) popup_mup_playback_window

0x45f7,	// (0x00044cde) signal_pane

0xd0ef,	// (0x0004d7d6) main_browser_pane

0xd2a1,	// (0x0004d988) main_burst_pane

0x42f2,	// (0x000449d9) main_calc_pane

0xf05f,	// (0x0004f746) main_cale_day_pane

0x1cb9,	// (0x000423a0) main_cale_month_pane

0xf05f,	// (0x0004f746) main_cale_week_pane

0xd2a1,	// (0x0004d988) main_call_pane

0xcda7,	// (0x0004d48e) main_call_poc_pane

0xd2a1,	// (0x0004d988) main_camera_pane

0xd2a1,	// (0x0004d988) main_chi_dic_pane

0xda81,	// (0x0004e168) main_clock_pane

0xcda7,	// (0x0004d48e) main_fmradio_pane

0xd2a1,	// (0x0004d988) main_graph_messa_pane

0xcda7,	// (0x0004d48e) main_help_pane

0xd0ef,	// (0x0004d7d6) main_im_pane

0xd010,	// (0x0004d6f7) main_image_pane_ParamLimits

0xd010,	// (0x0004d6f7) main_image_pane

0xcda7,	// (0x0004d48e) main_location2_pane

0xd2a1,	// (0x0004d988) main_location_pane

0xd010,	// (0x0004d6f7) main_messa_pane

0xcda7,	// (0x0004d48e) main_mp2_pane

0xd2a1,	// (0x0004d988) main_mp_pane

0xcda7,	// (0x0004d48e) main_msg_pane

0xcda7,	// (0x0004d48e) main_mup_eq_pane

0xcda7,	// (0x0004d48e) main_mup_pane

0xd0ef,	// (0x0004d7d6) main_notes_pane

0xcda7,	// (0x0004d48e) main_pec_pane

0xcda7,	// (0x0004d48e) main_phob_pane

0xcda7,	// (0x0004d48e) main_pinb_pane

0xcda7,	// (0x0004d48e) main_postcard_pane

0xcda7,	// (0x0004d48e) main_qdial_pane

0xd2a1,	// (0x0004d988) main_skin_pane

0xcda7,	// (0x0004d48e) main_smil2_pane

0xd2a1,	// (0x0004d988) main_smil_pane

0xd2a1,	// (0x0004d988) main_video_pane

0xd2a1,	// (0x0004d988) main_video_tele_pane

0xd010,	// (0x0004d6f7) main_viewer_pane_ParamLimits

0xd010,	// (0x0004d6f7) main_viewer_pane

0xd2a1,	// (0x0004d988) main_vorec_pane

0x4346,	// (0x00044a2d) popup_blid_sat_info_window_ParamLimits

0x4346,	// (0x00044a2d) popup_blid_sat_info_window

0x439e,	// (0x00044a85) popup_dyc_status_message_window_ParamLimits

0x439e,	// (0x00044a85) popup_dyc_status_message_window

0x43b8,	// (0x00044a9f) popup_grid_large_graphic_window_ParamLimits

0x43b8,	// (0x00044a9f) popup_grid_large_graphic_window

0x4474,	// (0x00044b5b) popup_loc_request_window_ParamLimits

0x4474,	// (0x00044b5b) popup_loc_request_window

0x456a,	// (0x00044c51) popup_wml_address_window_ParamLimits

0x456a,	// (0x00044c51) popup_wml_address_window

0x412c,	// (0x00044813) call_muted_g1

0x3da0,	// (0x00044487) popup_call_audio_conf_window_ParamLimits

0x3da0,	// (0x00044487) popup_call_audio_conf_window

0x4140,	// (0x00044827) popup_call_audio_first_window_ParamLimits

0x4140,	// (0x00044827) popup_call_audio_first_window

0x41b6,	// (0x0004489d) popup_call_audio_in_window_ParamLimits

0x41b6,	// (0x0004489d) popup_call_audio_in_window

0x41f2,	// (0x000448d9) popup_call_audio_out_window_ParamLimits

0x41f2,	// (0x000448d9) popup_call_audio_out_window

0x422c,	// (0x00044913) popup_call_audio_second_window_ParamLimits

0x422c,	// (0x00044913) popup_call_audio_second_window

0x4282,	// (0x00044969) popup_call_audio_wait_window_ParamLimits

0x4282,	// (0x00044969) popup_call_audio_wait_window

0x42b7,	// (0x0004499e) popup_number_entry_window_ParamLimits

0x42b7,	// (0x0004499e) popup_number_entry_window

0xc93f,	// (0x0004d026) bg_popup_call_pane_cp05_ParamLimits

0xc93f,	// (0x0004d026) bg_popup_call_pane_cp05

0xc9b4,	// (0x0004d09b) popup_number_entry_window_t1

0xc9c7,	// (0x0004d0ae) popup_number_entry_window_t2

0xc9d9,	// (0x0004d0c0) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0004f752) popup_number_entry_window_t

0xc9eb,	// (0x0004d0d2) text_title_cp2

0xc9fe,	// (0x0004d0e5) bg_popup_call_pane_cp_ParamLimits

0xc9fe,	// (0x0004d0e5) bg_popup_call_pane_cp

0xca0c,	// (0x0004d0f3) call_thumbnail_pane

0xca14,	// (0x0004d0fb) popup_call_audio_in_window_g1_ParamLimits

0xca14,	// (0x0004d0fb) popup_call_audio_in_window_g1

0xca20,	// (0x0004d107) popup_call_audio_in_window_g2_ParamLimits

0xca20,	// (0x0004d107) popup_call_audio_in_window_g2

0xca2c,	// (0x0004d113) popup_call_audio_in_window_g3_ParamLimits

0xca2c,	// (0x0004d113) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0004f75b) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0004f75b) popup_call_audio_in_window_g

0xca38,	// (0x0004d11f) popup_call_audio_in_window_t1_ParamLimits

0xca38,	// (0x0004d11f) popup_call_audio_in_window_t1

0xca54,	// (0x0004d13b) popup_call_audio_in_window_t2_ParamLimits

0xca54,	// (0x0004d13b) popup_call_audio_in_window_t2

0xca70,	// (0x0004d157) popup_call_audio_in_window_t3_ParamLimits

0xca70,	// (0x0004d157) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0004f762) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0004f762) popup_call_audio_in_window_t

0xc9fe,	// (0x0004d0e5) bg_popup_call_pane_cp01_ParamLimits

0xc9fe,	// (0x0004d0e5) bg_popup_call_pane_cp01

0xca0c,	// (0x0004d0f3) call_thumbnail_pane_cp02

0xca83,	// (0x0004d16a) call_type_pane_cp022

0xca8b,	// (0x0004d172) popup_call_audio_out_window_g1_ParamLimits

0xca8b,	// (0x0004d172) popup_call_audio_out_window_g1

0xca9d,	// (0x0004d184) popup_call_audio_out_window_g2_ParamLimits

0xca9d,	// (0x0004d184) popup_call_audio_out_window_g2

0xcaa9,	// (0x0004d190) popup_call_audio_out_window_g3_ParamLimits

0xcaa9,	// (0x0004d190) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0004f769) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0004f769) popup_call_audio_out_window_g

0xcabb,	// (0x0004d1a2) popup_call_audio_out_window_t1_ParamLimits

0xcabb,	// (0x0004d1a2) popup_call_audio_out_window_t1

0xcad3,	// (0x0004d1ba) popup_call_audio_out_window_t2_ParamLimits

0xcad3,	// (0x0004d1ba) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0004f770) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0004f770) popup_call_audio_out_window_t

0xcae8,	// (0x0004d1cf) bg_popup_call_pane_ParamLimits

0xcae8,	// (0x0004d1cf) bg_popup_call_pane

0x1973,	// (0x0004205a) call_thumbnail_pane_cp_ParamLimits

0x1973,	// (0x0004205a) call_thumbnail_pane_cp

0xcb6c,	// (0x0004d253) call_type_pane_cp01_ParamLimits

0xcb6c,	// (0x0004d253) call_type_pane_cp01

0xcbb0,	// (0x0004d297) popup_call_audio_first_window_g1_ParamLimits

0xcbb0,	// (0x0004d297) popup_call_audio_first_window_g1

0xcbfc,	// (0x0004d2e3) popup_call_audio_first_window_g2_ParamLimits

0xcbfc,	// (0x0004d2e3) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0004f775) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0004f775) popup_call_audio_first_window_g

0xcc40,	// (0x0004d327) popup_call_audio_first_window_t1_ParamLimits

0xcc40,	// (0x0004d327) popup_call_audio_first_window_t1

0xccec,	// (0x0004d3d3) popup_call_audio_first_window_t4_ParamLimits

0xccec,	// (0x0004d3d3) popup_call_audio_first_window_t4

0xcd78,	// (0x0004d45f) popup_call_audio_first_window_t5_ParamLimits

0xcd78,	// (0x0004d45f) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0004f77a) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0004f77a) popup_call_audio_first_window_t

0xcda7,	// (0x0004d48e) bg_popup_call_pane_cp02

0xcdb1,	// (0x0004d498) call_type_pane_cp023

0xcdb9,	// (0x0004d4a0) popup_call_audio_wait_window_g1

0xcdc1,	// (0x0004d4a8) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0004f781) popup_call_audio_wait_window_g

0xcdc9,	// (0x0004d4b0) popup_call_audio_wait_window_t3

0xcdd7,	// (0x0004d4be) bg_popup_call_pane_cp03_ParamLimits

0xcdd7,	// (0x0004d4be) bg_popup_call_pane_cp03

0xce37,	// (0x0004d51e) call_thumbnail_pane_cp011_ParamLimits

0xce37,	// (0x0004d51e) call_thumbnail_pane_cp011

0xce43,	// (0x0004d52a) call_type_pane_cp034_ParamLimits

0xce43,	// (0x0004d52a) call_type_pane_cp034

0xce7f,	// (0x0004d566) popup_call_audio_second_window_g1_ParamLimits

0xce7f,	// (0x0004d566) popup_call_audio_second_window_g1

0xcebb,	// (0x0004d5a2) popup_call_audio_second_window_g2_ParamLimits

0xcebb,	// (0x0004d5a2) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0004f786) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0004f786) popup_call_audio_second_window_g

0xcef7,	// (0x0004d5de) popup_call_audio_second_window_t1_ParamLimits

0xcef7,	// (0x0004d5de) popup_call_audio_second_window_t1

0xcf78,	// (0x0004d65f) popup_call_audio_second_window_t2_ParamLimits

0xcf78,	// (0x0004d65f) popup_call_audio_second_window_t2

0xcfae,	// (0x0004d695) popup_call_audio_second_window_t3_ParamLimits

0xcfae,	// (0x0004d695) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0004f78b) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0004f78b) popup_call_audio_second_window_t

0xcda7,	// (0x0004d48e) bg_popup_call_pane_cp04

0xcff2,	// (0x0004d6d9) list_conf_pane

0xcffa,	// (0x0004d6e1) popup_call_audio_conf_window_t1

0xd008,	// (0x0004d6ef) call_thumbnail_pane_g1

0xd010,	// (0x0004d6f7) bg_pinb_pane_ParamLimits

0xd010,	// (0x0004d6f7) bg_pinb_pane

0xd01e,	// (0x0004d705) find_pinb_pane

0xd010,	// (0x0004d6f7) listscroll_pinb_pane_ParamLimits

0xd010,	// (0x0004d6f7) listscroll_pinb_pane

0xd028,	// (0x0004d70f) pinb_bg_pane_g1

0xd028,	// (0x0004d70f) pinb_bg_pane_g2

0xd028,	// (0x0004d70f) pinb_bg_pane_g3

0xd028,	// (0x0004d70f) pinb_bg_pane_g4

0xd028,	// (0x0004d70f) pinb_bg_pane_g5

0xd028,	// (0x0004d70f) pinb_bg_pane_g6

0xd028,	// (0x0004d70f) pinb_bg_pane_g7

0xd028,	// (0x0004d70f) pinb_bg_pane_g8

0xd028,	// (0x0004d70f) pinb_bg_pane_g9

0xd028,	// (0x0004d70f) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0004f792) pinb_bg_pane_g

0xc935,	// (0x0004d01c) grid_pinb_pane

0xc935,	// (0x0004d01c) list_pinb_pane

0xcfe4,	// (0x0004d6cb) scroll_pane_cp01_ParamLimits

0xcfe4,	// (0x0004d6cb) scroll_pane_cp01

0xd032,	// (0x0004d719) find_pinb_pane_g1_ParamLimits

0xd032,	// (0x0004d719) find_pinb_pane_g1

0xd04a,	// (0x0004d731) find_pinb_pane_t1

0xd05c,	// (0x0004d743) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0004f7ac) find_pinb_pane_t

0xd071,	// (0x0004d758) input_focus_pane_cp01_ParamLimits

0xd071,	// (0x0004d758) input_focus_pane_cp01

0xc95f,	// (0x0004d046) cell_pinb_pane_ParamLimits

0xc95f,	// (0x0004d046) cell_pinb_pane

0xd07d,	// (0x0004d764) cell_pinb_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) cell_pinb_pane_g1

0xd08b,	// (0x0004d772) cell_pinb_pane_g2_ParamLimits

0xd08b,	// (0x0004d772) cell_pinb_pane_g2

0xd08b,	// (0x0004d772) cell_pinb_pane_g3_ParamLimits

0xd08b,	// (0x0004d772) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0004f7b1) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0004f7b1) cell_pinb_pane_g

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp01

0xc95f,	// (0x0004d046) list_pinb_item_pane_ParamLimits

0xc95f,	// (0x0004d046) list_pinb_item_pane

0xc935,	// (0x0004d01c) list_highlight_pane_cp02

0xd099,	// (0x0004d780) list_pinb_item_pane_g1_ParamLimits

0xd099,	// (0x0004d780) list_pinb_item_pane_g1

0xd08b,	// (0x0004d772) list_pinb_item_pane_g2_ParamLimits

0xd08b,	// (0x0004d772) list_pinb_item_pane_g2

0xd07d,	// (0x0004d764) list_pinb_item_pane_g3_ParamLimits

0xd07d,	// (0x0004d764) list_pinb_item_pane_g3

0xd08b,	// (0x0004d772) list_pinb_item_pane_g4_ParamLimits

0xd08b,	// (0x0004d772) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0004f7b8) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0004f7b8) list_pinb_item_pane_g

0xd0a7,	// (0x0004d78e) list_pinb_item_pane_t1_ParamLimits

0xd0a7,	// (0x0004d78e) list_pinb_item_pane_t1

0x19b5,	// (0x0004209c) calc_display_pane

0x19da,	// (0x000420c1) calc_paper_pane

0x19fd,	// (0x000420e4) grid_calc_pane

0xcda7,	// (0x0004d48e) bg_list_pane_cp01

0x1a2b,	// (0x00042112) clock_g1

0x1a33,	// (0x0004211a) clock_g2

0x0001,

0xf0da,	// (0x0004f7c1) clock_g

0x1a3b,	// (0x00042122) clock_t1_ParamLimits

0x1a3b,	// (0x00042122) clock_t1

0x1a50,	// (0x00042137) clock_t2_ParamLimits

0x1a50,	// (0x00042137) clock_t2

0x1a62,	// (0x00042149) clock_t3_ParamLimits

0x1a62,	// (0x00042149) clock_t3

0x1a74,	// (0x0004215b) clock_t4_ParamLimits

0x1a74,	// (0x0004215b) clock_t4

0x1a86,	// (0x0004216d) clock_t5_ParamLimits

0x1a86,	// (0x0004216d) clock_t5

0x1a9b,	// (0x00042182) clock_t6_ParamLimits

0x1a9b,	// (0x00042182) clock_t6

0x1aad,	// (0x00042194) clock_t7_ParamLimits

0x1aad,	// (0x00042194) clock_t7

0x1abf,	// (0x000421a6) clock_t8_ParamLimits

0x1abf,	// (0x000421a6) clock_t8

0x1ad3,	// (0x000421ba) clock_t9_ParamLimits

0x1ad3,	// (0x000421ba) clock_t9

0x0008,

0xf0df,	// (0x0004f7c6) clock_t_ParamLimits

0xf0df,	// (0x0004f7c6) clock_t

0xd0bb,	// (0x0004d7a2) popup_clock_analogue_window_cp02

0xd0bb,	// (0x0004d7a2) popup_clock_digital_window_cp01

0xcda7,	// (0x0004d48e) listscroll_help_pane

0xcda7,	// (0x0004d48e) phob_pre_status_pane

0xd0c3,	// (0x0004d7aa) grid_qdial_pane

0x1ae7,	// (0x000421ce) listscroll_mce_pane

0xd010,	// (0x0004d6f7) bg_notes_pane

0xd0cd,	// (0x0004d7b4) list_notes_pane

0x1b01,	// (0x000421e8) scroll_pane_cp06

0xd0db,	// (0x0004d7c2) bg_calc_paper_pane

0xa545,	// (0x0004ac2c) list_calc_pane

0xd0ef,	// (0x0004d7d6) bg_calc_display_pane

0x1b15,	// (0x000421fc) calc_display_pane_t1

0x1b2a,	// (0x00042211) calc_display_pane_t2

0xa55f,	// (0x0004ac46) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0004f7d9) calc_display_pane_t

0x1b3f,	// (0x00042226) cell_calc_pane_ParamLimits

0x1b3f,	// (0x00042226) cell_calc_pane

0xd0fb,	// (0x0004d7e2) bg_calc_paper_pane_g1

0xd107,	// (0x0004d7ee) bg_calc_paper_pane_g2

0xd113,	// (0x0004d7fa) bg_calc_paper_pane_g3

0xd11f,	// (0x0004d806) bg_calc_paper_pane_g4

0xd12b,	// (0x0004d812) bg_calc_paper_pane_g5

0x1b74,	// (0x0004225b) bg_calc_paper_pane_g6

0x1b83,	// (0x0004226a) bg_calc_paper_pane_g7

0x1b92,	// (0x00042279) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0004f7e0) bg_calc_paper_pane_g

0x1ba5,	// (0x0004228c) calc_bg_paper_pane_g9

0x1bb8,	// (0x0004229f) list_calc_item_pane_ParamLimits

0x1bb8,	// (0x0004229f) list_calc_item_pane

0xd137,	// (0x0004d81e) list_calc_item_pane_g1

0xa571,	// (0x0004ac58) list_calc_item_pane_t1_ParamLimits

0xa571,	// (0x0004ac58) list_calc_item_pane_t1

0x1bd0,	// (0x000422b7) list_calc_item_pane_t2_ParamLimits

0x1bd0,	// (0x000422b7) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0004f7f1) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0004f7f1) list_calc_item_pane_t

0xd028,	// (0x0004d70f) cell_calc_pane_g1

0xd144,	// (0x0004d82b) grid_highlight_pane_cp02

0xe705,	// (0x0004edec) bg_calc_display_pane_g1

0x1c02,	// (0x000422e9) bg_calc_display_pane_g2

0x1c0c,	// (0x000422f3) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0004f7fb) bg_calc_display_pane_g

0x1c15,	// (0x000422fc) cell_qdial_pane_ParamLimits

0x1c15,	// (0x000422fc) cell_qdial_pane

0x1c29,	// (0x00042310) cell_qdial_pane_g1_ParamLimits

0x1c29,	// (0x00042310) cell_qdial_pane_g1

0x1c3f,	// (0x00042326) cell_qdial_pane_g2_ParamLimits

0x1c3f,	// (0x00042326) cell_qdial_pane_g2

0xd166,	// (0x0004d84d) cell_qdial_pane_g3_ParamLimits

0xd166,	// (0x0004d84d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0004f802) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0004f802) cell_qdial_pane_g

0x1c66,	// (0x0004234d) cell_qdial_pane_t1_ParamLimits

0x1c66,	// (0x0004234d) cell_qdial_pane_t1

0x1c7e,	// (0x00042365) cell_qdial_pane_t2_ParamLimits

0x1c7e,	// (0x00042365) cell_qdial_pane_t2

0x1c91,	// (0x00042378) cell_qdial_pane_t3_ParamLimits

0x1c91,	// (0x00042378) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0004f80b) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0004f80b) cell_qdial_pane_t

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp04

0xd172,	// (0x0004d859) thumbnail_qdial_pane_ParamLimits

0xd172,	// (0x0004d859) thumbnail_qdial_pane

0xd1ce,	// (0x0004d8b5) list_help_pane

0xd1d7,	// (0x0004d8be) scroll_pane_cp02

0xe70e,	// (0x0004edf5) help_list_pane_t1_ParamLimits

0xe70e,	// (0x0004edf5) help_list_pane_t1

0xa583,	// (0x0004ac6a) bg_notes_pane_g2

0xa58b,	// (0x0004ac72) bg_notes_pane_g3

0xa593,	// (0x0004ac7a) notes_bg_pane_g1

0xa59b,	// (0x0004ac82) notes_bg_pane_g4

0xa5a3,	// (0x0004ac8a) notes_bg_pane_g5

0xa5ab,	// (0x0004ac92) notes_bg_pane_g6

0xa5b3,	// (0x0004ac9a) notes_bg_pane_g7

0xa5bb,	// (0x0004aca2) notes_bg_pane_g8

0xa5c3,	// (0x0004acaa) notes_bg_pane_g9

0x0006,

0xf12b,	// (0x0004f812) notes_bg_pane_g

0x1ca4,	// (0x0004238b) list_notes_text_pane_ParamLimits

0x1ca4,	// (0x0004238b) list_notes_text_pane

0xd1e0,	// (0x0004d8c7) list_notes_text_pane_g1

0x0dde,	// (0x000414c5) list_notes_text_pane_t1

0x1cb9,	// (0x000423a0) listscroll_cale_week_pane

0x1ce5,	// (0x000423cc) bg_cale_heading_pane

0xd203,	// (0x0004d8ea) bg_cale_pane_cp01

0x1cfd,	// (0x000423e4) cale_week_corner_pane

0x1d1c,	// (0x00042403) cale_week_day_heading_pane

0x1d39,	// (0x00042420) cale_week_scroll_pane_g1

0x1d4c,	// (0x00042433) cale_week_scroll_pane_g2

0x1d64,	// (0x0004244b) cale_week_scroll_pane_g3

0x1d7c,	// (0x00042463) cale_week_scroll_pane_g4

0x1d94,	// (0x0004247b) cale_week_scroll_pane_g5

0x1db4,	// (0x0004249b) cale_week_scroll_pane_g6

0x1dd4,	// (0x000424bb) cale_week_scroll_pane_g7

0x1df4,	// (0x000424db) cale_week_scroll_pane_g8

0x1e18,	// (0x000424ff) cale_week_scroll_pane_g9

0x1e30,	// (0x00042517) cale_week_scroll_pane_g10

0x1e48,	// (0x0004252f) cale_week_scroll_pane_g11

0x1e60,	// (0x00042547) cale_week_scroll_pane_g12

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g13

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g14

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g15

0x000f,

0xf13a,	// (0x0004f821) cale_week_scroll_pane_g

0x1eb4,	// (0x0004259b) cale_week_time_pane

0x1ed8,	// (0x000425bf) grid_cale_week_pane

0xd232,	// (0x0004d919) scroll_pane_cp08

0x1efe,	// (0x000425e5) cell_cale_week_pane_ParamLimits

0x1efe,	// (0x000425e5) cell_cale_week_pane

0x1f8c,	// (0x00042673) cale_week_day_heading_pane_t1

0x1fb6,	// (0x0004269d) cale_week_day_heading_pane_t2

0x1fe5,	// (0x000426cc) cale_week_day_heading_pane_t3

0x2014,	// (0x000426fb) cale_week_day_heading_pane_t4

0x2043,	// (0x0004272a) cale_week_day_heading_pane_t5

0x207a,	// (0x00042761) cale_week_day_heading_pane_t6

0x20b1,	// (0x00042798) cale_week_day_heading_pane_t7

0x0006,

0xf15b,	// (0x0004f842) cale_week_day_heading_pane_t

0xd24f,	// (0x0004d936) bg_cale_side_pane

0x20db,	// (0x000427c2) cale_week_time_pane_t1

0x20f5,	// (0x000427dc) cale_week_time_pane_t2

0x210f,	// (0x000427f6) cale_week_time_pane_t3

0x2129,	// (0x00042810) cale_week_time_pane_t4

0x2143,	// (0x0004282a) cale_week_time_pane_t5

0x215d,	// (0x00042844) cale_week_time_pane_t6

0x2177,	// (0x0004285e) cale_week_time_pane_t7

0x2191,	// (0x00042878) cale_week_time_pane_t8

0x0007,

0xf16a,	// (0x0004f851) cale_week_time_pane_t

0x21ab,	// (0x00042892) cell_cale_week_pane_g2

0x21ca,	// (0x000428b1) cell_cale_week_pane_g3_ParamLimits

0x21ca,	// (0x000428b1) cell_cale_week_pane_g3

0xd25d,	// (0x0004d944) grid_highlight_pane_cp07

0xd265,	// (0x0004d94c) listscroll_gms_pane

0xd26f,	// (0x0004d956) grid_gms_pane

0xd278,	// (0x0004d95f) listscroll_gms_pane_g1

0xd280,	// (0x0004d967) listscroll_gms_pane_g2

0x0001,

0x00bc,	// (0x000407a3) listscroll_gms_pane_g

0x21e2,	// (0x000428c9) scroll_pane_cp010

0x21ed,	// (0x000428d4) cell_gms_pane_ParamLimits

0x21ed,	// (0x000428d4) cell_gms_pane

0x2200,	// (0x000428e7) cell_gms_pane_g1

0xd288,	// (0x0004d96f) cell_gms_pane_g2

0xd1e0,	// (0x0004d8c7) cell_gms_pane_g3

0xd290,	// (0x0004d977) cell_gms_pane_g4

0x0003,

0xf17b,	// (0x0004f862) cell_gms_pane_g

0xd299,	// (0x0004d980) grid_highlight_pane_cp09

0x40b4,	// (0x0004479b) phob_pre_status_pane_g1

0x40bc,	// (0x000447a3) phob_pre_status_pane_g2

0x40c4,	// (0x000447ab) phob_pre_status_pane_g3

0x40cc,	// (0x000447b3) phob_pre_status_pane_g4

0x0004,

0xf394,	// (0x0004fa7b) phob_pre_status_pane_g

0x40dc,	// (0x000447c3) phob_pre_status_pane_t1

0x40ea,	// (0x000447d1) phob_pre_status_pane_t2

0x40fa,	// (0x000447e1) phob_pre_status_pane_t3

0x0002,

0xf39f,	// (0x0004fa86) phob_pre_status_pane_t

0xd2a1,	// (0x0004d988) bg_list_pane_cp05

0x2210,	// (0x000428f7) grid_vorec_pane

0x2218,	// (0x000428ff) vorec_t1

0x2226,	// (0x0004290d) vorec_t2

0x2234,	// (0x0004291b) vorec_t3

0x2242,	// (0x00042929) vorec_t4

0x9f5a,	// (0x0004a641) vorec_t5

0x9f68,	// (0x0004a64f) vorec_t6

0x0004,

0xf184,	// (0x0004f86b) vorec_t

0x9f76,	// (0x0004a65d) wait_bar_pane_cp01

0x225e,	// (0x00042945) cell_vorec_pane_ParamLimits

0x225e,	// (0x00042945) cell_vorec_pane

0xa5cb,	// (0x0004acb2) cell_vorec_pane_g1

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp05

0xcfe4,	// (0x0004d6cb) cams_zoom_pane

0xcfe4,	// (0x0004d6cb) image_vga_pane

0xd07d,	// (0x0004d764) main_camera_pane_g1

0xd07d,	// (0x0004d764) main_camera_pane_g2

0xd07d,	// (0x0004d764) main_camera_pane_g3

0xd07d,	// (0x0004d764) main_camera_pane_g4

0xd07d,	// (0x0004d764) main_camera_pane_g5

0xd07d,	// (0x0004d764) main_camera_pane_g6

0xd07d,	// (0x0004d764) main_camera_pane_g7

0x0007,

0xf18f,	// (0x0004f876) main_camera_pane_g

0xd2a9,	// (0x0004d990) main_camera_pane_t1

0xd2a9,	// (0x0004d990) main_camera_pane_t2

0x0001,

0x00e6,	// (0x000407cd) main_camera_pane_t

0x2285,	// (0x0004296c) cams_zoom_pane_cp_ParamLimits

0x2285,	// (0x0004296c) cams_zoom_pane_cp

0x22b9,	// (0x000429a0) image_cif_pane_ParamLimits

0x22b9,	// (0x000429a0) image_cif_pane

0xc935,	// (0x0004d01c) image_subqcif_pane

0x22cb,	// (0x000429b2) main_video_pane_g1_ParamLimits

0x22cb,	// (0x000429b2) main_video_pane_g1

0x22f9,	// (0x000429e0) main_video_pane_g2_ParamLimits

0x22f9,	// (0x000429e0) main_video_pane_g2

0x2333,	// (0x00042a1a) main_video_pane_g3_ParamLimits

0x2333,	// (0x00042a1a) main_video_pane_g3

0x2333,	// (0x00042a1a) main_video_pane_g4_ParamLimits

0x2333,	// (0x00042a1a) main_video_pane_g4

0x2367,	// (0x00042a4e) main_video_pane_g5_ParamLimits

0x2367,	// (0x00042a4e) main_video_pane_g5

0xd2bd,	// (0x0004d9a4) main_video_pane_g6_ParamLimits

0xd2bd,	// (0x0004d9a4) main_video_pane_g6

0x0006,

0xf1a0,	// (0x0004f887) main_video_pane_g_ParamLimits

0xf1a0,	// (0x0004f887) main_video_pane_g

0x2383,	// (0x00042a6a) main_video_pane_t1_ParamLimits

0x2383,	// (0x00042a6a) main_video_pane_t1

0xd2d7,	// (0x0004d9be) cams_zoom_pane_g1

0xd2d7,	// (0x0004d9be) cams_zoom_pane_g2

0xd2d7,	// (0x0004d9be) cams_zoom_pane_g3

0xd2d7,	// (0x0004d9be) cams_zoom_pane_g4

0x0003,

0x00fa,	// (0x000407e1) cams_zoom_pane_g

0x23db,	// (0x00042ac2) grid_cams_pane

0x23f5,	// (0x00042adc) linegrid_cams_pane

0x2409,	// (0x00042af0) cell_cams_pane_ParamLimits

0x2409,	// (0x00042af0) cell_cams_pane

0xd2e1,	// (0x0004d9c8) cams_burst_image_pane

0xd2e9,	// (0x0004d9d0) cell_cams_pane_g1

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp03

0xd028,	// (0x0004d70f) mp_bg_pane_g1

0xc935,	// (0x0004d01c) bg_list_pane_cp03

0xc935,	// (0x0004d01c) bg_mp_pane

0xc935,	// (0x0004d01c) grid_mp_pane

0xd2d7,	// (0x0004d9be) media_player_g1

0xd807,	// (0x0004deee) media_player_t1

0xd807,	// (0x0004deee) media_player_t2

0xd807,	// (0x0004deee) media_player_t3

0xd807,	// (0x0004deee) media_player_t4

0xd807,	// (0x0004deee) media_player_t5

0xd807,	// (0x0004deee) media_player_t6

0xd807,	// (0x0004deee) media_player_t7

0x0006,

0x0474,	// (0x00040b5b) media_player_t

0xc935,	// (0x0004d01c) wait_bar_pane_cp02

0xf387,	// (0x0004fa6e) main_usb_pane_t

0xda81,	// (0x0004e168) cell_mp_pane

0xd028,	// (0x0004d70f) cell_mp_pane_g1

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp06

0xd2f1,	// (0x0004d9d8) grid_skin_colour_pane

0xd30d,	// (0x0004d9f4) list_highlight_pane_cp03

0x2429,	// (0x00042b10) skin_g1

0xd315,	// (0x0004d9fc) skin_t1

0xd324,	// (0x0004da0b) skin_t2

0x0001,

0x0128,	// (0x0004080f) skin_t

0x2431,	// (0x00042b18) cell_skin_colour_pane_ParamLimits

0x2431,	// (0x00042b18) cell_skin_colour_pane

0xd332,	// (0x0004da19) cell_skin_colour_pane_g1

0x24aa,	// (0x00042b91) call_video_g1_ParamLimits

0x24aa,	// (0x00042b91) call_video_g1

0x24c6,	// (0x00042bad) call_video_g2_ParamLimits

0x24c6,	// (0x00042bad) call_video_g2

0x0001,

0xf1b8,	// (0x0004f89f) call_video_g_ParamLimits

0xf1b8,	// (0x0004f89f) call_video_g

0x2518,	// (0x00042bff) call_video_uplink_pane_cp1_ParamLimits

0x2518,	// (0x00042bff) call_video_uplink_pane_cp1

0xd344,	// (0x0004da2b) call_video_uplink_pane_cp2

0x25b7,	// (0x00042c9e) video_down_crop_pane_ParamLimits

0x25b7,	// (0x00042c9e) video_down_crop_pane

0x26ae,	// (0x00042d95) video_down_pane_ParamLimits

0x26ae,	// (0x00042d95) video_down_pane

0xd34c,	// (0x0004da33) video_down_subqcif_pane_ParamLimits

0xd34c,	// (0x0004da33) video_down_subqcif_pane

0xd364,	// (0x0004da4b) video_down_subqcif_pane_cp_ParamLimits

0xd364,	// (0x0004da4b) video_down_subqcif_pane_cp

0xd38a,	// (0x0004da71) im_reading_pane_ParamLimits

0xd38a,	// (0x0004da71) im_reading_pane

0x27be,	// (0x00042ea5) im_writing_pane_ParamLimits

0x27be,	// (0x00042ea5) im_writing_pane

0x27d4,	// (0x00042ebb) im_reading_pane_t1

0xd3a4,	// (0x0004da8b) list_im_pane

0xd3b5,	// (0x0004da9c) scroll_pane_cp07

0x280d,	// (0x00042ef4) im_writing_pane_t1_ParamLimits

0x280d,	// (0x00042ef4) im_writing_pane_t1

0xd3ce,	// (0x0004dab5) im_writing_pane_t2_ParamLimits

0xd3ce,	// (0x0004dab5) im_writing_pane_t2

0x0001,

0xf1c2,	// (0x0004f8a9) im_writing_pane_t_ParamLimits

0xf1c2,	// (0x0004f8a9) im_writing_pane_t

0xcda7,	// (0x0004d48e) input_focus_pane_cp04

0xcda7,	// (0x0004d48e) input_focus_pane_cp05

0x2822,	// (0x00042f09) list_im_single_pane_ParamLimits

0x2822,	// (0x00042f09) list_im_single_pane

0x2836,	// (0x00042f1d) list_single_im_pane_t1

0xd2a1,	// (0x0004d988) blid_accuracy_pane

0xd2a1,	// (0x0004d988) blid_compass_pane

0xf017,	// (0x0004f6fe) main_location_t1

0xf017,	// (0x0004f6fe) main_location_t2

0xf017,	// (0x0004f6fe) main_location_t3

0x0002,

0x0483,	// (0x00040b6a) main_location_t

0xcda7,	// (0x0004d48e) aid_levels_location

0xd028,	// (0x0004d70f) blid_accuracy_pane_g1

0xd028,	// (0x0004d70f) blid_accuracy_pane_g2

0x0001,

0xf1fe,	// (0x0004f8e5) blid_accuracy_pane_g

0xd416,	// (0x0004dafd) wml_content_pane

0xd454,	// (0x0004db3b) wml_button_pane_ParamLimits

0xd454,	// (0x0004db3b) wml_button_pane

0x2845,	// (0x00042f2c) wml_list_single_large_pane_ParamLimits

0x2845,	// (0x00042f2c) wml_list_single_large_pane

0x285a,	// (0x00042f41) wml_list_single_medium_pane_ParamLimits

0x285a,	// (0x00042f41) wml_list_single_medium_pane

0x2870,	// (0x00042f57) wml_list_single_small_pane_ParamLimits

0x2870,	// (0x00042f57) wml_list_single_small_pane

0xd468,	// (0x0004db4f) wml_selection_box_pane_ParamLimits

0xd468,	// (0x0004db4f) wml_selection_box_pane

0xd47b,	// (0x0004db62) wml_list_single_pane_t1

0xd48a,	// (0x0004db71) wml_list_single_medium_pane_t1

0xd499,	// (0x0004db80) wml_list_single_large_pane_t1

0xd4a8,	// (0x0004db8f) input_focus_pane_cp02_ParamLimits

0xd4a8,	// (0x0004db8f) input_focus_pane_cp02

0xd4bb,	// (0x0004dba2) wml_selection_box_pane_g1

0xd4c4,	// (0x0004dbab) wml_selection_box_pane_t1_ParamLimits

0xd4c4,	// (0x0004dbab) wml_selection_box_pane_t1

0xd010,	// (0x0004d6f7) bg_wml_button_pane_ParamLimits

0xd010,	// (0x0004d6f7) bg_wml_button_pane

0xd4dc,	// (0x0004dbc3) wml_button_pane_g1

0xd4e4,	// (0x0004dbcb) wml_button_pane_t1

0xd4dc,	// (0x0004dbc3) wml_button_bg_pane_g1

0xd4f4,	// (0x0004dbdb) wml_button_bg_pane_g2

0xd4fc,	// (0x0004dbe3) wml_button_bg_pane_g3

0xd504,	// (0x0004dbeb) wml_button_bg_pane_g4

0xd50c,	// (0x0004dbf3) wml_button_bg_pane_g5

0xd514,	// (0x0004dbfb) wml_button_bg_pane_g6

0xd51c,	// (0x0004dc03) wml_button_bg_pane_g7

0xd524,	// (0x0004dc0b) wml_button_bg_pane_g8

0xd52c,	// (0x0004dc13) wml_button_bg_pane_g9

0x0008,

0x013c,	// (0x00040823) wml_button_bg_pane_g

0x2888,	// (0x00042f6f) bg_list_pane_cp02

0xd534,	// (0x0004dc1b) mce_header_pane_ParamLimits

0xd534,	// (0x0004dc1b) mce_header_pane

0xd54a,	// (0x0004dc31) mce_icon_pane

0xd54a,	// (0x0004dc31) mce_image_pane

0x2890,	// (0x00042f77) mce_text_pane_ParamLimits

0x2890,	// (0x00042f77) mce_text_pane

0x28a3,	// (0x00042f8a) scroll_pane_cp03

0xd44c,	// (0x0004db33) scroll_pane_cp04

0xd553,	// (0x0004dc3a) scroll_pane_cp05_ParamLimits

0xd553,	// (0x0004dc3a) scroll_pane_cp05

0x28ab,	// (0x00042f92) mce_header_field_pane_ParamLimits

0x28ab,	// (0x00042f92) mce_header_field_pane

0x28c2,	// (0x00042fa9) mce_header_field_pane_2_ParamLimits

0x28c2,	// (0x00042fa9) mce_header_field_pane_2

0x28d8,	// (0x00042fbf) mce_header_field_pane_3

0x28e0,	// (0x00042fc7) list_single_mce_message_pane_ParamLimits

0x28e0,	// (0x00042fc7) list_single_mce_message_pane

0x28ec,	// (0x00042fd3) list_single_mce_smart_pane_ParamLimits

0x28ec,	// (0x00042fd3) list_single_mce_smart_pane

0xd55f,	// (0x0004dc46) input_focus_pane_cp03

0xd568,	// (0x0004dc4f) list_header_data_pane

0x2900,	// (0x00042fe7) mce_header_field_pane_t1

0x290e,	// (0x00042ff5) list_single_mce_header_pane_ParamLimits

0x290e,	// (0x00042ff5) list_single_mce_header_pane

0xd570,	// (0x0004dc57) list_single_mce_header_pane_t1

0xd57f,	// (0x0004dc66) list_single_mce_message_pane_g1

0xd587,	// (0x0004dc6e) list_single_mce_message_pane_t1

0x2948,	// (0x0004302f) bg_cale_heading_pane_cp01_ParamLimits

0x2948,	// (0x0004302f) bg_cale_heading_pane_cp01

0xd595,	// (0x0004dc7c) bg_cale_pane_cp02_ParamLimits

0xd595,	// (0x0004dc7c) bg_cale_pane_cp02

0x2982,	// (0x00043069) cale_month_corner_pane

0x29a1,	// (0x00043088) cale_month_day_heading_pane_ParamLimits

0x29a1,	// (0x00043088) cale_month_day_heading_pane

0x29f3,	// (0x000430da) cale_month_pane_g1_ParamLimits

0x29f3,	// (0x000430da) cale_month_pane_g1

0x2a22,	// (0x00043109) cale_month_pane_g2_ParamLimits

0x2a22,	// (0x00043109) cale_month_pane_g2

0x2a52,	// (0x00043139) cale_month_pane_g3_ParamLimits

0x2a52,	// (0x00043139) cale_month_pane_g3

0x2a8e,	// (0x00043175) cale_month_pane_g4_ParamLimits

0x2a8e,	// (0x00043175) cale_month_pane_g4

0x2aca,	// (0x000431b1) cale_month_pane_g5_ParamLimits

0x2aca,	// (0x000431b1) cale_month_pane_g5

0x2b12,	// (0x000431f9) cale_month_pane_g6_ParamLimits

0x2b12,	// (0x000431f9) cale_month_pane_g6

0x2b5e,	// (0x00043245) cale_month_pane_g7_ParamLimits

0x2b5e,	// (0x00043245) cale_month_pane_g7

0x2bb2,	// (0x00043299) cale_month_pane_g8_ParamLimits

0x2bb2,	// (0x00043299) cale_month_pane_g8

0x2c06,	// (0x000432ed) cale_month_pane_g9_ParamLimits

0x2c06,	// (0x000432ed) cale_month_pane_g9

0x2c58,	// (0x0004333f) cale_month_pane_g10_ParamLimits

0x2c58,	// (0x0004333f) cale_month_pane_g10

0x2caa,	// (0x00043391) cale_month_pane_g11_ParamLimits

0x2caa,	// (0x00043391) cale_month_pane_g11

0x2cfc,	// (0x000433e3) cale_month_pane_g12_ParamLimits

0x2cfc,	// (0x000433e3) cale_month_pane_g12

0x2d4e,	// (0x00043435) cale_month_pane_g13_ParamLimits

0x2d4e,	// (0x00043435) cale_month_pane_g13

0x000c,

0xf1c7,	// (0x0004f8ae) cale_month_pane_g_ParamLimits

0xf1c7,	// (0x0004f8ae) cale_month_pane_g

0x2da0,	// (0x00043487) cale_month_week_pane

0x2dc4,	// (0x000434ab) grid_cale_month_pane_ParamLimits

0x2dc4,	// (0x000434ab) grid_cale_month_pane

0x2e0d,	// (0x000434f4) cale_month_day_heading_pane_t1

0x2e93,	// (0x0004357a) cale_month_day_heading_pane_t2

0x2f0c,	// (0x000435f3) cale_month_day_heading_pane_t3

0x2f85,	// (0x0004366c) cale_month_day_heading_pane_t4

0x3006,	// (0x000436ed) cale_month_day_heading_pane_t5

0x308f,	// (0x00043776) cale_month_day_heading_pane_t6

0x3118,	// (0x000437ff) cale_month_day_heading_pane_t7

0x0006,

0xf1e2,	// (0x0004f8c9) cale_month_day_heading_pane_t

0xd24f,	// (0x0004d936) bg_cale_side_pane_cp01

0x31a9,	// (0x00043890) cale_month_week_pane_t1

0x31c2,	// (0x000438a9) cale_month_week_pane_t2

0x31db,	// (0x000438c2) cale_month_week_pane_t3

0x31f4,	// (0x000438db) cale_month_week_pane_t4

0x320d,	// (0x000438f4) cale_month_week_pane_t5

0x3226,	// (0x0004390d) cale_month_week_pane_t6

0x0005,

0xf1f1,	// (0x0004f8d8) cale_month_week_pane_t

0x323f,	// (0x00043926) cell_cale_month_pane_ParamLimits

0x323f,	// (0x00043926) cell_cale_month_pane

0xa5d5,	// (0x0004acbc) cell_cale_month_pane_g1

0x336d,	// (0x00043a54) cell_cale_month_pane_t1_ParamLimits

0x336d,	// (0x00043a54) cell_cale_month_pane_t1

0xd25d,	// (0x0004d944) grid_highlight_pane_cp08

0xd028,	// (0x0004d70f) main_smil_g1

0x3399,	// (0x00043a80) smil_status_pane

0xd5d4,	// (0x0004dcbb) smil_text_pane

0xef2f,	// (0x0004f616) bg_popup_call3_rect_pane_g8

0xef37,	// (0x0004f61e) bg_popup_call3_rect_pane_g9

0x0008,

0x0417,	// (0x00040afe) bg_popup_call3_rect_pane_g

0x468e,	// (0x00044d75) smil_status_volume_pane_g1

0xd5de,	// (0x0004dcc5) smil_status_pane_t1

0xa757,	// (0x0004ae3e) volume_smil_pane

0xd5f5,	// (0x0004dcdc) list_smil_text_pane

0x33ac,	// (0x00043a93) scroll_pane_cp011

0x33b7,	// (0x00043a9e) smil_text_list_pane_t1_ParamLimits

0x33b7,	// (0x00043a9e) smil_text_list_pane_t1

0xa5e1,	// (0x0004acc8) aid_volume_smil_ParamLimits

0xa5e1,	// (0x0004acc8) aid_volume_smil

0xd028,	// (0x0004d70f) smil_volume_pane_g1

0xd028,	// (0x0004d70f) smil_volume_pane_g2

0x0001,

0xf1fe,	// (0x0004f8e5) smil_volume_pane_g

0x1cb9,	// (0x000423a0) listscroll_cale_day_pane

0xd5ff,	// (0x0004dce6) bg_cale_pane

0xd617,	// (0x0004dcfe) list_cale_pane

0xd63a,	// (0x0004dd21) scroll_pane_cp09

0xd64b,	// (0x0004dd32) cale_bg_pane_g1

0xd653,	// (0x0004dd3a) cale_bg_pane_g2

0xd65b,	// (0x0004dd42) cale_bg_pane_g3

0xd663,	// (0x0004dd4a) cale_bg_pane_g4

0xd66b,	// (0x0004dd52) cale_bg_pane_g5

0xd673,	// (0x0004dd5a) cale_bg_pane_g6

0xd67b,	// (0x0004dd62) cale_bg_pane_g7

0xd683,	// (0x0004dd6a) cale_bg_pane_g8

0xd68b,	// (0x0004dd72) cale_bg_pane_g9

0x0008,

0x0190,	// (0x00040877) cale_bg_pane_g

0x33f3,	// (0x00043ada) list_cale_time_pane_ParamLimits

0x33f3,	// (0x00043ada) list_cale_time_pane

0xd69b,	// (0x0004dd82) list_cale_time_pane_g1_ParamLimits

0xd69b,	// (0x0004dd82) list_cale_time_pane_g1

0xd6a7,	// (0x0004dd8e) list_cale_time_pane_g2_ParamLimits

0xd6a7,	// (0x0004dd8e) list_cale_time_pane_g2

0x3408,	// (0x00043aef) list_cale_time_pane_g3_ParamLimits

0x3408,	// (0x00043aef) list_cale_time_pane_g3

0x3416,	// (0x00043afd) list_cale_time_pane_g4_ParamLimits

0x3416,	// (0x00043afd) list_cale_time_pane_g4

0x3424,	// (0x00043b0b) list_cale_time_pane_g5_ParamLimits

0x3424,	// (0x00043b0b) list_cale_time_pane_g5

0x0005,

0xf203,	// (0x0004f8ea) list_cale_time_pane_g_ParamLimits

0xf203,	// (0x0004f8ea) list_cale_time_pane_g

0xd6c1,	// (0x0004dda8) list_cale_time_pane_t1_ParamLimits

0xd6c1,	// (0x0004dda8) list_cale_time_pane_t1

0xd6e9,	// (0x0004ddd0) list_cale_time_pane_t2_ParamLimits

0xd6e9,	// (0x0004ddd0) list_cale_time_pane_t2

0x3686,	// (0x00043d6d) aid_blid_cardinal_pane

0x36c4,	// (0x00043dab) compass_pane_t4

0xd711,	// (0x0004ddf8) list_cale_time_pane_t4_ParamLimits

0xd711,	// (0x0004ddf8) list_cale_time_pane_t4

0x36d2,	// (0x00043db9) compass_pane_t5

0x36e0,	// (0x00043dc7) compass_pane_t6

0x36ee,	// (0x00043dd5) compass_pane_t7

0xdbc6,	// (0x0004e2ad) navi_pane_cc_t1

0xdda3,	// (0x0004e48a) aid_phob_thumbnail_center_pane

0x3a64,	// (0x0004414b) main_postcard_pane_g4_ParamLimits

0x0002,

0x01b0,	// (0x00040897) list_cale_time_pane_t_ParamLimits

0x01b0,	// (0x00040897) list_cale_time_pane_t

0xc9fe,	// (0x0004d0e5) bg_popup_window_pane_cp02_ParamLimits

0xc9fe,	// (0x0004d0e5) bg_popup_window_pane_cp02

0xd739,	// (0x0004de20) heading_pane_cp01_ParamLimits

0xd739,	// (0x0004de20) heading_pane_cp01

0xd745,	// (0x0004de2c) loc_req_pane_ParamLimits

0xd745,	// (0x0004de2c) loc_req_pane

0xd755,	// (0x0004de3c) loc_type_pane_ParamLimits

0xd755,	// (0x0004de3c) loc_type_pane

0xd767,	// (0x0004de4e) loc_type_pane_t1_ParamLimits

0xd767,	// (0x0004de4e) loc_type_pane_t1

0xd779,	// (0x0004de60) loc_type_pane_t2_ParamLimits

0xd779,	// (0x0004de60) loc_type_pane_t2

0xd78b,	// (0x0004de72) loc_type_pane_t3_ParamLimits

0xd78b,	// (0x0004de72) loc_type_pane_t3

0x0002,

0x01b7,	// (0x0004089e) loc_type_pane_t_ParamLimits

0x01b7,	// (0x0004089e) loc_type_pane_t

0xd79d,	// (0x0004de84) list_loc_req_pane

0xd7a7,	// (0x0004de8e) scroll_pane_cp012

0x3432,	// (0x00043b19) list_single_loc_request_popup_menu_pane_ParamLimits

0x3432,	// (0x00043b19) list_single_loc_request_popup_menu_pane

0xd7b2,	// (0x0004de99) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7b2,	// (0x0004de99) list_single_loc_request_popup_menu_pane_g1

0xd7be,	// (0x0004dea5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7be,	// (0x0004dea5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x01be,	// (0x000408a5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x01be,	// (0x000408a5) list_single_loc_request_popup_menu_pane_g

0xd7ca,	// (0x0004deb1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7ca,	// (0x0004deb1) list_single_loc_request_popup_menu_pane_t1

0xd010,	// (0x0004d6f7) bg_popup_window_pane_cp03_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_window_pane_cp03

0xe72c,	// (0x0004ee13) heading_loc_req_pane_ParamLimits

0xe72c,	// (0x0004ee13) heading_loc_req_pane

0x343f,	// (0x00043b26) popup_dyc_status_message_window_g1_ParamLimits

0x343f,	// (0x00043b26) popup_dyc_status_message_window_g1

0x3453,	// (0x00043b3a) popup_dyc_status_message_window_t1_ParamLimits

0x3453,	// (0x00043b3a) popup_dyc_status_message_window_t1

0x3468,	// (0x00043b4f) popup_dyc_status_message_window_t2_ParamLimits

0x3468,	// (0x00043b4f) popup_dyc_status_message_window_t2

0x347d,	// (0x00043b64) popup_dyc_status_message_window_t3_ParamLimits

0x347d,	// (0x00043b64) popup_dyc_status_message_window_t3

0x0002,

0xf210,	// (0x0004f8f7) popup_dyc_status_message_window_t_ParamLimits

0xf210,	// (0x0004f8f7) popup_dyc_status_message_window_t

0xcda7,	// (0x0004d48e) bg_heading_pane_cp01

0xd7e0,	// (0x0004dec7) heading_loc_req_pane_g1

0xd7e8,	// (0x0004decf) heading_loc_req_pane_g2

0xd7f0,	// (0x0004ded7) heading_loc_req_pane_g3

0x0002,

0x01ca,	// (0x000408b1) heading_loc_req_pane_g

0xd7f8,	// (0x0004dedf) heading_loc_req_pane_t1

0xd817,	// (0x0004defe) bg_popup_sub_pane_cp01_ParamLimits

0xd817,	// (0x0004defe) bg_popup_sub_pane_cp01

0xd825,	// (0x0004df0c) popup_cale_events_window_g1_ParamLimits

0xd825,	// (0x0004df0c) popup_cale_events_window_g1

0xd845,	// (0x0004df2c) popup_cale_events_window_g2_ParamLimits

0xd845,	// (0x0004df2c) popup_cale_events_window_g2

0x0001,

0x01ec,	// (0x000408d3) popup_cale_events_window_g_ParamLimits

0x01ec,	// (0x000408d3) popup_cale_events_window_g

0xd865,	// (0x0004df4c) popup_cale_events_window_t1_ParamLimits

0xd865,	// (0x0004df4c) popup_cale_events_window_t1

0xd877,	// (0x0004df5e) popup_cale_events_window_t2_ParamLimits

0xd877,	// (0x0004df5e) popup_cale_events_window_t2

0xd8b5,	// (0x0004df9c) popup_cale_events_window_t3_ParamLimits

0xd8b5,	// (0x0004df9c) popup_cale_events_window_t3

0xd8ef,	// (0x0004dfd6) popup_cale_events_window_t4_ParamLimits

0xd8ef,	// (0x0004dfd6) popup_cale_events_window_t4

0x0003,

0x01f1,	// (0x000408d8) popup_cale_events_window_t_ParamLimits

0x01f1,	// (0x000408d8) popup_cale_events_window_t

0x34a5,	// (0x00043b8c) call_type_pane

0x34b5,	// (0x00043b9c) popup_call_status_window_g1

0x34c9,	// (0x00043bb0) popup_call_status_window_g2

0x34dd,	// (0x00043bc4) popup_call_status_window_g3

0x0002,

0xf217,	// (0x0004f8fe) popup_call_status_window_g

0xd925,	// (0x0004e00c) call_type_pane_g1

0xd92e,	// (0x0004e015) call_type_pane_g2

0x0001,

0xf21e,	// (0x0004f905) call_type_pane_g

0xcda7,	// (0x0004d48e) bg_popup_sub_pane_cp02

0xd937,	// (0x0004e01e) listscroll_popup_wml_pane

0xd93f,	// (0x0004e026) list_wml_pane

0xd949,	// (0x0004e030) scroll_pane_cp013

0xd954,	// (0x0004e03b) list_single_graphic_popup_wml_pane_ParamLimits

0xd954,	// (0x0004e03b) list_single_graphic_popup_wml_pane

0xd028,	// (0x0004d70f) list_single_graphic_popup_wml_pane_g1

0xd968,	// (0x0004e04f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf223,	// (0x0004f90a) list_single_graphic_popup_wml_pane_g

0xd970,	// (0x0004e057) list_single_graphic_popup_wml_pane_t1

0xd994,	// (0x0004e07b) aid_call_pane

0xd008,	// (0x0004d6ef) popup_clock_analogue_window_g1

0xd008,	// (0x0004d6ef) popup_clock_analogue_window_g2

0xa603,	// (0x0004acea) popup_clock_analogue_window_g3

0xa603,	// (0x0004acea) popup_clock_analogue_window_g4

0xd028,	// (0x0004d70f) popup_clock_analogue_window_g5

0x0004,

0xf228,	// (0x0004f90f) popup_clock_analogue_window_g

0xa60b,	// (0x0004acf2) popup_clock_analogue_window_t1

0xa619,	// (0x0004ad00) clock_digital_number_pane_ParamLimits

0xa619,	// (0x0004ad00) clock_digital_number_pane

0xa625,	// (0x0004ad0c) clock_digital_number_pane_cp02_ParamLimits

0xa625,	// (0x0004ad0c) clock_digital_number_pane_cp02

0xa631,	// (0x0004ad18) clock_digital_number_pane_cp03_ParamLimits

0xa631,	// (0x0004ad18) clock_digital_number_pane_cp03

0xa63d,	// (0x0004ad24) clock_digital_number_pane_cp04_ParamLimits

0xa63d,	// (0x0004ad24) clock_digital_number_pane_cp04

0xa64d,	// (0x0004ad34) clock_digital_separator_pane_ParamLimits

0xa64d,	// (0x0004ad34) clock_digital_separator_pane

0xa659,	// (0x0004ad40) popup_clock_digital_window_t1

0xd028,	// (0x0004d70f) clock_digital_number_pane_g1

0xd028,	// (0x0004d70f) clock_digital_number_pane_g2

0x0001,

0xf1fe,	// (0x0004f8e5) clock_digital_number_pane_g

0xd028,	// (0x0004d70f) clock_digital_separator_pane_g1

0xd028,	// (0x0004d70f) clock_digital_separator_pane_g2

0x0001,

0xf1fe,	// (0x0004f8e5) clock_digital_separator_pane_g

0xcda7,	// (0x0004d48e) bg_popup_window_pane_cp04

0xd99c,	// (0x0004e083) heading_pane_cp03

0xd2a1,	// (0x0004d988) listscroll_popup_gms_pane

0xcda7,	// (0x0004d48e) grid_large_graphic_popup_pane

0xd9a5,	// (0x0004e08c) listscroll_popup_gms_pane_g1

0xd9ae,	// (0x0004e095) listscroll_popup_gms_pane_g2

0x0001,

0x0216,	// (0x000408fd) listscroll_popup_gms_pane_g

0xd9b7,	// (0x0004e09e) scroll_pane_cp014

0xc95f,	// (0x0004d046) cell_large_graphic_popup_pane_ParamLimits

0xc95f,	// (0x0004d046) cell_large_graphic_popup_pane

0xd07d,	// (0x0004d764) cell_large_graphic_popup_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) cell_large_graphic_popup_pane_g1

0xd9c0,	// (0x0004e0a7) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9c0,	// (0x0004e0a7) cell_large_graphic_popup_pane_g2

0xd9ce,	// (0x0004e0b5) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9ce,	// (0x0004e0b5) cell_large_graphic_popup_pane_g3

0xd9dc,	// (0x0004e0c3) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9dc,	// (0x0004e0c3) cell_large_graphic_popup_pane_g4

0x0003,

0x021b,	// (0x00040902) cell_large_graphic_popup_pane_g_ParamLimits

0x021b,	// (0x00040902) cell_large_graphic_popup_pane_g

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp010

0xd028,	// (0x0004d70f) bg_popup_call_pane_g1

0xd9ed,	// (0x0004e0d4) list_single_graphic_popup_conf_pane_ParamLimits

0xd9ed,	// (0x0004e0d4) list_single_graphic_popup_conf_pane

0xda00,	// (0x0004e0e7) list_highlight_pane_cp01

0xda09,	// (0x0004e0f0) list_single_graphic_popup_conf_pane_g1

0xda11,	// (0x0004e0f8) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0224,	// (0x0004090b) list_single_graphic_popup_conf_pane_g

0xda19,	// (0x0004e100) list_single_graphic_popup_conf_pane_t1

0xda27,	// (0x0004e10e) linegrid_cams_pane_g1

0x34ec,	// (0x00043bd3) linegrid_cams_pane_g2

0xd1e0,	// (0x0004d8c7) linegrid_cams_pane_g3

0xda30,	// (0x0004e117) linegrid_cams_pane_g4

0x34f5,	// (0x00043bdc) linegrid_cams_pane_g5

0x34fe,	// (0x00043be5) linegrid_cams_pane_g6

0xd290,	// (0x0004d977) linegrid_cams_pane_g7

0x0006,

0xf233,	// (0x0004f91a) linegrid_cams_pane_g

0xda39,	// (0x0004e120) popup_clock_analogue_window

0xda39,	// (0x0004e120) popup_clock_digital_window

0xcda7,	// (0x0004d48e) popup_phob_thumbnail_window

0xd028,	// (0x0004d70f) call_video_uplink_pane_g1

0xda42,	// (0x0004e129) call_video_uplink_pane_g2

0x0001,

0xf242,	// (0x0004f929) call_video_uplink_pane_g

0xda4a,	// (0x0004e131) video_uplink_pane

0xda52,	// (0x0004e139) mce_image_pane_g1

0x3509,	// (0x00043bf0) mce_image_pane_g2

0x3513,	// (0x00043bfa) mce_image_pane_g3

0x351b,	// (0x00043c02) mce_image_pane_g4

0x3523,	// (0x00043c0a) mce_image_pane_g5

0x0004,

0xf247,	// (0x0004f92e) mce_image_pane_g

0xda5c,	// (0x0004e143) control_top_pane_stacon_cp01_ParamLimits

0xda5c,	// (0x0004e143) control_top_pane_stacon_cp01

0xda70,	// (0x0004e157) uni_indicator_pane_stacon_cp01_ParamLimits

0xda70,	// (0x0004e157) uni_indicator_pane_stacon_cp01

0xda81,	// (0x0004e168) bg_popup_sub_pane_cp03

0xda8b,	// (0x0004e172) chi_dic_find_pane

0x352b,	// (0x00043c12) listscroll_chi_dic_pane

0xda93,	// (0x0004e17a) main_pane_chidic_g1

0xda9b,	// (0x0004e182) chi_dic_find_pane_t1

0xdaa9,	// (0x0004e190) find_chidic_pane

0xdab2,	// (0x0004e199) chi_dic_list_pane_ParamLimits

0xdab2,	// (0x0004e199) chi_dic_list_pane

0xdac3,	// (0x0004e1aa) scroll_pane_cp020

0xdacb,	// (0x0004e1b2) find_chidic_pane_t1

0xcda7,	// (0x0004d48e) input_focus_pane_cp06

0x353f,	// (0x00043c26) list_chi_dic_pane_ParamLimits

0x353f,	// (0x00043c26) list_chi_dic_pane

0x3551,	// (0x00043c38) list_chi_dic_pane_t1_ParamLimits

0x3551,	// (0x00043c38) list_chi_dic_pane_t1

0xcda7,	// (0x0004d48e) list_highlight_pane_cp020

0xdada,	// (0x0004e1c1) bg_cale_heading_pane_g1

0x3564,	// (0x00043c4b) bg_cale_heading_pane_g2

0x356c,	// (0x00043c53) bg_cale_heading_pane_g3

0x3574,	// (0x00043c5b) bg_cale_heading_pane_g4

0x357e,	// (0x00043c65) bg_cale_heading_pane_g5

0x3588,	// (0x00043c6f) bg_cale_heading_pane_g6

0x3590,	// (0x00043c77) bg_cale_heading_pane_g7

0x3598,	// (0x00043c7f) bg_cale_heading_pane_g8

0x35a2,	// (0x00043c89) bg_cale_heading_pane_g9

0x0008,

0xf252,	// (0x0004f939) bg_cale_heading_pane_g

0xdada,	// (0x0004e1c1) bg_cale_side_pane_g1

0x35ac,	// (0x00043c93) bg_cale_side_pane_g2

0x35b4,	// (0x00043c9b) bg_cale_side_pane_g3

0x35bc,	// (0x00043ca3) bg_cale_side_pane_g4

0x35c4,	// (0x00043cab) bg_cale_side_pane_g5

0x35cc,	// (0x00043cb3) bg_cale_side_pane_g6

0x35d4,	// (0x00043cbb) bg_cale_side_pane_g7

0x35dc,	// (0x00043cc3) bg_cale_side_pane_g8

0x35e4,	// (0x00043ccb) bg_cale_side_pane_g9

0x0008,

0xf265,	// (0x0004f94c) bg_cale_side_pane_g

0x35ec,	// (0x00043cd3) popup_call_status_window_ParamLimits

0x35ec,	// (0x00043cd3) popup_call_status_window

0xdae2,	// (0x0004e1c9) stacon_top_pane

0xdaea,	// (0x0004e1d1) status_pane_ParamLimits

0xdaea,	// (0x0004e1d1) status_pane

0xdaff,	// (0x0004e1e6) status_small_pane

0xdb07,	// (0x0004e1ee) control_pane

0xcda7,	// (0x0004d48e) stacon_bottom_pane

0xdb0f,	// (0x0004e1f6) list_single_mce_smart_pane_t1_ParamLimits

0xdb0f,	// (0x0004e1f6) list_single_mce_smart_pane_t1

0xdb22,	// (0x0004e209) list_single_mce_smart_pane_t2_ParamLimits

0xdb22,	// (0x0004e209) list_single_mce_smart_pane_t2

0x0001,

0x026e,	// (0x00040955) list_single_mce_smart_pane_t_ParamLimits

0x026e,	// (0x00040955) list_single_mce_smart_pane_t

0x3635,	// (0x00043d1c) compass_pane

0x363e,	// (0x00043d25) main_location2_pane_t1

0x3650,	// (0x00043d37) main_location2_pane_t2

0x3662,	// (0x00043d49) main_location2_pane_t3

0x0003,

0xf278,	// (0x0004f95f) main_location2_pane_t

0xdb41,	// (0x0004e228) compass_pane_g1_ParamLimits

0xdb41,	// (0x0004e228) compass_pane_g1

0x36a6,	// (0x00043d8d) compass_pane_t1

0x36b5,	// (0x00043d9c) compass_pane_t2

0x0005,

0xf281,	// (0x0004f968) compass_pane_t

0x36fc,	// (0x00043de3) text_secondary_cp61

0xdbbd,	// (0x0004e2a4) navi_pane_cams_g5

0xdc39,	// (0x0004e320) navi_pane_im_t1

0xdc47,	// (0x0004e32e) navi_pane_mp_g1_ParamLimits

0xdc47,	// (0x0004e32e) navi_pane_mp_g1

0xdc5b,	// (0x0004e342) navi_pane_mp_g2_ParamLimits

0xdc5b,	// (0x0004e342) navi_pane_mp_g2

0xdc67,	// (0x0004e34e) navi_pane_mp_g3_ParamLimits

0xdc67,	// (0x0004e34e) navi_pane_mp_g3

0x0002,

0x0290,	// (0x00040977) navi_pane_mp_g_ParamLimits

0x0290,	// (0x00040977) navi_pane_mp_g

0xdc73,	// (0x0004e35a) navi_pane_mp_t1

0xdc81,	// (0x0004e368) navi_pane_mp_t2

0x0002,

0x0297,	// (0x0004097e) navi_pane_mp_t

0xdcec,	// (0x0004e3d3) navi_pane_vt_g1

0xdc73,	// (0x0004e35a) navi_pane_vt_t1

0xdcf4,	// (0x0004e3db) navi_slider_pane

0xd2a1,	// (0x0004d988) zooming_pane

0xdd04,	// (0x0004e3eb) navi_slider_pane_g1

0xa676,	// (0x0004ad5d) navi_slider_pane_g2

0x0006,

0xf28e,	// (0x0004f975) navi_slider_pane_g

0xdd28,	// (0x0004e40f) aid_levels_zoom

0xdd30,	// (0x0004e417) zooming_pane_g1

0xdd38,	// (0x0004e41f) zooming_pane_g2

0xdd38,	// (0x0004e41f) zooming_pane_g3

0x0002,

0x02ad,	// (0x00040994) zooming_pane_g

0xdd40,	// (0x0004e427) level_10_zoom

0xdd49,	// (0x0004e430) level_11_zoom

0xdd52,	// (0x0004e439) level_1_zoom

0xdd5b,	// (0x0004e442) level_2_zoom

0xdd64,	// (0x0004e44b) level_3_zoom

0xdd6d,	// (0x0004e454) level_4_zoom

0xdd76,	// (0x0004e45d) level_5_zoom

0xdd7f,	// (0x0004e466) level_6_zoom

0xdd88,	// (0x0004e46f) level_7_zoom

0xdd91,	// (0x0004e478) level_8_zoom

0xdd9a,	// (0x0004e481) level_9_zoom

0xddab,	// (0x0004e492) popup_phob_thumbnail_window_g1

0xddb3,	// (0x0004e49a) popup_phob_thumbnail_window_g2

0x0001,

0x02b4,	// (0x0004099b) popup_phob_thumbnail_window_g

0x410a,	// (0x000447f1) level_1_location

0x4112,	// (0x000447f9) level_2_location

0x411a,	// (0x00044801) level_3_location

0x4122,	// (0x00044809) level_4_location

0xd2a1,	// (0x0004d988) level_5_location

0x374d,	// (0x00043e34) mce_icon_pane_g1

0x3755,	// (0x00043e3c) mce_icon_pane_g2

0x0001,

0xf29d,	// (0x0004f984) mce_icon_pane_g

0xe738,	// (0x0004ee1f) main_mup_pane_g1_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g1

0xe738,	// (0x0004ee1f) main_mup_pane_g2_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g2

0xe738,	// (0x0004ee1f) main_mup_pane_g3_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g3

0xe738,	// (0x0004ee1f) main_mup_pane_g4_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g4

0xe738,	// (0x0004ee1f) main_mup_pane_g5_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g5

0xe738,	// (0x0004ee1f) main_mup_pane_g6_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g6

0xe738,	// (0x0004ee1f) main_mup_pane_g7_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g7

0xe738,	// (0x0004ee1f) main_mup_pane_g8_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g8

0xe738,	// (0x0004ee1f) main_mup_pane_g9_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g9

0xe738,	// (0x0004ee1f) main_mup_pane_g10_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g10

0xe738,	// (0x0004ee1f) main_mup_pane_g11_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g11

0xd07d,	// (0x0004d764) main_mup_pane_g12_ParamLimits

0xd07d,	// (0x0004d764) main_mup_pane_g12

0xe738,	// (0x0004ee1f) main_mup_pane_g13_ParamLimits

0xe738,	// (0x0004ee1f) main_mup_pane_g13

0x000c,

0xf2a2,	// (0x0004f989) main_mup_pane_g_ParamLimits

0xf2a2,	// (0x0004f989) main_mup_pane_g

0xe746,	// (0x0004ee2d) main_mup_pane_t1_ParamLimits

0xe746,	// (0x0004ee2d) main_mup_pane_t1

0xe746,	// (0x0004ee2d) main_mup_pane_t2_ParamLimits

0xe746,	// (0x0004ee2d) main_mup_pane_t2

0xe746,	// (0x0004ee2d) main_mup_pane_t3_ParamLimits

0xe746,	// (0x0004ee2d) main_mup_pane_t3

0xd2a9,	// (0x0004d990) main_mup_pane_t4_ParamLimits

0xd2a9,	// (0x0004d990) main_mup_pane_t4

0xd2a9,	// (0x0004d990) main_mup_pane_t5_ParamLimits

0xd2a9,	// (0x0004d990) main_mup_pane_t5

0xd2f9,	// (0x0004d9e0) main_mup_pane_t6_ParamLimits

0xd2f9,	// (0x0004d9e0) main_mup_pane_t6

0x0005,

0xf2bd,	// (0x0004f9a4) main_mup_pane_t_ParamLimits

0xf2bd,	// (0x0004f9a4) main_mup_pane_t

0xc95f,	// (0x0004d046) mup_progress_pane_ParamLimits

0xc95f,	// (0x0004d046) mup_progress_pane

0xe75a,	// (0x0004ee41) mup_visualizer_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup_visualizer_pane

0xe75a,	// (0x0004ee41) mup_volume_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup_volume_pane

0xd08b,	// (0x0004d772) mup_visualizer_pane_g1_ParamLimits

0xd08b,	// (0x0004d772) mup_visualizer_pane_g1

0xddbb,	// (0x0004e4a2) mup_visualizer_pane_g2_ParamLimits

0xddbb,	// (0x0004e4a2) mup_visualizer_pane_g2

0xd07d,	// (0x0004d764) mup_visualizer_pane_g3_ParamLimits

0xd07d,	// (0x0004d764) mup_visualizer_pane_g3

0x0002,

0x02e6,	// (0x000409cd) mup_visualizer_pane_g_ParamLimits

0x02e6,	// (0x000409cd) mup_visualizer_pane_g

0xd2d7,	// (0x0004d9be) mup_volume_pane_g1

0xd2d7,	// (0x0004d9be) mup_volume_pane_g2

0x0001,

0x02ed,	// (0x000409d4) mup_volume_pane_g

0xd2d7,	// (0x0004d9be) mup_progress_pane_g1

0xd2d7,	// (0x0004d9be) mup_progress_pane_g2

0xd2d7,	// (0x0004d9be) mup_progress_pane_g3

0x0002,

0x02f2,	// (0x000409d9) mup_progress_pane_g

0xcda7,	// (0x0004d48e) bg_popup_window_pane_cp05

0xddc9,	// (0x0004e4b0) heading_pane_cp02_ParamLimits

0xddc9,	// (0x0004e4b0) heading_pane_cp02

0xdde3,	// (0x0004e4ca) list_popup_blid_pane

0xddeb,	// (0x0004e4d2) list_blid_sat_info_pane_ParamLimits

0xddeb,	// (0x0004e4d2) list_blid_sat_info_pane

0xddfe,	// (0x0004e4e5) list_blid_sat_info_pane_g1

0xde06,	// (0x0004e4ed) list_blid_sat_info_pane_t1

0x3855,	// (0x00043f3c) mup_equalizer_pane_ParamLimits

0x3855,	// (0x00043f3c) mup_equalizer_pane

0x386e,	// (0x00043f55) mup_equalizer_pane_cp1_ParamLimits

0x386e,	// (0x00043f55) mup_equalizer_pane_cp1

0x388b,	// (0x00043f72) mup_equalizer_pane_cp2_ParamLimits

0x388b,	// (0x00043f72) mup_equalizer_pane_cp2

0x38a8,	// (0x00043f8f) mup_equalizer_pane_cp3_ParamLimits

0x38a8,	// (0x00043f8f) mup_equalizer_pane_cp3

0x38c9,	// (0x00043fb0) mup_equalizer_pane_cp4_ParamLimits

0x38c9,	// (0x00043fb0) mup_equalizer_pane_cp4

0x38ea,	// (0x00043fd1) mup_equalizer_pane_cp5

0x38fe,	// (0x00043fe5) mup_equalizer_pane_cp6

0x3912,	// (0x00043ff9) mup_equalizer_pane_cp7

0xefaf,	// (0x0004f696) bg_popup_call_poc_act_pane_g9

0xefb7,	// (0x0004f69e) bg_popup_call_poc_act_pane_g10

0xefbf,	// (0x0004f6a6) bg_popup_call_poc_act_pane_g11

0x000a,

0xd010,	// (0x0004d6f7) mup_scale_pane

0xd028,	// (0x0004d70f) mup_scale_pane_g1

0xde14,	// (0x0004e4fb) mup_scale_pane_g2

0x0006,

0xf2df,	// (0x0004f9c6) mup_scale_pane_g

0xde38,	// (0x0004e51f) msg_data_pane

0xde40,	// (0x0004e527) scroll_pane_cp017

0x0dec,	// (0x000414d3) bg_list_pane_cp04_ParamLimits

0x0dec,	// (0x000414d3) bg_list_pane_cp04

0xde48,	// (0x0004e52f) msg_data_pane_g1

0x3938,	// (0x0004401f) msg_data_pane_g2

0x3942,	// (0x00044029) msg_data_pane_g3

0x394a,	// (0x00044031) msg_data_pane_g4

0x3952,	// (0x00044039) msg_data_pane_g5

0x395a,	// (0x00044041) msg_data_pane_g6

0x3962,	// (0x00044049) msg_data_pane_g7

0x0006,

0xf2ee,	// (0x0004f9d5) msg_data_pane_g

0x0e04,	// (0x000414eb) msg_text_pane_ParamLimits

0x0e04,	// (0x000414eb) msg_text_pane

0x396a,	// (0x00044051) qrid_highlight_pane_cp011_ParamLimits

0x396a,	// (0x00044051) qrid_highlight_pane_cp011

0xcda7,	// (0x0004d48e) msg_body_pane

0xcda7,	// (0x0004d48e) msg_header_pane

0xde59,	// (0x0004e540) input_focus_pane_cp07

0x0e3e,	// (0x00041525) msg_header_pane_t1_ParamLimits

0x0e3e,	// (0x00041525) msg_header_pane_t1

0x0e54,	// (0x0004153b) msg_header_pane_t2_ParamLimits

0x0e54,	// (0x0004153b) msg_header_pane_t2

0x0001,

0xf302,	// (0x0004f9e9) msg_header_pane_t_ParamLimits

0xf302,	// (0x0004f9e9) msg_header_pane_t

0xde6e,	// (0x0004e555) msg_body_pane_g1

0x0e6b,	// (0x00041552) msg_body_pane_t1_ParamLimits

0x0e6b,	// (0x00041552) msg_body_pane_t1

0xa690,	// (0x0004ad77) msg_body_pane_t2_ParamLimits

0xa690,	// (0x0004ad77) msg_body_pane_t2

0xa6a2,	// (0x0004ad89) msg_body_pane_t3_ParamLimits

0xa6a2,	// (0x0004ad89) msg_body_pane_t3

0x0002,

0xf307,	// (0x0004f9ee) msg_body_pane_t_ParamLimits

0xf307,	// (0x0004f9ee) msg_body_pane_t

0x39ba,	// (0x000440a1) main_viewer_pane_g1_ParamLimits

0x39ba,	// (0x000440a1) main_viewer_pane_g1

0x39c8,	// (0x000440af) main_viewer_pane_g2_ParamLimits

0x39c8,	// (0x000440af) main_viewer_pane_g2

0x39d6,	// (0x000440bd) main_viewer_pane_g3_ParamLimits

0x39d6,	// (0x000440bd) main_viewer_pane_g3

0x39e5,	// (0x000440cc) main_viewer_pane_g4_ParamLimits

0x39e5,	// (0x000440cc) main_viewer_pane_g4

0xa6cc,	// (0x0004adb3) main_viewer_pane_g5_ParamLimits

0xa6cc,	// (0x0004adb3) main_viewer_pane_g5

0xa6cc,	// (0x0004adb3) main_viewer_pane_g7_ParamLimits

0xa6cc,	// (0x0004adb3) main_viewer_pane_g7

0xa6de,	// (0x0004adc5) main_viewer_pane_g8_ParamLimits

0xa6de,	// (0x0004adc5) main_viewer_pane_g8

0x0007,

0xf317,	// (0x0004f9fe) main_viewer_pane_g_ParamLimits

0xf317,	// (0x0004f9fe) main_viewer_pane_g

0xde76,	// (0x0004e55d) viewer_content_pane_ParamLimits

0xde76,	// (0x0004e55d) viewer_content_pane

0x3a21,	// (0x00044108) main_postcard_pane_g1_ParamLimits

0x3a21,	// (0x00044108) main_postcard_pane_g1

0x3a37,	// (0x0004411e) main_postcard_pane_g2_ParamLimits

0x3a37,	// (0x0004411e) main_postcard_pane_g2

0x3a4d,	// (0x00044134) main_postcard_pane_g3_ParamLimits

0x3a4d,	// (0x00044134) main_postcard_pane_g3

0x0005,

0xf328,	// (0x0004fa0f) main_postcard_pane_g_ParamLimits

0xf328,	// (0x0004fa0f) main_postcard_pane_g

0x3a64,	// (0x0004414b) main_postcard_pane_g4

0x46a1,	// (0x00044d88) smil_status_volume_pane_g2

0x3aa7,	// (0x0004418e) postcard_pane_ParamLimits

0x3aa7,	// (0x0004418e) postcard_pane

0xde84,	// (0x0004e56b) postcard_pane_g1_ParamLimits

0xde84,	// (0x0004e56b) postcard_pane_g1

0x3ae9,	// (0x000441d0) postcard_pane_g2_ParamLimits

0x3ae9,	// (0x000441d0) postcard_pane_g2

0x3af5,	// (0x000441dc) postcard_pane_g3_ParamLimits

0x3af5,	// (0x000441dc) postcard_pane_g3

0xde92,	// (0x0004e579) postcard_pane_g4_ParamLimits

0xde92,	// (0x0004e579) postcard_pane_g4

0x3b01,	// (0x000441e8) postcard_pane_g5_ParamLimits

0x3b01,	// (0x000441e8) postcard_pane_g5

0x3b16,	// (0x000441fd) postcard_pane_g6_ParamLimits

0x3b16,	// (0x000441fd) postcard_pane_g6

0xde84,	// (0x0004e56b) postcard_pane_g7_ParamLimits

0xde84,	// (0x0004e56b) postcard_pane_g7

0x0006,

0xf335,	// (0x0004fa1c) postcard_pane_g_ParamLimits

0xf335,	// (0x0004fa1c) postcard_pane_g

0x3b2a,	// (0x00044211) main_mp2_pane_g1_ParamLimits

0x3b2a,	// (0x00044211) main_mp2_pane_g1

0x3b36,	// (0x0004421d) main_mp2_pane_g2_ParamLimits

0x3b36,	// (0x0004421d) main_mp2_pane_g2

0x3b42,	// (0x00044229) main_mp2_pane_g3_ParamLimits

0x3b42,	// (0x00044229) main_mp2_pane_g3

0x0002,

0xf344,	// (0x0004fa2b) main_mp2_pane_g_ParamLimits

0xf344,	// (0x0004fa2b) main_mp2_pane_g

0x3b4e,	// (0x00044235) main_mp2_pane_t1_ParamLimits

0x3b4e,	// (0x00044235) main_mp2_pane_t1

0x3b63,	// (0x0004424a) main_mp2_pane_t2_ParamLimits

0x3b63,	// (0x0004424a) main_mp2_pane_t2

0x3b75,	// (0x0004425c) main_mp2_pane_t3_ParamLimits

0x3b75,	// (0x0004425c) main_mp2_pane_t3

0x0002,

0xf34b,	// (0x0004fa32) main_mp2_pane_t_ParamLimits

0xf34b,	// (0x0004fa32) main_mp2_pane_t

0xdea0,	// (0x0004e587) pec_content_pane_ParamLimits

0xdea0,	// (0x0004e587) pec_content_pane

0xd44c,	// (0x0004db33) scroll_pane_cp015

0xdeb2,	// (0x0004e599) pec_attribute_pane_ParamLimits

0xdeb2,	// (0x0004e599) pec_attribute_pane

0x3b87,	// (0x0004426e) pec_content_pane_g1_ParamLimits

0x3b87,	// (0x0004426e) pec_content_pane_g1

0xdec2,	// (0x0004e5a9) pec_content_pane_t1_ParamLimits

0xdec2,	// (0x0004e5a9) pec_content_pane_t1

0xded4,	// (0x0004e5bb) pec_content_pane_t2_ParamLimits

0xded4,	// (0x0004e5bb) pec_content_pane_t2

0x0001,

0x0381,	// (0x00040a68) pec_content_pane_t_ParamLimits

0x0381,	// (0x00040a68) pec_content_pane_t

0x3b93,	// (0x0004427a) list_single_graphic_pane_cp01_ParamLimits

0x3b93,	// (0x0004427a) list_single_graphic_pane_cp01

0xd010,	// (0x0004d6f7) bg_popup_sub_pane_cp04

0xdee6,	// (0x0004e5cd) popup_mup_playback_window_g1

0xdef2,	// (0x0004e5d9) popup_mup_playback_window_t1

0xdf07,	// (0x0004e5ee) popup_mup_playback_window_t2

0x0001,

0x0386,	// (0x00040a6d) popup_mup_playback_window_t

0xdf3e,	// (0x0004e625) main_image_pane_g1_ParamLimits

0xdf3e,	// (0x0004e625) main_image_pane_g1

0xdf81,	// (0x0004e668) scroll_pane_cp018_ParamLimits

0xdf81,	// (0x0004e668) scroll_pane_cp018

0xdf99,	// (0x0004e680) scroll_pane_cp016_ParamLimits

0xdf99,	// (0x0004e680) scroll_pane_cp016

0x3c60,	// (0x00044347) smil2_image_pane_ParamLimits

0x3c60,	// (0x00044347) smil2_image_pane

0x3c90,	// (0x00044377) smil2_root_pane_ParamLimits

0x3c90,	// (0x00044377) smil2_root_pane

0x3cc8,	// (0x000443af) smil2_text_pane_ParamLimits

0x3cc8,	// (0x000443af) smil2_text_pane

0xcda7,	// (0x0004d48e) bg_list_pane_cp06

0xdfd5,	// (0x0004e6bc) grid_radio_pane

0xcda7,	// (0x0004d48e) bg_popup_window_pane_cp06

0xdfdd,	// (0x0004e6c4) main_fmradio_pane_t1

0xefc7,	// (0x0004f6ae) heading_pane_cp04

0xdfeb,	// (0x0004e6d2) main_fmradio_pane_t2

0xefcf,	// (0x0004f6b6) popup_cale_lunar_info_window_g1

0xdff9,	// (0x0004e6e0) main_fmradio_pane_t3

0xefd7,	// (0x0004f6be) popup_cale_lunar_info_window_g2

0xe007,	// (0x0004e6ee) main_fmradio_pane_t4

0x0001,

0xe015,	// (0x0004e6fc) main_fmradio_pane_t5

0x0004,

0x0466,	// (0x00040b4d) popup_cale_lunar_info_window_g

0x039b,	// (0x00040a82) main_fmradio_pane_t

0xe023,	// (0x0004e70a) wait_bar_pane_cp03

0xe02b,	// (0x0004e712) cell_fmradio_pane_ParamLimits

0xe02b,	// (0x0004e712) cell_fmradio_pane

0xde84,	// (0x0004e56b) cell_fmradio_pane_g1_ParamLimits

0xde84,	// (0x0004e56b) cell_fmradio_pane_g1

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp011

0xe03e,	// (0x0004e725) poc_content_pane_ParamLimits

0xe03e,	// (0x0004e725) poc_content_pane

0xe050,	// (0x0004e737) scroll_pane_cp019

0x3d48,	// (0x0004442f) popup_call_poc_act_window_ParamLimits

0x3d48,	// (0x0004442f) popup_call_poc_act_window

0x3d6c,	// (0x00044453) popup_call_poc_inact_window_ParamLimits

0x3d6c,	// (0x00044453) popup_call_poc_inact_window

0x043d,	// (0x00040b24) bg_popup_call_poc_act_pane_g

0xef3f,	// (0x0004f626) bg_popup_call_poc_inact_pane_g1

0xef47,	// (0x0004f62e) bg_popup_call_poc_inact_pane_g2

0xe058,	// (0x0004e73f) popup_call_poc_act_window_g2

0xef4f,	// (0x0004f636) bg_popup_call_poc_inact_pane_g3

0xef57,	// (0x0004f63e) bg_popup_call_poc_inact_pane_g4

0xef5f,	// (0x0004f646) bg_popup_call_poc_inact_pane_g5

0xe060,	// (0x0004e747) popup_call_poc_act_window_t1_ParamLimits

0xe060,	// (0x0004e747) popup_call_poc_act_window_t1

0xe088,	// (0x0004e76f) popup_call_poc_act_window_t2_ParamLimits

0xe088,	// (0x0004e76f) popup_call_poc_act_window_t2

0xe0b0,	// (0x0004e797) popup_call_poc_act_window_t3_ParamLimits

0xe0b0,	// (0x0004e797) popup_call_poc_act_window_t3

0xe0d8,	// (0x0004e7bf) popup_call_poc_act_window_t4_ParamLimits

0xe0d8,	// (0x0004e7bf) popup_call_poc_act_window_t4

0x0003,

0x03a6,	// (0x00040a8d) popup_call_poc_act_window_t_ParamLimits

0x03a6,	// (0x00040a8d) popup_call_poc_act_window_t

0xef67,	// (0x0004f64e) bg_popup_call_poc_inact_pane_g6

0xef6f,	// (0x0004f656) bg_popup_call_poc_inact_pane_g7

0xef77,	// (0x0004f65e) bg_popup_call_poc_inact_pane_g8

0xe0ea,	// (0x0004e7d1) popup_call_poc_inact_window_g2

0xef7f,	// (0x0004f666) bg_popup_call_poc_inact_pane_g9

0x0008,

0x042a,	// (0x00040b11) bg_popup_call_poc_inact_pane_g

0xe0f2,	// (0x0004e7d9) popup_call_poc_inact_window_t1_ParamLimits

0xe0f2,	// (0x0004e7d9) popup_call_poc_inact_window_t1

0xe107,	// (0x0004e7ee) popup_call_poc_inact_window_t2_ParamLimits

0xe107,	// (0x0004e7ee) popup_call_poc_inact_window_t2

0xe11c,	// (0x0004e803) popup_call_poc_inact_window_t3_ParamLimits

0xe11c,	// (0x0004e803) popup_call_poc_inact_window_t3

0x0002,

0x03af,	// (0x00040a96) popup_call_poc_inact_window_t_ParamLimits

0x03af,	// (0x00040a96) popup_call_poc_inact_window_t

0x4592,	// (0x00044c79) context_pane_ParamLimits

0x45f7,	// (0x00044cde) signal_pane_ParamLimits

0xd2a1,	// (0x0004d988) main_call2_pane

0xa723,	// (0x0004ae0a) popup_phob_thumbnail2_window_ParamLimits

0xa723,	// (0x0004ae0a) popup_phob_thumbnail2_window

0xa6b4,	// (0x0004ad9b) aid_hotspot_pointer_arrow_pane

0xa6bc,	// (0x0004ada3) aid_hotspot_pointer_hand_pane

0x40d4,	// (0x000447bb) phob_pre_status_pane_g5

0xcfe4,	// (0x0004d6cb) cams_zoom_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) image_vga_pane_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g2_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g3_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g4_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g5_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g6_ParamLimits

0xd07d,	// (0x0004d764) main_camera_pane_g7_ParamLimits

0xf18f,	// (0x0004f876) main_camera_pane_g_ParamLimits

0xd2a9,	// (0x0004d990) main_camera_pane_t1_ParamLimits

0xd2a9,	// (0x0004d990) main_camera_pane_t2_ParamLimits

0x00e6,	// (0x000407cd) main_camera_pane_t_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_preview_window_pane_cp01_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_preview_window_pane_cp01

0xe131,	// (0x0004e818) popup_phob_thumbnail2_window_g1_ParamLimits

0xe131,	// (0x0004e818) popup_phob_thumbnail2_window_g1

0xcda7,	// (0x0004d48e) call2_cli_visual_pane

0x3da0,	// (0x00044487) popup_call2_audio_conf_window_ParamLimits

0x3da0,	// (0x00044487) popup_call2_audio_conf_window

0x3dc0,	// (0x000444a7) popup_call2_audio_first_window_ParamLimits

0x3dc0,	// (0x000444a7) popup_call2_audio_first_window

0x3e56,	// (0x0004453d) popup_call2_audio_in_window_ParamLimits

0x3e56,	// (0x0004453d) popup_call2_audio_in_window

0x3e9e,	// (0x00044585) popup_call2_audio_out_window_ParamLimits

0x3e9e,	// (0x00044585) popup_call2_audio_out_window

0x3f08,	// (0x000445ef) popup_call2_audio_second_window_ParamLimits

0x3f08,	// (0x000445ef) popup_call2_audio_second_window

0x3f6e,	// (0x00044655) popup_call2_audio_wait_window_ParamLimits

0x3f6e,	// (0x00044655) popup_call2_audio_wait_window

0xcda7,	// (0x0004d48e) bg_popup_call2_act_pane_cp03

0xcff2,	// (0x0004d6d9) list_conf_pane_cp

0xe13d,	// (0x0004e824) popup_call2_audio_conf_window_t1

0xd9ed,	// (0x0004e0d4) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9ed,	// (0x0004e0d4) list_single_graphic_popup_conf2_pane

0xda00,	// (0x0004e0e7) list_highlight_pane_cp04

0xe14b,	// (0x0004e832) list_single_graphic_popup_conf2_pane_g1

0xda11,	// (0x0004e0f8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x03b6,	// (0x00040a9d) list_single_graphic_popup_conf2_pane_g

0xe155,	// (0x0004e83c) list_single_graphic_popup_conf2_pane_t1

0xe163,	// (0x0004e84a) bg_popup_call2_act_pane_cp01_ParamLimits

0xe163,	// (0x0004e84a) bg_popup_call2_act_pane_cp01

0xe1ed,	// (0x0004e8d4) call_type_pane_cp05_ParamLimits

0xe1ed,	// (0x0004e8d4) call_type_pane_cp05

0xe241,	// (0x0004e928) popup_call2_audio_second_window_g1_ParamLimits

0xe241,	// (0x0004e928) popup_call2_audio_second_window_g1

0xe295,	// (0x0004e97c) popup_call2_audio_second_window_g2_ParamLimits

0xe295,	// (0x0004e97c) popup_call2_audio_second_window_g2

0x0002,

0x03bb,	// (0x00040aa2) popup_call2_audio_second_window_g_ParamLimits

0x03bb,	// (0x00040aa2) popup_call2_audio_second_window_g

0xe2fa,	// (0x0004e9e1) popup_call2_audio_second_window_t1_ParamLimits

0xe2fa,	// (0x0004e9e1) popup_call2_audio_second_window_t1

0xe3b5,	// (0x0004ea9c) popup_call2_audio_second_window_t2_ParamLimits

0xe3b5,	// (0x0004ea9c) popup_call2_audio_second_window_t2

0xe408,	// (0x0004eaef) popup_call2_audio_second_window_t3_ParamLimits

0xe408,	// (0x0004eaef) popup_call2_audio_second_window_t3

0x0003,

0x03c2,	// (0x00040aa9) popup_call2_audio_second_window_t_ParamLimits

0x03c2,	// (0x00040aa9) popup_call2_audio_second_window_t

0xcda7,	// (0x0004d48e) bg_popup_call2_in_pane_cp02

0xcdb1,	// (0x0004d498) call_type_pane_cp04

0x3fa8,	// (0x0004468f) popup_call2_audio_wait_window_g1

0x3fb0,	// (0x00044697) popup_call2_audio_wait_window_g2

0x0001,

0xf362,	// (0x0004fa49) popup_call2_audio_wait_window_g

0xcdc9,	// (0x0004d4b0) popup_call2_audio_wait_window_t3

0xe4fb,	// (0x0004ebe2) bg_popup_call2_act_pane_ParamLimits

0xe4fb,	// (0x0004ebe2) bg_popup_call2_act_pane

0xe5bb,	// (0x0004eca2) call_type_pane_cp03_ParamLimits

0xe5bb,	// (0x0004eca2) call_type_pane_cp03

0xe61f,	// (0x0004ed06) popup_call2_audio_first_window_g1_ParamLimits

0xe61f,	// (0x0004ed06) popup_call2_audio_first_window_g1

0xe68f,	// (0x0004ed76) popup_call2_audio_first_window_g2_ParamLimits

0xe68f,	// (0x0004ed76) popup_call2_audio_first_window_g2

0xd986,	// (0x0004e06d) popup_call2_audio_first_window_g3_ParamLimits

0xd986,	// (0x0004e06d) popup_call2_audio_first_window_g3

0x0004,

0xf367,	// (0x0004fa4e) popup_call2_audio_first_window_g_ParamLimits

0xf367,	// (0x0004fa4e) popup_call2_audio_first_window_g

0xe7dc,	// (0x0004eec3) popup_call2_audio_first_window_t1_ParamLimits

0xe7dc,	// (0x0004eec3) popup_call2_audio_first_window_t1

0xe8df,	// (0x0004efc6) popup_call2_audio_first_window_t4_ParamLimits

0xe8df,	// (0x0004efc6) popup_call2_audio_first_window_t4

0xe9c2,	// (0x0004f0a9) popup_call2_audio_first_window_t5_ParamLimits

0xe9c2,	// (0x0004f0a9) popup_call2_audio_first_window_t5

0x0003,

0x03db,	// (0x00040ac2) popup_call2_audio_first_window_t_ParamLimits

0x03db,	// (0x00040ac2) popup_call2_audio_first_window_t

0xd008,	// (0x0004d6ef) bg_popup_call2_act_pane_g1

0xefdf,	// (0x0004f6c6) popup_cale_lunar_info_window_t1

0xefed,	// (0x0004f6d4) popup_cale_lunar_info_window_t2

0xeffb,	// (0x0004f6e2) popup_cale_lunar_info_window_t3

0xcda7,	// (0x0004d48e) bg_popup_call2_bubble_pane

0xeac3,	// (0x0004f1aa) bg_popup_call2_in_pane_cp01_ParamLimits

0xeac3,	// (0x0004f1aa) bg_popup_call2_in_pane_cp01

0xca83,	// (0x0004d16a) call_type_pane_cp02

0x3fb8,	// (0x0004469f) popup_call2_audio_out_window_g1_ParamLimits

0x3fb8,	// (0x0004469f) popup_call2_audio_out_window_g1

0xeb0b,	// (0x0004f1f2) popup_call2_audio_out_window_g2_ParamLimits

0xeb0b,	// (0x0004f1f2) popup_call2_audio_out_window_g2

0x3fe4,	// (0x000446cb) popup_call2_audio_out_window_g3_ParamLimits

0x3fe4,	// (0x000446cb) popup_call2_audio_out_window_g3

0x0003,

0xf372,	// (0x0004fa59) popup_call2_audio_out_window_g_ParamLimits

0xf372,	// (0x0004fa59) popup_call2_audio_out_window_g

0xeb42,	// (0x0004f229) popup_call2_audio_out_window_t1_ParamLimits

0xeb42,	// (0x0004f229) popup_call2_audio_out_window_t1

0xeba1,	// (0x0004f288) popup_call2_audio_out_window_t2_ParamLimits

0xeba1,	// (0x0004f288) popup_call2_audio_out_window_t2

0xebf5,	// (0x0004f2dc) popup_call2_audio_out_window_t3_ParamLimits

0xebf5,	// (0x0004f2dc) popup_call2_audio_out_window_t3

0xec0b,	// (0x0004f2f2) popup_call2_audio_out_window_t4_ParamLimits

0xec0b,	// (0x0004f2f2) popup_call2_audio_out_window_t4

0xec21,	// (0x0004f308) popup_call2_audio_out_window_t5_ParamLimits

0xec21,	// (0x0004f308) popup_call2_audio_out_window_t5

0x0005,

0x03ed,	// (0x00040ad4) popup_call2_audio_out_window_t_ParamLimits

0x03ed,	// (0x00040ad4) popup_call2_audio_out_window_t

0xec85,	// (0x0004f36c) bg_popup_call2_in_pane_ParamLimits

0xec85,	// (0x0004f36c) bg_popup_call2_in_pane

0xece1,	// (0x0004f3c8) popup_call2_audio_in_window_g1_ParamLimits

0xece1,	// (0x0004f3c8) popup_call2_audio_in_window_g1

0xed19,	// (0x0004f400) popup_call2_audio_in_window_g2_ParamLimits

0xed19,	// (0x0004f400) popup_call2_audio_in_window_g2

0xed51,	// (0x0004f438) popup_call2_audio_in_window_g3_ParamLimits

0xed51,	// (0x0004f438) popup_call2_audio_in_window_g3

0x0003,

0x03fa,	// (0x00040ae1) popup_call2_audio_in_window_g_ParamLimits

0x03fa,	// (0x00040ae1) popup_call2_audio_in_window_g

0xeda9,	// (0x0004f490) popup_call2_audio_in_window_t1_ParamLimits

0xeda9,	// (0x0004f490) popup_call2_audio_in_window_t1

0xee29,	// (0x0004f510) popup_call2_audio_in_window_t2_ParamLimits

0xee29,	// (0x0004f510) popup_call2_audio_in_window_t2

0xeea9,	// (0x0004f590) popup_call2_audio_in_window_t3_ParamLimits

0xeea9,	// (0x0004f590) popup_call2_audio_in_window_t3

0xeec3,	// (0x0004f5aa) popup_call2_audio_in_window_t4_ParamLimits

0xeec3,	// (0x0004f5aa) popup_call2_audio_in_window_t4

0xeed5,	// (0x0004f5bc) popup_call2_audio_in_window_t5_ParamLimits

0xeed5,	// (0x0004f5bc) popup_call2_audio_in_window_t5

0xeeea,	// (0x0004f5d1) popup_call2_audio_in_window_t6_ParamLimits

0xeeea,	// (0x0004f5d1) popup_call2_audio_in_window_t6

0x0005,

0x0403,	// (0x00040aea) popup_call2_audio_in_window_t_ParamLimits

0x0403,	// (0x00040aea) popup_call2_audio_in_window_t

0xd008,	// (0x0004d6ef) bg_popup_call2_in_pane_g1

0xf009,	// (0x0004f6f0) popup_cale_lunar_info_window_t4

0x0003,

0x046b,	// (0x00040b52) popup_cale_lunar_info_window_t

0xd010,	// (0x0004d6f7) bg_popup_call2_rect_pane_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_call2_rect_pane

0xcda7,	// (0x0004d48e) call2_cli_visual_graphic_pane

0xcda7,	// (0x0004d48e) call2_cli_visual_text_pane

0xa74a,	// (0x0004ae31) smil_status_volume_pane_g3

0x0002,

0xd028,	// (0x0004d70f) call2_cli_visual_graphic_pane_g1

0xd028,	// (0x0004d70f) call2_cli_visual_graphic_pane_g2

0xd028,	// (0x0004d70f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf37b,	// (0x0004fa62) call2_cli_visual_graphic_pane_g

0xeeff,	// (0x0004f5e6) bg_popup_call2_rect_pane_g1

0xd1c6,	// (0x0004d8ad) bg_popup_call2_rect_pane_g2

0xef07,	// (0x0004f5ee) bg_popup_call2_rect_pane_g3

0xef0f,	// (0x0004f5f6) bg_popup_call2_rect_pane_g4

0xef17,	// (0x0004f5fe) bg_popup_call2_rect_pane_g5

0xef1f,	// (0x0004f606) bg_popup_call2_rect_pane_g6

0xef27,	// (0x0004f60e) bg_popup_call2_rect_pane_g7

0xef2f,	// (0x0004f616) bg_popup_call2_rect_pane_g8

0xef37,	// (0x0004f61e) bg_popup_call2_rect_pane_g9

0x0008,

0x0417,	// (0x00040afe) bg_popup_call2_rect_pane_g

0xef3f,	// (0x0004f626) bg_popup_call2_bubble_pane_g1

0xef47,	// (0x0004f62e) bg_popup_call2_bubble_pane_g2

0xef4f,	// (0x0004f636) bg_popup_call2_bubble_pane_g3

0xef57,	// (0x0004f63e) bg_popup_call2_bubble_pane_g4

0xef5f,	// (0x0004f646) bg_popup_call2_bubble_pane_g5

0xef67,	// (0x0004f64e) bg_popup_call2_bubble_pane_g6

0xef6f,	// (0x0004f656) bg_popup_call2_bubble_pane_g7

0xef77,	// (0x0004f65e) bg_popup_call2_bubble_pane_g8

0xef7f,	// (0x0004f666) bg_popup_call2_bubble_pane_g9

0x0008,

0x042a,	// (0x00040b11) bg_popup_call2_bubble_pane_g

0x1ccb,	// (0x000423b2) aid_cale_week_size_cell_pane

0x2271,	// (0x00042958) aid_cams_cif_uncrop_pane_ParamLimits

0x2271,	// (0x00042958) aid_cams_cif_uncrop_pane

0x23c7,	// (0x00042aae) aid_cams_size_cell_ParamLimits

0x23c7,	// (0x00042aae) aid_cams_size_cell

0x23db,	// (0x00042ac2) grid_cams_pane_ParamLimits

0x23f5,	// (0x00042adc) linegrid_cams_pane_ParamLimits

0x24dc,	// (0x00042bc3) call_video_pane_t1

0x24fa,	// (0x00042be1) call_video_pane_t2

0x0001,

0xf1bd,	// (0x0004f8a4) call_video_pane_t

0x2922,	// (0x00043009) aid_cale_month_size_cell_pane_ParamLimits

0x2922,	// (0x00043009) aid_cale_month_size_cell_pane

0xf3b0,	// (0x0004fa97) smil_status_volume_pane_g

0xa757,	// (0x0004ae3e) volume_smil_pane_ParamLimits

0xa4d8,	// (0x0004abbf) aid_popup2_width_pane

0x1c50,	// (0x00042337) cell_qdial_pane_g4_ParamLimits

0x1c50,	// (0x00042337) cell_qdial_pane_g4

0x3686,	// (0x00043d6d) aid_blid_cardinal_pane_ParamLimits

0x3692,	// (0x00043d79) aid_blid_destination_pane_ParamLimits

0x3692,	// (0x00043d79) aid_blid_destination_pane

0xd010,	// (0x0004d6f7) bg_popup_call_poc_act_pane_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_call_poc_act_pane

0xd010,	// (0x0004d6f7) bg_popup_call_poc_inact_pane_ParamLimits

0xd010,	// (0x0004d6f7) bg_popup_call_poc_inact_pane

0xef87,	// (0x0004f66e) bg_popup_call_poc_act_pane_g1

0xef8f,	// (0x0004f676) bg_popup_call_poc_act_pane_g2

0xef97,	// (0x0004f67e) bg_popup_call_poc_act_pane_g3

0xef57,	// (0x0004f63e) bg_popup_call_poc_act_pane_g4

0xef5f,	// (0x0004f646) bg_popup_call_poc_act_pane_g5

0xef9f,	// (0x0004f686) bg_popup_call_poc_act_pane_g6

0xef6f,	// (0x0004f656) bg_popup_call_poc_act_pane_g7

0xefa7,	// (0x0004f68e) bg_popup_call_poc_act_pane_g8

0xcda7,	// (0x0004d48e) main_usb_pane

0xa6fe,	// (0x0004ade5) popup_cale_lunar_info_window

0x27d4,	// (0x00042ebb) im_reading_pane_t1_ParamLimits

0xd3a4,	// (0x0004da8b) list_im_pane_ParamLimits

0xd3b5,	// (0x0004da9c) scroll_pane_cp07_ParamLimits

0xcda7,	// (0x0004d48e) grid_highlight_pane_cp012

0xd010,	// (0x0004d6f7) mup_scale_pane_ParamLimits

0xde84,	// (0x0004e56b) main_usb_pane_g1_ParamLimits

0xde84,	// (0x0004e56b) main_usb_pane_g1

0x4032,	// (0x00044719) main_usb_pane_g2_ParamLimits

0x4032,	// (0x00044719) main_usb_pane_g2

0x0001,

0xf382,	// (0x0004fa69) main_usb_pane_g_ParamLimits

0xf382,	// (0x0004fa69) main_usb_pane_g

0x4048,	// (0x0004472f) main_usb_pane_t1_ParamLimits

0x4048,	// (0x0004472f) main_usb_pane_t1

0x405a,	// (0x00044741) main_usb_pane_t2_ParamLimits

0x405a,	// (0x00044741) main_usb_pane_t2

0x406c,	// (0x00044753) main_usb_pane_t3_ParamLimits

0x406c,	// (0x00044753) main_usb_pane_t3

0x407e,	// (0x00044765) main_usb_pane_t4_ParamLimits

0x407e,	// (0x00044765) main_usb_pane_t4

0x4090,	// (0x00044777) main_usb_pane_t5_ParamLimits

0x4090,	// (0x00044777) main_usb_pane_t5

0x40a2,	// (0x00044789) main_usb_pane_t6_ParamLimits

0x40a2,	// (0x00044789) main_usb_pane_t6

0x0005,

0xf387,	// (0x0004fa6e) main_usb_pane_t_ParamLimits

0x3635,	// (0x00043d1c) aid_text_placing

0x363e,	// (0x00043d25) main_location2_pane_t1_ParamLimits

0x3650,	// (0x00043d37) main_location2_pane_t2_ParamLimits

0x3662,	// (0x00043d49) main_location2_pane_t3_ParamLimits

0x3674,	// (0x00043d5b) main_location2_pane_t4_ParamLimits

0x3674,	// (0x00043d5b) main_location2_pane_t4

0xf278,	// (0x0004f95f) main_location2_pane_t_ParamLimits

0xd03e,	// (0x0004d725) find_pinb_pane_g2_ParamLimits

0xd03e,	// (0x0004d725) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0004f7a7) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0004f7a7) find_pinb_pane_g

0xd04a,	// (0x0004d731) find_pinb_pane_t1_ParamLimits

0xd05c,	// (0x0004d743) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0004f7ac) find_pinb_pane_t_ParamLimits

0xcda7,	// (0x0004d48e) main_call3_pane

0x2e0d,	// (0x000434f4) cale_month_day_heading_pane_t1_ParamLimits

0x2e93,	// (0x0004357a) cale_month_day_heading_pane_t2_ParamLimits

0x2f0c,	// (0x000435f3) cale_month_day_heading_pane_t3_ParamLimits

0x2f85,	// (0x0004366c) cale_month_day_heading_pane_t4_ParamLimits

0x3006,	// (0x000436ed) cale_month_day_heading_pane_t5_ParamLimits

0x308f,	// (0x00043776) cale_month_day_heading_pane_t6_ParamLimits

0x3118,	// (0x000437ff) cale_month_day_heading_pane_t7_ParamLimits

0xf1e2,	// (0x0004f8c9) cale_month_day_heading_pane_t_ParamLimits

0xd5ec,	// (0x0004dcd3) smil_status_volume_pane

0x3ac5,	// (0x000441ac) postcard_address_pane_ParamLimits

0x3ac5,	// (0x000441ac) postcard_address_pane

0x3ad7,	// (0x000441be) postcard_message_pane_ParamLimits

0x3ad7,	// (0x000441be) postcard_message_pane

0x4010,	// (0x000446f7) call2_cli_visual_pane_t1_ParamLimits

0x4010,	// (0x000446f7) call2_cli_visual_pane_t1

0x4855,	// (0x00044f3c) postcard_message_pane_t1_ParamLimits

0x4855,	// (0x00044f3c) postcard_message_pane_t1

0x483d,	// (0x00044f24) postcard_address_pane_t1_ParamLimits

0x483d,	// (0x00044f24) postcard_address_pane_t1

0x4829,	// (0x00044f10) popup_call3_audio_in_window_ParamLimits

0x4829,	// (0x00044f10) popup_call3_audio_in_window

0x46b4,	// (0x00044d9b) bg_popup_call3_in_pane_ParamLimits

0x46b4,	// (0x00044d9b) bg_popup_call3_in_pane

0x472a,	// (0x00044e11) popup_call3_audio_in_window_g1_ParamLimits

0x472a,	// (0x00044e11) popup_call3_audio_in_window_g1

0x474a,	// (0x00044e31) popup_call3_audio_in_window_g2_ParamLimits

0x474a,	// (0x00044e31) popup_call3_audio_in_window_g2

0x476a,	// (0x00044e51) popup_call3_audio_in_window_g3_ParamLimits

0x476a,	// (0x00044e51) popup_call3_audio_in_window_g3

0x0003,

0xf3b7,	// (0x0004fa9e) popup_call3_audio_in_window_g_ParamLimits

0xf3b7,	// (0x0004fa9e) popup_call3_audio_in_window_g

0x479b,	// (0x00044e82) popup_call3_audio_in_window_t1_ParamLimits

0x479b,	// (0x00044e82) popup_call3_audio_in_window_t1

0x47d9,	// (0x00044ec0) popup_call3_audio_in_window_t2_ParamLimits

0x47d9,	// (0x00044ec0) popup_call3_audio_in_window_t2

0x4817,	// (0x00044efe) popup_call3_audio_in_window_t3_ParamLimits

0x4817,	// (0x00044efe) popup_call3_audio_in_window_t3

0x0002,

0xf3c0,	// (0x0004faa7) popup_call3_audio_in_window_t_ParamLimits

0xf3c0,	// (0x0004faa7) popup_call3_audio_in_window_t

0xd2a1,	// (0x0004d988) bg_popup_call3_rect_pane

0xeeff,	// (0x0004f5e6) bg_popup_call3_rect_pane_g1

0xd1c6,	// (0x0004d8ad) bg_popup_call3_rect_pane_g2

0xef07,	// (0x0004f5ee) bg_popup_call3_rect_pane_g3

0xef0f,	// (0x0004f5f6) bg_popup_call3_rect_pane_g4

0xef17,	// (0x0004f5fe) bg_popup_call3_rect_pane_g5

0xef1f,	// (0x0004f606) bg_popup_call3_rect_pane_g6

0xef27,	// (0x0004f60e) bg_popup_call3_rect_pane_g7

0xc935,	// (0x0004d01c) mup_visualizer_osc_pane

0xc935,	// (0x0004d01c) mup_visualizer_spec_pane

0x46e4,	// (0x00044dcb) call3_video_qcif_pane_ParamLimits

0x46e4,	// (0x00044dcb) call3_video_qcif_pane

0x46f7,	// (0x00044dde) call3_video_qcif_uncrop_pane_ParamLimits

0x46f7,	// (0x00044dde) call3_video_qcif_uncrop_pane

0x4705,	// (0x00044dec) call3_video_subqcif_pane_ParamLimits

0x4705,	// (0x00044dec) call3_video_subqcif_pane

0x4719,	// (0x00044e00) call3_video_subqcif_uncrop_pane_ParamLimits

0x4719,	// (0x00044e00) call3_video_subqcif_uncrop_pane

0x478a,	// (0x00044e71) popup_call3_audio_in_window_g4_ParamLimits

0x478a,	// (0x00044e71) popup_call3_audio_in_window_g4

0xc935,	// (0x0004d01c) mup_spec_half_pane

0xc935,	// (0x0004d01c) mup_spec_half_pane_cp

0xc935,	// (0x0004d01c) mup_osc_middle_pane

0xd2d7,	// (0x0004d9be) mup_visualizer_osc_pane_g1

0x4667,	// (0x00044d4e) mup_spec_bar_pane_ParamLimits

0x4667,	// (0x00044d4e) mup_spec_bar_pane

0xd2d7,	// (0x0004d9be) mup_spec_bar_pane_g1

0xd2d7,	// (0x0004d9be) mup_spec_bar_pane_g2

0x0001,

0x02ed,	// (0x000409d4) mup_spec_bar_pane_g

0x1ccb,	// (0x000423b2) aid_cale_week_size_cell_pane_ParamLimits

0x1ce5,	// (0x000423cc) bg_cale_heading_pane_ParamLimits

0xd203,	// (0x0004d8ea) bg_cale_pane_cp01_ParamLimits

0x1cfd,	// (0x000423e4) cale_week_corner_pane_ParamLimits

0x1d1c,	// (0x00042403) cale_week_day_heading_pane_ParamLimits

0x1d39,	// (0x00042420) cale_week_scroll_pane_g1_ParamLimits

0x1d4c,	// (0x00042433) cale_week_scroll_pane_g2_ParamLimits

0x1d64,	// (0x0004244b) cale_week_scroll_pane_g3_ParamLimits

0x1d7c,	// (0x00042463) cale_week_scroll_pane_g4_ParamLimits

0x1d94,	// (0x0004247b) cale_week_scroll_pane_g5_ParamLimits

0x1db4,	// (0x0004249b) cale_week_scroll_pane_g6_ParamLimits

0x1dd4,	// (0x000424bb) cale_week_scroll_pane_g7_ParamLimits

0x1df4,	// (0x000424db) cale_week_scroll_pane_g8_ParamLimits

0x1e18,	// (0x000424ff) cale_week_scroll_pane_g9_ParamLimits

0x1e30,	// (0x00042517) cale_week_scroll_pane_g10_ParamLimits

0x1e48,	// (0x0004252f) cale_week_scroll_pane_g11_ParamLimits

0x1e60,	// (0x00042547) cale_week_scroll_pane_g12_ParamLimits

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g13_ParamLimits

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g14_ParamLimits

0x1e78,	// (0x0004255f) cale_week_scroll_pane_g15_ParamLimits

0xf13a,	// (0x0004f821) cale_week_scroll_pane_g_ParamLimits

0x1eb4,	// (0x0004259b) cale_week_time_pane_ParamLimits

0x1ed8,	// (0x000425bf) grid_cale_week_pane_ParamLimits

0xd220,	// (0x0004d907) listscroll_cale_week_pane_t1

0xd232,	// (0x0004d919) scroll_pane_cp08_ParamLimits

0x2982,	// (0x00043069) cale_month_corner_pane_ParamLimits

0xd5c2,	// (0x0004dca9) cale_month_pane_t1

0x2da0,	// (0x00043487) cale_month_week_pane_ParamLimits

0x34b5,	// (0x00043b9c) popup_call_status_window_g1_ParamLimits

0x34c9,	// (0x00043bb0) popup_call_status_window_g2_ParamLimits

0x34dd,	// (0x00043bc4) popup_call_status_window_g3_ParamLimits

0xf217,	// (0x0004f8fe) popup_call_status_window_g_ParamLimits

0xd97e,	// (0x0004e065) aid_call2_pane

0x0e30,	// (0x00041517) msg_header_pane_g1

0x3ac5,	// (0x000441ac) postcard_address2_pane_ParamLimits

0x3ac5,	// (0x000441ac) postcard_address2_pane

0x3ad7,	// (0x000441be) postcard_message2_pane_ParamLimits

0x3ad7,	// (0x000441be) postcard_message2_pane

0x4605,	// (0x00044cec) message2_row_pane_ParamLimits

0x4605,	// (0x00044cec) message2_row_pane

0x4621,	// (0x00044d08) address2_row_pane_ParamLimits

0x4621,	// (0x00044d08) address2_row_pane

0x4634,	// (0x00044d1b) postcard_message2_row_pane_g1

0x463c,	// (0x00044d23) postcard_message2_row_pane_t1

0x4634,	// (0x00044d1b) address2_row_pane_g1

0x463c,	// (0x00044d23) address2_row_pane_t1

0x2208,	// (0x000428ef) aid_size_cell_vorec

0xcda7,	// (0x0004d48e) main_rss_pane

0x464a,	// (0x00044d31) rss_list_single_pane_ParamLimits

0x464a,	// (0x00044d31) rss_list_single_pane

0x4658,	// (0x00044d3f) rss_list_single_pane_t1

0x4658,	// (0x00044d3f) rss_list_single_pane_t2

0x0001,

0xf3ab,	// (0x0004fa92) rss_list_single_pane_t

0xcda7,	// (0x0004d48e) main_camera2_pane

0xcda7,	// (0x0004d48e) main_video2_pane

0xa76c,	// (0x0004ae53) cams_zoom_pane_cp2_ParamLimits

0xa76c,	// (0x0004ae53) cams_zoom_pane_cp2

0xa76c,	// (0x0004ae53) image2_vga_pane_ParamLimits

0xa76c,	// (0x0004ae53) image2_vga_pane

0xa77a,	// (0x0004ae61) main_camera2_pane_g1_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g1

0xa77a,	// (0x0004ae61) main_camera2_pane_g2_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g2

0xa77a,	// (0x0004ae61) main_camera2_pane_g3_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g3

0xa77a,	// (0x0004ae61) main_camera2_pane_g4_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g4

0xa77a,	// (0x0004ae61) main_camera2_pane_g5_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g5

0xa77a,	// (0x0004ae61) main_camera2_pane_g6_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g6

0xa77a,	// (0x0004ae61) main_camera2_pane_g7_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g7

0xa77a,	// (0x0004ae61) main_camera2_pane_g8_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g8

0x0008,

0xf3c7,	// (0x0004faae) main_camera2_pane_g_ParamLimits

0xf3c7,	// (0x0004faae) main_camera2_pane_g

0x487f,	// (0x00044f66) main_camera2_pane_t1_ParamLimits

0x487f,	// (0x00044f66) main_camera2_pane_t1

0x487f,	// (0x00044f66) main_camera2_pane_t2_ParamLimits

0x487f,	// (0x00044f66) main_camera2_pane_t2

0x487f,	// (0x00044f66) main_camera2_pane_t3_ParamLimits

0x487f,	// (0x00044f66) main_camera2_pane_t3

0x487f,	// (0x00044f66) main_camera2_pane_t4_ParamLimits

0x487f,	// (0x00044f66) main_camera2_pane_t4

0x0006,

0xf3da,	// (0x0004fac1) main_camera2_pane_t_ParamLimits

0xf3da,	// (0x0004fac1) main_camera2_pane_t

0xa79c,	// (0x0004ae83) cams_zoom_pane_cp4_ParamLimits

0xa79c,	// (0x0004ae83) cams_zoom_pane_cp4

0x4893,	// (0x00044f7a) image2_cif_pane_ParamLimits

0x4893,	// (0x00044f7a) image2_cif_pane

0xcfe4,	// (0x0004d6cb) image2_subqcif_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) image2_subqcif_pane

0x48a1,	// (0x00044f88) main_video2_pane_g1_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g1

0x48a1,	// (0x00044f88) main_video2_pane_g2_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g2

0x48a1,	// (0x00044f88) main_video2_pane_g3_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g3

0x48a1,	// (0x00044f88) main_video2_pane_g4_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g4

0x48a1,	// (0x00044f88) main_video2_pane_g5_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g5

0x48a1,	// (0x00044f88) main_video2_pane_g6_ParamLimits

0x48a1,	// (0x00044f88) main_video2_pane_g6

0x0005,

0xf3e9,	// (0x0004fad0) main_video2_pane_g_ParamLimits

0xf3e9,	// (0x0004fad0) main_video2_pane_g

0x48af,	// (0x00044f96) main_video2_pane_t1_ParamLimits

0x48af,	// (0x00044f96) main_video2_pane_t1

0x48af,	// (0x00044f96) main_video2_pane_t2_ParamLimits

0x48af,	// (0x00044f96) main_video2_pane_t2

0x48af,	// (0x00044f96) main_video2_pane_t3_ParamLimits

0x48af,	// (0x00044f96) main_video2_pane_t3

0x0002,

0xf3f6,	// (0x0004fadd) main_video2_pane_t_ParamLimits

0xf3f6,	// (0x0004fadd) main_video2_pane_t

0x4136,	// (0x0004481d) call_muted_g2

0x0001,

0xf3a6,	// (0x0004fa8d) call_muted_g

0xcda7,	// (0x0004d48e) main_mup2_pane

0xe738,	// (0x0004ee1f) main_mup2_pane_g1_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g1

0xe738,	// (0x0004ee1f) main_mup2_pane_g2_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g2

0xd2d7,	// (0x0004d9be) main_mup_pane_g13_cp1

0xc935,	// (0x0004d01c) mup_volume_pane_cp1

0xe738,	// (0x0004ee1f) main_mup2_pane_g4_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g4

0xe738,	// (0x0004ee1f) main_mup2_pane_g5_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g5

0xe738,	// (0x0004ee1f) main_mup2_pane_g6_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g6

0xe738,	// (0x0004ee1f) main_mup2_pane_g7_ParamLimits

0xe738,	// (0x0004ee1f) main_mup2_pane_g7

0x0006,

0xf3fd,	// (0x0004fae4) main_mup2_pane_g_ParamLimits

0xf3fd,	// (0x0004fae4) main_mup2_pane_g

0xe746,	// (0x0004ee2d) main_mup2_pane_t1_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t1

0xe746,	// (0x0004ee2d) main_mup2_pane_t2_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t2

0xe746,	// (0x0004ee2d) main_mup2_pane_t3_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t3

0xe746,	// (0x0004ee2d) main_mup2_pane_t4_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t4

0xe746,	// (0x0004ee2d) main_mup2_pane_t5_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t5

0xe746,	// (0x0004ee2d) main_mup2_pane_t6_ParamLimits

0xe746,	// (0x0004ee2d) main_mup2_pane_t6

0x0005,

0xf40c,	// (0x0004faf3) main_mup2_pane_t_ParamLimits

0xf40c,	// (0x0004faf3) main_mup2_pane_t

0xe75a,	// (0x0004ee41) mup2_visualizer_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup2_visualizer_pane

0xe75a,	// (0x0004ee41) mup_progress_pane_cp_ParamLimits

0xe75a,	// (0x0004ee41) mup_progress_pane_cp

0x48c3,	// (0x00044faa) mup_volume_pane_cp_ParamLimits

0x48c3,	// (0x00044faa) mup_volume_pane_cp

0xd07d,	// (0x0004d764) mup2_visualizer_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) mup2_visualizer_pane_g1

0xd08b,	// (0x0004d772) mup2_visualizer_pane_g2_ParamLimits

0xd08b,	// (0x0004d772) mup2_visualizer_pane_g2

0xd08b,	// (0x0004d772) mup2_visualizer_pane_g3_ParamLimits

0xd08b,	// (0x0004d772) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0004f7b1) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0004f7b1) mup2_visualizer_pane_g

0xdfcd,	// (0x0004e6b4) aid_size_cell_fmradio

0x42e8,	// (0x000449cf) aid_height_parent_landcape

0xd433,	// (0x0004db1a) wml_content_pane_cp

0xd43b,	// (0x0004db22) wml_tabs_pane

0xd444,	// (0x0004db2b) popup_wml_miniature_window

0xd44c,	// (0x0004db33) scroll_pane_cp021

0xd460,	// (0x0004db47) wml_content_pane_comp8

0xcda7,	// (0x0004d48e) bg_popup_sub_pane_cp05

0x48d9,	// (0x00044fc0) popup_wml_miniature_window_g1

0x48e1,	// (0x00044fc8) wml_miniature_view_pane

0x48e9,	// (0x00044fd0) aid_size_wml_view

0x48f1,	// (0x00044fd8) wml_miniature_view_pane_g1

0x48fa,	// (0x00044fe1) wml_miniature_view_pane_g2

0x4903,	// (0x00044fea) wml_miniature_view_pane_g3

0x490b,	// (0x00044ff2) wml_miniature_view_pane_g4

0x4913,	// (0x00044ffa) wml_miniature_view_pane_g5

0x491b,	// (0x00045002) wml_miniature_view_pane_g6

0x4923,	// (0x0004500a) wml_miniature_view_pane_g7

0x492b,	// (0x00045012) wml_miniature_view_pane_g8

0x0007,

0xf419,	// (0x0004fb00) wml_miniature_view_pane_g

0x4933,	// (0x0004501a) background_graphic_ParamLimits

0x4933,	// (0x0004501a) background_graphic

0x493f,	// (0x00045026) wml_tabs_2_pane

0x4948,	// (0x0004502f) wml_tabs_3_pane_ParamLimits

0x4948,	// (0x0004502f) wml_tabs_3_pane

0x495a,	// (0x00045041) wml_tabs_4_pane_ParamLimits

0x495a,	// (0x00045041) wml_tabs_4_pane

0x4970,	// (0x00045057) wml_tabs_5_pane_ParamLimits

0x4970,	// (0x00045057) wml_tabs_5_pane

0x498a,	// (0x00045071) wml_tabs_pane_g2_ParamLimits

0x498a,	// (0x00045071) wml_tabs_pane_g2

0x499f,	// (0x00045086) wml_tabs_pane_g3_ParamLimits

0x499f,	// (0x00045086) wml_tabs_pane_g3

0x49b4,	// (0x0004509b) wml_tabs_2_active_pane_ParamLimits

0x49b4,	// (0x0004509b) wml_tabs_2_active_pane

0x49b4,	// (0x0004509b) wml_tabs_2_passive_pane_ParamLimits

0x49b4,	// (0x0004509b) wml_tabs_2_passive_pane

0x49c2,	// (0x000450a9) wml_tabs_3_active_pane_cp_ParamLimits

0x49c2,	// (0x000450a9) wml_tabs_3_active_pane_cp

0x49d7,	// (0x000450be) wml_tabs_3_passive_pane_ParamLimits

0x49d7,	// (0x000450be) wml_tabs_3_passive_pane

0x49ea,	// (0x000450d1) wml_tabs_3_passive_pane_cp_ParamLimits

0x49ea,	// (0x000450d1) wml_tabs_3_passive_pane_cp

0x4a01,	// (0x000450e8) tabs_4_active_pane

0x4a09,	// (0x000450f0) tabs_4_passive_pane

0x4a13,	// (0x000450fa) tabs_4_passive_pane_cp

0x4a1b,	// (0x00045102) tabs_4_passive_pane_cp2

0x402a,	// (0x00044711) aid_height_text

0xe75a,	// (0x0004ee41) mup_volume_cont_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup_volume_cont_pane

0xc935,	// (0x0004d01c) aid_size_cell_pinb

0xc935,	// (0x0004d01c) aid_size_list_pinb

0xe75a,	// (0x0004ee41) mup2_volume_cont_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup2_volume_cont_pane

0xa7aa,	// (0x0004ae91) mup2_volume_cont_pane_g1_ParamLimits

0xa7aa,	// (0x0004ae91) mup2_volume_cont_pane_g1

0x16c0,	// (0x00041da7) aid_size_cell_touch_ParamLimits

0x16c0,	// (0x00041da7) aid_size_cell_touch

0x18ed,	// (0x00041fd4) touch_pane_ParamLimits

0x18ed,	// (0x00041fd4) touch_pane

0xc935,	// (0x0004d01c) main_rss2_pane

0x4a2e,	// (0x00045115) listscroll_rss2_pane

0x4a37,	// (0x0004511e) rss2_navigation_pane

0x4a3f,	// (0x00045126) list_rss2_pane

0xdac3,	// (0x0004e1aa) scroll_pane_cp22

0x4a47,	// (0x0004512e) rss2_navigation_pane_g1

0x4a50,	// (0x00045137) rss2_navigation_pane_g2

0x4a58,	// (0x0004513f) rss2_navigation_pane_g3

0x0002,

0xf42a,	// (0x0004fb11) rss2_navigation_pane_g

0x4a60,	// (0x00045147) rss2_navigation_pane_t1

0x4a6e,	// (0x00045155) rss2_list_single_pane_ParamLimits

0x4a6e,	// (0x00045155) rss2_list_single_pane

0x4a83,	// (0x0004516a) rss2_list_single_pane_t2

0x4a91,	// (0x00045178) rss2_list_single_pane_t3_ParamLimits

0x4a91,	// (0x00045178) rss2_list_single_pane_t3

0x4aae,	// (0x00045195) rss2_list_single_pane_t4

0x33a2,	// (0x00043a89) smil_status_pane_g1

0xcfe4,	// (0x0004d6cb) main_image2_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_image2_pane

0xa77a,	// (0x0004ae61) main_camera2_pane_g9_ParamLimits

0xa77a,	// (0x0004ae61) main_camera2_pane_g9

0x487f,	// (0x00044f66) main_camera2_pane_t5_ParamLimits

0x487f,	// (0x00044f66) main_camera2_pane_t5

0xa788,	// (0x0004ae6f) main_camera2_pane_t6_ParamLimits

0xa788,	// (0x0004ae6f) main_camera2_pane_t6

0x4abc,	// (0x000451a3) main_image2_pane_g1_ParamLimits

0x4abc,	// (0x000451a3) main_image2_pane_g1

0x3cfe,	// (0x000443e5) smil2_video_pane_ParamLimits

0x3cfe,	// (0x000443e5) smil2_video_pane

0xa4f4,	// (0x0004abdb) aid_zoom_text_primary_cp

0xa533,	// (0x0004ac1a) popup_preview_fixed_window

0xd39c,	// (0x0004da83) im_reading_pane_g1

0x4871,	// (0x00044f58) cams2_bc_adjust_pane_cp_ParamLimits

0x4871,	// (0x00044f58) cams2_bc_adjust_pane_cp

0xe75a,	// (0x0004ee41) cams2_bc_adjust_pane_ParamLimits

0xe75a,	// (0x0004ee41) cams2_bc_adjust_pane

0xd2d7,	// (0x0004d9be) cams2_bc_adjust_pane_g1

0xc935,	// (0x0004d01c) cams2_slider_pane

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g1

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g2

0x0006,

0x0530,	// (0x00040c17) cams2_slider_pane_g

0x19b5,	// (0x0004209c) calc_display_pane_ParamLimits

0x19da,	// (0x000420c1) calc_paper_pane_ParamLimits

0x19fd,	// (0x000420e4) grid_calc_pane_ParamLimits

0xa659,	// (0x0004ad40) popup_clock_digital_window_t1_ParamLimits

0xdf6a,	// (0x0004e651) main_image_pane_t1

0x1997,	// (0x0004207e) aid_size_cell_calc_ParamLimits

0x1997,	// (0x0004207e) aid_size_cell_calc

0x432e,	// (0x00044a15) popup_blid_sat_info2_window_ParamLimits

0x432e,	// (0x00044a15) popup_blid_sat_info2_window

0x4ad2,	// (0x000451b9) aid_size_cell_blid

0x4893,	// (0x00044f7a) bg_popup_window_pane_cp07

0x4aef,	// (0x000451d6) grid_popup_blid_pane

0x4af9,	// (0x000451e0) heading_pane_cp05_ParamLimits

0x4af9,	// (0x000451e0) heading_pane_cp05

0x4bc3,	// (0x000452aa) cell_popup_blid_pane_ParamLimits

0x4bc3,	// (0x000452aa) cell_popup_blid_pane

0x4be7,	// (0x000452ce) cell_popup_blid_pane_g1

0x4bef,	// (0x000452d6) cell_popup_blid_pane_t1

0xe75a,	// (0x0004ee41) mup2_indicator_pane_ParamLimits

0xe75a,	// (0x0004ee41) mup2_indicator_pane

0xc935,	// (0x0004d01c) mup2_visualizer_osc_pane

0x48c3,	// (0x00044faa) mup2_visualizer_spec_pane_ParamLimits

0x48c3,	// (0x00044faa) mup2_visualizer_spec_pane

0xc935,	// (0x0004d01c) mup2_spec_half_pane

0xc935,	// (0x0004d01c) mup2_spec_half_pane_cp

0x4bfd,	// (0x000452e4) mup2_spec_bar_pane_ParamLimits

0x4bfd,	// (0x000452e4) mup2_spec_bar_pane

0xd2d7,	// (0x0004d9be) mup2_spec_bar_pane_g1

0x4c1c,	// (0x00045303) mup2_spec_bar_pane_g2

0x0001,

0xf448,	// (0x0004fb2f) mup2_spec_bar_pane_g

0xc935,	// (0x0004d01c) mup2_osc_middle_pane

0xd2d7,	// (0x0004d9be) mup2_visualizer_osc_pane_g1

0xc9b4,	// (0x0004d09b) popup_number_entry_window_t1_ParamLimits

0xc9c7,	// (0x0004d0ae) popup_number_entry_window_t2_ParamLimits

0xc9d9,	// (0x0004d0c0) popup_number_entry_window_t3_ParamLimits

0x193f,	// (0x00042026) popup_number_entry_window_t5_ParamLimits

0x193f,	// (0x00042026) popup_number_entry_window_t5

0xf06b,	// (0x0004f752) popup_number_entry_window_t_ParamLimits

0xc9eb,	// (0x0004d0d2) text_title_cp2_ParamLimits

0xa6c4,	// (0x0004adab) aid_hotspot_pointer_text2_pane

0xa6ea,	// (0x0004add1) main_viewer_pane_g9_ParamLimits

0xa6ea,	// (0x0004add1) main_viewer_pane_g9

0xd5c2,	// (0x0004dca9) cale_month_pane_t1_ParamLimits

0xd5ff,	// (0x0004dce6) bg_cale_pane_ParamLimits

0xd617,	// (0x0004dcfe) list_cale_pane_ParamLimits

0xd628,	// (0x0004dd0f) listscroll_cale_day_pane_t1

0xd63a,	// (0x0004dd21) scroll_pane_cp09_ParamLimits

0x375d,	// (0x00043e44) main_mup_eq_pane_t1_ParamLimits

0x375d,	// (0x00043e44) main_mup_eq_pane_t1

0x3777,	// (0x00043e5e) main_mup_eq_pane_t2_ParamLimits

0x3777,	// (0x00043e5e) main_mup_eq_pane_t2

0x3791,	// (0x00043e78) main_mup_eq_pane_t3_ParamLimits

0x3791,	// (0x00043e78) main_mup_eq_pane_t3

0x37ad,	// (0x00043e94) main_mup_eq_pane_t4_ParamLimits

0x37ad,	// (0x00043e94) main_mup_eq_pane_t4

0x37c9,	// (0x00043eb0) main_mup_eq_pane_t5_ParamLimits

0x37c9,	// (0x00043eb0) main_mup_eq_pane_t5

0x37e5,	// (0x00043ecc) main_mup_eq_pane_t6_ParamLimits

0x37e5,	// (0x00043ecc) main_mup_eq_pane_t6

0x37f9,	// (0x00043ee0) main_mup_eq_pane_t7_ParamLimits

0x37f9,	// (0x00043ee0) main_mup_eq_pane_t7

0x380d,	// (0x00043ef4) main_mup_eq_pane_t8_ParamLimits

0x380d,	// (0x00043ef4) main_mup_eq_pane_t8

0x3821,	// (0x00043f08) main_mup_eq_pane_t9_ParamLimits

0x3821,	// (0x00043f08) main_mup_eq_pane_t9

0x383b,	// (0x00043f22) main_mup_eq_pane_t10_ParamLimits

0x383b,	// (0x00043f22) main_mup_eq_pane_t10

0x0009,

0xf2ca,	// (0x0004f9b1) main_mup_eq_pane_t_ParamLimits

0xf2ca,	// (0x0004f9b1) main_mup_eq_pane_t

0x38ea,	// (0x00043fd1) mup_equalizer_pane_cp5_ParamLimits

0x38fe,	// (0x00043fe5) mup_equalizer_pane_cp6_ParamLimits

0x3912,	// (0x00043ff9) mup_equalizer_pane_cp7_ParamLimits

0xc935,	// (0x0004d01c) main_gallery_pane

0x4686,	// (0x00044d6d) smil2_volume_pane

0x468e,	// (0x00044d75) smil_status_volume_pane_g1_ParamLimits

0x46a1,	// (0x00044d88) smil_status_volume_pane_g2_ParamLimits

0xa74a,	// (0x0004ae31) smil_status_volume_pane_g3_ParamLimits

0xf3b0,	// (0x0004fa97) smil_status_volume_pane_g_ParamLimits

0x4893,	// (0x00044f7a) bg_popup_window_pane_cp07_ParamLimits

0x4ada,	// (0x000451c1) blid_firmament_pane

0xcfe4,	// (0x0004d6cb) aid_size_cell_gallery_ParamLimits

0xcfe4,	// (0x0004d6cb) aid_size_cell_gallery

0xcfe4,	// (0x0004d6cb) grid_gallery_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) grid_gallery_pane

0x4893,	// (0x00044f7a) cell_gallery_pane_ParamLimits

0x4893,	// (0x00044f7a) cell_gallery_pane

0xcfe4,	// (0x0004d6cb) bg_cell_gallery_focus_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_cell_gallery_focus_pane

0xd07d,	// (0x0004d764) cell_gallery_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) cell_gallery_pane_g1

0xd07d,	// (0x0004d764) cell_gallery_pane_g2_ParamLimits

0xd07d,	// (0x0004d764) cell_gallery_pane_g2

0xd07d,	// (0x0004d764) cell_gallery_pane_g3_ParamLimits

0xd07d,	// (0x0004d764) cell_gallery_pane_g3

0xd08b,	// (0x0004d772) cell_gallery_pane_g4_ParamLimits

0xd08b,	// (0x0004d772) cell_gallery_pane_g4

0x0003,

0x055b,	// (0x00040c42) cell_gallery_pane_g_ParamLimits

0x055b,	// (0x00040c42) cell_gallery_pane_g

0x4c26,	// (0x0004530d) bg_cell_gallery_focus_pane_g1

0x4c2e,	// (0x00045315) bg_cell_gallery_focus_pane_g2

0x4c36,	// (0x0004531d) bg_cell_gallery_focus_pane_g3

0x4c3e,	// (0x00045325) bg_cell_gallery_focus_pane_g4

0x4c46,	// (0x0004532d) bg_cell_gallery_focus_pane_g5

0x4c4e,	// (0x00045335) bg_cell_gallery_focus_pane_g6

0x4c56,	// (0x0004533d) bg_cell_gallery_focus_pane_g7

0x4c5e,	// (0x00045345) bg_cell_gallery_focus_pane_g8

0x0007,

0xf44d,	// (0x0004fb34) bg_cell_gallery_focus_pane_g

0x4c66,	// (0x0004534d) aid_firma_cardinal

0x4c7a,	// (0x00045361) blid_firmament_pane_t1

0x4c91,	// (0x00045378) blid_firmament_pane_t2

0x4ca8,	// (0x0004538f) blid_firmament_pane_t3

0x4cbf,	// (0x000453a6) blid_firmament_pane_t4

0x0003,

0xf45e,	// (0x0004fb45) blid_firmament_pane_t

0x4cd6,	// (0x000453bd) blid_sat_info_pane

0xd2d7,	// (0x0004d9be) blid_sat_info_pane_g1

0xd2d7,	// (0x0004d9be) blid_sat_info_pane_g2

0x0001,

0x02ed,	// (0x000409d4) blid_sat_info_pane_g

0x4ce6,	// (0x000453cd) blid_sat_info_pane_t1

0x4cf4,	// (0x000453db) smil2_volume_content_pane

0x4cfd,	// (0x000453e4) smil2_volume_pane_g1

0xe705,	// (0x0004edec) smil2_volume_content_pane_g1

0x4d05,	// (0x000453ec) smil2_volume_content_pane_g2

0x4d0e,	// (0x000453f5) smil2_volume_content_pane_g3

0x4d17,	// (0x000453fe) smil2_volume_content_pane_g4

0x4d20,	// (0x00045407) smil2_volume_content_pane_g5

0x4d29,	// (0x00045410) smil2_volume_content_pane_g6

0x4d32,	// (0x00045419) smil2_volume_content_pane_g7

0x4d3b,	// (0x00045422) smil2_volume_content_pane_g8

0x4d44,	// (0x0004542b) smil2_volume_content_pane_g9

0x4d4d,	// (0x00045434) smil2_volume_content_pane_g10

0x0009,

0xf467,	// (0x0004fb4e) smil2_volume_content_pane_g

0x1f8c,	// (0x00042673) cale_week_day_heading_pane_t1_ParamLimits

0x1fb6,	// (0x0004269d) cale_week_day_heading_pane_t2_ParamLimits

0x1fe5,	// (0x000426cc) cale_week_day_heading_pane_t3_ParamLimits

0x2014,	// (0x000426fb) cale_week_day_heading_pane_t4_ParamLimits

0x2043,	// (0x0004272a) cale_week_day_heading_pane_t5_ParamLimits

0x207a,	// (0x00042761) cale_week_day_heading_pane_t6_ParamLimits

0x20b1,	// (0x00042798) cale_week_day_heading_pane_t7_ParamLimits

0xf15b,	// (0x0004f842) cale_week_day_heading_pane_t_ParamLimits

0xd24f,	// (0x0004d936) bg_cale_side_pane_ParamLimits

0x20db,	// (0x000427c2) cale_week_time_pane_t1_ParamLimits

0x20f5,	// (0x000427dc) cale_week_time_pane_t2_ParamLimits

0x210f,	// (0x000427f6) cale_week_time_pane_t3_ParamLimits

0x2129,	// (0x00042810) cale_week_time_pane_t4_ParamLimits

0x2143,	// (0x0004282a) cale_week_time_pane_t5_ParamLimits

0x215d,	// (0x00042844) cale_week_time_pane_t6_ParamLimits

0x2177,	// (0x0004285e) cale_week_time_pane_t7_ParamLimits

0x2191,	// (0x00042878) cale_week_time_pane_t8_ParamLimits

0xf16a,	// (0x0004f851) cale_week_time_pane_t_ParamLimits

0x21ab,	// (0x00042892) cell_cale_week_pane_g2_ParamLimits

0xd24f,	// (0x0004d936) bg_cale_side_pane_cp01_ParamLimits

0x31a9,	// (0x00043890) cale_month_week_pane_t1_ParamLimits

0x31c2,	// (0x000438a9) cale_month_week_pane_t2_ParamLimits

0x31db,	// (0x000438c2) cale_month_week_pane_t3_ParamLimits

0x31f4,	// (0x000438db) cale_month_week_pane_t4_ParamLimits

0x320d,	// (0x000438f4) cale_month_week_pane_t5_ParamLimits

0x3226,	// (0x0004390d) cale_month_week_pane_t6_ParamLimits

0xf1f1,	// (0x0004f8d8) cale_month_week_pane_t_ParamLimits

0xa5d5,	// (0x0004acbc) cell_cale_month_pane_g1_ParamLimits

0xc935,	// (0x0004d01c) main_cale_event_viewer_pane

0xc935,	// (0x0004d01c) listscroll_cale_event_viewer_pane

0x4d56,	// (0x0004543d) list_cale_ev_pane

0x4d5e,	// (0x00045445) scroll_pane_cp023

0x4d6a,	// (0x00045451) field_cale_ev_pane_ParamLimits

0x4d6a,	// (0x00045451) field_cale_ev_pane

0x4d88,	// (0x0004546f) field_cale_ev_content_pane_ParamLimits

0x4d88,	// (0x0004546f) field_cale_ev_content_pane

0x4d94,	// (0x0004547b) field_cale_ev_pane_g1_ParamLimits

0x4d94,	// (0x0004547b) field_cale_ev_pane_g1

0x4da0,	// (0x00045487) field_cale_ev_pane_g2_ParamLimits

0x4da0,	// (0x00045487) field_cale_ev_pane_g2

0x4db8,	// (0x0004549f) field_cale_ev_pane_g3_ParamLimits

0x4db8,	// (0x0004549f) field_cale_ev_pane_g3

0x0002,

0xf47c,	// (0x0004fb63) field_cale_ev_pane_g_ParamLimits

0xf47c,	// (0x0004fb63) field_cale_ev_pane_g

0x4dd0,	// (0x000454b7) field_cale_ev_pane_t1_ParamLimits

0x4dd0,	// (0x000454b7) field_cale_ev_pane_t1

0xe70e,	// (0x0004edf5) field_cale_ev_content_pane_t1_ParamLimits

0xe70e,	// (0x0004edf5) field_cale_ev_content_pane_t1

0xde50,	// (0x0004e537) bg_button_pane_cp01

0x1cb9,	// (0x000423a0) listscroll_cale_week_pane_ParamLimits

0xd1fa,	// (0x0004d8e1) popup_toolbar_window_cp01

0xd220,	// (0x0004d907) listscroll_cale_week_pane_t1_ParamLimits

0x1cb9,	// (0x000423a0) listscroll_cale_day_pane_ParamLimits

0xd1fa,	// (0x0004d8e1) popup_toolbar_window_cp02

0xd628,	// (0x0004dd0f) listscroll_cale_day_pane_t1_ParamLimits

0x1cb9,	// (0x000423a0) main_cale_month_pane_ParamLimits

0xa735,	// (0x0004ae1c) popup_toolbar_window_cp03_ParamLimits

0xa735,	// (0x0004ae1c) popup_toolbar_window_cp03

0x3bc6,	// (0x000442ad) main_image_pane_g2_ParamLimits

0x3bc6,	// (0x000442ad) main_image_pane_g2

0x3bd7,	// (0x000442be) main_image_pane_g3_ParamLimits

0x3bd7,	// (0x000442be) main_image_pane_g3

0x0002,

0xf352,	// (0x0004fa39) main_image_pane_g_ParamLimits

0xf352,	// (0x0004fa39) main_image_pane_g

0xdf6a,	// (0x0004e651) main_image_pane_t1_ParamLimits

0x3be8,	// (0x000442cf) main_image_pane_t2_ParamLimits

0x3be8,	// (0x000442cf) main_image_pane_t2

0x3bfa,	// (0x000442e1) main_image_pane_t3_ParamLimits

0x3bfa,	// (0x000442e1) main_image_pane_t3

0x3c22,	// (0x00044309) main_image_pane_t4_ParamLimits

0x3c22,	// (0x00044309) main_image_pane_t4

0x0003,

0xf359,	// (0x0004fa40) main_image_pane_t_ParamLimits

0xf359,	// (0x0004fa40) main_image_pane_t

0x3c42,	// (0x00044329) popup_image_details_window_cp01

0x3c4c,	// (0x00044333) popup_toobar_trans_pane_cp01_ParamLimits

0x3c4c,	// (0x00044333) popup_toobar_trans_pane_cp01

0x440d,	// (0x00044af4) popup_image_details_window_ParamLimits

0x440d,	// (0x00044af4) popup_image_details_window

0xa708,	// (0x0004adef) popup_image_focus_window

0xa76c,	// (0x0004ae53) camera2_autofocus_pane_ParamLimits

0xa76c,	// (0x0004ae53) camera2_autofocus_pane

0xc935,	// (0x0004d01c) bg_popup_sub_pane_cp06

0x4de7,	// (0x000454ce) popup_image_focus_window_g1

0x4def,	// (0x000454d6) popup_image_focus_window_g2

0x4df7,	// (0x000454de) popup_image_focus_window_g3

0x4dff,	// (0x000454e6) popup_image_focus_window_g4

0x0003,

0xf483,	// (0x0004fb6a) popup_image_focus_window_g

0x4e07,	// (0x000454ee) popup_image_focus_window_t1

0x4e15,	// (0x000454fc) popup_image_focus_window_t2

0x4e25,	// (0x0004550c) popup_image_focus_window_t3

0x0002,

0xf48c,	// (0x0004fb73) popup_image_focus_window_t

0xd07d,	// (0x0004d764) camera2_autofocus_pane_g1

0xcfe4,	// (0x0004d6cb) bg_tb_trans_pane_cp01

0x4e33,	// (0x0004551a) popup_image_details_window_g1

0x4e46,	// (0x0004552d) popup_image_details_window_g2

0x0002,

0xf493,	// (0x0004fb7a) popup_image_details_window_g

0x4e6f,	// (0x00045556) popup_image_details_window_t1

0x4e81,	// (0x00045568) popup_image_details_window_t2

0x4e9a,	// (0x00045581) popup_image_details_window_t3

0x4eae,	// (0x00045595) popup_image_details_window_t4

0x4ec9,	// (0x000455b0) popup_image_details_window_t5

0x0004,

0xf49a,	// (0x0004fb81) popup_image_details_window_t

0xd0db,	// (0x0004d7c2) bg_calc_paper_pane_ParamLimits

0xc935,	// (0x0004d01c) grid_highlight_pane_cp013

0xa545,	// (0x0004ac2c) list_calc_pane_ParamLimits

0xa557,	// (0x0004ac3e) scroll_pane_cp024

0xd0ef,	// (0x0004d7d6) bg_calc_display_pane_ParamLimits

0x1b15,	// (0x000421fc) calc_display_pane_t1_ParamLimits

0x1b2a,	// (0x00042211) calc_display_pane_t2_ParamLimits

0xa55f,	// (0x0004ac46) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0004f7d9) calc_display_pane_t_ParamLimits

0x1bea,	// (0x000422d1) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0004f7f6) cell_calc_pane_g

0x1bf3,	// (0x000422da) cell_calc_pane_t1

0xd144,	// (0x0004d82b) grid_highlight_pane_cp02_ParamLimits

0xd15a,	// (0x0004d841) toolbar_button_pane_cp01_ParamLimits

0xd15a,	// (0x0004d841) toolbar_button_pane_cp01

0xdfaf,	// (0x0004e696) temp_image_control_pane_ParamLimits

0xdfaf,	// (0x0004e696) temp_image_control_pane

0xcfe4,	// (0x0004d6cb) main_mp3_pane

0x4ee3,	// (0x000455ca) temp_image_control_pane_g1_ParamLimits

0x4ee3,	// (0x000455ca) temp_image_control_pane_g1

0x4ef1,	// (0x000455d8) temp_image_control_pane_g2_ParamLimits

0x4ef1,	// (0x000455d8) temp_image_control_pane_g2

0x4f03,	// (0x000455ea) temp_image_control_pane_g3_ParamLimits

0x4f03,	// (0x000455ea) temp_image_control_pane_g3

0x4f13,	// (0x000455fa) temp_image_control_pane_g4_ParamLimits

0x4f13,	// (0x000455fa) temp_image_control_pane_g4

0x0003,

0xf4a5,	// (0x0004fb8c) temp_image_control_pane_g_ParamLimits

0xf4a5,	// (0x0004fb8c) temp_image_control_pane_g

0x4ee3,	// (0x000455ca) main_mp3_pane_g1

0x4f26,	// (0x0004560d) main_mp3_pane_g2

0x0007,

0xf4ae,	// (0x0004fb95) main_mp3_pane_g

0x4f73,	// (0x0004565a) main_mp3_pane_t1

0xd08b,	// (0x0004d772) main_camera_pane_g8_ParamLimits

0xd08b,	// (0x0004d772) main_camera_pane_g8

0x2375,	// (0x00042a5c) main_video_pane_g7_ParamLimits

0x2375,	// (0x00042a5c) main_video_pane_g7

0xd2f9,	// (0x0004d9e0) main_camera2_pane_t7_ParamLimits

0xd2f9,	// (0x0004d9e0) main_camera2_pane_t7

0xd3f3,	// (0x0004dada) scroll_pane_cp025_ParamLimits

0xd3f3,	// (0x0004dada) scroll_pane_cp025

0xd407,	// (0x0004daee) scroll_pane_cp026_ParamLimits

0xd407,	// (0x0004daee) scroll_pane_cp026

0xd416,	// (0x0004dafd) wml_content_pane_ParamLimits

0xc935,	// (0x0004d01c) main_touch_calib_pane

0x5051,	// (0x00045738) main_touch_calib_pane_g1

0x5063,	// (0x0004574a) main_touch_calib_pane_g2

0x5075,	// (0x0004575c) main_touch_calib_pane_g3

0x5087,	// (0x0004576e) main_touch_calib_pane_g4

0x0003,

0xf4cc,	// (0x0004fbb3) main_touch_calib_pane_g

0x5099,	// (0x00045780) main_touch_calib_pane_t1

0x50b3,	// (0x0004579a) main_touch_calib_pane_t2

0x0004,

0xf4d5,	// (0x0004fbbc) main_touch_calib_pane_t

0xdb9f,	// (0x0004e286) mup_progress_pane_cp02

0xdbd4,	// (0x0004e2bb) navi_pane_g1

0xdc8f,	// (0x0004e376) navi_pane_mp_t3

0xcfe4,	// (0x0004d6cb) main_mp3_pane_ParamLimits

0x45a5,	// (0x00044c8c) navi_pane_ParamLimits

0x4ee3,	// (0x000455ca) main_mp3_pane_g1_ParamLimits

0x4f26,	// (0x0004560d) main_mp3_pane_g2_ParamLimits

0x4f34,	// (0x0004561b) main_mp3_pane_g3_ParamLimits

0x4f34,	// (0x0004561b) main_mp3_pane_g3

0x4f42,	// (0x00045629) main_mp3_pane_g4_ParamLimits

0x4f42,	// (0x00045629) main_mp3_pane_g4

0xd07d,	// (0x0004d764) main_mp3_pane_g5_ParamLimits

0xd07d,	// (0x0004d764) main_mp3_pane_g5

0x4f4e,	// (0x00045635) main_mp3_pane_g6_ParamLimits

0x4f4e,	// (0x00045635) main_mp3_pane_g6

0x4f5b,	// (0x00045642) main_mp3_pane_g7_ParamLimits

0x4f5b,	// (0x00045642) main_mp3_pane_g7

0x4f67,	// (0x0004564e) main_mp3_pane_g8_ParamLimits

0x4f67,	// (0x0004564e) main_mp3_pane_g8

0xf4ae,	// (0x0004fb95) main_mp3_pane_g_ParamLimits

0x4f81,	// (0x00045668) main_mp3_pane_t2

0x4f8f,	// (0x00045676) main_mp3_pane_t3

0x4f9d,	// (0x00045684) main_mp3_pane_t4

0x4fab,	// (0x00045692) main_mp3_pane_t5

0x0005,

0xf4bf,	// (0x0004fba6) main_mp3_pane_t

0x4fc7,	// (0x000456ae) mup_progress_pane_cp01

0xa4f4,	// (0x0004abdb) aid_zoom_text_secondary2

0x4d56,	// (0x0004543d) list_cale_ev2_pane

0x4d5e,	// (0x00045445) scroll_pane_cp023_ParamLimits

0x5109,	// (0x000457f0) field_cale_ev2_pane_ParamLimits

0x5109,	// (0x000457f0) field_cale_ev2_pane

0xa7c0,	// (0x0004aea7) field_cale_ev2_pane_g1_ParamLimits

0xa7c0,	// (0x0004aea7) field_cale_ev2_pane_g1

0xa7cc,	// (0x0004aeb3) field_cale_ev2_pane_g2_ParamLimits

0xa7cc,	// (0x0004aeb3) field_cale_ev2_pane_g2

0xa7e4,	// (0x0004aecb) field_cale_ev2_pane_g3_ParamLimits

0xa7e4,	// (0x0004aecb) field_cale_ev2_pane_g3

0x0003,

0xf4e0,	// (0x0004fbc7) field_cale_ev2_pane_g_ParamLimits

0xf4e0,	// (0x0004fbc7) field_cale_ev2_pane_g

0x0e9c,	// (0x00041583) field_cale_ev2_pane_t1_ParamLimits

0x0e9c,	// (0x00041583) field_cale_ev2_pane_t1

0x0eb3,	// (0x0004159a) field_cale_ev2_pane_t2_ParamLimits

0x0eb3,	// (0x0004159a) field_cale_ev2_pane_t2

0x0001,

0xf4e9,	// (0x0004fbd0) field_cale_ev2_pane_t_ParamLimits

0xf4e9,	// (0x0004fbd0) field_cale_ev2_pane_t

0x3a7b,	// (0x00044162) main_postcard_pane_g5_ParamLimits

0x3a7b,	// (0x00044162) main_postcard_pane_g5

0x3a91,	// (0x00044178) main_postcard_pane_g6_ParamLimits

0x3a91,	// (0x00044178) main_postcard_pane_g6

0xcfe4,	// (0x0004d6cb) camera2_autofocus_pane_cp_ParamLimits

0xcfe4,	// (0x0004d6cb) camera2_autofocus_pane_cp

0xcfe4,	// (0x0004d6cb) main_mup3_pane

0x516d,	// (0x00045854) main_mup3_pane_g1_ParamLimits

0x516d,	// (0x00045854) main_mup3_pane_g1

0x518f,	// (0x00045876) main_mup3_pane_g2_ParamLimits

0x518f,	// (0x00045876) main_mup3_pane_g2

0x520d,	// (0x000458f4) main_mup3_pane_g3_ParamLimits

0x520d,	// (0x000458f4) main_mup3_pane_g3

0x5253,	// (0x0004593a) main_mup3_pane_g4_ParamLimits

0x5253,	// (0x0004593a) main_mup3_pane_g4

0x5299,	// (0x00045980) main_mup3_pane_g5_ParamLimits

0x5299,	// (0x00045980) main_mup3_pane_g5

0x52df,	// (0x000459c6) main_mup3_pane_g6_ParamLimits

0x52df,	// (0x000459c6) main_mup3_pane_g6

0xd08b,	// (0x0004d772) main_mup3_pane_g7_ParamLimits

0xd08b,	// (0x0004d772) main_mup3_pane_g7

0x0007,

0xf4f9,	// (0x0004fbe0) main_mup3_pane_g_ParamLimits

0xf4f9,	// (0x0004fbe0) main_mup3_pane_g

0x535d,	// (0x00045a44) main_mup3_pane_t1_ParamLimits

0x535d,	// (0x00045a44) main_mup3_pane_t1

0x53d1,	// (0x00045ab8) main_mup3_pane_t2_ParamLimits

0x53d1,	// (0x00045ab8) main_mup3_pane_t2

0x54a5,	// (0x00045b8c) main_mup3_pane_t4_ParamLimits

0x54a5,	// (0x00045b8c) main_mup3_pane_t4

0x54fb,	// (0x00045be2) main_mup3_pane_t5_ParamLimits

0x54fb,	// (0x00045be2) main_mup3_pane_t5

0x55b7,	// (0x00045c9e) main_mup3_pane_t6_ParamLimits

0x55b7,	// (0x00045c9e) main_mup3_pane_t6

0x0005,

0xf50a,	// (0x0004fbf1) main_mup3_pane_t_ParamLimits

0xf50a,	// (0x0004fbf1) main_mup3_pane_t

0x566f,	// (0x00045d56) mup3_progress_pane_ParamLimits

0x566f,	// (0x00045d56) mup3_progress_pane

0x5705,	// (0x00045dec) popup_mup3_control_window_ParamLimits

0x5705,	// (0x00045dec) popup_mup3_control_window

0x5721,	// (0x00045e08) popup_mup3_text_window

0x573f,	// (0x00045e26) mup3_progress_pane_t1

0x575e,	// (0x00045e45) mup3_progress_pane_t2

0x577d,	// (0x00045e64) mup3_progress_pane_t3

0x0002,

0xf517,	// (0x0004fbfe) mup3_progress_pane_t

0x579a,	// (0x00045e81) mup_progress_pane_cp03

0xc935,	// (0x0004d01c) bg_tb_trans_pane_cp04

0x57aa,	// (0x00045e91) mup3_volume_pane

0x57b2,	// (0x00045e99) popup_mup3_control_window_g1

0x57bb,	// (0x00045ea2) mup3_volume_pane_g1

0x57c4,	// (0x00045eab) mup3_volume_pane_g2

0x57cd,	// (0x00045eb4) mup3_volume_pane_g3

0x0002,

0xf51e,	// (0x0004fc05) mup3_volume_pane_g

0xc935,	// (0x0004d01c) bg_tb_trans_pane_cp03

0x57d6,	// (0x00045ebd) popup_mup3_text_window_g1

0x57de,	// (0x00045ec5) popup_mup3_text_window_t1

0xd137,	// (0x0004d81e) list_calc_item_pane_g1_ParamLimits

0x4a25,	// (0x0004510c) mup_volume_pane_cp_g1

0x50cd,	// (0x000457b4) main_touch_calib_pane_t3

0x50e1,	// (0x000457c8) main_touch_calib_pane_t4

0x50f5,	// (0x000457dc) main_touch_calib_pane_t5

0xa4d0,	// (0x0004abb7) aid_cell_size_toolbar2

0xa4d8,	// (0x0004abbf) aid_popup3_width_pane

0xa4e4,	// (0x0004abcb) aid_zoom_text_msg_primary

0x2250,	// (0x00042937) vorec_t7

0xd0fb,	// (0x0004d7e2) bg_calc_paper_pane_g1_ParamLimits

0xd107,	// (0x0004d7ee) bg_calc_paper_pane_g2_ParamLimits

0xd113,	// (0x0004d7fa) bg_calc_paper_pane_g3_ParamLimits

0xd11f,	// (0x0004d806) bg_calc_paper_pane_g4_ParamLimits

0xd12b,	// (0x0004d812) bg_calc_paper_pane_g5_ParamLimits

0x1b74,	// (0x0004225b) bg_calc_paper_pane_g6_ParamLimits

0x1b83,	// (0x0004226a) bg_calc_paper_pane_g7_ParamLimits

0x1b92,	// (0x00042279) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0004f7e0) bg_calc_paper_pane_g_ParamLimits

0x1ba5,	// (0x0004228c) calc_bg_paper_pane_g9_ParamLimits

0xcfe4,	// (0x0004d6cb) image_qvga_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) image_qvga_pane

0xd010,	// (0x0004d6f7) bg_popup_sub_pane_cp04_ParamLimits

0xdee6,	// (0x0004e5cd) popup_mup_playback_window_g1_ParamLimits

0xdef2,	// (0x0004e5d9) popup_mup_playback_window_t1_ParamLimits

0xdf07,	// (0x0004e5ee) popup_mup_playback_window_t2_ParamLimits

0x0386,	// (0x00040a6d) popup_mup_playback_window_t_ParamLimits

0xd08b,	// (0x0004d772) main_mup2_pane_g3_ParamLimits

0xd08b,	// (0x0004d772) main_mup2_pane_g3

0x257d,	// (0x00042c64) popup_toolbar_window_cp04

0xe2e9,	// (0x0004e9d0) popup_call2_audio_second_window_g3_ParamLimits

0xe2e9,	// (0x0004e9d0) popup_call2_audio_second_window_g3

0xe6f3,	// (0x0004edda) popup_call2_audio_first_window_g4_ParamLimits

0xe6f3,	// (0x0004edda) popup_call2_audio_first_window_g4

0xed89,	// (0x0004f470) popup_call2_audio_in_window_g4_ParamLimits

0xed89,	// (0x0004f470) popup_call2_audio_in_window_g4

0x3ba8,	// (0x0004428f) aid_area_sk_bg_cut_ParamLimits

0x3ba8,	// (0x0004428f) aid_area_sk_bg_cut

0xdf1c,	// (0x0004e603) aid_area_sk_bg_cut_2_ParamLimits

0xdf1c,	// (0x0004e603) aid_area_sk_bg_cut_2

0xc935,	// (0x0004d01c) aid_placing_details_win

0xc935,	// (0x0004d01c) aid_placing_details_win_2

0xd07d,	// (0x0004d764) camera2_autofocus_pane_g1_ParamLimits

0x1886,	// (0x00041f6d) popup_fixed_preview_cale_window_ParamLimits

0x1886,	// (0x00041f6d) popup_fixed_preview_cale_window

0xdd0d,	// (0x0004e3f4) navi_slider_pane_g3

0xdd16,	// (0x0004e3fd) navi_slider_pane_g4

0xdd1f,	// (0x0004e406) navi_slider_pane_g5

0xdd0d,	// (0x0004e3f4) navi_slider_pane_g6

0xa67f,	// (0x0004ad66) navi_slider_pane_g7

0xde1d,	// (0x0004e504) mup_scale_pane_g3

0xde26,	// (0x0004e50d) mup_scale_pane_g4

0xde2f,	// (0x0004e516) mup_scale_pane_g5

0x3926,	// (0x0004400d) mup_scale_pane_g6

0x392f,	// (0x00044016) mup_scale_pane_g7

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g3

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g4

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g5

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g6

0xd2d7,	// (0x0004d9be) cams2_slider_pane_g7

0xd2d7,	// (0x0004d9be) camera2_autofocus_pane_cp_g1

0xf05f,	// (0x0004f746) bg_popup_preview_window_pane_cp02_ParamLimits

0xf05f,	// (0x0004f746) bg_popup_preview_window_pane_cp02

0x57ec,	// (0x00045ed3) list_fp_cale_pane_ParamLimits

0x57ec,	// (0x00045ed3) list_fp_cale_pane

0x57f8,	// (0x00045edf) popup_fixed_preview_cale_window_t1_ParamLimits

0x57f8,	// (0x00045edf) popup_fixed_preview_cale_window_t1

0x580a,	// (0x00045ef1) popup_fixed_preview_cale_window_t2_ParamLimits

0x580a,	// (0x00045ef1) popup_fixed_preview_cale_window_t2

0x581f,	// (0x00045f06) popup_fixed_preview_cale_window_t3_ParamLimits

0x581f,	// (0x00045f06) popup_fixed_preview_cale_window_t3

0x0002,

0xf525,	// (0x0004fc0c) popup_fixed_preview_cale_window_t_ParamLimits

0xf525,	// (0x0004fc0c) popup_fixed_preview_cale_window_t

0x5840,	// (0x00045f27) list_single_fp_cale_pane_ParamLimits

0x5840,	// (0x00045f27) list_single_fp_cale_pane

0x5855,	// (0x00045f3c) list_single_fp_cale_pane_g1_ParamLimits

0x5855,	// (0x00045f3c) list_single_fp_cale_pane_g1

0x5861,	// (0x00045f48) list_single_fp_cale_pane_g2_ParamLimits

0x5861,	// (0x00045f48) list_single_fp_cale_pane_g2

0x0002,

0xf52c,	// (0x0004fc13) list_single_fp_cale_pane_g_ParamLimits

0xf52c,	// (0x0004fc13) list_single_fp_cale_pane_g

0x587a,	// (0x00045f61) list_single_fp_cale_pane_t1_ParamLimits

0x587a,	// (0x00045f61) list_single_fp_cale_pane_t1

0x588c,	// (0x00045f73) list_single_fp_cale_pane_t2_ParamLimits

0x588c,	// (0x00045f73) list_single_fp_cale_pane_t2

0x0001,

0xf533,	// (0x0004fc1a) list_single_fp_cale_pane_t_ParamLimits

0xf533,	// (0x0004fc1a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc935,	// (0x0004d01c) main_dialer_pane

0xc935,	// (0x0004d01c) aid_cell_size_keypad

0xc935,	// (0x0004d01c) dialer_ne_pane

0xc935,	// (0x0004d01c) grid_dialer_command_1_pane

0xc935,	// (0x0004d01c) grid_dialer_command_2_pane

0xc935,	// (0x0004d01c) grid_dialer_keypad_pane

0x58bf,	// (0x00045fa6) bg_popup_call_pane_cp06_ParamLimits

0x58bf,	// (0x00045fa6) bg_popup_call_pane_cp06

0x58bf,	// (0x00045fa6) dialer_ne_clear_pane_ParamLimits

0x58bf,	// (0x00045fa6) dialer_ne_clear_pane

0xd2d7,	// (0x0004d9be) dialer_ne_pane_g1

0xd2f9,	// (0x0004d9e0) dialer_ne_pane_t1_ParamLimits

0xd2f9,	// (0x0004d9e0) dialer_ne_pane_t1

0x58cd,	// (0x00045fb4) dialer_ne_pane_t2_ParamLimits

0x58cd,	// (0x00045fb4) dialer_ne_pane_t2

0x58f5,	// (0x00045fdc) dialer_ne_pane_t3_ParamLimits

0x58f5,	// (0x00045fdc) dialer_ne_pane_t3

0x0002,

0xf538,	// (0x0004fc1f) dialer_ne_pane_t_ParamLimits

0xf538,	// (0x0004fc1f) dialer_ne_pane_t

0x58f5,	// (0x00045fdc) dialer_ne_pane_t3_copy1_ParamLimits

0x58f5,	// (0x00045fdc) dialer_ne_pane_t3_copy1

0x5922,	// (0x00046009) cell_dialer_keypad_pane_ParamLimits

0x5922,	// (0x00046009) cell_dialer_keypad_pane

0xcfe4,	// (0x0004d6cb) cell_dialer_command_1_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) cell_dialer_command_1_pane

0x5939,	// (0x00046020) cell_dialer_command_2_pane_ParamLimits

0x5939,	// (0x00046020) cell_dialer_command_2_pane

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp02_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp02

0xd07d,	// (0x0004d764) cell_dialer_keypad_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) cell_dialer_keypad_pane_g1

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp03_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp03

0xd07d,	// (0x0004d764) cell_dialer_command_1_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) cell_dialer_command_1_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp04

0xd2d7,	// (0x0004d9be) cell_dialer_command_2_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp06

0xd2d7,	// (0x0004d9be) dialer_ne_clear_pane_g1

0xdbe0,	// (0x0004e2c7) navi_pane_g2

0xdc0e,	// (0x0004e2f5) navi_pane_g3

0x0002,

0x0289,	// (0x00040970) navi_pane_g

0xdc9d,	// (0x0004e384) navi_pane_mv_g2

0xdcc4,	// (0x0004e3ab) navi_pane_mv_g5

0x370b,	// (0x00043df2) navi_pane_mv_t1

0xd0ef,	// (0x0004d7d6) main_clock2_pane

0xcfe4,	// (0x0004d6cb) main_clock2_list_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_clock2_list_pane

0x59e9,	// (0x000460d0) main_clock2_pane_t1_ParamLimits

0x59e9,	// (0x000460d0) main_clock2_pane_t1

0x5a24,	// (0x0004610b) main_clock2_pane_t2_ParamLimits

0x5a24,	// (0x0004610b) main_clock2_pane_t2

0x0004,

0xf544,	// (0x0004fc2b) main_clock2_pane_t_ParamLimits

0xf544,	// (0x0004fc2b) main_clock2_pane_t

0x5ac4,	// (0x000461ab) popup_clock_analogue_window_cp03_ParamLimits

0x5ac4,	// (0x000461ab) popup_clock_analogue_window_cp03

0x5ae9,	// (0x000461d0) popup_clock_digital_window_cp02_ParamLimits

0x5ae9,	// (0x000461d0) popup_clock_digital_window_cp02

0x5b62,	// (0x00046249) main_clock2_list_single_pane_ParamLimits

0x5b62,	// (0x00046249) main_clock2_list_single_pane

0xd2a1,	// (0x0004d988) list_highlight_pane_cp05

0x5b74,	// (0x0004625b) main_clock2_list_single_pane_t1

0x257d,	// (0x00042c64) popup_toolbar_window_cp04_ParamLimits

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g2_ParamLimits

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g2

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g3_ParamLimits

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g3

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g4_ParamLimits

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g4

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g5_ParamLimits

0xd08b,	// (0x0004d772) camera2_autofocus_pane_g5

0x0004,

0x05aa,	// (0x00040c91) camera2_autofocus_pane_g_ParamLimits

0x05aa,	// (0x00040c91) camera2_autofocus_pane_g

0x5129,	// (0x00045810) camera2_autofocus_pane_cp_g2

0x5131,	// (0x00045818) camera2_autofocus_pane_cp_g3

0x5139,	// (0x00045820) camera2_autofocus_pane_cp_g4

0x5141,	// (0x00045828) camera2_autofocus_pane_cp_g5

0x0004,

0xf4ee,	// (0x0004fbd5) camera2_autofocus_pane_cp_g

0xc935,	// (0x0004d01c) popup_dialer_spcha_window

0xc935,	// (0x0004d01c) bg_popup_sub_pane_cp07

0xc935,	// (0x0004d01c) list_spcha_pane

0x5c21,	// (0x00046308) list_single_spcha_pane_ParamLimits

0x5c21,	// (0x00046308) list_single_spcha_pane

0xc935,	// (0x0004d01c) list_highlight_pane_cp06

0xd807,	// (0x0004deee) list_single_spcha_pane_t1

0xeb33,	// (0x0004f21a) popup_call2_audio_out_window_g4_ParamLimits

0xeb33,	// (0x0004f21a) popup_call2_audio_out_window_g4

0xc935,	// (0x0004d01c) main_imed2_pane

0xa710,	// (0x0004adf7) popup_imed_adjust2_window

0x4425,	// (0x00044b0c) popup_imed_trans_window_ParamLimits

0x4425,	// (0x00044b0c) popup_imed_trans_window

0x4b25,	// (0x0004520c) popup_blid_sat_info2_window_t1

0x4b33,	// (0x0004521a) popup_blid_sat_info2_window_t2

0x000a,

0xf431,	// (0x0004fb18) popup_blid_sat_info2_window_t

0x5c33,	// (0x0004631a) aid_size_cell_colour_35

0x5c53,	// (0x0004633a) aid_size_cell_colour_112

0x5c73,	// (0x0004635a) aid_size_cell_effect

0xe75a,	// (0x0004ee41) bg_tb_trans_pane_cp02

0xd739,	// (0x0004de20) heading_imed_pane

0x5c93,	// (0x0004637a) listscroll_imed_pane

0x5c9f,	// (0x00046386) heading_imed_pane_g1

0x5ca7,	// (0x0004638e) heading_imed_pane_t1

0x5cb5,	// (0x0004639c) grid_imed_colour_35_pane_ParamLimits

0x5cb5,	// (0x0004639c) grid_imed_colour_35_pane

0x5ccc,	// (0x000463b3) grid_imed_effect_pane

0x5ce2,	// (0x000463c9) list_imed_aspect_pane

0x5cea,	// (0x000463d1) scroll_pane_cp027_ParamLimits

0x5cea,	// (0x000463d1) scroll_pane_cp027

0x5cfb,	// (0x000463e2) cell_imed_effect_pane_ParamLimits

0x5cfb,	// (0x000463e2) cell_imed_effect_pane

0x5d22,	// (0x00046409) cell_imed_colour_pane_ParamLimits

0x5d22,	// (0x00046409) cell_imed_colour_pane

0x5d64,	// (0x0004644b) cell_imed_colour_pane_g1_ParamLimits

0x5d64,	// (0x0004644b) cell_imed_colour_pane_g1

0x5d75,	// (0x0004645c) hgihlgiht_grid_pane_cp016_ParamLimits

0x5d75,	// (0x0004645c) hgihlgiht_grid_pane_cp016

0x5d86,	// (0x0004646d) cell_imed_effect_pane_g1

0x5d8e,	// (0x00046475) grid_highlight_pane_cp017

0x5d97,	// (0x0004647e) list_imed_single_pane_ParamLimits

0x5d97,	// (0x0004647e) list_imed_single_pane

0xc935,	// (0x0004d01c) list_highlight_pane_cp07

0x5dac,	// (0x00046493) list_imed_aspect_pane_comp1_t1

0xe75a,	// (0x0004ee41) bg_tb_trans_pane_cp05

0x5dce,	// (0x000464b5) popup_imed_adjust2_window_g1

0x5df5,	// (0x000464dc) popup_imed_adjust2_window_t1

0x5e0d,	// (0x000464f4) slider_imed_adjust_pane

0x5e21,	// (0x00046508) slider_imed_adjust_pane_g1

0x5e31,	// (0x00046518) slider_imed_adjust_pane_g2

0x5e41,	// (0x00046528) slider_imed_adjust_pane_g3

0x5e52,	// (0x00046539) slider_imed_adjust_pane_g4

0x0003,

0xf561,	// (0x0004fc48) slider_imed_adjust_pane_g

0x5e63,	// (0x0004654a) aid_size_cell_clipart2

0x5e6f,	// (0x00046556) grid_imed_clipart_pane

0x5e79,	// (0x00046560) scroll_pane_cp031

0x5e81,	// (0x00046568) cell_imed_clipart_pane_ParamLimits

0x5e81,	// (0x00046568) cell_imed_clipart_pane

0x5ea3,	// (0x0004658a) cell_imed_clipart_pane_g1

0xc935,	// (0x0004d01c) grid_highlight_pane_cp014

0x59c5,	// (0x000460ac) main_clock2_pane_g1_ParamLimits

0x59c5,	// (0x000460ac) main_clock2_pane_g1

0x5b09,	// (0x000461f0) aid_call2_pane_cp10

0x5b1b,	// (0x00046202) aid_call_pane_cp10

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g1

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g2

0x5b2d,	// (0x00046214) popup_clock_analogue_window_cp10_g3

0x5b2d,	// (0x00046214) popup_clock_analogue_window_cp10_g4

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g5

0x0004,

0xf54f,	// (0x0004fc36) popup_clock_analogue_window_cp10_g

0x5b43,	// (0x0004622a) popup_clock_analogue_window_cp10_t1

0x5b82,	// (0x00046269) clock_digital_number_pane_cp10_ParamLimits

0x5b82,	// (0x00046269) clock_digital_number_pane_cp10

0x5b9a,	// (0x00046281) clock_digital_number_pane_cp11_ParamLimits

0x5b9a,	// (0x00046281) clock_digital_number_pane_cp11

0x5bb2,	// (0x00046299) clock_digital_number_pane_cp12_ParamLimits

0x5bb2,	// (0x00046299) clock_digital_number_pane_cp12

0x5bcc,	// (0x000462b3) clock_digital_number_pane_cp13_ParamLimits

0x5bcc,	// (0x000462b3) clock_digital_number_pane_cp13

0x5be6,	// (0x000462cd) clock_digital_separator_pane_cp10_ParamLimits

0x5be6,	// (0x000462cd) clock_digital_separator_pane_cp10

0x5c00,	// (0x000462e7) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c00,	// (0x000462e7) popup_clock_digital_window_cp02_t1

0xd008,	// (0x0004d6ef) clock_digital_number_pane_cp10_g1

0xd008,	// (0x0004d6ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf56a,	// (0x0004fc51) clock_digital_number_pane_cp10_g

0xd008,	// (0x0004d6ef) clock_digital_separator_pane_cp10_g1

0xd008,	// (0x0004d6ef) clock_digital_separator_pane_g2_cp10

0xdccc,	// (0x0004e3b3) navi_pane_vded_g4

0xdcd5,	// (0x0004e3bc) navi_pane_vded_g5

0xdcde,	// (0x0004e3c5) navi_pane_vded_t1

0xc935,	// (0x0004d01c) main_vded_pane

0x5eac,	// (0x00046593) main_vded_pane_g1

0x5eb6,	// (0x0004659d) main_vded_pane_g2

0x5ec0,	// (0x000465a7) main_vded_pane_g3

0x0002,

0xf56f,	// (0x0004fc56) main_vded_pane_g

0x5eca,	// (0x000465b1) main_vded_pane_t1

0x5ed8,	// (0x000465bf) main_vded_pane_t2

0x0001,

0xf576,	// (0x0004fc5d) main_vded_pane_t

0x5ee6,	// (0x000465cd) vded_slider_pane

0x5eee,	// (0x000465d5) vded_video_pane

0x5ef6,	// (0x000465dd) vded_video_pane_g1

0x5f00,	// (0x000465e7) vded_video_pane_g2

0xd2d7,	// (0x0004d9be) vded_video_pane_g3

0x0002,

0xf57b,	// (0x0004fc62) vded_video_pane_g

0x5f09,	// (0x000465f0) vded_slider_pane_g1

0x4a25,	// (0x0004510c) vded_slider_pane_g2

0x5f12,	// (0x000465f9) vded_slider_pane_g3

0x5f1b,	// (0x00046602) vded_slider_pane_g4

0x5f24,	// (0x0004660b) vded_slider_pane_g5

0x0004,

0xf582,	// (0x0004fc69) vded_slider_pane_g

0x56ed,	// (0x00045dd4) mup3_rocker_pane_ParamLimits

0x56ed,	// (0x00045dd4) mup3_rocker_pane

0x5f2d,	// (0x00046614) mup3_control_keys_pane_g1

0x5f35,	// (0x0004661c) mup3_control_keys_pane_g2

0x5f3d,	// (0x00046624) mup3_control_keys_pane_g3

0x5f45,	// (0x0004662c) mup3_control_keys_pane_g4

0x0003,

0xf58d,	// (0x0004fc74) mup3_control_keys_pane_g

0x18bd,	// (0x00041fa4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x18bd,	// (0x00041fa4) popup_toolbar2_fixed_window_cp01

0x5729,	// (0x00045e10) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5729,	// (0x00045e10) popup_toolbar2_fixed_window_cp02

0xe45b,	// (0x0004eb42) popup_call2_audio_second_window_t4_ParamLimits

0xe45b,	// (0x0004eb42) popup_call2_audio_second_window_t4

0xe9f8,	// (0x0004f0df) popup_call2_audio_first_window_t6_ParamLimits

0xe9f8,	// (0x0004f0df) popup_call2_audio_first_window_t6

0xec36,	// (0x0004f31d) popup_call2_audio_out_window_t6_ParamLimits

0xec36,	// (0x0004f31d) popup_call2_audio_out_window_t6

0xc935,	// (0x0004d01c) main_vitu_pane

0xcfe4,	// (0x0004d6cb) aid_size_cell_itu_ParamLimits

0xcfe4,	// (0x0004d6cb) aid_size_cell_itu

0xcfe4,	// (0x0004d6cb) bg_popup_window_pane_cp08_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_popup_window_pane_cp08

0xcfe4,	// (0x0004d6cb) field_vitu_entry_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) field_vitu_entry_pane

0xcfe4,	// (0x0004d6cb) grid_vitu_function_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) grid_vitu_function_pane

0xcfe4,	// (0x0004d6cb) grid_vitu_itu_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) grid_vitu_itu_pane

0xcfe4,	// (0x0004d6cb) cell_vitu_itu_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) cell_vitu_itu_pane

0xcfe4,	// (0x0004d6cb) cell_vitu_function_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) cell_vitu_function_pane

0xcfe4,	// (0x0004d6cb) bg_popup_sub_pane_cp08_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_popup_sub_pane_cp08

0xd2a9,	// (0x0004d990) field_vitu_entry_pane_t1_ParamLimits

0xd2a9,	// (0x0004d990) field_vitu_entry_pane_t1

0x5f55,	// (0x0004663c) field_vitu_entry_pane_t2_ParamLimits

0x5f55,	// (0x0004663c) field_vitu_entry_pane_t2

0x0001,

0xf596,	// (0x0004fc7d) field_vitu_entry_pane_t_ParamLimits

0xf596,	// (0x0004fc7d) field_vitu_entry_pane_t

0x4893,	// (0x00044f7a) bg_button_pane_cp05_ParamLimits

0x4893,	// (0x00044f7a) bg_button_pane_cp05

0x5f72,	// (0x00046659) cell_vitu_itu_pane_g1

0xe746,	// (0x0004ee2d) cell_vitu_itu_pane_t1_ParamLimits

0xe746,	// (0x0004ee2d) cell_vitu_itu_pane_t1

0xe746,	// (0x0004ee2d) cell_vitu_itu_pane_t2_ParamLimits

0xe746,	// (0x0004ee2d) cell_vitu_itu_pane_t2

0x0002,

0xf59b,	// (0x0004fc82) cell_vitu_itu_pane_t_ParamLimits

0xf59b,	// (0x0004fc82) cell_vitu_itu_pane_t

0xc935,	// (0x0004d01c) bg_button_pane_cp07

0xd2d7,	// (0x0004d9be) cell_vitu_function_pane_g1

0xa53d,	// (0x0004ac24) main_calc_pane_g1

0x16e4,	// (0x00041dcb) aid_visual_content_pane

0xc935,	// (0x0004d01c) main_vradio_pane

0xd07d,	// (0x0004d764) main_vradio_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) main_vradio_pane_g1

0xd08b,	// (0x0004d772) main_vradio_pane_g2_ParamLimits

0xd08b,	// (0x0004d772) main_vradio_pane_g2

0x0001,

0xf5a2,	// (0x0004fc89) main_vradio_pane_g_ParamLimits

0xf5a2,	// (0x0004fc89) main_vradio_pane_g

0xd2a9,	// (0x0004d990) main_vradio_pane_t1_ParamLimits

0xd2a9,	// (0x0004d990) main_vradio_pane_t1

0xd2a9,	// (0x0004d990) main_vradio_pane_t2_ParamLimits

0xd2a9,	// (0x0004d990) main_vradio_pane_t2

0xd2f9,	// (0x0004d9e0) main_vradio_pane_t3_ParamLimits

0xd2f9,	// (0x0004d9e0) main_vradio_pane_t3

0x0002,

0xf5a7,	// (0x0004fc8e) main_vradio_pane_t_ParamLimits

0xf5a7,	// (0x0004fc8e) main_vradio_pane_t

0xcfe4,	// (0x0004d6cb) vradio_rocker_control_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) vradio_rocker_control_pane

0xcfe4,	// (0x0004d6cb) vradio_station_info_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) vradio_station_info_pane

0xcfe4,	// (0x0004d6cb) vradio_frequency_info_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) vradio_frequency_info_pane

0xd2d7,	// (0x0004d9be) vradio_station_info_pane_g1

0xe746,	// (0x0004ee2d) vradio_station_info_pane_t1_ParamLimits

0xe746,	// (0x0004ee2d) vradio_station_info_pane_t1

0xd2f9,	// (0x0004d9e0) vradio_station_info_pane_t2_ParamLimits

0xd2f9,	// (0x0004d9e0) vradio_station_info_pane_t2

0x0001,

0xf5ae,	// (0x0004fc95) vradio_station_info_pane_t_ParamLimits

0xf5ae,	// (0x0004fc95) vradio_station_info_pane_t

0xc935,	// (0x0004d01c) vradio_tuning_pane

0x5f8e,	// (0x00046675) vradio_rocker_control_pane_g1

0x5f98,	// (0x0004667f) vradio_rocker_control_pane_g2

0x5fa0,	// (0x00046687) vradio_rocker_control_pane_g3

0x5faa,	// (0x00046691) vradio_rocker_control_pane_g4

0x5fb4,	// (0x0004669b) vradio_rocker_control_pane_g5

0x0004,

0xf5b3,	// (0x0004fc9a) vradio_rocker_control_pane_g

0xd2d7,	// (0x0004d9be) vradio_frequency_info_pane_g1

0xd2a9,	// (0x0004d990) vradio_frequency_info_pane_t1_ParamLimits

0xd2a9,	// (0x0004d990) vradio_frequency_info_pane_t1

0x5fbe,	// (0x000466a5) vradio_tuning_pane_g1

0x5fcb,	// (0x000466b2) vradio_tuning_pane_t1

0xa4fc,	// (0x0004abe3) area_side_right_pane_ParamLimits

0xa4fc,	// (0x0004abe3) area_side_right_pane

0xf026,	// (0x0004f70d) status_small_pane_g1

0xf02e,	// (0x0004f715) status_small_pane_g2

0xf037,	// (0x0004f71e) status_small_pane_g3

0xf040,	// (0x0004f727) status_small_pane_g4

0x0003,

0x04a1,	// (0x00040b88) status_small_pane_g

0xf049,	// (0x0004f730) status_small_pane_t1

0xc935,	// (0x0004d01c) main_video3_pane

0x5fda,	// (0x000466c1) cams_zoom_vslider_pane

0x5fe2,	// (0x000466c9) image3_wide_pane_ParamLimits

0x5fe2,	// (0x000466c9) image3_wide_pane

0x5ffc,	// (0x000466e3) image3_wide_small_pane

0x6008,	// (0x000466ef) main_video3_pane_g1_ParamLimits

0x6008,	// (0x000466ef) main_video3_pane_g1

0x6024,	// (0x0004670b) main_video3_pane_g2_ParamLimits

0x6024,	// (0x0004670b) main_video3_pane_g2

0x0001,

0xf5be,	// (0x0004fca5) main_video3_pane_g_ParamLimits

0xf5be,	// (0x0004fca5) main_video3_pane_g

0x6040,	// (0x00046727) main_video3_pane_t1_ParamLimits

0x6040,	// (0x00046727) main_video3_pane_t1

0x606b,	// (0x00046752) main_video3_pane_t2_ParamLimits

0x606b,	// (0x00046752) main_video3_pane_t2

0x6096,	// (0x0004677d) main_video3_pane_t3_ParamLimits

0x6096,	// (0x0004677d) main_video3_pane_t3

0x0002,

0xf5c3,	// (0x0004fcaa) main_video3_pane_t_ParamLimits

0xf5c3,	// (0x0004fcaa) main_video3_pane_t

0x60c3,	// (0x000467aa) cams_zoom_vslider_pane_g1

0x60cc,	// (0x000467b3) cams_zoom_vslider_pane_g2

0x0001,

0xf5ca,	// (0x0004fcb1) cams_zoom_vslider_pane_g

0x60d4,	// (0x000467bb) small_slider_vertical_pane

0xd2d7,	// (0x0004d9be) small_slider_vertical_pane_g1

0xd2d7,	// (0x0004d9be) small_slider_vertical_pane_g2

0x60dc,	// (0x000467c3) small_slider_vertical_pane_g3

0x0002,

0xf5cf,	// (0x0004fcb6) small_slider_vertical_pane_g

0xc935,	// (0x0004d01c) main_hwr_training_pane

0x60e5,	// (0x000467cc) hwr_training_instruct_pane_ParamLimits

0x60e5,	// (0x000467cc) hwr_training_instruct_pane

0x6107,	// (0x000467ee) hwr_training_navi_pane_ParamLimits

0x6107,	// (0x000467ee) hwr_training_navi_pane

0x6126,	// (0x0004680d) hwr_training_write_pane_ParamLimits

0x6126,	// (0x0004680d) hwr_training_write_pane

0xc935,	// (0x0004d01c) bg_frame_shadow_pane

0x6176,	// (0x0004685d) hwr_training_write_pane_g1

0x617e,	// (0x00046865) hwr_training_write_pane_g2

0x6186,	// (0x0004686d) hwr_training_write_pane_g3

0x618e,	// (0x00046875) hwr_training_write_pane_g4

0x6196,	// (0x0004687d) hwr_training_write_pane_g5

0x619e,	// (0x00046885) hwr_training_write_pane_g6

0x61a6,	// (0x0004688d) hwr_training_write_pane_g7

0x0006,

0xf5d6,	// (0x0004fcbd) hwr_training_write_pane_g

0xa808,	// (0x0004aeef) hwr_training_navi_pane_g1_ParamLimits

0xa808,	// (0x0004aeef) hwr_training_navi_pane_g1

0xa81a,	// (0x0004af01) hwr_training_navi_pane_g2_ParamLimits

0xa81a,	// (0x0004af01) hwr_training_navi_pane_g2

0xa82c,	// (0x0004af13) hwr_training_navi_pane_g3_ParamLimits

0xa82c,	// (0x0004af13) hwr_training_navi_pane_g3

0xa83c,	// (0x0004af23) hwr_training_navi_pane_g4_ParamLimits

0xa83c,	// (0x0004af23) hwr_training_navi_pane_g4

0x0004,

0xf5e5,	// (0x0004fccc) hwr_training_navi_pane_g_ParamLimits

0xf5e5,	// (0x0004fccc) hwr_training_navi_pane_g

0xa849,	// (0x0004af30) hwr_training_navi_pane_t1

0x61bb,	// (0x000468a2) list_single_hwr_training_instruct_pane_ParamLimits

0x61bb,	// (0x000468a2) list_single_hwr_training_instruct_pane

0x61d0,	// (0x000468b7) list_single_hwr_training_instruct_pane_t1

0x4c26,	// (0x0004530d) bg_frame_shadow_pane_g1

0x61df,	// (0x000468c6) bg_frame_shadow_pane_g2

0x61e7,	// (0x000468ce) bg_frame_shadow_pane_g3

0x61ef,	// (0x000468d6) bg_frame_shadow_pane_g4

0x61f7,	// (0x000468de) bg_frame_shadow_pane_g5

0x61ff,	// (0x000468e6) bg_frame_shadow_pane_g6

0x6207,	// (0x000468ee) bg_frame_shadow_pane_g7

0xd19e,	// (0x0004d885) bg_frame_shadow_pane_g8

0x0007,

0xf5f0,	// (0x0004fcd7) bg_frame_shadow_pane_g

0xc935,	// (0x0004d01c) main_video_tele_dialer_pane

0x620f,	// (0x000468f6) aid_size_cell_video_keypad_ParamLimits

0x620f,	// (0x000468f6) aid_size_cell_video_keypad

0x6229,	// (0x00046910) grid_video_dialer_keypad_pane_ParamLimits

0x6229,	// (0x00046910) grid_video_dialer_keypad_pane

0x6275,	// (0x0004695c) video_down_pane_cp_ParamLimits

0x6275,	// (0x0004695c) video_down_pane_cp

0x62a7,	// (0x0004698e) cell_video_dialer_keypad_pane_ParamLimits

0x62a7,	// (0x0004698e) cell_video_dialer_keypad_pane

0x62c9,	// (0x000469b0) bg_button_pane_cp08_ParamLimits

0x62c9,	// (0x000469b0) bg_button_pane_cp08

0x62d5,	// (0x000469bc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x62d5,	// (0x000469bc) cell_video_dialer_keypad_pane_g1

0x56d7,	// (0x00045dbe) mup3_rocker2_pane_ParamLimits

0x56d7,	// (0x00045dbe) mup3_rocker2_pane

0xd2d7,	// (0x0004d9be) mup3_rocker2_pane_g1

0x4306,	// (0x000449ed) main_dialer2_pane

0xc935,	// (0x0004d01c) main_mp4_pane

0xa875,	// (0x0004af5c) main_mp4_pane_g1_ParamLimits

0xa875,	// (0x0004af5c) main_mp4_pane_g1

0xa875,	// (0x0004af5c) main_mp4_pane_g2_ParamLimits

0xa875,	// (0x0004af5c) main_mp4_pane_g2

0x630c,	// (0x000469f3) main_mp4_pane_g3_ParamLimits

0x630c,	// (0x000469f3) main_mp4_pane_g3

0xa883,	// (0x0004af6a) main_mp4_pane_g4_ParamLimits

0xa883,	// (0x0004af6a) main_mp4_pane_g4

0xa8b1,	// (0x0004af98) main_mp4_pane_g5_ParamLimits

0xa8b1,	// (0x0004af98) main_mp4_pane_g5

0x0007,

0xf610,	// (0x0004fcf7) main_mp4_pane_g_ParamLimits

0xf610,	// (0x0004fcf7) main_mp4_pane_g

0xa925,	// (0x0004b00c) main_mp4_pane_t1_ParamLimits

0xa925,	// (0x0004b00c) main_mp4_pane_t1

0xa981,	// (0x0004b068) main_mp4_pane_t2_ParamLimits

0xa981,	// (0x0004b068) main_mp4_pane_t2

0x6348,	// (0x00046a2f) main_mp4_pane_t3_ParamLimits

0x6348,	// (0x00046a2f) main_mp4_pane_t3

0xa9d3,	// (0x0004b0ba) main_mp4_pane_t4_ParamLimits

0xa9d3,	// (0x0004b0ba) main_mp4_pane_t4

0x0003,

0xf621,	// (0x0004fd08) main_mp4_pane_t_ParamLimits

0xf621,	// (0x0004fd08) main_mp4_pane_t

0xaa17,	// (0x0004b0fe) mp4_progress_pane_ParamLimits

0xaa17,	// (0x0004b0fe) mp4_progress_pane

0xaa61,	// (0x0004b148) mp4_rocker_pane_ParamLimits

0xaa61,	// (0x0004b148) mp4_rocker_pane

0x6376,	// (0x00046a5d) mp4_progress_pane_t1

0x638f,	// (0x00046a76) mp4_progress_pane_t2

0x0001,

0xf62a,	// (0x0004fd11) mp4_progress_pane_t

0x63a8,	// (0x00046a8f) mup_progress_pane_cp04

0xd2d7,	// (0x0004d9be) mp4_rocker_pane_g1

0x63bb,	// (0x00046aa2) aid_cell_size_keypad2_ParamLimits

0x63bb,	// (0x00046aa2) aid_cell_size_keypad2

0x63d1,	// (0x00046ab8) dialer2_ne_pane_ParamLimits

0x63d1,	// (0x00046ab8) dialer2_ne_pane

0x63eb,	// (0x00046ad2) grid_dialer2_keypad_pane_ParamLimits

0x63eb,	// (0x00046ad2) grid_dialer2_keypad_pane

0x4893,	// (0x00044f7a) bg_popup_call_pane_cp07_ParamLimits

0x4893,	// (0x00044f7a) bg_popup_call_pane_cp07

0x6407,	// (0x00046aee) dialer2_ne_pane_t1_ParamLimits

0x6407,	// (0x00046aee) dialer2_ne_pane_t1

0x6454,	// (0x00046b3b) cell_dialer2_keypad_pane_ParamLimits

0x6454,	// (0x00046b3b) cell_dialer2_keypad_pane

0x6476,	// (0x00046b5d) bg_button_pane_pane_cp04_ParamLimits

0x6476,	// (0x00046b5d) bg_button_pane_pane_cp04

0x6482,	// (0x00046b69) cell_dialer2_keypad_pane_g1_ParamLimits

0x6482,	// (0x00046b69) cell_dialer2_keypad_pane_g1

0x2451,	// (0x00042b38) aid_placing_vt_set_content_ParamLimits

0x2451,	// (0x00042b38) aid_placing_vt_set_content

0x2479,	// (0x00042b60) aid_placing_vt_set_title_ParamLimits

0x2479,	// (0x00042b60) aid_placing_vt_set_title

0xc935,	// (0x0004d01c) main_image3_pane

0x6548,	// (0x00046c2f) area_side_right_pane_cp01_ParamLimits

0x6548,	// (0x00046c2f) area_side_right_pane_cp01

0xa875,	// (0x0004af5c) main_image3_pane_g1_ParamLimits

0xa875,	// (0x0004af5c) main_image3_pane_g1

0x655f,	// (0x00046c46) main_image3_pane_g2_ParamLimits

0x655f,	// (0x00046c46) main_image3_pane_g2

0x6587,	// (0x00046c6e) main_image3_pane_g3_ParamLimits

0x6587,	// (0x00046c6e) main_image3_pane_g3

0x65b1,	// (0x00046c98) main_image3_pane_g4_ParamLimits

0x65b1,	// (0x00046c98) main_image3_pane_g4

0x0003,

0xf639,	// (0x0004fd20) main_image3_pane_g_ParamLimits

0xf639,	// (0x0004fd20) main_image3_pane_g

0x65db,	// (0x00046cc2) main_image3_pane_t1_ParamLimits

0x65db,	// (0x00046cc2) main_image3_pane_t1

0x6633,	// (0x00046d1a) main_image3_pane_t2_ParamLimits

0x6633,	// (0x00046d1a) main_image3_pane_t2

0x6685,	// (0x00046d6c) main_image3_pane_t3_ParamLimits

0x6685,	// (0x00046d6c) main_image3_pane_t3

0x0003,

0xf642,	// (0x0004fd29) main_image3_pane_t_ParamLimits

0xf642,	// (0x0004fd29) main_image3_pane_t

0xcfe4,	// (0x0004d6cb) grid_sctrl_middle_pane_cp01_ParamLimits

0xcfe4,	// (0x0004d6cb) grid_sctrl_middle_pane_cp01

0x670d,	// (0x00046df4) cell_sctrl_middle_pane_cp01_ParamLimits

0x670d,	// (0x00046df4) cell_sctrl_middle_pane_cp01

0x672a,	// (0x00046e11) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x672a,	// (0x00046e11) cell_sctrl_middle_pane_cp01_g1

0xc935,	// (0x0004d01c) main_call4_pane

0x6740,	// (0x00046e27) aid_size_button_call4_ParamLimits

0x6740,	// (0x00046e27) aid_size_button_call4

0x6773,	// (0x00046e5a) call4_windows_pane_ParamLimits

0x6773,	// (0x00046e5a) call4_windows_pane

0x6792,	// (0x00046e79) grid_call4_button_pane_ParamLimits

0x6792,	// (0x00046e79) grid_call4_button_pane

0x67c5,	// (0x00046eac) call4_windows_conf_pane

0x67dc,	// (0x00046ec3) popup_call4_audio_first_window_ParamLimits

0x67dc,	// (0x00046ec3) popup_call4_audio_first_window

0x682c,	// (0x00046f13) popup_call4_audio_second_window_ParamLimits

0x682c,	// (0x00046f13) popup_call4_audio_second_window

0x6843,	// (0x00046f2a) popup_call4_audio_wait_window_ParamLimits

0x6843,	// (0x00046f2a) popup_call4_audio_wait_window

0x6851,	// (0x00046f38) cell_call4_button_pane_ParamLimits

0x6851,	// (0x00046f38) cell_call4_button_pane

0x6876,	// (0x00046f5d) bg_button_pane_cp09_ParamLimits

0x6876,	// (0x00046f5d) bg_button_pane_cp09

0x6882,	// (0x00046f69) cell_call4_button_pane_g1_ParamLimits

0x6882,	// (0x00046f69) cell_call4_button_pane_g1

0x68a8,	// (0x00046f8f) cell_call4_button_pane_t1_ParamLimits

0x68a8,	// (0x00046f8f) cell_call4_button_pane_t1

0x68d6,	// (0x00046fbd) popup_call4_audio_conf_window_ParamLimits

0x68d6,	// (0x00046fbd) popup_call4_audio_conf_window

0x573f,	// (0x00045e26) mup3_progress_pane_t1_ParamLimits

0x575e,	// (0x00045e45) mup3_progress_pane_t2_ParamLimits

0x577d,	// (0x00045e64) mup3_progress_pane_t3_ParamLimits

0xf517,	// (0x0004fbfe) mup3_progress_pane_t_ParamLimits

0x579a,	// (0x00045e81) mup_progress_pane_cp03_ParamLimits

0x5f4d,	// (0x00046634) mup3_control_keys_pane_g4_copy1

0xaa45,	// (0x0004b12c) mp4_rocker2_pane_ParamLimits

0xaa45,	// (0x0004b12c) mp4_rocker2_pane

0x68ea,	// (0x00046fd1) mp4_rocker2_pane_g1

0x68f2,	// (0x00046fd9) mp4_rocker2_pane_g2

0xaae5,	// (0x0004b1cc) mp4_rocker2_pane_g3

0xaaed,	// (0x0004b1d4) mp4_rocker2_pane_g4

0xaaf5,	// (0x0004b1dc) mp4_rocker2_pane_g5

0x0004,

0xf64b,	// (0x0004fd32) mp4_rocker2_pane_g

0xc935,	// (0x0004d01c) main_camera4_pane

0xc935,	// (0x0004d01c) main_video4_pane

0x6243,	// (0x0004692a) main_video_tele_dialer_pane_t1_ParamLimits

0x6243,	// (0x0004692a) main_video_tele_dialer_pane_t1

0x625c,	// (0x00046943) main_video_tele_dialer_pane_t2_ParamLimits

0x625c,	// (0x00046943) main_video_tele_dialer_pane_t2

0x0001,

0xf601,	// (0x0004fce8) main_video_tele_dialer_pane_t_ParamLimits

0xf601,	// (0x0004fce8) main_video_tele_dialer_pane_t

0x6912,	// (0x00046ff9) cam4_autofocus_pane_ParamLimits

0x6912,	// (0x00046ff9) cam4_autofocus_pane

0x6928,	// (0x0004700f) cam4_image_uncrop_pane_ParamLimits

0x6928,	// (0x0004700f) cam4_image_uncrop_pane

0x6942,	// (0x00047029) cam4_indicators_pane_ParamLimits

0x6942,	// (0x00047029) cam4_indicators_pane

0x696d,	// (0x00047054) main_camera4_pane_g1_ParamLimits

0x696d,	// (0x00047054) main_camera4_pane_g1

0x697f,	// (0x00047066) main_camera4_pane_g2_ParamLimits

0x697f,	// (0x00047066) main_camera4_pane_g2

0x6992,	// (0x00047079) main_camera4_pane_g3_ParamLimits

0x6992,	// (0x00047079) main_camera4_pane_g3

0x69a5,	// (0x0004708c) main_camera4_pane_g4_ParamLimits

0x69a5,	// (0x0004708c) main_camera4_pane_g4

0x69b8,	// (0x0004709f) main_camera4_pane_g5_ParamLimits

0x69b8,	// (0x0004709f) main_camera4_pane_g5

0x0005,

0xf656,	// (0x0004fd3d) main_camera4_pane_g_ParamLimits

0xf656,	// (0x0004fd3d) main_camera4_pane_g

0x69dc,	// (0x000470c3) main_camera4_pane_t1_ParamLimits

0x69dc,	// (0x000470c3) main_camera4_pane_t1

0xd07d,	// (0x0004d764) bg_tb_trans_pane_cp06

0xab21,	// (0x0004b208) cam4_indicators_pane_g1

0xab32,	// (0x0004b219) cam4_indicators_pane_g2

0x0002,

0xf671,	// (0x0004fd58) cam4_indicators_pane_g

0xab50,	// (0x0004b237) cam4_indicators_pane_t1

0x6a52,	// (0x00047139) main_video4_pane_g1_ParamLimits

0x6a52,	// (0x00047139) main_video4_pane_g1

0x6a61,	// (0x00047148) main_video4_pane_g2_ParamLimits

0x6a61,	// (0x00047148) main_video4_pane_g2

0x6a70,	// (0x00047157) main_video4_pane_g3_ParamLimits

0x6a70,	// (0x00047157) main_video4_pane_g3

0x6a7f,	// (0x00047166) main_video4_pane_g4_ParamLimits

0x6a7f,	// (0x00047166) main_video4_pane_g4

0x0004,

0xf678,	// (0x0004fd5f) main_video4_pane_g_ParamLimits

0xf678,	// (0x0004fd5f) main_video4_pane_g

0x6a9d,	// (0x00047184) vid4_indicators_pane_ParamLimits

0x6a9d,	// (0x00047184) vid4_indicators_pane

0x6acb,	// (0x000471b2) video4_image_uncrop_cif_pane_ParamLimits

0x6acb,	// (0x000471b2) video4_image_uncrop_cif_pane

0x6ae5,	// (0x000471cc) video4_image_uncrop_nhd_pane_ParamLimits

0x6ae5,	// (0x000471cc) video4_image_uncrop_nhd_pane

0x6928,	// (0x0004700f) video4_image_uncrop_vga_pane_ParamLimits

0x6928,	// (0x0004700f) video4_image_uncrop_vga_pane

0xcfe4,	// (0x0004d6cb) bg_tb_trans_pane_cp07

0xab7c,	// (0x0004b263) vid4_indicators_pane_g1

0xab90,	// (0x0004b277) vid4_indicators_pane_g2

0xaba4,	// (0x0004b28b) vid4_indicators_pane_g3

0x0004,

0xf683,	// (0x0004fd6a) vid4_indicators_pane_g

0xabd3,	// (0x0004b2ba) vid4_indicators_pane_t1

0x6af9,	// (0x000471e0) cam4_autofocus_pane_g1

0x6b01,	// (0x000471e8) cam4_autofocus_pane_g2

0x6b09,	// (0x000471f0) cam4_autofocus_pane_g3

0x0002,

0xf68e,	// (0x0004fd75) cam4_autofocus_pane_g

0x6b11,	// (0x000471f8) cam4_autofocus_pane_g3_copy1

0x628b,	// (0x00046972) video_down_pane_cp_t1

0x6299,	// (0x00046980) video_down_pane_cp_t2

0x0001,

0xf606,	// (0x0004fced) video_down_pane_cp_t

0xcfe4,	// (0x0004d6cb) popup_vitu2_window_ParamLimits

0xcfe4,	// (0x0004d6cb) popup_vitu2_window

0x6b19,	// (0x00047200) aid_size_cell2_itu2_ParamLimits

0x6b19,	// (0x00047200) aid_size_cell2_itu2

0x6b3f,	// (0x00047226) aid_size_cell_itu2_ParamLimits

0x6b3f,	// (0x00047226) aid_size_cell_itu2

0x58bf,	// (0x00045fa6) bg_popup_window_pane_cp09_ParamLimits

0x58bf,	// (0x00045fa6) bg_popup_window_pane_cp09

0x6b9b,	// (0x00047282) field_vitu2_entry_pane_ParamLimits

0x6b9b,	// (0x00047282) field_vitu2_entry_pane

0x6bc1,	// (0x000472a8) grid_vitu2_function_pane_ParamLimits

0x6bc1,	// (0x000472a8) grid_vitu2_function_pane

0x6c12,	// (0x000472f9) grid_vitu2_itu_pane_ParamLimits

0x6c12,	// (0x000472f9) grid_vitu2_itu_pane

0x6ca8,	// (0x0004738f) cell_vitu2_itu_pane_ParamLimits

0x6ca8,	// (0x0004738f) cell_vitu2_itu_pane

0x6cd4,	// (0x000473bb) cell_vitu2_function_pane_ParamLimits

0x6cd4,	// (0x000473bb) cell_vitu2_function_pane

0x6d13,	// (0x000473fa) bg_popup_call_pane_cp08_ParamLimits

0x6d13,	// (0x000473fa) bg_popup_call_pane_cp08

0x6d2a,	// (0x00047411) field_vitu2_entry_pane_g1

0x6d36,	// (0x0004741d) field_vitu2_entry_pane_g2

0x0002,

0xf695,	// (0x0004fd7c) field_vitu2_entry_pane_g

0x0ec8,	// (0x000415af) field_vitu2_entry_pane_t1_ParamLimits

0x0ec8,	// (0x000415af) field_vitu2_entry_pane_t1

0xabea,	// (0x0004b2d1) field_vitu2_entry_pane_t2_ParamLimits

0xabea,	// (0x0004b2d1) field_vitu2_entry_pane_t2

0x0001,

0xf69c,	// (0x0004fd83) field_vitu2_entry_pane_t_ParamLimits

0xf69c,	// (0x0004fd83) field_vitu2_entry_pane_t

0x6d4a,	// (0x00047431) bg_button_pane_cp010_ParamLimits

0x6d4a,	// (0x00047431) bg_button_pane_cp010

0x6d58,	// (0x0004743f) cell_vitu2_itu_pane_g1

0x6d7e,	// (0x00047465) cell_vitu2_itu_pane_t1_ParamLimits

0x6d7e,	// (0x00047465) cell_vitu2_itu_pane_t1

0x0ef8,	// (0x000415df) cell_vitu2_itu_pane_t2_ParamLimits

0x0ef8,	// (0x000415df) cell_vitu2_itu_pane_t2

0x0002,

0xf6a6,	// (0x0004fd8d) cell_vitu2_itu_pane_t_ParamLimits

0xf6a6,	// (0x0004fd8d) cell_vitu2_itu_pane_t

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp011

0x6ddc,	// (0x000474c3) cell_vitu2_function_pane_g1

0xc935,	// (0x0004d01c) main_myfav_hc_pane

0x66d5,	// (0x00046dbc) popup_image3_note_pane_ParamLimits

0x66d5,	// (0x00046dbc) popup_image3_note_pane

0x66f1,	// (0x00046dd8) popup_image3_tool_bar_pane_ParamLimits

0x66f1,	// (0x00046dd8) popup_image3_tool_bar_pane

0x0f86,	// (0x0004166d) cell_vitu2_itu_pane_t3_ParamLimits

0x0f86,	// (0x0004166d) cell_vitu2_itu_pane_t3

0xc935,	// (0x0004d01c) bg_popup_trans_pane

0x6df0,	// (0x000474d7) grid_image3_tool_bar_pane

0x6dfa,	// (0x000474e1) bg_popup_trans_pane_g1

0xd4fc,	// (0x0004dbe3) bg_popup_trans_pane_g2

0x6e02,	// (0x000474e9) bg_popup_trans_pane_g3

0x6e0a,	// (0x000474f1) bg_popup_trans_pane_g4

0x6e12,	// (0x000474f9) bg_popup_trans_pane_g5

0x6e1a,	// (0x00047501) bg_popup_trans_pane_g6

0x6e22,	// (0x00047509) bg_popup_trans_pane_g7

0x6e2a,	// (0x00047511) bg_popup_trans_pane_g8

0xd4dc,	// (0x0004dbc3) bg_popup_trans_pane_g9

0x0008,

0xf6ad,	// (0x0004fd94) bg_popup_trans_pane_g

0x6e32,	// (0x00047519) cell_image3_tool_bar_pane_ParamLimits

0x6e32,	// (0x00047519) cell_image3_tool_bar_pane

0xd2d7,	// (0x0004d9be) cell_image3_tool_bar_pane_g1

0xc935,	// (0x0004d01c) bg_popup_trans_pane_cp1

0x6e46,	// (0x0004752d) popup_image3_note_pane_t1

0x6e54,	// (0x0004753b) popup_image3_note_pane_t2

0x6e62,	// (0x00047549) popup_image3_note_pane_t3

0x0002,

0xf6c0,	// (0x0004fda7) popup_image3_note_pane_t

0x6e70,	// (0x00047557) popup_image3_note_pane_t3_copy1

0x6e7e,	// (0x00047565) bg_myfav_hc_instruction_pane_ParamLimits

0x6e7e,	// (0x00047565) bg_myfav_hc_instruction_pane

0x6e92,	// (0x00047579) cell_myfav_contact_pane_ParamLimits

0x6e92,	// (0x00047579) cell_myfav_contact_pane

0x6eb0,	// (0x00047597) cell_myfav_contact_pane_cp1_ParamLimits

0x6eb0,	// (0x00047597) cell_myfav_contact_pane_cp1

0x6ec8,	// (0x000475af) cell_myfav_contact_pane_cp2_ParamLimits

0x6ec8,	// (0x000475af) cell_myfav_contact_pane_cp2

0x6ee0,	// (0x000475c7) cell_myfav_contact_pane_cp3_ParamLimits

0x6ee0,	// (0x000475c7) cell_myfav_contact_pane_cp3

0x6ef7,	// (0x000475de) cell_myfav_contact_pane_cp4_ParamLimits

0x6ef7,	// (0x000475de) cell_myfav_contact_pane_cp4

0x6f0f,	// (0x000475f6) cell_myfav_contact_pane_cp5_ParamLimits

0x6f0f,	// (0x000475f6) cell_myfav_contact_pane_cp5

0x6f23,	// (0x0004760a) cell_myfav_contact_pane_cp6_ParamLimits

0x6f23,	// (0x0004760a) cell_myfav_contact_pane_cp6

0x6f39,	// (0x00047620) cell_myfav_contact_pane_cp7_ParamLimits

0x6f39,	// (0x00047620) cell_myfav_contact_pane_cp7

0x6f53,	// (0x0004763a) listscroll_gen_pane_cp05

0x6f5c,	// (0x00047643) main_myfav_hc_pane_g1_ParamLimits

0x6f5c,	// (0x00047643) main_myfav_hc_pane_g1

0x6f76,	// (0x0004765d) main_myfav_hc_pane_g2_ParamLimits

0x6f76,	// (0x0004765d) main_myfav_hc_pane_g2

0x0002,

0xf6c7,	// (0x0004fdae) main_myfav_hc_pane_g_ParamLimits

0xf6c7,	// (0x0004fdae) main_myfav_hc_pane_g

0x6fa8,	// (0x0004768f) main_myfav_hc_pane_t1_ParamLimits

0x6fa8,	// (0x0004768f) main_myfav_hc_pane_t1

0x6fbf,	// (0x000476a6) main_myfav_hc_pane_t2_ParamLimits

0x6fbf,	// (0x000476a6) main_myfav_hc_pane_t2

0x6fd1,	// (0x000476b8) main_myfav_hc_pane_t3_ParamLimits

0x6fd1,	// (0x000476b8) main_myfav_hc_pane_t3

0x6fe3,	// (0x000476ca) main_myfav_hc_pane_t4_ParamLimits

0x6fe3,	// (0x000476ca) main_myfav_hc_pane_t4

0x0004,

0xf6ce,	// (0x0004fdb5) main_myfav_hc_pane_t_ParamLimits

0xf6ce,	// (0x0004fdb5) main_myfav_hc_pane_t

0xd2d7,	// (0x0004d9be) bg_myfav_hc_instruction_pane_g1

0x700b,	// (0x000476f2) cell_myfav_contact_pane_g1_ParamLimits

0x700b,	// (0x000476f2) cell_myfav_contact_pane_g1

0x700b,	// (0x000476f2) cell_myfav_contact_pane_g2_ParamLimits

0x700b,	// (0x000476f2) cell_myfav_contact_pane_g2

0x7017,	// (0x000476fe) cell_myfav_contact_pane_g3_ParamLimits

0x7017,	// (0x000476fe) cell_myfav_contact_pane_g3

0xd08b,	// (0x0004d772) cell_myfav_contact_pane_g4_ParamLimits

0xd08b,	// (0x0004d772) cell_myfav_contact_pane_g4

0x7024,	// (0x0004770b) cell_myfav_contact_pane_g5_ParamLimits

0x7024,	// (0x0004770b) cell_myfav_contact_pane_g5

0x0004,

0xf6d9,	// (0x0004fdc0) cell_myfav_contact_pane_g_ParamLimits

0xf6d9,	// (0x0004fdc0) cell_myfav_contact_pane_g

0x6f90,	// (0x00047677) main_myfav_hc_pane_g3_ParamLimits

0x6f90,	// (0x00047677) main_myfav_hc_pane_g3

0x181f,	// (0x00041f06) popup_adpt_find_window

0x7030,	// (0x00047717) afind_page_pane_ParamLimits

0x7030,	// (0x00047717) afind_page_pane

0x7045,	// (0x0004772c) aid_size_cell_afind_ParamLimits

0x7045,	// (0x0004772c) aid_size_cell_afind

0x7063,	// (0x0004774a) bg_popup_sub_pane_cp09_ParamLimits

0x7063,	// (0x0004774a) bg_popup_sub_pane_cp09

0x7070,	// (0x00047757) find_pane_cp01_ParamLimits

0x7070,	// (0x00047757) find_pane_cp01

0x707d,	// (0x00047764) grid_afind_control_pane_ParamLimits

0x707d,	// (0x00047764) grid_afind_control_pane

0x7091,	// (0x00047778) grid_afind_pane_ParamLimits

0x7091,	// (0x00047778) grid_afind_pane

0x70b3,	// (0x0004779a) cell_afind_pane_ParamLimits

0x70b3,	// (0x0004779a) cell_afind_pane

0xd2d7,	// (0x0004d9be) afind_page_pane_g1

0x711a,	// (0x00047801) afind_page_pane_g2

0x7123,	// (0x0004780a) afind_page_pane_g3

0x0002,

0xf6e4,	// (0x0004fdcb) afind_page_pane_g

0x712c,	// (0x00047813) afind_page_pane_t1

0x714c,	// (0x00047833) cell_afind_grid_control_pane_ParamLimits

0x714c,	// (0x00047833) cell_afind_grid_control_pane

0x6476,	// (0x00046b5d) bg_button_pane_cp69_ParamLimits

0x6476,	// (0x00046b5d) bg_button_pane_cp69

0x715b,	// (0x00047842) cell_afind_pane_g1_ParamLimits

0x715b,	// (0x00047842) cell_afind_pane_g1

0x7168,	// (0x0004784f) cell_afind_pane_t1_ParamLimits

0x7168,	// (0x0004784f) cell_afind_pane_t1

0xd2e1,	// (0x0004d9c8) bg_button_pane_cp72

0x717a,	// (0x00047861) cell_afind_grid_control_pane_g1

0x3d85,	// (0x0004446c) aid_image_placing_area_ParamLimits

0x3d85,	// (0x0004446c) aid_image_placing_area

0xd07d,	// (0x0004d764) field_vitu_entry_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) field_vitu_entry_pane_g1

0xd07d,	// (0x0004d764) field_vitu_entry_pane_g2_ParamLimits

0xd07d,	// (0x0004d764) field_vitu_entry_pane_g2

0x0001,

0x0111,	// (0x000407f8) field_vitu_entry_pane_g_ParamLimits

0x0111,	// (0x000407f8) field_vitu_entry_pane_g

0x5f72,	// (0x00046659) cell_vitu_itu_pane_g1_ParamLimits

0x5f55,	// (0x0004663c) cell_vitu_itu_pane_t3_ParamLimits

0x5f55,	// (0x0004663c) cell_vitu_itu_pane_t3

0x6376,	// (0x00046a5d) mp4_progress_pane_t1_ParamLimits

0x638f,	// (0x00046a76) mp4_progress_pane_t2_ParamLimits

0xf62a,	// (0x0004fd11) mp4_progress_pane_t_ParamLimits

0x63a8,	// (0x00046a8f) mup_progress_pane_cp04_ParamLimits

0x6ff7,	// (0x000476de) main_myfav_hc_pane_t5_ParamLimits

0x6ff7,	// (0x000476de) main_myfav_hc_pane_t5

0xa4ec,	// (0x0004abd3) aid_zoom_text_primary

0x181f,	// (0x00041f06) popup_adpt_find_window_ParamLimits

0xcfe4,	// (0x0004d6cb) main_cam_set_pane

0x6959,	// (0x00047040) cam4_zoom_pane_ParamLimits

0x6959,	// (0x00047040) cam4_zoom_pane

0x7183,	// (0x0004786a) main_cam_set_pane_g1_ParamLimits

0x7183,	// (0x0004786a) main_cam_set_pane_g1

0x7191,	// (0x00047878) main_cam_set_pane_g2_ParamLimits

0x7191,	// (0x00047878) main_cam_set_pane_g2

0x0001,

0xf6eb,	// (0x0004fdd2) main_cam_set_pane_g_ParamLimits

0xf6eb,	// (0x0004fdd2) main_cam_set_pane_g

0x71b2,	// (0x00047899) main_cam_set_pane_t1_ParamLimits

0x71b2,	// (0x00047899) main_cam_set_pane_t1

0x71cd,	// (0x000478b4) main_cset_listscroll_pane_ParamLimits

0x71cd,	// (0x000478b4) main_cset_listscroll_pane

0x71f3,	// (0x000478da) main_cset_slider_pane_ParamLimits

0x71f3,	// (0x000478da) main_cset_slider_pane

0x7221,	// (0x00047908) main_cset_list_pane_ParamLimits

0x7221,	// (0x00047908) main_cset_list_pane

0x7231,	// (0x00047918) scroll_pane_cp028

0x723a,	// (0x00047921) aid_area_touch_slider

0x7256,	// (0x0004793d) cset_slider_pane

0x7279,	// (0x00047960) main_cset_slider_pane_g1

0x728e,	// (0x00047975) main_cset_slider_pane_g2

0x0011,

0xf6f0,	// (0x0004fdd7) main_cset_slider_pane_g

0x737a,	// (0x00047a61) main_cset_slider_pane_t1

0x73a2,	// (0x00047a89) main_cset_slider_pane_t2

0x73bc,	// (0x00047aa3) main_cset_slider_pane_t3

0x73d6,	// (0x00047abd) main_cset_slider_pane_t4

0x73f0,	// (0x00047ad7) main_cset_slider_pane_t5

0x740a,	// (0x00047af1) main_cset_slider_pane_t6

0x741f,	// (0x00047b06) main_cset_slider_pane_t7

0x000e,

0xf715,	// (0x0004fdfc) main_cset_slider_pane_t

0x7595,	// (0x00047c7c) cset_list_set_pane_ParamLimits

0x7595,	// (0x00047c7c) cset_list_set_pane

0x75a7,	// (0x00047c8e) aid_position_infowindow_above

0x75af,	// (0x00047c96) aid_position_infowindow_below

0xac07,	// (0x0004b2ee) cset_list_set_pane_g1_ParamLimits

0xac07,	// (0x0004b2ee) cset_list_set_pane_g1

0xac13,	// (0x0004b2fa) cset_list_set_pane_g3_ParamLimits

0xac13,	// (0x0004b2fa) cset_list_set_pane_g3

0x0001,

0xf734,	// (0x0004fe1b) cset_list_set_pane_g_ParamLimits

0xf734,	// (0x0004fe1b) cset_list_set_pane_g

0xac22,	// (0x0004b309) cset_list_set_pane_t1_ParamLimits

0xac22,	// (0x0004b309) cset_list_set_pane_t1

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp021_ParamLimits

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp021

0xde1d,	// (0x0004e504) cset_slider_pane_g1

0xde2f,	// (0x0004e516) cset_slider_pane_g2

0xde26,	// (0x0004e50d) cset_slider_pane_g3

0x0002,

0x085b,	// (0x00040f42) cset_slider_pane_g

0xac37,	// (0x0004b31e) aid_area_touch_cam4_zoom

0xac3f,	// (0x0004b326) cam4_zoom_cont_pane

0xac47,	// (0x0004b32e) cam4_zoom_pane_g1

0xac4f,	// (0x0004b336) cam4_zoom_pane_g2

0x75b7,	// (0x00047c9e) cam4_zoom_pane_g3

0x0002,

0xf739,	// (0x0004fe20) cam4_zoom_pane_g

0xac57,	// (0x0004b33e) cam4_zoom_cont_pane_g1

0xac60,	// (0x0004b347) cam4_zoom_cont_pane_g2

0xac69,	// (0x0004b350) cam4_zoom_cont_pane_g3

0x0002,

0xf740,	// (0x0004fe27) cam4_zoom_cont_pane_g

0x675e,	// (0x00046e45) call4_image_pane_ParamLimits

0x675e,	// (0x00046e45) call4_image_pane

0x67c5,	// (0x00046eac) call4_windows_conf_pane_ParamLimits

0x680a,	// (0x00046ef1) popup_call4_audio_in_window_ParamLimits

0x680a,	// (0x00046ef1) popup_call4_audio_in_window

0xc935,	// (0x0004d01c) bg_popup_call2_act_pane_cp02

0x68ce,	// (0x00046fb5) call4_list_conf_pane

0xd2d7,	// (0x0004d9be) call4_image_pane_g1

0xd2d7,	// (0x0004d9be) call4_image_pane_g2

0x0001,

0x02ed,	// (0x000409d4) call4_image_pane_g

0x75bf,	// (0x00047ca6) list_single_graphic_popup_conf4_pane_ParamLimits

0x75bf,	// (0x00047ca6) list_single_graphic_popup_conf4_pane

0xc935,	// (0x0004d01c) list_highlight_pane_cp022

0x75d2,	// (0x00047cb9) list_single_graphic_popup_conf4_pane_g1

0xda11,	// (0x0004e0f8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf747,	// (0x0004fe2e) list_single_graphic_popup_conf4_pane_g

0x75da,	// (0x00047cc1) list_single_graphic_popup_conf4_pane_t1

0x259d,	// (0x00042c84) popup_vtel_slider_window_ParamLimits

0x259d,	// (0x00042c84) popup_vtel_slider_window

0x6442,	// (0x00046b29) dialer2_ne_pane_t2_ParamLimits

0x6442,	// (0x00046b29) dialer2_ne_pane_t2

0x0001,

0xf62f,	// (0x0004fd16) dialer2_ne_pane_t_ParamLimits

0xf62f,	// (0x0004fd16) dialer2_ne_pane_t

0x4893,	// (0x00044f7a) bg_popup_sub_pane_cp010_ParamLimits

0x4893,	// (0x00044f7a) bg_popup_sub_pane_cp010

0x75f0,	// (0x00047cd7) popup_vtel_slider_window_g1_ParamLimits

0x75f0,	// (0x00047cd7) popup_vtel_slider_window_g1

0x7603,	// (0x00047cea) popup_vtel_slider_window_g2_ParamLimits

0x7603,	// (0x00047cea) popup_vtel_slider_window_g2

0x0003,

0xf74c,	// (0x0004fe33) popup_vtel_slider_window_g_ParamLimits

0xf74c,	// (0x0004fe33) popup_vtel_slider_window_g

0x7659,	// (0x00047d40) vtel_slider_pane_ParamLimits

0x7659,	// (0x00047d40) vtel_slider_pane

0x767b,	// (0x00047d62) vtel_slider_pane_g1_ParamLimits

0x767b,	// (0x00047d62) vtel_slider_pane_g1

0x768f,	// (0x00047d76) vtel_slider_pane_g2_ParamLimits

0x768f,	// (0x00047d76) vtel_slider_pane_g2

0x76a7,	// (0x00047d8e) vtel_slider_pane_g3_ParamLimits

0x76a7,	// (0x00047d8e) vtel_slider_pane_g3

0x767b,	// (0x00047d62) vtel_slider_pane_g4_ParamLimits

0x767b,	// (0x00047d62) vtel_slider_pane_g4

0x76bd,	// (0x00047da4) vtel_slider_pane_g5_ParamLimits

0x76bd,	// (0x00047da4) vtel_slider_pane_g5

0x0004,

0xf755,	// (0x0004fe3c) vtel_slider_pane_g_ParamLimits

0xf755,	// (0x0004fe3c) vtel_slider_pane_g

0xcfe4,	// (0x0004d6cb) main_gallery2_pane

0x6b6b,	// (0x00047252) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b6b,	// (0x00047252) aid_size_row_itut2_dropdow_list

0x6be9,	// (0x000472d0) grid_vitu2_function_top_pane_ParamLimits

0x6be9,	// (0x000472d0) grid_vitu2_function_top_pane

0x6c53,	// (0x0004733a) popup_vitu2_dropdown_list_window_ParamLimits

0x6c53,	// (0x0004733a) popup_vitu2_dropdown_list_window

0x6c7a,	// (0x00047361) popup_vitu2_match_list_window

0x76d3,	// (0x00047dba) cell_vitu2_function_top_pane_ParamLimits

0x76d3,	// (0x00047dba) cell_vitu2_function_top_pane

0x76eb,	// (0x00047dd2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76eb,	// (0x00047dd2) cell_vitu2_function_top_pane_cp01

0x7707,	// (0x00047dee) cell_vitu2_function_top_wide_pane_ParamLimits

0x7707,	// (0x00047dee) cell_vitu2_function_top_wide_pane

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp012

0x7725,	// (0x00047e0c) cell_vitu2_function_top_pane_g1

0xac72,	// (0x0004b359) bg_button_pane_cp013_ParamLimits

0xac72,	// (0x0004b359) bg_button_pane_cp013

0x7739,	// (0x00047e20) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7739,	// (0x00047e20) cell_vitu2_function_top_wide_pane_g1

0xcfe4,	// (0x0004d6cb) bg_popup_sub_pane_cp20

0x7751,	// (0x00047e38) list_vitu2_match_list_pane

0x6dfa,	// (0x000474e1) bg_popup_sub_pane_cp20_g1

0x6e02,	// (0x000474e9) bg_popup_sub_pane_cp20_g2

0xd4fc,	// (0x0004dbe3) bg_popup_sub_pane_cp20_g3

0x6e0a,	// (0x000474f1) bg_popup_sub_pane_cp20_g4

0xd4dc,	// (0x0004dbc3) bg_popup_sub_pane_cp20_g5

0x7769,	// (0x00047e50) bg_popup_sub_pane_cp20_g6

0x6e1a,	// (0x00047501) bg_popup_sub_pane_cp20_g7

0x6e22,	// (0x00047509) bg_popup_sub_pane_cp20_g8

0x6e2a,	// (0x00047511) bg_popup_sub_pane_cp20_g9

0x0008,

0xf760,	// (0x0004fe47) bg_popup_sub_pane_cp20_g

0xac8e,	// (0x0004b375) list_vitu2_match_list_item_pane_ParamLimits

0xac8e,	// (0x0004b375) list_vitu2_match_list_item_pane

0xaca0,	// (0x0004b387) list_vitu2_match_list_item_pane_t1

0xc935,	// (0x0004d01c) bg_popup_sub_pane_cp21

0xd2a1,	// (0x0004d988) grid_vitu2_dropdown_list_pane

0x7771,	// (0x00047e58) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7771,	// (0x00047e58) cell_vitu2_dropdown_list_char_pane

0x7791,	// (0x00047e78) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7791,	// (0x00047e78) cell_vitu2_dropdown_list_ctrl_pane

0x77b9,	// (0x00047ea0) cell_vitu2_dropdown_list_char_pane_g1

0x77c2,	// (0x00047ea9) cell_vitu2_dropdown_list_char_pane_g2

0x77cb,	// (0x00047eb2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf773,	// (0x0004fe5a) cell_vitu2_dropdown_list_char_pane_g

0x77d4,	// (0x00047ebb) cell_vitu2_dropdown_list_char_pane_t1

0x77e2,	// (0x00047ec9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x77e2,	// (0x00047ec9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x77ef,	// (0x00047ed6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x77ef,	// (0x00047ed6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x77fc,	// (0x00047ee3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x77fc,	// (0x00047ee3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7809,	// (0x00047ef0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7809,	// (0x00047ef0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd07d,	// (0x0004d764) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd07d,	// (0x0004d764) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf77a,	// (0x0004fe61) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf77a,	// (0x0004fe61) cell_vitu2_dropdown_list_ctrl_pane_g

0x7825,	// (0x00047f0c) aid_size_cell_gallery2_ParamLimits

0x7825,	// (0x00047f0c) aid_size_cell_gallery2

0x7843,	// (0x00047f2a) grid_gallery2_pane_ParamLimits

0x7843,	// (0x00047f2a) grid_gallery2_pane

0x785d,	// (0x00047f44) scroll_pane_cp029_ParamLimits

0x785d,	// (0x00047f44) scroll_pane_cp029

0x786e,	// (0x00047f55) cell_gallery2_pane_ParamLimits

0x786e,	// (0x00047f55) cell_gallery2_pane

0x78cd,	// (0x00047fb4) cell_gallery2_pane_g2

0x78d5,	// (0x00047fbc) cell_gallery2_pane_g3

0x78dd,	// (0x00047fc4) cell_gallery2_pane_g4

0x78e5,	// (0x00047fcc) cell_gallery2_pane_g5

0xd2a1,	// (0x0004d988) grid_highlight_pane_cp10

0x6c7a,	// (0x00047361) popup_vitu2_match_list_window_ParamLimits

0x6c8f,	// (0x00047376) popup_vitu2_query_window_ParamLimits

0x6c8f,	// (0x00047376) popup_vitu2_query_window

0xc935,	// (0x0004d01c) bg_vitu2_candi_button_pane

0x77b9,	// (0x00047ea0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x77c2,	// (0x00047ea9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x77cb,	// (0x00047eb2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fe4,	// (0x000416cb) bg_button_pane_cp015

0x78ed,	// (0x00047fd4) bg_button_pane_cp016

0x78f9,	// (0x00047fe0) bg_button_pane_cp017

0xe75a,	// (0x0004ee41) bg_popup_sub_pane_cp22

0x7914,	// (0x00047ffb) popup_vitu2_query_window_g1

0x1018,	// (0x000416ff) popup_vitu2_query_window_g2

0x0002,

0xf785,	// (0x0004fe6c) popup_vitu2_query_window_g

0x102e,	// (0x00041715) popup_vitu2_query_window_t1_ParamLimits

0x102e,	// (0x00041715) popup_vitu2_query_window_t1

0x1061,	// (0x00041748) popup_vitu2_query_window_t2_ParamLimits

0x1061,	// (0x00041748) popup_vitu2_query_window_t2

0x1073,	// (0x0004175a) popup_vitu2_query_window_t3_ParamLimits

0x1073,	// (0x0004175a) popup_vitu2_query_window_t3

0x792c,	// (0x00048013) popup_vitu2_query_window_t4_ParamLimits

0x792c,	// (0x00048013) popup_vitu2_query_window_t4

0x7940,	// (0x00048027) popup_vitu2_query_window_t5_ParamLimits

0x7940,	// (0x00048027) popup_vitu2_query_window_t5

0x0006,

0xf78c,	// (0x0004fe73) popup_vitu2_query_window_t_ParamLimits

0xf78c,	// (0x0004fe73) popup_vitu2_query_window_t

0x7219,	// (0x00047900) main_cset_text_pane

0x723a,	// (0x00047921) aid_area_touch_slider_ParamLimits

0x7256,	// (0x0004793d) cset_slider_pane_ParamLimits

0x7279,	// (0x00047960) main_cset_slider_pane_g1_ParamLimits

0x728e,	// (0x00047975) main_cset_slider_pane_g2_ParamLimits

0x72a3,	// (0x0004798a) main_cset_slider_pane_g3_ParamLimits

0x72a3,	// (0x0004798a) main_cset_slider_pane_g3

0x72af,	// (0x00047996) main_cset_slider_pane_g4_ParamLimits

0x72af,	// (0x00047996) main_cset_slider_pane_g4

0x72be,	// (0x000479a5) main_cset_slider_pane_g5_ParamLimits

0x72be,	// (0x000479a5) main_cset_slider_pane_g5

0x72ca,	// (0x000479b1) main_cset_slider_pane_g6_ParamLimits

0x72ca,	// (0x000479b1) main_cset_slider_pane_g6

0xf6f0,	// (0x0004fdd7) main_cset_slider_pane_g_ParamLimits

0x737a,	// (0x00047a61) main_cset_slider_pane_t1_ParamLimits

0x73a2,	// (0x00047a89) main_cset_slider_pane_t2_ParamLimits

0x73bc,	// (0x00047aa3) main_cset_slider_pane_t3_ParamLimits

0x73d6,	// (0x00047abd) main_cset_slider_pane_t4_ParamLimits

0x73f0,	// (0x00047ad7) main_cset_slider_pane_t5_ParamLimits

0x740a,	// (0x00047af1) main_cset_slider_pane_t6_ParamLimits

0x741f,	// (0x00047b06) main_cset_slider_pane_t7_ParamLimits

0x7449,	// (0x00047b30) main_cset_slider_pane_t8_ParamLimits

0x7449,	// (0x00047b30) main_cset_slider_pane_t8

0x7471,	// (0x00047b58) main_cset_slider_pane_t9_ParamLimits

0x7471,	// (0x00047b58) main_cset_slider_pane_t9

0x7499,	// (0x00047b80) main_cset_slider_pane_t10_ParamLimits

0x7499,	// (0x00047b80) main_cset_slider_pane_t10

0x74c1,	// (0x00047ba8) main_cset_slider_pane_t11_ParamLimits

0x74c1,	// (0x00047ba8) main_cset_slider_pane_t11

0x74e9,	// (0x00047bd0) main_cset_slider_pane_t12_ParamLimits

0x74e9,	// (0x00047bd0) main_cset_slider_pane_t12

0x7506,	// (0x00047bed) main_cset_slider_pane_t13_ParamLimits

0x7506,	// (0x00047bed) main_cset_slider_pane_t13

0xf715,	// (0x0004fdfc) main_cset_slider_pane_t_ParamLimits

0xc935,	// (0x0004d01c) bg_popup_sub_pane_cp011

0x7954,	// (0x0004803b) main_cset_text_pane_g1

0x795c,	// (0x00048043) main_cset_text_pane_t1

0x796a,	// (0x00048051) main_cset_text_pane_t2

0x7978,	// (0x0004805f) main_cset_text_pane_t3

0x7986,	// (0x0004806d) main_cset_text_pane_t4

0x7994,	// (0x0004807b) main_cset_text_pane_t5

0x79a2,	// (0x00048089) main_cset_text_pane_t6

0x79b0,	// (0x00048097) main_cset_text_pane_t7

0x0006,

0xf79b,	// (0x0004fe82) main_cset_text_pane_t

0xc935,	// (0x0004d01c) main_cam4_burst_pane

0xc935,	// (0x0004d01c) main_cam5_pane

0x713a,	// (0x00047821) bg_button_pane_cp019

0x7143,	// (0x0004782a) bg_button_pane_cp020

0x72de,	// (0x000479c5) main_cset_slider_pane_g7_ParamLimits

0x72de,	// (0x000479c5) main_cset_slider_pane_g7

0x72ea,	// (0x000479d1) main_cset_slider_pane_g8_ParamLimits

0x72ea,	// (0x000479d1) main_cset_slider_pane_g8

0x72f6,	// (0x000479dd) main_cset_slider_pane_g9_ParamLimits

0x72f6,	// (0x000479dd) main_cset_slider_pane_g9

0x7302,	// (0x000479e9) main_cset_slider_pane_g10_ParamLimits

0x7302,	// (0x000479e9) main_cset_slider_pane_g10

0x730e,	// (0x000479f5) main_cset_slider_pane_g11_ParamLimits

0x730e,	// (0x000479f5) main_cset_slider_pane_g11

0x731a,	// (0x00047a01) main_cset_slider_pane_g12_ParamLimits

0x731a,	// (0x00047a01) main_cset_slider_pane_g12

0x7326,	// (0x00047a0d) main_cset_slider_pane_g13_ParamLimits

0x7326,	// (0x00047a0d) main_cset_slider_pane_g13

0x7332,	// (0x00047a19) main_cset_slider_pane_g14_ParamLimits

0x7332,	// (0x00047a19) main_cset_slider_pane_g14

0x733e,	// (0x00047a25) main_cset_slider_pane_g15_ParamLimits

0x733e,	// (0x00047a25) main_cset_slider_pane_g15

0x7523,	// (0x00047c0a) main_cset_slider_pane_t14_ParamLimits

0x7523,	// (0x00047c0a) main_cset_slider_pane_t14

0x755c,	// (0x00047c43) main_cset_slider_pane_t15_ParamLimits

0x755c,	// (0x00047c43) main_cset_slider_pane_t15

0x79be,	// (0x000480a5) aid_cam4_burst_size_cell_ParamLimits

0x79be,	// (0x000480a5) aid_cam4_burst_size_cell

0x79de,	// (0x000480c5) grid_cam4_burst_pane_ParamLimits

0x79de,	// (0x000480c5) grid_cam4_burst_pane

0x7a16,	// (0x000480fd) linegrid_cam4_burst_pane_ParamLimits

0x7a16,	// (0x000480fd) linegrid_cam4_burst_pane

0x7a3a,	// (0x00048121) scroll_pane_cp30_ParamLimits

0x7a3a,	// (0x00048121) scroll_pane_cp30

0x7a46,	// (0x0004812d) cell_cam4_burst_pane_ParamLimits

0x7a46,	// (0x0004812d) cell_cam4_burst_pane

0x7a93,	// (0x0004817a) linegrid_cam4_burst_pane_g1_ParamLimits

0x7a93,	// (0x0004817a) linegrid_cam4_burst_pane_g1

0x7aa0,	// (0x00048187) linegrid_cam4_burst_pane_g2_ParamLimits

0x7aa0,	// (0x00048187) linegrid_cam4_burst_pane_g2

0x7ab1,	// (0x00048198) linegrid_cam4_burst_pane_g3_ParamLimits

0x7ab1,	// (0x00048198) linegrid_cam4_burst_pane_g3

0x0002,

0xf7aa,	// (0x0004fe91) linegrid_cam4_burst_pane_g_ParamLimits

0xf7aa,	// (0x0004fe91) linegrid_cam4_burst_pane_g

0x7abe,	// (0x000481a5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7abe,	// (0x000481a5) linegrid_cam4_burst_pane_g3_copy1

0x7ad8,	// (0x000481bf) linegrid_cam4_burst_pane_g4_ParamLimits

0x7ad8,	// (0x000481bf) linegrid_cam4_burst_pane_g4

0x7ae5,	// (0x000481cc) linegrid_cam4_burst_pane_g5_ParamLimits

0x7ae5,	// (0x000481cc) linegrid_cam4_burst_pane_g5

0x7af6,	// (0x000481dd) linegrid_cam4_burst_pane_g6_ParamLimits

0x7af6,	// (0x000481dd) linegrid_cam4_burst_pane_g6

0x7b0d,	// (0x000481f4) linegrid_cam4_burst_pane_g7_ParamLimits

0x7b0d,	// (0x000481f4) linegrid_cam4_burst_pane_g7

0x7b1a,	// (0x00048201) cell_cam4_burst_pane_g1

0x7b39,	// (0x00048220) main_cam5_pane_t1_ParamLimits

0x7b39,	// (0x00048220) main_cam5_pane_t1

0x7b4b,	// (0x00048232) main_cam5_pane_t2_ParamLimits

0x7b4b,	// (0x00048232) main_cam5_pane_t2

0x7b5d,	// (0x00048244) main_cam5_pane_t3_ParamLimits

0x7b5d,	// (0x00048244) main_cam5_pane_t3

0x7b6f,	// (0x00048256) main_cam5_pane_t4_ParamLimits

0x7b6f,	// (0x00048256) main_cam5_pane_t4

0x7b87,	// (0x0004826e) main_cam5_pane_t5_ParamLimits

0x7b87,	// (0x0004826e) main_cam5_pane_t5

0x7b9b,	// (0x00048282) main_cam5_pane_t6_ParamLimits

0x7b9b,	// (0x00048282) main_cam5_pane_t6

0x7baf,	// (0x00048296) main_cam5_pane_t7_ParamLimits

0x7baf,	// (0x00048296) main_cam5_pane_t7

0x7bc1,	// (0x000482a8) main_cam5_pane_t8_ParamLimits

0x7bc1,	// (0x000482a8) main_cam5_pane_t8

0x7bdd,	// (0x000482c4) main_cam5_pane_t9_ParamLimits

0x7bdd,	// (0x000482c4) main_cam5_pane_t9

0x7bef,	// (0x000482d6) main_cam5_pane_t10_ParamLimits

0x7bef,	// (0x000482d6) main_cam5_pane_t10

0x7c01,	// (0x000482e8) main_cam5_pane_t11_ParamLimits

0x7c01,	// (0x000482e8) main_cam5_pane_t11

0x7c13,	// (0x000482fa) main_cam5_pane_t12_ParamLimits

0x7c13,	// (0x000482fa) main_cam5_pane_t12

0x7c28,	// (0x0004830f) main_cam5_pane_t13_ParamLimits

0x7c28,	// (0x0004830f) main_cam5_pane_t13

0x000c,

0xf7b6,	// (0x0004fe9d) main_cam5_pane_t_ParamLimits

0xf7b6,	// (0x0004fe9d) main_cam5_pane_t

0x18a1,	// (0x00041f88) popup_scut_keymap_window_ParamLimits

0x18a1,	// (0x00041f88) popup_scut_keymap_window

0x7c45,	// (0x0004832c) aid_size_cell_brow_shortcut

0xd2a1,	// (0x0004d988) bg_popup_window_pane_cp010

0x7c51,	// (0x00048338) grid_scut_pane

0x7c5d,	// (0x00048344) cell_scut_pane_ParamLimits

0x7c5d,	// (0x00048344) cell_scut_pane

0x7c74,	// (0x0004835b) cell_scut_pane_g1

0x7c7d,	// (0x00048364) cell_scut_pane_t1

0x7c8c,	// (0x00048373) cell_scut_pane_t2

0x7c9b,	// (0x00048382) cell_scut_pane_t3

0x0002,

0xf7d1,	// (0x0004feb8) cell_scut_pane_t

0x52f0,	// (0x000459d7) main_mup3_pane_g8_ParamLimits

0x52f0,	// (0x000459d7) main_mup3_pane_g8

0x6b83,	// (0x0004726a) area_vitu2_query_pane_ParamLimits

0x6b83,	// (0x0004726a) area_vitu2_query_pane

0x0ff5,	// (0x000416dc) input_focus_pane_cp08

0x7ca9,	// (0x00048390) area_vitu2_query_pane_g1

0x10f1,	// (0x000417d8) area_vitu2_query_pane_g2

0x0001,

0xf7d8,	// (0x0004febf) area_vitu2_query_pane_g

0x7cb5,	// (0x0004839c) area_vitu2_query_pane_t1_ParamLimits

0x7cb5,	// (0x0004839c) area_vitu2_query_pane_t1

0x7cc9,	// (0x000483b0) area_vitu2_query_pane_t2_ParamLimits

0x7cc9,	// (0x000483b0) area_vitu2_query_pane_t2

0x1100,	// (0x000417e7) area_vitu2_query_pane_t3_ParamLimits

0x1100,	// (0x000417e7) area_vitu2_query_pane_t3

0xacae,	// (0x0004b395) area_vitu2_query_pane_t4_ParamLimits

0xacae,	// (0x0004b395) area_vitu2_query_pane_t4

0xacd6,	// (0x0004b3bd) area_vitu2_query_pane_t5_ParamLimits

0xacd6,	// (0x0004b3bd) area_vitu2_query_pane_t5

0xacfe,	// (0x0004b3e5) area_vitu2_query_pane_t6_ParamLimits

0xacfe,	// (0x0004b3e5) area_vitu2_query_pane_t6

0x0006,

0xf7dd,	// (0x0004fec4) area_vitu2_query_pane_t_ParamLimits

0xf7dd,	// (0x0004fec4) area_vitu2_query_pane_t

0x7cdd,	// (0x000483c4) bg_button_pane_cp018

0x7ce9,	// (0x000483d0) bg_button_pane_cp021

0x1128,	// (0x0004180f) bg_button_pane_cp022

0x1147,	// (0x0004182e) input_focus_pane_cp09

0xdb4d,	// (0x0004e234) aid_size_touch_mv_arrow_left

0xdb76,	// (0x0004e25d) aid_size_touch_mv_arrow_right

0x7356,	// (0x00047a3d) main_cset_slider_pane_g16_ParamLimits

0x7356,	// (0x00047a3d) main_cset_slider_pane_g16

0x7362,	// (0x00047a49) main_cset_slider_pane_g17_ParamLimits

0x7362,	// (0x00047a49) main_cset_slider_pane_g17

0x7b1a,	// (0x00048201) cell_cam4_burst_pane_g1_ParamLimits

0xc935,	// (0x0004d01c) compa_mode_pane

0x7613,	// (0x00047cfa) popup_vtel_slider_window_g3_ParamLimits

0x7613,	// (0x00047cfa) popup_vtel_slider_window_g3

0x762a,	// (0x00047d11) popup_vtel_slider_window_g4_ParamLimits

0x762a,	// (0x00047d11) popup_vtel_slider_window_g4

0x7641,	// (0x00047d28) popup_vtel_slider_window_t1_ParamLimits

0x7641,	// (0x00047d28) popup_vtel_slider_window_t1

0xc935,	// (0x0004d01c) main_cl_pane

0xa710,	// (0x0004adf7) popup_imed_adjust2_window_ParamLimits

0xe75a,	// (0x0004ee41) bg_tb_trans_pane_cp05_ParamLimits

0x5dce,	// (0x000464b5) popup_imed_adjust2_window_g1_ParamLimits

0x5ddd,	// (0x000464c4) popup_imed_adjust2_window_g2_ParamLimits

0x5ddd,	// (0x000464c4) popup_imed_adjust2_window_g2

0x5de9,	// (0x000464d0) popup_imed_adjust2_window_g3_ParamLimits

0x5de9,	// (0x000464d0) popup_imed_adjust2_window_g3

0x0002,

0xf55a,	// (0x0004fc41) popup_imed_adjust2_window_g_ParamLimits

0xf55a,	// (0x0004fc41) popup_imed_adjust2_window_g

0x5df5,	// (0x000464dc) popup_imed_adjust2_window_t1_ParamLimits

0x5e0d,	// (0x000464f4) slider_imed_adjust_pane_ParamLimits

0x5e21,	// (0x00046508) slider_imed_adjust_pane_g1_ParamLimits

0x5e31,	// (0x00046518) slider_imed_adjust_pane_g2_ParamLimits

0x5e41,	// (0x00046528) slider_imed_adjust_pane_g3_ParamLimits

0x5e52,	// (0x00046539) slider_imed_adjust_pane_g4_ParamLimits

0xf561,	// (0x0004fc48) slider_imed_adjust_pane_g_ParamLimits

0x68fa,	// (0x00046fe1) aid_touch_area_cam4_ParamLimits

0x68fa,	// (0x00046fe1) aid_touch_area_cam4

0xaafd,	// (0x0004b1e4) battery_pane_cp01

0x69c9,	// (0x000470b0) main_camera4_pane_g6_ParamLimits

0x69c9,	// (0x000470b0) main_camera4_pane_g6

0x69f3,	// (0x000470da) main_camera4_pane_t2_ParamLimits

0x69f3,	// (0x000470da) main_camera4_pane_t2

0x0001,

0xf663,	// (0x0004fd4a) main_camera4_pane_t_ParamLimits

0xf663,	// (0x0004fd4a) main_camera4_pane_t

0x6a3a,	// (0x00047121) aid_touch_area_vid4_ParamLimits

0x6a3a,	// (0x00047121) aid_touch_area_vid4

0x6a8e,	// (0x00047175) main_video4_pane_g5_ParamLimits

0x6a8e,	// (0x00047175) main_video4_pane_g5

0x6ab3,	// (0x0004719a) vid4_progress_pane_ParamLimits

0x6ab3,	// (0x0004719a) vid4_progress_pane

0x736e,	// (0x00047a55) main_cset_slider_pane_g18_ParamLimits

0x736e,	// (0x00047a55) main_cset_slider_pane_g18

0x7b2d,	// (0x00048214) cell_cam4_burst_pane_g2_ParamLimits

0x7b2d,	// (0x00048214) cell_cam4_burst_pane_g2

0x0001,

0xf7b1,	// (0x0004fe98) cell_cam4_burst_pane_g_ParamLimits

0xf7b1,	// (0x0004fe98) cell_cam4_burst_pane_g

0xd0ef,	// (0x0004d7d6) bg_cl_pane_ParamLimits

0xd0ef,	// (0x0004d7d6) bg_cl_pane

0x7cf5,	// (0x000483dc) cl_header_pane_ParamLimits

0x7cf5,	// (0x000483dc) cl_header_pane

0x7d09,	// (0x000483f0) cl_listscroll_pane_ParamLimits

0x7d09,	// (0x000483f0) cl_listscroll_pane

0xad4a,	// (0x0004b431) bg_cl_pane_g1

0xad52,	// (0x0004b439) bg_cl_pane_g2

0xad5a,	// (0x0004b441) bg_cl_pane_g3

0xad62,	// (0x0004b449) bg_cl_pane_g4

0xad6a,	// (0x0004b451) bg_cl_pane_g5

0xad72,	// (0x0004b459) bg_cl_pane_g6

0xad7a,	// (0x0004b461) bg_cl_pane_g7

0xad82,	// (0x0004b469) bg_cl_pane_g8

0xad8a,	// (0x0004b471) bg_cl_pane_g9

0x0008,

0xf7ec,	// (0x0004fed3) bg_cl_pane_g

0x7d19,	// (0x00048400) aid_height_cl_leading_ParamLimits

0x7d19,	// (0x00048400) aid_height_cl_leading

0x7d25,	// (0x0004840c) aid_height_cl_text_ParamLimits

0x7d25,	// (0x0004840c) aid_height_cl_text

0xcfe4,	// (0x0004d6cb) bg_cl_header_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_cl_header_pane

0x7d44,	// (0x0004842b) cl_header_pane_g1_ParamLimits

0x7d44,	// (0x0004842b) cl_header_pane_g1

0x7d5a,	// (0x00048441) cl_header_pane_t1_ParamLimits

0x7d5a,	// (0x00048441) cl_header_pane_t1

0xad92,	// (0x0004b479) cl_list_pane

0x7231,	// (0x00047918) hc_scroll_pane_cp01

0xd4dc,	// (0x0004dbc3) bg_cl_header_pane_g1

0x6dfa,	// (0x000474e1) bg_cl_header_pane_g2

0xd4fc,	// (0x0004dbe3) bg_cl_header_pane_g3

0x6e0a,	// (0x000474f1) bg_cl_header_pane_g4

0x6e02,	// (0x000474e9) bg_cl_header_pane_g5

0x7769,	// (0x00047e50) bg_cl_header_pane_g6

0x6e22,	// (0x00047509) bg_cl_header_pane_g7

0x6e2a,	// (0x00047511) bg_cl_header_pane_g8

0x6e1a,	// (0x00047501) bg_cl_header_pane_g9

0x0008,

0xf7ff,	// (0x0004fee6) bg_cl_header_pane_g

0x7d73,	// (0x0004845a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7d73,	// (0x0004845a) hc_cl_list_double_graphic_heading_pane

0x7d84,	// (0x0004846b) hc_cl_list_single_graphic_pane_ParamLimits

0x7d84,	// (0x0004846b) hc_cl_list_single_graphic_pane

0x7d9a,	// (0x00048481) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7d9a,	// (0x00048481) hc_cl_list_single_graphic_pane_g1

0x7da6,	// (0x0004848d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7da6,	// (0x0004848d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf812,	// (0x0004fef9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf812,	// (0x0004fef9) hc_cl_list_single_graphic_pane_g

0x7dba,	// (0x000484a1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7dba,	// (0x000484a1) hc_cl_list_single_graphic_pane_t1

0x7d9a,	// (0x00048481) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7d9a,	// (0x00048481) hc_cl_list_double_graphic_heading_pane_g1

0x7dcf,	// (0x000484b6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7dcf,	// (0x000484b6) hc_cl_list_double_graphic_heading_pane_g2

0x7de3,	// (0x000484ca) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7de3,	// (0x000484ca) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf817,	// (0x0004fefe) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf817,	// (0x0004fefe) hc_cl_list_double_graphic_heading_pane_g

0x7df7,	// (0x000484de) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7df7,	// (0x000484de) hc_cl_list_double_graphic_heading_pane_t1

0x7e0c,	// (0x000484f3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e0c,	// (0x000484f3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf81e,	// (0x0004ff05) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf81e,	// (0x0004ff05) hc_cl_list_double_graphic_heading_pane_t

0xada3,	// (0x0004b48a) vid4_progress_pane_g1

0xadb3,	// (0x0004b49a) vid4_progress_pane_g2

0x7e21,	// (0x00048508) vid4_progress_pane_g3

0xadc3,	// (0x0004b4aa) vid4_progress_pane_g4

0x0004,

0xf823,	// (0x0004ff0a) vid4_progress_pane_g

0x7e33,	// (0x0004851a) vid4_progress_pane_t1

0xc96d,	// (0x0004d054) vid4_progress_pane_t2

0x0002,

0xf82e,	// (0x0004ff15) vid4_progress_pane_t

0x7e4b,	// (0x00048532) wait_bar_pane_cp07

0x4ada,	// (0x000451c1) blid_firmament_pane_ParamLimits

0x4b1d,	// (0x00045204) popup_blid_sat_info2_window_g1

0x4b41,	// (0x00045228) popup_blid_sat_info2_window_t3

0x4b4f,	// (0x00045236) popup_blid_sat_info2_window_t4

0x4b5d,	// (0x00045244) popup_blid_sat_info2_window_t5

0x4b6b,	// (0x00045252) popup_blid_sat_info2_window_t6

0x4b7b,	// (0x00045262) popup_blid_sat_info2_window_t7

0x4b89,	// (0x00045270) popup_blid_sat_info2_window_t8

0x4b97,	// (0x0004527e) popup_blid_sat_info2_window_t9

0x4ba5,	// (0x0004528c) popup_blid_sat_info2_window_t10

0x4c66,	// (0x0004534d) aid_firma_cardinal_ParamLimits

0x4c7a,	// (0x00045361) blid_firmament_pane_t1_ParamLimits

0x4c91,	// (0x00045378) blid_firmament_pane_t2_ParamLimits

0x4ca8,	// (0x0004538f) blid_firmament_pane_t3_ParamLimits

0x4cbf,	// (0x000453a6) blid_firmament_pane_t4_ParamLimits

0xf45e,	// (0x0004fb45) blid_firmament_pane_t_ParamLimits

0x4cd6,	// (0x000453bd) blid_sat_info_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_cam_set_pane_ParamLimits

0x5c33,	// (0x0004631a) aid_size_cell_colour_35_ParamLimits

0x5c53,	// (0x0004633a) aid_size_cell_colour_112_ParamLimits

0x5c73,	// (0x0004635a) aid_size_cell_effect_ParamLimits

0xe75a,	// (0x0004ee41) bg_tb_trans_pane_cp02_ParamLimits

0xd739,	// (0x0004de20) heading_imed_pane_ParamLimits

0x5c93,	// (0x0004637a) listscroll_imed_pane_ParamLimits

0xe768,	// (0x0004ee4f) popup_call2_audio_first_window_g5_ParamLimits

0xe768,	// (0x0004ee4f) popup_call2_audio_first_window_g5

0x64ea,	// (0x00046bd1) aid_size_touch_image3_arrow_left_ParamLimits

0x64ea,	// (0x00046bd1) aid_size_touch_image3_arrow_left

0x6516,	// (0x00046bfd) aid_size_touch_image3_arrow_right_ParamLimits

0x6516,	// (0x00046bfd) aid_size_touch_image3_arrow_right

0xc982,	// (0x0004d069) vid4_progress_pane_t3

0x6141,	// (0x00046828) main_hwr_training_symbol_option_pane_ParamLimits

0x6141,	// (0x00046828) main_hwr_training_symbol_option_pane

0x6161,	// (0x00046848) popup_hwr_training_preview_window_ParamLimits

0x6161,	// (0x00046848) popup_hwr_training_preview_window

0x61ae,	// (0x00046895) hwr_training_navi_pane_g5_ParamLimits

0x61ae,	// (0x00046895) hwr_training_navi_pane_g5

0x6d42,	// (0x00047429) popup_char_count_window

0xcfe4,	// (0x0004d6cb) bg_popup_sub_pane_cp20_ParamLimits

0x7751,	// (0x00047e38) list_vitu2_match_list_pane_ParamLimits

0x775d,	// (0x00047e44) vitu2_page_scroll_pane_ParamLimits

0x775d,	// (0x00047e44) vitu2_page_scroll_pane

0xadfd,	// (0x0004b4e4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xadfd,	// (0x0004b4e4) list_single_hwr_training_symbol_option_pane

0xae10,	// (0x0004b4f7) list_single_hwr_training_symbol_option_pane_g1

0xae18,	// (0x0004b4ff) list_single_hwr_training_symbol_option_pane_t1

0xae26,	// (0x0004b50d) bg_button_pane_cp023

0xae2f,	// (0x0004b516) bg_button_pane_cp024

0xae62,	// (0x0004b549) vitu2_page_scroll_pane_g1

0xae6a,	// (0x0004b551) vitu2_page_scroll_pane_g2

0x0001,

0xf835,	// (0x0004ff1c) vitu2_page_scroll_pane_g

0xae72,	// (0x0004b559) vitu2_page_scroll_pane_t1

0x4a25,	// (0x0004510c) popup_char_count_window_g1

0xae81,	// (0x0004b568) popup_char_count_window_g2

0xae8a,	// (0x0004b571) popup_char_count_window_g3

0x0002,

0xf83a,	// (0x0004ff21) popup_char_count_window_g

0xae93,	// (0x0004b57a) popup_char_count_window_t1

0xc935,	// (0x0004d01c) main_vded2_pane

0x5dba,	// (0x000464a1) aid_size_cell_imed_line

0x5dc4,	// (0x000464ab) grid_imed_line_width_pane

0xabb5,	// (0x0004b29c) vid4_indicators_pane_g4

0xaea1,	// (0x0004b588) cell_imed_line_width_pane_ParamLimits

0xaea1,	// (0x0004b588) cell_imed_line_width_pane

0xaeb5,	// (0x0004b59c) cell_imed_line_width_pane_g1

0xaebe,	// (0x0004b5a5) cell_imed_line_width_pane_g2

0x0001,

0xf841,	// (0x0004ff28) cell_imed_line_width_pane_g

0x7e5e,	// (0x00048545) main_vded2_pane_g1_ParamLimits

0x7e5e,	// (0x00048545) main_vded2_pane_g1

0x7e74,	// (0x0004855b) main_vded2_pane_g2_ParamLimits

0x7e74,	// (0x0004855b) main_vded2_pane_g2

0x0001,

0xf846,	// (0x0004ff2d) main_vded2_pane_g_ParamLimits

0xf846,	// (0x0004ff2d) main_vded2_pane_g

0x7e86,	// (0x0004856d) vded2_slider_pane_ParamLimits

0x7e86,	// (0x0004856d) vded2_slider_pane

0x7e96,	// (0x0004857d) aid_size_touch_vded2_end

0x7ea0,	// (0x00048587) aid_size_touch_vded2_playhead

0xaec6,	// (0x0004b5ad) aid_size_touch_vded2_start

0xaece,	// (0x0004b5b5) vded2_slider_bg_pane

0xaed7,	// (0x0004b5be) vded2_slider_pane_g1

0xaee0,	// (0x0004b5c7) vded2_slider_pane_g2

0x7eaa,	// (0x00048591) vded2_slider_pane_g3

0x0002,

0xf84b,	// (0x0004ff32) vded2_slider_pane_g

0xaee8,	// (0x0004b5cf) vded2_slider_bg_pane_g1

0xaef1,	// (0x0004b5d8) vded2_slider_bg_pane_g2

0xaefa,	// (0x0004b5e1) vded2_slider_bg_pane_g3

0x0002,

0xf852,	// (0x0004ff39) vded2_slider_bg_pane_g

0x39f4,	// (0x000440db) aid_postcard_touch_down_pane_ParamLimits

0x39f4,	// (0x000440db) aid_postcard_touch_down_pane

0x3a0a,	// (0x000440f1) aid_postcard_touch_up_pane_ParamLimits

0x3a0a,	// (0x000440f1) aid_postcard_touch_up_pane

0xc935,	// (0x0004d01c) main_blid2_pane

0xa6f6,	// (0x0004addd) popup_blid2_search_window

0xc935,	// (0x0004d01c) blid2_gps_pane

0xc935,	// (0x0004d01c) blid2_navig_pane

0xc935,	// (0x0004d01c) blid2_search_pane

0xc935,	// (0x0004d01c) blid2_tripm_pane

0x7eb5,	// (0x0004859c) blid2_search_pane_g1_ParamLimits

0x7eb5,	// (0x0004859c) blid2_search_pane_g1

0x7ecf,	// (0x000485b6) blid2_search_pane_t1_ParamLimits

0x7ecf,	// (0x000485b6) blid2_search_pane_t1

0x7ee1,	// (0x000485c8) aid_size_cell_blid2_gps_ParamLimits

0x7ee1,	// (0x000485c8) aid_size_cell_blid2_gps

0x7ef9,	// (0x000485e0) blid2_gps_pane_g1_ParamLimits

0x7ef9,	// (0x000485e0) blid2_gps_pane_g1

0x7f0d,	// (0x000485f4) grid_blid2_satellite_pane_ParamLimits

0x7f0d,	// (0x000485f4) grid_blid2_satellite_pane

0x7f27,	// (0x0004860e) blid2_navig_pane_g1_ParamLimits

0x7f27,	// (0x0004860e) blid2_navig_pane_g1

0x7f33,	// (0x0004861a) blid2_navig_pane_t1_ParamLimits

0x7f33,	// (0x0004861a) blid2_navig_pane_t1

0x7f4e,	// (0x00048635) blid2_navig_pane_t2_ParamLimits

0x7f4e,	// (0x00048635) blid2_navig_pane_t2

0x0001,

0xf859,	// (0x0004ff40) blid2_navig_pane_t_ParamLimits

0xf859,	// (0x0004ff40) blid2_navig_pane_t

0x7f69,	// (0x00048650) blid2_navig_ring_pane_ParamLimits

0x7f69,	// (0x00048650) blid2_navig_ring_pane

0x7f82,	// (0x00048669) blid2_speed_pane_ParamLimits

0x7f82,	// (0x00048669) blid2_speed_pane

0x7f8e,	// (0x00048675) blid2_tripm_pane_g1_ParamLimits

0x7f8e,	// (0x00048675) blid2_tripm_pane_g1

0x7fa7,	// (0x0004868e) blid2_tripm_pane_g2_ParamLimits

0x7fa7,	// (0x0004868e) blid2_tripm_pane_g2

0x7fbb,	// (0x000486a2) blid2_tripm_pane_g3_ParamLimits

0x7fbb,	// (0x000486a2) blid2_tripm_pane_g3

0x7fcf,	// (0x000486b6) blid2_tripm_pane_g4_ParamLimits

0x7fcf,	// (0x000486b6) blid2_tripm_pane_g4

0x7fe3,	// (0x000486ca) blid2_tripm_pane_g5_ParamLimits

0x7fe3,	// (0x000486ca) blid2_tripm_pane_g5

0x0005,

0xf85e,	// (0x0004ff45) blid2_tripm_pane_g_ParamLimits

0xf85e,	// (0x0004ff45) blid2_tripm_pane_g

0x8009,	// (0x000486f0) blid2_tripm_pane_t1_ParamLimits

0x8009,	// (0x000486f0) blid2_tripm_pane_t1

0x8024,	// (0x0004870b) blid2_tripm_pane_t2_ParamLimits

0x8024,	// (0x0004870b) blid2_tripm_pane_t2

0x803d,	// (0x00048724) blid2_tripm_pane_t3_ParamLimits

0x803d,	// (0x00048724) blid2_tripm_pane_t3

0x0003,

0xf86b,	// (0x0004ff52) blid2_tripm_pane_t_ParamLimits

0xf86b,	// (0x0004ff52) blid2_tripm_pane_t

0x8084,	// (0x0004876b) cell_blid2_satellite_pane_ParamLimits

0x8084,	// (0x0004876b) cell_blid2_satellite_pane

0x80a2,	// (0x00048789) cell_blid2_satellite_pane_g1

0xaf03,	// (0x0004b5ea) cell_blid2_satellite_pane_t1

0xd2d7,	// (0x0004d9be) blid2_speed_pane_g1

0xaf11,	// (0x0004b5f8) blid2_speed_pane_t1

0xaf1f,	// (0x0004b606) blid2_speed_pane_t2

0x0001,

0xf874,	// (0x0004ff5b) blid2_speed_pane_t

0xd2d7,	// (0x0004d9be) blid2_navig_ring_pane_g1

0x80ab,	// (0x00048792) blid2_navig_ring_pane_g2

0x80b3,	// (0x0004879a) blid2_navig_ring_pane_g3

0x80bb,	// (0x000487a2) blid2_navig_ring_pane_g4

0x80c3,	// (0x000487aa) blid2_navig_ring_pane_g5

0x0004,

0xf879,	// (0x0004ff60) blid2_navig_ring_pane_g

0xc935,	// (0x0004d01c) bg_popup_window_pane_cp011

0xaf2d,	// (0x0004b614) popup_blid2_search_window_g1

0xaf35,	// (0x0004b61c) popup_blid2_search_window_t1

0xaf43,	// (0x0004b62a) popup_blid2_search_window_t2

0x0001,

0xf884,	// (0x0004ff6b) popup_blid2_search_window_t

0xd3eb,	// (0x0004dad2) main_browser_pane_g1

0xd0ef,	// (0x0004d7d6) main_browser_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp011_ParamLimits

0x6ddc,	// (0x000474c3) cell_vitu2_function_pane_g1_ParamLimits

0xe75a,	// (0x0004ee41) bg_popup_sub_pane_cp22_ParamLimits

0x0ff5,	// (0x000416dc) input_focus_pane_cp08_ParamLimits

0x7905,	// (0x00047fec) popup_vitu2_query_button_pane_ParamLimits

0x7905,	// (0x00047fec) popup_vitu2_query_button_pane

0x1010,	// (0x000416f7) popup_vitu2_query_input_button_pane

0x7914,	// (0x00047ffb) popup_vitu2_query_window_g1_ParamLimits

0x1018,	// (0x000416ff) popup_vitu2_query_window_g2_ParamLimits

0xf785,	// (0x0004fe6c) popup_vitu2_query_window_g_ParamLimits

0xc935,	// (0x0004d01c) bg_button_pane_cp026

0x80cb,	// (0x000487b2) popup_vitu2_query_input_button_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp025

0xaf51,	// (0x0004b638) popup_vitu2_query_button_pane_t1

0x4fb9,	// (0x000456a0) main_mp3_pane_t6

0x4fcf,	// (0x000456b6) popup_slider_window_cp01

0xab19,	// (0x0004b200) cam4_battery_pane

0xab72,	// (0x0004b259) cam4_battery_pane_cp02

0xad9b,	// (0x0004b482) cam4_battery_pane_cp01

0xad9b,	// (0x0004b482) cam4_battery_pane_cp03

0xd2d7,	// (0x0004d9be) cam4_battery_pane_g1

0x80d3,	// (0x000487ba) cam4_battery_pane_g2

0x0001,

0xf889,	// (0x0004ff70) cam4_battery_pane_g

0x4bb3,	// (0x0004529a) popup_blid_sat_info2_window_t11

0xdb4d,	// (0x0004e234) aid_size_touch_mv_arrow_left_ParamLimits

0xdb76,	// (0x0004e25d) aid_size_touch_mv_arrow_right_ParamLimits

0xdbd4,	// (0x0004e2bb) navi_pane_g1_ParamLimits

0xdbe0,	// (0x0004e2c7) navi_pane_g2_ParamLimits

0xdc0e,	// (0x0004e2f5) navi_pane_g3_ParamLimits

0x0289,	// (0x00040970) navi_pane_g_ParamLimits

0x370b,	// (0x00043df2) navi_pane_mv_t1_ParamLimits

0x5ccc,	// (0x000463b3) grid_imed_effect_pane_ParamLimits

0x249a,	// (0x00042b81) aid_placing_vt_slider_lsc

0xd33a,	// (0x0004da21) aid_placing_vt_slider_prt

0xcfe4,	// (0x0004d6cb) bg_tb_trans_pane_cp01_ParamLimits

0x4e33,	// (0x0004551a) popup_image_details_window_g1_ParamLimits

0x4e46,	// (0x0004552d) popup_image_details_window_g2_ParamLimits

0x4e5b,	// (0x00045542) popup_image_details_window_g3_ParamLimits

0x4e5b,	// (0x00045542) popup_image_details_window_g3

0xf493,	// (0x0004fb7a) popup_image_details_window_g_ParamLimits

0x4e6f,	// (0x00045556) popup_image_details_window_t1_ParamLimits

0x4e81,	// (0x00045568) popup_image_details_window_t2_ParamLimits

0x4e9a,	// (0x00045581) popup_image_details_window_t3_ParamLimits

0x4eae,	// (0x00045595) popup_image_details_window_t4_ParamLimits

0x4ec9,	// (0x000455b0) popup_image_details_window_t5_ParamLimits

0xf49a,	// (0x0004fb81) popup_image_details_window_t_ParamLimits

0x7d31,	// (0x00048418) cl_header_name_pane_ParamLimits

0x7d31,	// (0x00048418) cl_header_name_pane

0x80dd,	// (0x000487c4) cl_header_name_pane_t1_ParamLimits

0x80dd,	// (0x000487c4) cl_header_name_pane_t1

0x80fe,	// (0x000487e5) cl_header_name_pane_t2_ParamLimits

0x80fe,	// (0x000487e5) cl_header_name_pane_t2

0x8140,	// (0x00048827) cl_header_name_pane_t3_ParamLimits

0x8140,	// (0x00048827) cl_header_name_pane_t3

0x0002,

0xf88e,	// (0x0004ff75) cl_header_name_pane_t_ParamLimits

0xf88e,	// (0x0004ff75) cl_header_name_pane_t

0xdc9d,	// (0x0004e384) navi_pane_mv_g2_ParamLimits

0x6d2a,	// (0x00047411) field_vitu2_entry_pane_g1_ParamLimits

0x6d36,	// (0x0004741d) field_vitu2_entry_pane_g2_ParamLimits

0xe738,	// (0x0004ee1f) field_vitu2_entry_pane_g3_ParamLimits

0xe738,	// (0x0004ee1f) field_vitu2_entry_pane_g3

0xf695,	// (0x0004fd7c) field_vitu2_entry_pane_g_ParamLimits

0x6d58,	// (0x0004743f) cell_vitu2_itu_pane_g1_ParamLimits

0x6d70,	// (0x00047457) cell_vitu2_itu_pane_g2_ParamLimits

0x6d70,	// (0x00047457) cell_vitu2_itu_pane_g2

0x0001,

0xf6a1,	// (0x0004fd88) cell_vitu2_itu_pane_g_ParamLimits

0xf6a1,	// (0x0004fd88) cell_vitu2_itu_pane_g

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp05_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp05

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp03

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp04

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp10_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp10

0x1137,	// (0x0004181e) bg_vkb2_func_pane_cp08

0x7cdd,	// (0x000483c4) bg_vkb2_func_pane_cp06

0x7ce9,	// (0x000483d0) bg_vkb2_func_pane_cp07

0xae38,	// (0x0004b51f) bg_vkb2_func_pane_cp11_ParamLimits

0xae38,	// (0x0004b51f) bg_vkb2_func_pane_cp11

0xae4d,	// (0x0004b534) bg_vkb2_func_pane_cp12_ParamLimits

0xae4d,	// (0x0004b534) bg_vkb2_func_pane_cp12

0xc935,	// (0x0004d01c) bg_vkb2_func_pane_cp09

0x6dfa,	// (0x000474e1) bg_vkb2_func_pane_g1

0xd4fc,	// (0x0004dbe3) bg_vkb2_func_pane_g2

0x6e02,	// (0x000474e9) bg_vkb2_func_pane_g3

0x6e0a,	// (0x000474f1) bg_vkb2_func_pane_g4

0x7769,	// (0x00047e50) bg_vkb2_func_pane_g5

0x6e22,	// (0x00047509) bg_vkb2_func_pane_g6

0x6e2a,	// (0x00047511) bg_vkb2_func_pane_g7

0x6e1a,	// (0x00047501) bg_vkb2_func_pane_g8

0xd4dc,	// (0x0004dbc3) bg_vkb2_func_pane_g9

0x0008,

0xf895,	// (0x0004ff7c) bg_vkb2_func_pane_g

0x7ff7,	// (0x000486de) blid2_tripm_pane_g6_ParamLimits

0x7ff7,	// (0x000486de) blid2_tripm_pane_g6

0x636e,	// (0x00046a55) mp4_progress_pane_g1

0x8070,	// (0x00048757) blid2_tripm_values_pane_ParamLimits

0x8070,	// (0x00048757) blid2_tripm_values_pane

0x8171,	// (0x00048858) blid2_tripm_values_pane_t1

0x817f,	// (0x00048866) blid2_tripm_values_pane_t2

0x818d,	// (0x00048874) blid2_tripm_values_pane_t3

0x819b,	// (0x00048882) blid2_tripm_values_pane_t4

0x81a9,	// (0x00048890) blid2_tripm_values_pane_t5

0x81b7,	// (0x0004889e) blid2_tripm_values_pane_t6

0x81c5,	// (0x000488ac) blid2_tripm_values_pane_t7

0x81d3,	// (0x000488ba) blid2_tripm_values_pane_t8

0x81e1,	// (0x000488c8) blid2_tripm_values_pane_t9

0x0008,

0xf8a8,	// (0x0004ff8f) blid2_tripm_values_pane_t

0x24dc,	// (0x00042bc3) call_video_pane_t1_ParamLimits

0x24fa,	// (0x00042be1) call_video_pane_t2_ParamLimits

0xf1bd,	// (0x0004f8a4) call_video_pane_t_ParamLimits

0x0e30,	// (0x00041517) msg_header_pane_g1_ParamLimits

0xde62,	// (0x0004e549) msg_header_pane_g2_ParamLimits

0xde62,	// (0x0004e549) msg_header_pane_g2

0x0001,

0xf2fd,	// (0x0004f9e4) msg_header_pane_g_ParamLimits

0xf2fd,	// (0x0004f9e4) msg_header_pane_g

0xd0ef,	// (0x0004d7d6) main_clock2_pane_ParamLimits

0x594a,	// (0x00046031) grid_clock2_toolbar_pane_ParamLimits

0x594a,	// (0x00046031) grid_clock2_toolbar_pane

0x594a,	// (0x00046031) listscroll_clock2_pane_ParamLimits

0x594a,	// (0x00046031) listscroll_clock2_pane

0x5a64,	// (0x0004614b) main_clock2_pane_t3_ParamLimits

0x5a64,	// (0x0004614b) main_clock2_pane_t3

0x5a88,	// (0x0004616f) main_clock2_pane_t4_ParamLimits

0x5a88,	// (0x0004616f) main_clock2_pane_t4

0xaf5f,	// (0x0004b646) cell_clock2_toolbar_pane

0xaf67,	// (0x0004b64e) cell_clock2_toolbar_pane_cp01

0xaf67,	// (0x0004b64e) cell_clock2_toolbar_pane_cp02

0xaf6f,	// (0x0004b656) cell_clock2_toolbar_pane_cp03

0xaf77,	// (0x0004b65e) list_clock2_pane

0xdac3,	// (0x0004e1aa) scroll_pane_cp10

0xaf7f,	// (0x0004b666) list_single_clock2_pane_ParamLimits

0xaf7f,	// (0x0004b666) list_single_clock2_pane

0xd2a1,	// (0x0004d988) list_highlight_pane_cp08

0xaf8c,	// (0x0004b673) list_single_clock2_pane_t1

0xaf9a,	// (0x0004b681) list_single_clock2_pane_t2

0x0001,

0xf8bb,	// (0x0004ffa2) list_single_clock2_pane_t

0xc935,	// (0x0004d01c) bg_button_pane_cp10

0xafa8,	// (0x0004b68f) cell_clock2_toolbar_pane_g1

0x3980,	// (0x00044067) aid_main_viewer_pane_g1_ParamLimits

0x3980,	// (0x00044067) aid_main_viewer_pane_g1

0x398e,	// (0x00044075) aid_main_viewer_pane_g2_ParamLimits

0x398e,	// (0x00044075) aid_main_viewer_pane_g2

0x399c,	// (0x00044083) aid_main_viewer_pane_g3_ParamLimits

0x399c,	// (0x00044083) aid_main_viewer_pane_g3

0x39ab,	// (0x00044092) aid_main_viewer_pane_g4_ParamLimits

0x39ab,	// (0x00044092) aid_main_viewer_pane_g4

0x0003,

0xf30e,	// (0x0004f9f5) aid_main_viewer_pane_g_ParamLimits

0xf30e,	// (0x0004f9f5) aid_main_viewer_pane_g

0x42f2,	// (0x000449d9) main_calc_pane_ParamLimits

0x4306,	// (0x000449ed) main_dialer2_pane_ParamLimits

0xc935,	// (0x0004d01c) main_cam6_pane

0xc935,	// (0x0004d01c) main_vid6_pane

0x5956,	// (0x0004603d) listscroll_gen_pane_cp06_ParamLimits

0x5956,	// (0x0004603d) listscroll_gen_pane_cp06

0x5aab,	// (0x00046192) main_clock2_pane_t5_ParamLimits

0x5aab,	// (0x00046192) main_clock2_pane_t5

0x5b09,	// (0x000461f0) aid_call2_pane_cp10_ParamLimits

0x5b1b,	// (0x00046202) aid_call_pane_cp10_ParamLimits

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b2d,	// (0x00046214) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b2d,	// (0x00046214) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb41,	// (0x0004e228) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf54f,	// (0x0004fc36) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b43,	// (0x0004622a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6497,	// (0x00046b7e) cell_dialer2_keypad_pane_g2_ParamLimits

0x6497,	// (0x00046b7e) cell_dialer2_keypad_pane_g2

0x0001,

0xf634,	// (0x0004fd1b) cell_dialer2_keypad_pane_g_ParamLimits

0xf634,	// (0x0004fd1b) cell_dialer2_keypad_pane_g

0x64b3,	// (0x00046b9a) cell_dialer2_keypad_pane_t1

0x720b,	// (0x000478f2) main_cset_text2_pane_ParamLimits

0x720b,	// (0x000478f2) main_cset_text2_pane

0x7ca9,	// (0x00048390) area_vitu2_query_pane_g1_ParamLimits

0x10f1,	// (0x000417d8) area_vitu2_query_pane_g2_ParamLimits

0xf7d8,	// (0x0004febf) area_vitu2_query_pane_g_ParamLimits

0xad26,	// (0x0004b40d) area_vitu2_query_pane_t7_ParamLimits

0xad26,	// (0x0004b40d) area_vitu2_query_pane_t7

0x7cdd,	// (0x000483c4) bg_button_pane_cp018_ParamLimits

0x7ce9,	// (0x000483d0) bg_button_pane_cp021_ParamLimits

0x1128,	// (0x0004180f) bg_button_pane_cp022_ParamLimits

0x1137,	// (0x0004181e) bg_vkb2_func_pane_cp08_ParamLimits

0x7cdd,	// (0x000483c4) bg_vkb2_func_pane_cp06_ParamLimits

0x7ce9,	// (0x000483d0) bg_vkb2_func_pane_cp07_ParamLimits

0x1147,	// (0x0004182e) input_focus_pane_cp09_ParamLimits

0xc997,	// (0x0004d07e) cam6_autofocus_pane_ParamLimits

0xc997,	// (0x0004d07e) cam6_autofocus_pane

0x81ef,	// (0x000488d6) cam6_image_uncrop_pane_ParamLimits

0x81ef,	// (0x000488d6) cam6_image_uncrop_pane

0x81fe,	// (0x000488e5) cam6_indi_pane_ParamLimits

0x81fe,	// (0x000488e5) cam6_indi_pane

0x8214,	// (0x000488fb) cam6_mode_pane_ParamLimits

0x8214,	// (0x000488fb) cam6_mode_pane

0x8226,	// (0x0004890d) cam6_timer_pane_ParamLimits

0x8226,	// (0x0004890d) cam6_timer_pane

0x8232,	// (0x00048919) cam6_zoom_pane_ParamLimits

0x8232,	// (0x00048919) cam6_zoom_pane

0x823e,	// (0x00048925) cam6_mode_pane_g1_ParamLimits

0x823e,	// (0x00048925) cam6_mode_pane_g1

0x824e,	// (0x00048935) cam6_mode_pane_g2_ParamLimits

0x824e,	// (0x00048935) cam6_mode_pane_g2

0x825e,	// (0x00048945) cam6_mode_pane_g3_ParamLimits

0x825e,	// (0x00048945) cam6_mode_pane_g3

0x826e,	// (0x00048955) cam6_mode_pane_g4_ParamLimits

0x826e,	// (0x00048955) cam6_mode_pane_g4

0x0003,

0xf8c0,	// (0x0004ffa7) cam6_mode_pane_g_ParamLimits

0xf8c0,	// (0x0004ffa7) cam6_mode_pane_g

0xa79c,	// (0x0004ae83) bg_tb_trans_pane_cp08_ParamLimits

0xa79c,	// (0x0004ae83) bg_tb_trans_pane_cp08

0xafb0,	// (0x0004b697) cam6_battery_pane_ParamLimits

0xafb0,	// (0x0004b697) cam6_battery_pane

0xafc6,	// (0x0004b6ad) cam6_indi_pane_g1_ParamLimits

0xafc6,	// (0x0004b6ad) cam6_indi_pane_g1

0xafd8,	// (0x0004b6bf) cam6_indi_pane_g2_ParamLimits

0xafd8,	// (0x0004b6bf) cam6_indi_pane_g2

0xafea,	// (0x0004b6d1) cam6_indi_pane_g3_ParamLimits

0xafea,	// (0x0004b6d1) cam6_indi_pane_g3

0x0002,

0xf8c9,	// (0x0004ffb0) cam6_indi_pane_g_ParamLimits

0xf8c9,	// (0x0004ffb0) cam6_indi_pane_g

0xaffc,	// (0x0004b6e3) cam6_indi_pane_t1_ParamLimits

0xaffc,	// (0x0004b6e3) cam6_indi_pane_t1

0x827e,	// (0x00048965) cam6_autofocus_pane_g1

0x8286,	// (0x0004896d) cam6_autofocus_pane_g2

0x828e,	// (0x00048975) cam6_autofocus_pane_g3

0x8296,	// (0x0004897d) cam6_autofocus_pane_g4

0x0003,

0xf8d0,	// (0x0004ffb7) cam6_autofocus_pane_g

0xb022,	// (0x0004b709) cam6_timer_pane_g1

0xb02a,	// (0x0004b711) cam6_timer_pane_t1

0xb038,	// (0x0004b71f) cam6_zoom_cont_pane

0xb040,	// (0x0004b727) cam6_zoom_pane_g1

0xb048,	// (0x0004b72f) cam6_zoom_pane_g2

0x829e,	// (0x00048985) cam6_zoom_pane_g3

0x0002,

0xf8d9,	// (0x0004ffc0) cam6_zoom_pane_g

0xd2d7,	// (0x0004d9be) cam6_battery_pane_g1

0xd2d7,	// (0x0004d9be) cam6_battery_pane_g2

0x0001,

0x02ed,	// (0x000409d4) cam6_battery_pane_g

0xb050,	// (0x0004b737) cam6_zoom_cont_pane_g1

0xb059,	// (0x0004b740) cam6_zoom_cont_pane_g2

0xb062,	// (0x0004b749) cam6_zoom_cont_pane_g3

0x0002,

0xf8e0,	// (0x0004ffc7) cam6_zoom_cont_pane_g

0x82b8,	// (0x0004899f) cam6_mode_pane_cp_ParamLimits

0x82b8,	// (0x0004899f) cam6_mode_pane_cp

0x8232,	// (0x00048919) cam6_zoom_pane_cp_ParamLimits

0x8232,	// (0x00048919) cam6_zoom_pane_cp

0x82ca,	// (0x000489b1) vid6_image_uncrop_cif_pane_ParamLimits

0x82ca,	// (0x000489b1) vid6_image_uncrop_cif_pane

0x82da,	// (0x000489c1) vid6_image_uncrop_nhd_pane_ParamLimits

0x82da,	// (0x000489c1) vid6_image_uncrop_nhd_pane

0x81ef,	// (0x000488d6) vid6_image_uncrop_vga_pane_ParamLimits

0x81ef,	// (0x000488d6) vid6_image_uncrop_vga_pane

0x82e9,	// (0x000489d0) vid6_image_uncrop_wvga_pane_ParamLimits

0x82e9,	// (0x000489d0) vid6_image_uncrop_wvga_pane

0x82f8,	// (0x000489df) vid6_indi_pane_ParamLimits

0x82f8,	// (0x000489df) vid6_indi_pane

0xa79c,	// (0x0004ae83) bg_tb_trans_pane_cp09_ParamLimits

0xa79c,	// (0x0004ae83) bg_tb_trans_pane_cp09

0xb07a,	// (0x0004b761) cam6_battery_pane_cp_ParamLimits

0xb07a,	// (0x0004b761) cam6_battery_pane_cp

0xb086,	// (0x0004b76d) vid6_indi_pane_g1_ParamLimits

0xb086,	// (0x0004b76d) vid6_indi_pane_g1

0xb098,	// (0x0004b77f) vid6_indi_pane_g2_ParamLimits

0xb098,	// (0x0004b77f) vid6_indi_pane_g2

0xb0aa,	// (0x0004b791) vid6_indi_pane_g3_ParamLimits

0xb0aa,	// (0x0004b791) vid6_indi_pane_g3

0xb0bf,	// (0x0004b7a6) vid6_indi_pane_g4_ParamLimits

0xb0bf,	// (0x0004b7a6) vid6_indi_pane_g4

0xb0d4,	// (0x0004b7bb) vid6_indi_pane_g5_ParamLimits

0xb0d4,	// (0x0004b7bb) vid6_indi_pane_g5

0x0004,

0xf8e7,	// (0x0004ffce) vid6_indi_pane_g_ParamLimits

0xf8e7,	// (0x0004ffce) vid6_indi_pane_g

0xb0ee,	// (0x0004b7d5) vid6_indi_pane_t1_ParamLimits

0xb0ee,	// (0x0004b7d5) vid6_indi_pane_t1

0xb104,	// (0x0004b7eb) vid6_indi_pane_t2_ParamLimits

0xb104,	// (0x0004b7eb) vid6_indi_pane_t2

0xb12c,	// (0x0004b813) vid6_indi_pane_t3_ParamLimits

0xb12c,	// (0x0004b813) vid6_indi_pane_t3

0xb154,	// (0x0004b83b) vid6_indi_pane_t4_ParamLimits

0xb154,	// (0x0004b83b) vid6_indi_pane_t4

0x0003,

0xf8f2,	// (0x0004ffd9) vid6_indi_pane_t_ParamLimits

0xf8f2,	// (0x0004ffd9) vid6_indi_pane_t

0xb178,	// (0x0004b85f) wait_bar_pane_cp08

0x8310,	// (0x000489f7) main_cset_text2_pane_t1_ParamLimits

0x8310,	// (0x000489f7) main_cset_text2_pane_t1

0x82a6,	// (0x0004898d) listscroll_gen_pane_cp06_t1_ParamLimits

0x82a6,	// (0x0004898d) listscroll_gen_pane_cp06_t1

0xc935,	// (0x0004d01c) main_cam6_set_pane

0xd07d,	// (0x0004d764) bg_tb_trans_pane_cp06_ParamLimits

0xab21,	// (0x0004b208) cam4_indicators_pane_g1_ParamLimits

0xab32,	// (0x0004b219) cam4_indicators_pane_g2_ParamLimits

0xf671,	// (0x0004fd58) cam4_indicators_pane_g_ParamLimits

0xab50,	// (0x0004b237) cam4_indicators_pane_t1_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_tb_trans_pane_cp07_ParamLimits

0xab7c,	// (0x0004b263) vid4_indicators_pane_g1_ParamLimits

0xab90,	// (0x0004b277) vid4_indicators_pane_g2_ParamLimits

0xaba4,	// (0x0004b28b) vid4_indicators_pane_g3_ParamLimits

0xabb5,	// (0x0004b29c) vid4_indicators_pane_g4_ParamLimits

0xf683,	// (0x0004fd6a) vid4_indicators_pane_g_ParamLimits

0xabd3,	// (0x0004b2ba) vid4_indicators_pane_t1_ParamLimits

0xada3,	// (0x0004b48a) vid4_progress_pane_g1_ParamLimits

0xadb3,	// (0x0004b49a) vid4_progress_pane_g2_ParamLimits

0x7e21,	// (0x00048508) vid4_progress_pane_g3_ParamLimits

0xadc3,	// (0x0004b4aa) vid4_progress_pane_g4_ParamLimits

0xf823,	// (0x0004ff0a) vid4_progress_pane_g_ParamLimits

0x7e33,	// (0x0004851a) vid4_progress_pane_t1_ParamLimits

0xc96d,	// (0x0004d054) vid4_progress_pane_t2_ParamLimits

0xc982,	// (0x0004d069) vid4_progress_pane_t3_ParamLimits

0xf82e,	// (0x0004ff15) vid4_progress_pane_t_ParamLimits

0x7e4b,	// (0x00048532) wait_bar_pane_cp07_ParamLimits

0x832d,	// (0x00048a14) main_cam6_set_pane_g2_ParamLimits

0x832d,	// (0x00048a14) main_cam6_set_pane_g2

0x8351,	// (0x00048a38) main_cset6_listscroll_pane_ParamLimits

0x8351,	// (0x00048a38) main_cset6_listscroll_pane

0x8371,	// (0x00048a58) main_cset6_slider_pane_ParamLimits

0x8371,	// (0x00048a58) main_cset6_slider_pane

0x8387,	// (0x00048a6e) main_cset6_text2_pane_ParamLimits

0x8387,	// (0x00048a6e) main_cset6_text2_pane

0xb187,	// (0x0004b86e) main_cset6_text_pane

0xb18f,	// (0x0004b876) main_cset_list_pane_copy1_ParamLimits

0xb18f,	// (0x0004b876) main_cset_list_pane_copy1

0xb19f,	// (0x0004b886) scroll_pane_cp028_copy1

0x8395,	// (0x00048a7c) cset_list_set_pane_copy1

0x83a6,	// (0x00048a8d) aid_position_infowindow_above_copy1

0x83ae,	// (0x00048a95) aid_position_infowindow_below_copy1

0x116b,	// (0x00041852) cset_list_set_pane_g1_copy1

0x1173,	// (0x0004185a) cset_list_set_pane_g3_copy1_ParamLimits

0x1173,	// (0x0004185a) cset_list_set_pane_g3_copy1

0x1182,	// (0x00041869) cset_list_set_pane_t1_copy1_ParamLimits

0x1182,	// (0x00041869) cset_list_set_pane_t1_copy1

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp021_copy1_ParamLimits

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp021_copy1

0xb1a8,	// (0x0004b88f) cset6_slider_pane_ParamLimits

0xb1a8,	// (0x0004b88f) cset6_slider_pane

0xb1d4,	// (0x0004b8bb) main_cset6_slider_pane_g1_ParamLimits

0xb1d4,	// (0x0004b8bb) main_cset6_slider_pane_g1

0x83b6,	// (0x00048a9d) main_cset6_slider_pane_g2_ParamLimits

0x83b6,	// (0x00048a9d) main_cset6_slider_pane_g2

0xb1fc,	// (0x0004b8e3) main_cset6_slider_pane_g3_ParamLimits

0xb1fc,	// (0x0004b8e3) main_cset6_slider_pane_g3

0x83de,	// (0x00048ac5) main_cset6_slider_pane_g4_ParamLimits

0x83de,	// (0x00048ac5) main_cset6_slider_pane_g4

0x83ea,	// (0x00048ad1) main_cset6_slider_pane_g5_ParamLimits

0x83ea,	// (0x00048ad1) main_cset6_slider_pane_g5

0x72de,	// (0x000479c5) main_cset6_slider_pane_g7_ParamLimits

0x72de,	// (0x000479c5) main_cset6_slider_pane_g7

0x72ea,	// (0x000479d1) main_cset6_slider_pane_g8_ParamLimits

0x72ea,	// (0x000479d1) main_cset6_slider_pane_g8

0x72f6,	// (0x000479dd) main_cset6_slider_pane_g9_ParamLimits

0x72f6,	// (0x000479dd) main_cset6_slider_pane_g9

0x7302,	// (0x000479e9) main_cset6_slider_pane_g10_ParamLimits

0x7302,	// (0x000479e9) main_cset6_slider_pane_g10

0x730e,	// (0x000479f5) main_cset6_slider_pane_g11_ParamLimits

0x730e,	// (0x000479f5) main_cset6_slider_pane_g11

0x731a,	// (0x00047a01) main_cset6_slider_pane_g12_ParamLimits

0x731a,	// (0x00047a01) main_cset6_slider_pane_g12

0x7326,	// (0x00047a0d) main_cset6_slider_pane_g13_ParamLimits

0x7326,	// (0x00047a0d) main_cset6_slider_pane_g13

0x7332,	// (0x00047a19) main_cset6_slider_pane_g14_ParamLimits

0x7332,	// (0x00047a19) main_cset6_slider_pane_g14

0x83f6,	// (0x00048add) main_cset6_slider_pane_g15_ParamLimits

0x83f6,	// (0x00048add) main_cset6_slider_pane_g15

0x7356,	// (0x00047a3d) main_cset6_slider_pane_g16_ParamLimits

0x7356,	// (0x00047a3d) main_cset6_slider_pane_g16

0x7362,	// (0x00047a49) main_cset6_slider_pane_g17_ParamLimits

0x7362,	// (0x00047a49) main_cset6_slider_pane_g17

0x0011,

0xf8fb,	// (0x0004ffe2) main_cset6_slider_pane_g_ParamLimits

0xf8fb,	// (0x0004ffe2) main_cset6_slider_pane_g

0xb208,	// (0x0004b8ef) main_cset6_slider_pane_t1_ParamLimits

0xb208,	// (0x0004b8ef) main_cset6_slider_pane_t1

0x8426,	// (0x00048b0d) main_cset6_slider_pane_t2_ParamLimits

0x8426,	// (0x00048b0d) main_cset6_slider_pane_t2

0x8451,	// (0x00048b38) main_cset6_slider_pane_t3_ParamLimits

0x8451,	// (0x00048b38) main_cset6_slider_pane_t3

0x847c,	// (0x00048b63) main_cset6_slider_pane_t4_ParamLimits

0x847c,	// (0x00048b63) main_cset6_slider_pane_t4

0x84a7,	// (0x00048b8e) main_cset6_slider_pane_t5_ParamLimits

0x84a7,	// (0x00048b8e) main_cset6_slider_pane_t5

0xb249,	// (0x0004b930) main_cset6_slider_pane_t7_ParamLimits

0xb249,	// (0x0004b930) main_cset6_slider_pane_t7

0x84d2,	// (0x00048bb9) main_cset6_slider_pane_t8_ParamLimits

0x84d2,	// (0x00048bb9) main_cset6_slider_pane_t8

0x84f6,	// (0x00048bdd) main_cset6_slider_pane_t9_ParamLimits

0x84f6,	// (0x00048bdd) main_cset6_slider_pane_t9

0x851a,	// (0x00048c01) main_cset6_slider_pane_t10_ParamLimits

0x851a,	// (0x00048c01) main_cset6_slider_pane_t10

0x853e,	// (0x00048c25) main_cset6_slider_pane_t11_ParamLimits

0x853e,	// (0x00048c25) main_cset6_slider_pane_t11

0xb27f,	// (0x0004b966) main_cset6_slider_pane_t14_ParamLimits

0xb27f,	// (0x0004b966) main_cset6_slider_pane_t14

0xb2b8,	// (0x0004b99f) main_cset6_slider_pane_t15_ParamLimits

0xb2b8,	// (0x0004b99f) main_cset6_slider_pane_t15

0x000b,

0xf920,	// (0x00050007) main_cset6_slider_pane_t_ParamLimits

0xf920,	// (0x00050007) main_cset6_slider_pane_t

0xac57,	// (0x0004b33e) cset_slider_pane_g1_copy1

0xac60,	// (0x0004b347) cset_slider_pane_g2_copy1

0xac69,	// (0x0004b350) cset_slider_pane_g3_copy1

0xc935,	// (0x0004d01c) bg_popup_sub_pane_cp011_copy1

0xb2f1,	// (0x0004b9d8) main_cset_text_pane_g1_copy1

0x795c,	// (0x00048043) main_cset_text_pane_t1_copy1

0x796a,	// (0x00048051) main_cset_text_pane_t2_copy1

0x7978,	// (0x0004805f) main_cset_text_pane_t3_copy1

0x7986,	// (0x0004806d) main_cset_text_pane_t4_copy1

0x7994,	// (0x0004807b) main_cset_text_pane_t5_copy1

0xb2f9,	// (0x0004b9e0) main_cset_text_pane_t6_copy1

0xb307,	// (0x0004b9ee) main_cset_text_pane_t7_copy1

0x8310,	// (0x000489f7) main_cset_text2_pane_t1_copy1

0xcfe4,	// (0x0004d6cb) main_ncimui_pane

0x4550,	// (0x00044c37) popup_query_ncimui_window_ParamLimits

0x4550,	// (0x00044c37) popup_query_ncimui_window

0xa7fc,	// (0x0004aee3) field_cale_ev2_pane_g4_ParamLimits

0xa7fc,	// (0x0004aee3) field_cale_ev2_pane_g4

0x62e6,	// (0x000469cd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x62e6,	// (0x000469cd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf60b,	// (0x0004fcf2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf60b,	// (0x0004fcf2) cell_video_dialer_keypad_pane_g

0x62fe,	// (0x000469e5) cell_video_dialer_keypad_pane_t1

0xc935,	// (0x0004d01c) bg_popup_window_pane_cp012

0xefc7,	// (0x0004f6ae) heading_pane_cp06

0xb333,	// (0x0004ba1a) ncim_query_content_pane

0xc935,	// (0x0004d01c) bg_popup_heading_pane_cp01

0xb33b,	// (0x0004ba22) ncim_heading_pane_t1

0xb349,	// (0x0004ba30) ncim_indicator_popup_pane

0xb35b,	// (0x0004ba42) ncim_query_button_pane

0xb36f,	// (0x0004ba56) ncim_query_content_pane_t1

0xb381,	// (0x0004ba68) ncim_query_content_pane_t2

0x0005,

0xf955,	// (0x0005003c) ncim_query_content_pane_t

0xb3bb,	// (0x0004baa2) ncim_query_list_pane

0xb3cd,	// (0x0004bab4) ncim_query_popup_pane

0xb349,	// (0x0004ba30) ncim_indicator_popup_pane_ParamLimits

0x868b,	// (0x00048d72) ncim_query_content_pane_g1_ParamLimits

0x868b,	// (0x00048d72) ncim_query_content_pane_g1

0xb36f,	// (0x0004ba56) ncim_query_content_pane_t1_ParamLimits

0xb381,	// (0x0004ba68) ncim_query_content_pane_t2_ParamLimits

0x8697,	// (0x00048d7e) ncim_query_content_pane_t3_ParamLimits

0x8697,	// (0x00048d7e) ncim_query_content_pane_t3

0x86bf,	// (0x00048da6) ncim_query_content_pane_t4_ParamLimits

0x86bf,	// (0x00048da6) ncim_query_content_pane_t4

0x86e7,	// (0x00048dce) ncim_query_content_pane_t5_ParamLimits

0x86e7,	// (0x00048dce) ncim_query_content_pane_t5

0xb393,	// (0x0004ba7a) ncim_query_content_pane_t6_ParamLimits

0xb393,	// (0x0004ba7a) ncim_query_content_pane_t6

0xf955,	// (0x0005003c) ncim_query_content_pane_t_ParamLimits

0xb3bb,	// (0x0004baa2) ncim_query_list_pane_ParamLimits

0xb3cd,	// (0x0004bab4) ncim_query_popup_pane_ParamLimits

0xb3e1,	// (0x0004bac8) wait_bar_pane_cp04

0xc935,	// (0x0004d01c) input_focus_pane_cp011

0xb3e9,	// (0x0004bad0) ncim_query_popup_pane_t1

0xb3f7,	// (0x0004bade) ncim_list_query_list_pane_ParamLimits

0xb3f7,	// (0x0004bade) ncim_list_query_list_pane

0xc935,	// (0x0004d01c) bg_button_pane_cp027

0xb404,	// (0x0004baeb) ncim_query_button_pane_g1

0xc935,	// (0x0004d01c) list_highlight_pane_cp012

0xb40e,	// (0x0004baf5) ncim_list_query_list_pane_g1

0xb416,	// (0x0004bafd) ncim_list_query_list_pane_t1

0xab41,	// (0x0004b228) cam4_indicators_pane_g3_ParamLimits

0xab41,	// (0x0004b228) cam4_indicators_pane_g3

0xabc1,	// (0x0004b2a8) vid4_indicators_pane_g5_ParamLimits

0xabc1,	// (0x0004b2a8) vid4_indicators_pane_g5

0xadcf,	// (0x0004b4b6) vid4_progress_pane_g5_ParamLimits

0xadcf,	// (0x0004b4b6) vid4_progress_pane_g5

0x8576,	// (0x00048c5d) main_ncimui_pane_g1

0x85df,	// (0x00048cc6) ncimui_group_query_pane_ParamLimits

0x85df,	// (0x00048cc6) ncimui_group_query_pane

0x8627,	// (0x00048d0e) ncimui_list_pane_ParamLimits

0x8627,	// (0x00048d0e) ncimui_list_pane

0x864e,	// (0x00048d35) ncimui_text_pane_ParamLimits

0x864e,	// (0x00048d35) ncimui_text_pane

0x870f,	// (0x00048df6) ncimui_text_pane_t1_ParamLimits

0x870f,	// (0x00048df6) ncimui_text_pane_t1

0xb424,	// (0x0004bb0b) ncimui_list_single_graphic_pane_ParamLimits

0xb424,	// (0x0004bb0b) ncimui_list_single_graphic_pane

0x872d,	// (0x00048e14) ncimui_query_pane_ParamLimits

0x872d,	// (0x00048e14) ncimui_query_pane

0xc935,	// (0x0004d01c) list_highlight_pane_cp013

0xb434,	// (0x0004bb1b) ncim_list_query_list_pane_t1_copy1

0xb40e,	// (0x0004baf5) ncim_list_single_graphic_pane_g1

0x8740,	// (0x00048e27) ncim_query_button_pane_cp01

0x874c,	// (0x00048e33) ncim_query_entry_pane_ParamLimits

0x874c,	// (0x00048e33) ncim_query_entry_pane

0x875f,	// (0x00048e46) ncimui_query_pane_g1

0x876b,	// (0x00048e52) ncimui_query_pane_t1_ParamLimits

0x876b,	// (0x00048e52) ncimui_query_pane_t1

0xcfe4,	// (0x0004d6cb) input_focus_pane_cp012

0xb442,	// (0x0004bb29) ncim_query_entry_pane_t1

0xd0ef,	// (0x0004d7d6) main_im_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_mobtv_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_mobtv_pane

0x840e,	// (0x00048af5) main_cset6_slider_pane_g18_ParamLimits

0x840e,	// (0x00048af5) main_cset6_slider_pane_g18

0x841a,	// (0x00048b01) main_cset6_slider_pane_g19_ParamLimits

0x841a,	// (0x00048b01) main_cset6_slider_pane_g19

0xd099,	// (0x0004d780) bg_main_mobtv_pane_ParamLimits

0xd099,	// (0x0004d780) bg_main_mobtv_pane

0x8784,	// (0x00048e6b) main_mobtv_info_pane

0x878d,	// (0x00048e74) main_mobtv_loading_pane_ParamLimits

0x878d,	// (0x00048e74) main_mobtv_loading_pane

0xb454,	// (0x0004bb3b) main_mobtv_pg_channel_list_pane

0xb45e,	// (0x0004bb45) main_mobtv_pg_hdr_pane

0x879a,	// (0x00048e81) main_mobtv_programe_curr_pane_ParamLimits

0x879a,	// (0x00048e81) main_mobtv_programe_curr_pane

0x87a7,	// (0x00048e8e) main_mobtv_programe_next_pane_ParamLimits

0x87a7,	// (0x00048e8e) main_mobtv_programe_next_pane

0xb467,	// (0x0004bb4e) popup_mobtv_noti_window

0xd2d7,	// (0x0004d9be) main_tv_pg_hdr_pane_g1

0xb46f,	// (0x0004bb56) main_tv_pg_hdr_pane_g2

0xb477,	// (0x0004bb5e) main_tv_pg_hdr_pane_g3

0xb47f,	// (0x0004bb66) main_tv_pg_hdr_pane_g4

0xb487,	// (0x0004bb6e) main_tv_pg_hdr_pane_g5

0xb491,	// (0x0004bb78) main_tv_pg_hdr_pane_g6

0xb49b,	// (0x0004bb82) main_tv_pg_hdr_pane_g7

0xb4a5,	// (0x0004bb8c) main_tv_pg_hdr_pane_g8

0xb4af,	// (0x0004bb96) main_tv_pg_hdr_pane_g9

0xb4b9,	// (0x0004bba0) main_tv_pg_hdr_pane_g10

0xb4c3,	// (0x0004bbaa) main_tv_pg_hdr_pane_g11

0x000a,

0xf962,	// (0x00050049) main_tv_pg_hdr_pane_g

0xb4cd,	// (0x0004bbb4) main_tv_pg_hdr_pane_t1

0xb4db,	// (0x0004bbc2) main_tv_pg_hdr_pane_t2

0xb4e9,	// (0x0004bbd0) main_tv_pg_hdr_pane_t3

0xb4f9,	// (0x0004bbe0) main_tv_pg_hdr_pane_t4

0xb509,	// (0x0004bbf0) main_tv_pg_hdr_pane_t5

0x0004,

0xf979,	// (0x00050060) main_tv_pg_hdr_pane_t

0xb519,	// (0x0004bc00) single_mobtv_pg_channel_pane_ParamLimits

0xb519,	// (0x0004bc00) single_mobtv_pg_channel_pane

0xb52b,	// (0x0004bc12) single_mobtv_pg_channel_table_pane

0xb534,	// (0x0004bc1b) single_mobtv_pg_channel_thumb_pane

0xb53d,	// (0x0004bc24) single_tv_pg_channel_pane_g1

0xb546,	// (0x0004bc2d) single_tv_pg_channel_pane_g2

0x0001,

0xf984,	// (0x0005006b) single_tv_pg_channel_pane_g

0xd07d,	// (0x0004d764) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd07d,	// (0x0004d764) bg_single_mobtv_pg_channel_thumb_pane

0xb54f,	// (0x0004bc36) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb54f,	// (0x0004bc36) single_mobtv_pg_channel_thumb_pane_g1

0xb55d,	// (0x0004bc44) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb55d,	// (0x0004bc44) single_mobtv_pg_channel_thumb_pane_g2

0xb569,	// (0x0004bc50) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb569,	// (0x0004bc50) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf989,	// (0x00050070) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf989,	// (0x00050070) single_mobtv_pg_channel_thumb_pane_g

0xb575,	// (0x0004bc5c) single_mobtv_pg_channel_thumb_pane_t1

0xb583,	// (0x0004bc6a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf990,	// (0x00050077) single_mobtv_pg_channel_thumb_pane_t

0xd2d7,	// (0x0004d9be) bg_single_mobtv_pg_channel_table_pane_g1

0xd2d7,	// (0x0004d9be) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x02ed,	// (0x000409d4) bg_single_mobtv_pg_channel_table_pane_g

0xb591,	// (0x0004bc78) single_mobtv_pg_channel_table_pane_t1

0xb59f,	// (0x0004bc86) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf995,	// (0x0005007c) single_mobtv_pg_channel_table_pane_t

0x87bc,	// (0x00048ea3) main_mobtv_info_pane_g1_ParamLimits

0x87bc,	// (0x00048ea3) main_mobtv_info_pane_g1

0x87da,	// (0x00048ec1) main_mobtv_info_pane_t1_ParamLimits

0x87da,	// (0x00048ec1) main_mobtv_info_pane_t1

0x8852,	// (0x00048f39) main_mobtv_info_pane_t2_ParamLimits

0x8852,	// (0x00048f39) main_mobtv_info_pane_t2

0x0002,

0xf99f,	// (0x00050086) main_mobtv_info_pane_t_ParamLimits

0xf99f,	// (0x00050086) main_mobtv_info_pane_t

0x88e1,	// (0x00048fc8) wait_bar_pane_cp05

0x88f3,	// (0x00048fda) main_mobtv_loading_pane_g1_ParamLimits

0x88f3,	// (0x00048fda) main_mobtv_loading_pane_g1

0x8906,	// (0x00048fed) main_mobtv_loading_pane_g2_ParamLimits

0x8906,	// (0x00048fed) main_mobtv_loading_pane_g2

0x8912,	// (0x00048ff9) main_mobtv_loading_pane_g3_ParamLimits

0x8912,	// (0x00048ff9) main_mobtv_loading_pane_g3

0x0002,

0xf9a6,	// (0x0005008d) main_mobtv_loading_pane_g_ParamLimits

0xf9a6,	// (0x0005008d) main_mobtv_loading_pane_g

0xb5ad,	// (0x0004bc94) main_mobtv_loading_pane_t1_ParamLimits

0xb5ad,	// (0x0004bc94) main_mobtv_loading_pane_t1

0xb5c5,	// (0x0004bcac) main_mobtv_loading_pane_t2_ParamLimits

0xb5c5,	// (0x0004bcac) main_mobtv_loading_pane_t2

0x0001,

0xf9ad,	// (0x00050094) main_mobtv_loading_pane_t_ParamLimits

0xf9ad,	// (0x00050094) main_mobtv_loading_pane_t

0x8925,	// (0x0004900c) wait_bar_pane_cp06_ParamLimits

0x8925,	// (0x0004900c) wait_bar_pane_cp06

0xb5e9,	// (0x0004bcd0) main_mobtv_programe_curr_pane_t1

0xb5f7,	// (0x0004bcde) main_mobtv_programe_curr_pane_t2

0x0001,

0xf9b2,	// (0x00050099) main_mobtv_programe_curr_pane_t

0xb605,	// (0x0004bcec) main_mobtv_programe_next_pane_t1

0xb613,	// (0x0004bcfa) main_mobtv_programe_next_pane_t2

0xb621,	// (0x0004bd08) main_mobtv_programe_next_pane_t3

0x0002,

0xf9b7,	// (0x0005009e) main_mobtv_programe_next_pane_t

0xc935,	// (0x0004d01c) bg_popup_mobtv_noti_window_pane

0xb62f,	// (0x0004bd16) popup_mobtv_noti_window_g1

0xb637,	// (0x0004bd1e) popup_mobtv_noti_window_t1

0xb645,	// (0x0004bd2c) popup_mobtv_noti_window_t2

0x0001,

0xf9be,	// (0x000500a5) popup_mobtv_noti_window_t

0xd2d7,	// (0x0004d9be) bg_popup_mobtv_noti_window_pane_g1

0xc935,	// (0x0004d01c) sc_clock_pane

0xc935,	// (0x0004d01c) main_fs_bigclock_pane

0x805a,	// (0x00048741) blid2_tripm_pane_t4_ParamLimits

0x805a,	// (0x00048741) blid2_tripm_pane_t4

0x8934,	// (0x0004901b) sc_clock_pane_g1_ParamLimits

0x8934,	// (0x0004901b) sc_clock_pane_g1

0x8946,	// (0x0004902d) sc_clock_pane_t1_ParamLimits

0x8946,	// (0x0004902d) sc_clock_pane_t1

0x8968,	// (0x0004904f) sc_clock_pane_t2_ParamLimits

0x8968,	// (0x0004904f) sc_clock_pane_t2

0x8980,	// (0x00049067) sc_clock_pane_t3_ParamLimits

0x8980,	// (0x00049067) sc_clock_pane_t3

0x0004,

0xf9c3,	// (0x000500aa) sc_clock_pane_t_ParamLimits

0xf9c3,	// (0x000500aa) sc_clock_pane_t

0x9357,	// (0x00049a3e) main_fs_bigclock_indicator_pane_ParamLimits

0x9357,	// (0x00049a3e) main_fs_bigclock_indicator_pane

0x8a26,	// (0x0004910d) main_fs_bigclock_pane_g1_ParamLimits

0x8a26,	// (0x0004910d) main_fs_bigclock_pane_g1

0x9363,	// (0x00049a4a) main_fs_bigclock_pane_t1_ParamLimits

0x9363,	// (0x00049a4a) main_fs_bigclock_pane_t1

0x9375,	// (0x00049a5c) main_fs_bigclock_pane_t2_ParamLimits

0x9375,	// (0x00049a5c) main_fs_bigclock_pane_t2

0x9389,	// (0x00049a70) main_fs_bigclock_pane_t3_ParamLimits

0x9389,	// (0x00049a70) main_fs_bigclock_pane_t3

0x0002,

0xfb4f,	// (0x00050236) main_fs_bigclock_pane_t_ParamLimits

0xfb4f,	// (0x00050236) main_fs_bigclock_pane_t

0xc1ac,	// (0x0004c893) main_fs_bigclock_indicator_pane_g1

0xb363,	// (0x0004ba4a) ncim_query_content_pane_g2_ParamLimits

0xb363,	// (0x0004ba4a) ncim_query_content_pane_g2

0x0001,

0xf950,	// (0x00050037) ncim_query_content_pane_g_ParamLimits

0xf950,	// (0x00050037) ncim_query_content_pane_g

0x8999,	// (0x00049080) sc_clock_pane_t4_ParamLimits

0x8999,	// (0x00049080) sc_clock_pane_t4

0xcfe4,	// (0x0004d6cb) main_radioblah_pane

0xaab3,	// (0x0004b19a) cell_call4_button_pane_t1_copy1_ParamLimits

0xaab3,	// (0x0004b19a) cell_call4_button_pane_t1_copy1

0x858e,	// (0x00048c75) main_ncimui_pane_t1_ParamLimits

0x858e,	// (0x00048c75) main_ncimui_pane_t1

0x85a8,	// (0x00048c8f) main_ncimui_pane_t2_ParamLimits

0x85a8,	// (0x00048c8f) main_ncimui_pane_t2

0x0002,

0xf949,	// (0x00050030) main_ncimui_pane_t_ParamLimits

0xf949,	// (0x00050030) main_ncimui_pane_t

0xb78a,	// (0x0004be71) main_radioblah_anim_pane_ParamLimits

0xb78a,	// (0x0004be71) main_radioblah_anim_pane

0xb79b,	// (0x0004be82) main_radioblah_info_pane_ParamLimits

0xb79b,	// (0x0004be82) main_radioblah_info_pane

0xb7af,	// (0x0004be96) main_radioblah_pane_t1_ParamLimits

0xb7af,	// (0x0004be96) main_radioblah_pane_t1

0xb7cb,	// (0x0004beb2) main_radioblah_pane_t2_ParamLimits

0xb7cb,	// (0x0004beb2) main_radioblah_pane_t2

0x0003,

0xf9e4,	// (0x000500cb) main_radioblah_pane_t_ParamLimits

0xf9e4,	// (0x000500cb) main_radioblah_pane_t

0x8a85,	// (0x0004916c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8a85,	// (0x0004916c) main_radioblah_rocker_ctrl_pane

0xb813,	// (0x0004befa) main_radioblah_info_pane_t1_ParamLimits

0xb813,	// (0x0004befa) main_radioblah_info_pane_t1

0x8add,	// (0x000491c4) main_radioblah_info_pane_t2_ParamLimits

0x8add,	// (0x000491c4) main_radioblah_info_pane_t2

0x0003,

0xf9ed,	// (0x000500d4) main_radioblah_info_pane_t_ParamLimits

0xf9ed,	// (0x000500d4) main_radioblah_info_pane_t

0xd2d7,	// (0x0004d9be) main_radioblah_rocker_ctrl_pane_g1

0x8b8d,	// (0x00049274) main_radioblah_rocker_ctrl_pane_g2

0x8b95,	// (0x0004927c) main_radioblah_rocker_ctrl_pane_g3

0x8b9d,	// (0x00049284) main_radioblah_rocker_ctrl_pane_g4

0x8ba5,	// (0x0004928c) main_radioblah_rocker_ctrl_pane_g5

0x8bad,	// (0x00049294) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9f6,	// (0x000500dd) main_radioblah_rocker_ctrl_pane_g

0x8310,	// (0x000489f7) main_cset_text2_pane_t1_copy1_ParamLimits

0xab11,	// (0x0004b1f8) cam4_image_uncrop_qvga_pane

0xab6a,	// (0x0004b251) vid4_image_uncrop_qcif_pane

0xc997,	// (0x0004d07e) cam6_image_uncrop_qvga_pane_ParamLimits

0xc997,	// (0x0004d07e) cam6_image_uncrop_qvga_pane

0xb06a,	// (0x0004b751) vid6_image_uncrop_qcif_pane_ParamLimits

0xb06a,	// (0x0004b751) vid6_image_uncrop_qcif_pane

0xc935,	// (0x0004d01c) bg_popup_preview_window_pane_cp03

0xb315,	// (0x0004b9fc) list_cset_text2_pane

0xb31d,	// (0x0004ba04) main_cset6_text2_pane_g1

0xb325,	// (0x0004ba0c) main_cset6_text2_pane_t1

0x8bb5,	// (0x0004929c) list_cset_text2_pane_t1_ParamLimits

0x8bb5,	// (0x0004929c) list_cset_text2_pane_t1

0xcfe4,	// (0x0004d6cb) main_radioblah_pane_ParamLimits

0x88cd,	// (0x00048fb4) main_mobtv_info_pane_t3_ParamLimits

0x88cd,	// (0x00048fb4) main_mobtv_info_pane_t3

0x8a73,	// (0x0004915a) main_radioblah_pane_g1

0x8aad,	// (0x00049194) main_radioblah_info_pane_g1

0x8b32,	// (0x00049219) main_radioblah_info_pane_t3_ParamLimits

0x8b32,	// (0x00049219) main_radioblah_info_pane_t3

0x3347,	// (0x00043a2e) highlight_cell_cale_month_pane_ParamLimits

0x3347,	// (0x00043a2e) highlight_cell_cale_month_pane

0xc935,	// (0x0004d01c) main_phob_fisheye_pane

0x5834,	// (0x00045f1b) scroll_pane_cp0031_ParamLimits

0x5834,	// (0x00045f1b) scroll_pane_cp0031

0xb178,	// (0x0004b85f) wait_bar_pane_cp08_ParamLimits

0x8395,	// (0x00048a7c) cset_list_set_pane_copy1_ParamLimits

0xb84d,	// (0x0004bf34) highlight_cell_cale_month_pane_g1

0x8bce,	// (0x000492b5) highlight_cell_cale_month_pane_t1

0xad92,	// (0x0004b479) list_gen_pane_cp01

0x7231,	// (0x00047918) scroll_pane_01

0x8bdc,	// (0x000492c3) list_single_double_fisheye_pane

0x11b4,	// (0x0004189b) list_double_fisheye_pane_g1_ParamLimits

0x11b4,	// (0x0004189b) list_double_fisheye_pane_g1

0x11c0,	// (0x000418a7) list_double_fisheye_pane_g2_ParamLimits

0x11c0,	// (0x000418a7) list_double_fisheye_pane_g2

0x8be5,	// (0x000492cc) list_double_fisheye_pane_g3_ParamLimits

0x8be5,	// (0x000492cc) list_double_fisheye_pane_g3

0x0004,

0xfa03,	// (0x000500ea) list_double_fisheye_pane_g_ParamLimits

0xfa03,	// (0x000500ea) list_double_fisheye_pane_g

0x11f1,	// (0x000418d8) list_double_fisheye_pane_t1_ParamLimits

0x11f1,	// (0x000418d8) list_double_fisheye_pane_t1

0x120c,	// (0x000418f3) list_double_fisheye_pane_t2_ParamLimits

0x120c,	// (0x000418f3) list_double_fisheye_pane_t2

0x0001,

0xfa0e,	// (0x000500f5) list_double_fisheye_pane_t_ParamLimits

0xfa0e,	// (0x000500f5) list_double_fisheye_pane_t

0xc935,	// (0x0004d01c) main_call5_pane

0x89c4,	// (0x000490ab) sc_swipe_pane_ParamLimits

0x89c4,	// (0x000490ab) sc_swipe_pane

0x8c04,	// (0x000492eb) call5_image_pane_ParamLimits

0x8c04,	// (0x000492eb) call5_image_pane

0x8c21,	// (0x00049308) call5_swipe_1_pane_ParamLimits

0x8c21,	// (0x00049308) call5_swipe_1_pane

0x8c34,	// (0x0004931b) call5_swipe_2_pane_ParamLimits

0x8c34,	// (0x0004931b) call5_swipe_2_pane

0x8c5f,	// (0x00049346) popup_call5_audio_first_window_ParamLimits

0x8c5f,	// (0x00049346) popup_call5_audio_first_window

0xd07d,	// (0x0004d764) call5_swipe_1_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) call5_swipe_1_pane_g1

0xb855,	// (0x0004bf3c) call5_swipe_1_pane_g2_ParamLimits

0xb855,	// (0x0004bf3c) call5_swipe_1_pane_g2

0x0001,

0xfa13,	// (0x000500fa) call5_swipe_1_pane_g_ParamLimits

0xfa13,	// (0x000500fa) call5_swipe_1_pane_g

0xb861,	// (0x0004bf48) call5_swipe_1_pane_t1_ParamLimits

0xb861,	// (0x0004bf48) call5_swipe_1_pane_t1

0xd07d,	// (0x0004d764) call5_swipe_2_pane_g1_ParamLimits

0xd07d,	// (0x0004d764) call5_swipe_2_pane_g1

0xb876,	// (0x0004bf5d) call5_swipe_2_pane_g2_ParamLimits

0xb876,	// (0x0004bf5d) call5_swipe_2_pane_g2

0x0001,

0xfa18,	// (0x000500ff) call5_swipe_2_pane_g_ParamLimits

0xfa18,	// (0x000500ff) call5_swipe_2_pane_g

0xb882,	// (0x0004bf69) call5_swipe_2_pane_t1_ParamLimits

0xb882,	// (0x0004bf69) call5_swipe_2_pane_t1

0xb897,	// (0x0004bf7e) sc_swipe_pane_g1_ParamLimits

0xb897,	// (0x0004bf7e) sc_swipe_pane_g1

0xb8a4,	// (0x0004bf8b) sc_swipe_pane_g2_ParamLimits

0xb8a4,	// (0x0004bf8b) sc_swipe_pane_g2

0x0001,

0xfa1d,	// (0x00050104) sc_swipe_pane_g_ParamLimits

0xfa1d,	// (0x00050104) sc_swipe_pane_g

0xb8b0,	// (0x0004bf97) sc_swipe_pane_t1_ParamLimits

0xb8b0,	// (0x0004bf97) sc_swipe_pane_t1

0xc935,	// (0x0004d01c) main_cmail_launcher_pane

0x8c70,	// (0x00049357) aid_size_cell_cmail_l_ParamLimits

0x8c70,	// (0x00049357) aid_size_cell_cmail_l

0x8c7e,	// (0x00049365) grid_cmail_l_pane_ParamLimits

0x8c7e,	// (0x00049365) grid_cmail_l_pane

0x8c98,	// (0x0004937f) cell_cmail_l_pane_ParamLimits

0x8c98,	// (0x0004937f) cell_cmail_l_pane

0xb8c5,	// (0x0004bfac) cell_cmail_l_pane_g1_ParamLimits

0xb8c5,	// (0x0004bfac) cell_cmail_l_pane_g1

0xb8d1,	// (0x0004bfb8) cell_cmail_l_pane_t1_ParamLimits

0xb8d1,	// (0x0004bfb8) cell_cmail_l_pane_t1

0xb8e7,	// (0x0004bfce) cell_cmail_l_pane_t2_ParamLimits

0xb8e7,	// (0x0004bfce) cell_cmail_l_pane_t2

0x0001,

0xfa22,	// (0x00050109) cell_cmail_l_pane_t_ParamLimits

0xfa22,	// (0x00050109) cell_cmail_l_pane_t

0xcfe4,	// (0x0004d6cb) grid_highlight_pane_cp018_ParamLimits

0xcfe4,	// (0x0004d6cb) grid_highlight_pane_cp018

0x1786,	// (0x00041e6d) main2_pane_ParamLimits

0x1786,	// (0x00041e6d) main2_pane

0xd17e,	// (0x0004d865) popup_sp_fs_action_menu_bg_pane_g1

0xd186,	// (0x0004d86d) popup_sp_fs_action_menu_bg_pane_g2

0xd18e,	// (0x0004d875) popup_sp_fs_action_menu_bg_pane_g3

0xd196,	// (0x0004d87d) popup_sp_fs_action_menu_bg_pane_g4

0xd19e,	// (0x0004d885) popup_sp_fs_action_menu_bg_pane_g5

0xd1a6,	// (0x0004d88d) popup_sp_fs_action_menu_bg_pane_g6

0xd1ae,	// (0x0004d895) popup_sp_fs_action_menu_bg_pane_g7

0xd1b6,	// (0x0004d89d) popup_sp_fs_action_menu_bg_pane_g8

0xd1be,	// (0x0004d8a5) popup_sp_fs_action_menu_bg_pane_g9

0xd1c6,	// (0x0004d8ad) popup_sp_fs_action_menu_bg_pane_g10

0xd1c6,	// (0x0004d8ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x0055,	// (0x0004073c) popup_sp_fs_action_menu_bg_pane_g

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g2

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g3_g3

0x0002,

0x0103,	// (0x000407ea) list_medium_line_x2_t3_g3_g_ParamLimits

0x0103,	// (0x000407ea) list_medium_line_x2_t3_g3_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t2

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g3_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g3_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g3_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_x2_t3_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_x2_t3_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t2

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g2_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g2_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g2_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g2

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g3

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g4_g4

0x0003,

0x0116,	// (0x000407fd) list_medium_line_x2_t4_g4_g_ParamLimits

0x0116,	// (0x000407fd) list_medium_line_x2_t4_g4_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t2

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t3

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1af,	// (0x0004f896) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1af,	// (0x0004f896) list_medium_line_x2_t4_g4_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g2

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g3

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g4_g4

0x0003,

0x0116,	// (0x000407fd) list_medium_line_x2_t2_g4_g_ParamLimits

0x0116,	// (0x000407fd) list_medium_line_x2_t2_g4_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g4_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g4_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g4_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g4_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g2

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g3_g3

0x0002,

0x0103,	// (0x000407ea) list_medium_line_x2_t2_g3_g_ParamLimits

0x0103,	// (0x000407ea) list_medium_line_x2_t2_g3_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g3_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g3_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g3_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g3_t

0x3499,	// (0x00043b80) main_sp_fs_list_pane_ParamLimits

0x3499,	// (0x00043b80) main_sp_fs_list_pane

0xe7d0,	// (0x0004eeb7) sp_fs_scroll_pane_ParamLimits

0xe7d0,	// (0x0004eeb7) sp_fs_scroll_pane

0xd807,	// (0x0004deee) list_medium_line_x2_t3_t1

0xd807,	// (0x0004deee) list_medium_line_x2_t3_t2

0xd807,	// (0x0004deee) list_medium_line_x2_t3_t3

0x0002,

0x01d1,	// (0x000408b8) list_medium_line_x2_t3_t

0xd807,	// (0x0004deee) list_medium_line_x3_t4_t1

0xd807,	// (0x0004deee) list_medium_line_x3_t4_t2

0xd807,	// (0x0004deee) list_medium_line_x3_t4_t3

0xd807,	// (0x0004deee) list_medium_line_x3_t4_t4

0x0003,

0x01d8,	// (0x000408bf) list_medium_line_x3_t4_t

0xd807,	// (0x0004deee) list_medium_line_x4_t5_t1

0xd807,	// (0x0004deee) list_medium_line_x4_t5_t2

0xd807,	// (0x0004deee) list_medium_line_x4_t5_t3

0xd807,	// (0x0004deee) list_medium_line_x4_t5_t4

0xd807,	// (0x0004deee) list_medium_line_x4_t5_t5

0x0004,

0x01e1,	// (0x000408c8) list_medium_line_x4_t5_t

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g1

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g2

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g3

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t4_g4_g4

0x0003,

0x0116,	// (0x000407fd) list_medium_line_t4_g4_g_ParamLimits

0x0116,	// (0x000407fd) list_medium_line_t4_g4_g

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t1

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t2

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t3

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t4_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t4_g4_t4

0x0003,

0xf1af,	// (0x0004f896) list_medium_line_t4_g4_t_ParamLimits

0xf1af,	// (0x0004f896) list_medium_line_t4_g4_t

0x3534,	// (0x00043c1b) chi_dic_find_pane_g1

0x431a,	// (0x00044a01) main_tport_pane

0xd807,	// (0x0004deee) list_medium_line_plain_t1

0xd07d,	// (0x0004d764) list_medium_line_t2_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_t2_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_t2_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_t2_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_t2_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_g2_t1

0xd2a9,	// (0x0004d990) list_medium_line_t2_g2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_g2_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_t2_g2_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_t2_g2_t

0xaddb,	// (0x0004b4c2) aid_sp_fs_list_icon_a_sm

0xade3,	// (0x0004b4ca) aid_sp_fs_list_icon_d

0xadeb,	// (0x0004b4d2) aid_sp_fs_text_primary

0xadf4,	// (0x0004b4db) aid_sp_fs_text_secondary

0xc935,	// (0x0004d01c) list_medium_line

0xc935,	// (0x0004d01c) list_medium_line_g2

0xc935,	// (0x0004d01c) list_medium_line_g3

0xc935,	// (0x0004d01c) list_medium_line_plain

0xc935,	// (0x0004d01c) list_medium_line_plain_t2

0xc935,	// (0x0004d01c) list_medium_line_plain_t3

0xc935,	// (0x0004d01c) list_medium_line_right_icon

0xc935,	// (0x0004d01c) list_medium_line_right_iconx2

0xc935,	// (0x0004d01c) list_medium_line_t2

0xc935,	// (0x0004d01c) list_medium_line_t2_g2

0xc935,	// (0x0004d01c) list_medium_line_t2_g3

0xc935,	// (0x0004d01c) list_medium_line_t2_right_icon

0xc935,	// (0x0004d01c) list_medium_line_t2_right_iconx2

0xc935,	// (0x0004d01c) list_medium_line_t3

0xc935,	// (0x0004d01c) list_medium_line_t3_g2

0xc935,	// (0x0004d01c) list_medium_line_t3_g3

0xc935,	// (0x0004d01c) list_medium_line_t3_right_iconx2

0xc935,	// (0x0004d01c) list_medium_line_t4_g4

0xc935,	// (0x0004d01c) list_medium_line_x2

0xc935,	// (0x0004d01c) list_medium_line_x2_t2_g2

0xc935,	// (0x0004d01c) list_medium_line_x2_t2_g3

0xc935,	// (0x0004d01c) list_medium_line_x2_t2_g4

0xc935,	// (0x0004d01c) list_medium_line_x2_t3

0xc935,	// (0x0004d01c) list_medium_line_x2_t3_g2

0xc935,	// (0x0004d01c) list_medium_line_x2_t3_g3

0xc935,	// (0x0004d01c) list_medium_line_x2_t3_g4

0xc935,	// (0x0004d01c) list_medium_line_x2_t4_g2

0xc935,	// (0x0004d01c) list_medium_line_x2_t4_g4

0xc935,	// (0x0004d01c) list_medium_line_x3

0xc935,	// (0x0004d01c) list_medium_line_x3_t4

0xc935,	// (0x0004d01c) list_medium_line_x3_t4_g4

0xc935,	// (0x0004d01c) list_medium_line_x4_t4

0xc935,	// (0x0004d01c) list_medium_line_x4_t4_g7

0xc935,	// (0x0004d01c) list_medium_line_x4_t5

0x1157,	// (0x0004183e) list_single_fs_dyc_pane_ParamLimits

0x1157,	// (0x0004183e) list_single_fs_dyc_pane

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g1

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g2

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g3

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g4

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g5

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x4_t4_g7_g6

0xd08b,	// (0x0004d772) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd08b,	// (0x0004d772) list_medium_line_x4_t4_g7_g7

0x0006,

0x0a62,	// (0x00041149) list_medium_line_x4_t4_g7_g_ParamLimits

0x0a62,	// (0x00041149) list_medium_line_x4_t4_g7_g

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t1

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t2

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x4_t4_g7_t3

0xd2f9,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd2f9,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t4

0xd2f9,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd2f9,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t5

0x0004,

0xf939,	// (0x00050020) list_medium_line_x4_t4_g7_t_ParamLimits

0xf939,	// (0x00050020) list_medium_line_x4_t4_g7_t

0x1197,	// (0x0004187e) list_single_dyc_row_pane_ParamLimits

0x1197,	// (0x0004187e) list_single_dyc_row_pane

0x8bf1,	// (0x000492d8) call5_gesture_pane_ParamLimits

0x8bf1,	// (0x000492d8) call5_gesture_pane

0x8c47,	// (0x0004932e) call5_windows_pane_ParamLimits

0x8c47,	// (0x0004932e) call5_windows_pane

0x8cb2,	// (0x00049399) call5_swipe_1_pane_cp_ParamLimits

0x8cb2,	// (0x00049399) call5_swipe_1_pane_cp

0x8cbe,	// (0x000493a5) call5_swipe_2_pane_cp_ParamLimits

0x8cbe,	// (0x000493a5) call5_swipe_2_pane_cp

0xd2a1,	// (0x0004d988) call5_image_pane_cp

0x8cca,	// (0x000493b1) popup_call5_audio_first_window_cp_ParamLimits

0x8cca,	// (0x000493b1) popup_call5_audio_first_window_cp

0xb897,	// (0x0004bf7e) call5_swipe_1_pane_g1_cp_ParamLimits

0xb897,	// (0x0004bf7e) call5_swipe_1_pane_g1_cp

0xb904,	// (0x0004bfeb) call5_swipe_1_pane_g2_cp

0xb8b0,	// (0x0004bf97) call5_swipe_1_pane_t1_cp_ParamLimits

0xb8b0,	// (0x0004bf97) call5_swipe_1_pane_t1_cp

0xb897,	// (0x0004bf7e) call5_swipe_2_pane_g1_cp_ParamLimits

0xb897,	// (0x0004bf7e) call5_swipe_2_pane_g1_cp

0xb90c,	// (0x0004bff3) call5_swipe_2_pane_g2_cp

0xb914,	// (0x0004bffb) call5_swipe_2_pane_t1_cp_ParamLimits

0xb914,	// (0x0004bffb) call5_swipe_2_pane_t1_cp

0xcfe4,	// (0x0004d6cb) main_sp_fs_email_pane

0xb929,	// (0x0004c010) main_sp_fs_listscroll_pane_te

0x122e,	// (0x00041915) popup_sp_fs_action_menu_pane_ParamLimits

0x122e,	// (0x00041915) popup_sp_fs_action_menu_pane

0xd2d7,	// (0x0004d9be) bg_sp_fs_ctrlbar_pane_g1

0xb932,	// (0x0004c019) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb93b,	// (0x0004c022) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb944,	// (0x0004c02b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd2d7,	// (0x0004d9be) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa27,	// (0x0005010e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4893,	// (0x00044f7a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4893,	// (0x00044f7a) bg_sp_fs_ctrlbar_ddmenu_pane

0xb94d,	// (0x0004c034) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb94d,	// (0x0004c034) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb959,	// (0x0004c040) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb959,	// (0x0004c040) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa30,	// (0x00050117) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa30,	// (0x00050117) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb965,	// (0x0004c04c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb965,	// (0x0004c04c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd2d7,	// (0x0004d9be) list_medium_line_t2_right_icon_g1

0xd807,	// (0x0004deee) list_medium_line_t2_right_icon_t1

0xd807,	// (0x0004deee) list_medium_line_t2_right_icon_t2

0x0001,

0x0b6d,	// (0x00041254) list_medium_line_t2_right_icon_t

0xe75a,	// (0x0004ee41) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe75a,	// (0x0004ee41) bg_sp_fs_ctrlbar_pane

0x8d20,	// (0x00049407) main_sp_fs_ctrlbar_button_pane_cp01

0x8d2a,	// (0x00049411) main_sp_fs_ctrlbar_ddmenu_pane

0xb9b7,	// (0x0004c09e) main_sp_fs_ctrlbar_pane_g1

0xb9c3,	// (0x0004c0aa) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfa35,	// (0x0005011c) main_sp_fs_ctrlbar_pane_g

0x8d68,	// (0x0004944f) main_sp_fs_ctrlbar_pane_t1

0x8da7,	// (0x0004948e) main_sp_fs_ctrlbar_pane

0x8dcb,	// (0x000494b2) main_sp_fs_listscroll_pane_te_cp01

0x1270,	// (0x00041957) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1270,	// (0x00041957) popup_sp_fs_action_menu_pane_cp01

0xcfe4,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp01

0xb9ea,	// (0x0004c0d1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb9ea,	// (0x0004c0d1) sp_fs_action_menu_list_gene_pane_g1

0xb9f9,	// (0x0004c0e0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb9f9,	// (0x0004c0e0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa43,	// (0x0005012a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa43,	// (0x0005012a) sp_fs_action_menu_list_gene_pane_g

0xba06,	// (0x0004c0ed) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xba06,	// (0x0004c0ed) sp_fs_action_menu_list_gene_pane_t1

0xba1e,	// (0x0004c105) sp_fs_action_menu_list_gene_pane_ParamLimits

0xba1e,	// (0x0004c105) sp_fs_action_menu_list_gene_pane

0xba3d,	// (0x0004c124) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xba3d,	// (0x0004c124) popup_sp_fs_action_menu_bg_pane

0xba4b,	// (0x0004c132) sp_fs_action_menu_list_pane_ParamLimits

0xba4b,	// (0x0004c132) sp_fs_action_menu_list_pane

0x1295,	// (0x0004197c) sp_fs_scroll_pane_cp01_ParamLimits

0x1295,	// (0x0004197c) sp_fs_scroll_pane_cp01

0xd807,	// (0x0004deee) list_medium_line_plain_t2_t1

0xd807,	// (0x0004deee) list_medium_line_plain_t2_t2

0x0001,

0x0b6d,	// (0x00041254) list_medium_line_plain_t2_t

0xd807,	// (0x0004deee) list_medium_line_plain_t3_t1

0xd807,	// (0x0004deee) list_medium_line_plain_t3_t2

0xd807,	// (0x0004deee) list_medium_line_plain_t3_t3

0x0002,

0x01d1,	// (0x000408b8) list_medium_line_plain_t3_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t2_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_x2_t2_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_x2_t2_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g2_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t2_g2_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g2_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_x2_t2_g2_t

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t4_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_x2_t4_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_x2_t4_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t2

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t3

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1af,	// (0x0004f896) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1af,	// (0x0004f896) list_medium_line_x2_t4_g2_t

0xd2d7,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g1

0xd2d7,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g2

0xd2d7,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g3

0x0002,

0x02f2,	// (0x000409d9) list_medium_line_t3_right_iconx2_g

0xd807,	// (0x0004deee) list_medium_line_t3_right_iconx2_t1

0xd807,	// (0x0004deee) list_medium_line_t3_right_iconx2_t2

0x0001,

0x0b6d,	// (0x00041254) list_medium_line_t3_right_iconx2_t

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g1

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g2

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g3

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x3_t4_g4_g4

0x0003,

0x0116,	// (0x000407fd) list_medium_line_x3_t4_g4_g_ParamLimits

0x0116,	// (0x000407fd) list_medium_line_x3_t4_g4_g

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t1

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t2

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t3

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1af,	// (0x0004f896) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1af,	// (0x0004f896) list_medium_line_x3_t4_g4_t

0x12bb,	// (0x000419a2) list_single_dyc_row_text_pane_t1_ParamLimits

0x12bb,	// (0x000419a2) list_single_dyc_row_text_pane_t1

0x1304,	// (0x000419eb) list_single_dyc_row_text_pane_t2_ParamLimits

0x1304,	// (0x000419eb) list_single_dyc_row_text_pane_t2

0xba6b,	// (0x0004c152) list_single_dyc_row_text_pane_t3_ParamLimits

0xba6b,	// (0x0004c152) list_single_dyc_row_text_pane_t3

0x0005,

0xfa48,	// (0x0005012f) list_single_dyc_row_text_pane_t_ParamLimits

0xfa48,	// (0x0005012f) list_single_dyc_row_text_pane_t

0xba8f,	// (0x0004c176) list_single_dyc_row_pane_g1_ParamLimits

0xba8f,	// (0x0004c176) list_single_dyc_row_pane_g1

0xba9b,	// (0x0004c182) list_single_dyc_row_pane_g2_ParamLimits

0xba9b,	// (0x0004c182) list_single_dyc_row_pane_g2

0xbaa7,	// (0x0004c18e) list_single_dyc_row_pane_g3_ParamLimits

0xbaa7,	// (0x0004c18e) list_single_dyc_row_pane_g3

0xbab3,	// (0x0004c19a) list_single_dyc_row_pane_g4_ParamLimits

0xbab3,	// (0x0004c19a) list_single_dyc_row_pane_g4

0x0003,

0xfa55,	// (0x0005013c) list_single_dyc_row_pane_g_ParamLimits

0xfa55,	// (0x0005013c) list_single_dyc_row_pane_g

0xbabf,	// (0x0004c1a6) list_single_dyc_row_text_pane_ParamLimits

0xbabf,	// (0x0004c1a6) list_single_dyc_row_text_pane

0xc935,	// (0x0004d01c) bg_sp_fs_scroll_pane

0xbade,	// (0x0004c1c5) thumb_sp_fs_scroll_pane

0xd07d,	// (0x0004d764) list_medium_line_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g1

0xd2a9,	// (0x0004d990) list_medium_line_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t1

0xd07d,	// (0x0004d764) list_medium_line_x2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_x2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_x2_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t1

0xd07d,	// (0x0004d764) list_medium_line_x3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x3_g1

0x8deb,	// (0x000494d2) list_medium_line_x3_g2_ParamLimits

0x8deb,	// (0x000494d2) list_medium_line_x3_g2

0x0001,

0xfa5e,	// (0x00050145) list_medium_line_x3_g_ParamLimits

0xfa5e,	// (0x00050145) list_medium_line_x3_g

0xbae7,	// (0x0004c1ce) list_medium_line_x3_t1_ParamLimits

0xbae7,	// (0x0004c1ce) list_medium_line_x3_t1

0xbafb,	// (0x0004c1e2) thumb_sp_fs_scroll_pane_g1

0xbb04,	// (0x0004c1eb) thumb_sp_fs_scroll_pane_g2

0xbb0d,	// (0x0004c1f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfa63,	// (0x0005014a) thumb_sp_fs_scroll_pane_g

0xbafb,	// (0x0004c1e2) bg_sp_fs_scroll_pane_g1

0xbb04,	// (0x0004c1eb) bg_sp_fs_scroll_pane_g2

0xbb0d,	// (0x0004c1f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfa63,	// (0x0005014a) bg_sp_fs_scroll_pane_g

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g1

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g2

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g3

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_x2_t3_g4_g4

0x0003,

0x0116,	// (0x000407fd) list_medium_line_x2_t3_g4_g_ParamLimits

0x0116,	// (0x000407fd) list_medium_line_x2_t3_g4_g

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t1

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t2

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_x2_t3_g4_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g4_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_x2_t3_g4_t

0xd07d,	// (0x0004d764) list_medium_line_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_g2_t1

0xd07d,	// (0x0004d764) list_medium_line_t3_g2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g2_g1

0xd07d,	// (0x0004d764) list_medium_line_t3_g2_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g2_g2

0x0001,

0x0111,	// (0x000407f8) list_medium_line_t3_g2_g_ParamLimits

0x0111,	// (0x000407f8) list_medium_line_t3_g2_g

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t1

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t2

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g2_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_t3_g2_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_t3_g2_t

0xd2d7,	// (0x0004d9be) list_medium_line_right_icon_g1

0xd807,	// (0x0004deee) list_medium_line_right_icon_t1

0xd07d,	// (0x0004d764) list_medium_line_t2_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g1

0xd2a9,	// (0x0004d990) list_medium_line_t2_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_t1

0xd2a9,	// (0x0004d990) list_medium_line_t2_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_t2_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_t2_t

0xd07d,	// (0x0004d764) list_medium_line_t3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g1

0xd2a9,	// (0x0004d990) list_medium_line_t3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_t1

0xd2a9,	// (0x0004d990) list_medium_line_t3_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_t2

0xd2a9,	// (0x0004d990) list_medium_line_t3_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_t3_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_t3_t

0xd07d,	// (0x0004d764) list_medium_line_g3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g3_g1

0xd07d,	// (0x0004d764) list_medium_line_g3_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g3_g2

0xd07d,	// (0x0004d764) list_medium_line_g3_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_g3_g3

0x0002,

0x0103,	// (0x000407ea) list_medium_line_g3_g_ParamLimits

0x0103,	// (0x000407ea) list_medium_line_g3_g

0xd2a9,	// (0x0004d990) list_medium_line_g3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_g3_t1

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g1

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g2

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t2_g3_g3

0x0002,

0x0103,	// (0x000407ea) list_medium_line_t2_g3_g_ParamLimits

0x0103,	// (0x000407ea) list_medium_line_t2_g3_g

0xd2a9,	// (0x0004d990) list_medium_line_t2_g3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_g3_t1

0xd2a9,	// (0x0004d990) list_medium_line_t2_g3_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t2_g3_t2

0x0001,

0x00e6,	// (0x000407cd) list_medium_line_t2_g3_t_ParamLimits

0x00e6,	// (0x000407cd) list_medium_line_t2_g3_t

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g1_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g1

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g2_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g2

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g3_ParamLimits

0xd07d,	// (0x0004d764) list_medium_line_t3_g3_g3

0x0002,

0x0103,	// (0x000407ea) list_medium_line_t3_g3_g_ParamLimits

0x0103,	// (0x000407ea) list_medium_line_t3_g3_g

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t1_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t1

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t2_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t2

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t3_ParamLimits

0xd2a9,	// (0x0004d990) list_medium_line_t3_g3_t3

0x0002,

0x06c9,	// (0x00040db0) list_medium_line_t3_g3_t_ParamLimits

0x06c9,	// (0x00040db0) list_medium_line_t3_g3_t

0xd2d7,	// (0x0004d9be) list_medium_line_right_iconx2_g1

0xd2d7,	// (0x0004d9be) list_medium_line_right_iconx2_g2

0x0001,

0x02ed,	// (0x000409d4) list_medium_line_right_iconx2_g

0xd807,	// (0x0004deee) list_medium_line_right_iconx2_t1

0xd2d7,	// (0x0004d9be) list_medium_line_t2_right_iconx2_g1

0xd2d7,	// (0x0004d9be) list_medium_line_t2_right_iconx2_g2

0x0001,

0x02ed,	// (0x000409d4) list_medium_line_t2_right_iconx2_g

0xd807,	// (0x0004deee) list_medium_line_t2_right_iconx2_t1

0xd807,	// (0x0004deee) list_medium_line_t2_right_iconx2_t2

0x0001,

0x0b6d,	// (0x00041254) list_medium_line_t2_right_iconx2_t

0xd807,	// (0x0004deee) list_medium_line_x4_t4_t1

0xd807,	// (0x0004deee) list_medium_line_x4_t4_t2

0xd807,	// (0x0004deee) list_medium_line_x4_t4_t3

0xd807,	// (0x0004deee) list_medium_line_x4_t4_t4

0x0003,

0x01d8,	// (0x000408bf) list_medium_line_x4_t4_t

0x8e3c,	// (0x00049523) tport_appsw_pane_ParamLimits

0x8e3c,	// (0x00049523) tport_appsw_pane

0x8e54,	// (0x0004953b) tport_contact_pane_ParamLimits

0x8e54,	// (0x0004953b) tport_contact_pane

0x8e6c,	// (0x00049553) tport_listscroll_pane_ParamLimits

0x8e6c,	// (0x00049553) tport_listscroll_pane

0x8e86,	// (0x0004956d) cell_tport_appsw_pane_ParamLimits

0x8e86,	// (0x0004956d) cell_tport_appsw_pane

0xe738,	// (0x0004ee1f) tport_appsw_pane_g1_ParamLimits

0xe738,	// (0x0004ee1f) tport_appsw_pane_g1

0xbb16,	// (0x0004c1fd) tport_contact_pane_g1

0xb3e9,	// (0x0004bad0) tport_contact_pane_t1

0xbb1f,	// (0x0004c206) tport_contact_pane_t2

0x0001,

0xfa6a,	// (0x00050151) tport_contact_pane_t

0xbb2d,	// (0x0004c214) list_tport_pane

0xbb36,	// (0x0004c21d) scroll_pane_cp_030

0x8ece,	// (0x000495b5) cell_tport_appsw_pane_g1

0x8ede,	// (0x000495c5) cell_tport_appsw_pane_t1

0x8eec,	// (0x000495d3) grid_highlight_pane_cp019

0x8ef4,	// (0x000495db) list_tport_double_graphic_pane_ParamLimits

0x8ef4,	// (0x000495db) list_tport_double_graphic_pane

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp023_ParamLimits

0xcfe4,	// (0x0004d6cb) list_highlight_pane_cp023

0x8f01,	// (0x000495e8) list_tport_double_graphic_pane_g1_ParamLimits

0x8f01,	// (0x000495e8) list_tport_double_graphic_pane_g1

0x8f0e,	// (0x000495f5) list_tport_double_graphic_pane_t1_ParamLimits

0x8f0e,	// (0x000495f5) list_tport_double_graphic_pane_t1

0x8f23,	// (0x0004960a) list_tport_double_graphic_pane_t2_ParamLimits

0x8f23,	// (0x0004960a) list_tport_double_graphic_pane_t2

0x0001,

0xfa76,	// (0x0005015d) list_tport_double_graphic_pane_t_ParamLimits

0xfa76,	// (0x0005015d) list_tport_double_graphic_pane_t

0xc935,	// (0x0004d01c) main_cale_note_pane

0x6cf9,	// (0x000473e0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6cf9,	// (0x000473e0) cell_vitu2_function_top_wide_pane_cp01

0x88e1,	// (0x00048fc8) wait_bar_pane_cp05_ParamLimits

0xcfe4,	// (0x0004d6cb) listscroll_cmail_pane

0xbb3f,	// (0x0004c226) list_cmail_pane

0x8f35,	// (0x0004961c) list_cmail_body_pane

0x8f4a,	// (0x00049631) list_single_cmail_header_caption_pane

0x8f60,	// (0x00049647) list_single_cmail_header_detail_pane_ParamLimits

0x8f60,	// (0x00049647) list_single_cmail_header_detail_pane

0xbb4f,	// (0x0004c236) list_single_cmail_header_caption_pane_t1

0x1439,	// (0x00041b20) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1439,	// (0x00041b20) list_single_cmail_header_detail_pane_g1

0xbb66,	// (0x0004c24d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbb66,	// (0x0004c24d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa7b,	// (0x00050162) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa7b,	// (0x00050162) list_single_cmail_header_detail_pane_g

0xbb7f,	// (0x0004c266) list_single_cmail_header_detail_pane_t1_ParamLimits

0xbb7f,	// (0x0004c266) list_single_cmail_header_detail_pane_t1

0xbbdf,	// (0x0004c2c6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xbbdf,	// (0x0004c2c6) list_single_cmail_header_editor_pane_bg

0xb546,	// (0x0004bc2d) list_cmail_body_pane_g1

0xbbf6,	// (0x0004c2dd) list_cmail_body_pane_t1

0x6dfa,	// (0x000474e1) list_single_cmail_header_editor_pane_bg_g1

0xd4fc,	// (0x0004dbe3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6e0a,	// (0x000474f1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6e02,	// (0x000474e9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7769,	// (0x00047e50) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6e2a,	// (0x00047511) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6e1a,	// (0x00047501) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6e22,	// (0x00047509) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4dc,	// (0x0004dbc3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f89,	// (0x00049670) calenote_gesture_pane_ParamLimits

0x8f89,	// (0x00049670) calenote_gesture_pane

0x8fa9,	// (0x00049690) calenote_window_pane_ParamLimits

0x8fa9,	// (0x00049690) calenote_window_pane

0xbc04,	// (0x0004c2eb) popup_note_window_cp01

0x8fc5,	// (0x000496ac) calenote_swipe_1_pane_ParamLimits

0x8fc5,	// (0x000496ac) calenote_swipe_1_pane

0x8cbe,	// (0x000493a5) calenote_swipe_2_pane_ParamLimits

0x8cbe,	// (0x000493a5) calenote_swipe_2_pane

0xb897,	// (0x0004bf7e) calenote_swipe_1_pane_g1_ParamLimits

0xb897,	// (0x0004bf7e) calenote_swipe_1_pane_g1

0xb8a4,	// (0x0004bf8b) calenote_swipe_1_pane_g2_ParamLimits

0xb8a4,	// (0x0004bf8b) calenote_swipe_1_pane_g2

0x0001,

0xfa1d,	// (0x00050104) calenote_swipe_1_pane_g_ParamLimits

0xfa1d,	// (0x00050104) calenote_swipe_1_pane_g

0xbc16,	// (0x0004c2fd) calenote_swipe_1_pane_t1_ParamLimits

0xbc16,	// (0x0004c2fd) calenote_swipe_1_pane_t1

0xb897,	// (0x0004bf7e) calenote_swipe_2_pane_g1_ParamLimits

0xb897,	// (0x0004bf7e) calenote_swipe_2_pane_g1

0xbc35,	// (0x0004c31c) calenote_swipe_2_pane_g2_ParamLimits

0xbc35,	// (0x0004c31c) calenote_swipe_2_pane_g2

0x0001,

0xfa87,	// (0x0005016e) calenote_swipe_2_pane_g_ParamLimits

0xfa87,	// (0x0005016e) calenote_swipe_2_pane_g

0xbc41,	// (0x0004c328) calenote_swipe_2_pane_t1_ParamLimits

0xbc41,	// (0x0004c328) calenote_swipe_2_pane_t1

0xc935,	// (0x0004d01c) main_mup_navstr_pane

0x55c9,	// (0x00045cb0) main_mup3_pane_t7_ParamLimits

0x55c9,	// (0x00045cb0) main_mup3_pane_t7

0xa8df,	// (0x0004afc6) main_mp4_pane_g6_ParamLimits

0xa8df,	// (0x0004afc6) main_mp4_pane_g6

0xaaa1,	// (0x0004b188) main_image3_pane_t4_ParamLimits

0xaaa1,	// (0x0004b188) main_image3_pane_t4

0x8fda,	// (0x000496c1) popup_navstr_preview_pane_ParamLimits

0x8fda,	// (0x000496c1) popup_navstr_preview_pane

0x8fee,	// (0x000496d5) scroll_navstr_pane_ParamLimits

0x8fee,	// (0x000496d5) scroll_navstr_pane

0xc935,	// (0x0004d01c) bg_popup_preview_window_pane_cp04

0xbc68,	// (0x0004c34f) popup_navstr_preview_pane_t1

0x9002,	// (0x000496e9) scroll_navstr_pane_g1_ParamLimits

0x9002,	// (0x000496e9) scroll_navstr_pane_g1

0x9016,	// (0x000496fd) scroll_navstr_pane_t1_ParamLimits

0x9016,	// (0x000496fd) scroll_navstr_pane_t1

0xbc0d,	// (0x0004c2f4) bg_button_pane_cp014

0xbc0d,	// (0x0004c2f4) bg_button_pane_cp030

0x11d4,	// (0x000418bb) list_double_fisheye_pane_g4_ParamLimits

0x11d4,	// (0x000418bb) list_double_fisheye_pane_g4

0x11e0,	// (0x000418c7) list_double_fisheye_pane_g5_ParamLimits

0x11e0,	// (0x000418c7) list_double_fisheye_pane_g5

0xe7d0,	// (0x0004eeb7) sp_fs_scroll_pane_cp03

0xb9b7,	// (0x0004c09e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb9c3,	// (0x0004c0aa) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa35,	// (0x0005011c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8d68,	// (0x0004944f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbb47,	// (0x0004c22e) sp_fs_scroll_pane_cp02

0xd1e9,	// (0x0004d8d0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd1e9,	// (0x0004d8d0) popup_sp_fs_calendar_preview_list_single_pane

0xc935,	// (0x0004d01c) main_cam6_pano_pane

0xcfe4,	// (0x0004d6cb) main_mup3_pane_ParamLimits

0xc935,	// (0x0004d01c) main_phacti_pane

0x87b4,	// (0x00048e9b) bg_button_pane_cp11

0x87ce,	// (0x00048eb5) main_mobtv_info_pane_g2_ParamLimits

0x87ce,	// (0x00048eb5) main_mobtv_info_pane_g2

0x0001,

0xf99a,	// (0x00050081) main_mobtv_info_pane_g_ParamLimits

0xf99a,	// (0x00050081) main_mobtv_info_pane_g

0x89ab,	// (0x00049092) sc_clock_pane_t5_ParamLimits

0x89ab,	// (0x00049092) sc_clock_pane_t5

0x8a73,	// (0x0004915a) main_radioblah_pane_g1_ParamLimits

0xb7e3,	// (0x0004beca) main_radioblah_pane_t3_ParamLimits

0xb7e3,	// (0x0004beca) main_radioblah_pane_t3

0xb7fb,	// (0x0004bee2) main_radioblah_pane_t4_ParamLimits

0xb7fb,	// (0x0004bee2) main_radioblah_pane_t4

0x8a9b,	// (0x00049182) main_radioblah_text_pane_ParamLimits

0x8a9b,	// (0x00049182) main_radioblah_text_pane

0x8aad,	// (0x00049194) main_radioblah_info_pane_g1_ParamLimits

0x8b46,	// (0x0004922d) main_radioblah_info_pane_t4_ParamLimits

0x8b46,	// (0x0004922d) main_radioblah_info_pane_t4

0xcfe4,	// (0x0004d6cb) main_sp_fs_calendar_pane

0x902d,	// (0x00049714) main_phacti_pane_g1

0x9035,	// (0x0004971c) phacti_note_pane_ParamLimits

0x9035,	// (0x0004971c) phacti_note_pane

0xbc7f,	// (0x0004c366) phacti_term_pane_ParamLimits

0xbc7f,	// (0x0004c366) phacti_term_pane

0xbc94,	// (0x0004c37b) phacti_note_pane_t1_ParamLimits

0xbc94,	// (0x0004c37b) phacti_note_pane_t1

0xbcab,	// (0x0004c392) phacti_term_pane_g1

0xbcb3,	// (0x0004c39a) phacti_term_pane_t1_ParamLimits

0xbcb3,	// (0x0004c39a) phacti_term_pane_t1

0xbcdd,	// (0x0004c3c4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd288,	// (0x0004d96f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfa91,	// (0x00050178) popup_sp_fs_calendar_preview_list_single_pane_g

0xbce5,	// (0x0004c3cc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbce5,	// (0x0004c3cc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbcfb,	// (0x0004c3e2) aid_popup_sp_fs_bg_corner_pane

0xd2d7,	// (0x0004d9be) popup_sp_fs_calendar_preview_bg_pane_g1

0xc935,	// (0x0004d01c) popup_sp_fs_calendar_preview_bg_pane

0xbd03,	// (0x0004c3ea) popup_sp_fs_calendar_preview_list_pane

0xe75a,	// (0x0004ee41) bg_main_sp_fs_cale_pane_ParamLimits

0xe75a,	// (0x0004ee41) bg_main_sp_fs_cale_pane

0xbd14,	// (0x0004c3fb) listscroll_cale_mrui_pane_ParamLimits

0xbd14,	// (0x0004c3fb) listscroll_cale_mrui_pane

0xbd29,	// (0x0004c410) listscroll_sp_fs_schedule_track_pane

0xbd32,	// (0x0004c419) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xbd32,	// (0x0004c419) main_sp_fs_ctrlbar_pane_cp01

0xbd45,	// (0x0004c42c) main_sp_fs_ribbon_pane

0xbd4d,	// (0x0004c434) popup_sp_fs_cale_preview_window

0x90aa,	// (0x00049791) list_single_sp_fs_schedule_track_pane_ParamLimits

0x90aa,	// (0x00049791) list_single_sp_fs_schedule_track_pane

0xcfe4,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp03

0x90bd,	// (0x000497a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x90bd,	// (0x000497a4) list_single_sp_fs_schedule_track_pane_g1

0x90c9,	// (0x000497b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x90c9,	// (0x000497b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfa96,	// (0x0005017d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfa96,	// (0x0005017d) list_single_sp_fs_schedule_track_pane_g

0x90d5,	// (0x000497bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x90d5,	// (0x000497bc) list_single_sp_fs_schedule_track_pane_t1

0x90ef,	// (0x000497d6) sp_fs_schedule_track_pane_ParamLimits

0x90ef,	// (0x000497d6) sp_fs_schedule_track_pane

0xbd5f,	// (0x0004c446) sp_fs_schedule_track_pane_g1

0xbd67,	// (0x0004c44e) sp_fs_schedule_track_pane_g2

0xbd6f,	// (0x0004c456) sp_fs_schedule_track_pane_g3

0xbd77,	// (0x0004c45e) sp_fs_schedule_track_pane_g4

0xbd7f,	// (0x0004c466) sp_fs_schedule_track_pane_g5

0x0004,

0xfa9b,	// (0x00050182) sp_fs_schedule_track_pane_g

0x6dfa,	// (0x000474e1) bg_sp_fs_schedule_viewer_highlight_g1

0xd4fc,	// (0x0004dbe3) bg_sp_fs_schedule_viewer_highlight_g2

0x6e02,	// (0x000474e9) bg_sp_fs_schedule_viewer_highlight_g3

0x6e0a,	// (0x000474f1) bg_sp_fs_schedule_viewer_highlight_g4

0x7769,	// (0x00047e50) bg_sp_fs_schedule_viewer_highlight_g5

0x6e1a,	// (0x00047501) bg_sp_fs_schedule_viewer_highlight_g6

0x6e22,	// (0x00047509) bg_sp_fs_schedule_viewer_highlight_g7

0x6e2a,	// (0x00047511) bg_sp_fs_schedule_viewer_highlight_g8

0xd4dc,	// (0x0004dbc3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfaa6,	// (0x0005018d) bg_sp_fs_schedule_viewer_highlight_g

0xc935,	// (0x0004d01c) bg_main_sp_fs_ribbon_pane

0x9100,	// (0x000497e7) main_sp_fs_ribbon_pane_g1

0xbd87,	// (0x0004c46e) main_sp_fs_ribbon_pane_t1

0x9109,	// (0x000497f0) main_sp_fs_ribbon_pane_t2

0xbd96,	// (0x0004c47d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfab9,	// (0x000501a0) main_sp_fs_ribbon_pane_t

0xbda5,	// (0x0004c48c) main_sp_fs_ribbon_scheduler_pane

0xbdad,	// (0x0004c494) bg_main_sp_fs_ribbon_pane_g1

0xbdb6,	// (0x0004c49d) bg_main_sp_fs_ribbon_pane_g2

0xbdbf,	// (0x0004c4a6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfac0,	// (0x000501a7) bg_main_sp_fs_ribbon_pane_g

0xbdc7,	// (0x0004c4ae) main_sp_fs_ribbon_scheduler_pane_g1

0xbdd0,	// (0x0004c4b7) main_sp_fs_ribbon_scheduler_pane_g2

0xbdd9,	// (0x0004c4c0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfac7,	// (0x000501ae) main_sp_fs_ribbon_scheduler_pane_g

0xbde2,	// (0x0004c4c9) list_cale_mrui_pane

0x9118,	// (0x000497ff) sp_fs_scroll_pane_cp07_ParamLimits

0x9118,	// (0x000497ff) sp_fs_scroll_pane_cp07

0x9134,	// (0x0004981b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9134,	// (0x0004981b) bg_sp_fs_schedule_viewer_highlight

0xbdef,	// (0x0004c4d6) list_single_sp_fs_schedule_track_pane_cp01

0xbdf7,	// (0x0004c4de) list_sp_fs_schedule_track_pane

0xbdff,	// (0x0004c4e6) sp_fs_scroll_pane_cp06_ParamLimits

0xbdff,	// (0x0004c4e6) sp_fs_scroll_pane_cp06

0xd2d7,	// (0x0004d9be) bgmain_sp_fs_calendar_pane_g1

0x1451,	// (0x00041b38) list_single_cale_mrui_pane_ParamLimits

0x1451,	// (0x00041b38) list_single_cale_mrui_pane

0xbe11,	// (0x0004c4f8) list_single_cale_mrui_row_pane_ParamLimits

0xbe11,	// (0x0004c4f8) list_single_cale_mrui_row_pane

0xbe1e,	// (0x0004c505) list_single_cale_mrui_row_pane_g1_ParamLimits

0xbe1e,	// (0x0004c505) list_single_cale_mrui_row_pane_g1

0xbe63,	// (0x0004c54a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xbe63,	// (0x0004c54a) list_single_cale_mrui_row_pane_t1

0x1472,	// (0x00041b59) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1472,	// (0x00041b59) list_single_cale_mrui_row_pane_t2

0xbe75,	// (0x0004c55c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xbe75,	// (0x0004c55c) list_single_cale_mrui_row_pane_t3

0xbea4,	// (0x0004c58b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xbea4,	// (0x0004c58b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfad5,	// (0x000501bc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfad5,	// (0x000501bc) list_single_cale_mrui_row_pane_t

0x14da,	// (0x00041bc1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x14da,	// (0x00041bc1) list_single_cmail_header_editor_pane_bg_cp01

0x1500,	// (0x00041be7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1500,	// (0x00041be7) list_single_cmail_header_editor_pane_bg_cp02

0x9144,	// (0x0004982b) main_radioblah_text_pane_t1_ParamLimits

0x9144,	// (0x0004982b) main_radioblah_text_pane_t1

0xbed3,	// (0x0004c5ba) cam6_indi_pane_cp01

0xbedb,	// (0x0004c5c2) cam6_mode_pane_cp01

0xbee3,	// (0x0004c5ca) cam6_pano_pane

0xbeec,	// (0x0004c5d3) cam6_zoom_pane_cp01

0xbef4,	// (0x0004c5db) cam6_pano_image_pane

0xbeff,	// (0x0004c5e6) cam6_pano_pane_g1

0xb546,	// (0x0004bc2d) cam6_pano_pane_g2

0xbf08,	// (0x0004c5ef) cam6_pano_pane_g3

0xbf11,	// (0x0004c5f8) cam6_pano_pane_g4

0x5ef6,	// (0x000465dd) cam6_pano_pane_g5

0xbf1a,	// (0x0004c601) cam6_pano_pane_g6

0xbf24,	// (0x0004c60b) cam6_pano_pane_g7

0xbf2c,	// (0x0004c613) cam6_pano_pane_g8

0xbf35,	// (0x0004c61c) cam6_pano_pane_g9

0x0008,

0xfade,	// (0x000501c5) cam6_pano_pane_g

0xc935,	// (0x0004d01c) main_browser_tag_pane

0xbc60,	// (0x0004c347) grid_navstr_albumart_pane

0xbf40,	// (0x0004c627) cell_navstr_albumart_pane_ParamLimits

0xbf40,	// (0x0004c627) cell_navstr_albumart_pane

0xbf60,	// (0x0004c647) cell_navstr_albumart_pane_g1

0xef07,	// (0x0004f5ee) cell_navstr_albumart_pane_g2

0xef17,	// (0x0004f5fe) cell_navstr_albumart_pane_g3

0xef0f,	// (0x0004f5f6) cell_navstr_albumart_pane_g4

0x0003,

0xfaf1,	// (0x000501d8) cell_navstr_albumart_pane_g

0x915e,	// (0x00049845) bt_list_pane_ParamLimits

0x915e,	// (0x00049845) bt_list_pane

0x9172,	// (0x00049859) bt_list_pane_t1

0x9181,	// (0x00049868) bt_list_pane_t2

0x0001,

0xfafa,	// (0x000501e1) bt_list_pane_t

0xc935,	// (0x0004d01c) main_cale_prevew_pane

0x9190,	// (0x00049877) popup_cale_preview_window_ParamLimits

0x9190,	// (0x00049877) popup_cale_preview_window

0xcfe4,	// (0x0004d6cb) bg_popup_preview_window_pane_cp05_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_popup_preview_window_pane_cp05

0xbf68,	// (0x0004c64f) list_cale_preview_pane_ParamLimits

0xbf68,	// (0x0004c64f) list_cale_preview_pane

0x91ab,	// (0x00049892) list_double_cale_preview_pane_ParamLimits

0x91ab,	// (0x00049892) list_double_cale_preview_pane

0x91bd,	// (0x000498a4) list_single_cale_preview_pane_ParamLimits

0x91bd,	// (0x000498a4) list_single_cale_preview_pane

0x91d3,	// (0x000498ba) list_single_cale_preview_pane_g1

0x91db,	// (0x000498c2) list_single_cale_preview_pane_t1_ParamLimits

0x91db,	// (0x000498c2) list_single_cale_preview_pane_t1

0x91f0,	// (0x000498d7) list_double_cale_preview_pane_g1

0x91f8,	// (0x000498df) list_double_cale_preview_pane_t1_ParamLimits

0x91f8,	// (0x000498df) list_double_cale_preview_pane_t1

0x920d,	// (0x000498f4) list_double_cale_preview_pane_t2_ParamLimits

0x920d,	// (0x000498f4) list_double_cale_preview_pane_t2

0x0001,

0xfaff,	// (0x000501e6) list_double_cale_preview_pane_t_ParamLimits

0xfaff,	// (0x000501e6) list_double_cale_preview_pane_t

0xc935,	// (0x0004d01c) main_ezdial_pane

0xcfe4,	// (0x0004d6cb) main_sp_fs_email_pane_ParamLimits

0x8cd8,	// (0x000493bf) cmail_ddmenu_btn01_pane_ParamLimits

0x8cd8,	// (0x000493bf) cmail_ddmenu_btn01_pane

0x8ceb,	// (0x000493d2) cmail_ddmenu_btn02_pane_ParamLimits

0x8ceb,	// (0x000493d2) cmail_ddmenu_btn02_pane

0x8d0e,	// (0x000493f5) cmail_ddmenu_btn03_pane_ParamLimits

0x8d0e,	// (0x000493f5) cmail_ddmenu_btn03_pane

0x8da7,	// (0x0004948e) main_sp_fs_ctrlbar_pane_ParamLimits

0x8dcb,	// (0x000494b2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8f35,	// (0x0004961c) list_cmail_body_pane_ParamLimits

0xbb5d,	// (0x0004c244) bg_button_pane_cp12

0xbb72,	// (0x0004c259) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbb72,	// (0x0004c259) list_single_cmail_header_detail_pane_g3

0xbbbb,	// (0x0004c2a2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xbbbb,	// (0x0004c2a2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa82,	// (0x00050169) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa82,	// (0x00050169) list_single_cmail_header_detail_pane_t

0xbcc8,	// (0x0004c3af) phacti_term_pane_t2_ParamLimits

0xbcc8,	// (0x0004c3af) phacti_term_pane_t2

0x0001,

0xfa8c,	// (0x00050173) phacti_term_pane_t_ParamLimits

0xfa8c,	// (0x00050173) phacti_term_pane_t

0xbf74,	// (0x0004c65b) aid_size_list_single_double

0x9225,	// (0x0004990c) popup_ezdial_listscroll_window

0x9241,	// (0x00049928) popup_number_entry_window_cp01

0xd2a1,	// (0x0004d988) bg_popup_call_pane_cp09

0xbf80,	// (0x0004c667) ezdial_list_pane

0xbf88,	// (0x0004c66f) scroll_pane_cp23

0xe75a,	// (0x0004ee41) bg_button_pane_cp028_ParamLimits

0xe75a,	// (0x0004ee41) bg_button_pane_cp028

0x924f,	// (0x00049936) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x924f,	// (0x00049936) cmail_ddmenu_btn01_pane_g1

0x925b,	// (0x00049942) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x925b,	// (0x00049942) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb04,	// (0x000501eb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb04,	// (0x000501eb) cmail_ddmenu_btn01_pane_g

0xbf90,	// (0x0004c677) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xbf90,	// (0x0004c677) cmail_ddmenu_btn01_pane_t1

0xe75a,	// (0x0004ee41) bg_button_pane_cp029_ParamLimits

0xe75a,	// (0x0004ee41) bg_button_pane_cp029

0x926f,	// (0x00049956) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x926f,	// (0x00049956) cmail_ddmenu_btn02_pane_g1

0x9287,	// (0x0004996e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9287,	// (0x0004996e) cmail_ddmenu_btn02_pane_t1

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp031_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp031

0x926f,	// (0x00049956) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x926f,	// (0x00049956) cmail_ddmenu_btn03_pane_g1

0x9287,	// (0x0004996e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9287,	// (0x0004996e) cmail_ddmenu_btn03_pane_t1

0x64b3,	// (0x00046b9a) cell_dialer2_keypad_pane_t1_ParamLimits

0x64cd,	// (0x00046bb4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64cd,	// (0x00046bb4) cell_dialer2_keypad_pane_t1_copy1

0x85d7,	// (0x00048cbe) ncimui_group_button_pane

0xcfe4,	// (0x0004d6cb) main_sp_fs_calendar_pane_ParamLimits

0x8f4a,	// (0x00049631) list_single_cmail_header_caption_pane_ParamLimits

0xbd0b,	// (0x0004c3f2) aid_recal_txt_sm_pane

0xc935,	// (0x0004d01c) mian_recal_day_pane

0xbd4d,	// (0x0004c434) popup_sp_fs_cale_preview_window_ParamLimits

0xbfa6,	// (0x0004c68d) list_recal_day_pane

0xbfe8,	// (0x0004c6cf) list_single_recal_day_pane_ParamLimits

0xbfe8,	// (0x0004c6cf) list_single_recal_day_pane

0xbffa,	// (0x0004c6e1) list_single_recal_day_pane_g1_ParamLimits

0xbffa,	// (0x0004c6e1) list_single_recal_day_pane_g1

0xc006,	// (0x0004c6ed) list_single_recal_day_pane_g2_ParamLimits

0xc006,	// (0x0004c6ed) list_single_recal_day_pane_g2

0xc012,	// (0x0004c6f9) list_single_recal_day_pane_g3_ParamLimits

0xc012,	// (0x0004c6f9) list_single_recal_day_pane_g3

0x1520,	// (0x00041c07) list_single_recal_day_pane_g4_ParamLimits

0x1520,	// (0x00041c07) list_single_recal_day_pane_g4

0xc01e,	// (0x0004c705) list_single_recal_day_pane_g5_ParamLimits

0xc01e,	// (0x0004c705) list_single_recal_day_pane_g5

0xc02a,	// (0x0004c711) list_single_recal_day_pane_g6_ParamLimits

0xc02a,	// (0x0004c711) list_single_recal_day_pane_g6

0x0004,

0xfb13,	// (0x000501fa) list_single_recal_day_pane_g_ParamLimits

0xfb13,	// (0x000501fa) list_single_recal_day_pane_g

0xc03e,	// (0x0004c725) list_single_recal_day_pane_t1

0xc050,	// (0x0004c737) list_single_recal_day_pane_t2

0x0001,

0xfb1e,	// (0x00050205) list_single_recal_day_pane_t

0x92ab,	// (0x00049992) ncimui_query_button_pane_ParamLimits

0x92ab,	// (0x00049992) ncimui_query_button_pane

0x92bb,	// (0x000499a2) ncimui_query_button_pane_t1_ParamLimits

0x92bb,	// (0x000499a2) ncimui_query_button_pane_t1

0xc062,	// (0x0004c749) ncimui_query_button_pane_t2_ParamLimits

0xc062,	// (0x0004c749) ncimui_query_button_pane_t2

0x0001,

0xfb23,	// (0x0005020a) ncimui_query_button_pane_t_ParamLimits

0xfb23,	// (0x0005020a) ncimui_query_button_pane_t

0x92ce,	// (0x000499b5) query_button_pane_ParamLimits

0x92ce,	// (0x000499b5) query_button_pane

0xc935,	// (0x0004d01c) bg_button_pane_cp0028

0xc075,	// (0x0004c75c) query_button_pane_t1

0x431a,	// (0x00044a01) main_tport_pane_ParamLimits

0x8df9,	// (0x000494e0) bg_popup_window_pane_cp01_ParamLimits

0x8df9,	// (0x000494e0) bg_popup_window_pane_cp01

0x8e14,	// (0x000494fb) heading_pane_cp08_ParamLimits

0x8e14,	// (0x000494fb) heading_pane_cp08

0x8e27,	// (0x0004950e) heading_pane_cp07_ParamLimits

0x8e27,	// (0x0004950e) heading_pane_cp07

0x8ece,	// (0x000495b5) cell_tport_appsw_pane_g2

0x0002,

0xfa6f,	// (0x00050156) cell_tport_appsw_pane_g

0xa688,	// (0x0004ad6f) input_candi_list_open_g1

0xd6b4,	// (0x0004dd9b) list_cale_time_pane_g6_ParamLimits

0xd6b4,	// (0x0004dd9b) list_cale_time_pane_g6

0x4fd9,	// (0x000456c0) aid_size_touch_calib_1_ParamLimits

0x4fd9,	// (0x000456c0) aid_size_touch_calib_1

0x4feb,	// (0x000456d2) aid_size_touch_calib_2_ParamLimits

0x4feb,	// (0x000456d2) aid_size_touch_calib_2

0x5003,	// (0x000456ea) aid_size_touch_calib_3_ParamLimits

0x5003,	// (0x000456ea) aid_size_touch_calib_3

0x5021,	// (0x00045708) aid_size_touch_calib_4_ParamLimits

0x5021,	// (0x00045708) aid_size_touch_calib_4

0x5039,	// (0x00045720) main_touch_calib_button_group_pane_ParamLimits

0x5039,	// (0x00045720) main_touch_calib_button_group_pane

0x5051,	// (0x00045738) main_touch_calib_pane_g1_ParamLimits

0x5063,	// (0x0004574a) main_touch_calib_pane_g2_ParamLimits

0x5075,	// (0x0004575c) main_touch_calib_pane_g3_ParamLimits

0x5087,	// (0x0004576e) main_touch_calib_pane_g4_ParamLimits

0xf4cc,	// (0x0004fbb3) main_touch_calib_pane_g_ParamLimits

0x5099,	// (0x00045780) main_touch_calib_pane_t1_ParamLimits

0x50b3,	// (0x0004579a) main_touch_calib_pane_t2_ParamLimits

0x50cd,	// (0x000457b4) main_touch_calib_pane_t3_ParamLimits

0x50e1,	// (0x000457c8) main_touch_calib_pane_t4_ParamLimits

0x50f5,	// (0x000457dc) main_touch_calib_pane_t5_ParamLimits

0xf4d5,	// (0x0004fbbc) main_touch_calib_pane_t_ParamLimits

0x586d,	// (0x00045f54) list_single_fp_cale_pane_g3_ParamLimits

0x586d,	// (0x00045f54) list_single_fp_cale_pane_g3

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp012_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp03_ParamLimits

0x7725,	// (0x00047e0c) cell_vitu2_function_top_pane_g1_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_vkb2_func_pane_cp04_ParamLimits

0x8562,	// (0x00048c49) main_ncimui_button_group_pane_ParamLimits

0x8562,	// (0x00048c49) main_ncimui_button_group_pane

0x85c2,	// (0x00048ca9) main_ncimui_pane_t3_ParamLimits

0x85c2,	// (0x00048ca9) main_ncimui_pane_t3

0xbc76,	// (0x0004c35d) phacti_button_group_pane

0xbf74,	// (0x0004c65b) aid_size_list_single_double_ParamLimits

0x9225,	// (0x0004990c) popup_ezdial_listscroll_window_ParamLimits

0x9241,	// (0x00049928) popup_number_entry_window_cp01_ParamLimits

0x92e1,	// (0x000499c8) phacti_button_pane_ParamLimits

0x92e1,	// (0x000499c8) phacti_button_pane

0xc935,	// (0x0004d01c) bg_button_pane_cp14

0xc083,	// (0x0004c76a) phacti_button_pane_t1

0x92f2,	// (0x000499d9) main_touch_calib_button_pane_ParamLimits

0x92f2,	// (0x000499d9) main_touch_calib_button_pane

0xd0ef,	// (0x0004d7d6) bg_button_pane_cp18_ParamLimits

0xd0ef,	// (0x0004d7d6) bg_button_pane_cp18

0xc091,	// (0x0004c778) main_touch_calib_button_pane_t1_ParamLimits

0xc091,	// (0x0004c778) main_touch_calib_button_pane_t1

0xc0a7,	// (0x0004c78e) main_touch_calib_button_pane_t2_ParamLimits

0xc0a7,	// (0x0004c78e) main_touch_calib_button_pane_t2

0x0001,

0xfb28,	// (0x0005020f) main_touch_calib_button_pane_t_ParamLimits

0xfb28,	// (0x0005020f) main_touch_calib_button_pane_t

0xc935,	// (0x0004d01c) cell_ncimui_button_pane

0xc935,	// (0x0004d01c) bg_button_pane_cp032

0xc0c5,	// (0x0004c7ac) cell_ncimui_button_pane_t1

0xaa81,	// (0x0004b168) image3_infobar_pane_ParamLimits

0xaa81,	// (0x0004b168) image3_infobar_pane

0x89d7,	// (0x000490be) fs_bigclock_status_pane_ParamLimits

0x89d7,	// (0x000490be) fs_bigclock_status_pane

0x89e4,	// (0x000490cb) main_fs_bigclock_clock_pane_ParamLimits

0x89e4,	// (0x000490cb) main_fs_bigclock_clock_pane

0x8a02,	// (0x000490e9) main_fs_bigclock_indi_pane_ParamLimits

0x8a02,	// (0x000490e9) main_fs_bigclock_indi_pane

0x8a34,	// (0x0004911b) main_fs_bigclock_swipe_pane_ParamLimits

0x8a34,	// (0x0004911b) main_fs_bigclock_swipe_pane

0xc935,	// (0x0004d01c) main_fs_clock_dumped_data

0xb653,	// (0x0004bd3a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb653,	// (0x0004bd3a) list_single_fs_bigclock_indicator_pane_g1

0xb66e,	// (0x0004bd55) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb66e,	// (0x0004bd55) list_single_fs_bigclock_indicator_pane_g2

0xb688,	// (0x0004bd6f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb688,	// (0x0004bd6f) list_single_fs_bigclock_indicator_pane_g3

0xb6a2,	// (0x0004bd89) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb6a2,	// (0x0004bd89) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xf9ce,	// (0x000500b5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xf9ce,	// (0x000500b5) list_single_fs_bigclock_indicator_pane_g

0xb6cd,	// (0x0004bdb4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb6cd,	// (0x0004bdb4) list_single_fs_bigclock_indicator_pane_t1

0xb6f5,	// (0x0004bddc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb6f5,	// (0x0004bddc) list_single_fs_bigclock_indicator_pane_t2

0xb71d,	// (0x0004be04) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb71d,	// (0x0004be04) list_single_fs_bigclock_indicator_pane_t3

0xb745,	// (0x0004be2c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb745,	// (0x0004be2c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xf9d9,	// (0x000500c0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xf9d9,	// (0x000500c0) list_single_fs_bigclock_indicator_pane_t

0xc0d3,	// (0x0004c7ba) image3_infobar_fav_pane_ParamLimits

0xc0d3,	// (0x0004c7ba) image3_infobar_fav_pane

0xc0e3,	// (0x0004c7ca) image3_infobar_loc_pane_ParamLimits

0xc0e3,	// (0x0004c7ca) image3_infobar_loc_pane

0xc0f7,	// (0x0004c7de) image3_infobar_time_pane_ParamLimits

0xc0f7,	// (0x0004c7de) image3_infobar_time_pane

0xd2d7,	// (0x0004d9be) image3_infobar_time_pane_g1

0xc107,	// (0x0004c7ee) image3_infobar_time_pane_t1

0xd2d7,	// (0x0004d9be) image3_infobar_loc_pane_g1

0xc115,	// (0x0004c7fc) image3_infobar_loc_pane_g2

0x0001,

0xfb2d,	// (0x00050214) image3_infobar_loc_pane_g

0xc11d,	// (0x0004c804) image3_infobar_loc_pane_t1

0xd2d7,	// (0x0004d9be) image3_infobar_fav_pane_g1

0xc12b,	// (0x0004c812) image3_infobar_fav_pane_g2

0x0001,

0xfb32,	// (0x00050219) image3_infobar_fav_pane_g

0xc133,	// (0x0004c81a) fs_bigclock_status_battery_pane

0xc13c,	// (0x0004c823) fs_bigclock_status_signal_pane

0xc145,	// (0x0004c82c) fs_bigclock_status_title_pane

0xc14e,	// (0x0004c835) fs_bigclock_status_signal_pane_g1

0xc157,	// (0x0004c83e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb37,	// (0x0005021e) fs_bigclock_status_signal_pane_g

0xc15f,	// (0x0004c846) fs_bigclock_status_battery_pane_g1

0xc168,	// (0x0004c84f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb3c,	// (0x00050223) fs_bigclock_status_battery_pane_g

0xc170,	// (0x0004c857) fs_bigclock_status_title_pane_t1

0x9307,	// (0x000499ee) main_fs_bigclock_clock_pane_g1

0x9307,	// (0x000499ee) main_fs_bigclock_clock_pane_g2

0x9318,	// (0x000499ff) main_fs_bigclock_clock_pane_g3

0x9318,	// (0x000499ff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb41,	// (0x00050228) main_fs_bigclock_clock_pane_g

0x932b,	// (0x00049a12) main_fs_bigclock_clock_pane_t1

0x9341,	// (0x00049a28) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb4a,	// (0x00050231) main_fs_bigclock_clock_pane_t

0xc17e,	// (0x0004c865) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc17e,	// (0x0004c865) list_single_fs_bigclock_indicator_pane

0xc18f,	// (0x0004c876) list_single_fs_bigclock_pane_ParamLimits

0xc18f,	// (0x0004c876) list_single_fs_bigclock_pane

0xc1b5,	// (0x0004c89c) main_fs_bigclock_indicator_pane_t1

0xc1c4,	// (0x0004c8ab) list_single_fs_bigclock_pane_g1

0xc1cc,	// (0x0004c8b3) list_single_fs_bigclock_pane_t1

0xd2d7,	// (0x0004d9be) main_fs_bigclock_swipe_pane_g1

0xc20f,	// (0x0004c8f6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb5b,	// (0x00050242) main_fs_bigclock_swipe_pane_g

0xc217,	// (0x0004c8fe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc217,	// (0x0004c8fe) main_fs_bigclock_swipe_pane_t1

0x34a5,	// (0x00043b8c) call_type_pane_ParamLimits

0xc935,	// (0x0004d01c) main_btmg_pane

0xbe4a,	// (0x0004c531) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbe4a,	// (0x0004c531) list_single_cale_mrui_row_pane_g2

0x0002,

0xface,	// (0x000501b5) list_single_cale_mrui_row_pane_g_ParamLimits

0xface,	// (0x000501b5) list_single_cale_mrui_row_pane_g

0xbfcf,	// (0x0004c6b6) list_recal_vselct_arw_lo_pane

0xbfd7,	// (0x0004c6be) list_recal_vselct_arw_up_pane

0xbfdf,	// (0x0004c6c6) list_recal_vselct_pane

0x939b,	// (0x00049a82) btmg_button_pane

0x93a5,	// (0x00049a8c) main_btmg_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp044

0xc234,	// (0x0004c91b) btmg_button_pane_t1

0xf057,	// (0x0004f73e) aid_listscroll_gen

0xcfe4,	// (0x0004d6cb) main_cntbar_detail_pane

0xbb3f,	// (0x0004c226) list_cmail_folder_pane

0xe7d0,	// (0x0004eeb7) sp_fs_scroll_pane_cp03_ParamLimits

0x1538,	// (0x00041c1f) list_single_fs_dyc_pane_cp01_ParamLimits

0x1538,	// (0x00041c1f) list_single_fs_dyc_pane_cp01

0xc242,	// (0x0004c929) aid_size_cmail_indent

0xc24b,	// (0x0004c932) list_single_dyc_row_pane_cp01

0x93db,	// (0x00049ac2) cntbar_detail_list_pane_ParamLimits

0x93db,	// (0x00049ac2) cntbar_detail_list_pane

0x9427,	// (0x00049b0e) main_cntbar_detail_cont_pane_ParamLimits

0x9427,	// (0x00049b0e) main_cntbar_detail_cont_pane

0xe7d0,	// (0x0004eeb7) scroll_pane_cp032_ParamLimits

0xe7d0,	// (0x0004eeb7) scroll_pane_cp032

0x943b,	// (0x00049b22) cntbar_detail_list_event_pane_ParamLimits

0x943b,	// (0x00049b22) cntbar_detail_list_event_pane

0x93eb,	// (0x00049ad2) cntbar_detail_list_shct_pane

0xd54a,	// (0x0004dc31) aid_list_gen

0xc254,	// (0x0004c93b) aid_scroll

0xc25d,	// (0x0004c944) aid_size_touch_scroll_bar

0x8bdc,	// (0x000492c3) aid_list_double

0x154f,	// (0x00041c36) aid_list_single

0xc266,	// (0x0004c94d) aid_list_single_lg

0x1558,	// (0x00041c3f) aid_list_z_g_a_sm

0x1560,	// (0x00041c47) aid_list_z_g_d

0x1568,	// (0x00041c4f) aid_txt_z_prm

0x1576,	// (0x00041c5d) aid_txt_z_prm_cp01

0x1584,	// (0x00041c6b) aid_txt_z_sec

0x944b,	// (0x00049b32) main_cntbar_detail_cont_pane_g1_ParamLimits

0x944b,	// (0x00049b32) main_cntbar_detail_cont_pane_g1

0x945f,	// (0x00049b46) main_cntbar_detail_cont_pane_g2_ParamLimits

0x945f,	// (0x00049b46) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb60,	// (0x00050247) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb60,	// (0x00050247) main_cntbar_detail_cont_pane_g

0xc26f,	// (0x0004c956) main_cntbar_detail_cont_pane_t1

0xc27d,	// (0x0004c964) main_cntbar_detail_cont_pane_t2

0xc28b,	// (0x0004c972) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb65,	// (0x0005024c) main_cntbar_detail_cont_pane_t

0x946f,	// (0x00049b56) cell_cntbar_detail_list_shct_pane_ParamLimits

0x946f,	// (0x00049b56) cell_cntbar_detail_list_shct_pane

0xc299,	// (0x0004c980) cntbar_detail_list_shct_pane_g1

0xc2a2,	// (0x0004c989) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb6c,	// (0x00050253) cntbar_detail_list_shct_pane_g

0x9483,	// (0x00049b6a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9483,	// (0x00049b6a) cntbar_detail_list_event_pane_g1

0x948f,	// (0x00049b76) cntbar_detail_list_event_pane_g2_ParamLimits

0x948f,	// (0x00049b76) cntbar_detail_list_event_pane_g2

0x0005,

0xfb71,	// (0x00050258) cntbar_detail_list_event_pane_g_ParamLimits

0xfb71,	// (0x00050258) cntbar_detail_list_event_pane_g

0x94fb,	// (0x00049be2) cntbar_detail_list_event_pane_t1_ParamLimits

0x94fb,	// (0x00049be2) cntbar_detail_list_event_pane_t1

0x9510,	// (0x00049bf7) cntbar_detail_list_event_pane_t2_ParamLimits

0x9510,	// (0x00049bf7) cntbar_detail_list_event_pane_t2

0x0002,

0xfb7e,	// (0x00050265) cntbar_detail_list_event_pane_t_ParamLimits

0xfb7e,	// (0x00050265) cntbar_detail_list_event_pane_t

0xd2d7,	// (0x0004d9be) cell_cntbar_detail_list_shct_pane_g1

0xdcbc,	// (0x0004e3a3) navi_pane_mv_g3

0xcfe4,	// (0x0004d6cb) main_cntbar_detail_pane_ParamLimits

0xc935,	// (0x0004d01c) main_notif_wgt_pane

0xa86d,	// (0x0004af54) aid_tch_main_mp4_pane_g4

0xaa79,	// (0x0004b160) popup_slider_window_cp02

0xbfc5,	// (0x0004c6ac) list_recal_day_event_pane

0x93af,	// (0x00049a96) cntbar_detail_btn_pane_ParamLimits

0x93af,	// (0x00049a96) cntbar_detail_btn_pane

0x93c5,	// (0x00049aac) cntbar_detail_btn_pane_cp01_ParamLimits

0x93c5,	// (0x00049aac) cntbar_detail_btn_pane_cp01

0x93eb,	// (0x00049ad2) cntbar_detail_list_shct_pane_ParamLimits

0x93fb,	// (0x00049ae2) cntbar_detail_pane_g1_ParamLimits

0x93fb,	// (0x00049ae2) cntbar_detail_pane_g1

0x940b,	// (0x00049af2) cntbar_detail_pane_t1_ParamLimits

0x940b,	// (0x00049af2) cntbar_detail_pane_t1

0x949b,	// (0x00049b82) cntbar_detail_list_event_pane_g3_ParamLimits

0x949b,	// (0x00049b82) cntbar_detail_list_event_pane_g3

0x94b3,	// (0x00049b9a) cntbar_detail_list_event_pane_g4_ParamLimits

0x94b3,	// (0x00049b9a) cntbar_detail_list_event_pane_g4

0x94cb,	// (0x00049bb2) cntbar_detail_list_event_pane_g5_ParamLimits

0x94cb,	// (0x00049bb2) cntbar_detail_list_event_pane_g5

0x94e3,	// (0x00049bca) cntbar_detail_list_event_pane_g6_ParamLimits

0x94e3,	// (0x00049bca) cntbar_detail_list_event_pane_g6

0x9525,	// (0x00049c0c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9525,	// (0x00049c0c) cntbar_detail_list_event_pane_t3

0x9537,	// (0x00049c1e) popup_notif_wgt_window_ParamLimits

0x9537,	// (0x00049c1e) popup_notif_wgt_window

0x9550,	// (0x00049c37) popup_submenu_window_cp01_ParamLimits

0x9550,	// (0x00049c37) popup_submenu_window_cp01

0xd2a1,	// (0x0004d988) bg_popup_window_pane_cp10

0xc2ab,	// (0x0004c992) listscroll_notif_wgt_pane

0xc2bd,	// (0x0004c9a4) list_notif_wgt_window

0xc2c6,	// (0x0004c9ad) scroll_pane_cp033

0x9566,	// (0x00049c4d) list_notif_wgt_row_pane_ParamLimits

0x9566,	// (0x00049c4d) list_notif_wgt_row_pane

0xc2cf,	// (0x0004c9b6) aid_size_list_notif_wgt_del

0xc2dc,	// (0x0004c9c3) list_notif_wgt_row_pane_g1

0xc2e8,	// (0x0004c9cf) list_notif_wgt_row_pane_g2

0xc2f7,	// (0x0004c9de) list_notif_wgt_row_pane_g3

0x0002,

0xfb85,	// (0x0005026c) list_notif_wgt_row_pane_g

0xc304,	// (0x0004c9eb) list_notif_wgt_row_pane_t1

0xc31a,	// (0x0004ca01) list_notif_wgt_row_pane_t2

0xc32c,	// (0x0004ca13) list_notif_wgt_row_pane_t3

0x0002,

0xfb8c,	// (0x00050273) list_notif_wgt_row_pane_t

0x77b9,	// (0x00047ea0) list_recal_day_event_pane_g1

0xc33e,	// (0x0004ca25) list_recal_day_event_pane_t1

0xc935,	// (0x0004d01c) bg_button_pane_cp045

0xc34d,	// (0x0004ca34) cntbar_detail_btn_pane_t1

0xe75a,	// (0x0004ee41) main_callh_pane_ParamLimits

0xe75a,	// (0x0004ee41) main_callh_pane

0xc935,	// (0x0004d01c) main_coverflow0_pane

0xc935,	// (0x0004d01c) main_wgtman_pane

0x8a4c,	// (0x00049133) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8a4c,	// (0x00049133) main_fs_bigclock_unlock_btn_pane

0x8ec6,	// (0x000495ad) bg_button_pane_cp16

0x8ed6,	// (0x000495bd) cell_tport_appsw_pane_g3

0x9576,	// (0x00049c5d) cf0_flow_pane_ParamLimits

0x9576,	// (0x00049c5d) cf0_flow_pane

0xc35b,	// (0x0004ca42) listscroll_cf0_pane

0xc366,	// (0x0004ca4d) main_cf0_pane_g1

0x958b,	// (0x00049c72) main_cf0_pane_t1_ParamLimits

0x958b,	// (0x00049c72) main_cf0_pane_t1

0x95a2,	// (0x00049c89) main_cf0_pane_t2_ParamLimits

0x95a2,	// (0x00049c89) main_cf0_pane_t2

0x0001,

0xfb98,	// (0x0005027f) main_cf0_pane_t_ParamLimits

0xfb98,	// (0x0005027f) main_cf0_pane_t

0xc378,	// (0x0004ca5f) scroll_pane_cp11

0x95b9,	// (0x00049ca0) cf0_flow_pane_g1

0x95c1,	// (0x00049ca8) cf0_flow_pane_g2

0x0001,

0xfb9d,	// (0x00050284) cf0_flow_pane_g

0x95c9,	// (0x00049cb0) cf0_flow_pane_t1

0xc935,	// (0x0004d01c) main_call6_pane

0xc935,	// (0x0004d01c) main_calllock_pane

0x95d7,	// (0x00049cbe) call6_btn_grp_pane_ParamLimits

0x95d7,	// (0x00049cbe) call6_btn_grp_pane

0x95f1,	// (0x00049cd8) call6_pane_g1_ParamLimits

0x95f1,	// (0x00049cd8) call6_pane_g1

0x9607,	// (0x00049cee) popup_call6_1st_window_ParamLimits

0x9607,	// (0x00049cee) popup_call6_1st_window

0x9618,	// (0x00049cff) popup_call6_2nd_window_ParamLimits

0x9618,	// (0x00049cff) popup_call6_2nd_window

0x9629,	// (0x00049d10) cell_call6_btn_pane_ParamLimits

0x9629,	// (0x00049d10) cell_call6_btn_pane

0xd2a1,	// (0x0004d988) bg_popup_call2_in_pane_cp03

0xc383,	// (0x0004ca6a) popup_call6_1st_window_g1

0xc38b,	// (0x0004ca72) popup_call6_1st_window_g2

0xc393,	// (0x0004ca7a) popup_call6_1st_window_g3

0x0002,

0xfba2,	// (0x00050289) popup_call6_1st_window_g

0xc39b,	// (0x0004ca82) popup_call6_1st_window_t1

0xc3aa,	// (0x0004ca91) popup_call6_1st_window_t2

0xc3b8,	// (0x0004ca9f) popup_call6_1st_window_t3

0x0002,

0xfba9,	// (0x00050290) popup_call6_1st_window_t

0xd2a1,	// (0x0004d988) bg_popup_call2_in_pane_cp04

0xc3c6,	// (0x0004caad) popup_call6_2nd_window_g1

0xc3ce,	// (0x0004cab5) popup_call6_2nd_window_g2

0xc3d6,	// (0x0004cabd) popup_call6_2nd_window_g3

0x0002,

0xfbb0,	// (0x00050297) popup_call6_2nd_window_g

0xc3de,	// (0x0004cac5) popup_call6_2nd_window_t1

0xc935,	// (0x0004d01c) bg_button_pane_cp15

0xc3ed,	// (0x0004cad4) cell_call6_btn_pane_g1

0xc9a5,	// (0x0004d08c) cell_call6_btn_pane_t1

0x963c,	// (0x00049d23) listscroll_wgtman_pane_ParamLimits

0x963c,	// (0x00049d23) listscroll_wgtman_pane

0x965d,	// (0x00049d44) wgtman_btn_pane_ParamLimits

0x965d,	// (0x00049d44) wgtman_btn_pane

0xdac3,	// (0x0004e1aa) aid_scroll_copy1

0xc3f6,	// (0x0004cadd) list_wgtman_pane

0x96a0,	// (0x00049d87) wgtman_btn_pane_g1_ParamLimits

0x96a0,	// (0x00049d87) wgtman_btn_pane_g1

0x96cc,	// (0x00049db3) wgtman_btn_pane_t1_ParamLimits

0x96cc,	// (0x00049db3) wgtman_btn_pane_t1

0xc400,	// (0x0004cae7) wgtman_btn_pane_t2_ParamLimits

0xc400,	// (0x0004cae7) wgtman_btn_pane_t2

0x0001,

0xfbb7,	// (0x0005029e) wgtman_btn_pane_t_ParamLimits

0xfbb7,	// (0x0005029e) wgtman_btn_pane_t

0x9709,	// (0x00049df0) listrow_wgtman_pane_ParamLimits

0x9709,	// (0x00049df0) listrow_wgtman_pane

0x971b,	// (0x00049e02) listrow_wgtman_pane_g1

0x9728,	// (0x00049e0f) listrow_wgtman_pane_g2

0x0001,

0xfbbc,	// (0x000502a3) listrow_wgtman_pane_g

0x1592,	// (0x00041c79) listrow_wgtman_pane_t1

0x15aa,	// (0x00041c91) listrow_wgtman_pane_t2

0x0001,

0xfbc1,	// (0x000502a8) listrow_wgtman_pane_t

0x15d0,	// (0x00041cb7) wait_bar_pane_cp09

0xc417,	// (0x0004cafe) main_calllock_btn_pane

0xc421,	// (0x0004cb08) main_calllock_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp17

0xc3ed,	// (0x0004cad4) main_calllock_btn_pane_g1

0xc429,	// (0x0004cb10) main_calllock_btn_pane_t1

0xc935,	// (0x0004d01c) main_dialer3_pane

0xc935,	// (0x0004d01c) main_fmrd2_pane

0xd2d7,	// (0x0004d9be) main_fs_bigclock_unlock_btn_pane_g1

0x974e,	// (0x00049e35) main_fs_bigclock_unlock_btn_pane_t1

0x975c,	// (0x00049e43) area_fmrd2_info_pane_ParamLimits

0x975c,	// (0x00049e43) area_fmrd2_info_pane

0x976d,	// (0x00049e54) area_fmrd2_visual_pane_ParamLimits

0x976d,	// (0x00049e54) area_fmrd2_visual_pane

0x977b,	// (0x00049e62) fmrd2_indi_pane_ParamLimits

0x977b,	// (0x00049e62) fmrd2_indi_pane

0x9788,	// (0x00049e6f) area_fmrd2_visual_pane_g1

0x9790,	// (0x00049e77) area_fmrd2_visual_pane_t1

0x97a0,	// (0x00049e87) area_fmrd2_visual_pane_t2

0x97b0,	// (0x00049e97) area_fmrd2_visual_pane_t3

0x0002,

0xfbcb,	// (0x000502b2) area_fmrd2_visual_pane_t

0x97c0,	// (0x00049ea7) area_fmrd2_info_pane_g1

0x97c8,	// (0x00049eaf) area_fmrd2_info_pane_t1

0x97d8,	// (0x00049ebf) area_fmrd2_info_pane_t2

0x97e8,	// (0x00049ecf) area_fmrd2_info_pane_t3

0x97f8,	// (0x00049edf) area_fmrd2_info_pane_t4

0x0003,

0xfbd2,	// (0x000502b9) area_fmrd2_info_pane_t

0x9806,	// (0x00049eed) fmrd2_indi_pane_t1

0x9816,	// (0x00049efd) fmrd2_indi_pane_t2

0x9826,	// (0x00049f0d) fmrd2_indi_pane_t3

0x0002,

0xfbdb,	// (0x000502c2) fmrd2_indi_pane_t

0xb6b1,	// (0x0004bd98) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb6b1,	// (0x0004bd98) list_single_fs_bigclock_indicator_pane_g5

0xb762,	// (0x0004be49) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb762,	// (0x0004be49) list_single_fs_bigclock_indicator_pane_t5

0x9049,	// (0x00049730) aid_cell_bcale_month_pane_ParamLimits

0x9049,	// (0x00049730) aid_cell_bcale_month_pane

0x9067,	// (0x0004974e) bcale_month_pane_ParamLimits

0x9067,	// (0x0004974e) bcale_month_pane

0x908b,	// (0x00049772) bcale_preview_pane_ParamLimits

0x908b,	// (0x00049772) bcale_preview_pane

0xc1cc,	// (0x0004c8b3) list_single_fs_bigclock_pane_t1_ParamLimits

0xc1eb,	// (0x0004c8d2) list_single_fs_bigclock_pane_t2_ParamLimits

0xc1eb,	// (0x0004c8d2) list_single_fs_bigclock_pane_t2

0x0001,

0xfb56,	// (0x0005023d) list_single_fs_bigclock_pane_t_ParamLimits

0xfb56,	// (0x0005023d) list_single_fs_bigclock_pane_t

0x9746,	// (0x00049e2d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbc6,	// (0x000502ad) main_fs_bigclock_unlock_btn_pane_g

0x9836,	// (0x00049f1d) aid_dia3_key_size_ParamLimits

0x9836,	// (0x00049f1d) aid_dia3_key_size

0x9845,	// (0x00049f2c) aid_dia3_listrow_size_ParamLimits

0x9845,	// (0x00049f2c) aid_dia3_listrow_size

0x985a,	// (0x00049f41) dia3_keypad_fun_pane_ParamLimits

0x985a,	// (0x00049f41) dia3_keypad_fun_pane

0x9876,	// (0x00049f5d) dia3_keypad_num_pane_ParamLimits

0x9876,	// (0x00049f5d) dia3_keypad_num_pane

0x9891,	// (0x00049f78) dia3_listscroll_pane_ParamLimits

0x9891,	// (0x00049f78) dia3_listscroll_pane

0x98a4,	// (0x00049f8b) dia3_numentry_pane_ParamLimits

0x98a4,	// (0x00049f8b) dia3_numentry_pane

0xc438,	// (0x0004cb1f) dia3_list_pane

0xc443,	// (0x0004cb2a) scroll_pane_cp12

0xc935,	// (0x0004d01c) bg_dia3_numentry_pane

0x98bc,	// (0x00049fa3) dia3_numentry_pane_t1

0x98cb,	// (0x00049fb2) cell_dia3_key_num_pane

0x98d3,	// (0x00049fba) cell_dia3_key0_fun_pane_ParamLimits

0x98d3,	// (0x00049fba) cell_dia3_key0_fun_pane

0x98e7,	// (0x00049fce) cell_dia3_key1_fun_pane_ParamLimits

0x98e7,	// (0x00049fce) cell_dia3_key1_fun_pane

0x98ff,	// (0x00049fe6) dia3_listrow_pane

0xb404,	// (0x0004baeb) bg_dia3_numentry_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp21

0xc44e,	// (0x0004cb35) cell_dia3_key_num_pane_t1

0xc45c,	// (0x0004cb43) cell_dia3_key_num_pane_t2

0xc46b,	// (0x0004cb52) cell_dia3_key_num_pane_t3

0xc47a,	// (0x0004cb61) cell_dia3_key_num_pane_t4

0x0003,

0xfbe2,	// (0x000502c9) cell_dia3_key_num_pane_t

0xc935,	// (0x0004d01c) bg_button_pane_cp19

0x9911,	// (0x00049ff8) cell_dia3_key0_fun_pane_g1

0xc935,	// (0x0004d01c) bg_button_pane_cp20

0x9919,	// (0x0004a000) cell_dia3_key1_fun_pane_g1

0x9921,	// (0x0004a008) area_left_week_number_pane

0x992d,	// (0x0004a014) area_top_day_name_pane

0x9940,	// (0x0004a027) frame_month_view_pane

0xc489,	// (0x0004cb70) grid_month_view_pane

0x9953,	// (0x0004a03a) cell_top_day_name_pane_ParamLimits

0x9953,	// (0x0004a03a) cell_top_day_name_pane

0x9980,	// (0x0004a067) cell_area_left_week_number_pane_ParamLimits

0x9980,	// (0x0004a067) cell_area_left_week_number_pane

0x9994,	// (0x0004a07b) cell_month_view_pane_ParamLimits

0x9994,	// (0x0004a07b) cell_month_view_pane

0xc497,	// (0x0004cb7e) frm_month_g1

0x99c1,	// (0x0004a0a8) frm_month_g2

0x99d4,	// (0x0004a0bb) frm_month_g3

0x99e7,	// (0x0004a0ce) frm_month_g4

0x99fa,	// (0x0004a0e1) frm_month_g5

0x9a0d,	// (0x0004a0f4) frm_month_g6

0x9a20,	// (0x0004a107) frm_month_g7

0xc4a4,	// (0x0004cb8b) frm_month_g8

0x9a33,	// (0x0004a11a) frm_month_g9

0x9a43,	// (0x0004a12a) frm_month_g10

0x9a53,	// (0x0004a13a) frm_month_g11

0x9a63,	// (0x0004a14a) frm_month_g12

0x9a75,	// (0x0004a15c) frm_month_g13

0x9a87,	// (0x0004a16e) frm_month_g14

0x9a9b,	// (0x0004a182) frm_month_g15

0x9aaf,	// (0x0004a196) frm_month_g16

0x000f,

0xfbeb,	// (0x000502d2) frm_month_g

0xc4b1,	// (0x0004cb98) cell_top_day_name_pane_t1

0x9ac3,	// (0x0004a1aa) cell_area_left_week_number_pane_g1

0x9acf,	// (0x0004a1b6) cell_area_left_week_number_pane_t1

0xd07d,	// (0x0004d764) cell_month_view_pane_g1

0x9ae2,	// (0x0004a1c9) cell_month_view_pane_t1

0xc935,	// (0x0004d01c) main_fps_pane

0xb97f,	// (0x0004c066) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb97f,	// (0x0004c066) cmail_ddmenu_btn02_pane_cp1

0xb99b,	// (0x0004c082) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb99b,	// (0x0004c082) cmail_ddmenu_btn02_pane_cp2

0x927b,	// (0x00049962) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x927b,	// (0x00049962) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb09,	// (0x000501f0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb09,	// (0x000501f0) cmail_ddmenu_btn02_pane_g

0x9299,	// (0x00049980) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9299,	// (0x00049980) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb0e,	// (0x000501f5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb0e,	// (0x000501f5) cmail_ddmenu_btn02_pane_t

0x9af5,	// (0x0004a1dc) fps_text_pane_ParamLimits

0x9af5,	// (0x0004a1dc) fps_text_pane

0x9b0c,	// (0x0004a1f3) main_fps_pane_g1_ParamLimits

0x9b0c,	// (0x0004a1f3) main_fps_pane_g1

0x9b26,	// (0x0004a20d) wait_bar_pane_cp010_ParamLimits

0x9b26,	// (0x0004a20d) wait_bar_pane_cp010

0x9b37,	// (0x0004a21e) fps_text_pane_t1_ParamLimits

0x9b37,	// (0x0004a21e) fps_text_pane_t1

0x6a14,	// (0x000470fb) cam4_image_uncrop_pane_g1

0x6a1d,	// (0x00047104) cam4_image_uncrop_pane_g2

0x6a26,	// (0x0004710d) cam4_image_uncrop_pane_g3

0x6a2f,	// (0x00047116) cam4_image_uncrop_pane_g4

0x0003,

0xf668,	// (0x0004fd4f) cam4_image_uncrop_pane_g

0x98ff,	// (0x00049fe6) dia3_listrow_pane_ParamLimits

0xc935,	// (0x0004d01c) main_phob2_pane

0x8e97,	// (0x0004957e) cell_tport_appsw_pane_cp02_ParamLimits

0x8e97,	// (0x0004957e) cell_tport_appsw_pane_cp02

0x8eab,	// (0x00049592) cell_tport_appsw_pane_cp03_ParamLimits

0x8eab,	// (0x00049592) cell_tport_appsw_pane_cp03

0xc935,	// (0x0004d01c) phob2_contact_card_pane

0xc935,	// (0x0004d01c) phob2_listscroll_pane

0xc4c4,	// (0x0004cbab) phob2_list_pane

0xc4cc,	// (0x0004cbb3) scroll_pane_cp034

0x9b4f,	// (0x0004a236) phob2_cc_data_pane_ParamLimits

0x9b4f,	// (0x0004a236) phob2_cc_data_pane

0x9b6e,	// (0x0004a255) phob2_cc_listscroll_pane_ParamLimits

0x9b6e,	// (0x0004a255) phob2_cc_listscroll_pane

0x9709,	// (0x00049df0) list_double_large_graphic_phob2_pane_ParamLimits

0x9709,	// (0x00049df0) list_double_large_graphic_phob2_pane

0x9b8c,	// (0x0004a273) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b8c,	// (0x0004a273) list_double_large_graphic_phob2_pane_g1

0x15e2,	// (0x00041cc9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x15e2,	// (0x00041cc9) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc0c,	// (0x000502f3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc0c,	// (0x000502f3) list_double_large_graphic_phob2_pane_g

0x1608,	// (0x00041cef) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1608,	// (0x00041cef) list_double_large_graphic_phob2_pane_t1

0x161d,	// (0x00041d04) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x161d,	// (0x00041d04) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc15,	// (0x000502fc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc15,	// (0x000502fc) list_double_large_graphic_phob2_pane_t

0xc935,	// (0x0004d01c) list_highlight_pane_cp024

0xc4d4,	// (0x0004cbbb) phob2_cc_button_pane

0x9b99,	// (0x0004a280) phob2_cc_data_pane_g1_ParamLimits

0x9b99,	// (0x0004a280) phob2_cc_data_pane_g1

0x9bb0,	// (0x0004a297) phob2_cc_data_pane_g2_ParamLimits

0x9bb0,	// (0x0004a297) phob2_cc_data_pane_g2

0x0001,

0xfc1a,	// (0x00050301) phob2_cc_data_pane_g_ParamLimits

0xfc1a,	// (0x00050301) phob2_cc_data_pane_g

0x9bc2,	// (0x0004a2a9) phob2_cc_data_pane_t1_ParamLimits

0x9bc2,	// (0x0004a2a9) phob2_cc_data_pane_t1

0x9bda,	// (0x0004a2c1) phob2_cc_data_pane_t2_ParamLimits

0x9bda,	// (0x0004a2c1) phob2_cc_data_pane_t2

0x9bf2,	// (0x0004a2d9) phob2_cc_data_pane_t3_ParamLimits

0x9bf2,	// (0x0004a2d9) phob2_cc_data_pane_t3

0x0002,

0xfc1f,	// (0x00050306) phob2_cc_data_pane_t_ParamLimits

0xfc1f,	// (0x00050306) phob2_cc_data_pane_t

0xc4dc,	// (0x0004cbc3) phob2_cc_list_pane_ParamLimits

0xc4dc,	// (0x0004cbc3) phob2_cc_list_pane

0x7a3a,	// (0x00048121) scroll_pane_cp035_ParamLimits

0x7a3a,	// (0x00048121) scroll_pane_cp035

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp033

0xc4e8,	// (0x0004cbcf) phob2_cc_button_pane_g1

0xc4f4,	// (0x0004cbdb) phob2_cc_button_pane_t1

0xc509,	// (0x0004cbf0) phob2_cc_button_pane_t2

0x0001,

0xfc26,	// (0x0005030d) phob2_cc_button_pane_t

0x9c0a,	// (0x0004a2f1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c0a,	// (0x0004a2f1) list_double_large_graphic_phob2_cc_pane

0x9c3a,	// (0x0004a321) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c3a,	// (0x0004a321) list_double_large_graphic_phob2_cc_pane_g1

0x1632,	// (0x00041d19) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1632,	// (0x00041d19) list_double_large_graphic_phob2_cc_pane_g2

0x163e,	// (0x00041d25) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x163e,	// (0x00041d25) list_double_large_graphic_phob2_cc_pane_g3

0x164a,	// (0x00041d31) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x164a,	// (0x00041d31) list_double_large_graphic_phob2_cc_pane_g4

0xc51b,	// (0x0004cc02) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc51b,	// (0x0004cc02) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc2b,	// (0x00050312) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc2b,	// (0x00050312) list_double_large_graphic_phob2_cc_pane_g

0x1656,	// (0x00041d3d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1656,	// (0x00041d3d) list_double_large_graphic_phob2_cc_pane_t1

0x167f,	// (0x00041d66) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x167f,	// (0x00041d66) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc36,	// (0x0005031d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc36,	// (0x0005031d) list_double_large_graphic_phob2_cc_pane_t

0xc527,	// (0x0004cc0e) list_highlight_pane_cp025_ParamLimits

0xc527,	// (0x0004cc0e) list_highlight_pane_cp025

0xcfe4,	// (0x0004d6cb) bg_button_pane_cp033_ParamLimits

0xc4e8,	// (0x0004cbcf) phob2_cc_button_pane_g1_ParamLimits

0xc4f4,	// (0x0004cbdb) phob2_cc_button_pane_t1_ParamLimits

0xc509,	// (0x0004cbf0) phob2_cc_button_pane_t2_ParamLimits

0xfc26,	// (0x0005030d) phob2_cc_button_pane_t_ParamLimits

0x18e1,	// (0x00041fc8) popup_wgtman_window

0x7231,	// (0x00047918) scroll_pane_cp038

0x9682,	// (0x00049d69) wgtman_btn_pane_cp_01_ParamLimits

0x9682,	// (0x00049d69) wgtman_btn_pane_cp_01

0xc535,	// (0x0004cc1c) wgtman_content_pane

0xc53e,	// (0x0004cc25) wgtman_heading_pane

0xc935,	// (0x0004d01c) bg_heading_pane_cp02

0xc547,	// (0x0004cc2e) wgtman_heading_pane_g1

0xc54f,	// (0x0004cc36) wgtman_heading_pane_t1

0xc55d,	// (0x0004cc44) scroll_pane_cp036

0xc565,	// (0x0004cc4c) wgtman_list_pane

0xc56d,	// (0x0004cc54) wgtman_list_pane_t1_ParamLimits

0xc56d,	// (0x0004cc54) wgtman_list_pane_t1

0xab05,	// (0x0004b1ec) cam4_grid_pane

0x0fe4,	// (0x000416cb) bg_button_pane_cp015_ParamLimits

0x78ed,	// (0x00047fd4) bg_button_pane_cp016_ParamLimits

0x78f9,	// (0x00047fe0) bg_button_pane_cp017_ParamLimits

0x7920,	// (0x00048007) popup_vitu2_query_window_g3_ParamLimits

0x7920,	// (0x00048007) popup_vitu2_query_window_g3

0x109b,	// (0x00041782) popup_vitu2_query_window_t6_ParamLimits

0x109b,	// (0x00041782) popup_vitu2_query_window_t6

0x10c6,	// (0x000417ad) popup_vitu2_query_window_t7_ParamLimits

0x10c6,	// (0x000417ad) popup_vitu2_query_window_t7

0x6a14,	// (0x000470fb) cam4_grid_pane_g1

0x6a1d,	// (0x00047104) cam4_grid_pane_g2

0xc587,	// (0x0004cc6e) cam4_grid_pane_g3

0xc590,	// (0x0004cc77) cam4_grid_pane_g4

0x0003,

0xfc3b,	// (0x00050322) cam4_grid_pane_g

0x249a,	// (0x00042b81) aid_placing_vt_slider_lsc_ParamLimits

0x27a5,	// (0x00042e8c) vidtel_button_pane_ParamLimits

0x27a5,	// (0x00042e8c) vidtel_button_pane

0xc935,	// (0x0004d01c) bg_button_pane_cp034

0xc59b,	// (0x0004cc82) vidtel_button_pane_g1

0xc5a3,	// (0x0004cc8a) vidtel_button_pane_t1

0x75e8,	// (0x00047ccf) aid_size_vtel_slider_touch

0x7a3a,	// (0x00048121) scroll_pane_cp039

0x8740,	// (0x00048e27) ncim_query_button_pane_cp01_ParamLimits

0x875f,	// (0x00048e46) ncimui_query_pane_g1_ParamLimits

0xcfe4,	// (0x0004d6cb) input_focus_pane_cp012_ParamLimits

0xb442,	// (0x0004bb29) ncim_query_entry_pane_t1_ParamLimits

0x7a3a,	// (0x00048121) scroll_pane_cp039_ParamLimits

0xdba7,	// (0x0004e28e) navi_pane_bcale_mc_g1

0xdbaf,	// (0x0004e296) navi_pane_bcale_mc_t1

0xb9cf,	// (0x0004c0b6) main_sp_fs_email_pane_g1

0xb9db,	// (0x0004c0c2) main_sp_fs_email_pane_g2

0x0001,

0xfa3e,	// (0x00050125) main_sp_fs_email_pane_g

0xbe56,	// (0x0004c53d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbe56,	// (0x0004c53d) list_single_cale_mrui_row_pane_g3

0x152e,	// (0x00041c15) list_single_recal_day_pane_g5_event_pane

0xc036,	// (0x0004c71d) list_single_recal_day_pane_g7

0xc5b9,	// (0x0004cca0) list_recal_day_event_pane_cp01

0xc5c2,	// (0x0004cca9) list_recal_vselct_arw_lo_pane_cp01

0xc5ca,	// (0x0004ccb1) list_recal_vselct_arw_up_pane_cp01

0xc5d2,	// (0x0004ccb9) list_recal_vselct_pane_cp01

0x77b9,	// (0x00047ea0) list_recal_day_event_pane_cp01_g1

0xc5dc,	// (0x0004ccc3) list_recal_day_event_pane_cp01_t1

0xc03e,	// (0x0004c725) list_single_recal_day_pane_t1_ParamLimits

0xc050,	// (0x0004c737) list_single_recal_day_pane_t2_ParamLimits

0xfb1e,	// (0x00050205) list_single_recal_day_pane_t_ParamLimits

0xd010,	// (0x0004d6f7) bg_notes_pane_ParamLimits

0xd0cd,	// (0x0004d7b4) list_notes_pane_ParamLimits

0x1b01,	// (0x000421e8) scroll_pane_cp06_ParamLimits

0xd0ef,	// (0x0004d7d6) main_notes_pane_ParamLimits

0xcfe4,	// (0x0004d6cb) main_welc_pane

0x9c75,	// (0x0004a35c) main_welc_body_pane_ParamLimits

0x9c75,	// (0x0004a35c) main_welc_body_pane

0x9c93,	// (0x0004a37a) main_welc_opti_pane_ParamLimits

0x9c93,	// (0x0004a37a) main_welc_opti_pane

0x9d0e,	// (0x0004a3f5) main_welc_pane_t1_ParamLimits

0x9d0e,	// (0x0004a3f5) main_welc_pane_t1

0x9ef2,	// (0x0004a5d9) main_welc_body_row_pane_ParamLimits

0x9ef2,	// (0x0004a5d9) main_welc_body_row_pane

0xc95f,	// (0x0004d046) main_welc_opti_row_pane_ParamLimits

0xc95f,	// (0x0004d046) main_welc_opti_row_pane

0xc5fa,	// (0x0004cce1) main_welc_opti_row_pane_g1

0x9f06,	// (0x0004a5ed) main_welc_opti_row_pane_t1

0xc602,	// (0x0004cce9) main_welc_body_row_pane_t1

0xc2b5,	// (0x0004c99c) popup_notif_wgt_heading_pane

0xc2cf,	// (0x0004c9b6) aid_size_list_notif_wgt_del_ParamLimits

0xc2dc,	// (0x0004c9c3) list_notif_wgt_row_pane_g1_ParamLimits

0xc2e8,	// (0x0004c9cf) list_notif_wgt_row_pane_g2_ParamLimits

0xc2f7,	// (0x0004c9de) list_notif_wgt_row_pane_g3_ParamLimits

0xfb85,	// (0x0005026c) list_notif_wgt_row_pane_g_ParamLimits

0xc304,	// (0x0004c9eb) list_notif_wgt_row_pane_t1_ParamLimits

0xc31a,	// (0x0004ca01) list_notif_wgt_row_pane_t2_ParamLimits

0xc32c,	// (0x0004ca13) list_notif_wgt_row_pane_t3_ParamLimits

0xfb8c,	// (0x00050273) list_notif_wgt_row_pane_t_ParamLimits

0x971b,	// (0x00049e02) listrow_wgtman_pane_g1_ParamLimits

0x9728,	// (0x00049e0f) listrow_wgtman_pane_g2_ParamLimits

0xfbbc,	// (0x000502a3) listrow_wgtman_pane_g_ParamLimits

0x1592,	// (0x00041c79) listrow_wgtman_pane_t1_ParamLimits

0x15aa,	// (0x00041c91) listrow_wgtman_pane_t2_ParamLimits

0xfbc1,	// (0x000502a8) listrow_wgtman_pane_t_ParamLimits

0x15d0,	// (0x00041cb7) wait_bar_pane_cp09_ParamLimits

0xc935,	// (0x0004d01c) bg_popup_heading_pane_cp02

0xc611,	// (0x0004ccf8) popup_notif_wgt_heading_pane_g1

0xc619,	// (0x0004cd00) popup_notif_wgt_heading_pane_t1

0xc935,	// (0x0004d01c) main_vids_pane

0xc935,	// (0x0004d01c) vids_listscroll_pane

0x9f15,	// (0x0004a5fc) scroll_pane_cp040

0xc935,	// (0x0004d01c) vids_list_pane

0x9f20,	// (0x0004a607) vids_list_double_pane_ParamLimits

0x9f20,	// (0x0004a607) vids_list_double_pane

0x9f31,	// (0x0004a618) vids_list_double_pane_g1

0x9f3a,	// (0x0004a621) vids_list_double_pane_t1

0x9f4a,	// (0x0004a631) vids_list_double_pane_t2

0x0001,

0xfc5a,	// (0x00050341) vids_list_double_pane_t

0xcfe4,	// (0x0004d6cb) main_ncimui_pane_ParamLimits

0x8576,	// (0x00048c5d) main_ncimui_pane_g1_ParamLimits

0x8582,	// (0x00048c69) main_ncimui_pane_g2_ParamLimits

0x8582,	// (0x00048c69) main_ncimui_pane_g2

0x0001,

0xf944,	// (0x0005002b) main_ncimui_pane_g_ParamLimits

0xf944,	// (0x0005002b) main_ncimui_pane_g

0x9cae,	// (0x0004a395) main_welc_pane_g1_ParamLimits

0x9cae,	// (0x0004a395) main_welc_pane_g1

0x9cc3,	// (0x0004a3aa) main_welc_pane_g2_ParamLimits

0x9cc3,	// (0x0004a3aa) main_welc_pane_g2

0x0003,

0xfc44,	// (0x0005032b) main_welc_pane_g_ParamLimits

0xfc44,	// (0x0005032b) main_welc_pane_g

0x1ae7,	// (0x000421ce) listscroll_mce_pane_ParamLimits

0xdcfc,	// (0x0004e3e3) wait_bar_pane_cp10

0xf05f,	// (0x0004f746) main_cale_day_pane_ParamLimits

0xf05f,	// (0x0004f746) main_cale_week_pane_ParamLimits

0xd010,	// (0x0004d6f7) main_messa_pane_ParamLimits

0x597b,	// (0x00046062) main_clock2_btn_pane_ParamLimits

0x597b,	// (0x00046062) main_clock2_btn_pane

0x598f,	// (0x00046076) main_clock2_btn_pane_cp01_ParamLimits

0x598f,	// (0x00046076) main_clock2_btn_pane_cp01

0xbde2,	// (0x0004c4c9) list_cale_mrui_pane_ParamLimits

0xc370,	// (0x0004ca57) main_cf0_pane_g2

0x0001,

0xfb93,	// (0x0005027a) main_cf0_pane_g

0x9921,	// (0x0004a008) area_left_week_number_pane_ParamLimits

0x992d,	// (0x0004a014) area_top_day_name_pane_ParamLimits

0x9940,	// (0x0004a027) frame_month_view_pane_ParamLimits

0xc489,	// (0x0004cb70) grid_month_view_pane_ParamLimits

0xc497,	// (0x0004cb7e) frm_month_g1_ParamLimits

0x99c1,	// (0x0004a0a8) frm_month_g2_ParamLimits

0x99d4,	// (0x0004a0bb) frm_month_g3_ParamLimits

0x99e7,	// (0x0004a0ce) frm_month_g4_ParamLimits

0x99fa,	// (0x0004a0e1) frm_month_g5_ParamLimits

0x9a0d,	// (0x0004a0f4) frm_month_g6_ParamLimits

0x9a20,	// (0x0004a107) frm_month_g7_ParamLimits

0xc4a4,	// (0x0004cb8b) frm_month_g8_ParamLimits

0x9a33,	// (0x0004a11a) frm_month_g9_ParamLimits

0x9a43,	// (0x0004a12a) frm_month_g10_ParamLimits

0x9a53,	// (0x0004a13a) frm_month_g11_ParamLimits

0x9a63,	// (0x0004a14a) frm_month_g12_ParamLimits

0x9a75,	// (0x0004a15c) frm_month_g13_ParamLimits

0x9a87,	// (0x0004a16e) frm_month_g14_ParamLimits

0x9a9b,	// (0x0004a182) frm_month_g15_ParamLimits

0x9aaf,	// (0x0004a196) frm_month_g16_ParamLimits

0xfbeb,	// (0x000502d2) frm_month_g_ParamLimits

0xc4b1,	// (0x0004cb98) cell_top_day_name_pane_t1_ParamLimits

0x9ac3,	// (0x0004a1aa) cell_area_left_week_number_pane_g1_ParamLimits

0x9acf,	// (0x0004a1b6) cell_area_left_week_number_pane_t1_ParamLimits

0xd07d,	// (0x0004d764) cell_month_view_pane_g1_ParamLimits

0x9ae2,	// (0x0004a1c9) cell_month_view_pane_t1_ParamLimits

0xd008,	// (0x0004d6ef) main_clock2_btn_pane_g1

0xc627,	// (0x0004cd0e) main_clock2_btn_pane_t1

0xcfe4,	// (0x0004d6cb) listscroll_cmail_pane_ParamLimits

0xb9cf,	// (0x0004c0b6) main_sp_fs_email_pane_g1_ParamLimits

0xb9db,	// (0x0004c0c2) main_sp_fs_email_pane_g2_ParamLimits

0xfa3e,	// (0x00050125) main_sp_fs_email_pane_g_ParamLimits

0xbfa6,	// (0x0004c68d) list_recal_day_pane_ParamLimits

0xbfb7,	// (0x0004c69e) mian_recal_day_pane_t1

0x137a,	// (0x00041a61) list_single_dyc_row_text_pane_t4_ParamLimits

0x137a,	// (0x00041a61) list_single_dyc_row_text_pane_t4

0x13c3,	// (0x00041aaa) list_single_dyc_row_text_pane_t5_ParamLimits

0x13c3,	// (0x00041aaa) list_single_dyc_row_text_pane_t5

0xba7d,	// (0x0004c164) list_single_dyc_row_text_pane_t6_ParamLimits

0xba7d,	// (0x0004c164) list_single_dyc_row_text_pane_t6

0xd693,	// (0x0004dd7a) aid_mgn_list_cale_time_pane

0xcfe4,	// (0x0004d6cb) main_gallery2_pane_ParamLimits

0x59a5,	// (0x0004608c) main_clock2_pane_cp01_t1

0x59b5,	// (0x0004609c) main_clock2_pane_cp01_t3

0x0001,

0xf53f,	// (0x0004fc26) main_clock2_pane_cp01_t

0x1e90,	// (0x00042577) cale_week_scroll_pane_g16_ParamLimits

0x1e90,	// (0x00042577) cale_week_scroll_pane_g16

0xd2a1,	// (0x0004d988) vorec_slider_pane

0xc5a3,	// (0x0004cc8a) vidtel_button_pane_t1_ParamLimits

0x9307,	// (0x000499ee) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9307,	// (0x000499ee) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9318,	// (0x000499ff) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9318,	// (0x000499ff) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb41,	// (0x00050228) main_fs_bigclock_clock_pane_g_ParamLimits

0x932b,	// (0x00049a12) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9341,	// (0x00049a28) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb4a,	// (0x00050231) main_fs_bigclock_clock_pane_t_ParamLimits

0x5149,	// (0x00045830) main_mup3_lyrics_pane_ParamLimits

0x5149,	// (0x00045830) main_mup3_lyrics_pane

0x9f80,	// (0x0004a667) main_mup3_lyrics_pane_t1_ParamLimits

0x9f80,	// (0x0004a667) main_mup3_lyrics_pane_t1

0xa857,	// (0x0004af3e) aid_main_mp4_pane_t1_area

0xa861,	// (0x0004af48) aid_main_mp4_pane_t2_area

0xa90d,	// (0x0004aff4) main_mp4_pane_g7_ParamLimits

0xa90d,	// (0x0004aff4) main_mp4_pane_g7

0xa919,	// (0x0004b000) main_mp4_pane_g8_ParamLimits

0xa919,	// (0x0004b000) main_mp4_pane_g8

0x67bb,	// (0x00046ea2) aid_call6_pane_g1_size

0x9c24,	// (0x0004a30b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9c24,	// (0x0004a30b) list_double_large_graphic_phob2_other_pane

0xd64b,	// (0x0004dd32) list_double_large_graphic_phob2_other_pane_g1

0xc935,	// (0x0004d01c) list_highlight_pane_cp026

0xcfe4,	// (0x0004d6cb) main_welc_pane_ParamLimits

0x8d34,	// (0x0004941b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8d34,	// (0x0004941b) main_sp_fs_ctrlbar_pane_g3

0x8d4e,	// (0x00049435) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8d4e,	// (0x00049435) main_sp_fs_ctrlbar_pane_g4

0x8d82,	// (0x00049469) toolbar2_fixed_button_pane_cp01

0x8d8d,	// (0x00049474) toolbar2_fixed_button_pane_cp02

0x8d9a,	// (0x00049481) toolbar2_fixed_button_pane_cp03

0x9c59,	// (0x0004a340) list_welc_entry_pane_ParamLimits

0x9c59,	// (0x0004a340) list_welc_entry_pane

0x9cd8,	// (0x0004a3bf) main_welc_pane_g3_ParamLimits

0x9cd8,	// (0x0004a3bf) main_welc_pane_g3

0x9d2c,	// (0x0004a413) main_welc_pane_t2_ParamLimits

0x9d2c,	// (0x0004a413) main_welc_pane_t2

0x9d46,	// (0x0004a42d) main_welc_pane_t3_ParamLimits

0x9d46,	// (0x0004a42d) main_welc_pane_t3

0x0005,

0xfc4d,	// (0x00050334) main_welc_pane_t_ParamLimits

0xfc4d,	// (0x00050334) main_welc_pane_t

0x9e75,	// (0x0004a55c) welc_button_pane_ParamLimits

0x9e75,	// (0x0004a55c) welc_button_pane

0x9edd,	// (0x0004a5c4) welc_service_logo_pane_ParamLimits

0x9edd,	// (0x0004a5c4) welc_service_logo_pane

0x9f9c,	// (0x0004a683) list_single_welc_entry_pane_ParamLimits

0x9f9c,	// (0x0004a683) list_single_welc_entry_pane

0x9fad,	// (0x0004a694) list_single_welc_entry_pane_g1

0x9fb5,	// (0x0004a69c) list_single_welc_entry_pane_t1

0x9fc3,	// (0x0004a6aa) list_single_welc_entry_pane_t2

0x0001,

0xfc5f,	// (0x00050346) list_single_welc_entry_pane_t

0xc935,	// (0x0004d01c) bg_button_pane_cp035

0xc635,	// (0x0004cd1c) welc_button_pane_t1

0xc643,	// (0x0004cd2a) welc_service_logo_pane_g1

0xc64c,	// (0x0004cd33) welc_service_logo_pane_g2

0x0001,

0xfc64,	// (0x0005034b) welc_service_logo_pane_g

0xc935,	// (0x0004d01c) main_int_radio_pane

0xe705,	// (0x0004edec) list_single_fs_dyc_pane_g1

0x15ee,	// (0x00041cd5) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x15ee,	// (0x00041cd5) list_double_large_graphic_phob2_pane_g3

0x15fa,	// (0x00041ce1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x15fa,	// (0x00041ce1) list_double_large_graphic_phob2_pane_g4

0x9fd1,	// (0x0004a6b8) main_int_radio1_pane_ParamLimits

0x9fd1,	// (0x0004a6b8) main_int_radio1_pane

0xc655,	// (0x0004cd3c) find_pane_cp02

0x9fee,	// (0x0004a6d5) input_focus_pane_cp12_ParamLimits

0x9fee,	// (0x0004a6d5) input_focus_pane_cp12

0x9ffe,	// (0x0004a6e5) input_focus_pane_cp13_ParamLimits

0x9ffe,	// (0x0004a6e5) input_focus_pane_cp13

0xa012,	// (0x0004a6f9) input_focus_pane_cp14_ParamLimits

0xa012,	// (0x0004a6f9) input_focus_pane_cp14

0xc65e,	// (0x0004cd45) int_radio1_listscroll_pane

0xa026,	// (0x0004a70d) main_int_radio1_pane_g1_ParamLimits

0xa026,	// (0x0004a70d) main_int_radio1_pane_g1

0xa03e,	// (0x0004a725) main_int_radio1_pane_t1_ParamLimits

0xa03e,	// (0x0004a725) main_int_radio1_pane_t1

0xa059,	// (0x0004a740) main_int_radio1_pane_t2_ParamLimits

0xa059,	// (0x0004a740) main_int_radio1_pane_t2

0xa074,	// (0x0004a75b) main_int_radio1_pane_t3_ParamLimits

0xa074,	// (0x0004a75b) main_int_radio1_pane_t3

0xa08f,	// (0x0004a776) main_int_radio1_pane_t4_ParamLimits

0xa08f,	// (0x0004a776) main_int_radio1_pane_t4

0xc668,	// (0x0004cd4f) main_int_radio1_pane_t5_ParamLimits

0xc668,	// (0x0004cd4f) main_int_radio1_pane_t5

0xa0a1,	// (0x0004a788) main_int_radio1_pane_t6_ParamLimits

0xa0a1,	// (0x0004a788) main_int_radio1_pane_t6

0xa0b6,	// (0x0004a79d) main_int_radio1_pane_t7_ParamLimits

0xa0b6,	// (0x0004a79d) main_int_radio1_pane_t7

0xa0cb,	// (0x0004a7b2) main_int_radio1_pane_t8_ParamLimits

0xa0cb,	// (0x0004a7b2) main_int_radio1_pane_t8

0xa0ea,	// (0x0004a7d1) main_int_radio1_pane_t9_ParamLimits

0xa0ea,	// (0x0004a7d1) main_int_radio1_pane_t9

0xa0fc,	// (0x0004a7e3) main_int_radio1_pane_t10_ParamLimits

0xa0fc,	// (0x0004a7e3) main_int_radio1_pane_t10

0xa122,	// (0x0004a809) main_int_radio1_pane_t11_ParamLimits

0xa122,	// (0x0004a809) main_int_radio1_pane_t11

0xa148,	// (0x0004a82f) main_int_radio1_pane_t12_ParamLimits

0xa148,	// (0x0004a82f) main_int_radio1_pane_t12

0x000b,

0xfc69,	// (0x00050350) main_int_radio1_pane_t_ParamLimits

0xfc69,	// (0x00050350) main_int_radio1_pane_t

0xc67a,	// (0x0004cd61) int_radio_list_pane

0xc4cc,	// (0x0004cbb3) scroll_pane_cp037

0xc682,	// (0x0004cd69) list_double_large_graphic_int_radio_pane_ParamLimits

0xc682,	// (0x0004cd69) list_double_large_graphic_int_radio_pane

0xc69a,	// (0x0004cd81) list_double_large_graphic_int_radio_pane_g1

0xc6a3,	// (0x0004cd8a) list_double_large_graphic_int_radio_pane_t1

0xc6b1,	// (0x0004cd98) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfc82,	// (0x00050369) list_double_large_graphic_int_radio_pane_t

0xc935,	// (0x0004d01c) list_highlight_pane_cp027

0xc5ea,	// (0x0004ccd1) main_button_pane_4

0x9ce8,	// (0x0004a3cf) main_welc_pane_g4_ParamLimits

0x9ce8,	// (0x0004a3cf) main_welc_pane_g4

0x9d5e,	// (0x0004a445) main_welc_pane_t4_ParamLimits

0x9d5e,	// (0x0004a445) main_welc_pane_t4

0x9d75,	// (0x0004a45c) main_welc_pane_t5_ParamLimits

0x9d75,	// (0x0004a45c) main_welc_pane_t5

0x9db2,	// (0x0004a499) main_welc_pane_t6_ParamLimits

0x9db2,	// (0x0004a499) main_welc_pane_t6

0x9e8c,	// (0x0004a573) welc_button_pane_2_ParamLimits

0x9e8c,	// (0x0004a573) welc_button_pane_2

0x9ea8,	// (0x0004a58f) welc_button_pane_3_ParamLimits

0x9ea8,	// (0x0004a58f) welc_button_pane_3

0xc5f2,	// (0x0004ccd9) welc_button_pane_4

0x9ec7,	// (0x0004a5ae) welc_button_pane_5_ParamLimits

0x9ec7,	// (0x0004a5ae) welc_button_pane_5

0x16e4,	// (0x00041dcb) main_popup_welc_pane

0xc6ce,	// (0x0004cdb5) main_welc_sk_g3

0xc6d8,	// (0x0004cdbf) main_welc_sk_g4

0xc6e2,	// (0x0004cdc9) main_welc_sk_t3

0xc6f2,	// (0x0004cdd9) main_welc_sk_t4

0xc702,	// (0x0004cde9) popup_welc_pane_t4

0xc710,	// (0x0004cdf7) popup_welc_pane_t5

0xc720,	// (0x0004ce07) popup_welc_pane_t6

0xc935,	// (0x0004d01c) main_acti_pane

0xc935,	// (0x0004d01c) main_sso_pane

0xa15a,	// (0x0004a841) sso_body_pane_ParamLimits

0xa15a,	// (0x0004a841) sso_body_pane

0xa16e,	// (0x0004a855) sso_logo_pane_ParamLimits

0xa16e,	// (0x0004a855) sso_logo_pane

0xa19a,	// (0x0004a881) sso_sk_pane_ParamLimits

0xa19a,	// (0x0004a881) sso_sk_pane

0xd2d7,	// (0x0004d9be) main_sso_logo_pane_g1

0xa1ac,	// (0x0004a893) sso_sk_pane_t1_ParamLimits

0xa1ac,	// (0x0004a893) sso_sk_pane_t1

0xa1c6,	// (0x0004a8ad) sso_sk_pane_t2_ParamLimits

0xa1c6,	// (0x0004a8ad) sso_sk_pane_t2

0x0001,

0xfc87,	// (0x0005036e) sso_sk_pane_t_ParamLimits

0xfc87,	// (0x0005036e) sso_sk_pane_t

0xc75e,	// (0x0004ce45) aid_sso_gap

0xc767,	// (0x0004ce4e) aid_sso_txt1

0xc771,	// (0x0004ce58) aid_sso_txt2

0xc77b,	// (0x0004ce62) aid_sso_txt3

0x0002,

0xfc8c,	// (0x00050373) aid_sso_txt

0xc785,	// (0x0004ce6c) aid_sso_widget

0xa230,	// (0x0004a917) sso_btn_pane_ParamLimits

0xa230,	// (0x0004a917) sso_btn_pane

0xa2b8,	// (0x0004a99f) sso_option_pane_ParamLimits

0xa2b8,	// (0x0004a99f) sso_option_pane

0xa338,	// (0x0004aa1f) sso_query_pane_ParamLimits

0xa338,	// (0x0004aa1f) sso_query_pane

0xa38e,	// (0x0004aa75) sso_query_pane_cp01_ParamLimits

0xa38e,	// (0x0004aa75) sso_query_pane_cp01

0xa3e8,	// (0x0004aacf) sso_t_hdr_pane_ParamLimits

0xa3e8,	// (0x0004aacf) sso_t_hdr_pane

0xa40c,	// (0x0004aaf3) sso_t_nml_pane_ParamLimits

0xa40c,	// (0x0004aaf3) sso_t_nml_pane

0xc77b,	// (0x0004ce62) sso_t_sub_pane

0xa17b,	// (0x0004a862) sso_popup_window_ParamLimits

0xa17b,	// (0x0004a862) sso_popup_window

0xa1dc,	// (0x0004a8c3) sso_apps_pane_ParamLimits

0xa1dc,	// (0x0004a8c3) sso_apps_pane

0xa206,	// (0x0004a8ed) sso_body_pane_g1

0xa210,	// (0x0004a8f7) sso_body_pane_t1

0xa220,	// (0x0004a907) sso_body_pane_t2

0x0001,

0xfc93,	// (0x0005037a) sso_body_pane_t

0xa282,	// (0x0004a969) sso_btn_pane_cp01_ParamLimits

0xa282,	// (0x0004a969) sso_btn_pane_cp01

0xa30c,	// (0x0004a9f3) sso_prog_pane_ParamLimits

0xa30c,	// (0x0004a9f3) sso_prog_pane

0xc78f,	// (0x0004ce76) sso_t_hdr_pane_t1_ParamLimits

0xc78f,	// (0x0004ce76) sso_t_hdr_pane_t1

0xc7a2,	// (0x0004ce89) input_focus_pane_cp10_ParamLimits

0xc7a2,	// (0x0004ce89) input_focus_pane_cp10

0xc7b8,	// (0x0004ce9f) sso_query_pane_t1_ParamLimits

0xc7b8,	// (0x0004ce9f) sso_query_pane_t1

0xc7cb,	// (0x0004ceb2) sso_query_pane_t2_ParamLimits

0xc7cb,	// (0x0004ceb2) sso_query_pane_t2

0xc7e6,	// (0x0004cecd) sso_query_pane_t3_ParamLimits

0xc7e6,	// (0x0004cecd) sso_query_pane_t3

0xc810,	// (0x0004cef7) sso_query_pane_t4_ParamLimits

0xc810,	// (0x0004cef7) sso_query_pane_t4

0x0003,

0xfc98,	// (0x0005037f) sso_query_pane_t_ParamLimits

0xfc98,	// (0x0005037f) sso_query_pane_t

0xc935,	// (0x0004d01c) bg_button_pane_cp22

0xc6bf,	// (0x0004cda6) sso_btn_pane_t1

0xa462,	// (0x0004ab49) sso_t_nml_pane_t1_ParamLimits

0xa462,	// (0x0004ab49) sso_t_nml_pane_t1

0xc834,	// (0x0004cf1b) sso_option_row_pane_ParamLimits

0xc834,	// (0x0004cf1b) sso_option_row_pane

0xc841,	// (0x0004cf28) sso_t_sub_pane_t1_ParamLimits

0xc841,	// (0x0004cf28) sso_t_sub_pane_t1

0xcfe4,	// (0x0004d6cb) bg_popup_window_pane_cp11_ParamLimits

0xcfe4,	// (0x0004d6cb) bg_popup_window_pane_cp11

0xc854,	// (0x0004cf3b) popup_sk_window_cp01_ParamLimits

0xc854,	// (0x0004cf3b) popup_sk_window_cp01

0xc861,	// (0x0004cf48) sso_popup_body_pane_ParamLimits

0xc861,	// (0x0004cf48) sso_popup_body_pane

0xc86e,	// (0x0004cf55) scroll_pane_cp21_ParamLimits

0xc86e,	// (0x0004cf55) scroll_pane_cp21

0xc87b,	// (0x0004cf62) sso_popup_body_t_pane_ParamLimits

0xc87b,	// (0x0004cf62) sso_popup_body_t_pane

0xc888,	// (0x0004cf6f) sso_popup_body_t_hdr_pane_ParamLimits

0xc888,	// (0x0004cf6f) sso_popup_body_t_hdr_pane

0xc896,	// (0x0004cf7d) sso_popup_body_t_nml_pane_ParamLimits

0xc896,	// (0x0004cf7d) sso_popup_body_t_nml_pane

0xc8b1,	// (0x0004cf98) sso_popup_body_t_sub_pane_ParamLimits

0xc8b1,	// (0x0004cf98) sso_popup_body_t_sub_pane

0xc8d4,	// (0x0004cfbb) sso_popup_body_t_hdr_pane_t1

0xa47d,	// (0x0004ab64) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa47d,	// (0x0004ab64) sso_popup_body_t_nml_pane_t1

0xc8e4,	// (0x0004cfcb) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc8e4,	// (0x0004cfcb) sso_popup_body_t_sub_pane_t1

0xd2d7,	// (0x0004d9be) sso_prog_pane_g1

0xa4b6,	// (0x0004ab9d) sso_apps_pane_comp1_ParamLimits

0xa4b6,	// (0x0004ab9d) sso_apps_pane_comp1

0xc909,	// (0x0004cff0) sso_apps_pane_comp1_g1

0xc911,	// (0x0004cff8) sso_apps_pane_comp1_t1

0xc91f,	// (0x0004d006) sso_option_row_pane_g1

0xc927,	// (0x0004d00e) sso_option_row_pane_t1

0x9c46,	// (0x0004a32d) bg_welc_area_ParamLimits

0x9c46,	// (0x0004a32d) bg_welc_area

0x9df0,	// (0x0004a4d7) sso_t_hdr_pane_a_t1_ParamLimits

0x9df0,	// (0x0004a4d7) sso_t_hdr_pane_a_t1

0x9e0b,	// (0x0004a4f2) sso_t_nml_pane_a_t1_ParamLimits

0x9e0b,	// (0x0004a4f2) sso_t_nml_pane_a_t1

0x9e3a,	// (0x0004a521) sso_t_sub_pane_a_t1_ParamLimits

0x9e3a,	// (0x0004a521) sso_t_sub_pane_a_t1

0xc6bf,	// (0x0004cda6) sso_btn_pane_t1_copy1

0xc935,	// (0x0004d01c) welc_button_pane_2_comp1

0xc72e,	// (0x0004ce15) sso_t_hdr_pane_p_t1

0xc73e,	// (0x0004ce25) sso_t_nml_pane_p_t1

0xc74e,	// (0x0004ce35) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
