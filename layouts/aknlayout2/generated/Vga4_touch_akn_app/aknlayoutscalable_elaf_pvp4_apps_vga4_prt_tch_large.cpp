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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00060abc };

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
0x5cff,	// (0x000667bb) Screen

0x5d0b,	// (0x000667c7) application_window

0x5d4b,	// (0x00066807) area_bottom_pane_ParamLimits

0x5d4b,	// (0x00066807) area_bottom_pane

0x5d80,	// (0x0006683c) area_top_pane_ParamLimits

0x5d80,	// (0x0006683c) area_top_pane

0x02a9,	// (0x00060d65) call_video_uplink_pane_ParamLimits

0x02a9,	// (0x00060d65) call_video_uplink_pane

0x5e0e,	// (0x000668ca) main_pane_ParamLimits

0x5e0e,	// (0x000668ca) main_pane

0xa7c8,	// (0x0006b284) context_pane

0xa7db,	// (0x0006b297) navi_pane

0xa7ff,	// (0x0006b2bb) popup_cale_events_window_ParamLimits

0xa7ff,	// (0x0006b2bb) popup_cale_events_window

0xa817,	// (0x0006b2d3) popup_mup_playback_window

0xa81f,	// (0x0006b2db) signal_pane

0x0a2c,	// (0x000614e8) main_browser_pane

0x855f,	// (0x0006901b) main_burst_pane

0xa61b,	// (0x0006b0d7) main_calc_pane

0x855f,	// (0x0006901b) main_cale_day_pane

0x0a2c,	// (0x000614e8) main_cale_month_pane

0x855f,	// (0x0006901b) main_cale_week_pane

0x855f,	// (0x0006901b) main_call_pane

0x06da,	// (0x00061196) main_call_poc_pane

0x855f,	// (0x0006901b) main_camera_pane

0x855f,	// (0x0006901b) main_chi_dic_pane

0x8127,	// (0x00068be3) main_clock_pane

0x06da,	// (0x00061196) main_fmradio_pane

0x855f,	// (0x0006901b) main_graph_messa_pane

0x06da,	// (0x00061196) main_help_pane

0x0a2c,	// (0x000614e8) main_im_pane

0x0935,	// (0x000613f1) main_image_pane_ParamLimits

0x0935,	// (0x000613f1) main_image_pane

0x06da,	// (0x00061196) main_location2_pane

0x855f,	// (0x0006901b) main_location_pane

0x06da,	// (0x00061196) main_messa_pane

0x06da,	// (0x00061196) main_mp2_pane

0x855f,	// (0x0006901b) main_mp_pane

0x06da,	// (0x00061196) main_msg_pane

0x06da,	// (0x00061196) main_mup_eq_pane

0x06da,	// (0x00061196) main_mup_pane

0x855f,	// (0x0006901b) main_notes_pane

0x06da,	// (0x00061196) main_pec_pane

0x06da,	// (0x00061196) main_phob_pane

0x06da,	// (0x00061196) main_pinb_pane

0x06da,	// (0x00061196) main_postcard_pane

0x06da,	// (0x00061196) main_qdial_pane

0x855f,	// (0x0006901b) main_skin_pane

0x06da,	// (0x00061196) main_smil2_pane

0x855f,	// (0x0006901b) main_smil_pane

0x855f,	// (0x0006901b) main_video_pane

0x855f,	// (0x0006901b) main_video_tele_pane

0x0935,	// (0x000613f1) main_viewer_pane_ParamLimits

0x0935,	// (0x000613f1) main_viewer_pane

0x855f,	// (0x0006901b) main_vorec_pane

0xa677,	// (0x0006b133) popup_blid_sat_info_window_ParamLimits

0xa677,	// (0x0006b133) popup_blid_sat_info_window

0xa69d,	// (0x0006b159) popup_dyc_status_message_window_ParamLimits

0xa69d,	// (0x0006b159) popup_dyc_status_message_window

0xa6ad,	// (0x0006b169) popup_grid_large_graphic_window_ParamLimits

0xa6ad,	// (0x0006b169) popup_grid_large_graphic_window

0xa742,	// (0x0006b1fe) popup_loc_request_window_ParamLimits

0xa742,	// (0x0006b1fe) popup_loc_request_window

0xa79c,	// (0x0006b258) popup_wml_address_window_ParamLimits

0xa79c,	// (0x0006b258) popup_wml_address_window

0xa4ba,	// (0x0006af76) call_muted_g1

0x9202,	// (0x00069cbe) popup_call_audio_conf_window_ParamLimits

0x9202,	// (0x00069cbe) popup_call_audio_conf_window

0xa4ca,	// (0x0006af86) popup_call_audio_first_window_ParamLimits

0xa4ca,	// (0x0006af86) popup_call_audio_first_window

0xa50a,	// (0x0006afc6) popup_call_audio_in_window_ParamLimits

0xa50a,	// (0x0006afc6) popup_call_audio_in_window

0xa52e,	// (0x0006afea) popup_call_audio_out_window_ParamLimits

0xa52e,	// (0x0006afea) popup_call_audio_out_window

0xa550,	// (0x0006b00c) popup_call_audio_second_window_ParamLimits

0xa550,	// (0x0006b00c) popup_call_audio_second_window

0xa580,	// (0x0006b03c) popup_call_audio_wait_window_ParamLimits

0xa580,	// (0x0006b03c) popup_call_audio_wait_window

0xa5a1,	// (0x0006b05d) popup_number_entry_window_ParamLimits

0xa5a1,	// (0x0006b05d) popup_number_entry_window

0x02c7,	// (0x00060d83) bg_popup_call_pane_cp05_ParamLimits

0x02c7,	// (0x00060d83) bg_popup_call_pane_cp05

0x02e7,	// (0x00060da3) popup_number_entry_window_t1

0x02fa,	// (0x00060db6) popup_number_entry_window_t2

0x030c,	// (0x00060dc8) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0006fbeb) popup_number_entry_window_t

0x031e,	// (0x00060dda) text_title_cp2

0x0331,	// (0x00060ded) bg_popup_call_pane_cp_ParamLimits

0x0331,	// (0x00060ded) bg_popup_call_pane_cp

0x033f,	// (0x00060dfb) call_thumbnail_pane

0x0347,	// (0x00060e03) popup_call_audio_in_window_g1_ParamLimits

0x0347,	// (0x00060e03) popup_call_audio_in_window_g1

0x0353,	// (0x00060e0f) popup_call_audio_in_window_g2_ParamLimits

0x0353,	// (0x00060e0f) popup_call_audio_in_window_g2

0x035f,	// (0x00060e1b) popup_call_audio_in_window_g3_ParamLimits

0x035f,	// (0x00060e1b) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0006fbf4) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0006fbf4) popup_call_audio_in_window_g

0x036b,	// (0x00060e27) popup_call_audio_in_window_t1_ParamLimits

0x036b,	// (0x00060e27) popup_call_audio_in_window_t1

0x0387,	// (0x00060e43) popup_call_audio_in_window_t2_ParamLimits

0x0387,	// (0x00060e43) popup_call_audio_in_window_t2

0x03a3,	// (0x00060e5f) popup_call_audio_in_window_t3_ParamLimits

0x03a3,	// (0x00060e5f) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0006fbfb) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0006fbfb) popup_call_audio_in_window_t

0x0331,	// (0x00060ded) bg_popup_call_pane_cp01_ParamLimits

0x0331,	// (0x00060ded) bg_popup_call_pane_cp01

0x033f,	// (0x00060dfb) call_thumbnail_pane_cp02

0x03b6,	// (0x00060e72) call_type_pane_cp022

0x03be,	// (0x00060e7a) popup_call_audio_out_window_g1_ParamLimits

0x03be,	// (0x00060e7a) popup_call_audio_out_window_g1

0x03d0,	// (0x00060e8c) popup_call_audio_out_window_g2_ParamLimits

0x03d0,	// (0x00060e8c) popup_call_audio_out_window_g2

0x03dc,	// (0x00060e98) popup_call_audio_out_window_g3_ParamLimits

0x03dc,	// (0x00060e98) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0006fc02) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0006fc02) popup_call_audio_out_window_g

0x03ee,	// (0x00060eaa) popup_call_audio_out_window_t1_ParamLimits

0x03ee,	// (0x00060eaa) popup_call_audio_out_window_t1

0x0406,	// (0x00060ec2) popup_call_audio_out_window_t2_ParamLimits

0x0406,	// (0x00060ec2) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0006fc09) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0006fc09) popup_call_audio_out_window_t

0x041b,	// (0x00060ed7) bg_popup_call_pane_ParamLimits

0x041b,	// (0x00060ed7) bg_popup_call_pane

0x6004,	// (0x00066ac0) call_thumbnail_pane_cp_ParamLimits

0x6004,	// (0x00066ac0) call_thumbnail_pane_cp

0x049f,	// (0x00060f5b) call_type_pane_cp01_ParamLimits

0x049f,	// (0x00060f5b) call_type_pane_cp01

0x04e3,	// (0x00060f9f) popup_call_audio_first_window_g1_ParamLimits

0x04e3,	// (0x00060f9f) popup_call_audio_first_window_g1

0x052f,	// (0x00060feb) popup_call_audio_first_window_g2_ParamLimits

0x052f,	// (0x00060feb) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0006fc0e) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0006fc0e) popup_call_audio_first_window_g

0x0573,	// (0x0006102f) popup_call_audio_first_window_t1_ParamLimits

0x0573,	// (0x0006102f) popup_call_audio_first_window_t1

0x061f,	// (0x000610db) popup_call_audio_first_window_t4_ParamLimits

0x061f,	// (0x000610db) popup_call_audio_first_window_t4

0x06ab,	// (0x00061167) popup_call_audio_first_window_t5_ParamLimits

0x06ab,	// (0x00061167) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0006fc13) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0006fc13) popup_call_audio_first_window_t

0x06da,	// (0x00061196) bg_popup_call_pane_cp02

0x06e4,	// (0x000611a0) call_type_pane_cp023

0x06ec,	// (0x000611a8) popup_call_audio_wait_window_g1

0x06f4,	// (0x000611b0) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006fc1a) popup_call_audio_wait_window_g

0x06fc,	// (0x000611b8) popup_call_audio_wait_window_t3

0x070a,	// (0x000611c6) bg_popup_call_pane_cp03_ParamLimits

0x070a,	// (0x000611c6) bg_popup_call_pane_cp03

0x076a,	// (0x00061226) call_thumbnail_pane_cp011_ParamLimits

0x076a,	// (0x00061226) call_thumbnail_pane_cp011

0x0776,	// (0x00061232) call_type_pane_cp034_ParamLimits

0x0776,	// (0x00061232) call_type_pane_cp034

0x07b2,	// (0x0006126e) popup_call_audio_second_window_g1_ParamLimits

0x07b2,	// (0x0006126e) popup_call_audio_second_window_g1

0x07ee,	// (0x000612aa) popup_call_audio_second_window_g2_ParamLimits

0x07ee,	// (0x000612aa) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0006fc1f) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0006fc1f) popup_call_audio_second_window_g

0x082a,	// (0x000612e6) popup_call_audio_second_window_t1_ParamLimits

0x082a,	// (0x000612e6) popup_call_audio_second_window_t1

0x08ab,	// (0x00061367) popup_call_audio_second_window_t2_ParamLimits

0x08ab,	// (0x00061367) popup_call_audio_second_window_t2

0x08e1,	// (0x0006139d) popup_call_audio_second_window_t3_ParamLimits

0x08e1,	// (0x0006139d) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0006fc24) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0006fc24) popup_call_audio_second_window_t

0x06da,	// (0x00061196) bg_popup_call_pane_cp04

0x0917,	// (0x000613d3) list_conf_pane

0x091f,	// (0x000613db) popup_call_audio_conf_window_t1

0x092d,	// (0x000613e9) call_thumbnail_pane_g1

0x0935,	// (0x000613f1) bg_pinb_pane_ParamLimits

0x0935,	// (0x000613f1) bg_pinb_pane

0x0943,	// (0x000613ff) find_pinb_pane

0x094c,	// (0x00061408) listscroll_pinb_pane_ParamLimits

0x094c,	// (0x00061408) listscroll_pinb_pane

0x095b,	// (0x00061417) pinb_bg_pane_g1

0x6028,	// (0x00066ae4) pinb_bg_pane_g2

0x6034,	// (0x00066af0) pinb_bg_pane_g3

0x6040,	// (0x00066afc) pinb_bg_pane_g4

0x604c,	// (0x00066b08) pinb_bg_pane_g5

0x6058,	// (0x00066b14) pinb_bg_pane_g6

0x6063,	// (0x00066b1f) pinb_bg_pane_g7

0x606e,	// (0x00066b2a) pinb_bg_pane_g8

0x6079,	// (0x00066b35) pinb_bg_pane_g9

0x6083,	// (0x00066b3f) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0006fc2b) pinb_bg_pane_g

0x60a0,	// (0x00066b5c) grid_pinb_pane

0x60ab,	// (0x00066b67) list_pinb_pane

0x60b6,	// (0x00066b72) scroll_pane_cp01_ParamLimits

0x60b6,	// (0x00066b72) scroll_pane_cp01

0x0965,	// (0x00061421) find_pinb_pane_g1_ParamLimits

0x0965,	// (0x00061421) find_pinb_pane_g1

0x097d,	// (0x00061439) find_pinb_pane_t1

0x098f,	// (0x0006144b) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0006fc45) find_pinb_pane_t

0x09a4,	// (0x00061460) input_focus_pane_cp01_ParamLimits

0x09a4,	// (0x00061460) input_focus_pane_cp01

0x60c8,	// (0x00066b84) cell_pinb_pane_ParamLimits

0x60c8,	// (0x00066b84) cell_pinb_pane

0x60e8,	// (0x00066ba4) cell_pinb_pane_g1_ParamLimits

0x60e8,	// (0x00066ba4) cell_pinb_pane_g1

0x60fd,	// (0x00066bb9) cell_pinb_pane_g2_ParamLimits

0x60fd,	// (0x00066bb9) cell_pinb_pane_g2

0x09b0,	// (0x0006146c) cell_pinb_pane_g3_ParamLimits

0x09b0,	// (0x0006146c) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0006fc4a) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0006fc4a) cell_pinb_pane_g

0x06da,	// (0x00061196) grid_highlight_pane_cp01

0x6109,	// (0x00066bc5) list_pinb_item_pane_ParamLimits

0x6109,	// (0x00066bc5) list_pinb_item_pane

0x06da,	// (0x00061196) list_highlight_pane_cp02

0x6124,	// (0x00066be0) list_pinb_item_pane_g1_ParamLimits

0x6124,	// (0x00066be0) list_pinb_item_pane_g1

0x6131,	// (0x00066bed) list_pinb_item_pane_g2_ParamLimits

0x6131,	// (0x00066bed) list_pinb_item_pane_g2

0x613d,	// (0x00066bf9) list_pinb_item_pane_g3_ParamLimits

0x613d,	// (0x00066bf9) list_pinb_item_pane_g3

0x614e,	// (0x00066c0a) list_pinb_item_pane_g4_ParamLimits

0x614e,	// (0x00066c0a) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0006fc51) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0006fc51) list_pinb_item_pane_g

0x615a,	// (0x00066c16) list_pinb_item_pane_t1_ParamLimits

0x615a,	// (0x00066c16) list_pinb_item_pane_t1

0x618b,	// (0x00066c47) calc_display_pane

0x61a9,	// (0x00066c65) calc_paper_pane

0x61c5,	// (0x00066c81) grid_calc_pane

0x06da,	// (0x00061196) bg_list_pane_cp01

0x61f1,	// (0x00066cad) clock_g1

0x61f9,	// (0x00066cb5) clock_g2

0x0001,

0xf19e,	// (0x0006fc5a) clock_g

0x6203,	// (0x00066cbf) clock_t1_ParamLimits

0x6203,	// (0x00066cbf) clock_t1

0x6218,	// (0x00066cd4) clock_t2_ParamLimits

0x6218,	// (0x00066cd4) clock_t2

0x622a,	// (0x00066ce6) clock_t3_ParamLimits

0x622a,	// (0x00066ce6) clock_t3

0x623c,	// (0x00066cf8) clock_t4_ParamLimits

0x623c,	// (0x00066cf8) clock_t4

0x624e,	// (0x00066d0a) clock_t5_ParamLimits

0x624e,	// (0x00066d0a) clock_t5

0x6263,	// (0x00066d1f) clock_t6_ParamLimits

0x6263,	// (0x00066d1f) clock_t6

0x6275,	// (0x00066d31) clock_t7_ParamLimits

0x6275,	// (0x00066d31) clock_t7

0x6287,	// (0x00066d43) clock_t8_ParamLimits

0x6287,	// (0x00066d43) clock_t8

0x629d,	// (0x00066d59) clock_t9_ParamLimits

0x629d,	// (0x00066d59) clock_t9

0x0008,

0xf1a3,	// (0x0006fc5f) clock_t_ParamLimits

0xf1a3,	// (0x0006fc5f) clock_t

0x09c4,	// (0x00061480) popup_clock_analogue_window_cp02

0x09c4,	// (0x00061480) popup_clock_digital_window_cp01

0x09cc,	// (0x00061488) listscroll_help_pane

0x06da,	// (0x00061196) phob_pre_status_pane

0x09d6,	// (0x00061492) grid_qdial_pane

0x06da,	// (0x00061196) listscroll_mce_pane

0x09e0,	// (0x0006149c) bg_notes_pane

0x09ea,	// (0x000614a6) list_notes_pane

0x62b3,	// (0x00066d6f) scroll_pane_cp06

0x09f4,	// (0x000614b0) bg_calc_paper_pane

0x62be,	// (0x00066d7a) list_calc_pane

0x0a2c,	// (0x000614e8) bg_calc_display_pane

0x62d8,	// (0x00066d94) calc_display_pane_t1

0x62ed,	// (0x00066da9) calc_display_pane_t2

0x6302,	// (0x00066dbe) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0006fc72) calc_display_pane_t

0x6314,	// (0x00066dd0) cell_calc_pane_ParamLimits

0x6314,	// (0x00066dd0) cell_calc_pane

0x0a4a,	// (0x00061506) bg_calc_paper_pane_g1

0x0a62,	// (0x0006151e) bg_calc_paper_pane_g2

0x0a56,	// (0x00061512) bg_calc_paper_pane_g3

0x0a7a,	// (0x00061536) bg_calc_paper_pane_g4

0x0a6e,	// (0x0006152a) bg_calc_paper_pane_g5

0x6343,	// (0x00066dff) bg_calc_paper_pane_g6

0x6354,	// (0x00066e10) bg_calc_paper_pane_g7

0x6365,	// (0x00066e21) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0006fc79) bg_calc_paper_pane_g

0x6376,	// (0x00066e32) calc_bg_paper_pane_g9

0x6387,	// (0x00066e43) list_calc_item_pane_ParamLimits

0x6387,	// (0x00066e43) list_calc_item_pane

0x0a86,	// (0x00061542) list_calc_item_pane_g1

0x63ab,	// (0x00066e67) list_calc_item_pane_t1_ParamLimits

0x63ab,	// (0x00066e67) list_calc_item_pane_t1

0x63bd,	// (0x00066e79) list_calc_item_pane_t2_ParamLimits

0x63bd,	// (0x00066e79) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0006fc8a) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0006fc8a) list_calc_item_pane_t

0x0aa5,	// (0x00061561) cell_calc_pane_g1

0x0aaf,	// (0x0006156b) grid_highlight_pane_cp02

0x0ae4,	// (0x000615a0) bg_calc_display_pane_g1

0x63ed,	// (0x00066ea9) bg_calc_display_pane_g2

0x0ad1,	// (0x0006158d) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0006fc94) bg_calc_display_pane_g

0x63f7,	// (0x00066eb3) cell_qdial_pane_ParamLimits

0x63f7,	// (0x00066eb3) cell_qdial_pane

0x640d,	// (0x00066ec9) cell_qdial_pane_g1_ParamLimits

0x640d,	// (0x00066ec9) cell_qdial_pane_g1

0x641a,	// (0x00066ed6) cell_qdial_pane_g2_ParamLimits

0x641a,	// (0x00066ed6) cell_qdial_pane_g2

0x0aed,	// (0x000615a9) cell_qdial_pane_g3_ParamLimits

0x0aed,	// (0x000615a9) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0006fc9b) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0006fc9b) cell_qdial_pane_g

0x6438,	// (0x00066ef4) cell_qdial_pane_t1_ParamLimits

0x6438,	// (0x00066ef4) cell_qdial_pane_t1

0x6450,	// (0x00066f0c) cell_qdial_pane_t2_ParamLimits

0x6450,	// (0x00066f0c) cell_qdial_pane_t2

0x6463,	// (0x00066f1f) cell_qdial_pane_t3_ParamLimits

0x6463,	// (0x00066f1f) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0006fca4) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0006fca4) cell_qdial_pane_t

0x06da,	// (0x00061196) grid_highlight_pane_cp04

0x0af9,	// (0x000615b5) thumbnail_qdial_pane_ParamLimits

0x0af9,	// (0x000615b5) thumbnail_qdial_pane

0x0b55,	// (0x00061611) list_help_pane

0x0b5e,	// (0x0006161a) scroll_pane_cp02

0x6476,	// (0x00066f32) help_list_pane_t1_ParamLimits

0x6476,	// (0x00066f32) help_list_pane_t1

0x64a0,	// (0x00066f5c) bg_notes_pane_g2

0x64a8,	// (0x00066f64) bg_notes_pane_g3

0x64b0,	// (0x00066f6c) notes_bg_pane_g1

0x64b8,	// (0x00066f74) notes_bg_pane_g4

0x64c0,	// (0x00066f7c) notes_bg_pane_g5

0x64c8,	// (0x00066f84) notes_bg_pane_g6

0x64d0,	// (0x00066f8c) notes_bg_pane_g7

0x64d8,	// (0x00066f94) notes_bg_pane_g8

0x64e0,	// (0x00066f9c) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0006fcc2) notes_bg_pane_g

0x64e8,	// (0x00066fa4) list_notes_text_pane_ParamLimits

0x64e8,	// (0x00066fa4) list_notes_text_pane

0x0baf,	// (0x0006166b) list_notes_text_pane_g1

0x4d0c,	// (0x000657c8) list_notes_text_pane_t1

0x0a2c,	// (0x000614e8) listscroll_cale_week_pane

0x6522,	// (0x00066fde) bg_cale_heading_pane

0x0bc9,	// (0x00061685) bg_cale_pane_cp01

0x6536,	// (0x00066ff2) cale_week_corner_pane

0x654c,	// (0x00067008) cale_week_day_heading_pane

0x6560,	// (0x0006701c) cale_week_scroll_pane_g1

0x6571,	// (0x0006702d) cale_week_scroll_pane_g2

0x6582,	// (0x0006703e) cale_week_scroll_pane_g3

0x6593,	// (0x0006704f) cale_week_scroll_pane_g4

0x65a4,	// (0x00067060) cale_week_scroll_pane_g5

0x65b5,	// (0x00067071) cale_week_scroll_pane_g6

0x65c8,	// (0x00067084) cale_week_scroll_pane_g7

0x65db,	// (0x00067097) cale_week_scroll_pane_g8

0x65ee,	// (0x000670aa) cale_week_scroll_pane_g9

0x65ff,	// (0x000670bb) cale_week_scroll_pane_g10

0x6610,	// (0x000670cc) cale_week_scroll_pane_g11

0x6621,	// (0x000670dd) cale_week_scroll_pane_g12

0x6632,	// (0x000670ee) cale_week_scroll_pane_g13

0x6643,	// (0x000670ff) cale_week_scroll_pane_g14

0x6654,	// (0x00067110) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0006fcd1) cale_week_scroll_pane_g

0x6665,	// (0x00067121) cale_week_time_pane

0x6678,	// (0x00067134) grid_cale_week_pane

0x668d,	// (0x00067149) scroll_pane_cp08

0x66a7,	// (0x00067163) cell_cale_week_pane_ParamLimits

0x66a7,	// (0x00067163) cell_cale_week_pane

0x66e5,	// (0x000671a1) cale_week_day_heading_pane_t1

0x6712,	// (0x000671ce) cale_week_day_heading_pane_t2

0x673f,	// (0x000671fb) cale_week_day_heading_pane_t3

0x676c,	// (0x00067228) cale_week_day_heading_pane_t4

0x6799,	// (0x00067255) cale_week_day_heading_pane_t5

0x67c6,	// (0x00067282) cale_week_day_heading_pane_t6

0x67f3,	// (0x000672af) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0006fcf0) cale_week_day_heading_pane_t

0x0bf4,	// (0x000616b0) bg_cale_side_pane

0x6820,	// (0x000672dc) cale_week_time_pane_t1

0x684c,	// (0x00067308) cale_week_time_pane_t2

0x6878,	// (0x00067334) cale_week_time_pane_t3

0x68a4,	// (0x00067360) cale_week_time_pane_t4

0x68d0,	// (0x0006738c) cale_week_time_pane_t5

0x68fc,	// (0x000673b8) cale_week_time_pane_t6

0x6928,	// (0x000673e4) cale_week_time_pane_t7

0x6954,	// (0x00067410) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0006fcff) cale_week_time_pane_t

0x6980,	// (0x0006743c) cell_cale_week_pane_g2

0x6999,	// (0x00067455) cell_cale_week_pane_g3_ParamLimits

0x6999,	// (0x00067455) cell_cale_week_pane_g3

0x0c02,	// (0x000616be) grid_highlight_pane_cp07

0x0c0a,	// (0x000616c6) listscroll_gms_pane

0x0c14,	// (0x000616d0) grid_gms_pane

0x0c1d,	// (0x000616d9) listscroll_gms_pane_g1

0x0c25,	// (0x000616e1) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0006fd10) listscroll_gms_pane_g

0x69b1,	// (0x0006746d) scroll_pane_cp010

0x69bc,	// (0x00067478) cell_gms_pane_ParamLimits

0x69bc,	// (0x00067478) cell_gms_pane

0x69cf,	// (0x0006748b) cell_gms_pane_g1

0x0c2d,	// (0x000616e9) cell_gms_pane_g2

0x0c35,	// (0x000616f1) cell_gms_pane_g3

0x0c3e,	// (0x000616fa) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0006fd15) cell_gms_pane_g

0x0c47,	// (0x00061703) grid_highlight_pane_cp09

0xa442,	// (0x0006aefe) phob_pre_status_pane_g1

0xa44a,	// (0x0006af06) phob_pre_status_pane_g2

0xa452,	// (0x0006af0e) phob_pre_status_pane_g3

0xa45a,	// (0x0006af16) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00070104) phob_pre_status_pane_g

0xa46a,	// (0x0006af26) phob_pre_status_pane_t1

0xa47a,	// (0x0006af36) phob_pre_status_pane_t2

0xa48a,	// (0x0006af46) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0007010f) phob_pre_status_pane_t

0x06da,	// (0x00061196) bg_list_pane_cp05

0x69df,	// (0x0006749b) grid_vorec_pane

0x69e9,	// (0x000674a5) vorec_t1

0x69f7,	// (0x000674b3) vorec_t2

0x6a05,	// (0x000674c1) vorec_t3

0x6a13,	// (0x000674cf) vorec_t4

0x6a21,	// (0x000674dd) vorec_t5

0x6a2f,	// (0x000674eb) vorec_t6

0x0006,

0xf262,	// (0x0006fd1e) vorec_t

0x6a4b,	// (0x00067507) wait_bar_pane_cp01

0x6a53,	// (0x0006750f) cell_vorec_pane_ParamLimits

0x6a53,	// (0x0006750f) cell_vorec_pane

0x0cb9,	// (0x00061775) cell_vorec_pane_g1

0x06da,	// (0x00061196) grid_highlight_pane_cp05

0x6a78,	// (0x00067534) cams_zoom_pane

0x6a84,	// (0x00067540) image_vga_pane

0x6a93,	// (0x0006754f) main_camera_pane_g1

0x6aa1,	// (0x0006755d) main_camera_pane_g2

0x6aad,	// (0x00067569) main_camera_pane_g3

0x6abb,	// (0x00067577) main_camera_pane_g4

0x6ac9,	// (0x00067585) main_camera_pane_g5

0x6ad7,	// (0x00067593) main_camera_pane_g6

0x6ae5,	// (0x000675a1) main_camera_pane_g7

0x0007,

0xf271,	// (0x0006fd2d) main_camera_pane_g

0x6af3,	// (0x000675af) main_camera_pane_t1

0x6b05,	// (0x000675c1) main_camera_pane_t2

0x0001,

0xf282,	// (0x0006fd3e) main_camera_pane_t

0x6b28,	// (0x000675e4) cams_zoom_pane_cp_ParamLimits

0x6b28,	// (0x000675e4) cams_zoom_pane_cp

0x6b4c,	// (0x00067608) image_cif_pane_ParamLimits

0x6b4c,	// (0x00067608) image_cif_pane

0x6b6a,	// (0x00067626) image_subqcif_pane

0x6b74,	// (0x00067630) main_video_pane_g1_ParamLimits

0x6b74,	// (0x00067630) main_video_pane_g1

0x6b94,	// (0x00067650) main_video_pane_g2_ParamLimits

0x6b94,	// (0x00067650) main_video_pane_g2

0x6bc4,	// (0x00067680) main_video_pane_g3_ParamLimits

0x6bc4,	// (0x00067680) main_video_pane_g3

0x6bed,	// (0x000676a9) main_video_pane_g4_ParamLimits

0x6bed,	// (0x000676a9) main_video_pane_g4

0x6c16,	// (0x000676d2) main_video_pane_g5_ParamLimits

0x6c16,	// (0x000676d2) main_video_pane_g5

0x0ccf,	// (0x0006178b) main_video_pane_g6_ParamLimits

0x0ccf,	// (0x0006178b) main_video_pane_g6

0x0006,

0xf287,	// (0x0006fd43) main_video_pane_g_ParamLimits

0xf287,	// (0x0006fd43) main_video_pane_g

0x6c38,	// (0x000676f4) main_video_pane_t1_ParamLimits

0x6c38,	// (0x000676f4) main_video_pane_t1

0x0ce9,	// (0x000617a5) cams_zoom_pane_g1

0x0cf2,	// (0x000617ae) cams_zoom_pane_g2

0x0cfb,	// (0x000617b7) cams_zoom_pane_g3

0x0d04,	// (0x000617c0) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0006fd52) cams_zoom_pane_g

0x6c82,	// (0x0006773e) grid_cams_pane

0x6c90,	// (0x0006774c) linegrid_cams_pane

0x6c9e,	// (0x0006775a) cell_cams_pane_ParamLimits

0x6c9e,	// (0x0006775a) cell_cams_pane

0x0d0d,	// (0x000617c9) cams_burst_image_pane

0x0d15,	// (0x000617d1) cell_cams_pane_g1

0x06da,	// (0x00061196) grid_highlight_pane_cp03

0x0aa5,	// (0x00061561) mp_bg_pane_g1

0x06da,	// (0x00061196) bg_list_pane_cp03

0xa379,	// (0x0006ae35) bg_mp_pane

0xa381,	// (0x0006ae3d) grid_mp_pane

0xa389,	// (0x0006ae45) media_player_g1

0xa393,	// (0x0006ae4f) media_player_t1

0xa3a1,	// (0x0006ae5d) media_player_t2

0xa3af,	// (0x0006ae6b) media_player_t3

0xa3bd,	// (0x0006ae79) media_player_t4

0xa3cb,	// (0x0006ae87) media_player_t5

0xa3d9,	// (0x0006ae95) media_player_t6

0xa3e7,	// (0x0006aea3) media_player_t7

0x0006,

0xf632,	// (0x000700ee) media_player_t

0xa3f5,	// (0x0006aeb1) wait_bar_pane_cp02

0xf617,	// (0x000700d3) main_usb_pane_t

0xa439,	// (0x0006aef5) cell_mp_pane

0x0aa5,	// (0x00061561) cell_mp_pane_g1

0x06da,	// (0x00061196) grid_highlight_pane_cp06

0x0d1d,	// (0x000617d9) grid_skin_colour_pane

0x0d25,	// (0x000617e1) list_highlight_pane_cp03

0x6cb3,	// (0x0006776f) skin_g1

0x0d2d,	// (0x000617e9) skin_t1

0x0d3c,	// (0x000617f8) skin_t2

0x0001,

0xf2cb,	// (0x0006fd87) skin_t

0x6cbd,	// (0x00067779) cell_skin_colour_pane_ParamLimits

0x6cbd,	// (0x00067779) cell_skin_colour_pane

0x0d4a,	// (0x00061806) cell_skin_colour_pane_g1

0x6d0c,	// (0x000677c8) call_video_g1_ParamLimits

0x6d0c,	// (0x000677c8) call_video_g1

0x6d1c,	// (0x000677d8) call_video_g2_ParamLimits

0x6d1c,	// (0x000677d8) call_video_g2

0x0001,

0xf2d0,	// (0x0006fd8c) call_video_g_ParamLimits

0xf2d0,	// (0x0006fd8c) call_video_g

0x6d54,	// (0x00067810) call_video_uplink_pane_cp1_ParamLimits

0x6d54,	// (0x00067810) call_video_uplink_pane_cp1

0x0d64,	// (0x00061820) call_video_uplink_pane_cp2

0x6e02,	// (0x000678be) video_down_crop_pane_ParamLimits

0x6e02,	// (0x000678be) video_down_crop_pane

0x6eda,	// (0x00067996) video_down_pane_ParamLimits

0x6eda,	// (0x00067996) video_down_pane

0x0d6c,	// (0x00061828) video_down_subqcif_pane_ParamLimits

0x0d6c,	// (0x00061828) video_down_subqcif_pane

0x0d86,	// (0x00061842) video_down_subqcif_pane_cp_ParamLimits

0x0d86,	// (0x00061842) video_down_subqcif_pane_cp

0x0dac,	// (0x00061868) im_reading_pane_ParamLimits

0x0dac,	// (0x00061868) im_reading_pane

0x6fb7,	// (0x00067a73) im_writing_pane_ParamLimits

0x6fb7,	// (0x00067a73) im_writing_pane

0x6fd5,	// (0x00067a91) im_reading_pane_t1

0x0dc6,	// (0x00061882) list_im_pane

0x0dd7,	// (0x00061893) scroll_pane_cp07

0x701d,	// (0x00067ad9) im_writing_pane_t1_ParamLimits

0x701d,	// (0x00067ad9) im_writing_pane_t1

0x0df0,	// (0x000618ac) im_writing_pane_t2_ParamLimits

0x0df0,	// (0x000618ac) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0006fd96) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0006fd96) im_writing_pane_t

0x06da,	// (0x00061196) input_focus_pane_cp04

0x06da,	// (0x00061196) input_focus_pane_cp05

0x702f,	// (0x00067aeb) list_im_single_pane_ParamLimits

0x702f,	// (0x00067aeb) list_im_single_pane

0x704b,	// (0x00067b07) list_single_im_pane_t1

0xa3fd,	// (0x0006aeb9) blid_accuracy_pane

0xa405,	// (0x0006aec1) blid_compass_pane

0xa40f,	// (0x0006aecb) main_location_t1

0xa41d,	// (0x0006aed9) main_location_t2

0xa42b,	// (0x0006aee7) main_location_t3

0x0002,

0xf641,	// (0x000700fd) main_location_t

0x06da,	// (0x00061196) aid_levels_location

0x0aa5,	// (0x00061561) blid_accuracy_pane_g1

0x0aa5,	// (0x00061561) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0006fdf8) blid_accuracy_pane_g

0x0e38,	// (0x000618f4) wml_content_pane

0x0e76,	// (0x00061932) wml_button_pane_ParamLimits

0x0e76,	// (0x00061932) wml_button_pane

0x705a,	// (0x00067b16) wml_list_single_large_pane_ParamLimits

0x705a,	// (0x00067b16) wml_list_single_large_pane

0x707c,	// (0x00067b38) wml_list_single_medium_pane_ParamLimits

0x707c,	// (0x00067b38) wml_list_single_medium_pane

0x70a2,	// (0x00067b5e) wml_list_single_small_pane_ParamLimits

0x70a2,	// (0x00067b5e) wml_list_single_small_pane

0x0e8a,	// (0x00061946) wml_selection_box_pane_ParamLimits

0x0e8a,	// (0x00061946) wml_selection_box_pane

0x0e9d,	// (0x00061959) wml_list_single_pane_t1

0x0eac,	// (0x00061968) wml_list_single_medium_pane_t1

0x0ebb,	// (0x00061977) wml_list_single_large_pane_t1

0x0eca,	// (0x00061986) input_focus_pane_cp02_ParamLimits

0x0eca,	// (0x00061986) input_focus_pane_cp02

0x0edd,	// (0x00061999) wml_selection_box_pane_g1

0x0ee6,	// (0x000619a2) wml_selection_box_pane_t1_ParamLimits

0x0ee6,	// (0x000619a2) wml_selection_box_pane_t1

0x0935,	// (0x000613f1) bg_wml_button_pane_ParamLimits

0x0935,	// (0x000613f1) bg_wml_button_pane

0x0efe,	// (0x000619ba) wml_button_pane_g1

0x0f06,	// (0x000619c2) wml_button_pane_t1

0x0efe,	// (0x000619ba) wml_button_bg_pane_g1

0x0f16,	// (0x000619d2) wml_button_bg_pane_g2

0x0f1e,	// (0x000619da) wml_button_bg_pane_g3

0x0f26,	// (0x000619e2) wml_button_bg_pane_g4

0x0f2e,	// (0x000619ea) wml_button_bg_pane_g5

0x0f36,	// (0x000619f2) wml_button_bg_pane_g6

0x0f3e,	// (0x000619fa) wml_button_bg_pane_g7

0x0f46,	// (0x00061a02) wml_button_bg_pane_g8

0x0f4e,	// (0x00061a0a) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0006fd9b) wml_button_bg_pane_g

0x70cd,	// (0x00067b89) bg_list_pane_cp02

0x0f56,	// (0x00061a12) mce_header_pane_ParamLimits

0x0f56,	// (0x00061a12) mce_header_pane

0x0f6c,	// (0x00061a28) mce_icon_pane

0x0f6c,	// (0x00061a28) mce_image_pane

0x0f75,	// (0x00061a31) mce_text_pane_ParamLimits

0x0f75,	// (0x00061a31) mce_text_pane

0x70d7,	// (0x00067b93) scroll_pane_cp03

0x0e6e,	// (0x0006192a) scroll_pane_cp04

0x0f88,	// (0x00061a44) scroll_pane_cp05_ParamLimits

0x0f88,	// (0x00061a44) scroll_pane_cp05

0x70e1,	// (0x00067b9d) mce_header_field_pane_ParamLimits

0x70e1,	// (0x00067b9d) mce_header_field_pane

0x7103,	// (0x00067bbf) mce_header_field_pane_2_ParamLimits

0x7103,	// (0x00067bbf) mce_header_field_pane_2

0x7119,	// (0x00067bd5) mce_header_field_pane_3

0x7121,	// (0x00067bdd) list_single_mce_message_pane_ParamLimits

0x7121,	// (0x00067bdd) list_single_mce_message_pane

0x7140,	// (0x00067bfc) list_single_mce_smart_pane_ParamLimits

0x7140,	// (0x00067bfc) list_single_mce_smart_pane

0x0f94,	// (0x00061a50) input_focus_pane_cp03

0x716a,	// (0x00067c26) list_header_data_pane

0x7172,	// (0x00067c2e) mce_header_field_pane_t1

0x7182,	// (0x00067c3e) list_single_mce_header_pane_ParamLimits

0x7182,	// (0x00067c3e) list_single_mce_header_pane

0x71a0,	// (0x00067c5c) list_single_mce_header_pane_t1

0x71af,	// (0x00067c6b) list_single_mce_message_pane_g1

0x71b7,	// (0x00067c73) list_single_mce_message_pane_t1

0x71e3,	// (0x00067c9f) bg_cale_heading_pane_cp01_ParamLimits

0x71e3,	// (0x00067c9f) bg_cale_heading_pane_cp01

0x7206,	// (0x00067cc2) bg_cale_pane_cp02_ParamLimits

0x7206,	// (0x00067cc2) bg_cale_pane_cp02

0x7229,	// (0x00067ce5) cale_month_corner_pane

0x723f,	// (0x00067cfb) cale_month_day_heading_pane_ParamLimits

0x723f,	// (0x00067cfb) cale_month_day_heading_pane

0x7272,	// (0x00067d2e) cale_month_pane_g1_ParamLimits

0x7272,	// (0x00067d2e) cale_month_pane_g1

0x728e,	// (0x00067d4a) cale_month_pane_g2_ParamLimits

0x728e,	// (0x00067d4a) cale_month_pane_g2

0x72a9,	// (0x00067d65) cale_month_pane_g3_ParamLimits

0x72a9,	// (0x00067d65) cale_month_pane_g3

0x72d5,	// (0x00067d91) cale_month_pane_g4_ParamLimits

0x72d5,	// (0x00067d91) cale_month_pane_g4

0x7301,	// (0x00067dbd) cale_month_pane_g5_ParamLimits

0x7301,	// (0x00067dbd) cale_month_pane_g5

0x732d,	// (0x00067de9) cale_month_pane_g6_ParamLimits

0x732d,	// (0x00067de9) cale_month_pane_g6

0x7369,	// (0x00067e25) cale_month_pane_g7_ParamLimits

0x7369,	// (0x00067e25) cale_month_pane_g7

0x73a5,	// (0x00067e61) cale_month_pane_g8_ParamLimits

0x73a5,	// (0x00067e61) cale_month_pane_g8

0x73e1,	// (0x00067e9d) cale_month_pane_g9_ParamLimits

0x73e1,	// (0x00067e9d) cale_month_pane_g9

0x741b,	// (0x00067ed7) cale_month_pane_g10_ParamLimits

0x741b,	// (0x00067ed7) cale_month_pane_g10

0x7455,	// (0x00067f11) cale_month_pane_g11_ParamLimits

0x7455,	// (0x00067f11) cale_month_pane_g11

0x748f,	// (0x00067f4b) cale_month_pane_g12_ParamLimits

0x748f,	// (0x00067f4b) cale_month_pane_g12

0x74c9,	// (0x00067f85) cale_month_pane_g13_ParamLimits

0x74c9,	// (0x00067f85) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0006fdae) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0006fdae) cale_month_pane_g

0x7515,	// (0x00067fd1) cale_month_week_pane

0x7528,	// (0x00067fe4) grid_cale_month_pane_ParamLimits

0x7528,	// (0x00067fe4) grid_cale_month_pane

0x7556,	// (0x00068012) cale_month_day_heading_pane_t1

0x75b4,	// (0x00068070) cale_month_day_heading_pane_t2

0x7619,	// (0x000680d5) cale_month_day_heading_pane_t3

0x767e,	// (0x0006813a) cale_month_day_heading_pane_t4

0x76e3,	// (0x0006819f) cale_month_day_heading_pane_t5

0x7750,	// (0x0006820c) cale_month_day_heading_pane_t6

0x77c5,	// (0x00068281) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0006fdc9) cale_month_day_heading_pane_t

0x0bf4,	// (0x000616b0) bg_cale_side_pane_cp01

0x783a,	// (0x000682f6) cale_month_week_pane_t1

0x7865,	// (0x00068321) cale_month_week_pane_t2

0x7890,	// (0x0006834c) cale_month_week_pane_t3

0x78bb,	// (0x00068377) cale_month_week_pane_t4

0x78e6,	// (0x000683a2) cale_month_week_pane_t5

0x7911,	// (0x000683cd) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0006fdd8) cale_month_week_pane_t

0x793c,	// (0x000683f8) cell_cale_month_pane_ParamLimits

0x793c,	// (0x000683f8) cell_cale_month_pane

0x7a0a,	// (0x000684c6) cell_cale_month_pane_g1

0x7a16,	// (0x000684d2) cell_cale_month_pane_t1_ParamLimits

0x7a16,	// (0x000684d2) cell_cale_month_pane_t1

0x0c02,	// (0x000616be) grid_highlight_pane_cp08

0x0aa5,	// (0x00061561) main_smil_g1

0x7a32,	// (0x000684ee) smil_status_pane

0x7a3d,	// (0x000684f9) smil_text_pane

0xa217,	// (0x0006acd3) bg_popup_call3_rect_pane_g8

0xa21f,	// (0x0006acdb) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00070091) bg_popup_call3_rect_pane_g

0xa916,	// (0x0006b3d2) smil_status_volume_pane_g1

0x7a4f,	// (0x0006850b) smil_status_pane_t1

0xa949,	// (0x0006b405) volume_smil_pane

0x7a66,	// (0x00068522) list_smil_text_pane

0x7a70,	// (0x0006852c) scroll_pane_cp011

0x7a7b,	// (0x00068537) smil_text_list_pane_t1_ParamLimits

0x7a7b,	// (0x00068537) smil_text_list_pane_t1

0x7adf,	// (0x0006859b) aid_volume_smil_ParamLimits

0x7adf,	// (0x0006859b) aid_volume_smil

0x0aa5,	// (0x00061561) smil_volume_pane_g1

0x0aa5,	// (0x00061561) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0006fdf8) smil_volume_pane_g

0x0a2c,	// (0x000614e8) listscroll_cale_day_pane

0x7b01,	// (0x000685bd) bg_cale_pane

0x7b19,	// (0x000685d5) list_cale_pane

0x7b2a,	// (0x000685e6) scroll_pane_cp09

0x7b3b,	// (0x000685f7) cale_bg_pane_g1

0x7b43,	// (0x000685ff) cale_bg_pane_g2

0x7b4b,	// (0x00068607) cale_bg_pane_g3

0x7b53,	// (0x0006860f) cale_bg_pane_g4

0x7b5b,	// (0x00068617) cale_bg_pane_g5

0x7b63,	// (0x0006861f) cale_bg_pane_g6

0x7b6b,	// (0x00068627) cale_bg_pane_g7

0x7b73,	// (0x0006862f) cale_bg_pane_g8

0x7b7b,	// (0x00068637) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0006fdfd) cale_bg_pane_g

0x7b83,	// (0x0006863f) list_cale_time_pane_ParamLimits

0x7b83,	// (0x0006863f) list_cale_time_pane

0x7b9b,	// (0x00068657) list_cale_time_pane_g1_ParamLimits

0x7b9b,	// (0x00068657) list_cale_time_pane_g1

0x7ba7,	// (0x00068663) list_cale_time_pane_g2_ParamLimits

0x7ba7,	// (0x00068663) list_cale_time_pane_g2

0x7bb4,	// (0x00068670) list_cale_time_pane_g3_ParamLimits

0x7bb4,	// (0x00068670) list_cale_time_pane_g3

0x7bc2,	// (0x0006867e) list_cale_time_pane_g4_ParamLimits

0x7bc2,	// (0x0006867e) list_cale_time_pane_g4

0x7bd0,	// (0x0006868c) list_cale_time_pane_g5_ParamLimits

0x7bd0,	// (0x0006868c) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0006fe10) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0006fe10) list_cale_time_pane_g

0x7beb,	// (0x000686a7) list_cale_time_pane_t1_ParamLimits

0x7beb,	// (0x000686a7) list_cale_time_pane_t1

0x7c13,	// (0x000686cf) list_cale_time_pane_t2_ParamLimits

0x7c13,	// (0x000686cf) list_cale_time_pane_t2

0x82ff,	// (0x00068dbb) aid_blid_cardinal_pane

0x834d,	// (0x00068e09) compass_pane_t4

0x7c3b,	// (0x000686f7) list_cale_time_pane_t4_ParamLimits

0x7c3b,	// (0x000686f7) list_cale_time_pane_t4

0x835b,	// (0x00068e17) compass_pane_t5

0x836b,	// (0x00068e27) compass_pane_t6

0x8379,	// (0x00068e35) compass_pane_t7

0x83fd,	// (0x00068eb9) navi_pane_cc_t1

0x8618,	// (0x000690d4) aid_phob_thumbnail_center_pane

0x8ce0,	// (0x0006979c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0006fe1d) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0006fe1d) list_cale_time_pane_t

0x0331,	// (0x00060ded) bg_popup_window_pane_cp02_ParamLimits

0x0331,	// (0x00060ded) bg_popup_window_pane_cp02

0x7c63,	// (0x0006871f) heading_pane_cp01_ParamLimits

0x7c63,	// (0x0006871f) heading_pane_cp01

0x7c6f,	// (0x0006872b) loc_req_pane_ParamLimits

0x7c6f,	// (0x0006872b) loc_req_pane

0x7c7f,	// (0x0006873b) loc_type_pane_ParamLimits

0x7c7f,	// (0x0006873b) loc_type_pane

0x7c91,	// (0x0006874d) loc_type_pane_t1_ParamLimits

0x7c91,	// (0x0006874d) loc_type_pane_t1

0x7ca3,	// (0x0006875f) loc_type_pane_t2_ParamLimits

0x7ca3,	// (0x0006875f) loc_type_pane_t2

0x7cb5,	// (0x00068771) loc_type_pane_t3_ParamLimits

0x7cb5,	// (0x00068771) loc_type_pane_t3

0x0002,

0xf368,	// (0x0006fe24) loc_type_pane_t_ParamLimits

0xf368,	// (0x0006fe24) loc_type_pane_t

0x7cc7,	// (0x00068783) list_loc_req_pane

0x7cd1,	// (0x0006878d) scroll_pane_cp012

0x7cdc,	// (0x00068798) list_single_loc_request_popup_menu_pane_ParamLimits

0x7cdc,	// (0x00068798) list_single_loc_request_popup_menu_pane

0x7cee,	// (0x000687aa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x7cee,	// (0x000687aa) list_single_loc_request_popup_menu_pane_g1

0x7cfa,	// (0x000687b6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x7cfa,	// (0x000687b6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0006fe2b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0006fe2b) list_single_loc_request_popup_menu_pane_g

0x7d06,	// (0x000687c2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7d06,	// (0x000687c2) list_single_loc_request_popup_menu_pane_t1

0x7d1c,	// (0x000687d8) bg_popup_window_pane_cp03_ParamLimits

0x7d1c,	// (0x000687d8) bg_popup_window_pane_cp03

0x7d2a,	// (0x000687e6) heading_loc_req_pane_ParamLimits

0x7d2a,	// (0x000687e6) heading_loc_req_pane

0x7d36,	// (0x000687f2) popup_dyc_status_message_window_g1_ParamLimits

0x7d36,	// (0x000687f2) popup_dyc_status_message_window_g1

0x7d42,	// (0x000687fe) popup_dyc_status_message_window_t1_ParamLimits

0x7d42,	// (0x000687fe) popup_dyc_status_message_window_t1

0x7d54,	// (0x00068810) popup_dyc_status_message_window_t2_ParamLimits

0x7d54,	// (0x00068810) popup_dyc_status_message_window_t2

0x7d66,	// (0x00068822) popup_dyc_status_message_window_t3_ParamLimits

0x7d66,	// (0x00068822) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0006fe30) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0006fe30) popup_dyc_status_message_window_t

0x06da,	// (0x00061196) bg_heading_pane_cp01

0x7d78,	// (0x00068834) heading_loc_req_pane_g1

0x7d80,	// (0x0006883c) heading_loc_req_pane_g2

0x7d88,	// (0x00068844) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0006fe37) heading_loc_req_pane_g

0x7d90,	// (0x0006884c) heading_loc_req_pane_t1

0x7db8,	// (0x00068874) bg_popup_sub_pane_cp01_ParamLimits

0x7db8,	// (0x00068874) bg_popup_sub_pane_cp01

0x7dc6,	// (0x00068882) popup_cale_events_window_g1_ParamLimits

0x7dc6,	// (0x00068882) popup_cale_events_window_g1

0x7de6,	// (0x000688a2) popup_cale_events_window_g2_ParamLimits

0x7de6,	// (0x000688a2) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0006fe6b) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0006fe6b) popup_cale_events_window_g

0x7e06,	// (0x000688c2) popup_cale_events_window_t1_ParamLimits

0x7e06,	// (0x000688c2) popup_cale_events_window_t1

0x7e18,	// (0x000688d4) popup_cale_events_window_t2_ParamLimits

0x7e18,	// (0x000688d4) popup_cale_events_window_t2

0x7e56,	// (0x00068912) popup_cale_events_window_t3_ParamLimits

0x7e56,	// (0x00068912) popup_cale_events_window_t3

0x7e90,	// (0x0006894c) popup_cale_events_window_t4_ParamLimits

0x7e90,	// (0x0006894c) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0006fe70) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0006fe70) popup_cale_events_window_t

0x7ec6,	// (0x00068982) call_type_pane

0x7ed2,	// (0x0006898e) popup_call_status_window_g1

0x7ee0,	// (0x0006899c) popup_call_status_window_g2

0x7eec,	// (0x000689a8) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0006fe79) popup_call_status_window_g

0x7ef8,	// (0x000689b4) call_type_pane_g1

0x7f01,	// (0x000689bd) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0006fe80) call_type_pane_g

0x06da,	// (0x00061196) bg_popup_sub_pane_cp02

0x7f0a,	// (0x000689c6) listscroll_popup_wml_pane

0x7f12,	// (0x000689ce) list_wml_pane

0x7f1c,	// (0x000689d8) scroll_pane_cp013

0x7f27,	// (0x000689e3) list_single_graphic_popup_wml_pane_ParamLimits

0x7f27,	// (0x000689e3) list_single_graphic_popup_wml_pane

0x0aa5,	// (0x00061561) list_single_graphic_popup_wml_pane_g1

0x7f3b,	// (0x000689f7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0006fe85) list_single_graphic_popup_wml_pane_g

0x7f43,	// (0x000689ff) list_single_graphic_popup_wml_pane_t1

0x7f59,	// (0x00068a15) aid_call_pane

0x092d,	// (0x000613e9) popup_clock_analogue_window_g1

0x092d,	// (0x000613e9) popup_clock_analogue_window_g2

0x7f61,	// (0x00068a1d) popup_clock_analogue_window_g3

0x7f61,	// (0x00068a1d) popup_clock_analogue_window_g4

0x0aa5,	// (0x00061561) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0006fe8a) popup_clock_analogue_window_g

0x7f69,	// (0x00068a25) popup_clock_analogue_window_t1

0x7f77,	// (0x00068a33) clock_digital_number_pane_ParamLimits

0x7f77,	// (0x00068a33) clock_digital_number_pane

0x7f83,	// (0x00068a3f) clock_digital_number_pane_cp02_ParamLimits

0x7f83,	// (0x00068a3f) clock_digital_number_pane_cp02

0x7f8f,	// (0x00068a4b) clock_digital_number_pane_cp03_ParamLimits

0x7f8f,	// (0x00068a4b) clock_digital_number_pane_cp03

0x7f9b,	// (0x00068a57) clock_digital_number_pane_cp04_ParamLimits

0x7f9b,	// (0x00068a57) clock_digital_number_pane_cp04

0x7fa7,	// (0x00068a63) clock_digital_separator_pane_ParamLimits

0x7fa7,	// (0x00068a63) clock_digital_separator_pane

0x7fb3,	// (0x00068a6f) popup_clock_digital_window_t1

0x0aa5,	// (0x00061561) clock_digital_number_pane_g1

0x0aa5,	// (0x00061561) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0006fdf8) clock_digital_number_pane_g

0x0aa5,	// (0x00061561) clock_digital_separator_pane_g1

0x0aa5,	// (0x00061561) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0006fdf8) clock_digital_separator_pane_g

0x06da,	// (0x00061196) bg_popup_window_pane_cp04

0x7fd0,	// (0x00068a8c) heading_pane_cp03

0x7fd8,	// (0x00068a94) listscroll_popup_gms_pane

0x7fe0,	// (0x00068a9c) grid_large_graphic_popup_pane

0x7fea,	// (0x00068aa6) listscroll_popup_gms_pane_g1

0x7ff2,	// (0x00068aae) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0006fe95) listscroll_popup_gms_pane_g

0x0e6e,	// (0x0006192a) scroll_pane_cp014

0x7ffa,	// (0x00068ab6) cell_large_graphic_popup_pane_ParamLimits

0x7ffa,	// (0x00068ab6) cell_large_graphic_popup_pane

0x8014,	// (0x00068ad0) cell_large_graphic_popup_pane_g1_ParamLimits

0x8014,	// (0x00068ad0) cell_large_graphic_popup_pane_g1

0x8020,	// (0x00068adc) cell_large_graphic_popup_pane_g2_ParamLimits

0x8020,	// (0x00068adc) cell_large_graphic_popup_pane_g2

0x802c,	// (0x00068ae8) cell_large_graphic_popup_pane_g3_ParamLimits

0x802c,	// (0x00068ae8) cell_large_graphic_popup_pane_g3

0x8039,	// (0x00068af5) cell_large_graphic_popup_pane_g4_ParamLimits

0x8039,	// (0x00068af5) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0006fe9a) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0006fe9a) cell_large_graphic_popup_pane_g

0x8049,	// (0x00068b05) grid_highlight_pane_cp010

0x0aa5,	// (0x00061561) bg_popup_call_pane_g1

0x8053,	// (0x00068b0f) list_single_graphic_popup_conf_pane_ParamLimits

0x8053,	// (0x00068b0f) list_single_graphic_popup_conf_pane

0x8065,	// (0x00068b21) list_highlight_pane_cp01

0x806e,	// (0x00068b2a) list_single_graphic_popup_conf_pane_g1

0x8076,	// (0x00068b32) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0006fea3) list_single_graphic_popup_conf_pane_g

0x807e,	// (0x00068b3a) list_single_graphic_popup_conf_pane_t1

0x808c,	// (0x00068b48) linegrid_cams_pane_g1

0x8095,	// (0x00068b51) linegrid_cams_pane_g2

0x0c35,	// (0x000616f1) linegrid_cams_pane_g3

0x809e,	// (0x00068b5a) linegrid_cams_pane_g4

0x80a7,	// (0x00068b63) linegrid_cams_pane_g5

0x80b0,	// (0x00068b6c) linegrid_cams_pane_g6

0x0c3e,	// (0x000616fa) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0006fea8) linegrid_cams_pane_g

0x80bb,	// (0x00068b77) popup_clock_analogue_window

0x80bb,	// (0x00068b77) popup_clock_digital_window

0x06da,	// (0x00061196) popup_phob_thumbnail_window

0x0aa5,	// (0x00061561) call_video_uplink_pane_g1

0x80c4,	// (0x00068b80) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0006feb7) call_video_uplink_pane_g

0x80cc,	// (0x00068b88) video_uplink_pane

0x80d4,	// (0x00068b90) mce_image_pane_g1

0x80de,	// (0x00068b9a) mce_image_pane_g2

0x80e8,	// (0x00068ba4) mce_image_pane_g3

0x80f2,	// (0x00068bae) mce_image_pane_g4

0x80fa,	// (0x00068bb6) mce_image_pane_g5

0x0004,

0xf400,	// (0x0006febc) mce_image_pane_g

0x8102,	// (0x00068bbe) control_top_pane_stacon_cp01_ParamLimits

0x8102,	// (0x00068bbe) control_top_pane_stacon_cp01

0x8116,	// (0x00068bd2) uni_indicator_pane_stacon_cp01_ParamLimits

0x8116,	// (0x00068bd2) uni_indicator_pane_stacon_cp01

0x8127,	// (0x00068be3) bg_popup_sub_pane_cp03

0x8131,	// (0x00068bed) chi_dic_find_pane

0x8139,	// (0x00068bf5) listscroll_chi_dic_pane

0x8142,	// (0x00068bfe) main_pane_chidic_g1

0x8155,	// (0x00068c11) chi_dic_find_pane_t1

0x8163,	// (0x00068c1f) find_chidic_pane

0x816c,	// (0x00068c28) chi_dic_list_pane_ParamLimits

0x816c,	// (0x00068c28) chi_dic_list_pane

0x817d,	// (0x00068c39) scroll_pane_cp020

0x8185,	// (0x00068c41) find_chidic_pane_t1

0x06da,	// (0x00061196) input_focus_pane_cp06

0x8194,	// (0x00068c50) list_chi_dic_pane_ParamLimits

0x8194,	// (0x00068c50) list_chi_dic_pane

0x81ac,	// (0x00068c68) list_chi_dic_pane_t1_ParamLimits

0x81ac,	// (0x00068c68) list_chi_dic_pane_t1

0x06da,	// (0x00061196) list_highlight_pane_cp020

0x81bf,	// (0x00068c7b) bg_cale_heading_pane_g1

0x81c7,	// (0x00068c83) bg_cale_heading_pane_g2

0x81cf,	// (0x00068c8b) bg_cale_heading_pane_g3

0x81d7,	// (0x00068c93) bg_cale_heading_pane_g4

0x81e1,	// (0x00068c9d) bg_cale_heading_pane_g5

0x81eb,	// (0x00068ca7) bg_cale_heading_pane_g6

0x81f3,	// (0x00068caf) bg_cale_heading_pane_g7

0x81fb,	// (0x00068cb7) bg_cale_heading_pane_g8

0x8205,	// (0x00068cc1) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0006fec7) bg_cale_heading_pane_g

0x81bf,	// (0x00068c7b) bg_cale_side_pane_g1

0x820f,	// (0x00068ccb) bg_cale_side_pane_g2

0x8217,	// (0x00068cd3) bg_cale_side_pane_g3

0x821f,	// (0x00068cdb) bg_cale_side_pane_g4

0x8227,	// (0x00068ce3) bg_cale_side_pane_g5

0x822f,	// (0x00068ceb) bg_cale_side_pane_g6

0x8237,	// (0x00068cf3) bg_cale_side_pane_g7

0x823f,	// (0x00068cfb) bg_cale_side_pane_g8

0x8247,	// (0x00068d03) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0006feda) bg_cale_side_pane_g

0x824f,	// (0x00068d0b) popup_call_status_window_ParamLimits

0x824f,	// (0x00068d0b) popup_call_status_window

0x825b,	// (0x00068d17) stacon_top_pane

0x8263,	// (0x00068d1f) status_pane_ParamLimits

0x8263,	// (0x00068d1f) status_pane

0x8278,	// (0x00068d34) status_small_pane

0x8280,	// (0x00068d3c) control_pane

0x06da,	// (0x00061196) stacon_bottom_pane

0x8288,	// (0x00068d44) list_single_mce_smart_pane_t1_ParamLimits

0x8288,	// (0x00068d44) list_single_mce_smart_pane_t1

0x829b,	// (0x00068d57) list_single_mce_smart_pane_t2_ParamLimits

0x829b,	// (0x00068d57) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0006feed) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0006feed) list_single_mce_smart_pane_t

0x82ba,	// (0x00068d76) compass_pane

0x82c5,	// (0x00068d81) main_location2_pane_t1

0x82d9,	// (0x00068d95) main_location2_pane_t2

0x82d9,	// (0x00068d95) main_location2_pane_t3

0x0003,

0xf436,	// (0x0006fef2) main_location2_pane_t

0x8323,	// (0x00068ddf) compass_pane_g1_ParamLimits

0x8323,	// (0x00068ddf) compass_pane_g1

0x832f,	// (0x00068deb) compass_pane_t1

0x833e,	// (0x00068dfa) compass_pane_t2

0x0005,

0xf43f,	// (0x0006fefb) compass_pane_t

0x8389,	// (0x00068e45) text_secondary_cp61

0x83f4,	// (0x00068eb0) navi_pane_cams_g5

0x8470,	// (0x00068f2c) navi_pane_im_t1

0x847e,	// (0x00068f3a) navi_pane_mp_g1_ParamLimits

0x847e,	// (0x00068f3a) navi_pane_mp_g1

0x8492,	// (0x00068f4e) navi_pane_mp_g2_ParamLimits

0x8492,	// (0x00068f4e) navi_pane_mp_g2

0x849e,	// (0x00068f5a) navi_pane_mp_g3_ParamLimits

0x849e,	// (0x00068f5a) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0006ff0f) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0006ff0f) navi_pane_mp_g

0x84aa,	// (0x00068f66) navi_pane_mp_t1

0x84b8,	// (0x00068f74) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0006ff16) navi_pane_mp_t

0x854f,	// (0x0006900b) navi_pane_vt_g1

0x84aa,	// (0x00068f66) navi_pane_vt_t1

0x8557,	// (0x00069013) navi_slider_pane

0x855f,	// (0x0006901b) zooming_pane

0x8567,	// (0x00069023) navi_slider_pane_g1

0x8570,	// (0x0006902c) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0006ff1d) navi_slider_pane_g

0x859d,	// (0x00069059) aid_levels_zoom

0x85a5,	// (0x00069061) zooming_pane_g1

0x85ad,	// (0x00069069) zooming_pane_g2

0x85ad,	// (0x00069069) zooming_pane_g3

0x0002,

0xf470,	// (0x0006ff2c) zooming_pane_g

0x85b5,	// (0x00069071) level_10_zoom

0x85be,	// (0x0006907a) level_11_zoom

0x85c7,	// (0x00069083) level_1_zoom

0x85d0,	// (0x0006908c) level_2_zoom

0x85d9,	// (0x00069095) level_3_zoom

0x85e2,	// (0x0006909e) level_4_zoom

0x85eb,	// (0x000690a7) level_5_zoom

0x85f4,	// (0x000690b0) level_6_zoom

0x85fd,	// (0x000690b9) level_7_zoom

0x8606,	// (0x000690c2) level_8_zoom

0x860f,	// (0x000690cb) level_9_zoom

0x8620,	// (0x000690dc) popup_phob_thumbnail_window_g1

0x8628,	// (0x000690e4) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0006ff33) popup_phob_thumbnail_window_g

0xa49a,	// (0x0006af56) level_1_location

0xa4a2,	// (0x0006af5e) level_2_location

0xa4aa,	// (0x0006af66) level_3_location

0xa4b2,	// (0x0006af6e) level_4_location

0x855f,	// (0x0006901b) level_5_location

0x8630,	// (0x000690ec) mce_icon_pane_g1

0x8638,	// (0x000690f4) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0006ff38) mce_icon_pane_g

0x8640,	// (0x000690fc) main_mup_pane_g1_ParamLimits

0x8640,	// (0x000690fc) main_mup_pane_g1

0x8658,	// (0x00069114) main_mup_pane_g2_ParamLimits

0x8658,	// (0x00069114) main_mup_pane_g2

0x8674,	// (0x00069130) main_mup_pane_g3_ParamLimits

0x8674,	// (0x00069130) main_mup_pane_g3

0x8690,	// (0x0006914c) main_mup_pane_g4_ParamLimits

0x8690,	// (0x0006914c) main_mup_pane_g4

0x86a4,	// (0x00069160) main_mup_pane_g5_ParamLimits

0x86a4,	// (0x00069160) main_mup_pane_g5

0x86c5,	// (0x00069181) main_mup_pane_g6_ParamLimits

0x86c5,	// (0x00069181) main_mup_pane_g6

0x86e5,	// (0x000691a1) main_mup_pane_g7_ParamLimits

0x86e5,	// (0x000691a1) main_mup_pane_g7

0x8709,	// (0x000691c5) main_mup_pane_g8_ParamLimits

0x8709,	// (0x000691c5) main_mup_pane_g8

0x872d,	// (0x000691e9) main_mup_pane_g9_ParamLimits

0x872d,	// (0x000691e9) main_mup_pane_g9

0x8750,	// (0x0006920c) main_mup_pane_g10_ParamLimits

0x8750,	// (0x0006920c) main_mup_pane_g10

0x8773,	// (0x0006922f) main_mup_pane_g11_ParamLimits

0x8773,	// (0x0006922f) main_mup_pane_g11

0x8793,	// (0x0006924f) main_mup_pane_g12_ParamLimits

0x8793,	// (0x0006924f) main_mup_pane_g12

0x87a1,	// (0x0006925d) main_mup_pane_g13_ParamLimits

0x87a1,	// (0x0006925d) main_mup_pane_g13

0x000c,

0xf481,	// (0x0006ff3d) main_mup_pane_g_ParamLimits

0xf481,	// (0x0006ff3d) main_mup_pane_g

0x87b7,	// (0x00069273) main_mup_pane_t1_ParamLimits

0x87b7,	// (0x00069273) main_mup_pane_t1

0x87d6,	// (0x00069292) main_mup_pane_t2_ParamLimits

0x87d6,	// (0x00069292) main_mup_pane_t2

0x87f0,	// (0x000692ac) main_mup_pane_t3_ParamLimits

0x87f0,	// (0x000692ac) main_mup_pane_t3

0x880a,	// (0x000692c6) main_mup_pane_t4_ParamLimits

0x880a,	// (0x000692c6) main_mup_pane_t4

0x881c,	// (0x000692d8) main_mup_pane_t5_ParamLimits

0x881c,	// (0x000692d8) main_mup_pane_t5

0x882e,	// (0x000692ea) main_mup_pane_t6_ParamLimits

0x882e,	// (0x000692ea) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0006ff58) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0006ff58) main_mup_pane_t

0x8844,	// (0x00069300) mup_progress_pane_ParamLimits

0x8844,	// (0x00069300) mup_progress_pane

0x8850,	// (0x0006930c) mup_visualizer_pane_ParamLimits

0x8850,	// (0x0006930c) mup_visualizer_pane

0x888e,	// (0x0006934a) mup_volume_pane_ParamLimits

0x888e,	// (0x0006934a) mup_volume_pane

0x7ed2,	// (0x0006898e) mup_visualizer_pane_g1_ParamLimits

0x7ed2,	// (0x0006898e) mup_visualizer_pane_g1

0x7ed2,	// (0x0006898e) mup_visualizer_pane_g2_ParamLimits

0x7ed2,	// (0x0006898e) mup_visualizer_pane_g2

0x8323,	// (0x00068ddf) mup_visualizer_pane_g3_ParamLimits

0x8323,	// (0x00068ddf) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0006ff65) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0006ff65) mup_visualizer_pane_g

0x0aa5,	// (0x00061561) mup_volume_pane_g1

0x88b9,	// (0x00069375) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0006ff6c) mup_volume_pane_g

0x0aa5,	// (0x00061561) mup_progress_pane_g1

0x88c2,	// (0x0006937e) mup_progress_pane_g2

0x88cb,	// (0x00069387) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0006ff71) mup_progress_pane_g

0x06da,	// (0x00061196) bg_popup_window_pane_cp05

0x88d4,	// (0x00069390) heading_pane_cp02_ParamLimits

0x88d4,	// (0x00069390) heading_pane_cp02

0x88f0,	// (0x000693ac) list_popup_blid_pane

0x88f8,	// (0x000693b4) list_blid_sat_info_pane_ParamLimits

0x88f8,	// (0x000693b4) list_blid_sat_info_pane

0x890b,	// (0x000693c7) list_blid_sat_info_pane_g1

0x8913,	// (0x000693cf) list_blid_sat_info_pane_t1

0x8a1d,	// (0x000694d9) mup_equalizer_pane_ParamLimits

0x8a1d,	// (0x000694d9) mup_equalizer_pane

0x8a3e,	// (0x000694fa) mup_equalizer_pane_cp1_ParamLimits

0x8a3e,	// (0x000694fa) mup_equalizer_pane_cp1

0x8a5f,	// (0x0006951b) mup_equalizer_pane_cp2_ParamLimits

0x8a5f,	// (0x0006951b) mup_equalizer_pane_cp2

0x8a80,	// (0x0006953c) mup_equalizer_pane_cp3_ParamLimits

0x8a80,	// (0x0006953c) mup_equalizer_pane_cp3

0x8aa5,	// (0x00069561) mup_equalizer_pane_cp4_ParamLimits

0x8aa5,	// (0x00069561) mup_equalizer_pane_cp4

0x8aca,	// (0x00069586) mup_equalizer_pane_cp5

0x8ae2,	// (0x0006959e) mup_equalizer_pane_cp6

0x8afa,	// (0x000695b6) mup_equalizer_pane_cp7

0xa29f,	// (0x0006ad5b) bg_popup_call_poc_act_pane_g9

0xa2a7,	// (0x0006ad63) bg_popup_call_poc_act_pane_g10

0xa2af,	// (0x0006ad6b) bg_popup_call_poc_act_pane_g11

0x000a,

0x0935,	// (0x000613f1) mup_scale_pane

0x0aa5,	// (0x00061561) mup_scale_pane_g1

0x8b12,	// (0x000695ce) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0006ff8d) mup_scale_pane_g

0x8b48,	// (0x00069604) msg_data_pane

0x8b50,	// (0x0006960c) scroll_pane_cp017

0x4f2a,	// (0x000659e6) bg_list_pane_cp04_ParamLimits

0x4f2a,	// (0x000659e6) bg_list_pane_cp04

0x8b58,	// (0x00069614) msg_data_pane_g1

0x8b60,	// (0x0006961c) msg_data_pane_g2

0x8b6a,	// (0x00069626) msg_data_pane_g3

0x8b74,	// (0x00069630) msg_data_pane_g4

0x8b7c,	// (0x00069638) msg_data_pane_g5

0x8b84,	// (0x00069640) msg_data_pane_g6

0x8b8c,	// (0x00069648) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0006ff9c) msg_data_pane_g

0x4f52,	// (0x00065a0e) msg_text_pane_ParamLimits

0x4f52,	// (0x00065a0e) msg_text_pane

0x8b94,	// (0x00069650) qrid_highlight_pane_cp011_ParamLimits

0x8b94,	// (0x00069650) qrid_highlight_pane_cp011

0x06da,	// (0x00061196) msg_body_pane

0x06da,	// (0x00061196) msg_header_pane

0x8bb3,	// (0x0006966f) input_focus_pane_cp07

0x4f8c,	// (0x00065a48) msg_header_pane_t1_ParamLimits

0x4f8c,	// (0x00065a48) msg_header_pane_t1

0x4fa0,	// (0x00065a5c) msg_header_pane_t2_ParamLimits

0x4fa0,	// (0x00065a5c) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0006ffb0) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0006ffb0) msg_header_pane_t

0x8bc8,	// (0x00069684) msg_body_pane_g1

0x4fb2,	// (0x00065a6e) msg_body_pane_t1_ParamLimits

0x4fb2,	// (0x00065a6e) msg_body_pane_t1

0x4fe3,	// (0x00065a9f) msg_body_pane_t2_ParamLimits

0x4fe3,	// (0x00065a9f) msg_body_pane_t2

0x4ff5,	// (0x00065ab1) msg_body_pane_t3_ParamLimits

0x4ff5,	// (0x00065ab1) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0006ffb5) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0006ffb5) msg_body_pane_t

0x8c22,	// (0x000696de) main_viewer_pane_g1_ParamLimits

0x8c22,	// (0x000696de) main_viewer_pane_g1

0x8c2e,	// (0x000696ea) main_viewer_pane_g2_ParamLimits

0x8c2e,	// (0x000696ea) main_viewer_pane_g2

0x8c3a,	// (0x000696f6) main_viewer_pane_g3_ParamLimits

0x8c3a,	// (0x000696f6) main_viewer_pane_g3

0x8c4b,	// (0x00069707) main_viewer_pane_g4_ParamLimits

0x8c4b,	// (0x00069707) main_viewer_pane_g4

0x8c5c,	// (0x00069718) main_viewer_pane_g5_ParamLimits

0x8c5c,	// (0x00069718) main_viewer_pane_g5

0x8c5c,	// (0x00069718) main_viewer_pane_g7_ParamLimits

0x8c5c,	// (0x00069718) main_viewer_pane_g7

0x8c6e,	// (0x0006972a) main_viewer_pane_g8_ParamLimits

0x8c6e,	// (0x0006972a) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0006ffc5) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0006ffc5) main_viewer_pane_g

0x8c86,	// (0x00069742) viewer_content_pane_ParamLimits

0x8c86,	// (0x00069742) viewer_content_pane

0x8cb4,	// (0x00069770) main_postcard_pane_g1_ParamLimits

0x8cb4,	// (0x00069770) main_postcard_pane_g1

0x8cc2,	// (0x0006977e) main_postcard_pane_g2_ParamLimits

0x8cc2,	// (0x0006977e) main_postcard_pane_g2

0x8cd0,	// (0x0006978c) main_postcard_pane_g3_ParamLimits

0x8cd0,	// (0x0006978c) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0006ffd6) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0006ffd6) main_postcard_pane_g

0x8ce0,	// (0x0006979c) main_postcard_pane_g4

0xa929,	// (0x0006b3e5) smil_status_volume_pane_g2

0x8d0c,	// (0x000697c8) postcard_pane_ParamLimits

0x8d0c,	// (0x000697c8) postcard_pane

0x7ed2,	// (0x0006898e) postcard_pane_g1_ParamLimits

0x7ed2,	// (0x0006898e) postcard_pane_g1

0x8d46,	// (0x00069802) postcard_pane_g2_ParamLimits

0x8d46,	// (0x00069802) postcard_pane_g2

0x8d52,	// (0x0006980e) postcard_pane_g3_ParamLimits

0x8d52,	// (0x0006980e) postcard_pane_g3

0x8d5e,	// (0x0006981a) postcard_pane_g4_ParamLimits

0x8d5e,	// (0x0006981a) postcard_pane_g4

0x8d6c,	// (0x00069828) postcard_pane_g5_ParamLimits

0x8d6c,	// (0x00069828) postcard_pane_g5

0x8d78,	// (0x00069834) postcard_pane_g6_ParamLimits

0x8d78,	// (0x00069834) postcard_pane_g6

0x8d86,	// (0x00069842) postcard_pane_g7_ParamLimits

0x8d86,	// (0x00069842) postcard_pane_g7

0x0006,

0xf527,	// (0x0006ffe3) postcard_pane_g_ParamLimits

0xf527,	// (0x0006ffe3) postcard_pane_g

0x8d94,	// (0x00069850) main_mp2_pane_g1_ParamLimits

0x8d94,	// (0x00069850) main_mp2_pane_g1

0x8da2,	// (0x0006985e) main_mp2_pane_g2_ParamLimits

0x8da2,	// (0x0006985e) main_mp2_pane_g2

0x8dae,	// (0x0006986a) main_mp2_pane_g3_ParamLimits

0x8dae,	// (0x0006986a) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0006fff2) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0006fff2) main_mp2_pane_g

0x8dba,	// (0x00069876) main_mp2_pane_t1_ParamLimits

0x8dba,	// (0x00069876) main_mp2_pane_t1

0x8dd1,	// (0x0006988d) main_mp2_pane_t2_ParamLimits

0x8dd1,	// (0x0006988d) main_mp2_pane_t2

0x8de5,	// (0x000698a1) main_mp2_pane_t3_ParamLimits

0x8de5,	// (0x000698a1) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0006fff9) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0006fff9) main_mp2_pane_t

0x8df7,	// (0x000698b3) pec_content_pane_ParamLimits

0x8df7,	// (0x000698b3) pec_content_pane

0x0e6e,	// (0x0006192a) scroll_pane_cp015

0x8e09,	// (0x000698c5) pec_attribute_pane_ParamLimits

0x8e09,	// (0x000698c5) pec_attribute_pane

0x8e19,	// (0x000698d5) pec_content_pane_g1_ParamLimits

0x8e19,	// (0x000698d5) pec_content_pane_g1

0x8e25,	// (0x000698e1) pec_content_pane_t1_ParamLimits

0x8e25,	// (0x000698e1) pec_content_pane_t1

0x8e37,	// (0x000698f3) pec_content_pane_t2_ParamLimits

0x8e37,	// (0x000698f3) pec_content_pane_t2

0x0001,

0xf544,	// (0x00070000) pec_content_pane_t_ParamLimits

0xf544,	// (0x00070000) pec_content_pane_t

0x8e49,	// (0x00069905) list_single_graphic_pane_cp01_ParamLimits

0x8e49,	// (0x00069905) list_single_graphic_pane_cp01

0x0935,	// (0x000613f1) bg_popup_sub_pane_cp04

0x8e69,	// (0x00069925) popup_mup_playback_window_g1

0x8e75,	// (0x00069931) popup_mup_playback_window_t1

0x8e8a,	// (0x00069946) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00070005) popup_mup_playback_window_t

0x8ece,	// (0x0006998a) main_image_pane_g1_ParamLimits

0x8ece,	// (0x0006998a) main_image_pane_g1

0x8f75,	// (0x00069a31) scroll_pane_cp018_ParamLimits

0x8f75,	// (0x00069a31) scroll_pane_cp018

0x8f8d,	// (0x00069a49) scroll_pane_cp016_ParamLimits

0x8f8d,	// (0x00069a49) scroll_pane_cp016

0x8fc1,	// (0x00069a7d) smil2_image_pane_ParamLimits

0x8fc1,	// (0x00069a7d) smil2_image_pane

0x8ff7,	// (0x00069ab3) smil2_root_pane_ParamLimits

0x8ff7,	// (0x00069ab3) smil2_root_pane

0x9023,	// (0x00069adf) smil2_text_pane_ParamLimits

0x9023,	// (0x00069adf) smil2_text_pane

0x06da,	// (0x00061196) bg_list_pane_cp06

0x906b,	// (0x00069b27) grid_radio_pane

0x06da,	// (0x00061196) bg_popup_window_pane_cp06

0x9075,	// (0x00069b31) main_fmradio_pane_t1

0x7fd0,	// (0x00068a8c) heading_pane_cp04

0x9083,	// (0x00069b3f) main_fmradio_pane_t2

0xa32f,	// (0x0006adeb) popup_cale_lunar_info_window_g1

0x9091,	// (0x00069b4d) main_fmradio_pane_t3

0xa337,	// (0x0006adf3) popup_cale_lunar_info_window_g2

0x90a1,	// (0x00069b5d) main_fmradio_pane_t4

0x0001,

0x90af,	// (0x00069b6b) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x000700e0) popup_cale_lunar_info_window_g

0xf55e,	// (0x0007001a) main_fmradio_pane_t

0x90bd,	// (0x00069b79) wait_bar_pane_cp03

0x90c5,	// (0x00069b81) cell_fmradio_pane_ParamLimits

0x90c5,	// (0x00069b81) cell_fmradio_pane

0x8d86,	// (0x00069842) cell_fmradio_pane_g1_ParamLimits

0x8d86,	// (0x00069842) cell_fmradio_pane_g1

0x06da,	// (0x00061196) grid_highlight_pane_cp011

0x90da,	// (0x00069b96) poc_content_pane_ParamLimits

0x90da,	// (0x00069b96) poc_content_pane

0x90ec,	// (0x00069ba8) scroll_pane_cp019

0x90f4,	// (0x00069bb0) popup_call_poc_act_window_ParamLimits

0x90f4,	// (0x00069bb0) popup_call_poc_act_window

0x9101,	// (0x00069bbd) popup_call_poc_inact_window_ParamLimits

0x9101,	// (0x00069bbd) popup_call_poc_inact_window

0xf5fb,	// (0x000700b7) bg_popup_call_poc_act_pane_g

0xa227,	// (0x0006ace3) bg_popup_call_poc_inact_pane_g1

0xa22f,	// (0x0006aceb) bg_popup_call_poc_inact_pane_g2

0x910e,	// (0x00069bca) popup_call_poc_act_window_g2

0xa237,	// (0x0006acf3) bg_popup_call_poc_inact_pane_g3

0xa23f,	// (0x0006acfb) bg_popup_call_poc_inact_pane_g4

0xa247,	// (0x0006ad03) bg_popup_call_poc_inact_pane_g5

0x9116,	// (0x00069bd2) popup_call_poc_act_window_t1_ParamLimits

0x9116,	// (0x00069bd2) popup_call_poc_act_window_t1

0x913e,	// (0x00069bfa) popup_call_poc_act_window_t2_ParamLimits

0x913e,	// (0x00069bfa) popup_call_poc_act_window_t2

0x9166,	// (0x00069c22) popup_call_poc_act_window_t3_ParamLimits

0x9166,	// (0x00069c22) popup_call_poc_act_window_t3

0x918e,	// (0x00069c4a) popup_call_poc_act_window_t4_ParamLimits

0x918e,	// (0x00069c4a) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00070025) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00070025) popup_call_poc_act_window_t

0xa24f,	// (0x0006ad0b) bg_popup_call_poc_inact_pane_g6

0xa257,	// (0x0006ad13) bg_popup_call_poc_inact_pane_g7

0xa25f,	// (0x0006ad1b) bg_popup_call_poc_inact_pane_g8

0x91a0,	// (0x00069c5c) popup_call_poc_inact_window_g2

0xa267,	// (0x0006ad23) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x000700a4) bg_popup_call_poc_inact_pane_g

0x91a8,	// (0x00069c64) popup_call_poc_inact_window_t1_ParamLimits

0x91a8,	// (0x00069c64) popup_call_poc_inact_window_t1

0x91bd,	// (0x00069c79) popup_call_poc_inact_window_t2_ParamLimits

0x91bd,	// (0x00069c79) popup_call_poc_inact_window_t2

0x91d2,	// (0x00069c8e) popup_call_poc_inact_window_t3_ParamLimits

0x91d2,	// (0x00069c8e) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0007002e) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0007002e) popup_call_poc_inact_window_t

0xa7c8,	// (0x0006b284) context_pane_ParamLimits

0xa81f,	// (0x0006b2db) signal_pane_ParamLimits

0x855f,	// (0x0006901b) main_call2_pane

0xa774,	// (0x0006b230) popup_phob_thumbnail2_window_ParamLimits

0xa774,	// (0x0006b230) popup_phob_thumbnail2_window

0x8bd0,	// (0x0006968c) aid_hotspot_pointer_arrow_pane

0x8bd8,	// (0x00069694) aid_hotspot_pointer_hand_pane

0xa462,	// (0x0006af1e) phob_pre_status_pane_g5

0x6a78,	// (0x00067534) cams_zoom_pane_ParamLimits

0x6a84,	// (0x00067540) image_vga_pane_ParamLimits

0x6a93,	// (0x0006754f) main_camera_pane_g1_ParamLimits

0x6aa1,	// (0x0006755d) main_camera_pane_g2_ParamLimits

0x6aad,	// (0x00067569) main_camera_pane_g3_ParamLimits

0x6abb,	// (0x00067577) main_camera_pane_g4_ParamLimits

0x6ac9,	// (0x00067585) main_camera_pane_g5_ParamLimits

0x6ad7,	// (0x00067593) main_camera_pane_g6_ParamLimits

0x6ae5,	// (0x000675a1) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0006fd2d) main_camera_pane_g_ParamLimits

0x6af3,	// (0x000675af) main_camera_pane_t1_ParamLimits

0x6b05,	// (0x000675c1) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0006fd3e) main_camera_pane_t_ParamLimits

0x0935,	// (0x000613f1) bg_popup_preview_window_pane_cp01_ParamLimits

0x0935,	// (0x000613f1) bg_popup_preview_window_pane_cp01

0x91e7,	// (0x00069ca3) popup_phob_thumbnail2_window_g1_ParamLimits

0x91e7,	// (0x00069ca3) popup_phob_thumbnail2_window_g1

0x06da,	// (0x00061196) call2_cli_visual_pane

0x9202,	// (0x00069cbe) popup_call2_audio_conf_window_ParamLimits

0x9202,	// (0x00069cbe) popup_call2_audio_conf_window

0x921b,	// (0x00069cd7) popup_call2_audio_first_window_ParamLimits

0x921b,	// (0x00069cd7) popup_call2_audio_first_window

0x92b9,	// (0x00069d75) popup_call2_audio_in_window_ParamLimits

0x92b9,	// (0x00069d75) popup_call2_audio_in_window

0x92fd,	// (0x00069db9) popup_call2_audio_out_window_ParamLimits

0x92fd,	// (0x00069db9) popup_call2_audio_out_window

0x9367,	// (0x00069e23) popup_call2_audio_second_window_ParamLimits

0x9367,	// (0x00069e23) popup_call2_audio_second_window

0x93c5,	// (0x00069e81) popup_call2_audio_wait_window_ParamLimits

0x93c5,	// (0x00069e81) popup_call2_audio_wait_window

0x06da,	// (0x00061196) bg_popup_call2_act_pane_cp03

0x0917,	// (0x000613d3) list_conf_pane_cp

0x9404,	// (0x00069ec0) popup_call2_audio_conf_window_t1

0x9412,	// (0x00069ece) list_single_graphic_popup_conf2_pane_ParamLimits

0x9412,	// (0x00069ece) list_single_graphic_popup_conf2_pane

0x8065,	// (0x00068b21) list_highlight_pane_cp04

0x9425,	// (0x00069ee1) list_single_graphic_popup_conf2_pane_g1

0x8076,	// (0x00068b32) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00070035) list_single_graphic_popup_conf2_pane_g

0x942f,	// (0x00069eeb) list_single_graphic_popup_conf2_pane_t1

0x943d,	// (0x00069ef9) bg_popup_call2_act_pane_cp01_ParamLimits

0x943d,	// (0x00069ef9) bg_popup_call2_act_pane_cp01

0x94c7,	// (0x00069f83) call_type_pane_cp05_ParamLimits

0x94c7,	// (0x00069f83) call_type_pane_cp05

0x951b,	// (0x00069fd7) popup_call2_audio_second_window_g1_ParamLimits

0x951b,	// (0x00069fd7) popup_call2_audio_second_window_g1

0x956f,	// (0x0006a02b) popup_call2_audio_second_window_g2_ParamLimits

0x956f,	// (0x0006a02b) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0007003a) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0007003a) popup_call2_audio_second_window_g

0x95d4,	// (0x0006a090) popup_call2_audio_second_window_t1_ParamLimits

0x95d4,	// (0x0006a090) popup_call2_audio_second_window_t1

0x968f,	// (0x0006a14b) popup_call2_audio_second_window_t2_ParamLimits

0x968f,	// (0x0006a14b) popup_call2_audio_second_window_t2

0x96e2,	// (0x0006a19e) popup_call2_audio_second_window_t3_ParamLimits

0x96e2,	// (0x0006a19e) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00070041) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00070041) popup_call2_audio_second_window_t

0x06da,	// (0x00061196) bg_popup_call2_in_pane_cp02

0x06e4,	// (0x000611a0) call_type_pane_cp04

0x06ec,	// (0x000611a8) popup_call2_audio_wait_window_g1

0x06f4,	// (0x000611b0) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006fc1a) popup_call2_audio_wait_window_g

0x06fc,	// (0x000611b8) popup_call2_audio_wait_window_t3

0x97d5,	// (0x0006a291) bg_popup_call2_act_pane_ParamLimits

0x97d5,	// (0x0006a291) bg_popup_call2_act_pane

0x9895,	// (0x0006a351) call_type_pane_cp03_ParamLimits

0x9895,	// (0x0006a351) call_type_pane_cp03

0x98f9,	// (0x0006a3b5) popup_call2_audio_first_window_g1_ParamLimits

0x98f9,	// (0x0006a3b5) popup_call2_audio_first_window_g1

0x9969,	// (0x0006a425) popup_call2_audio_first_window_g2_ParamLimits

0x9969,	// (0x0006a425) popup_call2_audio_first_window_g2

0x7ed2,	// (0x0006898e) popup_call2_audio_first_window_g3_ParamLimits

0x7ed2,	// (0x0006898e) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0007004a) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0007004a) popup_call2_audio_first_window_g

0x9a47,	// (0x0006a503) popup_call2_audio_first_window_t1_ParamLimits

0x9a47,	// (0x0006a503) popup_call2_audio_first_window_t1

0x9b4a,	// (0x0006a606) popup_call2_audio_first_window_t4_ParamLimits

0x9b4a,	// (0x0006a606) popup_call2_audio_first_window_t4

0x9c2d,	// (0x0006a6e9) popup_call2_audio_first_window_t5_ParamLimits

0x9c2d,	// (0x0006a6e9) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00070055) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00070055) popup_call2_audio_first_window_t

0x092d,	// (0x000613e9) bg_popup_call2_act_pane_g1

0xa341,	// (0x0006adfd) popup_cale_lunar_info_window_t1

0xa34f,	// (0x0006ae0b) popup_cale_lunar_info_window_t2

0xa35d,	// (0x0006ae19) popup_cale_lunar_info_window_t3

0x06da,	// (0x00061196) bg_popup_call2_bubble_pane

0x9d2e,	// (0x0006a7ea) bg_popup_call2_in_pane_cp01_ParamLimits

0x9d2e,	// (0x0006a7ea) bg_popup_call2_in_pane_cp01

0x03b6,	// (0x00060e72) call_type_pane_cp02

0x9d76,	// (0x0006a832) popup_call2_audio_out_window_g1_ParamLimits

0x9d76,	// (0x0006a832) popup_call2_audio_out_window_g1

0x9da2,	// (0x0006a85e) popup_call2_audio_out_window_g2_ParamLimits

0x9da2,	// (0x0006a85e) popup_call2_audio_out_window_g2

0x9dca,	// (0x0006a886) popup_call2_audio_out_window_g3_ParamLimits

0x9dca,	// (0x0006a886) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0007005e) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0007005e) popup_call2_audio_out_window_g

0x9e05,	// (0x0006a8c1) popup_call2_audio_out_window_t1_ParamLimits

0x9e05,	// (0x0006a8c1) popup_call2_audio_out_window_t1

0x9e64,	// (0x0006a920) popup_call2_audio_out_window_t2_ParamLimits

0x9e64,	// (0x0006a920) popup_call2_audio_out_window_t2

0x9eb8,	// (0x0006a974) popup_call2_audio_out_window_t3_ParamLimits

0x9eb8,	// (0x0006a974) popup_call2_audio_out_window_t3

0x9ece,	// (0x0006a98a) popup_call2_audio_out_window_t4_ParamLimits

0x9ece,	// (0x0006a98a) popup_call2_audio_out_window_t4

0x9ee4,	// (0x0006a9a0) popup_call2_audio_out_window_t5_ParamLimits

0x9ee4,	// (0x0006a9a0) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00070067) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00070067) popup_call2_audio_out_window_t

0x9f48,	// (0x0006aa04) bg_popup_call2_in_pane_ParamLimits

0x9f48,	// (0x0006aa04) bg_popup_call2_in_pane

0x9fa4,	// (0x0006aa60) popup_call2_audio_in_window_g1_ParamLimits

0x9fa4,	// (0x0006aa60) popup_call2_audio_in_window_g1

0x9fdc,	// (0x0006aa98) popup_call2_audio_in_window_g2_ParamLimits

0x9fdc,	// (0x0006aa98) popup_call2_audio_in_window_g2

0xa014,	// (0x0006aad0) popup_call2_audio_in_window_g3_ParamLimits

0xa014,	// (0x0006aad0) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00070074) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00070074) popup_call2_audio_in_window_g

0xa06c,	// (0x0006ab28) popup_call2_audio_in_window_t1_ParamLimits

0xa06c,	// (0x0006ab28) popup_call2_audio_in_window_t1

0xa0ec,	// (0x0006aba8) popup_call2_audio_in_window_t2_ParamLimits

0xa0ec,	// (0x0006aba8) popup_call2_audio_in_window_t2

0xa16c,	// (0x0006ac28) popup_call2_audio_in_window_t3_ParamLimits

0xa16c,	// (0x0006ac28) popup_call2_audio_in_window_t3

0xa186,	// (0x0006ac42) popup_call2_audio_in_window_t4_ParamLimits

0xa186,	// (0x0006ac42) popup_call2_audio_in_window_t4

0xa198,	// (0x0006ac54) popup_call2_audio_in_window_t5_ParamLimits

0xa198,	// (0x0006ac54) popup_call2_audio_in_window_t5

0xa1ad,	// (0x0006ac69) popup_call2_audio_in_window_t6_ParamLimits

0xa1ad,	// (0x0006ac69) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0007007d) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0007007d) popup_call2_audio_in_window_t

0x092d,	// (0x000613e9) bg_popup_call2_in_pane_g1

0xa36b,	// (0x0006ae27) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x000700e5) popup_cale_lunar_info_window_t

0x0935,	// (0x000613f1) bg_popup_call2_rect_pane_ParamLimits

0x0935,	// (0x000613f1) bg_popup_call2_rect_pane

0x06da,	// (0x00061196) call2_cli_visual_graphic_pane

0x06da,	// (0x00061196) call2_cli_visual_text_pane

0xa93c,	// (0x0006b3f8) smil_status_volume_pane_g3

0x0002,

0x0aa5,	// (0x00061561) call2_cli_visual_graphic_pane_g1

0x0aa5,	// (0x00061561) call2_cli_visual_graphic_pane_g2

0x0aa5,	// (0x00061561) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0007008a) call2_cli_visual_graphic_pane_g

0xa1e7,	// (0x0006aca3) bg_popup_call2_rect_pane_g1

0x0b4d,	// (0x00061609) bg_popup_call2_rect_pane_g2

0xa1ef,	// (0x0006acab) bg_popup_call2_rect_pane_g3

0xa1f7,	// (0x0006acb3) bg_popup_call2_rect_pane_g4

0xa1ff,	// (0x0006acbb) bg_popup_call2_rect_pane_g5

0xa207,	// (0x0006acc3) bg_popup_call2_rect_pane_g6

0xa20f,	// (0x0006accb) bg_popup_call2_rect_pane_g7

0xa217,	// (0x0006acd3) bg_popup_call2_rect_pane_g8

0xa21f,	// (0x0006acdb) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00070091) bg_popup_call2_rect_pane_g

0xa227,	// (0x0006ace3) bg_popup_call2_bubble_pane_g1

0xa22f,	// (0x0006aceb) bg_popup_call2_bubble_pane_g2

0xa237,	// (0x0006acf3) bg_popup_call2_bubble_pane_g3

0xa23f,	// (0x0006acfb) bg_popup_call2_bubble_pane_g4

0xa247,	// (0x0006ad03) bg_popup_call2_bubble_pane_g5

0xa24f,	// (0x0006ad0b) bg_popup_call2_bubble_pane_g6

0xa257,	// (0x0006ad13) bg_popup_call2_bubble_pane_g7

0xa25f,	// (0x0006ad1b) bg_popup_call2_bubble_pane_g8

0xa267,	// (0x0006ad23) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x000700a4) bg_popup_call2_bubble_pane_g

0x650f,	// (0x00066fcb) aid_cale_week_size_cell_pane

0x6b19,	// (0x000675d5) aid_cams_cif_uncrop_pane_ParamLimits

0x6b19,	// (0x000675d5) aid_cams_cif_uncrop_pane

0x6c76,	// (0x00067732) aid_cams_size_cell_ParamLimits

0x6c76,	// (0x00067732) aid_cams_size_cell

0x6c82,	// (0x0006773e) grid_cams_pane_ParamLimits

0x6c90,	// (0x0006774c) linegrid_cams_pane_ParamLimits

0x6d28,	// (0x000677e4) call_video_pane_t1

0x6d3e,	// (0x000677fa) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0006fd91) call_video_pane_t

0x71c5,	// (0x00067c81) aid_cale_month_size_cell_pane_ParamLimits

0x71c5,	// (0x00067c81) aid_cale_month_size_cell_pane

0xf672,	// (0x0007012e) smil_status_volume_pane_g

0xa949,	// (0x0006b405) volume_smil_pane_ParamLimits

0x0270,	// (0x00060d2c) aid_popup2_width_pane

0x642b,	// (0x00066ee7) cell_qdial_pane_g4_ParamLimits

0x642b,	// (0x00066ee7) cell_qdial_pane_g4

0x82ff,	// (0x00068dbb) aid_blid_cardinal_pane_ParamLimits

0x830f,	// (0x00068dcb) aid_blid_destination_pane_ParamLimits

0x830f,	// (0x00068dcb) aid_blid_destination_pane

0x0935,	// (0x000613f1) bg_popup_call_poc_act_pane_ParamLimits

0x0935,	// (0x000613f1) bg_popup_call_poc_act_pane

0x0935,	// (0x000613f1) bg_popup_call_poc_inact_pane_ParamLimits

0x0935,	// (0x000613f1) bg_popup_call_poc_inact_pane

0xa277,	// (0x0006ad33) bg_popup_call_poc_act_pane_g1

0xa27f,	// (0x0006ad3b) bg_popup_call_poc_act_pane_g2

0xa287,	// (0x0006ad43) bg_popup_call_poc_act_pane_g3

0xa23f,	// (0x0006acfb) bg_popup_call_poc_act_pane_g4

0xa247,	// (0x0006ad03) bg_popup_call_poc_act_pane_g5

0xa28f,	// (0x0006ad4b) bg_popup_call_poc_act_pane_g6

0xa257,	// (0x0006ad13) bg_popup_call_poc_act_pane_g7

0xa297,	// (0x0006ad53) bg_popup_call_poc_act_pane_g8

0x06da,	// (0x00061196) main_usb_pane

0xa691,	// (0x0006b14d) popup_cale_lunar_info_window

0x6fd5,	// (0x00067a91) im_reading_pane_t1_ParamLimits

0x0dc6,	// (0x00061882) list_im_pane_ParamLimits

0x0dd7,	// (0x00061893) scroll_pane_cp07_ParamLimits

0x06da,	// (0x00061196) grid_highlight_pane_cp012

0x0935,	// (0x000613f1) mup_scale_pane_ParamLimits

0x7ed2,	// (0x0006898e) main_usb_pane_g1_ParamLimits

0x7ed2,	// (0x0006898e) main_usb_pane_g1

0xa2b7,	// (0x0006ad73) main_usb_pane_g2_ParamLimits

0xa2b7,	// (0x0006ad73) main_usb_pane_g2

0x0001,

0xf612,	// (0x000700ce) main_usb_pane_g_ParamLimits

0xf612,	// (0x000700ce) main_usb_pane_g

0xa2c3,	// (0x0006ad7f) main_usb_pane_t1_ParamLimits

0xa2c3,	// (0x0006ad7f) main_usb_pane_t1

0xa2d5,	// (0x0006ad91) main_usb_pane_t2_ParamLimits

0xa2d5,	// (0x0006ad91) main_usb_pane_t2

0xa2e7,	// (0x0006ada3) main_usb_pane_t3_ParamLimits

0xa2e7,	// (0x0006ada3) main_usb_pane_t3

0xa2f9,	// (0x0006adb5) main_usb_pane_t4_ParamLimits

0xa2f9,	// (0x0006adb5) main_usb_pane_t4

0xa30b,	// (0x0006adc7) main_usb_pane_t5_ParamLimits

0xa30b,	// (0x0006adc7) main_usb_pane_t5

0xa31d,	// (0x0006add9) main_usb_pane_t6_ParamLimits

0xa31d,	// (0x0006add9) main_usb_pane_t6

0x0005,

0xf617,	// (0x000700d3) main_usb_pane_t_ParamLimits

0x82ba,	// (0x00068d76) aid_text_placing

0x82c5,	// (0x00068d81) main_location2_pane_t1_ParamLimits

0x82d9,	// (0x00068d95) main_location2_pane_t2_ParamLimits

0x82d9,	// (0x00068d95) main_location2_pane_t3_ParamLimits

0x82ed,	// (0x00068da9) main_location2_pane_t4_ParamLimits

0x82ed,	// (0x00068da9) main_location2_pane_t4

0xf436,	// (0x0006fef2) main_location2_pane_t_ParamLimits

0x0971,	// (0x0006142d) find_pinb_pane_g2_ParamLimits

0x0971,	// (0x0006142d) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0006fc40) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0006fc40) find_pinb_pane_g

0x097d,	// (0x00061439) find_pinb_pane_t1_ParamLimits

0x098f,	// (0x0006144b) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0006fc45) find_pinb_pane_t_ParamLimits

0x06da,	// (0x00061196) main_call3_pane

0x7556,	// (0x00068012) cale_month_day_heading_pane_t1_ParamLimits

0x75b4,	// (0x00068070) cale_month_day_heading_pane_t2_ParamLimits

0x7619,	// (0x000680d5) cale_month_day_heading_pane_t3_ParamLimits

0x767e,	// (0x0006813a) cale_month_day_heading_pane_t4_ParamLimits

0x76e3,	// (0x0006819f) cale_month_day_heading_pane_t5_ParamLimits

0x7750,	// (0x0006820c) cale_month_day_heading_pane_t6_ParamLimits

0x77c5,	// (0x00068281) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0006fdc9) cale_month_day_heading_pane_t_ParamLimits

0x7a5d,	// (0x00068519) smil_status_volume_pane

0x8d2a,	// (0x000697e6) postcard_address_pane_ParamLimits

0x8d2a,	// (0x000697e6) postcard_address_pane

0x8d38,	// (0x000697f4) postcard_message_pane_ParamLimits

0x8d38,	// (0x000697f4) postcard_message_pane

0xa1c2,	// (0x0006ac7e) call2_cli_visual_pane_t1_ParamLimits

0xa1c2,	// (0x0006ac7e) call2_cli_visual_pane_t1

0xaaa6,	// (0x0006b562) postcard_message_pane_t1_ParamLimits

0xaaa6,	// (0x0006b562) postcard_message_pane_t1

0xaa8f,	// (0x0006b54b) postcard_address_pane_t1_ParamLimits

0xaa8f,	// (0x0006b54b) postcard_address_pane_t1

0xaa80,	// (0x0006b53c) popup_call3_audio_in_window_ParamLimits

0xaa80,	// (0x0006b53c) popup_call3_audio_in_window

0xa95e,	// (0x0006b41a) bg_popup_call3_in_pane_ParamLimits

0xa95e,	// (0x0006b41a) bg_popup_call3_in_pane

0xa9c6,	// (0x0006b482) popup_call3_audio_in_window_g1_ParamLimits

0xa9c6,	// (0x0006b482) popup_call3_audio_in_window_g1

0xa9de,	// (0x0006b49a) popup_call3_audio_in_window_g2_ParamLimits

0xa9de,	// (0x0006b49a) popup_call3_audio_in_window_g2

0xa9f6,	// (0x0006b4b2) popup_call3_audio_in_window_g3_ParamLimits

0xa9f6,	// (0x0006b4b2) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00070135) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00070135) popup_call3_audio_in_window_g

0xaa1e,	// (0x0006b4da) popup_call3_audio_in_window_t1_ParamLimits

0xaa1e,	// (0x0006b4da) popup_call3_audio_in_window_t1

0xaa46,	// (0x0006b502) popup_call3_audio_in_window_t2_ParamLimits

0xaa46,	// (0x0006b502) popup_call3_audio_in_window_t2

0xaa6e,	// (0x0006b52a) popup_call3_audio_in_window_t3_ParamLimits

0xaa6e,	// (0x0006b52a) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0007013e) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0007013e) popup_call3_audio_in_window_t

0x855f,	// (0x0006901b) bg_popup_call3_rect_pane

0xa1e7,	// (0x0006aca3) bg_popup_call3_rect_pane_g1

0x0b4d,	// (0x00061609) bg_popup_call3_rect_pane_g2

0xa1ef,	// (0x0006acab) bg_popup_call3_rect_pane_g3

0xa1f7,	// (0x0006acb3) bg_popup_call3_rect_pane_g4

0xa1ff,	// (0x0006acbb) bg_popup_call3_rect_pane_g5

0xa207,	// (0x0006acc3) bg_popup_call3_rect_pane_g6

0xa20f,	// (0x0006accb) bg_popup_call3_rect_pane_g7

0x88a9,	// (0x00069365) mup_visualizer_osc_pane

0x88b1,	// (0x0006936d) mup_visualizer_spec_pane

0xa97e,	// (0x0006b43a) call3_video_qcif_pane_ParamLimits

0xa97e,	// (0x0006b43a) call3_video_qcif_pane

0xa990,	// (0x0006b44c) call3_video_qcif_uncrop_pane_ParamLimits

0xa990,	// (0x0006b44c) call3_video_qcif_uncrop_pane

0xa9a0,	// (0x0006b45c) call3_video_subqcif_pane_ParamLimits

0xa9a0,	// (0x0006b45c) call3_video_subqcif_pane

0xa9b4,	// (0x0006b470) call3_video_subqcif_uncrop_pane_ParamLimits

0xa9b4,	// (0x0006b470) call3_video_subqcif_uncrop_pane

0xaa0e,	// (0x0006b4ca) popup_call3_audio_in_window_g4_ParamLimits

0xaa0e,	// (0x0006b4ca) popup_call3_audio_in_window_g4

0xa8fd,	// (0x0006b3b9) mup_spec_half_pane

0xa906,	// (0x0006b3c2) mup_spec_half_pane_cp

0xa8eb,	// (0x0006b3a7) mup_osc_middle_pane

0xa8f4,	// (0x0006b3b0) mup_visualizer_osc_pane_g1

0xa8cb,	// (0x0006b387) mup_spec_bar_pane_ParamLimits

0xa8cb,	// (0x0006b387) mup_spec_bar_pane

0xa8b8,	// (0x0006b374) mup_spec_bar_pane_g1

0xa8c2,	// (0x0006b37e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00070129) mup_spec_bar_pane_g

0x650f,	// (0x00066fcb) aid_cale_week_size_cell_pane_ParamLimits

0x6522,	// (0x00066fde) bg_cale_heading_pane_ParamLimits

0x0bc9,	// (0x00061685) bg_cale_pane_cp01_ParamLimits

0x6536,	// (0x00066ff2) cale_week_corner_pane_ParamLimits

0x654c,	// (0x00067008) cale_week_day_heading_pane_ParamLimits

0x6560,	// (0x0006701c) cale_week_scroll_pane_g1_ParamLimits

0x6571,	// (0x0006702d) cale_week_scroll_pane_g2_ParamLimits

0x6582,	// (0x0006703e) cale_week_scroll_pane_g3_ParamLimits

0x6593,	// (0x0006704f) cale_week_scroll_pane_g4_ParamLimits

0x65a4,	// (0x00067060) cale_week_scroll_pane_g5_ParamLimits

0x65b5,	// (0x00067071) cale_week_scroll_pane_g6_ParamLimits

0x65c8,	// (0x00067084) cale_week_scroll_pane_g7_ParamLimits

0x65db,	// (0x00067097) cale_week_scroll_pane_g8_ParamLimits

0x65ee,	// (0x000670aa) cale_week_scroll_pane_g9_ParamLimits

0x65ff,	// (0x000670bb) cale_week_scroll_pane_g10_ParamLimits

0x6610,	// (0x000670cc) cale_week_scroll_pane_g11_ParamLimits

0x6621,	// (0x000670dd) cale_week_scroll_pane_g12_ParamLimits

0x6632,	// (0x000670ee) cale_week_scroll_pane_g13_ParamLimits

0x6643,	// (0x000670ff) cale_week_scroll_pane_g14_ParamLimits

0x6654,	// (0x00067110) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0006fcd1) cale_week_scroll_pane_g_ParamLimits

0x6665,	// (0x00067121) cale_week_time_pane_ParamLimits

0x6678,	// (0x00067134) grid_cale_week_pane_ParamLimits

0x0be2,	// (0x0006169e) listscroll_cale_week_pane_t1

0x668d,	// (0x00067149) scroll_pane_cp08_ParamLimits

0x7229,	// (0x00067ce5) cale_month_corner_pane_ParamLimits

0x7503,	// (0x00067fbf) cale_month_pane_t1

0x7515,	// (0x00067fd1) cale_month_week_pane_ParamLimits

0x7ed2,	// (0x0006898e) popup_call_status_window_g1_ParamLimits

0x7ee0,	// (0x0006899c) popup_call_status_window_g2_ParamLimits

0x7eec,	// (0x000689a8) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0006fe79) popup_call_status_window_g_ParamLimits

0x7f51,	// (0x00068a0d) aid_call2_pane

0x4f7e,	// (0x00065a3a) msg_header_pane_g1

0x8d2a,	// (0x000697e6) postcard_address2_pane_ParamLimits

0x8d2a,	// (0x000697e6) postcard_address2_pane

0x8d38,	// (0x000697f4) postcard_message2_pane_ParamLimits

0x8d38,	// (0x000697f4) postcard_message2_pane

0xa82d,	// (0x0006b2e9) message2_row_pane_ParamLimits

0xa82d,	// (0x0006b2e9) message2_row_pane

0xa847,	// (0x0006b303) address2_row_pane_ParamLimits

0xa847,	// (0x0006b303) address2_row_pane

0xa85a,	// (0x0006b316) postcard_message2_row_pane_g1

0xa862,	// (0x0006b31e) postcard_message2_row_pane_t1

0xa85a,	// (0x0006b316) address2_row_pane_g1

0xa862,	// (0x0006b31e) address2_row_pane_t1

0x69d7,	// (0x00067493) aid_size_cell_vorec

0x06da,	// (0x00061196) main_rss_pane

0xa870,	// (0x0006b32c) rss_list_single_pane_ParamLimits

0xa870,	// (0x0006b32c) rss_list_single_pane

0xa89c,	// (0x0006b358) rss_list_single_pane_t1

0xa8aa,	// (0x0006b366) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00070124) rss_list_single_pane_t

0x06da,	// (0x00061196) main_camera2_pane

0x06da,	// (0x00061196) main_video2_pane

0xab0a,	// (0x0006b5c6) cams_zoom_pane_cp2_ParamLimits

0xab0a,	// (0x0006b5c6) cams_zoom_pane_cp2

0xab16,	// (0x0006b5d2) image2_vga_pane_ParamLimits

0xab16,	// (0x0006b5d2) image2_vga_pane

0xab25,	// (0x0006b5e1) main_camera2_pane_g1_ParamLimits

0xab25,	// (0x0006b5e1) main_camera2_pane_g1

0xab31,	// (0x0006b5ed) main_camera2_pane_g2_ParamLimits

0xab31,	// (0x0006b5ed) main_camera2_pane_g2

0xab3d,	// (0x0006b5f9) main_camera2_pane_g3_ParamLimits

0xab3d,	// (0x0006b5f9) main_camera2_pane_g3

0xab49,	// (0x0006b605) main_camera2_pane_g4_ParamLimits

0xab49,	// (0x0006b605) main_camera2_pane_g4

0xab55,	// (0x0006b611) main_camera2_pane_g5_ParamLimits

0xab55,	// (0x0006b611) main_camera2_pane_g5

0xab61,	// (0x0006b61d) main_camera2_pane_g6_ParamLimits

0xab61,	// (0x0006b61d) main_camera2_pane_g6

0xab6d,	// (0x0006b629) main_camera2_pane_g7_ParamLimits

0xab6d,	// (0x0006b629) main_camera2_pane_g7

0xab79,	// (0x0006b635) main_camera2_pane_g8_ParamLimits

0xab79,	// (0x0006b635) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00070145) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00070145) main_camera2_pane_g

0xab91,	// (0x0006b64d) main_camera2_pane_t1_ParamLimits

0xab91,	// (0x0006b64d) main_camera2_pane_t1

0xaba3,	// (0x0006b65f) main_camera2_pane_t2_ParamLimits

0xaba3,	// (0x0006b65f) main_camera2_pane_t2

0xabb5,	// (0x0006b671) main_camera2_pane_t3_ParamLimits

0xabb5,	// (0x0006b671) main_camera2_pane_t3

0xabc7,	// (0x0006b683) main_camera2_pane_t4_ParamLimits

0xabc7,	// (0x0006b683) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00070158) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00070158) main_camera2_pane_t

0xac24,	// (0x0006b6e0) cams_zoom_pane_cp4_ParamLimits

0xac24,	// (0x0006b6e0) cams_zoom_pane_cp4

0xac34,	// (0x0006b6f0) image2_cif_pane_ParamLimits

0xac34,	// (0x0006b6f0) image2_cif_pane

0xac49,	// (0x0006b705) image2_subqcif_pane_ParamLimits

0xac49,	// (0x0006b705) image2_subqcif_pane

0xac58,	// (0x0006b714) main_video2_pane_g1_ParamLimits

0xac58,	// (0x0006b714) main_video2_pane_g1

0xac6a,	// (0x0006b726) main_video2_pane_g2_ParamLimits

0xac6a,	// (0x0006b726) main_video2_pane_g2

0xac7a,	// (0x0006b736) main_video2_pane_g3_ParamLimits

0xac7a,	// (0x0006b736) main_video2_pane_g3

0xac8a,	// (0x0006b746) main_video2_pane_g4_ParamLimits

0xac8a,	// (0x0006b746) main_video2_pane_g4

0xac9a,	// (0x0006b756) main_video2_pane_g5_ParamLimits

0xac9a,	// (0x0006b756) main_video2_pane_g5

0xacaa,	// (0x0006b766) main_video2_pane_g6_ParamLimits

0xacaa,	// (0x0006b766) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00070167) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00070167) main_video2_pane_g

0xacbc,	// (0x0006b778) main_video2_pane_t1_ParamLimits

0xacbc,	// (0x0006b778) main_video2_pane_t1

0xacd6,	// (0x0006b792) main_video2_pane_t2_ParamLimits

0xacd6,	// (0x0006b792) main_video2_pane_t2

0xacfc,	// (0x0006b7b8) main_video2_pane_t3_ParamLimits

0xacfc,	// (0x0006b7b8) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00070174) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00070174) main_video2_pane_t

0xa4c2,	// (0x0006af7e) call_muted_g2

0x0001,

0xf65a,	// (0x00070116) call_muted_g

0x06da,	// (0x00061196) main_mup2_pane

0xee86,	// (0x0006f942) main_mup2_pane_g1_ParamLimits

0xee86,	// (0x0006f942) main_mup2_pane_g1

0xad22,	// (0x0006b7de) main_mup2_pane_g2_ParamLimits

0xad22,	// (0x0006b7de) main_mup2_pane_g2

0xafe2,	// (0x0006ba9e) main_mup_pane_g13_cp1

0xafea,	// (0x0006baa6) mup_volume_pane_cp1

0xad44,	// (0x0006b800) main_mup2_pane_g4_ParamLimits

0xad44,	// (0x0006b800) main_mup2_pane_g4

0xad59,	// (0x0006b815) main_mup2_pane_g5_ParamLimits

0xad59,	// (0x0006b815) main_mup2_pane_g5

0xad6e,	// (0x0006b82a) main_mup2_pane_g6_ParamLimits

0xad6e,	// (0x0006b82a) main_mup2_pane_g6

0xad83,	// (0x0006b83f) main_mup2_pane_g7_ParamLimits

0xad83,	// (0x0006b83f) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0007017b) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0007017b) main_mup2_pane_g

0xad9f,	// (0x0006b85b) main_mup2_pane_t1_ParamLimits

0xad9f,	// (0x0006b85b) main_mup2_pane_t1

0xadb6,	// (0x0006b872) main_mup2_pane_t2_ParamLimits

0xadb6,	// (0x0006b872) main_mup2_pane_t2

0xadcd,	// (0x0006b889) main_mup2_pane_t3_ParamLimits

0xadcd,	// (0x0006b889) main_mup2_pane_t3

0xade4,	// (0x0006b8a0) main_mup2_pane_t4_ParamLimits

0xade4,	// (0x0006b8a0) main_mup2_pane_t4

0xadfe,	// (0x0006b8ba) main_mup2_pane_t5_ParamLimits

0xadfe,	// (0x0006b8ba) main_mup2_pane_t5

0xae18,	// (0x0006b8d4) main_mup2_pane_t6_ParamLimits

0xae18,	// (0x0006b8d4) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0007018a) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0007018a) main_mup2_pane_t

0xae50,	// (0x0006b90c) mup2_visualizer_pane_ParamLimits

0xae50,	// (0x0006b90c) mup2_visualizer_pane

0xae86,	// (0x0006b942) mup_progress_pane_cp_ParamLimits

0xae86,	// (0x0006b942) mup_progress_pane_cp

0xafcd,	// (0x0006ba89) mup_volume_pane_cp_ParamLimits

0xafcd,	// (0x0006ba89) mup_volume_pane_cp

0xae9f,	// (0x0006b95b) mup2_visualizer_pane_g1_ParamLimits

0xae9f,	// (0x0006b95b) mup2_visualizer_pane_g1

0xaeb4,	// (0x0006b970) mup2_visualizer_pane_g2_ParamLimits

0xaeb4,	// (0x0006b970) mup2_visualizer_pane_g2

0xaec0,	// (0x0006b97c) mup2_visualizer_pane_g3_ParamLimits

0xaec0,	// (0x0006b97c) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00070197) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00070197) mup2_visualizer_pane_g

0x9063,	// (0x00069b1f) aid_size_cell_fmradio

0xa609,	// (0x0006b0c5) aid_height_parent_landcape

0x0e55,	// (0x00061911) wml_content_pane_cp

0x0e5d,	// (0x00061919) wml_tabs_pane

0x0e66,	// (0x00061922) popup_wml_miniature_window

0x0e6e,	// (0x0006192a) scroll_pane_cp021

0x0e82,	// (0x0006193e) wml_content_pane_comp8

0x06da,	// (0x00061196) bg_popup_sub_pane_cp05

0xaee0,	// (0x0006b99c) popup_wml_miniature_window_g1

0xaee8,	// (0x0006b9a4) wml_miniature_view_pane

0xaef0,	// (0x0006b9ac) aid_size_wml_view

0xaef8,	// (0x0006b9b4) wml_miniature_view_pane_g1

0xaf01,	// (0x0006b9bd) wml_miniature_view_pane_g2

0xaf0a,	// (0x0006b9c6) wml_miniature_view_pane_g3

0xaf12,	// (0x0006b9ce) wml_miniature_view_pane_g4

0xaf1a,	// (0x0006b9d6) wml_miniature_view_pane_g5

0xaf22,	// (0x0006b9de) wml_miniature_view_pane_g6

0xaf2a,	// (0x0006b9e6) wml_miniature_view_pane_g7

0xaf32,	// (0x0006b9ee) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0007019e) wml_miniature_view_pane_g

0xee86,	// (0x0006f942) background_graphic_ParamLimits

0xee86,	// (0x0006f942) background_graphic

0xee92,	// (0x0006f94e) wml_tabs_2_pane

0xee9b,	// (0x0006f957) wml_tabs_3_pane_ParamLimits

0xee9b,	// (0x0006f957) wml_tabs_3_pane

0xeead,	// (0x0006f969) wml_tabs_4_pane_ParamLimits

0xeead,	// (0x0006f969) wml_tabs_4_pane

0xeec3,	// (0x0006f97f) wml_tabs_5_pane_ParamLimits

0xeec3,	// (0x0006f97f) wml_tabs_5_pane

0xeedd,	// (0x0006f999) wml_tabs_pane_g2_ParamLimits

0xeedd,	// (0x0006f999) wml_tabs_pane_g2

0xeef1,	// (0x0006f9ad) wml_tabs_pane_g3_ParamLimits

0xeef1,	// (0x0006f9ad) wml_tabs_pane_g3

0xaf3a,	// (0x0006b9f6) wml_tabs_2_active_pane_ParamLimits

0xaf3a,	// (0x0006b9f6) wml_tabs_2_active_pane

0xaf4c,	// (0x0006ba08) wml_tabs_2_passive_pane_ParamLimits

0xaf4c,	// (0x0006ba08) wml_tabs_2_passive_pane

0xaf5e,	// (0x0006ba1a) wml_tabs_3_active_pane_cp_ParamLimits

0xaf5e,	// (0x0006ba1a) wml_tabs_3_active_pane_cp

0xaf71,	// (0x0006ba2d) wml_tabs_3_passive_pane_ParamLimits

0xaf71,	// (0x0006ba2d) wml_tabs_3_passive_pane

0xaf82,	// (0x0006ba3e) wml_tabs_3_passive_pane_cp_ParamLimits

0xaf82,	// (0x0006ba3e) wml_tabs_3_passive_pane_cp

0xaf97,	// (0x0006ba53) tabs_4_active_pane

0xaf9f,	// (0x0006ba5b) tabs_4_passive_pane

0xafa7,	// (0x0006ba63) tabs_4_passive_pane_cp

0xafaf,	// (0x0006ba6b) tabs_4_passive_pane_cp2

0xa26f,	// (0x0006ad2b) aid_height_text

0x8872,	// (0x0006932e) mup_volume_cont_pane_ParamLimits

0x8872,	// (0x0006932e) mup_volume_cont_pane

0x608e,	// (0x00066b4a) aid_size_cell_pinb

0x6098,	// (0x00066b54) aid_size_list_pinb

0xae6f,	// (0x0006b92b) mup2_volume_cont_pane_ParamLimits

0xae6f,	// (0x0006b92b) mup2_volume_cont_pane

0xafb9,	// (0x0006ba75) mup2_volume_cont_pane_g1_ParamLimits

0xafb9,	// (0x0006ba75) mup2_volume_cont_pane_g1

0x5d17,	// (0x000667d3) aid_size_cell_touch_ParamLimits

0x5d17,	// (0x000667d3) aid_size_cell_touch

0x5f75,	// (0x00066a31) touch_pane_ParamLimits

0x5f75,	// (0x00066a31) touch_pane

0x025e,	// (0x00060d1a) main_rss2_pane

0xef0e,	// (0x0006f9ca) listscroll_rss2_pane

0xef17,	// (0x0006f9d3) rss2_navigation_pane

0xef1f,	// (0x0006f9db) list_rss2_pane

0x817d,	// (0x00068c39) scroll_pane_cp22

0xef27,	// (0x0006f9e3) rss2_navigation_pane_g1

0xef30,	// (0x0006f9ec) rss2_navigation_pane_g2

0xef38,	// (0x0006f9f4) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x000701af) rss2_navigation_pane_g

0xef40,	// (0x0006f9fc) rss2_navigation_pane_t1

0xaff2,	// (0x0006baae) rss2_list_single_pane_ParamLimits

0xaff2,	// (0x0006baae) rss2_list_single_pane

0xef4e,	// (0x0006fa0a) rss2_list_single_pane_t2

0xef5c,	// (0x0006fa18) rss2_list_single_pane_t3_ParamLimits

0xef5c,	// (0x0006fa18) rss2_list_single_pane_t3

0xef79,	// (0x0006fa35) rss2_list_single_pane_t4

0x7a47,	// (0x00068503) smil_status_pane_g1

0xa636,	// (0x0006b0f2) main_image2_pane_ParamLimits

0xa636,	// (0x0006b0f2) main_image2_pane

0xab85,	// (0x0006b641) main_camera2_pane_g9_ParamLimits

0xab85,	// (0x0006b641) main_camera2_pane_g9

0xabd9,	// (0x0006b695) main_camera2_pane_t5_ParamLimits

0xabd9,	// (0x0006b695) main_camera2_pane_t5

0xabeb,	// (0x0006b6a7) main_camera2_pane_t6_ParamLimits

0xabeb,	// (0x0006b6a7) main_camera2_pane_t6

0xb018,	// (0x0006bad4) main_image2_pane_g1_ParamLimits

0xb018,	// (0x0006bad4) main_image2_pane_g1

0x904d,	// (0x00069b09) smil2_video_pane_ParamLimits

0x904d,	// (0x00069b09) smil2_video_pane

0x4d04,	// (0x000657c0) aid_zoom_text_primary_cp

0x02bd,	// (0x00060d79) popup_preview_fixed_window

0x0dbe,	// (0x0006187a) im_reading_pane_g1

0xaacf,	// (0x0006b58b) cams2_bc_adjust_pane_cp_ParamLimits

0xaacf,	// (0x0006b58b) cams2_bc_adjust_pane_cp

0xac16,	// (0x0006b6d2) cams2_bc_adjust_pane_ParamLimits

0xac16,	// (0x0006b6d2) cams2_bc_adjust_pane

0xb024,	// (0x0006bae0) cams2_bc_adjust_pane_g1

0xb02c,	// (0x0006bae8) cams2_slider_pane

0xb035,	// (0x0006baf1) cams2_slider_pane_g1

0xb03e,	// (0x0006bafa) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x000701b6) cams2_slider_pane_g

0x618b,	// (0x00066c47) calc_display_pane_ParamLimits

0x61a9,	// (0x00066c65) calc_paper_pane_ParamLimits

0x61c5,	// (0x00066c81) grid_calc_pane_ParamLimits

0x7fb3,	// (0x00068a6f) popup_clock_digital_window_t1_ParamLimits

0x8f12,	// (0x000699ce) main_image_pane_t1

0x6171,	// (0x00066c2d) aid_size_cell_calc_ParamLimits

0x6171,	// (0x00066c2d) aid_size_cell_calc

0xa667,	// (0x0006b123) popup_blid_sat_info2_window_ParamLimits

0xa667,	// (0x0006b123) popup_blid_sat_info2_window

0xef8f,	// (0x0006fa4b) aid_size_cell_blid

0xef97,	// (0x0006fa53) bg_popup_window_pane_cp07

0xefba,	// (0x0006fa76) grid_popup_blid_pane

0xefc4,	// (0x0006fa80) heading_pane_cp05_ParamLimits

0xefc4,	// (0x0006fa80) heading_pane_cp05

0xf08e,	// (0x0006fb4a) cell_popup_blid_pane_ParamLimits

0xf08e,	// (0x0006fb4a) cell_popup_blid_pane

0xf0b8,	// (0x0006fb74) cell_popup_blid_pane_g1

0xf0c0,	// (0x0006fb7c) cell_popup_blid_pane_t1

0xae35,	// (0x0006b8f1) mup2_indicator_pane_ParamLimits

0xae35,	// (0x0006b8f1) mup2_indicator_pane

0x855f,	// (0x0006901b) mup2_visualizer_osc_pane

0xaece,	// (0x0006b98a) mup2_visualizer_spec_pane_ParamLimits

0xaece,	// (0x0006b98a) mup2_visualizer_spec_pane

0xb058,	// (0x0006bb14) mup2_spec_half_pane

0xb061,	// (0x0006bb1d) mup2_spec_half_pane_cp

0xb06b,	// (0x0006bb27) mup2_spec_bar_pane_ParamLimits

0xb06b,	// (0x0006bb27) mup2_spec_bar_pane

0xa8b8,	// (0x0006b374) mup2_spec_bar_pane_g1

0xa8c2,	// (0x0006b37e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00070129) mup2_spec_bar_pane_g

0xb08a,	// (0x0006bb46) mup2_osc_middle_pane

0xa8f4,	// (0x0006b3b0) mup2_visualizer_osc_pane_g1

0x02e7,	// (0x00060da3) popup_number_entry_window_t1_ParamLimits

0x02fa,	// (0x00060db6) popup_number_entry_window_t2_ParamLimits

0x030c,	// (0x00060dc8) popup_number_entry_window_t3_ParamLimits

0x5fcc,	// (0x00066a88) popup_number_entry_window_t5_ParamLimits

0x5fcc,	// (0x00066a88) popup_number_entry_window_t5

0xf12f,	// (0x0006fbeb) popup_number_entry_window_t_ParamLimits

0x031e,	// (0x00060dda) text_title_cp2_ParamLimits

0x8be0,	// (0x0006969c) aid_hotspot_pointer_text2_pane

0x8c7a,	// (0x00069736) main_viewer_pane_g9_ParamLimits

0x8c7a,	// (0x00069736) main_viewer_pane_g9

0x7503,	// (0x00067fbf) cale_month_pane_t1_ParamLimits

0x7b01,	// (0x000685bd) bg_cale_pane_ParamLimits

0x7b19,	// (0x000685d5) list_cale_pane_ParamLimits

0x0be2,	// (0x0006169e) listscroll_cale_day_pane_t1

0x7b2a,	// (0x000685e6) scroll_pane_cp09_ParamLimits

0x8921,	// (0x000693dd) main_mup_eq_pane_t1_ParamLimits

0x8921,	// (0x000693dd) main_mup_eq_pane_t1

0x893d,	// (0x000693f9) main_mup_eq_pane_t2_ParamLimits

0x893d,	// (0x000693f9) main_mup_eq_pane_t2

0x8959,	// (0x00069415) main_mup_eq_pane_t3_ParamLimits

0x8959,	// (0x00069415) main_mup_eq_pane_t3

0x8973,	// (0x0006942f) main_mup_eq_pane_t4_ParamLimits

0x8973,	// (0x0006942f) main_mup_eq_pane_t4

0x898d,	// (0x00069449) main_mup_eq_pane_t5_ParamLimits

0x898d,	// (0x00069449) main_mup_eq_pane_t5

0x89a7,	// (0x00069463) main_mup_eq_pane_t6_ParamLimits

0x89a7,	// (0x00069463) main_mup_eq_pane_t6

0x89bd,	// (0x00069479) main_mup_eq_pane_t7_ParamLimits

0x89bd,	// (0x00069479) main_mup_eq_pane_t7

0x89d3,	// (0x0006948f) main_mup_eq_pane_t8_ParamLimits

0x89d3,	// (0x0006948f) main_mup_eq_pane_t8

0x89e9,	// (0x000694a5) main_mup_eq_pane_t9_ParamLimits

0x89e9,	// (0x000694a5) main_mup_eq_pane_t9

0x8a05,	// (0x000694c1) main_mup_eq_pane_t10_ParamLimits

0x8a05,	// (0x000694c1) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0006ff78) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0006ff78) main_mup_eq_pane_t

0x8aca,	// (0x00069586) mup_equalizer_pane_cp5_ParamLimits

0x8ae2,	// (0x0006959e) mup_equalizer_pane_cp6_ParamLimits

0x8afa,	// (0x000695b6) mup_equalizer_pane_cp7_ParamLimits

0x025e,	// (0x00060d1a) main_gallery_pane

0xa90e,	// (0x0006b3ca) smil2_volume_pane

0xa916,	// (0x0006b3d2) smil_status_volume_pane_g1_ParamLimits

0xa929,	// (0x0006b3e5) smil_status_volume_pane_g2_ParamLimits

0xa93c,	// (0x0006b3f8) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0007012e) smil_status_volume_pane_g_ParamLimits

0xef97,	// (0x0006fa53) bg_popup_window_pane_cp07_ParamLimits

0xefa5,	// (0x0006fa61) blid_firmament_pane

0xb093,	// (0x0006bb4f) aid_size_cell_gallery_ParamLimits

0xb093,	// (0x0006bb4f) aid_size_cell_gallery

0xb0a1,	// (0x0006bb5d) grid_gallery_pane_ParamLimits

0xb0a1,	// (0x0006bb5d) grid_gallery_pane

0xb0b1,	// (0x0006bb6d) cell_gallery_pane_ParamLimits

0xb0b1,	// (0x0006bb6d) cell_gallery_pane

0xf0ce,	// (0x0006fb8a) bg_cell_gallery_focus_pane_ParamLimits

0xf0ce,	// (0x0006fb8a) bg_cell_gallery_focus_pane

0xf0e0,	// (0x0006fb9c) cell_gallery_pane_g1_ParamLimits

0xf0e0,	// (0x0006fb9c) cell_gallery_pane_g1

0xb0ff,	// (0x0006bbbb) cell_gallery_pane_g2_ParamLimits

0xb0ff,	// (0x0006bbbb) cell_gallery_pane_g2

0xb10c,	// (0x0006bbc8) cell_gallery_pane_g3_ParamLimits

0xb10c,	// (0x0006bbc8) cell_gallery_pane_g3

0xf0ec,	// (0x0006fba8) cell_gallery_pane_g4_ParamLimits

0xf0ec,	// (0x0006fba8) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x000701dc) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x000701dc) cell_gallery_pane_g

0xf0f8,	// (0x0006fbb4) bg_cell_gallery_focus_pane_g1

0xf100,	// (0x0006fbbc) bg_cell_gallery_focus_pane_g2

0xf108,	// (0x0006fbc4) bg_cell_gallery_focus_pane_g3

0xf110,	// (0x0006fbcc) bg_cell_gallery_focus_pane_g4

0x1148,	// (0x00061c04) bg_cell_gallery_focus_pane_g5

0x1150,	// (0x00061c0c) bg_cell_gallery_focus_pane_g6

0x1158,	// (0x00061c14) bg_cell_gallery_focus_pane_g7

0x1160,	// (0x00061c1c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x000701e5) bg_cell_gallery_focus_pane_g

0x1168,	// (0x00061c24) aid_firma_cardinal

0x117c,	// (0x00061c38) blid_firmament_pane_t1

0x1193,	// (0x00061c4f) blid_firmament_pane_t2

0x11aa,	// (0x00061c66) blid_firmament_pane_t3

0x11c1,	// (0x00061c7d) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000701f6) blid_firmament_pane_t

0x11d8,	// (0x00061c94) blid_sat_info_pane

0x11e8,	// (0x00061ca4) blid_sat_info_pane_g1

0x11e8,	// (0x00061ca4) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000701ff) blid_sat_info_pane_g

0x11f2,	// (0x00061cae) blid_sat_info_pane_t1

0x1200,	// (0x00061cbc) smil2_volume_content_pane

0x1209,	// (0x00061cc5) smil2_volume_pane_g1

0x1211,	// (0x00061ccd) smil2_volume_content_pane_g1

0x121a,	// (0x00061cd6) smil2_volume_content_pane_g2

0x1223,	// (0x00061cdf) smil2_volume_content_pane_g3

0x122c,	// (0x00061ce8) smil2_volume_content_pane_g4

0x1235,	// (0x00061cf1) smil2_volume_content_pane_g5

0x123e,	// (0x00061cfa) smil2_volume_content_pane_g6

0x1247,	// (0x00061d03) smil2_volume_content_pane_g7

0x1250,	// (0x00061d0c) smil2_volume_content_pane_g8

0x1259,	// (0x00061d15) smil2_volume_content_pane_g9

0x1262,	// (0x00061d1e) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00070204) smil2_volume_content_pane_g

0x66e5,	// (0x000671a1) cale_week_day_heading_pane_t1_ParamLimits

0x6712,	// (0x000671ce) cale_week_day_heading_pane_t2_ParamLimits

0x673f,	// (0x000671fb) cale_week_day_heading_pane_t3_ParamLimits

0x676c,	// (0x00067228) cale_week_day_heading_pane_t4_ParamLimits

0x6799,	// (0x00067255) cale_week_day_heading_pane_t5_ParamLimits

0x67c6,	// (0x00067282) cale_week_day_heading_pane_t6_ParamLimits

0x67f3,	// (0x000672af) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0006fcf0) cale_week_day_heading_pane_t_ParamLimits

0x0bf4,	// (0x000616b0) bg_cale_side_pane_ParamLimits

0x6820,	// (0x000672dc) cale_week_time_pane_t1_ParamLimits

0x684c,	// (0x00067308) cale_week_time_pane_t2_ParamLimits

0x6878,	// (0x00067334) cale_week_time_pane_t3_ParamLimits

0x68a4,	// (0x00067360) cale_week_time_pane_t4_ParamLimits

0x68d0,	// (0x0006738c) cale_week_time_pane_t5_ParamLimits

0x68fc,	// (0x000673b8) cale_week_time_pane_t6_ParamLimits

0x6928,	// (0x000673e4) cale_week_time_pane_t7_ParamLimits

0x6954,	// (0x00067410) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0006fcff) cale_week_time_pane_t_ParamLimits

0x6980,	// (0x0006743c) cell_cale_week_pane_g2_ParamLimits

0x0bf4,	// (0x000616b0) bg_cale_side_pane_cp01_ParamLimits

0x783a,	// (0x000682f6) cale_month_week_pane_t1_ParamLimits

0x7865,	// (0x00068321) cale_month_week_pane_t2_ParamLimits

0x7890,	// (0x0006834c) cale_month_week_pane_t3_ParamLimits

0x78bb,	// (0x00068377) cale_month_week_pane_t4_ParamLimits

0x78e6,	// (0x000683a2) cale_month_week_pane_t5_ParamLimits

0x7911,	// (0x000683cd) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0006fdd8) cale_month_week_pane_t_ParamLimits

0x7a0a,	// (0x000684c6) cell_cale_month_pane_g1_ParamLimits

0x025e,	// (0x00060d1a) main_cale_event_viewer_pane

0x025e,	// (0x00060d1a) listscroll_cale_event_viewer_pane

0x126b,	// (0x00061d27) list_cale_ev_pane

0x1273,	// (0x00061d2f) scroll_pane_cp023

0xb119,	// (0x0006bbd5) field_cale_ev_pane_ParamLimits

0xb119,	// (0x0006bbd5) field_cale_ev_pane

0x127f,	// (0x00061d3b) field_cale_ev_content_pane_ParamLimits

0x127f,	// (0x00061d3b) field_cale_ev_content_pane

0x128b,	// (0x00061d47) field_cale_ev_pane_g1_ParamLimits

0x128b,	// (0x00061d47) field_cale_ev_pane_g1

0x1297,	// (0x00061d53) field_cale_ev_pane_g2_ParamLimits

0x1297,	// (0x00061d53) field_cale_ev_pane_g2

0x12af,	// (0x00061d6b) field_cale_ev_pane_g3_ParamLimits

0x12af,	// (0x00061d6b) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00070219) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00070219) field_cale_ev_pane_g

0x12c7,	// (0x00061d83) field_cale_ev_pane_t1_ParamLimits

0x12c7,	// (0x00061d83) field_cale_ev_pane_t1

0xb13d,	// (0x0006bbf9) field_cale_ev_content_pane_t1_ParamLimits

0xb13d,	// (0x0006bbf9) field_cale_ev_content_pane_t1

0x8baa,	// (0x00069666) bg_button_pane_cp01

0x0a2c,	// (0x000614e8) listscroll_cale_week_pane_ParamLimits

0x6505,	// (0x00066fc1) popup_toolbar_window_cp01

0x0be2,	// (0x0006169e) listscroll_cale_week_pane_t1_ParamLimits

0x0a2c,	// (0x000614e8) listscroll_cale_day_pane_ParamLimits

0x6505,	// (0x00066fc1) popup_toolbar_window_cp02

0x0be2,	// (0x0006169e) listscroll_cale_day_pane_t1_ParamLimits

0x0a2c,	// (0x000614e8) main_cale_month_pane_ParamLimits

0xa786,	// (0x0006b242) popup_toolbar_window_cp03_ParamLimits

0xa786,	// (0x0006b242) popup_toolbar_window_cp03

0x8efa,	// (0x000699b6) main_image_pane_g2_ParamLimits

0x8efa,	// (0x000699b6) main_image_pane_g2

0x8f06,	// (0x000699c2) main_image_pane_g3_ParamLimits

0x8f06,	// (0x000699c2) main_image_pane_g3

0x0002,

0xf54e,	// (0x0007000a) main_image_pane_g_ParamLimits

0xf54e,	// (0x0007000a) main_image_pane_g

0x8f12,	// (0x000699ce) main_image_pane_t1_ParamLimits

0x8f29,	// (0x000699e5) main_image_pane_t2_ParamLimits

0x8f29,	// (0x000699e5) main_image_pane_t2

0x8f3b,	// (0x000699f7) main_image_pane_t3_ParamLimits

0x8f3b,	// (0x000699f7) main_image_pane_t3

0x8f4d,	// (0x00069a09) main_image_pane_t4_ParamLimits

0x8f4d,	// (0x00069a09) main_image_pane_t4

0x0003,

0xf555,	// (0x00070011) main_image_pane_t_ParamLimits

0xf555,	// (0x00070011) main_image_pane_t

0x8f5f,	// (0x00069a1b) popup_image_details_window_cp01

0x8f69,	// (0x00069a25) popup_toobar_trans_pane_cp01_ParamLimits

0x8f69,	// (0x00069a25) popup_toobar_trans_pane_cp01

0xa6c8,	// (0x0006b184) popup_image_details_window_ParamLimits

0xa6c8,	// (0x0006b184) popup_image_details_window

0xa6d6,	// (0x0006b192) popup_image_focus_window

0xaac1,	// (0x0006b57d) camera2_autofocus_pane_ParamLimits

0xaac1,	// (0x0006b57d) camera2_autofocus_pane

0x025e,	// (0x00060d1a) bg_popup_sub_pane_cp06

0x12de,	// (0x00061d9a) popup_image_focus_window_g1

0x12e6,	// (0x00061da2) popup_image_focus_window_g2

0x12ee,	// (0x00061daa) popup_image_focus_window_g3

0x12f6,	// (0x00061db2) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00070220) popup_image_focus_window_g

0x12fe,	// (0x00061dba) popup_image_focus_window_t1

0x130c,	// (0x00061dc8) popup_image_focus_window_t2

0x131c,	// (0x00061dd8) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00070229) popup_image_focus_window_t

0x132a,	// (0x00061de6) camera2_autofocus_pane_g1

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp01

0x1338,	// (0x00061df4) popup_image_details_window_g1

0x134b,	// (0x00061e07) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0007023b) popup_image_details_window_g

0x1374,	// (0x00061e30) popup_image_details_window_t1

0x1386,	// (0x00061e42) popup_image_details_window_t2

0x139f,	// (0x00061e5b) popup_image_details_window_t3

0x13b3,	// (0x00061e6f) popup_image_details_window_t4

0x13ce,	// (0x00061e8a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00070242) popup_image_details_window_t

0x09f4,	// (0x000614b0) bg_calc_paper_pane_ParamLimits

0x025e,	// (0x00060d1a) grid_highlight_pane_cp013

0x62be,	// (0x00066d7a) list_calc_pane_ParamLimits

0x62d0,	// (0x00066d8c) scroll_pane_cp024

0x0a2c,	// (0x000614e8) bg_calc_display_pane_ParamLimits

0x62d8,	// (0x00066d94) calc_display_pane_t1_ParamLimits

0x62ed,	// (0x00066da9) calc_display_pane_t2_ParamLimits

0x6302,	// (0x00066dbe) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0006fc72) calc_display_pane_t_ParamLimits

0x63d5,	// (0x00066e91) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0006fc8f) cell_calc_pane_g

0x63de,	// (0x00066e9a) cell_calc_pane_t1

0x0aaf,	// (0x0006156b) grid_highlight_pane_cp02_ParamLimits

0x0ac5,	// (0x00061581) toolbar_button_pane_cp01_ParamLimits

0x0ac5,	// (0x00061581) toolbar_button_pane_cp01

0x8fa3,	// (0x00069a5f) temp_image_control_pane_ParamLimits

0x8fa3,	// (0x00069a5f) temp_image_control_pane

0xa636,	// (0x0006b0f2) main_mp3_pane

0x13e8,	// (0x00061ea4) temp_image_control_pane_g1_ParamLimits

0x13e8,	// (0x00061ea4) temp_image_control_pane_g1

0x13f6,	// (0x00061eb2) temp_image_control_pane_g2_ParamLimits

0x13f6,	// (0x00061eb2) temp_image_control_pane_g2

0x1408,	// (0x00061ec4) temp_image_control_pane_g3_ParamLimits

0x1408,	// (0x00061ec4) temp_image_control_pane_g3

0xb18b,	// (0x0006bc47) temp_image_control_pane_g4_ParamLimits

0xb18b,	// (0x0006bc47) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0007024d) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0007024d) temp_image_control_pane_g

0x13e8,	// (0x00061ea4) main_mp3_pane_g1

0xb19c,	// (0x0006bc58) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00070256) main_mp3_pane_g

0x144b,	// (0x00061f07) main_mp3_pane_t1

0x0cc3,	// (0x0006177f) main_camera_pane_g8_ParamLimits

0x0cc3,	// (0x0006177f) main_camera_pane_g8

0x6c2c,	// (0x000676e8) main_video_pane_g7_ParamLimits

0x6c2c,	// (0x000676e8) main_video_pane_g7

0xac04,	// (0x0006b6c0) main_camera2_pane_t7_ParamLimits

0xac04,	// (0x0006b6c0) main_camera2_pane_t7

0x0e15,	// (0x000618d1) scroll_pane_cp025_ParamLimits

0x0e15,	// (0x000618d1) scroll_pane_cp025

0x0e29,	// (0x000618e5) scroll_pane_cp026_ParamLimits

0x0e29,	// (0x000618e5) scroll_pane_cp026

0x0e38,	// (0x000618f4) wml_content_pane_ParamLimits

0x025e,	// (0x00060d1a) main_touch_calib_pane

0xb240,	// (0x0006bcfc) main_touch_calib_pane_g1

0xb24c,	// (0x0006bd08) main_touch_calib_pane_g2

0xb258,	// (0x0006bd14) main_touch_calib_pane_g3

0xb264,	// (0x0006bd20) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00070274) main_touch_calib_pane_g

0xb270,	// (0x0006bd2c) main_touch_calib_pane_t1

0xb287,	// (0x0006bd43) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0007027d) main_touch_calib_pane_t

0x83ec,	// (0x00068ea8) mup_progress_pane_cp02

0x840b,	// (0x00068ec7) navi_pane_g1

0x84c6,	// (0x00068f82) navi_pane_mp_t3

0xa636,	// (0x0006b0f2) main_mp3_pane_ParamLimits

0xa7db,	// (0x0006b297) navi_pane_ParamLimits

0x13e8,	// (0x00061ea4) main_mp3_pane_g1_ParamLimits

0xb19c,	// (0x0006bc58) main_mp3_pane_g2_ParamLimits

0xb1a8,	// (0x0006bc64) main_mp3_pane_g3_ParamLimits

0xb1a8,	// (0x0006bc64) main_mp3_pane_g3

0xb1b4,	// (0x0006bc70) main_mp3_pane_g4_ParamLimits

0xb1b4,	// (0x0006bc70) main_mp3_pane_g4

0x1418,	// (0x00061ed4) main_mp3_pane_g5_ParamLimits

0x1418,	// (0x00061ed4) main_mp3_pane_g5

0x1426,	// (0x00061ee2) main_mp3_pane_g6_ParamLimits

0x1426,	// (0x00061ee2) main_mp3_pane_g6

0x1433,	// (0x00061eef) main_mp3_pane_g7_ParamLimits

0x1433,	// (0x00061eef) main_mp3_pane_g7

0x143f,	// (0x00061efb) main_mp3_pane_g8_ParamLimits

0x143f,	// (0x00061efb) main_mp3_pane_g8

0xf79a,	// (0x00070256) main_mp3_pane_g_ParamLimits

0xb1c0,	// (0x0006bc7c) main_mp3_pane_t2

0xb1d0,	// (0x0006bc8c) main_mp3_pane_t3

0x1459,	// (0x00061f15) main_mp3_pane_t4

0x1467,	// (0x00061f23) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00070267) main_mp3_pane_t

0x1475,	// (0x00061f31) mup_progress_pane_cp01

0x4d04,	// (0x000657c0) aid_zoom_text_secondary2

0x126b,	// (0x00061d27) list_cale_ev2_pane

0x1273,	// (0x00061d2f) scroll_pane_cp023_ParamLimits

0xb2de,	// (0x0006bd9a) field_cale_ev2_pane_ParamLimits

0xb2de,	// (0x0006bd9a) field_cale_ev2_pane

0xb2fc,	// (0x0006bdb8) field_cale_ev2_pane_g1_ParamLimits

0xb2fc,	// (0x0006bdb8) field_cale_ev2_pane_g1

0xb308,	// (0x0006bdc4) field_cale_ev2_pane_g2_ParamLimits

0xb308,	// (0x0006bdc4) field_cale_ev2_pane_g2

0xb320,	// (0x0006bddc) field_cale_ev2_pane_g3_ParamLimits

0xb320,	// (0x0006bddc) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00070288) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00070288) field_cale_ev2_pane_g

0x5007,	// (0x00065ac3) field_cale_ev2_pane_t1_ParamLimits

0x5007,	// (0x00065ac3) field_cale_ev2_pane_t1

0x501e,	// (0x00065ada) field_cale_ev2_pane_t2_ParamLimits

0x501e,	// (0x00065ada) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00070291) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00070291) field_cale_ev2_pane_t

0x8cf0,	// (0x000697ac) main_postcard_pane_g5_ParamLimits

0x8cf0,	// (0x000697ac) main_postcard_pane_g5

0x8cfe,	// (0x000697ba) main_postcard_pane_g6_ParamLimits

0x8cfe,	// (0x000697ba) main_postcard_pane_g6

0x6a6a,	// (0x00067526) camera2_autofocus_pane_cp_ParamLimits

0x6a6a,	// (0x00067526) camera2_autofocus_pane_cp

0xa636,	// (0x0006b0f2) main_mup3_pane

0xb364,	// (0x0006be20) main_mup3_pane_g1_ParamLimits

0xb364,	// (0x0006be20) main_mup3_pane_g1

0xb385,	// (0x0006be41) main_mup3_pane_g2_ParamLimits

0xb385,	// (0x0006be41) main_mup3_pane_g2

0xb401,	// (0x0006bebd) main_mup3_pane_g3_ParamLimits

0xb401,	// (0x0006bebd) main_mup3_pane_g3

0xb442,	// (0x0006befe) main_mup3_pane_g4_ParamLimits

0xb442,	// (0x0006befe) main_mup3_pane_g4

0xb483,	// (0x0006bf3f) main_mup3_pane_g5_ParamLimits

0xb483,	// (0x0006bf3f) main_mup3_pane_g5

0xb4c4,	// (0x0006bf80) main_mup3_pane_g6_ParamLimits

0xb4c4,	// (0x0006bf80) main_mup3_pane_g6

0x14f1,	// (0x00061fad) main_mup3_pane_g7_ParamLimits

0x14f1,	// (0x00061fad) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x000702a1) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x000702a1) main_mup3_pane_g

0xb536,	// (0x0006bff2) main_mup3_pane_t1_ParamLimits

0xb536,	// (0x0006bff2) main_mup3_pane_t1

0xb5a9,	// (0x0006c065) main_mup3_pane_t2_ParamLimits

0xb5a9,	// (0x0006c065) main_mup3_pane_t2

0xb676,	// (0x0006c132) main_mup3_pane_t4_ParamLimits

0xb676,	// (0x0006c132) main_mup3_pane_t4

0xb6ca,	// (0x0006c186) main_mup3_pane_t5_ParamLimits

0xb6ca,	// (0x0006c186) main_mup3_pane_t5

0xb776,	// (0x0006c232) main_mup3_pane_t6_ParamLimits

0xb776,	// (0x0006c232) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x000702b2) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x000702b2) main_mup3_pane_t

0xb81e,	// (0x0006c2da) mup3_progress_pane_ParamLimits

0xb81e,	// (0x0006c2da) mup3_progress_pane

0xb889,	// (0x0006c345) popup_mup3_control_window_ParamLimits

0xb889,	// (0x0006c345) popup_mup3_control_window

0x14ff,	// (0x00061fbb) popup_mup3_text_window

0xb8a6,	// (0x0006c362) mup3_progress_pane_t1

0xb8bd,	// (0x0006c379) mup3_progress_pane_t2

0x1507,	// (0x00061fc3) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x000702bf) mup3_progress_pane_t

0x151e,	// (0x00061fda) mup_progress_pane_cp03

0x025e,	// (0x00060d1a) bg_tb_trans_pane_cp04

0xb8d4,	// (0x0006c390) mup3_volume_pane

0xb8dc,	// (0x0006c398) popup_mup3_control_window_g1

0x2367,	// (0x00062e23) mup3_volume_pane_g1

0x2370,	// (0x00062e2c) mup3_volume_pane_g2

0x2379,	// (0x00062e35) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x000702c6) mup3_volume_pane_g

0x025e,	// (0x00060d1a) bg_tb_trans_pane_cp03

0x152e,	// (0x00061fea) popup_mup3_text_window_g1

0x1536,	// (0x00061ff2) popup_mup3_text_window_t1

0x0a86,	// (0x00061542) list_calc_item_pane_g1_ParamLimits

0xef05,	// (0x0006f9c1) mup_volume_pane_cp_g1

0xb29e,	// (0x0006bd5a) main_touch_calib_pane_t3

0xb2b2,	// (0x0006bd6e) main_touch_calib_pane_t4

0xb2c8,	// (0x0006bd84) main_touch_calib_pane_t5

0x0268,	// (0x00060d24) aid_cell_size_toolbar2

0x0270,	// (0x00060d2c) aid_popup3_width_pane

0x4cf4,	// (0x000657b0) aid_zoom_text_msg_primary

0x6a3d,	// (0x000674f9) vorec_t7

0x0a4a,	// (0x00061506) bg_calc_paper_pane_g1_ParamLimits

0x0a62,	// (0x0006151e) bg_calc_paper_pane_g2_ParamLimits

0x0a56,	// (0x00061512) bg_calc_paper_pane_g3_ParamLimits

0x0a7a,	// (0x00061536) bg_calc_paper_pane_g4_ParamLimits

0x0a6e,	// (0x0006152a) bg_calc_paper_pane_g5_ParamLimits

0x6343,	// (0x00066dff) bg_calc_paper_pane_g6_ParamLimits

0x6354,	// (0x00066e10) bg_calc_paper_pane_g7_ParamLimits

0x6365,	// (0x00066e21) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0006fc79) bg_calc_paper_pane_g_ParamLimits

0x6376,	// (0x00066e32) calc_bg_paper_pane_g9_ParamLimits

0x6b5b,	// (0x00067617) image_qvga_pane_ParamLimits

0x6b5b,	// (0x00067617) image_qvga_pane

0x0935,	// (0x000613f1) bg_popup_sub_pane_cp04_ParamLimits

0x8e69,	// (0x00069925) popup_mup_playback_window_g1_ParamLimits

0x8e75,	// (0x00069931) popup_mup_playback_window_t1_ParamLimits

0x8e8a,	// (0x00069946) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00070005) popup_mup_playback_window_t_ParamLimits

0xad33,	// (0x0006b7ef) main_mup2_pane_g3_ParamLimits

0xad33,	// (0x0006b7ef) main_mup2_pane_g3

0x6da0,	// (0x0006785c) popup_toolbar_window_cp04

0x95c3,	// (0x0006a07f) popup_call2_audio_second_window_g3_ParamLimits

0x95c3,	// (0x0006a07f) popup_call2_audio_second_window_g3

0x99cd,	// (0x0006a489) popup_call2_audio_first_window_g4_ParamLimits

0x99cd,	// (0x0006a489) popup_call2_audio_first_window_g4

0xa04c,	// (0x0006ab08) popup_call2_audio_in_window_g4_ParamLimits

0xa04c,	// (0x0006ab08) popup_call2_audio_in_window_g4

0x8e9f,	// (0x0006995b) aid_area_sk_bg_cut_ParamLimits

0x8e9f,	// (0x0006995b) aid_area_sk_bg_cut

0x8eac,	// (0x00069968) aid_area_sk_bg_cut_2_ParamLimits

0x8eac,	// (0x00069968) aid_area_sk_bg_cut_2

0xb0ef,	// (0x0006bbab) aid_placing_details_win

0xb0f7,	// (0x0006bbb3) aid_placing_details_win_2

0x132a,	// (0x00061de6) camera2_autofocus_pane_g1_ParamLimits

0x5f21,	// (0x000669dd) popup_fixed_preview_cale_window_ParamLimits

0x5f21,	// (0x000669dd) popup_fixed_preview_cale_window

0x8579,	// (0x00069035) navi_slider_pane_g3

0x8582,	// (0x0006903e) navi_slider_pane_g4

0x858b,	// (0x00069047) navi_slider_pane_g5

0x8579,	// (0x00069035) navi_slider_pane_g6

0x8594,	// (0x00069050) navi_slider_pane_g7

0x8b1b,	// (0x000695d7) mup_scale_pane_g3

0x8b24,	// (0x000695e0) mup_scale_pane_g4

0x8b2d,	// (0x000695e9) mup_scale_pane_g5

0x8b36,	// (0x000695f2) mup_scale_pane_g6

0x8b3f,	// (0x000695fb) mup_scale_pane_g7

0x8579,	// (0x00069035) cams2_slider_pane_g3

0xef87,	// (0x0006fa43) cams2_slider_pane_g4

0xb047,	// (0x0006bb03) cams2_slider_pane_g5

0x8579,	// (0x00069035) cams2_slider_pane_g6

0xb04f,	// (0x0006bb0b) cams2_slider_pane_g7

0x11e8,	// (0x00061ca4) camera2_autofocus_pane_cp_g1

0x1544,	// (0x00062000) bg_popup_preview_window_pane_cp02_ParamLimits

0x1544,	// (0x00062000) bg_popup_preview_window_pane_cp02

0x1550,	// (0x0006200c) list_fp_cale_pane_ParamLimits

0x1550,	// (0x0006200c) list_fp_cale_pane

0x155c,	// (0x00062018) popup_fixed_preview_cale_window_t1_ParamLimits

0x155c,	// (0x00062018) popup_fixed_preview_cale_window_t1

0xb8e5,	// (0x0006c3a1) popup_fixed_preview_cale_window_t2_ParamLimits

0xb8e5,	// (0x0006c3a1) popup_fixed_preview_cale_window_t2

0xb8fa,	// (0x0006c3b6) popup_fixed_preview_cale_window_t3_ParamLimits

0xb8fa,	// (0x0006c3b6) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x000702cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x000702cd) popup_fixed_preview_cale_window_t

0xb90f,	// (0x0006c3cb) list_single_fp_cale_pane_ParamLimits

0xb90f,	// (0x0006c3cb) list_single_fp_cale_pane

0x157a,	// (0x00062036) list_single_fp_cale_pane_g1_ParamLimits

0x157a,	// (0x00062036) list_single_fp_cale_pane_g1

0x1586,	// (0x00062042) list_single_fp_cale_pane_g2_ParamLimits

0x1586,	// (0x00062042) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x000702d4) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x000702d4) list_single_fp_cale_pane_g

0x159f,	// (0x0006205b) list_single_fp_cale_pane_t1_ParamLimits

0x159f,	// (0x0006205b) list_single_fp_cale_pane_t1

0x15b1,	// (0x0006206d) list_single_fp_cale_pane_t2_ParamLimits

0x15b1,	// (0x0006206d) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x000702db) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x000702db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x025e,	// (0x00060d1a) main_dialer_pane

0xb91f,	// (0x0006c3db) aid_cell_size_keypad

0xb929,	// (0x0006c3e5) dialer_ne_pane

0xb933,	// (0x0006c3ef) grid_dialer_command_1_pane

0xb93b,	// (0x0006c3f7) grid_dialer_command_2_pane

0xb943,	// (0x0006c3ff) grid_dialer_keypad_pane

0xb957,	// (0x0006c413) bg_popup_call_pane_cp06_ParamLimits

0xb957,	// (0x0006c413) bg_popup_call_pane_cp06

0xb963,	// (0x0006c41f) dialer_ne_clear_pane_ParamLimits

0xb963,	// (0x0006c41f) dialer_ne_clear_pane

0x15e4,	// (0x000620a0) dialer_ne_pane_g1

0x15ec,	// (0x000620a8) dialer_ne_pane_t1_ParamLimits

0x15ec,	// (0x000620a8) dialer_ne_pane_t1

0xb96f,	// (0x0006c42b) dialer_ne_pane_t2_ParamLimits

0xb96f,	// (0x0006c42b) dialer_ne_pane_t2

0xb98c,	// (0x0006c448) dialer_ne_pane_t3_ParamLimits

0xb98c,	// (0x0006c448) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x000702e0) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x000702e0) dialer_ne_pane_t

0xb9b0,	// (0x0006c46c) dialer_ne_pane_t3_copy1_ParamLimits

0xb9b0,	// (0x0006c46c) dialer_ne_pane_t3_copy1

0xb9d4,	// (0x0006c490) cell_dialer_keypad_pane_ParamLimits

0xb9d4,	// (0x0006c490) cell_dialer_keypad_pane

0xb9eb,	// (0x0006c4a7) cell_dialer_command_1_pane_ParamLimits

0xb9eb,	// (0x0006c4a7) cell_dialer_command_1_pane

0xba01,	// (0x0006c4bd) cell_dialer_command_2_pane_ParamLimits

0xba01,	// (0x0006c4bd) cell_dialer_command_2_pane

0x15fe,	// (0x000620ba) bg_button_pane_cp02_ParamLimits

0x15fe,	// (0x000620ba) bg_button_pane_cp02

0xba10,	// (0x0006c4cc) cell_dialer_keypad_pane_g1_ParamLimits

0xba10,	// (0x0006c4cc) cell_dialer_keypad_pane_g1

0x15fe,	// (0x000620ba) bg_button_pane_cp03_ParamLimits

0x15fe,	// (0x000620ba) bg_button_pane_cp03

0xba24,	// (0x0006c4e0) cell_dialer_command_1_pane_g1_ParamLimits

0xba24,	// (0x0006c4e0) cell_dialer_command_1_pane_g1

0x160a,	// (0x000620c6) bg_button_pane_cp04

0xba38,	// (0x0006c4f4) cell_dialer_command_2_pane_g1

0x855f,	// (0x0006901b) bg_button_pane_cp06

0x1612,	// (0x000620ce) dialer_ne_clear_pane_g1

0x8417,	// (0x00068ed3) navi_pane_g2

0x8445,	// (0x00068f01) navi_pane_g3

0x0002,

0xf44c,	// (0x0006ff08) navi_pane_g

0x84d4,	// (0x00068f90) navi_pane_mv_g2

0x84fb,	// (0x00068fb7) navi_pane_mv_g5

0x8503,	// (0x00068fbf) navi_pane_mv_t1

0x0a2c,	// (0x000614e8) main_clock2_pane

0xba6a,	// (0x0006c526) main_clock2_list_pane_ParamLimits

0xba6a,	// (0x0006c526) main_clock2_list_pane

0xba94,	// (0x0006c550) main_clock2_pane_t1_ParamLimits

0xba94,	// (0x0006c550) main_clock2_pane_t1

0xbac2,	// (0x0006c57e) main_clock2_pane_t2_ParamLimits

0xbac2,	// (0x0006c57e) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x000702e7) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x000702e7) main_clock2_pane_t

0xbb2b,	// (0x0006c5e7) popup_clock_analogue_window_cp03_ParamLimits

0xbb2b,	// (0x0006c5e7) popup_clock_analogue_window_cp03

0xbb4b,	// (0x0006c607) popup_clock_digital_window_cp02_ParamLimits

0xbb4b,	// (0x0006c607) popup_clock_digital_window_cp02

0xbbbc,	// (0x0006c678) main_clock2_list_single_pane_ParamLimits

0xbbbc,	// (0x0006c678) main_clock2_list_single_pane

0x855f,	// (0x0006901b) list_highlight_pane_cp05

0x161a,	// (0x000620d6) main_clock2_list_single_pane_t1

0x6da0,	// (0x0006785c) popup_toolbar_window_cp04_ParamLimits

0xb15b,	// (0x0006bc17) camera2_autofocus_pane_g2_ParamLimits

0xb15b,	// (0x0006bc17) camera2_autofocus_pane_g2

0xb167,	// (0x0006bc23) camera2_autofocus_pane_g3_ParamLimits

0xb167,	// (0x0006bc23) camera2_autofocus_pane_g3

0xb173,	// (0x0006bc2f) camera2_autofocus_pane_g4_ParamLimits

0xb173,	// (0x0006bc2f) camera2_autofocus_pane_g4

0xb17f,	// (0x0006bc3b) camera2_autofocus_pane_g5_ParamLimits

0xb17f,	// (0x0006bc3b) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00070230) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00070230) camera2_autofocus_pane_g

0xb344,	// (0x0006be00) camera2_autofocus_pane_cp_g2

0xb34c,	// (0x0006be08) camera2_autofocus_pane_cp_g3

0xb354,	// (0x0006be10) camera2_autofocus_pane_cp_g4

0xb35c,	// (0x0006be18) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00070296) camera2_autofocus_pane_cp_g

0xb94f,	// (0x0006c40b) popup_dialer_spcha_window

0x025e,	// (0x00060d1a) bg_popup_sub_pane_cp07

0x1628,	// (0x000620e4) list_spcha_pane

0x1630,	// (0x000620ec) list_single_spcha_pane_ParamLimits

0x1630,	// (0x000620ec) list_single_spcha_pane

0x025e,	// (0x00060d1a) list_highlight_pane_cp06

0x1641,	// (0x000620fd) list_single_spcha_pane_t1

0x9df6,	// (0x0006a8b2) popup_call2_audio_out_window_g4_ParamLimits

0x9df6,	// (0x0006a8b2) popup_call2_audio_out_window_g4

0x025e,	// (0x00060d1a) main_imed2_pane

0xa6e0,	// (0x0006b19c) popup_imed_adjust2_window

0xa6f3,	// (0x0006b1af) popup_imed_trans_window_ParamLimits

0xa6f3,	// (0x0006b1af) popup_imed_trans_window

0xeff0,	// (0x0006faac) popup_blid_sat_info2_window_t1

0xeffe,	// (0x0006faba) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x000701c5) popup_blid_sat_info2_window_t

0xbc66,	// (0x0006c722) aid_size_cell_colour_35

0xbc80,	// (0x0006c73c) aid_size_cell_colour_112

0xbc97,	// (0x0006c753) aid_size_cell_effect

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp02

0xbcb1,	// (0x0006c76d) heading_imed_pane

0xbcbd,	// (0x0006c779) listscroll_imed_pane

0x164f,	// (0x0006210b) heading_imed_pane_g1

0x1657,	// (0x00062113) heading_imed_pane_t1

0x1665,	// (0x00062121) grid_imed_colour_35_pane_ParamLimits

0x1665,	// (0x00062121) grid_imed_colour_35_pane

0xbcc9,	// (0x0006c785) grid_imed_effect_pane

0x1681,	// (0x0006213d) list_imed_aspect_pane

0xbcd9,	// (0x0006c795) scroll_pane_cp027_ParamLimits

0xbcd9,	// (0x0006c795) scroll_pane_cp027

0xbce5,	// (0x0006c7a1) cell_imed_effect_pane_ParamLimits

0xbce5,	// (0x0006c7a1) cell_imed_effect_pane

0x1689,	// (0x00062145) cell_imed_colour_pane_ParamLimits

0x1689,	// (0x00062145) cell_imed_colour_pane

0x16d3,	// (0x0006218f) cell_imed_colour_pane_g1_ParamLimits

0x16d3,	// (0x0006218f) cell_imed_colour_pane_g1

0x16e4,	// (0x000621a0) hgihlgiht_grid_pane_cp016_ParamLimits

0x16e4,	// (0x000621a0) hgihlgiht_grid_pane_cp016

0xbd01,	// (0x0006c7bd) cell_imed_effect_pane_g1

0xbd09,	// (0x0006c7c5) grid_highlight_pane_cp017

0x16f5,	// (0x000621b1) list_imed_single_pane_ParamLimits

0x16f5,	// (0x000621b1) list_imed_single_pane

0x025e,	// (0x00060d1a) list_highlight_pane_cp07

0x1709,	// (0x000621c5) list_imed_aspect_pane_comp1_t1

0xa628,	// (0x0006b0e4) bg_tb_trans_pane_cp05

0x172b,	// (0x000621e7) popup_imed_adjust2_window_g1

0x1752,	// (0x0006220e) popup_imed_adjust2_window_t1

0x176a,	// (0x00062226) slider_imed_adjust_pane

0x177e,	// (0x0006223a) slider_imed_adjust_pane_g1

0x178e,	// (0x0006224a) slider_imed_adjust_pane_g2

0x179e,	// (0x0006225a) slider_imed_adjust_pane_g3

0x17af,	// (0x0006226b) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00070304) slider_imed_adjust_pane_g

0xbd12,	// (0x0006c7ce) aid_size_cell_clipart2

0xbd1e,	// (0x0006c7da) grid_imed_clipart_pane

0x17c0,	// (0x0006227c) scroll_pane_cp031

0xbd28,	// (0x0006c7e4) cell_imed_clipart_pane_ParamLimits

0xbd28,	// (0x0006c7e4) cell_imed_clipart_pane

0xbd46,	// (0x0006c802) cell_imed_clipart_pane_g1

0x025e,	// (0x00060d1a) grid_highlight_pane_cp014

0xba76,	// (0x0006c532) main_clock2_pane_g1_ParamLimits

0xba76,	// (0x0006c532) main_clock2_pane_g1

0xbb67,	// (0x0006c623) aid_call2_pane_cp10

0xbb79,	// (0x0006c635) aid_call_pane_cp10

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g1

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g2

0xbb8b,	// (0x0006c647) popup_clock_analogue_window_cp10_g3

0xbb8b,	// (0x0006c647) popup_clock_analogue_window_cp10_g4

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x000702f2) popup_clock_analogue_window_cp10_g

0xbb9d,	// (0x0006c659) popup_clock_analogue_window_cp10_t1

0xbbce,	// (0x0006c68a) clock_digital_number_pane_cp10_ParamLimits

0xbbce,	// (0x0006c68a) clock_digital_number_pane_cp10

0xbbe6,	// (0x0006c6a2) clock_digital_number_pane_cp11_ParamLimits

0xbbe6,	// (0x0006c6a2) clock_digital_number_pane_cp11

0xbbfe,	// (0x0006c6ba) clock_digital_number_pane_cp12_ParamLimits

0xbbfe,	// (0x0006c6ba) clock_digital_number_pane_cp12

0xbc16,	// (0x0006c6d2) clock_digital_number_pane_cp13_ParamLimits

0xbc16,	// (0x0006c6d2) clock_digital_number_pane_cp13

0xbc2e,	// (0x0006c6ea) clock_digital_separator_pane_cp10_ParamLimits

0xbc2e,	// (0x0006c6ea) clock_digital_separator_pane_cp10

0xbc46,	// (0x0006c702) popup_clock_digital_window_cp02_t1_ParamLimits

0xbc46,	// (0x0006c702) popup_clock_digital_window_cp02_t1

0x092d,	// (0x000613e9) clock_digital_number_pane_cp10_g1

0x092d,	// (0x000613e9) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0007030d) clock_digital_number_pane_cp10_g

0x092d,	// (0x000613e9) clock_digital_separator_pane_cp10_g1

0x092d,	// (0x000613e9) clock_digital_separator_pane_g2_cp10

0x852f,	// (0x00068feb) navi_pane_vded_g4

0x8538,	// (0x00068ff4) navi_pane_vded_g5

0x8541,	// (0x00068ffd) navi_pane_vded_t1

0x025e,	// (0x00060d1a) main_vded_pane

0xbd4f,	// (0x0006c80b) main_vded_pane_g1

0xbd5b,	// (0x0006c817) main_vded_pane_g2

0xbd65,	// (0x0006c821) main_vded_pane_g3

0x0002,

0xf856,	// (0x00070312) main_vded_pane_g

0xbd6f,	// (0x0006c82b) main_vded_pane_t1

0xbd7d,	// (0x0006c839) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00070319) main_vded_pane_t

0xbd8b,	// (0x0006c847) vded_slider_pane

0xbd95,	// (0x0006c851) vded_video_pane

0x17c8,	// (0x00062284) vded_video_pane_g1

0xbda1,	// (0x0006c85d) vded_video_pane_g2

0x11e8,	// (0x00061ca4) vded_video_pane_g3

0x0002,

0xf862,	// (0x0007031e) vded_video_pane_g

0x17d2,	// (0x0006228e) vded_slider_pane_g1

0xef05,	// (0x0006f9c1) vded_slider_pane_g2

0x17db,	// (0x00062297) vded_slider_pane_g3

0x17e4,	// (0x000622a0) vded_slider_pane_g4

0x17ed,	// (0x000622a9) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00070325) vded_slider_pane_g

0xb87d,	// (0x0006c339) mup3_rocker_pane_ParamLimits

0xb87d,	// (0x0006c339) mup3_rocker_pane

0xbdaa,	// (0x0006c866) mup3_control_keys_pane_g1

0xbdb2,	// (0x0006c86e) mup3_control_keys_pane_g2

0xbdba,	// (0x0006c876) mup3_control_keys_pane_g3

0xbdc2,	// (0x0006c87e) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00070330) mup3_control_keys_pane_g

0x5f3f,	// (0x000669fb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5f3f,	// (0x000669fb) popup_toolbar2_fixed_window_cp01

0xb899,	// (0x0006c355) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb899,	// (0x0006c355) popup_toolbar2_fixed_window_cp02

0x9735,	// (0x0006a1f1) popup_call2_audio_second_window_t4_ParamLimits

0x9735,	// (0x0006a1f1) popup_call2_audio_second_window_t4

0x9c63,	// (0x0006a71f) popup_call2_audio_first_window_t6_ParamLimits

0x9c63,	// (0x0006a71f) popup_call2_audio_first_window_t6

0x9ef9,	// (0x0006a9b5) popup_call2_audio_out_window_t6_ParamLimits

0x9ef9,	// (0x0006a9b5) popup_call2_audio_out_window_t6

0x025e,	// (0x00060d1a) main_vitu_pane

0xbdd2,	// (0x0006c88e) aid_size_cell_itu_ParamLimits

0xbdd2,	// (0x0006c88e) aid_size_cell_itu

0x5f67,	// (0x00066a23) bg_popup_window_pane_cp08_ParamLimits

0x5f67,	// (0x00066a23) bg_popup_window_pane_cp08

0xbde0,	// (0x0006c89c) field_vitu_entry_pane_ParamLimits

0xbde0,	// (0x0006c89c) field_vitu_entry_pane

0xbdef,	// (0x0006c8ab) grid_vitu_function_pane_ParamLimits

0xbdef,	// (0x0006c8ab) grid_vitu_function_pane

0xbdff,	// (0x0006c8bb) grid_vitu_itu_pane_ParamLimits

0xbdff,	// (0x0006c8bb) grid_vitu_itu_pane

0xbe0f,	// (0x0006c8cb) cell_vitu_itu_pane_ParamLimits

0xbe0f,	// (0x0006c8cb) cell_vitu_itu_pane

0xbe26,	// (0x0006c8e2) cell_vitu_function_pane_ParamLimits

0xbe26,	// (0x0006c8e2) cell_vitu_function_pane

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp08_ParamLimits

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp08

0xbe3a,	// (0x0006c8f6) field_vitu_entry_pane_t1_ParamLimits

0xbe3a,	// (0x0006c8f6) field_vitu_entry_pane_t1

0x180e,	// (0x000622ca) field_vitu_entry_pane_t2_ParamLimits

0x180e,	// (0x000622ca) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0007033e) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0007033e) field_vitu_entry_pane_t

0x182b,	// (0x000622e7) bg_button_pane_cp05_ParamLimits

0x182b,	// (0x000622e7) bg_button_pane_cp05

0xbe54,	// (0x0006c910) cell_vitu_itu_pane_g1

0xbe6c,	// (0x0006c928) cell_vitu_itu_pane_t1_ParamLimits

0xbe6c,	// (0x0006c928) cell_vitu_itu_pane_t1

0xbe7e,	// (0x0006c93a) cell_vitu_itu_pane_t2_ParamLimits

0xbe7e,	// (0x0006c93a) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00070343) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00070343) cell_vitu_itu_pane_t

0x1839,	// (0x000622f5) bg_button_pane_cp07

0xbeb3,	// (0x0006c96f) cell_vitu_function_pane_g1

0x61e9,	// (0x00066ca5) main_calc_pane_g1

0x5d3f,	// (0x000667fb) aid_visual_content_pane

0x025e,	// (0x00060d1a) main_vradio_pane

0xbebc,	// (0x0006c978) main_vradio_pane_g1_ParamLimits

0xbebc,	// (0x0006c978) main_vradio_pane_g1

0x1843,	// (0x000622ff) main_vradio_pane_g2_ParamLimits

0x1843,	// (0x000622ff) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0007034a) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0007034a) main_vradio_pane_g

0xbeca,	// (0x0006c986) main_vradio_pane_t1_ParamLimits

0xbeca,	// (0x0006c986) main_vradio_pane_t1

0xbedc,	// (0x0006c998) main_vradio_pane_t2_ParamLimits

0xbedc,	// (0x0006c998) main_vradio_pane_t2

0x1850,	// (0x0006230c) main_vradio_pane_t3_ParamLimits

0x1850,	// (0x0006230c) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0007034f) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0007034f) main_vradio_pane_t

0xbeee,	// (0x0006c9aa) vradio_rocker_control_pane_ParamLimits

0xbeee,	// (0x0006c9aa) vradio_rocker_control_pane

0xbefa,	// (0x0006c9b6) vradio_station_info_pane_ParamLimits

0xbefa,	// (0x0006c9b6) vradio_station_info_pane

0x1864,	// (0x00062320) vradio_frequency_info_pane_ParamLimits

0x1864,	// (0x00062320) vradio_frequency_info_pane

0x11e8,	// (0x00061ca4) vradio_station_info_pane_g1

0x1873,	// (0x0006232f) vradio_station_info_pane_t1_ParamLimits

0x1873,	// (0x0006232f) vradio_station_info_pane_t1

0x1895,	// (0x00062351) vradio_station_info_pane_t2_ParamLimits

0x1895,	// (0x00062351) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00070356) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00070356) vradio_station_info_pane_t

0x18a7,	// (0x00062363) vradio_tuning_pane

0x18af,	// (0x0006236b) vradio_rocker_control_pane_g1

0x18b7,	// (0x00062373) vradio_rocker_control_pane_g2

0x18bf,	// (0x0006237b) vradio_rocker_control_pane_g3

0x18c7,	// (0x00062383) vradio_rocker_control_pane_g4

0x18cf,	// (0x0006238b) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0007035b) vradio_rocker_control_pane_g

0xbf07,	// (0x0006c9c3) vradio_frequency_info_pane_g1

0x18d7,	// (0x00062393) vradio_frequency_info_pane_t1_ParamLimits

0x18d7,	// (0x00062393) vradio_frequency_info_pane_t1

0xbf11,	// (0x0006c9cd) vradio_tuning_pane_g1

0xbf1c,	// (0x0006c9d8) vradio_tuning_pane_t1

0x0284,	// (0x00060d40) area_side_right_pane_ParamLimits

0x0284,	// (0x00060d40) area_side_right_pane

0xa5d8,	// (0x0006b094) status_small_pane_g1

0xa5e0,	// (0x0006b09c) status_small_pane_g2

0xa5e9,	// (0x0006b0a5) status_small_pane_g3

0xa5f2,	// (0x0006b0ae) status_small_pane_g4

0x0003,

0xf65f,	// (0x0007011b) status_small_pane_g

0xa5fb,	// (0x0006b0b7) status_small_pane_t1

0x025e,	// (0x00060d1a) main_video3_pane

0x18eb,	// (0x000623a7) cams_zoom_vslider_pane

0x18f3,	// (0x000623af) image3_wide_pane_ParamLimits

0x18f3,	// (0x000623af) image3_wide_pane

0x190d,	// (0x000623c9) image3_wide_small_pane

0x1919,	// (0x000623d5) main_video3_pane_g1_ParamLimits

0x1919,	// (0x000623d5) main_video3_pane_g1

0x1935,	// (0x000623f1) main_video3_pane_g2_ParamLimits

0x1935,	// (0x000623f1) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00070366) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00070366) main_video3_pane_g

0x1951,	// (0x0006240d) main_video3_pane_t1_ParamLimits

0x1951,	// (0x0006240d) main_video3_pane_t1

0x197c,	// (0x00062438) main_video3_pane_t2_ParamLimits

0x197c,	// (0x00062438) main_video3_pane_t2

0x19a9,	// (0x00062465) main_video3_pane_t3_ParamLimits

0x19a9,	// (0x00062465) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0007036b) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0007036b) main_video3_pane_t

0x19d6,	// (0x00062492) cams_zoom_vslider_pane_g1

0x19df,	// (0x0006249b) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00070372) cams_zoom_vslider_pane_g

0x19e7,	// (0x000624a3) small_slider_vertical_pane

0x11e8,	// (0x00061ca4) small_slider_vertical_pane_g1

0x11e8,	// (0x00061ca4) small_slider_vertical_pane_g2

0x19ef,	// (0x000624ab) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00070377) small_slider_vertical_pane_g

0x025e,	// (0x00060d1a) main_hwr_training_pane

0x19f8,	// (0x000624b4) hwr_training_instruct_pane_ParamLimits

0x19f8,	// (0x000624b4) hwr_training_instruct_pane

0xbf2b,	// (0x0006c9e7) hwr_training_navi_pane_ParamLimits

0xbf2b,	// (0x0006c9e7) hwr_training_navi_pane

0xbf45,	// (0x0006ca01) hwr_training_write_pane_ParamLimits

0xbf45,	// (0x0006ca01) hwr_training_write_pane

0x025e,	// (0x00060d1a) bg_frame_shadow_pane

0x1a2f,	// (0x000624eb) hwr_training_write_pane_g1

0x1a37,	// (0x000624f3) hwr_training_write_pane_g2

0x1a3f,	// (0x000624fb) hwr_training_write_pane_g3

0x1a47,	// (0x00062503) hwr_training_write_pane_g4

0x1a4f,	// (0x0006250b) hwr_training_write_pane_g5

0x1a57,	// (0x00062513) hwr_training_write_pane_g6

0x1a5f,	// (0x0006251b) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0007037e) hwr_training_write_pane_g

0xbf7d,	// (0x0006ca39) hwr_training_navi_pane_g1_ParamLimits

0xbf7d,	// (0x0006ca39) hwr_training_navi_pane_g1

0xbf8f,	// (0x0006ca4b) hwr_training_navi_pane_g2_ParamLimits

0xbf8f,	// (0x0006ca4b) hwr_training_navi_pane_g2

0xbfa1,	// (0x0006ca5d) hwr_training_navi_pane_g3_ParamLimits

0xbfa1,	// (0x0006ca5d) hwr_training_navi_pane_g3

0xbfb1,	// (0x0006ca6d) hwr_training_navi_pane_g4_ParamLimits

0xbfb1,	// (0x0006ca6d) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0007038d) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0007038d) hwr_training_navi_pane_g

0xbfcb,	// (0x0006ca87) hwr_training_navi_pane_t1

0xbfd9,	// (0x0006ca95) list_single_hwr_training_instruct_pane_ParamLimits

0xbfd9,	// (0x0006ca95) list_single_hwr_training_instruct_pane

0x1a67,	// (0x00062523) list_single_hwr_training_instruct_pane_t1

0xf0f8,	// (0x0006fbb4) bg_frame_shadow_pane_g1

0x1a76,	// (0x00062532) bg_frame_shadow_pane_g2

0x1a7e,	// (0x0006253a) bg_frame_shadow_pane_g3

0x1a86,	// (0x00062542) bg_frame_shadow_pane_g4

0x1a8e,	// (0x0006254a) bg_frame_shadow_pane_g5

0x1a96,	// (0x00062552) bg_frame_shadow_pane_g6

0x1a9e,	// (0x0006255a) bg_frame_shadow_pane_g7

0x0b25,	// (0x000615e1) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00070398) bg_frame_shadow_pane_g

0x025e,	// (0x00060d1a) main_video_tele_dialer_pane

0xbff8,	// (0x0006cab4) aid_size_cell_video_keypad_ParamLimits

0xbff8,	// (0x0006cab4) aid_size_cell_video_keypad

0xc008,	// (0x0006cac4) grid_video_dialer_keypad_pane_ParamLimits

0xc008,	// (0x0006cac4) grid_video_dialer_keypad_pane

0xc03c,	// (0x0006caf8) video_down_pane_cp_ParamLimits

0xc03c,	// (0x0006caf8) video_down_pane_cp

0xc066,	// (0x0006cb22) cell_video_dialer_keypad_pane_ParamLimits

0xc066,	// (0x0006cb22) cell_video_dialer_keypad_pane

0x1aa6,	// (0x00062562) bg_button_pane_cp08_ParamLimits

0x1aa6,	// (0x00062562) bg_button_pane_cp08

0xc07d,	// (0x0006cb39) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc07d,	// (0x0006cb39) cell_video_dialer_keypad_pane_g1

0xb871,	// (0x0006c32d) mup3_rocker2_pane_ParamLimits

0xb871,	// (0x0006c32d) mup3_rocker2_pane

0x11e8,	// (0x00061ca4) mup3_rocker2_pane_g1

0xa644,	// (0x0006b100) main_dialer2_pane

0x025e,	// (0x00060d1a) main_mp4_pane

0xc0c0,	// (0x0006cb7c) main_mp4_pane_g1_ParamLimits

0xc0c0,	// (0x0006cb7c) main_mp4_pane_g1

0xc0ce,	// (0x0006cb8a) main_mp4_pane_g2_ParamLimits

0xc0ce,	// (0x0006cb8a) main_mp4_pane_g2

0xc0dc,	// (0x0006cb98) main_mp4_pane_g3_ParamLimits

0xc0dc,	// (0x0006cb98) main_mp4_pane_g3

0xc12f,	// (0x0006cbeb) main_mp4_pane_g4_ParamLimits

0xc12f,	// (0x0006cbeb) main_mp4_pane_g4

0xc149,	// (0x0006cc05) main_mp4_pane_g5_ParamLimits

0xc149,	// (0x0006cc05) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x000703b8) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x000703b8) main_mp4_pane_g

0xc17d,	// (0x0006cc39) main_mp4_pane_t1_ParamLimits

0xc17d,	// (0x0006cc39) main_mp4_pane_t1

0xc1d9,	// (0x0006cc95) main_mp4_pane_t2_ParamLimits

0xc1d9,	// (0x0006cc95) main_mp4_pane_t2

0x1ab2,	// (0x0006256e) main_mp4_pane_t3_ParamLimits

0x1ab2,	// (0x0006256e) main_mp4_pane_t3

0xc22b,	// (0x0006cce7) main_mp4_pane_t4_ParamLimits

0xc22b,	// (0x0006cce7) main_mp4_pane_t4

0x0003,

0xf909,	// (0x000703c5) main_mp4_pane_t_ParamLimits

0xf909,	// (0x000703c5) main_mp4_pane_t

0xc26b,	// (0x0006cd27) mp4_progress_pane_ParamLimits

0xc26b,	// (0x0006cd27) mp4_progress_pane

0xc2b5,	// (0x0006cd71) mp4_rocker_pane_ParamLimits

0xc2b5,	// (0x0006cd71) mp4_rocker_pane

0x1ada,	// (0x00062596) mp4_progress_pane_t1

0x1af3,	// (0x000625af) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x000703ce) mp4_progress_pane_t

0x1b0c,	// (0x000625c8) mup_progress_pane_cp04

0x11e8,	// (0x00061ca4) mp4_rocker_pane_g1

0xc2d7,	// (0x0006cd93) aid_cell_size_keypad2_ParamLimits

0xc2d7,	// (0x0006cd93) aid_cell_size_keypad2

0xc2e7,	// (0x0006cda3) dialer2_ne_pane_ParamLimits

0xc2e7,	// (0x0006cda3) dialer2_ne_pane

0xc2f3,	// (0x0006cdaf) grid_dialer2_keypad_pane_ParamLimits

0xc2f3,	// (0x0006cdaf) grid_dialer2_keypad_pane

0x242f,	// (0x00062eeb) bg_popup_call_pane_cp07_ParamLimits

0x242f,	// (0x00062eeb) bg_popup_call_pane_cp07

0xc301,	// (0x0006cdbd) dialer2_ne_pane_t1_ParamLimits

0xc301,	// (0x0006cdbd) dialer2_ne_pane_t1

0xc326,	// (0x0006cde2) cell_dialer2_keypad_pane_ParamLimits

0xc326,	// (0x0006cde2) cell_dialer2_keypad_pane

0x1b34,	// (0x000625f0) bg_button_pane_pane_cp04_ParamLimits

0x1b34,	// (0x000625f0) bg_button_pane_pane_cp04

0xc33d,	// (0x0006cdf9) cell_dialer2_keypad_pane_g1_ParamLimits

0xc33d,	// (0x0006cdf9) cell_dialer2_keypad_pane_g1

0x6cdb,	// (0x00067797) aid_placing_vt_set_content_ParamLimits

0x6cdb,	// (0x00067797) aid_placing_vt_set_content

0x6cf5,	// (0x000677b1) aid_placing_vt_set_title_ParamLimits

0x6cf5,	// (0x000677b1) aid_placing_vt_set_title

0x025e,	// (0x00060d1a) main_image3_pane

0xc3d7,	// (0x0006ce93) area_side_right_pane_cp01_ParamLimits

0xc3d7,	// (0x0006ce93) area_side_right_pane_cp01

0x29e8,	// (0x000634a4) main_image3_pane_g1_ParamLimits

0x29e8,	// (0x000634a4) main_image3_pane_g1

0xc406,	// (0x0006cec2) main_image3_pane_g2_ParamLimits

0xc406,	// (0x0006cec2) main_image3_pane_g2

0xc41f,	// (0x0006cedb) main_image3_pane_g3_ParamLimits

0xc41f,	// (0x0006cedb) main_image3_pane_g3

0xc438,	// (0x0006cef4) main_image3_pane_g4_ParamLimits

0xc438,	// (0x0006cef4) main_image3_pane_g4

0x0003,

0xf921,	// (0x000703dd) main_image3_pane_g_ParamLimits

0xf921,	// (0x000703dd) main_image3_pane_g

0xc451,	// (0x0006cf0d) main_image3_pane_t1_ParamLimits

0xc451,	// (0x0006cf0d) main_image3_pane_t1

0xc476,	// (0x0006cf32) main_image3_pane_t2_ParamLimits

0xc476,	// (0x0006cf32) main_image3_pane_t2

0xc495,	// (0x0006cf51) main_image3_pane_t3_ParamLimits

0xc495,	// (0x0006cf51) main_image3_pane_t3

0x0003,

0xf92a,	// (0x000703e6) main_image3_pane_t_ParamLimits

0xf92a,	// (0x000703e6) main_image3_pane_t

0x5f67,	// (0x00066a23) grid_sctrl_middle_pane_cp01_ParamLimits

0x5f67,	// (0x00066a23) grid_sctrl_middle_pane_cp01

0xc4f6,	// (0x0006cfb2) cell_sctrl_middle_pane_cp01_ParamLimits

0xc4f6,	// (0x0006cfb2) cell_sctrl_middle_pane_cp01

0xc507,	// (0x0006cfc3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc507,	// (0x0006cfc3) cell_sctrl_middle_pane_cp01_g1

0x025e,	// (0x00060d1a) main_call4_pane

0xc514,	// (0x0006cfd0) aid_size_button_call4_ParamLimits

0xc514,	// (0x0006cfd0) aid_size_button_call4

0xc546,	// (0x0006d002) call4_windows_pane_ParamLimits

0xc546,	// (0x0006d002) call4_windows_pane

0xc562,	// (0x0006d01e) grid_call4_button_pane_ParamLimits

0xc562,	// (0x0006d01e) grid_call4_button_pane

0x1b40,	// (0x000625fc) call4_windows_conf_pane

0x1b5b,	// (0x00062617) popup_call4_audio_first_window_ParamLimits

0x1b5b,	// (0x00062617) popup_call4_audio_first_window

0x1ba9,	// (0x00062665) popup_call4_audio_second_window_ParamLimits

0x1ba9,	// (0x00062665) popup_call4_audio_second_window

0x1bbf,	// (0x0006267b) popup_call4_audio_wait_window_ParamLimits

0x1bbf,	// (0x0006267b) popup_call4_audio_wait_window

0xc586,	// (0x0006d042) cell_call4_button_pane_ParamLimits

0xc586,	// (0x0006d042) cell_call4_button_pane

0xc5a9,	// (0x0006d065) bg_button_pane_cp09_ParamLimits

0xc5a9,	// (0x0006d065) bg_button_pane_cp09

0xc5b5,	// (0x0006d071) cell_call4_button_pane_g1_ParamLimits

0xc5b5,	// (0x0006d071) cell_call4_button_pane_g1

0xc5c2,	// (0x0006d07e) cell_call4_button_pane_t1_ParamLimits

0xc5c2,	// (0x0006d07e) cell_call4_button_pane_t1

0x1c07,	// (0x000626c3) popup_call4_audio_conf_window_ParamLimits

0x1c07,	// (0x000626c3) popup_call4_audio_conf_window

0xb8a6,	// (0x0006c362) mup3_progress_pane_t1_ParamLimits

0xb8bd,	// (0x0006c379) mup3_progress_pane_t2_ParamLimits

0x1507,	// (0x00061fc3) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x000702bf) mup3_progress_pane_t_ParamLimits

0x151e,	// (0x00061fda) mup_progress_pane_cp03_ParamLimits

0xbdca,	// (0x0006c886) mup3_control_keys_pane_g4_copy1

0xc299,	// (0x0006cd55) mp4_rocker2_pane_ParamLimits

0xc299,	// (0x0006cd55) mp4_rocker2_pane

0x1c29,	// (0x000626e5) mp4_rocker2_pane_g1

0x1c21,	// (0x000626dd) mp4_rocker2_pane_g2

0xc5d4,	// (0x0006d090) mp4_rocker2_pane_g3

0xc5dc,	// (0x0006d098) mp4_rocker2_pane_g4

0xc5e4,	// (0x0006d0a0) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x000703ef) mp4_rocker2_pane_g

0x025e,	// (0x00060d1a) main_camera4_pane

0x025e,	// (0x00060d1a) main_video4_pane

0xc018,	// (0x0006cad4) main_video_tele_dialer_pane_t1_ParamLimits

0xc018,	// (0x0006cad4) main_video_tele_dialer_pane_t1

0xc02a,	// (0x0006cae6) main_video_tele_dialer_pane_t2_ParamLimits

0xc02a,	// (0x0006cae6) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x000703a9) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x000703a9) main_video_tele_dialer_pane_t

0xc604,	// (0x0006d0c0) cam4_autofocus_pane_ParamLimits

0xc604,	// (0x0006d0c0) cam4_autofocus_pane

0xc610,	// (0x0006d0cc) cam4_image_uncrop_pane_ParamLimits

0xc610,	// (0x0006d0cc) cam4_image_uncrop_pane

0xc629,	// (0x0006d0e5) cam4_indicators_pane_ParamLimits

0xc629,	// (0x0006d0e5) cam4_indicators_pane

0xc645,	// (0x0006d101) main_camera4_pane_g1_ParamLimits

0xc645,	// (0x0006d101) main_camera4_pane_g1

0xc651,	// (0x0006d10d) main_camera4_pane_g2_ParamLimits

0xc651,	// (0x0006d10d) main_camera4_pane_g2

0xc65d,	// (0x0006d119) main_camera4_pane_g3_ParamLimits

0xc65d,	// (0x0006d119) main_camera4_pane_g3

0xc669,	// (0x0006d125) main_camera4_pane_g4_ParamLimits

0xc669,	// (0x0006d125) main_camera4_pane_g4

0xc675,	// (0x0006d131) main_camera4_pane_g5_ParamLimits

0xc675,	// (0x0006d131) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x000703fa) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x000703fa) main_camera4_pane_g

0xc68f,	// (0x0006d14b) main_camera4_pane_t1_ParamLimits

0xc68f,	// (0x0006d14b) main_camera4_pane_t1

0x1418,	// (0x00061ed4) bg_tb_trans_pane_cp06

0xc6bb,	// (0x0006d177) cam4_indicators_pane_g1

0xc6c8,	// (0x0006d184) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0007040c) cam4_indicators_pane_g

0xc6e8,	// (0x0006d1a4) cam4_indicators_pane_t1

0xc712,	// (0x0006d1ce) main_video4_pane_g1_ParamLimits

0xc712,	// (0x0006d1ce) main_video4_pane_g1

0xc71e,	// (0x0006d1da) main_video4_pane_g2_ParamLimits

0xc71e,	// (0x0006d1da) main_video4_pane_g2

0xc72a,	// (0x0006d1e6) main_video4_pane_g3_ParamLimits

0xc72a,	// (0x0006d1e6) main_video4_pane_g3

0xc736,	// (0x0006d1f2) main_video4_pane_g4_ParamLimits

0xc736,	// (0x0006d1f2) main_video4_pane_g4

0x0004,

0xf957,	// (0x00070413) main_video4_pane_g_ParamLimits

0xf957,	// (0x00070413) main_video4_pane_g

0xc758,	// (0x0006d214) vid4_indicators_pane_ParamLimits

0xc758,	// (0x0006d214) vid4_indicators_pane

0xc776,	// (0x0006d232) video4_image_uncrop_cif_pane_ParamLimits

0xc776,	// (0x0006d232) video4_image_uncrop_cif_pane

0xc785,	// (0x0006d241) video4_image_uncrop_nhd_pane_ParamLimits

0xc785,	// (0x0006d241) video4_image_uncrop_nhd_pane

0xc610,	// (0x0006d0cc) video4_image_uncrop_vga_pane_ParamLimits

0xc610,	// (0x0006d0cc) video4_image_uncrop_vga_pane

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp07

0xc6bb,	// (0x0006d177) vid4_indicators_pane_g1

0xc79e,	// (0x0006d25a) vid4_indicators_pane_g2

0xc7ab,	// (0x0006d267) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0007041e) vid4_indicators_pane_g

0xc7d8,	// (0x0006d294) vid4_indicators_pane_t1

0xc7f2,	// (0x0006d2ae) cam4_autofocus_pane_g1

0xc7fa,	// (0x0006d2b6) cam4_autofocus_pane_g2

0xc802,	// (0x0006d2be) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00070429) cam4_autofocus_pane_g

0xc80a,	// (0x0006d2c6) cam4_autofocus_pane_g3_copy1

0xc04a,	// (0x0006cb06) video_down_pane_cp_t1

0xc058,	// (0x0006cb14) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x000703ae) video_down_pane_cp_t

0x5f67,	// (0x00066a23) popup_vitu2_window_ParamLimits

0x5f67,	// (0x00066a23) popup_vitu2_window

0xc812,	// (0x0006d2ce) aid_size_cell2_itu2_ParamLimits

0xc812,	// (0x0006d2ce) aid_size_cell2_itu2

0xc834,	// (0x0006d2f0) aid_size_cell_itu2_ParamLimits

0xc834,	// (0x0006d2f0) aid_size_cell_itu2

0x242f,	// (0x00062eeb) bg_popup_window_pane_cp09_ParamLimits

0x242f,	// (0x00062eeb) bg_popup_window_pane_cp09

0xc878,	// (0x0006d334) field_vitu2_entry_pane_ParamLimits

0xc878,	// (0x0006d334) field_vitu2_entry_pane

0xc898,	// (0x0006d354) grid_vitu2_function_pane_ParamLimits

0xc898,	// (0x0006d354) grid_vitu2_function_pane

0xc8dc,	// (0x0006d398) grid_vitu2_itu_pane_ParamLimits

0xc8dc,	// (0x0006d398) grid_vitu2_itu_pane

0xc950,	// (0x0006d40c) cell_vitu2_itu_pane_ParamLimits

0xc950,	// (0x0006d40c) cell_vitu2_itu_pane

0xc967,	// (0x0006d423) cell_vitu2_function_pane_ParamLimits

0xc967,	// (0x0006d423) cell_vitu2_function_pane

0x1c31,	// (0x000626ed) bg_popup_call_pane_cp08_ParamLimits

0x1c31,	// (0x000626ed) bg_popup_call_pane_cp08

0x1c4a,	// (0x00062706) field_vitu2_entry_pane_g1

0x1c56,	// (0x00062712) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00070430) field_vitu2_entry_pane_g

0x5033,	// (0x00065aef) field_vitu2_entry_pane_t1_ParamLimits

0x5033,	// (0x00065aef) field_vitu2_entry_pane_t1

0x504e,	// (0x00065b0a) field_vitu2_entry_pane_t2_ParamLimits

0x504e,	// (0x00065b0a) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00070437) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00070437) field_vitu2_entry_pane_t

0xc9ab,	// (0x0006d467) bg_button_pane_cp010_ParamLimits

0xc9ab,	// (0x0006d467) bg_button_pane_cp010

0xc9b9,	// (0x0006d475) cell_vitu2_itu_pane_g1

0xc9d7,	// (0x0006d493) cell_vitu2_itu_pane_t1_ParamLimits

0xc9d7,	// (0x0006d493) cell_vitu2_itu_pane_t1

0x506b,	// (0x00065b27) cell_vitu2_itu_pane_t2_ParamLimits

0x506b,	// (0x00065b27) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00070441) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00070441) cell_vitu2_itu_pane_t

0xa636,	// (0x0006b0f2) bg_button_pane_cp011

0xca29,	// (0x0006d4e5) cell_vitu2_function_pane_g1

0x025e,	// (0x00060d1a) main_myfav_hc_pane

0xc4d7,	// (0x0006cf93) popup_image3_note_pane_ParamLimits

0xc4d7,	// (0x0006cf93) popup_image3_note_pane

0xc4e5,	// (0x0006cfa1) popup_image3_tool_bar_pane_ParamLimits

0xc4e5,	// (0x0006cfa1) popup_image3_tool_bar_pane

0x50d9,	// (0x00065b95) cell_vitu2_itu_pane_t3_ParamLimits

0x50d9,	// (0x00065b95) cell_vitu2_itu_pane_t3

0x025e,	// (0x00060d1a) bg_popup_trans_pane

0x1cb2,	// (0x0006276e) grid_image3_tool_bar_pane

0x1cbc,	// (0x00062778) bg_popup_trans_pane_g1

0x0f1e,	// (0x000619da) bg_popup_trans_pane_g2

0x1cc4,	// (0x00062780) bg_popup_trans_pane_g3

0x1ccc,	// (0x00062788) bg_popup_trans_pane_g4

0x1cd4,	// (0x00062790) bg_popup_trans_pane_g5

0x1cdc,	// (0x00062798) bg_popup_trans_pane_g6

0x1ce4,	// (0x000627a0) bg_popup_trans_pane_g7

0x1cec,	// (0x000627a8) bg_popup_trans_pane_g8

0x0efe,	// (0x000619ba) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00070448) bg_popup_trans_pane_g

0x1cf4,	// (0x000627b0) cell_image3_tool_bar_pane_ParamLimits

0x1cf4,	// (0x000627b0) cell_image3_tool_bar_pane

0x11e8,	// (0x00061ca4) cell_image3_tool_bar_pane_g1

0x025e,	// (0x00060d1a) bg_popup_trans_pane_cp1

0x1d0a,	// (0x000627c6) popup_image3_note_pane_t1

0x1d18,	// (0x000627d4) popup_image3_note_pane_t2

0x1d26,	// (0x000627e2) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0007045b) popup_image3_note_pane_t

0x1d36,	// (0x000627f2) popup_image3_note_pane_t3_copy1

0xca3d,	// (0x0006d4f9) bg_myfav_hc_instruction_pane_ParamLimits

0xca3d,	// (0x0006d4f9) bg_myfav_hc_instruction_pane

0xca55,	// (0x0006d511) cell_myfav_contact_pane_ParamLimits

0xca55,	// (0x0006d511) cell_myfav_contact_pane

0xca6f,	// (0x0006d52b) cell_myfav_contact_pane_cp1_ParamLimits

0xca6f,	// (0x0006d52b) cell_myfav_contact_pane_cp1

0xca87,	// (0x0006d543) cell_myfav_contact_pane_cp2_ParamLimits

0xca87,	// (0x0006d543) cell_myfav_contact_pane_cp2

0xca9f,	// (0x0006d55b) cell_myfav_contact_pane_cp3_ParamLimits

0xca9f,	// (0x0006d55b) cell_myfav_contact_pane_cp3

0xcab6,	// (0x0006d572) cell_myfav_contact_pane_cp4_ParamLimits

0xcab6,	// (0x0006d572) cell_myfav_contact_pane_cp4

0xcacc,	// (0x0006d588) cell_myfav_contact_pane_cp5_ParamLimits

0xcacc,	// (0x0006d588) cell_myfav_contact_pane_cp5

0xcae0,	// (0x0006d59c) cell_myfav_contact_pane_cp6_ParamLimits

0xcae0,	// (0x0006d59c) cell_myfav_contact_pane_cp6

0xcaf4,	// (0x0006d5b0) cell_myfav_contact_pane_cp7_ParamLimits

0xcaf4,	// (0x0006d5b0) cell_myfav_contact_pane_cp7

0x1d44,	// (0x00062800) listscroll_gen_pane_cp05

0xcb0c,	// (0x0006d5c8) main_myfav_hc_pane_g1_ParamLimits

0xcb0c,	// (0x0006d5c8) main_myfav_hc_pane_g1

0xcb26,	// (0x0006d5e2) main_myfav_hc_pane_g2_ParamLimits

0xcb26,	// (0x0006d5e2) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00070462) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00070462) main_myfav_hc_pane_g

0xcb58,	// (0x0006d614) main_myfav_hc_pane_t1_ParamLimits

0xcb58,	// (0x0006d614) main_myfav_hc_pane_t1

0x1d4d,	// (0x00062809) main_myfav_hc_pane_t2_ParamLimits

0x1d4d,	// (0x00062809) main_myfav_hc_pane_t2

0x1d5f,	// (0x0006281b) main_myfav_hc_pane_t3_ParamLimits

0x1d5f,	// (0x0006281b) main_myfav_hc_pane_t3

0xcb6f,	// (0x0006d62b) main_myfav_hc_pane_t4_ParamLimits

0xcb6f,	// (0x0006d62b) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00070469) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00070469) main_myfav_hc_pane_t

0x11e8,	// (0x00061ca4) bg_myfav_hc_instruction_pane_g1

0x1d71,	// (0x0006282d) cell_myfav_contact_pane_g1_ParamLimits

0x1d71,	// (0x0006282d) cell_myfav_contact_pane_g1

0x1d71,	// (0x0006282d) cell_myfav_contact_pane_g2_ParamLimits

0x1d71,	// (0x0006282d) cell_myfav_contact_pane_g2

0x1d7d,	// (0x00062839) cell_myfav_contact_pane_g3_ParamLimits

0x1d7d,	// (0x00062839) cell_myfav_contact_pane_g3

0x14f1,	// (0x00061fad) cell_myfav_contact_pane_g4_ParamLimits

0x14f1,	// (0x00061fad) cell_myfav_contact_pane_g4

0x1d8a,	// (0x00062846) cell_myfav_contact_pane_g5_ParamLimits

0x1d8a,	// (0x00062846) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00070474) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00070474) cell_myfav_contact_pane_g

0xcb40,	// (0x0006d5fc) main_myfav_hc_pane_g3_ParamLimits

0xcb40,	// (0x0006d5fc) main_myfav_hc_pane_g3

0x5e82,	// (0x0006693e) popup_adpt_find_window

0xcb99,	// (0x0006d655) afind_page_pane_ParamLimits

0xcb99,	// (0x0006d655) afind_page_pane

0xcba6,	// (0x0006d662) aid_size_cell_afind_ParamLimits

0xcba6,	// (0x0006d662) aid_size_cell_afind

0xcbc0,	// (0x0006d67c) bg_popup_sub_pane_cp09_ParamLimits

0xcbc0,	// (0x0006d67c) bg_popup_sub_pane_cp09

0xcbcd,	// (0x0006d689) find_pane_cp01_ParamLimits

0xcbcd,	// (0x0006d689) find_pane_cp01

0x1d96,	// (0x00062852) grid_afind_control_pane_ParamLimits

0x1d96,	// (0x00062852) grid_afind_control_pane

0xcbda,	// (0x0006d696) grid_afind_pane_ParamLimits

0xcbda,	// (0x0006d696) grid_afind_pane

0xcbf6,	// (0x0006d6b2) cell_afind_pane_ParamLimits

0xcbf6,	// (0x0006d6b2) cell_afind_pane

0x11e8,	// (0x00061ca4) afind_page_pane_g1

0xcc42,	// (0x0006d6fe) afind_page_pane_g2

0xcc4b,	// (0x0006d707) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0007047f) afind_page_pane_g

0xcc54,	// (0x0006d710) afind_page_pane_t1

0x1daa,	// (0x00062866) cell_afind_grid_control_pane_ParamLimits

0x1daa,	// (0x00062866) cell_afind_grid_control_pane

0x1b34,	// (0x000625f0) bg_button_pane_cp69_ParamLimits

0x1b34,	// (0x000625f0) bg_button_pane_cp69

0xcc74,	// (0x0006d730) cell_afind_pane_g1_ParamLimits

0xcc74,	// (0x0006d730) cell_afind_pane_g1

0xcc81,	// (0x0006d73d) cell_afind_pane_t1_ParamLimits

0xcc81,	// (0x0006d73d) cell_afind_pane_t1

0x0d0d,	// (0x000617c9) bg_button_pane_cp72

0x1db9,	// (0x00062875) cell_afind_grid_control_pane_g1

0x91f3,	// (0x00069caf) aid_image_placing_area_ParamLimits

0x91f3,	// (0x00069caf) aid_image_placing_area

0x17f6,	// (0x000622b2) field_vitu_entry_pane_g1_ParamLimits

0x17f6,	// (0x000622b2) field_vitu_entry_pane_g1

0x1802,	// (0x000622be) field_vitu_entry_pane_g2_ParamLimits

0x1802,	// (0x000622be) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00070339) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00070339) field_vitu_entry_pane_g

0xbe54,	// (0x0006c910) cell_vitu_itu_pane_g1_ParamLimits

0xbe96,	// (0x0006c952) cell_vitu_itu_pane_t3_ParamLimits

0xbe96,	// (0x0006c952) cell_vitu_itu_pane_t3

0x1ada,	// (0x00062596) mp4_progress_pane_t1_ParamLimits

0x1af3,	// (0x000625af) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x000703ce) mp4_progress_pane_t_ParamLimits

0x1b0c,	// (0x000625c8) mup_progress_pane_cp04_ParamLimits

0xcb83,	// (0x0006d63f) main_myfav_hc_pane_t5_ParamLimits

0xcb83,	// (0x0006d63f) main_myfav_hc_pane_t5

0x4cfc,	// (0x000657b8) aid_zoom_text_primary

0x5e82,	// (0x0006693e) popup_adpt_find_window_ParamLimits

0xa636,	// (0x0006b0f2) main_cam_set_pane

0xc637,	// (0x0006d0f3) cam4_zoom_pane_ParamLimits

0xc637,	// (0x0006d0f3) cam4_zoom_pane

0xcc93,	// (0x0006d74f) main_cam_set_pane_g1_ParamLimits

0xcc93,	// (0x0006d74f) main_cam_set_pane_g1

0xcca1,	// (0x0006d75d) main_cam_set_pane_g2_ParamLimits

0xcca1,	// (0x0006d75d) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00070486) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00070486) main_cam_set_pane_g

0xccad,	// (0x0006d769) main_cam_set_pane_t1_ParamLimits

0xccad,	// (0x0006d769) main_cam_set_pane_t1

0xccc9,	// (0x0006d785) main_cset_listscroll_pane_ParamLimits

0xccc9,	// (0x0006d785) main_cset_listscroll_pane

0xccf8,	// (0x0006d7b4) main_cset_slider_pane_ParamLimits

0xccf8,	// (0x0006d7b4) main_cset_slider_pane

0x1dca,	// (0x00062886) main_cset_list_pane_ParamLimits

0x1dca,	// (0x00062886) main_cset_list_pane

0x1dda,	// (0x00062896) scroll_pane_cp028

0xcd19,	// (0x0006d7d5) aid_area_touch_slider

0xcd35,	// (0x0006d7f1) cset_slider_pane

0xcd5f,	// (0x0006d81b) main_cset_slider_pane_g1

0xcd74,	// (0x0006d830) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0007048b) main_cset_slider_pane_g

0x1e13,	// (0x000628cf) main_cset_slider_pane_t1

0xce30,	// (0x0006d8ec) main_cset_slider_pane_t2

0xce4a,	// (0x0006d906) main_cset_slider_pane_t3

0xce64,	// (0x0006d920) main_cset_slider_pane_t4

0xce7e,	// (0x0006d93a) main_cset_slider_pane_t5

0xce9a,	// (0x0006d956) main_cset_slider_pane_t6

0xceaf,	// (0x0006d96b) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x000704b0) main_cset_slider_pane_t

0xcfb3,	// (0x0006da6f) cset_list_set_pane_ParamLimits

0xcfb3,	// (0x0006da6f) cset_list_set_pane

0xcfc4,	// (0x0006da80) aid_position_infowindow_above

0xcfcc,	// (0x0006da88) aid_position_infowindow_below

0xcfd4,	// (0x0006da90) cset_list_set_pane_g1_ParamLimits

0xcfd4,	// (0x0006da90) cset_list_set_pane_g1

0x5126,	// (0x00065be2) cset_list_set_pane_g3_ParamLimits

0x5126,	// (0x00065be2) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x000704cf) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x000704cf) cset_list_set_pane_g

0x5135,	// (0x00065bf1) cset_list_set_pane_t1_ParamLimits

0x5135,	// (0x00065bf1) cset_list_set_pane_t1

0xa636,	// (0x0006b0f2) list_highlight_pane_cp021_ParamLimits

0xa636,	// (0x0006b0f2) list_highlight_pane_cp021

0x8b1b,	// (0x000695d7) cset_slider_pane_g1

0x8b2d,	// (0x000695e9) cset_slider_pane_g2

0x8b24,	// (0x000695e0) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x000704d4) cset_slider_pane_g

0xcfe0,	// (0x0006da9c) aid_area_touch_cam4_zoom

0xcfe8,	// (0x0006daa4) cam4_zoom_cont_pane

0xcff0,	// (0x0006daac) cam4_zoom_pane_g1

0xcff8,	// (0x0006dab4) cam4_zoom_pane_g2

0xd000,	// (0x0006dabc) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x000704db) cam4_zoom_pane_g

0x2791,	// (0x0006324d) cam4_zoom_cont_pane_g1

0x279a,	// (0x00063256) cam4_zoom_cont_pane_g2

0x27a3,	// (0x0006325f) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x000704e2) cam4_zoom_cont_pane_g

0xc52e,	// (0x0006cfea) call4_image_pane_ParamLimits

0xc52e,	// (0x0006cfea) call4_image_pane

0x1b40,	// (0x000625fc) call4_windows_conf_pane_ParamLimits

0x1b87,	// (0x00062643) popup_call4_audio_in_window_ParamLimits

0x1b87,	// (0x00062643) popup_call4_audio_in_window

0x025e,	// (0x00060d1a) bg_popup_call2_act_pane_cp02

0x1bff,	// (0x000626bb) call4_list_conf_pane

0x11e8,	// (0x00061ca4) call4_image_pane_g1

0x11e8,	// (0x00061ca4) call4_image_pane_g2

0x0001,

0xf743,	// (0x000701ff) call4_image_pane_g

0x1ed4,	// (0x00062990) list_single_graphic_popup_conf4_pane_ParamLimits

0x1ed4,	// (0x00062990) list_single_graphic_popup_conf4_pane

0x025e,	// (0x00060d1a) list_highlight_pane_cp022

0x1ee9,	// (0x000629a5) list_single_graphic_popup_conf4_pane_g1

0x8076,	// (0x00068b32) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x000704e9) list_single_graphic_popup_conf4_pane_g

0x1ef1,	// (0x000629ad) list_single_graphic_popup_conf4_pane_t1

0x6df4,	// (0x000678b0) popup_vtel_slider_window_ParamLimits

0x6df4,	// (0x000678b0) popup_vtel_slider_window

0x1b22,	// (0x000625de) dialer2_ne_pane_t2_ParamLimits

0x1b22,	// (0x000625de) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x000703d3) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x000703d3) dialer2_ne_pane_t

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp010_ParamLimits

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp010

0xd008,	// (0x0006dac4) popup_vtel_slider_window_g1_ParamLimits

0xd008,	// (0x0006dac4) popup_vtel_slider_window_g1

0xd014,	// (0x0006dad0) popup_vtel_slider_window_g2_ParamLimits

0xd014,	// (0x0006dad0) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x000704ee) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x000704ee) popup_vtel_slider_window_g

0xd05c,	// (0x0006db18) vtel_slider_pane_ParamLimits

0xd05c,	// (0x0006db18) vtel_slider_pane

0xd06b,	// (0x0006db27) vtel_slider_pane_g1_ParamLimits

0xd06b,	// (0x0006db27) vtel_slider_pane_g1

0xd078,	// (0x0006db34) vtel_slider_pane_g2_ParamLimits

0xd078,	// (0x0006db34) vtel_slider_pane_g2

0xd085,	// (0x0006db41) vtel_slider_pane_g3_ParamLimits

0xd085,	// (0x0006db41) vtel_slider_pane_g3

0xd06b,	// (0x0006db27) vtel_slider_pane_g4_ParamLimits

0xd06b,	// (0x0006db27) vtel_slider_pane_g4

0xd092,	// (0x0006db4e) vtel_slider_pane_g5_ParamLimits

0xd092,	// (0x0006db4e) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x000704f7) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x000704f7) vtel_slider_pane_g

0x025e,	// (0x00060d1a) main_gallery2_pane

0xc85a,	// (0x0006d316) aid_size_row_itut2_dropdow_list_ParamLimits

0xc85a,	// (0x0006d316) aid_size_row_itut2_dropdow_list

0xc8ba,	// (0x0006d376) grid_vitu2_function_top_pane_ParamLimits

0xc8ba,	// (0x0006d376) grid_vitu2_function_top_pane

0xc90c,	// (0x0006d3c8) popup_vitu2_dropdown_list_window_ParamLimits

0xc90c,	// (0x0006d3c8) popup_vitu2_dropdown_list_window

0xc92c,	// (0x0006d3e8) popup_vitu2_match_list_window

0xd09f,	// (0x0006db5b) cell_vitu2_function_top_pane_ParamLimits

0xd09f,	// (0x0006db5b) cell_vitu2_function_top_pane

0xd0bf,	// (0x0006db7b) cell_vitu2_function_top_pane_cp01_ParamLimits

0xd0bf,	// (0x0006db7b) cell_vitu2_function_top_pane_cp01

0xd0dd,	// (0x0006db99) cell_vitu2_function_top_wide_pane_ParamLimits

0xd0dd,	// (0x0006db99) cell_vitu2_function_top_wide_pane

0xa636,	// (0x0006b0f2) bg_button_pane_cp012

0xd0fb,	// (0x0006dbb7) cell_vitu2_function_top_pane_g1

0xd10a,	// (0x0006dbc6) bg_button_pane_cp013_ParamLimits

0xd10a,	// (0x0006dbc6) bg_button_pane_cp013

0xd126,	// (0x0006dbe2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xd126,	// (0x0006dbe2) cell_vitu2_function_top_wide_pane_g1

0x5f67,	// (0x00066a23) bg_popup_sub_pane_cp20

0xd13e,	// (0x0006dbfa) list_vitu2_match_list_pane

0x1cbc,	// (0x00062778) bg_popup_sub_pane_cp20_g1

0x1cc4,	// (0x00062780) bg_popup_sub_pane_cp20_g2

0x0f1e,	// (0x000619da) bg_popup_sub_pane_cp20_g3

0x1ccc,	// (0x00062788) bg_popup_sub_pane_cp20_g4

0x0efe,	// (0x000619ba) bg_popup_sub_pane_cp20_g5

0x1f0d,	// (0x000629c9) bg_popup_sub_pane_cp20_g6

0x1cdc,	// (0x00062798) bg_popup_sub_pane_cp20_g7

0x1ce4,	// (0x000627a0) bg_popup_sub_pane_cp20_g8

0x1cec,	// (0x000627a8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00070502) bg_popup_sub_pane_cp20_g

0xd156,	// (0x0006dc12) list_vitu2_match_list_item_pane_ParamLimits

0xd156,	// (0x0006dc12) list_vitu2_match_list_item_pane

0xd168,	// (0x0006dc24) list_vitu2_match_list_item_pane_t1

0x025e,	// (0x00060d1a) bg_popup_sub_pane_cp21

0x7f0a,	// (0x000689c6) grid_vitu2_dropdown_list_pane

0xd176,	// (0x0006dc32) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xd176,	// (0x0006dc32) cell_vitu2_dropdown_list_char_pane

0xd19b,	// (0x0006dc57) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd19b,	// (0x0006dc57) cell_vitu2_dropdown_list_ctrl_pane

0x1f3f,	// (0x000629fb) cell_vitu2_dropdown_list_char_pane_g1

0x1f36,	// (0x000629f2) cell_vitu2_dropdown_list_char_pane_g2

0x1f2d,	// (0x000629e9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0007051f) cell_vitu2_dropdown_list_char_pane_g

0xd1c9,	// (0x0006dc85) cell_vitu2_dropdown_list_char_pane_t1

0xd1d7,	// (0x0006dc93) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd1d7,	// (0x0006dc93) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd1e7,	// (0x0006dca3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd1e7,	// (0x0006dca3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd1f8,	// (0x0006dcb4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd1f8,	// (0x0006dcb4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd208,	// (0x0006dcc4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd208,	// (0x0006dcc4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1418,	// (0x00061ed4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1418,	// (0x00061ed4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00070526) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00070526) cell_vitu2_dropdown_list_ctrl_pane_g

0xd221,	// (0x0006dcdd) aid_size_cell_gallery2_ParamLimits

0xd221,	// (0x0006dcdd) aid_size_cell_gallery2

0xd22f,	// (0x0006dceb) grid_gallery2_pane_ParamLimits

0xd22f,	// (0x0006dceb) grid_gallery2_pane

0xd23e,	// (0x0006dcfa) scroll_pane_cp029_ParamLimits

0xd23e,	// (0x0006dcfa) scroll_pane_cp029

0xd24a,	// (0x0006dd06) cell_gallery2_pane_ParamLimits

0xd24a,	// (0x0006dd06) cell_gallery2_pane

0x1f48,	// (0x00062a04) cell_gallery2_pane_g2

0xd274,	// (0x0006dd30) cell_gallery2_pane_g3

0x1f52,	// (0x00062a0e) cell_gallery2_pane_g4

0x1f5a,	// (0x00062a16) cell_gallery2_pane_g5

0x855f,	// (0x0006901b) grid_highlight_pane_cp10

0xc92c,	// (0x0006d3e8) popup_vitu2_match_list_window_ParamLimits

0xc940,	// (0x0006d3fc) popup_vitu2_query_window_ParamLimits

0xc940,	// (0x0006d3fc) popup_vitu2_query_window

0x025e,	// (0x00060d1a) bg_vitu2_candi_button_pane

0x1f3f,	// (0x000629fb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1f36,	// (0x000629f2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1f2d,	// (0x000629e9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x519c,	// (0x00065c58) bg_button_pane_cp015

0xd27c,	// (0x0006dd38) bg_button_pane_cp016

0xd286,	// (0x0006dd42) bg_button_pane_cp017

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp22

0x1f62,	// (0x00062a1e) popup_vitu2_query_window_g1

0xd2a1,	// (0x0006dd5d) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00070531) popup_vitu2_query_window_g

0x51b3,	// (0x00065c6f) popup_vitu2_query_window_t1_ParamLimits

0x51b3,	// (0x00065c6f) popup_vitu2_query_window_t1

0x51db,	// (0x00065c97) popup_vitu2_query_window_t2_ParamLimits

0x51db,	// (0x00065c97) popup_vitu2_query_window_t2

0x51ed,	// (0x00065ca9) popup_vitu2_query_window_t3_ParamLimits

0x51ed,	// (0x00065ca9) popup_vitu2_query_window_t3

0xd2af,	// (0x0006dd6b) popup_vitu2_query_window_t4_ParamLimits

0xd2af,	// (0x0006dd6b) popup_vitu2_query_window_t4

0xd2c5,	// (0x0006dd81) popup_vitu2_query_window_t5_ParamLimits

0xd2c5,	// (0x0006dd81) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00070536) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00070536) popup_vitu2_query_window_t

0x1dc2,	// (0x0006287e) main_cset_text_pane

0xcd19,	// (0x0006d7d5) aid_area_touch_slider_ParamLimits

0xcd35,	// (0x0006d7f1) cset_slider_pane_ParamLimits

0xcd5f,	// (0x0006d81b) main_cset_slider_pane_g1_ParamLimits

0xcd74,	// (0x0006d830) main_cset_slider_pane_g2_ParamLimits

0x1de3,	// (0x0006289f) main_cset_slider_pane_g3_ParamLimits

0x1de3,	// (0x0006289f) main_cset_slider_pane_g3

0xcd89,	// (0x0006d845) main_cset_slider_pane_g4_ParamLimits

0xcd89,	// (0x0006d845) main_cset_slider_pane_g4

0xcd98,	// (0x0006d854) main_cset_slider_pane_g5_ParamLimits

0xcd98,	// (0x0006d854) main_cset_slider_pane_g5

0xcda4,	// (0x0006d860) main_cset_slider_pane_g6_ParamLimits

0xcda4,	// (0x0006d860) main_cset_slider_pane_g6

0xf9cf,	// (0x0007048b) main_cset_slider_pane_g_ParamLimits

0x1e13,	// (0x000628cf) main_cset_slider_pane_t1_ParamLimits

0xce30,	// (0x0006d8ec) main_cset_slider_pane_t2_ParamLimits

0xce4a,	// (0x0006d906) main_cset_slider_pane_t3_ParamLimits

0xce64,	// (0x0006d920) main_cset_slider_pane_t4_ParamLimits

0xce7e,	// (0x0006d93a) main_cset_slider_pane_t5_ParamLimits

0xce9a,	// (0x0006d956) main_cset_slider_pane_t6_ParamLimits

0xceaf,	// (0x0006d96b) main_cset_slider_pane_t7_ParamLimits

0xced9,	// (0x0006d995) main_cset_slider_pane_t8_ParamLimits

0xced9,	// (0x0006d995) main_cset_slider_pane_t8

0xcf01,	// (0x0006d9bd) main_cset_slider_pane_t9_ParamLimits

0xcf01,	// (0x0006d9bd) main_cset_slider_pane_t9

0xcf29,	// (0x0006d9e5) main_cset_slider_pane_t10_ParamLimits

0xcf29,	// (0x0006d9e5) main_cset_slider_pane_t10

0xcf51,	// (0x0006da0d) main_cset_slider_pane_t11_ParamLimits

0xcf51,	// (0x0006da0d) main_cset_slider_pane_t11

0xcf79,	// (0x0006da35) main_cset_slider_pane_t12_ParamLimits

0xcf79,	// (0x0006da35) main_cset_slider_pane_t12

0xcf96,	// (0x0006da52) main_cset_slider_pane_t13_ParamLimits

0xcf96,	// (0x0006da52) main_cset_slider_pane_t13

0xf9f4,	// (0x000704b0) main_cset_slider_pane_t_ParamLimits

0x025e,	// (0x00060d1a) bg_popup_sub_pane_cp011

0x1f6e,	// (0x00062a2a) main_cset_text_pane_g1

0x1f76,	// (0x00062a32) main_cset_text_pane_t1

0x1f84,	// (0x00062a40) main_cset_text_pane_t2

0x1f92,	// (0x00062a4e) main_cset_text_pane_t3

0x1fa0,	// (0x00062a5c) main_cset_text_pane_t4

0x1fae,	// (0x00062a6a) main_cset_text_pane_t5

0x1fbc,	// (0x00062a78) main_cset_text_pane_t6

0x1fca,	// (0x00062a86) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00070541) main_cset_text_pane_t

0x025e,	// (0x00060d1a) main_cam4_burst_pane

0x025e,	// (0x00060d1a) main_cam5_pane

0xcc62,	// (0x0006d71e) bg_button_pane_cp019

0xcc6b,	// (0x0006d727) bg_button_pane_cp020

0x1def,	// (0x000628ab) main_cset_slider_pane_g7_ParamLimits

0x1def,	// (0x000628ab) main_cset_slider_pane_g7

0x1dfb,	// (0x000628b7) main_cset_slider_pane_g8_ParamLimits

0x1dfb,	// (0x000628b7) main_cset_slider_pane_g8

0xcdb8,	// (0x0006d874) main_cset_slider_pane_g9_ParamLimits

0xcdb8,	// (0x0006d874) main_cset_slider_pane_g9

0xcdc4,	// (0x0006d880) main_cset_slider_pane_g10_ParamLimits

0xcdc4,	// (0x0006d880) main_cset_slider_pane_g10

0xcdd0,	// (0x0006d88c) main_cset_slider_pane_g11_ParamLimits

0xcdd0,	// (0x0006d88c) main_cset_slider_pane_g11

0xcddc,	// (0x0006d898) main_cset_slider_pane_g12_ParamLimits

0xcddc,	// (0x0006d898) main_cset_slider_pane_g12

0xcde8,	// (0x0006d8a4) main_cset_slider_pane_g13_ParamLimits

0xcde8,	// (0x0006d8a4) main_cset_slider_pane_g13

0xcdf4,	// (0x0006d8b0) main_cset_slider_pane_g14_ParamLimits

0xcdf4,	// (0x0006d8b0) main_cset_slider_pane_g14

0xce00,	// (0x0006d8bc) main_cset_slider_pane_g15_ParamLimits

0xce00,	// (0x0006d8bc) main_cset_slider_pane_g15

0x1e41,	// (0x000628fd) main_cset_slider_pane_t14_ParamLimits

0x1e41,	// (0x000628fd) main_cset_slider_pane_t14

0x1e7a,	// (0x00062936) main_cset_slider_pane_t15_ParamLimits

0x1e7a,	// (0x00062936) main_cset_slider_pane_t15

0xd2db,	// (0x0006dd97) aid_cam4_burst_size_cell_ParamLimits

0xd2db,	// (0x0006dd97) aid_cam4_burst_size_cell

0xd2f7,	// (0x0006ddb3) grid_cam4_burst_pane_ParamLimits

0xd2f7,	// (0x0006ddb3) grid_cam4_burst_pane

0xd329,	// (0x0006dde5) linegrid_cam4_burst_pane_ParamLimits

0xd329,	// (0x0006dde5) linegrid_cam4_burst_pane

0xd349,	// (0x0006de05) scroll_pane_cp30_ParamLimits

0xd349,	// (0x0006de05) scroll_pane_cp30

0xd355,	// (0x0006de11) cell_cam4_burst_pane_ParamLimits

0xd355,	// (0x0006de11) cell_cam4_burst_pane

0x1fd8,	// (0x00062a94) linegrid_cam4_burst_pane_g1_ParamLimits

0x1fd8,	// (0x00062a94) linegrid_cam4_burst_pane_g1

0xd395,	// (0x0006de51) linegrid_cam4_burst_pane_g2_ParamLimits

0xd395,	// (0x0006de51) linegrid_cam4_burst_pane_g2

0x1fe5,	// (0x00062aa1) linegrid_cam4_burst_pane_g3_ParamLimits

0x1fe5,	// (0x00062aa1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00070550) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00070550) linegrid_cam4_burst_pane_g

0xd3a6,	// (0x0006de62) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd3a6,	// (0x0006de62) linegrid_cam4_burst_pane_g3_copy1

0x1ff2,	// (0x00062aae) linegrid_cam4_burst_pane_g4_ParamLimits

0x1ff2,	// (0x00062aae) linegrid_cam4_burst_pane_g4

0xd3c0,	// (0x0006de7c) linegrid_cam4_burst_pane_g5_ParamLimits

0xd3c0,	// (0x0006de7c) linegrid_cam4_burst_pane_g5

0xd3d1,	// (0x0006de8d) linegrid_cam4_burst_pane_g6_ParamLimits

0xd3d1,	// (0x0006de8d) linegrid_cam4_burst_pane_g6

0x1fff,	// (0x00062abb) linegrid_cam4_burst_pane_g7_ParamLimits

0x1fff,	// (0x00062abb) linegrid_cam4_burst_pane_g7

0xd3e8,	// (0x0006dea4) cell_cam4_burst_pane_g1

0x2018,	// (0x00062ad4) main_cam5_pane_t1_ParamLimits

0x2018,	// (0x00062ad4) main_cam5_pane_t1

0x202a,	// (0x00062ae6) main_cam5_pane_t2_ParamLimits

0x202a,	// (0x00062ae6) main_cam5_pane_t2

0x203c,	// (0x00062af8) main_cam5_pane_t3_ParamLimits

0x203c,	// (0x00062af8) main_cam5_pane_t3

0x204e,	// (0x00062b0a) main_cam5_pane_t4_ParamLimits

0x204e,	// (0x00062b0a) main_cam5_pane_t4

0x2066,	// (0x00062b22) main_cam5_pane_t5_ParamLimits

0x2066,	// (0x00062b22) main_cam5_pane_t5

0x207a,	// (0x00062b36) main_cam5_pane_t6_ParamLimits

0x207a,	// (0x00062b36) main_cam5_pane_t6

0x208e,	// (0x00062b4a) main_cam5_pane_t7_ParamLimits

0x208e,	// (0x00062b4a) main_cam5_pane_t7

0x20a0,	// (0x00062b5c) main_cam5_pane_t8_ParamLimits

0x20a0,	// (0x00062b5c) main_cam5_pane_t8

0x20be,	// (0x00062b7a) main_cam5_pane_t9_ParamLimits

0x20be,	// (0x00062b7a) main_cam5_pane_t9

0x20d0,	// (0x00062b8c) main_cam5_pane_t10_ParamLimits

0x20d0,	// (0x00062b8c) main_cam5_pane_t10

0x20e2,	// (0x00062b9e) main_cam5_pane_t11_ParamLimits

0x20e2,	// (0x00062b9e) main_cam5_pane_t11

0x20f6,	// (0x00062bb2) main_cam5_pane_t12_ParamLimits

0x20f6,	// (0x00062bb2) main_cam5_pane_t12

0x210d,	// (0x00062bc9) main_cam5_pane_t13_ParamLimits

0x210d,	// (0x00062bc9) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0007055c) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0007055c) main_cam5_pane_t

0x5f30,	// (0x000669ec) popup_scut_keymap_window_ParamLimits

0x5f30,	// (0x000669ec) popup_scut_keymap_window

0xd3fb,	// (0x0006deb7) aid_size_cell_brow_shortcut

0x855f,	// (0x0006901b) bg_popup_window_pane_cp010

0xd407,	// (0x0006dec3) grid_scut_pane

0xd413,	// (0x0006decf) cell_scut_pane_ParamLimits

0xd413,	// (0x0006decf) cell_scut_pane

0xd42e,	// (0x0006deea) cell_scut_pane_g1

0x2130,	// (0x00062bec) cell_scut_pane_t1

0x213f,	// (0x00062bfb) cell_scut_pane_t2

0xd437,	// (0x0006def3) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00070577) cell_scut_pane_t

0xb4d2,	// (0x0006bf8e) main_mup3_pane_g8_ParamLimits

0xb4d2,	// (0x0006bf8e) main_mup3_pane_g8

0xc868,	// (0x0006d324) area_vitu2_query_pane_ParamLimits

0xc868,	// (0x0006d324) area_vitu2_query_pane

0x51a6,	// (0x00065c62) input_focus_pane_cp08

0x214e,	// (0x00062c0a) area_vitu2_query_pane_g1

0x5215,	// (0x00065cd1) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0007057e) area_vitu2_query_pane_g

0xd445,	// (0x0006df01) area_vitu2_query_pane_t1_ParamLimits

0xd445,	// (0x0006df01) area_vitu2_query_pane_t1

0xd459,	// (0x0006df15) area_vitu2_query_pane_t2_ParamLimits

0xd459,	// (0x0006df15) area_vitu2_query_pane_t2

0x5226,	// (0x00065ce2) area_vitu2_query_pane_t3_ParamLimits

0x5226,	// (0x00065ce2) area_vitu2_query_pane_t3

0x524e,	// (0x00065d0a) area_vitu2_query_pane_t4_ParamLimits

0x524e,	// (0x00065d0a) area_vitu2_query_pane_t4

0x5276,	// (0x00065d32) area_vitu2_query_pane_t5_ParamLimits

0x5276,	// (0x00065d32) area_vitu2_query_pane_t5

0x529e,	// (0x00065d5a) area_vitu2_query_pane_t6_ParamLimits

0x529e,	// (0x00065d5a) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00070583) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00070583) area_vitu2_query_pane_t

0xd46d,	// (0x0006df29) bg_button_pane_cp018

0xd47b,	// (0x0006df37) bg_button_pane_cp021

0x52ea,	// (0x00065da6) bg_button_pane_cp022

0x52fb,	// (0x00065db7) input_focus_pane_cp09

0x8398,	// (0x00068e54) aid_size_touch_mv_arrow_left

0x83c3,	// (0x00068e7f) aid_size_touch_mv_arrow_right

0xce18,	// (0x0006d8d4) main_cset_slider_pane_g16_ParamLimits

0xce18,	// (0x0006d8d4) main_cset_slider_pane_g16

0xce24,	// (0x0006d8e0) main_cset_slider_pane_g17_ParamLimits

0xce24,	// (0x0006d8e0) main_cset_slider_pane_g17

0xd3e8,	// (0x0006dea4) cell_cam4_burst_pane_g1_ParamLimits

0x025e,	// (0x00060d1a) compa_mode_pane

0xd020,	// (0x0006dadc) popup_vtel_slider_window_g3_ParamLimits

0xd020,	// (0x0006dadc) popup_vtel_slider_window_g3

0xd034,	// (0x0006daf0) popup_vtel_slider_window_g4_ParamLimits

0xd034,	// (0x0006daf0) popup_vtel_slider_window_g4

0xd048,	// (0x0006db04) popup_vtel_slider_window_t1_ParamLimits

0xd048,	// (0x0006db04) popup_vtel_slider_window_t1

0x025e,	// (0x00060d1a) main_cl_pane

0xa6e0,	// (0x0006b19c) popup_imed_adjust2_window_ParamLimits

0xa628,	// (0x0006b0e4) bg_tb_trans_pane_cp05_ParamLimits

0x172b,	// (0x000621e7) popup_imed_adjust2_window_g1_ParamLimits

0x173a,	// (0x000621f6) popup_imed_adjust2_window_g2_ParamLimits

0x173a,	// (0x000621f6) popup_imed_adjust2_window_g2

0x1746,	// (0x00062202) popup_imed_adjust2_window_g3_ParamLimits

0x1746,	// (0x00062202) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x000702fd) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x000702fd) popup_imed_adjust2_window_g

0x1752,	// (0x0006220e) popup_imed_adjust2_window_t1_ParamLimits

0x176a,	// (0x00062226) slider_imed_adjust_pane_ParamLimits

0x177e,	// (0x0006223a) slider_imed_adjust_pane_g1_ParamLimits

0x178e,	// (0x0006224a) slider_imed_adjust_pane_g2_ParamLimits

0x179e,	// (0x0006225a) slider_imed_adjust_pane_g3_ParamLimits

0x17af,	// (0x0006226b) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00070304) slider_imed_adjust_pane_g_ParamLimits

0xc5ec,	// (0x0006d0a8) aid_touch_area_cam4_ParamLimits

0xc5ec,	// (0x0006d0a8) aid_touch_area_cam4

0xc5fc,	// (0x0006d0b8) battery_pane_cp01

0xc683,	// (0x0006d13f) main_camera4_pane_g6_ParamLimits

0xc683,	// (0x0006d13f) main_camera4_pane_g6

0xc6a1,	// (0x0006d15d) main_camera4_pane_t2_ParamLimits

0xc6a1,	// (0x0006d15d) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00070407) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00070407) main_camera4_pane_t

0xc702,	// (0x0006d1be) aid_touch_area_vid4_ParamLimits

0xc702,	// (0x0006d1be) aid_touch_area_vid4

0xc742,	// (0x0006d1fe) main_video4_pane_g5_ParamLimits

0xc742,	// (0x0006d1fe) main_video4_pane_g5

0xc766,	// (0x0006d222) vid4_progress_pane_ParamLimits

0xc766,	// (0x0006d222) vid4_progress_pane

0x1e07,	// (0x000628c3) main_cset_slider_pane_g18_ParamLimits

0x1e07,	// (0x000628c3) main_cset_slider_pane_g18

0x200c,	// (0x00062ac8) cell_cam4_burst_pane_g2_ParamLimits

0x200c,	// (0x00062ac8) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00070557) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00070557) cell_cam4_burst_pane_g

0xd487,	// (0x0006df43) bg_cl_pane_ParamLimits

0xd487,	// (0x0006df43) bg_cl_pane

0xd493,	// (0x0006df4f) cl_header_pane_ParamLimits

0xd493,	// (0x0006df4f) cl_header_pane

0xd49f,	// (0x0006df5b) cl_listscroll_pane_ParamLimits

0xd49f,	// (0x0006df5b) cl_listscroll_pane

0x21f6,	// (0x00062cb2) bg_cl_pane_g1

0x21fe,	// (0x00062cba) bg_cl_pane_g2

0x2206,	// (0x00062cc2) bg_cl_pane_g3

0x220e,	// (0x00062cca) bg_cl_pane_g4

0x2216,	// (0x00062cd2) bg_cl_pane_g5

0x221e,	// (0x00062cda) bg_cl_pane_g6

0x2226,	// (0x00062ce2) bg_cl_pane_g7

0x222e,	// (0x00062cea) bg_cl_pane_g8

0x2236,	// (0x00062cf2) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00070592) bg_cl_pane_g

0xd4ab,	// (0x0006df67) aid_height_cl_leading_ParamLimits

0xd4ab,	// (0x0006df67) aid_height_cl_leading

0xd4b7,	// (0x0006df73) aid_height_cl_text_ParamLimits

0xd4b7,	// (0x0006df73) aid_height_cl_text

0x5f67,	// (0x00066a23) bg_cl_header_pane_ParamLimits

0x5f67,	// (0x00066a23) bg_cl_header_pane

0xd4cf,	// (0x0006df8b) cl_header_pane_g1_ParamLimits

0xd4cf,	// (0x0006df8b) cl_header_pane_g1

0xd4dc,	// (0x0006df98) cl_header_pane_t1_ParamLimits

0xd4dc,	// (0x0006df98) cl_header_pane_t1

0x223e,	// (0x00062cfa) cl_list_pane

0x1dda,	// (0x00062896) hc_scroll_pane_cp01

0x0efe,	// (0x000619ba) bg_cl_header_pane_g1

0x1cbc,	// (0x00062778) bg_cl_header_pane_g2

0x0f1e,	// (0x000619da) bg_cl_header_pane_g3

0x1ccc,	// (0x00062788) bg_cl_header_pane_g4

0x1cc4,	// (0x00062780) bg_cl_header_pane_g5

0x1f0d,	// (0x000629c9) bg_cl_header_pane_g6

0x1ce4,	// (0x000627a0) bg_cl_header_pane_g7

0x1cec,	// (0x000627a8) bg_cl_header_pane_g8

0x1cdc,	// (0x00062798) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x000705a5) bg_cl_header_pane_g

0xd4ee,	// (0x0006dfaa) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd4ee,	// (0x0006dfaa) hc_cl_list_double_graphic_heading_pane

0xd156,	// (0x0006dc12) hc_cl_list_single_graphic_pane_ParamLimits

0xd156,	// (0x0006dc12) hc_cl_list_single_graphic_pane

0xd4fe,	// (0x0006dfba) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd4fe,	// (0x0006dfba) hc_cl_list_single_graphic_pane_g1

0xd50a,	// (0x0006dfc6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd50a,	// (0x0006dfc6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x000705b8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x000705b8) hc_cl_list_single_graphic_pane_g

0xd51e,	// (0x0006dfda) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd51e,	// (0x0006dfda) hc_cl_list_single_graphic_pane_t1

0xd4fe,	// (0x0006dfba) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd4fe,	// (0x0006dfba) hc_cl_list_double_graphic_heading_pane_g1

0xd533,	// (0x0006dfef) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd533,	// (0x0006dfef) hc_cl_list_double_graphic_heading_pane_g2

0xd547,	// (0x0006e003) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd547,	// (0x0006e003) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x000705bd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x000705bd) hc_cl_list_double_graphic_heading_pane_g

0xd55b,	// (0x0006e017) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd55b,	// (0x0006e017) hc_cl_list_double_graphic_heading_pane_t1

0xd570,	// (0x0006e02c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd570,	// (0x0006e02c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x000705c4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x000705c4) hc_cl_list_double_graphic_heading_pane_t

0xd597,	// (0x0006e053) vid4_progress_pane_g1

0xd5a3,	// (0x0006e05f) vid4_progress_pane_g2

0xd5af,	// (0x0006e06b) vid4_progress_pane_g3

0xd5be,	// (0x0006e07a) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x000705c9) vid4_progress_pane_g

0xd5dc,	// (0x0006e098) vid4_progress_pane_t1

0xd5f2,	// (0x0006e0ae) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x000705d4) vid4_progress_pane_t

0xd61d,	// (0x0006e0d9) wait_bar_pane_cp07

0xefa5,	// (0x0006fa61) blid_firmament_pane_ParamLimits

0xefe8,	// (0x0006faa4) popup_blid_sat_info2_window_g1

0xf00c,	// (0x0006fac8) popup_blid_sat_info2_window_t3

0xf01a,	// (0x0006fad6) popup_blid_sat_info2_window_t4

0xf028,	// (0x0006fae4) popup_blid_sat_info2_window_t5

0xf036,	// (0x0006faf2) popup_blid_sat_info2_window_t6

0xf046,	// (0x0006fb02) popup_blid_sat_info2_window_t7

0xf054,	// (0x0006fb10) popup_blid_sat_info2_window_t8

0xf062,	// (0x0006fb1e) popup_blid_sat_info2_window_t9

0xf070,	// (0x0006fb2c) popup_blid_sat_info2_window_t10

0x1168,	// (0x00061c24) aid_firma_cardinal_ParamLimits

0x117c,	// (0x00061c38) blid_firmament_pane_t1_ParamLimits

0x1193,	// (0x00061c4f) blid_firmament_pane_t2_ParamLimits

0x11aa,	// (0x00061c66) blid_firmament_pane_t3_ParamLimits

0x11c1,	// (0x00061c7d) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000701f6) blid_firmament_pane_t_ParamLimits

0x11d8,	// (0x00061c94) blid_sat_info_pane_ParamLimits

0xa636,	// (0x0006b0f2) main_cam_set_pane_ParamLimits

0xbc66,	// (0x0006c722) aid_size_cell_colour_35_ParamLimits

0xbc80,	// (0x0006c73c) aid_size_cell_colour_112_ParamLimits

0xbc97,	// (0x0006c753) aid_size_cell_effect_ParamLimits

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp02_ParamLimits

0xbcb1,	// (0x0006c76d) heading_imed_pane_ParamLimits

0xbcbd,	// (0x0006c779) listscroll_imed_pane_ParamLimits

0x99df,	// (0x0006a49b) popup_call2_audio_first_window_g5_ParamLimits

0x99df,	// (0x0006a49b) popup_call2_audio_first_window_g5

0xc3a5,	// (0x0006ce61) aid_size_touch_image3_arrow_left_ParamLimits

0xc3a5,	// (0x0006ce61) aid_size_touch_image3_arrow_left

0xc3bb,	// (0x0006ce77) aid_size_touch_image3_arrow_right_ParamLimits

0xc3bb,	// (0x0006ce77) aid_size_touch_image3_arrow_right

0xd608,	// (0x0006e0c4) vid4_progress_pane_t3

0xbf5d,	// (0x0006ca19) main_hwr_training_symbol_option_pane_ParamLimits

0xbf5d,	// (0x0006ca19) main_hwr_training_symbol_option_pane

0x1a1a,	// (0x000624d6) popup_hwr_training_preview_window_ParamLimits

0x1a1a,	// (0x000624d6) popup_hwr_training_preview_window

0xbfbe,	// (0x0006ca7a) hwr_training_navi_pane_g5_ParamLimits

0xbfbe,	// (0x0006ca7a) hwr_training_navi_pane_g5

0x1caa,	// (0x00062766) popup_char_count_window

0x5f67,	// (0x00066a23) bg_popup_sub_pane_cp20_ParamLimits

0xd13e,	// (0x0006dbfa) list_vitu2_match_list_pane_ParamLimits

0xd14a,	// (0x0006dc06) vitu2_page_scroll_pane_ParamLimits

0xd14a,	// (0x0006dc06) vitu2_page_scroll_pane

0x22a1,	// (0x00062d5d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x22a1,	// (0x00062d5d) list_single_hwr_training_symbol_option_pane

0x22b4,	// (0x00062d70) list_single_hwr_training_symbol_option_pane_g1

0x22bc,	// (0x00062d78) list_single_hwr_training_symbol_option_pane_t1

0x22ca,	// (0x00062d86) bg_button_pane_cp023

0x22d3,	// (0x00062d8f) bg_button_pane_cp024

0xd637,	// (0x0006e0f3) vitu2_page_scroll_pane_g1

0xd63f,	// (0x0006e0fb) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x000705db) vitu2_page_scroll_pane_g

0xd649,	// (0x0006e105) vitu2_page_scroll_pane_t1

0xef05,	// (0x0006f9c1) popup_char_count_window_g1

0x2306,	// (0x00062dc2) popup_char_count_window_g2

0x230f,	// (0x00062dcb) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x000705e0) popup_char_count_window_g

0x2318,	// (0x00062dd4) popup_char_count_window_t1

0x025e,	// (0x00060d1a) main_vded2_pane

0x1717,	// (0x000621d3) aid_size_cell_imed_line

0x1721,	// (0x000621dd) grid_imed_line_width_pane

0xc7bc,	// (0x0006d278) vid4_indicators_pane_g4

0x2326,	// (0x00062de2) cell_imed_line_width_pane_ParamLimits

0x2326,	// (0x00062de2) cell_imed_line_width_pane

0x233c,	// (0x00062df8) cell_imed_line_width_pane_g1

0x1114,	// (0x00061bd0) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x000705e7) cell_imed_line_width_pane_g

0xd658,	// (0x0006e114) main_vded2_pane_g1_ParamLimits

0xd658,	// (0x0006e114) main_vded2_pane_g1

0xd667,	// (0x0006e123) main_vded2_pane_g2_ParamLimits

0xd667,	// (0x0006e123) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x000705ec) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x000705ec) main_vded2_pane_g

0xd675,	// (0x0006e131) vded2_slider_pane_ParamLimits

0xd675,	// (0x0006e131) vded2_slider_pane

0xd682,	// (0x0006e13e) aid_size_touch_vded2_end

0xd68c,	// (0x0006e148) aid_size_touch_vded2_playhead

0x2345,	// (0x00062e01) aid_size_touch_vded2_start

0x234d,	// (0x00062e09) vded2_slider_bg_pane

0x2356,	// (0x00062e12) vded2_slider_pane_g1

0x235f,	// (0x00062e1b) vded2_slider_pane_g2

0xd694,	// (0x0006e150) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x000705f1) vded2_slider_pane_g

0x2367,	// (0x00062e23) vded2_slider_bg_pane_g1

0x2370,	// (0x00062e2c) vded2_slider_bg_pane_g2

0x2379,	// (0x00062e35) vded2_slider_bg_pane_g3

0x0002,

0xf80a,	// (0x000702c6) vded2_slider_bg_pane_g

0x8c94,	// (0x00069750) aid_postcard_touch_down_pane_ParamLimits

0x8c94,	// (0x00069750) aid_postcard_touch_down_pane

0x8ca4,	// (0x00069760) aid_postcard_touch_up_pane_ParamLimits

0x8ca4,	// (0x00069760) aid_postcard_touch_up_pane

0x025e,	// (0x00060d1a) main_blid2_pane

0xa65f,	// (0x0006b11b) popup_blid2_search_window

0x025e,	// (0x00060d1a) blid2_gps_pane

0x025e,	// (0x00060d1a) blid2_navig_pane

0x025e,	// (0x00060d1a) blid2_search_pane

0x025e,	// (0x00060d1a) blid2_tripm_pane

0xd69d,	// (0x0006e159) blid2_search_pane_g1_ParamLimits

0xd69d,	// (0x0006e159) blid2_search_pane_g1

0xd6ad,	// (0x0006e169) blid2_search_pane_t1_ParamLimits

0xd6ad,	// (0x0006e169) blid2_search_pane_t1

0xd6bf,	// (0x0006e17b) aid_size_cell_blid2_gps_ParamLimits

0xd6bf,	// (0x0006e17b) aid_size_cell_blid2_gps

0xd6cf,	// (0x0006e18b) blid2_gps_pane_g1_ParamLimits

0xd6cf,	// (0x0006e18b) blid2_gps_pane_g1

0xd6db,	// (0x0006e197) grid_blid2_satellite_pane_ParamLimits

0xd6db,	// (0x0006e197) grid_blid2_satellite_pane

0xd6e9,	// (0x0006e1a5) blid2_navig_pane_g1_ParamLimits

0xd6e9,	// (0x0006e1a5) blid2_navig_pane_g1

0xd6f5,	// (0x0006e1b1) blid2_navig_pane_t1_ParamLimits

0xd6f5,	// (0x0006e1b1) blid2_navig_pane_t1

0xd707,	// (0x0006e1c3) blid2_navig_pane_t2_ParamLimits

0xd707,	// (0x0006e1c3) blid2_navig_pane_t2

0x0001,

0xfb3c,	// (0x000705f8) blid2_navig_pane_t_ParamLimits

0xfb3c,	// (0x000705f8) blid2_navig_pane_t

0xd719,	// (0x0006e1d5) blid2_navig_ring_pane_ParamLimits

0xd719,	// (0x0006e1d5) blid2_navig_ring_pane

0xd729,	// (0x0006e1e5) blid2_speed_pane_ParamLimits

0xd729,	// (0x0006e1e5) blid2_speed_pane

0xd735,	// (0x0006e1f1) blid2_tripm_pane_g1_ParamLimits

0xd735,	// (0x0006e1f1) blid2_tripm_pane_g1

0xd745,	// (0x0006e201) blid2_tripm_pane_g2_ParamLimits

0xd745,	// (0x0006e201) blid2_tripm_pane_g2

0xd751,	// (0x0006e20d) blid2_tripm_pane_g3_ParamLimits

0xd751,	// (0x0006e20d) blid2_tripm_pane_g3

0xd75d,	// (0x0006e219) blid2_tripm_pane_g4_ParamLimits

0xd75d,	// (0x0006e219) blid2_tripm_pane_g4

0xd769,	// (0x0006e225) blid2_tripm_pane_g5_ParamLimits

0xd769,	// (0x0006e225) blid2_tripm_pane_g5

0x0005,

0xfb41,	// (0x000705fd) blid2_tripm_pane_g_ParamLimits

0xfb41,	// (0x000705fd) blid2_tripm_pane_g

0xd785,	// (0x0006e241) blid2_tripm_pane_t1_ParamLimits

0xd785,	// (0x0006e241) blid2_tripm_pane_t1

0xd799,	// (0x0006e255) blid2_tripm_pane_t2_ParamLimits

0xd799,	// (0x0006e255) blid2_tripm_pane_t2

0xd7ab,	// (0x0006e267) blid2_tripm_pane_t3_ParamLimits

0xd7ab,	// (0x0006e267) blid2_tripm_pane_t3

0x0003,

0xfb4e,	// (0x0007060a) blid2_tripm_pane_t_ParamLimits

0xfb4e,	// (0x0007060a) blid2_tripm_pane_t

0xd7dd,	// (0x0006e299) cell_blid2_satellite_pane_ParamLimits

0xd7dd,	// (0x0006e299) cell_blid2_satellite_pane

0xd7fb,	// (0x0006e2b7) cell_blid2_satellite_pane_g1

0x2382,	// (0x00062e3e) cell_blid2_satellite_pane_t1

0x11e8,	// (0x00061ca4) blid2_speed_pane_g1

0x2390,	// (0x00062e4c) blid2_speed_pane_t1

0x239e,	// (0x00062e5a) blid2_speed_pane_t2

0x0001,

0xfb57,	// (0x00070613) blid2_speed_pane_t

0x11e8,	// (0x00061ca4) blid2_navig_ring_pane_g1

0xd804,	// (0x0006e2c0) blid2_navig_ring_pane_g2

0xd80c,	// (0x0006e2c8) blid2_navig_ring_pane_g3

0xd814,	// (0x0006e2d0) blid2_navig_ring_pane_g4

0xd81c,	// (0x0006e2d8) blid2_navig_ring_pane_g5

0x0004,

0xfb5c,	// (0x00070618) blid2_navig_ring_pane_g

0x025e,	// (0x00060d1a) bg_popup_window_pane_cp011

0x23ac,	// (0x00062e68) popup_blid2_search_window_g1

0x23b4,	// (0x00062e70) popup_blid2_search_window_t1

0x23c2,	// (0x00062e7e) popup_blid2_search_window_t2

0x0001,

0xfb67,	// (0x00070623) popup_blid2_search_window_t

0x0e0d,	// (0x000618c9) main_browser_pane_g1

0x0a2c,	// (0x000614e8) main_browser_pane_ParamLimits

0xa636,	// (0x0006b0f2) bg_button_pane_cp011_ParamLimits

0xca29,	// (0x0006d4e5) cell_vitu2_function_pane_g1_ParamLimits

0xa636,	// (0x0006b0f2) bg_popup_sub_pane_cp22_ParamLimits

0x51a6,	// (0x00065c62) input_focus_pane_cp08_ParamLimits

0xd290,	// (0x0006dd4c) popup_vitu2_query_button_pane_ParamLimits

0xd290,	// (0x0006dd4c) popup_vitu2_query_button_pane

0x519c,	// (0x00065c58) popup_vitu2_query_input_button_pane

0x1f62,	// (0x00062a1e) popup_vitu2_query_window_g1_ParamLimits

0xd2a1,	// (0x0006dd5d) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00070531) popup_vitu2_query_window_g_ParamLimits

0x025e,	// (0x00060d1a) bg_button_pane_cp026

0xd824,	// (0x0006e2e0) popup_vitu2_query_input_button_pane_g1

0x025e,	// (0x00060d1a) bg_button_pane_cp025

0x23d0,	// (0x00062e8c) popup_vitu2_query_button_pane_t1

0xb1e0,	// (0x0006bc9c) main_mp3_pane_t6

0xb1f0,	// (0x0006bcac) popup_slider_window_cp01

0xc6b3,	// (0x0006d16f) cam4_battery_pane

0xc794,	// (0x0006d250) cam4_battery_pane_cp02

0xd585,	// (0x0006e041) cam4_battery_pane_cp01

0xd58f,	// (0x0006e04b) cam4_battery_pane_cp03

0x11e8,	// (0x00061ca4) cam4_battery_pane_g1

0x1b18,	// (0x000625d4) cam4_battery_pane_g2

0x0001,

0xfb6c,	// (0x00070628) cam4_battery_pane_g

0xf07e,	// (0x0006fb3a) popup_blid_sat_info2_window_t11

0x8398,	// (0x00068e54) aid_size_touch_mv_arrow_left_ParamLimits

0x83c3,	// (0x00068e7f) aid_size_touch_mv_arrow_right_ParamLimits

0x840b,	// (0x00068ec7) navi_pane_g1_ParamLimits

0x8417,	// (0x00068ed3) navi_pane_g2_ParamLimits

0x8445,	// (0x00068f01) navi_pane_g3_ParamLimits

0xf44c,	// (0x0006ff08) navi_pane_g_ParamLimits

0x8503,	// (0x00068fbf) navi_pane_mv_t1_ParamLimits

0xbcc9,	// (0x0006c785) grid_imed_effect_pane_ParamLimits

0x0d52,	// (0x0006180e) aid_placing_vt_slider_lsc

0x0d5a,	// (0x00061816) aid_placing_vt_slider_prt

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp01_ParamLimits

0x1338,	// (0x00061df4) popup_image_details_window_g1_ParamLimits

0x134b,	// (0x00061e07) popup_image_details_window_g2_ParamLimits

0x1360,	// (0x00061e1c) popup_image_details_window_g3_ParamLimits

0x1360,	// (0x00061e1c) popup_image_details_window_g3

0xf77f,	// (0x0007023b) popup_image_details_window_g_ParamLimits

0x1374,	// (0x00061e30) popup_image_details_window_t1_ParamLimits

0x1386,	// (0x00061e42) popup_image_details_window_t2_ParamLimits

0x139f,	// (0x00061e5b) popup_image_details_window_t3_ParamLimits

0x13b3,	// (0x00061e6f) popup_image_details_window_t4_ParamLimits

0x13ce,	// (0x00061e8a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00070242) popup_image_details_window_t_ParamLimits

0xd4c3,	// (0x0006df7f) cl_header_name_pane_ParamLimits

0xd4c3,	// (0x0006df7f) cl_header_name_pane

0xd82c,	// (0x0006e2e8) cl_header_name_pane_t1_ParamLimits

0xd82c,	// (0x0006e2e8) cl_header_name_pane_t1

0xd843,	// (0x0006e2ff) cl_header_name_pane_t2_ParamLimits

0xd843,	// (0x0006e2ff) cl_header_name_pane_t2

0xd86d,	// (0x0006e329) cl_header_name_pane_t3_ParamLimits

0xd86d,	// (0x0006e329) cl_header_name_pane_t3

0x0002,

0xfb71,	// (0x0007062d) cl_header_name_pane_t_ParamLimits

0xfb71,	// (0x0007062d) cl_header_name_pane_t

0x84d4,	// (0x00068f90) navi_pane_mv_g2_ParamLimits

0x1c4a,	// (0x00062706) field_vitu2_entry_pane_g1_ParamLimits

0x1c56,	// (0x00062712) field_vitu2_entry_pane_g2_ParamLimits

0x1c62,	// (0x0006271e) field_vitu2_entry_pane_g3_ParamLimits

0x1c62,	// (0x0006271e) field_vitu2_entry_pane_g3

0xf974,	// (0x00070430) field_vitu2_entry_pane_g_ParamLimits

0xc9b9,	// (0x0006d475) cell_vitu2_itu_pane_g1_ParamLimits

0xc9c9,	// (0x0006d485) cell_vitu2_itu_pane_g2_ParamLimits

0xc9c9,	// (0x0006d485) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0007043c) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0007043c) cell_vitu2_itu_pane_g

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp05_ParamLimits

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp05

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp03

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp04

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp10_ParamLimits

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp10

0x52ea,	// (0x00065da6) bg_vkb2_func_pane_cp08

0xd46d,	// (0x0006df29) bg_vkb2_func_pane_cp06

0xd47b,	// (0x0006df37) bg_vkb2_func_pane_cp07

0x22dc,	// (0x00062d98) bg_vkb2_func_pane_cp11_ParamLimits

0x22dc,	// (0x00062d98) bg_vkb2_func_pane_cp11

0x22f1,	// (0x00062dad) bg_vkb2_func_pane_cp12_ParamLimits

0x22f1,	// (0x00062dad) bg_vkb2_func_pane_cp12

0x025e,	// (0x00060d1a) bg_vkb2_func_pane_cp09

0x1cbc,	// (0x00062778) bg_vkb2_func_pane_g1

0x0f1e,	// (0x000619da) bg_vkb2_func_pane_g2

0x1cc4,	// (0x00062780) bg_vkb2_func_pane_g3

0x1ccc,	// (0x00062788) bg_vkb2_func_pane_g4

0x1f0d,	// (0x000629c9) bg_vkb2_func_pane_g5

0x1ce4,	// (0x000627a0) bg_vkb2_func_pane_g6

0x1cec,	// (0x000627a8) bg_vkb2_func_pane_g7

0x1cdc,	// (0x00062798) bg_vkb2_func_pane_g8

0x0efe,	// (0x000619ba) bg_vkb2_func_pane_g9

0x0008,

0xfb78,	// (0x00070634) bg_vkb2_func_pane_g

0xd777,	// (0x0006e233) blid2_tripm_pane_g6_ParamLimits

0xd777,	// (0x0006e233) blid2_tripm_pane_g6

0x1ad2,	// (0x0006258e) mp4_progress_pane_g1

0xd7d1,	// (0x0006e28d) blid2_tripm_values_pane_ParamLimits

0xd7d1,	// (0x0006e28d) blid2_tripm_values_pane

0xd892,	// (0x0006e34e) blid2_tripm_values_pane_t1

0xd8a0,	// (0x0006e35c) blid2_tripm_values_pane_t2

0xd8ae,	// (0x0006e36a) blid2_tripm_values_pane_t3

0xd8bc,	// (0x0006e378) blid2_tripm_values_pane_t4

0xd8ca,	// (0x0006e386) blid2_tripm_values_pane_t5

0xd8d8,	// (0x0006e394) blid2_tripm_values_pane_t6

0xd8e6,	// (0x0006e3a2) blid2_tripm_values_pane_t7

0xd8f4,	// (0x0006e3b0) blid2_tripm_values_pane_t8

0xd902,	// (0x0006e3be) blid2_tripm_values_pane_t9

0x0008,

0xfb8b,	// (0x00070647) blid2_tripm_values_pane_t

0x6d28,	// (0x000677e4) call_video_pane_t1_ParamLimits

0x6d3e,	// (0x000677fa) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0006fd91) call_video_pane_t_ParamLimits

0x4f7e,	// (0x00065a3a) msg_header_pane_g1_ParamLimits

0x8bbc,	// (0x00069678) msg_header_pane_g2_ParamLimits

0x8bbc,	// (0x00069678) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0006ffab) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0006ffab) msg_header_pane_g

0x0a2c,	// (0x000614e8) main_clock2_pane_ParamLimits

0xba40,	// (0x0006c4fc) grid_clock2_toolbar_pane_ParamLimits

0xba40,	// (0x0006c4fc) grid_clock2_toolbar_pane

0xba40,	// (0x0006c4fc) listscroll_clock2_pane_ParamLimits

0xba40,	// (0x0006c4fc) listscroll_clock2_pane

0xbaf4,	// (0x0006c5b0) main_clock2_pane_t3_ParamLimits

0xbaf4,	// (0x0006c5b0) main_clock2_pane_t3

0xbb06,	// (0x0006c5c2) main_clock2_pane_t4_ParamLimits

0xbb06,	// (0x0006c5c2) main_clock2_pane_t4

0x23de,	// (0x00062e9a) cell_clock2_toolbar_pane

0x23e6,	// (0x00062ea2) cell_clock2_toolbar_pane_cp01

0x23e6,	// (0x00062ea2) cell_clock2_toolbar_pane_cp02

0x23ee,	// (0x00062eaa) cell_clock2_toolbar_pane_cp03

0x23f6,	// (0x00062eb2) list_clock2_pane

0x817d,	// (0x00068c39) scroll_pane_cp10

0x23fe,	// (0x00062eba) list_single_clock2_pane_ParamLimits

0x23fe,	// (0x00062eba) list_single_clock2_pane

0x855f,	// (0x0006901b) list_highlight_pane_cp08

0x240b,	// (0x00062ec7) list_single_clock2_pane_t1

0x2419,	// (0x00062ed5) list_single_clock2_pane_t2

0x0001,

0xfb9e,	// (0x0007065a) list_single_clock2_pane_t

0x025e,	// (0x00060d1a) bg_button_pane_cp10

0x2427,	// (0x00062ee3) cell_clock2_toolbar_pane_g1

0x8be8,	// (0x000696a4) aid_main_viewer_pane_g1_ParamLimits

0x8be8,	// (0x000696a4) aid_main_viewer_pane_g1

0x8bf4,	// (0x000696b0) aid_main_viewer_pane_g2_ParamLimits

0x8bf4,	// (0x000696b0) aid_main_viewer_pane_g2

0x8c00,	// (0x000696bc) aid_main_viewer_pane_g3_ParamLimits

0x8c00,	// (0x000696bc) aid_main_viewer_pane_g3

0x8c11,	// (0x000696cd) aid_main_viewer_pane_g4_ParamLimits

0x8c11,	// (0x000696cd) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0006ffbc) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0006ffbc) aid_main_viewer_pane_g

0xa61b,	// (0x0006b0d7) main_calc_pane_ParamLimits

0xa644,	// (0x0006b100) main_dialer2_pane_ParamLimits

0x025e,	// (0x00060d1a) main_cam6_pane

0x025e,	// (0x00060d1a) main_vid6_pane

0xba4c,	// (0x0006c508) listscroll_gen_pane_cp06_ParamLimits

0xba4c,	// (0x0006c508) listscroll_gen_pane_cp06

0xbb18,	// (0x0006c5d4) main_clock2_pane_t5_ParamLimits

0xbb18,	// (0x0006c5d4) main_clock2_pane_t5

0xbb67,	// (0x0006c623) aid_call2_pane_cp10_ParamLimits

0xbb79,	// (0x0006c635) aid_call_pane_cp10_ParamLimits

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g1_ParamLimits

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbb8b,	// (0x0006c647) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbb8b,	// (0x0006c647) popup_clock_analogue_window_cp10_g4_ParamLimits

0x8323,	// (0x00068ddf) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x000702f2) popup_clock_analogue_window_cp10_g_ParamLimits

0xbb9d,	// (0x0006c659) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc352,	// (0x0006ce0e) cell_dialer2_keypad_pane_g2_ParamLimits

0xc352,	// (0x0006ce0e) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x000703d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x000703d8) cell_dialer2_keypad_pane_g

0xc36e,	// (0x0006ce2a) cell_dialer2_keypad_pane_t1

0xcd06,	// (0x0006d7c2) main_cset_text2_pane_ParamLimits

0xcd06,	// (0x0006d7c2) main_cset_text2_pane

0x214e,	// (0x00062c0a) area_vitu2_query_pane_g1_ParamLimits

0x5215,	// (0x00065cd1) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0007057e) area_vitu2_query_pane_g_ParamLimits

0x52c6,	// (0x00065d82) area_vitu2_query_pane_t7_ParamLimits

0x52c6,	// (0x00065d82) area_vitu2_query_pane_t7

0xd46d,	// (0x0006df29) bg_button_pane_cp018_ParamLimits

0xd47b,	// (0x0006df37) bg_button_pane_cp021_ParamLimits

0x52ea,	// (0x00065da6) bg_button_pane_cp022_ParamLimits

0x52ea,	// (0x00065da6) bg_vkb2_func_pane_cp08_ParamLimits

0xd46d,	// (0x0006df29) bg_vkb2_func_pane_cp06_ParamLimits

0xd47b,	// (0x0006df37) bg_vkb2_func_pane_cp07_ParamLimits

0x52fb,	// (0x00065db7) input_focus_pane_cp09_ParamLimits

0xd910,	// (0x0006e3cc) cam6_autofocus_pane_ParamLimits

0xd910,	// (0x0006e3cc) cam6_autofocus_pane

0xd932,	// (0x0006e3ee) cam6_image_uncrop_pane_ParamLimits

0xd932,	// (0x0006e3ee) cam6_image_uncrop_pane

0xd95f,	// (0x0006e41b) cam6_indi_pane_ParamLimits

0xd95f,	// (0x0006e41b) cam6_indi_pane

0xd979,	// (0x0006e435) cam6_mode_pane_ParamLimits

0xd979,	// (0x0006e435) cam6_mode_pane

0xd98d,	// (0x0006e449) cam6_timer_pane_ParamLimits

0xd98d,	// (0x0006e449) cam6_timer_pane

0xd999,	// (0x0006e455) cam6_zoom_pane_ParamLimits

0xd999,	// (0x0006e455) cam6_zoom_pane

0xc712,	// (0x0006d1ce) cam6_mode_pane_g1_ParamLimits

0xc712,	// (0x0006d1ce) cam6_mode_pane_g1

0xc72a,	// (0x0006d1e6) cam6_mode_pane_g2_ParamLimits

0xc72a,	// (0x0006d1e6) cam6_mode_pane_g2

0xc736,	// (0x0006d1f2) cam6_mode_pane_g3_ParamLimits

0xc736,	// (0x0006d1f2) cam6_mode_pane_g3

0xc742,	// (0x0006d1fe) cam6_mode_pane_g4_ParamLimits

0xc742,	// (0x0006d1fe) cam6_mode_pane_g4

0x0003,

0xfba3,	// (0x0007065f) cam6_mode_pane_g_ParamLimits

0xfba3,	// (0x0007065f) cam6_mode_pane_g

0x242f,	// (0x00062eeb) bg_tb_trans_pane_cp08_ParamLimits

0x242f,	// (0x00062eeb) bg_tb_trans_pane_cp08

0x243d,	// (0x00062ef9) cam6_battery_pane_ParamLimits

0x243d,	// (0x00062ef9) cam6_battery_pane

0x2453,	// (0x00062f0f) cam6_indi_pane_g1_ParamLimits

0x2453,	// (0x00062f0f) cam6_indi_pane_g1

0x2465,	// (0x00062f21) cam6_indi_pane_g2_ParamLimits

0x2465,	// (0x00062f21) cam6_indi_pane_g2

0x2477,	// (0x00062f33) cam6_indi_pane_g3_ParamLimits

0x2477,	// (0x00062f33) cam6_indi_pane_g3

0x0002,

0xfbac,	// (0x00070668) cam6_indi_pane_g_ParamLimits

0xfbac,	// (0x00070668) cam6_indi_pane_g

0x2489,	// (0x00062f45) cam6_indi_pane_t1_ParamLimits

0x2489,	// (0x00062f45) cam6_indi_pane_t1

0xc7f2,	// (0x0006d2ae) cam6_autofocus_pane_g1

0xc7fa,	// (0x0006d2b6) cam6_autofocus_pane_g2

0xc802,	// (0x0006d2be) cam6_autofocus_pane_g3

0xc80a,	// (0x0006d2c6) cam6_autofocus_pane_g4

0x0003,

0xfbb3,	// (0x0007066f) cam6_autofocus_pane_g

0x24af,	// (0x00062f6b) cam6_timer_pane_g1

0x24b7,	// (0x00062f73) cam6_timer_pane_t1

0x24c5,	// (0x00062f81) cam6_zoom_cont_pane

0x24cd,	// (0x00062f89) cam6_zoom_pane_g1

0x24d5,	// (0x00062f91) cam6_zoom_pane_g2

0xd9b7,	// (0x0006e473) cam6_zoom_pane_g3

0x0002,

0xfbbc,	// (0x00070678) cam6_zoom_pane_g

0x11e8,	// (0x00061ca4) cam6_battery_pane_g1

0x11e8,	// (0x00061ca4) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000701ff) cam6_battery_pane_g

0x24dd,	// (0x00062f99) cam6_zoom_cont_pane_g1

0x24e6,	// (0x00062fa2) cam6_zoom_cont_pane_g2

0x24ef,	// (0x00062fab) cam6_zoom_cont_pane_g3

0x0002,

0xfbc3,	// (0x0007067f) cam6_zoom_cont_pane_g

0xd9d4,	// (0x0006e490) cam6_mode_pane_cp_ParamLimits

0xd9d4,	// (0x0006e490) cam6_mode_pane_cp

0xd999,	// (0x0006e455) cam6_zoom_pane_cp_ParamLimits

0xd999,	// (0x0006e455) cam6_zoom_pane_cp

0xd9e8,	// (0x0006e4a4) vid6_image_uncrop_cif_pane_ParamLimits

0xd9e8,	// (0x0006e4a4) vid6_image_uncrop_cif_pane

0xda14,	// (0x0006e4d0) vid6_image_uncrop_nhd_pane_ParamLimits

0xda14,	// (0x0006e4d0) vid6_image_uncrop_nhd_pane

0xd932,	// (0x0006e3ee) vid6_image_uncrop_vga_pane_ParamLimits

0xd932,	// (0x0006e3ee) vid6_image_uncrop_vga_pane

0xda33,	// (0x0006e4ef) vid6_image_uncrop_wvga_pane_ParamLimits

0xda33,	// (0x0006e4ef) vid6_image_uncrop_wvga_pane

0xda52,	// (0x0006e50e) vid6_indi_pane_ParamLimits

0xda52,	// (0x0006e50e) vid6_indi_pane

0x242f,	// (0x00062eeb) bg_tb_trans_pane_cp09_ParamLimits

0x242f,	// (0x00062eeb) bg_tb_trans_pane_cp09

0x2507,	// (0x00062fc3) cam6_battery_pane_cp_ParamLimits

0x2507,	// (0x00062fc3) cam6_battery_pane_cp

0x2513,	// (0x00062fcf) vid6_indi_pane_g1_ParamLimits

0x2513,	// (0x00062fcf) vid6_indi_pane_g1

0x2525,	// (0x00062fe1) vid6_indi_pane_g2_ParamLimits

0x2525,	// (0x00062fe1) vid6_indi_pane_g2

0x2537,	// (0x00062ff3) vid6_indi_pane_g3_ParamLimits

0x2537,	// (0x00062ff3) vid6_indi_pane_g3

0x254e,	// (0x0006300a) vid6_indi_pane_g4_ParamLimits

0x254e,	// (0x0006300a) vid6_indi_pane_g4

0x2565,	// (0x00063021) vid6_indi_pane_g5_ParamLimits

0x2565,	// (0x00063021) vid6_indi_pane_g5

0x0004,

0xfbca,	// (0x00070686) vid6_indi_pane_g_ParamLimits

0xfbca,	// (0x00070686) vid6_indi_pane_g

0x257f,	// (0x0006303b) vid6_indi_pane_t1_ParamLimits

0x257f,	// (0x0006303b) vid6_indi_pane_t1

0x2595,	// (0x00063051) vid6_indi_pane_t2_ParamLimits

0x2595,	// (0x00063051) vid6_indi_pane_t2

0x25bd,	// (0x00063079) vid6_indi_pane_t3_ParamLimits

0x25bd,	// (0x00063079) vid6_indi_pane_t3

0x25e5,	// (0x000630a1) vid6_indi_pane_t4_ParamLimits

0x25e5,	// (0x000630a1) vid6_indi_pane_t4

0x0003,

0xfbd5,	// (0x00070691) vid6_indi_pane_t_ParamLimits

0xfbd5,	// (0x00070691) vid6_indi_pane_t

0x2609,	// (0x000630c5) wait_bar_pane_cp08

0xda77,	// (0x0006e533) main_cset_text2_pane_t1_ParamLimits

0xda77,	// (0x0006e533) main_cset_text2_pane_t1

0xd9bf,	// (0x0006e47b) listscroll_gen_pane_cp06_t1_ParamLimits

0xd9bf,	// (0x0006e47b) listscroll_gen_pane_cp06_t1

0x025e,	// (0x00060d1a) main_cam6_set_pane

0x1418,	// (0x00061ed4) bg_tb_trans_pane_cp06_ParamLimits

0xc6bb,	// (0x0006d177) cam4_indicators_pane_g1_ParamLimits

0xc6c8,	// (0x0006d184) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0007040c) cam4_indicators_pane_g_ParamLimits

0xc6e8,	// (0x0006d1a4) cam4_indicators_pane_t1_ParamLimits

0xa636,	// (0x0006b0f2) bg_tb_trans_pane_cp07_ParamLimits

0xc6bb,	// (0x0006d177) vid4_indicators_pane_g1_ParamLimits

0xc79e,	// (0x0006d25a) vid4_indicators_pane_g2_ParamLimits

0xc7ab,	// (0x0006d267) vid4_indicators_pane_g3_ParamLimits

0xc7bc,	// (0x0006d278) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0007041e) vid4_indicators_pane_g_ParamLimits

0xc7d8,	// (0x0006d294) vid4_indicators_pane_t1_ParamLimits

0xd597,	// (0x0006e053) vid4_progress_pane_g1_ParamLimits

0xd5a3,	// (0x0006e05f) vid4_progress_pane_g2_ParamLimits

0xd5af,	// (0x0006e06b) vid4_progress_pane_g3_ParamLimits

0xd5be,	// (0x0006e07a) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x000705c9) vid4_progress_pane_g_ParamLimits

0xd5dc,	// (0x0006e098) vid4_progress_pane_t1_ParamLimits

0xd5f2,	// (0x0006e0ae) vid4_progress_pane_t2_ParamLimits

0xd608,	// (0x0006e0c4) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x000705d4) vid4_progress_pane_t_ParamLimits

0xd61d,	// (0x0006e0d9) wait_bar_pane_cp07_ParamLimits

0xda9e,	// (0x0006e55a) main_cam6_set_pane_g2_ParamLimits

0xda9e,	// (0x0006e55a) main_cam6_set_pane_g2

0xdaaa,	// (0x0006e566) main_cset6_listscroll_pane_ParamLimits

0xdaaa,	// (0x0006e566) main_cset6_listscroll_pane

0xdad7,	// (0x0006e593) main_cset6_slider_pane_ParamLimits

0xdad7,	// (0x0006e593) main_cset6_slider_pane

0xdae3,	// (0x0006e59f) main_cset6_text2_pane_ParamLimits

0xdae3,	// (0x0006e59f) main_cset6_text2_pane

0x2618,	// (0x000630d4) main_cset6_text_pane

0x2620,	// (0x000630dc) main_cset_list_pane_copy1_ParamLimits

0x2620,	// (0x000630dc) main_cset_list_pane_copy1

0x2630,	// (0x000630ec) scroll_pane_cp028_copy1

0xdaf6,	// (0x0006e5b2) cset_list_set_pane_copy1

0xdb06,	// (0x0006e5c2) aid_position_infowindow_above_copy1

0xdb0e,	// (0x0006e5ca) aid_position_infowindow_below_copy1

0xdb16,	// (0x0006e5d2) cset_list_set_pane_g1_copy1

0x534c,	// (0x00065e08) cset_list_set_pane_g3_copy1_ParamLimits

0x534c,	// (0x00065e08) cset_list_set_pane_g3_copy1

0x535b,	// (0x00065e17) cset_list_set_pane_t1_copy1_ParamLimits

0x535b,	// (0x00065e17) cset_list_set_pane_t1_copy1

0xa636,	// (0x0006b0f2) list_highlight_pane_cp021_copy1_ParamLimits

0xa636,	// (0x0006b0f2) list_highlight_pane_cp021_copy1

0x2648,	// (0x00063104) cset6_slider_pane_ParamLimits

0x2648,	// (0x00063104) cset6_slider_pane

0x2674,	// (0x00063130) main_cset6_slider_pane_g1_ParamLimits

0x2674,	// (0x00063130) main_cset6_slider_pane_g1

0xdb1e,	// (0x0006e5da) main_cset6_slider_pane_g2_ParamLimits

0xdb1e,	// (0x0006e5da) main_cset6_slider_pane_g2

0x269c,	// (0x00063158) main_cset6_slider_pane_g3_ParamLimits

0x269c,	// (0x00063158) main_cset6_slider_pane_g3

0xdb46,	// (0x0006e602) main_cset6_slider_pane_g4_ParamLimits

0xdb46,	// (0x0006e602) main_cset6_slider_pane_g4

0xdb52,	// (0x0006e60e) main_cset6_slider_pane_g5_ParamLimits

0xdb52,	// (0x0006e60e) main_cset6_slider_pane_g5

0x1def,	// (0x000628ab) main_cset6_slider_pane_g7_ParamLimits

0x1def,	// (0x000628ab) main_cset6_slider_pane_g7

0x1dfb,	// (0x000628b7) main_cset6_slider_pane_g8_ParamLimits

0x1dfb,	// (0x000628b7) main_cset6_slider_pane_g8

0xdb5e,	// (0x0006e61a) main_cset6_slider_pane_g9_ParamLimits

0xdb5e,	// (0x0006e61a) main_cset6_slider_pane_g9

0xdb6a,	// (0x0006e626) main_cset6_slider_pane_g10_ParamLimits

0xdb6a,	// (0x0006e626) main_cset6_slider_pane_g10

0xdb76,	// (0x0006e632) main_cset6_slider_pane_g11_ParamLimits

0xdb76,	// (0x0006e632) main_cset6_slider_pane_g11

0xdb82,	// (0x0006e63e) main_cset6_slider_pane_g12_ParamLimits

0xdb82,	// (0x0006e63e) main_cset6_slider_pane_g12

0xdb8e,	// (0x0006e64a) main_cset6_slider_pane_g13_ParamLimits

0xdb8e,	// (0x0006e64a) main_cset6_slider_pane_g13

0xdb9a,	// (0x0006e656) main_cset6_slider_pane_g14_ParamLimits

0xdb9a,	// (0x0006e656) main_cset6_slider_pane_g14

0xdba6,	// (0x0006e662) main_cset6_slider_pane_g15_ParamLimits

0xdba6,	// (0x0006e662) main_cset6_slider_pane_g15

0xdbbe,	// (0x0006e67a) main_cset6_slider_pane_g16_ParamLimits

0xdbbe,	// (0x0006e67a) main_cset6_slider_pane_g16

0xdbca,	// (0x0006e686) main_cset6_slider_pane_g17_ParamLimits

0xdbca,	// (0x0006e686) main_cset6_slider_pane_g17

0x0011,

0xfbde,	// (0x0007069a) main_cset6_slider_pane_g_ParamLimits

0xfbde,	// (0x0007069a) main_cset6_slider_pane_g

0x26a8,	// (0x00063164) main_cset6_slider_pane_t1_ParamLimits

0x26a8,	// (0x00063164) main_cset6_slider_pane_t1

0xdbee,	// (0x0006e6aa) main_cset6_slider_pane_t2_ParamLimits

0xdbee,	// (0x0006e6aa) main_cset6_slider_pane_t2

0xdc19,	// (0x0006e6d5) main_cset6_slider_pane_t3_ParamLimits

0xdc19,	// (0x0006e6d5) main_cset6_slider_pane_t3

0xdc44,	// (0x0006e700) main_cset6_slider_pane_t4_ParamLimits

0xdc44,	// (0x0006e700) main_cset6_slider_pane_t4

0xdc6f,	// (0x0006e72b) main_cset6_slider_pane_t5_ParamLimits

0xdc6f,	// (0x0006e72b) main_cset6_slider_pane_t5

0x26e9,	// (0x000631a5) main_cset6_slider_pane_t7_ParamLimits

0x26e9,	// (0x000631a5) main_cset6_slider_pane_t7

0xdc9a,	// (0x0006e756) main_cset6_slider_pane_t8_ParamLimits

0xdc9a,	// (0x0006e756) main_cset6_slider_pane_t8

0xdcbe,	// (0x0006e77a) main_cset6_slider_pane_t9_ParamLimits

0xdcbe,	// (0x0006e77a) main_cset6_slider_pane_t9

0xdce2,	// (0x0006e79e) main_cset6_slider_pane_t10_ParamLimits

0xdce2,	// (0x0006e79e) main_cset6_slider_pane_t10

0xdd06,	// (0x0006e7c2) main_cset6_slider_pane_t11_ParamLimits

0xdd06,	// (0x0006e7c2) main_cset6_slider_pane_t11

0x271f,	// (0x000631db) main_cset6_slider_pane_t14_ParamLimits

0x271f,	// (0x000631db) main_cset6_slider_pane_t14

0x2758,	// (0x00063214) main_cset6_slider_pane_t15_ParamLimits

0x2758,	// (0x00063214) main_cset6_slider_pane_t15

0x000b,

0xfc03,	// (0x000706bf) main_cset6_slider_pane_t_ParamLimits

0xfc03,	// (0x000706bf) main_cset6_slider_pane_t

0x2791,	// (0x0006324d) cset_slider_pane_g1_copy1

0x279a,	// (0x00063256) cset_slider_pane_g2_copy1

0x27a3,	// (0x0006325f) cset_slider_pane_g3_copy1

0x025e,	// (0x00060d1a) bg_popup_sub_pane_cp011_copy1

0x1f6e,	// (0x00062a2a) main_cset_text_pane_g1_copy1

0x1f76,	// (0x00062a32) main_cset_text_pane_t1_copy1

0x1f84,	// (0x00062a40) main_cset_text_pane_t2_copy1

0x1f92,	// (0x00062a4e) main_cset_text_pane_t3_copy1

0x1fa0,	// (0x00062a5c) main_cset_text_pane_t4_copy1

0x1fae,	// (0x00062a6a) main_cset_text_pane_t5_copy1

0x1fbc,	// (0x00062a78) main_cset_text_pane_t6_copy1

0x1fca,	// (0x00062a86) main_cset_text_pane_t7_copy1

0xdd2a,	// (0x0006e7e6) main_cset_text2_pane_t1_copy1

0x025e,	// (0x00060d1a) main_ncimui_pane

0xa69d,	// (0x0006b159) popup_query_ncimui_window_ParamLimits

0xa69d,	// (0x0006b159) popup_query_ncimui_window

0xb338,	// (0x0006bdf4) field_cale_ev2_pane_g4_ParamLimits

0xb338,	// (0x0006bdf4) field_cale_ev2_pane_g4

0xc092,	// (0x0006cb4e) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc092,	// (0x0006cb4e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x000703b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x000703b3) cell_video_dialer_keypad_pane_g

0xc0aa,	// (0x0006cb66) cell_video_dialer_keypad_pane_t1

0x025e,	// (0x00060d1a) bg_popup_window_pane_cp012

0x7fd0,	// (0x00068a8c) heading_pane_cp06

0x289b,	// (0x00063357) ncim_query_content_pane

0x025e,	// (0x00060d1a) bg_popup_heading_pane_cp01

0x28a3,	// (0x0006335f) ncim_heading_pane_t1

0x28b1,	// (0x0006336d) ncim_indicator_popup_pane

0x28c3,	// (0x0006337f) ncim_query_button_pane

0x28d9,	// (0x00063395) ncim_query_content_pane_t1

0x28eb,	// (0x000633a7) ncim_query_content_pane_t2

0x0005,

0xfc42,	// (0x000706fe) ncim_query_content_pane_t

0x2925,	// (0x000633e1) ncim_query_list_pane

0x2937,	// (0x000633f3) ncim_query_popup_pane

0x28b1,	// (0x0006336d) ncim_indicator_popup_pane_ParamLimits

0xde1f,	// (0x0006e8db) ncim_query_content_pane_g1_ParamLimits

0xde1f,	// (0x0006e8db) ncim_query_content_pane_g1

0x28d9,	// (0x00063395) ncim_query_content_pane_t1_ParamLimits

0x28eb,	// (0x000633a7) ncim_query_content_pane_t2_ParamLimits

0xde2b,	// (0x0006e8e7) ncim_query_content_pane_t3_ParamLimits

0xde2b,	// (0x0006e8e7) ncim_query_content_pane_t3

0xde48,	// (0x0006e904) ncim_query_content_pane_t4_ParamLimits

0xde48,	// (0x0006e904) ncim_query_content_pane_t4

0xde65,	// (0x0006e921) ncim_query_content_pane_t5_ParamLimits

0xde65,	// (0x0006e921) ncim_query_content_pane_t5

0x28fd,	// (0x000633b9) ncim_query_content_pane_t6_ParamLimits

0x28fd,	// (0x000633b9) ncim_query_content_pane_t6

0xfc42,	// (0x000706fe) ncim_query_content_pane_t_ParamLimits

0x2925,	// (0x000633e1) ncim_query_list_pane_ParamLimits

0x2937,	// (0x000633f3) ncim_query_popup_pane_ParamLimits

0x294b,	// (0x00063407) wait_bar_pane_cp04

0x025e,	// (0x00060d1a) input_focus_pane_cp011

0x2953,	// (0x0006340f) ncim_query_popup_pane_t1

0x2961,	// (0x0006341d) ncim_list_query_list_pane_ParamLimits

0x2961,	// (0x0006341d) ncim_list_query_list_pane

0x025e,	// (0x00060d1a) bg_button_pane_cp027

0x2974,	// (0x00063430) ncim_query_button_pane_g1

0x025e,	// (0x00060d1a) list_highlight_pane_cp012

0x297e,	// (0x0006343a) ncim_list_query_list_pane_g1

0x2986,	// (0x00063442) ncim_list_query_list_pane_t1

0xc6d8,	// (0x0006d194) cam4_indicators_pane_g3_ParamLimits

0xc6d8,	// (0x0006d194) cam4_indicators_pane_g3

0xc7c8,	// (0x0006d284) vid4_indicators_pane_g5_ParamLimits

0xc7c8,	// (0x0006d284) vid4_indicators_pane_g5

0xd5cd,	// (0x0006e089) vid4_progress_pane_g5_ParamLimits

0xd5cd,	// (0x0006e089) vid4_progress_pane_g5

0xdd59,	// (0x0006e815) main_ncimui_pane_g1

0xdda3,	// (0x0006e85f) ncimui_group_query_pane_ParamLimits

0xdda3,	// (0x0006e85f) ncimui_group_query_pane

0xdde1,	// (0x0006e89d) ncimui_list_pane_ParamLimits

0xdde1,	// (0x0006e89d) ncimui_list_pane

0xddfb,	// (0x0006e8b7) ncimui_text_pane_ParamLimits

0xddfb,	// (0x0006e8b7) ncimui_text_pane

0xde82,	// (0x0006e93e) ncimui_text_pane_t1_ParamLimits

0xde82,	// (0x0006e93e) ncimui_text_pane_t1

0x2994,	// (0x00063450) ncimui_list_single_graphic_pane_ParamLimits

0x2994,	// (0x00063450) ncimui_list_single_graphic_pane

0xdea1,	// (0x0006e95d) ncimui_query_pane_ParamLimits

0xdea1,	// (0x0006e95d) ncimui_query_pane

0x025e,	// (0x00060d1a) list_highlight_pane_cp013

0x29a4,	// (0x00063460) ncim_list_query_list_pane_t1_copy1

0x297e,	// (0x0006343a) ncim_list_single_graphic_pane_g1

0x29b2,	// (0x0006346e) ncim_query_button_pane_cp01

0x29ba,	// (0x00063476) ncim_query_entry_pane_ParamLimits

0x29ba,	// (0x00063476) ncim_query_entry_pane

0x29ca,	// (0x00063486) ncimui_query_pane_g1

0x29d2,	// (0x0006348e) ncimui_query_pane_t1_ParamLimits

0x29d2,	// (0x0006348e) ncimui_query_pane_t1

0x025e,	// (0x00060d1a) input_focus_pane_cp012

0x2953,	// (0x0006340f) ncim_query_entry_pane_t1

0x0a2c,	// (0x000614e8) main_im_pane_ParamLimits

0xa636,	// (0x0006b0f2) main_mobtv_pane_ParamLimits

0xa636,	// (0x0006b0f2) main_mobtv_pane

0xdbd6,	// (0x0006e692) main_cset6_slider_pane_g18_ParamLimits

0xdbd6,	// (0x0006e692) main_cset6_slider_pane_g18

0xdbe2,	// (0x0006e69e) main_cset6_slider_pane_g19_ParamLimits

0xdbe2,	// (0x0006e69e) main_cset6_slider_pane_g19

0x1c62,	// (0x0006271e) bg_main_mobtv_pane_ParamLimits

0x1c62,	// (0x0006271e) bg_main_mobtv_pane

0xdeb1,	// (0x0006e96d) main_mobtv_info_pane

0xdebc,	// (0x0006e978) main_mobtv_loading_pane_ParamLimits

0xdebc,	// (0x0006e978) main_mobtv_loading_pane

0x29f6,	// (0x000634b2) main_mobtv_pg_channel_list_pane

0x2a00,	// (0x000634bc) main_mobtv_pg_hdr_pane

0xdec9,	// (0x0006e985) main_mobtv_programe_curr_pane_ParamLimits

0xdec9,	// (0x0006e985) main_mobtv_programe_curr_pane

0xded6,	// (0x0006e992) main_mobtv_programe_next_pane_ParamLimits

0xded6,	// (0x0006e992) main_mobtv_programe_next_pane

0x2a09,	// (0x000634c5) popup_mobtv_noti_window

0x11e8,	// (0x00061ca4) main_tv_pg_hdr_pane_g1

0x2a13,	// (0x000634cf) main_tv_pg_hdr_pane_g2

0x2a1b,	// (0x000634d7) main_tv_pg_hdr_pane_g3

0x2a23,	// (0x000634df) main_tv_pg_hdr_pane_g4

0x2a2b,	// (0x000634e7) main_tv_pg_hdr_pane_g5

0x2a35,	// (0x000634f1) main_tv_pg_hdr_pane_g6

0x2a3f,	// (0x000634fb) main_tv_pg_hdr_pane_g7

0x2a49,	// (0x00063505) main_tv_pg_hdr_pane_g8

0x2a53,	// (0x0006350f) main_tv_pg_hdr_pane_g9

0x2a5d,	// (0x00063519) main_tv_pg_hdr_pane_g10

0x2a67,	// (0x00063523) main_tv_pg_hdr_pane_g11

0x000a,

0xfc4f,	// (0x0007070b) main_tv_pg_hdr_pane_g

0x2a71,	// (0x0006352d) main_tv_pg_hdr_pane_t1

0x2a7f,	// (0x0006353b) main_tv_pg_hdr_pane_t2

0x2a8d,	// (0x00063549) main_tv_pg_hdr_pane_t3

0x2a9d,	// (0x00063559) main_tv_pg_hdr_pane_t4

0x2aad,	// (0x00063569) main_tv_pg_hdr_pane_t5

0x0004,

0xfc66,	// (0x00070722) main_tv_pg_hdr_pane_t

0x2abd,	// (0x00063579) single_mobtv_pg_channel_pane_ParamLimits

0x2abd,	// (0x00063579) single_mobtv_pg_channel_pane

0x2acf,	// (0x0006358b) single_mobtv_pg_channel_table_pane

0x2ad8,	// (0x00063594) single_mobtv_pg_channel_thumb_pane

0x2ae1,	// (0x0006359d) single_tv_pg_channel_pane_g1

0x2aea,	// (0x000635a6) single_tv_pg_channel_pane_g2

0x0001,

0xfc71,	// (0x0007072d) single_tv_pg_channel_pane_g

0x1418,	// (0x00061ed4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1418,	// (0x00061ed4) bg_single_mobtv_pg_channel_thumb_pane

0x2af3,	// (0x000635af) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2af3,	// (0x000635af) single_mobtv_pg_channel_thumb_pane_g1

0x2b01,	// (0x000635bd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2b01,	// (0x000635bd) single_mobtv_pg_channel_thumb_pane_g2

0x2b0d,	// (0x000635c9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2b0d,	// (0x000635c9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc76,	// (0x00070732) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc76,	// (0x00070732) single_mobtv_pg_channel_thumb_pane_g

0x2b19,	// (0x000635d5) single_mobtv_pg_channel_thumb_pane_t1

0x2b27,	// (0x000635e3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc7d,	// (0x00070739) single_mobtv_pg_channel_thumb_pane_t

0x11e8,	// (0x00061ca4) bg_single_mobtv_pg_channel_table_pane_g1

0x11e8,	// (0x00061ca4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000701ff) bg_single_mobtv_pg_channel_table_pane_g

0x2b35,	// (0x000635f1) single_mobtv_pg_channel_table_pane_t1

0x2b43,	// (0x000635ff) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc82,	// (0x0007073e) single_mobtv_pg_channel_table_pane_t

0xdeeb,	// (0x0006e9a7) main_mobtv_info_pane_g1_ParamLimits

0xdeeb,	// (0x0006e9a7) main_mobtv_info_pane_g1

0xdf07,	// (0x0006e9c3) main_mobtv_info_pane_t1_ParamLimits

0xdf07,	// (0x0006e9c3) main_mobtv_info_pane_t1

0xdf7f,	// (0x0006ea3b) main_mobtv_info_pane_t2_ParamLimits

0xdf7f,	// (0x0006ea3b) main_mobtv_info_pane_t2

0x0002,

0xfc8c,	// (0x00070748) main_mobtv_info_pane_t_ParamLimits

0xfc8c,	// (0x00070748) main_mobtv_info_pane_t

0xe012,	// (0x0006eace) wait_bar_pane_cp05

0xe024,	// (0x0006eae0) main_mobtv_loading_pane_g1_ParamLimits

0xe024,	// (0x0006eae0) main_mobtv_loading_pane_g1

0xe030,	// (0x0006eaec) main_mobtv_loading_pane_g2_ParamLimits

0xe030,	// (0x0006eaec) main_mobtv_loading_pane_g2

0xe03c,	// (0x0006eaf8) main_mobtv_loading_pane_g3_ParamLimits

0xe03c,	// (0x0006eaf8) main_mobtv_loading_pane_g3

0x0002,

0xfc93,	// (0x0007074f) main_mobtv_loading_pane_g_ParamLimits

0xfc93,	// (0x0007074f) main_mobtv_loading_pane_g

0x2b51,	// (0x0006360d) main_mobtv_loading_pane_t1_ParamLimits

0x2b51,	// (0x0006360d) main_mobtv_loading_pane_t1

0x2b69,	// (0x00063625) main_mobtv_loading_pane_t2_ParamLimits

0x2b69,	// (0x00063625) main_mobtv_loading_pane_t2

0x0001,

0xfc9a,	// (0x00070756) main_mobtv_loading_pane_t_ParamLimits

0xfc9a,	// (0x00070756) main_mobtv_loading_pane_t

0xe04a,	// (0x0006eb06) wait_bar_pane_cp06_ParamLimits

0xe04a,	// (0x0006eb06) wait_bar_pane_cp06

0x2b8d,	// (0x00063649) main_mobtv_programe_curr_pane_t1

0x2b9b,	// (0x00063657) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc9f,	// (0x0007075b) main_mobtv_programe_curr_pane_t

0x2ba9,	// (0x00063665) main_mobtv_programe_next_pane_t1

0x2bb7,	// (0x00063673) main_mobtv_programe_next_pane_t2

0x2bc5,	// (0x00063681) main_mobtv_programe_next_pane_t3

0x0002,

0xfca4,	// (0x00070760) main_mobtv_programe_next_pane_t

0x025e,	// (0x00060d1a) bg_popup_mobtv_noti_window_pane

0x2bd3,	// (0x0006368f) popup_mobtv_noti_window_g1

0x2bdb,	// (0x00063697) popup_mobtv_noti_window_t1

0x2be9,	// (0x000636a5) popup_mobtv_noti_window_t2

0x0001,

0xfcab,	// (0x00070767) popup_mobtv_noti_window_t

0x11e8,	// (0x00061ca4) bg_popup_mobtv_noti_window_pane_g1

0x025e,	// (0x00060d1a) sc_clock_pane

0x025e,	// (0x00060d1a) main_fs_bigclock_pane

0xd7bf,	// (0x0006e27b) blid2_tripm_pane_t4_ParamLimits

0xd7bf,	// (0x0006e27b) blid2_tripm_pane_t4

0xe056,	// (0x0006eb12) sc_clock_pane_g1_ParamLimits

0xe056,	// (0x0006eb12) sc_clock_pane_g1

0xe064,	// (0x0006eb20) sc_clock_pane_t1_ParamLimits

0xe064,	// (0x0006eb20) sc_clock_pane_t1

0xe079,	// (0x0006eb35) sc_clock_pane_t2_ParamLimits

0xe079,	// (0x0006eb35) sc_clock_pane_t2

0xe08b,	// (0x0006eb47) sc_clock_pane_t3_ParamLimits

0xe08b,	// (0x0006eb47) sc_clock_pane_t3

0x0004,

0xfcb0,	// (0x0007076c) sc_clock_pane_t_ParamLimits

0xfcb0,	// (0x0007076c) sc_clock_pane_t

0xe886,	// (0x0006f342) main_fs_bigclock_indicator_pane_ParamLimits

0xe886,	// (0x0006f342) main_fs_bigclock_indicator_pane

0xe112,	// (0x0006ebce) main_fs_bigclock_pane_g1_ParamLimits

0xe112,	// (0x0006ebce) main_fs_bigclock_pane_g1

0xe892,	// (0x0006f34e) main_fs_bigclock_pane_t1_ParamLimits

0xe892,	// (0x0006f34e) main_fs_bigclock_pane_t1

0xe8a4,	// (0x0006f360) main_fs_bigclock_pane_t2_ParamLimits

0xe8a4,	// (0x0006f360) main_fs_bigclock_pane_t2

0xe8b8,	// (0x0006f374) main_fs_bigclock_pane_t3_ParamLimits

0xe8b8,	// (0x0006f374) main_fs_bigclock_pane_t3

0x0002,

0xfeaf,	// (0x0007096b) main_fs_bigclock_pane_t_ParamLimits

0xfeaf,	// (0x0007096b) main_fs_bigclock_pane_t

0x37fa,	// (0x000642b6) main_fs_bigclock_indicator_pane_g1

0x28cb,	// (0x00063387) ncim_query_content_pane_g2_ParamLimits

0x28cb,	// (0x00063387) ncim_query_content_pane_g2

0x0001,

0xfc3d,	// (0x000706f9) ncim_query_content_pane_g_ParamLimits

0xfc3d,	// (0x000706f9) ncim_query_content_pane_g

0xe09d,	// (0x0006eb59) sc_clock_pane_t4_ParamLimits

0xe09d,	// (0x0006eb59) sc_clock_pane_t4

0xa636,	// (0x0006b0f2) main_radioblah_pane

0x1bcd,	// (0x00062689) cell_call4_button_pane_t1_copy1_ParamLimits

0x1bcd,	// (0x00062689) cell_call4_button_pane_t1_copy1

0xdd63,	// (0x0006e81f) main_ncimui_pane_t1_ParamLimits

0xdd63,	// (0x0006e81f) main_ncimui_pane_t1

0xdd75,	// (0x0006e831) main_ncimui_pane_t2_ParamLimits

0xdd75,	// (0x0006e831) main_ncimui_pane_t2

0x0002,

0xfc36,	// (0x000706f2) main_ncimui_pane_t_ParamLimits

0xfc36,	// (0x000706f2) main_ncimui_pane_t

0x2d21,	// (0x000637dd) main_radioblah_anim_pane_ParamLimits

0x2d21,	// (0x000637dd) main_radioblah_anim_pane

0x2d32,	// (0x000637ee) main_radioblah_info_pane_ParamLimits

0x2d32,	// (0x000637ee) main_radioblah_info_pane

0x2d46,	// (0x00063802) main_radioblah_pane_t1_ParamLimits

0x2d46,	// (0x00063802) main_radioblah_pane_t1

0x2d62,	// (0x0006381e) main_radioblah_pane_t2_ParamLimits

0x2d62,	// (0x0006381e) main_radioblah_pane_t2

0x0003,

0xfcd1,	// (0x0007078d) main_radioblah_pane_t_ParamLimits

0xfcd1,	// (0x0007078d) main_radioblah_pane_t

0xe166,	// (0x0006ec22) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe166,	// (0x0006ec22) main_radioblah_rocker_ctrl_pane

0x2daa,	// (0x00063866) main_radioblah_info_pane_t1_ParamLimits

0x2daa,	// (0x00063866) main_radioblah_info_pane_t1

0xe1af,	// (0x0006ec6b) main_radioblah_info_pane_t2_ParamLimits

0xe1af,	// (0x0006ec6b) main_radioblah_info_pane_t2

0x0003,

0xfcda,	// (0x00070796) main_radioblah_info_pane_t_ParamLimits

0xfcda,	// (0x00070796) main_radioblah_info_pane_t

0x11e8,	// (0x00061ca4) main_radioblah_rocker_ctrl_pane_g1

0xe25f,	// (0x0006ed1b) main_radioblah_rocker_ctrl_pane_g2

0xe267,	// (0x0006ed23) main_radioblah_rocker_ctrl_pane_g3

0xe26f,	// (0x0006ed2b) main_radioblah_rocker_ctrl_pane_g4

0xe277,	// (0x0006ed33) main_radioblah_rocker_ctrl_pane_g5

0xe27f,	// (0x0006ed3b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfce3,	// (0x0007079f) main_radioblah_rocker_ctrl_pane_g

0xdd2a,	// (0x0006e7e6) main_cset_text2_pane_t1_copy1_ParamLimits

0xc61f,	// (0x0006d0db) cam4_image_uncrop_qvga_pane

0xc74e,	// (0x0006d20a) vid4_image_uncrop_qcif_pane

0xd951,	// (0x0006e40d) cam6_image_uncrop_qvga_pane_ParamLimits

0xd951,	// (0x0006e40d) cam6_image_uncrop_qvga_pane

0x24f7,	// (0x00062fb3) vid6_image_uncrop_qcif_pane_ParamLimits

0x24f7,	// (0x00062fb3) vid6_image_uncrop_qcif_pane

0x025e,	// (0x00060d1a) bg_popup_preview_window_pane_cp03

0x287d,	// (0x00063339) list_cset_text2_pane

0x2885,	// (0x00063341) main_cset6_text2_pane_g1

0x288d,	// (0x00063349) main_cset6_text2_pane_t1

0xe287,	// (0x0006ed43) list_cset_text2_pane_t1_ParamLimits

0xe287,	// (0x0006ed43) list_cset_text2_pane_t1

0xa636,	// (0x0006b0f2) main_radioblah_pane_ParamLimits

0xdffe,	// (0x0006eaba) main_mobtv_info_pane_t3_ParamLimits

0xdffe,	// (0x0006eaba) main_mobtv_info_pane_t3

0xe154,	// (0x0006ec10) main_radioblah_pane_g1

0xe17f,	// (0x0006ec3b) main_radioblah_info_pane_g1

0xe204,	// (0x0006ecc0) main_radioblah_info_pane_t3_ParamLimits

0xe204,	// (0x0006ecc0) main_radioblah_info_pane_t3

0x79ec,	// (0x000684a8) highlight_cell_cale_month_pane_ParamLimits

0x79ec,	// (0x000684a8) highlight_cell_cale_month_pane

0x025e,	// (0x00060d1a) main_phob_fisheye_pane

0x156e,	// (0x0006202a) scroll_pane_cp0031_ParamLimits

0x156e,	// (0x0006202a) scroll_pane_cp0031

0x2609,	// (0x000630c5) wait_bar_pane_cp08_ParamLimits

0xdaf6,	// (0x0006e5b2) cset_list_set_pane_copy1_ParamLimits

0x2de4,	// (0x000638a0) highlight_cell_cale_month_pane_g1

0xe2a0,	// (0x0006ed5c) highlight_cell_cale_month_pane_t1

0x223e,	// (0x00062cfa) list_gen_pane_cp01

0x1dda,	// (0x00062896) scroll_pane_01

0xe2ae,	// (0x0006ed6a) list_single_double_fisheye_pane

0x5441,	// (0x00065efd) list_double_fisheye_pane_g1_ParamLimits

0x5441,	// (0x00065efd) list_double_fisheye_pane_g1

0x544d,	// (0x00065f09) list_double_fisheye_pane_g2_ParamLimits

0x544d,	// (0x00065f09) list_double_fisheye_pane_g2

0xe2b7,	// (0x0006ed73) list_double_fisheye_pane_g3_ParamLimits

0xe2b7,	// (0x0006ed73) list_double_fisheye_pane_g3

0x0004,

0xfcf0,	// (0x000707ac) list_double_fisheye_pane_g_ParamLimits

0xfcf0,	// (0x000707ac) list_double_fisheye_pane_g

0x547e,	// (0x00065f3a) list_double_fisheye_pane_t1_ParamLimits

0x547e,	// (0x00065f3a) list_double_fisheye_pane_t1

0x5499,	// (0x00065f55) list_double_fisheye_pane_t2_ParamLimits

0x5499,	// (0x00065f55) list_double_fisheye_pane_t2

0x0001,

0xfcfb,	// (0x000707b7) list_double_fisheye_pane_t_ParamLimits

0xfcfb,	// (0x000707b7) list_double_fisheye_pane_t

0x025e,	// (0x00060d1a) main_call5_pane

0xe0c3,	// (0x0006eb7f) sc_swipe_pane_ParamLimits

0xe0c3,	// (0x0006eb7f) sc_swipe_pane

0xe2cf,	// (0x0006ed8b) call5_image_pane_ParamLimits

0xe2cf,	// (0x0006ed8b) call5_image_pane

0xe2e1,	// (0x0006ed9d) call5_swipe_1_pane_ParamLimits

0xe2e1,	// (0x0006ed9d) call5_swipe_1_pane

0xe2ed,	// (0x0006eda9) call5_swipe_2_pane_ParamLimits

0xe2ed,	// (0x0006eda9) call5_swipe_2_pane

0xe309,	// (0x0006edc5) popup_call5_audio_first_window_ParamLimits

0xe309,	// (0x0006edc5) popup_call5_audio_first_window

0x1418,	// (0x00061ed4) call5_swipe_1_pane_g1_ParamLimits

0x1418,	// (0x00061ed4) call5_swipe_1_pane_g1

0x2dec,	// (0x000638a8) call5_swipe_1_pane_g2_ParamLimits

0x2dec,	// (0x000638a8) call5_swipe_1_pane_g2

0x0001,

0xfd00,	// (0x000707bc) call5_swipe_1_pane_g_ParamLimits

0xfd00,	// (0x000707bc) call5_swipe_1_pane_g

0x2df8,	// (0x000638b4) call5_swipe_1_pane_t1_ParamLimits

0x2df8,	// (0x000638b4) call5_swipe_1_pane_t1

0x1418,	// (0x00061ed4) call5_swipe_2_pane_g1_ParamLimits

0x1418,	// (0x00061ed4) call5_swipe_2_pane_g1

0x2e0d,	// (0x000638c9) call5_swipe_2_pane_g2_ParamLimits

0x2e0d,	// (0x000638c9) call5_swipe_2_pane_g2

0x0001,

0xfd05,	// (0x000707c1) call5_swipe_2_pane_g_ParamLimits

0xfd05,	// (0x000707c1) call5_swipe_2_pane_g

0x2e19,	// (0x000638d5) call5_swipe_2_pane_t1_ParamLimits

0x2e19,	// (0x000638d5) call5_swipe_2_pane_t1

0x2e2e,	// (0x000638ea) sc_swipe_pane_g1_ParamLimits

0x2e2e,	// (0x000638ea) sc_swipe_pane_g1

0x2e3b,	// (0x000638f7) sc_swipe_pane_g2_ParamLimits

0x2e3b,	// (0x000638f7) sc_swipe_pane_g2

0x0001,

0xfd0a,	// (0x000707c6) sc_swipe_pane_g_ParamLimits

0xfd0a,	// (0x000707c6) sc_swipe_pane_g

0x2e47,	// (0x00063903) sc_swipe_pane_t1_ParamLimits

0x2e47,	// (0x00063903) sc_swipe_pane_t1

0x025e,	// (0x00060d1a) main_cmail_launcher_pane

0xe319,	// (0x0006edd5) aid_size_cell_cmail_l_ParamLimits

0xe319,	// (0x0006edd5) aid_size_cell_cmail_l

0xe329,	// (0x0006ede5) grid_cmail_l_pane_ParamLimits

0xe329,	// (0x0006ede5) grid_cmail_l_pane

0xe339,	// (0x0006edf5) cell_cmail_l_pane_ParamLimits

0xe339,	// (0x0006edf5) cell_cmail_l_pane

0xe34f,	// (0x0006ee0b) cell_cmail_l_pane_g1_ParamLimits

0xe34f,	// (0x0006ee0b) cell_cmail_l_pane_g1

0xe35b,	// (0x0006ee17) cell_cmail_l_pane_t1_ParamLimits

0xe35b,	// (0x0006ee17) cell_cmail_l_pane_t1

0x2e5c,	// (0x00063918) cell_cmail_l_pane_t2_ParamLimits

0x2e5c,	// (0x00063918) cell_cmail_l_pane_t2

0x0001,

0xfd0f,	// (0x000707cb) cell_cmail_l_pane_t_ParamLimits

0xfd0f,	// (0x000707cb) cell_cmail_l_pane_t

0xa636,	// (0x0006b0f2) grid_highlight_pane_cp018_ParamLimits

0xa636,	// (0x0006b0f2) grid_highlight_pane_cp018

0x5de4,	// (0x000668a0) main2_pane_ParamLimits

0x5de4,	// (0x000668a0) main2_pane

0x0b05,	// (0x000615c1) popup_sp_fs_action_menu_bg_pane_g1

0x0b0d,	// (0x000615c9) popup_sp_fs_action_menu_bg_pane_g2

0x0b15,	// (0x000615d1) popup_sp_fs_action_menu_bg_pane_g3

0x0b1d,	// (0x000615d9) popup_sp_fs_action_menu_bg_pane_g4

0x0b25,	// (0x000615e1) popup_sp_fs_action_menu_bg_pane_g5

0x0b2d,	// (0x000615e9) popup_sp_fs_action_menu_bg_pane_g6

0x0b35,	// (0x000615f1) popup_sp_fs_action_menu_bg_pane_g7

0x0b3d,	// (0x000615f9) popup_sp_fs_action_menu_bg_pane_g8

0x0b45,	// (0x00061601) popup_sp_fs_action_menu_bg_pane_g9

0x0b4d,	// (0x00061609) popup_sp_fs_action_menu_bg_pane_g10

0x0b4d,	// (0x00061609) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0006fcab) popup_sp_fs_action_menu_bg_pane_g

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g3_g1

0x4d26,	// (0x000657e2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_t3_g3_g2

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0006fd5b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0006fd5b) list_medium_line_x2_t3_g3_g

0x4d3e,	// (0x000657fa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4d3e,	// (0x000657fa) list_medium_line_x2_t3_g3_t1

0x4d53,	// (0x0006580f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4d53,	// (0x0006580f) list_medium_line_x2_t3_g3_t2

0x4d65,	// (0x00065821) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0006fd62) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0006fd62) list_medium_line_x2_t3_g3_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g2_g1

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0006fd69) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0006fd69) list_medium_line_x2_t3_g2_g

0x4d7a,	// (0x00065836) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4d7a,	// (0x00065836) list_medium_line_x2_t3_g2_t1

0x4d90,	// (0x0006584c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4d90,	// (0x0006584c) list_medium_line_x2_t3_g2_t2

0x4da2,	// (0x0006585e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4da2,	// (0x0006585e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0006fd6e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0006fd6e) list_medium_line_x2_t3_g2_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t4_g4_g1

0x4dc0,	// (0x0006587c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4dc0,	// (0x0006587c) list_medium_line_x2_t4_g4_g2

0x4d26,	// (0x000657e2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_t4_g4_g3

0x4dcc,	// (0x00065888) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4dcc,	// (0x00065888) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0006fd75) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0006fd75) list_medium_line_x2_t4_g4_g

0x4dd8,	// (0x00065894) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4dd8,	// (0x00065894) list_medium_line_x2_t4_g4_t1

0x4df2,	// (0x000658ae) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4df2,	// (0x000658ae) list_medium_line_x2_t4_g4_t2

0x4e08,	// (0x000658c4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4e08,	// (0x000658c4) list_medium_line_x2_t4_g4_t3

0x4e1d,	// (0x000658d9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4e1d,	// (0x000658d9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0006fd7e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0006fd7e) list_medium_line_x2_t4_g4_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g4_g1

0x4dc0,	// (0x0006587c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4dc0,	// (0x0006587c) list_medium_line_x2_t2_g4_g2

0x4d26,	// (0x000657e2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_t2_g4_g3

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0006fde5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0006fde5) list_medium_line_x2_t2_g4_g

0x4e2f,	// (0x000658eb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4e2f,	// (0x000658eb) list_medium_line_x2_t2_g4_t1

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0006fdee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0006fdee) list_medium_line_x2_t2_g4_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g3_g1

0x4d26,	// (0x000657e2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_t2_g3_g2

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0006fd5b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0006fd5b) list_medium_line_x2_t2_g3_g

0x4e44,	// (0x00065900) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4e44,	// (0x00065900) list_medium_line_x2_t2_g3_t1

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0006fdf3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0006fdf3) list_medium_line_x2_t2_g3_t

0x7da0,	// (0x0006885c) main_sp_fs_list_pane_ParamLimits

0x7da0,	// (0x0006885c) main_sp_fs_list_pane

0x7dac,	// (0x00068868) sp_fs_scroll_pane_ParamLimits

0x7dac,	// (0x00068868) sp_fs_scroll_pane

0x4e59,	// (0x00065915) list_medium_line_x2_t3_t1

0x4e69,	// (0x00065925) list_medium_line_x2_t3_t2

0x4e77,	// (0x00065933) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0006fe3e) list_medium_line_x2_t3_t

0x4e85,	// (0x00065941) list_medium_line_x3_t4_t1

0x4e95,	// (0x00065951) list_medium_line_x3_t4_t2

0x4ea3,	// (0x0006595f) list_medium_line_x3_t4_t3

0x4e77,	// (0x00065933) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0006fe45) list_medium_line_x3_t4_t

0x4eb1,	// (0x0006596d) list_medium_line_x4_t5_t1

0x4ec1,	// (0x0006597d) list_medium_line_x4_t5_t2

0x4ea3,	// (0x0006595f) list_medium_line_x4_t5_t3

0x4ecf,	// (0x0006598b) list_medium_line_x4_t5_t4

0x4e77,	// (0x00065933) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0006fe4e) list_medium_line_x4_t5_t

0x4d1a,	// (0x000657d6) list_medium_line_t4_g4_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_t4_g4_g1

0x4dcc,	// (0x00065888) list_medium_line_t4_g4_g2_ParamLimits

0x4dcc,	// (0x00065888) list_medium_line_t4_g4_g2

0x4edd,	// (0x00065999) list_medium_line_t4_g4_g3_ParamLimits

0x4edd,	// (0x00065999) list_medium_line_t4_g4_g3

0x4d32,	// (0x000657ee) list_medium_line_t4_g4_g4_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0006fe59) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0006fe59) list_medium_line_t4_g4_g

0x4ee9,	// (0x000659a5) list_medium_line_t4_g4_t1_ParamLimits

0x4ee9,	// (0x000659a5) list_medium_line_t4_g4_t1

0x4efe,	// (0x000659ba) list_medium_line_t4_g4_t2_ParamLimits

0x4efe,	// (0x000659ba) list_medium_line_t4_g4_t2

0x4f14,	// (0x000659d0) list_medium_line_t4_g4_t3_ParamLimits

0x4f14,	// (0x000659d0) list_medium_line_t4_g4_t3

0x4d65,	// (0x00065821) list_medium_line_t4_g4_t4_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0006fe62) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0006fe62) list_medium_line_t4_g4_t

0x814a,	// (0x00068c06) chi_dic_find_pane_g1

0xa652,	// (0x0006b10e) main_tport_pane

0x514a,	// (0x00065c06) list_medium_line_plain_t1

0x5158,	// (0x00065c14) list_medium_line_t2_g2_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t2_g2_g1

0x5164,	// (0x00065c20) list_medium_line_t2_g2_g2_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00070515) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00070515) list_medium_line_t2_g2_g

0x5170,	// (0x00065c2c) list_medium_line_t2_g2_t1_ParamLimits

0x5170,	// (0x00065c2c) list_medium_line_t2_g2_t1

0x5187,	// (0x00065c43) list_medium_line_t2_g2_t2_ParamLimits

0x5187,	// (0x00065c43) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0007051a) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0007051a) list_medium_line_t2_g2_t

0x530c,	// (0x00065dc8) aid_sp_fs_list_icon_a_sm

0xd62f,	// (0x0006e0eb) aid_sp_fs_list_icon_d

0x389e,	// (0x0006435a) aid_sp_fs_text_primary

0x2257,	// (0x00062d13) aid_sp_fs_text_secondary

0x5314,	// (0x00065dd0) list_medium_line

0x5314,	// (0x00065dd0) list_medium_line_g2

0x5314,	// (0x00065dd0) list_medium_line_g3

0x5314,	// (0x00065dd0) list_medium_line_plain

0x5314,	// (0x00065dd0) list_medium_line_plain_t2

0x5314,	// (0x00065dd0) list_medium_line_plain_t3

0x5314,	// (0x00065dd0) list_medium_line_right_icon

0x5314,	// (0x00065dd0) list_medium_line_right_iconx2

0x5314,	// (0x00065dd0) list_medium_line_t2

0x5314,	// (0x00065dd0) list_medium_line_t2_g2

0x5314,	// (0x00065dd0) list_medium_line_t2_g3

0x5314,	// (0x00065dd0) list_medium_line_t2_right_icon

0x5314,	// (0x00065dd0) list_medium_line_t2_right_iconx2

0x5314,	// (0x00065dd0) list_medium_line_t3

0x5314,	// (0x00065dd0) list_medium_line_t3_g2

0x5314,	// (0x00065dd0) list_medium_line_t3_g3

0x5314,	// (0x00065dd0) list_medium_line_t3_right_iconx2

0x531d,	// (0x00065dd9) list_medium_line_t4_g4

0x5326,	// (0x00065de2) list_medium_line_x2

0x5326,	// (0x00065de2) list_medium_line_x2_t2_g2

0x5326,	// (0x00065de2) list_medium_line_x2_t2_g3

0x5326,	// (0x00065de2) list_medium_line_x2_t2_g4

0x5326,	// (0x00065de2) list_medium_line_x2_t3

0x5326,	// (0x00065de2) list_medium_line_x2_t3_g2

0x5326,	// (0x00065de2) list_medium_line_x2_t3_g3

0x5326,	// (0x00065de2) list_medium_line_x2_t3_g4

0x5326,	// (0x00065de2) list_medium_line_x2_t4_g2

0x5326,	// (0x00065de2) list_medium_line_x2_t4_g4

0x532f,	// (0x00065deb) list_medium_line_x3

0x532f,	// (0x00065deb) list_medium_line_x3_t4

0x532f,	// (0x00065deb) list_medium_line_x3_t4_g4

0x531d,	// (0x00065dd9) list_medium_line_x4_t4

0x531d,	// (0x00065dd9) list_medium_line_x4_t4_g7

0x531d,	// (0x00065dd9) list_medium_line_x4_t5

0x5338,	// (0x00065df4) list_single_fs_dyc_pane_ParamLimits

0x5338,	// (0x00065df4) list_single_fs_dyc_pane

0x4d1a,	// (0x000657d6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x4_t4_g7_g1

0x5370,	// (0x00065e2c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5370,	// (0x00065e2c) list_medium_line_x4_t4_g7_g2

0x537c,	// (0x00065e38) list_medium_line_x4_t4_g7_g3_ParamLimits

0x537c,	// (0x00065e38) list_medium_line_x4_t4_g7_g3

0x538b,	// (0x00065e47) list_medium_line_x4_t4_g7_g4_ParamLimits

0x538b,	// (0x00065e47) list_medium_line_x4_t4_g7_g4

0x5397,	// (0x00065e53) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5397,	// (0x00065e53) list_medium_line_x4_t4_g7_g5

0x53a6,	// (0x00065e62) list_medium_line_x4_t4_g7_g6_ParamLimits

0x53a6,	// (0x00065e62) list_medium_line_x4_t4_g7_g6

0x53b5,	// (0x00065e71) list_medium_line_x4_t4_g7_g7_ParamLimits

0x53b5,	// (0x00065e71) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc1c,	// (0x000706d8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc1c,	// (0x000706d8) list_medium_line_x4_t4_g7_g

0x53c1,	// (0x00065e7d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x53c1,	// (0x00065e7d) list_medium_line_x4_t4_g7_t1

0x53d6,	// (0x00065e92) list_medium_line_x4_t4_g7_t2_ParamLimits

0x53d6,	// (0x00065e92) list_medium_line_x4_t4_g7_t2

0x53eb,	// (0x00065ea7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x53eb,	// (0x00065ea7) list_medium_line_x4_t4_g7_t3

0x5400,	// (0x00065ebc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5400,	// (0x00065ebc) list_medium_line_x4_t4_g7_t4

0x5412,	// (0x00065ece) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5412,	// (0x00065ece) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc2b,	// (0x000706e7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc2b,	// (0x000706e7) list_medium_line_x4_t4_g7_t

0x5424,	// (0x00065ee0) list_single_dyc_row_pane_ParamLimits

0x5424,	// (0x00065ee0) list_single_dyc_row_pane

0xe2c3,	// (0x0006ed7f) call5_gesture_pane_ParamLimits

0xe2c3,	// (0x0006ed7f) call5_gesture_pane

0xe2f9,	// (0x0006edb5) call5_windows_pane_ParamLimits

0xe2f9,	// (0x0006edb5) call5_windows_pane

0xe371,	// (0x0006ee2d) call5_swipe_1_pane_cp_ParamLimits

0xe371,	// (0x0006ee2d) call5_swipe_1_pane_cp

0xe37d,	// (0x0006ee39) call5_swipe_2_pane_cp_ParamLimits

0xe37d,	// (0x0006ee39) call5_swipe_2_pane_cp

0x855f,	// (0x0006901b) call5_image_pane_cp

0xe389,	// (0x0006ee45) popup_call5_audio_first_window_cp_ParamLimits

0xe389,	// (0x0006ee45) popup_call5_audio_first_window_cp

0x2e2e,	// (0x000638ea) call5_swipe_1_pane_g1_cp_ParamLimits

0x2e2e,	// (0x000638ea) call5_swipe_1_pane_g1_cp

0x2e6e,	// (0x0006392a) call5_swipe_1_pane_g2_cp

0x2e47,	// (0x00063903) call5_swipe_1_pane_t1_cp_ParamLimits

0x2e47,	// (0x00063903) call5_swipe_1_pane_t1_cp

0x2e2e,	// (0x000638ea) call5_swipe_2_pane_g1_cp_ParamLimits

0x2e2e,	// (0x000638ea) call5_swipe_2_pane_g1_cp

0x2e76,	// (0x00063932) call5_swipe_2_pane_g2_cp

0x2e7e,	// (0x0006393a) call5_swipe_2_pane_t1_cp_ParamLimits

0x2e7e,	// (0x0006393a) call5_swipe_2_pane_t1_cp

0xa636,	// (0x0006b0f2) main_sp_fs_email_pane

0x2e93,	// (0x0006394f) main_sp_fs_listscroll_pane_te

0x54bb,	// (0x00065f77) popup_sp_fs_action_menu_pane_ParamLimits

0x54bb,	// (0x00065f77) popup_sp_fs_action_menu_pane

0x11e8,	// (0x00061ca4) bg_sp_fs_ctrlbar_pane_g1

0x2ee2,	// (0x0006399e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2eeb,	// (0x000639a7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2ef4,	// (0x000639b0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x11e8,	// (0x00061ca4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd14,	// (0x000707d0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xef97,	// (0x0006fa53) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xef97,	// (0x0006fa53) bg_sp_fs_ctrlbar_ddmenu_pane

0x2efd,	// (0x000639b9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2efd,	// (0x000639b9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2f09,	// (0x000639c5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2f09,	// (0x000639c5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd1d,	// (0x000707d9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd1d,	// (0x000707d9) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2f15,	// (0x000639d1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2f15,	// (0x000639d1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5501,	// (0x00065fbd) list_medium_line_t2_right_icon_g1

0x5509,	// (0x00065fc5) list_medium_line_t2_right_icon_t1

0x5519,	// (0x00065fd5) list_medium_line_t2_right_icon_t2

0x0001,

0xfd22,	// (0x000707de) list_medium_line_t2_right_icon_t

0xa628,	// (0x0006b0e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa628,	// (0x0006b0e4) bg_sp_fs_ctrlbar_pane

0xe3ee,	// (0x0006eeaa) main_sp_fs_ctrlbar_button_pane_cp01

0xe3f6,	// (0x0006eeb2) main_sp_fs_ctrlbar_ddmenu_pane

0x2f71,	// (0x00063a2d) main_sp_fs_ctrlbar_pane_g1

0x2f7d,	// (0x00063a39) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd27,	// (0x000707e3) main_sp_fs_ctrlbar_pane_g

0x2f89,	// (0x00063a45) main_sp_fs_ctrlbar_pane_t1

0x5527,	// (0x00065fe3) main_sp_fs_ctrlbar_pane

0x5543,	// (0x00065fff) main_sp_fs_listscroll_pane_te_cp01

0x5554,	// (0x00066010) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5554,	// (0x00066010) popup_sp_fs_action_menu_pane_cp01

0xa636,	// (0x0006b0f2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa636,	// (0x0006b0f2) bg_sp_fs_highlight_list_pane_cp01

0x556e,	// (0x0006602a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x556e,	// (0x0006602a) sp_fs_action_menu_list_gene_pane_g1

0x2fad,	// (0x00063a69) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2fad,	// (0x00063a69) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd2c,	// (0x000707e8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd2c,	// (0x000707e8) sp_fs_action_menu_list_gene_pane_g

0x557d,	// (0x00066039) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x557d,	// (0x00066039) sp_fs_action_menu_list_gene_pane_t1

0x5595,	// (0x00066051) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5595,	// (0x00066051) sp_fs_action_menu_list_gene_pane

0x2ff5,	// (0x00063ab1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2ff5,	// (0x00063ab1) popup_sp_fs_action_menu_bg_pane

0x55b8,	// (0x00066074) sp_fs_action_menu_list_pane_ParamLimits

0x55b8,	// (0x00066074) sp_fs_action_menu_list_pane

0x3027,	// (0x00063ae3) sp_fs_scroll_pane_cp01_ParamLimits

0x3027,	// (0x00063ae3) sp_fs_scroll_pane_cp01

0x55dc,	// (0x00066098) list_medium_line_plain_t2_t1

0x55ec,	// (0x000660a8) list_medium_line_plain_t2_t2

0x0001,

0xfd31,	// (0x000707ed) list_medium_line_plain_t2_t

0x55fa,	// (0x000660b6) list_medium_line_plain_t3_t1

0x560a,	// (0x000660c6) list_medium_line_plain_t3_t2

0x5618,	// (0x000660d4) list_medium_line_plain_t3_t3

0x0002,

0xfd36,	// (0x000707f2) list_medium_line_plain_t3_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t2_g2_g1

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0006fd69) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0006fd69) list_medium_line_x2_t2_g2_g

0x4ee9,	// (0x000659a5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4ee9,	// (0x000659a5) list_medium_line_x2_t2_g2_t1

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd3d,	// (0x000707f9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd3d,	// (0x000707f9) list_medium_line_x2_t2_g2_t

0x4d1a,	// (0x000657d6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t4_g2_g1

0x5626,	// (0x000660e2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5626,	// (0x000660e2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd42,	// (0x000707fe) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd42,	// (0x000707fe) list_medium_line_x2_t4_g2_g

0x5638,	// (0x000660f4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5638,	// (0x000660f4) list_medium_line_x2_t4_g2_t1

0x5652,	// (0x0006610e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5652,	// (0x0006610e) list_medium_line_x2_t4_g2_t2

0x5668,	// (0x00066124) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5668,	// (0x00066124) list_medium_line_x2_t4_g2_t3

0x4d65,	// (0x00065821) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd47,	// (0x00070803) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd47,	// (0x00070803) list_medium_line_x2_t4_g2_t

0x567d,	// (0x00066139) list_medium_line_t3_right_iconx2_g1

0x5501,	// (0x00065fbd) list_medium_line_t3_right_iconx2_g2

0x5685,	// (0x00066141) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd50,	// (0x0007080c) list_medium_line_t3_right_iconx2_g

0x568d,	// (0x00066149) list_medium_line_t3_right_iconx2_t1

0x569d,	// (0x00066159) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd57,	// (0x00070813) list_medium_line_t3_right_iconx2_t

0x4d1a,	// (0x000657d6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x3_t4_g4_g1

0x4d26,	// (0x000657e2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x3_t4_g4_g2

0x4dcc,	// (0x00065888) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4dcc,	// (0x00065888) list_medium_line_x3_t4_g4_g3

0x56ab,	// (0x00066167) list_medium_line_x3_t4_g4_g4_ParamLimits

0x56ab,	// (0x00066167) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5c,	// (0x00070818) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5c,	// (0x00070818) list_medium_line_x3_t4_g4_g

0x56b7,	// (0x00066173) list_medium_line_x3_t4_g4_t1_ParamLimits

0x56b7,	// (0x00066173) list_medium_line_x3_t4_g4_t1

0x56ce,	// (0x0006618a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x56ce,	// (0x0006618a) list_medium_line_x3_t4_g4_t2

0x56e3,	// (0x0006619f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x56e3,	// (0x0006619f) list_medium_line_x3_t4_g4_t3

0x56f8,	// (0x000661b4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x56f8,	// (0x000661b4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd65,	// (0x00070821) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd65,	// (0x00070821) list_medium_line_x3_t4_g4_t

0x5715,	// (0x000661d1) list_single_dyc_row_text_pane_t1_ParamLimits

0x5715,	// (0x000661d1) list_single_dyc_row_text_pane_t1

0x5758,	// (0x00066214) list_single_dyc_row_text_pane_t2_ParamLimits

0x5758,	// (0x00066214) list_single_dyc_row_text_pane_t2

0x57b2,	// (0x0006626e) list_single_dyc_row_text_pane_t3_ParamLimits

0x57b2,	// (0x0006626e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd6e,	// (0x0007082a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd6e,	// (0x0007082a) list_single_dyc_row_text_pane_t

0x57c4,	// (0x00066280) list_single_dyc_row_pane_g1_ParamLimits

0x57c4,	// (0x00066280) list_single_dyc_row_pane_g1

0x57d0,	// (0x0006628c) list_single_dyc_row_pane_g2_ParamLimits

0x57d0,	// (0x0006628c) list_single_dyc_row_pane_g2

0x57dc,	// (0x00066298) list_single_dyc_row_pane_g3_ParamLimits

0x57dc,	// (0x00066298) list_single_dyc_row_pane_g3

0x57e8,	// (0x000662a4) list_single_dyc_row_pane_g4_ParamLimits

0x57e8,	// (0x000662a4) list_single_dyc_row_pane_g4

0x0003,

0xfd75,	// (0x00070831) list_single_dyc_row_pane_g_ParamLimits

0xfd75,	// (0x00070831) list_single_dyc_row_pane_g

0x57f4,	// (0x000662b0) list_single_dyc_row_text_pane_ParamLimits

0x57f4,	// (0x000662b0) list_single_dyc_row_text_pane

0x025e,	// (0x00060d1a) bg_sp_fs_scroll_pane

0x3106,	// (0x00063bc2) thumb_sp_fs_scroll_pane

0x5158,	// (0x00065c14) list_medium_line_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_g1

0x5813,	// (0x000662cf) list_medium_line_t1_ParamLimits

0x5813,	// (0x000662cf) list_medium_line_t1

0x4d1a,	// (0x000657d6) list_medium_line_x2_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_g1

0x4d26,	// (0x000657e2) list_medium_line_x2_g2_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_g2

0x0001,

0xfd7e,	// (0x0007083a) list_medium_line_x2_g_ParamLimits

0xfd7e,	// (0x0007083a) list_medium_line_x2_g

0x5828,	// (0x000662e4) list_medium_line_x2_t1_ParamLimits

0x5828,	// (0x000662e4) list_medium_line_x2_t1

0x4d1a,	// (0x000657d6) list_medium_line_x3_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x3_g1

0x4d26,	// (0x000657e2) list_medium_line_x3_g2_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x3_g2

0x0001,

0xfd7e,	// (0x0007083a) list_medium_line_x3_g_ParamLimits

0xfd7e,	// (0x0007083a) list_medium_line_x3_g

0x5828,	// (0x000662e4) list_medium_line_x3_t1_ParamLimits

0x5828,	// (0x000662e4) list_medium_line_x3_t1

0x313a,	// (0x00063bf6) thumb_sp_fs_scroll_pane_g1

0x3143,	// (0x00063bff) thumb_sp_fs_scroll_pane_g2

0x314c,	// (0x00063c08) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0007083f) thumb_sp_fs_scroll_pane_g

0x313a,	// (0x00063bf6) bg_sp_fs_scroll_pane_g1

0x3143,	// (0x00063bff) bg_sp_fs_scroll_pane_g2

0x314c,	// (0x00063c08) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0007083f) bg_sp_fs_scroll_pane_g

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4d1a,	// (0x000657d6) list_medium_line_x2_t3_g4_g1

0x4dc0,	// (0x0006587c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4dc0,	// (0x0006587c) list_medium_line_x2_t3_g4_g2

0x4d26,	// (0x000657e2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4d26,	// (0x000657e2) list_medium_line_x2_t3_g4_g3

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4d32,	// (0x000657ee) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0006fde5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0006fde5) list_medium_line_x2_t3_g4_g

0x583e,	// (0x000662fa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x583e,	// (0x000662fa) list_medium_line_x2_t3_g4_t1

0x5854,	// (0x00066310) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5854,	// (0x00066310) list_medium_line_x2_t3_g4_t2

0x4d65,	// (0x00065821) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4d65,	// (0x00065821) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8a,	// (0x00070846) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8a,	// (0x00070846) list_medium_line_x2_t3_g4_t

0x5158,	// (0x00065c14) list_medium_line_g2_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_g2_g1

0x5164,	// (0x00065c20) list_medium_line_g2_g2_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00070515) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00070515) list_medium_line_g2_g

0x586d,	// (0x00066329) list_medium_line_g2_t1_ParamLimits

0x586d,	// (0x00066329) list_medium_line_g2_t1

0x5158,	// (0x00065c14) list_medium_line_t3_g2_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t3_g2_g1

0x5164,	// (0x00065c20) list_medium_line_t3_g2_g2_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00070515) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00070515) list_medium_line_t3_g2_g

0x5882,	// (0x0006633e) list_medium_line_t3_g2_t1_ParamLimits

0x5882,	// (0x0006633e) list_medium_line_t3_g2_t1

0x589c,	// (0x00066358) list_medium_line_t3_g2_t2_ParamLimits

0x589c,	// (0x00066358) list_medium_line_t3_g2_t2

0x58b2,	// (0x0006636e) list_medium_line_t3_g2_t3_ParamLimits

0x58b2,	// (0x0006636e) list_medium_line_t3_g2_t3

0x0002,

0xfd91,	// (0x0007084d) list_medium_line_t3_g2_t_ParamLimits

0xfd91,	// (0x0007084d) list_medium_line_t3_g2_t

0x5501,	// (0x00065fbd) list_medium_line_right_icon_g1

0x58c9,	// (0x00066385) list_medium_line_right_icon_t1

0x5158,	// (0x00065c14) list_medium_line_t2_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t2_g1

0x58d7,	// (0x00066393) list_medium_line_t2_t1_ParamLimits

0x58d7,	// (0x00066393) list_medium_line_t2_t1

0x58f1,	// (0x000663ad) list_medium_line_t2_t2_ParamLimits

0x58f1,	// (0x000663ad) list_medium_line_t2_t2

0x0001,

0xfd98,	// (0x00070854) list_medium_line_t2_t_ParamLimits

0xfd98,	// (0x00070854) list_medium_line_t2_t

0x5158,	// (0x00065c14) list_medium_line_t3_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t3_g1

0x5906,	// (0x000663c2) list_medium_line_t3_t1_ParamLimits

0x5906,	// (0x000663c2) list_medium_line_t3_t1

0x591d,	// (0x000663d9) list_medium_line_t3_t2_ParamLimits

0x591d,	// (0x000663d9) list_medium_line_t3_t2

0x5932,	// (0x000663ee) list_medium_line_t3_t3_ParamLimits

0x5932,	// (0x000663ee) list_medium_line_t3_t3

0x0002,

0xfd9d,	// (0x00070859) list_medium_line_t3_t_ParamLimits

0xfd9d,	// (0x00070859) list_medium_line_t3_t

0x5158,	// (0x00065c14) list_medium_line_g3_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_g3_g1

0x5944,	// (0x00066400) list_medium_line_g3_g2_ParamLimits

0x5944,	// (0x00066400) list_medium_line_g3_g2

0x5164,	// (0x00065c20) list_medium_line_g3_g3_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_g3_g3

0x0002,

0xfda4,	// (0x00070860) list_medium_line_g3_g_ParamLimits

0xfda4,	// (0x00070860) list_medium_line_g3_g

0x5950,	// (0x0006640c) list_medium_line_g3_t1_ParamLimits

0x5950,	// (0x0006640c) list_medium_line_g3_t1

0x5158,	// (0x00065c14) list_medium_line_t2_g3_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t2_g3_g1

0x5944,	// (0x00066400) list_medium_line_t2_g3_g2_ParamLimits

0x5944,	// (0x00066400) list_medium_line_t2_g3_g2

0x5164,	// (0x00065c20) list_medium_line_t2_g3_g3_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_t2_g3_g3

0x0002,

0xfda4,	// (0x00070860) list_medium_line_t2_g3_g_ParamLimits

0xfda4,	// (0x00070860) list_medium_line_t2_g3_g

0x5965,	// (0x00066421) list_medium_line_t2_g3_t1_ParamLimits

0x5965,	// (0x00066421) list_medium_line_t2_g3_t1

0x597c,	// (0x00066438) list_medium_line_t2_g3_t2_ParamLimits

0x597c,	// (0x00066438) list_medium_line_t2_g3_t2

0x0001,

0xfdab,	// (0x00070867) list_medium_line_t2_g3_t_ParamLimits

0xfdab,	// (0x00070867) list_medium_line_t2_g3_t

0x5158,	// (0x00065c14) list_medium_line_t3_g3_g1_ParamLimits

0x5158,	// (0x00065c14) list_medium_line_t3_g3_g1

0x5944,	// (0x00066400) list_medium_line_t3_g3_g2_ParamLimits

0x5944,	// (0x00066400) list_medium_line_t3_g3_g2

0x5164,	// (0x00065c20) list_medium_line_t3_g3_g3_ParamLimits

0x5164,	// (0x00065c20) list_medium_line_t3_g3_g3

0x0002,

0xfda4,	// (0x00070860) list_medium_line_t3_g3_g_ParamLimits

0xfda4,	// (0x00070860) list_medium_line_t3_g3_g

0x5991,	// (0x0006644d) list_medium_line_t3_g3_t1_ParamLimits

0x5991,	// (0x0006644d) list_medium_line_t3_g3_t1

0x59a5,	// (0x00066461) list_medium_line_t3_g3_t2_ParamLimits

0x59a5,	// (0x00066461) list_medium_line_t3_g3_t2

0x59b7,	// (0x00066473) list_medium_line_t3_g3_t3_ParamLimits

0x59b7,	// (0x00066473) list_medium_line_t3_g3_t3

0x0002,

0xfdb0,	// (0x0007086c) list_medium_line_t3_g3_t_ParamLimits

0xfdb0,	// (0x0007086c) list_medium_line_t3_g3_t

0x567d,	// (0x00066139) list_medium_line_right_iconx2_g1

0x5501,	// (0x00065fbd) list_medium_line_right_iconx2_g2

0x0001,

0xfdb7,	// (0x00070873) list_medium_line_right_iconx2_g

0x59cb,	// (0x00066487) list_medium_line_right_iconx2_t1

0x567d,	// (0x00066139) list_medium_line_t2_right_iconx2_g1

0x5501,	// (0x00065fbd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb7,	// (0x00070873) list_medium_line_t2_right_iconx2_g

0x59d9,	// (0x00066495) list_medium_line_t2_right_iconx2_t1

0x59e9,	// (0x000664a5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbc,	// (0x00070878) list_medium_line_t2_right_iconx2_t

0x59f7,	// (0x000664b3) list_medium_line_x4_t4_t1

0x5a05,	// (0x000664c1) list_medium_line_x4_t4_t2

0x5a15,	// (0x000664d1) list_medium_line_x4_t4_t3

0x5a25,	// (0x000664e1) list_medium_line_x4_t4_t4

0x0003,

0xfdc1,	// (0x0007087d) list_medium_line_x4_t4_t

0xe429,	// (0x0006eee5) tport_appsw_pane_ParamLimits

0xe429,	// (0x0006eee5) tport_appsw_pane

0xe437,	// (0x0006eef3) tport_contact_pane_ParamLimits

0xe437,	// (0x0006eef3) tport_contact_pane

0xe445,	// (0x0006ef01) tport_listscroll_pane_ParamLimits

0xe445,	// (0x0006ef01) tport_listscroll_pane

0xe453,	// (0x0006ef0f) cell_tport_appsw_pane_ParamLimits

0xe453,	// (0x0006ef0f) cell_tport_appsw_pane

0x14f1,	// (0x00061fad) tport_appsw_pane_g1_ParamLimits

0x14f1,	// (0x00061fad) tport_appsw_pane_g1

0x31b5,	// (0x00063c71) tport_contact_pane_g1

0x31be,	// (0x00063c7a) tport_contact_pane_t1

0x31cc,	// (0x00063c88) tport_contact_pane_t2

0x0001,

0xfdca,	// (0x00070886) tport_contact_pane_t

0x31da,	// (0x00063c96) list_tport_pane

0x31e3,	// (0x00063c9f) scroll_pane_cp_030

0xe468,	// (0x0006ef24) cell_tport_appsw_pane_g1

0x31ec,	// (0x00063ca8) cell_tport_appsw_pane_t1

0x025e,	// (0x00060d1a) grid_highlight_pane_cp019

0xe480,	// (0x0006ef3c) list_tport_double_graphic_pane_ParamLimits

0xe480,	// (0x0006ef3c) list_tport_double_graphic_pane

0xa636,	// (0x0006b0f2) list_highlight_pane_cp023_ParamLimits

0xa636,	// (0x0006b0f2) list_highlight_pane_cp023

0xe491,	// (0x0006ef4d) list_tport_double_graphic_pane_g1_ParamLimits

0xe491,	// (0x0006ef4d) list_tport_double_graphic_pane_g1

0xe49e,	// (0x0006ef5a) list_tport_double_graphic_pane_t1_ParamLimits

0xe49e,	// (0x0006ef5a) list_tport_double_graphic_pane_t1

0xe4b3,	// (0x0006ef6f) list_tport_double_graphic_pane_t2_ParamLimits

0xe4b3,	// (0x0006ef6f) list_tport_double_graphic_pane_t2

0x0001,

0xfdd6,	// (0x00070892) list_tport_double_graphic_pane_t_ParamLimits

0xfdd6,	// (0x00070892) list_tport_double_graphic_pane_t

0x025e,	// (0x00060d1a) main_cale_note_pane

0xc990,	// (0x0006d44c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc990,	// (0x0006d44c) cell_vitu2_function_top_wide_pane_cp01

0xe012,	// (0x0006eace) wait_bar_pane_cp05_ParamLimits

0x025e,	// (0x00060d1a) listscroll_cmail_pane

0x3202,	// (0x00063cbe) list_cmail_pane

0xe4cf,	// (0x0006ef8b) list_cmail_body_pane

0xe4e4,	// (0x0006efa0) list_single_cmail_header_caption_pane

0xe4fe,	// (0x0006efba) list_single_cmail_header_detail_pane_ParamLimits

0xe4fe,	// (0x0006efba) list_single_cmail_header_detail_pane

0xe52d,	// (0x0006efe9) list_single_cmail_header_caption_pane_t1

0x5a35,	// (0x000664f1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5a35,	// (0x000664f1) list_single_cmail_header_detail_pane_g1

0xe53d,	// (0x0006eff9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe53d,	// (0x0006eff9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddb,	// (0x00070897) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddb,	// (0x00070897) list_single_cmail_header_detail_pane_g

0x5a4d,	// (0x00066509) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5a4d,	// (0x00066509) list_single_cmail_header_detail_pane_t1

0x5ab1,	// (0x0006656d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5ab1,	// (0x0006656d) list_single_cmail_header_editor_pane_bg

0x2aea,	// (0x000635a6) list_cmail_body_pane_g1

0x328b,	// (0x00063d47) list_cmail_body_pane_t1

0x1cbc,	// (0x00062778) list_single_cmail_header_editor_pane_bg_g1

0x0f1e,	// (0x000619da) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1ccc,	// (0x00062788) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1cc4,	// (0x00062780) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1f0d,	// (0x000629c9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1cec,	// (0x000627a8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1cdc,	// (0x00062798) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1ce4,	// (0x000627a0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0efe,	// (0x000619ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe549,	// (0x0006f005) calenote_gesture_pane_ParamLimits

0xe549,	// (0x0006f005) calenote_gesture_pane

0xe563,	// (0x0006f01f) calenote_window_pane_ParamLimits

0xe563,	// (0x0006f01f) calenote_window_pane

0x3299,	// (0x00063d55) popup_note_window_cp01

0xe57b,	// (0x0006f037) calenote_swipe_1_pane_ParamLimits

0xe57b,	// (0x0006f037) calenote_swipe_1_pane

0xe37d,	// (0x0006ee39) calenote_swipe_2_pane_ParamLimits

0xe37d,	// (0x0006ee39) calenote_swipe_2_pane

0x2e2e,	// (0x000638ea) calenote_swipe_1_pane_g1_ParamLimits

0x2e2e,	// (0x000638ea) calenote_swipe_1_pane_g1

0x2e3b,	// (0x000638f7) calenote_swipe_1_pane_g2_ParamLimits

0x2e3b,	// (0x000638f7) calenote_swipe_1_pane_g2

0x0001,

0xfd0a,	// (0x000707c6) calenote_swipe_1_pane_g_ParamLimits

0xfd0a,	// (0x000707c6) calenote_swipe_1_pane_g

0x32ab,	// (0x00063d67) calenote_swipe_1_pane_t1_ParamLimits

0x32ab,	// (0x00063d67) calenote_swipe_1_pane_t1

0x2e2e,	// (0x000638ea) calenote_swipe_2_pane_g1_ParamLimits

0x2e2e,	// (0x000638ea) calenote_swipe_2_pane_g1

0x32ca,	// (0x00063d86) calenote_swipe_2_pane_g2_ParamLimits

0x32ca,	// (0x00063d86) calenote_swipe_2_pane_g2

0x0001,

0xfde7,	// (0x000708a3) calenote_swipe_2_pane_g_ParamLimits

0xfde7,	// (0x000708a3) calenote_swipe_2_pane_g

0x32d6,	// (0x00063d92) calenote_swipe_2_pane_t1_ParamLimits

0x32d6,	// (0x00063d92) calenote_swipe_2_pane_t1

0x025e,	// (0x00060d1a) main_mup_navstr_pane

0xb788,	// (0x0006c244) main_mup3_pane_t7_ParamLimits

0xb788,	// (0x0006c244) main_mup3_pane_t7

0xc163,	// (0x0006cc1f) main_mp4_pane_g6_ParamLimits

0xc163,	// (0x0006cc1f) main_mp4_pane_g6

0xc4c5,	// (0x0006cf81) main_image3_pane_t4_ParamLimits

0xc4c5,	// (0x0006cf81) main_image3_pane_t4

0xe58e,	// (0x0006f04a) popup_navstr_preview_pane_ParamLimits

0xe58e,	// (0x0006f04a) popup_navstr_preview_pane

0xe59a,	// (0x0006f056) scroll_navstr_pane_ParamLimits

0xe59a,	// (0x0006f056) scroll_navstr_pane

0x025e,	// (0x00060d1a) bg_popup_preview_window_pane_cp04

0x32fd,	// (0x00063db9) popup_navstr_preview_pane_t1

0xe5a6,	// (0x0006f062) scroll_navstr_pane_g1_ParamLimits

0xe5a6,	// (0x0006f062) scroll_navstr_pane_g1

0xe5b3,	// (0x0006f06f) scroll_navstr_pane_t1_ParamLimits

0xe5b3,	// (0x0006f06f) scroll_navstr_pane_t1

0x32a2,	// (0x00063d5e) bg_button_pane_cp014

0x32a2,	// (0x00063d5e) bg_button_pane_cp030

0x5461,	// (0x00065f1d) list_double_fisheye_pane_g4_ParamLimits

0x5461,	// (0x00065f1d) list_double_fisheye_pane_g4

0x546d,	// (0x00065f29) list_double_fisheye_pane_g5_ParamLimits

0x546d,	// (0x00065f29) list_double_fisheye_pane_g5

0x320a,	// (0x00063cc6) sp_fs_scroll_pane_cp03

0x2f71,	// (0x00063a2d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2f7d,	// (0x00063a39) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd27,	// (0x000707e3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2f89,	// (0x00063a45) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe4c5,	// (0x0006ef81) sp_fs_scroll_pane_cp02

0x0bb8,	// (0x00061674) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0bb8,	// (0x00061674) popup_sp_fs_calendar_preview_list_single_pane

0x025e,	// (0x00060d1a) main_cam6_pano_pane

0xa636,	// (0x0006b0f2) main_mup3_pane_ParamLimits

0x025e,	// (0x00060d1a) main_phacti_pane

0xdee3,	// (0x0006e99f) bg_button_pane_cp11

0xdefb,	// (0x0006e9b7) main_mobtv_info_pane_g2_ParamLimits

0xdefb,	// (0x0006e9b7) main_mobtv_info_pane_g2

0x0001,

0xfc87,	// (0x00070743) main_mobtv_info_pane_g_ParamLimits

0xfc87,	// (0x00070743) main_mobtv_info_pane_g

0xe0af,	// (0x0006eb6b) sc_clock_pane_t5_ParamLimits

0xe0af,	// (0x0006eb6b) sc_clock_pane_t5

0xe154,	// (0x0006ec10) main_radioblah_pane_g1_ParamLimits

0x2d7a,	// (0x00063836) main_radioblah_pane_t3_ParamLimits

0x2d7a,	// (0x00063836) main_radioblah_pane_t3

0x2d92,	// (0x0006384e) main_radioblah_pane_t4_ParamLimits

0x2d92,	// (0x0006384e) main_radioblah_pane_t4

0xe172,	// (0x0006ec2e) main_radioblah_text_pane_ParamLimits

0xe172,	// (0x0006ec2e) main_radioblah_text_pane

0xe17f,	// (0x0006ec3b) main_radioblah_info_pane_g1_ParamLimits

0xe218,	// (0x0006ecd4) main_radioblah_info_pane_t4_ParamLimits

0xe218,	// (0x0006ecd4) main_radioblah_info_pane_t4

0xa636,	// (0x0006b0f2) main_sp_fs_calendar_pane

0xe5c5,	// (0x0006f081) main_phacti_pane_g1

0xe5cd,	// (0x0006f089) phacti_note_pane_ParamLimits

0xe5cd,	// (0x0006f089) phacti_note_pane

0x3314,	// (0x00063dd0) phacti_term_pane_ParamLimits

0x3314,	// (0x00063dd0) phacti_term_pane

0x3329,	// (0x00063de5) phacti_note_pane_t1_ParamLimits

0x3329,	// (0x00063de5) phacti_note_pane_t1

0x5ac3,	// (0x0006657f) phacti_term_pane_g1

0x5acb,	// (0x00066587) phacti_term_pane_t1_ParamLimits

0x5acb,	// (0x00066587) phacti_term_pane_t1

0x3372,	// (0x00063e2e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x337a,	// (0x00063e36) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf1,	// (0x000708ad) popup_sp_fs_calendar_preview_list_single_pane_g

0x3382,	// (0x00063e3e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3382,	// (0x00063e3e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3398,	// (0x00063e54) aid_popup_sp_fs_bg_corner_pane

0x11e8,	// (0x00061ca4) popup_sp_fs_calendar_preview_bg_pane_g1

0x025e,	// (0x00060d1a) popup_sp_fs_calendar_preview_bg_pane

0x33a0,	// (0x00063e5c) popup_sp_fs_calendar_preview_list_pane

0xa636,	// (0x0006b0f2) bg_main_sp_fs_cale_pane_ParamLimits

0xa636,	// (0x0006b0f2) bg_main_sp_fs_cale_pane

0x5af5,	// (0x000665b1) listscroll_cale_mrui_pane_ParamLimits

0x5af5,	// (0x000665b1) listscroll_cale_mrui_pane

0x5b09,	// (0x000665c5) listscroll_sp_fs_schedule_track_pane

0x5b12,	// (0x000665ce) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5b12,	// (0x000665ce) main_sp_fs_ctrlbar_pane_cp01

0x33d6,	// (0x00063e92) main_sp_fs_ribbon_pane

0x33de,	// (0x00063e9a) popup_sp_fs_cale_preview_window

0xe60c,	// (0x0006f0c8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe60c,	// (0x0006f0c8) list_single_sp_fs_schedule_track_pane

0x5f67,	// (0x00066a23) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x5f67,	// (0x00066a23) bg_sp_fs_highlight_list_pane_cp03

0xe61e,	// (0x0006f0da) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe61e,	// (0x0006f0da) list_single_sp_fs_schedule_track_pane_g1

0xe62a,	// (0x0006f0e6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe62a,	// (0x0006f0e6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf6,	// (0x000708b2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf6,	// (0x000708b2) list_single_sp_fs_schedule_track_pane_g

0xe636,	// (0x0006f0f2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe636,	// (0x0006f0f2) list_single_sp_fs_schedule_track_pane_t1

0xe654,	// (0x0006f110) sp_fs_schedule_track_pane_ParamLimits

0xe654,	// (0x0006f110) sp_fs_schedule_track_pane

0x33f0,	// (0x00063eac) sp_fs_schedule_track_pane_g1

0x33f8,	// (0x00063eb4) sp_fs_schedule_track_pane_g2

0x3400,	// (0x00063ebc) sp_fs_schedule_track_pane_g3

0x3408,	// (0x00063ec4) sp_fs_schedule_track_pane_g4

0x3410,	// (0x00063ecc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfb,	// (0x000708b7) sp_fs_schedule_track_pane_g

0x1cbc,	// (0x00062778) bg_sp_fs_schedule_viewer_highlight_g1

0x0f1e,	// (0x000619da) bg_sp_fs_schedule_viewer_highlight_g2

0x1cc4,	// (0x00062780) bg_sp_fs_schedule_viewer_highlight_g3

0x1ccc,	// (0x00062788) bg_sp_fs_schedule_viewer_highlight_g4

0x1f0d,	// (0x000629c9) bg_sp_fs_schedule_viewer_highlight_g5

0x1cdc,	// (0x00062798) bg_sp_fs_schedule_viewer_highlight_g6

0x1ce4,	// (0x000627a0) bg_sp_fs_schedule_viewer_highlight_g7

0x1cec,	// (0x000627a8) bg_sp_fs_schedule_viewer_highlight_g8

0x0efe,	// (0x000619ba) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe06,	// (0x000708c2) bg_sp_fs_schedule_viewer_highlight_g

0x025e,	// (0x00060d1a) bg_main_sp_fs_ribbon_pane

0xe666,	// (0x0006f122) main_sp_fs_ribbon_pane_g1

0x3418,	// (0x00063ed4) main_sp_fs_ribbon_pane_t1

0xe66f,	// (0x0006f12b) main_sp_fs_ribbon_pane_t2

0x3427,	// (0x00063ee3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe19,	// (0x000708d5) main_sp_fs_ribbon_pane_t

0x3436,	// (0x00063ef2) main_sp_fs_ribbon_scheduler_pane

0x343e,	// (0x00063efa) bg_main_sp_fs_ribbon_pane_g1

0x3447,	// (0x00063f03) bg_main_sp_fs_ribbon_pane_g2

0x3450,	// (0x00063f0c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe20,	// (0x000708dc) bg_main_sp_fs_ribbon_pane_g

0x3458,	// (0x00063f14) main_sp_fs_ribbon_scheduler_pane_g1

0x3461,	// (0x00063f1d) main_sp_fs_ribbon_scheduler_pane_g2

0x346a,	// (0x00063f26) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe27,	// (0x000708e3) main_sp_fs_ribbon_scheduler_pane_g

0x3473,	// (0x00063f2f) list_cale_mrui_pane

0xe67e,	// (0x0006f13a) sp_fs_scroll_pane_cp07_ParamLimits

0xe67e,	// (0x0006f13a) sp_fs_scroll_pane_cp07

0xe694,	// (0x0006f150) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe694,	// (0x0006f150) bg_sp_fs_schedule_viewer_highlight

0x347c,	// (0x00063f38) list_single_sp_fs_schedule_track_pane_cp01

0x3484,	// (0x00063f40) list_sp_fs_schedule_track_pane

0x348c,	// (0x00063f48) sp_fs_scroll_pane_cp06_ParamLimits

0x348c,	// (0x00063f48) sp_fs_scroll_pane_cp06

0x11e8,	// (0x00061ca4) bgmain_sp_fs_calendar_pane_g1

0x5b23,	// (0x000665df) list_single_cale_mrui_pane_ParamLimits

0x5b23,	// (0x000665df) list_single_cale_mrui_pane

0x5b47,	// (0x00066603) list_single_cale_mrui_row_pane_ParamLimits

0x5b47,	// (0x00066603) list_single_cale_mrui_row_pane

0x5b54,	// (0x00066610) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5b54,	// (0x00066610) list_single_cale_mrui_row_pane_g1

0x5b8c,	// (0x00066648) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5b8c,	// (0x00066648) list_single_cale_mrui_row_pane_t1

0x5b9e,	// (0x0006665a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5b9e,	// (0x0006665a) list_single_cale_mrui_row_pane_t2

0x5c04,	// (0x000666c0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5c04,	// (0x000666c0) list_single_cale_mrui_row_pane_t3

0x5c33,	// (0x000666ef) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5c33,	// (0x000666ef) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe33,	// (0x000708ef) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe33,	// (0x000708ef) list_single_cale_mrui_row_pane_t

0x5c62,	// (0x0006671e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5c62,	// (0x0006671e) list_single_cmail_header_editor_pane_bg_cp01

0x5c84,	// (0x00066740) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5c84,	// (0x00066740) list_single_cmail_header_editor_pane_bg_cp02

0xe6a1,	// (0x0006f15d) main_radioblah_text_pane_t1_ParamLimits

0xe6a1,	// (0x0006f15d) main_radioblah_text_pane_t1

0x3553,	// (0x0006400f) cam6_indi_pane_cp01

0x355b,	// (0x00064017) cam6_mode_pane_cp01

0x3563,	// (0x0006401f) cam6_pano_pane

0x356c,	// (0x00064028) cam6_zoom_pane_cp01

0x3576,	// (0x00064032) cam6_pano_image_pane

0x357f,	// (0x0006403b) cam6_pano_pane_g1

0x2aea,	// (0x000635a6) cam6_pano_pane_g2

0x3588,	// (0x00064044) cam6_pano_pane_g3

0x3591,	// (0x0006404d) cam6_pano_pane_g4

0x17c8,	// (0x00062284) cam6_pano_pane_g5

0x359a,	// (0x00064056) cam6_pano_pane_g6

0x35a2,	// (0x0006405e) cam6_pano_pane_g7

0x35aa,	// (0x00064066) cam6_pano_pane_g8

0x35b3,	// (0x0006406f) cam6_pano_pane_g9

0x0008,

0xfe3c,	// (0x000708f8) cam6_pano_pane_g

0x025e,	// (0x00060d1a) main_browser_tag_pane

0x32f5,	// (0x00063db1) grid_navstr_albumart_pane

0x35be,	// (0x0006407a) cell_navstr_albumart_pane_ParamLimits

0x35be,	// (0x0006407a) cell_navstr_albumart_pane

0x35da,	// (0x00064096) cell_navstr_albumart_pane_g1

0xa1ef,	// (0x0006acab) cell_navstr_albumart_pane_g2

0xa1ff,	// (0x0006acbb) cell_navstr_albumart_pane_g3

0xa1f7,	// (0x0006acb3) cell_navstr_albumart_pane_g4

0x0003,

0xfe4f,	// (0x0007090b) cell_navstr_albumart_pane_g

0xe6bc,	// (0x0006f178) bt_list_pane_ParamLimits

0xe6bc,	// (0x0006f178) bt_list_pane

0xe6d5,	// (0x0006f191) bt_list_pane_t1

0xe6e4,	// (0x0006f1a0) bt_list_pane_t2

0x0001,

0xfe58,	// (0x00070914) bt_list_pane_t

0x025e,	// (0x00060d1a) main_cale_prevew_pane

0xe6f3,	// (0x0006f1af) popup_cale_preview_window_ParamLimits

0xe6f3,	// (0x0006f1af) popup_cale_preview_window

0xa636,	// (0x0006b0f2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa636,	// (0x0006b0f2) bg_popup_preview_window_pane_cp05

0x35e2,	// (0x0006409e) list_cale_preview_pane_ParamLimits

0x35e2,	// (0x0006409e) list_cale_preview_pane

0xe70e,	// (0x0006f1ca) list_double_cale_preview_pane_ParamLimits

0xe70e,	// (0x0006f1ca) list_double_cale_preview_pane

0xe722,	// (0x0006f1de) list_single_cale_preview_pane_ParamLimits

0xe722,	// (0x0006f1de) list_single_cale_preview_pane

0xe73a,	// (0x0006f1f6) list_single_cale_preview_pane_g1

0xe742,	// (0x0006f1fe) list_single_cale_preview_pane_t1_ParamLimits

0xe742,	// (0x0006f1fe) list_single_cale_preview_pane_t1

0xe757,	// (0x0006f213) list_double_cale_preview_pane_g1

0xe75f,	// (0x0006f21b) list_double_cale_preview_pane_t1_ParamLimits

0xe75f,	// (0x0006f21b) list_double_cale_preview_pane_t1

0xe774,	// (0x0006f230) list_double_cale_preview_pane_t2_ParamLimits

0xe774,	// (0x0006f230) list_double_cale_preview_pane_t2

0x0001,

0xfe5d,	// (0x00070919) list_double_cale_preview_pane_t_ParamLimits

0xfe5d,	// (0x00070919) list_double_cale_preview_pane_t

0x025e,	// (0x00060d1a) main_ezdial_pane

0xa636,	// (0x0006b0f2) main_sp_fs_email_pane_ParamLimits

0xe397,	// (0x0006ee53) cmail_ddmenu_btn01_pane_ParamLimits

0xe397,	// (0x0006ee53) cmail_ddmenu_btn01_pane

0xe3b4,	// (0x0006ee70) cmail_ddmenu_btn02_pane_ParamLimits

0xe3b4,	// (0x0006ee70) cmail_ddmenu_btn02_pane

0xe3d2,	// (0x0006ee8e) cmail_ddmenu_btn03_pane_ParamLimits

0xe3d2,	// (0x0006ee8e) cmail_ddmenu_btn03_pane

0x5527,	// (0x00065fe3) main_sp_fs_ctrlbar_pane_ParamLimits

0x5543,	// (0x00065fff) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe4cf,	// (0x0006ef8b) list_cmail_body_pane_ParamLimits

0x3219,	// (0x00063cd5) bg_button_pane_cp12

0x322e,	// (0x00063cea) list_single_cmail_header_detail_pane_g3_ParamLimits

0x322e,	// (0x00063cea) list_single_cmail_header_detail_pane_g3

0x5a8b,	// (0x00066547) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5a8b,	// (0x00066547) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde2,	// (0x0007089e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde2,	// (0x0007089e) list_single_cmail_header_detail_pane_t

0x5ae0,	// (0x0006659c) phacti_term_pane_t2_ParamLimits

0x5ae0,	// (0x0006659c) phacti_term_pane_t2

0x0001,

0xfdec,	// (0x000708a8) phacti_term_pane_t_ParamLimits

0xfdec,	// (0x000708a8) phacti_term_pane_t

0x35ee,	// (0x000640aa) aid_size_list_single_double

0xe78c,	// (0x0006f248) popup_ezdial_listscroll_window

0xe7ac,	// (0x0006f268) popup_number_entry_window_cp01

0x855f,	// (0x0006901b) bg_popup_call_pane_cp09

0x35fa,	// (0x000640b6) ezdial_list_pane

0x3602,	// (0x000640be) scroll_pane_cp23

0xef97,	// (0x0006fa53) bg_button_pane_cp028_ParamLimits

0xef97,	// (0x0006fa53) bg_button_pane_cp028

0xe7ba,	// (0x0006f276) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe7ba,	// (0x0006f276) cmail_ddmenu_btn01_pane_g1

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe62,	// (0x0007091e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe62,	// (0x0007091e) cmail_ddmenu_btn01_pane_g

0x360a,	// (0x000640c6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x360a,	// (0x000640c6) cmail_ddmenu_btn01_pane_t1

0xa628,	// (0x0006b0e4) bg_button_pane_cp029_ParamLimits

0xa628,	// (0x0006b0e4) bg_button_pane_cp029

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn02_pane_g1

0xe7e2,	// (0x0006f29e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe7e2,	// (0x0006f29e) cmail_ddmenu_btn02_pane_t1

0x5f67,	// (0x00066a23) bg_button_pane_cp031_ParamLimits

0x5f67,	// (0x00066a23) bg_button_pane_cp031

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe7ca,	// (0x0006f286) cmail_ddmenu_btn03_pane_g1

0xe7e2,	// (0x0006f29e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe7e2,	// (0x0006f29e) cmail_ddmenu_btn03_pane_t1

0xc36e,	// (0x0006ce2a) cell_dialer2_keypad_pane_t1_ParamLimits

0xc388,	// (0x0006ce44) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc388,	// (0x0006ce44) cell_dialer2_keypad_pane_t1_copy1

0xdd99,	// (0x0006e855) ncimui_group_button_pane

0xa636,	// (0x0006b0f2) main_sp_fs_calendar_pane_ParamLimits

0xe4e4,	// (0x0006efa0) list_single_cmail_header_caption_pane_ParamLimits

0x2260,	// (0x00062d1c) aid_recal_txt_sm_pane

0x025e,	// (0x00060d1a) mian_recal_day_pane

0x33de,	// (0x00063e9a) popup_sp_fs_cale_preview_window_ParamLimits

0x025e,	// (0x00060d1a) list_recal_day_pane

0x3638,	// (0x000640f4) list_single_recal_day_pane_ParamLimits

0x3638,	// (0x000640f4) list_single_recal_day_pane

0x364a,	// (0x00064106) list_single_recal_day_pane_g1_ParamLimits

0x364a,	// (0x00064106) list_single_recal_day_pane_g1

0x3656,	// (0x00064112) list_single_recal_day_pane_g2_ParamLimits

0x3656,	// (0x00064112) list_single_recal_day_pane_g2

0x3662,	// (0x0006411e) list_single_recal_day_pane_g3_ParamLimits

0x3662,	// (0x0006411e) list_single_recal_day_pane_g3

0xe806,	// (0x0006f2c2) list_single_recal_day_pane_g4_ParamLimits

0xe806,	// (0x0006f2c2) list_single_recal_day_pane_g4

0x366e,	// (0x0006412a) list_single_recal_day_pane_g5_ParamLimits

0x366e,	// (0x0006412a) list_single_recal_day_pane_g5

0x367a,	// (0x00064136) list_single_recal_day_pane_g6_ParamLimits

0x367a,	// (0x00064136) list_single_recal_day_pane_g6

0x0005,

0xfe71,	// (0x0007092d) list_single_recal_day_pane_g_ParamLimits

0xfe71,	// (0x0007092d) list_single_recal_day_pane_g

0x3686,	// (0x00064142) list_single_recal_day_pane_t1

0x3694,	// (0x00064150) list_single_recal_day_pane_t2

0x0001,

0xfe7e,	// (0x0007093a) list_single_recal_day_pane_t

0xe814,	// (0x0006f2d0) ncimui_query_button_pane_ParamLimits

0xe814,	// (0x0006f2d0) ncimui_query_button_pane

0xe824,	// (0x0006f2e0) ncimui_query_button_pane_t1_ParamLimits

0xe824,	// (0x0006f2e0) ncimui_query_button_pane_t1

0x36a2,	// (0x0006415e) ncimui_query_button_pane_t2_ParamLimits

0x36a2,	// (0x0006415e) ncimui_query_button_pane_t2

0x0001,

0xfe83,	// (0x0007093f) ncimui_query_button_pane_t_ParamLimits

0xfe83,	// (0x0007093f) ncimui_query_button_pane_t

0xe837,	// (0x0006f2f3) query_button_pane_ParamLimits

0xe837,	// (0x0006f2f3) query_button_pane

0x025e,	// (0x00060d1a) bg_button_pane_cp0028

0x36b5,	// (0x00064171) query_button_pane_t1

0xa652,	// (0x0006b10e) main_tport_pane_ParamLimits

0xe400,	// (0x0006eebc) bg_popup_window_pane_cp01_ParamLimits

0xe400,	// (0x0006eebc) bg_popup_window_pane_cp01

0xe40d,	// (0x0006eec9) heading_pane_cp08_ParamLimits

0xe40d,	// (0x0006eec9) heading_pane_cp08

0xe41b,	// (0x0006eed7) heading_pane_cp07_ParamLimits

0xe41b,	// (0x0006eed7) heading_pane_cp07

0xe470,	// (0x0006ef2c) cell_tport_appsw_pane_g2

0x0002,

0xfdcf,	// (0x0007088b) cell_tport_appsw_pane_g

0x4f4a,	// (0x00065a06) input_candi_list_open_g1

0x7bde,	// (0x0006869a) list_cale_time_pane_g6_ParamLimits

0x7bde,	// (0x0006869a) list_cale_time_pane_g6

0xb1fa,	// (0x0006bcb6) aid_size_touch_calib_1_ParamLimits

0xb1fa,	// (0x0006bcb6) aid_size_touch_calib_1

0xb206,	// (0x0006bcc2) aid_size_touch_calib_2_ParamLimits

0xb206,	// (0x0006bcc2) aid_size_touch_calib_2

0xb214,	// (0x0006bcd0) aid_size_touch_calib_3_ParamLimits

0xb214,	// (0x0006bcd0) aid_size_touch_calib_3

0xb224,	// (0x0006bce0) aid_size_touch_calib_4_ParamLimits

0xb224,	// (0x0006bce0) aid_size_touch_calib_4

0xb232,	// (0x0006bcee) main_touch_calib_button_group_pane_ParamLimits

0xb232,	// (0x0006bcee) main_touch_calib_button_group_pane

0xb240,	// (0x0006bcfc) main_touch_calib_pane_g1_ParamLimits

0xb24c,	// (0x0006bd08) main_touch_calib_pane_g2_ParamLimits

0xb258,	// (0x0006bd14) main_touch_calib_pane_g3_ParamLimits

0xb264,	// (0x0006bd20) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00070274) main_touch_calib_pane_g_ParamLimits

0xb270,	// (0x0006bd2c) main_touch_calib_pane_t1_ParamLimits

0xb287,	// (0x0006bd43) main_touch_calib_pane_t2_ParamLimits

0xb29e,	// (0x0006bd5a) main_touch_calib_pane_t3_ParamLimits

0xb2b2,	// (0x0006bd6e) main_touch_calib_pane_t4_ParamLimits

0xb2c8,	// (0x0006bd84) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0007027d) main_touch_calib_pane_t_ParamLimits

0x1592,	// (0x0006204e) list_single_fp_cale_pane_g3_ParamLimits

0x1592,	// (0x0006204e) list_single_fp_cale_pane_g3

0xa636,	// (0x0006b0f2) bg_button_pane_cp012_ParamLimits

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp03_ParamLimits

0xd0fb,	// (0x0006dbb7) cell_vitu2_function_top_pane_g1_ParamLimits

0xa636,	// (0x0006b0f2) bg_vkb2_func_pane_cp04_ParamLimits

0xdd48,	// (0x0006e804) main_ncimui_button_group_pane_ParamLimits

0xdd48,	// (0x0006e804) main_ncimui_button_group_pane

0xdd87,	// (0x0006e843) main_ncimui_pane_t3_ParamLimits

0xdd87,	// (0x0006e843) main_ncimui_pane_t3

0x330b,	// (0x00063dc7) phacti_button_group_pane

0x35ee,	// (0x000640aa) aid_size_list_single_double_ParamLimits

0xe78c,	// (0x0006f248) popup_ezdial_listscroll_window_ParamLimits

0xe7ac,	// (0x0006f268) popup_number_entry_window_cp01_ParamLimits

0xe844,	// (0x0006f300) phacti_button_pane_ParamLimits

0xe844,	// (0x0006f300) phacti_button_pane

0x025e,	// (0x00060d1a) bg_button_pane_cp14

0x36c3,	// (0x0006417f) phacti_button_pane_t1

0xe855,	// (0x0006f311) main_touch_calib_button_pane_ParamLimits

0xe855,	// (0x0006f311) main_touch_calib_button_pane

0x0a2c,	// (0x000614e8) bg_button_pane_cp18_ParamLimits

0x0a2c,	// (0x000614e8) bg_button_pane_cp18

0x36d1,	// (0x0006418d) main_touch_calib_button_pane_t1_ParamLimits

0x36d1,	// (0x0006418d) main_touch_calib_button_pane_t1

0x36e7,	// (0x000641a3) main_touch_calib_button_pane_t2_ParamLimits

0x36e7,	// (0x000641a3) main_touch_calib_button_pane_t2

0x0001,

0xfe88,	// (0x00070944) main_touch_calib_button_pane_t_ParamLimits

0xfe88,	// (0x00070944) main_touch_calib_button_pane_t

0x025e,	// (0x00060d1a) cell_ncimui_button_pane

0x025e,	// (0x00060d1a) bg_button_pane_cp032

0x3705,	// (0x000641c1) cell_ncimui_button_pane_t1

0xc3e4,	// (0x0006cea0) image3_infobar_pane_ParamLimits

0xc3e4,	// (0x0006cea0) image3_infobar_pane

0xe0d1,	// (0x0006eb8d) fs_bigclock_status_pane_ParamLimits

0xe0d1,	// (0x0006eb8d) fs_bigclock_status_pane

0xe0de,	// (0x0006eb9a) main_fs_bigclock_clock_pane_ParamLimits

0xe0de,	// (0x0006eb9a) main_fs_bigclock_clock_pane

0xe0ee,	// (0x0006ebaa) main_fs_bigclock_indi_pane_ParamLimits

0xe0ee,	// (0x0006ebaa) main_fs_bigclock_indi_pane

0xe120,	// (0x0006ebdc) main_fs_bigclock_swipe_pane_ParamLimits

0xe120,	// (0x0006ebdc) main_fs_bigclock_swipe_pane

0x025e,	// (0x00060d1a) main_fs_clock_dumped_data

0x2bf7,	// (0x000636b3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2bf7,	// (0x000636b3) list_single_fs_bigclock_indicator_pane_g1

0x2c17,	// (0x000636d3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2c17,	// (0x000636d3) list_single_fs_bigclock_indicator_pane_g2

0x2c31,	// (0x000636ed) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2c31,	// (0x000636ed) list_single_fs_bigclock_indicator_pane_g3

0x2c4d,	// (0x00063709) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2c4d,	// (0x00063709) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcbb,	// (0x00070777) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcbb,	// (0x00070777) list_single_fs_bigclock_indicator_pane_g

0x2c73,	// (0x0006372f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2c73,	// (0x0006372f) list_single_fs_bigclock_indicator_pane_t1

0x2c9b,	// (0x00063757) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2c9b,	// (0x00063757) list_single_fs_bigclock_indicator_pane_t2

0x2cc3,	// (0x0006377f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2cc3,	// (0x0006377f) list_single_fs_bigclock_indicator_pane_t3

0x2ced,	// (0x000637a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2ced,	// (0x000637a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcc6,	// (0x00070782) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcc6,	// (0x00070782) list_single_fs_bigclock_indicator_pane_t

0x3713,	// (0x000641cf) image3_infobar_fav_pane_ParamLimits

0x3713,	// (0x000641cf) image3_infobar_fav_pane

0x3723,	// (0x000641df) image3_infobar_loc_pane_ParamLimits

0x3723,	// (0x000641df) image3_infobar_loc_pane

0x3739,	// (0x000641f5) image3_infobar_time_pane_ParamLimits

0x3739,	// (0x000641f5) image3_infobar_time_pane

0x11e8,	// (0x00061ca4) image3_infobar_time_pane_g1

0x3749,	// (0x00064205) image3_infobar_time_pane_t1

0x11e8,	// (0x00061ca4) image3_infobar_loc_pane_g1

0x3757,	// (0x00064213) image3_infobar_loc_pane_g2

0x0001,

0xfe8d,	// (0x00070949) image3_infobar_loc_pane_g

0x375f,	// (0x0006421b) image3_infobar_loc_pane_t1

0x11e8,	// (0x00061ca4) image3_infobar_fav_pane_g1

0x376d,	// (0x00064229) image3_infobar_fav_pane_g2

0x0001,

0xfe92,	// (0x0007094e) image3_infobar_fav_pane_g

0x3775,	// (0x00064231) fs_bigclock_status_battery_pane

0x377e,	// (0x0006423a) fs_bigclock_status_signal_pane

0x3787,	// (0x00064243) fs_bigclock_status_title_pane

0x3790,	// (0x0006424c) fs_bigclock_status_signal_pane_g1

0x3799,	// (0x00064255) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe97,	// (0x00070953) fs_bigclock_status_signal_pane_g

0x37a1,	// (0x0006425d) fs_bigclock_status_battery_pane_g1

0x37aa,	// (0x00064266) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9c,	// (0x00070958) fs_bigclock_status_battery_pane_g

0x37b2,	// (0x0006426e) fs_bigclock_status_title_pane_t1

0x11e8,	// (0x00061ca4) main_fs_bigclock_clock_pane_g1

0x37c0,	// (0x0006427c) main_fs_bigclock_clock_pane_g2

0x37c0,	// (0x0006427c) main_fs_bigclock_clock_pane_g3

0x37c0,	// (0x0006427c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea1,	// (0x0007095d) main_fs_bigclock_clock_pane_g

0x37cc,	// (0x00064288) main_fs_bigclock_clock_pane_t1

0x37da,	// (0x00064296) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeaa,	// (0x00070966) main_fs_bigclock_clock_pane_t

0x37e9,	// (0x000642a5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x37e9,	// (0x000642a5) list_single_fs_bigclock_indicator_pane

0xe867,	// (0x0006f323) list_single_fs_bigclock_pane_ParamLimits

0xe867,	// (0x0006f323) list_single_fs_bigclock_pane

0x3803,	// (0x000642bf) main_fs_bigclock_indicator_pane_t1

0x3812,	// (0x000642ce) list_single_fs_bigclock_pane_g1

0x381a,	// (0x000642d6) list_single_fs_bigclock_pane_t1

0x11e8,	// (0x00061ca4) main_fs_bigclock_swipe_pane_g1

0x3858,	// (0x00064314) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebb,	// (0x00070977) main_fs_bigclock_swipe_pane_g

0x3860,	// (0x0006431c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3860,	// (0x0006431c) main_fs_bigclock_swipe_pane_t1

0x7ec6,	// (0x00068982) call_type_pane_ParamLimits

0x025e,	// (0x00060d1a) main_btmg_pane

0x5b80,	// (0x0006663c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5b80,	// (0x0006663c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe2e,	// (0x000708ea) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe2e,	// (0x000708ea) list_single_cale_mrui_row_pane_g

0x3628,	// (0x000640e4) list_recal_vselct_arw_lo_pane

0x3630,	// (0x000640ec) list_recal_vselct_arw_up_pane

0x2257,	// (0x00062d13) list_recal_vselct_pane

0x387d,	// (0x00064339) btmg_button_pane

0xe8ca,	// (0x0006f386) main_btmg_pane_g1

0x025e,	// (0x00060d1a) bg_button_pane_cp044

0x3887,	// (0x00064343) btmg_button_pane_t1

0xa613,	// (0x0006b0cf) aid_listscroll_gen

0xa636,	// (0x0006b0f2) main_cntbar_detail_pane

0x31fa,	// (0x00063cb6) list_cmail_folder_pane

0x320a,	// (0x00063cc6) sp_fs_scroll_pane_cp03_ParamLimits

0xf118,	// (0x0006fbd4) list_single_fs_dyc_pane_cp01_ParamLimits

0xf118,	// (0x0006fbd4) list_single_fs_dyc_pane_cp01

0x3895,	// (0x00064351) aid_size_cmail_indent

0x5ca0,	// (0x0006675c) list_single_dyc_row_pane_cp01

0xe8f2,	// (0x0006f3ae) cntbar_detail_list_pane_ParamLimits

0xe8f2,	// (0x0006f3ae) cntbar_detail_list_pane

0xe932,	// (0x0006f3ee) main_cntbar_detail_cont_pane_ParamLimits

0xe932,	// (0x0006f3ee) main_cntbar_detail_cont_pane

0x7dac,	// (0x00068868) scroll_pane_cp032_ParamLimits

0x7dac,	// (0x00068868) scroll_pane_cp032

0xe93e,	// (0x0006f3fa) cntbar_detail_list_event_pane_ParamLimits

0xe93e,	// (0x0006f3fa) cntbar_detail_list_event_pane

0xe900,	// (0x0006f3bc) cntbar_detail_list_shct_pane

0x0f6c,	// (0x00061a28) aid_list_gen

0x38a7,	// (0x00064363) aid_scroll

0x38b0,	// (0x0006436c) aid_size_touch_scroll_bar

0x38b9,	// (0x00064375) aid_list_double

0x38c2,	// (0x0006437e) aid_list_single

0xe94e,	// (0x0006f40a) aid_list_single_lg

0x5ca9,	// (0x00066765) aid_list_z_g_a_sm

0xe957,	// (0x0006f413) aid_list_z_g_d

0x5cb1,	// (0x0006676d) aid_txt_z_prm

0x5cbf,	// (0x0006677b) aid_txt_z_prm_cp01

0x5ccd,	// (0x00066789) aid_txt_z_sec

0xe95f,	// (0x0006f41b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe95f,	// (0x0006f41b) main_cntbar_detail_cont_pane_g1

0xe96c,	// (0x0006f428) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe96c,	// (0x0006f428) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec0,	// (0x0007097c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec0,	// (0x0007097c) main_cntbar_detail_cont_pane_g

0x38e9,	// (0x000643a5) main_cntbar_detail_cont_pane_t1

0x38f7,	// (0x000643b3) main_cntbar_detail_cont_pane_t2

0x3905,	// (0x000643c1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec5,	// (0x00070981) main_cntbar_detail_cont_pane_t

0xe978,	// (0x0006f434) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe978,	// (0x0006f434) cell_cntbar_detail_list_shct_pane

0x3913,	// (0x000643cf) cntbar_detail_list_shct_pane_g1

0x391c,	// (0x000643d8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfecc,	// (0x00070988) cntbar_detail_list_shct_pane_g

0xe98c,	// (0x0006f448) cntbar_detail_list_event_pane_g1_ParamLimits

0xe98c,	// (0x0006f448) cntbar_detail_list_event_pane_g1

0xe998,	// (0x0006f454) cntbar_detail_list_event_pane_g2_ParamLimits

0xe998,	// (0x0006f454) cntbar_detail_list_event_pane_g2

0x0005,

0xfed1,	// (0x0007098d) cntbar_detail_list_event_pane_g_ParamLimits

0xfed1,	// (0x0007098d) cntbar_detail_list_event_pane_g

0xea06,	// (0x0006f4c2) cntbar_detail_list_event_pane_t1_ParamLimits

0xea06,	// (0x0006f4c2) cntbar_detail_list_event_pane_t1

0xea1b,	// (0x0006f4d7) cntbar_detail_list_event_pane_t2_ParamLimits

0xea1b,	// (0x0006f4d7) cntbar_detail_list_event_pane_t2

0x0002,

0xfede,	// (0x0007099a) cntbar_detail_list_event_pane_t_ParamLimits

0xfede,	// (0x0007099a) cntbar_detail_list_event_pane_t

0x11e8,	// (0x00061ca4) cell_cntbar_detail_list_shct_pane_g1

0x84f3,	// (0x00068faf) navi_pane_mv_g3

0xa636,	// (0x0006b0f2) main_cntbar_detail_pane_ParamLimits

0x025e,	// (0x00060d1a) main_notif_wgt_pane

0xc0b8,	// (0x0006cb74) aid_tch_main_mp4_pane_g4

0xc2cd,	// (0x0006cd89) popup_slider_window_cp02

0x361f,	// (0x000640db) list_recal_day_event_pane

0xe8d2,	// (0x0006f38e) cntbar_detail_btn_pane_ParamLimits

0xe8d2,	// (0x0006f38e) cntbar_detail_btn_pane

0xe8e2,	// (0x0006f39e) cntbar_detail_btn_pane_cp01_ParamLimits

0xe8e2,	// (0x0006f39e) cntbar_detail_btn_pane_cp01

0xe900,	// (0x0006f3bc) cntbar_detail_list_shct_pane_ParamLimits

0xe90c,	// (0x0006f3c8) cntbar_detail_pane_g1_ParamLimits

0xe90c,	// (0x0006f3c8) cntbar_detail_pane_g1

0xe91c,	// (0x0006f3d8) cntbar_detail_pane_t1_ParamLimits

0xe91c,	// (0x0006f3d8) cntbar_detail_pane_t1

0xe9a4,	// (0x0006f460) cntbar_detail_list_event_pane_g3_ParamLimits

0xe9a4,	// (0x0006f460) cntbar_detail_list_event_pane_g3

0xe9bc,	// (0x0006f478) cntbar_detail_list_event_pane_g4_ParamLimits

0xe9bc,	// (0x0006f478) cntbar_detail_list_event_pane_g4

0xe9d4,	// (0x0006f490) cntbar_detail_list_event_pane_g5_ParamLimits

0xe9d4,	// (0x0006f490) cntbar_detail_list_event_pane_g5

0xe9ec,	// (0x0006f4a8) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9ec,	// (0x0006f4a8) cntbar_detail_list_event_pane_g6

0xea30,	// (0x0006f4ec) cntbar_detail_list_event_pane_t3_ParamLimits

0xea30,	// (0x0006f4ec) cntbar_detail_list_event_pane_t3

0xea42,	// (0x0006f4fe) popup_notif_wgt_window_ParamLimits

0xea42,	// (0x0006f4fe) popup_notif_wgt_window

0xea52,	// (0x0006f50e) popup_submenu_window_cp01_ParamLimits

0xea52,	// (0x0006f50e) popup_submenu_window_cp01

0x855f,	// (0x0006901b) bg_popup_window_pane_cp10

0x3925,	// (0x000643e1) listscroll_notif_wgt_pane

0x392f,	// (0x000643eb) list_notif_wgt_window

0x3938,	// (0x000643f4) scroll_pane_cp033

0x3941,	// (0x000643fd) list_notif_wgt_row_pane_ParamLimits

0x3941,	// (0x000643fd) list_notif_wgt_row_pane

0x3955,	// (0x00064411) aid_size_list_notif_wgt_del

0x395e,	// (0x0006441a) list_notif_wgt_row_pane_g1

0x3966,	// (0x00064422) list_notif_wgt_row_pane_g2

0x396e,	// (0x0006442a) list_notif_wgt_row_pane_g3

0x0002,

0xfee5,	// (0x000709a1) list_notif_wgt_row_pane_g

0x3977,	// (0x00064433) list_notif_wgt_row_pane_t1

0x3985,	// (0x00064441) list_notif_wgt_row_pane_t2

0x3993,	// (0x0006444f) list_notif_wgt_row_pane_t3

0x0002,

0xfeec,	// (0x000709a8) list_notif_wgt_row_pane_t

0x1f3f,	// (0x000629fb) list_recal_day_event_pane_g1

0x39a1,	// (0x0006445d) list_recal_day_event_pane_t1

0x025e,	// (0x00060d1a) bg_button_pane_cp045

0x39b0,	// (0x0006446c) cntbar_detail_btn_pane_t1

0xa628,	// (0x0006b0e4) main_callh_pane_ParamLimits

0xa628,	// (0x0006b0e4) main_callh_pane

0x025e,	// (0x00060d1a) main_coverflow0_pane

0x025e,	// (0x00060d1a) main_wgtman_pane

0xe138,	// (0x0006ebf4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xe138,	// (0x0006ebf4) main_fs_bigclock_unlock_btn_pane

0xe460,	// (0x0006ef1c) bg_button_pane_cp16

0xe478,	// (0x0006ef34) cell_tport_appsw_pane_g3

0xea60,	// (0x0006f51c) cf0_flow_pane_ParamLimits

0xea60,	// (0x0006f51c) cf0_flow_pane

0x39be,	// (0x0006447a) listscroll_cf0_pane

0x39c7,	// (0x00064483) main_cf0_pane_g1

0xea6f,	// (0x0006f52b) main_cf0_pane_t1_ParamLimits

0xea6f,	// (0x0006f52b) main_cf0_pane_t1

0xea83,	// (0x0006f53f) main_cf0_pane_t2_ParamLimits

0xea83,	// (0x0006f53f) main_cf0_pane_t2

0x0001,

0xfef3,	// (0x000709af) main_cf0_pane_t_ParamLimits

0xfef3,	// (0x000709af) main_cf0_pane_t

0x39d1,	// (0x0006448d) scroll_pane_cp11

0xea97,	// (0x0006f553) cf0_flow_pane_g1

0xea9f,	// (0x0006f55b) cf0_flow_pane_g2

0x0001,

0xfef8,	// (0x000709b4) cf0_flow_pane_g

0xeaa7,	// (0x0006f563) cf0_flow_pane_t1

0x025e,	// (0x00060d1a) main_call6_pane

0x025e,	// (0x00060d1a) main_calllock_pane

0xeab5,	// (0x0006f571) call6_btn_grp_pane_ParamLimits

0xeab5,	// (0x0006f571) call6_btn_grp_pane

0xeac4,	// (0x0006f580) call6_pane_g1_ParamLimits

0xeac4,	// (0x0006f580) call6_pane_g1

0xead4,	// (0x0006f590) popup_call6_1st_window_ParamLimits

0xead4,	// (0x0006f590) popup_call6_1st_window

0xeae2,	// (0x0006f59e) popup_call6_2nd_window_ParamLimits

0xeae2,	// (0x0006f59e) popup_call6_2nd_window

0xeaf0,	// (0x0006f5ac) cell_call6_btn_pane_ParamLimits

0xeaf0,	// (0x0006f5ac) cell_call6_btn_pane

0x855f,	// (0x0006901b) bg_popup_call2_in_pane_cp03

0x39dc,	// (0x00064498) popup_call6_1st_window_g1

0x39e4,	// (0x000644a0) popup_call6_1st_window_g2

0x39ec,	// (0x000644a8) popup_call6_1st_window_g3

0x0002,

0xfefd,	// (0x000709b9) popup_call6_1st_window_g

0x39f4,	// (0x000644b0) popup_call6_1st_window_t1

0x3a03,	// (0x000644bf) popup_call6_1st_window_t2

0x3a13,	// (0x000644cf) popup_call6_1st_window_t3

0x0002,

0xff04,	// (0x000709c0) popup_call6_1st_window_t

0x855f,	// (0x0006901b) bg_popup_call2_in_pane_cp04

0x39dc,	// (0x00064498) popup_call6_2nd_window_g1

0x39e4,	// (0x000644a0) popup_call6_2nd_window_g2

0x39ec,	// (0x000644a8) popup_call6_2nd_window_g3

0x0002,

0xfefd,	// (0x000709b9) popup_call6_2nd_window_g

0x39f4,	// (0x000644b0) popup_call6_2nd_window_t1

0x025e,	// (0x00060d1a) bg_button_pane_cp15

0x3a23,	// (0x000644df) cell_call6_btn_pane_g1

0x3a2c,	// (0x000644e8) cell_call6_btn_pane_t1

0xeaff,	// (0x0006f5bb) listscroll_wgtman_pane_ParamLimits

0xeaff,	// (0x0006f5bb) listscroll_wgtman_pane

0xeb0e,	// (0x0006f5ca) wgtman_btn_pane_ParamLimits

0xeb0e,	// (0x0006f5ca) wgtman_btn_pane

0x817d,	// (0x00068c39) aid_scroll_copy1

0x3a3b,	// (0x000644f7) list_wgtman_pane

0xeb1c,	// (0x0006f5d8) wgtman_btn_pane_g1_ParamLimits

0xeb1c,	// (0x0006f5d8) wgtman_btn_pane_g1

0xeb28,	// (0x0006f5e4) wgtman_btn_pane_t1_ParamLimits

0xeb28,	// (0x0006f5e4) wgtman_btn_pane_t1

0x3a45,	// (0x00064501) wgtman_btn_pane_t2_ParamLimits

0x3a45,	// (0x00064501) wgtman_btn_pane_t2

0x0001,

0xff0b,	// (0x000709c7) wgtman_btn_pane_t_ParamLimits

0xff0b,	// (0x000709c7) wgtman_btn_pane_t

0x3a59,	// (0x00064515) listrow_wgtman_pane_ParamLimits

0x3a59,	// (0x00064515) listrow_wgtman_pane

0x3a6d,	// (0x00064529) listrow_wgtman_pane_g1

0xeb3a,	// (0x0006f5f6) listrow_wgtman_pane_g2

0x0001,

0xff10,	// (0x000709cc) listrow_wgtman_pane_g

0x5cdb,	// (0x00066797) listrow_wgtman_pane_t1

0x5ce9,	// (0x000667a5) listrow_wgtman_pane_t2

0x0001,

0xff15,	// (0x000709d1) listrow_wgtman_pane_t

0x5cf7,	// (0x000667b3) wait_bar_pane_cp09

0x3a9a,	// (0x00064556) main_calllock_btn_pane

0x3aa4,	// (0x00064560) main_calllock_pane_g1

0x025e,	// (0x00060d1a) bg_button_pane_cp17

0x3ab0,	// (0x0006456c) main_calllock_btn_pane_g1

0x3ab9,	// (0x00064575) main_calllock_btn_pane_t1

0x025e,	// (0x00060d1a) main_dialer3_pane

0x025e,	// (0x00060d1a) main_fmrd2_pane

0x11e8,	// (0x00061ca4) main_fs_bigclock_unlock_btn_pane_g1

0x3ad0,	// (0x0006458c) main_fs_bigclock_unlock_btn_pane_t1

0xeb44,	// (0x0006f600) area_fmrd2_info_pane_ParamLimits

0xeb44,	// (0x0006f600) area_fmrd2_info_pane

0xeb53,	// (0x0006f60f) area_fmrd2_visual_pane_ParamLimits

0xeb53,	// (0x0006f60f) area_fmrd2_visual_pane

0xeb61,	// (0x0006f61d) fmrd2_indi_pane_ParamLimits

0xeb61,	// (0x0006f61d) fmrd2_indi_pane

0xeb6e,	// (0x0006f62a) area_fmrd2_visual_pane_g1

0xeb76,	// (0x0006f632) area_fmrd2_visual_pane_t1

0xeb86,	// (0x0006f642) area_fmrd2_visual_pane_t2

0xeb96,	// (0x0006f652) area_fmrd2_visual_pane_t3

0x0002,

0xff1f,	// (0x000709db) area_fmrd2_visual_pane_t

0xeba6,	// (0x0006f662) area_fmrd2_info_pane_g1

0xebae,	// (0x0006f66a) area_fmrd2_info_pane_t1

0xebbe,	// (0x0006f67a) area_fmrd2_info_pane_t2

0xebce,	// (0x0006f68a) area_fmrd2_info_pane_t3

0xebde,	// (0x0006f69a) area_fmrd2_info_pane_t4

0x0003,

0xff26,	// (0x000709e2) area_fmrd2_info_pane_t

0xebee,	// (0x0006f6aa) fmrd2_indi_pane_t1

0xebfe,	// (0x0006f6ba) fmrd2_indi_pane_t2

0xec0e,	// (0x0006f6ca) fmrd2_indi_pane_t3

0x0002,

0xff2f,	// (0x000709eb) fmrd2_indi_pane_t

0x2c5c,	// (0x00063718) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2c5c,	// (0x00063718) list_single_fs_bigclock_indicator_pane_g5

0x2d02,	// (0x000637be) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2d02,	// (0x000637be) list_single_fs_bigclock_indicator_pane_t5

0xe5e3,	// (0x0006f09f) aid_cell_bcale_month_pane_ParamLimits

0xe5e3,	// (0x0006f09f) aid_cell_bcale_month_pane

0xe5ef,	// (0x0006f0ab) bcale_month_pane_ParamLimits

0xe5ef,	// (0x0006f0ab) bcale_month_pane

0xe5fd,	// (0x0006f0b9) bcale_preview_pane_ParamLimits

0xe5fd,	// (0x0006f0b9) bcale_preview_pane

0x381a,	// (0x000642d6) list_single_fs_bigclock_pane_t1_ParamLimits

0x3834,	// (0x000642f0) list_single_fs_bigclock_pane_t2_ParamLimits

0x3834,	// (0x000642f0) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb6,	// (0x00070972) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00070972) list_single_fs_bigclock_pane_t

0x3ac8,	// (0x00064584) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1a,	// (0x000709d6) main_fs_bigclock_unlock_btn_pane_g

0xec1e,	// (0x0006f6da) aid_dia3_key_size_ParamLimits

0xec1e,	// (0x0006f6da) aid_dia3_key_size

0xec2a,	// (0x0006f6e6) aid_dia3_listrow_size_ParamLimits

0xec2a,	// (0x0006f6e6) aid_dia3_listrow_size

0xec38,	// (0x0006f6f4) dia3_keypad_fun_pane_ParamLimits

0xec38,	// (0x0006f6f4) dia3_keypad_fun_pane

0xec48,	// (0x0006f704) dia3_keypad_num_pane_ParamLimits

0xec48,	// (0x0006f704) dia3_keypad_num_pane

0xec58,	// (0x0006f714) dia3_listscroll_pane_ParamLimits

0xec58,	// (0x0006f714) dia3_listscroll_pane

0xec66,	// (0x0006f722) dia3_numentry_pane_ParamLimits

0xec66,	// (0x0006f722) dia3_numentry_pane

0xec74,	// (0x0006f730) dia3_list_pane

0xec7f,	// (0x0006f73b) scroll_pane_cp12

0x025e,	// (0x00060d1a) bg_dia3_numentry_pane

0xec8a,	// (0x0006f746) dia3_numentry_pane_t1

0xec99,	// (0x0006f755) cell_dia3_key_num_pane

0xeca1,	// (0x0006f75d) cell_dia3_key0_fun_pane_ParamLimits

0xeca1,	// (0x0006f75d) cell_dia3_key0_fun_pane

0xecae,	// (0x0006f76a) cell_dia3_key1_fun_pane_ParamLimits

0xecae,	// (0x0006f76a) cell_dia3_key1_fun_pane

0xecbb,	// (0x0006f777) dia3_listrow_pane

0x2974,	// (0x00063430) bg_dia3_numentry_pane_g1

0x025e,	// (0x00060d1a) bg_button_pane_cp21

0xecc4,	// (0x0006f780) cell_dia3_key_num_pane_t1

0xecd2,	// (0x0006f78e) cell_dia3_key_num_pane_t2

0xece1,	// (0x0006f79d) cell_dia3_key_num_pane_t3

0xecf0,	// (0x0006f7ac) cell_dia3_key_num_pane_t4

0x0003,

0xff36,	// (0x000709f2) cell_dia3_key_num_pane_t

0x025e,	// (0x00060d1a) bg_button_pane_cp19

0xecff,	// (0x0006f7bb) cell_dia3_key0_fun_pane_g1

0x025e,	// (0x00060d1a) bg_button_pane_cp20

0xed07,	// (0x0006f7c3) cell_dia3_key1_fun_pane_g1

0xed0f,	// (0x0006f7cb) area_left_week_number_pane

0xed18,	// (0x0006f7d4) area_top_day_name_pane

0xed21,	// (0x0006f7dd) frame_month_view_pane

0xed2b,	// (0x0006f7e7) grid_month_view_pane

0xed35,	// (0x0006f7f1) cell_top_day_name_pane_ParamLimits

0xed35,	// (0x0006f7f1) cell_top_day_name_pane

0xed51,	// (0x0006f80d) cell_area_left_week_number_pane_ParamLimits

0xed51,	// (0x0006f80d) cell_area_left_week_number_pane

0xed65,	// (0x0006f821) cell_month_view_pane_ParamLimits

0xed65,	// (0x0006f821) cell_month_view_pane

0xed84,	// (0x0006f840) frm_month_g1

0xed8d,	// (0x0006f849) frm_month_g2

0xed97,	// (0x0006f853) frm_month_g3

0xeda1,	// (0x0006f85d) frm_month_g4

0xedab,	// (0x0006f867) frm_month_g5

0xedb5,	// (0x0006f871) frm_month_g6

0xedbf,	// (0x0006f87b) frm_month_g7

0xedc9,	// (0x0006f885) frm_month_g8

0xedd2,	// (0x0006f88e) frm_month_g9

0xeddb,	// (0x0006f897) frm_month_g10

0xede4,	// (0x0006f8a0) frm_month_g11

0xeded,	// (0x0006f8a9) frm_month_g12

0xedf6,	// (0x0006f8b2) frm_month_g13

0xee01,	// (0x0006f8bd) frm_month_g14

0xee0c,	// (0x0006f8c8) frm_month_g15

0xee17,	// (0x0006f8d3) frm_month_g16

0x000f,

0xff3f,	// (0x000709fb) frm_month_g

0xee22,	// (0x0006f8de) cell_top_day_name_pane_t1

0xee31,	// (0x0006f8ed) cell_area_left_week_number_pane_g1

0xee22,	// (0x0006f8de) cell_area_left_week_number_pane_t1

0x11e8,	// (0x00061ca4) cell_month_view_pane_g1

0xee39,	// (0x0006f8f5) cell_month_view_pane_t1

0x025e,	// (0x00060d1a) main_fps_pane

0x2f37,	// (0x000639f3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2f37,	// (0x000639f3) cmail_ddmenu_btn02_pane_cp1

0x2f53,	// (0x00063a0f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2f53,	// (0x00063a0f) cmail_ddmenu_btn02_pane_cp2

0xe7d6,	// (0x0006f292) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7d6,	// (0x0006f292) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe67,	// (0x00070923) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe67,	// (0x00070923) cmail_ddmenu_btn02_pane_g

0xe7f4,	// (0x0006f2b0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7f4,	// (0x0006f2b0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6c,	// (0x00070928) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6c,	// (0x00070928) cmail_ddmenu_btn02_pane_t

0xee48,	// (0x0006f904) fps_text_pane_ParamLimits

0xee48,	// (0x0006f904) fps_text_pane

0xee55,	// (0x0006f911) main_fps_pane_g1_ParamLimits

0xee55,	// (0x0006f911) main_fps_pane_g1

0xee61,	// (0x0006f91d) wait_bar_pane_cp010_ParamLimits

0xee61,	// (0x0006f91d) wait_bar_pane_cp010

0xee6d,	// (0x0006f929) fps_text_pane_t1_ParamLimits

0xee6d,	// (0x0006f929) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
