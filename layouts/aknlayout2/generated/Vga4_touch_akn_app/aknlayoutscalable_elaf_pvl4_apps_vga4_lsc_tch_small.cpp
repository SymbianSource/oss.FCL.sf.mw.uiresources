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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003fc82 };

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
0x16a9,	// (0x0004132b) Screen

0x16b5,	// (0x00041337) application_window

0x16f1,	// (0x00041373) area_bottom_pane_ParamLimits

0x16f1,	// (0x00041373) area_bottom_pane

0x172a,	// (0x000413ac) area_top_pane_ParamLimits

0x172a,	// (0x000413ac) area_top_pane

0xaafd,	// (0x0004a77f) call_video_uplink_pane_ParamLimits

0xaafd,	// (0x0004a77f) call_video_uplink_pane

0x17a4,	// (0x00041426) main_pane_ParamLimits

0x17a4,	// (0x00041426) main_pane

0x5521,	// (0x000451a3) context_pane

0x5534,	// (0x000451b6) navi_pane

0x5564,	// (0x000451e6) popup_cale_events_window_ParamLimits

0x5564,	// (0x000451e6) popup_cale_events_window

0x557c,	// (0x000451fe) popup_mup_playback_window

0x5584,	// (0x00045206) signal_pane

0xdf84,	// (0x0004dc06) main_browser_pane

0xe9e0,	// (0x0004e662) main_burst_pane

0x51d2,	// (0x00044e54) main_calc_pane

0xe9e0,	// (0x0004e662) main_cale_day_pane

0xdf84,	// (0x0004dc06) main_cale_month_pane

0xe9e0,	// (0x0004e662) main_cale_week_pane

0xe9e0,	// (0x0004e662) main_call_pane

0xdc5e,	// (0x0004d8e0) main_call_poc_pane

0xe9e0,	// (0x0004e662) main_camera_pane

0xe9e0,	// (0x0004e662) main_chi_dic_pane

0xe882,	// (0x0004e504) main_clock_pane

0xdc5e,	// (0x0004d8e0) main_fmradio_pane

0xe9e0,	// (0x0004e662) main_graph_messa_pane

0xdc5e,	// (0x0004d8e0) main_help_pane

0xdf84,	// (0x0004dc06) main_im_pane

0xdeb9,	// (0x0004db3b) main_image_pane_ParamLimits

0xdeb9,	// (0x0004db3b) main_image_pane

0xdc5e,	// (0x0004d8e0) main_location2_pane

0xe9e0,	// (0x0004e662) main_location_pane

0xdc5e,	// (0x0004d8e0) main_messa_pane

0xdc5e,	// (0x0004d8e0) main_mp2_pane

0xe9e0,	// (0x0004e662) main_mp_pane

0xdc5e,	// (0x0004d8e0) main_msg_pane

0xdc5e,	// (0x0004d8e0) main_mup_eq_pane

0xdc5e,	// (0x0004d8e0) main_mup_pane

0xe9e0,	// (0x0004e662) main_notes_pane

0xdc5e,	// (0x0004d8e0) main_pec_pane

0xdc5e,	// (0x0004d8e0) main_phob_pane

0xdc5e,	// (0x0004d8e0) main_pinb_pane

0xdc5e,	// (0x0004d8e0) main_postcard_pane

0xdc5e,	// (0x0004d8e0) main_qdial_pane

0xe9e0,	// (0x0004e662) main_skin_pane

0xdc5e,	// (0x0004d8e0) main_smil2_pane

0xe9e0,	// (0x0004e662) main_smil_pane

0xe9e0,	// (0x0004e662) main_video_pane

0xe9e0,	// (0x0004e662) main_video_tele_pane

0xdeb9,	// (0x0004db3b) main_viewer_pane_ParamLimits

0xdeb9,	// (0x0004db3b) main_viewer_pane

0xe9e0,	// (0x0004e662) main_vorec_pane

0x523e,	// (0x00044ec0) popup_blid_sat_info_window_ParamLimits

0x523e,	// (0x00044ec0) popup_blid_sat_info_window

0x52ae,	// (0x00044f30) popup_dyc_status_message_window_ParamLimits

0x52ae,	// (0x00044f30) popup_dyc_status_message_window

0x52c8,	// (0x00044f4a) popup_grid_large_graphic_window_ParamLimits

0x52c8,	// (0x00044f4a) popup_grid_large_graphic_window

0x53a7,	// (0x00045029) popup_loc_request_window_ParamLimits

0x53a7,	// (0x00045029) popup_loc_request_window

0x54f5,	// (0x00045177) popup_wml_address_window_ParamLimits

0x54f5,	// (0x00045177) popup_wml_address_window

0x4fd7,	// (0x00044c59) call_muted_g1

0x3f7f,	// (0x00043c01) popup_call_audio_conf_window_ParamLimits

0x3f7f,	// (0x00043c01) popup_call_audio_conf_window

0x4fe7,	// (0x00044c69) popup_call_audio_first_window_ParamLimits

0x4fe7,	// (0x00044c69) popup_call_audio_first_window

0x505d,	// (0x00044cdf) popup_call_audio_in_window_ParamLimits

0x505d,	// (0x00044cdf) popup_call_audio_in_window

0x5099,	// (0x00044d1b) popup_call_audio_out_window_ParamLimits

0x5099,	// (0x00044d1b) popup_call_audio_out_window

0x50d3,	// (0x00044d55) popup_call_audio_second_window_ParamLimits

0x50d3,	// (0x00044d55) popup_call_audio_second_window

0x5129,	// (0x00044dab) popup_call_audio_wait_window_ParamLimits

0x5129,	// (0x00044dab) popup_call_audio_wait_window

0x515e,	// (0x00044de0) popup_number_entry_window_ParamLimits

0x515e,	// (0x00044de0) popup_number_entry_window

0xd84b,	// (0x0004d4cd) bg_popup_call_pane_cp05_ParamLimits

0xd84b,	// (0x0004d4cd) bg_popup_call_pane_cp05

0xd86b,	// (0x0004d4ed) popup_number_entry_window_t1

0xd87e,	// (0x0004d500) popup_number_entry_window_t2

0xd890,	// (0x0004d512) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0004ed7d) popup_number_entry_window_t

0xd8a2,	// (0x0004d524) text_title_cp2

0xd8b5,	// (0x0004d537) bg_popup_call_pane_cp_ParamLimits

0xd8b5,	// (0x0004d537) bg_popup_call_pane_cp

0xd8c3,	// (0x0004d545) call_thumbnail_pane

0xd8cb,	// (0x0004d54d) popup_call_audio_in_window_g1_ParamLimits

0xd8cb,	// (0x0004d54d) popup_call_audio_in_window_g1

0xd8d7,	// (0x0004d559) popup_call_audio_in_window_g2_ParamLimits

0xd8d7,	// (0x0004d559) popup_call_audio_in_window_g2

0xd8e3,	// (0x0004d565) popup_call_audio_in_window_g3_ParamLimits

0xd8e3,	// (0x0004d565) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0004ed86) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0004ed86) popup_call_audio_in_window_g

0xd8ef,	// (0x0004d571) popup_call_audio_in_window_t1_ParamLimits

0xd8ef,	// (0x0004d571) popup_call_audio_in_window_t1

0xd90b,	// (0x0004d58d) popup_call_audio_in_window_t2_ParamLimits

0xd90b,	// (0x0004d58d) popup_call_audio_in_window_t2

0xd927,	// (0x0004d5a9) popup_call_audio_in_window_t3_ParamLimits

0xd927,	// (0x0004d5a9) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0004ed8d) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0004ed8d) popup_call_audio_in_window_t

0xd8b5,	// (0x0004d537) bg_popup_call_pane_cp01_ParamLimits

0xd8b5,	// (0x0004d537) bg_popup_call_pane_cp01

0xd8c3,	// (0x0004d545) call_thumbnail_pane_cp02

0xd93a,	// (0x0004d5bc) call_type_pane_cp022

0xd942,	// (0x0004d5c4) popup_call_audio_out_window_g1_ParamLimits

0xd942,	// (0x0004d5c4) popup_call_audio_out_window_g1

0xd954,	// (0x0004d5d6) popup_call_audio_out_window_g2_ParamLimits

0xd954,	// (0x0004d5d6) popup_call_audio_out_window_g2

0xd960,	// (0x0004d5e2) popup_call_audio_out_window_g3_ParamLimits

0xd960,	// (0x0004d5e2) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0004ed94) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0004ed94) popup_call_audio_out_window_g

0xd972,	// (0x0004d5f4) popup_call_audio_out_window_t1_ParamLimits

0xd972,	// (0x0004d5f4) popup_call_audio_out_window_t1

0xd98a,	// (0x0004d60c) popup_call_audio_out_window_t2_ParamLimits

0xd98a,	// (0x0004d60c) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0004ed9b) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0004ed9b) popup_call_audio_out_window_t

0xd99f,	// (0x0004d621) bg_popup_call_pane_ParamLimits

0xd99f,	// (0x0004d621) bg_popup_call_pane

0x1963,	// (0x000415e5) call_thumbnail_pane_cp_ParamLimits

0x1963,	// (0x000415e5) call_thumbnail_pane_cp

0xda23,	// (0x0004d6a5) call_type_pane_cp01_ParamLimits

0xda23,	// (0x0004d6a5) call_type_pane_cp01

0xda67,	// (0x0004d6e9) popup_call_audio_first_window_g1_ParamLimits

0xda67,	// (0x0004d6e9) popup_call_audio_first_window_g1

0xdab3,	// (0x0004d735) popup_call_audio_first_window_g2_ParamLimits

0xdab3,	// (0x0004d735) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0004eda0) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0004eda0) popup_call_audio_first_window_g

0xdaf7,	// (0x0004d779) popup_call_audio_first_window_t1_ParamLimits

0xdaf7,	// (0x0004d779) popup_call_audio_first_window_t1

0xdba3,	// (0x0004d825) popup_call_audio_first_window_t4_ParamLimits

0xdba3,	// (0x0004d825) popup_call_audio_first_window_t4

0xdc2f,	// (0x0004d8b1) popup_call_audio_first_window_t5_ParamLimits

0xdc2f,	// (0x0004d8b1) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0004eda5) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0004eda5) popup_call_audio_first_window_t

0xdc5e,	// (0x0004d8e0) bg_popup_call_pane_cp02

0xdc68,	// (0x0004d8ea) call_type_pane_cp023

0xdc70,	// (0x0004d8f2) popup_call_audio_wait_window_g1

0xdc78,	// (0x0004d8fa) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004edac) popup_call_audio_wait_window_g

0xdc80,	// (0x0004d902) popup_call_audio_wait_window_t3

0xdc8e,	// (0x0004d910) bg_popup_call_pane_cp03_ParamLimits

0xdc8e,	// (0x0004d910) bg_popup_call_pane_cp03

0xdcee,	// (0x0004d970) call_thumbnail_pane_cp011_ParamLimits

0xdcee,	// (0x0004d970) call_thumbnail_pane_cp011

0xdcfa,	// (0x0004d97c) call_type_pane_cp034_ParamLimits

0xdcfa,	// (0x0004d97c) call_type_pane_cp034

0xdd36,	// (0x0004d9b8) popup_call_audio_second_window_g1_ParamLimits

0xdd36,	// (0x0004d9b8) popup_call_audio_second_window_g1

0xdd72,	// (0x0004d9f4) popup_call_audio_second_window_g2_ParamLimits

0xdd72,	// (0x0004d9f4) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0004edb1) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0004edb1) popup_call_audio_second_window_g

0xddae,	// (0x0004da30) popup_call_audio_second_window_t1_ParamLimits

0xddae,	// (0x0004da30) popup_call_audio_second_window_t1

0xde2f,	// (0x0004dab1) popup_call_audio_second_window_t2_ParamLimits

0xde2f,	// (0x0004dab1) popup_call_audio_second_window_t2

0xde65,	// (0x0004dae7) popup_call_audio_second_window_t3_ParamLimits

0xde65,	// (0x0004dae7) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0004edb6) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0004edb6) popup_call_audio_second_window_t

0xdc5e,	// (0x0004d8e0) bg_popup_call_pane_cp04

0xde9b,	// (0x0004db1d) list_conf_pane

0xdea3,	// (0x0004db25) popup_call_audio_conf_window_t1

0xdeb1,	// (0x0004db33) call_thumbnail_pane_g1

0xdeb9,	// (0x0004db3b) bg_pinb_pane_ParamLimits

0xdeb9,	// (0x0004db3b) bg_pinb_pane

0xdec7,	// (0x0004db49) find_pinb_pane

0xded0,	// (0x0004db52) listscroll_pinb_pane_ParamLimits

0xded0,	// (0x0004db52) listscroll_pinb_pane

0xdedf,	// (0x0004db61) pinb_bg_pane_g1

0x1987,	// (0x00041609) pinb_bg_pane_g2

0x1993,	// (0x00041615) pinb_bg_pane_g3

0x199f,	// (0x00041621) pinb_bg_pane_g4

0x19ab,	// (0x0004162d) pinb_bg_pane_g5

0x19b7,	// (0x00041639) pinb_bg_pane_g6

0x19c2,	// (0x00041644) pinb_bg_pane_g7

0x19cd,	// (0x0004164f) pinb_bg_pane_g8

0x19d8,	// (0x0004165a) pinb_bg_pane_g9

0x19e2,	// (0x00041664) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0004edbd) pinb_bg_pane_g

0x19ff,	// (0x00041681) grid_pinb_pane

0x1a0a,	// (0x0004168c) list_pinb_pane

0x1a15,	// (0x00041697) scroll_pane_cp01_ParamLimits

0x1a15,	// (0x00041697) scroll_pane_cp01

0xdee9,	// (0x0004db6b) find_pinb_pane_g1_ParamLimits

0xdee9,	// (0x0004db6b) find_pinb_pane_g1

0xdf01,	// (0x0004db83) find_pinb_pane_t1

0xdf13,	// (0x0004db95) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0004edd7) find_pinb_pane_t

0xdf28,	// (0x0004dbaa) input_focus_pane_cp01_ParamLimits

0xdf28,	// (0x0004dbaa) input_focus_pane_cp01

0x1a27,	// (0x000416a9) cell_pinb_pane_ParamLimits

0x1a27,	// (0x000416a9) cell_pinb_pane

0x1a49,	// (0x000416cb) cell_pinb_pane_g1_ParamLimits

0x1a49,	// (0x000416cb) cell_pinb_pane_g1

0x1a5d,	// (0x000416df) cell_pinb_pane_g2_ParamLimits

0x1a5d,	// (0x000416df) cell_pinb_pane_g2

0xdf34,	// (0x0004dbb6) cell_pinb_pane_g3_ParamLimits

0xdf34,	// (0x0004dbb6) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0004eddc) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0004eddc) cell_pinb_pane_g

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp01

0x1a69,	// (0x000416eb) list_pinb_item_pane_ParamLimits

0x1a69,	// (0x000416eb) list_pinb_item_pane

0xdc5e,	// (0x0004d8e0) list_highlight_pane_cp02

0x1a7c,	// (0x000416fe) list_pinb_item_pane_g1_ParamLimits

0x1a7c,	// (0x000416fe) list_pinb_item_pane_g1

0x1a89,	// (0x0004170b) list_pinb_item_pane_g2_ParamLimits

0x1a89,	// (0x0004170b) list_pinb_item_pane_g2

0x1a95,	// (0x00041717) list_pinb_item_pane_g3_ParamLimits

0x1a95,	// (0x00041717) list_pinb_item_pane_g3

0x1aa6,	// (0x00041728) list_pinb_item_pane_g4_ParamLimits

0x1aa6,	// (0x00041728) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0004ede3) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0004ede3) list_pinb_item_pane_g

0x1ab2,	// (0x00041734) list_pinb_item_pane_t1_ParamLimits

0x1ab2,	// (0x00041734) list_pinb_item_pane_t1

0x1ae7,	// (0x00041769) calc_display_pane

0x1b0d,	// (0x0004178f) calc_paper_pane

0x1b30,	// (0x000417b2) grid_calc_pane

0xdc5e,	// (0x0004d8e0) bg_list_pane_cp01

0x1b5e,	// (0x000417e0) clock_g1

0x1b66,	// (0x000417e8) clock_g2

0x0001,

0xf16a,	// (0x0004edec) clock_g

0x1b6e,	// (0x000417f0) clock_t1_ParamLimits

0x1b6e,	// (0x000417f0) clock_t1

0x1b83,	// (0x00041805) clock_t2_ParamLimits

0x1b83,	// (0x00041805) clock_t2

0x1b95,	// (0x00041817) clock_t3_ParamLimits

0x1b95,	// (0x00041817) clock_t3

0x1ba7,	// (0x00041829) clock_t4_ParamLimits

0x1ba7,	// (0x00041829) clock_t4

0x1bb9,	// (0x0004183b) clock_t5_ParamLimits

0x1bb9,	// (0x0004183b) clock_t5

0x1bce,	// (0x00041850) clock_t6_ParamLimits

0x1bce,	// (0x00041850) clock_t6

0x1be0,	// (0x00041862) clock_t7_ParamLimits

0x1be0,	// (0x00041862) clock_t7

0x1bf2,	// (0x00041874) clock_t8_ParamLimits

0x1bf2,	// (0x00041874) clock_t8

0x1c06,	// (0x00041888) clock_t9_ParamLimits

0x1c06,	// (0x00041888) clock_t9

0x0008,

0xf16f,	// (0x0004edf1) clock_t_ParamLimits

0xf16f,	// (0x0004edf1) clock_t

0xdf40,	// (0x0004dbc2) popup_clock_analogue_window_cp02

0xdf40,	// (0x0004dbc2) popup_clock_digital_window_cp01

0xdf48,	// (0x0004dbca) listscroll_help_pane

0xdc5e,	// (0x0004d8e0) phob_pre_status_pane

0xdf52,	// (0x0004dbd4) grid_qdial_pane

0xdc5e,	// (0x0004d8e0) listscroll_mce_pane

0xdf5c,	// (0x0004dbde) bg_notes_pane

0xdf66,	// (0x0004dbe8) list_notes_pane

0x1c1c,	// (0x0004189e) scroll_pane_cp06

0xdf70,	// (0x0004dbf2) bg_calc_paper_pane

0xab19,	// (0x0004a79b) list_calc_pane

0xdf84,	// (0x0004dc06) bg_calc_display_pane

0x1c27,	// (0x000418a9) calc_display_pane_t1

0x1c39,	// (0x000418bb) calc_display_pane_t2

0xab33,	// (0x0004a7b5) calc_display_pane_t3

0x0002,

0xf182,	// (0x0004ee04) calc_display_pane_t

0x1c4b,	// (0x000418cd) cell_calc_pane_ParamLimits

0x1c4b,	// (0x000418cd) cell_calc_pane

0xdf90,	// (0x0004dc12) bg_calc_paper_pane_g1

0xdf9c,	// (0x0004dc1e) bg_calc_paper_pane_g2

0xdfa8,	// (0x0004dc2a) bg_calc_paper_pane_g3

0xdfb4,	// (0x0004dc36) bg_calc_paper_pane_g4

0xdfc0,	// (0x0004dc42) bg_calc_paper_pane_g5

0x1c86,	// (0x00041908) bg_calc_paper_pane_g6

0x1c99,	// (0x0004191b) bg_calc_paper_pane_g7

0x1cac,	// (0x0004192e) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0004ee0b) bg_calc_paper_pane_g

0x1cbd,	// (0x0004193f) calc_bg_paper_pane_g9

0x1cce,	// (0x00041950) list_calc_item_pane_ParamLimits

0x1cce,	// (0x00041950) list_calc_item_pane

0xdfcc,	// (0x0004dc4e) list_calc_item_pane_g1

0xab45,	// (0x0004a7c7) list_calc_item_pane_t1_ParamLimits

0xab45,	// (0x0004a7c7) list_calc_item_pane_t1

0x1ce2,	// (0x00041964) list_calc_item_pane_t2_ParamLimits

0x1ce2,	// (0x00041964) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0004ee1c) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0004ee1c) list_calc_item_pane_t

0xdfd9,	// (0x0004dc5b) cell_calc_pane_g1

0xdfe3,	// (0x0004dc65) grid_highlight_pane_cp02

0xe005,	// (0x0004dc87) bg_calc_display_pane_g1

0xab57,	// (0x0004a7d9) bg_calc_display_pane_g2

0xe00e,	// (0x0004dc90) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0004ee26) bg_calc_display_pane_g

0x1d14,	// (0x00041996) cell_qdial_pane_ParamLimits

0x1d14,	// (0x00041996) cell_qdial_pane

0x1d2a,	// (0x000419ac) cell_qdial_pane_g1_ParamLimits

0x1d2a,	// (0x000419ac) cell_qdial_pane_g1

0x1d40,	// (0x000419c2) cell_qdial_pane_g2_ParamLimits

0x1d40,	// (0x000419c2) cell_qdial_pane_g2

0xe017,	// (0x0004dc99) cell_qdial_pane_g3_ParamLimits

0xe017,	// (0x0004dc99) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0004ee2d) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0004ee2d) cell_qdial_pane_g

0x1d66,	// (0x000419e8) cell_qdial_pane_t1_ParamLimits

0x1d66,	// (0x000419e8) cell_qdial_pane_t1

0x1d7e,	// (0x00041a00) cell_qdial_pane_t2_ParamLimits

0x1d7e,	// (0x00041a00) cell_qdial_pane_t2

0x1d91,	// (0x00041a13) cell_qdial_pane_t3_ParamLimits

0x1d91,	// (0x00041a13) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0004ee36) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0004ee36) cell_qdial_pane_t

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp04

0xe023,	// (0x0004dca5) thumbnail_qdial_pane_ParamLimits

0xe023,	// (0x0004dca5) thumbnail_qdial_pane

0xe07f,	// (0x0004dd01) list_help_pane

0xe088,	// (0x0004dd0a) scroll_pane_cp02

0x1da4,	// (0x00041a26) help_list_pane_t1_ParamLimits

0x1da4,	// (0x00041a26) help_list_pane_t1

0xab61,	// (0x0004a7e3) bg_notes_pane_g2

0xab69,	// (0x0004a7eb) bg_notes_pane_g3

0xab71,	// (0x0004a7f3) notes_bg_pane_g1

0xab79,	// (0x0004a7fb) notes_bg_pane_g4

0xab81,	// (0x0004a803) notes_bg_pane_g5

0xab89,	// (0x0004a80b) notes_bg_pane_g6

0xab91,	// (0x0004a813) notes_bg_pane_g7

0xab99,	// (0x0004a81b) notes_bg_pane_g8

0xaba1,	// (0x0004a823) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0004ee54) notes_bg_pane_g

0x1dc8,	// (0x00041a4a) list_notes_text_pane_ParamLimits

0x1dc8,	// (0x00041a4a) list_notes_text_pane

0xe091,	// (0x0004dd13) list_notes_text_pane_g1

0xaba9,	// (0x0004a82b) list_notes_text_pane_t1

0xdf84,	// (0x0004dc06) listscroll_cale_week_pane

0x1dfc,	// (0x00041a7e) bg_cale_heading_pane

0xe0ab,	// (0x0004dd2d) bg_cale_pane_cp01

0x1e18,	// (0x00041a9a) cale_week_corner_pane

0x1e2e,	// (0x00041ab0) cale_week_day_heading_pane

0x1e4a,	// (0x00041acc) cale_week_scroll_pane_g1

0x1e63,	// (0x00041ae5) cale_week_scroll_pane_g2

0x1e74,	// (0x00041af6) cale_week_scroll_pane_g3

0x1e85,	// (0x00041b07) cale_week_scroll_pane_g4

0x1e96,	// (0x00041b18) cale_week_scroll_pane_g5

0x1ea7,	// (0x00041b29) cale_week_scroll_pane_g6

0x1eb8,	// (0x00041b3a) cale_week_scroll_pane_g7

0x1ec9,	// (0x00041b4b) cale_week_scroll_pane_g8

0x1eda,	// (0x00041b5c) cale_week_scroll_pane_g9

0x1eeb,	// (0x00041b6d) cale_week_scroll_pane_g10

0x1efc,	// (0x00041b7e) cale_week_scroll_pane_g11

0x1f0d,	// (0x00041b8f) cale_week_scroll_pane_g12

0x1f1e,	// (0x00041ba0) cale_week_scroll_pane_g13

0x1f37,	// (0x00041bb9) cale_week_scroll_pane_g14

0x1f50,	// (0x00041bd2) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0004ee63) cale_week_scroll_pane_g

0x1f69,	// (0x00041beb) cale_week_time_pane

0x1f7a,	// (0x00041bfc) grid_cale_week_pane

0x1f95,	// (0x00041c17) scroll_pane_cp08

0x1fad,	// (0x00041c2f) cell_cale_week_pane_ParamLimits

0x1fad,	// (0x00041c2f) cell_cale_week_pane

0x1ff5,	// (0x00041c77) cale_week_day_heading_pane_t1

0x2009,	// (0x00041c8b) cale_week_day_heading_pane_t2

0x201d,	// (0x00041c9f) cale_week_day_heading_pane_t3

0x2031,	// (0x00041cb3) cale_week_day_heading_pane_t4

0x2045,	// (0x00041cc7) cale_week_day_heading_pane_t5

0x2059,	// (0x00041cdb) cale_week_day_heading_pane_t6

0x206d,	// (0x00041cef) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0004ee82) cale_week_day_heading_pane_t

0xe0d6,	// (0x0004dd58) bg_cale_side_pane

0x2081,	// (0x00041d03) cale_week_time_pane_t1

0x2099,	// (0x00041d1b) cale_week_time_pane_t2

0x20b1,	// (0x00041d33) cale_week_time_pane_t3

0x20c9,	// (0x00041d4b) cale_week_time_pane_t4

0x20e1,	// (0x00041d63) cale_week_time_pane_t5

0x20f9,	// (0x00041d7b) cale_week_time_pane_t6

0x2111,	// (0x00041d93) cale_week_time_pane_t7

0x212d,	// (0x00041daf) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0004ee91) cale_week_time_pane_t

0x214d,	// (0x00041dcf) cell_cale_week_pane_g2

0x215e,	// (0x00041de0) cell_cale_week_pane_g3_ParamLimits

0x215e,	// (0x00041de0) cell_cale_week_pane_g3

0xe0e4,	// (0x0004dd66) grid_highlight_pane_cp07

0xe0ec,	// (0x0004dd6e) listscroll_gms_pane

0xe0f6,	// (0x0004dd78) grid_gms_pane

0xe0ff,	// (0x0004dd81) listscroll_gms_pane_g1

0xe107,	// (0x0004dd89) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0004eea2) listscroll_gms_pane_g

0x2176,	// (0x00041df8) scroll_pane_cp010

0x2181,	// (0x00041e03) cell_gms_pane_ParamLimits

0x2181,	// (0x00041e03) cell_gms_pane

0x219b,	// (0x00041e1d) cell_gms_pane_g1

0xe10f,	// (0x0004dd91) cell_gms_pane_g2

0xe117,	// (0x0004dd99) cell_gms_pane_g3

0xe120,	// (0x0004dda2) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0004eea7) cell_gms_pane_g

0xe129,	// (0x0004ddab) grid_highlight_pane_cp09

0x4f5f,	// (0x00044be1) phob_pre_status_pane_g1

0x4f67,	// (0x00044be9) phob_pre_status_pane_g2

0x4f6f,	// (0x00044bf1) phob_pre_status_pane_g3

0x4f77,	// (0x00044bf9) phob_pre_status_pane_g4

0x0004,

0xf55d,	// (0x0004f1df) phob_pre_status_pane_g

0x4f87,	// (0x00044c09) phob_pre_status_pane_t1

0x4f97,	// (0x00044c19) phob_pre_status_pane_t2

0x4fa7,	// (0x00044c29) phob_pre_status_pane_t3

0x0002,

0xf568,	// (0x0004f1ea) phob_pre_status_pane_t

0xdc5e,	// (0x0004d8e0) bg_list_pane_cp05

0x21ab,	// (0x00041e2d) grid_vorec_pane

0xabb7,	// (0x0004a839) vorec_t1

0xabc5,	// (0x0004a847) vorec_t2

0xabd3,	// (0x0004a855) vorec_t3

0xabe1,	// (0x0004a863) vorec_t4

0xabef,	// (0x0004a871) vorec_t5

0xabfd,	// (0x0004a87f) vorec_t6

0x0006,

0xf22e,	// (0x0004eeb0) vorec_t

0xac19,	// (0x0004a89b) wait_bar_pane_cp01

0x21b5,	// (0x00041e37) cell_vorec_pane_ParamLimits

0x21b5,	// (0x00041e37) cell_vorec_pane

0xe131,	// (0x0004ddb3) cell_vorec_pane_g1

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp05

0x21e0,	// (0x00041e62) cams_zoom_pane

0x21ef,	// (0x00041e71) image_vga_pane

0x2209,	// (0x00041e8b) main_camera_pane_g1

0x221b,	// (0x00041e9d) main_camera_pane_g2

0x222b,	// (0x00041ead) main_camera_pane_g3

0x223f,	// (0x00041ec1) main_camera_pane_g4

0x2253,	// (0x00041ed5) main_camera_pane_g5

0x2267,	// (0x00041ee9) main_camera_pane_g6

0x227b,	// (0x00041efd) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0004eebf) main_camera_pane_g

0x228f,	// (0x00041f11) main_camera_pane_t1

0x22a5,	// (0x00041f27) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0004eed0) main_camera_pane_t

0x22e3,	// (0x00041f65) cams_zoom_pane_cp_ParamLimits

0x22e3,	// (0x00041f65) cams_zoom_pane_cp

0x230b,	// (0x00041f8d) image_cif_pane_ParamLimits

0x230b,	// (0x00041f8d) image_cif_pane

0x2346,	// (0x00041fc8) image_subqcif_pane

0x2350,	// (0x00041fd2) main_video_pane_g1_ParamLimits

0x2350,	// (0x00041fd2) main_video_pane_g1

0x2374,	// (0x00041ff6) main_video_pane_g2_ParamLimits

0x2374,	// (0x00041ff6) main_video_pane_g2

0x23aa,	// (0x0004202c) main_video_pane_g3_ParamLimits

0x23aa,	// (0x0004202c) main_video_pane_g3

0x23d8,	// (0x0004205a) main_video_pane_g4_ParamLimits

0x23d8,	// (0x0004205a) main_video_pane_g4

0x2406,	// (0x00042088) main_video_pane_g5_ParamLimits

0x2406,	// (0x00042088) main_video_pane_g5

0xe147,	// (0x0004ddc9) main_video_pane_g6_ParamLimits

0xe147,	// (0x0004ddc9) main_video_pane_g6

0x0006,

0xf253,	// (0x0004eed5) main_video_pane_g_ParamLimits

0xf253,	// (0x0004eed5) main_video_pane_g

0x242f,	// (0x000420b1) main_video_pane_t1_ParamLimits

0x242f,	// (0x000420b1) main_video_pane_t1

0xe161,	// (0x0004dde3) cams_zoom_pane_g1

0xe16a,	// (0x0004ddec) cams_zoom_pane_g2

0xe173,	// (0x0004ddf5) cams_zoom_pane_g3

0xe17c,	// (0x0004ddfe) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0004eee4) cams_zoom_pane_g

0x248c,	// (0x0004210e) grid_cams_pane

0x24a6,	// (0x00042128) linegrid_cams_pane

0x24ba,	// (0x0004213c) cell_cams_pane_ParamLimits

0x24ba,	// (0x0004213c) cell_cams_pane

0xe185,	// (0x0004de07) cams_burst_image_pane

0xe18d,	// (0x0004de0f) cell_cams_pane_g1

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp03

0xdfd9,	// (0x0004dc5b) mp_bg_pane_g1

0xdc5e,	// (0x0004d8e0) bg_list_pane_cp03

0x4e92,	// (0x00044b14) bg_mp_pane

0x4e9a,	// (0x00044b1c) grid_mp_pane

0x4ea2,	// (0x00044b24) media_player_g1

0x4eac,	// (0x00044b2e) media_player_t1

0x4eba,	// (0x00044b3c) media_player_t2

0x4ec8,	// (0x00044b4a) media_player_t3

0x4ed6,	// (0x00044b58) media_player_t4

0x4ee4,	// (0x00044b66) media_player_t5

0x4ef2,	// (0x00044b74) media_player_t6

0x4f00,	// (0x00044b82) media_player_t7

0x0006,

0xf547,	// (0x0004f1c9) media_player_t

0x4f0e,	// (0x00044b90) wait_bar_pane_cp02

0xf52c,	// (0x0004f1ae) main_usb_pane_t

0x4f56,	// (0x00044bd8) cell_mp_pane

0xdfd9,	// (0x0004dc5b) cell_mp_pane_g1

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp06

0xe195,	// (0x0004de17) grid_skin_colour_pane

0xe19d,	// (0x0004de1f) list_highlight_pane_cp03

0x24dc,	// (0x0004215e) skin_g1

0xe1a5,	// (0x0004de27) skin_t1

0xe1b4,	// (0x0004de36) skin_t2

0x0001,

0x0020,	// (0x0003fca2) skin_t

0x24e6,	// (0x00042168) cell_skin_colour_pane_ParamLimits

0x24e6,	// (0x00042168) cell_skin_colour_pane

0xe1c2,	// (0x0004de44) cell_skin_colour_pane_g1

0x2542,	// (0x000421c4) call_video_g1_ParamLimits

0x2542,	// (0x000421c4) call_video_g1

0x255e,	// (0x000421e0) call_video_g2_ParamLimits

0x255e,	// (0x000421e0) call_video_g2

0x0001,

0xf297,	// (0x0004ef19) call_video_g_ParamLimits

0xf297,	// (0x0004ef19) call_video_g

0x2594,	// (0x00042216) call_video_uplink_pane_cp1_ParamLimits

0x2594,	// (0x00042216) call_video_uplink_pane_cp1

0xe1dc,	// (0x0004de5e) call_video_uplink_pane_cp2

0x2614,	// (0x00042296) video_down_crop_pane_ParamLimits

0x2614,	// (0x00042296) video_down_crop_pane

0x26da,	// (0x0004235c) video_down_pane_ParamLimits

0x26da,	// (0x0004235c) video_down_pane

0xe1e4,	// (0x0004de66) video_down_subqcif_pane_ParamLimits

0xe1e4,	// (0x0004de66) video_down_subqcif_pane

0xe1fe,	// (0x0004de80) video_down_subqcif_pane_cp_ParamLimits

0xe1fe,	// (0x0004de80) video_down_subqcif_pane_cp

0xe224,	// (0x0004dea6) im_reading_pane_ParamLimits

0xe224,	// (0x0004dea6) im_reading_pane

0x27a6,	// (0x00042428) im_writing_pane_ParamLimits

0x27a6,	// (0x00042428) im_writing_pane

0x27c4,	// (0x00042446) im_reading_pane_t1

0xe23e,	// (0x0004dec0) list_im_pane

0xe24f,	// (0x0004ded1) scroll_pane_cp07

0x2803,	// (0x00042485) im_writing_pane_t1_ParamLimits

0x2803,	// (0x00042485) im_writing_pane_t1

0xe268,	// (0x0004deea) im_writing_pane_t2_ParamLimits

0xe268,	// (0x0004deea) im_writing_pane_t2

0x0001,

0xf2a1,	// (0x0004ef23) im_writing_pane_t_ParamLimits

0xf2a1,	// (0x0004ef23) im_writing_pane_t

0xdc5e,	// (0x0004d8e0) input_focus_pane_cp04

0xdc5e,	// (0x0004d8e0) input_focus_pane_cp05

0x2818,	// (0x0004249a) list_im_single_pane_ParamLimits

0x2818,	// (0x0004249a) list_im_single_pane

0x2831,	// (0x000424b3) list_single_im_pane_t1

0x4f16,	// (0x00044b98) blid_accuracy_pane

0x4f1e,	// (0x00044ba0) blid_compass_pane

0x4f28,	// (0x00044baa) main_location_t1

0x4f38,	// (0x00044bba) main_location_t2

0x4f48,	// (0x00044bca) main_location_t3

0x0002,

0xf556,	// (0x0004f1d8) main_location_t

0xdc5e,	// (0x0004d8e0) aid_levels_location

0xdfd9,	// (0x0004dc5b) blid_accuracy_pane_g1

0xdfd9,	// (0x0004dc5b) blid_accuracy_pane_g2

0x0001,

0x0091,	// (0x0003fd13) blid_accuracy_pane_g

0xe2b0,	// (0x0004df32) wml_content_pane

0xe2ee,	// (0x0004df70) wml_button_pane_ParamLimits

0xe2ee,	// (0x0004df70) wml_button_pane

0x2840,	// (0x000424c2) wml_list_single_large_pane_ParamLimits

0x2840,	// (0x000424c2) wml_list_single_large_pane

0x2859,	// (0x000424db) wml_list_single_medium_pane_ParamLimits

0x2859,	// (0x000424db) wml_list_single_medium_pane

0x2873,	// (0x000424f5) wml_list_single_small_pane_ParamLimits

0x2873,	// (0x000424f5) wml_list_single_small_pane

0xe302,	// (0x0004df84) wml_selection_box_pane_ParamLimits

0xe302,	// (0x0004df84) wml_selection_box_pane

0xe315,	// (0x0004df97) wml_list_single_pane_t1

0xe324,	// (0x0004dfa6) wml_list_single_medium_pane_t1

0xe333,	// (0x0004dfb5) wml_list_single_large_pane_t1

0xe342,	// (0x0004dfc4) input_focus_pane_cp02_ParamLimits

0xe342,	// (0x0004dfc4) input_focus_pane_cp02

0xe355,	// (0x0004dfd7) wml_selection_box_pane_g1

0xe35e,	// (0x0004dfe0) wml_selection_box_pane_t1_ParamLimits

0xe35e,	// (0x0004dfe0) wml_selection_box_pane_t1

0xdeb9,	// (0x0004db3b) bg_wml_button_pane_ParamLimits

0xdeb9,	// (0x0004db3b) bg_wml_button_pane

0xe376,	// (0x0004dff8) wml_button_pane_g1

0xe37e,	// (0x0004e000) wml_button_pane_t1

0xe376,	// (0x0004dff8) wml_button_bg_pane_g1

0xe38e,	// (0x0004e010) wml_button_bg_pane_g2

0xe396,	// (0x0004e018) wml_button_bg_pane_g3

0xe39e,	// (0x0004e020) wml_button_bg_pane_g4

0xe3a6,	// (0x0004e028) wml_button_bg_pane_g5

0xe3ae,	// (0x0004e030) wml_button_bg_pane_g6

0xe3b6,	// (0x0004e038) wml_button_bg_pane_g7

0xe3be,	// (0x0004e040) wml_button_bg_pane_g8

0xe3c6,	// (0x0004e048) wml_button_bg_pane_g9

0x0008,

0x0034,	// (0x0003fcb6) wml_button_bg_pane_g

0x2892,	// (0x00042514) bg_list_pane_cp02

0xe3ce,	// (0x0004e050) mce_header_pane_ParamLimits

0xe3ce,	// (0x0004e050) mce_header_pane

0xe3e4,	// (0x0004e066) mce_icon_pane

0xe3e4,	// (0x0004e066) mce_image_pane

0xe3ed,	// (0x0004e06f) mce_text_pane_ParamLimits

0xe3ed,	// (0x0004e06f) mce_text_pane

0x289c,	// (0x0004251e) scroll_pane_cp03

0xe2e6,	// (0x0004df68) scroll_pane_cp04

0xe400,	// (0x0004e082) scroll_pane_cp05_ParamLimits

0xe400,	// (0x0004e082) scroll_pane_cp05

0x28a6,	// (0x00042528) mce_header_field_pane_ParamLimits

0x28a6,	// (0x00042528) mce_header_field_pane

0x28bf,	// (0x00042541) mce_header_field_pane_2_ParamLimits

0x28bf,	// (0x00042541) mce_header_field_pane_2

0x28d5,	// (0x00042557) mce_header_field_pane_3

0x28dd,	// (0x0004255f) list_single_mce_message_pane_ParamLimits

0x28dd,	// (0x0004255f) list_single_mce_message_pane

0x28f9,	// (0x0004257b) list_single_mce_smart_pane_ParamLimits

0x28f9,	// (0x0004257b) list_single_mce_smart_pane

0xe40c,	// (0x0004e08e) input_focus_pane_cp03

0xe415,	// (0x0004e097) list_header_data_pane

0x2920,	// (0x000425a2) mce_header_field_pane_t1

0x2930,	// (0x000425b2) list_single_mce_header_pane_ParamLimits

0x2930,	// (0x000425b2) list_single_mce_header_pane

0xe41d,	// (0x0004e09f) list_single_mce_header_pane_t1

0xe42c,	// (0x0004e0ae) list_single_mce_message_pane_g1

0xe434,	// (0x0004e0b6) list_single_mce_message_pane_t1

0x2962,	// (0x000425e4) bg_cale_heading_pane_cp01_ParamLimits

0x2962,	// (0x000425e4) bg_cale_heading_pane_cp01

0xe442,	// (0x0004e0c4) bg_cale_pane_cp02_ParamLimits

0xe442,	// (0x0004e0c4) bg_cale_pane_cp02

0x2995,	// (0x00042617) cale_month_corner_pane

0x29ab,	// (0x0004262d) cale_month_day_heading_pane_ParamLimits

0x29ab,	// (0x0004262d) cale_month_day_heading_pane

0x29de,	// (0x00042660) cale_month_pane_g1_ParamLimits

0x29de,	// (0x00042660) cale_month_pane_g1

0x2a0a,	// (0x0004268c) cale_month_pane_g2_ParamLimits

0x2a0a,	// (0x0004268c) cale_month_pane_g2

0x2a2b,	// (0x000426ad) cale_month_pane_g3_ParamLimits

0x2a2b,	// (0x000426ad) cale_month_pane_g3

0x2a67,	// (0x000426e9) cale_month_pane_g4_ParamLimits

0x2a67,	// (0x000426e9) cale_month_pane_g4

0x2aa3,	// (0x00042725) cale_month_pane_g5_ParamLimits

0x2aa3,	// (0x00042725) cale_month_pane_g5

0x2adf,	// (0x00042761) cale_month_pane_g6_ParamLimits

0x2adf,	// (0x00042761) cale_month_pane_g6

0x2b1b,	// (0x0004279d) cale_month_pane_g7_ParamLimits

0x2b1b,	// (0x0004279d) cale_month_pane_g7

0x2b57,	// (0x000427d9) cale_month_pane_g8_ParamLimits

0x2b57,	// (0x000427d9) cale_month_pane_g8

0x2b93,	// (0x00042815) cale_month_pane_g9_ParamLimits

0x2b93,	// (0x00042815) cale_month_pane_g9

0x2bc9,	// (0x0004284b) cale_month_pane_g10_ParamLimits

0x2bc9,	// (0x0004284b) cale_month_pane_g10

0x2bf3,	// (0x00042875) cale_month_pane_g11_ParamLimits

0x2bf3,	// (0x00042875) cale_month_pane_g11

0x2c1d,	// (0x0004289f) cale_month_pane_g12_ParamLimits

0x2c1d,	// (0x0004289f) cale_month_pane_g12

0x2c4b,	// (0x000428cd) cale_month_pane_g13_ParamLimits

0x2c4b,	// (0x000428cd) cale_month_pane_g13

0x000c,

0xf2a6,	// (0x0004ef28) cale_month_pane_g_ParamLimits

0xf2a6,	// (0x0004ef28) cale_month_pane_g

0x2c79,	// (0x000428fb) cale_month_week_pane

0x2c8a,	// (0x0004290c) grid_cale_month_pane_ParamLimits

0x2c8a,	// (0x0004290c) grid_cale_month_pane

0x2cb8,	// (0x0004293a) cale_month_day_heading_pane_t1

0x2d16,	// (0x00042998) cale_month_day_heading_pane_t2

0x2d7b,	// (0x000429fd) cale_month_day_heading_pane_t3

0x2de0,	// (0x00042a62) cale_month_day_heading_pane_t4

0x2e45,	// (0x00042ac7) cale_month_day_heading_pane_t5

0x2eaa,	// (0x00042b2c) cale_month_day_heading_pane_t6

0x2f0f,	// (0x00042b91) cale_month_day_heading_pane_t7

0x0006,

0xf2c1,	// (0x0004ef43) cale_month_day_heading_pane_t

0xe0d6,	// (0x0004dd58) bg_cale_side_pane_cp01

0x2f74,	// (0x00042bf6) cale_month_week_pane_t1

0x2f8b,	// (0x00042c0d) cale_month_week_pane_t2

0x2fa2,	// (0x00042c24) cale_month_week_pane_t3

0x2fb9,	// (0x00042c3b) cale_month_week_pane_t4

0x2fd0,	// (0x00042c52) cale_month_week_pane_t5

0x2fe7,	// (0x00042c69) cale_month_week_pane_t6

0x0005,

0xf2d0,	// (0x0004ef52) cale_month_week_pane_t

0x3006,	// (0x00042c88) cell_cale_month_pane_ParamLimits

0x3006,	// (0x00042c88) cell_cale_month_pane

0xad09,	// (0x0004a98b) cell_cale_month_pane_g1

0x30b4,	// (0x00042d36) cell_cale_month_pane_t1_ParamLimits

0x30b4,	// (0x00042d36) cell_cale_month_pane_t1

0xe0e4,	// (0x0004dd66) grid_highlight_pane_cp08

0xdfd9,	// (0x0004dc5b) main_smil_g1

0x30d0,	// (0x00042d52) smil_status_pane

0xe477,	// (0x0004e0f9) smil_text_pane

0x4d1d,	// (0x0004499f) bg_popup_call3_rect_pane_g8

0x4d25,	// (0x000449a7) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ea,	// (0x0004f16c) bg_popup_call3_rect_pane_g

0x5678,	// (0x000452fa) smil_status_volume_pane_g1

0xe481,	// (0x0004e103) smil_status_pane_t1

0xae7e,	// (0x0004ab00) volume_smil_pane

0xe498,	// (0x0004e11a) list_smil_text_pane

0x30e5,	// (0x00042d67) scroll_pane_cp011

0x30f0,	// (0x00042d72) smil_text_list_pane_t1_ParamLimits

0x30f0,	// (0x00042d72) smil_text_list_pane_t1

0xad15,	// (0x0004a997) aid_volume_smil_ParamLimits

0xad15,	// (0x0004a997) aid_volume_smil

0xdfd9,	// (0x0004dc5b) smil_volume_pane_g1

0xdfd9,	// (0x0004dc5b) smil_volume_pane_g2

0x0001,

0x0091,	// (0x0003fd13) smil_volume_pane_g

0xdf84,	// (0x0004dc06) listscroll_cale_day_pane

0xe4a2,	// (0x0004e124) bg_cale_pane

0xe4ba,	// (0x0004e13c) list_cale_pane

0xe4cb,	// (0x0004e14d) scroll_pane_cp09

0xe4dc,	// (0x0004e15e) cale_bg_pane_g1

0xe4e4,	// (0x0004e166) cale_bg_pane_g2

0xe4ec,	// (0x0004e16e) cale_bg_pane_g3

0xe4f4,	// (0x0004e176) cale_bg_pane_g4

0xe4fc,	// (0x0004e17e) cale_bg_pane_g5

0xe504,	// (0x0004e186) cale_bg_pane_g6

0xe50c,	// (0x0004e18e) cale_bg_pane_g7

0xe514,	// (0x0004e196) cale_bg_pane_g8

0xe51c,	// (0x0004e19e) cale_bg_pane_g9

0x0008,

0x0096,	// (0x0003fd18) cale_bg_pane_g

0x3145,	// (0x00042dc7) list_cale_time_pane_ParamLimits

0x3145,	// (0x00042dc7) list_cale_time_pane

0x315a,	// (0x00042ddc) list_cale_time_pane_g1_ParamLimits

0x315a,	// (0x00042ddc) list_cale_time_pane_g1

0xe524,	// (0x0004e1a6) list_cale_time_pane_g2_ParamLimits

0xe524,	// (0x0004e1a6) list_cale_time_pane_g2

0x3166,	// (0x00042de8) list_cale_time_pane_g3_ParamLimits

0x3166,	// (0x00042de8) list_cale_time_pane_g3

0x3174,	// (0x00042df6) list_cale_time_pane_g4_ParamLimits

0x3174,	// (0x00042df6) list_cale_time_pane_g4

0x3182,	// (0x00042e04) list_cale_time_pane_g5_ParamLimits

0x3182,	// (0x00042e04) list_cale_time_pane_g5

0x0005,

0xf2f0,	// (0x0004ef72) list_cale_time_pane_g_ParamLimits

0xf2f0,	// (0x0004ef72) list_cale_time_pane_g

0x3190,	// (0x00042e12) list_cale_time_pane_t1_ParamLimits

0x3190,	// (0x00042e12) list_cale_time_pane_t1

0x31b8,	// (0x00042e3a) list_cale_time_pane_t2_ParamLimits

0x31b8,	// (0x00042e3a) list_cale_time_pane_t2

0x34d4,	// (0x00043156) aid_blid_cardinal_pane

0x3516,	// (0x00043198) compass_pane_t4

0x31e0,	// (0x00042e62) list_cale_time_pane_t4_ParamLimits

0x31e0,	// (0x00042e62) list_cale_time_pane_t4

0x3524,	// (0x000431a6) compass_pane_t5

0x3534,	// (0x000431b6) compass_pane_t6

0x3542,	// (0x000431c4) compass_pane_t7

0xe932,	// (0x0004e5b4) navi_pane_cc_t1

0xea87,	// (0x0004e709) aid_phob_thumbnail_center_pane

0x3c13,	// (0x00043895) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fd,	// (0x0004ef7f) list_cale_time_pane_t_ParamLimits

0xf2fd,	// (0x0004ef7f) list_cale_time_pane_t

0xd8b5,	// (0x0004d537) bg_popup_window_pane_cp02_ParamLimits

0xd8b5,	// (0x0004d537) bg_popup_window_pane_cp02

0xe53e,	// (0x0004e1c0) heading_pane_cp01_ParamLimits

0xe53e,	// (0x0004e1c0) heading_pane_cp01

0xe54a,	// (0x0004e1cc) loc_req_pane_ParamLimits

0xe54a,	// (0x0004e1cc) loc_req_pane

0xe55a,	// (0x0004e1dc) loc_type_pane_ParamLimits

0xe55a,	// (0x0004e1dc) loc_type_pane

0xe56c,	// (0x0004e1ee) loc_type_pane_t1_ParamLimits

0xe56c,	// (0x0004e1ee) loc_type_pane_t1

0xe57e,	// (0x0004e200) loc_type_pane_t2_ParamLimits

0xe57e,	// (0x0004e200) loc_type_pane_t2

0xe590,	// (0x0004e212) loc_type_pane_t3_ParamLimits

0xe590,	// (0x0004e212) loc_type_pane_t3

0x0002,

0x00bd,	// (0x0003fd3f) loc_type_pane_t_ParamLimits

0x00bd,	// (0x0003fd3f) loc_type_pane_t

0xe5a2,	// (0x0004e224) list_loc_req_pane

0xe5ac,	// (0x0004e22e) scroll_pane_cp012

0x3208,	// (0x00042e8a) list_single_loc_request_popup_menu_pane_ParamLimits

0x3208,	// (0x00042e8a) list_single_loc_request_popup_menu_pane

0xe5b7,	// (0x0004e239) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe5b7,	// (0x0004e239) list_single_loc_request_popup_menu_pane_g1

0xe5c3,	// (0x0004e245) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe5c3,	// (0x0004e245) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x00c4,	// (0x0003fd46) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x00c4,	// (0x0003fd46) list_single_loc_request_popup_menu_pane_g

0xe5cf,	// (0x0004e251) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe5cf,	// (0x0004e251) list_single_loc_request_popup_menu_pane_t1

0xdeb9,	// (0x0004db3b) bg_popup_window_pane_cp03_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_window_pane_cp03

0xefb7,	// (0x0004ec39) heading_loc_req_pane_ParamLimits

0xefb7,	// (0x0004ec39) heading_loc_req_pane

0x3215,	// (0x00042e97) popup_dyc_status_message_window_g1_ParamLimits

0x3215,	// (0x00042e97) popup_dyc_status_message_window_g1

0x3229,	// (0x00042eab) popup_dyc_status_message_window_t1_ParamLimits

0x3229,	// (0x00042eab) popup_dyc_status_message_window_t1

0x323e,	// (0x00042ec0) popup_dyc_status_message_window_t2_ParamLimits

0x323e,	// (0x00042ec0) popup_dyc_status_message_window_t2

0x3253,	// (0x00042ed5) popup_dyc_status_message_window_t3_ParamLimits

0x3253,	// (0x00042ed5) popup_dyc_status_message_window_t3

0x0002,

0xf304,	// (0x0004ef86) popup_dyc_status_message_window_t_ParamLimits

0xf304,	// (0x0004ef86) popup_dyc_status_message_window_t

0xdc5e,	// (0x0004d8e0) bg_heading_pane_cp01

0xe5e5,	// (0x0004e267) heading_loc_req_pane_g1

0xe5ed,	// (0x0004e26f) heading_loc_req_pane_g2

0xe5f5,	// (0x0004e277) heading_loc_req_pane_g3

0x0002,

0x00d0,	// (0x0003fd52) heading_loc_req_pane_g

0xe5fd,	// (0x0004e27f) heading_loc_req_pane_t1

0xe60d,	// (0x0004e28f) bg_popup_sub_pane_cp01_ParamLimits

0xe60d,	// (0x0004e28f) bg_popup_sub_pane_cp01

0xe61b,	// (0x0004e29d) popup_cale_events_window_g1_ParamLimits

0xe61b,	// (0x0004e29d) popup_cale_events_window_g1

0xe63b,	// (0x0004e2bd) popup_cale_events_window_g2_ParamLimits

0xe63b,	// (0x0004e2bd) popup_cale_events_window_g2

0x0001,

0x0104,	// (0x0003fd86) popup_cale_events_window_g_ParamLimits

0x0104,	// (0x0003fd86) popup_cale_events_window_g

0xe65b,	// (0x0004e2dd) popup_cale_events_window_t1_ParamLimits

0xe65b,	// (0x0004e2dd) popup_cale_events_window_t1

0xe66d,	// (0x0004e2ef) popup_cale_events_window_t2_ParamLimits

0xe66d,	// (0x0004e2ef) popup_cale_events_window_t2

0xe6ab,	// (0x0004e32d) popup_cale_events_window_t3_ParamLimits

0xe6ab,	// (0x0004e32d) popup_cale_events_window_t3

0xe6e5,	// (0x0004e367) popup_cale_events_window_t4_ParamLimits

0xe6e5,	// (0x0004e367) popup_cale_events_window_t4

0x0003,

0x0109,	// (0x0003fd8b) popup_cale_events_window_t_ParamLimits

0x0109,	// (0x0003fd8b) popup_cale_events_window_t

0x3287,	// (0x00042f09) call_type_pane

0x3297,	// (0x00042f19) popup_call_status_window_g1

0x32ab,	// (0x00042f2d) popup_call_status_window_g2

0x32bf,	// (0x00042f41) popup_call_status_window_g3

0x0002,

0xf338,	// (0x0004efba) popup_call_status_window_g

0xe71b,	// (0x0004e39d) call_type_pane_g1

0xe724,	// (0x0004e3a6) call_type_pane_g2

0x0001,

0xf33f,	// (0x0004efc1) call_type_pane_g

0xdc5e,	// (0x0004d8e0) bg_popup_sub_pane_cp02

0xe72d,	// (0x0004e3af) listscroll_popup_wml_pane

0xe735,	// (0x0004e3b7) list_wml_pane

0xe73f,	// (0x0004e3c1) scroll_pane_cp013

0xe74a,	// (0x0004e3cc) list_single_graphic_popup_wml_pane_ParamLimits

0xe74a,	// (0x0004e3cc) list_single_graphic_popup_wml_pane

0xdfd9,	// (0x0004dc5b) list_single_graphic_popup_wml_pane_g1

0xe75e,	// (0x0004e3e0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf344,	// (0x0004efc6) list_single_graphic_popup_wml_pane_g

0xe766,	// (0x0004e3e8) list_single_graphic_popup_wml_pane_t1

0xe77c,	// (0x0004e3fe) aid_call_pane

0xdeb1,	// (0x0004db33) popup_clock_analogue_window_g1

0xdeb1,	// (0x0004db33) popup_clock_analogue_window_g2

0xadae,	// (0x0004aa30) popup_clock_analogue_window_g3

0xadae,	// (0x0004aa30) popup_clock_analogue_window_g4

0xdfd9,	// (0x0004dc5b) popup_clock_analogue_window_g5

0x0004,

0xf349,	// (0x0004efcb) popup_clock_analogue_window_g

0xadb6,	// (0x0004aa38) popup_clock_analogue_window_t1

0xadc4,	// (0x0004aa46) clock_digital_number_pane_ParamLimits

0xadc4,	// (0x0004aa46) clock_digital_number_pane

0xadd0,	// (0x0004aa52) clock_digital_number_pane_cp02_ParamLimits

0xadd0,	// (0x0004aa52) clock_digital_number_pane_cp02

0xaddc,	// (0x0004aa5e) clock_digital_number_pane_cp03_ParamLimits

0xaddc,	// (0x0004aa5e) clock_digital_number_pane_cp03

0xade8,	// (0x0004aa6a) clock_digital_number_pane_cp04_ParamLimits

0xade8,	// (0x0004aa6a) clock_digital_number_pane_cp04

0xadf4,	// (0x0004aa76) clock_digital_separator_pane_ParamLimits

0xadf4,	// (0x0004aa76) clock_digital_separator_pane

0xae00,	// (0x0004aa82) popup_clock_digital_window_t1

0xdfd9,	// (0x0004dc5b) clock_digital_number_pane_g1

0xdfd9,	// (0x0004dc5b) clock_digital_number_pane_g2

0x0001,

0x0091,	// (0x0003fd13) clock_digital_number_pane_g

0xdfd9,	// (0x0004dc5b) clock_digital_separator_pane_g1

0xdfd9,	// (0x0004dc5b) clock_digital_separator_pane_g2

0x0001,

0x0091,	// (0x0003fd13) clock_digital_separator_pane_g

0xdc5e,	// (0x0004d8e0) bg_popup_window_pane_cp04

0xe784,	// (0x0004e406) heading_pane_cp03

0xe78c,	// (0x0004e40e) listscroll_popup_gms_pane

0xe794,	// (0x0004e416) grid_large_graphic_popup_pane

0xe79e,	// (0x0004e420) listscroll_popup_gms_pane_g1

0xe7a6,	// (0x0004e428) listscroll_popup_gms_pane_g2

0x0001,

0xf354,	// (0x0004efd6) listscroll_popup_gms_pane_g

0xe2e6,	// (0x0004df68) scroll_pane_cp014

0x32cf,	// (0x00042f51) cell_large_graphic_popup_pane_ParamLimits

0x32cf,	// (0x00042f51) cell_large_graphic_popup_pane

0x32e7,	// (0x00042f69) cell_large_graphic_popup_pane_g1_ParamLimits

0x32e7,	// (0x00042f69) cell_large_graphic_popup_pane_g1

0xe7bc,	// (0x0004e43e) cell_large_graphic_popup_pane_g2_ParamLimits

0xe7bc,	// (0x0004e43e) cell_large_graphic_popup_pane_g2

0xe7c8,	// (0x0004e44a) cell_large_graphic_popup_pane_g3_ParamLimits

0xe7c8,	// (0x0004e44a) cell_large_graphic_popup_pane_g3

0xe7d5,	// (0x0004e457) cell_large_graphic_popup_pane_g4_ParamLimits

0xe7d5,	// (0x0004e457) cell_large_graphic_popup_pane_g4

0x0003,

0xf359,	// (0x0004efdb) cell_large_graphic_popup_pane_g_ParamLimits

0xf359,	// (0x0004efdb) cell_large_graphic_popup_pane_g

0xe7e5,	// (0x0004e467) grid_highlight_pane_cp010

0xdfd9,	// (0x0004dc5b) bg_popup_call_pane_g1

0xe7ef,	// (0x0004e471) list_single_graphic_popup_conf_pane_ParamLimits

0xe7ef,	// (0x0004e471) list_single_graphic_popup_conf_pane

0xe801,	// (0x0004e483) list_highlight_pane_cp01

0xe80a,	// (0x0004e48c) list_single_graphic_popup_conf_pane_g1

0xe812,	// (0x0004e494) list_single_graphic_popup_conf_pane_g2

0x0001,

0x013c,	// (0x0003fdbe) list_single_graphic_popup_conf_pane_g

0xe81a,	// (0x0004e49c) list_single_graphic_popup_conf_pane_t1

0xe828,	// (0x0004e4aa) linegrid_cams_pane_g1

0x32f3,	// (0x00042f75) linegrid_cams_pane_g2

0xe117,	// (0x0004dd99) linegrid_cams_pane_g3

0xe831,	// (0x0004e4b3) linegrid_cams_pane_g4

0x32fc,	// (0x00042f7e) linegrid_cams_pane_g5

0x3305,	// (0x00042f87) linegrid_cams_pane_g6

0xe120,	// (0x0004dda2) linegrid_cams_pane_g7

0x0006,

0xf362,	// (0x0004efe4) linegrid_cams_pane_g

0xe83a,	// (0x0004e4bc) popup_clock_analogue_window

0xe83a,	// (0x0004e4bc) popup_clock_digital_window

0xdc5e,	// (0x0004d8e0) popup_phob_thumbnail_window

0xdfd9,	// (0x0004dc5b) call_video_uplink_pane_g1

0xe843,	// (0x0004e4c5) call_video_uplink_pane_g2

0x0001,

0x0150,	// (0x0003fdd2) call_video_uplink_pane_g

0xe84b,	// (0x0004e4cd) video_uplink_pane

0xe853,	// (0x0004e4d5) mce_image_pane_g1

0x3310,	// (0x00042f92) mce_image_pane_g2

0x331a,	// (0x00042f9c) mce_image_pane_g3

0x3324,	// (0x00042fa6) mce_image_pane_g4

0x332c,	// (0x00042fae) mce_image_pane_g5

0x0004,

0xf371,	// (0x0004eff3) mce_image_pane_g

0xe85d,	// (0x0004e4df) control_top_pane_stacon_cp01_ParamLimits

0xe85d,	// (0x0004e4df) control_top_pane_stacon_cp01

0xe871,	// (0x0004e4f3) uni_indicator_pane_stacon_cp01_ParamLimits

0xe871,	// (0x0004e4f3) uni_indicator_pane_stacon_cp01

0xe882,	// (0x0004e504) bg_popup_sub_pane_cp03

0x3334,	// (0x00042fb6) chi_dic_find_pane

0x333c,	// (0x00042fbe) listscroll_chi_dic_pane

0x3345,	// (0x00042fc7) main_pane_chidic_g1

0x3358,	// (0x00042fda) chi_dic_find_pane_t1

0xe88c,	// (0x0004e50e) find_chidic_pane

0xe895,	// (0x0004e517) chi_dic_list_pane_ParamLimits

0xe895,	// (0x0004e517) chi_dic_list_pane

0xe8a6,	// (0x0004e528) scroll_pane_cp020

0x3366,	// (0x00042fe8) find_chidic_pane_t1

0xdc5e,	// (0x0004d8e0) input_focus_pane_cp06

0x3375,	// (0x00042ff7) list_chi_dic_pane_ParamLimits

0x3375,	// (0x00042ff7) list_chi_dic_pane

0x3387,	// (0x00043009) list_chi_dic_pane_t1_ParamLimits

0x3387,	// (0x00043009) list_chi_dic_pane_t1

0xdc5e,	// (0x0004d8e0) list_highlight_pane_cp020

0xe8ae,	// (0x0004e530) bg_cale_heading_pane_g1

0x339a,	// (0x0004301c) bg_cale_heading_pane_g2

0x33a2,	// (0x00043024) bg_cale_heading_pane_g3

0x33aa,	// (0x0004302c) bg_cale_heading_pane_g4

0x33b2,	// (0x00043034) bg_cale_heading_pane_g5

0x33ba,	// (0x0004303c) bg_cale_heading_pane_g6

0x33c2,	// (0x00043044) bg_cale_heading_pane_g7

0x33ca,	// (0x0004304c) bg_cale_heading_pane_g8

0x33d2,	// (0x00043054) bg_cale_heading_pane_g9

0x0008,

0xf37c,	// (0x0004effe) bg_cale_heading_pane_g

0xe8ae,	// (0x0004e530) bg_cale_side_pane_g1

0x33da,	// (0x0004305c) bg_cale_side_pane_g2

0x33e4,	// (0x00043066) bg_cale_side_pane_g3

0x33ee,	// (0x00043070) bg_cale_side_pane_g4

0x33f8,	// (0x0004307a) bg_cale_side_pane_g5

0x3402,	// (0x00043084) bg_cale_side_pane_g6

0x340c,	// (0x0004308e) bg_cale_side_pane_g7

0x3416,	// (0x00043098) bg_cale_side_pane_g8

0x341e,	// (0x000430a0) bg_cale_side_pane_g9

0x0008,

0xf38f,	// (0x0004f011) bg_cale_side_pane_g

0x3426,	// (0x000430a8) popup_call_status_window_ParamLimits

0x3426,	// (0x000430a8) popup_call_status_window

0xe8b6,	// (0x0004e538) stacon_top_pane

0xe8be,	// (0x0004e540) status_pane_ParamLimits

0xe8be,	// (0x0004e540) status_pane

0xe8d3,	// (0x0004e555) status_small_pane

0xe8db,	// (0x0004e55d) control_pane

0xdc5e,	// (0x0004d8e0) stacon_bottom_pane

0xe8e3,	// (0x0004e565) list_single_mce_smart_pane_t1_ParamLimits

0xe8e3,	// (0x0004e565) list_single_mce_smart_pane_t1

0xe8f6,	// (0x0004e578) list_single_mce_smart_pane_t2_ParamLimits

0xe8f6,	// (0x0004e578) list_single_mce_smart_pane_t2

0x0001,

0x0186,	// (0x0003fe08) list_single_mce_smart_pane_t_ParamLimits

0x0186,	// (0x0003fe08) list_single_mce_smart_pane_t

0x3473,	// (0x000430f5) compass_pane

0x347e,	// (0x00043100) main_location2_pane_t1

0x3494,	// (0x00043116) main_location2_pane_t2

0x34aa,	// (0x0004312c) main_location2_pane_t3

0x0003,

0xf3a2,	// (0x0004f024) main_location2_pane_t

0xe915,	// (0x0004e597) compass_pane_g1_ParamLimits

0xe915,	// (0x0004e597) compass_pane_g1

0x34f8,	// (0x0004317a) compass_pane_t1

0x3507,	// (0x00043189) compass_pane_t2

0x0005,

0xf3ab,	// (0x0004f02d) compass_pane_t

0x3552,	// (0x000431d4) text_secondary_cp61

0xe929,	// (0x0004e5ab) navi_pane_cams_g5

0xe94c,	// (0x0004e5ce) navi_pane_im_t1

0xe95a,	// (0x0004e5dc) navi_pane_mp_g1_ParamLimits

0xe95a,	// (0x0004e5dc) navi_pane_mp_g1

0xe96e,	// (0x0004e5f0) navi_pane_mp_g2_ParamLimits

0xe96e,	// (0x0004e5f0) navi_pane_mp_g2

0xe97a,	// (0x0004e5fc) navi_pane_mp_g3_ParamLimits

0xe97a,	// (0x0004e5fc) navi_pane_mp_g3

0x0002,

0x01a8,	// (0x0003fe2a) navi_pane_mp_g_ParamLimits

0x01a8,	// (0x0003fe2a) navi_pane_mp_g

0xe986,	// (0x0004e608) navi_pane_mp_t1

0xe994,	// (0x0004e616) navi_pane_mp_t2

0x0002,

0x01af,	// (0x0003fe31) navi_pane_mp_t

0xe9d0,	// (0x0004e652) navi_pane_vt_g1

0xe986,	// (0x0004e608) navi_pane_vt_t1

0xe9d8,	// (0x0004e65a) navi_slider_pane

0xe9e0,	// (0x0004e662) zooming_pane

0xe9e8,	// (0x0004e66a) navi_slider_pane_g1

0xae1d,	// (0x0004aa9f) navi_slider_pane_g2

0x0006,

0xf3bf,	// (0x0004f041) navi_slider_pane_g

0xea0c,	// (0x0004e68e) aid_levels_zoom

0xea14,	// (0x0004e696) zooming_pane_g1

0xea1c,	// (0x0004e69e) zooming_pane_g2

0xea1c,	// (0x0004e69e) zooming_pane_g3

0x0002,

0x01c5,	// (0x0003fe47) zooming_pane_g

0xea24,	// (0x0004e6a6) level_10_zoom

0xea2d,	// (0x0004e6af) level_11_zoom

0xea36,	// (0x0004e6b8) level_1_zoom

0xea3f,	// (0x0004e6c1) level_2_zoom

0xea48,	// (0x0004e6ca) level_3_zoom

0xea51,	// (0x0004e6d3) level_4_zoom

0xea5a,	// (0x0004e6dc) level_5_zoom

0xea63,	// (0x0004e6e5) level_6_zoom

0xea6c,	// (0x0004e6ee) level_7_zoom

0xea75,	// (0x0004e6f7) level_8_zoom

0xea7e,	// (0x0004e700) level_9_zoom

0xea8f,	// (0x0004e711) popup_phob_thumbnail_window_g1

0xea97,	// (0x0004e719) popup_phob_thumbnail_window_g2

0x0001,

0x01cc,	// (0x0003fe4e) popup_phob_thumbnail_window_g

0x4fb7,	// (0x00044c39) level_1_location

0x4fbf,	// (0x00044c41) level_2_location

0x4fc7,	// (0x00044c49) level_3_location

0x4fcf,	// (0x00044c51) level_4_location

0xe9e0,	// (0x0004e662) level_5_location

0x367d,	// (0x000432ff) mce_icon_pane_g1

0x3685,	// (0x00043307) mce_icon_pane_g2

0x0001,

0xf3ce,	// (0x0004f050) mce_icon_pane_g

0x368d,	// (0x0004330f) main_mup_pane_g1_ParamLimits

0x368d,	// (0x0004330f) main_mup_pane_g1

0x36a3,	// (0x00043325) main_mup_pane_g2_ParamLimits

0x36a3,	// (0x00043325) main_mup_pane_g2

0x36bb,	// (0x0004333d) main_mup_pane_g3_ParamLimits

0x36bb,	// (0x0004333d) main_mup_pane_g3

0x36d3,	// (0x00043355) main_mup_pane_g4_ParamLimits

0x36d3,	// (0x00043355) main_mup_pane_g4

0x36e5,	// (0x00043367) main_mup_pane_g5_ParamLimits

0x36e5,	// (0x00043367) main_mup_pane_g5

0x3701,	// (0x00043383) main_mup_pane_g6_ParamLimits

0x3701,	// (0x00043383) main_mup_pane_g6

0x371b,	// (0x0004339d) main_mup_pane_g7_ParamLimits

0x371b,	// (0x0004339d) main_mup_pane_g7

0x3739,	// (0x000433bb) main_mup_pane_g8_ParamLimits

0x3739,	// (0x000433bb) main_mup_pane_g8

0x3757,	// (0x000433d9) main_mup_pane_g9_ParamLimits

0x3757,	// (0x000433d9) main_mup_pane_g9

0x3773,	// (0x000433f5) main_mup_pane_g10_ParamLimits

0x3773,	// (0x000433f5) main_mup_pane_g10

0x3791,	// (0x00043413) main_mup_pane_g11_ParamLimits

0x3791,	// (0x00043413) main_mup_pane_g11

0x37ab,	// (0x0004342d) main_mup_pane_g12_ParamLimits

0x37ab,	// (0x0004342d) main_mup_pane_g12

0x37c1,	// (0x00043443) main_mup_pane_g13_ParamLimits

0x37c1,	// (0x00043443) main_mup_pane_g13

0x000c,

0xf3d3,	// (0x0004f055) main_mup_pane_g_ParamLimits

0xf3d3,	// (0x0004f055) main_mup_pane_g

0x37d5,	// (0x00043457) main_mup_pane_t1_ParamLimits

0x37d5,	// (0x00043457) main_mup_pane_t1

0x37f1,	// (0x00043473) main_mup_pane_t2_ParamLimits

0x37f1,	// (0x00043473) main_mup_pane_t2

0x3809,	// (0x0004348b) main_mup_pane_t3_ParamLimits

0x3809,	// (0x0004348b) main_mup_pane_t3

0x3821,	// (0x000434a3) main_mup_pane_t4_ParamLimits

0x3821,	// (0x000434a3) main_mup_pane_t4

0x383f,	// (0x000434c1) main_mup_pane_t5_ParamLimits

0x383f,	// (0x000434c1) main_mup_pane_t5

0x3854,	// (0x000434d6) main_mup_pane_t6_ParamLimits

0x3854,	// (0x000434d6) main_mup_pane_t6

0x0005,

0xf3ee,	// (0x0004f070) main_mup_pane_t_ParamLimits

0xf3ee,	// (0x0004f070) main_mup_pane_t

0x3866,	// (0x000434e8) mup_progress_pane_ParamLimits

0x3866,	// (0x000434e8) mup_progress_pane

0x3872,	// (0x000434f4) mup_visualizer_pane_ParamLimits

0x3872,	// (0x000434f4) mup_visualizer_pane

0x38a6,	// (0x00043528) mup_volume_pane_ParamLimits

0x38a6,	// (0x00043528) mup_volume_pane

0xe7ae,	// (0x0004e430) mup_visualizer_pane_g1_ParamLimits

0xe7ae,	// (0x0004e430) mup_visualizer_pane_g1

0xe7ae,	// (0x0004e430) mup_visualizer_pane_g2_ParamLimits

0xe7ae,	// (0x0004e430) mup_visualizer_pane_g2

0xe915,	// (0x0004e597) mup_visualizer_pane_g3_ParamLimits

0xe915,	// (0x0004e597) mup_visualizer_pane_g3

0x0002,

0xf3fb,	// (0x0004f07d) mup_visualizer_pane_g_ParamLimits

0xf3fb,	// (0x0004f07d) mup_visualizer_pane_g

0xdfd9,	// (0x0004dc5b) mup_volume_pane_g1

0xeaa7,	// (0x0004e729) mup_volume_pane_g2

0x0001,

0x0205,	// (0x0003fe87) mup_volume_pane_g

0xdfd9,	// (0x0004dc5b) mup_progress_pane_g1

0xeab0,	// (0x0004e732) mup_progress_pane_g2

0xeab9,	// (0x0004e73b) mup_progress_pane_g3

0x0002,

0x020a,	// (0x0003fe8c) mup_progress_pane_g

0xdc5e,	// (0x0004d8e0) bg_popup_window_pane_cp05

0xeac2,	// (0x0004e744) heading_pane_cp02_ParamLimits

0xeac2,	// (0x0004e744) heading_pane_cp02

0xeade,	// (0x0004e760) list_popup_blid_pane

0xeae6,	// (0x0004e768) list_blid_sat_info_pane_ParamLimits

0xeae6,	// (0x0004e768) list_blid_sat_info_pane

0xeaf9,	// (0x0004e77b) list_blid_sat_info_pane_g1

0xeb01,	// (0x0004e783) list_blid_sat_info_pane_t1

0x39d0,	// (0x00043652) mup_equalizer_pane_ParamLimits

0x39d0,	// (0x00043652) mup_equalizer_pane

0x39f1,	// (0x00043673) mup_equalizer_pane_cp1_ParamLimits

0x39f1,	// (0x00043673) mup_equalizer_pane_cp1

0x3a12,	// (0x00043694) mup_equalizer_pane_cp2_ParamLimits

0x3a12,	// (0x00043694) mup_equalizer_pane_cp2

0x3a37,	// (0x000436b9) mup_equalizer_pane_cp3_ParamLimits

0x3a37,	// (0x000436b9) mup_equalizer_pane_cp3

0x3a60,	// (0x000436e2) mup_equalizer_pane_cp4_ParamLimits

0x3a60,	// (0x000436e2) mup_equalizer_pane_cp4

0x3a89,	// (0x0004370b) mup_equalizer_pane_cp5

0x3aa1,	// (0x00043723) mup_equalizer_pane_cp6

0x3ab9,	// (0x0004373b) mup_equalizer_pane_cp7

0x4da5,	// (0x00044a27) bg_popup_call_poc_act_pane_g9

0x4dad,	// (0x00044a2f) bg_popup_call_poc_act_pane_g10

0x4db5,	// (0x00044a37) bg_popup_call_poc_act_pane_g11

0x000a,

0xdeb9,	// (0x0004db3b) mup_scale_pane

0xdfd9,	// (0x0004dc5b) mup_scale_pane_g1

0xeb0f,	// (0x0004e791) mup_scale_pane_g2

0x0006,

0xf417,	// (0x0004f099) mup_scale_pane_g

0xeb33,	// (0x0004e7b5) msg_data_pane

0xeb3b,	// (0x0004e7bd) scroll_pane_cp017

0x0d9c,	// (0x00040a1e) bg_list_pane_cp04_ParamLimits

0x0d9c,	// (0x00040a1e) bg_list_pane_cp04

0xeb43,	// (0x0004e7c5) msg_data_pane_g1

0x3ae3,	// (0x00043765) msg_data_pane_g2

0x3aed,	// (0x0004376f) msg_data_pane_g3

0x3af7,	// (0x00043779) msg_data_pane_g4

0x3aff,	// (0x00043781) msg_data_pane_g5

0x3b07,	// (0x00043789) msg_data_pane_g6

0x3b0f,	// (0x00043791) msg_data_pane_g7

0x0006,

0xf426,	// (0x0004f0a8) msg_data_pane_g

0x0dc2,	// (0x00040a44) msg_text_pane_ParamLimits

0x0dc2,	// (0x00040a44) msg_text_pane

0x3b17,	// (0x00043799) qrid_highlight_pane_cp011_ParamLimits

0x3b17,	// (0x00043799) qrid_highlight_pane_cp011

0xdc5e,	// (0x0004d8e0) msg_body_pane

0xdc5e,	// (0x0004d8e0) msg_header_pane

0xeb54,	// (0x0004e7d6) input_focus_pane_cp07

0x0e01,	// (0x00040a83) msg_header_pane_t1_ParamLimits

0x0e01,	// (0x00040a83) msg_header_pane_t1

0x0e15,	// (0x00040a97) msg_header_pane_t2_ParamLimits

0x0e15,	// (0x00040a97) msg_header_pane_t2

0x0001,

0xf43a,	// (0x0004f0bc) msg_header_pane_t_ParamLimits

0xf43a,	// (0x0004f0bc) msg_header_pane_t

0xeb69,	// (0x0004e7eb) msg_body_pane_g1

0x0e27,	// (0x00040aa9) msg_body_pane_t1_ParamLimits

0x0e27,	// (0x00040aa9) msg_body_pane_t1

0x0e58,	// (0x00040ada) msg_body_pane_t2_ParamLimits

0x0e58,	// (0x00040ada) msg_body_pane_t2

0x0e6a,	// (0x00040aec) msg_body_pane_t3_ParamLimits

0x0e6a,	// (0x00040aec) msg_body_pane_t3

0x0002,

0xf43f,	// (0x0004f0c1) msg_body_pane_t_ParamLimits

0xf43f,	// (0x0004f0c1) msg_body_pane_t

0x3b67,	// (0x000437e9) main_viewer_pane_g1_ParamLimits

0x3b67,	// (0x000437e9) main_viewer_pane_g1

0x3b75,	// (0x000437f7) main_viewer_pane_g2_ParamLimits

0x3b75,	// (0x000437f7) main_viewer_pane_g2

0x3b83,	// (0x00043805) main_viewer_pane_g3_ParamLimits

0x3b83,	// (0x00043805) main_viewer_pane_g3

0x3b92,	// (0x00043814) main_viewer_pane_g4_ParamLimits

0x3b92,	// (0x00043814) main_viewer_pane_g4

0xae47,	// (0x0004aac9) main_viewer_pane_g5_ParamLimits

0xae47,	// (0x0004aac9) main_viewer_pane_g5

0xae47,	// (0x0004aac9) main_viewer_pane_g7_ParamLimits

0xae47,	// (0x0004aac9) main_viewer_pane_g7

0xae59,	// (0x0004aadb) main_viewer_pane_g8_ParamLimits

0xae59,	// (0x0004aadb) main_viewer_pane_g8

0x0007,

0xf44f,	// (0x0004f0d1) main_viewer_pane_g_ParamLimits

0xf44f,	// (0x0004f0d1) main_viewer_pane_g

0xeb71,	// (0x0004e7f3) viewer_content_pane_ParamLimits

0xeb71,	// (0x0004e7f3) viewer_content_pane

0x3bd0,	// (0x00043852) main_postcard_pane_g1_ParamLimits

0x3bd0,	// (0x00043852) main_postcard_pane_g1

0x3be6,	// (0x00043868) main_postcard_pane_g2_ParamLimits

0x3be6,	// (0x00043868) main_postcard_pane_g2

0x3bfc,	// (0x0004387e) main_postcard_pane_g3_ParamLimits

0x3bfc,	// (0x0004387e) main_postcard_pane_g3

0x0005,

0xf460,	// (0x0004f0e2) main_postcard_pane_g_ParamLimits

0xf460,	// (0x0004f0e2) main_postcard_pane_g

0x3c13,	// (0x00043895) main_postcard_pane_g4

0x568b,	// (0x0004530d) smil_status_volume_pane_g2

0x3c56,	// (0x000438d8) postcard_pane_ParamLimits

0x3c56,	// (0x000438d8) postcard_pane

0xeb7f,	// (0x0004e801) postcard_pane_g1_ParamLimits

0xeb7f,	// (0x0004e801) postcard_pane_g1

0x3ca6,	// (0x00043928) postcard_pane_g2_ParamLimits

0x3ca6,	// (0x00043928) postcard_pane_g2

0x3cb2,	// (0x00043934) postcard_pane_g3_ParamLimits

0x3cb2,	// (0x00043934) postcard_pane_g3

0xeb8d,	// (0x0004e80f) postcard_pane_g4_ParamLimits

0xeb8d,	// (0x0004e80f) postcard_pane_g4

0x3cbe,	// (0x00043940) postcard_pane_g5_ParamLimits

0x3cbe,	// (0x00043940) postcard_pane_g5

0x3cd0,	// (0x00043952) postcard_pane_g6_ParamLimits

0x3cd0,	// (0x00043952) postcard_pane_g6

0xeb7f,	// (0x0004e801) postcard_pane_g7_ParamLimits

0xeb7f,	// (0x0004e801) postcard_pane_g7

0x0006,

0xf46d,	// (0x0004f0ef) postcard_pane_g_ParamLimits

0xf46d,	// (0x0004f0ef) postcard_pane_g

0x3ce8,	// (0x0004396a) main_mp2_pane_g1_ParamLimits

0x3ce8,	// (0x0004396a) main_mp2_pane_g1

0x3cf6,	// (0x00043978) main_mp2_pane_g2_ParamLimits

0x3cf6,	// (0x00043978) main_mp2_pane_g2

0x3d02,	// (0x00043984) main_mp2_pane_g3_ParamLimits

0x3d02,	// (0x00043984) main_mp2_pane_g3

0x0002,

0xf47c,	// (0x0004f0fe) main_mp2_pane_g_ParamLimits

0xf47c,	// (0x0004f0fe) main_mp2_pane_g

0x3d0e,	// (0x00043990) main_mp2_pane_t1_ParamLimits

0x3d0e,	// (0x00043990) main_mp2_pane_t1

0x3d25,	// (0x000439a7) main_mp2_pane_t2_ParamLimits

0x3d25,	// (0x000439a7) main_mp2_pane_t2

0x3d39,	// (0x000439bb) main_mp2_pane_t3_ParamLimits

0x3d39,	// (0x000439bb) main_mp2_pane_t3

0x0002,

0xf483,	// (0x0004f105) main_mp2_pane_t_ParamLimits

0xf483,	// (0x0004f105) main_mp2_pane_t

0xeb9b,	// (0x0004e81d) pec_content_pane_ParamLimits

0xeb9b,	// (0x0004e81d) pec_content_pane

0xe2e6,	// (0x0004df68) scroll_pane_cp015

0xebad,	// (0x0004e82f) pec_attribute_pane_ParamLimits

0xebad,	// (0x0004e82f) pec_attribute_pane

0x3d4b,	// (0x000439cd) pec_content_pane_g1_ParamLimits

0x3d4b,	// (0x000439cd) pec_content_pane_g1

0xebbd,	// (0x0004e83f) pec_content_pane_t1_ParamLimits

0xebbd,	// (0x0004e83f) pec_content_pane_t1

0xebcf,	// (0x0004e851) pec_content_pane_t2_ParamLimits

0xebcf,	// (0x0004e851) pec_content_pane_t2

0x0001,

0x0299,	// (0x0003ff1b) pec_content_pane_t_ParamLimits

0x0299,	// (0x0003ff1b) pec_content_pane_t

0x3d57,	// (0x000439d9) list_single_graphic_pane_cp01_ParamLimits

0x3d57,	// (0x000439d9) list_single_graphic_pane_cp01

0xdeb9,	// (0x0004db3b) bg_popup_sub_pane_cp04

0xebe1,	// (0x0004e863) popup_mup_playback_window_g1

0xebed,	// (0x0004e86f) popup_mup_playback_window_t1

0xec02,	// (0x0004e884) popup_mup_playback_window_t2

0x0001,

0x029e,	// (0x0003ff20) popup_mup_playback_window_t

0xec39,	// (0x0004e8bb) main_image_pane_g1_ParamLimits

0xec39,	// (0x0004e8bb) main_image_pane_g1

0xec7c,	// (0x0004e8fe) scroll_pane_cp018_ParamLimits

0xec7c,	// (0x0004e8fe) scroll_pane_cp018

0xec94,	// (0x0004e916) scroll_pane_cp016_ParamLimits

0xec94,	// (0x0004e916) scroll_pane_cp016

0x3e29,	// (0x00043aab) smil2_image_pane_ParamLimits

0x3e29,	// (0x00043aab) smil2_image_pane

0x3e5f,	// (0x00043ae1) smil2_root_pane_ParamLimits

0x3e5f,	// (0x00043ae1) smil2_root_pane

0x3e97,	// (0x00043b19) smil2_text_pane_ParamLimits

0x3e97,	// (0x00043b19) smil2_text_pane

0xdc5e,	// (0x0004d8e0) bg_list_pane_cp06

0xecd0,	// (0x0004e952) grid_radio_pane

0xdc5e,	// (0x0004d8e0) bg_popup_window_pane_cp06

0xecda,	// (0x0004e95c) main_fmradio_pane_t1

0xe784,	// (0x0004e406) heading_pane_cp04

0xece8,	// (0x0004e96a) main_fmradio_pane_t2

0x4e48,	// (0x00044aca) popup_cale_lunar_info_window_g1

0xecf6,	// (0x0004e978) main_fmradio_pane_t3

0x4e50,	// (0x00044ad2) popup_cale_lunar_info_window_g2

0xed06,	// (0x0004e988) main_fmradio_pane_t4

0x0001,

0xed14,	// (0x0004e996) main_fmradio_pane_t5

0x0004,

0xf539,	// (0x0004f1bb) popup_cale_lunar_info_window_g

0x02b3,	// (0x0003ff35) main_fmradio_pane_t

0xed22,	// (0x0004e9a4) wait_bar_pane_cp03

0xed2a,	// (0x0004e9ac) cell_fmradio_pane_ParamLimits

0xed2a,	// (0x0004e9ac) cell_fmradio_pane

0xeb7f,	// (0x0004e801) cell_fmradio_pane_g1_ParamLimits

0xeb7f,	// (0x0004e801) cell_fmradio_pane_g1

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp011

0xed3f,	// (0x0004e9c1) poc_content_pane_ParamLimits

0xed3f,	// (0x0004e9c1) poc_content_pane

0xed51,	// (0x0004e9d3) scroll_pane_cp019

0x3f27,	// (0x00043ba9) popup_call_poc_act_window_ParamLimits

0x3f27,	// (0x00043ba9) popup_call_poc_act_window

0x3f4b,	// (0x00043bcd) popup_call_poc_inact_window_ParamLimits

0x3f4b,	// (0x00043bcd) popup_call_poc_inact_window

0xf510,	// (0x0004f192) bg_popup_call_poc_act_pane_g

0x4d2d,	// (0x000449af) bg_popup_call_poc_inact_pane_g1

0x4d35,	// (0x000449b7) bg_popup_call_poc_inact_pane_g2

0xed59,	// (0x0004e9db) popup_call_poc_act_window_g2

0x4d3d,	// (0x000449bf) bg_popup_call_poc_inact_pane_g3

0x4d45,	// (0x000449c7) bg_popup_call_poc_inact_pane_g4

0x4d4d,	// (0x000449cf) bg_popup_call_poc_inact_pane_g5

0xed61,	// (0x0004e9e3) popup_call_poc_act_window_t1_ParamLimits

0xed61,	// (0x0004e9e3) popup_call_poc_act_window_t1

0xed89,	// (0x0004ea0b) popup_call_poc_act_window_t2_ParamLimits

0xed89,	// (0x0004ea0b) popup_call_poc_act_window_t2

0xedb1,	// (0x0004ea33) popup_call_poc_act_window_t3_ParamLimits

0xedb1,	// (0x0004ea33) popup_call_poc_act_window_t3

0xedd9,	// (0x0004ea5b) popup_call_poc_act_window_t4_ParamLimits

0xedd9,	// (0x0004ea5b) popup_call_poc_act_window_t4

0x0003,

0x02be,	// (0x0003ff40) popup_call_poc_act_window_t_ParamLimits

0x02be,	// (0x0003ff40) popup_call_poc_act_window_t

0x4d55,	// (0x000449d7) bg_popup_call_poc_inact_pane_g6

0x4d5d,	// (0x000449df) bg_popup_call_poc_inact_pane_g7

0x4d65,	// (0x000449e7) bg_popup_call_poc_inact_pane_g8

0xedeb,	// (0x0004ea6d) popup_call_poc_inact_window_g2

0x4d6d,	// (0x000449ef) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fd,	// (0x0004f17f) bg_popup_call_poc_inact_pane_g

0xedf3,	// (0x0004ea75) popup_call_poc_inact_window_t1_ParamLimits

0xedf3,	// (0x0004ea75) popup_call_poc_inact_window_t1

0xee08,	// (0x0004ea8a) popup_call_poc_inact_window_t2_ParamLimits

0xee08,	// (0x0004ea8a) popup_call_poc_inact_window_t2

0xee1d,	// (0x0004ea9f) popup_call_poc_inact_window_t3_ParamLimits

0xee1d,	// (0x0004ea9f) popup_call_poc_inact_window_t3

0x0002,

0x02c7,	// (0x0003ff49) popup_call_poc_inact_window_t_ParamLimits

0x02c7,	// (0x0003ff49) popup_call_poc_inact_window_t

0x5521,	// (0x000451a3) context_pane_ParamLimits

0x5584,	// (0x00045206) signal_pane_ParamLimits

0xe9e0,	// (0x0004e662) main_call2_pane

0x54b3,	// (0x00045135) popup_phob_thumbnail2_window_ParamLimits

0x54b3,	// (0x00045135) popup_phob_thumbnail2_window

0xae2f,	// (0x0004aab1) aid_hotspot_pointer_arrow_pane

0xae37,	// (0x0004aab9) aid_hotspot_pointer_hand_pane

0x4f7f,	// (0x00044c01) phob_pre_status_pane_g5

0x21e0,	// (0x00041e62) cams_zoom_pane_ParamLimits

0x21ef,	// (0x00041e71) image_vga_pane_ParamLimits

0x2209,	// (0x00041e8b) main_camera_pane_g1_ParamLimits

0x221b,	// (0x00041e9d) main_camera_pane_g2_ParamLimits

0x222b,	// (0x00041ead) main_camera_pane_g3_ParamLimits

0x223f,	// (0x00041ec1) main_camera_pane_g4_ParamLimits

0x2253,	// (0x00041ed5) main_camera_pane_g5_ParamLimits

0x2267,	// (0x00041ee9) main_camera_pane_g6_ParamLimits

0x227b,	// (0x00041efd) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0004eebf) main_camera_pane_g_ParamLimits

0x228f,	// (0x00041f11) main_camera_pane_t1_ParamLimits

0x22a5,	// (0x00041f27) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0004eed0) main_camera_pane_t_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_preview_window_pane_cp01_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_preview_window_pane_cp01

0xee32,	// (0x0004eab4) popup_phob_thumbnail2_window_g1_ParamLimits

0xee32,	// (0x0004eab4) popup_phob_thumbnail2_window_g1

0xdc5e,	// (0x0004d8e0) call2_cli_visual_pane

0x3f7f,	// (0x00043c01) popup_call2_audio_conf_window_ParamLimits

0x3f7f,	// (0x00043c01) popup_call2_audio_conf_window

0x3fa7,	// (0x00043c29) popup_call2_audio_first_window_ParamLimits

0x3fa7,	// (0x00043c29) popup_call2_audio_first_window

0x403d,	// (0x00043cbf) popup_call2_audio_in_window_ParamLimits

0x403d,	// (0x00043cbf) popup_call2_audio_in_window

0x4089,	// (0x00043d0b) popup_call2_audio_out_window_ParamLimits

0x4089,	// (0x00043d0b) popup_call2_audio_out_window

0x40fb,	// (0x00043d7d) popup_call2_audio_second_window_ParamLimits

0x40fb,	// (0x00043d7d) popup_call2_audio_second_window

0x4161,	// (0x00043de3) popup_call2_audio_wait_window_ParamLimits

0x4161,	// (0x00043de3) popup_call2_audio_wait_window

0xdc5e,	// (0x0004d8e0) bg_popup_call2_act_pane_cp03

0xde9b,	// (0x0004db1d) list_conf_pane_cp

0xee3e,	// (0x0004eac0) popup_call2_audio_conf_window_t1

0xee4c,	// (0x0004eace) list_single_graphic_popup_conf2_pane_ParamLimits

0xee4c,	// (0x0004eace) list_single_graphic_popup_conf2_pane

0xe801,	// (0x0004e483) list_highlight_pane_cp04

0xee5f,	// (0x0004eae1) list_single_graphic_popup_conf2_pane_g1

0xe812,	// (0x0004e494) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x02ce,	// (0x0003ff50) list_single_graphic_popup_conf2_pane_g

0xee69,	// (0x0004eaeb) list_single_graphic_popup_conf2_pane_t1

0xee77,	// (0x0004eaf9) bg_popup_call2_act_pane_cp01_ParamLimits

0xee77,	// (0x0004eaf9) bg_popup_call2_act_pane_cp01

0xef01,	// (0x0004eb83) call_type_pane_cp05_ParamLimits

0xef01,	// (0x0004eb83) call_type_pane_cp05

0xef55,	// (0x0004ebd7) popup_call2_audio_second_window_g1_ParamLimits

0xef55,	// (0x0004ebd7) popup_call2_audio_second_window_g1

0xefc3,	// (0x0004ec45) popup_call2_audio_second_window_g2_ParamLimits

0xefc3,	// (0x0004ec45) popup_call2_audio_second_window_g2

0x0002,

0xf49a,	// (0x0004f11c) popup_call2_audio_second_window_g_ParamLimits

0xf49a,	// (0x0004f11c) popup_call2_audio_second_window_g

0xf028,	// (0x0004ecaa) popup_call2_audio_second_window_t1_ParamLimits

0xf028,	// (0x0004ecaa) popup_call2_audio_second_window_t1

0x419b,	// (0x00043e1d) popup_call2_audio_second_window_t2_ParamLimits

0x419b,	// (0x00043e1d) popup_call2_audio_second_window_t2

0x41ee,	// (0x00043e70) popup_call2_audio_second_window_t3_ParamLimits

0x41ee,	// (0x00043e70) popup_call2_audio_second_window_t3

0x0003,

0xf4a1,	// (0x0004f123) popup_call2_audio_second_window_t_ParamLimits

0xf4a1,	// (0x0004f123) popup_call2_audio_second_window_t

0xdc5e,	// (0x0004d8e0) bg_popup_call2_in_pane_cp02

0xdc68,	// (0x0004d8ea) call_type_pane_cp04

0xdc70,	// (0x0004d8f2) popup_call2_audio_wait_window_g1

0xdc78,	// (0x0004d8fa) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004edac) popup_call2_audio_wait_window_g

0xdc80,	// (0x0004d902) popup_call2_audio_wait_window_t3

0x42e1,	// (0x00043f63) bg_popup_call2_act_pane_ParamLimits

0x42e1,	// (0x00043f63) bg_popup_call2_act_pane

0x43a1,	// (0x00044023) call_type_pane_cp03_ParamLimits

0x43a1,	// (0x00044023) call_type_pane_cp03

0x4405,	// (0x00044087) popup_call2_audio_first_window_g1_ParamLimits

0x4405,	// (0x00044087) popup_call2_audio_first_window_g1

0x4475,	// (0x000440f7) popup_call2_audio_first_window_g2_ParamLimits

0x4475,	// (0x000440f7) popup_call2_audio_first_window_g2

0xe7ae,	// (0x0004e430) popup_call2_audio_first_window_g3_ParamLimits

0xe7ae,	// (0x0004e430) popup_call2_audio_first_window_g3

0x0004,

0xf4aa,	// (0x0004f12c) popup_call2_audio_first_window_g_ParamLimits

0xf4aa,	// (0x0004f12c) popup_call2_audio_first_window_g

0x4553,	// (0x000441d5) popup_call2_audio_first_window_t1_ParamLimits

0x4553,	// (0x000441d5) popup_call2_audio_first_window_t1

0x4656,	// (0x000442d8) popup_call2_audio_first_window_t4_ParamLimits

0x4656,	// (0x000442d8) popup_call2_audio_first_window_t4

0x4739,	// (0x000443bb) popup_call2_audio_first_window_t5_ParamLimits

0x4739,	// (0x000443bb) popup_call2_audio_first_window_t5

0x0003,

0xf4b5,	// (0x0004f137) popup_call2_audio_first_window_t_ParamLimits

0xf4b5,	// (0x0004f137) popup_call2_audio_first_window_t

0xdeb1,	// (0x0004db33) bg_popup_call2_act_pane_g1

0x4e5a,	// (0x00044adc) popup_cale_lunar_info_window_t1

0x4e68,	// (0x00044aea) popup_cale_lunar_info_window_t2

0x4e76,	// (0x00044af8) popup_cale_lunar_info_window_t3

0xdc5e,	// (0x0004d8e0) bg_popup_call2_bubble_pane

0x483a,	// (0x000444bc) bg_popup_call2_in_pane_cp01_ParamLimits

0x483a,	// (0x000444bc) bg_popup_call2_in_pane_cp01

0xd93a,	// (0x0004d5bc) call_type_pane_cp02

0x4882,	// (0x00044504) popup_call2_audio_out_window_g1_ParamLimits

0x4882,	// (0x00044504) popup_call2_audio_out_window_g1

0x48ae,	// (0x00044530) popup_call2_audio_out_window_g2_ParamLimits

0x48ae,	// (0x00044530) popup_call2_audio_out_window_g2

0x48d6,	// (0x00044558) popup_call2_audio_out_window_g3_ParamLimits

0x48d6,	// (0x00044558) popup_call2_audio_out_window_g3

0x0003,

0xf4be,	// (0x0004f140) popup_call2_audio_out_window_g_ParamLimits

0xf4be,	// (0x0004f140) popup_call2_audio_out_window_g

0x4911,	// (0x00044593) popup_call2_audio_out_window_t1_ParamLimits

0x4911,	// (0x00044593) popup_call2_audio_out_window_t1

0x4970,	// (0x000445f2) popup_call2_audio_out_window_t2_ParamLimits

0x4970,	// (0x000445f2) popup_call2_audio_out_window_t2

0x49c4,	// (0x00044646) popup_call2_audio_out_window_t3_ParamLimits

0x49c4,	// (0x00044646) popup_call2_audio_out_window_t3

0x49da,	// (0x0004465c) popup_call2_audio_out_window_t4_ParamLimits

0x49da,	// (0x0004465c) popup_call2_audio_out_window_t4

0x49f0,	// (0x00044672) popup_call2_audio_out_window_t5_ParamLimits

0x49f0,	// (0x00044672) popup_call2_audio_out_window_t5

0x0005,

0xf4c7,	// (0x0004f149) popup_call2_audio_out_window_t_ParamLimits

0xf4c7,	// (0x0004f149) popup_call2_audio_out_window_t

0x4a54,	// (0x000446d6) bg_popup_call2_in_pane_ParamLimits

0x4a54,	// (0x000446d6) bg_popup_call2_in_pane

0x4ab0,	// (0x00044732) popup_call2_audio_in_window_g1_ParamLimits

0x4ab0,	// (0x00044732) popup_call2_audio_in_window_g1

0x4ae8,	// (0x0004476a) popup_call2_audio_in_window_g2_ParamLimits

0x4ae8,	// (0x0004476a) popup_call2_audio_in_window_g2

0x4b20,	// (0x000447a2) popup_call2_audio_in_window_g3_ParamLimits

0x4b20,	// (0x000447a2) popup_call2_audio_in_window_g3

0x0003,

0xf4d4,	// (0x0004f156) popup_call2_audio_in_window_g_ParamLimits

0xf4d4,	// (0x0004f156) popup_call2_audio_in_window_g

0x4b78,	// (0x000447fa) popup_call2_audio_in_window_t1_ParamLimits

0x4b78,	// (0x000447fa) popup_call2_audio_in_window_t1

0x4bf8,	// (0x0004487a) popup_call2_audio_in_window_t2_ParamLimits

0x4bf8,	// (0x0004487a) popup_call2_audio_in_window_t2

0x4c78,	// (0x000448fa) popup_call2_audio_in_window_t3_ParamLimits

0x4c78,	// (0x000448fa) popup_call2_audio_in_window_t3

0x4c92,	// (0x00044914) popup_call2_audio_in_window_t4_ParamLimits

0x4c92,	// (0x00044914) popup_call2_audio_in_window_t4

0x4ca4,	// (0x00044926) popup_call2_audio_in_window_t5_ParamLimits

0x4ca4,	// (0x00044926) popup_call2_audio_in_window_t5

0x4cb9,	// (0x0004493b) popup_call2_audio_in_window_t6_ParamLimits

0x4cb9,	// (0x0004493b) popup_call2_audio_in_window_t6

0x0005,

0xf4dd,	// (0x0004f15f) popup_call2_audio_in_window_t_ParamLimits

0xf4dd,	// (0x0004f15f) popup_call2_audio_in_window_t

0xdeb1,	// (0x0004db33) bg_popup_call2_in_pane_g1

0x4e84,	// (0x00044b06) popup_cale_lunar_info_window_t4

0x0003,

0xf53e,	// (0x0004f1c0) popup_cale_lunar_info_window_t

0xdeb9,	// (0x0004db3b) bg_popup_call2_rect_pane_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_call2_rect_pane

0xdc5e,	// (0x0004d8e0) call2_cli_visual_graphic_pane

0xdc5e,	// (0x0004d8e0) call2_cli_visual_text_pane

0xae71,	// (0x0004aaf3) smil_status_volume_pane_g3

0x0002,

0xdfd9,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g1

0xdfd9,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g2

0xdfd9,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g3

0x0002,

0x0323,	// (0x0003ffa5) call2_cli_visual_graphic_pane_g

0x4ced,	// (0x0004496f) bg_popup_call2_rect_pane_g1

0xe077,	// (0x0004dcf9) bg_popup_call2_rect_pane_g2

0x4cf5,	// (0x00044977) bg_popup_call2_rect_pane_g3

0x4cfd,	// (0x0004497f) bg_popup_call2_rect_pane_g4

0x4d05,	// (0x00044987) bg_popup_call2_rect_pane_g5

0x4d0d,	// (0x0004498f) bg_popup_call2_rect_pane_g6

0x4d15,	// (0x00044997) bg_popup_call2_rect_pane_g7

0x4d1d,	// (0x0004499f) bg_popup_call2_rect_pane_g8

0x4d25,	// (0x000449a7) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ea,	// (0x0004f16c) bg_popup_call2_rect_pane_g

0x4d2d,	// (0x000449af) bg_popup_call2_bubble_pane_g1

0x4d35,	// (0x000449b7) bg_popup_call2_bubble_pane_g2

0x4d3d,	// (0x000449bf) bg_popup_call2_bubble_pane_g3

0x4d45,	// (0x000449c7) bg_popup_call2_bubble_pane_g4

0x4d4d,	// (0x000449cf) bg_popup_call2_bubble_pane_g5

0x4d55,	// (0x000449d7) bg_popup_call2_bubble_pane_g6

0x4d5d,	// (0x000449df) bg_popup_call2_bubble_pane_g7

0x4d65,	// (0x000449e7) bg_popup_call2_bubble_pane_g8

0x4d6d,	// (0x000449ef) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fd,	// (0x0004f17f) bg_popup_call2_bubble_pane_g

0x1de9,	// (0x00041a6b) aid_cale_week_size_cell_pane

0x22bf,	// (0x00041f41) aid_cams_cif_uncrop_pane_ParamLimits

0x22bf,	// (0x00041f41) aid_cams_cif_uncrop_pane

0x2478,	// (0x000420fa) aid_cams_size_cell_ParamLimits

0x2478,	// (0x000420fa) aid_cams_size_cell

0x248c,	// (0x0004210e) grid_cams_pane_ParamLimits

0x24a6,	// (0x00042128) linegrid_cams_pane_ParamLimits

0x2570,	// (0x000421f2) call_video_pane_t1

0x2582,	// (0x00042204) call_video_pane_t2

0x0001,

0xf29c,	// (0x0004ef1e) call_video_pane_t

0x2944,	// (0x000425c6) aid_cale_month_size_cell_pane_ParamLimits

0x2944,	// (0x000425c6) aid_cale_month_size_cell_pane

0xf587,	// (0x0004f209) smil_status_volume_pane_g

0xae7e,	// (0x0004ab00) volume_smil_pane_ParamLimits

0xaab4,	// (0x0004a736) aid_popup2_width_pane

0x1d51,	// (0x000419d3) cell_qdial_pane_g4_ParamLimits

0x1d51,	// (0x000419d3) cell_qdial_pane_g4

0x34d4,	// (0x00043156) aid_blid_cardinal_pane_ParamLimits

0x34e4,	// (0x00043166) aid_blid_destination_pane_ParamLimits

0x34e4,	// (0x00043166) aid_blid_destination_pane

0xdeb9,	// (0x0004db3b) bg_popup_call_poc_act_pane_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_call_poc_act_pane

0xdeb9,	// (0x0004db3b) bg_popup_call_poc_inact_pane_ParamLimits

0xdeb9,	// (0x0004db3b) bg_popup_call_poc_inact_pane

0x4d7d,	// (0x000449ff) bg_popup_call_poc_act_pane_g1

0x4d85,	// (0x00044a07) bg_popup_call_poc_act_pane_g2

0x4d8d,	// (0x00044a0f) bg_popup_call_poc_act_pane_g3

0x4d45,	// (0x000449c7) bg_popup_call_poc_act_pane_g4

0x4d4d,	// (0x000449cf) bg_popup_call_poc_act_pane_g5

0x4d95,	// (0x00044a17) bg_popup_call_poc_act_pane_g6

0x4d5d,	// (0x000449df) bg_popup_call_poc_act_pane_g7

0x4d9d,	// (0x00044a1f) bg_popup_call_poc_act_pane_g8

0xdc5e,	// (0x0004d8e0) main_usb_pane

0x52a2,	// (0x00044f24) popup_cale_lunar_info_window

0x27c4,	// (0x00042446) im_reading_pane_t1_ParamLimits

0xe23e,	// (0x0004dec0) list_im_pane_ParamLimits

0xe24f,	// (0x0004ded1) scroll_pane_cp07_ParamLimits

0xdc5e,	// (0x0004d8e0) grid_highlight_pane_cp012

0xdeb9,	// (0x0004db3b) mup_scale_pane_ParamLimits

0xeb7f,	// (0x0004e801) main_usb_pane_g1_ParamLimits

0xeb7f,	// (0x0004e801) main_usb_pane_g1

0x4dbd,	// (0x00044a3f) main_usb_pane_g2_ParamLimits

0x4dbd,	// (0x00044a3f) main_usb_pane_g2

0x0001,

0xf527,	// (0x0004f1a9) main_usb_pane_g_ParamLimits

0xf527,	// (0x0004f1a9) main_usb_pane_g

0x4dd3,	// (0x00044a55) main_usb_pane_t1_ParamLimits

0x4dd3,	// (0x00044a55) main_usb_pane_t1

0x4de5,	// (0x00044a67) main_usb_pane_t2_ParamLimits

0x4de5,	// (0x00044a67) main_usb_pane_t2

0x4df7,	// (0x00044a79) main_usb_pane_t3_ParamLimits

0x4df7,	// (0x00044a79) main_usb_pane_t3

0x4e09,	// (0x00044a8b) main_usb_pane_t4_ParamLimits

0x4e09,	// (0x00044a8b) main_usb_pane_t4

0x4e1e,	// (0x00044aa0) main_usb_pane_t5_ParamLimits

0x4e1e,	// (0x00044aa0) main_usb_pane_t5

0x4e33,	// (0x00044ab5) main_usb_pane_t6_ParamLimits

0x4e33,	// (0x00044ab5) main_usb_pane_t6

0x0005,

0xf52c,	// (0x0004f1ae) main_usb_pane_t_ParamLimits

0x3473,	// (0x000430f5) aid_text_placing

0x347e,	// (0x00043100) main_location2_pane_t1_ParamLimits

0x3494,	// (0x00043116) main_location2_pane_t2_ParamLimits

0x34aa,	// (0x0004312c) main_location2_pane_t3_ParamLimits

0x34c0,	// (0x00043142) main_location2_pane_t4_ParamLimits

0x34c0,	// (0x00043142) main_location2_pane_t4

0xf3a2,	// (0x0004f024) main_location2_pane_t_ParamLimits

0xdef5,	// (0x0004db77) find_pinb_pane_g2_ParamLimits

0xdef5,	// (0x0004db77) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0004edd2) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0004edd2) find_pinb_pane_g

0xdf01,	// (0x0004db83) find_pinb_pane_t1_ParamLimits

0xdf13,	// (0x0004db95) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0004edd7) find_pinb_pane_t_ParamLimits

0xdc5e,	// (0x0004d8e0) main_call3_pane

0x2cb8,	// (0x0004293a) cale_month_day_heading_pane_t1_ParamLimits

0x2d16,	// (0x00042998) cale_month_day_heading_pane_t2_ParamLimits

0x2d7b,	// (0x000429fd) cale_month_day_heading_pane_t3_ParamLimits

0x2de0,	// (0x00042a62) cale_month_day_heading_pane_t4_ParamLimits

0x2e45,	// (0x00042ac7) cale_month_day_heading_pane_t5_ParamLimits

0x2eaa,	// (0x00042b2c) cale_month_day_heading_pane_t6_ParamLimits

0x2f0f,	// (0x00042b91) cale_month_day_heading_pane_t7_ParamLimits

0xf2c1,	// (0x0004ef43) cale_month_day_heading_pane_t_ParamLimits

0xe48f,	// (0x0004e111) smil_status_volume_pane

0x3c7a,	// (0x000438fc) postcard_address_pane_ParamLimits

0x3c7a,	// (0x000438fc) postcard_address_pane

0x3c90,	// (0x00043912) postcard_message_pane_ParamLimits

0x3c90,	// (0x00043912) postcard_message_pane

0x4cce,	// (0x00044950) call2_cli_visual_pane_t1_ParamLimits

0x4cce,	// (0x00044950) call2_cli_visual_pane_t1

0x5844,	// (0x000454c6) postcard_message_pane_t1_ParamLimits

0x5844,	// (0x000454c6) postcard_message_pane_t1

0x582d,	// (0x000454af) postcard_address_pane_t1_ParamLimits

0x582d,	// (0x000454af) postcard_address_pane_t1

0x5819,	// (0x0004549b) popup_call3_audio_in_window_ParamLimits

0x5819,	// (0x0004549b) popup_call3_audio_in_window

0x569e,	// (0x00045320) bg_popup_call3_in_pane_ParamLimits

0x569e,	// (0x00045320) bg_popup_call3_in_pane

0x571a,	// (0x0004539c) popup_call3_audio_in_window_g1_ParamLimits

0x571a,	// (0x0004539c) popup_call3_audio_in_window_g1

0x573a,	// (0x000453bc) popup_call3_audio_in_window_g2_ParamLimits

0x573a,	// (0x000453bc) popup_call3_audio_in_window_g2

0x575a,	// (0x000453dc) popup_call3_audio_in_window_g3_ParamLimits

0x575a,	// (0x000453dc) popup_call3_audio_in_window_g3

0x0003,

0xf58e,	// (0x0004f210) popup_call3_audio_in_window_g_ParamLimits

0xf58e,	// (0x0004f210) popup_call3_audio_in_window_g

0x578b,	// (0x0004540d) popup_call3_audio_in_window_t1_ParamLimits

0x578b,	// (0x0004540d) popup_call3_audio_in_window_t1

0x57c9,	// (0x0004544b) popup_call3_audio_in_window_t2_ParamLimits

0x57c9,	// (0x0004544b) popup_call3_audio_in_window_t2

0x5807,	// (0x00045489) popup_call3_audio_in_window_t3_ParamLimits

0x5807,	// (0x00045489) popup_call3_audio_in_window_t3

0x0002,

0xf597,	// (0x0004f219) popup_call3_audio_in_window_t_ParamLimits

0xf597,	// (0x0004f219) popup_call3_audio_in_window_t

0xe9e0,	// (0x0004e662) bg_popup_call3_rect_pane

0x4ced,	// (0x0004496f) bg_popup_call3_rect_pane_g1

0xe077,	// (0x0004dcf9) bg_popup_call3_rect_pane_g2

0x4cf5,	// (0x00044977) bg_popup_call3_rect_pane_g3

0x4cfd,	// (0x0004497f) bg_popup_call3_rect_pane_g4

0x4d05,	// (0x00044987) bg_popup_call3_rect_pane_g5

0x4d0d,	// (0x0004498f) bg_popup_call3_rect_pane_g6

0x4d15,	// (0x00044997) bg_popup_call3_rect_pane_g7

0x38bc,	// (0x0004353e) mup_visualizer_osc_pane

0xea9f,	// (0x0004e721) mup_visualizer_spec_pane

0x56ce,	// (0x00045350) call3_video_qcif_pane_ParamLimits

0x56ce,	// (0x00045350) call3_video_qcif_pane

0x56e1,	// (0x00045363) call3_video_qcif_uncrop_pane_ParamLimits

0x56e1,	// (0x00045363) call3_video_qcif_uncrop_pane

0x56f1,	// (0x00045373) call3_video_subqcif_pane_ParamLimits

0x56f1,	// (0x00045373) call3_video_subqcif_pane

0x5707,	// (0x00045389) call3_video_subqcif_uncrop_pane_ParamLimits

0x5707,	// (0x00045389) call3_video_subqcif_uncrop_pane

0x577a,	// (0x000453fc) popup_call3_audio_in_window_g4_ParamLimits

0x577a,	// (0x000453fc) popup_call3_audio_in_window_g4

0x565f,	// (0x000452e1) mup_spec_half_pane

0x5668,	// (0x000452ea) mup_spec_half_pane_cp

0x564d,	// (0x000452cf) mup_osc_middle_pane

0x5656,	// (0x000452d8) mup_visualizer_osc_pane_g1

0x562d,	// (0x000452af) mup_spec_bar_pane_ParamLimits

0x562d,	// (0x000452af) mup_spec_bar_pane

0x561a,	// (0x0004529c) mup_spec_bar_pane_g1

0x5624,	// (0x000452a6) mup_spec_bar_pane_g2

0x0001,

0xf582,	// (0x0004f204) mup_spec_bar_pane_g

0x1de9,	// (0x00041a6b) aid_cale_week_size_cell_pane_ParamLimits

0x1dfc,	// (0x00041a7e) bg_cale_heading_pane_ParamLimits

0xe0ab,	// (0x0004dd2d) bg_cale_pane_cp01_ParamLimits

0x1e18,	// (0x00041a9a) cale_week_corner_pane_ParamLimits

0x1e2e,	// (0x00041ab0) cale_week_day_heading_pane_ParamLimits

0x1e4a,	// (0x00041acc) cale_week_scroll_pane_g1_ParamLimits

0x1e63,	// (0x00041ae5) cale_week_scroll_pane_g2_ParamLimits

0x1e74,	// (0x00041af6) cale_week_scroll_pane_g3_ParamLimits

0x1e85,	// (0x00041b07) cale_week_scroll_pane_g4_ParamLimits

0x1e96,	// (0x00041b18) cale_week_scroll_pane_g5_ParamLimits

0x1ea7,	// (0x00041b29) cale_week_scroll_pane_g6_ParamLimits

0x1eb8,	// (0x00041b3a) cale_week_scroll_pane_g7_ParamLimits

0x1ec9,	// (0x00041b4b) cale_week_scroll_pane_g8_ParamLimits

0x1eda,	// (0x00041b5c) cale_week_scroll_pane_g9_ParamLimits

0x1eeb,	// (0x00041b6d) cale_week_scroll_pane_g10_ParamLimits

0x1efc,	// (0x00041b7e) cale_week_scroll_pane_g11_ParamLimits

0x1f0d,	// (0x00041b8f) cale_week_scroll_pane_g12_ParamLimits

0x1f1e,	// (0x00041ba0) cale_week_scroll_pane_g13_ParamLimits

0x1f37,	// (0x00041bb9) cale_week_scroll_pane_g14_ParamLimits

0x1f50,	// (0x00041bd2) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0004ee63) cale_week_scroll_pane_g_ParamLimits

0x1f69,	// (0x00041beb) cale_week_time_pane_ParamLimits

0x1f7a,	// (0x00041bfc) grid_cale_week_pane_ParamLimits

0xe0c4,	// (0x0004dd46) listscroll_cale_week_pane_t1

0x1f95,	// (0x00041c17) scroll_pane_cp08_ParamLimits

0x2995,	// (0x00042617) cale_month_corner_pane_ParamLimits

0xe465,	// (0x0004e0e7) cale_month_pane_t1

0x2c79,	// (0x000428fb) cale_month_week_pane_ParamLimits

0x3297,	// (0x00042f19) popup_call_status_window_g1_ParamLimits

0x32ab,	// (0x00042f2d) popup_call_status_window_g2_ParamLimits

0x32bf,	// (0x00042f41) popup_call_status_window_g3_ParamLimits

0xf338,	// (0x0004efba) popup_call_status_window_g_ParamLimits

0xe774,	// (0x0004e3f6) aid_call2_pane

0x0df3,	// (0x00040a75) msg_header_pane_g1

0x3c7a,	// (0x000438fc) postcard_address2_pane_ParamLimits

0x3c7a,	// (0x000438fc) postcard_address2_pane

0x3c90,	// (0x00043912) postcard_message2_pane_ParamLimits

0x3c90,	// (0x00043912) postcard_message2_pane

0x5592,	// (0x00045214) message2_row_pane_ParamLimits

0x5592,	// (0x00045214) message2_row_pane

0x55b5,	// (0x00045237) address2_row_pane_ParamLimits

0x55b5,	// (0x00045237) address2_row_pane

0x55c8,	// (0x0004524a) postcard_message2_row_pane_g1

0x55d0,	// (0x00045252) postcard_message2_row_pane_t1

0x55c8,	// (0x0004524a) address2_row_pane_g1

0x55d0,	// (0x00045252) address2_row_pane_t1

0x21a3,	// (0x00041e25) aid_size_cell_vorec

0xdc5e,	// (0x0004d8e0) main_rss_pane

0x55de,	// (0x00045260) rss_list_single_pane_ParamLimits

0x55de,	// (0x00045260) rss_list_single_pane

0x55fe,	// (0x00045280) rss_list_single_pane_t1

0x560c,	// (0x0004528e) rss_list_single_pane_t2

0x0001,

0xf57d,	// (0x0004f1ff) rss_list_single_pane_t

0xdc5e,	// (0x0004d8e0) main_camera2_pane

0xdc5e,	// (0x0004d8e0) main_video2_pane

0x58b3,	// (0x00045535) cams_zoom_pane_cp2_ParamLimits

0x58b3,	// (0x00045535) cams_zoom_pane_cp2

0x58ca,	// (0x0004554c) image2_vga_pane_ParamLimits

0x58ca,	// (0x0004554c) image2_vga_pane

0x5912,	// (0x00045594) main_camera2_pane_g1_ParamLimits

0x5912,	// (0x00045594) main_camera2_pane_g1

0x5932,	// (0x000455b4) main_camera2_pane_g2_ParamLimits

0x5932,	// (0x000455b4) main_camera2_pane_g2

0x5949,	// (0x000455cb) main_camera2_pane_g3_ParamLimits

0x5949,	// (0x000455cb) main_camera2_pane_g3

0x5960,	// (0x000455e2) main_camera2_pane_g4_ParamLimits

0x5960,	// (0x000455e2) main_camera2_pane_g4

0x5977,	// (0x000455f9) main_camera2_pane_g5_ParamLimits

0x5977,	// (0x000455f9) main_camera2_pane_g5

0x598e,	// (0x00045610) main_camera2_pane_g6_ParamLimits

0x598e,	// (0x00045610) main_camera2_pane_g6

0x59a5,	// (0x00045627) main_camera2_pane_g7_ParamLimits

0x59a5,	// (0x00045627) main_camera2_pane_g7

0x59bc,	// (0x0004563e) main_camera2_pane_g8_ParamLimits

0x59bc,	// (0x0004563e) main_camera2_pane_g8

0x0008,

0xf59e,	// (0x0004f220) main_camera2_pane_g_ParamLimits

0xf59e,	// (0x0004f220) main_camera2_pane_g

0x59ea,	// (0x0004566c) main_camera2_pane_t1_ParamLimits

0x59ea,	// (0x0004566c) main_camera2_pane_t1

0x5a1f,	// (0x000456a1) main_camera2_pane_t2_ParamLimits

0x5a1f,	// (0x000456a1) main_camera2_pane_t2

0x5a3c,	// (0x000456be) main_camera2_pane_t3_ParamLimits

0x5a3c,	// (0x000456be) main_camera2_pane_t3

0x5a9a,	// (0x0004571c) main_camera2_pane_t4_ParamLimits

0x5a9a,	// (0x0004571c) main_camera2_pane_t4

0x0006,

0xf5b1,	// (0x0004f233) main_camera2_pane_t_ParamLimits

0xf5b1,	// (0x0004f233) main_camera2_pane_t

0x5b23,	// (0x000457a5) cams_zoom_pane_cp4_ParamLimits

0x5b23,	// (0x000457a5) cams_zoom_pane_cp4

0x5b39,	// (0x000457bb) image2_cif_pane_ParamLimits

0x5b39,	// (0x000457bb) image2_cif_pane

0x5b64,	// (0x000457e6) image2_subqcif_pane_ParamLimits

0x5b64,	// (0x000457e6) image2_subqcif_pane

0x5b7f,	// (0x00045801) main_video2_pane_g1_ParamLimits

0x5b7f,	// (0x00045801) main_video2_pane_g1

0x5b99,	// (0x0004581b) main_video2_pane_g2_ParamLimits

0x5b99,	// (0x0004581b) main_video2_pane_g2

0x5baf,	// (0x00045831) main_video2_pane_g3_ParamLimits

0x5baf,	// (0x00045831) main_video2_pane_g3

0x5bc5,	// (0x00045847) main_video2_pane_g4_ParamLimits

0x5bc5,	// (0x00045847) main_video2_pane_g4

0x5bdb,	// (0x0004585d) main_video2_pane_g5_ParamLimits

0x5bdb,	// (0x0004585d) main_video2_pane_g5

0x5bf1,	// (0x00045873) main_video2_pane_g6_ParamLimits

0x5bf1,	// (0x00045873) main_video2_pane_g6

0x0005,

0xf5c0,	// (0x0004f242) main_video2_pane_g_ParamLimits

0xf5c0,	// (0x0004f242) main_video2_pane_g

0x5c0b,	// (0x0004588d) main_video2_pane_t1_ParamLimits

0x5c0b,	// (0x0004588d) main_video2_pane_t1

0x5c2f,	// (0x000458b1) main_video2_pane_t2_ParamLimits

0x5c2f,	// (0x000458b1) main_video2_pane_t2

0x5c7f,	// (0x00045901) main_video2_pane_t3_ParamLimits

0x5c7f,	// (0x00045901) main_video2_pane_t3

0x0002,

0xf5cd,	// (0x0004f24f) main_video2_pane_t_ParamLimits

0xf5cd,	// (0x0004f24f) main_video2_pane_t

0x4fdf,	// (0x00044c61) call_muted_g2

0x0001,

0xf56f,	// (0x0004f1f1) call_muted_g

0xdc5e,	// (0x0004d8e0) main_mup2_pane

0x5cc7,	// (0x00045949) main_mup2_pane_g1_ParamLimits

0x5cc7,	// (0x00045949) main_mup2_pane_g1

0x5cd3,	// (0x00045955) main_mup2_pane_g2_ParamLimits

0x5cd3,	// (0x00045955) main_mup2_pane_g2

0xaee7,	// (0x0004ab69) main_mup_pane_g13_cp1

0xaeef,	// (0x0004ab71) mup_volume_pane_cp1

0x5cf1,	// (0x00045973) main_mup2_pane_g4_ParamLimits

0x5cf1,	// (0x00045973) main_mup2_pane_g4

0x5d03,	// (0x00045985) main_mup2_pane_g5_ParamLimits

0x5d03,	// (0x00045985) main_mup2_pane_g5

0x5d15,	// (0x00045997) main_mup2_pane_g6_ParamLimits

0x5d15,	// (0x00045997) main_mup2_pane_g6

0x5d27,	// (0x000459a9) main_mup2_pane_g7_ParamLimits

0x5d27,	// (0x000459a9) main_mup2_pane_g7

0x0006,

0xf5d4,	// (0x0004f256) main_mup2_pane_g_ParamLimits

0xf5d4,	// (0x0004f256) main_mup2_pane_g

0x5d3f,	// (0x000459c1) main_mup2_pane_t1_ParamLimits

0x5d3f,	// (0x000459c1) main_mup2_pane_t1

0x5d55,	// (0x000459d7) main_mup2_pane_t2_ParamLimits

0x5d55,	// (0x000459d7) main_mup2_pane_t2

0x5d6b,	// (0x000459ed) main_mup2_pane_t3_ParamLimits

0x5d6b,	// (0x000459ed) main_mup2_pane_t3

0x5d81,	// (0x00045a03) main_mup2_pane_t4_ParamLimits

0x5d81,	// (0x00045a03) main_mup2_pane_t4

0x5d99,	// (0x00045a1b) main_mup2_pane_t5_ParamLimits

0x5d99,	// (0x00045a1b) main_mup2_pane_t5

0x5db1,	// (0x00045a33) main_mup2_pane_t6_ParamLimits

0x5db1,	// (0x00045a33) main_mup2_pane_t6

0x0005,

0xf5e3,	// (0x0004f265) main_mup2_pane_t_ParamLimits

0xf5e3,	// (0x0004f265) main_mup2_pane_t

0x5de1,	// (0x00045a63) mup2_visualizer_pane_ParamLimits

0x5de1,	// (0x00045a63) mup2_visualizer_pane

0x5e0f,	// (0x00045a91) mup_progress_pane_cp_ParamLimits

0x5e0f,	// (0x00045a91) mup_progress_pane_cp

0xaed2,	// (0x0004ab54) mup_volume_pane_cp_ParamLimits

0xaed2,	// (0x0004ab54) mup_volume_pane_cp

0x5e25,	// (0x00045aa7) mup2_visualizer_pane_g1_ParamLimits

0x5e25,	// (0x00045aa7) mup2_visualizer_pane_g1

0x5e3a,	// (0x00045abc) mup2_visualizer_pane_g2_ParamLimits

0x5e3a,	// (0x00045abc) mup2_visualizer_pane_g2

0x5e46,	// (0x00045ac8) mup2_visualizer_pane_g3_ParamLimits

0x5e46,	// (0x00045ac8) mup2_visualizer_pane_g3

0x0002,

0xf5f0,	// (0x0004f272) mup2_visualizer_pane_g_ParamLimits

0xf5f0,	// (0x0004f272) mup2_visualizer_pane_g

0xecc8,	// (0x0004e94a) aid_size_cell_fmradio

0x51c0,	// (0x00044e42) aid_height_parent_landcape

0xe2cd,	// (0x0004df4f) wml_content_pane_cp

0xe2d5,	// (0x0004df57) wml_tabs_pane

0xe2de,	// (0x0004df60) popup_wml_miniature_window

0xe2e6,	// (0x0004df68) scroll_pane_cp021

0xe2fa,	// (0x0004df7c) wml_content_pane_comp8

0xdc5e,	// (0x0004d8e0) bg_popup_sub_pane_cp05

0x5e64,	// (0x00045ae6) popup_wml_miniature_window_g1

0x5e6c,	// (0x00045aee) wml_miniature_view_pane

0x5e74,	// (0x00045af6) aid_size_wml_view

0x5e7c,	// (0x00045afe) wml_miniature_view_pane_g1

0x5e85,	// (0x00045b07) wml_miniature_view_pane_g2

0x5e8e,	// (0x00045b10) wml_miniature_view_pane_g3

0x5e96,	// (0x00045b18) wml_miniature_view_pane_g4

0x5e9e,	// (0x00045b20) wml_miniature_view_pane_g5

0x5ea6,	// (0x00045b28) wml_miniature_view_pane_g6

0x5eae,	// (0x00045b30) wml_miniature_view_pane_g7

0x5eb6,	// (0x00045b38) wml_miniature_view_pane_g8

0x0007,

0xf5f7,	// (0x0004f279) wml_miniature_view_pane_g

0x5ebe,	// (0x00045b40) background_graphic_ParamLimits

0x5ebe,	// (0x00045b40) background_graphic

0x5eca,	// (0x00045b4c) wml_tabs_2_pane

0x5ed3,	// (0x00045b55) wml_tabs_3_pane_ParamLimits

0x5ed3,	// (0x00045b55) wml_tabs_3_pane

0x5ee5,	// (0x00045b67) wml_tabs_4_pane_ParamLimits

0x5ee5,	// (0x00045b67) wml_tabs_4_pane

0x5efb,	// (0x00045b7d) wml_tabs_5_pane_ParamLimits

0x5efb,	// (0x00045b7d) wml_tabs_5_pane

0x5f15,	// (0x00045b97) wml_tabs_pane_g2_ParamLimits

0x5f15,	// (0x00045b97) wml_tabs_pane_g2

0x5f29,	// (0x00045bab) wml_tabs_pane_g3_ParamLimits

0x5f29,	// (0x00045bab) wml_tabs_pane_g3

0x5f3d,	// (0x00045bbf) wml_tabs_2_active_pane_ParamLimits

0x5f3d,	// (0x00045bbf) wml_tabs_2_active_pane

0x5f51,	// (0x00045bd3) wml_tabs_2_passive_pane_ParamLimits

0x5f51,	// (0x00045bd3) wml_tabs_2_passive_pane

0x5f65,	// (0x00045be7) wml_tabs_3_active_pane_cp_ParamLimits

0x5f65,	// (0x00045be7) wml_tabs_3_active_pane_cp

0x5f7a,	// (0x00045bfc) wml_tabs_3_passive_pane_ParamLimits

0x5f7a,	// (0x00045bfc) wml_tabs_3_passive_pane

0x5f8d,	// (0x00045c0f) wml_tabs_3_passive_pane_cp_ParamLimits

0x5f8d,	// (0x00045c0f) wml_tabs_3_passive_pane_cp

0x5fa4,	// (0x00045c26) tabs_4_active_pane

0x5fac,	// (0x00045c2e) tabs_4_passive_pane

0x5fb6,	// (0x00045c38) tabs_4_passive_pane_cp

0x5fbe,	// (0x00045c40) tabs_4_passive_pane_cp2

0x4d75,	// (0x000449f7) aid_height_text

0x388e,	// (0x00043510) mup_volume_cont_pane_ParamLimits

0x388e,	// (0x00043510) mup_volume_cont_pane

0x19ed,	// (0x0004166f) aid_size_cell_pinb

0x19f7,	// (0x00041679) aid_size_list_pinb

0x5dfb,	// (0x00045a7d) mup2_volume_cont_pane_ParamLimits

0x5dfb,	// (0x00045a7d) mup2_volume_cont_pane

0xaebe,	// (0x0004ab40) mup2_volume_cont_pane_g1_ParamLimits

0xaebe,	// (0x0004ab40) mup2_volume_cont_pane_g1

0x16c1,	// (0x00041343) aid_size_cell_touch_ParamLimits

0x16c1,	// (0x00041343) aid_size_cell_touch

0x18dc,	// (0x0004155e) touch_pane_ParamLimits

0x18dc,	// (0x0004155e) touch_pane

0xaaa2,	// (0x0004a724) main_rss2_pane

0x5fd1,	// (0x00045c53) listscroll_rss2_pane

0x5fda,	// (0x00045c5c) rss2_navigation_pane

0x5fe2,	// (0x00045c64) list_rss2_pane

0xe8a6,	// (0x0004e528) scroll_pane_cp22

0x5fea,	// (0x00045c6c) rss2_navigation_pane_g1

0x5ff3,	// (0x00045c75) rss2_navigation_pane_g2

0x5ffb,	// (0x00045c7d) rss2_navigation_pane_g3

0x0002,

0xf608,	// (0x0004f28a) rss2_navigation_pane_g

0x6003,	// (0x00045c85) rss2_navigation_pane_t1

0x6011,	// (0x00045c93) rss2_list_single_pane_ParamLimits

0x6011,	// (0x00045c93) rss2_list_single_pane

0x602b,	// (0x00045cad) rss2_list_single_pane_t2

0x6039,	// (0x00045cbb) rss2_list_single_pane_t3_ParamLimits

0x6039,	// (0x00045cbb) rss2_list_single_pane_t3

0x6056,	// (0x00045cd8) rss2_list_single_pane_t4

0x30db,	// (0x00042d5d) smil_status_pane_g1

0xefa9,	// (0x0004ec2b) main_image2_pane_ParamLimits

0xefa9,	// (0x0004ec2b) main_image2_pane

0x59d3,	// (0x00045655) main_camera2_pane_g9_ParamLimits

0x59d3,	// (0x00045655) main_camera2_pane_g9

0x5aef,	// (0x00045771) main_camera2_pane_t5_ParamLimits

0x5aef,	// (0x00045771) main_camera2_pane_t5

0xae93,	// (0x0004ab15) main_camera2_pane_t6_ParamLimits

0xae93,	// (0x0004ab15) main_camera2_pane_t6

0x6064,	// (0x00045ce6) main_image2_pane_g1_ParamLimits

0x6064,	// (0x00045ce6) main_image2_pane_g1

0x3ed1,	// (0x00043b53) smil2_video_pane_ParamLimits

0x3ed1,	// (0x00043b53) smil2_video_pane

0xaad0,	// (0x0004a752) aid_zoom_text_primary_cp

0xd841,	// (0x0004d4c3) popup_preview_fixed_window

0xe236,	// (0x0004deb8) im_reading_pane_g1

0x58a5,	// (0x00045527) cams2_bc_adjust_pane_cp_ParamLimits

0x58a5,	// (0x00045527) cams2_bc_adjust_pane_cp

0x5b15,	// (0x00045797) cams2_bc_adjust_pane_ParamLimits

0x5b15,	// (0x00045797) cams2_bc_adjust_pane

0xaef7,	// (0x0004ab79) cams2_bc_adjust_pane_g1

0xaeff,	// (0x0004ab81) cams2_slider_pane

0xaf08,	// (0x0004ab8a) cams2_slider_pane_g1

0xaf11,	// (0x0004ab93) cams2_slider_pane_g2

0x0006,

0xf60f,	// (0x0004f291) cams2_slider_pane_g

0x1ae7,	// (0x00041769) calc_display_pane_ParamLimits

0x1b0d,	// (0x0004178f) calc_paper_pane_ParamLimits

0x1b30,	// (0x000417b2) grid_calc_pane_ParamLimits

0xae00,	// (0x0004aa82) popup_clock_digital_window_t1_ParamLimits

0xec65,	// (0x0004e8e7) main_image_pane_t1

0x1ac9,	// (0x0004174b) aid_size_cell_calc_ParamLimits

0x1ac9,	// (0x0004174b) aid_size_cell_calc

0x5224,	// (0x00044ea6) popup_blid_sat_info2_window_ParamLimits

0x5224,	// (0x00044ea6) popup_blid_sat_info2_window

0x6082,	// (0x00045d04) aid_size_cell_blid

0x608a,	// (0x00045d0c) bg_popup_window_pane_cp07

0x60ad,	// (0x00045d2f) grid_popup_blid_pane

0x60b7,	// (0x00045d39) heading_pane_cp05_ParamLimits

0x60b7,	// (0x00045d39) heading_pane_cp05

0x6181,	// (0x00045e03) cell_popup_blid_pane_ParamLimits

0x6181,	// (0x00045e03) cell_popup_blid_pane

0x61ab,	// (0x00045e2d) cell_popup_blid_pane_g1

0x61b3,	// (0x00045e35) cell_popup_blid_pane_t1

0x5dcb,	// (0x00045a4d) mup2_indicator_pane_ParamLimits

0x5dcb,	// (0x00045a4d) mup2_indicator_pane

0xe9e0,	// (0x0004e662) mup2_visualizer_osc_pane

0x5e52,	// (0x00045ad4) mup2_visualizer_spec_pane_ParamLimits

0x5e52,	// (0x00045ad4) mup2_visualizer_spec_pane

0x61c1,	// (0x00045e43) mup2_spec_half_pane

0x61ca,	// (0x00045e4c) mup2_spec_half_pane_cp

0x61d2,	// (0x00045e54) mup2_spec_bar_pane_ParamLimits

0x61d2,	// (0x00045e54) mup2_spec_bar_pane

0x561a,	// (0x0004529c) mup2_spec_bar_pane_g1

0x5624,	// (0x000452a6) mup2_spec_bar_pane_g2

0x0001,

0xf582,	// (0x0004f204) mup2_spec_bar_pane_g

0x61f2,	// (0x00045e74) mup2_osc_middle_pane

0x5656,	// (0x000452d8) mup2_visualizer_osc_pane_g1

0xd86b,	// (0x0004d4ed) popup_number_entry_window_t1_ParamLimits

0xd87e,	// (0x0004d500) popup_number_entry_window_t2_ParamLimits

0xd890,	// (0x0004d512) popup_number_entry_window_t3_ParamLimits

0x192e,	// (0x000415b0) popup_number_entry_window_t5_ParamLimits

0x192e,	// (0x000415b0) popup_number_entry_window_t5

0xf0fb,	// (0x0004ed7d) popup_number_entry_window_t_ParamLimits

0xd8a2,	// (0x0004d524) text_title_cp2_ParamLimits

0xae3f,	// (0x0004aac1) aid_hotspot_pointer_text2_pane

0xae65,	// (0x0004aae7) main_viewer_pane_g9_ParamLimits

0xae65,	// (0x0004aae7) main_viewer_pane_g9

0xe465,	// (0x0004e0e7) cale_month_pane_t1_ParamLimits

0xe4a2,	// (0x0004e124) bg_cale_pane_ParamLimits

0xe4ba,	// (0x0004e13c) list_cale_pane_ParamLimits

0xe0c4,	// (0x0004dd46) listscroll_cale_day_pane_t1

0xe4cb,	// (0x0004e14d) scroll_pane_cp09_ParamLimits

0x38c4,	// (0x00043546) main_mup_eq_pane_t1_ParamLimits

0x38c4,	// (0x00043546) main_mup_eq_pane_t1

0x38e0,	// (0x00043562) main_mup_eq_pane_t2_ParamLimits

0x38e0,	// (0x00043562) main_mup_eq_pane_t2

0x38fc,	// (0x0004357e) main_mup_eq_pane_t3_ParamLimits

0x38fc,	// (0x0004357e) main_mup_eq_pane_t3

0x391a,	// (0x0004359c) main_mup_eq_pane_t4_ParamLimits

0x391a,	// (0x0004359c) main_mup_eq_pane_t4

0x3938,	// (0x000435ba) main_mup_eq_pane_t5_ParamLimits

0x3938,	// (0x000435ba) main_mup_eq_pane_t5

0x3956,	// (0x000435d8) main_mup_eq_pane_t6_ParamLimits

0x3956,	// (0x000435d8) main_mup_eq_pane_t6

0x396c,	// (0x000435ee) main_mup_eq_pane_t7_ParamLimits

0x396c,	// (0x000435ee) main_mup_eq_pane_t7

0x3982,	// (0x00043604) main_mup_eq_pane_t8_ParamLimits

0x3982,	// (0x00043604) main_mup_eq_pane_t8

0x3998,	// (0x0004361a) main_mup_eq_pane_t9_ParamLimits

0x3998,	// (0x0004361a) main_mup_eq_pane_t9

0x39b4,	// (0x00043636) main_mup_eq_pane_t10_ParamLimits

0x39b4,	// (0x00043636) main_mup_eq_pane_t10

0x0009,

0xf402,	// (0x0004f084) main_mup_eq_pane_t_ParamLimits

0xf402,	// (0x0004f084) main_mup_eq_pane_t

0x3a89,	// (0x0004370b) mup_equalizer_pane_cp5_ParamLimits

0x3aa1,	// (0x00043723) mup_equalizer_pane_cp6_ParamLimits

0x3ab9,	// (0x0004373b) mup_equalizer_pane_cp7_ParamLimits

0xaaa2,	// (0x0004a724) main_gallery_pane

0x5670,	// (0x000452f2) smil2_volume_pane

0x5678,	// (0x000452fa) smil_status_volume_pane_g1_ParamLimits

0x568b,	// (0x0004530d) smil_status_volume_pane_g2_ParamLimits

0xae71,	// (0x0004aaf3) smil_status_volume_pane_g3_ParamLimits

0xf587,	// (0x0004f209) smil_status_volume_pane_g_ParamLimits

0x608a,	// (0x00045d0c) bg_popup_window_pane_cp07_ParamLimits

0x6098,	// (0x00045d1a) blid_firmament_pane

0x61fb,	// (0x00045e7d) aid_size_cell_gallery_ParamLimits

0x61fb,	// (0x00045e7d) aid_size_cell_gallery

0x6211,	// (0x00045e93) grid_gallery_pane_ParamLimits

0x6211,	// (0x00045e93) grid_gallery_pane

0x622c,	// (0x00045eae) cell_gallery_pane_ParamLimits

0x622c,	// (0x00045eae) cell_gallery_pane

0x627d,	// (0x00045eff) bg_cell_gallery_focus_pane_ParamLimits

0x627d,	// (0x00045eff) bg_cell_gallery_focus_pane

0x628f,	// (0x00045f11) cell_gallery_pane_g1_ParamLimits

0x628f,	// (0x00045f11) cell_gallery_pane_g1

0x629b,	// (0x00045f1d) cell_gallery_pane_g2_ParamLimits

0x629b,	// (0x00045f1d) cell_gallery_pane_g2

0x62a8,	// (0x00045f2a) cell_gallery_pane_g3_ParamLimits

0x62a8,	// (0x00045f2a) cell_gallery_pane_g3

0x62b5,	// (0x00045f37) cell_gallery_pane_g4_ParamLimits

0x62b5,	// (0x00045f37) cell_gallery_pane_g4

0x0003,

0xf635,	// (0x0004f2b7) cell_gallery_pane_g_ParamLimits

0xf635,	// (0x0004f2b7) cell_gallery_pane_g

0x62c1,	// (0x00045f43) bg_cell_gallery_focus_pane_g1

0x62c9,	// (0x00045f4b) bg_cell_gallery_focus_pane_g2

0x62d1,	// (0x00045f53) bg_cell_gallery_focus_pane_g3

0x62d9,	// (0x00045f5b) bg_cell_gallery_focus_pane_g4

0x62e1,	// (0x00045f63) bg_cell_gallery_focus_pane_g5

0x62e9,	// (0x00045f6b) bg_cell_gallery_focus_pane_g6

0x62f1,	// (0x00045f73) bg_cell_gallery_focus_pane_g7

0x62f9,	// (0x00045f7b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63e,	// (0x0004f2c0) bg_cell_gallery_focus_pane_g

0x6301,	// (0x00045f83) aid_firma_cardinal

0x6315,	// (0x00045f97) blid_firmament_pane_t1

0x632c,	// (0x00045fae) blid_firmament_pane_t2

0x6343,	// (0x00045fc5) blid_firmament_pane_t3

0x635a,	// (0x00045fdc) blid_firmament_pane_t4

0x0003,

0xf64f,	// (0x0004f2d1) blid_firmament_pane_t

0x6371,	// (0x00045ff3) blid_sat_info_pane

0x6381,	// (0x00046003) blid_sat_info_pane_g1

0x6381,	// (0x00046003) blid_sat_info_pane_g2

0x0001,

0xf658,	// (0x0004f2da) blid_sat_info_pane_g

0x638b,	// (0x0004600d) blid_sat_info_pane_t1

0x6399,	// (0x0004601b) smil2_volume_content_pane

0x63a2,	// (0x00046024) smil2_volume_pane_g1

0x63aa,	// (0x0004602c) smil2_volume_content_pane_g1

0x63b3,	// (0x00046035) smil2_volume_content_pane_g2

0x63bc,	// (0x0004603e) smil2_volume_content_pane_g3

0x63c5,	// (0x00046047) smil2_volume_content_pane_g4

0x63ce,	// (0x00046050) smil2_volume_content_pane_g5

0x63d7,	// (0x00046059) smil2_volume_content_pane_g6

0x63e0,	// (0x00046062) smil2_volume_content_pane_g7

0x63e9,	// (0x0004606b) smil2_volume_content_pane_g8

0x63f2,	// (0x00046074) smil2_volume_content_pane_g9

0x63fb,	// (0x0004607d) smil2_volume_content_pane_g10

0x0009,

0xf65d,	// (0x0004f2df) smil2_volume_content_pane_g

0x1ff5,	// (0x00041c77) cale_week_day_heading_pane_t1_ParamLimits

0x2009,	// (0x00041c8b) cale_week_day_heading_pane_t2_ParamLimits

0x201d,	// (0x00041c9f) cale_week_day_heading_pane_t3_ParamLimits

0x2031,	// (0x00041cb3) cale_week_day_heading_pane_t4_ParamLimits

0x2045,	// (0x00041cc7) cale_week_day_heading_pane_t5_ParamLimits

0x2059,	// (0x00041cdb) cale_week_day_heading_pane_t6_ParamLimits

0x206d,	// (0x00041cef) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0004ee82) cale_week_day_heading_pane_t_ParamLimits

0xe0d6,	// (0x0004dd58) bg_cale_side_pane_ParamLimits

0x2081,	// (0x00041d03) cale_week_time_pane_t1_ParamLimits

0x2099,	// (0x00041d1b) cale_week_time_pane_t2_ParamLimits

0x20b1,	// (0x00041d33) cale_week_time_pane_t3_ParamLimits

0x20c9,	// (0x00041d4b) cale_week_time_pane_t4_ParamLimits

0x20e1,	// (0x00041d63) cale_week_time_pane_t5_ParamLimits

0x20f9,	// (0x00041d7b) cale_week_time_pane_t6_ParamLimits

0x2111,	// (0x00041d93) cale_week_time_pane_t7_ParamLimits

0x212d,	// (0x00041daf) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0004ee91) cale_week_time_pane_t_ParamLimits

0x214d,	// (0x00041dcf) cell_cale_week_pane_g2_ParamLimits

0xe0d6,	// (0x0004dd58) bg_cale_side_pane_cp01_ParamLimits

0x2f74,	// (0x00042bf6) cale_month_week_pane_t1_ParamLimits

0x2f8b,	// (0x00042c0d) cale_month_week_pane_t2_ParamLimits

0x2fa2,	// (0x00042c24) cale_month_week_pane_t3_ParamLimits

0x2fb9,	// (0x00042c3b) cale_month_week_pane_t4_ParamLimits

0x2fd0,	// (0x00042c52) cale_month_week_pane_t5_ParamLimits

0x2fe7,	// (0x00042c69) cale_month_week_pane_t6_ParamLimits

0xf2d0,	// (0x0004ef52) cale_month_week_pane_t_ParamLimits

0xad09,	// (0x0004a98b) cell_cale_month_pane_g1_ParamLimits

0xaaa2,	// (0x0004a724) main_cale_event_viewer_pane

0xaaa2,	// (0x0004a724) listscroll_cale_event_viewer_pane

0x6404,	// (0x00046086) list_cale_ev_pane

0x640c,	// (0x0004608e) scroll_pane_cp023

0x6418,	// (0x0004609a) field_cale_ev_pane_ParamLimits

0x6418,	// (0x0004609a) field_cale_ev_pane

0x643c,	// (0x000460be) field_cale_ev_content_pane_ParamLimits

0x643c,	// (0x000460be) field_cale_ev_content_pane

0x6448,	// (0x000460ca) field_cale_ev_pane_g1_ParamLimits

0x6448,	// (0x000460ca) field_cale_ev_pane_g1

0x6454,	// (0x000460d6) field_cale_ev_pane_g2_ParamLimits

0x6454,	// (0x000460d6) field_cale_ev_pane_g2

0x646c,	// (0x000460ee) field_cale_ev_pane_g3_ParamLimits

0x646c,	// (0x000460ee) field_cale_ev_pane_g3

0x0002,

0xf672,	// (0x0004f2f4) field_cale_ev_pane_g_ParamLimits

0xf672,	// (0x0004f2f4) field_cale_ev_pane_g

0x6484,	// (0x00046106) field_cale_ev_pane_t1_ParamLimits

0x6484,	// (0x00046106) field_cale_ev_pane_t1

0x649b,	// (0x0004611d) field_cale_ev_content_pane_t1_ParamLimits

0x649b,	// (0x0004611d) field_cale_ev_content_pane_t1

0xeb4b,	// (0x0004e7cd) bg_button_pane_cp01

0xdf84,	// (0x0004dc06) listscroll_cale_week_pane_ParamLimits

0x1ddf,	// (0x00041a61) popup_toolbar_window_cp01

0xe0c4,	// (0x0004dd46) listscroll_cale_week_pane_t1_ParamLimits

0xdf84,	// (0x0004dc06) listscroll_cale_day_pane_ParamLimits

0x313b,	// (0x00042dbd) popup_toolbar_window_cp02

0xe0c4,	// (0x0004dd46) listscroll_cale_day_pane_t1_ParamLimits

0xdf84,	// (0x0004dc06) main_cale_month_pane_ParamLimits

0x54df,	// (0x00045161) popup_toolbar_window_cp03_ParamLimits

0x54df,	// (0x00045161) popup_toolbar_window_cp03

0x3d8f,	// (0x00043a11) main_image_pane_g2_ParamLimits

0x3d8f,	// (0x00043a11) main_image_pane_g2

0x3da0,	// (0x00043a22) main_image_pane_g3_ParamLimits

0x3da0,	// (0x00043a22) main_image_pane_g3

0x0002,

0xf48a,	// (0x0004f10c) main_image_pane_g_ParamLimits

0xf48a,	// (0x0004f10c) main_image_pane_g

0xec65,	// (0x0004e8e7) main_image_pane_t1_ParamLimits

0x3db1,	// (0x00043a33) main_image_pane_t2_ParamLimits

0x3db1,	// (0x00043a33) main_image_pane_t2

0x3dc3,	// (0x00043a45) main_image_pane_t3_ParamLimits

0x3dc3,	// (0x00043a45) main_image_pane_t3

0x3deb,	// (0x00043a6d) main_image_pane_t4_ParamLimits

0x3deb,	// (0x00043a6d) main_image_pane_t4

0x0003,

0xf491,	// (0x0004f113) main_image_pane_t_ParamLimits

0xf491,	// (0x0004f113) main_image_pane_t

0x3e0b,	// (0x00043a8d) popup_image_details_window_cp01

0x3e15,	// (0x00043a97) popup_toobar_trans_pane_cp01_ParamLimits

0x3e15,	// (0x00043a97) popup_toobar_trans_pane_cp01

0x5323,	// (0x00044fa5) popup_image_details_window_ParamLimits

0x5323,	// (0x00044fa5) popup_image_details_window

0x533b,	// (0x00044fbd) popup_image_focus_window

0x585f,	// (0x000454e1) camera2_autofocus_pane_ParamLimits

0x585f,	// (0x000454e1) camera2_autofocus_pane

0xaaa2,	// (0x0004a724) bg_popup_sub_pane_cp06

0x64bc,	// (0x0004613e) popup_image_focus_window_g1

0x64c4,	// (0x00046146) popup_image_focus_window_g2

0x64cc,	// (0x0004614e) popup_image_focus_window_g3

0x64d4,	// (0x00046156) popup_image_focus_window_g4

0x0003,

0xf679,	// (0x0004f2fb) popup_image_focus_window_g

0x64dc,	// (0x0004615e) popup_image_focus_window_t1

0x64ea,	// (0x0004616c) popup_image_focus_window_t2

0x64fa,	// (0x0004617c) popup_image_focus_window_t3

0x0002,

0xf682,	// (0x0004f304) popup_image_focus_window_t

0x6508,	// (0x0004618a) camera2_autofocus_pane_g1

0xefa9,	// (0x0004ec2b) bg_tb_trans_pane_cp01

0x6546,	// (0x000461c8) popup_image_details_window_g1

0x6559,	// (0x000461db) popup_image_details_window_g2

0x0002,

0xf694,	// (0x0004f316) popup_image_details_window_g

0x6582,	// (0x00046204) popup_image_details_window_t1

0x6594,	// (0x00046216) popup_image_details_window_t2

0x65ad,	// (0x0004622f) popup_image_details_window_t3

0x65c1,	// (0x00046243) popup_image_details_window_t4

0x65dc,	// (0x0004625e) popup_image_details_window_t5

0x0004,

0xf69b,	// (0x0004f31d) popup_image_details_window_t

0xdf70,	// (0x0004dbf2) bg_calc_paper_pane_ParamLimits

0xaaa2,	// (0x0004a724) grid_highlight_pane_cp013

0xab19,	// (0x0004a79b) list_calc_pane_ParamLimits

0xab2b,	// (0x0004a7ad) scroll_pane_cp024

0xdf84,	// (0x0004dc06) bg_calc_display_pane_ParamLimits

0x1c27,	// (0x000418a9) calc_display_pane_t1_ParamLimits

0x1c39,	// (0x000418bb) calc_display_pane_t2_ParamLimits

0xab33,	// (0x0004a7b5) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0004ee04) calc_display_pane_t_ParamLimits

0x1cfc,	// (0x0004197e) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0004ee21) cell_calc_pane_g

0x1d05,	// (0x00041987) cell_calc_pane_t1

0xdfe3,	// (0x0004dc65) grid_highlight_pane_cp02_ParamLimits

0xdff9,	// (0x0004dc7b) toolbar_button_pane_cp01_ParamLimits

0xdff9,	// (0x0004dc7b) toolbar_button_pane_cp01

0xecaa,	// (0x0004e92c) temp_image_control_pane_ParamLimits

0xecaa,	// (0x0004e92c) temp_image_control_pane

0xefa9,	// (0x0004ec2b) main_mp3_pane

0x65f6,	// (0x00046278) temp_image_control_pane_g1_ParamLimits

0x65f6,	// (0x00046278) temp_image_control_pane_g1

0x6604,	// (0x00046286) temp_image_control_pane_g2_ParamLimits

0x6604,	// (0x00046286) temp_image_control_pane_g2

0x6616,	// (0x00046298) temp_image_control_pane_g3_ParamLimits

0x6616,	// (0x00046298) temp_image_control_pane_g3

0x6626,	// (0x000462a8) temp_image_control_pane_g4_ParamLimits

0x6626,	// (0x000462a8) temp_image_control_pane_g4

0x0003,

0xf6a6,	// (0x0004f328) temp_image_control_pane_g_ParamLimits

0xf6a6,	// (0x0004f328) temp_image_control_pane_g

0x65f6,	// (0x00046278) main_mp3_pane_g1

0x6639,	// (0x000462bb) main_mp3_pane_g2

0x0007,

0xf6af,	// (0x0004f331) main_mp3_pane_g

0x6692,	// (0x00046314) main_mp3_pane_t1

0xe13b,	// (0x0004ddbd) main_camera_pane_g8_ParamLimits

0xe13b,	// (0x0004ddbd) main_camera_pane_g8

0x241e,	// (0x000420a0) main_video_pane_g7_ParamLimits

0x241e,	// (0x000420a0) main_video_pane_g7

0xaeac,	// (0x0004ab2e) main_camera2_pane_t7_ParamLimits

0xaeac,	// (0x0004ab2e) main_camera2_pane_t7

0xe28d,	// (0x0004df0f) scroll_pane_cp025_ParamLimits

0xe28d,	// (0x0004df0f) scroll_pane_cp025

0xe2a1,	// (0x0004df23) scroll_pane_cp026_ParamLimits

0xe2a1,	// (0x0004df23) scroll_pane_cp026

0xe2b0,	// (0x0004df32) wml_content_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_touch_calib_pane

0x6765,	// (0x000463e7) main_touch_calib_pane_g1

0x6771,	// (0x000463f3) main_touch_calib_pane_g2

0x677d,	// (0x000463ff) main_touch_calib_pane_g3

0x6789,	// (0x0004640b) main_touch_calib_pane_g4

0x0003,

0xf6cd,	// (0x0004f34f) main_touch_calib_pane_g

0x6795,	// (0x00046417) main_touch_calib_pane_t1

0x67af,	// (0x00046431) main_touch_calib_pane_t2

0x0004,

0xf6d6,	// (0x0004f358) main_touch_calib_pane_t

0xe921,	// (0x0004e5a3) mup_progress_pane_cp02

0xe940,	// (0x0004e5c2) navi_pane_g1

0xe9a2,	// (0x0004e624) navi_pane_mp_t3

0xefa9,	// (0x0004ec2b) main_mp3_pane_ParamLimits

0x5534,	// (0x000451b6) navi_pane_ParamLimits

0x65f6,	// (0x00046278) main_mp3_pane_g1_ParamLimits

0x6639,	// (0x000462bb) main_mp3_pane_g2_ParamLimits

0x6645,	// (0x000462c7) main_mp3_pane_g3_ParamLimits

0x6645,	// (0x000462c7) main_mp3_pane_g3

0x6653,	// (0x000462d5) main_mp3_pane_g4_ParamLimits

0x6653,	// (0x000462d5) main_mp3_pane_g4

0x665f,	// (0x000462e1) main_mp3_pane_g5_ParamLimits

0x665f,	// (0x000462e1) main_mp3_pane_g5

0x666d,	// (0x000462ef) main_mp3_pane_g6_ParamLimits

0x666d,	// (0x000462ef) main_mp3_pane_g6

0x667a,	// (0x000462fc) main_mp3_pane_g7_ParamLimits

0x667a,	// (0x000462fc) main_mp3_pane_g7

0x6686,	// (0x00046308) main_mp3_pane_g8_ParamLimits

0x6686,	// (0x00046308) main_mp3_pane_g8

0xf6af,	// (0x0004f331) main_mp3_pane_g_ParamLimits

0x66a0,	// (0x00046322) main_mp3_pane_t2

0x66ae,	// (0x00046330) main_mp3_pane_t3

0x66bc,	// (0x0004633e) main_mp3_pane_t4

0x66ca,	// (0x0004634c) main_mp3_pane_t5

0x0005,

0xf6c0,	// (0x0004f342) main_mp3_pane_t

0x66e6,	// (0x00046368) mup_progress_pane_cp01

0xaad0,	// (0x0004a752) aid_zoom_text_secondary2

0x6404,	// (0x00046086) list_cale_ev2_pane

0x640c,	// (0x0004608e) scroll_pane_cp023_ParamLimits

0x6807,	// (0x00046489) field_cale_ev2_pane_ParamLimits

0x6807,	// (0x00046489) field_cale_ev2_pane

0xaf2b,	// (0x0004abad) field_cale_ev2_pane_g1_ParamLimits

0xaf2b,	// (0x0004abad) field_cale_ev2_pane_g1

0xaf37,	// (0x0004abb9) field_cale_ev2_pane_g2_ParamLimits

0xaf37,	// (0x0004abb9) field_cale_ev2_pane_g2

0xaf4f,	// (0x0004abd1) field_cale_ev2_pane_g3_ParamLimits

0xaf4f,	// (0x0004abd1) field_cale_ev2_pane_g3

0x0003,

0xf6e1,	// (0x0004f363) field_cale_ev2_pane_g_ParamLimits

0xf6e1,	// (0x0004f363) field_cale_ev2_pane_g

0xaf73,	// (0x0004abf5) field_cale_ev2_pane_t1_ParamLimits

0xaf73,	// (0x0004abf5) field_cale_ev2_pane_t1

0xaf8a,	// (0x0004ac0c) field_cale_ev2_pane_t2_ParamLimits

0xaf8a,	// (0x0004ac0c) field_cale_ev2_pane_t2

0x0001,

0xf6ea,	// (0x0004f36c) field_cale_ev2_pane_t_ParamLimits

0xf6ea,	// (0x0004f36c) field_cale_ev2_pane_t

0x3c2a,	// (0x000438ac) main_postcard_pane_g5_ParamLimits

0x3c2a,	// (0x000438ac) main_postcard_pane_g5

0x3c40,	// (0x000438c2) main_postcard_pane_g6_ParamLimits

0x3c40,	// (0x000438c2) main_postcard_pane_g6

0x21ca,	// (0x00041e4c) camera2_autofocus_pane_cp_ParamLimits

0x21ca,	// (0x00041e4c) camera2_autofocus_pane_cp

0xefa9,	// (0x0004ec2b) main_mup3_pane

0x684b,	// (0x000464cd) main_mup3_pane_g1_ParamLimits

0x684b,	// (0x000464cd) main_mup3_pane_g1

0x686d,	// (0x000464ef) main_mup3_pane_g2_ParamLimits

0x686d,	// (0x000464ef) main_mup3_pane_g2

0x68f0,	// (0x00046572) main_mup3_pane_g3_ParamLimits

0x68f0,	// (0x00046572) main_mup3_pane_g3

0x6934,	// (0x000465b6) main_mup3_pane_g4_ParamLimits

0x6934,	// (0x000465b6) main_mup3_pane_g4

0x6978,	// (0x000465fa) main_mup3_pane_g5_ParamLimits

0x6978,	// (0x000465fa) main_mup3_pane_g5

0x69bc,	// (0x0004663e) main_mup3_pane_g6_ParamLimits

0x69bc,	// (0x0004663e) main_mup3_pane_g6

0x69cf,	// (0x00046651) main_mup3_pane_g7_ParamLimits

0x69cf,	// (0x00046651) main_mup3_pane_g7

0x0007,

0xf6fa,	// (0x0004f37c) main_mup3_pane_g_ParamLimits

0xf6fa,	// (0x0004f37c) main_mup3_pane_g

0x6a46,	// (0x000466c8) main_mup3_pane_t1_ParamLimits

0x6a46,	// (0x000466c8) main_mup3_pane_t1

0x6ac0,	// (0x00046742) main_mup3_pane_t2_ParamLimits

0x6ac0,	// (0x00046742) main_mup3_pane_t2

0x6b9a,	// (0x0004681c) main_mup3_pane_t4_ParamLimits

0x6b9a,	// (0x0004681c) main_mup3_pane_t4

0x6bf8,	// (0x0004687a) main_mup3_pane_t5_ParamLimits

0x6bf8,	// (0x0004687a) main_mup3_pane_t5

0x6cb0,	// (0x00046932) main_mup3_pane_t6_ParamLimits

0x6cb0,	// (0x00046932) main_mup3_pane_t6

0x0005,

0xf70b,	// (0x0004f38d) main_mup3_pane_t_ParamLimits

0xf70b,	// (0x0004f38d) main_mup3_pane_t

0x6d66,	// (0x000469e8) mup3_progress_pane_ParamLimits

0x6d66,	// (0x000469e8) mup3_progress_pane

0x6dea,	// (0x00046a6c) popup_mup3_control_window_ParamLimits

0x6dea,	// (0x00046a6c) popup_mup3_control_window

0x6e0a,	// (0x00046a8c) popup_mup3_text_window

0x6e28,	// (0x00046aaa) mup3_progress_pane_t1

0x6e3f,	// (0x00046ac1) mup3_progress_pane_t2

0x6e56,	// (0x00046ad8) mup3_progress_pane_t3

0x0002,

0xf718,	// (0x0004f39a) mup3_progress_pane_t

0x6e6d,	// (0x00046aef) mup_progress_pane_cp03

0xaaa2,	// (0x0004a724) bg_tb_trans_pane_cp04

0x6e7d,	// (0x00046aff) mup3_volume_pane

0x6e85,	// (0x00046b07) popup_mup3_control_window_g1

0x6e8e,	// (0x00046b10) mup3_volume_pane_g1

0x6e97,	// (0x00046b19) mup3_volume_pane_g2

0x6ea0,	// (0x00046b22) mup3_volume_pane_g3

0x0002,

0xf71f,	// (0x0004f3a1) mup3_volume_pane_g

0xaaa2,	// (0x0004a724) bg_tb_trans_pane_cp03

0x6ea9,	// (0x00046b2b) popup_mup3_text_window_g1

0x6eb1,	// (0x00046b33) popup_mup3_text_window_t1

0xdfcc,	// (0x0004dc4e) list_calc_item_pane_g1_ParamLimits

0x5fc8,	// (0x00045c4a) mup_volume_pane_cp_g1

0x67c9,	// (0x0004644b) main_touch_calib_pane_t3

0x67dd,	// (0x0004645f) main_touch_calib_pane_t4

0x67f1,	// (0x00046473) main_touch_calib_pane_t5

0xaaac,	// (0x0004a72e) aid_cell_size_toolbar2

0xaab4,	// (0x0004a736) aid_popup3_width_pane

0xaac0,	// (0x0004a742) aid_zoom_text_msg_primary

0xac0b,	// (0x0004a88d) vorec_t7

0xdf90,	// (0x0004dc12) bg_calc_paper_pane_g1_ParamLimits

0xdf9c,	// (0x0004dc1e) bg_calc_paper_pane_g2_ParamLimits

0xdfa8,	// (0x0004dc2a) bg_calc_paper_pane_g3_ParamLimits

0xdfb4,	// (0x0004dc36) bg_calc_paper_pane_g4_ParamLimits

0xdfc0,	// (0x0004dc42) bg_calc_paper_pane_g5_ParamLimits

0x1c86,	// (0x00041908) bg_calc_paper_pane_g6_ParamLimits

0x1c99,	// (0x0004191b) bg_calc_paper_pane_g7_ParamLimits

0x1cac,	// (0x0004192e) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0004ee0b) bg_calc_paper_pane_g_ParamLimits

0x1cbd,	// (0x0004193f) calc_bg_paper_pane_g9_ParamLimits

0x232c,	// (0x00041fae) image_qvga_pane_ParamLimits

0x232c,	// (0x00041fae) image_qvga_pane

0xdeb9,	// (0x0004db3b) bg_popup_sub_pane_cp04_ParamLimits

0xebe1,	// (0x0004e863) popup_mup_playback_window_g1_ParamLimits

0xebed,	// (0x0004e86f) popup_mup_playback_window_t1_ParamLimits

0xec02,	// (0x0004e884) popup_mup_playback_window_t2_ParamLimits

0x029e,	// (0x0003ff20) popup_mup_playback_window_t_ParamLimits

0x5ce3,	// (0x00045965) main_mup2_pane_g3_ParamLimits

0x5ce3,	// (0x00045965) main_mup2_pane_g3

0x25d8,	// (0x0004225a) popup_toolbar_window_cp04

0xf017,	// (0x0004ec99) popup_call2_audio_second_window_g3_ParamLimits

0xf017,	// (0x0004ec99) popup_call2_audio_second_window_g3

0x44d9,	// (0x0004415b) popup_call2_audio_first_window_g4_ParamLimits

0x44d9,	// (0x0004415b) popup_call2_audio_first_window_g4

0x4b58,	// (0x000447da) popup_call2_audio_in_window_g4_ParamLimits

0x4b58,	// (0x000447da) popup_call2_audio_in_window_g4

0x3d71,	// (0x000439f3) aid_area_sk_bg_cut_ParamLimits

0x3d71,	// (0x000439f3) aid_area_sk_bg_cut

0xec17,	// (0x0004e899) aid_area_sk_bg_cut_2_ParamLimits

0xec17,	// (0x0004e899) aid_area_sk_bg_cut_2

0x626d,	// (0x00045eef) aid_placing_details_win

0x6275,	// (0x00045ef7) aid_placing_details_win_2

0x6508,	// (0x0004618a) camera2_autofocus_pane_g1_ParamLimits

0x187b,	// (0x000414fd) popup_fixed_preview_cale_window_ParamLimits

0x187b,	// (0x000414fd) popup_fixed_preview_cale_window

0xe9f1,	// (0x0004e673) navi_slider_pane_g3

0xe9fa,	// (0x0004e67c) navi_slider_pane_g4

0xea03,	// (0x0004e685) navi_slider_pane_g5

0xe9f1,	// (0x0004e673) navi_slider_pane_g6

0xae26,	// (0x0004aaa8) navi_slider_pane_g7

0xeb18,	// (0x0004e79a) mup_scale_pane_g3

0xeb21,	// (0x0004e7a3) mup_scale_pane_g4

0xeb2a,	// (0x0004e7ac) mup_scale_pane_g5

0x3ad1,	// (0x00043753) mup_scale_pane_g6

0x3ada,	// (0x0004375c) mup_scale_pane_g7

0xe9f1,	// (0x0004e673) cams2_slider_pane_g3

0x607a,	// (0x00045cfc) cams2_slider_pane_g4

0xaf1a,	// (0x0004ab9c) cams2_slider_pane_g5

0xe9f1,	// (0x0004e673) cams2_slider_pane_g6

0xaf22,	// (0x0004aba4) cams2_slider_pane_g7

0x6381,	// (0x00046003) camera2_autofocus_pane_cp_g1

0x6ebf,	// (0x00046b41) bg_popup_preview_window_pane_cp02_ParamLimits

0x6ebf,	// (0x00046b41) bg_popup_preview_window_pane_cp02

0x6ecb,	// (0x00046b4d) list_fp_cale_pane_ParamLimits

0x6ecb,	// (0x00046b4d) list_fp_cale_pane

0x6ed7,	// (0x00046b59) popup_fixed_preview_cale_window_t1_ParamLimits

0x6ed7,	// (0x00046b59) popup_fixed_preview_cale_window_t1

0x6ee9,	// (0x00046b6b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ee9,	// (0x00046b6b) popup_fixed_preview_cale_window_t2

0x6efe,	// (0x00046b80) popup_fixed_preview_cale_window_t3_ParamLimits

0x6efe,	// (0x00046b80) popup_fixed_preview_cale_window_t3

0x0002,

0xf726,	// (0x0004f3a8) popup_fixed_preview_cale_window_t_ParamLimits

0xf726,	// (0x0004f3a8) popup_fixed_preview_cale_window_t

0xf0e3,	// (0x0004ed65) list_single_fp_cale_pane_ParamLimits

0xf0e3,	// (0x0004ed65) list_single_fp_cale_pane

0x6f21,	// (0x00046ba3) list_single_fp_cale_pane_g1_ParamLimits

0x6f21,	// (0x00046ba3) list_single_fp_cale_pane_g1

0x6f2d,	// (0x00046baf) list_single_fp_cale_pane_g2_ParamLimits

0x6f2d,	// (0x00046baf) list_single_fp_cale_pane_g2

0x0002,

0xf72d,	// (0x0004f3af) list_single_fp_cale_pane_g_ParamLimits

0xf72d,	// (0x0004f3af) list_single_fp_cale_pane_g

0x6f46,	// (0x00046bc8) list_single_fp_cale_pane_t1_ParamLimits

0x6f46,	// (0x00046bc8) list_single_fp_cale_pane_t1

0x6f58,	// (0x00046bda) list_single_fp_cale_pane_t2_ParamLimits

0x6f58,	// (0x00046bda) list_single_fp_cale_pane_t2

0x0001,

0xf734,	// (0x0004f3b6) list_single_fp_cale_pane_t_ParamLimits

0xf734,	// (0x0004f3b6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaaa2,	// (0x0004a724) main_dialer_pane

0x6f8b,	// (0x00046c0d) aid_cell_size_keypad

0x6f95,	// (0x00046c17) dialer_ne_pane

0x6f9f,	// (0x00046c21) grid_dialer_command_1_pane

0x6fa7,	// (0x00046c29) grid_dialer_command_2_pane

0x6faf,	// (0x00046c31) grid_dialer_keypad_pane

0x6fc3,	// (0x00046c45) bg_popup_call_pane_cp06_ParamLimits

0x6fc3,	// (0x00046c45) bg_popup_call_pane_cp06

0x6fcf,	// (0x00046c51) dialer_ne_clear_pane_ParamLimits

0x6fcf,	// (0x00046c51) dialer_ne_clear_pane

0x6fdb,	// (0x00046c5d) dialer_ne_pane_g1

0x6fe3,	// (0x00046c65) dialer_ne_pane_t1_ParamLimits

0x6fe3,	// (0x00046c65) dialer_ne_pane_t1

0x6ff5,	// (0x00046c77) dialer_ne_pane_t2_ParamLimits

0x6ff5,	// (0x00046c77) dialer_ne_pane_t2

0x701f,	// (0x00046ca1) dialer_ne_pane_t3_ParamLimits

0x701f,	// (0x00046ca1) dialer_ne_pane_t3

0x0002,

0xf739,	// (0x0004f3bb) dialer_ne_pane_t_ParamLimits

0xf739,	// (0x0004f3bb) dialer_ne_pane_t

0x704f,	// (0x00046cd1) dialer_ne_pane_t3_copy1_ParamLimits

0x704f,	// (0x00046cd1) dialer_ne_pane_t3_copy1

0x707e,	// (0x00046d00) cell_dialer_keypad_pane_ParamLimits

0x707e,	// (0x00046d00) cell_dialer_keypad_pane

0x7095,	// (0x00046d17) cell_dialer_command_1_pane_ParamLimits

0x7095,	// (0x00046d17) cell_dialer_command_1_pane

0x70ab,	// (0x00046d2d) cell_dialer_command_2_pane_ParamLimits

0x70ab,	// (0x00046d2d) cell_dialer_command_2_pane

0x70ba,	// (0x00046d3c) bg_button_pane_cp02_ParamLimits

0x70ba,	// (0x00046d3c) bg_button_pane_cp02

0x70c6,	// (0x00046d48) cell_dialer_keypad_pane_g1_ParamLimits

0x70c6,	// (0x00046d48) cell_dialer_keypad_pane_g1

0x70ba,	// (0x00046d3c) bg_button_pane_cp03_ParamLimits

0x70ba,	// (0x00046d3c) bg_button_pane_cp03

0x70db,	// (0x00046d5d) cell_dialer_command_1_pane_g1_ParamLimits

0x70db,	// (0x00046d5d) cell_dialer_command_1_pane_g1

0x70ef,	// (0x00046d71) bg_button_pane_cp04

0x70f7,	// (0x00046d79) cell_dialer_command_2_pane_g1

0xe9e0,	// (0x0004e662) bg_button_pane_cp06

0x70ff,	// (0x00046d81) dialer_ne_clear_pane_g1

0x35b3,	// (0x00043235) navi_pane_g2

0x35e1,	// (0x00043263) navi_pane_g3

0x0002,

0xf3b8,	// (0x0004f03a) navi_pane_g

0x360c,	// (0x0004328e) navi_pane_mv_g2

0x3633,	// (0x000432b5) navi_pane_mv_g5

0x363b,	// (0x000432bd) navi_pane_mv_t1

0xdf84,	// (0x0004dc06) main_clock2_pane

0x7137,	// (0x00046db9) main_clock2_list_pane_ParamLimits

0x7137,	// (0x00046db9) main_clock2_list_pane

0x716f,	// (0x00046df1) main_clock2_pane_t1_ParamLimits

0x716f,	// (0x00046df1) main_clock2_pane_t1

0x71ab,	// (0x00046e2d) main_clock2_pane_t2_ParamLimits

0x71ab,	// (0x00046e2d) main_clock2_pane_t2

0x0004,

0xf740,	// (0x0004f3c2) main_clock2_pane_t_ParamLimits

0xf740,	// (0x0004f3c2) main_clock2_pane_t

0x7237,	// (0x00046eb9) popup_clock_analogue_window_cp03_ParamLimits

0x7237,	// (0x00046eb9) popup_clock_analogue_window_cp03

0x725e,	// (0x00046ee0) popup_clock_digital_window_cp02_ParamLimits

0x725e,	// (0x00046ee0) popup_clock_digital_window_cp02

0x72d7,	// (0x00046f59) main_clock2_list_single_pane_ParamLimits

0x72d7,	// (0x00046f59) main_clock2_list_single_pane

0xe9e0,	// (0x0004e662) list_highlight_pane_cp05

0x72e9,	// (0x00046f6b) main_clock2_list_single_pane_t1

0x25d8,	// (0x0004225a) popup_toolbar_window_cp04_ParamLimits

0x6516,	// (0x00046198) camera2_autofocus_pane_g2_ParamLimits

0x6516,	// (0x00046198) camera2_autofocus_pane_g2

0x6522,	// (0x000461a4) camera2_autofocus_pane_g3_ParamLimits

0x6522,	// (0x000461a4) camera2_autofocus_pane_g3

0x652e,	// (0x000461b0) camera2_autofocus_pane_g4_ParamLimits

0x652e,	// (0x000461b0) camera2_autofocus_pane_g4

0x653a,	// (0x000461bc) camera2_autofocus_pane_g5_ParamLimits

0x653a,	// (0x000461bc) camera2_autofocus_pane_g5

0x0004,

0xf689,	// (0x0004f30b) camera2_autofocus_pane_g_ParamLimits

0xf689,	// (0x0004f30b) camera2_autofocus_pane_g

0x682b,	// (0x000464ad) camera2_autofocus_pane_cp_g2

0x6833,	// (0x000464b5) camera2_autofocus_pane_cp_g3

0x683b,	// (0x000464bd) camera2_autofocus_pane_cp_g4

0x6843,	// (0x000464c5) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ef,	// (0x0004f371) camera2_autofocus_pane_cp_g

0x6fbb,	// (0x00046c3d) popup_dialer_spcha_window

0xaaa2,	// (0x0004a724) bg_popup_sub_pane_cp07

0x739b,	// (0x0004701d) list_spcha_pane

0x73a3,	// (0x00047025) list_single_spcha_pane_ParamLimits

0x73a3,	// (0x00047025) list_single_spcha_pane

0xaaa2,	// (0x0004a724) list_highlight_pane_cp06

0x73b4,	// (0x00047036) list_single_spcha_pane_t1

0x4902,	// (0x00044584) popup_call2_audio_out_window_g4_ParamLimits

0x4902,	// (0x00044584) popup_call2_audio_out_window_g4

0xaaa2,	// (0x0004a724) main_imed2_pane

0x5345,	// (0x00044fc7) popup_imed_adjust2_window

0x5358,	// (0x00044fda) popup_imed_trans_window_ParamLimits

0x5358,	// (0x00044fda) popup_imed_trans_window

0x60e3,	// (0x00045d65) popup_blid_sat_info2_window_t1

0x60f1,	// (0x00045d73) popup_blid_sat_info2_window_t2

0x000a,

0xf61e,	// (0x0004f2a0) popup_blid_sat_info2_window_t

0x73c2,	// (0x00047044) aid_size_cell_colour_35

0x73e2,	// (0x00047064) aid_size_cell_colour_112

0x7402,	// (0x00047084) aid_size_cell_effect

0x51e6,	// (0x00044e68) bg_tb_trans_pane_cp02

0xe53e,	// (0x0004e1c0) heading_imed_pane

0x7422,	// (0x000470a4) listscroll_imed_pane

0x742e,	// (0x000470b0) heading_imed_pane_g1

0x7436,	// (0x000470b8) heading_imed_pane_t1

0x7444,	// (0x000470c6) grid_imed_colour_35_pane_ParamLimits

0x7444,	// (0x000470c6) grid_imed_colour_35_pane

0x7460,	// (0x000470e2) grid_imed_effect_pane

0x7477,	// (0x000470f9) list_imed_aspect_pane

0x747f,	// (0x00047101) scroll_pane_cp027_ParamLimits

0x747f,	// (0x00047101) scroll_pane_cp027

0x7490,	// (0x00047112) cell_imed_effect_pane_ParamLimits

0x7490,	// (0x00047112) cell_imed_effect_pane

0x74b5,	// (0x00047137) cell_imed_colour_pane_ParamLimits

0x74b5,	// (0x00047137) cell_imed_colour_pane

0x74ff,	// (0x00047181) cell_imed_colour_pane_g1_ParamLimits

0x74ff,	// (0x00047181) cell_imed_colour_pane_g1

0x7510,	// (0x00047192) hgihlgiht_grid_pane_cp016_ParamLimits

0x7510,	// (0x00047192) hgihlgiht_grid_pane_cp016

0x7521,	// (0x000471a3) cell_imed_effect_pane_g1

0x7529,	// (0x000471ab) grid_highlight_pane_cp017

0x7532,	// (0x000471b4) list_imed_single_pane_ParamLimits

0x7532,	// (0x000471b4) list_imed_single_pane

0xaaa2,	// (0x0004a724) list_highlight_pane_cp07

0x7546,	// (0x000471c8) list_imed_aspect_pane_comp1_t1

0x51e6,	// (0x00044e68) bg_tb_trans_pane_cp05

0x7568,	// (0x000471ea) popup_imed_adjust2_window_g1

0x758f,	// (0x00047211) popup_imed_adjust2_window_t1

0xaf9f,	// (0x0004ac21) slider_imed_adjust_pane

0xafb3,	// (0x0004ac35) slider_imed_adjust_pane_g1

0xafc3,	// (0x0004ac45) slider_imed_adjust_pane_g2

0xafd3,	// (0x0004ac55) slider_imed_adjust_pane_g3

0xafe4,	// (0x0004ac66) slider_imed_adjust_pane_g4

0x0003,

0xf75d,	// (0x0004f3df) slider_imed_adjust_pane_g

0x75a7,	// (0x00047229) aid_size_cell_clipart2

0x75b3,	// (0x00047235) grid_imed_clipart_pane

0xaff5,	// (0x0004ac77) scroll_pane_cp031

0x75bd,	// (0x0004723f) cell_imed_clipart_pane_ParamLimits

0x75bd,	// (0x0004723f) cell_imed_clipart_pane

0x75da,	// (0x0004725c) cell_imed_clipart_pane_g1

0xaaa2,	// (0x0004a724) grid_highlight_pane_cp014

0x714c,	// (0x00046dce) main_clock2_pane_g1_ParamLimits

0x714c,	// (0x00046dce) main_clock2_pane_g1

0x727e,	// (0x00046f00) aid_call2_pane_cp10

0x7290,	// (0x00046f12) aid_call_pane_cp10

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g1

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g2

0x72a2,	// (0x00046f24) popup_clock_analogue_window_cp10_g3

0x72a2,	// (0x00046f24) popup_clock_analogue_window_cp10_g4

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g5

0x0004,

0xf74b,	// (0x0004f3cd) popup_clock_analogue_window_cp10_g

0x72b8,	// (0x00046f3a) popup_clock_analogue_window_cp10_t1

0x72f7,	// (0x00046f79) clock_digital_number_pane_cp10_ParamLimits

0x72f7,	// (0x00046f79) clock_digital_number_pane_cp10

0x7311,	// (0x00046f93) clock_digital_number_pane_cp11_ParamLimits

0x7311,	// (0x00046f93) clock_digital_number_pane_cp11

0x732b,	// (0x00046fad) clock_digital_number_pane_cp12_ParamLimits

0x732b,	// (0x00046fad) clock_digital_number_pane_cp12

0x7345,	// (0x00046fc7) clock_digital_number_pane_cp13_ParamLimits

0x7345,	// (0x00046fc7) clock_digital_number_pane_cp13

0x735f,	// (0x00046fe1) clock_digital_separator_pane_cp10_ParamLimits

0x735f,	// (0x00046fe1) clock_digital_separator_pane_cp10

0x7379,	// (0x00046ffb) popup_clock_digital_window_cp02_t1_ParamLimits

0x7379,	// (0x00046ffb) popup_clock_digital_window_cp02_t1

0xdeb1,	// (0x0004db33) clock_digital_number_pane_cp10_g1

0xdeb1,	// (0x0004db33) clock_digital_number_pane_cp10_g2

0x0001,

0x05a6,	// (0x00040228) clock_digital_number_pane_cp10_g

0xdeb1,	// (0x0004db33) clock_digital_separator_pane_cp10_g1

0xdeb1,	// (0x0004db33) clock_digital_separator_pane_g2_cp10

0xe9b0,	// (0x0004e632) navi_pane_vded_g4

0xe9b9,	// (0x0004e63b) navi_pane_vded_g5

0xe9c2,	// (0x0004e644) navi_pane_vded_t1

0xaaa2,	// (0x0004a724) main_vded_pane

0x75e3,	// (0x00047265) main_vded_pane_g1

0x75ef,	// (0x00047271) main_vded_pane_g2

0x75fb,	// (0x0004727d) main_vded_pane_g3

0x0002,

0xf766,	// (0x0004f3e8) main_vded_pane_g

0x7607,	// (0x00047289) main_vded_pane_t1

0x7615,	// (0x00047297) main_vded_pane_t2

0x0001,

0xf76d,	// (0x0004f3ef) main_vded_pane_t

0x7623,	// (0x000472a5) vded_slider_pane

0x762d,	// (0x000472af) vded_video_pane

0xaffd,	// (0x0004ac7f) vded_video_pane_g1

0x7639,	// (0x000472bb) vded_video_pane_g2

0x6381,	// (0x00046003) vded_video_pane_g3

0x0002,

0xf772,	// (0x0004f3f4) vded_video_pane_g

0xb007,	// (0x0004ac89) vded_slider_pane_g1

0x5fc8,	// (0x00045c4a) vded_slider_pane_g2

0xb010,	// (0x0004ac92) vded_slider_pane_g3

0xb019,	// (0x0004ac9b) vded_slider_pane_g4

0xb022,	// (0x0004aca4) vded_slider_pane_g5

0x0004,

0xf779,	// (0x0004f3fb) vded_slider_pane_g

0x6dd4,	// (0x00046a56) mup3_rocker_pane_ParamLimits

0x6dd4,	// (0x00046a56) mup3_rocker_pane

0x7642,	// (0x000472c4) mup3_control_keys_pane_g1

0x764a,	// (0x000472cc) mup3_control_keys_pane_g2

0x7652,	// (0x000472d4) mup3_control_keys_pane_g3

0x765a,	// (0x000472dc) mup3_control_keys_pane_g4

0x0003,

0xf784,	// (0x0004f406) mup3_control_keys_pane_g

0x18b2,	// (0x00041534) popup_toolbar2_fixed_window_cp01_ParamLimits

0x18b2,	// (0x00041534) popup_toolbar2_fixed_window_cp01

0x6e12,	// (0x00046a94) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e12,	// (0x00046a94) popup_toolbar2_fixed_window_cp02

0x4241,	// (0x00043ec3) popup_call2_audio_second_window_t4_ParamLimits

0x4241,	// (0x00043ec3) popup_call2_audio_second_window_t4

0x476f,	// (0x000443f1) popup_call2_audio_first_window_t6_ParamLimits

0x476f,	// (0x000443f1) popup_call2_audio_first_window_t6

0x4a05,	// (0x00044687) popup_call2_audio_out_window_t6_ParamLimits

0x4a05,	// (0x00044687) popup_call2_audio_out_window_t6

0xaaa2,	// (0x0004a724) main_vitu_pane

0x766a,	// (0x000472ec) aid_size_cell_itu_ParamLimits

0x766a,	// (0x000472ec) aid_size_cell_itu

0xefa9,	// (0x0004ec2b) bg_popup_window_pane_cp08_ParamLimits

0xefa9,	// (0x0004ec2b) bg_popup_window_pane_cp08

0x7680,	// (0x00047302) field_vitu_entry_pane_ParamLimits

0x7680,	// (0x00047302) field_vitu_entry_pane

0x7697,	// (0x00047319) grid_vitu_function_pane_ParamLimits

0x7697,	// (0x00047319) grid_vitu_function_pane

0x76b2,	// (0x00047334) grid_vitu_itu_pane_ParamLimits

0x76b2,	// (0x00047334) grid_vitu_itu_pane

0x76d0,	// (0x00047352) cell_vitu_itu_pane_ParamLimits

0x76d0,	// (0x00047352) cell_vitu_itu_pane

0x76f6,	// (0x00047378) cell_vitu_function_pane_ParamLimits

0x76f6,	// (0x00047378) cell_vitu_function_pane

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp08_ParamLimits

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp08

0x7711,	// (0x00047393) field_vitu_entry_pane_t1_ParamLimits

0x7711,	// (0x00047393) field_vitu_entry_pane_t1

0xb043,	// (0x0004acc5) field_vitu_entry_pane_t2_ParamLimits

0xb043,	// (0x0004acc5) field_vitu_entry_pane_t2

0x0001,

0xf792,	// (0x0004f414) field_vitu_entry_pane_t_ParamLimits

0xf792,	// (0x0004f414) field_vitu_entry_pane_t

0xb060,	// (0x0004ace2) bg_button_pane_cp05_ParamLimits

0xb060,	// (0x0004ace2) bg_button_pane_cp05

0x7731,	// (0x000473b3) cell_vitu_itu_pane_g1

0x7749,	// (0x000473cb) cell_vitu_itu_pane_t1_ParamLimits

0x7749,	// (0x000473cb) cell_vitu_itu_pane_t1

0x775b,	// (0x000473dd) cell_vitu_itu_pane_t2_ParamLimits

0x775b,	// (0x000473dd) cell_vitu_itu_pane_t2

0x0002,

0xf797,	// (0x0004f419) cell_vitu_itu_pane_t_ParamLimits

0xf797,	// (0x0004f419) cell_vitu_itu_pane_t

0xb06e,	// (0x0004acf0) bg_button_pane_cp07

0x7790,	// (0x00047412) cell_vitu_function_pane_g1

0xab11,	// (0x0004a793) main_calc_pane_g1

0x16e5,	// (0x00041367) aid_visual_content_pane

0xaaa2,	// (0x0004a724) main_vradio_pane

0x7799,	// (0x0004741b) main_vradio_pane_g1_ParamLimits

0x7799,	// (0x0004741b) main_vradio_pane_g1

0xb078,	// (0x0004acfa) main_vradio_pane_g2_ParamLimits

0xb078,	// (0x0004acfa) main_vradio_pane_g2

0x0001,

0xf79e,	// (0x0004f420) main_vradio_pane_g_ParamLimits

0xf79e,	// (0x0004f420) main_vradio_pane_g

0x77b0,	// (0x00047432) main_vradio_pane_t1_ParamLimits

0x77b0,	// (0x00047432) main_vradio_pane_t1

0x77c5,	// (0x00047447) main_vradio_pane_t2_ParamLimits

0x77c5,	// (0x00047447) main_vradio_pane_t2

0xb085,	// (0x0004ad07) main_vradio_pane_t3_ParamLimits

0xb085,	// (0x0004ad07) main_vradio_pane_t3

0x0002,

0xf7a3,	// (0x0004f425) main_vradio_pane_t_ParamLimits

0xf7a3,	// (0x0004f425) main_vradio_pane_t

0x77da,	// (0x0004745c) vradio_rocker_control_pane_ParamLimits

0x77da,	// (0x0004745c) vradio_rocker_control_pane

0x77ec,	// (0x0004746e) vradio_station_info_pane_ParamLimits

0x77ec,	// (0x0004746e) vradio_station_info_pane

0xb099,	// (0x0004ad1b) vradio_frequency_info_pane_ParamLimits

0xb099,	// (0x0004ad1b) vradio_frequency_info_pane

0x6381,	// (0x00046003) vradio_station_info_pane_g1

0xb0a8,	// (0x0004ad2a) vradio_station_info_pane_t1_ParamLimits

0xb0a8,	// (0x0004ad2a) vradio_station_info_pane_t1

0xb0ca,	// (0x0004ad4c) vradio_station_info_pane_t2_ParamLimits

0xb0ca,	// (0x0004ad4c) vradio_station_info_pane_t2

0x0001,

0xf7aa,	// (0x0004f42c) vradio_station_info_pane_t_ParamLimits

0xf7aa,	// (0x0004f42c) vradio_station_info_pane_t

0xb0dc,	// (0x0004ad5e) vradio_tuning_pane

0xb0e4,	// (0x0004ad66) vradio_rocker_control_pane_g1

0xb0ec,	// (0x0004ad6e) vradio_rocker_control_pane_g2

0xb0f4,	// (0x0004ad76) vradio_rocker_control_pane_g3

0xb0fc,	// (0x0004ad7e) vradio_rocker_control_pane_g4

0xb104,	// (0x0004ad86) vradio_rocker_control_pane_g5

0x0004,

0xf7af,	// (0x0004f431) vradio_rocker_control_pane_g

0x77fc,	// (0x0004747e) vradio_frequency_info_pane_g1

0xb10c,	// (0x0004ad8e) vradio_frequency_info_pane_t1_ParamLimits

0xb10c,	// (0x0004ad8e) vradio_frequency_info_pane_t1

0x7806,	// (0x00047488) vradio_tuning_pane_g1

0x7811,	// (0x00047493) vradio_tuning_pane_t1

0xaad8,	// (0x0004a75a) area_side_right_pane_ParamLimits

0xaad8,	// (0x0004a75a) area_side_right_pane

0x518f,	// (0x00044e11) status_small_pane_g1

0x5197,	// (0x00044e19) status_small_pane_g2

0x51a0,	// (0x00044e22) status_small_pane_g3

0x51a9,	// (0x00044e2b) status_small_pane_g4

0x0003,

0xf574,	// (0x0004f1f6) status_small_pane_g

0x51b2,	// (0x00044e34) status_small_pane_t1

0xaaa2,	// (0x0004a724) main_video3_pane

0xb120,	// (0x0004ada2) cams_zoom_vslider_pane

0xb128,	// (0x0004adaa) image3_wide_pane_ParamLimits

0xb128,	// (0x0004adaa) image3_wide_pane

0xb142,	// (0x0004adc4) image3_wide_small_pane

0xb14e,	// (0x0004add0) main_video3_pane_g1_ParamLimits

0xb14e,	// (0x0004add0) main_video3_pane_g1

0xb16a,	// (0x0004adec) main_video3_pane_g2_ParamLimits

0xb16a,	// (0x0004adec) main_video3_pane_g2

0x0001,

0xf7ba,	// (0x0004f43c) main_video3_pane_g_ParamLimits

0xf7ba,	// (0x0004f43c) main_video3_pane_g

0xb186,	// (0x0004ae08) main_video3_pane_t1_ParamLimits

0xb186,	// (0x0004ae08) main_video3_pane_t1

0xb1b1,	// (0x0004ae33) main_video3_pane_t2_ParamLimits

0xb1b1,	// (0x0004ae33) main_video3_pane_t2

0xb1de,	// (0x0004ae60) main_video3_pane_t3_ParamLimits

0xb1de,	// (0x0004ae60) main_video3_pane_t3

0x0002,

0xf7bf,	// (0x0004f441) main_video3_pane_t_ParamLimits

0xf7bf,	// (0x0004f441) main_video3_pane_t

0xb20b,	// (0x0004ae8d) cams_zoom_vslider_pane_g1

0xb214,	// (0x0004ae96) cams_zoom_vslider_pane_g2

0x0001,

0xf7c6,	// (0x0004f448) cams_zoom_vslider_pane_g

0xb21c,	// (0x0004ae9e) small_slider_vertical_pane

0x6381,	// (0x00046003) small_slider_vertical_pane_g1

0x6381,	// (0x00046003) small_slider_vertical_pane_g2

0xb224,	// (0x0004aea6) small_slider_vertical_pane_g3

0x0002,

0xf7cb,	// (0x0004f44d) small_slider_vertical_pane_g

0xaaa2,	// (0x0004a724) main_hwr_training_pane

0xb22d,	// (0x0004aeaf) hwr_training_instruct_pane_ParamLimits

0xb22d,	// (0x0004aeaf) hwr_training_instruct_pane

0x7820,	// (0x000474a2) hwr_training_navi_pane_ParamLimits

0x7820,	// (0x000474a2) hwr_training_navi_pane

0x783f,	// (0x000474c1) hwr_training_write_pane_ParamLimits

0x783f,	// (0x000474c1) hwr_training_write_pane

0xaaa2,	// (0x0004a724) bg_frame_shadow_pane

0xb264,	// (0x0004aee6) hwr_training_write_pane_g1

0xb26c,	// (0x0004aeee) hwr_training_write_pane_g2

0xb274,	// (0x0004aef6) hwr_training_write_pane_g3

0xb27c,	// (0x0004aefe) hwr_training_write_pane_g4

0xb284,	// (0x0004af06) hwr_training_write_pane_g5

0xb28c,	// (0x0004af0e) hwr_training_write_pane_g6

0xb294,	// (0x0004af16) hwr_training_write_pane_g7

0x0006,

0xf7d2,	// (0x0004f454) hwr_training_write_pane_g

0xb29c,	// (0x0004af1e) hwr_training_navi_pane_g1_ParamLimits

0xb29c,	// (0x0004af1e) hwr_training_navi_pane_g1

0xb2ae,	// (0x0004af30) hwr_training_navi_pane_g2_ParamLimits

0xb2ae,	// (0x0004af30) hwr_training_navi_pane_g2

0xb2c0,	// (0x0004af42) hwr_training_navi_pane_g3_ParamLimits

0xb2c0,	// (0x0004af42) hwr_training_navi_pane_g3

0xb2d0,	// (0x0004af52) hwr_training_navi_pane_g4_ParamLimits

0xb2d0,	// (0x0004af52) hwr_training_navi_pane_g4

0x0004,

0xf7e1,	// (0x0004f463) hwr_training_navi_pane_g_ParamLimits

0xf7e1,	// (0x0004f463) hwr_training_navi_pane_g

0xb2dd,	// (0x0004af5f) hwr_training_navi_pane_t1

0x7887,	// (0x00047509) list_single_hwr_training_instruct_pane_ParamLimits

0x7887,	// (0x00047509) list_single_hwr_training_instruct_pane

0xb2eb,	// (0x0004af6d) list_single_hwr_training_instruct_pane_t1

0x62c1,	// (0x00045f43) bg_frame_shadow_pane_g1

0xb2fa,	// (0x0004af7c) bg_frame_shadow_pane_g2

0xb302,	// (0x0004af84) bg_frame_shadow_pane_g3

0xb30a,	// (0x0004af8c) bg_frame_shadow_pane_g4

0xb312,	// (0x0004af94) bg_frame_shadow_pane_g5

0xb31a,	// (0x0004af9c) bg_frame_shadow_pane_g6

0xb322,	// (0x0004afa4) bg_frame_shadow_pane_g7

0xe04f,	// (0x0004dcd1) bg_frame_shadow_pane_g8

0x0007,

0xf7ec,	// (0x0004f46e) bg_frame_shadow_pane_g

0xaaa2,	// (0x0004a724) main_video_tele_dialer_pane

0x78a3,	// (0x00047525) aid_size_cell_video_keypad_ParamLimits

0x78a3,	// (0x00047525) aid_size_cell_video_keypad

0x78bd,	// (0x0004753f) grid_video_dialer_keypad_pane_ParamLimits

0x78bd,	// (0x0004753f) grid_video_dialer_keypad_pane

0x790b,	// (0x0004758d) video_down_pane_cp_ParamLimits

0x790b,	// (0x0004758d) video_down_pane_cp

0x793f,	// (0x000475c1) cell_video_dialer_keypad_pane_ParamLimits

0x793f,	// (0x000475c1) cell_video_dialer_keypad_pane

0xb32a,	// (0x0004afac) bg_button_pane_cp08_ParamLimits

0xb32a,	// (0x0004afac) bg_button_pane_cp08

0x7965,	// (0x000475e7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7965,	// (0x000475e7) cell_video_dialer_keypad_pane_g1

0x6dbe,	// (0x00046a40) mup3_rocker2_pane_ParamLimits

0x6dbe,	// (0x00046a40) mup3_rocker2_pane

0x6381,	// (0x00046003) mup3_rocker2_pane_g1

0x51f4,	// (0x00044e76) main_dialer2_pane

0xaaa2,	// (0x0004a724) main_mp4_pane

0xb33e,	// (0x0004afc0) main_mp4_pane_g1_ParamLimits

0xb33e,	// (0x0004afc0) main_mp4_pane_g1

0xb33e,	// (0x0004afc0) main_mp4_pane_g2_ParamLimits

0xb33e,	// (0x0004afc0) main_mp4_pane_g2

0x79a0,	// (0x00047622) main_mp4_pane_g3_ParamLimits

0x79a0,	// (0x00047622) main_mp4_pane_g3

0xb34c,	// (0x0004afce) main_mp4_pane_g4_ParamLimits

0xb34c,	// (0x0004afce) main_mp4_pane_g4

0xb366,	// (0x0004afe8) main_mp4_pane_g5_ParamLimits

0xb366,	// (0x0004afe8) main_mp4_pane_g5

0x0005,

0xf80c,	// (0x0004f48e) main_mp4_pane_g_ParamLimits

0xf80c,	// (0x0004f48e) main_mp4_pane_g

0xb39a,	// (0x0004b01c) main_mp4_pane_t1_ParamLimits

0xb39a,	// (0x0004b01c) main_mp4_pane_t1

0xb3f6,	// (0x0004b078) main_mp4_pane_t2_ParamLimits

0xb3f6,	// (0x0004b078) main_mp4_pane_t2

0xb448,	// (0x0004b0ca) main_mp4_pane_t3_ParamLimits

0xb448,	// (0x0004b0ca) main_mp4_pane_t3

0xb468,	// (0x0004b0ea) main_mp4_pane_t4_ParamLimits

0xb468,	// (0x0004b0ea) main_mp4_pane_t4

0x0003,

0xf819,	// (0x0004f49b) main_mp4_pane_t_ParamLimits

0xf819,	// (0x0004f49b) main_mp4_pane_t

0xb4a8,	// (0x0004b12a) mp4_progress_pane_ParamLimits

0xb4a8,	// (0x0004b12a) mp4_progress_pane

0xb4f2,	// (0x0004b174) mp4_rocker_pane_ParamLimits

0xb4f2,	// (0x0004b174) mp4_rocker_pane

0xb51c,	// (0x0004b19e) mp4_progress_pane_t1

0xb535,	// (0x0004b1b7) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x0004f4a4) mp4_progress_pane_t

0xb54e,	// (0x0004b1d0) mup_progress_pane_cp04

0x6381,	// (0x00046003) mp4_rocker_pane_g1

0x79ea,	// (0x0004766c) aid_cell_size_keypad2_ParamLimits

0x79ea,	// (0x0004766c) aid_cell_size_keypad2

0x7a00,	// (0x00047682) dialer2_ne_pane_ParamLimits

0x7a00,	// (0x00047682) dialer2_ne_pane

0x7a18,	// (0x0004769a) grid_dialer2_keypad_pane_ParamLimits

0x7a18,	// (0x0004769a) grid_dialer2_keypad_pane

0x608a,	// (0x00045d0c) bg_popup_call_pane_cp07_ParamLimits

0x608a,	// (0x00045d0c) bg_popup_call_pane_cp07

0x7a34,	// (0x000476b6) dialer2_ne_pane_t1_ParamLimits

0x7a34,	// (0x000476b6) dialer2_ne_pane_t1

0x7a74,	// (0x000476f6) cell_dialer2_keypad_pane_ParamLimits

0x7a74,	// (0x000476f6) cell_dialer2_keypad_pane

0xb56c,	// (0x0004b1ee) bg_button_pane_pane_cp04_ParamLimits

0xb56c,	// (0x0004b1ee) bg_button_pane_pane_cp04

0x7a9a,	// (0x0004771c) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a9a,	// (0x0004771c) cell_dialer2_keypad_pane_g1

0x2506,	// (0x00042188) aid_placing_vt_set_content_ParamLimits

0x2506,	// (0x00042188) aid_placing_vt_set_content

0x2526,	// (0x000421a8) aid_placing_vt_set_title_ParamLimits

0x2526,	// (0x000421a8) aid_placing_vt_set_title

0xaaa2,	// (0x0004a724) main_image3_pane

0x7b60,	// (0x000477e2) area_side_right_pane_cp01_ParamLimits

0x7b60,	// (0x000477e2) area_side_right_pane_cp01

0xb33e,	// (0x0004afc0) main_image3_pane_g1_ParamLimits

0xb33e,	// (0x0004afc0) main_image3_pane_g1

0x7b79,	// (0x000477fb) main_image3_pane_g2_ParamLimits

0x7b79,	// (0x000477fb) main_image3_pane_g2

0x7ba1,	// (0x00047823) main_image3_pane_g3_ParamLimits

0x7ba1,	// (0x00047823) main_image3_pane_g3

0x7bcb,	// (0x0004784d) main_image3_pane_g4_ParamLimits

0x7bcb,	// (0x0004784d) main_image3_pane_g4

0x0003,

0xf831,	// (0x0004f4b3) main_image3_pane_g_ParamLimits

0xf831,	// (0x0004f4b3) main_image3_pane_g

0x7bf5,	// (0x00047877) main_image3_pane_t1_ParamLimits

0x7bf5,	// (0x00047877) main_image3_pane_t1

0x7c4d,	// (0x000478cf) main_image3_pane_t2_ParamLimits

0x7c4d,	// (0x000478cf) main_image3_pane_t2

0x7c9f,	// (0x00047921) main_image3_pane_t3_ParamLimits

0x7c9f,	// (0x00047921) main_image3_pane_t3

0x0003,

0xf83a,	// (0x0004f4bc) main_image3_pane_t_ParamLimits

0xf83a,	// (0x0004f4bc) main_image3_pane_t

0xefa9,	// (0x0004ec2b) grid_sctrl_middle_pane_cp01_ParamLimits

0xefa9,	// (0x0004ec2b) grid_sctrl_middle_pane_cp01

0x7d27,	// (0x000479a9) cell_sctrl_middle_pane_cp01_ParamLimits

0x7d27,	// (0x000479a9) cell_sctrl_middle_pane_cp01

0x7d44,	// (0x000479c6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d44,	// (0x000479c6) cell_sctrl_middle_pane_cp01_g1

0xaaa2,	// (0x0004a724) main_call4_pane

0x7d59,	// (0x000479db) aid_size_button_call4_ParamLimits

0x7d59,	// (0x000479db) aid_size_button_call4

0x7d8c,	// (0x00047a0e) call4_windows_pane_ParamLimits

0x7d8c,	// (0x00047a0e) call4_windows_pane

0x7dae,	// (0x00047a30) grid_call4_button_pane_ParamLimits

0x7dae,	// (0x00047a30) grid_call4_button_pane

0xb578,	// (0x0004b1fa) call4_windows_conf_pane

0xb593,	// (0x0004b215) popup_call4_audio_first_window_ParamLimits

0xb593,	// (0x0004b215) popup_call4_audio_first_window

0xb5e1,	// (0x0004b263) popup_call4_audio_second_window_ParamLimits

0xb5e1,	// (0x0004b263) popup_call4_audio_second_window

0xb5f7,	// (0x0004b279) popup_call4_audio_wait_window_ParamLimits

0xb5f7,	// (0x0004b279) popup_call4_audio_wait_window

0x7dd9,	// (0x00047a5b) cell_call4_button_pane_ParamLimits

0x7dd9,	// (0x00047a5b) cell_call4_button_pane

0x7e00,	// (0x00047a82) bg_button_pane_cp09_ParamLimits

0x7e00,	// (0x00047a82) bg_button_pane_cp09

0x7e0c,	// (0x00047a8e) cell_call4_button_pane_g1_ParamLimits

0x7e0c,	// (0x00047a8e) cell_call4_button_pane_g1

0x7e32,	// (0x00047ab4) cell_call4_button_pane_t1_ParamLimits

0x7e32,	// (0x00047ab4) cell_call4_button_pane_t1

0xb63f,	// (0x0004b2c1) popup_call4_audio_conf_window_ParamLimits

0xb63f,	// (0x0004b2c1) popup_call4_audio_conf_window

0x6e28,	// (0x00046aaa) mup3_progress_pane_t1_ParamLimits

0x6e3f,	// (0x00046ac1) mup3_progress_pane_t2_ParamLimits

0x6e56,	// (0x00046ad8) mup3_progress_pane_t3_ParamLimits

0xf718,	// (0x0004f39a) mup3_progress_pane_t_ParamLimits

0x6e6d,	// (0x00046aef) mup_progress_pane_cp03_ParamLimits

0x7662,	// (0x000472e4) mup3_control_keys_pane_g4_copy1

0xb4d6,	// (0x0004b158) mp4_rocker2_pane_ParamLimits

0xb4d6,	// (0x0004b158) mp4_rocker2_pane

0xb659,	// (0x0004b2db) mp4_rocker2_pane_g1

0xb661,	// (0x0004b2e3) mp4_rocker2_pane_g2

0xd6aa,	// (0x0004d32c) mp4_rocker2_pane_g3

0xd6b2,	// (0x0004d334) mp4_rocker2_pane_g4

0xd6ba,	// (0x0004d33c) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x0004f4c5) mp4_rocker2_pane_g

0xaaa2,	// (0x0004a724) main_camera4_pane

0xaaa2,	// (0x0004a724) main_video4_pane

0x78d9,	// (0x0004755b) main_video_tele_dialer_pane_t1_ParamLimits

0x78d9,	// (0x0004755b) main_video_tele_dialer_pane_t1

0x78f2,	// (0x00047574) main_video_tele_dialer_pane_t2_ParamLimits

0x78f2,	// (0x00047574) main_video_tele_dialer_pane_t2

0x0001,

0xf7fd,	// (0x0004f47f) main_video_tele_dialer_pane_t_ParamLimits

0xf7fd,	// (0x0004f47f) main_video_tele_dialer_pane_t

0x7e70,	// (0x00047af2) cam4_autofocus_pane_ParamLimits

0x7e70,	// (0x00047af2) cam4_autofocus_pane

0x7e86,	// (0x00047b08) cam4_image_uncrop_pane_ParamLimits

0x7e86,	// (0x00047b08) cam4_image_uncrop_pane

0x7e9f,	// (0x00047b21) cam4_indicators_pane_ParamLimits

0x7e9f,	// (0x00047b21) cam4_indicators_pane

0x7ece,	// (0x00047b50) main_camera4_pane_g1_ParamLimits

0x7ece,	// (0x00047b50) main_camera4_pane_g1

0x7eda,	// (0x00047b5c) main_camera4_pane_g2_ParamLimits

0x7eda,	// (0x00047b5c) main_camera4_pane_g2

0x7eda,	// (0x00047b5c) main_camera4_pane_g3_ParamLimits

0x7eda,	// (0x00047b5c) main_camera4_pane_g3

0x7ee6,	// (0x00047b68) main_camera4_pane_g4_ParamLimits

0x7ee6,	// (0x00047b68) main_camera4_pane_g4

0x7ef2,	// (0x00047b74) main_camera4_pane_g5_ParamLimits

0x7ef2,	// (0x00047b74) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x0004f4d0) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x0004f4d0) main_camera4_pane_g

0x7f0f,	// (0x00047b91) main_camera4_pane_t1_ParamLimits

0x7f0f,	// (0x00047b91) main_camera4_pane_t1

0x665f,	// (0x000462e1) bg_tb_trans_pane_cp06

0xd6dc,	// (0x0004d35e) cam4_indicators_pane_g1

0xd6e9,	// (0x0004d36b) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x0004f4eb) cam4_indicators_pane_g

0xd709,	// (0x0004d38b) cam4_indicators_pane_t1

0x7f87,	// (0x00047c09) main_video4_pane_g1_ParamLimits

0x7f87,	// (0x00047c09) main_video4_pane_g1

0x7f99,	// (0x00047c1b) main_video4_pane_g2_ParamLimits

0x7f99,	// (0x00047c1b) main_video4_pane_g2

0x7fad,	// (0x00047c2f) main_video4_pane_g3_ParamLimits

0x7fad,	// (0x00047c2f) main_video4_pane_g3

0x7fbd,	// (0x00047c3f) main_video4_pane_g4_ParamLimits

0x7fbd,	// (0x00047c3f) main_video4_pane_g4

0x0004,

0xf870,	// (0x0004f4f2) main_video4_pane_g_ParamLimits

0xf870,	// (0x0004f4f2) main_video4_pane_g

0x7fdd,	// (0x00047c5f) vid4_indicators_pane_ParamLimits

0x7fdd,	// (0x00047c5f) vid4_indicators_pane

0x800d,	// (0x00047c8f) video4_image_uncrop_cif_pane_ParamLimits

0x800d,	// (0x00047c8f) video4_image_uncrop_cif_pane

0x8027,	// (0x00047ca9) video4_image_uncrop_nhd_pane_ParamLimits

0x8027,	// (0x00047ca9) video4_image_uncrop_nhd_pane

0x7e86,	// (0x00047b08) video4_image_uncrop_vga_pane_ParamLimits

0x7e86,	// (0x00047b08) video4_image_uncrop_vga_pane

0xb669,	// (0x0004b2eb) bg_tb_trans_pane_cp07

0x803d,	// (0x00047cbf) vid4_indicators_pane_g1

0x804a,	// (0x00047ccc) vid4_indicators_pane_g2

0x8057,	// (0x00047cd9) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x0004f4fd) vid4_indicators_pane_g

0x807c,	// (0x00047cfe) vid4_indicators_pane_t1

0x808e,	// (0x00047d10) cam4_autofocus_pane_g1

0x8096,	// (0x00047d18) cam4_autofocus_pane_g2

0x809e,	// (0x00047d20) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x0004f508) cam4_autofocus_pane_g

0x80a6,	// (0x00047d28) cam4_autofocus_pane_g3_copy1

0x7923,	// (0x000475a5) video_down_pane_cp_t1

0x7931,	// (0x000475b3) video_down_pane_cp_t2

0x0001,

0xf802,	// (0x0004f484) video_down_pane_cp_t

0xefa9,	// (0x0004ec2b) popup_vitu2_window_ParamLimits

0xefa9,	// (0x0004ec2b) popup_vitu2_window

0x80ae,	// (0x00047d30) aid_size_cell2_itu2_ParamLimits

0x80ae,	// (0x00047d30) aid_size_cell2_itu2

0x80d4,	// (0x00047d56) aid_size_cell_itu2_ParamLimits

0x80d4,	// (0x00047d56) aid_size_cell_itu2

0x8132,	// (0x00047db4) bg_popup_window_pane_cp09_ParamLimits

0x8132,	// (0x00047db4) bg_popup_window_pane_cp09

0x8140,	// (0x00047dc2) field_vitu2_entry_pane_ParamLimits

0x8140,	// (0x00047dc2) field_vitu2_entry_pane

0x8168,	// (0x00047dea) grid_vitu2_function_pane_ParamLimits

0x8168,	// (0x00047dea) grid_vitu2_function_pane

0x81b9,	// (0x00047e3b) grid_vitu2_itu_pane_ParamLimits

0x81b9,	// (0x00047e3b) grid_vitu2_itu_pane

0x8244,	// (0x00047ec6) cell_vitu2_itu_pane_ParamLimits

0x8244,	// (0x00047ec6) cell_vitu2_itu_pane

0x826a,	// (0x00047eec) cell_vitu2_function_pane_ParamLimits

0x826a,	// (0x00047eec) cell_vitu2_function_pane

0xb677,	// (0x0004b2f9) bg_popup_call_pane_cp08_ParamLimits

0xb677,	// (0x0004b2f9) bg_popup_call_pane_cp08

0xb690,	// (0x0004b312) field_vitu2_entry_pane_g1

0xb69c,	// (0x0004b31e) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x0004f50f) field_vitu2_entry_pane_g

0xb6b6,	// (0x0004b338) field_vitu2_entry_pane_t1_ParamLimits

0xb6b6,	// (0x0004b338) field_vitu2_entry_pane_t1

0xb6d3,	// (0x0004b355) field_vitu2_entry_pane_t2_ParamLimits

0xb6d3,	// (0x0004b355) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x0004f516) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x0004f516) field_vitu2_entry_pane_t

0x82ae,	// (0x00047f30) bg_button_pane_cp010_ParamLimits

0x82ae,	// (0x00047f30) bg_button_pane_cp010

0x82bc,	// (0x00047f3e) cell_vitu2_itu_pane_g1

0x82da,	// (0x00047f5c) cell_vitu2_itu_pane_t1_ParamLimits

0x82da,	// (0x00047f5c) cell_vitu2_itu_pane_t1

0x0e7c,	// (0x00040afe) cell_vitu2_itu_pane_t2_ParamLimits

0x0e7c,	// (0x00040afe) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x0004f520) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x0004f520) cell_vitu2_itu_pane_t

0xefa9,	// (0x0004ec2b) bg_button_pane_cp011

0x8340,	// (0x00047fc2) cell_vitu2_function_pane_g1

0xaaa2,	// (0x0004a724) main_myfav_hc_pane

0x7cef,	// (0x00047971) popup_image3_note_pane_ParamLimits

0x7cef,	// (0x00047971) popup_image3_note_pane

0x7d0b,	// (0x0004798d) popup_image3_tool_bar_pane_ParamLimits

0x7d0b,	// (0x0004798d) popup_image3_tool_bar_pane

0x0f00,	// (0x00040b82) cell_vitu2_itu_pane_t3_ParamLimits

0x0f00,	// (0x00040b82) cell_vitu2_itu_pane_t3

0xaaa2,	// (0x0004a724) bg_popup_trans_pane

0xb6f8,	// (0x0004b37a) grid_image3_tool_bar_pane

0xb702,	// (0x0004b384) bg_popup_trans_pane_g1

0xe396,	// (0x0004e018) bg_popup_trans_pane_g2

0xb70a,	// (0x0004b38c) bg_popup_trans_pane_g3

0xb712,	// (0x0004b394) bg_popup_trans_pane_g4

0xb71a,	// (0x0004b39c) bg_popup_trans_pane_g5

0xb722,	// (0x0004b3a4) bg_popup_trans_pane_g6

0xb72a,	// (0x0004b3ac) bg_popup_trans_pane_g7

0xb732,	// (0x0004b3b4) bg_popup_trans_pane_g8

0xe376,	// (0x0004dff8) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x0004f527) bg_popup_trans_pane_g

0xb73a,	// (0x0004b3bc) cell_image3_tool_bar_pane_ParamLimits

0xb73a,	// (0x0004b3bc) cell_image3_tool_bar_pane

0x6381,	// (0x00046003) cell_image3_tool_bar_pane_g1

0xaaa2,	// (0x0004a724) bg_popup_trans_pane_cp1

0xb750,	// (0x0004b3d2) popup_image3_note_pane_t1

0xb75e,	// (0x0004b3e0) popup_image3_note_pane_t2

0xb76c,	// (0x0004b3ee) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x0004f53a) popup_image3_note_pane_t

0xb77c,	// (0x0004b3fe) popup_image3_note_pane_t3_copy1

0x8354,	// (0x00047fd6) bg_myfav_hc_instruction_pane_ParamLimits

0x8354,	// (0x00047fd6) bg_myfav_hc_instruction_pane

0x836c,	// (0x00047fee) cell_myfav_contact_pane_ParamLimits

0x836c,	// (0x00047fee) cell_myfav_contact_pane

0x8388,	// (0x0004800a) cell_myfav_contact_pane_cp1_ParamLimits

0x8388,	// (0x0004800a) cell_myfav_contact_pane_cp1

0x83a0,	// (0x00048022) cell_myfav_contact_pane_cp2_ParamLimits

0x83a0,	// (0x00048022) cell_myfav_contact_pane_cp2

0x83b8,	// (0x0004803a) cell_myfav_contact_pane_cp3_ParamLimits

0x83b8,	// (0x0004803a) cell_myfav_contact_pane_cp3

0x83cf,	// (0x00048051) cell_myfav_contact_pane_cp4_ParamLimits

0x83cf,	// (0x00048051) cell_myfav_contact_pane_cp4

0x83e7,	// (0x00048069) cell_myfav_contact_pane_cp5_ParamLimits

0x83e7,	// (0x00048069) cell_myfav_contact_pane_cp5

0x83fb,	// (0x0004807d) cell_myfav_contact_pane_cp6_ParamLimits

0x83fb,	// (0x0004807d) cell_myfav_contact_pane_cp6

0x8411,	// (0x00048093) cell_myfav_contact_pane_cp7_ParamLimits

0x8411,	// (0x00048093) cell_myfav_contact_pane_cp7

0xb78a,	// (0x0004b40c) listscroll_gen_pane_cp05

0x8429,	// (0x000480ab) main_myfav_hc_pane_g1_ParamLimits

0x8429,	// (0x000480ab) main_myfav_hc_pane_g1

0x8443,	// (0x000480c5) main_myfav_hc_pane_g2_ParamLimits

0x8443,	// (0x000480c5) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x0004f541) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x0004f541) main_myfav_hc_pane_g

0x8477,	// (0x000480f9) main_myfav_hc_pane_t1_ParamLimits

0x8477,	// (0x000480f9) main_myfav_hc_pane_t1

0xb793,	// (0x0004b415) main_myfav_hc_pane_t2_ParamLimits

0xb793,	// (0x0004b415) main_myfav_hc_pane_t2

0xb7a5,	// (0x0004b427) main_myfav_hc_pane_t3_ParamLimits

0xb7a5,	// (0x0004b427) main_myfav_hc_pane_t3

0x848e,	// (0x00048110) main_myfav_hc_pane_t4_ParamLimits

0x848e,	// (0x00048110) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x0004f548) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x0004f548) main_myfav_hc_pane_t

0x6381,	// (0x00046003) bg_myfav_hc_instruction_pane_g1

0xb7b7,	// (0x0004b439) cell_myfav_contact_pane_g1_ParamLimits

0xb7b7,	// (0x0004b439) cell_myfav_contact_pane_g1

0xb7b7,	// (0x0004b439) cell_myfav_contact_pane_g2_ParamLimits

0xb7b7,	// (0x0004b439) cell_myfav_contact_pane_g2

0xb7c3,	// (0x0004b445) cell_myfav_contact_pane_g3_ParamLimits

0xb7c3,	// (0x0004b445) cell_myfav_contact_pane_g3

0x69cf,	// (0x00046651) cell_myfav_contact_pane_g4_ParamLimits

0x69cf,	// (0x00046651) cell_myfav_contact_pane_g4

0xb7d0,	// (0x0004b452) cell_myfav_contact_pane_g5_ParamLimits

0xb7d0,	// (0x0004b452) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x0004f553) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x0004f553) cell_myfav_contact_pane_g

0x845d,	// (0x000480df) main_myfav_hc_pane_g3_ParamLimits

0x845d,	// (0x000480df) main_myfav_hc_pane_g3

0x1812,	// (0x00041494) popup_adpt_find_window

0x84b8,	// (0x0004813a) afind_page_pane_ParamLimits

0x84b8,	// (0x0004813a) afind_page_pane

0x84cd,	// (0x0004814f) aid_size_cell_afind_ParamLimits

0x84cd,	// (0x0004814f) aid_size_cell_afind

0x84eb,	// (0x0004816d) bg_popup_sub_pane_cp09_ParamLimits

0x84eb,	// (0x0004816d) bg_popup_sub_pane_cp09

0x84f8,	// (0x0004817a) find_pane_cp01_ParamLimits

0x84f8,	// (0x0004817a) find_pane_cp01

0xb7dc,	// (0x0004b45e) grid_afind_control_pane_ParamLimits

0xb7dc,	// (0x0004b45e) grid_afind_control_pane

0x8505,	// (0x00048187) grid_afind_pane_ParamLimits

0x8505,	// (0x00048187) grid_afind_pane

0x8527,	// (0x000481a9) cell_afind_pane_ParamLimits

0x8527,	// (0x000481a9) cell_afind_pane

0x6381,	// (0x00046003) afind_page_pane_g1

0x858e,	// (0x00048210) afind_page_pane_g2

0x8597,	// (0x00048219) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x0004f55e) afind_page_pane_g

0x85a0,	// (0x00048222) afind_page_pane_t1

0xb7f0,	// (0x0004b472) cell_afind_grid_control_pane_ParamLimits

0xb7f0,	// (0x0004b472) cell_afind_grid_control_pane

0xb56c,	// (0x0004b1ee) bg_button_pane_cp69_ParamLimits

0xb56c,	// (0x0004b1ee) bg_button_pane_cp69

0x85c0,	// (0x00048242) cell_afind_pane_g1_ParamLimits

0x85c0,	// (0x00048242) cell_afind_pane_g1

0x85cd,	// (0x0004824f) cell_afind_pane_t1_ParamLimits

0x85cd,	// (0x0004824f) cell_afind_pane_t1

0xe185,	// (0x0004de07) bg_button_pane_cp72

0xb7ff,	// (0x0004b481) cell_afind_grid_control_pane_g1

0x3f64,	// (0x00043be6) aid_image_placing_area_ParamLimits

0x3f64,	// (0x00043be6) aid_image_placing_area

0xb02b,	// (0x0004acad) field_vitu_entry_pane_g1_ParamLimits

0xb02b,	// (0x0004acad) field_vitu_entry_pane_g1

0xb037,	// (0x0004acb9) field_vitu_entry_pane_g2_ParamLimits

0xb037,	// (0x0004acb9) field_vitu_entry_pane_g2

0x0001,

0xf78d,	// (0x0004f40f) field_vitu_entry_pane_g_ParamLimits

0xf78d,	// (0x0004f40f) field_vitu_entry_pane_g

0x7731,	// (0x000473b3) cell_vitu_itu_pane_g1_ParamLimits

0x7773,	// (0x000473f5) cell_vitu_itu_pane_t3_ParamLimits

0x7773,	// (0x000473f5) cell_vitu_itu_pane_t3

0xb51c,	// (0x0004b19e) mp4_progress_pane_t1_ParamLimits

0xb535,	// (0x0004b1b7) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x0004f4a4) mp4_progress_pane_t_ParamLimits

0xb54e,	// (0x0004b1d0) mup_progress_pane_cp04_ParamLimits

0x84a2,	// (0x00048124) main_myfav_hc_pane_t5_ParamLimits

0x84a2,	// (0x00048124) main_myfav_hc_pane_t5

0xaac8,	// (0x0004a74a) aid_zoom_text_primary

0x1812,	// (0x00041494) popup_adpt_find_window_ParamLimits

0xefa9,	// (0x0004ec2b) main_cam_set_pane

0x7eb8,	// (0x00047b3a) cam4_zoom_pane_ParamLimits

0x7eb8,	// (0x00047b3a) cam4_zoom_pane

0x85df,	// (0x00048261) main_cam_set_pane_g1_ParamLimits

0x85df,	// (0x00048261) main_cam_set_pane_g1

0x85ed,	// (0x0004826f) main_cam_set_pane_g2_ParamLimits

0x85ed,	// (0x0004826f) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x0004f565) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x0004f565) main_cam_set_pane_g

0x8610,	// (0x00048292) main_cam_set_pane_t1_ParamLimits

0x8610,	// (0x00048292) main_cam_set_pane_t1

0x862b,	// (0x000482ad) main_cset_listscroll_pane_ParamLimits

0x862b,	// (0x000482ad) main_cset_listscroll_pane

0x864f,	// (0x000482d1) main_cset_slider_pane_ParamLimits

0x864f,	// (0x000482d1) main_cset_slider_pane

0xb810,	// (0x0004b492) main_cset_list_pane_ParamLimits

0xb810,	// (0x0004b492) main_cset_list_pane

0xb820,	// (0x0004b4a2) scroll_pane_cp028

0x8679,	// (0x000482fb) aid_area_touch_slider

0x8695,	// (0x00048317) cset_slider_pane

0x86bf,	// (0x00048341) main_cset_slider_pane_g1

0x86d4,	// (0x00048356) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x0004f56a) main_cset_slider_pane_g

0xb859,	// (0x0004b4db) main_cset_slider_pane_t1

0x8796,	// (0x00048418) main_cset_slider_pane_t2

0x87b0,	// (0x00048432) main_cset_slider_pane_t3

0x87ca,	// (0x0004844c) main_cset_slider_pane_t4

0x87e4,	// (0x00048466) main_cset_slider_pane_t5

0x8802,	// (0x00048484) main_cset_slider_pane_t6

0x8819,	// (0x0004849b) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x0004f58f) main_cset_slider_pane_t

0x8925,	// (0x000485a7) cset_list_set_pane_ParamLimits

0x8925,	// (0x000485a7) cset_list_set_pane

0x8939,	// (0x000485bb) aid_position_infowindow_above

0x8941,	// (0x000485c3) aid_position_infowindow_below

0xb8f9,	// (0x0004b57b) cset_list_set_pane_g1_ParamLimits

0xb8f9,	// (0x0004b57b) cset_list_set_pane_g1

0x0f58,	// (0x00040bda) cset_list_set_pane_g3_ParamLimits

0x0f58,	// (0x00040bda) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x0004f5ae) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x0004f5ae) cset_list_set_pane_g

0xb905,	// (0x0004b587) cset_list_set_pane_t1_ParamLimits

0xb905,	// (0x0004b587) cset_list_set_pane_t1

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp021_ParamLimits

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp021

0xeb18,	// (0x0004e79a) cset_slider_pane_g1

0xeb2a,	// (0x0004e7ac) cset_slider_pane_g2

0xeb21,	// (0x0004e7a3) cset_slider_pane_g3

0x0002,

0x0776,	// (0x000403f8) cset_slider_pane_g

0xd737,	// (0x0004d3b9) aid_area_touch_cam4_zoom

0xd73f,	// (0x0004d3c1) cam4_zoom_cont_pane

0xd747,	// (0x0004d3c9) cam4_zoom_pane_g1

0xd74f,	// (0x0004d3d1) cam4_zoom_pane_g2

0x8949,	// (0x000485cb) cam4_zoom_pane_g3

0x0002,

0xf931,	// (0x0004f5b3) cam4_zoom_pane_g

0xb91a,	// (0x0004b59c) cam4_zoom_cont_pane_g1

0xb923,	// (0x0004b5a5) cam4_zoom_cont_pane_g2

0xb92c,	// (0x0004b5ae) cam4_zoom_cont_pane_g3

0x0002,

0xf938,	// (0x0004f5ba) cam4_zoom_cont_pane_g

0x7d77,	// (0x000479f9) call4_image_pane_ParamLimits

0x7d77,	// (0x000479f9) call4_image_pane

0xb578,	// (0x0004b1fa) call4_windows_conf_pane_ParamLimits

0xb5bf,	// (0x0004b241) popup_call4_audio_in_window_ParamLimits

0xb5bf,	// (0x0004b241) popup_call4_audio_in_window

0xaaa2,	// (0x0004a724) bg_popup_call2_act_pane_cp02

0xb637,	// (0x0004b2b9) call4_list_conf_pane

0x6381,	// (0x00046003) call4_image_pane_g1

0x6381,	// (0x00046003) call4_image_pane_g2

0x0001,

0xf658,	// (0x0004f2da) call4_image_pane_g

0xb935,	// (0x0004b5b7) list_single_graphic_popup_conf4_pane_ParamLimits

0xb935,	// (0x0004b5b7) list_single_graphic_popup_conf4_pane

0xaaa2,	// (0x0004a724) list_highlight_pane_cp022

0xb94a,	// (0x0004b5cc) list_single_graphic_popup_conf4_pane_g1

0xe812,	// (0x0004e494) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf93f,	// (0x0004f5c1) list_single_graphic_popup_conf4_pane_g

0xb952,	// (0x0004b5d4) list_single_graphic_popup_conf4_pane_t1

0x25fa,	// (0x0004227c) popup_vtel_slider_window_ParamLimits

0x25fa,	// (0x0004227c) popup_vtel_slider_window

0xb55a,	// (0x0004b1dc) dialer2_ne_pane_t2_ParamLimits

0xb55a,	// (0x0004b1dc) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x0004f4a9) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x0004f4a9) dialer2_ne_pane_t

0x608a,	// (0x00045d0c) bg_popup_sub_pane_cp010_ParamLimits

0x608a,	// (0x00045d0c) bg_popup_sub_pane_cp010

0x8951,	// (0x000485d3) popup_vtel_slider_window_g1_ParamLimits

0x8951,	// (0x000485d3) popup_vtel_slider_window_g1

0x8964,	// (0x000485e6) popup_vtel_slider_window_g2_ParamLimits

0x8964,	// (0x000485e6) popup_vtel_slider_window_g2

0x0003,

0xf944,	// (0x0004f5c6) popup_vtel_slider_window_g_ParamLimits

0xf944,	// (0x0004f5c6) popup_vtel_slider_window_g

0x89ba,	// (0x0004863c) vtel_slider_pane_ParamLimits

0x89ba,	// (0x0004863c) vtel_slider_pane

0x89dc,	// (0x0004865e) vtel_slider_pane_g1_ParamLimits

0x89dc,	// (0x0004865e) vtel_slider_pane_g1

0x89f0,	// (0x00048672) vtel_slider_pane_g2_ParamLimits

0x89f0,	// (0x00048672) vtel_slider_pane_g2

0x8a08,	// (0x0004868a) vtel_slider_pane_g3_ParamLimits

0x8a08,	// (0x0004868a) vtel_slider_pane_g3

0x89dc,	// (0x0004865e) vtel_slider_pane_g4_ParamLimits

0x89dc,	// (0x0004865e) vtel_slider_pane_g4

0x8a1e,	// (0x000486a0) vtel_slider_pane_g5_ParamLimits

0x8a1e,	// (0x000486a0) vtel_slider_pane_g5

0x0004,

0xf94d,	// (0x0004f5cf) vtel_slider_pane_g_ParamLimits

0xf94d,	// (0x0004f5cf) vtel_slider_pane_g

0xaaa2,	// (0x0004a724) main_gallery2_pane

0x8100,	// (0x00047d82) aid_size_row_itut2_dropdow_list_ParamLimits

0x8100,	// (0x00047d82) aid_size_row_itut2_dropdow_list

0x8190,	// (0x00047e12) grid_vitu2_function_top_pane_ParamLimits

0x8190,	// (0x00047e12) grid_vitu2_function_top_pane

0x81ef,	// (0x00047e71) popup_vitu2_dropdown_list_window_ParamLimits

0x81ef,	// (0x00047e71) popup_vitu2_dropdown_list_window

0x8218,	// (0x00047e9a) popup_vitu2_match_list_window

0x8a34,	// (0x000486b6) cell_vitu2_function_top_pane_ParamLimits

0x8a34,	// (0x000486b6) cell_vitu2_function_top_pane

0x8a54,	// (0x000486d6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8a54,	// (0x000486d6) cell_vitu2_function_top_pane_cp01

0x8a72,	// (0x000486f4) cell_vitu2_function_top_wide_pane_ParamLimits

0x8a72,	// (0x000486f4) cell_vitu2_function_top_wide_pane

0xefa9,	// (0x0004ec2b) bg_button_pane_cp012

0x8a90,	// (0x00048712) cell_vitu2_function_top_pane_g1

0xd757,	// (0x0004d3d9) bg_button_pane_cp013_ParamLimits

0xd757,	// (0x0004d3d9) bg_button_pane_cp013

0x8aa4,	// (0x00048726) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8aa4,	// (0x00048726) cell_vitu2_function_top_wide_pane_g1

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp20

0x8abc,	// (0x0004873e) list_vitu2_match_list_pane

0xb702,	// (0x0004b384) bg_popup_sub_pane_cp20_g1

0xb70a,	// (0x0004b38c) bg_popup_sub_pane_cp20_g2

0xe396,	// (0x0004e018) bg_popup_sub_pane_cp20_g3

0xb712,	// (0x0004b394) bg_popup_sub_pane_cp20_g4

0xe376,	// (0x0004dff8) bg_popup_sub_pane_cp20_g5

0xb96e,	// (0x0004b5f0) bg_popup_sub_pane_cp20_g6

0xb722,	// (0x0004b3a4) bg_popup_sub_pane_cp20_g7

0xb72a,	// (0x0004b3ac) bg_popup_sub_pane_cp20_g8

0xb732,	// (0x0004b3b4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf958,	// (0x0004f5da) bg_popup_sub_pane_cp20_g

0xd773,	// (0x0004d3f5) list_vitu2_match_list_item_pane_ParamLimits

0xd773,	// (0x0004d3f5) list_vitu2_match_list_item_pane

0xd785,	// (0x0004d407) list_vitu2_match_list_item_pane_t1

0xaaa2,	// (0x0004a724) bg_popup_sub_pane_cp21

0xe72d,	// (0x0004e3af) grid_vitu2_dropdown_list_pane

0x8ada,	// (0x0004875c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8ada,	// (0x0004875c) cell_vitu2_dropdown_list_char_pane

0x8afd,	// (0x0004877f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8afd,	// (0x0004877f) cell_vitu2_dropdown_list_ctrl_pane

0xb98e,	// (0x0004b610) cell_vitu2_dropdown_list_char_pane_g1

0xb997,	// (0x0004b619) cell_vitu2_dropdown_list_char_pane_g2

0xb9a0,	// (0x0004b622) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf975,	// (0x0004f5f7) cell_vitu2_dropdown_list_char_pane_g

0x8b2b,	// (0x000487ad) cell_vitu2_dropdown_list_char_pane_t1

0x8b39,	// (0x000487bb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8b39,	// (0x000487bb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8b49,	// (0x000487cb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8b49,	// (0x000487cb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8b5a,	// (0x000487dc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8b5a,	// (0x000487dc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8b6a,	// (0x000487ec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8b6a,	// (0x000487ec) cell_vitu2_dropdown_list_ctrl_pane_g4

0x665f,	// (0x000462e1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x665f,	// (0x000462e1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf97c,	// (0x0004f5fe) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf97c,	// (0x0004f5fe) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b86,	// (0x00048808) aid_size_cell_gallery2_ParamLimits

0x8b86,	// (0x00048808) aid_size_cell_gallery2

0x8b9c,	// (0x0004881e) grid_gallery2_pane_ParamLimits

0x8b9c,	// (0x0004881e) grid_gallery2_pane

0x8bb0,	// (0x00048832) scroll_pane_cp029_ParamLimits

0x8bb0,	// (0x00048832) scroll_pane_cp029

0x8bbc,	// (0x0004883e) cell_gallery2_pane_ParamLimits

0x8bbc,	// (0x0004883e) cell_gallery2_pane

0xb9a9,	// (0x0004b62b) cell_gallery2_pane_g2

0x8bf6,	// (0x00048878) cell_gallery2_pane_g3

0xb9b3,	// (0x0004b635) cell_gallery2_pane_g4

0xb9bb,	// (0x0004b63d) cell_gallery2_pane_g5

0xe9e0,	// (0x0004e662) grid_highlight_pane_cp10

0x8218,	// (0x00047e9a) popup_vitu2_match_list_window_ParamLimits

0x822f,	// (0x00047eb1) popup_vitu2_query_window_ParamLimits

0x822f,	// (0x00047eb1) popup_vitu2_query_window

0xaaa2,	// (0x0004a724) bg_vitu2_candi_button_pane

0xb98e,	// (0x0004b610) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb997,	// (0x0004b619) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb9a0,	// (0x0004b622) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f93,	// (0x00040c15) bg_button_pane_cp015

0x8bfe,	// (0x00048880) bg_button_pane_cp016

0x8c08,	// (0x0004888a) bg_button_pane_cp017

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp22

0xb9c3,	// (0x0004b645) popup_vitu2_query_window_g1

0x0faa,	// (0x00040c2c) popup_vitu2_query_window_g2

0x0001,

0xf987,	// (0x0004f609) popup_vitu2_query_window_g

0x0fb8,	// (0x00040c3a) popup_vitu2_query_window_t1_ParamLimits

0x0fb8,	// (0x00040c3a) popup_vitu2_query_window_t1

0x0fe0,	// (0x00040c62) popup_vitu2_query_window_t2_ParamLimits

0x0fe0,	// (0x00040c62) popup_vitu2_query_window_t2

0x0ff2,	// (0x00040c74) popup_vitu2_query_window_t3_ParamLimits

0x0ff2,	// (0x00040c74) popup_vitu2_query_window_t3

0x8c23,	// (0x000488a5) popup_vitu2_query_window_t4_ParamLimits

0x8c23,	// (0x000488a5) popup_vitu2_query_window_t4

0x8c37,	// (0x000488b9) popup_vitu2_query_window_t5_ParamLimits

0x8c37,	// (0x000488b9) popup_vitu2_query_window_t5

0x0004,

0xf98c,	// (0x0004f60e) popup_vitu2_query_window_t_ParamLimits

0xf98c,	// (0x0004f60e) popup_vitu2_query_window_t

0xb808,	// (0x0004b48a) main_cset_text_pane

0x8679,	// (0x000482fb) aid_area_touch_slider_ParamLimits

0x8695,	// (0x00048317) cset_slider_pane_ParamLimits

0x86bf,	// (0x00048341) main_cset_slider_pane_g1_ParamLimits

0x86d4,	// (0x00048356) main_cset_slider_pane_g2_ParamLimits

0xb829,	// (0x0004b4ab) main_cset_slider_pane_g3_ParamLimits

0xb829,	// (0x0004b4ab) main_cset_slider_pane_g3

0x86e9,	// (0x0004836b) main_cset_slider_pane_g4_ParamLimits

0x86e9,	// (0x0004836b) main_cset_slider_pane_g4

0x86f8,	// (0x0004837a) main_cset_slider_pane_g5_ParamLimits

0x86f8,	// (0x0004837a) main_cset_slider_pane_g5

0x8706,	// (0x00048388) main_cset_slider_pane_g6_ParamLimits

0x8706,	// (0x00048388) main_cset_slider_pane_g6

0xf8e8,	// (0x0004f56a) main_cset_slider_pane_g_ParamLimits

0xb859,	// (0x0004b4db) main_cset_slider_pane_t1_ParamLimits

0x8796,	// (0x00048418) main_cset_slider_pane_t2_ParamLimits

0x87b0,	// (0x00048432) main_cset_slider_pane_t3_ParamLimits

0x87ca,	// (0x0004844c) main_cset_slider_pane_t4_ParamLimits

0x87e4,	// (0x00048466) main_cset_slider_pane_t5_ParamLimits

0x8802,	// (0x00048484) main_cset_slider_pane_t6_ParamLimits

0x8819,	// (0x0004849b) main_cset_slider_pane_t7_ParamLimits

0x8847,	// (0x000484c9) main_cset_slider_pane_t8_ParamLimits

0x8847,	// (0x000484c9) main_cset_slider_pane_t8

0x886f,	// (0x000484f1) main_cset_slider_pane_t9_ParamLimits

0x886f,	// (0x000484f1) main_cset_slider_pane_t9

0x8897,	// (0x00048519) main_cset_slider_pane_t10_ParamLimits

0x8897,	// (0x00048519) main_cset_slider_pane_t10

0x88bf,	// (0x00048541) main_cset_slider_pane_t11_ParamLimits

0x88bf,	// (0x00048541) main_cset_slider_pane_t11

0x88e9,	// (0x0004856b) main_cset_slider_pane_t12_ParamLimits

0x88e9,	// (0x0004856b) main_cset_slider_pane_t12

0x8906,	// (0x00048588) main_cset_slider_pane_t13_ParamLimits

0x8906,	// (0x00048588) main_cset_slider_pane_t13

0xf90d,	// (0x0004f58f) main_cset_slider_pane_t_ParamLimits

0xaaa2,	// (0x0004a724) bg_popup_sub_pane_cp011

0xb9cf,	// (0x0004b651) main_cset_text_pane_g1

0xb9d7,	// (0x0004b659) main_cset_text_pane_t1

0xb9e5,	// (0x0004b667) main_cset_text_pane_t2

0xb9f3,	// (0x0004b675) main_cset_text_pane_t3

0xba01,	// (0x0004b683) main_cset_text_pane_t4

0xba0f,	// (0x0004b691) main_cset_text_pane_t5

0xba1d,	// (0x0004b69f) main_cset_text_pane_t6

0xba2b,	// (0x0004b6ad) main_cset_text_pane_t7

0x0006,

0xf997,	// (0x0004f619) main_cset_text_pane_t

0xaaa2,	// (0x0004a724) main_cam4_burst_pane

0xaaa2,	// (0x0004a724) main_cam5_pane

0x85ae,	// (0x00048230) bg_button_pane_cp019

0x85b7,	// (0x00048239) bg_button_pane_cp020

0xb835,	// (0x0004b4b7) main_cset_slider_pane_g7_ParamLimits

0xb835,	// (0x0004b4b7) main_cset_slider_pane_g7

0xb841,	// (0x0004b4c3) main_cset_slider_pane_g8_ParamLimits

0xb841,	// (0x0004b4c3) main_cset_slider_pane_g8

0x871a,	// (0x0004839c) main_cset_slider_pane_g9_ParamLimits

0x871a,	// (0x0004839c) main_cset_slider_pane_g9

0x8726,	// (0x000483a8) main_cset_slider_pane_g10_ParamLimits

0x8726,	// (0x000483a8) main_cset_slider_pane_g10

0x8732,	// (0x000483b4) main_cset_slider_pane_g11_ParamLimits

0x8732,	// (0x000483b4) main_cset_slider_pane_g11

0x873e,	// (0x000483c0) main_cset_slider_pane_g12_ParamLimits

0x873e,	// (0x000483c0) main_cset_slider_pane_g12

0x874a,	// (0x000483cc) main_cset_slider_pane_g13_ParamLimits

0x874a,	// (0x000483cc) main_cset_slider_pane_g13

0x8756,	// (0x000483d8) main_cset_slider_pane_g14_ParamLimits

0x8756,	// (0x000483d8) main_cset_slider_pane_g14

0x8762,	// (0x000483e4) main_cset_slider_pane_g15_ParamLimits

0x8762,	// (0x000483e4) main_cset_slider_pane_g15

0xb887,	// (0x0004b509) main_cset_slider_pane_t14_ParamLimits

0xb887,	// (0x0004b509) main_cset_slider_pane_t14

0xb8c0,	// (0x0004b542) main_cset_slider_pane_t15_ParamLimits

0xb8c0,	// (0x0004b542) main_cset_slider_pane_t15

0x8c4b,	// (0x000488cd) aid_cam4_burst_size_cell_ParamLimits

0x8c4b,	// (0x000488cd) aid_cam4_burst_size_cell

0x8c6b,	// (0x000488ed) grid_cam4_burst_pane_ParamLimits

0x8c6b,	// (0x000488ed) grid_cam4_burst_pane

0x8ca5,	// (0x00048927) linegrid_cam4_burst_pane_ParamLimits

0x8ca5,	// (0x00048927) linegrid_cam4_burst_pane

0xba39,	// (0x0004b6bb) scroll_pane_cp30_ParamLimits

0xba39,	// (0x0004b6bb) scroll_pane_cp30

0x8cc9,	// (0x0004894b) cell_cam4_burst_pane_ParamLimits

0x8cc9,	// (0x0004894b) cell_cam4_burst_pane

0xba45,	// (0x0004b6c7) linegrid_cam4_burst_pane_g1_ParamLimits

0xba45,	// (0x0004b6c7) linegrid_cam4_burst_pane_g1

0x8d1e,	// (0x000489a0) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d1e,	// (0x000489a0) linegrid_cam4_burst_pane_g2

0xba52,	// (0x0004b6d4) linegrid_cam4_burst_pane_g3_ParamLimits

0xba52,	// (0x0004b6d4) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a6,	// (0x0004f628) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a6,	// (0x0004f628) linegrid_cam4_burst_pane_g

0x8d2f,	// (0x000489b1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d2f,	// (0x000489b1) linegrid_cam4_burst_pane_g3_copy1

0xba5f,	// (0x0004b6e1) linegrid_cam4_burst_pane_g4_ParamLimits

0xba5f,	// (0x0004b6e1) linegrid_cam4_burst_pane_g4

0x8d4d,	// (0x000489cf) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d4d,	// (0x000489cf) linegrid_cam4_burst_pane_g5

0x8d5e,	// (0x000489e0) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d5e,	// (0x000489e0) linegrid_cam4_burst_pane_g6

0xba6c,	// (0x0004b6ee) linegrid_cam4_burst_pane_g7_ParamLimits

0xba6c,	// (0x0004b6ee) linegrid_cam4_burst_pane_g7

0x8d75,	// (0x000489f7) cell_cam4_burst_pane_g1

0xba85,	// (0x0004b707) main_cam5_pane_t1_ParamLimits

0xba85,	// (0x0004b707) main_cam5_pane_t1

0xba97,	// (0x0004b719) main_cam5_pane_t2_ParamLimits

0xba97,	// (0x0004b719) main_cam5_pane_t2

0xbaa9,	// (0x0004b72b) main_cam5_pane_t3_ParamLimits

0xbaa9,	// (0x0004b72b) main_cam5_pane_t3

0xbabb,	// (0x0004b73d) main_cam5_pane_t4_ParamLimits

0xbabb,	// (0x0004b73d) main_cam5_pane_t4

0xbad3,	// (0x0004b755) main_cam5_pane_t5_ParamLimits

0xbad3,	// (0x0004b755) main_cam5_pane_t5

0xbae7,	// (0x0004b769) main_cam5_pane_t6_ParamLimits

0xbae7,	// (0x0004b769) main_cam5_pane_t6

0xbafb,	// (0x0004b77d) main_cam5_pane_t7_ParamLimits

0xbafb,	// (0x0004b77d) main_cam5_pane_t7

0xbb0d,	// (0x0004b78f) main_cam5_pane_t8_ParamLimits

0xbb0d,	// (0x0004b78f) main_cam5_pane_t8

0xbb2b,	// (0x0004b7ad) main_cam5_pane_t9_ParamLimits

0xbb2b,	// (0x0004b7ad) main_cam5_pane_t9

0xbb3d,	// (0x0004b7bf) main_cam5_pane_t10_ParamLimits

0xbb3d,	// (0x0004b7bf) main_cam5_pane_t10

0xbb4f,	// (0x0004b7d1) main_cam5_pane_t11_ParamLimits

0xbb4f,	// (0x0004b7d1) main_cam5_pane_t11

0xbb63,	// (0x0004b7e5) main_cam5_pane_t12_ParamLimits

0xbb63,	// (0x0004b7e5) main_cam5_pane_t12

0xbb7a,	// (0x0004b7fc) main_cam5_pane_t13_ParamLimits

0xbb7a,	// (0x0004b7fc) main_cam5_pane_t13

0x000c,

0xf9b2,	// (0x0004f634) main_cam5_pane_t_ParamLimits

0xf9b2,	// (0x0004f634) main_cam5_pane_t

0x1896,	// (0x00041518) popup_scut_keymap_window_ParamLimits

0x1896,	// (0x00041518) popup_scut_keymap_window

0x8d88,	// (0x00048a0a) aid_size_cell_brow_shortcut

0xe9e0,	// (0x0004e662) bg_popup_window_pane_cp010

0x8d94,	// (0x00048a16) grid_scut_pane

0x8da0,	// (0x00048a22) cell_scut_pane_ParamLimits

0x8da0,	// (0x00048a22) cell_scut_pane

0x8db9,	// (0x00048a3b) cell_scut_pane_g1

0xbb9d,	// (0x0004b81f) cell_scut_pane_t1

0xbbac,	// (0x0004b82e) cell_scut_pane_t2

0x8dc2,	// (0x00048a44) cell_scut_pane_t3

0x0002,

0xf9cd,	// (0x0004f64f) cell_scut_pane_t

0x69dd,	// (0x0004665f) main_mup3_pane_g8_ParamLimits

0x69dd,	// (0x0004665f) main_mup3_pane_g8

0x811a,	// (0x00047d9c) area_vitu2_query_pane_ParamLimits

0x811a,	// (0x00047d9c) area_vitu2_query_pane

0x0f9d,	// (0x00040c1f) input_focus_pane_cp08

0xbbbb,	// (0x0004b83d) area_vitu2_query_pane_g1

0x101a,	// (0x00040c9c) area_vitu2_query_pane_g2

0x0001,

0xf9d4,	// (0x0004f656) area_vitu2_query_pane_g

0x8dd0,	// (0x00048a52) area_vitu2_query_pane_t1_ParamLimits

0x8dd0,	// (0x00048a52) area_vitu2_query_pane_t1

0x8de4,	// (0x00048a66) area_vitu2_query_pane_t2_ParamLimits

0x8de4,	// (0x00048a66) area_vitu2_query_pane_t2

0x102b,	// (0x00040cad) area_vitu2_query_pane_t3_ParamLimits

0x102b,	// (0x00040cad) area_vitu2_query_pane_t3

0xbbc7,	// (0x0004b849) area_vitu2_query_pane_t4_ParamLimits

0xbbc7,	// (0x0004b849) area_vitu2_query_pane_t4

0xbbef,	// (0x0004b871) area_vitu2_query_pane_t5_ParamLimits

0xbbef,	// (0x0004b871) area_vitu2_query_pane_t5

0xbc17,	// (0x0004b899) area_vitu2_query_pane_t6_ParamLimits

0xbc17,	// (0x0004b899) area_vitu2_query_pane_t6

0x0006,

0xf9d9,	// (0x0004f65b) area_vitu2_query_pane_t_ParamLimits

0xf9d9,	// (0x0004f65b) area_vitu2_query_pane_t

0x8df8,	// (0x00048a7a) bg_button_pane_cp018

0x8e06,	// (0x00048a88) bg_button_pane_cp021

0x1053,	// (0x00040cd5) bg_button_pane_cp022

0x1064,	// (0x00040ce6) input_focus_pane_cp09

0x3561,	// (0x000431e3) aid_size_touch_mv_arrow_left

0x358a,	// (0x0004320c) aid_size_touch_mv_arrow_right

0x877a,	// (0x000483fc) main_cset_slider_pane_g16_ParamLimits

0x877a,	// (0x000483fc) main_cset_slider_pane_g16

0x8788,	// (0x0004840a) main_cset_slider_pane_g17_ParamLimits

0x8788,	// (0x0004840a) main_cset_slider_pane_g17

0x8d75,	// (0x000489f7) cell_cam4_burst_pane_g1_ParamLimits

0xaaa2,	// (0x0004a724) compa_mode_pane

0x8974,	// (0x000485f6) popup_vtel_slider_window_g3_ParamLimits

0x8974,	// (0x000485f6) popup_vtel_slider_window_g3

0x898b,	// (0x0004860d) popup_vtel_slider_window_g4_ParamLimits

0x898b,	// (0x0004860d) popup_vtel_slider_window_g4

0x89a2,	// (0x00048624) popup_vtel_slider_window_t1_ParamLimits

0x89a2,	// (0x00048624) popup_vtel_slider_window_t1

0xaaa2,	// (0x0004a724) main_cl_pane

0x5345,	// (0x00044fc7) popup_imed_adjust2_window_ParamLimits

0x51e6,	// (0x00044e68) bg_tb_trans_pane_cp05_ParamLimits

0x7568,	// (0x000471ea) popup_imed_adjust2_window_g1_ParamLimits

0x7577,	// (0x000471f9) popup_imed_adjust2_window_g2_ParamLimits

0x7577,	// (0x000471f9) popup_imed_adjust2_window_g2

0x7583,	// (0x00047205) popup_imed_adjust2_window_g3_ParamLimits

0x7583,	// (0x00047205) popup_imed_adjust2_window_g3

0x0002,

0xf756,	// (0x0004f3d8) popup_imed_adjust2_window_g_ParamLimits

0xf756,	// (0x0004f3d8) popup_imed_adjust2_window_g

0x758f,	// (0x00047211) popup_imed_adjust2_window_t1_ParamLimits

0xaf9f,	// (0x0004ac21) slider_imed_adjust_pane_ParamLimits

0xafb3,	// (0x0004ac35) slider_imed_adjust_pane_g1_ParamLimits

0xafc3,	// (0x0004ac45) slider_imed_adjust_pane_g2_ParamLimits

0xafd3,	// (0x0004ac55) slider_imed_adjust_pane_g3_ParamLimits

0xafe4,	// (0x0004ac66) slider_imed_adjust_pane_g4_ParamLimits

0xf75d,	// (0x0004f3df) slider_imed_adjust_pane_g_ParamLimits

0x7e58,	// (0x00047ada) aid_touch_area_cam4_ParamLimits

0x7e58,	// (0x00047ada) aid_touch_area_cam4

0xd6c2,	// (0x0004d344) battery_pane_cp01

0x7f03,	// (0x00047b85) main_camera4_pane_g6_ParamLimits

0x7f03,	// (0x00047b85) main_camera4_pane_g6

0x7f26,	// (0x00047ba8) main_camera4_pane_t2_ParamLimits

0x7f26,	// (0x00047ba8) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x0004f4dd) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x0004f4dd) main_camera4_pane_t

0x7f6f,	// (0x00047bf1) aid_touch_area_vid4_ParamLimits

0x7f6f,	// (0x00047bf1) aid_touch_area_vid4

0x7fcd,	// (0x00047c4f) main_video4_pane_g5_ParamLimits

0x7fcd,	// (0x00047c4f) main_video4_pane_g5

0x7ff4,	// (0x00047c76) vid4_progress_pane_ParamLimits

0x7ff4,	// (0x00047c76) vid4_progress_pane

0xb84d,	// (0x0004b4cf) main_cset_slider_pane_g18_ParamLimits

0xb84d,	// (0x0004b4cf) main_cset_slider_pane_g18

0xba79,	// (0x0004b6fb) cell_cam4_burst_pane_g2_ParamLimits

0xba79,	// (0x0004b6fb) cell_cam4_burst_pane_g2

0x0001,

0xf9ad,	// (0x0004f62f) cell_cam4_burst_pane_g_ParamLimits

0xf9ad,	// (0x0004f62f) cell_cam4_burst_pane_g

0xdf84,	// (0x0004dc06) bg_cl_pane_ParamLimits

0xdf84,	// (0x0004dc06) bg_cl_pane

0x8e12,	// (0x00048a94) cl_header_pane_ParamLimits

0x8e12,	// (0x00048a94) cl_header_pane

0x8e26,	// (0x00048aa8) cl_listscroll_pane_ParamLimits

0x8e26,	// (0x00048aa8) cl_listscroll_pane

0xbc63,	// (0x0004b8e5) bg_cl_pane_g1

0xbc6b,	// (0x0004b8ed) bg_cl_pane_g2

0xbc73,	// (0x0004b8f5) bg_cl_pane_g3

0xbc7b,	// (0x0004b8fd) bg_cl_pane_g4

0xbc83,	// (0x0004b905) bg_cl_pane_g5

0xbc8b,	// (0x0004b90d) bg_cl_pane_g6

0xbc93,	// (0x0004b915) bg_cl_pane_g7

0xbc9b,	// (0x0004b91d) bg_cl_pane_g8

0xbca3,	// (0x0004b925) bg_cl_pane_g9

0x0008,

0xf9e8,	// (0x0004f66a) bg_cl_pane_g

0x8e36,	// (0x00048ab8) aid_height_cl_leading_ParamLimits

0x8e36,	// (0x00048ab8) aid_height_cl_leading

0x8e42,	// (0x00048ac4) aid_height_cl_text_ParamLimits

0x8e42,	// (0x00048ac4) aid_height_cl_text

0xefa9,	// (0x0004ec2b) bg_cl_header_pane_ParamLimits

0xefa9,	// (0x0004ec2b) bg_cl_header_pane

0x8e61,	// (0x00048ae3) cl_header_pane_g1_ParamLimits

0x8e61,	// (0x00048ae3) cl_header_pane_g1

0x8e77,	// (0x00048af9) cl_header_pane_t1_ParamLimits

0x8e77,	// (0x00048af9) cl_header_pane_t1

0xbcab,	// (0x0004b92d) cl_list_pane

0xb820,	// (0x0004b4a2) hc_scroll_pane_cp01

0xe376,	// (0x0004dff8) bg_cl_header_pane_g1

0xb702,	// (0x0004b384) bg_cl_header_pane_g2

0xe396,	// (0x0004e018) bg_cl_header_pane_g3

0xb712,	// (0x0004b394) bg_cl_header_pane_g4

0xb70a,	// (0x0004b38c) bg_cl_header_pane_g5

0xb96e,	// (0x0004b5f0) bg_cl_header_pane_g6

0xb72a,	// (0x0004b3ac) bg_cl_header_pane_g7

0xb732,	// (0x0004b3b4) bg_cl_header_pane_g8

0xb722,	// (0x0004b3a4) bg_cl_header_pane_g9

0x0008,

0xf9fb,	// (0x0004f67d) bg_cl_header_pane_g

0x8e90,	// (0x00048b12) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e90,	// (0x00048b12) hc_cl_list_double_graphic_heading_pane

0x8ea3,	// (0x00048b25) hc_cl_list_single_graphic_pane_ParamLimits

0x8ea3,	// (0x00048b25) hc_cl_list_single_graphic_pane

0x8ebb,	// (0x00048b3d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ebb,	// (0x00048b3d) hc_cl_list_single_graphic_pane_g1

0x8ec7,	// (0x00048b49) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8ec7,	// (0x00048b49) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0e,	// (0x0004f690) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0e,	// (0x0004f690) hc_cl_list_single_graphic_pane_g

0x8edb,	// (0x00048b5d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8edb,	// (0x00048b5d) hc_cl_list_single_graphic_pane_t1

0x8ebb,	// (0x00048b3d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ebb,	// (0x00048b3d) hc_cl_list_double_graphic_heading_pane_g1

0x8ef0,	// (0x00048b72) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ef0,	// (0x00048b72) hc_cl_list_double_graphic_heading_pane_g2

0x8f04,	// (0x00048b86) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f04,	// (0x00048b86) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa13,	// (0x0004f695) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa13,	// (0x0004f695) hc_cl_list_double_graphic_heading_pane_g

0x8f18,	// (0x00048b9a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f18,	// (0x00048b9a) hc_cl_list_double_graphic_heading_pane_t1

0x8f2d,	// (0x00048baf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f2d,	// (0x00048baf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1a,	// (0x0004f69c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1a,	// (0x0004f69c) hc_cl_list_double_graphic_heading_pane_t

0xd79b,	// (0x0004d41d) vid4_progress_pane_g1

0xd7a7,	// (0x0004d429) vid4_progress_pane_g2

0xd7b3,	// (0x0004d435) vid4_progress_pane_g3

0xd7c2,	// (0x0004d444) vid4_progress_pane_g4

0x0004,

0xfa1f,	// (0x0004f6a1) vid4_progress_pane_g

0xd7e0,	// (0x0004d462) vid4_progress_pane_t1

0xd7f6,	// (0x0004d478) vid4_progress_pane_t2

0x0002,

0xfa2a,	// (0x0004f6ac) vid4_progress_pane_t

0xd821,	// (0x0004d4a3) wait_bar_pane_cp07

0x6098,	// (0x00045d1a) blid_firmament_pane_ParamLimits

0x60db,	// (0x00045d5d) popup_blid_sat_info2_window_g1

0x60ff,	// (0x00045d81) popup_blid_sat_info2_window_t3

0x610d,	// (0x00045d8f) popup_blid_sat_info2_window_t4

0x611b,	// (0x00045d9d) popup_blid_sat_info2_window_t5

0x6129,	// (0x00045dab) popup_blid_sat_info2_window_t6

0x6139,	// (0x00045dbb) popup_blid_sat_info2_window_t7

0x6147,	// (0x00045dc9) popup_blid_sat_info2_window_t8

0x6155,	// (0x00045dd7) popup_blid_sat_info2_window_t9

0x6163,	// (0x00045de5) popup_blid_sat_info2_window_t10

0x6301,	// (0x00045f83) aid_firma_cardinal_ParamLimits

0x6315,	// (0x00045f97) blid_firmament_pane_t1_ParamLimits

0x632c,	// (0x00045fae) blid_firmament_pane_t2_ParamLimits

0x6343,	// (0x00045fc5) blid_firmament_pane_t3_ParamLimits

0x635a,	// (0x00045fdc) blid_firmament_pane_t4_ParamLimits

0xf64f,	// (0x0004f2d1) blid_firmament_pane_t_ParamLimits

0x6371,	// (0x00045ff3) blid_sat_info_pane_ParamLimits

0xefa9,	// (0x0004ec2b) main_cam_set_pane_ParamLimits

0x73c2,	// (0x00047044) aid_size_cell_colour_35_ParamLimits

0x73e2,	// (0x00047064) aid_size_cell_colour_112_ParamLimits

0x7402,	// (0x00047084) aid_size_cell_effect_ParamLimits

0x51e6,	// (0x00044e68) bg_tb_trans_pane_cp02_ParamLimits

0xe53e,	// (0x0004e1c0) heading_imed_pane_ParamLimits

0x7422,	// (0x000470a4) listscroll_imed_pane_ParamLimits

0x44eb,	// (0x0004416d) popup_call2_audio_first_window_g5_ParamLimits

0x44eb,	// (0x0004416d) popup_call2_audio_first_window_g5

0x7b02,	// (0x00047784) aid_size_touch_image3_arrow_left_ParamLimits

0x7b02,	// (0x00047784) aid_size_touch_image3_arrow_left

0x7b2e,	// (0x000477b0) aid_size_touch_image3_arrow_right_ParamLimits

0x7b2e,	// (0x000477b0) aid_size_touch_image3_arrow_right

0xd80c,	// (0x0004d48e) vid4_progress_pane_t3

0x785a,	// (0x000474dc) main_hwr_training_symbol_option_pane_ParamLimits

0x785a,	// (0x000474dc) main_hwr_training_symbol_option_pane

0xb24f,	// (0x0004aed1) popup_hwr_training_preview_window_ParamLimits

0xb24f,	// (0x0004aed1) popup_hwr_training_preview_window

0x787a,	// (0x000474fc) hwr_training_navi_pane_g5_ParamLimits

0x787a,	// (0x000474fc) hwr_training_navi_pane_g5

0xb6f0,	// (0x0004b372) popup_char_count_window

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp20_ParamLimits

0x8abc,	// (0x0004873e) list_vitu2_match_list_pane_ParamLimits

0x8acb,	// (0x0004874d) vitu2_page_scroll_pane_ParamLimits

0x8acb,	// (0x0004874d) vitu2_page_scroll_pane

0xbd0e,	// (0x0004b990) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbd0e,	// (0x0004b990) list_single_hwr_training_symbol_option_pane

0xbd21,	// (0x0004b9a3) list_single_hwr_training_symbol_option_pane_g1

0xbd29,	// (0x0004b9ab) list_single_hwr_training_symbol_option_pane_t1

0xbd37,	// (0x0004b9b9) bg_button_pane_cp023

0xbd40,	// (0x0004b9c2) bg_button_pane_cp024

0x8f4c,	// (0x00048bce) vitu2_page_scroll_pane_g1

0x8f54,	// (0x00048bd6) vitu2_page_scroll_pane_g2

0x0001,

0xfa31,	// (0x0004f6b3) vitu2_page_scroll_pane_g

0x8f5e,	// (0x00048be0) vitu2_page_scroll_pane_t1

0x5fc8,	// (0x00045c4a) popup_char_count_window_g1

0xbd73,	// (0x0004b9f5) popup_char_count_window_g2

0xbd7c,	// (0x0004b9fe) popup_char_count_window_g3

0x0002,

0xfa36,	// (0x0004f6b8) popup_char_count_window_g

0xbd85,	// (0x0004ba07) popup_char_count_window_t1

0xaaa2,	// (0x0004a724) main_vded2_pane

0x7554,	// (0x000471d6) aid_size_cell_imed_line

0x755e,	// (0x000471e0) grid_imed_line_width_pane

0x8064,	// (0x00047ce6) vid4_indicators_pane_g4

0xbd93,	// (0x0004ba15) cell_imed_line_width_pane_ParamLimits

0xbd93,	// (0x0004ba15) cell_imed_line_width_pane

0xbda9,	// (0x0004ba2b) cell_imed_line_width_pane_g1

0x8f6d,	// (0x00048bef) cell_imed_line_width_pane_g2

0x0001,

0xfa3d,	// (0x0004f6bf) cell_imed_line_width_pane_g

0x8f75,	// (0x00048bf7) main_vded2_pane_g1_ParamLimits

0x8f75,	// (0x00048bf7) main_vded2_pane_g1

0x8f90,	// (0x00048c12) main_vded2_pane_g2_ParamLimits

0x8f90,	// (0x00048c12) main_vded2_pane_g2

0x0001,

0xfa42,	// (0x0004f6c4) main_vded2_pane_g_ParamLimits

0xfa42,	// (0x0004f6c4) main_vded2_pane_g

0x8fa2,	// (0x00048c24) vded2_slider_pane_ParamLimits

0x8fa2,	// (0x00048c24) vded2_slider_pane

0x8fb2,	// (0x00048c34) aid_size_touch_vded2_end

0x8fbc,	// (0x00048c3e) aid_size_touch_vded2_playhead

0xbdb2,	// (0x0004ba34) aid_size_touch_vded2_start

0xbdba,	// (0x0004ba3c) vded2_slider_bg_pane

0xbdc3,	// (0x0004ba45) vded2_slider_pane_g1

0xbdcc,	// (0x0004ba4e) vded2_slider_pane_g2

0x8fc6,	// (0x00048c48) vded2_slider_pane_g3

0x0002,

0xfa47,	// (0x0004f6c9) vded2_slider_pane_g

0xbdd4,	// (0x0004ba56) vded2_slider_bg_pane_g1

0xbddd,	// (0x0004ba5f) vded2_slider_bg_pane_g2

0xbde6,	// (0x0004ba68) vded2_slider_bg_pane_g3

0x0002,

0xfa4e,	// (0x0004f6d0) vded2_slider_bg_pane_g

0x3ba1,	// (0x00043823) aid_postcard_touch_down_pane_ParamLimits

0x3ba1,	// (0x00043823) aid_postcard_touch_down_pane

0x3bb9,	// (0x0004383b) aid_postcard_touch_up_pane_ParamLimits

0x3bb9,	// (0x0004383b) aid_postcard_touch_up_pane

0xaaa2,	// (0x0004a724) main_blid2_pane

0x521c,	// (0x00044e9e) popup_blid2_search_window

0xaaa2,	// (0x0004a724) blid2_gps_pane

0xaaa2,	// (0x0004a724) blid2_navig_pane

0xaaa2,	// (0x0004a724) blid2_search_pane

0xaaa2,	// (0x0004a724) blid2_tripm_pane

0x8fd1,	// (0x00048c53) blid2_search_pane_g1_ParamLimits

0x8fd1,	// (0x00048c53) blid2_search_pane_g1

0x8fe9,	// (0x00048c6b) blid2_search_pane_t1_ParamLimits

0x8fe9,	// (0x00048c6b) blid2_search_pane_t1

0x8ffb,	// (0x00048c7d) aid_size_cell_blid2_gps_ParamLimits

0x8ffb,	// (0x00048c7d) aid_size_cell_blid2_gps

0x9013,	// (0x00048c95) blid2_gps_pane_g1_ParamLimits

0x9013,	// (0x00048c95) blid2_gps_pane_g1

0x9027,	// (0x00048ca9) grid_blid2_satellite_pane_ParamLimits

0x9027,	// (0x00048ca9) grid_blid2_satellite_pane

0x903f,	// (0x00048cc1) blid2_navig_pane_g1_ParamLimits

0x903f,	// (0x00048cc1) blid2_navig_pane_g1

0x904b,	// (0x00048ccd) blid2_navig_pane_t1_ParamLimits

0x904b,	// (0x00048ccd) blid2_navig_pane_t1

0x9066,	// (0x00048ce8) blid2_navig_pane_t2_ParamLimits

0x9066,	// (0x00048ce8) blid2_navig_pane_t2

0x0001,

0xfa55,	// (0x0004f6d7) blid2_navig_pane_t_ParamLimits

0xfa55,	// (0x0004f6d7) blid2_navig_pane_t

0x9081,	// (0x00048d03) blid2_navig_ring_pane_ParamLimits

0x9081,	// (0x00048d03) blid2_navig_ring_pane

0x909c,	// (0x00048d1e) blid2_speed_pane_ParamLimits

0x909c,	// (0x00048d1e) blid2_speed_pane

0x90a8,	// (0x00048d2a) blid2_tripm_pane_g1_ParamLimits

0x90a8,	// (0x00048d2a) blid2_tripm_pane_g1

0x90c3,	// (0x00048d45) blid2_tripm_pane_g2_ParamLimits

0x90c3,	// (0x00048d45) blid2_tripm_pane_g2

0x90d7,	// (0x00048d59) blid2_tripm_pane_g3_ParamLimits

0x90d7,	// (0x00048d59) blid2_tripm_pane_g3

0x90eb,	// (0x00048d6d) blid2_tripm_pane_g4_ParamLimits

0x90eb,	// (0x00048d6d) blid2_tripm_pane_g4

0x90ff,	// (0x00048d81) blid2_tripm_pane_g5_ParamLimits

0x90ff,	// (0x00048d81) blid2_tripm_pane_g5

0x0005,

0xfa5a,	// (0x0004f6dc) blid2_tripm_pane_g_ParamLimits

0xfa5a,	// (0x0004f6dc) blid2_tripm_pane_g

0x9125,	// (0x00048da7) blid2_tripm_pane_t1_ParamLimits

0x9125,	// (0x00048da7) blid2_tripm_pane_t1

0x9140,	// (0x00048dc2) blid2_tripm_pane_t2_ParamLimits

0x9140,	// (0x00048dc2) blid2_tripm_pane_t2

0x9159,	// (0x00048ddb) blid2_tripm_pane_t3_ParamLimits

0x9159,	// (0x00048ddb) blid2_tripm_pane_t3

0x0003,

0xfa67,	// (0x0004f6e9) blid2_tripm_pane_t_ParamLimits

0xfa67,	// (0x0004f6e9) blid2_tripm_pane_t

0x91a0,	// (0x00048e22) cell_blid2_satellite_pane_ParamLimits

0x91a0,	// (0x00048e22) cell_blid2_satellite_pane

0x91bc,	// (0x00048e3e) cell_blid2_satellite_pane_g1

0xbdef,	// (0x0004ba71) cell_blid2_satellite_pane_t1

0x6381,	// (0x00046003) blid2_speed_pane_g1

0xbdfd,	// (0x0004ba7f) blid2_speed_pane_t1

0xbe0b,	// (0x0004ba8d) blid2_speed_pane_t2

0x0001,

0xfa70,	// (0x0004f6f2) blid2_speed_pane_t

0x6381,	// (0x00046003) blid2_navig_ring_pane_g1

0x91c5,	// (0x00048e47) blid2_navig_ring_pane_g2

0x91cd,	// (0x00048e4f) blid2_navig_ring_pane_g3

0x91d5,	// (0x00048e57) blid2_navig_ring_pane_g4

0x91dd,	// (0x00048e5f) blid2_navig_ring_pane_g5

0x0004,

0xfa75,	// (0x0004f6f7) blid2_navig_ring_pane_g

0xaaa2,	// (0x0004a724) bg_popup_window_pane_cp011

0xbe19,	// (0x0004ba9b) popup_blid2_search_window_g1

0xbe21,	// (0x0004baa3) popup_blid2_search_window_t1

0xbe2f,	// (0x0004bab1) popup_blid2_search_window_t2

0x0001,

0xfa80,	// (0x0004f702) popup_blid2_search_window_t

0xe285,	// (0x0004df07) main_browser_pane_g1

0xdf84,	// (0x0004dc06) main_browser_pane_ParamLimits

0xefa9,	// (0x0004ec2b) bg_button_pane_cp011_ParamLimits

0x8340,	// (0x00047fc2) cell_vitu2_function_pane_g1_ParamLimits

0xefa9,	// (0x0004ec2b) bg_popup_sub_pane_cp22_ParamLimits

0x0f9d,	// (0x00040c1f) input_focus_pane_cp08_ParamLimits

0x8c12,	// (0x00048894) popup_vitu2_query_button_pane_ParamLimits

0x8c12,	// (0x00048894) popup_vitu2_query_button_pane

0x0f93,	// (0x00040c15) popup_vitu2_query_input_button_pane

0xb9c3,	// (0x0004b645) popup_vitu2_query_window_g1_ParamLimits

0x0faa,	// (0x00040c2c) popup_vitu2_query_window_g2_ParamLimits

0xf987,	// (0x0004f609) popup_vitu2_query_window_g_ParamLimits

0xaaa2,	// (0x0004a724) bg_button_pane_cp026

0x91e5,	// (0x00048e67) popup_vitu2_query_input_button_pane_g1

0xaaa2,	// (0x0004a724) bg_button_pane_cp025

0xbe3d,	// (0x0004babf) popup_vitu2_query_button_pane_t1

0x66d8,	// (0x0004635a) main_mp3_pane_t6

0x66ee,	// (0x00046370) popup_slider_window_cp01

0xd6d4,	// (0x0004d356) cam4_battery_pane

0xd72d,	// (0x0004d3af) cam4_battery_pane_cp02

0x8f42,	// (0x00048bc4) cam4_battery_pane_cp01

0xd793,	// (0x0004d415) cam4_battery_pane_cp03

0x6381,	// (0x00046003) cam4_battery_pane_g1

0xbe4b,	// (0x0004bacd) cam4_battery_pane_g2

0x0001,

0xfa85,	// (0x0004f707) cam4_battery_pane_g

0x6171,	// (0x00045df3) popup_blid_sat_info2_window_t11

0x3561,	// (0x000431e3) aid_size_touch_mv_arrow_left_ParamLimits

0x358a,	// (0x0004320c) aid_size_touch_mv_arrow_right_ParamLimits

0xe940,	// (0x0004e5c2) navi_pane_g1_ParamLimits

0x35b3,	// (0x00043235) navi_pane_g2_ParamLimits

0x35e1,	// (0x00043263) navi_pane_g3_ParamLimits

0xf3b8,	// (0x0004f03a) navi_pane_g_ParamLimits

0x363b,	// (0x000432bd) navi_pane_mv_t1_ParamLimits

0x7460,	// (0x000470e2) grid_imed_effect_pane_ParamLimits

0xe1ca,	// (0x0004de4c) aid_placing_vt_slider_lsc

0xe1d2,	// (0x0004de54) aid_placing_vt_slider_prt

0xefa9,	// (0x0004ec2b) bg_tb_trans_pane_cp01_ParamLimits

0x6546,	// (0x000461c8) popup_image_details_window_g1_ParamLimits

0x6559,	// (0x000461db) popup_image_details_window_g2_ParamLimits

0x656e,	// (0x000461f0) popup_image_details_window_g3_ParamLimits

0x656e,	// (0x000461f0) popup_image_details_window_g3

0xf694,	// (0x0004f316) popup_image_details_window_g_ParamLimits

0x6582,	// (0x00046204) popup_image_details_window_t1_ParamLimits

0x6594,	// (0x00046216) popup_image_details_window_t2_ParamLimits

0x65ad,	// (0x0004622f) popup_image_details_window_t3_ParamLimits

0x65c1,	// (0x00046243) popup_image_details_window_t4_ParamLimits

0x65dc,	// (0x0004625e) popup_image_details_window_t5_ParamLimits

0xf69b,	// (0x0004f31d) popup_image_details_window_t_ParamLimits

0x8e4e,	// (0x00048ad0) cl_header_name_pane_ParamLimits

0x8e4e,	// (0x00048ad0) cl_header_name_pane

0x91ed,	// (0x00048e6f) cl_header_name_pane_t1_ParamLimits

0x91ed,	// (0x00048e6f) cl_header_name_pane_t1

0x920e,	// (0x00048e90) cl_header_name_pane_t2_ParamLimits

0x920e,	// (0x00048e90) cl_header_name_pane_t2

0x9250,	// (0x00048ed2) cl_header_name_pane_t3_ParamLimits

0x9250,	// (0x00048ed2) cl_header_name_pane_t3

0x0002,

0xfa8a,	// (0x0004f70c) cl_header_name_pane_t_ParamLimits

0xfa8a,	// (0x0004f70c) cl_header_name_pane_t

0x360c,	// (0x0004328e) navi_pane_mv_g2_ParamLimits

0xb690,	// (0x0004b312) field_vitu2_entry_pane_g1_ParamLimits

0xb69c,	// (0x0004b31e) field_vitu2_entry_pane_g2_ParamLimits

0xb6a8,	// (0x0004b32a) field_vitu2_entry_pane_g3_ParamLimits

0xb6a8,	// (0x0004b32a) field_vitu2_entry_pane_g3

0xf88d,	// (0x0004f50f) field_vitu2_entry_pane_g_ParamLimits

0x82bc,	// (0x00047f3e) cell_vitu2_itu_pane_g1_ParamLimits

0x82cc,	// (0x00047f4e) cell_vitu2_itu_pane_g2_ParamLimits

0x82cc,	// (0x00047f4e) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x0004f51b) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x0004f51b) cell_vitu2_itu_pane_g

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp05_ParamLimits

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp05

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp03

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp04

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp10_ParamLimits

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp10

0x1053,	// (0x00040cd5) bg_vkb2_func_pane_cp08

0x8df8,	// (0x00048a7a) bg_vkb2_func_pane_cp06

0x8e06,	// (0x00048a88) bg_vkb2_func_pane_cp07

0xbd49,	// (0x0004b9cb) bg_vkb2_func_pane_cp11_ParamLimits

0xbd49,	// (0x0004b9cb) bg_vkb2_func_pane_cp11

0xbd5e,	// (0x0004b9e0) bg_vkb2_func_pane_cp12_ParamLimits

0xbd5e,	// (0x0004b9e0) bg_vkb2_func_pane_cp12

0xaaa2,	// (0x0004a724) bg_vkb2_func_pane_cp09

0xb702,	// (0x0004b384) bg_vkb2_func_pane_g1

0xe396,	// (0x0004e018) bg_vkb2_func_pane_g2

0xb70a,	// (0x0004b38c) bg_vkb2_func_pane_g3

0xb712,	// (0x0004b394) bg_vkb2_func_pane_g4

0xb96e,	// (0x0004b5f0) bg_vkb2_func_pane_g5

0xb72a,	// (0x0004b3ac) bg_vkb2_func_pane_g6

0xb732,	// (0x0004b3b4) bg_vkb2_func_pane_g7

0xb722,	// (0x0004b3a4) bg_vkb2_func_pane_g8

0xe376,	// (0x0004dff8) bg_vkb2_func_pane_g9

0x0008,

0xfa91,	// (0x0004f713) bg_vkb2_func_pane_g

0x9113,	// (0x00048d95) blid2_tripm_pane_g6_ParamLimits

0x9113,	// (0x00048d95) blid2_tripm_pane_g6

0xb514,	// (0x0004b196) mp4_progress_pane_g1

0x918c,	// (0x00048e0e) blid2_tripm_values_pane_ParamLimits

0x918c,	// (0x00048e0e) blid2_tripm_values_pane

0x9281,	// (0x00048f03) blid2_tripm_values_pane_t1

0x928f,	// (0x00048f11) blid2_tripm_values_pane_t2

0x929d,	// (0x00048f1f) blid2_tripm_values_pane_t3

0x92ab,	// (0x00048f2d) blid2_tripm_values_pane_t4

0x92b9,	// (0x00048f3b) blid2_tripm_values_pane_t5

0x92c7,	// (0x00048f49) blid2_tripm_values_pane_t6

0x92d5,	// (0x00048f57) blid2_tripm_values_pane_t7

0x92e3,	// (0x00048f65) blid2_tripm_values_pane_t8

0x92f1,	// (0x00048f73) blid2_tripm_values_pane_t9

0x0008,

0xfaa4,	// (0x0004f726) blid2_tripm_values_pane_t

0x2570,	// (0x000421f2) call_video_pane_t1_ParamLimits

0x2582,	// (0x00042204) call_video_pane_t2_ParamLimits

0xf29c,	// (0x0004ef1e) call_video_pane_t_ParamLimits

0x0df3,	// (0x00040a75) msg_header_pane_g1_ParamLimits

0xeb5d,	// (0x0004e7df) msg_header_pane_g2_ParamLimits

0xeb5d,	// (0x0004e7df) msg_header_pane_g2

0x0001,

0xf435,	// (0x0004f0b7) msg_header_pane_g_ParamLimits

0xf435,	// (0x0004f0b7) msg_header_pane_g

0xdf84,	// (0x0004dc06) main_clock2_pane_ParamLimits

0x7107,	// (0x00046d89) grid_clock2_toolbar_pane_ParamLimits

0x7107,	// (0x00046d89) grid_clock2_toolbar_pane

0x7107,	// (0x00046d89) listscroll_clock2_pane_ParamLimits

0x7107,	// (0x00046d89) listscroll_clock2_pane

0x71eb,	// (0x00046e6d) main_clock2_pane_t3_ParamLimits

0x71eb,	// (0x00046e6d) main_clock2_pane_t3

0x7206,	// (0x00046e88) main_clock2_pane_t4_ParamLimits

0x7206,	// (0x00046e88) main_clock2_pane_t4

0xbe55,	// (0x0004bad7) cell_clock2_toolbar_pane

0xbe5d,	// (0x0004badf) cell_clock2_toolbar_pane_cp01

0xbe5d,	// (0x0004badf) cell_clock2_toolbar_pane_cp02

0xbe65,	// (0x0004bae7) cell_clock2_toolbar_pane_cp03

0xbe6d,	// (0x0004baef) list_clock2_pane

0xe8a6,	// (0x0004e528) scroll_pane_cp10

0xbe75,	// (0x0004baf7) list_single_clock2_pane_ParamLimits

0xbe75,	// (0x0004baf7) list_single_clock2_pane

0xe9e0,	// (0x0004e662) list_highlight_pane_cp08

0xbe82,	// (0x0004bb04) list_single_clock2_pane_t1

0xbe90,	// (0x0004bb12) list_single_clock2_pane_t2

0x0001,

0xfab7,	// (0x0004f739) list_single_clock2_pane_t

0xaaa2,	// (0x0004a724) bg_button_pane_cp10

0xbe9e,	// (0x0004bb20) cell_clock2_toolbar_pane_g1

0x3b2d,	// (0x000437af) aid_main_viewer_pane_g1_ParamLimits

0x3b2d,	// (0x000437af) aid_main_viewer_pane_g1

0x3b3b,	// (0x000437bd) aid_main_viewer_pane_g2_ParamLimits

0x3b3b,	// (0x000437bd) aid_main_viewer_pane_g2

0x3b49,	// (0x000437cb) aid_main_viewer_pane_g3_ParamLimits

0x3b49,	// (0x000437cb) aid_main_viewer_pane_g3

0x3b58,	// (0x000437da) aid_main_viewer_pane_g4_ParamLimits

0x3b58,	// (0x000437da) aid_main_viewer_pane_g4

0x0003,

0xf446,	// (0x0004f0c8) aid_main_viewer_pane_g_ParamLimits

0xf446,	// (0x0004f0c8) aid_main_viewer_pane_g

0x51d2,	// (0x00044e54) main_calc_pane_ParamLimits

0x51f4,	// (0x00044e76) main_dialer2_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_cam6_pane

0xaaa2,	// (0x0004a724) main_vid6_pane

0x7113,	// (0x00046d95) listscroll_gen_pane_cp06_ParamLimits

0x7113,	// (0x00046d95) listscroll_gen_pane_cp06

0x7221,	// (0x00046ea3) main_clock2_pane_t5_ParamLimits

0x7221,	// (0x00046ea3) main_clock2_pane_t5

0x727e,	// (0x00046f00) aid_call2_pane_cp10_ParamLimits

0x7290,	// (0x00046f12) aid_call_pane_cp10_ParamLimits

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72a2,	// (0x00046f24) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72a2,	// (0x00046f24) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe915,	// (0x0004e597) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf74b,	// (0x0004f3cd) popup_clock_analogue_window_cp10_g_ParamLimits

0x72b8,	// (0x00046f3a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7aaf,	// (0x00047731) cell_dialer2_keypad_pane_g2_ParamLimits

0x7aaf,	// (0x00047731) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x0004f4ae) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x0004f4ae) cell_dialer2_keypad_pane_g

0x7acb,	// (0x0004774d) cell_dialer2_keypad_pane_t1

0x866b,	// (0x000482ed) main_cset_text2_pane_ParamLimits

0x866b,	// (0x000482ed) main_cset_text2_pane

0xbbbb,	// (0x0004b83d) area_vitu2_query_pane_g1_ParamLimits

0x101a,	// (0x00040c9c) area_vitu2_query_pane_g2_ParamLimits

0xf9d4,	// (0x0004f656) area_vitu2_query_pane_g_ParamLimits

0xbc3f,	// (0x0004b8c1) area_vitu2_query_pane_t7_ParamLimits

0xbc3f,	// (0x0004b8c1) area_vitu2_query_pane_t7

0x8df8,	// (0x00048a7a) bg_button_pane_cp018_ParamLimits

0x8e06,	// (0x00048a88) bg_button_pane_cp021_ParamLimits

0x1053,	// (0x00040cd5) bg_button_pane_cp022_ParamLimits

0x1053,	// (0x00040cd5) bg_vkb2_func_pane_cp08_ParamLimits

0x8df8,	// (0x00048a7a) bg_vkb2_func_pane_cp06_ParamLimits

0x8e06,	// (0x00048a88) bg_vkb2_func_pane_cp07_ParamLimits

0x1064,	// (0x00040ce6) input_focus_pane_cp09_ParamLimits

0xd833,	// (0x0004d4b5) cam6_autofocus_pane_ParamLimits

0xd833,	// (0x0004d4b5) cam6_autofocus_pane

0x92ff,	// (0x00048f81) cam6_image_uncrop_pane_ParamLimits

0x92ff,	// (0x00048f81) cam6_image_uncrop_pane

0x930e,	// (0x00048f90) cam6_indi_pane_ParamLimits

0x930e,	// (0x00048f90) cam6_indi_pane

0x9324,	// (0x00048fa6) cam6_mode_pane_ParamLimits

0x9324,	// (0x00048fa6) cam6_mode_pane

0x9336,	// (0x00048fb8) cam6_timer_pane_ParamLimits

0x9336,	// (0x00048fb8) cam6_timer_pane

0x9342,	// (0x00048fc4) cam6_zoom_pane_ParamLimits

0x9342,	// (0x00048fc4) cam6_zoom_pane

0x9350,	// (0x00048fd2) cam6_mode_pane_g1_ParamLimits

0x9350,	// (0x00048fd2) cam6_mode_pane_g1

0x9360,	// (0x00048fe2) cam6_mode_pane_g2_ParamLimits

0x9360,	// (0x00048fe2) cam6_mode_pane_g2

0x9370,	// (0x00048ff2) cam6_mode_pane_g3_ParamLimits

0x9370,	// (0x00048ff2) cam6_mode_pane_g3

0x9380,	// (0x00049002) cam6_mode_pane_g4_ParamLimits

0x9380,	// (0x00049002) cam6_mode_pane_g4

0x0003,

0xfabc,	// (0x0004f73e) cam6_mode_pane_g_ParamLimits

0xfabc,	// (0x0004f73e) cam6_mode_pane_g

0xbea6,	// (0x0004bb28) bg_tb_trans_pane_cp08_ParamLimits

0xbea6,	// (0x0004bb28) bg_tb_trans_pane_cp08

0xbeb4,	// (0x0004bb36) cam6_battery_pane_ParamLimits

0xbeb4,	// (0x0004bb36) cam6_battery_pane

0xbeca,	// (0x0004bb4c) cam6_indi_pane_g1_ParamLimits

0xbeca,	// (0x0004bb4c) cam6_indi_pane_g1

0xbedc,	// (0x0004bb5e) cam6_indi_pane_g2_ParamLimits

0xbedc,	// (0x0004bb5e) cam6_indi_pane_g2

0xbeee,	// (0x0004bb70) cam6_indi_pane_g3_ParamLimits

0xbeee,	// (0x0004bb70) cam6_indi_pane_g3

0x0002,

0xfac5,	// (0x0004f747) cam6_indi_pane_g_ParamLimits

0xfac5,	// (0x0004f747) cam6_indi_pane_g

0xbf00,	// (0x0004bb82) cam6_indi_pane_t1_ParamLimits

0xbf00,	// (0x0004bb82) cam6_indi_pane_t1

0x808e,	// (0x00047d10) cam6_autofocus_pane_g1

0x8096,	// (0x00047d18) cam6_autofocus_pane_g2

0x809e,	// (0x00047d20) cam6_autofocus_pane_g3

0x80a6,	// (0x00047d28) cam6_autofocus_pane_g4

0x0003,

0xfacc,	// (0x0004f74e) cam6_autofocus_pane_g

0xbf26,	// (0x0004bba8) cam6_timer_pane_g1

0xbf2e,	// (0x0004bbb0) cam6_timer_pane_t1

0xbf3c,	// (0x0004bbbe) cam6_zoom_cont_pane

0xbf44,	// (0x0004bbc6) cam6_zoom_pane_g1

0xbf4c,	// (0x0004bbce) cam6_zoom_pane_g2

0x9390,	// (0x00049012) cam6_zoom_pane_g3

0x0002,

0xfad5,	// (0x0004f757) cam6_zoom_pane_g

0x6381,	// (0x00046003) cam6_battery_pane_g1

0x6381,	// (0x00046003) cam6_battery_pane_g2

0x0001,

0xf658,	// (0x0004f2da) cam6_battery_pane_g

0xbf54,	// (0x0004bbd6) cam6_zoom_cont_pane_g1

0xbf5d,	// (0x0004bbdf) cam6_zoom_cont_pane_g2

0xbf66,	// (0x0004bbe8) cam6_zoom_cont_pane_g3

0x0002,

0xfadc,	// (0x0004f75e) cam6_zoom_cont_pane_g

0x93ad,	// (0x0004902f) cam6_mode_pane_cp_ParamLimits

0x93ad,	// (0x0004902f) cam6_mode_pane_cp

0x9342,	// (0x00048fc4) cam6_zoom_pane_cp_ParamLimits

0x9342,	// (0x00048fc4) cam6_zoom_pane_cp

0x93bf,	// (0x00049041) vid6_image_uncrop_cif_pane_ParamLimits

0x93bf,	// (0x00049041) vid6_image_uncrop_cif_pane

0x93cf,	// (0x00049051) vid6_image_uncrop_nhd_pane_ParamLimits

0x93cf,	// (0x00049051) vid6_image_uncrop_nhd_pane

0x92ff,	// (0x00048f81) vid6_image_uncrop_vga_pane_ParamLimits

0x92ff,	// (0x00048f81) vid6_image_uncrop_vga_pane

0x93de,	// (0x00049060) vid6_image_uncrop_wvga_pane_ParamLimits

0x93de,	// (0x00049060) vid6_image_uncrop_wvga_pane

0x93ed,	// (0x0004906f) vid6_indi_pane_ParamLimits

0x93ed,	// (0x0004906f) vid6_indi_pane

0xbea6,	// (0x0004bb28) bg_tb_trans_pane_cp09_ParamLimits

0xbea6,	// (0x0004bb28) bg_tb_trans_pane_cp09

0xbf7e,	// (0x0004bc00) cam6_battery_pane_cp_ParamLimits

0xbf7e,	// (0x0004bc00) cam6_battery_pane_cp

0xbf8a,	// (0x0004bc0c) vid6_indi_pane_g1_ParamLimits

0xbf8a,	// (0x0004bc0c) vid6_indi_pane_g1

0xbf9c,	// (0x0004bc1e) vid6_indi_pane_g2_ParamLimits

0xbf9c,	// (0x0004bc1e) vid6_indi_pane_g2

0xbfae,	// (0x0004bc30) vid6_indi_pane_g3_ParamLimits

0xbfae,	// (0x0004bc30) vid6_indi_pane_g3

0xbfc5,	// (0x0004bc47) vid6_indi_pane_g4_ParamLimits

0xbfc5,	// (0x0004bc47) vid6_indi_pane_g4

0xbfdc,	// (0x0004bc5e) vid6_indi_pane_g5_ParamLimits

0xbfdc,	// (0x0004bc5e) vid6_indi_pane_g5

0x0004,

0xfae3,	// (0x0004f765) vid6_indi_pane_g_ParamLimits

0xfae3,	// (0x0004f765) vid6_indi_pane_g

0xbff6,	// (0x0004bc78) vid6_indi_pane_t1_ParamLimits

0xbff6,	// (0x0004bc78) vid6_indi_pane_t1

0xc00c,	// (0x0004bc8e) vid6_indi_pane_t2_ParamLimits

0xc00c,	// (0x0004bc8e) vid6_indi_pane_t2

0xc034,	// (0x0004bcb6) vid6_indi_pane_t3_ParamLimits

0xc034,	// (0x0004bcb6) vid6_indi_pane_t3

0xc05c,	// (0x0004bcde) vid6_indi_pane_t4_ParamLimits

0xc05c,	// (0x0004bcde) vid6_indi_pane_t4

0x0003,

0xfaee,	// (0x0004f770) vid6_indi_pane_t_ParamLimits

0xfaee,	// (0x0004f770) vid6_indi_pane_t

0xc080,	// (0x0004bd02) wait_bar_pane_cp08

0x9405,	// (0x00049087) main_cset_text2_pane_t1_ParamLimits

0x9405,	// (0x00049087) main_cset_text2_pane_t1

0x9398,	// (0x0004901a) listscroll_gen_pane_cp06_t1_ParamLimits

0x9398,	// (0x0004901a) listscroll_gen_pane_cp06_t1

0xaaa2,	// (0x0004a724) main_cam6_set_pane

0x665f,	// (0x000462e1) bg_tb_trans_pane_cp06_ParamLimits

0xd6dc,	// (0x0004d35e) cam4_indicators_pane_g1_ParamLimits

0xd6e9,	// (0x0004d36b) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x0004f4eb) cam4_indicators_pane_g_ParamLimits

0xd709,	// (0x0004d38b) cam4_indicators_pane_t1_ParamLimits

0xb669,	// (0x0004b2eb) bg_tb_trans_pane_cp07_ParamLimits

0x803d,	// (0x00047cbf) vid4_indicators_pane_g1_ParamLimits

0x804a,	// (0x00047ccc) vid4_indicators_pane_g2_ParamLimits

0x8057,	// (0x00047cd9) vid4_indicators_pane_g3_ParamLimits

0x8064,	// (0x00047ce6) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x0004f4fd) vid4_indicators_pane_g_ParamLimits

0x807c,	// (0x00047cfe) vid4_indicators_pane_t1_ParamLimits

0xd79b,	// (0x0004d41d) vid4_progress_pane_g1_ParamLimits

0xd7a7,	// (0x0004d429) vid4_progress_pane_g2_ParamLimits

0xd7b3,	// (0x0004d435) vid4_progress_pane_g3_ParamLimits

0xd7c2,	// (0x0004d444) vid4_progress_pane_g4_ParamLimits

0xfa1f,	// (0x0004f6a1) vid4_progress_pane_g_ParamLimits

0xd7e0,	// (0x0004d462) vid4_progress_pane_t1_ParamLimits

0xd7f6,	// (0x0004d478) vid4_progress_pane_t2_ParamLimits

0xd80c,	// (0x0004d48e) vid4_progress_pane_t3_ParamLimits

0xfa2a,	// (0x0004f6ac) vid4_progress_pane_t_ParamLimits

0xd821,	// (0x0004d4a3) wait_bar_pane_cp07_ParamLimits

0x9426,	// (0x000490a8) main_cam6_set_pane_g2_ParamLimits

0x9426,	// (0x000490a8) main_cam6_set_pane_g2

0x944c,	// (0x000490ce) main_cset6_listscroll_pane_ParamLimits

0x944c,	// (0x000490ce) main_cset6_listscroll_pane

0x946a,	// (0x000490ec) main_cset6_slider_pane_ParamLimits

0x946a,	// (0x000490ec) main_cset6_slider_pane

0x9480,	// (0x00049102) main_cset6_text2_pane_ParamLimits

0x9480,	// (0x00049102) main_cset6_text2_pane

0xc08f,	// (0x0004bd11) main_cset6_text_pane

0xc097,	// (0x0004bd19) main_cset_list_pane_copy1_ParamLimits

0xc097,	// (0x0004bd19) main_cset_list_pane_copy1

0xc0a7,	// (0x0004bd29) scroll_pane_cp028_copy1

0x948e,	// (0x00049110) cset_list_set_pane_copy1

0x94a2,	// (0x00049124) aid_position_infowindow_above_copy1

0x94aa,	// (0x0004912c) aid_position_infowindow_below_copy1

0x1075,	// (0x00040cf7) cset_list_set_pane_g1_copy1

0xc0b0,	// (0x0004bd32) cset_list_set_pane_g3_copy1_ParamLimits

0xc0b0,	// (0x0004bd32) cset_list_set_pane_g3_copy1

0x107d,	// (0x00040cff) cset_list_set_pane_t1_copy1_ParamLimits

0x107d,	// (0x00040cff) cset_list_set_pane_t1_copy1

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp021_copy1_ParamLimits

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp021_copy1

0xc0bf,	// (0x0004bd41) cset6_slider_pane_ParamLimits

0xc0bf,	// (0x0004bd41) cset6_slider_pane

0xc0eb,	// (0x0004bd6d) main_cset6_slider_pane_g1_ParamLimits

0xc0eb,	// (0x0004bd6d) main_cset6_slider_pane_g1

0x94b2,	// (0x00049134) main_cset6_slider_pane_g2_ParamLimits

0x94b2,	// (0x00049134) main_cset6_slider_pane_g2

0xc113,	// (0x0004bd95) main_cset6_slider_pane_g3_ParamLimits

0xc113,	// (0x0004bd95) main_cset6_slider_pane_g3

0x94da,	// (0x0004915c) main_cset6_slider_pane_g4_ParamLimits

0x94da,	// (0x0004915c) main_cset6_slider_pane_g4

0x94e6,	// (0x00049168) main_cset6_slider_pane_g5_ParamLimits

0x94e6,	// (0x00049168) main_cset6_slider_pane_g5

0xb835,	// (0x0004b4b7) main_cset6_slider_pane_g7_ParamLimits

0xb835,	// (0x0004b4b7) main_cset6_slider_pane_g7

0xb841,	// (0x0004b4c3) main_cset6_slider_pane_g8_ParamLimits

0xb841,	// (0x0004b4c3) main_cset6_slider_pane_g8

0x871a,	// (0x0004839c) main_cset6_slider_pane_g9_ParamLimits

0x871a,	// (0x0004839c) main_cset6_slider_pane_g9

0x8726,	// (0x000483a8) main_cset6_slider_pane_g10_ParamLimits

0x8726,	// (0x000483a8) main_cset6_slider_pane_g10

0x8732,	// (0x000483b4) main_cset6_slider_pane_g11_ParamLimits

0x8732,	// (0x000483b4) main_cset6_slider_pane_g11

0x873e,	// (0x000483c0) main_cset6_slider_pane_g12_ParamLimits

0x873e,	// (0x000483c0) main_cset6_slider_pane_g12

0x874a,	// (0x000483cc) main_cset6_slider_pane_g13_ParamLimits

0x874a,	// (0x000483cc) main_cset6_slider_pane_g13

0x8756,	// (0x000483d8) main_cset6_slider_pane_g14_ParamLimits

0x8756,	// (0x000483d8) main_cset6_slider_pane_g14

0x94f4,	// (0x00049176) main_cset6_slider_pane_g15_ParamLimits

0x94f4,	// (0x00049176) main_cset6_slider_pane_g15

0x877a,	// (0x000483fc) main_cset6_slider_pane_g16_ParamLimits

0x877a,	// (0x000483fc) main_cset6_slider_pane_g16

0x8788,	// (0x0004840a) main_cset6_slider_pane_g17_ParamLimits

0x8788,	// (0x0004840a) main_cset6_slider_pane_g17

0x0011,

0xfaf7,	// (0x0004f779) main_cset6_slider_pane_g_ParamLimits

0xfaf7,	// (0x0004f779) main_cset6_slider_pane_g

0xc11f,	// (0x0004bda1) main_cset6_slider_pane_t1_ParamLimits

0xc11f,	// (0x0004bda1) main_cset6_slider_pane_t1

0x9524,	// (0x000491a6) main_cset6_slider_pane_t2_ParamLimits

0x9524,	// (0x000491a6) main_cset6_slider_pane_t2

0x954f,	// (0x000491d1) main_cset6_slider_pane_t3_ParamLimits

0x954f,	// (0x000491d1) main_cset6_slider_pane_t3

0x957a,	// (0x000491fc) main_cset6_slider_pane_t4_ParamLimits

0x957a,	// (0x000491fc) main_cset6_slider_pane_t4

0x95a7,	// (0x00049229) main_cset6_slider_pane_t5_ParamLimits

0x95a7,	// (0x00049229) main_cset6_slider_pane_t5

0xc160,	// (0x0004bde2) main_cset6_slider_pane_t7_ParamLimits

0xc160,	// (0x0004bde2) main_cset6_slider_pane_t7

0x95d4,	// (0x00049256) main_cset6_slider_pane_t8_ParamLimits

0x95d4,	// (0x00049256) main_cset6_slider_pane_t8

0x95f8,	// (0x0004927a) main_cset6_slider_pane_t9_ParamLimits

0x95f8,	// (0x0004927a) main_cset6_slider_pane_t9

0x961c,	// (0x0004929e) main_cset6_slider_pane_t10_ParamLimits

0x961c,	// (0x0004929e) main_cset6_slider_pane_t10

0x9640,	// (0x000492c2) main_cset6_slider_pane_t11_ParamLimits

0x9640,	// (0x000492c2) main_cset6_slider_pane_t11

0xc196,	// (0x0004be18) main_cset6_slider_pane_t14_ParamLimits

0xc196,	// (0x0004be18) main_cset6_slider_pane_t14

0xc1cf,	// (0x0004be51) main_cset6_slider_pane_t15_ParamLimits

0xc1cf,	// (0x0004be51) main_cset6_slider_pane_t15

0x000b,

0xfb1c,	// (0x0004f79e) main_cset6_slider_pane_t_ParamLimits

0xfb1c,	// (0x0004f79e) main_cset6_slider_pane_t

0xb91a,	// (0x0004b59c) cset_slider_pane_g1_copy1

0xb923,	// (0x0004b5a5) cset_slider_pane_g2_copy1

0xb92c,	// (0x0004b5ae) cset_slider_pane_g3_copy1

0xaaa2,	// (0x0004a724) bg_popup_sub_pane_cp011_copy1

0xb9cf,	// (0x0004b651) main_cset_text_pane_g1_copy1

0xb9d7,	// (0x0004b659) main_cset_text_pane_t1_copy1

0xb9e5,	// (0x0004b667) main_cset_text_pane_t2_copy1

0xb9f3,	// (0x0004b675) main_cset_text_pane_t3_copy1

0xba01,	// (0x0004b683) main_cset_text_pane_t4_copy1

0xba0f,	// (0x0004b691) main_cset_text_pane_t5_copy1

0xba1d,	// (0x0004b69f) main_cset_text_pane_t6_copy1

0xba2b,	// (0x0004b6ad) main_cset_text_pane_t7_copy1

0x9405,	// (0x00049087) main_cset_text2_pane_t1_copy1

0xaaa2,	// (0x0004a724) main_ncimui_pane

0x54c5,	// (0x00045147) popup_query_ncimui_window_ParamLimits

0x54c5,	// (0x00045147) popup_query_ncimui_window

0xaf67,	// (0x0004abe9) field_cale_ev2_pane_g4_ParamLimits

0xaf67,	// (0x0004abe9) field_cale_ev2_pane_g4

0x797a,	// (0x000475fc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x797a,	// (0x000475fc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf807,	// (0x0004f489) cell_video_dialer_keypad_pane_g_ParamLimits

0xf807,	// (0x0004f489) cell_video_dialer_keypad_pane_g

0x7992,	// (0x00047614) cell_video_dialer_keypad_pane_t1

0xaaa2,	// (0x0004a724) bg_popup_window_pane_cp012

0xe784,	// (0x0004e406) heading_pane_cp06

0xc2f7,	// (0x0004bf79) ncim_query_content_pane

0xaaa2,	// (0x0004a724) bg_popup_heading_pane_cp01

0xc2ff,	// (0x0004bf81) ncim_heading_pane_t1

0xc30d,	// (0x0004bf8f) ncim_indicator_popup_pane

0xc31f,	// (0x0004bfa1) ncim_query_button_pane

0xc335,	// (0x0004bfb7) ncim_query_content_pane_t1

0xc347,	// (0x0004bfc9) ncim_query_content_pane_t2

0x0005,

0xfb5b,	// (0x0004f7dd) ncim_query_content_pane_t

0xc381,	// (0x0004c003) ncim_query_list_pane

0xc393,	// (0x0004c015) ncim_query_popup_pane

0xc30d,	// (0x0004bf8f) ncim_indicator_popup_pane_ParamLimits

0x972c,	// (0x000493ae) ncim_query_content_pane_g1_ParamLimits

0x972c,	// (0x000493ae) ncim_query_content_pane_g1

0xc335,	// (0x0004bfb7) ncim_query_content_pane_t1_ParamLimits

0xc347,	// (0x0004bfc9) ncim_query_content_pane_t2_ParamLimits

0x9738,	// (0x000493ba) ncim_query_content_pane_t3_ParamLimits

0x9738,	// (0x000493ba) ncim_query_content_pane_t3

0x9760,	// (0x000493e2) ncim_query_content_pane_t4_ParamLimits

0x9760,	// (0x000493e2) ncim_query_content_pane_t4

0x9788,	// (0x0004940a) ncim_query_content_pane_t5_ParamLimits

0x9788,	// (0x0004940a) ncim_query_content_pane_t5

0xc359,	// (0x0004bfdb) ncim_query_content_pane_t6_ParamLimits

0xc359,	// (0x0004bfdb) ncim_query_content_pane_t6

0xfb5b,	// (0x0004f7dd) ncim_query_content_pane_t_ParamLimits

0xc381,	// (0x0004c003) ncim_query_list_pane_ParamLimits

0xc393,	// (0x0004c015) ncim_query_popup_pane_ParamLimits

0xc3a7,	// (0x0004c029) wait_bar_pane_cp04

0xaaa2,	// (0x0004a724) input_focus_pane_cp011

0xc3af,	// (0x0004c031) ncim_query_popup_pane_t1

0xc3bd,	// (0x0004c03f) ncim_list_query_list_pane_ParamLimits

0xc3bd,	// (0x0004c03f) ncim_list_query_list_pane

0xaaa2,	// (0x0004a724) bg_button_pane_cp027

0xc3d0,	// (0x0004c052) ncim_query_button_pane_g1

0xaaa2,	// (0x0004a724) list_highlight_pane_cp012

0xc3da,	// (0x0004c05c) ncim_list_query_list_pane_g1

0xc3e2,	// (0x0004c064) ncim_list_query_list_pane_t1

0xd6f9,	// (0x0004d37b) cam4_indicators_pane_g3_ParamLimits

0xd6f9,	// (0x0004d37b) cam4_indicators_pane_g3

0x8070,	// (0x00047cf2) vid4_indicators_pane_g5_ParamLimits

0x8070,	// (0x00047cf2) vid4_indicators_pane_g5

0xd7d1,	// (0x0004d453) vid4_progress_pane_g5_ParamLimits

0xd7d1,	// (0x0004d453) vid4_progress_pane_g5

0x9674,	// (0x000492f6) main_ncimui_pane_g1

0x96ba,	// (0x0004933c) ncimui_group_query_pane_ParamLimits

0x96ba,	// (0x0004933c) ncimui_group_query_pane

0x96ee,	// (0x00049370) ncimui_list_pane_ParamLimits

0x96ee,	// (0x00049370) ncimui_list_pane

0x9708,	// (0x0004938a) ncimui_text_pane_ParamLimits

0x9708,	// (0x0004938a) ncimui_text_pane

0x97b0,	// (0x00049432) ncimui_text_pane_t1_ParamLimits

0x97b0,	// (0x00049432) ncimui_text_pane_t1

0xc3f0,	// (0x0004c072) ncimui_list_single_graphic_pane_ParamLimits

0xc3f0,	// (0x0004c072) ncimui_list_single_graphic_pane

0x97d6,	// (0x00049458) ncimui_query_pane_ParamLimits

0x97d6,	// (0x00049458) ncimui_query_pane

0xaaa2,	// (0x0004a724) list_highlight_pane_cp013

0xc400,	// (0x0004c082) ncim_list_query_list_pane_t1_copy1

0xc3da,	// (0x0004c05c) ncim_list_single_graphic_pane_g1

0xc40e,	// (0x0004c090) ncim_query_button_pane_cp01

0xc416,	// (0x0004c098) ncim_query_entry_pane_ParamLimits

0xc416,	// (0x0004c098) ncim_query_entry_pane

0xc426,	// (0x0004c0a8) ncimui_query_pane_g1

0xc42e,	// (0x0004c0b0) ncimui_query_pane_t1_ParamLimits

0xc42e,	// (0x0004c0b0) ncimui_query_pane_t1

0xaaa2,	// (0x0004a724) input_focus_pane_cp012

0xc3af,	// (0x0004c031) ncim_query_entry_pane_t1

0xdf84,	// (0x0004dc06) main_im_pane_ParamLimits

0xefa9,	// (0x0004ec2b) main_mobtv_pane_ParamLimits

0xefa9,	// (0x0004ec2b) main_mobtv_pane

0x950c,	// (0x0004918e) main_cset6_slider_pane_g18_ParamLimits

0x950c,	// (0x0004918e) main_cset6_slider_pane_g18

0x9518,	// (0x0004919a) main_cset6_slider_pane_g19_ParamLimits

0x9518,	// (0x0004919a) main_cset6_slider_pane_g19

0xc444,	// (0x0004c0c6) bg_main_mobtv_pane_ParamLimits

0xc444,	// (0x0004c0c6) bg_main_mobtv_pane

0x97e6,	// (0x00049468) main_mobtv_info_pane

0x97f1,	// (0x00049473) main_mobtv_loading_pane_ParamLimits

0x97f1,	// (0x00049473) main_mobtv_loading_pane

0xc452,	// (0x0004c0d4) main_mobtv_pg_channel_list_pane

0xc45c,	// (0x0004c0de) main_mobtv_pg_hdr_pane

0x97fe,	// (0x00049480) main_mobtv_programe_curr_pane_ParamLimits

0x97fe,	// (0x00049480) main_mobtv_programe_curr_pane

0x980b,	// (0x0004948d) main_mobtv_programe_next_pane_ParamLimits

0x980b,	// (0x0004948d) main_mobtv_programe_next_pane

0xc465,	// (0x0004c0e7) popup_mobtv_noti_window

0x6381,	// (0x00046003) main_tv_pg_hdr_pane_g1

0xc46f,	// (0x0004c0f1) main_tv_pg_hdr_pane_g2

0xc477,	// (0x0004c0f9) main_tv_pg_hdr_pane_g3

0xc47f,	// (0x0004c101) main_tv_pg_hdr_pane_g4

0xc487,	// (0x0004c109) main_tv_pg_hdr_pane_g5

0xc491,	// (0x0004c113) main_tv_pg_hdr_pane_g6

0xc49b,	// (0x0004c11d) main_tv_pg_hdr_pane_g7

0xc4a5,	// (0x0004c127) main_tv_pg_hdr_pane_g8

0xc4af,	// (0x0004c131) main_tv_pg_hdr_pane_g9

0xc4b9,	// (0x0004c13b) main_tv_pg_hdr_pane_g10

0xc4c3,	// (0x0004c145) main_tv_pg_hdr_pane_g11

0x000a,

0xfb68,	// (0x0004f7ea) main_tv_pg_hdr_pane_g

0xc4cd,	// (0x0004c14f) main_tv_pg_hdr_pane_t1

0xc4db,	// (0x0004c15d) main_tv_pg_hdr_pane_t2

0xc4e9,	// (0x0004c16b) main_tv_pg_hdr_pane_t3

0xc4f9,	// (0x0004c17b) main_tv_pg_hdr_pane_t4

0xc509,	// (0x0004c18b) main_tv_pg_hdr_pane_t5

0x0004,

0xfb7f,	// (0x0004f801) main_tv_pg_hdr_pane_t

0xc519,	// (0x0004c19b) single_mobtv_pg_channel_pane_ParamLimits

0xc519,	// (0x0004c19b) single_mobtv_pg_channel_pane

0xc52b,	// (0x0004c1ad) single_mobtv_pg_channel_table_pane

0xc534,	// (0x0004c1b6) single_mobtv_pg_channel_thumb_pane

0xc53d,	// (0x0004c1bf) single_tv_pg_channel_pane_g1

0xc546,	// (0x0004c1c8) single_tv_pg_channel_pane_g2

0x0001,

0xfb8a,	// (0x0004f80c) single_tv_pg_channel_pane_g

0x665f,	// (0x000462e1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x665f,	// (0x000462e1) bg_single_mobtv_pg_channel_thumb_pane

0xc54f,	// (0x0004c1d1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc54f,	// (0x0004c1d1) single_mobtv_pg_channel_thumb_pane_g1

0xc55d,	// (0x0004c1df) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc55d,	// (0x0004c1df) single_mobtv_pg_channel_thumb_pane_g2

0xc569,	// (0x0004c1eb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc569,	// (0x0004c1eb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb8f,	// (0x0004f811) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb8f,	// (0x0004f811) single_mobtv_pg_channel_thumb_pane_g

0xc575,	// (0x0004c1f7) single_mobtv_pg_channel_thumb_pane_t1

0xc583,	// (0x0004c205) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb96,	// (0x0004f818) single_mobtv_pg_channel_thumb_pane_t

0x6381,	// (0x00046003) bg_single_mobtv_pg_channel_table_pane_g1

0x6381,	// (0x00046003) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf658,	// (0x0004f2da) bg_single_mobtv_pg_channel_table_pane_g

0xc591,	// (0x0004c213) single_mobtv_pg_channel_table_pane_t1

0xc59f,	// (0x0004c221) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9b,	// (0x0004f81d) single_mobtv_pg_channel_table_pane_t

0x9820,	// (0x000494a2) main_mobtv_info_pane_g1_ParamLimits

0x9820,	// (0x000494a2) main_mobtv_info_pane_g1

0x983e,	// (0x000494c0) main_mobtv_info_pane_t1_ParamLimits

0x983e,	// (0x000494c0) main_mobtv_info_pane_t1

0x98b6,	// (0x00049538) main_mobtv_info_pane_t2_ParamLimits

0x98b6,	// (0x00049538) main_mobtv_info_pane_t2

0x0002,

0xfba5,	// (0x0004f827) main_mobtv_info_pane_t_ParamLimits

0xfba5,	// (0x0004f827) main_mobtv_info_pane_t

0x9947,	// (0x000495c9) wait_bar_pane_cp05

0x9959,	// (0x000495db) main_mobtv_loading_pane_g1_ParamLimits

0x9959,	// (0x000495db) main_mobtv_loading_pane_g1

0x996a,	// (0x000495ec) main_mobtv_loading_pane_g2_ParamLimits

0x996a,	// (0x000495ec) main_mobtv_loading_pane_g2

0x9976,	// (0x000495f8) main_mobtv_loading_pane_g3_ParamLimits

0x9976,	// (0x000495f8) main_mobtv_loading_pane_g3

0x0002,

0xfbac,	// (0x0004f82e) main_mobtv_loading_pane_g_ParamLimits

0xfbac,	// (0x0004f82e) main_mobtv_loading_pane_g

0xc5ad,	// (0x0004c22f) main_mobtv_loading_pane_t1_ParamLimits

0xc5ad,	// (0x0004c22f) main_mobtv_loading_pane_t1

0xc5c5,	// (0x0004c247) main_mobtv_loading_pane_t2_ParamLimits

0xc5c5,	// (0x0004c247) main_mobtv_loading_pane_t2

0x0001,

0xfbb3,	// (0x0004f835) main_mobtv_loading_pane_t_ParamLimits

0xfbb3,	// (0x0004f835) main_mobtv_loading_pane_t

0x9989,	// (0x0004960b) wait_bar_pane_cp06_ParamLimits

0x9989,	// (0x0004960b) wait_bar_pane_cp06

0xc5e9,	// (0x0004c26b) main_mobtv_programe_curr_pane_t1

0xc5f7,	// (0x0004c279) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb8,	// (0x0004f83a) main_mobtv_programe_curr_pane_t

0xc605,	// (0x0004c287) main_mobtv_programe_next_pane_t1

0xc613,	// (0x0004c295) main_mobtv_programe_next_pane_t2

0xc621,	// (0x0004c2a3) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbd,	// (0x0004f83f) main_mobtv_programe_next_pane_t

0xaaa2,	// (0x0004a724) bg_popup_mobtv_noti_window_pane

0xc62f,	// (0x0004c2b1) popup_mobtv_noti_window_g1

0xc637,	// (0x0004c2b9) popup_mobtv_noti_window_t1

0xc645,	// (0x0004c2c7) popup_mobtv_noti_window_t2

0x0001,

0xfbc4,	// (0x0004f846) popup_mobtv_noti_window_t

0x6381,	// (0x00046003) bg_popup_mobtv_noti_window_pane_g1

0xaaa2,	// (0x0004a724) sc_clock_pane

0xaaa2,	// (0x0004a724) main_fs_bigclock_pane

0x9176,	// (0x00048df8) blid2_tripm_pane_t4_ParamLimits

0x9176,	// (0x00048df8) blid2_tripm_pane_t4

0x9998,	// (0x0004961a) sc_clock_pane_g1_ParamLimits

0x9998,	// (0x0004961a) sc_clock_pane_g1

0x99aa,	// (0x0004962c) sc_clock_pane_t1_ParamLimits

0x99aa,	// (0x0004962c) sc_clock_pane_t1

0x99ce,	// (0x00049650) sc_clock_pane_t2_ParamLimits

0x99ce,	// (0x00049650) sc_clock_pane_t2

0x99e6,	// (0x00049668) sc_clock_pane_t3_ParamLimits

0x99e6,	// (0x00049668) sc_clock_pane_t3

0x0004,

0xfbc9,	// (0x0004f84b) sc_clock_pane_t_ParamLimits

0xfbc9,	// (0x0004f84b) sc_clock_pane_t

0xa2a9,	// (0x00049f2b) main_fs_bigclock_indicator_pane_ParamLimits

0xa2a9,	// (0x00049f2b) main_fs_bigclock_indicator_pane

0x65f6,	// (0x00046278) main_fs_bigclock_pane_g1_ParamLimits

0x65f6,	// (0x00046278) main_fs_bigclock_pane_g1

0xa2b5,	// (0x00049f37) main_fs_bigclock_pane_t1_ParamLimits

0xa2b5,	// (0x00049f37) main_fs_bigclock_pane_t1

0xa2c7,	// (0x00049f49) main_fs_bigclock_pane_t2_ParamLimits

0xa2c7,	// (0x00049f49) main_fs_bigclock_pane_t2

0xa2db,	// (0x00049f5d) main_fs_bigclock_pane_t3_ParamLimits

0xa2db,	// (0x00049f5d) main_fs_bigclock_pane_t3

0x0002,

0xfdc8,	// (0x0004fa4a) main_fs_bigclock_pane_t_ParamLimits

0xfdc8,	// (0x0004fa4a) main_fs_bigclock_pane_t

0xd280,	// (0x0004cf02) main_fs_bigclock_indicator_pane_g1

0xc327,	// (0x0004bfa9) ncim_query_content_pane_g2_ParamLimits

0xc327,	// (0x0004bfa9) ncim_query_content_pane_g2

0x0001,

0xfb56,	// (0x0004f7d8) ncim_query_content_pane_g_ParamLimits

0xfb56,	// (0x0004f7d8) ncim_query_content_pane_g

0x99fb,	// (0x0004967d) sc_clock_pane_t4_ParamLimits

0x99fb,	// (0x0004967d) sc_clock_pane_t4

0xefa9,	// (0x0004ec2b) main_radioblah_pane

0xb605,	// (0x0004b287) cell_call4_button_pane_t1_copy1_ParamLimits

0xb605,	// (0x0004b287) cell_call4_button_pane_t1_copy1

0x967c,	// (0x000492fe) main_ncimui_pane_t1_ParamLimits

0x967c,	// (0x000492fe) main_ncimui_pane_t1

0x968e,	// (0x00049310) main_ncimui_pane_t2_ParamLimits

0x968e,	// (0x00049310) main_ncimui_pane_t2

0x0002,

0xfb4f,	// (0x0004f7d1) main_ncimui_pane_t_ParamLimits

0xfb4f,	// (0x0004f7d1) main_ncimui_pane_t

0xc77d,	// (0x0004c3ff) main_radioblah_anim_pane_ParamLimits

0xc77d,	// (0x0004c3ff) main_radioblah_anim_pane

0xc78e,	// (0x0004c410) main_radioblah_info_pane_ParamLimits

0xc78e,	// (0x0004c410) main_radioblah_info_pane

0xc7a2,	// (0x0004c424) main_radioblah_pane_t1_ParamLimits

0xc7a2,	// (0x0004c424) main_radioblah_pane_t1

0xc7be,	// (0x0004c440) main_radioblah_pane_t2_ParamLimits

0xc7be,	// (0x0004c440) main_radioblah_pane_t2

0x0003,

0xfbea,	// (0x0004f86c) main_radioblah_pane_t_ParamLimits

0xfbea,	// (0x0004f86c) main_radioblah_pane_t

0x9aa9,	// (0x0004972b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9aa9,	// (0x0004972b) main_radioblah_rocker_ctrl_pane

0xc806,	// (0x0004c488) main_radioblah_info_pane_t1_ParamLimits

0xc806,	// (0x0004c488) main_radioblah_info_pane_t1

0x9b01,	// (0x00049783) main_radioblah_info_pane_t2_ParamLimits

0x9b01,	// (0x00049783) main_radioblah_info_pane_t2

0x0003,

0xfbf3,	// (0x0004f875) main_radioblah_info_pane_t_ParamLimits

0xfbf3,	// (0x0004f875) main_radioblah_info_pane_t

0x6381,	// (0x00046003) main_radioblah_rocker_ctrl_pane_g1

0x9bb1,	// (0x00049833) main_radioblah_rocker_ctrl_pane_g2

0x9bb9,	// (0x0004983b) main_radioblah_rocker_ctrl_pane_g3

0x9bc1,	// (0x00049843) main_radioblah_rocker_ctrl_pane_g4

0x9bc9,	// (0x0004984b) main_radioblah_rocker_ctrl_pane_g5

0x9bd1,	// (0x00049853) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfc,	// (0x0004f87e) main_radioblah_rocker_ctrl_pane_g

0x9405,	// (0x00049087) main_cset_text2_pane_t1_copy1_ParamLimits

0xd6ca,	// (0x0004d34c) cam4_image_uncrop_qvga_pane

0xd723,	// (0x0004d3a5) vid4_image_uncrop_qcif_pane

0xd833,	// (0x0004d4b5) cam6_image_uncrop_qvga_pane_ParamLimits

0xd833,	// (0x0004d4b5) cam6_image_uncrop_qvga_pane

0xbf6e,	// (0x0004bbf0) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf6e,	// (0x0004bbf0) vid6_image_uncrop_qcif_pane

0xaaa2,	// (0x0004a724) bg_popup_preview_window_pane_cp03

0xc2d9,	// (0x0004bf5b) list_cset_text2_pane

0xc2e1,	// (0x0004bf63) main_cset6_text2_pane_g1

0xc2e9,	// (0x0004bf6b) main_cset6_text2_pane_t1

0xc840,	// (0x0004c4c2) list_cset_text2_pane_t1_ParamLimits

0xc840,	// (0x0004c4c2) list_cset_text2_pane_t1

0xefa9,	// (0x0004ec2b) main_radioblah_pane_ParamLimits

0x9933,	// (0x000495b5) main_mobtv_info_pane_t3_ParamLimits

0x9933,	// (0x000495b5) main_mobtv_info_pane_t3

0x9a97,	// (0x00049719) main_radioblah_pane_g1

0x9ad1,	// (0x00049753) main_radioblah_info_pane_g1

0x9b56,	// (0x000497d8) main_radioblah_info_pane_t3_ParamLimits

0x9b56,	// (0x000497d8) main_radioblah_info_pane_t3

0x3096,	// (0x00042d18) highlight_cell_cale_month_pane_ParamLimits

0x3096,	// (0x00042d18) highlight_cell_cale_month_pane

0xaaa2,	// (0x0004a724) main_phob_fisheye_pane

0x6f15,	// (0x00046b97) scroll_pane_cp0031_ParamLimits

0x6f15,	// (0x00046b97) scroll_pane_cp0031

0xc080,	// (0x0004bd02) wait_bar_pane_cp08_ParamLimits

0x948e,	// (0x00049110) cset_list_set_pane_copy1_ParamLimits

0xc85a,	// (0x0004c4dc) highlight_cell_cale_month_pane_g1

0x9bd9,	// (0x0004985b) highlight_cell_cale_month_pane_t1

0xbcab,	// (0x0004b92d) list_gen_pane_cp01

0xb820,	// (0x0004b4a2) scroll_pane_01

0x9be7,	// (0x00049869) list_single_double_fisheye_pane

0x1092,	// (0x00040d14) list_double_fisheye_pane_g1_ParamLimits

0x1092,	// (0x00040d14) list_double_fisheye_pane_g1

0x109e,	// (0x00040d20) list_double_fisheye_pane_g2_ParamLimits

0x109e,	// (0x00040d20) list_double_fisheye_pane_g2

0x9bf0,	// (0x00049872) list_double_fisheye_pane_g3_ParamLimits

0x9bf0,	// (0x00049872) list_double_fisheye_pane_g3

0x0004,

0xfc09,	// (0x0004f88b) list_double_fisheye_pane_g_ParamLimits

0xfc09,	// (0x0004f88b) list_double_fisheye_pane_g

0x10cf,	// (0x00040d51) list_double_fisheye_pane_t1_ParamLimits

0x10cf,	// (0x00040d51) list_double_fisheye_pane_t1

0x10ea,	// (0x00040d6c) list_double_fisheye_pane_t2_ParamLimits

0x10ea,	// (0x00040d6c) list_double_fisheye_pane_t2

0x0001,

0xfc14,	// (0x0004f896) list_double_fisheye_pane_t_ParamLimits

0xfc14,	// (0x0004f896) list_double_fisheye_pane_t

0xaaa2,	// (0x0004a724) main_call5_pane

0x9a26,	// (0x000496a8) sc_swipe_pane_ParamLimits

0x9a26,	// (0x000496a8) sc_swipe_pane

0x9c0f,	// (0x00049891) call5_image_pane_ParamLimits

0x9c0f,	// (0x00049891) call5_image_pane

0x9c2c,	// (0x000498ae) call5_swipe_1_pane_ParamLimits

0x9c2c,	// (0x000498ae) call5_swipe_1_pane

0x9c3f,	// (0x000498c1) call5_swipe_2_pane_ParamLimits

0x9c3f,	// (0x000498c1) call5_swipe_2_pane

0x9c6c,	// (0x000498ee) popup_call5_audio_first_window_ParamLimits

0x9c6c,	// (0x000498ee) popup_call5_audio_first_window

0x665f,	// (0x000462e1) call5_swipe_1_pane_g1_ParamLimits

0x665f,	// (0x000462e1) call5_swipe_1_pane_g1

0xc862,	// (0x0004c4e4) call5_swipe_1_pane_g2_ParamLimits

0xc862,	// (0x0004c4e4) call5_swipe_1_pane_g2

0x0001,

0xfc19,	// (0x0004f89b) call5_swipe_1_pane_g_ParamLimits

0xfc19,	// (0x0004f89b) call5_swipe_1_pane_g

0xc86e,	// (0x0004c4f0) call5_swipe_1_pane_t1_ParamLimits

0xc86e,	// (0x0004c4f0) call5_swipe_1_pane_t1

0x665f,	// (0x000462e1) call5_swipe_2_pane_g1_ParamLimits

0x665f,	// (0x000462e1) call5_swipe_2_pane_g1

0xc883,	// (0x0004c505) call5_swipe_2_pane_g2_ParamLimits

0xc883,	// (0x0004c505) call5_swipe_2_pane_g2

0x0001,

0xfc1e,	// (0x0004f8a0) call5_swipe_2_pane_g_ParamLimits

0xfc1e,	// (0x0004f8a0) call5_swipe_2_pane_g

0xc88f,	// (0x0004c511) call5_swipe_2_pane_t1_ParamLimits

0xc88f,	// (0x0004c511) call5_swipe_2_pane_t1

0xc8a4,	// (0x0004c526) sc_swipe_pane_g1_ParamLimits

0xc8a4,	// (0x0004c526) sc_swipe_pane_g1

0xc8b1,	// (0x0004c533) sc_swipe_pane_g2_ParamLimits

0xc8b1,	// (0x0004c533) sc_swipe_pane_g2

0x0001,

0xfc23,	// (0x0004f8a5) sc_swipe_pane_g_ParamLimits

0xfc23,	// (0x0004f8a5) sc_swipe_pane_g

0xc8bd,	// (0x0004c53f) sc_swipe_pane_t1_ParamLimits

0xc8bd,	// (0x0004c53f) sc_swipe_pane_t1

0xaaa2,	// (0x0004a724) main_cmail_launcher_pane

0x9c81,	// (0x00049903) aid_size_cell_cmail_l_ParamLimits

0x9c81,	// (0x00049903) aid_size_cell_cmail_l

0x9c9b,	// (0x0004991d) grid_cmail_l_pane_ParamLimits

0x9c9b,	// (0x0004991d) grid_cmail_l_pane

0x9cb7,	// (0x00049939) cell_cmail_l_pane_ParamLimits

0x9cb7,	// (0x00049939) cell_cmail_l_pane

0x9cdf,	// (0x00049961) cell_cmail_l_pane_g1_ParamLimits

0x9cdf,	// (0x00049961) cell_cmail_l_pane_g1

0x9ceb,	// (0x0004996d) cell_cmail_l_pane_t1_ParamLimits

0x9ceb,	// (0x0004996d) cell_cmail_l_pane_t1

0xc8d2,	// (0x0004c554) cell_cmail_l_pane_t2_ParamLimits

0xc8d2,	// (0x0004c554) cell_cmail_l_pane_t2

0x0001,

0xfc28,	// (0x0004f8aa) cell_cmail_l_pane_t_ParamLimits

0xfc28,	// (0x0004f8aa) cell_cmail_l_pane_t

0xefa9,	// (0x0004ec2b) grid_highlight_pane_cp018_ParamLimits

0xefa9,	// (0x0004ec2b) grid_highlight_pane_cp018

0x1787,	// (0x00041409) main2_pane_ParamLimits

0x1787,	// (0x00041409) main2_pane

0xe02f,	// (0x0004dcb1) popup_sp_fs_action_menu_bg_pane_g1

0xe037,	// (0x0004dcb9) popup_sp_fs_action_menu_bg_pane_g2

0xe03f,	// (0x0004dcc1) popup_sp_fs_action_menu_bg_pane_g3

0xe047,	// (0x0004dcc9) popup_sp_fs_action_menu_bg_pane_g4

0xe04f,	// (0x0004dcd1) popup_sp_fs_action_menu_bg_pane_g5

0xe057,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g6

0xe05f,	// (0x0004dce1) popup_sp_fs_action_menu_bg_pane_g7

0xe067,	// (0x0004dce9) popup_sp_fs_action_menu_bg_pane_g8

0xe06f,	// (0x0004dcf1) popup_sp_fs_action_menu_bg_pane_g9

0xe077,	// (0x0004dcf9) popup_sp_fs_action_menu_bg_pane_g10

0xe077,	// (0x0004dcf9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0004ee3d) popup_sp_fs_action_menu_bg_pane_g

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g3_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g3_g1

0xac2d,	// (0x0004a8af) list_medium_line_x2_t3_g3_g2_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_t3_g3_g2

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g3_g3_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0004eeed) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0004eeed) list_medium_line_x2_t3_g3_g

0xac45,	// (0x0004a8c7) list_medium_line_x2_t3_g3_t1_ParamLimits

0xac45,	// (0x0004a8c7) list_medium_line_x2_t3_g3_t1

0x0ce9,	// (0x0004096b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ce9,	// (0x0004096b) list_medium_line_x2_t3_g3_t2

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t3_g3_t3_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0004eef4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0004eef4) list_medium_line_x2_t3_g3_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g2_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g2_g1

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0004eefb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0004eefb) list_medium_line_x2_t3_g2_g

0xac6f,	// (0x0004a8f1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xac6f,	// (0x0004a8f1) list_medium_line_x2_t3_g2_t1

0xac85,	// (0x0004a907) list_medium_line_x2_t3_g2_t2_ParamLimits

0xac85,	// (0x0004a907) list_medium_line_x2_t3_g2_t2

0xac97,	// (0x0004a919) list_medium_line_x2_t3_g2_t3_ParamLimits

0xac97,	// (0x0004a919) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0004ef00) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0004ef00) list_medium_line_x2_t3_g2_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t4_g4_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t4_g4_g1

0xacb5,	// (0x0004a937) list_medium_line_x2_t4_g4_g2_ParamLimits

0xacb5,	// (0x0004a937) list_medium_line_x2_t4_g4_g2

0xac2d,	// (0x0004a8af) list_medium_line_x2_t4_g4_g3_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_t4_g4_g3

0xacc1,	// (0x0004a943) list_medium_line_x2_t4_g4_g4_ParamLimits

0xacc1,	// (0x0004a943) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0004ef07) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0004ef07) list_medium_line_x2_t4_g4_g

0x0cfd,	// (0x0004097f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cfd,	// (0x0004097f) list_medium_line_x2_t4_g4_t1

0x0d17,	// (0x00040999) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d17,	// (0x00040999) list_medium_line_x2_t4_g4_t2

0x0d2d,	// (0x000409af) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d2d,	// (0x000409af) list_medium_line_x2_t4_g4_t3

0xaccd,	// (0x0004a94f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaccd,	// (0x0004a94f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0004ef10) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0004ef10) list_medium_line_x2_t4_g4_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g4_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g4_g1

0xacb5,	// (0x0004a937) list_medium_line_x2_t2_g4_g2_ParamLimits

0xacb5,	// (0x0004a937) list_medium_line_x2_t2_g4_g2

0xac2d,	// (0x0004a8af) list_medium_line_x2_t2_g4_g3_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_t2_g4_g3

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2dd,	// (0x0004ef5f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2dd,	// (0x0004ef5f) list_medium_line_x2_t2_g4_g

0xacdf,	// (0x0004a961) list_medium_line_x2_t2_g4_t1_ParamLimits

0xacdf,	// (0x0004a961) list_medium_line_x2_t2_g4_t1

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g4_t2_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2e6,	// (0x0004ef68) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2e6,	// (0x0004ef68) list_medium_line_x2_t2_g4_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g3_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g3_g1

0xac2d,	// (0x0004a8af) list_medium_line_x2_t2_g3_g2_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_t2_g3_g2

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0004eeed) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0004eeed) list_medium_line_x2_t2_g3_g

0xacf4,	// (0x0004a976) list_medium_line_x2_t2_g3_t1_ParamLimits

0xacf4,	// (0x0004a976) list_medium_line_x2_t2_g3_t1

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g3_t2_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2eb,	// (0x0004ef6d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2eb,	// (0x0004ef6d) list_medium_line_x2_t2_g3_t

0x326f,	// (0x00042ef1) main_sp_fs_list_pane_ParamLimits

0x326f,	// (0x00042ef1) main_sp_fs_list_pane

0x327b,	// (0x00042efd) sp_fs_scroll_pane_ParamLimits

0x327b,	// (0x00042efd) sp_fs_scroll_pane

0x0d42,	// (0x000409c4) list_medium_line_x2_t3_t1

0x0d52,	// (0x000409d4) list_medium_line_x2_t3_t2

0xad37,	// (0x0004a9b9) list_medium_line_x2_t3_t3

0x0002,

0xf30b,	// (0x0004ef8d) list_medium_line_x2_t3_t

0x0d60,	// (0x000409e2) list_medium_line_x3_t4_t1

0x0d70,	// (0x000409f2) list_medium_line_x3_t4_t2

0xad45,	// (0x0004a9c7) list_medium_line_x3_t4_t3

0xad37,	// (0x0004a9b9) list_medium_line_x3_t4_t4

0x0003,

0xf312,	// (0x0004ef94) list_medium_line_x3_t4_t

0x0d7e,	// (0x00040a00) list_medium_line_x4_t5_t1

0x0d8e,	// (0x00040a10) list_medium_line_x4_t5_t2

0xad45,	// (0x0004a9c7) list_medium_line_x4_t5_t3

0xad53,	// (0x0004a9d5) list_medium_line_x4_t5_t4

0xad37,	// (0x0004a9b9) list_medium_line_x4_t5_t5

0x0004,

0xf31b,	// (0x0004ef9d) list_medium_line_x4_t5_t

0xac21,	// (0x0004a8a3) list_medium_line_t4_g4_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_t4_g4_g1

0xacc1,	// (0x0004a943) list_medium_line_t4_g4_g2_ParamLimits

0xacc1,	// (0x0004a943) list_medium_line_t4_g4_g2

0xad61,	// (0x0004a9e3) list_medium_line_t4_g4_g3_ParamLimits

0xad61,	// (0x0004a9e3) list_medium_line_t4_g4_g3

0xac39,	// (0x0004a8bb) list_medium_line_t4_g4_g4_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_t4_g4_g4

0x0003,

0xf326,	// (0x0004efa8) list_medium_line_t4_g4_g_ParamLimits

0xf326,	// (0x0004efa8) list_medium_line_t4_g4_g

0xad6d,	// (0x0004a9ef) list_medium_line_t4_g4_t1_ParamLimits

0xad6d,	// (0x0004a9ef) list_medium_line_t4_g4_t1

0xad82,	// (0x0004aa04) list_medium_line_t4_g4_t2_ParamLimits

0xad82,	// (0x0004aa04) list_medium_line_t4_g4_t2

0xad98,	// (0x0004aa1a) list_medium_line_t4_g4_t3_ParamLimits

0xad98,	// (0x0004aa1a) list_medium_line_t4_g4_t3

0xac5a,	// (0x0004a8dc) list_medium_line_t4_g4_t4_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_t4_g4_t4

0x0003,

0xf32f,	// (0x0004efb1) list_medium_line_t4_g4_t_ParamLimits

0xf32f,	// (0x0004efb1) list_medium_line_t4_g4_t

0x334d,	// (0x00042fcf) chi_dic_find_pane_g1

0x5208,	// (0x00044e8a) main_tport_pane

0xb960,	// (0x0004b5e2) list_medium_line_plain_t1

0xb976,	// (0x0004b5f8) list_medium_line_t2_g2_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t2_g2_g1

0xb982,	// (0x0004b604) list_medium_line_t2_g2_g2_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_t2_g2_g2

0x0001,

0xf96b,	// (0x0004f5ed) list_medium_line_t2_g2_g_ParamLimits

0xf96b,	// (0x0004f5ed) list_medium_line_t2_g2_g

0x0f67,	// (0x00040be9) list_medium_line_t2_g2_t1_ParamLimits

0x0f67,	// (0x00040be9) list_medium_line_t2_g2_t1

0x0f7e,	// (0x00040c00) list_medium_line_t2_g2_t2_ParamLimits

0x0f7e,	// (0x00040c00) list_medium_line_t2_g2_t2

0x0001,

0xf970,	// (0x0004f5f2) list_medium_line_t2_g2_t_ParamLimits

0xf970,	// (0x0004f5f2) list_medium_line_t2_g2_t

0xbcb4,	// (0x0004b936) aid_sp_fs_list_icon_a_sm

0xbcbc,	// (0x0004b93e) aid_sp_fs_list_icon_d

0xbcc4,	// (0x0004b946) aid_sp_fs_text_primary

0xbccd,	// (0x0004b94f) aid_sp_fs_text_secondary

0xbcd6,	// (0x0004b958) list_medium_line

0xbcd6,	// (0x0004b958) list_medium_line_g2

0xbcd6,	// (0x0004b958) list_medium_line_g3

0xbcd6,	// (0x0004b958) list_medium_line_plain

0xbcd6,	// (0x0004b958) list_medium_line_plain_t2

0xbcd6,	// (0x0004b958) list_medium_line_plain_t3

0xbcd6,	// (0x0004b958) list_medium_line_right_icon

0xbcd6,	// (0x0004b958) list_medium_line_right_iconx2

0xbcd6,	// (0x0004b958) list_medium_line_t2

0xbcd6,	// (0x0004b958) list_medium_line_t2_g2

0xbcd6,	// (0x0004b958) list_medium_line_t2_g3

0xbcd6,	// (0x0004b958) list_medium_line_t2_right_icon

0xbcd6,	// (0x0004b958) list_medium_line_t2_right_iconx2

0xbcd6,	// (0x0004b958) list_medium_line_t3

0xbcd6,	// (0x0004b958) list_medium_line_t3_g2

0xbcd6,	// (0x0004b958) list_medium_line_t3_g3

0xbcd6,	// (0x0004b958) list_medium_line_t3_right_iconx2

0xbcdf,	// (0x0004b961) list_medium_line_t4_g4

0xbce8,	// (0x0004b96a) list_medium_line_x2

0xbce8,	// (0x0004b96a) list_medium_line_x2_t2_g2

0xbce8,	// (0x0004b96a) list_medium_line_x2_t2_g3

0xbce8,	// (0x0004b96a) list_medium_line_x2_t2_g4

0xbce8,	// (0x0004b96a) list_medium_line_x2_t3

0xbce8,	// (0x0004b96a) list_medium_line_x2_t3_g2

0xbce8,	// (0x0004b96a) list_medium_line_x2_t3_g3

0xbce8,	// (0x0004b96a) list_medium_line_x2_t3_g4

0xbce8,	// (0x0004b96a) list_medium_line_x2_t4_g2

0xbce8,	// (0x0004b96a) list_medium_line_x2_t4_g4

0xbcf1,	// (0x0004b973) list_medium_line_x3

0xbcf1,	// (0x0004b973) list_medium_line_x3_t4

0xbcf1,	// (0x0004b973) list_medium_line_x3_t4_g4

0xbcdf,	// (0x0004b961) list_medium_line_x4_t4

0xbcdf,	// (0x0004b961) list_medium_line_x4_t4_g7

0xbcdf,	// (0x0004b961) list_medium_line_x4_t5

0xbcfa,	// (0x0004b97c) list_single_fs_dyc_pane_ParamLimits

0xbcfa,	// (0x0004b97c) list_single_fs_dyc_pane

0xac21,	// (0x0004a8a3) list_medium_line_x4_t4_g7_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x4_t4_g7_g1

0xc208,	// (0x0004be8a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc208,	// (0x0004be8a) list_medium_line_x4_t4_g7_g2

0xc214,	// (0x0004be96) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc214,	// (0x0004be96) list_medium_line_x4_t4_g7_g3

0xc223,	// (0x0004bea5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc223,	// (0x0004bea5) list_medium_line_x4_t4_g7_g4

0xc22f,	// (0x0004beb1) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc22f,	// (0x0004beb1) list_medium_line_x4_t4_g7_g5

0xc23e,	// (0x0004bec0) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc23e,	// (0x0004bec0) list_medium_line_x4_t4_g7_g6

0xc24d,	// (0x0004becf) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc24d,	// (0x0004becf) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb35,	// (0x0004f7b7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb35,	// (0x0004f7b7) list_medium_line_x4_t4_g7_g

0xc259,	// (0x0004bedb) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc259,	// (0x0004bedb) list_medium_line_x4_t4_g7_t1

0xc26e,	// (0x0004bef0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc26e,	// (0x0004bef0) list_medium_line_x4_t4_g7_t2

0xc283,	// (0x0004bf05) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc283,	// (0x0004bf05) list_medium_line_x4_t4_g7_t3

0xc298,	// (0x0004bf1a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc298,	// (0x0004bf1a) list_medium_line_x4_t4_g7_t4

0xc2aa,	// (0x0004bf2c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc2aa,	// (0x0004bf2c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb44,	// (0x0004f7c6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb44,	// (0x0004f7c6) list_medium_line_x4_t4_g7_t

0xc2bc,	// (0x0004bf3e) list_single_dyc_row_pane_ParamLimits

0xc2bc,	// (0x0004bf3e) list_single_dyc_row_pane

0x9bfc,	// (0x0004987e) call5_gesture_pane_ParamLimits

0x9bfc,	// (0x0004987e) call5_gesture_pane

0x9c52,	// (0x000498d4) call5_windows_pane_ParamLimits

0x9c52,	// (0x000498d4) call5_windows_pane

0x9d01,	// (0x00049983) call5_swipe_1_pane_cp_ParamLimits

0x9d01,	// (0x00049983) call5_swipe_1_pane_cp

0x9d0d,	// (0x0004998f) call5_swipe_2_pane_cp_ParamLimits

0x9d0d,	// (0x0004998f) call5_swipe_2_pane_cp

0xe9e0,	// (0x0004e662) call5_image_pane_cp

0x9d19,	// (0x0004999b) popup_call5_audio_first_window_cp_ParamLimits

0x9d19,	// (0x0004999b) popup_call5_audio_first_window_cp

0xc8a4,	// (0x0004c526) call5_swipe_1_pane_g1_cp_ParamLimits

0xc8a4,	// (0x0004c526) call5_swipe_1_pane_g1_cp

0xc8e4,	// (0x0004c566) call5_swipe_1_pane_g2_cp

0xc8bd,	// (0x0004c53f) call5_swipe_1_pane_t1_cp_ParamLimits

0xc8bd,	// (0x0004c53f) call5_swipe_1_pane_t1_cp

0xc8a4,	// (0x0004c526) call5_swipe_2_pane_g1_cp_ParamLimits

0xc8a4,	// (0x0004c526) call5_swipe_2_pane_g1_cp

0xc8ec,	// (0x0004c56e) call5_swipe_2_pane_g2_cp

0xc8f4,	// (0x0004c576) call5_swipe_2_pane_t1_cp_ParamLimits

0xc8f4,	// (0x0004c576) call5_swipe_2_pane_t1_cp

0xefa9,	// (0x0004ec2b) main_sp_fs_email_pane

0xc909,	// (0x0004c58b) main_sp_fs_listscroll_pane_te

0xc912,	// (0x0004c594) popup_sp_fs_action_menu_pane_ParamLimits

0xc912,	// (0x0004c594) popup_sp_fs_action_menu_pane

0x6381,	// (0x00046003) bg_sp_fs_ctrlbar_pane_g1

0xc958,	// (0x0004c5da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc961,	// (0x0004c5e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc96a,	// (0x0004c5ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x6381,	// (0x00046003) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2d,	// (0x0004f8af) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x608a,	// (0x00045d0c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x608a,	// (0x00045d0c) bg_sp_fs_ctrlbar_ddmenu_pane

0xc973,	// (0x0004c5f5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc973,	// (0x0004c5f5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc97f,	// (0x0004c601) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc97f,	// (0x0004c601) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc36,	// (0x0004f8b8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc36,	// (0x0004f8b8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc98b,	// (0x0004c60d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc98b,	// (0x0004c60d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc9a5,	// (0x0004c627) list_medium_line_t2_right_icon_g1

0x110c,	// (0x00040d8e) list_medium_line_t2_right_icon_t1

0x111c,	// (0x00040d9e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3b,	// (0x0004f8bd) list_medium_line_t2_right_icon_t

0x51e6,	// (0x00044e68) bg_sp_fs_ctrlbar_pane_ParamLimits

0x51e6,	// (0x00044e68) bg_sp_fs_ctrlbar_pane

0x9d6f,	// (0x000499f1) main_sp_fs_ctrlbar_button_pane_cp01

0x9d77,	// (0x000499f9) main_sp_fs_ctrlbar_ddmenu_pane

0xc9e7,	// (0x0004c669) main_sp_fs_ctrlbar_pane_g1

0xc9f3,	// (0x0004c675) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc40,	// (0x0004f8c2) main_sp_fs_ctrlbar_pane_g

0xc9ff,	// (0x0004c681) main_sp_fs_ctrlbar_pane_t1

0x112a,	// (0x00040dac) main_sp_fs_ctrlbar_pane

0x114e,	// (0x00040dd0) main_sp_fs_listscroll_pane_te_cp01

0x116e,	// (0x00040df0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x116e,	// (0x00040df0) popup_sp_fs_action_menu_pane_cp01

0xefa9,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefa9,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp01

0xca14,	// (0x0004c696) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca14,	// (0x0004c696) sp_fs_action_menu_list_gene_pane_g1

0xca23,	// (0x0004c6a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca23,	// (0x0004c6a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc45,	// (0x0004f8c7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc45,	// (0x0004f8c7) sp_fs_action_menu_list_gene_pane_g

0xca30,	// (0x0004c6b2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca30,	// (0x0004c6b2) sp_fs_action_menu_list_gene_pane_t1

0xca48,	// (0x0004c6ca) sp_fs_action_menu_list_gene_pane_ParamLimits

0xca48,	// (0x0004c6ca) sp_fs_action_menu_list_gene_pane

0xca6b,	// (0x0004c6ed) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca6b,	// (0x0004c6ed) popup_sp_fs_action_menu_bg_pane

0xca79,	// (0x0004c6fb) sp_fs_action_menu_list_pane_ParamLimits

0xca79,	// (0x0004c6fb) sp_fs_action_menu_list_pane

0xca9d,	// (0x0004c71f) sp_fs_scroll_pane_cp01_ParamLimits

0xca9d,	// (0x0004c71f) sp_fs_scroll_pane_cp01

0x118a,	// (0x00040e0c) list_medium_line_plain_t2_t1

0x119a,	// (0x00040e1c) list_medium_line_plain_t2_t2

0x0001,

0xfc4a,	// (0x0004f8cc) list_medium_line_plain_t2_t

0x11a8,	// (0x00040e2a) list_medium_line_plain_t3_t1

0x11b8,	// (0x00040e3a) list_medium_line_plain_t3_t2

0x11c6,	// (0x00040e48) list_medium_line_plain_t3_t3

0x0002,

0xfc4f,	// (0x0004f8d1) list_medium_line_plain_t3_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g2_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t2_g2_g1

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0004eefb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0004eefb) list_medium_line_x2_t2_g2_g

0xad6d,	// (0x0004a9ef) list_medium_line_x2_t2_g2_t1_ParamLimits

0xad6d,	// (0x0004a9ef) list_medium_line_x2_t2_g2_t1

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g2_t2_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc56,	// (0x0004f8d8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc56,	// (0x0004f8d8) list_medium_line_x2_t2_g2_t

0xac21,	// (0x0004a8a3) list_medium_line_x2_t4_g2_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t4_g2_g1

0xcac3,	// (0x0004c745) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcac3,	// (0x0004c745) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc5b,	// (0x0004f8dd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc5b,	// (0x0004f8dd) list_medium_line_x2_t4_g2_g

0x11d4,	// (0x00040e56) list_medium_line_x2_t4_g2_t1_ParamLimits

0x11d4,	// (0x00040e56) list_medium_line_x2_t4_g2_t1

0x11ee,	// (0x00040e70) list_medium_line_x2_t4_g2_t2_ParamLimits

0x11ee,	// (0x00040e70) list_medium_line_x2_t4_g2_t2

0x1204,	// (0x00040e86) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1204,	// (0x00040e86) list_medium_line_x2_t4_g2_t3

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t4_g2_t4_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc60,	// (0x0004f8e2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc60,	// (0x0004f8e2) list_medium_line_x2_t4_g2_t

0xcad5,	// (0x0004c757) list_medium_line_t3_right_iconx2_g1

0xc9a5,	// (0x0004c627) list_medium_line_t3_right_iconx2_g2

0x1219,	// (0x00040e9b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc69,	// (0x0004f8eb) list_medium_line_t3_right_iconx2_g

0x1223,	// (0x00040ea5) list_medium_line_t3_right_iconx2_t1

0x1233,	// (0x00040eb5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x0004f8f2) list_medium_line_t3_right_iconx2_t

0xac21,	// (0x0004a8a3) list_medium_line_x3_t4_g4_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x3_t4_g4_g1

0xac2d,	// (0x0004a8af) list_medium_line_x3_t4_g4_g2_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x3_t4_g4_g2

0xacc1,	// (0x0004a943) list_medium_line_x3_t4_g4_g3_ParamLimits

0xacc1,	// (0x0004a943) list_medium_line_x3_t4_g4_g3

0xcadd,	// (0x0004c75f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcadd,	// (0x0004c75f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc75,	// (0x0004f8f7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc75,	// (0x0004f8f7) list_medium_line_x3_t4_g4_g

0x1241,	// (0x00040ec3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1241,	// (0x00040ec3) list_medium_line_x3_t4_g4_t1

0x1258,	// (0x00040eda) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1258,	// (0x00040eda) list_medium_line_x3_t4_g4_t2

0xcae9,	// (0x0004c76b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcae9,	// (0x0004c76b) list_medium_line_x3_t4_g4_t3

0xcafe,	// (0x0004c780) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcafe,	// (0x0004c780) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc7e,	// (0x0004f900) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc7e,	// (0x0004f900) list_medium_line_x3_t4_g4_t

0x126d,	// (0x00040eef) list_single_dyc_row_text_pane_t1_ParamLimits

0x126d,	// (0x00040eef) list_single_dyc_row_text_pane_t1

0x12b0,	// (0x00040f32) list_single_dyc_row_text_pane_t2_ParamLimits

0x12b0,	// (0x00040f32) list_single_dyc_row_text_pane_t2

0xcb1b,	// (0x0004c79d) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb1b,	// (0x0004c79d) list_single_dyc_row_text_pane_t3

0x0002,

0xfc87,	// (0x0004f909) list_single_dyc_row_text_pane_t_ParamLimits

0xfc87,	// (0x0004f909) list_single_dyc_row_text_pane_t

0xcb2d,	// (0x0004c7af) list_single_dyc_row_pane_g1_ParamLimits

0xcb2d,	// (0x0004c7af) list_single_dyc_row_pane_g1

0xcb39,	// (0x0004c7bb) list_single_dyc_row_pane_g2_ParamLimits

0xcb39,	// (0x0004c7bb) list_single_dyc_row_pane_g2

0xcb45,	// (0x0004c7c7) list_single_dyc_row_pane_g3_ParamLimits

0xcb45,	// (0x0004c7c7) list_single_dyc_row_pane_g3

0xcb51,	// (0x0004c7d3) list_single_dyc_row_pane_g4_ParamLimits

0xcb51,	// (0x0004c7d3) list_single_dyc_row_pane_g4

0x0003,

0xfc8e,	// (0x0004f910) list_single_dyc_row_pane_g_ParamLimits

0xfc8e,	// (0x0004f910) list_single_dyc_row_pane_g

0xcb5d,	// (0x0004c7df) list_single_dyc_row_text_pane_ParamLimits

0xcb5d,	// (0x0004c7df) list_single_dyc_row_text_pane

0xaaa2,	// (0x0004a724) bg_sp_fs_scroll_pane

0xcb7c,	// (0x0004c7fe) thumb_sp_fs_scroll_pane

0xb976,	// (0x0004b5f8) list_medium_line_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_g1

0xcb85,	// (0x0004c807) list_medium_line_t1_ParamLimits

0xcb85,	// (0x0004c807) list_medium_line_t1

0xac21,	// (0x0004a8a3) list_medium_line_x2_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_g1

0xac2d,	// (0x0004a8af) list_medium_line_x2_g2_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_g2

0x0001,

0xfc97,	// (0x0004f919) list_medium_line_x2_g_ParamLimits

0xfc97,	// (0x0004f919) list_medium_line_x2_g

0xcb9a,	// (0x0004c81c) list_medium_line_x2_t1_ParamLimits

0xcb9a,	// (0x0004c81c) list_medium_line_x2_t1

0xac21,	// (0x0004a8a3) list_medium_line_x3_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x3_g1

0xac2d,	// (0x0004a8af) list_medium_line_x3_g2_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x3_g2

0x0001,

0xfc97,	// (0x0004f919) list_medium_line_x3_g_ParamLimits

0xfc97,	// (0x0004f919) list_medium_line_x3_g

0xcb9a,	// (0x0004c81c) list_medium_line_x3_t1_ParamLimits

0xcb9a,	// (0x0004c81c) list_medium_line_x3_t1

0xcbb0,	// (0x0004c832) thumb_sp_fs_scroll_pane_g1

0xcbb9,	// (0x0004c83b) thumb_sp_fs_scroll_pane_g2

0xcbc2,	// (0x0004c844) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9c,	// (0x0004f91e) thumb_sp_fs_scroll_pane_g

0xcbb0,	// (0x0004c832) bg_sp_fs_scroll_pane_g1

0xcbb9,	// (0x0004c83b) bg_sp_fs_scroll_pane_g2

0xcbc2,	// (0x0004c844) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9c,	// (0x0004f91e) bg_sp_fs_scroll_pane_g

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g4_g1_ParamLimits

0xac21,	// (0x0004a8a3) list_medium_line_x2_t3_g4_g1

0xacb5,	// (0x0004a937) list_medium_line_x2_t3_g4_g2_ParamLimits

0xacb5,	// (0x0004a937) list_medium_line_x2_t3_g4_g2

0xac2d,	// (0x0004a8af) list_medium_line_x2_t3_g4_g3_ParamLimits

0xac2d,	// (0x0004a8af) list_medium_line_x2_t3_g4_g3

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xac39,	// (0x0004a8bb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2dd,	// (0x0004ef5f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2dd,	// (0x0004ef5f) list_medium_line_x2_t3_g4_g

0x130a,	// (0x00040f8c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x130a,	// (0x00040f8c) list_medium_line_x2_t3_g4_t1

0x1320,	// (0x00040fa2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1320,	// (0x00040fa2) list_medium_line_x2_t3_g4_t2

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t3_g4_t3_ParamLimits

0xac5a,	// (0x0004a8dc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca3,	// (0x0004f925) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca3,	// (0x0004f925) list_medium_line_x2_t3_g4_t

0xb976,	// (0x0004b5f8) list_medium_line_g2_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_g2_g1

0xb982,	// (0x0004b604) list_medium_line_g2_g2_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_g2_g2

0x0001,

0xf96b,	// (0x0004f5ed) list_medium_line_g2_g_ParamLimits

0xf96b,	// (0x0004f5ed) list_medium_line_g2_g

0xcbcb,	// (0x0004c84d) list_medium_line_g2_t1_ParamLimits

0xcbcb,	// (0x0004c84d) list_medium_line_g2_t1

0xb976,	// (0x0004b5f8) list_medium_line_t3_g2_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t3_g2_g1

0xb982,	// (0x0004b604) list_medium_line_t3_g2_g2_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_t3_g2_g2

0x0001,

0xf96b,	// (0x0004f5ed) list_medium_line_t3_g2_g_ParamLimits

0xf96b,	// (0x0004f5ed) list_medium_line_t3_g2_g

0x1339,	// (0x00040fbb) list_medium_line_t3_g2_t1_ParamLimits

0x1339,	// (0x00040fbb) list_medium_line_t3_g2_t1

0x1353,	// (0x00040fd5) list_medium_line_t3_g2_t2_ParamLimits

0x1353,	// (0x00040fd5) list_medium_line_t3_g2_t2

0x1369,	// (0x00040feb) list_medium_line_t3_g2_t3_ParamLimits

0x1369,	// (0x00040feb) list_medium_line_t3_g2_t3

0x0002,

0xfcaa,	// (0x0004f92c) list_medium_line_t3_g2_t_ParamLimits

0xfcaa,	// (0x0004f92c) list_medium_line_t3_g2_t

0xc9a5,	// (0x0004c627) list_medium_line_right_icon_g1

0xcbe0,	// (0x0004c862) list_medium_line_right_icon_t1

0xb976,	// (0x0004b5f8) list_medium_line_t2_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t2_g1

0x1380,	// (0x00041002) list_medium_line_t2_t1_ParamLimits

0x1380,	// (0x00041002) list_medium_line_t2_t1

0x139a,	// (0x0004101c) list_medium_line_t2_t2_ParamLimits

0x139a,	// (0x0004101c) list_medium_line_t2_t2

0x0001,

0xfcb1,	// (0x0004f933) list_medium_line_t2_t_ParamLimits

0xfcb1,	// (0x0004f933) list_medium_line_t2_t

0xb976,	// (0x0004b5f8) list_medium_line_t3_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t3_g1

0x13af,	// (0x00041031) list_medium_line_t3_t1_ParamLimits

0x13af,	// (0x00041031) list_medium_line_t3_t1

0x13c6,	// (0x00041048) list_medium_line_t3_t2_ParamLimits

0x13c6,	// (0x00041048) list_medium_line_t3_t2

0x13db,	// (0x0004105d) list_medium_line_t3_t3_ParamLimits

0x13db,	// (0x0004105d) list_medium_line_t3_t3

0x0002,

0xfcb6,	// (0x0004f938) list_medium_line_t3_t_ParamLimits

0xfcb6,	// (0x0004f938) list_medium_line_t3_t

0xb976,	// (0x0004b5f8) list_medium_line_g3_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_g3_g1

0xcbee,	// (0x0004c870) list_medium_line_g3_g2_ParamLimits

0xcbee,	// (0x0004c870) list_medium_line_g3_g2

0xb982,	// (0x0004b604) list_medium_line_g3_g3_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_g3_g3

0x0002,

0xfcbd,	// (0x0004f93f) list_medium_line_g3_g_ParamLimits

0xfcbd,	// (0x0004f93f) list_medium_line_g3_g

0xcbfa,	// (0x0004c87c) list_medium_line_g3_t1_ParamLimits

0xcbfa,	// (0x0004c87c) list_medium_line_g3_t1

0xb976,	// (0x0004b5f8) list_medium_line_t2_g3_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t2_g3_g1

0xcbee,	// (0x0004c870) list_medium_line_t2_g3_g2_ParamLimits

0xcbee,	// (0x0004c870) list_medium_line_t2_g3_g2

0xb982,	// (0x0004b604) list_medium_line_t2_g3_g3_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_t2_g3_g3

0x0002,

0xfcbd,	// (0x0004f93f) list_medium_line_t2_g3_g_ParamLimits

0xfcbd,	// (0x0004f93f) list_medium_line_t2_g3_g

0x13ed,	// (0x0004106f) list_medium_line_t2_g3_t1_ParamLimits

0x13ed,	// (0x0004106f) list_medium_line_t2_g3_t1

0x1404,	// (0x00041086) list_medium_line_t2_g3_t2_ParamLimits

0x1404,	// (0x00041086) list_medium_line_t2_g3_t2

0x0001,

0xfcc4,	// (0x0004f946) list_medium_line_t2_g3_t_ParamLimits

0xfcc4,	// (0x0004f946) list_medium_line_t2_g3_t

0xb976,	// (0x0004b5f8) list_medium_line_t3_g3_g1_ParamLimits

0xb976,	// (0x0004b5f8) list_medium_line_t3_g3_g1

0xcbee,	// (0x0004c870) list_medium_line_t3_g3_g2_ParamLimits

0xcbee,	// (0x0004c870) list_medium_line_t3_g3_g2

0xb982,	// (0x0004b604) list_medium_line_t3_g3_g3_ParamLimits

0xb982,	// (0x0004b604) list_medium_line_t3_g3_g3

0x0002,

0xfcbd,	// (0x0004f93f) list_medium_line_t3_g3_g_ParamLimits

0xfcbd,	// (0x0004f93f) list_medium_line_t3_g3_g

0x1419,	// (0x0004109b) list_medium_line_t3_g3_t1_ParamLimits

0x1419,	// (0x0004109b) list_medium_line_t3_g3_t1

0x1432,	// (0x000410b4) list_medium_line_t3_g3_t2_ParamLimits

0x1432,	// (0x000410b4) list_medium_line_t3_g3_t2

0x1448,	// (0x000410ca) list_medium_line_t3_g3_t3_ParamLimits

0x1448,	// (0x000410ca) list_medium_line_t3_g3_t3

0x0002,

0xfcc9,	// (0x0004f94b) list_medium_line_t3_g3_t_ParamLimits

0xfcc9,	// (0x0004f94b) list_medium_line_t3_g3_t

0xcad5,	// (0x0004c757) list_medium_line_right_iconx2_g1

0xc9a5,	// (0x0004c627) list_medium_line_right_iconx2_g2

0x0001,

0xfcd0,	// (0x0004f952) list_medium_line_right_iconx2_g

0xcc0f,	// (0x0004c891) list_medium_line_right_iconx2_t1

0xcad5,	// (0x0004c757) list_medium_line_t2_right_iconx2_g1

0xc9a5,	// (0x0004c627) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd0,	// (0x0004f952) list_medium_line_t2_right_iconx2_g

0x1462,	// (0x000410e4) list_medium_line_t2_right_iconx2_t1

0x1472,	// (0x000410f4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcd5,	// (0x0004f957) list_medium_line_t2_right_iconx2_t

0xcc1d,	// (0x0004c89f) list_medium_line_x4_t4_t1

0x1480,	// (0x00041102) list_medium_line_x4_t4_t2

0x1490,	// (0x00041112) list_medium_line_x4_t4_t3

0x14a0,	// (0x00041122) list_medium_line_x4_t4_t4

0x0003,

0xfcda,	// (0x0004f95c) list_medium_line_x4_t4_t

0x9dbb,	// (0x00049a3d) tport_appsw_pane_ParamLimits

0x9dbb,	// (0x00049a3d) tport_appsw_pane

0x9dce,	// (0x00049a50) tport_contact_pane_ParamLimits

0x9dce,	// (0x00049a50) tport_contact_pane

0x9de1,	// (0x00049a63) tport_listscroll_pane_ParamLimits

0x9de1,	// (0x00049a63) tport_listscroll_pane

0x9df7,	// (0x00049a79) cell_tport_appsw_pane_ParamLimits

0x9df7,	// (0x00049a79) cell_tport_appsw_pane

0xb6a8,	// (0x0004b32a) tport_appsw_pane_g1_ParamLimits

0xb6a8,	// (0x0004b32a) tport_appsw_pane_g1

0xcc2b,	// (0x0004c8ad) tport_contact_pane_g1

0xcc34,	// (0x0004c8b6) tport_contact_pane_t1

0xcc42,	// (0x0004c8c4) tport_contact_pane_t2

0x0001,

0xfce3,	// (0x0004f965) tport_contact_pane_t

0xcc50,	// (0x0004c8d2) list_tport_pane

0xcc59,	// (0x0004c8db) scroll_pane_cp_030

0x9e3d,	// (0x00049abf) cell_tport_appsw_pane_g1

0xcc72,	// (0x0004c8f4) cell_tport_appsw_pane_t1

0xaaa2,	// (0x0004a724) grid_highlight_pane_cp019

0x9e4d,	// (0x00049acf) list_tport_double_graphic_pane_ParamLimits

0x9e4d,	// (0x00049acf) list_tport_double_graphic_pane

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp023_ParamLimits

0xefa9,	// (0x0004ec2b) list_highlight_pane_cp023

0x9e5d,	// (0x00049adf) list_tport_double_graphic_pane_g1_ParamLimits

0x9e5d,	// (0x00049adf) list_tport_double_graphic_pane_g1

0x9e6a,	// (0x00049aec) list_tport_double_graphic_pane_t1_ParamLimits

0x9e6a,	// (0x00049aec) list_tport_double_graphic_pane_t1

0x9e7f,	// (0x00049b01) list_tport_double_graphic_pane_t2_ParamLimits

0x9e7f,	// (0x00049b01) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0004f971) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0004f971) list_tport_double_graphic_pane_t

0xaaa2,	// (0x0004a724) main_cale_note_pane

0x8293,	// (0x00047f15) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8293,	// (0x00047f15) cell_vitu2_function_top_wide_pane_cp01

0x9947,	// (0x000495c9) wait_bar_pane_cp05_ParamLimits

0xaaa2,	// (0x0004a724) listscroll_cmail_pane

0xcc88,	// (0x0004c90a) list_cmail_pane

0x9e9b,	// (0x00049b1d) list_cmail_body_pane

0x9eb3,	// (0x00049b35) list_single_cmail_header_caption_pane

0x9ed3,	// (0x00049b55) list_single_cmail_header_detail_pane_ParamLimits

0x9ed3,	// (0x00049b55) list_single_cmail_header_detail_pane

0x9f05,	// (0x00049b87) list_single_cmail_header_caption_pane_t1

0x14b0,	// (0x00041132) list_single_cmail_header_detail_pane_g1_ParamLimits

0x14b0,	// (0x00041132) list_single_cmail_header_detail_pane_g1

0xcca8,	// (0x0004c92a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcca8,	// (0x0004c92a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0004f976) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0004f976) list_single_cmail_header_detail_pane_g

0xccc1,	// (0x0004c943) list_single_cmail_header_detail_pane_t1_ParamLimits

0xccc1,	// (0x0004c943) list_single_cmail_header_detail_pane_t1

0xccff,	// (0x0004c981) list_single_cmail_header_editor_pane_bg_ParamLimits

0xccff,	// (0x0004c981) list_single_cmail_header_editor_pane_bg

0xc546,	// (0x0004c1c8) list_cmail_body_pane_g1

0xcd11,	// (0x0004c993) list_cmail_body_pane_t1

0xb702,	// (0x0004b384) list_single_cmail_header_editor_pane_bg_g1

0xe396,	// (0x0004e018) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb712,	// (0x0004b394) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb70a,	// (0x0004b38c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb96e,	// (0x0004b5f0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb732,	// (0x0004b3b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb722,	// (0x0004b3a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb72a,	// (0x0004b3ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe376,	// (0x0004dff8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9f15,	// (0x00049b97) calenote_gesture_pane_ParamLimits

0x9f15,	// (0x00049b97) calenote_gesture_pane

0x9f35,	// (0x00049bb7) calenote_window_pane_ParamLimits

0x9f35,	// (0x00049bb7) calenote_window_pane

0xcd1f,	// (0x0004c9a1) popup_note_window_cp01

0x9f51,	// (0x00049bd3) calenote_swipe_1_pane_ParamLimits

0x9f51,	// (0x00049bd3) calenote_swipe_1_pane

0x9d0d,	// (0x0004998f) calenote_swipe_2_pane_ParamLimits

0x9d0d,	// (0x0004998f) calenote_swipe_2_pane

0xc8a4,	// (0x0004c526) calenote_swipe_1_pane_g1_ParamLimits

0xc8a4,	// (0x0004c526) calenote_swipe_1_pane_g1

0xc8b1,	// (0x0004c533) calenote_swipe_1_pane_g2_ParamLimits

0xc8b1,	// (0x0004c533) calenote_swipe_1_pane_g2

0x0001,

0xfc23,	// (0x0004f8a5) calenote_swipe_1_pane_g_ParamLimits

0xfc23,	// (0x0004f8a5) calenote_swipe_1_pane_g

0xcd31,	// (0x0004c9b3) calenote_swipe_1_pane_t1_ParamLimits

0xcd31,	// (0x0004c9b3) calenote_swipe_1_pane_t1

0xc8a4,	// (0x0004c526) calenote_swipe_2_pane_g1_ParamLimits

0xc8a4,	// (0x0004c526) calenote_swipe_2_pane_g1

0xcd50,	// (0x0004c9d2) calenote_swipe_2_pane_g2_ParamLimits

0xcd50,	// (0x0004c9d2) calenote_swipe_2_pane_g2

0x0001,

0xfd00,	// (0x0004f982) calenote_swipe_2_pane_g_ParamLimits

0xfd00,	// (0x0004f982) calenote_swipe_2_pane_g

0xcd5c,	// (0x0004c9de) calenote_swipe_2_pane_t1_ParamLimits

0xcd5c,	// (0x0004c9de) calenote_swipe_2_pane_t1

0xaaa2,	// (0x0004a724) main_mup_navstr_pane

0x6cc2,	// (0x00046944) main_mup3_pane_t7_ParamLimits

0x6cc2,	// (0x00046944) main_mup3_pane_t7

0xb380,	// (0x0004b002) main_mp4_pane_g6_ParamLimits

0xb380,	// (0x0004b002) main_mp4_pane_g6

0xd698,	// (0x0004d31a) main_image3_pane_t4_ParamLimits

0xd698,	// (0x0004d31a) main_image3_pane_t4

0x9f66,	// (0x00049be8) popup_navstr_preview_pane_ParamLimits

0x9f66,	// (0x00049be8) popup_navstr_preview_pane

0x9f76,	// (0x00049bf8) scroll_navstr_pane_ParamLimits

0x9f76,	// (0x00049bf8) scroll_navstr_pane

0xaaa2,	// (0x0004a724) bg_popup_preview_window_pane_cp04

0xcd83,	// (0x0004ca05) popup_navstr_preview_pane_t1

0x9f8a,	// (0x00049c0c) scroll_navstr_pane_g1_ParamLimits

0x9f8a,	// (0x00049c0c) scroll_navstr_pane_g1

0x9f9e,	// (0x00049c20) scroll_navstr_pane_t1_ParamLimits

0x9f9e,	// (0x00049c20) scroll_navstr_pane_t1

0xcd28,	// (0x0004c9aa) bg_button_pane_cp014

0xcd28,	// (0x0004c9aa) bg_button_pane_cp030

0x10b2,	// (0x00040d34) list_double_fisheye_pane_g4_ParamLimits

0x10b2,	// (0x00040d34) list_double_fisheye_pane_g4

0x10be,	// (0x00040d40) list_double_fisheye_pane_g5_ParamLimits

0x10be,	// (0x00040d40) list_double_fisheye_pane_g5

0xcc90,	// (0x0004c912) sp_fs_scroll_pane_cp03

0xc9e7,	// (0x0004c669) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc9f3,	// (0x0004c675) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc40,	// (0x0004f8c2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc9ff,	// (0x0004c681) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9e91,	// (0x00049b13) sp_fs_scroll_pane_cp02

0xe09a,	// (0x0004dd1c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe09a,	// (0x0004dd1c) popup_sp_fs_calendar_preview_list_single_pane

0xaaa2,	// (0x0004a724) main_cam6_pano_pane

0xefa9,	// (0x0004ec2b) main_mup3_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_phacti_pane

0x9818,	// (0x0004949a) bg_button_pane_cp11

0x9832,	// (0x000494b4) main_mobtv_info_pane_g2_ParamLimits

0x9832,	// (0x000494b4) main_mobtv_info_pane_g2

0x0001,

0xfba0,	// (0x0004f822) main_mobtv_info_pane_g_ParamLimits

0xfba0,	// (0x0004f822) main_mobtv_info_pane_g

0x9a0d,	// (0x0004968f) sc_clock_pane_t5_ParamLimits

0x9a0d,	// (0x0004968f) sc_clock_pane_t5

0x9a97,	// (0x00049719) main_radioblah_pane_g1_ParamLimits

0xc7d6,	// (0x0004c458) main_radioblah_pane_t3_ParamLimits

0xc7d6,	// (0x0004c458) main_radioblah_pane_t3

0xc7ee,	// (0x0004c470) main_radioblah_pane_t4_ParamLimits

0xc7ee,	// (0x0004c470) main_radioblah_pane_t4

0x9abf,	// (0x00049741) main_radioblah_text_pane_ParamLimits

0x9abf,	// (0x00049741) main_radioblah_text_pane

0x9ad1,	// (0x00049753) main_radioblah_info_pane_g1_ParamLimits

0x9b6a,	// (0x000497ec) main_radioblah_info_pane_t4_ParamLimits

0x9b6a,	// (0x000497ec) main_radioblah_info_pane_t4

0xefa9,	// (0x0004ec2b) main_sp_fs_calendar_pane

0x9fb5,	// (0x00049c37) main_phacti_pane_g1

0x9fbd,	// (0x00049c3f) phacti_note_pane_ParamLimits

0x9fbd,	// (0x00049c3f) phacti_note_pane

0xcd9a,	// (0x0004ca1c) phacti_term_pane_ParamLimits

0xcd9a,	// (0x0004ca1c) phacti_term_pane

0xcdaf,	// (0x0004ca31) phacti_note_pane_t1_ParamLimits

0xcdaf,	// (0x0004ca31) phacti_note_pane_t1

0xcdc6,	// (0x0004ca48) phacti_term_pane_g1

0xcdce,	// (0x0004ca50) phacti_term_pane_t1_ParamLimits

0xcdce,	// (0x0004ca50) phacti_term_pane_t1

0xcdf8,	// (0x0004ca7a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce00,	// (0x0004ca82) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd0a,	// (0x0004f98c) popup_sp_fs_calendar_preview_list_single_pane_g

0xce08,	// (0x0004ca8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce08,	// (0x0004ca8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce1e,	// (0x0004caa0) aid_popup_sp_fs_bg_corner_pane

0x6381,	// (0x00046003) popup_sp_fs_calendar_preview_bg_pane_g1

0xaaa2,	// (0x0004a724) popup_sp_fs_calendar_preview_bg_pane

0xce26,	// (0x0004caa8) popup_sp_fs_calendar_preview_list_pane

0xefa9,	// (0x0004ec2b) bg_main_sp_fs_cale_pane_ParamLimits

0xefa9,	// (0x0004ec2b) bg_main_sp_fs_cale_pane

0xce2e,	// (0x0004cab0) listscroll_cale_mrui_pane_ParamLimits

0xce2e,	// (0x0004cab0) listscroll_cale_mrui_pane

0xce42,	// (0x0004cac4) listscroll_sp_fs_schedule_track_pane

0xce4b,	// (0x0004cacd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce4b,	// (0x0004cacd) main_sp_fs_ctrlbar_pane_cp01

0xce5c,	// (0x0004cade) main_sp_fs_ribbon_pane

0xce64,	// (0x0004cae6) popup_sp_fs_cale_preview_window

0xa014,	// (0x00049c96) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa014,	// (0x00049c96) list_single_sp_fs_schedule_track_pane

0xefa9,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xefa9,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp03

0xa028,	// (0x00049caa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa028,	// (0x00049caa) list_single_sp_fs_schedule_track_pane_g1

0xa034,	// (0x00049cb6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa034,	// (0x00049cb6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd0f,	// (0x0004f991) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd0f,	// (0x0004f991) list_single_sp_fs_schedule_track_pane_g

0xa040,	// (0x00049cc2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa040,	// (0x00049cc2) list_single_sp_fs_schedule_track_pane_t1

0xa062,	// (0x00049ce4) sp_fs_schedule_track_pane_ParamLimits

0xa062,	// (0x00049ce4) sp_fs_schedule_track_pane

0xce76,	// (0x0004caf8) sp_fs_schedule_track_pane_g1

0xce7e,	// (0x0004cb00) sp_fs_schedule_track_pane_g2

0xce86,	// (0x0004cb08) sp_fs_schedule_track_pane_g3

0xce8e,	// (0x0004cb10) sp_fs_schedule_track_pane_g4

0xce96,	// (0x0004cb18) sp_fs_schedule_track_pane_g5

0x0004,

0xfd14,	// (0x0004f996) sp_fs_schedule_track_pane_g

0xb702,	// (0x0004b384) bg_sp_fs_schedule_viewer_highlight_g1

0xe396,	// (0x0004e018) bg_sp_fs_schedule_viewer_highlight_g2

0xb70a,	// (0x0004b38c) bg_sp_fs_schedule_viewer_highlight_g3

0xb712,	// (0x0004b394) bg_sp_fs_schedule_viewer_highlight_g4

0xb96e,	// (0x0004b5f0) bg_sp_fs_schedule_viewer_highlight_g5

0xb722,	// (0x0004b3a4) bg_sp_fs_schedule_viewer_highlight_g6

0xb72a,	// (0x0004b3ac) bg_sp_fs_schedule_viewer_highlight_g7

0xb732,	// (0x0004b3b4) bg_sp_fs_schedule_viewer_highlight_g8

0xe376,	// (0x0004dff8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd1f,	// (0x0004f9a1) bg_sp_fs_schedule_viewer_highlight_g

0xaaa2,	// (0x0004a724) bg_main_sp_fs_ribbon_pane

0xa077,	// (0x00049cf9) main_sp_fs_ribbon_pane_g1

0xce9e,	// (0x0004cb20) main_sp_fs_ribbon_pane_t1

0xa080,	// (0x00049d02) main_sp_fs_ribbon_pane_t2

0xcead,	// (0x0004cb2f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd32,	// (0x0004f9b4) main_sp_fs_ribbon_pane_t

0xcebc,	// (0x0004cb3e) main_sp_fs_ribbon_scheduler_pane

0xcec4,	// (0x0004cb46) bg_main_sp_fs_ribbon_pane_g1

0xcecd,	// (0x0004cb4f) bg_main_sp_fs_ribbon_pane_g2

0xced6,	// (0x0004cb58) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd39,	// (0x0004f9bb) bg_main_sp_fs_ribbon_pane_g

0xcede,	// (0x0004cb60) main_sp_fs_ribbon_scheduler_pane_g1

0xcee7,	// (0x0004cb69) main_sp_fs_ribbon_scheduler_pane_g2

0xcef0,	// (0x0004cb72) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd40,	// (0x0004f9c2) main_sp_fs_ribbon_scheduler_pane_g

0xcef9,	// (0x0004cb7b) list_cale_mrui_pane

0xa08f,	// (0x00049d11) sp_fs_scroll_pane_cp07_ParamLimits

0xa08f,	// (0x00049d11) sp_fs_scroll_pane_cp07

0xa0a5,	// (0x00049d27) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa0a5,	// (0x00049d27) bg_sp_fs_schedule_viewer_highlight

0xcf02,	// (0x0004cb84) list_single_sp_fs_schedule_track_pane_cp01

0xcf0a,	// (0x0004cb8c) list_sp_fs_schedule_track_pane

0xcf12,	// (0x0004cb94) sp_fs_scroll_pane_cp06_ParamLimits

0xcf12,	// (0x0004cb94) sp_fs_scroll_pane_cp06

0x6381,	// (0x00046003) bgmain_sp_fs_calendar_pane_g1

0x14ee,	// (0x00041170) list_single_cale_mrui_pane_ParamLimits

0x14ee,	// (0x00041170) list_single_cale_mrui_pane

0xcf24,	// (0x0004cba6) list_single_cale_mrui_row_pane_ParamLimits

0xcf24,	// (0x0004cba6) list_single_cale_mrui_row_pane

0xcf31,	// (0x0004cbb3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf31,	// (0x0004cbb3) list_single_cale_mrui_row_pane_g1

0xcf69,	// (0x0004cbeb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcf69,	// (0x0004cbeb) list_single_cale_mrui_row_pane_t1

0x1514,	// (0x00041196) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1514,	// (0x00041196) list_single_cale_mrui_row_pane_t2

0xcf7b,	// (0x0004cbfd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf7b,	// (0x0004cbfd) list_single_cale_mrui_row_pane_t3

0xcfaa,	// (0x0004cc2c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcfaa,	// (0x0004cc2c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd4c,	// (0x0004f9ce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd4c,	// (0x0004f9ce) list_single_cale_mrui_row_pane_t

0x157a,	// (0x000411fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x157a,	// (0x000411fc) list_single_cmail_header_editor_pane_bg_cp01

0x159e,	// (0x00041220) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x159e,	// (0x00041220) list_single_cmail_header_editor_pane_bg_cp02

0xa0b7,	// (0x00049d39) main_radioblah_text_pane_t1_ParamLimits

0xa0b7,	// (0x00049d39) main_radioblah_text_pane_t1

0xcfd9,	// (0x0004cc5b) cam6_indi_pane_cp01

0xcfe1,	// (0x0004cc63) cam6_mode_pane_cp01

0xcfe9,	// (0x0004cc6b) cam6_pano_pane

0xcff2,	// (0x0004cc74) cam6_zoom_pane_cp01

0xcffc,	// (0x0004cc7e) cam6_pano_image_pane

0xd005,	// (0x0004cc87) cam6_pano_pane_g1

0xc546,	// (0x0004c1c8) cam6_pano_pane_g2

0xd00e,	// (0x0004cc90) cam6_pano_pane_g3

0xd017,	// (0x0004cc99) cam6_pano_pane_g4

0xaffd,	// (0x0004ac7f) cam6_pano_pane_g5

0xd020,	// (0x0004cca2) cam6_pano_pane_g6

0xd028,	// (0x0004ccaa) cam6_pano_pane_g7

0xd030,	// (0x0004ccb2) cam6_pano_pane_g8

0xd039,	// (0x0004ccbb) cam6_pano_pane_g9

0x0008,

0xfd55,	// (0x0004f9d7) cam6_pano_pane_g

0xaaa2,	// (0x0004a724) main_browser_tag_pane

0xcd7b,	// (0x0004c9fd) grid_navstr_albumart_pane

0xd044,	// (0x0004ccc6) cell_navstr_albumart_pane_ParamLimits

0xd044,	// (0x0004ccc6) cell_navstr_albumart_pane

0xd060,	// (0x0004cce2) cell_navstr_albumart_pane_g1

0x4cf5,	// (0x00044977) cell_navstr_albumart_pane_g2

0x4d05,	// (0x00044987) cell_navstr_albumart_pane_g3

0x4cfd,	// (0x0004497f) cell_navstr_albumart_pane_g4

0x0003,

0xfd68,	// (0x0004f9ea) cell_navstr_albumart_pane_g

0xa0d2,	// (0x00049d54) bt_list_pane_ParamLimits

0xa0d2,	// (0x00049d54) bt_list_pane

0xa0e8,	// (0x00049d6a) bt_list_pane_t1

0xa0f7,	// (0x00049d79) bt_list_pane_t2

0x0001,

0xfd71,	// (0x0004f9f3) bt_list_pane_t

0xaaa2,	// (0x0004a724) main_cale_prevew_pane

0xa106,	// (0x00049d88) popup_cale_preview_window_ParamLimits

0xa106,	// (0x00049d88) popup_cale_preview_window

0xefa9,	// (0x0004ec2b) bg_popup_preview_window_pane_cp05_ParamLimits

0xefa9,	// (0x0004ec2b) bg_popup_preview_window_pane_cp05

0xd068,	// (0x0004ccea) list_cale_preview_pane_ParamLimits

0xd068,	// (0x0004ccea) list_cale_preview_pane

0xa121,	// (0x00049da3) list_double_cale_preview_pane_ParamLimits

0xa121,	// (0x00049da3) list_double_cale_preview_pane

0xa135,	// (0x00049db7) list_single_cale_preview_pane_ParamLimits

0xa135,	// (0x00049db7) list_single_cale_preview_pane

0xa14d,	// (0x00049dcf) list_single_cale_preview_pane_g1

0xa155,	// (0x00049dd7) list_single_cale_preview_pane_t1_ParamLimits

0xa155,	// (0x00049dd7) list_single_cale_preview_pane_t1

0xa16a,	// (0x00049dec) list_double_cale_preview_pane_g1

0xa172,	// (0x00049df4) list_double_cale_preview_pane_t1_ParamLimits

0xa172,	// (0x00049df4) list_double_cale_preview_pane_t1

0xa187,	// (0x00049e09) list_double_cale_preview_pane_t2_ParamLimits

0xa187,	// (0x00049e09) list_double_cale_preview_pane_t2

0x0001,

0xfd76,	// (0x0004f9f8) list_double_cale_preview_pane_t_ParamLimits

0xfd76,	// (0x0004f9f8) list_double_cale_preview_pane_t

0xaaa2,	// (0x0004a724) main_ezdial_pane

0xefa9,	// (0x0004ec2b) main_sp_fs_email_pane_ParamLimits

0x9d27,	// (0x000499a9) cmail_ddmenu_btn01_pane_ParamLimits

0x9d27,	// (0x000499a9) cmail_ddmenu_btn01_pane

0x9d3a,	// (0x000499bc) cmail_ddmenu_btn02_pane_ParamLimits

0x9d3a,	// (0x000499bc) cmail_ddmenu_btn02_pane

0x9d5d,	// (0x000499df) cmail_ddmenu_btn03_pane_ParamLimits

0x9d5d,	// (0x000499df) cmail_ddmenu_btn03_pane

0x112a,	// (0x00040dac) main_sp_fs_ctrlbar_pane_ParamLimits

0x114e,	// (0x00040dd0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9e9b,	// (0x00049b1d) list_cmail_body_pane_ParamLimits

0xcc9f,	// (0x0004c921) bg_button_pane_cp12

0xccb4,	// (0x0004c936) list_single_cmail_header_detail_pane_g3_ParamLimits

0xccb4,	// (0x0004c936) list_single_cmail_header_detail_pane_g3

0x14c8,	// (0x0004114a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x14c8,	// (0x0004114a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0004f97d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0004f97d) list_single_cmail_header_detail_pane_t

0xcde3,	// (0x0004ca65) phacti_term_pane_t2_ParamLimits

0xcde3,	// (0x0004ca65) phacti_term_pane_t2

0x0001,

0xfd05,	// (0x0004f987) phacti_term_pane_t_ParamLimits

0xfd05,	// (0x0004f987) phacti_term_pane_t

0xd074,	// (0x0004ccf6) aid_size_list_single_double

0xa19f,	// (0x00049e21) popup_ezdial_listscroll_window

0xa1bb,	// (0x00049e3d) popup_number_entry_window_cp01

0xe9e0,	// (0x0004e662) bg_popup_call_pane_cp09

0xd080,	// (0x0004cd02) ezdial_list_pane

0xd088,	// (0x0004cd0a) scroll_pane_cp23

0x51e6,	// (0x00044e68) bg_button_pane_cp028_ParamLimits

0x51e6,	// (0x00044e68) bg_button_pane_cp028

0xa1c9,	// (0x00049e4b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa1c9,	// (0x00049e4b) cmail_ddmenu_btn01_pane_g1

0xa1d5,	// (0x00049e57) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa1d5,	// (0x00049e57) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd7b,	// (0x0004f9fd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd7b,	// (0x0004f9fd) cmail_ddmenu_btn01_pane_g

0xd090,	// (0x0004cd12) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd090,	// (0x0004cd12) cmail_ddmenu_btn01_pane_t1

0x51e6,	// (0x00044e68) bg_button_pane_cp029_ParamLimits

0x51e6,	// (0x00044e68) bg_button_pane_cp029

0xa1e1,	// (0x00049e63) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1e1,	// (0x00049e63) cmail_ddmenu_btn02_pane_g1

0xa1f9,	// (0x00049e7b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa1f9,	// (0x00049e7b) cmail_ddmenu_btn02_pane_t1

0xefa9,	// (0x0004ec2b) bg_button_pane_cp031_ParamLimits

0xefa9,	// (0x0004ec2b) bg_button_pane_cp031

0xa1e1,	// (0x00049e63) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1e1,	// (0x00049e63) cmail_ddmenu_btn03_pane_g1

0xa1f9,	// (0x00049e7b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa1f9,	// (0x00049e7b) cmail_ddmenu_btn03_pane_t1

0x7acb,	// (0x0004774d) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ae5,	// (0x00047767) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ae5,	// (0x00047767) cell_dialer2_keypad_pane_t1_copy1

0x96b2,	// (0x00049334) ncimui_group_button_pane

0xefa9,	// (0x0004ec2b) main_sp_fs_calendar_pane_ParamLimits

0x9eb3,	// (0x00049b35) list_single_cmail_header_caption_pane_ParamLimits

0xbccd,	// (0x0004b94f) aid_recal_txt_sm_pane

0xaaa2,	// (0x0004a724) mian_recal_day_pane

0xce64,	// (0x0004cae6) popup_sp_fs_cale_preview_window_ParamLimits

0xaaa2,	// (0x0004a724) list_recal_day_pane

0xd0be,	// (0x0004cd40) list_single_recal_day_pane_ParamLimits

0xd0be,	// (0x0004cd40) list_single_recal_day_pane

0xd0d0,	// (0x0004cd52) list_single_recal_day_pane_g1_ParamLimits

0xd0d0,	// (0x0004cd52) list_single_recal_day_pane_g1

0xd0dc,	// (0x0004cd5e) list_single_recal_day_pane_g2_ParamLimits

0xd0dc,	// (0x0004cd5e) list_single_recal_day_pane_g2

0xd0e8,	// (0x0004cd6a) list_single_recal_day_pane_g3_ParamLimits

0xd0e8,	// (0x0004cd6a) list_single_recal_day_pane_g3

0xa21d,	// (0x00049e9f) list_single_recal_day_pane_g4_ParamLimits

0xa21d,	// (0x00049e9f) list_single_recal_day_pane_g4

0xd0f4,	// (0x0004cd76) list_single_recal_day_pane_g5_ParamLimits

0xd0f4,	// (0x0004cd76) list_single_recal_day_pane_g5

0xd100,	// (0x0004cd82) list_single_recal_day_pane_g6_ParamLimits

0xd100,	// (0x0004cd82) list_single_recal_day_pane_g6

0x0005,

0xfd8a,	// (0x0004fa0c) list_single_recal_day_pane_g_ParamLimits

0xfd8a,	// (0x0004fa0c) list_single_recal_day_pane_g

0xd10c,	// (0x0004cd8e) list_single_recal_day_pane_t1

0xd11a,	// (0x0004cd9c) list_single_recal_day_pane_t2

0x0001,

0xfd97,	// (0x0004fa19) list_single_recal_day_pane_t

0xa22b,	// (0x00049ead) ncimui_query_button_pane_ParamLimits

0xa22b,	// (0x00049ead) ncimui_query_button_pane

0xa23b,	// (0x00049ebd) ncimui_query_button_pane_t1_ParamLimits

0xa23b,	// (0x00049ebd) ncimui_query_button_pane_t1

0xd128,	// (0x0004cdaa) ncimui_query_button_pane_t2_ParamLimits

0xd128,	// (0x0004cdaa) ncimui_query_button_pane_t2

0x0001,

0xfd9c,	// (0x0004fa1e) ncimui_query_button_pane_t_ParamLimits

0xfd9c,	// (0x0004fa1e) ncimui_query_button_pane_t

0xa24e,	// (0x00049ed0) query_button_pane_ParamLimits

0xa24e,	// (0x00049ed0) query_button_pane

0xaaa2,	// (0x0004a724) bg_button_pane_cp0028

0xd13b,	// (0x0004cdbd) query_button_pane_t1

0x5208,	// (0x00044e8a) main_tport_pane_ParamLimits

0x9d81,	// (0x00049a03) bg_popup_window_pane_cp01_ParamLimits

0x9d81,	// (0x00049a03) bg_popup_window_pane_cp01

0x9d97,	// (0x00049a19) heading_pane_cp08_ParamLimits

0x9d97,	// (0x00049a19) heading_pane_cp08

0x9da8,	// (0x00049a2a) heading_pane_cp07_ParamLimits

0x9da8,	// (0x00049a2a) heading_pane_cp07

0xcc6a,	// (0x0004c8ec) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0004f96a) cell_tport_appsw_pane_g

0x0dba,	// (0x00040a3c) input_candi_list_open_g1

0xe531,	// (0x0004e1b3) list_cale_time_pane_g6_ParamLimits

0xe531,	// (0x0004e1b3) list_cale_time_pane_g6

0x66f8,	// (0x0004637a) aid_size_touch_calib_1_ParamLimits

0x66f8,	// (0x0004637a) aid_size_touch_calib_1

0x6704,	// (0x00046386) aid_size_touch_calib_2_ParamLimits

0x6704,	// (0x00046386) aid_size_touch_calib_2

0x671a,	// (0x0004639c) aid_size_touch_calib_3_ParamLimits

0x671a,	// (0x0004639c) aid_size_touch_calib_3

0x6738,	// (0x000463ba) aid_size_touch_calib_4_ParamLimits

0x6738,	// (0x000463ba) aid_size_touch_calib_4

0x674e,	// (0x000463d0) main_touch_calib_button_group_pane_ParamLimits

0x674e,	// (0x000463d0) main_touch_calib_button_group_pane

0x6765,	// (0x000463e7) main_touch_calib_pane_g1_ParamLimits

0x6771,	// (0x000463f3) main_touch_calib_pane_g2_ParamLimits

0x677d,	// (0x000463ff) main_touch_calib_pane_g3_ParamLimits

0x6789,	// (0x0004640b) main_touch_calib_pane_g4_ParamLimits

0xf6cd,	// (0x0004f34f) main_touch_calib_pane_g_ParamLimits

0x6795,	// (0x00046417) main_touch_calib_pane_t1_ParamLimits

0x67af,	// (0x00046431) main_touch_calib_pane_t2_ParamLimits

0x67c9,	// (0x0004644b) main_touch_calib_pane_t3_ParamLimits

0x67dd,	// (0x0004645f) main_touch_calib_pane_t4_ParamLimits

0x67f1,	// (0x00046473) main_touch_calib_pane_t5_ParamLimits

0xf6d6,	// (0x0004f358) main_touch_calib_pane_t_ParamLimits

0x6f39,	// (0x00046bbb) list_single_fp_cale_pane_g3_ParamLimits

0x6f39,	// (0x00046bbb) list_single_fp_cale_pane_g3

0xefa9,	// (0x0004ec2b) bg_button_pane_cp012_ParamLimits

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp03_ParamLimits

0x8a90,	// (0x00048712) cell_vitu2_function_top_pane_g1_ParamLimits

0xefa9,	// (0x0004ec2b) bg_vkb2_func_pane_cp04_ParamLimits

0x9666,	// (0x000492e8) main_ncimui_button_group_pane_ParamLimits

0x9666,	// (0x000492e8) main_ncimui_button_group_pane

0x96a0,	// (0x00049322) main_ncimui_pane_t3_ParamLimits

0x96a0,	// (0x00049322) main_ncimui_pane_t3

0xcd91,	// (0x0004ca13) phacti_button_group_pane

0xd074,	// (0x0004ccf6) aid_size_list_single_double_ParamLimits

0xa19f,	// (0x00049e21) popup_ezdial_listscroll_window_ParamLimits

0xa1bb,	// (0x00049e3d) popup_number_entry_window_cp01_ParamLimits

0xa261,	// (0x00049ee3) phacti_button_pane_ParamLimits

0xa261,	// (0x00049ee3) phacti_button_pane

0xaaa2,	// (0x0004a724) bg_button_pane_cp14

0xd149,	// (0x0004cdcb) phacti_button_pane_t1

0xa272,	// (0x00049ef4) main_touch_calib_button_pane_ParamLimits

0xa272,	// (0x00049ef4) main_touch_calib_button_pane

0xdf84,	// (0x0004dc06) bg_button_pane_cp18_ParamLimits

0xdf84,	// (0x0004dc06) bg_button_pane_cp18

0xd157,	// (0x0004cdd9) main_touch_calib_button_pane_t1_ParamLimits

0xd157,	// (0x0004cdd9) main_touch_calib_button_pane_t1

0xd16d,	// (0x0004cdef) main_touch_calib_button_pane_t2_ParamLimits

0xd16d,	// (0x0004cdef) main_touch_calib_button_pane_t2

0x0001,

0xfda1,	// (0x0004fa23) main_touch_calib_button_pane_t_ParamLimits

0xfda1,	// (0x0004fa23) main_touch_calib_button_pane_t

0xaaa2,	// (0x0004a724) cell_ncimui_button_pane

0xaaa2,	// (0x0004a724) bg_button_pane_cp032

0xd18b,	// (0x0004ce0d) cell_ncimui_button_pane_t1

0xd676,	// (0x0004d2f8) image3_infobar_pane_ParamLimits

0xd676,	// (0x0004d2f8) image3_infobar_pane

0x9a39,	// (0x000496bb) fs_bigclock_status_pane_ParamLimits

0x9a39,	// (0x000496bb) fs_bigclock_status_pane

0x9a46,	// (0x000496c8) main_fs_bigclock_clock_pane_ParamLimits

0x9a46,	// (0x000496c8) main_fs_bigclock_clock_pane

0x9a59,	// (0x000496db) main_fs_bigclock_indi_pane_ParamLimits

0x9a59,	// (0x000496db) main_fs_bigclock_indi_pane

0x9a74,	// (0x000496f6) main_fs_bigclock_swipe_pane_ParamLimits

0x9a74,	// (0x000496f6) main_fs_bigclock_swipe_pane

0xaaa2,	// (0x0004a724) main_fs_clock_dumped_data

0xc653,	// (0x0004c2d5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc653,	// (0x0004c2d5) list_single_fs_bigclock_indicator_pane_g1

0xc673,	// (0x0004c2f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc673,	// (0x0004c2f5) list_single_fs_bigclock_indicator_pane_g2

0xc68d,	// (0x0004c30f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc68d,	// (0x0004c30f) list_single_fs_bigclock_indicator_pane_g3

0xc6a9,	// (0x0004c32b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc6a9,	// (0x0004c32b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd4,	// (0x0004f856) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd4,	// (0x0004f856) list_single_fs_bigclock_indicator_pane_g

0xc6cf,	// (0x0004c351) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc6cf,	// (0x0004c351) list_single_fs_bigclock_indicator_pane_t1

0xc6f7,	// (0x0004c379) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc6f7,	// (0x0004c379) list_single_fs_bigclock_indicator_pane_t2

0xc71f,	// (0x0004c3a1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc71f,	// (0x0004c3a1) list_single_fs_bigclock_indicator_pane_t3

0xc749,	// (0x0004c3cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc749,	// (0x0004c3cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbdf,	// (0x0004f861) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbdf,	// (0x0004f861) list_single_fs_bigclock_indicator_pane_t

0xd199,	// (0x0004ce1b) image3_infobar_fav_pane_ParamLimits

0xd199,	// (0x0004ce1b) image3_infobar_fav_pane

0xd1a9,	// (0x0004ce2b) image3_infobar_loc_pane_ParamLimits

0xd1a9,	// (0x0004ce2b) image3_infobar_loc_pane

0xd1bf,	// (0x0004ce41) image3_infobar_time_pane_ParamLimits

0xd1bf,	// (0x0004ce41) image3_infobar_time_pane

0x6381,	// (0x00046003) image3_infobar_time_pane_g1

0xd1cf,	// (0x0004ce51) image3_infobar_time_pane_t1

0x6381,	// (0x00046003) image3_infobar_loc_pane_g1

0xd1dd,	// (0x0004ce5f) image3_infobar_loc_pane_g2

0x0001,

0xfda6,	// (0x0004fa28) image3_infobar_loc_pane_g

0xd1e5,	// (0x0004ce67) image3_infobar_loc_pane_t1

0x6381,	// (0x00046003) image3_infobar_fav_pane_g1

0xd1f3,	// (0x0004ce75) image3_infobar_fav_pane_g2

0x0001,

0xfdab,	// (0x0004fa2d) image3_infobar_fav_pane_g

0xd1fb,	// (0x0004ce7d) fs_bigclock_status_battery_pane

0xd204,	// (0x0004ce86) fs_bigclock_status_signal_pane

0xd20d,	// (0x0004ce8f) fs_bigclock_status_title_pane

0xd216,	// (0x0004ce98) fs_bigclock_status_signal_pane_g1

0xd21f,	// (0x0004cea1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdb0,	// (0x0004fa32) fs_bigclock_status_signal_pane_g

0xd227,	// (0x0004cea9) fs_bigclock_status_battery_pane_g1

0xd230,	// (0x0004ceb2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdb5,	// (0x0004fa37) fs_bigclock_status_battery_pane_g

0xd238,	// (0x0004ceba) fs_bigclock_status_title_pane_t1

0x6381,	// (0x00046003) main_fs_bigclock_clock_pane_g1

0xd246,	// (0x0004cec8) main_fs_bigclock_clock_pane_g2

0xd246,	// (0x0004cec8) main_fs_bigclock_clock_pane_g3

0xd246,	// (0x0004cec8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdba,	// (0x0004fa3c) main_fs_bigclock_clock_pane_g

0xd252,	// (0x0004ced4) main_fs_bigclock_clock_pane_t1

0xd260,	// (0x0004cee2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdc3,	// (0x0004fa45) main_fs_bigclock_clock_pane_t

0xd26f,	// (0x0004cef1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd26f,	// (0x0004cef1) list_single_fs_bigclock_indicator_pane

0xa287,	// (0x00049f09) list_single_fs_bigclock_pane_ParamLimits

0xa287,	// (0x00049f09) list_single_fs_bigclock_pane

0xd289,	// (0x0004cf0b) main_fs_bigclock_indicator_pane_t1

0xd298,	// (0x0004cf1a) list_single_fs_bigclock_pane_g1

0xd2a0,	// (0x0004cf22) list_single_fs_bigclock_pane_t1

0x6381,	// (0x00046003) main_fs_bigclock_swipe_pane_g1

0xd2de,	// (0x0004cf60) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdd4,	// (0x0004fa56) main_fs_bigclock_swipe_pane_g

0xd2e6,	// (0x0004cf68) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd2e6,	// (0x0004cf68) main_fs_bigclock_swipe_pane_t1

0x3287,	// (0x00042f09) call_type_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_btmg_pane

0xcf5d,	// (0x0004cbdf) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf5d,	// (0x0004cbdf) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd47,	// (0x0004f9c9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd47,	// (0x0004f9c9) list_single_cale_mrui_row_pane_g

0xd0ae,	// (0x0004cd30) list_recal_vselct_arw_lo_pane

0xd0b6,	// (0x0004cd38) list_recal_vselct_arw_up_pane

0xbcc4,	// (0x0004b946) list_recal_vselct_pane

0xd303,	// (0x0004cf85) btmg_button_pane

0xa2ed,	// (0x00049f6f) main_btmg_pane_g1

0xaaa2,	// (0x0004a724) bg_button_pane_cp044

0xd30d,	// (0x0004cf8f) btmg_button_pane_t1

0x51ca,	// (0x00044e4c) aid_listscroll_gen

0xefa9,	// (0x0004ec2b) main_cntbar_detail_pane

0xcc80,	// (0x0004c902) list_cmail_folder_pane

0xcc90,	// (0x0004c912) sp_fs_scroll_pane_cp03_ParamLimits

0x15ba,	// (0x0004123c) list_single_fs_dyc_pane_cp01_ParamLimits

0x15ba,	// (0x0004123c) list_single_fs_dyc_pane_cp01

0xd31b,	// (0x0004cf9d) aid_size_cmail_indent

0xd324,	// (0x0004cfa6) list_single_dyc_row_pane_cp01

0xa327,	// (0x00049fa9) cntbar_detail_list_pane_ParamLimits

0xa327,	// (0x00049fa9) cntbar_detail_list_pane

0xa379,	// (0x00049ffb) main_cntbar_detail_cont_pane_ParamLimits

0xa379,	// (0x00049ffb) main_cntbar_detail_cont_pane

0x327b,	// (0x00042efd) scroll_pane_cp032_ParamLimits

0x327b,	// (0x00042efd) scroll_pane_cp032

0xa38d,	// (0x0004a00f) cntbar_detail_list_event_pane_ParamLimits

0xa38d,	// (0x0004a00f) cntbar_detail_list_event_pane

0xa339,	// (0x00049fbb) cntbar_detail_list_shct_pane

0xe3e4,	// (0x0004e066) aid_list_gen

0xd32d,	// (0x0004cfaf) aid_scroll

0xd336,	// (0x0004cfb8) aid_size_touch_scroll_bar

0xd33f,	// (0x0004cfc1) aid_list_double

0xd348,	// (0x0004cfca) aid_list_single

0xa39d,	// (0x0004a01f) aid_list_single_lg

0xd351,	// (0x0004cfd3) aid_list_z_g_a_sm

0xd359,	// (0x0004cfdb) aid_list_z_g_d

0xd361,	// (0x0004cfe3) aid_txt_z_prm

0x15d8,	// (0x0004125a) aid_txt_z_prm_cp01

0x15e6,	// (0x00041268) aid_txt_z_sec

0xa3a6,	// (0x0004a028) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa3a6,	// (0x0004a028) main_cntbar_detail_cont_pane_g1

0xa3ba,	// (0x0004a03c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa3ba,	// (0x0004a03c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd9,	// (0x0004fa5b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd9,	// (0x0004fa5b) main_cntbar_detail_cont_pane_g

0xd36f,	// (0x0004cff1) main_cntbar_detail_cont_pane_t1

0xd37d,	// (0x0004cfff) main_cntbar_detail_cont_pane_t2

0xd38b,	// (0x0004d00d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdde,	// (0x0004fa60) main_cntbar_detail_cont_pane_t

0xa3ca,	// (0x0004a04c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa3ca,	// (0x0004a04c) cell_cntbar_detail_list_shct_pane

0xd399,	// (0x0004d01b) cntbar_detail_list_shct_pane_g1

0xd3a2,	// (0x0004d024) cntbar_detail_list_shct_pane_g2

0x0001,

0xfde5,	// (0x0004fa67) cntbar_detail_list_shct_pane_g

0xa3dc,	// (0x0004a05e) cntbar_detail_list_event_pane_g1_ParamLimits

0xa3dc,	// (0x0004a05e) cntbar_detail_list_event_pane_g1

0xa3e8,	// (0x0004a06a) cntbar_detail_list_event_pane_g2_ParamLimits

0xa3e8,	// (0x0004a06a) cntbar_detail_list_event_pane_g2

0x0005,

0xfdea,	// (0x0004fa6c) cntbar_detail_list_event_pane_g_ParamLimits

0xfdea,	// (0x0004fa6c) cntbar_detail_list_event_pane_g

0xa456,	// (0x0004a0d8) cntbar_detail_list_event_pane_t1_ParamLimits

0xa456,	// (0x0004a0d8) cntbar_detail_list_event_pane_t1

0xa46b,	// (0x0004a0ed) cntbar_detail_list_event_pane_t2_ParamLimits

0xa46b,	// (0x0004a0ed) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf7,	// (0x0004fa79) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf7,	// (0x0004fa79) cntbar_detail_list_event_pane_t

0x6381,	// (0x00046003) cell_cntbar_detail_list_shct_pane_g1

0x362b,	// (0x000432ad) navi_pane_mv_g3

0xefa9,	// (0x0004ec2b) main_cntbar_detail_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_notif_wgt_pane

0xb336,	// (0x0004afb8) aid_tch_main_mp4_pane_g4

0xb50a,	// (0x0004b18c) popup_slider_window_cp02

0xd0a5,	// (0x0004cd27) list_recal_day_event_pane

0xa2f7,	// (0x00049f79) cntbar_detail_btn_pane_ParamLimits

0xa2f7,	// (0x00049f79) cntbar_detail_btn_pane

0xa30f,	// (0x00049f91) cntbar_detail_btn_pane_cp01_ParamLimits

0xa30f,	// (0x00049f91) cntbar_detail_btn_pane_cp01

0xa339,	// (0x00049fbb) cntbar_detail_list_shct_pane_ParamLimits

0xa349,	// (0x00049fcb) cntbar_detail_pane_g1_ParamLimits

0xa349,	// (0x00049fcb) cntbar_detail_pane_g1

0xa35d,	// (0x00049fdf) cntbar_detail_pane_t1_ParamLimits

0xa35d,	// (0x00049fdf) cntbar_detail_pane_t1

0xa3f4,	// (0x0004a076) cntbar_detail_list_event_pane_g3_ParamLimits

0xa3f4,	// (0x0004a076) cntbar_detail_list_event_pane_g3

0xa40c,	// (0x0004a08e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa40c,	// (0x0004a08e) cntbar_detail_list_event_pane_g4

0xa424,	// (0x0004a0a6) cntbar_detail_list_event_pane_g5_ParamLimits

0xa424,	// (0x0004a0a6) cntbar_detail_list_event_pane_g5

0xa43c,	// (0x0004a0be) cntbar_detail_list_event_pane_g6_ParamLimits

0xa43c,	// (0x0004a0be) cntbar_detail_list_event_pane_g6

0xa480,	// (0x0004a102) cntbar_detail_list_event_pane_t3_ParamLimits

0xa480,	// (0x0004a102) cntbar_detail_list_event_pane_t3

0xa492,	// (0x0004a114) popup_notif_wgt_window_ParamLimits

0xa492,	// (0x0004a114) popup_notif_wgt_window

0xa4ab,	// (0x0004a12d) popup_submenu_window_cp01_ParamLimits

0xa4ab,	// (0x0004a12d) popup_submenu_window_cp01

0xe9e0,	// (0x0004e662) bg_popup_window_pane_cp10

0xd3ab,	// (0x0004d02d) listscroll_notif_wgt_pane

0xd3b5,	// (0x0004d037) list_notif_wgt_window

0xd3be,	// (0x0004d040) scroll_pane_cp033

0xd3c7,	// (0x0004d049) list_notif_wgt_row_pane_ParamLimits

0xd3c7,	// (0x0004d049) list_notif_wgt_row_pane

0xd3db,	// (0x0004d05d) aid_size_list_notif_wgt_del

0xd3e4,	// (0x0004d066) list_notif_wgt_row_pane_g1

0xd3ec,	// (0x0004d06e) list_notif_wgt_row_pane_g2

0xd3f4,	// (0x0004d076) list_notif_wgt_row_pane_g3

0x0002,

0xfdfe,	// (0x0004fa80) list_notif_wgt_row_pane_g

0xd3fd,	// (0x0004d07f) list_notif_wgt_row_pane_t1

0xd40b,	// (0x0004d08d) list_notif_wgt_row_pane_t2

0xd419,	// (0x0004d09b) list_notif_wgt_row_pane_t3

0x0002,

0xfe05,	// (0x0004fa87) list_notif_wgt_row_pane_t

0xb98e,	// (0x0004b610) list_recal_day_event_pane_g1

0xd427,	// (0x0004d0a9) list_recal_day_event_pane_t1

0xaaa2,	// (0x0004a724) bg_button_pane_cp045

0xd436,	// (0x0004d0b8) cntbar_detail_btn_pane_t1

0x51e6,	// (0x00044e68) main_callh_pane_ParamLimits

0x51e6,	// (0x00044e68) main_callh_pane

0xaaa2,	// (0x0004a724) main_coverflow0_pane

0xaaa2,	// (0x0004a724) main_wgtman_pane

0x9a82,	// (0x00049704) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a82,	// (0x00049704) main_fs_bigclock_unlock_btn_pane

0xcc62,	// (0x0004c8e4) bg_button_pane_cp16

0x9e45,	// (0x00049ac7) cell_tport_appsw_pane_g3

0xa4bd,	// (0x0004a13f) cf0_flow_pane_ParamLimits

0xa4bd,	// (0x0004a13f) cf0_flow_pane

0xd444,	// (0x0004d0c6) listscroll_cf0_pane

0xd44d,	// (0x0004d0cf) main_cf0_pane_g1

0xa4d2,	// (0x0004a154) main_cf0_pane_t1_ParamLimits

0xa4d2,	// (0x0004a154) main_cf0_pane_t1

0xa4ea,	// (0x0004a16c) main_cf0_pane_t2_ParamLimits

0xa4ea,	// (0x0004a16c) main_cf0_pane_t2

0x0001,

0xfe0c,	// (0x0004fa8e) main_cf0_pane_t_ParamLimits

0xfe0c,	// (0x0004fa8e) main_cf0_pane_t

0xd457,	// (0x0004d0d9) scroll_pane_cp11

0xa502,	// (0x0004a184) cf0_flow_pane_g1

0xa50e,	// (0x0004a190) cf0_flow_pane_g2

0x0001,

0xfe11,	// (0x0004fa93) cf0_flow_pane_g

0xa51a,	// (0x0004a19c) cf0_flow_pane_t1

0xaaa2,	// (0x0004a724) main_call6_pane

0xaaa2,	// (0x0004a724) main_calllock_pane

0xa52c,	// (0x0004a1ae) call6_btn_grp_pane_ParamLimits

0xa52c,	// (0x0004a1ae) call6_btn_grp_pane

0xa548,	// (0x0004a1ca) call6_pane_g1_ParamLimits

0xa548,	// (0x0004a1ca) call6_pane_g1

0xa55e,	// (0x0004a1e0) popup_call6_1st_window_ParamLimits

0xa55e,	// (0x0004a1e0) popup_call6_1st_window

0xa56f,	// (0x0004a1f1) popup_call6_2nd_window_ParamLimits

0xa56f,	// (0x0004a1f1) popup_call6_2nd_window

0xa580,	// (0x0004a202) cell_call6_btn_pane_ParamLimits

0xa580,	// (0x0004a202) cell_call6_btn_pane

0xe9e0,	// (0x0004e662) bg_popup_call2_in_pane_cp03

0xd462,	// (0x0004d0e4) popup_call6_1st_window_g1

0xd46a,	// (0x0004d0ec) popup_call6_1st_window_g2

0xd472,	// (0x0004d0f4) popup_call6_1st_window_g3

0x0002,

0xfe16,	// (0x0004fa98) popup_call6_1st_window_g

0xd47a,	// (0x0004d0fc) popup_call6_1st_window_t1

0xd489,	// (0x0004d10b) popup_call6_1st_window_t2

0xd499,	// (0x0004d11b) popup_call6_1st_window_t3

0x0002,

0xfe1d,	// (0x0004fa9f) popup_call6_1st_window_t

0xe9e0,	// (0x0004e662) bg_popup_call2_in_pane_cp04

0xd462,	// (0x0004d0e4) popup_call6_2nd_window_g1

0xd46a,	// (0x0004d0ec) popup_call6_2nd_window_g2

0xd472,	// (0x0004d0f4) popup_call6_2nd_window_g3

0x0002,

0xfe16,	// (0x0004fa98) popup_call6_2nd_window_g

0xd47a,	// (0x0004d0fc) popup_call6_2nd_window_t1

0xaaa2,	// (0x0004a724) bg_button_pane_cp15

0xd4a9,	// (0x0004d12b) cell_call6_btn_pane_g1

0xd4b2,	// (0x0004d134) cell_call6_btn_pane_t1

0xa594,	// (0x0004a216) listscroll_wgtman_pane_ParamLimits

0xa594,	// (0x0004a216) listscroll_wgtman_pane

0xa5b7,	// (0x0004a239) wgtman_btn_pane_ParamLimits

0xa5b7,	// (0x0004a239) wgtman_btn_pane

0xe8a6,	// (0x0004e528) aid_scroll_copy1

0xd4c1,	// (0x0004d143) list_wgtman_pane

0xa5fa,	// (0x0004a27c) wgtman_btn_pane_g1_ParamLimits

0xa5fa,	// (0x0004a27c) wgtman_btn_pane_g1

0xa626,	// (0x0004a2a8) wgtman_btn_pane_t1_ParamLimits

0xa626,	// (0x0004a2a8) wgtman_btn_pane_t1

0xd4cb,	// (0x0004d14d) wgtman_btn_pane_t2_ParamLimits

0xd4cb,	// (0x0004d14d) wgtman_btn_pane_t2

0x0001,

0xfe24,	// (0x0004faa6) wgtman_btn_pane_t_ParamLimits

0xfe24,	// (0x0004faa6) wgtman_btn_pane_t

0xd4e2,	// (0x0004d164) listrow_wgtman_pane_ParamLimits

0xd4e2,	// (0x0004d164) listrow_wgtman_pane

0xd4f6,	// (0x0004d178) listrow_wgtman_pane_g1

0xa663,	// (0x0004a2e5) listrow_wgtman_pane_g2

0x0001,

0xfe29,	// (0x0004faab) listrow_wgtman_pane_g

0xd4ff,	// (0x0004d181) listrow_wgtman_pane_t1

0xd50d,	// (0x0004d18f) listrow_wgtman_pane_t2

0x0001,

0xfe2e,	// (0x0004fab0) listrow_wgtman_pane_t

0xd51b,	// (0x0004d19d) wait_bar_pane_cp09

0xd523,	// (0x0004d1a5) main_calllock_btn_pane

0xd52d,	// (0x0004d1af) main_calllock_pane_g1

0xaaa2,	// (0x0004a724) bg_button_pane_cp17

0xd539,	// (0x0004d1bb) main_calllock_btn_pane_g1

0xd542,	// (0x0004d1c4) main_calllock_btn_pane_t1

0xaaa2,	// (0x0004a724) main_dialer3_pane

0xaaa2,	// (0x0004a724) main_fmrd2_pane

0x6381,	// (0x00046003) main_fs_bigclock_unlock_btn_pane_g1

0xd559,	// (0x0004d1db) main_fs_bigclock_unlock_btn_pane_t1

0xa66d,	// (0x0004a2ef) area_fmrd2_info_pane_ParamLimits

0xa66d,	// (0x0004a2ef) area_fmrd2_info_pane

0xa680,	// (0x0004a302) area_fmrd2_visual_pane_ParamLimits

0xa680,	// (0x0004a302) area_fmrd2_visual_pane

0xa68e,	// (0x0004a310) fmrd2_indi_pane_ParamLimits

0xa68e,	// (0x0004a310) fmrd2_indi_pane

0xa69b,	// (0x0004a31d) area_fmrd2_visual_pane_g1

0xa6a3,	// (0x0004a325) area_fmrd2_visual_pane_t1

0xa6b3,	// (0x0004a335) area_fmrd2_visual_pane_t2

0xa6c3,	// (0x0004a345) area_fmrd2_visual_pane_t3

0x0002,

0xfe38,	// (0x0004faba) area_fmrd2_visual_pane_t

0xa6d3,	// (0x0004a355) area_fmrd2_info_pane_g1

0xa6db,	// (0x0004a35d) area_fmrd2_info_pane_t1

0xa6eb,	// (0x0004a36d) area_fmrd2_info_pane_t2

0xa6fb,	// (0x0004a37d) area_fmrd2_info_pane_t3

0xa70b,	// (0x0004a38d) area_fmrd2_info_pane_t4

0x0003,

0xfe3f,	// (0x0004fac1) area_fmrd2_info_pane_t

0xa71b,	// (0x0004a39d) fmrd2_indi_pane_t1

0xa72b,	// (0x0004a3ad) fmrd2_indi_pane_t2

0xa73b,	// (0x0004a3bd) fmrd2_indi_pane_t3

0x0002,

0xfe48,	// (0x0004faca) fmrd2_indi_pane_t

0xc6b8,	// (0x0004c33a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc6b8,	// (0x0004c33a) list_single_fs_bigclock_indicator_pane_g5

0xc75e,	// (0x0004c3e0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc75e,	// (0x0004c3e0) list_single_fs_bigclock_indicator_pane_t5

0x9fd1,	// (0x00049c53) aid_cell_bcale_month_pane_ParamLimits

0x9fd1,	// (0x00049c53) aid_cell_bcale_month_pane

0x9fe3,	// (0x00049c65) bcale_month_pane_ParamLimits

0x9fe3,	// (0x00049c65) bcale_month_pane

0x9ffb,	// (0x00049c7d) bcale_preview_pane_ParamLimits

0x9ffb,	// (0x00049c7d) bcale_preview_pane

0xd2a0,	// (0x0004cf22) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2ba,	// (0x0004cf3c) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2ba,	// (0x0004cf3c) list_single_fs_bigclock_pane_t2

0x0001,

0xfdcf,	// (0x0004fa51) list_single_fs_bigclock_pane_t_ParamLimits

0xfdcf,	// (0x0004fa51) list_single_fs_bigclock_pane_t

0xd551,	// (0x0004d1d3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe33,	// (0x0004fab5) main_fs_bigclock_unlock_btn_pane_g

0xa74b,	// (0x0004a3cd) aid_dia3_key_size_ParamLimits

0xa74b,	// (0x0004a3cd) aid_dia3_key_size

0xa75a,	// (0x0004a3dc) aid_dia3_listrow_size_ParamLimits

0xa75a,	// (0x0004a3dc) aid_dia3_listrow_size

0xa768,	// (0x0004a3ea) dia3_keypad_fun_pane_ParamLimits

0xa768,	// (0x0004a3ea) dia3_keypad_fun_pane

0xa784,	// (0x0004a406) dia3_keypad_num_pane_ParamLimits

0xa784,	// (0x0004a406) dia3_keypad_num_pane

0xa79d,	// (0x0004a41f) dia3_listscroll_pane_ParamLimits

0xa79d,	// (0x0004a41f) dia3_listscroll_pane

0xa7b2,	// (0x0004a434) dia3_numentry_pane_ParamLimits

0xa7b2,	// (0x0004a434) dia3_numentry_pane

0xd567,	// (0x0004d1e9) dia3_list_pane

0xd572,	// (0x0004d1f4) scroll_pane_cp12

0xaaa2,	// (0x0004a724) bg_dia3_numentry_pane

0xd57d,	// (0x0004d1ff) dia3_numentry_pane_t1

0xa7c5,	// (0x0004a447) cell_dia3_key_num_pane

0xa7cd,	// (0x0004a44f) cell_dia3_key0_fun_pane_ParamLimits

0xa7cd,	// (0x0004a44f) cell_dia3_key0_fun_pane

0xa7e1,	// (0x0004a463) cell_dia3_key1_fun_pane_ParamLimits

0xa7e1,	// (0x0004a463) cell_dia3_key1_fun_pane

0xa7f9,	// (0x0004a47b) dia3_listrow_pane

0xc3d0,	// (0x0004c052) bg_dia3_numentry_pane_g1

0xaaa2,	// (0x0004a724) bg_button_pane_cp21

0xd58c,	// (0x0004d20e) cell_dia3_key_num_pane_t1

0xd59a,	// (0x0004d21c) cell_dia3_key_num_pane_t2

0xd5a9,	// (0x0004d22b) cell_dia3_key_num_pane_t3

0xd5b8,	// (0x0004d23a) cell_dia3_key_num_pane_t4

0x0003,

0xfe4f,	// (0x0004fad1) cell_dia3_key_num_pane_t

0xaaa2,	// (0x0004a724) bg_button_pane_cp19

0xa80b,	// (0x0004a48d) cell_dia3_key0_fun_pane_g1

0xaaa2,	// (0x0004a724) bg_button_pane_cp20

0xa813,	// (0x0004a495) cell_dia3_key1_fun_pane_g1

0xa81b,	// (0x0004a49d) area_left_week_number_pane

0xa824,	// (0x0004a4a6) area_top_day_name_pane

0xa82d,	// (0x0004a4af) frame_month_view_pane

0xa839,	// (0x0004a4bb) grid_month_view_pane

0xa843,	// (0x0004a4c5) cell_top_day_name_pane_ParamLimits

0xa843,	// (0x0004a4c5) cell_top_day_name_pane

0xa85f,	// (0x0004a4e1) cell_area_left_week_number_pane_ParamLimits

0xa85f,	// (0x0004a4e1) cell_area_left_week_number_pane

0xa875,	// (0x0004a4f7) cell_month_view_pane_ParamLimits

0xa875,	// (0x0004a4f7) cell_month_view_pane

0xd5c7,	// (0x0004d249) frm_month_g1

0xa896,	// (0x0004a518) frm_month_g2

0xa8a0,	// (0x0004a522) frm_month_g3

0xa8aa,	// (0x0004a52c) frm_month_g4

0xa8b4,	// (0x0004a536) frm_month_g5

0xa8be,	// (0x0004a540) frm_month_g6

0xa8ca,	// (0x0004a54c) frm_month_g7

0xd5d0,	// (0x0004d252) frm_month_g8

0xa8d6,	// (0x0004a558) frm_month_g9

0xa8df,	// (0x0004a561) frm_month_g10

0xa8e8,	// (0x0004a56a) frm_month_g11

0xa8f1,	// (0x0004a573) frm_month_g12

0xa8fa,	// (0x0004a57c) frm_month_g13

0xa903,	// (0x0004a585) frm_month_g14

0xa90e,	// (0x0004a590) frm_month_g15

0xa919,	// (0x0004a59b) frm_month_g16

0x000f,

0xfe58,	// (0x0004fada) frm_month_g

0xa924,	// (0x0004a5a6) cell_top_day_name_pane_t1

0xa933,	// (0x0004a5b5) cell_area_left_week_number_pane_g1

0xa924,	// (0x0004a5a6) cell_area_left_week_number_pane_t1

0x6381,	// (0x00046003) cell_month_view_pane_g1

0xa93b,	// (0x0004a5bd) cell_month_view_pane_t1

0xaaa2,	// (0x0004a724) main_fps_pane

0xc9ad,	// (0x0004c62f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc9ad,	// (0x0004c62f) cmail_ddmenu_btn02_pane_cp1

0xc9c9,	// (0x0004c64b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc9c9,	// (0x0004c64b) cmail_ddmenu_btn02_pane_cp2

0xa1ed,	// (0x00049e6f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1ed,	// (0x00049e6f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd80,	// (0x0004fa02) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd80,	// (0x0004fa02) cmail_ddmenu_btn02_pane_g

0xa20b,	// (0x00049e8d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa20b,	// (0x00049e8d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd85,	// (0x0004fa07) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd85,	// (0x0004fa07) cmail_ddmenu_btn02_pane_t

0xa94a,	// (0x0004a5cc) fps_text_pane_ParamLimits

0xa94a,	// (0x0004a5cc) fps_text_pane

0xa961,	// (0x0004a5e3) main_fps_pane_g1_ParamLimits

0xa961,	// (0x0004a5e3) main_fps_pane_g1

0xa979,	// (0x0004a5fb) wait_bar_pane_cp010_ParamLimits

0xa979,	// (0x0004a5fb) wait_bar_pane_cp010

0xa98c,	// (0x0004a60e) fps_text_pane_t1_ParamLimits

0xa98c,	// (0x0004a60e) fps_text_pane_t1

0x7f47,	// (0x00047bc9) cam4_image_uncrop_pane_g1

0x7f50,	// (0x00047bd2) cam4_image_uncrop_pane_g2

0x7f5b,	// (0x00047bdd) cam4_image_uncrop_pane_g3

0x7f64,	// (0x00047be6) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x0004f4e2) cam4_image_uncrop_pane_g

0xa7f9,	// (0x0004a47b) dia3_listrow_pane_ParamLimits

0xaaa2,	// (0x0004a724) main_phob2_pane

0x9e0c,	// (0x00049a8e) cell_tport_appsw_pane_cp02_ParamLimits

0x9e0c,	// (0x00049a8e) cell_tport_appsw_pane_cp02

0x9e20,	// (0x00049aa2) cell_tport_appsw_pane_cp03_ParamLimits

0x9e20,	// (0x00049aa2) cell_tport_appsw_pane_cp03

0xaaa2,	// (0x0004a724) phob2_contact_card_pane

0xaaa2,	// (0x0004a724) phob2_listscroll_pane

0xd5d9,	// (0x0004d25b) phob2_list_pane

0xd5e1,	// (0x0004d263) scroll_pane_cp034

0xa9a4,	// (0x0004a626) phob2_cc_data_pane_ParamLimits

0xa9a4,	// (0x0004a626) phob2_cc_data_pane

0xa9c5,	// (0x0004a647) phob2_cc_listscroll_pane_ParamLimits

0xa9c5,	// (0x0004a647) phob2_cc_listscroll_pane

0xa9e7,	// (0x0004a669) list_double_large_graphic_phob2_pane_ParamLimits

0xa9e7,	// (0x0004a669) list_double_large_graphic_phob2_pane

0xa9fc,	// (0x0004a67e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa9fc,	// (0x0004a67e) list_double_large_graphic_phob2_pane_g1

0x15f4,	// (0x00041276) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x15f4,	// (0x00041276) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe79,	// (0x0004fafb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe79,	// (0x0004fafb) list_double_large_graphic_phob2_pane_g

0x1600,	// (0x00041282) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1600,	// (0x00041282) list_double_large_graphic_phob2_pane_t1

0x1615,	// (0x00041297) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1615,	// (0x00041297) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe7e,	// (0x0004fb00) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe7e,	// (0x0004fb00) list_double_large_graphic_phob2_pane_t

0xaaa2,	// (0x0004a724) list_highlight_pane_cp024

0xd5e9,	// (0x0004d26b) phob2_cc_button_pane

0xaa09,	// (0x0004a68b) phob2_cc_data_pane_g1_ParamLimits

0xaa09,	// (0x0004a68b) phob2_cc_data_pane_g1

0xaa1f,	// (0x0004a6a1) phob2_cc_data_pane_g2_ParamLimits

0xaa1f,	// (0x0004a6a1) phob2_cc_data_pane_g2

0x0001,

0xfe83,	// (0x0004fb05) phob2_cc_data_pane_g_ParamLimits

0xfe83,	// (0x0004fb05) phob2_cc_data_pane_g

0xaa33,	// (0x0004a6b5) phob2_cc_data_pane_t1_ParamLimits

0xaa33,	// (0x0004a6b5) phob2_cc_data_pane_t1

0xaa4d,	// (0x0004a6cf) phob2_cc_data_pane_t2_ParamLimits

0xaa4d,	// (0x0004a6cf) phob2_cc_data_pane_t2

0xaa67,	// (0x0004a6e9) phob2_cc_data_pane_t3_ParamLimits

0xaa67,	// (0x0004a6e9) phob2_cc_data_pane_t3

0x0002,

0xfe88,	// (0x0004fb0a) phob2_cc_data_pane_t_ParamLimits

0xfe88,	// (0x0004fb0a) phob2_cc_data_pane_t

0xd5f1,	// (0x0004d273) phob2_cc_list_pane_ParamLimits

0xd5f1,	// (0x0004d273) phob2_cc_list_pane

0xba39,	// (0x0004b6bb) scroll_pane_cp035_ParamLimits

0xba39,	// (0x0004b6bb) scroll_pane_cp035

0xefa9,	// (0x0004ec2b) bg_button_pane_cp033

0xd5fd,	// (0x0004d27f) phob2_cc_button_pane_g1

0xd609,	// (0x0004d28b) phob2_cc_button_pane_t1

0xd61e,	// (0x0004d2a0) phob2_cc_button_pane_t2

0x0001,

0xfe8f,	// (0x0004fb11) phob2_cc_button_pane_t

0xaa81,	// (0x0004a703) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa81,	// (0x0004a703) list_double_large_graphic_phob2_cc_pane

0xaa96,	// (0x0004a718) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa96,	// (0x0004a718) list_double_large_graphic_phob2_cc_pane_g1

0x1627,	// (0x000412a9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1627,	// (0x000412a9) list_double_large_graphic_phob2_cc_pane_g2

0x1633,	// (0x000412b5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1633,	// (0x000412b5) list_double_large_graphic_phob2_cc_pane_g3

0x163f,	// (0x000412c1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x163f,	// (0x000412c1) list_double_large_graphic_phob2_cc_pane_g4

0x164b,	// (0x000412cd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x164b,	// (0x000412cd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe94,	// (0x0004fb16) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe94,	// (0x0004fb16) list_double_large_graphic_phob2_cc_pane_g

0x1657,	// (0x000412d9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1657,	// (0x000412d9) list_double_large_graphic_phob2_cc_pane_t1

0x1680,	// (0x00041302) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1680,	// (0x00041302) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe9f,	// (0x0004fb21) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe9f,	// (0x0004fb21) list_double_large_graphic_phob2_cc_pane_t

0xd630,	// (0x0004d2b2) list_highlight_pane_cp025_ParamLimits

0xd630,	// (0x0004d2b2) list_highlight_pane_cp025

0xefa9,	// (0x0004ec2b) bg_button_pane_cp033_ParamLimits

0xd5fd,	// (0x0004d27f) phob2_cc_button_pane_g1_ParamLimits

0xd609,	// (0x0004d28b) phob2_cc_button_pane_t1_ParamLimits

0xd61e,	// (0x0004d2a0) phob2_cc_button_pane_t2_ParamLimits

0xfe8f,	// (0x0004fb11) phob2_cc_button_pane_t_ParamLimits

0x18d0,	// (0x00041552) popup_wgtman_window

0xb820,	// (0x0004b4a2) scroll_pane_cp038

0xa5dc,	// (0x0004a25e) wgtman_btn_pane_cp_01_ParamLimits

0xa5dc,	// (0x0004a25e) wgtman_btn_pane_cp_01

0xd63e,	// (0x0004d2c0) wgtman_content_pane

0xd647,	// (0x0004d2c9) wgtman_heading_pane

0xaaa2,	// (0x0004a724) bg_heading_pane_cp02

0xd650,	// (0x0004d2d2) wgtman_heading_pane_g1

0xd658,	// (0x0004d2da) wgtman_heading_pane_t1

0xd666,	// (0x0004d2e8) scroll_pane_cp036

0xd66e,	// (0x0004d2f0) wgtman_list_pane

0xc840,	// (0x0004c4c2) wgtman_list_pane_t1_ParamLimits

0xc840,	// (0x0004c4c2) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
